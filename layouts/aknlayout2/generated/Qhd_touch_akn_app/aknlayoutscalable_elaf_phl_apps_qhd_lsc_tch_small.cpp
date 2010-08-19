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

#include "aknlayoutscalable_elaf_phl_apps_qhd_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0003bdf9 };

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
0x36b2,	// (0x0003f4ab) Screen

0x36be,	// (0x0003f4b7) application_window

0x36fa,	// (0x0003f4f3) area_bottom_pane_ParamLimits

0x36fa,	// (0x0003f4f3) area_bottom_pane

0x3733,	// (0x0003f52c) area_top_pane_ParamLimits

0x3733,	// (0x0003f52c) area_top_pane

0xc05c,	// (0x00047e55) call_video_uplink_pane_ParamLimits

0xc05c,	// (0x00047e55) call_video_uplink_pane

0x37c1,	// (0x0003f5ba) main_pane_ParamLimits

0x37c1,	// (0x0003f5ba) main_pane

0x74d4,	// (0x000432cd) context_pane

0x74e7,	// (0x000432e0) navi_pane

0x7519,	// (0x00043312) popup_cale_events_window_ParamLimits

0x7519,	// (0x00043312) popup_cale_events_window

0x7531,	// (0x0004332a) popup_mup_playback_window

0x7539,	// (0x00043332) signal_pane

0x0f70,	// (0x0003cd69) main_browser_pane

0x1122,	// (0x0003cf1b) main_burst_pane

0x721c,	// (0x00043015) main_calc_pane

0x7230,	// (0x00043029) main_cale_day_pane

0x3ca9,	// (0x0003faa2) main_cale_month_pane

0x7230,	// (0x00043029) main_cale_week_pane

0x1122,	// (0x0003cf1b) main_call_pane

0x0c28,	// (0x0003ca21) main_call_poc_pane

0x1122,	// (0x0003cf1b) main_camera_pane

0x1122,	// (0x0003cf1b) main_chi_dic_pane

0x1907,	// (0x0003d700) main_clock_pane

0x0c28,	// (0x0003ca21) main_fmradio_pane

0x1122,	// (0x0003cf1b) main_graph_messa_pane

0x0c28,	// (0x0003ca21) main_help_pane

0x0f70,	// (0x0003cd69) main_im_pane

0x0e83,	// (0x0003cc7c) main_image_pane_ParamLimits

0x0e83,	// (0x0003cc7c) main_image_pane

0x0c28,	// (0x0003ca21) main_location2_pane

0x1122,	// (0x0003cf1b) main_location_pane

0x0e83,	// (0x0003cc7c) main_messa_pane

0x0c28,	// (0x0003ca21) main_mp2_pane

0x1122,	// (0x0003cf1b) main_mp_pane

0x0c28,	// (0x0003ca21) main_msg_pane

0x0c28,	// (0x0003ca21) main_mup_eq_pane

0x0c28,	// (0x0003ca21) main_mup_pane

0x0f70,	// (0x0003cd69) main_notes_pane

0x0c28,	// (0x0003ca21) main_pec_pane

0x0c28,	// (0x0003ca21) main_phob_pane

0x0c28,	// (0x0003ca21) main_pinb_pane

0x0c28,	// (0x0003ca21) main_postcard_pane

0x0c28,	// (0x0003ca21) main_qdial_pane

0x1122,	// (0x0003cf1b) main_skin_pane

0x0c28,	// (0x0003ca21) main_smil2_pane

0x1122,	// (0x0003cf1b) main_smil_pane

0x1122,	// (0x0003cf1b) main_video_pane

0x1122,	// (0x0003cf1b) main_video_tele_pane

0x0e83,	// (0x0003cc7c) main_viewer_pane_ParamLimits

0x0e83,	// (0x0003cc7c) main_viewer_pane

0x1122,	// (0x0003cf1b) main_vorec_pane

0x7288,	// (0x00043081) popup_blid_sat_info_window_ParamLimits

0x7288,	// (0x00043081) popup_blid_sat_info_window

0x72e0,	// (0x000430d9) popup_dyc_status_message_window_ParamLimits

0x72e0,	// (0x000430d9) popup_dyc_status_message_window

0x72fa,	// (0x000430f3) popup_grid_large_graphic_window_ParamLimits

0x72fa,	// (0x000430f3) popup_grid_large_graphic_window

0x73b6,	// (0x000431af) popup_loc_request_window_ParamLimits

0x73b6,	// (0x000431af) popup_loc_request_window

0x74ac,	// (0x000432a5) popup_wml_address_window_ParamLimits

0x74ac,	// (0x000432a5) popup_wml_address_window

0x701d,	// (0x00042e16) call_muted_g1

0x5e09,	// (0x00041c02) popup_call_audio_conf_window_ParamLimits

0x5e09,	// (0x00041c02) popup_call_audio_conf_window

0x7031,	// (0x00042e2a) popup_call_audio_first_window_ParamLimits

0x7031,	// (0x00042e2a) popup_call_audio_first_window

0x70a7,	// (0x00042ea0) popup_call_audio_in_window_ParamLimits

0x70a7,	// (0x00042ea0) popup_call_audio_in_window

0x70e3,	// (0x00042edc) popup_call_audio_out_window_ParamLimits

0x70e3,	// (0x00042edc) popup_call_audio_out_window

0x711d,	// (0x00042f16) popup_call_audio_second_window_ParamLimits

0x711d,	// (0x00042f16) popup_call_audio_second_window

0x7173,	// (0x00042f6c) popup_call_audio_wait_window_ParamLimits

0x7173,	// (0x00042f6c) popup_call_audio_wait_window

0x71a8,	// (0x00042fa1) popup_number_entry_window_ParamLimits

0x71a8,	// (0x00042fa1) popup_number_entry_window

0x0815,	// (0x0003c60e) bg_popup_call_pane_cp05_ParamLimits

0x0815,	// (0x0003c60e) bg_popup_call_pane_cp05

0x0835,	// (0x0003c62e) popup_number_entry_window_t1

0x0848,	// (0x0003c641) popup_number_entry_window_t2

0x085a,	// (0x0003c653) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x0004ae7e) popup_number_entry_window_t

0x086c,	// (0x0003c665) text_title_cp2

0x087f,	// (0x0003c678) bg_popup_call_pane_cp_ParamLimits

0x087f,	// (0x0003c678) bg_popup_call_pane_cp

0x088d,	// (0x0003c686) call_thumbnail_pane

0x0895,	// (0x0003c68e) popup_call_audio_in_window_g1_ParamLimits

0x0895,	// (0x0003c68e) popup_call_audio_in_window_g1

0x08a1,	// (0x0003c69a) popup_call_audio_in_window_g2_ParamLimits

0x08a1,	// (0x0003c69a) popup_call_audio_in_window_g2

0x08ad,	// (0x0003c6a6) popup_call_audio_in_window_g3_ParamLimits

0x08ad,	// (0x0003c6a6) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x0004ae87) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x0004ae87) popup_call_audio_in_window_g

0x08b9,	// (0x0003c6b2) popup_call_audio_in_window_t1_ParamLimits

0x08b9,	// (0x0003c6b2) popup_call_audio_in_window_t1

0x08d5,	// (0x0003c6ce) popup_call_audio_in_window_t2_ParamLimits

0x08d5,	// (0x0003c6ce) popup_call_audio_in_window_t2

0x08f1,	// (0x0003c6ea) popup_call_audio_in_window_t3_ParamLimits

0x08f1,	// (0x0003c6ea) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x0004ae8e) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x0004ae8e) popup_call_audio_in_window_t

0x087f,	// (0x0003c678) bg_popup_call_pane_cp01_ParamLimits

0x087f,	// (0x0003c678) bg_popup_call_pane_cp01

0x088d,	// (0x0003c686) call_thumbnail_pane_cp02

0x0904,	// (0x0003c6fd) call_type_pane_cp022

0x090c,	// (0x0003c705) popup_call_audio_out_window_g1_ParamLimits

0x090c,	// (0x0003c705) popup_call_audio_out_window_g1

0x091e,	// (0x0003c717) popup_call_audio_out_window_g2_ParamLimits

0x091e,	// (0x0003c717) popup_call_audio_out_window_g2

0x092a,	// (0x0003c723) popup_call_audio_out_window_g3_ParamLimits

0x092a,	// (0x0003c723) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x0004ae95) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x0004ae95) popup_call_audio_out_window_g

0x093c,	// (0x0003c735) popup_call_audio_out_window_t1_ParamLimits

0x093c,	// (0x0003c735) popup_call_audio_out_window_t1

0x0954,	// (0x0003c74d) popup_call_audio_out_window_t2_ParamLimits

0x0954,	// (0x0003c74d) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x0004ae9c) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x0004ae9c) popup_call_audio_out_window_t

0x0969,	// (0x0003c762) bg_popup_call_pane_ParamLimits

0x0969,	// (0x0003c762) bg_popup_call_pane

0x397d,	// (0x0003f776) call_thumbnail_pane_cp_ParamLimits

0x397d,	// (0x0003f776) call_thumbnail_pane_cp

0x09ed,	// (0x0003c7e6) call_type_pane_cp01_ParamLimits

0x09ed,	// (0x0003c7e6) call_type_pane_cp01

0x0a31,	// (0x0003c82a) popup_call_audio_first_window_g1_ParamLimits

0x0a31,	// (0x0003c82a) popup_call_audio_first_window_g1

0x0a7d,	// (0x0003c876) popup_call_audio_first_window_g2_ParamLimits

0x0a7d,	// (0x0003c876) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0004aea1) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0004aea1) popup_call_audio_first_window_g

0x0ac1,	// (0x0003c8ba) popup_call_audio_first_window_t1_ParamLimits

0x0ac1,	// (0x0003c8ba) popup_call_audio_first_window_t1

0x0b6d,	// (0x0003c966) popup_call_audio_first_window_t4_ParamLimits

0x0b6d,	// (0x0003c966) popup_call_audio_first_window_t4

0x0bf9,	// (0x0003c9f2) popup_call_audio_first_window_t5_ParamLimits

0x0bf9,	// (0x0003c9f2) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x0004aea6) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x0004aea6) popup_call_audio_first_window_t

0x0c28,	// (0x0003ca21) bg_popup_call_pane_cp02

0x0c32,	// (0x0003ca2b) call_type_pane_cp023

0x0c3a,	// (0x0003ca33) popup_call_audio_wait_window_g1

0x0c42,	// (0x0003ca3b) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x0004aead) popup_call_audio_wait_window_g

0x0c4a,	// (0x0003ca43) popup_call_audio_wait_window_t3

0x0c58,	// (0x0003ca51) bg_popup_call_pane_cp03_ParamLimits

0x0c58,	// (0x0003ca51) bg_popup_call_pane_cp03

0x0cb8,	// (0x0003cab1) call_thumbnail_pane_cp011_ParamLimits

0x0cb8,	// (0x0003cab1) call_thumbnail_pane_cp011

0x0cc4,	// (0x0003cabd) call_type_pane_cp034_ParamLimits

0x0cc4,	// (0x0003cabd) call_type_pane_cp034

0x0d00,	// (0x0003caf9) popup_call_audio_second_window_g1_ParamLimits

0x0d00,	// (0x0003caf9) popup_call_audio_second_window_g1

0x0d3c,	// (0x0003cb35) popup_call_audio_second_window_g2_ParamLimits

0x0d3c,	// (0x0003cb35) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0004aeb2) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0004aeb2) popup_call_audio_second_window_g

0x0d78,	// (0x0003cb71) popup_call_audio_second_window_t1_ParamLimits

0x0d78,	// (0x0003cb71) popup_call_audio_second_window_t1

0x0df9,	// (0x0003cbf2) popup_call_audio_second_window_t2_ParamLimits

0x0df9,	// (0x0003cbf2) popup_call_audio_second_window_t2

0x0e2f,	// (0x0003cc28) popup_call_audio_second_window_t3_ParamLimits

0x0e2f,	// (0x0003cc28) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x0004aeb7) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x0004aeb7) popup_call_audio_second_window_t

0x0c28,	// (0x0003ca21) bg_popup_call_pane_cp04

0x0e65,	// (0x0003cc5e) list_conf_pane

0x0e6d,	// (0x0003cc66) popup_call_audio_conf_window_t1

0x0e7b,	// (0x0003cc74) call_thumbnail_pane_g1

0x0e83,	// (0x0003cc7c) bg_pinb_pane_ParamLimits

0x0e83,	// (0x0003cc7c) bg_pinb_pane

0x0e91,	// (0x0003cc8a) find_pinb_pane

0x0e83,	// (0x0003cc7c) listscroll_pinb_pane_ParamLimits

0x0e83,	// (0x0003cc7c) listscroll_pinb_pane

0x0e9b,	// (0x0003cc94) pinb_bg_pane_g1

0x0e9b,	// (0x0003cc94) pinb_bg_pane_g2

0x0e9b,	// (0x0003cc94) pinb_bg_pane_g3

0x0e9b,	// (0x0003cc94) pinb_bg_pane_g4

0x0e9b,	// (0x0003cc94) pinb_bg_pane_g5

0x0e9b,	// (0x0003cc94) pinb_bg_pane_g6

0x0e9b,	// (0x0003cc94) pinb_bg_pane_g7

0x0e9b,	// (0x0003cc94) pinb_bg_pane_g8

0x0e9b,	// (0x0003cc94) pinb_bg_pane_g9

0x0e9b,	// (0x0003cc94) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x0004aebe) pinb_bg_pane_g

0x07fd,	// (0x0003c5f6) grid_pinb_pane

0x07fd,	// (0x0003c5f6) list_pinb_pane

0x0ea5,	// (0x0003cc9e) scroll_pane_cp01_ParamLimits

0x0ea5,	// (0x0003cc9e) scroll_pane_cp01

0x0eb3,	// (0x0003ccac) find_pinb_pane_g1_ParamLimits

0x0eb3,	// (0x0003ccac) find_pinb_pane_g1

0x0ecb,	// (0x0003ccc4) find_pinb_pane_t1

0x0edd,	// (0x0003ccd6) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x0004aed8) find_pinb_pane_t

0x0ef2,	// (0x0003cceb) input_focus_pane_cp01_ParamLimits

0x0ef2,	// (0x0003cceb) input_focus_pane_cp01

0x0807,	// (0x0003c600) cell_pinb_pane_ParamLimits

0x0807,	// (0x0003c600) cell_pinb_pane

0x0efe,	// (0x0003ccf7) cell_pinb_pane_g1_ParamLimits

0x0efe,	// (0x0003ccf7) cell_pinb_pane_g1

0x0f0c,	// (0x0003cd05) cell_pinb_pane_g2_ParamLimits

0x0f0c,	// (0x0003cd05) cell_pinb_pane_g2

0x0f0c,	// (0x0003cd05) cell_pinb_pane_g3_ParamLimits

0x0f0c,	// (0x0003cd05) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x0004aedd) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x0004aedd) cell_pinb_pane_g

0x0c28,	// (0x0003ca21) grid_highlight_pane_cp01

0x0807,	// (0x0003c600) list_pinb_item_pane_ParamLimits

0x0807,	// (0x0003c600) list_pinb_item_pane

0x07fd,	// (0x0003c5f6) list_highlight_pane_cp02

0x0f1a,	// (0x0003cd13) list_pinb_item_pane_g1_ParamLimits

0x0f1a,	// (0x0003cd13) list_pinb_item_pane_g1

0x0f0c,	// (0x0003cd05) list_pinb_item_pane_g2_ParamLimits

0x0f0c,	// (0x0003cd05) list_pinb_item_pane_g2

0x0efe,	// (0x0003ccf7) list_pinb_item_pane_g3_ParamLimits

0x0efe,	// (0x0003ccf7) list_pinb_item_pane_g3

0x0f0c,	// (0x0003cd05) list_pinb_item_pane_g4_ParamLimits

0x0f0c,	// (0x0003cd05) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0004aee4) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0004aee4) list_pinb_item_pane_g

0x0f28,	// (0x0003cd21) list_pinb_item_pane_t1_ParamLimits

0x0f28,	// (0x0003cd21) list_pinb_item_pane_t1

0x39bf,	// (0x0003f7b8) calc_display_pane

0x39e4,	// (0x0003f7dd) calc_paper_pane

0x3a07,	// (0x0003f800) grid_calc_pane

0x0c28,	// (0x0003ca21) bg_list_pane_cp01

0x3a35,	// (0x0003f82e) clock_g1

0x3a3d,	// (0x0003f836) clock_g2

0x0001,

0xf0f4,	// (0x0004aeed) clock_g

0x3a45,	// (0x0003f83e) clock_t1_ParamLimits

0x3a45,	// (0x0003f83e) clock_t1

0x3a5a,	// (0x0003f853) clock_t2_ParamLimits

0x3a5a,	// (0x0003f853) clock_t2

0x3a6c,	// (0x0003f865) clock_t3_ParamLimits

0x3a6c,	// (0x0003f865) clock_t3

0x3a7e,	// (0x0003f877) clock_t4_ParamLimits

0x3a7e,	// (0x0003f877) clock_t4

0x3a90,	// (0x0003f889) clock_t5_ParamLimits

0x3a90,	// (0x0003f889) clock_t5

0x3aa5,	// (0x0003f89e) clock_t6_ParamLimits

0x3aa5,	// (0x0003f89e) clock_t6

0x3ab7,	// (0x0003f8b0) clock_t7_ParamLimits

0x3ab7,	// (0x0003f8b0) clock_t7

0x3ac9,	// (0x0003f8c2) clock_t8_ParamLimits

0x3ac9,	// (0x0003f8c2) clock_t8

0x3add,	// (0x0003f8d6) clock_t9_ParamLimits

0x3add,	// (0x0003f8d6) clock_t9

0x0008,

0xf0f9,	// (0x0004aef2) clock_t_ParamLimits

0xf0f9,	// (0x0004aef2) clock_t

0x0f3c,	// (0x0003cd35) popup_clock_analogue_window_cp02

0x0f3c,	// (0x0003cd35) popup_clock_digital_window_cp01

0x0c28,	// (0x0003ca21) listscroll_help_pane

0x0c28,	// (0x0003ca21) phob_pre_status_pane

0x0f44,	// (0x0003cd3d) grid_qdial_pane

0x0e83,	// (0x0003cc7c) listscroll_mce_pane

0x0e83,	// (0x0003cc7c) bg_notes_pane

0x0f4e,	// (0x0003cd47) list_notes_pane

0x3af1,	// (0x0003f8ea) scroll_pane_cp06

0x0f5c,	// (0x0003cd55) bg_calc_paper_pane

0xc082,	// (0x00047e7b) list_calc_pane

0x0f70,	// (0x0003cd69) bg_calc_display_pane

0x3b05,	// (0x0003f8fe) calc_display_pane_t1

0x3b1a,	// (0x0003f913) calc_display_pane_t2

0xc09c,	// (0x00047e95) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0004af05) calc_display_pane_t

0x3b2f,	// (0x0003f928) cell_calc_pane_ParamLimits

0x3b2f,	// (0x0003f928) cell_calc_pane

0x0f7c,	// (0x0003cd75) bg_calc_paper_pane_g1

0x0f88,	// (0x0003cd81) bg_calc_paper_pane_g2

0x0f94,	// (0x0003cd8d) bg_calc_paper_pane_g3

0x0fa0,	// (0x0003cd99) bg_calc_paper_pane_g4

0x0fac,	// (0x0003cda5) bg_calc_paper_pane_g5

0x3b64,	// (0x0003f95d) bg_calc_paper_pane_g6

0x3b73,	// (0x0003f96c) bg_calc_paper_pane_g7

0x3b82,	// (0x0003f97b) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x0004af0c) bg_calc_paper_pane_g

0x3b95,	// (0x0003f98e) calc_bg_paper_pane_g9

0x3ba8,	// (0x0003f9a1) list_calc_item_pane_ParamLimits

0x3ba8,	// (0x0003f9a1) list_calc_item_pane

0x0fb8,	// (0x0003cdb1) list_calc_item_pane_g1

0xc0ae,	// (0x00047ea7) list_calc_item_pane_t1_ParamLimits

0xc0ae,	// (0x00047ea7) list_calc_item_pane_t1

0x3bc0,	// (0x0003f9b9) list_calc_item_pane_t2_ParamLimits

0x3bc0,	// (0x0003f9b9) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x0004af1d) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x0004af1d) list_calc_item_pane_t

0x0e9b,	// (0x0003cc94) cell_calc_pane_g1

0x0fc5,	// (0x0003cdbe) grid_highlight_pane_cp02

0x1f8e,	// (0x0003dd87) bg_calc_display_pane_g1

0x3bf2,	// (0x0003f9eb) bg_calc_display_pane_g2

0x3bfc,	// (0x0003f9f5) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0004af27) bg_calc_display_pane_g

0x3c05,	// (0x0003f9fe) cell_qdial_pane_ParamLimits

0x3c05,	// (0x0003f9fe) cell_qdial_pane

0x3c19,	// (0x0003fa12) cell_qdial_pane_g1_ParamLimits

0x3c19,	// (0x0003fa12) cell_qdial_pane_g1

0x3c2f,	// (0x0003fa28) cell_qdial_pane_g2_ParamLimits

0x3c2f,	// (0x0003fa28) cell_qdial_pane_g2

0x0fe7,	// (0x0003cde0) cell_qdial_pane_g3_ParamLimits

0x0fe7,	// (0x0003cde0) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x0004af2e) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x0004af2e) cell_qdial_pane_g

0x3c56,	// (0x0003fa4f) cell_qdial_pane_t1_ParamLimits

0x3c56,	// (0x0003fa4f) cell_qdial_pane_t1

0x3c6e,	// (0x0003fa67) cell_qdial_pane_t2_ParamLimits

0x3c6e,	// (0x0003fa67) cell_qdial_pane_t2

0x3c81,	// (0x0003fa7a) cell_qdial_pane_t3_ParamLimits

0x3c81,	// (0x0003fa7a) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0004af37) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0004af37) cell_qdial_pane_t

0x0c28,	// (0x0003ca21) grid_highlight_pane_cp04

0x0ff3,	// (0x0003cdec) thumbnail_qdial_pane_ParamLimits

0x0ff3,	// (0x0003cdec) thumbnail_qdial_pane

0x104f,	// (0x0003ce48) list_help_pane

0x1058,	// (0x0003ce51) scroll_pane_cp02

0x1f97,	// (0x0003dd90) help_list_pane_t1_ParamLimits

0x1f97,	// (0x0003dd90) help_list_pane_t1

0xc0c0,	// (0x00047eb9) bg_notes_pane_g2

0xc0c8,	// (0x00047ec1) bg_notes_pane_g3

0xc0d0,	// (0x00047ec9) notes_bg_pane_g1

0xc0d8,	// (0x00047ed1) notes_bg_pane_g4

0xc0e0,	// (0x00047ed9) notes_bg_pane_g5

0xc0e8,	// (0x00047ee1) notes_bg_pane_g6

0xc0f0,	// (0x00047ee9) notes_bg_pane_g7

0xc0f8,	// (0x00047ef1) notes_bg_pane_g8

0xc100,	// (0x00047ef9) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0004af55) notes_bg_pane_g

0x3c94,	// (0x0003fa8d) list_notes_text_pane_ParamLimits

0x3c94,	// (0x0003fa8d) list_notes_text_pane

0x1061,	// (0x0003ce5a) list_notes_text_pane_g1

0x2df0,	// (0x0003ebe9) list_notes_text_pane_t1

0x3ca9,	// (0x0003faa2) listscroll_cale_week_pane

0x3cd5,	// (0x0003face) bg_cale_heading_pane

0x1084,	// (0x0003ce7d) bg_cale_pane_cp01

0x3ced,	// (0x0003fae6) cale_week_corner_pane

0x3d0c,	// (0x0003fb05) cale_week_day_heading_pane

0x3d29,	// (0x0003fb22) cale_week_scroll_pane_g1

0x3d3c,	// (0x0003fb35) cale_week_scroll_pane_g2

0x3d54,	// (0x0003fb4d) cale_week_scroll_pane_g3

0x3d6c,	// (0x0003fb65) cale_week_scroll_pane_g4

0x3d84,	// (0x0003fb7d) cale_week_scroll_pane_g5

0x3da4,	// (0x0003fb9d) cale_week_scroll_pane_g6

0x3dc4,	// (0x0003fbbd) cale_week_scroll_pane_g7

0x3de4,	// (0x0003fbdd) cale_week_scroll_pane_g8

0x3e08,	// (0x0003fc01) cale_week_scroll_pane_g9

0x3e20,	// (0x0003fc19) cale_week_scroll_pane_g10

0x3e38,	// (0x0003fc31) cale_week_scroll_pane_g11

0x3e50,	// (0x0003fc49) cale_week_scroll_pane_g12

0x3e68,	// (0x0003fc61) cale_week_scroll_pane_g13

0x3e68,	// (0x0003fc61) cale_week_scroll_pane_g14

0x3e68,	// (0x0003fc61) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0004af64) cale_week_scroll_pane_g

0x3ea4,	// (0x0003fc9d) cale_week_time_pane

0x3ec8,	// (0x0003fcc1) grid_cale_week_pane

0x10b3,	// (0x0003ceac) scroll_pane_cp08

0x3eee,	// (0x0003fce7) cell_cale_week_pane_ParamLimits

0x3eee,	// (0x0003fce7) cell_cale_week_pane

0x3f7c,	// (0x0003fd75) cale_week_day_heading_pane_t1

0x3fa6,	// (0x0003fd9f) cale_week_day_heading_pane_t2

0x3fd5,	// (0x0003fdce) cale_week_day_heading_pane_t3

0x4004,	// (0x0003fdfd) cale_week_day_heading_pane_t4

0x4033,	// (0x0003fe2c) cale_week_day_heading_pane_t5

0x406a,	// (0x0003fe63) cale_week_day_heading_pane_t6

0x40a1,	// (0x0003fe9a) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x0004af85) cale_week_day_heading_pane_t

0x10d0,	// (0x0003cec9) bg_cale_side_pane

0x40cb,	// (0x0003fec4) cale_week_time_pane_t1

0x40e5,	// (0x0003fede) cale_week_time_pane_t2

0x40ff,	// (0x0003fef8) cale_week_time_pane_t3

0x4119,	// (0x0003ff12) cale_week_time_pane_t4

0x4133,	// (0x0003ff2c) cale_week_time_pane_t5

0x414d,	// (0x0003ff46) cale_week_time_pane_t6

0x4167,	// (0x0003ff60) cale_week_time_pane_t7

0x4181,	// (0x0003ff7a) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0004af94) cale_week_time_pane_t

0x419b,	// (0x0003ff94) cell_cale_week_pane_g2

0x41ba,	// (0x0003ffb3) cell_cale_week_pane_g3_ParamLimits

0x41ba,	// (0x0003ffb3) cell_cale_week_pane_g3

0x10de,	// (0x0003ced7) grid_highlight_pane_cp07

0x10e6,	// (0x0003cedf) listscroll_gms_pane

0x10f0,	// (0x0003cee9) grid_gms_pane

0x10f9,	// (0x0003cef2) listscroll_gms_pane_g1

0x1101,	// (0x0003cefa) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x0004afa5) listscroll_gms_pane_g

0x41d2,	// (0x0003ffcb) scroll_pane_cp010

0x41dd,	// (0x0003ffd6) cell_gms_pane_ParamLimits

0x41dd,	// (0x0003ffd6) cell_gms_pane

0x41f0,	// (0x0003ffe9) cell_gms_pane_g1

0x1109,	// (0x0003cf02) cell_gms_pane_g2

0x1061,	// (0x0003ce5a) cell_gms_pane_g3

0x1111,	// (0x0003cf0a) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x0004afaa) cell_gms_pane_g

0x111a,	// (0x0003cf13) grid_highlight_pane_cp09

0x6fa5,	// (0x00042d9e) phob_pre_status_pane_g1

0x6fad,	// (0x00042da6) phob_pre_status_pane_g2

0x6fb5,	// (0x00042dae) phob_pre_status_pane_g3

0x6fbd,	// (0x00042db6) phob_pre_status_pane_g4

0x0004,

0xf570,	// (0x0004b369) phob_pre_status_pane_g

0x6fcd,	// (0x00042dc6) phob_pre_status_pane_t1

0x6fdb,	// (0x00042dd4) phob_pre_status_pane_t2

0x6feb,	// (0x00042de4) phob_pre_status_pane_t3

0x0002,

0xf57b,	// (0x0004b374) phob_pre_status_pane_t

0x1122,	// (0x0003cf1b) bg_list_pane_cp05

0x4200,	// (0x0003fff9) grid_vorec_pane

0x4208,	// (0x00040001) vorec_t1

0x4216,	// (0x0004000f) vorec_t2

0x4224,	// (0x0004001d) vorec_t3

0x4232,	// (0x0004002b) vorec_t4

0xbe0d,	// (0x00047c06) vorec_t5

0xbe1b,	// (0x00047c14) vorec_t6

0x0004,

0xf1ba,	// (0x0004afb3) vorec_t

0xbe29,	// (0x00047c22) wait_bar_pane_cp01

0x424e,	// (0x00040047) cell_vorec_pane_ParamLimits

0x424e,	// (0x00040047) cell_vorec_pane

0xc108,	// (0x00047f01) cell_vorec_pane_g1

0x0c28,	// (0x0003ca21) grid_highlight_pane_cp05

0x0ea5,	// (0x0003cc9e) cams_zoom_pane

0x0ea5,	// (0x0003cc9e) image_vga_pane

0x0efe,	// (0x0003ccf7) main_camera_pane_g1

0x0efe,	// (0x0003ccf7) main_camera_pane_g2

0x0efe,	// (0x0003ccf7) main_camera_pane_g3

0x0efe,	// (0x0003ccf7) main_camera_pane_g4

0x0efe,	// (0x0003ccf7) main_camera_pane_g5

0x0efe,	// (0x0003ccf7) main_camera_pane_g6

0x0efe,	// (0x0003ccf7) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x0004afbe) main_camera_pane_g

0x1172,	// (0x0003cf6b) main_camera_pane_t1

0x1172,	// (0x0003cf6b) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x0004afcf) main_camera_pane_t

0x4275,	// (0x0004006e) cams_zoom_pane_cp_ParamLimits

0x4275,	// (0x0004006e) cams_zoom_pane_cp

0x42a9,	// (0x000400a2) image_cif_pane_ParamLimits

0x42a9,	// (0x000400a2) image_cif_pane

0x07fd,	// (0x0003c5f6) image_subqcif_pane

0x42bb,	// (0x000400b4) main_video_pane_g1_ParamLimits

0x42bb,	// (0x000400b4) main_video_pane_g1

0x42e9,	// (0x000400e2) main_video_pane_g2_ParamLimits

0x42e9,	// (0x000400e2) main_video_pane_g2

0x4323,	// (0x0004011c) main_video_pane_g3_ParamLimits

0x4323,	// (0x0004011c) main_video_pane_g3

0x4323,	// (0x0004011c) main_video_pane_g4_ParamLimits

0x4323,	// (0x0004011c) main_video_pane_g4

0x4357,	// (0x00040150) main_video_pane_g5_ParamLimits

0x4357,	// (0x00040150) main_video_pane_g5

0x113e,	// (0x0003cf37) main_video_pane_g6_ParamLimits

0x113e,	// (0x0003cf37) main_video_pane_g6

0x0006,

0xf1db,	// (0x0004afd4) main_video_pane_g_ParamLimits

0xf1db,	// (0x0004afd4) main_video_pane_g

0x4373,	// (0x0004016c) main_video_pane_t1_ParamLimits

0x4373,	// (0x0004016c) main_video_pane_t1

0x1158,	// (0x0003cf51) cams_zoom_pane_g1

0x1158,	// (0x0003cf51) cams_zoom_pane_g2

0x1158,	// (0x0003cf51) cams_zoom_pane_g3

0x1158,	// (0x0003cf51) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x0004afe3) cams_zoom_pane_g

0x43cb,	// (0x000401c4) grid_cams_pane

0x43e5,	// (0x000401de) linegrid_cams_pane

0x43f9,	// (0x000401f2) cell_cams_pane_ParamLimits

0x43f9,	// (0x000401f2) cell_cams_pane

0x1162,	// (0x0003cf5b) cams_burst_image_pane

0x116a,	// (0x0003cf63) cell_cams_pane_g1

0x0c28,	// (0x0003ca21) grid_highlight_pane_cp03

0x0e9b,	// (0x0003cc94) mp_bg_pane_g1

0x07fd,	// (0x0003c5f6) bg_list_pane_cp03

0x07fd,	// (0x0003c5f6) bg_mp_pane

0x07fd,	// (0x0003c5f6) grid_mp_pane

0x1158,	// (0x0003cf51) media_player_g1

0x169b,	// (0x0003d494) media_player_t1

0x169b,	// (0x0003d494) media_player_t2

0x169b,	// (0x0003d494) media_player_t3

0x169b,	// (0x0003d494) media_player_t4

0x169b,	// (0x0003d494) media_player_t5

0x169b,	// (0x0003d494) media_player_t6

0x169b,	// (0x0003d494) media_player_t7

0x0006,

0xf55a,	// (0x0004b353) media_player_t

0x07fd,	// (0x0003c5f6) wait_bar_pane_cp02

0xf53f,	// (0x0004b338) main_usb_pane_t

0x1907,	// (0x0003d700) cell_mp_pane

0x0e9b,	// (0x0003cc94) cell_mp_pane_g1

0x0c28,	// (0x0003ca21) grid_highlight_pane_cp06

0x1186,	// (0x0003cf7f) grid_skin_colour_pane

0x118e,	// (0x0003cf87) list_highlight_pane_cp03

0x4419,	// (0x00040212) skin_g1

0x1196,	// (0x0003cf8f) skin_t1

0x11a5,	// (0x0003cf9e) skin_t2

0x0001,

0xf218,	// (0x0004b011) skin_t

0x4421,	// (0x0004021a) cell_skin_colour_pane_ParamLimits

0x4421,	// (0x0004021a) cell_skin_colour_pane

0x11b3,	// (0x0003cfac) cell_skin_colour_pane_g1

0x449a,	// (0x00040293) call_video_g1_ParamLimits

0x449a,	// (0x00040293) call_video_g1

0x44b6,	// (0x000402af) call_video_g2_ParamLimits

0x44b6,	// (0x000402af) call_video_g2

0x0001,

0xf21d,	// (0x0004b016) call_video_g_ParamLimits

0xf21d,	// (0x0004b016) call_video_g

0x4508,	// (0x00040301) call_video_uplink_pane_cp1_ParamLimits

0x4508,	// (0x00040301) call_video_uplink_pane_cp1

0x11c5,	// (0x0003cfbe) call_video_uplink_pane_cp2

0x45a7,	// (0x000403a0) video_down_crop_pane_ParamLimits

0x45a7,	// (0x000403a0) video_down_crop_pane

0x469e,	// (0x00040497) video_down_pane_ParamLimits

0x469e,	// (0x00040497) video_down_pane

0x11cd,	// (0x0003cfc6) video_down_subqcif_pane_ParamLimits

0x11cd,	// (0x0003cfc6) video_down_subqcif_pane

0x11e5,	// (0x0003cfde) video_down_subqcif_pane_cp_ParamLimits

0x11e5,	// (0x0003cfde) video_down_subqcif_pane_cp

0x120b,	// (0x0003d004) im_reading_pane_ParamLimits

0x120b,	// (0x0003d004) im_reading_pane

0x47ae,	// (0x000405a7) im_writing_pane_ParamLimits

0x47ae,	// (0x000405a7) im_writing_pane

0x47c4,	// (0x000405bd) im_reading_pane_t1

0x1225,	// (0x0003d01e) list_im_pane

0x1236,	// (0x0003d02f) scroll_pane_cp07

0x47fd,	// (0x000405f6) im_writing_pane_t1_ParamLimits

0x47fd,	// (0x000405f6) im_writing_pane_t1

0x124f,	// (0x0003d048) im_writing_pane_t2_ParamLimits

0x124f,	// (0x0003d048) im_writing_pane_t2

0x0001,

0xf227,	// (0x0004b020) im_writing_pane_t_ParamLimits

0xf227,	// (0x0004b020) im_writing_pane_t

0x0c28,	// (0x0003ca21) input_focus_pane_cp04

0x0c28,	// (0x0003ca21) input_focus_pane_cp05

0x4812,	// (0x0004060b) list_im_single_pane_ParamLimits

0x4812,	// (0x0004060b) list_im_single_pane

0x4826,	// (0x0004061f) list_single_im_pane_t1

0x1122,	// (0x0003cf1b) blid_accuracy_pane

0x1122,	// (0x0003cf1b) blid_compass_pane

0x6f96,	// (0x00042d8f) main_location_t1

0x6f96,	// (0x00042d8f) main_location_t2

0x6f96,	// (0x00042d8f) main_location_t3

0x0002,

0xf569,	// (0x0004b362) main_location_t

0x0c28,	// (0x0003ca21) aid_levels_location

0x0e9b,	// (0x0003cc94) blid_accuracy_pane_g1

0x0e9b,	// (0x0003cc94) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x0004b06f) blid_accuracy_pane_g

0x1297,	// (0x0003d090) wml_content_pane

0x12d5,	// (0x0003d0ce) wml_button_pane_ParamLimits

0x12d5,	// (0x0003d0ce) wml_button_pane

0x4835,	// (0x0004062e) wml_list_single_large_pane_ParamLimits

0x4835,	// (0x0004062e) wml_list_single_large_pane

0x484a,	// (0x00040643) wml_list_single_medium_pane_ParamLimits

0x484a,	// (0x00040643) wml_list_single_medium_pane

0x4860,	// (0x00040659) wml_list_single_small_pane_ParamLimits

0x4860,	// (0x00040659) wml_list_single_small_pane

0x12e9,	// (0x0003d0e2) wml_selection_box_pane_ParamLimits

0x12e9,	// (0x0003d0e2) wml_selection_box_pane

0x12fc,	// (0x0003d0f5) wml_list_single_pane_t1

0x130b,	// (0x0003d104) wml_list_single_medium_pane_t1

0x131a,	// (0x0003d113) wml_list_single_large_pane_t1

0x1329,	// (0x0003d122) input_focus_pane_cp02_ParamLimits

0x1329,	// (0x0003d122) input_focus_pane_cp02

0x133c,	// (0x0003d135) wml_selection_box_pane_g1

0x1345,	// (0x0003d13e) wml_selection_box_pane_t1_ParamLimits

0x1345,	// (0x0003d13e) wml_selection_box_pane_t1

0x0e83,	// (0x0003cc7c) bg_wml_button_pane_ParamLimits

0x0e83,	// (0x0003cc7c) bg_wml_button_pane

0x135d,	// (0x0003d156) wml_button_pane_g1

0x1365,	// (0x0003d15e) wml_button_pane_t1

0x135d,	// (0x0003d156) wml_button_bg_pane_g1

0x1375,	// (0x0003d16e) wml_button_bg_pane_g2

0x137d,	// (0x0003d176) wml_button_bg_pane_g3

0x1385,	// (0x0003d17e) wml_button_bg_pane_g4

0x138d,	// (0x0003d186) wml_button_bg_pane_g5

0x1395,	// (0x0003d18e) wml_button_bg_pane_g6

0x139d,	// (0x0003d196) wml_button_bg_pane_g7

0x13a5,	// (0x0003d19e) wml_button_bg_pane_g8

0x13ad,	// (0x0003d1a6) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0004b025) wml_button_bg_pane_g

0x4878,	// (0x00040671) bg_list_pane_cp02

0x13b5,	// (0x0003d1ae) mce_header_pane_ParamLimits

0x13b5,	// (0x0003d1ae) mce_header_pane

0x13cb,	// (0x0003d1c4) mce_icon_pane

0x13cb,	// (0x0003d1c4) mce_image_pane

0x13d4,	// (0x0003d1cd) mce_text_pane_ParamLimits

0x13d4,	// (0x0003d1cd) mce_text_pane

0x4880,	// (0x00040679) scroll_pane_cp03

0x12cd,	// (0x0003d0c6) scroll_pane_cp04

0x13e7,	// (0x0003d1e0) scroll_pane_cp05_ParamLimits

0x13e7,	// (0x0003d1e0) scroll_pane_cp05

0x488a,	// (0x00040683) mce_header_field_pane_ParamLimits

0x488a,	// (0x00040683) mce_header_field_pane

0x48a1,	// (0x0004069a) mce_header_field_pane_2_ParamLimits

0x48a1,	// (0x0004069a) mce_header_field_pane_2

0x48b7,	// (0x000406b0) mce_header_field_pane_3

0x48bf,	// (0x000406b8) list_single_mce_message_pane_ParamLimits

0x48bf,	// (0x000406b8) list_single_mce_message_pane

0x48d4,	// (0x000406cd) list_single_mce_smart_pane_ParamLimits

0x48d4,	// (0x000406cd) list_single_mce_smart_pane

0x13f3,	// (0x0003d1ec) input_focus_pane_cp03

0x13fc,	// (0x0003d1f5) list_header_data_pane

0x48f4,	// (0x000406ed) mce_header_field_pane_t1

0x4904,	// (0x000406fd) list_single_mce_header_pane_ParamLimits

0x4904,	// (0x000406fd) list_single_mce_header_pane

0x1404,	// (0x0003d1fd) list_single_mce_header_pane_t1

0x1413,	// (0x0003d20c) list_single_mce_message_pane_g1

0x141b,	// (0x0003d214) list_single_mce_message_pane_t1

0x493e,	// (0x00040737) bg_cale_heading_pane_cp01_ParamLimits

0x493e,	// (0x00040737) bg_cale_heading_pane_cp01

0x1429,	// (0x0003d222) bg_cale_pane_cp02_ParamLimits

0x1429,	// (0x0003d222) bg_cale_pane_cp02

0x4978,	// (0x00040771) cale_month_corner_pane

0x4997,	// (0x00040790) cale_month_day_heading_pane_ParamLimits

0x4997,	// (0x00040790) cale_month_day_heading_pane

0x49e9,	// (0x000407e2) cale_month_pane_g1_ParamLimits

0x49e9,	// (0x000407e2) cale_month_pane_g1

0x4a18,	// (0x00040811) cale_month_pane_g2_ParamLimits

0x4a18,	// (0x00040811) cale_month_pane_g2

0x4a48,	// (0x00040841) cale_month_pane_g3_ParamLimits

0x4a48,	// (0x00040841) cale_month_pane_g3

0x4a84,	// (0x0004087d) cale_month_pane_g4_ParamLimits

0x4a84,	// (0x0004087d) cale_month_pane_g4

0x4ac0,	// (0x000408b9) cale_month_pane_g5_ParamLimits

0x4ac0,	// (0x000408b9) cale_month_pane_g5

0x4b08,	// (0x00040901) cale_month_pane_g6_ParamLimits

0x4b08,	// (0x00040901) cale_month_pane_g6

0x4b54,	// (0x0004094d) cale_month_pane_g7_ParamLimits

0x4b54,	// (0x0004094d) cale_month_pane_g7

0x4ba8,	// (0x000409a1) cale_month_pane_g8_ParamLimits

0x4ba8,	// (0x000409a1) cale_month_pane_g8

0x4bfc,	// (0x000409f5) cale_month_pane_g9_ParamLimits

0x4bfc,	// (0x000409f5) cale_month_pane_g9

0x4c4e,	// (0x00040a47) cale_month_pane_g10_ParamLimits

0x4c4e,	// (0x00040a47) cale_month_pane_g10

0x4ca0,	// (0x00040a99) cale_month_pane_g11_ParamLimits

0x4ca0,	// (0x00040a99) cale_month_pane_g11

0x4cf2,	// (0x00040aeb) cale_month_pane_g12_ParamLimits

0x4cf2,	// (0x00040aeb) cale_month_pane_g12

0x4d44,	// (0x00040b3d) cale_month_pane_g13_ParamLimits

0x4d44,	// (0x00040b3d) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0004b038) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0004b038) cale_month_pane_g

0x4d96,	// (0x00040b8f) cale_month_week_pane

0x4dba,	// (0x00040bb3) grid_cale_month_pane_ParamLimits

0x4dba,	// (0x00040bb3) grid_cale_month_pane

0x4e03,	// (0x00040bfc) cale_month_day_heading_pane_t1

0x4e89,	// (0x00040c82) cale_month_day_heading_pane_t2

0x4f02,	// (0x00040cfb) cale_month_day_heading_pane_t3

0x4f7b,	// (0x00040d74) cale_month_day_heading_pane_t4

0x4ffc,	// (0x00040df5) cale_month_day_heading_pane_t5

0x5085,	// (0x00040e7e) cale_month_day_heading_pane_t6

0x510e,	// (0x00040f07) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0004b053) cale_month_day_heading_pane_t

0x10d0,	// (0x0003cec9) bg_cale_side_pane_cp01

0x519f,	// (0x00040f98) cale_month_week_pane_t1

0x51b8,	// (0x00040fb1) cale_month_week_pane_t2

0x51d1,	// (0x00040fca) cale_month_week_pane_t3

0x51ea,	// (0x00040fe3) cale_month_week_pane_t4

0x5203,	// (0x00040ffc) cale_month_week_pane_t5

0x521c,	// (0x00041015) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0004b062) cale_month_week_pane_t

0x5235,	// (0x0004102e) cell_cale_month_pane_ParamLimits

0x5235,	// (0x0004102e) cell_cale_month_pane

0xc112,	// (0x00047f0b) cell_cale_month_pane_g1

0x5363,	// (0x0004115c) cell_cale_month_pane_t1_ParamLimits

0x5363,	// (0x0004115c) cell_cale_month_pane_t1

0x10de,	// (0x0003ced7) grid_highlight_pane_cp08

0x0e9b,	// (0x0003cc94) main_smil_g1

0x538f,	// (0x00041188) smil_status_pane

0x1468,	// (0x0003d261) smil_text_pane

0x6e24,	// (0x00042c1d) bg_popup_call3_rect_pane_g8

0x6e2c,	// (0x00042c25) bg_popup_call3_rect_pane_g9

0x0008,

0xf4fd,	// (0x0004b2f6) bg_popup_call3_rect_pane_g

0x75d0,	// (0x000433c9) smil_status_volume_pane_g1

0x1472,	// (0x0003d26b) smil_status_pane_t1

0xc294,	// (0x0004808d) volume_smil_pane

0x1489,	// (0x0003d282) list_smil_text_pane

0x53a2,	// (0x0004119b) scroll_pane_cp011

0x53ad,	// (0x000411a6) smil_text_list_pane_t1_ParamLimits

0x53ad,	// (0x000411a6) smil_text_list_pane_t1

0xc11e,	// (0x00047f17) aid_volume_smil_ParamLimits

0xc11e,	// (0x00047f17) aid_volume_smil

0x0e9b,	// (0x0003cc94) smil_volume_pane_g1

0x0e9b,	// (0x0003cc94) smil_volume_pane_g2

0x0001,

0xf276,	// (0x0004b06f) smil_volume_pane_g

0x3ca9,	// (0x0003faa2) listscroll_cale_day_pane

0x1493,	// (0x0003d28c) bg_cale_pane

0x14ab,	// (0x0003d2a4) list_cale_pane

0x14ce,	// (0x0003d2c7) scroll_pane_cp09

0x14df,	// (0x0003d2d8) cale_bg_pane_g1

0x14e7,	// (0x0003d2e0) cale_bg_pane_g2

0x14ef,	// (0x0003d2e8) cale_bg_pane_g3

0x14f7,	// (0x0003d2f0) cale_bg_pane_g4

0x14ff,	// (0x0003d2f8) cale_bg_pane_g5

0x1507,	// (0x0003d300) cale_bg_pane_g6

0x150f,	// (0x0003d308) cale_bg_pane_g7

0x1517,	// (0x0003d310) cale_bg_pane_g8

0x151f,	// (0x0003d318) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x0004b074) cale_bg_pane_g

0x53e9,	// (0x000411e2) list_cale_time_pane_ParamLimits

0x53e9,	// (0x000411e2) list_cale_time_pane

0x152f,	// (0x0003d328) list_cale_time_pane_g1_ParamLimits

0x152f,	// (0x0003d328) list_cale_time_pane_g1

0x153b,	// (0x0003d334) list_cale_time_pane_g2_ParamLimits

0x153b,	// (0x0003d334) list_cale_time_pane_g2

0x53fe,	// (0x000411f7) list_cale_time_pane_g3_ParamLimits

0x53fe,	// (0x000411f7) list_cale_time_pane_g3

0x540c,	// (0x00041205) list_cale_time_pane_g4_ParamLimits

0x540c,	// (0x00041205) list_cale_time_pane_g4

0x541a,	// (0x00041213) list_cale_time_pane_g5_ParamLimits

0x541a,	// (0x00041213) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x0004b087) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x0004b087) list_cale_time_pane_g

0x1555,	// (0x0003d34e) list_cale_time_pane_t1_ParamLimits

0x1555,	// (0x0003d34e) list_cale_time_pane_t1

0x157d,	// (0x0003d376) list_cale_time_pane_t2_ParamLimits

0x157d,	// (0x0003d376) list_cale_time_pane_t2

0x5688,	// (0x00041481) aid_blid_cardinal_pane

0x56c6,	// (0x000414bf) compass_pane_t4

0x15a5,	// (0x0003d39e) list_cale_time_pane_t4_ParamLimits

0x15a5,	// (0x0003d39e) list_cale_time_pane_t4

0x56d4,	// (0x000414cd) compass_pane_t5

0x56e2,	// (0x000414db) compass_pane_t6

0x56f0,	// (0x000414e9) compass_pane_t7

0x1a4c,	// (0x0003d845) navi_pane_cc_t1

0x1c29,	// (0x0003da22) aid_phob_thumbnail_center_pane

0x5a68,	// (0x00041861) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x0004b094) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x0004b094) list_cale_time_pane_t

0x087f,	// (0x0003c678) bg_popup_window_pane_cp02_ParamLimits

0x087f,	// (0x0003c678) bg_popup_window_pane_cp02

0x15cd,	// (0x0003d3c6) heading_pane_cp01_ParamLimits

0x15cd,	// (0x0003d3c6) heading_pane_cp01

0x15d9,	// (0x0003d3d2) loc_req_pane_ParamLimits

0x15d9,	// (0x0003d3d2) loc_req_pane

0x15e9,	// (0x0003d3e2) loc_type_pane_ParamLimits

0x15e9,	// (0x0003d3e2) loc_type_pane

0x15fb,	// (0x0003d3f4) loc_type_pane_t1_ParamLimits

0x15fb,	// (0x0003d3f4) loc_type_pane_t1

0x160d,	// (0x0003d406) loc_type_pane_t2_ParamLimits

0x160d,	// (0x0003d406) loc_type_pane_t2

0x161f,	// (0x0003d418) loc_type_pane_t3_ParamLimits

0x161f,	// (0x0003d418) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x0004b09b) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x0004b09b) loc_type_pane_t

0x1631,	// (0x0003d42a) list_loc_req_pane

0x163b,	// (0x0003d434) scroll_pane_cp012

0x5428,	// (0x00041221) list_single_loc_request_popup_menu_pane_ParamLimits

0x5428,	// (0x00041221) list_single_loc_request_popup_menu_pane

0x1646,	// (0x0003d43f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x1646,	// (0x0003d43f) list_single_loc_request_popup_menu_pane_g1

0x1652,	// (0x0003d44b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x1652,	// (0x0003d44b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x0004b0a2) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x0004b0a2) list_single_loc_request_popup_menu_pane_g

0x165e,	// (0x0003d457) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x165e,	// (0x0003d457) list_single_loc_request_popup_menu_pane_t1

0x0e83,	// (0x0003cc7c) bg_popup_window_pane_cp03_ParamLimits

0x0e83,	// (0x0003cc7c) bg_popup_window_pane_cp03

0x1fb5,	// (0x0003ddae) heading_loc_req_pane_ParamLimits

0x1fb5,	// (0x0003ddae) heading_loc_req_pane

0x5435,	// (0x0004122e) popup_dyc_status_message_window_g1_ParamLimits

0x5435,	// (0x0004122e) popup_dyc_status_message_window_g1

0x5449,	// (0x00041242) popup_dyc_status_message_window_t1_ParamLimits

0x5449,	// (0x00041242) popup_dyc_status_message_window_t1

0x545e,	// (0x00041257) popup_dyc_status_message_window_t2_ParamLimits

0x545e,	// (0x00041257) popup_dyc_status_message_window_t2

0x5473,	// (0x0004126c) popup_dyc_status_message_window_t3_ParamLimits

0x5473,	// (0x0004126c) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x0004b0a7) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x0004b0a7) popup_dyc_status_message_window_t

0x0c28,	// (0x0003ca21) bg_heading_pane_cp01

0x1674,	// (0x0003d46d) heading_loc_req_pane_g1

0x167c,	// (0x0003d475) heading_loc_req_pane_g2

0x1684,	// (0x0003d47d) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x0004b0ae) heading_loc_req_pane_g

0x168c,	// (0x0003d485) heading_loc_req_pane_t1

0x16ab,	// (0x0003d4a4) bg_popup_sub_pane_cp01_ParamLimits

0x16ab,	// (0x0003d4a4) bg_popup_sub_pane_cp01

0x16b9,	// (0x0003d4b2) popup_cale_events_window_g1_ParamLimits

0x16b9,	// (0x0003d4b2) popup_cale_events_window_g1

0x16d9,	// (0x0003d4d2) popup_cale_events_window_g2_ParamLimits

0x16d9,	// (0x0003d4d2) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x0004b0d0) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x0004b0d0) popup_cale_events_window_g

0x16f9,	// (0x0003d4f2) popup_cale_events_window_t1_ParamLimits

0x16f9,	// (0x0003d4f2) popup_cale_events_window_t1

0x170b,	// (0x0003d504) popup_cale_events_window_t2_ParamLimits

0x170b,	// (0x0003d504) popup_cale_events_window_t2

0x1749,	// (0x0003d542) popup_cale_events_window_t3_ParamLimits

0x1749,	// (0x0003d542) popup_cale_events_window_t3

0x1783,	// (0x0003d57c) popup_cale_events_window_t4_ParamLimits

0x1783,	// (0x0003d57c) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x0004b0d5) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x0004b0d5) popup_cale_events_window_t

0x54a7,	// (0x000412a0) call_type_pane

0x54b7,	// (0x000412b0) popup_call_status_window_g1

0x54cb,	// (0x000412c4) popup_call_status_window_g2

0x54df,	// (0x000412d8) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x0004b0de) popup_call_status_window_g

0x17b9,	// (0x0003d5b2) call_type_pane_g1

0x17c2,	// (0x0003d5bb) call_type_pane_g2

0x0001,

0xf2ec,	// (0x0004b0e5) call_type_pane_g

0x0c28,	// (0x0003ca21) bg_popup_sub_pane_cp02

0x17cb,	// (0x0003d5c4) listscroll_popup_wml_pane

0x17d3,	// (0x0003d5cc) list_wml_pane

0x17dd,	// (0x0003d5d6) scroll_pane_cp013

0x17e8,	// (0x0003d5e1) list_single_graphic_popup_wml_pane_ParamLimits

0x17e8,	// (0x0003d5e1) list_single_graphic_popup_wml_pane

0x0e9b,	// (0x0003cc94) list_single_graphic_popup_wml_pane_g1

0x17fc,	// (0x0003d5f5) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x0004b0ea) list_single_graphic_popup_wml_pane_g

0x1804,	// (0x0003d5fd) list_single_graphic_popup_wml_pane_t1

0x181a,	// (0x0003d613) aid_call_pane

0x0e7b,	// (0x0003cc74) popup_clock_analogue_window_g1

0x0e7b,	// (0x0003cc74) popup_clock_analogue_window_g2

0xc140,	// (0x00047f39) popup_clock_analogue_window_g3

0xc140,	// (0x00047f39) popup_clock_analogue_window_g4

0x0e9b,	// (0x0003cc94) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x0004b0ef) popup_clock_analogue_window_g

0xc148,	// (0x00047f41) popup_clock_analogue_window_t1

0xc156,	// (0x00047f4f) clock_digital_number_pane_ParamLimits

0xc156,	// (0x00047f4f) clock_digital_number_pane

0xc162,	// (0x00047f5b) clock_digital_number_pane_cp02_ParamLimits

0xc162,	// (0x00047f5b) clock_digital_number_pane_cp02

0xc16e,	// (0x00047f67) clock_digital_number_pane_cp03_ParamLimits

0xc16e,	// (0x00047f67) clock_digital_number_pane_cp03

0xc17a,	// (0x00047f73) clock_digital_number_pane_cp04_ParamLimits

0xc17a,	// (0x00047f73) clock_digital_number_pane_cp04

0xc18a,	// (0x00047f83) clock_digital_separator_pane_ParamLimits

0xc18a,	// (0x00047f83) clock_digital_separator_pane

0xc196,	// (0x00047f8f) popup_clock_digital_window_t1

0x0e9b,	// (0x0003cc94) clock_digital_number_pane_g1

0x0e9b,	// (0x0003cc94) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x0004b06f) clock_digital_number_pane_g

0x0e9b,	// (0x0003cc94) clock_digital_separator_pane_g1

0x0e9b,	// (0x0003cc94) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x0004b06f) clock_digital_separator_pane_g

0x0c28,	// (0x0003ca21) bg_popup_window_pane_cp04

0x1822,	// (0x0003d61b) heading_pane_cp03

0x1122,	// (0x0003cf1b) listscroll_popup_gms_pane

0x0c28,	// (0x0003ca21) grid_large_graphic_popup_pane

0x182b,	// (0x0003d624) listscroll_popup_gms_pane_g1

0x1834,	// (0x0003d62d) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x0004b0fa) listscroll_popup_gms_pane_g

0x183d,	// (0x0003d636) scroll_pane_cp014

0x0807,	// (0x0003c600) cell_large_graphic_popup_pane_ParamLimits

0x0807,	// (0x0003c600) cell_large_graphic_popup_pane

0x0efe,	// (0x0003ccf7) cell_large_graphic_popup_pane_g1_ParamLimits

0x0efe,	// (0x0003ccf7) cell_large_graphic_popup_pane_g1

0x1846,	// (0x0003d63f) cell_large_graphic_popup_pane_g2_ParamLimits

0x1846,	// (0x0003d63f) cell_large_graphic_popup_pane_g2

0x1854,	// (0x0003d64d) cell_large_graphic_popup_pane_g3_ParamLimits

0x1854,	// (0x0003d64d) cell_large_graphic_popup_pane_g3

0x1862,	// (0x0003d65b) cell_large_graphic_popup_pane_g4_ParamLimits

0x1862,	// (0x0003d65b) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x0004b0ff) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x0004b0ff) cell_large_graphic_popup_pane_g

0x0c28,	// (0x0003ca21) grid_highlight_pane_cp010

0x0e9b,	// (0x0003cc94) bg_popup_call_pane_g1

0x1873,	// (0x0003d66c) list_single_graphic_popup_conf_pane_ParamLimits

0x1873,	// (0x0003d66c) list_single_graphic_popup_conf_pane

0x1886,	// (0x0003d67f) list_highlight_pane_cp01

0x188f,	// (0x0003d688) list_single_graphic_popup_conf_pane_g1

0x1897,	// (0x0003d690) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x0004b108) list_single_graphic_popup_conf_pane_g

0x189f,	// (0x0003d698) list_single_graphic_popup_conf_pane_t1

0x18ad,	// (0x0003d6a6) linegrid_cams_pane_g1

0x54ee,	// (0x000412e7) linegrid_cams_pane_g2

0x1061,	// (0x0003ce5a) linegrid_cams_pane_g3

0x18b6,	// (0x0003d6af) linegrid_cams_pane_g4

0x54f7,	// (0x000412f0) linegrid_cams_pane_g5

0x5500,	// (0x000412f9) linegrid_cams_pane_g6

0x1111,	// (0x0003cf0a) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x0004b10d) linegrid_cams_pane_g

0x18bf,	// (0x0003d6b8) popup_clock_analogue_window

0x18bf,	// (0x0003d6b8) popup_clock_digital_window

0x0c28,	// (0x0003ca21) popup_phob_thumbnail_window

0x0e9b,	// (0x0003cc94) call_video_uplink_pane_g1

0x18c8,	// (0x0003d6c1) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x0004b11c) call_video_uplink_pane_g

0x18d0,	// (0x0003d6c9) video_uplink_pane

0x18d8,	// (0x0003d6d1) mce_image_pane_g1

0x550b,	// (0x00041304) mce_image_pane_g2

0x5515,	// (0x0004130e) mce_image_pane_g3

0x551d,	// (0x00041316) mce_image_pane_g4

0x5525,	// (0x0004131e) mce_image_pane_g5

0x0004,

0xf328,	// (0x0004b121) mce_image_pane_g

0x18e2,	// (0x0003d6db) control_top_pane_stacon_cp01_ParamLimits

0x18e2,	// (0x0003d6db) control_top_pane_stacon_cp01

0x18f6,	// (0x0003d6ef) uni_indicator_pane_stacon_cp01_ParamLimits

0x18f6,	// (0x0003d6ef) uni_indicator_pane_stacon_cp01

0x1907,	// (0x0003d700) bg_popup_sub_pane_cp03

0x1911,	// (0x0003d70a) chi_dic_find_pane

0x552d,	// (0x00041326) listscroll_chi_dic_pane

0x1919,	// (0x0003d712) main_pane_chidic_g1

0x1921,	// (0x0003d71a) chi_dic_find_pane_t1

0x192f,	// (0x0003d728) find_chidic_pane

0x1938,	// (0x0003d731) chi_dic_list_pane_ParamLimits

0x1938,	// (0x0003d731) chi_dic_list_pane

0x1949,	// (0x0003d742) scroll_pane_cp020

0x1951,	// (0x0003d74a) find_chidic_pane_t1

0x0c28,	// (0x0003ca21) input_focus_pane_cp06

0x5541,	// (0x0004133a) list_chi_dic_pane_ParamLimits

0x5541,	// (0x0004133a) list_chi_dic_pane

0x5553,	// (0x0004134c) list_chi_dic_pane_t1_ParamLimits

0x5553,	// (0x0004134c) list_chi_dic_pane_t1

0x0c28,	// (0x0003ca21) list_highlight_pane_cp020

0x1960,	// (0x0003d759) bg_cale_heading_pane_g1

0x5566,	// (0x0004135f) bg_cale_heading_pane_g2

0x556e,	// (0x00041367) bg_cale_heading_pane_g3

0x5576,	// (0x0004136f) bg_cale_heading_pane_g4

0x5580,	// (0x00041379) bg_cale_heading_pane_g5

0x558a,	// (0x00041383) bg_cale_heading_pane_g6

0x5592,	// (0x0004138b) bg_cale_heading_pane_g7

0x559a,	// (0x00041393) bg_cale_heading_pane_g8

0x55a4,	// (0x0004139d) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x0004b12c) bg_cale_heading_pane_g

0x1960,	// (0x0003d759) bg_cale_side_pane_g1

0x55ae,	// (0x000413a7) bg_cale_side_pane_g2

0x55b6,	// (0x000413af) bg_cale_side_pane_g3

0x55be,	// (0x000413b7) bg_cale_side_pane_g4

0x55c6,	// (0x000413bf) bg_cale_side_pane_g5

0x55ce,	// (0x000413c7) bg_cale_side_pane_g6

0x55d6,	// (0x000413cf) bg_cale_side_pane_g7

0x55de,	// (0x000413d7) bg_cale_side_pane_g8

0x55e6,	// (0x000413df) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x0004b13f) bg_cale_side_pane_g

0x55ee,	// (0x000413e7) popup_call_status_window_ParamLimits

0x55ee,	// (0x000413e7) popup_call_status_window

0x1968,	// (0x0003d761) stacon_top_pane

0x1970,	// (0x0003d769) status_pane_ParamLimits

0x1970,	// (0x0003d769) status_pane

0x1985,	// (0x0003d77e) status_small_pane

0x198d,	// (0x0003d786) control_pane

0x0c28,	// (0x0003ca21) stacon_bottom_pane

0x1995,	// (0x0003d78e) list_single_mce_smart_pane_t1_ParamLimits

0x1995,	// (0x0003d78e) list_single_mce_smart_pane_t1

0x19a8,	// (0x0003d7a1) list_single_mce_smart_pane_t2_ParamLimits

0x19a8,	// (0x0003d7a1) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x0004b152) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x0004b152) list_single_mce_smart_pane_t

0x5637,	// (0x00041430) compass_pane

0x5640,	// (0x00041439) main_location2_pane_t1

0x5652,	// (0x0004144b) main_location2_pane_t2

0x5664,	// (0x0004145d) main_location2_pane_t3

0x0003,

0xf35e,	// (0x0004b157) main_location2_pane_t

0x19c7,	// (0x0003d7c0) compass_pane_g1_ParamLimits

0x19c7,	// (0x0003d7c0) compass_pane_g1

0x56a8,	// (0x000414a1) compass_pane_t1

0x56b7,	// (0x000414b0) compass_pane_t2

0x0005,

0xf367,	// (0x0004b160) compass_pane_t

0x56fe,	// (0x000414f7) text_secondary_cp61

0x1a43,	// (0x0003d83c) navi_pane_cams_g5

0x1abf,	// (0x0003d8b8) navi_pane_im_t1

0x1acd,	// (0x0003d8c6) navi_pane_mp_g1_ParamLimits

0x1acd,	// (0x0003d8c6) navi_pane_mp_g1

0x1ae1,	// (0x0003d8da) navi_pane_mp_g2_ParamLimits

0x1ae1,	// (0x0003d8da) navi_pane_mp_g2

0x1aed,	// (0x0003d8e6) navi_pane_mp_g3_ParamLimits

0x1aed,	// (0x0003d8e6) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x0004b174) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x0004b174) navi_pane_mp_g

0x1af9,	// (0x0003d8f2) navi_pane_mp_t1

0x1b07,	// (0x0003d900) navi_pane_mp_t2

0x0002,

0xf382,	// (0x0004b17b) navi_pane_mp_t

0x1b72,	// (0x0003d96b) navi_pane_vt_g1

0x1af9,	// (0x0003d8f2) navi_pane_vt_t1

0x1b7a,	// (0x0003d973) navi_slider_pane

0x1122,	// (0x0003cf1b) zooming_pane

0x1b8a,	// (0x0003d983) navi_slider_pane_g1

0xc1b3,	// (0x00047fac) navi_slider_pane_g2

0x0006,

0xf389,	// (0x0004b182) navi_slider_pane_g

0x1bae,	// (0x0003d9a7) aid_levels_zoom

0x1bb6,	// (0x0003d9af) zooming_pane_g1

0x1bbe,	// (0x0003d9b7) zooming_pane_g2

0x1bbe,	// (0x0003d9b7) zooming_pane_g3

0x0002,

0xf398,	// (0x0004b191) zooming_pane_g

0x1bc6,	// (0x0003d9bf) level_10_zoom

0x1bcf,	// (0x0003d9c8) level_11_zoom

0x1bd8,	// (0x0003d9d1) level_1_zoom

0x1be1,	// (0x0003d9da) level_2_zoom

0x1bea,	// (0x0003d9e3) level_3_zoom

0x1bf3,	// (0x0003d9ec) level_4_zoom

0x1bfc,	// (0x0003d9f5) level_5_zoom

0x1c05,	// (0x0003d9fe) level_6_zoom

0x1c0e,	// (0x0003da07) level_7_zoom

0x1c17,	// (0x0003da10) level_8_zoom

0x1c20,	// (0x0003da19) level_9_zoom

0x1c31,	// (0x0003da2a) popup_phob_thumbnail_window_g1

0x1c39,	// (0x0003da32) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x0004b198) popup_phob_thumbnail_window_g

0x6ffb,	// (0x00042df4) level_1_location

0x7003,	// (0x00042dfc) level_2_location

0x700b,	// (0x00042e04) level_3_location

0x7013,	// (0x00042e0c) level_4_location

0x1122,	// (0x0003cf1b) level_5_location

0x574f,	// (0x00041548) mce_icon_pane_g1

0x5759,	// (0x00041552) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x0004b19d) mce_icon_pane_g

0x1f6c,	// (0x0003dd65) main_mup_pane_g1_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup_pane_g1

0x1f6c,	// (0x0003dd65) main_mup_pane_g2_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup_pane_g2

0x1f6c,	// (0x0003dd65) main_mup_pane_g3_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup_pane_g3

0x1f6c,	// (0x0003dd65) main_mup_pane_g4_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup_pane_g4

0x1f6c,	// (0x0003dd65) main_mup_pane_g5_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup_pane_g5

0x1f6c,	// (0x0003dd65) main_mup_pane_g6_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup_pane_g6

0x1f6c,	// (0x0003dd65) main_mup_pane_g7_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup_pane_g7

0x1f6c,	// (0x0003dd65) main_mup_pane_g8_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup_pane_g8

0x1f6c,	// (0x0003dd65) main_mup_pane_g9_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup_pane_g9

0x1f6c,	// (0x0003dd65) main_mup_pane_g10_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup_pane_g10

0x1f6c,	// (0x0003dd65) main_mup_pane_g11_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup_pane_g11

0x0efe,	// (0x0003ccf7) main_mup_pane_g12_ParamLimits

0x0efe,	// (0x0003ccf7) main_mup_pane_g12

0x1f6c,	// (0x0003dd65) main_mup_pane_g13_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x0004b1a2) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x0004b1a2) main_mup_pane_g

0x1f7a,	// (0x0003dd73) main_mup_pane_t1_ParamLimits

0x1f7a,	// (0x0003dd73) main_mup_pane_t1

0x1f7a,	// (0x0003dd73) main_mup_pane_t2_ParamLimits

0x1f7a,	// (0x0003dd73) main_mup_pane_t2

0x1f7a,	// (0x0003dd73) main_mup_pane_t3_ParamLimits

0x1f7a,	// (0x0003dd73) main_mup_pane_t3

0x1172,	// (0x0003cf6b) main_mup_pane_t4_ParamLimits

0x1172,	// (0x0003cf6b) main_mup_pane_t4

0x1172,	// (0x0003cf6b) main_mup_pane_t5_ParamLimits

0x1172,	// (0x0003cf6b) main_mup_pane_t5

0x112a,	// (0x0003cf23) main_mup_pane_t6_ParamLimits

0x112a,	// (0x0003cf23) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x0004b1bd) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x0004b1bd) main_mup_pane_t

0x0807,	// (0x0003c600) mup_progress_pane_ParamLimits

0x0807,	// (0x0003c600) mup_progress_pane

0x1f5e,	// (0x0003dd57) mup_visualizer_pane_ParamLimits

0x1f5e,	// (0x0003dd57) mup_visualizer_pane

0x1f5e,	// (0x0003dd57) mup_volume_pane_ParamLimits

0x1f5e,	// (0x0003dd57) mup_volume_pane

0x0f0c,	// (0x0003cd05) mup_visualizer_pane_g1_ParamLimits

0x0f0c,	// (0x0003cd05) mup_visualizer_pane_g1

0x1c41,	// (0x0003da3a) mup_visualizer_pane_g2_ParamLimits

0x1c41,	// (0x0003da3a) mup_visualizer_pane_g2

0x0efe,	// (0x0003ccf7) mup_visualizer_pane_g3_ParamLimits

0x0efe,	// (0x0003ccf7) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x0004b1ca) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x0004b1ca) mup_visualizer_pane_g

0x1158,	// (0x0003cf51) mup_volume_pane_g1

0x1158,	// (0x0003cf51) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x0004b1d1) mup_volume_pane_g

0x1158,	// (0x0003cf51) mup_progress_pane_g1

0x1158,	// (0x0003cf51) mup_progress_pane_g2

0x1158,	// (0x0003cf51) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x0004b1d6) mup_progress_pane_g

0x0c28,	// (0x0003ca21) bg_popup_window_pane_cp05

0x1c4f,	// (0x0003da48) heading_pane_cp02_ParamLimits

0x1c4f,	// (0x0003da48) heading_pane_cp02

0x1c69,	// (0x0003da62) list_popup_blid_pane

0x1c71,	// (0x0003da6a) list_blid_sat_info_pane_ParamLimits

0x1c71,	// (0x0003da6a) list_blid_sat_info_pane

0x1c84,	// (0x0003da7d) list_blid_sat_info_pane_g1

0x1c8c,	// (0x0003da85) list_blid_sat_info_pane_t1

0x5859,	// (0x00041652) mup_equalizer_pane_ParamLimits

0x5859,	// (0x00041652) mup_equalizer_pane

0x5872,	// (0x0004166b) mup_equalizer_pane_cp1_ParamLimits

0x5872,	// (0x0004166b) mup_equalizer_pane_cp1

0x588f,	// (0x00041688) mup_equalizer_pane_cp2_ParamLimits

0x588f,	// (0x00041688) mup_equalizer_pane_cp2

0x58ac,	// (0x000416a5) mup_equalizer_pane_cp3_ParamLimits

0x58ac,	// (0x000416a5) mup_equalizer_pane_cp3

0x58cd,	// (0x000416c6) mup_equalizer_pane_cp4_ParamLimits

0x58cd,	// (0x000416c6) mup_equalizer_pane_cp4

0x58ee,	// (0x000416e7) mup_equalizer_pane_cp5

0x5902,	// (0x000416fb) mup_equalizer_pane_cp6

0x5916,	// (0x0004170f) mup_equalizer_pane_cp7

0x6eac,	// (0x00042ca5) bg_popup_call_poc_act_pane_g9

0x6eb4,	// (0x00042cad) bg_popup_call_poc_act_pane_g10

0x6ebc,	// (0x00042cb5) bg_popup_call_poc_act_pane_g11

0x000a,

0x0e83,	// (0x0003cc7c) mup_scale_pane

0x0e9b,	// (0x0003cc94) mup_scale_pane_g1

0x1c9a,	// (0x0003da93) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x0004b1f2) mup_scale_pane_g

0x1cbe,	// (0x0003dab7) msg_data_pane

0x1cc6,	// (0x0003dabf) scroll_pane_cp017

0x2dfe,	// (0x0003ebf7) bg_list_pane_cp04_ParamLimits

0x2dfe,	// (0x0003ebf7) bg_list_pane_cp04

0x1cce,	// (0x0003dac7) msg_data_pane_g1

0x593c,	// (0x00041735) msg_data_pane_g2

0x5946,	// (0x0004173f) msg_data_pane_g3

0x594e,	// (0x00041747) msg_data_pane_g4

0x5956,	// (0x0004174f) msg_data_pane_g5

0x595e,	// (0x00041757) msg_data_pane_g6

0x5966,	// (0x0004175f) msg_data_pane_g7

0x0006,

0xf408,	// (0x0004b201) msg_data_pane_g

0x2e16,	// (0x0003ec0f) msg_text_pane_ParamLimits

0x2e16,	// (0x0003ec0f) msg_text_pane

0x596e,	// (0x00041767) qrid_highlight_pane_cp011_ParamLimits

0x596e,	// (0x00041767) qrid_highlight_pane_cp011

0x0c28,	// (0x0003ca21) msg_body_pane

0x0c28,	// (0x0003ca21) msg_header_pane

0x1cdf,	// (0x0003dad8) input_focus_pane_cp07

0x2e50,	// (0x0003ec49) msg_header_pane_t1_ParamLimits

0x2e50,	// (0x0003ec49) msg_header_pane_t1

0x2e66,	// (0x0003ec5f) msg_header_pane_t2_ParamLimits

0x2e66,	// (0x0003ec5f) msg_header_pane_t2

0x0001,

0xf41c,	// (0x0004b215) msg_header_pane_t_ParamLimits

0xf41c,	// (0x0004b215) msg_header_pane_t

0x1cf4,	// (0x0003daed) msg_body_pane_g1

0x2e7d,	// (0x0003ec76) msg_body_pane_t1_ParamLimits

0x2e7d,	// (0x0003ec76) msg_body_pane_t1

0xc1cd,	// (0x00047fc6) msg_body_pane_t2_ParamLimits

0xc1cd,	// (0x00047fc6) msg_body_pane_t2

0xc1df,	// (0x00047fd8) msg_body_pane_t3_ParamLimits

0xc1df,	// (0x00047fd8) msg_body_pane_t3

0x0002,

0xf421,	// (0x0004b21a) msg_body_pane_t_ParamLimits

0xf421,	// (0x0004b21a) msg_body_pane_t

0x59be,	// (0x000417b7) main_viewer_pane_g1_ParamLimits

0x59be,	// (0x000417b7) main_viewer_pane_g1

0x59cc,	// (0x000417c5) main_viewer_pane_g2_ParamLimits

0x59cc,	// (0x000417c5) main_viewer_pane_g2

0x59da,	// (0x000417d3) main_viewer_pane_g3_ParamLimits

0x59da,	// (0x000417d3) main_viewer_pane_g3

0x59e9,	// (0x000417e2) main_viewer_pane_g4_ParamLimits

0x59e9,	// (0x000417e2) main_viewer_pane_g4

0xc209,	// (0x00048002) main_viewer_pane_g5_ParamLimits

0xc209,	// (0x00048002) main_viewer_pane_g5

0xc209,	// (0x00048002) main_viewer_pane_g7_ParamLimits

0xc209,	// (0x00048002) main_viewer_pane_g7

0xc21b,	// (0x00048014) main_viewer_pane_g8_ParamLimits

0xc21b,	// (0x00048014) main_viewer_pane_g8

0x0007,

0xf431,	// (0x0004b22a) main_viewer_pane_g_ParamLimits

0xf431,	// (0x0004b22a) main_viewer_pane_g

0x1cfc,	// (0x0003daf5) viewer_content_pane_ParamLimits

0x1cfc,	// (0x0003daf5) viewer_content_pane

0x5a25,	// (0x0004181e) main_postcard_pane_g1_ParamLimits

0x5a25,	// (0x0004181e) main_postcard_pane_g1

0x5a3b,	// (0x00041834) main_postcard_pane_g2_ParamLimits

0x5a3b,	// (0x00041834) main_postcard_pane_g2

0x5a51,	// (0x0004184a) main_postcard_pane_g3_ParamLimits

0x5a51,	// (0x0004184a) main_postcard_pane_g3

0x0005,

0xf442,	// (0x0004b23b) main_postcard_pane_g_ParamLimits

0xf442,	// (0x0004b23b) main_postcard_pane_g

0x5a68,	// (0x00041861) main_postcard_pane_g4

0x75e3,	// (0x000433dc) smil_status_volume_pane_g2

0x5aab,	// (0x000418a4) postcard_pane_ParamLimits

0x5aab,	// (0x000418a4) postcard_pane

0x1d18,	// (0x0003db11) postcard_pane_g1_ParamLimits

0x1d18,	// (0x0003db11) postcard_pane_g1

0x5aed,	// (0x000418e6) postcard_pane_g2_ParamLimits

0x5aed,	// (0x000418e6) postcard_pane_g2

0x5af9,	// (0x000418f2) postcard_pane_g3_ParamLimits

0x5af9,	// (0x000418f2) postcard_pane_g3

0x1d0a,	// (0x0003db03) postcard_pane_g4_ParamLimits

0x1d0a,	// (0x0003db03) postcard_pane_g4

0x5b05,	// (0x000418fe) postcard_pane_g5_ParamLimits

0x5b05,	// (0x000418fe) postcard_pane_g5

0x5b1a,	// (0x00041913) postcard_pane_g6_ParamLimits

0x5b1a,	// (0x00041913) postcard_pane_g6

0x1d18,	// (0x0003db11) postcard_pane_g7_ParamLimits

0x1d18,	// (0x0003db11) postcard_pane_g7

0x0006,

0xf44f,	// (0x0004b248) postcard_pane_g_ParamLimits

0xf44f,	// (0x0004b248) postcard_pane_g

0x5b2e,	// (0x00041927) main_mp2_pane_g1_ParamLimits

0x5b2e,	// (0x00041927) main_mp2_pane_g1

0x5b3a,	// (0x00041933) main_mp2_pane_g2_ParamLimits

0x5b3a,	// (0x00041933) main_mp2_pane_g2

0x5b46,	// (0x0004193f) main_mp2_pane_g3_ParamLimits

0x5b46,	// (0x0004193f) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x0004b257) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x0004b257) main_mp2_pane_g

0x5b52,	// (0x0004194b) main_mp2_pane_t1_ParamLimits

0x5b52,	// (0x0004194b) main_mp2_pane_t1

0x5b67,	// (0x00041960) main_mp2_pane_t2_ParamLimits

0x5b67,	// (0x00041960) main_mp2_pane_t2

0x5b79,	// (0x00041972) main_mp2_pane_t3_ParamLimits

0x5b79,	// (0x00041972) main_mp2_pane_t3

0x0002,

0xf465,	// (0x0004b25e) main_mp2_pane_t_ParamLimits

0xf465,	// (0x0004b25e) main_mp2_pane_t

0x1d26,	// (0x0003db1f) pec_content_pane_ParamLimits

0x1d26,	// (0x0003db1f) pec_content_pane

0x12cd,	// (0x0003d0c6) scroll_pane_cp015

0x1d38,	// (0x0003db31) pec_attribute_pane_ParamLimits

0x1d38,	// (0x0003db31) pec_attribute_pane

0x5b8b,	// (0x00041984) pec_content_pane_g1_ParamLimits

0x5b8b,	// (0x00041984) pec_content_pane_g1

0x1d48,	// (0x0003db41) pec_content_pane_t1_ParamLimits

0x1d48,	// (0x0003db41) pec_content_pane_t1

0x1d5a,	// (0x0003db53) pec_content_pane_t2_ParamLimits

0x1d5a,	// (0x0003db53) pec_content_pane_t2

0x0001,

0x2681,	// (0x0003e47a) pec_content_pane_t_ParamLimits

0x2681,	// (0x0003e47a) pec_content_pane_t

0x5b97,	// (0x00041990) list_single_graphic_pane_cp01_ParamLimits

0x5b97,	// (0x00041990) list_single_graphic_pane_cp01

0x0e83,	// (0x0003cc7c) bg_popup_sub_pane_cp04

0x1d6c,	// (0x0003db65) popup_mup_playback_window_g1

0x1d78,	// (0x0003db71) popup_mup_playback_window_t1

0x1d8d,	// (0x0003db86) popup_mup_playback_window_t2

0x0001,

0xf46c,	// (0x0004b265) popup_mup_playback_window_t

0x1dc4,	// (0x0003dbbd) main_image_pane_g1_ParamLimits

0x1dc4,	// (0x0003dbbd) main_image_pane_g1

0x1e07,	// (0x0003dc00) scroll_pane_cp018_ParamLimits

0x1e07,	// (0x0003dc00) scroll_pane_cp018

0x1e1f,	// (0x0003dc18) scroll_pane_cp016_ParamLimits

0x1e1f,	// (0x0003dc18) scroll_pane_cp016

0x5c64,	// (0x00041a5d) smil2_image_pane_ParamLimits

0x5c64,	// (0x00041a5d) smil2_image_pane

0x5c94,	// (0x00041a8d) smil2_root_pane_ParamLimits

0x5c94,	// (0x00041a8d) smil2_root_pane

0x5ccc,	// (0x00041ac5) smil2_text_pane_ParamLimits

0x5ccc,	// (0x00041ac5) smil2_text_pane

0x0c28,	// (0x0003ca21) bg_list_pane_cp06

0x1e5b,	// (0x0003dc54) grid_radio_pane

0x0c28,	// (0x0003ca21) bg_popup_window_pane_cp06

0x1e63,	// (0x0003dc5c) main_fmradio_pane_t1

0x6f46,	// (0x00042d3f) heading_pane_cp04

0x1e71,	// (0x0003dc6a) main_fmradio_pane_t2

0x6f4e,	// (0x00042d47) popup_cale_lunar_info_window_g1

0x1e7f,	// (0x0003dc78) main_fmradio_pane_t3

0x6f56,	// (0x00042d4f) popup_cale_lunar_info_window_g2

0x1e8d,	// (0x0003dc86) main_fmradio_pane_t4

0x0001,

0x1e9b,	// (0x0003dc94) main_fmradio_pane_t5

0x0004,

0xf54c,	// (0x0004b345) popup_cale_lunar_info_window_g

0xf481,	// (0x0004b27a) main_fmradio_pane_t

0x1ea9,	// (0x0003dca2) wait_bar_pane_cp03

0x1eb1,	// (0x0003dcaa) cell_fmradio_pane_ParamLimits

0x1eb1,	// (0x0003dcaa) cell_fmradio_pane

0x1d18,	// (0x0003db11) cell_fmradio_pane_g1_ParamLimits

0x1d18,	// (0x0003db11) cell_fmradio_pane_g1

0x0c28,	// (0x0003ca21) grid_highlight_pane_cp011

0x1ec4,	// (0x0003dcbd) poc_content_pane_ParamLimits

0x1ec4,	// (0x0003dcbd) poc_content_pane

0x1ed6,	// (0x0003dccf) scroll_pane_cp019

0x5d4c,	// (0x00041b45) popup_call_poc_act_window_ParamLimits

0x5d4c,	// (0x00041b45) popup_call_poc_act_window

0x5d70,	// (0x00041b69) popup_call_poc_inact_window_ParamLimits

0x5d70,	// (0x00041b69) popup_call_poc_inact_window

0xf523,	// (0x0004b31c) bg_popup_call_poc_act_pane_g

0x6e34,	// (0x00042c2d) bg_popup_call_poc_inact_pane_g1

0x6e3c,	// (0x00042c35) bg_popup_call_poc_inact_pane_g2

0x1ede,	// (0x0003dcd7) popup_call_poc_act_window_g2

0x6e44,	// (0x00042c3d) bg_popup_call_poc_inact_pane_g3

0x6e4c,	// (0x00042c45) bg_popup_call_poc_inact_pane_g4

0x6e54,	// (0x00042c4d) bg_popup_call_poc_inact_pane_g5

0x1ee6,	// (0x0003dcdf) popup_call_poc_act_window_t1_ParamLimits

0x1ee6,	// (0x0003dcdf) popup_call_poc_act_window_t1

0x1f0e,	// (0x0003dd07) popup_call_poc_act_window_t2_ParamLimits

0x1f0e,	// (0x0003dd07) popup_call_poc_act_window_t2

0x1f36,	// (0x0003dd2f) popup_call_poc_act_window_t3_ParamLimits

0x1f36,	// (0x0003dd2f) popup_call_poc_act_window_t3

0x5d89,	// (0x00041b82) popup_call_poc_act_window_t4_ParamLimits

0x5d89,	// (0x00041b82) popup_call_poc_act_window_t4

0x0003,

0xf48c,	// (0x0004b285) popup_call_poc_act_window_t_ParamLimits

0xf48c,	// (0x0004b285) popup_call_poc_act_window_t

0x6e5c,	// (0x00042c55) bg_popup_call_poc_inact_pane_g6

0x6e64,	// (0x00042c5d) bg_popup_call_poc_inact_pane_g7

0x6e6c,	// (0x00042c65) bg_popup_call_poc_inact_pane_g8

0x5d9b,	// (0x00041b94) popup_call_poc_inact_window_g2

0x6e74,	// (0x00042c6d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf510,	// (0x0004b309) bg_popup_call_poc_inact_pane_g

0x5da3,	// (0x00041b9c) popup_call_poc_inact_window_t1_ParamLimits

0x5da3,	// (0x00041b9c) popup_call_poc_inact_window_t1

0x5db8,	// (0x00041bb1) popup_call_poc_inact_window_t2_ParamLimits

0x5db8,	// (0x00041bb1) popup_call_poc_inact_window_t2

0x5dcd,	// (0x00041bc6) popup_call_poc_inact_window_t3_ParamLimits

0x5dcd,	// (0x00041bc6) popup_call_poc_inact_window_t3

0x0002,

0xf495,	// (0x0004b28e) popup_call_poc_inact_window_t_ParamLimits

0xf495,	// (0x0004b28e) popup_call_poc_inact_window_t

0x74d4,	// (0x000432cd) context_pane_ParamLimits

0x7539,	// (0x00043332) signal_pane_ParamLimits

0x1122,	// (0x0003cf1b) main_call2_pane

0xc260,	// (0x00048059) popup_phob_thumbnail2_window_ParamLimits

0xc260,	// (0x00048059) popup_phob_thumbnail2_window

0xc1f1,	// (0x00047fea) aid_hotspot_pointer_arrow_pane

0xc1f9,	// (0x00047ff2) aid_hotspot_pointer_hand_pane

0x6fc5,	// (0x00042dbe) phob_pre_status_pane_g5

0x0ea5,	// (0x0003cc9e) cams_zoom_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) image_vga_pane_ParamLimits

0x0efe,	// (0x0003ccf7) main_camera_pane_g1_ParamLimits

0x0efe,	// (0x0003ccf7) main_camera_pane_g2_ParamLimits

0x0efe,	// (0x0003ccf7) main_camera_pane_g3_ParamLimits

0x0efe,	// (0x0003ccf7) main_camera_pane_g4_ParamLimits

0x0efe,	// (0x0003ccf7) main_camera_pane_g5_ParamLimits

0x0efe,	// (0x0003ccf7) main_camera_pane_g6_ParamLimits

0x0efe,	// (0x0003ccf7) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x0004afbe) main_camera_pane_g_ParamLimits

0x1172,	// (0x0003cf6b) main_camera_pane_t1_ParamLimits

0x1172,	// (0x0003cf6b) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x0004afcf) main_camera_pane_t_ParamLimits

0x0e83,	// (0x0003cc7c) bg_popup_preview_window_pane_cp01_ParamLimits

0x0e83,	// (0x0003cc7c) bg_popup_preview_window_pane_cp01

0x5de2,	// (0x00041bdb) popup_phob_thumbnail2_window_g1_ParamLimits

0x5de2,	// (0x00041bdb) popup_phob_thumbnail2_window_g1

0x0c28,	// (0x0003ca21) call2_cli_visual_pane

0x5e09,	// (0x00041c02) popup_call2_audio_conf_window_ParamLimits

0x5e09,	// (0x00041c02) popup_call2_audio_conf_window

0x5e29,	// (0x00041c22) popup_call2_audio_first_window_ParamLimits

0x5e29,	// (0x00041c22) popup_call2_audio_first_window

0x5ebf,	// (0x00041cb8) popup_call2_audio_in_window_ParamLimits

0x5ebf,	// (0x00041cb8) popup_call2_audio_in_window

0x5f07,	// (0x00041d00) popup_call2_audio_out_window_ParamLimits

0x5f07,	// (0x00041d00) popup_call2_audio_out_window

0x5f71,	// (0x00041d6a) popup_call2_audio_second_window_ParamLimits

0x5f71,	// (0x00041d6a) popup_call2_audio_second_window

0x5fd7,	// (0x00041dd0) popup_call2_audio_wait_window_ParamLimits

0x5fd7,	// (0x00041dd0) popup_call2_audio_wait_window

0x0c28,	// (0x0003ca21) bg_popup_call2_act_pane_cp03

0x0e65,	// (0x0003cc5e) list_conf_pane_cp

0x6011,	// (0x00041e0a) popup_call2_audio_conf_window_t1

0x1873,	// (0x0003d66c) list_single_graphic_popup_conf2_pane_ParamLimits

0x1873,	// (0x0003d66c) list_single_graphic_popup_conf2_pane

0x1886,	// (0x0003d67f) list_highlight_pane_cp04

0x601f,	// (0x00041e18) list_single_graphic_popup_conf2_pane_g1

0x1897,	// (0x0003d690) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf49c,	// (0x0004b295) list_single_graphic_popup_conf2_pane_g

0x6029,	// (0x00041e22) list_single_graphic_popup_conf2_pane_t1

0x6037,	// (0x00041e30) bg_popup_call2_act_pane_cp01_ParamLimits

0x6037,	// (0x00041e30) bg_popup_call2_act_pane_cp01

0x60c1,	// (0x00041eba) call_type_pane_cp05_ParamLimits

0x60c1,	// (0x00041eba) call_type_pane_cp05

0x6115,	// (0x00041f0e) popup_call2_audio_second_window_g1_ParamLimits

0x6115,	// (0x00041f0e) popup_call2_audio_second_window_g1

0x6169,	// (0x00041f62) popup_call2_audio_second_window_g2_ParamLimits

0x6169,	// (0x00041f62) popup_call2_audio_second_window_g2

0x0002,

0xf4a1,	// (0x0004b29a) popup_call2_audio_second_window_g_ParamLimits

0xf4a1,	// (0x0004b29a) popup_call2_audio_second_window_g

0x61ce,	// (0x00041fc7) popup_call2_audio_second_window_t1_ParamLimits

0x61ce,	// (0x00041fc7) popup_call2_audio_second_window_t1

0x6289,	// (0x00042082) popup_call2_audio_second_window_t2_ParamLimits

0x6289,	// (0x00042082) popup_call2_audio_second_window_t2

0x62dc,	// (0x000420d5) popup_call2_audio_second_window_t3_ParamLimits

0x62dc,	// (0x000420d5) popup_call2_audio_second_window_t3

0x0003,

0xf4a8,	// (0x0004b2a1) popup_call2_audio_second_window_t_ParamLimits

0xf4a8,	// (0x0004b2a1) popup_call2_audio_second_window_t

0x0c28,	// (0x0003ca21) bg_popup_call2_in_pane_cp02

0x0c32,	// (0x0003ca2b) call_type_pane_cp04

0x63cf,	// (0x000421c8) popup_call2_audio_wait_window_g1

0x63d7,	// (0x000421d0) popup_call2_audio_wait_window_g2

0x0001,

0xf4b1,	// (0x0004b2aa) popup_call2_audio_wait_window_g

0x0c4a,	// (0x0003ca43) popup_call2_audio_wait_window_t3

0x63df,	// (0x000421d8) bg_popup_call2_act_pane_ParamLimits

0x63df,	// (0x000421d8) bg_popup_call2_act_pane

0x649f,	// (0x00042298) call_type_pane_cp03_ParamLimits

0x649f,	// (0x00042298) call_type_pane_cp03

0x6503,	// (0x000422fc) popup_call2_audio_first_window_g1_ParamLimits

0x6503,	// (0x000422fc) popup_call2_audio_first_window_g1

0x6573,	// (0x0004236c) popup_call2_audio_first_window_g2_ParamLimits

0x6573,	// (0x0004236c) popup_call2_audio_first_window_g2

0x65d7,	// (0x000423d0) popup_call2_audio_first_window_g3_ParamLimits

0x65d7,	// (0x000423d0) popup_call2_audio_first_window_g3

0x0004,

0xf4b6,	// (0x0004b2af) popup_call2_audio_first_window_g_ParamLimits

0xf4b6,	// (0x0004b2af) popup_call2_audio_first_window_g

0x665f,	// (0x00042458) popup_call2_audio_first_window_t1_ParamLimits

0x665f,	// (0x00042458) popup_call2_audio_first_window_t1

0x6762,	// (0x0004255b) popup_call2_audio_first_window_t4_ParamLimits

0x6762,	// (0x0004255b) popup_call2_audio_first_window_t4

0x6845,	// (0x0004263e) popup_call2_audio_first_window_t5_ParamLimits

0x6845,	// (0x0004263e) popup_call2_audio_first_window_t5

0x0003,

0xf4c1,	// (0x0004b2ba) popup_call2_audio_first_window_t_ParamLimits

0xf4c1,	// (0x0004b2ba) popup_call2_audio_first_window_t

0x0e7b,	// (0x0003cc74) bg_popup_call2_act_pane_g1

0x6f5e,	// (0x00042d57) popup_cale_lunar_info_window_t1

0x6f6c,	// (0x00042d65) popup_cale_lunar_info_window_t2

0x6f7a,	// (0x00042d73) popup_cale_lunar_info_window_t3

0x0c28,	// (0x0003ca21) bg_popup_call2_bubble_pane

0x6946,	// (0x0004273f) bg_popup_call2_in_pane_cp01_ParamLimits

0x6946,	// (0x0004273f) bg_popup_call2_in_pane_cp01

0x0904,	// (0x0003c6fd) call_type_pane_cp02

0x698e,	// (0x00042787) popup_call2_audio_out_window_g1_ParamLimits

0x698e,	// (0x00042787) popup_call2_audio_out_window_g1

0x69ba,	// (0x000427b3) popup_call2_audio_out_window_g2_ParamLimits

0x69ba,	// (0x000427b3) popup_call2_audio_out_window_g2

0x69e2,	// (0x000427db) popup_call2_audio_out_window_g3_ParamLimits

0x69e2,	// (0x000427db) popup_call2_audio_out_window_g3

0x0003,

0xf4ca,	// (0x0004b2c3) popup_call2_audio_out_window_g_ParamLimits

0xf4ca,	// (0x0004b2c3) popup_call2_audio_out_window_g

0x6a1d,	// (0x00042816) popup_call2_audio_out_window_t1_ParamLimits

0x6a1d,	// (0x00042816) popup_call2_audio_out_window_t1

0x6a7c,	// (0x00042875) popup_call2_audio_out_window_t2_ParamLimits

0x6a7c,	// (0x00042875) popup_call2_audio_out_window_t2

0x6ad0,	// (0x000428c9) popup_call2_audio_out_window_t3_ParamLimits

0x6ad0,	// (0x000428c9) popup_call2_audio_out_window_t3

0x6ae6,	// (0x000428df) popup_call2_audio_out_window_t4_ParamLimits

0x6ae6,	// (0x000428df) popup_call2_audio_out_window_t4

0x6afc,	// (0x000428f5) popup_call2_audio_out_window_t5_ParamLimits

0x6afc,	// (0x000428f5) popup_call2_audio_out_window_t5

0x0005,

0xf4d3,	// (0x0004b2cc) popup_call2_audio_out_window_t_ParamLimits

0xf4d3,	// (0x0004b2cc) popup_call2_audio_out_window_t

0x6b60,	// (0x00042959) bg_popup_call2_in_pane_ParamLimits

0x6b60,	// (0x00042959) bg_popup_call2_in_pane

0x6bbc,	// (0x000429b5) popup_call2_audio_in_window_g1_ParamLimits

0x6bbc,	// (0x000429b5) popup_call2_audio_in_window_g1

0x6bf4,	// (0x000429ed) popup_call2_audio_in_window_g2_ParamLimits

0x6bf4,	// (0x000429ed) popup_call2_audio_in_window_g2

0x6c2c,	// (0x00042a25) popup_call2_audio_in_window_g3_ParamLimits

0x6c2c,	// (0x00042a25) popup_call2_audio_in_window_g3

0x0003,

0xf4e0,	// (0x0004b2d9) popup_call2_audio_in_window_g_ParamLimits

0xf4e0,	// (0x0004b2d9) popup_call2_audio_in_window_g

0x6c84,	// (0x00042a7d) popup_call2_audio_in_window_t1_ParamLimits

0x6c84,	// (0x00042a7d) popup_call2_audio_in_window_t1

0x6d04,	// (0x00042afd) popup_call2_audio_in_window_t2_ParamLimits

0x6d04,	// (0x00042afd) popup_call2_audio_in_window_t2

0x6d84,	// (0x00042b7d) popup_call2_audio_in_window_t3_ParamLimits

0x6d84,	// (0x00042b7d) popup_call2_audio_in_window_t3

0x6d9e,	// (0x00042b97) popup_call2_audio_in_window_t4_ParamLimits

0x6d9e,	// (0x00042b97) popup_call2_audio_in_window_t4

0x6db0,	// (0x00042ba9) popup_call2_audio_in_window_t5_ParamLimits

0x6db0,	// (0x00042ba9) popup_call2_audio_in_window_t5

0x6dc5,	// (0x00042bbe) popup_call2_audio_in_window_t6_ParamLimits

0x6dc5,	// (0x00042bbe) popup_call2_audio_in_window_t6

0x0005,

0xf4e9,	// (0x0004b2e2) popup_call2_audio_in_window_t_ParamLimits

0xf4e9,	// (0x0004b2e2) popup_call2_audio_in_window_t

0x0e7b,	// (0x0003cc74) bg_popup_call2_in_pane_g1

0x6f88,	// (0x00042d81) popup_cale_lunar_info_window_t4

0x0003,

0xf551,	// (0x0004b34a) popup_cale_lunar_info_window_t

0x0e83,	// (0x0003cc7c) bg_popup_call2_rect_pane_ParamLimits

0x0e83,	// (0x0003cc7c) bg_popup_call2_rect_pane

0x0c28,	// (0x0003ca21) call2_cli_visual_graphic_pane

0x0c28,	// (0x0003ca21) call2_cli_visual_text_pane

0xc287,	// (0x00048080) smil_status_volume_pane_g3

0x0002,

0x0e9b,	// (0x0003cc94) call2_cli_visual_graphic_pane_g1

0x0e9b,	// (0x0003cc94) call2_cli_visual_graphic_pane_g2

0x0e9b,	// (0x0003cc94) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4f6,	// (0x0004b2ef) call2_cli_visual_graphic_pane_g

0x6df4,	// (0x00042bed) bg_popup_call2_rect_pane_g1

0x1047,	// (0x0003ce40) bg_popup_call2_rect_pane_g2

0x6dfc,	// (0x00042bf5) bg_popup_call2_rect_pane_g3

0x6e04,	// (0x00042bfd) bg_popup_call2_rect_pane_g4

0x6e0c,	// (0x00042c05) bg_popup_call2_rect_pane_g5

0x6e14,	// (0x00042c0d) bg_popup_call2_rect_pane_g6

0x6e1c,	// (0x00042c15) bg_popup_call2_rect_pane_g7

0x6e24,	// (0x00042c1d) bg_popup_call2_rect_pane_g8

0x6e2c,	// (0x00042c25) bg_popup_call2_rect_pane_g9

0x0008,

0xf4fd,	// (0x0004b2f6) bg_popup_call2_rect_pane_g

0x6e34,	// (0x00042c2d) bg_popup_call2_bubble_pane_g1

0x6e3c,	// (0x00042c35) bg_popup_call2_bubble_pane_g2

0x6e44,	// (0x00042c3d) bg_popup_call2_bubble_pane_g3

0x6e4c,	// (0x00042c45) bg_popup_call2_bubble_pane_g4

0x6e54,	// (0x00042c4d) bg_popup_call2_bubble_pane_g5

0x6e5c,	// (0x00042c55) bg_popup_call2_bubble_pane_g6

0x6e64,	// (0x00042c5d) bg_popup_call2_bubble_pane_g7

0x6e6c,	// (0x00042c65) bg_popup_call2_bubble_pane_g8

0x6e74,	// (0x00042c6d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf510,	// (0x0004b309) bg_popup_call2_bubble_pane_g

0x3cbb,	// (0x0003fab4) aid_cale_week_size_cell_pane

0x4261,	// (0x0004005a) aid_cams_cif_uncrop_pane_ParamLimits

0x4261,	// (0x0004005a) aid_cams_cif_uncrop_pane

0x43b7,	// (0x000401b0) aid_cams_size_cell_ParamLimits

0x43b7,	// (0x000401b0) aid_cams_size_cell

0x43cb,	// (0x000401c4) grid_cams_pane_ParamLimits

0x43e5,	// (0x000401de) linegrid_cams_pane_ParamLimits

0x44cc,	// (0x000402c5) call_video_pane_t1

0x44ea,	// (0x000402e3) call_video_pane_t2

0x0001,

0xf222,	// (0x0004b01b) call_video_pane_t

0x4918,	// (0x00040711) aid_cale_month_size_cell_pane_ParamLimits

0x4918,	// (0x00040711) aid_cale_month_size_cell_pane

0xf595,	// (0x0004b38e) smil_status_volume_pane_g

0xc294,	// (0x0004808d) volume_smil_pane_ParamLimits

0xc015,	// (0x00047e0e) aid_popup2_width_pane

0x3c40,	// (0x0003fa39) cell_qdial_pane_g4_ParamLimits

0x3c40,	// (0x0003fa39) cell_qdial_pane_g4

0x5688,	// (0x00041481) aid_blid_cardinal_pane_ParamLimits

0x5694,	// (0x0004148d) aid_blid_destination_pane_ParamLimits

0x5694,	// (0x0004148d) aid_blid_destination_pane

0x0e83,	// (0x0003cc7c) bg_popup_call_poc_act_pane_ParamLimits

0x0e83,	// (0x0003cc7c) bg_popup_call_poc_act_pane

0x0e83,	// (0x0003cc7c) bg_popup_call_poc_inact_pane_ParamLimits

0x0e83,	// (0x0003cc7c) bg_popup_call_poc_inact_pane

0x6e84,	// (0x00042c7d) bg_popup_call_poc_act_pane_g1

0x6e8c,	// (0x00042c85) bg_popup_call_poc_act_pane_g2

0x6e94,	// (0x00042c8d) bg_popup_call_poc_act_pane_g3

0x6e4c,	// (0x00042c45) bg_popup_call_poc_act_pane_g4

0x6e54,	// (0x00042c4d) bg_popup_call_poc_act_pane_g5

0x6e9c,	// (0x00042c95) bg_popup_call_poc_act_pane_g6

0x6e64,	// (0x00042c5d) bg_popup_call_poc_act_pane_g7

0x6ea4,	// (0x00042c9d) bg_popup_call_poc_act_pane_g8

0x0c28,	// (0x0003ca21) main_usb_pane

0xc23b,	// (0x00048034) popup_cale_lunar_info_window

0x47c4,	// (0x000405bd) im_reading_pane_t1_ParamLimits

0x1225,	// (0x0003d01e) list_im_pane_ParamLimits

0x1236,	// (0x0003d02f) scroll_pane_cp07_ParamLimits

0x0c28,	// (0x0003ca21) grid_highlight_pane_cp012

0x0e83,	// (0x0003cc7c) mup_scale_pane_ParamLimits

0x1d18,	// (0x0003db11) main_usb_pane_g1_ParamLimits

0x1d18,	// (0x0003db11) main_usb_pane_g1

0x6ec4,	// (0x00042cbd) main_usb_pane_g2_ParamLimits

0x6ec4,	// (0x00042cbd) main_usb_pane_g2

0x0001,

0xf53a,	// (0x0004b333) main_usb_pane_g_ParamLimits

0xf53a,	// (0x0004b333) main_usb_pane_g

0x6eda,	// (0x00042cd3) main_usb_pane_t1_ParamLimits

0x6eda,	// (0x00042cd3) main_usb_pane_t1

0x6eec,	// (0x00042ce5) main_usb_pane_t2_ParamLimits

0x6eec,	// (0x00042ce5) main_usb_pane_t2

0x6efe,	// (0x00042cf7) main_usb_pane_t3_ParamLimits

0x6efe,	// (0x00042cf7) main_usb_pane_t3

0x6f10,	// (0x00042d09) main_usb_pane_t4_ParamLimits

0x6f10,	// (0x00042d09) main_usb_pane_t4

0x6f22,	// (0x00042d1b) main_usb_pane_t5_ParamLimits

0x6f22,	// (0x00042d1b) main_usb_pane_t5

0x6f34,	// (0x00042d2d) main_usb_pane_t6_ParamLimits

0x6f34,	// (0x00042d2d) main_usb_pane_t6

0x0005,

0xf53f,	// (0x0004b338) main_usb_pane_t_ParamLimits

0x5637,	// (0x00041430) aid_text_placing

0x5640,	// (0x00041439) main_location2_pane_t1_ParamLimits

0x5652,	// (0x0004144b) main_location2_pane_t2_ParamLimits

0x5664,	// (0x0004145d) main_location2_pane_t3_ParamLimits

0x5676,	// (0x0004146f) main_location2_pane_t4_ParamLimits

0x5676,	// (0x0004146f) main_location2_pane_t4

0xf35e,	// (0x0004b157) main_location2_pane_t_ParamLimits

0x0ebf,	// (0x0003ccb8) find_pinb_pane_g2_ParamLimits

0x0ebf,	// (0x0003ccb8) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x0004aed3) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x0004aed3) find_pinb_pane_g

0x0ecb,	// (0x0003ccc4) find_pinb_pane_t1_ParamLimits

0x0edd,	// (0x0003ccd6) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x0004aed8) find_pinb_pane_t_ParamLimits

0x0c28,	// (0x0003ca21) main_call3_pane

0x4e03,	// (0x00040bfc) cale_month_day_heading_pane_t1_ParamLimits

0x4e89,	// (0x00040c82) cale_month_day_heading_pane_t2_ParamLimits

0x4f02,	// (0x00040cfb) cale_month_day_heading_pane_t3_ParamLimits

0x4f7b,	// (0x00040d74) cale_month_day_heading_pane_t4_ParamLimits

0x4ffc,	// (0x00040df5) cale_month_day_heading_pane_t5_ParamLimits

0x5085,	// (0x00040e7e) cale_month_day_heading_pane_t6_ParamLimits

0x510e,	// (0x00040f07) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0004b053) cale_month_day_heading_pane_t_ParamLimits

0x1480,	// (0x0003d279) smil_status_volume_pane

0x5ac9,	// (0x000418c2) postcard_address_pane_ParamLimits

0x5ac9,	// (0x000418c2) postcard_address_pane

0x5adb,	// (0x000418d4) postcard_message_pane_ParamLimits

0x5adb,	// (0x000418d4) postcard_message_pane

0x6dda,	// (0x00042bd3) call2_cli_visual_pane_t1_ParamLimits

0x6dda,	// (0x00042bd3) call2_cli_visual_pane_t1

0x7797,	// (0x00043590) postcard_message_pane_t1_ParamLimits

0x7797,	// (0x00043590) postcard_message_pane_t1

0x777f,	// (0x00043578) postcard_address_pane_t1_ParamLimits

0x777f,	// (0x00043578) postcard_address_pane_t1

0x776b,	// (0x00043564) popup_call3_audio_in_window_ParamLimits

0x776b,	// (0x00043564) popup_call3_audio_in_window

0x75f6,	// (0x000433ef) bg_popup_call3_in_pane_ParamLimits

0x75f6,	// (0x000433ef) bg_popup_call3_in_pane

0x766c,	// (0x00043465) popup_call3_audio_in_window_g1_ParamLimits

0x766c,	// (0x00043465) popup_call3_audio_in_window_g1

0x768c,	// (0x00043485) popup_call3_audio_in_window_g2_ParamLimits

0x768c,	// (0x00043485) popup_call3_audio_in_window_g2

0x76ac,	// (0x000434a5) popup_call3_audio_in_window_g3_ParamLimits

0x76ac,	// (0x000434a5) popup_call3_audio_in_window_g3

0x0003,

0xf59c,	// (0x0004b395) popup_call3_audio_in_window_g_ParamLimits

0xf59c,	// (0x0004b395) popup_call3_audio_in_window_g

0x76dd,	// (0x000434d6) popup_call3_audio_in_window_t1_ParamLimits

0x76dd,	// (0x000434d6) popup_call3_audio_in_window_t1

0x771b,	// (0x00043514) popup_call3_audio_in_window_t2_ParamLimits

0x771b,	// (0x00043514) popup_call3_audio_in_window_t2

0x7759,	// (0x00043552) popup_call3_audio_in_window_t3_ParamLimits

0x7759,	// (0x00043552) popup_call3_audio_in_window_t3

0x0002,

0xf5a5,	// (0x0004b39e) popup_call3_audio_in_window_t_ParamLimits

0xf5a5,	// (0x0004b39e) popup_call3_audio_in_window_t

0x1122,	// (0x0003cf1b) bg_popup_call3_rect_pane

0x6df4,	// (0x00042bed) bg_popup_call3_rect_pane_g1

0x1047,	// (0x0003ce40) bg_popup_call3_rect_pane_g2

0x6dfc,	// (0x00042bf5) bg_popup_call3_rect_pane_g3

0x6e04,	// (0x00042bfd) bg_popup_call3_rect_pane_g4

0x6e0c,	// (0x00042c05) bg_popup_call3_rect_pane_g5

0x6e14,	// (0x00042c0d) bg_popup_call3_rect_pane_g6

0x6e1c,	// (0x00042c15) bg_popup_call3_rect_pane_g7

0x07fd,	// (0x0003c5f6) mup_visualizer_osc_pane

0x07fd,	// (0x0003c5f6) mup_visualizer_spec_pane

0x7626,	// (0x0004341f) call3_video_qcif_pane_ParamLimits

0x7626,	// (0x0004341f) call3_video_qcif_pane

0x7639,	// (0x00043432) call3_video_qcif_uncrop_pane_ParamLimits

0x7639,	// (0x00043432) call3_video_qcif_uncrop_pane

0x7647,	// (0x00043440) call3_video_subqcif_pane_ParamLimits

0x7647,	// (0x00043440) call3_video_subqcif_pane

0x765b,	// (0x00043454) call3_video_subqcif_uncrop_pane_ParamLimits

0x765b,	// (0x00043454) call3_video_subqcif_uncrop_pane

0x76cc,	// (0x000434c5) popup_call3_audio_in_window_g4_ParamLimits

0x76cc,	// (0x000434c5) popup_call3_audio_in_window_g4

0x07fd,	// (0x0003c5f6) mup_spec_half_pane

0x07fd,	// (0x0003c5f6) mup_spec_half_pane_cp

0x07fd,	// (0x0003c5f6) mup_osc_middle_pane

0x1158,	// (0x0003cf51) mup_visualizer_osc_pane_g1

0x75a9,	// (0x000433a2) mup_spec_bar_pane_ParamLimits

0x75a9,	// (0x000433a2) mup_spec_bar_pane

0x1158,	// (0x0003cf51) mup_spec_bar_pane_g1

0x1158,	// (0x0003cf51) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x0004b1d1) mup_spec_bar_pane_g

0x3cbb,	// (0x0003fab4) aid_cale_week_size_cell_pane_ParamLimits

0x3cd5,	// (0x0003face) bg_cale_heading_pane_ParamLimits

0x1084,	// (0x0003ce7d) bg_cale_pane_cp01_ParamLimits

0x3ced,	// (0x0003fae6) cale_week_corner_pane_ParamLimits

0x3d0c,	// (0x0003fb05) cale_week_day_heading_pane_ParamLimits

0x3d29,	// (0x0003fb22) cale_week_scroll_pane_g1_ParamLimits

0x3d3c,	// (0x0003fb35) cale_week_scroll_pane_g2_ParamLimits

0x3d54,	// (0x0003fb4d) cale_week_scroll_pane_g3_ParamLimits

0x3d6c,	// (0x0003fb65) cale_week_scroll_pane_g4_ParamLimits

0x3d84,	// (0x0003fb7d) cale_week_scroll_pane_g5_ParamLimits

0x3da4,	// (0x0003fb9d) cale_week_scroll_pane_g6_ParamLimits

0x3dc4,	// (0x0003fbbd) cale_week_scroll_pane_g7_ParamLimits

0x3de4,	// (0x0003fbdd) cale_week_scroll_pane_g8_ParamLimits

0x3e08,	// (0x0003fc01) cale_week_scroll_pane_g9_ParamLimits

0x3e20,	// (0x0003fc19) cale_week_scroll_pane_g10_ParamLimits

0x3e38,	// (0x0003fc31) cale_week_scroll_pane_g11_ParamLimits

0x3e50,	// (0x0003fc49) cale_week_scroll_pane_g12_ParamLimits

0x3e68,	// (0x0003fc61) cale_week_scroll_pane_g13_ParamLimits

0x3e68,	// (0x0003fc61) cale_week_scroll_pane_g14_ParamLimits

0x3e68,	// (0x0003fc61) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0004af64) cale_week_scroll_pane_g_ParamLimits

0x3ea4,	// (0x0003fc9d) cale_week_time_pane_ParamLimits

0x3ec8,	// (0x0003fcc1) grid_cale_week_pane_ParamLimits

0x10a1,	// (0x0003ce9a) listscroll_cale_week_pane_t1

0x10b3,	// (0x0003ceac) scroll_pane_cp08_ParamLimits

0x4978,	// (0x00040771) cale_month_corner_pane_ParamLimits

0x1456,	// (0x0003d24f) cale_month_pane_t1

0x4d96,	// (0x00040b8f) cale_month_week_pane_ParamLimits

0x54b7,	// (0x000412b0) popup_call_status_window_g1_ParamLimits

0x54cb,	// (0x000412c4) popup_call_status_window_g2_ParamLimits

0x54df,	// (0x000412d8) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x0004b0de) popup_call_status_window_g_ParamLimits

0x1812,	// (0x0003d60b) aid_call2_pane

0x2e42,	// (0x0003ec3b) msg_header_pane_g1

0x5ac9,	// (0x000418c2) postcard_address2_pane_ParamLimits

0x5ac9,	// (0x000418c2) postcard_address2_pane

0x5adb,	// (0x000418d4) postcard_message2_pane_ParamLimits

0x5adb,	// (0x000418d4) postcard_message2_pane

0x7547,	// (0x00043340) message2_row_pane_ParamLimits

0x7547,	// (0x00043340) message2_row_pane

0x7563,	// (0x0004335c) address2_row_pane_ParamLimits

0x7563,	// (0x0004335c) address2_row_pane

0x7576,	// (0x0004336f) postcard_message2_row_pane_g1

0x757e,	// (0x00043377) postcard_message2_row_pane_t1

0x7576,	// (0x0004336f) address2_row_pane_g1

0x757e,	// (0x00043377) address2_row_pane_t1

0x41f8,	// (0x0003fff1) aid_size_cell_vorec

0x0c28,	// (0x0003ca21) main_rss_pane

0x758c,	// (0x00043385) rss_list_single_pane_ParamLimits

0x758c,	// (0x00043385) rss_list_single_pane

0x759a,	// (0x00043393) rss_list_single_pane_t1

0x759a,	// (0x00043393) rss_list_single_pane_t2

0x0001,

0xf590,	// (0x0004b389) rss_list_single_pane_t

0x0c28,	// (0x0003ca21) main_camera2_pane

0x0c28,	// (0x0003ca21) main_video2_pane

0xc2a9,	// (0x000480a2) cams_zoom_pane_cp2_ParamLimits

0xc2a9,	// (0x000480a2) cams_zoom_pane_cp2

0xc2a9,	// (0x000480a2) image2_vga_pane_ParamLimits

0xc2a9,	// (0x000480a2) image2_vga_pane

0xec5b,	// (0x0004aa54) main_camera2_pane_g1_ParamLimits

0xec5b,	// (0x0004aa54) main_camera2_pane_g1

0xec5b,	// (0x0004aa54) main_camera2_pane_g2_ParamLimits

0xec5b,	// (0x0004aa54) main_camera2_pane_g2

0xec5b,	// (0x0004aa54) main_camera2_pane_g3_ParamLimits

0xec5b,	// (0x0004aa54) main_camera2_pane_g3

0xec5b,	// (0x0004aa54) main_camera2_pane_g4_ParamLimits

0xec5b,	// (0x0004aa54) main_camera2_pane_g4

0xec5b,	// (0x0004aa54) main_camera2_pane_g5_ParamLimits

0xec5b,	// (0x0004aa54) main_camera2_pane_g5

0xec5b,	// (0x0004aa54) main_camera2_pane_g6_ParamLimits

0xec5b,	// (0x0004aa54) main_camera2_pane_g6

0xec5b,	// (0x0004aa54) main_camera2_pane_g7_ParamLimits

0xec5b,	// (0x0004aa54) main_camera2_pane_g7

0xec5b,	// (0x0004aa54) main_camera2_pane_g8_ParamLimits

0xec5b,	// (0x0004aa54) main_camera2_pane_g8

0x0008,

0xf5ac,	// (0x0004b3a5) main_camera2_pane_g_ParamLimits

0xf5ac,	// (0x0004b3a5) main_camera2_pane_g

0x77c1,	// (0x000435ba) main_camera2_pane_t1_ParamLimits

0x77c1,	// (0x000435ba) main_camera2_pane_t1

0x77c1,	// (0x000435ba) main_camera2_pane_t2_ParamLimits

0x77c1,	// (0x000435ba) main_camera2_pane_t2

0x77c1,	// (0x000435ba) main_camera2_pane_t3_ParamLimits

0x77c1,	// (0x000435ba) main_camera2_pane_t3

0x77c1,	// (0x000435ba) main_camera2_pane_t4_ParamLimits

0x77c1,	// (0x000435ba) main_camera2_pane_t4

0x0006,

0xf5bf,	// (0x0004b3b8) main_camera2_pane_t_ParamLimits

0xf5bf,	// (0x0004b3b8) main_camera2_pane_t

0xc2cb,	// (0x000480c4) cams_zoom_pane_cp4_ParamLimits

0xc2cb,	// (0x000480c4) cams_zoom_pane_cp4

0xc2d9,	// (0x000480d2) image2_cif_pane_ParamLimits

0xc2d9,	// (0x000480d2) image2_cif_pane

0x0ea5,	// (0x0003cc9e) image2_subqcif_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) image2_subqcif_pane

0x77d5,	// (0x000435ce) main_video2_pane_g1_ParamLimits

0x77d5,	// (0x000435ce) main_video2_pane_g1

0x77d5,	// (0x000435ce) main_video2_pane_g2_ParamLimits

0x77d5,	// (0x000435ce) main_video2_pane_g2

0x77d5,	// (0x000435ce) main_video2_pane_g3_ParamLimits

0x77d5,	// (0x000435ce) main_video2_pane_g3

0x77d5,	// (0x000435ce) main_video2_pane_g4_ParamLimits

0x77d5,	// (0x000435ce) main_video2_pane_g4

0x77d5,	// (0x000435ce) main_video2_pane_g5_ParamLimits

0x77d5,	// (0x000435ce) main_video2_pane_g5

0x77d5,	// (0x000435ce) main_video2_pane_g6_ParamLimits

0x77d5,	// (0x000435ce) main_video2_pane_g6

0x0005,

0xf5ce,	// (0x0004b3c7) main_video2_pane_g_ParamLimits

0xf5ce,	// (0x0004b3c7) main_video2_pane_g

0x77e3,	// (0x000435dc) main_video2_pane_t1_ParamLimits

0x77e3,	// (0x000435dc) main_video2_pane_t1

0x77e3,	// (0x000435dc) main_video2_pane_t2_ParamLimits

0x77e3,	// (0x000435dc) main_video2_pane_t2

0x77e3,	// (0x000435dc) main_video2_pane_t3_ParamLimits

0x77e3,	// (0x000435dc) main_video2_pane_t3

0x0002,

0xf5db,	// (0x0004b3d4) main_video2_pane_t_ParamLimits

0xf5db,	// (0x0004b3d4) main_video2_pane_t

0x7027,	// (0x00042e20) call_muted_g2

0x0001,

0xf582,	// (0x0004b37b) call_muted_g

0x0c28,	// (0x0003ca21) main_mup2_pane

0x1f6c,	// (0x0003dd65) main_mup2_pane_g1_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup2_pane_g1

0x1f6c,	// (0x0003dd65) main_mup2_pane_g2_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup2_pane_g2

0x1158,	// (0x0003cf51) main_mup_pane_g13_cp1

0x07fd,	// (0x0003c5f6) mup_volume_pane_cp1

0x1f6c,	// (0x0003dd65) main_mup2_pane_g4_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup2_pane_g4

0x1f6c,	// (0x0003dd65) main_mup2_pane_g5_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup2_pane_g5

0x1f6c,	// (0x0003dd65) main_mup2_pane_g6_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup2_pane_g6

0x1f6c,	// (0x0003dd65) main_mup2_pane_g7_ParamLimits

0x1f6c,	// (0x0003dd65) main_mup2_pane_g7

0x0006,

0xf5e2,	// (0x0004b3db) main_mup2_pane_g_ParamLimits

0xf5e2,	// (0x0004b3db) main_mup2_pane_g

0x1f7a,	// (0x0003dd73) main_mup2_pane_t1_ParamLimits

0x1f7a,	// (0x0003dd73) main_mup2_pane_t1

0x1f7a,	// (0x0003dd73) main_mup2_pane_t2_ParamLimits

0x1f7a,	// (0x0003dd73) main_mup2_pane_t2

0x1f7a,	// (0x0003dd73) main_mup2_pane_t3_ParamLimits

0x1f7a,	// (0x0003dd73) main_mup2_pane_t3

0x1f7a,	// (0x0003dd73) main_mup2_pane_t4_ParamLimits

0x1f7a,	// (0x0003dd73) main_mup2_pane_t4

0x1f7a,	// (0x0003dd73) main_mup2_pane_t5_ParamLimits

0x1f7a,	// (0x0003dd73) main_mup2_pane_t5

0x1f7a,	// (0x0003dd73) main_mup2_pane_t6_ParamLimits

0x1f7a,	// (0x0003dd73) main_mup2_pane_t6

0x0005,

0xf5f1,	// (0x0004b3ea) main_mup2_pane_t_ParamLimits

0xf5f1,	// (0x0004b3ea) main_mup2_pane_t

0x1f5e,	// (0x0003dd57) mup2_visualizer_pane_ParamLimits

0x1f5e,	// (0x0003dd57) mup2_visualizer_pane

0x1f5e,	// (0x0003dd57) mup_progress_pane_cp_ParamLimits

0x1f5e,	// (0x0003dd57) mup_progress_pane_cp

0x77f7,	// (0x000435f0) mup_volume_pane_cp_ParamLimits

0x77f7,	// (0x000435f0) mup_volume_pane_cp

0x0efe,	// (0x0003ccf7) mup2_visualizer_pane_g1_ParamLimits

0x0efe,	// (0x0003ccf7) mup2_visualizer_pane_g1

0x0f0c,	// (0x0003cd05) mup2_visualizer_pane_g2_ParamLimits

0x0f0c,	// (0x0003cd05) mup2_visualizer_pane_g2

0x0f0c,	// (0x0003cd05) mup2_visualizer_pane_g3_ParamLimits

0x0f0c,	// (0x0003cd05) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x0004aedd) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x0004aedd) mup2_visualizer_pane_g

0x1e53,	// (0x0003dc4c) aid_size_cell_fmradio

0x720a,	// (0x00043003) aid_height_parent_landcape

0x12b4,	// (0x0003d0ad) wml_content_pane_cp

0x12bc,	// (0x0003d0b5) wml_tabs_pane

0x12c5,	// (0x0003d0be) popup_wml_miniature_window

0x12cd,	// (0x0003d0c6) scroll_pane_cp021

0x12e1,	// (0x0003d0da) wml_content_pane_comp8

0x0c28,	// (0x0003ca21) bg_popup_sub_pane_cp05

0x780d,	// (0x00043606) popup_wml_miniature_window_g1

0x7815,	// (0x0004360e) wml_miniature_view_pane

0x781d,	// (0x00043616) aid_size_wml_view

0x7825,	// (0x0004361e) wml_miniature_view_pane_g1

0x782e,	// (0x00043627) wml_miniature_view_pane_g2

0x7837,	// (0x00043630) wml_miniature_view_pane_g3

0x783f,	// (0x00043638) wml_miniature_view_pane_g4

0x7847,	// (0x00043640) wml_miniature_view_pane_g5

0x784f,	// (0x00043648) wml_miniature_view_pane_g6

0x7857,	// (0x00043650) wml_miniature_view_pane_g7

0x785f,	// (0x00043658) wml_miniature_view_pane_g8

0x0007,

0xf5fe,	// (0x0004b3f7) wml_miniature_view_pane_g

0x7867,	// (0x00043660) background_graphic_ParamLimits

0x7867,	// (0x00043660) background_graphic

0x7873,	// (0x0004366c) wml_tabs_2_pane

0x787c,	// (0x00043675) wml_tabs_3_pane_ParamLimits

0x787c,	// (0x00043675) wml_tabs_3_pane

0x788e,	// (0x00043687) wml_tabs_4_pane_ParamLimits

0x788e,	// (0x00043687) wml_tabs_4_pane

0xc2e7,	// (0x000480e0) wml_tabs_5_pane_ParamLimits

0xc2e7,	// (0x000480e0) wml_tabs_5_pane

0xc301,	// (0x000480fa) wml_tabs_pane_g2_ParamLimits

0xc301,	// (0x000480fa) wml_tabs_pane_g2

0xc316,	// (0x0004810f) wml_tabs_pane_g3_ParamLimits

0xc316,	// (0x0004810f) wml_tabs_pane_g3

0xc32b,	// (0x00048124) wml_tabs_2_active_pane_ParamLimits

0xc32b,	// (0x00048124) wml_tabs_2_active_pane

0xc32b,	// (0x00048124) wml_tabs_2_passive_pane_ParamLimits

0xc32b,	// (0x00048124) wml_tabs_2_passive_pane

0x78a4,	// (0x0004369d) wml_tabs_3_active_pane_cp_ParamLimits

0x78a4,	// (0x0004369d) wml_tabs_3_active_pane_cp

0x78b9,	// (0x000436b2) wml_tabs_3_passive_pane_ParamLimits

0x78b9,	// (0x000436b2) wml_tabs_3_passive_pane

0x78cc,	// (0x000436c5) wml_tabs_3_passive_pane_cp_ParamLimits

0x78cc,	// (0x000436c5) wml_tabs_3_passive_pane_cp

0x78e3,	// (0x000436dc) tabs_4_active_pane

0x78eb,	// (0x000436e4) tabs_4_passive_pane

0x78f5,	// (0x000436ee) tabs_4_passive_pane_cp

0x78fd,	// (0x000436f6) tabs_4_passive_pane_cp2

0x6e7c,	// (0x00042c75) aid_height_text

0x1f5e,	// (0x0003dd57) mup_volume_cont_pane_ParamLimits

0x1f5e,	// (0x0003dd57) mup_volume_cont_pane

0x07fd,	// (0x0003c5f6) aid_size_cell_pinb

0x07fd,	// (0x0003c5f6) aid_size_list_pinb

0x1f5e,	// (0x0003dd57) mup2_volume_cont_pane_ParamLimits

0x1f5e,	// (0x0003dd57) mup2_volume_cont_pane

0xc339,	// (0x00048132) mup2_volume_cont_pane_g1_ParamLimits

0xc339,	// (0x00048132) mup2_volume_cont_pane_g1

0x36ca,	// (0x0003f4c3) aid_size_cell_touch_ParamLimits

0x36ca,	// (0x0003f4c3) aid_size_cell_touch

0x38f7,	// (0x0003f6f0) touch_pane_ParamLimits

0x38f7,	// (0x0003f6f0) touch_pane

0x07fd,	// (0x0003c5f6) main_rss2_pane

0xc358,	// (0x00048151) listscroll_rss2_pane

0xc361,	// (0x0004815a) rss2_navigation_pane

0xc369,	// (0x00048162) list_rss2_pane

0x1949,	// (0x0003d742) scroll_pane_cp22

0xc371,	// (0x0004816a) rss2_navigation_pane_g1

0xc37a,	// (0x00048173) rss2_navigation_pane_g2

0xc382,	// (0x0004817b) rss2_navigation_pane_g3

0x0002,

0xf60f,	// (0x0004b408) rss2_navigation_pane_g

0xc38a,	// (0x00048183) rss2_navigation_pane_t1

0x7907,	// (0x00043700) rss2_list_single_pane_ParamLimits

0x7907,	// (0x00043700) rss2_list_single_pane

0xc398,	// (0x00048191) rss2_list_single_pane_t2

0xc3a6,	// (0x0004819f) rss2_list_single_pane_t3_ParamLimits

0xc3a6,	// (0x0004819f) rss2_list_single_pane_t3

0xc3c3,	// (0x000481bc) rss2_list_single_pane_t4

0x5398,	// (0x00041191) smil_status_pane_g1

0x0ea5,	// (0x0003cc9e) main_image2_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) main_image2_pane

0xec5b,	// (0x0004aa54) main_camera2_pane_g9_ParamLimits

0xec5b,	// (0x0004aa54) main_camera2_pane_g9

0x77c1,	// (0x000435ba) main_camera2_pane_t5_ParamLimits

0x77c1,	// (0x000435ba) main_camera2_pane_t5

0xc2b7,	// (0x000480b0) main_camera2_pane_t6_ParamLimits

0xc2b7,	// (0x000480b0) main_camera2_pane_t6

0x791c,	// (0x00043715) main_image2_pane_g1_ParamLimits

0x791c,	// (0x00043715) main_image2_pane_g1

0x5d02,	// (0x00041afb) smil2_video_pane_ParamLimits

0x5d02,	// (0x00041afb) smil2_video_pane

0xc031,	// (0x00047e2a) aid_zoom_text_primary_cp

0xc070,	// (0x00047e69) popup_preview_fixed_window

0x121d,	// (0x0003d016) im_reading_pane_g1

0x77b3,	// (0x000435ac) cams2_bc_adjust_pane_cp_ParamLimits

0x77b3,	// (0x000435ac) cams2_bc_adjust_pane_cp

0x1f5e,	// (0x0003dd57) cams2_bc_adjust_pane_ParamLimits

0x1f5e,	// (0x0003dd57) cams2_bc_adjust_pane

0x1158,	// (0x0003cf51) cams2_bc_adjust_pane_g1

0x07fd,	// (0x0003c5f6) cams2_slider_pane

0x1158,	// (0x0003cf51) cams2_slider_pane_g1

0x1158,	// (0x0003cf51) cams2_slider_pane_g2

0x0006,

0xf616,	// (0x0004b40f) cams2_slider_pane_g

0x39bf,	// (0x0003f7b8) calc_display_pane_ParamLimits

0x39e4,	// (0x0003f7dd) calc_paper_pane_ParamLimits

0x3a07,	// (0x0003f800) grid_calc_pane_ParamLimits

0xc196,	// (0x00047f8f) popup_clock_digital_window_t1_ParamLimits

0x1df0,	// (0x0003dbe9) main_image_pane_t1

0x39a1,	// (0x0003f79a) aid_size_cell_calc_ParamLimits

0x39a1,	// (0x0003f79a) aid_size_cell_calc

0x7270,	// (0x00043069) popup_blid_sat_info2_window_ParamLimits

0x7270,	// (0x00043069) popup_blid_sat_info2_window

0xc3d1,	// (0x000481ca) aid_size_cell_blid

0xc2d9,	// (0x000480d2) bg_popup_window_pane_cp07

0xc3ee,	// (0x000481e7) grid_popup_blid_pane

0xc3f8,	// (0x000481f1) heading_pane_cp05_ParamLimits

0xc3f8,	// (0x000481f1) heading_pane_cp05

0xc4c2,	// (0x000482bb) cell_popup_blid_pane_ParamLimits

0xc4c2,	// (0x000482bb) cell_popup_blid_pane

0xc4e6,	// (0x000482df) cell_popup_blid_pane_g1

0xc4ee,	// (0x000482e7) cell_popup_blid_pane_t1

0x1f5e,	// (0x0003dd57) mup2_indicator_pane_ParamLimits

0x1f5e,	// (0x0003dd57) mup2_indicator_pane

0x07fd,	// (0x0003c5f6) mup2_visualizer_osc_pane

0x77f7,	// (0x000435f0) mup2_visualizer_spec_pane_ParamLimits

0x77f7,	// (0x000435f0) mup2_visualizer_spec_pane

0x07fd,	// (0x0003c5f6) mup2_spec_half_pane

0x07fd,	// (0x0003c5f6) mup2_spec_half_pane_cp

0xc4fc,	// (0x000482f5) mup2_spec_bar_pane_ParamLimits

0xc4fc,	// (0x000482f5) mup2_spec_bar_pane

0x1158,	// (0x0003cf51) mup2_spec_bar_pane_g1

0xc51b,	// (0x00048314) mup2_spec_bar_pane_g2

0x0001,

0xf63c,	// (0x0004b435) mup2_spec_bar_pane_g

0x07fd,	// (0x0003c5f6) mup2_osc_middle_pane

0x1158,	// (0x0003cf51) mup2_visualizer_osc_pane_g1

0x0835,	// (0x0003c62e) popup_number_entry_window_t1_ParamLimits

0x0848,	// (0x0003c641) popup_number_entry_window_t2_ParamLimits

0x085a,	// (0x0003c653) popup_number_entry_window_t3_ParamLimits

0x3949,	// (0x0003f742) popup_number_entry_window_t5_ParamLimits

0x3949,	// (0x0003f742) popup_number_entry_window_t5

0xf085,	// (0x0004ae7e) popup_number_entry_window_t_ParamLimits

0x086c,	// (0x0003c665) text_title_cp2_ParamLimits

0xc201,	// (0x00047ffa) aid_hotspot_pointer_text2_pane

0xc227,	// (0x00048020) main_viewer_pane_g9_ParamLimits

0xc227,	// (0x00048020) main_viewer_pane_g9

0x1456,	// (0x0003d24f) cale_month_pane_t1_ParamLimits

0x1493,	// (0x0003d28c) bg_cale_pane_ParamLimits

0x14ab,	// (0x0003d2a4) list_cale_pane_ParamLimits

0x14bc,	// (0x0003d2b5) listscroll_cale_day_pane_t1

0x14ce,	// (0x0003d2c7) scroll_pane_cp09_ParamLimits

0x5761,	// (0x0004155a) main_mup_eq_pane_t1_ParamLimits

0x5761,	// (0x0004155a) main_mup_eq_pane_t1

0x577b,	// (0x00041574) main_mup_eq_pane_t2_ParamLimits

0x577b,	// (0x00041574) main_mup_eq_pane_t2

0x5795,	// (0x0004158e) main_mup_eq_pane_t3_ParamLimits

0x5795,	// (0x0004158e) main_mup_eq_pane_t3

0x57b1,	// (0x000415aa) main_mup_eq_pane_t4_ParamLimits

0x57b1,	// (0x000415aa) main_mup_eq_pane_t4

0x57cd,	// (0x000415c6) main_mup_eq_pane_t5_ParamLimits

0x57cd,	// (0x000415c6) main_mup_eq_pane_t5

0x57e9,	// (0x000415e2) main_mup_eq_pane_t6_ParamLimits

0x57e9,	// (0x000415e2) main_mup_eq_pane_t6

0x57fd,	// (0x000415f6) main_mup_eq_pane_t7_ParamLimits

0x57fd,	// (0x000415f6) main_mup_eq_pane_t7

0x5811,	// (0x0004160a) main_mup_eq_pane_t8_ParamLimits

0x5811,	// (0x0004160a) main_mup_eq_pane_t8

0x5825,	// (0x0004161e) main_mup_eq_pane_t9_ParamLimits

0x5825,	// (0x0004161e) main_mup_eq_pane_t9

0x583f,	// (0x00041638) main_mup_eq_pane_t10_ParamLimits

0x583f,	// (0x00041638) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x0004b1dd) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x0004b1dd) main_mup_eq_pane_t

0x58ee,	// (0x000416e7) mup_equalizer_pane_cp5_ParamLimits

0x5902,	// (0x000416fb) mup_equalizer_pane_cp6_ParamLimits

0x5916,	// (0x0004170f) mup_equalizer_pane_cp7_ParamLimits

0x07fd,	// (0x0003c5f6) main_gallery_pane

0x75c8,	// (0x000433c1) smil2_volume_pane

0x75d0,	// (0x000433c9) smil_status_volume_pane_g1_ParamLimits

0x75e3,	// (0x000433dc) smil_status_volume_pane_g2_ParamLimits

0xc287,	// (0x00048080) smil_status_volume_pane_g3_ParamLimits

0xf595,	// (0x0004b38e) smil_status_volume_pane_g_ParamLimits

0xc2d9,	// (0x000480d2) bg_popup_window_pane_cp07_ParamLimits

0xc3d9,	// (0x000481d2) blid_firmament_pane

0x0ea5,	// (0x0003cc9e) aid_size_cell_gallery_ParamLimits

0x0ea5,	// (0x0003cc9e) aid_size_cell_gallery

0x0ea5,	// (0x0003cc9e) grid_gallery_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) grid_gallery_pane

0xc2d9,	// (0x000480d2) cell_gallery_pane_ParamLimits

0xc2d9,	// (0x000480d2) cell_gallery_pane

0x0ea5,	// (0x0003cc9e) bg_cell_gallery_focus_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_cell_gallery_focus_pane

0x0efe,	// (0x0003ccf7) cell_gallery_pane_g1_ParamLimits

0x0efe,	// (0x0003ccf7) cell_gallery_pane_g1

0x0efe,	// (0x0003ccf7) cell_gallery_pane_g2_ParamLimits

0x0efe,	// (0x0003ccf7) cell_gallery_pane_g2

0x0efe,	// (0x0003ccf7) cell_gallery_pane_g3_ParamLimits

0x0efe,	// (0x0003ccf7) cell_gallery_pane_g3

0x0f0c,	// (0x0003cd05) cell_gallery_pane_g4_ParamLimits

0x0f0c,	// (0x0003cd05) cell_gallery_pane_g4

0x0003,

0xf641,	// (0x0004b43a) cell_gallery_pane_g_ParamLimits

0xf641,	// (0x0004b43a) cell_gallery_pane_g

0xc525,	// (0x0004831e) bg_cell_gallery_focus_pane_g1

0xc52d,	// (0x00048326) bg_cell_gallery_focus_pane_g2

0xc535,	// (0x0004832e) bg_cell_gallery_focus_pane_g3

0xc53d,	// (0x00048336) bg_cell_gallery_focus_pane_g4

0xc545,	// (0x0004833e) bg_cell_gallery_focus_pane_g5

0xc54d,	// (0x00048346) bg_cell_gallery_focus_pane_g6

0xc555,	// (0x0004834e) bg_cell_gallery_focus_pane_g7

0xc55d,	// (0x00048356) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64a,	// (0x0004b443) bg_cell_gallery_focus_pane_g

0xc565,	// (0x0004835e) aid_firma_cardinal

0xc579,	// (0x00048372) blid_firmament_pane_t1

0xc590,	// (0x00048389) blid_firmament_pane_t2

0xc5a7,	// (0x000483a0) blid_firmament_pane_t3

0xc5be,	// (0x000483b7) blid_firmament_pane_t4

0x0003,

0xf65b,	// (0x0004b454) blid_firmament_pane_t

0xc5d5,	// (0x000483ce) blid_sat_info_pane

0x1158,	// (0x0003cf51) blid_sat_info_pane_g1

0x1158,	// (0x0003cf51) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x0004b1d1) blid_sat_info_pane_g

0xc5e5,	// (0x000483de) blid_sat_info_pane_t1

0xc5f3,	// (0x000483ec) smil2_volume_content_pane

0xc5fc,	// (0x000483f5) smil2_volume_pane_g1

0x1f8e,	// (0x0003dd87) smil2_volume_content_pane_g1

0xc604,	// (0x000483fd) smil2_volume_content_pane_g2

0xc60d,	// (0x00048406) smil2_volume_content_pane_g3

0xc616,	// (0x0004840f) smil2_volume_content_pane_g4

0xc61f,	// (0x00048418) smil2_volume_content_pane_g5

0xc628,	// (0x00048421) smil2_volume_content_pane_g6

0xc631,	// (0x0004842a) smil2_volume_content_pane_g7

0xc63a,	// (0x00048433) smil2_volume_content_pane_g8

0xc643,	// (0x0004843c) smil2_volume_content_pane_g9

0xc64c,	// (0x00048445) smil2_volume_content_pane_g10

0x0009,

0xf664,	// (0x0004b45d) smil2_volume_content_pane_g

0x3f7c,	// (0x0003fd75) cale_week_day_heading_pane_t1_ParamLimits

0x3fa6,	// (0x0003fd9f) cale_week_day_heading_pane_t2_ParamLimits

0x3fd5,	// (0x0003fdce) cale_week_day_heading_pane_t3_ParamLimits

0x4004,	// (0x0003fdfd) cale_week_day_heading_pane_t4_ParamLimits

0x4033,	// (0x0003fe2c) cale_week_day_heading_pane_t5_ParamLimits

0x406a,	// (0x0003fe63) cale_week_day_heading_pane_t6_ParamLimits

0x40a1,	// (0x0003fe9a) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x0004af85) cale_week_day_heading_pane_t_ParamLimits

0x10d0,	// (0x0003cec9) bg_cale_side_pane_ParamLimits

0x40cb,	// (0x0003fec4) cale_week_time_pane_t1_ParamLimits

0x40e5,	// (0x0003fede) cale_week_time_pane_t2_ParamLimits

0x40ff,	// (0x0003fef8) cale_week_time_pane_t3_ParamLimits

0x4119,	// (0x0003ff12) cale_week_time_pane_t4_ParamLimits

0x4133,	// (0x0003ff2c) cale_week_time_pane_t5_ParamLimits

0x414d,	// (0x0003ff46) cale_week_time_pane_t6_ParamLimits

0x4167,	// (0x0003ff60) cale_week_time_pane_t7_ParamLimits

0x4181,	// (0x0003ff7a) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0004af94) cale_week_time_pane_t_ParamLimits

0x419b,	// (0x0003ff94) cell_cale_week_pane_g2_ParamLimits

0x10d0,	// (0x0003cec9) bg_cale_side_pane_cp01_ParamLimits

0x519f,	// (0x00040f98) cale_month_week_pane_t1_ParamLimits

0x51b8,	// (0x00040fb1) cale_month_week_pane_t2_ParamLimits

0x51d1,	// (0x00040fca) cale_month_week_pane_t3_ParamLimits

0x51ea,	// (0x00040fe3) cale_month_week_pane_t4_ParamLimits

0x5203,	// (0x00040ffc) cale_month_week_pane_t5_ParamLimits

0x521c,	// (0x00041015) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0004b062) cale_month_week_pane_t_ParamLimits

0xc112,	// (0x00047f0b) cell_cale_month_pane_g1_ParamLimits

0x07fd,	// (0x0003c5f6) main_cale_event_viewer_pane

0x07fd,	// (0x0003c5f6) listscroll_cale_event_viewer_pane

0xc655,	// (0x0004844e) list_cale_ev_pane

0xc65d,	// (0x00048456) scroll_pane_cp023

0xc669,	// (0x00048462) field_cale_ev_pane_ParamLimits

0xc669,	// (0x00048462) field_cale_ev_pane

0xc687,	// (0x00048480) field_cale_ev_content_pane_ParamLimits

0xc687,	// (0x00048480) field_cale_ev_content_pane

0xc693,	// (0x0004848c) field_cale_ev_pane_g1_ParamLimits

0xc693,	// (0x0004848c) field_cale_ev_pane_g1

0xc69f,	// (0x00048498) field_cale_ev_pane_g2_ParamLimits

0xc69f,	// (0x00048498) field_cale_ev_pane_g2

0xc6b7,	// (0x000484b0) field_cale_ev_pane_g3_ParamLimits

0xc6b7,	// (0x000484b0) field_cale_ev_pane_g3

0x0002,

0xf679,	// (0x0004b472) field_cale_ev_pane_g_ParamLimits

0xf679,	// (0x0004b472) field_cale_ev_pane_g

0xc6cf,	// (0x000484c8) field_cale_ev_pane_t1_ParamLimits

0xc6cf,	// (0x000484c8) field_cale_ev_pane_t1

0x1f97,	// (0x0003dd90) field_cale_ev_content_pane_t1_ParamLimits

0x1f97,	// (0x0003dd90) field_cale_ev_content_pane_t1

0x1cd6,	// (0x0003dacf) bg_button_pane_cp01

0x3ca9,	// (0x0003faa2) listscroll_cale_week_pane_ParamLimits

0x107b,	// (0x0003ce74) popup_toolbar_window_cp01

0x10a1,	// (0x0003ce9a) listscroll_cale_week_pane_t1_ParamLimits

0x3ca9,	// (0x0003faa2) listscroll_cale_day_pane_ParamLimits

0x107b,	// (0x0003ce74) popup_toolbar_window_cp02

0x14bc,	// (0x0003d2b5) listscroll_cale_day_pane_t1_ParamLimits

0x3ca9,	// (0x0003faa2) main_cale_month_pane_ParamLimits

0xc272,	// (0x0004806b) popup_toolbar_window_cp03_ParamLimits

0xc272,	// (0x0004806b) popup_toolbar_window_cp03

0x5bca,	// (0x000419c3) main_image_pane_g2_ParamLimits

0x5bca,	// (0x000419c3) main_image_pane_g2

0x5bdb,	// (0x000419d4) main_image_pane_g3_ParamLimits

0x5bdb,	// (0x000419d4) main_image_pane_g3

0x0002,

0xf471,	// (0x0004b26a) main_image_pane_g_ParamLimits

0xf471,	// (0x0004b26a) main_image_pane_g

0x1df0,	// (0x0003dbe9) main_image_pane_t1_ParamLimits

0x5bec,	// (0x000419e5) main_image_pane_t2_ParamLimits

0x5bec,	// (0x000419e5) main_image_pane_t2

0x5bfe,	// (0x000419f7) main_image_pane_t3_ParamLimits

0x5bfe,	// (0x000419f7) main_image_pane_t3

0x5c26,	// (0x00041a1f) main_image_pane_t4_ParamLimits

0x5c26,	// (0x00041a1f) main_image_pane_t4

0x0003,

0xf478,	// (0x0004b271) main_image_pane_t_ParamLimits

0xf478,	// (0x0004b271) main_image_pane_t

0x5c46,	// (0x00041a3f) popup_image_details_window_cp01

0x5c50,	// (0x00041a49) popup_toobar_trans_pane_cp01_ParamLimits

0x5c50,	// (0x00041a49) popup_toobar_trans_pane_cp01

0x734f,	// (0x00043148) popup_image_details_window_ParamLimits

0x734f,	// (0x00043148) popup_image_details_window

0xc245,	// (0x0004803e) popup_image_focus_window

0xc2a9,	// (0x000480a2) camera2_autofocus_pane_ParamLimits

0xc2a9,	// (0x000480a2) camera2_autofocus_pane

0x07fd,	// (0x0003c5f6) bg_popup_sub_pane_cp06

0xc6e6,	// (0x000484df) popup_image_focus_window_g1

0xc6ee,	// (0x000484e7) popup_image_focus_window_g2

0xc6f6,	// (0x000484ef) popup_image_focus_window_g3

0xc6fe,	// (0x000484f7) popup_image_focus_window_g4

0x0003,

0xf680,	// (0x0004b479) popup_image_focus_window_g

0xc706,	// (0x000484ff) popup_image_focus_window_t1

0xc714,	// (0x0004850d) popup_image_focus_window_t2

0xc724,	// (0x0004851d) popup_image_focus_window_t3

0x0002,

0xf689,	// (0x0004b482) popup_image_focus_window_t

0x0efe,	// (0x0003ccf7) camera2_autofocus_pane_g1

0x0ea5,	// (0x0003cc9e) bg_tb_trans_pane_cp01

0xc732,	// (0x0004852b) popup_image_details_window_g1

0xc745,	// (0x0004853e) popup_image_details_window_g2

0x0002,

0xf69b,	// (0x0004b494) popup_image_details_window_g

0xc76e,	// (0x00048567) popup_image_details_window_t1

0xc780,	// (0x00048579) popup_image_details_window_t2

0xc799,	// (0x00048592) popup_image_details_window_t3

0xc7ad,	// (0x000485a6) popup_image_details_window_t4

0xc7c8,	// (0x000485c1) popup_image_details_window_t5

0x0004,

0xf6a2,	// (0x0004b49b) popup_image_details_window_t

0x0f5c,	// (0x0003cd55) bg_calc_paper_pane_ParamLimits

0x07fd,	// (0x0003c5f6) grid_highlight_pane_cp013

0xc082,	// (0x00047e7b) list_calc_pane_ParamLimits

0xc094,	// (0x00047e8d) scroll_pane_cp024

0x0f70,	// (0x0003cd69) bg_calc_display_pane_ParamLimits

0x3b05,	// (0x0003f8fe) calc_display_pane_t1_ParamLimits

0x3b1a,	// (0x0003f913) calc_display_pane_t2_ParamLimits

0xc09c,	// (0x00047e95) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0004af05) calc_display_pane_t_ParamLimits

0x3bda,	// (0x0003f9d3) cell_calc_pane_g2

0x0001,

0xf129,	// (0x0004af22) cell_calc_pane_g

0x3be3,	// (0x0003f9dc) cell_calc_pane_t1

0x0fc5,	// (0x0003cdbe) grid_highlight_pane_cp02_ParamLimits

0x0fdb,	// (0x0003cdd4) toolbar_button_pane_cp01_ParamLimits

0x0fdb,	// (0x0003cdd4) toolbar_button_pane_cp01

0x1e35,	// (0x0003dc2e) temp_image_control_pane_ParamLimits

0x1e35,	// (0x0003dc2e) temp_image_control_pane

0x0ea5,	// (0x0003cc9e) main_mp3_pane

0xc7e2,	// (0x000485db) temp_image_control_pane_g1_ParamLimits

0xc7e2,	// (0x000485db) temp_image_control_pane_g1

0xc7f0,	// (0x000485e9) temp_image_control_pane_g2_ParamLimits

0xc7f0,	// (0x000485e9) temp_image_control_pane_g2

0xc802,	// (0x000485fb) temp_image_control_pane_g3_ParamLimits

0xc802,	// (0x000485fb) temp_image_control_pane_g3

0x7932,	// (0x0004372b) temp_image_control_pane_g4_ParamLimits

0x7932,	// (0x0004372b) temp_image_control_pane_g4

0x0003,

0xf6ad,	// (0x0004b4a6) temp_image_control_pane_g_ParamLimits

0xf6ad,	// (0x0004b4a6) temp_image_control_pane_g

0xc7e2,	// (0x000485db) main_mp3_pane_g1

0x7945,	// (0x0004373e) main_mp3_pane_g2

0x0007,

0xf6b6,	// (0x0004b4af) main_mp3_pane_g

0xc837,	// (0x00048630) main_mp3_pane_t1

0x0f0c,	// (0x0003cd05) main_camera_pane_g8_ParamLimits

0x0f0c,	// (0x0003cd05) main_camera_pane_g8

0x4365,	// (0x0004015e) main_video_pane_g7_ParamLimits

0x4365,	// (0x0004015e) main_video_pane_g7

0x112a,	// (0x0003cf23) main_camera2_pane_t7_ParamLimits

0x112a,	// (0x0003cf23) main_camera2_pane_t7

0x1274,	// (0x0003d06d) scroll_pane_cp025_ParamLimits

0x1274,	// (0x0003d06d) scroll_pane_cp025

0x1288,	// (0x0003d081) scroll_pane_cp026_ParamLimits

0x1288,	// (0x0003d081) scroll_pane_cp026

0x1297,	// (0x0003d090) wml_content_pane_ParamLimits

0x07fd,	// (0x0003c5f6) main_touch_calib_pane

0x7a19,	// (0x00043812) main_touch_calib_pane_g1

0x7a2b,	// (0x00043824) main_touch_calib_pane_g2

0x7a3d,	// (0x00043836) main_touch_calib_pane_g3

0x7a4f,	// (0x00043848) main_touch_calib_pane_g4

0x0003,

0xf6d4,	// (0x0004b4cd) main_touch_calib_pane_g

0x7a61,	// (0x0004385a) main_touch_calib_pane_t1

0x7a7b,	// (0x00043874) main_touch_calib_pane_t2

0x0004,

0xf6dd,	// (0x0004b4d6) main_touch_calib_pane_t

0x1a25,	// (0x0003d81e) mup_progress_pane_cp02

0x1a5a,	// (0x0003d853) navi_pane_g1

0x1b15,	// (0x0003d90e) navi_pane_mp_t3

0x0ea5,	// (0x0003cc9e) main_mp3_pane_ParamLimits

0x74e7,	// (0x000432e0) navi_pane_ParamLimits

0xc7e2,	// (0x000485db) main_mp3_pane_g1_ParamLimits

0x7945,	// (0x0004373e) main_mp3_pane_g2_ParamLimits

0x7953,	// (0x0004374c) main_mp3_pane_g3_ParamLimits

0x7953,	// (0x0004374c) main_mp3_pane_g3

0x7961,	// (0x0004375a) main_mp3_pane_g4_ParamLimits

0x7961,	// (0x0004375a) main_mp3_pane_g4

0x0efe,	// (0x0003ccf7) main_mp3_pane_g5_ParamLimits

0x0efe,	// (0x0003ccf7) main_mp3_pane_g5

0xc812,	// (0x0004860b) main_mp3_pane_g6_ParamLimits

0xc812,	// (0x0004860b) main_mp3_pane_g6

0xc81f,	// (0x00048618) main_mp3_pane_g7_ParamLimits

0xc81f,	// (0x00048618) main_mp3_pane_g7

0xc82b,	// (0x00048624) main_mp3_pane_g8_ParamLimits

0xc82b,	// (0x00048624) main_mp3_pane_g8

0xf6b6,	// (0x0004b4af) main_mp3_pane_g_ParamLimits

0x796d,	// (0x00043766) main_mp3_pane_t2

0x797b,	// (0x00043774) main_mp3_pane_t3

0xc845,	// (0x0004863e) main_mp3_pane_t4

0xc853,	// (0x0004864c) main_mp3_pane_t5

0x0005,

0xf6c7,	// (0x0004b4c0) main_mp3_pane_t

0xc861,	// (0x0004865a) mup_progress_pane_cp01

0xc031,	// (0x00047e2a) aid_zoom_text_secondary2

0xc655,	// (0x0004844e) list_cale_ev2_pane

0xc65d,	// (0x00048456) scroll_pane_cp023_ParamLimits

0x7ad1,	// (0x000438ca) field_cale_ev2_pane_ParamLimits

0x7ad1,	// (0x000438ca) field_cale_ev2_pane

0xc869,	// (0x00048662) field_cale_ev2_pane_g1_ParamLimits

0xc869,	// (0x00048662) field_cale_ev2_pane_g1

0xc875,	// (0x0004866e) field_cale_ev2_pane_g2_ParamLimits

0xc875,	// (0x0004866e) field_cale_ev2_pane_g2

0xc88d,	// (0x00048686) field_cale_ev2_pane_g3_ParamLimits

0xc88d,	// (0x00048686) field_cale_ev2_pane_g3

0x0003,

0xf6e8,	// (0x0004b4e1) field_cale_ev2_pane_g_ParamLimits

0xf6e8,	// (0x0004b4e1) field_cale_ev2_pane_g

0x2eae,	// (0x0003eca7) field_cale_ev2_pane_t1_ParamLimits

0x2eae,	// (0x0003eca7) field_cale_ev2_pane_t1

0x2ec5,	// (0x0003ecbe) field_cale_ev2_pane_t2_ParamLimits

0x2ec5,	// (0x0003ecbe) field_cale_ev2_pane_t2

0x0001,

0xf6f1,	// (0x0004b4ea) field_cale_ev2_pane_t_ParamLimits

0xf6f1,	// (0x0004b4ea) field_cale_ev2_pane_t

0x5a7f,	// (0x00041878) main_postcard_pane_g5_ParamLimits

0x5a7f,	// (0x00041878) main_postcard_pane_g5

0x5a95,	// (0x0004188e) main_postcard_pane_g6_ParamLimits

0x5a95,	// (0x0004188e) main_postcard_pane_g6

0x0ea5,	// (0x0003cc9e) camera2_autofocus_pane_cp_ParamLimits

0x0ea5,	// (0x0003cc9e) camera2_autofocus_pane_cp

0x0ea5,	// (0x0003cc9e) main_mup3_pane

0x7b35,	// (0x0004392e) main_mup3_pane_g1_ParamLimits

0x7b35,	// (0x0004392e) main_mup3_pane_g1

0x7b57,	// (0x00043950) main_mup3_pane_g2_ParamLimits

0x7b57,	// (0x00043950) main_mup3_pane_g2

0x7bd5,	// (0x000439ce) main_mup3_pane_g3_ParamLimits

0x7bd5,	// (0x000439ce) main_mup3_pane_g3

0x7c1b,	// (0x00043a14) main_mup3_pane_g4_ParamLimits

0x7c1b,	// (0x00043a14) main_mup3_pane_g4

0x7c61,	// (0x00043a5a) main_mup3_pane_g5_ParamLimits

0x7c61,	// (0x00043a5a) main_mup3_pane_g5

0x7ca7,	// (0x00043aa0) main_mup3_pane_g6_ParamLimits

0x7ca7,	// (0x00043aa0) main_mup3_pane_g6

0x0f0c,	// (0x0003cd05) main_mup3_pane_g7_ParamLimits

0x0f0c,	// (0x0003cd05) main_mup3_pane_g7

0x0007,

0xf701,	// (0x0004b4fa) main_mup3_pane_g_ParamLimits

0xf701,	// (0x0004b4fa) main_mup3_pane_g

0x7d25,	// (0x00043b1e) main_mup3_pane_t1_ParamLimits

0x7d25,	// (0x00043b1e) main_mup3_pane_t1

0x7d99,	// (0x00043b92) main_mup3_pane_t2_ParamLimits

0x7d99,	// (0x00043b92) main_mup3_pane_t2

0x7e6d,	// (0x00043c66) main_mup3_pane_t4_ParamLimits

0x7e6d,	// (0x00043c66) main_mup3_pane_t4

0x7ec3,	// (0x00043cbc) main_mup3_pane_t5_ParamLimits

0x7ec3,	// (0x00043cbc) main_mup3_pane_t5

0x7f7f,	// (0x00043d78) main_mup3_pane_t6_ParamLimits

0x7f7f,	// (0x00043d78) main_mup3_pane_t6

0x0005,

0xf712,	// (0x0004b50b) main_mup3_pane_t_ParamLimits

0xf712,	// (0x0004b50b) main_mup3_pane_t

0x8037,	// (0x00043e30) mup3_progress_pane_ParamLimits

0x8037,	// (0x00043e30) mup3_progress_pane

0x80cd,	// (0x00043ec6) popup_mup3_control_window_ParamLimits

0x80cd,	// (0x00043ec6) popup_mup3_control_window

0xc8b1,	// (0x000486aa) popup_mup3_text_window

0x80ff,	// (0x00043ef8) mup3_progress_pane_t1

0x811e,	// (0x00043f17) mup3_progress_pane_t2

0xc8b9,	// (0x000486b2) mup3_progress_pane_t3

0x0002,

0xf71f,	// (0x0004b518) mup3_progress_pane_t

0xc8d6,	// (0x000486cf) mup_progress_pane_cp03

0x07fd,	// (0x0003c5f6) bg_tb_trans_pane_cp04

0x813d,	// (0x00043f36) mup3_volume_pane

0x8145,	// (0x00043f3e) popup_mup3_control_window_g1

0x814e,	// (0x00043f47) mup3_volume_pane_g1

0x8157,	// (0x00043f50) mup3_volume_pane_g2

0x8160,	// (0x00043f59) mup3_volume_pane_g3

0x0002,

0xf726,	// (0x0004b51f) mup3_volume_pane_g

0x07fd,	// (0x0003c5f6) bg_tb_trans_pane_cp03

0xc8e6,	// (0x000486df) popup_mup3_text_window_g1

0xc8ee,	// (0x000486e7) popup_mup3_text_window_t1

0x0fb8,	// (0x0003cdb1) list_calc_item_pane_g1_ParamLimits

0xc34f,	// (0x00048148) mup_volume_pane_cp_g1

0x7a95,	// (0x0004388e) main_touch_calib_pane_t3

0x7aa9,	// (0x000438a2) main_touch_calib_pane_t4

0x7abd,	// (0x000438b6) main_touch_calib_pane_t5

0xc00d,	// (0x00047e06) aid_cell_size_toolbar2

0xc015,	// (0x00047e0e) aid_popup3_width_pane

0xc021,	// (0x00047e1a) aid_zoom_text_msg_primary

0x4240,	// (0x00040039) vorec_t7

0x0f7c,	// (0x0003cd75) bg_calc_paper_pane_g1_ParamLimits

0x0f88,	// (0x0003cd81) bg_calc_paper_pane_g2_ParamLimits

0x0f94,	// (0x0003cd8d) bg_calc_paper_pane_g3_ParamLimits

0x0fa0,	// (0x0003cd99) bg_calc_paper_pane_g4_ParamLimits

0x0fac,	// (0x0003cda5) bg_calc_paper_pane_g5_ParamLimits

0x3b64,	// (0x0003f95d) bg_calc_paper_pane_g6_ParamLimits

0x3b73,	// (0x0003f96c) bg_calc_paper_pane_g7_ParamLimits

0x3b82,	// (0x0003f97b) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x0004af0c) bg_calc_paper_pane_g_ParamLimits

0x3b95,	// (0x0003f98e) calc_bg_paper_pane_g9_ParamLimits

0x0ea5,	// (0x0003cc9e) image_qvga_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) image_qvga_pane

0x0e83,	// (0x0003cc7c) bg_popup_sub_pane_cp04_ParamLimits

0x1d6c,	// (0x0003db65) popup_mup_playback_window_g1_ParamLimits

0x1d78,	// (0x0003db71) popup_mup_playback_window_t1_ParamLimits

0x1d8d,	// (0x0003db86) popup_mup_playback_window_t2_ParamLimits

0xf46c,	// (0x0004b265) popup_mup_playback_window_t_ParamLimits

0x0f0c,	// (0x0003cd05) main_mup2_pane_g3_ParamLimits

0x0f0c,	// (0x0003cd05) main_mup2_pane_g3

0x456d,	// (0x00040366) popup_toolbar_window_cp04

0x61bd,	// (0x00041fb6) popup_call2_audio_second_window_g3_ParamLimits

0x61bd,	// (0x00041fb6) popup_call2_audio_second_window_g3

0x65e5,	// (0x000423de) popup_call2_audio_first_window_g4_ParamLimits

0x65e5,	// (0x000423de) popup_call2_audio_first_window_g4

0x6c64,	// (0x00042a5d) popup_call2_audio_in_window_g4_ParamLimits

0x6c64,	// (0x00042a5d) popup_call2_audio_in_window_g4

0x5bac,	// (0x000419a5) aid_area_sk_bg_cut_ParamLimits

0x5bac,	// (0x000419a5) aid_area_sk_bg_cut

0x1da2,	// (0x0003db9b) aid_area_sk_bg_cut_2_ParamLimits

0x1da2,	// (0x0003db9b) aid_area_sk_bg_cut_2

0x07fd,	// (0x0003c5f6) aid_placing_details_win

0x07fd,	// (0x0003c5f6) aid_placing_details_win_2

0x0efe,	// (0x0003ccf7) camera2_autofocus_pane_g1_ParamLimits

0x3890,	// (0x0003f689) popup_fixed_preview_cale_window_ParamLimits

0x3890,	// (0x0003f689) popup_fixed_preview_cale_window

0x1b93,	// (0x0003d98c) navi_slider_pane_g3

0x1b9c,	// (0x0003d995) navi_slider_pane_g4

0x1ba5,	// (0x0003d99e) navi_slider_pane_g5

0x1b93,	// (0x0003d98c) navi_slider_pane_g6

0xc1bc,	// (0x00047fb5) navi_slider_pane_g7

0x1ca3,	// (0x0003da9c) mup_scale_pane_g3

0x1cac,	// (0x0003daa5) mup_scale_pane_g4

0x1cb5,	// (0x0003daae) mup_scale_pane_g5

0x592a,	// (0x00041723) mup_scale_pane_g6

0x5933,	// (0x0004172c) mup_scale_pane_g7

0x1158,	// (0x0003cf51) cams2_slider_pane_g3

0x1158,	// (0x0003cf51) cams2_slider_pane_g4

0x1158,	// (0x0003cf51) cams2_slider_pane_g5

0x1158,	// (0x0003cf51) cams2_slider_pane_g6

0x1158,	// (0x0003cf51) cams2_slider_pane_g7

0x1158,	// (0x0003cf51) camera2_autofocus_pane_cp_g1

0x7230,	// (0x00043029) bg_popup_preview_window_pane_cp02_ParamLimits

0x7230,	// (0x00043029) bg_popup_preview_window_pane_cp02

0xc8fc,	// (0x000486f5) list_fp_cale_pane_ParamLimits

0xc8fc,	// (0x000486f5) list_fp_cale_pane

0xc908,	// (0x00048701) popup_fixed_preview_cale_window_t1_ParamLimits

0xc908,	// (0x00048701) popup_fixed_preview_cale_window_t1

0x8169,	// (0x00043f62) popup_fixed_preview_cale_window_t2_ParamLimits

0x8169,	// (0x00043f62) popup_fixed_preview_cale_window_t2

0x817e,	// (0x00043f77) popup_fixed_preview_cale_window_t3_ParamLimits

0x817e,	// (0x00043f77) popup_fixed_preview_cale_window_t3

0x0002,

0xf72d,	// (0x0004b526) popup_fixed_preview_cale_window_t_ParamLimits

0xf72d,	// (0x0004b526) popup_fixed_preview_cale_window_t

0x8193,	// (0x00043f8c) list_single_fp_cale_pane_ParamLimits

0x8193,	// (0x00043f8c) list_single_fp_cale_pane

0xc926,	// (0x0004871f) list_single_fp_cale_pane_g1_ParamLimits

0xc926,	// (0x0004871f) list_single_fp_cale_pane_g1

0xc932,	// (0x0004872b) list_single_fp_cale_pane_g2_ParamLimits

0xc932,	// (0x0004872b) list_single_fp_cale_pane_g2

0x0002,

0xf734,	// (0x0004b52d) list_single_fp_cale_pane_g_ParamLimits

0xf734,	// (0x0004b52d) list_single_fp_cale_pane_g

0xc94b,	// (0x00048744) list_single_fp_cale_pane_t1_ParamLimits

0xc94b,	// (0x00048744) list_single_fp_cale_pane_t1

0xc95d,	// (0x00048756) list_single_fp_cale_pane_t2_ParamLimits

0xc95d,	// (0x00048756) list_single_fp_cale_pane_t2

0x0001,

0xf73b,	// (0x0004b534) list_single_fp_cale_pane_t_ParamLimits

0xf73b,	// (0x0004b534) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x07fd,	// (0x0003c5f6) main_dialer_pane

0x07fd,	// (0x0003c5f6) aid_cell_size_keypad

0x07fd,	// (0x0003c5f6) dialer_ne_pane

0x07fd,	// (0x0003c5f6) grid_dialer_command_1_pane

0x07fd,	// (0x0003c5f6) grid_dialer_command_2_pane

0x07fd,	// (0x0003c5f6) grid_dialer_keypad_pane

0x81a8,	// (0x00043fa1) bg_popup_call_pane_cp06_ParamLimits

0x81a8,	// (0x00043fa1) bg_popup_call_pane_cp06

0x81a8,	// (0x00043fa1) dialer_ne_clear_pane_ParamLimits

0x81a8,	// (0x00043fa1) dialer_ne_clear_pane

0x1158,	// (0x0003cf51) dialer_ne_pane_g1

0x112a,	// (0x0003cf23) dialer_ne_pane_t1_ParamLimits

0x112a,	// (0x0003cf23) dialer_ne_pane_t1

0x81b6,	// (0x00043faf) dialer_ne_pane_t2_ParamLimits

0x81b6,	// (0x00043faf) dialer_ne_pane_t2

0x81de,	// (0x00043fd7) dialer_ne_pane_t3_ParamLimits

0x81de,	// (0x00043fd7) dialer_ne_pane_t3

0x0002,

0xf740,	// (0x0004b539) dialer_ne_pane_t_ParamLimits

0xf740,	// (0x0004b539) dialer_ne_pane_t

0x81de,	// (0x00043fd7) dialer_ne_pane_t3_copy1_ParamLimits

0x81de,	// (0x00043fd7) dialer_ne_pane_t3_copy1

0xc990,	// (0x00048789) cell_dialer_keypad_pane_ParamLimits

0xc990,	// (0x00048789) cell_dialer_keypad_pane

0x0ea5,	// (0x0003cc9e) cell_dialer_command_1_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) cell_dialer_command_1_pane

0xc9a7,	// (0x000487a0) cell_dialer_command_2_pane_ParamLimits

0xc9a7,	// (0x000487a0) cell_dialer_command_2_pane

0x0ea5,	// (0x0003cc9e) bg_button_pane_cp02_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_button_pane_cp02

0x0efe,	// (0x0003ccf7) cell_dialer_keypad_pane_g1_ParamLimits

0x0efe,	// (0x0003ccf7) cell_dialer_keypad_pane_g1

0x0ea5,	// (0x0003cc9e) bg_button_pane_cp03_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_button_pane_cp03

0x0efe,	// (0x0003ccf7) cell_dialer_command_1_pane_g1_ParamLimits

0x0efe,	// (0x0003ccf7) cell_dialer_command_1_pane_g1

0x07fd,	// (0x0003c5f6) bg_button_pane_cp04

0x1158,	// (0x0003cf51) cell_dialer_command_2_pane_g1

0x07fd,	// (0x0003c5f6) bg_button_pane_cp06

0x1158,	// (0x0003cf51) dialer_ne_clear_pane_g1

0x1a66,	// (0x0003d85f) navi_pane_g2

0x1a94,	// (0x0003d88d) navi_pane_g3

0x0002,

0xf374,	// (0x0004b16d) navi_pane_g

0x1b23,	// (0x0003d91c) navi_pane_mv_g2

0x1b4a,	// (0x0003d943) navi_pane_mv_g5

0x570d,	// (0x00041506) navi_pane_mv_t1

0x0f70,	// (0x0003cd69) main_clock2_pane

0x0ea5,	// (0x0003cc9e) main_clock2_list_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) main_clock2_list_pane

0x8274,	// (0x0004406d) main_clock2_pane_t1_ParamLimits

0x8274,	// (0x0004406d) main_clock2_pane_t1

0x82af,	// (0x000440a8) main_clock2_pane_t2_ParamLimits

0x82af,	// (0x000440a8) main_clock2_pane_t2

0x0004,

0xf74c,	// (0x0004b545) main_clock2_pane_t_ParamLimits

0xf74c,	// (0x0004b545) main_clock2_pane_t

0x834f,	// (0x00044148) popup_clock_analogue_window_cp03_ParamLimits

0x834f,	// (0x00044148) popup_clock_analogue_window_cp03

0x8374,	// (0x0004416d) popup_clock_digital_window_cp02_ParamLimits

0x8374,	// (0x0004416d) popup_clock_digital_window_cp02

0x83ed,	// (0x000441e6) main_clock2_list_single_pane_ParamLimits

0x83ed,	// (0x000441e6) main_clock2_list_single_pane

0x1122,	// (0x0003cf1b) list_highlight_pane_cp05

0xc9ee,	// (0x000487e7) main_clock2_list_single_pane_t1

0x456d,	// (0x00040366) popup_toolbar_window_cp04_ParamLimits

0x0f0c,	// (0x0003cd05) camera2_autofocus_pane_g2_ParamLimits

0x0f0c,	// (0x0003cd05) camera2_autofocus_pane_g2

0x0f0c,	// (0x0003cd05) camera2_autofocus_pane_g3_ParamLimits

0x0f0c,	// (0x0003cd05) camera2_autofocus_pane_g3

0x0f0c,	// (0x0003cd05) camera2_autofocus_pane_g4_ParamLimits

0x0f0c,	// (0x0003cd05) camera2_autofocus_pane_g4

0x0f0c,	// (0x0003cd05) camera2_autofocus_pane_g5_ParamLimits

0x0f0c,	// (0x0003cd05) camera2_autofocus_pane_g5

0x0004,

0xf690,	// (0x0004b489) camera2_autofocus_pane_g_ParamLimits

0xf690,	// (0x0004b489) camera2_autofocus_pane_g

0x7af1,	// (0x000438ea) camera2_autofocus_pane_cp_g2

0x7af9,	// (0x000438f2) camera2_autofocus_pane_cp_g3

0x7b01,	// (0x000438fa) camera2_autofocus_pane_cp_g4

0x7b09,	// (0x00043902) camera2_autofocus_pane_cp_g5

0x0004,

0xf6f6,	// (0x0004b4ef) camera2_autofocus_pane_cp_g

0x07fd,	// (0x0003c5f6) popup_dialer_spcha_window

0x07fd,	// (0x0003c5f6) bg_popup_sub_pane_cp07

0x07fd,	// (0x0003c5f6) list_spcha_pane

0xc9fc,	// (0x000487f5) list_single_spcha_pane_ParamLimits

0xc9fc,	// (0x000487f5) list_single_spcha_pane

0x07fd,	// (0x0003c5f6) list_highlight_pane_cp06

0x169b,	// (0x0003d494) list_single_spcha_pane_t1

0x6a0e,	// (0x00042807) popup_call2_audio_out_window_g4_ParamLimits

0x6a0e,	// (0x00042807) popup_call2_audio_out_window_g4

0x07fd,	// (0x0003c5f6) main_imed2_pane

0xc24d,	// (0x00048046) popup_imed_adjust2_window

0x7367,	// (0x00043160) popup_imed_trans_window_ParamLimits

0x7367,	// (0x00043160) popup_imed_trans_window

0xc424,	// (0x0004821d) popup_blid_sat_info2_window_t1

0xc432,	// (0x0004822b) popup_blid_sat_info2_window_t2

0x000a,

0xf625,	// (0x0004b41e) popup_blid_sat_info2_window_t

0x849e,	// (0x00044297) aid_size_cell_colour_35

0x84be,	// (0x000442b7) aid_size_cell_colour_112

0x84de,	// (0x000442d7) aid_size_cell_effect

0x1f5e,	// (0x0003dd57) bg_tb_trans_pane_cp02

0x15cd,	// (0x0003d3c6) heading_imed_pane

0x84fe,	// (0x000442f7) listscroll_imed_pane

0xca0e,	// (0x00048807) heading_imed_pane_g1

0xca16,	// (0x0004880f) heading_imed_pane_t1

0xca24,	// (0x0004881d) grid_imed_colour_35_pane_ParamLimits

0xca24,	// (0x0004881d) grid_imed_colour_35_pane

0x850a,	// (0x00044303) grid_imed_effect_pane

0xca3b,	// (0x00048834) list_imed_aspect_pane

0x8520,	// (0x00044319) scroll_pane_cp027_ParamLimits

0x8520,	// (0x00044319) scroll_pane_cp027

0x8531,	// (0x0004432a) cell_imed_effect_pane_ParamLimits

0x8531,	// (0x0004432a) cell_imed_effect_pane

0xca43,	// (0x0004883c) cell_imed_colour_pane_ParamLimits

0xca43,	// (0x0004883c) cell_imed_colour_pane

0xca85,	// (0x0004887e) cell_imed_colour_pane_g1_ParamLimits

0xca85,	// (0x0004887e) cell_imed_colour_pane_g1

0xca96,	// (0x0004888f) hgihlgiht_grid_pane_cp016_ParamLimits

0xca96,	// (0x0004888f) hgihlgiht_grid_pane_cp016

0x8558,	// (0x00044351) cell_imed_effect_pane_g1

0x8560,	// (0x00044359) grid_highlight_pane_cp017

0xcaa7,	// (0x000488a0) list_imed_single_pane_ParamLimits

0xcaa7,	// (0x000488a0) list_imed_single_pane

0x07fd,	// (0x0003c5f6) list_highlight_pane_cp07

0xcabc,	// (0x000488b5) list_imed_aspect_pane_comp1_t1

0x1f5e,	// (0x0003dd57) bg_tb_trans_pane_cp05

0xcade,	// (0x000488d7) popup_imed_adjust2_window_g1

0xcb05,	// (0x000488fe) popup_imed_adjust2_window_t1

0xcb1d,	// (0x00048916) slider_imed_adjust_pane

0xcb31,	// (0x0004892a) slider_imed_adjust_pane_g1

0xcb41,	// (0x0004893a) slider_imed_adjust_pane_g2

0xcb51,	// (0x0004894a) slider_imed_adjust_pane_g3

0xcb62,	// (0x0004895b) slider_imed_adjust_pane_g4

0x0003,

0xf769,	// (0x0004b562) slider_imed_adjust_pane_g

0x8569,	// (0x00044362) aid_size_cell_clipart2

0x8575,	// (0x0004436e) grid_imed_clipart_pane

0xcb73,	// (0x0004896c) scroll_pane_cp031

0x857f,	// (0x00044378) cell_imed_clipart_pane_ParamLimits

0x857f,	// (0x00044378) cell_imed_clipart_pane

0x85a1,	// (0x0004439a) cell_imed_clipart_pane_g1

0x07fd,	// (0x0003c5f6) grid_highlight_pane_cp014

0x8250,	// (0x00044049) main_clock2_pane_g1_ParamLimits

0x8250,	// (0x00044049) main_clock2_pane_g1

0x8394,	// (0x0004418d) aid_call2_pane_cp10

0x83a6,	// (0x0004419f) aid_call_pane_cp10

0x19c7,	// (0x0003d7c0) popup_clock_analogue_window_cp10_g1

0x19c7,	// (0x0003d7c0) popup_clock_analogue_window_cp10_g2

0x83b8,	// (0x000441b1) popup_clock_analogue_window_cp10_g3

0x83b8,	// (0x000441b1) popup_clock_analogue_window_cp10_g4

0x19c7,	// (0x0003d7c0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf757,	// (0x0004b550) popup_clock_analogue_window_cp10_g

0x83ce,	// (0x000441c7) popup_clock_analogue_window_cp10_t1

0x83ff,	// (0x000441f8) clock_digital_number_pane_cp10_ParamLimits

0x83ff,	// (0x000441f8) clock_digital_number_pane_cp10

0x8417,	// (0x00044210) clock_digital_number_pane_cp11_ParamLimits

0x8417,	// (0x00044210) clock_digital_number_pane_cp11

0x842f,	// (0x00044228) clock_digital_number_pane_cp12_ParamLimits

0x842f,	// (0x00044228) clock_digital_number_pane_cp12

0x8449,	// (0x00044242) clock_digital_number_pane_cp13_ParamLimits

0x8449,	// (0x00044242) clock_digital_number_pane_cp13

0x8463,	// (0x0004425c) clock_digital_separator_pane_cp10_ParamLimits

0x8463,	// (0x0004425c) clock_digital_separator_pane_cp10

0x847d,	// (0x00044276) popup_clock_digital_window_cp02_t1_ParamLimits

0x847d,	// (0x00044276) popup_clock_digital_window_cp02_t1

0x0e7b,	// (0x0003cc74) clock_digital_number_pane_cp10_g1

0x0e7b,	// (0x0003cc74) clock_digital_number_pane_cp10_g2

0x0001,

0xf772,	// (0x0004b56b) clock_digital_number_pane_cp10_g

0x0e7b,	// (0x0003cc74) clock_digital_separator_pane_cp10_g1

0x0e7b,	// (0x0003cc74) clock_digital_separator_pane_g2_cp10

0x1b52,	// (0x0003d94b) navi_pane_vded_g4

0x1b5b,	// (0x0003d954) navi_pane_vded_g5

0x1b64,	// (0x0003d95d) navi_pane_vded_t1

0x07fd,	// (0x0003c5f6) main_vded_pane

0x85aa,	// (0x000443a3) main_vded_pane_g1

0x85b4,	// (0x000443ad) main_vded_pane_g2

0x85be,	// (0x000443b7) main_vded_pane_g3

0x0002,

0xf777,	// (0x0004b570) main_vded_pane_g

0x85c8,	// (0x000443c1) main_vded_pane_t1

0x85d6,	// (0x000443cf) main_vded_pane_t2

0x0001,

0xf77e,	// (0x0004b577) main_vded_pane_t

0x85e4,	// (0x000443dd) vded_slider_pane

0x85ec,	// (0x000443e5) vded_video_pane

0xcb7b,	// (0x00048974) vded_video_pane_g1

0x85f4,	// (0x000443ed) vded_video_pane_g2

0x1158,	// (0x0003cf51) vded_video_pane_g3

0x0002,

0xf783,	// (0x0004b57c) vded_video_pane_g

0xcb85,	// (0x0004897e) vded_slider_pane_g1

0xc34f,	// (0x00048148) vded_slider_pane_g2

0xcb8e,	// (0x00048987) vded_slider_pane_g3

0xcb97,	// (0x00048990) vded_slider_pane_g4

0xcba0,	// (0x00048999) vded_slider_pane_g5

0x0004,

0xf78a,	// (0x0004b583) vded_slider_pane_g

0x80b5,	// (0x00043eae) mup3_rocker_pane_ParamLimits

0x80b5,	// (0x00043eae) mup3_rocker_pane

0x85fd,	// (0x000443f6) mup3_control_keys_pane_g1

0x8605,	// (0x000443fe) mup3_control_keys_pane_g2

0x860d,	// (0x00044406) mup3_control_keys_pane_g3

0x8615,	// (0x0004440e) mup3_control_keys_pane_g4

0x0003,

0xf795,	// (0x0004b58e) mup3_control_keys_pane_g

0x38c7,	// (0x0003f6c0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x38c7,	// (0x0003f6c0) popup_toolbar2_fixed_window_cp01

0x80e9,	// (0x00043ee2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x80e9,	// (0x00043ee2) popup_toolbar2_fixed_window_cp02

0x632f,	// (0x00042128) popup_call2_audio_second_window_t4_ParamLimits

0x632f,	// (0x00042128) popup_call2_audio_second_window_t4

0x687b,	// (0x00042674) popup_call2_audio_first_window_t6_ParamLimits

0x687b,	// (0x00042674) popup_call2_audio_first_window_t6

0x6b11,	// (0x0004290a) popup_call2_audio_out_window_t6_ParamLimits

0x6b11,	// (0x0004290a) popup_call2_audio_out_window_t6

0x07fd,	// (0x0003c5f6) main_vitu_pane

0x0ea5,	// (0x0003cc9e) aid_size_cell_itu_ParamLimits

0x0ea5,	// (0x0003cc9e) aid_size_cell_itu

0x0ea5,	// (0x0003cc9e) bg_popup_window_pane_cp08_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_popup_window_pane_cp08

0x0ea5,	// (0x0003cc9e) field_vitu_entry_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) field_vitu_entry_pane

0x0ea5,	// (0x0003cc9e) grid_vitu_function_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) grid_vitu_function_pane

0x0ea5,	// (0x0003cc9e) grid_vitu_itu_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) grid_vitu_itu_pane

0x0ea5,	// (0x0003cc9e) cell_vitu_itu_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) cell_vitu_itu_pane

0x0ea5,	// (0x0003cc9e) cell_vitu_function_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) cell_vitu_function_pane

0x0ea5,	// (0x0003cc9e) bg_popup_sub_pane_cp08_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_popup_sub_pane_cp08

0x1172,	// (0x0003cf6b) field_vitu_entry_pane_t1_ParamLimits

0x1172,	// (0x0003cf6b) field_vitu_entry_pane_t1

0xcba9,	// (0x000489a2) field_vitu_entry_pane_t2_ParamLimits

0xcba9,	// (0x000489a2) field_vitu_entry_pane_t2

0x0001,

0xf79e,	// (0x0004b597) field_vitu_entry_pane_t_ParamLimits

0xf79e,	// (0x0004b597) field_vitu_entry_pane_t

0xc2d9,	// (0x000480d2) bg_button_pane_cp05_ParamLimits

0xc2d9,	// (0x000480d2) bg_button_pane_cp05

0xcbc6,	// (0x000489bf) cell_vitu_itu_pane_g1

0x1f7a,	// (0x0003dd73) cell_vitu_itu_pane_t1_ParamLimits

0x1f7a,	// (0x0003dd73) cell_vitu_itu_pane_t1

0x1f7a,	// (0x0003dd73) cell_vitu_itu_pane_t2_ParamLimits

0x1f7a,	// (0x0003dd73) cell_vitu_itu_pane_t2

0x0002,

0xf7a3,	// (0x0004b59c) cell_vitu_itu_pane_t_ParamLimits

0xf7a3,	// (0x0004b59c) cell_vitu_itu_pane_t

0x07fd,	// (0x0003c5f6) bg_button_pane_cp07

0x1158,	// (0x0003cf51) cell_vitu_function_pane_g1

0xc07a,	// (0x00047e73) main_calc_pane_g1

0x36ee,	// (0x0003f4e7) aid_visual_content_pane

0x07fd,	// (0x0003c5f6) main_vradio_pane

0x0efe,	// (0x0003ccf7) main_vradio_pane_g1_ParamLimits

0x0efe,	// (0x0003ccf7) main_vradio_pane_g1

0x0f0c,	// (0x0003cd05) main_vradio_pane_g2_ParamLimits

0x0f0c,	// (0x0003cd05) main_vradio_pane_g2

0x0001,

0xf7aa,	// (0x0004b5a3) main_vradio_pane_g_ParamLimits

0xf7aa,	// (0x0004b5a3) main_vradio_pane_g

0x1172,	// (0x0003cf6b) main_vradio_pane_t1_ParamLimits

0x1172,	// (0x0003cf6b) main_vradio_pane_t1

0x1172,	// (0x0003cf6b) main_vradio_pane_t2_ParamLimits

0x1172,	// (0x0003cf6b) main_vradio_pane_t2

0x112a,	// (0x0003cf23) main_vradio_pane_t3_ParamLimits

0x112a,	// (0x0003cf23) main_vradio_pane_t3

0x0002,

0xf7af,	// (0x0004b5a8) main_vradio_pane_t_ParamLimits

0xf7af,	// (0x0004b5a8) main_vradio_pane_t

0x0ea5,	// (0x0003cc9e) vradio_rocker_control_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) vradio_rocker_control_pane

0x0ea5,	// (0x0003cc9e) vradio_station_info_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) vradio_station_info_pane

0x0ea5,	// (0x0003cc9e) vradio_frequency_info_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) vradio_frequency_info_pane

0x1158,	// (0x0003cf51) vradio_station_info_pane_g1

0x1f7a,	// (0x0003dd73) vradio_station_info_pane_t1_ParamLimits

0x1f7a,	// (0x0003dd73) vradio_station_info_pane_t1

0x112a,	// (0x0003cf23) vradio_station_info_pane_t2_ParamLimits

0x112a,	// (0x0003cf23) vradio_station_info_pane_t2

0x0001,

0xf7b6,	// (0x0004b5af) vradio_station_info_pane_t_ParamLimits

0xf7b6,	// (0x0004b5af) vradio_station_info_pane_t

0x07fd,	// (0x0003c5f6) vradio_tuning_pane

0x8625,	// (0x0004441e) vradio_rocker_control_pane_g1

0xcbe2,	// (0x000489db) vradio_rocker_control_pane_g2

0x862f,	// (0x00044428) vradio_rocker_control_pane_g3

0x8639,	// (0x00044432) vradio_rocker_control_pane_g4

0x8643,	// (0x0004443c) vradio_rocker_control_pane_g5

0x0004,

0xf7bb,	// (0x0004b5b4) vradio_rocker_control_pane_g

0x1158,	// (0x0003cf51) vradio_frequency_info_pane_g1

0x1172,	// (0x0003cf6b) vradio_frequency_info_pane_t1_ParamLimits

0x1172,	// (0x0003cf6b) vradio_frequency_info_pane_t1

0x864d,	// (0x00044446) vradio_tuning_pane_g1

0x865a,	// (0x00044453) vradio_tuning_pane_t1

0xc039,	// (0x00047e32) area_side_right_pane_ParamLimits

0xc039,	// (0x00047e32) area_side_right_pane

0x71d9,	// (0x00042fd2) status_small_pane_g1

0x71e1,	// (0x00042fda) status_small_pane_g2

0x71ea,	// (0x00042fe3) status_small_pane_g3

0x71f3,	// (0x00042fec) status_small_pane_g4

0x0003,

0xf587,	// (0x0004b380) status_small_pane_g

0x71fc,	// (0x00042ff5) status_small_pane_t1

0x07fd,	// (0x0003c5f6) main_video3_pane

0xcbea,	// (0x000489e3) cams_zoom_vslider_pane

0xcbf2,	// (0x000489eb) image3_wide_pane_ParamLimits

0xcbf2,	// (0x000489eb) image3_wide_pane

0xcc0c,	// (0x00048a05) image3_wide_small_pane

0xcc18,	// (0x00048a11) main_video3_pane_g1_ParamLimits

0xcc18,	// (0x00048a11) main_video3_pane_g1

0xcc34,	// (0x00048a2d) main_video3_pane_g2_ParamLimits

0xcc34,	// (0x00048a2d) main_video3_pane_g2

0x0001,

0xf7c6,	// (0x0004b5bf) main_video3_pane_g_ParamLimits

0xf7c6,	// (0x0004b5bf) main_video3_pane_g

0xcc50,	// (0x00048a49) main_video3_pane_t1_ParamLimits

0xcc50,	// (0x00048a49) main_video3_pane_t1

0xcc7b,	// (0x00048a74) main_video3_pane_t2_ParamLimits

0xcc7b,	// (0x00048a74) main_video3_pane_t2

0xcca6,	// (0x00048a9f) main_video3_pane_t3_ParamLimits

0xcca6,	// (0x00048a9f) main_video3_pane_t3

0x0002,

0xf7cb,	// (0x0004b5c4) main_video3_pane_t_ParamLimits

0xf7cb,	// (0x0004b5c4) main_video3_pane_t

0xccd3,	// (0x00048acc) cams_zoom_vslider_pane_g1

0xccdc,	// (0x00048ad5) cams_zoom_vslider_pane_g2

0x0001,

0xf7d2,	// (0x0004b5cb) cams_zoom_vslider_pane_g

0xcce4,	// (0x00048add) small_slider_vertical_pane

0x1158,	// (0x0003cf51) small_slider_vertical_pane_g1

0x1158,	// (0x0003cf51) small_slider_vertical_pane_g2

0xccec,	// (0x00048ae5) small_slider_vertical_pane_g3

0x0002,

0xf7d7,	// (0x0004b5d0) small_slider_vertical_pane_g

0x07fd,	// (0x0003c5f6) main_hwr_training_pane

0xccf5,	// (0x00048aee) hwr_training_instruct_pane_ParamLimits

0xccf5,	// (0x00048aee) hwr_training_instruct_pane

0x8669,	// (0x00044462) hwr_training_navi_pane_ParamLimits

0x8669,	// (0x00044462) hwr_training_navi_pane

0x8688,	// (0x00044481) hwr_training_write_pane_ParamLimits

0x8688,	// (0x00044481) hwr_training_write_pane

0x07fd,	// (0x0003c5f6) bg_frame_shadow_pane

0xcd2c,	// (0x00048b25) hwr_training_write_pane_g1

0xcd34,	// (0x00048b2d) hwr_training_write_pane_g2

0xcd3c,	// (0x00048b35) hwr_training_write_pane_g3

0xcd44,	// (0x00048b3d) hwr_training_write_pane_g4

0xcd4c,	// (0x00048b45) hwr_training_write_pane_g5

0xcd54,	// (0x00048b4d) hwr_training_write_pane_g6

0xcd5c,	// (0x00048b55) hwr_training_write_pane_g7

0x0006,

0xf7de,	// (0x0004b5d7) hwr_training_write_pane_g

0xcd64,	// (0x00048b5d) hwr_training_navi_pane_g1_ParamLimits

0xcd64,	// (0x00048b5d) hwr_training_navi_pane_g1

0xcd76,	// (0x00048b6f) hwr_training_navi_pane_g2_ParamLimits

0xcd76,	// (0x00048b6f) hwr_training_navi_pane_g2

0xcd88,	// (0x00048b81) hwr_training_navi_pane_g3_ParamLimits

0xcd88,	// (0x00048b81) hwr_training_navi_pane_g3

0xcd98,	// (0x00048b91) hwr_training_navi_pane_g4_ParamLimits

0xcd98,	// (0x00048b91) hwr_training_navi_pane_g4

0x0004,

0xf7ed,	// (0x0004b5e6) hwr_training_navi_pane_g_ParamLimits

0xf7ed,	// (0x0004b5e6) hwr_training_navi_pane_g

0xcda5,	// (0x00048b9e) hwr_training_navi_pane_t1

0x86d0,	// (0x000444c9) list_single_hwr_training_instruct_pane_ParamLimits

0x86d0,	// (0x000444c9) list_single_hwr_training_instruct_pane

0xcdb3,	// (0x00048bac) list_single_hwr_training_instruct_pane_t1

0xc525,	// (0x0004831e) bg_frame_shadow_pane_g1

0xcdc2,	// (0x00048bbb) bg_frame_shadow_pane_g2

0xcdca,	// (0x00048bc3) bg_frame_shadow_pane_g3

0xcdd2,	// (0x00048bcb) bg_frame_shadow_pane_g4

0xcdda,	// (0x00048bd3) bg_frame_shadow_pane_g5

0xcde2,	// (0x00048bdb) bg_frame_shadow_pane_g6

0xcdea,	// (0x00048be3) bg_frame_shadow_pane_g7

0x101f,	// (0x0003ce18) bg_frame_shadow_pane_g8

0x0007,

0xf7f8,	// (0x0004b5f1) bg_frame_shadow_pane_g

0x07fd,	// (0x0003c5f6) main_video_tele_dialer_pane

0x86e5,	// (0x000444de) aid_size_cell_video_keypad_ParamLimits

0x86e5,	// (0x000444de) aid_size_cell_video_keypad

0x86ff,	// (0x000444f8) grid_video_dialer_keypad_pane_ParamLimits

0x86ff,	// (0x000444f8) grid_video_dialer_keypad_pane

0x874b,	// (0x00044544) video_down_pane_cp_ParamLimits

0x874b,	// (0x00044544) video_down_pane_cp

0x877d,	// (0x00044576) cell_video_dialer_keypad_pane_ParamLimits

0x877d,	// (0x00044576) cell_video_dialer_keypad_pane

0xcdf2,	// (0x00048beb) bg_button_pane_cp08_ParamLimits

0xcdf2,	// (0x00048beb) bg_button_pane_cp08

0x879f,	// (0x00044598) cell_video_dialer_keypad_pane_g1_ParamLimits

0x879f,	// (0x00044598) cell_video_dialer_keypad_pane_g1

0x809f,	// (0x00043e98) mup3_rocker2_pane_ParamLimits

0x809f,	// (0x00043e98) mup3_rocker2_pane

0x1158,	// (0x0003cf51) mup3_rocker2_pane_g1

0x723c,	// (0x00043035) main_dialer2_pane

0x07fd,	// (0x0003c5f6) main_mp4_pane

0xce1c,	// (0x00048c15) main_mp4_pane_g1_ParamLimits

0xce1c,	// (0x00048c15) main_mp4_pane_g1

0xce1c,	// (0x00048c15) main_mp4_pane_g2_ParamLimits

0xce1c,	// (0x00048c15) main_mp4_pane_g2

0x87d6,	// (0x000445cf) main_mp4_pane_g3_ParamLimits

0x87d6,	// (0x000445cf) main_mp4_pane_g3

0xce2a,	// (0x00048c23) main_mp4_pane_g4_ParamLimits

0xce2a,	// (0x00048c23) main_mp4_pane_g4

0xec69,	// (0x0004aa62) main_mp4_pane_g5_ParamLimits

0xec69,	// (0x0004aa62) main_mp4_pane_g5

0x0007,

0xf818,	// (0x0004b611) main_mp4_pane_g_ParamLimits

0xf818,	// (0x0004b611) main_mp4_pane_g

0xecdd,	// (0x0004aad6) main_mp4_pane_t1_ParamLimits

0xecdd,	// (0x0004aad6) main_mp4_pane_t1

0xed39,	// (0x0004ab32) main_mp4_pane_t2_ParamLimits

0xed39,	// (0x0004ab32) main_mp4_pane_t2

0xce58,	// (0x00048c51) main_mp4_pane_t3_ParamLimits

0xce58,	// (0x00048c51) main_mp4_pane_t3

0xed8b,	// (0x0004ab84) main_mp4_pane_t4_ParamLimits

0xed8b,	// (0x0004ab84) main_mp4_pane_t4

0x0003,

0xf829,	// (0x0004b622) main_mp4_pane_t_ParamLimits

0xf829,	// (0x0004b622) main_mp4_pane_t

0xedcf,	// (0x0004abc8) mp4_progress_pane_ParamLimits

0xedcf,	// (0x0004abc8) mp4_progress_pane

0xee19,	// (0x0004ac12) mp4_rocker_pane_ParamLimits

0xee19,	// (0x0004ac12) mp4_rocker_pane

0xce86,	// (0x00048c7f) mp4_progress_pane_t1

0xce9f,	// (0x00048c98) mp4_progress_pane_t2

0x0001,

0xf832,	// (0x0004b62b) mp4_progress_pane_t

0xceb8,	// (0x00048cb1) mup_progress_pane_cp04

0x1158,	// (0x0003cf51) mp4_rocker_pane_g1

0x8812,	// (0x0004460b) aid_cell_size_keypad2_ParamLimits

0x8812,	// (0x0004460b) aid_cell_size_keypad2

0x8828,	// (0x00044621) dialer2_ne_pane_ParamLimits

0x8828,	// (0x00044621) dialer2_ne_pane

0x8842,	// (0x0004463b) grid_dialer2_keypad_pane_ParamLimits

0x8842,	// (0x0004463b) grid_dialer2_keypad_pane

0xc2d9,	// (0x000480d2) bg_popup_call_pane_cp07_ParamLimits

0xc2d9,	// (0x000480d2) bg_popup_call_pane_cp07

0x885e,	// (0x00044657) dialer2_ne_pane_t1_ParamLimits

0x885e,	// (0x00044657) dialer2_ne_pane_t1

0x8899,	// (0x00044692) cell_dialer2_keypad_pane_ParamLimits

0x8899,	// (0x00044692) cell_dialer2_keypad_pane

0xcedd,	// (0x00048cd6) bg_button_pane_pane_cp04_ParamLimits

0xcedd,	// (0x00048cd6) bg_button_pane_pane_cp04

0x88bb,	// (0x000446b4) cell_dialer2_keypad_pane_g1_ParamLimits

0x88bb,	// (0x000446b4) cell_dialer2_keypad_pane_g1

0x4441,	// (0x0004023a) aid_placing_vt_set_content_ParamLimits

0x4441,	// (0x0004023a) aid_placing_vt_set_content

0x4469,	// (0x00040262) aid_placing_vt_set_title_ParamLimits

0x4469,	// (0x00040262) aid_placing_vt_set_title

0x07fd,	// (0x0003c5f6) main_image3_pane

0x8981,	// (0x0004477a) area_side_right_pane_cp01_ParamLimits

0x8981,	// (0x0004477a) area_side_right_pane_cp01

0xce1c,	// (0x00048c15) main_image3_pane_g1_ParamLimits

0xce1c,	// (0x00048c15) main_image3_pane_g1

0x8998,	// (0x00044791) main_image3_pane_g2_ParamLimits

0x8998,	// (0x00044791) main_image3_pane_g2

0x89c0,	// (0x000447b9) main_image3_pane_g3_ParamLimits

0x89c0,	// (0x000447b9) main_image3_pane_g3

0x89ea,	// (0x000447e3) main_image3_pane_g4_ParamLimits

0x89ea,	// (0x000447e3) main_image3_pane_g4

0x0003,

0xf841,	// (0x0004b63a) main_image3_pane_g_ParamLimits

0xf841,	// (0x0004b63a) main_image3_pane_g

0x8a14,	// (0x0004480d) main_image3_pane_t1_ParamLimits

0x8a14,	// (0x0004480d) main_image3_pane_t1

0x8a6c,	// (0x00044865) main_image3_pane_t2_ParamLimits

0x8a6c,	// (0x00044865) main_image3_pane_t2

0x8abe,	// (0x000448b7) main_image3_pane_t3_ParamLimits

0x8abe,	// (0x000448b7) main_image3_pane_t3

0x0003,

0xf84a,	// (0x0004b643) main_image3_pane_t_ParamLimits

0xf84a,	// (0x0004b643) main_image3_pane_t

0x0ea5,	// (0x0003cc9e) grid_sctrl_middle_pane_cp01_ParamLimits

0x0ea5,	// (0x0003cc9e) grid_sctrl_middle_pane_cp01

0x8b46,	// (0x0004493f) cell_sctrl_middle_pane_cp01_ParamLimits

0x8b46,	// (0x0004493f) cell_sctrl_middle_pane_cp01

0x8b63,	// (0x0004495c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8b63,	// (0x0004495c) cell_sctrl_middle_pane_cp01_g1

0x07fd,	// (0x0003c5f6) main_call4_pane

0x8b79,	// (0x00044972) aid_size_button_call4_ParamLimits

0x8b79,	// (0x00044972) aid_size_button_call4

0x8bac,	// (0x000449a5) call4_windows_pane_ParamLimits

0x8bac,	// (0x000449a5) call4_windows_pane

0x8bcb,	// (0x000449c4) grid_call4_button_pane_ParamLimits

0x8bcb,	// (0x000449c4) grid_call4_button_pane

0x8bfe,	// (0x000449f7) call4_windows_conf_pane

0x8c15,	// (0x00044a0e) popup_call4_audio_first_window_ParamLimits

0x8c15,	// (0x00044a0e) popup_call4_audio_first_window

0x8c65,	// (0x00044a5e) popup_call4_audio_second_window_ParamLimits

0x8c65,	// (0x00044a5e) popup_call4_audio_second_window

0x8c7c,	// (0x00044a75) popup_call4_audio_wait_window_ParamLimits

0x8c7c,	// (0x00044a75) popup_call4_audio_wait_window

0x8c8a,	// (0x00044a83) cell_call4_button_pane_ParamLimits

0x8c8a,	// (0x00044a83) cell_call4_button_pane

0x8caf,	// (0x00044aa8) bg_button_pane_cp09_ParamLimits

0x8caf,	// (0x00044aa8) bg_button_pane_cp09

0x8cbb,	// (0x00044ab4) cell_call4_button_pane_g1_ParamLimits

0x8cbb,	// (0x00044ab4) cell_call4_button_pane_g1

0x8ce1,	// (0x00044ada) cell_call4_button_pane_t1_ParamLimits

0x8ce1,	// (0x00044ada) cell_call4_button_pane_t1

0xcef1,	// (0x00048cea) popup_call4_audio_conf_window_ParamLimits

0xcef1,	// (0x00048cea) popup_call4_audio_conf_window

0x80ff,	// (0x00043ef8) mup3_progress_pane_t1_ParamLimits

0x811e,	// (0x00043f17) mup3_progress_pane_t2_ParamLimits

0xc8b9,	// (0x000486b2) mup3_progress_pane_t3_ParamLimits

0xf71f,	// (0x0004b518) mup3_progress_pane_t_ParamLimits

0xc8d6,	// (0x000486cf) mup_progress_pane_cp03_ParamLimits

0x861d,	// (0x00044416) mup3_control_keys_pane_g4_copy1

0xedfd,	// (0x0004abf6) mp4_rocker2_pane_ParamLimits

0xedfd,	// (0x0004abf6) mp4_rocker2_pane

0xcf05,	// (0x00048cfe) mp4_rocker2_pane_g1

0xcf0d,	// (0x00048d06) mp4_rocker2_pane_g2

0xee9d,	// (0x0004ac96) mp4_rocker2_pane_g3

0xeea5,	// (0x0004ac9e) mp4_rocker2_pane_g4

0xeead,	// (0x0004aca6) mp4_rocker2_pane_g5

0x0004,

0xf853,	// (0x0004b64c) mp4_rocker2_pane_g

0x07fd,	// (0x0003c5f6) main_camera4_pane

0x07fd,	// (0x0003c5f6) main_video4_pane

0x8719,	// (0x00044512) main_video_tele_dialer_pane_t1_ParamLimits

0x8719,	// (0x00044512) main_video_tele_dialer_pane_t1

0x8732,	// (0x0004452b) main_video_tele_dialer_pane_t2_ParamLimits

0x8732,	// (0x0004452b) main_video_tele_dialer_pane_t2

0x0001,

0xf809,	// (0x0004b602) main_video_tele_dialer_pane_t_ParamLimits

0xf809,	// (0x0004b602) main_video_tele_dialer_pane_t

0x8d1f,	// (0x00044b18) cam4_autofocus_pane_ParamLimits

0x8d1f,	// (0x00044b18) cam4_autofocus_pane

0x8d35,	// (0x00044b2e) cam4_image_uncrop_pane_ParamLimits

0x8d35,	// (0x00044b2e) cam4_image_uncrop_pane

0x8d4f,	// (0x00044b48) cam4_indicators_pane_ParamLimits

0x8d4f,	// (0x00044b48) cam4_indicators_pane

0x8d7a,	// (0x00044b73) main_camera4_pane_g1_ParamLimits

0x8d7a,	// (0x00044b73) main_camera4_pane_g1

0x8d8c,	// (0x00044b85) main_camera4_pane_g2_ParamLimits

0x8d8c,	// (0x00044b85) main_camera4_pane_g2

0x8d9f,	// (0x00044b98) main_camera4_pane_g3_ParamLimits

0x8d9f,	// (0x00044b98) main_camera4_pane_g3

0x8db2,	// (0x00044bab) main_camera4_pane_g4_ParamLimits

0x8db2,	// (0x00044bab) main_camera4_pane_g4

0x8dc5,	// (0x00044bbe) main_camera4_pane_g5_ParamLimits

0x8dc5,	// (0x00044bbe) main_camera4_pane_g5

0x0005,

0xf85e,	// (0x0004b657) main_camera4_pane_g_ParamLimits

0xf85e,	// (0x0004b657) main_camera4_pane_g

0x8de9,	// (0x00044be2) main_camera4_pane_t1_ParamLimits

0x8de9,	// (0x00044be2) main_camera4_pane_t1

0x0efe,	// (0x0003ccf7) bg_tb_trans_pane_cp06

0xeed9,	// (0x0004acd2) cam4_indicators_pane_g1

0xeeea,	// (0x0004ace3) cam4_indicators_pane_g2

0x0002,

0xf879,	// (0x0004b672) cam4_indicators_pane_g

0xef08,	// (0x0004ad01) cam4_indicators_pane_t1

0x8e4d,	// (0x00044c46) main_video4_pane_g1_ParamLimits

0x8e4d,	// (0x00044c46) main_video4_pane_g1

0x8e5c,	// (0x00044c55) main_video4_pane_g2_ParamLimits

0x8e5c,	// (0x00044c55) main_video4_pane_g2

0x8e6b,	// (0x00044c64) main_video4_pane_g3_ParamLimits

0x8e6b,	// (0x00044c64) main_video4_pane_g3

0x8e7a,	// (0x00044c73) main_video4_pane_g4_ParamLimits

0x8e7a,	// (0x00044c73) main_video4_pane_g4

0x0004,

0xf880,	// (0x0004b679) main_video4_pane_g_ParamLimits

0xf880,	// (0x0004b679) main_video4_pane_g

0x8e98,	// (0x00044c91) vid4_indicators_pane_ParamLimits

0x8e98,	// (0x00044c91) vid4_indicators_pane

0x8ec6,	// (0x00044cbf) video4_image_uncrop_cif_pane_ParamLimits

0x8ec6,	// (0x00044cbf) video4_image_uncrop_cif_pane

0x8ee0,	// (0x00044cd9) video4_image_uncrop_nhd_pane_ParamLimits

0x8ee0,	// (0x00044cd9) video4_image_uncrop_nhd_pane

0x8d35,	// (0x00044b2e) video4_image_uncrop_vga_pane_ParamLimits

0x8d35,	// (0x00044b2e) video4_image_uncrop_vga_pane

0x0ea5,	// (0x0003cc9e) bg_tb_trans_pane_cp07

0xef34,	// (0x0004ad2d) vid4_indicators_pane_g1

0xef48,	// (0x0004ad41) vid4_indicators_pane_g2

0xef5c,	// (0x0004ad55) vid4_indicators_pane_g3

0x0004,

0xf88b,	// (0x0004b684) vid4_indicators_pane_g

0xef8b,	// (0x0004ad84) vid4_indicators_pane_t1

0x8ef4,	// (0x00044ced) cam4_autofocus_pane_g1

0x8efc,	// (0x00044cf5) cam4_autofocus_pane_g2

0x8f04,	// (0x00044cfd) cam4_autofocus_pane_g3

0x0002,

0xf896,	// (0x0004b68f) cam4_autofocus_pane_g

0x8f0c,	// (0x00044d05) cam4_autofocus_pane_g3_copy1

0x8761,	// (0x0004455a) video_down_pane_cp_t1

0x876f,	// (0x00044568) video_down_pane_cp_t2

0x0001,

0xf80e,	// (0x0004b607) video_down_pane_cp_t

0x0ea5,	// (0x0003cc9e) popup_vitu2_window_ParamLimits

0x0ea5,	// (0x0003cc9e) popup_vitu2_window

0x8f14,	// (0x00044d0d) aid_size_cell2_itu2_ParamLimits

0x8f14,	// (0x00044d0d) aid_size_cell2_itu2

0x8f34,	// (0x00044d2d) aid_size_cell_itu2_ParamLimits

0x8f34,	// (0x00044d2d) aid_size_cell_itu2

0x81a8,	// (0x00043fa1) bg_popup_window_pane_cp09_ParamLimits

0x81a8,	// (0x00043fa1) bg_popup_window_pane_cp09

0x8f81,	// (0x00044d7a) field_vitu2_entry_pane_ParamLimits

0x8f81,	// (0x00044d7a) field_vitu2_entry_pane

0x8fa4,	// (0x00044d9d) grid_vitu2_function_pane_ParamLimits

0x8fa4,	// (0x00044d9d) grid_vitu2_function_pane

0x8fef,	// (0x00044de8) grid_vitu2_itu_pane_ParamLimits

0x8fef,	// (0x00044de8) grid_vitu2_itu_pane

0x907d,	// (0x00044e76) cell_vitu2_itu_pane_ParamLimits

0x907d,	// (0x00044e76) cell_vitu2_itu_pane

0x90a9,	// (0x00044ea2) cell_vitu2_function_pane_ParamLimits

0x90a9,	// (0x00044ea2) cell_vitu2_function_pane

0xcf15,	// (0x00048d0e) bg_popup_call_pane_cp08_ParamLimits

0xcf15,	// (0x00048d0e) bg_popup_call_pane_cp08

0xcf2c,	// (0x00048d25) field_vitu2_entry_pane_g1

0xcf38,	// (0x00048d31) field_vitu2_entry_pane_g2

0x0002,

0xf89d,	// (0x0004b696) field_vitu2_entry_pane_g

0x2eda,	// (0x0003ecd3) field_vitu2_entry_pane_t1_ParamLimits

0x2eda,	// (0x0003ecd3) field_vitu2_entry_pane_t1

0xcf44,	// (0x00048d3d) field_vitu2_entry_pane_t2_ParamLimits

0xcf44,	// (0x00048d3d) field_vitu2_entry_pane_t2

0x0001,

0xf8a4,	// (0x0004b69d) field_vitu2_entry_pane_t_ParamLimits

0xf8a4,	// (0x0004b69d) field_vitu2_entry_pane_t

0x90e8,	// (0x00044ee1) bg_button_pane_cp010_ParamLimits

0x90e8,	// (0x00044ee1) bg_button_pane_cp010

0x90f6,	// (0x00044eef) cell_vitu2_itu_pane_g1

0x911c,	// (0x00044f15) cell_vitu2_itu_pane_t1_ParamLimits

0x911c,	// (0x00044f15) cell_vitu2_itu_pane_t1

0x2f0b,	// (0x0003ed04) cell_vitu2_itu_pane_t2_ParamLimits

0x2f0b,	// (0x0003ed04) cell_vitu2_itu_pane_t2

0x0002,

0xf8ae,	// (0x0004b6a7) cell_vitu2_itu_pane_t_ParamLimits

0xf8ae,	// (0x0004b6a7) cell_vitu2_itu_pane_t

0x0ea5,	// (0x0003cc9e) bg_button_pane_cp011

0x917a,	// (0x00044f73) cell_vitu2_function_pane_g1

0x07fd,	// (0x0003c5f6) main_myfav_hc_pane

0x8b0e,	// (0x00044907) popup_image3_note_pane_ParamLimits

0x8b0e,	// (0x00044907) popup_image3_note_pane

0x8b2a,	// (0x00044923) popup_image3_tool_bar_pane_ParamLimits

0x8b2a,	// (0x00044923) popup_image3_tool_bar_pane

0x2f99,	// (0x0003ed92) cell_vitu2_itu_pane_t3_ParamLimits

0x2f99,	// (0x0003ed92) cell_vitu2_itu_pane_t3

0x07fd,	// (0x0003c5f6) bg_popup_trans_pane

0xcf69,	// (0x00048d62) grid_image3_tool_bar_pane

0xcf73,	// (0x00048d6c) bg_popup_trans_pane_g1

0x137d,	// (0x0003d176) bg_popup_trans_pane_g2

0xcf7b,	// (0x00048d74) bg_popup_trans_pane_g3

0xcf83,	// (0x00048d7c) bg_popup_trans_pane_g4

0xcf8b,	// (0x00048d84) bg_popup_trans_pane_g5

0xcf93,	// (0x00048d8c) bg_popup_trans_pane_g6

0xcf9b,	// (0x00048d94) bg_popup_trans_pane_g7

0xcfa3,	// (0x00048d9c) bg_popup_trans_pane_g8

0x135d,	// (0x0003d156) bg_popup_trans_pane_g9

0x0008,

0xf8b5,	// (0x0004b6ae) bg_popup_trans_pane_g

0xcfab,	// (0x00048da4) cell_image3_tool_bar_pane_ParamLimits

0xcfab,	// (0x00048da4) cell_image3_tool_bar_pane

0x1158,	// (0x0003cf51) cell_image3_tool_bar_pane_g1

0x07fd,	// (0x0003c5f6) bg_popup_trans_pane_cp1

0xcfbf,	// (0x00048db8) popup_image3_note_pane_t1

0xcfcd,	// (0x00048dc6) popup_image3_note_pane_t2

0xcfdb,	// (0x00048dd4) popup_image3_note_pane_t3

0x0002,

0xf8c8,	// (0x0004b6c1) popup_image3_note_pane_t

0xcfe9,	// (0x00048de2) popup_image3_note_pane_t3_copy1

0x918e,	// (0x00044f87) bg_myfav_hc_instruction_pane_ParamLimits

0x918e,	// (0x00044f87) bg_myfav_hc_instruction_pane

0x91a2,	// (0x00044f9b) cell_myfav_contact_pane_ParamLimits

0x91a2,	// (0x00044f9b) cell_myfav_contact_pane

0x91c0,	// (0x00044fb9) cell_myfav_contact_pane_cp1_ParamLimits

0x91c0,	// (0x00044fb9) cell_myfav_contact_pane_cp1

0x91d8,	// (0x00044fd1) cell_myfav_contact_pane_cp2_ParamLimits

0x91d8,	// (0x00044fd1) cell_myfav_contact_pane_cp2

0x91f0,	// (0x00044fe9) cell_myfav_contact_pane_cp3_ParamLimits

0x91f0,	// (0x00044fe9) cell_myfav_contact_pane_cp3

0x9207,	// (0x00045000) cell_myfav_contact_pane_cp4_ParamLimits

0x9207,	// (0x00045000) cell_myfav_contact_pane_cp4

0x921f,	// (0x00045018) cell_myfav_contact_pane_cp5_ParamLimits

0x921f,	// (0x00045018) cell_myfav_contact_pane_cp5

0x9233,	// (0x0004502c) cell_myfav_contact_pane_cp6_ParamLimits

0x9233,	// (0x0004502c) cell_myfav_contact_pane_cp6

0x9249,	// (0x00045042) cell_myfav_contact_pane_cp7_ParamLimits

0x9249,	// (0x00045042) cell_myfav_contact_pane_cp7

0xcff7,	// (0x00048df0) listscroll_gen_pane_cp05

0x9263,	// (0x0004505c) main_myfav_hc_pane_g1_ParamLimits

0x9263,	// (0x0004505c) main_myfav_hc_pane_g1

0x927d,	// (0x00045076) main_myfav_hc_pane_g2_ParamLimits

0x927d,	// (0x00045076) main_myfav_hc_pane_g2

0x0002,

0xf8cf,	// (0x0004b6c8) main_myfav_hc_pane_g_ParamLimits

0xf8cf,	// (0x0004b6c8) main_myfav_hc_pane_g

0x92af,	// (0x000450a8) main_myfav_hc_pane_t1_ParamLimits

0x92af,	// (0x000450a8) main_myfav_hc_pane_t1

0xd000,	// (0x00048df9) main_myfav_hc_pane_t2_ParamLimits

0xd000,	// (0x00048df9) main_myfav_hc_pane_t2

0xd012,	// (0x00048e0b) main_myfav_hc_pane_t3_ParamLimits

0xd012,	// (0x00048e0b) main_myfav_hc_pane_t3

0x92c6,	// (0x000450bf) main_myfav_hc_pane_t4_ParamLimits

0x92c6,	// (0x000450bf) main_myfav_hc_pane_t4

0x0004,

0xf8d6,	// (0x0004b6cf) main_myfav_hc_pane_t_ParamLimits

0xf8d6,	// (0x0004b6cf) main_myfav_hc_pane_t

0x1158,	// (0x0003cf51) bg_myfav_hc_instruction_pane_g1

0xd024,	// (0x00048e1d) cell_myfav_contact_pane_g1_ParamLimits

0xd024,	// (0x00048e1d) cell_myfav_contact_pane_g1

0xd024,	// (0x00048e1d) cell_myfav_contact_pane_g2_ParamLimits

0xd024,	// (0x00048e1d) cell_myfav_contact_pane_g2

0xd030,	// (0x00048e29) cell_myfav_contact_pane_g3_ParamLimits

0xd030,	// (0x00048e29) cell_myfav_contact_pane_g3

0x0f0c,	// (0x0003cd05) cell_myfav_contact_pane_g4_ParamLimits

0x0f0c,	// (0x0003cd05) cell_myfav_contact_pane_g4

0xd03d,	// (0x00048e36) cell_myfav_contact_pane_g5_ParamLimits

0xd03d,	// (0x00048e36) cell_myfav_contact_pane_g5

0x0004,

0xf8e1,	// (0x0004b6da) cell_myfav_contact_pane_g_ParamLimits

0xf8e1,	// (0x0004b6da) cell_myfav_contact_pane_g

0x9297,	// (0x00045090) main_myfav_hc_pane_g3_ParamLimits

0x9297,	// (0x00045090) main_myfav_hc_pane_g3

0x3829,	// (0x0003f622) popup_adpt_find_window

0x92ee,	// (0x000450e7) afind_page_pane_ParamLimits

0x92ee,	// (0x000450e7) afind_page_pane

0x9303,	// (0x000450fc) aid_size_cell_afind_ParamLimits

0x9303,	// (0x000450fc) aid_size_cell_afind

0x9321,	// (0x0004511a) bg_popup_sub_pane_cp09_ParamLimits

0x9321,	// (0x0004511a) bg_popup_sub_pane_cp09

0x932e,	// (0x00045127) find_pane_cp01_ParamLimits

0x932e,	// (0x00045127) find_pane_cp01

0xd049,	// (0x00048e42) grid_afind_control_pane_ParamLimits

0xd049,	// (0x00048e42) grid_afind_control_pane

0x933b,	// (0x00045134) grid_afind_pane_ParamLimits

0x933b,	// (0x00045134) grid_afind_pane

0x935d,	// (0x00045156) cell_afind_pane_ParamLimits

0x935d,	// (0x00045156) cell_afind_pane

0x1158,	// (0x0003cf51) afind_page_pane_g1

0x93c4,	// (0x000451bd) afind_page_pane_g2

0x93cd,	// (0x000451c6) afind_page_pane_g3

0x0002,

0xf8ec,	// (0x0004b6e5) afind_page_pane_g

0x93d6,	// (0x000451cf) afind_page_pane_t1

0xd05d,	// (0x00048e56) cell_afind_grid_control_pane_ParamLimits

0xd05d,	// (0x00048e56) cell_afind_grid_control_pane

0xcedd,	// (0x00048cd6) bg_button_pane_cp69_ParamLimits

0xcedd,	// (0x00048cd6) bg_button_pane_cp69

0x93f6,	// (0x000451ef) cell_afind_pane_g1_ParamLimits

0x93f6,	// (0x000451ef) cell_afind_pane_g1

0x9403,	// (0x000451fc) cell_afind_pane_t1_ParamLimits

0x9403,	// (0x000451fc) cell_afind_pane_t1

0x1162,	// (0x0003cf5b) bg_button_pane_cp72

0xd06c,	// (0x00048e65) cell_afind_grid_control_pane_g1

0x5dee,	// (0x00041be7) aid_image_placing_area_ParamLimits

0x5dee,	// (0x00041be7) aid_image_placing_area

0x0efe,	// (0x0003ccf7) field_vitu_entry_pane_g1_ParamLimits

0x0efe,	// (0x0003ccf7) field_vitu_entry_pane_g1

0x0efe,	// (0x0003ccf7) field_vitu_entry_pane_g2_ParamLimits

0x0efe,	// (0x0003ccf7) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x0004affa) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x0004affa) field_vitu_entry_pane_g

0xcbc6,	// (0x000489bf) cell_vitu_itu_pane_g1_ParamLimits

0xcba9,	// (0x000489a2) cell_vitu_itu_pane_t3_ParamLimits

0xcba9,	// (0x000489a2) cell_vitu_itu_pane_t3

0xce86,	// (0x00048c7f) mp4_progress_pane_t1_ParamLimits

0xce9f,	// (0x00048c98) mp4_progress_pane_t2_ParamLimits

0xf832,	// (0x0004b62b) mp4_progress_pane_t_ParamLimits

0xceb8,	// (0x00048cb1) mup_progress_pane_cp04_ParamLimits

0x92da,	// (0x000450d3) main_myfav_hc_pane_t5_ParamLimits

0x92da,	// (0x000450d3) main_myfav_hc_pane_t5

0xc029,	// (0x00047e22) aid_zoom_text_primary

0x3829,	// (0x0003f622) popup_adpt_find_window_ParamLimits

0x0ea5,	// (0x0003cc9e) main_cam_set_pane

0x8d66,	// (0x00044b5f) cam4_zoom_pane_ParamLimits

0x8d66,	// (0x00044b5f) cam4_zoom_pane

0x9415,	// (0x0004520e) main_cam_set_pane_g1_ParamLimits

0x9415,	// (0x0004520e) main_cam_set_pane_g1

0x9423,	// (0x0004521c) main_cam_set_pane_g2_ParamLimits

0x9423,	// (0x0004521c) main_cam_set_pane_g2

0x0001,

0xf8f3,	// (0x0004b6ec) main_cam_set_pane_g_ParamLimits

0xf8f3,	// (0x0004b6ec) main_cam_set_pane_g

0x9444,	// (0x0004523d) main_cam_set_pane_t1_ParamLimits

0x9444,	// (0x0004523d) main_cam_set_pane_t1

0x945f,	// (0x00045258) main_cset_listscroll_pane_ParamLimits

0x945f,	// (0x00045258) main_cset_listscroll_pane

0x9485,	// (0x0004527e) main_cset_slider_pane_ParamLimits

0x9485,	// (0x0004527e) main_cset_slider_pane

0xd07d,	// (0x00048e76) main_cset_list_pane_ParamLimits

0xd07d,	// (0x00048e76) main_cset_list_pane

0xd08d,	// (0x00048e86) scroll_pane_cp028

0x94ab,	// (0x000452a4) aid_area_touch_slider

0x94c7,	// (0x000452c0) cset_slider_pane

0x94ea,	// (0x000452e3) main_cset_slider_pane_g1

0x94ff,	// (0x000452f8) main_cset_slider_pane_g2

0x0011,

0xf8f8,	// (0x0004b6f1) main_cset_slider_pane_g

0xd0c6,	// (0x00048ebf) main_cset_slider_pane_t1

0x95bb,	// (0x000453b4) main_cset_slider_pane_t2

0x95d5,	// (0x000453ce) main_cset_slider_pane_t3

0x95ef,	// (0x000453e8) main_cset_slider_pane_t4

0x9609,	// (0x00045402) main_cset_slider_pane_t5

0x9623,	// (0x0004541c) main_cset_slider_pane_t6

0x9638,	// (0x00045431) main_cset_slider_pane_t7

0x000e,

0xf91d,	// (0x0004b716) main_cset_slider_pane_t

0x973c,	// (0x00045535) cset_list_set_pane_ParamLimits

0x973c,	// (0x00045535) cset_list_set_pane

0xd160,	// (0x00048f59) aid_position_infowindow_above

0xd168,	// (0x00048f61) aid_position_infowindow_below

0xd170,	// (0x00048f69) cset_list_set_pane_g1_ParamLimits

0xd170,	// (0x00048f69) cset_list_set_pane_g1

0xd17c,	// (0x00048f75) cset_list_set_pane_g3_ParamLimits

0xd17c,	// (0x00048f75) cset_list_set_pane_g3

0x0001,

0xf93c,	// (0x0004b735) cset_list_set_pane_g_ParamLimits

0xf93c,	// (0x0004b735) cset_list_set_pane_g

0xd18b,	// (0x00048f84) cset_list_set_pane_t1_ParamLimits

0xd18b,	// (0x00048f84) cset_list_set_pane_t1

0x0ea5,	// (0x0003cc9e) list_highlight_pane_cp021_ParamLimits

0x0ea5,	// (0x0003cc9e) list_highlight_pane_cp021

0x1ca3,	// (0x0003da9c) cset_slider_pane_g1

0x1cb5,	// (0x0003daae) cset_slider_pane_g2

0x1cac,	// (0x0003daa5) cset_slider_pane_g3

0x0002,

0xf941,	// (0x0004b73a) cset_slider_pane_g

0xefa2,	// (0x0004ad9b) aid_area_touch_cam4_zoom

0xefaa,	// (0x0004ada3) cam4_zoom_cont_pane

0xefb2,	// (0x0004adab) cam4_zoom_pane_g1

0xefba,	// (0x0004adb3) cam4_zoom_pane_g2

0x974e,	// (0x00045547) cam4_zoom_pane_g3

0x0002,

0xf948,	// (0x0004b741) cam4_zoom_pane_g

0xd1a0,	// (0x00048f99) cam4_zoom_cont_pane_g1

0xd1a9,	// (0x00048fa2) cam4_zoom_cont_pane_g2

0xd1b2,	// (0x00048fab) cam4_zoom_cont_pane_g3

0x0002,

0xf94f,	// (0x0004b748) cam4_zoom_cont_pane_g

0x8b97,	// (0x00044990) call4_image_pane_ParamLimits

0x8b97,	// (0x00044990) call4_image_pane

0x8bfe,	// (0x000449f7) call4_windows_conf_pane_ParamLimits

0x8c43,	// (0x00044a3c) popup_call4_audio_in_window_ParamLimits

0x8c43,	// (0x00044a3c) popup_call4_audio_in_window

0x07fd,	// (0x0003c5f6) bg_popup_call2_act_pane_cp02

0xcee9,	// (0x00048ce2) call4_list_conf_pane

0x1158,	// (0x0003cf51) call4_image_pane_g1

0x1158,	// (0x0003cf51) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x0004b1d1) call4_image_pane_g

0xd1bb,	// (0x00048fb4) list_single_graphic_popup_conf4_pane_ParamLimits

0xd1bb,	// (0x00048fb4) list_single_graphic_popup_conf4_pane

0x07fd,	// (0x0003c5f6) list_highlight_pane_cp022

0xd1ce,	// (0x00048fc7) list_single_graphic_popup_conf4_pane_g1

0x1897,	// (0x0003d690) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf956,	// (0x0004b74f) list_single_graphic_popup_conf4_pane_g

0xd1d6,	// (0x00048fcf) list_single_graphic_popup_conf4_pane_t1

0x458d,	// (0x00040386) popup_vtel_slider_window_ParamLimits

0x458d,	// (0x00040386) popup_vtel_slider_window

0xcecb,	// (0x00048cc4) dialer2_ne_pane_t2_ParamLimits

0xcecb,	// (0x00048cc4) dialer2_ne_pane_t2

0x0001,

0xf837,	// (0x0004b630) dialer2_ne_pane_t_ParamLimits

0xf837,	// (0x0004b630) dialer2_ne_pane_t

0xc2d9,	// (0x000480d2) bg_popup_sub_pane_cp010_ParamLimits

0xc2d9,	// (0x000480d2) bg_popup_sub_pane_cp010

0x9756,	// (0x0004554f) popup_vtel_slider_window_g1_ParamLimits

0x9756,	// (0x0004554f) popup_vtel_slider_window_g1

0x9769,	// (0x00045562) popup_vtel_slider_window_g2_ParamLimits

0x9769,	// (0x00045562) popup_vtel_slider_window_g2

0x0003,

0xf95b,	// (0x0004b754) popup_vtel_slider_window_g_ParamLimits

0xf95b,	// (0x0004b754) popup_vtel_slider_window_g

0x97bf,	// (0x000455b8) vtel_slider_pane_ParamLimits

0x97bf,	// (0x000455b8) vtel_slider_pane

0x97e1,	// (0x000455da) vtel_slider_pane_g1_ParamLimits

0x97e1,	// (0x000455da) vtel_slider_pane_g1

0x97f5,	// (0x000455ee) vtel_slider_pane_g2_ParamLimits

0x97f5,	// (0x000455ee) vtel_slider_pane_g2

0x980d,	// (0x00045606) vtel_slider_pane_g3_ParamLimits

0x980d,	// (0x00045606) vtel_slider_pane_g3

0x97e1,	// (0x000455da) vtel_slider_pane_g4_ParamLimits

0x97e1,	// (0x000455da) vtel_slider_pane_g4

0x9823,	// (0x0004561c) vtel_slider_pane_g5_ParamLimits

0x9823,	// (0x0004561c) vtel_slider_pane_g5

0x0004,

0xf964,	// (0x0004b75d) vtel_slider_pane_g_ParamLimits

0xf964,	// (0x0004b75d) vtel_slider_pane_g

0x0ea5,	// (0x0003cc9e) main_gallery2_pane

0x8f54,	// (0x00044d4d) aid_size_row_itut2_dropdow_list_ParamLimits

0x8f54,	// (0x00044d4d) aid_size_row_itut2_dropdow_list

0x8fc9,	// (0x00044dc2) grid_vitu2_function_top_pane_ParamLimits

0x8fc9,	// (0x00044dc2) grid_vitu2_function_top_pane

0x902b,	// (0x00044e24) popup_vitu2_dropdown_list_window_ParamLimits

0x902b,	// (0x00044e24) popup_vitu2_dropdown_list_window

0x9051,	// (0x00044e4a) popup_vitu2_match_list_window

0x9839,	// (0x00045632) cell_vitu2_function_top_pane_ParamLimits

0x9839,	// (0x00045632) cell_vitu2_function_top_pane

0x9853,	// (0x0004564c) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9853,	// (0x0004564c) cell_vitu2_function_top_pane_cp01

0x986f,	// (0x00045668) cell_vitu2_function_top_wide_pane_ParamLimits

0x986f,	// (0x00045668) cell_vitu2_function_top_wide_pane

0x0ea5,	// (0x0003cc9e) bg_button_pane_cp012

0x988d,	// (0x00045686) cell_vitu2_function_top_pane_g1

0xefc2,	// (0x0004adbb) bg_button_pane_cp013_ParamLimits

0xefc2,	// (0x0004adbb) bg_button_pane_cp013

0x98a1,	// (0x0004569a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x98a1,	// (0x0004569a) cell_vitu2_function_top_wide_pane_g1

0x0ea5,	// (0x0003cc9e) bg_popup_sub_pane_cp20

0x98b9,	// (0x000456b2) list_vitu2_match_list_pane

0xcf73,	// (0x00048d6c) bg_popup_sub_pane_cp20_g1

0xcf7b,	// (0x00048d74) bg_popup_sub_pane_cp20_g2

0x137d,	// (0x0003d176) bg_popup_sub_pane_cp20_g3

0xcf83,	// (0x00048d7c) bg_popup_sub_pane_cp20_g4

0x135d,	// (0x0003d156) bg_popup_sub_pane_cp20_g5

0xd1ec,	// (0x00048fe5) bg_popup_sub_pane_cp20_g6

0xcf93,	// (0x00048d8c) bg_popup_sub_pane_cp20_g7

0xcf9b,	// (0x00048d94) bg_popup_sub_pane_cp20_g8

0xcfa3,	// (0x00048d9c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf96f,	// (0x0004b768) bg_popup_sub_pane_cp20_g

0xefde,	// (0x0004add7) list_vitu2_match_list_item_pane_ParamLimits

0xefde,	// (0x0004add7) list_vitu2_match_list_item_pane

0xeff0,	// (0x0004ade9) list_vitu2_match_list_item_pane_t1

0x07fd,	// (0x0003c5f6) bg_popup_sub_pane_cp21

0x1122,	// (0x0003cf1b) grid_vitu2_dropdown_list_pane

0x98d1,	// (0x000456ca) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x98d1,	// (0x000456ca) cell_vitu2_dropdown_list_char_pane

0x98f2,	// (0x000456eb) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x98f2,	// (0x000456eb) cell_vitu2_dropdown_list_ctrl_pane

0xd1f4,	// (0x00048fed) cell_vitu2_dropdown_list_char_pane_g1

0xd1fd,	// (0x00048ff6) cell_vitu2_dropdown_list_char_pane_g2

0xd206,	// (0x00048fff) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf982,	// (0x0004b77b) cell_vitu2_dropdown_list_char_pane_g

0x991c,	// (0x00045715) cell_vitu2_dropdown_list_char_pane_t1

0x992a,	// (0x00045723) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x992a,	// (0x00045723) cell_vitu2_dropdown_list_ctrl_pane_g1

0x993a,	// (0x00045733) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x993a,	// (0x00045733) cell_vitu2_dropdown_list_ctrl_pane_g2

0x994b,	// (0x00045744) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x994b,	// (0x00045744) cell_vitu2_dropdown_list_ctrl_pane_g3

0x995b,	// (0x00045754) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x995b,	// (0x00045754) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0efe,	// (0x0003ccf7) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0efe,	// (0x0003ccf7) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf989,	// (0x0004b782) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf989,	// (0x0004b782) cell_vitu2_dropdown_list_ctrl_pane_g

0x9977,	// (0x00045770) aid_size_cell_gallery2_ParamLimits

0x9977,	// (0x00045770) aid_size_cell_gallery2

0x9995,	// (0x0004578e) grid_gallery2_pane_ParamLimits

0x9995,	// (0x0004578e) grid_gallery2_pane

0x99af,	// (0x000457a8) scroll_pane_cp029_ParamLimits

0x99af,	// (0x000457a8) scroll_pane_cp029

0x99c0,	// (0x000457b9) cell_gallery2_pane_ParamLimits

0x99c0,	// (0x000457b9) cell_gallery2_pane

0xd20f,	// (0x00049008) cell_gallery2_pane_g2

0x9a1f,	// (0x00045818) cell_gallery2_pane_g3

0xd217,	// (0x00049010) cell_gallery2_pane_g4

0xd21f,	// (0x00049018) cell_gallery2_pane_g5

0x1122,	// (0x0003cf1b) grid_highlight_pane_cp10

0x9051,	// (0x00044e4a) popup_vitu2_match_list_window_ParamLimits

0x9066,	// (0x00044e5f) popup_vitu2_query_window_ParamLimits

0x9066,	// (0x00044e5f) popup_vitu2_query_window

0x07fd,	// (0x0003c5f6) bg_vitu2_candi_button_pane

0xd1f4,	// (0x00048fed) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd1fd,	// (0x00048ff6) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd206,	// (0x00048fff) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x2ff7,	// (0x0003edf0) bg_button_pane_cp015

0x9a27,	// (0x00045820) bg_button_pane_cp016

0x9a3a,	// (0x00045833) bg_button_pane_cp017

0x1f5e,	// (0x0003dd57) bg_popup_sub_pane_cp22

0xd227,	// (0x00049020) popup_vitu2_query_window_g1

0x3026,	// (0x0003ee1f) popup_vitu2_query_window_g2

0x0002,

0xf994,	// (0x0004b78d) popup_vitu2_query_window_g

0x3045,	// (0x0003ee3e) popup_vitu2_query_window_t1_ParamLimits

0x3045,	// (0x0003ee3e) popup_vitu2_query_window_t1

0x307a,	// (0x0003ee73) popup_vitu2_query_window_t2_ParamLimits

0x307a,	// (0x0003ee73) popup_vitu2_query_window_t2

0x308c,	// (0x0003ee85) popup_vitu2_query_window_t3_ParamLimits

0x308c,	// (0x0003ee85) popup_vitu2_query_window_t3

0x9a5e,	// (0x00045857) popup_vitu2_query_window_t4_ParamLimits

0x9a5e,	// (0x00045857) popup_vitu2_query_window_t4

0x9a7f,	// (0x00045878) popup_vitu2_query_window_t5_ParamLimits

0x9a7f,	// (0x00045878) popup_vitu2_query_window_t5

0x0006,

0xf99b,	// (0x0004b794) popup_vitu2_query_window_t_ParamLimits

0xf99b,	// (0x0004b794) popup_vitu2_query_window_t

0xd075,	// (0x00048e6e) main_cset_text_pane

0x94ab,	// (0x000452a4) aid_area_touch_slider_ParamLimits

0x94c7,	// (0x000452c0) cset_slider_pane_ParamLimits

0x94ea,	// (0x000452e3) main_cset_slider_pane_g1_ParamLimits

0x94ff,	// (0x000452f8) main_cset_slider_pane_g2_ParamLimits

0xd096,	// (0x00048e8f) main_cset_slider_pane_g3_ParamLimits

0xd096,	// (0x00048e8f) main_cset_slider_pane_g3

0x9514,	// (0x0004530d) main_cset_slider_pane_g4_ParamLimits

0x9514,	// (0x0004530d) main_cset_slider_pane_g4

0x9523,	// (0x0004531c) main_cset_slider_pane_g5_ParamLimits

0x9523,	// (0x0004531c) main_cset_slider_pane_g5

0x952f,	// (0x00045328) main_cset_slider_pane_g6_ParamLimits

0x952f,	// (0x00045328) main_cset_slider_pane_g6

0xf8f8,	// (0x0004b6f1) main_cset_slider_pane_g_ParamLimits

0xd0c6,	// (0x00048ebf) main_cset_slider_pane_t1_ParamLimits

0x95bb,	// (0x000453b4) main_cset_slider_pane_t2_ParamLimits

0x95d5,	// (0x000453ce) main_cset_slider_pane_t3_ParamLimits

0x95ef,	// (0x000453e8) main_cset_slider_pane_t4_ParamLimits

0x9609,	// (0x00045402) main_cset_slider_pane_t5_ParamLimits

0x9623,	// (0x0004541c) main_cset_slider_pane_t6_ParamLimits

0x9638,	// (0x00045431) main_cset_slider_pane_t7_ParamLimits

0x9662,	// (0x0004545b) main_cset_slider_pane_t8_ParamLimits

0x9662,	// (0x0004545b) main_cset_slider_pane_t8

0x968a,	// (0x00045483) main_cset_slider_pane_t9_ParamLimits

0x968a,	// (0x00045483) main_cset_slider_pane_t9

0x96b2,	// (0x000454ab) main_cset_slider_pane_t10_ParamLimits

0x96b2,	// (0x000454ab) main_cset_slider_pane_t10

0x96da,	// (0x000454d3) main_cset_slider_pane_t11_ParamLimits

0x96da,	// (0x000454d3) main_cset_slider_pane_t11

0x9702,	// (0x000454fb) main_cset_slider_pane_t12_ParamLimits

0x9702,	// (0x000454fb) main_cset_slider_pane_t12

0x971f,	// (0x00045518) main_cset_slider_pane_t13_ParamLimits

0x971f,	// (0x00045518) main_cset_slider_pane_t13

0xf91d,	// (0x0004b716) main_cset_slider_pane_t_ParamLimits

0x07fd,	// (0x0003c5f6) bg_popup_sub_pane_cp011

0xd233,	// (0x0004902c) main_cset_text_pane_g1

0xd23b,	// (0x00049034) main_cset_text_pane_t1

0xd249,	// (0x00049042) main_cset_text_pane_t2

0xd257,	// (0x00049050) main_cset_text_pane_t3

0xd265,	// (0x0004905e) main_cset_text_pane_t4

0xd273,	// (0x0004906c) main_cset_text_pane_t5

0xd281,	// (0x0004907a) main_cset_text_pane_t6

0xd28f,	// (0x00049088) main_cset_text_pane_t7

0x0006,

0xf9aa,	// (0x0004b7a3) main_cset_text_pane_t

0x07fd,	// (0x0003c5f6) main_cam4_burst_pane

0x07fd,	// (0x0003c5f6) main_cam5_pane

0x93e4,	// (0x000451dd) bg_button_pane_cp019

0x93ed,	// (0x000451e6) bg_button_pane_cp020

0xd0a2,	// (0x00048e9b) main_cset_slider_pane_g7_ParamLimits

0xd0a2,	// (0x00048e9b) main_cset_slider_pane_g7

0xd0ae,	// (0x00048ea7) main_cset_slider_pane_g8_ParamLimits

0xd0ae,	// (0x00048ea7) main_cset_slider_pane_g8

0x9543,	// (0x0004533c) main_cset_slider_pane_g9_ParamLimits

0x9543,	// (0x0004533c) main_cset_slider_pane_g9

0x954f,	// (0x00045348) main_cset_slider_pane_g10_ParamLimits

0x954f,	// (0x00045348) main_cset_slider_pane_g10

0x955b,	// (0x00045354) main_cset_slider_pane_g11_ParamLimits

0x955b,	// (0x00045354) main_cset_slider_pane_g11

0x9567,	// (0x00045360) main_cset_slider_pane_g12_ParamLimits

0x9567,	// (0x00045360) main_cset_slider_pane_g12

0x9573,	// (0x0004536c) main_cset_slider_pane_g13_ParamLimits

0x9573,	// (0x0004536c) main_cset_slider_pane_g13

0x957f,	// (0x00045378) main_cset_slider_pane_g14_ParamLimits

0x957f,	// (0x00045378) main_cset_slider_pane_g14

0x958b,	// (0x00045384) main_cset_slider_pane_g15_ParamLimits

0x958b,	// (0x00045384) main_cset_slider_pane_g15

0xd0ee,	// (0x00048ee7) main_cset_slider_pane_t14_ParamLimits

0xd0ee,	// (0x00048ee7) main_cset_slider_pane_t14

0xd127,	// (0x00048f20) main_cset_slider_pane_t15_ParamLimits

0xd127,	// (0x00048f20) main_cset_slider_pane_t15

0x9aa0,	// (0x00045899) aid_cam4_burst_size_cell_ParamLimits

0x9aa0,	// (0x00045899) aid_cam4_burst_size_cell

0x9ac0,	// (0x000458b9) grid_cam4_burst_pane_ParamLimits

0x9ac0,	// (0x000458b9) grid_cam4_burst_pane

0x9af8,	// (0x000458f1) linegrid_cam4_burst_pane_ParamLimits

0x9af8,	// (0x000458f1) linegrid_cam4_burst_pane

0xd29d,	// (0x00049096) scroll_pane_cp30_ParamLimits

0xd29d,	// (0x00049096) scroll_pane_cp30

0x9b1c,	// (0x00045915) cell_cam4_burst_pane_ParamLimits

0x9b1c,	// (0x00045915) cell_cam4_burst_pane

0xd2a9,	// (0x000490a2) linegrid_cam4_burst_pane_g1_ParamLimits

0xd2a9,	// (0x000490a2) linegrid_cam4_burst_pane_g1

0x9b69,	// (0x00045962) linegrid_cam4_burst_pane_g2_ParamLimits

0x9b69,	// (0x00045962) linegrid_cam4_burst_pane_g2

0xd2b6,	// (0x000490af) linegrid_cam4_burst_pane_g3_ParamLimits

0xd2b6,	// (0x000490af) linegrid_cam4_burst_pane_g3

0x0002,

0xf9b9,	// (0x0004b7b2) linegrid_cam4_burst_pane_g_ParamLimits

0xf9b9,	// (0x0004b7b2) linegrid_cam4_burst_pane_g

0x9b7a,	// (0x00045973) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9b7a,	// (0x00045973) linegrid_cam4_burst_pane_g3_copy1

0xd2c3,	// (0x000490bc) linegrid_cam4_burst_pane_g4_ParamLimits

0xd2c3,	// (0x000490bc) linegrid_cam4_burst_pane_g4

0x9b94,	// (0x0004598d) linegrid_cam4_burst_pane_g5_ParamLimits

0x9b94,	// (0x0004598d) linegrid_cam4_burst_pane_g5

0x9ba5,	// (0x0004599e) linegrid_cam4_burst_pane_g6_ParamLimits

0x9ba5,	// (0x0004599e) linegrid_cam4_burst_pane_g6

0xd2d0,	// (0x000490c9) linegrid_cam4_burst_pane_g7_ParamLimits

0xd2d0,	// (0x000490c9) linegrid_cam4_burst_pane_g7

0x9bbc,	// (0x000459b5) cell_cam4_burst_pane_g1

0xd2e9,	// (0x000490e2) main_cam5_pane_t1_ParamLimits

0xd2e9,	// (0x000490e2) main_cam5_pane_t1

0xd2fb,	// (0x000490f4) main_cam5_pane_t2_ParamLimits

0xd2fb,	// (0x000490f4) main_cam5_pane_t2

0xd30d,	// (0x00049106) main_cam5_pane_t3_ParamLimits

0xd30d,	// (0x00049106) main_cam5_pane_t3

0xd31f,	// (0x00049118) main_cam5_pane_t4_ParamLimits

0xd31f,	// (0x00049118) main_cam5_pane_t4

0xd337,	// (0x00049130) main_cam5_pane_t5_ParamLimits

0xd337,	// (0x00049130) main_cam5_pane_t5

0xd34b,	// (0x00049144) main_cam5_pane_t6_ParamLimits

0xd34b,	// (0x00049144) main_cam5_pane_t6

0xd35f,	// (0x00049158) main_cam5_pane_t7_ParamLimits

0xd35f,	// (0x00049158) main_cam5_pane_t7

0xd371,	// (0x0004916a) main_cam5_pane_t8_ParamLimits

0xd371,	// (0x0004916a) main_cam5_pane_t8

0xd38d,	// (0x00049186) main_cam5_pane_t9_ParamLimits

0xd38d,	// (0x00049186) main_cam5_pane_t9

0xd39f,	// (0x00049198) main_cam5_pane_t10_ParamLimits

0xd39f,	// (0x00049198) main_cam5_pane_t10

0xd3b1,	// (0x000491aa) main_cam5_pane_t11_ParamLimits

0xd3b1,	// (0x000491aa) main_cam5_pane_t11

0xd3c3,	// (0x000491bc) main_cam5_pane_t12_ParamLimits

0xd3c3,	// (0x000491bc) main_cam5_pane_t12

0xd3d8,	// (0x000491d1) main_cam5_pane_t13_ParamLimits

0xd3d8,	// (0x000491d1) main_cam5_pane_t13

0x000c,

0xf9c5,	// (0x0004b7be) main_cam5_pane_t_ParamLimits

0xf9c5,	// (0x0004b7be) main_cam5_pane_t

0x38ab,	// (0x0003f6a4) popup_scut_keymap_window_ParamLimits

0x38ab,	// (0x0003f6a4) popup_scut_keymap_window

0x9bcf,	// (0x000459c8) aid_size_cell_brow_shortcut

0x1122,	// (0x0003cf1b) bg_popup_window_pane_cp010

0x9bdb,	// (0x000459d4) grid_scut_pane

0x9be7,	// (0x000459e0) cell_scut_pane_ParamLimits

0x9be7,	// (0x000459e0) cell_scut_pane

0x9bfe,	// (0x000459f7) cell_scut_pane_g1

0xd3f5,	// (0x000491ee) cell_scut_pane_t1

0xd404,	// (0x000491fd) cell_scut_pane_t2

0x9c07,	// (0x00045a00) cell_scut_pane_t3

0x0002,

0xf9e0,	// (0x0004b7d9) cell_scut_pane_t

0x7cb8,	// (0x00043ab1) main_mup3_pane_g8_ParamLimits

0x7cb8,	// (0x00043ab1) main_mup3_pane_g8

0x8f6b,	// (0x00044d64) area_vitu2_query_pane_ParamLimits

0x8f6b,	// (0x00044d64) area_vitu2_query_pane

0x3007,	// (0x0003ee00) input_focus_pane_cp08

0xd413,	// (0x0004920c) area_vitu2_query_pane_g1

0x310a,	// (0x0003ef03) area_vitu2_query_pane_g2

0x0001,

0xf9e7,	// (0x0004b7e0) area_vitu2_query_pane_g

0x9c15,	// (0x00045a0e) area_vitu2_query_pane_t1_ParamLimits

0x9c15,	// (0x00045a0e) area_vitu2_query_pane_t1

0x9c29,	// (0x00045a22) area_vitu2_query_pane_t2_ParamLimits

0x9c29,	// (0x00045a22) area_vitu2_query_pane_t2

0x311b,	// (0x0003ef14) area_vitu2_query_pane_t3_ParamLimits

0x311b,	// (0x0003ef14) area_vitu2_query_pane_t3

0xd41f,	// (0x00049218) area_vitu2_query_pane_t4_ParamLimits

0xd41f,	// (0x00049218) area_vitu2_query_pane_t4

0xd447,	// (0x00049240) area_vitu2_query_pane_t5_ParamLimits

0xd447,	// (0x00049240) area_vitu2_query_pane_t5

0xd46f,	// (0x00049268) area_vitu2_query_pane_t6_ParamLimits

0xd46f,	// (0x00049268) area_vitu2_query_pane_t6

0x0006,

0xf9ec,	// (0x0004b7e5) area_vitu2_query_pane_t_ParamLimits

0xf9ec,	// (0x0004b7e5) area_vitu2_query_pane_t

0x9c3d,	// (0x00045a36) bg_button_pane_cp018

0x9c4b,	// (0x00045a44) bg_button_pane_cp021

0x3143,	// (0x0003ef3c) bg_button_pane_cp022

0x3152,	// (0x0003ef4b) input_focus_pane_cp09

0x19d3,	// (0x0003d7cc) aid_size_touch_mv_arrow_left

0x19fc,	// (0x0003d7f5) aid_size_touch_mv_arrow_right

0x95a3,	// (0x0004539c) main_cset_slider_pane_g16_ParamLimits

0x95a3,	// (0x0004539c) main_cset_slider_pane_g16

0x95af,	// (0x000453a8) main_cset_slider_pane_g17_ParamLimits

0x95af,	// (0x000453a8) main_cset_slider_pane_g17

0x9bbc,	// (0x000459b5) cell_cam4_burst_pane_g1_ParamLimits

0x07fd,	// (0x0003c5f6) compa_mode_pane

0x9779,	// (0x00045572) popup_vtel_slider_window_g3_ParamLimits

0x9779,	// (0x00045572) popup_vtel_slider_window_g3

0x9790,	// (0x00045589) popup_vtel_slider_window_g4_ParamLimits

0x9790,	// (0x00045589) popup_vtel_slider_window_g4

0x97a7,	// (0x000455a0) popup_vtel_slider_window_t1_ParamLimits

0x97a7,	// (0x000455a0) popup_vtel_slider_window_t1

0x07fd,	// (0x0003c5f6) main_cl_pane

0xc24d,	// (0x00048046) popup_imed_adjust2_window_ParamLimits

0x1f5e,	// (0x0003dd57) bg_tb_trans_pane_cp05_ParamLimits

0xcade,	// (0x000488d7) popup_imed_adjust2_window_g1_ParamLimits

0xcaed,	// (0x000488e6) popup_imed_adjust2_window_g2_ParamLimits

0xcaed,	// (0x000488e6) popup_imed_adjust2_window_g2

0xcaf9,	// (0x000488f2) popup_imed_adjust2_window_g3_ParamLimits

0xcaf9,	// (0x000488f2) popup_imed_adjust2_window_g3

0x0002,

0xf762,	// (0x0004b55b) popup_imed_adjust2_window_g_ParamLimits

0xf762,	// (0x0004b55b) popup_imed_adjust2_window_g

0xcb05,	// (0x000488fe) popup_imed_adjust2_window_t1_ParamLimits

0xcb1d,	// (0x00048916) slider_imed_adjust_pane_ParamLimits

0xcb31,	// (0x0004892a) slider_imed_adjust_pane_g1_ParamLimits

0xcb41,	// (0x0004893a) slider_imed_adjust_pane_g2_ParamLimits

0xcb51,	// (0x0004894a) slider_imed_adjust_pane_g3_ParamLimits

0xcb62,	// (0x0004895b) slider_imed_adjust_pane_g4_ParamLimits

0xf769,	// (0x0004b562) slider_imed_adjust_pane_g_ParamLimits

0x8d07,	// (0x00044b00) aid_touch_area_cam4_ParamLimits

0x8d07,	// (0x00044b00) aid_touch_area_cam4

0xeeb5,	// (0x0004acae) battery_pane_cp01

0x8dd6,	// (0x00044bcf) main_camera4_pane_g6_ParamLimits

0x8dd6,	// (0x00044bcf) main_camera4_pane_g6

0x8e00,	// (0x00044bf9) main_camera4_pane_t2_ParamLimits

0x8e00,	// (0x00044bf9) main_camera4_pane_t2

0x0001,

0xf86b,	// (0x0004b664) main_camera4_pane_t_ParamLimits

0xf86b,	// (0x0004b664) main_camera4_pane_t

0x8e35,	// (0x00044c2e) aid_touch_area_vid4_ParamLimits

0x8e35,	// (0x00044c2e) aid_touch_area_vid4

0x8e89,	// (0x00044c82) main_video4_pane_g5_ParamLimits

0x8e89,	// (0x00044c82) main_video4_pane_g5

0x8eae,	// (0x00044ca7) vid4_progress_pane_ParamLimits

0x8eae,	// (0x00044ca7) vid4_progress_pane

0xd0ba,	// (0x00048eb3) main_cset_slider_pane_g18_ParamLimits

0xd0ba,	// (0x00048eb3) main_cset_slider_pane_g18

0xd2dd,	// (0x000490d6) cell_cam4_burst_pane_g2_ParamLimits

0xd2dd,	// (0x000490d6) cell_cam4_burst_pane_g2

0x0001,

0xf9c0,	// (0x0004b7b9) cell_cam4_burst_pane_g_ParamLimits

0xf9c0,	// (0x0004b7b9) cell_cam4_burst_pane_g

0x0f70,	// (0x0003cd69) bg_cl_pane_ParamLimits

0x0f70,	// (0x0003cd69) bg_cl_pane

0x9c57,	// (0x00045a50) cl_header_pane_ParamLimits

0x9c57,	// (0x00045a50) cl_header_pane

0x9c6b,	// (0x00045a64) cl_listscroll_pane_ParamLimits

0x9c6b,	// (0x00045a64) cl_listscroll_pane

0xd4bb,	// (0x000492b4) bg_cl_pane_g1

0xd4c3,	// (0x000492bc) bg_cl_pane_g2

0xd4cb,	// (0x000492c4) bg_cl_pane_g3

0xd4d3,	// (0x000492cc) bg_cl_pane_g4

0xd4db,	// (0x000492d4) bg_cl_pane_g5

0xd4e3,	// (0x000492dc) bg_cl_pane_g6

0xd4eb,	// (0x000492e4) bg_cl_pane_g7

0xd4f3,	// (0x000492ec) bg_cl_pane_g8

0xd4fb,	// (0x000492f4) bg_cl_pane_g9

0x0008,

0xf9fb,	// (0x0004b7f4) bg_cl_pane_g

0x9c7b,	// (0x00045a74) aid_height_cl_leading_ParamLimits

0x9c7b,	// (0x00045a74) aid_height_cl_leading

0x9c87,	// (0x00045a80) aid_height_cl_text_ParamLimits

0x9c87,	// (0x00045a80) aid_height_cl_text

0x0ea5,	// (0x0003cc9e) bg_cl_header_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_cl_header_pane

0x9ca6,	// (0x00045a9f) cl_header_pane_g1_ParamLimits

0x9ca6,	// (0x00045a9f) cl_header_pane_g1

0x9cbc,	// (0x00045ab5) cl_header_pane_t1_ParamLimits

0x9cbc,	// (0x00045ab5) cl_header_pane_t1

0xd503,	// (0x000492fc) cl_list_pane

0xd08d,	// (0x00048e86) hc_scroll_pane_cp01

0x135d,	// (0x0003d156) bg_cl_header_pane_g1

0xcf73,	// (0x00048d6c) bg_cl_header_pane_g2

0x137d,	// (0x0003d176) bg_cl_header_pane_g3

0xcf83,	// (0x00048d7c) bg_cl_header_pane_g4

0xcf7b,	// (0x00048d74) bg_cl_header_pane_g5

0xd1ec,	// (0x00048fe5) bg_cl_header_pane_g6

0xcf9b,	// (0x00048d94) bg_cl_header_pane_g7

0xcfa3,	// (0x00048d9c) bg_cl_header_pane_g8

0xcf93,	// (0x00048d8c) bg_cl_header_pane_g9

0x0008,

0xfa0e,	// (0x0004b807) bg_cl_header_pane_g

0x9cd5,	// (0x00045ace) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9cd5,	// (0x00045ace) hc_cl_list_double_graphic_heading_pane

0x9ce6,	// (0x00045adf) hc_cl_list_single_graphic_pane_ParamLimits

0x9ce6,	// (0x00045adf) hc_cl_list_single_graphic_pane

0x9cfc,	// (0x00045af5) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9cfc,	// (0x00045af5) hc_cl_list_single_graphic_pane_g1

0x9d08,	// (0x00045b01) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9d08,	// (0x00045b01) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa21,	// (0x0004b81a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa21,	// (0x0004b81a) hc_cl_list_single_graphic_pane_g

0x9d1c,	// (0x00045b15) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9d1c,	// (0x00045b15) hc_cl_list_single_graphic_pane_t1

0x9cfc,	// (0x00045af5) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9cfc,	// (0x00045af5) hc_cl_list_double_graphic_heading_pane_g1

0x9d31,	// (0x00045b2a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9d31,	// (0x00045b2a) hc_cl_list_double_graphic_heading_pane_g2

0x9d45,	// (0x00045b3e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9d45,	// (0x00045b3e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa26,	// (0x0004b81f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa26,	// (0x0004b81f) hc_cl_list_double_graphic_heading_pane_g

0x9d59,	// (0x00045b52) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9d59,	// (0x00045b52) hc_cl_list_double_graphic_heading_pane_t1

0x9d6e,	// (0x00045b67) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9d6e,	// (0x00045b67) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa2d,	// (0x0004b826) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa2d,	// (0x0004b826) hc_cl_list_double_graphic_heading_pane_t

0xf006,	// (0x0004adff) vid4_progress_pane_g1

0xf016,	// (0x0004ae0f) vid4_progress_pane_g2

0x9d83,	// (0x00045b7c) vid4_progress_pane_g3

0xf026,	// (0x0004ae1f) vid4_progress_pane_g4

0x0004,

0xfa32,	// (0x0004b82b) vid4_progress_pane_g

0x9d95,	// (0x00045b8e) vid4_progress_pane_t1

0xf03e,	// (0x0004ae37) vid4_progress_pane_t2

0x0002,

0xfa3d,	// (0x0004b836) vid4_progress_pane_t

0x9dad,	// (0x00045ba6) wait_bar_pane_cp07

0xc3d9,	// (0x000481d2) blid_firmament_pane_ParamLimits

0xc41c,	// (0x00048215) popup_blid_sat_info2_window_g1

0xc440,	// (0x00048239) popup_blid_sat_info2_window_t3

0xc44e,	// (0x00048247) popup_blid_sat_info2_window_t4

0xc45c,	// (0x00048255) popup_blid_sat_info2_window_t5

0xc46a,	// (0x00048263) popup_blid_sat_info2_window_t6

0xc47a,	// (0x00048273) popup_blid_sat_info2_window_t7

0xc488,	// (0x00048281) popup_blid_sat_info2_window_t8

0xc496,	// (0x0004828f) popup_blid_sat_info2_window_t9

0xc4a4,	// (0x0004829d) popup_blid_sat_info2_window_t10

0xc565,	// (0x0004835e) aid_firma_cardinal_ParamLimits

0xc579,	// (0x00048372) blid_firmament_pane_t1_ParamLimits

0xc590,	// (0x00048389) blid_firmament_pane_t2_ParamLimits

0xc5a7,	// (0x000483a0) blid_firmament_pane_t3_ParamLimits

0xc5be,	// (0x000483b7) blid_firmament_pane_t4_ParamLimits

0xf65b,	// (0x0004b454) blid_firmament_pane_t_ParamLimits

0xc5d5,	// (0x000483ce) blid_sat_info_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) main_cam_set_pane_ParamLimits

0x849e,	// (0x00044297) aid_size_cell_colour_35_ParamLimits

0x84be,	// (0x000442b7) aid_size_cell_colour_112_ParamLimits

0x84de,	// (0x000442d7) aid_size_cell_effect_ParamLimits

0x1f5e,	// (0x0003dd57) bg_tb_trans_pane_cp02_ParamLimits

0x15cd,	// (0x0003d3c6) heading_imed_pane_ParamLimits

0x84fe,	// (0x000442f7) listscroll_imed_pane_ParamLimits

0x65f7,	// (0x000423f0) popup_call2_audio_first_window_g5_ParamLimits

0x65f7,	// (0x000423f0) popup_call2_audio_first_window_g5

0x8923,	// (0x0004471c) aid_size_touch_image3_arrow_left_ParamLimits

0x8923,	// (0x0004471c) aid_size_touch_image3_arrow_left

0x894f,	// (0x00044748) aid_size_touch_image3_arrow_right_ParamLimits

0x894f,	// (0x00044748) aid_size_touch_image3_arrow_right

0xf053,	// (0x0004ae4c) vid4_progress_pane_t3

0x86a3,	// (0x0004449c) main_hwr_training_symbol_option_pane_ParamLimits

0x86a3,	// (0x0004449c) main_hwr_training_symbol_option_pane

0xcd17,	// (0x00048b10) popup_hwr_training_preview_window_ParamLimits

0xcd17,	// (0x00048b10) popup_hwr_training_preview_window

0x86c3,	// (0x000444bc) hwr_training_navi_pane_g5_ParamLimits

0x86c3,	// (0x000444bc) hwr_training_navi_pane_g5

0xcf61,	// (0x00048d5a) popup_char_count_window

0x0ea5,	// (0x0003cc9e) bg_popup_sub_pane_cp20_ParamLimits

0x98b9,	// (0x000456b2) list_vitu2_match_list_pane_ParamLimits

0x98c5,	// (0x000456be) vitu2_page_scroll_pane_ParamLimits

0x98c5,	// (0x000456be) vitu2_page_scroll_pane

0xd52e,	// (0x00049327) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd52e,	// (0x00049327) list_single_hwr_training_symbol_option_pane

0xd541,	// (0x0004933a) list_single_hwr_training_symbol_option_pane_g1

0xd549,	// (0x00049342) list_single_hwr_training_symbol_option_pane_t1

0xd557,	// (0x00049350) bg_button_pane_cp023

0xd560,	// (0x00049359) bg_button_pane_cp024

0xd593,	// (0x0004938c) vitu2_page_scroll_pane_g1

0xd59b,	// (0x00049394) vitu2_page_scroll_pane_g2

0x0001,

0xfa44,	// (0x0004b83d) vitu2_page_scroll_pane_g

0xd5a3,	// (0x0004939c) vitu2_page_scroll_pane_t1

0xc34f,	// (0x00048148) popup_char_count_window_g1

0xd5b2,	// (0x000493ab) popup_char_count_window_g2

0xd5bb,	// (0x000493b4) popup_char_count_window_g3

0x0002,

0xfa49,	// (0x0004b842) popup_char_count_window_g

0xd5c4,	// (0x000493bd) popup_char_count_window_t1

0x07fd,	// (0x0003c5f6) main_vded2_pane

0xcaca,	// (0x000488c3) aid_size_cell_imed_line

0xcad4,	// (0x000488cd) grid_imed_line_width_pane

0xef6d,	// (0x0004ad66) vid4_indicators_pane_g4

0xd5d2,	// (0x000493cb) cell_imed_line_width_pane_ParamLimits

0xd5d2,	// (0x000493cb) cell_imed_line_width_pane

0xd5e6,	// (0x000493df) cell_imed_line_width_pane_g1

0xd5ef,	// (0x000493e8) cell_imed_line_width_pane_g2

0x0001,

0xfa50,	// (0x0004b849) cell_imed_line_width_pane_g

0x9dc0,	// (0x00045bb9) main_vded2_pane_g1_ParamLimits

0x9dc0,	// (0x00045bb9) main_vded2_pane_g1

0x9dd6,	// (0x00045bcf) main_vded2_pane_g2_ParamLimits

0x9dd6,	// (0x00045bcf) main_vded2_pane_g2

0x0001,

0xfa55,	// (0x0004b84e) main_vded2_pane_g_ParamLimits

0xfa55,	// (0x0004b84e) main_vded2_pane_g

0x9de8,	// (0x00045be1) vded2_slider_pane_ParamLimits

0x9de8,	// (0x00045be1) vded2_slider_pane

0x9df8,	// (0x00045bf1) aid_size_touch_vded2_end

0x9e02,	// (0x00045bfb) aid_size_touch_vded2_playhead

0xd5f7,	// (0x000493f0) aid_size_touch_vded2_start

0xd5ff,	// (0x000493f8) vded2_slider_bg_pane

0xd608,	// (0x00049401) vded2_slider_pane_g1

0xd611,	// (0x0004940a) vded2_slider_pane_g2

0x9e0c,	// (0x00045c05) vded2_slider_pane_g3

0x0002,

0xfa5a,	// (0x0004b853) vded2_slider_pane_g

0xd619,	// (0x00049412) vded2_slider_bg_pane_g1

0xd622,	// (0x0004941b) vded2_slider_bg_pane_g2

0xd62b,	// (0x00049424) vded2_slider_bg_pane_g3

0x0002,

0xfa61,	// (0x0004b85a) vded2_slider_bg_pane_g

0x59f8,	// (0x000417f1) aid_postcard_touch_down_pane_ParamLimits

0x59f8,	// (0x000417f1) aid_postcard_touch_down_pane

0x5a0e,	// (0x00041807) aid_postcard_touch_up_pane_ParamLimits

0x5a0e,	// (0x00041807) aid_postcard_touch_up_pane

0x07fd,	// (0x0003c5f6) main_blid2_pane

0xc233,	// (0x0004802c) popup_blid2_search_window

0x07fd,	// (0x0003c5f6) blid2_gps_pane

0x07fd,	// (0x0003c5f6) blid2_navig_pane

0x07fd,	// (0x0003c5f6) blid2_search_pane

0x07fd,	// (0x0003c5f6) blid2_tripm_pane

0x9e17,	// (0x00045c10) blid2_search_pane_g1_ParamLimits

0x9e17,	// (0x00045c10) blid2_search_pane_g1

0x9e31,	// (0x00045c2a) blid2_search_pane_t1_ParamLimits

0x9e31,	// (0x00045c2a) blid2_search_pane_t1

0x9e43,	// (0x00045c3c) aid_size_cell_blid2_gps_ParamLimits

0x9e43,	// (0x00045c3c) aid_size_cell_blid2_gps

0x9e5b,	// (0x00045c54) blid2_gps_pane_g1_ParamLimits

0x9e5b,	// (0x00045c54) blid2_gps_pane_g1

0x9e6f,	// (0x00045c68) grid_blid2_satellite_pane_ParamLimits

0x9e6f,	// (0x00045c68) grid_blid2_satellite_pane

0x9e89,	// (0x00045c82) blid2_navig_pane_g1_ParamLimits

0x9e89,	// (0x00045c82) blid2_navig_pane_g1

0x9e95,	// (0x00045c8e) blid2_navig_pane_t1_ParamLimits

0x9e95,	// (0x00045c8e) blid2_navig_pane_t1

0x9eb0,	// (0x00045ca9) blid2_navig_pane_t2_ParamLimits

0x9eb0,	// (0x00045ca9) blid2_navig_pane_t2

0x0001,

0xfa68,	// (0x0004b861) blid2_navig_pane_t_ParamLimits

0xfa68,	// (0x0004b861) blid2_navig_pane_t

0x9ecb,	// (0x00045cc4) blid2_navig_ring_pane_ParamLimits

0x9ecb,	// (0x00045cc4) blid2_navig_ring_pane

0x9ee4,	// (0x00045cdd) blid2_speed_pane_ParamLimits

0x9ee4,	// (0x00045cdd) blid2_speed_pane

0x9ef0,	// (0x00045ce9) blid2_tripm_pane_g1_ParamLimits

0x9ef0,	// (0x00045ce9) blid2_tripm_pane_g1

0x9f09,	// (0x00045d02) blid2_tripm_pane_g2_ParamLimits

0x9f09,	// (0x00045d02) blid2_tripm_pane_g2

0x9f1d,	// (0x00045d16) blid2_tripm_pane_g3_ParamLimits

0x9f1d,	// (0x00045d16) blid2_tripm_pane_g3

0x9f31,	// (0x00045d2a) blid2_tripm_pane_g4_ParamLimits

0x9f31,	// (0x00045d2a) blid2_tripm_pane_g4

0x9f45,	// (0x00045d3e) blid2_tripm_pane_g5_ParamLimits

0x9f45,	// (0x00045d3e) blid2_tripm_pane_g5

0x0005,

0xfa6d,	// (0x0004b866) blid2_tripm_pane_g_ParamLimits

0xfa6d,	// (0x0004b866) blid2_tripm_pane_g

0x9f6b,	// (0x00045d64) blid2_tripm_pane_t1_ParamLimits

0x9f6b,	// (0x00045d64) blid2_tripm_pane_t1

0x9f86,	// (0x00045d7f) blid2_tripm_pane_t2_ParamLimits

0x9f86,	// (0x00045d7f) blid2_tripm_pane_t2

0x9f9f,	// (0x00045d98) blid2_tripm_pane_t3_ParamLimits

0x9f9f,	// (0x00045d98) blid2_tripm_pane_t3

0x0003,

0xfa7a,	// (0x0004b873) blid2_tripm_pane_t_ParamLimits

0xfa7a,	// (0x0004b873) blid2_tripm_pane_t

0x9fe6,	// (0x00045ddf) cell_blid2_satellite_pane_ParamLimits

0x9fe6,	// (0x00045ddf) cell_blid2_satellite_pane

0xa004,	// (0x00045dfd) cell_blid2_satellite_pane_g1

0xd634,	// (0x0004942d) cell_blid2_satellite_pane_t1

0x1158,	// (0x0003cf51) blid2_speed_pane_g1

0xd642,	// (0x0004943b) blid2_speed_pane_t1

0xd650,	// (0x00049449) blid2_speed_pane_t2

0x0001,

0xfa83,	// (0x0004b87c) blid2_speed_pane_t

0x1158,	// (0x0003cf51) blid2_navig_ring_pane_g1

0xa00d,	// (0x00045e06) blid2_navig_ring_pane_g2

0xa015,	// (0x00045e0e) blid2_navig_ring_pane_g3

0xa01d,	// (0x00045e16) blid2_navig_ring_pane_g4

0xa025,	// (0x00045e1e) blid2_navig_ring_pane_g5

0x0004,

0xfa88,	// (0x0004b881) blid2_navig_ring_pane_g

0x07fd,	// (0x0003c5f6) bg_popup_window_pane_cp011

0xd65e,	// (0x00049457) popup_blid2_search_window_g1

0xd666,	// (0x0004945f) popup_blid2_search_window_t1

0xd674,	// (0x0004946d) popup_blid2_search_window_t2

0x0001,

0xfa93,	// (0x0004b88c) popup_blid2_search_window_t

0x126c,	// (0x0003d065) main_browser_pane_g1

0x0f70,	// (0x0003cd69) main_browser_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_button_pane_cp011_ParamLimits

0x917a,	// (0x00044f73) cell_vitu2_function_pane_g1_ParamLimits

0x1f5e,	// (0x0003dd57) bg_popup_sub_pane_cp22_ParamLimits

0x3007,	// (0x0003ee00) input_focus_pane_cp08_ParamLimits

0x9a4d,	// (0x00045846) popup_vitu2_query_button_pane_ParamLimits

0x9a4d,	// (0x00045846) popup_vitu2_query_button_pane

0x301e,	// (0x0003ee17) popup_vitu2_query_input_button_pane

0xd227,	// (0x00049020) popup_vitu2_query_window_g1_ParamLimits

0x3026,	// (0x0003ee1f) popup_vitu2_query_window_g2_ParamLimits

0xf994,	// (0x0004b78d) popup_vitu2_query_window_g_ParamLimits

0x07fd,	// (0x0003c5f6) bg_button_pane_cp026

0xa02d,	// (0x00045e26) popup_vitu2_query_input_button_pane_g1

0x07fd,	// (0x0003c5f6) bg_button_pane_cp025

0xd682,	// (0x0004947b) popup_vitu2_query_button_pane_t1

0x7989,	// (0x00043782) main_mp3_pane_t6

0x7997,	// (0x00043790) popup_slider_window_cp01

0xeed1,	// (0x0004acca) cam4_battery_pane

0xef2a,	// (0x0004ad23) cam4_battery_pane_cp02

0xeffe,	// (0x0004adf7) cam4_battery_pane_cp01

0xeffe,	// (0x0004adf7) cam4_battery_pane_cp03

0x1158,	// (0x0003cf51) cam4_battery_pane_g1

0xd690,	// (0x00049489) cam4_battery_pane_g2

0x0001,

0xfa98,	// (0x0004b891) cam4_battery_pane_g

0xc4b2,	// (0x000482ab) popup_blid_sat_info2_window_t11

0x19d3,	// (0x0003d7cc) aid_size_touch_mv_arrow_left_ParamLimits

0x19fc,	// (0x0003d7f5) aid_size_touch_mv_arrow_right_ParamLimits

0x1a5a,	// (0x0003d853) navi_pane_g1_ParamLimits

0x1a66,	// (0x0003d85f) navi_pane_g2_ParamLimits

0x1a94,	// (0x0003d88d) navi_pane_g3_ParamLimits

0xf374,	// (0x0004b16d) navi_pane_g_ParamLimits

0x570d,	// (0x00041506) navi_pane_mv_t1_ParamLimits

0x850a,	// (0x00044303) grid_imed_effect_pane_ParamLimits

0x448a,	// (0x00040283) aid_placing_vt_slider_lsc

0x11bb,	// (0x0003cfb4) aid_placing_vt_slider_prt

0x0ea5,	// (0x0003cc9e) bg_tb_trans_pane_cp01_ParamLimits

0xc732,	// (0x0004852b) popup_image_details_window_g1_ParamLimits

0xc745,	// (0x0004853e) popup_image_details_window_g2_ParamLimits

0xc75a,	// (0x00048553) popup_image_details_window_g3_ParamLimits

0xc75a,	// (0x00048553) popup_image_details_window_g3

0xf69b,	// (0x0004b494) popup_image_details_window_g_ParamLimits

0xc76e,	// (0x00048567) popup_image_details_window_t1_ParamLimits

0xc780,	// (0x00048579) popup_image_details_window_t2_ParamLimits

0xc799,	// (0x00048592) popup_image_details_window_t3_ParamLimits

0xc7ad,	// (0x000485a6) popup_image_details_window_t4_ParamLimits

0xc7c8,	// (0x000485c1) popup_image_details_window_t5_ParamLimits

0xf6a2,	// (0x0004b49b) popup_image_details_window_t_ParamLimits

0x9c93,	// (0x00045a8c) cl_header_name_pane_ParamLimits

0x9c93,	// (0x00045a8c) cl_header_name_pane

0xa035,	// (0x00045e2e) cl_header_name_pane_t1_ParamLimits

0xa035,	// (0x00045e2e) cl_header_name_pane_t1

0xa056,	// (0x00045e4f) cl_header_name_pane_t2_ParamLimits

0xa056,	// (0x00045e4f) cl_header_name_pane_t2

0xa098,	// (0x00045e91) cl_header_name_pane_t3_ParamLimits

0xa098,	// (0x00045e91) cl_header_name_pane_t3

0x0002,

0xfa9d,	// (0x0004b896) cl_header_name_pane_t_ParamLimits

0xfa9d,	// (0x0004b896) cl_header_name_pane_t

0x1b23,	// (0x0003d91c) navi_pane_mv_g2_ParamLimits

0xcf2c,	// (0x00048d25) field_vitu2_entry_pane_g1_ParamLimits

0xcf38,	// (0x00048d31) field_vitu2_entry_pane_g2_ParamLimits

0x1f6c,	// (0x0003dd65) field_vitu2_entry_pane_g3_ParamLimits

0x1f6c,	// (0x0003dd65) field_vitu2_entry_pane_g3

0xf89d,	// (0x0004b696) field_vitu2_entry_pane_g_ParamLimits

0x90f6,	// (0x00044eef) cell_vitu2_itu_pane_g1_ParamLimits

0x910e,	// (0x00044f07) cell_vitu2_itu_pane_g2_ParamLimits

0x910e,	// (0x00044f07) cell_vitu2_itu_pane_g2

0x0001,

0xf8a9,	// (0x0004b6a2) cell_vitu2_itu_pane_g_ParamLimits

0xf8a9,	// (0x0004b6a2) cell_vitu2_itu_pane_g

0x0ea5,	// (0x0003cc9e) bg_vkb2_func_pane_cp05_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_vkb2_func_pane_cp05

0x0ea5,	// (0x0003cc9e) bg_vkb2_func_pane_cp03

0x0ea5,	// (0x0003cc9e) bg_vkb2_func_pane_cp04

0x0ea5,	// (0x0003cc9e) bg_vkb2_func_pane_cp10_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_vkb2_func_pane_cp10

0x3143,	// (0x0003ef3c) bg_vkb2_func_pane_cp08

0x9c3d,	// (0x00045a36) bg_vkb2_func_pane_cp06

0x9c4b,	// (0x00045a44) bg_vkb2_func_pane_cp07

0xd569,	// (0x00049362) bg_vkb2_func_pane_cp11_ParamLimits

0xd569,	// (0x00049362) bg_vkb2_func_pane_cp11

0xd57e,	// (0x00049377) bg_vkb2_func_pane_cp12_ParamLimits

0xd57e,	// (0x00049377) bg_vkb2_func_pane_cp12

0x07fd,	// (0x0003c5f6) bg_vkb2_func_pane_cp09

0xcf73,	// (0x00048d6c) bg_vkb2_func_pane_g1

0x137d,	// (0x0003d176) bg_vkb2_func_pane_g2

0xcf7b,	// (0x00048d74) bg_vkb2_func_pane_g3

0xcf83,	// (0x00048d7c) bg_vkb2_func_pane_g4

0xd1ec,	// (0x00048fe5) bg_vkb2_func_pane_g5

0xcf9b,	// (0x00048d94) bg_vkb2_func_pane_g6

0xcfa3,	// (0x00048d9c) bg_vkb2_func_pane_g7

0xcf93,	// (0x00048d8c) bg_vkb2_func_pane_g8

0x135d,	// (0x0003d156) bg_vkb2_func_pane_g9

0x0008,

0xfaa4,	// (0x0004b89d) bg_vkb2_func_pane_g

0x9f59,	// (0x00045d52) blid2_tripm_pane_g6_ParamLimits

0x9f59,	// (0x00045d52) blid2_tripm_pane_g6

0xce7e,	// (0x00048c77) mp4_progress_pane_g1

0x9fd2,	// (0x00045dcb) blid2_tripm_values_pane_ParamLimits

0x9fd2,	// (0x00045dcb) blid2_tripm_values_pane

0xa0c9,	// (0x00045ec2) blid2_tripm_values_pane_t1

0xa0d7,	// (0x00045ed0) blid2_tripm_values_pane_t2

0xa0e5,	// (0x00045ede) blid2_tripm_values_pane_t3

0xa0f3,	// (0x00045eec) blid2_tripm_values_pane_t4

0xa101,	// (0x00045efa) blid2_tripm_values_pane_t5

0xa10f,	// (0x00045f08) blid2_tripm_values_pane_t6

0xa11d,	// (0x00045f16) blid2_tripm_values_pane_t7

0xa12b,	// (0x00045f24) blid2_tripm_values_pane_t8

0xa139,	// (0x00045f32) blid2_tripm_values_pane_t9

0x0008,

0xfab7,	// (0x0004b8b0) blid2_tripm_values_pane_t

0x44cc,	// (0x000402c5) call_video_pane_t1_ParamLimits

0x44ea,	// (0x000402e3) call_video_pane_t2_ParamLimits

0xf222,	// (0x0004b01b) call_video_pane_t_ParamLimits

0x2e42,	// (0x0003ec3b) msg_header_pane_g1_ParamLimits

0x1ce8,	// (0x0003dae1) msg_header_pane_g2_ParamLimits

0x1ce8,	// (0x0003dae1) msg_header_pane_g2

0x0001,

0xf417,	// (0x0004b210) msg_header_pane_g_ParamLimits

0xf417,	// (0x0004b210) msg_header_pane_g

0x0f70,	// (0x0003cd69) main_clock2_pane_ParamLimits

0x820b,	// (0x00044004) grid_clock2_toolbar_pane_ParamLimits

0x820b,	// (0x00044004) grid_clock2_toolbar_pane

0x820b,	// (0x00044004) listscroll_clock2_pane_ParamLimits

0x820b,	// (0x00044004) listscroll_clock2_pane

0x82ef,	// (0x000440e8) main_clock2_pane_t3_ParamLimits

0x82ef,	// (0x000440e8) main_clock2_pane_t3

0x8313,	// (0x0004410c) main_clock2_pane_t4_ParamLimits

0x8313,	// (0x0004410c) main_clock2_pane_t4

0xd69a,	// (0x00049493) cell_clock2_toolbar_pane

0xd6a2,	// (0x0004949b) cell_clock2_toolbar_pane_cp01

0xd6a2,	// (0x0004949b) cell_clock2_toolbar_pane_cp02

0xd6aa,	// (0x000494a3) cell_clock2_toolbar_pane_cp03

0xd6b2,	// (0x000494ab) list_clock2_pane

0x1949,	// (0x0003d742) scroll_pane_cp10

0xd6ba,	// (0x000494b3) list_single_clock2_pane_ParamLimits

0xd6ba,	// (0x000494b3) list_single_clock2_pane

0x1122,	// (0x0003cf1b) list_highlight_pane_cp08

0xd6c7,	// (0x000494c0) list_single_clock2_pane_t1

0xd6d5,	// (0x000494ce) list_single_clock2_pane_t2

0x0001,

0xfaca,	// (0x0004b8c3) list_single_clock2_pane_t

0x07fd,	// (0x0003c5f6) bg_button_pane_cp10

0xd6e3,	// (0x000494dc) cell_clock2_toolbar_pane_g1

0x5984,	// (0x0004177d) aid_main_viewer_pane_g1_ParamLimits

0x5984,	// (0x0004177d) aid_main_viewer_pane_g1

0x5992,	// (0x0004178b) aid_main_viewer_pane_g2_ParamLimits

0x5992,	// (0x0004178b) aid_main_viewer_pane_g2

0x59a0,	// (0x00041799) aid_main_viewer_pane_g3_ParamLimits

0x59a0,	// (0x00041799) aid_main_viewer_pane_g3

0x59af,	// (0x000417a8) aid_main_viewer_pane_g4_ParamLimits

0x59af,	// (0x000417a8) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x0004b221) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x0004b221) aid_main_viewer_pane_g

0x721c,	// (0x00043015) main_calc_pane_ParamLimits

0x723c,	// (0x00043035) main_dialer2_pane_ParamLimits

0x07fd,	// (0x0003c5f6) main_cam6_pane

0x07fd,	// (0x0003c5f6) main_vid6_pane

0x8217,	// (0x00044010) listscroll_gen_pane_cp06_ParamLimits

0x8217,	// (0x00044010) listscroll_gen_pane_cp06

0x8336,	// (0x0004412f) main_clock2_pane_t5_ParamLimits

0x8336,	// (0x0004412f) main_clock2_pane_t5

0x8394,	// (0x0004418d) aid_call2_pane_cp10_ParamLimits

0x83a6,	// (0x0004419f) aid_call_pane_cp10_ParamLimits

0x19c7,	// (0x0003d7c0) popup_clock_analogue_window_cp10_g1_ParamLimits

0x19c7,	// (0x0003d7c0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x83b8,	// (0x000441b1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x83b8,	// (0x000441b1) popup_clock_analogue_window_cp10_g4_ParamLimits

0x19c7,	// (0x0003d7c0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf757,	// (0x0004b550) popup_clock_analogue_window_cp10_g_ParamLimits

0x83ce,	// (0x000441c7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x88d0,	// (0x000446c9) cell_dialer2_keypad_pane_g2_ParamLimits

0x88d0,	// (0x000446c9) cell_dialer2_keypad_pane_g2

0x0001,

0xf83c,	// (0x0004b635) cell_dialer2_keypad_pane_g_ParamLimits

0xf83c,	// (0x0004b635) cell_dialer2_keypad_pane_g

0x88ec,	// (0x000446e5) cell_dialer2_keypad_pane_t1

0x949d,	// (0x00045296) main_cset_text2_pane_ParamLimits

0x949d,	// (0x00045296) main_cset_text2_pane

0xd413,	// (0x0004920c) area_vitu2_query_pane_g1_ParamLimits

0x310a,	// (0x0003ef03) area_vitu2_query_pane_g2_ParamLimits

0xf9e7,	// (0x0004b7e0) area_vitu2_query_pane_g_ParamLimits

0xd497,	// (0x00049290) area_vitu2_query_pane_t7_ParamLimits

0xd497,	// (0x00049290) area_vitu2_query_pane_t7

0x9c3d,	// (0x00045a36) bg_button_pane_cp018_ParamLimits

0x9c4b,	// (0x00045a44) bg_button_pane_cp021_ParamLimits

0x3143,	// (0x0003ef3c) bg_button_pane_cp022_ParamLimits

0x3143,	// (0x0003ef3c) bg_vkb2_func_pane_cp08_ParamLimits

0x9c3d,	// (0x00045a36) bg_vkb2_func_pane_cp06_ParamLimits

0x9c4b,	// (0x00045a44) bg_vkb2_func_pane_cp07_ParamLimits

0x3152,	// (0x0003ef4b) input_focus_pane_cp09_ParamLimits

0xf068,	// (0x0004ae61) cam6_autofocus_pane_ParamLimits

0xf068,	// (0x0004ae61) cam6_autofocus_pane

0xa147,	// (0x00045f40) cam6_image_uncrop_pane_ParamLimits

0xa147,	// (0x00045f40) cam6_image_uncrop_pane

0xa156,	// (0x00045f4f) cam6_indi_pane_ParamLimits

0xa156,	// (0x00045f4f) cam6_indi_pane

0xa16c,	// (0x00045f65) cam6_mode_pane_ParamLimits

0xa16c,	// (0x00045f65) cam6_mode_pane

0xa17e,	// (0x00045f77) cam6_timer_pane_ParamLimits

0xa17e,	// (0x00045f77) cam6_timer_pane

0xa18a,	// (0x00045f83) cam6_zoom_pane_ParamLimits

0xa18a,	// (0x00045f83) cam6_zoom_pane

0xa196,	// (0x00045f8f) cam6_mode_pane_g1_ParamLimits

0xa196,	// (0x00045f8f) cam6_mode_pane_g1

0xa1a6,	// (0x00045f9f) cam6_mode_pane_g2_ParamLimits

0xa1a6,	// (0x00045f9f) cam6_mode_pane_g2

0xa1b6,	// (0x00045faf) cam6_mode_pane_g3_ParamLimits

0xa1b6,	// (0x00045faf) cam6_mode_pane_g3

0xa1c6,	// (0x00045fbf) cam6_mode_pane_g4_ParamLimits

0xa1c6,	// (0x00045fbf) cam6_mode_pane_g4

0x0003,

0xfacf,	// (0x0004b8c8) cam6_mode_pane_g_ParamLimits

0xfacf,	// (0x0004b8c8) cam6_mode_pane_g

0xc2cb,	// (0x000480c4) bg_tb_trans_pane_cp08_ParamLimits

0xc2cb,	// (0x000480c4) bg_tb_trans_pane_cp08

0xd6eb,	// (0x000494e4) cam6_battery_pane_ParamLimits

0xd6eb,	// (0x000494e4) cam6_battery_pane

0xd701,	// (0x000494fa) cam6_indi_pane_g1_ParamLimits

0xd701,	// (0x000494fa) cam6_indi_pane_g1

0xd713,	// (0x0004950c) cam6_indi_pane_g2_ParamLimits

0xd713,	// (0x0004950c) cam6_indi_pane_g2

0xd725,	// (0x0004951e) cam6_indi_pane_g3_ParamLimits

0xd725,	// (0x0004951e) cam6_indi_pane_g3

0x0002,

0xfad8,	// (0x0004b8d1) cam6_indi_pane_g_ParamLimits

0xfad8,	// (0x0004b8d1) cam6_indi_pane_g

0xd737,	// (0x00049530) cam6_indi_pane_t1_ParamLimits

0xd737,	// (0x00049530) cam6_indi_pane_t1

0xa1d6,	// (0x00045fcf) cam6_autofocus_pane_g1

0xa1de,	// (0x00045fd7) cam6_autofocus_pane_g2

0xa1e6,	// (0x00045fdf) cam6_autofocus_pane_g3

0xa1ee,	// (0x00045fe7) cam6_autofocus_pane_g4

0x0003,

0xfadf,	// (0x0004b8d8) cam6_autofocus_pane_g

0xd75d,	// (0x00049556) cam6_timer_pane_g1

0xd765,	// (0x0004955e) cam6_timer_pane_t1

0xd773,	// (0x0004956c) cam6_zoom_cont_pane

0xd77b,	// (0x00049574) cam6_zoom_pane_g1

0xd783,	// (0x0004957c) cam6_zoom_pane_g2

0xa1f6,	// (0x00045fef) cam6_zoom_pane_g3

0x0002,

0xfae8,	// (0x0004b8e1) cam6_zoom_pane_g

0x1158,	// (0x0003cf51) cam6_battery_pane_g1

0x1158,	// (0x0003cf51) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x0004b1d1) cam6_battery_pane_g

0xd78b,	// (0x00049584) cam6_zoom_cont_pane_g1

0xd794,	// (0x0004958d) cam6_zoom_cont_pane_g2

0xd79d,	// (0x00049596) cam6_zoom_cont_pane_g3

0x0002,

0xfaef,	// (0x0004b8e8) cam6_zoom_cont_pane_g

0xa210,	// (0x00046009) cam6_mode_pane_cp_ParamLimits

0xa210,	// (0x00046009) cam6_mode_pane_cp

0xa18a,	// (0x00045f83) cam6_zoom_pane_cp_ParamLimits

0xa18a,	// (0x00045f83) cam6_zoom_pane_cp

0xa222,	// (0x0004601b) vid6_image_uncrop_cif_pane_ParamLimits

0xa222,	// (0x0004601b) vid6_image_uncrop_cif_pane

0xa232,	// (0x0004602b) vid6_image_uncrop_nhd_pane_ParamLimits

0xa232,	// (0x0004602b) vid6_image_uncrop_nhd_pane

0xa147,	// (0x00045f40) vid6_image_uncrop_vga_pane_ParamLimits

0xa147,	// (0x00045f40) vid6_image_uncrop_vga_pane

0xa241,	// (0x0004603a) vid6_image_uncrop_wvga_pane_ParamLimits

0xa241,	// (0x0004603a) vid6_image_uncrop_wvga_pane

0xa250,	// (0x00046049) vid6_indi_pane_ParamLimits

0xa250,	// (0x00046049) vid6_indi_pane

0xc2cb,	// (0x000480c4) bg_tb_trans_pane_cp09_ParamLimits

0xc2cb,	// (0x000480c4) bg_tb_trans_pane_cp09

0xd7b5,	// (0x000495ae) cam6_battery_pane_cp_ParamLimits

0xd7b5,	// (0x000495ae) cam6_battery_pane_cp

0xd7c1,	// (0x000495ba) vid6_indi_pane_g1_ParamLimits

0xd7c1,	// (0x000495ba) vid6_indi_pane_g1

0xd7d3,	// (0x000495cc) vid6_indi_pane_g2_ParamLimits

0xd7d3,	// (0x000495cc) vid6_indi_pane_g2

0xd7e5,	// (0x000495de) vid6_indi_pane_g3_ParamLimits

0xd7e5,	// (0x000495de) vid6_indi_pane_g3

0xd7fa,	// (0x000495f3) vid6_indi_pane_g4_ParamLimits

0xd7fa,	// (0x000495f3) vid6_indi_pane_g4

0xd80f,	// (0x00049608) vid6_indi_pane_g5_ParamLimits

0xd80f,	// (0x00049608) vid6_indi_pane_g5

0x0004,

0xfaf6,	// (0x0004b8ef) vid6_indi_pane_g_ParamLimits

0xfaf6,	// (0x0004b8ef) vid6_indi_pane_g

0xd829,	// (0x00049622) vid6_indi_pane_t1_ParamLimits

0xd829,	// (0x00049622) vid6_indi_pane_t1

0xd83f,	// (0x00049638) vid6_indi_pane_t2_ParamLimits

0xd83f,	// (0x00049638) vid6_indi_pane_t2

0xd867,	// (0x00049660) vid6_indi_pane_t3_ParamLimits

0xd867,	// (0x00049660) vid6_indi_pane_t3

0xd88f,	// (0x00049688) vid6_indi_pane_t4_ParamLimits

0xd88f,	// (0x00049688) vid6_indi_pane_t4

0x0003,

0xfb01,	// (0x0004b8fa) vid6_indi_pane_t_ParamLimits

0xfb01,	// (0x0004b8fa) vid6_indi_pane_t

0xd8b3,	// (0x000496ac) wait_bar_pane_cp08

0xa268,	// (0x00046061) main_cset_text2_pane_t1_ParamLimits

0xa268,	// (0x00046061) main_cset_text2_pane_t1

0xa1fe,	// (0x00045ff7) listscroll_gen_pane_cp06_t1_ParamLimits

0xa1fe,	// (0x00045ff7) listscroll_gen_pane_cp06_t1

0x07fd,	// (0x0003c5f6) main_cam6_set_pane

0x0efe,	// (0x0003ccf7) bg_tb_trans_pane_cp06_ParamLimits

0xeed9,	// (0x0004acd2) cam4_indicators_pane_g1_ParamLimits

0xeeea,	// (0x0004ace3) cam4_indicators_pane_g2_ParamLimits

0xf879,	// (0x0004b672) cam4_indicators_pane_g_ParamLimits

0xef08,	// (0x0004ad01) cam4_indicators_pane_t1_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_tb_trans_pane_cp07_ParamLimits

0xef34,	// (0x0004ad2d) vid4_indicators_pane_g1_ParamLimits

0xef48,	// (0x0004ad41) vid4_indicators_pane_g2_ParamLimits

0xef5c,	// (0x0004ad55) vid4_indicators_pane_g3_ParamLimits

0xef6d,	// (0x0004ad66) vid4_indicators_pane_g4_ParamLimits

0xf88b,	// (0x0004b684) vid4_indicators_pane_g_ParamLimits

0xef8b,	// (0x0004ad84) vid4_indicators_pane_t1_ParamLimits

0xf006,	// (0x0004adff) vid4_progress_pane_g1_ParamLimits

0xf016,	// (0x0004ae0f) vid4_progress_pane_g2_ParamLimits

0x9d83,	// (0x00045b7c) vid4_progress_pane_g3_ParamLimits

0xf026,	// (0x0004ae1f) vid4_progress_pane_g4_ParamLimits

0xfa32,	// (0x0004b82b) vid4_progress_pane_g_ParamLimits

0x9d95,	// (0x00045b8e) vid4_progress_pane_t1_ParamLimits

0xf03e,	// (0x0004ae37) vid4_progress_pane_t2_ParamLimits

0xf053,	// (0x0004ae4c) vid4_progress_pane_t3_ParamLimits

0xfa3d,	// (0x0004b836) vid4_progress_pane_t_ParamLimits

0x9dad,	// (0x00045ba6) wait_bar_pane_cp07_ParamLimits

0xa285,	// (0x0004607e) main_cam6_set_pane_g2_ParamLimits

0xa285,	// (0x0004607e) main_cam6_set_pane_g2

0xa2a9,	// (0x000460a2) main_cset6_listscroll_pane_ParamLimits

0xa2a9,	// (0x000460a2) main_cset6_listscroll_pane

0xa2c9,	// (0x000460c2) main_cset6_slider_pane_ParamLimits

0xa2c9,	// (0x000460c2) main_cset6_slider_pane

0xa2df,	// (0x000460d8) main_cset6_text2_pane_ParamLimits

0xa2df,	// (0x000460d8) main_cset6_text2_pane

0xd8c2,	// (0x000496bb) main_cset6_text_pane

0xd8ca,	// (0x000496c3) main_cset_list_pane_copy1_ParamLimits

0xd8ca,	// (0x000496c3) main_cset_list_pane_copy1

0xd8da,	// (0x000496d3) scroll_pane_cp028_copy1

0xa2ed,	// (0x000460e6) cset_list_set_pane_copy1

0xa2fe,	// (0x000460f7) aid_position_infowindow_above_copy1

0xa306,	// (0x000460ff) aid_position_infowindow_below_copy1

0x3175,	// (0x0003ef6e) cset_list_set_pane_g1_copy1

0x317d,	// (0x0003ef76) cset_list_set_pane_g3_copy1_ParamLimits

0x317d,	// (0x0003ef76) cset_list_set_pane_g3_copy1

0x318c,	// (0x0003ef85) cset_list_set_pane_t1_copy1_ParamLimits

0x318c,	// (0x0003ef85) cset_list_set_pane_t1_copy1

0x0ea5,	// (0x0003cc9e) list_highlight_pane_cp021_copy1_ParamLimits

0x0ea5,	// (0x0003cc9e) list_highlight_pane_cp021_copy1

0xd8e3,	// (0x000496dc) cset6_slider_pane_ParamLimits

0xd8e3,	// (0x000496dc) cset6_slider_pane

0xd90f,	// (0x00049708) main_cset6_slider_pane_g1_ParamLimits

0xd90f,	// (0x00049708) main_cset6_slider_pane_g1

0xa30e,	// (0x00046107) main_cset6_slider_pane_g2_ParamLimits

0xa30e,	// (0x00046107) main_cset6_slider_pane_g2

0xd937,	// (0x00049730) main_cset6_slider_pane_g3_ParamLimits

0xd937,	// (0x00049730) main_cset6_slider_pane_g3

0xa336,	// (0x0004612f) main_cset6_slider_pane_g4_ParamLimits

0xa336,	// (0x0004612f) main_cset6_slider_pane_g4

0xa342,	// (0x0004613b) main_cset6_slider_pane_g5_ParamLimits

0xa342,	// (0x0004613b) main_cset6_slider_pane_g5

0xd0a2,	// (0x00048e9b) main_cset6_slider_pane_g7_ParamLimits

0xd0a2,	// (0x00048e9b) main_cset6_slider_pane_g7

0xd0ae,	// (0x00048ea7) main_cset6_slider_pane_g8_ParamLimits

0xd0ae,	// (0x00048ea7) main_cset6_slider_pane_g8

0x9543,	// (0x0004533c) main_cset6_slider_pane_g9_ParamLimits

0x9543,	// (0x0004533c) main_cset6_slider_pane_g9

0x954f,	// (0x00045348) main_cset6_slider_pane_g10_ParamLimits

0x954f,	// (0x00045348) main_cset6_slider_pane_g10

0x955b,	// (0x00045354) main_cset6_slider_pane_g11_ParamLimits

0x955b,	// (0x00045354) main_cset6_slider_pane_g11

0x9567,	// (0x00045360) main_cset6_slider_pane_g12_ParamLimits

0x9567,	// (0x00045360) main_cset6_slider_pane_g12

0x9573,	// (0x0004536c) main_cset6_slider_pane_g13_ParamLimits

0x9573,	// (0x0004536c) main_cset6_slider_pane_g13

0x957f,	// (0x00045378) main_cset6_slider_pane_g14_ParamLimits

0x957f,	// (0x00045378) main_cset6_slider_pane_g14

0xa34e,	// (0x00046147) main_cset6_slider_pane_g15_ParamLimits

0xa34e,	// (0x00046147) main_cset6_slider_pane_g15

0x95a3,	// (0x0004539c) main_cset6_slider_pane_g16_ParamLimits

0x95a3,	// (0x0004539c) main_cset6_slider_pane_g16

0x95af,	// (0x000453a8) main_cset6_slider_pane_g17_ParamLimits

0x95af,	// (0x000453a8) main_cset6_slider_pane_g17

0x0011,

0xfb0a,	// (0x0004b903) main_cset6_slider_pane_g_ParamLimits

0xfb0a,	// (0x0004b903) main_cset6_slider_pane_g

0xd943,	// (0x0004973c) main_cset6_slider_pane_t1_ParamLimits

0xd943,	// (0x0004973c) main_cset6_slider_pane_t1

0xa37e,	// (0x00046177) main_cset6_slider_pane_t2_ParamLimits

0xa37e,	// (0x00046177) main_cset6_slider_pane_t2

0xa3a9,	// (0x000461a2) main_cset6_slider_pane_t3_ParamLimits

0xa3a9,	// (0x000461a2) main_cset6_slider_pane_t3

0xa3d4,	// (0x000461cd) main_cset6_slider_pane_t4_ParamLimits

0xa3d4,	// (0x000461cd) main_cset6_slider_pane_t4

0xa3ff,	// (0x000461f8) main_cset6_slider_pane_t5_ParamLimits

0xa3ff,	// (0x000461f8) main_cset6_slider_pane_t5

0xd984,	// (0x0004977d) main_cset6_slider_pane_t7_ParamLimits

0xd984,	// (0x0004977d) main_cset6_slider_pane_t7

0xa42a,	// (0x00046223) main_cset6_slider_pane_t8_ParamLimits

0xa42a,	// (0x00046223) main_cset6_slider_pane_t8

0xa44e,	// (0x00046247) main_cset6_slider_pane_t9_ParamLimits

0xa44e,	// (0x00046247) main_cset6_slider_pane_t9

0xa472,	// (0x0004626b) main_cset6_slider_pane_t10_ParamLimits

0xa472,	// (0x0004626b) main_cset6_slider_pane_t10

0xa496,	// (0x0004628f) main_cset6_slider_pane_t11_ParamLimits

0xa496,	// (0x0004628f) main_cset6_slider_pane_t11

0xd9ba,	// (0x000497b3) main_cset6_slider_pane_t14_ParamLimits

0xd9ba,	// (0x000497b3) main_cset6_slider_pane_t14

0xd9f3,	// (0x000497ec) main_cset6_slider_pane_t15_ParamLimits

0xd9f3,	// (0x000497ec) main_cset6_slider_pane_t15

0x000b,

0xfb2f,	// (0x0004b928) main_cset6_slider_pane_t_ParamLimits

0xfb2f,	// (0x0004b928) main_cset6_slider_pane_t

0xd1a0,	// (0x00048f99) cset_slider_pane_g1_copy1

0xd1a9,	// (0x00048fa2) cset_slider_pane_g2_copy1

0xd1b2,	// (0x00048fab) cset_slider_pane_g3_copy1

0x07fd,	// (0x0003c5f6) bg_popup_sub_pane_cp011_copy1

0xda2c,	// (0x00049825) main_cset_text_pane_g1_copy1

0xd23b,	// (0x00049034) main_cset_text_pane_t1_copy1

0xd249,	// (0x00049042) main_cset_text_pane_t2_copy1

0xd257,	// (0x00049050) main_cset_text_pane_t3_copy1

0xd265,	// (0x0004905e) main_cset_text_pane_t4_copy1

0xd273,	// (0x0004906c) main_cset_text_pane_t5_copy1

0xda34,	// (0x0004982d) main_cset_text_pane_t6_copy1

0xda42,	// (0x0004983b) main_cset_text_pane_t7_copy1

0xa268,	// (0x00046061) main_cset_text2_pane_t1_copy1

0x0ea5,	// (0x0003cc9e) main_ncimui_pane

0x7492,	// (0x0004328b) popup_query_ncimui_window_ParamLimits

0x7492,	// (0x0004328b) popup_query_ncimui_window

0xc8a5,	// (0x0004869e) field_cale_ev2_pane_g4_ParamLimits

0xc8a5,	// (0x0004869e) field_cale_ev2_pane_g4

0x87b0,	// (0x000445a9) cell_video_dialer_keypad_pane_g2_ParamLimits

0x87b0,	// (0x000445a9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf813,	// (0x0004b60c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf813,	// (0x0004b60c) cell_video_dialer_keypad_pane_g

0x87c8,	// (0x000445c1) cell_video_dialer_keypad_pane_t1

0x07fd,	// (0x0003c5f6) bg_popup_window_pane_cp012

0x6f46,	// (0x00042d3f) heading_pane_cp06

0xda6e,	// (0x00049867) ncim_query_content_pane

0x07fd,	// (0x0003c5f6) bg_popup_heading_pane_cp01

0xda76,	// (0x0004986f) ncim_heading_pane_t1

0xda84,	// (0x0004987d) ncim_indicator_popup_pane

0xda96,	// (0x0004988f) ncim_query_button_pane

0xdaaa,	// (0x000498a3) ncim_query_content_pane_t1

0xdabc,	// (0x000498b5) ncim_query_content_pane_t2

0x0005,

0xfb73,	// (0x0004b96c) ncim_query_content_pane_t

0xdaf6,	// (0x000498ef) ncim_query_list_pane

0xdb08,	// (0x00049901) ncim_query_popup_pane

0xda84,	// (0x0004987d) ncim_indicator_popup_pane_ParamLimits

0xa5e3,	// (0x000463dc) ncim_query_content_pane_g1_ParamLimits

0xa5e3,	// (0x000463dc) ncim_query_content_pane_g1

0xdaaa,	// (0x000498a3) ncim_query_content_pane_t1_ParamLimits

0xdabc,	// (0x000498b5) ncim_query_content_pane_t2_ParamLimits

0xa5ef,	// (0x000463e8) ncim_query_content_pane_t3_ParamLimits

0xa5ef,	// (0x000463e8) ncim_query_content_pane_t3

0xa617,	// (0x00046410) ncim_query_content_pane_t4_ParamLimits

0xa617,	// (0x00046410) ncim_query_content_pane_t4

0xa63f,	// (0x00046438) ncim_query_content_pane_t5_ParamLimits

0xa63f,	// (0x00046438) ncim_query_content_pane_t5

0xdace,	// (0x000498c7) ncim_query_content_pane_t6_ParamLimits

0xdace,	// (0x000498c7) ncim_query_content_pane_t6

0xfb73,	// (0x0004b96c) ncim_query_content_pane_t_ParamLimits

0xdaf6,	// (0x000498ef) ncim_query_list_pane_ParamLimits

0xdb08,	// (0x00049901) ncim_query_popup_pane_ParamLimits

0xdb1c,	// (0x00049915) wait_bar_pane_cp04

0x07fd,	// (0x0003c5f6) input_focus_pane_cp011

0xdb24,	// (0x0004991d) ncim_query_popup_pane_t1

0xdb32,	// (0x0004992b) ncim_list_query_list_pane_ParamLimits

0xdb32,	// (0x0004992b) ncim_list_query_list_pane

0x07fd,	// (0x0003c5f6) bg_button_pane_cp027

0xdb3f,	// (0x00049938) ncim_query_button_pane_g1

0x07fd,	// (0x0003c5f6) list_highlight_pane_cp012

0xdb49,	// (0x00049942) ncim_list_query_list_pane_g1

0xdb51,	// (0x0004994a) ncim_list_query_list_pane_t1

0xeef9,	// (0x0004acf2) cam4_indicators_pane_g3_ParamLimits

0xeef9,	// (0x0004acf2) cam4_indicators_pane_g3

0xef79,	// (0x0004ad72) vid4_indicators_pane_g5_ParamLimits

0xef79,	// (0x0004ad72) vid4_indicators_pane_g5

0xf032,	// (0x0004ae2b) vid4_progress_pane_g5_ParamLimits

0xf032,	// (0x0004ae2b) vid4_progress_pane_g5

0xa4ce,	// (0x000462c7) main_ncimui_pane_g1

0xa537,	// (0x00046330) ncimui_group_query_pane_ParamLimits

0xa537,	// (0x00046330) ncimui_group_query_pane

0xa57f,	// (0x00046378) ncimui_list_pane_ParamLimits

0xa57f,	// (0x00046378) ncimui_list_pane

0xa5a6,	// (0x0004639f) ncimui_text_pane_ParamLimits

0xa5a6,	// (0x0004639f) ncimui_text_pane

0xa667,	// (0x00046460) ncimui_text_pane_t1_ParamLimits

0xa667,	// (0x00046460) ncimui_text_pane_t1

0xdb5f,	// (0x00049958) ncimui_list_single_graphic_pane_ParamLimits

0xdb5f,	// (0x00049958) ncimui_list_single_graphic_pane

0xa685,	// (0x0004647e) ncimui_query_pane_ParamLimits

0xa685,	// (0x0004647e) ncimui_query_pane

0x07fd,	// (0x0003c5f6) list_highlight_pane_cp013

0xdb6f,	// (0x00049968) ncim_list_query_list_pane_t1_copy1

0xdb49,	// (0x00049942) ncim_list_single_graphic_pane_g1

0xa698,	// (0x00046491) ncim_query_button_pane_cp01

0xa6a4,	// (0x0004649d) ncim_query_entry_pane_ParamLimits

0xa6a4,	// (0x0004649d) ncim_query_entry_pane

0xa6b7,	// (0x000464b0) ncimui_query_pane_g1

0xa6c3,	// (0x000464bc) ncimui_query_pane_t1_ParamLimits

0xa6c3,	// (0x000464bc) ncimui_query_pane_t1

0x0ea5,	// (0x0003cc9e) input_focus_pane_cp012

0xdb7d,	// (0x00049976) ncim_query_entry_pane_t1

0x0f70,	// (0x0003cd69) main_im_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) main_mobtv_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) main_mobtv_pane

0xa366,	// (0x0004615f) main_cset6_slider_pane_g18_ParamLimits

0xa366,	// (0x0004615f) main_cset6_slider_pane_g18

0xa372,	// (0x0004616b) main_cset6_slider_pane_g19_ParamLimits

0xa372,	// (0x0004616b) main_cset6_slider_pane_g19

0x0f1a,	// (0x0003cd13) bg_main_mobtv_pane_ParamLimits

0x0f1a,	// (0x0003cd13) bg_main_mobtv_pane

0xa6dc,	// (0x000464d5) main_mobtv_info_pane

0xa6e5,	// (0x000464de) main_mobtv_loading_pane_ParamLimits

0xa6e5,	// (0x000464de) main_mobtv_loading_pane

0xdb8f,	// (0x00049988) main_mobtv_pg_channel_list_pane

0xdb99,	// (0x00049992) main_mobtv_pg_hdr_pane

0xa6f2,	// (0x000464eb) main_mobtv_programe_curr_pane_ParamLimits

0xa6f2,	// (0x000464eb) main_mobtv_programe_curr_pane

0xa6ff,	// (0x000464f8) main_mobtv_programe_next_pane_ParamLimits

0xa6ff,	// (0x000464f8) main_mobtv_programe_next_pane

0xdba2,	// (0x0004999b) popup_mobtv_noti_window

0x1158,	// (0x0003cf51) main_tv_pg_hdr_pane_g1

0xdbaa,	// (0x000499a3) main_tv_pg_hdr_pane_g2

0xdbb2,	// (0x000499ab) main_tv_pg_hdr_pane_g3

0xdbba,	// (0x000499b3) main_tv_pg_hdr_pane_g4

0xdbc2,	// (0x000499bb) main_tv_pg_hdr_pane_g5

0xdbcc,	// (0x000499c5) main_tv_pg_hdr_pane_g6

0xdbd6,	// (0x000499cf) main_tv_pg_hdr_pane_g7

0xdbe0,	// (0x000499d9) main_tv_pg_hdr_pane_g8

0xdbea,	// (0x000499e3) main_tv_pg_hdr_pane_g9

0xdbf4,	// (0x000499ed) main_tv_pg_hdr_pane_g10

0xdbfe,	// (0x000499f7) main_tv_pg_hdr_pane_g11

0x000a,

0xfb80,	// (0x0004b979) main_tv_pg_hdr_pane_g

0xdc08,	// (0x00049a01) main_tv_pg_hdr_pane_t1

0xdc16,	// (0x00049a0f) main_tv_pg_hdr_pane_t2

0xdc24,	// (0x00049a1d) main_tv_pg_hdr_pane_t3

0xdc34,	// (0x00049a2d) main_tv_pg_hdr_pane_t4

0xdc44,	// (0x00049a3d) main_tv_pg_hdr_pane_t5

0x0004,

0xfb97,	// (0x0004b990) main_tv_pg_hdr_pane_t

0xdc54,	// (0x00049a4d) single_mobtv_pg_channel_pane_ParamLimits

0xdc54,	// (0x00049a4d) single_mobtv_pg_channel_pane

0xdc66,	// (0x00049a5f) single_mobtv_pg_channel_table_pane

0xdc6f,	// (0x00049a68) single_mobtv_pg_channel_thumb_pane

0xdc78,	// (0x00049a71) single_tv_pg_channel_pane_g1

0xdc81,	// (0x00049a7a) single_tv_pg_channel_pane_g2

0x0001,

0xfba2,	// (0x0004b99b) single_tv_pg_channel_pane_g

0x0efe,	// (0x0003ccf7) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0efe,	// (0x0003ccf7) bg_single_mobtv_pg_channel_thumb_pane

0xdc8a,	// (0x00049a83) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdc8a,	// (0x00049a83) single_mobtv_pg_channel_thumb_pane_g1

0xdc98,	// (0x00049a91) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdc98,	// (0x00049a91) single_mobtv_pg_channel_thumb_pane_g2

0xdca4,	// (0x00049a9d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdca4,	// (0x00049a9d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfba7,	// (0x0004b9a0) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfba7,	// (0x0004b9a0) single_mobtv_pg_channel_thumb_pane_g

0xdcb0,	// (0x00049aa9) single_mobtv_pg_channel_thumb_pane_t1

0xdcbe,	// (0x00049ab7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbae,	// (0x0004b9a7) single_mobtv_pg_channel_thumb_pane_t

0x1158,	// (0x0003cf51) bg_single_mobtv_pg_channel_table_pane_g1

0x1158,	// (0x0003cf51) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x0004b1d1) bg_single_mobtv_pg_channel_table_pane_g

0xdccc,	// (0x00049ac5) single_mobtv_pg_channel_table_pane_t1

0xdcda,	// (0x00049ad3) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb3,	// (0x0004b9ac) single_mobtv_pg_channel_table_pane_t

0xa714,	// (0x0004650d) main_mobtv_info_pane_g1_ParamLimits

0xa714,	// (0x0004650d) main_mobtv_info_pane_g1

0xa732,	// (0x0004652b) main_mobtv_info_pane_t1_ParamLimits

0xa732,	// (0x0004652b) main_mobtv_info_pane_t1

0xa7aa,	// (0x000465a3) main_mobtv_info_pane_t2_ParamLimits

0xa7aa,	// (0x000465a3) main_mobtv_info_pane_t2

0x0002,

0xfbbd,	// (0x0004b9b6) main_mobtv_info_pane_t_ParamLimits

0xfbbd,	// (0x0004b9b6) main_mobtv_info_pane_t

0xa839,	// (0x00046632) wait_bar_pane_cp05

0xa84b,	// (0x00046644) main_mobtv_loading_pane_g1_ParamLimits

0xa84b,	// (0x00046644) main_mobtv_loading_pane_g1

0xa85e,	// (0x00046657) main_mobtv_loading_pane_g2_ParamLimits

0xa85e,	// (0x00046657) main_mobtv_loading_pane_g2

0xa86a,	// (0x00046663) main_mobtv_loading_pane_g3_ParamLimits

0xa86a,	// (0x00046663) main_mobtv_loading_pane_g3

0x0002,

0xfbc4,	// (0x0004b9bd) main_mobtv_loading_pane_g_ParamLimits

0xfbc4,	// (0x0004b9bd) main_mobtv_loading_pane_g

0xdce8,	// (0x00049ae1) main_mobtv_loading_pane_t1_ParamLimits

0xdce8,	// (0x00049ae1) main_mobtv_loading_pane_t1

0xdd00,	// (0x00049af9) main_mobtv_loading_pane_t2_ParamLimits

0xdd00,	// (0x00049af9) main_mobtv_loading_pane_t2

0x0001,

0xfbcb,	// (0x0004b9c4) main_mobtv_loading_pane_t_ParamLimits

0xfbcb,	// (0x0004b9c4) main_mobtv_loading_pane_t

0xa87d,	// (0x00046676) wait_bar_pane_cp06_ParamLimits

0xa87d,	// (0x00046676) wait_bar_pane_cp06

0xdd24,	// (0x00049b1d) main_mobtv_programe_curr_pane_t1

0xdd32,	// (0x00049b2b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd0,	// (0x0004b9c9) main_mobtv_programe_curr_pane_t

0xdd40,	// (0x00049b39) main_mobtv_programe_next_pane_t1

0xdd4e,	// (0x00049b47) main_mobtv_programe_next_pane_t2

0xdd5c,	// (0x00049b55) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd5,	// (0x0004b9ce) main_mobtv_programe_next_pane_t

0x07fd,	// (0x0003c5f6) bg_popup_mobtv_noti_window_pane

0xdd6a,	// (0x00049b63) popup_mobtv_noti_window_g1

0xdd72,	// (0x00049b6b) popup_mobtv_noti_window_t1

0xdd80,	// (0x00049b79) popup_mobtv_noti_window_t2

0x0001,

0xfbdc,	// (0x0004b9d5) popup_mobtv_noti_window_t

0x1158,	// (0x0003cf51) bg_popup_mobtv_noti_window_pane_g1

0x07fd,	// (0x0003c5f6) sc_clock_pane

0x07fd,	// (0x0003c5f6) main_fs_bigclock_pane

0x9fbc,	// (0x00045db5) blid2_tripm_pane_t4_ParamLimits

0x9fbc,	// (0x00045db5) blid2_tripm_pane_t4

0xa88c,	// (0x00046685) sc_clock_pane_g1_ParamLimits

0xa88c,	// (0x00046685) sc_clock_pane_g1

0xa89e,	// (0x00046697) sc_clock_pane_t1_ParamLimits

0xa89e,	// (0x00046697) sc_clock_pane_t1

0xa8c0,	// (0x000466b9) sc_clock_pane_t2_ParamLimits

0xa8c0,	// (0x000466b9) sc_clock_pane_t2

0xa8d8,	// (0x000466d1) sc_clock_pane_t3_ParamLimits

0xa8d8,	// (0x000466d1) sc_clock_pane_t3

0x0004,

0xfbe1,	// (0x0004b9da) sc_clock_pane_t_ParamLimits

0xfbe1,	// (0x0004b9da) sc_clock_pane_t

0xb2a1,	// (0x0004709a) main_fs_bigclock_indicator_pane_ParamLimits

0xb2a1,	// (0x0004709a) main_fs_bigclock_indicator_pane

0xa97e,	// (0x00046777) main_fs_bigclock_pane_g1_ParamLimits

0xa97e,	// (0x00046777) main_fs_bigclock_pane_g1

0xb2ad,	// (0x000470a6) main_fs_bigclock_pane_t1_ParamLimits

0xb2ad,	// (0x000470a6) main_fs_bigclock_pane_t1

0xb2bf,	// (0x000470b8) main_fs_bigclock_pane_t2_ParamLimits

0xb2bf,	// (0x000470b8) main_fs_bigclock_pane_t2

0xb2d3,	// (0x000470cc) main_fs_bigclock_pane_t3_ParamLimits

0xb2d3,	// (0x000470cc) main_fs_bigclock_pane_t3

0x0002,

0xfd72,	// (0x0004bb6b) main_fs_bigclock_pane_t_ParamLimits

0xfd72,	// (0x0004bb6b) main_fs_bigclock_pane_t

0xe8f5,	// (0x0004a6ee) main_fs_bigclock_indicator_pane_g1

0xda9e,	// (0x00049897) ncim_query_content_pane_g2_ParamLimits

0xda9e,	// (0x00049897) ncim_query_content_pane_g2

0x0001,

0xfb6e,	// (0x0004b967) ncim_query_content_pane_g_ParamLimits

0xfb6e,	// (0x0004b967) ncim_query_content_pane_g

0xa8f1,	// (0x000466ea) sc_clock_pane_t4_ParamLimits

0xa8f1,	// (0x000466ea) sc_clock_pane_t4

0x0ea5,	// (0x0003cc9e) main_radioblah_pane

0xee6b,	// (0x0004ac64) cell_call4_button_pane_t1_copy1_ParamLimits

0xee6b,	// (0x0004ac64) cell_call4_button_pane_t1_copy1

0xa4e6,	// (0x000462df) main_ncimui_pane_t1_ParamLimits

0xa4e6,	// (0x000462df) main_ncimui_pane_t1

0xa500,	// (0x000462f9) main_ncimui_pane_t2_ParamLimits

0xa500,	// (0x000462f9) main_ncimui_pane_t2

0x0002,

0xfb67,	// (0x0004b960) main_ncimui_pane_t_ParamLimits

0xfb67,	// (0x0004b960) main_ncimui_pane_t

0xdec5,	// (0x00049cbe) main_radioblah_anim_pane_ParamLimits

0xdec5,	// (0x00049cbe) main_radioblah_anim_pane

0xded6,	// (0x00049ccf) main_radioblah_info_pane_ParamLimits

0xded6,	// (0x00049ccf) main_radioblah_info_pane

0xdeea,	// (0x00049ce3) main_radioblah_pane_t1_ParamLimits

0xdeea,	// (0x00049ce3) main_radioblah_pane_t1

0xdf06,	// (0x00049cff) main_radioblah_pane_t2_ParamLimits

0xdf06,	// (0x00049cff) main_radioblah_pane_t2

0x0003,

0xfc02,	// (0x0004b9fb) main_radioblah_pane_t_ParamLimits

0xfc02,	// (0x0004b9fb) main_radioblah_pane_t

0xa9dd,	// (0x000467d6) main_radioblah_rocker_ctrl_pane_ParamLimits

0xa9dd,	// (0x000467d6) main_radioblah_rocker_ctrl_pane

0xdf4e,	// (0x00049d47) main_radioblah_info_pane_t1_ParamLimits

0xdf4e,	// (0x00049d47) main_radioblah_info_pane_t1

0xaa35,	// (0x0004682e) main_radioblah_info_pane_t2_ParamLimits

0xaa35,	// (0x0004682e) main_radioblah_info_pane_t2

0x0003,

0xfc0b,	// (0x0004ba04) main_radioblah_info_pane_t_ParamLimits

0xfc0b,	// (0x0004ba04) main_radioblah_info_pane_t

0x1158,	// (0x0003cf51) main_radioblah_rocker_ctrl_pane_g1

0xaae5,	// (0x000468de) main_radioblah_rocker_ctrl_pane_g2

0xaaed,	// (0x000468e6) main_radioblah_rocker_ctrl_pane_g3

0xaaf5,	// (0x000468ee) main_radioblah_rocker_ctrl_pane_g4

0xaafd,	// (0x000468f6) main_radioblah_rocker_ctrl_pane_g5

0xab05,	// (0x000468fe) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc14,	// (0x0004ba0d) main_radioblah_rocker_ctrl_pane_g

0xa268,	// (0x00046061) main_cset_text2_pane_t1_copy1_ParamLimits

0xeec9,	// (0x0004acc2) cam4_image_uncrop_qvga_pane

0xef22,	// (0x0004ad1b) vid4_image_uncrop_qcif_pane

0xf068,	// (0x0004ae61) cam6_image_uncrop_qvga_pane_ParamLimits

0xf068,	// (0x0004ae61) cam6_image_uncrop_qvga_pane

0xd7a5,	// (0x0004959e) vid6_image_uncrop_qcif_pane_ParamLimits

0xd7a5,	// (0x0004959e) vid6_image_uncrop_qcif_pane

0x07fd,	// (0x0003c5f6) bg_popup_preview_window_pane_cp03

0xda50,	// (0x00049849) list_cset_text2_pane

0xda58,	// (0x00049851) main_cset6_text2_pane_g1

0xda60,	// (0x00049859) main_cset6_text2_pane_t1

0xab0d,	// (0x00046906) list_cset_text2_pane_t1_ParamLimits

0xab0d,	// (0x00046906) list_cset_text2_pane_t1

0x0ea5,	// (0x0003cc9e) main_radioblah_pane_ParamLimits

0xa825,	// (0x0004661e) main_mobtv_info_pane_t3_ParamLimits

0xa825,	// (0x0004661e) main_mobtv_info_pane_t3

0xa9cb,	// (0x000467c4) main_radioblah_pane_g1

0xaa05,	// (0x000467fe) main_radioblah_info_pane_g1

0xaa8a,	// (0x00046883) main_radioblah_info_pane_t3_ParamLimits

0xaa8a,	// (0x00046883) main_radioblah_info_pane_t3

0x533d,	// (0x00041136) highlight_cell_cale_month_pane_ParamLimits

0x533d,	// (0x00041136) highlight_cell_cale_month_pane

0x07fd,	// (0x0003c5f6) main_phob_fisheye_pane

0xc91a,	// (0x00048713) scroll_pane_cp0031_ParamLimits

0xc91a,	// (0x00048713) scroll_pane_cp0031

0xd8b3,	// (0x000496ac) wait_bar_pane_cp08_ParamLimits

0xa2ed,	// (0x000460e6) cset_list_set_pane_copy1_ParamLimits

0xdf88,	// (0x00049d81) highlight_cell_cale_month_pane_g1

0xab26,	// (0x0004691f) highlight_cell_cale_month_pane_t1

0xd503,	// (0x000492fc) list_gen_pane_cp01

0xd08d,	// (0x00048e86) scroll_pane_01

0xab34,	// (0x0004692d) list_single_double_fisheye_pane

0x31be,	// (0x0003efb7) list_double_fisheye_pane_g1_ParamLimits

0x31be,	// (0x0003efb7) list_double_fisheye_pane_g1

0x31ca,	// (0x0003efc3) list_double_fisheye_pane_g2_ParamLimits

0x31ca,	// (0x0003efc3) list_double_fisheye_pane_g2

0xab3d,	// (0x00046936) list_double_fisheye_pane_g3_ParamLimits

0xab3d,	// (0x00046936) list_double_fisheye_pane_g3

0x0004,

0xfc21,	// (0x0004ba1a) list_double_fisheye_pane_g_ParamLimits

0xfc21,	// (0x0004ba1a) list_double_fisheye_pane_g

0x31fb,	// (0x0003eff4) list_double_fisheye_pane_t1_ParamLimits

0x31fb,	// (0x0003eff4) list_double_fisheye_pane_t1

0x3216,	// (0x0003f00f) list_double_fisheye_pane_t2_ParamLimits

0x3216,	// (0x0003f00f) list_double_fisheye_pane_t2

0x0001,

0xfc2c,	// (0x0004ba25) list_double_fisheye_pane_t_ParamLimits

0xfc2c,	// (0x0004ba25) list_double_fisheye_pane_t

0x07fd,	// (0x0003c5f6) main_call5_pane

0xa91c,	// (0x00046715) sc_swipe_pane_ParamLimits

0xa91c,	// (0x00046715) sc_swipe_pane

0xab5c,	// (0x00046955) call5_image_pane_ParamLimits

0xab5c,	// (0x00046955) call5_image_pane

0xab79,	// (0x00046972) call5_swipe_1_pane_ParamLimits

0xab79,	// (0x00046972) call5_swipe_1_pane

0xab8c,	// (0x00046985) call5_swipe_2_pane_ParamLimits

0xab8c,	// (0x00046985) call5_swipe_2_pane

0xabb7,	// (0x000469b0) popup_call5_audio_first_window_ParamLimits

0xabb7,	// (0x000469b0) popup_call5_audio_first_window

0x0efe,	// (0x0003ccf7) call5_swipe_1_pane_g1_ParamLimits

0x0efe,	// (0x0003ccf7) call5_swipe_1_pane_g1

0xdf90,	// (0x00049d89) call5_swipe_1_pane_g2_ParamLimits

0xdf90,	// (0x00049d89) call5_swipe_1_pane_g2

0x0001,

0xfc31,	// (0x0004ba2a) call5_swipe_1_pane_g_ParamLimits

0xfc31,	// (0x0004ba2a) call5_swipe_1_pane_g

0xdf9c,	// (0x00049d95) call5_swipe_1_pane_t1_ParamLimits

0xdf9c,	// (0x00049d95) call5_swipe_1_pane_t1

0x0efe,	// (0x0003ccf7) call5_swipe_2_pane_g1_ParamLimits

0x0efe,	// (0x0003ccf7) call5_swipe_2_pane_g1

0xdfb1,	// (0x00049daa) call5_swipe_2_pane_g2_ParamLimits

0xdfb1,	// (0x00049daa) call5_swipe_2_pane_g2

0x0001,

0xfc36,	// (0x0004ba2f) call5_swipe_2_pane_g_ParamLimits

0xfc36,	// (0x0004ba2f) call5_swipe_2_pane_g

0xdfbd,	// (0x00049db6) call5_swipe_2_pane_t1_ParamLimits

0xdfbd,	// (0x00049db6) call5_swipe_2_pane_t1

0xdfd2,	// (0x00049dcb) sc_swipe_pane_g1_ParamLimits

0xdfd2,	// (0x00049dcb) sc_swipe_pane_g1

0xdfdf,	// (0x00049dd8) sc_swipe_pane_g2_ParamLimits

0xdfdf,	// (0x00049dd8) sc_swipe_pane_g2

0x0001,

0xfc3b,	// (0x0004ba34) sc_swipe_pane_g_ParamLimits

0xfc3b,	// (0x0004ba34) sc_swipe_pane_g

0xdfeb,	// (0x00049de4) sc_swipe_pane_t1_ParamLimits

0xdfeb,	// (0x00049de4) sc_swipe_pane_t1

0x07fd,	// (0x0003c5f6) main_cmail_launcher_pane

0xabc8,	// (0x000469c1) aid_size_cell_cmail_l_ParamLimits

0xabc8,	// (0x000469c1) aid_size_cell_cmail_l

0xabd6,	// (0x000469cf) grid_cmail_l_pane_ParamLimits

0xabd6,	// (0x000469cf) grid_cmail_l_pane

0xabf0,	// (0x000469e9) cell_cmail_l_pane_ParamLimits

0xabf0,	// (0x000469e9) cell_cmail_l_pane

0xe000,	// (0x00049df9) cell_cmail_l_pane_g1_ParamLimits

0xe000,	// (0x00049df9) cell_cmail_l_pane_g1

0xe00c,	// (0x00049e05) cell_cmail_l_pane_t1_ParamLimits

0xe00c,	// (0x00049e05) cell_cmail_l_pane_t1

0xe022,	// (0x00049e1b) cell_cmail_l_pane_t2_ParamLimits

0xe022,	// (0x00049e1b) cell_cmail_l_pane_t2

0x0001,

0xfc40,	// (0x0004ba39) cell_cmail_l_pane_t_ParamLimits

0xfc40,	// (0x0004ba39) cell_cmail_l_pane_t

0x0ea5,	// (0x0003cc9e) grid_highlight_pane_cp018_ParamLimits

0x0ea5,	// (0x0003cc9e) grid_highlight_pane_cp018

0x3790,	// (0x0003f589) main2_pane_ParamLimits

0x3790,	// (0x0003f589) main2_pane

0x0fff,	// (0x0003cdf8) popup_sp_fs_action_menu_bg_pane_g1

0x1007,	// (0x0003ce00) popup_sp_fs_action_menu_bg_pane_g2

0x100f,	// (0x0003ce08) popup_sp_fs_action_menu_bg_pane_g3

0x1017,	// (0x0003ce10) popup_sp_fs_action_menu_bg_pane_g4

0x101f,	// (0x0003ce18) popup_sp_fs_action_menu_bg_pane_g5

0x1027,	// (0x0003ce20) popup_sp_fs_action_menu_bg_pane_g6

0x102f,	// (0x0003ce28) popup_sp_fs_action_menu_bg_pane_g7

0x1037,	// (0x0003ce30) popup_sp_fs_action_menu_bg_pane_g8

0x103f,	// (0x0003ce38) popup_sp_fs_action_menu_bg_pane_g9

0x1047,	// (0x0003ce40) popup_sp_fs_action_menu_bg_pane_g10

0x1047,	// (0x0003ce40) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x0004af3e) popup_sp_fs_action_menu_bg_pane_g

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g3_g1

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g3_g2

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x0004afec) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x0004afec) list_medium_line_x2_t3_g3_g

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g3_t1

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g3_t2

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x0004aff3) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x0004aff3) list_medium_line_x2_t3_g3_t

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g2_g1

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x0004affa) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x0004affa) list_medium_line_x2_t3_g2_g

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g2_t1

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g2_t2

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x0004aff3) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x0004aff3) list_medium_line_x2_t3_g2_t

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g1

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g2

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g3

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x0004afff) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x0004afff) list_medium_line_x2_t4_g4_g

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t1

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t2

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t3

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0004b008) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0004b008) list_medium_line_x2_t4_g4_t

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g1

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g2

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g3

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x0004afff) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x0004afff) list_medium_line_x2_t2_g4_g

0x1172,	// (0x0003cf6b) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t2_g4_t1

0x1172,	// (0x0003cf6b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x0004afcf) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x0004afcf) list_medium_line_x2_t2_g4_t

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g3_g1

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g3_g2

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x0004afec) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x0004afec) list_medium_line_x2_t2_g3_g

0x1172,	// (0x0003cf6b) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t2_g3_t1

0x1172,	// (0x0003cf6b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x0004afcf) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x0004afcf) list_medium_line_x2_t2_g3_t

0x548f,	// (0x00041288) main_sp_fs_list_pane_ParamLimits

0x548f,	// (0x00041288) main_sp_fs_list_pane

0x549b,	// (0x00041294) sp_fs_scroll_pane_ParamLimits

0x549b,	// (0x00041294) sp_fs_scroll_pane

0x169b,	// (0x0003d494) list_medium_line_x2_t3_t1

0x169b,	// (0x0003d494) list_medium_line_x2_t3_t2

0x169b,	// (0x0003d494) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x0004b0b5) list_medium_line_x2_t3_t

0x169b,	// (0x0003d494) list_medium_line_x3_t4_t1

0x169b,	// (0x0003d494) list_medium_line_x3_t4_t2

0x169b,	// (0x0003d494) list_medium_line_x3_t4_t3

0x169b,	// (0x0003d494) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x0004b0bc) list_medium_line_x3_t4_t

0x169b,	// (0x0003d494) list_medium_line_x4_t5_t1

0x169b,	// (0x0003d494) list_medium_line_x4_t5_t2

0x169b,	// (0x0003d494) list_medium_line_x4_t5_t3

0x169b,	// (0x0003d494) list_medium_line_x4_t5_t4

0x169b,	// (0x0003d494) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x0004b0c5) list_medium_line_x4_t5_t

0x0efe,	// (0x0003ccf7) list_medium_line_t4_g4_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t4_g4_g1

0x0efe,	// (0x0003ccf7) list_medium_line_t4_g4_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t4_g4_g2

0x0efe,	// (0x0003ccf7) list_medium_line_t4_g4_g3_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t4_g4_g3

0x0efe,	// (0x0003ccf7) list_medium_line_t4_g4_g4_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x0004afff) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x0004afff) list_medium_line_t4_g4_g

0x1172,	// (0x0003cf6b) list_medium_line_t4_g4_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t4_g4_t1

0x1172,	// (0x0003cf6b) list_medium_line_t4_g4_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t4_g4_t2

0x1172,	// (0x0003cf6b) list_medium_line_t4_g4_t3_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t4_g4_t3

0x1172,	// (0x0003cf6b) list_medium_line_t4_g4_t4_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0004b008) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0004b008) list_medium_line_t4_g4_t

0x5536,	// (0x0004132f) chi_dic_find_pane_g1

0x725c,	// (0x00043055) main_tport_pane

0x169b,	// (0x0003d494) list_medium_line_plain_t1

0x0efe,	// (0x0003ccf7) list_medium_line_t2_g2_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t2_g2_g1

0x0efe,	// (0x0003ccf7) list_medium_line_t2_g2_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x0004affa) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x0004affa) list_medium_line_t2_g2_g

0x1172,	// (0x0003cf6b) list_medium_line_t2_g2_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t2_g2_t1

0x1172,	// (0x0003cf6b) list_medium_line_t2_g2_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x0004afcf) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x0004afcf) list_medium_line_t2_g2_t

0xd50c,	// (0x00049305) aid_sp_fs_list_icon_a_sm

0xd514,	// (0x0004930d) aid_sp_fs_list_icon_d

0xd51c,	// (0x00049315) aid_sp_fs_text_primary

0xd525,	// (0x0004931e) aid_sp_fs_text_secondary

0x07fd,	// (0x0003c5f6) list_medium_line

0x07fd,	// (0x0003c5f6) list_medium_line_g2

0x07fd,	// (0x0003c5f6) list_medium_line_g3

0x07fd,	// (0x0003c5f6) list_medium_line_plain

0x07fd,	// (0x0003c5f6) list_medium_line_plain_t2

0x07fd,	// (0x0003c5f6) list_medium_line_plain_t3

0x07fd,	// (0x0003c5f6) list_medium_line_right_icon

0x07fd,	// (0x0003c5f6) list_medium_line_right_iconx2

0x07fd,	// (0x0003c5f6) list_medium_line_t2

0x07fd,	// (0x0003c5f6) list_medium_line_t2_g2

0x07fd,	// (0x0003c5f6) list_medium_line_t2_g3

0x07fd,	// (0x0003c5f6) list_medium_line_t2_right_icon

0x07fd,	// (0x0003c5f6) list_medium_line_t2_right_iconx2

0x07fd,	// (0x0003c5f6) list_medium_line_t3

0x07fd,	// (0x0003c5f6) list_medium_line_t3_g2

0x07fd,	// (0x0003c5f6) list_medium_line_t3_g3

0x07fd,	// (0x0003c5f6) list_medium_line_t3_right_iconx2

0x07fd,	// (0x0003c5f6) list_medium_line_t4_g4

0x07fd,	// (0x0003c5f6) list_medium_line_x2

0x07fd,	// (0x0003c5f6) list_medium_line_x2_t2_g2

0x07fd,	// (0x0003c5f6) list_medium_line_x2_t2_g3

0x07fd,	// (0x0003c5f6) list_medium_line_x2_t2_g4

0x07fd,	// (0x0003c5f6) list_medium_line_x2_t3

0x07fd,	// (0x0003c5f6) list_medium_line_x2_t3_g2

0x07fd,	// (0x0003c5f6) list_medium_line_x2_t3_g3

0x07fd,	// (0x0003c5f6) list_medium_line_x2_t3_g4

0x07fd,	// (0x0003c5f6) list_medium_line_x2_t4_g2

0x07fd,	// (0x0003c5f6) list_medium_line_x2_t4_g4

0x07fd,	// (0x0003c5f6) list_medium_line_x3

0x07fd,	// (0x0003c5f6) list_medium_line_x3_t4

0x07fd,	// (0x0003c5f6) list_medium_line_x3_t4_g4

0x07fd,	// (0x0003c5f6) list_medium_line_x4_t4

0x07fd,	// (0x0003c5f6) list_medium_line_x4_t4_g7

0x07fd,	// (0x0003c5f6) list_medium_line_x4_t5

0x3161,	// (0x0003ef5a) list_single_fs_dyc_pane_ParamLimits

0x3161,	// (0x0003ef5a) list_single_fs_dyc_pane

0x0efe,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g1

0x0efe,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g2

0x0efe,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g3

0x0efe,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g4

0x0efe,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g5

0x0efe,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x4_t4_g7_g6

0x0f0c,	// (0x0003cd05) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0f0c,	// (0x0003cd05) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb48,	// (0x0004b941) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb48,	// (0x0004b941) list_medium_line_x4_t4_g7_g

0x1172,	// (0x0003cf6b) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x4_t4_g7_t1

0x1172,	// (0x0003cf6b) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x4_t4_g7_t2

0x1172,	// (0x0003cf6b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x4_t4_g7_t3

0x112a,	// (0x0003cf23) list_medium_line_x4_t4_g7_t4_ParamLimits

0x112a,	// (0x0003cf23) list_medium_line_x4_t4_g7_t4

0x112a,	// (0x0003cf23) list_medium_line_x4_t4_g7_t5_ParamLimits

0x112a,	// (0x0003cf23) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb57,	// (0x0004b950) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb57,	// (0x0004b950) list_medium_line_x4_t4_g7_t

0x31a1,	// (0x0003ef9a) list_single_dyc_row_pane_ParamLimits

0x31a1,	// (0x0003ef9a) list_single_dyc_row_pane

0xab49,	// (0x00046942) call5_gesture_pane_ParamLimits

0xab49,	// (0x00046942) call5_gesture_pane

0xab9f,	// (0x00046998) call5_windows_pane_ParamLimits

0xab9f,	// (0x00046998) call5_windows_pane

0xac0a,	// (0x00046a03) call5_swipe_1_pane_cp_ParamLimits

0xac0a,	// (0x00046a03) call5_swipe_1_pane_cp

0xac16,	// (0x00046a0f) call5_swipe_2_pane_cp_ParamLimits

0xac16,	// (0x00046a0f) call5_swipe_2_pane_cp

0x1122,	// (0x0003cf1b) call5_image_pane_cp

0xac22,	// (0x00046a1b) popup_call5_audio_first_window_cp_ParamLimits

0xac22,	// (0x00046a1b) popup_call5_audio_first_window_cp

0xdfd2,	// (0x00049dcb) call5_swipe_1_pane_g1_cp_ParamLimits

0xdfd2,	// (0x00049dcb) call5_swipe_1_pane_g1_cp

0xe03f,	// (0x00049e38) call5_swipe_1_pane_g2_cp

0xdfeb,	// (0x00049de4) call5_swipe_1_pane_t1_cp_ParamLimits

0xdfeb,	// (0x00049de4) call5_swipe_1_pane_t1_cp

0xdfd2,	// (0x00049dcb) call5_swipe_2_pane_g1_cp_ParamLimits

0xdfd2,	// (0x00049dcb) call5_swipe_2_pane_g1_cp

0xe047,	// (0x00049e40) call5_swipe_2_pane_g2_cp

0xe04f,	// (0x00049e48) call5_swipe_2_pane_t1_cp_ParamLimits

0xe04f,	// (0x00049e48) call5_swipe_2_pane_t1_cp

0x0ea5,	// (0x0003cc9e) main_sp_fs_email_pane

0xe064,	// (0x00049e5d) main_sp_fs_listscroll_pane_te

0x3238,	// (0x0003f031) popup_sp_fs_action_menu_pane_ParamLimits

0x3238,	// (0x0003f031) popup_sp_fs_action_menu_pane

0x1158,	// (0x0003cf51) bg_sp_fs_ctrlbar_pane_g1

0xe06d,	// (0x00049e66) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe076,	// (0x00049e6f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe07f,	// (0x00049e78) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1158,	// (0x0003cf51) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc45,	// (0x0004ba3e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc2d9,	// (0x000480d2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc2d9,	// (0x000480d2) bg_sp_fs_ctrlbar_ddmenu_pane

0xe088,	// (0x00049e81) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe088,	// (0x00049e81) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe094,	// (0x00049e8d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe094,	// (0x00049e8d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc4e,	// (0x0004ba47) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc4e,	// (0x0004ba47) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe0a0,	// (0x00049e99) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe0a0,	// (0x00049e99) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1158,	// (0x0003cf51) list_medium_line_t2_right_icon_g1

0x169b,	// (0x0003d494) list_medium_line_t2_right_icon_t1

0x169b,	// (0x0003d494) list_medium_line_t2_right_icon_t2

0x0001,

0xfc53,	// (0x0004ba4c) list_medium_line_t2_right_icon_t

0x1f5e,	// (0x0003dd57) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1f5e,	// (0x0003dd57) bg_sp_fs_ctrlbar_pane

0xac78,	// (0x00046a71) main_sp_fs_ctrlbar_button_pane_cp01

0xac82,	// (0x00046a7b) main_sp_fs_ctrlbar_ddmenu_pane

0xe0f2,	// (0x00049eeb) main_sp_fs_ctrlbar_pane_g1

0xe0fe,	// (0x00049ef7) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc58,	// (0x0004ba51) main_sp_fs_ctrlbar_pane_g

0xacc0,	// (0x00046ab9) main_sp_fs_ctrlbar_pane_t1

0xacff,	// (0x00046af8) main_sp_fs_ctrlbar_pane

0xad23,	// (0x00046b1c) main_sp_fs_listscroll_pane_te_cp01

0x327a,	// (0x0003f073) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x327a,	// (0x0003f073) popup_sp_fs_action_menu_pane_cp01

0x0ea5,	// (0x0003cc9e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_sp_fs_highlight_list_pane_cp01

0xe125,	// (0x00049f1e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe125,	// (0x00049f1e) sp_fs_action_menu_list_gene_pane_g1

0xe134,	// (0x00049f2d) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe134,	// (0x00049f2d) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc66,	// (0x0004ba5f) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc66,	// (0x0004ba5f) sp_fs_action_menu_list_gene_pane_g

0xe141,	// (0x00049f3a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe141,	// (0x00049f3a) sp_fs_action_menu_list_gene_pane_t1

0xe159,	// (0x00049f52) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe159,	// (0x00049f52) sp_fs_action_menu_list_gene_pane

0xe178,	// (0x00049f71) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe178,	// (0x00049f71) popup_sp_fs_action_menu_bg_pane

0xe186,	// (0x00049f7f) sp_fs_action_menu_list_pane_ParamLimits

0xe186,	// (0x00049f7f) sp_fs_action_menu_list_pane

0x329f,	// (0x0003f098) sp_fs_scroll_pane_cp01_ParamLimits

0x329f,	// (0x0003f098) sp_fs_scroll_pane_cp01

0x169b,	// (0x0003d494) list_medium_line_plain_t2_t1

0x169b,	// (0x0003d494) list_medium_line_plain_t2_t2

0x0001,

0xfc53,	// (0x0004ba4c) list_medium_line_plain_t2_t

0x169b,	// (0x0003d494) list_medium_line_plain_t3_t1

0x169b,	// (0x0003d494) list_medium_line_plain_t3_t2

0x169b,	// (0x0003d494) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x0004b0b5) list_medium_line_plain_t3_t

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g2_g1

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x0004affa) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x0004affa) list_medium_line_x2_t2_g2_g

0x1172,	// (0x0003cf6b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t2_g2_t1

0x1172,	// (0x0003cf6b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x0004afcf) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x0004afcf) list_medium_line_x2_t2_g2_t

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t4_g2_g1

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x0004affa) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x0004affa) list_medium_line_x2_t4_g2_g

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t1

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t2

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t3

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0004b008) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0004b008) list_medium_line_x2_t4_g2_t

0x1158,	// (0x0003cf51) list_medium_line_t3_right_iconx2_g1

0x1158,	// (0x0003cf51) list_medium_line_t3_right_iconx2_g2

0x1158,	// (0x0003cf51) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x0004b1d6) list_medium_line_t3_right_iconx2_g

0x169b,	// (0x0003d494) list_medium_line_t3_right_iconx2_t1

0x169b,	// (0x0003d494) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc53,	// (0x0004ba4c) list_medium_line_t3_right_iconx2_t

0x0efe,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g1

0x0efe,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g2

0x0efe,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g3

0x0efe,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x0004afff) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x0004afff) list_medium_line_x3_t4_g4_g

0x1172,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t1

0x1172,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t2

0x1172,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t3

0x1172,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0004b008) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0004b008) list_medium_line_x3_t4_g4_t

0x32c5,	// (0x0003f0be) list_single_dyc_row_text_pane_t1_ParamLimits

0x32c5,	// (0x0003f0be) list_single_dyc_row_text_pane_t1

0x330e,	// (0x0003f107) list_single_dyc_row_text_pane_t2_ParamLimits

0x330e,	// (0x0003f107) list_single_dyc_row_text_pane_t2

0xe1a6,	// (0x00049f9f) list_single_dyc_row_text_pane_t3_ParamLimits

0xe1a6,	// (0x00049f9f) list_single_dyc_row_text_pane_t3

0x0005,

0xfc6b,	// (0x0004ba64) list_single_dyc_row_text_pane_t_ParamLimits

0xfc6b,	// (0x0004ba64) list_single_dyc_row_text_pane_t

0xe1ca,	// (0x00049fc3) list_single_dyc_row_pane_g1_ParamLimits

0xe1ca,	// (0x00049fc3) list_single_dyc_row_pane_g1

0xe1d6,	// (0x00049fcf) list_single_dyc_row_pane_g2_ParamLimits

0xe1d6,	// (0x00049fcf) list_single_dyc_row_pane_g2

0xe1e2,	// (0x00049fdb) list_single_dyc_row_pane_g3_ParamLimits

0xe1e2,	// (0x00049fdb) list_single_dyc_row_pane_g3

0xe1ee,	// (0x00049fe7) list_single_dyc_row_pane_g4_ParamLimits

0xe1ee,	// (0x00049fe7) list_single_dyc_row_pane_g4

0x0003,

0xfc78,	// (0x0004ba71) list_single_dyc_row_pane_g_ParamLimits

0xfc78,	// (0x0004ba71) list_single_dyc_row_pane_g

0xe1fa,	// (0x00049ff3) list_single_dyc_row_text_pane_ParamLimits

0xe1fa,	// (0x00049ff3) list_single_dyc_row_text_pane

0x07fd,	// (0x0003c5f6) bg_sp_fs_scroll_pane

0xe219,	// (0x0004a012) thumb_sp_fs_scroll_pane

0x0efe,	// (0x0003ccf7) list_medium_line_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_g1

0x1172,	// (0x0003cf6b) list_medium_line_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t1

0x0efe,	// (0x0003ccf7) list_medium_line_x2_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_g1

0x0efe,	// (0x0003ccf7) list_medium_line_x2_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x0004affa) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x0004affa) list_medium_line_x2_g

0x1172,	// (0x0003cf6b) list_medium_line_x2_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t1

0x0efe,	// (0x0003ccf7) list_medium_line_x3_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x3_g1

0xe222,	// (0x0004a01b) list_medium_line_x3_g2_ParamLimits

0xe222,	// (0x0004a01b) list_medium_line_x3_g2

0x0001,

0xfc81,	// (0x0004ba7a) list_medium_line_x3_g_ParamLimits

0xfc81,	// (0x0004ba7a) list_medium_line_x3_g

0xe230,	// (0x0004a029) list_medium_line_x3_t1_ParamLimits

0xe230,	// (0x0004a029) list_medium_line_x3_t1

0xe244,	// (0x0004a03d) thumb_sp_fs_scroll_pane_g1

0xe24d,	// (0x0004a046) thumb_sp_fs_scroll_pane_g2

0xe256,	// (0x0004a04f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc86,	// (0x0004ba7f) thumb_sp_fs_scroll_pane_g

0xe244,	// (0x0004a03d) bg_sp_fs_scroll_pane_g1

0xe24d,	// (0x0004a046) bg_sp_fs_scroll_pane_g2

0xe256,	// (0x0004a04f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc86,	// (0x0004ba7f) bg_sp_fs_scroll_pane_g

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g1

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g2

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g3

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x0004afff) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x0004afff) list_medium_line_x2_t3_g4_g

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g4_t1

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g4_t2

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x0004aff3) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x0004aff3) list_medium_line_x2_t3_g4_t

0x0efe,	// (0x0003ccf7) list_medium_line_g2_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_g2_g1

0x0efe,	// (0x0003ccf7) list_medium_line_g2_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x0004affa) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x0004affa) list_medium_line_g2_g

0x1172,	// (0x0003cf6b) list_medium_line_g2_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_g2_t1

0x0efe,	// (0x0003ccf7) list_medium_line_t3_g2_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t3_g2_g1

0x0efe,	// (0x0003ccf7) list_medium_line_t3_g2_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x0004affa) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x0004affa) list_medium_line_t3_g2_g

0x1172,	// (0x0003cf6b) list_medium_line_t3_g2_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t3_g2_t1

0x1172,	// (0x0003cf6b) list_medium_line_t3_g2_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t3_g2_t2

0x1172,	// (0x0003cf6b) list_medium_line_t3_g2_t3_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x0004aff3) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x0004aff3) list_medium_line_t3_g2_t

0x1158,	// (0x0003cf51) list_medium_line_right_icon_g1

0x169b,	// (0x0003d494) list_medium_line_right_icon_t1

0x0efe,	// (0x0003ccf7) list_medium_line_t2_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t2_g1

0x1172,	// (0x0003cf6b) list_medium_line_t2_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t2_t1

0x1172,	// (0x0003cf6b) list_medium_line_t2_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x0004afcf) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x0004afcf) list_medium_line_t2_t

0x0efe,	// (0x0003ccf7) list_medium_line_t3_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t3_g1

0x1172,	// (0x0003cf6b) list_medium_line_t3_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t3_t1

0x1172,	// (0x0003cf6b) list_medium_line_t3_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t3_t2

0x1172,	// (0x0003cf6b) list_medium_line_t3_t3_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x0004aff3) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x0004aff3) list_medium_line_t3_t

0x0efe,	// (0x0003ccf7) list_medium_line_g3_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_g3_g1

0x0efe,	// (0x0003ccf7) list_medium_line_g3_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_g3_g2

0x0efe,	// (0x0003ccf7) list_medium_line_g3_g3_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x0004afec) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x0004afec) list_medium_line_g3_g

0x1172,	// (0x0003cf6b) list_medium_line_g3_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_g3_t1

0x0efe,	// (0x0003ccf7) list_medium_line_t2_g3_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t2_g3_g1

0x0efe,	// (0x0003ccf7) list_medium_line_t2_g3_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t2_g3_g2

0x0efe,	// (0x0003ccf7) list_medium_line_t2_g3_g3_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x0004afec) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x0004afec) list_medium_line_t2_g3_g

0x1172,	// (0x0003cf6b) list_medium_line_t2_g3_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t2_g3_t1

0x1172,	// (0x0003cf6b) list_medium_line_t2_g3_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x0004afcf) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x0004afcf) list_medium_line_t2_g3_t

0x0efe,	// (0x0003ccf7) list_medium_line_t3_g3_g1_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t3_g3_g1

0x0efe,	// (0x0003ccf7) list_medium_line_t3_g3_g2_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t3_g3_g2

0x0efe,	// (0x0003ccf7) list_medium_line_t3_g3_g3_ParamLimits

0x0efe,	// (0x0003ccf7) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x0004afec) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x0004afec) list_medium_line_t3_g3_g

0x1172,	// (0x0003cf6b) list_medium_line_t3_g3_t1_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t3_g3_t1

0x1172,	// (0x0003cf6b) list_medium_line_t3_g3_t2_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t3_g3_t2

0x1172,	// (0x0003cf6b) list_medium_line_t3_g3_t3_ParamLimits

0x1172,	// (0x0003cf6b) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x0004aff3) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x0004aff3) list_medium_line_t3_g3_t

0x1158,	// (0x0003cf51) list_medium_line_right_iconx2_g1

0x1158,	// (0x0003cf51) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0004b1d1) list_medium_line_right_iconx2_g

0x169b,	// (0x0003d494) list_medium_line_right_iconx2_t1

0x1158,	// (0x0003cf51) list_medium_line_t2_right_iconx2_g1

0x1158,	// (0x0003cf51) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x0004b1d1) list_medium_line_t2_right_iconx2_g

0x169b,	// (0x0003d494) list_medium_line_t2_right_iconx2_t1

0x169b,	// (0x0003d494) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc53,	// (0x0004ba4c) list_medium_line_t2_right_iconx2_t

0x169b,	// (0x0003d494) list_medium_line_x4_t4_t1

0x169b,	// (0x0003d494) list_medium_line_x4_t4_t2

0x169b,	// (0x0003d494) list_medium_line_x4_t4_t3

0x169b,	// (0x0003d494) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x0004b0bc) list_medium_line_x4_t4_t

0xad86,	// (0x00046b7f) tport_appsw_pane_ParamLimits

0xad86,	// (0x00046b7f) tport_appsw_pane

0xad9e,	// (0x00046b97) tport_contact_pane_ParamLimits

0xad9e,	// (0x00046b97) tport_contact_pane

0xadb6,	// (0x00046baf) tport_listscroll_pane_ParamLimits

0xadb6,	// (0x00046baf) tport_listscroll_pane

0xadd0,	// (0x00046bc9) cell_tport_appsw_pane_ParamLimits

0xadd0,	// (0x00046bc9) cell_tport_appsw_pane

0x1f6c,	// (0x0003dd65) tport_appsw_pane_g1_ParamLimits

0x1f6c,	// (0x0003dd65) tport_appsw_pane_g1

0xe25f,	// (0x0004a058) tport_contact_pane_g1

0xdb24,	// (0x0004991d) tport_contact_pane_t1

0xe268,	// (0x0004a061) tport_contact_pane_t2

0x0001,

0xfc8d,	// (0x0004ba86) tport_contact_pane_t

0xe276,	// (0x0004a06f) list_tport_pane

0xe27f,	// (0x0004a078) scroll_pane_cp_030

0xae18,	// (0x00046c11) cell_tport_appsw_pane_g1

0xae28,	// (0x00046c21) cell_tport_appsw_pane_t1

0xae36,	// (0x00046c2f) grid_highlight_pane_cp019

0xae3e,	// (0x00046c37) list_tport_double_graphic_pane_ParamLimits

0xae3e,	// (0x00046c37) list_tport_double_graphic_pane

0x0ea5,	// (0x0003cc9e) list_highlight_pane_cp023_ParamLimits

0x0ea5,	// (0x0003cc9e) list_highlight_pane_cp023

0xae4b,	// (0x00046c44) list_tport_double_graphic_pane_g1_ParamLimits

0xae4b,	// (0x00046c44) list_tport_double_graphic_pane_g1

0xae58,	// (0x00046c51) list_tport_double_graphic_pane_t1_ParamLimits

0xae58,	// (0x00046c51) list_tport_double_graphic_pane_t1

0xae6d,	// (0x00046c66) list_tport_double_graphic_pane_t2_ParamLimits

0xae6d,	// (0x00046c66) list_tport_double_graphic_pane_t2

0x0001,

0xfc99,	// (0x0004ba92) list_tport_double_graphic_pane_t_ParamLimits

0xfc99,	// (0x0004ba92) list_tport_double_graphic_pane_t

0x07fd,	// (0x0003c5f6) main_cale_note_pane

0x90ce,	// (0x00044ec7) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x90ce,	// (0x00044ec7) cell_vitu2_function_top_wide_pane_cp01

0xa839,	// (0x00046632) wait_bar_pane_cp05_ParamLimits

0x0ea5,	// (0x0003cc9e) listscroll_cmail_pane

0xe288,	// (0x0004a081) list_cmail_pane

0xae7f,	// (0x00046c78) list_cmail_body_pane

0xae94,	// (0x00046c8d) list_single_cmail_header_caption_pane

0xaeaa,	// (0x00046ca3) list_single_cmail_header_detail_pane_ParamLimits

0xaeaa,	// (0x00046ca3) list_single_cmail_header_detail_pane

0xe298,	// (0x0004a091) list_single_cmail_header_caption_pane_t1

0x3443,	// (0x0003f23c) list_single_cmail_header_detail_pane_g1_ParamLimits

0x3443,	// (0x0003f23c) list_single_cmail_header_detail_pane_g1

0xe2af,	// (0x0004a0a8) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe2af,	// (0x0004a0a8) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc9e,	// (0x0004ba97) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc9e,	// (0x0004ba97) list_single_cmail_header_detail_pane_g

0xe2c8,	// (0x0004a0c1) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe2c8,	// (0x0004a0c1) list_single_cmail_header_detail_pane_t1

0xe328,	// (0x0004a121) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe328,	// (0x0004a121) list_single_cmail_header_editor_pane_bg

0xdc81,	// (0x00049a7a) list_cmail_body_pane_g1

0xe33f,	// (0x0004a138) list_cmail_body_pane_t1

0xcf73,	// (0x00048d6c) list_single_cmail_header_editor_pane_bg_g1

0x137d,	// (0x0003d176) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf83,	// (0x00048d7c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf7b,	// (0x00048d74) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd1ec,	// (0x00048fe5) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcfa3,	// (0x00048d9c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcf93,	// (0x00048d8c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcf9b,	// (0x00048d94) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x135d,	// (0x0003d156) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xaed3,	// (0x00046ccc) calenote_gesture_pane_ParamLimits

0xaed3,	// (0x00046ccc) calenote_gesture_pane

0xaef3,	// (0x00046cec) calenote_window_pane_ParamLimits

0xaef3,	// (0x00046cec) calenote_window_pane

0xe34d,	// (0x0004a146) popup_note_window_cp01

0xaf0f,	// (0x00046d08) calenote_swipe_1_pane_ParamLimits

0xaf0f,	// (0x00046d08) calenote_swipe_1_pane

0xac16,	// (0x00046a0f) calenote_swipe_2_pane_ParamLimits

0xac16,	// (0x00046a0f) calenote_swipe_2_pane

0xdfd2,	// (0x00049dcb) calenote_swipe_1_pane_g1_ParamLimits

0xdfd2,	// (0x00049dcb) calenote_swipe_1_pane_g1

0xdfdf,	// (0x00049dd8) calenote_swipe_1_pane_g2_ParamLimits

0xdfdf,	// (0x00049dd8) calenote_swipe_1_pane_g2

0x0001,

0xfc3b,	// (0x0004ba34) calenote_swipe_1_pane_g_ParamLimits

0xfc3b,	// (0x0004ba34) calenote_swipe_1_pane_g

0xe35f,	// (0x0004a158) calenote_swipe_1_pane_t1_ParamLimits

0xe35f,	// (0x0004a158) calenote_swipe_1_pane_t1

0xdfd2,	// (0x00049dcb) calenote_swipe_2_pane_g1_ParamLimits

0xdfd2,	// (0x00049dcb) calenote_swipe_2_pane_g1

0xe37e,	// (0x0004a177) calenote_swipe_2_pane_g2_ParamLimits

0xe37e,	// (0x0004a177) calenote_swipe_2_pane_g2

0x0001,

0xfcaa,	// (0x0004baa3) calenote_swipe_2_pane_g_ParamLimits

0xfcaa,	// (0x0004baa3) calenote_swipe_2_pane_g

0xe38a,	// (0x0004a183) calenote_swipe_2_pane_t1_ParamLimits

0xe38a,	// (0x0004a183) calenote_swipe_2_pane_t1

0x07fd,	// (0x0003c5f6) main_mup_navstr_pane

0x7f91,	// (0x00043d8a) main_mup3_pane_t7_ParamLimits

0x7f91,	// (0x00043d8a) main_mup3_pane_t7

0xec97,	// (0x0004aa90) main_mp4_pane_g6_ParamLimits

0xec97,	// (0x0004aa90) main_mp4_pane_g6

0xee59,	// (0x0004ac52) main_image3_pane_t4_ParamLimits

0xee59,	// (0x0004ac52) main_image3_pane_t4

0xaf24,	// (0x00046d1d) popup_navstr_preview_pane_ParamLimits

0xaf24,	// (0x00046d1d) popup_navstr_preview_pane

0xaf38,	// (0x00046d31) scroll_navstr_pane_ParamLimits

0xaf38,	// (0x00046d31) scroll_navstr_pane

0x07fd,	// (0x0003c5f6) bg_popup_preview_window_pane_cp04

0xe3b1,	// (0x0004a1aa) popup_navstr_preview_pane_t1

0xaf4c,	// (0x00046d45) scroll_navstr_pane_g1_ParamLimits

0xaf4c,	// (0x00046d45) scroll_navstr_pane_g1

0xaf60,	// (0x00046d59) scroll_navstr_pane_t1_ParamLimits

0xaf60,	// (0x00046d59) scroll_navstr_pane_t1

0xe356,	// (0x0004a14f) bg_button_pane_cp014

0xe356,	// (0x0004a14f) bg_button_pane_cp030

0x31de,	// (0x0003efd7) list_double_fisheye_pane_g4_ParamLimits

0x31de,	// (0x0003efd7) list_double_fisheye_pane_g4

0x31ea,	// (0x0003efe3) list_double_fisheye_pane_g5_ParamLimits

0x31ea,	// (0x0003efe3) list_double_fisheye_pane_g5

0x549b,	// (0x00041294) sp_fs_scroll_pane_cp03

0xe0f2,	// (0x00049eeb) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe0fe,	// (0x00049ef7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc58,	// (0x0004ba51) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xacc0,	// (0x00046ab9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe290,	// (0x0004a089) sp_fs_scroll_pane_cp02

0x106a,	// (0x0003ce63) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x106a,	// (0x0003ce63) popup_sp_fs_calendar_preview_list_single_pane

0x07fd,	// (0x0003c5f6) main_cam6_pano_pane

0x0ea5,	// (0x0003cc9e) main_mup3_pane_ParamLimits

0x07fd,	// (0x0003c5f6) main_phacti_pane

0xa70c,	// (0x00046505) bg_button_pane_cp11

0xa726,	// (0x0004651f) main_mobtv_info_pane_g2_ParamLimits

0xa726,	// (0x0004651f) main_mobtv_info_pane_g2

0x0001,

0xfbb8,	// (0x0004b9b1) main_mobtv_info_pane_g_ParamLimits

0xfbb8,	// (0x0004b9b1) main_mobtv_info_pane_g

0xa903,	// (0x000466fc) sc_clock_pane_t5_ParamLimits

0xa903,	// (0x000466fc) sc_clock_pane_t5

0xa9cb,	// (0x000467c4) main_radioblah_pane_g1_ParamLimits

0xdf1e,	// (0x00049d17) main_radioblah_pane_t3_ParamLimits

0xdf1e,	// (0x00049d17) main_radioblah_pane_t3

0xdf36,	// (0x00049d2f) main_radioblah_pane_t4_ParamLimits

0xdf36,	// (0x00049d2f) main_radioblah_pane_t4

0xa9f3,	// (0x000467ec) main_radioblah_text_pane_ParamLimits

0xa9f3,	// (0x000467ec) main_radioblah_text_pane

0xaa05,	// (0x000467fe) main_radioblah_info_pane_g1_ParamLimits

0xaa9e,	// (0x00046897) main_radioblah_info_pane_t4_ParamLimits

0xaa9e,	// (0x00046897) main_radioblah_info_pane_t4

0x0ea5,	// (0x0003cc9e) main_sp_fs_calendar_pane

0xaf77,	// (0x00046d70) main_phacti_pane_g1

0xaf7f,	// (0x00046d78) phacti_note_pane_ParamLimits

0xaf7f,	// (0x00046d78) phacti_note_pane

0xe3c8,	// (0x0004a1c1) phacti_term_pane_ParamLimits

0xe3c8,	// (0x0004a1c1) phacti_term_pane

0xe3dd,	// (0x0004a1d6) phacti_note_pane_t1_ParamLimits

0xe3dd,	// (0x0004a1d6) phacti_note_pane_t1

0xe3f4,	// (0x0004a1ed) phacti_term_pane_g1

0xe3fc,	// (0x0004a1f5) phacti_term_pane_t1_ParamLimits

0xe3fc,	// (0x0004a1f5) phacti_term_pane_t1

0xe426,	// (0x0004a21f) popup_sp_fs_calendar_preview_list_single_pane_g1

0x1109,	// (0x0003cf02) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb4,	// (0x0004baad) popup_sp_fs_calendar_preview_list_single_pane_g

0xe42e,	// (0x0004a227) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe42e,	// (0x0004a227) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe444,	// (0x0004a23d) aid_popup_sp_fs_bg_corner_pane

0x1158,	// (0x0003cf51) popup_sp_fs_calendar_preview_bg_pane_g1

0x07fd,	// (0x0003c5f6) popup_sp_fs_calendar_preview_bg_pane

0xe44c,	// (0x0004a245) popup_sp_fs_calendar_preview_list_pane

0x1f5e,	// (0x0003dd57) bg_main_sp_fs_cale_pane_ParamLimits

0x1f5e,	// (0x0003dd57) bg_main_sp_fs_cale_pane

0xe45d,	// (0x0004a256) listscroll_cale_mrui_pane_ParamLimits

0xe45d,	// (0x0004a256) listscroll_cale_mrui_pane

0xe472,	// (0x0004a26b) listscroll_sp_fs_schedule_track_pane

0xe47b,	// (0x0004a274) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe47b,	// (0x0004a274) main_sp_fs_ctrlbar_pane_cp01

0xe48e,	// (0x0004a287) main_sp_fs_ribbon_pane

0xe496,	// (0x0004a28f) popup_sp_fs_cale_preview_window

0xaff4,	// (0x00046ded) list_single_sp_fs_schedule_track_pane_ParamLimits

0xaff4,	// (0x00046ded) list_single_sp_fs_schedule_track_pane

0x0ea5,	// (0x0003cc9e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_sp_fs_highlight_list_pane_cp03

0xb007,	// (0x00046e00) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb007,	// (0x00046e00) list_single_sp_fs_schedule_track_pane_g1

0xb013,	// (0x00046e0c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb013,	// (0x00046e0c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcb9,	// (0x0004bab2) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcb9,	// (0x0004bab2) list_single_sp_fs_schedule_track_pane_g

0xb01f,	// (0x00046e18) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb01f,	// (0x00046e18) list_single_sp_fs_schedule_track_pane_t1

0xb039,	// (0x00046e32) sp_fs_schedule_track_pane_ParamLimits

0xb039,	// (0x00046e32) sp_fs_schedule_track_pane

0xe4a8,	// (0x0004a2a1) sp_fs_schedule_track_pane_g1

0xe4b0,	// (0x0004a2a9) sp_fs_schedule_track_pane_g2

0xe4b8,	// (0x0004a2b1) sp_fs_schedule_track_pane_g3

0xe4c0,	// (0x0004a2b9) sp_fs_schedule_track_pane_g4

0xe4c8,	// (0x0004a2c1) sp_fs_schedule_track_pane_g5

0x0004,

0xfcbe,	// (0x0004bab7) sp_fs_schedule_track_pane_g

0xcf73,	// (0x00048d6c) bg_sp_fs_schedule_viewer_highlight_g1

0x137d,	// (0x0003d176) bg_sp_fs_schedule_viewer_highlight_g2

0xcf7b,	// (0x00048d74) bg_sp_fs_schedule_viewer_highlight_g3

0xcf83,	// (0x00048d7c) bg_sp_fs_schedule_viewer_highlight_g4

0xd1ec,	// (0x00048fe5) bg_sp_fs_schedule_viewer_highlight_g5

0xcf93,	// (0x00048d8c) bg_sp_fs_schedule_viewer_highlight_g6

0xcf9b,	// (0x00048d94) bg_sp_fs_schedule_viewer_highlight_g7

0xcfa3,	// (0x00048d9c) bg_sp_fs_schedule_viewer_highlight_g8

0x135d,	// (0x0003d156) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcc9,	// (0x0004bac2) bg_sp_fs_schedule_viewer_highlight_g

0x07fd,	// (0x0003c5f6) bg_main_sp_fs_ribbon_pane

0xb04a,	// (0x00046e43) main_sp_fs_ribbon_pane_g1

0xe4d0,	// (0x0004a2c9) main_sp_fs_ribbon_pane_t1

0xb053,	// (0x00046e4c) main_sp_fs_ribbon_pane_t2

0xe4df,	// (0x0004a2d8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcdc,	// (0x0004bad5) main_sp_fs_ribbon_pane_t

0xe4ee,	// (0x0004a2e7) main_sp_fs_ribbon_scheduler_pane

0xe4f6,	// (0x0004a2ef) bg_main_sp_fs_ribbon_pane_g1

0xe4ff,	// (0x0004a2f8) bg_main_sp_fs_ribbon_pane_g2

0xe508,	// (0x0004a301) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce3,	// (0x0004badc) bg_main_sp_fs_ribbon_pane_g

0xe510,	// (0x0004a309) main_sp_fs_ribbon_scheduler_pane_g1

0xe519,	// (0x0004a312) main_sp_fs_ribbon_scheduler_pane_g2

0xe522,	// (0x0004a31b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcea,	// (0x0004bae3) main_sp_fs_ribbon_scheduler_pane_g

0xe52b,	// (0x0004a324) list_cale_mrui_pane

0xb062,	// (0x00046e5b) sp_fs_scroll_pane_cp07_ParamLimits

0xb062,	// (0x00046e5b) sp_fs_scroll_pane_cp07

0xb07e,	// (0x00046e77) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb07e,	// (0x00046e77) bg_sp_fs_schedule_viewer_highlight

0xe538,	// (0x0004a331) list_single_sp_fs_schedule_track_pane_cp01

0xe540,	// (0x0004a339) list_sp_fs_schedule_track_pane

0xe548,	// (0x0004a341) sp_fs_scroll_pane_cp06_ParamLimits

0xe548,	// (0x0004a341) sp_fs_scroll_pane_cp06

0x1158,	// (0x0003cf51) bgmain_sp_fs_calendar_pane_g1

0x345b,	// (0x0003f254) list_single_cale_mrui_pane_ParamLimits

0x345b,	// (0x0003f254) list_single_cale_mrui_pane

0xe55a,	// (0x0004a353) list_single_cale_mrui_row_pane_ParamLimits

0xe55a,	// (0x0004a353) list_single_cale_mrui_row_pane

0xe567,	// (0x0004a360) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe567,	// (0x0004a360) list_single_cale_mrui_row_pane_g1

0xe5ac,	// (0x0004a3a5) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe5ac,	// (0x0004a3a5) list_single_cale_mrui_row_pane_t1

0x347c,	// (0x0003f275) list_single_cale_mrui_row_pane_t2_ParamLimits

0x347c,	// (0x0003f275) list_single_cale_mrui_row_pane_t2

0xe5be,	// (0x0004a3b7) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe5be,	// (0x0004a3b7) list_single_cale_mrui_row_pane_t3

0xe5ed,	// (0x0004a3e6) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe5ed,	// (0x0004a3e6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcf8,	// (0x0004baf1) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcf8,	// (0x0004baf1) list_single_cale_mrui_row_pane_t

0x34e4,	// (0x0003f2dd) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x34e4,	// (0x0003f2dd) list_single_cmail_header_editor_pane_bg_cp01

0x350a,	// (0x0003f303) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x350a,	// (0x0003f303) list_single_cmail_header_editor_pane_bg_cp02

0xb08e,	// (0x00046e87) main_radioblah_text_pane_t1_ParamLimits

0xb08e,	// (0x00046e87) main_radioblah_text_pane_t1

0xe61c,	// (0x0004a415) cam6_indi_pane_cp01

0xe624,	// (0x0004a41d) cam6_mode_pane_cp01

0xe62c,	// (0x0004a425) cam6_pano_pane

0xe635,	// (0x0004a42e) cam6_zoom_pane_cp01

0xe63d,	// (0x0004a436) cam6_pano_image_pane

0xe648,	// (0x0004a441) cam6_pano_pane_g1

0xdc81,	// (0x00049a7a) cam6_pano_pane_g2

0xe651,	// (0x0004a44a) cam6_pano_pane_g3

0xe65a,	// (0x0004a453) cam6_pano_pane_g4

0xcb7b,	// (0x00048974) cam6_pano_pane_g5

0xe663,	// (0x0004a45c) cam6_pano_pane_g6

0xe66d,	// (0x0004a466) cam6_pano_pane_g7

0xe675,	// (0x0004a46e) cam6_pano_pane_g8

0xe67e,	// (0x0004a477) cam6_pano_pane_g9

0x0008,

0xfd01,	// (0x0004bafa) cam6_pano_pane_g

0x07fd,	// (0x0003c5f6) main_browser_tag_pane

0xe3a9,	// (0x0004a1a2) grid_navstr_albumart_pane

0xe689,	// (0x0004a482) cell_navstr_albumart_pane_ParamLimits

0xe689,	// (0x0004a482) cell_navstr_albumart_pane

0xe6a9,	// (0x0004a4a2) cell_navstr_albumart_pane_g1

0x6dfc,	// (0x00042bf5) cell_navstr_albumart_pane_g2

0x6e0c,	// (0x00042c05) cell_navstr_albumart_pane_g3

0x6e04,	// (0x00042bfd) cell_navstr_albumart_pane_g4

0x0003,

0xfd14,	// (0x0004bb0d) cell_navstr_albumart_pane_g

0xb0a8,	// (0x00046ea1) bt_list_pane_ParamLimits

0xb0a8,	// (0x00046ea1) bt_list_pane

0xb0bc,	// (0x00046eb5) bt_list_pane_t1

0xb0cb,	// (0x00046ec4) bt_list_pane_t2

0x0001,

0xfd1d,	// (0x0004bb16) bt_list_pane_t

0x07fd,	// (0x0003c5f6) main_cale_prevew_pane

0xb0da,	// (0x00046ed3) popup_cale_preview_window_ParamLimits

0xb0da,	// (0x00046ed3) popup_cale_preview_window

0x0ea5,	// (0x0003cc9e) bg_popup_preview_window_pane_cp05_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_popup_preview_window_pane_cp05

0xe6b1,	// (0x0004a4aa) list_cale_preview_pane_ParamLimits

0xe6b1,	// (0x0004a4aa) list_cale_preview_pane

0xb0f5,	// (0x00046eee) list_double_cale_preview_pane_ParamLimits

0xb0f5,	// (0x00046eee) list_double_cale_preview_pane

0xb107,	// (0x00046f00) list_single_cale_preview_pane_ParamLimits

0xb107,	// (0x00046f00) list_single_cale_preview_pane

0xb11d,	// (0x00046f16) list_single_cale_preview_pane_g1

0xb125,	// (0x00046f1e) list_single_cale_preview_pane_t1_ParamLimits

0xb125,	// (0x00046f1e) list_single_cale_preview_pane_t1

0xb13a,	// (0x00046f33) list_double_cale_preview_pane_g1

0xb142,	// (0x00046f3b) list_double_cale_preview_pane_t1_ParamLimits

0xb142,	// (0x00046f3b) list_double_cale_preview_pane_t1

0xb157,	// (0x00046f50) list_double_cale_preview_pane_t2_ParamLimits

0xb157,	// (0x00046f50) list_double_cale_preview_pane_t2

0x0001,

0xfd22,	// (0x0004bb1b) list_double_cale_preview_pane_t_ParamLimits

0xfd22,	// (0x0004bb1b) list_double_cale_preview_pane_t

0x07fd,	// (0x0003c5f6) main_ezdial_pane

0x0ea5,	// (0x0003cc9e) main_sp_fs_email_pane_ParamLimits

0xac30,	// (0x00046a29) cmail_ddmenu_btn01_pane_ParamLimits

0xac30,	// (0x00046a29) cmail_ddmenu_btn01_pane

0xac43,	// (0x00046a3c) cmail_ddmenu_btn02_pane_ParamLimits

0xac43,	// (0x00046a3c) cmail_ddmenu_btn02_pane

0xac66,	// (0x00046a5f) cmail_ddmenu_btn03_pane_ParamLimits

0xac66,	// (0x00046a5f) cmail_ddmenu_btn03_pane

0xacff,	// (0x00046af8) main_sp_fs_ctrlbar_pane_ParamLimits

0xad23,	// (0x00046b1c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xae7f,	// (0x00046c78) list_cmail_body_pane_ParamLimits

0xe2a6,	// (0x0004a09f) bg_button_pane_cp12

0xe2bb,	// (0x0004a0b4) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe2bb,	// (0x0004a0b4) list_single_cmail_header_detail_pane_g3

0xe304,	// (0x0004a0fd) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe304,	// (0x0004a0fd) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca5,	// (0x0004ba9e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca5,	// (0x0004ba9e) list_single_cmail_header_detail_pane_t

0xe411,	// (0x0004a20a) phacti_term_pane_t2_ParamLimits

0xe411,	// (0x0004a20a) phacti_term_pane_t2

0x0001,

0xfcaf,	// (0x0004baa8) phacti_term_pane_t_ParamLimits

0xfcaf,	// (0x0004baa8) phacti_term_pane_t

0xe6bd,	// (0x0004a4b6) aid_size_list_single_double

0xb16f,	// (0x00046f68) popup_ezdial_listscroll_window

0xb18b,	// (0x00046f84) popup_number_entry_window_cp01

0x1122,	// (0x0003cf1b) bg_popup_call_pane_cp09

0xe6c9,	// (0x0004a4c2) ezdial_list_pane

0xe6d1,	// (0x0004a4ca) scroll_pane_cp23

0x1f5e,	// (0x0003dd57) bg_button_pane_cp028_ParamLimits

0x1f5e,	// (0x0003dd57) bg_button_pane_cp028

0xb199,	// (0x00046f92) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb199,	// (0x00046f92) cmail_ddmenu_btn01_pane_g1

0xb1a5,	// (0x00046f9e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb1a5,	// (0x00046f9e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd27,	// (0x0004bb20) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd27,	// (0x0004bb20) cmail_ddmenu_btn01_pane_g

0xe6d9,	// (0x0004a4d2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe6d9,	// (0x0004a4d2) cmail_ddmenu_btn01_pane_t1

0x1f5e,	// (0x0003dd57) bg_button_pane_cp029_ParamLimits

0x1f5e,	// (0x0003dd57) bg_button_pane_cp029

0xb1b9,	// (0x00046fb2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb1b9,	// (0x00046fb2) cmail_ddmenu_btn02_pane_g1

0xb1d1,	// (0x00046fca) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb1d1,	// (0x00046fca) cmail_ddmenu_btn02_pane_t1

0x0ea5,	// (0x0003cc9e) bg_button_pane_cp031_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_button_pane_cp031

0xb1b9,	// (0x00046fb2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb1b9,	// (0x00046fb2) cmail_ddmenu_btn03_pane_g1

0xb1d1,	// (0x00046fca) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb1d1,	// (0x00046fca) cmail_ddmenu_btn03_pane_t1

0x88ec,	// (0x000446e5) cell_dialer2_keypad_pane_t1_ParamLimits

0x8906,	// (0x000446ff) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x8906,	// (0x000446ff) cell_dialer2_keypad_pane_t1_copy1

0xa52f,	// (0x00046328) ncimui_group_button_pane

0x0ea5,	// (0x0003cc9e) main_sp_fs_calendar_pane_ParamLimits

0xae94,	// (0x00046c8d) list_single_cmail_header_caption_pane_ParamLimits

0xe454,	// (0x0004a24d) aid_recal_txt_sm_pane

0x07fd,	// (0x0003c5f6) mian_recal_day_pane

0xe496,	// (0x0004a28f) popup_sp_fs_cale_preview_window_ParamLimits

0xe6ef,	// (0x0004a4e8) list_recal_day_pane

0xe731,	// (0x0004a52a) list_single_recal_day_pane_ParamLimits

0xe731,	// (0x0004a52a) list_single_recal_day_pane

0xe743,	// (0x0004a53c) list_single_recal_day_pane_g1_ParamLimits

0xe743,	// (0x0004a53c) list_single_recal_day_pane_g1

0xe74f,	// (0x0004a548) list_single_recal_day_pane_g2_ParamLimits

0xe74f,	// (0x0004a548) list_single_recal_day_pane_g2

0xe75b,	// (0x0004a554) list_single_recal_day_pane_g3_ParamLimits

0xe75b,	// (0x0004a554) list_single_recal_day_pane_g3

0x352a,	// (0x0003f323) list_single_recal_day_pane_g4_ParamLimits

0x352a,	// (0x0003f323) list_single_recal_day_pane_g4

0xe767,	// (0x0004a560) list_single_recal_day_pane_g5_ParamLimits

0xe767,	// (0x0004a560) list_single_recal_day_pane_g5

0xe773,	// (0x0004a56c) list_single_recal_day_pane_g6_ParamLimits

0xe773,	// (0x0004a56c) list_single_recal_day_pane_g6

0x0004,

0xfd36,	// (0x0004bb2f) list_single_recal_day_pane_g_ParamLimits

0xfd36,	// (0x0004bb2f) list_single_recal_day_pane_g

0xe787,	// (0x0004a580) list_single_recal_day_pane_t1

0xe799,	// (0x0004a592) list_single_recal_day_pane_t2

0x0001,

0xfd41,	// (0x0004bb3a) list_single_recal_day_pane_t

0xb1f5,	// (0x00046fee) ncimui_query_button_pane_ParamLimits

0xb1f5,	// (0x00046fee) ncimui_query_button_pane

0xb205,	// (0x00046ffe) ncimui_query_button_pane_t1_ParamLimits

0xb205,	// (0x00046ffe) ncimui_query_button_pane_t1

0xe7ab,	// (0x0004a5a4) ncimui_query_button_pane_t2_ParamLimits

0xe7ab,	// (0x0004a5a4) ncimui_query_button_pane_t2

0x0001,

0xfd46,	// (0x0004bb3f) ncimui_query_button_pane_t_ParamLimits

0xfd46,	// (0x0004bb3f) ncimui_query_button_pane_t

0xb218,	// (0x00047011) query_button_pane_ParamLimits

0xb218,	// (0x00047011) query_button_pane

0x07fd,	// (0x0003c5f6) bg_button_pane_cp0028

0xe7be,	// (0x0004a5b7) query_button_pane_t1

0x725c,	// (0x00043055) main_tport_pane_ParamLimits

0xad43,	// (0x00046b3c) bg_popup_window_pane_cp01_ParamLimits

0xad43,	// (0x00046b3c) bg_popup_window_pane_cp01

0xad5e,	// (0x00046b57) heading_pane_cp08_ParamLimits

0xad5e,	// (0x00046b57) heading_pane_cp08

0xad71,	// (0x00046b6a) heading_pane_cp07_ParamLimits

0xad71,	// (0x00046b6a) heading_pane_cp07

0xae18,	// (0x00046c11) cell_tport_appsw_pane_g2

0x0002,

0xfc92,	// (0x0004ba8b) cell_tport_appsw_pane_g

0xc1c5,	// (0x00047fbe) input_candi_list_open_g1

0x1548,	// (0x0003d341) list_cale_time_pane_g6_ParamLimits

0x1548,	// (0x0003d341) list_cale_time_pane_g6

0x79a1,	// (0x0004379a) aid_size_touch_calib_1_ParamLimits

0x79a1,	// (0x0004379a) aid_size_touch_calib_1

0x79b3,	// (0x000437ac) aid_size_touch_calib_2_ParamLimits

0x79b3,	// (0x000437ac) aid_size_touch_calib_2

0x79cb,	// (0x000437c4) aid_size_touch_calib_3_ParamLimits

0x79cb,	// (0x000437c4) aid_size_touch_calib_3

0x79e9,	// (0x000437e2) aid_size_touch_calib_4_ParamLimits

0x79e9,	// (0x000437e2) aid_size_touch_calib_4

0x7a01,	// (0x000437fa) main_touch_calib_button_group_pane_ParamLimits

0x7a01,	// (0x000437fa) main_touch_calib_button_group_pane

0x7a19,	// (0x00043812) main_touch_calib_pane_g1_ParamLimits

0x7a2b,	// (0x00043824) main_touch_calib_pane_g2_ParamLimits

0x7a3d,	// (0x00043836) main_touch_calib_pane_g3_ParamLimits

0x7a4f,	// (0x00043848) main_touch_calib_pane_g4_ParamLimits

0xf6d4,	// (0x0004b4cd) main_touch_calib_pane_g_ParamLimits

0x7a61,	// (0x0004385a) main_touch_calib_pane_t1_ParamLimits

0x7a7b,	// (0x00043874) main_touch_calib_pane_t2_ParamLimits

0x7a95,	// (0x0004388e) main_touch_calib_pane_t3_ParamLimits

0x7aa9,	// (0x000438a2) main_touch_calib_pane_t4_ParamLimits

0x7abd,	// (0x000438b6) main_touch_calib_pane_t5_ParamLimits

0xf6dd,	// (0x0004b4d6) main_touch_calib_pane_t_ParamLimits

0xc93e,	// (0x00048737) list_single_fp_cale_pane_g3_ParamLimits

0xc93e,	// (0x00048737) list_single_fp_cale_pane_g3

0x0ea5,	// (0x0003cc9e) bg_button_pane_cp012_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_vkb2_func_pane_cp03_ParamLimits

0x988d,	// (0x00045686) cell_vitu2_function_top_pane_g1_ParamLimits

0x0ea5,	// (0x0003cc9e) bg_vkb2_func_pane_cp04_ParamLimits

0xa4ba,	// (0x000462b3) main_ncimui_button_group_pane_ParamLimits

0xa4ba,	// (0x000462b3) main_ncimui_button_group_pane

0xa51a,	// (0x00046313) main_ncimui_pane_t3_ParamLimits

0xa51a,	// (0x00046313) main_ncimui_pane_t3

0xe3bf,	// (0x0004a1b8) phacti_button_group_pane

0xe6bd,	// (0x0004a4b6) aid_size_list_single_double_ParamLimits

0xb16f,	// (0x00046f68) popup_ezdial_listscroll_window_ParamLimits

0xb18b,	// (0x00046f84) popup_number_entry_window_cp01_ParamLimits

0xb22b,	// (0x00047024) phacti_button_pane_ParamLimits

0xb22b,	// (0x00047024) phacti_button_pane

0x07fd,	// (0x0003c5f6) bg_button_pane_cp14

0xe7cc,	// (0x0004a5c5) phacti_button_pane_t1

0xb23c,	// (0x00047035) main_touch_calib_button_pane_ParamLimits

0xb23c,	// (0x00047035) main_touch_calib_button_pane

0x0f70,	// (0x0003cd69) bg_button_pane_cp18_ParamLimits

0x0f70,	// (0x0003cd69) bg_button_pane_cp18

0xe7da,	// (0x0004a5d3) main_touch_calib_button_pane_t1_ParamLimits

0xe7da,	// (0x0004a5d3) main_touch_calib_button_pane_t1

0xe7f0,	// (0x0004a5e9) main_touch_calib_button_pane_t2_ParamLimits

0xe7f0,	// (0x0004a5e9) main_touch_calib_button_pane_t2

0x0001,

0xfd4b,	// (0x0004bb44) main_touch_calib_button_pane_t_ParamLimits

0xfd4b,	// (0x0004bb44) main_touch_calib_button_pane_t

0x07fd,	// (0x0003c5f6) cell_ncimui_button_pane

0x07fd,	// (0x0003c5f6) bg_button_pane_cp032

0xe80e,	// (0x0004a607) cell_ncimui_button_pane_t1

0xee39,	// (0x0004ac32) image3_infobar_pane_ParamLimits

0xee39,	// (0x0004ac32) image3_infobar_pane

0xa92f,	// (0x00046728) fs_bigclock_status_pane_ParamLimits

0xa92f,	// (0x00046728) fs_bigclock_status_pane

0xa93c,	// (0x00046735) main_fs_bigclock_clock_pane_ParamLimits

0xa93c,	// (0x00046735) main_fs_bigclock_clock_pane

0xa95a,	// (0x00046753) main_fs_bigclock_indi_pane_ParamLimits

0xa95a,	// (0x00046753) main_fs_bigclock_indi_pane

0xa98c,	// (0x00046785) main_fs_bigclock_swipe_pane_ParamLimits

0xa98c,	// (0x00046785) main_fs_bigclock_swipe_pane

0x07fd,	// (0x0003c5f6) main_fs_clock_dumped_data

0xdd8e,	// (0x00049b87) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdd8e,	// (0x00049b87) list_single_fs_bigclock_indicator_pane_g1

0xdda9,	// (0x00049ba2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdda9,	// (0x00049ba2) list_single_fs_bigclock_indicator_pane_g2

0xddc3,	// (0x00049bbc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xddc3,	// (0x00049bbc) list_single_fs_bigclock_indicator_pane_g3

0xdddd,	// (0x00049bd6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdddd,	// (0x00049bd6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbec,	// (0x0004b9e5) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbec,	// (0x0004b9e5) list_single_fs_bigclock_indicator_pane_g

0xde08,	// (0x00049c01) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xde08,	// (0x00049c01) list_single_fs_bigclock_indicator_pane_t1

0xde30,	// (0x00049c29) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xde30,	// (0x00049c29) list_single_fs_bigclock_indicator_pane_t2

0xde58,	// (0x00049c51) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xde58,	// (0x00049c51) list_single_fs_bigclock_indicator_pane_t3

0xde80,	// (0x00049c79) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xde80,	// (0x00049c79) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbf7,	// (0x0004b9f0) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbf7,	// (0x0004b9f0) list_single_fs_bigclock_indicator_pane_t

0xe81c,	// (0x0004a615) image3_infobar_fav_pane_ParamLimits

0xe81c,	// (0x0004a615) image3_infobar_fav_pane

0xe82c,	// (0x0004a625) image3_infobar_loc_pane_ParamLimits

0xe82c,	// (0x0004a625) image3_infobar_loc_pane

0xe840,	// (0x0004a639) image3_infobar_time_pane_ParamLimits

0xe840,	// (0x0004a639) image3_infobar_time_pane

0x1158,	// (0x0003cf51) image3_infobar_time_pane_g1

0xe850,	// (0x0004a649) image3_infobar_time_pane_t1

0x1158,	// (0x0003cf51) image3_infobar_loc_pane_g1

0xe85e,	// (0x0004a657) image3_infobar_loc_pane_g2

0x0001,

0xfd50,	// (0x0004bb49) image3_infobar_loc_pane_g

0xe866,	// (0x0004a65f) image3_infobar_loc_pane_t1

0x1158,	// (0x0003cf51) image3_infobar_fav_pane_g1

0xe874,	// (0x0004a66d) image3_infobar_fav_pane_g2

0x0001,

0xfd55,	// (0x0004bb4e) image3_infobar_fav_pane_g

0xe87c,	// (0x0004a675) fs_bigclock_status_battery_pane

0xe885,	// (0x0004a67e) fs_bigclock_status_signal_pane

0xe88e,	// (0x0004a687) fs_bigclock_status_title_pane

0xe897,	// (0x0004a690) fs_bigclock_status_signal_pane_g1

0xe8a0,	// (0x0004a699) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5a,	// (0x0004bb53) fs_bigclock_status_signal_pane_g

0xe8a8,	// (0x0004a6a1) fs_bigclock_status_battery_pane_g1

0xe8b1,	// (0x0004a6aa) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd5f,	// (0x0004bb58) fs_bigclock_status_battery_pane_g

0xe8b9,	// (0x0004a6b2) fs_bigclock_status_title_pane_t1

0xb251,	// (0x0004704a) main_fs_bigclock_clock_pane_g1

0xb251,	// (0x0004704a) main_fs_bigclock_clock_pane_g2

0xb262,	// (0x0004705b) main_fs_bigclock_clock_pane_g3

0xb262,	// (0x0004705b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd64,	// (0x0004bb5d) main_fs_bigclock_clock_pane_g

0xb275,	// (0x0004706e) main_fs_bigclock_clock_pane_t1

0xb28b,	// (0x00047084) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd6d,	// (0x0004bb66) main_fs_bigclock_clock_pane_t

0xe8c7,	// (0x0004a6c0) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe8c7,	// (0x0004a6c0) list_single_fs_bigclock_indicator_pane

0xe8d8,	// (0x0004a6d1) list_single_fs_bigclock_pane_ParamLimits

0xe8d8,	// (0x0004a6d1) list_single_fs_bigclock_pane

0xe8fe,	// (0x0004a6f7) main_fs_bigclock_indicator_pane_t1

0xe90d,	// (0x0004a706) list_single_fs_bigclock_pane_g1

0xe915,	// (0x0004a70e) list_single_fs_bigclock_pane_t1

0x1158,	// (0x0003cf51) main_fs_bigclock_swipe_pane_g1

0xe958,	// (0x0004a751) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd7e,	// (0x0004bb77) main_fs_bigclock_swipe_pane_g

0xe960,	// (0x0004a759) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe960,	// (0x0004a759) main_fs_bigclock_swipe_pane_t1

0x54a7,	// (0x000412a0) call_type_pane_ParamLimits

0x07fd,	// (0x0003c5f6) main_btmg_pane

0xe593,	// (0x0004a38c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe593,	// (0x0004a38c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf1,	// (0x0004baea) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf1,	// (0x0004baea) list_single_cale_mrui_row_pane_g

0xe718,	// (0x0004a511) list_recal_vselct_arw_lo_pane

0xe720,	// (0x0004a519) list_recal_vselct_arw_up_pane

0xe728,	// (0x0004a521) list_recal_vselct_pane

0xb2e5,	// (0x000470de) btmg_button_pane

0xb2ef,	// (0x000470e8) main_btmg_pane_g1

0x07fd,	// (0x0003c5f6) bg_button_pane_cp044

0xe97d,	// (0x0004a776) btmg_button_pane_t1

0x7214,	// (0x0004300d) aid_listscroll_gen

0x0ea5,	// (0x0003cc9e) main_cntbar_detail_pane

0xe288,	// (0x0004a081) list_cmail_folder_pane

0x549b,	// (0x00041294) sp_fs_scroll_pane_cp03_ParamLimits

0x3542,	// (0x0003f33b) list_single_fs_dyc_pane_cp01_ParamLimits

0x3542,	// (0x0003f33b) list_single_fs_dyc_pane_cp01

0xe98b,	// (0x0004a784) aid_size_cmail_indent

0xe994,	// (0x0004a78d) list_single_dyc_row_pane_cp01

0xb325,	// (0x0004711e) cntbar_detail_list_pane_ParamLimits

0xb325,	// (0x0004711e) cntbar_detail_list_pane

0xb371,	// (0x0004716a) main_cntbar_detail_cont_pane_ParamLimits

0xb371,	// (0x0004716a) main_cntbar_detail_cont_pane

0x549b,	// (0x00041294) scroll_pane_cp032_ParamLimits

0x549b,	// (0x00041294) scroll_pane_cp032

0xb385,	// (0x0004717e) cntbar_detail_list_event_pane_ParamLimits

0xb385,	// (0x0004717e) cntbar_detail_list_event_pane

0xb335,	// (0x0004712e) cntbar_detail_list_shct_pane

0x13cb,	// (0x0003d1c4) aid_list_gen

0xe99d,	// (0x0004a796) aid_scroll

0xe9a6,	// (0x0004a79f) aid_size_touch_scroll_bar

0xab34,	// (0x0004692d) aid_list_double

0x3559,	// (0x0003f352) aid_list_single

0xe9af,	// (0x0004a7a8) aid_list_single_lg

0x3562,	// (0x0003f35b) aid_list_z_g_a_sm

0x356a,	// (0x0003f363) aid_list_z_g_d

0x3572,	// (0x0003f36b) aid_txt_z_prm

0x3580,	// (0x0003f379) aid_txt_z_prm_cp01

0x358e,	// (0x0003f387) aid_txt_z_sec

0xb395,	// (0x0004718e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb395,	// (0x0004718e) main_cntbar_detail_cont_pane_g1

0xb3a9,	// (0x000471a2) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb3a9,	// (0x000471a2) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd83,	// (0x0004bb7c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd83,	// (0x0004bb7c) main_cntbar_detail_cont_pane_g

0xe9b8,	// (0x0004a7b1) main_cntbar_detail_cont_pane_t1

0xe9c6,	// (0x0004a7bf) main_cntbar_detail_cont_pane_t2

0xe9d4,	// (0x0004a7cd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd88,	// (0x0004bb81) main_cntbar_detail_cont_pane_t

0xb3b9,	// (0x000471b2) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb3b9,	// (0x000471b2) cell_cntbar_detail_list_shct_pane

0xe9e2,	// (0x0004a7db) cntbar_detail_list_shct_pane_g1

0xe9eb,	// (0x0004a7e4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd8f,	// (0x0004bb88) cntbar_detail_list_shct_pane_g

0xb3cd,	// (0x000471c6) cntbar_detail_list_event_pane_g1_ParamLimits

0xb3cd,	// (0x000471c6) cntbar_detail_list_event_pane_g1

0xb3d9,	// (0x000471d2) cntbar_detail_list_event_pane_g2_ParamLimits

0xb3d9,	// (0x000471d2) cntbar_detail_list_event_pane_g2

0x0005,

0xfd94,	// (0x0004bb8d) cntbar_detail_list_event_pane_g_ParamLimits

0xfd94,	// (0x0004bb8d) cntbar_detail_list_event_pane_g

0xb445,	// (0x0004723e) cntbar_detail_list_event_pane_t1_ParamLimits

0xb445,	// (0x0004723e) cntbar_detail_list_event_pane_t1

0xb45a,	// (0x00047253) cntbar_detail_list_event_pane_t2_ParamLimits

0xb45a,	// (0x00047253) cntbar_detail_list_event_pane_t2

0x0002,

0xfda1,	// (0x0004bb9a) cntbar_detail_list_event_pane_t_ParamLimits

0xfda1,	// (0x0004bb9a) cntbar_detail_list_event_pane_t

0x1158,	// (0x0003cf51) cell_cntbar_detail_list_shct_pane_g1

0x1b42,	// (0x0003d93b) navi_pane_mv_g3

0x0ea5,	// (0x0003cc9e) main_cntbar_detail_pane_ParamLimits

0x07fd,	// (0x0003c5f6) main_notif_wgt_pane

0xce14,	// (0x00048c0d) aid_tch_main_mp4_pane_g4

0xee31,	// (0x0004ac2a) popup_slider_window_cp02

0xe70e,	// (0x0004a507) list_recal_day_event_pane

0xb2f9,	// (0x000470f2) cntbar_detail_btn_pane_ParamLimits

0xb2f9,	// (0x000470f2) cntbar_detail_btn_pane

0xb30f,	// (0x00047108) cntbar_detail_btn_pane_cp01_ParamLimits

0xb30f,	// (0x00047108) cntbar_detail_btn_pane_cp01

0xb335,	// (0x0004712e) cntbar_detail_list_shct_pane_ParamLimits

0xb345,	// (0x0004713e) cntbar_detail_pane_g1_ParamLimits

0xb345,	// (0x0004713e) cntbar_detail_pane_g1

0xb355,	// (0x0004714e) cntbar_detail_pane_t1_ParamLimits

0xb355,	// (0x0004714e) cntbar_detail_pane_t1

0xb3e5,	// (0x000471de) cntbar_detail_list_event_pane_g3_ParamLimits

0xb3e5,	// (0x000471de) cntbar_detail_list_event_pane_g3

0xb3fd,	// (0x000471f6) cntbar_detail_list_event_pane_g4_ParamLimits

0xb3fd,	// (0x000471f6) cntbar_detail_list_event_pane_g4

0xb415,	// (0x0004720e) cntbar_detail_list_event_pane_g5_ParamLimits

0xb415,	// (0x0004720e) cntbar_detail_list_event_pane_g5

0xb42d,	// (0x00047226) cntbar_detail_list_event_pane_g6_ParamLimits

0xb42d,	// (0x00047226) cntbar_detail_list_event_pane_g6

0xb46f,	// (0x00047268) cntbar_detail_list_event_pane_t3_ParamLimits

0xb46f,	// (0x00047268) cntbar_detail_list_event_pane_t3

0xb481,	// (0x0004727a) popup_notif_wgt_window_ParamLimits

0xb481,	// (0x0004727a) popup_notif_wgt_window

0xb49a,	// (0x00047293) popup_submenu_window_cp01_ParamLimits

0xb49a,	// (0x00047293) popup_submenu_window_cp01

0x1122,	// (0x0003cf1b) bg_popup_window_pane_cp10

0xe9f4,	// (0x0004a7ed) listscroll_notif_wgt_pane

0xea06,	// (0x0004a7ff) list_notif_wgt_window

0xea0f,	// (0x0004a808) scroll_pane_cp033

0xb4b0,	// (0x000472a9) list_notif_wgt_row_pane_ParamLimits

0xb4b0,	// (0x000472a9) list_notif_wgt_row_pane

0xea18,	// (0x0004a811) aid_size_list_notif_wgt_del

0xea25,	// (0x0004a81e) list_notif_wgt_row_pane_g1

0xea31,	// (0x0004a82a) list_notif_wgt_row_pane_g2

0xea40,	// (0x0004a839) list_notif_wgt_row_pane_g3

0x0002,

0xfda8,	// (0x0004bba1) list_notif_wgt_row_pane_g

0xea4d,	// (0x0004a846) list_notif_wgt_row_pane_t1

0xea63,	// (0x0004a85c) list_notif_wgt_row_pane_t2

0xea75,	// (0x0004a86e) list_notif_wgt_row_pane_t3

0x0002,

0xfdaf,	// (0x0004bba8) list_notif_wgt_row_pane_t

0xd1f4,	// (0x00048fed) list_recal_day_event_pane_g1

0xea87,	// (0x0004a880) list_recal_day_event_pane_t1

0x07fd,	// (0x0003c5f6) bg_button_pane_cp045

0xea96,	// (0x0004a88f) cntbar_detail_btn_pane_t1

0x1f5e,	// (0x0003dd57) main_callh_pane_ParamLimits

0x1f5e,	// (0x0003dd57) main_callh_pane

0x07fd,	// (0x0003c5f6) main_coverflow0_pane

0x07fd,	// (0x0003c5f6) main_wgtman_pane

0xa9a4,	// (0x0004679d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xa9a4,	// (0x0004679d) main_fs_bigclock_unlock_btn_pane

0xae10,	// (0x00046c09) bg_button_pane_cp16

0xae20,	// (0x00046c19) cell_tport_appsw_pane_g3

0xb4c0,	// (0x000472b9) cf0_flow_pane_ParamLimits

0xb4c0,	// (0x000472b9) cf0_flow_pane

0xeaa4,	// (0x0004a89d) listscroll_cf0_pane

0xeaaf,	// (0x0004a8a8) main_cf0_pane_g1

0xb4d5,	// (0x000472ce) main_cf0_pane_t1_ParamLimits

0xb4d5,	// (0x000472ce) main_cf0_pane_t1

0xb4ec,	// (0x000472e5) main_cf0_pane_t2_ParamLimits

0xb4ec,	// (0x000472e5) main_cf0_pane_t2

0x0001,

0xfdbb,	// (0x0004bbb4) main_cf0_pane_t_ParamLimits

0xfdbb,	// (0x0004bbb4) main_cf0_pane_t

0xeac1,	// (0x0004a8ba) scroll_pane_cp11

0xb503,	// (0x000472fc) cf0_flow_pane_g1

0xb50b,	// (0x00047304) cf0_flow_pane_g2

0x0001,

0xfdc0,	// (0x0004bbb9) cf0_flow_pane_g

0xb513,	// (0x0004730c) cf0_flow_pane_t1

0x07fd,	// (0x0003c5f6) main_call6_pane

0x07fd,	// (0x0003c5f6) main_calllock_pane

0xb521,	// (0x0004731a) call6_btn_grp_pane_ParamLimits

0xb521,	// (0x0004731a) call6_btn_grp_pane

0xb53b,	// (0x00047334) call6_pane_g1_ParamLimits

0xb53b,	// (0x00047334) call6_pane_g1

0xb551,	// (0x0004734a) popup_call6_1st_window_ParamLimits

0xb551,	// (0x0004734a) popup_call6_1st_window

0xb562,	// (0x0004735b) popup_call6_2nd_window_ParamLimits

0xb562,	// (0x0004735b) popup_call6_2nd_window

0xb573,	// (0x0004736c) cell_call6_btn_pane_ParamLimits

0xb573,	// (0x0004736c) cell_call6_btn_pane

0x1122,	// (0x0003cf1b) bg_popup_call2_in_pane_cp03

0xeacc,	// (0x0004a8c5) popup_call6_1st_window_g1

0xead4,	// (0x0004a8cd) popup_call6_1st_window_g2

0xeadc,	// (0x0004a8d5) popup_call6_1st_window_g3

0x0002,

0xfdc5,	// (0x0004bbbe) popup_call6_1st_window_g

0xeae4,	// (0x0004a8dd) popup_call6_1st_window_t1

0xeaf3,	// (0x0004a8ec) popup_call6_1st_window_t2

0xeb01,	// (0x0004a8fa) popup_call6_1st_window_t3

0x0002,

0xfdcc,	// (0x0004bbc5) popup_call6_1st_window_t

0x1122,	// (0x0003cf1b) bg_popup_call2_in_pane_cp04

0xeb0f,	// (0x0004a908) popup_call6_2nd_window_g1

0xeb17,	// (0x0004a910) popup_call6_2nd_window_g2

0xeb1f,	// (0x0004a918) popup_call6_2nd_window_g3

0x0002,

0xfdd3,	// (0x0004bbcc) popup_call6_2nd_window_g

0xeb27,	// (0x0004a920) popup_call6_2nd_window_t1

0x07fd,	// (0x0003c5f6) bg_button_pane_cp15

0xeb36,	// (0x0004a92f) cell_call6_btn_pane_g1

0xf076,	// (0x0004ae6f) cell_call6_btn_pane_t1

0xb586,	// (0x0004737f) listscroll_wgtman_pane_ParamLimits

0xb586,	// (0x0004737f) listscroll_wgtman_pane

0xb5a7,	// (0x000473a0) wgtman_btn_pane_ParamLimits

0xb5a7,	// (0x000473a0) wgtman_btn_pane

0x1949,	// (0x0003d742) aid_scroll_copy1

0xeb3f,	// (0x0004a938) list_wgtman_pane

0xb5ea,	// (0x000473e3) wgtman_btn_pane_g1_ParamLimits

0xb5ea,	// (0x000473e3) wgtman_btn_pane_g1

0xb616,	// (0x0004740f) wgtman_btn_pane_t1_ParamLimits

0xb616,	// (0x0004740f) wgtman_btn_pane_t1

0xeb49,	// (0x0004a942) wgtman_btn_pane_t2_ParamLimits

0xeb49,	// (0x0004a942) wgtman_btn_pane_t2

0x0001,

0xfdda,	// (0x0004bbd3) wgtman_btn_pane_t_ParamLimits

0xfdda,	// (0x0004bbd3) wgtman_btn_pane_t

0xb653,	// (0x0004744c) listrow_wgtman_pane_ParamLimits

0xb653,	// (0x0004744c) listrow_wgtman_pane

0xb665,	// (0x0004745e) listrow_wgtman_pane_g1

0xb672,	// (0x0004746b) listrow_wgtman_pane_g2

0x0001,

0xfddf,	// (0x0004bbd8) listrow_wgtman_pane_g

0x359c,	// (0x0003f395) listrow_wgtman_pane_t1

0x35b4,	// (0x0003f3ad) listrow_wgtman_pane_t2

0x0001,

0xfde4,	// (0x0004bbdd) listrow_wgtman_pane_t

0x35da,	// (0x0003f3d3) wait_bar_pane_cp09

0xeb60,	// (0x0004a959) main_calllock_btn_pane

0xeb6a,	// (0x0004a963) main_calllock_pane_g1

0x07fd,	// (0x0003c5f6) bg_button_pane_cp17

0xeb36,	// (0x0004a92f) main_calllock_btn_pane_g1

0xeb72,	// (0x0004a96b) main_calllock_btn_pane_t1

0x07fd,	// (0x0003c5f6) main_dialer3_pane

0x07fd,	// (0x0003c5f6) main_fmrd2_pane

0x1158,	// (0x0003cf51) main_fs_bigclock_unlock_btn_pane_g1

0xb698,	// (0x00047491) main_fs_bigclock_unlock_btn_pane_t1

0xb6a6,	// (0x0004749f) area_fmrd2_info_pane_ParamLimits

0xb6a6,	// (0x0004749f) area_fmrd2_info_pane

0xb6b7,	// (0x000474b0) area_fmrd2_visual_pane_ParamLimits

0xb6b7,	// (0x000474b0) area_fmrd2_visual_pane

0xb6c5,	// (0x000474be) fmrd2_indi_pane_ParamLimits

0xb6c5,	// (0x000474be) fmrd2_indi_pane

0xb6d2,	// (0x000474cb) area_fmrd2_visual_pane_g1

0xb6da,	// (0x000474d3) area_fmrd2_visual_pane_t1

0xb6ea,	// (0x000474e3) area_fmrd2_visual_pane_t2

0xb6fa,	// (0x000474f3) area_fmrd2_visual_pane_t3

0x0002,

0xfdee,	// (0x0004bbe7) area_fmrd2_visual_pane_t

0xb70a,	// (0x00047503) area_fmrd2_info_pane_g1

0xb712,	// (0x0004750b) area_fmrd2_info_pane_t1

0xb722,	// (0x0004751b) area_fmrd2_info_pane_t2

0xb732,	// (0x0004752b) area_fmrd2_info_pane_t3

0xb742,	// (0x0004753b) area_fmrd2_info_pane_t4

0x0003,

0xfdf5,	// (0x0004bbee) area_fmrd2_info_pane_t

0xb750,	// (0x00047549) fmrd2_indi_pane_t1

0xb760,	// (0x00047559) fmrd2_indi_pane_t2

0xb770,	// (0x00047569) fmrd2_indi_pane_t3

0x0002,

0xfdfe,	// (0x0004bbf7) fmrd2_indi_pane_t

0xddec,	// (0x00049be5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xddec,	// (0x00049be5) list_single_fs_bigclock_indicator_pane_g5

0xde9d,	// (0x00049c96) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xde9d,	// (0x00049c96) list_single_fs_bigclock_indicator_pane_t5

0xaf93,	// (0x00046d8c) aid_cell_bcale_month_pane_ParamLimits

0xaf93,	// (0x00046d8c) aid_cell_bcale_month_pane

0xafb1,	// (0x00046daa) bcale_month_pane_ParamLimits

0xafb1,	// (0x00046daa) bcale_month_pane

0xafd5,	// (0x00046dce) bcale_preview_pane_ParamLimits

0xafd5,	// (0x00046dce) bcale_preview_pane

0xe915,	// (0x0004a70e) list_single_fs_bigclock_pane_t1_ParamLimits

0xe934,	// (0x0004a72d) list_single_fs_bigclock_pane_t2_ParamLimits

0xe934,	// (0x0004a72d) list_single_fs_bigclock_pane_t2

0x0001,

0xfd79,	// (0x0004bb72) list_single_fs_bigclock_pane_t_ParamLimits

0xfd79,	// (0x0004bb72) list_single_fs_bigclock_pane_t

0xb690,	// (0x00047489) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfde9,	// (0x0004bbe2) main_fs_bigclock_unlock_btn_pane_g

0xb780,	// (0x00047579) aid_dia3_key_size_ParamLimits

0xb780,	// (0x00047579) aid_dia3_key_size

0xb78f,	// (0x00047588) aid_dia3_listrow_size_ParamLimits

0xb78f,	// (0x00047588) aid_dia3_listrow_size

0xb7a4,	// (0x0004759d) dia3_keypad_fun_pane_ParamLimits

0xb7a4,	// (0x0004759d) dia3_keypad_fun_pane

0xb7c0,	// (0x000475b9) dia3_keypad_num_pane_ParamLimits

0xb7c0,	// (0x000475b9) dia3_keypad_num_pane

0xb7db,	// (0x000475d4) dia3_listscroll_pane_ParamLimits

0xb7db,	// (0x000475d4) dia3_listscroll_pane

0xb7ee,	// (0x000475e7) dia3_numentry_pane_ParamLimits

0xb7ee,	// (0x000475e7) dia3_numentry_pane

0xeb81,	// (0x0004a97a) dia3_list_pane

0xeb8c,	// (0x0004a985) scroll_pane_cp12

0x07fd,	// (0x0003c5f6) bg_dia3_numentry_pane

0xb806,	// (0x000475ff) dia3_numentry_pane_t1

0xb815,	// (0x0004760e) cell_dia3_key_num_pane

0xb81d,	// (0x00047616) cell_dia3_key0_fun_pane_ParamLimits

0xb81d,	// (0x00047616) cell_dia3_key0_fun_pane

0xb831,	// (0x0004762a) cell_dia3_key1_fun_pane_ParamLimits

0xb831,	// (0x0004762a) cell_dia3_key1_fun_pane

0xb849,	// (0x00047642) dia3_listrow_pane

0xdb3f,	// (0x00049938) bg_dia3_numentry_pane_g1

0x07fd,	// (0x0003c5f6) bg_button_pane_cp21

0xeb97,	// (0x0004a990) cell_dia3_key_num_pane_t1

0xeba5,	// (0x0004a99e) cell_dia3_key_num_pane_t2

0xebb4,	// (0x0004a9ad) cell_dia3_key_num_pane_t3

0xebc3,	// (0x0004a9bc) cell_dia3_key_num_pane_t4

0x0003,

0xfe05,	// (0x0004bbfe) cell_dia3_key_num_pane_t

0x07fd,	// (0x0003c5f6) bg_button_pane_cp19

0xb85b,	// (0x00047654) cell_dia3_key0_fun_pane_g1

0x07fd,	// (0x0003c5f6) bg_button_pane_cp20

0xb863,	// (0x0004765c) cell_dia3_key1_fun_pane_g1

0xb86b,	// (0x00047664) area_left_week_number_pane

0xb877,	// (0x00047670) area_top_day_name_pane

0xb88a,	// (0x00047683) frame_month_view_pane

0xebd2,	// (0x0004a9cb) grid_month_view_pane

0xb89d,	// (0x00047696) cell_top_day_name_pane_ParamLimits

0xb89d,	// (0x00047696) cell_top_day_name_pane

0xb8ca,	// (0x000476c3) cell_area_left_week_number_pane_ParamLimits

0xb8ca,	// (0x000476c3) cell_area_left_week_number_pane

0xb8de,	// (0x000476d7) cell_month_view_pane_ParamLimits

0xb8de,	// (0x000476d7) cell_month_view_pane

0xebe0,	// (0x0004a9d9) frm_month_g1

0xb90b,	// (0x00047704) frm_month_g2

0xb91e,	// (0x00047717) frm_month_g3

0xb931,	// (0x0004772a) frm_month_g4

0xb944,	// (0x0004773d) frm_month_g5

0xb957,	// (0x00047750) frm_month_g6

0xb96a,	// (0x00047763) frm_month_g7

0xebed,	// (0x0004a9e6) frm_month_g8

0xb97d,	// (0x00047776) frm_month_g9

0xb98d,	// (0x00047786) frm_month_g10

0xb99d,	// (0x00047796) frm_month_g11

0xb9ad,	// (0x000477a6) frm_month_g12

0xb9bf,	// (0x000477b8) frm_month_g13

0xb9d1,	// (0x000477ca) frm_month_g14

0xb9e5,	// (0x000477de) frm_month_g15

0xb9f9,	// (0x000477f2) frm_month_g16

0x000f,

0xfe0e,	// (0x0004bc07) frm_month_g

0xebfa,	// (0x0004a9f3) cell_top_day_name_pane_t1

0xba0d,	// (0x00047806) cell_area_left_week_number_pane_g1

0xba19,	// (0x00047812) cell_area_left_week_number_pane_t1

0x0efe,	// (0x0003ccf7) cell_month_view_pane_g1

0xba2c,	// (0x00047825) cell_month_view_pane_t1

0x07fd,	// (0x0003c5f6) main_fps_pane

0xe0ba,	// (0x00049eb3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe0ba,	// (0x00049eb3) cmail_ddmenu_btn02_pane_cp1

0xe0d6,	// (0x00049ecf) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe0d6,	// (0x00049ecf) cmail_ddmenu_btn02_pane_cp2

0xb1c5,	// (0x00046fbe) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb1c5,	// (0x00046fbe) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2c,	// (0x0004bb25) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2c,	// (0x0004bb25) cmail_ddmenu_btn02_pane_g

0xb1e3,	// (0x00046fdc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb1e3,	// (0x00046fdc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd31,	// (0x0004bb2a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd31,	// (0x0004bb2a) cmail_ddmenu_btn02_pane_t

0xba3f,	// (0x00047838) fps_text_pane_ParamLimits

0xba3f,	// (0x00047838) fps_text_pane

0xba56,	// (0x0004784f) main_fps_pane_g1_ParamLimits

0xba56,	// (0x0004784f) main_fps_pane_g1

0xba70,	// (0x00047869) wait_bar_pane_cp010_ParamLimits

0xba70,	// (0x00047869) wait_bar_pane_cp010

0xba81,	// (0x0004787a) fps_text_pane_t1_ParamLimits

0xba81,	// (0x0004787a) fps_text_pane_t1

0x026f,	// (0x0003c068) cam4_image_uncrop_pane_g1

0x0278,	// (0x0003c071) cam4_image_uncrop_pane_g2

0x8e21,	// (0x00044c1a) cam4_image_uncrop_pane_g3

0x8e2a,	// (0x00044c23) cam4_image_uncrop_pane_g4

0x0003,

0xf870,	// (0x0004b669) cam4_image_uncrop_pane_g

0xb849,	// (0x00047642) dia3_listrow_pane_ParamLimits

0x07fd,	// (0x0003c5f6) main_phob2_pane

0xade1,	// (0x00046bda) cell_tport_appsw_pane_cp02_ParamLimits

0xade1,	// (0x00046bda) cell_tport_appsw_pane_cp02

0xadf5,	// (0x00046bee) cell_tport_appsw_pane_cp03_ParamLimits

0xadf5,	// (0x00046bee) cell_tport_appsw_pane_cp03

0x07fd,	// (0x0003c5f6) phob2_contact_card_pane

0x07fd,	// (0x0003c5f6) phob2_listscroll_pane

0xec0d,	// (0x0004aa06) phob2_list_pane

0xec15,	// (0x0004aa0e) scroll_pane_cp034

0xba99,	// (0x00047892) phob2_cc_data_pane_ParamLimits

0xba99,	// (0x00047892) phob2_cc_data_pane

0xbab8,	// (0x000478b1) phob2_cc_listscroll_pane_ParamLimits

0xbab8,	// (0x000478b1) phob2_cc_listscroll_pane

0xb653,	// (0x0004744c) list_double_large_graphic_phob2_pane_ParamLimits

0xb653,	// (0x0004744c) list_double_large_graphic_phob2_pane

0xbad6,	// (0x000478cf) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbad6,	// (0x000478cf) list_double_large_graphic_phob2_pane_g1

0x35ec,	// (0x0003f3e5) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x35ec,	// (0x0003f3e5) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe2f,	// (0x0004bc28) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe2f,	// (0x0004bc28) list_double_large_graphic_phob2_pane_g

0x3612,	// (0x0003f40b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x3612,	// (0x0003f40b) list_double_large_graphic_phob2_pane_t1

0x3627,	// (0x0003f420) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x3627,	// (0x0003f420) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe38,	// (0x0004bc31) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe38,	// (0x0004bc31) list_double_large_graphic_phob2_pane_t

0x07fd,	// (0x0003c5f6) list_highlight_pane_cp024

0xec1d,	// (0x0004aa16) phob2_cc_button_pane

0xbae3,	// (0x000478dc) phob2_cc_data_pane_g1_ParamLimits

0xbae3,	// (0x000478dc) phob2_cc_data_pane_g1

0xbafa,	// (0x000478f3) phob2_cc_data_pane_g2_ParamLimits

0xbafa,	// (0x000478f3) phob2_cc_data_pane_g2

0x0001,

0xfe3d,	// (0x0004bc36) phob2_cc_data_pane_g_ParamLimits

0xfe3d,	// (0x0004bc36) phob2_cc_data_pane_g

0xbb0c,	// (0x00047905) phob2_cc_data_pane_t1_ParamLimits

0xbb0c,	// (0x00047905) phob2_cc_data_pane_t1

0xbb24,	// (0x0004791d) phob2_cc_data_pane_t2_ParamLimits

0xbb24,	// (0x0004791d) phob2_cc_data_pane_t2

0xbb3c,	// (0x00047935) phob2_cc_data_pane_t3_ParamLimits

0xbb3c,	// (0x00047935) phob2_cc_data_pane_t3

0x0002,

0xfe42,	// (0x0004bc3b) phob2_cc_data_pane_t_ParamLimits

0xfe42,	// (0x0004bc3b) phob2_cc_data_pane_t

0x0151,	// (0x0003bf4a) phob2_cc_list_pane_ParamLimits

0x0151,	// (0x0003bf4a) phob2_cc_list_pane

0xd29d,	// (0x00049096) scroll_pane_cp035_ParamLimits

0xd29d,	// (0x00049096) scroll_pane_cp035

0x0ea5,	// (0x0003cc9e) bg_button_pane_cp033

0x015d,	// (0x0003bf56) phob2_cc_button_pane_g1

0x0169,	// (0x0003bf62) phob2_cc_button_pane_t1

0x017e,	// (0x0003bf77) phob2_cc_button_pane_t2

0x0001,

0xfe49,	// (0x0004bc42) phob2_cc_button_pane_t

0xbb54,	// (0x0004794d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbb54,	// (0x0004794d) list_double_large_graphic_phob2_cc_pane

0xbb84,	// (0x0004797d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbb84,	// (0x0004797d) list_double_large_graphic_phob2_cc_pane_g1

0x363c,	// (0x0003f435) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x363c,	// (0x0003f435) list_double_large_graphic_phob2_cc_pane_g2

0x3648,	// (0x0003f441) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x3648,	// (0x0003f441) list_double_large_graphic_phob2_cc_pane_g3

0x3654,	// (0x0003f44d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x3654,	// (0x0003f44d) list_double_large_graphic_phob2_cc_pane_g4

0xec25,	// (0x0004aa1e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xec25,	// (0x0004aa1e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe4e,	// (0x0004bc47) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe4e,	// (0x0004bc47) list_double_large_graphic_phob2_cc_pane_g

0x3660,	// (0x0003f459) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x3660,	// (0x0003f459) list_double_large_graphic_phob2_cc_pane_t1

0x3689,	// (0x0003f482) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x3689,	// (0x0003f482) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe59,	// (0x0004bc52) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe59,	// (0x0004bc52) list_double_large_graphic_phob2_cc_pane_t

0x020f,	// (0x0003c008) list_highlight_pane_cp025_ParamLimits

0x020f,	// (0x0003c008) list_highlight_pane_cp025

0x0ea5,	// (0x0003cc9e) bg_button_pane_cp033_ParamLimits

0x015d,	// (0x0003bf56) phob2_cc_button_pane_g1_ParamLimits

0x0169,	// (0x0003bf62) phob2_cc_button_pane_t1_ParamLimits

0x017e,	// (0x0003bf77) phob2_cc_button_pane_t2_ParamLimits

0xfe49,	// (0x0004bc42) phob2_cc_button_pane_t_ParamLimits

0x38eb,	// (0x0003f6e4) popup_wgtman_window

0xd08d,	// (0x00048e86) scroll_pane_cp038

0xb5cc,	// (0x000473c5) wgtman_btn_pane_cp_01_ParamLimits

0xb5cc,	// (0x000473c5) wgtman_btn_pane_cp_01

0x021d,	// (0x0003c016) wgtman_content_pane

0x0226,	// (0x0003c01f) wgtman_heading_pane

0x07fd,	// (0x0003c5f6) bg_heading_pane_cp02

0x022f,	// (0x0003c028) wgtman_heading_pane_g1

0x0237,	// (0x0003c030) wgtman_heading_pane_t1

0x0245,	// (0x0003c03e) scroll_pane_cp036

0x024d,	// (0x0003c046) wgtman_list_pane

0x0255,	// (0x0003c04e) wgtman_list_pane_t1_ParamLimits

0x0255,	// (0x0003c04e) wgtman_list_pane_t1

0xeebd,	// (0x0004acb6) cam4_grid_pane

0x2ff7,	// (0x0003edf0) bg_button_pane_cp015_ParamLimits

0x9a27,	// (0x00045820) bg_button_pane_cp016_ParamLimits

0x9a3a,	// (0x00045833) bg_button_pane_cp017_ParamLimits

0x3039,	// (0x0003ee32) popup_vitu2_query_window_g3_ParamLimits

0x3039,	// (0x0003ee32) popup_vitu2_query_window_g3

0x30b4,	// (0x0003eead) popup_vitu2_query_window_t6_ParamLimits

0x30b4,	// (0x0003eead) popup_vitu2_query_window_t6

0x30df,	// (0x0003eed8) popup_vitu2_query_window_t7_ParamLimits

0x30df,	// (0x0003eed8) popup_vitu2_query_window_t7

0x026f,	// (0x0003c068) cam4_grid_pane_g1

0x0278,	// (0x0003c071) cam4_grid_pane_g2

0x0281,	// (0x0003c07a) cam4_grid_pane_g3

0x028a,	// (0x0003c083) cam4_grid_pane_g4

0x0003,

0xfe5e,	// (0x0004bc57) cam4_grid_pane_g

0x448a,	// (0x00040283) aid_placing_vt_slider_lsc_ParamLimits

0x4795,	// (0x0004058e) vidtel_button_pane_ParamLimits

0x4795,	// (0x0004058e) vidtel_button_pane

0x07fd,	// (0x0003c5f6) bg_button_pane_cp034

0x0295,	// (0x0003c08e) vidtel_button_pane_g1

0x029d,	// (0x0003c096) vidtel_button_pane_t1

0xd1e4,	// (0x00048fdd) aid_size_vtel_slider_touch

0xd29d,	// (0x00049096) scroll_pane_cp039

0xa698,	// (0x00046491) ncim_query_button_pane_cp01_ParamLimits

0xa6b7,	// (0x000464b0) ncimui_query_pane_g1_ParamLimits

0x0ea5,	// (0x0003cc9e) input_focus_pane_cp012_ParamLimits

0xdb7d,	// (0x00049976) ncim_query_entry_pane_t1_ParamLimits

0xd29d,	// (0x00049096) scroll_pane_cp039_ParamLimits

0x1a2d,	// (0x0003d826) navi_pane_bcale_mc_g1

0x1a35,	// (0x0003d82e) navi_pane_bcale_mc_t1

0xe10a,	// (0x00049f03) main_sp_fs_email_pane_g1

0xe116,	// (0x00049f0f) main_sp_fs_email_pane_g2

0x0001,

0xfc61,	// (0x0004ba5a) main_sp_fs_email_pane_g

0xe59f,	// (0x0004a398) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe59f,	// (0x0004a398) list_single_cale_mrui_row_pane_g3

0x3538,	// (0x0003f331) list_single_recal_day_pane_g5_event_pane

0xe77f,	// (0x0004a578) list_single_recal_day_pane_g7

0x02b3,	// (0x0003c0ac) list_recal_day_event_pane_cp01

0x02bc,	// (0x0003c0b5) list_recal_vselct_arw_lo_pane_cp01

0x02c4,	// (0x0003c0bd) list_recal_vselct_arw_up_pane_cp01

0x02cc,	// (0x0003c0c5) list_recal_vselct_pane_cp01

0xd1f4,	// (0x00048fed) list_recal_day_event_pane_cp01_g1

0xec31,	// (0x0004aa2a) list_recal_day_event_pane_cp01_t1

0xe787,	// (0x0004a580) list_single_recal_day_pane_t1_ParamLimits

0xe799,	// (0x0004a592) list_single_recal_day_pane_t2_ParamLimits

0xfd41,	// (0x0004bb3a) list_single_recal_day_pane_t_ParamLimits

0x0e83,	// (0x0003cc7c) bg_notes_pane_ParamLimits

0x0f4e,	// (0x0003cd47) list_notes_pane_ParamLimits

0x3af1,	// (0x0003f8ea) scroll_pane_cp06_ParamLimits

0x0f70,	// (0x0003cd69) main_notes_pane_ParamLimits

0x0ea5,	// (0x0003cc9e) main_welc_pane

0xbbac,	// (0x000479a5) main_welc_body_pane_ParamLimits

0xbbac,	// (0x000479a5) main_welc_body_pane

0xbbca,	// (0x000479c3) main_welc_opti_pane_ParamLimits

0xbbca,	// (0x000479c3) main_welc_opti_pane

0xbc3e,	// (0x00047a37) main_welc_pane_t1_ParamLimits

0xbc3e,	// (0x00047a37) main_welc_pane_t1

0xbda5,	// (0x00047b9e) main_welc_body_row_pane_ParamLimits

0xbda5,	// (0x00047b9e) main_welc_body_row_pane

0x0807,	// (0x0003c600) main_welc_opti_row_pane_ParamLimits

0x0807,	// (0x0003c600) main_welc_opti_row_pane

0x049d,	// (0x0003c296) main_welc_opti_row_pane_g1

0xbdb9,	// (0x00047bb2) main_welc_opti_row_pane_t1

0x04b4,	// (0x0003c2ad) main_welc_body_row_pane_t1

0xe9fe,	// (0x0004a7f7) popup_notif_wgt_heading_pane

0xea18,	// (0x0004a811) aid_size_list_notif_wgt_del_ParamLimits

0xea25,	// (0x0004a81e) list_notif_wgt_row_pane_g1_ParamLimits

0xea31,	// (0x0004a82a) list_notif_wgt_row_pane_g2_ParamLimits

0xea40,	// (0x0004a839) list_notif_wgt_row_pane_g3_ParamLimits

0xfda8,	// (0x0004bba1) list_notif_wgt_row_pane_g_ParamLimits

0xea4d,	// (0x0004a846) list_notif_wgt_row_pane_t1_ParamLimits

0xea63,	// (0x0004a85c) list_notif_wgt_row_pane_t2_ParamLimits

0xea75,	// (0x0004a86e) list_notif_wgt_row_pane_t3_ParamLimits

0xfdaf,	// (0x0004bba8) list_notif_wgt_row_pane_t_ParamLimits

0xb665,	// (0x0004745e) listrow_wgtman_pane_g1_ParamLimits

0xb672,	// (0x0004746b) listrow_wgtman_pane_g2_ParamLimits

0xfddf,	// (0x0004bbd8) listrow_wgtman_pane_g_ParamLimits

0x359c,	// (0x0003f395) listrow_wgtman_pane_t1_ParamLimits

0x35b4,	// (0x0003f3ad) listrow_wgtman_pane_t2_ParamLimits

0xfde4,	// (0x0004bbdd) listrow_wgtman_pane_t_ParamLimits

0x35da,	// (0x0003f3d3) wait_bar_pane_cp09_ParamLimits

0x07fd,	// (0x0003c5f6) bg_popup_heading_pane_cp02

0x04c3,	// (0x0003c2bc) popup_notif_wgt_heading_pane_g1

0x04cb,	// (0x0003c2c4) popup_notif_wgt_heading_pane_t1

0x07fd,	// (0x0003c5f6) main_vids_pane

0x07fd,	// (0x0003c5f6) vids_listscroll_pane

0xbdc8,	// (0x00047bc1) scroll_pane_cp040

0x07fd,	// (0x0003c5f6) vids_list_pane

0xbdd3,	// (0x00047bcc) vids_list_double_pane_ParamLimits

0xbdd3,	// (0x00047bcc) vids_list_double_pane

0xbde4,	// (0x00047bdd) vids_list_double_pane_g1

0xbded,	// (0x00047be6) vids_list_double_pane_t1

0xbdfd,	// (0x00047bf6) vids_list_double_pane_t2

0x0001,

0xfe7d,	// (0x0004bc76) vids_list_double_pane_t

0x0ea5,	// (0x0003cc9e) main_ncimui_pane_ParamLimits

0xa4ce,	// (0x000462c7) main_ncimui_pane_g1_ParamLimits

0xa4da,	// (0x000462d3) main_ncimui_pane_g2_ParamLimits

0xa4da,	// (0x000462d3) main_ncimui_pane_g2

0x0001,

0xfb62,	// (0x0004b95b) main_ncimui_pane_g_ParamLimits

0xfb62,	// (0x0004b95b) main_ncimui_pane_g

0xbbe5,	// (0x000479de) main_welc_pane_g1_ParamLimits

0xbbe5,	// (0x000479de) main_welc_pane_g1

0xbbfa,	// (0x000479f3) main_welc_pane_g2_ParamLimits

0xbbfa,	// (0x000479f3) main_welc_pane_g2

0x0003,

0xfe67,	// (0x0004bc60) main_welc_pane_g_ParamLimits

0xfe67,	// (0x0004bc60) main_welc_pane_g

0x0e83,	// (0x0003cc7c) listscroll_mce_pane_ParamLimits

0x1b82,	// (0x0003d97b) wait_bar_pane_cp10

0x7230,	// (0x00043029) main_cale_day_pane_ParamLimits

0x7230,	// (0x00043029) main_cale_week_pane_ParamLimits

0x0e83,	// (0x0003cc7c) main_messa_pane_ParamLimits

0x823c,	// (0x00044035) main_clock2_btn_pane_ParamLimits

0x823c,	// (0x00044035) main_clock2_btn_pane

0xc9b8,	// (0x000487b1) main_clock2_btn_pane_cp01_ParamLimits

0xc9b8,	// (0x000487b1) main_clock2_btn_pane_cp01

0xe52b,	// (0x0004a324) list_cale_mrui_pane_ParamLimits

0xeab9,	// (0x0004a8b2) main_cf0_pane_g2

0x0001,

0xfdb6,	// (0x0004bbaf) main_cf0_pane_g

0xb86b,	// (0x00047664) area_left_week_number_pane_ParamLimits

0xb877,	// (0x00047670) area_top_day_name_pane_ParamLimits

0xb88a,	// (0x00047683) frame_month_view_pane_ParamLimits

0xebd2,	// (0x0004a9cb) grid_month_view_pane_ParamLimits

0xebe0,	// (0x0004a9d9) frm_month_g1_ParamLimits

0xb90b,	// (0x00047704) frm_month_g2_ParamLimits

0xb91e,	// (0x00047717) frm_month_g3_ParamLimits

0xb931,	// (0x0004772a) frm_month_g4_ParamLimits

0xb944,	// (0x0004773d) frm_month_g5_ParamLimits

0xb957,	// (0x00047750) frm_month_g6_ParamLimits

0xb96a,	// (0x00047763) frm_month_g7_ParamLimits

0xebed,	// (0x0004a9e6) frm_month_g8_ParamLimits

0xb97d,	// (0x00047776) frm_month_g9_ParamLimits

0xb98d,	// (0x00047786) frm_month_g10_ParamLimits

0xb99d,	// (0x00047796) frm_month_g11_ParamLimits

0xb9ad,	// (0x000477a6) frm_month_g12_ParamLimits

0xb9bf,	// (0x000477b8) frm_month_g13_ParamLimits

0xb9d1,	// (0x000477ca) frm_month_g14_ParamLimits

0xb9e5,	// (0x000477de) frm_month_g15_ParamLimits

0xb9f9,	// (0x000477f2) frm_month_g16_ParamLimits

0xfe0e,	// (0x0004bc07) frm_month_g_ParamLimits

0xebfa,	// (0x0004a9f3) cell_top_day_name_pane_t1_ParamLimits

0xba0d,	// (0x00047806) cell_area_left_week_number_pane_g1_ParamLimits

0xba19,	// (0x00047812) cell_area_left_week_number_pane_t1_ParamLimits

0x0efe,	// (0x0003ccf7) cell_month_view_pane_g1_ParamLimits

0xba2c,	// (0x00047825) cell_month_view_pane_t1_ParamLimits

0x0e7b,	// (0x0003cc74) main_clock2_btn_pane_g1

0x0522,	// (0x0003c31b) main_clock2_btn_pane_t1

0x0ea5,	// (0x0003cc9e) listscroll_cmail_pane_ParamLimits

0xe10a,	// (0x00049f03) main_sp_fs_email_pane_g1_ParamLimits

0xe116,	// (0x00049f0f) main_sp_fs_email_pane_g2_ParamLimits

0xfc61,	// (0x0004ba5a) main_sp_fs_email_pane_g_ParamLimits

0xe6ef,	// (0x0004a4e8) list_recal_day_pane_ParamLimits

0xe700,	// (0x0004a4f9) mian_recal_day_pane_t1

0x3384,	// (0x0003f17d) list_single_dyc_row_text_pane_t4_ParamLimits

0x3384,	// (0x0003f17d) list_single_dyc_row_text_pane_t4

0x33cd,	// (0x0003f1c6) list_single_dyc_row_text_pane_t5_ParamLimits

0x33cd,	// (0x0003f1c6) list_single_dyc_row_text_pane_t5

0xe1b8,	// (0x00049fb1) list_single_dyc_row_text_pane_t6_ParamLimits

0xe1b8,	// (0x00049fb1) list_single_dyc_row_text_pane_t6

0x1527,	// (0x0003d320) aid_mgn_list_cale_time_pane

0x0ea5,	// (0x0003cc9e) main_gallery2_pane_ParamLimits

0xc9ce,	// (0x000487c7) main_clock2_pane_cp01_t1

0xc9de,	// (0x000487d7) main_clock2_pane_cp01_t3

0x0001,

0xf747,	// (0x0004b540) main_clock2_pane_cp01_t

0x3e80,	// (0x0003fc79) cale_week_scroll_pane_g16_ParamLimits

0x3e80,	// (0x0003fc79) cale_week_scroll_pane_g16

0x1122,	// (0x0003cf1b) vorec_slider_pane

0x029d,	// (0x0003c096) vidtel_button_pane_t1_ParamLimits

0xb251,	// (0x0004704a) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb251,	// (0x0004704a) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb262,	// (0x0004705b) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb262,	// (0x0004705b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd64,	// (0x0004bb5d) main_fs_bigclock_clock_pane_g_ParamLimits

0xb275,	// (0x0004706e) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb28b,	// (0x00047084) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd6d,	// (0x0004bb66) main_fs_bigclock_clock_pane_t_ParamLimits

0x7b11,	// (0x0004390a) main_mup3_lyrics_pane_ParamLimits

0x7b11,	// (0x0004390a) main_mup3_lyrics_pane

0xbe33,	// (0x00047c2c) main_mup3_lyrics_pane_t1_ParamLimits

0xbe33,	// (0x00047c2c) main_mup3_lyrics_pane_t1

0xcdfe,	// (0x00048bf7) aid_main_mp4_pane_t1_area

0xce08,	// (0x00048c01) aid_main_mp4_pane_t2_area

0xecc5,	// (0x0004aabe) main_mp4_pane_g7_ParamLimits

0xecc5,	// (0x0004aabe) main_mp4_pane_g7

0xecd1,	// (0x0004aaca) main_mp4_pane_g8_ParamLimits

0xecd1,	// (0x0004aaca) main_mp4_pane_g8

0x8bf4,	// (0x000449ed) aid_call6_pane_g1_size

0xbb6e,	// (0x00047967) list_double_large_graphic_phob2_other_pane_ParamLimits

0xbb6e,	// (0x00047967) list_double_large_graphic_phob2_other_pane

0x14df,	// (0x0003d2d8) list_double_large_graphic_phob2_other_pane_g1

0x07fd,	// (0x0003c5f6) list_highlight_pane_cp026

0x0ea5,	// (0x0003cc9e) main_welc_pane_ParamLimits

0xac8c,	// (0x00046a85) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xac8c,	// (0x00046a85) main_sp_fs_ctrlbar_pane_g3

0xaca6,	// (0x00046a9f) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xaca6,	// (0x00046a9f) main_sp_fs_ctrlbar_pane_g4

0xacda,	// (0x00046ad3) toolbar2_fixed_button_pane_cp01

0xace5,	// (0x00046ade) toolbar2_fixed_button_pane_cp02

0xacf2,	// (0x00046aeb) toolbar2_fixed_button_pane_cp03

0xbb90,	// (0x00047989) list_welc_entry_pane_ParamLimits

0xbb90,	// (0x00047989) list_welc_entry_pane

0xbc0f,	// (0x00047a08) main_welc_pane_g3_ParamLimits

0xbc0f,	// (0x00047a08) main_welc_pane_g3

0xbc5c,	// (0x00047a55) main_welc_pane_t2_ParamLimits

0xbc5c,	// (0x00047a55) main_welc_pane_t2

0xbc76,	// (0x00047a6f) main_welc_pane_t3_ParamLimits

0xbc76,	// (0x00047a6f) main_welc_pane_t3

0x0005,

0xfe70,	// (0x0004bc69) main_welc_pane_t_ParamLimits

0xfe70,	// (0x0004bc69) main_welc_pane_t

0xbd28,	// (0x00047b21) welc_button_pane_ParamLimits

0xbd28,	// (0x00047b21) welc_button_pane

0xbd90,	// (0x00047b89) welc_service_logo_pane_ParamLimits

0xbd90,	// (0x00047b89) welc_service_logo_pane

0xbe4f,	// (0x00047c48) list_single_welc_entry_pane_ParamLimits

0xbe4f,	// (0x00047c48) list_single_welc_entry_pane

0xbe60,	// (0x00047c59) list_single_welc_entry_pane_g1

0xbe68,	// (0x00047c61) list_single_welc_entry_pane_t1

0xbe76,	// (0x00047c6f) list_single_welc_entry_pane_t2

0x0001,

0xfe82,	// (0x0004bc7b) list_single_welc_entry_pane_t

0x07fd,	// (0x0003c5f6) bg_button_pane_cp035

0x05bd,	// (0x0003c3b6) welc_button_pane_t1

0x05cb,	// (0x0003c3c4) welc_service_logo_pane_g1

0x05d4,	// (0x0003c3cd) welc_service_logo_pane_g2

0x0001,

0xfe87,	// (0x0004bc80) welc_service_logo_pane_g

0x07fd,	// (0x0003c5f6) main_int_radio_pane

0x1f8e,	// (0x0003dd87) list_single_fs_dyc_pane_g1

0x35f8,	// (0x0003f3f1) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x35f8,	// (0x0003f3f1) list_double_large_graphic_phob2_pane_g3

0x3604,	// (0x0003f3fd) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x3604,	// (0x0003f3fd) list_double_large_graphic_phob2_pane_g4

0xbe84,	// (0x00047c7d) main_int_radio1_pane_ParamLimits

0xbe84,	// (0x00047c7d) main_int_radio1_pane

0x05ef,	// (0x0003c3e8) find_pane_cp02

0xbea1,	// (0x00047c9a) input_focus_pane_cp12_ParamLimits

0xbea1,	// (0x00047c9a) input_focus_pane_cp12

0xbeb1,	// (0x00047caa) input_focus_pane_cp13_ParamLimits

0xbeb1,	// (0x00047caa) input_focus_pane_cp13

0xbec5,	// (0x00047cbe) input_focus_pane_cp14_ParamLimits

0xbec5,	// (0x00047cbe) input_focus_pane_cp14

0x0634,	// (0x0003c42d) int_radio1_listscroll_pane

0xbed9,	// (0x00047cd2) main_int_radio1_pane_g1_ParamLimits

0xbed9,	// (0x00047cd2) main_int_radio1_pane_g1

0xbef1,	// (0x00047cea) main_int_radio1_pane_t1_ParamLimits

0xbef1,	// (0x00047cea) main_int_radio1_pane_t1

0xbf0c,	// (0x00047d05) main_int_radio1_pane_t2_ParamLimits

0xbf0c,	// (0x00047d05) main_int_radio1_pane_t2

0xbf27,	// (0x00047d20) main_int_radio1_pane_t3_ParamLimits

0xbf27,	// (0x00047d20) main_int_radio1_pane_t3

0xbf42,	// (0x00047d3b) main_int_radio1_pane_t4_ParamLimits

0xbf42,	// (0x00047d3b) main_int_radio1_pane_t4

0x06a1,	// (0x0003c49a) main_int_radio1_pane_t5_ParamLimits

0x06a1,	// (0x0003c49a) main_int_radio1_pane_t5

0xbf54,	// (0x00047d4d) main_int_radio1_pane_t6_ParamLimits

0xbf54,	// (0x00047d4d) main_int_radio1_pane_t6

0xbf69,	// (0x00047d62) main_int_radio1_pane_t7_ParamLimits

0xbf69,	// (0x00047d62) main_int_radio1_pane_t7

0xbf7e,	// (0x00047d77) main_int_radio1_pane_t8_ParamLimits

0xbf7e,	// (0x00047d77) main_int_radio1_pane_t8

0xbf9d,	// (0x00047d96) main_int_radio1_pane_t9_ParamLimits

0xbf9d,	// (0x00047d96) main_int_radio1_pane_t9

0xbfaf,	// (0x00047da8) main_int_radio1_pane_t10_ParamLimits

0xbfaf,	// (0x00047da8) main_int_radio1_pane_t10

0xbfd5,	// (0x00047dce) main_int_radio1_pane_t11_ParamLimits

0xbfd5,	// (0x00047dce) main_int_radio1_pane_t11

0xbffb,	// (0x00047df4) main_int_radio1_pane_t12_ParamLimits

0xbffb,	// (0x00047df4) main_int_radio1_pane_t12

0x000b,

0xfe8c,	// (0x0004bc85) main_int_radio1_pane_t_ParamLimits

0xfe8c,	// (0x0004bc85) main_int_radio1_pane_t

0x0776,	// (0x0003c56f) int_radio_list_pane

0xec15,	// (0x0004aa0e) scroll_pane_cp037

0x077e,	// (0x0003c577) list_double_large_graphic_int_radio_pane_ParamLimits

0x077e,	// (0x0003c577) list_double_large_graphic_int_radio_pane

0x0796,	// (0x0003c58f) list_double_large_graphic_int_radio_pane_g1

0xec3f,	// (0x0004aa38) list_double_large_graphic_int_radio_pane_t1

0xec4d,	// (0x0004aa46) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea5,	// (0x0004bc9e) list_double_large_graphic_int_radio_pane_t

0x07fd,	// (0x0003c5f6) list_highlight_pane_cp027

0x02e5,	// (0x0003c0de) main_button_pane_4

0xbc1f,	// (0x00047a18) main_welc_pane_g4_ParamLimits

0xbc1f,	// (0x00047a18) main_welc_pane_g4

0xbc8e,	// (0x00047a87) main_welc_pane_t4_ParamLimits

0xbc8e,	// (0x00047a87) main_welc_pane_t4

0xbca3,	// (0x00047a9c) main_welc_pane_t5_ParamLimits

0xbca3,	// (0x00047a9c) main_welc_pane_t5

0xbced,	// (0x00047ae6) main_welc_pane_t6_ParamLimits

0xbced,	// (0x00047ae6) main_welc_pane_t6

0xbd3f,	// (0x00047b38) welc_button_pane_2_ParamLimits

0xbd3f,	// (0x00047b38) welc_button_pane_2

0xbd5b,	// (0x00047b54) welc_button_pane_3_ParamLimits

0xbd5b,	// (0x00047b54) welc_button_pane_3

0x02e5,	// (0x0003c0de) welc_button_pane_4

0xbd7a,	// (0x00047b73) welc_button_pane_5_ParamLimits

0xbd7a,	// (0x00047b73) welc_button_pane_5

0x7250,	// (0x00043049) main_popup_welc_pane

0x079f,	// (0x0003c598) main_welc_sk_g3

0x07a9,	// (0x0003c5a2) main_welc_sk_g4

0x07b3,	// (0x0003c5ac) main_welc_sk_t3

0x07c3,	// (0x0003c5bc) main_welc_sk_t4

0x07d3,	// (0x0003c5cc) popup_welc_pane_t4

0x07e1,	// (0x0003c5da) popup_welc_pane_t5

0x07ef,	// (0x0003c5e8) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Elaf_phl_apps_qhd_lsc_tch_Small
