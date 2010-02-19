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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008ff1c };

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
0x097a,	// (0x00090896) Screen

0x0986,	// (0x000908a2) application_window

0x09f8,	// (0x00090914) area_bottom_pane_ParamLimits

0x09f8,	// (0x00090914) area_bottom_pane

0x0a56,	// (0x00090972) area_top_pane_ParamLimits

0x0a56,	// (0x00090972) area_top_pane

0x0ab3,	// (0x000909cf) call_video_uplink_pane_ParamLimits

0x0ab3,	// (0x000909cf) call_video_uplink_pane

0x0adf,	// (0x000909fb) main_pane_ParamLimits

0x0adf,	// (0x000909fb) main_pane

0x45cc,	// (0x000944e8) context_pane

0x45df,	// (0x000944fb) navi_pane

0x460f,	// (0x0009452b) popup_cale_events_window_ParamLimits

0x460f,	// (0x0009452b) popup_cale_events_window

0x4627,	// (0x00094543) popup_mup_playback_window

0x462f,	// (0x0009454b) signal_pane

0xa482,	// (0x0009a39e) main_browser_pane

0xe1a5,	// (0x0009e0c1) main_burst_pane

0x427d,	// (0x00094199) main_calc_pane

0xe1a5,	// (0x0009e0c1) main_cale_day_pane

0xa482,	// (0x0009a39e) main_cale_month_pane

0xe1a5,	// (0x0009e0c1) main_cale_week_pane

0xe1a5,	// (0x0009e0c1) main_call_pane

0xa128,	// (0x0009a044) main_call_poc_pane

0xe1a5,	// (0x0009e0c1) main_camera_pane

0xe1a5,	// (0x0009e0c1) main_chi_dic_pane

0xe047,	// (0x0009df63) main_clock_pane

0xa128,	// (0x0009a044) main_fmradio_pane

0xe1a5,	// (0x0009e0c1) main_graph_messa_pane

0xa128,	// (0x0009a044) main_help_pane

0xa482,	// (0x0009a39e) main_im_pane

0xa383,	// (0x0009a29f) main_image_pane_ParamLimits

0xa383,	// (0x0009a29f) main_image_pane

0xa128,	// (0x0009a044) main_location2_pane

0xe1a5,	// (0x0009e0c1) main_location_pane

0xa128,	// (0x0009a044) main_messa_pane

0xa128,	// (0x0009a044) main_mp2_pane

0xe1a5,	// (0x0009e0c1) main_mp_pane

0xa128,	// (0x0009a044) main_msg_pane

0xa128,	// (0x0009a044) main_mup_eq_pane

0xa128,	// (0x0009a044) main_mup_pane

0xa482,	// (0x0009a39e) main_notes_pane

0xa128,	// (0x0009a044) main_pec_pane

0xa128,	// (0x0009a044) main_phob_pane

0xa128,	// (0x0009a044) main_pinb_pane

0xa128,	// (0x0009a044) main_postcard_pane

0xa128,	// (0x0009a044) main_qdial_pane

0xe1a5,	// (0x0009e0c1) main_skin_pane

0xa128,	// (0x0009a044) main_smil2_pane

0xe1a5,	// (0x0009e0c1) main_smil_pane

0xe1a5,	// (0x0009e0c1) main_video_pane

0xe1a5,	// (0x0009e0c1) main_video_tele_pane

0xa383,	// (0x0009a29f) main_viewer_pane_ParamLimits

0xa383,	// (0x0009a29f) main_viewer_pane

0xe1a5,	// (0x0009e0c1) main_vorec_pane

0x42e9,	// (0x00094205) popup_blid_sat_info_window_ParamLimits

0x42e9,	// (0x00094205) popup_blid_sat_info_window

0x4359,	// (0x00094275) popup_dyc_status_message_window_ParamLimits

0x4359,	// (0x00094275) popup_dyc_status_message_window

0x4373,	// (0x0009428f) popup_grid_large_graphic_window_ParamLimits

0x4373,	// (0x0009428f) popup_grid_large_graphic_window

0x4452,	// (0x0009436e) popup_loc_request_window_ParamLimits

0x4452,	// (0x0009436e) popup_loc_request_window

0x45a0,	// (0x000944bc) popup_wml_address_window_ParamLimits

0x45a0,	// (0x000944bc) popup_wml_address_window

0x4082,	// (0x00093f9e) call_muted_g1

0x3869,	// (0x00093785) popup_call_audio_conf_window_ParamLimits

0x3869,	// (0x00093785) popup_call_audio_conf_window

0x4092,	// (0x00093fae) popup_call_audio_first_window_ParamLimits

0x4092,	// (0x00093fae) popup_call_audio_first_window

0x4108,	// (0x00094024) popup_call_audio_in_window_ParamLimits

0x4108,	// (0x00094024) popup_call_audio_in_window

0x4144,	// (0x00094060) popup_call_audio_out_window_ParamLimits

0x4144,	// (0x00094060) popup_call_audio_out_window

0x417e,	// (0x0009409a) popup_call_audio_second_window_ParamLimits

0x417e,	// (0x0009409a) popup_call_audio_second_window

0x41d4,	// (0x000940f0) popup_call_audio_wait_window_ParamLimits

0x41d4,	// (0x000940f0) popup_call_audio_wait_window

0x4209,	// (0x00094125) popup_number_entry_window_ParamLimits

0x4209,	// (0x00094125) popup_number_entry_window

0x0c7e,	// (0x00090b9a) bg_popup_call_pane_cp05_ParamLimits

0x0c7e,	// (0x00090b9a) bg_popup_call_pane_cp05

0x0c9e,	// (0x00090bba) popup_number_entry_window_t1

0x0cb1,	// (0x00090bcd) popup_number_entry_window_t2

0x0cc3,	// (0x00090bdf) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x0009f003) popup_number_entry_window_t

0x0d0a,	// (0x00090c26) text_title_cp2

0x0d1d,	// (0x00090c39) bg_popup_call_pane_cp_ParamLimits

0x0d1d,	// (0x00090c39) bg_popup_call_pane_cp

0x0d2b,	// (0x00090c47) call_thumbnail_pane

0x0d33,	// (0x00090c4f) popup_call_audio_in_window_g1_ParamLimits

0x0d33,	// (0x00090c4f) popup_call_audio_in_window_g1

0x0d3f,	// (0x00090c5b) popup_call_audio_in_window_g2_ParamLimits

0x0d3f,	// (0x00090c5b) popup_call_audio_in_window_g2

0x0d4b,	// (0x00090c67) popup_call_audio_in_window_g3_ParamLimits

0x0d4b,	// (0x00090c67) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x0009f00c) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x0009f00c) popup_call_audio_in_window_g

0x0d57,	// (0x00090c73) popup_call_audio_in_window_t1_ParamLimits

0x0d57,	// (0x00090c73) popup_call_audio_in_window_t1

0x0d73,	// (0x00090c8f) popup_call_audio_in_window_t2_ParamLimits

0x0d73,	// (0x00090c8f) popup_call_audio_in_window_t2

0x0d8f,	// (0x00090cab) popup_call_audio_in_window_t3_ParamLimits

0x0d8f,	// (0x00090cab) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x0009f013) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x0009f013) popup_call_audio_in_window_t

0x0d1d,	// (0x00090c39) bg_popup_call_pane_cp01_ParamLimits

0x0d1d,	// (0x00090c39) bg_popup_call_pane_cp01

0x0d2b,	// (0x00090c47) call_thumbnail_pane_cp02

0x0da2,	// (0x00090cbe) call_type_pane_cp022

0x0daa,	// (0x00090cc6) popup_call_audio_out_window_g1_ParamLimits

0x0daa,	// (0x00090cc6) popup_call_audio_out_window_g1

0x0dbc,	// (0x00090cd8) popup_call_audio_out_window_g2_ParamLimits

0x0dbc,	// (0x00090cd8) popup_call_audio_out_window_g2

0x0dc8,	// (0x00090ce4) popup_call_audio_out_window_g3_ParamLimits

0x0dc8,	// (0x00090ce4) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x0009f01a) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x0009f01a) popup_call_audio_out_window_g

0x0dda,	// (0x00090cf6) popup_call_audio_out_window_t1_ParamLimits

0x0dda,	// (0x00090cf6) popup_call_audio_out_window_t1

0x0df2,	// (0x00090d0e) popup_call_audio_out_window_t2_ParamLimits

0x0df2,	// (0x00090d0e) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x0009f021) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x0009f021) popup_call_audio_out_window_t

0x0e07,	// (0x00090d23) bg_popup_call_pane_ParamLimits

0x0e07,	// (0x00090d23) bg_popup_call_pane

0x0e8b,	// (0x00090da7) call_thumbnail_pane_cp_ParamLimits

0x0e8b,	// (0x00090da7) call_thumbnail_pane_cp

0x9eed,	// (0x00099e09) call_type_pane_cp01_ParamLimits

0x9eed,	// (0x00099e09) call_type_pane_cp01

0x9f31,	// (0x00099e4d) popup_call_audio_first_window_g1_ParamLimits

0x9f31,	// (0x00099e4d) popup_call_audio_first_window_g1

0x9f7d,	// (0x00099e99) popup_call_audio_first_window_g2_ParamLimits

0x9f7d,	// (0x00099e99) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x0009f026) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x0009f026) popup_call_audio_first_window_g

0x9fc1,	// (0x00099edd) popup_call_audio_first_window_t1_ParamLimits

0x9fc1,	// (0x00099edd) popup_call_audio_first_window_t1

0xa06d,	// (0x00099f89) popup_call_audio_first_window_t4_ParamLimits

0xa06d,	// (0x00099f89) popup_call_audio_first_window_t4

0xa0f9,	// (0x0009a015) popup_call_audio_first_window_t5_ParamLimits

0xa0f9,	// (0x0009a015) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x0009f02b) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x0009f02b) popup_call_audio_first_window_t

0xa128,	// (0x0009a044) bg_popup_call_pane_cp02

0xa132,	// (0x0009a04e) call_type_pane_cp023

0xa13a,	// (0x0009a056) popup_call_audio_wait_window_g1

0xa142,	// (0x0009a05e) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x0009f032) popup_call_audio_wait_window_g

0xa14a,	// (0x0009a066) popup_call_audio_wait_window_t3

0xa158,	// (0x0009a074) bg_popup_call_pane_cp03_ParamLimits

0xa158,	// (0x0009a074) bg_popup_call_pane_cp03

0xa1b8,	// (0x0009a0d4) call_thumbnail_pane_cp011_ParamLimits

0xa1b8,	// (0x0009a0d4) call_thumbnail_pane_cp011

0xa1c4,	// (0x0009a0e0) call_type_pane_cp034_ParamLimits

0xa1c4,	// (0x0009a0e0) call_type_pane_cp034

0xa200,	// (0x0009a11c) popup_call_audio_second_window_g1_ParamLimits

0xa200,	// (0x0009a11c) popup_call_audio_second_window_g1

0xa23c,	// (0x0009a158) popup_call_audio_second_window_g2_ParamLimits

0xa23c,	// (0x0009a158) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x0009f037) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x0009f037) popup_call_audio_second_window_g

0xa278,	// (0x0009a194) popup_call_audio_second_window_t1_ParamLimits

0xa278,	// (0x0009a194) popup_call_audio_second_window_t1

0xa2f9,	// (0x0009a215) popup_call_audio_second_window_t2_ParamLimits

0xa2f9,	// (0x0009a215) popup_call_audio_second_window_t2

0xa32f,	// (0x0009a24b) popup_call_audio_second_window_t3_ParamLimits

0xa32f,	// (0x0009a24b) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x0009f03c) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x0009f03c) popup_call_audio_second_window_t

0xa128,	// (0x0009a044) bg_popup_call_pane_cp04

0xa365,	// (0x0009a281) list_conf_pane

0xa36d,	// (0x0009a289) popup_call_audio_conf_window_t1

0xa37b,	// (0x0009a297) call_thumbnail_pane_g1

0xa383,	// (0x0009a29f) bg_pinb_pane_ParamLimits

0xa383,	// (0x0009a29f) bg_pinb_pane

0xa391,	// (0x0009a2ad) find_pinb_pane

0xa39a,	// (0x0009a2b6) listscroll_pinb_pane_ParamLimits

0xa39a,	// (0x0009a2b6) listscroll_pinb_pane

0xa3a9,	// (0x0009a2c5) pinb_bg_pane_g1

0x0eaf,	// (0x00090dcb) pinb_bg_pane_g2

0x0ebb,	// (0x00090dd7) pinb_bg_pane_g3

0x0ec7,	// (0x00090de3) pinb_bg_pane_g4

0x0ed3,	// (0x00090def) pinb_bg_pane_g5

0x0edf,	// (0x00090dfb) pinb_bg_pane_g6

0x0eea,	// (0x00090e06) pinb_bg_pane_g7

0x0ef5,	// (0x00090e11) pinb_bg_pane_g8

0x0f00,	// (0x00090e1c) pinb_bg_pane_g9

0x0f0a,	// (0x00090e26) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x0009f043) pinb_bg_pane_g

0x0f27,	// (0x00090e43) grid_pinb_pane

0x0f32,	// (0x00090e4e) list_pinb_pane

0x0f3d,	// (0x00090e59) scroll_pane_cp01_ParamLimits

0x0f3d,	// (0x00090e59) scroll_pane_cp01

0xa3b3,	// (0x0009a2cf) find_pinb_pane_g1_ParamLimits

0xa3b3,	// (0x0009a2cf) find_pinb_pane_g1

0xa3cb,	// (0x0009a2e7) find_pinb_pane_t1

0xa3dd,	// (0x0009a2f9) find_pinb_pane_t2

0x0001,

0xf141,	// (0x0009f05d) find_pinb_pane_t

0xa3f2,	// (0x0009a30e) input_focus_pane_cp01_ParamLimits

0xa3f2,	// (0x0009a30e) input_focus_pane_cp01

0x0f4f,	// (0x00090e6b) cell_pinb_pane_ParamLimits

0x0f4f,	// (0x00090e6b) cell_pinb_pane

0x0f71,	// (0x00090e8d) cell_pinb_pane_g1_ParamLimits

0x0f71,	// (0x00090e8d) cell_pinb_pane_g1

0x0f85,	// (0x00090ea1) cell_pinb_pane_g2_ParamLimits

0x0f85,	// (0x00090ea1) cell_pinb_pane_g2

0xa3fe,	// (0x0009a31a) cell_pinb_pane_g3_ParamLimits

0xa3fe,	// (0x0009a31a) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x0009f062) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x0009f062) cell_pinb_pane_g

0xa128,	// (0x0009a044) grid_highlight_pane_cp01

0x0f91,	// (0x00090ead) list_pinb_item_pane_ParamLimits

0x0f91,	// (0x00090ead) list_pinb_item_pane

0xa128,	// (0x0009a044) list_highlight_pane_cp02

0x0fa4,	// (0x00090ec0) list_pinb_item_pane_g1_ParamLimits

0x0fa4,	// (0x00090ec0) list_pinb_item_pane_g1

0x0fb1,	// (0x00090ecd) list_pinb_item_pane_g2_ParamLimits

0x0fb1,	// (0x00090ecd) list_pinb_item_pane_g2

0x0fbd,	// (0x00090ed9) list_pinb_item_pane_g3_ParamLimits

0x0fbd,	// (0x00090ed9) list_pinb_item_pane_g3

0x0fce,	// (0x00090eea) list_pinb_item_pane_g4_ParamLimits

0x0fce,	// (0x00090eea) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x0009f069) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x0009f069) list_pinb_item_pane_g

0x0fda,	// (0x00090ef6) list_pinb_item_pane_t1_ParamLimits

0x0fda,	// (0x00090ef6) list_pinb_item_pane_t1

0x100f,	// (0x00090f2b) calc_display_pane

0x1035,	// (0x00090f51) calc_paper_pane

0x1058,	// (0x00090f74) grid_calc_pane

0xa128,	// (0x0009a044) bg_list_pane_cp01

0x1086,	// (0x00090fa2) clock_g1

0x108e,	// (0x00090faa) clock_g2

0x0001,

0xf156,	// (0x0009f072) clock_g

0x1096,	// (0x00090fb2) clock_t1_ParamLimits

0x1096,	// (0x00090fb2) clock_t1

0x10ab,	// (0x00090fc7) clock_t2_ParamLimits

0x10ab,	// (0x00090fc7) clock_t2

0x10bd,	// (0x00090fd9) clock_t3_ParamLimits

0x10bd,	// (0x00090fd9) clock_t3

0x10cf,	// (0x00090feb) clock_t4_ParamLimits

0x10cf,	// (0x00090feb) clock_t4

0x10e1,	// (0x00090ffd) clock_t5_ParamLimits

0x10e1,	// (0x00090ffd) clock_t5

0x10f6,	// (0x00091012) clock_t6_ParamLimits

0x10f6,	// (0x00091012) clock_t6

0x1108,	// (0x00091024) clock_t7_ParamLimits

0x1108,	// (0x00091024) clock_t7

0x111a,	// (0x00091036) clock_t8_ParamLimits

0x111a,	// (0x00091036) clock_t8

0x112e,	// (0x0009104a) clock_t9_ParamLimits

0x112e,	// (0x0009104a) clock_t9

0x0008,

0xf15b,	// (0x0009f077) clock_t_ParamLimits

0xf15b,	// (0x0009f077) clock_t

0xa412,	// (0x0009a32e) popup_clock_analogue_window_cp02

0xa412,	// (0x0009a32e) popup_clock_digital_window_cp01

0xa41a,	// (0x0009a336) listscroll_help_pane

0xa128,	// (0x0009a044) phob_pre_status_pane

0xa424,	// (0x0009a340) grid_qdial_pane

0xa128,	// (0x0009a044) listscroll_mce_pane

0xa42e,	// (0x0009a34a) bg_notes_pane

0xa43c,	// (0x0009a358) list_notes_pane

0x1144,	// (0x00091060) scroll_pane_cp06

0xa44a,	// (0x0009a366) bg_calc_paper_pane

0xa468,	// (0x0009a384) list_calc_pane

0xa482,	// (0x0009a39e) bg_calc_display_pane

0x1158,	// (0x00091074) calc_display_pane_t1

0x116a,	// (0x00091086) calc_display_pane_t2

0xa48e,	// (0x0009a3aa) calc_display_pane_t3

0x0002,

0xf16e,	// (0x0009f08a) calc_display_pane_t

0x117c,	// (0x00091098) cell_calc_pane_ParamLimits

0x117c,	// (0x00091098) cell_calc_pane

0xa4a0,	// (0x0009a3bc) bg_calc_paper_pane_g1

0xa4ac,	// (0x0009a3c8) bg_calc_paper_pane_g2

0xa4b8,	// (0x0009a3d4) bg_calc_paper_pane_g3

0xa4c4,	// (0x0009a3e0) bg_calc_paper_pane_g4

0xa4d0,	// (0x0009a3ec) bg_calc_paper_pane_g5

0x11b7,	// (0x000910d3) bg_calc_paper_pane_g6

0x11ca,	// (0x000910e6) bg_calc_paper_pane_g7

0x11dd,	// (0x000910f9) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x0009f091) bg_calc_paper_pane_g

0x11ee,	// (0x0009110a) calc_bg_paper_pane_g9

0x11ff,	// (0x0009111b) list_calc_item_pane_ParamLimits

0x11ff,	// (0x0009111b) list_calc_item_pane

0xa4dc,	// (0x0009a3f8) list_calc_item_pane_g1

0xa4e9,	// (0x0009a405) list_calc_item_pane_t1_ParamLimits

0xa4e9,	// (0x0009a405) list_calc_item_pane_t1

0x1213,	// (0x0009112f) list_calc_item_pane_t2_ParamLimits

0x1213,	// (0x0009112f) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x0009f0a2) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x0009f0a2) list_calc_item_pane_t

0xa4fb,	// (0x0009a417) cell_calc_pane_g1

0xa505,	// (0x0009a421) grid_highlight_pane_cp02

0xa527,	// (0x0009a443) bg_calc_display_pane_g1

0xa530,	// (0x0009a44c) bg_calc_display_pane_g2

0xa53a,	// (0x0009a456) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x0009f0ac) bg_calc_display_pane_g

0x1245,	// (0x00091161) cell_qdial_pane_ParamLimits

0x1245,	// (0x00091161) cell_qdial_pane

0x125b,	// (0x00091177) cell_qdial_pane_g1_ParamLimits

0x125b,	// (0x00091177) cell_qdial_pane_g1

0x1271,	// (0x0009118d) cell_qdial_pane_g2_ParamLimits

0x1271,	// (0x0009118d) cell_qdial_pane_g2

0xa543,	// (0x0009a45f) cell_qdial_pane_g3_ParamLimits

0xa543,	// (0x0009a45f) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x0009f0b3) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x0009f0b3) cell_qdial_pane_g

0x1297,	// (0x000911b3) cell_qdial_pane_t1_ParamLimits

0x1297,	// (0x000911b3) cell_qdial_pane_t1

0x12af,	// (0x000911cb) cell_qdial_pane_t2_ParamLimits

0x12af,	// (0x000911cb) cell_qdial_pane_t2

0x12c2,	// (0x000911de) cell_qdial_pane_t3_ParamLimits

0x12c2,	// (0x000911de) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x0009f0bc) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x0009f0bc) cell_qdial_pane_t

0xa128,	// (0x0009a044) grid_highlight_pane_cp04

0xa54f,	// (0x0009a46b) thumbnail_qdial_pane_ParamLimits

0xa54f,	// (0x0009a46b) thumbnail_qdial_pane

0xa5ab,	// (0x0009a4c7) list_help_pane

0xa5b4,	// (0x0009a4d0) scroll_pane_cp02

0x12d5,	// (0x000911f1) help_list_pane_t1_ParamLimits

0x12d5,	// (0x000911f1) help_list_pane_t1

0xa5bd,	// (0x0009a4d9) bg_notes_pane_g2

0xa5c5,	// (0x0009a4e1) bg_notes_pane_g3

0xa5cd,	// (0x0009a4e9) notes_bg_pane_g1

0xa5d5,	// (0x0009a4f1) notes_bg_pane_g4

0xa5dd,	// (0x0009a4f9) notes_bg_pane_g5

0xa5e5,	// (0x0009a501) notes_bg_pane_g6

0xa5ed,	// (0x0009a509) notes_bg_pane_g7

0xa5f5,	// (0x0009a511) notes_bg_pane_g8

0xa5fd,	// (0x0009a519) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x0009f0da) notes_bg_pane_g

0x12f9,	// (0x00091215) list_notes_text_pane_ParamLimits

0x12f9,	// (0x00091215) list_notes_text_pane

0xa605,	// (0x0009a521) list_notes_text_pane_g1

0x1313,	// (0x0009122f) list_notes_text_pane_t1

0xa482,	// (0x0009a39e) listscroll_cale_week_pane

0x133e,	// (0x0009125a) bg_cale_heading_pane

0xa61f,	// (0x0009a53b) bg_cale_pane_cp01

0x135a,	// (0x00091276) cale_week_corner_pane

0x1370,	// (0x0009128c) cale_week_day_heading_pane

0x138c,	// (0x000912a8) cale_week_scroll_pane_g1

0x13a5,	// (0x000912c1) cale_week_scroll_pane_g2

0x13b6,	// (0x000912d2) cale_week_scroll_pane_g3

0x13c7,	// (0x000912e3) cale_week_scroll_pane_g4

0x13d8,	// (0x000912f4) cale_week_scroll_pane_g5

0x13e9,	// (0x00091305) cale_week_scroll_pane_g6

0x13fa,	// (0x00091316) cale_week_scroll_pane_g7

0x140b,	// (0x00091327) cale_week_scroll_pane_g8

0x141c,	// (0x00091338) cale_week_scroll_pane_g9

0x142d,	// (0x00091349) cale_week_scroll_pane_g10

0x143e,	// (0x0009135a) cale_week_scroll_pane_g11

0x144f,	// (0x0009136b) cale_week_scroll_pane_g12

0x1460,	// (0x0009137c) cale_week_scroll_pane_g13

0x1479,	// (0x00091395) cale_week_scroll_pane_g14

0x1492,	// (0x000913ae) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x0009f0e9) cale_week_scroll_pane_g

0x14ab,	// (0x000913c7) cale_week_time_pane

0x14bc,	// (0x000913d8) grid_cale_week_pane

0x14d7,	// (0x000913f3) scroll_pane_cp08

0x14ef,	// (0x0009140b) cell_cale_week_pane_ParamLimits

0x14ef,	// (0x0009140b) cell_cale_week_pane

0x1537,	// (0x00091453) cale_week_day_heading_pane_t1

0x154b,	// (0x00091467) cale_week_day_heading_pane_t2

0x155f,	// (0x0009147b) cale_week_day_heading_pane_t3

0x1573,	// (0x0009148f) cale_week_day_heading_pane_t4

0x1587,	// (0x000914a3) cale_week_day_heading_pane_t5

0x159b,	// (0x000914b7) cale_week_day_heading_pane_t6

0x15af,	// (0x000914cb) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x0009f108) cale_week_day_heading_pane_t

0xa64a,	// (0x0009a566) bg_cale_side_pane

0x15c3,	// (0x000914df) cale_week_time_pane_t1

0x15db,	// (0x000914f7) cale_week_time_pane_t2

0x15f3,	// (0x0009150f) cale_week_time_pane_t3

0x160b,	// (0x00091527) cale_week_time_pane_t4

0x1623,	// (0x0009153f) cale_week_time_pane_t5

0x163b,	// (0x00091557) cale_week_time_pane_t6

0x1653,	// (0x0009156f) cale_week_time_pane_t7

0x166f,	// (0x0009158b) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0009f117) cale_week_time_pane_t

0x168f,	// (0x000915ab) cell_cale_week_pane_g2

0x16a0,	// (0x000915bc) cell_cale_week_pane_g3_ParamLimits

0x16a0,	// (0x000915bc) cell_cale_week_pane_g3

0xa658,	// (0x0009a574) grid_highlight_pane_cp07

0xa660,	// (0x0009a57c) listscroll_gms_pane

0xa66a,	// (0x0009a586) grid_gms_pane

0xa673,	// (0x0009a58f) listscroll_gms_pane_g1

0xa67b,	// (0x0009a597) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x0009f128) listscroll_gms_pane_g

0x16b8,	// (0x000915d4) scroll_pane_cp010

0x16c3,	// (0x000915df) cell_gms_pane_ParamLimits

0x16c3,	// (0x000915df) cell_gms_pane

0x16dd,	// (0x000915f9) cell_gms_pane_g1

0xa683,	// (0x0009a59f) cell_gms_pane_g2

0xa68b,	// (0x0009a5a7) cell_gms_pane_g3

0xa694,	// (0x0009a5b0) cell_gms_pane_g4

0x0003,

0xf211,	// (0x0009f12d) cell_gms_pane_g

0xa69d,	// (0x0009a5b9) grid_highlight_pane_cp09

0x400a,	// (0x00093f26) phob_pre_status_pane_g1

0x4012,	// (0x00093f2e) phob_pre_status_pane_g2

0x401a,	// (0x00093f36) phob_pre_status_pane_g3

0x4022,	// (0x00093f3e) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x0009f51c) phob_pre_status_pane_g

0x4032,	// (0x00093f4e) phob_pre_status_pane_t1

0x4042,	// (0x00093f5e) phob_pre_status_pane_t2

0x4052,	// (0x00093f6e) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0009f527) phob_pre_status_pane_t

0xa128,	// (0x0009a044) bg_list_pane_cp05

0x16ed,	// (0x00091609) grid_vorec_pane

0xa6a5,	// (0x0009a5c1) vorec_t1

0xa6b3,	// (0x0009a5cf) vorec_t2

0xa6c1,	// (0x0009a5dd) vorec_t3

0xa6cf,	// (0x0009a5eb) vorec_t4

0xa6dd,	// (0x0009a5f9) vorec_t5

0xa6eb,	// (0x0009a607) vorec_t6

0x0006,

0xf21a,	// (0x0009f136) vorec_t

0xa707,	// (0x0009a623) wait_bar_pane_cp01

0x16f7,	// (0x00091613) cell_vorec_pane_ParamLimits

0x16f7,	// (0x00091613) cell_vorec_pane

0xd7a0,	// (0x0009d6bc) cell_vorec_pane_g1

0xa128,	// (0x0009a044) grid_highlight_pane_cp05

0x1722,	// (0x0009163e) cams_zoom_pane

0x1731,	// (0x0009164d) image_vga_pane

0x174b,	// (0x00091667) main_camera_pane_g1

0x175d,	// (0x00091679) main_camera_pane_g2

0x176d,	// (0x00091689) main_camera_pane_g3

0x1781,	// (0x0009169d) main_camera_pane_g4

0x1795,	// (0x000916b1) main_camera_pane_g5

0x17a9,	// (0x000916c5) main_camera_pane_g6

0x17bd,	// (0x000916d9) main_camera_pane_g7

0x0007,

0xf229,	// (0x0009f145) main_camera_pane_g

0x17d1,	// (0x000916ed) main_camera_pane_t1

0x17e7,	// (0x00091703) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0009f156) main_camera_pane_t

0x1825,	// (0x00091741) cams_zoom_pane_cp_ParamLimits

0x1825,	// (0x00091741) cams_zoom_pane_cp

0x184d,	// (0x00091769) image_cif_pane_ParamLimits

0x184d,	// (0x00091769) image_cif_pane

0x1888,	// (0x000917a4) image_subqcif_pane

0x1892,	// (0x000917ae) main_video_pane_g1_ParamLimits

0x1892,	// (0x000917ae) main_video_pane_g1

0x18b6,	// (0x000917d2) main_video_pane_g2_ParamLimits

0x18b6,	// (0x000917d2) main_video_pane_g2

0x18ec,	// (0x00091808) main_video_pane_g3_ParamLimits

0x18ec,	// (0x00091808) main_video_pane_g3

0x191a,	// (0x00091836) main_video_pane_g4_ParamLimits

0x191a,	// (0x00091836) main_video_pane_g4

0x1948,	// (0x00091864) main_video_pane_g5_ParamLimits

0x1948,	// (0x00091864) main_video_pane_g5

0xd7b6,	// (0x0009d6d2) main_video_pane_g6_ParamLimits

0xd7b6,	// (0x0009d6d2) main_video_pane_g6

0x0006,

0xf23f,	// (0x0009f15b) main_video_pane_g_ParamLimits

0xf23f,	// (0x0009f15b) main_video_pane_g

0x1971,	// (0x0009188d) main_video_pane_t1_ParamLimits

0x1971,	// (0x0009188d) main_video_pane_t1

0xd7d0,	// (0x0009d6ec) cams_zoom_pane_g1

0xd7d9,	// (0x0009d6f5) cams_zoom_pane_g2

0xd7e2,	// (0x0009d6fe) cams_zoom_pane_g3

0xd7eb,	// (0x0009d707) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x0009f16a) cams_zoom_pane_g

0x19ce,	// (0x000918ea) grid_cams_pane

0x19e8,	// (0x00091904) linegrid_cams_pane

0x19fa,	// (0x00091916) cell_cams_pane_ParamLimits

0x19fa,	// (0x00091916) cell_cams_pane

0xd7f4,	// (0x0009d710) cams_burst_image_pane

0xd7fc,	// (0x0009d718) cell_cams_pane_g1

0xa128,	// (0x0009a044) grid_highlight_pane_cp03

0xa4fb,	// (0x0009a417) mp_bg_pane_g1

0xa128,	// (0x0009a044) bg_list_pane_cp03

0x3f3d,	// (0x00093e59) bg_mp_pane

0x3f45,	// (0x00093e61) grid_mp_pane

0x3f4d,	// (0x00093e69) media_player_g1

0x3f57,	// (0x00093e73) media_player_t1

0x3f65,	// (0x00093e81) media_player_t2

0x3f73,	// (0x00093e8f) media_player_t3

0x3f81,	// (0x00093e9d) media_player_t4

0x3f8f,	// (0x00093eab) media_player_t5

0x3f9d,	// (0x00093eb9) media_player_t6

0x3fab,	// (0x00093ec7) media_player_t7

0x0006,

0xf5ea,	// (0x0009f506) media_player_t

0x3fb9,	// (0x00093ed5) wait_bar_pane_cp02

0xf5cf,	// (0x0009f4eb) main_usb_pane_t

0x4001,	// (0x00093f1d) cell_mp_pane

0xa4fb,	// (0x0009a417) cell_mp_pane_g1

0xa128,	// (0x0009a044) grid_highlight_pane_cp06

0xd804,	// (0x0009d720) grid_skin_colour_pane

0xd80c,	// (0x0009d728) list_highlight_pane_cp03

0x1b33,	// (0x00091a4f) skin_g1

0xd814,	// (0x0009d730) skin_t1

0xd823,	// (0x0009d73f) skin_t2

0x0001,

0xf283,	// (0x0009f19f) skin_t

0x1b3d,	// (0x00091a59) cell_skin_colour_pane_ParamLimits

0x1b3d,	// (0x00091a59) cell_skin_colour_pane

0xd831,	// (0x0009d74d) cell_skin_colour_pane_g1

0x1bb0,	// (0x00091acc) call_video_g1_ParamLimits

0x1bb0,	// (0x00091acc) call_video_g1

0x1bcc,	// (0x00091ae8) call_video_g2_ParamLimits

0x1bcc,	// (0x00091ae8) call_video_g2

0x0001,

0xf288,	// (0x0009f1a4) call_video_g_ParamLimits

0xf288,	// (0x0009f1a4) call_video_g

0x1c11,	// (0x00091b2d) call_video_uplink_pane_cp1_ParamLimits

0x1c11,	// (0x00091b2d) call_video_uplink_pane_cp1

0xd843,	// (0x0009d75f) call_video_uplink_pane_cp2

0x1cb2,	// (0x00091bce) video_down_crop_pane_ParamLimits

0x1cb2,	// (0x00091bce) video_down_crop_pane

0x1d9b,	// (0x00091cb7) video_down_pane_ParamLimits

0x1d9b,	// (0x00091cb7) video_down_pane

0xd84b,	// (0x0009d767) video_down_subqcif_pane_ParamLimits

0xd84b,	// (0x0009d767) video_down_subqcif_pane

0xd865,	// (0x0009d781) video_down_subqcif_pane_cp_ParamLimits

0xd865,	// (0x0009d781) video_down_subqcif_pane_cp

0xd88d,	// (0x0009d7a9) im_reading_pane_ParamLimits

0xd88d,	// (0x0009d7a9) im_reading_pane

0x1ea4,	// (0x00091dc0) im_writing_pane_ParamLimits

0x1ea4,	// (0x00091dc0) im_writing_pane

0x1ec2,	// (0x00091dde) im_reading_pane_t1

0xd8a7,	// (0x0009d7c3) list_im_pane

0xd8b8,	// (0x0009d7d4) scroll_pane_cp07

0x1f01,	// (0x00091e1d) im_writing_pane_t1_ParamLimits

0x1f01,	// (0x00091e1d) im_writing_pane_t1

0xd8d1,	// (0x0009d7ed) im_writing_pane_t2_ParamLimits

0xd8d1,	// (0x0009d7ed) im_writing_pane_t2

0x0001,

0xf292,	// (0x0009f1ae) im_writing_pane_t_ParamLimits

0xf292,	// (0x0009f1ae) im_writing_pane_t

0xa128,	// (0x0009a044) input_focus_pane_cp04

0xa128,	// (0x0009a044) input_focus_pane_cp05

0x1f16,	// (0x00091e32) list_im_single_pane_ParamLimits

0x1f16,	// (0x00091e32) list_im_single_pane

0x1f2f,	// (0x00091e4b) list_single_im_pane_t1

0x3fc1,	// (0x00093edd) blid_accuracy_pane

0x3fc9,	// (0x00093ee5) blid_compass_pane

0x3fd3,	// (0x00093eef) main_location_t1

0x3fe3,	// (0x00093eff) main_location_t2

0x3ff3,	// (0x00093f0f) main_location_t3

0x0002,

0xf5f9,	// (0x0009f515) main_location_t

0xa128,	// (0x0009a044) aid_levels_location

0xa4fb,	// (0x0009a417) blid_accuracy_pane_g1

0xa4fb,	// (0x0009a417) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x0009f210) blid_accuracy_pane_g

0xd919,	// (0x0009d835) wml_content_pane

0xd957,	// (0x0009d873) wml_button_pane_ParamLimits

0xd957,	// (0x0009d873) wml_button_pane

0x1f3e,	// (0x00091e5a) wml_list_single_large_pane_ParamLimits

0x1f3e,	// (0x00091e5a) wml_list_single_large_pane

0x1f57,	// (0x00091e73) wml_list_single_medium_pane_ParamLimits

0x1f57,	// (0x00091e73) wml_list_single_medium_pane

0x1f71,	// (0x00091e8d) wml_list_single_small_pane_ParamLimits

0x1f71,	// (0x00091e8d) wml_list_single_small_pane

0xd96b,	// (0x0009d887) wml_selection_box_pane_ParamLimits

0xd96b,	// (0x0009d887) wml_selection_box_pane

0xd97e,	// (0x0009d89a) wml_list_single_pane_t1

0xd98d,	// (0x0009d8a9) wml_list_single_medium_pane_t1

0xd99c,	// (0x0009d8b8) wml_list_single_large_pane_t1

0xd9ab,	// (0x0009d8c7) input_focus_pane_cp02_ParamLimits

0xd9ab,	// (0x0009d8c7) input_focus_pane_cp02

0xd9be,	// (0x0009d8da) wml_selection_box_pane_g1

0xd9c7,	// (0x0009d8e3) wml_selection_box_pane_t1_ParamLimits

0xd9c7,	// (0x0009d8e3) wml_selection_box_pane_t1

0xa383,	// (0x0009a29f) bg_wml_button_pane_ParamLimits

0xa383,	// (0x0009a29f) bg_wml_button_pane

0xd9df,	// (0x0009d8fb) wml_button_pane_g1

0xd9e7,	// (0x0009d903) wml_button_pane_t1

0xd9df,	// (0x0009d8fb) wml_button_bg_pane_g1

0xd9f7,	// (0x0009d913) wml_button_bg_pane_g2

0xd9ff,	// (0x0009d91b) wml_button_bg_pane_g3

0xda07,	// (0x0009d923) wml_button_bg_pane_g4

0xda0f,	// (0x0009d92b) wml_button_bg_pane_g5

0xda17,	// (0x0009d933) wml_button_bg_pane_g6

0xda1f,	// (0x0009d93b) wml_button_bg_pane_g7

0xda27,	// (0x0009d943) wml_button_bg_pane_g8

0xda2f,	// (0x0009d94b) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x0009f1b3) wml_button_bg_pane_g

0x1f90,	// (0x00091eac) bg_list_pane_cp02

0xda37,	// (0x0009d953) mce_header_pane_ParamLimits

0xda37,	// (0x0009d953) mce_header_pane

0xda4d,	// (0x0009d969) mce_icon_pane

0xda4d,	// (0x0009d969) mce_image_pane

0xda56,	// (0x0009d972) mce_text_pane_ParamLimits

0xda56,	// (0x0009d972) mce_text_pane

0x1f9a,	// (0x00091eb6) scroll_pane_cp03

0xd94f,	// (0x0009d86b) scroll_pane_cp04

0xda69,	// (0x0009d985) scroll_pane_cp05_ParamLimits

0xda69,	// (0x0009d985) scroll_pane_cp05

0x1fa4,	// (0x00091ec0) mce_header_field_pane_ParamLimits

0x1fa4,	// (0x00091ec0) mce_header_field_pane

0x1fbd,	// (0x00091ed9) mce_header_field_pane_2_ParamLimits

0x1fbd,	// (0x00091ed9) mce_header_field_pane_2

0x1fd3,	// (0x00091eef) mce_header_field_pane_3

0x1fdb,	// (0x00091ef7) list_single_mce_message_pane_ParamLimits

0x1fdb,	// (0x00091ef7) list_single_mce_message_pane

0x1ff7,	// (0x00091f13) list_single_mce_smart_pane_ParamLimits

0x1ff7,	// (0x00091f13) list_single_mce_smart_pane

0xda75,	// (0x0009d991) input_focus_pane_cp03

0xda7e,	// (0x0009d99a) list_header_data_pane

0x201e,	// (0x00091f3a) mce_header_field_pane_t1

0x202e,	// (0x00091f4a) list_single_mce_header_pane_ParamLimits

0x202e,	// (0x00091f4a) list_single_mce_header_pane

0xda86,	// (0x0009d9a2) list_single_mce_header_pane_t1

0xda95,	// (0x0009d9b1) list_single_mce_message_pane_g1

0xda9d,	// (0x0009d9b9) list_single_mce_message_pane_t1

0x2060,	// (0x00091f7c) bg_cale_heading_pane_cp01_ParamLimits

0x2060,	// (0x00091f7c) bg_cale_heading_pane_cp01

0xdaab,	// (0x0009d9c7) bg_cale_pane_cp02_ParamLimits

0xdaab,	// (0x0009d9c7) bg_cale_pane_cp02

0x2093,	// (0x00091faf) cale_month_corner_pane

0x20a9,	// (0x00091fc5) cale_month_day_heading_pane_ParamLimits

0x20a9,	// (0x00091fc5) cale_month_day_heading_pane

0x20dc,	// (0x00091ff8) cale_month_pane_g1_ParamLimits

0x20dc,	// (0x00091ff8) cale_month_pane_g1

0x2108,	// (0x00092024) cale_month_pane_g2_ParamLimits

0x2108,	// (0x00092024) cale_month_pane_g2

0x2129,	// (0x00092045) cale_month_pane_g3_ParamLimits

0x2129,	// (0x00092045) cale_month_pane_g3

0x2165,	// (0x00092081) cale_month_pane_g4_ParamLimits

0x2165,	// (0x00092081) cale_month_pane_g4

0x21a1,	// (0x000920bd) cale_month_pane_g5_ParamLimits

0x21a1,	// (0x000920bd) cale_month_pane_g5

0x21dd,	// (0x000920f9) cale_month_pane_g6_ParamLimits

0x21dd,	// (0x000920f9) cale_month_pane_g6

0x2219,	// (0x00092135) cale_month_pane_g7_ParamLimits

0x2219,	// (0x00092135) cale_month_pane_g7

0x2255,	// (0x00092171) cale_month_pane_g8_ParamLimits

0x2255,	// (0x00092171) cale_month_pane_g8

0x2291,	// (0x000921ad) cale_month_pane_g9_ParamLimits

0x2291,	// (0x000921ad) cale_month_pane_g9

0x22c7,	// (0x000921e3) cale_month_pane_g10_ParamLimits

0x22c7,	// (0x000921e3) cale_month_pane_g10

0x22f1,	// (0x0009220d) cale_month_pane_g11_ParamLimits

0x22f1,	// (0x0009220d) cale_month_pane_g11

0x231b,	// (0x00092237) cale_month_pane_g12_ParamLimits

0x231b,	// (0x00092237) cale_month_pane_g12

0x2349,	// (0x00092265) cale_month_pane_g13_ParamLimits

0x2349,	// (0x00092265) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x0009f1c6) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x0009f1c6) cale_month_pane_g

0x2377,	// (0x00092293) cale_month_week_pane

0x2388,	// (0x000922a4) grid_cale_month_pane_ParamLimits

0x2388,	// (0x000922a4) grid_cale_month_pane

0x23b6,	// (0x000922d2) cale_month_day_heading_pane_t1

0x2414,	// (0x00092330) cale_month_day_heading_pane_t2

0x2479,	// (0x00092395) cale_month_day_heading_pane_t3

0x24de,	// (0x000923fa) cale_month_day_heading_pane_t4

0x2543,	// (0x0009245f) cale_month_day_heading_pane_t5

0x25a8,	// (0x000924c4) cale_month_day_heading_pane_t6

0x260d,	// (0x00092529) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x0009f1e1) cale_month_day_heading_pane_t

0xa64a,	// (0x0009a566) bg_cale_side_pane_cp01

0x2672,	// (0x0009258e) cale_month_week_pane_t1

0x2689,	// (0x000925a5) cale_month_week_pane_t2

0x26a0,	// (0x000925bc) cale_month_week_pane_t3

0x26b7,	// (0x000925d3) cale_month_week_pane_t4

0x26ce,	// (0x000925ea) cale_month_week_pane_t5

0x26e5,	// (0x00092601) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x0009f1f0) cale_month_week_pane_t

0x2704,	// (0x00092620) cell_cale_month_pane_ParamLimits

0x2704,	// (0x00092620) cell_cale_month_pane

0xa70f,	// (0x0009a62b) cell_cale_month_pane_g1

0x27dc,	// (0x000926f8) cell_cale_month_pane_t1_ParamLimits

0x27dc,	// (0x000926f8) cell_cale_month_pane_t1

0xa658,	// (0x0009a574) grid_highlight_pane_cp08

0xa4fb,	// (0x0009a417) main_smil_g1

0x27f8,	// (0x00092714) smil_status_pane

0xdae0,	// (0x0009d9fc) smil_text_pane

0x3dc8,	// (0x00093ce4) bg_popup_call3_rect_pane_g8

0x3dd0,	// (0x00093cec) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x0009f4a9) bg_popup_call3_rect_pane_g

0x4723,	// (0x0009463f) smil_status_volume_pane_g1

0xdaea,	// (0x0009da06) smil_status_pane_t1

0xa80d,	// (0x0009a729) volume_smil_pane

0xdb01,	// (0x0009da1d) list_smil_text_pane

0x280d,	// (0x00092729) scroll_pane_cp011

0x2818,	// (0x00092734) smil_text_list_pane_t1_ParamLimits

0x2818,	// (0x00092734) smil_text_list_pane_t1

0xa71b,	// (0x0009a637) aid_volume_smil_ParamLimits

0xa71b,	// (0x0009a637) aid_volume_smil

0xa4fb,	// (0x0009a417) smil_volume_pane_g1

0xa4fb,	// (0x0009a417) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x0009f210) smil_volume_pane_g

0xa482,	// (0x0009a39e) listscroll_cale_day_pane

0xdb0b,	// (0x0009da27) bg_cale_pane

0xdb23,	// (0x0009da3f) list_cale_pane

0xdb34,	// (0x0009da50) scroll_pane_cp09

0xdb45,	// (0x0009da61) cale_bg_pane_g1

0xdb4d,	// (0x0009da69) cale_bg_pane_g2

0xdb55,	// (0x0009da71) cale_bg_pane_g3

0xdb5d,	// (0x0009da79) cale_bg_pane_g4

0xdb65,	// (0x0009da81) cale_bg_pane_g5

0xdb6d,	// (0x0009da89) cale_bg_pane_g6

0xdb75,	// (0x0009da91) cale_bg_pane_g7

0xdb7d,	// (0x0009da99) cale_bg_pane_g8

0xdb85,	// (0x0009daa1) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0009f215) cale_bg_pane_g

0x286d,	// (0x00092789) list_cale_time_pane_ParamLimits

0x286d,	// (0x00092789) list_cale_time_pane

0x2882,	// (0x0009279e) list_cale_time_pane_g1_ParamLimits

0x2882,	// (0x0009279e) list_cale_time_pane_g1

0xdb8d,	// (0x0009daa9) list_cale_time_pane_g2_ParamLimits

0xdb8d,	// (0x0009daa9) list_cale_time_pane_g2

0x288e,	// (0x000927aa) list_cale_time_pane_g3_ParamLimits

0x288e,	// (0x000927aa) list_cale_time_pane_g3

0x289c,	// (0x000927b8) list_cale_time_pane_g4_ParamLimits

0x289c,	// (0x000927b8) list_cale_time_pane_g4

0x28aa,	// (0x000927c6) list_cale_time_pane_g5_ParamLimits

0x28aa,	// (0x000927c6) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x0009f228) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x0009f228) list_cale_time_pane_g

0x28b8,	// (0x000927d4) list_cale_time_pane_t1_ParamLimits

0x28b8,	// (0x000927d4) list_cale_time_pane_t1

0x28e0,	// (0x000927fc) list_cale_time_pane_t2_ParamLimits

0x28e0,	// (0x000927fc) list_cale_time_pane_t2

0x2ccd,	// (0x00092be9) aid_blid_cardinal_pane

0x2d0f,	// (0x00092c2b) compass_pane_t4

0x2908,	// (0x00092824) list_cale_time_pane_t4_ParamLimits

0x2908,	// (0x00092824) list_cale_time_pane_t4

0x2d1d,	// (0x00092c39) compass_pane_t5

0x2d2d,	// (0x00092c49) compass_pane_t6

0x2d3b,	// (0x00092c57) compass_pane_t7

0xe0f7,	// (0x0009e013) navi_pane_cc_t1

0xe24c,	// (0x0009e168) aid_phob_thumbnail_center_pane

0x34fd,	// (0x00093419) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0009f235) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0009f235) list_cale_time_pane_t

0x0d1d,	// (0x00090c39) bg_popup_window_pane_cp02_ParamLimits

0x0d1d,	// (0x00090c39) bg_popup_window_pane_cp02

0xdba7,	// (0x0009dac3) heading_pane_cp01_ParamLimits

0xdba7,	// (0x0009dac3) heading_pane_cp01

0xdbb3,	// (0x0009dacf) loc_req_pane_ParamLimits

0xdbb3,	// (0x0009dacf) loc_req_pane

0xdbc3,	// (0x0009dadf) loc_type_pane_ParamLimits

0xdbc3,	// (0x0009dadf) loc_type_pane

0xdbd5,	// (0x0009daf1) loc_type_pane_t1_ParamLimits

0xdbd5,	// (0x0009daf1) loc_type_pane_t1

0xdbe7,	// (0x0009db03) loc_type_pane_t2_ParamLimits

0xdbe7,	// (0x0009db03) loc_type_pane_t2

0xdbf9,	// (0x0009db15) loc_type_pane_t3_ParamLimits

0xdbf9,	// (0x0009db15) loc_type_pane_t3

0x0002,

0xf320,	// (0x0009f23c) loc_type_pane_t_ParamLimits

0xf320,	// (0x0009f23c) loc_type_pane_t

0xdc0b,	// (0x0009db27) list_loc_req_pane

0xdd7f,	// (0x0009dc9b) scroll_pane_cp012

0x2930,	// (0x0009284c) list_single_loc_request_popup_menu_pane_ParamLimits

0x2930,	// (0x0009284c) list_single_loc_request_popup_menu_pane

0xdd8a,	// (0x0009dca6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xdd8a,	// (0x0009dca6) list_single_loc_request_popup_menu_pane_g1

0xdd96,	// (0x0009dcb2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xdd96,	// (0x0009dcb2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0009f243) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0009f243) list_single_loc_request_popup_menu_pane_g

0xdda2,	// (0x0009dcbe) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xdda2,	// (0x0009dcbe) list_single_loc_request_popup_menu_pane_t1

0xa383,	// (0x0009a29f) bg_popup_window_pane_cp03_ParamLimits

0xa383,	// (0x0009a29f) bg_popup_window_pane_cp03

0xef3b,	// (0x0009ee57) heading_loc_req_pane_ParamLimits

0xef3b,	// (0x0009ee57) heading_loc_req_pane

0x293d,	// (0x00092859) popup_dyc_status_message_window_g1_ParamLimits

0x293d,	// (0x00092859) popup_dyc_status_message_window_g1

0x2951,	// (0x0009286d) popup_dyc_status_message_window_t1_ParamLimits

0x2951,	// (0x0009286d) popup_dyc_status_message_window_t1

0x2966,	// (0x00092882) popup_dyc_status_message_window_t2_ParamLimits

0x2966,	// (0x00092882) popup_dyc_status_message_window_t2

0x297b,	// (0x00092897) popup_dyc_status_message_window_t3_ParamLimits

0x297b,	// (0x00092897) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x0009f248) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x0009f248) popup_dyc_status_message_window_t

0xa128,	// (0x0009a044) bg_heading_pane_cp01

0xddb8,	// (0x0009dcd4) heading_loc_req_pane_g1

0xddc0,	// (0x0009dcdc) heading_loc_req_pane_g2

0xddc8,	// (0x0009dce4) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x0009f24f) heading_loc_req_pane_g

0xddd0,	// (0x0009dcec) heading_loc_req_pane_t1

0xdde0,	// (0x0009dcfc) bg_popup_sub_pane_cp01_ParamLimits

0xdde0,	// (0x0009dcfc) bg_popup_sub_pane_cp01

0xddee,	// (0x0009dd0a) popup_cale_events_window_g1_ParamLimits

0xddee,	// (0x0009dd0a) popup_cale_events_window_g1

0xde0e,	// (0x0009dd2a) popup_cale_events_window_g2_ParamLimits

0xde0e,	// (0x0009dd2a) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0009f283) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0009f283) popup_cale_events_window_g

0xde2e,	// (0x0009dd4a) popup_cale_events_window_t1_ParamLimits

0xde2e,	// (0x0009dd4a) popup_cale_events_window_t1

0xde40,	// (0x0009dd5c) popup_cale_events_window_t2_ParamLimits

0xde40,	// (0x0009dd5c) popup_cale_events_window_t2

0xde7e,	// (0x0009dd9a) popup_cale_events_window_t3_ParamLimits

0xde7e,	// (0x0009dd9a) popup_cale_events_window_t3

0xdeb8,	// (0x0009ddd4) popup_cale_events_window_t4_ParamLimits

0xdeb8,	// (0x0009ddd4) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x0009f288) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x0009f288) popup_cale_events_window_t

0x2a80,	// (0x0009299c) call_type_pane

0x2a90,	// (0x000929ac) popup_call_status_window_g1

0x2aa4,	// (0x000929c0) popup_call_status_window_g2

0x2ab8,	// (0x000929d4) popup_call_status_window_g3

0x0002,

0xf375,	// (0x0009f291) popup_call_status_window_g

0xdeee,	// (0x0009de0a) call_type_pane_g1

0xdef7,	// (0x0009de13) call_type_pane_g2

0x0001,

0xf37c,	// (0x0009f298) call_type_pane_g

0xa128,	// (0x0009a044) bg_popup_sub_pane_cp02

0xdf00,	// (0x0009de1c) listscroll_popup_wml_pane

0xdf08,	// (0x0009de24) list_wml_pane

0xdf12,	// (0x0009de2e) scroll_pane_cp013

0xdf1d,	// (0x0009de39) list_single_graphic_popup_wml_pane_ParamLimits

0xdf1d,	// (0x0009de39) list_single_graphic_popup_wml_pane

0xa4fb,	// (0x0009a417) list_single_graphic_popup_wml_pane_g1

0xdf31,	// (0x0009de4d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x0009f29d) list_single_graphic_popup_wml_pane_g

0xdf39,	// (0x0009de55) list_single_graphic_popup_wml_pane_t1

0xdf4f,	// (0x0009de6b) aid_call_pane

0xa37b,	// (0x0009a297) popup_clock_analogue_window_g1

0xa37b,	// (0x0009a297) popup_clock_analogue_window_g2

0xa73d,	// (0x0009a659) popup_clock_analogue_window_g3

0xa73d,	// (0x0009a659) popup_clock_analogue_window_g4

0xa4fb,	// (0x0009a417) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x0009f2a2) popup_clock_analogue_window_g

0xa745,	// (0x0009a661) popup_clock_analogue_window_t1

0xa753,	// (0x0009a66f) clock_digital_number_pane_ParamLimits

0xa753,	// (0x0009a66f) clock_digital_number_pane

0xa75f,	// (0x0009a67b) clock_digital_number_pane_cp02_ParamLimits

0xa75f,	// (0x0009a67b) clock_digital_number_pane_cp02

0xa76b,	// (0x0009a687) clock_digital_number_pane_cp03_ParamLimits

0xa76b,	// (0x0009a687) clock_digital_number_pane_cp03

0xa777,	// (0x0009a693) clock_digital_number_pane_cp04_ParamLimits

0xa777,	// (0x0009a693) clock_digital_number_pane_cp04

0xa783,	// (0x0009a69f) clock_digital_separator_pane_ParamLimits

0xa783,	// (0x0009a69f) clock_digital_separator_pane

0xa78f,	// (0x0009a6ab) popup_clock_digital_window_t1

0xa4fb,	// (0x0009a417) clock_digital_number_pane_g1

0xa4fb,	// (0x0009a417) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x0009f210) clock_digital_number_pane_g

0xa4fb,	// (0x0009a417) clock_digital_separator_pane_g1

0xa4fb,	// (0x0009a417) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x0009f210) clock_digital_separator_pane_g

0xa128,	// (0x0009a044) bg_popup_window_pane_cp04

0xdf57,	// (0x0009de73) heading_pane_cp03

0xdf5f,	// (0x0009de7b) listscroll_popup_gms_pane

0xdf67,	// (0x0009de83) grid_large_graphic_popup_pane

0xdf71,	// (0x0009de8d) listscroll_popup_gms_pane_g1

0xdf79,	// (0x0009de95) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x0009f2ad) listscroll_popup_gms_pane_g

0xd94f,	// (0x0009d86b) scroll_pane_cp014

0x2ac8,	// (0x000929e4) cell_large_graphic_popup_pane_ParamLimits

0x2ac8,	// (0x000929e4) cell_large_graphic_popup_pane

0x2ae0,	// (0x000929fc) cell_large_graphic_popup_pane_g1_ParamLimits

0x2ae0,	// (0x000929fc) cell_large_graphic_popup_pane_g1

0xdf81,	// (0x0009de9d) cell_large_graphic_popup_pane_g2_ParamLimits

0xdf81,	// (0x0009de9d) cell_large_graphic_popup_pane_g2

0xdf8d,	// (0x0009dea9) cell_large_graphic_popup_pane_g3_ParamLimits

0xdf8d,	// (0x0009dea9) cell_large_graphic_popup_pane_g3

0xdf9a,	// (0x0009deb6) cell_large_graphic_popup_pane_g4_ParamLimits

0xdf9a,	// (0x0009deb6) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x0009f2b2) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x0009f2b2) cell_large_graphic_popup_pane_g

0xdfaa,	// (0x0009dec6) grid_highlight_pane_cp010

0xa4fb,	// (0x0009a417) bg_popup_call_pane_g1

0xdfb4,	// (0x0009ded0) list_single_graphic_popup_conf_pane_ParamLimits

0xdfb4,	// (0x0009ded0) list_single_graphic_popup_conf_pane

0xdfc6,	// (0x0009dee2) list_highlight_pane_cp01

0xdfcf,	// (0x0009deeb) list_single_graphic_popup_conf_pane_g1

0xdfd7,	// (0x0009def3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x0009f2bb) list_single_graphic_popup_conf_pane_g

0xdfdf,	// (0x0009defb) list_single_graphic_popup_conf_pane_t1

0xdfed,	// (0x0009df09) linegrid_cams_pane_g1

0x2aec,	// (0x00092a08) linegrid_cams_pane_g2

0xa68b,	// (0x0009a5a7) linegrid_cams_pane_g3

0xdff6,	// (0x0009df12) linegrid_cams_pane_g4

0x2af5,	// (0x00092a11) linegrid_cams_pane_g5

0x2afe,	// (0x00092a1a) linegrid_cams_pane_g6

0xa694,	// (0x0009a5b0) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x0009f2c0) linegrid_cams_pane_g

0xdfff,	// (0x0009df1b) popup_clock_analogue_window

0xdfff,	// (0x0009df1b) popup_clock_digital_window

0xa128,	// (0x0009a044) popup_phob_thumbnail_window

0xa4fb,	// (0x0009a417) call_video_uplink_pane_g1

0xe008,	// (0x0009df24) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x0009f2cf) call_video_uplink_pane_g

0xe010,	// (0x0009df2c) video_uplink_pane

0xe018,	// (0x0009df34) mce_image_pane_g1

0x2b09,	// (0x00092a25) mce_image_pane_g2

0x2b13,	// (0x00092a2f) mce_image_pane_g3

0x2b1d,	// (0x00092a39) mce_image_pane_g4

0x2b25,	// (0x00092a41) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x0009f2d4) mce_image_pane_g

0xe022,	// (0x0009df3e) control_top_pane_stacon_cp01_ParamLimits

0xe022,	// (0x0009df3e) control_top_pane_stacon_cp01

0xe036,	// (0x0009df52) uni_indicator_pane_stacon_cp01_ParamLimits

0xe036,	// (0x0009df52) uni_indicator_pane_stacon_cp01

0xe047,	// (0x0009df63) bg_popup_sub_pane_cp03

0x2b2d,	// (0x00092a49) chi_dic_find_pane

0x2b35,	// (0x00092a51) listscroll_chi_dic_pane

0x2b3e,	// (0x00092a5a) main_pane_chidic_g1

0x2b51,	// (0x00092a6d) chi_dic_find_pane_t1

0xe051,	// (0x0009df6d) find_chidic_pane

0xe05a,	// (0x0009df76) chi_dic_list_pane_ParamLimits

0xe05a,	// (0x0009df76) chi_dic_list_pane

0xe06b,	// (0x0009df87) scroll_pane_cp020

0x2b5f,	// (0x00092a7b) find_chidic_pane_t1

0xa128,	// (0x0009a044) input_focus_pane_cp06

0x2b6e,	// (0x00092a8a) list_chi_dic_pane_ParamLimits

0x2b6e,	// (0x00092a8a) list_chi_dic_pane

0x2b80,	// (0x00092a9c) list_chi_dic_pane_t1_ParamLimits

0x2b80,	// (0x00092a9c) list_chi_dic_pane_t1

0xa128,	// (0x0009a044) list_highlight_pane_cp020

0xe073,	// (0x0009df8f) bg_cale_heading_pane_g1

0x2b93,	// (0x00092aaf) bg_cale_heading_pane_g2

0x2b9b,	// (0x00092ab7) bg_cale_heading_pane_g3

0x2ba3,	// (0x00092abf) bg_cale_heading_pane_g4

0x2bab,	// (0x00092ac7) bg_cale_heading_pane_g5

0x2bb3,	// (0x00092acf) bg_cale_heading_pane_g6

0x2bbb,	// (0x00092ad7) bg_cale_heading_pane_g7

0x2bc3,	// (0x00092adf) bg_cale_heading_pane_g8

0x2bcb,	// (0x00092ae7) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x0009f2df) bg_cale_heading_pane_g

0xe073,	// (0x0009df8f) bg_cale_side_pane_g1

0x2bd3,	// (0x00092aef) bg_cale_side_pane_g2

0x2bdd,	// (0x00092af9) bg_cale_side_pane_g3

0x2be7,	// (0x00092b03) bg_cale_side_pane_g4

0x2bf1,	// (0x00092b0d) bg_cale_side_pane_g5

0x2bfb,	// (0x00092b17) bg_cale_side_pane_g6

0x2c05,	// (0x00092b21) bg_cale_side_pane_g7

0x2c0f,	// (0x00092b2b) bg_cale_side_pane_g8

0x2c17,	// (0x00092b33) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0009f2f2) bg_cale_side_pane_g

0x2c1f,	// (0x00092b3b) popup_call_status_window_ParamLimits

0x2c1f,	// (0x00092b3b) popup_call_status_window

0xe07b,	// (0x0009df97) stacon_top_pane

0xe083,	// (0x0009df9f) status_pane_ParamLimits

0xe083,	// (0x0009df9f) status_pane

0xe098,	// (0x0009dfb4) status_small_pane

0xe0a0,	// (0x0009dfbc) control_pane

0xa128,	// (0x0009a044) stacon_bottom_pane

0xe0a8,	// (0x0009dfc4) list_single_mce_smart_pane_t1_ParamLimits

0xe0a8,	// (0x0009dfc4) list_single_mce_smart_pane_t1

0xe0bb,	// (0x0009dfd7) list_single_mce_smart_pane_t2_ParamLimits

0xe0bb,	// (0x0009dfd7) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0009f305) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0009f305) list_single_mce_smart_pane_t

0x2c6c,	// (0x00092b88) compass_pane

0x2c77,	// (0x00092b93) main_location2_pane_t1

0x2c8d,	// (0x00092ba9) main_location2_pane_t2

0x2ca3,	// (0x00092bbf) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x0009f30a) main_location2_pane_t

0xe0da,	// (0x0009dff6) compass_pane_g1_ParamLimits

0xe0da,	// (0x0009dff6) compass_pane_g1

0x2cf1,	// (0x00092c0d) compass_pane_t1

0x2d00,	// (0x00092c1c) compass_pane_t2

0x0005,

0xf3f7,	// (0x0009f313) compass_pane_t

0x2d4b,	// (0x00092c67) text_secondary_cp61

0xe0ee,	// (0x0009e00a) navi_pane_cams_g5

0xe111,	// (0x0009e02d) navi_pane_im_t1

0xe11f,	// (0x0009e03b) navi_pane_mp_g1_ParamLimits

0xe11f,	// (0x0009e03b) navi_pane_mp_g1

0xe133,	// (0x0009e04f) navi_pane_mp_g2_ParamLimits

0xe133,	// (0x0009e04f) navi_pane_mp_g2

0xe13f,	// (0x0009e05b) navi_pane_mp_g3_ParamLimits

0xe13f,	// (0x0009e05b) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0009f327) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0009f327) navi_pane_mp_g

0xe14b,	// (0x0009e067) navi_pane_mp_t1

0xe159,	// (0x0009e075) navi_pane_mp_t2

0x0002,

0xf412,	// (0x0009f32e) navi_pane_mp_t

0xe195,	// (0x0009e0b1) navi_pane_vt_g1

0xe14b,	// (0x0009e067) navi_pane_vt_t1

0xe19d,	// (0x0009e0b9) navi_slider_pane

0xe1a5,	// (0x0009e0c1) zooming_pane

0xe1ad,	// (0x0009e0c9) navi_slider_pane_g1

0xa7ac,	// (0x0009a6c8) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0009f335) navi_slider_pane_g

0xe1d1,	// (0x0009e0ed) aid_levels_zoom

0xe1d9,	// (0x0009e0f5) zooming_pane_g1

0xe1e1,	// (0x0009e0fd) zooming_pane_g2

0xe1e1,	// (0x0009e0fd) zooming_pane_g3

0x0002,

0xf428,	// (0x0009f344) zooming_pane_g

0xe1e9,	// (0x0009e105) level_10_zoom

0xe1f2,	// (0x0009e10e) level_11_zoom

0xe1fb,	// (0x0009e117) level_1_zoom

0xe204,	// (0x0009e120) level_2_zoom

0xe20d,	// (0x0009e129) level_3_zoom

0xe216,	// (0x0009e132) level_4_zoom

0xe21f,	// (0x0009e13b) level_5_zoom

0xe228,	// (0x0009e144) level_6_zoom

0xe231,	// (0x0009e14d) level_7_zoom

0xe23a,	// (0x0009e156) level_8_zoom

0xe243,	// (0x0009e15f) level_9_zoom

0xe254,	// (0x0009e170) popup_phob_thumbnail_window_g1

0xe25c,	// (0x0009e178) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x0009f34b) popup_phob_thumbnail_window_g

0x4062,	// (0x00093f7e) level_1_location

0x406a,	// (0x00093f86) level_2_location

0x4072,	// (0x00093f8e) level_3_location

0x407a,	// (0x00093f96) level_4_location

0xe1a5,	// (0x0009e0c1) level_5_location

0x2e8c,	// (0x00092da8) mce_icon_pane_g1

0x2e94,	// (0x00092db0) mce_icon_pane_g2

0x0001,

0xf434,	// (0x0009f350) mce_icon_pane_g

0x2e9c,	// (0x00092db8) main_mup_pane_g1_ParamLimits

0x2e9c,	// (0x00092db8) main_mup_pane_g1

0x2eb2,	// (0x00092dce) main_mup_pane_g2_ParamLimits

0x2eb2,	// (0x00092dce) main_mup_pane_g2

0x2eca,	// (0x00092de6) main_mup_pane_g3_ParamLimits

0x2eca,	// (0x00092de6) main_mup_pane_g3

0x2ee2,	// (0x00092dfe) main_mup_pane_g4_ParamLimits

0x2ee2,	// (0x00092dfe) main_mup_pane_g4

0x2ef4,	// (0x00092e10) main_mup_pane_g5_ParamLimits

0x2ef4,	// (0x00092e10) main_mup_pane_g5

0x2f10,	// (0x00092e2c) main_mup_pane_g6_ParamLimits

0x2f10,	// (0x00092e2c) main_mup_pane_g6

0x2f2a,	// (0x00092e46) main_mup_pane_g7_ParamLimits

0x2f2a,	// (0x00092e46) main_mup_pane_g7

0x2f48,	// (0x00092e64) main_mup_pane_g8_ParamLimits

0x2f48,	// (0x00092e64) main_mup_pane_g8

0x2f66,	// (0x00092e82) main_mup_pane_g9_ParamLimits

0x2f66,	// (0x00092e82) main_mup_pane_g9

0x2f82,	// (0x00092e9e) main_mup_pane_g10_ParamLimits

0x2f82,	// (0x00092e9e) main_mup_pane_g10

0x2fa0,	// (0x00092ebc) main_mup_pane_g11_ParamLimits

0x2fa0,	// (0x00092ebc) main_mup_pane_g11

0x2fba,	// (0x00092ed6) main_mup_pane_g12_ParamLimits

0x2fba,	// (0x00092ed6) main_mup_pane_g12

0x2fd0,	// (0x00092eec) main_mup_pane_g13_ParamLimits

0x2fd0,	// (0x00092eec) main_mup_pane_g13

0x000c,

0xf439,	// (0x0009f355) main_mup_pane_g_ParamLimits

0xf439,	// (0x0009f355) main_mup_pane_g

0x2fe4,	// (0x00092f00) main_mup_pane_t1_ParamLimits

0x2fe4,	// (0x00092f00) main_mup_pane_t1

0x3000,	// (0x00092f1c) main_mup_pane_t2_ParamLimits

0x3000,	// (0x00092f1c) main_mup_pane_t2

0x3018,	// (0x00092f34) main_mup_pane_t3_ParamLimits

0x3018,	// (0x00092f34) main_mup_pane_t3

0x3030,	// (0x00092f4c) main_mup_pane_t4_ParamLimits

0x3030,	// (0x00092f4c) main_mup_pane_t4

0x304e,	// (0x00092f6a) main_mup_pane_t5_ParamLimits

0x304e,	// (0x00092f6a) main_mup_pane_t5

0x3063,	// (0x00092f7f) main_mup_pane_t6_ParamLimits

0x3063,	// (0x00092f7f) main_mup_pane_t6

0x0005,

0xf454,	// (0x0009f370) main_mup_pane_t_ParamLimits

0xf454,	// (0x0009f370) main_mup_pane_t

0x3075,	// (0x00092f91) mup_progress_pane_ParamLimits

0x3075,	// (0x00092f91) mup_progress_pane

0x3081,	// (0x00092f9d) mup_visualizer_pane_ParamLimits

0x3081,	// (0x00092f9d) mup_visualizer_pane

0x30b3,	// (0x00092fcf) mup_volume_pane_ParamLimits

0x30b3,	// (0x00092fcf) mup_volume_pane

0xe264,	// (0x0009e180) mup_visualizer_pane_g1_ParamLimits

0xe264,	// (0x0009e180) mup_visualizer_pane_g1

0xe264,	// (0x0009e180) mup_visualizer_pane_g2_ParamLimits

0xe264,	// (0x0009e180) mup_visualizer_pane_g2

0xe0da,	// (0x0009dff6) mup_visualizer_pane_g3_ParamLimits

0xe0da,	// (0x0009dff6) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x0009f37d) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x0009f37d) mup_visualizer_pane_g

0xa4fb,	// (0x0009a417) mup_volume_pane_g1

0xe27a,	// (0x0009e196) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0009f384) mup_volume_pane_g

0xa4fb,	// (0x0009a417) mup_progress_pane_g1

0xe283,	// (0x0009e19f) mup_progress_pane_g2

0xe28c,	// (0x0009e1a8) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x0009f389) mup_progress_pane_g

0xa128,	// (0x0009a044) bg_popup_window_pane_cp05

0xe295,	// (0x0009e1b1) heading_pane_cp02_ParamLimits

0xe295,	// (0x0009e1b1) heading_pane_cp02

0xe2b1,	// (0x0009e1cd) list_popup_blid_pane

0xe2b9,	// (0x0009e1d5) list_blid_sat_info_pane_ParamLimits

0xe2b9,	// (0x0009e1d5) list_blid_sat_info_pane

0xe2cc,	// (0x0009e1e8) list_blid_sat_info_pane_g1

0xe2d4,	// (0x0009e1f0) list_blid_sat_info_pane_t1

0x31dd,	// (0x000930f9) mup_equalizer_pane_ParamLimits

0x31dd,	// (0x000930f9) mup_equalizer_pane

0x31fe,	// (0x0009311a) mup_equalizer_pane_cp1_ParamLimits

0x31fe,	// (0x0009311a) mup_equalizer_pane_cp1

0x321f,	// (0x0009313b) mup_equalizer_pane_cp2_ParamLimits

0x321f,	// (0x0009313b) mup_equalizer_pane_cp2

0x3244,	// (0x00093160) mup_equalizer_pane_cp3_ParamLimits

0x3244,	// (0x00093160) mup_equalizer_pane_cp3

0x326d,	// (0x00093189) mup_equalizer_pane_cp4_ParamLimits

0x326d,	// (0x00093189) mup_equalizer_pane_cp4

0x3296,	// (0x000931b2) mup_equalizer_pane_cp5

0x32ae,	// (0x000931ca) mup_equalizer_pane_cp6

0x32c6,	// (0x000931e2) mup_equalizer_pane_cp7

0x3e50,	// (0x00093d6c) bg_popup_call_poc_act_pane_g9

0x3e58,	// (0x00093d74) bg_popup_call_poc_act_pane_g10

0x3e60,	// (0x00093d7c) bg_popup_call_poc_act_pane_g11

0x000a,

0xa383,	// (0x0009a29f) mup_scale_pane

0xa4fb,	// (0x0009a417) mup_scale_pane_g1

0xe2e2,	// (0x0009e1fe) mup_scale_pane_g2

0x0006,

0xf489,	// (0x0009f3a5) mup_scale_pane_g

0xe306,	// (0x0009e222) msg_data_pane

0xe30e,	// (0x0009e22a) scroll_pane_cp017

0x32f0,	// (0x0009320c) bg_list_pane_cp04_ParamLimits

0x32f0,	// (0x0009320c) bg_list_pane_cp04

0xe316,	// (0x0009e232) msg_data_pane_g1

0x3318,	// (0x00093234) msg_data_pane_g2

0x3322,	// (0x0009323e) msg_data_pane_g3

0x332c,	// (0x00093248) msg_data_pane_g4

0x3334,	// (0x00093250) msg_data_pane_g5

0x333c,	// (0x00093258) msg_data_pane_g6

0x3344,	// (0x00093260) msg_data_pane_g7

0x0006,

0xf498,	// (0x0009f3b4) msg_data_pane_g

0x334c,	// (0x00093268) msg_text_pane_ParamLimits

0x334c,	// (0x00093268) msg_text_pane

0x3378,	// (0x00093294) qrid_highlight_pane_cp011_ParamLimits

0x3378,	// (0x00093294) qrid_highlight_pane_cp011

0xa128,	// (0x0009a044) msg_body_pane

0xa128,	// (0x0009a044) msg_header_pane

0xe327,	// (0x0009e243) input_focus_pane_cp07

0x339c,	// (0x000932b8) msg_header_pane_t1_ParamLimits

0x339c,	// (0x000932b8) msg_header_pane_t1

0x33b0,	// (0x000932cc) msg_header_pane_t2_ParamLimits

0x33b0,	// (0x000932cc) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x0009f3c8) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x0009f3c8) msg_header_pane_t

0xe33c,	// (0x0009e258) msg_body_pane_g1

0x33c2,	// (0x000932de) msg_body_pane_t1_ParamLimits

0x33c2,	// (0x000932de) msg_body_pane_t1

0x33f3,	// (0x0009330f) msg_body_pane_t2_ParamLimits

0x33f3,	// (0x0009330f) msg_body_pane_t2

0x3405,	// (0x00093321) msg_body_pane_t3_ParamLimits

0x3405,	// (0x00093321) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x0009f3cd) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x0009f3cd) msg_body_pane_t

0x3451,	// (0x0009336d) main_viewer_pane_g1_ParamLimits

0x3451,	// (0x0009336d) main_viewer_pane_g1

0x345f,	// (0x0009337b) main_viewer_pane_g2_ParamLimits

0x345f,	// (0x0009337b) main_viewer_pane_g2

0x346d,	// (0x00093389) main_viewer_pane_g3_ParamLimits

0x346d,	// (0x00093389) main_viewer_pane_g3

0x347c,	// (0x00093398) main_viewer_pane_g4_ParamLimits

0x347c,	// (0x00093398) main_viewer_pane_g4

0xa7d6,	// (0x0009a6f2) main_viewer_pane_g5_ParamLimits

0xa7d6,	// (0x0009a6f2) main_viewer_pane_g5

0xa7d6,	// (0x0009a6f2) main_viewer_pane_g7_ParamLimits

0xa7d6,	// (0x0009a6f2) main_viewer_pane_g7

0xa7e8,	// (0x0009a704) main_viewer_pane_g8_ParamLimits

0xa7e8,	// (0x0009a704) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x0009f3dd) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x0009f3dd) main_viewer_pane_g

0xe344,	// (0x0009e260) viewer_content_pane_ParamLimits

0xe344,	// (0x0009e260) viewer_content_pane

0x34ba,	// (0x000933d6) main_postcard_pane_g1_ParamLimits

0x34ba,	// (0x000933d6) main_postcard_pane_g1

0x34d0,	// (0x000933ec) main_postcard_pane_g2_ParamLimits

0x34d0,	// (0x000933ec) main_postcard_pane_g2

0x34e6,	// (0x00093402) main_postcard_pane_g3_ParamLimits

0x34e6,	// (0x00093402) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x0009f3ee) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x0009f3ee) main_postcard_pane_g

0x34fd,	// (0x00093419) main_postcard_pane_g4

0x4736,	// (0x00094652) smil_status_volume_pane_g2

0x3540,	// (0x0009345c) postcard_pane_ParamLimits

0x3540,	// (0x0009345c) postcard_pane

0xe360,	// (0x0009e27c) postcard_pane_g1_ParamLimits

0xe360,	// (0x0009e27c) postcard_pane_g1

0x3590,	// (0x000934ac) postcard_pane_g2_ParamLimits

0x3590,	// (0x000934ac) postcard_pane_g2

0x359c,	// (0x000934b8) postcard_pane_g3_ParamLimits

0x359c,	// (0x000934b8) postcard_pane_g3

0xe352,	// (0x0009e26e) postcard_pane_g4_ParamLimits

0xe352,	// (0x0009e26e) postcard_pane_g4

0x35a8,	// (0x000934c4) postcard_pane_g5_ParamLimits

0x35a8,	// (0x000934c4) postcard_pane_g5

0x35ba,	// (0x000934d6) postcard_pane_g6_ParamLimits

0x35ba,	// (0x000934d6) postcard_pane_g6

0xe360,	// (0x0009e27c) postcard_pane_g7_ParamLimits

0xe360,	// (0x0009e27c) postcard_pane_g7

0x0006,

0xf4df,	// (0x0009f3fb) postcard_pane_g_ParamLimits

0xf4df,	// (0x0009f3fb) postcard_pane_g

0x35d2,	// (0x000934ee) main_mp2_pane_g1_ParamLimits

0x35d2,	// (0x000934ee) main_mp2_pane_g1

0x35e0,	// (0x000934fc) main_mp2_pane_g2_ParamLimits

0x35e0,	// (0x000934fc) main_mp2_pane_g2

0x35ec,	// (0x00093508) main_mp2_pane_g3_ParamLimits

0x35ec,	// (0x00093508) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x0009f40a) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x0009f40a) main_mp2_pane_g

0x35f8,	// (0x00093514) main_mp2_pane_t1_ParamLimits

0x35f8,	// (0x00093514) main_mp2_pane_t1

0x360f,	// (0x0009352b) main_mp2_pane_t2_ParamLimits

0x360f,	// (0x0009352b) main_mp2_pane_t2

0x3623,	// (0x0009353f) main_mp2_pane_t3_ParamLimits

0x3623,	// (0x0009353f) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x0009f411) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x0009f411) main_mp2_pane_t

0xe36e,	// (0x0009e28a) pec_content_pane_ParamLimits

0xe36e,	// (0x0009e28a) pec_content_pane

0xd94f,	// (0x0009d86b) scroll_pane_cp015

0xe380,	// (0x0009e29c) pec_attribute_pane_ParamLimits

0xe380,	// (0x0009e29c) pec_attribute_pane

0x3635,	// (0x00093551) pec_content_pane_g1_ParamLimits

0x3635,	// (0x00093551) pec_content_pane_g1

0xe390,	// (0x0009e2ac) pec_content_pane_t1_ParamLimits

0xe390,	// (0x0009e2ac) pec_content_pane_t1

0xe3a2,	// (0x0009e2be) pec_content_pane_t2_ParamLimits

0xe3a2,	// (0x0009e2be) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x0009f418) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x0009f418) pec_content_pane_t

0x3641,	// (0x0009355d) list_single_graphic_pane_cp01_ParamLimits

0x3641,	// (0x0009355d) list_single_graphic_pane_cp01

0xa383,	// (0x0009a29f) bg_popup_sub_pane_cp04

0xe3b4,	// (0x0009e2d0) popup_mup_playback_window_g1

0xe3c0,	// (0x0009e2dc) popup_mup_playback_window_t1

0xe3d5,	// (0x0009e2f1) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x0009f41d) popup_mup_playback_window_t

0xe40c,	// (0x0009e328) main_image_pane_g1_ParamLimits

0xe40c,	// (0x0009e328) main_image_pane_g1

0xe44f,	// (0x0009e36b) scroll_pane_cp018_ParamLimits

0xe44f,	// (0x0009e36b) scroll_pane_cp018

0xe467,	// (0x0009e383) scroll_pane_cp016_ParamLimits

0xe467,	// (0x0009e383) scroll_pane_cp016

0x3713,	// (0x0009362f) smil2_image_pane_ParamLimits

0x3713,	// (0x0009362f) smil2_image_pane

0x3749,	// (0x00093665) smil2_root_pane_ParamLimits

0x3749,	// (0x00093665) smil2_root_pane

0x3781,	// (0x0009369d) smil2_text_pane_ParamLimits

0x3781,	// (0x0009369d) smil2_text_pane

0xa128,	// (0x0009a044) bg_list_pane_cp06

0xe4a3,	// (0x0009e3bf) grid_radio_pane

0xa128,	// (0x0009a044) bg_popup_window_pane_cp06

0xe4ad,	// (0x0009e3c9) main_fmradio_pane_t1

0xdf57,	// (0x0009de73) heading_pane_cp04

0xe4bb,	// (0x0009e3d7) main_fmradio_pane_t2

0x3ef3,	// (0x00093e0f) popup_cale_lunar_info_window_g1

0xe4c9,	// (0x0009e3e5) main_fmradio_pane_t3

0x3efb,	// (0x00093e17) popup_cale_lunar_info_window_g2

0xe4d9,	// (0x0009e3f5) main_fmradio_pane_t4

0x0001,

0xe4e7,	// (0x0009e403) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x0009f4f8) popup_cale_lunar_info_window_g

0xf516,	// (0x0009f432) main_fmradio_pane_t

0xe4f5,	// (0x0009e411) wait_bar_pane_cp03

0xe4fd,	// (0x0009e419) cell_fmradio_pane_ParamLimits

0xe4fd,	// (0x0009e419) cell_fmradio_pane

0xe360,	// (0x0009e27c) cell_fmradio_pane_g1_ParamLimits

0xe360,	// (0x0009e27c) cell_fmradio_pane_g1

0xa128,	// (0x0009a044) grid_highlight_pane_cp011

0xe512,	// (0x0009e42e) poc_content_pane_ParamLimits

0xe512,	// (0x0009e42e) poc_content_pane

0xe524,	// (0x0009e440) scroll_pane_cp019

0x3811,	// (0x0009372d) popup_call_poc_act_window_ParamLimits

0x3811,	// (0x0009372d) popup_call_poc_act_window

0x3835,	// (0x00093751) popup_call_poc_inact_window_ParamLimits

0x3835,	// (0x00093751) popup_call_poc_inact_window

0xf5b3,	// (0x0009f4cf) bg_popup_call_poc_act_pane_g

0x3dd8,	// (0x00093cf4) bg_popup_call_poc_inact_pane_g1

0x3de0,	// (0x00093cfc) bg_popup_call_poc_inact_pane_g2

0xe52c,	// (0x0009e448) popup_call_poc_act_window_g2

0x3de8,	// (0x00093d04) bg_popup_call_poc_inact_pane_g3

0x3df0,	// (0x00093d0c) bg_popup_call_poc_inact_pane_g4

0x3df8,	// (0x00093d14) bg_popup_call_poc_inact_pane_g5

0xe534,	// (0x0009e450) popup_call_poc_act_window_t1_ParamLimits

0xe534,	// (0x0009e450) popup_call_poc_act_window_t1

0xe55c,	// (0x0009e478) popup_call_poc_act_window_t2_ParamLimits

0xe55c,	// (0x0009e478) popup_call_poc_act_window_t2

0xe584,	// (0x0009e4a0) popup_call_poc_act_window_t3_ParamLimits

0xe584,	// (0x0009e4a0) popup_call_poc_act_window_t3

0xe5ac,	// (0x0009e4c8) popup_call_poc_act_window_t4_ParamLimits

0xe5ac,	// (0x0009e4c8) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x0009f43d) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x0009f43d) popup_call_poc_act_window_t

0x3e00,	// (0x00093d1c) bg_popup_call_poc_inact_pane_g6

0x3e08,	// (0x00093d24) bg_popup_call_poc_inact_pane_g7

0x3e10,	// (0x00093d2c) bg_popup_call_poc_inact_pane_g8

0xe5be,	// (0x0009e4da) popup_call_poc_inact_window_g2

0x3e18,	// (0x00093d34) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x0009f4bc) bg_popup_call_poc_inact_pane_g

0xe5c6,	// (0x0009e4e2) popup_call_poc_inact_window_t1_ParamLimits

0xe5c6,	// (0x0009e4e2) popup_call_poc_inact_window_t1

0xe5db,	// (0x0009e4f7) popup_call_poc_inact_window_t2_ParamLimits

0xe5db,	// (0x0009e4f7) popup_call_poc_inact_window_t2

0xe5f0,	// (0x0009e50c) popup_call_poc_inact_window_t3_ParamLimits

0xe5f0,	// (0x0009e50c) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0009f446) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0009f446) popup_call_poc_inact_window_t

0x45cc,	// (0x000944e8) context_pane_ParamLimits

0x462f,	// (0x0009454b) signal_pane_ParamLimits

0xe1a5,	// (0x0009e0c1) main_call2_pane

0x455e,	// (0x0009447a) popup_phob_thumbnail2_window_ParamLimits

0x455e,	// (0x0009447a) popup_phob_thumbnail2_window

0xa7be,	// (0x0009a6da) aid_hotspot_pointer_arrow_pane

0xa7c6,	// (0x0009a6e2) aid_hotspot_pointer_hand_pane

0x402a,	// (0x00093f46) phob_pre_status_pane_g5

0x1722,	// (0x0009163e) cams_zoom_pane_ParamLimits

0x1731,	// (0x0009164d) image_vga_pane_ParamLimits

0x174b,	// (0x00091667) main_camera_pane_g1_ParamLimits

0x175d,	// (0x00091679) main_camera_pane_g2_ParamLimits

0x176d,	// (0x00091689) main_camera_pane_g3_ParamLimits

0x1781,	// (0x0009169d) main_camera_pane_g4_ParamLimits

0x1795,	// (0x000916b1) main_camera_pane_g5_ParamLimits

0x17a9,	// (0x000916c5) main_camera_pane_g6_ParamLimits

0x17bd,	// (0x000916d9) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0009f145) main_camera_pane_g_ParamLimits

0x17d1,	// (0x000916ed) main_camera_pane_t1_ParamLimits

0x17e7,	// (0x00091703) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0009f156) main_camera_pane_t_ParamLimits

0xa383,	// (0x0009a29f) bg_popup_preview_window_pane_cp01_ParamLimits

0xa383,	// (0x0009a29f) bg_popup_preview_window_pane_cp01

0xe605,	// (0x0009e521) popup_phob_thumbnail2_window_g1_ParamLimits

0xe605,	// (0x0009e521) popup_phob_thumbnail2_window_g1

0xa128,	// (0x0009a044) call2_cli_visual_pane

0x3869,	// (0x00093785) popup_call2_audio_conf_window_ParamLimits

0x3869,	// (0x00093785) popup_call2_audio_conf_window

0x3891,	// (0x000937ad) popup_call2_audio_first_window_ParamLimits

0x3891,	// (0x000937ad) popup_call2_audio_first_window

0x3927,	// (0x00093843) popup_call2_audio_in_window_ParamLimits

0x3927,	// (0x00093843) popup_call2_audio_in_window

0x3973,	// (0x0009388f) popup_call2_audio_out_window_ParamLimits

0x3973,	// (0x0009388f) popup_call2_audio_out_window

0x39e5,	// (0x00093901) popup_call2_audio_second_window_ParamLimits

0x39e5,	// (0x00093901) popup_call2_audio_second_window

0x3a4b,	// (0x00093967) popup_call2_audio_wait_window_ParamLimits

0x3a4b,	// (0x00093967) popup_call2_audio_wait_window

0xa128,	// (0x0009a044) bg_popup_call2_act_pane_cp03

0xa365,	// (0x0009a281) list_conf_pane_cp

0xe611,	// (0x0009e52d) popup_call2_audio_conf_window_t1

0xe61f,	// (0x0009e53b) list_single_graphic_popup_conf2_pane_ParamLimits

0xe61f,	// (0x0009e53b) list_single_graphic_popup_conf2_pane

0xdfc6,	// (0x0009dee2) list_highlight_pane_cp04

0xe632,	// (0x0009e54e) list_single_graphic_popup_conf2_pane_g1

0xdfd7,	// (0x0009def3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x0009f44d) list_single_graphic_popup_conf2_pane_g

0xe63c,	// (0x0009e558) list_single_graphic_popup_conf2_pane_t1

0xe64a,	// (0x0009e566) bg_popup_call2_act_pane_cp01_ParamLimits

0xe64a,	// (0x0009e566) bg_popup_call2_act_pane_cp01

0xe6d4,	// (0x0009e5f0) call_type_pane_cp05_ParamLimits

0xe6d4,	// (0x0009e5f0) call_type_pane_cp05

0xe728,	// (0x0009e644) popup_call2_audio_second_window_g1_ParamLimits

0xe728,	// (0x0009e644) popup_call2_audio_second_window_g1

0xe77c,	// (0x0009e698) popup_call2_audio_second_window_g2_ParamLimits

0xe77c,	// (0x0009e698) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0009f452) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0009f452) popup_call2_audio_second_window_g

0xe7e1,	// (0x0009e6fd) popup_call2_audio_second_window_t1_ParamLimits

0xe7e1,	// (0x0009e6fd) popup_call2_audio_second_window_t1

0xe89c,	// (0x0009e7b8) popup_call2_audio_second_window_t2_ParamLimits

0xe89c,	// (0x0009e7b8) popup_call2_audio_second_window_t2

0xe8ef,	// (0x0009e80b) popup_call2_audio_second_window_t3_ParamLimits

0xe8ef,	// (0x0009e80b) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x0009f459) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x0009f459) popup_call2_audio_second_window_t

0xa128,	// (0x0009a044) bg_popup_call2_in_pane_cp02

0xa132,	// (0x0009a04e) call_type_pane_cp04

0xa13a,	// (0x0009a056) popup_call2_audio_wait_window_g1

0xa142,	// (0x0009a05e) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x0009f032) popup_call2_audio_wait_window_g

0xa14a,	// (0x0009a066) popup_call2_audio_wait_window_t3

0xe9e2,	// (0x0009e8fe) bg_popup_call2_act_pane_ParamLimits

0xe9e2,	// (0x0009e8fe) bg_popup_call2_act_pane

0xeaa2,	// (0x0009e9be) call_type_pane_cp03_ParamLimits

0xeaa2,	// (0x0009e9be) call_type_pane_cp03

0xeb06,	// (0x0009ea22) popup_call2_audio_first_window_g1_ParamLimits

0xeb06,	// (0x0009ea22) popup_call2_audio_first_window_g1

0xeb76,	// (0x0009ea92) popup_call2_audio_first_window_g2_ParamLimits

0xeb76,	// (0x0009ea92) popup_call2_audio_first_window_g2

0xe264,	// (0x0009e180) popup_call2_audio_first_window_g3_ParamLimits

0xe264,	// (0x0009e180) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0009f462) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0009f462) popup_call2_audio_first_window_g

0xec54,	// (0x0009eb70) popup_call2_audio_first_window_t1_ParamLimits

0xec54,	// (0x0009eb70) popup_call2_audio_first_window_t1

0xed57,	// (0x0009ec73) popup_call2_audio_first_window_t4_ParamLimits

0xed57,	// (0x0009ec73) popup_call2_audio_first_window_t4

0xee3a,	// (0x0009ed56) popup_call2_audio_first_window_t5_ParamLimits

0xee3a,	// (0x0009ed56) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x0009f46d) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x0009f46d) popup_call2_audio_first_window_t

0xa37b,	// (0x0009a297) bg_popup_call2_act_pane_g1

0x3f05,	// (0x00093e21) popup_cale_lunar_info_window_t1

0x3f13,	// (0x00093e2f) popup_cale_lunar_info_window_t2

0x3f21,	// (0x00093e3d) popup_cale_lunar_info_window_t3

0xa128,	// (0x0009a044) bg_popup_call2_bubble_pane

0xef47,	// (0x0009ee63) bg_popup_call2_in_pane_cp01_ParamLimits

0xef47,	// (0x0009ee63) bg_popup_call2_in_pane_cp01

0x0da2,	// (0x00090cbe) call_type_pane_cp02

0xef8f,	// (0x0009eeab) popup_call2_audio_out_window_g1_ParamLimits

0xef8f,	// (0x0009eeab) popup_call2_audio_out_window_g1

0xefbb,	// (0x0009eed7) popup_call2_audio_out_window_g2_ParamLimits

0xefbb,	// (0x0009eed7) popup_call2_audio_out_window_g2

0xefe3,	// (0x0009eeff) popup_call2_audio_out_window_g3_ParamLimits

0xefe3,	// (0x0009eeff) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0009f476) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0009f476) popup_call2_audio_out_window_g

0xf01e,	// (0x0009ef3a) popup_call2_audio_out_window_t1_ParamLimits

0xf01e,	// (0x0009ef3a) popup_call2_audio_out_window_t1

0xf07d,	// (0x0009ef99) popup_call2_audio_out_window_t2_ParamLimits

0xf07d,	// (0x0009ef99) popup_call2_audio_out_window_t2

0xf0d1,	// (0x0009efed) popup_call2_audio_out_window_t3_ParamLimits

0xf0d1,	// (0x0009efed) popup_call2_audio_out_window_t3

0x3a85,	// (0x000939a1) popup_call2_audio_out_window_t4_ParamLimits

0x3a85,	// (0x000939a1) popup_call2_audio_out_window_t4

0x3a9b,	// (0x000939b7) popup_call2_audio_out_window_t5_ParamLimits

0x3a9b,	// (0x000939b7) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x0009f47f) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x0009f47f) popup_call2_audio_out_window_t

0x3aff,	// (0x00093a1b) bg_popup_call2_in_pane_ParamLimits

0x3aff,	// (0x00093a1b) bg_popup_call2_in_pane

0x3b5b,	// (0x00093a77) popup_call2_audio_in_window_g1_ParamLimits

0x3b5b,	// (0x00093a77) popup_call2_audio_in_window_g1

0x3b93,	// (0x00093aaf) popup_call2_audio_in_window_g2_ParamLimits

0x3b93,	// (0x00093aaf) popup_call2_audio_in_window_g2

0x3bcb,	// (0x00093ae7) popup_call2_audio_in_window_g3_ParamLimits

0x3bcb,	// (0x00093ae7) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x0009f48c) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x0009f48c) popup_call2_audio_in_window_g

0x3c23,	// (0x00093b3f) popup_call2_audio_in_window_t1_ParamLimits

0x3c23,	// (0x00093b3f) popup_call2_audio_in_window_t1

0x3ca3,	// (0x00093bbf) popup_call2_audio_in_window_t2_ParamLimits

0x3ca3,	// (0x00093bbf) popup_call2_audio_in_window_t2

0x3d23,	// (0x00093c3f) popup_call2_audio_in_window_t3_ParamLimits

0x3d23,	// (0x00093c3f) popup_call2_audio_in_window_t3

0x3d3d,	// (0x00093c59) popup_call2_audio_in_window_t4_ParamLimits

0x3d3d,	// (0x00093c59) popup_call2_audio_in_window_t4

0x3d4f,	// (0x00093c6b) popup_call2_audio_in_window_t5_ParamLimits

0x3d4f,	// (0x00093c6b) popup_call2_audio_in_window_t5

0x3d64,	// (0x00093c80) popup_call2_audio_in_window_t6_ParamLimits

0x3d64,	// (0x00093c80) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x0009f495) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x0009f495) popup_call2_audio_in_window_t

0xa37b,	// (0x0009a297) bg_popup_call2_in_pane_g1

0x3f2f,	// (0x00093e4b) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x0009f4fd) popup_cale_lunar_info_window_t

0xa383,	// (0x0009a29f) bg_popup_call2_rect_pane_ParamLimits

0xa383,	// (0x0009a29f) bg_popup_call2_rect_pane

0xa128,	// (0x0009a044) call2_cli_visual_graphic_pane

0xa128,	// (0x0009a044) call2_cli_visual_text_pane

0xa800,	// (0x0009a71c) smil_status_volume_pane_g3

0x0002,

0xa4fb,	// (0x0009a417) call2_cli_visual_graphic_pane_g1

0xa4fb,	// (0x0009a417) call2_cli_visual_graphic_pane_g2

0xa4fb,	// (0x0009a417) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x0009f4a2) call2_cli_visual_graphic_pane_g

0x3d98,	// (0x00093cb4) bg_popup_call2_rect_pane_g1

0xa5a3,	// (0x0009a4bf) bg_popup_call2_rect_pane_g2

0x3da0,	// (0x00093cbc) bg_popup_call2_rect_pane_g3

0x3da8,	// (0x00093cc4) bg_popup_call2_rect_pane_g4

0x3db0,	// (0x00093ccc) bg_popup_call2_rect_pane_g5

0x3db8,	// (0x00093cd4) bg_popup_call2_rect_pane_g6

0x3dc0,	// (0x00093cdc) bg_popup_call2_rect_pane_g7

0x3dc8,	// (0x00093ce4) bg_popup_call2_rect_pane_g8

0x3dd0,	// (0x00093cec) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x0009f4a9) bg_popup_call2_rect_pane_g

0x3dd8,	// (0x00093cf4) bg_popup_call2_bubble_pane_g1

0x3de0,	// (0x00093cfc) bg_popup_call2_bubble_pane_g2

0x3de8,	// (0x00093d04) bg_popup_call2_bubble_pane_g3

0x3df0,	// (0x00093d0c) bg_popup_call2_bubble_pane_g4

0x3df8,	// (0x00093d14) bg_popup_call2_bubble_pane_g5

0x3e00,	// (0x00093d1c) bg_popup_call2_bubble_pane_g6

0x3e08,	// (0x00093d24) bg_popup_call2_bubble_pane_g7

0x3e10,	// (0x00093d2c) bg_popup_call2_bubble_pane_g8

0x3e18,	// (0x00093d34) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x0009f4bc) bg_popup_call2_bubble_pane_g

0x132b,	// (0x00091247) aid_cale_week_size_cell_pane

0x1801,	// (0x0009171d) aid_cams_cif_uncrop_pane_ParamLimits

0x1801,	// (0x0009171d) aid_cams_cif_uncrop_pane

0x19ba,	// (0x000918d6) aid_cams_size_cell_ParamLimits

0x19ba,	// (0x000918d6) aid_cams_size_cell

0x19ce,	// (0x000918ea) grid_cams_pane_ParamLimits

0x19e8,	// (0x00091904) linegrid_cams_pane_ParamLimits

0x1bdd,	// (0x00091af9) call_video_pane_t1

0x1bf7,	// (0x00091b13) call_video_pane_t2

0x0001,

0xf28d,	// (0x0009f1a9) call_video_pane_t

0x2042,	// (0x00091f5e) aid_cale_month_size_cell_pane_ParamLimits

0x2042,	// (0x00091f5e) aid_cale_month_size_cell_pane

0xf62a,	// (0x0009f546) smil_status_volume_pane_g

0xa80d,	// (0x0009a729) volume_smil_pane_ParamLimits

0x09a4,	// (0x000908c0) aid_popup2_width_pane

0x1282,	// (0x0009119e) cell_qdial_pane_g4_ParamLimits

0x1282,	// (0x0009119e) cell_qdial_pane_g4

0x2ccd,	// (0x00092be9) aid_blid_cardinal_pane_ParamLimits

0x2cdd,	// (0x00092bf9) aid_blid_destination_pane_ParamLimits

0x2cdd,	// (0x00092bf9) aid_blid_destination_pane

0xa383,	// (0x0009a29f) bg_popup_call_poc_act_pane_ParamLimits

0xa383,	// (0x0009a29f) bg_popup_call_poc_act_pane

0xa383,	// (0x0009a29f) bg_popup_call_poc_inact_pane_ParamLimits

0xa383,	// (0x0009a29f) bg_popup_call_poc_inact_pane

0x3e28,	// (0x00093d44) bg_popup_call_poc_act_pane_g1

0x3e30,	// (0x00093d4c) bg_popup_call_poc_act_pane_g2

0x3e38,	// (0x00093d54) bg_popup_call_poc_act_pane_g3

0x3df0,	// (0x00093d0c) bg_popup_call_poc_act_pane_g4

0x3df8,	// (0x00093d14) bg_popup_call_poc_act_pane_g5

0x3e40,	// (0x00093d5c) bg_popup_call_poc_act_pane_g6

0x3e08,	// (0x00093d24) bg_popup_call_poc_act_pane_g7

0x3e48,	// (0x00093d64) bg_popup_call_poc_act_pane_g8

0xa128,	// (0x0009a044) main_usb_pane

0x434d,	// (0x00094269) popup_cale_lunar_info_window

0x1ec2,	// (0x00091dde) im_reading_pane_t1_ParamLimits

0xd8a7,	// (0x0009d7c3) list_im_pane_ParamLimits

0xd8b8,	// (0x0009d7d4) scroll_pane_cp07_ParamLimits

0xa128,	// (0x0009a044) grid_highlight_pane_cp012

0xa383,	// (0x0009a29f) mup_scale_pane_ParamLimits

0xe360,	// (0x0009e27c) main_usb_pane_g1_ParamLimits

0xe360,	// (0x0009e27c) main_usb_pane_g1

0x3e68,	// (0x00093d84) main_usb_pane_g2_ParamLimits

0x3e68,	// (0x00093d84) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x0009f4e6) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x0009f4e6) main_usb_pane_g

0x3e7e,	// (0x00093d9a) main_usb_pane_t1_ParamLimits

0x3e7e,	// (0x00093d9a) main_usb_pane_t1

0x3e90,	// (0x00093dac) main_usb_pane_t2_ParamLimits

0x3e90,	// (0x00093dac) main_usb_pane_t2

0x3ea2,	// (0x00093dbe) main_usb_pane_t3_ParamLimits

0x3ea2,	// (0x00093dbe) main_usb_pane_t3

0x3eb4,	// (0x00093dd0) main_usb_pane_t4_ParamLimits

0x3eb4,	// (0x00093dd0) main_usb_pane_t4

0x3ec9,	// (0x00093de5) main_usb_pane_t5_ParamLimits

0x3ec9,	// (0x00093de5) main_usb_pane_t5

0x3ede,	// (0x00093dfa) main_usb_pane_t6_ParamLimits

0x3ede,	// (0x00093dfa) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x0009f4eb) main_usb_pane_t_ParamLimits

0x2c6c,	// (0x00092b88) aid_text_placing

0x2c77,	// (0x00092b93) main_location2_pane_t1_ParamLimits

0x2c8d,	// (0x00092ba9) main_location2_pane_t2_ParamLimits

0x2ca3,	// (0x00092bbf) main_location2_pane_t3_ParamLimits

0x2cb9,	// (0x00092bd5) main_location2_pane_t4_ParamLimits

0x2cb9,	// (0x00092bd5) main_location2_pane_t4

0xf3ee,	// (0x0009f30a) main_location2_pane_t_ParamLimits

0xa3bf,	// (0x0009a2db) find_pinb_pane_g2_ParamLimits

0xa3bf,	// (0x0009a2db) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x0009f058) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x0009f058) find_pinb_pane_g

0xa3cb,	// (0x0009a2e7) find_pinb_pane_t1_ParamLimits

0xa3dd,	// (0x0009a2f9) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x0009f05d) find_pinb_pane_t_ParamLimits

0xa128,	// (0x0009a044) main_call3_pane

0x23b6,	// (0x000922d2) cale_month_day_heading_pane_t1_ParamLimits

0x2414,	// (0x00092330) cale_month_day_heading_pane_t2_ParamLimits

0x2479,	// (0x00092395) cale_month_day_heading_pane_t3_ParamLimits

0x24de,	// (0x000923fa) cale_month_day_heading_pane_t4_ParamLimits

0x2543,	// (0x0009245f) cale_month_day_heading_pane_t5_ParamLimits

0x25a8,	// (0x000924c4) cale_month_day_heading_pane_t6_ParamLimits

0x260d,	// (0x00092529) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x0009f1e1) cale_month_day_heading_pane_t_ParamLimits

0xdaf8,	// (0x0009da14) smil_status_volume_pane

0x3564,	// (0x00093480) postcard_address_pane_ParamLimits

0x3564,	// (0x00093480) postcard_address_pane

0x357a,	// (0x00093496) postcard_message_pane_ParamLimits

0x357a,	// (0x00093496) postcard_message_pane

0x3d79,	// (0x00093c95) call2_cli_visual_pane_t1_ParamLimits

0x3d79,	// (0x00093c95) call2_cli_visual_pane_t1

0x48ef,	// (0x0009480b) postcard_message_pane_t1_ParamLimits

0x48ef,	// (0x0009480b) postcard_message_pane_t1

0x48d8,	// (0x000947f4) postcard_address_pane_t1_ParamLimits

0x48d8,	// (0x000947f4) postcard_address_pane_t1

0x48c4,	// (0x000947e0) popup_call3_audio_in_window_ParamLimits

0x48c4,	// (0x000947e0) popup_call3_audio_in_window

0x4749,	// (0x00094665) bg_popup_call3_in_pane_ParamLimits

0x4749,	// (0x00094665) bg_popup_call3_in_pane

0x47c5,	// (0x000946e1) popup_call3_audio_in_window_g1_ParamLimits

0x47c5,	// (0x000946e1) popup_call3_audio_in_window_g1

0x47e5,	// (0x00094701) popup_call3_audio_in_window_g2_ParamLimits

0x47e5,	// (0x00094701) popup_call3_audio_in_window_g2

0x4805,	// (0x00094721) popup_call3_audio_in_window_g3_ParamLimits

0x4805,	// (0x00094721) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x0009f54d) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x0009f54d) popup_call3_audio_in_window_g

0x4836,	// (0x00094752) popup_call3_audio_in_window_t1_ParamLimits

0x4836,	// (0x00094752) popup_call3_audio_in_window_t1

0x4874,	// (0x00094790) popup_call3_audio_in_window_t2_ParamLimits

0x4874,	// (0x00094790) popup_call3_audio_in_window_t2

0x48b2,	// (0x000947ce) popup_call3_audio_in_window_t3_ParamLimits

0x48b2,	// (0x000947ce) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0009f556) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0009f556) popup_call3_audio_in_window_t

0xe1a5,	// (0x0009e0c1) bg_popup_call3_rect_pane

0x3d98,	// (0x00093cb4) bg_popup_call3_rect_pane_g1

0xa5a3,	// (0x0009a4bf) bg_popup_call3_rect_pane_g2

0x3da0,	// (0x00093cbc) bg_popup_call3_rect_pane_g3

0x3da8,	// (0x00093cc4) bg_popup_call3_rect_pane_g4

0x3db0,	// (0x00093ccc) bg_popup_call3_rect_pane_g5

0x3db8,	// (0x00093cd4) bg_popup_call3_rect_pane_g6

0x3dc0,	// (0x00093cdc) bg_popup_call3_rect_pane_g7

0x30c9,	// (0x00092fe5) mup_visualizer_osc_pane

0xe272,	// (0x0009e18e) mup_visualizer_spec_pane

0x4779,	// (0x00094695) call3_video_qcif_pane_ParamLimits

0x4779,	// (0x00094695) call3_video_qcif_pane

0x478c,	// (0x000946a8) call3_video_qcif_uncrop_pane_ParamLimits

0x478c,	// (0x000946a8) call3_video_qcif_uncrop_pane

0x479c,	// (0x000946b8) call3_video_subqcif_pane_ParamLimits

0x479c,	// (0x000946b8) call3_video_subqcif_pane

0x47b2,	// (0x000946ce) call3_video_subqcif_uncrop_pane_ParamLimits

0x47b2,	// (0x000946ce) call3_video_subqcif_uncrop_pane

0x4825,	// (0x00094741) popup_call3_audio_in_window_g4_ParamLimits

0x4825,	// (0x00094741) popup_call3_audio_in_window_g4

0x470a,	// (0x00094626) mup_spec_half_pane

0x4713,	// (0x0009462f) mup_spec_half_pane_cp

0x46f8,	// (0x00094614) mup_osc_middle_pane

0x4701,	// (0x0009461d) mup_visualizer_osc_pane_g1

0x46d8,	// (0x000945f4) mup_spec_bar_pane_ParamLimits

0x46d8,	// (0x000945f4) mup_spec_bar_pane

0x46c5,	// (0x000945e1) mup_spec_bar_pane_g1

0x46cf,	// (0x000945eb) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0009f541) mup_spec_bar_pane_g

0x132b,	// (0x00091247) aid_cale_week_size_cell_pane_ParamLimits

0x133e,	// (0x0009125a) bg_cale_heading_pane_ParamLimits

0xa61f,	// (0x0009a53b) bg_cale_pane_cp01_ParamLimits

0x135a,	// (0x00091276) cale_week_corner_pane_ParamLimits

0x1370,	// (0x0009128c) cale_week_day_heading_pane_ParamLimits

0x138c,	// (0x000912a8) cale_week_scroll_pane_g1_ParamLimits

0x13a5,	// (0x000912c1) cale_week_scroll_pane_g2_ParamLimits

0x13b6,	// (0x000912d2) cale_week_scroll_pane_g3_ParamLimits

0x13c7,	// (0x000912e3) cale_week_scroll_pane_g4_ParamLimits

0x13d8,	// (0x000912f4) cale_week_scroll_pane_g5_ParamLimits

0x13e9,	// (0x00091305) cale_week_scroll_pane_g6_ParamLimits

0x13fa,	// (0x00091316) cale_week_scroll_pane_g7_ParamLimits

0x140b,	// (0x00091327) cale_week_scroll_pane_g8_ParamLimits

0x141c,	// (0x00091338) cale_week_scroll_pane_g9_ParamLimits

0x142d,	// (0x00091349) cale_week_scroll_pane_g10_ParamLimits

0x143e,	// (0x0009135a) cale_week_scroll_pane_g11_ParamLimits

0x144f,	// (0x0009136b) cale_week_scroll_pane_g12_ParamLimits

0x1460,	// (0x0009137c) cale_week_scroll_pane_g13_ParamLimits

0x1479,	// (0x00091395) cale_week_scroll_pane_g14_ParamLimits

0x1492,	// (0x000913ae) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x0009f0e9) cale_week_scroll_pane_g_ParamLimits

0x14ab,	// (0x000913c7) cale_week_time_pane_ParamLimits

0x14bc,	// (0x000913d8) grid_cale_week_pane_ParamLimits

0xa638,	// (0x0009a554) listscroll_cale_week_pane_t1

0x14d7,	// (0x000913f3) scroll_pane_cp08_ParamLimits

0x2093,	// (0x00091faf) cale_month_corner_pane_ParamLimits

0xdace,	// (0x0009d9ea) cale_month_pane_t1

0x2377,	// (0x00092293) cale_month_week_pane_ParamLimits

0x2a90,	// (0x000929ac) popup_call_status_window_g1_ParamLimits

0x2aa4,	// (0x000929c0) popup_call_status_window_g2_ParamLimits

0x2ab8,	// (0x000929d4) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x0009f291) popup_call_status_window_g_ParamLimits

0xdf47,	// (0x0009de63) aid_call2_pane

0x338e,	// (0x000932aa) msg_header_pane_g1

0x3564,	// (0x00093480) postcard_address2_pane_ParamLimits

0x3564,	// (0x00093480) postcard_address2_pane

0x357a,	// (0x00093496) postcard_message2_pane_ParamLimits

0x357a,	// (0x00093496) postcard_message2_pane

0x463d,	// (0x00094559) message2_row_pane_ParamLimits

0x463d,	// (0x00094559) message2_row_pane

0x4660,	// (0x0009457c) address2_row_pane_ParamLimits

0x4660,	// (0x0009457c) address2_row_pane

0x4673,	// (0x0009458f) postcard_message2_row_pane_g1

0x467b,	// (0x00094597) postcard_message2_row_pane_t1

0x4673,	// (0x0009458f) address2_row_pane_g1

0x467b,	// (0x00094597) address2_row_pane_t1

0x16e5,	// (0x00091601) aid_size_cell_vorec

0xa128,	// (0x0009a044) main_rss_pane

0x4689,	// (0x000945a5) rss_list_single_pane_ParamLimits

0x4689,	// (0x000945a5) rss_list_single_pane

0x46a9,	// (0x000945c5) rss_list_single_pane_t1

0x46b7,	// (0x000945d3) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x0009f53c) rss_list_single_pane_t

0xa128,	// (0x0009a044) main_camera2_pane

0xa128,	// (0x0009a044) main_video2_pane

0x495e,	// (0x0009487a) cams_zoom_pane_cp2_ParamLimits

0x495e,	// (0x0009487a) cams_zoom_pane_cp2

0x4975,	// (0x00094891) image2_vga_pane_ParamLimits

0x4975,	// (0x00094891) image2_vga_pane

0x49bd,	// (0x000948d9) main_camera2_pane_g1_ParamLimits

0x49bd,	// (0x000948d9) main_camera2_pane_g1

0x49dd,	// (0x000948f9) main_camera2_pane_g2_ParamLimits

0x49dd,	// (0x000948f9) main_camera2_pane_g2

0x49f4,	// (0x00094910) main_camera2_pane_g3_ParamLimits

0x49f4,	// (0x00094910) main_camera2_pane_g3

0x4a0b,	// (0x00094927) main_camera2_pane_g4_ParamLimits

0x4a0b,	// (0x00094927) main_camera2_pane_g4

0x4a22,	// (0x0009493e) main_camera2_pane_g5_ParamLimits

0x4a22,	// (0x0009493e) main_camera2_pane_g5

0x4a39,	// (0x00094955) main_camera2_pane_g6_ParamLimits

0x4a39,	// (0x00094955) main_camera2_pane_g6

0x4a50,	// (0x0009496c) main_camera2_pane_g7_ParamLimits

0x4a50,	// (0x0009496c) main_camera2_pane_g7

0x4a67,	// (0x00094983) main_camera2_pane_g8_ParamLimits

0x4a67,	// (0x00094983) main_camera2_pane_g8

0x0008,

0xf641,	// (0x0009f55d) main_camera2_pane_g_ParamLimits

0xf641,	// (0x0009f55d) main_camera2_pane_g

0x4a95,	// (0x000949b1) main_camera2_pane_t1_ParamLimits

0x4a95,	// (0x000949b1) main_camera2_pane_t1

0x4aca,	// (0x000949e6) main_camera2_pane_t2_ParamLimits

0x4aca,	// (0x000949e6) main_camera2_pane_t2

0x4ae7,	// (0x00094a03) main_camera2_pane_t3_ParamLimits

0x4ae7,	// (0x00094a03) main_camera2_pane_t3

0x4b45,	// (0x00094a61) main_camera2_pane_t4_ParamLimits

0x4b45,	// (0x00094a61) main_camera2_pane_t4

0x0006,

0xf654,	// (0x0009f570) main_camera2_pane_t_ParamLimits

0xf654,	// (0x0009f570) main_camera2_pane_t

0x4bce,	// (0x00094aea) cams_zoom_pane_cp4_ParamLimits

0x4bce,	// (0x00094aea) cams_zoom_pane_cp4

0x4be4,	// (0x00094b00) image2_cif_pane_ParamLimits

0x4be4,	// (0x00094b00) image2_cif_pane

0x4c0f,	// (0x00094b2b) image2_subqcif_pane_ParamLimits

0x4c0f,	// (0x00094b2b) image2_subqcif_pane

0x4c2a,	// (0x00094b46) main_video2_pane_g1_ParamLimits

0x4c2a,	// (0x00094b46) main_video2_pane_g1

0x4c44,	// (0x00094b60) main_video2_pane_g2_ParamLimits

0x4c44,	// (0x00094b60) main_video2_pane_g2

0x4c5a,	// (0x00094b76) main_video2_pane_g3_ParamLimits

0x4c5a,	// (0x00094b76) main_video2_pane_g3

0x4c70,	// (0x00094b8c) main_video2_pane_g4_ParamLimits

0x4c70,	// (0x00094b8c) main_video2_pane_g4

0x4c86,	// (0x00094ba2) main_video2_pane_g5_ParamLimits

0x4c86,	// (0x00094ba2) main_video2_pane_g5

0x4c9c,	// (0x00094bb8) main_video2_pane_g6_ParamLimits

0x4c9c,	// (0x00094bb8) main_video2_pane_g6

0x0005,

0xf663,	// (0x0009f57f) main_video2_pane_g_ParamLimits

0xf663,	// (0x0009f57f) main_video2_pane_g

0x4cb6,	// (0x00094bd2) main_video2_pane_t1_ParamLimits

0x4cb6,	// (0x00094bd2) main_video2_pane_t1

0x4cda,	// (0x00094bf6) main_video2_pane_t2_ParamLimits

0x4cda,	// (0x00094bf6) main_video2_pane_t2

0x4d2a,	// (0x00094c46) main_video2_pane_t3_ParamLimits

0x4d2a,	// (0x00094c46) main_video2_pane_t3

0x0002,

0xf670,	// (0x0009f58c) main_video2_pane_t_ParamLimits

0xf670,	// (0x0009f58c) main_video2_pane_t

0x408a,	// (0x00093fa6) call_muted_g2

0x0001,

0xf612,	// (0x0009f52e) call_muted_g

0xa128,	// (0x0009a044) main_mup2_pane

0x4d72,	// (0x00094c8e) main_mup2_pane_g1_ParamLimits

0x4d72,	// (0x00094c8e) main_mup2_pane_g1

0x4d7e,	// (0x00094c9a) main_mup2_pane_g2_ParamLimits

0x4d7e,	// (0x00094c9a) main_mup2_pane_g2

0xa876,	// (0x0009a792) main_mup_pane_g13_cp1

0xa87e,	// (0x0009a79a) mup_volume_pane_cp1

0x4d9c,	// (0x00094cb8) main_mup2_pane_g4_ParamLimits

0x4d9c,	// (0x00094cb8) main_mup2_pane_g4

0x4dac,	// (0x00094cc8) main_mup2_pane_g5_ParamLimits

0x4dac,	// (0x00094cc8) main_mup2_pane_g5

0x4dbc,	// (0x00094cd8) main_mup2_pane_g6_ParamLimits

0x4dbc,	// (0x00094cd8) main_mup2_pane_g6

0x4dcc,	// (0x00094ce8) main_mup2_pane_g7_ParamLimits

0x4dcc,	// (0x00094ce8) main_mup2_pane_g7

0x0006,

0xf677,	// (0x0009f593) main_mup2_pane_g_ParamLimits

0xf677,	// (0x0009f593) main_mup2_pane_g

0x4de4,	// (0x00094d00) main_mup2_pane_t1_ParamLimits

0x4de4,	// (0x00094d00) main_mup2_pane_t1

0x4dfa,	// (0x00094d16) main_mup2_pane_t2_ParamLimits

0x4dfa,	// (0x00094d16) main_mup2_pane_t2

0x4e10,	// (0x00094d2c) main_mup2_pane_t3_ParamLimits

0x4e10,	// (0x00094d2c) main_mup2_pane_t3

0x4e26,	// (0x00094d42) main_mup2_pane_t4_ParamLimits

0x4e26,	// (0x00094d42) main_mup2_pane_t4

0x4e3e,	// (0x00094d5a) main_mup2_pane_t5_ParamLimits

0x4e3e,	// (0x00094d5a) main_mup2_pane_t5

0x4e56,	// (0x00094d72) main_mup2_pane_t6_ParamLimits

0x4e56,	// (0x00094d72) main_mup2_pane_t6

0x0005,

0xf686,	// (0x0009f5a2) main_mup2_pane_t_ParamLimits

0xf686,	// (0x0009f5a2) main_mup2_pane_t

0x4e86,	// (0x00094da2) mup2_visualizer_pane_ParamLimits

0x4e86,	// (0x00094da2) mup2_visualizer_pane

0x4eb4,	// (0x00094dd0) mup_progress_pane_cp_ParamLimits

0x4eb4,	// (0x00094dd0) mup_progress_pane_cp

0xa861,	// (0x0009a77d) mup_volume_pane_cp_ParamLimits

0xa861,	// (0x0009a77d) mup_volume_pane_cp

0x4eca,	// (0x00094de6) mup2_visualizer_pane_g1_ParamLimits

0x4eca,	// (0x00094de6) mup2_visualizer_pane_g1

0x4edf,	// (0x00094dfb) mup2_visualizer_pane_g2_ParamLimits

0x4edf,	// (0x00094dfb) mup2_visualizer_pane_g2

0x4eeb,	// (0x00094e07) mup2_visualizer_pane_g3_ParamLimits

0x4eeb,	// (0x00094e07) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x0009f5af) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x0009f5af) mup2_visualizer_pane_g

0xe49b,	// (0x0009e3b7) aid_size_cell_fmradio

0x426b,	// (0x00094187) aid_height_parent_landcape

0xd936,	// (0x0009d852) wml_content_pane_cp

0xd93e,	// (0x0009d85a) wml_tabs_pane

0xd947,	// (0x0009d863) popup_wml_miniature_window

0xd94f,	// (0x0009d86b) scroll_pane_cp021

0xd963,	// (0x0009d87f) wml_content_pane_comp8

0xa128,	// (0x0009a044) bg_popup_sub_pane_cp05

0x4f09,	// (0x00094e25) popup_wml_miniature_window_g1

0x4f11,	// (0x00094e2d) wml_miniature_view_pane

0x4f19,	// (0x00094e35) aid_size_wml_view

0x4f21,	// (0x00094e3d) wml_miniature_view_pane_g1

0x4f2a,	// (0x00094e46) wml_miniature_view_pane_g2

0x4f33,	// (0x00094e4f) wml_miniature_view_pane_g3

0x4f3b,	// (0x00094e57) wml_miniature_view_pane_g4

0x4f43,	// (0x00094e5f) wml_miniature_view_pane_g5

0x4f4b,	// (0x00094e67) wml_miniature_view_pane_g6

0x4f53,	// (0x00094e6f) wml_miniature_view_pane_g7

0x4f5b,	// (0x00094e77) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x0009f5b6) wml_miniature_view_pane_g

0x4f63,	// (0x00094e7f) background_graphic_ParamLimits

0x4f63,	// (0x00094e7f) background_graphic

0x4f6f,	// (0x00094e8b) wml_tabs_2_pane

0x4f78,	// (0x00094e94) wml_tabs_3_pane_ParamLimits

0x4f78,	// (0x00094e94) wml_tabs_3_pane

0x4f8a,	// (0x00094ea6) wml_tabs_4_pane_ParamLimits

0x4f8a,	// (0x00094ea6) wml_tabs_4_pane

0x4fa0,	// (0x00094ebc) wml_tabs_5_pane_ParamLimits

0x4fa0,	// (0x00094ebc) wml_tabs_5_pane

0x4fba,	// (0x00094ed6) wml_tabs_pane_g2_ParamLimits

0x4fba,	// (0x00094ed6) wml_tabs_pane_g2

0x4fce,	// (0x00094eea) wml_tabs_pane_g3_ParamLimits

0x4fce,	// (0x00094eea) wml_tabs_pane_g3

0x4fe2,	// (0x00094efe) wml_tabs_2_active_pane_ParamLimits

0x4fe2,	// (0x00094efe) wml_tabs_2_active_pane

0x4ff6,	// (0x00094f12) wml_tabs_2_passive_pane_ParamLimits

0x4ff6,	// (0x00094f12) wml_tabs_2_passive_pane

0x500a,	// (0x00094f26) wml_tabs_3_active_pane_cp_ParamLimits

0x500a,	// (0x00094f26) wml_tabs_3_active_pane_cp

0x501f,	// (0x00094f3b) wml_tabs_3_passive_pane_ParamLimits

0x501f,	// (0x00094f3b) wml_tabs_3_passive_pane

0x5032,	// (0x00094f4e) wml_tabs_3_passive_pane_cp_ParamLimits

0x5032,	// (0x00094f4e) wml_tabs_3_passive_pane_cp

0x5049,	// (0x00094f65) tabs_4_active_pane

0x5051,	// (0x00094f6d) tabs_4_passive_pane

0x505b,	// (0x00094f77) tabs_4_passive_pane_cp

0x5063,	// (0x00094f7f) tabs_4_passive_pane_cp2

0x3e20,	// (0x00093d3c) aid_height_text

0x309b,	// (0x00092fb7) mup_volume_cont_pane_ParamLimits

0x309b,	// (0x00092fb7) mup_volume_cont_pane

0x0f15,	// (0x00090e31) aid_size_cell_pinb

0x0f1f,	// (0x00090e3b) aid_size_list_pinb

0x4ea0,	// (0x00094dbc) mup2_volume_cont_pane_ParamLimits

0x4ea0,	// (0x00094dbc) mup2_volume_cont_pane

0xa84d,	// (0x0009a769) mup2_volume_cont_pane_g1_ParamLimits

0xa84d,	// (0x0009a769) mup2_volume_cont_pane_g1

0x09b0,	// (0x000908cc) aid_size_cell_touch_ParamLimits

0x09b0,	// (0x000908cc) aid_size_cell_touch

0x0c2c,	// (0x00090b48) touch_pane_ParamLimits

0x0c2c,	// (0x00090b48) touch_pane

0x0992,	// (0x000908ae) main_rss2_pane

0x5076,	// (0x00094f92) listscroll_rss2_pane

0x507f,	// (0x00094f9b) rss2_navigation_pane

0x5087,	// (0x00094fa3) list_rss2_pane

0xe06b,	// (0x0009df87) scroll_pane_cp22

0x508f,	// (0x00094fab) rss2_navigation_pane_g1

0x5098,	// (0x00094fb4) rss2_navigation_pane_g2

0x50a0,	// (0x00094fbc) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x0009f5c7) rss2_navigation_pane_g

0x50a8,	// (0x00094fc4) rss2_navigation_pane_t1

0x50b6,	// (0x00094fd2) rss2_list_single_pane_ParamLimits

0x50b6,	// (0x00094fd2) rss2_list_single_pane

0x50d0,	// (0x00094fec) rss2_list_single_pane_t2

0x50de,	// (0x00094ffa) rss2_list_single_pane_t3_ParamLimits

0x50de,	// (0x00094ffa) rss2_list_single_pane_t3

0xa886,	// (0x0009a7a2) rss2_list_single_pane_t4

0x2803,	// (0x0009271f) smil_status_pane_g1

0x0c12,	// (0x00090b2e) main_image2_pane_ParamLimits

0x0c12,	// (0x00090b2e) main_image2_pane

0x4a7e,	// (0x0009499a) main_camera2_pane_g9_ParamLimits

0x4a7e,	// (0x0009499a) main_camera2_pane_g9

0x4b9a,	// (0x00094ab6) main_camera2_pane_t5_ParamLimits

0x4b9a,	// (0x00094ab6) main_camera2_pane_t5

0xa822,	// (0x0009a73e) main_camera2_pane_t6_ParamLimits

0xa822,	// (0x0009a73e) main_camera2_pane_t6

0x50fb,	// (0x00095017) main_image2_pane_g1_ParamLimits

0x50fb,	// (0x00095017) main_image2_pane_g1

0x37bb,	// (0x000936d7) smil2_video_pane_ParamLimits

0x37bb,	// (0x000936d7) smil2_video_pane

0x09f0,	// (0x0009090c) aid_zoom_text_primary_cp

0x0bce,	// (0x00090aea) popup_preview_fixed_window

0xd89f,	// (0x0009d7bb) im_reading_pane_g1

0x4950,	// (0x0009486c) cams2_bc_adjust_pane_cp_ParamLimits

0x4950,	// (0x0009486c) cams2_bc_adjust_pane_cp

0x4bc0,	// (0x00094adc) cams2_bc_adjust_pane_ParamLimits

0x4bc0,	// (0x00094adc) cams2_bc_adjust_pane

0xa894,	// (0x0009a7b0) cams2_bc_adjust_pane_g1

0xa89c,	// (0x0009a7b8) cams2_slider_pane

0xa8a5,	// (0x0009a7c1) cams2_slider_pane_g1

0xa8ae,	// (0x0009a7ca) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x0009f5ce) cams2_slider_pane_g

0x100f,	// (0x00090f2b) calc_display_pane_ParamLimits

0x1035,	// (0x00090f51) calc_paper_pane_ParamLimits

0x1058,	// (0x00090f74) grid_calc_pane_ParamLimits

0xa78f,	// (0x0009a6ab) popup_clock_digital_window_t1_ParamLimits

0xe438,	// (0x0009e354) main_image_pane_t1

0x0ff1,	// (0x00090f0d) aid_size_cell_calc_ParamLimits

0x0ff1,	// (0x00090f0d) aid_size_cell_calc

0x42cf,	// (0x000941eb) popup_blid_sat_info2_window_ParamLimits

0x42cf,	// (0x000941eb) popup_blid_sat_info2_window

0xa8d0,	// (0x0009a7ec) aid_size_cell_blid

0xa8d8,	// (0x0009a7f4) bg_popup_window_pane_cp07

0xa8fb,	// (0x0009a817) grid_popup_blid_pane

0xa905,	// (0x0009a821) heading_pane_cp05_ParamLimits

0xa905,	// (0x0009a821) heading_pane_cp05

0xa9cf,	// (0x0009a8eb) cell_popup_blid_pane_ParamLimits

0xa9cf,	// (0x0009a8eb) cell_popup_blid_pane

0xa9f9,	// (0x0009a915) cell_popup_blid_pane_g1

0xaa01,	// (0x0009a91d) cell_popup_blid_pane_t1

0x4e70,	// (0x00094d8c) mup2_indicator_pane_ParamLimits

0x4e70,	// (0x00094d8c) mup2_indicator_pane

0xe1a5,	// (0x0009e0c1) mup2_visualizer_osc_pane

0x4ef7,	// (0x00094e13) mup2_visualizer_spec_pane_ParamLimits

0x4ef7,	// (0x00094e13) mup2_visualizer_spec_pane

0x5111,	// (0x0009502d) mup2_spec_half_pane

0x511a,	// (0x00095036) mup2_spec_half_pane_cp

0x5122,	// (0x0009503e) mup2_spec_bar_pane_ParamLimits

0x5122,	// (0x0009503e) mup2_spec_bar_pane

0x46c5,	// (0x000945e1) mup2_spec_bar_pane_g1

0x46cf,	// (0x000945eb) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x0009f541) mup2_spec_bar_pane_g

0x5142,	// (0x0009505e) mup2_osc_middle_pane

0x4701,	// (0x0009461d) mup2_visualizer_osc_pane_g1

0x0c9e,	// (0x00090bba) popup_number_entry_window_t1_ParamLimits

0x0cb1,	// (0x00090bcd) popup_number_entry_window_t2_ParamLimits

0x0cc3,	// (0x00090bdf) popup_number_entry_window_t3_ParamLimits

0x0cd5,	// (0x00090bf1) popup_number_entry_window_t5_ParamLimits

0x0cd5,	// (0x00090bf1) popup_number_entry_window_t5

0xf0e7,	// (0x0009f003) popup_number_entry_window_t_ParamLimits

0x0d0a,	// (0x00090c26) text_title_cp2_ParamLimits

0xa7ce,	// (0x0009a6ea) aid_hotspot_pointer_text2_pane

0xa7f4,	// (0x0009a710) main_viewer_pane_g9_ParamLimits

0xa7f4,	// (0x0009a710) main_viewer_pane_g9

0xdace,	// (0x0009d9ea) cale_month_pane_t1_ParamLimits

0xdb0b,	// (0x0009da27) bg_cale_pane_ParamLimits

0xdb23,	// (0x0009da3f) list_cale_pane_ParamLimits

0xa638,	// (0x0009a554) listscroll_cale_day_pane_t1

0xdb34,	// (0x0009da50) scroll_pane_cp09_ParamLimits

0x30d1,	// (0x00092fed) main_mup_eq_pane_t1_ParamLimits

0x30d1,	// (0x00092fed) main_mup_eq_pane_t1

0x30ed,	// (0x00093009) main_mup_eq_pane_t2_ParamLimits

0x30ed,	// (0x00093009) main_mup_eq_pane_t2

0x3109,	// (0x00093025) main_mup_eq_pane_t3_ParamLimits

0x3109,	// (0x00093025) main_mup_eq_pane_t3

0x3127,	// (0x00093043) main_mup_eq_pane_t4_ParamLimits

0x3127,	// (0x00093043) main_mup_eq_pane_t4

0x3145,	// (0x00093061) main_mup_eq_pane_t5_ParamLimits

0x3145,	// (0x00093061) main_mup_eq_pane_t5

0x3163,	// (0x0009307f) main_mup_eq_pane_t6_ParamLimits

0x3163,	// (0x0009307f) main_mup_eq_pane_t6

0x3179,	// (0x00093095) main_mup_eq_pane_t7_ParamLimits

0x3179,	// (0x00093095) main_mup_eq_pane_t7

0x318f,	// (0x000930ab) main_mup_eq_pane_t8_ParamLimits

0x318f,	// (0x000930ab) main_mup_eq_pane_t8

0x31a5,	// (0x000930c1) main_mup_eq_pane_t9_ParamLimits

0x31a5,	// (0x000930c1) main_mup_eq_pane_t9

0x31c1,	// (0x000930dd) main_mup_eq_pane_t10_ParamLimits

0x31c1,	// (0x000930dd) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x0009f390) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x0009f390) main_mup_eq_pane_t

0x3296,	// (0x000931b2) mup_equalizer_pane_cp5_ParamLimits

0x32ae,	// (0x000931ca) mup_equalizer_pane_cp6_ParamLimits

0x32c6,	// (0x000931e2) mup_equalizer_pane_cp7_ParamLimits

0x0992,	// (0x000908ae) main_gallery_pane

0x471b,	// (0x00094637) smil2_volume_pane

0x4723,	// (0x0009463f) smil_status_volume_pane_g1_ParamLimits

0x4736,	// (0x00094652) smil_status_volume_pane_g2_ParamLimits

0xa800,	// (0x0009a71c) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0009f546) smil_status_volume_pane_g_ParamLimits

0xa8d8,	// (0x0009a7f4) bg_popup_window_pane_cp07_ParamLimits

0xa8e6,	// (0x0009a802) blid_firmament_pane

0x514b,	// (0x00095067) aid_size_cell_gallery_ParamLimits

0x514b,	// (0x00095067) aid_size_cell_gallery

0x5161,	// (0x0009507d) grid_gallery_pane_ParamLimits

0x5161,	// (0x0009507d) grid_gallery_pane

0x517c,	// (0x00095098) cell_gallery_pane_ParamLimits

0x517c,	// (0x00095098) cell_gallery_pane

0xaa0f,	// (0x0009a92b) bg_cell_gallery_focus_pane_ParamLimits

0xaa0f,	// (0x0009a92b) bg_cell_gallery_focus_pane

0xaa21,	// (0x0009a93d) cell_gallery_pane_g1_ParamLimits

0xaa21,	// (0x0009a93d) cell_gallery_pane_g1

0x51cd,	// (0x000950e9) cell_gallery_pane_g2_ParamLimits

0x51cd,	// (0x000950e9) cell_gallery_pane_g2

0x51da,	// (0x000950f6) cell_gallery_pane_g3_ParamLimits

0x51da,	// (0x000950f6) cell_gallery_pane_g3

0xaa2d,	// (0x0009a949) cell_gallery_pane_g4_ParamLimits

0xaa2d,	// (0x0009a949) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0009f5f4) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0009f5f4) cell_gallery_pane_g

0xaa39,	// (0x0009a955) bg_cell_gallery_focus_pane_g1

0xaa41,	// (0x0009a95d) bg_cell_gallery_focus_pane_g2

0xaa49,	// (0x0009a965) bg_cell_gallery_focus_pane_g3

0xaa51,	// (0x0009a96d) bg_cell_gallery_focus_pane_g4

0xaa59,	// (0x0009a975) bg_cell_gallery_focus_pane_g5

0xaa61,	// (0x0009a97d) bg_cell_gallery_focus_pane_g6

0xaa69,	// (0x0009a985) bg_cell_gallery_focus_pane_g7

0xaa71,	// (0x0009a98d) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x0009f5fd) bg_cell_gallery_focus_pane_g

0xaa79,	// (0x0009a995) aid_firma_cardinal

0xaa8d,	// (0x0009a9a9) blid_firmament_pane_t1

0xaaa4,	// (0x0009a9c0) blid_firmament_pane_t2

0xaabb,	// (0x0009a9d7) blid_firmament_pane_t3

0xaad2,	// (0x0009a9ee) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x0009f60e) blid_firmament_pane_t

0xaae9,	// (0x0009aa05) blid_sat_info_pane

0xaaf9,	// (0x0009aa15) blid_sat_info_pane_g1

0xaaf9,	// (0x0009aa15) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0009f617) blid_sat_info_pane_g

0xab03,	// (0x0009aa1f) blid_sat_info_pane_t1

0xab11,	// (0x0009aa2d) smil2_volume_content_pane

0xab1a,	// (0x0009aa36) smil2_volume_pane_g1

0xab22,	// (0x0009aa3e) smil2_volume_content_pane_g1

0xab2b,	// (0x0009aa47) smil2_volume_content_pane_g2

0xab34,	// (0x0009aa50) smil2_volume_content_pane_g3

0xab3d,	// (0x0009aa59) smil2_volume_content_pane_g4

0xab46,	// (0x0009aa62) smil2_volume_content_pane_g5

0xab4f,	// (0x0009aa6b) smil2_volume_content_pane_g6

0xab58,	// (0x0009aa74) smil2_volume_content_pane_g7

0xab61,	// (0x0009aa7d) smil2_volume_content_pane_g8

0xab6a,	// (0x0009aa86) smil2_volume_content_pane_g9

0xab73,	// (0x0009aa8f) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x0009f61c) smil2_volume_content_pane_g

0x1537,	// (0x00091453) cale_week_day_heading_pane_t1_ParamLimits

0x154b,	// (0x00091467) cale_week_day_heading_pane_t2_ParamLimits

0x155f,	// (0x0009147b) cale_week_day_heading_pane_t3_ParamLimits

0x1573,	// (0x0009148f) cale_week_day_heading_pane_t4_ParamLimits

0x1587,	// (0x000914a3) cale_week_day_heading_pane_t5_ParamLimits

0x159b,	// (0x000914b7) cale_week_day_heading_pane_t6_ParamLimits

0x15af,	// (0x000914cb) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x0009f108) cale_week_day_heading_pane_t_ParamLimits

0xa64a,	// (0x0009a566) bg_cale_side_pane_ParamLimits

0x15c3,	// (0x000914df) cale_week_time_pane_t1_ParamLimits

0x15db,	// (0x000914f7) cale_week_time_pane_t2_ParamLimits

0x15f3,	// (0x0009150f) cale_week_time_pane_t3_ParamLimits

0x160b,	// (0x00091527) cale_week_time_pane_t4_ParamLimits

0x1623,	// (0x0009153f) cale_week_time_pane_t5_ParamLimits

0x163b,	// (0x00091557) cale_week_time_pane_t6_ParamLimits

0x1653,	// (0x0009156f) cale_week_time_pane_t7_ParamLimits

0x166f,	// (0x0009158b) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0009f117) cale_week_time_pane_t_ParamLimits

0x168f,	// (0x000915ab) cell_cale_week_pane_g2_ParamLimits

0xa64a,	// (0x0009a566) bg_cale_side_pane_cp01_ParamLimits

0x2672,	// (0x0009258e) cale_month_week_pane_t1_ParamLimits

0x2689,	// (0x000925a5) cale_month_week_pane_t2_ParamLimits

0x26a0,	// (0x000925bc) cale_month_week_pane_t3_ParamLimits

0x26b7,	// (0x000925d3) cale_month_week_pane_t4_ParamLimits

0x26ce,	// (0x000925ea) cale_month_week_pane_t5_ParamLimits

0x26e5,	// (0x00092601) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x0009f1f0) cale_month_week_pane_t_ParamLimits

0xa70f,	// (0x0009a62b) cell_cale_month_pane_g1_ParamLimits

0x0992,	// (0x000908ae) main_cale_event_viewer_pane

0x0992,	// (0x000908ae) listscroll_cale_event_viewer_pane

0xab7c,	// (0x0009aa98) list_cale_ev_pane

0xab84,	// (0x0009aaa0) scroll_pane_cp023

0x51e7,	// (0x00095103) field_cale_ev_pane_ParamLimits

0x51e7,	// (0x00095103) field_cale_ev_pane

0xab90,	// (0x0009aaac) field_cale_ev_content_pane_ParamLimits

0xab90,	// (0x0009aaac) field_cale_ev_content_pane

0xab9c,	// (0x0009aab8) field_cale_ev_pane_g1_ParamLimits

0xab9c,	// (0x0009aab8) field_cale_ev_pane_g1

0xaba8,	// (0x0009aac4) field_cale_ev_pane_g2_ParamLimits

0xaba8,	// (0x0009aac4) field_cale_ev_pane_g2

0xabc0,	// (0x0009aadc) field_cale_ev_pane_g3_ParamLimits

0xabc0,	// (0x0009aadc) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x0009f631) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x0009f631) field_cale_ev_pane_g

0xabd8,	// (0x0009aaf4) field_cale_ev_pane_t1_ParamLimits

0xabd8,	// (0x0009aaf4) field_cale_ev_pane_t1

0x520b,	// (0x00095127) field_cale_ev_content_pane_t1_ParamLimits

0x520b,	// (0x00095127) field_cale_ev_content_pane_t1

0xe31e,	// (0x0009e23a) bg_button_pane_cp01

0xa482,	// (0x0009a39e) listscroll_cale_week_pane_ParamLimits

0x1321,	// (0x0009123d) popup_toolbar_window_cp01

0xa638,	// (0x0009a554) listscroll_cale_week_pane_t1_ParamLimits

0xa482,	// (0x0009a39e) listscroll_cale_day_pane_ParamLimits

0x2863,	// (0x0009277f) popup_toolbar_window_cp02

0xa638,	// (0x0009a554) listscroll_cale_day_pane_t1_ParamLimits

0xa482,	// (0x0009a39e) main_cale_month_pane_ParamLimits

0x458a,	// (0x000944a6) popup_toolbar_window_cp03_ParamLimits

0x458a,	// (0x000944a6) popup_toolbar_window_cp03

0x3679,	// (0x00093595) main_image_pane_g2_ParamLimits

0x3679,	// (0x00093595) main_image_pane_g2

0x368a,	// (0x000935a6) main_image_pane_g3_ParamLimits

0x368a,	// (0x000935a6) main_image_pane_g3

0x0002,

0xf506,	// (0x0009f422) main_image_pane_g_ParamLimits

0xf506,	// (0x0009f422) main_image_pane_g

0xe438,	// (0x0009e354) main_image_pane_t1_ParamLimits

0x369b,	// (0x000935b7) main_image_pane_t2_ParamLimits

0x369b,	// (0x000935b7) main_image_pane_t2

0x36ad,	// (0x000935c9) main_image_pane_t3_ParamLimits

0x36ad,	// (0x000935c9) main_image_pane_t3

0x36d5,	// (0x000935f1) main_image_pane_t4_ParamLimits

0x36d5,	// (0x000935f1) main_image_pane_t4

0x0003,

0xf50d,	// (0x0009f429) main_image_pane_t_ParamLimits

0xf50d,	// (0x0009f429) main_image_pane_t

0x36f5,	// (0x00093611) popup_image_details_window_cp01

0x36ff,	// (0x0009361b) popup_toobar_trans_pane_cp01_ParamLimits

0x36ff,	// (0x0009361b) popup_toobar_trans_pane_cp01

0x43ce,	// (0x000942ea) popup_image_details_window_ParamLimits

0x43ce,	// (0x000942ea) popup_image_details_window

0x43e6,	// (0x00094302) popup_image_focus_window

0x490a,	// (0x00094826) camera2_autofocus_pane_ParamLimits

0x490a,	// (0x00094826) camera2_autofocus_pane

0x0992,	// (0x000908ae) bg_popup_sub_pane_cp06

0xabef,	// (0x0009ab0b) popup_image_focus_window_g1

0xabf7,	// (0x0009ab13) popup_image_focus_window_g2

0xabff,	// (0x0009ab1b) popup_image_focus_window_g3

0xac07,	// (0x0009ab23) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x0009f638) popup_image_focus_window_g

0xac0f,	// (0x0009ab2b) popup_image_focus_window_t1

0xac1d,	// (0x0009ab39) popup_image_focus_window_t2

0xac2d,	// (0x0009ab49) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x0009f641) popup_image_focus_window_t

0xac3b,	// (0x0009ab57) camera2_autofocus_pane_g1

0x0c12,	// (0x00090b2e) bg_tb_trans_pane_cp01

0xac49,	// (0x0009ab65) popup_image_details_window_g1

0xac5c,	// (0x0009ab78) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0009f653) popup_image_details_window_g

0xac85,	// (0x0009aba1) popup_image_details_window_t1

0xac97,	// (0x0009abb3) popup_image_details_window_t2

0xacb0,	// (0x0009abcc) popup_image_details_window_t3

0xacc4,	// (0x0009abe0) popup_image_details_window_t4

0xacdf,	// (0x0009abfb) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x0009f65a) popup_image_details_window_t

0xa44a,	// (0x0009a366) bg_calc_paper_pane_ParamLimits

0xa45e,	// (0x0009a37a) grid_highlight_pane_cp013

0xa468,	// (0x0009a384) list_calc_pane_ParamLimits

0xa47a,	// (0x0009a396) scroll_pane_cp024

0xa482,	// (0x0009a39e) bg_calc_display_pane_ParamLimits

0x1158,	// (0x00091074) calc_display_pane_t1_ParamLimits

0x116a,	// (0x00091086) calc_display_pane_t2_ParamLimits

0xa48e,	// (0x0009a3aa) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x0009f08a) calc_display_pane_t_ParamLimits

0x122d,	// (0x00091149) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x0009f0a7) cell_calc_pane_g

0x1236,	// (0x00091152) cell_calc_pane_t1

0xa505,	// (0x0009a421) grid_highlight_pane_cp02_ParamLimits

0xa51b,	// (0x0009a437) toolbar_button_pane_cp01_ParamLimits

0xa51b,	// (0x0009a437) toolbar_button_pane_cp01

0xe47d,	// (0x0009e399) temp_image_control_pane_ParamLimits

0xe47d,	// (0x0009e399) temp_image_control_pane

0x0c12,	// (0x00090b2e) main_mp3_pane

0xacf9,	// (0x0009ac15) temp_image_control_pane_g1_ParamLimits

0xacf9,	// (0x0009ac15) temp_image_control_pane_g1

0xad07,	// (0x0009ac23) temp_image_control_pane_g2_ParamLimits

0xad07,	// (0x0009ac23) temp_image_control_pane_g2

0xad19,	// (0x0009ac35) temp_image_control_pane_g3_ParamLimits

0xad19,	// (0x0009ac35) temp_image_control_pane_g3

0x525c,	// (0x00095178) temp_image_control_pane_g4_ParamLimits

0x525c,	// (0x00095178) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0009f665) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0009f665) temp_image_control_pane_g

0xacf9,	// (0x0009ac15) main_mp3_pane_g1

0x526f,	// (0x0009518b) main_mp3_pane_g2

0x0007,

0xf752,	// (0x0009f66e) main_mp3_pane_g

0xad5c,	// (0x0009ac78) main_mp3_pane_t1

0xd7aa,	// (0x0009d6c6) main_camera_pane_g8_ParamLimits

0xd7aa,	// (0x0009d6c6) main_camera_pane_g8

0x1960,	// (0x0009187c) main_video_pane_g7_ParamLimits

0x1960,	// (0x0009187c) main_video_pane_g7

0xa83b,	// (0x0009a757) main_camera2_pane_t7_ParamLimits

0xa83b,	// (0x0009a757) main_camera2_pane_t7

0xd8f6,	// (0x0009d812) scroll_pane_cp025_ParamLimits

0xd8f6,	// (0x0009d812) scroll_pane_cp025

0xd90a,	// (0x0009d826) scroll_pane_cp026_ParamLimits

0xd90a,	// (0x0009d826) scroll_pane_cp026

0xd919,	// (0x0009d835) wml_content_pane_ParamLimits

0x0992,	// (0x000908ae) main_touch_calib_pane

0x5337,	// (0x00095253) main_touch_calib_pane_g1

0x5343,	// (0x0009525f) main_touch_calib_pane_g2

0x534f,	// (0x0009526b) main_touch_calib_pane_g3

0x535b,	// (0x00095277) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x0009f68c) main_touch_calib_pane_g

0x5367,	// (0x00095283) main_touch_calib_pane_t1

0x5381,	// (0x0009529d) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x0009f695) main_touch_calib_pane_t

0xe0e6,	// (0x0009e002) mup_progress_pane_cp02

0xe105,	// (0x0009e021) navi_pane_g1

0xe167,	// (0x0009e083) navi_pane_mp_t3

0x0c12,	// (0x00090b2e) main_mp3_pane_ParamLimits

0x45df,	// (0x000944fb) navi_pane_ParamLimits

0xacf9,	// (0x0009ac15) main_mp3_pane_g1_ParamLimits

0x526f,	// (0x0009518b) main_mp3_pane_g2_ParamLimits

0x527b,	// (0x00095197) main_mp3_pane_g3_ParamLimits

0x527b,	// (0x00095197) main_mp3_pane_g3

0x5289,	// (0x000951a5) main_mp3_pane_g4_ParamLimits

0x5289,	// (0x000951a5) main_mp3_pane_g4

0xad29,	// (0x0009ac45) main_mp3_pane_g5_ParamLimits

0xad29,	// (0x0009ac45) main_mp3_pane_g5

0xad37,	// (0x0009ac53) main_mp3_pane_g6_ParamLimits

0xad37,	// (0x0009ac53) main_mp3_pane_g6

0xad44,	// (0x0009ac60) main_mp3_pane_g7_ParamLimits

0xad44,	// (0x0009ac60) main_mp3_pane_g7

0xad50,	// (0x0009ac6c) main_mp3_pane_g8_ParamLimits

0xad50,	// (0x0009ac6c) main_mp3_pane_g8

0xf752,	// (0x0009f66e) main_mp3_pane_g_ParamLimits

0x5295,	// (0x000951b1) main_mp3_pane_t2

0x52a3,	// (0x000951bf) main_mp3_pane_t3

0xad6a,	// (0x0009ac86) main_mp3_pane_t4

0xad78,	// (0x0009ac94) main_mp3_pane_t5

0x0005,

0xf763,	// (0x0009f67f) main_mp3_pane_t

0xad86,	// (0x0009aca2) mup_progress_pane_cp01

0x09f0,	// (0x0009090c) aid_zoom_text_secondary2

0xab7c,	// (0x0009aa98) list_cale_ev2_pane

0xab84,	// (0x0009aaa0) scroll_pane_cp023_ParamLimits

0x53d9,	// (0x000952f5) field_cale_ev2_pane_ParamLimits

0x53d9,	// (0x000952f5) field_cale_ev2_pane

0x53fd,	// (0x00095319) field_cale_ev2_pane_g1_ParamLimits

0x53fd,	// (0x00095319) field_cale_ev2_pane_g1

0x5409,	// (0x00095325) field_cale_ev2_pane_g2_ParamLimits

0x5409,	// (0x00095325) field_cale_ev2_pane_g2

0x5421,	// (0x0009533d) field_cale_ev2_pane_g3_ParamLimits

0x5421,	// (0x0009533d) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x0009f6a0) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x0009f6a0) field_cale_ev2_pane_g

0x5439,	// (0x00095355) field_cale_ev2_pane_t1_ParamLimits

0x5439,	// (0x00095355) field_cale_ev2_pane_t1

0x5450,	// (0x0009536c) field_cale_ev2_pane_t2_ParamLimits

0x5450,	// (0x0009536c) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x0009f6a9) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x0009f6a9) field_cale_ev2_pane_t

0x3514,	// (0x00093430) main_postcard_pane_g5_ParamLimits

0x3514,	// (0x00093430) main_postcard_pane_g5

0x352a,	// (0x00093446) main_postcard_pane_g6_ParamLimits

0x352a,	// (0x00093446) main_postcard_pane_g6

0x170c,	// (0x00091628) camera2_autofocus_pane_cp_ParamLimits

0x170c,	// (0x00091628) camera2_autofocus_pane_cp

0x0c12,	// (0x00090b2e) main_mup3_pane

0x5485,	// (0x000953a1) main_mup3_pane_g1_ParamLimits

0x5485,	// (0x000953a1) main_mup3_pane_g1

0x54a7,	// (0x000953c3) main_mup3_pane_g2_ParamLimits

0x54a7,	// (0x000953c3) main_mup3_pane_g2

0x552a,	// (0x00095446) main_mup3_pane_g3_ParamLimits

0x552a,	// (0x00095446) main_mup3_pane_g3

0x5572,	// (0x0009548e) main_mup3_pane_g4_ParamLimits

0x5572,	// (0x0009548e) main_mup3_pane_g4

0x55ba,	// (0x000954d6) main_mup3_pane_g5_ParamLimits

0x55ba,	// (0x000954d6) main_mup3_pane_g5

0x5602,	// (0x0009551e) main_mup3_pane_g6_ParamLimits

0x5602,	// (0x0009551e) main_mup3_pane_g6

0xad9a,	// (0x0009acb6) main_mup3_pane_g7_ParamLimits

0xad9a,	// (0x0009acb6) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x0009f6b9) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x0009f6b9) main_mup3_pane_g

0x5682,	// (0x0009559e) main_mup3_pane_t1_ParamLimits

0x5682,	// (0x0009559e) main_mup3_pane_t1

0x56f4,	// (0x00095610) main_mup3_pane_t2_ParamLimits

0x56f4,	// (0x00095610) main_mup3_pane_t2

0x57ca,	// (0x000956e6) main_mup3_pane_t4_ParamLimits

0x57ca,	// (0x000956e6) main_mup3_pane_t4

0x5828,	// (0x00095744) main_mup3_pane_t5_ParamLimits

0x5828,	// (0x00095744) main_mup3_pane_t5

0x58e4,	// (0x00095800) main_mup3_pane_t6_ParamLimits

0x58e4,	// (0x00095800) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x0009f6ca) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x0009f6ca) main_mup3_pane_t

0x599a,	// (0x000958b6) mup3_progress_pane_ParamLimits

0x599a,	// (0x000958b6) mup3_progress_pane

0x5a2e,	// (0x0009594a) popup_mup3_control_window_ParamLimits

0x5a2e,	// (0x0009594a) popup_mup3_control_window

0xada8,	// (0x0009acc4) popup_mup3_text_window

0x5a64,	// (0x00095980) mup3_progress_pane_t1

0x5a7b,	// (0x00095997) mup3_progress_pane_t2

0xadb0,	// (0x0009accc) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x0009f6d7) mup3_progress_pane_t

0xadc7,	// (0x0009ace3) mup_progress_pane_cp03

0x0992,	// (0x000908ae) bg_tb_trans_pane_cp04

0x5a92,	// (0x000959ae) mup3_volume_pane

0x5a9a,	// (0x000959b6) popup_mup3_control_window_g1

0x5aa3,	// (0x000959bf) mup3_volume_pane_g1

0x5aac,	// (0x000959c8) mup3_volume_pane_g2

0x5ab5,	// (0x000959d1) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x0009f6de) mup3_volume_pane_g

0x0992,	// (0x000908ae) bg_tb_trans_pane_cp03

0xadd7,	// (0x0009acf3) popup_mup3_text_window_g1

0xaddf,	// (0x0009acfb) popup_mup3_text_window_t1

0xa4dc,	// (0x0009a3f8) list_calc_item_pane_g1_ParamLimits

0x506d,	// (0x00094f89) mup_volume_pane_cp_g1

0x539b,	// (0x000952b7) main_touch_calib_pane_t3

0x53af,	// (0x000952cb) main_touch_calib_pane_t4

0x53c3,	// (0x000952df) main_touch_calib_pane_t5

0x099c,	// (0x000908b8) aid_cell_size_toolbar2

0x09a4,	// (0x000908c0) aid_popup3_width_pane

0x09e0,	// (0x000908fc) aid_zoom_text_msg_primary

0xa6f9,	// (0x0009a615) vorec_t7

0xa4a0,	// (0x0009a3bc) bg_calc_paper_pane_g1_ParamLimits

0xa4ac,	// (0x0009a3c8) bg_calc_paper_pane_g2_ParamLimits

0xa4b8,	// (0x0009a3d4) bg_calc_paper_pane_g3_ParamLimits

0xa4c4,	// (0x0009a3e0) bg_calc_paper_pane_g4_ParamLimits

0xa4d0,	// (0x0009a3ec) bg_calc_paper_pane_g5_ParamLimits

0x11b7,	// (0x000910d3) bg_calc_paper_pane_g6_ParamLimits

0x11ca,	// (0x000910e6) bg_calc_paper_pane_g7_ParamLimits

0x11dd,	// (0x000910f9) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x0009f091) bg_calc_paper_pane_g_ParamLimits

0x11ee,	// (0x0009110a) calc_bg_paper_pane_g9_ParamLimits

0x186e,	// (0x0009178a) image_qvga_pane_ParamLimits

0x186e,	// (0x0009178a) image_qvga_pane

0xa383,	// (0x0009a29f) bg_popup_sub_pane_cp04_ParamLimits

0xe3b4,	// (0x0009e2d0) popup_mup_playback_window_g1_ParamLimits

0xe3c0,	// (0x0009e2dc) popup_mup_playback_window_t1_ParamLimits

0xe3d5,	// (0x0009e2f1) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x0009f41d) popup_mup_playback_window_t_ParamLimits

0x4d8e,	// (0x00094caa) main_mup2_pane_g3_ParamLimits

0x4d8e,	// (0x00094caa) main_mup2_pane_g3

0x1c76,	// (0x00091b92) popup_toolbar_window_cp04

0xe7d0,	// (0x0009e6ec) popup_call2_audio_second_window_g3_ParamLimits

0xe7d0,	// (0x0009e6ec) popup_call2_audio_second_window_g3

0xebda,	// (0x0009eaf6) popup_call2_audio_first_window_g4_ParamLimits

0xebda,	// (0x0009eaf6) popup_call2_audio_first_window_g4

0x3c03,	// (0x00093b1f) popup_call2_audio_in_window_g4_ParamLimits

0x3c03,	// (0x00093b1f) popup_call2_audio_in_window_g4

0x365b,	// (0x00093577) aid_area_sk_bg_cut_ParamLimits

0x365b,	// (0x00093577) aid_area_sk_bg_cut

0xe3ea,	// (0x0009e306) aid_area_sk_bg_cut_2_ParamLimits

0xe3ea,	// (0x0009e306) aid_area_sk_bg_cut_2

0x51bd,	// (0x000950d9) aid_placing_details_win

0x51c5,	// (0x000950e1) aid_placing_details_win_2

0xac3b,	// (0x0009ab57) camera2_autofocus_pane_g1_ParamLimits

0x0bb3,	// (0x00090acf) popup_fixed_preview_cale_window_ParamLimits

0x0bb3,	// (0x00090acf) popup_fixed_preview_cale_window

0xe1b6,	// (0x0009e0d2) navi_slider_pane_g3

0xe1bf,	// (0x0009e0db) navi_slider_pane_g4

0xe1c8,	// (0x0009e0e4) navi_slider_pane_g5

0xe1b6,	// (0x0009e0d2) navi_slider_pane_g6

0xa7b5,	// (0x0009a6d1) navi_slider_pane_g7

0xe2eb,	// (0x0009e207) mup_scale_pane_g3

0xe2f4,	// (0x0009e210) mup_scale_pane_g4

0xe2fd,	// (0x0009e219) mup_scale_pane_g5

0x32de,	// (0x000931fa) mup_scale_pane_g6

0x32e7,	// (0x00093203) mup_scale_pane_g7

0xe1b6,	// (0x0009e0d2) cams2_slider_pane_g3

0xa8b7,	// (0x0009a7d3) cams2_slider_pane_g4

0xa8bf,	// (0x0009a7db) cams2_slider_pane_g5

0xe1b6,	// (0x0009e0d2) cams2_slider_pane_g6

0xa8c7,	// (0x0009a7e3) cams2_slider_pane_g7

0xaaf9,	// (0x0009aa15) camera2_autofocus_pane_cp_g1

0xaded,	// (0x0009ad09) bg_popup_preview_window_pane_cp02_ParamLimits

0xaded,	// (0x0009ad09) bg_popup_preview_window_pane_cp02

0xadf9,	// (0x0009ad15) list_fp_cale_pane_ParamLimits

0xadf9,	// (0x0009ad15) list_fp_cale_pane

0xae05,	// (0x0009ad21) popup_fixed_preview_cale_window_t1_ParamLimits

0xae05,	// (0x0009ad21) popup_fixed_preview_cale_window_t1

0x5abe,	// (0x000959da) popup_fixed_preview_cale_window_t2_ParamLimits

0x5abe,	// (0x000959da) popup_fixed_preview_cale_window_t2

0x5ad3,	// (0x000959ef) popup_fixed_preview_cale_window_t3_ParamLimits

0x5ad3,	// (0x000959ef) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x0009f6e5) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x0009f6e5) popup_fixed_preview_cale_window_t

0xae23,	// (0x0009ad3f) list_single_fp_cale_pane_ParamLimits

0xae23,	// (0x0009ad3f) list_single_fp_cale_pane

0xae3b,	// (0x0009ad57) list_single_fp_cale_pane_g1_ParamLimits

0xae3b,	// (0x0009ad57) list_single_fp_cale_pane_g1

0xae47,	// (0x0009ad63) list_single_fp_cale_pane_g2_ParamLimits

0xae47,	// (0x0009ad63) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x0009f6ec) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x0009f6ec) list_single_fp_cale_pane_g

0xae60,	// (0x0009ad7c) list_single_fp_cale_pane_t1_ParamLimits

0xae60,	// (0x0009ad7c) list_single_fp_cale_pane_t1

0xae72,	// (0x0009ad8e) list_single_fp_cale_pane_t2_ParamLimits

0xae72,	// (0x0009ad8e) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0009f6f3) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0009f6f3) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0992,	// (0x000908ae) main_dialer_pane

0x5aea,	// (0x00095a06) aid_cell_size_keypad

0x5af4,	// (0x00095a10) dialer_ne_pane

0x5afe,	// (0x00095a1a) grid_dialer_command_1_pane

0x5b06,	// (0x00095a22) grid_dialer_command_2_pane

0x5b0e,	// (0x00095a2a) grid_dialer_keypad_pane

0x5b22,	// (0x00095a3e) bg_popup_call_pane_cp06_ParamLimits

0x5b22,	// (0x00095a3e) bg_popup_call_pane_cp06

0x5b2e,	// (0x00095a4a) dialer_ne_clear_pane_ParamLimits

0x5b2e,	// (0x00095a4a) dialer_ne_clear_pane

0xaea5,	// (0x0009adc1) dialer_ne_pane_g1

0xaead,	// (0x0009adc9) dialer_ne_pane_t1_ParamLimits

0xaead,	// (0x0009adc9) dialer_ne_pane_t1

0x5b3a,	// (0x00095a56) dialer_ne_pane_t2_ParamLimits

0x5b3a,	// (0x00095a56) dialer_ne_pane_t2

0x5b64,	// (0x00095a80) dialer_ne_pane_t3_ParamLimits

0x5b64,	// (0x00095a80) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x0009f6f8) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x0009f6f8) dialer_ne_pane_t

0x5b94,	// (0x00095ab0) dialer_ne_pane_t3_copy1_ParamLimits

0x5b94,	// (0x00095ab0) dialer_ne_pane_t3_copy1

0x5bc3,	// (0x00095adf) cell_dialer_keypad_pane_ParamLimits

0x5bc3,	// (0x00095adf) cell_dialer_keypad_pane

0x5bda,	// (0x00095af6) cell_dialer_command_1_pane_ParamLimits

0x5bda,	// (0x00095af6) cell_dialer_command_1_pane

0x5bf0,	// (0x00095b0c) cell_dialer_command_2_pane_ParamLimits

0x5bf0,	// (0x00095b0c) cell_dialer_command_2_pane

0xaebf,	// (0x0009addb) bg_button_pane_cp02_ParamLimits

0xaebf,	// (0x0009addb) bg_button_pane_cp02

0x5bff,	// (0x00095b1b) cell_dialer_keypad_pane_g1_ParamLimits

0x5bff,	// (0x00095b1b) cell_dialer_keypad_pane_g1

0xaebf,	// (0x0009addb) bg_button_pane_cp03_ParamLimits

0xaebf,	// (0x0009addb) bg_button_pane_cp03

0x5c14,	// (0x00095b30) cell_dialer_command_1_pane_g1_ParamLimits

0x5c14,	// (0x00095b30) cell_dialer_command_1_pane_g1

0xaecb,	// (0x0009ade7) bg_button_pane_cp04

0x5c28,	// (0x00095b44) cell_dialer_command_2_pane_g1

0xe1a5,	// (0x0009e0c1) bg_button_pane_cp06

0xaed3,	// (0x0009adef) dialer_ne_clear_pane_g1

0x2dc2,	// (0x00092cde) navi_pane_g2

0x2df0,	// (0x00092d0c) navi_pane_g3

0x0002,

0xf404,	// (0x0009f320) navi_pane_g

0x2e1b,	// (0x00092d37) navi_pane_mv_g2

0x2e42,	// (0x00092d5e) navi_pane_mv_g5

0x2e4a,	// (0x00092d66) navi_pane_mv_t1

0xa482,	// (0x0009a39e) main_clock2_pane

0x5c62,	// (0x00095b7e) main_clock2_list_pane_ParamLimits

0x5c62,	// (0x00095b7e) main_clock2_list_pane

0x5c9c,	// (0x00095bb8) main_clock2_pane_t1_ParamLimits

0x5c9c,	// (0x00095bb8) main_clock2_pane_t1

0x5cd8,	// (0x00095bf4) main_clock2_pane_t2_ParamLimits

0x5cd8,	// (0x00095bf4) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x0009f6ff) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x0009f6ff) main_clock2_pane_t

0x5d67,	// (0x00095c83) popup_clock_analogue_window_cp03_ParamLimits

0x5d67,	// (0x00095c83) popup_clock_analogue_window_cp03

0x5d8e,	// (0x00095caa) popup_clock_digital_window_cp02_ParamLimits

0x5d8e,	// (0x00095caa) popup_clock_digital_window_cp02

0x5e09,	// (0x00095d25) main_clock2_list_single_pane_ParamLimits

0x5e09,	// (0x00095d25) main_clock2_list_single_pane

0xe1a5,	// (0x0009e0c1) list_highlight_pane_cp05

0xaedb,	// (0x0009adf7) main_clock2_list_single_pane_t1

0x1c76,	// (0x00091b92) popup_toolbar_window_cp04_ParamLimits

0x522c,	// (0x00095148) camera2_autofocus_pane_g2_ParamLimits

0x522c,	// (0x00095148) camera2_autofocus_pane_g2

0x5238,	// (0x00095154) camera2_autofocus_pane_g3_ParamLimits

0x5238,	// (0x00095154) camera2_autofocus_pane_g3

0x5244,	// (0x00095160) camera2_autofocus_pane_g4_ParamLimits

0x5244,	// (0x00095160) camera2_autofocus_pane_g4

0x5250,	// (0x0009516c) camera2_autofocus_pane_g5_ParamLimits

0x5250,	// (0x0009516c) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x0009f648) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x0009f648) camera2_autofocus_pane_g

0x5465,	// (0x00095381) camera2_autofocus_pane_cp_g2

0x546d,	// (0x00095389) camera2_autofocus_pane_cp_g3

0x5475,	// (0x00095391) camera2_autofocus_pane_cp_g4

0x547d,	// (0x00095399) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x0009f6ae) camera2_autofocus_pane_cp_g

0x5b1a,	// (0x00095a36) popup_dialer_spcha_window

0x0992,	// (0x000908ae) bg_popup_sub_pane_cp07

0xaee9,	// (0x0009ae05) list_spcha_pane

0xaef1,	// (0x0009ae0d) list_single_spcha_pane_ParamLimits

0xaef1,	// (0x0009ae0d) list_single_spcha_pane

0x0992,	// (0x000908ae) list_highlight_pane_cp06

0xaf02,	// (0x0009ae1e) list_single_spcha_pane_t1

0xf00f,	// (0x0009ef2b) popup_call2_audio_out_window_g4_ParamLimits

0xf00f,	// (0x0009ef2b) popup_call2_audio_out_window_g4

0x0992,	// (0x000908ae) main_imed2_pane

0x43f0,	// (0x0009430c) popup_imed_adjust2_window

0x4403,	// (0x0009431f) popup_imed_trans_window_ParamLimits

0x4403,	// (0x0009431f) popup_imed_trans_window

0xa931,	// (0x0009a84d) popup_blid_sat_info2_window_t1

0xa93f,	// (0x0009a85b) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x0009f5dd) popup_blid_sat_info2_window_t

0x5ebf,	// (0x00095ddb) aid_size_cell_colour_35

0x5edf,	// (0x00095dfb) aid_size_cell_colour_112

0x5eff,	// (0x00095e1b) aid_size_cell_effect

0x4291,	// (0x000941ad) bg_tb_trans_pane_cp02

0xdba7,	// (0x0009dac3) heading_imed_pane

0x5f1f,	// (0x00095e3b) listscroll_imed_pane

0xaf10,	// (0x0009ae2c) heading_imed_pane_g1

0xaf18,	// (0x0009ae34) heading_imed_pane_t1

0xaf26,	// (0x0009ae42) grid_imed_colour_35_pane_ParamLimits

0xaf26,	// (0x0009ae42) grid_imed_colour_35_pane

0x5f2b,	// (0x00095e47) grid_imed_effect_pane

0xaf42,	// (0x0009ae5e) list_imed_aspect_pane

0x5f42,	// (0x00095e5e) scroll_pane_cp027_ParamLimits

0x5f42,	// (0x00095e5e) scroll_pane_cp027

0x5f53,	// (0x00095e6f) cell_imed_effect_pane_ParamLimits

0x5f53,	// (0x00095e6f) cell_imed_effect_pane

0xaf4a,	// (0x0009ae66) cell_imed_colour_pane_ParamLimits

0xaf4a,	// (0x0009ae66) cell_imed_colour_pane

0xaf94,	// (0x0009aeb0) cell_imed_colour_pane_g1_ParamLimits

0xaf94,	// (0x0009aeb0) cell_imed_colour_pane_g1

0xafa5,	// (0x0009aec1) hgihlgiht_grid_pane_cp016_ParamLimits

0xafa5,	// (0x0009aec1) hgihlgiht_grid_pane_cp016

0x5f78,	// (0x00095e94) cell_imed_effect_pane_g1

0x5f80,	// (0x00095e9c) grid_highlight_pane_cp017

0xafb6,	// (0x0009aed2) list_imed_single_pane_ParamLimits

0xafb6,	// (0x0009aed2) list_imed_single_pane

0x0992,	// (0x000908ae) list_highlight_pane_cp07

0xafca,	// (0x0009aee6) list_imed_aspect_pane_comp1_t1

0x4291,	// (0x000941ad) bg_tb_trans_pane_cp05

0xafec,	// (0x0009af08) popup_imed_adjust2_window_g1

0xb013,	// (0x0009af2f) popup_imed_adjust2_window_t1

0xb02b,	// (0x0009af47) slider_imed_adjust_pane

0xb03f,	// (0x0009af5b) slider_imed_adjust_pane_g1

0xb04f,	// (0x0009af6b) slider_imed_adjust_pane_g2

0xb05f,	// (0x0009af7b) slider_imed_adjust_pane_g3

0xb070,	// (0x0009af8c) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x0009f71c) slider_imed_adjust_pane_g

0x5f89,	// (0x00095ea5) aid_size_cell_clipart2

0x5f95,	// (0x00095eb1) grid_imed_clipart_pane

0xb081,	// (0x0009af9d) scroll_pane_cp031

0x5f9f,	// (0x00095ebb) cell_imed_clipart_pane_ParamLimits

0x5f9f,	// (0x00095ebb) cell_imed_clipart_pane

0x5fbc,	// (0x00095ed8) cell_imed_clipart_pane_g1

0x0992,	// (0x000908ae) grid_highlight_pane_cp014

0x5c77,	// (0x00095b93) main_clock2_pane_g1_ParamLimits

0x5c77,	// (0x00095b93) main_clock2_pane_g1

0x5db0,	// (0x00095ccc) aid_call2_pane_cp10

0x5dc2,	// (0x00095cde) aid_call_pane_cp10

0xe0da,	// (0x0009dff6) popup_clock_analogue_window_cp10_g1

0xe0da,	// (0x0009dff6) popup_clock_analogue_window_cp10_g2

0x5dd4,	// (0x00095cf0) popup_clock_analogue_window_cp10_g3

0x5dd4,	// (0x00095cf0) popup_clock_analogue_window_cp10_g4

0xe0da,	// (0x0009dff6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x0009f70a) popup_clock_analogue_window_cp10_g

0x5dea,	// (0x00095d06) popup_clock_analogue_window_cp10_t1

0x5e1b,	// (0x00095d37) clock_digital_number_pane_cp10_ParamLimits

0x5e1b,	// (0x00095d37) clock_digital_number_pane_cp10

0x5e35,	// (0x00095d51) clock_digital_number_pane_cp11_ParamLimits

0x5e35,	// (0x00095d51) clock_digital_number_pane_cp11

0x5e4f,	// (0x00095d6b) clock_digital_number_pane_cp12_ParamLimits

0x5e4f,	// (0x00095d6b) clock_digital_number_pane_cp12

0x5e69,	// (0x00095d85) clock_digital_number_pane_cp13_ParamLimits

0x5e69,	// (0x00095d85) clock_digital_number_pane_cp13

0x5e83,	// (0x00095d9f) clock_digital_separator_pane_cp10_ParamLimits

0x5e83,	// (0x00095d9f) clock_digital_separator_pane_cp10

0x5e9d,	// (0x00095db9) popup_clock_digital_window_cp02_t1_ParamLimits

0x5e9d,	// (0x00095db9) popup_clock_digital_window_cp02_t1

0xa37b,	// (0x0009a297) clock_digital_number_pane_cp10_g1

0xa37b,	// (0x0009a297) clock_digital_number_pane_cp10_g2

0x0001,

0xf809,	// (0x0009f725) clock_digital_number_pane_cp10_g

0xa37b,	// (0x0009a297) clock_digital_separator_pane_cp10_g1

0xa37b,	// (0x0009a297) clock_digital_separator_pane_g2_cp10

0xe175,	// (0x0009e091) navi_pane_vded_g4

0xe17e,	// (0x0009e09a) navi_pane_vded_g5

0xe187,	// (0x0009e0a3) navi_pane_vded_t1

0x0992,	// (0x000908ae) main_vded_pane

0x5fc5,	// (0x00095ee1) main_vded_pane_g1

0x5fd1,	// (0x00095eed) main_vded_pane_g2

0x5fdd,	// (0x00095ef9) main_vded_pane_g3

0x0002,

0xf80e,	// (0x0009f72a) main_vded_pane_g

0x5fe9,	// (0x00095f05) main_vded_pane_t1

0x5ff7,	// (0x00095f13) main_vded_pane_t2

0x0001,

0xf815,	// (0x0009f731) main_vded_pane_t

0x6005,	// (0x00095f21) vded_slider_pane

0x600f,	// (0x00095f2b) vded_video_pane

0xb089,	// (0x0009afa5) vded_video_pane_g1

0x601b,	// (0x00095f37) vded_video_pane_g2

0xaaf9,	// (0x0009aa15) vded_video_pane_g3

0x0002,

0xf81a,	// (0x0009f736) vded_video_pane_g

0xb093,	// (0x0009afaf) vded_slider_pane_g1

0x506d,	// (0x00094f89) vded_slider_pane_g2

0xb09c,	// (0x0009afb8) vded_slider_pane_g3

0xb0a5,	// (0x0009afc1) vded_slider_pane_g4

0xb0ae,	// (0x0009afca) vded_slider_pane_g5

0x0004,

0xf821,	// (0x0009f73d) vded_slider_pane_g

0x5a18,	// (0x00095934) mup3_rocker_pane_ParamLimits

0x5a18,	// (0x00095934) mup3_rocker_pane

0x6024,	// (0x00095f40) mup3_control_keys_pane_g1

0x602c,	// (0x00095f48) mup3_control_keys_pane_g2

0x6034,	// (0x00095f50) mup3_control_keys_pane_g3

0x603c,	// (0x00095f58) mup3_control_keys_pane_g4

0x0003,

0xf82c,	// (0x0009f748) mup3_control_keys_pane_g

0x0bf4,	// (0x00090b10) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0bf4,	// (0x00090b10) popup_toolbar2_fixed_window_cp01

0x5a4e,	// (0x0009596a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5a4e,	// (0x0009596a) popup_toolbar2_fixed_window_cp02

0xe942,	// (0x0009e85e) popup_call2_audio_second_window_t4_ParamLimits

0xe942,	// (0x0009e85e) popup_call2_audio_second_window_t4

0xee70,	// (0x0009ed8c) popup_call2_audio_first_window_t6_ParamLimits

0xee70,	// (0x0009ed8c) popup_call2_audio_first_window_t6

0x3ab0,	// (0x000939cc) popup_call2_audio_out_window_t6_ParamLimits

0x3ab0,	// (0x000939cc) popup_call2_audio_out_window_t6

0x0992,	// (0x000908ae) main_vitu_pane

0x604c,	// (0x00095f68) aid_size_cell_itu_ParamLimits

0x604c,	// (0x00095f68) aid_size_cell_itu

0x0c12,	// (0x00090b2e) bg_popup_window_pane_cp08_ParamLimits

0x0c12,	// (0x00090b2e) bg_popup_window_pane_cp08

0x6062,	// (0x00095f7e) field_vitu_entry_pane_ParamLimits

0x6062,	// (0x00095f7e) field_vitu_entry_pane

0x6079,	// (0x00095f95) grid_vitu_function_pane_ParamLimits

0x6079,	// (0x00095f95) grid_vitu_function_pane

0x6094,	// (0x00095fb0) grid_vitu_itu_pane_ParamLimits

0x6094,	// (0x00095fb0) grid_vitu_itu_pane

0x60b0,	// (0x00095fcc) cell_vitu_itu_pane_ParamLimits

0x60b0,	// (0x00095fcc) cell_vitu_itu_pane

0x60d6,	// (0x00095ff2) cell_vitu_function_pane_ParamLimits

0x60d6,	// (0x00095ff2) cell_vitu_function_pane

0x0c12,	// (0x00090b2e) bg_popup_sub_pane_cp08_ParamLimits

0x0c12,	// (0x00090b2e) bg_popup_sub_pane_cp08

0x60f1,	// (0x0009600d) field_vitu_entry_pane_t1_ParamLimits

0x60f1,	// (0x0009600d) field_vitu_entry_pane_t1

0xb0cf,	// (0x0009afeb) field_vitu_entry_pane_t2_ParamLimits

0xb0cf,	// (0x0009afeb) field_vitu_entry_pane_t2

0x0001,

0xf83a,	// (0x0009f756) field_vitu_entry_pane_t_ParamLimits

0xf83a,	// (0x0009f756) field_vitu_entry_pane_t

0xb0ec,	// (0x0009b008) bg_button_pane_cp05_ParamLimits

0xb0ec,	// (0x0009b008) bg_button_pane_cp05

0x6111,	// (0x0009602d) cell_vitu_itu_pane_g1

0x6129,	// (0x00096045) cell_vitu_itu_pane_t1_ParamLimits

0x6129,	// (0x00096045) cell_vitu_itu_pane_t1

0x613b,	// (0x00096057) cell_vitu_itu_pane_t2_ParamLimits

0x613b,	// (0x00096057) cell_vitu_itu_pane_t2

0x0002,

0xf83f,	// (0x0009f75b) cell_vitu_itu_pane_t_ParamLimits

0xf83f,	// (0x0009f75b) cell_vitu_itu_pane_t

0xb0fa,	// (0x0009b016) bg_button_pane_cp07

0x6170,	// (0x0009608c) cell_vitu_function_pane_g1

0xa40a,	// (0x0009a326) main_calc_pane_g1

0x09d4,	// (0x000908f0) aid_visual_content_pane

0x0992,	// (0x000908ae) main_vradio_pane

0x6179,	// (0x00096095) main_vradio_pane_g1_ParamLimits

0x6179,	// (0x00096095) main_vradio_pane_g1

0xb104,	// (0x0009b020) main_vradio_pane_g2_ParamLimits

0xb104,	// (0x0009b020) main_vradio_pane_g2

0x0001,

0xf846,	// (0x0009f762) main_vradio_pane_g_ParamLimits

0xf846,	// (0x0009f762) main_vradio_pane_g

0x6190,	// (0x000960ac) main_vradio_pane_t1_ParamLimits

0x6190,	// (0x000960ac) main_vradio_pane_t1

0x61a5,	// (0x000960c1) main_vradio_pane_t2_ParamLimits

0x61a5,	// (0x000960c1) main_vradio_pane_t2

0xb111,	// (0x0009b02d) main_vradio_pane_t3_ParamLimits

0xb111,	// (0x0009b02d) main_vradio_pane_t3

0x0002,

0xf84b,	// (0x0009f767) main_vradio_pane_t_ParamLimits

0xf84b,	// (0x0009f767) main_vradio_pane_t

0x61ba,	// (0x000960d6) vradio_rocker_control_pane_ParamLimits

0x61ba,	// (0x000960d6) vradio_rocker_control_pane

0x61cc,	// (0x000960e8) vradio_station_info_pane_ParamLimits

0x61cc,	// (0x000960e8) vradio_station_info_pane

0xb125,	// (0x0009b041) vradio_frequency_info_pane_ParamLimits

0xb125,	// (0x0009b041) vradio_frequency_info_pane

0xaaf9,	// (0x0009aa15) vradio_station_info_pane_g1

0xb134,	// (0x0009b050) vradio_station_info_pane_t1_ParamLimits

0xb134,	// (0x0009b050) vradio_station_info_pane_t1

0xb156,	// (0x0009b072) vradio_station_info_pane_t2_ParamLimits

0xb156,	// (0x0009b072) vradio_station_info_pane_t2

0x0001,

0xf852,	// (0x0009f76e) vradio_station_info_pane_t_ParamLimits

0xf852,	// (0x0009f76e) vradio_station_info_pane_t

0xb168,	// (0x0009b084) vradio_tuning_pane

0xb170,	// (0x0009b08c) vradio_rocker_control_pane_g1

0xb178,	// (0x0009b094) vradio_rocker_control_pane_g2

0xb180,	// (0x0009b09c) vradio_rocker_control_pane_g3

0xb188,	// (0x0009b0a4) vradio_rocker_control_pane_g4

0xb190,	// (0x0009b0ac) vradio_rocker_control_pane_g5

0x0004,

0xf857,	// (0x0009f773) vradio_rocker_control_pane_g

0x61dc,	// (0x000960f8) vradio_frequency_info_pane_g1

0xb198,	// (0x0009b0b4) vradio_frequency_info_pane_t1_ParamLimits

0xb198,	// (0x0009b0b4) vradio_frequency_info_pane_t1

0x61e6,	// (0x00096102) vradio_tuning_pane_g1

0x61f1,	// (0x0009610d) vradio_tuning_pane_t1

0x0a31,	// (0x0009094d) area_side_right_pane_ParamLimits

0x0a31,	// (0x0009094d) area_side_right_pane

0x423a,	// (0x00094156) status_small_pane_g1

0x4242,	// (0x0009415e) status_small_pane_g2

0x424b,	// (0x00094167) status_small_pane_g3

0x4254,	// (0x00094170) status_small_pane_g4

0x0003,

0xf617,	// (0x0009f533) status_small_pane_g

0x425d,	// (0x00094179) status_small_pane_t1

0x0992,	// (0x000908ae) main_video3_pane

0xb1ac,	// (0x0009b0c8) cams_zoom_vslider_pane

0xb1b4,	// (0x0009b0d0) image3_wide_pane_ParamLimits

0xb1b4,	// (0x0009b0d0) image3_wide_pane

0xb1ce,	// (0x0009b0ea) image3_wide_small_pane

0xb1da,	// (0x0009b0f6) main_video3_pane_g1_ParamLimits

0xb1da,	// (0x0009b0f6) main_video3_pane_g1

0xb1f6,	// (0x0009b112) main_video3_pane_g2_ParamLimits

0xb1f6,	// (0x0009b112) main_video3_pane_g2

0x0001,

0xf862,	// (0x0009f77e) main_video3_pane_g_ParamLimits

0xf862,	// (0x0009f77e) main_video3_pane_g

0xb212,	// (0x0009b12e) main_video3_pane_t1_ParamLimits

0xb212,	// (0x0009b12e) main_video3_pane_t1

0xb23d,	// (0x0009b159) main_video3_pane_t2_ParamLimits

0xb23d,	// (0x0009b159) main_video3_pane_t2

0xb26a,	// (0x0009b186) main_video3_pane_t3_ParamLimits

0xb26a,	// (0x0009b186) main_video3_pane_t3

0x0002,

0xf867,	// (0x0009f783) main_video3_pane_t_ParamLimits

0xf867,	// (0x0009f783) main_video3_pane_t

0xb297,	// (0x0009b1b3) cams_zoom_vslider_pane_g1

0xb2a0,	// (0x0009b1bc) cams_zoom_vslider_pane_g2

0x0001,

0xf86e,	// (0x0009f78a) cams_zoom_vslider_pane_g

0xb2a8,	// (0x0009b1c4) small_slider_vertical_pane

0xaaf9,	// (0x0009aa15) small_slider_vertical_pane_g1

0xaaf9,	// (0x0009aa15) small_slider_vertical_pane_g2

0xb2b0,	// (0x0009b1cc) small_slider_vertical_pane_g3

0x0002,

0xf873,	// (0x0009f78f) small_slider_vertical_pane_g

0x0992,	// (0x000908ae) main_hwr_training_pane

0xb2b9,	// (0x0009b1d5) hwr_training_instruct_pane_ParamLimits

0xb2b9,	// (0x0009b1d5) hwr_training_instruct_pane

0x6200,	// (0x0009611c) hwr_training_navi_pane_ParamLimits

0x6200,	// (0x0009611c) hwr_training_navi_pane

0x621f,	// (0x0009613b) hwr_training_write_pane_ParamLimits

0x621f,	// (0x0009613b) hwr_training_write_pane

0x0992,	// (0x000908ae) bg_frame_shadow_pane

0xb2f0,	// (0x0009b20c) hwr_training_write_pane_g1

0xb2f8,	// (0x0009b214) hwr_training_write_pane_g2

0xb300,	// (0x0009b21c) hwr_training_write_pane_g3

0xb308,	// (0x0009b224) hwr_training_write_pane_g4

0xb310,	// (0x0009b22c) hwr_training_write_pane_g5

0xb318,	// (0x0009b234) hwr_training_write_pane_g6

0xb320,	// (0x0009b23c) hwr_training_write_pane_g7

0x0006,

0xf87a,	// (0x0009f796) hwr_training_write_pane_g

0xb328,	// (0x0009b244) hwr_training_navi_pane_g1_ParamLimits

0xb328,	// (0x0009b244) hwr_training_navi_pane_g1

0xb33a,	// (0x0009b256) hwr_training_navi_pane_g2_ParamLimits

0xb33a,	// (0x0009b256) hwr_training_navi_pane_g2

0xb34c,	// (0x0009b268) hwr_training_navi_pane_g3_ParamLimits

0xb34c,	// (0x0009b268) hwr_training_navi_pane_g3

0xb35c,	// (0x0009b278) hwr_training_navi_pane_g4_ParamLimits

0xb35c,	// (0x0009b278) hwr_training_navi_pane_g4

0x0004,

0xf889,	// (0x0009f7a5) hwr_training_navi_pane_g_ParamLimits

0xf889,	// (0x0009f7a5) hwr_training_navi_pane_g

0xb369,	// (0x0009b285) hwr_training_navi_pane_t1

0x6267,	// (0x00096183) list_single_hwr_training_instruct_pane_ParamLimits

0x6267,	// (0x00096183) list_single_hwr_training_instruct_pane

0xb377,	// (0x0009b293) list_single_hwr_training_instruct_pane_t1

0xaa39,	// (0x0009a955) bg_frame_shadow_pane_g1

0xb386,	// (0x0009b2a2) bg_frame_shadow_pane_g2

0xb38e,	// (0x0009b2aa) bg_frame_shadow_pane_g3

0xb396,	// (0x0009b2b2) bg_frame_shadow_pane_g4

0xb39e,	// (0x0009b2ba) bg_frame_shadow_pane_g5

0xb3a6,	// (0x0009b2c2) bg_frame_shadow_pane_g6

0xb3ae,	// (0x0009b2ca) bg_frame_shadow_pane_g7

0xa57b,	// (0x0009a497) bg_frame_shadow_pane_g8

0x0007,

0xf894,	// (0x0009f7b0) bg_frame_shadow_pane_g

0x0992,	// (0x000908ae) main_video_tele_dialer_pane

0x6283,	// (0x0009619f) aid_size_cell_video_keypad_ParamLimits

0x6283,	// (0x0009619f) aid_size_cell_video_keypad

0x629d,	// (0x000961b9) grid_video_dialer_keypad_pane_ParamLimits

0x629d,	// (0x000961b9) grid_video_dialer_keypad_pane

0x62e9,	// (0x00096205) video_down_pane_cp_ParamLimits

0x62e9,	// (0x00096205) video_down_pane_cp

0x6319,	// (0x00096235) cell_video_dialer_keypad_pane_ParamLimits

0x6319,	// (0x00096235) cell_video_dialer_keypad_pane

0xb3b6,	// (0x0009b2d2) bg_button_pane_cp08_ParamLimits

0xb3b6,	// (0x0009b2d2) bg_button_pane_cp08

0x633f,	// (0x0009625b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x633f,	// (0x0009625b) cell_video_dialer_keypad_pane_g1

0x5a02,	// (0x0009591e) mup3_rocker2_pane_ParamLimits

0x5a02,	// (0x0009591e) mup3_rocker2_pane

0xaaf9,	// (0x0009aa15) mup3_rocker2_pane_g1

0x429f,	// (0x000941bb) main_dialer2_pane

0x0992,	// (0x000908ae) main_mp4_pane

0xb3ca,	// (0x0009b2e6) main_mp4_pane_g1_ParamLimits

0xb3ca,	// (0x0009b2e6) main_mp4_pane_g1

0xb3ca,	// (0x0009b2e6) main_mp4_pane_g2_ParamLimits

0xb3ca,	// (0x0009b2e6) main_mp4_pane_g2

0x637a,	// (0x00096296) main_mp4_pane_g3_ParamLimits

0x637a,	// (0x00096296) main_mp4_pane_g3

0xb3d8,	// (0x0009b2f4) main_mp4_pane_g4_ParamLimits

0xb3d8,	// (0x0009b2f4) main_mp4_pane_g4

0xb400,	// (0x0009b31c) main_mp4_pane_g5_ParamLimits

0xb400,	// (0x0009b31c) main_mp4_pane_g5

0x0005,

0xf8b4,	// (0x0009f7d0) main_mp4_pane_g_ParamLimits

0xf8b4,	// (0x0009f7d0) main_mp4_pane_g

0xb450,	// (0x0009b36c) main_mp4_pane_t1_ParamLimits

0xb450,	// (0x0009b36c) main_mp4_pane_t1

0xb4ac,	// (0x0009b3c8) main_mp4_pane_t2_ParamLimits

0xb4ac,	// (0x0009b3c8) main_mp4_pane_t2

0xb4fe,	// (0x0009b41a) main_mp4_pane_t3_ParamLimits

0xb4fe,	// (0x0009b41a) main_mp4_pane_t3

0xb51e,	// (0x0009b43a) main_mp4_pane_t4_ParamLimits

0xb51e,	// (0x0009b43a) main_mp4_pane_t4

0x0003,

0xf8c1,	// (0x0009f7dd) main_mp4_pane_t_ParamLimits

0xf8c1,	// (0x0009f7dd) main_mp4_pane_t

0xb55e,	// (0x0009b47a) mp4_progress_pane_ParamLimits

0xb55e,	// (0x0009b47a) mp4_progress_pane

0xb5a8,	// (0x0009b4c4) mp4_rocker_pane_ParamLimits

0xb5a8,	// (0x0009b4c4) mp4_rocker_pane

0xb5d2,	// (0x0009b4ee) mp4_progress_pane_t1

0xb5eb,	// (0x0009b507) mp4_progress_pane_t2

0x0001,

0xf8ca,	// (0x0009f7e6) mp4_progress_pane_t

0xb604,	// (0x0009b520) mup_progress_pane_cp04

0xb610,	// (0x0009b52c) mp4_rocker_pane_g1

0x63c4,	// (0x000962e0) aid_cell_size_keypad2_ParamLimits

0x63c4,	// (0x000962e0) aid_cell_size_keypad2

0x63da,	// (0x000962f6) dialer2_ne_pane_ParamLimits

0x63da,	// (0x000962f6) dialer2_ne_pane

0x63f2,	// (0x0009630e) grid_dialer2_keypad_pane_ParamLimits

0x63f2,	// (0x0009630e) grid_dialer2_keypad_pane

0xa8d8,	// (0x0009a7f4) bg_popup_call_pane_cp07_ParamLimits

0xa8d8,	// (0x0009a7f4) bg_popup_call_pane_cp07

0x640e,	// (0x0009632a) dialer2_ne_pane_t1_ParamLimits

0x640e,	// (0x0009632a) dialer2_ne_pane_t1

0x644e,	// (0x0009636a) cell_dialer2_keypad_pane_ParamLimits

0x644e,	// (0x0009636a) cell_dialer2_keypad_pane

0xb62c,	// (0x0009b548) bg_button_pane_pane_cp04_ParamLimits

0xb62c,	// (0x0009b548) bg_button_pane_pane_cp04

0x6474,	// (0x00096390) cell_dialer2_keypad_pane_g1_ParamLimits

0x6474,	// (0x00096390) cell_dialer2_keypad_pane_g1

0x1b5d,	// (0x00091a79) aid_placing_vt_set_content_ParamLimits

0x1b5d,	// (0x00091a79) aid_placing_vt_set_content

0x1b81,	// (0x00091a9d) aid_placing_vt_set_title_ParamLimits

0x1b81,	// (0x00091a9d) aid_placing_vt_set_title

0x0992,	// (0x000908ae) main_image3_pane

0x653a,	// (0x00096456) area_side_right_pane_cp01_ParamLimits

0x653a,	// (0x00096456) area_side_right_pane_cp01

0xb3ca,	// (0x0009b2e6) main_image3_pane_g1_ParamLimits

0xb3ca,	// (0x0009b2e6) main_image3_pane_g1

0x6553,	// (0x0009646f) main_image3_pane_g2_ParamLimits

0x6553,	// (0x0009646f) main_image3_pane_g2

0x657b,	// (0x00096497) main_image3_pane_g3_ParamLimits

0x657b,	// (0x00096497) main_image3_pane_g3

0x65a5,	// (0x000964c1) main_image3_pane_g4_ParamLimits

0x65a5,	// (0x000964c1) main_image3_pane_g4

0x0003,

0xf8d9,	// (0x0009f7f5) main_image3_pane_g_ParamLimits

0xf8d9,	// (0x0009f7f5) main_image3_pane_g

0x65cf,	// (0x000964eb) main_image3_pane_t1_ParamLimits

0x65cf,	// (0x000964eb) main_image3_pane_t1

0x6627,	// (0x00096543) main_image3_pane_t2_ParamLimits

0x6627,	// (0x00096543) main_image3_pane_t2

0x6679,	// (0x00096595) main_image3_pane_t3_ParamLimits

0x6679,	// (0x00096595) main_image3_pane_t3

0x0003,

0xf8e2,	// (0x0009f7fe) main_image3_pane_t_ParamLimits

0xf8e2,	// (0x0009f7fe) main_image3_pane_t

0x0c12,	// (0x00090b2e) grid_sctrl_middle_pane_cp01_ParamLimits

0x0c12,	// (0x00090b2e) grid_sctrl_middle_pane_cp01

0x6701,	// (0x0009661d) cell_sctrl_middle_pane_cp01_ParamLimits

0x6701,	// (0x0009661d) cell_sctrl_middle_pane_cp01

0x671e,	// (0x0009663a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x671e,	// (0x0009663a) cell_sctrl_middle_pane_cp01_g1

0x0992,	// (0x000908ae) main_call4_pane

0x6733,	// (0x0009664f) aid_size_button_call4_ParamLimits

0x6733,	// (0x0009664f) aid_size_button_call4

0x6766,	// (0x00096682) call4_windows_pane_ParamLimits

0x6766,	// (0x00096682) call4_windows_pane

0x6788,	// (0x000966a4) grid_call4_button_pane_ParamLimits

0x6788,	// (0x000966a4) grid_call4_button_pane

0xb66c,	// (0x0009b588) call4_windows_conf_pane

0x67b3,	// (0x000966cf) popup_call4_audio_first_window_ParamLimits

0x67b3,	// (0x000966cf) popup_call4_audio_first_window

0x67df,	// (0x000966fb) popup_call4_audio_second_window_ParamLimits

0x67df,	// (0x000966fb) popup_call4_audio_second_window

0xb6a9,	// (0x0009b5c5) popup_call4_audio_wait_window_ParamLimits

0xb6a9,	// (0x0009b5c5) popup_call4_audio_wait_window

0x67f5,	// (0x00096711) cell_call4_button_pane_ParamLimits

0x67f5,	// (0x00096711) cell_call4_button_pane

0x681c,	// (0x00096738) bg_button_pane_cp09_ParamLimits

0x681c,	// (0x00096738) bg_button_pane_cp09

0x6828,	// (0x00096744) cell_call4_button_pane_g1_ParamLimits

0x6828,	// (0x00096744) cell_call4_button_pane_g1

0x684e,	// (0x0009676a) cell_call4_button_pane_t1_ParamLimits

0x684e,	// (0x0009676a) cell_call4_button_pane_t1

0xb6f1,	// (0x0009b60d) popup_call4_audio_conf_window_ParamLimits

0xb6f1,	// (0x0009b60d) popup_call4_audio_conf_window

0x5a64,	// (0x00095980) mup3_progress_pane_t1_ParamLimits

0x5a7b,	// (0x00095997) mup3_progress_pane_t2_ParamLimits

0xadb0,	// (0x0009accc) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x0009f6d7) mup3_progress_pane_t_ParamLimits

0xadc7,	// (0x0009ace3) mup_progress_pane_cp03_ParamLimits

0x6044,	// (0x00095f60) mup3_control_keys_pane_g4_copy1

0xb58c,	// (0x0009b4a8) mp4_rocker2_pane_ParamLimits

0xb58c,	// (0x0009b4a8) mp4_rocker2_pane

0xb70b,	// (0x0009b627) mp4_rocker2_pane_g1

0xb713,	// (0x0009b62f) mp4_rocker2_pane_g2

0xdc15,	// (0x0009db31) mp4_rocker2_pane_g3

0xdc1d,	// (0x0009db39) mp4_rocker2_pane_g4

0xdc25,	// (0x0009db41) mp4_rocker2_pane_g5

0x0004,

0xf8eb,	// (0x0009f807) mp4_rocker2_pane_g

0x0992,	// (0x000908ae) main_camera4_pane

0x0992,	// (0x000908ae) main_video4_pane

0x62b7,	// (0x000961d3) main_video_tele_dialer_pane_t1_ParamLimits

0x62b7,	// (0x000961d3) main_video_tele_dialer_pane_t1

0x62d0,	// (0x000961ec) main_video_tele_dialer_pane_t2_ParamLimits

0x62d0,	// (0x000961ec) main_video_tele_dialer_pane_t2

0x0001,

0xf8a5,	// (0x0009f7c1) main_video_tele_dialer_pane_t_ParamLimits

0xf8a5,	// (0x0009f7c1) main_video_tele_dialer_pane_t

0x688c,	// (0x000967a8) cam4_autofocus_pane_ParamLimits

0x688c,	// (0x000967a8) cam4_autofocus_pane

0x68a2,	// (0x000967be) cam4_image_uncrop_pane_ParamLimits

0x68a2,	// (0x000967be) cam4_image_uncrop_pane

0x68bb,	// (0x000967d7) cam4_indicators_pane_ParamLimits

0x68bb,	// (0x000967d7) cam4_indicators_pane

0x68ea,	// (0x00096806) main_camera4_pane_g1_ParamLimits

0x68ea,	// (0x00096806) main_camera4_pane_g1

0x68fd,	// (0x00096819) main_camera4_pane_g2_ParamLimits

0x68fd,	// (0x00096819) main_camera4_pane_g2

0x6910,	// (0x0009682c) main_camera4_pane_g3_ParamLimits

0x6910,	// (0x0009682c) main_camera4_pane_g3

0x6923,	// (0x0009683f) main_camera4_pane_g4_ParamLimits

0x6923,	// (0x0009683f) main_camera4_pane_g4

0x6936,	// (0x00096852) main_camera4_pane_g5_ParamLimits

0x6936,	// (0x00096852) main_camera4_pane_g5

0x0005,

0xf8f6,	// (0x0009f812) main_camera4_pane_g_ParamLimits

0xf8f6,	// (0x0009f812) main_camera4_pane_g

0x695a,	// (0x00096876) main_camera4_pane_t1_ParamLimits

0x695a,	// (0x00096876) main_camera4_pane_t1

0xdc4b,	// (0x0009db67) bg_tb_trans_pane_cp06

0xdc61,	// (0x0009db7d) cam4_indicators_pane_g1

0xdc71,	// (0x0009db8d) cam4_indicators_pane_g2

0x0002,

0xf911,	// (0x0009f82d) cam4_indicators_pane_g

0xdc89,	// (0x0009dba5) cam4_indicators_pane_t1

0x69be,	// (0x000968da) main_video4_pane_g1_ParamLimits

0x69be,	// (0x000968da) main_video4_pane_g1

0x69d1,	// (0x000968ed) main_video4_pane_g2_ParamLimits

0x69d1,	// (0x000968ed) main_video4_pane_g2

0x69e5,	// (0x00096901) main_video4_pane_g3_ParamLimits

0x69e5,	// (0x00096901) main_video4_pane_g3

0x69f9,	// (0x00096915) main_video4_pane_g4_ParamLimits

0x69f9,	// (0x00096915) main_video4_pane_g4

0x0004,

0xf918,	// (0x0009f834) main_video4_pane_g_ParamLimits

0xf918,	// (0x0009f834) main_video4_pane_g

0x6a21,	// (0x0009693d) vid4_indicators_pane_ParamLimits

0x6a21,	// (0x0009693d) vid4_indicators_pane

0x6a51,	// (0x0009696d) video4_image_uncrop_cif_pane_ParamLimits

0x6a51,	// (0x0009696d) video4_image_uncrop_cif_pane

0x6a6b,	// (0x00096987) video4_image_uncrop_nhd_pane_ParamLimits

0x6a6b,	// (0x00096987) video4_image_uncrop_nhd_pane

0x68a2,	// (0x000967be) video4_image_uncrop_vga_pane_ParamLimits

0x68a2,	// (0x000967be) video4_image_uncrop_vga_pane

0xdcaf,	// (0x0009dbcb) bg_tb_trans_pane_cp07

0x6a81,	// (0x0009699d) vid4_indicators_pane_g1

0x6a90,	// (0x000969ac) vid4_indicators_pane_g2

0x6a9f,	// (0x000969bb) vid4_indicators_pane_g3

0x0004,

0xf923,	// (0x0009f83f) vid4_indicators_pane_g

0x6ac4,	// (0x000969e0) vid4_indicators_pane_t1

0x6ad8,	// (0x000969f4) cam4_autofocus_pane_g1

0x6ae0,	// (0x000969fc) cam4_autofocus_pane_g2

0x6ae8,	// (0x00096a04) cam4_autofocus_pane_g3

0x0002,

0xf92e,	// (0x0009f84a) cam4_autofocus_pane_g

0x6af0,	// (0x00096a0c) cam4_autofocus_pane_g3_copy1

0x62fd,	// (0x00096219) video_down_pane_cp_t1

0x630b,	// (0x00096227) video_down_pane_cp_t2

0x0001,

0xf8aa,	// (0x0009f7c6) video_down_pane_cp_t

0x0c12,	// (0x00090b2e) popup_vitu2_window_ParamLimits

0x0c12,	// (0x00090b2e) popup_vitu2_window

0x6af8,	// (0x00096a14) aid_size_cell2_itu2_ParamLimits

0x6af8,	// (0x00096a14) aid_size_cell2_itu2

0x6b1e,	// (0x00096a3a) aid_size_cell_itu2_ParamLimits

0x6b1e,	// (0x00096a3a) aid_size_cell_itu2

0x6b7c,	// (0x00096a98) bg_popup_window_pane_cp09_ParamLimits

0x6b7c,	// (0x00096a98) bg_popup_window_pane_cp09

0x6b8a,	// (0x00096aa6) field_vitu2_entry_pane_ParamLimits

0x6b8a,	// (0x00096aa6) field_vitu2_entry_pane

0x6bb2,	// (0x00096ace) grid_vitu2_function_pane_ParamLimits

0x6bb2,	// (0x00096ace) grid_vitu2_function_pane

0x6c03,	// (0x00096b1f) grid_vitu2_itu_pane_ParamLimits

0x6c03,	// (0x00096b1f) grid_vitu2_itu_pane

0x6c8e,	// (0x00096baa) cell_vitu2_itu_pane_ParamLimits

0x6c8e,	// (0x00096baa) cell_vitu2_itu_pane

0x6cb4,	// (0x00096bd0) cell_vitu2_function_pane_ParamLimits

0x6cb4,	// (0x00096bd0) cell_vitu2_function_pane

0xb72f,	// (0x0009b64b) bg_popup_call_pane_cp08_ParamLimits

0xb72f,	// (0x0009b64b) bg_popup_call_pane_cp08

0xb748,	// (0x0009b664) field_vitu2_entry_pane_g1

0xb754,	// (0x0009b670) field_vitu2_entry_pane_g2

0x0002,

0xf935,	// (0x0009f851) field_vitu2_entry_pane_g

0x6cf8,	// (0x00096c14) field_vitu2_entry_pane_t1_ParamLimits

0x6cf8,	// (0x00096c14) field_vitu2_entry_pane_t1

0xb76e,	// (0x0009b68a) field_vitu2_entry_pane_t2_ParamLimits

0xb76e,	// (0x0009b68a) field_vitu2_entry_pane_t2

0x0001,

0xf93c,	// (0x0009f858) field_vitu2_entry_pane_t_ParamLimits

0xf93c,	// (0x0009f858) field_vitu2_entry_pane_t

0x6d26,	// (0x00096c42) bg_button_pane_cp010_ParamLimits

0x6d26,	// (0x00096c42) bg_button_pane_cp010

0x6d34,	// (0x00096c50) cell_vitu2_itu_pane_g1

0x6d52,	// (0x00096c6e) cell_vitu2_itu_pane_t1_ParamLimits

0x6d52,	// (0x00096c6e) cell_vitu2_itu_pane_t1

0x089e,	// (0x000907ba) cell_vitu2_itu_pane_t2_ParamLimits

0x089e,	// (0x000907ba) cell_vitu2_itu_pane_t2

0x0002,

0xf946,	// (0x0009f862) cell_vitu2_itu_pane_t_ParamLimits

0xf946,	// (0x0009f862) cell_vitu2_itu_pane_t

0xdcc7,	// (0x0009dbe3) bg_button_pane_cp011

0x6db8,	// (0x00096cd4) cell_vitu2_function_pane_g1

0x0992,	// (0x000908ae) main_myfav_hc_pane

0x66c9,	// (0x000965e5) popup_image3_note_pane_ParamLimits

0x66c9,	// (0x000965e5) popup_image3_note_pane

0x66e5,	// (0x00096601) popup_image3_tool_bar_pane_ParamLimits

0x66e5,	// (0x00096601) popup_image3_tool_bar_pane

0x0922,	// (0x0009083e) cell_vitu2_itu_pane_t3_ParamLimits

0x0922,	// (0x0009083e) cell_vitu2_itu_pane_t3

0x0992,	// (0x000908ae) bg_popup_trans_pane

0xb793,	// (0x0009b6af) grid_image3_tool_bar_pane

0xb79d,	// (0x0009b6b9) bg_popup_trans_pane_g1

0xd9ff,	// (0x0009d91b) bg_popup_trans_pane_g2

0xb7a5,	// (0x0009b6c1) bg_popup_trans_pane_g3

0xb7ad,	// (0x0009b6c9) bg_popup_trans_pane_g4

0xb7b5,	// (0x0009b6d1) bg_popup_trans_pane_g5

0xb7bd,	// (0x0009b6d9) bg_popup_trans_pane_g6

0xb7c5,	// (0x0009b6e1) bg_popup_trans_pane_g7

0xb7cd,	// (0x0009b6e9) bg_popup_trans_pane_g8

0xd9df,	// (0x0009d8fb) bg_popup_trans_pane_g9

0x0008,

0xf94d,	// (0x0009f869) bg_popup_trans_pane_g

0xb7d5,	// (0x0009b6f1) cell_image3_tool_bar_pane_ParamLimits

0xb7d5,	// (0x0009b6f1) cell_image3_tool_bar_pane

0xaaf9,	// (0x0009aa15) cell_image3_tool_bar_pane_g1

0x0992,	// (0x000908ae) bg_popup_trans_pane_cp1

0xb7eb,	// (0x0009b707) popup_image3_note_pane_t1

0xb7f9,	// (0x0009b715) popup_image3_note_pane_t2

0xb807,	// (0x0009b723) popup_image3_note_pane_t3

0x0002,

0xf960,	// (0x0009f87c) popup_image3_note_pane_t

0xb817,	// (0x0009b733) popup_image3_note_pane_t3_copy1

0x6dcc,	// (0x00096ce8) bg_myfav_hc_instruction_pane_ParamLimits

0x6dcc,	// (0x00096ce8) bg_myfav_hc_instruction_pane

0x6de4,	// (0x00096d00) cell_myfav_contact_pane_ParamLimits

0x6de4,	// (0x00096d00) cell_myfav_contact_pane

0x6e00,	// (0x00096d1c) cell_myfav_contact_pane_cp1_ParamLimits

0x6e00,	// (0x00096d1c) cell_myfav_contact_pane_cp1

0x6e18,	// (0x00096d34) cell_myfav_contact_pane_cp2_ParamLimits

0x6e18,	// (0x00096d34) cell_myfav_contact_pane_cp2

0x6e30,	// (0x00096d4c) cell_myfav_contact_pane_cp3_ParamLimits

0x6e30,	// (0x00096d4c) cell_myfav_contact_pane_cp3

0x6e47,	// (0x00096d63) cell_myfav_contact_pane_cp4_ParamLimits

0x6e47,	// (0x00096d63) cell_myfav_contact_pane_cp4

0x6e5f,	// (0x00096d7b) cell_myfav_contact_pane_cp5_ParamLimits

0x6e5f,	// (0x00096d7b) cell_myfav_contact_pane_cp5

0x6e73,	// (0x00096d8f) cell_myfav_contact_pane_cp6_ParamLimits

0x6e73,	// (0x00096d8f) cell_myfav_contact_pane_cp6

0x6e89,	// (0x00096da5) cell_myfav_contact_pane_cp7_ParamLimits

0x6e89,	// (0x00096da5) cell_myfav_contact_pane_cp7

0xb825,	// (0x0009b741) listscroll_gen_pane_cp05

0x6ea1,	// (0x00096dbd) main_myfav_hc_pane_g1_ParamLimits

0x6ea1,	// (0x00096dbd) main_myfav_hc_pane_g1

0x6ebb,	// (0x00096dd7) main_myfav_hc_pane_g2_ParamLimits

0x6ebb,	// (0x00096dd7) main_myfav_hc_pane_g2

0x0002,

0xf967,	// (0x0009f883) main_myfav_hc_pane_g_ParamLimits

0xf967,	// (0x0009f883) main_myfav_hc_pane_g

0x6eef,	// (0x00096e0b) main_myfav_hc_pane_t1_ParamLimits

0x6eef,	// (0x00096e0b) main_myfav_hc_pane_t1

0xb82e,	// (0x0009b74a) main_myfav_hc_pane_t2_ParamLimits

0xb82e,	// (0x0009b74a) main_myfav_hc_pane_t2

0xb840,	// (0x0009b75c) main_myfav_hc_pane_t3_ParamLimits

0xb840,	// (0x0009b75c) main_myfav_hc_pane_t3

0x6f06,	// (0x00096e22) main_myfav_hc_pane_t4_ParamLimits

0x6f06,	// (0x00096e22) main_myfav_hc_pane_t4

0x0004,

0xf96e,	// (0x0009f88a) main_myfav_hc_pane_t_ParamLimits

0xf96e,	// (0x0009f88a) main_myfav_hc_pane_t

0xaaf9,	// (0x0009aa15) bg_myfav_hc_instruction_pane_g1

0xb852,	// (0x0009b76e) cell_myfav_contact_pane_g1_ParamLimits

0xb852,	// (0x0009b76e) cell_myfav_contact_pane_g1

0xb852,	// (0x0009b76e) cell_myfav_contact_pane_g2_ParamLimits

0xb852,	// (0x0009b76e) cell_myfav_contact_pane_g2

0xb85e,	// (0x0009b77a) cell_myfav_contact_pane_g3_ParamLimits

0xb85e,	// (0x0009b77a) cell_myfav_contact_pane_g3

0xad9a,	// (0x0009acb6) cell_myfav_contact_pane_g4_ParamLimits

0xad9a,	// (0x0009acb6) cell_myfav_contact_pane_g4

0xb86b,	// (0x0009b787) cell_myfav_contact_pane_g5_ParamLimits

0xb86b,	// (0x0009b787) cell_myfav_contact_pane_g5

0x0004,

0xf979,	// (0x0009f895) cell_myfav_contact_pane_g_ParamLimits

0xf979,	// (0x0009f895) cell_myfav_contact_pane_g

0x6ed5,	// (0x00096df1) main_myfav_hc_pane_g3_ParamLimits

0x6ed5,	// (0x00096df1) main_myfav_hc_pane_g3

0x0b4b,	// (0x00090a67) popup_adpt_find_window

0x6f30,	// (0x00096e4c) afind_page_pane_ParamLimits

0x6f30,	// (0x00096e4c) afind_page_pane

0x6f45,	// (0x00096e61) aid_size_cell_afind_ParamLimits

0x6f45,	// (0x00096e61) aid_size_cell_afind

0x6f63,	// (0x00096e7f) bg_popup_sub_pane_cp09_ParamLimits

0x6f63,	// (0x00096e7f) bg_popup_sub_pane_cp09

0x6f70,	// (0x00096e8c) find_pane_cp01_ParamLimits

0x6f70,	// (0x00096e8c) find_pane_cp01

0xb877,	// (0x0009b793) grid_afind_control_pane_ParamLimits

0xb877,	// (0x0009b793) grid_afind_control_pane

0x6f7d,	// (0x00096e99) grid_afind_pane_ParamLimits

0x6f7d,	// (0x00096e99) grid_afind_pane

0x6f9f,	// (0x00096ebb) cell_afind_pane_ParamLimits

0x6f9f,	// (0x00096ebb) cell_afind_pane

0xaaf9,	// (0x0009aa15) afind_page_pane_g1

0x7002,	// (0x00096f1e) afind_page_pane_g2

0x700b,	// (0x00096f27) afind_page_pane_g3

0x0002,

0xf984,	// (0x0009f8a0) afind_page_pane_g

0x7014,	// (0x00096f30) afind_page_pane_t1

0xb88b,	// (0x0009b7a7) cell_afind_grid_control_pane_ParamLimits

0xb88b,	// (0x0009b7a7) cell_afind_grid_control_pane

0xb62c,	// (0x0009b548) bg_button_pane_cp69_ParamLimits

0xb62c,	// (0x0009b548) bg_button_pane_cp69

0x7034,	// (0x00096f50) cell_afind_pane_g1_ParamLimits

0x7034,	// (0x00096f50) cell_afind_pane_g1

0x7041,	// (0x00096f5d) cell_afind_pane_t1_ParamLimits

0x7041,	// (0x00096f5d) cell_afind_pane_t1

0xd7f4,	// (0x0009d710) bg_button_pane_cp72

0xb89a,	// (0x0009b7b6) cell_afind_grid_control_pane_g1

0x384e,	// (0x0009376a) aid_image_placing_area_ParamLimits

0x384e,	// (0x0009376a) aid_image_placing_area

0xb0b7,	// (0x0009afd3) field_vitu_entry_pane_g1_ParamLimits

0xb0b7,	// (0x0009afd3) field_vitu_entry_pane_g1

0xb0c3,	// (0x0009afdf) field_vitu_entry_pane_g2_ParamLimits

0xb0c3,	// (0x0009afdf) field_vitu_entry_pane_g2

0x0001,

0xf835,	// (0x0009f751) field_vitu_entry_pane_g_ParamLimits

0xf835,	// (0x0009f751) field_vitu_entry_pane_g

0x6111,	// (0x0009602d) cell_vitu_itu_pane_g1_ParamLimits

0x6153,	// (0x0009606f) cell_vitu_itu_pane_t3_ParamLimits

0x6153,	// (0x0009606f) cell_vitu_itu_pane_t3

0xb5d2,	// (0x0009b4ee) mp4_progress_pane_t1_ParamLimits

0xb5eb,	// (0x0009b507) mp4_progress_pane_t2_ParamLimits

0xf8ca,	// (0x0009f7e6) mp4_progress_pane_t_ParamLimits

0xb604,	// (0x0009b520) mup_progress_pane_cp04_ParamLimits

0x6f1a,	// (0x00096e36) main_myfav_hc_pane_t5_ParamLimits

0x6f1a,	// (0x00096e36) main_myfav_hc_pane_t5

0x09e8,	// (0x00090904) aid_zoom_text_primary

0x0b4b,	// (0x00090a67) popup_adpt_find_window_ParamLimits

0x0c12,	// (0x00090b2e) main_cam_set_pane

0x68d4,	// (0x000967f0) cam4_zoom_pane_ParamLimits

0x68d4,	// (0x000967f0) cam4_zoom_pane

0x7053,	// (0x00096f6f) main_cam_set_pane_g1_ParamLimits

0x7053,	// (0x00096f6f) main_cam_set_pane_g1

0x7061,	// (0x00096f7d) main_cam_set_pane_g2_ParamLimits

0x7061,	// (0x00096f7d) main_cam_set_pane_g2

0x0001,

0xf98b,	// (0x0009f8a7) main_cam_set_pane_g_ParamLimits

0xf98b,	// (0x0009f8a7) main_cam_set_pane_g

0x7084,	// (0x00096fa0) main_cam_set_pane_t1_ParamLimits

0x7084,	// (0x00096fa0) main_cam_set_pane_t1

0x709f,	// (0x00096fbb) main_cset_listscroll_pane_ParamLimits

0x709f,	// (0x00096fbb) main_cset_listscroll_pane

0x70c3,	// (0x00096fdf) main_cset_slider_pane_ParamLimits

0x70c3,	// (0x00096fdf) main_cset_slider_pane

0xb8ab,	// (0x0009b7c7) main_cset_list_pane_ParamLimits

0xb8ab,	// (0x0009b7c7) main_cset_list_pane

0xb8bb,	// (0x0009b7d7) scroll_pane_cp028

0x70ed,	// (0x00097009) aid_area_touch_slider

0x7109,	// (0x00097025) cset_slider_pane

0x7133,	// (0x0009704f) main_cset_slider_pane_g1

0x7148,	// (0x00097064) main_cset_slider_pane_g2

0x0011,

0xf990,	// (0x0009f8ac) main_cset_slider_pane_g

0xb8f4,	// (0x0009b810) main_cset_slider_pane_t1

0x720a,	// (0x00097126) main_cset_slider_pane_t2

0x7224,	// (0x00097140) main_cset_slider_pane_t3

0x723e,	// (0x0009715a) main_cset_slider_pane_t4

0x7258,	// (0x00097174) main_cset_slider_pane_t5

0x7276,	// (0x00097192) main_cset_slider_pane_t6

0x728d,	// (0x000971a9) main_cset_slider_pane_t7

0x000e,

0xf9b5,	// (0x0009f8d1) main_cset_slider_pane_t

0x7399,	// (0x000972b5) cset_list_set_pane_ParamLimits

0x7399,	// (0x000972b5) cset_list_set_pane

0x73ad,	// (0x000972c9) aid_position_infowindow_above

0x73b5,	// (0x000972d1) aid_position_infowindow_below

0x73bd,	// (0x000972d9) cset_list_set_pane_g1_ParamLimits

0x73bd,	// (0x000972d9) cset_list_set_pane_g1

0x73c9,	// (0x000972e5) cset_list_set_pane_g3_ParamLimits

0x73c9,	// (0x000972e5) cset_list_set_pane_g3

0x0001,

0xf9d4,	// (0x0009f8f0) cset_list_set_pane_g_ParamLimits

0xf9d4,	// (0x0009f8f0) cset_list_set_pane_g

0x73d8,	// (0x000972f4) cset_list_set_pane_t1_ParamLimits

0x73d8,	// (0x000972f4) cset_list_set_pane_t1

0x0c12,	// (0x00090b2e) list_highlight_pane_cp021_ParamLimits

0x0c12,	// (0x00090b2e) list_highlight_pane_cp021

0xe2eb,	// (0x0009e207) cset_slider_pane_g1

0xe2fd,	// (0x0009e219) cset_slider_pane_g2

0xe2f4,	// (0x0009e210) cset_slider_pane_g3

0x0002,

0x0317,	// (0x00090233) cset_slider_pane_g

0xdcd5,	// (0x0009dbf1) aid_area_touch_cam4_zoom

0xdcdd,	// (0x0009dbf9) cam4_zoom_cont_pane

0xdce5,	// (0x0009dc01) cam4_zoom_pane_g1

0xdced,	// (0x0009dc09) cam4_zoom_pane_g2

0x73ea,	// (0x00097306) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0009f8f5) cam4_zoom_pane_g

0xdcf5,	// (0x0009dc11) cam4_zoom_cont_pane_g1

0xdcfe,	// (0x0009dc1a) cam4_zoom_cont_pane_g2

0xdd07,	// (0x0009dc23) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0009f8fc) cam4_zoom_cont_pane_g

0x6751,	// (0x0009666d) call4_image_pane_ParamLimits

0x6751,	// (0x0009666d) call4_image_pane

0xb66c,	// (0x0009b588) call4_windows_conf_pane_ParamLimits

0xb687,	// (0x0009b5a3) popup_call4_audio_in_window_ParamLimits

0xb687,	// (0x0009b5a3) popup_call4_audio_in_window

0x0992,	// (0x000908ae) bg_popup_call2_act_pane_cp02

0xb6e9,	// (0x0009b605) call4_list_conf_pane

0xaaf9,	// (0x0009aa15) call4_image_pane_g1

0xaaf9,	// (0x0009aa15) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0009f617) call4_image_pane_g

0xb994,	// (0x0009b8b0) list_single_graphic_popup_conf4_pane_ParamLimits

0xb994,	// (0x0009b8b0) list_single_graphic_popup_conf4_pane

0x0992,	// (0x000908ae) list_highlight_pane_cp022

0xb9a9,	// (0x0009b8c5) list_single_graphic_popup_conf4_pane_g1

0xdfd7,	// (0x0009def3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0009f903) list_single_graphic_popup_conf4_pane_g

0xb9b1,	// (0x0009b8cd) list_single_graphic_popup_conf4_pane_t1

0x1c98,	// (0x00091bb4) popup_vtel_slider_window_ParamLimits

0x1c98,	// (0x00091bb4) popup_vtel_slider_window

0xb61a,	// (0x0009b536) dialer2_ne_pane_t2_ParamLimits

0xb61a,	// (0x0009b536) dialer2_ne_pane_t2

0x0001,

0xf8cf,	// (0x0009f7eb) dialer2_ne_pane_t_ParamLimits

0xf8cf,	// (0x0009f7eb) dialer2_ne_pane_t

0xa8d8,	// (0x0009a7f4) bg_popup_sub_pane_cp010_ParamLimits

0xa8d8,	// (0x0009a7f4) bg_popup_sub_pane_cp010

0x73f2,	// (0x0009730e) popup_vtel_slider_window_g1_ParamLimits

0x73f2,	// (0x0009730e) popup_vtel_slider_window_g1

0x7405,	// (0x00097321) popup_vtel_slider_window_g2_ParamLimits

0x7405,	// (0x00097321) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0009f908) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0009f908) popup_vtel_slider_window_g

0x745b,	// (0x00097377) vtel_slider_pane_ParamLimits

0x745b,	// (0x00097377) vtel_slider_pane

0x747d,	// (0x00097399) vtel_slider_pane_g1_ParamLimits

0x747d,	// (0x00097399) vtel_slider_pane_g1

0x7491,	// (0x000973ad) vtel_slider_pane_g2_ParamLimits

0x7491,	// (0x000973ad) vtel_slider_pane_g2

0x74a9,	// (0x000973c5) vtel_slider_pane_g3_ParamLimits

0x74a9,	// (0x000973c5) vtel_slider_pane_g3

0x747d,	// (0x00097399) vtel_slider_pane_g4_ParamLimits

0x747d,	// (0x00097399) vtel_slider_pane_g4

0x74bf,	// (0x000973db) vtel_slider_pane_g5_ParamLimits

0x74bf,	// (0x000973db) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0009f911) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0009f911) vtel_slider_pane_g

0x0992,	// (0x000908ae) main_gallery2_pane

0x6b4a,	// (0x00096a66) aid_size_row_itut2_dropdow_list_ParamLimits

0x6b4a,	// (0x00096a66) aid_size_row_itut2_dropdow_list

0x6bda,	// (0x00096af6) grid_vitu2_function_top_pane_ParamLimits

0x6bda,	// (0x00096af6) grid_vitu2_function_top_pane

0x6c39,	// (0x00096b55) popup_vitu2_dropdown_list_window_ParamLimits

0x6c39,	// (0x00096b55) popup_vitu2_dropdown_list_window

0x6c62,	// (0x00096b7e) popup_vitu2_match_list_window

0x74d5,	// (0x000973f1) cell_vitu2_function_top_pane_ParamLimits

0x74d5,	// (0x000973f1) cell_vitu2_function_top_pane

0x74f5,	// (0x00097411) cell_vitu2_function_top_pane_cp01_ParamLimits

0x74f5,	// (0x00097411) cell_vitu2_function_top_pane_cp01

0x7513,	// (0x0009742f) cell_vitu2_function_top_wide_pane_ParamLimits

0x7513,	// (0x0009742f) cell_vitu2_function_top_wide_pane

0xdcc7,	// (0x0009dbe3) bg_button_pane_cp012

0x7531,	// (0x0009744d) cell_vitu2_function_top_pane_g1

0xdd10,	// (0x0009dc2c) bg_button_pane_cp013_ParamLimits

0xdd10,	// (0x0009dc2c) bg_button_pane_cp013

0x7545,	// (0x00097461) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7545,	// (0x00097461) cell_vitu2_function_top_wide_pane_g1

0xdcc7,	// (0x0009dbe3) bg_popup_sub_pane_cp20

0x755d,	// (0x00097479) list_vitu2_match_list_pane

0xb79d,	// (0x0009b6b9) bg_popup_sub_pane_cp20_g1

0xb7a5,	// (0x0009b6c1) bg_popup_sub_pane_cp20_g2

0xd9ff,	// (0x0009d91b) bg_popup_sub_pane_cp20_g3

0xb7ad,	// (0x0009b6c9) bg_popup_sub_pane_cp20_g4

0xd9df,	// (0x0009d8fb) bg_popup_sub_pane_cp20_g5

0xb9d5,	// (0x0009b8f1) bg_popup_sub_pane_cp20_g6

0xb7bd,	// (0x0009b6d9) bg_popup_sub_pane_cp20_g7

0xb7c5,	// (0x0009b6e1) bg_popup_sub_pane_cp20_g8

0xb7cd,	// (0x0009b6e9) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0009f91c) bg_popup_sub_pane_cp20_g

0xdd2c,	// (0x0009dc48) list_vitu2_match_list_item_pane_ParamLimits

0xdd2c,	// (0x0009dc48) list_vitu2_match_list_item_pane

0xdd3e,	// (0x0009dc5a) list_vitu2_match_list_item_pane_t1

0xa45e,	// (0x0009a37a) bg_popup_sub_pane_cp21

0xdd4c,	// (0x0009dc68) grid_vitu2_dropdown_list_pane

0x75ad,	// (0x000974c9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x75ad,	// (0x000974c9) cell_vitu2_dropdown_list_char_pane

0x75d0,	// (0x000974ec) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x75d0,	// (0x000974ec) cell_vitu2_dropdown_list_ctrl_pane

0xb9f5,	// (0x0009b911) cell_vitu2_dropdown_list_char_pane_g1

0xb9fe,	// (0x0009b91a) cell_vitu2_dropdown_list_char_pane_g2

0xba07,	// (0x0009b923) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0009f939) cell_vitu2_dropdown_list_char_pane_g

0x75fe,	// (0x0009751a) cell_vitu2_dropdown_list_char_pane_t1

0x760c,	// (0x00097528) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x760c,	// (0x00097528) cell_vitu2_dropdown_list_ctrl_pane_g1

0x761c,	// (0x00097538) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x761c,	// (0x00097538) cell_vitu2_dropdown_list_ctrl_pane_g2

0x762d,	// (0x00097549) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x762d,	// (0x00097549) cell_vitu2_dropdown_list_ctrl_pane_g3

0x763d,	// (0x00097559) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x763d,	// (0x00097559) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdc4b,	// (0x0009db67) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdc4b,	// (0x0009db67) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0009f940) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0009f940) cell_vitu2_dropdown_list_ctrl_pane_g

0x7659,	// (0x00097575) aid_size_cell_gallery2_ParamLimits

0x7659,	// (0x00097575) aid_size_cell_gallery2

0x766f,	// (0x0009758b) grid_gallery2_pane_ParamLimits

0x766f,	// (0x0009758b) grid_gallery2_pane

0x7683,	// (0x0009759f) scroll_pane_cp029_ParamLimits

0x7683,	// (0x0009759f) scroll_pane_cp029

0x768f,	// (0x000975ab) cell_gallery2_pane_ParamLimits

0x768f,	// (0x000975ab) cell_gallery2_pane

0xba10,	// (0x0009b92c) cell_gallery2_pane_g2

0x76c9,	// (0x000975e5) cell_gallery2_pane_g3

0xba1a,	// (0x0009b936) cell_gallery2_pane_g4

0xba22,	// (0x0009b93e) cell_gallery2_pane_g5

0xe1a5,	// (0x0009e0c1) grid_highlight_pane_cp10

0x6c62,	// (0x00096b7e) popup_vitu2_match_list_window_ParamLimits

0x6c79,	// (0x00096b95) popup_vitu2_query_window_ParamLimits

0x6c79,	// (0x00096b95) popup_vitu2_query_window

0xa45e,	// (0x0009a37a) bg_vitu2_candi_button_pane

0xb9f5,	// (0x0009b911) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb9fe,	// (0x0009b91a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xba07,	// (0x0009b923) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x76d1,	// (0x000975ed) bg_button_pane_cp015

0x76e5,	// (0x00097601) bg_button_pane_cp016

0x76f8,	// (0x00097614) bg_button_pane_cp017

0x4291,	// (0x000941ad) bg_popup_sub_pane_cp22

0xba2a,	// (0x0009b946) popup_vitu2_query_window_g1

0x773d,	// (0x00097659) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0009f94b) popup_vitu2_query_window_g

0x775c,	// (0x00097678) popup_vitu2_query_window_t1_ParamLimits

0x775c,	// (0x00097678) popup_vitu2_query_window_t1

0x7791,	// (0x000976ad) popup_vitu2_query_window_t2_ParamLimits

0x7791,	// (0x000976ad) popup_vitu2_query_window_t2

0x77a3,	// (0x000976bf) popup_vitu2_query_window_t3_ParamLimits

0x77a3,	// (0x000976bf) popup_vitu2_query_window_t3

0x77cb,	// (0x000976e7) popup_vitu2_query_window_t4_ParamLimits

0x77cb,	// (0x000976e7) popup_vitu2_query_window_t4

0x77ec,	// (0x00097708) popup_vitu2_query_window_t5_ParamLimits

0x77ec,	// (0x00097708) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0009f952) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0009f952) popup_vitu2_query_window_t

0xb8a3,	// (0x0009b7bf) main_cset_text_pane

0x70ed,	// (0x00097009) aid_area_touch_slider_ParamLimits

0x7109,	// (0x00097025) cset_slider_pane_ParamLimits

0x7133,	// (0x0009704f) main_cset_slider_pane_g1_ParamLimits

0x7148,	// (0x00097064) main_cset_slider_pane_g2_ParamLimits

0xb8c4,	// (0x0009b7e0) main_cset_slider_pane_g3_ParamLimits

0xb8c4,	// (0x0009b7e0) main_cset_slider_pane_g3

0x715d,	// (0x00097079) main_cset_slider_pane_g4_ParamLimits

0x715d,	// (0x00097079) main_cset_slider_pane_g4

0x716c,	// (0x00097088) main_cset_slider_pane_g5_ParamLimits

0x716c,	// (0x00097088) main_cset_slider_pane_g5

0x717a,	// (0x00097096) main_cset_slider_pane_g6_ParamLimits

0x717a,	// (0x00097096) main_cset_slider_pane_g6

0xf990,	// (0x0009f8ac) main_cset_slider_pane_g_ParamLimits

0xb8f4,	// (0x0009b810) main_cset_slider_pane_t1_ParamLimits

0x720a,	// (0x00097126) main_cset_slider_pane_t2_ParamLimits

0x7224,	// (0x00097140) main_cset_slider_pane_t3_ParamLimits

0x723e,	// (0x0009715a) main_cset_slider_pane_t4_ParamLimits

0x7258,	// (0x00097174) main_cset_slider_pane_t5_ParamLimits

0x7276,	// (0x00097192) main_cset_slider_pane_t6_ParamLimits

0x728d,	// (0x000971a9) main_cset_slider_pane_t7_ParamLimits

0x72bb,	// (0x000971d7) main_cset_slider_pane_t8_ParamLimits

0x72bb,	// (0x000971d7) main_cset_slider_pane_t8

0x72e3,	// (0x000971ff) main_cset_slider_pane_t9_ParamLimits

0x72e3,	// (0x000971ff) main_cset_slider_pane_t9

0x730b,	// (0x00097227) main_cset_slider_pane_t10_ParamLimits

0x730b,	// (0x00097227) main_cset_slider_pane_t10

0x7333,	// (0x0009724f) main_cset_slider_pane_t11_ParamLimits

0x7333,	// (0x0009724f) main_cset_slider_pane_t11

0x735d,	// (0x00097279) main_cset_slider_pane_t12_ParamLimits

0x735d,	// (0x00097279) main_cset_slider_pane_t12

0x737a,	// (0x00097296) main_cset_slider_pane_t13_ParamLimits

0x737a,	// (0x00097296) main_cset_slider_pane_t13

0xf9b5,	// (0x0009f8d1) main_cset_slider_pane_t_ParamLimits

0x0992,	// (0x000908ae) bg_popup_sub_pane_cp011

0xba36,	// (0x0009b952) main_cset_text_pane_g1

0xba3e,	// (0x0009b95a) main_cset_text_pane_t1

0xba4c,	// (0x0009b968) main_cset_text_pane_t2

0xba5a,	// (0x0009b976) main_cset_text_pane_t3

0xba68,	// (0x0009b984) main_cset_text_pane_t4

0xba76,	// (0x0009b992) main_cset_text_pane_t5

0xba84,	// (0x0009b9a0) main_cset_text_pane_t6

0xba92,	// (0x0009b9ae) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0009f961) main_cset_text_pane_t

0x0992,	// (0x000908ae) main_cam4_burst_pane

0x0992,	// (0x000908ae) main_cam5_pane

0x7022,	// (0x00096f3e) bg_button_pane_cp019

0x702b,	// (0x00096f47) bg_button_pane_cp020

0xb8d0,	// (0x0009b7ec) main_cset_slider_pane_g7_ParamLimits

0xb8d0,	// (0x0009b7ec) main_cset_slider_pane_g7

0xb8dc,	// (0x0009b7f8) main_cset_slider_pane_g8_ParamLimits

0xb8dc,	// (0x0009b7f8) main_cset_slider_pane_g8

0x718e,	// (0x000970aa) main_cset_slider_pane_g9_ParamLimits

0x718e,	// (0x000970aa) main_cset_slider_pane_g9

0x719a,	// (0x000970b6) main_cset_slider_pane_g10_ParamLimits

0x719a,	// (0x000970b6) main_cset_slider_pane_g10

0x71a6,	// (0x000970c2) main_cset_slider_pane_g11_ParamLimits

0x71a6,	// (0x000970c2) main_cset_slider_pane_g11

0x71b2,	// (0x000970ce) main_cset_slider_pane_g12_ParamLimits

0x71b2,	// (0x000970ce) main_cset_slider_pane_g12

0x71be,	// (0x000970da) main_cset_slider_pane_g13_ParamLimits

0x71be,	// (0x000970da) main_cset_slider_pane_g13

0x71ca,	// (0x000970e6) main_cset_slider_pane_g14_ParamLimits

0x71ca,	// (0x000970e6) main_cset_slider_pane_g14

0x71d6,	// (0x000970f2) main_cset_slider_pane_g15_ParamLimits

0x71d6,	// (0x000970f2) main_cset_slider_pane_g15

0xb922,	// (0x0009b83e) main_cset_slider_pane_t14_ParamLimits

0xb922,	// (0x0009b83e) main_cset_slider_pane_t14

0xb95b,	// (0x0009b877) main_cset_slider_pane_t15_ParamLimits

0xb95b,	// (0x0009b877) main_cset_slider_pane_t15

0x7863,	// (0x0009777f) aid_cam4_burst_size_cell_ParamLimits

0x7863,	// (0x0009777f) aid_cam4_burst_size_cell

0x7883,	// (0x0009779f) grid_cam4_burst_pane_ParamLimits

0x7883,	// (0x0009779f) grid_cam4_burst_pane

0x78bd,	// (0x000977d9) linegrid_cam4_burst_pane_ParamLimits

0x78bd,	// (0x000977d9) linegrid_cam4_burst_pane

0xbaa0,	// (0x0009b9bc) scroll_pane_cp30_ParamLimits

0xbaa0,	// (0x0009b9bc) scroll_pane_cp30

0x78df,	// (0x000977fb) cell_cam4_burst_pane_ParamLimits

0x78df,	// (0x000977fb) cell_cam4_burst_pane

0xbaac,	// (0x0009b9c8) linegrid_cam4_burst_pane_g1_ParamLimits

0xbaac,	// (0x0009b9c8) linegrid_cam4_burst_pane_g1

0x7934,	// (0x00097850) linegrid_cam4_burst_pane_g2_ParamLimits

0x7934,	// (0x00097850) linegrid_cam4_burst_pane_g2

0xbab9,	// (0x0009b9d5) linegrid_cam4_burst_pane_g3_ParamLimits

0xbab9,	// (0x0009b9d5) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0009f970) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0009f970) linegrid_cam4_burst_pane_g

0x7945,	// (0x00097861) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7945,	// (0x00097861) linegrid_cam4_burst_pane_g3_copy1

0xbac6,	// (0x0009b9e2) linegrid_cam4_burst_pane_g4_ParamLimits

0xbac6,	// (0x0009b9e2) linegrid_cam4_burst_pane_g4

0x7963,	// (0x0009787f) linegrid_cam4_burst_pane_g5_ParamLimits

0x7963,	// (0x0009787f) linegrid_cam4_burst_pane_g5

0x7974,	// (0x00097890) linegrid_cam4_burst_pane_g6_ParamLimits

0x7974,	// (0x00097890) linegrid_cam4_burst_pane_g6

0xbad3,	// (0x0009b9ef) linegrid_cam4_burst_pane_g7_ParamLimits

0xbad3,	// (0x0009b9ef) linegrid_cam4_burst_pane_g7

0x798b,	// (0x000978a7) cell_cam4_burst_pane_g1

0xbaec,	// (0x0009ba08) main_cam5_pane_t1_ParamLimits

0xbaec,	// (0x0009ba08) main_cam5_pane_t1

0xbafe,	// (0x0009ba1a) main_cam5_pane_t2_ParamLimits

0xbafe,	// (0x0009ba1a) main_cam5_pane_t2

0xbb10,	// (0x0009ba2c) main_cam5_pane_t3_ParamLimits

0xbb10,	// (0x0009ba2c) main_cam5_pane_t3

0xbb22,	// (0x0009ba3e) main_cam5_pane_t4_ParamLimits

0xbb22,	// (0x0009ba3e) main_cam5_pane_t4

0xbb3a,	// (0x0009ba56) main_cam5_pane_t5_ParamLimits

0xbb3a,	// (0x0009ba56) main_cam5_pane_t5

0xbb4e,	// (0x0009ba6a) main_cam5_pane_t6_ParamLimits

0xbb4e,	// (0x0009ba6a) main_cam5_pane_t6

0xbb62,	// (0x0009ba7e) main_cam5_pane_t7_ParamLimits

0xbb62,	// (0x0009ba7e) main_cam5_pane_t7

0xbb74,	// (0x0009ba90) main_cam5_pane_t8_ParamLimits

0xbb74,	// (0x0009ba90) main_cam5_pane_t8

0xbb92,	// (0x0009baae) main_cam5_pane_t9_ParamLimits

0xbb92,	// (0x0009baae) main_cam5_pane_t9

0xbba4,	// (0x0009bac0) main_cam5_pane_t10_ParamLimits

0xbba4,	// (0x0009bac0) main_cam5_pane_t10

0xbbb6,	// (0x0009bad2) main_cam5_pane_t11_ParamLimits

0xbbb6,	// (0x0009bad2) main_cam5_pane_t11

0xbbca,	// (0x0009bae6) main_cam5_pane_t12_ParamLimits

0xbbca,	// (0x0009bae6) main_cam5_pane_t12

0xbbe1,	// (0x0009bafd) main_cam5_pane_t13_ParamLimits

0xbbe1,	// (0x0009bafd) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0009f97c) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0009f97c) main_cam5_pane_t

0x0bd8,	// (0x00090af4) popup_scut_keymap_window_ParamLimits

0x0bd8,	// (0x00090af4) popup_scut_keymap_window

0x799e,	// (0x000978ba) aid_size_cell_brow_shortcut

0xe1a5,	// (0x0009e0c1) bg_popup_window_pane_cp010

0x79aa,	// (0x000978c6) grid_scut_pane

0x79b6,	// (0x000978d2) cell_scut_pane_ParamLimits

0x79b6,	// (0x000978d2) cell_scut_pane

0x79cf,	// (0x000978eb) cell_scut_pane_g1

0xbc04,	// (0x0009bb20) cell_scut_pane_t1

0xbc13,	// (0x0009bb2f) cell_scut_pane_t2

0x79d8,	// (0x000978f4) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0009f997) cell_scut_pane_t

0x5615,	// (0x00095531) main_mup3_pane_g8_ParamLimits

0x5615,	// (0x00095531) main_mup3_pane_g8

0x6b64,	// (0x00096a80) area_vitu2_query_pane_ParamLimits

0x6b64,	// (0x00096a80) area_vitu2_query_pane

0x770b,	// (0x00097627) input_focus_pane_cp08

0xbc22,	// (0x0009bb3e) area_vitu2_query_pane_g1

0x79e6,	// (0x00097902) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0009f99e) area_vitu2_query_pane_g

0x79f9,	// (0x00097915) area_vitu2_query_pane_t1_ParamLimits

0x79f9,	// (0x00097915) area_vitu2_query_pane_t1

0x7a0d,	// (0x00097929) area_vitu2_query_pane_t2_ParamLimits

0x7a0d,	// (0x00097929) area_vitu2_query_pane_t2

0x7a21,	// (0x0009793d) area_vitu2_query_pane_t3_ParamLimits

0x7a21,	// (0x0009793d) area_vitu2_query_pane_t3

0xbc2e,	// (0x0009bb4a) area_vitu2_query_pane_t4_ParamLimits

0xbc2e,	// (0x0009bb4a) area_vitu2_query_pane_t4

0xbc56,	// (0x0009bb72) area_vitu2_query_pane_t5_ParamLimits

0xbc56,	// (0x0009bb72) area_vitu2_query_pane_t5

0xbc7e,	// (0x0009bb9a) area_vitu2_query_pane_t6_ParamLimits

0xbc7e,	// (0x0009bb9a) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0009f9a3) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0009f9a3) area_vitu2_query_pane_t

0x7a49,	// (0x00097965) bg_button_pane_cp018

0x7a57,	// (0x00097973) bg_button_pane_cp021

0x7a63,	// (0x0009797f) bg_button_pane_cp022

0x7a74,	// (0x00097990) input_focus_pane_cp09

0x2d5a,	// (0x00092c76) aid_size_touch_mv_arrow_left

0x2d83,	// (0x00092c9f) aid_size_touch_mv_arrow_right

0x71ee,	// (0x0009710a) main_cset_slider_pane_g16_ParamLimits

0x71ee,	// (0x0009710a) main_cset_slider_pane_g16

0x71fc,	// (0x00097118) main_cset_slider_pane_g17_ParamLimits

0x71fc,	// (0x00097118) main_cset_slider_pane_g17

0x798b,	// (0x000978a7) cell_cam4_burst_pane_g1_ParamLimits

0x0992,	// (0x000908ae) compa_mode_pane

0x7415,	// (0x00097331) popup_vtel_slider_window_g3_ParamLimits

0x7415,	// (0x00097331) popup_vtel_slider_window_g3

0x742c,	// (0x00097348) popup_vtel_slider_window_g4_ParamLimits

0x742c,	// (0x00097348) popup_vtel_slider_window_g4

0x7443,	// (0x0009735f) popup_vtel_slider_window_t1_ParamLimits

0x7443,	// (0x0009735f) popup_vtel_slider_window_t1

0x0992,	// (0x000908ae) main_cl_pane

0x43f0,	// (0x0009430c) popup_imed_adjust2_window_ParamLimits

0x4291,	// (0x000941ad) bg_tb_trans_pane_cp05_ParamLimits

0xafec,	// (0x0009af08) popup_imed_adjust2_window_g1_ParamLimits

0xaffb,	// (0x0009af17) popup_imed_adjust2_window_g2_ParamLimits

0xaffb,	// (0x0009af17) popup_imed_adjust2_window_g2

0xb007,	// (0x0009af23) popup_imed_adjust2_window_g3_ParamLimits

0xb007,	// (0x0009af23) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0009f715) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0009f715) popup_imed_adjust2_window_g

0xb013,	// (0x0009af2f) popup_imed_adjust2_window_t1_ParamLimits

0xb02b,	// (0x0009af47) slider_imed_adjust_pane_ParamLimits

0xb03f,	// (0x0009af5b) slider_imed_adjust_pane_g1_ParamLimits

0xb04f,	// (0x0009af6b) slider_imed_adjust_pane_g2_ParamLimits

0xb05f,	// (0x0009af7b) slider_imed_adjust_pane_g3_ParamLimits

0xb070,	// (0x0009af8c) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x0009f71c) slider_imed_adjust_pane_g_ParamLimits

0x6874,	// (0x00096790) aid_touch_area_cam4_ParamLimits

0x6874,	// (0x00096790) aid_touch_area_cam4

0xdc2d,	// (0x0009db49) battery_pane_cp01

0x6947,	// (0x00096863) main_camera4_pane_g6_ParamLimits

0x6947,	// (0x00096863) main_camera4_pane_g6

0x6971,	// (0x0009688d) main_camera4_pane_t2_ParamLimits

0x6971,	// (0x0009688d) main_camera4_pane_t2

0x0001,

0xf903,	// (0x0009f81f) main_camera4_pane_t_ParamLimits

0xf903,	// (0x0009f81f) main_camera4_pane_t

0x69a6,	// (0x000968c2) aid_touch_area_vid4_ParamLimits

0x69a6,	// (0x000968c2) aid_touch_area_vid4

0x6a0d,	// (0x00096929) main_video4_pane_g5_ParamLimits

0x6a0d,	// (0x00096929) main_video4_pane_g5

0x6a38,	// (0x00096954) vid4_progress_pane_ParamLimits

0x6a38,	// (0x00096954) vid4_progress_pane

0xb8e8,	// (0x0009b804) main_cset_slider_pane_g18_ParamLimits

0xb8e8,	// (0x0009b804) main_cset_slider_pane_g18

0xbae0,	// (0x0009b9fc) cell_cam4_burst_pane_g2_ParamLimits

0xbae0,	// (0x0009b9fc) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0009f977) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0009f977) cell_cam4_burst_pane_g

0xa482,	// (0x0009a39e) bg_cl_pane_ParamLimits

0xa482,	// (0x0009a39e) bg_cl_pane

0x7a85,	// (0x000979a1) cl_header_pane_ParamLimits

0x7a85,	// (0x000979a1) cl_header_pane

0x7a99,	// (0x000979b5) cl_listscroll_pane_ParamLimits

0x7a99,	// (0x000979b5) cl_listscroll_pane

0xbcca,	// (0x0009bbe6) bg_cl_pane_g1

0xbcd2,	// (0x0009bbee) bg_cl_pane_g2

0xbcda,	// (0x0009bbf6) bg_cl_pane_g3

0xbce2,	// (0x0009bbfe) bg_cl_pane_g4

0xbcea,	// (0x0009bc06) bg_cl_pane_g5

0xbcf2,	// (0x0009bc0e) bg_cl_pane_g6

0xbcfa,	// (0x0009bc16) bg_cl_pane_g7

0xbd02,	// (0x0009bc1e) bg_cl_pane_g8

0xbd0a,	// (0x0009bc26) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0009f9b2) bg_cl_pane_g

0x7aa9,	// (0x000979c5) aid_height_cl_leading_ParamLimits

0x7aa9,	// (0x000979c5) aid_height_cl_leading

0x7ab5,	// (0x000979d1) aid_height_cl_text_ParamLimits

0x7ab5,	// (0x000979d1) aid_height_cl_text

0x0c12,	// (0x00090b2e) bg_cl_header_pane_ParamLimits

0x0c12,	// (0x00090b2e) bg_cl_header_pane

0x7ad4,	// (0x000979f0) cl_header_pane_g1_ParamLimits

0x7ad4,	// (0x000979f0) cl_header_pane_g1

0x7aea,	// (0x00097a06) cl_header_pane_t1_ParamLimits

0x7aea,	// (0x00097a06) cl_header_pane_t1

0xbd12,	// (0x0009bc2e) cl_list_pane

0xb8bb,	// (0x0009b7d7) hc_scroll_pane_cp01

0xd9df,	// (0x0009d8fb) bg_cl_header_pane_g1

0xb79d,	// (0x0009b6b9) bg_cl_header_pane_g2

0xd9ff,	// (0x0009d91b) bg_cl_header_pane_g3

0xb7ad,	// (0x0009b6c9) bg_cl_header_pane_g4

0xb7a5,	// (0x0009b6c1) bg_cl_header_pane_g5

0xb9d5,	// (0x0009b8f1) bg_cl_header_pane_g6

0xb7c5,	// (0x0009b6e1) bg_cl_header_pane_g7

0xb7cd,	// (0x0009b6e9) bg_cl_header_pane_g8

0xb7bd,	// (0x0009b6d9) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0009f9c5) bg_cl_header_pane_g

0x7b03,	// (0x00097a1f) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7b03,	// (0x00097a1f) hc_cl_list_double_graphic_heading_pane

0x7b16,	// (0x00097a32) hc_cl_list_single_graphic_pane_ParamLimits

0x7b16,	// (0x00097a32) hc_cl_list_single_graphic_pane

0x7b2e,	// (0x00097a4a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7b2e,	// (0x00097a4a) hc_cl_list_single_graphic_pane_g1

0x7b3a,	// (0x00097a56) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7b3a,	// (0x00097a56) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0009f9d8) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0009f9d8) hc_cl_list_single_graphic_pane_g

0x7b4e,	// (0x00097a6a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7b4e,	// (0x00097a6a) hc_cl_list_single_graphic_pane_t1

0x7b2e,	// (0x00097a4a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7b2e,	// (0x00097a4a) hc_cl_list_double_graphic_heading_pane_g1

0x7b63,	// (0x00097a7f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7b63,	// (0x00097a7f) hc_cl_list_double_graphic_heading_pane_g2

0x7b77,	// (0x00097a93) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7b77,	// (0x00097a93) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0009f9dd) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0009f9dd) hc_cl_list_double_graphic_heading_pane_g

0x7b8b,	// (0x00097aa7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7b8b,	// (0x00097aa7) hc_cl_list_double_graphic_heading_pane_t1

0x7ba0,	// (0x00097abc) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7ba0,	// (0x00097abc) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0009f9e4) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0009f9e4) hc_cl_list_double_graphic_heading_pane_t

0x7bbf,	// (0x00097adb) vid4_progress_pane_g1

0x7bd0,	// (0x00097aec) vid4_progress_pane_g2

0xa7e8,	// (0x0009a704) vid4_progress_pane_g3

0xdc71,	// (0x0009db8d) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0009f9e9) vid4_progress_pane_g

0xdd5c,	// (0x0009dc78) vid4_progress_pane_t1

0x7be2,	// (0x00097afe) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0009f9f4) vid4_progress_pane_t

0x7c11,	// (0x00097b2d) wait_bar_pane_cp07

0xa8e6,	// (0x0009a802) blid_firmament_pane_ParamLimits

0xa929,	// (0x0009a845) popup_blid_sat_info2_window_g1

0xa94d,	// (0x0009a869) popup_blid_sat_info2_window_t3

0xa95b,	// (0x0009a877) popup_blid_sat_info2_window_t4

0xa969,	// (0x0009a885) popup_blid_sat_info2_window_t5

0xa977,	// (0x0009a893) popup_blid_sat_info2_window_t6

0xa987,	// (0x0009a8a3) popup_blid_sat_info2_window_t7

0xa995,	// (0x0009a8b1) popup_blid_sat_info2_window_t8

0xa9a3,	// (0x0009a8bf) popup_blid_sat_info2_window_t9

0xa9b1,	// (0x0009a8cd) popup_blid_sat_info2_window_t10

0xaa79,	// (0x0009a995) aid_firma_cardinal_ParamLimits

0xaa8d,	// (0x0009a9a9) blid_firmament_pane_t1_ParamLimits

0xaaa4,	// (0x0009a9c0) blid_firmament_pane_t2_ParamLimits

0xaabb,	// (0x0009a9d7) blid_firmament_pane_t3_ParamLimits

0xaad2,	// (0x0009a9ee) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x0009f60e) blid_firmament_pane_t_ParamLimits

0xaae9,	// (0x0009aa05) blid_sat_info_pane_ParamLimits

0x0c12,	// (0x00090b2e) main_cam_set_pane_ParamLimits

0x5ebf,	// (0x00095ddb) aid_size_cell_colour_35_ParamLimits

0x5edf,	// (0x00095dfb) aid_size_cell_colour_112_ParamLimits

0x5eff,	// (0x00095e1b) aid_size_cell_effect_ParamLimits

0x4291,	// (0x000941ad) bg_tb_trans_pane_cp02_ParamLimits

0xdba7,	// (0x0009dac3) heading_imed_pane_ParamLimits

0x5f1f,	// (0x00095e3b) listscroll_imed_pane_ParamLimits

0xebec,	// (0x0009eb08) popup_call2_audio_first_window_g5_ParamLimits

0xebec,	// (0x0009eb08) popup_call2_audio_first_window_g5

0x64dc,	// (0x000963f8) aid_size_touch_image3_arrow_left_ParamLimits

0x64dc,	// (0x000963f8) aid_size_touch_image3_arrow_left

0x6508,	// (0x00096424) aid_size_touch_image3_arrow_right_ParamLimits

0x6508,	// (0x00096424) aid_size_touch_image3_arrow_right

0x7bfa,	// (0x00097b16) vid4_progress_pane_t3

0x623a,	// (0x00096156) main_hwr_training_symbol_option_pane_ParamLimits

0x623a,	// (0x00096156) main_hwr_training_symbol_option_pane

0xb2db,	// (0x0009b1f7) popup_hwr_training_preview_window_ParamLimits

0xb2db,	// (0x0009b1f7) popup_hwr_training_preview_window

0x625a,	// (0x00096176) hwr_training_navi_pane_g5_ParamLimits

0x625a,	// (0x00096176) hwr_training_navi_pane_g5

0xb78b,	// (0x0009b6a7) popup_char_count_window

0xdcc7,	// (0x0009dbe3) bg_popup_sub_pane_cp20_ParamLimits

0x755d,	// (0x00097479) list_vitu2_match_list_pane_ParamLimits

0x756c,	// (0x00097488) vitu2_page_scroll_pane_ParamLimits

0x756c,	// (0x00097488) vitu2_page_scroll_pane

0xbd75,	// (0x0009bc91) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbd75,	// (0x0009bc91) list_single_hwr_training_symbol_option_pane

0xbd88,	// (0x0009bca4) list_single_hwr_training_symbol_option_pane_g1

0xbd90,	// (0x0009bcac) list_single_hwr_training_symbol_option_pane_t1

0xbd9e,	// (0x0009bcba) bg_button_pane_cp023

0xbda7,	// (0x0009bcc3) bg_button_pane_cp024

0x7c23,	// (0x00097b3f) vitu2_page_scroll_pane_g1

0x7c2b,	// (0x00097b47) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0009f9fb) vitu2_page_scroll_pane_g

0x7c35,	// (0x00097b51) vitu2_page_scroll_pane_t1

0x506d,	// (0x00094f89) popup_char_count_window_g1

0xbdda,	// (0x0009bcf6) popup_char_count_window_g2

0xbde3,	// (0x0009bcff) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0009fa00) popup_char_count_window_g

0xbdec,	// (0x0009bd08) popup_char_count_window_t1

0x0992,	// (0x000908ae) main_vded2_pane

0xafd8,	// (0x0009aef4) aid_size_cell_imed_line

0xafe2,	// (0x0009aefe) grid_imed_line_width_pane

0x6aac,	// (0x000969c8) vid4_indicators_pane_g4

0xbdfa,	// (0x0009bd16) cell_imed_line_width_pane_ParamLimits

0xbdfa,	// (0x0009bd16) cell_imed_line_width_pane

0xbe10,	// (0x0009bd2c) cell_imed_line_width_pane_g1

0xa894,	// (0x0009a7b0) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0009fa07) cell_imed_line_width_pane_g

0x7c44,	// (0x00097b60) main_vded2_pane_g1_ParamLimits

0x7c44,	// (0x00097b60) main_vded2_pane_g1

0x7c5f,	// (0x00097b7b) main_vded2_pane_g2_ParamLimits

0x7c5f,	// (0x00097b7b) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0009fa0c) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0009fa0c) main_vded2_pane_g

0x7c71,	// (0x00097b8d) vded2_slider_pane_ParamLimits

0x7c71,	// (0x00097b8d) vded2_slider_pane

0x7c81,	// (0x00097b9d) aid_size_touch_vded2_end

0x7c8b,	// (0x00097ba7) aid_size_touch_vded2_playhead

0xbe19,	// (0x0009bd35) aid_size_touch_vded2_start

0xbe21,	// (0x0009bd3d) vded2_slider_bg_pane

0xbe2a,	// (0x0009bd46) vded2_slider_pane_g1

0xbe33,	// (0x0009bd4f) vded2_slider_pane_g2

0x7c95,	// (0x00097bb1) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0009fa11) vded2_slider_pane_g

0xbe3b,	// (0x0009bd57) vded2_slider_bg_pane_g1

0xbe44,	// (0x0009bd60) vded2_slider_bg_pane_g2

0xbe4d,	// (0x0009bd69) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0009fa18) vded2_slider_bg_pane_g

0x348b,	// (0x000933a7) aid_postcard_touch_down_pane_ParamLimits

0x348b,	// (0x000933a7) aid_postcard_touch_down_pane

0x34a3,	// (0x000933bf) aid_postcard_touch_up_pane_ParamLimits

0x34a3,	// (0x000933bf) aid_postcard_touch_up_pane

0x0992,	// (0x000908ae) main_blid2_pane

0x42c7,	// (0x000941e3) popup_blid2_search_window

0x0992,	// (0x000908ae) blid2_gps_pane

0x0992,	// (0x000908ae) blid2_navig_pane

0x0992,	// (0x000908ae) blid2_search_pane

0x0992,	// (0x000908ae) blid2_tripm_pane

0x7ca0,	// (0x00097bbc) blid2_search_pane_g1_ParamLimits

0x7ca0,	// (0x00097bbc) blid2_search_pane_g1

0x7cb3,	// (0x00097bcf) blid2_search_pane_t1_ParamLimits

0x7cb3,	// (0x00097bcf) blid2_search_pane_t1

0x7cc5,	// (0x00097be1) aid_size_cell_blid2_gps_ParamLimits

0x7cc5,	// (0x00097be1) aid_size_cell_blid2_gps

0x7cdd,	// (0x00097bf9) blid2_gps_pane_g1_ParamLimits

0x7cdd,	// (0x00097bf9) blid2_gps_pane_g1

0x7cf1,	// (0x00097c0d) grid_blid2_satellite_pane_ParamLimits

0x7cf1,	// (0x00097c0d) grid_blid2_satellite_pane

0x7d09,	// (0x00097c25) blid2_navig_pane_g1_ParamLimits

0x7d09,	// (0x00097c25) blid2_navig_pane_g1

0x7d15,	// (0x00097c31) blid2_navig_pane_t1_ParamLimits

0x7d15,	// (0x00097c31) blid2_navig_pane_t1

0x7d30,	// (0x00097c4c) blid2_navig_pane_t2_ParamLimits

0x7d30,	// (0x00097c4c) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0009fa1f) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0009fa1f) blid2_navig_pane_t

0x7d4b,	// (0x00097c67) blid2_navig_ring_pane_ParamLimits

0x7d4b,	// (0x00097c67) blid2_navig_ring_pane

0x7d66,	// (0x00097c82) blid2_speed_pane_ParamLimits

0x7d66,	// (0x00097c82) blid2_speed_pane

0x7d72,	// (0x00097c8e) blid2_tripm_pane_g1_ParamLimits

0x7d72,	// (0x00097c8e) blid2_tripm_pane_g1

0x7d8d,	// (0x00097ca9) blid2_tripm_pane_g2_ParamLimits

0x7d8d,	// (0x00097ca9) blid2_tripm_pane_g2

0x7da1,	// (0x00097cbd) blid2_tripm_pane_g3_ParamLimits

0x7da1,	// (0x00097cbd) blid2_tripm_pane_g3

0x7db5,	// (0x00097cd1) blid2_tripm_pane_g4_ParamLimits

0x7db5,	// (0x00097cd1) blid2_tripm_pane_g4

0x7dc9,	// (0x00097ce5) blid2_tripm_pane_g5_ParamLimits

0x7dc9,	// (0x00097ce5) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0009fa24) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0009fa24) blid2_tripm_pane_g

0x7def,	// (0x00097d0b) blid2_tripm_pane_t1_ParamLimits

0x7def,	// (0x00097d0b) blid2_tripm_pane_t1

0x7e08,	// (0x00097d24) blid2_tripm_pane_t2_ParamLimits

0x7e08,	// (0x00097d24) blid2_tripm_pane_t2

0x7e21,	// (0x00097d3d) blid2_tripm_pane_t3_ParamLimits

0x7e21,	// (0x00097d3d) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0009fa31) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0009fa31) blid2_tripm_pane_t

0x7e68,	// (0x00097d84) cell_blid2_satellite_pane_ParamLimits

0x7e68,	// (0x00097d84) cell_blid2_satellite_pane

0x7e84,	// (0x00097da0) cell_blid2_satellite_pane_g1

0xbe56,	// (0x0009bd72) cell_blid2_satellite_pane_t1

0xaaf9,	// (0x0009aa15) blid2_speed_pane_g1

0xbe64,	// (0x0009bd80) blid2_speed_pane_t1

0xbe72,	// (0x0009bd8e) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0009fa3a) blid2_speed_pane_t

0xaaf9,	// (0x0009aa15) blid2_navig_ring_pane_g1

0x7e8d,	// (0x00097da9) blid2_navig_ring_pane_g2

0x7e95,	// (0x00097db1) blid2_navig_ring_pane_g3

0x7e9d,	// (0x00097db9) blid2_navig_ring_pane_g4

0x7ea5,	// (0x00097dc1) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0009fa3f) blid2_navig_ring_pane_g

0x0992,	// (0x000908ae) bg_popup_window_pane_cp011

0xbe80,	// (0x0009bd9c) popup_blid2_search_window_g1

0xbe88,	// (0x0009bda4) popup_blid2_search_window_t1

0xbe96,	// (0x0009bdb2) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0009fa4a) popup_blid2_search_window_t

0xd8ee,	// (0x0009d80a) main_browser_pane_g1

0xa482,	// (0x0009a39e) main_browser_pane_ParamLimits

0xdcc7,	// (0x0009dbe3) bg_button_pane_cp011_ParamLimits

0x6db8,	// (0x00096cd4) cell_vitu2_function_pane_g1_ParamLimits

0x4291,	// (0x000941ad) bg_popup_sub_pane_cp22_ParamLimits

0x770b,	// (0x00097627) input_focus_pane_cp08_ParamLimits

0x7722,	// (0x0009763e) popup_vitu2_query_button_pane_ParamLimits

0x7722,	// (0x0009763e) popup_vitu2_query_button_pane

0x7733,	// (0x0009764f) popup_vitu2_query_input_button_pane

0xba2a,	// (0x0009b946) popup_vitu2_query_window_g1_ParamLimits

0x773d,	// (0x00097659) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0009f94b) popup_vitu2_query_window_g_ParamLimits

0x0992,	// (0x000908ae) bg_button_pane_cp026

0x7ead,	// (0x00097dc9) popup_vitu2_query_input_button_pane_g1

0x0992,	// (0x000908ae) bg_button_pane_cp025

0xbea4,	// (0x0009bdc0) popup_vitu2_query_button_pane_t1

0x52b1,	// (0x000951cd) main_mp3_pane_t6

0x52bf,	// (0x000951db) popup_slider_window_cp01

0xdc59,	// (0x0009db75) cam4_battery_pane

0xdcbd,	// (0x0009dbd9) cam4_battery_pane_cp02

0x7bb5,	// (0x00097ad1) cam4_battery_pane_cp01

0xdd54,	// (0x0009dc70) cam4_battery_pane_cp03

0xb610,	// (0x0009b52c) cam4_battery_pane_g1

0xaaf9,	// (0x0009aa15) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0009fa4f) cam4_battery_pane_g

0xa9bf,	// (0x0009a8db) popup_blid_sat_info2_window_t11

0x2d5a,	// (0x00092c76) aid_size_touch_mv_arrow_left_ParamLimits

0x2d83,	// (0x00092c9f) aid_size_touch_mv_arrow_right_ParamLimits

0xe105,	// (0x0009e021) navi_pane_g1_ParamLimits

0x2dc2,	// (0x00092cde) navi_pane_g2_ParamLimits

0x2df0,	// (0x00092d0c) navi_pane_g3_ParamLimits

0xf404,	// (0x0009f320) navi_pane_g_ParamLimits

0x2e4a,	// (0x00092d66) navi_pane_mv_t1_ParamLimits

0x5f2b,	// (0x00095e47) grid_imed_effect_pane_ParamLimits

0x1ba0,	// (0x00091abc) aid_placing_vt_slider_lsc

0xd839,	// (0x0009d755) aid_placing_vt_slider_prt

0x0c12,	// (0x00090b2e) bg_tb_trans_pane_cp01_ParamLimits

0xac49,	// (0x0009ab65) popup_image_details_window_g1_ParamLimits

0xac5c,	// (0x0009ab78) popup_image_details_window_g2_ParamLimits

0xac71,	// (0x0009ab8d) popup_image_details_window_g3_ParamLimits

0xac71,	// (0x0009ab8d) popup_image_details_window_g3

0xf737,	// (0x0009f653) popup_image_details_window_g_ParamLimits

0xac85,	// (0x0009aba1) popup_image_details_window_t1_ParamLimits

0xac97,	// (0x0009abb3) popup_image_details_window_t2_ParamLimits

0xacb0,	// (0x0009abcc) popup_image_details_window_t3_ParamLimits

0xacc4,	// (0x0009abe0) popup_image_details_window_t4_ParamLimits

0xacdf,	// (0x0009abfb) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x0009f65a) popup_image_details_window_t_ParamLimits

0x7ac1,	// (0x000979dd) cl_header_name_pane_ParamLimits

0x7ac1,	// (0x000979dd) cl_header_name_pane

0x7eb5,	// (0x00097dd1) cl_header_name_pane_t1_ParamLimits

0x7eb5,	// (0x00097dd1) cl_header_name_pane_t1

0x7ed6,	// (0x00097df2) cl_header_name_pane_t2_ParamLimits

0x7ed6,	// (0x00097df2) cl_header_name_pane_t2

0x7f18,	// (0x00097e34) cl_header_name_pane_t3_ParamLimits

0x7f18,	// (0x00097e34) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0009fa54) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0009fa54) cl_header_name_pane_t

0x2e1b,	// (0x00092d37) navi_pane_mv_g2_ParamLimits

0xb748,	// (0x0009b664) field_vitu2_entry_pane_g1_ParamLimits

0xb754,	// (0x0009b670) field_vitu2_entry_pane_g2_ParamLimits

0xb760,	// (0x0009b67c) field_vitu2_entry_pane_g3_ParamLimits

0xb760,	// (0x0009b67c) field_vitu2_entry_pane_g3

0xf935,	// (0x0009f851) field_vitu2_entry_pane_g_ParamLimits

0x6d34,	// (0x00096c50) cell_vitu2_itu_pane_g1_ParamLimits

0x6d44,	// (0x00096c60) cell_vitu2_itu_pane_g2_ParamLimits

0x6d44,	// (0x00096c60) cell_vitu2_itu_pane_g2

0x0001,

0xf941,	// (0x0009f85d) cell_vitu2_itu_pane_g_ParamLimits

0xf941,	// (0x0009f85d) cell_vitu2_itu_pane_g

0xdcc7,	// (0x0009dbe3) bg_vkb2_func_pane_cp05_ParamLimits

0xdcc7,	// (0x0009dbe3) bg_vkb2_func_pane_cp05

0xdcc7,	// (0x0009dbe3) bg_vkb2_func_pane_cp03

0xdcc7,	// (0x0009dbe3) bg_vkb2_func_pane_cp04

0xdcc7,	// (0x0009dbe3) bg_vkb2_func_pane_cp10_ParamLimits

0xdcc7,	// (0x0009dbe3) bg_vkb2_func_pane_cp10

0x7a63,	// (0x0009797f) bg_vkb2_func_pane_cp08

0x7a49,	// (0x00097965) bg_vkb2_func_pane_cp06

0x7a57,	// (0x00097973) bg_vkb2_func_pane_cp07

0xbdb0,	// (0x0009bccc) bg_vkb2_func_pane_cp11_ParamLimits

0xbdb0,	// (0x0009bccc) bg_vkb2_func_pane_cp11

0xbdc5,	// (0x0009bce1) bg_vkb2_func_pane_cp12_ParamLimits

0xbdc5,	// (0x0009bce1) bg_vkb2_func_pane_cp12

0x0992,	// (0x000908ae) bg_vkb2_func_pane_cp09

0xb79d,	// (0x0009b6b9) bg_vkb2_func_pane_g1

0xd9ff,	// (0x0009d91b) bg_vkb2_func_pane_g2

0xb7a5,	// (0x0009b6c1) bg_vkb2_func_pane_g3

0xb7ad,	// (0x0009b6c9) bg_vkb2_func_pane_g4

0xb9d5,	// (0x0009b8f1) bg_vkb2_func_pane_g5

0xb7c5,	// (0x0009b6e1) bg_vkb2_func_pane_g6

0xb7cd,	// (0x0009b6e9) bg_vkb2_func_pane_g7

0xb7bd,	// (0x0009b6d9) bg_vkb2_func_pane_g8

0xd9df,	// (0x0009d8fb) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0009fa5b) bg_vkb2_func_pane_g

0x7ddd,	// (0x00097cf9) blid2_tripm_pane_g6_ParamLimits

0x7ddd,	// (0x00097cf9) blid2_tripm_pane_g6

0xb5ca,	// (0x0009b4e6) mp4_progress_pane_g1

0x7e54,	// (0x00097d70) blid2_tripm_values_pane_ParamLimits

0x7e54,	// (0x00097d70) blid2_tripm_values_pane

0x7f49,	// (0x00097e65) blid2_tripm_values_pane_t1

0x7f57,	// (0x00097e73) blid2_tripm_values_pane_t2

0x7f65,	// (0x00097e81) blid2_tripm_values_pane_t3

0x7f73,	// (0x00097e8f) blid2_tripm_values_pane_t4

0x7f81,	// (0x00097e9d) blid2_tripm_values_pane_t5

0x7f8f,	// (0x00097eab) blid2_tripm_values_pane_t6

0x7f9d,	// (0x00097eb9) blid2_tripm_values_pane_t7

0x7fab,	// (0x00097ec7) blid2_tripm_values_pane_t8

0x7fb9,	// (0x00097ed5) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0009fa6e) blid2_tripm_values_pane_t

0x1bdd,	// (0x00091af9) call_video_pane_t1_ParamLimits

0x1bf7,	// (0x00091b13) call_video_pane_t2_ParamLimits

0xf28d,	// (0x0009f1a9) call_video_pane_t_ParamLimits

0x338e,	// (0x000932aa) msg_header_pane_g1_ParamLimits

0xe330,	// (0x0009e24c) msg_header_pane_g2_ParamLimits

0xe330,	// (0x0009e24c) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x0009f3c3) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x0009f3c3) msg_header_pane_g

0xa482,	// (0x0009a39e) main_clock2_pane_ParamLimits

0x5c30,	// (0x00095b4c) grid_clock2_toolbar_pane_ParamLimits

0x5c30,	// (0x00095b4c) grid_clock2_toolbar_pane

0x5c30,	// (0x00095b4c) listscroll_clock2_pane_ParamLimits

0x5c30,	// (0x00095b4c) listscroll_clock2_pane

0x5d18,	// (0x00095c34) main_clock2_pane_t3_ParamLimits

0x5d18,	// (0x00095c34) main_clock2_pane_t3

0x5d33,	// (0x00095c4f) main_clock2_pane_t4_ParamLimits

0x5d33,	// (0x00095c4f) main_clock2_pane_t4

0xbeb2,	// (0x0009bdce) cell_clock2_toolbar_pane

0xbeba,	// (0x0009bdd6) cell_clock2_toolbar_pane_cp01

0xbeba,	// (0x0009bdd6) cell_clock2_toolbar_pane_cp02

0xbec2,	// (0x0009bdde) cell_clock2_toolbar_pane_cp03

0xbeca,	// (0x0009bde6) list_clock2_pane

0xe06b,	// (0x0009df87) scroll_pane_cp10

0xbed2,	// (0x0009bdee) list_single_clock2_pane_ParamLimits

0xbed2,	// (0x0009bdee) list_single_clock2_pane

0xe1a5,	// (0x0009e0c1) list_highlight_pane_cp08

0xbedf,	// (0x0009bdfb) list_single_clock2_pane_t1

0xbeed,	// (0x0009be09) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0009fa81) list_single_clock2_pane_t

0x0992,	// (0x000908ae) bg_button_pane_cp10

0xbefb,	// (0x0009be17) cell_clock2_toolbar_pane_g1

0x3417,	// (0x00093333) aid_main_viewer_pane_g1_ParamLimits

0x3417,	// (0x00093333) aid_main_viewer_pane_g1

0x3425,	// (0x00093341) aid_main_viewer_pane_g2_ParamLimits

0x3425,	// (0x00093341) aid_main_viewer_pane_g2

0x3433,	// (0x0009334f) aid_main_viewer_pane_g3_ParamLimits

0x3433,	// (0x0009334f) aid_main_viewer_pane_g3

0x3442,	// (0x0009335e) aid_main_viewer_pane_g4_ParamLimits

0x3442,	// (0x0009335e) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x0009f3d4) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x0009f3d4) aid_main_viewer_pane_g

0x427d,	// (0x00094199) main_calc_pane_ParamLimits

0x429f,	// (0x000941bb) main_dialer2_pane_ParamLimits

0x0992,	// (0x000908ae) main_cam6_pane

0x0992,	// (0x000908ae) main_vid6_pane

0x5c3c,	// (0x00095b58) listscroll_gen_pane_cp06_ParamLimits

0x5c3c,	// (0x00095b58) listscroll_gen_pane_cp06

0x5d4e,	// (0x00095c6a) main_clock2_pane_t5_ParamLimits

0x5d4e,	// (0x00095c6a) main_clock2_pane_t5

0x5db0,	// (0x00095ccc) aid_call2_pane_cp10_ParamLimits

0x5dc2,	// (0x00095cde) aid_call_pane_cp10_ParamLimits

0xe0da,	// (0x0009dff6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe0da,	// (0x0009dff6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5dd4,	// (0x00095cf0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5dd4,	// (0x00095cf0) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe0da,	// (0x0009dff6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x0009f70a) popup_clock_analogue_window_cp10_g_ParamLimits

0x5dea,	// (0x00095d06) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6489,	// (0x000963a5) cell_dialer2_keypad_pane_g2_ParamLimits

0x6489,	// (0x000963a5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d4,	// (0x0009f7f0) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d4,	// (0x0009f7f0) cell_dialer2_keypad_pane_g

0x64a5,	// (0x000963c1) cell_dialer2_keypad_pane_t1

0x70df,	// (0x00096ffb) main_cset_text2_pane_ParamLimits

0x70df,	// (0x00096ffb) main_cset_text2_pane

0xbc22,	// (0x0009bb3e) area_vitu2_query_pane_g1_ParamLimits

0x79e6,	// (0x00097902) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0009f99e) area_vitu2_query_pane_g_ParamLimits

0xbca6,	// (0x0009bbc2) area_vitu2_query_pane_t7_ParamLimits

0xbca6,	// (0x0009bbc2) area_vitu2_query_pane_t7

0x7a49,	// (0x00097965) bg_button_pane_cp018_ParamLimits

0x7a57,	// (0x00097973) bg_button_pane_cp021_ParamLimits

0x7a63,	// (0x0009797f) bg_button_pane_cp022_ParamLimits

0x7a63,	// (0x0009797f) bg_vkb2_func_pane_cp08_ParamLimits

0x7a49,	// (0x00097965) bg_vkb2_func_pane_cp06_ParamLimits

0x7a57,	// (0x00097973) bg_vkb2_func_pane_cp07_ParamLimits

0x7a74,	// (0x00097990) input_focus_pane_cp09_ParamLimits

0xdd71,	// (0x0009dc8d) cam6_autofocus_pane_ParamLimits

0xdd71,	// (0x0009dc8d) cam6_autofocus_pane

0x7fc7,	// (0x00097ee3) cam6_image_uncrop_pane_ParamLimits

0x7fc7,	// (0x00097ee3) cam6_image_uncrop_pane

0x7fd6,	// (0x00097ef2) cam6_indi_pane_ParamLimits

0x7fd6,	// (0x00097ef2) cam6_indi_pane

0x7fec,	// (0x00097f08) cam6_mode_pane_ParamLimits

0x7fec,	// (0x00097f08) cam6_mode_pane

0x7ffe,	// (0x00097f1a) cam6_timer_pane_ParamLimits

0x7ffe,	// (0x00097f1a) cam6_timer_pane

0x800a,	// (0x00097f26) cam6_zoom_pane_ParamLimits

0x800a,	// (0x00097f26) cam6_zoom_pane

0x8018,	// (0x00097f34) cam6_mode_pane_g1_ParamLimits

0x8018,	// (0x00097f34) cam6_mode_pane_g1

0x8028,	// (0x00097f44) cam6_mode_pane_g2_ParamLimits

0x8028,	// (0x00097f44) cam6_mode_pane_g2

0x8038,	// (0x00097f54) cam6_mode_pane_g3_ParamLimits

0x8038,	// (0x00097f54) cam6_mode_pane_g3

0x8048,	// (0x00097f64) cam6_mode_pane_g4_ParamLimits

0x8048,	// (0x00097f64) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0009fa86) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0009fa86) cam6_mode_pane_g

0xbf03,	// (0x0009be1f) bg_tb_trans_pane_cp08_ParamLimits

0xbf03,	// (0x0009be1f) bg_tb_trans_pane_cp08

0xbf11,	// (0x0009be2d) cam6_battery_pane_ParamLimits

0xbf11,	// (0x0009be2d) cam6_battery_pane

0xbf27,	// (0x0009be43) cam6_indi_pane_g1_ParamLimits

0xbf27,	// (0x0009be43) cam6_indi_pane_g1

0xbf39,	// (0x0009be55) cam6_indi_pane_g2_ParamLimits

0xbf39,	// (0x0009be55) cam6_indi_pane_g2

0xbf4b,	// (0x0009be67) cam6_indi_pane_g3_ParamLimits

0xbf4b,	// (0x0009be67) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0009fa8f) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0009fa8f) cam6_indi_pane_g

0xbf5d,	// (0x0009be79) cam6_indi_pane_t1_ParamLimits

0xbf5d,	// (0x0009be79) cam6_indi_pane_t1

0x6ae0,	// (0x000969fc) cam6_autofocus_pane_g1

0x6ad8,	// (0x000969f4) cam6_autofocus_pane_g2

0x6af0,	// (0x00096a0c) cam6_autofocus_pane_g3

0x6ae8,	// (0x00096a04) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0009fa96) cam6_autofocus_pane_g

0xbf83,	// (0x0009be9f) cam6_timer_pane_g1

0xbf8b,	// (0x0009bea7) cam6_timer_pane_t1

0xbf99,	// (0x0009beb5) cam6_zoom_cont_pane

0xbfa1,	// (0x0009bebd) cam6_zoom_pane_g1

0xbfa9,	// (0x0009bec5) cam6_zoom_pane_g2

0x8058,	// (0x00097f74) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0009fa9f) cam6_zoom_pane_g

0xaaf9,	// (0x0009aa15) cam6_battery_pane_g1

0xaaf9,	// (0x0009aa15) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0009f617) cam6_battery_pane_g

0xbfb1,	// (0x0009becd) cam6_zoom_cont_pane_g1

0xbfba,	// (0x0009bed6) cam6_zoom_cont_pane_g2

0xbfc3,	// (0x0009bedf) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0009faa6) cam6_zoom_cont_pane_g

0x8075,	// (0x00097f91) cam6_mode_pane_cp_ParamLimits

0x8075,	// (0x00097f91) cam6_mode_pane_cp

0x8087,	// (0x00097fa3) cam6_zoom_pane_cp_ParamLimits

0x8087,	// (0x00097fa3) cam6_zoom_pane_cp

0x8095,	// (0x00097fb1) vid6_image_uncrop_cif_pane_ParamLimits

0x8095,	// (0x00097fb1) vid6_image_uncrop_cif_pane

0x80a5,	// (0x00097fc1) vid6_image_uncrop_nhd_pane_ParamLimits

0x80a5,	// (0x00097fc1) vid6_image_uncrop_nhd_pane

0x80b4,	// (0x00097fd0) vid6_image_uncrop_vga_pane_ParamLimits

0x80b4,	// (0x00097fd0) vid6_image_uncrop_vga_pane

0x80c3,	// (0x00097fdf) vid6_image_uncrop_wvga_pane_ParamLimits

0x80c3,	// (0x00097fdf) vid6_image_uncrop_wvga_pane

0x80d2,	// (0x00097fee) vid6_indi_pane_ParamLimits

0x80d2,	// (0x00097fee) vid6_indi_pane

0xbf03,	// (0x0009be1f) bg_tb_trans_pane_cp09_ParamLimits

0xbf03,	// (0x0009be1f) bg_tb_trans_pane_cp09

0xbfdb,	// (0x0009bef7) cam6_battery_pane_cp_ParamLimits

0xbfdb,	// (0x0009bef7) cam6_battery_pane_cp

0xbfe7,	// (0x0009bf03) vid6_indi_pane_g1_ParamLimits

0xbfe7,	// (0x0009bf03) vid6_indi_pane_g1

0xbff9,	// (0x0009bf15) vid6_indi_pane_g2_ParamLimits

0xbff9,	// (0x0009bf15) vid6_indi_pane_g2

0xc00b,	// (0x0009bf27) vid6_indi_pane_g3_ParamLimits

0xc00b,	// (0x0009bf27) vid6_indi_pane_g3

0xc022,	// (0x0009bf3e) vid6_indi_pane_g4_ParamLimits

0xc022,	// (0x0009bf3e) vid6_indi_pane_g4

0xc039,	// (0x0009bf55) vid6_indi_pane_g5_ParamLimits

0xc039,	// (0x0009bf55) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0009faad) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0009faad) vid6_indi_pane_g

0xc053,	// (0x0009bf6f) vid6_indi_pane_t1_ParamLimits

0xc053,	// (0x0009bf6f) vid6_indi_pane_t1

0xc069,	// (0x0009bf85) vid6_indi_pane_t2_ParamLimits

0xc069,	// (0x0009bf85) vid6_indi_pane_t2

0xc091,	// (0x0009bfad) vid6_indi_pane_t3_ParamLimits

0xc091,	// (0x0009bfad) vid6_indi_pane_t3

0xc0b9,	// (0x0009bfd5) vid6_indi_pane_t4_ParamLimits

0xc0b9,	// (0x0009bfd5) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0009fab8) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0009fab8) vid6_indi_pane_t

0xc0dd,	// (0x0009bff9) wait_bar_pane_cp08

0x80ea,	// (0x00098006) main_cset_text2_pane_t1_ParamLimits

0x80ea,	// (0x00098006) main_cset_text2_pane_t1

0x8060,	// (0x00097f7c) listscroll_gen_pane_cp06_t1_ParamLimits

0x8060,	// (0x00097f7c) listscroll_gen_pane_cp06_t1

0x0992,	// (0x000908ae) main_cam6_set_pane

0xdc4b,	// (0x0009db67) bg_tb_trans_pane_cp06_ParamLimits

0xdc61,	// (0x0009db7d) cam4_indicators_pane_g1_ParamLimits

0xdc71,	// (0x0009db8d) cam4_indicators_pane_g2_ParamLimits

0xf911,	// (0x0009f82d) cam4_indicators_pane_g_ParamLimits

0xdc89,	// (0x0009dba5) cam4_indicators_pane_t1_ParamLimits

0xdcaf,	// (0x0009dbcb) bg_tb_trans_pane_cp07_ParamLimits

0x6a81,	// (0x0009699d) vid4_indicators_pane_g1_ParamLimits

0x6a90,	// (0x000969ac) vid4_indicators_pane_g2_ParamLimits

0x6a9f,	// (0x000969bb) vid4_indicators_pane_g3_ParamLimits

0x6aac,	// (0x000969c8) vid4_indicators_pane_g4_ParamLimits

0xf923,	// (0x0009f83f) vid4_indicators_pane_g_ParamLimits

0x6ac4,	// (0x000969e0) vid4_indicators_pane_t1_ParamLimits

0x7bbf,	// (0x00097adb) vid4_progress_pane_g1_ParamLimits

0x7bd0,	// (0x00097aec) vid4_progress_pane_g2_ParamLimits

0xa7e8,	// (0x0009a704) vid4_progress_pane_g3_ParamLimits

0xdc71,	// (0x0009db8d) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0009f9e9) vid4_progress_pane_g_ParamLimits

0xdd5c,	// (0x0009dc78) vid4_progress_pane_t1_ParamLimits

0x7be2,	// (0x00097afe) vid4_progress_pane_t2_ParamLimits

0x7bfa,	// (0x00097b16) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0009f9f4) vid4_progress_pane_t_ParamLimits

0x7c11,	// (0x00097b2d) wait_bar_pane_cp07_ParamLimits

0x810b,	// (0x00098027) main_cam6_set_pane_g2_ParamLimits

0x810b,	// (0x00098027) main_cam6_set_pane_g2

0x8131,	// (0x0009804d) main_cset6_listscroll_pane_ParamLimits

0x8131,	// (0x0009804d) main_cset6_listscroll_pane

0x814f,	// (0x0009806b) main_cset6_slider_pane_ParamLimits

0x814f,	// (0x0009806b) main_cset6_slider_pane

0x8165,	// (0x00098081) main_cset6_text2_pane_ParamLimits

0x8165,	// (0x00098081) main_cset6_text2_pane

0xc0ec,	// (0x0009c008) main_cset6_text_pane

0xc0f4,	// (0x0009c010) main_cset_list_pane_copy1_ParamLimits

0xc0f4,	// (0x0009c010) main_cset_list_pane_copy1

0xc104,	// (0x0009c020) scroll_pane_cp028_copy1

0x8173,	// (0x0009808f) cset_list_set_pane_copy1

0x8187,	// (0x000980a3) aid_position_infowindow_above_copy1

0x818f,	// (0x000980ab) aid_position_infowindow_below_copy1

0x8197,	// (0x000980b3) cset_list_set_pane_g1_copy1

0x819f,	// (0x000980bb) cset_list_set_pane_g3_copy1_ParamLimits

0x819f,	// (0x000980bb) cset_list_set_pane_g3_copy1

0x81ae,	// (0x000980ca) cset_list_set_pane_t1_copy1_ParamLimits

0x81ae,	// (0x000980ca) cset_list_set_pane_t1_copy1

0x0c12,	// (0x00090b2e) list_highlight_pane_cp021_copy1_ParamLimits

0x0c12,	// (0x00090b2e) list_highlight_pane_cp021_copy1

0xc10d,	// (0x0009c029) cset6_slider_pane_ParamLimits

0xc10d,	// (0x0009c029) cset6_slider_pane

0xc139,	// (0x0009c055) main_cset6_slider_pane_g1_ParamLimits

0xc139,	// (0x0009c055) main_cset6_slider_pane_g1

0x81c3,	// (0x000980df) main_cset6_slider_pane_g2_ParamLimits

0x81c3,	// (0x000980df) main_cset6_slider_pane_g2

0xc161,	// (0x0009c07d) main_cset6_slider_pane_g3_ParamLimits

0xc161,	// (0x0009c07d) main_cset6_slider_pane_g3

0x81eb,	// (0x00098107) main_cset6_slider_pane_g4_ParamLimits

0x81eb,	// (0x00098107) main_cset6_slider_pane_g4

0x81f7,	// (0x00098113) main_cset6_slider_pane_g5_ParamLimits

0x81f7,	// (0x00098113) main_cset6_slider_pane_g5

0xb8d0,	// (0x0009b7ec) main_cset6_slider_pane_g7_ParamLimits

0xb8d0,	// (0x0009b7ec) main_cset6_slider_pane_g7

0xb8dc,	// (0x0009b7f8) main_cset6_slider_pane_g8_ParamLimits

0xb8dc,	// (0x0009b7f8) main_cset6_slider_pane_g8

0x718e,	// (0x000970aa) main_cset6_slider_pane_g9_ParamLimits

0x718e,	// (0x000970aa) main_cset6_slider_pane_g9

0x719a,	// (0x000970b6) main_cset6_slider_pane_g10_ParamLimits

0x719a,	// (0x000970b6) main_cset6_slider_pane_g10

0x71a6,	// (0x000970c2) main_cset6_slider_pane_g11_ParamLimits

0x71a6,	// (0x000970c2) main_cset6_slider_pane_g11

0x71b2,	// (0x000970ce) main_cset6_slider_pane_g12_ParamLimits

0x71b2,	// (0x000970ce) main_cset6_slider_pane_g12

0x71be,	// (0x000970da) main_cset6_slider_pane_g13_ParamLimits

0x71be,	// (0x000970da) main_cset6_slider_pane_g13

0x71ca,	// (0x000970e6) main_cset6_slider_pane_g14_ParamLimits

0x71ca,	// (0x000970e6) main_cset6_slider_pane_g14

0x8205,	// (0x00098121) main_cset6_slider_pane_g15_ParamLimits

0x8205,	// (0x00098121) main_cset6_slider_pane_g15

0x71ee,	// (0x0009710a) main_cset6_slider_pane_g16_ParamLimits

0x71ee,	// (0x0009710a) main_cset6_slider_pane_g16

0x71fc,	// (0x00097118) main_cset6_slider_pane_g17_ParamLimits

0x71fc,	// (0x00097118) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0009fac1) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0009fac1) main_cset6_slider_pane_g

0xc16d,	// (0x0009c089) main_cset6_slider_pane_t1_ParamLimits

0xc16d,	// (0x0009c089) main_cset6_slider_pane_t1

0x8235,	// (0x00098151) main_cset6_slider_pane_t2_ParamLimits

0x8235,	// (0x00098151) main_cset6_slider_pane_t2

0x8260,	// (0x0009817c) main_cset6_slider_pane_t3_ParamLimits

0x8260,	// (0x0009817c) main_cset6_slider_pane_t3

0x828b,	// (0x000981a7) main_cset6_slider_pane_t4_ParamLimits

0x828b,	// (0x000981a7) main_cset6_slider_pane_t4

0x82b8,	// (0x000981d4) main_cset6_slider_pane_t5_ParamLimits

0x82b8,	// (0x000981d4) main_cset6_slider_pane_t5

0xc1ae,	// (0x0009c0ca) main_cset6_slider_pane_t7_ParamLimits

0xc1ae,	// (0x0009c0ca) main_cset6_slider_pane_t7

0x82e5,	// (0x00098201) main_cset6_slider_pane_t8_ParamLimits

0x82e5,	// (0x00098201) main_cset6_slider_pane_t8

0x8309,	// (0x00098225) main_cset6_slider_pane_t9_ParamLimits

0x8309,	// (0x00098225) main_cset6_slider_pane_t9

0x832d,	// (0x00098249) main_cset6_slider_pane_t10_ParamLimits

0x832d,	// (0x00098249) main_cset6_slider_pane_t10

0x8351,	// (0x0009826d) main_cset6_slider_pane_t11_ParamLimits

0x8351,	// (0x0009826d) main_cset6_slider_pane_t11

0xc1e4,	// (0x0009c100) main_cset6_slider_pane_t14_ParamLimits

0xc1e4,	// (0x0009c100) main_cset6_slider_pane_t14

0xc21d,	// (0x0009c139) main_cset6_slider_pane_t15_ParamLimits

0xc21d,	// (0x0009c139) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0009fae6) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0009fae6) main_cset6_slider_pane_t

0xc256,	// (0x0009c172) cset_slider_pane_g1_copy1

0xc25f,	// (0x0009c17b) cset_slider_pane_g2_copy1

0xc268,	// (0x0009c184) cset_slider_pane_g3_copy1

0x0992,	// (0x000908ae) bg_popup_sub_pane_cp011_copy1

0xba36,	// (0x0009b952) main_cset_text_pane_g1_copy1

0xba3e,	// (0x0009b95a) main_cset_text_pane_t1_copy1

0xba4c,	// (0x0009b968) main_cset_text_pane_t2_copy1

0xba5a,	// (0x0009b976) main_cset_text_pane_t3_copy1

0xba68,	// (0x0009b984) main_cset_text_pane_t4_copy1

0xba76,	// (0x0009b992) main_cset_text_pane_t5_copy1

0xba84,	// (0x0009b9a0) main_cset_text_pane_t6_copy1

0xba92,	// (0x0009b9ae) main_cset_text_pane_t7_copy1

0x80ea,	// (0x00098006) main_cset_text2_pane_t1_copy1

0x0992,	// (0x000908ae) main_ncimui_pane

0x4570,	// (0x0009448c) popup_query_ncimui_window_ParamLimits

0x4570,	// (0x0009448c) popup_query_ncimui_window

0xad8e,	// (0x0009acaa) field_cale_ev2_pane_g4_ParamLimits

0xad8e,	// (0x0009acaa) field_cale_ev2_pane_g4

0x6354,	// (0x00096270) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6354,	// (0x00096270) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8af,	// (0x0009f7cb) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8af,	// (0x0009f7cb) cell_video_dialer_keypad_pane_g

0x636c,	// (0x00096288) cell_video_dialer_keypad_pane_t1

0x0992,	// (0x000908ae) bg_popup_window_pane_cp012

0xdf57,	// (0x0009de73) heading_pane_cp06

0xc360,	// (0x0009c27c) ncim_query_content_pane

0x0992,	// (0x000908ae) bg_popup_heading_pane_cp01

0xc368,	// (0x0009c284) ncim_heading_pane_t1

0xc376,	// (0x0009c292) ncim_indicator_popup_pane

0xc388,	// (0x0009c2a4) ncim_query_button_pane

0xc39e,	// (0x0009c2ba) ncim_query_content_pane_t1

0xc3b0,	// (0x0009c2cc) ncim_query_content_pane_t2

0x0005,

0xfc09,	// (0x0009fb25) ncim_query_content_pane_t

0xc3ea,	// (0x0009c306) ncim_query_list_pane

0xc3fc,	// (0x0009c318) ncim_query_popup_pane

0xc376,	// (0x0009c292) ncim_indicator_popup_pane_ParamLimits

0x8470,	// (0x0009838c) ncim_query_content_pane_g1_ParamLimits

0x8470,	// (0x0009838c) ncim_query_content_pane_g1

0xc39e,	// (0x0009c2ba) ncim_query_content_pane_t1_ParamLimits

0xc3b0,	// (0x0009c2cc) ncim_query_content_pane_t2_ParamLimits

0x847c,	// (0x00098398) ncim_query_content_pane_t3_ParamLimits

0x847c,	// (0x00098398) ncim_query_content_pane_t3

0x84a4,	// (0x000983c0) ncim_query_content_pane_t4_ParamLimits

0x84a4,	// (0x000983c0) ncim_query_content_pane_t4

0x84cc,	// (0x000983e8) ncim_query_content_pane_t5_ParamLimits

0x84cc,	// (0x000983e8) ncim_query_content_pane_t5

0xc3c2,	// (0x0009c2de) ncim_query_content_pane_t6_ParamLimits

0xc3c2,	// (0x0009c2de) ncim_query_content_pane_t6

0xfc09,	// (0x0009fb25) ncim_query_content_pane_t_ParamLimits

0xc3ea,	// (0x0009c306) ncim_query_list_pane_ParamLimits

0xc3fc,	// (0x0009c318) ncim_query_popup_pane_ParamLimits

0xc410,	// (0x0009c32c) wait_bar_pane_cp04

0x0992,	// (0x000908ae) input_focus_pane_cp011

0xc418,	// (0x0009c334) ncim_query_popup_pane_t1

0xc426,	// (0x0009c342) ncim_list_query_list_pane_ParamLimits

0xc426,	// (0x0009c342) ncim_list_query_list_pane

0x0992,	// (0x000908ae) bg_button_pane_cp027

0xc439,	// (0x0009c355) ncim_query_button_pane_g1

0x0992,	// (0x000908ae) list_highlight_pane_cp012

0xc443,	// (0x0009c35f) ncim_list_query_list_pane_g1

0xc44b,	// (0x0009c367) ncim_list_query_list_pane_t1

0xdc7d,	// (0x0009db99) cam4_indicators_pane_g3_ParamLimits

0xdc7d,	// (0x0009db99) cam4_indicators_pane_g3

0x6ab8,	// (0x000969d4) vid4_indicators_pane_g5_ParamLimits

0x6ab8,	// (0x000969d4) vid4_indicators_pane_g5

0xdc7d,	// (0x0009db99) vid4_progress_pane_g5_ParamLimits

0xdc7d,	// (0x0009db99) vid4_progress_pane_g5

0x8389,	// (0x000982a5) main_ncimui_pane_g1

0x83df,	// (0x000982fb) ncimui_group_query_pane_ParamLimits

0x83df,	// (0x000982fb) ncimui_group_query_pane

0x841b,	// (0x00098337) ncimui_list_pane_ParamLimits

0x841b,	// (0x00098337) ncimui_list_pane

0x843c,	// (0x00098358) ncimui_text_pane_ParamLimits

0x843c,	// (0x00098358) ncimui_text_pane

0x84f4,	// (0x00098410) ncimui_text_pane_t1_ParamLimits

0x84f4,	// (0x00098410) ncimui_text_pane_t1

0xc459,	// (0x0009c375) ncimui_list_single_graphic_pane_ParamLimits

0xc459,	// (0x0009c375) ncimui_list_single_graphic_pane

0x8512,	// (0x0009842e) ncimui_query_pane_ParamLimits

0x8512,	// (0x0009842e) ncimui_query_pane

0x0992,	// (0x000908ae) list_highlight_pane_cp013

0xc469,	// (0x0009c385) ncim_list_query_list_pane_t1_copy1

0xc443,	// (0x0009c35f) ncim_list_single_graphic_pane_g1

0xc477,	// (0x0009c393) ncim_query_button_pane_cp01

0xc483,	// (0x0009c39f) ncim_query_entry_pane_ParamLimits

0xc483,	// (0x0009c39f) ncim_query_entry_pane

0xc496,	// (0x0009c3b2) ncimui_query_pane_g1

0xc4a2,	// (0x0009c3be) ncimui_query_pane_t1_ParamLimits

0xc4a2,	// (0x0009c3be) ncimui_query_pane_t1

0x0c12,	// (0x00090b2e) input_focus_pane_cp012

0xc4bb,	// (0x0009c3d7) ncim_query_entry_pane_t1

0xa482,	// (0x0009a39e) main_im_pane_ParamLimits

0x0c12,	// (0x00090b2e) main_mobtv_pane_ParamLimits

0x0c12,	// (0x00090b2e) main_mobtv_pane

0x821d,	// (0x00098139) main_cset6_slider_pane_g18_ParamLimits

0x821d,	// (0x00098139) main_cset6_slider_pane_g18

0x8229,	// (0x00098145) main_cset6_slider_pane_g19_ParamLimits

0x8229,	// (0x00098145) main_cset6_slider_pane_g19

0xc4cd,	// (0x0009c3e9) bg_main_mobtv_pane_ParamLimits

0xc4cd,	// (0x0009c3e9) bg_main_mobtv_pane

0x8525,	// (0x00098441) main_mobtv_info_pane

0x8530,	// (0x0009844c) main_mobtv_loading_pane_ParamLimits

0x8530,	// (0x0009844c) main_mobtv_loading_pane

0xc4db,	// (0x0009c3f7) main_mobtv_pg_channel_list_pane

0xc4e5,	// (0x0009c401) main_mobtv_pg_hdr_pane

0x853d,	// (0x00098459) main_mobtv_programe_curr_pane_ParamLimits

0x853d,	// (0x00098459) main_mobtv_programe_curr_pane

0x854a,	// (0x00098466) main_mobtv_programe_next_pane_ParamLimits

0x854a,	// (0x00098466) main_mobtv_programe_next_pane

0xc4ee,	// (0x0009c40a) popup_mobtv_noti_window

0xaaf9,	// (0x0009aa15) main_tv_pg_hdr_pane_g1

0xc4f8,	// (0x0009c414) main_tv_pg_hdr_pane_g2

0xc500,	// (0x0009c41c) main_tv_pg_hdr_pane_g3

0xc508,	// (0x0009c424) main_tv_pg_hdr_pane_g4

0xc510,	// (0x0009c42c) main_tv_pg_hdr_pane_g5

0xc51a,	// (0x0009c436) main_tv_pg_hdr_pane_g6

0xc524,	// (0x0009c440) main_tv_pg_hdr_pane_g7

0xc52e,	// (0x0009c44a) main_tv_pg_hdr_pane_g8

0xc538,	// (0x0009c454) main_tv_pg_hdr_pane_g9

0xc542,	// (0x0009c45e) main_tv_pg_hdr_pane_g10

0xc54c,	// (0x0009c468) main_tv_pg_hdr_pane_g11

0x000a,

0xfc16,	// (0x0009fb32) main_tv_pg_hdr_pane_g

0xc556,	// (0x0009c472) main_tv_pg_hdr_pane_t1

0xc564,	// (0x0009c480) main_tv_pg_hdr_pane_t2

0xc572,	// (0x0009c48e) main_tv_pg_hdr_pane_t3

0xc582,	// (0x0009c49e) main_tv_pg_hdr_pane_t4

0xc592,	// (0x0009c4ae) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2d,	// (0x0009fb49) main_tv_pg_hdr_pane_t

0xc5a2,	// (0x0009c4be) single_mobtv_pg_channel_pane_ParamLimits

0xc5a2,	// (0x0009c4be) single_mobtv_pg_channel_pane

0xc5b4,	// (0x0009c4d0) single_mobtv_pg_channel_table_pane

0xc5bd,	// (0x0009c4d9) single_mobtv_pg_channel_thumb_pane

0xc5c6,	// (0x0009c4e2) single_tv_pg_channel_pane_g1

0xc5cf,	// (0x0009c4eb) single_tv_pg_channel_pane_g2

0x0001,

0xfc38,	// (0x0009fb54) single_tv_pg_channel_pane_g

0xad29,	// (0x0009ac45) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xad29,	// (0x0009ac45) bg_single_mobtv_pg_channel_thumb_pane

0xc5d8,	// (0x0009c4f4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc5d8,	// (0x0009c4f4) single_mobtv_pg_channel_thumb_pane_g1

0xc5e6,	// (0x0009c502) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc5e6,	// (0x0009c502) single_mobtv_pg_channel_thumb_pane_g2

0xc5f2,	// (0x0009c50e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc5f2,	// (0x0009c50e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3d,	// (0x0009fb59) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3d,	// (0x0009fb59) single_mobtv_pg_channel_thumb_pane_g

0xc5fe,	// (0x0009c51a) single_mobtv_pg_channel_thumb_pane_t1

0xc60c,	// (0x0009c528) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc44,	// (0x0009fb60) single_mobtv_pg_channel_thumb_pane_t

0xaaf9,	// (0x0009aa15) bg_single_mobtv_pg_channel_table_pane_g1

0xaaf9,	// (0x0009aa15) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0009f617) bg_single_mobtv_pg_channel_table_pane_g

0xc61a,	// (0x0009c536) single_mobtv_pg_channel_table_pane_t1

0xc628,	// (0x0009c544) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc49,	// (0x0009fb65) single_mobtv_pg_channel_table_pane_t

0x855f,	// (0x0009847b) main_mobtv_info_pane_g1_ParamLimits

0x855f,	// (0x0009847b) main_mobtv_info_pane_g1

0x857d,	// (0x00098499) main_mobtv_info_pane_t1_ParamLimits

0x857d,	// (0x00098499) main_mobtv_info_pane_t1

0x85f5,	// (0x00098511) main_mobtv_info_pane_t2_ParamLimits

0x85f5,	// (0x00098511) main_mobtv_info_pane_t2

0x0002,

0xfc53,	// (0x0009fb6f) main_mobtv_info_pane_t_ParamLimits

0xfc53,	// (0x0009fb6f) main_mobtv_info_pane_t

0x8686,	// (0x000985a2) wait_bar_pane_cp05

0x8698,	// (0x000985b4) main_mobtv_loading_pane_g1_ParamLimits

0x8698,	// (0x000985b4) main_mobtv_loading_pane_g1

0x86a9,	// (0x000985c5) main_mobtv_loading_pane_g2_ParamLimits

0x86a9,	// (0x000985c5) main_mobtv_loading_pane_g2

0x86b5,	// (0x000985d1) main_mobtv_loading_pane_g3_ParamLimits

0x86b5,	// (0x000985d1) main_mobtv_loading_pane_g3

0x0002,

0xfc5a,	// (0x0009fb76) main_mobtv_loading_pane_g_ParamLimits

0xfc5a,	// (0x0009fb76) main_mobtv_loading_pane_g

0xc636,	// (0x0009c552) main_mobtv_loading_pane_t1_ParamLimits

0xc636,	// (0x0009c552) main_mobtv_loading_pane_t1

0xc64e,	// (0x0009c56a) main_mobtv_loading_pane_t2_ParamLimits

0xc64e,	// (0x0009c56a) main_mobtv_loading_pane_t2

0x0001,

0xfc61,	// (0x0009fb7d) main_mobtv_loading_pane_t_ParamLimits

0xfc61,	// (0x0009fb7d) main_mobtv_loading_pane_t

0x86c8,	// (0x000985e4) wait_bar_pane_cp06_ParamLimits

0x86c8,	// (0x000985e4) wait_bar_pane_cp06

0xc672,	// (0x0009c58e) main_mobtv_programe_curr_pane_t1

0xc680,	// (0x0009c59c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc66,	// (0x0009fb82) main_mobtv_programe_curr_pane_t

0xc68e,	// (0x0009c5aa) main_mobtv_programe_next_pane_t1

0xc69c,	// (0x0009c5b8) main_mobtv_programe_next_pane_t2

0xc6aa,	// (0x0009c5c6) main_mobtv_programe_next_pane_t3

0x0002,

0xfc6b,	// (0x0009fb87) main_mobtv_programe_next_pane_t

0x0992,	// (0x000908ae) bg_popup_mobtv_noti_window_pane

0xc6b8,	// (0x0009c5d4) popup_mobtv_noti_window_g1

0xc6c0,	// (0x0009c5dc) popup_mobtv_noti_window_t1

0xc6ce,	// (0x0009c5ea) popup_mobtv_noti_window_t2

0x0001,

0xfc72,	// (0x0009fb8e) popup_mobtv_noti_window_t

0xaaf9,	// (0x0009aa15) bg_popup_mobtv_noti_window_pane_g1

0x0992,	// (0x000908ae) sc_clock_pane

0x0992,	// (0x000908ae) main_fs_bigclock_pane

0x7e3e,	// (0x00097d5a) blid2_tripm_pane_t4_ParamLimits

0x7e3e,	// (0x00097d5a) blid2_tripm_pane_t4

0x86d7,	// (0x000985f3) sc_clock_pane_g1_ParamLimits

0x86d7,	// (0x000985f3) sc_clock_pane_g1

0x86e9,	// (0x00098605) sc_clock_pane_t1_ParamLimits

0x86e9,	// (0x00098605) sc_clock_pane_t1

0x870d,	// (0x00098629) sc_clock_pane_t2_ParamLimits

0x870d,	// (0x00098629) sc_clock_pane_t2

0x8725,	// (0x00098641) sc_clock_pane_t3_ParamLimits

0x8725,	// (0x00098641) sc_clock_pane_t3

0x0004,

0xfc77,	// (0x0009fb93) sc_clock_pane_t_ParamLimits

0xfc77,	// (0x0009fb93) sc_clock_pane_t

0x956b,	// (0x00099487) main_fs_bigclock_indicator_pane_ParamLimits

0x956b,	// (0x00099487) main_fs_bigclock_indicator_pane

0xacf9,	// (0x0009ac15) main_fs_bigclock_pane_g1_ParamLimits

0xacf9,	// (0x0009ac15) main_fs_bigclock_pane_g1

0x9577,	// (0x00099493) main_fs_bigclock_pane_t1_ParamLimits

0x9577,	// (0x00099493) main_fs_bigclock_pane_t1

0x9589,	// (0x000994a5) main_fs_bigclock_pane_t2_ParamLimits

0x9589,	// (0x000994a5) main_fs_bigclock_pane_t2

0x959d,	// (0x000994b9) main_fs_bigclock_pane_t3_ParamLimits

0x959d,	// (0x000994b9) main_fs_bigclock_pane_t3

0x0002,

0xfe7b,	// (0x0009fd97) main_fs_bigclock_pane_t_ParamLimits

0xfe7b,	// (0x0009fd97) main_fs_bigclock_pane_t

0xd332,	// (0x0009d24e) main_fs_bigclock_indicator_pane_g1

0xc390,	// (0x0009c2ac) ncim_query_content_pane_g2_ParamLimits

0xc390,	// (0x0009c2ac) ncim_query_content_pane_g2

0x0001,

0xfc04,	// (0x0009fb20) ncim_query_content_pane_g_ParamLimits

0xfc04,	// (0x0009fb20) ncim_query_content_pane_g

0x873c,	// (0x00098658) sc_clock_pane_t4_ParamLimits

0x873c,	// (0x00098658) sc_clock_pane_t4

0x0c12,	// (0x00090b2e) main_radioblah_pane

0xb6b7,	// (0x0009b5d3) cell_call4_button_pane_t1_copy1_ParamLimits

0xb6b7,	// (0x0009b5d3) cell_call4_button_pane_t1_copy1

0x8391,	// (0x000982ad) main_ncimui_pane_t1_ParamLimits

0x8391,	// (0x000982ad) main_ncimui_pane_t1

0x83ab,	// (0x000982c7) main_ncimui_pane_t2_ParamLimits

0x83ab,	// (0x000982c7) main_ncimui_pane_t2

0x0002,

0xfbfd,	// (0x0009fb19) main_ncimui_pane_t_ParamLimits

0xfbfd,	// (0x0009fb19) main_ncimui_pane_t

0xc81a,	// (0x0009c736) main_radioblah_anim_pane_ParamLimits

0xc81a,	// (0x0009c736) main_radioblah_anim_pane

0xc82b,	// (0x0009c747) main_radioblah_info_pane_ParamLimits

0xc82b,	// (0x0009c747) main_radioblah_info_pane

0xc83f,	// (0x0009c75b) main_radioblah_pane_t1_ParamLimits

0xc83f,	// (0x0009c75b) main_radioblah_pane_t1

0xc85b,	// (0x0009c777) main_radioblah_pane_t2_ParamLimits

0xc85b,	// (0x0009c777) main_radioblah_pane_t2

0x0003,

0xfc98,	// (0x0009fbb4) main_radioblah_pane_t_ParamLimits

0xfc98,	// (0x0009fbb4) main_radioblah_pane_t

0x87ec,	// (0x00098708) main_radioblah_rocker_ctrl_pane_ParamLimits

0x87ec,	// (0x00098708) main_radioblah_rocker_ctrl_pane

0xc8a3,	// (0x0009c7bf) main_radioblah_info_pane_t1_ParamLimits

0xc8a3,	// (0x0009c7bf) main_radioblah_info_pane_t1

0x8844,	// (0x00098760) main_radioblah_info_pane_t2_ParamLimits

0x8844,	// (0x00098760) main_radioblah_info_pane_t2

0x0003,

0xfca1,	// (0x0009fbbd) main_radioblah_info_pane_t_ParamLimits

0xfca1,	// (0x0009fbbd) main_radioblah_info_pane_t

0xaaf9,	// (0x0009aa15) main_radioblah_rocker_ctrl_pane_g1

0x88f4,	// (0x00098810) main_radioblah_rocker_ctrl_pane_g2

0x88fc,	// (0x00098818) main_radioblah_rocker_ctrl_pane_g3

0x8904,	// (0x00098820) main_radioblah_rocker_ctrl_pane_g4

0x890c,	// (0x00098828) main_radioblah_rocker_ctrl_pane_g5

0x8914,	// (0x00098830) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaa,	// (0x0009fbc6) main_radioblah_rocker_ctrl_pane_g

0x80ea,	// (0x00098006) main_cset_text2_pane_t1_copy1_ParamLimits

0xdc41,	// (0x0009db5d) cam4_image_uncrop_qvga_pane

0xdca5,	// (0x0009dbc1) vid4_image_uncrop_qcif_pane

0xdd71,	// (0x0009dc8d) cam6_image_uncrop_qvga_pane_ParamLimits

0xdd71,	// (0x0009dc8d) cam6_image_uncrop_qvga_pane

0xbfcb,	// (0x0009bee7) vid6_image_uncrop_qcif_pane_ParamLimits

0xbfcb,	// (0x0009bee7) vid6_image_uncrop_qcif_pane

0x0992,	// (0x000908ae) bg_popup_preview_window_pane_cp03

0xc342,	// (0x0009c25e) list_cset_text2_pane

0xc34a,	// (0x0009c266) main_cset6_text2_pane_g1

0xc352,	// (0x0009c26e) main_cset6_text2_pane_t1

0x891c,	// (0x00098838) list_cset_text2_pane_t1_ParamLimits

0x891c,	// (0x00098838) list_cset_text2_pane_t1

0x0c12,	// (0x00090b2e) main_radioblah_pane_ParamLimits

0x8672,	// (0x0009858e) main_mobtv_info_pane_t3_ParamLimits

0x8672,	// (0x0009858e) main_mobtv_info_pane_t3

0x87da,	// (0x000986f6) main_radioblah_pane_g1

0x8814,	// (0x00098730) main_radioblah_info_pane_g1

0x8899,	// (0x000987b5) main_radioblah_info_pane_t3_ParamLimits

0x8899,	// (0x000987b5) main_radioblah_info_pane_t3

0x2794,	// (0x000926b0) highlight_cell_cale_month_pane_ParamLimits

0x2794,	// (0x000926b0) highlight_cell_cale_month_pane

0x0992,	// (0x000908ae) main_phob_fisheye_pane

0xae17,	// (0x0009ad33) scroll_pane_cp0031_ParamLimits

0xae17,	// (0x0009ad33) scroll_pane_cp0031

0xc0dd,	// (0x0009bff9) wait_bar_pane_cp08_ParamLimits

0x8173,	// (0x0009808f) cset_list_set_pane_copy1_ParamLimits

0xc8dd,	// (0x0009c7f9) highlight_cell_cale_month_pane_g1

0x8936,	// (0x00098852) highlight_cell_cale_month_pane_t1

0xbd12,	// (0x0009bc2e) list_gen_pane_cp01

0xb8bb,	// (0x0009b7d7) scroll_pane_01

0x8944,	// (0x00098860) list_single_double_fisheye_pane

0x894d,	// (0x00098869) list_double_fisheye_pane_g1_ParamLimits

0x894d,	// (0x00098869) list_double_fisheye_pane_g1

0x8959,	// (0x00098875) list_double_fisheye_pane_g2_ParamLimits

0x8959,	// (0x00098875) list_double_fisheye_pane_g2

0x896d,	// (0x00098889) list_double_fisheye_pane_g3_ParamLimits

0x896d,	// (0x00098889) list_double_fisheye_pane_g3

0x0004,

0xfcb7,	// (0x0009fbd3) list_double_fisheye_pane_g_ParamLimits

0xfcb7,	// (0x0009fbd3) list_double_fisheye_pane_g

0x8996,	// (0x000988b2) list_double_fisheye_pane_t1_ParamLimits

0x8996,	// (0x000988b2) list_double_fisheye_pane_t1

0x89b1,	// (0x000988cd) list_double_fisheye_pane_t2_ParamLimits

0x89b1,	// (0x000988cd) list_double_fisheye_pane_t2

0x0001,

0xfcc2,	// (0x0009fbde) list_double_fisheye_pane_t_ParamLimits

0xfcc2,	// (0x0009fbde) list_double_fisheye_pane_t

0x0992,	// (0x000908ae) main_call5_pane

0x8767,	// (0x00098683) sc_swipe_pane_ParamLimits

0x8767,	// (0x00098683) sc_swipe_pane

0x89e6,	// (0x00098902) call5_image_pane_ParamLimits

0x89e6,	// (0x00098902) call5_image_pane

0x8a03,	// (0x0009891f) call5_swipe_1_pane_ParamLimits

0x8a03,	// (0x0009891f) call5_swipe_1_pane

0x8a16,	// (0x00098932) call5_swipe_2_pane_ParamLimits

0x8a16,	// (0x00098932) call5_swipe_2_pane

0x8a43,	// (0x0009895f) popup_call5_audio_first_window_ParamLimits

0x8a43,	// (0x0009895f) popup_call5_audio_first_window

0xad29,	// (0x0009ac45) call5_swipe_1_pane_g1_ParamLimits

0xad29,	// (0x0009ac45) call5_swipe_1_pane_g1

0xc8e5,	// (0x0009c801) call5_swipe_1_pane_g2_ParamLimits

0xc8e5,	// (0x0009c801) call5_swipe_1_pane_g2

0x0001,

0xfcc7,	// (0x0009fbe3) call5_swipe_1_pane_g_ParamLimits

0xfcc7,	// (0x0009fbe3) call5_swipe_1_pane_g

0xc8f1,	// (0x0009c80d) call5_swipe_1_pane_t1_ParamLimits

0xc8f1,	// (0x0009c80d) call5_swipe_1_pane_t1

0xad29,	// (0x0009ac45) call5_swipe_2_pane_g1_ParamLimits

0xad29,	// (0x0009ac45) call5_swipe_2_pane_g1

0xc906,	// (0x0009c822) call5_swipe_2_pane_g2_ParamLimits

0xc906,	// (0x0009c822) call5_swipe_2_pane_g2

0x0001,

0xfccc,	// (0x0009fbe8) call5_swipe_2_pane_g_ParamLimits

0xfccc,	// (0x0009fbe8) call5_swipe_2_pane_g

0xc912,	// (0x0009c82e) call5_swipe_2_pane_t1_ParamLimits

0xc912,	// (0x0009c82e) call5_swipe_2_pane_t1

0xc927,	// (0x0009c843) sc_swipe_pane_g1_ParamLimits

0xc927,	// (0x0009c843) sc_swipe_pane_g1

0xc934,	// (0x0009c850) sc_swipe_pane_g2_ParamLimits

0xc934,	// (0x0009c850) sc_swipe_pane_g2

0x0001,

0xfcd1,	// (0x0009fbed) sc_swipe_pane_g_ParamLimits

0xfcd1,	// (0x0009fbed) sc_swipe_pane_g

0xc940,	// (0x0009c85c) sc_swipe_pane_t1_ParamLimits

0xc940,	// (0x0009c85c) sc_swipe_pane_t1

0x0992,	// (0x000908ae) main_cmail_launcher_pane

0x8a58,	// (0x00098974) aid_size_cell_cmail_l_ParamLimits

0x8a58,	// (0x00098974) aid_size_cell_cmail_l

0x8a72,	// (0x0009898e) grid_cmail_l_pane_ParamLimits

0x8a72,	// (0x0009898e) grid_cmail_l_pane

0x8a8d,	// (0x000989a9) cell_cmail_l_pane_ParamLimits

0x8a8d,	// (0x000989a9) cell_cmail_l_pane

0x8ab5,	// (0x000989d1) cell_cmail_l_pane_g1_ParamLimits

0x8ab5,	// (0x000989d1) cell_cmail_l_pane_g1

0x8ac1,	// (0x000989dd) cell_cmail_l_pane_t1_ParamLimits

0x8ac1,	// (0x000989dd) cell_cmail_l_pane_t1

0xc955,	// (0x0009c871) cell_cmail_l_pane_t2_ParamLimits

0xc955,	// (0x0009c871) cell_cmail_l_pane_t2

0x0001,

0xfcd6,	// (0x0009fbf2) cell_cmail_l_pane_t_ParamLimits

0xfcd6,	// (0x0009fbf2) cell_cmail_l_pane_t

0x0c12,	// (0x00090b2e) grid_highlight_pane_cp018_ParamLimits

0x0c12,	// (0x00090b2e) grid_highlight_pane_cp018

0x0ac7,	// (0x000909e3) main2_pane_ParamLimits

0x0ac7,	// (0x000909e3) main2_pane

0xa55b,	// (0x0009a477) popup_sp_fs_action_menu_bg_pane_g1

0xa563,	// (0x0009a47f) popup_sp_fs_action_menu_bg_pane_g2

0xa56b,	// (0x0009a487) popup_sp_fs_action_menu_bg_pane_g3

0xa573,	// (0x0009a48f) popup_sp_fs_action_menu_bg_pane_g4

0xa57b,	// (0x0009a497) popup_sp_fs_action_menu_bg_pane_g5

0xa583,	// (0x0009a49f) popup_sp_fs_action_menu_bg_pane_g6

0xa58b,	// (0x0009a4a7) popup_sp_fs_action_menu_bg_pane_g7

0xa593,	// (0x0009a4af) popup_sp_fs_action_menu_bg_pane_g8

0xa59b,	// (0x0009a4b7) popup_sp_fs_action_menu_bg_pane_g9

0xa5a3,	// (0x0009a4bf) popup_sp_fs_action_menu_bg_pane_g10

0xa5a3,	// (0x0009a4bf) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x0009f0c3) popup_sp_fs_action_menu_bg_pane_g

0x1a1c,	// (0x00091938) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1a1c,	// (0x00091938) list_medium_line_x2_t3_g3_g1

0x1a28,	// (0x00091944) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1a28,	// (0x00091944) list_medium_line_x2_t3_g3_g2

0x1a34,	// (0x00091950) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1a34,	// (0x00091950) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0009f173) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0009f173) list_medium_line_x2_t3_g3_g

0x1a40,	// (0x0009195c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1a40,	// (0x0009195c) list_medium_line_x2_t3_g3_t1

0x1a55,	// (0x00091971) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1a55,	// (0x00091971) list_medium_line_x2_t3_g3_t2

0x1a69,	// (0x00091985) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1a69,	// (0x00091985) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x0009f17a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x0009f17a) list_medium_line_x2_t3_g3_t

0x1a1c,	// (0x00091938) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1a1c,	// (0x00091938) list_medium_line_x2_t3_g2_g1

0x1a34,	// (0x00091950) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1a34,	// (0x00091950) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x0009f181) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x0009f181) list_medium_line_x2_t3_g2_g

0x1a7e,	// (0x0009199a) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1a7e,	// (0x0009199a) list_medium_line_x2_t3_g2_t1

0x1a94,	// (0x000919b0) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1a94,	// (0x000919b0) list_medium_line_x2_t3_g2_t2

0x1aa6,	// (0x000919c2) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1aa6,	// (0x000919c2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0009f186) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0009f186) list_medium_line_x2_t3_g2_t

0x1a1c,	// (0x00091938) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1a1c,	// (0x00091938) list_medium_line_x2_t4_g4_g1

0x1ac4,	// (0x000919e0) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1ac4,	// (0x000919e0) list_medium_line_x2_t4_g4_g2

0x1a28,	// (0x00091944) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1a28,	// (0x00091944) list_medium_line_x2_t4_g4_g3

0x1ad0,	// (0x000919ec) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ad0,	// (0x000919ec) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x0009f18d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x0009f18d) list_medium_line_x2_t4_g4_g

0x1adc,	// (0x000919f8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1adc,	// (0x000919f8) list_medium_line_x2_t4_g4_t1

0x1af6,	// (0x00091a12) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1af6,	// (0x00091a12) list_medium_line_x2_t4_g4_t2

0x1b0c,	// (0x00091a28) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1b0c,	// (0x00091a28) list_medium_line_x2_t4_g4_t3

0x1b21,	// (0x00091a3d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1b21,	// (0x00091a3d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x0009f196) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x0009f196) list_medium_line_x2_t4_g4_t

0x1a1c,	// (0x00091938) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1a1c,	// (0x00091938) list_medium_line_x2_t2_g4_g1

0x1ac4,	// (0x000919e0) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1ac4,	// (0x000919e0) list_medium_line_x2_t2_g4_g2

0x1a28,	// (0x00091944) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1a28,	// (0x00091944) list_medium_line_x2_t2_g4_g3

0x1a34,	// (0x00091950) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1a34,	// (0x00091950) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x0009f1fd) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x0009f1fd) list_medium_line_x2_t2_g4_g

0x27b2,	// (0x000926ce) list_medium_line_x2_t2_g4_t1_ParamLimits

0x27b2,	// (0x000926ce) list_medium_line_x2_t2_g4_t1

0x1a69,	// (0x00091985) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1a69,	// (0x00091985) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0009f206) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0009f206) list_medium_line_x2_t2_g4_t

0x1a1c,	// (0x00091938) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1a1c,	// (0x00091938) list_medium_line_x2_t2_g3_g1

0x1a28,	// (0x00091944) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1a28,	// (0x00091944) list_medium_line_x2_t2_g3_g2

0x1a34,	// (0x00091950) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1a34,	// (0x00091950) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0009f173) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0009f173) list_medium_line_x2_t2_g3_g

0x27c7,	// (0x000926e3) list_medium_line_x2_t2_g3_t1_ParamLimits

0x27c7,	// (0x000926e3) list_medium_line_x2_t2_g3_t1

0x1a69,	// (0x00091985) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1a69,	// (0x00091985) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x0009f20b) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x0009f20b) list_medium_line_x2_t2_g3_t

0x2997,	// (0x000928b3) main_sp_fs_list_pane_ParamLimits

0x2997,	// (0x000928b3) main_sp_fs_list_pane

0x29a3,	// (0x000928bf) sp_fs_scroll_pane_ParamLimits

0x29a3,	// (0x000928bf) sp_fs_scroll_pane

0x29af,	// (0x000928cb) list_medium_line_x2_t3_t1

0x29bf,	// (0x000928db) list_medium_line_x2_t3_t2

0x29cd,	// (0x000928e9) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0009f256) list_medium_line_x2_t3_t

0x29db,	// (0x000928f7) list_medium_line_x3_t4_t1

0x29eb,	// (0x00092907) list_medium_line_x3_t4_t2

0x29f9,	// (0x00092915) list_medium_line_x3_t4_t3

0x29cd,	// (0x000928e9) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x0009f25d) list_medium_line_x3_t4_t

0x2a07,	// (0x00092923) list_medium_line_x4_t5_t1

0x2a17,	// (0x00092933) list_medium_line_x4_t5_t2

0x29f9,	// (0x00092915) list_medium_line_x4_t5_t3

0x2a25,	// (0x00092941) list_medium_line_x4_t5_t4

0x29cd,	// (0x000928e9) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0009f266) list_medium_line_x4_t5_t

0x1a1c,	// (0x00091938) list_medium_line_t4_g4_g1_ParamLimits

0x1a1c,	// (0x00091938) list_medium_line_t4_g4_g1

0x1ad0,	// (0x000919ec) list_medium_line_t4_g4_g2_ParamLimits

0x1ad0,	// (0x000919ec) list_medium_line_t4_g4_g2

0x2a33,	// (0x0009294f) list_medium_line_t4_g4_g3_ParamLimits

0x2a33,	// (0x0009294f) list_medium_line_t4_g4_g3

0x1a34,	// (0x00091950) list_medium_line_t4_g4_g4_ParamLimits

0x1a34,	// (0x00091950) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x0009f271) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x0009f271) list_medium_line_t4_g4_g

0x2a3f,	// (0x0009295b) list_medium_line_t4_g4_t1_ParamLimits

0x2a3f,	// (0x0009295b) list_medium_line_t4_g4_t1

0x2a54,	// (0x00092970) list_medium_line_t4_g4_t2_ParamLimits

0x2a54,	// (0x00092970) list_medium_line_t4_g4_t2

0x2a6a,	// (0x00092986) list_medium_line_t4_g4_t3_ParamLimits

0x2a6a,	// (0x00092986) list_medium_line_t4_g4_t3

0x1a69,	// (0x00091985) list_medium_line_t4_g4_t4_ParamLimits

0x1a69,	// (0x00091985) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x0009f27a) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x0009f27a) list_medium_line_t4_g4_t

0x2b46,	// (0x00092a62) chi_dic_find_pane_g1

0x42b3,	// (0x000941cf) main_tport_pane

0xb9c7,	// (0x0009b8e3) list_medium_line_plain_t1

0xb9dd,	// (0x0009b8f9) list_medium_line_t2_g2_g1_ParamLimits

0xb9dd,	// (0x0009b8f9) list_medium_line_t2_g2_g1

0xb9e9,	// (0x0009b905) list_medium_line_t2_g2_g2_ParamLimits

0xb9e9,	// (0x0009b905) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0009f92f) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0009f92f) list_medium_line_t2_g2_g

0x757b,	// (0x00097497) list_medium_line_t2_g2_t1_ParamLimits

0x757b,	// (0x00097497) list_medium_line_t2_g2_t1

0x7592,	// (0x000974ae) list_medium_line_t2_g2_t2_ParamLimits

0x7592,	// (0x000974ae) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0009f934) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0009f934) list_medium_line_t2_g2_t

0xbd1b,	// (0x0009bc37) aid_sp_fs_list_icon_a_sm

0xbd23,	// (0x0009bc3f) aid_sp_fs_list_icon_d

0xbd2b,	// (0x0009bc47) aid_sp_fs_text_primary

0xbd34,	// (0x0009bc50) aid_sp_fs_text_secondary

0xbd3d,	// (0x0009bc59) list_medium_line

0xbd3d,	// (0x0009bc59) list_medium_line_g2

0xbd3d,	// (0x0009bc59) list_medium_line_g3

0xbd3d,	// (0x0009bc59) list_medium_line_plain

0xbd3d,	// (0x0009bc59) list_medium_line_plain_t2

0xbd3d,	// (0x0009bc59) list_medium_line_plain_t3

0xbd3d,	// (0x0009bc59) list_medium_line_right_icon

0xbd3d,	// (0x0009bc59) list_medium_line_right_iconx2

0xbd3d,	// (0x0009bc59) list_medium_line_t2

0xbd3d,	// (0x0009bc59) list_medium_line_t2_g2

0xbd3d,	// (0x0009bc59) list_medium_line_t2_g3

0xbd3d,	// (0x0009bc59) list_medium_line_t2_right_icon

0xbd3d,	// (0x0009bc59) list_medium_line_t2_right_iconx2

0xbd3d,	// (0x0009bc59) list_medium_line_t3

0xbd3d,	// (0x0009bc59) list_medium_line_t3_g2

0xbd3d,	// (0x0009bc59) list_medium_line_t3_g3

0xbd3d,	// (0x0009bc59) list_medium_line_t3_right_iconx2

0xbd46,	// (0x0009bc62) list_medium_line_t4_g4

0xbd4f,	// (0x0009bc6b) list_medium_line_x2

0xbd4f,	// (0x0009bc6b) list_medium_line_x2_t2_g2

0xbd4f,	// (0x0009bc6b) list_medium_line_x2_t2_g3

0xbd4f,	// (0x0009bc6b) list_medium_line_x2_t2_g4

0xbd4f,	// (0x0009bc6b) list_medium_line_x2_t3

0xbd4f,	// (0x0009bc6b) list_medium_line_x2_t3_g2

0xbd4f,	// (0x0009bc6b) list_medium_line_x2_t3_g3

0xbd4f,	// (0x0009bc6b) list_medium_line_x2_t3_g4

0xbd4f,	// (0x0009bc6b) list_medium_line_x2_t4_g2

0xbd4f,	// (0x0009bc6b) list_medium_line_x2_t4_g4

0xbd58,	// (0x0009bc74) list_medium_line_x3

0xbd58,	// (0x0009bc74) list_medium_line_x3_t4

0xbd58,	// (0x0009bc74) list_medium_line_x3_t4_g4

0xbd46,	// (0x0009bc62) list_medium_line_x4_t4

0xbd46,	// (0x0009bc62) list_medium_line_x4_t4_g7

0xbd46,	// (0x0009bc62) list_medium_line_x4_t5

0xbd61,	// (0x0009bc7d) list_single_fs_dyc_pane_ParamLimits

0xbd61,	// (0x0009bc7d) list_single_fs_dyc_pane

0x1a1c,	// (0x00091938) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1a1c,	// (0x00091938) list_medium_line_x4_t4_g7_g1

0xc271,	// (0x0009c18d) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc271,	// (0x0009c18d) list_medium_line_x4_t4_g7_g2

0xc27d,	// (0x0009c199) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc27d,	// (0x0009c199) list_medium_line_x4_t4_g7_g3

0xc28c,	// (0x0009c1a8) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc28c,	// (0x0009c1a8) list_medium_line_x4_t4_g7_g4

0xc298,	// (0x0009c1b4) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc298,	// (0x0009c1b4) list_medium_line_x4_t4_g7_g5

0xc2a7,	// (0x0009c1c3) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc2a7,	// (0x0009c1c3) list_medium_line_x4_t4_g7_g6

0xc2b6,	// (0x0009c1d2) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc2b6,	// (0x0009c1d2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0009faff) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0009faff) list_medium_line_x4_t4_g7_g

0xc2c2,	// (0x0009c1de) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc2c2,	// (0x0009c1de) list_medium_line_x4_t4_g7_t1

0xc2d7,	// (0x0009c1f3) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc2d7,	// (0x0009c1f3) list_medium_line_x4_t4_g7_t2

0xc2ec,	// (0x0009c208) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc2ec,	// (0x0009c208) list_medium_line_x4_t4_g7_t3

0xc301,	// (0x0009c21d) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc301,	// (0x0009c21d) list_medium_line_x4_t4_g7_t4

0xc313,	// (0x0009c22f) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc313,	// (0x0009c22f) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0009fb0e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0009fb0e) list_medium_line_x4_t4_g7_t

0xc325,	// (0x0009c241) list_single_dyc_row_pane_ParamLimits

0xc325,	// (0x0009c241) list_single_dyc_row_pane

0x89d3,	// (0x000988ef) call5_gesture_pane_ParamLimits

0x89d3,	// (0x000988ef) call5_gesture_pane

0x8a29,	// (0x00098945) call5_windows_pane_ParamLimits

0x8a29,	// (0x00098945) call5_windows_pane

0x8ad7,	// (0x000989f3) call5_swipe_1_pane_cp_ParamLimits

0x8ad7,	// (0x000989f3) call5_swipe_1_pane_cp

0x8ae3,	// (0x000989ff) call5_swipe_2_pane_cp_ParamLimits

0x8ae3,	// (0x000989ff) call5_swipe_2_pane_cp

0xe1a5,	// (0x0009e0c1) call5_image_pane_cp

0x8aef,	// (0x00098a0b) popup_call5_audio_first_window_cp_ParamLimits

0x8aef,	// (0x00098a0b) popup_call5_audio_first_window_cp

0xc927,	// (0x0009c843) call5_swipe_1_pane_g1_cp_ParamLimits

0xc927,	// (0x0009c843) call5_swipe_1_pane_g1_cp

0xc967,	// (0x0009c883) call5_swipe_1_pane_g2_cp

0xc940,	// (0x0009c85c) call5_swipe_1_pane_t1_cp_ParamLimits

0xc940,	// (0x0009c85c) call5_swipe_1_pane_t1_cp

0xc927,	// (0x0009c843) call5_swipe_2_pane_g1_cp_ParamLimits

0xc927,	// (0x0009c843) call5_swipe_2_pane_g1_cp

0xc96f,	// (0x0009c88b) call5_swipe_2_pane_g2_cp

0xc977,	// (0x0009c893) call5_swipe_2_pane_t1_cp_ParamLimits

0xc977,	// (0x0009c893) call5_swipe_2_pane_t1_cp

0x0c12,	// (0x00090b2e) main_sp_fs_email_pane

0xc98c,	// (0x0009c8a8) main_sp_fs_listscroll_pane_te

0xc995,	// (0x0009c8b1) popup_sp_fs_action_menu_pane_ParamLimits

0xc995,	// (0x0009c8b1) popup_sp_fs_action_menu_pane

0xaaf9,	// (0x0009aa15) bg_sp_fs_ctrlbar_pane_g1

0xc9db,	// (0x0009c8f7) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc9e4,	// (0x0009c900) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc9ed,	// (0x0009c909) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xaaf9,	// (0x0009aa15) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcdb,	// (0x0009fbf7) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xa8d8,	// (0x0009a7f4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xa8d8,	// (0x0009a7f4) bg_sp_fs_ctrlbar_ddmenu_pane

0xc9f6,	// (0x0009c912) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc9f6,	// (0x0009c912) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xca02,	// (0x0009c91e) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xca02,	// (0x0009c91e) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce4,	// (0x0009fc00) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce4,	// (0x0009fc00) main_sp_fs_ctrlbar_ddmenu_pane_g

0xca0e,	// (0x0009c92a) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xca0e,	// (0x0009c92a) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xca28,	// (0x0009c944) list_medium_line_t2_right_icon_g1

0x8afd,	// (0x00098a19) list_medium_line_t2_right_icon_t1

0x8b0d,	// (0x00098a29) list_medium_line_t2_right_icon_t2

0x0001,

0xfce9,	// (0x0009fc05) list_medium_line_t2_right_icon_t

0x4291,	// (0x000941ad) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4291,	// (0x000941ad) bg_sp_fs_ctrlbar_pane

0x8b67,	// (0x00098a83) main_sp_fs_ctrlbar_button_pane_cp01

0x8b71,	// (0x00098a8d) main_sp_fs_ctrlbar_ddmenu_pane

0xca6a,	// (0x0009c986) main_sp_fs_ctrlbar_pane_g1

0xca76,	// (0x0009c992) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcee,	// (0x0009fc0a) main_sp_fs_ctrlbar_pane_g

0xca82,	// (0x0009c99e) main_sp_fs_ctrlbar_pane_t1

0x8b7b,	// (0x00098a97) main_sp_fs_ctrlbar_pane

0x8b9f,	// (0x00098abb) main_sp_fs_listscroll_pane_te_cp01

0x8bbf,	// (0x00098adb) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8bbf,	// (0x00098adb) popup_sp_fs_action_menu_pane_cp01

0x0c12,	// (0x00090b2e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0c12,	// (0x00090b2e) bg_sp_fs_highlight_list_pane_cp01

0xcaa7,	// (0x0009c9c3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcaa7,	// (0x0009c9c3) sp_fs_action_menu_list_gene_pane_g1

0xcab6,	// (0x0009c9d2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xcab6,	// (0x0009c9d2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x0009fc14) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x0009fc14) sp_fs_action_menu_list_gene_pane_g

0xcac3,	// (0x0009c9df) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcac3,	// (0x0009c9df) sp_fs_action_menu_list_gene_pane_t1

0xcadb,	// (0x0009c9f7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcadb,	// (0x0009c9f7) sp_fs_action_menu_list_gene_pane

0xcafe,	// (0x0009ca1a) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcafe,	// (0x0009ca1a) popup_sp_fs_action_menu_bg_pane

0xcb0c,	// (0x0009ca28) sp_fs_action_menu_list_pane_ParamLimits

0xcb0c,	// (0x0009ca28) sp_fs_action_menu_list_pane

0xcb30,	// (0x0009ca4c) sp_fs_scroll_pane_cp01_ParamLimits

0xcb30,	// (0x0009ca4c) sp_fs_scroll_pane_cp01

0x8bdb,	// (0x00098af7) list_medium_line_plain_t2_t1

0x8beb,	// (0x00098b07) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x0009fc19) list_medium_line_plain_t2_t

0x8bfb,	// (0x00098b17) list_medium_line_plain_t3_t1

0x8c0b,	// (0x00098b27) list_medium_line_plain_t3_t2

0x8c19,	// (0x00098b35) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x0009fc1e) list_medium_line_plain_t3_t

0x1a1c,	// (0x00091938) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1a1c,	// (0x00091938) list_medium_line_x2_t2_g2_g1

0x1a34,	// (0x00091950) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1a34,	// (0x00091950) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x0009f181) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x0009f181) list_medium_line_x2_t2_g2_g

0x2a3f,	// (0x0009295b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2a3f,	// (0x0009295b) list_medium_line_x2_t2_g2_t1

0x1a69,	// (0x00091985) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1a69,	// (0x00091985) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x0009fc25) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x0009fc25) list_medium_line_x2_t2_g2_t

0x1a1c,	// (0x00091938) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1a1c,	// (0x00091938) list_medium_line_x2_t4_g2_g1

0xcb56,	// (0x0009ca72) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcb56,	// (0x0009ca72) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0e,	// (0x0009fc2a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0e,	// (0x0009fc2a) list_medium_line_x2_t4_g2_g

0x8c27,	// (0x00098b43) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8c27,	// (0x00098b43) list_medium_line_x2_t4_g2_t1

0x8c41,	// (0x00098b5d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8c41,	// (0x00098b5d) list_medium_line_x2_t4_g2_t2

0x8c57,	// (0x00098b73) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8c57,	// (0x00098b73) list_medium_line_x2_t4_g2_t3

0x1a69,	// (0x00091985) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1a69,	// (0x00091985) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0009fc2f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0009fc2f) list_medium_line_x2_t4_g2_t

0xcb68,	// (0x0009ca84) list_medium_line_t3_right_iconx2_g1

0xca28,	// (0x0009c944) list_medium_line_t3_right_iconx2_g2

0x8c6c,	// (0x00098b88) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0009fc38) list_medium_line_t3_right_iconx2_g

0x8c76,	// (0x00098b92) list_medium_line_t3_right_iconx2_t1

0x8c86,	// (0x00098ba2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0009fc3f) list_medium_line_t3_right_iconx2_t

0x1a1c,	// (0x00091938) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1a1c,	// (0x00091938) list_medium_line_x3_t4_g4_g1

0x1a28,	// (0x00091944) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1a28,	// (0x00091944) list_medium_line_x3_t4_g4_g2

0x1ad0,	// (0x000919ec) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1ad0,	// (0x000919ec) list_medium_line_x3_t4_g4_g3

0xcb70,	// (0x0009ca8c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcb70,	// (0x0009ca8c) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x0009fc44) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x0009fc44) list_medium_line_x3_t4_g4_g

0x8c94,	// (0x00098bb0) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8c94,	// (0x00098bb0) list_medium_line_x3_t4_g4_t1

0x8cab,	// (0x00098bc7) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8cab,	// (0x00098bc7) list_medium_line_x3_t4_g4_t2

0xcb7c,	// (0x0009ca98) list_medium_line_x3_t4_g4_t3_ParamLimits

0xcb7c,	// (0x0009ca98) list_medium_line_x3_t4_g4_t3

0xcb91,	// (0x0009caad) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcb91,	// (0x0009caad) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0009fc4d) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0009fc4d) list_medium_line_x3_t4_g4_t

0x8cc6,	// (0x00098be2) list_single_dyc_row_text_pane_t1_ParamLimits

0x8cc6,	// (0x00098be2) list_single_dyc_row_text_pane_t1

0x8d0f,	// (0x00098c2b) list_single_dyc_row_text_pane_t2_ParamLimits

0x8d0f,	// (0x00098c2b) list_single_dyc_row_text_pane_t2

0xcbae,	// (0x0009caca) list_single_dyc_row_text_pane_t3_ParamLimits

0xcbae,	// (0x0009caca) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3a,	// (0x0009fc56) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0009fc56) list_single_dyc_row_text_pane_t

0xcbc0,	// (0x0009cadc) list_single_dyc_row_pane_g1_ParamLimits

0xcbc0,	// (0x0009cadc) list_single_dyc_row_pane_g1

0xcbcc,	// (0x0009cae8) list_single_dyc_row_pane_g2_ParamLimits

0xcbcc,	// (0x0009cae8) list_single_dyc_row_pane_g2

0xcbd8,	// (0x0009caf4) list_single_dyc_row_pane_g3_ParamLimits

0xcbd8,	// (0x0009caf4) list_single_dyc_row_pane_g3

0xcbe4,	// (0x0009cb00) list_single_dyc_row_pane_g4_ParamLimits

0xcbe4,	// (0x0009cb00) list_single_dyc_row_pane_g4

0x0003,

0xfd41,	// (0x0009fc5d) list_single_dyc_row_pane_g_ParamLimits

0xfd41,	// (0x0009fc5d) list_single_dyc_row_pane_g

0xcbf0,	// (0x0009cb0c) list_single_dyc_row_text_pane_ParamLimits

0xcbf0,	// (0x0009cb0c) list_single_dyc_row_text_pane

0x0992,	// (0x000908ae) bg_sp_fs_scroll_pane

0xcc0f,	// (0x0009cb2b) thumb_sp_fs_scroll_pane

0xb9dd,	// (0x0009b8f9) list_medium_line_g1_ParamLimits

0xb9dd,	// (0x0009b8f9) list_medium_line_g1

0xcc18,	// (0x0009cb34) list_medium_line_t1_ParamLimits

0xcc18,	// (0x0009cb34) list_medium_line_t1

0x1a1c,	// (0x00091938) list_medium_line_x2_g1_ParamLimits

0x1a1c,	// (0x00091938) list_medium_line_x2_g1

0x1a28,	// (0x00091944) list_medium_line_x2_g2_ParamLimits

0x1a28,	// (0x00091944) list_medium_line_x2_g2

0x0001,

0xfd4a,	// (0x0009fc66) list_medium_line_x2_g_ParamLimits

0xfd4a,	// (0x0009fc66) list_medium_line_x2_g

0xcc2d,	// (0x0009cb49) list_medium_line_x2_t1_ParamLimits

0xcc2d,	// (0x0009cb49) list_medium_line_x2_t1

0x1a1c,	// (0x00091938) list_medium_line_x3_g1_ParamLimits

0x1a1c,	// (0x00091938) list_medium_line_x3_g1

0x1a28,	// (0x00091944) list_medium_line_x3_g2_ParamLimits

0x1a28,	// (0x00091944) list_medium_line_x3_g2

0x0001,

0xfd4a,	// (0x0009fc66) list_medium_line_x3_g_ParamLimits

0xfd4a,	// (0x0009fc66) list_medium_line_x3_g

0xcc2d,	// (0x0009cb49) list_medium_line_x3_t1_ParamLimits

0xcc2d,	// (0x0009cb49) list_medium_line_x3_t1

0xcc43,	// (0x0009cb5f) thumb_sp_fs_scroll_pane_g1

0xcc4c,	// (0x0009cb68) thumb_sp_fs_scroll_pane_g2

0xcc55,	// (0x0009cb71) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x0009fc6b) thumb_sp_fs_scroll_pane_g

0xcc43,	// (0x0009cb5f) bg_sp_fs_scroll_pane_g1

0xcc4c,	// (0x0009cb68) bg_sp_fs_scroll_pane_g2

0xcc55,	// (0x0009cb71) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x0009fc6b) bg_sp_fs_scroll_pane_g

0x1a1c,	// (0x00091938) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1a1c,	// (0x00091938) list_medium_line_x2_t3_g4_g1

0x1ac4,	// (0x000919e0) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1ac4,	// (0x000919e0) list_medium_line_x2_t3_g4_g2

0x1a28,	// (0x00091944) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1a28,	// (0x00091944) list_medium_line_x2_t3_g4_g3

0x1a34,	// (0x00091950) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1a34,	// (0x00091950) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x0009f1fd) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x0009f1fd) list_medium_line_x2_t3_g4_g

0x8d69,	// (0x00098c85) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8d69,	// (0x00098c85) list_medium_line_x2_t3_g4_t1

0x8d7f,	// (0x00098c9b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8d7f,	// (0x00098c9b) list_medium_line_x2_t3_g4_t2

0x1a69,	// (0x00091985) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1a69,	// (0x00091985) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd56,	// (0x0009fc72) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd56,	// (0x0009fc72) list_medium_line_x2_t3_g4_t

0xb9dd,	// (0x0009b8f9) list_medium_line_g2_g1_ParamLimits

0xb9dd,	// (0x0009b8f9) list_medium_line_g2_g1

0xb9e9,	// (0x0009b905) list_medium_line_g2_g2_ParamLimits

0xb9e9,	// (0x0009b905) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0009f92f) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0009f92f) list_medium_line_g2_g

0xcc5e,	// (0x0009cb7a) list_medium_line_g2_t1_ParamLimits

0xcc5e,	// (0x0009cb7a) list_medium_line_g2_t1

0xb9dd,	// (0x0009b8f9) list_medium_line_t3_g2_g1_ParamLimits

0xb9dd,	// (0x0009b8f9) list_medium_line_t3_g2_g1

0xb9e9,	// (0x0009b905) list_medium_line_t3_g2_g2_ParamLimits

0xb9e9,	// (0x0009b905) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0009f92f) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0009f92f) list_medium_line_t3_g2_g

0x8d98,	// (0x00098cb4) list_medium_line_t3_g2_t1_ParamLimits

0x8d98,	// (0x00098cb4) list_medium_line_t3_g2_t1

0x8daf,	// (0x00098ccb) list_medium_line_t3_g2_t2_ParamLimits

0x8daf,	// (0x00098ccb) list_medium_line_t3_g2_t2

0x8dc4,	// (0x00098ce0) list_medium_line_t3_g2_t3_ParamLimits

0x8dc4,	// (0x00098ce0) list_medium_line_t3_g2_t3

0x0002,

0xfd5d,	// (0x0009fc79) list_medium_line_t3_g2_t_ParamLimits

0xfd5d,	// (0x0009fc79) list_medium_line_t3_g2_t

0xca28,	// (0x0009c944) list_medium_line_right_icon_g1

0xcc73,	// (0x0009cb8f) list_medium_line_right_icon_t1

0xb9dd,	// (0x0009b8f9) list_medium_line_t2_g1_ParamLimits

0xb9dd,	// (0x0009b8f9) list_medium_line_t2_g1

0x8ddd,	// (0x00098cf9) list_medium_line_t2_t1_ParamLimits

0x8ddd,	// (0x00098cf9) list_medium_line_t2_t1

0x8df7,	// (0x00098d13) list_medium_line_t2_t2_ParamLimits

0x8df7,	// (0x00098d13) list_medium_line_t2_t2

0x0001,

0xfd64,	// (0x0009fc80) list_medium_line_t2_t_ParamLimits

0xfd64,	// (0x0009fc80) list_medium_line_t2_t

0xb9dd,	// (0x0009b8f9) list_medium_line_t3_g1_ParamLimits

0xb9dd,	// (0x0009b8f9) list_medium_line_t3_g1

0x8e10,	// (0x00098d2c) list_medium_line_t3_t1_ParamLimits

0x8e10,	// (0x00098d2c) list_medium_line_t3_t1

0x8e27,	// (0x00098d43) list_medium_line_t3_t2_ParamLimits

0x8e27,	// (0x00098d43) list_medium_line_t3_t2

0x8e3c,	// (0x00098d58) list_medium_line_t3_t3_ParamLimits

0x8e3c,	// (0x00098d58) list_medium_line_t3_t3

0x0002,

0xfd69,	// (0x0009fc85) list_medium_line_t3_t_ParamLimits

0xfd69,	// (0x0009fc85) list_medium_line_t3_t

0xb9dd,	// (0x0009b8f9) list_medium_line_g3_g1_ParamLimits

0xb9dd,	// (0x0009b8f9) list_medium_line_g3_g1

0xcc81,	// (0x0009cb9d) list_medium_line_g3_g2_ParamLimits

0xcc81,	// (0x0009cb9d) list_medium_line_g3_g2

0xb9e9,	// (0x0009b905) list_medium_line_g3_g3_ParamLimits

0xb9e9,	// (0x0009b905) list_medium_line_g3_g3

0x0002,

0xfd70,	// (0x0009fc8c) list_medium_line_g3_g_ParamLimits

0xfd70,	// (0x0009fc8c) list_medium_line_g3_g

0xcc8d,	// (0x0009cba9) list_medium_line_g3_t1_ParamLimits

0xcc8d,	// (0x0009cba9) list_medium_line_g3_t1

0xb9dd,	// (0x0009b8f9) list_medium_line_t2_g3_g1_ParamLimits

0xb9dd,	// (0x0009b8f9) list_medium_line_t2_g3_g1

0xcc81,	// (0x0009cb9d) list_medium_line_t2_g3_g2_ParamLimits

0xcc81,	// (0x0009cb9d) list_medium_line_t2_g3_g2

0xb9e9,	// (0x0009b905) list_medium_line_t2_g3_g3_ParamLimits

0xb9e9,	// (0x0009b905) list_medium_line_t2_g3_g3

0x0002,

0xfd70,	// (0x0009fc8c) list_medium_line_t2_g3_g_ParamLimits

0xfd70,	// (0x0009fc8c) list_medium_line_t2_g3_g

0x8e4e,	// (0x00098d6a) list_medium_line_t2_g3_t1_ParamLimits

0x8e4e,	// (0x00098d6a) list_medium_line_t2_g3_t1

0x8e65,	// (0x00098d81) list_medium_line_t2_g3_t2_ParamLimits

0x8e65,	// (0x00098d81) list_medium_line_t2_g3_t2

0x0001,

0xfd77,	// (0x0009fc93) list_medium_line_t2_g3_t_ParamLimits

0xfd77,	// (0x0009fc93) list_medium_line_t2_g3_t

0xb9dd,	// (0x0009b8f9) list_medium_line_t3_g3_g1_ParamLimits

0xb9dd,	// (0x0009b8f9) list_medium_line_t3_g3_g1

0xcc81,	// (0x0009cb9d) list_medium_line_t3_g3_g2_ParamLimits

0xcc81,	// (0x0009cb9d) list_medium_line_t3_g3_g2

0xb9e9,	// (0x0009b905) list_medium_line_t3_g3_g3_ParamLimits

0xb9e9,	// (0x0009b905) list_medium_line_t3_g3_g3

0x0002,

0xfd70,	// (0x0009fc8c) list_medium_line_t3_g3_g_ParamLimits

0xfd70,	// (0x0009fc8c) list_medium_line_t3_g3_g

0x8e7e,	// (0x00098d9a) list_medium_line_t3_g3_t1_ParamLimits

0x8e7e,	// (0x00098d9a) list_medium_line_t3_g3_t1

0x8e97,	// (0x00098db3) list_medium_line_t3_g3_t2_ParamLimits

0x8e97,	// (0x00098db3) list_medium_line_t3_g3_t2

0x8ead,	// (0x00098dc9) list_medium_line_t3_g3_t3_ParamLimits

0x8ead,	// (0x00098dc9) list_medium_line_t3_g3_t3

0x0002,

0xfd7c,	// (0x0009fc98) list_medium_line_t3_g3_t_ParamLimits

0xfd7c,	// (0x0009fc98) list_medium_line_t3_g3_t

0xcb68,	// (0x0009ca84) list_medium_line_right_iconx2_g1

0xca28,	// (0x0009c944) list_medium_line_right_iconx2_g2

0x0001,

0xfd83,	// (0x0009fc9f) list_medium_line_right_iconx2_g

0xcca2,	// (0x0009cbbe) list_medium_line_right_iconx2_t1

0xcb68,	// (0x0009ca84) list_medium_line_t2_right_iconx2_g1

0xca28,	// (0x0009c944) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd83,	// (0x0009fc9f) list_medium_line_t2_right_iconx2_g

0x8ec7,	// (0x00098de3) list_medium_line_t2_right_iconx2_t1

0x8ed7,	// (0x00098df3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd88,	// (0x0009fca4) list_medium_line_t2_right_iconx2_t

0xccb0,	// (0x0009cbcc) list_medium_line_x4_t4_t1

0x8ee9,	// (0x00098e05) list_medium_line_x4_t4_t2

0x8ef9,	// (0x00098e15) list_medium_line_x4_t4_t3

0x8f09,	// (0x00098e25) list_medium_line_x4_t4_t4

0x0003,

0xfd8d,	// (0x0009fca9) list_medium_line_x4_t4_t

0x8f53,	// (0x00098e6f) tport_appsw_pane_ParamLimits

0x8f53,	// (0x00098e6f) tport_appsw_pane

0x8f66,	// (0x00098e82) tport_contact_pane_ParamLimits

0x8f66,	// (0x00098e82) tport_contact_pane

0x8f79,	// (0x00098e95) tport_listscroll_pane_ParamLimits

0x8f79,	// (0x00098e95) tport_listscroll_pane

0x8f8f,	// (0x00098eab) cell_tport_appsw_pane_ParamLimits

0x8f8f,	// (0x00098eab) cell_tport_appsw_pane

0xb760,	// (0x0009b67c) tport_appsw_pane_g1_ParamLimits

0xb760,	// (0x0009b67c) tport_appsw_pane_g1

0xccbe,	// (0x0009cbda) tport_contact_pane_g1

0xccc7,	// (0x0009cbe3) tport_contact_pane_t1

0xccd5,	// (0x0009cbf1) tport_contact_pane_t2

0x0001,

0xfd96,	// (0x0009fcb2) tport_contact_pane_t

0xcce3,	// (0x0009cbff) list_tport_pane

0xccec,	// (0x0009cc08) scroll_pane_cp_030

0x8fd5,	// (0x00098ef1) cell_tport_appsw_pane_g1

0xcd05,	// (0x0009cc21) cell_tport_appsw_pane_t1

0x0992,	// (0x000908ae) grid_highlight_pane_cp019

0x8fe5,	// (0x00098f01) list_tport_double_graphic_pane_ParamLimits

0x8fe5,	// (0x00098f01) list_tport_double_graphic_pane

0x0c12,	// (0x00090b2e) list_highlight_pane_cp023_ParamLimits

0x0c12,	// (0x00090b2e) list_highlight_pane_cp023

0x8ff5,	// (0x00098f11) list_tport_double_graphic_pane_g1_ParamLimits

0x8ff5,	// (0x00098f11) list_tport_double_graphic_pane_g1

0x9002,	// (0x00098f1e) list_tport_double_graphic_pane_t1_ParamLimits

0x9002,	// (0x00098f1e) list_tport_double_graphic_pane_t1

0x9017,	// (0x00098f33) list_tport_double_graphic_pane_t2_ParamLimits

0x9017,	// (0x00098f33) list_tport_double_graphic_pane_t2

0x0001,

0xfda2,	// (0x0009fcbe) list_tport_double_graphic_pane_t_ParamLimits

0xfda2,	// (0x0009fcbe) list_tport_double_graphic_pane_t

0x0992,	// (0x000908ae) main_cale_note_pane

0x6cdd,	// (0x00096bf9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6cdd,	// (0x00096bf9) cell_vitu2_function_top_wide_pane_cp01

0x8686,	// (0x000985a2) wait_bar_pane_cp05_ParamLimits

0x0992,	// (0x000908ae) listscroll_cmail_pane

0xcd1b,	// (0x0009cc37) list_cmail_pane

0x9033,	// (0x00098f4f) list_cmail_body_pane

0x904b,	// (0x00098f67) list_single_cmail_header_caption_pane

0x9068,	// (0x00098f84) list_single_cmail_header_detail_pane_ParamLimits

0x9068,	// (0x00098f84) list_single_cmail_header_detail_pane

0x909a,	// (0x00098fb6) list_single_cmail_header_caption_pane_t1

0x90aa,	// (0x00098fc6) list_single_cmail_header_detail_pane_g1_ParamLimits

0x90aa,	// (0x00098fc6) list_single_cmail_header_detail_pane_g1

0xcd3b,	// (0x0009cc57) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcd3b,	// (0x0009cc57) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda7,	// (0x0009fcc3) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda7,	// (0x0009fcc3) list_single_cmail_header_detail_pane_g

0xcd54,	// (0x0009cc70) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcd54,	// (0x0009cc70) list_single_cmail_header_detail_pane_t1

0xcd92,	// (0x0009ccae) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcd92,	// (0x0009ccae) list_single_cmail_header_editor_pane_bg

0xc5cf,	// (0x0009c4eb) list_cmail_body_pane_g1

0xcda4,	// (0x0009ccc0) list_cmail_body_pane_t1

0xb79d,	// (0x0009b6b9) list_single_cmail_header_editor_pane_bg_g1

0xd9ff,	// (0x0009d91b) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb7ad,	// (0x0009b6c9) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb7a5,	// (0x0009b6c1) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb9d5,	// (0x0009b8f1) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb7cd,	// (0x0009b6e9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb7bd,	// (0x0009b6d9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb7c5,	// (0x0009b6e1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd9df,	// (0x0009d8fb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x90e8,	// (0x00099004) calenote_gesture_pane_ParamLimits

0x90e8,	// (0x00099004) calenote_gesture_pane

0x9108,	// (0x00099024) calenote_window_pane_ParamLimits

0x9108,	// (0x00099024) calenote_window_pane

0xcdb2,	// (0x0009ccce) popup_note_window_cp01

0x9124,	// (0x00099040) calenote_swipe_1_pane_ParamLimits

0x9124,	// (0x00099040) calenote_swipe_1_pane

0x8ae3,	// (0x000989ff) calenote_swipe_2_pane_ParamLimits

0x8ae3,	// (0x000989ff) calenote_swipe_2_pane

0xc927,	// (0x0009c843) calenote_swipe_1_pane_g1_ParamLimits

0xc927,	// (0x0009c843) calenote_swipe_1_pane_g1

0xc934,	// (0x0009c850) calenote_swipe_1_pane_g2_ParamLimits

0xc934,	// (0x0009c850) calenote_swipe_1_pane_g2

0x0001,

0xfcd1,	// (0x0009fbed) calenote_swipe_1_pane_g_ParamLimits

0xfcd1,	// (0x0009fbed) calenote_swipe_1_pane_g

0xcdc4,	// (0x0009cce0) calenote_swipe_1_pane_t1_ParamLimits

0xcdc4,	// (0x0009cce0) calenote_swipe_1_pane_t1

0xc927,	// (0x0009c843) calenote_swipe_2_pane_g1_ParamLimits

0xc927,	// (0x0009c843) calenote_swipe_2_pane_g1

0xcde3,	// (0x0009ccff) calenote_swipe_2_pane_g2_ParamLimits

0xcde3,	// (0x0009ccff) calenote_swipe_2_pane_g2

0x0001,

0xfdb3,	// (0x0009fccf) calenote_swipe_2_pane_g_ParamLimits

0xfdb3,	// (0x0009fccf) calenote_swipe_2_pane_g

0xcdef,	// (0x0009cd0b) calenote_swipe_2_pane_t1_ParamLimits

0xcdef,	// (0x0009cd0b) calenote_swipe_2_pane_t1

0x0992,	// (0x000908ae) main_mup_navstr_pane

0x58f6,	// (0x00095812) main_mup3_pane_t7_ParamLimits

0x58f6,	// (0x00095812) main_mup3_pane_t7

0xb428,	// (0x0009b344) main_mp4_pane_g6_ParamLimits

0xb428,	// (0x0009b344) main_mp4_pane_g6

0xb65a,	// (0x0009b576) main_image3_pane_t4_ParamLimits

0xb65a,	// (0x0009b576) main_image3_pane_t4

0x9139,	// (0x00099055) popup_navstr_preview_pane_ParamLimits

0x9139,	// (0x00099055) popup_navstr_preview_pane

0x9149,	// (0x00099065) scroll_navstr_pane_ParamLimits

0x9149,	// (0x00099065) scroll_navstr_pane

0x0992,	// (0x000908ae) bg_popup_preview_window_pane_cp04

0xce16,	// (0x0009cd32) popup_navstr_preview_pane_t1

0x915d,	// (0x00099079) scroll_navstr_pane_g1_ParamLimits

0x915d,	// (0x00099079) scroll_navstr_pane_g1

0x9171,	// (0x0009908d) scroll_navstr_pane_t1_ParamLimits

0x9171,	// (0x0009908d) scroll_navstr_pane_t1

0xcdbb,	// (0x0009ccd7) bg_button_pane_cp014

0xcdbb,	// (0x0009ccd7) bg_button_pane_cp030

0x8979,	// (0x00098895) list_double_fisheye_pane_g4_ParamLimits

0x8979,	// (0x00098895) list_double_fisheye_pane_g4

0x8985,	// (0x000988a1) list_double_fisheye_pane_g5_ParamLimits

0x8985,	// (0x000988a1) list_double_fisheye_pane_g5

0xcd23,	// (0x0009cc3f) sp_fs_scroll_pane_cp03

0xca6a,	// (0x0009c986) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xca76,	// (0x0009c992) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcee,	// (0x0009fc0a) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xca82,	// (0x0009c99e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9029,	// (0x00098f45) sp_fs_scroll_pane_cp02

0xa60e,	// (0x0009a52a) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa60e,	// (0x0009a52a) popup_sp_fs_calendar_preview_list_single_pane

0x0992,	// (0x000908ae) main_cam6_pano_pane

0x0c12,	// (0x00090b2e) main_mup3_pane_ParamLimits

0x0992,	// (0x000908ae) main_phacti_pane

0x8557,	// (0x00098473) bg_button_pane_cp11

0x8571,	// (0x0009848d) main_mobtv_info_pane_g2_ParamLimits

0x8571,	// (0x0009848d) main_mobtv_info_pane_g2

0x0001,

0xfc4e,	// (0x0009fb6a) main_mobtv_info_pane_g_ParamLimits

0xfc4e,	// (0x0009fb6a) main_mobtv_info_pane_g

0x874e,	// (0x0009866a) sc_clock_pane_t5_ParamLimits

0x874e,	// (0x0009866a) sc_clock_pane_t5

0x87da,	// (0x000986f6) main_radioblah_pane_g1_ParamLimits

0xc873,	// (0x0009c78f) main_radioblah_pane_t3_ParamLimits

0xc873,	// (0x0009c78f) main_radioblah_pane_t3

0xc88b,	// (0x0009c7a7) main_radioblah_pane_t4_ParamLimits

0xc88b,	// (0x0009c7a7) main_radioblah_pane_t4

0x8802,	// (0x0009871e) main_radioblah_text_pane_ParamLimits

0x8802,	// (0x0009871e) main_radioblah_text_pane

0x8814,	// (0x00098730) main_radioblah_info_pane_g1_ParamLimits

0x88ad,	// (0x000987c9) main_radioblah_info_pane_t4_ParamLimits

0x88ad,	// (0x000987c9) main_radioblah_info_pane_t4

0x0c12,	// (0x00090b2e) main_sp_fs_calendar_pane

0x9188,	// (0x000990a4) main_phacti_pane_g1

0x9190,	// (0x000990ac) phacti_note_pane_ParamLimits

0x9190,	// (0x000990ac) phacti_note_pane

0xce2d,	// (0x0009cd49) phacti_term_pane_ParamLimits

0xce2d,	// (0x0009cd49) phacti_term_pane

0xce42,	// (0x0009cd5e) phacti_note_pane_t1_ParamLimits

0xce42,	// (0x0009cd5e) phacti_note_pane_t1

0xce59,	// (0x0009cd75) phacti_term_pane_g1

0xce61,	// (0x0009cd7d) phacti_term_pane_t1_ParamLimits

0xce61,	// (0x0009cd7d) phacti_term_pane_t1

0xce8b,	// (0x0009cda7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xce93,	// (0x0009cdaf) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbd,	// (0x0009fcd9) popup_sp_fs_calendar_preview_list_single_pane_g

0xce9b,	// (0x0009cdb7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xce9b,	// (0x0009cdb7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xceb1,	// (0x0009cdcd) aid_popup_sp_fs_bg_corner_pane

0xaaf9,	// (0x0009aa15) popup_sp_fs_calendar_preview_bg_pane_g1

0x0992,	// (0x000908ae) popup_sp_fs_calendar_preview_bg_pane

0xceb9,	// (0x0009cdd5) popup_sp_fs_calendar_preview_list_pane

0x0c12,	// (0x00090b2e) bg_main_sp_fs_cale_pane_ParamLimits

0x0c12,	// (0x00090b2e) bg_main_sp_fs_cale_pane

0xceca,	// (0x0009cde6) listscroll_cale_mrui_pane_ParamLimits

0xceca,	// (0x0009cde6) listscroll_cale_mrui_pane

0xcede,	// (0x0009cdfa) listscroll_sp_fs_schedule_track_pane

0xcee7,	// (0x0009ce03) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcee7,	// (0x0009ce03) main_sp_fs_ctrlbar_pane_cp01

0xcef8,	// (0x0009ce14) main_sp_fs_ribbon_pane

0xcf00,	// (0x0009ce1c) popup_sp_fs_cale_preview_window

0x91eb,	// (0x00099107) list_single_sp_fs_schedule_track_pane_ParamLimits

0x91eb,	// (0x00099107) list_single_sp_fs_schedule_track_pane

0x0c12,	// (0x00090b2e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0c12,	// (0x00090b2e) bg_sp_fs_highlight_list_pane_cp03

0x91fe,	// (0x0009911a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x91fe,	// (0x0009911a) list_single_sp_fs_schedule_track_pane_g1

0x920a,	// (0x00099126) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x920a,	// (0x00099126) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc2,	// (0x0009fcde) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc2,	// (0x0009fcde) list_single_sp_fs_schedule_track_pane_g

0x9216,	// (0x00099132) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9216,	// (0x00099132) list_single_sp_fs_schedule_track_pane_t1

0x9238,	// (0x00099154) sp_fs_schedule_track_pane_ParamLimits

0x9238,	// (0x00099154) sp_fs_schedule_track_pane

0xcf12,	// (0x0009ce2e) sp_fs_schedule_track_pane_g1

0xcf1a,	// (0x0009ce36) sp_fs_schedule_track_pane_g2

0xcf22,	// (0x0009ce3e) sp_fs_schedule_track_pane_g3

0xcf2a,	// (0x0009ce46) sp_fs_schedule_track_pane_g4

0xcf32,	// (0x0009ce4e) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc7,	// (0x0009fce3) sp_fs_schedule_track_pane_g

0xb79d,	// (0x0009b6b9) bg_sp_fs_schedule_viewer_highlight_g1

0xd9ff,	// (0x0009d91b) bg_sp_fs_schedule_viewer_highlight_g2

0xb7a5,	// (0x0009b6c1) bg_sp_fs_schedule_viewer_highlight_g3

0xb7ad,	// (0x0009b6c9) bg_sp_fs_schedule_viewer_highlight_g4

0xb9d5,	// (0x0009b8f1) bg_sp_fs_schedule_viewer_highlight_g5

0xb7bd,	// (0x0009b6d9) bg_sp_fs_schedule_viewer_highlight_g6

0xb7c5,	// (0x0009b6e1) bg_sp_fs_schedule_viewer_highlight_g7

0xb7cd,	// (0x0009b6e9) bg_sp_fs_schedule_viewer_highlight_g8

0xd9df,	// (0x0009d8fb) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd2,	// (0x0009fcee) bg_sp_fs_schedule_viewer_highlight_g

0x0992,	// (0x000908ae) bg_main_sp_fs_ribbon_pane

0x924d,	// (0x00099169) main_sp_fs_ribbon_pane_g1

0xcf3a,	// (0x0009ce56) main_sp_fs_ribbon_pane_t1

0x9256,	// (0x00099172) main_sp_fs_ribbon_pane_t2

0xcf49,	// (0x0009ce65) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde5,	// (0x0009fd01) main_sp_fs_ribbon_pane_t

0xcf58,	// (0x0009ce74) main_sp_fs_ribbon_scheduler_pane

0xcf60,	// (0x0009ce7c) bg_main_sp_fs_ribbon_pane_g1

0xcf69,	// (0x0009ce85) bg_main_sp_fs_ribbon_pane_g2

0xcf72,	// (0x0009ce8e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdec,	// (0x0009fd08) bg_main_sp_fs_ribbon_pane_g

0xcf7a,	// (0x0009ce96) main_sp_fs_ribbon_scheduler_pane_g1

0xcf83,	// (0x0009ce9f) main_sp_fs_ribbon_scheduler_pane_g2

0xcf8c,	// (0x0009cea8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf3,	// (0x0009fd0f) main_sp_fs_ribbon_scheduler_pane_g

0xcf95,	// (0x0009ceb1) list_cale_mrui_pane

0x9265,	// (0x00099181) sp_fs_scroll_pane_cp07_ParamLimits

0x9265,	// (0x00099181) sp_fs_scroll_pane_cp07

0x927b,	// (0x00099197) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x927b,	// (0x00099197) bg_sp_fs_schedule_viewer_highlight

0xcf9e,	// (0x0009ceba) list_single_sp_fs_schedule_track_pane_cp01

0xcfa6,	// (0x0009cec2) list_sp_fs_schedule_track_pane

0xcfae,	// (0x0009ceca) sp_fs_scroll_pane_cp06_ParamLimits

0xcfae,	// (0x0009ceca) sp_fs_scroll_pane_cp06

0xaaf9,	// (0x0009aa15) bgmain_sp_fs_calendar_pane_g1

0x928d,	// (0x000991a9) list_single_cale_mrui_pane_ParamLimits

0x928d,	// (0x000991a9) list_single_cale_mrui_pane

0xcfc0,	// (0x0009cedc) list_single_cale_mrui_row_pane_ParamLimits

0xcfc0,	// (0x0009cedc) list_single_cale_mrui_row_pane

0xcfcd,	// (0x0009cee9) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcfcd,	// (0x0009cee9) list_single_cale_mrui_row_pane_g1

0xd012,	// (0x0009cf2e) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd012,	// (0x0009cf2e) list_single_cale_mrui_row_pane_t1

0x92b1,	// (0x000991cd) list_single_cale_mrui_row_pane_t2_ParamLimits

0x92b1,	// (0x000991cd) list_single_cale_mrui_row_pane_t2

0xd024,	// (0x0009cf40) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd024,	// (0x0009cf40) list_single_cale_mrui_row_pane_t3

0xd053,	// (0x0009cf6f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd053,	// (0x0009cf6f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x0009fd1d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x0009fd1d) list_single_cale_mrui_row_pane_t

0x9317,	// (0x00099233) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9317,	// (0x00099233) list_single_cmail_header_editor_pane_bg_cp01

0x933b,	// (0x00099257) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x933b,	// (0x00099257) list_single_cmail_header_editor_pane_bg_cp02

0x9359,	// (0x00099275) main_radioblah_text_pane_t1_ParamLimits

0x9359,	// (0x00099275) main_radioblah_text_pane_t1

0xd082,	// (0x0009cf9e) cam6_indi_pane_cp01

0xd08a,	// (0x0009cfa6) cam6_mode_pane_cp01

0xd092,	// (0x0009cfae) cam6_pano_pane

0xd09b,	// (0x0009cfb7) cam6_zoom_pane_cp01

0xd0a5,	// (0x0009cfc1) cam6_pano_image_pane

0xd0ae,	// (0x0009cfca) cam6_pano_pane_g1

0xc5cf,	// (0x0009c4eb) cam6_pano_pane_g2

0xd0b7,	// (0x0009cfd3) cam6_pano_pane_g3

0xd0c0,	// (0x0009cfdc) cam6_pano_pane_g4

0xb089,	// (0x0009afa5) cam6_pano_pane_g5

0xd0c9,	// (0x0009cfe5) cam6_pano_pane_g6

0xd0d1,	// (0x0009cfed) cam6_pano_pane_g7

0xd0d9,	// (0x0009cff5) cam6_pano_pane_g8

0xd0e2,	// (0x0009cffe) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x0009fd26) cam6_pano_pane_g

0x0992,	// (0x000908ae) main_browser_tag_pane

0xce0e,	// (0x0009cd2a) grid_navstr_albumart_pane

0xd0ed,	// (0x0009d009) cell_navstr_albumart_pane_ParamLimits

0xd0ed,	// (0x0009d009) cell_navstr_albumart_pane

0xd109,	// (0x0009d025) cell_navstr_albumart_pane_g1

0x3da0,	// (0x00093cbc) cell_navstr_albumart_pane_g2

0x3db0,	// (0x00093ccc) cell_navstr_albumart_pane_g3

0x3da8,	// (0x00093cc4) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x0009fd39) cell_navstr_albumart_pane_g

0x9374,	// (0x00099290) bt_list_pane_ParamLimits

0x9374,	// (0x00099290) bt_list_pane

0x938a,	// (0x000992a6) bt_list_pane_t1

0x9399,	// (0x000992b5) bt_list_pane_t2

0x0001,

0xfe26,	// (0x0009fd42) bt_list_pane_t

0x0992,	// (0x000908ae) main_cale_prevew_pane

0x93a8,	// (0x000992c4) popup_cale_preview_window_ParamLimits

0x93a8,	// (0x000992c4) popup_cale_preview_window

0x0c12,	// (0x00090b2e) bg_popup_preview_window_pane_cp05_ParamLimits

0x0c12,	// (0x00090b2e) bg_popup_preview_window_pane_cp05

0xd111,	// (0x0009d02d) list_cale_preview_pane_ParamLimits

0xd111,	// (0x0009d02d) list_cale_preview_pane

0x93c3,	// (0x000992df) list_double_cale_preview_pane_ParamLimits

0x93c3,	// (0x000992df) list_double_cale_preview_pane

0x93d7,	// (0x000992f3) list_single_cale_preview_pane_ParamLimits

0x93d7,	// (0x000992f3) list_single_cale_preview_pane

0x93ef,	// (0x0009930b) list_single_cale_preview_pane_g1

0x93f7,	// (0x00099313) list_single_cale_preview_pane_t1_ParamLimits

0x93f7,	// (0x00099313) list_single_cale_preview_pane_t1

0x940c,	// (0x00099328) list_double_cale_preview_pane_g1

0x9414,	// (0x00099330) list_double_cale_preview_pane_t1_ParamLimits

0x9414,	// (0x00099330) list_double_cale_preview_pane_t1

0x9429,	// (0x00099345) list_double_cale_preview_pane_t2_ParamLimits

0x9429,	// (0x00099345) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x0009fd47) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x0009fd47) list_double_cale_preview_pane_t

0x0992,	// (0x000908ae) main_ezdial_pane

0x0c12,	// (0x00090b2e) main_sp_fs_email_pane_ParamLimits

0x8b1f,	// (0x00098a3b) cmail_ddmenu_btn01_pane_ParamLimits

0x8b1f,	// (0x00098a3b) cmail_ddmenu_btn01_pane

0x8b32,	// (0x00098a4e) cmail_ddmenu_btn02_pane_ParamLimits

0x8b32,	// (0x00098a4e) cmail_ddmenu_btn02_pane

0x8b55,	// (0x00098a71) cmail_ddmenu_btn03_pane_ParamLimits

0x8b55,	// (0x00098a71) cmail_ddmenu_btn03_pane

0x8b7b,	// (0x00098a97) main_sp_fs_ctrlbar_pane_ParamLimits

0x8b9f,	// (0x00098abb) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9033,	// (0x00098f4f) list_cmail_body_pane_ParamLimits

0xcd32,	// (0x0009cc4e) bg_button_pane_cp12

0xcd47,	// (0x0009cc63) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcd47,	// (0x0009cc63) list_single_cmail_header_detail_pane_g3

0x90c2,	// (0x00098fde) list_single_cmail_header_detail_pane_t2_ParamLimits

0x90c2,	// (0x00098fde) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdae,	// (0x0009fcca) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdae,	// (0x0009fcca) list_single_cmail_header_detail_pane_t

0xce76,	// (0x0009cd92) phacti_term_pane_t2_ParamLimits

0xce76,	// (0x0009cd92) phacti_term_pane_t2

0x0001,

0xfdb8,	// (0x0009fcd4) phacti_term_pane_t_ParamLimits

0xfdb8,	// (0x0009fcd4) phacti_term_pane_t

0xd11d,	// (0x0009d039) aid_size_list_single_double

0x9441,	// (0x0009935d) popup_ezdial_listscroll_window

0x945d,	// (0x00099379) popup_number_entry_window_cp01

0xe1a5,	// (0x0009e0c1) bg_popup_call_pane_cp09

0xd129,	// (0x0009d045) ezdial_list_pane

0xd131,	// (0x0009d04d) scroll_pane_cp23

0x4291,	// (0x000941ad) bg_button_pane_cp028_ParamLimits

0x4291,	// (0x000941ad) bg_button_pane_cp028

0x946b,	// (0x00099387) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x946b,	// (0x00099387) cmail_ddmenu_btn01_pane_g1

0x9477,	// (0x00099393) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9477,	// (0x00099393) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x0009fd4c) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x0009fd4c) cmail_ddmenu_btn01_pane_g

0xd139,	// (0x0009d055) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd139,	// (0x0009d055) cmail_ddmenu_btn01_pane_t1

0x4291,	// (0x000941ad) bg_button_pane_cp029_ParamLimits

0x4291,	// (0x000941ad) bg_button_pane_cp029

0x9483,	// (0x0009939f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9483,	// (0x0009939f) cmail_ddmenu_btn02_pane_g1

0x949b,	// (0x000993b7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x949b,	// (0x000993b7) cmail_ddmenu_btn02_pane_t1

0x0c12,	// (0x00090b2e) bg_button_pane_cp031_ParamLimits

0x0c12,	// (0x00090b2e) bg_button_pane_cp031

0x9483,	// (0x0009939f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9483,	// (0x0009939f) cmail_ddmenu_btn03_pane_g1

0x949b,	// (0x000993b7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x949b,	// (0x000993b7) cmail_ddmenu_btn03_pane_t1

0x64a5,	// (0x000963c1) cell_dialer2_keypad_pane_t1_ParamLimits

0x64bf,	// (0x000963db) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x64bf,	// (0x000963db) cell_dialer2_keypad_pane_t1_copy1

0x83d7,	// (0x000982f3) ncimui_group_button_pane

0x0c12,	// (0x00090b2e) main_sp_fs_calendar_pane_ParamLimits

0x904b,	// (0x00098f67) list_single_cmail_header_caption_pane_ParamLimits

0xcec1,	// (0x0009cddd) aid_recal_txt_sm_pane

0x0992,	// (0x000908ae) mian_recal_day_pane

0xcf00,	// (0x0009ce1c) popup_sp_fs_cale_preview_window_ParamLimits

0x0992,	// (0x000908ae) list_recal_day_pane

0xd167,	// (0x0009d083) list_single_recal_day_pane_ParamLimits

0xd167,	// (0x0009d083) list_single_recal_day_pane

0xd179,	// (0x0009d095) list_single_recal_day_pane_g1_ParamLimits

0xd179,	// (0x0009d095) list_single_recal_day_pane_g1

0xd185,	// (0x0009d0a1) list_single_recal_day_pane_g2_ParamLimits

0xd185,	// (0x0009d0a1) list_single_recal_day_pane_g2

0xd195,	// (0x0009d0b1) list_single_recal_day_pane_g3_ParamLimits

0xd195,	// (0x0009d0b1) list_single_recal_day_pane_g3

0x94bf,	// (0x000993db) list_single_recal_day_pane_g4_ParamLimits

0x94bf,	// (0x000993db) list_single_recal_day_pane_g4

0xd1a1,	// (0x0009d0bd) list_single_recal_day_pane_g5_ParamLimits

0xd1a1,	// (0x0009d0bd) list_single_recal_day_pane_g5

0xd1b1,	// (0x0009d0cd) list_single_recal_day_pane_g6_ParamLimits

0xd1b1,	// (0x0009d0cd) list_single_recal_day_pane_g6

0x0004,

0xfe3f,	// (0x0009fd5b) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x0009fd5b) list_single_recal_day_pane_g

0xd1c8,	// (0x0009d0e4) list_single_recal_day_pane_t1

0xd1da,	// (0x0009d0f6) list_single_recal_day_pane_t2

0x0001,

0xfe4a,	// (0x0009fd66) list_single_recal_day_pane_t

0x94df,	// (0x000993fb) ncimui_query_button_pane_ParamLimits

0x94df,	// (0x000993fb) ncimui_query_button_pane

0x94ef,	// (0x0009940b) ncimui_query_button_pane_t1_ParamLimits

0x94ef,	// (0x0009940b) ncimui_query_button_pane_t1

0xd1ef,	// (0x0009d10b) ncimui_query_button_pane_t2_ParamLimits

0xd1ef,	// (0x0009d10b) ncimui_query_button_pane_t2

0x0001,

0xfe4f,	// (0x0009fd6b) ncimui_query_button_pane_t_ParamLimits

0xfe4f,	// (0x0009fd6b) ncimui_query_button_pane_t

0x9502,	// (0x0009941e) query_button_pane_ParamLimits

0x9502,	// (0x0009941e) query_button_pane

0x0992,	// (0x000908ae) bg_button_pane_cp0028

0xd202,	// (0x0009d11e) query_button_pane_t1

0x42b3,	// (0x000941cf) main_tport_pane_ParamLimits

0x8f19,	// (0x00098e35) bg_popup_window_pane_cp01_ParamLimits

0x8f19,	// (0x00098e35) bg_popup_window_pane_cp01

0x8f2f,	// (0x00098e4b) heading_pane_cp08_ParamLimits

0x8f2f,	// (0x00098e4b) heading_pane_cp08

0x8f40,	// (0x00098e5c) heading_pane_cp07_ParamLimits

0x8f40,	// (0x00098e5c) heading_pane_cp07

0xccfd,	// (0x0009cc19) cell_tport_appsw_pane_g2

0x0002,

0xfd9b,	// (0x0009fcb7) cell_tport_appsw_pane_g

0x3310,	// (0x0009322c) input_candi_list_open_g1

0xdb9a,	// (0x0009dab6) list_cale_time_pane_g6_ParamLimits

0xdb9a,	// (0x0009dab6) list_cale_time_pane_g6

0x52c9,	// (0x000951e5) aid_size_touch_calib_1_ParamLimits

0x52c9,	// (0x000951e5) aid_size_touch_calib_1

0x52d5,	// (0x000951f1) aid_size_touch_calib_2_ParamLimits

0x52d5,	// (0x000951f1) aid_size_touch_calib_2

0x52eb,	// (0x00095207) aid_size_touch_calib_3_ParamLimits

0x52eb,	// (0x00095207) aid_size_touch_calib_3

0x5309,	// (0x00095225) aid_size_touch_calib_4_ParamLimits

0x5309,	// (0x00095225) aid_size_touch_calib_4

0x531f,	// (0x0009523b) main_touch_calib_button_group_pane_ParamLimits

0x531f,	// (0x0009523b) main_touch_calib_button_group_pane

0x5337,	// (0x00095253) main_touch_calib_pane_g1_ParamLimits

0x5343,	// (0x0009525f) main_touch_calib_pane_g2_ParamLimits

0x534f,	// (0x0009526b) main_touch_calib_pane_g3_ParamLimits

0x535b,	// (0x00095277) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x0009f68c) main_touch_calib_pane_g_ParamLimits

0x5367,	// (0x00095283) main_touch_calib_pane_t1_ParamLimits

0x5381,	// (0x0009529d) main_touch_calib_pane_t2_ParamLimits

0x539b,	// (0x000952b7) main_touch_calib_pane_t3_ParamLimits

0x53af,	// (0x000952cb) main_touch_calib_pane_t4_ParamLimits

0x53c3,	// (0x000952df) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x0009f695) main_touch_calib_pane_t_ParamLimits

0xae53,	// (0x0009ad6f) list_single_fp_cale_pane_g3_ParamLimits

0xae53,	// (0x0009ad6f) list_single_fp_cale_pane_g3

0xdcc7,	// (0x0009dbe3) bg_button_pane_cp012_ParamLimits

0xdcc7,	// (0x0009dbe3) bg_vkb2_func_pane_cp03_ParamLimits

0x7531,	// (0x0009744d) cell_vitu2_function_top_pane_g1_ParamLimits

0xdcc7,	// (0x0009dbe3) bg_vkb2_func_pane_cp04_ParamLimits

0x8377,	// (0x00098293) main_ncimui_button_group_pane_ParamLimits

0x8377,	// (0x00098293) main_ncimui_button_group_pane

0x83c5,	// (0x000982e1) main_ncimui_pane_t3_ParamLimits

0x83c5,	// (0x000982e1) main_ncimui_pane_t3

0xce24,	// (0x0009cd40) phacti_button_group_pane

0xd11d,	// (0x0009d039) aid_size_list_single_double_ParamLimits

0x9441,	// (0x0009935d) popup_ezdial_listscroll_window_ParamLimits

0x945d,	// (0x00099379) popup_number_entry_window_cp01_ParamLimits

0x9515,	// (0x00099431) phacti_button_pane_ParamLimits

0x9515,	// (0x00099431) phacti_button_pane

0x0992,	// (0x000908ae) bg_button_pane_cp14

0xd210,	// (0x0009d12c) phacti_button_pane_t1

0x9526,	// (0x00099442) main_touch_calib_button_pane_ParamLimits

0x9526,	// (0x00099442) main_touch_calib_button_pane

0xa482,	// (0x0009a39e) bg_button_pane_cp18_ParamLimits

0xa482,	// (0x0009a39e) bg_button_pane_cp18

0xd21e,	// (0x0009d13a) main_touch_calib_button_pane_t1_ParamLimits

0xd21e,	// (0x0009d13a) main_touch_calib_button_pane_t1

0xd234,	// (0x0009d150) main_touch_calib_button_pane_t2_ParamLimits

0xd234,	// (0x0009d150) main_touch_calib_button_pane_t2

0x0001,

0xfe54,	// (0x0009fd70) main_touch_calib_button_pane_t_ParamLimits

0xfe54,	// (0x0009fd70) main_touch_calib_button_pane_t

0x0992,	// (0x000908ae) cell_ncimui_button_pane

0x0992,	// (0x000908ae) bg_button_pane_cp032

0xd252,	// (0x0009d16e) cell_ncimui_button_pane_t1

0xb638,	// (0x0009b554) image3_infobar_pane_ParamLimits

0xb638,	// (0x0009b554) image3_infobar_pane

0x877a,	// (0x00098696) fs_bigclock_status_pane_ParamLimits

0x877a,	// (0x00098696) fs_bigclock_status_pane

0x8787,	// (0x000986a3) main_fs_bigclock_clock_pane_ParamLimits

0x8787,	// (0x000986a3) main_fs_bigclock_clock_pane

0x879b,	// (0x000986b7) main_fs_bigclock_indi_pane_ParamLimits

0x879b,	// (0x000986b7) main_fs_bigclock_indi_pane

0x87b6,	// (0x000986d2) main_fs_bigclock_swipe_pane_ParamLimits

0x87b6,	// (0x000986d2) main_fs_bigclock_swipe_pane

0x0992,	// (0x000908ae) main_fs_clock_dumped_data

0xc6dc,	// (0x0009c5f8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc6dc,	// (0x0009c5f8) list_single_fs_bigclock_indicator_pane_g1

0xc706,	// (0x0009c622) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc706,	// (0x0009c622) list_single_fs_bigclock_indicator_pane_g2

0xc720,	// (0x0009c63c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc720,	// (0x0009c63c) list_single_fs_bigclock_indicator_pane_g3

0xc73a,	// (0x0009c656) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc73a,	// (0x0009c656) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc82,	// (0x0009fb9e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc82,	// (0x0009fb9e) list_single_fs_bigclock_indicator_pane_g

0xc765,	// (0x0009c681) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc765,	// (0x0009c681) list_single_fs_bigclock_indicator_pane_t1

0xc78d,	// (0x0009c6a9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc78d,	// (0x0009c6a9) list_single_fs_bigclock_indicator_pane_t2

0xc7b5,	// (0x0009c6d1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc7b5,	// (0x0009c6d1) list_single_fs_bigclock_indicator_pane_t3

0xc7dd,	// (0x0009c6f9) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc7dd,	// (0x0009c6f9) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8d,	// (0x0009fba9) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8d,	// (0x0009fba9) list_single_fs_bigclock_indicator_pane_t

0xd260,	// (0x0009d17c) image3_infobar_fav_pane_ParamLimits

0xd260,	// (0x0009d17c) image3_infobar_fav_pane

0xd270,	// (0x0009d18c) image3_infobar_loc_pane_ParamLimits

0xd270,	// (0x0009d18c) image3_infobar_loc_pane

0xd286,	// (0x0009d1a2) image3_infobar_time_pane_ParamLimits

0xd286,	// (0x0009d1a2) image3_infobar_time_pane

0xaaf9,	// (0x0009aa15) image3_infobar_time_pane_g1

0xd296,	// (0x0009d1b2) image3_infobar_time_pane_t1

0xaaf9,	// (0x0009aa15) image3_infobar_loc_pane_g1

0xd2a4,	// (0x0009d1c0) image3_infobar_loc_pane_g2

0x0001,

0xfe59,	// (0x0009fd75) image3_infobar_loc_pane_g

0xd2ac,	// (0x0009d1c8) image3_infobar_loc_pane_t1

0xaaf9,	// (0x0009aa15) image3_infobar_fav_pane_g1

0xd2ba,	// (0x0009d1d6) image3_infobar_fav_pane_g2

0x0001,

0xfe5e,	// (0x0009fd7a) image3_infobar_fav_pane_g

0xd2c2,	// (0x0009d1de) fs_bigclock_status_battery_pane

0xd2cb,	// (0x0009d1e7) fs_bigclock_status_signal_pane

0xd2d4,	// (0x0009d1f0) fs_bigclock_status_title_pane

0xd2dd,	// (0x0009d1f9) fs_bigclock_status_signal_pane_g1

0xd2e6,	// (0x0009d202) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe63,	// (0x0009fd7f) fs_bigclock_status_signal_pane_g

0xd2ee,	// (0x0009d20a) fs_bigclock_status_battery_pane_g1

0xd2f7,	// (0x0009d213) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe68,	// (0x0009fd84) fs_bigclock_status_battery_pane_g

0xd2ff,	// (0x0009d21b) fs_bigclock_status_title_pane_t1

0xaaf9,	// (0x0009aa15) main_fs_bigclock_clock_pane_g1

0xd30d,	// (0x0009d229) main_fs_bigclock_clock_pane_g2

0xd30d,	// (0x0009d229) main_fs_bigclock_clock_pane_g3

0xd30d,	// (0x0009d229) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6d,	// (0x0009fd89) main_fs_bigclock_clock_pane_g

0xd315,	// (0x0009d231) main_fs_bigclock_clock_pane_t1

0xd323,	// (0x0009d23f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe76,	// (0x0009fd92) main_fs_bigclock_clock_pane_t

0x953b,	// (0x00099457) list_single_fs_bigclock_indicator_pane_ParamLimits

0x953b,	// (0x00099457) list_single_fs_bigclock_indicator_pane

0x954c,	// (0x00099468) list_single_fs_bigclock_pane_ParamLimits

0x954c,	// (0x00099468) list_single_fs_bigclock_pane

0xd33b,	// (0x0009d257) main_fs_bigclock_indicator_pane_t1

0xd34a,	// (0x0009d266) list_single_fs_bigclock_pane_g1

0xd352,	// (0x0009d26e) list_single_fs_bigclock_pane_t1

0xaaf9,	// (0x0009aa15) main_fs_bigclock_swipe_pane_g1

0xd395,	// (0x0009d2b1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe87,	// (0x0009fda3) main_fs_bigclock_swipe_pane_g

0xd39d,	// (0x0009d2b9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd39d,	// (0x0009d2b9) main_fs_bigclock_swipe_pane_t1

0x2a80,	// (0x0009299c) call_type_pane_ParamLimits

0x0992,	// (0x000908ae) main_btmg_pane

0xcff9,	// (0x0009cf15) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcff9,	// (0x0009cf15) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfa,	// (0x0009fd16) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfa,	// (0x0009fd16) list_single_cale_mrui_row_pane_g

0xd157,	// (0x0009d073) list_recal_vselct_arw_lo_pane

0xd15f,	// (0x0009d07b) list_recal_vselct_arw_up_pane

0xbd34,	// (0x0009bc50) list_recal_vselct_pane

0xd3ba,	// (0x0009d2d6) btmg_button_pane

0x95af,	// (0x000994cb) main_btmg_pane_g1

0x0992,	// (0x000908ae) bg_button_pane_cp044

0xd3c4,	// (0x0009d2e0) btmg_button_pane_t1

0x4275,	// (0x00094191) aid_listscroll_gen

0x0c12,	// (0x00090b2e) main_cntbar_detail_pane

0xcd13,	// (0x0009cc2f) list_cmail_folder_pane

0xcd23,	// (0x0009cc3f) sp_fs_scroll_pane_cp03_ParamLimits

0x95b9,	// (0x000994d5) list_single_fs_dyc_pane_cp01_ParamLimits

0x95b9,	// (0x000994d5) list_single_fs_dyc_pane_cp01

0xd3d2,	// (0x0009d2ee) aid_size_cmail_indent

0xd3db,	// (0x0009d2f7) list_single_dyc_row_pane_cp01

0x9603,	// (0x0009951f) cntbar_detail_list_pane_ParamLimits

0x9603,	// (0x0009951f) cntbar_detail_list_pane

0x9655,	// (0x00099571) main_cntbar_detail_cont_pane_ParamLimits

0x9655,	// (0x00099571) main_cntbar_detail_cont_pane

0x29a3,	// (0x000928bf) scroll_pane_cp032_ParamLimits

0x29a3,	// (0x000928bf) scroll_pane_cp032

0x9669,	// (0x00099585) cntbar_detail_list_event_pane_ParamLimits

0x9669,	// (0x00099585) cntbar_detail_list_event_pane

0x9615,	// (0x00099531) cntbar_detail_list_shct_pane

0xda4d,	// (0x0009d969) aid_list_gen

0xd3e4,	// (0x0009d300) aid_scroll

0xd3ed,	// (0x0009d309) aid_size_touch_scroll_bar

0x9679,	// (0x00099595) aid_list_double

0xd3f6,	// (0x0009d312) aid_list_single

0x9682,	// (0x0009959e) aid_list_single_lg

0xd3ff,	// (0x0009d31b) aid_list_z_g_a_sm

0xd407,	// (0x0009d323) aid_list_z_g_d

0xd40f,	// (0x0009d32b) aid_txt_z_prm

0x968b,	// (0x000995a7) aid_txt_z_prm_cp01

0x9699,	// (0x000995b5) aid_txt_z_sec

0x96a7,	// (0x000995c3) main_cntbar_detail_cont_pane_g1_ParamLimits

0x96a7,	// (0x000995c3) main_cntbar_detail_cont_pane_g1

0x96bb,	// (0x000995d7) main_cntbar_detail_cont_pane_g2_ParamLimits

0x96bb,	// (0x000995d7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8c,	// (0x0009fda8) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8c,	// (0x0009fda8) main_cntbar_detail_cont_pane_g

0xd41d,	// (0x0009d339) main_cntbar_detail_cont_pane_t1

0xd42b,	// (0x0009d347) main_cntbar_detail_cont_pane_t2

0xd439,	// (0x0009d355) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe91,	// (0x0009fdad) main_cntbar_detail_cont_pane_t

0x96cb,	// (0x000995e7) cell_cntbar_detail_list_shct_pane_ParamLimits

0x96cb,	// (0x000995e7) cell_cntbar_detail_list_shct_pane

0xd447,	// (0x0009d363) cntbar_detail_list_shct_pane_g1

0xd450,	// (0x0009d36c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe98,	// (0x0009fdb4) cntbar_detail_list_shct_pane_g

0x96dd,	// (0x000995f9) cntbar_detail_list_event_pane_g1_ParamLimits

0x96dd,	// (0x000995f9) cntbar_detail_list_event_pane_g1

0x96e9,	// (0x00099605) cntbar_detail_list_event_pane_g2_ParamLimits

0x96e9,	// (0x00099605) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9d,	// (0x0009fdb9) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9d,	// (0x0009fdb9) cntbar_detail_list_event_pane_g

0x9757,	// (0x00099673) cntbar_detail_list_event_pane_t1_ParamLimits

0x9757,	// (0x00099673) cntbar_detail_list_event_pane_t1

0x976c,	// (0x00099688) cntbar_detail_list_event_pane_t2_ParamLimits

0x976c,	// (0x00099688) cntbar_detail_list_event_pane_t2

0x0002,

0xfeaa,	// (0x0009fdc6) cntbar_detail_list_event_pane_t_ParamLimits

0xfeaa,	// (0x0009fdc6) cntbar_detail_list_event_pane_t

0xaaf9,	// (0x0009aa15) cell_cntbar_detail_list_shct_pane_g1

0x2e3a,	// (0x00092d56) navi_pane_mv_g3

0x0c12,	// (0x00090b2e) main_cntbar_detail_pane_ParamLimits

0x0992,	// (0x000908ae) main_notif_wgt_pane

0xb3c2,	// (0x0009b2de) aid_tch_main_mp4_pane_g4

0xb5c0,	// (0x0009b4dc) popup_slider_window_cp02

0xd14e,	// (0x0009d06a) list_recal_day_event_pane

0x95d3,	// (0x000994ef) cntbar_detail_btn_pane_ParamLimits

0x95d3,	// (0x000994ef) cntbar_detail_btn_pane

0x95eb,	// (0x00099507) cntbar_detail_btn_pane_cp01_ParamLimits

0x95eb,	// (0x00099507) cntbar_detail_btn_pane_cp01

0x9615,	// (0x00099531) cntbar_detail_list_shct_pane_ParamLimits

0x9625,	// (0x00099541) cntbar_detail_pane_g1_ParamLimits

0x9625,	// (0x00099541) cntbar_detail_pane_g1

0x9639,	// (0x00099555) cntbar_detail_pane_t1_ParamLimits

0x9639,	// (0x00099555) cntbar_detail_pane_t1

0x96f5,	// (0x00099611) cntbar_detail_list_event_pane_g3_ParamLimits

0x96f5,	// (0x00099611) cntbar_detail_list_event_pane_g3

0x970d,	// (0x00099629) cntbar_detail_list_event_pane_g4_ParamLimits

0x970d,	// (0x00099629) cntbar_detail_list_event_pane_g4

0x9725,	// (0x00099641) cntbar_detail_list_event_pane_g5_ParamLimits

0x9725,	// (0x00099641) cntbar_detail_list_event_pane_g5

0x973d,	// (0x00099659) cntbar_detail_list_event_pane_g6_ParamLimits

0x973d,	// (0x00099659) cntbar_detail_list_event_pane_g6

0x9781,	// (0x0009969d) cntbar_detail_list_event_pane_t3_ParamLimits

0x9781,	// (0x0009969d) cntbar_detail_list_event_pane_t3

0x9793,	// (0x000996af) popup_notif_wgt_window_ParamLimits

0x9793,	// (0x000996af) popup_notif_wgt_window

0x97ac,	// (0x000996c8) popup_submenu_window_cp01_ParamLimits

0x97ac,	// (0x000996c8) popup_submenu_window_cp01

0xe1a5,	// (0x0009e0c1) bg_popup_window_pane_cp10

0xd459,	// (0x0009d375) listscroll_notif_wgt_pane

0xd463,	// (0x0009d37f) list_notif_wgt_window

0xd46c,	// (0x0009d388) scroll_pane_cp033

0xd475,	// (0x0009d391) list_notif_wgt_row_pane_ParamLimits

0xd475,	// (0x0009d391) list_notif_wgt_row_pane

0xd489,	// (0x0009d3a5) aid_size_list_notif_wgt_del

0xd492,	// (0x0009d3ae) list_notif_wgt_row_pane_g1

0xd49a,	// (0x0009d3b6) list_notif_wgt_row_pane_g2

0xd4a2,	// (0x0009d3be) list_notif_wgt_row_pane_g3

0x0002,

0xfeb1,	// (0x0009fdcd) list_notif_wgt_row_pane_g

0xd4ab,	// (0x0009d3c7) list_notif_wgt_row_pane_t1

0xd4b9,	// (0x0009d3d5) list_notif_wgt_row_pane_t2

0xd4c7,	// (0x0009d3e3) list_notif_wgt_row_pane_t3

0x0002,

0xfeb8,	// (0x0009fdd4) list_notif_wgt_row_pane_t

0xba07,	// (0x0009b923) list_recal_day_event_pane_g1

0xd4d5,	// (0x0009d3f1) list_recal_day_event_pane_t1

0x0992,	// (0x000908ae) bg_button_pane_cp045

0xd4e4,	// (0x0009d400) cntbar_detail_btn_pane_t1

0x4291,	// (0x000941ad) main_callh_pane_ParamLimits

0x4291,	// (0x000941ad) main_callh_pane

0x0992,	// (0x000908ae) main_coverflow0_pane

0x0992,	// (0x000908ae) main_wgtman_pane

0x87c4,	// (0x000986e0) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x87c4,	// (0x000986e0) main_fs_bigclock_unlock_btn_pane

0xccf5,	// (0x0009cc11) bg_button_pane_cp16

0x8fdd,	// (0x00098ef9) cell_tport_appsw_pane_g3

0x97c0,	// (0x000996dc) cf0_flow_pane_ParamLimits

0x97c0,	// (0x000996dc) cf0_flow_pane

0xd4f2,	// (0x0009d40e) listscroll_cf0_pane

0xd4fb,	// (0x0009d417) main_cf0_pane_g1

0x97d5,	// (0x000996f1) main_cf0_pane_t1_ParamLimits

0x97d5,	// (0x000996f1) main_cf0_pane_t1

0x97ec,	// (0x00099708) main_cf0_pane_t2_ParamLimits

0x97ec,	// (0x00099708) main_cf0_pane_t2

0x0001,

0xfebf,	// (0x0009fddb) main_cf0_pane_t_ParamLimits

0xfebf,	// (0x0009fddb) main_cf0_pane_t

0xd505,	// (0x0009d421) scroll_pane_cp11

0x9803,	// (0x0009971f) cf0_flow_pane_g1

0x980f,	// (0x0009972b) cf0_flow_pane_g2

0x0001,

0xfec4,	// (0x0009fde0) cf0_flow_pane_g

0x981b,	// (0x00099737) cf0_flow_pane_t1

0x0992,	// (0x000908ae) main_call6_pane

0x0992,	// (0x000908ae) main_calllock_pane

0x982d,	// (0x00099749) call6_btn_grp_pane_ParamLimits

0x982d,	// (0x00099749) call6_btn_grp_pane

0x9847,	// (0x00099763) call6_pane_g1_ParamLimits

0x9847,	// (0x00099763) call6_pane_g1

0x985d,	// (0x00099779) popup_call6_1st_window_ParamLimits

0x985d,	// (0x00099779) popup_call6_1st_window

0x986e,	// (0x0009978a) popup_call6_2nd_window_ParamLimits

0x986e,	// (0x0009978a) popup_call6_2nd_window

0x987f,	// (0x0009979b) cell_call6_btn_pane_ParamLimits

0x987f,	// (0x0009979b) cell_call6_btn_pane

0xe1a5,	// (0x0009e0c1) bg_popup_call2_in_pane_cp03

0xd510,	// (0x0009d42c) popup_call6_1st_window_g1

0xd518,	// (0x0009d434) popup_call6_1st_window_g2

0xd520,	// (0x0009d43c) popup_call6_1st_window_g3

0x0002,

0xfec9,	// (0x0009fde5) popup_call6_1st_window_g

0xd528,	// (0x0009d444) popup_call6_1st_window_t1

0xd537,	// (0x0009d453) popup_call6_1st_window_t2

0xd547,	// (0x0009d463) popup_call6_1st_window_t3

0x0002,

0xfed0,	// (0x0009fdec) popup_call6_1st_window_t

0xe1a5,	// (0x0009e0c1) bg_popup_call2_in_pane_cp04

0xd510,	// (0x0009d42c) popup_call6_2nd_window_g1

0xd518,	// (0x0009d434) popup_call6_2nd_window_g2

0xd520,	// (0x0009d43c) popup_call6_2nd_window_g3

0x0002,

0xfec9,	// (0x0009fde5) popup_call6_2nd_window_g

0xd528,	// (0x0009d444) popup_call6_2nd_window_t1

0x0992,	// (0x000908ae) bg_button_pane_cp15

0xd557,	// (0x0009d473) cell_call6_btn_pane_g1

0xd560,	// (0x0009d47c) cell_call6_btn_pane_t1

0x9893,	// (0x000997af) listscroll_wgtman_pane_ParamLimits

0x9893,	// (0x000997af) listscroll_wgtman_pane

0x98b6,	// (0x000997d2) wgtman_btn_pane_ParamLimits

0x98b6,	// (0x000997d2) wgtman_btn_pane

0xe06b,	// (0x0009df87) aid_scroll_copy1

0xd56f,	// (0x0009d48b) list_wgtman_pane

0x98f9,	// (0x00099815) wgtman_btn_pane_g1_ParamLimits

0x98f9,	// (0x00099815) wgtman_btn_pane_g1

0x9925,	// (0x00099841) wgtman_btn_pane_t1_ParamLimits

0x9925,	// (0x00099841) wgtman_btn_pane_t1

0xd579,	// (0x0009d495) wgtman_btn_pane_t2_ParamLimits

0xd579,	// (0x0009d495) wgtman_btn_pane_t2

0x0001,

0xfed7,	// (0x0009fdf3) wgtman_btn_pane_t_ParamLimits

0xfed7,	// (0x0009fdf3) wgtman_btn_pane_t

0x9962,	// (0x0009987e) listrow_wgtman_pane_ParamLimits

0x9962,	// (0x0009987e) listrow_wgtman_pane

0x9976,	// (0x00099892) listrow_wgtman_pane_g1

0x997f,	// (0x0009989b) listrow_wgtman_pane_g2

0x0001,

0xfedc,	// (0x0009fdf8) listrow_wgtman_pane_g

0x9989,	// (0x000998a5) listrow_wgtman_pane_t1

0x9997,	// (0x000998b3) listrow_wgtman_pane_t2

0x0001,

0xfee1,	// (0x0009fdfd) listrow_wgtman_pane_t

0x99a5,	// (0x000998c1) wait_bar_pane_cp09

0xd590,	// (0x0009d4ac) main_calllock_btn_pane

0xd59a,	// (0x0009d4b6) main_calllock_pane_g1

0x0992,	// (0x000908ae) bg_button_pane_cp17

0xd5a6,	// (0x0009d4c2) main_calllock_btn_pane_g1

0xd5af,	// (0x0009d4cb) main_calllock_btn_pane_t1

0x0992,	// (0x000908ae) main_dialer3_pane

0x0992,	// (0x000908ae) main_fmrd2_pane

0xaaf9,	// (0x0009aa15) main_fs_bigclock_unlock_btn_pane_g1

0xd5c6,	// (0x0009d4e2) main_fs_bigclock_unlock_btn_pane_t1

0x99ad,	// (0x000998c9) area_fmrd2_info_pane_ParamLimits

0x99ad,	// (0x000998c9) area_fmrd2_info_pane

0x99be,	// (0x000998da) area_fmrd2_visual_pane_ParamLimits

0x99be,	// (0x000998da) area_fmrd2_visual_pane

0x99cc,	// (0x000998e8) fmrd2_indi_pane_ParamLimits

0x99cc,	// (0x000998e8) fmrd2_indi_pane

0x99d9,	// (0x000998f5) area_fmrd2_visual_pane_g1

0x99e1,	// (0x000998fd) area_fmrd2_visual_pane_t1

0x99f1,	// (0x0009990d) area_fmrd2_visual_pane_t2

0x9a01,	// (0x0009991d) area_fmrd2_visual_pane_t3

0x0002,

0xfeeb,	// (0x0009fe07) area_fmrd2_visual_pane_t

0x9a11,	// (0x0009992d) area_fmrd2_info_pane_g1

0x9a19,	// (0x00099935) area_fmrd2_info_pane_t1

0x9a29,	// (0x00099945) area_fmrd2_info_pane_t2

0x9a39,	// (0x00099955) area_fmrd2_info_pane_t3

0x9a49,	// (0x00099965) area_fmrd2_info_pane_t4

0x0003,

0xfef2,	// (0x0009fe0e) area_fmrd2_info_pane_t

0x9a59,	// (0x00099975) fmrd2_indi_pane_t1

0x9a69,	// (0x00099985) fmrd2_indi_pane_t2

0x9a79,	// (0x00099995) fmrd2_indi_pane_t3

0x0002,

0xfefb,	// (0x0009fe17) fmrd2_indi_pane_t

0xc749,	// (0x0009c665) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc749,	// (0x0009c665) list_single_fs_bigclock_indicator_pane_g5

0xc7f2,	// (0x0009c70e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc7f2,	// (0x0009c70e) list_single_fs_bigclock_indicator_pane_t5

0x91a4,	// (0x000990c0) aid_cell_bcale_month_pane_ParamLimits

0x91a4,	// (0x000990c0) aid_cell_bcale_month_pane

0x91b6,	// (0x000990d2) bcale_month_pane_ParamLimits

0x91b6,	// (0x000990d2) bcale_month_pane

0x91d0,	// (0x000990ec) bcale_preview_pane_ParamLimits

0x91d0,	// (0x000990ec) bcale_preview_pane

0xd352,	// (0x0009d26e) list_single_fs_bigclock_pane_t1_ParamLimits

0xd371,	// (0x0009d28d) list_single_fs_bigclock_pane_t2_ParamLimits

0xd371,	// (0x0009d28d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe82,	// (0x0009fd9e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0009fd9e) list_single_fs_bigclock_pane_t

0xd5be,	// (0x0009d4da) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee6,	// (0x0009fe02) main_fs_bigclock_unlock_btn_pane_g

0x9a89,	// (0x000999a5) aid_dia3_key_size_ParamLimits

0x9a89,	// (0x000999a5) aid_dia3_key_size

0x9a98,	// (0x000999b4) aid_dia3_listrow_size_ParamLimits

0x9a98,	// (0x000999b4) aid_dia3_listrow_size

0x9aa6,	// (0x000999c2) dia3_keypad_fun_pane_ParamLimits

0x9aa6,	// (0x000999c2) dia3_keypad_fun_pane

0x9ac2,	// (0x000999de) dia3_keypad_num_pane_ParamLimits

0x9ac2,	// (0x000999de) dia3_keypad_num_pane

0x9adb,	// (0x000999f7) dia3_listscroll_pane_ParamLimits

0x9adb,	// (0x000999f7) dia3_listscroll_pane

0x9af0,	// (0x00099a0c) dia3_numentry_pane_ParamLimits

0x9af0,	// (0x00099a0c) dia3_numentry_pane

0xd5d4,	// (0x0009d4f0) dia3_list_pane

0xd5df,	// (0x0009d4fb) scroll_pane_cp12

0x0992,	// (0x000908ae) bg_dia3_numentry_pane

0xd5ea,	// (0x0009d506) dia3_numentry_pane_t1

0x9b03,	// (0x00099a1f) cell_dia3_key_num_pane

0x9b0b,	// (0x00099a27) cell_dia3_key0_fun_pane_ParamLimits

0x9b0b,	// (0x00099a27) cell_dia3_key0_fun_pane

0x9b1f,	// (0x00099a3b) cell_dia3_key1_fun_pane_ParamLimits

0x9b1f,	// (0x00099a3b) cell_dia3_key1_fun_pane

0x9b37,	// (0x00099a53) dia3_listrow_pane

0xc439,	// (0x0009c355) bg_dia3_numentry_pane_g1

0x0992,	// (0x000908ae) bg_button_pane_cp21

0xd5f9,	// (0x0009d515) cell_dia3_key_num_pane_t1

0xd607,	// (0x0009d523) cell_dia3_key_num_pane_t2

0xd616,	// (0x0009d532) cell_dia3_key_num_pane_t3

0xd625,	// (0x0009d541) cell_dia3_key_num_pane_t4

0x0003,

0xff02,	// (0x0009fe1e) cell_dia3_key_num_pane_t

0x0992,	// (0x000908ae) bg_button_pane_cp19

0x9b49,	// (0x00099a65) cell_dia3_key0_fun_pane_g1

0x0992,	// (0x000908ae) bg_button_pane_cp20

0x9b51,	// (0x00099a6d) cell_dia3_key1_fun_pane_g1

0x9b59,	// (0x00099a75) area_left_week_number_pane

0x9b62,	// (0x00099a7e) area_top_day_name_pane

0x9b6b,	// (0x00099a87) frame_month_view_pane

0x9b77,	// (0x00099a93) grid_month_view_pane

0x9b81,	// (0x00099a9d) cell_top_day_name_pane_ParamLimits

0x9b81,	// (0x00099a9d) cell_top_day_name_pane

0x9b9b,	// (0x00099ab7) cell_area_left_week_number_pane_ParamLimits

0x9b9b,	// (0x00099ab7) cell_area_left_week_number_pane

0x9bb1,	// (0x00099acd) cell_month_view_pane_ParamLimits

0x9bb1,	// (0x00099acd) cell_month_view_pane

0xd634,	// (0x0009d550) frm_month_g1

0x9bd0,	// (0x00099aec) frm_month_g2

0x9bda,	// (0x00099af6) frm_month_g3

0x9be4,	// (0x00099b00) frm_month_g4

0x9bee,	// (0x00099b0a) frm_month_g5

0x9bf8,	// (0x00099b14) frm_month_g6

0x9c04,	// (0x00099b20) frm_month_g7

0xd63d,	// (0x0009d559) frm_month_g8

0x9c10,	// (0x00099b2c) frm_month_g9

0x9c19,	// (0x00099b35) frm_month_g10

0x9c22,	// (0x00099b3e) frm_month_g11

0x9c2b,	// (0x00099b47) frm_month_g12

0x9c34,	// (0x00099b50) frm_month_g13

0x9c3d,	// (0x00099b59) frm_month_g14

0x9c46,	// (0x00099b62) frm_month_g15

0x9c51,	// (0x00099b6d) frm_month_g16

0x000f,

0xff0b,	// (0x0009fe27) frm_month_g

0x9c5c,	// (0x00099b78) cell_top_day_name_pane_t1

0x9c6b,	// (0x00099b87) cell_area_left_week_number_pane_g1

0x9c5c,	// (0x00099b78) cell_area_left_week_number_pane_t1

0xaaf9,	// (0x0009aa15) cell_month_view_pane_g1

0x9c73,	// (0x00099b8f) cell_month_view_pane_t1

0x0992,	// (0x000908ae) main_fps_pane

0xca30,	// (0x0009c94c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xca30,	// (0x0009c94c) cmail_ddmenu_btn02_pane_cp1

0xca4c,	// (0x0009c968) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xca4c,	// (0x0009c968) cmail_ddmenu_btn02_pane_cp2

0x948f,	// (0x000993ab) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x948f,	// (0x000993ab) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x0009fd51) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x0009fd51) cmail_ddmenu_btn02_pane_g

0x94ad,	// (0x000993c9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x94ad,	// (0x000993c9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x0009fd56) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x0009fd56) cmail_ddmenu_btn02_pane_t

0x9c82,	// (0x00099b9e) fps_text_pane_ParamLimits

0x9c82,	// (0x00099b9e) fps_text_pane

0x9c99,	// (0x00099bb5) main_fps_pane_g1_ParamLimits

0x9c99,	// (0x00099bb5) main_fps_pane_g1

0x9cb1,	// (0x00099bcd) wait_bar_pane_cp010_ParamLimits

0x9cb1,	// (0x00099bcd) wait_bar_pane_cp010

0x9cc4,	// (0x00099be0) fps_text_pane_t1_ParamLimits

0x9cc4,	// (0x00099be0) fps_text_pane_t1

0xb71b,	// (0x0009b637) cam4_image_uncrop_pane_g1

0xb724,	// (0x0009b640) cam4_image_uncrop_pane_g2

0x6992,	// (0x000968ae) cam4_image_uncrop_pane_g3

0x699b,	// (0x000968b7) cam4_image_uncrop_pane_g4

0x0003,

0xf908,	// (0x0009f824) cam4_image_uncrop_pane_g

0x9b37,	// (0x00099a53) dia3_listrow_pane_ParamLimits

0x0992,	// (0x000908ae) main_phob2_pane

0x8fa4,	// (0x00098ec0) cell_tport_appsw_pane_cp02_ParamLimits

0x8fa4,	// (0x00098ec0) cell_tport_appsw_pane_cp02

0x8fb8,	// (0x00098ed4) cell_tport_appsw_pane_cp03_ParamLimits

0x8fb8,	// (0x00098ed4) cell_tport_appsw_pane_cp03

0x0992,	// (0x000908ae) phob2_contact_card_pane

0x0992,	// (0x000908ae) phob2_listscroll_pane

0xd646,	// (0x0009d562) phob2_list_pane

0xd64e,	// (0x0009d56a) scroll_pane_cp034

0x9cdc,	// (0x00099bf8) phob2_cc_data_pane_ParamLimits

0x9cdc,	// (0x00099bf8) phob2_cc_data_pane

0x9cfd,	// (0x00099c19) phob2_cc_listscroll_pane_ParamLimits

0x9cfd,	// (0x00099c19) phob2_cc_listscroll_pane

0x9d1f,	// (0x00099c3b) list_double_large_graphic_phob2_pane_ParamLimits

0x9d1f,	// (0x00099c3b) list_double_large_graphic_phob2_pane

0x9d34,	// (0x00099c50) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9d34,	// (0x00099c50) list_double_large_graphic_phob2_pane_g1

0x9d41,	// (0x00099c5d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9d41,	// (0x00099c5d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2c,	// (0x0009fe48) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2c,	// (0x0009fe48) list_double_large_graphic_phob2_pane_g

0x9d4d,	// (0x00099c69) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9d4d,	// (0x00099c69) list_double_large_graphic_phob2_pane_t1

0x9d62,	// (0x00099c7e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9d62,	// (0x00099c7e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff31,	// (0x0009fe4d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff31,	// (0x0009fe4d) list_double_large_graphic_phob2_pane_t

0x0992,	// (0x000908ae) list_highlight_pane_cp024

0xd656,	// (0x0009d572) phob2_cc_button_pane

0x9d74,	// (0x00099c90) phob2_cc_data_pane_g1_ParamLimits

0x9d74,	// (0x00099c90) phob2_cc_data_pane_g1

0x9d8a,	// (0x00099ca6) phob2_cc_data_pane_g2_ParamLimits

0x9d8a,	// (0x00099ca6) phob2_cc_data_pane_g2

0x0001,

0xff36,	// (0x0009fe52) phob2_cc_data_pane_g_ParamLimits

0xff36,	// (0x0009fe52) phob2_cc_data_pane_g

0x9d9e,	// (0x00099cba) phob2_cc_data_pane_t1_ParamLimits

0x9d9e,	// (0x00099cba) phob2_cc_data_pane_t1

0x9db8,	// (0x00099cd4) phob2_cc_data_pane_t2_ParamLimits

0x9db8,	// (0x00099cd4) phob2_cc_data_pane_t2

0x9dd2,	// (0x00099cee) phob2_cc_data_pane_t3_ParamLimits

0x9dd2,	// (0x00099cee) phob2_cc_data_pane_t3

0x0002,

0xff3b,	// (0x0009fe57) phob2_cc_data_pane_t_ParamLimits

0xff3b,	// (0x0009fe57) phob2_cc_data_pane_t

0xd65e,	// (0x0009d57a) phob2_cc_list_pane_ParamLimits

0xd65e,	// (0x0009d57a) phob2_cc_list_pane

0xbaa0,	// (0x0009b9bc) scroll_pane_cp035_ParamLimits

0xbaa0,	// (0x0009b9bc) scroll_pane_cp035

0x0c12,	// (0x00090b2e) bg_button_pane_cp033

0xd66a,	// (0x0009d586) phob2_cc_button_pane_g1

0xd676,	// (0x0009d592) phob2_cc_button_pane_t1

0xd68b,	// (0x0009d5a7) phob2_cc_button_pane_t2

0x0001,

0xff42,	// (0x0009fe5e) phob2_cc_button_pane_t

0x9dec,	// (0x00099d08) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9dec,	// (0x00099d08) list_double_large_graphic_phob2_cc_pane

0x9e01,	// (0x00099d1d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9e01,	// (0x00099d1d) list_double_large_graphic_phob2_cc_pane_g1

0x9e0d,	// (0x00099d29) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9e0d,	// (0x00099d29) list_double_large_graphic_phob2_cc_pane_g2

0x9e19,	// (0x00099d35) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9e19,	// (0x00099d35) list_double_large_graphic_phob2_cc_pane_g3

0x9e25,	// (0x00099d41) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9e25,	// (0x00099d41) list_double_large_graphic_phob2_cc_pane_g4

0x9e31,	// (0x00099d4d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9e31,	// (0x00099d4d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff47,	// (0x0009fe63) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff47,	// (0x0009fe63) list_double_large_graphic_phob2_cc_pane_g

0x9e3d,	// (0x00099d59) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9e3d,	// (0x00099d59) list_double_large_graphic_phob2_cc_pane_t1

0x9e66,	// (0x00099d82) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9e66,	// (0x00099d82) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff52,	// (0x0009fe6e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff52,	// (0x0009fe6e) list_double_large_graphic_phob2_cc_pane_t

0xd69d,	// (0x0009d5b9) list_highlight_pane_cp025_ParamLimits

0xd69d,	// (0x0009d5b9) list_highlight_pane_cp025

0x0c12,	// (0x00090b2e) bg_button_pane_cp033_ParamLimits

0xd66a,	// (0x0009d586) phob2_cc_button_pane_g1_ParamLimits

0xd676,	// (0x0009d592) phob2_cc_button_pane_t1_ParamLimits

0xd68b,	// (0x0009d5a7) phob2_cc_button_pane_t2_ParamLimits

0xff42,	// (0x0009fe5e) phob2_cc_button_pane_t_ParamLimits

0x0c20,	// (0x00090b3c) popup_wgtman_window

0xb8bb,	// (0x0009b7d7) scroll_pane_cp038

0x98db,	// (0x000997f7) wgtman_btn_pane_cp_01_ParamLimits

0x98db,	// (0x000997f7) wgtman_btn_pane_cp_01

0xd6ab,	// (0x0009d5c7) wgtman_content_pane

0xd6b4,	// (0x0009d5d0) wgtman_heading_pane

0x0992,	// (0x000908ae) bg_heading_pane_cp02

0xd6bd,	// (0x0009d5d9) wgtman_heading_pane_g1

0xd6c5,	// (0x0009d5e1) wgtman_heading_pane_t1

0xd6d3,	// (0x0009d5ef) scroll_pane_cp036

0xd6db,	// (0x0009d5f7) wgtman_list_pane

0xd6e3,	// (0x0009d5ff) wgtman_list_pane_t1_ParamLimits

0xd6e3,	// (0x0009d5ff) wgtman_list_pane_t1

0xdc35,	// (0x0009db51) cam4_grid_pane

0x76d1,	// (0x000975ed) bg_button_pane_cp015_ParamLimits

0x76e5,	// (0x00097601) bg_button_pane_cp016_ParamLimits

0x76f8,	// (0x00097614) bg_button_pane_cp017_ParamLimits

0x7750,	// (0x0009766c) popup_vitu2_query_window_g3_ParamLimits

0x7750,	// (0x0009766c) popup_vitu2_query_window_g3

0x780d,	// (0x00097729) popup_vitu2_query_window_t6_ParamLimits

0x780d,	// (0x00097729) popup_vitu2_query_window_t6

0x7838,	// (0x00097754) popup_vitu2_query_window_t7_ParamLimits

0x7838,	// (0x00097754) popup_vitu2_query_window_t7

0xb71b,	// (0x0009b637) cam4_grid_pane_g1

0xb724,	// (0x0009b640) cam4_grid_pane_g2

0xd706,	// (0x0009d622) cam4_grid_pane_g3

0xd70f,	// (0x0009d62b) cam4_grid_pane_g4

0x0003,

0xff57,	// (0x0009fe73) cam4_grid_pane_g

0x1ba0,	// (0x00091abc) aid_placing_vt_slider_lsc_ParamLimits

0x1e8d,	// (0x00091da9) vidtel_button_pane_ParamLimits

0x1e8d,	// (0x00091da9) vidtel_button_pane

0xd71a,	// (0x0009d636) bg_button_pane_cp034

0x9e8f,	// (0x00099dab) vidtel_button_pane_g1

0xd724,	// (0x0009d640) vidtel_button_pane_t1

0xb9bf,	// (0x0009b8db) aid_size_vtel_slider_touch

0xbaa0,	// (0x0009b9bc) scroll_pane_cp039

0xc477,	// (0x0009c393) ncim_query_button_pane_cp01_ParamLimits

0xc496,	// (0x0009c3b2) ncimui_query_pane_g1_ParamLimits

0x0c12,	// (0x00090b2e) input_focus_pane_cp012_ParamLimits

0xc4bb,	// (0x0009c3d7) ncim_query_entry_pane_t1_ParamLimits

0xbaa0,	// (0x0009b9bc) scroll_pane_cp039_ParamLimits

0x2dac,	// (0x00092cc8) navi_pane_bcale_mc_g1

0x2db4,	// (0x00092cd0) navi_pane_bcale_mc_t1

0xca97,	// (0x0009c9b3) main_sp_fs_email_pane_g1

0xca9f,	// (0x0009c9bb) main_sp_fs_email_pane_g2

0x0001,

0xfcf3,	// (0x0009fc0f) main_sp_fs_email_pane_g

0xd005,	// (0x0009cf21) list_single_cale_mrui_row_pane_g3_ParamLimits

0xd005,	// (0x0009cf21) list_single_cale_mrui_row_pane_g3

0x94d5,	// (0x000993f1) list_single_recal_day_pane_g5_event_pane

0xd1c0,	// (0x0009d0dc) list_single_recal_day_pane_g7

0xd732,	// (0x0009d64e) list_recal_day_event_pane_cp01

0xd73b,	// (0x0009d657) list_recal_vselct_arw_lo_pane_cp01

0xd743,	// (0x0009d65f) list_recal_vselct_arw_up_pane_cp01

0xd74b,	// (0x0009d667) list_recal_vselct_pane_cp01

0xba07,	// (0x0009b923) list_recal_day_event_pane_cp01_g1

0xd755,	// (0x0009d671) list_recal_day_event_pane_cp01_t1

0xd1c8,	// (0x0009d0e4) list_single_recal_day_pane_t1_ParamLimits

0xd1da,	// (0x0009d0f6) list_single_recal_day_pane_t2_ParamLimits

0xfe4a,	// (0x0009fd66) list_single_recal_day_pane_t_ParamLimits

0xa42e,	// (0x0009a34a) bg_notes_pane_ParamLimits

0xa43c,	// (0x0009a358) list_notes_pane_ParamLimits

0x1144,	// (0x00091060) scroll_pane_cp06_ParamLimits

0xa482,	// (0x0009a39e) main_notes_pane_ParamLimits

0x0992,	// (0x000908ae) main_welc_pane

0x9e97,	// (0x00099db3) main_welc_body_pane_ParamLimits

0x9e97,	// (0x00099db3) main_welc_body_pane

0x9ead,	// (0x00099dc9) main_welc_opti_pane_ParamLimits

0x9ead,	// (0x00099dc9) main_welc_opti_pane

0x9ec4,	// (0x00099de0) main_welc_pane_t1_ParamLimits

0x9ec4,	// (0x00099de0) main_welc_pane_t1

0xd763,	// (0x0009d67f) main_welc_body_row_pane_ParamLimits

0xd763,	// (0x0009d67f) main_welc_body_row_pane

0x9edd,	// (0x00099df9) main_welc_opti_row_pane_ParamLimits

0x9edd,	// (0x00099df9) main_welc_opti_row_pane

0xd77a,	// (0x0009d696) main_welc_opti_row_pane_g1

0xd782,	// (0x0009d69e) main_welc_opti_row_pane_t1

0xd791,	// (0x0009d6ad) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
