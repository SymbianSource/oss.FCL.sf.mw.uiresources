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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0001e02c };

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
0x26b9,	// (0x000206e5) Screen

0x26c5,	// (0x000206f1) application_window

0x26d1,	// (0x000206fd) area_bottom_pane_ParamLimits

0x26d1,	// (0x000206fd) area_bottom_pane

0x0eaa,	// (0x0001eed6) area_top_pane_ParamLimits

0x0eaa,	// (0x0001eed6) area_top_pane

0x0f0e,	// (0x0001ef3a) call_video_uplink_pane_ParamLimits

0x0f0e,	// (0x0001ef3a) call_video_uplink_pane

0x0f4d,	// (0x0001ef79) main_pane_ParamLimits

0x0f4d,	// (0x0001ef79) main_pane

0xc406,	// (0x0002a432) context_pane

0x5586,	// (0x000235b2) navi_pane

0x55ac,	// (0x000235d8) popup_cale_events_window_ParamLimits

0x55ac,	// (0x000235d8) popup_cale_events_window

0xc419,	// (0x0002a445) popup_mup_playback_window

0x55c4,	// (0x000235f0) signal_pane

0xa340,	// (0x0002836c) main_browser_pane

0xa513,	// (0x0002853f) main_burst_pane

0x1501,	// (0x0001f52d) main_calc_pane

0xc3ec,	// (0x0002a418) main_cale_day_pane

0x2aea,	// (0x00020b16) main_cale_month_pane

0xc3ec,	// (0x0002a418) main_cale_week_pane

0xa513,	// (0x0002853f) main_call_pane

0xa020,	// (0x0002804c) main_call_poc_pane

0xa513,	// (0x0002853f) main_camera_pane

0xa513,	// (0x0002853f) main_chi_dic_pane

0xacea,	// (0x00028d16) main_clock_pane

0xa020,	// (0x0002804c) main_fmradio_pane

0xa513,	// (0x0002853f) main_graph_messa_pane

0xa020,	// (0x0002804c) main_help_pane

0xa340,	// (0x0002836c) main_im_pane

0xa27b,	// (0x000282a7) main_image_pane_ParamLimits

0xa27b,	// (0x000282a7) main_image_pane

0xa020,	// (0x0002804c) main_location2_pane

0xa513,	// (0x0002853f) main_location_pane

0xa27b,	// (0x000282a7) main_messa_pane

0xa020,	// (0x0002804c) main_mp2_pane

0xa513,	// (0x0002853f) main_mp_pane

0xa020,	// (0x0002804c) main_msg_pane

0xa020,	// (0x0002804c) main_mup_eq_pane

0xa020,	// (0x0002804c) main_mup_pane

0xa340,	// (0x0002836c) main_notes_pane

0xa020,	// (0x0002804c) main_pec_pane

0xa020,	// (0x0002804c) main_phob_pane

0xa020,	// (0x0002804c) main_pinb_pane

0xa020,	// (0x0002804c) main_postcard_pane

0xa020,	// (0x0002804c) main_qdial_pane

0xa513,	// (0x0002853f) main_skin_pane

0xa020,	// (0x0002804c) main_smil2_pane

0xa513,	// (0x0002853f) main_smil_pane

0xa513,	// (0x0002853f) main_video_pane

0xa513,	// (0x0002853f) main_video_tele_pane

0xa27b,	// (0x000282a7) main_viewer_pane_ParamLimits

0xa27b,	// (0x000282a7) main_viewer_pane

0xa513,	// (0x0002853f) main_vorec_pane

0x154d,	// (0x0001f579) popup_blid_sat_info_window_ParamLimits

0x154d,	// (0x0001f579) popup_blid_sat_info_window

0x156d,	// (0x0001f599) popup_dyc_status_message_window_ParamLimits

0x156d,	// (0x0001f599) popup_dyc_status_message_window

0x157d,	// (0x0001f5a9) popup_grid_large_graphic_window_ParamLimits

0x157d,	// (0x0001f5a9) popup_grid_large_graphic_window

0x160e,	// (0x0001f63a) popup_loc_request_window_ParamLimits

0x160e,	// (0x0001f63a) popup_loc_request_window

0x165b,	// (0x0001f687) popup_wml_address_window_ParamLimits

0x165b,	// (0x0001f687) popup_wml_address_window

0x5468,	// (0x00023494) call_muted_g1

0x512a,	// (0x00023156) popup_call_audio_conf_window_ParamLimits

0x512a,	// (0x00023156) popup_call_audio_conf_window

0x5478,	// (0x000234a4) popup_call_audio_first_window_ParamLimits

0x5478,	// (0x000234a4) popup_call_audio_first_window

0x54b8,	// (0x000234e4) popup_call_audio_in_window_ParamLimits

0x54b8,	// (0x000234e4) popup_call_audio_in_window

0x54dc,	// (0x00023508) popup_call_audio_out_window_ParamLimits

0x54dc,	// (0x00023508) popup_call_audio_out_window

0x54fe,	// (0x0002352a) popup_call_audio_second_window_ParamLimits

0x54fe,	// (0x0002352a) popup_call_audio_second_window

0x552e,	// (0x0002355a) popup_call_audio_wait_window_ParamLimits

0x552e,	// (0x0002355a) popup_call_audio_wait_window

0x554f,	// (0x0002357b) popup_number_entry_window_ParamLimits

0x554f,	// (0x0002357b) popup_number_entry_window

0x9c0d,	// (0x00027c39) bg_popup_call_pane_cp05_ParamLimits

0x9c0d,	// (0x00027c39) bg_popup_call_pane_cp05

0x9c2d,	// (0x00027c59) popup_number_entry_window_t1

0x9c40,	// (0x00027c6c) popup_number_entry_window_t2

0x9c52,	// (0x00027c7e) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0002d0f6) popup_number_entry_window_t

0x9c64,	// (0x00027c90) text_title_cp2

0x9c77,	// (0x00027ca3) bg_popup_call_pane_cp_ParamLimits

0x9c77,	// (0x00027ca3) bg_popup_call_pane_cp

0x9c85,	// (0x00027cb1) call_thumbnail_pane

0x9c8d,	// (0x00027cb9) popup_call_audio_in_window_g1_ParamLimits

0x9c8d,	// (0x00027cb9) popup_call_audio_in_window_g1

0x9c99,	// (0x00027cc5) popup_call_audio_in_window_g2_ParamLimits

0x9c99,	// (0x00027cc5) popup_call_audio_in_window_g2

0x9ca5,	// (0x00027cd1) popup_call_audio_in_window_g3_ParamLimits

0x9ca5,	// (0x00027cd1) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0002d0ff) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0002d0ff) popup_call_audio_in_window_g

0x9cb1,	// (0x00027cdd) popup_call_audio_in_window_t1_ParamLimits

0x9cb1,	// (0x00027cdd) popup_call_audio_in_window_t1

0x9ccd,	// (0x00027cf9) popup_call_audio_in_window_t2_ParamLimits

0x9ccd,	// (0x00027cf9) popup_call_audio_in_window_t2

0x9ce9,	// (0x00027d15) popup_call_audio_in_window_t3_ParamLimits

0x9ce9,	// (0x00027d15) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0002d106) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0002d106) popup_call_audio_in_window_t

0x9c77,	// (0x00027ca3) bg_popup_call_pane_cp01_ParamLimits

0x9c77,	// (0x00027ca3) bg_popup_call_pane_cp01

0x9c85,	// (0x00027cb1) call_thumbnail_pane_cp02

0x9cfc,	// (0x00027d28) call_type_pane_cp022

0x9d04,	// (0x00027d30) popup_call_audio_out_window_g1_ParamLimits

0x9d04,	// (0x00027d30) popup_call_audio_out_window_g1

0x9d16,	// (0x00027d42) popup_call_audio_out_window_g2_ParamLimits

0x9d16,	// (0x00027d42) popup_call_audio_out_window_g2

0x9d22,	// (0x00027d4e) popup_call_audio_out_window_g3_ParamLimits

0x9d22,	// (0x00027d4e) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0002d10d) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0002d10d) popup_call_audio_out_window_g

0x9d34,	// (0x00027d60) popup_call_audio_out_window_t1_ParamLimits

0x9d34,	// (0x00027d60) popup_call_audio_out_window_t1

0x9d4c,	// (0x00027d78) popup_call_audio_out_window_t2_ParamLimits

0x9d4c,	// (0x00027d78) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0002d114) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0002d114) popup_call_audio_out_window_t

0x9d61,	// (0x00027d8d) bg_popup_call_pane_ParamLimits

0x9d61,	// (0x00027d8d) bg_popup_call_pane

0x274b,	// (0x00020777) call_thumbnail_pane_cp_ParamLimits

0x274b,	// (0x00020777) call_thumbnail_pane_cp

0x9de5,	// (0x00027e11) call_type_pane_cp01_ParamLimits

0x9de5,	// (0x00027e11) call_type_pane_cp01

0x9e29,	// (0x00027e55) popup_call_audio_first_window_g1_ParamLimits

0x9e29,	// (0x00027e55) popup_call_audio_first_window_g1

0x9e75,	// (0x00027ea1) popup_call_audio_first_window_g2_ParamLimits

0x9e75,	// (0x00027ea1) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0002d119) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0002d119) popup_call_audio_first_window_g

0x9eb9,	// (0x00027ee5) popup_call_audio_first_window_t1_ParamLimits

0x9eb9,	// (0x00027ee5) popup_call_audio_first_window_t1

0x9f65,	// (0x00027f91) popup_call_audio_first_window_t4_ParamLimits

0x9f65,	// (0x00027f91) popup_call_audio_first_window_t4

0x9ff1,	// (0x0002801d) popup_call_audio_first_window_t5_ParamLimits

0x9ff1,	// (0x0002801d) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0002d11e) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0002d11e) popup_call_audio_first_window_t

0xa020,	// (0x0002804c) bg_popup_call_pane_cp02

0xa02a,	// (0x00028056) call_type_pane_cp023

0xa032,	// (0x0002805e) popup_call_audio_wait_window_g1

0xa03a,	// (0x00028066) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002d125) popup_call_audio_wait_window_g

0xa042,	// (0x0002806e) popup_call_audio_wait_window_t3

0xa050,	// (0x0002807c) bg_popup_call_pane_cp03_ParamLimits

0xa050,	// (0x0002807c) bg_popup_call_pane_cp03

0xa0b0,	// (0x000280dc) call_thumbnail_pane_cp011_ParamLimits

0xa0b0,	// (0x000280dc) call_thumbnail_pane_cp011

0xa0bc,	// (0x000280e8) call_type_pane_cp034_ParamLimits

0xa0bc,	// (0x000280e8) call_type_pane_cp034

0xa0f8,	// (0x00028124) popup_call_audio_second_window_g1_ParamLimits

0xa0f8,	// (0x00028124) popup_call_audio_second_window_g1

0xa134,	// (0x00028160) popup_call_audio_second_window_g2_ParamLimits

0xa134,	// (0x00028160) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0002d12a) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0002d12a) popup_call_audio_second_window_g

0xa170,	// (0x0002819c) popup_call_audio_second_window_t1_ParamLimits

0xa170,	// (0x0002819c) popup_call_audio_second_window_t1

0xa1f1,	// (0x0002821d) popup_call_audio_second_window_t2_ParamLimits

0xa1f1,	// (0x0002821d) popup_call_audio_second_window_t2

0xa227,	// (0x00028253) popup_call_audio_second_window_t3_ParamLimits

0xa227,	// (0x00028253) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0002d12f) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0002d12f) popup_call_audio_second_window_t

0xa020,	// (0x0002804c) bg_popup_call_pane_cp04

0xa25d,	// (0x00028289) list_conf_pane

0xa265,	// (0x00028291) popup_call_audio_conf_window_t1

0xa273,	// (0x0002829f) call_thumbnail_pane_g1

0xa27b,	// (0x000282a7) bg_pinb_pane_ParamLimits

0xa27b,	// (0x000282a7) bg_pinb_pane

0xa289,	// (0x000282b5) find_pinb_pane

0xa292,	// (0x000282be) listscroll_pinb_pane_ParamLimits

0xa292,	// (0x000282be) listscroll_pinb_pane

0xa2a1,	// (0x000282cd) pinb_bg_pane_g1

0x276f,	// (0x0002079b) pinb_bg_pane_g2

0x277b,	// (0x000207a7) pinb_bg_pane_g3

0x2787,	// (0x000207b3) pinb_bg_pane_g4

0x2793,	// (0x000207bf) pinb_bg_pane_g5

0x279f,	// (0x000207cb) pinb_bg_pane_g6

0x27aa,	// (0x000207d6) pinb_bg_pane_g7

0x27b5,	// (0x000207e1) pinb_bg_pane_g8

0x27c0,	// (0x000207ec) pinb_bg_pane_g9

0x27ca,	// (0x000207f6) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0002d136) pinb_bg_pane_g

0x27e7,	// (0x00020813) grid_pinb_pane

0x27f2,	// (0x0002081e) list_pinb_pane

0x27fd,	// (0x00020829) scroll_pane_cp01_ParamLimits

0x27fd,	// (0x00020829) scroll_pane_cp01

0xa2ab,	// (0x000282d7) find_pinb_pane_g1_ParamLimits

0xa2ab,	// (0x000282d7) find_pinb_pane_g1

0xa2c3,	// (0x000282ef) find_pinb_pane_t1

0xa2d5,	// (0x00028301) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0002d150) find_pinb_pane_t

0xa2ea,	// (0x00028316) input_focus_pane_cp01_ParamLimits

0xa2ea,	// (0x00028316) input_focus_pane_cp01

0x280f,	// (0x0002083b) cell_pinb_pane_ParamLimits

0x280f,	// (0x0002083b) cell_pinb_pane

0x2837,	// (0x00020863) cell_pinb_pane_g1_ParamLimits

0x2837,	// (0x00020863) cell_pinb_pane_g1

0x284c,	// (0x00020878) cell_pinb_pane_g2_ParamLimits

0x284c,	// (0x00020878) cell_pinb_pane_g2

0xa2f6,	// (0x00028322) cell_pinb_pane_g3_ParamLimits

0xa2f6,	// (0x00028322) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0002d155) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0002d155) cell_pinb_pane_g

0xa020,	// (0x0002804c) grid_highlight_pane_cp01

0x2858,	// (0x00020884) list_pinb_item_pane_ParamLimits

0x2858,	// (0x00020884) list_pinb_item_pane

0xa020,	// (0x0002804c) list_highlight_pane_cp02

0x287e,	// (0x000208aa) list_pinb_item_pane_g1_ParamLimits

0x287e,	// (0x000208aa) list_pinb_item_pane_g1

0x288b,	// (0x000208b7) list_pinb_item_pane_g2_ParamLimits

0x288b,	// (0x000208b7) list_pinb_item_pane_g2

0x2897,	// (0x000208c3) list_pinb_item_pane_g3_ParamLimits

0x2897,	// (0x000208c3) list_pinb_item_pane_g3

0x28a8,	// (0x000208d4) list_pinb_item_pane_g4_ParamLimits

0x28a8,	// (0x000208d4) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0002d15c) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0002d15c) list_pinb_item_pane_g

0x28b4,	// (0x000208e0) list_pinb_item_pane_t1_ParamLimits

0x28b4,	// (0x000208e0) list_pinb_item_pane_t1

0x113b,	// (0x0001f167) calc_display_pane

0x1159,	// (0x0001f185) calc_paper_pane

0x1175,	// (0x0001f1a1) grid_calc_pane

0xa020,	// (0x0002804c) bg_list_pane_cp01

0x28cb,	// (0x000208f7) clock_g1

0x28d3,	// (0x000208ff) clock_g2

0x0001,

0xf139,	// (0x0002d165) clock_g

0x28dd,	// (0x00020909) clock_t1_ParamLimits

0x28dd,	// (0x00020909) clock_t1

0x28f2,	// (0x0002091e) clock_t2_ParamLimits

0x28f2,	// (0x0002091e) clock_t2

0x2904,	// (0x00020930) clock_t3_ParamLimits

0x2904,	// (0x00020930) clock_t3

0x2916,	// (0x00020942) clock_t4_ParamLimits

0x2916,	// (0x00020942) clock_t4

0x2928,	// (0x00020954) clock_t5_ParamLimits

0x2928,	// (0x00020954) clock_t5

0x293d,	// (0x00020969) clock_t6_ParamLimits

0x293d,	// (0x00020969) clock_t6

0x294f,	// (0x0002097b) clock_t7_ParamLimits

0x294f,	// (0x0002097b) clock_t7

0x2961,	// (0x0002098d) clock_t8_ParamLimits

0x2961,	// (0x0002098d) clock_t8

0x2977,	// (0x000209a3) clock_t9_ParamLimits

0x2977,	// (0x000209a3) clock_t9

0x0008,

0xf13e,	// (0x0002d16a) clock_t_ParamLimits

0xf13e,	// (0x0002d16a) clock_t

0xa302,	// (0x0002832e) popup_clock_analogue_window_cp02

0xa302,	// (0x0002832e) popup_clock_digital_window_cp01

0xa30a,	// (0x00028336) listscroll_help_pane

0xa020,	// (0x0002804c) phob_pre_status_pane

0xa314,	// (0x00028340) grid_qdial_pane

0xa27b,	// (0x000282a7) listscroll_mce_pane

0xa27b,	// (0x000282a7) bg_notes_pane

0xa31e,	// (0x0002834a) list_notes_pane

0x298d,	// (0x000209b9) scroll_pane_cp06

0xa32c,	// (0x00028358) bg_calc_paper_pane

0x11a1,	// (0x0001f1cd) list_calc_pane

0xa340,	// (0x0002836c) bg_calc_display_pane

0x11bb,	// (0x0001f1e7) calc_display_pane_t1

0x11d0,	// (0x0001f1fc) calc_display_pane_t2

0x11e5,	// (0x0001f211) calc_display_pane_t3

0x0002,

0xf151,	// (0x0002d17d) calc_display_pane_t

0x11f7,	// (0x0001f223) cell_calc_pane_ParamLimits

0x11f7,	// (0x0001f223) cell_calc_pane

0xa35a,	// (0x00028386) bg_calc_paper_pane_g1

0xa366,	// (0x00028392) bg_calc_paper_pane_g2

0xa372,	// (0x0002839e) bg_calc_paper_pane_g3

0xa37e,	// (0x000283aa) bg_calc_paper_pane_g4

0xa38a,	// (0x000283b6) bg_calc_paper_pane_g5

0x299c,	// (0x000209c8) bg_calc_paper_pane_g6

0x29ad,	// (0x000209d9) bg_calc_paper_pane_g7

0x29be,	// (0x000209ea) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0002d184) bg_calc_paper_pane_g

0x29cf,	// (0x000209fb) calc_bg_paper_pane_g9

0x29e0,	// (0x00020a0c) list_calc_item_pane_ParamLimits

0x29e0,	// (0x00020a0c) list_calc_item_pane

0xa396,	// (0x000283c2) list_calc_item_pane_g1

0x1224,	// (0x0001f250) list_calc_item_pane_t1_ParamLimits

0x1224,	// (0x0001f250) list_calc_item_pane_t1

0x1236,	// (0x0001f262) list_calc_item_pane_t2_ParamLimits

0x1236,	// (0x0001f262) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0002d195) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0002d195) list_calc_item_pane_t

0xa3a3,	// (0x000283cf) cell_calc_pane_g1

0xa3ad,	// (0x000283d9) grid_highlight_pane_cp02

0x2a0f,	// (0x00020a3b) bg_calc_display_pane_g1

0x1266,	// (0x0001f292) bg_calc_display_pane_g2

0xc728,	// (0x0002a754) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0002d19f) bg_calc_display_pane_g

0x1270,	// (0x0001f29c) cell_qdial_pane_ParamLimits

0x1270,	// (0x0001f29c) cell_qdial_pane

0x2a18,	// (0x00020a44) cell_qdial_pane_g1_ParamLimits

0x2a18,	// (0x00020a44) cell_qdial_pane_g1

0x2a25,	// (0x00020a51) cell_qdial_pane_g2_ParamLimits

0x2a25,	// (0x00020a51) cell_qdial_pane_g2

0xa3cf,	// (0x000283fb) cell_qdial_pane_g3_ParamLimits

0xa3cf,	// (0x000283fb) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0002d1a6) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0002d1a6) cell_qdial_pane_g

0x2a43,	// (0x00020a6f) cell_qdial_pane_t1_ParamLimits

0x2a43,	// (0x00020a6f) cell_qdial_pane_t1

0x2a5b,	// (0x00020a87) cell_qdial_pane_t2_ParamLimits

0x2a5b,	// (0x00020a87) cell_qdial_pane_t2

0x2a6e,	// (0x00020a9a) cell_qdial_pane_t3_ParamLimits

0x2a6e,	// (0x00020a9a) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0002d1af) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0002d1af) cell_qdial_pane_t

0xa020,	// (0x0002804c) grid_highlight_pane_cp04

0xa3db,	// (0x00028407) thumbnail_qdial_pane_ParamLimits

0xa3db,	// (0x00028407) thumbnail_qdial_pane

0xa437,	// (0x00028463) list_help_pane

0xa440,	// (0x0002846c) scroll_pane_cp02

0x2a81,	// (0x00020aad) help_list_pane_t1_ParamLimits

0x2a81,	// (0x00020aad) help_list_pane_t1

0x1284,	// (0x0001f2b0) bg_notes_pane_g2

0x128c,	// (0x0001f2b8) bg_notes_pane_g3

0x1294,	// (0x0001f2c0) notes_bg_pane_g1

0x129c,	// (0x0001f2c8) notes_bg_pane_g4

0x12a4,	// (0x0001f2d0) notes_bg_pane_g5

0x12ac,	// (0x0001f2d8) notes_bg_pane_g6

0x12b4,	// (0x0001f2e0) notes_bg_pane_g7

0x12bc,	// (0x0001f2e8) notes_bg_pane_g8

0x12c4,	// (0x0001f2f0) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0002d1cd) notes_bg_pane_g

0x2ab4,	// (0x00020ae0) list_notes_text_pane_ParamLimits

0x2ab4,	// (0x00020ae0) list_notes_text_pane

0xa449,	// (0x00028475) list_notes_text_pane_g1

0x2adc,	// (0x00020b08) list_notes_text_pane_t1

0x2aea,	// (0x00020b16) listscroll_cale_week_pane

0x2b0f,	// (0x00020b3b) bg_cale_heading_pane

0xa46c,	// (0x00028498) bg_cale_pane_cp01

0x2b31,	// (0x00020b5d) cale_week_corner_pane

0x2b4b,	// (0x00020b77) cale_week_day_heading_pane

0x2b6d,	// (0x00020b99) cale_week_scroll_pane_g1

0x2b8a,	// (0x00020bb6) cale_week_scroll_pane_g2

0x2b9d,	// (0x00020bc9) cale_week_scroll_pane_g3

0x2bb0,	// (0x00020bdc) cale_week_scroll_pane_g4

0x2bc3,	// (0x00020bef) cale_week_scroll_pane_g5

0x2bd6,	// (0x00020c02) cale_week_scroll_pane_g6

0x2be9,	// (0x00020c15) cale_week_scroll_pane_g7

0x2bfc,	// (0x00020c28) cale_week_scroll_pane_g8

0x2c11,	// (0x00020c3d) cale_week_scroll_pane_g9

0x2c24,	// (0x00020c50) cale_week_scroll_pane_g10

0x2c37,	// (0x00020c63) cale_week_scroll_pane_g11

0x2c4a,	// (0x00020c76) cale_week_scroll_pane_g12

0x2c61,	// (0x00020c8d) cale_week_scroll_pane_g13

0x2c7c,	// (0x00020ca8) cale_week_scroll_pane_g14

0x2c97,	// (0x00020cc3) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0002d1dc) cale_week_scroll_pane_g

0x2cc7,	// (0x00020cf3) cale_week_time_pane

0x2cdc,	// (0x00020d08) grid_cale_week_pane

0xa49b,	// (0x000284c7) scroll_pane_cp08

0x2cfb,	// (0x00020d27) cell_cale_week_pane_ParamLimits

0x2cfb,	// (0x00020d27) cell_cale_week_pane

0x2d5d,	// (0x00020d89) cale_week_day_heading_pane_t1

0x2d98,	// (0x00020dc4) cale_week_day_heading_pane_t2

0x2dd3,	// (0x00020dff) cale_week_day_heading_pane_t3

0x2e0e,	// (0x00020e3a) cale_week_day_heading_pane_t4

0x2e49,	// (0x00020e75) cale_week_day_heading_pane_t5

0x2e84,	// (0x00020eb0) cale_week_day_heading_pane_t6

0x2ebf,	// (0x00020eeb) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0002d1fd) cale_week_day_heading_pane_t

0xa4b8,	// (0x000284e4) bg_cale_side_pane

0x12cc,	// (0x0001f2f8) cale_week_time_pane_t1

0x12e6,	// (0x0001f312) cale_week_time_pane_t2

0x1300,	// (0x0001f32c) cale_week_time_pane_t3

0x131a,	// (0x0001f346) cale_week_time_pane_t4

0x1334,	// (0x0001f360) cale_week_time_pane_t5

0x134e,	// (0x0001f37a) cale_week_time_pane_t6

0x136e,	// (0x0001f39a) cale_week_time_pane_t7

0x1390,	// (0x0001f3bc) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0002d20c) cale_week_time_pane_t

0x2efa,	// (0x00020f26) cell_cale_week_pane_g2

0x2f1e,	// (0x00020f4a) cell_cale_week_pane_g3_ParamLimits

0x2f1e,	// (0x00020f4a) cell_cale_week_pane_g3

0xa4c6,	// (0x000284f2) grid_highlight_pane_cp07

0xa4ce,	// (0x000284fa) listscroll_gms_pane

0xa4d8,	// (0x00028504) grid_gms_pane

0xa4e1,	// (0x0002850d) listscroll_gms_pane_g1

0xa4e9,	// (0x00028515) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0002d21d) listscroll_gms_pane_g

0x2f36,	// (0x00020f62) scroll_pane_cp010

0x2f41,	// (0x00020f6d) cell_gms_pane_ParamLimits

0x2f41,	// (0x00020f6d) cell_gms_pane

0x2f54,	// (0x00020f80) cell_gms_pane_g1

0xa4f1,	// (0x0002851d) cell_gms_pane_g2

0xa4f9,	// (0x00028525) cell_gms_pane_g3

0xa502,	// (0x0002852e) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0002d222) cell_gms_pane_g

0xa50b,	// (0x00028537) grid_highlight_pane_cp09

0x5410,	// (0x0002343c) phob_pre_status_pane_g1

0x5418,	// (0x00023444) phob_pre_status_pane_g2

0x5420,	// (0x0002344c) phob_pre_status_pane_g3

0x5428,	// (0x00023454) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0002d60d) phob_pre_status_pane_g

0x5438,	// (0x00023464) phob_pre_status_pane_t1

0x5448,	// (0x00023474) phob_pre_status_pane_t2

0x5458,	// (0x00023484) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0002d618) phob_pre_status_pane_t

0xa513,	// (0x0002853f) bg_list_pane_cp05

0x2f64,	// (0x00020f90) grid_vorec_pane

0x2f6e,	// (0x00020f9a) vorec_t1

0x2f7c,	// (0x00020fa8) vorec_t2

0x2f8a,	// (0x00020fb6) vorec_t3

0x2f98,	// (0x00020fc4) vorec_t4

0x2693,	// (0x000206bf) vorec_t5

0x26a1,	// (0x000206cd) vorec_t6

0x0004,

0xf1ff,	// (0x0002d22b) vorec_t

0x26af,	// (0x000206db) wait_bar_pane_cp01

0x2fb4,	// (0x00020fe0) cell_vorec_pane_ParamLimits

0x2fb4,	// (0x00020fe0) cell_vorec_pane

0x13b4,	// (0x0001f3e0) cell_vorec_pane_g1

0xa020,	// (0x0002804c) grid_highlight_pane_cp05

0x2fd7,	// (0x00021003) cams_zoom_pane

0x2fe3,	// (0x0002100f) image_vga_pane

0x2ff2,	// (0x0002101e) main_camera_pane_g1

0x3000,	// (0x0002102c) main_camera_pane_g2

0x300c,	// (0x00021038) main_camera_pane_g3

0x3018,	// (0x00021044) main_camera_pane_g4

0x3024,	// (0x00021050) main_camera_pane_g5

0x3030,	// (0x0002105c) main_camera_pane_g6

0x303c,	// (0x00021068) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0002d236) main_camera_pane_g

0x3048,	// (0x00021074) main_camera_pane_t1

0x305a,	// (0x00021086) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0002d247) main_camera_pane_t

0x307b,	// (0x000210a7) cams_zoom_pane_cp_ParamLimits

0x307b,	// (0x000210a7) cams_zoom_pane_cp

0x309f,	// (0x000210cb) image_cif_pane_ParamLimits

0x309f,	// (0x000210cb) image_cif_pane

0x30bd,	// (0x000210e9) image_subqcif_pane

0x30c5,	// (0x000210f1) main_video_pane_g1_ParamLimits

0x30c5,	// (0x000210f1) main_video_pane_g1

0x30e5,	// (0x00021111) main_video_pane_g2_ParamLimits

0x30e5,	// (0x00021111) main_video_pane_g2

0x3115,	// (0x00021141) main_video_pane_g3_ParamLimits

0x3115,	// (0x00021141) main_video_pane_g3

0x313e,	// (0x0002116a) main_video_pane_g4_ParamLimits

0x313e,	// (0x0002116a) main_video_pane_g4

0x3167,	// (0x00021193) main_video_pane_g5_ParamLimits

0x3167,	// (0x00021193) main_video_pane_g5

0xa527,	// (0x00028553) main_video_pane_g6_ParamLimits

0xa527,	// (0x00028553) main_video_pane_g6

0x0006,

0xf220,	// (0x0002d24c) main_video_pane_g_ParamLimits

0xf220,	// (0x0002d24c) main_video_pane_g

0x3189,	// (0x000211b5) main_video_pane_t1_ParamLimits

0x3189,	// (0x000211b5) main_video_pane_t1

0xa541,	// (0x0002856d) cams_zoom_pane_g1

0xa54a,	// (0x00028576) cams_zoom_pane_g2

0xa553,	// (0x0002857f) cams_zoom_pane_g3

0xa55c,	// (0x00028588) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0002d25b) cams_zoom_pane_g

0x31d3,	// (0x000211ff) grid_cams_pane

0x31e1,	// (0x0002120d) linegrid_cams_pane

0x31ef,	// (0x0002121b) cell_cams_pane_ParamLimits

0x31ef,	// (0x0002121b) cell_cams_pane

0xa565,	// (0x00028591) cams_burst_image_pane

0xa56d,	// (0x00028599) cell_cams_pane_g1

0xa020,	// (0x0002804c) grid_highlight_pane_cp03

0xa3a3,	// (0x000283cf) mp_bg_pane_g1

0xa020,	// (0x0002804c) bg_list_pane_cp03

0xc311,	// (0x0002a33d) bg_mp_pane

0xc319,	// (0x0002a345) grid_mp_pane

0xc321,	// (0x0002a34d) media_player_g1

0xc329,	// (0x0002a355) media_player_t1

0xc337,	// (0x0002a363) media_player_t2

0xc345,	// (0x0002a371) media_player_t3

0xc353,	// (0x0002a37f) media_player_t4

0xc361,	// (0x0002a38d) media_player_t5

0xc36f,	// (0x0002a39b) media_player_t6

0xc37d,	// (0x0002a3a9) media_player_t7

0x0006,

0xf5cb,	// (0x0002d5f7) media_player_t

0xc38b,	// (0x0002a3b7) wait_bar_pane_cp02

0xf5b0,	// (0x0002d5dc) main_usb_pane_t

0x5407,	// (0x00023433) cell_mp_pane

0xa3a3,	// (0x000283cf) cell_mp_pane_g1

0xa020,	// (0x0002804c) grid_highlight_pane_cp06

0xa575,	// (0x000285a1) grid_skin_colour_pane

0xa57d,	// (0x000285a9) list_highlight_pane_cp03

0x3317,	// (0x00021343) skin_g1

0xa585,	// (0x000285b1) skin_t1

0xa594,	// (0x000285c0) skin_t2

0x0001,

0xf264,	// (0x0002d290) skin_t

0x3321,	// (0x0002134d) cell_skin_colour_pane_ParamLimits

0x3321,	// (0x0002134d) cell_skin_colour_pane

0xa5a2,	// (0x000285ce) cell_skin_colour_pane_g1

0x33a5,	// (0x000213d1) call_video_g1_ParamLimits

0x33a5,	// (0x000213d1) call_video_g1

0x33b5,	// (0x000213e1) call_video_g2_ParamLimits

0x33b5,	// (0x000213e1) call_video_g2

0x0001,

0xf269,	// (0x0002d295) call_video_g_ParamLimits

0xf269,	// (0x0002d295) call_video_g

0x340f,	// (0x0002143b) call_video_uplink_pane_cp1_ParamLimits

0x340f,	// (0x0002143b) call_video_uplink_pane_cp1

0xa5b4,	// (0x000285e0) call_video_uplink_pane_cp2

0x34db,	// (0x00021507) video_down_crop_pane_ParamLimits

0x34db,	// (0x00021507) video_down_crop_pane

0x35d9,	// (0x00021605) video_down_pane_ParamLimits

0x35d9,	// (0x00021605) video_down_pane

0xa5bc,	// (0x000285e8) video_down_subqcif_pane_ParamLimits

0xa5bc,	// (0x000285e8) video_down_subqcif_pane

0xa5d4,	// (0x00028600) video_down_subqcif_pane_cp_ParamLimits

0xa5d4,	// (0x00028600) video_down_subqcif_pane_cp

0xa5fa,	// (0x00028626) im_reading_pane_ParamLimits

0xa5fa,	// (0x00028626) im_reading_pane

0x36fb,	// (0x00021727) im_writing_pane_ParamLimits

0x36fb,	// (0x00021727) im_writing_pane

0x3719,	// (0x00021745) im_reading_pane_t1

0xa614,	// (0x00028640) list_im_pane

0xa625,	// (0x00028651) scroll_pane_cp07

0x376d,	// (0x00021799) im_writing_pane_t1_ParamLimits

0x376d,	// (0x00021799) im_writing_pane_t1

0xa63e,	// (0x0002866a) im_writing_pane_t2_ParamLimits

0xa63e,	// (0x0002866a) im_writing_pane_t2

0x0001,

0xf273,	// (0x0002d29f) im_writing_pane_t_ParamLimits

0xf273,	// (0x0002d29f) im_writing_pane_t

0xa020,	// (0x0002804c) input_focus_pane_cp04

0xa020,	// (0x0002804c) input_focus_pane_cp05

0x3782,	// (0x000217ae) list_im_single_pane_ParamLimits

0x3782,	// (0x000217ae) list_im_single_pane

0x37a6,	// (0x000217d2) list_single_im_pane_t1

0x53cb,	// (0x000233f7) blid_accuracy_pane

0x53d3,	// (0x000233ff) blid_compass_pane

0x53dd,	// (0x00023409) main_location_t1

0x53eb,	// (0x00023417) main_location_t2

0x53f9,	// (0x00023425) main_location_t3

0x0002,

0xf5da,	// (0x0002d606) main_location_t

0xa020,	// (0x0002804c) aid_levels_location

0xa3a3,	// (0x000283cf) blid_accuracy_pane_g1

0xa3a3,	// (0x000283cf) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0002d301) blid_accuracy_pane_g

0xa686,	// (0x000286b2) wml_content_pane

0xa6c4,	// (0x000286f0) wml_button_pane_ParamLimits

0xa6c4,	// (0x000286f0) wml_button_pane

0x37b5,	// (0x000217e1) wml_list_single_large_pane_ParamLimits

0x37b5,	// (0x000217e1) wml_list_single_large_pane

0x37df,	// (0x0002180b) wml_list_single_medium_pane_ParamLimits

0x37df,	// (0x0002180b) wml_list_single_medium_pane

0x3810,	// (0x0002183c) wml_list_single_small_pane_ParamLimits

0x3810,	// (0x0002183c) wml_list_single_small_pane

0xa6d8,	// (0x00028704) wml_selection_box_pane_ParamLimits

0xa6d8,	// (0x00028704) wml_selection_box_pane

0xa6eb,	// (0x00028717) wml_list_single_pane_t1

0xa6fa,	// (0x00028726) wml_list_single_medium_pane_t1

0xa709,	// (0x00028735) wml_list_single_large_pane_t1

0xa718,	// (0x00028744) input_focus_pane_cp02_ParamLimits

0xa718,	// (0x00028744) input_focus_pane_cp02

0xa72b,	// (0x00028757) wml_selection_box_pane_g1

0xa734,	// (0x00028760) wml_selection_box_pane_t1_ParamLimits

0xa734,	// (0x00028760) wml_selection_box_pane_t1

0xa27b,	// (0x000282a7) bg_wml_button_pane_ParamLimits

0xa27b,	// (0x000282a7) bg_wml_button_pane

0xa74c,	// (0x00028778) wml_button_pane_g1

0xa754,	// (0x00028780) wml_button_pane_t1

0xa74c,	// (0x00028778) wml_button_bg_pane_g1

0xa764,	// (0x00028790) wml_button_bg_pane_g2

0xa76c,	// (0x00028798) wml_button_bg_pane_g3

0xa774,	// (0x000287a0) wml_button_bg_pane_g4

0xa77c,	// (0x000287a8) wml_button_bg_pane_g5

0xa784,	// (0x000287b0) wml_button_bg_pane_g6

0xa78c,	// (0x000287b8) wml_button_bg_pane_g7

0xa794,	// (0x000287c0) wml_button_bg_pane_g8

0xa79c,	// (0x000287c8) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0002d2a4) wml_button_bg_pane_g

0x384a,	// (0x00021876) bg_list_pane_cp02

0xa7a4,	// (0x000287d0) mce_header_pane_ParamLimits

0xa7a4,	// (0x000287d0) mce_header_pane

0xa7ba,	// (0x000287e6) mce_icon_pane

0xa7ba,	// (0x000287e6) mce_image_pane

0xa7c3,	// (0x000287ef) mce_text_pane_ParamLimits

0xa7c3,	// (0x000287ef) mce_text_pane

0x3854,	// (0x00021880) scroll_pane_cp03

0xa6bc,	// (0x000286e8) scroll_pane_cp04

0xa7d6,	// (0x00028802) scroll_pane_cp05_ParamLimits

0xa7d6,	// (0x00028802) scroll_pane_cp05

0x385e,	// (0x0002188a) mce_header_field_pane_ParamLimits

0x385e,	// (0x0002188a) mce_header_field_pane

0x387e,	// (0x000218aa) mce_header_field_pane_2_ParamLimits

0x387e,	// (0x000218aa) mce_header_field_pane_2

0x3894,	// (0x000218c0) mce_header_field_pane_3

0x389c,	// (0x000218c8) list_single_mce_message_pane_ParamLimits

0x389c,	// (0x000218c8) list_single_mce_message_pane

0x38c7,	// (0x000218f3) list_single_mce_smart_pane_ParamLimits

0x38c7,	// (0x000218f3) list_single_mce_smart_pane

0xa7e2,	// (0x0002880e) input_focus_pane_cp03

0xa7eb,	// (0x00028817) list_header_data_pane

0x38fd,	// (0x00021929) mce_header_field_pane_t1

0x390b,	// (0x00021937) list_single_mce_header_pane_ParamLimits

0x390b,	// (0x00021937) list_single_mce_header_pane

0xa7f3,	// (0x0002881f) list_single_mce_header_pane_t1

0xa802,	// (0x0002882e) list_single_mce_message_pane_g1

0xa80a,	// (0x00028836) list_single_mce_message_pane_t1

0x395d,	// (0x00021989) bg_cale_heading_pane_cp01_ParamLimits

0x395d,	// (0x00021989) bg_cale_heading_pane_cp01

0xa818,	// (0x00028844) bg_cale_pane_cp02_ParamLimits

0xa818,	// (0x00028844) bg_cale_pane_cp02

0x39a0,	// (0x000219cc) cale_month_corner_pane

0x39ba,	// (0x000219e6) cale_month_day_heading_pane_ParamLimits

0x39ba,	// (0x000219e6) cale_month_day_heading_pane

0x3a15,	// (0x00021a41) cale_month_pane_g1_ParamLimits

0x3a15,	// (0x00021a41) cale_month_pane_g1

0x3a4d,	// (0x00021a79) cale_month_pane_g2_ParamLimits

0x3a4d,	// (0x00021a79) cale_month_pane_g2

0x3a76,	// (0x00021aa2) cale_month_pane_g3_ParamLimits

0x3a76,	// (0x00021aa2) cale_month_pane_g3

0x3ac2,	// (0x00021aee) cale_month_pane_g4_ParamLimits

0x3ac2,	// (0x00021aee) cale_month_pane_g4

0x3b0e,	// (0x00021b3a) cale_month_pane_g5_ParamLimits

0x3b0e,	// (0x00021b3a) cale_month_pane_g5

0x3b5a,	// (0x00021b86) cale_month_pane_g6_ParamLimits

0x3b5a,	// (0x00021b86) cale_month_pane_g6

0x3ba6,	// (0x00021bd2) cale_month_pane_g7_ParamLimits

0x3ba6,	// (0x00021bd2) cale_month_pane_g7

0x3c0a,	// (0x00021c36) cale_month_pane_g8_ParamLimits

0x3c0a,	// (0x00021c36) cale_month_pane_g8

0x3c6e,	// (0x00021c9a) cale_month_pane_g9_ParamLimits

0x3c6e,	// (0x00021c9a) cale_month_pane_g9

0x3ccc,	// (0x00021cf8) cale_month_pane_g10_ParamLimits

0x3ccc,	// (0x00021cf8) cale_month_pane_g10

0x3d28,	// (0x00021d54) cale_month_pane_g11_ParamLimits

0x3d28,	// (0x00021d54) cale_month_pane_g11

0x3d7c,	// (0x00021da8) cale_month_pane_g12_ParamLimits

0x3d7c,	// (0x00021da8) cale_month_pane_g12

0x3dd2,	// (0x00021dfe) cale_month_pane_g13_ParamLimits

0x3dd2,	// (0x00021dfe) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0002d2b7) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0002d2b7) cale_month_pane_g

0x3e28,	// (0x00021e54) cale_month_week_pane

0x3e3d,	// (0x00021e69) grid_cale_month_pane_ParamLimits

0x3e3d,	// (0x00021e69) grid_cale_month_pane

0x3e8b,	// (0x00021eb7) cale_month_day_heading_pane_t1

0x3f11,	// (0x00021f3d) cale_month_day_heading_pane_t2

0x3fa2,	// (0x00021fce) cale_month_day_heading_pane_t3

0x4033,	// (0x0002205f) cale_month_day_heading_pane_t4

0x40c4,	// (0x000220f0) cale_month_day_heading_pane_t5

0x4155,	// (0x00022181) cale_month_day_heading_pane_t6

0x41e6,	// (0x00022212) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0002d2d2) cale_month_day_heading_pane_t

0xa4b8,	// (0x000284e4) bg_cale_side_pane_cp01

0x428f,	// (0x000222bb) cale_month_week_pane_t1

0x42a8,	// (0x000222d4) cale_month_week_pane_t2

0x42c1,	// (0x000222ed) cale_month_week_pane_t3

0x42da,	// (0x00022306) cale_month_week_pane_t4

0x42f3,	// (0x0002231f) cale_month_week_pane_t5

0x4314,	// (0x00022340) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0002d2e1) cale_month_week_pane_t

0x4335,	// (0x00022361) cell_cale_month_pane_ParamLimits

0x4335,	// (0x00022361) cell_cale_month_pane

0x13be,	// (0x0001f3ea) cell_cale_month_pane_g1

0x13ca,	// (0x0001f3f6) cell_cale_month_pane_t1_ParamLimits

0x13ca,	// (0x0001f3f6) cell_cale_month_pane_t1

0xa4c6,	// (0x000284f2) grid_highlight_pane_cp08

0xa3a3,	// (0x000283cf) main_smil_g1

0x4481,	// (0x000224ad) smil_status_pane

0xa857,	// (0x00028883) smil_text_pane

0xc231,	// (0x0002a25d) bg_popup_call3_rect_pane_g8

0xc239,	// (0x0002a265) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0002d59a) bg_popup_call3_rect_pane_g

0xc480,	// (0x0002a4ac) smil_status_volume_pane_g1

0xa861,	// (0x0002888d) smil_status_pane_t1

0x1690,	// (0x0001f6bc) volume_smil_pane

0xa878,	// (0x000288a4) list_smil_text_pane

0x4494,	// (0x000224c0) scroll_pane_cp011

0x449f,	// (0x000224cb) smil_text_list_pane_t1_ParamLimits

0x449f,	// (0x000224cb) smil_text_list_pane_t1

0x13ea,	// (0x0001f416) aid_volume_smil_ParamLimits

0x13ea,	// (0x0001f416) aid_volume_smil

0xa3a3,	// (0x000283cf) smil_volume_pane_g1

0xa3a3,	// (0x000283cf) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0002d301) smil_volume_pane_g

0x2aea,	// (0x00020b16) listscroll_cale_day_pane

0xa882,	// (0x000288ae) bg_cale_pane

0xa89a,	// (0x000288c6) list_cale_pane

0xa8bd,	// (0x000288e9) scroll_pane_cp09

0xa8ce,	// (0x000288fa) cale_bg_pane_g1

0xa8d6,	// (0x00028902) cale_bg_pane_g2

0xa8de,	// (0x0002890a) cale_bg_pane_g3

0xa8e6,	// (0x00028912) cale_bg_pane_g4

0xa8ee,	// (0x0002891a) cale_bg_pane_g5

0xa8f6,	// (0x00028922) cale_bg_pane_g6

0xa8fe,	// (0x0002892a) cale_bg_pane_g7

0xa906,	// (0x00028932) cale_bg_pane_g8

0xa90e,	// (0x0002893a) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0002d306) cale_bg_pane_g

0x451f,	// (0x0002254b) list_cale_time_pane_ParamLimits

0x451f,	// (0x0002254b) list_cale_time_pane

0xa916,	// (0x00028942) list_cale_time_pane_g1_ParamLimits

0xa916,	// (0x00028942) list_cale_time_pane_g1

0xa922,	// (0x0002894e) list_cale_time_pane_g2_ParamLimits

0xa922,	// (0x0002894e) list_cale_time_pane_g2

0x4541,	// (0x0002256d) list_cale_time_pane_g3_ParamLimits

0x4541,	// (0x0002256d) list_cale_time_pane_g3

0x454f,	// (0x0002257b) list_cale_time_pane_g4_ParamLimits

0x454f,	// (0x0002257b) list_cale_time_pane_g4

0x455d,	// (0x00022589) list_cale_time_pane_g5_ParamLimits

0x455d,	// (0x00022589) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0002d319) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0002d319) list_cale_time_pane_g

0xa93c,	// (0x00028968) list_cale_time_pane_t1_ParamLimits

0xa93c,	// (0x00028968) list_cale_time_pane_t1

0xa964,	// (0x00028990) list_cale_time_pane_t2_ParamLimits

0xa964,	// (0x00028990) list_cale_time_pane_t2

0x488e,	// (0x000228ba) aid_blid_cardinal_pane

0x48d0,	// (0x000228fc) compass_pane_t4

0xa98c,	// (0x000289b8) list_cale_time_pane_t4_ParamLimits

0xa98c,	// (0x000289b8) list_cale_time_pane_t4

0x48de,	// (0x0002290a) compass_pane_t5

0x48ee,	// (0x0002291a) compass_pane_t6

0x48fc,	// (0x00022928) compass_pane_t7

0xae2f,	// (0x00028e5b) navi_pane_cc_t1

0xb00c,	// (0x00029038) aid_phob_thumbnail_center_pane

0x4ed1,	// (0x00022efd) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0002d326) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0002d326) list_cale_time_pane_t

0x9c77,	// (0x00027ca3) bg_popup_window_pane_cp02_ParamLimits

0x9c77,	// (0x00027ca3) bg_popup_window_pane_cp02

0xa9b4,	// (0x000289e0) heading_pane_cp01_ParamLimits

0xa9b4,	// (0x000289e0) heading_pane_cp01

0xa9c0,	// (0x000289ec) loc_req_pane_ParamLimits

0xa9c0,	// (0x000289ec) loc_req_pane

0xa9d0,	// (0x000289fc) loc_type_pane_ParamLimits

0xa9d0,	// (0x000289fc) loc_type_pane

0xa9e2,	// (0x00028a0e) loc_type_pane_t1_ParamLimits

0xa9e2,	// (0x00028a0e) loc_type_pane_t1

0xa9f4,	// (0x00028a20) loc_type_pane_t2_ParamLimits

0xa9f4,	// (0x00028a20) loc_type_pane_t2

0xaa06,	// (0x00028a32) loc_type_pane_t3_ParamLimits

0xaa06,	// (0x00028a32) loc_type_pane_t3

0x0002,

0xf301,	// (0x0002d32d) loc_type_pane_t_ParamLimits

0xf301,	// (0x0002d32d) loc_type_pane_t

0xaa18,	// (0x00028a44) list_loc_req_pane

0xaa22,	// (0x00028a4e) scroll_pane_cp012

0x456b,	// (0x00022597) list_single_loc_request_popup_menu_pane_ParamLimits

0x456b,	// (0x00022597) list_single_loc_request_popup_menu_pane

0xaa2d,	// (0x00028a59) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa2d,	// (0x00028a59) list_single_loc_request_popup_menu_pane_g1

0xaa39,	// (0x00028a65) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa39,	// (0x00028a65) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0002d334) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0002d334) list_single_loc_request_popup_menu_pane_g

0xaa45,	// (0x00028a71) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa45,	// (0x00028a71) list_single_loc_request_popup_menu_pane_t1

0x457d,	// (0x000225a9) bg_popup_window_pane_cp03_ParamLimits

0x457d,	// (0x000225a9) bg_popup_window_pane_cp03

0x458b,	// (0x000225b7) heading_loc_req_pane_ParamLimits

0x458b,	// (0x000225b7) heading_loc_req_pane

0x4597,	// (0x000225c3) popup_dyc_status_message_window_g1_ParamLimits

0x4597,	// (0x000225c3) popup_dyc_status_message_window_g1

0x45a3,	// (0x000225cf) popup_dyc_status_message_window_t1_ParamLimits

0x45a3,	// (0x000225cf) popup_dyc_status_message_window_t1

0x45b5,	// (0x000225e1) popup_dyc_status_message_window_t2_ParamLimits

0x45b5,	// (0x000225e1) popup_dyc_status_message_window_t2

0x45c7,	// (0x000225f3) popup_dyc_status_message_window_t3_ParamLimits

0x45c7,	// (0x000225f3) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0002d339) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0002d339) popup_dyc_status_message_window_t

0xa020,	// (0x0002804c) bg_heading_pane_cp01

0xaa5b,	// (0x00028a87) heading_loc_req_pane_g1

0xaa63,	// (0x00028a8f) heading_loc_req_pane_g2

0xaa6b,	// (0x00028a97) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0002d340) heading_loc_req_pane_g

0xaa73,	// (0x00028a9f) heading_loc_req_pane_t1

0xaa82,	// (0x00028aae) bg_popup_sub_pane_cp01_ParamLimits

0xaa82,	// (0x00028aae) bg_popup_sub_pane_cp01

0xaa90,	// (0x00028abc) popup_cale_events_window_g1_ParamLimits

0xaa90,	// (0x00028abc) popup_cale_events_window_g1

0xaab0,	// (0x00028adc) popup_cale_events_window_g2_ParamLimits

0xaab0,	// (0x00028adc) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0002d374) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0002d374) popup_cale_events_window_g

0xaad0,	// (0x00028afc) popup_cale_events_window_t1_ParamLimits

0xaad0,	// (0x00028afc) popup_cale_events_window_t1

0xaae2,	// (0x00028b0e) popup_cale_events_window_t2_ParamLimits

0xaae2,	// (0x00028b0e) popup_cale_events_window_t2

0xab20,	// (0x00028b4c) popup_cale_events_window_t3_ParamLimits

0xab20,	// (0x00028b4c) popup_cale_events_window_t3

0xab5a,	// (0x00028b86) popup_cale_events_window_t4_ParamLimits

0xab5a,	// (0x00028b86) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0002d379) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0002d379) popup_cale_events_window_t

0x46ce,	// (0x000226fa) call_type_pane

0xb030,	// (0x0002905c) popup_call_status_window_g1

0x46da,	// (0x00022706) popup_call_status_window_g2

0x46e6,	// (0x00022712) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0002d382) popup_call_status_window_g

0xab90,	// (0x00028bbc) call_type_pane_g1

0xab99,	// (0x00028bc5) call_type_pane_g2

0x0001,

0xf35d,	// (0x0002d389) call_type_pane_g

0xa020,	// (0x0002804c) bg_popup_sub_pane_cp02

0xaba2,	// (0x00028bce) listscroll_popup_wml_pane

0xabaa,	// (0x00028bd6) list_wml_pane

0xabb4,	// (0x00028be0) scroll_pane_cp013

0xabbf,	// (0x00028beb) list_single_graphic_popup_wml_pane_ParamLimits

0xabbf,	// (0x00028beb) list_single_graphic_popup_wml_pane

0xa3a3,	// (0x000283cf) list_single_graphic_popup_wml_pane_g1

0xabd3,	// (0x00028bff) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0002d38e) list_single_graphic_popup_wml_pane_g

0xabdb,	// (0x00028c07) list_single_graphic_popup_wml_pane_t1

0xabf1,	// (0x00028c1d) aid_call_pane

0xa273,	// (0x0002829f) popup_clock_analogue_window_g1

0xa273,	// (0x0002829f) popup_clock_analogue_window_g2

0x140c,	// (0x0001f438) popup_clock_analogue_window_g3

0x140c,	// (0x0001f438) popup_clock_analogue_window_g4

0xa3a3,	// (0x000283cf) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0002d393) popup_clock_analogue_window_g

0x1414,	// (0x0001f440) popup_clock_analogue_window_t1

0x1422,	// (0x0001f44e) clock_digital_number_pane_ParamLimits

0x1422,	// (0x0001f44e) clock_digital_number_pane

0x142e,	// (0x0001f45a) clock_digital_number_pane_cp02_ParamLimits

0x142e,	// (0x0001f45a) clock_digital_number_pane_cp02

0x143a,	// (0x0001f466) clock_digital_number_pane_cp03_ParamLimits

0x143a,	// (0x0001f466) clock_digital_number_pane_cp03

0x1446,	// (0x0001f472) clock_digital_number_pane_cp04_ParamLimits

0x1446,	// (0x0001f472) clock_digital_number_pane_cp04

0x1456,	// (0x0001f482) clock_digital_separator_pane_ParamLimits

0x1456,	// (0x0001f482) clock_digital_separator_pane

0x1462,	// (0x0001f48e) popup_clock_digital_window_t1

0xa3a3,	// (0x000283cf) clock_digital_number_pane_g1

0xa3a3,	// (0x000283cf) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0002d301) clock_digital_number_pane_g

0xa3a3,	// (0x000283cf) clock_digital_separator_pane_g1

0xa3a3,	// (0x000283cf) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0002d301) clock_digital_separator_pane_g

0xa020,	// (0x0002804c) bg_popup_window_pane_cp04

0xabf9,	// (0x00028c25) heading_pane_cp03

0xac01,	// (0x00028c2d) listscroll_popup_gms_pane

0xac09,	// (0x00028c35) grid_large_graphic_popup_pane

0xac13,	// (0x00028c3f) listscroll_popup_gms_pane_g1

0xac1b,	// (0x00028c47) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0002d39e) listscroll_popup_gms_pane_g

0xa6bc,	// (0x000286e8) scroll_pane_cp014

0x46f2,	// (0x0002271e) cell_large_graphic_popup_pane_ParamLimits

0x46f2,	// (0x0002271e) cell_large_graphic_popup_pane

0x470a,	// (0x00022736) cell_large_graphic_popup_pane_g1_ParamLimits

0x470a,	// (0x00022736) cell_large_graphic_popup_pane_g1

0xac23,	// (0x00028c4f) cell_large_graphic_popup_pane_g2_ParamLimits

0xac23,	// (0x00028c4f) cell_large_graphic_popup_pane_g2

0xac2f,	// (0x00028c5b) cell_large_graphic_popup_pane_g3_ParamLimits

0xac2f,	// (0x00028c5b) cell_large_graphic_popup_pane_g3

0xac3c,	// (0x00028c68) cell_large_graphic_popup_pane_g4_ParamLimits

0xac3c,	// (0x00028c68) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0002d3a3) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0002d3a3) cell_large_graphic_popup_pane_g

0xac4c,	// (0x00028c78) grid_highlight_pane_cp010

0xa3a3,	// (0x000283cf) bg_popup_call_pane_g1

0xac56,	// (0x00028c82) list_single_graphic_popup_conf_pane_ParamLimits

0xac56,	// (0x00028c82) list_single_graphic_popup_conf_pane

0xac69,	// (0x00028c95) list_highlight_pane_cp01

0xac72,	// (0x00028c9e) list_single_graphic_popup_conf_pane_g1

0xac7a,	// (0x00028ca6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0002d3ac) list_single_graphic_popup_conf_pane_g

0xac82,	// (0x00028cae) list_single_graphic_popup_conf_pane_t1

0xac90,	// (0x00028cbc) linegrid_cams_pane_g1

0x4716,	// (0x00022742) linegrid_cams_pane_g2

0xa4f9,	// (0x00028525) linegrid_cams_pane_g3

0xac99,	// (0x00028cc5) linegrid_cams_pane_g4

0x471f,	// (0x0002274b) linegrid_cams_pane_g5

0x4728,	// (0x00022754) linegrid_cams_pane_g6

0xa502,	// (0x0002852e) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0002d3b1) linegrid_cams_pane_g

0xaca2,	// (0x00028cce) popup_clock_analogue_window

0xaca2,	// (0x00028cce) popup_clock_digital_window

0xa020,	// (0x0002804c) popup_phob_thumbnail_window

0xa3a3,	// (0x000283cf) call_video_uplink_pane_g1

0xacab,	// (0x00028cd7) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0002d3c0) call_video_uplink_pane_g

0xacb3,	// (0x00028cdf) video_uplink_pane

0xacbb,	// (0x00028ce7) mce_image_pane_g1

0x4731,	// (0x0002275d) mce_image_pane_g2

0x473b,	// (0x00022767) mce_image_pane_g3

0x4743,	// (0x0002276f) mce_image_pane_g4

0x474b,	// (0x00022777) mce_image_pane_g5

0x0004,

0xf399,	// (0x0002d3c5) mce_image_pane_g

0xacc5,	// (0x00028cf1) control_top_pane_stacon_cp01_ParamLimits

0xacc5,	// (0x00028cf1) control_top_pane_stacon_cp01

0xacd9,	// (0x00028d05) uni_indicator_pane_stacon_cp01_ParamLimits

0xacd9,	// (0x00028d05) uni_indicator_pane_stacon_cp01

0xacea,	// (0x00028d16) bg_popup_sub_pane_cp03

0xacf4,	// (0x00028d20) chi_dic_find_pane

0x4753,	// (0x0002277f) listscroll_chi_dic_pane

0xacfc,	// (0x00028d28) main_pane_chidic_g1

0xad04,	// (0x00028d30) chi_dic_find_pane_t1

0xad12,	// (0x00028d3e) find_chidic_pane

0xad1b,	// (0x00028d47) chi_dic_list_pane_ParamLimits

0xad1b,	// (0x00028d47) chi_dic_list_pane

0xad2c,	// (0x00028d58) scroll_pane_cp020

0xad34,	// (0x00028d60) find_chidic_pane_t1

0xa020,	// (0x0002804c) input_focus_pane_cp06

0x4767,	// (0x00022793) list_chi_dic_pane_ParamLimits

0x4767,	// (0x00022793) list_chi_dic_pane

0x4781,	// (0x000227ad) list_chi_dic_pane_t1_ParamLimits

0x4781,	// (0x000227ad) list_chi_dic_pane_t1

0xa020,	// (0x0002804c) list_highlight_pane_cp020

0xad43,	// (0x00028d6f) bg_cale_heading_pane_g1

0x4794,	// (0x000227c0) bg_cale_heading_pane_g2

0x479c,	// (0x000227c8) bg_cale_heading_pane_g3

0x47a4,	// (0x000227d0) bg_cale_heading_pane_g4

0x47ae,	// (0x000227da) bg_cale_heading_pane_g5

0x47b8,	// (0x000227e4) bg_cale_heading_pane_g6

0x47c0,	// (0x000227ec) bg_cale_heading_pane_g7

0x47c8,	// (0x000227f4) bg_cale_heading_pane_g8

0x47d2,	// (0x000227fe) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0002d3d0) bg_cale_heading_pane_g

0xad43,	// (0x00028d6f) bg_cale_side_pane_g1

0x47dc,	// (0x00022808) bg_cale_side_pane_g2

0x47e6,	// (0x00022812) bg_cale_side_pane_g3

0x47f0,	// (0x0002281c) bg_cale_side_pane_g4

0x47fa,	// (0x00022826) bg_cale_side_pane_g5

0x4804,	// (0x00022830) bg_cale_side_pane_g6

0x480e,	// (0x0002283a) bg_cale_side_pane_g7

0x4818,	// (0x00022844) bg_cale_side_pane_g8

0x4820,	// (0x0002284c) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0002d3e3) bg_cale_side_pane_g

0x4828,	// (0x00022854) popup_call_status_window_ParamLimits

0x4828,	// (0x00022854) popup_call_status_window

0xad4b,	// (0x00028d77) stacon_top_pane

0xad53,	// (0x00028d7f) status_pane_ParamLimits

0xad53,	// (0x00028d7f) status_pane

0xad68,	// (0x00028d94) status_small_pane

0xad70,	// (0x00028d9c) control_pane

0xa020,	// (0x0002804c) stacon_bottom_pane

0xad78,	// (0x00028da4) list_single_mce_smart_pane_t1_ParamLimits

0xad78,	// (0x00028da4) list_single_mce_smart_pane_t1

0xad8b,	// (0x00028db7) list_single_mce_smart_pane_t2_ParamLimits

0xad8b,	// (0x00028db7) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0002d3f6) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0002d3f6) list_single_mce_smart_pane_t

0x4834,	// (0x00022860) compass_pane

0x4840,	// (0x0002286c) main_location2_pane_t1

0x4854,	// (0x00022880) main_location2_pane_t2

0x4868,	// (0x00022894) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0002d3fb) main_location2_pane_t

0xadaa,	// (0x00028dd6) compass_pane_g1_ParamLimits

0xadaa,	// (0x00028dd6) compass_pane_g1

0x48b2,	// (0x000228de) compass_pane_t1

0x48c1,	// (0x000228ed) compass_pane_t2

0x0005,

0xf3d8,	// (0x0002d404) compass_pane_t

0x490c,	// (0x00022938) text_secondary_cp61

0xae26,	// (0x00028e52) navi_pane_cams_g5

0xaea2,	// (0x00028ece) navi_pane_im_t1

0xaeb0,	// (0x00028edc) navi_pane_mp_g1_ParamLimits

0xaeb0,	// (0x00028edc) navi_pane_mp_g1

0xaec4,	// (0x00028ef0) navi_pane_mp_g2_ParamLimits

0xaec4,	// (0x00028ef0) navi_pane_mp_g2

0xaed0,	// (0x00028efc) navi_pane_mp_g3_ParamLimits

0xaed0,	// (0x00028efc) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0002d418) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0002d418) navi_pane_mp_g

0xaedc,	// (0x00028f08) navi_pane_mp_t1

0xaeea,	// (0x00028f16) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0002d41f) navi_pane_mp_t

0xaf55,	// (0x00028f81) navi_pane_vt_g1

0xaedc,	// (0x00028f08) navi_pane_vt_t1

0xaf5d,	// (0x00028f89) navi_slider_pane

0xa513,	// (0x0002853f) zooming_pane

0xaf6d,	// (0x00028f99) navi_slider_pane_g1

0x147f,	// (0x0001f4ab) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0002d426) navi_slider_pane_g

0xaf91,	// (0x00028fbd) aid_levels_zoom

0xaf99,	// (0x00028fc5) zooming_pane_g1

0xafa1,	// (0x00028fcd) zooming_pane_g2

0xafa1,	// (0x00028fcd) zooming_pane_g3

0x0002,

0xf409,	// (0x0002d435) zooming_pane_g

0xafa9,	// (0x00028fd5) level_10_zoom

0xafb2,	// (0x00028fde) level_11_zoom

0xafbb,	// (0x00028fe7) level_1_zoom

0xafc4,	// (0x00028ff0) level_2_zoom

0xafcd,	// (0x00028ff9) level_3_zoom

0xafd6,	// (0x00029002) level_4_zoom

0xafdf,	// (0x0002900b) level_5_zoom

0xafe8,	// (0x00029014) level_6_zoom

0xaff1,	// (0x0002901d) level_7_zoom

0xaffa,	// (0x00029026) level_8_zoom

0xb003,	// (0x0002902f) level_9_zoom

0xb014,	// (0x00029040) popup_phob_thumbnail_window_g1

0xb01c,	// (0x00029048) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0002d43c) popup_phob_thumbnail_window_g

0xc393,	// (0x0002a3bf) level_1_location

0xc39b,	// (0x0002a3c7) level_2_location

0xc3a3,	// (0x0002a3cf) level_3_location

0xc3ab,	// (0x0002a3d7) level_4_location

0xa513,	// (0x0002853f) level_5_location

0x4947,	// (0x00022973) mce_icon_pane_g1

0x494f,	// (0x0002297b) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0002d441) mce_icon_pane_g

0x4957,	// (0x00022983) main_mup_pane_g1_ParamLimits

0x4957,	// (0x00022983) main_mup_pane_g1

0x496f,	// (0x0002299b) main_mup_pane_g2_ParamLimits

0x496f,	// (0x0002299b) main_mup_pane_g2

0x498b,	// (0x000229b7) main_mup_pane_g3_ParamLimits

0x498b,	// (0x000229b7) main_mup_pane_g3

0x49a7,	// (0x000229d3) main_mup_pane_g4_ParamLimits

0x49a7,	// (0x000229d3) main_mup_pane_g4

0x49c3,	// (0x000229ef) main_mup_pane_g5_ParamLimits

0x49c3,	// (0x000229ef) main_mup_pane_g5

0x49e4,	// (0x00022a10) main_mup_pane_g6_ParamLimits

0x49e4,	// (0x00022a10) main_mup_pane_g6

0x4a00,	// (0x00022a2c) main_mup_pane_g7_ParamLimits

0x4a00,	// (0x00022a2c) main_mup_pane_g7

0x4a1c,	// (0x00022a48) main_mup_pane_g8_ParamLimits

0x4a1c,	// (0x00022a48) main_mup_pane_g8

0x4a3c,	// (0x00022a68) main_mup_pane_g9_ParamLimits

0x4a3c,	// (0x00022a68) main_mup_pane_g9

0x4a5b,	// (0x00022a87) main_mup_pane_g10_ParamLimits

0x4a5b,	// (0x00022a87) main_mup_pane_g10

0x4a7a,	// (0x00022aa6) main_mup_pane_g11_ParamLimits

0x4a7a,	// (0x00022aa6) main_mup_pane_g11

0x4a92,	// (0x00022abe) main_mup_pane_g12_ParamLimits

0x4a92,	// (0x00022abe) main_mup_pane_g12

0x4aa0,	// (0x00022acc) main_mup_pane_g13_ParamLimits

0x4aa0,	// (0x00022acc) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0002d446) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0002d446) main_mup_pane_g

0x4ab6,	// (0x00022ae2) main_mup_pane_t1_ParamLimits

0x4ab6,	// (0x00022ae2) main_mup_pane_t1

0x4ad3,	// (0x00022aff) main_mup_pane_t2_ParamLimits

0x4ad3,	// (0x00022aff) main_mup_pane_t2

0x4aed,	// (0x00022b19) main_mup_pane_t3_ParamLimits

0x4aed,	// (0x00022b19) main_mup_pane_t3

0x4b07,	// (0x00022b33) main_mup_pane_t4_ParamLimits

0x4b07,	// (0x00022b33) main_mup_pane_t4

0x4b19,	// (0x00022b45) main_mup_pane_t5_ParamLimits

0x4b19,	// (0x00022b45) main_mup_pane_t5

0x4b2b,	// (0x00022b57) main_mup_pane_t6_ParamLimits

0x4b2b,	// (0x00022b57) main_mup_pane_t6

0x0005,

0xf435,	// (0x0002d461) main_mup_pane_t_ParamLimits

0xf435,	// (0x0002d461) main_mup_pane_t

0x4b41,	// (0x00022b6d) mup_progress_pane_ParamLimits

0x4b41,	// (0x00022b6d) mup_progress_pane

0x4b4d,	// (0x00022b79) mup_visualizer_pane_ParamLimits

0x4b4d,	// (0x00022b79) mup_visualizer_pane

0x4b87,	// (0x00022bb3) mup_volume_pane_ParamLimits

0x4b87,	// (0x00022bb3) mup_volume_pane

0xb030,	// (0x0002905c) mup_visualizer_pane_g1_ParamLimits

0xb030,	// (0x0002905c) mup_visualizer_pane_g1

0xb030,	// (0x0002905c) mup_visualizer_pane_g2_ParamLimits

0xb030,	// (0x0002905c) mup_visualizer_pane_g2

0xadaa,	// (0x00028dd6) mup_visualizer_pane_g3_ParamLimits

0xadaa,	// (0x00028dd6) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0002d46e) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0002d46e) mup_visualizer_pane_g

0xa3a3,	// (0x000283cf) mup_volume_pane_g1

0xb046,	// (0x00029072) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0002d475) mup_volume_pane_g

0xa3a3,	// (0x000283cf) mup_progress_pane_g1

0xb04f,	// (0x0002907b) mup_progress_pane_g2

0xb058,	// (0x00029084) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0002d47a) mup_progress_pane_g

0xa020,	// (0x0002804c) bg_popup_window_pane_cp05

0xb061,	// (0x0002908d) heading_pane_cp02_ParamLimits

0xb061,	// (0x0002908d) heading_pane_cp02

0xb07b,	// (0x000290a7) list_popup_blid_pane

0xb083,	// (0x000290af) list_blid_sat_info_pane_ParamLimits

0xb083,	// (0x000290af) list_blid_sat_info_pane

0xb096,	// (0x000290c2) list_blid_sat_info_pane_g1

0xb09e,	// (0x000290ca) list_blid_sat_info_pane_t1

0x4c94,	// (0x00022cc0) mup_equalizer_pane_ParamLimits

0x4c94,	// (0x00022cc0) mup_equalizer_pane

0x4cb5,	// (0x00022ce1) mup_equalizer_pane_cp1_ParamLimits

0x4cb5,	// (0x00022ce1) mup_equalizer_pane_cp1

0x4cd6,	// (0x00022d02) mup_equalizer_pane_cp2_ParamLimits

0x4cd6,	// (0x00022d02) mup_equalizer_pane_cp2

0x4cf7,	// (0x00022d23) mup_equalizer_pane_cp3_ParamLimits

0x4cf7,	// (0x00022d23) mup_equalizer_pane_cp3

0x4d18,	// (0x00022d44) mup_equalizer_pane_cp4_ParamLimits

0x4d18,	// (0x00022d44) mup_equalizer_pane_cp4

0x4d39,	// (0x00022d65) mup_equalizer_pane_cp5

0x4d4f,	// (0x00022d7b) mup_equalizer_pane_cp6

0x4d67,	// (0x00022d93) mup_equalizer_pane_cp7

0xc2b1,	// (0x0002a2dd) bg_popup_call_poc_act_pane_g9

0xc2b9,	// (0x0002a2e5) bg_popup_call_poc_act_pane_g10

0xc2c1,	// (0x0002a2ed) bg_popup_call_poc_act_pane_g11

0x000a,

0xa27b,	// (0x000282a7) mup_scale_pane

0xa3a3,	// (0x000283cf) mup_scale_pane_g1

0xb0ac,	// (0x000290d8) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0002d496) mup_scale_pane_g

0xb0d0,	// (0x000290fc) msg_data_pane

0xb0d8,	// (0x00029104) scroll_pane_cp017

0x4d91,	// (0x00022dbd) bg_list_pane_cp04_ParamLimits

0x4d91,	// (0x00022dbd) bg_list_pane_cp04

0xb0e8,	// (0x00029114) msg_data_pane_g1

0x4dad,	// (0x00022dd9) msg_data_pane_g2

0x4db7,	// (0x00022de3) msg_data_pane_g3

0x4dbf,	// (0x00022deb) msg_data_pane_g4

0x4dc7,	// (0x00022df3) msg_data_pane_g5

0x4dcf,	// (0x00022dfb) msg_data_pane_g6

0x4dd7,	// (0x00022e03) msg_data_pane_g7

0x0006,

0xf479,	// (0x0002d4a5) msg_data_pane_g

0x4ddf,	// (0x00022e0b) msg_text_pane_ParamLimits

0x4ddf,	// (0x00022e0b) msg_text_pane

0x4e1b,	// (0x00022e47) qrid_highlight_pane_cp011_ParamLimits

0x4e1b,	// (0x00022e47) qrid_highlight_pane_cp011

0xa020,	// (0x0002804c) msg_body_pane

0xa020,	// (0x0002804c) msg_header_pane

0xb0f9,	// (0x00029125) input_focus_pane_cp07

0xb10e,	// (0x0002913a) msg_header_pane_t1_ParamLimits

0xb10e,	// (0x0002913a) msg_header_pane_t1

0xb120,	// (0x0002914c) msg_header_pane_t2_ParamLimits

0xb120,	// (0x0002914c) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0002d4b9) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0002d4b9) msg_header_pane_t

0xb132,	// (0x0002915e) msg_body_pane_g1

0xb13a,	// (0x00029166) msg_body_pane_t1_ParamLimits

0xb13a,	// (0x00029166) msg_body_pane_t1

0xb16b,	// (0x00029197) msg_body_pane_t2_ParamLimits

0xb16b,	// (0x00029197) msg_body_pane_t2

0xb17d,	// (0x000291a9) msg_body_pane_t3_ParamLimits

0xb17d,	// (0x000291a9) msg_body_pane_t3

0x0002,

0xf492,	// (0x0002d4be) msg_body_pane_t_ParamLimits

0xf492,	// (0x0002d4be) msg_body_pane_t

0x14c1,	// (0x0001f4ed) main_viewer_pane_g1_ParamLimits

0x14c1,	// (0x0001f4ed) main_viewer_pane_g1

0x14cd,	// (0x0001f4f9) main_viewer_pane_g2_ParamLimits

0x14cd,	// (0x0001f4f9) main_viewer_pane_g2

0x4e63,	// (0x00022e8f) main_viewer_pane_g3_ParamLimits

0x4e63,	// (0x00022e8f) main_viewer_pane_g3

0x4e74,	// (0x00022ea0) main_viewer_pane_g4_ParamLimits

0x4e74,	// (0x00022ea0) main_viewer_pane_g4

0x14d9,	// (0x0001f505) main_viewer_pane_g5_ParamLimits

0x14d9,	// (0x0001f505) main_viewer_pane_g5

0x14d9,	// (0x0001f505) main_viewer_pane_g7_ParamLimits

0x14d9,	// (0x0001f505) main_viewer_pane_g7

0xaa2d,	// (0x00028a59) main_viewer_pane_g8_ParamLimits

0xaa2d,	// (0x00028a59) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0002d4ce) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0002d4ce) main_viewer_pane_g

0xb18f,	// (0x000291bb) viewer_content_pane_ParamLimits

0xb18f,	// (0x000291bb) viewer_content_pane

0x4ea5,	// (0x00022ed1) main_postcard_pane_g1_ParamLimits

0x4ea5,	// (0x00022ed1) main_postcard_pane_g1

0x4eb3,	// (0x00022edf) main_postcard_pane_g2_ParamLimits

0x4eb3,	// (0x00022edf) main_postcard_pane_g2

0x4ec1,	// (0x00022eed) main_postcard_pane_g3_ParamLimits

0x4ec1,	// (0x00022eed) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0002d4df) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0002d4df) main_postcard_pane_g

0x4ed1,	// (0x00022efd) main_postcard_pane_g4

0xc493,	// (0x0002a4bf) smil_status_volume_pane_g2

0x4efd,	// (0x00022f29) postcard_pane_ParamLimits

0x4efd,	// (0x00022f29) postcard_pane

0xb030,	// (0x0002905c) postcard_pane_g1_ParamLimits

0xb030,	// (0x0002905c) postcard_pane_g1

0x4f2f,	// (0x00022f5b) postcard_pane_g2_ParamLimits

0x4f2f,	// (0x00022f5b) postcard_pane_g2

0x4f3b,	// (0x00022f67) postcard_pane_g3_ParamLimits

0x4f3b,	// (0x00022f67) postcard_pane_g3

0xb19d,	// (0x000291c9) postcard_pane_g4_ParamLimits

0xb19d,	// (0x000291c9) postcard_pane_g4

0x4f47,	// (0x00022f73) postcard_pane_g5_ParamLimits

0x4f47,	// (0x00022f73) postcard_pane_g5

0x4f53,	// (0x00022f7f) postcard_pane_g6_ParamLimits

0x4f53,	// (0x00022f7f) postcard_pane_g6

0xb1ab,	// (0x000291d7) postcard_pane_g7_ParamLimits

0xb1ab,	// (0x000291d7) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0002d4ec) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0002d4ec) postcard_pane_g

0x4f5f,	// (0x00022f8b) main_mp2_pane_g1_ParamLimits

0x4f5f,	// (0x00022f8b) main_mp2_pane_g1

0x4f6b,	// (0x00022f97) main_mp2_pane_g2_ParamLimits

0x4f6b,	// (0x00022f97) main_mp2_pane_g2

0x4f77,	// (0x00022fa3) main_mp2_pane_g3_ParamLimits

0x4f77,	// (0x00022fa3) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0002d4fb) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0002d4fb) main_mp2_pane_g

0x4f83,	// (0x00022faf) main_mp2_pane_t1_ParamLimits

0x4f83,	// (0x00022faf) main_mp2_pane_t1

0x4f9a,	// (0x00022fc6) main_mp2_pane_t2_ParamLimits

0x4f9a,	// (0x00022fc6) main_mp2_pane_t2

0x4fae,	// (0x00022fda) main_mp2_pane_t3_ParamLimits

0x4fae,	// (0x00022fda) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0002d502) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0002d502) main_mp2_pane_t

0xb1b9,	// (0x000291e5) pec_content_pane_ParamLimits

0xb1b9,	// (0x000291e5) pec_content_pane

0xa6bc,	// (0x000286e8) scroll_pane_cp015

0xb1cb,	// (0x000291f7) pec_attribute_pane_ParamLimits

0xb1cb,	// (0x000291f7) pec_attribute_pane

0x4fc0,	// (0x00022fec) pec_content_pane_g1_ParamLimits

0x4fc0,	// (0x00022fec) pec_content_pane_g1

0xb1db,	// (0x00029207) pec_content_pane_t1_ParamLimits

0xb1db,	// (0x00029207) pec_content_pane_t1

0xb1ed,	// (0x00029219) pec_content_pane_t2_ParamLimits

0xb1ed,	// (0x00029219) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0002d509) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0002d509) pec_content_pane_t

0x4fcc,	// (0x00022ff8) list_single_graphic_pane_cp01_ParamLimits

0x4fcc,	// (0x00022ff8) list_single_graphic_pane_cp01

0xa27b,	// (0x000282a7) bg_popup_sub_pane_cp04

0xb1ff,	// (0x0002922b) popup_mup_playback_window_g1

0xb20b,	// (0x00029237) popup_mup_playback_window_t1

0xb220,	// (0x0002924c) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0002d50e) popup_mup_playback_window_t

0xb257,	// (0x00029283) main_image_pane_g1_ParamLimits

0xb257,	// (0x00029283) main_image_pane_g1

0xb29a,	// (0x000292c6) scroll_pane_cp018_ParamLimits

0xb29a,	// (0x000292c6) scroll_pane_cp018

0xb2b2,	// (0x000292de) scroll_pane_cp016_ParamLimits

0xb2b2,	// (0x000292de) scroll_pane_cp016

0x5065,	// (0x00023091) smil2_image_pane_ParamLimits

0x5065,	// (0x00023091) smil2_image_pane

0x5095,	// (0x000230c1) smil2_root_pane_ParamLimits

0x5095,	// (0x000230c1) smil2_root_pane

0x50c1,	// (0x000230ed) smil2_text_pane_ParamLimits

0x50c1,	// (0x000230ed) smil2_text_pane

0xa020,	// (0x0002804c) bg_list_pane_cp06

0xb2ee,	// (0x0002931a) grid_radio_pane

0xa020,	// (0x0002804c) bg_popup_window_pane_cp06

0xb2f6,	// (0x00029322) main_fmradio_pane_t1

0xabf9,	// (0x00028c25) heading_pane_cp04

0xb304,	// (0x00029330) main_fmradio_pane_t2

0xc2c9,	// (0x0002a2f5) popup_cale_lunar_info_window_g1

0xb312,	// (0x0002933e) main_fmradio_pane_t3

0xc2d1,	// (0x0002a2fd) popup_cale_lunar_info_window_g2

0xb320,	// (0x0002934c) main_fmradio_pane_t4

0x0001,

0xb32e,	// (0x0002935a) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0002d5e9) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0002d523) main_fmradio_pane_t

0xb33c,	// (0x00029368) wait_bar_pane_cp03

0xb344,	// (0x00029370) cell_fmradio_pane_ParamLimits

0xb344,	// (0x00029370) cell_fmradio_pane

0xb1ab,	// (0x000291d7) cell_fmradio_pane_g1_ParamLimits

0xb1ab,	// (0x000291d7) cell_fmradio_pane_g1

0xa020,	// (0x0002804c) grid_highlight_pane_cp011

0xb357,	// (0x00029383) poc_content_pane_ParamLimits

0xb357,	// (0x00029383) poc_content_pane

0xb369,	// (0x00029395) scroll_pane_cp019

0x5101,	// (0x0002312d) popup_call_poc_act_window_ParamLimits

0x5101,	// (0x0002312d) popup_call_poc_act_window

0x510e,	// (0x0002313a) popup_call_poc_inact_window_ParamLimits

0x510e,	// (0x0002313a) popup_call_poc_inact_window

0xf594,	// (0x0002d5c0) bg_popup_call_poc_act_pane_g

0xc241,	// (0x0002a26d) bg_popup_call_poc_inact_pane_g1

0xc249,	// (0x0002a275) bg_popup_call_poc_inact_pane_g2

0xb371,	// (0x0002939d) popup_call_poc_act_window_g2

0xc251,	// (0x0002a27d) bg_popup_call_poc_inact_pane_g3

0xc259,	// (0x0002a285) bg_popup_call_poc_inact_pane_g4

0xc261,	// (0x0002a28d) bg_popup_call_poc_inact_pane_g5

0xb379,	// (0x000293a5) popup_call_poc_act_window_t1_ParamLimits

0xb379,	// (0x000293a5) popup_call_poc_act_window_t1

0xb3a1,	// (0x000293cd) popup_call_poc_act_window_t2_ParamLimits

0xb3a1,	// (0x000293cd) popup_call_poc_act_window_t2

0xb3c9,	// (0x000293f5) popup_call_poc_act_window_t3_ParamLimits

0xb3c9,	// (0x000293f5) popup_call_poc_act_window_t3

0xb3f1,	// (0x0002941d) popup_call_poc_act_window_t4_ParamLimits

0xb3f1,	// (0x0002941d) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0002d52e) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0002d52e) popup_call_poc_act_window_t

0xc269,	// (0x0002a295) bg_popup_call_poc_inact_pane_g6

0xc271,	// (0x0002a29d) bg_popup_call_poc_inact_pane_g7

0xc279,	// (0x0002a2a5) bg_popup_call_poc_inact_pane_g8

0xb403,	// (0x0002942f) popup_call_poc_inact_window_g2

0xc281,	// (0x0002a2ad) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0002d5ad) bg_popup_call_poc_inact_pane_g

0xb40b,	// (0x00029437) popup_call_poc_inact_window_t1_ParamLimits

0xb40b,	// (0x00029437) popup_call_poc_inact_window_t1

0xb420,	// (0x0002944c) popup_call_poc_inact_window_t2_ParamLimits

0xb420,	// (0x0002944c) popup_call_poc_inact_window_t2

0xb435,	// (0x00029461) popup_call_poc_inact_window_t3_ParamLimits

0xb435,	// (0x00029461) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0002d537) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0002d537) popup_call_poc_inact_window_t

0xc406,	// (0x0002a432) context_pane_ParamLimits

0x55c4,	// (0x000235f0) signal_pane_ParamLimits

0xa513,	// (0x0002853f) main_call2_pane

0x1634,	// (0x0001f660) popup_phob_thumbnail2_window_ParamLimits

0x1634,	// (0x0001f660) popup_phob_thumbnail2_window

0x1491,	// (0x0001f4bd) aid_hotspot_pointer_arrow_pane

0x1499,	// (0x0001f4c5) aid_hotspot_pointer_hand_pane

0x5430,	// (0x0002345c) phob_pre_status_pane_g5

0x2fd7,	// (0x00021003) cams_zoom_pane_ParamLimits

0x2fe3,	// (0x0002100f) image_vga_pane_ParamLimits

0x2ff2,	// (0x0002101e) main_camera_pane_g1_ParamLimits

0x3000,	// (0x0002102c) main_camera_pane_g2_ParamLimits

0x300c,	// (0x00021038) main_camera_pane_g3_ParamLimits

0x3018,	// (0x00021044) main_camera_pane_g4_ParamLimits

0x3024,	// (0x00021050) main_camera_pane_g5_ParamLimits

0x3030,	// (0x0002105c) main_camera_pane_g6_ParamLimits

0x303c,	// (0x00021068) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0002d236) main_camera_pane_g_ParamLimits

0x3048,	// (0x00021074) main_camera_pane_t1_ParamLimits

0x305a,	// (0x00021086) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0002d247) main_camera_pane_t_ParamLimits

0xa27b,	// (0x000282a7) bg_popup_preview_window_pane_cp01_ParamLimits

0xa27b,	// (0x000282a7) bg_popup_preview_window_pane_cp01

0xb44a,	// (0x00029476) popup_phob_thumbnail2_window_g1_ParamLimits

0xb44a,	// (0x00029476) popup_phob_thumbnail2_window_g1

0xa020,	// (0x0002804c) call2_cli_visual_pane

0x512a,	// (0x00023156) popup_call2_audio_conf_window_ParamLimits

0x512a,	// (0x00023156) popup_call2_audio_conf_window

0x513f,	// (0x0002316b) popup_call2_audio_first_window_ParamLimits

0x513f,	// (0x0002316b) popup_call2_audio_first_window

0x51dd,	// (0x00023209) popup_call2_audio_in_window_ParamLimits

0x51dd,	// (0x00023209) popup_call2_audio_in_window

0x521f,	// (0x0002324b) popup_call2_audio_out_window_ParamLimits

0x521f,	// (0x0002324b) popup_call2_audio_out_window

0x5281,	// (0x000232ad) popup_call2_audio_second_window_ParamLimits

0x5281,	// (0x000232ad) popup_call2_audio_second_window

0x52df,	// (0x0002330b) popup_call2_audio_wait_window_ParamLimits

0x52df,	// (0x0002330b) popup_call2_audio_wait_window

0xa020,	// (0x0002804c) bg_popup_call2_act_pane_cp03

0xa25d,	// (0x00028289) list_conf_pane_cp

0xb456,	// (0x00029482) popup_call2_audio_conf_window_t1

0xac56,	// (0x00028c82) list_single_graphic_popup_conf2_pane_ParamLimits

0xac56,	// (0x00028c82) list_single_graphic_popup_conf2_pane

0xac69,	// (0x00028c95) list_highlight_pane_cp04

0xb464,	// (0x00029490) list_single_graphic_popup_conf2_pane_g1

0xac7a,	// (0x00028ca6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0002d53e) list_single_graphic_popup_conf2_pane_g

0xb46e,	// (0x0002949a) list_single_graphic_popup_conf2_pane_t1

0xb47c,	// (0x000294a8) bg_popup_call2_act_pane_cp01_ParamLimits

0xb47c,	// (0x000294a8) bg_popup_call2_act_pane_cp01

0xb506,	// (0x00029532) call_type_pane_cp05_ParamLimits

0xb506,	// (0x00029532) call_type_pane_cp05

0xb55a,	// (0x00029586) popup_call2_audio_second_window_g1_ParamLimits

0xb55a,	// (0x00029586) popup_call2_audio_second_window_g1

0xb5ae,	// (0x000295da) popup_call2_audio_second_window_g2_ParamLimits

0xb5ae,	// (0x000295da) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0002d543) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0002d543) popup_call2_audio_second_window_g

0xb613,	// (0x0002963f) popup_call2_audio_second_window_t1_ParamLimits

0xb613,	// (0x0002963f) popup_call2_audio_second_window_t1

0xb6ce,	// (0x000296fa) popup_call2_audio_second_window_t2_ParamLimits

0xb6ce,	// (0x000296fa) popup_call2_audio_second_window_t2

0xb721,	// (0x0002974d) popup_call2_audio_second_window_t3_ParamLimits

0xb721,	// (0x0002974d) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0002d54a) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0002d54a) popup_call2_audio_second_window_t

0xa020,	// (0x0002804c) bg_popup_call2_in_pane_cp02

0xa02a,	// (0x00028056) call_type_pane_cp04

0xa032,	// (0x0002805e) popup_call2_audio_wait_window_g1

0xa03a,	// (0x00028066) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002d125) popup_call2_audio_wait_window_g

0xa042,	// (0x0002806e) popup_call2_audio_wait_window_t3

0xb814,	// (0x00029840) bg_popup_call2_act_pane_ParamLimits

0xb814,	// (0x00029840) bg_popup_call2_act_pane

0xb8d4,	// (0x00029900) call_type_pane_cp03_ParamLimits

0xb8d4,	// (0x00029900) call_type_pane_cp03

0xb938,	// (0x00029964) popup_call2_audio_first_window_g1_ParamLimits

0xb938,	// (0x00029964) popup_call2_audio_first_window_g1

0xb9a8,	// (0x000299d4) popup_call2_audio_first_window_g2_ParamLimits

0xb9a8,	// (0x000299d4) popup_call2_audio_first_window_g2

0xb030,	// (0x0002905c) popup_call2_audio_first_window_g3_ParamLimits

0xb030,	// (0x0002905c) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0002d553) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0002d553) popup_call2_audio_first_window_g

0xba86,	// (0x00029ab2) popup_call2_audio_first_window_t1_ParamLimits

0xba86,	// (0x00029ab2) popup_call2_audio_first_window_t1

0xbb89,	// (0x00029bb5) popup_call2_audio_first_window_t4_ParamLimits

0xbb89,	// (0x00029bb5) popup_call2_audio_first_window_t4

0xbc6c,	// (0x00029c98) popup_call2_audio_first_window_t5_ParamLimits

0xbc6c,	// (0x00029c98) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0002d55e) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0002d55e) popup_call2_audio_first_window_t

0xa273,	// (0x0002829f) bg_popup_call2_act_pane_g1

0xc2d9,	// (0x0002a305) popup_cale_lunar_info_window_t1

0xc2e7,	// (0x0002a313) popup_cale_lunar_info_window_t2

0xc2f5,	// (0x0002a321) popup_cale_lunar_info_window_t3

0xa020,	// (0x0002804c) bg_popup_call2_bubble_pane

0xbd6d,	// (0x00029d99) bg_popup_call2_in_pane_cp01_ParamLimits

0xbd6d,	// (0x00029d99) bg_popup_call2_in_pane_cp01

0x9cfc,	// (0x00027d28) call_type_pane_cp02

0xbdb5,	// (0x00029de1) popup_call2_audio_out_window_g1_ParamLimits

0xbdb5,	// (0x00029de1) popup_call2_audio_out_window_g1

0xbde1,	// (0x00029e0d) popup_call2_audio_out_window_g2_ParamLimits

0xbde1,	// (0x00029e0d) popup_call2_audio_out_window_g2

0xbe09,	// (0x00029e35) popup_call2_audio_out_window_g3_ParamLimits

0xbe09,	// (0x00029e35) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0002d567) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0002d567) popup_call2_audio_out_window_g

0xbe44,	// (0x00029e70) popup_call2_audio_out_window_t1_ParamLimits

0xbe44,	// (0x00029e70) popup_call2_audio_out_window_t1

0xbea3,	// (0x00029ecf) popup_call2_audio_out_window_t2_ParamLimits

0xbea3,	// (0x00029ecf) popup_call2_audio_out_window_t2

0xbef7,	// (0x00029f23) popup_call2_audio_out_window_t3_ParamLimits

0xbef7,	// (0x00029f23) popup_call2_audio_out_window_t3

0xbf0d,	// (0x00029f39) popup_call2_audio_out_window_t4_ParamLimits

0xbf0d,	// (0x00029f39) popup_call2_audio_out_window_t4

0xbf23,	// (0x00029f4f) popup_call2_audio_out_window_t5_ParamLimits

0xbf23,	// (0x00029f4f) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0002d570) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0002d570) popup_call2_audio_out_window_t

0xbf87,	// (0x00029fb3) bg_popup_call2_in_pane_ParamLimits

0xbf87,	// (0x00029fb3) bg_popup_call2_in_pane

0xbfe3,	// (0x0002a00f) popup_call2_audio_in_window_g1_ParamLimits

0xbfe3,	// (0x0002a00f) popup_call2_audio_in_window_g1

0xc01b,	// (0x0002a047) popup_call2_audio_in_window_g2_ParamLimits

0xc01b,	// (0x0002a047) popup_call2_audio_in_window_g2

0xc053,	// (0x0002a07f) popup_call2_audio_in_window_g3_ParamLimits

0xc053,	// (0x0002a07f) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0002d57d) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0002d57d) popup_call2_audio_in_window_g

0xc0ab,	// (0x0002a0d7) popup_call2_audio_in_window_t1_ParamLimits

0xc0ab,	// (0x0002a0d7) popup_call2_audio_in_window_t1

0xc12b,	// (0x0002a157) popup_call2_audio_in_window_t2_ParamLimits

0xc12b,	// (0x0002a157) popup_call2_audio_in_window_t2

0xc1ab,	// (0x0002a1d7) popup_call2_audio_in_window_t3_ParamLimits

0xc1ab,	// (0x0002a1d7) popup_call2_audio_in_window_t3

0xc1c5,	// (0x0002a1f1) popup_call2_audio_in_window_t4_ParamLimits

0xc1c5,	// (0x0002a1f1) popup_call2_audio_in_window_t4

0xc1d7,	// (0x0002a203) popup_call2_audio_in_window_t5_ParamLimits

0xc1d7,	// (0x0002a203) popup_call2_audio_in_window_t5

0xc1ec,	// (0x0002a218) popup_call2_audio_in_window_t6_ParamLimits

0xc1ec,	// (0x0002a218) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0002d586) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002d586) popup_call2_audio_in_window_t

0xa273,	// (0x0002829f) bg_popup_call2_in_pane_g1

0xc303,	// (0x0002a32f) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0002d5ee) popup_cale_lunar_info_window_t

0xa27b,	// (0x000282a7) bg_popup_call2_rect_pane_ParamLimits

0xa27b,	// (0x000282a7) bg_popup_call2_rect_pane

0xa020,	// (0x0002804c) call2_cli_visual_graphic_pane

0xa020,	// (0x0002804c) call2_cli_visual_text_pane

0x1683,	// (0x0001f6af) smil_status_volume_pane_g3

0x0002,

0xa3a3,	// (0x000283cf) call2_cli_visual_graphic_pane_g1

0xa3a3,	// (0x000283cf) call2_cli_visual_graphic_pane_g2

0xa3a3,	// (0x000283cf) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0002d593) call2_cli_visual_graphic_pane_g

0xc201,	// (0x0002a22d) bg_popup_call2_rect_pane_g1

0xa42f,	// (0x0002845b) bg_popup_call2_rect_pane_g2

0xc209,	// (0x0002a235) bg_popup_call2_rect_pane_g3

0xc211,	// (0x0002a23d) bg_popup_call2_rect_pane_g4

0xc219,	// (0x0002a245) bg_popup_call2_rect_pane_g5

0xc221,	// (0x0002a24d) bg_popup_call2_rect_pane_g6

0xc229,	// (0x0002a255) bg_popup_call2_rect_pane_g7

0xc231,	// (0x0002a25d) bg_popup_call2_rect_pane_g8

0xc239,	// (0x0002a265) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0002d59a) bg_popup_call2_rect_pane_g

0xc241,	// (0x0002a26d) bg_popup_call2_bubble_pane_g1

0xc249,	// (0x0002a275) bg_popup_call2_bubble_pane_g2

0xc251,	// (0x0002a27d) bg_popup_call2_bubble_pane_g3

0xc259,	// (0x0002a285) bg_popup_call2_bubble_pane_g4

0xc261,	// (0x0002a28d) bg_popup_call2_bubble_pane_g5

0xc269,	// (0x0002a295) bg_popup_call2_bubble_pane_g6

0xc271,	// (0x0002a29d) bg_popup_call2_bubble_pane_g7

0xc279,	// (0x0002a2a5) bg_popup_call2_bubble_pane_g8

0xc281,	// (0x0002a2ad) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0002d5ad) bg_popup_call2_bubble_pane_g

0x2afa,	// (0x00020b26) aid_cale_week_size_cell_pane

0x306c,	// (0x00021098) aid_cams_cif_uncrop_pane_ParamLimits

0x306c,	// (0x00021098) aid_cams_cif_uncrop_pane

0x31c7,	// (0x000211f3) aid_cams_size_cell_ParamLimits

0x31c7,	// (0x000211f3) aid_cams_size_cell

0x31d3,	// (0x000211ff) grid_cams_pane_ParamLimits

0x31e1,	// (0x0002120d) linegrid_cams_pane_ParamLimits

0x33cd,	// (0x000213f9) call_video_pane_t1

0x33ee,	// (0x0002141a) call_video_pane_t2

0x0001,

0xf26e,	// (0x0002d29a) call_video_pane_t

0x3937,	// (0x00021963) aid_cale_month_size_cell_pane_ParamLimits

0x3937,	// (0x00021963) aid_cale_month_size_cell_pane

0xf60b,	// (0x0002d637) smil_status_volume_pane_g

0x1690,	// (0x0001f6bc) volume_smil_pane_ParamLimits

0x0e36,	// (0x0001ee62) aid_popup2_width_pane

0x2a36,	// (0x00020a62) cell_qdial_pane_g4_ParamLimits

0x2a36,	// (0x00020a62) cell_qdial_pane_g4

0x488e,	// (0x000228ba) aid_blid_cardinal_pane_ParamLimits

0x489e,	// (0x000228ca) aid_blid_destination_pane_ParamLimits

0x489e,	// (0x000228ca) aid_blid_destination_pane

0xa27b,	// (0x000282a7) bg_popup_call_poc_act_pane_ParamLimits

0xa27b,	// (0x000282a7) bg_popup_call_poc_act_pane

0xa27b,	// (0x000282a7) bg_popup_call_poc_inact_pane_ParamLimits

0xa27b,	// (0x000282a7) bg_popup_call_poc_inact_pane

0xc289,	// (0x0002a2b5) bg_popup_call_poc_act_pane_g1

0xc291,	// (0x0002a2bd) bg_popup_call_poc_act_pane_g2

0xc299,	// (0x0002a2c5) bg_popup_call_poc_act_pane_g3

0xc259,	// (0x0002a285) bg_popup_call_poc_act_pane_g4

0xc261,	// (0x0002a28d) bg_popup_call_poc_act_pane_g5

0xc2a1,	// (0x0002a2cd) bg_popup_call_poc_act_pane_g6

0xc271,	// (0x0002a29d) bg_popup_call_poc_act_pane_g7

0xc2a9,	// (0x0002a2d5) bg_popup_call_poc_act_pane_g8

0xa020,	// (0x0002804c) main_usb_pane

0x1563,	// (0x0001f58f) popup_cale_lunar_info_window

0x3719,	// (0x00021745) im_reading_pane_t1_ParamLimits

0xa614,	// (0x00028640) list_im_pane_ParamLimits

0xa625,	// (0x00028651) scroll_pane_cp07_ParamLimits

0xa020,	// (0x0002804c) grid_highlight_pane_cp012

0xa27b,	// (0x000282a7) mup_scale_pane_ParamLimits

0xb030,	// (0x0002905c) main_usb_pane_g1_ParamLimits

0xb030,	// (0x0002905c) main_usb_pane_g1

0x5353,	// (0x0002337f) main_usb_pane_g2_ParamLimits

0x5353,	// (0x0002337f) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0002d5d7) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0002d5d7) main_usb_pane_g

0x535f,	// (0x0002338b) main_usb_pane_t1_ParamLimits

0x535f,	// (0x0002338b) main_usb_pane_t1

0x5371,	// (0x0002339d) main_usb_pane_t2_ParamLimits

0x5371,	// (0x0002339d) main_usb_pane_t2

0x5383,	// (0x000233af) main_usb_pane_t3_ParamLimits

0x5383,	// (0x000233af) main_usb_pane_t3

0x5395,	// (0x000233c1) main_usb_pane_t4_ParamLimits

0x5395,	// (0x000233c1) main_usb_pane_t4

0x53a7,	// (0x000233d3) main_usb_pane_t5_ParamLimits

0x53a7,	// (0x000233d3) main_usb_pane_t5

0x53b9,	// (0x000233e5) main_usb_pane_t6_ParamLimits

0x53b9,	// (0x000233e5) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0002d5dc) main_usb_pane_t_ParamLimits

0x4834,	// (0x00022860) aid_text_placing

0x4840,	// (0x0002286c) main_location2_pane_t1_ParamLimits

0x4854,	// (0x00022880) main_location2_pane_t2_ParamLimits

0x4868,	// (0x00022894) main_location2_pane_t3_ParamLimits

0x487c,	// (0x000228a8) main_location2_pane_t4_ParamLimits

0x487c,	// (0x000228a8) main_location2_pane_t4

0xf3cf,	// (0x0002d3fb) main_location2_pane_t_ParamLimits

0xa2b7,	// (0x000282e3) find_pinb_pane_g2_ParamLimits

0xa2b7,	// (0x000282e3) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0002d14b) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0002d14b) find_pinb_pane_g

0xa2c3,	// (0x000282ef) find_pinb_pane_t1_ParamLimits

0xa2d5,	// (0x00028301) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0002d150) find_pinb_pane_t_ParamLimits

0xa020,	// (0x0002804c) main_call3_pane

0x3e8b,	// (0x00021eb7) cale_month_day_heading_pane_t1_ParamLimits

0x3f11,	// (0x00021f3d) cale_month_day_heading_pane_t2_ParamLimits

0x3fa2,	// (0x00021fce) cale_month_day_heading_pane_t3_ParamLimits

0x4033,	// (0x0002205f) cale_month_day_heading_pane_t4_ParamLimits

0x40c4,	// (0x000220f0) cale_month_day_heading_pane_t5_ParamLimits

0x4155,	// (0x00022181) cale_month_day_heading_pane_t6_ParamLimits

0x41e6,	// (0x00022212) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0002d2d2) cale_month_day_heading_pane_t_ParamLimits

0xa86f,	// (0x0002889b) smil_status_volume_pane

0x4f17,	// (0x00022f43) postcard_address_pane_ParamLimits

0x4f17,	// (0x00022f43) postcard_address_pane

0x4f23,	// (0x00022f4f) postcard_message_pane_ParamLimits

0x4f23,	// (0x00022f4f) postcard_message_pane

0x531e,	// (0x0002334a) call2_cli_visual_pane_t1_ParamLimits

0x531e,	// (0x0002334a) call2_cli_visual_pane_t1

0x57ac,	// (0x000237d8) postcard_message_pane_t1_ParamLimits

0x57ac,	// (0x000237d8) postcard_message_pane_t1

0x5795,	// (0x000237c1) postcard_address_pane_t1_ParamLimits

0x5795,	// (0x000237c1) postcard_address_pane_t1

0x5786,	// (0x000237b2) popup_call3_audio_in_window_ParamLimits

0x5786,	// (0x000237b2) popup_call3_audio_in_window

0x566a,	// (0x00023696) bg_popup_call3_in_pane_ParamLimits

0x566a,	// (0x00023696) bg_popup_call3_in_pane

0x56cc,	// (0x000236f8) popup_call3_audio_in_window_g1_ParamLimits

0x56cc,	// (0x000236f8) popup_call3_audio_in_window_g1

0x56e4,	// (0x00023710) popup_call3_audio_in_window_g2_ParamLimits

0x56e4,	// (0x00023710) popup_call3_audio_in_window_g2

0x56fc,	// (0x00023728) popup_call3_audio_in_window_g3_ParamLimits

0x56fc,	// (0x00023728) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0002d63e) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0002d63e) popup_call3_audio_in_window_g

0x5724,	// (0x00023750) popup_call3_audio_in_window_t1_ParamLimits

0x5724,	// (0x00023750) popup_call3_audio_in_window_t1

0x574c,	// (0x00023778) popup_call3_audio_in_window_t2_ParamLimits

0x574c,	// (0x00023778) popup_call3_audio_in_window_t2

0x5774,	// (0x000237a0) popup_call3_audio_in_window_t3_ParamLimits

0x5774,	// (0x000237a0) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0002d647) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0002d647) popup_call3_audio_in_window_t

0xa513,	// (0x0002853f) bg_popup_call3_rect_pane

0xc201,	// (0x0002a22d) bg_popup_call3_rect_pane_g1

0xa42f,	// (0x0002845b) bg_popup_call3_rect_pane_g2

0xc209,	// (0x0002a235) bg_popup_call3_rect_pane_g3

0xc211,	// (0x0002a23d) bg_popup_call3_rect_pane_g4

0xc219,	// (0x0002a245) bg_popup_call3_rect_pane_g5

0xc221,	// (0x0002a24d) bg_popup_call3_rect_pane_g6

0xc229,	// (0x0002a255) bg_popup_call3_rect_pane_g7

0x4ba2,	// (0x00022bce) mup_visualizer_osc_pane

0xb03e,	// (0x0002906a) mup_visualizer_spec_pane

0x568a,	// (0x000236b6) call3_video_qcif_pane_ParamLimits

0x568a,	// (0x000236b6) call3_video_qcif_pane

0x569c,	// (0x000236c8) call3_video_qcif_uncrop_pane_ParamLimits

0x569c,	// (0x000236c8) call3_video_qcif_uncrop_pane

0x56aa,	// (0x000236d6) call3_video_subqcif_pane_ParamLimits

0x56aa,	// (0x000236d6) call3_video_subqcif_pane

0x56bc,	// (0x000236e8) call3_video_subqcif_uncrop_pane_ParamLimits

0x56bc,	// (0x000236e8) call3_video_subqcif_uncrop_pane

0x5714,	// (0x00023740) popup_call3_audio_in_window_g4_ParamLimits

0x5714,	// (0x00023740) popup_call3_audio_in_window_g4

0x5659,	// (0x00023685) mup_spec_half_pane

0x5662,	// (0x0002368e) mup_spec_half_pane_cp

0xc466,	// (0x0002a492) mup_osc_middle_pane

0xc46f,	// (0x0002a49b) mup_visualizer_osc_pane_g1

0x563a,	// (0x00023666) mup_spec_bar_pane_ParamLimits

0x563a,	// (0x00023666) mup_spec_bar_pane

0xc453,	// (0x0002a47f) mup_spec_bar_pane_g1

0xc45d,	// (0x0002a489) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002d632) mup_spec_bar_pane_g

0x2afa,	// (0x00020b26) aid_cale_week_size_cell_pane_ParamLimits

0x2b0f,	// (0x00020b3b) bg_cale_heading_pane_ParamLimits

0xa46c,	// (0x00028498) bg_cale_pane_cp01_ParamLimits

0x2b31,	// (0x00020b5d) cale_week_corner_pane_ParamLimits

0x2b4b,	// (0x00020b77) cale_week_day_heading_pane_ParamLimits

0x2b6d,	// (0x00020b99) cale_week_scroll_pane_g1_ParamLimits

0x2b8a,	// (0x00020bb6) cale_week_scroll_pane_g2_ParamLimits

0x2b9d,	// (0x00020bc9) cale_week_scroll_pane_g3_ParamLimits

0x2bb0,	// (0x00020bdc) cale_week_scroll_pane_g4_ParamLimits

0x2bc3,	// (0x00020bef) cale_week_scroll_pane_g5_ParamLimits

0x2bd6,	// (0x00020c02) cale_week_scroll_pane_g6_ParamLimits

0x2be9,	// (0x00020c15) cale_week_scroll_pane_g7_ParamLimits

0x2bfc,	// (0x00020c28) cale_week_scroll_pane_g8_ParamLimits

0x2c11,	// (0x00020c3d) cale_week_scroll_pane_g9_ParamLimits

0x2c24,	// (0x00020c50) cale_week_scroll_pane_g10_ParamLimits

0x2c37,	// (0x00020c63) cale_week_scroll_pane_g11_ParamLimits

0x2c4a,	// (0x00020c76) cale_week_scroll_pane_g12_ParamLimits

0x2c61,	// (0x00020c8d) cale_week_scroll_pane_g13_ParamLimits

0x2c7c,	// (0x00020ca8) cale_week_scroll_pane_g14_ParamLimits

0x2c97,	// (0x00020cc3) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0002d1dc) cale_week_scroll_pane_g_ParamLimits

0x2cc7,	// (0x00020cf3) cale_week_time_pane_ParamLimits

0x2cdc,	// (0x00020d08) grid_cale_week_pane_ParamLimits

0xa489,	// (0x000284b5) listscroll_cale_week_pane_t1

0xa49b,	// (0x000284c7) scroll_pane_cp08_ParamLimits

0x39a0,	// (0x000219cc) cale_month_corner_pane_ParamLimits

0xa845,	// (0x00028871) cale_month_pane_t1

0x3e28,	// (0x00021e54) cale_month_week_pane_ParamLimits

0xb030,	// (0x0002905c) popup_call_status_window_g1_ParamLimits

0x46da,	// (0x00022706) popup_call_status_window_g2_ParamLimits

0x46e6,	// (0x00022712) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0002d382) popup_call_status_window_g_ParamLimits

0xabe9,	// (0x00028c15) aid_call2_pane

0x4e35,	// (0x00022e61) msg_header_pane_g1

0x4f17,	// (0x00022f43) postcard_address2_pane_ParamLimits

0x4f17,	// (0x00022f43) postcard_address2_pane

0x4f23,	// (0x00022f4f) postcard_message2_pane_ParamLimits

0x4f23,	// (0x00022f4f) postcard_message2_pane

0x55d2,	// (0x000235fe) message2_row_pane_ParamLimits

0x55d2,	// (0x000235fe) message2_row_pane

0x55ed,	// (0x00023619) address2_row_pane_ParamLimits

0x55ed,	// (0x00023619) address2_row_pane

0xc421,	// (0x0002a44d) postcard_message2_row_pane_g1

0xc429,	// (0x0002a455) postcard_message2_row_pane_t1

0xc421,	// (0x0002a44d) address2_row_pane_g1

0xc429,	// (0x0002a455) address2_row_pane_t1

0x2f5c,	// (0x00020f88) aid_size_cell_vorec

0xa020,	// (0x0002804c) main_rss_pane

0x5600,	// (0x0002362c) rss_list_single_pane_ParamLimits

0x5600,	// (0x0002362c) rss_list_single_pane

0xc437,	// (0x0002a463) rss_list_single_pane_t1

0xc445,	// (0x0002a471) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0002d62d) rss_list_single_pane_t

0xa020,	// (0x0002804c) main_camera2_pane

0xa020,	// (0x0002804c) main_video2_pane

0x16ee,	// (0x0001f71a) cams_zoom_pane_cp2_ParamLimits

0x16ee,	// (0x0001f71a) cams_zoom_pane_cp2

0x16fa,	// (0x0001f726) image2_vga_pane_ParamLimits

0x16fa,	// (0x0001f726) image2_vga_pane

0x1709,	// (0x0001f735) main_camera2_pane_g1_ParamLimits

0x1709,	// (0x0001f735) main_camera2_pane_g1

0x1715,	// (0x0001f741) main_camera2_pane_g2_ParamLimits

0x1715,	// (0x0001f741) main_camera2_pane_g2

0x1721,	// (0x0001f74d) main_camera2_pane_g3_ParamLimits

0x1721,	// (0x0001f74d) main_camera2_pane_g3

0x172d,	// (0x0001f759) main_camera2_pane_g4_ParamLimits

0x172d,	// (0x0001f759) main_camera2_pane_g4

0x1739,	// (0x0001f765) main_camera2_pane_g5_ParamLimits

0x1739,	// (0x0001f765) main_camera2_pane_g5

0x1745,	// (0x0001f771) main_camera2_pane_g6_ParamLimits

0x1745,	// (0x0001f771) main_camera2_pane_g6

0x1751,	// (0x0001f77d) main_camera2_pane_g7_ParamLimits

0x1751,	// (0x0001f77d) main_camera2_pane_g7

0x175d,	// (0x0001f789) main_camera2_pane_g8_ParamLimits

0x175d,	// (0x0001f789) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0002d64e) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0002d64e) main_camera2_pane_g

0x1775,	// (0x0001f7a1) main_camera2_pane_t1_ParamLimits

0x1775,	// (0x0001f7a1) main_camera2_pane_t1

0x1787,	// (0x0001f7b3) main_camera2_pane_t2_ParamLimits

0x1787,	// (0x0001f7b3) main_camera2_pane_t2

0x1799,	// (0x0001f7c5) main_camera2_pane_t3_ParamLimits

0x1799,	// (0x0001f7c5) main_camera2_pane_t3

0x17ab,	// (0x0001f7d7) main_camera2_pane_t4_ParamLimits

0x17ab,	// (0x0001f7d7) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0002d661) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0002d661) main_camera2_pane_t

0x180d,	// (0x0001f839) cams_zoom_pane_cp4_ParamLimits

0x180d,	// (0x0001f839) cams_zoom_pane_cp4

0x181d,	// (0x0001f849) image2_cif_pane_ParamLimits

0x181d,	// (0x0001f849) image2_cif_pane

0x1832,	// (0x0001f85e) image2_subqcif_pane_ParamLimits

0x1832,	// (0x0001f85e) image2_subqcif_pane

0x1841,	// (0x0001f86d) main_video2_pane_g1_ParamLimits

0x1841,	// (0x0001f86d) main_video2_pane_g1

0x1853,	// (0x0001f87f) main_video2_pane_g2_ParamLimits

0x1853,	// (0x0001f87f) main_video2_pane_g2

0x1863,	// (0x0001f88f) main_video2_pane_g3_ParamLimits

0x1863,	// (0x0001f88f) main_video2_pane_g3

0x1873,	// (0x0001f89f) main_video2_pane_g4_ParamLimits

0x1873,	// (0x0001f89f) main_video2_pane_g4

0x1883,	// (0x0001f8af) main_video2_pane_g5_ParamLimits

0x1883,	// (0x0001f8af) main_video2_pane_g5

0x1893,	// (0x0001f8bf) main_video2_pane_g6_ParamLimits

0x1893,	// (0x0001f8bf) main_video2_pane_g6

0x0005,

0xf644,	// (0x0002d670) main_video2_pane_g_ParamLimits

0xf644,	// (0x0002d670) main_video2_pane_g

0x18a5,	// (0x0001f8d1) main_video2_pane_t1_ParamLimits

0x18a5,	// (0x0001f8d1) main_video2_pane_t1

0x18bf,	// (0x0001f8eb) main_video2_pane_t2_ParamLimits

0x18bf,	// (0x0001f8eb) main_video2_pane_t2

0x18e5,	// (0x0001f911) main_video2_pane_t3_ParamLimits

0x18e5,	// (0x0001f911) main_video2_pane_t3

0x0002,

0xf651,	// (0x0002d67d) main_video2_pane_t_ParamLimits

0xf651,	// (0x0002d67d) main_video2_pane_t

0x5470,	// (0x0002349c) call_muted_g2

0x0001,

0xf5f3,	// (0x0002d61f) call_muted_g

0xa020,	// (0x0002804c) main_mup2_pane

0xc4a6,	// (0x0002a4d2) main_mup2_pane_g1_ParamLimits

0xc4a6,	// (0x0002a4d2) main_mup2_pane_g1

0x57c7,	// (0x000237f3) main_mup2_pane_g2_ParamLimits

0x57c7,	// (0x000237f3) main_mup2_pane_g2

0x1934,	// (0x0001f960) main_mup_pane_g13_cp1

0x193c,	// (0x0001f968) mup_volume_pane_cp1

0x57e7,	// (0x00023813) main_mup2_pane_g4_ParamLimits

0x57e7,	// (0x00023813) main_mup2_pane_g4

0x57fc,	// (0x00023828) main_mup2_pane_g5_ParamLimits

0x57fc,	// (0x00023828) main_mup2_pane_g5

0x5811,	// (0x0002383d) main_mup2_pane_g6_ParamLimits

0x5811,	// (0x0002383d) main_mup2_pane_g6

0x5826,	// (0x00023852) main_mup2_pane_g7_ParamLimits

0x5826,	// (0x00023852) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0002d684) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0002d684) main_mup2_pane_g

0x5842,	// (0x0002386e) main_mup2_pane_t1_ParamLimits

0x5842,	// (0x0002386e) main_mup2_pane_t1

0x5859,	// (0x00023885) main_mup2_pane_t2_ParamLimits

0x5859,	// (0x00023885) main_mup2_pane_t2

0x5870,	// (0x0002389c) main_mup2_pane_t3_ParamLimits

0x5870,	// (0x0002389c) main_mup2_pane_t3

0x5887,	// (0x000238b3) main_mup2_pane_t4_ParamLimits

0x5887,	// (0x000238b3) main_mup2_pane_t4

0x58a1,	// (0x000238cd) main_mup2_pane_t5_ParamLimits

0x58a1,	// (0x000238cd) main_mup2_pane_t5

0x58bb,	// (0x000238e7) main_mup2_pane_t6_ParamLimits

0x58bb,	// (0x000238e7) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0002d693) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0002d693) main_mup2_pane_t

0x58f3,	// (0x0002391f) mup2_visualizer_pane_ParamLimits

0x58f3,	// (0x0002391f) mup2_visualizer_pane

0x5929,	// (0x00023955) mup_progress_pane_cp_ParamLimits

0x5929,	// (0x00023955) mup_progress_pane_cp

0x191f,	// (0x0001f94b) mup_volume_pane_cp_ParamLimits

0x191f,	// (0x0001f94b) mup_volume_pane_cp

0x5940,	// (0x0002396c) mup2_visualizer_pane_g1_ParamLimits

0x5940,	// (0x0002396c) mup2_visualizer_pane_g1

0xc4b2,	// (0x0002a4de) mup2_visualizer_pane_g2_ParamLimits

0xc4b2,	// (0x0002a4de) mup2_visualizer_pane_g2

0x5955,	// (0x00023981) mup2_visualizer_pane_g3_ParamLimits

0x5955,	// (0x00023981) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0002d6a0) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0002d6a0) mup2_visualizer_pane_g

0xb2e6,	// (0x00029312) aid_size_cell_fmradio

0x14f7,	// (0x0001f523) aid_height_parent_landcape

0xa6a3,	// (0x000286cf) wml_content_pane_cp

0xa6ab,	// (0x000286d7) wml_tabs_pane

0xa6b4,	// (0x000286e0) popup_wml_miniature_window

0xa6bc,	// (0x000286e8) scroll_pane_cp021

0xa6d0,	// (0x000286fc) wml_content_pane_comp8

0xa020,	// (0x0002804c) bg_popup_sub_pane_cp05

0xc4d0,	// (0x0002a4fc) popup_wml_miniature_window_g1

0xc4d8,	// (0x0002a504) wml_miniature_view_pane

0x5963,	// (0x0002398f) aid_size_wml_view

0x596b,	// (0x00023997) wml_miniature_view_pane_g1

0x5974,	// (0x000239a0) wml_miniature_view_pane_g2

0x597d,	// (0x000239a9) wml_miniature_view_pane_g3

0x5985,	// (0x000239b1) wml_miniature_view_pane_g4

0x598d,	// (0x000239b9) wml_miniature_view_pane_g5

0x5995,	// (0x000239c1) wml_miniature_view_pane_g6

0x599d,	// (0x000239c9) wml_miniature_view_pane_g7

0x59a5,	// (0x000239d1) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0002d6a7) wml_miniature_view_pane_g

0xc4a6,	// (0x0002a4d2) background_graphic_ParamLimits

0xc4a6,	// (0x0002a4d2) background_graphic

0xc4e0,	// (0x0002a50c) wml_tabs_2_pane

0xc4e9,	// (0x0002a515) wml_tabs_3_pane_ParamLimits

0xc4e9,	// (0x0002a515) wml_tabs_3_pane

0xc4fb,	// (0x0002a527) wml_tabs_4_pane_ParamLimits

0xc4fb,	// (0x0002a527) wml_tabs_4_pane

0xc511,	// (0x0002a53d) wml_tabs_5_pane_ParamLimits

0xc511,	// (0x0002a53d) wml_tabs_5_pane

0xc52b,	// (0x0002a557) wml_tabs_pane_g2_ParamLimits

0xc52b,	// (0x0002a557) wml_tabs_pane_g2

0xc53f,	// (0x0002a56b) wml_tabs_pane_g3_ParamLimits

0xc53f,	// (0x0002a56b) wml_tabs_pane_g3

0x59ad,	// (0x000239d9) wml_tabs_2_active_pane_ParamLimits

0x59ad,	// (0x000239d9) wml_tabs_2_active_pane

0x59bd,	// (0x000239e9) wml_tabs_2_passive_pane_ParamLimits

0x59bd,	// (0x000239e9) wml_tabs_2_passive_pane

0x59cd,	// (0x000239f9) wml_tabs_3_active_pane_cp_ParamLimits

0x59cd,	// (0x000239f9) wml_tabs_3_active_pane_cp

0x59de,	// (0x00023a0a) wml_tabs_3_passive_pane_ParamLimits

0x59de,	// (0x00023a0a) wml_tabs_3_passive_pane

0x59ef,	// (0x00023a1b) wml_tabs_3_passive_pane_cp_ParamLimits

0x59ef,	// (0x00023a1b) wml_tabs_3_passive_pane_cp

0x5a00,	// (0x00023a2c) tabs_4_active_pane

0x5a08,	// (0x00023a34) tabs_4_passive_pane

0x5a10,	// (0x00023a3c) tabs_4_passive_pane_cp

0x5a18,	// (0x00023a44) tabs_4_passive_pane_cp2

0x534b,	// (0x00023377) aid_height_text

0x4b6f,	// (0x00022b9b) mup_volume_cont_pane_ParamLimits

0x4b6f,	// (0x00022b9b) mup_volume_cont_pane

0x27d5,	// (0x00020801) aid_size_cell_pinb

0x27df,	// (0x0002080b) aid_size_list_pinb

0x5912,	// (0x0002393e) mup2_volume_cont_pane_ParamLimits

0x5912,	// (0x0002393e) mup2_volume_cont_pane

0x190b,	// (0x0001f937) mup2_volume_cont_pane_g1_ParamLimits

0x190b,	// (0x0001f937) mup2_volume_cont_pane_g1

0x0e42,	// (0x0001ee6e) aid_size_cell_touch_ParamLimits

0x0e42,	// (0x0001ee6e) aid_size_cell_touch

0x10ca,	// (0x0001f0f6) touch_pane_ParamLimits

0x10ca,	// (0x0001f0f6) touch_pane

0x10c0,	// (0x0001f0ec) main_rss2_pane

0xc55c,	// (0x0002a588) listscroll_rss2_pane

0xc565,	// (0x0002a591) rss2_navigation_pane

0xc56d,	// (0x0002a599) list_rss2_pane

0xad2c,	// (0x00028d58) scroll_pane_cp22

0xc575,	// (0x0002a5a1) rss2_navigation_pane_g1

0xc57e,	// (0x0002a5aa) rss2_navigation_pane_g2

0xc586,	// (0x0002a5b2) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0002d6b8) rss2_navigation_pane_g

0xc58e,	// (0x0002a5ba) rss2_navigation_pane_t1

0x5a20,	// (0x00023a4c) rss2_list_single_pane_ParamLimits

0x5a20,	// (0x00023a4c) rss2_list_single_pane

0xc59c,	// (0x0002a5c8) rss2_list_single_pane_t2

0xc5aa,	// (0x0002a5d6) rss2_list_single_pane_t3_ParamLimits

0xc5aa,	// (0x0002a5d6) rss2_list_single_pane_t3

0xc5c7,	// (0x0002a5f3) rss2_list_single_pane_t4

0x448c,	// (0x000224b8) smil_status_pane_g1

0x150e,	// (0x0001f53a) main_image2_pane_ParamLimits

0x150e,	// (0x0001f53a) main_image2_pane

0x1769,	// (0x0001f795) main_camera2_pane_g9_ParamLimits

0x1769,	// (0x0001f795) main_camera2_pane_g9

0x17bd,	// (0x0001f7e9) main_camera2_pane_t5_ParamLimits

0x17bd,	// (0x0001f7e9) main_camera2_pane_t5

0x17cf,	// (0x0001f7fb) main_camera2_pane_t6_ParamLimits

0x17cf,	// (0x0001f7fb) main_camera2_pane_t6

0x5a51,	// (0x00023a7d) main_image2_pane_g1_ParamLimits

0x5a51,	// (0x00023a7d) main_image2_pane_g1

0x50eb,	// (0x00023117) smil2_video_pane_ParamLimits

0x50eb,	// (0x00023117) smil2_video_pane

0x0e76,	// (0x0001eea2) aid_zoom_text_primary_cp

0x1067,	// (0x0001f093) popup_preview_fixed_window

0xa60c,	// (0x00028638) im_reading_pane_g1

0x16b3,	// (0x0001f6df) cams2_bc_adjust_pane_cp_ParamLimits

0x16b3,	// (0x0001f6df) cams2_bc_adjust_pane_cp

0x17ff,	// (0x0001f82b) cams2_bc_adjust_pane_ParamLimits

0x17ff,	// (0x0001f82b) cams2_bc_adjust_pane

0xd8f1,	// (0x0002b91d) cams2_bc_adjust_pane_g1

0x1944,	// (0x0001f970) cams2_slider_pane

0x194d,	// (0x0001f979) cams2_slider_pane_g1

0x1956,	// (0x0001f982) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0002d6bf) cams2_slider_pane_g

0x113b,	// (0x0001f167) calc_display_pane_ParamLimits

0x1159,	// (0x0001f185) calc_paper_pane_ParamLimits

0x1175,	// (0x0001f1a1) grid_calc_pane_ParamLimits

0x1462,	// (0x0001f48e) popup_clock_digital_window_t1_ParamLimits

0xb283,	// (0x000292af) main_image_pane_t1

0x1121,	// (0x0001f14d) aid_size_cell_calc_ParamLimits

0x1121,	// (0x0001f14d) aid_size_cell_calc

0x153f,	// (0x0001f56b) popup_blid_sat_info2_window_ParamLimits

0x153f,	// (0x0001f56b) popup_blid_sat_info2_window

0xc5dd,	// (0x0002a609) aid_size_cell_blid

0xc5e5,	// (0x0002a611) bg_popup_window_pane_cp07

0xc608,	// (0x0002a634) grid_popup_blid_pane

0xc612,	// (0x0002a63e) heading_pane_cp05_ParamLimits

0xc612,	// (0x0002a63e) heading_pane_cp05

0xc6dc,	// (0x0002a708) cell_popup_blid_pane_ParamLimits

0xc6dc,	// (0x0002a708) cell_popup_blid_pane

0xc700,	// (0x0002a72c) cell_popup_blid_pane_g1

0xc708,	// (0x0002a734) cell_popup_blid_pane_t1

0x58d8,	// (0x00023904) mup2_indicator_pane_ParamLimits

0x58d8,	// (0x00023904) mup2_indicator_pane

0xa513,	// (0x0002853f) mup2_visualizer_osc_pane

0xc4be,	// (0x0002a4ea) mup2_visualizer_spec_pane_ParamLimits

0xc4be,	// (0x0002a4ea) mup2_visualizer_spec_pane

0x5a5d,	// (0x00023a89) mup2_spec_half_pane

0x5a66,	// (0x00023a92) mup2_spec_half_pane_cp

0x5a70,	// (0x00023a9c) mup2_spec_bar_pane_ParamLimits

0x5a70,	// (0x00023a9c) mup2_spec_bar_pane

0xc453,	// (0x0002a47f) mup2_spec_bar_pane_g1

0xc45d,	// (0x0002a489) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002d632) mup2_spec_bar_pane_g

0x5a8f,	// (0x00023abb) mup2_osc_middle_pane

0xc46f,	// (0x0002a49b) mup2_visualizer_osc_pane_g1

0x9c2d,	// (0x00027c59) popup_number_entry_window_t1_ParamLimits

0x9c40,	// (0x00027c6c) popup_number_entry_window_t2_ParamLimits

0x9c52,	// (0x00027c7e) popup_number_entry_window_t3_ParamLimits

0x2712,	// (0x0002073e) popup_number_entry_window_t5_ParamLimits

0x2712,	// (0x0002073e) popup_number_entry_window_t5

0xf0ca,	// (0x0002d0f6) popup_number_entry_window_t_ParamLimits

0x9c64,	// (0x00027c90) text_title_cp2_ParamLimits

0x14a1,	// (0x0001f4cd) aid_hotspot_pointer_text2_pane

0x14eb,	// (0x0001f517) main_viewer_pane_g9_ParamLimits

0x14eb,	// (0x0001f517) main_viewer_pane_g9

0xa845,	// (0x00028871) cale_month_pane_t1_ParamLimits

0xa882,	// (0x000288ae) bg_cale_pane_ParamLimits

0xa89a,	// (0x000288c6) list_cale_pane_ParamLimits

0xa8ab,	// (0x000288d7) listscroll_cale_day_pane_t1

0xa8bd,	// (0x000288e9) scroll_pane_cp09_ParamLimits

0x4baa,	// (0x00022bd6) main_mup_eq_pane_t1_ParamLimits

0x4baa,	// (0x00022bd6) main_mup_eq_pane_t1

0x4bc4,	// (0x00022bf0) main_mup_eq_pane_t2_ParamLimits

0x4bc4,	// (0x00022bf0) main_mup_eq_pane_t2

0x4bde,	// (0x00022c0a) main_mup_eq_pane_t3_ParamLimits

0x4bde,	// (0x00022c0a) main_mup_eq_pane_t3

0x4bf6,	// (0x00022c22) main_mup_eq_pane_t4_ParamLimits

0x4bf6,	// (0x00022c22) main_mup_eq_pane_t4

0x4c0e,	// (0x00022c3a) main_mup_eq_pane_t5_ParamLimits

0x4c0e,	// (0x00022c3a) main_mup_eq_pane_t5

0x4c26,	// (0x00022c52) main_mup_eq_pane_t6_ParamLimits

0x4c26,	// (0x00022c52) main_mup_eq_pane_t6

0x4c3a,	// (0x00022c66) main_mup_eq_pane_t7_ParamLimits

0x4c3a,	// (0x00022c66) main_mup_eq_pane_t7

0x4c4e,	// (0x00022c7a) main_mup_eq_pane_t8_ParamLimits

0x4c4e,	// (0x00022c7a) main_mup_eq_pane_t8

0x4c64,	// (0x00022c90) main_mup_eq_pane_t9_ParamLimits

0x4c64,	// (0x00022c90) main_mup_eq_pane_t9

0x4c7c,	// (0x00022ca8) main_mup_eq_pane_t10_ParamLimits

0x4c7c,	// (0x00022ca8) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0002d481) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0002d481) main_mup_eq_pane_t

0x4d39,	// (0x00022d65) mup_equalizer_pane_cp5_ParamLimits

0x4d4f,	// (0x00022d7b) mup_equalizer_pane_cp6_ParamLimits

0x4d67,	// (0x00022d93) mup_equalizer_pane_cp7_ParamLimits

0x10c0,	// (0x0001f0ec) main_gallery_pane

0xc478,	// (0x0002a4a4) smil2_volume_pane

0xc480,	// (0x0002a4ac) smil_status_volume_pane_g1_ParamLimits

0xc493,	// (0x0002a4bf) smil_status_volume_pane_g2_ParamLimits

0x1683,	// (0x0001f6af) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0002d637) smil_status_volume_pane_g_ParamLimits

0xc5e5,	// (0x0002a611) bg_popup_window_pane_cp07_ParamLimits

0xc5f3,	// (0x0002a61f) blid_firmament_pane

0x5a98,	// (0x00023ac4) aid_size_cell_gallery_ParamLimits

0x5a98,	// (0x00023ac4) aid_size_cell_gallery

0x5aa6,	// (0x00023ad2) grid_gallery_pane_ParamLimits

0x5aa6,	// (0x00023ad2) grid_gallery_pane

0x5ab6,	// (0x00023ae2) cell_gallery_pane_ParamLimits

0x5ab6,	// (0x00023ae2) cell_gallery_pane

0xc716,	// (0x0002a742) bg_cell_gallery_focus_pane_ParamLimits

0xc716,	// (0x0002a742) bg_cell_gallery_focus_pane

0xc731,	// (0x0002a75d) cell_gallery_pane_g1_ParamLimits

0xc731,	// (0x0002a75d) cell_gallery_pane_g1

0x5b04,	// (0x00023b30) cell_gallery_pane_g2_ParamLimits

0x5b04,	// (0x00023b30) cell_gallery_pane_g2

0x5b11,	// (0x00023b3d) cell_gallery_pane_g3_ParamLimits

0x5b11,	// (0x00023b3d) cell_gallery_pane_g3

0xc73d,	// (0x0002a769) cell_gallery_pane_g4_ParamLimits

0xc73d,	// (0x0002a769) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0002d6e5) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0002d6e5) cell_gallery_pane_g

0xc749,	// (0x0002a775) bg_cell_gallery_focus_pane_g1

0xc751,	// (0x0002a77d) bg_cell_gallery_focus_pane_g2

0xc759,	// (0x0002a785) bg_cell_gallery_focus_pane_g3

0xc761,	// (0x0002a78d) bg_cell_gallery_focus_pane_g4

0xc769,	// (0x0002a795) bg_cell_gallery_focus_pane_g5

0xc771,	// (0x0002a79d) bg_cell_gallery_focus_pane_g6

0xc779,	// (0x0002a7a5) bg_cell_gallery_focus_pane_g7

0xc781,	// (0x0002a7ad) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0002d6ee) bg_cell_gallery_focus_pane_g

0xc789,	// (0x0002a7b5) aid_firma_cardinal

0xc79d,	// (0x0002a7c9) blid_firmament_pane_t1

0xc7b4,	// (0x0002a7e0) blid_firmament_pane_t2

0xc7cb,	// (0x0002a7f7) blid_firmament_pane_t3

0xc7e2,	// (0x0002a80e) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0002d6ff) blid_firmament_pane_t

0xc7f9,	// (0x0002a825) blid_sat_info_pane

0xc809,	// (0x0002a835) blid_sat_info_pane_g1

0xc809,	// (0x0002a835) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0002d708) blid_sat_info_pane_g

0xc813,	// (0x0002a83f) blid_sat_info_pane_t1

0xc821,	// (0x0002a84d) smil2_volume_content_pane

0xc82a,	// (0x0002a856) smil2_volume_pane_g1

0xc728,	// (0x0002a754) smil2_volume_content_pane_g1

0xc832,	// (0x0002a85e) smil2_volume_content_pane_g2

0xc83b,	// (0x0002a867) smil2_volume_content_pane_g3

0xc844,	// (0x0002a870) smil2_volume_content_pane_g4

0xc84d,	// (0x0002a879) smil2_volume_content_pane_g5

0xc856,	// (0x0002a882) smil2_volume_content_pane_g6

0xc85f,	// (0x0002a88b) smil2_volume_content_pane_g7

0xc868,	// (0x0002a894) smil2_volume_content_pane_g8

0xc871,	// (0x0002a89d) smil2_volume_content_pane_g9

0xc87a,	// (0x0002a8a6) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0002d70d) smil2_volume_content_pane_g

0x2d5d,	// (0x00020d89) cale_week_day_heading_pane_t1_ParamLimits

0x2d98,	// (0x00020dc4) cale_week_day_heading_pane_t2_ParamLimits

0x2dd3,	// (0x00020dff) cale_week_day_heading_pane_t3_ParamLimits

0x2e0e,	// (0x00020e3a) cale_week_day_heading_pane_t4_ParamLimits

0x2e49,	// (0x00020e75) cale_week_day_heading_pane_t5_ParamLimits

0x2e84,	// (0x00020eb0) cale_week_day_heading_pane_t6_ParamLimits

0x2ebf,	// (0x00020eeb) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0002d1fd) cale_week_day_heading_pane_t_ParamLimits

0xa4b8,	// (0x000284e4) bg_cale_side_pane_ParamLimits

0x12cc,	// (0x0001f2f8) cale_week_time_pane_t1_ParamLimits

0x12e6,	// (0x0001f312) cale_week_time_pane_t2_ParamLimits

0x1300,	// (0x0001f32c) cale_week_time_pane_t3_ParamLimits

0x131a,	// (0x0001f346) cale_week_time_pane_t4_ParamLimits

0x1334,	// (0x0001f360) cale_week_time_pane_t5_ParamLimits

0x134e,	// (0x0001f37a) cale_week_time_pane_t6_ParamLimits

0x136e,	// (0x0001f39a) cale_week_time_pane_t7_ParamLimits

0x1390,	// (0x0001f3bc) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0002d20c) cale_week_time_pane_t_ParamLimits

0x2efa,	// (0x00020f26) cell_cale_week_pane_g2_ParamLimits

0xa4b8,	// (0x000284e4) bg_cale_side_pane_cp01_ParamLimits

0x428f,	// (0x000222bb) cale_month_week_pane_t1_ParamLimits

0x42a8,	// (0x000222d4) cale_month_week_pane_t2_ParamLimits

0x42c1,	// (0x000222ed) cale_month_week_pane_t3_ParamLimits

0x42da,	// (0x00022306) cale_month_week_pane_t4_ParamLimits

0x42f3,	// (0x0002231f) cale_month_week_pane_t5_ParamLimits

0x4314,	// (0x00022340) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0002d2e1) cale_month_week_pane_t_ParamLimits

0x13be,	// (0x0001f3ea) cell_cale_month_pane_g1_ParamLimits

0x10c0,	// (0x0001f0ec) main_cale_event_viewer_pane

0x9c03,	// (0x00027c2f) listscroll_cale_event_viewer_pane

0xc883,	// (0x0002a8af) list_cale_ev_pane

0xc88b,	// (0x0002a8b7) scroll_pane_cp023

0xc897,	// (0x0002a8c3) field_cale_ev_pane_ParamLimits

0xc897,	// (0x0002a8c3) field_cale_ev_pane

0xc8b5,	// (0x0002a8e1) field_cale_ev_content_pane_ParamLimits

0xc8b5,	// (0x0002a8e1) field_cale_ev_content_pane

0xc8c1,	// (0x0002a8ed) field_cale_ev_pane_g1_ParamLimits

0xc8c1,	// (0x0002a8ed) field_cale_ev_pane_g1

0xc8cd,	// (0x0002a8f9) field_cale_ev_pane_g2_ParamLimits

0xc8cd,	// (0x0002a8f9) field_cale_ev_pane_g2

0xc8e5,	// (0x0002a911) field_cale_ev_pane_g3_ParamLimits

0xc8e5,	// (0x0002a911) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0002d722) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0002d722) field_cale_ev_pane_g

0xc8fd,	// (0x0002a929) field_cale_ev_pane_t1_ParamLimits

0xc8fd,	// (0x0002a929) field_cale_ev_pane_t1

0xc914,	// (0x0002a940) field_cale_ev_content_pane_t1_ParamLimits

0xc914,	// (0x0002a940) field_cale_ev_content_pane_t1

0xb0f0,	// (0x0002911c) bg_button_pane_cp01

0x2aea,	// (0x00020b16) listscroll_cale_week_pane_ParamLimits

0xa463,	// (0x0002848f) popup_toolbar_window_cp01

0xa489,	// (0x000284b5) listscroll_cale_week_pane_t1_ParamLimits

0x2aea,	// (0x00020b16) listscroll_cale_day_pane_ParamLimits

0xa463,	// (0x0002848f) popup_toolbar_window_cp02

0xa8ab,	// (0x000288d7) listscroll_cale_day_pane_t1_ParamLimits

0x2aea,	// (0x00020b16) main_cale_month_pane_ParamLimits

0x1646,	// (0x0001f672) popup_toolbar_window_cp03_ParamLimits

0x1646,	// (0x0001f672) popup_toolbar_window_cp03

0x5001,	// (0x0002302d) main_image_pane_g2_ParamLimits

0x5001,	// (0x0002302d) main_image_pane_g2

0x500d,	// (0x00023039) main_image_pane_g3_ParamLimits

0x500d,	// (0x00023039) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0002d513) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0002d513) main_image_pane_g

0xb283,	// (0x000292af) main_image_pane_t1_ParamLimits

0x5019,	// (0x00023045) main_image_pane_t2_ParamLimits

0x5019,	// (0x00023045) main_image_pane_t2

0x502b,	// (0x00023057) main_image_pane_t3_ParamLimits

0x502b,	// (0x00023057) main_image_pane_t3

0x503d,	// (0x00023069) main_image_pane_t4_ParamLimits

0x503d,	// (0x00023069) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0002d51a) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0002d51a) main_image_pane_t

0x504f,	// (0x0002307b) popup_image_details_window_cp01

0x5059,	// (0x00023085) popup_toobar_trans_pane_cp01_ParamLimits

0x5059,	// (0x00023085) popup_toobar_trans_pane_cp01

0x1596,	// (0x0001f5c2) popup_image_details_window_ParamLimits

0x1596,	// (0x0001f5c2) popup_image_details_window

0x15a4,	// (0x0001f5d0) popup_image_focus_window

0x16a5,	// (0x0001f6d1) camera2_autofocus_pane_ParamLimits

0x16a5,	// (0x0001f6d1) camera2_autofocus_pane

0x9c03,	// (0x00027c2f) bg_popup_sub_pane_cp06

0xc932,	// (0x0002a95e) popup_image_focus_window_g1

0xc93a,	// (0x0002a966) popup_image_focus_window_g2

0xc942,	// (0x0002a96e) popup_image_focus_window_g3

0xc94a,	// (0x0002a976) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0002d729) popup_image_focus_window_g

0xc952,	// (0x0002a97e) popup_image_focus_window_t1

0xc960,	// (0x0002a98c) popup_image_focus_window_t2

0xc970,	// (0x0002a99c) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0002d732) popup_image_focus_window_t

0xc97e,	// (0x0002a9aa) camera2_autofocus_pane_g1

0xa34c,	// (0x00028378) bg_tb_trans_pane_cp01

0xc98c,	// (0x0002a9b8) popup_image_details_window_g1

0xc99f,	// (0x0002a9cb) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0002d744) popup_image_details_window_g

0xc9c8,	// (0x0002a9f4) popup_image_details_window_t1

0xc9da,	// (0x0002aa06) popup_image_details_window_t2

0xc9f3,	// (0x0002aa1f) popup_image_details_window_t3

0xca07,	// (0x0002aa33) popup_image_details_window_t4

0xca22,	// (0x0002aa4e) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0002d74b) popup_image_details_window_t

0xa32c,	// (0x00028358) bg_calc_paper_pane_ParamLimits

0x10c0,	// (0x0001f0ec) grid_highlight_pane_cp013

0x11a1,	// (0x0001f1cd) list_calc_pane_ParamLimits

0x11b3,	// (0x0001f1df) scroll_pane_cp024

0xa340,	// (0x0002836c) bg_calc_display_pane_ParamLimits

0x11bb,	// (0x0001f1e7) calc_display_pane_t1_ParamLimits

0x11d0,	// (0x0001f1fc) calc_display_pane_t2_ParamLimits

0x11e5,	// (0x0001f211) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0002d17d) calc_display_pane_t_ParamLimits

0x124e,	// (0x0001f27a) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0002d19a) cell_calc_pane_g

0x1257,	// (0x0001f283) cell_calc_pane_t1

0xa3ad,	// (0x000283d9) grid_highlight_pane_cp02_ParamLimits

0xa3c3,	// (0x000283ef) toolbar_button_pane_cp01_ParamLimits

0xa3c3,	// (0x000283ef) toolbar_button_pane_cp01

0xb2c8,	// (0x000292f4) temp_image_control_pane_ParamLimits

0xb2c8,	// (0x000292f4) temp_image_control_pane

0x150e,	// (0x0001f53a) main_mp3_pane

0xca3c,	// (0x0002aa68) temp_image_control_pane_g1_ParamLimits

0xca3c,	// (0x0002aa68) temp_image_control_pane_g1

0xca4a,	// (0x0002aa76) temp_image_control_pane_g2_ParamLimits

0xca4a,	// (0x0002aa76) temp_image_control_pane_g2

0xca5c,	// (0x0002aa88) temp_image_control_pane_g3_ParamLimits

0xca5c,	// (0x0002aa88) temp_image_control_pane_g3

0x5b4e,	// (0x00023b7a) temp_image_control_pane_g4_ParamLimits

0x5b4e,	// (0x00023b7a) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0002d756) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0002d756) temp_image_control_pane_g

0xca3c,	// (0x0002aa68) main_mp3_pane_g1

0x5b5f,	// (0x00023b8b) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0002d75f) main_mp3_pane_g

0xca9f,	// (0x0002aacb) main_mp3_pane_t1

0xa51b,	// (0x00028547) main_camera_pane_g8_ParamLimits

0xa51b,	// (0x00028547) main_camera_pane_g8

0x317d,	// (0x000211a9) main_video_pane_g7_ParamLimits

0x317d,	// (0x000211a9) main_video_pane_g7

0x17ed,	// (0x0001f819) main_camera2_pane_t7_ParamLimits

0x17ed,	// (0x0001f819) main_camera2_pane_t7

0xa663,	// (0x0002868f) scroll_pane_cp025_ParamLimits

0xa663,	// (0x0002868f) scroll_pane_cp025

0xa677,	// (0x000286a3) scroll_pane_cp026_ParamLimits

0xa677,	// (0x000286a3) scroll_pane_cp026

0xa686,	// (0x000286b2) wml_content_pane_ParamLimits

0x10c0,	// (0x0001f0ec) main_touch_calib_pane

0x5c03,	// (0x00023c2f) main_touch_calib_pane_g1

0x5c0f,	// (0x00023c3b) main_touch_calib_pane_g2

0x5c1b,	// (0x00023c47) main_touch_calib_pane_g3

0x5c27,	// (0x00023c53) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0002d77d) main_touch_calib_pane_g

0x5c33,	// (0x00023c5f) main_touch_calib_pane_t1

0x5c4c,	// (0x00023c78) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0002d786) main_touch_calib_pane_t

0xae08,	// (0x00028e34) mup_progress_pane_cp02

0xae3d,	// (0x00028e69) navi_pane_g1

0xaef8,	// (0x00028f24) navi_pane_mp_t3

0x150e,	// (0x0001f53a) main_mp3_pane_ParamLimits

0x5586,	// (0x000235b2) navi_pane_ParamLimits

0xca3c,	// (0x0002aa68) main_mp3_pane_g1_ParamLimits

0x5b5f,	// (0x00023b8b) main_mp3_pane_g2_ParamLimits

0x5b6b,	// (0x00023b97) main_mp3_pane_g3_ParamLimits

0x5b6b,	// (0x00023b97) main_mp3_pane_g3

0x5b77,	// (0x00023ba3) main_mp3_pane_g4_ParamLimits

0x5b77,	// (0x00023ba3) main_mp3_pane_g4

0xca6c,	// (0x0002aa98) main_mp3_pane_g5_ParamLimits

0xca6c,	// (0x0002aa98) main_mp3_pane_g5

0xca7a,	// (0x0002aaa6) main_mp3_pane_g6_ParamLimits

0xca7a,	// (0x0002aaa6) main_mp3_pane_g6

0xca87,	// (0x0002aab3) main_mp3_pane_g7_ParamLimits

0xca87,	// (0x0002aab3) main_mp3_pane_g7

0xca93,	// (0x0002aabf) main_mp3_pane_g8_ParamLimits

0xca93,	// (0x0002aabf) main_mp3_pane_g8

0xf733,	// (0x0002d75f) main_mp3_pane_g_ParamLimits

0x5b83,	// (0x00023baf) main_mp3_pane_t2

0x5b93,	// (0x00023bbf) main_mp3_pane_t3

0xcaad,	// (0x0002aad9) main_mp3_pane_t4

0xcabb,	// (0x0002aae7) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0002d770) main_mp3_pane_t

0xcac9,	// (0x0002aaf5) mup_progress_pane_cp01

0x0e76,	// (0x0001eea2) aid_zoom_text_secondary2

0xc883,	// (0x0002a8af) list_cale_ev2_pane

0xc88b,	// (0x0002a8b7) scroll_pane_cp023_ParamLimits

0x5ca7,	// (0x00023cd3) field_cale_ev2_pane_ParamLimits

0x5ca7,	// (0x00023cd3) field_cale_ev2_pane

0x5cd0,	// (0x00023cfc) field_cale_ev2_pane_g1_ParamLimits

0x5cd0,	// (0x00023cfc) field_cale_ev2_pane_g1

0x5cdc,	// (0x00023d08) field_cale_ev2_pane_g2_ParamLimits

0x5cdc,	// (0x00023d08) field_cale_ev2_pane_g2

0x5cf4,	// (0x00023d20) field_cale_ev2_pane_g3_ParamLimits

0x5cf4,	// (0x00023d20) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0002d791) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0002d791) field_cale_ev2_pane_g

0x5d0c,	// (0x00023d38) field_cale_ev2_pane_t1_ParamLimits

0x5d0c,	// (0x00023d38) field_cale_ev2_pane_t1

0x5d23,	// (0x00023d4f) field_cale_ev2_pane_t2_ParamLimits

0x5d23,	// (0x00023d4f) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0002d79a) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0002d79a) field_cale_ev2_pane_t

0x4ee1,	// (0x00022f0d) main_postcard_pane_g5_ParamLimits

0x4ee1,	// (0x00022f0d) main_postcard_pane_g5

0x4eef,	// (0x00022f1b) main_postcard_pane_g6_ParamLimits

0x4eef,	// (0x00022f1b) main_postcard_pane_g6

0x2fc7,	// (0x00020ff3) camera2_autofocus_pane_cp_ParamLimits

0x2fc7,	// (0x00020ff3) camera2_autofocus_pane_cp

0x150e,	// (0x0001f53a) main_mup3_pane

0x5d38,	// (0x00023d64) main_mup3_pane_g1_ParamLimits

0x5d38,	// (0x00023d64) main_mup3_pane_g1

0x5d59,	// (0x00023d85) main_mup3_pane_g2_ParamLimits

0x5d59,	// (0x00023d85) main_mup3_pane_g2

0x5dd1,	// (0x00023dfd) main_mup3_pane_g3_ParamLimits

0x5dd1,	// (0x00023dfd) main_mup3_pane_g3

0x5e14,	// (0x00023e40) main_mup3_pane_g4_ParamLimits

0x5e14,	// (0x00023e40) main_mup3_pane_g4

0x5e57,	// (0x00023e83) main_mup3_pane_g5_ParamLimits

0x5e57,	// (0x00023e83) main_mup3_pane_g5

0x5e9a,	// (0x00023ec6) main_mup3_pane_g6_ParamLimits

0x5e9a,	// (0x00023ec6) main_mup3_pane_g6

0xcafd,	// (0x0002ab29) main_mup3_pane_g7_ParamLimits

0xcafd,	// (0x0002ab29) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0002d7aa) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0002d7aa) main_mup3_pane_g

0x5f10,	// (0x00023f3c) main_mup3_pane_t1_ParamLimits

0x5f10,	// (0x00023f3c) main_mup3_pane_t1

0x5f7f,	// (0x00023fab) main_mup3_pane_t2_ParamLimits

0x5f7f,	// (0x00023fab) main_mup3_pane_t2

0x6048,	// (0x00024074) main_mup3_pane_t4_ParamLimits

0x6048,	// (0x00024074) main_mup3_pane_t4

0x6096,	// (0x000240c2) main_mup3_pane_t5_ParamLimits

0x6096,	// (0x000240c2) main_mup3_pane_t5

0x6146,	// (0x00024172) main_mup3_pane_t6_ParamLimits

0x6146,	// (0x00024172) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0002d7bb) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0002d7bb) main_mup3_pane_t

0x61f2,	// (0x0002421e) mup3_progress_pane_ParamLimits

0x61f2,	// (0x0002421e) mup3_progress_pane

0x6270,	// (0x0002429c) popup_mup3_control_window_ParamLimits

0x6270,	// (0x0002429c) popup_mup3_control_window

0xcb0b,	// (0x0002ab37) popup_mup3_text_window

0x6289,	// (0x000242b5) mup3_progress_pane_t1

0x62a8,	// (0x000242d4) mup3_progress_pane_t2

0xcb13,	// (0x0002ab3f) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0002d7c8) mup3_progress_pane_t

0xcb30,	// (0x0002ab5c) mup_progress_pane_cp03

0x9c03,	// (0x00027c2f) bg_tb_trans_pane_cp04

0x62c7,	// (0x000242f3) mup3_volume_pane

0x62cf,	// (0x000242fb) popup_mup3_control_window_g1

0x62d8,	// (0x00024304) mup3_volume_pane_g1

0x62e1,	// (0x0002430d) mup3_volume_pane_g2

0x62ea,	// (0x00024316) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0002d7cf) mup3_volume_pane_g

0x9c03,	// (0x00027c2f) bg_tb_trans_pane_cp03

0xcb40,	// (0x0002ab6c) popup_mup3_text_window_g1

0xcb48,	// (0x0002ab74) popup_mup3_text_window_t1

0xa396,	// (0x000283c2) list_calc_item_pane_g1_ParamLimits

0xc553,	// (0x0002a57f) mup_volume_pane_cp_g1

0x5c65,	// (0x00023c91) main_touch_calib_pane_t3

0x5c7b,	// (0x00023ca7) main_touch_calib_pane_t4

0x5c91,	// (0x00023cbd) main_touch_calib_pane_t5

0x0e2e,	// (0x0001ee5a) aid_cell_size_toolbar2

0x0e36,	// (0x0001ee62) aid_popup3_width_pane

0x0e76,	// (0x0001eea2) aid_zoom_text_msg_primary

0x2fa6,	// (0x00020fd2) vorec_t7

0xa35a,	// (0x00028386) bg_calc_paper_pane_g1_ParamLimits

0xa366,	// (0x00028392) bg_calc_paper_pane_g2_ParamLimits

0xa372,	// (0x0002839e) bg_calc_paper_pane_g3_ParamLimits

0xa37e,	// (0x000283aa) bg_calc_paper_pane_g4_ParamLimits

0xa38a,	// (0x000283b6) bg_calc_paper_pane_g5_ParamLimits

0x299c,	// (0x000209c8) bg_calc_paper_pane_g6_ParamLimits

0x29ad,	// (0x000209d9) bg_calc_paper_pane_g7_ParamLimits

0x29be,	// (0x000209ea) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0002d184) bg_calc_paper_pane_g_ParamLimits

0x29cf,	// (0x000209fb) calc_bg_paper_pane_g9_ParamLimits

0x30ae,	// (0x000210da) image_qvga_pane_ParamLimits

0x30ae,	// (0x000210da) image_qvga_pane

0xa27b,	// (0x000282a7) bg_popup_sub_pane_cp04_ParamLimits

0xb1ff,	// (0x0002922b) popup_mup_playback_window_g1_ParamLimits

0xb20b,	// (0x00029237) popup_mup_playback_window_t1_ParamLimits

0xb220,	// (0x0002924c) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0002d50e) popup_mup_playback_window_t_ParamLimits

0x57d8,	// (0x00023804) main_mup2_pane_g3_ParamLimits

0x57d8,	// (0x00023804) main_mup2_pane_g3

0x347b,	// (0x000214a7) popup_toolbar_window_cp04

0xb602,	// (0x0002962e) popup_call2_audio_second_window_g3_ParamLimits

0xb602,	// (0x0002962e) popup_call2_audio_second_window_g3

0xba0c,	// (0x00029a38) popup_call2_audio_first_window_g4_ParamLimits

0xba0c,	// (0x00029a38) popup_call2_audio_first_window_g4

0xc08b,	// (0x0002a0b7) popup_call2_audio_in_window_g4_ParamLimits

0xc08b,	// (0x0002a0b7) popup_call2_audio_in_window_g4

0x4ff4,	// (0x00023020) aid_area_sk_bg_cut_ParamLimits

0x4ff4,	// (0x00023020) aid_area_sk_bg_cut

0xb235,	// (0x00029261) aid_area_sk_bg_cut_2_ParamLimits

0xb235,	// (0x00029261) aid_area_sk_bg_cut_2

0x5af4,	// (0x00023b20) aid_placing_details_win

0x5afc,	// (0x00023b28) aid_placing_details_win_2

0xc97e,	// (0x0002a9aa) camera2_autofocus_pane_g1_ParamLimits

0x1058,	// (0x0001f084) popup_fixed_preview_cale_window_ParamLimits

0x1058,	// (0x0001f084) popup_fixed_preview_cale_window

0xaf76,	// (0x00028fa2) navi_slider_pane_g3

0xaf7f,	// (0x00028fab) navi_slider_pane_g4

0xaf88,	// (0x00028fb4) navi_slider_pane_g5

0xaf76,	// (0x00028fa2) navi_slider_pane_g6

0x1488,	// (0x0001f4b4) navi_slider_pane_g7

0xb0b5,	// (0x000290e1) mup_scale_pane_g3

0xb0be,	// (0x000290ea) mup_scale_pane_g4

0xb0c7,	// (0x000290f3) mup_scale_pane_g5

0x4d7f,	// (0x00022dab) mup_scale_pane_g6

0x4d88,	// (0x00022db4) mup_scale_pane_g7

0xaf76,	// (0x00028fa2) cams2_slider_pane_g3

0xc5d5,	// (0x0002a601) cams2_slider_pane_g4

0x195f,	// (0x0001f98b) cams2_slider_pane_g5

0xaf76,	// (0x00028fa2) cams2_slider_pane_g6

0x1967,	// (0x0001f993) cams2_slider_pane_g7

0xc809,	// (0x0002a835) camera2_autofocus_pane_cp_g1

0xc3ec,	// (0x0002a418) bg_popup_preview_window_pane_cp02_ParamLimits

0xc3ec,	// (0x0002a418) bg_popup_preview_window_pane_cp02

0xcb56,	// (0x0002ab82) list_fp_cale_pane_ParamLimits

0xcb56,	// (0x0002ab82) list_fp_cale_pane

0xcb62,	// (0x0002ab8e) popup_fixed_preview_cale_window_t1_ParamLimits

0xcb62,	// (0x0002ab8e) popup_fixed_preview_cale_window_t1

0x62f3,	// (0x0002431f) popup_fixed_preview_cale_window_t2_ParamLimits

0x62f3,	// (0x0002431f) popup_fixed_preview_cale_window_t2

0x6308,	// (0x00024334) popup_fixed_preview_cale_window_t3_ParamLimits

0x6308,	// (0x00024334) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0002d7d6) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0002d7d6) popup_fixed_preview_cale_window_t

0x631d,	// (0x00024349) list_single_fp_cale_pane_ParamLimits

0x631d,	// (0x00024349) list_single_fp_cale_pane

0xcb80,	// (0x0002abac) list_single_fp_cale_pane_g1_ParamLimits

0xcb80,	// (0x0002abac) list_single_fp_cale_pane_g1

0xcb8c,	// (0x0002abb8) list_single_fp_cale_pane_g2_ParamLimits

0xcb8c,	// (0x0002abb8) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0002d7dd) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0002d7dd) list_single_fp_cale_pane_g

0xcba5,	// (0x0002abd1) list_single_fp_cale_pane_t1_ParamLimits

0xcba5,	// (0x0002abd1) list_single_fp_cale_pane_t1

0xcbb7,	// (0x0002abe3) list_single_fp_cale_pane_t2_ParamLimits

0xcbb7,	// (0x0002abe3) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0002d7e4) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0002d7e4) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x10c0,	// (0x0001f0ec) main_dialer_pane

0x6330,	// (0x0002435c) aid_cell_size_keypad

0x633a,	// (0x00024366) dialer_ne_pane

0x6344,	// (0x00024370) grid_dialer_command_1_pane

0x634c,	// (0x00024378) grid_dialer_command_2_pane

0x6354,	// (0x00024380) grid_dialer_keypad_pane

0x6366,	// (0x00024392) bg_popup_call_pane_cp06_ParamLimits

0x6366,	// (0x00024392) bg_popup_call_pane_cp06

0x6372,	// (0x0002439e) dialer_ne_clear_pane_ParamLimits

0x6372,	// (0x0002439e) dialer_ne_clear_pane

0xcbea,	// (0x0002ac16) dialer_ne_pane_g1

0xcbf2,	// (0x0002ac1e) dialer_ne_pane_t1_ParamLimits

0xcbf2,	// (0x0002ac1e) dialer_ne_pane_t1

0x637e,	// (0x000243aa) dialer_ne_pane_t2_ParamLimits

0x637e,	// (0x000243aa) dialer_ne_pane_t2

0x639b,	// (0x000243c7) dialer_ne_pane_t3_ParamLimits

0x639b,	// (0x000243c7) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0002d7e9) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0002d7e9) dialer_ne_pane_t

0x63bf,	// (0x000243eb) dialer_ne_pane_t3_copy1_ParamLimits

0x63bf,	// (0x000243eb) dialer_ne_pane_t3_copy1

0x63e3,	// (0x0002440f) cell_dialer_keypad_pane_ParamLimits

0x63e3,	// (0x0002440f) cell_dialer_keypad_pane

0x63fa,	// (0x00024426) cell_dialer_command_1_pane_ParamLimits

0x63fa,	// (0x00024426) cell_dialer_command_1_pane

0x6410,	// (0x0002443c) cell_dialer_command_2_pane_ParamLimits

0x6410,	// (0x0002443c) cell_dialer_command_2_pane

0xcc04,	// (0x0002ac30) bg_button_pane_cp02_ParamLimits

0xcc04,	// (0x0002ac30) bg_button_pane_cp02

0x641f,	// (0x0002444b) cell_dialer_keypad_pane_g1_ParamLimits

0x641f,	// (0x0002444b) cell_dialer_keypad_pane_g1

0xcc04,	// (0x0002ac30) bg_button_pane_cp03_ParamLimits

0xcc04,	// (0x0002ac30) bg_button_pane_cp03

0x6434,	// (0x00024460) cell_dialer_command_1_pane_g1_ParamLimits

0x6434,	// (0x00024460) cell_dialer_command_1_pane_g1

0xcc10,	// (0x0002ac3c) bg_button_pane_cp04

0x6448,	// (0x00024474) cell_dialer_command_2_pane_g1

0xa513,	// (0x0002853f) bg_button_pane_cp06

0xcc18,	// (0x0002ac44) dialer_ne_clear_pane_g1

0xae49,	// (0x00028e75) navi_pane_g2

0xae77,	// (0x00028ea3) navi_pane_g3

0x0002,

0xf3e5,	// (0x0002d411) navi_pane_g

0xaf06,	// (0x00028f32) navi_pane_mv_g2

0xaf2d,	// (0x00028f59) navi_pane_mv_g5

0x491b,	// (0x00022947) navi_pane_mv_t1

0xa340,	// (0x0002836c) main_clock2_pane

0x6486,	// (0x000244b2) main_clock2_list_pane_ParamLimits

0x6486,	// (0x000244b2) main_clock2_list_pane

0x64ae,	// (0x000244da) main_clock2_pane_t1_ParamLimits

0x64ae,	// (0x000244da) main_clock2_pane_t1

0x64d0,	// (0x000244fc) main_clock2_pane_t2_ParamLimits

0x64d0,	// (0x000244fc) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0002d7f5) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0002d7f5) main_clock2_pane_t

0x652b,	// (0x00024557) popup_clock_analogue_window_cp03_ParamLimits

0x652b,	// (0x00024557) popup_clock_analogue_window_cp03

0x6549,	// (0x00024575) popup_clock_digital_window_cp02_ParamLimits

0x6549,	// (0x00024575) popup_clock_digital_window_cp02

0x65b6,	// (0x000245e2) main_clock2_list_single_pane_ParamLimits

0x65b6,	// (0x000245e2) main_clock2_list_single_pane

0xa513,	// (0x0002853f) list_highlight_pane_cp05

0xcc56,	// (0x0002ac82) main_clock2_list_single_pane_t1

0x347b,	// (0x000214a7) popup_toolbar_window_cp04_ParamLimits

0x5b1e,	// (0x00023b4a) camera2_autofocus_pane_g2_ParamLimits

0x5b1e,	// (0x00023b4a) camera2_autofocus_pane_g2

0x5b2a,	// (0x00023b56) camera2_autofocus_pane_g3_ParamLimits

0x5b2a,	// (0x00023b56) camera2_autofocus_pane_g3

0x5b36,	// (0x00023b62) camera2_autofocus_pane_g4_ParamLimits

0x5b36,	// (0x00023b62) camera2_autofocus_pane_g4

0x5b42,	// (0x00023b6e) camera2_autofocus_pane_g5_ParamLimits

0x5b42,	// (0x00023b6e) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0002d739) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0002d739) camera2_autofocus_pane_g

0xcadd,	// (0x0002ab09) camera2_autofocus_pane_cp_g2

0xcae5,	// (0x0002ab11) camera2_autofocus_pane_cp_g3

0xcaed,	// (0x0002ab19) camera2_autofocus_pane_cp_g4

0xcaf5,	// (0x0002ab21) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0002d79f) camera2_autofocus_pane_cp_g

0x635e,	// (0x0002438a) popup_dialer_spcha_window

0x9c03,	// (0x00027c2f) bg_popup_sub_pane_cp07

0xcc64,	// (0x0002ac90) list_spcha_pane

0xcc6c,	// (0x0002ac98) list_single_spcha_pane_ParamLimits

0xcc6c,	// (0x0002ac98) list_single_spcha_pane

0x9c03,	// (0x00027c2f) list_highlight_pane_cp06

0xcc7d,	// (0x0002aca9) list_single_spcha_pane_t1

0xbe35,	// (0x00029e61) popup_call2_audio_out_window_g4_ParamLimits

0xbe35,	// (0x00029e61) popup_call2_audio_out_window_g4

0x10c0,	// (0x0001f0ec) main_imed2_pane

0x15ac,	// (0x0001f5d8) popup_imed_adjust2_window

0x15bf,	// (0x0001f5eb) popup_imed_trans_window_ParamLimits

0x15bf,	// (0x0001f5eb) popup_imed_trans_window

0xc63e,	// (0x0002a66a) popup_blid_sat_info2_window_t1

0xc64c,	// (0x0002a678) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0002d6ce) popup_blid_sat_info2_window_t

0x65e8,	// (0x00024614) aid_size_cell_colour_35

0x6602,	// (0x0002462e) aid_size_cell_colour_112

0x6619,	// (0x00024645) aid_size_cell_effect

0xa34c,	// (0x00028378) bg_tb_trans_pane_cp02

0xb024,	// (0x00029050) heading_imed_pane

0x6633,	// (0x0002465f) listscroll_imed_pane

0xcc8b,	// (0x0002acb7) heading_imed_pane_g1

0xcc93,	// (0x0002acbf) heading_imed_pane_t1

0xcca1,	// (0x0002accd) grid_imed_colour_35_pane_ParamLimits

0xcca1,	// (0x0002accd) grid_imed_colour_35_pane

0x663f,	// (0x0002466b) grid_imed_effect_pane

0xccb8,	// (0x0002ace4) list_imed_aspect_pane

0x664f,	// (0x0002467b) scroll_pane_cp027_ParamLimits

0x664f,	// (0x0002467b) scroll_pane_cp027

0x665b,	// (0x00024687) cell_imed_effect_pane_ParamLimits

0x665b,	// (0x00024687) cell_imed_effect_pane

0xccc0,	// (0x0002acec) cell_imed_colour_pane_ParamLimits

0xccc0,	// (0x0002acec) cell_imed_colour_pane

0xcd02,	// (0x0002ad2e) cell_imed_colour_pane_g1_ParamLimits

0xcd02,	// (0x0002ad2e) cell_imed_colour_pane_g1

0xcd13,	// (0x0002ad3f) hgihlgiht_grid_pane_cp016_ParamLimits

0xcd13,	// (0x0002ad3f) hgihlgiht_grid_pane_cp016

0x6673,	// (0x0002469f) cell_imed_effect_pane_g1

0x667b,	// (0x000246a7) grid_highlight_pane_cp017

0xcd24,	// (0x0002ad50) list_imed_single_pane_ParamLimits

0xcd24,	// (0x0002ad50) list_imed_single_pane

0x9c03,	// (0x00027c2f) list_highlight_pane_cp07

0xcd39,	// (0x0002ad65) list_imed_aspect_pane_comp1_t1

0xc3f8,	// (0x0002a424) bg_tb_trans_pane_cp05

0xcd5b,	// (0x0002ad87) popup_imed_adjust2_window_g1

0xcd82,	// (0x0002adae) popup_imed_adjust2_window_t1

0xcd9a,	// (0x0002adc6) slider_imed_adjust_pane

0xcdae,	// (0x0002adda) slider_imed_adjust_pane_g1

0xcdbe,	// (0x0002adea) slider_imed_adjust_pane_g2

0xcdce,	// (0x0002adfa) slider_imed_adjust_pane_g3

0xcddf,	// (0x0002ae0b) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0002d812) slider_imed_adjust_pane_g

0x6684,	// (0x000246b0) aid_size_cell_clipart2

0x6690,	// (0x000246bc) grid_imed_clipart_pane

0xcdf0,	// (0x0002ae1c) scroll_pane_cp031

0x669a,	// (0x000246c6) cell_imed_clipart_pane_ParamLimits

0x669a,	// (0x000246c6) cell_imed_clipart_pane

0x66bc,	// (0x000246e8) cell_imed_clipart_pane_g1

0x9c03,	// (0x00027c2f) grid_highlight_pane_cp014

0x6492,	// (0x000244be) main_clock2_pane_g1_ParamLimits

0x6492,	// (0x000244be) main_clock2_pane_g1

0x6561,	// (0x0002458d) aid_call2_pane_cp10

0x6573,	// (0x0002459f) aid_call_pane_cp10

0xadaa,	// (0x00028dd6) popup_clock_analogue_window_cp10_g1

0xadaa,	// (0x00028dd6) popup_clock_analogue_window_cp10_g2

0x6585,	// (0x000245b1) popup_clock_analogue_window_cp10_g3

0x6585,	// (0x000245b1) popup_clock_analogue_window_cp10_g4

0xadaa,	// (0x00028dd6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0002d800) popup_clock_analogue_window_cp10_g

0x6597,	// (0x000245c3) popup_clock_analogue_window_cp10_t1

0x1970,	// (0x0001f99c) clock_digital_number_pane_cp10_ParamLimits

0x1970,	// (0x0001f99c) clock_digital_number_pane_cp10

0x1988,	// (0x0001f9b4) clock_digital_number_pane_cp11_ParamLimits

0x1988,	// (0x0001f9b4) clock_digital_number_pane_cp11

0x19a0,	// (0x0001f9cc) clock_digital_number_pane_cp12_ParamLimits

0x19a0,	// (0x0001f9cc) clock_digital_number_pane_cp12

0x19b8,	// (0x0001f9e4) clock_digital_number_pane_cp13_ParamLimits

0x19b8,	// (0x0001f9e4) clock_digital_number_pane_cp13

0x19d0,	// (0x0001f9fc) clock_digital_separator_pane_cp10_ParamLimits

0x19d0,	// (0x0001f9fc) clock_digital_separator_pane_cp10

0x65c8,	// (0x000245f4) popup_clock_digital_window_cp02_t1_ParamLimits

0x65c8,	// (0x000245f4) popup_clock_digital_window_cp02_t1

0xa273,	// (0x0002829f) clock_digital_number_pane_cp10_g1

0xa273,	// (0x0002829f) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0002d81b) clock_digital_number_pane_cp10_g

0xa273,	// (0x0002829f) clock_digital_separator_pane_cp10_g1

0xa273,	// (0x0002829f) clock_digital_separator_pane_g2_cp10

0xaf35,	// (0x00028f61) navi_pane_vded_g4

0xaf3e,	// (0x00028f6a) navi_pane_vded_g5

0xaf47,	// (0x00028f73) navi_pane_vded_t1

0x10c0,	// (0x0001f0ec) main_vded_pane

0x66c5,	// (0x000246f1) main_vded_pane_g1

0x66d1,	// (0x000246fd) main_vded_pane_g2

0x66db,	// (0x00024707) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0002d820) main_vded_pane_g

0x66e5,	// (0x00024711) main_vded_pane_t1

0x66f3,	// (0x0002471f) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0002d827) main_vded_pane_t

0x6701,	// (0x0002472d) vded_slider_pane

0x670b,	// (0x00024737) vded_video_pane

0xcdf8,	// (0x0002ae24) vded_video_pane_g1

0x6715,	// (0x00024741) vded_video_pane_g2

0xc809,	// (0x0002a835) vded_video_pane_g3

0x0002,

0xf800,	// (0x0002d82c) vded_video_pane_g

0xce02,	// (0x0002ae2e) vded_slider_pane_g1

0xc553,	// (0x0002a57f) vded_slider_pane_g2

0xce0b,	// (0x0002ae37) vded_slider_pane_g3

0xce14,	// (0x0002ae40) vded_slider_pane_g4

0xce1d,	// (0x0002ae49) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0002d833) vded_slider_pane_g

0x6262,	// (0x0002428e) mup3_rocker_pane_ParamLimits

0x6262,	// (0x0002428e) mup3_rocker_pane

0x671e,	// (0x0002474a) mup3_control_keys_pane_g1

0x6726,	// (0x00024752) mup3_control_keys_pane_g2

0x672e,	// (0x0002475a) mup3_control_keys_pane_g3

0x6736,	// (0x00024762) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0002d83e) mup3_control_keys_pane_g

0x1080,	// (0x0001f0ac) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1080,	// (0x0001f0ac) popup_toolbar2_fixed_window_cp01

0x627c,	// (0x000242a8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x627c,	// (0x000242a8) popup_toolbar2_fixed_window_cp02

0xb774,	// (0x000297a0) popup_call2_audio_second_window_t4_ParamLimits

0xb774,	// (0x000297a0) popup_call2_audio_second_window_t4

0xbca2,	// (0x00029cce) popup_call2_audio_first_window_t6_ParamLimits

0xbca2,	// (0x00029cce) popup_call2_audio_first_window_t6

0xbf38,	// (0x00029f64) popup_call2_audio_out_window_t6_ParamLimits

0xbf38,	// (0x00029f64) popup_call2_audio_out_window_t6

0x10c0,	// (0x0001f0ec) main_vitu_pane

0x6746,	// (0x00024772) aid_size_cell_itu_ParamLimits

0x6746,	// (0x00024772) aid_size_cell_itu

0xd247,	// (0x0002b273) bg_popup_window_pane_cp08_ParamLimits

0xd247,	// (0x0002b273) bg_popup_window_pane_cp08

0x6754,	// (0x00024780) field_vitu_entry_pane_ParamLimits

0x6754,	// (0x00024780) field_vitu_entry_pane

0x6763,	// (0x0002478f) grid_vitu_function_pane_ParamLimits

0x6763,	// (0x0002478f) grid_vitu_function_pane

0x6773,	// (0x0002479f) grid_vitu_itu_pane_ParamLimits

0x6773,	// (0x0002479f) grid_vitu_itu_pane

0x6783,	// (0x000247af) cell_vitu_itu_pane_ParamLimits

0x6783,	// (0x000247af) cell_vitu_itu_pane

0x6798,	// (0x000247c4) cell_vitu_function_pane_ParamLimits

0x6798,	// (0x000247c4) cell_vitu_function_pane

0xa34c,	// (0x00028378) bg_popup_sub_pane_cp08_ParamLimits

0xa34c,	// (0x00028378) bg_popup_sub_pane_cp08

0x67aa,	// (0x000247d6) field_vitu_entry_pane_t1_ParamLimits

0x67aa,	// (0x000247d6) field_vitu_entry_pane_t1

0xce3e,	// (0x0002ae6a) field_vitu_entry_pane_t2_ParamLimits

0xce3e,	// (0x0002ae6a) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0002d84c) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0002d84c) field_vitu_entry_pane_t

0xce5b,	// (0x0002ae87) bg_button_pane_cp05_ParamLimits

0xce5b,	// (0x0002ae87) bg_button_pane_cp05

0x67c6,	// (0x000247f2) cell_vitu_itu_pane_g1

0x67de,	// (0x0002480a) cell_vitu_itu_pane_t1_ParamLimits

0x67de,	// (0x0002480a) cell_vitu_itu_pane_t1

0x67f0,	// (0x0002481c) cell_vitu_itu_pane_t2_ParamLimits

0x67f0,	// (0x0002481c) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0002d851) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0002d851) cell_vitu_itu_pane_t

0xce69,	// (0x0002ae95) bg_button_pane_cp07

0x6825,	// (0x00024851) cell_vitu_function_pane_g1

0x1199,	// (0x0001f1c5) main_calc_pane_g1

0x0e6a,	// (0x0001ee96) aid_visual_content_pane

0x10c0,	// (0x0001f0ec) main_vradio_pane

0x682e,	// (0x0002485a) main_vradio_pane_g1_ParamLimits

0x682e,	// (0x0002485a) main_vradio_pane_g1

0xce73,	// (0x0002ae9f) main_vradio_pane_g2_ParamLimits

0xce73,	// (0x0002ae9f) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0002d858) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0002d858) main_vradio_pane_g

0x683e,	// (0x0002486a) main_vradio_pane_t1_ParamLimits

0x683e,	// (0x0002486a) main_vradio_pane_t1

0x6850,	// (0x0002487c) main_vradio_pane_t2_ParamLimits

0x6850,	// (0x0002487c) main_vradio_pane_t2

0xce80,	// (0x0002aeac) main_vradio_pane_t3_ParamLimits

0xce80,	// (0x0002aeac) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0002d85d) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0002d85d) main_vradio_pane_t

0x6862,	// (0x0002488e) vradio_rocker_control_pane_ParamLimits

0x6862,	// (0x0002488e) vradio_rocker_control_pane

0x686e,	// (0x0002489a) vradio_station_info_pane_ParamLimits

0x686e,	// (0x0002489a) vradio_station_info_pane

0xce94,	// (0x0002aec0) vradio_frequency_info_pane_ParamLimits

0xce94,	// (0x0002aec0) vradio_frequency_info_pane

0xc809,	// (0x0002a835) vradio_station_info_pane_g1

0xcea3,	// (0x0002aecf) vradio_station_info_pane_t1_ParamLimits

0xcea3,	// (0x0002aecf) vradio_station_info_pane_t1

0xcec5,	// (0x0002aef1) vradio_station_info_pane_t2_ParamLimits

0xcec5,	// (0x0002aef1) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0002d864) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0002d864) vradio_station_info_pane_t

0xced7,	// (0x0002af03) vradio_tuning_pane

0xcedf,	// (0x0002af0b) vradio_rocker_control_pane_g1

0xcee7,	// (0x0002af13) vradio_rocker_control_pane_g2

0xceef,	// (0x0002af1b) vradio_rocker_control_pane_g3

0xcef7,	// (0x0002af23) vradio_rocker_control_pane_g4

0xceff,	// (0x0002af2b) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0002d869) vradio_rocker_control_pane_g

0x687d,	// (0x000248a9) vradio_frequency_info_pane_g1

0xcf07,	// (0x0002af33) vradio_frequency_info_pane_t1_ParamLimits

0xcf07,	// (0x0002af33) vradio_frequency_info_pane_t1

0x6887,	// (0x000248b3) vradio_tuning_pane_g1

0x6890,	// (0x000248bc) vradio_tuning_pane_t1

0x0e86,	// (0x0001eeb2) area_side_right_pane_ParamLimits

0x0e86,	// (0x0001eeb2) area_side_right_pane

0xc3b3,	// (0x0002a3df) status_small_pane_g1

0xc3bb,	// (0x0002a3e7) status_small_pane_g2

0xc3c4,	// (0x0002a3f0) status_small_pane_g3

0xc3cd,	// (0x0002a3f9) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0002d624) status_small_pane_g

0xc3d6,	// (0x0002a402) status_small_pane_t1

0x10c0,	// (0x0001f0ec) main_video3_pane

0xcf1b,	// (0x0002af47) cams_zoom_vslider_pane

0xcf23,	// (0x0002af4f) image3_wide_pane_ParamLimits

0xcf23,	// (0x0002af4f) image3_wide_pane

0xcf3d,	// (0x0002af69) image3_wide_small_pane

0xcf49,	// (0x0002af75) main_video3_pane_g1_ParamLimits

0xcf49,	// (0x0002af75) main_video3_pane_g1

0xcf65,	// (0x0002af91) main_video3_pane_g2_ParamLimits

0xcf65,	// (0x0002af91) main_video3_pane_g2

0x0001,

0xf848,	// (0x0002d874) main_video3_pane_g_ParamLimits

0xf848,	// (0x0002d874) main_video3_pane_g

0xcf81,	// (0x0002afad) main_video3_pane_t1_ParamLimits

0xcf81,	// (0x0002afad) main_video3_pane_t1

0xcfac,	// (0x0002afd8) main_video3_pane_t2_ParamLimits

0xcfac,	// (0x0002afd8) main_video3_pane_t2

0xcfd7,	// (0x0002b003) main_video3_pane_t3_ParamLimits

0xcfd7,	// (0x0002b003) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0002d879) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0002d879) main_video3_pane_t

0xd004,	// (0x0002b030) cams_zoom_vslider_pane_g1

0xd00d,	// (0x0002b039) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0002d880) cams_zoom_vslider_pane_g

0xd015,	// (0x0002b041) small_slider_vertical_pane

0xc809,	// (0x0002a835) small_slider_vertical_pane_g1

0xc809,	// (0x0002a835) small_slider_vertical_pane_g2

0xd01d,	// (0x0002b049) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0002d885) small_slider_vertical_pane_g

0x10c0,	// (0x0001f0ec) main_hwr_training_pane

0xd026,	// (0x0002b052) hwr_training_instruct_pane_ParamLimits

0xd026,	// (0x0002b052) hwr_training_instruct_pane

0x689f,	// (0x000248cb) hwr_training_navi_pane_ParamLimits

0x689f,	// (0x000248cb) hwr_training_navi_pane

0x68b9,	// (0x000248e5) hwr_training_write_pane_ParamLimits

0x68b9,	// (0x000248e5) hwr_training_write_pane

0x9c03,	// (0x00027c2f) bg_frame_shadow_pane

0xd05d,	// (0x0002b089) hwr_training_write_pane_g1

0xd065,	// (0x0002b091) hwr_training_write_pane_g2

0xd06d,	// (0x0002b099) hwr_training_write_pane_g3

0xd075,	// (0x0002b0a1) hwr_training_write_pane_g4

0xd07d,	// (0x0002b0a9) hwr_training_write_pane_g5

0xd085,	// (0x0002b0b1) hwr_training_write_pane_g6

0xd08d,	// (0x0002b0b9) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0002d88c) hwr_training_write_pane_g

0x19e8,	// (0x0001fa14) hwr_training_navi_pane_g1_ParamLimits

0x19e8,	// (0x0001fa14) hwr_training_navi_pane_g1

0x19fa,	// (0x0001fa26) hwr_training_navi_pane_g2_ParamLimits

0x19fa,	// (0x0001fa26) hwr_training_navi_pane_g2

0x1a0c,	// (0x0001fa38) hwr_training_navi_pane_g3_ParamLimits

0x1a0c,	// (0x0001fa38) hwr_training_navi_pane_g3

0x1a1c,	// (0x0001fa48) hwr_training_navi_pane_g4_ParamLimits

0x1a1c,	// (0x0001fa48) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0002d89b) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0002d89b) hwr_training_navi_pane_g

0x1a36,	// (0x0001fa62) hwr_training_navi_pane_t1

0x68f1,	// (0x0002491d) list_single_hwr_training_instruct_pane_ParamLimits

0x68f1,	// (0x0002491d) list_single_hwr_training_instruct_pane

0xd095,	// (0x0002b0c1) list_single_hwr_training_instruct_pane_t1

0xc749,	// (0x0002a775) bg_frame_shadow_pane_g1

0xd0a4,	// (0x0002b0d0) bg_frame_shadow_pane_g2

0xd0ac,	// (0x0002b0d8) bg_frame_shadow_pane_g3

0xd0b4,	// (0x0002b0e0) bg_frame_shadow_pane_g4

0xd0bc,	// (0x0002b0e8) bg_frame_shadow_pane_g5

0xd0c4,	// (0x0002b0f0) bg_frame_shadow_pane_g6

0xd0cc,	// (0x0002b0f8) bg_frame_shadow_pane_g7

0xa407,	// (0x00028433) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0002d8a6) bg_frame_shadow_pane_g

0x10c0,	// (0x0001f0ec) main_video_tele_dialer_pane

0x1a44,	// (0x0001fa70) aid_size_cell_video_keypad_ParamLimits

0x1a44,	// (0x0001fa70) aid_size_cell_video_keypad

0x1a54,	// (0x0001fa80) grid_video_dialer_keypad_pane_ParamLimits

0x1a54,	// (0x0001fa80) grid_video_dialer_keypad_pane

0x1a88,	// (0x0001fab4) video_down_pane_cp_ParamLimits

0x1a88,	// (0x0001fab4) video_down_pane_cp

0x1a96,	// (0x0001fac2) cell_video_dialer_keypad_pane_ParamLimits

0x1a96,	// (0x0001fac2) cell_video_dialer_keypad_pane

0xd0d4,	// (0x0002b100) bg_button_pane_cp08_ParamLimits

0xd0d4,	// (0x0002b100) bg_button_pane_cp08

0x6932,	// (0x0002495e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6932,	// (0x0002495e) cell_video_dialer_keypad_pane_g1

0x6256,	// (0x00024282) mup3_rocker2_pane_ParamLimits

0x6256,	// (0x00024282) mup3_rocker2_pane

0xc809,	// (0x0002a835) mup3_rocker2_pane_g1

0x151c,	// (0x0001f548) main_dialer2_pane

0x10c0,	// (0x0001f0ec) main_mp4_pane

0x1ab3,	// (0x0001fadf) main_mp4_pane_g1_ParamLimits

0x1ab3,	// (0x0001fadf) main_mp4_pane_g1

0x1ac1,	// (0x0001faed) main_mp4_pane_g2_ParamLimits

0x1ac1,	// (0x0001faed) main_mp4_pane_g2

0x1acf,	// (0x0001fafb) main_mp4_pane_g3_ParamLimits

0x1acf,	// (0x0001fafb) main_mp4_pane_g3

0x1b14,	// (0x0001fb40) main_mp4_pane_g4_ParamLimits

0x1b14,	// (0x0001fb40) main_mp4_pane_g4

0x1b3c,	// (0x0001fb68) main_mp4_pane_g5_ParamLimits

0x1b3c,	// (0x0001fb68) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0002d8c6) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0002d8c6) main_mp4_pane_g

0x1b8c,	// (0x0001fbb8) main_mp4_pane_t1_ParamLimits

0x1b8c,	// (0x0001fbb8) main_mp4_pane_t1

0x1be8,	// (0x0001fc14) main_mp4_pane_t2_ParamLimits

0x1be8,	// (0x0001fc14) main_mp4_pane_t2

0xd0e0,	// (0x0002b10c) main_mp4_pane_t3_ParamLimits

0xd0e0,	// (0x0002b10c) main_mp4_pane_t3

0x1c3a,	// (0x0001fc66) main_mp4_pane_t4_ParamLimits

0x1c3a,	// (0x0001fc66) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002d8d3) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002d8d3) main_mp4_pane_t

0x1c7e,	// (0x0001fcaa) mp4_progress_pane_ParamLimits

0x1c7e,	// (0x0001fcaa) mp4_progress_pane

0x1cc8,	// (0x0001fcf4) mp4_rocker_pane_ParamLimits

0x1cc8,	// (0x0001fcf4) mp4_rocker_pane

0xd108,	// (0x0002b134) mp4_progress_pane_t1

0xd121,	// (0x0002b14d) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002d8dc) mp4_progress_pane_t

0xd13a,	// (0x0002b166) mup_progress_pane_cp04

0xd96a,	// (0x0002b996) mp4_rocker_pane_g1

0x1ce8,	// (0x0001fd14) aid_cell_size_keypad2_ParamLimits

0x1ce8,	// (0x0001fd14) aid_cell_size_keypad2

0x1cf8,	// (0x0001fd24) dialer2_ne_pane_ParamLimits

0x1cf8,	// (0x0001fd24) dialer2_ne_pane

0x1d06,	// (0x0001fd32) grid_dialer2_keypad_pane_ParamLimits

0x1d06,	// (0x0001fd32) grid_dialer2_keypad_pane

0xd255,	// (0x0002b281) bg_popup_call_pane_cp07_ParamLimits

0xd255,	// (0x0002b281) bg_popup_call_pane_cp07

0x6969,	// (0x00024995) dialer2_ne_pane_t1_ParamLimits

0x6969,	// (0x00024995) dialer2_ne_pane_t1

0x1d16,	// (0x0001fd42) cell_dialer2_keypad_pane_ParamLimits

0x1d16,	// (0x0001fd42) cell_dialer2_keypad_pane

0xd158,	// (0x0002b184) bg_button_pane_pane_cp04_ParamLimits

0xd158,	// (0x0002b184) bg_button_pane_pane_cp04

0x698e,	// (0x000249ba) cell_dialer2_keypad_pane_g1_ParamLimits

0x698e,	// (0x000249ba) cell_dialer2_keypad_pane_g1

0x333d,	// (0x00021369) aid_placing_vt_set_content_ParamLimits

0x333d,	// (0x00021369) aid_placing_vt_set_content

0x3369,	// (0x00021395) aid_placing_vt_set_title_ParamLimits

0x3369,	// (0x00021395) aid_placing_vt_set_title

0x10c0,	// (0x0001f0ec) main_image3_pane

0x1d5d,	// (0x0001fd89) area_side_right_pane_cp01_ParamLimits

0x1d5d,	// (0x0001fd89) area_side_right_pane_cp01

0x1d8a,	// (0x0001fdb6) main_image3_pane_g1_ParamLimits

0x1d8a,	// (0x0001fdb6) main_image3_pane_g1

0x1d98,	// (0x0001fdc4) main_image3_pane_g2_ParamLimits

0x1d98,	// (0x0001fdc4) main_image3_pane_g2

0x1db1,	// (0x0001fddd) main_image3_pane_g3_ParamLimits

0x1db1,	// (0x0001fddd) main_image3_pane_g3

0x1dca,	// (0x0001fdf6) main_image3_pane_g4_ParamLimits

0x1dca,	// (0x0001fdf6) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002d8eb) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002d8eb) main_image3_pane_g

0x1de3,	// (0x0001fe0f) main_image3_pane_t1_ParamLimits

0x1de3,	// (0x0001fe0f) main_image3_pane_t1

0x1e08,	// (0x0001fe34) main_image3_pane_t2_ParamLimits

0x1e08,	// (0x0001fe34) main_image3_pane_t2

0x1e27,	// (0x0001fe53) main_image3_pane_t3_ParamLimits

0x1e27,	// (0x0001fe53) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002d8f4) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002d8f4) main_image3_pane_t

0xd247,	// (0x0002b273) grid_sctrl_middle_pane_cp01_ParamLimits

0xd247,	// (0x0002b273) grid_sctrl_middle_pane_cp01

0x69f6,	// (0x00024a22) cell_sctrl_middle_pane_cp01_ParamLimits

0x69f6,	// (0x00024a22) cell_sctrl_middle_pane_cp01

0x6a07,	// (0x00024a33) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6a07,	// (0x00024a33) cell_sctrl_middle_pane_cp01_g1

0x10c0,	// (0x0001f0ec) main_call4_pane

0x6a14,	// (0x00024a40) aid_size_button_call4_ParamLimits

0x6a14,	// (0x00024a40) aid_size_button_call4

0x6a44,	// (0x00024a70) call4_windows_pane_ParamLimits

0x6a44,	// (0x00024a70) call4_windows_pane

0x6a5e,	// (0x00024a8a) grid_call4_button_pane_ParamLimits

0x6a5e,	// (0x00024a8a) grid_call4_button_pane

0xd164,	// (0x0002b190) call4_windows_conf_pane

0xd17b,	// (0x0002b1a7) popup_call4_audio_first_window_ParamLimits

0xd17b,	// (0x0002b1a7) popup_call4_audio_first_window

0xd1c7,	// (0x0002b1f3) popup_call4_audio_second_window_ParamLimits

0xd1c7,	// (0x0002b1f3) popup_call4_audio_second_window

0xd1db,	// (0x0002b207) popup_call4_audio_wait_window_ParamLimits

0xd1db,	// (0x0002b207) popup_call4_audio_wait_window

0x6a82,	// (0x00024aae) cell_call4_button_pane_ParamLimits

0x6a82,	// (0x00024aae) cell_call4_button_pane

0x6aa7,	// (0x00024ad3) bg_button_pane_cp09_ParamLimits

0x6aa7,	// (0x00024ad3) bg_button_pane_cp09

0x6ab3,	// (0x00024adf) cell_call4_button_pane_g1_ParamLimits

0x6ab3,	// (0x00024adf) cell_call4_button_pane_g1

0x6ac0,	// (0x00024aec) cell_call4_button_pane_t1_ParamLimits

0x6ac0,	// (0x00024aec) cell_call4_button_pane_t1

0xd223,	// (0x0002b24f) popup_call4_audio_conf_window_ParamLimits

0xd223,	// (0x0002b24f) popup_call4_audio_conf_window

0x6289,	// (0x000242b5) mup3_progress_pane_t1_ParamLimits

0x62a8,	// (0x000242d4) mup3_progress_pane_t2_ParamLimits

0xcb13,	// (0x0002ab3f) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0002d7c8) mup3_progress_pane_t_ParamLimits

0xcb30,	// (0x0002ab5c) mup_progress_pane_cp03_ParamLimits

0x673e,	// (0x0002476a) mup3_control_keys_pane_g4_copy1

0x1cac,	// (0x0001fcd8) mp4_rocker2_pane_ParamLimits

0x1cac,	// (0x0001fcd8) mp4_rocker2_pane

0xd237,	// (0x0002b263) mp4_rocker2_pane_g1

0xd23f,	// (0x0002b26b) mp4_rocker2_pane_g2

0x1e88,	// (0x0001feb4) mp4_rocker2_pane_g3

0x1e90,	// (0x0001febc) mp4_rocker2_pane_g4

0x1e98,	// (0x0001fec4) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002d8fd) mp4_rocker2_pane_g

0x10c0,	// (0x0001f0ec) main_camera4_pane

0x10c0,	// (0x0001f0ec) main_video4_pane

0x1a64,	// (0x0001fa90) main_video_tele_dialer_pane_t1_ParamLimits

0x1a64,	// (0x0001fa90) main_video_tele_dialer_pane_t1

0x1a76,	// (0x0001faa2) main_video_tele_dialer_pane_t2_ParamLimits

0x1a76,	// (0x0001faa2) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0002d8b7) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0002d8b7) main_video_tele_dialer_pane_t

0x1eb8,	// (0x0001fee4) cam4_autofocus_pane_ParamLimits

0x1eb8,	// (0x0001fee4) cam4_autofocus_pane

0x1ed2,	// (0x0001fefe) cam4_image_uncrop_pane_ParamLimits

0x1ed2,	// (0x0001fefe) cam4_image_uncrop_pane

0x1ee9,	// (0x0001ff15) cam4_indicators_pane_ParamLimits

0x1ee9,	// (0x0001ff15) cam4_indicators_pane

0x1f05,	// (0x0001ff31) main_camera4_pane_g1_ParamLimits

0x1f05,	// (0x0001ff31) main_camera4_pane_g1

0x1f11,	// (0x0001ff3d) main_camera4_pane_g2_ParamLimits

0x1f11,	// (0x0001ff3d) main_camera4_pane_g2

0x1f11,	// (0x0001ff3d) main_camera4_pane_g3_ParamLimits

0x1f11,	// (0x0001ff3d) main_camera4_pane_g3

0x1f1d,	// (0x0001ff49) main_camera4_pane_g4_ParamLimits

0x1f1d,	// (0x0001ff49) main_camera4_pane_g4

0x1f29,	// (0x0001ff55) main_camera4_pane_g5_ParamLimits

0x1f29,	// (0x0001ff55) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002d908) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002d908) main_camera4_pane_g

0x1f43,	// (0x0001ff6f) main_camera4_pane_t1_ParamLimits

0x1f43,	// (0x0001ff6f) main_camera4_pane_t1

0x1f67,	// (0x0001ff93) bg_tb_trans_pane_cp06

0x1f7d,	// (0x0001ffa9) cam4_indicators_pane_g1

0x1f8e,	// (0x0001ffba) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002d923) cam4_indicators_pane_g

0x1fac,	// (0x0001ffd8) cam4_indicators_pane_t1

0x1fd6,	// (0x00020002) main_video4_pane_g1_ParamLimits

0x1fd6,	// (0x00020002) main_video4_pane_g1

0x1fe2,	// (0x0002000e) main_video4_pane_g2_ParamLimits

0x1fe2,	// (0x0002000e) main_video4_pane_g2

0x1fee,	// (0x0002001a) main_video4_pane_g3_ParamLimits

0x1fee,	// (0x0002001a) main_video4_pane_g3

0x1ffa,	// (0x00020026) main_video4_pane_g4_ParamLimits

0x1ffa,	// (0x00020026) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002d92a) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002d92a) main_video4_pane_g

0x201a,	// (0x00020046) vid4_indicators_pane_ParamLimits

0x201a,	// (0x00020046) vid4_indicators_pane

0x2039,	// (0x00020065) video4_image_uncrop_cif_pane_ParamLimits

0x2039,	// (0x00020065) video4_image_uncrop_cif_pane

0x2048,	// (0x00020074) video4_image_uncrop_nhd_pane_ParamLimits

0x2048,	// (0x00020074) video4_image_uncrop_nhd_pane

0x1ed2,	// (0x0001fefe) video4_image_uncrop_vga_pane_ParamLimits

0x1ed2,	// (0x0001fefe) video4_image_uncrop_vga_pane

0x150e,	// (0x0001f53a) bg_tb_trans_pane_cp07

0x205f,	// (0x0002008b) vid4_indicators_pane_g1

0x2073,	// (0x0002009f) vid4_indicators_pane_g2

0x2087,	// (0x000200b3) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002d935) vid4_indicators_pane_g

0x20b6,	// (0x000200e2) vid4_indicators_pane_t1

0x6af6,	// (0x00024b22) cam4_autofocus_pane_g1

0x6afe,	// (0x00024b2a) cam4_autofocus_pane_g2

0x6b06,	// (0x00024b32) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002d940) cam4_autofocus_pane_g

0x6b0e,	// (0x00024b3a) cam4_autofocus_pane_g3_copy1

0x6916,	// (0x00024942) video_down_pane_cp_t1

0x6924,	// (0x00024950) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0002d8bc) video_down_pane_cp_t

0x10b2,	// (0x0001f0de) popup_vitu2_window_ParamLimits

0x10b2,	// (0x0001f0de) popup_vitu2_window

0x20cd,	// (0x000200f9) aid_size_cell2_itu2_ParamLimits

0x20cd,	// (0x000200f9) aid_size_cell2_itu2

0x20ef,	// (0x0002011b) aid_size_cell_itu2_ParamLimits

0x20ef,	// (0x0002011b) aid_size_cell_itu2

0x2133,	// (0x0002015f) bg_popup_window_pane_cp09_ParamLimits

0x2133,	// (0x0002015f) bg_popup_window_pane_cp09

0x2141,	// (0x0002016d) field_vitu2_entry_pane_ParamLimits

0x2141,	// (0x0002016d) field_vitu2_entry_pane

0x2161,	// (0x0002018d) grid_vitu2_function_pane_ParamLimits

0x2161,	// (0x0002018d) grid_vitu2_function_pane

0x21a5,	// (0x000201d1) grid_vitu2_itu_pane_ParamLimits

0x21a5,	// (0x000201d1) grid_vitu2_itu_pane

0x2221,	// (0x0002024d) cell_vitu2_itu_pane_ParamLimits

0x2221,	// (0x0002024d) cell_vitu2_itu_pane

0x223a,	// (0x00020266) cell_vitu2_function_pane_ParamLimits

0x223a,	// (0x00020266) cell_vitu2_function_pane

0xd263,	// (0x0002b28f) bg_popup_call_pane_cp08_ParamLimits

0xd263,	// (0x0002b28f) bg_popup_call_pane_cp08

0xd27a,	// (0x0002b2a6) field_vitu2_entry_pane_g1

0xd286,	// (0x0002b2b2) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002d947) field_vitu2_entry_pane_g

0x6b16,	// (0x00024b42) field_vitu2_entry_pane_t1_ParamLimits

0x6b16,	// (0x00024b42) field_vitu2_entry_pane_t1

0xd2a0,	// (0x0002b2cc) field_vitu2_entry_pane_t2_ParamLimits

0xd2a0,	// (0x0002b2cc) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002d94e) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002d94e) field_vitu2_entry_pane_t

0x227b,	// (0x000202a7) bg_button_pane_cp010_ParamLimits

0x227b,	// (0x000202a7) bg_button_pane_cp010

0x2289,	// (0x000202b5) cell_vitu2_itu_pane_g1

0x22a9,	// (0x000202d5) cell_vitu2_itu_pane_t1_ParamLimits

0x22a9,	// (0x000202d5) cell_vitu2_itu_pane_t1

0x22f5,	// (0x00020321) cell_vitu2_itu_pane_t2_ParamLimits

0x22f5,	// (0x00020321) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002d958) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002d958) cell_vitu2_itu_pane_t

0x150e,	// (0x0001f53a) bg_button_pane_cp011

0x23bd,	// (0x000203e9) cell_vitu2_function_pane_g1

0x10c0,	// (0x0001f0ec) main_myfav_hc_pane

0x1e69,	// (0x0001fe95) popup_image3_note_pane_ParamLimits

0x1e69,	// (0x0001fe95) popup_image3_note_pane

0x1e77,	// (0x0001fea3) popup_image3_tool_bar_pane_ParamLimits

0x1e77,	// (0x0001fea3) popup_image3_tool_bar_pane

0x236b,	// (0x00020397) cell_vitu2_itu_pane_t3_ParamLimits

0x236b,	// (0x00020397) cell_vitu2_itu_pane_t3

0x9c03,	// (0x00027c2f) bg_popup_trans_pane

0xd2c5,	// (0x0002b2f1) grid_image3_tool_bar_pane

0xd2cf,	// (0x0002b2fb) bg_popup_trans_pane_g1

0xa76c,	// (0x00028798) bg_popup_trans_pane_g2

0xd2d7,	// (0x0002b303) bg_popup_trans_pane_g3

0xd2df,	// (0x0002b30b) bg_popup_trans_pane_g4

0xd2e7,	// (0x0002b313) bg_popup_trans_pane_g5

0xd2ef,	// (0x0002b31b) bg_popup_trans_pane_g6

0xd2f7,	// (0x0002b323) bg_popup_trans_pane_g7

0xd2ff,	// (0x0002b32b) bg_popup_trans_pane_g8

0xa74c,	// (0x00028778) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002d95f) bg_popup_trans_pane_g

0xd307,	// (0x0002b333) cell_image3_tool_bar_pane_ParamLimits

0xd307,	// (0x0002b333) cell_image3_tool_bar_pane

0xc809,	// (0x0002a835) cell_image3_tool_bar_pane_g1

0x9c03,	// (0x00027c2f) bg_popup_trans_pane_cp1

0xd31b,	// (0x0002b347) popup_image3_note_pane_t1

0xd329,	// (0x0002b355) popup_image3_note_pane_t2

0xd337,	// (0x0002b363) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002d972) popup_image3_note_pane_t

0xd345,	// (0x0002b371) popup_image3_note_pane_t3_copy1

0x6b46,	// (0x00024b72) bg_myfav_hc_instruction_pane_ParamLimits

0x6b46,	// (0x00024b72) bg_myfav_hc_instruction_pane

0x6b5e,	// (0x00024b8a) cell_myfav_contact_pane_ParamLimits

0x6b5e,	// (0x00024b8a) cell_myfav_contact_pane

0x6b78,	// (0x00024ba4) cell_myfav_contact_pane_cp1_ParamLimits

0x6b78,	// (0x00024ba4) cell_myfav_contact_pane_cp1

0x6b90,	// (0x00024bbc) cell_myfav_contact_pane_cp2_ParamLimits

0x6b90,	// (0x00024bbc) cell_myfav_contact_pane_cp2

0x6ba8,	// (0x00024bd4) cell_myfav_contact_pane_cp3_ParamLimits

0x6ba8,	// (0x00024bd4) cell_myfav_contact_pane_cp3

0x6bbf,	// (0x00024beb) cell_myfav_contact_pane_cp4_ParamLimits

0x6bbf,	// (0x00024beb) cell_myfav_contact_pane_cp4

0x6bd5,	// (0x00024c01) cell_myfav_contact_pane_cp5_ParamLimits

0x6bd5,	// (0x00024c01) cell_myfav_contact_pane_cp5

0x6be9,	// (0x00024c15) cell_myfav_contact_pane_cp6_ParamLimits

0x6be9,	// (0x00024c15) cell_myfav_contact_pane_cp6

0x6bfd,	// (0x00024c29) cell_myfav_contact_pane_cp7_ParamLimits

0x6bfd,	// (0x00024c29) cell_myfav_contact_pane_cp7

0xd353,	// (0x0002b37f) listscroll_gen_pane_cp05

0x6c15,	// (0x00024c41) main_myfav_hc_pane_g1_ParamLimits

0x6c15,	// (0x00024c41) main_myfav_hc_pane_g1

0x6c2b,	// (0x00024c57) main_myfav_hc_pane_g2_ParamLimits

0x6c2b,	// (0x00024c57) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002d979) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002d979) main_myfav_hc_pane_g

0x6c59,	// (0x00024c85) main_myfav_hc_pane_t1_ParamLimits

0x6c59,	// (0x00024c85) main_myfav_hc_pane_t1

0xd35c,	// (0x0002b388) main_myfav_hc_pane_t2_ParamLimits

0xd35c,	// (0x0002b388) main_myfav_hc_pane_t2

0xd36e,	// (0x0002b39a) main_myfav_hc_pane_t3_ParamLimits

0xd36e,	// (0x0002b39a) main_myfav_hc_pane_t3

0x6c70,	// (0x00024c9c) main_myfav_hc_pane_t4_ParamLimits

0x6c70,	// (0x00024c9c) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002d980) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002d980) main_myfav_hc_pane_t

0xc809,	// (0x0002a835) bg_myfav_hc_instruction_pane_g1

0xd38c,	// (0x0002b3b8) cell_myfav_contact_pane_g1_ParamLimits

0xd38c,	// (0x0002b3b8) cell_myfav_contact_pane_g1

0xd38c,	// (0x0002b3b8) cell_myfav_contact_pane_g2_ParamLimits

0xd38c,	// (0x0002b3b8) cell_myfav_contact_pane_g2

0xd398,	// (0x0002b3c4) cell_myfav_contact_pane_g3_ParamLimits

0xd398,	// (0x0002b3c4) cell_myfav_contact_pane_g3

0xcafd,	// (0x0002ab29) cell_myfav_contact_pane_g4_ParamLimits

0xcafd,	// (0x0002ab29) cell_myfav_contact_pane_g4

0xd3a5,	// (0x0002b3d1) cell_myfav_contact_pane_g5_ParamLimits

0xd3a5,	// (0x0002b3d1) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002d98b) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002d98b) cell_myfav_contact_pane_g

0x6c41,	// (0x00024c6d) main_myfav_hc_pane_g3_ParamLimits

0x6c41,	// (0x00024c6d) main_myfav_hc_pane_g3

0x0fbb,	// (0x0001efe7) popup_adpt_find_window

0x6c9a,	// (0x00024cc6) afind_page_pane_ParamLimits

0x6c9a,	// (0x00024cc6) afind_page_pane

0x6ca7,	// (0x00024cd3) aid_size_cell_afind_ParamLimits

0x6ca7,	// (0x00024cd3) aid_size_cell_afind

0x6cc1,	// (0x00024ced) bg_popup_sub_pane_cp09_ParamLimits

0x6cc1,	// (0x00024ced) bg_popup_sub_pane_cp09

0x6cce,	// (0x00024cfa) find_pane_cp01_ParamLimits

0x6cce,	// (0x00024cfa) find_pane_cp01

0xd3b1,	// (0x0002b3dd) grid_afind_control_pane_ParamLimits

0xd3b1,	// (0x0002b3dd) grid_afind_control_pane

0x6cdb,	// (0x00024d07) grid_afind_pane_ParamLimits

0x6cdb,	// (0x00024d07) grid_afind_pane

0x6cf7,	// (0x00024d23) cell_afind_pane_ParamLimits

0x6cf7,	// (0x00024d23) cell_afind_pane

0xc809,	// (0x0002a835) afind_page_pane_g1

0x6d3f,	// (0x00024d6b) afind_page_pane_g2

0x6d48,	// (0x00024d74) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002d996) afind_page_pane_g

0x6d51,	// (0x00024d7d) afind_page_pane_t1

0xd3c5,	// (0x0002b3f1) cell_afind_grid_control_pane_ParamLimits

0xd3c5,	// (0x0002b3f1) cell_afind_grid_control_pane

0xd158,	// (0x0002b184) bg_button_pane_cp69_ParamLimits

0xd158,	// (0x0002b184) bg_button_pane_cp69

0x6d71,	// (0x00024d9d) cell_afind_pane_g1_ParamLimits

0x6d71,	// (0x00024d9d) cell_afind_pane_g1

0x6d7e,	// (0x00024daa) cell_afind_pane_t1_ParamLimits

0x6d7e,	// (0x00024daa) cell_afind_pane_t1

0xa565,	// (0x00028591) bg_button_pane_cp72

0xd3d4,	// (0x0002b400) cell_afind_grid_control_pane_g1

0x511b,	// (0x00023147) aid_image_placing_area_ParamLimits

0x511b,	// (0x00023147) aid_image_placing_area

0xce26,	// (0x0002ae52) field_vitu_entry_pane_g1_ParamLimits

0xce26,	// (0x0002ae52) field_vitu_entry_pane_g1

0xce32,	// (0x0002ae5e) field_vitu_entry_pane_g2_ParamLimits

0xce32,	// (0x0002ae5e) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0002d847) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0002d847) field_vitu_entry_pane_g

0x67c6,	// (0x000247f2) cell_vitu_itu_pane_g1_ParamLimits

0x6808,	// (0x00024834) cell_vitu_itu_pane_t3_ParamLimits

0x6808,	// (0x00024834) cell_vitu_itu_pane_t3

0xd108,	// (0x0002b134) mp4_progress_pane_t1_ParamLimits

0xd121,	// (0x0002b14d) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002d8dc) mp4_progress_pane_t_ParamLimits

0xd13a,	// (0x0002b166) mup_progress_pane_cp04_ParamLimits

0x6c84,	// (0x00024cb0) main_myfav_hc_pane_t5_ParamLimits

0x6c84,	// (0x00024cb0) main_myfav_hc_pane_t5

0x0e7e,	// (0x0001eeaa) aid_zoom_text_primary

0x0fbb,	// (0x0001efe7) popup_adpt_find_window_ParamLimits

0x150e,	// (0x0001f53a) main_cam_set_pane

0x1ef7,	// (0x0001ff23) cam4_zoom_pane_ParamLimits

0x1ef7,	// (0x0001ff23) cam4_zoom_pane

0x6d90,	// (0x00024dbc) main_cam_set_pane_g1_ParamLimits

0x6d90,	// (0x00024dbc) main_cam_set_pane_g1

0x6d9e,	// (0x00024dca) main_cam_set_pane_g2_ParamLimits

0x6d9e,	// (0x00024dca) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002d99d) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002d99d) main_cam_set_pane_g

0x6daa,	// (0x00024dd6) main_cam_set_pane_t1_ParamLimits

0x6daa,	// (0x00024dd6) main_cam_set_pane_t1

0x6dc6,	// (0x00024df2) main_cset_listscroll_pane_ParamLimits

0x6dc6,	// (0x00024df2) main_cset_listscroll_pane

0x6df1,	// (0x00024e1d) main_cset_slider_pane_ParamLimits

0x6df1,	// (0x00024e1d) main_cset_slider_pane

0xd3e5,	// (0x0002b411) main_cset_list_pane_ParamLimits

0xd3e5,	// (0x0002b411) main_cset_list_pane

0xd3f5,	// (0x0002b421) scroll_pane_cp028

0x6e10,	// (0x00024e3c) aid_area_touch_slider

0x6e2c,	// (0x00024e58) cset_slider_pane

0x6e56,	// (0x00024e82) main_cset_slider_pane_g1

0x6e6b,	// (0x00024e97) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002d9a2) main_cset_slider_pane_g

0xd42e,	// (0x0002b45a) main_cset_slider_pane_t1

0x6f2d,	// (0x00024f59) main_cset_slider_pane_t2

0x6f47,	// (0x00024f73) main_cset_slider_pane_t3

0x6f61,	// (0x00024f8d) main_cset_slider_pane_t4

0x6f7b,	// (0x00024fa7) main_cset_slider_pane_t5

0x6f99,	// (0x00024fc5) main_cset_slider_pane_t6

0x6fb0,	// (0x00024fdc) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002d9c7) main_cset_slider_pane_t

0x70bc,	// (0x000250e8) cset_list_set_pane_ParamLimits

0x70bc,	// (0x000250e8) cset_list_set_pane

0x70d2,	// (0x000250fe) aid_position_infowindow_above

0x70da,	// (0x00025106) aid_position_infowindow_below

0xd4ce,	// (0x0002b4fa) cset_list_set_pane_g1_ParamLimits

0xd4ce,	// (0x0002b4fa) cset_list_set_pane_g1

0xd4da,	// (0x0002b506) cset_list_set_pane_g3_ParamLimits

0xd4da,	// (0x0002b506) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002d9e6) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002d9e6) cset_list_set_pane_g

0xd4e9,	// (0x0002b515) cset_list_set_pane_t1_ParamLimits

0xd4e9,	// (0x0002b515) cset_list_set_pane_t1

0xa34c,	// (0x00028378) list_highlight_pane_cp021_ParamLimits

0xa34c,	// (0x00028378) list_highlight_pane_cp021

0xb0b5,	// (0x000290e1) cset_slider_pane_g1

0xb0c7,	// (0x000290f3) cset_slider_pane_g2

0xb0be,	// (0x000290ea) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002d9eb) cset_slider_pane_g

0x23d1,	// (0x000203fd) aid_area_touch_cam4_zoom

0x23d9,	// (0x00020405) cam4_zoom_cont_pane

0x23e1,	// (0x0002040d) cam4_zoom_pane_g1

0x23e9,	// (0x00020415) cam4_zoom_pane_g2

0x23f1,	// (0x0002041d) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002d9f2) cam4_zoom_pane_g

0x23f9,	// (0x00020425) cam4_zoom_cont_pane_g1

0x2402,	// (0x0002042e) cam4_zoom_cont_pane_g2

0x240b,	// (0x00020437) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002d9f9) cam4_zoom_cont_pane_g

0x6a2e,	// (0x00024a5a) call4_image_pane_ParamLimits

0x6a2e,	// (0x00024a5a) call4_image_pane

0xd164,	// (0x0002b190) call4_windows_conf_pane_ParamLimits

0xd1a5,	// (0x0002b1d1) popup_call4_audio_in_window_ParamLimits

0xd1a5,	// (0x0002b1d1) popup_call4_audio_in_window

0x9c03,	// (0x00027c2f) bg_popup_call2_act_pane_cp02

0xd21b,	// (0x0002b247) call4_list_conf_pane

0xc809,	// (0x0002a835) call4_image_pane_g1

0xc809,	// (0x0002a835) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0002d708) call4_image_pane_g

0xd4fe,	// (0x0002b52a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4fe,	// (0x0002b52a) list_single_graphic_popup_conf4_pane

0x9c03,	// (0x00027c2f) list_highlight_pane_cp022

0xd511,	// (0x0002b53d) list_single_graphic_popup_conf4_pane_g1

0xac7a,	// (0x00028ca6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002da00) list_single_graphic_popup_conf4_pane_g

0xd519,	// (0x0002b545) list_single_graphic_popup_conf4_pane_t1

0x34cd,	// (0x000214f9) popup_vtel_slider_window_ParamLimits

0x34cd,	// (0x000214f9) popup_vtel_slider_window

0xd146,	// (0x0002b172) dialer2_ne_pane_t2_ParamLimits

0xd146,	// (0x0002b172) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002d8e1) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002d8e1) dialer2_ne_pane_t

0xa34c,	// (0x00028378) bg_popup_sub_pane_cp010_ParamLimits

0xa34c,	// (0x00028378) bg_popup_sub_pane_cp010

0x70e2,	// (0x0002510e) popup_vtel_slider_window_g1_ParamLimits

0x70e2,	// (0x0002510e) popup_vtel_slider_window_g1

0x70ee,	// (0x0002511a) popup_vtel_slider_window_g2_ParamLimits

0x70ee,	// (0x0002511a) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002da05) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002da05) popup_vtel_slider_window_g

0x7136,	// (0x00025162) vtel_slider_pane_ParamLimits

0x7136,	// (0x00025162) vtel_slider_pane

0x7145,	// (0x00025171) vtel_slider_pane_g1_ParamLimits

0x7145,	// (0x00025171) vtel_slider_pane_g1

0x7152,	// (0x0002517e) vtel_slider_pane_g2_ParamLimits

0x7152,	// (0x0002517e) vtel_slider_pane_g2

0x715f,	// (0x0002518b) vtel_slider_pane_g3_ParamLimits

0x715f,	// (0x0002518b) vtel_slider_pane_g3

0x7145,	// (0x00025171) vtel_slider_pane_g4_ParamLimits

0x7145,	// (0x00025171) vtel_slider_pane_g4

0x716c,	// (0x00025198) vtel_slider_pane_g5_ParamLimits

0x716c,	// (0x00025198) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002da0e) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002da0e) vtel_slider_pane_g

0x150e,	// (0x0001f53a) main_gallery2_pane

0x2115,	// (0x00020141) aid_size_row_itut2_dropdow_list_ParamLimits

0x2115,	// (0x00020141) aid_size_row_itut2_dropdow_list

0x2183,	// (0x000201af) grid_vitu2_function_top_pane_ParamLimits

0x2183,	// (0x000201af) grid_vitu2_function_top_pane

0x21dd,	// (0x00020209) popup_vitu2_dropdown_list_window_ParamLimits

0x21dd,	// (0x00020209) popup_vitu2_dropdown_list_window

0x21fd,	// (0x00020229) popup_vitu2_match_list_window

0x2414,	// (0x00020440) cell_vitu2_function_top_pane_ParamLimits

0x2414,	// (0x00020440) cell_vitu2_function_top_pane

0x242e,	// (0x0002045a) cell_vitu2_function_top_pane_cp01_ParamLimits

0x242e,	// (0x0002045a) cell_vitu2_function_top_pane_cp01

0x244a,	// (0x00020476) cell_vitu2_function_top_wide_pane_ParamLimits

0x244a,	// (0x00020476) cell_vitu2_function_top_wide_pane

0x150e,	// (0x0001f53a) bg_button_pane_cp012

0x2466,	// (0x00020492) cell_vitu2_function_top_pane_g1

0x247a,	// (0x000204a6) bg_button_pane_cp013_ParamLimits

0x247a,	// (0x000204a6) bg_button_pane_cp013

0x7187,	// (0x000251b3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7187,	// (0x000251b3) cell_vitu2_function_top_wide_pane_g1

0x10b2,	// (0x0001f0de) bg_popup_sub_pane_cp20

0x2496,	// (0x000204c2) list_vitu2_match_list_pane

0xd2cf,	// (0x0002b2fb) bg_popup_sub_pane_cp20_g1

0xd2d7,	// (0x0002b303) bg_popup_sub_pane_cp20_g2

0xa76c,	// (0x00028798) bg_popup_sub_pane_cp20_g3

0xd2df,	// (0x0002b30b) bg_popup_sub_pane_cp20_g4

0xa74c,	// (0x00028778) bg_popup_sub_pane_cp20_g5

0xd52f,	// (0x0002b55b) bg_popup_sub_pane_cp20_g6

0xd2ef,	// (0x0002b31b) bg_popup_sub_pane_cp20_g7

0xd2f7,	// (0x0002b323) bg_popup_sub_pane_cp20_g8

0xd2ff,	// (0x0002b32b) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002da19) bg_popup_sub_pane_cp20_g

0x24ae,	// (0x000204da) list_vitu2_match_list_item_pane_ParamLimits

0x24ae,	// (0x000204da) list_vitu2_match_list_item_pane

0x24c0,	// (0x000204ec) list_vitu2_match_list_item_pane_t1

0x10c0,	// (0x0001f0ec) bg_popup_sub_pane_cp21

0x24ce,	// (0x000204fa) grid_vitu2_dropdown_list_pane

0x24d6,	// (0x00020502) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x24d6,	// (0x00020502) cell_vitu2_dropdown_list_char_pane

0x24f7,	// (0x00020523) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x24f7,	// (0x00020523) cell_vitu2_dropdown_list_ctrl_pane

0xd537,	// (0x0002b563) cell_vitu2_dropdown_list_char_pane_g1

0xd540,	// (0x0002b56c) cell_vitu2_dropdown_list_char_pane_g2

0xd549,	// (0x0002b575) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002da36) cell_vitu2_dropdown_list_char_pane_g

0x2523,	// (0x0002054f) cell_vitu2_dropdown_list_char_pane_t1

0x71e3,	// (0x0002520f) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x71e3,	// (0x0002520f) cell_vitu2_dropdown_list_ctrl_pane_g1

0x71f3,	// (0x0002521f) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x71f3,	// (0x0002521f) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7204,	// (0x00025230) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7204,	// (0x00025230) cell_vitu2_dropdown_list_ctrl_pane_g3

0x2531,	// (0x0002055d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x2531,	// (0x0002055d) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1f67,	// (0x0001ff93) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1f67,	// (0x0001ff93) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002da3d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002da3d) cell_vitu2_dropdown_list_ctrl_pane_g

0x7214,	// (0x00025240) aid_size_cell_gallery2_ParamLimits

0x7214,	// (0x00025240) aid_size_cell_gallery2

0x722e,	// (0x0002525a) grid_gallery2_pane_ParamLimits

0x722e,	// (0x0002525a) grid_gallery2_pane

0x664f,	// (0x0002467b) scroll_pane_cp029_ParamLimits

0x664f,	// (0x0002467b) scroll_pane_cp029

0x7245,	// (0x00025271) cell_gallery2_pane_ParamLimits

0x7245,	// (0x00025271) cell_gallery2_pane

0xd552,	// (0x0002b57e) cell_gallery2_pane_g2

0xe98e,	// (0x0002c9ba) cell_gallery2_pane_g3

0xd55a,	// (0x0002b586) cell_gallery2_pane_g4

0xd562,	// (0x0002b58e) cell_gallery2_pane_g5

0xa513,	// (0x0002853f) grid_highlight_pane_cp10

0x21fd,	// (0x00020229) popup_vitu2_match_list_window_ParamLimits

0x2211,	// (0x0002023d) popup_vitu2_query_window_ParamLimits

0x2211,	// (0x0002023d) popup_vitu2_query_window

0x10c0,	// (0x0001f0ec) bg_vitu2_candi_button_pane

0xd537,	// (0x0002b563) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd540,	// (0x0002b56c) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd549,	// (0x0002b575) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7299,	// (0x000252c5) bg_button_pane_cp015

0x72ab,	// (0x000252d7) bg_button_pane_cp016

0x72be,	// (0x000252ea) bg_button_pane_cp017

0xc3f8,	// (0x0002a424) bg_popup_sub_pane_cp22

0xd56a,	// (0x0002b596) popup_vitu2_query_window_g1

0x7303,	// (0x0002532f) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002da48) popup_vitu2_query_window_g

0x7320,	// (0x0002534c) popup_vitu2_query_window_t1_ParamLimits

0x7320,	// (0x0002534c) popup_vitu2_query_window_t1

0x7353,	// (0x0002537f) popup_vitu2_query_window_t2_ParamLimits

0x7353,	// (0x0002537f) popup_vitu2_query_window_t2

0x7365,	// (0x00025391) popup_vitu2_query_window_t3_ParamLimits

0x7365,	// (0x00025391) popup_vitu2_query_window_t3

0x738d,	// (0x000253b9) popup_vitu2_query_window_t4_ParamLimits

0x738d,	// (0x000253b9) popup_vitu2_query_window_t4

0x73ae,	// (0x000253da) popup_vitu2_query_window_t5_ParamLimits

0x73ae,	// (0x000253da) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002da4f) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002da4f) popup_vitu2_query_window_t

0xd3dd,	// (0x0002b409) main_cset_text_pane

0x6e10,	// (0x00024e3c) aid_area_touch_slider_ParamLimits

0x6e2c,	// (0x00024e58) cset_slider_pane_ParamLimits

0x6e56,	// (0x00024e82) main_cset_slider_pane_g1_ParamLimits

0x6e6b,	// (0x00024e97) main_cset_slider_pane_g2_ParamLimits

0xd3fe,	// (0x0002b42a) main_cset_slider_pane_g3_ParamLimits

0xd3fe,	// (0x0002b42a) main_cset_slider_pane_g3

0x6e80,	// (0x00024eac) main_cset_slider_pane_g4_ParamLimits

0x6e80,	// (0x00024eac) main_cset_slider_pane_g4

0x6e8f,	// (0x00024ebb) main_cset_slider_pane_g5_ParamLimits

0x6e8f,	// (0x00024ebb) main_cset_slider_pane_g5

0x6e9d,	// (0x00024ec9) main_cset_slider_pane_g6_ParamLimits

0x6e9d,	// (0x00024ec9) main_cset_slider_pane_g6

0xf976,	// (0x0002d9a2) main_cset_slider_pane_g_ParamLimits

0xd42e,	// (0x0002b45a) main_cset_slider_pane_t1_ParamLimits

0x6f2d,	// (0x00024f59) main_cset_slider_pane_t2_ParamLimits

0x6f47,	// (0x00024f73) main_cset_slider_pane_t3_ParamLimits

0x6f61,	// (0x00024f8d) main_cset_slider_pane_t4_ParamLimits

0x6f7b,	// (0x00024fa7) main_cset_slider_pane_t5_ParamLimits

0x6f99,	// (0x00024fc5) main_cset_slider_pane_t6_ParamLimits

0x6fb0,	// (0x00024fdc) main_cset_slider_pane_t7_ParamLimits

0x6fde,	// (0x0002500a) main_cset_slider_pane_t8_ParamLimits

0x6fde,	// (0x0002500a) main_cset_slider_pane_t8

0x7006,	// (0x00025032) main_cset_slider_pane_t9_ParamLimits

0x7006,	// (0x00025032) main_cset_slider_pane_t9

0x702e,	// (0x0002505a) main_cset_slider_pane_t10_ParamLimits

0x702e,	// (0x0002505a) main_cset_slider_pane_t10

0x7056,	// (0x00025082) main_cset_slider_pane_t11_ParamLimits

0x7056,	// (0x00025082) main_cset_slider_pane_t11

0x7080,	// (0x000250ac) main_cset_slider_pane_t12_ParamLimits

0x7080,	// (0x000250ac) main_cset_slider_pane_t12

0x709d,	// (0x000250c9) main_cset_slider_pane_t13_ParamLimits

0x709d,	// (0x000250c9) main_cset_slider_pane_t13

0xf99b,	// (0x0002d9c7) main_cset_slider_pane_t_ParamLimits

0x9c03,	// (0x00027c2f) bg_popup_sub_pane_cp011

0xd576,	// (0x0002b5a2) main_cset_text_pane_g1

0xd57e,	// (0x0002b5aa) main_cset_text_pane_t1

0xd58c,	// (0x0002b5b8) main_cset_text_pane_t2

0xd5b5,	// (0x0002b5e1) main_cset_text_pane_t3

0xd5c3,	// (0x0002b5ef) main_cset_text_pane_t4

0xd5d1,	// (0x0002b5fd) main_cset_text_pane_t5

0xd5df,	// (0x0002b60b) main_cset_text_pane_t6

0xd5ed,	// (0x0002b619) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002da5e) main_cset_text_pane_t

0x10c0,	// (0x0001f0ec) main_cam4_burst_pane

0x10c0,	// (0x0001f0ec) main_cam5_pane

0x6d5f,	// (0x00024d8b) bg_button_pane_cp019

0x6d68,	// (0x00024d94) bg_button_pane_cp020

0xd40a,	// (0x0002b436) main_cset_slider_pane_g7_ParamLimits

0xd40a,	// (0x0002b436) main_cset_slider_pane_g7

0xd416,	// (0x0002b442) main_cset_slider_pane_g8_ParamLimits

0xd416,	// (0x0002b442) main_cset_slider_pane_g8

0x6eb1,	// (0x00024edd) main_cset_slider_pane_g9_ParamLimits

0x6eb1,	// (0x00024edd) main_cset_slider_pane_g9

0x6ebd,	// (0x00024ee9) main_cset_slider_pane_g10_ParamLimits

0x6ebd,	// (0x00024ee9) main_cset_slider_pane_g10

0x6ec9,	// (0x00024ef5) main_cset_slider_pane_g11_ParamLimits

0x6ec9,	// (0x00024ef5) main_cset_slider_pane_g11

0x6ed5,	// (0x00024f01) main_cset_slider_pane_g12_ParamLimits

0x6ed5,	// (0x00024f01) main_cset_slider_pane_g12

0x6ee1,	// (0x00024f0d) main_cset_slider_pane_g13_ParamLimits

0x6ee1,	// (0x00024f0d) main_cset_slider_pane_g13

0x6eed,	// (0x00024f19) main_cset_slider_pane_g14_ParamLimits

0x6eed,	// (0x00024f19) main_cset_slider_pane_g14

0x6ef9,	// (0x00024f25) main_cset_slider_pane_g15_ParamLimits

0x6ef9,	// (0x00024f25) main_cset_slider_pane_g15

0xd45c,	// (0x0002b488) main_cset_slider_pane_t14_ParamLimits

0xd45c,	// (0x0002b488) main_cset_slider_pane_t14

0xd495,	// (0x0002b4c1) main_cset_slider_pane_t15_ParamLimits

0xd495,	// (0x0002b4c1) main_cset_slider_pane_t15

0x7425,	// (0x00025451) aid_cam4_burst_size_cell_ParamLimits

0x7425,	// (0x00025451) aid_cam4_burst_size_cell

0x7441,	// (0x0002546d) grid_cam4_burst_pane_ParamLimits

0x7441,	// (0x0002546d) grid_cam4_burst_pane

0x7471,	// (0x0002549d) linegrid_cam4_burst_pane_ParamLimits

0x7471,	// (0x0002549d) linegrid_cam4_burst_pane

0x7491,	// (0x000254bd) scroll_pane_cp30_ParamLimits

0x7491,	// (0x000254bd) scroll_pane_cp30

0x749d,	// (0x000254c9) cell_cam4_burst_pane_ParamLimits

0x749d,	// (0x000254c9) cell_cam4_burst_pane

0xd5fb,	// (0x0002b627) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5fb,	// (0x0002b627) linegrid_cam4_burst_pane_g1

0x74d9,	// (0x00025505) linegrid_cam4_burst_pane_g2_ParamLimits

0x74d9,	// (0x00025505) linegrid_cam4_burst_pane_g2

0xd608,	// (0x0002b634) linegrid_cam4_burst_pane_g3_ParamLimits

0xd608,	// (0x0002b634) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002da6d) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002da6d) linegrid_cam4_burst_pane_g

0x74ea,	// (0x00025516) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x74ea,	// (0x00025516) linegrid_cam4_burst_pane_g3_copy1

0xd615,	// (0x0002b641) linegrid_cam4_burst_pane_g4_ParamLimits

0xd615,	// (0x0002b641) linegrid_cam4_burst_pane_g4

0x7504,	// (0x00025530) linegrid_cam4_burst_pane_g5_ParamLimits

0x7504,	// (0x00025530) linegrid_cam4_burst_pane_g5

0x7515,	// (0x00025541) linegrid_cam4_burst_pane_g6_ParamLimits

0x7515,	// (0x00025541) linegrid_cam4_burst_pane_g6

0xd622,	// (0x0002b64e) linegrid_cam4_burst_pane_g7_ParamLimits

0xd622,	// (0x0002b64e) linegrid_cam4_burst_pane_g7

0x7526,	// (0x00025552) cell_cam4_burst_pane_g1

0xd63b,	// (0x0002b667) main_cam5_pane_t1_ParamLimits

0xd63b,	// (0x0002b667) main_cam5_pane_t1

0xd64d,	// (0x0002b679) main_cam5_pane_t2_ParamLimits

0xd64d,	// (0x0002b679) main_cam5_pane_t2

0xd65f,	// (0x0002b68b) main_cam5_pane_t3_ParamLimits

0xd65f,	// (0x0002b68b) main_cam5_pane_t3

0xd671,	// (0x0002b69d) main_cam5_pane_t4_ParamLimits

0xd671,	// (0x0002b69d) main_cam5_pane_t4

0xd689,	// (0x0002b6b5) main_cam5_pane_t5_ParamLimits

0xd689,	// (0x0002b6b5) main_cam5_pane_t5

0xd6a9,	// (0x0002b6d5) main_cam5_pane_t6_ParamLimits

0xd6a9,	// (0x0002b6d5) main_cam5_pane_t6

0xd6bd,	// (0x0002b6e9) main_cam5_pane_t7_ParamLimits

0xd6bd,	// (0x0002b6e9) main_cam5_pane_t7

0xd6cf,	// (0x0002b6fb) main_cam5_pane_t8_ParamLimits

0xd6cf,	// (0x0002b6fb) main_cam5_pane_t8

0xd6eb,	// (0x0002b717) main_cam5_pane_t9_ParamLimits

0xd6eb,	// (0x0002b717) main_cam5_pane_t9

0xd6fd,	// (0x0002b729) main_cam5_pane_t10_ParamLimits

0xd6fd,	// (0x0002b729) main_cam5_pane_t10

0xd70f,	// (0x0002b73b) main_cam5_pane_t11_ParamLimits

0xd70f,	// (0x0002b73b) main_cam5_pane_t11

0xd721,	// (0x0002b74d) main_cam5_pane_t12_ParamLimits

0xd721,	// (0x0002b74d) main_cam5_pane_t12

0xd736,	// (0x0002b762) main_cam5_pane_t13_ParamLimits

0xd736,	// (0x0002b762) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002da79) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002da79) main_cam5_pane_t

0x1071,	// (0x0001f09d) popup_scut_keymap_window_ParamLimits

0x1071,	// (0x0001f09d) popup_scut_keymap_window

0x7539,	// (0x00025565) aid_size_cell_brow_shortcut

0xa513,	// (0x0002853f) bg_popup_window_pane_cp010

0x7545,	// (0x00025571) grid_scut_pane

0x7551,	// (0x0002557d) cell_scut_pane_ParamLimits

0x7551,	// (0x0002557d) cell_scut_pane

0x7568,	// (0x00025594) cell_scut_pane_g1

0xd753,	// (0x0002b77f) cell_scut_pane_t1

0xd762,	// (0x0002b78e) cell_scut_pane_t2

0x7571,	// (0x0002559d) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002da94) cell_scut_pane_t

0x5ea8,	// (0x00023ed4) main_mup3_pane_g8_ParamLimits

0x5ea8,	// (0x00023ed4) main_mup3_pane_g8

0x2123,	// (0x0002014f) area_vitu2_query_pane_ParamLimits

0x2123,	// (0x0002014f) area_vitu2_query_pane

0x72d1,	// (0x000252fd) input_focus_pane_cp08

0xd771,	// (0x0002b79d) area_vitu2_query_pane_g1

0x757f,	// (0x000255ab) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002da9b) area_vitu2_query_pane_g

0x7590,	// (0x000255bc) area_vitu2_query_pane_t1_ParamLimits

0x7590,	// (0x000255bc) area_vitu2_query_pane_t1

0x75a4,	// (0x000255d0) area_vitu2_query_pane_t2_ParamLimits

0x75a4,	// (0x000255d0) area_vitu2_query_pane_t2

0x75b8,	// (0x000255e4) area_vitu2_query_pane_t3_ParamLimits

0x75b8,	// (0x000255e4) area_vitu2_query_pane_t3

0xd77d,	// (0x0002b7a9) area_vitu2_query_pane_t4_ParamLimits

0xd77d,	// (0x0002b7a9) area_vitu2_query_pane_t4

0xd7a5,	// (0x0002b7d1) area_vitu2_query_pane_t5_ParamLimits

0xd7a5,	// (0x0002b7d1) area_vitu2_query_pane_t5

0xd7cd,	// (0x0002b7f9) area_vitu2_query_pane_t6_ParamLimits

0xd7cd,	// (0x0002b7f9) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002daa0) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002daa0) area_vitu2_query_pane_t

0x75e0,	// (0x0002560c) bg_button_pane_cp018

0x75ee,	// (0x0002561a) bg_button_pane_cp021

0x75fa,	// (0x00025626) bg_button_pane_cp022

0x760b,	// (0x00025637) input_focus_pane_cp09

0xadb6,	// (0x00028de2) aid_size_touch_mv_arrow_left

0xaddf,	// (0x00028e0b) aid_size_touch_mv_arrow_right

0x6f11,	// (0x00024f3d) main_cset_slider_pane_g16_ParamLimits

0x6f11,	// (0x00024f3d) main_cset_slider_pane_g16

0x6f1f,	// (0x00024f4b) main_cset_slider_pane_g17_ParamLimits

0x6f1f,	// (0x00024f4b) main_cset_slider_pane_g17

0x7526,	// (0x00025552) cell_cam4_burst_pane_g1_ParamLimits

0x9c03,	// (0x00027c2f) compa_mode_pane

0x70fa,	// (0x00025126) popup_vtel_slider_window_g3_ParamLimits

0x70fa,	// (0x00025126) popup_vtel_slider_window_g3

0x710e,	// (0x0002513a) popup_vtel_slider_window_g4_ParamLimits

0x710e,	// (0x0002513a) popup_vtel_slider_window_g4

0x7122,	// (0x0002514e) popup_vtel_slider_window_t1_ParamLimits

0x7122,	// (0x0002514e) popup_vtel_slider_window_t1

0x10c0,	// (0x0001f0ec) main_cl_pane

0x15ac,	// (0x0001f5d8) popup_imed_adjust2_window_ParamLimits

0xc3f8,	// (0x0002a424) bg_tb_trans_pane_cp05_ParamLimits

0xcd5b,	// (0x0002ad87) popup_imed_adjust2_window_g1_ParamLimits

0xcd6a,	// (0x0002ad96) popup_imed_adjust2_window_g2_ParamLimits

0xcd6a,	// (0x0002ad96) popup_imed_adjust2_window_g2

0xcd76,	// (0x0002ada2) popup_imed_adjust2_window_g3_ParamLimits

0xcd76,	// (0x0002ada2) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0002d80b) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0002d80b) popup_imed_adjust2_window_g

0xcd82,	// (0x0002adae) popup_imed_adjust2_window_t1_ParamLimits

0xcd9a,	// (0x0002adc6) slider_imed_adjust_pane_ParamLimits

0xcdae,	// (0x0002adda) slider_imed_adjust_pane_g1_ParamLimits

0xcdbe,	// (0x0002adea) slider_imed_adjust_pane_g2_ParamLimits

0xcdce,	// (0x0002adfa) slider_imed_adjust_pane_g3_ParamLimits

0xcddf,	// (0x0002ae0b) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0002d812) slider_imed_adjust_pane_g_ParamLimits

0x1ea0,	// (0x0001fecc) aid_touch_area_cam4_ParamLimits

0x1ea0,	// (0x0001fecc) aid_touch_area_cam4

0x1eb0,	// (0x0001fedc) battery_pane_cp01

0x1f37,	// (0x0001ff63) main_camera4_pane_g6_ParamLimits

0x1f37,	// (0x0001ff63) main_camera4_pane_g6

0x1f55,	// (0x0001ff81) main_camera4_pane_t2_ParamLimits

0x1f55,	// (0x0001ff81) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002d915) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002d915) main_camera4_pane_t

0x1fc6,	// (0x0001fff2) aid_touch_area_vid4_ParamLimits

0x1fc6,	// (0x0001fff2) aid_touch_area_vid4

0x2006,	// (0x00020032) main_video4_pane_g5_ParamLimits

0x2006,	// (0x00020032) main_video4_pane_g5

0x202a,	// (0x00020056) vid4_progress_pane_ParamLimits

0x202a,	// (0x00020056) vid4_progress_pane

0xd422,	// (0x0002b44e) main_cset_slider_pane_g18_ParamLimits

0xd422,	// (0x0002b44e) main_cset_slider_pane_g18

0xd62f,	// (0x0002b65b) cell_cam4_burst_pane_g2_ParamLimits

0xd62f,	// (0x0002b65b) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002da74) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002da74) cell_cam4_burst_pane_g

0x761c,	// (0x00025648) bg_cl_pane_ParamLimits

0x761c,	// (0x00025648) bg_cl_pane

0x7628,	// (0x00025654) cl_header_pane_ParamLimits

0x7628,	// (0x00025654) cl_header_pane

0x7634,	// (0x00025660) cl_listscroll_pane_ParamLimits

0x7634,	// (0x00025660) cl_listscroll_pane

0xd819,	// (0x0002b845) bg_cl_pane_g1

0xd821,	// (0x0002b84d) bg_cl_pane_g2

0xd829,	// (0x0002b855) bg_cl_pane_g3

0xd831,	// (0x0002b85d) bg_cl_pane_g4

0xd839,	// (0x0002b865) bg_cl_pane_g5

0xd841,	// (0x0002b86d) bg_cl_pane_g6

0xd849,	// (0x0002b875) bg_cl_pane_g7

0xd851,	// (0x0002b87d) bg_cl_pane_g8

0xd859,	// (0x0002b885) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002daaf) bg_cl_pane_g

0x7640,	// (0x0002566c) aid_height_cl_leading_ParamLimits

0x7640,	// (0x0002566c) aid_height_cl_leading

0x764c,	// (0x00025678) aid_height_cl_text_ParamLimits

0x764c,	// (0x00025678) aid_height_cl_text

0xd247,	// (0x0002b273) bg_cl_header_pane_ParamLimits

0xd247,	// (0x0002b273) bg_cl_header_pane

0x7664,	// (0x00025690) cl_header_pane_g1_ParamLimits

0x7664,	// (0x00025690) cl_header_pane_g1

0x7671,	// (0x0002569d) cl_header_pane_t1_ParamLimits

0x7671,	// (0x0002569d) cl_header_pane_t1

0xd861,	// (0x0002b88d) cl_list_pane

0xd3f5,	// (0x0002b421) hc_scroll_pane_cp01

0xa74c,	// (0x00028778) bg_cl_header_pane_g1

0xd2cf,	// (0x0002b2fb) bg_cl_header_pane_g2

0xa76c,	// (0x00028798) bg_cl_header_pane_g3

0xd2df,	// (0x0002b30b) bg_cl_header_pane_g4

0xd2d7,	// (0x0002b303) bg_cl_header_pane_g5

0xd52f,	// (0x0002b55b) bg_cl_header_pane_g6

0xd2f7,	// (0x0002b323) bg_cl_header_pane_g7

0xd2ff,	// (0x0002b32b) bg_cl_header_pane_g8

0xd2ef,	// (0x0002b31b) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002dac2) bg_cl_header_pane_g

0x7683,	// (0x000256af) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7683,	// (0x000256af) hc_cl_list_double_graphic_heading_pane

0x7694,	// (0x000256c0) hc_cl_list_single_graphic_pane_ParamLimits

0x7694,	// (0x000256c0) hc_cl_list_single_graphic_pane

0x76ad,	// (0x000256d9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x76ad,	// (0x000256d9) hc_cl_list_single_graphic_pane_g1

0x76b9,	// (0x000256e5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76b9,	// (0x000256e5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002dad5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002dad5) hc_cl_list_single_graphic_pane_g

0x76cd,	// (0x000256f9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76cd,	// (0x000256f9) hc_cl_list_single_graphic_pane_t1

0x76ad,	// (0x000256d9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x76ad,	// (0x000256d9) hc_cl_list_double_graphic_heading_pane_g1

0x76e2,	// (0x0002570e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76e2,	// (0x0002570e) hc_cl_list_double_graphic_heading_pane_g2

0x76f6,	// (0x00025722) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x76f6,	// (0x00025722) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002dada) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002dada) hc_cl_list_double_graphic_heading_pane_g

0x770a,	// (0x00025736) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x770a,	// (0x00025736) hc_cl_list_double_graphic_heading_pane_t1

0x771f,	// (0x0002574b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x771f,	// (0x0002574b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002dae1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002dae1) hc_cl_list_double_graphic_heading_pane_t

0x2555,	// (0x00020581) vid4_progress_pane_g1

0x2565,	// (0x00020591) vid4_progress_pane_g2

0x2575,	// (0x000205a1) vid4_progress_pane_g3

0x2587,	// (0x000205b3) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002dae6) vid4_progress_pane_g

0x259f,	// (0x000205cb) vid4_progress_pane_t1

0x25b5,	// (0x000205e1) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002daf1) vid4_progress_pane_t

0x25df,	// (0x0002060b) wait_bar_pane_cp07

0xc5f3,	// (0x0002a61f) blid_firmament_pane_ParamLimits

0xc636,	// (0x0002a662) popup_blid_sat_info2_window_g1

0xc65a,	// (0x0002a686) popup_blid_sat_info2_window_t3

0xc668,	// (0x0002a694) popup_blid_sat_info2_window_t4

0xc676,	// (0x0002a6a2) popup_blid_sat_info2_window_t5

0xc684,	// (0x0002a6b0) popup_blid_sat_info2_window_t6

0xc694,	// (0x0002a6c0) popup_blid_sat_info2_window_t7

0xc6a2,	// (0x0002a6ce) popup_blid_sat_info2_window_t8

0xc6b0,	// (0x0002a6dc) popup_blid_sat_info2_window_t9

0xc6be,	// (0x0002a6ea) popup_blid_sat_info2_window_t10

0xc789,	// (0x0002a7b5) aid_firma_cardinal_ParamLimits

0xc79d,	// (0x0002a7c9) blid_firmament_pane_t1_ParamLimits

0xc7b4,	// (0x0002a7e0) blid_firmament_pane_t2_ParamLimits

0xc7cb,	// (0x0002a7f7) blid_firmament_pane_t3_ParamLimits

0xc7e2,	// (0x0002a80e) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0002d6ff) blid_firmament_pane_t_ParamLimits

0xc7f9,	// (0x0002a825) blid_sat_info_pane_ParamLimits

0x150e,	// (0x0001f53a) main_cam_set_pane_ParamLimits

0x65e8,	// (0x00024614) aid_size_cell_colour_35_ParamLimits

0x6602,	// (0x0002462e) aid_size_cell_colour_112_ParamLimits

0x6619,	// (0x00024645) aid_size_cell_effect_ParamLimits

0xa34c,	// (0x00028378) bg_tb_trans_pane_cp02_ParamLimits

0xb024,	// (0x00029050) heading_imed_pane_ParamLimits

0x6633,	// (0x0002465f) listscroll_imed_pane_ParamLimits

0xba1e,	// (0x00029a4a) popup_call2_audio_first_window_g5_ParamLimits

0xba1e,	// (0x00029a4a) popup_call2_audio_first_window_g5

0x1d2b,	// (0x0001fd57) aid_size_touch_image3_arrow_left_ParamLimits

0x1d2b,	// (0x0001fd57) aid_size_touch_image3_arrow_left

0x1d41,	// (0x0001fd6d) aid_size_touch_image3_arrow_right_ParamLimits

0x1d41,	// (0x0001fd6d) aid_size_touch_image3_arrow_right

0x25ca,	// (0x000205f6) vid4_progress_pane_t3

0x68d1,	// (0x000248fd) main_hwr_training_symbol_option_pane_ParamLimits

0x68d1,	// (0x000248fd) main_hwr_training_symbol_option_pane

0xd048,	// (0x0002b074) popup_hwr_training_preview_window_ParamLimits

0xd048,	// (0x0002b074) popup_hwr_training_preview_window

0x1a29,	// (0x0001fa55) hwr_training_navi_pane_g5_ParamLimits

0x1a29,	// (0x0001fa55) hwr_training_navi_pane_g5

0xd2bd,	// (0x0002b2e9) popup_char_count_window

0x10b2,	// (0x0001f0de) bg_popup_sub_pane_cp20_ParamLimits

0x2496,	// (0x000204c2) list_vitu2_match_list_pane_ParamLimits

0x24a2,	// (0x000204ce) vitu2_page_scroll_pane_ParamLimits

0x24a2,	// (0x000204ce) vitu2_page_scroll_pane

0xd88c,	// (0x0002b8b8) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd88c,	// (0x0002b8b8) list_single_hwr_training_symbol_option_pane

0xd89f,	// (0x0002b8cb) list_single_hwr_training_symbol_option_pane_g1

0xd8a7,	// (0x0002b8d3) list_single_hwr_training_symbol_option_pane_t1

0xd8b5,	// (0x0002b8e1) bg_button_pane_cp023

0xd8be,	// (0x0002b8ea) bg_button_pane_cp024

0x7763,	// (0x0002578f) vitu2_page_scroll_pane_g1

0x776b,	// (0x00025797) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002daf8) vitu2_page_scroll_pane_g

0x7773,	// (0x0002579f) vitu2_page_scroll_pane_t1

0xc553,	// (0x0002a57f) popup_char_count_window_g1

0xd8f9,	// (0x0002b925) popup_char_count_window_g2

0xd902,	// (0x0002b92e) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002dafd) popup_char_count_window_g

0xd90b,	// (0x0002b937) popup_char_count_window_t1

0x10c0,	// (0x0001f0ec) main_vded2_pane

0xcd47,	// (0x0002ad73) aid_size_cell_imed_line

0xcd51,	// (0x0002ad7d) grid_imed_line_width_pane

0x2098,	// (0x000200c4) vid4_indicators_pane_g4

0xd919,	// (0x0002b945) cell_imed_line_width_pane_ParamLimits

0xd919,	// (0x0002b945) cell_imed_line_width_pane

0xd92d,	// (0x0002b959) cell_imed_line_width_pane_g1

0xd8f1,	// (0x0002b91d) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002db04) cell_imed_line_width_pane_g

0x7782,	// (0x000257ae) main_vded2_pane_g1_ParamLimits

0x7782,	// (0x000257ae) main_vded2_pane_g1

0x778f,	// (0x000257bb) main_vded2_pane_g2_ParamLimits

0x778f,	// (0x000257bb) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002db09) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002db09) main_vded2_pane_g

0x779d,	// (0x000257c9) vded2_slider_pane_ParamLimits

0x779d,	// (0x000257c9) vded2_slider_pane

0x77aa,	// (0x000257d6) aid_size_touch_vded2_end

0x77b4,	// (0x000257e0) aid_size_touch_vded2_playhead

0xd936,	// (0x0002b962) aid_size_touch_vded2_start

0xd93e,	// (0x0002b96a) vded2_slider_bg_pane

0xd947,	// (0x0002b973) vded2_slider_pane_g1

0xd950,	// (0x0002b97c) vded2_slider_pane_g2

0x77bc,	// (0x000257e8) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002db0e) vded2_slider_pane_g

0xd958,	// (0x0002b984) vded2_slider_bg_pane_g1

0xd961,	// (0x0002b98d) vded2_slider_bg_pane_g2

0xd974,	// (0x0002b9a0) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0002db15) vded2_slider_bg_pane_g

0x4e85,	// (0x00022eb1) aid_postcard_touch_down_pane_ParamLimits

0x4e85,	// (0x00022eb1) aid_postcard_touch_down_pane

0x4e95,	// (0x00022ec1) aid_postcard_touch_up_pane_ParamLimits

0x4e95,	// (0x00022ec1) aid_postcard_touch_up_pane

0x10c0,	// (0x0001f0ec) main_blid2_pane

0x1537,	// (0x0001f563) popup_blid2_search_window

0x9c03,	// (0x00027c2f) blid2_gps_pane

0x9c03,	// (0x00027c2f) blid2_navig_pane

0x9c03,	// (0x00027c2f) blid2_search_pane

0x9c03,	// (0x00027c2f) blid2_tripm_pane

0x77c5,	// (0x000257f1) blid2_search_pane_g1_ParamLimits

0x77c5,	// (0x000257f1) blid2_search_pane_g1

0x77d5,	// (0x00025801) blid2_search_pane_t1_ParamLimits

0x77d5,	// (0x00025801) blid2_search_pane_t1

0x77e7,	// (0x00025813) aid_size_cell_blid2_gps_ParamLimits

0x77e7,	// (0x00025813) aid_size_cell_blid2_gps

0x77f7,	// (0x00025823) blid2_gps_pane_g1_ParamLimits

0x77f7,	// (0x00025823) blid2_gps_pane_g1

0x7803,	// (0x0002582f) grid_blid2_satellite_pane_ParamLimits

0x7803,	// (0x0002582f) grid_blid2_satellite_pane

0x7813,	// (0x0002583f) blid2_navig_pane_g1_ParamLimits

0x7813,	// (0x0002583f) blid2_navig_pane_g1

0x781f,	// (0x0002584b) blid2_navig_pane_t1_ParamLimits

0x781f,	// (0x0002584b) blid2_navig_pane_t1

0x7831,	// (0x0002585d) blid2_navig_pane_t2_ParamLimits

0x7831,	// (0x0002585d) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0002db1c) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0002db1c) blid2_navig_pane_t

0x7843,	// (0x0002586f) blid2_navig_ring_pane_ParamLimits

0x7843,	// (0x0002586f) blid2_navig_ring_pane

0x7853,	// (0x0002587f) blid2_speed_pane_ParamLimits

0x7853,	// (0x0002587f) blid2_speed_pane

0x785f,	// (0x0002588b) blid2_tripm_pane_g1_ParamLimits

0x785f,	// (0x0002588b) blid2_tripm_pane_g1

0x786f,	// (0x0002589b) blid2_tripm_pane_g2_ParamLimits

0x786f,	// (0x0002589b) blid2_tripm_pane_g2

0x787b,	// (0x000258a7) blid2_tripm_pane_g3_ParamLimits

0x787b,	// (0x000258a7) blid2_tripm_pane_g3

0x7887,	// (0x000258b3) blid2_tripm_pane_g4_ParamLimits

0x7887,	// (0x000258b3) blid2_tripm_pane_g4

0x7893,	// (0x000258bf) blid2_tripm_pane_g5_ParamLimits

0x7893,	// (0x000258bf) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0002db21) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0002db21) blid2_tripm_pane_g

0x78af,	// (0x000258db) blid2_tripm_pane_t1_ParamLimits

0x78af,	// (0x000258db) blid2_tripm_pane_t1

0x78c3,	// (0x000258ef) blid2_tripm_pane_t2_ParamLimits

0x78c3,	// (0x000258ef) blid2_tripm_pane_t2

0x78d5,	// (0x00025901) blid2_tripm_pane_t3_ParamLimits

0x78d5,	// (0x00025901) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0002db2e) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0002db2e) blid2_tripm_pane_t

0x7907,	// (0x00025933) cell_blid2_satellite_pane_ParamLimits

0x7907,	// (0x00025933) cell_blid2_satellite_pane

0x7921,	// (0x0002594d) cell_blid2_satellite_pane_g1

0xd97d,	// (0x0002b9a9) cell_blid2_satellite_pane_t1

0xc809,	// (0x0002a835) blid2_speed_pane_g1

0xd98b,	// (0x0002b9b7) blid2_speed_pane_t1

0xd999,	// (0x0002b9c5) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0002db37) blid2_speed_pane_t

0xc809,	// (0x0002a835) blid2_navig_ring_pane_g1

0x792a,	// (0x00025956) blid2_navig_ring_pane_g2

0x7932,	// (0x0002595e) blid2_navig_ring_pane_g3

0x793a,	// (0x00025966) blid2_navig_ring_pane_g4

0x7942,	// (0x0002596e) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0002db3c) blid2_navig_ring_pane_g

0x9c03,	// (0x00027c2f) bg_popup_window_pane_cp011

0xd9a7,	// (0x0002b9d3) popup_blid2_search_window_g1

0xd9af,	// (0x0002b9db) popup_blid2_search_window_t1

0xd9bd,	// (0x0002b9e9) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0002db47) popup_blid2_search_window_t

0xa65b,	// (0x00028687) main_browser_pane_g1

0xa340,	// (0x0002836c) main_browser_pane_ParamLimits

0x150e,	// (0x0001f53a) bg_button_pane_cp011_ParamLimits

0x23bd,	// (0x000203e9) cell_vitu2_function_pane_g1_ParamLimits

0xc3f8,	// (0x0002a424) bg_popup_sub_pane_cp22_ParamLimits

0x72d1,	// (0x000252fd) input_focus_pane_cp08_ParamLimits

0x72e8,	// (0x00025314) popup_vitu2_query_button_pane_ParamLimits

0x72e8,	// (0x00025314) popup_vitu2_query_button_pane

0x72f9,	// (0x00025325) popup_vitu2_query_input_button_pane

0xd56a,	// (0x0002b596) popup_vitu2_query_window_g1_ParamLimits

0x7303,	// (0x0002532f) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002da48) popup_vitu2_query_window_g_ParamLimits

0x9c03,	// (0x00027c2f) bg_button_pane_cp026

0x794a,	// (0x00025976) popup_vitu2_query_input_button_pane_g1

0x9c03,	// (0x00027c2f) bg_button_pane_cp025

0xd9cb,	// (0x0002b9f7) popup_vitu2_query_button_pane_t1

0x5ba3,	// (0x00023bcf) main_mp3_pane_t6

0x5bb3,	// (0x00023bdf) popup_slider_window_cp01

0x1f75,	// (0x0001ffa1) cam4_battery_pane

0x2055,	// (0x00020081) cam4_battery_pane_cp02

0x254d,	// (0x00020579) cam4_battery_pane_cp01

0x254d,	// (0x00020579) cam4_battery_pane_cp03

0xd96a,	// (0x0002b996) cam4_battery_pane_g1

0xc809,	// (0x0002a835) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0002db4c) cam4_battery_pane_g

0xc6cc,	// (0x0002a6f8) popup_blid_sat_info2_window_t11

0xadb6,	// (0x00028de2) aid_size_touch_mv_arrow_left_ParamLimits

0xaddf,	// (0x00028e0b) aid_size_touch_mv_arrow_right_ParamLimits

0xae3d,	// (0x00028e69) navi_pane_g1_ParamLimits

0xae49,	// (0x00028e75) navi_pane_g2_ParamLimits

0xae77,	// (0x00028ea3) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0002d411) navi_pane_g_ParamLimits

0x491b,	// (0x00022947) navi_pane_mv_t1_ParamLimits

0x663f,	// (0x0002466b) grid_imed_effect_pane_ParamLimits

0x338d,	// (0x000213b9) aid_placing_vt_slider_lsc

0xa5aa,	// (0x000285d6) aid_placing_vt_slider_prt

0xa34c,	// (0x00028378) bg_tb_trans_pane_cp01_ParamLimits

0xc98c,	// (0x0002a9b8) popup_image_details_window_g1_ParamLimits

0xc99f,	// (0x0002a9cb) popup_image_details_window_g2_ParamLimits

0xc9b4,	// (0x0002a9e0) popup_image_details_window_g3_ParamLimits

0xc9b4,	// (0x0002a9e0) popup_image_details_window_g3

0xf718,	// (0x0002d744) popup_image_details_window_g_ParamLimits

0xc9c8,	// (0x0002a9f4) popup_image_details_window_t1_ParamLimits

0xc9da,	// (0x0002aa06) popup_image_details_window_t2_ParamLimits

0xc9f3,	// (0x0002aa1f) popup_image_details_window_t3_ParamLimits

0xca07,	// (0x0002aa33) popup_image_details_window_t4_ParamLimits

0xca22,	// (0x0002aa4e) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0002d74b) popup_image_details_window_t_ParamLimits

0x7658,	// (0x00025684) cl_header_name_pane_ParamLimits

0x7658,	// (0x00025684) cl_header_name_pane

0x7952,	// (0x0002597e) cl_header_name_pane_t1_ParamLimits

0x7952,	// (0x0002597e) cl_header_name_pane_t1

0x7969,	// (0x00025995) cl_header_name_pane_t2_ParamLimits

0x7969,	// (0x00025995) cl_header_name_pane_t2

0x7993,	// (0x000259bf) cl_header_name_pane_t3_ParamLimits

0x7993,	// (0x000259bf) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0002db51) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0002db51) cl_header_name_pane_t

0xaf06,	// (0x00028f32) navi_pane_mv_g2_ParamLimits

0xd27a,	// (0x0002b2a6) field_vitu2_entry_pane_g1_ParamLimits

0xd286,	// (0x0002b2b2) field_vitu2_entry_pane_g2_ParamLimits

0xd292,	// (0x0002b2be) field_vitu2_entry_pane_g3_ParamLimits

0xd292,	// (0x0002b2be) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002d947) field_vitu2_entry_pane_g_ParamLimits

0x2289,	// (0x000202b5) cell_vitu2_itu_pane_g1_ParamLimits

0x229b,	// (0x000202c7) cell_vitu2_itu_pane_g2_ParamLimits

0x229b,	// (0x000202c7) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002d953) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002d953) cell_vitu2_itu_pane_g

0x150e,	// (0x0001f53a) bg_vkb2_func_pane_cp05_ParamLimits

0x150e,	// (0x0001f53a) bg_vkb2_func_pane_cp05

0x150e,	// (0x0001f53a) bg_vkb2_func_pane_cp03

0x150e,	// (0x0001f53a) bg_vkb2_func_pane_cp04

0x150e,	// (0x0001f53a) bg_vkb2_func_pane_cp10_ParamLimits

0x150e,	// (0x0001f53a) bg_vkb2_func_pane_cp10

0x75fa,	// (0x00025626) bg_vkb2_func_pane_cp08

0x75e0,	// (0x0002560c) bg_vkb2_func_pane_cp06

0x75ee,	// (0x0002561a) bg_vkb2_func_pane_cp07

0xd8c7,	// (0x0002b8f3) bg_vkb2_func_pane_cp11_ParamLimits

0xd8c7,	// (0x0002b8f3) bg_vkb2_func_pane_cp11

0xd8dc,	// (0x0002b908) bg_vkb2_func_pane_cp12_ParamLimits

0xd8dc,	// (0x0002b908) bg_vkb2_func_pane_cp12

0x9c03,	// (0x00027c2f) bg_vkb2_func_pane_cp09

0xd2cf,	// (0x0002b2fb) bg_vkb2_func_pane_g1

0xa76c,	// (0x00028798) bg_vkb2_func_pane_g2

0xd2d7,	// (0x0002b303) bg_vkb2_func_pane_g3

0xd2df,	// (0x0002b30b) bg_vkb2_func_pane_g4

0xd52f,	// (0x0002b55b) bg_vkb2_func_pane_g5

0xd2f7,	// (0x0002b323) bg_vkb2_func_pane_g6

0xd2ff,	// (0x0002b32b) bg_vkb2_func_pane_g7

0xd2ef,	// (0x0002b31b) bg_vkb2_func_pane_g8

0xa74c,	// (0x00028778) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0002db58) bg_vkb2_func_pane_g

0x78a1,	// (0x000258cd) blid2_tripm_pane_g6_ParamLimits

0x78a1,	// (0x000258cd) blid2_tripm_pane_g6

0xd100,	// (0x0002b12c) mp4_progress_pane_g1

0x78fb,	// (0x00025927) blid2_tripm_values_pane_ParamLimits

0x78fb,	// (0x00025927) blid2_tripm_values_pane

0x79b8,	// (0x000259e4) blid2_tripm_values_pane_t1

0x79c6,	// (0x000259f2) blid2_tripm_values_pane_t2

0x79d4,	// (0x00025a00) blid2_tripm_values_pane_t3

0x79e2,	// (0x00025a0e) blid2_tripm_values_pane_t4

0x79f0,	// (0x00025a1c) blid2_tripm_values_pane_t5

0x79fe,	// (0x00025a2a) blid2_tripm_values_pane_t6

0x7a0c,	// (0x00025a38) blid2_tripm_values_pane_t7

0x7a1a,	// (0x00025a46) blid2_tripm_values_pane_t8

0x7a28,	// (0x00025a54) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0002db6b) blid2_tripm_values_pane_t

0x33cd,	// (0x000213f9) call_video_pane_t1_ParamLimits

0x33ee,	// (0x0002141a) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0002d29a) call_video_pane_t_ParamLimits

0x4e35,	// (0x00022e61) msg_header_pane_g1_ParamLimits

0xb102,	// (0x0002912e) msg_header_pane_g2_ParamLimits

0xb102,	// (0x0002912e) msg_header_pane_g2

0x0001,

0xf488,	// (0x0002d4b4) msg_header_pane_g_ParamLimits

0xf488,	// (0x0002d4b4) msg_header_pane_g

0xa340,	// (0x0002836c) main_clock2_pane_ParamLimits

0x6450,	// (0x0002447c) grid_clock2_toolbar_pane_ParamLimits

0x6450,	// (0x0002447c) grid_clock2_toolbar_pane

0x6450,	// (0x0002447c) listscroll_clock2_pane_ParamLimits

0x6450,	// (0x0002447c) listscroll_clock2_pane

0x64f4,	// (0x00024520) main_clock2_pane_t3_ParamLimits

0x64f4,	// (0x00024520) main_clock2_pane_t3

0x6506,	// (0x00024532) main_clock2_pane_t4_ParamLimits

0x6506,	// (0x00024532) main_clock2_pane_t4

0xd9d9,	// (0x0002ba05) cell_clock2_toolbar_pane

0xd9e1,	// (0x0002ba0d) cell_clock2_toolbar_pane_cp01

0xd9e1,	// (0x0002ba0d) cell_clock2_toolbar_pane_cp02

0xd9e9,	// (0x0002ba15) cell_clock2_toolbar_pane_cp03

0xd9f1,	// (0x0002ba1d) list_clock2_pane

0xad2c,	// (0x00028d58) scroll_pane_cp10

0xd9f9,	// (0x0002ba25) list_single_clock2_pane_ParamLimits

0xd9f9,	// (0x0002ba25) list_single_clock2_pane

0xa513,	// (0x0002853f) list_highlight_pane_cp08

0xda06,	// (0x0002ba32) list_single_clock2_pane_t1

0xda14,	// (0x0002ba40) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0002db7e) list_single_clock2_pane_t

0x9c03,	// (0x00027c2f) bg_button_pane_cp10

0xda22,	// (0x0002ba4e) cell_clock2_toolbar_pane_g1

0x14a9,	// (0x0001f4d5) aid_main_viewer_pane_g1_ParamLimits

0x14a9,	// (0x0001f4d5) aid_main_viewer_pane_g1

0x14b5,	// (0x0001f4e1) aid_main_viewer_pane_g2_ParamLimits

0x14b5,	// (0x0001f4e1) aid_main_viewer_pane_g2

0x4e41,	// (0x00022e6d) aid_main_viewer_pane_g3_ParamLimits

0x4e41,	// (0x00022e6d) aid_main_viewer_pane_g3

0x4e52,	// (0x00022e7e) aid_main_viewer_pane_g4_ParamLimits

0x4e52,	// (0x00022e7e) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0002d4c5) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0002d4c5) aid_main_viewer_pane_g

0x1501,	// (0x0001f52d) main_calc_pane_ParamLimits

0x151c,	// (0x0001f548) main_dialer2_pane_ParamLimits

0x10c0,	// (0x0001f0ec) main_cam6_pane

0x10c0,	// (0x0001f0ec) main_vid6_pane

0x645c,	// (0x00024488) listscroll_gen_pane_cp06_ParamLimits

0x645c,	// (0x00024488) listscroll_gen_pane_cp06

0x6518,	// (0x00024544) main_clock2_pane_t5_ParamLimits

0x6518,	// (0x00024544) main_clock2_pane_t5

0x6561,	// (0x0002458d) aid_call2_pane_cp10_ParamLimits

0x6573,	// (0x0002459f) aid_call_pane_cp10_ParamLimits

0xadaa,	// (0x00028dd6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadaa,	// (0x00028dd6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6585,	// (0x000245b1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6585,	// (0x000245b1) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadaa,	// (0x00028dd6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0002d800) popup_clock_analogue_window_cp10_g_ParamLimits

0x6597,	// (0x000245c3) popup_clock_analogue_window_cp10_t1_ParamLimits

0x69a3,	// (0x000249cf) cell_dialer2_keypad_pane_g2_ParamLimits

0x69a3,	// (0x000249cf) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002d8e6) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002d8e6) cell_dialer2_keypad_pane_g

0x69bf,	// (0x000249eb) cell_dialer2_keypad_pane_t1

0x6dfd,	// (0x00024e29) main_cset_text2_pane_ParamLimits

0x6dfd,	// (0x00024e29) main_cset_text2_pane

0xd771,	// (0x0002b79d) area_vitu2_query_pane_g1_ParamLimits

0x757f,	// (0x000255ab) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002da9b) area_vitu2_query_pane_g_ParamLimits

0xd7f5,	// (0x0002b821) area_vitu2_query_pane_t7_ParamLimits

0xd7f5,	// (0x0002b821) area_vitu2_query_pane_t7

0x75e0,	// (0x0002560c) bg_button_pane_cp018_ParamLimits

0x75ee,	// (0x0002561a) bg_button_pane_cp021_ParamLimits

0x75fa,	// (0x00025626) bg_button_pane_cp022_ParamLimits

0x75fa,	// (0x00025626) bg_vkb2_func_pane_cp08_ParamLimits

0x75e0,	// (0x0002560c) bg_vkb2_func_pane_cp06_ParamLimits

0x75ee,	// (0x0002561a) bg_vkb2_func_pane_cp07_ParamLimits

0x760b,	// (0x00025637) input_focus_pane_cp09_ParamLimits

0x25f2,	// (0x0002061e) cam6_autofocus_pane_ParamLimits

0x25f2,	// (0x0002061e) cam6_autofocus_pane

0x2614,	// (0x00020640) cam6_image_uncrop_pane_ParamLimits

0x2614,	// (0x00020640) cam6_image_uncrop_pane

0x2641,	// (0x0002066d) cam6_indi_pane_ParamLimits

0x2641,	// (0x0002066d) cam6_indi_pane

0x265b,	// (0x00020687) cam6_mode_pane_ParamLimits

0x265b,	// (0x00020687) cam6_mode_pane

0x266f,	// (0x0002069b) cam6_timer_pane_ParamLimits

0x266f,	// (0x0002069b) cam6_timer_pane

0x267b,	// (0x000206a7) cam6_zoom_pane_ParamLimits

0x267b,	// (0x000206a7) cam6_zoom_pane

0x7a36,	// (0x00025a62) cam6_mode_pane_g1_ParamLimits

0x7a36,	// (0x00025a62) cam6_mode_pane_g1

0x7a42,	// (0x00025a6e) cam6_mode_pane_g2_ParamLimits

0x7a42,	// (0x00025a6e) cam6_mode_pane_g2

0x7a4e,	// (0x00025a7a) cam6_mode_pane_g3_ParamLimits

0x7a4e,	// (0x00025a7a) cam6_mode_pane_g3

0x7a5a,	// (0x00025a86) cam6_mode_pane_g4_ParamLimits

0x7a5a,	// (0x00025a86) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0002db83) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0002db83) cam6_mode_pane_g

0xd255,	// (0x0002b281) bg_tb_trans_pane_cp08_ParamLimits

0xd255,	// (0x0002b281) bg_tb_trans_pane_cp08

0xda2a,	// (0x0002ba56) cam6_battery_pane_ParamLimits

0xda2a,	// (0x0002ba56) cam6_battery_pane

0xda40,	// (0x0002ba6c) cam6_indi_pane_g1_ParamLimits

0xda40,	// (0x0002ba6c) cam6_indi_pane_g1

0xda52,	// (0x0002ba7e) cam6_indi_pane_g2_ParamLimits

0xda52,	// (0x0002ba7e) cam6_indi_pane_g2

0xda64,	// (0x0002ba90) cam6_indi_pane_g3_ParamLimits

0xda64,	// (0x0002ba90) cam6_indi_pane_g3

0x0002,

0x0a2c,	// (0x0001ea58) cam6_indi_pane_g_ParamLimits

0x0a2c,	// (0x0001ea58) cam6_indi_pane_g

0xda76,	// (0x0002baa2) cam6_indi_pane_t1_ParamLimits

0xda76,	// (0x0002baa2) cam6_indi_pane_t1

0x6afe,	// (0x00024b2a) cam6_autofocus_pane_g1

0x6af6,	// (0x00024b22) cam6_autofocus_pane_g2

0x6b0e,	// (0x00024b3a) cam6_autofocus_pane_g3

0x6b06,	// (0x00024b32) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0002db8c) cam6_autofocus_pane_g

0xda9c,	// (0x0002bac8) cam6_timer_pane_g1

0xdaa4,	// (0x0002bad0) cam6_timer_pane_t1

0xdab2,	// (0x0002bade) cam6_zoom_cont_pane

0xdaba,	// (0x0002bae6) cam6_zoom_pane_g1

0xdac2,	// (0x0002baee) cam6_zoom_pane_g2

0x7a66,	// (0x00025a92) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0002db95) cam6_zoom_pane_g

0xc809,	// (0x0002a835) cam6_battery_pane_g1

0xc809,	// (0x0002a835) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0002d708) cam6_battery_pane_g

0xdaca,	// (0x0002baf6) cam6_zoom_cont_pane_g1

0xdad3,	// (0x0002baff) cam6_zoom_cont_pane_g2

0xdadc,	// (0x0002bb08) cam6_zoom_cont_pane_g3

0x0002,

0x0a43,	// (0x0001ea6f) cam6_zoom_cont_pane_g

0x7a83,	// (0x00025aaf) cam6_mode_pane_cp_ParamLimits

0x7a83,	// (0x00025aaf) cam6_mode_pane_cp

0x7a97,	// (0x00025ac3) cam6_zoom_pane_cp_ParamLimits

0x7a97,	// (0x00025ac3) cam6_zoom_pane_cp

0x7aaf,	// (0x00025adb) vid6_image_uncrop_cif_pane_ParamLimits

0x7aaf,	// (0x00025adb) vid6_image_uncrop_cif_pane

0x7adb,	// (0x00025b07) vid6_image_uncrop_nhd_pane_ParamLimits

0x7adb,	// (0x00025b07) vid6_image_uncrop_nhd_pane

0x7af8,	// (0x00025b24) vid6_image_uncrop_vga_pane_ParamLimits

0x7af8,	// (0x00025b24) vid6_image_uncrop_vga_pane

0x7b17,	// (0x00025b43) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b17,	// (0x00025b43) vid6_image_uncrop_wvga_pane

0x7b34,	// (0x00025b60) vid6_indi_pane_ParamLimits

0x7b34,	// (0x00025b60) vid6_indi_pane

0xd255,	// (0x0002b281) bg_tb_trans_pane_cp09_ParamLimits

0xd255,	// (0x0002b281) bg_tb_trans_pane_cp09

0xdaf4,	// (0x0002bb20) cam6_battery_pane_cp_ParamLimits

0xdaf4,	// (0x0002bb20) cam6_battery_pane_cp

0xdb00,	// (0x0002bb2c) vid6_indi_pane_g1_ParamLimits

0xdb00,	// (0x0002bb2c) vid6_indi_pane_g1

0xdb12,	// (0x0002bb3e) vid6_indi_pane_g2_ParamLimits

0xdb12,	// (0x0002bb3e) vid6_indi_pane_g2

0xdb24,	// (0x0002bb50) vid6_indi_pane_g3_ParamLimits

0xdb24,	// (0x0002bb50) vid6_indi_pane_g3

0xdb39,	// (0x0002bb65) vid6_indi_pane_g4_ParamLimits

0xdb39,	// (0x0002bb65) vid6_indi_pane_g4

0xdb4e,	// (0x0002bb7a) vid6_indi_pane_g5_ParamLimits

0xdb4e,	// (0x0002bb7a) vid6_indi_pane_g5

0x0004,

0x0a4a,	// (0x0001ea76) vid6_indi_pane_g_ParamLimits

0x0a4a,	// (0x0001ea76) vid6_indi_pane_g

0xdb68,	// (0x0002bb94) vid6_indi_pane_t1_ParamLimits

0xdb68,	// (0x0002bb94) vid6_indi_pane_t1

0xdb7e,	// (0x0002bbaa) vid6_indi_pane_t2_ParamLimits

0xdb7e,	// (0x0002bbaa) vid6_indi_pane_t2

0xdba6,	// (0x0002bbd2) vid6_indi_pane_t3_ParamLimits

0xdba6,	// (0x0002bbd2) vid6_indi_pane_t3

0xdbce,	// (0x0002bbfa) vid6_indi_pane_t4_ParamLimits

0xdbce,	// (0x0002bbfa) vid6_indi_pane_t4

0x0003,

0x0a55,	// (0x0001ea81) vid6_indi_pane_t_ParamLimits

0x0a55,	// (0x0001ea81) vid6_indi_pane_t

0xdbf2,	// (0x0002bc1e) wait_bar_pane_cp08

0x7b59,	// (0x00025b85) main_cset_text2_pane_t1_ParamLimits

0x7b59,	// (0x00025b85) main_cset_text2_pane_t1

0x7a6e,	// (0x00025a9a) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a6e,	// (0x00025a9a) listscroll_gen_pane_cp06_t1

0x10c0,	// (0x0001f0ec) main_cam6_set_pane

0x1f67,	// (0x0001ff93) bg_tb_trans_pane_cp06_ParamLimits

0x1f7d,	// (0x0001ffa9) cam4_indicators_pane_g1_ParamLimits

0x1f8e,	// (0x0001ffba) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002d923) cam4_indicators_pane_g_ParamLimits

0x1fac,	// (0x0001ffd8) cam4_indicators_pane_t1_ParamLimits

0x150e,	// (0x0001f53a) bg_tb_trans_pane_cp07_ParamLimits

0x205f,	// (0x0002008b) vid4_indicators_pane_g1_ParamLimits

0x2073,	// (0x0002009f) vid4_indicators_pane_g2_ParamLimits

0x2087,	// (0x000200b3) vid4_indicators_pane_g3_ParamLimits

0x2098,	// (0x000200c4) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002d935) vid4_indicators_pane_g_ParamLimits

0x20b6,	// (0x000200e2) vid4_indicators_pane_t1_ParamLimits

0x2555,	// (0x00020581) vid4_progress_pane_g1_ParamLimits

0x2565,	// (0x00020591) vid4_progress_pane_g2_ParamLimits

0x2575,	// (0x000205a1) vid4_progress_pane_g3_ParamLimits

0x2587,	// (0x000205b3) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002dae6) vid4_progress_pane_g_ParamLimits

0x259f,	// (0x000205cb) vid4_progress_pane_t1_ParamLimits

0x25b5,	// (0x000205e1) vid4_progress_pane_t2_ParamLimits

0x25ca,	// (0x000205f6) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002daf1) vid4_progress_pane_t_ParamLimits

0x25df,	// (0x0002060b) wait_bar_pane_cp07_ParamLimits

0x7b8c,	// (0x00025bb8) main_cam6_set_pane_g2_ParamLimits

0x7b8c,	// (0x00025bb8) main_cam6_set_pane_g2

0x7b98,	// (0x00025bc4) main_cset6_listscroll_pane_ParamLimits

0x7b98,	// (0x00025bc4) main_cset6_listscroll_pane

0x7bc3,	// (0x00025bef) main_cset6_slider_pane_ParamLimits

0x7bc3,	// (0x00025bef) main_cset6_slider_pane

0x7bcf,	// (0x00025bfb) main_cset6_text2_pane_ParamLimits

0x7bcf,	// (0x00025bfb) main_cset6_text2_pane

0xdc01,	// (0x0002bc2d) main_cset6_text_pane

0xdc09,	// (0x0002bc35) main_cset_list_pane_copy1_ParamLimits

0xdc09,	// (0x0002bc35) main_cset_list_pane_copy1

0xdc19,	// (0x0002bc45) scroll_pane_cp028_copy1

0x7be2,	// (0x00025c0e) cset_list_set_pane_copy1

0x7bf5,	// (0x00025c21) aid_position_infowindow_above_copy1

0x7bfd,	// (0x00025c29) aid_position_infowindow_below_copy1

0x7c05,	// (0x00025c31) cset_list_set_pane_g1_copy1

0xd4da,	// (0x0002b506) cset_list_set_pane_g3_copy1_ParamLimits

0xd4da,	// (0x0002b506) cset_list_set_pane_g3_copy1

0xd4e9,	// (0x0002b515) cset_list_set_pane_t1_copy1_ParamLimits

0xd4e9,	// (0x0002b515) cset_list_set_pane_t1_copy1

0xa34c,	// (0x00028378) list_highlight_pane_cp021_copy1_ParamLimits

0xa34c,	// (0x00028378) list_highlight_pane_cp021_copy1

0xdc22,	// (0x0002bc4e) cset6_slider_pane_ParamLimits

0xdc22,	// (0x0002bc4e) cset6_slider_pane

0xdc4e,	// (0x0002bc7a) main_cset6_slider_pane_g1_ParamLimits

0xdc4e,	// (0x0002bc7a) main_cset6_slider_pane_g1

0x7c0d,	// (0x00025c39) main_cset6_slider_pane_g2_ParamLimits

0x7c0d,	// (0x00025c39) main_cset6_slider_pane_g2

0xdc76,	// (0x0002bca2) main_cset6_slider_pane_g3_ParamLimits

0xdc76,	// (0x0002bca2) main_cset6_slider_pane_g3

0x7c35,	// (0x00025c61) main_cset6_slider_pane_g4_ParamLimits

0x7c35,	// (0x00025c61) main_cset6_slider_pane_g4

0x7c41,	// (0x00025c6d) main_cset6_slider_pane_g5_ParamLimits

0x7c41,	// (0x00025c6d) main_cset6_slider_pane_g5

0xd40a,	// (0x0002b436) main_cset6_slider_pane_g7_ParamLimits

0xd40a,	// (0x0002b436) main_cset6_slider_pane_g7

0xd416,	// (0x0002b442) main_cset6_slider_pane_g8_ParamLimits

0xd416,	// (0x0002b442) main_cset6_slider_pane_g8

0x7c4f,	// (0x00025c7b) main_cset6_slider_pane_g9_ParamLimits

0x7c4f,	// (0x00025c7b) main_cset6_slider_pane_g9

0x7c5b,	// (0x00025c87) main_cset6_slider_pane_g10_ParamLimits

0x7c5b,	// (0x00025c87) main_cset6_slider_pane_g10

0x7c67,	// (0x00025c93) main_cset6_slider_pane_g11_ParamLimits

0x7c67,	// (0x00025c93) main_cset6_slider_pane_g11

0x7c73,	// (0x00025c9f) main_cset6_slider_pane_g12_ParamLimits

0x7c73,	// (0x00025c9f) main_cset6_slider_pane_g12

0x7c7f,	// (0x00025cab) main_cset6_slider_pane_g13_ParamLimits

0x7c7f,	// (0x00025cab) main_cset6_slider_pane_g13

0x7c8b,	// (0x00025cb7) main_cset6_slider_pane_g14_ParamLimits

0x7c8b,	// (0x00025cb7) main_cset6_slider_pane_g14

0x7c97,	// (0x00025cc3) main_cset6_slider_pane_g15_ParamLimits

0x7c97,	// (0x00025cc3) main_cset6_slider_pane_g15

0x7caf,	// (0x00025cdb) main_cset6_slider_pane_g16_ParamLimits

0x7caf,	// (0x00025cdb) main_cset6_slider_pane_g16

0x7cbd,	// (0x00025ce9) main_cset6_slider_pane_g17_ParamLimits

0x7cbd,	// (0x00025ce9) main_cset6_slider_pane_g17

0x0011,

0xfb70,	// (0x0002db9c) main_cset6_slider_pane_g_ParamLimits

0xfb70,	// (0x0002db9c) main_cset6_slider_pane_g

0xdc82,	// (0x0002bcae) main_cset6_slider_pane_t1_ParamLimits

0xdc82,	// (0x0002bcae) main_cset6_slider_pane_t1

0x7ce3,	// (0x00025d0f) main_cset6_slider_pane_t2_ParamLimits

0x7ce3,	// (0x00025d0f) main_cset6_slider_pane_t2

0x7d0e,	// (0x00025d3a) main_cset6_slider_pane_t3_ParamLimits

0x7d0e,	// (0x00025d3a) main_cset6_slider_pane_t3

0x7d39,	// (0x00025d65) main_cset6_slider_pane_t4_ParamLimits

0x7d39,	// (0x00025d65) main_cset6_slider_pane_t4

0x7d64,	// (0x00025d90) main_cset6_slider_pane_t5_ParamLimits

0x7d64,	// (0x00025d90) main_cset6_slider_pane_t5

0xdcc3,	// (0x0002bcef) main_cset6_slider_pane_t7_ParamLimits

0xdcc3,	// (0x0002bcef) main_cset6_slider_pane_t7

0x7d91,	// (0x00025dbd) main_cset6_slider_pane_t8_ParamLimits

0x7d91,	// (0x00025dbd) main_cset6_slider_pane_t8

0x7db5,	// (0x00025de1) main_cset6_slider_pane_t9_ParamLimits

0x7db5,	// (0x00025de1) main_cset6_slider_pane_t9

0x7dd9,	// (0x00025e05) main_cset6_slider_pane_t10_ParamLimits

0x7dd9,	// (0x00025e05) main_cset6_slider_pane_t10

0x7dfd,	// (0x00025e29) main_cset6_slider_pane_t11_ParamLimits

0x7dfd,	// (0x00025e29) main_cset6_slider_pane_t11

0xdcf9,	// (0x0002bd25) main_cset6_slider_pane_t14_ParamLimits

0xdcf9,	// (0x0002bd25) main_cset6_slider_pane_t14

0xdd32,	// (0x0002bd5e) main_cset6_slider_pane_t15_ParamLimits

0xdd32,	// (0x0002bd5e) main_cset6_slider_pane_t15

0x000b,

0xfb95,	// (0x0002dbc1) main_cset6_slider_pane_t_ParamLimits

0xfb95,	// (0x0002dbc1) main_cset6_slider_pane_t

0xd59a,	// (0x0002b5c6) cset_slider_pane_g1_copy1

0xd5a3,	// (0x0002b5cf) cset_slider_pane_g2_copy1

0xd5ac,	// (0x0002b5d8) cset_slider_pane_g3_copy1

0x9c03,	// (0x00027c2f) bg_popup_sub_pane_cp011_copy1

0xdd6b,	// (0x0002bd97) main_cset_text_pane_g1_copy1

0xd57e,	// (0x0002b5aa) main_cset_text_pane_t1_copy1

0xd58c,	// (0x0002b5b8) main_cset_text_pane_t2_copy1

0xd5b5,	// (0x0002b5e1) main_cset_text_pane_t3_copy1

0xd5c3,	// (0x0002b5ef) main_cset_text_pane_t4_copy1

0xd5d1,	// (0x0002b5fd) main_cset_text_pane_t5_copy1

0xdd73,	// (0x0002bd9f) main_cset_text_pane_t6_copy1

0xd5ed,	// (0x0002b619) main_cset_text_pane_t7_copy1

0x7ef2,	// (0x00025f1e) main_cset_text2_pane_t1_copy1

0x150e,	// (0x0001f53a) main_ncimui_pane

0x156d,	// (0x0001f599) popup_query_ncimui_window_ParamLimits

0x156d,	// (0x0001f599) popup_query_ncimui_window

0xcad1,	// (0x0002aafd) field_cale_ev2_pane_g4_ParamLimits

0xcad1,	// (0x0002aafd) field_cale_ev2_pane_g4

0x6943,	// (0x0002496f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6943,	// (0x0002496f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0002d8c1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0002d8c1) cell_video_dialer_keypad_pane_g

0x695b,	// (0x00024987) cell_video_dialer_keypad_pane_t1

0x9c03,	// (0x00027c2f) bg_popup_window_pane_cp012

0xabf9,	// (0x00028c25) heading_pane_cp06

0xdd9f,	// (0x0002bdcb) ncim_query_content_pane

0x9c03,	// (0x00027c2f) bg_popup_heading_pane_cp01

0xdda7,	// (0x0002bdd3) ncim_heading_pane_t1

0xddb5,	// (0x0002bde1) ncim_indicator_popup_pane

0xddc7,	// (0x0002bdf3) ncim_query_button_pane

0xdddb,	// (0x0002be07) ncim_query_content_pane_t1

0xdded,	// (0x0002be19) ncim_query_content_pane_t2

0x0005,

0xfbd9,	// (0x0002dc05) ncim_query_content_pane_t

0xde27,	// (0x0002be53) ncim_query_list_pane

0xde39,	// (0x0002be65) ncim_query_popup_pane

0xddb5,	// (0x0002bde1) ncim_indicator_popup_pane_ParamLimits

0x8045,	// (0x00026071) ncim_query_content_pane_g1_ParamLimits

0x8045,	// (0x00026071) ncim_query_content_pane_g1

0xdddb,	// (0x0002be07) ncim_query_content_pane_t1_ParamLimits

0xdded,	// (0x0002be19) ncim_query_content_pane_t2_ParamLimits

0x8051,	// (0x0002607d) ncim_query_content_pane_t3_ParamLimits

0x8051,	// (0x0002607d) ncim_query_content_pane_t3

0x806e,	// (0x0002609a) ncim_query_content_pane_t4_ParamLimits

0x806e,	// (0x0002609a) ncim_query_content_pane_t4

0x808b,	// (0x000260b7) ncim_query_content_pane_t5_ParamLimits

0x808b,	// (0x000260b7) ncim_query_content_pane_t5

0xddff,	// (0x0002be2b) ncim_query_content_pane_t6_ParamLimits

0xddff,	// (0x0002be2b) ncim_query_content_pane_t6

0xfbd9,	// (0x0002dc05) ncim_query_content_pane_t_ParamLimits

0xde27,	// (0x0002be53) ncim_query_list_pane_ParamLimits

0xde39,	// (0x0002be65) ncim_query_popup_pane_ParamLimits

0xde4d,	// (0x0002be79) wait_bar_pane_cp04

0x9c03,	// (0x00027c2f) input_focus_pane_cp011

0xde55,	// (0x0002be81) ncim_query_popup_pane_t1

0xde63,	// (0x0002be8f) ncim_list_query_list_pane_ParamLimits

0xde63,	// (0x0002be8f) ncim_list_query_list_pane

0x9c03,	// (0x00027c2f) bg_button_pane_cp027

0xde70,	// (0x0002be9c) ncim_query_button_pane_g1

0x9c03,	// (0x00027c2f) list_highlight_pane_cp012

0xde7a,	// (0x0002bea6) ncim_list_query_list_pane_g1

0xde82,	// (0x0002beae) ncim_list_query_list_pane_t1

0x1f9d,	// (0x0001ffc9) cam4_indicators_pane_g3_ParamLimits

0x1f9d,	// (0x0001ffc9) cam4_indicators_pane_g3

0x20a4,	// (0x000200d0) vid4_indicators_pane_g5_ParamLimits

0x20a4,	// (0x000200d0) vid4_indicators_pane_g5

0x2593,	// (0x000205bf) vid4_progress_pane_g5_ParamLimits

0x2593,	// (0x000205bf) vid4_progress_pane_g5

0x7f31,	// (0x00025f5d) main_ncimui_pane_g1

0x7f99,	// (0x00025fc5) ncimui_group_query_pane_ParamLimits

0x7f99,	// (0x00025fc5) ncimui_group_query_pane

0x7fe1,	// (0x0002600d) ncimui_list_pane_ParamLimits

0x7fe1,	// (0x0002600d) ncimui_list_pane

0x8008,	// (0x00026034) ncimui_text_pane_ParamLimits

0x8008,	// (0x00026034) ncimui_text_pane

0x80a8,	// (0x000260d4) ncimui_text_pane_t1_ParamLimits

0x80a8,	// (0x000260d4) ncimui_text_pane_t1

0xde90,	// (0x0002bebc) ncimui_list_single_graphic_pane_ParamLimits

0xde90,	// (0x0002bebc) ncimui_list_single_graphic_pane

0x80c7,	// (0x000260f3) ncimui_query_pane_ParamLimits

0x80c7,	// (0x000260f3) ncimui_query_pane

0x9c03,	// (0x00027c2f) list_highlight_pane_cp013

0xdea0,	// (0x0002becc) ncim_list_query_list_pane_t1_copy1

0xde7a,	// (0x0002bea6) ncim_list_single_graphic_pane_g1

0xdeae,	// (0x0002beda) ncim_query_button_pane_cp01

0xdeba,	// (0x0002bee6) ncim_query_entry_pane_ParamLimits

0xdeba,	// (0x0002bee6) ncim_query_entry_pane

0xdecd,	// (0x0002bef9) ncimui_query_pane_g1

0xded9,	// (0x0002bf05) ncimui_query_pane_t1_ParamLimits

0xded9,	// (0x0002bf05) ncimui_query_pane_t1

0xa34c,	// (0x00028378) input_focus_pane_cp012

0xdef2,	// (0x0002bf1e) ncim_query_entry_pane_t1

0xa340,	// (0x0002836c) main_im_pane_ParamLimits

0x150e,	// (0x0001f53a) main_mobtv_pane_ParamLimits

0x150e,	// (0x0001f53a) main_mobtv_pane

0x7ccb,	// (0x00025cf7) main_cset6_slider_pane_g18_ParamLimits

0x7ccb,	// (0x00025cf7) main_cset6_slider_pane_g18

0x7cd7,	// (0x00025d03) main_cset6_slider_pane_g19_ParamLimits

0x7cd7,	// (0x00025d03) main_cset6_slider_pane_g19

0xd292,	// (0x0002b2be) bg_main_mobtv_pane_ParamLimits

0xd292,	// (0x0002b2be) bg_main_mobtv_pane

0x80da,	// (0x00026106) main_mobtv_info_pane

0x80e5,	// (0x00026111) main_mobtv_loading_pane_ParamLimits

0x80e5,	// (0x00026111) main_mobtv_loading_pane

0xdf04,	// (0x0002bf30) main_mobtv_pg_channel_list_pane

0xdf0e,	// (0x0002bf3a) main_mobtv_pg_hdr_pane

0x80f2,	// (0x0002611e) main_mobtv_programe_curr_pane_ParamLimits

0x80f2,	// (0x0002611e) main_mobtv_programe_curr_pane

0x80ff,	// (0x0002612b) main_mobtv_programe_next_pane_ParamLimits

0x80ff,	// (0x0002612b) main_mobtv_programe_next_pane

0xdf17,	// (0x0002bf43) popup_mobtv_noti_window

0xc809,	// (0x0002a835) main_tv_pg_hdr_pane_g1

0xdf1f,	// (0x0002bf4b) main_tv_pg_hdr_pane_g2

0xdf27,	// (0x0002bf53) main_tv_pg_hdr_pane_g3

0xdf2f,	// (0x0002bf5b) main_tv_pg_hdr_pane_g4

0xdf37,	// (0x0002bf63) main_tv_pg_hdr_pane_g5

0xdf41,	// (0x0002bf6d) main_tv_pg_hdr_pane_g6

0xdf4b,	// (0x0002bf77) main_tv_pg_hdr_pane_g7

0xdf55,	// (0x0002bf81) main_tv_pg_hdr_pane_g8

0xdf5f,	// (0x0002bf8b) main_tv_pg_hdr_pane_g9

0xdf69,	// (0x0002bf95) main_tv_pg_hdr_pane_g10

0xdf73,	// (0x0002bf9f) main_tv_pg_hdr_pane_g11

0x000a,

0xfbe6,	// (0x0002dc12) main_tv_pg_hdr_pane_g

0xdf7d,	// (0x0002bfa9) main_tv_pg_hdr_pane_t1

0xdf8b,	// (0x0002bfb7) main_tv_pg_hdr_pane_t2

0xdf99,	// (0x0002bfc5) main_tv_pg_hdr_pane_t3

0xdfa9,	// (0x0002bfd5) main_tv_pg_hdr_pane_t4

0xdfb9,	// (0x0002bfe5) main_tv_pg_hdr_pane_t5

0x0004,

0x0aeb,	// (0x0001eb17) main_tv_pg_hdr_pane_t

0xdfc9,	// (0x0002bff5) single_mobtv_pg_channel_pane_ParamLimits

0xdfc9,	// (0x0002bff5) single_mobtv_pg_channel_pane

0xdfdb,	// (0x0002c007) single_mobtv_pg_channel_table_pane

0xdfe4,	// (0x0002c010) single_mobtv_pg_channel_thumb_pane

0xdfed,	// (0x0002c019) single_tv_pg_channel_pane_g1

0xdff6,	// (0x0002c022) single_tv_pg_channel_pane_g2

0x0001,

0x0af6,	// (0x0001eb22) single_tv_pg_channel_pane_g

0xca6c,	// (0x0002aa98) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca6c,	// (0x0002aa98) bg_single_mobtv_pg_channel_thumb_pane

0xdfff,	// (0x0002c02b) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfff,	// (0x0002c02b) single_mobtv_pg_channel_thumb_pane_g1

0xe00d,	// (0x0002c039) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe00d,	// (0x0002c039) single_mobtv_pg_channel_thumb_pane_g2

0xe019,	// (0x0002c045) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe019,	// (0x0002c045) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0afb,	// (0x0001eb27) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0afb,	// (0x0001eb27) single_mobtv_pg_channel_thumb_pane_g

0xe025,	// (0x0002c051) single_mobtv_pg_channel_thumb_pane_t1

0xe033,	// (0x0002c05f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0b02,	// (0x0001eb2e) single_mobtv_pg_channel_thumb_pane_t

0xc809,	// (0x0002a835) bg_single_mobtv_pg_channel_table_pane_g1

0xc809,	// (0x0002a835) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0002d708) bg_single_mobtv_pg_channel_table_pane_g

0xe041,	// (0x0002c06d) single_mobtv_pg_channel_table_pane_t1

0xe04f,	// (0x0002c07b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0b07,	// (0x0001eb33) single_mobtv_pg_channel_table_pane_t

0x8114,	// (0x00026140) main_mobtv_info_pane_g1_ParamLimits

0x8114,	// (0x00026140) main_mobtv_info_pane_g1

0x8130,	// (0x0002615c) main_mobtv_info_pane_t1_ParamLimits

0x8130,	// (0x0002615c) main_mobtv_info_pane_t1

0x81a8,	// (0x000261d4) main_mobtv_info_pane_t2_ParamLimits

0x81a8,	// (0x000261d4) main_mobtv_info_pane_t2

0x0002,

0xfc02,	// (0x0002dc2e) main_mobtv_info_pane_t_ParamLimits

0xfc02,	// (0x0002dc2e) main_mobtv_info_pane_t

0x8237,	// (0x00026263) wait_bar_pane_cp05

0x8249,	// (0x00026275) main_mobtv_loading_pane_g1_ParamLimits

0x8249,	// (0x00026275) main_mobtv_loading_pane_g1

0x8257,	// (0x00026283) main_mobtv_loading_pane_g2_ParamLimits

0x8257,	// (0x00026283) main_mobtv_loading_pane_g2

0x8263,	// (0x0002628f) main_mobtv_loading_pane_g3_ParamLimits

0x8263,	// (0x0002628f) main_mobtv_loading_pane_g3

0x0002,

0xfc09,	// (0x0002dc35) main_mobtv_loading_pane_g_ParamLimits

0xfc09,	// (0x0002dc35) main_mobtv_loading_pane_g

0xe05d,	// (0x0002c089) main_mobtv_loading_pane_t1_ParamLimits

0xe05d,	// (0x0002c089) main_mobtv_loading_pane_t1

0xe075,	// (0x0002c0a1) main_mobtv_loading_pane_t2_ParamLimits

0xe075,	// (0x0002c0a1) main_mobtv_loading_pane_t2

0x0001,

0x0b1f,	// (0x0001eb4b) main_mobtv_loading_pane_t_ParamLimits

0x0b1f,	// (0x0001eb4b) main_mobtv_loading_pane_t

0x8271,	// (0x0002629d) wait_bar_pane_cp06_ParamLimits

0x8271,	// (0x0002629d) wait_bar_pane_cp06

0xe099,	// (0x0002c0c5) main_mobtv_programe_curr_pane_t1

0xe0a7,	// (0x0002c0d3) main_mobtv_programe_curr_pane_t2

0x0001,

0x0b24,	// (0x0001eb50) main_mobtv_programe_curr_pane_t

0xe0b5,	// (0x0002c0e1) main_mobtv_programe_next_pane_t1

0xe0c3,	// (0x0002c0ef) main_mobtv_programe_next_pane_t2

0xe0d1,	// (0x0002c0fd) main_mobtv_programe_next_pane_t3

0x0002,

0x0b29,	// (0x0001eb55) main_mobtv_programe_next_pane_t

0x9c03,	// (0x00027c2f) bg_popup_mobtv_noti_window_pane

0xe0df,	// (0x0002c10b) popup_mobtv_noti_window_g1

0xe0e7,	// (0x0002c113) popup_mobtv_noti_window_t1

0xe0f5,	// (0x0002c121) popup_mobtv_noti_window_t2

0x0001,

0x0b30,	// (0x0001eb5c) popup_mobtv_noti_window_t

0xc809,	// (0x0002a835) bg_popup_mobtv_noti_window_pane_g1

0x10c0,	// (0x0001f0ec) sc_clock_pane

0x10c0,	// (0x0001f0ec) main_fs_bigclock_pane

0x78e9,	// (0x00025915) blid2_tripm_pane_t4_ParamLimits

0x78e9,	// (0x00025915) blid2_tripm_pane_t4

0x827d,	// (0x000262a9) sc_clock_pane_g1_ParamLimits

0x827d,	// (0x000262a9) sc_clock_pane_g1

0x828b,	// (0x000262b7) sc_clock_pane_t1_ParamLimits

0x828b,	// (0x000262b7) sc_clock_pane_t1

0x829e,	// (0x000262ca) sc_clock_pane_t2_ParamLimits

0x829e,	// (0x000262ca) sc_clock_pane_t2

0x82b0,	// (0x000262dc) sc_clock_pane_t3_ParamLimits

0x82b0,	// (0x000262dc) sc_clock_pane_t3

0x0004,

0xfc10,	// (0x0002dc3c) sc_clock_pane_t_ParamLimits

0xfc10,	// (0x0002dc3c) sc_clock_pane_t

0x91d8,	// (0x00027204) main_fs_bigclock_indicator_pane_ParamLimits

0x91d8,	// (0x00027204) main_fs_bigclock_indicator_pane

0x8339,	// (0x00026365) main_fs_bigclock_pane_g1_ParamLimits

0x8339,	// (0x00026365) main_fs_bigclock_pane_g1

0x91e4,	// (0x00027210) main_fs_bigclock_pane_t1_ParamLimits

0x91e4,	// (0x00027210) main_fs_bigclock_pane_t1

0x91f6,	// (0x00027222) main_fs_bigclock_pane_t2_ParamLimits

0x91f6,	// (0x00027222) main_fs_bigclock_pane_t2

0x920a,	// (0x00027236) main_fs_bigclock_pane_t3_ParamLimits

0x920a,	// (0x00027236) main_fs_bigclock_pane_t3

0x0002,

0xfd93,	// (0x0002ddbf) main_fs_bigclock_pane_t_ParamLimits

0xfd93,	// (0x0002ddbf) main_fs_bigclock_pane_t

0xec62,	// (0x0002cc8e) main_fs_bigclock_indicator_pane_g1

0xddcf,	// (0x0002bdfb) ncim_query_content_pane_g2_ParamLimits

0xddcf,	// (0x0002bdfb) ncim_query_content_pane_g2

0x0001,

0xfbd4,	// (0x0002dc00) ncim_query_content_pane_g_ParamLimits

0xfbd4,	// (0x0002dc00) ncim_query_content_pane_g

0x82c4,	// (0x000262f0) sc_clock_pane_t4_ParamLimits

0x82c4,	// (0x000262f0) sc_clock_pane_t4

0x150e,	// (0x0001f53a) main_radioblah_pane

0xd1e9,	// (0x0002b215) cell_call4_button_pane_t1_copy1_ParamLimits

0xd1e9,	// (0x0002b215) cell_call4_button_pane_t1_copy1

0x7f4b,	// (0x00025f77) main_ncimui_pane_t1_ParamLimits

0x7f4b,	// (0x00025f77) main_ncimui_pane_t1

0x7f65,	// (0x00025f91) main_ncimui_pane_t2_ParamLimits

0x7f65,	// (0x00025f91) main_ncimui_pane_t2

0x0002,

0xfbcd,	// (0x0002dbf9) main_ncimui_pane_t_ParamLimits

0xfbcd,	// (0x0002dbf9) main_ncimui_pane_t

0xe239,	// (0x0002c265) main_radioblah_anim_pane_ParamLimits

0xe239,	// (0x0002c265) main_radioblah_anim_pane

0xe24a,	// (0x0002c276) main_radioblah_info_pane_ParamLimits

0xe24a,	// (0x0002c276) main_radioblah_info_pane

0xe25e,	// (0x0002c28a) main_radioblah_pane_t1_ParamLimits

0xe25e,	// (0x0002c28a) main_radioblah_pane_t1

0xe27a,	// (0x0002c2a6) main_radioblah_pane_t2_ParamLimits

0xe27a,	// (0x0002c2a6) main_radioblah_pane_t2

0x0003,

0xfc1b,	// (0x0002dc47) main_radioblah_pane_t_ParamLimits

0xfc1b,	// (0x0002dc47) main_radioblah_pane_t

0x838b,	// (0x000263b7) main_radioblah_rocker_ctrl_pane_ParamLimits

0x838b,	// (0x000263b7) main_radioblah_rocker_ctrl_pane

0xe2cb,	// (0x0002c2f7) main_radioblah_info_pane_t1_ParamLimits

0xe2cb,	// (0x0002c2f7) main_radioblah_info_pane_t1

0x83d0,	// (0x000263fc) main_radioblah_info_pane_t2_ParamLimits

0x83d0,	// (0x000263fc) main_radioblah_info_pane_t2

0x0003,

0xfc24,	// (0x0002dc50) main_radioblah_info_pane_t_ParamLimits

0xfc24,	// (0x0002dc50) main_radioblah_info_pane_t

0xc809,	// (0x0002a835) main_radioblah_rocker_ctrl_pane_g1

0x8480,	// (0x000264ac) main_radioblah_rocker_ctrl_pane_g2

0x8488,	// (0x000264b4) main_radioblah_rocker_ctrl_pane_g3

0x8490,	// (0x000264bc) main_radioblah_rocker_ctrl_pane_g4

0x8498,	// (0x000264c4) main_radioblah_rocker_ctrl_pane_g5

0x84a0,	// (0x000264cc) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2d,	// (0x0002dc59) main_radioblah_rocker_ctrl_pane_g

0x7ef2,	// (0x00025f1e) main_cset_text2_pane_t1_copy1_ParamLimits

0x1ee1,	// (0x0001ff0d) cam4_image_uncrop_qvga_pane

0x2012,	// (0x0002003e) vid4_image_uncrop_qcif_pane

0x2633,	// (0x0002065f) cam6_image_uncrop_qvga_pane_ParamLimits

0x2633,	// (0x0002065f) cam6_image_uncrop_qvga_pane

0xdae4,	// (0x0002bb10) vid6_image_uncrop_qcif_pane_ParamLimits

0xdae4,	// (0x0002bb10) vid6_image_uncrop_qcif_pane

0x9c03,	// (0x00027c2f) bg_popup_preview_window_pane_cp03

0xdd81,	// (0x0002bdad) list_cset_text2_pane

0xdd89,	// (0x0002bdb5) main_cset6_text2_pane_g1

0xdd91,	// (0x0002bdbd) main_cset6_text2_pane_t1

0x84a8,	// (0x000264d4) list_cset_text2_pane_t1_ParamLimits

0x84a8,	// (0x000264d4) list_cset_text2_pane_t1

0x150e,	// (0x0001f53a) main_radioblah_pane_ParamLimits

0x8223,	// (0x0002624f) main_mobtv_info_pane_t3_ParamLimits

0x8223,	// (0x0002624f) main_mobtv_info_pane_t3

0x8379,	// (0x000263a5) main_radioblah_pane_g1

0x83a4,	// (0x000263d0) main_radioblah_info_pane_g1

0x8425,	// (0x00026451) main_radioblah_info_pane_t3_ParamLimits

0x8425,	// (0x00026451) main_radioblah_info_pane_t3

0x4431,	// (0x0002245d) highlight_cell_cale_month_pane_ParamLimits

0x4431,	// (0x0002245d) highlight_cell_cale_month_pane

0x10c0,	// (0x0001f0ec) main_phob_fisheye_pane

0xcb74,	// (0x0002aba0) scroll_pane_cp0031_ParamLimits

0xcb74,	// (0x0002aba0) scroll_pane_cp0031

0xdbf2,	// (0x0002bc1e) wait_bar_pane_cp08_ParamLimits

0x7be2,	// (0x00025c0e) cset_list_set_pane_copy1_ParamLimits

0xe305,	// (0x0002c331) highlight_cell_cale_month_pane_g1

0x84c5,	// (0x000264f1) highlight_cell_cale_month_pane_t1

0xd861,	// (0x0002b88d) list_gen_pane_cp01

0xd3f5,	// (0x0002b421) scroll_pane_01

0x84d3,	// (0x000264ff) list_single_double_fisheye_pane

0x84dc,	// (0x00026508) list_double_fisheye_pane_g1_ParamLimits

0x84dc,	// (0x00026508) list_double_fisheye_pane_g1

0x84e8,	// (0x00026514) list_double_fisheye_pane_g2_ParamLimits

0x84e8,	// (0x00026514) list_double_fisheye_pane_g2

0x84fc,	// (0x00026528) list_double_fisheye_pane_g3_ParamLimits

0x84fc,	// (0x00026528) list_double_fisheye_pane_g3

0x0004,

0xfc3a,	// (0x0002dc66) list_double_fisheye_pane_g_ParamLimits

0xfc3a,	// (0x0002dc66) list_double_fisheye_pane_g

0x8525,	// (0x00026551) list_double_fisheye_pane_t1_ParamLimits

0x8525,	// (0x00026551) list_double_fisheye_pane_t1

0x8540,	// (0x0002656c) list_double_fisheye_pane_t2_ParamLimits

0x8540,	// (0x0002656c) list_double_fisheye_pane_t2

0x0001,

0xfc45,	// (0x0002dc71) list_double_fisheye_pane_t_ParamLimits

0xfc45,	// (0x0002dc71) list_double_fisheye_pane_t

0x10c0,	// (0x0001f0ec) main_call5_pane

0x82ea,	// (0x00026316) sc_swipe_pane_ParamLimits

0x82ea,	// (0x00026316) sc_swipe_pane

0x856e,	// (0x0002659a) call5_image_pane_ParamLimits

0x856e,	// (0x0002659a) call5_image_pane

0x857e,	// (0x000265aa) call5_swipe_1_pane_ParamLimits

0x857e,	// (0x000265aa) call5_swipe_1_pane

0x858a,	// (0x000265b6) call5_swipe_2_pane_ParamLimits

0x858a,	// (0x000265b6) call5_swipe_2_pane

0x85a4,	// (0x000265d0) popup_call5_audio_first_window_ParamLimits

0x85a4,	// (0x000265d0) popup_call5_audio_first_window

0xca6c,	// (0x0002aa98) call5_swipe_1_pane_g1_ParamLimits

0xca6c,	// (0x0002aa98) call5_swipe_1_pane_g1

0xe30d,	// (0x0002c339) call5_swipe_1_pane_g2_ParamLimits

0xe30d,	// (0x0002c339) call5_swipe_1_pane_g2

0x0001,

0xfc4a,	// (0x0002dc76) call5_swipe_1_pane_g_ParamLimits

0xfc4a,	// (0x0002dc76) call5_swipe_1_pane_g

0xe319,	// (0x0002c345) call5_swipe_1_pane_t1_ParamLimits

0xe319,	// (0x0002c345) call5_swipe_1_pane_t1

0xca6c,	// (0x0002aa98) call5_swipe_2_pane_g1_ParamLimits

0xca6c,	// (0x0002aa98) call5_swipe_2_pane_g1

0xe32e,	// (0x0002c35a) call5_swipe_2_pane_g2_ParamLimits

0xe32e,	// (0x0002c35a) call5_swipe_2_pane_g2

0x0001,

0xfc4f,	// (0x0002dc7b) call5_swipe_2_pane_g_ParamLimits

0xfc4f,	// (0x0002dc7b) call5_swipe_2_pane_g

0xe33a,	// (0x0002c366) call5_swipe_2_pane_t1_ParamLimits

0xe33a,	// (0x0002c366) call5_swipe_2_pane_t1

0xe34f,	// (0x0002c37b) sc_swipe_pane_g1_ParamLimits

0xe34f,	// (0x0002c37b) sc_swipe_pane_g1

0xe35c,	// (0x0002c388) sc_swipe_pane_g2_ParamLimits

0xe35c,	// (0x0002c388) sc_swipe_pane_g2

0x0001,

0x0b8f,	// (0x0001ebbb) sc_swipe_pane_g_ParamLimits

0x0b8f,	// (0x0001ebbb) sc_swipe_pane_g

0xe368,	// (0x0002c394) sc_swipe_pane_t1_ParamLimits

0xe368,	// (0x0002c394) sc_swipe_pane_t1

0x10c0,	// (0x0001f0ec) main_cmail_launcher_pane

0x85b2,	// (0x000265de) aid_size_cell_cmail_l_ParamLimits

0x85b2,	// (0x000265de) aid_size_cell_cmail_l

0x85c2,	// (0x000265ee) grid_cmail_l_pane_ParamLimits

0x85c2,	// (0x000265ee) grid_cmail_l_pane

0x85d2,	// (0x000265fe) cell_cmail_l_pane_ParamLimits

0x85d2,	// (0x000265fe) cell_cmail_l_pane

0x85e6,	// (0x00026612) cell_cmail_l_pane_g1_ParamLimits

0x85e6,	// (0x00026612) cell_cmail_l_pane_g1

0x85f2,	// (0x0002661e) cell_cmail_l_pane_t1_ParamLimits

0x85f2,	// (0x0002661e) cell_cmail_l_pane_t1

0xe37d,	// (0x0002c3a9) cell_cmail_l_pane_t2_ParamLimits

0xe37d,	// (0x0002c3a9) cell_cmail_l_pane_t2

0x0001,

0xfc54,	// (0x0002dc80) cell_cmail_l_pane_t_ParamLimits

0xfc54,	// (0x0002dc80) cell_cmail_l_pane_t

0xa34c,	// (0x00028378) grid_highlight_pane_cp018_ParamLimits

0xa34c,	// (0x00028378) grid_highlight_pane_cp018

0x0f22,	// (0x0001ef4e) main2_pane_ParamLimits

0x0f22,	// (0x0001ef4e) main2_pane

0xa3e7,	// (0x00028413) popup_sp_fs_action_menu_bg_pane_g1

0xa3ef,	// (0x0002841b) popup_sp_fs_action_menu_bg_pane_g2

0xa3f7,	// (0x00028423) popup_sp_fs_action_menu_bg_pane_g3

0xa3ff,	// (0x0002842b) popup_sp_fs_action_menu_bg_pane_g4

0xa407,	// (0x00028433) popup_sp_fs_action_menu_bg_pane_g5

0xa40f,	// (0x0002843b) popup_sp_fs_action_menu_bg_pane_g6

0xa417,	// (0x00028443) popup_sp_fs_action_menu_bg_pane_g7

0xa41f,	// (0x0002844b) popup_sp_fs_action_menu_bg_pane_g8

0xa427,	// (0x00028453) popup_sp_fs_action_menu_bg_pane_g9

0xa42f,	// (0x0002845b) popup_sp_fs_action_menu_bg_pane_g10

0xa42f,	// (0x0002845b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0002d1b6) popup_sp_fs_action_menu_bg_pane_g

0x3202,	// (0x0002122e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3202,	// (0x0002122e) list_medium_line_x2_t3_g3_g1

0x320e,	// (0x0002123a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x320e,	// (0x0002123a) list_medium_line_x2_t3_g3_g2

0x321a,	// (0x00021246) list_medium_line_x2_t3_g3_g3_ParamLimits

0x321a,	// (0x00021246) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0002d264) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0002d264) list_medium_line_x2_t3_g3_g

0x3226,	// (0x00021252) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3226,	// (0x00021252) list_medium_line_x2_t3_g3_t1

0x323b,	// (0x00021267) list_medium_line_x2_t3_g3_t2_ParamLimits

0x323b,	// (0x00021267) list_medium_line_x2_t3_g3_t2

0x324d,	// (0x00021279) list_medium_line_x2_t3_g3_t3_ParamLimits

0x324d,	// (0x00021279) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0002d26b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0002d26b) list_medium_line_x2_t3_g3_t

0x3202,	// (0x0002122e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3202,	// (0x0002122e) list_medium_line_x2_t3_g2_g1

0x321a,	// (0x00021246) list_medium_line_x2_t3_g2_g2_ParamLimits

0x321a,	// (0x00021246) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0002d272) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0002d272) list_medium_line_x2_t3_g2_g

0x3262,	// (0x0002128e) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3262,	// (0x0002128e) list_medium_line_x2_t3_g2_t1

0x3278,	// (0x000212a4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3278,	// (0x000212a4) list_medium_line_x2_t3_g2_t2

0x328a,	// (0x000212b6) list_medium_line_x2_t3_g2_t3_ParamLimits

0x328a,	// (0x000212b6) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0002d277) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0002d277) list_medium_line_x2_t3_g2_t

0x3202,	// (0x0002122e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3202,	// (0x0002122e) list_medium_line_x2_t4_g4_g1

0x32a8,	// (0x000212d4) list_medium_line_x2_t4_g4_g2_ParamLimits

0x32a8,	// (0x000212d4) list_medium_line_x2_t4_g4_g2

0x320e,	// (0x0002123a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x320e,	// (0x0002123a) list_medium_line_x2_t4_g4_g3

0x32b4,	// (0x000212e0) list_medium_line_x2_t4_g4_g4_ParamLimits

0x32b4,	// (0x000212e0) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0002d27e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0002d27e) list_medium_line_x2_t4_g4_g

0x32c0,	// (0x000212ec) list_medium_line_x2_t4_g4_t1_ParamLimits

0x32c0,	// (0x000212ec) list_medium_line_x2_t4_g4_t1

0x32da,	// (0x00021306) list_medium_line_x2_t4_g4_t2_ParamLimits

0x32da,	// (0x00021306) list_medium_line_x2_t4_g4_t2

0x32f0,	// (0x0002131c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x32f0,	// (0x0002131c) list_medium_line_x2_t4_g4_t3

0x3305,	// (0x00021331) list_medium_line_x2_t4_g4_t4_ParamLimits

0x3305,	// (0x00021331) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0002d287) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0002d287) list_medium_line_x2_t4_g4_t

0x3202,	// (0x0002122e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3202,	// (0x0002122e) list_medium_line_x2_t2_g4_g1

0x32a8,	// (0x000212d4) list_medium_line_x2_t2_g4_g2_ParamLimits

0x32a8,	// (0x000212d4) list_medium_line_x2_t2_g4_g2

0x320e,	// (0x0002123a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x320e,	// (0x0002123a) list_medium_line_x2_t2_g4_g3

0x321a,	// (0x00021246) list_medium_line_x2_t2_g4_g4_ParamLimits

0x321a,	// (0x00021246) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0002d2ee) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0002d2ee) list_medium_line_x2_t2_g4_g

0x4457,	// (0x00022483) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4457,	// (0x00022483) list_medium_line_x2_t2_g4_t1

0x324d,	// (0x00021279) list_medium_line_x2_t2_g4_t2_ParamLimits

0x324d,	// (0x00021279) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0002d2f7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0002d2f7) list_medium_line_x2_t2_g4_t

0x3202,	// (0x0002122e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3202,	// (0x0002122e) list_medium_line_x2_t2_g3_g1

0x320e,	// (0x0002123a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x320e,	// (0x0002123a) list_medium_line_x2_t2_g3_g2

0x321a,	// (0x00021246) list_medium_line_x2_t2_g3_g3_ParamLimits

0x321a,	// (0x00021246) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0002d264) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0002d264) list_medium_line_x2_t2_g3_g

0x446c,	// (0x00022498) list_medium_line_x2_t2_g3_t1_ParamLimits

0x446c,	// (0x00022498) list_medium_line_x2_t2_g3_t1

0x324d,	// (0x00021279) list_medium_line_x2_t2_g3_t2_ParamLimits

0x324d,	// (0x00021279) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0002d2fc) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0002d2fc) list_medium_line_x2_t2_g3_t

0x45d9,	// (0x00022605) main_sp_fs_list_pane_ParamLimits

0x45d9,	// (0x00022605) main_sp_fs_list_pane

0x45e5,	// (0x00022611) sp_fs_scroll_pane_ParamLimits

0x45e5,	// (0x00022611) sp_fs_scroll_pane

0x45f1,	// (0x0002261d) list_medium_line_x2_t3_t1

0x4601,	// (0x0002262d) list_medium_line_x2_t3_t2

0x460f,	// (0x0002263b) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0002d347) list_medium_line_x2_t3_t

0x461d,	// (0x00022649) list_medium_line_x3_t4_t1

0x462d,	// (0x00022659) list_medium_line_x3_t4_t2

0x463b,	// (0x00022667) list_medium_line_x3_t4_t3

0x460f,	// (0x0002263b) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0002d34e) list_medium_line_x3_t4_t

0x4649,	// (0x00022675) list_medium_line_x4_t5_t1

0x4659,	// (0x00022685) list_medium_line_x4_t5_t2

0x463b,	// (0x00022667) list_medium_line_x4_t5_t3

0x4667,	// (0x00022693) list_medium_line_x4_t5_t4

0x460f,	// (0x0002263b) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0002d357) list_medium_line_x4_t5_t

0x3202,	// (0x0002122e) list_medium_line_t4_g4_g1_ParamLimits

0x3202,	// (0x0002122e) list_medium_line_t4_g4_g1

0x4675,	// (0x000226a1) list_medium_line_t4_g4_g2_ParamLimits

0x4675,	// (0x000226a1) list_medium_line_t4_g4_g2

0x4681,	// (0x000226ad) list_medium_line_t4_g4_g3_ParamLimits

0x4681,	// (0x000226ad) list_medium_line_t4_g4_g3

0x321a,	// (0x00021246) list_medium_line_t4_g4_g4_ParamLimits

0x321a,	// (0x00021246) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0002d362) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0002d362) list_medium_line_t4_g4_g

0x468d,	// (0x000226b9) list_medium_line_t4_g4_t1_ParamLimits

0x468d,	// (0x000226b9) list_medium_line_t4_g4_t1

0x46a2,	// (0x000226ce) list_medium_line_t4_g4_t2_ParamLimits

0x46a2,	// (0x000226ce) list_medium_line_t4_g4_t2

0x46b8,	// (0x000226e4) list_medium_line_t4_g4_t3_ParamLimits

0x46b8,	// (0x000226e4) list_medium_line_t4_g4_t3

0x324d,	// (0x00021279) list_medium_line_t4_g4_t4_ParamLimits

0x324d,	// (0x00021279) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0002d36b) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0002d36b) list_medium_line_t4_g4_t

0x475c,	// (0x00022788) chi_dic_find_pane_g1

0x152a,	// (0x0001f556) main_tport_pane

0x7179,	// (0x000251a5) list_medium_line_plain_t1

0x719f,	// (0x000251cb) list_medium_line_t2_g2_g1_ParamLimits

0x719f,	// (0x000251cb) list_medium_line_t2_g2_g1

0x71ab,	// (0x000251d7) list_medium_line_t2_g2_g2_ParamLimits

0x71ab,	// (0x000251d7) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002da2c) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002da2c) list_medium_line_t2_g2_g

0x71b7,	// (0x000251e3) list_medium_line_t2_g2_t1_ParamLimits

0x71b7,	// (0x000251e3) list_medium_line_t2_g2_t1

0x71ce,	// (0x000251fa) list_medium_line_t2_g2_t2_ParamLimits

0x71ce,	// (0x000251fa) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002da31) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002da31) list_medium_line_t2_g2_t

0xd86a,	// (0x0002b896) aid_sp_fs_list_icon_a_sm

0xd872,	// (0x0002b89e) aid_sp_fs_list_icon_d

0xd87a,	// (0x0002b8a6) aid_sp_fs_text_primary

0xd883,	// (0x0002b8af) aid_sp_fs_text_secondary

0x7734,	// (0x00025760) list_medium_line

0x7734,	// (0x00025760) list_medium_line_g2

0x7734,	// (0x00025760) list_medium_line_g3

0x7734,	// (0x00025760) list_medium_line_plain

0x7734,	// (0x00025760) list_medium_line_plain_t2

0x7734,	// (0x00025760) list_medium_line_plain_t3

0x7734,	// (0x00025760) list_medium_line_right_icon

0x7734,	// (0x00025760) list_medium_line_right_iconx2

0x7734,	// (0x00025760) list_medium_line_t2

0x7734,	// (0x00025760) list_medium_line_t2_g2

0x7734,	// (0x00025760) list_medium_line_t2_g3

0x7734,	// (0x00025760) list_medium_line_t2_right_icon

0x7734,	// (0x00025760) list_medium_line_t2_right_iconx2

0x7734,	// (0x00025760) list_medium_line_t3

0x7734,	// (0x00025760) list_medium_line_t3_g2

0x7734,	// (0x00025760) list_medium_line_t3_g3

0x7734,	// (0x00025760) list_medium_line_t3_right_iconx2

0x773d,	// (0x00025769) list_medium_line_t4_g4

0xe2aa,	// (0x0002c2d6) list_medium_line_x2

0xe2aa,	// (0x0002c2d6) list_medium_line_x2_t2_g2

0xe2aa,	// (0x0002c2d6) list_medium_line_x2_t2_g3

0xe2aa,	// (0x0002c2d6) list_medium_line_x2_t2_g4

0xe2aa,	// (0x0002c2d6) list_medium_line_x2_t3

0xe2aa,	// (0x0002c2d6) list_medium_line_x2_t3_g2

0xe2aa,	// (0x0002c2d6) list_medium_line_x2_t3_g3

0xe2aa,	// (0x0002c2d6) list_medium_line_x2_t3_g4

0xe2aa,	// (0x0002c2d6) list_medium_line_x2_t4_g2

0xe2aa,	// (0x0002c2d6) list_medium_line_x2_t4_g4

0x7746,	// (0x00025772) list_medium_line_x3

0x7746,	// (0x00025772) list_medium_line_x3_t4

0x7746,	// (0x00025772) list_medium_line_x3_t4_g4

0x773d,	// (0x00025769) list_medium_line_x4_t4

0x773d,	// (0x00025769) list_medium_line_x4_t4_g7

0x773d,	// (0x00025769) list_medium_line_x4_t5

0x774f,	// (0x0002577b) list_single_fs_dyc_pane_ParamLimits

0x774f,	// (0x0002577b) list_single_fs_dyc_pane

0x3202,	// (0x0002122e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3202,	// (0x0002122e) list_medium_line_x4_t4_g7_g1

0x7e21,	// (0x00025e4d) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e21,	// (0x00025e4d) list_medium_line_x4_t4_g7_g2

0x7e2d,	// (0x00025e59) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e2d,	// (0x00025e59) list_medium_line_x4_t4_g7_g3

0x7e3c,	// (0x00025e68) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e3c,	// (0x00025e68) list_medium_line_x4_t4_g7_g4

0x7e48,	// (0x00025e74) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e48,	// (0x00025e74) list_medium_line_x4_t4_g7_g5

0x7e57,	// (0x00025e83) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e57,	// (0x00025e83) list_medium_line_x4_t4_g7_g6

0x7e66,	// (0x00025e92) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e66,	// (0x00025e92) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbae,	// (0x0002dbda) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbae,	// (0x0002dbda) list_medium_line_x4_t4_g7_g

0x7e72,	// (0x00025e9e) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e72,	// (0x00025e9e) list_medium_line_x4_t4_g7_t1

0x7e87,	// (0x00025eb3) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e87,	// (0x00025eb3) list_medium_line_x4_t4_g7_t2

0x7e9c,	// (0x00025ec8) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7e9c,	// (0x00025ec8) list_medium_line_x4_t4_g7_t3

0x7eb1,	// (0x00025edd) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7eb1,	// (0x00025edd) list_medium_line_x4_t4_g7_t4

0x7ec3,	// (0x00025eef) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7ec3,	// (0x00025eef) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbbd,	// (0x0002dbe9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbbd,	// (0x0002dbe9) list_medium_line_x4_t4_g7_t

0x7ed5,	// (0x00025f01) list_single_dyc_row_pane_ParamLimits

0x7ed5,	// (0x00025f01) list_single_dyc_row_pane

0x8562,	// (0x0002658e) call5_gesture_pane_ParamLimits

0x8562,	// (0x0002658e) call5_gesture_pane

0x8596,	// (0x000265c2) call5_windows_pane_ParamLimits

0x8596,	// (0x000265c2) call5_windows_pane

0x8608,	// (0x00026634) call5_swipe_1_pane_cp_ParamLimits

0x8608,	// (0x00026634) call5_swipe_1_pane_cp

0x8614,	// (0x00026640) call5_swipe_2_pane_cp_ParamLimits

0x8614,	// (0x00026640) call5_swipe_2_pane_cp

0xa513,	// (0x0002853f) call5_image_pane_cp

0x8620,	// (0x0002664c) popup_call5_audio_first_window_cp_ParamLimits

0x8620,	// (0x0002664c) popup_call5_audio_first_window_cp

0xe34f,	// (0x0002c37b) call5_swipe_1_pane_g1_cp_ParamLimits

0xe34f,	// (0x0002c37b) call5_swipe_1_pane_g1_cp

0xe38f,	// (0x0002c3bb) call5_swipe_1_pane_g2_cp

0xe368,	// (0x0002c394) call5_swipe_1_pane_t1_cp_ParamLimits

0xe368,	// (0x0002c394) call5_swipe_1_pane_t1_cp

0xe34f,	// (0x0002c37b) call5_swipe_2_pane_g1_cp_ParamLimits

0xe34f,	// (0x0002c37b) call5_swipe_2_pane_g1_cp

0xe397,	// (0x0002c3c3) call5_swipe_2_pane_g2_cp

0xe39f,	// (0x0002c3cb) call5_swipe_2_pane_t1_cp_ParamLimits

0xe39f,	// (0x0002c3cb) call5_swipe_2_pane_t1_cp

0xa34c,	// (0x00028378) main_sp_fs_email_pane

0xe3b4,	// (0x0002c3e0) main_sp_fs_listscroll_pane_te

0x862e,	// (0x0002665a) popup_sp_fs_action_menu_pane_ParamLimits

0x862e,	// (0x0002665a) popup_sp_fs_action_menu_pane

0xc809,	// (0x0002a835) bg_sp_fs_ctrlbar_pane_g1

0xce0b,	// (0x0002ae37) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xce1d,	// (0x0002ae49) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xce14,	// (0x0002ae40) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc809,	// (0x0002a835) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc59,	// (0x0002dc85) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc5e5,	// (0x0002a611) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc5e5,	// (0x0002a611) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3bd,	// (0x0002c3e9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3bd,	// (0x0002c3e9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3c9,	// (0x0002c3f5) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3c9,	// (0x0002c3f5) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0ba2,	// (0x0001ebce) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0ba2,	// (0x0001ebce) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3d5,	// (0x0002c401) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3d5,	// (0x0002c401) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8672,	// (0x0002669e) list_medium_line_t2_right_icon_g1

0x867a,	// (0x000266a6) list_medium_line_t2_right_icon_t1

0x868a,	// (0x000266b6) list_medium_line_t2_right_icon_t2

0x0001,

0xfc62,	// (0x0002dc8e) list_medium_line_t2_right_icon_t

0xc3f8,	// (0x0002a424) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc3f8,	// (0x0002a424) bg_sp_fs_ctrlbar_pane

0x86ef,	// (0x0002671b) main_sp_fs_ctrlbar_button_pane_cp01

0x86f7,	// (0x00026723) main_sp_fs_ctrlbar_ddmenu_pane

0xe427,	// (0x0002c453) main_sp_fs_ctrlbar_pane_g1

0xe433,	// (0x0002c45f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0bac,	// (0x0001ebd8) main_sp_fs_ctrlbar_pane_g

0xe43f,	// (0x0002c46b) main_sp_fs_ctrlbar_pane_t1

0x8701,	// (0x0002672d) main_sp_fs_ctrlbar_pane

0x8717,	// (0x00026743) main_sp_fs_listscroll_pane_te_cp01

0x8728,	// (0x00026754) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8728,	// (0x00026754) popup_sp_fs_action_menu_pane_cp01

0xa34c,	// (0x00028378) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa34c,	// (0x00028378) bg_sp_fs_highlight_list_pane_cp01

0xe46f,	// (0x0002c49b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe46f,	// (0x0002c49b) sp_fs_action_menu_list_gene_pane_g1

0xe47e,	// (0x0002c4aa) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe47e,	// (0x0002c4aa) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0x0bb6,	// (0x0001ebe2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0x0bb6,	// (0x0001ebe2) sp_fs_action_menu_list_gene_pane_g

0xe48b,	// (0x0002c4b7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe48b,	// (0x0002c4b7) sp_fs_action_menu_list_gene_pane_t1

0xe4a3,	// (0x0002c4cf) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4a3,	// (0x0002c4cf) sp_fs_action_menu_list_gene_pane

0xe4c2,	// (0x0002c4ee) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4c2,	// (0x0002c4ee) popup_sp_fs_action_menu_bg_pane

0xe4d0,	// (0x0002c4fc) sp_fs_action_menu_list_pane_ParamLimits

0xe4d0,	// (0x0002c4fc) sp_fs_action_menu_list_pane

0x8752,	// (0x0002677e) sp_fs_scroll_pane_cp01_ParamLimits

0x8752,	// (0x0002677e) sp_fs_scroll_pane_cp01

0x8778,	// (0x000267a4) list_medium_line_plain_t2_t1

0x8788,	// (0x000267b4) list_medium_line_plain_t2_t2

0x0001,

0xfc67,	// (0x0002dc93) list_medium_line_plain_t2_t

0x8796,	// (0x000267c2) list_medium_line_plain_t3_t1

0x87a6,	// (0x000267d2) list_medium_line_plain_t3_t2

0x87b4,	// (0x000267e0) list_medium_line_plain_t3_t3

0x0002,

0xfc6c,	// (0x0002dc98) list_medium_line_plain_t3_t

0x3202,	// (0x0002122e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3202,	// (0x0002122e) list_medium_line_x2_t2_g2_g1

0x321a,	// (0x00021246) list_medium_line_x2_t2_g2_g2_ParamLimits

0x321a,	// (0x00021246) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0002d272) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0002d272) list_medium_line_x2_t2_g2_g

0x468d,	// (0x000226b9) list_medium_line_x2_t2_g2_t1_ParamLimits

0x468d,	// (0x000226b9) list_medium_line_x2_t2_g2_t1

0x324d,	// (0x00021279) list_medium_line_x2_t2_g2_t2_ParamLimits

0x324d,	// (0x00021279) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc73,	// (0x0002dc9f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc73,	// (0x0002dc9f) list_medium_line_x2_t2_g2_t

0x3202,	// (0x0002122e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3202,	// (0x0002122e) list_medium_line_x2_t4_g2_g1

0x321a,	// (0x00021246) list_medium_line_x2_t4_g2_g2_ParamLimits

0x321a,	// (0x00021246) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0002d272) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0002d272) list_medium_line_x2_t4_g2_g

0x87c2,	// (0x000267ee) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87c2,	// (0x000267ee) list_medium_line_x2_t4_g2_t1

0x87dc,	// (0x00026808) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87dc,	// (0x00026808) list_medium_line_x2_t4_g2_t2

0x87f1,	// (0x0002681d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87f1,	// (0x0002681d) list_medium_line_x2_t4_g2_t3

0x324d,	// (0x00021279) list_medium_line_x2_t4_g2_t4_ParamLimits

0x324d,	// (0x00021279) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc78,	// (0x0002dca4) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc78,	// (0x0002dca4) list_medium_line_x2_t4_g2_t

0x8806,	// (0x00026832) list_medium_line_t3_right_iconx2_g1

0x8672,	// (0x0002669e) list_medium_line_t3_right_iconx2_g2

0x880e,	// (0x0002683a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc81,	// (0x0002dcad) list_medium_line_t3_right_iconx2_g

0x8816,	// (0x00026842) list_medium_line_t3_right_iconx2_t1

0x8826,	// (0x00026852) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc88,	// (0x0002dcb4) list_medium_line_t3_right_iconx2_t

0x3202,	// (0x0002122e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3202,	// (0x0002122e) list_medium_line_x3_t4_g4_g1

0x320e,	// (0x0002123a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x320e,	// (0x0002123a) list_medium_line_x3_t4_g4_g2

0x4675,	// (0x000226a1) list_medium_line_x3_t4_g4_g3_ParamLimits

0x4675,	// (0x000226a1) list_medium_line_x3_t4_g4_g3

0x8834,	// (0x00026860) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8834,	// (0x00026860) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc8d,	// (0x0002dcb9) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc8d,	// (0x0002dcb9) list_medium_line_x3_t4_g4_g

0x8840,	// (0x0002686c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8840,	// (0x0002686c) list_medium_line_x3_t4_g4_t1

0x8857,	// (0x00026883) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8857,	// (0x00026883) list_medium_line_x3_t4_g4_t2

0x886c,	// (0x00026898) list_medium_line_x3_t4_g4_t3_ParamLimits

0x886c,	// (0x00026898) list_medium_line_x3_t4_g4_t3

0x8881,	// (0x000268ad) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8881,	// (0x000268ad) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc96,	// (0x0002dcc2) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc96,	// (0x0002dcc2) list_medium_line_x3_t4_g4_t

0x889e,	// (0x000268ca) list_single_dyc_row_text_pane_t1_ParamLimits

0x889e,	// (0x000268ca) list_single_dyc_row_text_pane_t1

0x88d5,	// (0x00026901) list_single_dyc_row_text_pane_t2_ParamLimits

0x88d5,	// (0x00026901) list_single_dyc_row_text_pane_t2

0xe4f0,	// (0x0002c51c) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4f0,	// (0x0002c51c) list_single_dyc_row_text_pane_t3

0x0005,

0xfc9f,	// (0x0002dccb) list_single_dyc_row_text_pane_t_ParamLimits

0xfc9f,	// (0x0002dccb) list_single_dyc_row_text_pane_t

0xe514,	// (0x0002c540) list_single_dyc_row_pane_g1_ParamLimits

0xe514,	// (0x0002c540) list_single_dyc_row_pane_g1

0xe520,	// (0x0002c54c) list_single_dyc_row_pane_g2_ParamLimits

0xe520,	// (0x0002c54c) list_single_dyc_row_pane_g2

0xe52c,	// (0x0002c558) list_single_dyc_row_pane_g3_ParamLimits

0xe52c,	// (0x0002c558) list_single_dyc_row_pane_g3

0xe538,	// (0x0002c564) list_single_dyc_row_pane_g4_ParamLimits

0xe538,	// (0x0002c564) list_single_dyc_row_pane_g4

0x0003,

0x0c00,	// (0x0001ec2c) list_single_dyc_row_pane_g_ParamLimits

0x0c00,	// (0x0001ec2c) list_single_dyc_row_pane_g

0xe544,	// (0x0002c570) list_single_dyc_row_text_pane_ParamLimits

0xe544,	// (0x0002c570) list_single_dyc_row_text_pane

0x9c03,	// (0x00027c2f) bg_sp_fs_scroll_pane

0xe563,	// (0x0002c58f) thumb_sp_fs_scroll_pane

0x719f,	// (0x000251cb) list_medium_line_g1_ParamLimits

0x719f,	// (0x000251cb) list_medium_line_g1

0x89f8,	// (0x00026a24) list_medium_line_t1_ParamLimits

0x89f8,	// (0x00026a24) list_medium_line_t1

0x3202,	// (0x0002122e) list_medium_line_x2_g1_ParamLimits

0x3202,	// (0x0002122e) list_medium_line_x2_g1

0x320e,	// (0x0002123a) list_medium_line_x2_g2_ParamLimits

0x320e,	// (0x0002123a) list_medium_line_x2_g2

0x0001,

0xfcac,	// (0x0002dcd8) list_medium_line_x2_g_ParamLimits

0xfcac,	// (0x0002dcd8) list_medium_line_x2_g

0xe56c,	// (0x0002c598) list_medium_line_x2_t1_ParamLimits

0xe56c,	// (0x0002c598) list_medium_line_x2_t1

0x3202,	// (0x0002122e) list_medium_line_x3_g1_ParamLimits

0x3202,	// (0x0002122e) list_medium_line_x3_g1

0x320e,	// (0x0002123a) list_medium_line_x3_g2_ParamLimits

0x320e,	// (0x0002123a) list_medium_line_x3_g2

0x0001,

0xfcac,	// (0x0002dcd8) list_medium_line_x3_g_ParamLimits

0xfcac,	// (0x0002dcd8) list_medium_line_x3_g

0xe56c,	// (0x0002c598) list_medium_line_x3_t1_ParamLimits

0xe56c,	// (0x0002c598) list_medium_line_x3_t1

0xe582,	// (0x0002c5ae) thumb_sp_fs_scroll_pane_g1

0xe58b,	// (0x0002c5b7) thumb_sp_fs_scroll_pane_g2

0xe594,	// (0x0002c5c0) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0c0e,	// (0x0001ec3a) thumb_sp_fs_scroll_pane_g

0xe582,	// (0x0002c5ae) bg_sp_fs_scroll_pane_g1

0xe58b,	// (0x0002c5b7) bg_sp_fs_scroll_pane_g2

0xe594,	// (0x0002c5c0) bg_sp_fs_scroll_pane_g3

0x0002,

0x0c0e,	// (0x0001ec3a) bg_sp_fs_scroll_pane_g

0x3202,	// (0x0002122e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3202,	// (0x0002122e) list_medium_line_x2_t3_g4_g1

0x32a8,	// (0x000212d4) list_medium_line_x2_t3_g4_g2_ParamLimits

0x32a8,	// (0x000212d4) list_medium_line_x2_t3_g4_g2

0x320e,	// (0x0002123a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x320e,	// (0x0002123a) list_medium_line_x2_t3_g4_g3

0x321a,	// (0x00021246) list_medium_line_x2_t3_g4_g4_ParamLimits

0x321a,	// (0x00021246) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0002d2ee) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0002d2ee) list_medium_line_x2_t3_g4_g

0x8a0d,	// (0x00026a39) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a0d,	// (0x00026a39) list_medium_line_x2_t3_g4_t1

0x8a23,	// (0x00026a4f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a23,	// (0x00026a4f) list_medium_line_x2_t3_g4_t2

0x324d,	// (0x00021279) list_medium_line_x2_t3_g4_t3_ParamLimits

0x324d,	// (0x00021279) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcb1,	// (0x0002dcdd) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcb1,	// (0x0002dcdd) list_medium_line_x2_t3_g4_t

0x719f,	// (0x000251cb) list_medium_line_g2_g1_ParamLimits

0x719f,	// (0x000251cb) list_medium_line_g2_g1

0x71ab,	// (0x000251d7) list_medium_line_g2_g2_ParamLimits

0x71ab,	// (0x000251d7) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002da2c) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002da2c) list_medium_line_g2_g

0x8a3d,	// (0x00026a69) list_medium_line_g2_t1_ParamLimits

0x8a3d,	// (0x00026a69) list_medium_line_g2_t1

0x719f,	// (0x000251cb) list_medium_line_t3_g2_g1_ParamLimits

0x719f,	// (0x000251cb) list_medium_line_t3_g2_g1

0x71ab,	// (0x000251d7) list_medium_line_t3_g2_g2_ParamLimits

0x71ab,	// (0x000251d7) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002da2c) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002da2c) list_medium_line_t3_g2_g

0x8a52,	// (0x00026a7e) list_medium_line_t3_g2_t1_ParamLimits

0x8a52,	// (0x00026a7e) list_medium_line_t3_g2_t1

0x8a69,	// (0x00026a95) list_medium_line_t3_g2_t2_ParamLimits

0x8a69,	// (0x00026a95) list_medium_line_t3_g2_t2

0x8a7e,	// (0x00026aaa) list_medium_line_t3_g2_t3_ParamLimits

0x8a7e,	// (0x00026aaa) list_medium_line_t3_g2_t3

0x0002,

0xfcb8,	// (0x0002dce4) list_medium_line_t3_g2_t_ParamLimits

0xfcb8,	// (0x0002dce4) list_medium_line_t3_g2_t

0x8672,	// (0x0002669e) list_medium_line_right_icon_g1

0x8a93,	// (0x00026abf) list_medium_line_right_icon_t1

0x719f,	// (0x000251cb) list_medium_line_t2_g1_ParamLimits

0x719f,	// (0x000251cb) list_medium_line_t2_g1

0x8aa1,	// (0x00026acd) list_medium_line_t2_t1_ParamLimits

0x8aa1,	// (0x00026acd) list_medium_line_t2_t1

0x8abb,	// (0x00026ae7) list_medium_line_t2_t2_ParamLimits

0x8abb,	// (0x00026ae7) list_medium_line_t2_t2

0x0001,

0xfcbf,	// (0x0002dceb) list_medium_line_t2_t_ParamLimits

0xfcbf,	// (0x0002dceb) list_medium_line_t2_t

0x719f,	// (0x000251cb) list_medium_line_t3_g1_ParamLimits

0x719f,	// (0x000251cb) list_medium_line_t3_g1

0x8ad0,	// (0x00026afc) list_medium_line_t3_t1_ParamLimits

0x8ad0,	// (0x00026afc) list_medium_line_t3_t1

0x8ae7,	// (0x00026b13) list_medium_line_t3_t2_ParamLimits

0x8ae7,	// (0x00026b13) list_medium_line_t3_t2

0x8afc,	// (0x00026b28) list_medium_line_t3_t3_ParamLimits

0x8afc,	// (0x00026b28) list_medium_line_t3_t3

0x0002,

0xfcc4,	// (0x0002dcf0) list_medium_line_t3_t_ParamLimits

0xfcc4,	// (0x0002dcf0) list_medium_line_t3_t

0x719f,	// (0x000251cb) list_medium_line_g3_g1_ParamLimits

0x719f,	// (0x000251cb) list_medium_line_g3_g1

0x8b0e,	// (0x00026b3a) list_medium_line_g3_g2_ParamLimits

0x8b0e,	// (0x00026b3a) list_medium_line_g3_g2

0x71ab,	// (0x000251d7) list_medium_line_g3_g3_ParamLimits

0x71ab,	// (0x000251d7) list_medium_line_g3_g3

0x0002,

0xfccb,	// (0x0002dcf7) list_medium_line_g3_g_ParamLimits

0xfccb,	// (0x0002dcf7) list_medium_line_g3_g

0x8b1a,	// (0x00026b46) list_medium_line_g3_t1_ParamLimits

0x8b1a,	// (0x00026b46) list_medium_line_g3_t1

0x719f,	// (0x000251cb) list_medium_line_t2_g3_g1_ParamLimits

0x719f,	// (0x000251cb) list_medium_line_t2_g3_g1

0x8b0e,	// (0x00026b3a) list_medium_line_t2_g3_g2_ParamLimits

0x8b0e,	// (0x00026b3a) list_medium_line_t2_g3_g2

0x71ab,	// (0x000251d7) list_medium_line_t2_g3_g3_ParamLimits

0x71ab,	// (0x000251d7) list_medium_line_t2_g3_g3

0x0002,

0xfccb,	// (0x0002dcf7) list_medium_line_t2_g3_g_ParamLimits

0xfccb,	// (0x0002dcf7) list_medium_line_t2_g3_g

0x8b2f,	// (0x00026b5b) list_medium_line_t2_g3_t1_ParamLimits

0x8b2f,	// (0x00026b5b) list_medium_line_t2_g3_t1

0x8b46,	// (0x00026b72) list_medium_line_t2_g3_t2_ParamLimits

0x8b46,	// (0x00026b72) list_medium_line_t2_g3_t2

0x0001,

0xfcd2,	// (0x0002dcfe) list_medium_line_t2_g3_t_ParamLimits

0xfcd2,	// (0x0002dcfe) list_medium_line_t2_g3_t

0x719f,	// (0x000251cb) list_medium_line_t3_g3_g1_ParamLimits

0x719f,	// (0x000251cb) list_medium_line_t3_g3_g1

0x8b0e,	// (0x00026b3a) list_medium_line_t3_g3_g2_ParamLimits

0x8b0e,	// (0x00026b3a) list_medium_line_t3_g3_g2

0x71ab,	// (0x000251d7) list_medium_line_t3_g3_g3_ParamLimits

0x71ab,	// (0x000251d7) list_medium_line_t3_g3_g3

0x0002,

0xfccb,	// (0x0002dcf7) list_medium_line_t3_g3_g_ParamLimits

0xfccb,	// (0x0002dcf7) list_medium_line_t3_g3_g

0x8b5b,	// (0x00026b87) list_medium_line_t3_g3_t1_ParamLimits

0x8b5b,	// (0x00026b87) list_medium_line_t3_g3_t1

0x8b6f,	// (0x00026b9b) list_medium_line_t3_g3_t2_ParamLimits

0x8b6f,	// (0x00026b9b) list_medium_line_t3_g3_t2

0x8b81,	// (0x00026bad) list_medium_line_t3_g3_t3_ParamLimits

0x8b81,	// (0x00026bad) list_medium_line_t3_g3_t3

0x0002,

0xfcd7,	// (0x0002dd03) list_medium_line_t3_g3_t_ParamLimits

0xfcd7,	// (0x0002dd03) list_medium_line_t3_g3_t

0x8806,	// (0x00026832) list_medium_line_right_iconx2_g1

0x8672,	// (0x0002669e) list_medium_line_right_iconx2_g2

0x0001,

0xfcde,	// (0x0002dd0a) list_medium_line_right_iconx2_g

0x8b93,	// (0x00026bbf) list_medium_line_right_iconx2_t1

0x8806,	// (0x00026832) list_medium_line_t2_right_iconx2_g1

0x8672,	// (0x0002669e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcde,	// (0x0002dd0a) list_medium_line_t2_right_iconx2_g

0x8ba1,	// (0x00026bcd) list_medium_line_t2_right_iconx2_t1

0x8bb1,	// (0x00026bdd) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfce3,	// (0x0002dd0f) list_medium_line_t2_right_iconx2_t

0x8bbf,	// (0x00026beb) list_medium_line_x4_t4_t1

0x8bcd,	// (0x00026bf9) list_medium_line_x4_t4_t2

0x8bdd,	// (0x00026c09) list_medium_line_x4_t4_t3

0x8bed,	// (0x00026c19) list_medium_line_x4_t4_t4

0x0003,

0xfce8,	// (0x0002dd14) list_medium_line_x4_t4_t

0x8c27,	// (0x00026c53) tport_appsw_pane_ParamLimits

0x8c27,	// (0x00026c53) tport_appsw_pane

0x8c35,	// (0x00026c61) tport_contact_pane_ParamLimits

0x8c35,	// (0x00026c61) tport_contact_pane

0x8c45,	// (0x00026c71) tport_listscroll_pane_ParamLimits

0x8c45,	// (0x00026c71) tport_listscroll_pane

0x8c55,	// (0x00026c81) cell_tport_appsw_pane_ParamLimits

0x8c55,	// (0x00026c81) cell_tport_appsw_pane

0xcafd,	// (0x0002ab29) tport_appsw_pane_g1_ParamLimits

0xcafd,	// (0x0002ab29) tport_appsw_pane_g1

0xe59d,	// (0x0002c5c9) tport_contact_pane_g1

0xde55,	// (0x0002be81) tport_contact_pane_t1

0xe5a6,	// (0x0002c5d2) tport_contact_pane_t2

0x0001,

0x0c55,	// (0x0001ec81) tport_contact_pane_t

0xe5b4,	// (0x0002c5e0) list_tport_pane

0xe5bd,	// (0x0002c5e9) scroll_pane_cp_030

0x8c88,	// (0x00026cb4) cell_tport_appsw_pane_g1

0x8c98,	// (0x00026cc4) cell_tport_appsw_pane_t1

0x8ca6,	// (0x00026cd2) grid_highlight_pane_cp019

0x8cae,	// (0x00026cda) list_tport_double_graphic_pane_ParamLimits

0x8cae,	// (0x00026cda) list_tport_double_graphic_pane

0xa34c,	// (0x00028378) list_highlight_pane_cp023_ParamLimits

0xa34c,	// (0x00028378) list_highlight_pane_cp023

0x8cbf,	// (0x00026ceb) list_tport_double_graphic_pane_g1_ParamLimits

0x8cbf,	// (0x00026ceb) list_tport_double_graphic_pane_g1

0x8ccc,	// (0x00026cf8) list_tport_double_graphic_pane_t1_ParamLimits

0x8ccc,	// (0x00026cf8) list_tport_double_graphic_pane_t1

0x8ce1,	// (0x00026d0d) list_tport_double_graphic_pane_t2_ParamLimits

0x8ce1,	// (0x00026d0d) list_tport_double_graphic_pane_t2

0x0001,

0xfcf8,	// (0x0002dd24) list_tport_double_graphic_pane_t_ParamLimits

0xfcf8,	// (0x0002dd24) list_tport_double_graphic_pane_t

0x9c03,	// (0x00027c2f) main_cale_note_pane

0x2261,	// (0x0002028d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x2261,	// (0x0002028d) cell_vitu2_function_top_wide_pane_cp01

0x8237,	// (0x00026263) wait_bar_pane_cp05_ParamLimits

0xa34c,	// (0x00028378) listscroll_cmail_pane

0xe5c6,	// (0x0002c5f2) list_cmail_pane

0x8cf3,	// (0x00026d1f) list_cmail_body_pane

0x8d13,	// (0x00026d3f) list_single_cmail_header_caption_pane

0x8d3f,	// (0x00026d6b) list_single_cmail_header_detail_pane_ParamLimits

0x8d3f,	// (0x00026d6b) list_single_cmail_header_detail_pane

0xe5d6,	// (0x0002c602) list_single_cmail_header_caption_pane_t1

0x8d75,	// (0x00026da1) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d75,	// (0x00026da1) list_single_cmail_header_detail_pane_g1

0xe5ed,	// (0x0002c619) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5ed,	// (0x0002c619) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcfd,	// (0x0002dd29) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcfd,	// (0x0002dd29) list_single_cmail_header_detail_pane_g

0xe606,	// (0x0002c632) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe606,	// (0x0002c632) list_single_cmail_header_detail_pane_t1

0xe666,	// (0x0002c692) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe666,	// (0x0002c692) list_single_cmail_header_editor_pane_bg

0xdff6,	// (0x0002c022) list_cmail_body_pane_g1

0xe67d,	// (0x0002c6a9) list_cmail_body_pane_t1

0xd2cf,	// (0x0002b2fb) list_single_cmail_header_editor_pane_bg_g1

0xa76c,	// (0x00028798) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2df,	// (0x0002b30b) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2d7,	// (0x0002b303) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd52f,	// (0x0002b55b) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2ff,	// (0x0002b32b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2ef,	// (0x0002b31b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2f7,	// (0x0002b323) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa74c,	// (0x00028778) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d8b,	// (0x00026db7) calenote_gesture_pane_ParamLimits

0x8d8b,	// (0x00026db7) calenote_gesture_pane

0x8da5,	// (0x00026dd1) calenote_window_pane_ParamLimits

0x8da5,	// (0x00026dd1) calenote_window_pane

0xe68b,	// (0x0002c6b7) popup_note_window_cp01

0x8dbd,	// (0x00026de9) calenote_swipe_1_pane_ParamLimits

0x8dbd,	// (0x00026de9) calenote_swipe_1_pane

0x8614,	// (0x00026640) calenote_swipe_2_pane_ParamLimits

0x8614,	// (0x00026640) calenote_swipe_2_pane

0xe34f,	// (0x0002c37b) calenote_swipe_1_pane_g1_ParamLimits

0xe34f,	// (0x0002c37b) calenote_swipe_1_pane_g1

0xe35c,	// (0x0002c388) calenote_swipe_1_pane_g2_ParamLimits

0xe35c,	// (0x0002c388) calenote_swipe_1_pane_g2

0x0001,

0x0b8f,	// (0x0001ebbb) calenote_swipe_1_pane_g_ParamLimits

0x0b8f,	// (0x0001ebbb) calenote_swipe_1_pane_g

0xe69d,	// (0x0002c6c9) calenote_swipe_1_pane_t1_ParamLimits

0xe69d,	// (0x0002c6c9) calenote_swipe_1_pane_t1

0xe34f,	// (0x0002c37b) calenote_swipe_2_pane_g1_ParamLimits

0xe34f,	// (0x0002c37b) calenote_swipe_2_pane_g1

0xe6bc,	// (0x0002c6e8) calenote_swipe_2_pane_g2_ParamLimits

0xe6bc,	// (0x0002c6e8) calenote_swipe_2_pane_g2

0x0001,

0x0c72,	// (0x0001ec9e) calenote_swipe_2_pane_g_ParamLimits

0x0c72,	// (0x0001ec9e) calenote_swipe_2_pane_g

0xe6c8,	// (0x0002c6f4) calenote_swipe_2_pane_t1_ParamLimits

0xe6c8,	// (0x0002c6f4) calenote_swipe_2_pane_t1

0x9c03,	// (0x00027c2f) main_mup_navstr_pane

0x6158,	// (0x00024184) main_mup3_pane_t7_ParamLimits

0x6158,	// (0x00024184) main_mup3_pane_t7

0x1b64,	// (0x0001fb90) main_mp4_pane_g6_ParamLimits

0x1b64,	// (0x0001fb90) main_mp4_pane_g6

0x1e57,	// (0x0001fe83) main_image3_pane_t4_ParamLimits

0x1e57,	// (0x0001fe83) main_image3_pane_t4

0x8dd0,	// (0x00026dfc) popup_navstr_preview_pane_ParamLimits

0x8dd0,	// (0x00026dfc) popup_navstr_preview_pane

0x8ddc,	// (0x00026e08) scroll_navstr_pane_ParamLimits

0x8ddc,	// (0x00026e08) scroll_navstr_pane

0x9c03,	// (0x00027c2f) bg_popup_preview_window_pane_cp04

0xe6ef,	// (0x0002c71b) popup_navstr_preview_pane_t1

0x8de8,	// (0x00026e14) scroll_navstr_pane_g1_ParamLimits

0x8de8,	// (0x00026e14) scroll_navstr_pane_g1

0x8df5,	// (0x00026e21) scroll_navstr_pane_t1_ParamLimits

0x8df5,	// (0x00026e21) scroll_navstr_pane_t1

0xe694,	// (0x0002c6c0) bg_button_pane_cp014

0xe694,	// (0x0002c6c0) bg_button_pane_cp030

0x8508,	// (0x00026534) list_double_fisheye_pane_g4_ParamLimits

0x8508,	// (0x00026534) list_double_fisheye_pane_g4

0x8514,	// (0x00026540) list_double_fisheye_pane_g5_ParamLimits

0x8514,	// (0x00026540) list_double_fisheye_pane_g5

0xd380,	// (0x0002b3ac) sp_fs_scroll_pane_cp03

0xe427,	// (0x0002c453) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe433,	// (0x0002c45f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0bac,	// (0x0001ebd8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe43f,	// (0x0002c46b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe5ce,	// (0x0002c5fa) sp_fs_scroll_pane_cp02

0xa452,	// (0x0002847e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa452,	// (0x0002847e) popup_sp_fs_calendar_preview_list_single_pane

0x9c03,	// (0x00027c2f) main_cam6_pano_pane

0x150e,	// (0x0001f53a) main_mup3_pane_ParamLimits

0x9c03,	// (0x00027c2f) main_phacti_pane

0x810c,	// (0x00026138) bg_button_pane_cp11

0x8124,	// (0x00026150) main_mobtv_info_pane_g2_ParamLimits

0x8124,	// (0x00026150) main_mobtv_info_pane_g2

0x0001,

0xfbfd,	// (0x0002dc29) main_mobtv_info_pane_g_ParamLimits

0xfbfd,	// (0x0002dc29) main_mobtv_info_pane_g

0x82d6,	// (0x00026302) sc_clock_pane_t5_ParamLimits

0x82d6,	// (0x00026302) sc_clock_pane_t5

0x8379,	// (0x000263a5) main_radioblah_pane_g1_ParamLimits

0xe292,	// (0x0002c2be) main_radioblah_pane_t3_ParamLimits

0xe292,	// (0x0002c2be) main_radioblah_pane_t3

0xe2b3,	// (0x0002c2df) main_radioblah_pane_t4_ParamLimits

0xe2b3,	// (0x0002c2df) main_radioblah_pane_t4

0x8397,	// (0x000263c3) main_radioblah_text_pane_ParamLimits

0x8397,	// (0x000263c3) main_radioblah_text_pane

0x83a4,	// (0x000263d0) main_radioblah_info_pane_g1_ParamLimits

0x8439,	// (0x00026465) main_radioblah_info_pane_t4_ParamLimits

0x8439,	// (0x00026465) main_radioblah_info_pane_t4

0xa34c,	// (0x00028378) main_sp_fs_calendar_pane

0x8e07,	// (0x00026e33) main_phacti_pane_g1

0x8e0f,	// (0x00026e3b) phacti_note_pane_ParamLimits

0x8e0f,	// (0x00026e3b) phacti_note_pane

0xe706,	// (0x0002c732) phacti_term_pane_ParamLimits

0xe706,	// (0x0002c732) phacti_term_pane

0xe71b,	// (0x0002c747) phacti_note_pane_t1_ParamLimits

0xe71b,	// (0x0002c747) phacti_note_pane_t1

0xe732,	// (0x0002c75e) phacti_term_pane_g1

0xe73a,	// (0x0002c766) phacti_term_pane_t1_ParamLimits

0xe73a,	// (0x0002c766) phacti_term_pane_t1

0xe764,	// (0x0002c790) popup_sp_fs_calendar_preview_list_single_pane_g1

0xa56d,	// (0x00028599) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd04,	// (0x0002dd30) popup_sp_fs_calendar_preview_list_single_pane_g

0xe76c,	// (0x0002c798) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe76c,	// (0x0002c798) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe781,	// (0x0002c7ad) aid_popup_sp_fs_bg_corner_pane

0xc809,	// (0x0002a835) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c03,	// (0x00027c2f) popup_sp_fs_calendar_preview_bg_pane

0xe789,	// (0x0002c7b5) popup_sp_fs_calendar_preview_list_pane

0xc3f8,	// (0x0002a424) bg_main_sp_fs_cale_pane_ParamLimits

0xc3f8,	// (0x0002a424) bg_main_sp_fs_cale_pane

0xe791,	// (0x0002c7bd) listscroll_cale_mrui_pane_ParamLimits

0xe791,	// (0x0002c7bd) listscroll_cale_mrui_pane

0xe7a6,	// (0x0002c7d2) listscroll_sp_fs_schedule_track_pane

0xe7af,	// (0x0002c7db) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7af,	// (0x0002c7db) main_sp_fs_ctrlbar_pane_cp01

0xe7c2,	// (0x0002c7ee) main_sp_fs_ribbon_pane

0xe7ca,	// (0x0002c7f6) popup_sp_fs_cale_preview_window

0x8e72,	// (0x00026e9e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e72,	// (0x00026e9e) list_single_sp_fs_schedule_track_pane

0xd247,	// (0x0002b273) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd247,	// (0x0002b273) bg_sp_fs_highlight_list_pane_cp03

0x8e95,	// (0x00026ec1) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e95,	// (0x00026ec1) list_single_sp_fs_schedule_track_pane_g1

0x8ea1,	// (0x00026ecd) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ea1,	// (0x00026ecd) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd09,	// (0x0002dd35) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd09,	// (0x0002dd35) list_single_sp_fs_schedule_track_pane_g

0x8ead,	// (0x00026ed9) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ead,	// (0x00026ed9) list_single_sp_fs_schedule_track_pane_t1

0x8ec5,	// (0x00026ef1) sp_fs_schedule_track_pane_ParamLimits

0x8ec5,	// (0x00026ef1) sp_fs_schedule_track_pane

0xe7dc,	// (0x0002c808) sp_fs_schedule_track_pane_g1

0xe7e4,	// (0x0002c810) sp_fs_schedule_track_pane_g2

0xe7ec,	// (0x0002c818) sp_fs_schedule_track_pane_g3

0xe7f4,	// (0x0002c820) sp_fs_schedule_track_pane_g4

0xe7fc,	// (0x0002c828) sp_fs_schedule_track_pane_g5

0x0004,

0x0c86,	// (0x0001ecb2) sp_fs_schedule_track_pane_g

0xd2cf,	// (0x0002b2fb) bg_sp_fs_schedule_viewer_highlight_g1

0xa76c,	// (0x00028798) bg_sp_fs_schedule_viewer_highlight_g2

0xd2d7,	// (0x0002b303) bg_sp_fs_schedule_viewer_highlight_g3

0xd2df,	// (0x0002b30b) bg_sp_fs_schedule_viewer_highlight_g4

0xd52f,	// (0x0002b55b) bg_sp_fs_schedule_viewer_highlight_g5

0xd2ef,	// (0x0002b31b) bg_sp_fs_schedule_viewer_highlight_g6

0xd2f7,	// (0x0002b323) bg_sp_fs_schedule_viewer_highlight_g7

0xd2ff,	// (0x0002b32b) bg_sp_fs_schedule_viewer_highlight_g8

0xa74c,	// (0x00028778) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd0e,	// (0x0002dd3a) bg_sp_fs_schedule_viewer_highlight_g

0x9c03,	// (0x00027c2f) bg_main_sp_fs_ribbon_pane

0x8ed5,	// (0x00026f01) main_sp_fs_ribbon_pane_g1

0xe804,	// (0x0002c830) main_sp_fs_ribbon_pane_t1

0x8ede,	// (0x00026f0a) main_sp_fs_ribbon_pane_t2

0xe813,	// (0x0002c83f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd21,	// (0x0002dd4d) main_sp_fs_ribbon_pane_t

0xe822,	// (0x0002c84e) main_sp_fs_ribbon_scheduler_pane

0xe82a,	// (0x0002c856) bg_main_sp_fs_ribbon_pane_g1

0xe833,	// (0x0002c85f) bg_main_sp_fs_ribbon_pane_g2

0xe83c,	// (0x0002c868) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0cab,	// (0x0001ecd7) bg_main_sp_fs_ribbon_pane_g

0xe844,	// (0x0002c870) main_sp_fs_ribbon_scheduler_pane_g1

0xe84d,	// (0x0002c879) main_sp_fs_ribbon_scheduler_pane_g2

0xe856,	// (0x0002c882) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0cb2,	// (0x0001ecde) main_sp_fs_ribbon_scheduler_pane_g

0xe85f,	// (0x0002c88b) list_cale_mrui_pane

0x8eed,	// (0x00026f19) sp_fs_scroll_pane_cp07_ParamLimits

0x8eed,	// (0x00026f19) sp_fs_scroll_pane_cp07

0x8f09,	// (0x00026f35) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f09,	// (0x00026f35) bg_sp_fs_schedule_viewer_highlight

0xe86c,	// (0x0002c898) list_single_sp_fs_schedule_track_pane_cp01

0xe874,	// (0x0002c8a0) list_sp_fs_schedule_track_pane

0xe87c,	// (0x0002c8a8) sp_fs_scroll_pane_cp06_ParamLimits

0xe87c,	// (0x0002c8a8) sp_fs_scroll_pane_cp06

0xc809,	// (0x0002a835) bgmain_sp_fs_calendar_pane_g1

0x8f16,	// (0x00026f42) list_single_cale_mrui_pane_ParamLimits

0x8f16,	// (0x00026f42) list_single_cale_mrui_pane

0xe88e,	// (0x0002c8ba) list_single_cale_mrui_row_pane_ParamLimits

0xe88e,	// (0x0002c8ba) list_single_cale_mrui_row_pane

0xe89b,	// (0x0002c8c7) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe89b,	// (0x0002c8c7) list_single_cale_mrui_row_pane_g1

0xe8e0,	// (0x0002c90c) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8e0,	// (0x0002c90c) list_single_cale_mrui_row_pane_t1

0x8f43,	// (0x00026f6f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f43,	// (0x00026f6f) list_single_cale_mrui_row_pane_t2

0xe8f2,	// (0x0002c91e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe8f2,	// (0x0002c91e) list_single_cale_mrui_row_pane_t3

0xe921,	// (0x0002c94d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe921,	// (0x0002c94d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd28,	// (0x0002dd54) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd28,	// (0x0002dd54) list_single_cale_mrui_row_pane_t

0x8fa9,	// (0x00026fd5) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fa9,	// (0x00026fd5) list_single_cmail_header_editor_pane_bg_cp01

0x8fc9,	// (0x00026ff5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fc9,	// (0x00026ff5) list_single_cmail_header_editor_pane_bg_cp02

0x8fe5,	// (0x00027011) main_radioblah_text_pane_t1_ParamLimits

0x8fe5,	// (0x00027011) main_radioblah_text_pane_t1

0xe950,	// (0x0002c97c) cam6_indi_pane_cp01

0xe958,	// (0x0002c984) cam6_mode_pane_cp01

0xe960,	// (0x0002c98c) cam6_pano_pane

0xe969,	// (0x0002c995) cam6_zoom_pane_cp01

0xe971,	// (0x0002c99d) cam6_pano_image_pane

0xe97c,	// (0x0002c9a8) cam6_pano_pane_g1

0xdff6,	// (0x0002c022) cam6_pano_pane_g2

0xe985,	// (0x0002c9b1) cam6_pano_pane_g3

0xe996,	// (0x0002c9c2) cam6_pano_pane_g4

0xcdf8,	// (0x0002ae24) cam6_pano_pane_g5

0xe99f,	// (0x0002c9cb) cam6_pano_pane_g6

0xe98e,	// (0x0002c9ba) cam6_pano_pane_g7

0xe9a9,	// (0x0002c9d5) cam6_pano_pane_g8

0xe9b2,	// (0x0002c9de) cam6_pano_pane_g9

0x0008,

0xfd31,	// (0x0002dd5d) cam6_pano_pane_g

0x9c03,	// (0x00027c2f) main_browser_tag_pane

0xe6e7,	// (0x0002c713) grid_navstr_albumart_pane

0xe9bd,	// (0x0002c9e9) cell_navstr_albumart_pane_ParamLimits

0xe9bd,	// (0x0002c9e9) cell_navstr_albumart_pane

0xe9dd,	// (0x0002ca09) cell_navstr_albumart_pane_g1

0xc209,	// (0x0002a235) cell_navstr_albumart_pane_g2

0xc219,	// (0x0002a245) cell_navstr_albumart_pane_g3

0xc211,	// (0x0002a23d) cell_navstr_albumart_pane_g4

0x0003,

0xfd44,	// (0x0002dd70) cell_navstr_albumart_pane_g

0x9000,	// (0x0002702c) bt_list_pane_ParamLimits

0x9000,	// (0x0002702c) bt_list_pane

0x9020,	// (0x0002704c) bt_list_pane_t1

0x902f,	// (0x0002705b) bt_list_pane_t2

0x0001,

0xfd4d,	// (0x0002dd79) bt_list_pane_t

0x9c03,	// (0x00027c2f) main_cale_prevew_pane

0x903e,	// (0x0002706a) popup_cale_preview_window_ParamLimits

0x903e,	// (0x0002706a) popup_cale_preview_window

0xa34c,	// (0x00028378) bg_popup_preview_window_pane_cp05_ParamLimits

0xa34c,	// (0x00028378) bg_popup_preview_window_pane_cp05

0xe9e5,	// (0x0002ca11) list_cale_preview_pane_ParamLimits

0xe9e5,	// (0x0002ca11) list_cale_preview_pane

0x9057,	// (0x00027083) list_double_cale_preview_pane_ParamLimits

0x9057,	// (0x00027083) list_double_cale_preview_pane

0x9069,	// (0x00027095) list_single_cale_preview_pane_ParamLimits

0x9069,	// (0x00027095) list_single_cale_preview_pane

0x907f,	// (0x000270ab) list_single_cale_preview_pane_g1

0x9087,	// (0x000270b3) list_single_cale_preview_pane_t1_ParamLimits

0x9087,	// (0x000270b3) list_single_cale_preview_pane_t1

0x909c,	// (0x000270c8) list_double_cale_preview_pane_g1

0x90a4,	// (0x000270d0) list_double_cale_preview_pane_t1_ParamLimits

0x90a4,	// (0x000270d0) list_double_cale_preview_pane_t1

0x90b9,	// (0x000270e5) list_double_cale_preview_pane_t2_ParamLimits

0x90b9,	// (0x000270e5) list_double_cale_preview_pane_t2

0x0001,

0xfd52,	// (0x0002dd7e) list_double_cale_preview_pane_t_ParamLimits

0xfd52,	// (0x0002dd7e) list_double_cale_preview_pane_t

0x9c03,	// (0x00027c2f) main_ezdial_pane

0xa34c,	// (0x00028378) main_sp_fs_email_pane_ParamLimits

0x8698,	// (0x000266c4) cmail_ddmenu_btn01_pane_ParamLimits

0x8698,	// (0x000266c4) cmail_ddmenu_btn01_pane

0x86b5,	// (0x000266e1) cmail_ddmenu_btn02_pane_ParamLimits

0x86b5,	// (0x000266e1) cmail_ddmenu_btn02_pane

0x86d3,	// (0x000266ff) cmail_ddmenu_btn03_pane_ParamLimits

0x86d3,	// (0x000266ff) cmail_ddmenu_btn03_pane

0x8701,	// (0x0002672d) main_sp_fs_ctrlbar_pane_ParamLimits

0x8717,	// (0x00026743) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8cf3,	// (0x00026d1f) list_cmail_body_pane_ParamLimits

0xe5e4,	// (0x0002c610) bg_button_pane_cp12

0xe5f9,	// (0x0002c625) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5f9,	// (0x0002c625) list_single_cmail_header_detail_pane_g3

0xe642,	// (0x0002c66e) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe642,	// (0x0002c66e) list_single_cmail_header_detail_pane_t2

0x0001,

0x0c6d,	// (0x0001ec99) list_single_cmail_header_detail_pane_t_ParamLimits

0x0c6d,	// (0x0001ec99) list_single_cmail_header_detail_pane_t

0xe74f,	// (0x0002c77b) phacti_term_pane_t2_ParamLimits

0xe74f,	// (0x0002c77b) phacti_term_pane_t2

0x0001,

0x0c77,	// (0x0001eca3) phacti_term_pane_t_ParamLimits

0x0c77,	// (0x0001eca3) phacti_term_pane_t

0xe9f1,	// (0x0002ca1d) aid_size_list_single_double

0x90d1,	// (0x000270fd) popup_ezdial_listscroll_window

0x90f2,	// (0x0002711e) popup_number_entry_window_cp01

0xa513,	// (0x0002853f) bg_popup_call_pane_cp09

0xe9fd,	// (0x0002ca29) ezdial_list_pane

0xea05,	// (0x0002ca31) scroll_pane_cp23

0xc5e5,	// (0x0002a611) bg_button_pane_cp028_ParamLimits

0xc5e5,	// (0x0002a611) bg_button_pane_cp028

0x9100,	// (0x0002712c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9100,	// (0x0002712c) cmail_ddmenu_btn01_pane_g1

0x9110,	// (0x0002713c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9110,	// (0x0002713c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd57,	// (0x0002dd83) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd57,	// (0x0002dd83) cmail_ddmenu_btn01_pane_g

0xea0d,	// (0x0002ca39) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea0d,	// (0x0002ca39) cmail_ddmenu_btn01_pane_t1

0xc3f8,	// (0x0002a424) bg_button_pane_cp029_ParamLimits

0xc3f8,	// (0x0002a424) bg_button_pane_cp029

0x911c,	// (0x00027148) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x911c,	// (0x00027148) cmail_ddmenu_btn02_pane_g1

0x9134,	// (0x00027160) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9134,	// (0x00027160) cmail_ddmenu_btn02_pane_t1

0xd247,	// (0x0002b273) bg_button_pane_cp031_ParamLimits

0xd247,	// (0x0002b273) bg_button_pane_cp031

0x911c,	// (0x00027148) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x911c,	// (0x00027148) cmail_ddmenu_btn03_pane_g1

0x9134,	// (0x00027160) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9134,	// (0x00027160) cmail_ddmenu_btn03_pane_t1

0x69bf,	// (0x000249eb) cell_dialer2_keypad_pane_t1_ParamLimits

0x69d9,	// (0x00024a05) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x69d9,	// (0x00024a05) cell_dialer2_keypad_pane_t1_copy1

0x7f91,	// (0x00025fbd) ncimui_group_button_pane

0xa34c,	// (0x00028378) main_sp_fs_calendar_pane_ParamLimits

0x8d13,	// (0x00026d3f) list_single_cmail_header_caption_pane_ParamLimits

0xd883,	// (0x0002b8af) aid_recal_txt_sm_pane

0x9c03,	// (0x00027c2f) mian_recal_day_pane

0xe7ca,	// (0x0002c7f6) popup_sp_fs_cale_preview_window_ParamLimits

0xea23,	// (0x0002ca4f) list_recal_day_pane

0xea6e,	// (0x0002ca9a) list_single_recal_day_pane_ParamLimits

0xea6e,	// (0x0002ca9a) list_single_recal_day_pane

0xea80,	// (0x0002caac) list_single_recal_day_pane_g1_ParamLimits

0xea80,	// (0x0002caac) list_single_recal_day_pane_g1

0xea8c,	// (0x0002cab8) list_single_recal_day_pane_g2_ParamLimits

0xea8c,	// (0x0002cab8) list_single_recal_day_pane_g2

0xea9c,	// (0x0002cac8) list_single_recal_day_pane_g3_ParamLimits

0xea9c,	// (0x0002cac8) list_single_recal_day_pane_g3

0x9158,	// (0x00027184) list_single_recal_day_pane_g4_ParamLimits

0x9158,	// (0x00027184) list_single_recal_day_pane_g4

0xeaa8,	// (0x0002cad4) list_single_recal_day_pane_g5_ParamLimits

0xeaa8,	// (0x0002cad4) list_single_recal_day_pane_g5

0xeab8,	// (0x0002cae4) list_single_recal_day_pane_g6_ParamLimits

0xeab8,	// (0x0002cae4) list_single_recal_day_pane_g6

0x0004,

0xfd66,	// (0x0002dd92) list_single_recal_day_pane_g_ParamLimits

0xfd66,	// (0x0002dd92) list_single_recal_day_pane_g

0xeacc,	// (0x0002caf8) list_single_recal_day_pane_t1

0xeae7,	// (0x0002cb13) list_single_recal_day_pane_t2

0x0001,

0xfd71,	// (0x0002dd9d) list_single_recal_day_pane_t

0x9178,	// (0x000271a4) ncimui_query_button_pane_ParamLimits

0x9178,	// (0x000271a4) ncimui_query_button_pane

0x9188,	// (0x000271b4) ncimui_query_button_pane_t1_ParamLimits

0x9188,	// (0x000271b4) ncimui_query_button_pane_t1

0xeaf9,	// (0x0002cb25) ncimui_query_button_pane_t2_ParamLimits

0xeaf9,	// (0x0002cb25) ncimui_query_button_pane_t2

0x0001,

0xfd76,	// (0x0002dda2) ncimui_query_button_pane_t_ParamLimits

0xfd76,	// (0x0002dda2) ncimui_query_button_pane_t

0x919b,	// (0x000271c7) query_button_pane_ParamLimits

0x919b,	// (0x000271c7) query_button_pane

0x9c03,	// (0x00027c2f) bg_button_pane_cp0028

0xeb0c,	// (0x0002cb38) query_button_pane_t1

0x152a,	// (0x0001f556) main_tport_pane_ParamLimits

0x8bfd,	// (0x00026c29) bg_popup_window_pane_cp01_ParamLimits

0x8bfd,	// (0x00026c29) bg_popup_window_pane_cp01

0x8c0b,	// (0x00026c37) heading_pane_cp08_ParamLimits

0x8c0b,	// (0x00026c37) heading_pane_cp08

0x8c19,	// (0x00026c45) heading_pane_cp07_ParamLimits

0x8c19,	// (0x00026c45) heading_pane_cp07

0x8c88,	// (0x00026cb4) cell_tport_appsw_pane_g2

0x0002,

0xfcf1,	// (0x0002dd1d) cell_tport_appsw_pane_g

0xb0e0,	// (0x0002910c) input_candi_list_open_g1

0xa92f,	// (0x0002895b) list_cale_time_pane_g6_ParamLimits

0xa92f,	// (0x0002895b) list_cale_time_pane_g6

0x5bbd,	// (0x00023be9) aid_size_touch_calib_1_ParamLimits

0x5bbd,	// (0x00023be9) aid_size_touch_calib_1

0x5bc9,	// (0x00023bf5) aid_size_touch_calib_2_ParamLimits

0x5bc9,	// (0x00023bf5) aid_size_touch_calib_2

0x5bd7,	// (0x00023c03) aid_size_touch_calib_3_ParamLimits

0x5bd7,	// (0x00023c03) aid_size_touch_calib_3

0x5be7,	// (0x00023c13) aid_size_touch_calib_4_ParamLimits

0x5be7,	// (0x00023c13) aid_size_touch_calib_4

0x5bf5,	// (0x00023c21) main_touch_calib_button_group_pane_ParamLimits

0x5bf5,	// (0x00023c21) main_touch_calib_button_group_pane

0x5c03,	// (0x00023c2f) main_touch_calib_pane_g1_ParamLimits

0x5c0f,	// (0x00023c3b) main_touch_calib_pane_g2_ParamLimits

0x5c1b,	// (0x00023c47) main_touch_calib_pane_g3_ParamLimits

0x5c27,	// (0x00023c53) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0002d77d) main_touch_calib_pane_g_ParamLimits

0x5c33,	// (0x00023c5f) main_touch_calib_pane_t1_ParamLimits

0x5c4c,	// (0x00023c78) main_touch_calib_pane_t2_ParamLimits

0x5c65,	// (0x00023c91) main_touch_calib_pane_t3_ParamLimits

0x5c7b,	// (0x00023ca7) main_touch_calib_pane_t4_ParamLimits

0x5c91,	// (0x00023cbd) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0002d786) main_touch_calib_pane_t_ParamLimits

0xcb98,	// (0x0002abc4) list_single_fp_cale_pane_g3_ParamLimits

0xcb98,	// (0x0002abc4) list_single_fp_cale_pane_g3

0x150e,	// (0x0001f53a) bg_button_pane_cp012_ParamLimits

0x150e,	// (0x0001f53a) bg_vkb2_func_pane_cp03_ParamLimits

0x2466,	// (0x00020492) cell_vitu2_function_top_pane_g1_ParamLimits

0x150e,	// (0x0001f53a) bg_vkb2_func_pane_cp04_ParamLimits

0x7f19,	// (0x00025f45) main_ncimui_button_group_pane_ParamLimits

0x7f19,	// (0x00025f45) main_ncimui_button_group_pane

0x7f7f,	// (0x00025fab) main_ncimui_pane_t3_ParamLimits

0x7f7f,	// (0x00025fab) main_ncimui_pane_t3

0xe6fd,	// (0x0002c729) phacti_button_group_pane

0xe9f1,	// (0x0002ca1d) aid_size_list_single_double_ParamLimits

0x90d1,	// (0x000270fd) popup_ezdial_listscroll_window_ParamLimits

0x90f2,	// (0x0002711e) popup_number_entry_window_cp01_ParamLimits

0x91a8,	// (0x000271d4) phacti_button_pane_ParamLimits

0x91a8,	// (0x000271d4) phacti_button_pane

0x9c03,	// (0x00027c2f) bg_button_pane_cp14

0xeb1a,	// (0x0002cb46) phacti_button_pane_t1

0x91b9,	// (0x000271e5) main_touch_calib_button_pane_ParamLimits

0x91b9,	// (0x000271e5) main_touch_calib_button_pane

0xa340,	// (0x0002836c) bg_button_pane_cp18_ParamLimits

0xa340,	// (0x0002836c) bg_button_pane_cp18

0xeb28,	// (0x0002cb54) main_touch_calib_button_pane_t1_ParamLimits

0xeb28,	// (0x0002cb54) main_touch_calib_button_pane_t1

0xeb3e,	// (0x0002cb6a) main_touch_calib_button_pane_t2_ParamLimits

0xeb3e,	// (0x0002cb6a) main_touch_calib_button_pane_t2

0x0001,

0x0d13,	// (0x0001ed3f) main_touch_calib_button_pane_t_ParamLimits

0x0d13,	// (0x0001ed3f) main_touch_calib_button_pane_t

0x9c03,	// (0x00027c2f) cell_ncimui_button_pane

0x9c03,	// (0x00027c2f) bg_button_pane_cp032

0xeb5c,	// (0x0002cb88) cell_ncimui_button_pane_t1

0x1d6a,	// (0x0001fd96) image3_infobar_pane_ParamLimits

0x1d6a,	// (0x0001fd96) image3_infobar_pane

0x82f8,	// (0x00026324) fs_bigclock_status_pane_ParamLimits

0x82f8,	// (0x00026324) fs_bigclock_status_pane

0x8305,	// (0x00026331) main_fs_bigclock_clock_pane_ParamLimits

0x8305,	// (0x00026331) main_fs_bigclock_clock_pane

0x831f,	// (0x0002634b) main_fs_bigclock_indi_pane_ParamLimits

0x831f,	// (0x0002634b) main_fs_bigclock_indi_pane

0x8347,	// (0x00026373) main_fs_bigclock_swipe_pane_ParamLimits

0x8347,	// (0x00026373) main_fs_bigclock_swipe_pane

0x9c03,	// (0x00027c2f) main_fs_clock_dumped_data

0xe103,	// (0x0002c12f) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe103,	// (0x0002c12f) list_single_fs_bigclock_indicator_pane_g1

0xe11e,	// (0x0002c14a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe11e,	// (0x0002c14a) list_single_fs_bigclock_indicator_pane_g2

0xe138,	// (0x0002c164) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe138,	// (0x0002c164) list_single_fs_bigclock_indicator_pane_g3

0xe152,	// (0x0002c17e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe152,	// (0x0002c17e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x0b40,	// (0x0001eb6c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x0b40,	// (0x0001eb6c) list_single_fs_bigclock_indicator_pane_g

0xe17d,	// (0x0002c1a9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe17d,	// (0x0002c1a9) list_single_fs_bigclock_indicator_pane_t1

0xe1a5,	// (0x0002c1d1) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe1a5,	// (0x0002c1d1) list_single_fs_bigclock_indicator_pane_t2

0xe1cd,	// (0x0002c1f9) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe1cd,	// (0x0002c1f9) list_single_fs_bigclock_indicator_pane_t3

0xe1f5,	// (0x0002c221) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1f5,	// (0x0002c221) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0b4b,	// (0x0001eb77) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0b4b,	// (0x0001eb77) list_single_fs_bigclock_indicator_pane_t

0xeb6a,	// (0x0002cb96) image3_infobar_fav_pane_ParamLimits

0xeb6a,	// (0x0002cb96) image3_infobar_fav_pane

0xeb7a,	// (0x0002cba6) image3_infobar_loc_pane_ParamLimits

0xeb7a,	// (0x0002cba6) image3_infobar_loc_pane

0xeb8e,	// (0x0002cbba) image3_infobar_time_pane_ParamLimits

0xeb8e,	// (0x0002cbba) image3_infobar_time_pane

0xc809,	// (0x0002a835) image3_infobar_time_pane_g1

0xeb9e,	// (0x0002cbca) image3_infobar_time_pane_t1

0xc809,	// (0x0002a835) image3_infobar_loc_pane_g1

0xebac,	// (0x0002cbd8) image3_infobar_loc_pane_g2

0x0001,

0xfd7b,	// (0x0002dda7) image3_infobar_loc_pane_g

0xebb4,	// (0x0002cbe0) image3_infobar_loc_pane_t1

0xc809,	// (0x0002a835) image3_infobar_fav_pane_g1

0xebc2,	// (0x0002cbee) image3_infobar_fav_pane_g2

0x0001,

0xfd80,	// (0x0002ddac) image3_infobar_fav_pane_g

0xebca,	// (0x0002cbf6) fs_bigclock_status_battery_pane

0xebd3,	// (0x0002cbff) fs_bigclock_status_signal_pane

0xebdc,	// (0x0002cc08) fs_bigclock_status_title_pane

0xebe5,	// (0x0002cc11) fs_bigclock_status_signal_pane_g1

0xebee,	// (0x0002cc1a) fs_bigclock_status_signal_pane_g2

0x0001,

0x0d22,	// (0x0001ed4e) fs_bigclock_status_signal_pane_g

0xebf6,	// (0x0002cc22) fs_bigclock_status_battery_pane_g1

0xebff,	// (0x0002cc2b) fs_bigclock_status_battery_pane_g2

0x0001,

0x0d27,	// (0x0001ed53) fs_bigclock_status_battery_pane_g

0xec07,	// (0x0002cc33) fs_bigclock_status_title_pane_t1

0xc809,	// (0x0002a835) main_fs_bigclock_clock_pane_g1

0xec15,	// (0x0002cc41) main_fs_bigclock_clock_pane_g2

0xec1e,	// (0x0002cc4a) main_fs_bigclock_clock_pane_g3

0xec1e,	// (0x0002cc4a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd85,	// (0x0002ddb1) main_fs_bigclock_clock_pane_g

0xec26,	// (0x0002cc52) main_fs_bigclock_clock_pane_t1

0x91c9,	// (0x000271f5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd8e,	// (0x0002ddba) main_fs_bigclock_clock_pane_t

0xec34,	// (0x0002cc60) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec34,	// (0x0002cc60) list_single_fs_bigclock_indicator_pane

0xec45,	// (0x0002cc71) list_single_fs_bigclock_pane_ParamLimits

0xec45,	// (0x0002cc71) list_single_fs_bigclock_pane

0xec6b,	// (0x0002cc97) main_fs_bigclock_indicator_pane_t1

0xec7a,	// (0x0002cca6) list_single_fs_bigclock_pane_g1

0xec82,	// (0x0002ccae) list_single_fs_bigclock_pane_t1

0xc809,	// (0x0002a835) main_fs_bigclock_swipe_pane_g1

0xecc5,	// (0x0002ccf1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd9a,	// (0x0002ddc6) main_fs_bigclock_swipe_pane_g

0xeccd,	// (0x0002ccf9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeccd,	// (0x0002ccf9) main_fs_bigclock_swipe_pane_t1

0x46ce,	// (0x000226fa) call_type_pane_ParamLimits

0x9c03,	// (0x00027c2f) main_btmg_pane

0xe8c7,	// (0x0002c8f3) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8c7,	// (0x0002c8f3) list_single_cale_mrui_row_pane_g2

0x0002,

0x0cb9,	// (0x0001ece5) list_single_cale_mrui_row_pane_g_ParamLimits

0x0cb9,	// (0x0001ece5) list_single_cale_mrui_row_pane_g

0xea4c,	// (0x0002ca78) list_recal_vselct_arw_lo_pane

0xea54,	// (0x0002ca80) list_recal_vselct_arw_up_pane

0xea5c,	// (0x0002ca88) list_recal_vselct_pane

0x921c,	// (0x00027248) btmg_button_pane

0x9228,	// (0x00027254) main_btmg_pane_g1

0x9c03,	// (0x00027c2f) bg_button_pane_cp044

0xecea,	// (0x0002cd16) btmg_button_pane_t1

0xc3e4,	// (0x0002a410) aid_listscroll_gen

0xa34c,	// (0x00028378) main_cntbar_detail_pane

0xe5c6,	// (0x0002c5f2) list_cmail_folder_pane

0xd380,	// (0x0002b3ac) sp_fs_scroll_pane_cp03_ParamLimits

0x8d13,	// (0x00026d3f) list_single_fs_dyc_pane_cp01_ParamLimits

0x8d13,	// (0x00026d3f) list_single_fs_dyc_pane_cp01

0xecf8,	// (0x0002cd24) aid_size_cmail_indent

0xed01,	// (0x0002cd2d) list_single_dyc_row_pane_cp01

0x9250,	// (0x0002727c) cntbar_detail_list_pane_ParamLimits

0x9250,	// (0x0002727c) cntbar_detail_list_pane

0x928a,	// (0x000272b6) main_cntbar_detail_cont_pane_ParamLimits

0x928a,	// (0x000272b6) main_cntbar_detail_cont_pane

0x45e5,	// (0x00022611) scroll_pane_cp032_ParamLimits

0x45e5,	// (0x00022611) scroll_pane_cp032

0x9296,	// (0x000272c2) cntbar_detail_list_event_pane_ParamLimits

0x9296,	// (0x000272c2) cntbar_detail_list_event_pane

0x925c,	// (0x00027288) cntbar_detail_list_shct_pane

0xa7ba,	// (0x000287e6) aid_list_gen

0xed0a,	// (0x0002cd36) aid_scroll

0xed13,	// (0x0002cd3f) aid_size_touch_scroll_bar

0xe2aa,	// (0x0002c2d6) aid_list_double

0x92aa,	// (0x000272d6) aid_list_single

0x7734,	// (0x00025760) aid_list_single_lg

0x92b3,	// (0x000272df) aid_list_z_g_a_sm

0x92bb,	// (0x000272e7) aid_list_z_g_d

0x92c3,	// (0x000272ef) aid_txt_z_prm

0x92d1,	// (0x000272fd) aid_txt_z_prm_cp01

0x92df,	// (0x0002730b) aid_txt_z_sec

0x92ed,	// (0x00027319) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92ed,	// (0x00027319) main_cntbar_detail_cont_pane_g1

0x92fa,	// (0x00027326) main_cntbar_detail_cont_pane_g2_ParamLimits

0x92fa,	// (0x00027326) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd9f,	// (0x0002ddcb) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd9f,	// (0x0002ddcb) main_cntbar_detail_cont_pane_g

0xed1c,	// (0x0002cd48) main_cntbar_detail_cont_pane_t1

0xed2a,	// (0x0002cd56) main_cntbar_detail_cont_pane_t2

0xed38,	// (0x0002cd64) main_cntbar_detail_cont_pane_t3

0x0002,

0x0d50,	// (0x0001ed7c) main_cntbar_detail_cont_pane_t

0x9306,	// (0x00027332) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9306,	// (0x00027332) cell_cntbar_detail_list_shct_pane

0xed46,	// (0x0002cd72) cntbar_detail_list_shct_pane_g1

0xed4f,	// (0x0002cd7b) cntbar_detail_list_shct_pane_g2

0x0001,

0x0d57,	// (0x0001ed83) cntbar_detail_list_shct_pane_g

0x931a,	// (0x00027346) cntbar_detail_list_event_pane_g1_ParamLimits

0x931a,	// (0x00027346) cntbar_detail_list_event_pane_g1

0x9326,	// (0x00027352) cntbar_detail_list_event_pane_g2_ParamLimits

0x9326,	// (0x00027352) cntbar_detail_list_event_pane_g2

0x0005,

0xfda4,	// (0x0002ddd0) cntbar_detail_list_event_pane_g_ParamLimits

0xfda4,	// (0x0002ddd0) cntbar_detail_list_event_pane_g

0x9392,	// (0x000273be) cntbar_detail_list_event_pane_t1_ParamLimits

0x9392,	// (0x000273be) cntbar_detail_list_event_pane_t1

0x93a7,	// (0x000273d3) cntbar_detail_list_event_pane_t2_ParamLimits

0x93a7,	// (0x000273d3) cntbar_detail_list_event_pane_t2

0x0002,

0xfdb1,	// (0x0002dddd) cntbar_detail_list_event_pane_t_ParamLimits

0xfdb1,	// (0x0002dddd) cntbar_detail_list_event_pane_t

0xc809,	// (0x0002a835) cell_cntbar_detail_list_shct_pane_g1

0xaf25,	// (0x00028f51) navi_pane_mv_g3

0xa34c,	// (0x00028378) main_cntbar_detail_pane_ParamLimits

0x9c03,	// (0x00027c2f) main_notif_wgt_pane

0x1aab,	// (0x0001fad7) aid_tch_main_mp4_pane_g4

0x1ce0,	// (0x0001fd0c) popup_slider_window_cp02

0xea42,	// (0x0002ca6e) list_recal_day_event_pane

0x9230,	// (0x0002725c) cntbar_detail_btn_pane_ParamLimits

0x9230,	// (0x0002725c) cntbar_detail_btn_pane

0x9240,	// (0x0002726c) cntbar_detail_btn_pane_cp01_ParamLimits

0x9240,	// (0x0002726c) cntbar_detail_btn_pane_cp01

0x925c,	// (0x00027288) cntbar_detail_list_shct_pane_ParamLimits

0x9268,	// (0x00027294) cntbar_detail_pane_g1_ParamLimits

0x9268,	// (0x00027294) cntbar_detail_pane_g1

0x9274,	// (0x000272a0) cntbar_detail_pane_t1_ParamLimits

0x9274,	// (0x000272a0) cntbar_detail_pane_t1

0x9332,	// (0x0002735e) cntbar_detail_list_event_pane_g3_ParamLimits

0x9332,	// (0x0002735e) cntbar_detail_list_event_pane_g3

0x934a,	// (0x00027376) cntbar_detail_list_event_pane_g4_ParamLimits

0x934a,	// (0x00027376) cntbar_detail_list_event_pane_g4

0x9362,	// (0x0002738e) cntbar_detail_list_event_pane_g5_ParamLimits

0x9362,	// (0x0002738e) cntbar_detail_list_event_pane_g5

0x937a,	// (0x000273a6) cntbar_detail_list_event_pane_g6_ParamLimits

0x937a,	// (0x000273a6) cntbar_detail_list_event_pane_g6

0x93bc,	// (0x000273e8) cntbar_detail_list_event_pane_t3_ParamLimits

0x93bc,	// (0x000273e8) cntbar_detail_list_event_pane_t3

0x93ce,	// (0x000273fa) popup_notif_wgt_window_ParamLimits

0x93ce,	// (0x000273fa) popup_notif_wgt_window

0x93de,	// (0x0002740a) popup_submenu_window_cp01_ParamLimits

0x93de,	// (0x0002740a) popup_submenu_window_cp01

0xa513,	// (0x0002853f) bg_popup_window_pane_cp10

0xed58,	// (0x0002cd84) listscroll_notif_wgt_pane

0xed6a,	// (0x0002cd96) list_notif_wgt_window

0xed73,	// (0x0002cd9f) scroll_pane_cp033

0x93f0,	// (0x0002741c) list_notif_wgt_row_pane_ParamLimits

0x93f0,	// (0x0002741c) list_notif_wgt_row_pane

0xed7c,	// (0x0002cda8) aid_size_list_notif_wgt_del

0xed89,	// (0x0002cdb5) list_notif_wgt_row_pane_g1

0xed95,	// (0x0002cdc1) list_notif_wgt_row_pane_g2

0xeda9,	// (0x0002cdd5) list_notif_wgt_row_pane_g3

0x0002,

0x0d70,	// (0x0001ed9c) list_notif_wgt_row_pane_g

0xedb6,	// (0x0002cde2) list_notif_wgt_row_pane_t1

0xedcc,	// (0x0002cdf8) list_notif_wgt_row_pane_t2

0xedde,	// (0x0002ce0a) list_notif_wgt_row_pane_t3

0x0002,

0x0d77,	// (0x0001eda3) list_notif_wgt_row_pane_t

0xd549,	// (0x0002b575) list_recal_day_event_pane_g1

0xedf0,	// (0x0002ce1c) list_recal_day_event_pane_t1

0x9c03,	// (0x00027c2f) bg_button_pane_cp045

0x9402,	// (0x0002742e) cntbar_detail_btn_pane_t1

0xc3f8,	// (0x0002a424) main_callh_pane_ParamLimits

0xc3f8,	// (0x0002a424) main_callh_pane

0x9c03,	// (0x00027c2f) main_coverflow0_pane

0x9c03,	// (0x00027c2f) main_wgtman_pane

0x835f,	// (0x0002638b) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x835f,	// (0x0002638b) main_fs_bigclock_unlock_btn_pane

0x8c80,	// (0x00026cac) bg_button_pane_cp16

0x8c90,	// (0x00026cbc) cell_tport_appsw_pane_g3

0x9410,	// (0x0002743c) cf0_flow_pane_ParamLimits

0x9410,	// (0x0002743c) cf0_flow_pane

0xedff,	// (0x0002ce2b) listscroll_cf0_pane

0xee0a,	// (0x0002ce36) main_cf0_pane_g1

0x941f,	// (0x0002744b) main_cf0_pane_t1_ParamLimits

0x941f,	// (0x0002744b) main_cf0_pane_t1

0x9433,	// (0x0002745f) main_cf0_pane_t2_ParamLimits

0x9433,	// (0x0002745f) main_cf0_pane_t2

0x0001,

0xfdb8,	// (0x0002dde4) main_cf0_pane_t_ParamLimits

0xfdb8,	// (0x0002dde4) main_cf0_pane_t

0xee1c,	// (0x0002ce48) scroll_pane_cp11

0x9447,	// (0x00027473) cf0_flow_pane_g1

0x944f,	// (0x0002747b) cf0_flow_pane_g2

0x0001,

0xfdbd,	// (0x0002dde9) cf0_flow_pane_g

0x9457,	// (0x00027483) cf0_flow_pane_t1

0x9c03,	// (0x00027c2f) main_call6_pane

0x9c03,	// (0x00027c2f) main_calllock_pane

0x9465,	// (0x00027491) call6_btn_grp_pane_ParamLimits

0x9465,	// (0x00027491) call6_btn_grp_pane

0x9474,	// (0x000274a0) call6_pane_g1_ParamLimits

0x9474,	// (0x000274a0) call6_pane_g1

0x9483,	// (0x000274af) popup_call6_1st_window_ParamLimits

0x9483,	// (0x000274af) popup_call6_1st_window

0x9491,	// (0x000274bd) popup_call6_2nd_window_ParamLimits

0x9491,	// (0x000274bd) popup_call6_2nd_window

0x949f,	// (0x000274cb) cell_call6_btn_pane_ParamLimits

0x949f,	// (0x000274cb) cell_call6_btn_pane

0xa513,	// (0x0002853f) bg_popup_call2_in_pane_cp03

0xee27,	// (0x0002ce53) popup_call6_1st_window_g1

0xee2f,	// (0x0002ce5b) popup_call6_1st_window_g2

0xee37,	// (0x0002ce63) popup_call6_1st_window_g3

0x0002,

0x0d8d,	// (0x0001edb9) popup_call6_1st_window_g

0xee3f,	// (0x0002ce6b) popup_call6_1st_window_t1

0xee4e,	// (0x0002ce7a) popup_call6_1st_window_t2

0xee5e,	// (0x0002ce8a) popup_call6_1st_window_t3

0x0002,

0x0d94,	// (0x0001edc0) popup_call6_1st_window_t

0xa513,	// (0x0002853f) bg_popup_call2_in_pane_cp04

0xee27,	// (0x0002ce53) popup_call6_2nd_window_g1

0xee2f,	// (0x0002ce5b) popup_call6_2nd_window_g2

0xee37,	// (0x0002ce63) popup_call6_2nd_window_g3

0x0002,

0x0d8d,	// (0x0001edb9) popup_call6_2nd_window_g

0xee3f,	// (0x0002ce6b) popup_call6_2nd_window_t1

0x9c03,	// (0x00027c2f) bg_button_pane_cp15

0xee6e,	// (0x0002ce9a) cell_call6_btn_pane_g1

0xee77,	// (0x0002cea3) cell_call6_btn_pane_t1

0x94ae,	// (0x000274da) listscroll_wgtman_pane_ParamLimits

0x94ae,	// (0x000274da) listscroll_wgtman_pane

0x94ca,	// (0x000274f6) wgtman_btn_pane_ParamLimits

0x94ca,	// (0x000274f6) wgtman_btn_pane

0xad2c,	// (0x00028d58) aid_scroll_copy1

0xee86,	// (0x0002ceb2) list_wgtman_pane

0x94ff,	// (0x0002752b) wgtman_btn_pane_g1_ParamLimits

0x94ff,	// (0x0002752b) wgtman_btn_pane_g1

0x9527,	// (0x00027553) wgtman_btn_pane_t1_ParamLimits

0x9527,	// (0x00027553) wgtman_btn_pane_t1

0xee90,	// (0x0002cebc) wgtman_btn_pane_t2_ParamLimits

0xee90,	// (0x0002cebc) wgtman_btn_pane_t2

0x0001,

0xfdc2,	// (0x0002ddee) wgtman_btn_pane_t_ParamLimits

0xfdc2,	// (0x0002ddee) wgtman_btn_pane_t

0x955e,	// (0x0002758a) listrow_wgtman_pane_ParamLimits

0x955e,	// (0x0002758a) listrow_wgtman_pane

0x9579,	// (0x000275a5) listrow_wgtman_pane_g1

0x9586,	// (0x000275b2) listrow_wgtman_pane_g2

0x0001,

0xfdc7,	// (0x0002ddf3) listrow_wgtman_pane_g

0x95a4,	// (0x000275d0) listrow_wgtman_pane_t1

0x95bc,	// (0x000275e8) listrow_wgtman_pane_t2

0x0001,

0xfdcc,	// (0x0002ddf8) listrow_wgtman_pane_t

0x95e2,	// (0x0002760e) wait_bar_pane_cp09

0xeea7,	// (0x0002ced3) main_calllock_btn_pane

0xeeb1,	// (0x0002cedd) main_calllock_pane_g1

0x9c03,	// (0x00027c2f) bg_button_pane_cp17

0xeebd,	// (0x0002cee9) main_calllock_btn_pane_g1

0xeec6,	// (0x0002cef2) main_calllock_btn_pane_t1

0x9c03,	// (0x00027c2f) main_dialer3_pane

0x9c03,	// (0x00027c2f) main_fmrd2_pane

0xc809,	// (0x0002a835) main_fs_bigclock_unlock_btn_pane_g1

0xeedd,	// (0x0002cf09) main_fs_bigclock_unlock_btn_pane_t1

0x95f4,	// (0x00027620) area_fmrd2_info_pane_ParamLimits

0x95f4,	// (0x00027620) area_fmrd2_info_pane

0x9602,	// (0x0002762e) area_fmrd2_visual_pane_ParamLimits

0x9602,	// (0x0002762e) area_fmrd2_visual_pane

0x9610,	// (0x0002763c) fmrd2_indi_pane_ParamLimits

0x9610,	// (0x0002763c) fmrd2_indi_pane

0x961d,	// (0x00027649) area_fmrd2_visual_pane_g1

0x9625,	// (0x00027651) area_fmrd2_visual_pane_t1

0x9635,	// (0x00027661) area_fmrd2_visual_pane_t2

0x9645,	// (0x00027671) area_fmrd2_visual_pane_t3

0x0002,

0xfdd6,	// (0x0002de02) area_fmrd2_visual_pane_t

0x9655,	// (0x00027681) area_fmrd2_info_pane_g1

0x965d,	// (0x00027689) area_fmrd2_info_pane_t1

0x966d,	// (0x00027699) area_fmrd2_info_pane_t2

0x967d,	// (0x000276a9) area_fmrd2_info_pane_t3

0x968d,	// (0x000276b9) area_fmrd2_info_pane_t4

0x0003,

0xfddd,	// (0x0002de09) area_fmrd2_info_pane_t

0x969b,	// (0x000276c7) fmrd2_indi_pane_t1

0x96ab,	// (0x000276d7) fmrd2_indi_pane_t2

0x96bb,	// (0x000276e7) fmrd2_indi_pane_t3

0x0002,

0xfde6,	// (0x0002de12) fmrd2_indi_pane_t

0xe161,	// (0x0002c18d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe161,	// (0x0002c18d) list_single_fs_bigclock_indicator_pane_g5

0xe211,	// (0x0002c23d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe211,	// (0x0002c23d) list_single_fs_bigclock_indicator_pane_t5

0x8e25,	// (0x00026e51) aid_cell_bcale_month_pane_ParamLimits

0x8e25,	// (0x00026e51) aid_cell_bcale_month_pane

0x8e43,	// (0x00026e6f) bcale_month_pane_ParamLimits

0x8e43,	// (0x00026e6f) bcale_month_pane

0x8e61,	// (0x00026e8d) bcale_preview_pane_ParamLimits

0x8e61,	// (0x00026e8d) bcale_preview_pane

0xec82,	// (0x0002ccae) list_single_fs_bigclock_pane_t1_ParamLimits

0xeca1,	// (0x0002cccd) list_single_fs_bigclock_pane_t2_ParamLimits

0xeca1,	// (0x0002cccd) list_single_fs_bigclock_pane_t2

0x0001,

0x0d41,	// (0x0001ed6d) list_single_fs_bigclock_pane_t_ParamLimits

0x0d41,	// (0x0001ed6d) list_single_fs_bigclock_pane_t

0xeed5,	// (0x0002cf01) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd1,	// (0x0002ddfd) main_fs_bigclock_unlock_btn_pane_g

0x96c9,	// (0x000276f5) aid_dia3_key_size_ParamLimits

0x96c9,	// (0x000276f5) aid_dia3_key_size

0x96d5,	// (0x00027701) aid_dia3_listrow_size_ParamLimits

0x96d5,	// (0x00027701) aid_dia3_listrow_size

0x96e5,	// (0x00027711) dia3_keypad_fun_pane_ParamLimits

0x96e5,	// (0x00027711) dia3_keypad_fun_pane

0x96f7,	// (0x00027723) dia3_keypad_num_pane_ParamLimits

0x96f7,	// (0x00027723) dia3_keypad_num_pane

0x9709,	// (0x00027735) dia3_listscroll_pane_ParamLimits

0x9709,	// (0x00027735) dia3_listscroll_pane

0x9717,	// (0x00027743) dia3_numentry_pane_ParamLimits

0x9717,	// (0x00027743) dia3_numentry_pane

0xeeeb,	// (0x0002cf17) dia3_list_pane

0xeef6,	// (0x0002cf22) scroll_pane_cp12

0x9c03,	// (0x00027c2f) bg_dia3_numentry_pane

0x9725,	// (0x00027751) dia3_numentry_pane_t1

0x9734,	// (0x00027760) cell_dia3_key_num_pane

0x973c,	// (0x00027768) cell_dia3_key0_fun_pane_ParamLimits

0x973c,	// (0x00027768) cell_dia3_key0_fun_pane

0x9749,	// (0x00027775) cell_dia3_key1_fun_pane_ParamLimits

0x9749,	// (0x00027775) cell_dia3_key1_fun_pane

0x9756,	// (0x00027782) dia3_listrow_pane

0xde70,	// (0x0002be9c) bg_dia3_numentry_pane_g1

0x9c03,	// (0x00027c2f) bg_button_pane_cp21

0xef01,	// (0x0002cf2d) cell_dia3_key_num_pane_t1

0xef0f,	// (0x0002cf3b) cell_dia3_key_num_pane_t2

0xef1e,	// (0x0002cf4a) cell_dia3_key_num_pane_t3

0xef2d,	// (0x0002cf59) cell_dia3_key_num_pane_t4

0x0003,

0x0dc6,	// (0x0001edf2) cell_dia3_key_num_pane_t

0x9c03,	// (0x00027c2f) bg_button_pane_cp19

0x9763,	// (0x0002778f) cell_dia3_key0_fun_pane_g1

0x9c03,	// (0x00027c2f) bg_button_pane_cp20

0x976b,	// (0x00027797) cell_dia3_key1_fun_pane_g1

0x9773,	// (0x0002779f) area_left_week_number_pane

0x9786,	// (0x000277b2) area_top_day_name_pane

0x9794,	// (0x000277c0) frame_month_view_pane

0xef3c,	// (0x0002cf68) grid_month_view_pane

0x97a9,	// (0x000277d5) cell_top_day_name_pane_ParamLimits

0x97a9,	// (0x000277d5) cell_top_day_name_pane

0x97c3,	// (0x000277ef) cell_area_left_week_number_pane_ParamLimits

0x97c3,	// (0x000277ef) cell_area_left_week_number_pane

0x97e6,	// (0x00027812) cell_month_view_pane_ParamLimits

0x97e6,	// (0x00027812) cell_month_view_pane

0xef4a,	// (0x0002cf76) frm_month_g1

0x9812,	// (0x0002783e) frm_month_g2

0x9823,	// (0x0002784f) frm_month_g3

0x9834,	// (0x00027860) frm_month_g4

0x9845,	// (0x00027871) frm_month_g5

0x9858,	// (0x00027884) frm_month_g6

0x986b,	// (0x00027897) frm_month_g7

0xef57,	// (0x0002cf83) frm_month_g8

0x987e,	// (0x000278aa) frm_month_g9

0x988b,	// (0x000278b7) frm_month_g10

0x9898,	// (0x000278c4) frm_month_g11

0x98a5,	// (0x000278d1) frm_month_g12

0x98b2,	// (0x000278de) frm_month_g13

0x98bf,	// (0x000278eb) frm_month_g14

0x98ce,	// (0x000278fa) frm_month_g15

0x98dd,	// (0x00027909) frm_month_g16

0x000f,

0xfded,	// (0x0002de19) frm_month_g

0xef64,	// (0x0002cf90) cell_top_day_name_pane_t1

0x98ec,	// (0x00027918) cell_area_left_week_number_pane_g1

0x98fb,	// (0x00027927) cell_area_left_week_number_pane_t1

0xca6c,	// (0x0002aa98) cell_month_view_pane_g1

0x9911,	// (0x0002793d) cell_month_view_pane_t1

0x9c03,	// (0x00027c2f) main_fps_pane

0xe3ef,	// (0x0002c41b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3ef,	// (0x0002c41b) cmail_ddmenu_btn02_pane_cp1

0xe40b,	// (0x0002c437) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe40b,	// (0x0002c437) cmail_ddmenu_btn02_pane_cp2

0x9128,	// (0x00027154) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9128,	// (0x00027154) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd5c,	// (0x0002dd88) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd5c,	// (0x0002dd88) cmail_ddmenu_btn02_pane_g

0x9146,	// (0x00027172) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9146,	// (0x00027172) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd61,	// (0x0002dd8d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd61,	// (0x0002dd8d) cmail_ddmenu_btn02_pane_t

0x9927,	// (0x00027953) fps_text_pane_ParamLimits

0x9927,	// (0x00027953) fps_text_pane

0x9934,	// (0x00027960) main_fps_pane_g1_ParamLimits

0x9934,	// (0x00027960) main_fps_pane_g1

0x9942,	// (0x0002796e) wait_bar_pane_cp010_ParamLimits

0x9942,	// (0x0002796e) wait_bar_pane_cp010

0x994e,	// (0x0002797a) fps_text_pane_t1_ParamLimits

0x994e,	// (0x0002797a) fps_text_pane_t1

0x6ad2,	// (0x00024afe) cam4_image_uncrop_pane_g1

0x6adb,	// (0x00024b07) cam4_image_uncrop_pane_g2

0x6ae4,	// (0x00024b10) cam4_image_uncrop_pane_g3

0x6aed,	// (0x00024b19) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002d91a) cam4_image_uncrop_pane_g

0x9756,	// (0x00027782) dia3_listrow_pane_ParamLimits

0x9c03,	// (0x00027c2f) main_phob2_pane

0x8c62,	// (0x00026c8e) cell_tport_appsw_pane_cp02_ParamLimits

0x8c62,	// (0x00026c8e) cell_tport_appsw_pane_cp02

0x8c71,	// (0x00026c9d) cell_tport_appsw_pane_cp03_ParamLimits

0x8c71,	// (0x00026c9d) cell_tport_appsw_pane_cp03

0x9c03,	// (0x00027c2f) phob2_contact_card_pane

0x9c03,	// (0x00027c2f) phob2_listscroll_pane

0xef77,	// (0x0002cfa3) phob2_list_pane

0xef7f,	// (0x0002cfab) scroll_pane_cp034

0x9967,	// (0x00027993) phob2_cc_data_pane_ParamLimits

0x9967,	// (0x00027993) phob2_cc_data_pane

0x9981,	// (0x000279ad) phob2_cc_listscroll_pane_ParamLimits

0x9981,	// (0x000279ad) phob2_cc_listscroll_pane

0x999b,	// (0x000279c7) list_double_large_graphic_phob2_pane_ParamLimits

0x999b,	// (0x000279c7) list_double_large_graphic_phob2_pane

0x99b9,	// (0x000279e5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99b9,	// (0x000279e5) list_double_large_graphic_phob2_pane_g1

0xef87,	// (0x0002cfb3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xef87,	// (0x0002cfb3) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe0e,	// (0x0002de3a) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe0e,	// (0x0002de3a) list_double_large_graphic_phob2_pane_g

0x99cf,	// (0x000279fb) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99cf,	// (0x000279fb) list_double_large_graphic_phob2_pane_t1

0x99e4,	// (0x00027a10) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99e4,	// (0x00027a10) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe13,	// (0x0002de3f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe13,	// (0x0002de3f) list_double_large_graphic_phob2_pane_t

0x9c03,	// (0x00027c2f) list_highlight_pane_cp024

0x99f6,	// (0x00027a22) phob2_cc_button_pane

0x99fe,	// (0x00027a2a) phob2_cc_data_pane_g1_ParamLimits

0x99fe,	// (0x00027a2a) phob2_cc_data_pane_g1

0x9a0a,	// (0x00027a36) phob2_cc_data_pane_g2_ParamLimits

0x9a0a,	// (0x00027a36) phob2_cc_data_pane_g2

0x0001,

0xfe18,	// (0x0002de44) phob2_cc_data_pane_g_ParamLimits

0xfe18,	// (0x0002de44) phob2_cc_data_pane_g

0x9a16,	// (0x00027a42) phob2_cc_data_pane_t1_ParamLimits

0x9a16,	// (0x00027a42) phob2_cc_data_pane_t1

0x9a28,	// (0x00027a54) phob2_cc_data_pane_t2_ParamLimits

0x9a28,	// (0x00027a54) phob2_cc_data_pane_t2

0x9a3a,	// (0x00027a66) phob2_cc_data_pane_t3_ParamLimits

0x9a3a,	// (0x00027a66) phob2_cc_data_pane_t3

0x0002,

0xfe1d,	// (0x0002de49) phob2_cc_data_pane_t_ParamLimits

0xfe1d,	// (0x0002de49) phob2_cc_data_pane_t

0xef93,	// (0x0002cfbf) phob2_cc_list_pane_ParamLimits

0xef93,	// (0x0002cfbf) phob2_cc_list_pane

0xd69d,	// (0x0002b6c9) scroll_pane_cp035_ParamLimits

0xd69d,	// (0x0002b6c9) scroll_pane_cp035

0xa34c,	// (0x00028378) bg_button_pane_cp033

0xef9f,	// (0x0002cfcb) phob2_cc_button_pane_g1

0xefab,	// (0x0002cfd7) phob2_cc_button_pane_t1

0xefc0,	// (0x0002cfec) phob2_cc_button_pane_t2

0x0001,

0x0e06,	// (0x0001ee32) phob2_cc_button_pane_t

0x9a4c,	// (0x00027a78) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a4c,	// (0x00027a78) list_double_large_graphic_phob2_cc_pane

0x9a73,	// (0x00027a9f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a73,	// (0x00027a9f) list_double_large_graphic_phob2_cc_pane_g1

0x9a84,	// (0x00027ab0) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a84,	// (0x00027ab0) list_double_large_graphic_phob2_cc_pane_g2

0x9a93,	// (0x00027abf) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a93,	// (0x00027abf) list_double_large_graphic_phob2_cc_pane_g3

0x9aa2,	// (0x00027ace) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9aa2,	// (0x00027ace) list_double_large_graphic_phob2_cc_pane_g4

0x9ab3,	// (0x00027adf) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9ab3,	// (0x00027adf) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe24,	// (0x0002de50) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe24,	// (0x0002de50) list_double_large_graphic_phob2_cc_pane_g

0x9ac2,	// (0x00027aee) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ac2,	// (0x00027aee) list_double_large_graphic_phob2_cc_pane_t1

0x9aeb,	// (0x00027b17) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9aeb,	// (0x00027b17) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe2f,	// (0x0002de5b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe2f,	// (0x0002de5b) list_double_large_graphic_phob2_cc_pane_t

0xefd2,	// (0x0002cffe) list_highlight_pane_cp025_ParamLimits

0xefd2,	// (0x0002cffe) list_highlight_pane_cp025

0xa34c,	// (0x00028378) bg_button_pane_cp033_ParamLimits

0xef9f,	// (0x0002cfcb) phob2_cc_button_pane_g1_ParamLimits

0xefab,	// (0x0002cfd7) phob2_cc_button_pane_t1_ParamLimits

0xefc0,	// (0x0002cfec) phob2_cc_button_pane_t2_ParamLimits

0x0e06,	// (0x0001ee32) phob2_cc_button_pane_t_ParamLimits

0x2706,	// (0x00020732) popup_wgtman_window

0xd3f5,	// (0x0002b421) scroll_pane_cp038

0x94e7,	// (0x00027513) wgtman_btn_pane_cp_01_ParamLimits

0x94e7,	// (0x00027513) wgtman_btn_pane_cp_01

0xefe0,	// (0x0002d00c) wgtman_content_pane

0xefe9,	// (0x0002d015) wgtman_heading_pane

0x9c03,	// (0x00027c2f) bg_heading_pane_cp02

0xeff2,	// (0x0002d01e) wgtman_heading_pane_g1

0xeffa,	// (0x0002d026) wgtman_heading_pane_t1

0xf008,	// (0x0002d034) scroll_pane_cp036

0xf010,	// (0x0002d03c) wgtman_list_pane

0xf018,	// (0x0002d044) wgtman_list_pane_t1_ParamLimits

0xf018,	// (0x0002d044) wgtman_list_pane_t1

0x1ec6,	// (0x0001fef2) cam4_grid_pane

0x7299,	// (0x000252c5) bg_button_pane_cp015_ParamLimits

0x72ab,	// (0x000252d7) bg_button_pane_cp016_ParamLimits

0x72be,	// (0x000252ea) bg_button_pane_cp017_ParamLimits

0x7314,	// (0x00025340) popup_vitu2_query_window_g3_ParamLimits

0x7314,	// (0x00025340) popup_vitu2_query_window_g3

0x73cf,	// (0x000253fb) popup_vitu2_query_window_t6_ParamLimits

0x73cf,	// (0x000253fb) popup_vitu2_query_window_t6

0x73fa,	// (0x00025426) popup_vitu2_query_window_t7_ParamLimits

0x73fa,	// (0x00025426) popup_vitu2_query_window_t7

0xea65,	// (0x0002ca91) cam4_grid_pane_g1

0xeade,	// (0x0002cb0a) cam4_grid_pane_g2

0xf032,	// (0x0002d05e) cam4_grid_pane_g3

0xf03b,	// (0x0002d067) cam4_grid_pane_g4

0x0003,

0xfe34,	// (0x0002de60) cam4_grid_pane_g

0x338d,	// (0x000213b9) aid_placing_vt_slider_lsc_ParamLimits

0x36d9,	// (0x00021705) vidtel_button_pane_ParamLimits

0x36d9,	// (0x00021705) vidtel_button_pane

0xf046,	// (0x0002d072) bg_button_pane_cp034

0x9b14,	// (0x00027b40) vidtel_button_pane_g1

0xf050,	// (0x0002d07c) vidtel_button_pane_t1

0xd527,	// (0x0002b553) aid_size_vtel_slider_touch

0xd69d,	// (0x0002b6c9) scroll_pane_cp039

0xdeae,	// (0x0002beda) ncim_query_button_pane_cp01_ParamLimits

0xdecd,	// (0x0002bef9) ncimui_query_pane_g1_ParamLimits

0xa34c,	// (0x00028378) input_focus_pane_cp012_ParamLimits

0xdef2,	// (0x0002bf1e) ncim_query_entry_pane_t1_ParamLimits

0xd69d,	// (0x0002b6c9) scroll_pane_cp039_ParamLimits

0xae10,	// (0x00028e3c) navi_pane_bcale_mc_g1

0xae18,	// (0x00028e44) navi_pane_bcale_mc_t1

0xe454,	// (0x0002c480) main_sp_fs_email_pane_g1

0xe460,	// (0x0002c48c) main_sp_fs_email_pane_g2

0x0001,

0x0bb1,	// (0x0001ebdd) main_sp_fs_email_pane_g

0xe8d3,	// (0x0002c8ff) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8d3,	// (0x0002c8ff) list_single_cale_mrui_row_pane_g3

0x916e,	// (0x0002719a) list_single_recal_day_pane_g5_event_pane

0xeac4,	// (0x0002caf0) list_single_recal_day_pane_g7

0xf05e,	// (0x0002d08a) list_recal_day_event_pane_cp01

0xf067,	// (0x0002d093) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0002d09b) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0002d0a3) list_recal_vselct_pane_cp01

0xd549,	// (0x0002b575) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0002d0ad) list_recal_day_event_pane_cp01_t1

0xeacc,	// (0x0002caf8) list_single_recal_day_pane_t1_ParamLimits

0xeae7,	// (0x0002cb13) list_single_recal_day_pane_t2_ParamLimits

0xfd71,	// (0x0002dd9d) list_single_recal_day_pane_t_ParamLimits

0xa27b,	// (0x000282a7) bg_notes_pane_ParamLimits

0xa31e,	// (0x0002834a) list_notes_pane_ParamLimits

0x298d,	// (0x000209b9) scroll_pane_cp06_ParamLimits

0xa340,	// (0x0002836c) main_notes_pane_ParamLimits

0x9c03,	// (0x00027c2f) main_welc_pane

0x9b1c,	// (0x00027b48) main_welc_body_pane_ParamLimits

0x9b1c,	// (0x00027b48) main_welc_body_pane

0x9b36,	// (0x00027b62) main_welc_opti_pane_ParamLimits

0x9b36,	// (0x00027b62) main_welc_opti_pane

0x9b69,	// (0x00027b95) main_welc_pane_t1_ParamLimits

0x9b69,	// (0x00027b95) main_welc_pane_t1

0x9b83,	// (0x00027baf) main_welc_body_row_pane_ParamLimits

0x9b83,	// (0x00027baf) main_welc_body_row_pane

0xd247,	// (0x0002b273) main_welc_opti_row_pane_ParamLimits

0xd247,	// (0x0002b273) main_welc_opti_row_pane

0xf08f,	// (0x0002d0bb) main_welc_opti_row_pane_g1

0x9ba8,	// (0x00027bd4) main_welc_opti_row_pane_t1

0xf097,	// (0x0002d0c3) main_welc_body_row_pane_t1

0xed62,	// (0x0002cd8e) popup_notif_wgt_heading_pane

0xed7c,	// (0x0002cda8) aid_size_list_notif_wgt_del_ParamLimits

0xed89,	// (0x0002cdb5) list_notif_wgt_row_pane_g1_ParamLimits

0xed95,	// (0x0002cdc1) list_notif_wgt_row_pane_g2_ParamLimits

0xeda9,	// (0x0002cdd5) list_notif_wgt_row_pane_g3_ParamLimits

0x0d70,	// (0x0001ed9c) list_notif_wgt_row_pane_g_ParamLimits

0xedb6,	// (0x0002cde2) list_notif_wgt_row_pane_t1_ParamLimits

0xedcc,	// (0x0002cdf8) list_notif_wgt_row_pane_t2_ParamLimits

0xedde,	// (0x0002ce0a) list_notif_wgt_row_pane_t3_ParamLimits

0x0d77,	// (0x0001eda3) list_notif_wgt_row_pane_t_ParamLimits

0x9579,	// (0x000275a5) listrow_wgtman_pane_g1_ParamLimits

0x9586,	// (0x000275b2) listrow_wgtman_pane_g2_ParamLimits

0xfdc7,	// (0x0002ddf3) listrow_wgtman_pane_g_ParamLimits

0x95a4,	// (0x000275d0) listrow_wgtman_pane_t1_ParamLimits

0x95bc,	// (0x000275e8) listrow_wgtman_pane_t2_ParamLimits

0xfdcc,	// (0x0002ddf8) listrow_wgtman_pane_t_ParamLimits

0x95e2,	// (0x0002760e) wait_bar_pane_cp09_ParamLimits

0x9c03,	// (0x00027c2f) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0002d0d2) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0002d0da) popup_notif_wgt_heading_pane_t1

0x9c03,	// (0x00027c2f) main_vids_pane

0x9c03,	// (0x00027c2f) vids_listscroll_pane

0x9bb7,	// (0x00027be3) scroll_pane_cp040

0x9c03,	// (0x00027c2f) vids_list_pane

0x9bc2,	// (0x00027bee) vids_list_double_pane_ParamLimits

0x9bc2,	// (0x00027bee) vids_list_double_pane

0x9bdc,	// (0x00027c08) vids_list_double_pane_g1

0x9be5,	// (0x00027c11) vids_list_double_pane_t1

0x9bf5,	// (0x00027c21) vids_list_double_pane_t2

0x0001,

0xfe42,	// (0x0002de6e) vids_list_double_pane_t

0x150e,	// (0x0001f53a) main_ncimui_pane_ParamLimits

0x7f31,	// (0x00025f5d) main_ncimui_pane_g1_ParamLimits

0x7f3d,	// (0x00025f69) main_ncimui_pane_g2_ParamLimits

0x7f3d,	// (0x00025f69) main_ncimui_pane_g2

0x0001,

0xfbc8,	// (0x0002dbf4) main_ncimui_pane_g_ParamLimits

0xfbc8,	// (0x0002dbf4) main_ncimui_pane_g

0x9b4f,	// (0x00027b7b) main_welc_pane_g1_ParamLimits

0x9b4f,	// (0x00027b7b) main_welc_pane_g1

0x9b5b,	// (0x00027b87) main_welc_pane_g2_ParamLimits

0x9b5b,	// (0x00027b87) main_welc_pane_g2

0x0001,

0xfe3d,	// (0x0002de69) main_welc_pane_g_ParamLimits

0xfe3d,	// (0x0002de69) main_welc_pane_g

0xa27b,	// (0x000282a7) listscroll_mce_pane_ParamLimits

0xaf65,	// (0x00028f91) wait_bar_pane_cp10

0xc3ec,	// (0x0002a418) main_cale_day_pane_ParamLimits

0xc3ec,	// (0x0002a418) main_cale_week_pane_ParamLimits

0xa27b,	// (0x000282a7) main_messa_pane_ParamLimits

0x647a,	// (0x000244a6) main_clock2_btn_pane_ParamLimits

0x647a,	// (0x000244a6) main_clock2_btn_pane

0xcc20,	// (0x0002ac4c) main_clock2_btn_pane_cp01_ParamLimits

0xcc20,	// (0x0002ac4c) main_clock2_btn_pane_cp01

0xe85f,	// (0x0002c88b) list_cale_mrui_pane_ParamLimits

0xee14,	// (0x0002ce40) main_cf0_pane_g2

0x0001,

0x0d7e,	// (0x0001edaa) main_cf0_pane_g

0x9773,	// (0x0002779f) area_left_week_number_pane_ParamLimits

0x9786,	// (0x000277b2) area_top_day_name_pane_ParamLimits

0x9794,	// (0x000277c0) frame_month_view_pane_ParamLimits

0xef3c,	// (0x0002cf68) grid_month_view_pane_ParamLimits

0xef4a,	// (0x0002cf76) frm_month_g1_ParamLimits

0x9812,	// (0x0002783e) frm_month_g2_ParamLimits

0x9823,	// (0x0002784f) frm_month_g3_ParamLimits

0x9834,	// (0x00027860) frm_month_g4_ParamLimits

0x9845,	// (0x00027871) frm_month_g5_ParamLimits

0x9858,	// (0x00027884) frm_month_g6_ParamLimits

0x986b,	// (0x00027897) frm_month_g7_ParamLimits

0xef57,	// (0x0002cf83) frm_month_g8_ParamLimits

0x987e,	// (0x000278aa) frm_month_g9_ParamLimits

0x988b,	// (0x000278b7) frm_month_g10_ParamLimits

0x9898,	// (0x000278c4) frm_month_g11_ParamLimits

0x98a5,	// (0x000278d1) frm_month_g12_ParamLimits

0x98b2,	// (0x000278de) frm_month_g13_ParamLimits

0x98bf,	// (0x000278eb) frm_month_g14_ParamLimits

0x98ce,	// (0x000278fa) frm_month_g15_ParamLimits

0x98dd,	// (0x00027909) frm_month_g16_ParamLimits

0xfded,	// (0x0002de19) frm_month_g_ParamLimits

0xef64,	// (0x0002cf90) cell_top_day_name_pane_t1_ParamLimits

0x98ec,	// (0x00027918) cell_area_left_week_number_pane_g1_ParamLimits

0x98fb,	// (0x00027927) cell_area_left_week_number_pane_t1_ParamLimits

0xca6c,	// (0x0002aa98) cell_month_view_pane_g1_ParamLimits

0x9911,	// (0x0002793d) cell_month_view_pane_t1_ParamLimits

0xa273,	// (0x0002829f) main_clock2_btn_pane_g1

0xf0bc,	// (0x0002d0e8) main_clock2_btn_pane_t1

0xa34c,	// (0x00028378) listscroll_cmail_pane_ParamLimits

0xe454,	// (0x0002c480) main_sp_fs_email_pane_g1_ParamLimits

0xe460,	// (0x0002c48c) main_sp_fs_email_pane_g2_ParamLimits

0x0bb1,	// (0x0001ebdd) main_sp_fs_email_pane_g_ParamLimits

0xea23,	// (0x0002ca4f) list_recal_day_pane_ParamLimits

0xea34,	// (0x0002ca60) mian_recal_day_pane_t1

0x894b,	// (0x00026977) list_single_dyc_row_text_pane_t4_ParamLimits

0x894b,	// (0x00026977) list_single_dyc_row_text_pane_t4

0x8982,	// (0x000269ae) list_single_dyc_row_text_pane_t5_ParamLimits

0x8982,	// (0x000269ae) list_single_dyc_row_text_pane_t5

0xe502,	// (0x0002c52e) list_single_dyc_row_text_pane_t6_ParamLimits

0xe502,	// (0x0002c52e) list_single_dyc_row_text_pane_t6

0x4517,	// (0x00022543) aid_mgn_list_cale_time_pane

0x150e,	// (0x0001f53a) main_gallery2_pane_ParamLimits

0xcc36,	// (0x0002ac62) main_clock2_pane_cp01_t1

0xcc46,	// (0x0002ac72) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0002d7f0) main_clock2_pane_cp01_t

0x2cb2,	// (0x00020cde) cale_week_scroll_pane_g16_ParamLimits

0x2cb2,	// (0x00020cde) cale_week_scroll_pane_g16

0xa513,	// (0x0002853f) vorec_slider_pane
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Normal
