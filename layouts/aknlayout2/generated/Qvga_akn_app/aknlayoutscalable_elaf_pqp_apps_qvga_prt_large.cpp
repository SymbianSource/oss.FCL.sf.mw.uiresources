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

#include "aknlayoutscalable_elaf_pqp_apps_qvga_prt_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000573a4 };

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
0x737f,	// (0x0005e723) Screen

0x7389,	// (0x0005e72d) application_window

0x73dd,	// (0x0005e781) area_bottom_pane_ParamLimits

0x73dd,	// (0x0005e781) area_bottom_pane

0x7419,	// (0x0005e7bd) area_top_pane_ParamLimits

0x7419,	// (0x0005e7bd) area_top_pane

0x7475,	// (0x0005e819) call_video_uplink_pane_ParamLimits

0x7475,	// (0x0005e819) call_video_uplink_pane

0x74b0,	// (0x0005e854) main_pane_ParamLimits

0x74b0,	// (0x0005e854) main_pane

0x2740,	// (0x00059ae4) context_pane

0xa745,	// (0x00061ae9) navi_pane

0xa75f,	// (0x00061b03) popup_cale_events_window_ParamLimits

0xa75f,	// (0x00061b03) popup_cale_events_window

0x2753,	// (0x00059af7) popup_mup_playback_window

0xa776,	// (0x00061b1a) signal_pane

0x8040,	// (0x0005f3e4) main_browser_pane

0x1288,	// (0x0005862c) main_burst_pane

0x75df,	// (0x0005e983) main_calc_pane

0x1288,	// (0x0005862c) main_cale_day_pane

0x8361,	// (0x0005f705) main_cale_month_pane

0x1288,	// (0x0005862c) main_cale_week_pane

0x1288,	// (0x0005862c) main_call_pane

0x7aa4,	// (0x0005ee48) main_call_poc_pane

0x1288,	// (0x0005862c) main_camera_pane

0x1288,	// (0x0005862c) main_chi_dic_pane

0x1087,	// (0x0005842b) main_clock_pane

0x7aa4,	// (0x0005ee48) main_fmradio_pane

0x1288,	// (0x0005862c) main_graph_messa_pane

0x7aa4,	// (0x0005ee48) main_help_pane

0x8040,	// (0x0005f3e4) main_im_pane

0x7cff,	// (0x0005f0a3) main_image_pane_ParamLimits

0x7cff,	// (0x0005f0a3) main_image_pane

0x7aa4,	// (0x0005ee48) main_location2_pane

0x1288,	// (0x0005862c) main_location_pane

0x7aa4,	// (0x0005ee48) main_messa_pane

0x7aa4,	// (0x0005ee48) main_mp2_pane

0x1288,	// (0x0005862c) main_mp_pane

0x7aa4,	// (0x0005ee48) main_msg_pane

0x7aa4,	// (0x0005ee48) main_mup_eq_pane

0x7aa4,	// (0x0005ee48) main_mup_pane

0x1288,	// (0x0005862c) main_notes_pane

0x7aa4,	// (0x0005ee48) main_pec_pane

0x7aa4,	// (0x0005ee48) main_phob_pane

0x7aa4,	// (0x0005ee48) main_pinb_pane

0x7aa4,	// (0x0005ee48) main_postcard_pane

0x7aa4,	// (0x0005ee48) main_qdial_pane

0x1288,	// (0x0005862c) main_skin_pane

0x7aa4,	// (0x0005ee48) main_smil2_pane

0x1288,	// (0x0005862c) main_smil_pane

0x1288,	// (0x0005862c) main_video_pane

0x1288,	// (0x0005862c) main_video_tele_pane

0x7cff,	// (0x0005f0a3) main_viewer_pane_ParamLimits

0x7cff,	// (0x0005f0a3) main_viewer_pane

0x1288,	// (0x0005862c) main_vorec_pane

0xa677,	// (0x00061a1b) popup_blid_sat_info_window_ParamLimits

0xa677,	// (0x00061a1b) popup_blid_sat_info_window

0xa68b,	// (0x00061a2f) popup_dyc_status_message_window_ParamLimits

0xa68b,	// (0x00061a2f) popup_dyc_status_message_window

0xa697,	// (0x00061a3b) popup_grid_large_graphic_window_ParamLimits

0xa697,	// (0x00061a3b) popup_grid_large_graphic_window

0xa6ef,	// (0x00061a93) popup_loc_request_window_ParamLimits

0xa6ef,	// (0x00061a93) popup_loc_request_window

0xa71f,	// (0x00061ac3) popup_wml_address_window_ParamLimits

0xa71f,	// (0x00061ac3) popup_wml_address_window

0xa54e,	// (0x000618f2) call_muted_g1

0xa289,	// (0x0006162d) popup_call_audio_conf_window_ParamLimits

0xa289,	// (0x0006162d) popup_call_audio_conf_window

0xa55e,	// (0x00061902) popup_call_audio_first_window_ParamLimits

0xa55e,	// (0x00061902) popup_call_audio_first_window

0xa592,	// (0x00061936) popup_call_audio_in_window_ParamLimits

0xa592,	// (0x00061936) popup_call_audio_in_window

0xa5ae,	// (0x00061952) popup_call_audio_out_window_ParamLimits

0xa5ae,	// (0x00061952) popup_call_audio_out_window

0xa5ca,	// (0x0006196e) popup_call_audio_second_window_ParamLimits

0xa5ca,	// (0x0006196e) popup_call_audio_second_window

0xa5f2,	// (0x00061996) popup_call_audio_wait_window_ParamLimits

0xa5f2,	// (0x00061996) popup_call_audio_wait_window

0xa611,	// (0x000619b5) popup_number_entry_window_ParamLimits

0xa611,	// (0x000619b5) popup_number_entry_window

0x763a,	// (0x0005e9de) bg_popup_call_pane_cp05_ParamLimits

0x763a,	// (0x0005e9de) bg_popup_call_pane_cp05

0x765a,	// (0x0005e9fe) popup_number_entry_window_t1

0x766d,	// (0x0005ea11) popup_number_entry_window_t2

0x767f,	// (0x0005ea23) popup_number_entry_window_t3

0x0003,

0xf12f,	// (0x000664d3) popup_number_entry_window_t

0x76c6,	// (0x0005ea6a) text_title_cp2

0x76d9,	// (0x0005ea7d) bg_popup_call_pane_cp_ParamLimits

0x76d9,	// (0x0005ea7d) bg_popup_call_pane_cp

0x76e7,	// (0x0005ea8b) call_thumbnail_pane

0x76ef,	// (0x0005ea93) popup_call_audio_in_window_g1_ParamLimits

0x76ef,	// (0x0005ea93) popup_call_audio_in_window_g1

0x76fb,	// (0x0005ea9f) popup_call_audio_in_window_g2_ParamLimits

0x76fb,	// (0x0005ea9f) popup_call_audio_in_window_g2

0x7707,	// (0x0005eaab) popup_call_audio_in_window_g3_ParamLimits

0x7707,	// (0x0005eaab) popup_call_audio_in_window_g3

0x0002,

0xf138,	// (0x000664dc) popup_call_audio_in_window_g_ParamLimits

0xf138,	// (0x000664dc) popup_call_audio_in_window_g

0x7713,	// (0x0005eab7) popup_call_audio_in_window_t1_ParamLimits

0x7713,	// (0x0005eab7) popup_call_audio_in_window_t1

0x772e,	// (0x0005ead2) popup_call_audio_in_window_t2_ParamLimits

0x772e,	// (0x0005ead2) popup_call_audio_in_window_t2

0x7749,	// (0x0005eaed) popup_call_audio_in_window_t3_ParamLimits

0x7749,	// (0x0005eaed) popup_call_audio_in_window_t3

0x0002,

0xf13f,	// (0x000664e3) popup_call_audio_in_window_t_ParamLimits

0xf13f,	// (0x000664e3) popup_call_audio_in_window_t

0x76d9,	// (0x0005ea7d) bg_popup_call_pane_cp01_ParamLimits

0x76d9,	// (0x0005ea7d) bg_popup_call_pane_cp01

0x76e7,	// (0x0005ea8b) call_thumbnail_pane_cp02

0x775c,	// (0x0005eb00) call_type_pane_cp022

0x7764,	// (0x0005eb08) popup_call_audio_out_window_g1_ParamLimits

0x7764,	// (0x0005eb08) popup_call_audio_out_window_g1

0x7776,	// (0x0005eb1a) popup_call_audio_out_window_g2_ParamLimits

0x7776,	// (0x0005eb1a) popup_call_audio_out_window_g2

0x7782,	// (0x0005eb26) popup_call_audio_out_window_g3_ParamLimits

0x7782,	// (0x0005eb26) popup_call_audio_out_window_g3

0x0002,

0xf146,	// (0x000664ea) popup_call_audio_out_window_g_ParamLimits

0xf146,	// (0x000664ea) popup_call_audio_out_window_g

0x7794,	// (0x0005eb38) popup_call_audio_out_window_t1_ParamLimits

0x7794,	// (0x0005eb38) popup_call_audio_out_window_t1

0x77ac,	// (0x0005eb50) popup_call_audio_out_window_t2_ParamLimits

0x77ac,	// (0x0005eb50) popup_call_audio_out_window_t2

0x0001,

0xf14d,	// (0x000664f1) popup_call_audio_out_window_t_ParamLimits

0xf14d,	// (0x000664f1) popup_call_audio_out_window_t

0x77c1,	// (0x0005eb65) bg_popup_call_pane_ParamLimits

0x77c1,	// (0x0005eb65) bg_popup_call_pane

0x7845,	// (0x0005ebe9) call_thumbnail_pane_cp_ParamLimits

0x7845,	// (0x0005ebe9) call_thumbnail_pane_cp

0x7869,	// (0x0005ec0d) call_type_pane_cp01_ParamLimits

0x7869,	// (0x0005ec0d) call_type_pane_cp01

0x78ad,	// (0x0005ec51) popup_call_audio_first_window_g1_ParamLimits

0x78ad,	// (0x0005ec51) popup_call_audio_first_window_g1

0x78f9,	// (0x0005ec9d) popup_call_audio_first_window_g2_ParamLimits

0x78f9,	// (0x0005ec9d) popup_call_audio_first_window_g2

0x0001,

0xf152,	// (0x000664f6) popup_call_audio_first_window_g_ParamLimits

0xf152,	// (0x000664f6) popup_call_audio_first_window_g

0x793d,	// (0x0005ece1) popup_call_audio_first_window_t1_ParamLimits

0x793d,	// (0x0005ece1) popup_call_audio_first_window_t1

0x79e9,	// (0x0005ed8d) popup_call_audio_first_window_t4_ParamLimits

0x79e9,	// (0x0005ed8d) popup_call_audio_first_window_t4

0x7a75,	// (0x0005ee19) popup_call_audio_first_window_t5_ParamLimits

0x7a75,	// (0x0005ee19) popup_call_audio_first_window_t5

0x0002,

0xf157,	// (0x000664fb) popup_call_audio_first_window_t_ParamLimits

0xf157,	// (0x000664fb) popup_call_audio_first_window_t

0x7aa4,	// (0x0005ee48) bg_popup_call_pane_cp02

0x7aae,	// (0x0005ee52) call_type_pane_cp023

0x7ab6,	// (0x0005ee5a) popup_call_audio_wait_window_g1

0x7abe,	// (0x0005ee62) popup_call_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00066502) popup_call_audio_wait_window_g

0x7ac6,	// (0x0005ee6a) popup_call_audio_wait_window_t3

0x7ad4,	// (0x0005ee78) bg_popup_call_pane_cp03_ParamLimits

0x7ad4,	// (0x0005ee78) bg_popup_call_pane_cp03

0x7b34,	// (0x0005eed8) call_thumbnail_pane_cp011_ParamLimits

0x7b34,	// (0x0005eed8) call_thumbnail_pane_cp011

0x7b40,	// (0x0005eee4) call_type_pane_cp034_ParamLimits

0x7b40,	// (0x0005eee4) call_type_pane_cp034

0x7b7c,	// (0x0005ef20) popup_call_audio_second_window_g1_ParamLimits

0x7b7c,	// (0x0005ef20) popup_call_audio_second_window_g1

0x7bb8,	// (0x0005ef5c) popup_call_audio_second_window_g2_ParamLimits

0x7bb8,	// (0x0005ef5c) popup_call_audio_second_window_g2

0x0001,

0xf163,	// (0x00066507) popup_call_audio_second_window_g_ParamLimits

0xf163,	// (0x00066507) popup_call_audio_second_window_g

0x7bf4,	// (0x0005ef98) popup_call_audio_second_window_t1_ParamLimits

0x7bf4,	// (0x0005ef98) popup_call_audio_second_window_t1

0x7c75,	// (0x0005f019) popup_call_audio_second_window_t2_ParamLimits

0x7c75,	// (0x0005f019) popup_call_audio_second_window_t2

0x7cab,	// (0x0005f04f) popup_call_audio_second_window_t3_ParamLimits

0x7cab,	// (0x0005f04f) popup_call_audio_second_window_t3

0x0002,

0xf168,	// (0x0006650c) popup_call_audio_second_window_t_ParamLimits

0xf168,	// (0x0006650c) popup_call_audio_second_window_t

0x7aa4,	// (0x0005ee48) bg_popup_call_pane_cp04

0x7ce1,	// (0x0005f085) list_conf_pane

0x7ce9,	// (0x0005f08d) popup_call_audio_conf_window_t1

0x7cf7,	// (0x0005f09b) call_thumbnail_pane_g1

0x7cff,	// (0x0005f0a3) bg_pinb_pane_ParamLimits

0x7cff,	// (0x0005f0a3) bg_pinb_pane

0x7d0d,	// (0x0005f0b1) find_pinb_pane

0x7d16,	// (0x0005f0ba) listscroll_pinb_pane_ParamLimits

0x7d16,	// (0x0005f0ba) listscroll_pinb_pane

0x7d25,	// (0x0005f0c9) pinb_bg_pane_g1

0x7d2f,	// (0x0005f0d3) pinb_bg_pane_g2

0x7d39,	// (0x0005f0dd) pinb_bg_pane_g3

0x7d43,	// (0x0005f0e7) pinb_bg_pane_g4

0x7d4d,	// (0x0005f0f1) pinb_bg_pane_g5

0x7d57,	// (0x0005f0fb) pinb_bg_pane_g6

0x7d62,	// (0x0005f106) pinb_bg_pane_g7

0x7d6d,	// (0x0005f111) pinb_bg_pane_g8

0x7d76,	// (0x0005f11a) pinb_bg_pane_g9

0x7d7e,	// (0x0005f122) pinb_bg_pane_g10

0x0009,

0xf16f,	// (0x00066513) pinb_bg_pane_g

0x7d9b,	// (0x0005f13f) grid_pinb_pane

0x7da4,	// (0x0005f148) list_pinb_pane

0x7daf,	// (0x0005f153) scroll_pane_cp01_ParamLimits

0x7daf,	// (0x0005f153) scroll_pane_cp01

0x7dbf,	// (0x0005f163) find_pinb_pane_g1_ParamLimits

0x7dbf,	// (0x0005f163) find_pinb_pane_g1

0x7dd7,	// (0x0005f17b) find_pinb_pane_t1

0x7de9,	// (0x0005f18d) find_pinb_pane_t2

0x0001,

0xf189,	// (0x0006652d) find_pinb_pane_t

0x7dfe,	// (0x0005f1a2) input_focus_pane_cp01_ParamLimits

0x7dfe,	// (0x0005f1a2) input_focus_pane_cp01

0x7e0a,	// (0x0005f1ae) cell_pinb_pane_ParamLimits

0x7e0a,	// (0x0005f1ae) cell_pinb_pane

0x7e23,	// (0x0005f1c7) cell_pinb_pane_g1_ParamLimits

0x7e23,	// (0x0005f1c7) cell_pinb_pane_g1

0x7e37,	// (0x0005f1db) cell_pinb_pane_g2_ParamLimits

0x7e37,	// (0x0005f1db) cell_pinb_pane_g2

0x7e43,	// (0x0005f1e7) cell_pinb_pane_g3_ParamLimits

0x7e43,	// (0x0005f1e7) cell_pinb_pane_g3

0x0002,

0xf18e,	// (0x00066532) cell_pinb_pane_g_ParamLimits

0xf18e,	// (0x00066532) cell_pinb_pane_g

0x7aa4,	// (0x0005ee48) grid_highlight_pane_cp01

0x7e4f,	// (0x0005f1f3) list_pinb_item_pane_ParamLimits

0x7e4f,	// (0x0005f1f3) list_pinb_item_pane

0x7aa4,	// (0x0005ee48) list_highlight_pane_cp02

0x7e64,	// (0x0005f208) list_pinb_item_pane_g1_ParamLimits

0x7e64,	// (0x0005f208) list_pinb_item_pane_g1

0x7e71,	// (0x0005f215) list_pinb_item_pane_g2_ParamLimits

0x7e71,	// (0x0005f215) list_pinb_item_pane_g2

0x7e7d,	// (0x0005f221) list_pinb_item_pane_g3_ParamLimits

0x7e7d,	// (0x0005f221) list_pinb_item_pane_g3

0x7e8c,	// (0x0005f230) list_pinb_item_pane_g4_ParamLimits

0x7e8c,	// (0x0005f230) list_pinb_item_pane_g4

0x0003,

0xf195,	// (0x00066539) list_pinb_item_pane_g_ParamLimits

0xf195,	// (0x00066539) list_pinb_item_pane_g

0x7e98,	// (0x0005f23c) list_pinb_item_pane_t1_ParamLimits

0x7e98,	// (0x0005f23c) list_pinb_item_pane_t1

0x7ec9,	// (0x0005f26d) calc_display_pane

0x7ee1,	// (0x0005f285) calc_paper_pane

0x7efd,	// (0x0005f2a1) grid_calc_pane

0x7aa4,	// (0x0005ee48) bg_list_pane_cp01

0x7f1d,	// (0x0005f2c1) clock_g1

0x7f25,	// (0x0005f2c9) clock_g2

0x0001,

0xf19e,	// (0x00066542) clock_g

0x7f2d,	// (0x0005f2d1) clock_t1_ParamLimits

0x7f2d,	// (0x0005f2d1) clock_t1

0x7f42,	// (0x0005f2e6) clock_t2_ParamLimits

0x7f42,	// (0x0005f2e6) clock_t2

0x7f54,	// (0x0005f2f8) clock_t3_ParamLimits

0x7f54,	// (0x0005f2f8) clock_t3

0x7f66,	// (0x0005f30a) clock_t4_ParamLimits

0x7f66,	// (0x0005f30a) clock_t4

0x7f78,	// (0x0005f31c) clock_t5_ParamLimits

0x7f78,	// (0x0005f31c) clock_t5

0x7f8d,	// (0x0005f331) clock_t6_ParamLimits

0x7f8d,	// (0x0005f331) clock_t6

0x7f9f,	// (0x0005f343) clock_t7_ParamLimits

0x7f9f,	// (0x0005f343) clock_t7

0x7fb1,	// (0x0005f355) clock_t8_ParamLimits

0x7fb1,	// (0x0005f355) clock_t8

0x7fc3,	// (0x0005f367) clock_t9_ParamLimits

0x7fc3,	// (0x0005f367) clock_t9

0x0008,

0xf1a3,	// (0x00066547) clock_t_ParamLimits

0xf1a3,	// (0x00066547) clock_t

0x7fd5,	// (0x0005f379) popup_clock_analogue_window_cp02

0x7fd5,	// (0x0005f379) popup_clock_digital_window_cp01

0x7fdd,	// (0x0005f381) listscroll_help_pane

0x7aa4,	// (0x0005ee48) phob_pre_status_pane

0x7fe7,	// (0x0005f38b) grid_qdial_pane

0x7aa4,	// (0x0005ee48) listscroll_mce_pane

0x7ff1,	// (0x0005f395) bg_notes_pane

0x7ffb,	// (0x0005f39f) list_notes_pane

0x8005,	// (0x0005f3a9) scroll_pane_cp06

0x800e,	// (0x0005f3b2) bg_calc_paper_pane

0x8026,	// (0x0005f3ca) list_calc_pane

0x8040,	// (0x0005f3e4) bg_calc_display_pane

0x804c,	// (0x0005f3f0) calc_display_pane_t1

0x8061,	// (0x0005f405) calc_display_pane_t2

0x8076,	// (0x0005f41a) calc_display_pane_t3

0x0002,

0xf1b6,	// (0x0006655a) calc_display_pane_t

0x8088,	// (0x0005f42c) cell_calc_pane_ParamLimits

0x8088,	// (0x0005f42c) cell_calc_pane

0x80af,	// (0x0005f453) bg_calc_paper_pane_g1

0x80bb,	// (0x0005f45f) bg_calc_paper_pane_g2

0x80c7,	// (0x0005f46b) bg_calc_paper_pane_g3

0x80d3,	// (0x0005f477) bg_calc_paper_pane_g4

0x80df,	// (0x0005f483) bg_calc_paper_pane_g5

0x80eb,	// (0x0005f48f) bg_calc_paper_pane_g6

0x80fa,	// (0x0005f49e) bg_calc_paper_pane_g7

0x8109,	// (0x0005f4ad) bg_calc_paper_pane_g8

0x0007,

0xf1bd,	// (0x00066561) bg_calc_paper_pane_g

0x8118,	// (0x0005f4bc) calc_bg_paper_pane_g9

0x8127,	// (0x0005f4cb) list_calc_item_pane_ParamLimits

0x8127,	// (0x0005f4cb) list_calc_item_pane

0x8140,	// (0x0005f4e4) list_calc_item_pane_g1

0x814d,	// (0x0005f4f1) list_calc_item_pane_t1_ParamLimits

0x814d,	// (0x0005f4f1) list_calc_item_pane_t1

0x815f,	// (0x0005f503) list_calc_item_pane_t2_ParamLimits

0x815f,	// (0x0005f503) list_calc_item_pane_t2

0x0001,

0xf1ce,	// (0x00066572) list_calc_item_pane_t_ParamLimits

0xf1ce,	// (0x00066572) list_calc_item_pane_t

0x8175,	// (0x0005f519) cell_calc_pane_g1

0x8197,	// (0x0005f53b) grid_highlight_pane_cp02

0x81b9,	// (0x0005f55d) bg_calc_display_pane_g1

0x81c2,	// (0x0005f566) bg_calc_display_pane_g2

0x81cc,	// (0x0005f570) bg_calc_display_pane_g3

0x0002,

0xf1d8,	// (0x0006657c) bg_calc_display_pane_g

0x81d5,	// (0x0005f579) cell_qdial_pane_ParamLimits

0x81d5,	// (0x0005f579) cell_qdial_pane

0x81e7,	// (0x0005f58b) cell_qdial_pane_g1_ParamLimits

0x81e7,	// (0x0005f58b) cell_qdial_pane_g1

0x81f4,	// (0x0005f598) cell_qdial_pane_g2_ParamLimits

0x81f4,	// (0x0005f598) cell_qdial_pane_g2

0x8205,	// (0x0005f5a9) cell_qdial_pane_g3_ParamLimits

0x8205,	// (0x0005f5a9) cell_qdial_pane_g3

0x0003,

0xf1df,	// (0x00066583) cell_qdial_pane_g_ParamLimits

0xf1df,	// (0x00066583) cell_qdial_pane_g

0x821e,	// (0x0005f5c2) cell_qdial_pane_t1_ParamLimits

0x821e,	// (0x0005f5c2) cell_qdial_pane_t1

0x8236,	// (0x0005f5da) cell_qdial_pane_t2_ParamLimits

0x8236,	// (0x0005f5da) cell_qdial_pane_t2

0x8249,	// (0x0005f5ed) cell_qdial_pane_t3_ParamLimits

0x8249,	// (0x0005f5ed) cell_qdial_pane_t3

0x0002,

0xf1e8,	// (0x0006658c) cell_qdial_pane_t_ParamLimits

0xf1e8,	// (0x0006658c) cell_qdial_pane_t

0x7aa4,	// (0x0005ee48) grid_highlight_pane_cp04

0x825c,	// (0x0005f600) thumbnail_qdial_pane_ParamLimits

0x825c,	// (0x0005f600) thumbnail_qdial_pane

0x82b8,	// (0x0005f65c) list_help_pane

0x82c2,	// (0x0005f666) scroll_pane_cp02

0x82cb,	// (0x0005f66f) help_list_pane_t1_ParamLimits

0x82cb,	// (0x0005f66f) help_list_pane_t1

0x82e9,	// (0x0005f68d) bg_notes_pane_g2

0x82f1,	// (0x0005f695) bg_notes_pane_g3

0x82f9,	// (0x0005f69d) notes_bg_pane_g1

0x8301,	// (0x0005f6a5) notes_bg_pane_g4

0x8309,	// (0x0005f6ad) notes_bg_pane_g5

0x8311,	// (0x0005f6b5) notes_bg_pane_g6

0x8319,	// (0x0005f6bd) notes_bg_pane_g7

0x8321,	// (0x0005f6c5) notes_bg_pane_g8

0x8329,	// (0x0005f6cd) notes_bg_pane_g9

0x0006,

0xf206,	// (0x000665aa) notes_bg_pane_g

0x8331,	// (0x0005f6d5) list_notes_text_pane_ParamLimits

0x8331,	// (0x0005f6d5) list_notes_text_pane

0x8347,	// (0x0005f6eb) list_notes_text_pane_g1

0x645b,	// (0x0005d7ff) list_notes_text_pane_t1

0x8361,	// (0x0005f705) listscroll_cale_week_pane

0x838b,	// (0x0005f72f) bg_cale_heading_pane

0x839f,	// (0x0005f743) bg_cale_pane_cp01

0x83b8,	// (0x0005f75c) cale_week_corner_pane

0x83ce,	// (0x0005f772) cale_week_day_heading_pane

0x83e2,	// (0x0005f786) cale_week_scroll_pane_g1

0x83f3,	// (0x0005f797) cale_week_scroll_pane_g2

0x8404,	// (0x0005f7a8) cale_week_scroll_pane_g3

0x8415,	// (0x0005f7b9) cale_week_scroll_pane_g4

0x8426,	// (0x0005f7ca) cale_week_scroll_pane_g5

0x8437,	// (0x0005f7db) cale_week_scroll_pane_g6

0x8448,	// (0x0005f7ec) cale_week_scroll_pane_g7

0x8459,	// (0x0005f7fd) cale_week_scroll_pane_g8

0x846a,	// (0x0005f80e) cale_week_scroll_pane_g9

0x847b,	// (0x0005f81f) cale_week_scroll_pane_g10

0x848c,	// (0x0005f830) cale_week_scroll_pane_g11

0x849d,	// (0x0005f841) cale_week_scroll_pane_g12

0x84ae,	// (0x0005f852) cale_week_scroll_pane_g13

0x84bf,	// (0x0005f863) cale_week_scroll_pane_g14

0x84d0,	// (0x0005f874) cale_week_scroll_pane_g15

0x000e,

0xf215,	// (0x000665b9) cale_week_scroll_pane_g

0x84e1,	// (0x0005f885) cale_week_time_pane

0x84f2,	// (0x0005f896) grid_cale_week_pane

0x8517,	// (0x0005f8bb) scroll_pane_cp08

0x852f,	// (0x0005f8d3) cell_cale_week_pane_ParamLimits

0x852f,	// (0x0005f8d3) cell_cale_week_pane

0x856b,	// (0x0005f90f) cale_week_day_heading_pane_t1

0x8584,	// (0x0005f928) cale_week_day_heading_pane_t2

0x859d,	// (0x0005f941) cale_week_day_heading_pane_t3

0x85b6,	// (0x0005f95a) cale_week_day_heading_pane_t4

0x85cf,	// (0x0005f973) cale_week_day_heading_pane_t5

0x85e8,	// (0x0005f98c) cale_week_day_heading_pane_t6

0x8601,	// (0x0005f9a5) cale_week_day_heading_pane_t7

0x0006,

0xf234,	// (0x000665d8) cale_week_day_heading_pane_t

0x861a,	// (0x0005f9be) bg_cale_side_pane

0x8628,	// (0x0005f9cc) cale_week_time_pane_t1

0x8654,	// (0x0005f9f8) cale_week_time_pane_t2

0x8680,	// (0x0005fa24) cale_week_time_pane_t3

0x86ac,	// (0x0005fa50) cale_week_time_pane_t4

0x86d8,	// (0x0005fa7c) cale_week_time_pane_t5

0x8704,	// (0x0005faa8) cale_week_time_pane_t6

0x8730,	// (0x0005fad4) cale_week_time_pane_t7

0x875c,	// (0x0005fb00) cale_week_time_pane_t8

0x0007,

0xf243,	// (0x000665e7) cale_week_time_pane_t

0x8788,	// (0x0005fb2c) cell_cale_week_pane_g2

0x87a4,	// (0x0005fb48) cell_cale_week_pane_g3_ParamLimits

0x87a4,	// (0x0005fb48) cell_cale_week_pane_g3

0x87bc,	// (0x0005fb60) grid_highlight_pane_cp07

0x87c4,	// (0x0005fb68) listscroll_gms_pane

0x87ce,	// (0x0005fb72) grid_gms_pane

0x87d7,	// (0x0005fb7b) listscroll_gms_pane_g1

0x87df,	// (0x0005fb83) listscroll_gms_pane_g2

0x0001,

0xf254,	// (0x000665f8) listscroll_gms_pane_g

0x87e7,	// (0x0005fb8b) scroll_pane_cp010

0x87f0,	// (0x0005fb94) cell_gms_pane_ParamLimits

0x87f0,	// (0x0005fb94) cell_gms_pane

0x8801,	// (0x0005fba5) cell_gms_pane_g1

0x8809,	// (0x0005fbad) cell_gms_pane_g2

0x8347,	// (0x0005f6eb) cell_gms_pane_g3

0x8811,	// (0x0005fbb5) cell_gms_pane_g4

0x0003,

0xf259,	// (0x000665fd) cell_gms_pane_g

0x881a,	// (0x0005fbbe) grid_highlight_pane_cp09

0xa4fc,	// (0x000618a0) phob_pre_status_pane_g1

0xa504,	// (0x000618a8) phob_pre_status_pane_g2

0xa50c,	// (0x000618b0) phob_pre_status_pane_g3

0xa514,	// (0x000618b8) phob_pre_status_pane_g4

0x0004,

0xf65b,	// (0x000669ff) phob_pre_status_pane_g

0xa524,	// (0x000618c8) phob_pre_status_pane_t1

0xa532,	// (0x000618d6) phob_pre_status_pane_t2

0xa540,	// (0x000618e4) phob_pre_status_pane_t3

0x0002,

0xf666,	// (0x00066a0a) phob_pre_status_pane_t

0x7aa4,	// (0x0005ee48) bg_list_pane_cp05

0x8822,	// (0x0005fbc6) grid_vorec_pane

0x882a,	// (0x0005fbce) vorec_t1

0x8838,	// (0x0005fbdc) vorec_t2

0x8846,	// (0x0005fbea) vorec_t3

0x8854,	// (0x0005fbf8) vorec_t4

0x8862,	// (0x0005fc06) vorec_t5

0x8870,	// (0x0005fc14) vorec_t6

0x0006,

0xf262,	// (0x00066606) vorec_t

0x888c,	// (0x0005fc30) wait_bar_pane_cp01

0x1610,	// (0x000589b4) cell_vorec_pane_ParamLimits

0x1610,	// (0x000589b4) cell_vorec_pane

0x8894,	// (0x0005fc38) cell_vorec_pane_g1

0x7aa4,	// (0x0005ee48) grid_highlight_pane_cp05

0x88aa,	// (0x0005fc4e) cams_zoom_pane

0x88b6,	// (0x0005fc5a) image_vga_pane

0x88c3,	// (0x0005fc67) main_camera_pane_g1

0x88cf,	// (0x0005fc73) main_camera_pane_g2

0x88db,	// (0x0005fc7f) main_camera_pane_g3

0x88e7,	// (0x0005fc8b) main_camera_pane_g4

0x88f3,	// (0x0005fc97) main_camera_pane_g5

0x88ff,	// (0x0005fca3) main_camera_pane_g6

0x890b,	// (0x0005fcaf) main_camera_pane_g7

0x0007,

0xf271,	// (0x00066615) main_camera_pane_g

0x8923,	// (0x0005fcc7) main_camera_pane_t1

0x8935,	// (0x0005fcd9) main_camera_pane_t2

0x0001,

0xf282,	// (0x00066626) main_camera_pane_t

0x8959,	// (0x0005fcfd) cams_zoom_pane_cp_ParamLimits

0x8959,	// (0x0005fcfd) cams_zoom_pane_cp

0x897d,	// (0x0005fd21) image_cif_pane_ParamLimits

0x897d,	// (0x0005fd21) image_cif_pane

0x8997,	// (0x0005fd3b) image_subqcif_pane

0x899f,	// (0x0005fd43) main_video_pane_g1_ParamLimits

0x899f,	// (0x0005fd43) main_video_pane_g1

0x89bf,	// (0x0005fd63) main_video_pane_g2_ParamLimits

0x89bf,	// (0x0005fd63) main_video_pane_g2

0x89ed,	// (0x0005fd91) main_video_pane_g3_ParamLimits

0x89ed,	// (0x0005fd91) main_video_pane_g3

0x8a16,	// (0x0005fdba) main_video_pane_g4_ParamLimits

0x8a16,	// (0x0005fdba) main_video_pane_g4

0x8a3f,	// (0x0005fde3) main_video_pane_g5_ParamLimits

0x8a3f,	// (0x0005fde3) main_video_pane_g5

0x8a55,	// (0x0005fdf9) main_video_pane_g6_ParamLimits

0x8a55,	// (0x0005fdf9) main_video_pane_g6

0x0006,

0xf287,	// (0x0006662b) main_video_pane_g_ParamLimits

0xf287,	// (0x0006662b) main_video_pane_g

0x8a7b,	// (0x0005fe1f) main_video_pane_t1_ParamLimits

0x8a7b,	// (0x0005fe1f) main_video_pane_t1

0x8ab9,	// (0x0005fe5d) cams_zoom_pane_g1

0x8ac2,	// (0x0005fe66) cams_zoom_pane_g2

0x8acb,	// (0x0005fe6f) cams_zoom_pane_g3

0x8ad4,	// (0x0005fe78) cams_zoom_pane_g4

0x0003,

0xf296,	// (0x0006663a) cams_zoom_pane_g

0x8ae9,	// (0x0005fe8d) grid_cams_pane

0x8af5,	// (0x0005fe99) linegrid_cams_pane

0x8b01,	// (0x0005fea5) cell_cams_pane_ParamLimits

0x8b01,	// (0x0005fea5) cell_cams_pane

0x8b14,	// (0x0005feb8) cams_burst_image_pane

0x8b1c,	// (0x0005fec0) cell_cams_pane_g1

0x7aa4,	// (0x0005ee48) grid_highlight_pane_cp03

0x8175,	// (0x0005f519) mp_bg_pane_g1

0x7aa4,	// (0x0005ee48) bg_list_pane_cp03

0x261c,	// (0x000599c0) bg_mp_pane

0x2624,	// (0x000599c8) grid_mp_pane

0x262c,	// (0x000599d0) media_player_g1

0x2634,	// (0x000599d8) media_player_t1

0x2642,	// (0x000599e6) media_player_t2

0x2650,	// (0x000599f4) media_player_t3

0x265e,	// (0x00059a02) media_player_t4

0x266c,	// (0x00059a10) media_player_t5

0x267a,	// (0x00059a1e) media_player_t6

0x2688,	// (0x00059a2c) media_player_t7

0x0006,

0xf645,	// (0x000669e9) media_player_t

0x2696,	// (0x00059a3a) wait_bar_pane_cp02

0xf62a,	// (0x000669ce) main_usb_pane_t

0xa4f3,	// (0x00061897) cell_mp_pane

0x8175,	// (0x0005f519) cell_mp_pane_g1

0x7aa4,	// (0x0005ee48) grid_highlight_pane_cp06

0x8b24,	// (0x0005fec8) grid_skin_colour_pane

0x8b2c,	// (0x0005fed0) list_highlight_pane_cp03

0x8b34,	// (0x0005fed8) skin_g1

0x8b3c,	// (0x0005fee0) skin_t1

0x8b4b,	// (0x0005feef) skin_t2

0x0001,

0xf2cb,	// (0x0006666f) skin_t

0x8b59,	// (0x0005fefd) cell_skin_colour_pane_ParamLimits

0x8b59,	// (0x0005fefd) cell_skin_colour_pane

0x8b71,	// (0x0005ff15) cell_skin_colour_pane_g1

0x8bbc,	// (0x0005ff60) call_video_g1_ParamLimits

0x8bbc,	// (0x0005ff60) call_video_g1

0x8bc8,	// (0x0005ff6c) call_video_g2_ParamLimits

0x8bc8,	// (0x0005ff6c) call_video_g2

0x0001,

0xf2d0,	// (0x00066674) call_video_g_ParamLimits

0xf2d0,	// (0x00066674) call_video_g

0x8c00,	// (0x0005ffa4) call_video_uplink_pane_cp1_ParamLimits

0x8c00,	// (0x0005ffa4) call_video_uplink_pane_cp1

0x8c3d,	// (0x0005ffe1) call_video_uplink_pane_cp2

0x8c97,	// (0x0006003b) video_down_crop_pane_ParamLimits

0x8c97,	// (0x0006003b) video_down_crop_pane

0x8d4d,	// (0x000600f1) video_down_pane_ParamLimits

0x8d4d,	// (0x000600f1) video_down_pane

0x8deb,	// (0x0006018f) video_down_subqcif_pane_ParamLimits

0x8deb,	// (0x0006018f) video_down_subqcif_pane

0x8e03,	// (0x000601a7) video_down_subqcif_pane_cp_ParamLimits

0x8e03,	// (0x000601a7) video_down_subqcif_pane_cp

0x8e27,	// (0x000601cb) im_reading_pane_ParamLimits

0x8e27,	// (0x000601cb) im_reading_pane

0x8e39,	// (0x000601dd) im_writing_pane_ParamLimits

0x8e39,	// (0x000601dd) im_writing_pane

0x8e57,	// (0x000601fb) im_reading_pane_t1

0x8e8f,	// (0x00060233) list_im_pane

0x8ea0,	// (0x00060244) scroll_pane_cp07

0x8eb9,	// (0x0006025d) im_writing_pane_t1_ParamLimits

0x8eb9,	// (0x0006025d) im_writing_pane_t1

0x8ece,	// (0x00060272) im_writing_pane_t2_ParamLimits

0x8ece,	// (0x00060272) im_writing_pane_t2

0x0001,

0xf2da,	// (0x0006667e) im_writing_pane_t_ParamLimits

0xf2da,	// (0x0006667e) im_writing_pane_t

0x7aa4,	// (0x0005ee48) input_focus_pane_cp04

0x7aa4,	// (0x0005ee48) input_focus_pane_cp05

0x8eeb,	// (0x0006028f) list_im_single_pane_ParamLimits

0x8eeb,	// (0x0006028f) list_im_single_pane

0x8f03,	// (0x000602a7) list_single_im_pane_t1

0xa4b9,	// (0x0006185d) blid_accuracy_pane

0xa4c1,	// (0x00061865) blid_compass_pane

0xa4c9,	// (0x0006186d) main_location_t1

0xa4d7,	// (0x0006187b) main_location_t2

0xa4e5,	// (0x00061889) main_location_t3

0x0002,

0xf654,	// (0x000669f8) main_location_t

0x7aa4,	// (0x0005ee48) aid_levels_location

0x8175,	// (0x0005f519) blid_accuracy_pane_g1

0x8175,	// (0x0005f519) blid_accuracy_pane_g2

0x0001,

0xf33c,	// (0x000666e0) blid_accuracy_pane_g

0x8f3d,	// (0x000602e1) wml_content_pane

0x09d0,	// (0x00057d74) wml_button_pane_ParamLimits

0x09d0,	// (0x00057d74) wml_button_pane

0x8f5a,	// (0x000602fe) wml_list_single_large_pane_ParamLimits

0x8f5a,	// (0x000602fe) wml_list_single_large_pane

0x8f71,	// (0x00060315) wml_list_single_medium_pane_ParamLimits

0x8f71,	// (0x00060315) wml_list_single_medium_pane

0x8f89,	// (0x0006032d) wml_list_single_small_pane_ParamLimits

0x8f89,	// (0x0006032d) wml_list_single_small_pane

0x09e4,	// (0x00057d88) wml_selection_box_pane_ParamLimits

0x09e4,	// (0x00057d88) wml_selection_box_pane

0x09f7,	// (0x00057d9b) wml_list_single_pane_t1

0x0a06,	// (0x00057daa) wml_list_single_medium_pane_t1

0x0a15,	// (0x00057db9) wml_list_single_large_pane_t1

0x0a24,	// (0x00057dc8) input_focus_pane_cp02_ParamLimits

0x0a24,	// (0x00057dc8) input_focus_pane_cp02

0x0a37,	// (0x00057ddb) wml_selection_box_pane_g1

0x0a40,	// (0x00057de4) wml_selection_box_pane_t1_ParamLimits

0x0a40,	// (0x00057de4) wml_selection_box_pane_t1

0x7cff,	// (0x0005f0a3) bg_wml_button_pane_ParamLimits

0x7cff,	// (0x0005f0a3) bg_wml_button_pane

0x0a58,	// (0x00057dfc) wml_button_pane_g1

0x0a60,	// (0x00057e04) wml_button_pane_t1

0x0a58,	// (0x00057dfc) wml_button_bg_pane_g1

0x0a70,	// (0x00057e14) wml_button_bg_pane_g2

0x0a78,	// (0x00057e1c) wml_button_bg_pane_g3

0x0a80,	// (0x00057e24) wml_button_bg_pane_g4

0x0a88,	// (0x00057e2c) wml_button_bg_pane_g5

0x0a90,	// (0x00057e34) wml_button_bg_pane_g6

0x0a98,	// (0x00057e3c) wml_button_bg_pane_g7

0x0aa0,	// (0x00057e44) wml_button_bg_pane_g8

0x0aa8,	// (0x00057e4c) wml_button_bg_pane_g9

0x0008,

0xf2df,	// (0x00066683) wml_button_bg_pane_g

0x8fa4,	// (0x00060348) bg_list_pane_cp02

0x0ab0,	// (0x00057e54) mce_header_pane_ParamLimits

0x0ab0,	// (0x00057e54) mce_header_pane

0x0ac4,	// (0x00057e68) mce_icon_pane

0x0ac4,	// (0x00057e68) mce_image_pane

0x0acd,	// (0x00057e71) mce_text_pane_ParamLimits

0x0acd,	// (0x00057e71) mce_text_pane

0x8fad,	// (0x00060351) scroll_pane_cp03

0x8fad,	// (0x00060351) scroll_pane_cp04

0x0ae1,	// (0x00057e85) scroll_pane_cp05_ParamLimits

0x0ae1,	// (0x00057e85) scroll_pane_cp05

0x8fb5,	// (0x00060359) mce_header_field_pane_ParamLimits

0x8fb5,	// (0x00060359) mce_header_field_pane

0x8fd5,	// (0x00060379) mce_header_field_pane_2_ParamLimits

0x8fd5,	// (0x00060379) mce_header_field_pane_2

0x8feb,	// (0x0006038f) mce_header_field_pane_3

0x8ff3,	// (0x00060397) list_single_mce_message_pane_ParamLimits

0x8ff3,	// (0x00060397) list_single_mce_message_pane

0x900a,	// (0x000603ae) list_single_mce_smart_pane_ParamLimits

0x900a,	// (0x000603ae) list_single_mce_smart_pane

0x0aed,	// (0x00057e91) input_focus_pane_cp03

0x0af6,	// (0x00057e9a) list_header_data_pane

0x902c,	// (0x000603d0) mce_header_field_pane_t1

0x903a,	// (0x000603de) list_single_mce_header_pane_ParamLimits

0x903a,	// (0x000603de) list_single_mce_header_pane

0x0afe,	// (0x00057ea2) list_single_mce_header_pane_t1

0x0b0d,	// (0x00057eb1) list_single_mce_message_pane_g1

0x0b16,	// (0x00057eba) list_single_mce_message_pane_t1

0x9070,	// (0x00060414) bg_cale_heading_pane_cp01_ParamLimits

0x9070,	// (0x00060414) bg_cale_heading_pane_cp01

0x0b25,	// (0x00057ec9) bg_cale_pane_cp02_ParamLimits

0x0b25,	// (0x00057ec9) bg_cale_pane_cp02

0x9093,	// (0x00060437) cale_month_corner_pane

0x90a9,	// (0x0006044d) cale_month_day_heading_pane_ParamLimits

0x90a9,	// (0x0006044d) cale_month_day_heading_pane

0x90cc,	// (0x00060470) cale_month_pane_g1_ParamLimits

0x90cc,	// (0x00060470) cale_month_pane_g1

0x90e8,	// (0x0006048c) cale_month_pane_g2_ParamLimits

0x90e8,	// (0x0006048c) cale_month_pane_g2

0x9101,	// (0x000604a5) cale_month_pane_g3_ParamLimits

0x9101,	// (0x000604a5) cale_month_pane_g3

0x912d,	// (0x000604d1) cale_month_pane_g4_ParamLimits

0x912d,	// (0x000604d1) cale_month_pane_g4

0x9159,	// (0x000604fd) cale_month_pane_g5_ParamLimits

0x9159,	// (0x000604fd) cale_month_pane_g5

0x9185,	// (0x00060529) cale_month_pane_g6_ParamLimits

0x9185,	// (0x00060529) cale_month_pane_g6

0x91b1,	// (0x00060555) cale_month_pane_g7_ParamLimits

0x91b1,	// (0x00060555) cale_month_pane_g7

0x91dd,	// (0x00060581) cale_month_pane_g8_ParamLimits

0x91dd,	// (0x00060581) cale_month_pane_g8

0x9209,	// (0x000605ad) cale_month_pane_g9_ParamLimits

0x9209,	// (0x000605ad) cale_month_pane_g9

0x9233,	// (0x000605d7) cale_month_pane_g10_ParamLimits

0x9233,	// (0x000605d7) cale_month_pane_g10

0x925d,	// (0x00060601) cale_month_pane_g11_ParamLimits

0x925d,	// (0x00060601) cale_month_pane_g11

0x9287,	// (0x0006062b) cale_month_pane_g12_ParamLimits

0x9287,	// (0x0006062b) cale_month_pane_g12

0x92b1,	// (0x00060655) cale_month_pane_g13_ParamLimits

0x92b1,	// (0x00060655) cale_month_pane_g13

0x000c,

0xf2f2,	// (0x00066696) cale_month_pane_g_ParamLimits

0xf2f2,	// (0x00066696) cale_month_pane_g

0x92db,	// (0x0006067f) cale_month_week_pane

0x92ec,	// (0x00060690) grid_cale_month_pane_ParamLimits

0x92ec,	// (0x00060690) grid_cale_month_pane

0x930a,	// (0x000606ae) cale_month_day_heading_pane_t1

0x9368,	// (0x0006070c) cale_month_day_heading_pane_t2

0x93cd,	// (0x00060771) cale_month_day_heading_pane_t3

0x9432,	// (0x000607d6) cale_month_day_heading_pane_t4

0x9497,	// (0x0006083b) cale_month_day_heading_pane_t5

0x94fc,	// (0x000608a0) cale_month_day_heading_pane_t6

0x9561,	// (0x00060905) cale_month_day_heading_pane_t7

0x0006,

0xf30d,	// (0x000666b1) cale_month_day_heading_pane_t

0x861a,	// (0x0005f9be) bg_cale_side_pane_cp01

0x95c6,	// (0x0006096a) cale_month_week_pane_t1

0x95dd,	// (0x00060981) cale_month_week_pane_t2

0x95f4,	// (0x00060998) cale_month_week_pane_t3

0x960b,	// (0x000609af) cale_month_week_pane_t4

0x9622,	// (0x000609c6) cale_month_week_pane_t5

0x9639,	// (0x000609dd) cale_month_week_pane_t6

0x0005,

0xf31c,	// (0x000666c0) cale_month_week_pane_t

0x9650,	// (0x000609f4) cell_cale_month_pane_ParamLimits

0x9650,	// (0x000609f4) cell_cale_month_pane

0x96f6,	// (0x00060a9a) cell_cale_month_pane_g1

0x9702,	// (0x00060aa6) cell_cale_month_pane_t1_ParamLimits

0x9702,	// (0x00060aa6) cell_cale_month_pane_t1

0x87bc,	// (0x0005fb60) grid_highlight_pane_cp08

0x8175,	// (0x0005f519) main_smil_g1

0x971e,	// (0x00060ac2) smil_status_pane

0x0b84,	// (0x00057f28) smil_text_pane

0x24fc,	// (0x000598a0) bg_popup_call3_rect_pane_g8

0x2504,	// (0x000598a8) bg_popup_call3_rect_pane_g9

0x0008,

0xf5d5,	// (0x00066979) bg_popup_call3_rect_pane_g

0x27cd,	// (0x00059b71) smil_status_volume_pane_g1

0x0b8e,	// (0x00057f32) smil_status_pane_t1

0xa808,	// (0x00061bac) volume_smil_pane

0x0ba5,	// (0x00057f49) list_smil_text_pane

0x972f,	// (0x00060ad3) scroll_pane_cp011

0x9738,	// (0x00060adc) smil_text_list_pane_t1_ParamLimits

0x9738,	// (0x00060adc) smil_text_list_pane_t1

0x977d,	// (0x00060b21) aid_volume_smil_ParamLimits

0x977d,	// (0x00060b21) aid_volume_smil

0x8175,	// (0x0005f519) smil_volume_pane_g1

0x8175,	// (0x0005f519) smil_volume_pane_g2

0x0001,

0xf33c,	// (0x000666e0) smil_volume_pane_g

0x8040,	// (0x0005f3e4) listscroll_cale_day_pane

0x0baf,	// (0x00057f53) bg_cale_pane

0x0bc7,	// (0x00057f6b) list_cale_pane

0x0bd8,	// (0x00057f7c) scroll_pane_cp09

0x0be9,	// (0x00057f8d) cale_bg_pane_g1

0x0bf1,	// (0x00057f95) cale_bg_pane_g2

0x0bf9,	// (0x00057f9d) cale_bg_pane_g3

0x0c01,	// (0x00057fa5) cale_bg_pane_g4

0x0c09,	// (0x00057fad) cale_bg_pane_g5

0x0c11,	// (0x00057fb5) cale_bg_pane_g6

0x0c19,	// (0x00057fbd) cale_bg_pane_g7

0x0c21,	// (0x00057fc5) cale_bg_pane_g8

0x0c29,	// (0x00057fcd) cale_bg_pane_g9

0x0008,

0xf341,	// (0x000666e5) cale_bg_pane_g

0x979f,	// (0x00060b43) list_cale_time_pane_ParamLimits

0x979f,	// (0x00060b43) list_cale_time_pane

0x0c31,	// (0x00057fd5) list_cale_time_pane_g1_ParamLimits

0x0c31,	// (0x00057fd5) list_cale_time_pane_g1

0x0c3d,	// (0x00057fe1) list_cale_time_pane_g2_ParamLimits

0x0c3d,	// (0x00057fe1) list_cale_time_pane_g2

0x97b6,	// (0x00060b5a) list_cale_time_pane_g3_ParamLimits

0x97b6,	// (0x00060b5a) list_cale_time_pane_g3

0x97c2,	// (0x00060b66) list_cale_time_pane_g4_ParamLimits

0x97c2,	// (0x00060b66) list_cale_time_pane_g4

0x97ce,	// (0x00060b72) list_cale_time_pane_g5_ParamLimits

0x97ce,	// (0x00060b72) list_cale_time_pane_g5

0x0005,

0xf354,	// (0x000666f8) list_cale_time_pane_g_ParamLimits

0xf354,	// (0x000666f8) list_cale_time_pane_g

0x0c57,	// (0x00057ffb) list_cale_time_pane_t1_ParamLimits

0x0c57,	// (0x00057ffb) list_cale_time_pane_t1

0x0c7f,	// (0x00058023) list_cale_time_pane_t2_ParamLimits

0x0c7f,	// (0x00058023) list_cale_time_pane_t2

0x9a8b,	// (0x00060e2f) aid_blid_cardinal_pane

0x9ac9,	// (0x00060e6d) compass_pane_t4

0x0ca7,	// (0x0005804b) list_cale_time_pane_t4_ParamLimits

0x0ca7,	// (0x0005804b) list_cale_time_pane_t4

0x9ad7,	// (0x00060e7b) compass_pane_t5

0x9ae5,	// (0x00060e89) compass_pane_t6

0x9af3,	// (0x00060e97) compass_pane_t7

0x118b,	// (0x0005852f) navi_pane_cc_t1

0x132f,	// (0x000586d3) aid_phob_thumbnail_center_pane

0xa066,	// (0x0006140a) main_postcard_pane_g4_ParamLimits

0x0002,

0xf361,	// (0x00066705) list_cale_time_pane_t_ParamLimits

0xf361,	// (0x00066705) list_cale_time_pane_t

0x76d9,	// (0x0005ea7d) bg_popup_window_pane_cp02_ParamLimits

0x76d9,	// (0x0005ea7d) bg_popup_window_pane_cp02

0x0ccf,	// (0x00058073) heading_pane_cp01_ParamLimits

0x0ccf,	// (0x00058073) heading_pane_cp01

0x0cdb,	// (0x0005807f) loc_req_pane_ParamLimits

0x0cdb,	// (0x0005807f) loc_req_pane

0x0ceb,	// (0x0005808f) loc_type_pane_ParamLimits

0x0ceb,	// (0x0005808f) loc_type_pane

0x0cfd,	// (0x000580a1) loc_type_pane_t1_ParamLimits

0x0cfd,	// (0x000580a1) loc_type_pane_t1

0x0d0f,	// (0x000580b3) loc_type_pane_t2_ParamLimits

0x0d0f,	// (0x000580b3) loc_type_pane_t2

0x0d21,	// (0x000580c5) loc_type_pane_t3_ParamLimits

0x0d21,	// (0x000580c5) loc_type_pane_t3

0x0002,

0xf368,	// (0x0006670c) loc_type_pane_t_ParamLimits

0xf368,	// (0x0006670c) loc_type_pane_t

0x0d33,	// (0x000580d7) list_loc_req_pane

0x0d3d,	// (0x000580e1) scroll_pane_cp012

0x97da,	// (0x00060b7e) list_single_loc_request_popup_menu_pane_ParamLimits

0x97da,	// (0x00060b7e) list_single_loc_request_popup_menu_pane

0x0d46,	// (0x000580ea) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0d46,	// (0x000580ea) list_single_loc_request_popup_menu_pane_g1

0x0d52,	// (0x000580f6) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0d52,	// (0x000580f6) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf36f,	// (0x00066713) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf36f,	// (0x00066713) list_single_loc_request_popup_menu_pane_g

0x0d5e,	// (0x00058102) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0d5e,	// (0x00058102) list_single_loc_request_popup_menu_pane_t1

0x97ec,	// (0x00060b90) bg_popup_window_pane_cp03_ParamLimits

0x97ec,	// (0x00060b90) bg_popup_window_pane_cp03

0x97fa,	// (0x00060b9e) heading_loc_req_pane_ParamLimits

0x97fa,	// (0x00060b9e) heading_loc_req_pane

0x9806,	// (0x00060baa) popup_dyc_status_message_window_g1_ParamLimits

0x9806,	// (0x00060baa) popup_dyc_status_message_window_g1

0x9812,	// (0x00060bb6) popup_dyc_status_message_window_t1_ParamLimits

0x9812,	// (0x00060bb6) popup_dyc_status_message_window_t1

0x9824,	// (0x00060bc8) popup_dyc_status_message_window_t2_ParamLimits

0x9824,	// (0x00060bc8) popup_dyc_status_message_window_t2

0x9836,	// (0x00060bda) popup_dyc_status_message_window_t3_ParamLimits

0x9836,	// (0x00060bda) popup_dyc_status_message_window_t3

0x0002,

0xf374,	// (0x00066718) popup_dyc_status_message_window_t_ParamLimits

0xf374,	// (0x00066718) popup_dyc_status_message_window_t

0x7aa4,	// (0x0005ee48) bg_heading_pane_cp01

0x0d80,	// (0x00058124) heading_loc_req_pane_g1

0x0d88,	// (0x0005812c) heading_loc_req_pane_g2

0x0d90,	// (0x00058134) heading_loc_req_pane_g3

0x0002,

0xf37b,	// (0x0006671f) heading_loc_req_pane_g

0x0d98,	// (0x0005813c) heading_loc_req_pane_t1

0x0e41,	// (0x000581e5) bg_popup_sub_pane_cp01_ParamLimits

0x0e41,	// (0x000581e5) bg_popup_sub_pane_cp01

0x0e4f,	// (0x000581f3) popup_cale_events_window_g1_ParamLimits

0x0e4f,	// (0x000581f3) popup_cale_events_window_g1

0x0e6f,	// (0x00058213) popup_cale_events_window_g2_ParamLimits

0x0e6f,	// (0x00058213) popup_cale_events_window_g2

0x0001,

0xf3af,	// (0x00066753) popup_cale_events_window_g_ParamLimits

0xf3af,	// (0x00066753) popup_cale_events_window_g

0x0e8f,	// (0x00058233) popup_cale_events_window_t1_ParamLimits

0x0e8f,	// (0x00058233) popup_cale_events_window_t1

0x0ea1,	// (0x00058245) popup_cale_events_window_t2_ParamLimits

0x0ea1,	// (0x00058245) popup_cale_events_window_t2

0x0edf,	// (0x00058283) popup_cale_events_window_t3_ParamLimits

0x0edf,	// (0x00058283) popup_cale_events_window_t3

0x0f19,	// (0x000582bd) popup_cale_events_window_t4_ParamLimits

0x0f19,	// (0x000582bd) popup_cale_events_window_t4

0x0003,

0xf3b4,	// (0x00066758) popup_cale_events_window_t_ParamLimits

0xf3b4,	// (0x00066758) popup_cale_events_window_t

0x9862,	// (0x00060c06) call_type_pane

0x1347,	// (0x000586eb) popup_call_status_window_g1

0x986e,	// (0x00060c12) popup_call_status_window_g2

0x987a,	// (0x00060c1e) popup_call_status_window_g3

0x0002,

0xf3bd,	// (0x00066761) popup_call_status_window_g

0x0f4f,	// (0x000582f3) call_type_pane_g1

0x0f58,	// (0x000582fc) call_type_pane_g2

0x0001,

0xf3c4,	// (0x00066768) call_type_pane_g

0x7aa4,	// (0x0005ee48) bg_popup_sub_pane_cp02

0x0f61,	// (0x00058305) listscroll_popup_wml_pane

0x0f69,	// (0x0005830d) list_wml_pane

0x0f73,	// (0x00058317) scroll_pane_cp013

0x9886,	// (0x00060c2a) list_single_graphic_popup_wml_pane_ParamLimits

0x9886,	// (0x00060c2a) list_single_graphic_popup_wml_pane

0x8175,	// (0x0005f519) list_single_graphic_popup_wml_pane_g1

0x0f7c,	// (0x00058320) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf3c9,	// (0x0006676d) list_single_graphic_popup_wml_pane_g

0x0f84,	// (0x00058328) list_single_graphic_popup_wml_pane_t1

0x0f92,	// (0x00058336) aid_call_pane

0x7cf7,	// (0x0005f09b) popup_clock_analogue_window_g1

0x7cf7,	// (0x0005f09b) popup_clock_analogue_window_g2

0x989a,	// (0x00060c3e) popup_clock_analogue_window_g3

0x989a,	// (0x00060c3e) popup_clock_analogue_window_g4

0x8175,	// (0x0005f519) popup_clock_analogue_window_g5

0x0004,

0xf3ce,	// (0x00066772) popup_clock_analogue_window_g

0x98a2,	// (0x00060c46) popup_clock_analogue_window_t1

0x98b0,	// (0x00060c54) clock_digital_number_pane_ParamLimits

0x98b0,	// (0x00060c54) clock_digital_number_pane

0x98bc,	// (0x00060c60) clock_digital_number_pane_cp02_ParamLimits

0x98bc,	// (0x00060c60) clock_digital_number_pane_cp02

0x98c8,	// (0x00060c6c) clock_digital_number_pane_cp03_ParamLimits

0x98c8,	// (0x00060c6c) clock_digital_number_pane_cp03

0x98d4,	// (0x00060c78) clock_digital_number_pane_cp04_ParamLimits

0x98d4,	// (0x00060c78) clock_digital_number_pane_cp04

0x98e0,	// (0x00060c84) clock_digital_separator_pane_ParamLimits

0x98e0,	// (0x00060c84) clock_digital_separator_pane

0x98ec,	// (0x00060c90) popup_clock_digital_window_t1

0x8175,	// (0x0005f519) clock_digital_number_pane_g1

0x8175,	// (0x0005f519) clock_digital_number_pane_g2

0x0001,

0xf33c,	// (0x000666e0) clock_digital_number_pane_g

0x8175,	// (0x0005f519) clock_digital_separator_pane_g1

0x8175,	// (0x0005f519) clock_digital_separator_pane_g2

0x0001,

0xf33c,	// (0x000666e0) clock_digital_separator_pane_g

0x7aa4,	// (0x0005ee48) bg_popup_window_pane_cp04

0x0fa2,	// (0x00058346) heading_pane_cp03

0x0faa,	// (0x0005834e) listscroll_popup_gms_pane

0x0fb2,	// (0x00058356) grid_large_graphic_popup_pane

0x0fbc,	// (0x00058360) listscroll_popup_gms_pane_g1

0x0fc4,	// (0x00058368) listscroll_popup_gms_pane_g2

0x0001,

0xf3d9,	// (0x0006677d) listscroll_popup_gms_pane_g

0x09c8,	// (0x00057d6c) scroll_pane_cp014

0x9909,	// (0x00060cad) cell_large_graphic_popup_pane_ParamLimits

0x9909,	// (0x00060cad) cell_large_graphic_popup_pane

0x9920,	// (0x00060cc4) cell_large_graphic_popup_pane_g1_ParamLimits

0x9920,	// (0x00060cc4) cell_large_graphic_popup_pane_g1

0x0fcc,	// (0x00058370) cell_large_graphic_popup_pane_g2_ParamLimits

0x0fcc,	// (0x00058370) cell_large_graphic_popup_pane_g2

0x0fd8,	// (0x0005837c) cell_large_graphic_popup_pane_g3_ParamLimits

0x0fd8,	// (0x0005837c) cell_large_graphic_popup_pane_g3

0x0fe5,	// (0x00058389) cell_large_graphic_popup_pane_g4_ParamLimits

0x0fe5,	// (0x00058389) cell_large_graphic_popup_pane_g4

0x0003,

0xf3de,	// (0x00066782) cell_large_graphic_popup_pane_g_ParamLimits

0xf3de,	// (0x00066782) cell_large_graphic_popup_pane_g

0x0ff5,	// (0x00058399) grid_highlight_pane_cp010

0x8175,	// (0x0005f519) bg_popup_call_pane_g1

0x0fff,	// (0x000583a3) list_single_graphic_popup_conf_pane_ParamLimits

0x0fff,	// (0x000583a3) list_single_graphic_popup_conf_pane

0x1012,	// (0x000583b6) list_highlight_pane_cp01

0x101b,	// (0x000583bf) list_single_graphic_popup_conf_pane_g1

0x1023,	// (0x000583c7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3e7,	// (0x0006678b) list_single_graphic_popup_conf_pane_g

0x102b,	// (0x000583cf) list_single_graphic_popup_conf_pane_t1

0x1039,	// (0x000583dd) linegrid_cams_pane_g1

0x992c,	// (0x00060cd0) linegrid_cams_pane_g2

0x8347,	// (0x0005f6eb) linegrid_cams_pane_g3

0x1042,	// (0x000583e6) linegrid_cams_pane_g4

0x9935,	// (0x00060cd9) linegrid_cams_pane_g5

0x993e,	// (0x00060ce2) linegrid_cams_pane_g6

0x8811,	// (0x0005fbb5) linegrid_cams_pane_g7

0x0006,

0xf3ec,	// (0x00066790) linegrid_cams_pane_g

0x104b,	// (0x000583ef) popup_clock_analogue_window

0x104b,	// (0x000583ef) popup_clock_digital_window

0x7aa4,	// (0x0005ee48) popup_phob_thumbnail_window

0x8175,	// (0x0005f519) call_video_uplink_pane_g1

0x1054,	// (0x000583f8) call_video_uplink_pane_g2

0x0001,

0xf3fb,	// (0x0006679f) call_video_uplink_pane_g

0x87bc,	// (0x0005fb60) video_uplink_pane

0x105c,	// (0x00058400) mce_image_pane_g1

0x9947,	// (0x00060ceb) mce_image_pane_g2

0x994f,	// (0x00060cf3) mce_image_pane_g3

0x9957,	// (0x00060cfb) mce_image_pane_g4

0x995f,	// (0x00060d03) mce_image_pane_g5

0x0004,

0xf400,	// (0x000667a4) mce_image_pane_g

0x1066,	// (0x0005840a) control_top_pane_stacon_cp01_ParamLimits

0x1066,	// (0x0005840a) control_top_pane_stacon_cp01

0x1076,	// (0x0005841a) uni_indicator_pane_stacon_cp01_ParamLimits

0x1076,	// (0x0005841a) uni_indicator_pane_stacon_cp01

0x1087,	// (0x0005842b) bg_popup_sub_pane_cp03

0x1091,	// (0x00058435) chi_dic_find_pane

0x9967,	// (0x00060d0b) listscroll_chi_dic_pane

0x1099,	// (0x0005843d) main_pane_chidic_g1

0x10a1,	// (0x00058445) chi_dic_find_pane_t1

0x10af,	// (0x00058453) find_chidic_pane

0x10b8,	// (0x0005845c) chi_dic_list_pane_ParamLimits

0x10b8,	// (0x0005845c) chi_dic_list_pane

0x10c9,	// (0x0005846d) scroll_pane_cp020

0x10d1,	// (0x00058475) find_chidic_pane_t1

0x7aa4,	// (0x0005ee48) input_focus_pane_cp06

0x9979,	// (0x00060d1d) list_chi_dic_pane_ParamLimits

0x9979,	// (0x00060d1d) list_chi_dic_pane

0x998c,	// (0x00060d30) list_chi_dic_pane_t1_ParamLimits

0x998c,	// (0x00060d30) list_chi_dic_pane_t1

0x7aa4,	// (0x0005ee48) list_highlight_pane_cp020

0x10e0,	// (0x00058484) bg_cale_heading_pane_g1

0x999f,	// (0x00060d43) bg_cale_heading_pane_g2

0x99a7,	// (0x00060d4b) bg_cale_heading_pane_g3

0x99af,	// (0x00060d53) bg_cale_heading_pane_g4

0x99b7,	// (0x00060d5b) bg_cale_heading_pane_g5

0x99bf,	// (0x00060d63) bg_cale_heading_pane_g6

0x99c7,	// (0x00060d6b) bg_cale_heading_pane_g7

0x99cf,	// (0x00060d73) bg_cale_heading_pane_g8

0x99d7,	// (0x00060d7b) bg_cale_heading_pane_g9

0x0008,

0xf40b,	// (0x000667af) bg_cale_heading_pane_g

0x10e0,	// (0x00058484) bg_cale_side_pane_g1

0x99df,	// (0x00060d83) bg_cale_side_pane_g2

0x99e7,	// (0x00060d8b) bg_cale_side_pane_g3

0x99ef,	// (0x00060d93) bg_cale_side_pane_g4

0x99f7,	// (0x00060d9b) bg_cale_side_pane_g5

0x99ff,	// (0x00060da3) bg_cale_side_pane_g6

0x9a07,	// (0x00060dab) bg_cale_side_pane_g7

0x9a0f,	// (0x00060db3) bg_cale_side_pane_g8

0x9a17,	// (0x00060dbb) bg_cale_side_pane_g9

0x0008,

0xf41e,	// (0x000667c2) bg_cale_side_pane_g

0x9a1f,	// (0x00060dc3) popup_call_status_window_ParamLimits

0x9a1f,	// (0x00060dc3) popup_call_status_window

0x10e8,	// (0x0005848c) stacon_top_pane

0x10f0,	// (0x00058494) status_pane_ParamLimits

0x10f0,	// (0x00058494) status_pane

0x110a,	// (0x000584ae) status_small_pane

0x1112,	// (0x000584b6) control_pane

0x7aa4,	// (0x0005ee48) stacon_bottom_pane

0x111a,	// (0x000584be) list_single_mce_smart_pane_t1_ParamLimits

0x111a,	// (0x000584be) list_single_mce_smart_pane_t1

0x112d,	// (0x000584d1) list_single_mce_smart_pane_t2_ParamLimits

0x112d,	// (0x000584d1) list_single_mce_smart_pane_t2

0x0001,

0xf431,	// (0x000667d5) list_single_mce_smart_pane_t_ParamLimits

0xf431,	// (0x000667d5) list_single_mce_smart_pane_t

0x9a2e,	// (0x00060dd2) compass_pane

0x9a37,	// (0x00060ddb) main_location2_pane_t1

0x9a4d,	// (0x00060df1) main_location2_pane_t2

0x9a63,	// (0x00060e07) main_location2_pane_t3

0x0003,

0xf436,	// (0x000667da) main_location2_pane_t

0x1155,	// (0x000584f9) compass_pane_g1_ParamLimits

0x1155,	// (0x000584f9) compass_pane_g1

0x9aab,	// (0x00060e4f) compass_pane_t1

0x9aba,	// (0x00060e5e) compass_pane_t2

0x0005,

0xf43f,	// (0x000667e3) compass_pane_t

0x9b01,	// (0x00060ea5) text_secondary_cp61

0x1182,	// (0x00058526) navi_pane_cams_g5

0x11c3,	// (0x00058567) navi_pane_im_t1

0x11d1,	// (0x00058575) navi_pane_mp_g1_ParamLimits

0x11d1,	// (0x00058575) navi_pane_mp_g1

0x11e5,	// (0x00058589) navi_pane_mp_g2_ParamLimits

0x11e5,	// (0x00058589) navi_pane_mp_g2

0x11f1,	// (0x00058595) navi_pane_mp_g3_ParamLimits

0x11f1,	// (0x00058595) navi_pane_mp_g3

0x0002,

0xf453,	// (0x000667f7) navi_pane_mp_g_ParamLimits

0xf453,	// (0x000667f7) navi_pane_mp_g

0x11fd,	// (0x000585a1) navi_pane_mp_t1

0x120b,	// (0x000585af) navi_pane_mp_t2

0x0002,

0xf45a,	// (0x000667fe) navi_pane_mp_t

0x1278,	// (0x0005861c) navi_pane_vt_g1

0x11fd,	// (0x000585a1) navi_pane_vt_t1

0x1280,	// (0x00058624) navi_slider_pane

0x1288,	// (0x0005862c) zooming_pane

0x1290,	// (0x00058634) navi_slider_pane_g1

0x9b78,	// (0x00060f1c) navi_slider_pane_g2

0x0006,

0xf461,	// (0x00066805) navi_slider_pane_g

0x12b4,	// (0x00058658) aid_levels_zoom

0x12bc,	// (0x00058660) zooming_pane_g1

0x12c4,	// (0x00058668) zooming_pane_g2

0x12c4,	// (0x00058668) zooming_pane_g3

0x0002,

0xf470,	// (0x00066814) zooming_pane_g

0x12cc,	// (0x00058670) level_10_zoom

0x12d5,	// (0x00058679) level_11_zoom

0x12de,	// (0x00058682) level_1_zoom

0x12e7,	// (0x0005868b) level_2_zoom

0x12f0,	// (0x00058694) level_3_zoom

0x12f9,	// (0x0005869d) level_4_zoom

0x1302,	// (0x000586a6) level_5_zoom

0x130b,	// (0x000586af) level_6_zoom

0x1314,	// (0x000586b8) level_7_zoom

0x131d,	// (0x000586c1) level_8_zoom

0x1326,	// (0x000586ca) level_9_zoom

0x1337,	// (0x000586db) popup_phob_thumbnail_window_g1

0x133f,	// (0x000586e3) popup_phob_thumbnail_window_g2

0x0001,

0xf477,	// (0x0006681b) popup_phob_thumbnail_window_g

0x269e,	// (0x00059a42) level_1_location

0x26a6,	// (0x00059a4a) level_2_location

0x26ae,	// (0x00059a52) level_3_location

0x26b6,	// (0x00059a5a) level_4_location

0x1288,	// (0x0005862c) level_5_location

0x9b8a,	// (0x00060f2e) mce_icon_pane_g1

0x9b92,	// (0x00060f36) mce_icon_pane_g2

0x0001,

0xf47c,	// (0x00066820) mce_icon_pane_g

0x9b9a,	// (0x00060f3e) main_mup_pane_g1_ParamLimits

0x9b9a,	// (0x00060f3e) main_mup_pane_g1

0x9bb2,	// (0x00060f56) main_mup_pane_g2_ParamLimits

0x9bb2,	// (0x00060f56) main_mup_pane_g2

0x9bce,	// (0x00060f72) main_mup_pane_g3_ParamLimits

0x9bce,	// (0x00060f72) main_mup_pane_g3

0x9bea,	// (0x00060f8e) main_mup_pane_g4_ParamLimits

0x9bea,	// (0x00060f8e) main_mup_pane_g4

0x9c06,	// (0x00060faa) main_mup_pane_g5_ParamLimits

0x9c06,	// (0x00060faa) main_mup_pane_g5

0x9c23,	// (0x00060fc7) main_mup_pane_g6_ParamLimits

0x9c23,	// (0x00060fc7) main_mup_pane_g6

0x9c3f,	// (0x00060fe3) main_mup_pane_g7_ParamLimits

0x9c3f,	// (0x00060fe3) main_mup_pane_g7

0x9c5b,	// (0x00060fff) main_mup_pane_g8_ParamLimits

0x9c5b,	// (0x00060fff) main_mup_pane_g8

0x9c77,	// (0x0006101b) main_mup_pane_g9_ParamLimits

0x9c77,	// (0x0006101b) main_mup_pane_g9

0x9c8e,	// (0x00061032) main_mup_pane_g10_ParamLimits

0x9c8e,	// (0x00061032) main_mup_pane_g10

0x9ca5,	// (0x00061049) main_mup_pane_g11_ParamLimits

0x9ca5,	// (0x00061049) main_mup_pane_g11

0x9cb9,	// (0x0006105d) main_mup_pane_g12_ParamLimits

0x9cb9,	// (0x0006105d) main_mup_pane_g12

0x9cc5,	// (0x00061069) main_mup_pane_g13_ParamLimits

0x9cc5,	// (0x00061069) main_mup_pane_g13

0x000c,

0xf481,	// (0x00066825) main_mup_pane_g_ParamLimits

0xf481,	// (0x00066825) main_mup_pane_g

0x9cd9,	// (0x0006107d) main_mup_pane_t1_ParamLimits

0x9cd9,	// (0x0006107d) main_mup_pane_t1

0x9cf6,	// (0x0006109a) main_mup_pane_t2_ParamLimits

0x9cf6,	// (0x0006109a) main_mup_pane_t2

0x9d10,	// (0x000610b4) main_mup_pane_t3_ParamLimits

0x9d10,	// (0x000610b4) main_mup_pane_t3

0x9d2a,	// (0x000610ce) main_mup_pane_t4_ParamLimits

0x9d2a,	// (0x000610ce) main_mup_pane_t4

0x9d3c,	// (0x000610e0) main_mup_pane_t5_ParamLimits

0x9d3c,	// (0x000610e0) main_mup_pane_t5

0x9d4e,	// (0x000610f2) main_mup_pane_t6_ParamLimits

0x9d4e,	// (0x000610f2) main_mup_pane_t6

0x0005,

0xf49c,	// (0x00066840) main_mup_pane_t_ParamLimits

0xf49c,	// (0x00066840) main_mup_pane_t

0x9d64,	// (0x00061108) mup_progress_pane_ParamLimits

0x9d64,	// (0x00061108) mup_progress_pane

0x9d70,	// (0x00061114) mup_visualizer_pane_ParamLimits

0x9d70,	// (0x00061114) mup_visualizer_pane

0x9d9e,	// (0x00061142) mup_volume_pane_ParamLimits

0x9d9e,	// (0x00061142) mup_volume_pane

0x1347,	// (0x000586eb) mup_visualizer_pane_g1_ParamLimits

0x1347,	// (0x000586eb) mup_visualizer_pane_g1

0x1347,	// (0x000586eb) mup_visualizer_pane_g2_ParamLimits

0x1347,	// (0x000586eb) mup_visualizer_pane_g2

0x1155,	// (0x000584f9) mup_visualizer_pane_g3_ParamLimits

0x1155,	// (0x000584f9) mup_visualizer_pane_g3

0x0002,

0xf4a9,	// (0x0006684d) mup_visualizer_pane_g_ParamLimits

0xf4a9,	// (0x0006684d) mup_visualizer_pane_g

0x8175,	// (0x0005f519) mup_volume_pane_g1

0x135d,	// (0x00058701) mup_volume_pane_g2

0x0001,

0xf4b0,	// (0x00066854) mup_volume_pane_g

0x8175,	// (0x0005f519) mup_progress_pane_g1

0x1366,	// (0x0005870a) mup_progress_pane_g2

0x136f,	// (0x00058713) mup_progress_pane_g3

0x0002,

0xf4b5,	// (0x00066859) mup_progress_pane_g

0x7aa4,	// (0x0005ee48) bg_popup_window_pane_cp05

0x1378,	// (0x0005871c) heading_pane_cp02_ParamLimits

0x1378,	// (0x0005871c) heading_pane_cp02

0x1392,	// (0x00058736) list_popup_blid_pane

0x139a,	// (0x0005873e) list_blid_sat_info_pane_ParamLimits

0x139a,	// (0x0005873e) list_blid_sat_info_pane

0x13ad,	// (0x00058751) list_blid_sat_info_pane_g1

0x13b5,	// (0x00058759) list_blid_sat_info_pane_t1

0x9e91,	// (0x00061235) mup_equalizer_pane_ParamLimits

0x9e91,	// (0x00061235) mup_equalizer_pane

0x9eaa,	// (0x0006124e) mup_equalizer_pane_cp1_ParamLimits

0x9eaa,	// (0x0006124e) mup_equalizer_pane_cp1

0x9ec3,	// (0x00061267) mup_equalizer_pane_cp2_ParamLimits

0x9ec3,	// (0x00061267) mup_equalizer_pane_cp2

0x9edc,	// (0x00061280) mup_equalizer_pane_cp3_ParamLimits

0x9edc,	// (0x00061280) mup_equalizer_pane_cp3

0x9ef5,	// (0x00061299) mup_equalizer_pane_cp4_ParamLimits

0x9ef5,	// (0x00061299) mup_equalizer_pane_cp4

0x9f0e,	// (0x000612b2) mup_equalizer_pane_cp5

0x9f20,	// (0x000612c4) mup_equalizer_pane_cp6

0x9f32,	// (0x000612d6) mup_equalizer_pane_cp7

0x257c,	// (0x00059920) bg_popup_call_poc_act_pane_g9

0x2584,	// (0x00059928) bg_popup_call_poc_act_pane_g10

0x258c,	// (0x00059930) bg_popup_call_poc_act_pane_g11

0x000a,

0x7cff,	// (0x0005f0a3) mup_scale_pane

0x8175,	// (0x0005f519) mup_scale_pane_g1

0x13c3,	// (0x00058767) mup_scale_pane_g2

0x0006,

0xf4d1,	// (0x00066875) mup_scale_pane_g

0x13e7,	// (0x0005878b) msg_data_pane

0x13ef,	// (0x00058793) scroll_pane_cp017

0x6677,	// (0x0005da1b) bg_list_pane_cp04_ParamLimits

0x6677,	// (0x0005da1b) bg_list_pane_cp04

0x13f7,	// (0x0005879b) msg_data_pane_g1

0x9947,	// (0x00060ceb) msg_data_pane_g2

0x994f,	// (0x00060cf3) msg_data_pane_g3

0x9f56,	// (0x000612fa) msg_data_pane_g4

0x995f,	// (0x00060d03) msg_data_pane_g5

0x9b8a,	// (0x00060f2e) msg_data_pane_g6

0x9f5e,	// (0x00061302) msg_data_pane_g7

0x0006,

0xf4e0,	// (0x00066884) msg_data_pane_g

0x6697,	// (0x0005da3b) msg_text_pane_ParamLimits

0x6697,	// (0x0005da3b) msg_text_pane

0x9f66,	// (0x0006130a) qrid_highlight_pane_cp011_ParamLimits

0x9f66,	// (0x0006130a) qrid_highlight_pane_cp011

0x7aa4,	// (0x0005ee48) msg_body_pane

0x7aa4,	// (0x0005ee48) msg_header_pane

0x1408,	// (0x000587ac) input_focus_pane_cp07

0x66c9,	// (0x0005da6d) msg_header_pane_t1_ParamLimits

0x66c9,	// (0x0005da6d) msg_header_pane_t1

0x66db,	// (0x0005da7f) msg_header_pane_t2_ParamLimits

0x66db,	// (0x0005da7f) msg_header_pane_t2

0x0001,

0xf4f4,	// (0x00066898) msg_header_pane_t_ParamLimits

0xf4f4,	// (0x00066898) msg_header_pane_t

0x142f,	// (0x000587d3) msg_body_pane_g1

0x66ed,	// (0x0005da91) msg_body_pane_t1_ParamLimits

0x66ed,	// (0x0005da91) msg_body_pane_t1

0x6718,	// (0x0005dabc) msg_body_pane_t2_ParamLimits

0x6718,	// (0x0005dabc) msg_body_pane_t2

0x672a,	// (0x0005dace) msg_body_pane_t3_ParamLimits

0x672a,	// (0x0005dace) msg_body_pane_t3

0x0002,

0xf4f9,	// (0x0006689d) msg_body_pane_t_ParamLimits

0xf4f9,	// (0x0006689d) msg_body_pane_t

0x9fca,	// (0x0006136e) main_viewer_pane_g1_ParamLimits

0x9fca,	// (0x0006136e) main_viewer_pane_g1

0x9fd6,	// (0x0006137a) main_viewer_pane_g2_ParamLimits

0x9fd6,	// (0x0006137a) main_viewer_pane_g2

0x9fe2,	// (0x00061386) main_viewer_pane_g3_ParamLimits

0x9fe2,	// (0x00061386) main_viewer_pane_g3

0x9ff1,	// (0x00061395) main_viewer_pane_g4_ParamLimits

0x9ff1,	// (0x00061395) main_viewer_pane_g4

0xa000,	// (0x000613a4) main_viewer_pane_g5_ParamLimits

0xa000,	// (0x000613a4) main_viewer_pane_g5

0xa000,	// (0x000613a4) main_viewer_pane_g7_ParamLimits

0xa000,	// (0x000613a4) main_viewer_pane_g7

0xa012,	// (0x000613b6) main_viewer_pane_g8_ParamLimits

0xa012,	// (0x000613b6) main_viewer_pane_g8

0x0007,

0xf509,	// (0x000668ad) main_viewer_pane_g_ParamLimits

0xf509,	// (0x000668ad) main_viewer_pane_g

0x145b,	// (0x000587ff) viewer_content_pane_ParamLimits

0x145b,	// (0x000587ff) viewer_content_pane

0xa042,	// (0x000613e6) main_postcard_pane_g1_ParamLimits

0xa042,	// (0x000613e6) main_postcard_pane_g1

0xa04e,	// (0x000613f2) main_postcard_pane_g2_ParamLimits

0xa04e,	// (0x000613f2) main_postcard_pane_g2

0xa05a,	// (0x000613fe) main_postcard_pane_g3_ParamLimits

0xa05a,	// (0x000613fe) main_postcard_pane_g3

0x0005,

0xf51a,	// (0x000668be) main_postcard_pane_g_ParamLimits

0xf51a,	// (0x000668be) main_postcard_pane_g

0xa066,	// (0x0006140a) main_postcard_pane_g4

0x27ba,	// (0x00059b5e) smil_status_volume_pane_g2

0xa08a,	// (0x0006142e) postcard_pane_ParamLimits

0xa08a,	// (0x0006142e) postcard_pane

0x1347,	// (0x000586eb) postcard_pane_g1_ParamLimits

0x1347,	// (0x000586eb) postcard_pane_g1

0xa0ba,	// (0x0006145e) postcard_pane_g2_ParamLimits

0xa0ba,	// (0x0006145e) postcard_pane_g2

0xa0c6,	// (0x0006146a) postcard_pane_g3_ParamLimits

0xa0c6,	// (0x0006146a) postcard_pane_g3

0x1477,	// (0x0005881b) postcard_pane_g4_ParamLimits

0x1477,	// (0x0005881b) postcard_pane_g4

0xa0d2,	// (0x00061476) postcard_pane_g5_ParamLimits

0xa0d2,	// (0x00061476) postcard_pane_g5

0xa0de,	// (0x00061482) postcard_pane_g6_ParamLimits

0xa0de,	// (0x00061482) postcard_pane_g6

0x1469,	// (0x0005880d) postcard_pane_g7_ParamLimits

0x1469,	// (0x0005880d) postcard_pane_g7

0x0006,

0xf527,	// (0x000668cb) postcard_pane_g_ParamLimits

0xf527,	// (0x000668cb) postcard_pane_g

0xa0ea,	// (0x0006148e) main_mp2_pane_g1_ParamLimits

0xa0ea,	// (0x0006148e) main_mp2_pane_g1

0xa0f6,	// (0x0006149a) main_mp2_pane_g2_ParamLimits

0xa0f6,	// (0x0006149a) main_mp2_pane_g2

0xa102,	// (0x000614a6) main_mp2_pane_g3_ParamLimits

0xa102,	// (0x000614a6) main_mp2_pane_g3

0x0002,

0xf536,	// (0x000668da) main_mp2_pane_g_ParamLimits

0xf536,	// (0x000668da) main_mp2_pane_g

0xa10e,	// (0x000614b2) main_mp2_pane_t1_ParamLimits

0xa10e,	// (0x000614b2) main_mp2_pane_t1

0xa123,	// (0x000614c7) main_mp2_pane_t2_ParamLimits

0xa123,	// (0x000614c7) main_mp2_pane_t2

0xa135,	// (0x000614d9) main_mp2_pane_t3_ParamLimits

0xa135,	// (0x000614d9) main_mp2_pane_t3

0x0002,

0xf53d,	// (0x000668e1) main_mp2_pane_t_ParamLimits

0xf53d,	// (0x000668e1) main_mp2_pane_t

0x1485,	// (0x00058829) pec_content_pane_ParamLimits

0x1485,	// (0x00058829) pec_content_pane

0x09c8,	// (0x00057d6c) scroll_pane_cp015

0x1497,	// (0x0005883b) pec_attribute_pane_ParamLimits

0x1497,	// (0x0005883b) pec_attribute_pane

0xa147,	// (0x000614eb) pec_content_pane_g1_ParamLimits

0xa147,	// (0x000614eb) pec_content_pane_g1

0x14a7,	// (0x0005884b) pec_content_pane_t1_ParamLimits

0x14a7,	// (0x0005884b) pec_content_pane_t1

0x14b9,	// (0x0005885d) pec_content_pane_t2_ParamLimits

0x14b9,	// (0x0005885d) pec_content_pane_t2

0x0001,

0xf544,	// (0x000668e8) pec_content_pane_t_ParamLimits

0xf544,	// (0x000668e8) pec_content_pane_t

0xa153,	// (0x000614f7) list_single_graphic_pane_cp01_ParamLimits

0xa153,	// (0x000614f7) list_single_graphic_pane_cp01

0x7cff,	// (0x0005f0a3) bg_popup_sub_pane_cp04

0x14cb,	// (0x0005886f) popup_mup_playback_window_g1

0x14d7,	// (0x0005887b) popup_mup_playback_window_t1

0x14ec,	// (0x00058890) popup_mup_playback_window_t2

0x0001,

0xf549,	// (0x000668ed) popup_mup_playback_window_t

0x1523,	// (0x000588c7) main_image_pane_g1_ParamLimits

0x1523,	// (0x000588c7) main_image_pane_g1

0x1566,	// (0x0005890a) scroll_pane_cp018_ParamLimits

0x1566,	// (0x0005890a) scroll_pane_cp018

0x157e,	// (0x00058922) scroll_pane_cp016_ParamLimits

0x157e,	// (0x00058922) scroll_pane_cp016

0xa1d8,	// (0x0006157c) smil2_image_pane_ParamLimits

0xa1d8,	// (0x0006157c) smil2_image_pane

0xa200,	// (0x000615a4) smil2_root_pane_ParamLimits

0xa200,	// (0x000615a4) smil2_root_pane

0xa22c,	// (0x000615d0) smil2_text_pane_ParamLimits

0xa22c,	// (0x000615d0) smil2_text_pane

0x7aa4,	// (0x0005ee48) bg_list_pane_cp06

0x15ba,	// (0x0005895e) grid_radio_pane

0x7aa4,	// (0x0005ee48) bg_popup_window_pane_cp06

0x15c2,	// (0x00058966) main_fmradio_pane_t1

0x0fa2,	// (0x00058346) heading_pane_cp04

0x15d0,	// (0x00058974) main_fmradio_pane_t2

0x25d4,	// (0x00059978) popup_cale_lunar_info_window_g1

0x15de,	// (0x00058982) main_fmradio_pane_t3

0x25dc,	// (0x00059980) popup_cale_lunar_info_window_g2

0x15ec,	// (0x00058990) main_fmradio_pane_t4

0x0001,

0x15fa,	// (0x0005899e) main_fmradio_pane_t5

0x0004,

0xf637,	// (0x000669db) popup_cale_lunar_info_window_g

0xf55e,	// (0x00066902) main_fmradio_pane_t

0x1608,	// (0x000589ac) wait_bar_pane_cp03

0x1610,	// (0x000589b4) cell_fmradio_pane_ParamLimits

0x1610,	// (0x000589b4) cell_fmradio_pane

0x1469,	// (0x0005880d) cell_fmradio_pane_g1_ParamLimits

0x1469,	// (0x0005880d) cell_fmradio_pane_g1

0x7aa4,	// (0x0005ee48) grid_highlight_pane_cp011

0x1623,	// (0x000589c7) poc_content_pane_ParamLimits

0x1623,	// (0x000589c7) poc_content_pane

0x1636,	// (0x000589da) scroll_pane_cp019

0xa260,	// (0x00061604) popup_call_poc_act_window_ParamLimits

0xa260,	// (0x00061604) popup_call_poc_act_window

0xa26d,	// (0x00061611) popup_call_poc_inact_window_ParamLimits

0xa26d,	// (0x00061611) popup_call_poc_inact_window

0xf5fb,	// (0x0006699f) bg_popup_call_poc_act_pane_g

0x2594,	// (0x00059938) bg_popup_call_poc_inact_pane_g1

0x259c,	// (0x00059940) bg_popup_call_poc_inact_pane_g2

0x163e,	// (0x000589e2) popup_call_poc_act_window_g2

0x25a4,	// (0x00059948) bg_popup_call_poc_inact_pane_g3

0x2524,	// (0x000598c8) bg_popup_call_poc_inact_pane_g4

0x25ac,	// (0x00059950) bg_popup_call_poc_inact_pane_g5

0x1646,	// (0x000589ea) popup_call_poc_act_window_t1_ParamLimits

0x1646,	// (0x000589ea) popup_call_poc_act_window_t1

0x166e,	// (0x00058a12) popup_call_poc_act_window_t2_ParamLimits

0x166e,	// (0x00058a12) popup_call_poc_act_window_t2

0x1696,	// (0x00058a3a) popup_call_poc_act_window_t3_ParamLimits

0x1696,	// (0x00058a3a) popup_call_poc_act_window_t3

0x16be,	// (0x00058a62) popup_call_poc_act_window_t4_ParamLimits

0x16be,	// (0x00058a62) popup_call_poc_act_window_t4

0x0003,

0xf569,	// (0x0006690d) popup_call_poc_act_window_t_ParamLimits

0xf569,	// (0x0006690d) popup_call_poc_act_window_t

0x25b4,	// (0x00059958) bg_popup_call_poc_inact_pane_g6

0x25bc,	// (0x00059960) bg_popup_call_poc_inact_pane_g7

0x25c4,	// (0x00059968) bg_popup_call_poc_inact_pane_g8

0x16d0,	// (0x00058a74) popup_call_poc_inact_window_g2

0x25cc,	// (0x00059970) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf612,	// (0x000669b6) bg_popup_call_poc_inact_pane_g

0x16d8,	// (0x00058a7c) popup_call_poc_inact_window_t1_ParamLimits

0x16d8,	// (0x00058a7c) popup_call_poc_inact_window_t1

0x16ed,	// (0x00058a91) popup_call_poc_inact_window_t2_ParamLimits

0x16ed,	// (0x00058a91) popup_call_poc_inact_window_t2

0x1702,	// (0x00058aa6) popup_call_poc_inact_window_t3_ParamLimits

0x1702,	// (0x00058aa6) popup_call_poc_inact_window_t3

0x0002,

0xf572,	// (0x00066916) popup_call_poc_inact_window_t_ParamLimits

0xf572,	// (0x00066916) popup_call_poc_inact_window_t

0x2740,	// (0x00059ae4) context_pane_ParamLimits

0xa776,	// (0x00061b1a) signal_pane_ParamLimits

0x1288,	// (0x0005862c) main_call2_pane

0x272e,	// (0x00059ad2) popup_phob_thumbnail2_window_ParamLimits

0x272e,	// (0x00059ad2) popup_phob_thumbnail2_window

0x9f7c,	// (0x00061320) aid_hotspot_pointer_arrow_pane

0x9f84,	// (0x00061328) aid_hotspot_pointer_hand_pane

0xa51c,	// (0x000618c0) phob_pre_status_pane_g5

0x88aa,	// (0x0005fc4e) cams_zoom_pane_ParamLimits

0x88b6,	// (0x0005fc5a) image_vga_pane_ParamLimits

0x88c3,	// (0x0005fc67) main_camera_pane_g1_ParamLimits

0x88cf,	// (0x0005fc73) main_camera_pane_g2_ParamLimits

0x88db,	// (0x0005fc7f) main_camera_pane_g3_ParamLimits

0x88e7,	// (0x0005fc8b) main_camera_pane_g4_ParamLimits

0x88f3,	// (0x0005fc97) main_camera_pane_g5_ParamLimits

0x88ff,	// (0x0005fca3) main_camera_pane_g6_ParamLimits

0x890b,	// (0x0005fcaf) main_camera_pane_g7_ParamLimits

0xf271,	// (0x00066615) main_camera_pane_g_ParamLimits

0x8923,	// (0x0005fcc7) main_camera_pane_t1_ParamLimits

0x8935,	// (0x0005fcd9) main_camera_pane_t2_ParamLimits

0xf282,	// (0x00066626) main_camera_pane_t_ParamLimits

0x7cff,	// (0x0005f0a3) bg_popup_preview_window_pane_cp01_ParamLimits

0x7cff,	// (0x0005f0a3) bg_popup_preview_window_pane_cp01

0x1717,	// (0x00058abb) popup_phob_thumbnail2_window_g1_ParamLimits

0x1717,	// (0x00058abb) popup_phob_thumbnail2_window_g1

0x7aa4,	// (0x0005ee48) call2_cli_visual_pane

0xa289,	// (0x0006162d) popup_call2_audio_conf_window_ParamLimits

0xa289,	// (0x0006162d) popup_call2_audio_conf_window

0xa29c,	// (0x00061640) popup_call2_audio_first_window_ParamLimits

0xa29c,	// (0x00061640) popup_call2_audio_first_window

0xa318,	// (0x000616bc) popup_call2_audio_in_window_ParamLimits

0xa318,	// (0x000616bc) popup_call2_audio_in_window

0xa348,	// (0x000616ec) popup_call2_audio_out_window_ParamLimits

0xa348,	// (0x000616ec) popup_call2_audio_out_window

0xa394,	// (0x00061738) popup_call2_audio_second_window_ParamLimits

0xa394,	// (0x00061738) popup_call2_audio_second_window

0xa3e0,	// (0x00061784) popup_call2_audio_wait_window_ParamLimits

0xa3e0,	// (0x00061784) popup_call2_audio_wait_window

0x7aa4,	// (0x0005ee48) bg_popup_call2_act_pane_cp03

0x7ce1,	// (0x0005f085) list_conf_pane_cp

0x1723,	// (0x00058ac7) popup_call2_audio_conf_window_t1

0x0fff,	// (0x000583a3) list_single_graphic_popup_conf2_pane_ParamLimits

0x0fff,	// (0x000583a3) list_single_graphic_popup_conf2_pane

0x1012,	// (0x000583b6) list_highlight_pane_cp04

0x1731,	// (0x00058ad5) list_single_graphic_popup_conf2_pane_g1

0x1023,	// (0x000583c7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf579,	// (0x0006691d) list_single_graphic_popup_conf2_pane_g

0x1739,	// (0x00058add) list_single_graphic_popup_conf2_pane_t1

0x1747,	// (0x00058aeb) bg_popup_call2_act_pane_cp01_ParamLimits

0x1747,	// (0x00058aeb) bg_popup_call2_act_pane_cp01

0x17d1,	// (0x00058b75) call_type_pane_cp05_ParamLimits

0x17d1,	// (0x00058b75) call_type_pane_cp05

0x1825,	// (0x00058bc9) popup_call2_audio_second_window_g1_ParamLimits

0x1825,	// (0x00058bc9) popup_call2_audio_second_window_g1

0x1879,	// (0x00058c1d) popup_call2_audio_second_window_g2_ParamLimits

0x1879,	// (0x00058c1d) popup_call2_audio_second_window_g2

0x0002,

0xf57e,	// (0x00066922) popup_call2_audio_second_window_g_ParamLimits

0xf57e,	// (0x00066922) popup_call2_audio_second_window_g

0x18de,	// (0x00058c82) popup_call2_audio_second_window_t1_ParamLimits

0x18de,	// (0x00058c82) popup_call2_audio_second_window_t1

0x1999,	// (0x00058d3d) popup_call2_audio_second_window_t2_ParamLimits

0x1999,	// (0x00058d3d) popup_call2_audio_second_window_t2

0x19ec,	// (0x00058d90) popup_call2_audio_second_window_t3_ParamLimits

0x19ec,	// (0x00058d90) popup_call2_audio_second_window_t3

0x0003,

0xf585,	// (0x00066929) popup_call2_audio_second_window_t_ParamLimits

0xf585,	// (0x00066929) popup_call2_audio_second_window_t

0x7aa4,	// (0x0005ee48) bg_popup_call2_in_pane_cp02

0x7aae,	// (0x0005ee52) call_type_pane_cp04

0x7ab6,	// (0x0005ee5a) popup_call2_audio_wait_window_g1

0x7abe,	// (0x0005ee62) popup_call2_audio_wait_window_g2

0x0001,

0xf15e,	// (0x00066502) popup_call2_audio_wait_window_g

0x7ac6,	// (0x0005ee6a) popup_call2_audio_wait_window_t3

0x1adf,	// (0x00058e83) bg_popup_call2_act_pane_ParamLimits

0x1adf,	// (0x00058e83) bg_popup_call2_act_pane

0x1b9f,	// (0x00058f43) call_type_pane_cp03_ParamLimits

0x1b9f,	// (0x00058f43) call_type_pane_cp03

0x1c03,	// (0x00058fa7) popup_call2_audio_first_window_g1_ParamLimits

0x1c03,	// (0x00058fa7) popup_call2_audio_first_window_g1

0x1c73,	// (0x00059017) popup_call2_audio_first_window_g2_ParamLimits

0x1c73,	// (0x00059017) popup_call2_audio_first_window_g2

0x1347,	// (0x000586eb) popup_call2_audio_first_window_g3_ParamLimits

0x1347,	// (0x000586eb) popup_call2_audio_first_window_g3

0x0004,

0xf58e,	// (0x00066932) popup_call2_audio_first_window_g_ParamLimits

0xf58e,	// (0x00066932) popup_call2_audio_first_window_g

0x1d51,	// (0x000590f5) popup_call2_audio_first_window_t1_ParamLimits

0x1d51,	// (0x000590f5) popup_call2_audio_first_window_t1

0x1e54,	// (0x000591f8) popup_call2_audio_first_window_t4_ParamLimits

0x1e54,	// (0x000591f8) popup_call2_audio_first_window_t4

0x1f37,	// (0x000592db) popup_call2_audio_first_window_t5_ParamLimits

0x1f37,	// (0x000592db) popup_call2_audio_first_window_t5

0x0003,

0xf599,	// (0x0006693d) popup_call2_audio_first_window_t_ParamLimits

0xf599,	// (0x0006693d) popup_call2_audio_first_window_t

0x7cf7,	// (0x0005f09b) bg_popup_call2_act_pane_g1

0x25e4,	// (0x00059988) popup_cale_lunar_info_window_t1

0x25f2,	// (0x00059996) popup_cale_lunar_info_window_t2

0x2600,	// (0x000599a4) popup_cale_lunar_info_window_t3

0x7aa4,	// (0x0005ee48) bg_popup_call2_bubble_pane

0x2038,	// (0x000593dc) bg_popup_call2_in_pane_cp01_ParamLimits

0x2038,	// (0x000593dc) bg_popup_call2_in_pane_cp01

0x775c,	// (0x0005eb00) call_type_pane_cp02

0x2080,	// (0x00059424) popup_call2_audio_out_window_g1_ParamLimits

0x2080,	// (0x00059424) popup_call2_audio_out_window_g1

0x20ac,	// (0x00059450) popup_call2_audio_out_window_g2_ParamLimits

0x20ac,	// (0x00059450) popup_call2_audio_out_window_g2

0x20d4,	// (0x00059478) popup_call2_audio_out_window_g3_ParamLimits

0x20d4,	// (0x00059478) popup_call2_audio_out_window_g3

0x0003,

0xf5a2,	// (0x00066946) popup_call2_audio_out_window_g_ParamLimits

0xf5a2,	// (0x00066946) popup_call2_audio_out_window_g

0x210f,	// (0x000594b3) popup_call2_audio_out_window_t1_ParamLimits

0x210f,	// (0x000594b3) popup_call2_audio_out_window_t1

0x216e,	// (0x00059512) popup_call2_audio_out_window_t2_ParamLimits

0x216e,	// (0x00059512) popup_call2_audio_out_window_t2

0x21c2,	// (0x00059566) popup_call2_audio_out_window_t3_ParamLimits

0x21c2,	// (0x00059566) popup_call2_audio_out_window_t3

0x21d8,	// (0x0005957c) popup_call2_audio_out_window_t4_ParamLimits

0x21d8,	// (0x0005957c) popup_call2_audio_out_window_t4

0x21ee,	// (0x00059592) popup_call2_audio_out_window_t5_ParamLimits

0x21ee,	// (0x00059592) popup_call2_audio_out_window_t5

0x0005,

0xf5ab,	// (0x0006694f) popup_call2_audio_out_window_t_ParamLimits

0xf5ab,	// (0x0006694f) popup_call2_audio_out_window_t

0x2252,	// (0x000595f6) bg_popup_call2_in_pane_ParamLimits

0x2252,	// (0x000595f6) bg_popup_call2_in_pane

0x22ae,	// (0x00059652) popup_call2_audio_in_window_g1_ParamLimits

0x22ae,	// (0x00059652) popup_call2_audio_in_window_g1

0x22e6,	// (0x0005968a) popup_call2_audio_in_window_g2_ParamLimits

0x22e6,	// (0x0005968a) popup_call2_audio_in_window_g2

0x231e,	// (0x000596c2) popup_call2_audio_in_window_g3_ParamLimits

0x231e,	// (0x000596c2) popup_call2_audio_in_window_g3

0x0003,

0xf5b8,	// (0x0006695c) popup_call2_audio_in_window_g_ParamLimits

0xf5b8,	// (0x0006695c) popup_call2_audio_in_window_g

0x2376,	// (0x0005971a) popup_call2_audio_in_window_t1_ParamLimits

0x2376,	// (0x0005971a) popup_call2_audio_in_window_t1

0x23f6,	// (0x0005979a) popup_call2_audio_in_window_t2_ParamLimits

0x23f6,	// (0x0005979a) popup_call2_audio_in_window_t2

0x2476,	// (0x0005981a) popup_call2_audio_in_window_t3_ParamLimits

0x2476,	// (0x0005981a) popup_call2_audio_in_window_t3

0x2490,	// (0x00059834) popup_call2_audio_in_window_t4_ParamLimits

0x2490,	// (0x00059834) popup_call2_audio_in_window_t4

0x24a2,	// (0x00059846) popup_call2_audio_in_window_t5_ParamLimits

0x24a2,	// (0x00059846) popup_call2_audio_in_window_t5

0x24b7,	// (0x0005985b) popup_call2_audio_in_window_t6_ParamLimits

0x24b7,	// (0x0005985b) popup_call2_audio_in_window_t6

0x0005,

0xf5c1,	// (0x00066965) popup_call2_audio_in_window_t_ParamLimits

0xf5c1,	// (0x00066965) popup_call2_audio_in_window_t

0x7cf7,	// (0x0005f09b) bg_popup_call2_in_pane_g1

0x260e,	// (0x000599b2) popup_cale_lunar_info_window_t4

0x0003,

0xf63c,	// (0x000669e0) popup_cale_lunar_info_window_t

0x7cff,	// (0x0005f0a3) bg_popup_call2_rect_pane_ParamLimits

0x7cff,	// (0x0005f0a3) bg_popup_call2_rect_pane

0x7aa4,	// (0x0005ee48) call2_cli_visual_graphic_pane

0x7aa4,	// (0x0005ee48) call2_cli_visual_text_pane

0xa7fb,	// (0x00061b9f) smil_status_volume_pane_g3

0x0002,

0x8175,	// (0x0005f519) call2_cli_visual_graphic_pane_g1

0x8175,	// (0x0005f519) call2_cli_visual_graphic_pane_g2

0x8175,	// (0x0005f519) call2_cli_visual_graphic_pane_g3

0x0002,

0xf5ce,	// (0x00066972) call2_cli_visual_graphic_pane_g

0x24cc,	// (0x00059870) bg_popup_call2_rect_pane_g1

0x82b0,	// (0x0005f654) bg_popup_call2_rect_pane_g2

0x24d4,	// (0x00059878) bg_popup_call2_rect_pane_g3

0x24dc,	// (0x00059880) bg_popup_call2_rect_pane_g4

0x24e4,	// (0x00059888) bg_popup_call2_rect_pane_g5

0x24ec,	// (0x00059890) bg_popup_call2_rect_pane_g6

0x24f4,	// (0x00059898) bg_popup_call2_rect_pane_g7

0x24fc,	// (0x000598a0) bg_popup_call2_rect_pane_g8

0x2504,	// (0x000598a8) bg_popup_call2_rect_pane_g9

0x0008,

0xf5d5,	// (0x00066979) bg_popup_call2_rect_pane_g

0x250c,	// (0x000598b0) bg_popup_call2_bubble_pane_g1

0x2514,	// (0x000598b8) bg_popup_call2_bubble_pane_g2

0x251c,	// (0x000598c0) bg_popup_call2_bubble_pane_g3

0x2524,	// (0x000598c8) bg_popup_call2_bubble_pane_g4

0x252c,	// (0x000598d0) bg_popup_call2_bubble_pane_g5

0x2534,	// (0x000598d8) bg_popup_call2_bubble_pane_g6

0x253c,	// (0x000598e0) bg_popup_call2_bubble_pane_g7

0x2544,	// (0x000598e8) bg_popup_call2_bubble_pane_g8

0x254c,	// (0x000598f0) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5e8,	// (0x0006698c) bg_popup_call2_bubble_pane_g

0x8378,	// (0x0005f71c) aid_cale_week_size_cell_pane

0x8947,	// (0x0005fceb) aid_cams_cif_uncrop_pane_ParamLimits

0x8947,	// (0x0005fceb) aid_cams_cif_uncrop_pane

0x8add,	// (0x0005fe81) aid_cams_size_cell_ParamLimits

0x8add,	// (0x0005fe81) aid_cams_size_cell

0x8ae9,	// (0x0005fe8d) grid_cams_pane_ParamLimits

0x8af5,	// (0x0005fe99) linegrid_cams_pane_ParamLimits

0x8bd4,	// (0x0005ff78) call_video_pane_t1

0x8bea,	// (0x0005ff8e) call_video_pane_t2

0x0001,

0xf2d5,	// (0x00066679) call_video_pane_t

0x9052,	// (0x000603f6) aid_cale_month_size_cell_pane_ParamLimits

0x9052,	// (0x000603f6) aid_cale_month_size_cell_pane

0xf685,	// (0x00066a29) smil_status_volume_pane_g

0xa808,	// (0x00061bac) volume_smil_pane_ParamLimits

0x73a5,	// (0x0005e749) aid_popup2_width_pane

0x8211,	// (0x0005f5b5) cell_qdial_pane_g4_ParamLimits

0x8211,	// (0x0005f5b5) cell_qdial_pane_g4

0x9a8b,	// (0x00060e2f) aid_blid_cardinal_pane_ParamLimits

0x9a97,	// (0x00060e3b) aid_blid_destination_pane_ParamLimits

0x9a97,	// (0x00060e3b) aid_blid_destination_pane

0x7cff,	// (0x0005f0a3) bg_popup_call_poc_act_pane_ParamLimits

0x7cff,	// (0x0005f0a3) bg_popup_call_poc_act_pane

0x7cff,	// (0x0005f0a3) bg_popup_call_poc_inact_pane_ParamLimits

0x7cff,	// (0x0005f0a3) bg_popup_call_poc_inact_pane

0x2554,	// (0x000598f8) bg_popup_call_poc_act_pane_g1

0x255c,	// (0x00059900) bg_popup_call_poc_act_pane_g2

0x2564,	// (0x00059908) bg_popup_call_poc_act_pane_g3

0x2524,	// (0x000598c8) bg_popup_call_poc_act_pane_g4

0x252c,	// (0x000598d0) bg_popup_call_poc_act_pane_g5

0x256c,	// (0x00059910) bg_popup_call_poc_act_pane_g6

0x253c,	// (0x000598e0) bg_popup_call_poc_act_pane_g7

0x2574,	// (0x00059918) bg_popup_call_poc_act_pane_g8

0x7aa4,	// (0x0005ee48) main_usb_pane

0x270d,	// (0x00059ab1) popup_cale_lunar_info_window

0x8e57,	// (0x000601fb) im_reading_pane_t1_ParamLimits

0x8e8f,	// (0x00060233) list_im_pane_ParamLimits

0x8ea0,	// (0x00060244) scroll_pane_cp07_ParamLimits

0x7aa4,	// (0x0005ee48) grid_highlight_pane_cp012

0x7cff,	// (0x0005f0a3) mup_scale_pane_ParamLimits

0x1347,	// (0x000586eb) main_usb_pane_g1_ParamLimits

0x1347,	// (0x000586eb) main_usb_pane_g1

0xa441,	// (0x000617e5) main_usb_pane_g2_ParamLimits

0xa441,	// (0x000617e5) main_usb_pane_g2

0x0001,

0xf625,	// (0x000669c9) main_usb_pane_g_ParamLimits

0xf625,	// (0x000669c9) main_usb_pane_g

0xa44d,	// (0x000617f1) main_usb_pane_t1_ParamLimits

0xa44d,	// (0x000617f1) main_usb_pane_t1

0xa45f,	// (0x00061803) main_usb_pane_t2_ParamLimits

0xa45f,	// (0x00061803) main_usb_pane_t2

0xa471,	// (0x00061815) main_usb_pane_t3_ParamLimits

0xa471,	// (0x00061815) main_usb_pane_t3

0xa483,	// (0x00061827) main_usb_pane_t4_ParamLimits

0xa483,	// (0x00061827) main_usb_pane_t4

0xa495,	// (0x00061839) main_usb_pane_t5_ParamLimits

0xa495,	// (0x00061839) main_usb_pane_t5

0xa4a7,	// (0x0006184b) main_usb_pane_t6_ParamLimits

0xa4a7,	// (0x0006184b) main_usb_pane_t6

0x0005,

0xf62a,	// (0x000669ce) main_usb_pane_t_ParamLimits

0x114c,	// (0x000584f0) aid_text_placing

0x9a37,	// (0x00060ddb) main_location2_pane_t1_ParamLimits

0x9a4d,	// (0x00060df1) main_location2_pane_t2_ParamLimits

0x9a63,	// (0x00060e07) main_location2_pane_t3_ParamLimits

0x9a79,	// (0x00060e1d) main_location2_pane_t4_ParamLimits

0x9a79,	// (0x00060e1d) main_location2_pane_t4

0xf436,	// (0x000667da) main_location2_pane_t_ParamLimits

0x7dcb,	// (0x0005f16f) find_pinb_pane_g2_ParamLimits

0x7dcb,	// (0x0005f16f) find_pinb_pane_g2

0x0001,

0xf184,	// (0x00066528) find_pinb_pane_g_ParamLimits

0xf184,	// (0x00066528) find_pinb_pane_g

0x7dd7,	// (0x0005f17b) find_pinb_pane_t1_ParamLimits

0x7de9,	// (0x0005f18d) find_pinb_pane_t2_ParamLimits

0xf189,	// (0x0006652d) find_pinb_pane_t_ParamLimits

0x7aa4,	// (0x0005ee48) main_call3_pane

0x930a,	// (0x000606ae) cale_month_day_heading_pane_t1_ParamLimits

0x9368,	// (0x0006070c) cale_month_day_heading_pane_t2_ParamLimits

0x93cd,	// (0x00060771) cale_month_day_heading_pane_t3_ParamLimits

0x9432,	// (0x000607d6) cale_month_day_heading_pane_t4_ParamLimits

0x9497,	// (0x0006083b) cale_month_day_heading_pane_t5_ParamLimits

0x94fc,	// (0x000608a0) cale_month_day_heading_pane_t6_ParamLimits

0x9561,	// (0x00060905) cale_month_day_heading_pane_t7_ParamLimits

0xf30d,	// (0x000666b1) cale_month_day_heading_pane_t_ParamLimits

0x0b9c,	// (0x00057f40) smil_status_volume_pane

0xa0a2,	// (0x00061446) postcard_address_pane_ParamLimits

0xa0a2,	// (0x00061446) postcard_address_pane

0xa0ae,	// (0x00061452) postcard_message_pane_ParamLimits

0xa0ae,	// (0x00061452) postcard_message_pane

0xa41d,	// (0x000617c1) call2_cli_visual_pane_t1_ParamLimits

0xa41d,	// (0x000617c1) call2_cli_visual_pane_t1

0xa959,	// (0x00061cfd) postcard_message_pane_t1_ParamLimits

0xa959,	// (0x00061cfd) postcard_message_pane_t1

0xa942,	// (0x00061ce6) postcard_address_pane_t1_ParamLimits

0xa942,	// (0x00061ce6) postcard_address_pane_t1

0xa935,	// (0x00061cd9) popup_call3_audio_in_window_ParamLimits

0xa935,	// (0x00061cd9) popup_call3_audio_in_window

0xa81d,	// (0x00061bc1) bg_popup_call3_in_pane_ParamLimits

0xa81d,	// (0x00061bc1) bg_popup_call3_in_pane

0xa87b,	// (0x00061c1f) popup_call3_audio_in_window_g1_ParamLimits

0xa87b,	// (0x00061c1f) popup_call3_audio_in_window_g1

0xa893,	// (0x00061c37) popup_call3_audio_in_window_g2_ParamLimits

0xa893,	// (0x00061c37) popup_call3_audio_in_window_g2

0xa8ab,	// (0x00061c4f) popup_call3_audio_in_window_g3_ParamLimits

0xa8ab,	// (0x00061c4f) popup_call3_audio_in_window_g3

0x0003,

0xf68c,	// (0x00066a30) popup_call3_audio_in_window_g_ParamLimits

0xf68c,	// (0x00066a30) popup_call3_audio_in_window_g

0xa8d3,	// (0x00061c77) popup_call3_audio_in_window_t1_ParamLimits

0xa8d3,	// (0x00061c77) popup_call3_audio_in_window_t1

0xa8fb,	// (0x00061c9f) popup_call3_audio_in_window_t2_ParamLimits

0xa8fb,	// (0x00061c9f) popup_call3_audio_in_window_t2

0xa923,	// (0x00061cc7) popup_call3_audio_in_window_t3_ParamLimits

0xa923,	// (0x00061cc7) popup_call3_audio_in_window_t3

0x0002,

0xf695,	// (0x00066a39) popup_call3_audio_in_window_t_ParamLimits

0xf695,	// (0x00066a39) popup_call3_audio_in_window_t

0x1288,	// (0x0005862c) bg_popup_call3_rect_pane

0x24cc,	// (0x00059870) bg_popup_call3_rect_pane_g1

0x82b0,	// (0x0005f654) bg_popup_call3_rect_pane_g2

0x24d4,	// (0x00059878) bg_popup_call3_rect_pane_g3

0x24dc,	// (0x00059880) bg_popup_call3_rect_pane_g4

0x24e4,	// (0x00059888) bg_popup_call3_rect_pane_g5

0x24ec,	// (0x00059890) bg_popup_call3_rect_pane_g6

0x24f4,	// (0x00059898) bg_popup_call3_rect_pane_g7

0x9db9,	// (0x0006115d) mup_visualizer_osc_pane

0x1355,	// (0x000586f9) mup_visualizer_spec_pane

0xa83d,	// (0x00061be1) call3_video_qcif_pane_ParamLimits

0xa83d,	// (0x00061be1) call3_video_qcif_pane

0xa84d,	// (0x00061bf1) call3_video_qcif_uncrop_pane_ParamLimits

0xa84d,	// (0x00061bf1) call3_video_qcif_uncrop_pane

0xa859,	// (0x00061bfd) call3_video_subqcif_pane_ParamLimits

0xa859,	// (0x00061bfd) call3_video_subqcif_pane

0xa86b,	// (0x00061c0f) call3_video_subqcif_uncrop_pane_ParamLimits

0xa86b,	// (0x00061c0f) call3_video_subqcif_uncrop_pane

0xa8c3,	// (0x00061c67) popup_call3_audio_in_window_g4_ParamLimits

0xa8c3,	// (0x00061c67) popup_call3_audio_in_window_g4

0xa7ea,	// (0x00061b8e) mup_spec_half_pane

0xa7f3,	// (0x00061b97) mup_spec_half_pane_cp

0x27a0,	// (0x00059b44) mup_osc_middle_pane

0x27a9,	// (0x00059b4d) mup_visualizer_osc_pane_g1

0xa7cb,	// (0x00061b6f) mup_spec_bar_pane_ParamLimits

0xa7cb,	// (0x00061b6f) mup_spec_bar_pane

0x278d,	// (0x00059b31) mup_spec_bar_pane_g1

0x2797,	// (0x00059b3b) mup_spec_bar_pane_g2

0x0001,

0xf680,	// (0x00066a24) mup_spec_bar_pane_g

0x8378,	// (0x0005f71c) aid_cale_week_size_cell_pane_ParamLimits

0x838b,	// (0x0005f72f) bg_cale_heading_pane_ParamLimits

0x839f,	// (0x0005f743) bg_cale_pane_cp01_ParamLimits

0x83b8,	// (0x0005f75c) cale_week_corner_pane_ParamLimits

0x83ce,	// (0x0005f772) cale_week_day_heading_pane_ParamLimits

0x83e2,	// (0x0005f786) cale_week_scroll_pane_g1_ParamLimits

0x83f3,	// (0x0005f797) cale_week_scroll_pane_g2_ParamLimits

0x8404,	// (0x0005f7a8) cale_week_scroll_pane_g3_ParamLimits

0x8415,	// (0x0005f7b9) cale_week_scroll_pane_g4_ParamLimits

0x8426,	// (0x0005f7ca) cale_week_scroll_pane_g5_ParamLimits

0x8437,	// (0x0005f7db) cale_week_scroll_pane_g6_ParamLimits

0x8448,	// (0x0005f7ec) cale_week_scroll_pane_g7_ParamLimits

0x8459,	// (0x0005f7fd) cale_week_scroll_pane_g8_ParamLimits

0x846a,	// (0x0005f80e) cale_week_scroll_pane_g9_ParamLimits

0x847b,	// (0x0005f81f) cale_week_scroll_pane_g10_ParamLimits

0x848c,	// (0x0005f830) cale_week_scroll_pane_g11_ParamLimits

0x849d,	// (0x0005f841) cale_week_scroll_pane_g12_ParamLimits

0x84ae,	// (0x0005f852) cale_week_scroll_pane_g13_ParamLimits

0x84bf,	// (0x0005f863) cale_week_scroll_pane_g14_ParamLimits

0x84d0,	// (0x0005f874) cale_week_scroll_pane_g15_ParamLimits

0xf215,	// (0x000665b9) cale_week_scroll_pane_g_ParamLimits

0x84e1,	// (0x0005f885) cale_week_time_pane_ParamLimits

0x84f2,	// (0x0005f896) grid_cale_week_pane_ParamLimits

0x8505,	// (0x0005f8a9) listscroll_cale_week_pane_t1

0x8517,	// (0x0005f8bb) scroll_pane_cp08_ParamLimits

0x9093,	// (0x00060437) cale_month_corner_pane_ParamLimits

0x0b48,	// (0x00057eec) cale_month_pane_t1

0x92db,	// (0x0006067f) cale_month_week_pane_ParamLimits

0x1347,	// (0x000586eb) popup_call_status_window_g1_ParamLimits

0x986e,	// (0x00060c12) popup_call_status_window_g2_ParamLimits

0x987a,	// (0x00060c1e) popup_call_status_window_g3_ParamLimits

0xf3bd,	// (0x00066761) popup_call_status_window_g_ParamLimits

0x0f9a,	// (0x0005833e) aid_call2_pane

0x66bd,	// (0x0005da61) msg_header_pane_g1

0xa0a2,	// (0x00061446) postcard_address2_pane_ParamLimits

0xa0a2,	// (0x00061446) postcard_address2_pane

0xa0ae,	// (0x00061452) postcard_message2_pane_ParamLimits

0xa0ae,	// (0x00061452) postcard_message2_pane

0xa782,	// (0x00061b26) message2_row_pane_ParamLimits

0xa782,	// (0x00061b26) message2_row_pane

0xa79a,	// (0x00061b3e) address2_row_pane_ParamLimits

0xa79a,	// (0x00061b3e) address2_row_pane

0x275b,	// (0x00059aff) postcard_message2_row_pane_g1

0x2763,	// (0x00059b07) postcard_message2_row_pane_t1

0x275b,	// (0x00059aff) address2_row_pane_g1

0x2763,	// (0x00059b07) address2_row_pane_t1

0x15b2,	// (0x00058956) aid_size_cell_vorec

0x7aa4,	// (0x0005ee48) main_rss_pane

0xa7ad,	// (0x00061b51) rss_list_single_pane_ParamLimits

0xa7ad,	// (0x00061b51) rss_list_single_pane

0x2771,	// (0x00059b15) rss_list_single_pane_t1

0x277f,	// (0x00059b23) rss_list_single_pane_t2

0x0001,

0xf67b,	// (0x00066a1f) rss_list_single_pane_t

0x7aa4,	// (0x0005ee48) main_camera2_pane

0x7aa4,	// (0x0005ee48) main_video2_pane

0xa9a9,	// (0x00061d4d) cams_zoom_pane_cp2_ParamLimits

0xa9a9,	// (0x00061d4d) cams_zoom_pane_cp2

0xa9b5,	// (0x00061d59) image2_vga_pane_ParamLimits

0xa9b5,	// (0x00061d59) image2_vga_pane

0xa9c4,	// (0x00061d68) main_camera2_pane_g1_ParamLimits

0xa9c4,	// (0x00061d68) main_camera2_pane_g1

0xa9d0,	// (0x00061d74) main_camera2_pane_g2_ParamLimits

0xa9d0,	// (0x00061d74) main_camera2_pane_g2

0xa9dc,	// (0x00061d80) main_camera2_pane_g3_ParamLimits

0xa9dc,	// (0x00061d80) main_camera2_pane_g3

0xa9e8,	// (0x00061d8c) main_camera2_pane_g4_ParamLimits

0xa9e8,	// (0x00061d8c) main_camera2_pane_g4

0xa9f4,	// (0x00061d98) main_camera2_pane_g5_ParamLimits

0xa9f4,	// (0x00061d98) main_camera2_pane_g5

0xaa00,	// (0x00061da4) main_camera2_pane_g6_ParamLimits

0xaa00,	// (0x00061da4) main_camera2_pane_g6

0xaa0c,	// (0x00061db0) main_camera2_pane_g7_ParamLimits

0xaa0c,	// (0x00061db0) main_camera2_pane_g7

0xaa18,	// (0x00061dbc) main_camera2_pane_g8_ParamLimits

0xaa18,	// (0x00061dbc) main_camera2_pane_g8

0x0008,

0xf69c,	// (0x00066a40) main_camera2_pane_g_ParamLimits

0xf69c,	// (0x00066a40) main_camera2_pane_g

0xaa30,	// (0x00061dd4) main_camera2_pane_t1_ParamLimits

0xaa30,	// (0x00061dd4) main_camera2_pane_t1

0xaa42,	// (0x00061de6) main_camera2_pane_t2_ParamLimits

0xaa42,	// (0x00061de6) main_camera2_pane_t2

0xaa54,	// (0x00061df8) main_camera2_pane_t3_ParamLimits

0xaa54,	// (0x00061df8) main_camera2_pane_t3

0xaa66,	// (0x00061e0a) main_camera2_pane_t4_ParamLimits

0xaa66,	// (0x00061e0a) main_camera2_pane_t4

0x0006,

0xf6af,	// (0x00066a53) main_camera2_pane_t_ParamLimits

0xf6af,	// (0x00066a53) main_camera2_pane_t

0xaac1,	// (0x00061e65) cams_zoom_pane_cp4_ParamLimits

0xaac1,	// (0x00061e65) cams_zoom_pane_cp4

0xaad1,	// (0x00061e75) image2_cif_pane_ParamLimits

0xaad1,	// (0x00061e75) image2_cif_pane

0xaae2,	// (0x00061e86) image2_subqcif_pane_ParamLimits

0xaae2,	// (0x00061e86) image2_subqcif_pane

0xaaef,	// (0x00061e93) main_video2_pane_g1_ParamLimits

0xaaef,	// (0x00061e93) main_video2_pane_g1

0xab01,	// (0x00061ea5) main_video2_pane_g2_ParamLimits

0xab01,	// (0x00061ea5) main_video2_pane_g2

0xab11,	// (0x00061eb5) main_video2_pane_g3_ParamLimits

0xab11,	// (0x00061eb5) main_video2_pane_g3

0xab21,	// (0x00061ec5) main_video2_pane_g4_ParamLimits

0xab21,	// (0x00061ec5) main_video2_pane_g4

0xab31,	// (0x00061ed5) main_video2_pane_g5_ParamLimits

0xab31,	// (0x00061ed5) main_video2_pane_g5

0xab41,	// (0x00061ee5) main_video2_pane_g6_ParamLimits

0xab41,	// (0x00061ee5) main_video2_pane_g6

0x0005,

0xf6be,	// (0x00066a62) main_video2_pane_g_ParamLimits

0xf6be,	// (0x00066a62) main_video2_pane_g

0xab53,	// (0x00061ef7) main_video2_pane_t1_ParamLimits

0xab53,	// (0x00061ef7) main_video2_pane_t1

0xab6d,	// (0x00061f11) main_video2_pane_t2_ParamLimits

0xab6d,	// (0x00061f11) main_video2_pane_t2

0xab93,	// (0x00061f37) main_video2_pane_t3_ParamLimits

0xab93,	// (0x00061f37) main_video2_pane_t3

0x0002,

0xf6cb,	// (0x00066a6f) main_video2_pane_t_ParamLimits

0xf6cb,	// (0x00066a6f) main_video2_pane_t

0xa556,	// (0x000618fa) call_muted_g2

0x0001,

0xf66d,	// (0x00066a11) call_muted_g

0x7aa4,	// (0x0005ee48) main_mup2_pane

0x280e,	// (0x00059bb2) main_mup2_pane_g1_ParamLimits

0x280e,	// (0x00059bb2) main_mup2_pane_g1

0xabb9,	// (0x00061f5d) main_mup2_pane_g2_ParamLimits

0xabb9,	// (0x00061f5d) main_mup2_pane_g2

0xae29,	// (0x000621cd) main_mup_pane_g13_cp1

0xae31,	// (0x000621d5) mup_volume_pane_cp1

0xabd9,	// (0x00061f7d) main_mup2_pane_g4_ParamLimits

0xabd9,	// (0x00061f7d) main_mup2_pane_g4

0xabea,	// (0x00061f8e) main_mup2_pane_g5_ParamLimits

0xabea,	// (0x00061f8e) main_mup2_pane_g5

0xabfb,	// (0x00061f9f) main_mup2_pane_g6_ParamLimits

0xabfb,	// (0x00061f9f) main_mup2_pane_g6

0xac0c,	// (0x00061fb0) main_mup2_pane_g7_ParamLimits

0xac0c,	// (0x00061fb0) main_mup2_pane_g7

0x0006,

0xf6d2,	// (0x00066a76) main_mup2_pane_g_ParamLimits

0xf6d2,	// (0x00066a76) main_mup2_pane_g

0xac28,	// (0x00061fcc) main_mup2_pane_t1_ParamLimits

0xac28,	// (0x00061fcc) main_mup2_pane_t1

0xac3f,	// (0x00061fe3) main_mup2_pane_t2_ParamLimits

0xac3f,	// (0x00061fe3) main_mup2_pane_t2

0xac56,	// (0x00061ffa) main_mup2_pane_t3_ParamLimits

0xac56,	// (0x00061ffa) main_mup2_pane_t3

0xac6d,	// (0x00062011) main_mup2_pane_t4_ParamLimits

0xac6d,	// (0x00062011) main_mup2_pane_t4

0xac87,	// (0x0006202b) main_mup2_pane_t5_ParamLimits

0xac87,	// (0x0006202b) main_mup2_pane_t5

0xaca1,	// (0x00062045) main_mup2_pane_t6_ParamLimits

0xaca1,	// (0x00062045) main_mup2_pane_t6

0x0005,

0xf6e1,	// (0x00066a85) main_mup2_pane_t_ParamLimits

0xf6e1,	// (0x00066a85) main_mup2_pane_t

0xacd9,	// (0x0006207d) mup2_visualizer_pane_ParamLimits

0xacd9,	// (0x0006207d) mup2_visualizer_pane

0xad0b,	// (0x000620af) mup_progress_pane_cp_ParamLimits

0xad0b,	// (0x000620af) mup_progress_pane_cp

0xae14,	// (0x000621b8) mup_volume_pane_cp_ParamLimits

0xae14,	// (0x000621b8) mup_volume_pane_cp

0xad22,	// (0x000620c6) mup2_visualizer_pane_g1_ParamLimits

0xad22,	// (0x000620c6) mup2_visualizer_pane_g1

0x27e0,	// (0x00059b84) mup2_visualizer_pane_g2_ParamLimits

0x27e0,	// (0x00059b84) mup2_visualizer_pane_g2

0xad37,	// (0x000620db) mup2_visualizer_pane_g3_ParamLimits

0xad37,	// (0x000620db) mup2_visualizer_pane_g3

0x0002,

0xf6ee,	// (0x00066a92) mup2_visualizer_pane_g_ParamLimits

0xf6ee,	// (0x00066a92) mup2_visualizer_pane_g

0x15b2,	// (0x00058956) aid_size_cell_fmradio

0xa638,	// (0x000619dc) aid_height_parent_landcape

0x09af,	// (0x00057d53) wml_content_pane_cp

0x09b7,	// (0x00057d5b) wml_tabs_pane

0x09c0,	// (0x00057d64) popup_wml_miniature_window

0x09c8,	// (0x00057d6c) scroll_pane_cp021

0x09dc,	// (0x00057d80) wml_content_pane_comp8

0x7aa4,	// (0x0005ee48) bg_popup_sub_pane_cp05

0x27fe,	// (0x00059ba2) popup_wml_miniature_window_g1

0x2806,	// (0x00059baa) wml_miniature_view_pane

0xad43,	// (0x000620e7) aid_size_wml_view

0xad4b,	// (0x000620ef) wml_miniature_view_pane_g1

0xad54,	// (0x000620f8) wml_miniature_view_pane_g2

0xad5d,	// (0x00062101) wml_miniature_view_pane_g3

0xad65,	// (0x00062109) wml_miniature_view_pane_g4

0xad6d,	// (0x00062111) wml_miniature_view_pane_g5

0xad75,	// (0x00062119) wml_miniature_view_pane_g6

0xad7d,	// (0x00062121) wml_miniature_view_pane_g7

0xad85,	// (0x00062129) wml_miniature_view_pane_g8

0x0007,

0xf6f5,	// (0x00066a99) wml_miniature_view_pane_g

0x280e,	// (0x00059bb2) background_graphic_ParamLimits

0x280e,	// (0x00059bb2) background_graphic

0x281a,	// (0x00059bbe) wml_tabs_2_pane

0x2823,	// (0x00059bc7) wml_tabs_3_pane_ParamLimits

0x2823,	// (0x00059bc7) wml_tabs_3_pane

0x2835,	// (0x00059bd9) wml_tabs_4_pane_ParamLimits

0x2835,	// (0x00059bd9) wml_tabs_4_pane

0x284b,	// (0x00059bef) wml_tabs_5_pane_ParamLimits

0x284b,	// (0x00059bef) wml_tabs_5_pane

0x2865,	// (0x00059c09) wml_tabs_pane_g2_ParamLimits

0x2865,	// (0x00059c09) wml_tabs_pane_g2

0x2879,	// (0x00059c1d) wml_tabs_pane_g3_ParamLimits

0x2879,	// (0x00059c1d) wml_tabs_pane_g3

0xad8d,	// (0x00062131) wml_tabs_2_active_pane_ParamLimits

0xad8d,	// (0x00062131) wml_tabs_2_active_pane

0xad9d,	// (0x00062141) wml_tabs_2_passive_pane_ParamLimits

0xad9d,	// (0x00062141) wml_tabs_2_passive_pane

0xadad,	// (0x00062151) wml_tabs_3_active_pane_cp_ParamLimits

0xadad,	// (0x00062151) wml_tabs_3_active_pane_cp

0xadbe,	// (0x00062162) wml_tabs_3_passive_pane_ParamLimits

0xadbe,	// (0x00062162) wml_tabs_3_passive_pane

0xadcf,	// (0x00062173) wml_tabs_3_passive_pane_cp_ParamLimits

0xadcf,	// (0x00062173) wml_tabs_3_passive_pane_cp

0xade0,	// (0x00062184) tabs_4_active_pane

0xade8,	// (0x0006218c) tabs_4_passive_pane

0xadf0,	// (0x00062194) tabs_4_passive_pane_cp

0xadf8,	// (0x0006219c) tabs_4_passive_pane_cp2

0xa439,	// (0x000617dd) aid_height_text

0x9d86,	// (0x0006112a) mup_volume_cont_pane_ParamLimits

0x9d86,	// (0x0006112a) mup_volume_cont_pane

0x7d89,	// (0x0005f12d) aid_size_cell_pinb

0x7d93,	// (0x0005f137) aid_size_list_pinb

0xacf4,	// (0x00062098) mup2_volume_cont_pane_ParamLimits

0xacf4,	// (0x00062098) mup2_volume_cont_pane

0xae00,	// (0x000621a4) mup2_volume_cont_pane_g1_ParamLimits

0xae00,	// (0x000621a4) mup2_volume_cont_pane_g1

0x73ad,	// (0x0005e751) aid_size_cell_touch_ParamLimits

0x73ad,	// (0x0005e751) aid_size_cell_touch

0x75ed,	// (0x0005e991) touch_pane_ParamLimits

0x75ed,	// (0x0005e991) touch_pane

0x7393,	// (0x0005e737) main_rss2_pane

0x2896,	// (0x00059c3a) listscroll_rss2_pane

0x289f,	// (0x00059c43) rss2_navigation_pane

0x28a7,	// (0x00059c4b) list_rss2_pane

0x10c9,	// (0x0005846d) scroll_pane_cp22

0x28af,	// (0x00059c53) rss2_navigation_pane_g1

0x28b8,	// (0x00059c5c) rss2_navigation_pane_g2

0x28c0,	// (0x00059c64) rss2_navigation_pane_g3

0x0002,

0xf706,	// (0x00066aaa) rss2_navigation_pane_g

0x28c8,	// (0x00059c6c) rss2_navigation_pane_t1

0xae39,	// (0x000621dd) rss2_list_single_pane_ParamLimits

0xae39,	// (0x000621dd) rss2_list_single_pane

0x28d6,	// (0x00059c7a) rss2_list_single_pane_t2

0x28e4,	// (0x00059c88) rss2_list_single_pane_t3_ParamLimits

0x28e4,	// (0x00059c88) rss2_list_single_pane_t3

0x2901,	// (0x00059ca5) rss2_list_single_pane_t4

0x9727,	// (0x00060acb) smil_status_pane_g1

0xa642,	// (0x000619e6) main_image2_pane_ParamLimits

0xa642,	// (0x000619e6) main_image2_pane

0xaa24,	// (0x00061dc8) main_camera2_pane_g9_ParamLimits

0xaa24,	// (0x00061dc8) main_camera2_pane_g9

0xaa78,	// (0x00061e1c) main_camera2_pane_t5_ParamLimits

0xaa78,	// (0x00061e1c) main_camera2_pane_t5

0xaa8a,	// (0x00061e2e) main_camera2_pane_t6_ParamLimits

0xaa8a,	// (0x00061e2e) main_camera2_pane_t6

0xae50,	// (0x000621f4) main_image2_pane_g1_ParamLimits

0xae50,	// (0x000621f4) main_image2_pane_g1

0xa24e,	// (0x000615f2) smil2_video_pane_ParamLimits

0xa24e,	// (0x000615f2) smil2_video_pane

0x73d5,	// (0x0005e779) aid_zoom_text_primary_cp

0x75a0,	// (0x0005e944) popup_preview_fixed_window

0x8e4f,	// (0x000601f3) im_reading_pane_g1

0xa980,	// (0x00061d24) cams2_bc_adjust_pane_cp_ParamLimits

0xa980,	// (0x00061d24) cams2_bc_adjust_pane_cp

0xaab5,	// (0x00061e59) cams2_bc_adjust_pane_ParamLimits

0xaab5,	// (0x00061e59) cams2_bc_adjust_pane

0xae5c,	// (0x00062200) cams2_bc_adjust_pane_g1

0xae64,	// (0x00062208) cams2_slider_pane

0xae6d,	// (0x00062211) cams2_slider_pane_g1

0xae76,	// (0x0006221a) cams2_slider_pane_g2

0x0006,

0xf70d,	// (0x00066ab1) cams2_slider_pane_g

0x7ec9,	// (0x0005f26d) calc_display_pane_ParamLimits

0x7ee1,	// (0x0005f285) calc_paper_pane_ParamLimits

0x7efd,	// (0x0005f2a1) grid_calc_pane_ParamLimits

0x98ec,	// (0x00060c90) popup_clock_digital_window_t1_ParamLimits

0x154f,	// (0x000588f3) main_image_pane_t1

0x7eaf,	// (0x0005f253) aid_size_cell_calc_ParamLimits

0x7eaf,	// (0x0005f253) aid_size_cell_calc

0xa66b,	// (0x00061a0f) popup_blid_sat_info2_window_ParamLimits

0xa66b,	// (0x00061a0f) popup_blid_sat_info2_window

0x291f,	// (0x00059cc3) aid_size_cell_blid

0x2927,	// (0x00059ccb) bg_popup_window_pane_cp07

0x294a,	// (0x00059cee) grid_popup_blid_pane

0x2952,	// (0x00059cf6) heading_pane_cp05_ParamLimits

0x2952,	// (0x00059cf6) heading_pane_cp05

0x2a1a,	// (0x00059dbe) cell_popup_blid_pane_ParamLimits

0x2a1a,	// (0x00059dbe) cell_popup_blid_pane

0x2a3a,	// (0x00059dde) cell_popup_blid_pane_g1

0x2a42,	// (0x00059de6) cell_popup_blid_pane_t1

0xacbe,	// (0x00062062) mup2_indicator_pane_ParamLimits

0xacbe,	// (0x00062062) mup2_indicator_pane

0x1288,	// (0x0005862c) mup2_visualizer_osc_pane

0x27ec,	// (0x00059b90) mup2_visualizer_spec_pane_ParamLimits

0x27ec,	// (0x00059b90) mup2_visualizer_spec_pane

0xae90,	// (0x00062234) mup2_spec_half_pane

0xae99,	// (0x0006223d) mup2_spec_half_pane_cp

0xaea1,	// (0x00062245) mup2_spec_bar_pane_ParamLimits

0xaea1,	// (0x00062245) mup2_spec_bar_pane

0x278d,	// (0x00059b31) mup2_spec_bar_pane_g1

0x2797,	// (0x00059b3b) mup2_spec_bar_pane_g2

0x0001,

0xf680,	// (0x00066a24) mup2_spec_bar_pane_g

0xaec0,	// (0x00062264) mup2_osc_middle_pane

0x27a9,	// (0x00059b4d) mup2_visualizer_osc_pane_g1

0x765a,	// (0x0005e9fe) popup_number_entry_window_t1_ParamLimits

0x766d,	// (0x0005ea11) popup_number_entry_window_t2_ParamLimits

0x767f,	// (0x0005ea23) popup_number_entry_window_t3_ParamLimits

0x7691,	// (0x0005ea35) popup_number_entry_window_t5_ParamLimits

0x7691,	// (0x0005ea35) popup_number_entry_window_t5

0xf12f,	// (0x000664d3) popup_number_entry_window_t_ParamLimits

0x76c6,	// (0x0005ea6a) text_title_cp2_ParamLimits

0x9f8c,	// (0x00061330) aid_hotspot_pointer_text2_pane

0xa01e,	// (0x000613c2) main_viewer_pane_g9_ParamLimits

0xa01e,	// (0x000613c2) main_viewer_pane_g9

0x0b48,	// (0x00057eec) cale_month_pane_t1_ParamLimits

0x0baf,	// (0x00057f53) bg_cale_pane_ParamLimits

0x0bc7,	// (0x00057f6b) list_cale_pane_ParamLimits

0x8505,	// (0x0005f8a9) listscroll_cale_day_pane_t1

0x0bd8,	// (0x00057f7c) scroll_pane_cp09_ParamLimits

0x9dc1,	// (0x00061165) main_mup_eq_pane_t1_ParamLimits

0x9dc1,	// (0x00061165) main_mup_eq_pane_t1

0x9dd7,	// (0x0006117b) main_mup_eq_pane_t2_ParamLimits

0x9dd7,	// (0x0006117b) main_mup_eq_pane_t2

0x9ded,	// (0x00061191) main_mup_eq_pane_t3_ParamLimits

0x9ded,	// (0x00061191) main_mup_eq_pane_t3

0x9e03,	// (0x000611a7) main_mup_eq_pane_t4_ParamLimits

0x9e03,	// (0x000611a7) main_mup_eq_pane_t4

0x9e19,	// (0x000611bd) main_mup_eq_pane_t5_ParamLimits

0x9e19,	// (0x000611bd) main_mup_eq_pane_t5

0x9e2f,	// (0x000611d3) main_mup_eq_pane_t6_ParamLimits

0x9e2f,	// (0x000611d3) main_mup_eq_pane_t6

0x9e41,	// (0x000611e5) main_mup_eq_pane_t7_ParamLimits

0x9e41,	// (0x000611e5) main_mup_eq_pane_t7

0x9e53,	// (0x000611f7) main_mup_eq_pane_t8_ParamLimits

0x9e53,	// (0x000611f7) main_mup_eq_pane_t8

0x9e65,	// (0x00061209) main_mup_eq_pane_t9_ParamLimits

0x9e65,	// (0x00061209) main_mup_eq_pane_t9

0x9e7b,	// (0x0006121f) main_mup_eq_pane_t10_ParamLimits

0x9e7b,	// (0x0006121f) main_mup_eq_pane_t10

0x0009,

0xf4bc,	// (0x00066860) main_mup_eq_pane_t_ParamLimits

0xf4bc,	// (0x00066860) main_mup_eq_pane_t

0x9f0e,	// (0x000612b2) mup_equalizer_pane_cp5_ParamLimits

0x9f20,	// (0x000612c4) mup_equalizer_pane_cp6_ParamLimits

0x9f32,	// (0x000612d6) mup_equalizer_pane_cp7_ParamLimits

0x7393,	// (0x0005e737) main_gallery_pane

0x27b2,	// (0x00059b56) smil2_volume_pane

0x27cd,	// (0x00059b71) smil_status_volume_pane_g1_ParamLimits

0x27ba,	// (0x00059b5e) smil_status_volume_pane_g2_ParamLimits

0xa7fb,	// (0x00061b9f) smil_status_volume_pane_g3_ParamLimits

0xf685,	// (0x00066a29) smil_status_volume_pane_g_ParamLimits

0x2927,	// (0x00059ccb) bg_popup_window_pane_cp07_ParamLimits

0x2935,	// (0x00059cd9) blid_firmament_pane

0xaec9,	// (0x0006226d) aid_size_cell_gallery_ParamLimits

0xaec9,	// (0x0006226d) aid_size_cell_gallery

0xaed7,	// (0x0006227b) grid_gallery_pane_ParamLimits

0xaed7,	// (0x0006227b) grid_gallery_pane

0xaee3,	// (0x00062287) cell_gallery_pane_ParamLimits

0xaee3,	// (0x00062287) cell_gallery_pane

0x2a50,	// (0x00059df4) bg_cell_gallery_focus_pane_ParamLimits

0x2a50,	// (0x00059df4) bg_cell_gallery_focus_pane

0x2a62,	// (0x00059e06) cell_gallery_pane_g1_ParamLimits

0x2a62,	// (0x00059e06) cell_gallery_pane_g1

0xaf22,	// (0x000622c6) cell_gallery_pane_g2_ParamLimits

0xaf22,	// (0x000622c6) cell_gallery_pane_g2

0xaf2f,	// (0x000622d3) cell_gallery_pane_g3_ParamLimits

0xaf2f,	// (0x000622d3) cell_gallery_pane_g3

0x2a6e,	// (0x00059e12) cell_gallery_pane_g4_ParamLimits

0x2a6e,	// (0x00059e12) cell_gallery_pane_g4

0x0003,

0xf733,	// (0x00066ad7) cell_gallery_pane_g_ParamLimits

0xf733,	// (0x00066ad7) cell_gallery_pane_g

0x2a7a,	// (0x00059e1e) bg_cell_gallery_focus_pane_g1

0x2a82,	// (0x00059e26) bg_cell_gallery_focus_pane_g2

0x2a8a,	// (0x00059e2e) bg_cell_gallery_focus_pane_g3

0x2a92,	// (0x00059e36) bg_cell_gallery_focus_pane_g4

0x2a9a,	// (0x00059e3e) bg_cell_gallery_focus_pane_g5

0x2aa2,	// (0x00059e46) bg_cell_gallery_focus_pane_g6

0x2aaa,	// (0x00059e4e) bg_cell_gallery_focus_pane_g7

0x2ab2,	// (0x00059e56) bg_cell_gallery_focus_pane_g8

0x0007,

0xf73c,	// (0x00066ae0) bg_cell_gallery_focus_pane_g

0x2aba,	// (0x00059e5e) aid_firma_cardinal

0x2ace,	// (0x00059e72) blid_firmament_pane_t1

0x2ae5,	// (0x00059e89) blid_firmament_pane_t2

0x2afc,	// (0x00059ea0) blid_firmament_pane_t3

0x2b13,	// (0x00059eb7) blid_firmament_pane_t4

0x0003,

0xf74d,	// (0x00066af1) blid_firmament_pane_t

0x2b2a,	// (0x00059ece) blid_sat_info_pane

0x2b3a,	// (0x00059ede) blid_sat_info_pane_g1

0x2b3a,	// (0x00059ede) blid_sat_info_pane_g2

0x0001,

0xf756,	// (0x00066afa) blid_sat_info_pane_g

0x2b44,	// (0x00059ee8) blid_sat_info_pane_t1

0x2b52,	// (0x00059ef6) smil2_volume_content_pane

0x2b5b,	// (0x00059eff) smil2_volume_pane_g1

0x2b63,	// (0x00059f07) smil2_volume_content_pane_g1

0x2b6c,	// (0x00059f10) smil2_volume_content_pane_g2

0x2b75,	// (0x00059f19) smil2_volume_content_pane_g3

0x2b7e,	// (0x00059f22) smil2_volume_content_pane_g4

0x2b87,	// (0x00059f2b) smil2_volume_content_pane_g5

0x2b90,	// (0x00059f34) smil2_volume_content_pane_g6

0x2b99,	// (0x00059f3d) smil2_volume_content_pane_g7

0x2ba2,	// (0x00059f46) smil2_volume_content_pane_g8

0x2bab,	// (0x00059f4f) smil2_volume_content_pane_g9

0x2bb4,	// (0x00059f58) smil2_volume_content_pane_g10

0x0009,

0xf75b,	// (0x00066aff) smil2_volume_content_pane_g

0x856b,	// (0x0005f90f) cale_week_day_heading_pane_t1_ParamLimits

0x8584,	// (0x0005f928) cale_week_day_heading_pane_t2_ParamLimits

0x859d,	// (0x0005f941) cale_week_day_heading_pane_t3_ParamLimits

0x85b6,	// (0x0005f95a) cale_week_day_heading_pane_t4_ParamLimits

0x85cf,	// (0x0005f973) cale_week_day_heading_pane_t5_ParamLimits

0x85e8,	// (0x0005f98c) cale_week_day_heading_pane_t6_ParamLimits

0x8601,	// (0x0005f9a5) cale_week_day_heading_pane_t7_ParamLimits

0xf234,	// (0x000665d8) cale_week_day_heading_pane_t_ParamLimits

0x861a,	// (0x0005f9be) bg_cale_side_pane_ParamLimits

0x8628,	// (0x0005f9cc) cale_week_time_pane_t1_ParamLimits

0x8654,	// (0x0005f9f8) cale_week_time_pane_t2_ParamLimits

0x8680,	// (0x0005fa24) cale_week_time_pane_t3_ParamLimits

0x86ac,	// (0x0005fa50) cale_week_time_pane_t4_ParamLimits

0x86d8,	// (0x0005fa7c) cale_week_time_pane_t5_ParamLimits

0x8704,	// (0x0005faa8) cale_week_time_pane_t6_ParamLimits

0x8730,	// (0x0005fad4) cale_week_time_pane_t7_ParamLimits

0x875c,	// (0x0005fb00) cale_week_time_pane_t8_ParamLimits

0xf243,	// (0x000665e7) cale_week_time_pane_t_ParamLimits

0x8788,	// (0x0005fb2c) cell_cale_week_pane_g2_ParamLimits

0x861a,	// (0x0005f9be) bg_cale_side_pane_cp01_ParamLimits

0x95c6,	// (0x0006096a) cale_month_week_pane_t1_ParamLimits

0x95dd,	// (0x00060981) cale_month_week_pane_t2_ParamLimits

0x95f4,	// (0x00060998) cale_month_week_pane_t3_ParamLimits

0x960b,	// (0x000609af) cale_month_week_pane_t4_ParamLimits

0x9622,	// (0x000609c6) cale_month_week_pane_t5_ParamLimits

0x9639,	// (0x000609dd) cale_month_week_pane_t6_ParamLimits

0xf31c,	// (0x000666c0) cale_month_week_pane_t_ParamLimits

0x96f6,	// (0x00060a9a) cell_cale_month_pane_g1_ParamLimits

0x7393,	// (0x0005e737) main_cale_event_viewer_pane

0x7393,	// (0x0005e737) listscroll_cale_event_viewer_pane

0x2bbd,	// (0x00059f61) list_cale_ev_pane

0x2bc5,	// (0x00059f69) scroll_pane_cp023

0xaf3c,	// (0x000622e0) field_cale_ev_pane_ParamLimits

0xaf3c,	// (0x000622e0) field_cale_ev_pane

0x2bd1,	// (0x00059f75) field_cale_ev_content_pane_ParamLimits

0x2bd1,	// (0x00059f75) field_cale_ev_content_pane

0x2bdd,	// (0x00059f81) field_cale_ev_pane_g1_ParamLimits

0x2bdd,	// (0x00059f81) field_cale_ev_pane_g1

0x2be9,	// (0x00059f8d) field_cale_ev_pane_g2_ParamLimits

0x2be9,	// (0x00059f8d) field_cale_ev_pane_g2

0x2c01,	// (0x00059fa5) field_cale_ev_pane_g3_ParamLimits

0x2c01,	// (0x00059fa5) field_cale_ev_pane_g3

0x0002,

0xf770,	// (0x00066b14) field_cale_ev_pane_g_ParamLimits

0xf770,	// (0x00066b14) field_cale_ev_pane_g

0x2c19,	// (0x00059fbd) field_cale_ev_pane_t1_ParamLimits

0x2c19,	// (0x00059fbd) field_cale_ev_pane_t1

0xaf56,	// (0x000622fa) field_cale_ev_content_pane_t1_ParamLimits

0xaf56,	// (0x000622fa) field_cale_ev_content_pane_t1

0x13ff,	// (0x000587a3) bg_button_pane_cp01

0x8361,	// (0x0005f705) listscroll_cale_week_pane_ParamLimits

0x8370,	// (0x0005f714) popup_toolbar_window_cp01

0x8505,	// (0x0005f8a9) listscroll_cale_week_pane_t1_ParamLimits

0x8040,	// (0x0005f3e4) listscroll_cale_day_pane_ParamLimits

0x8370,	// (0x0005f714) popup_toolbar_window_cp02

0x8505,	// (0x0005f8a9) listscroll_cale_day_pane_t1_ParamLimits

0x8361,	// (0x0005f705) main_cale_month_pane_ParamLimits

0xa70b,	// (0x00061aaf) popup_toolbar_window_cp03_ParamLimits

0xa70b,	// (0x00061aaf) popup_toolbar_window_cp03

0xa176,	// (0x0006151a) main_image_pane_g2_ParamLimits

0xa176,	// (0x0006151a) main_image_pane_g2

0xa182,	// (0x00061526) main_image_pane_g3_ParamLimits

0xa182,	// (0x00061526) main_image_pane_g3

0x0002,

0xf54e,	// (0x000668f2) main_image_pane_g_ParamLimits

0xf54e,	// (0x000668f2) main_image_pane_g

0x154f,	// (0x000588f3) main_image_pane_t1_ParamLimits

0xa18e,	// (0x00061532) main_image_pane_t2_ParamLimits

0xa18e,	// (0x00061532) main_image_pane_t2

0xa1a0,	// (0x00061544) main_image_pane_t3_ParamLimits

0xa1a0,	// (0x00061544) main_image_pane_t3

0xa1b2,	// (0x00061556) main_image_pane_t4_ParamLimits

0xa1b2,	// (0x00061556) main_image_pane_t4

0x0003,

0xf555,	// (0x000668f9) main_image_pane_t_ParamLimits

0xf555,	// (0x000668f9) main_image_pane_t

0xa1c4,	// (0x00061568) popup_image_details_window_cp01

0xa1cc,	// (0x00061570) popup_toobar_trans_pane_cp01_ParamLimits

0xa1cc,	// (0x00061570) popup_toobar_trans_pane_cp01

0xa6aa,	// (0x00061a4e) popup_image_details_window_ParamLimits

0xa6aa,	// (0x00061a4e) popup_image_details_window

0x2715,	// (0x00059ab9) popup_image_focus_window

0xa974,	// (0x00061d18) camera2_autofocus_pane_ParamLimits

0xa974,	// (0x00061d18) camera2_autofocus_pane

0x7393,	// (0x0005e737) bg_popup_sub_pane_cp06

0x2c30,	// (0x00059fd4) popup_image_focus_window_g1

0x2c38,	// (0x00059fdc) popup_image_focus_window_g2

0x2c40,	// (0x00059fe4) popup_image_focus_window_g3

0x2c48,	// (0x00059fec) popup_image_focus_window_g4

0x0003,

0xf777,	// (0x00066b1b) popup_image_focus_window_g

0x2c50,	// (0x00059ff4) popup_image_focus_window_t1

0x2c5e,	// (0x0005a002) popup_image_focus_window_t2

0x2c6d,	// (0x0005a011) popup_image_focus_window_t3

0x0002,

0xf780,	// (0x00066b24) popup_image_focus_window_t

0x2c7b,	// (0x0005a01f) camera2_autofocus_pane_g1

0xa642,	// (0x000619e6) bg_tb_trans_pane_cp01

0x2c89,	// (0x0005a02d) popup_image_details_window_g1

0x2c9c,	// (0x0005a040) popup_image_details_window_g2

0x0002,

0xf792,	// (0x00066b36) popup_image_details_window_g

0x2cc5,	// (0x0005a069) popup_image_details_window_t1

0x2cd7,	// (0x0005a07b) popup_image_details_window_t2

0x2cf0,	// (0x0005a094) popup_image_details_window_t3

0x2d04,	// (0x0005a0a8) popup_image_details_window_t4

0x2d1f,	// (0x0005a0c3) popup_image_details_window_t5

0x0004,

0xf799,	// (0x00066b3d) popup_image_details_window_t

0x800e,	// (0x0005f3b2) bg_calc_paper_pane_ParamLimits

0x7393,	// (0x0005e737) grid_highlight_pane_cp013

0x8026,	// (0x0005f3ca) list_calc_pane_ParamLimits

0x8038,	// (0x0005f3dc) scroll_pane_cp024

0x8040,	// (0x0005f3e4) bg_calc_display_pane_ParamLimits

0x804c,	// (0x0005f3f0) calc_display_pane_t1_ParamLimits

0x8061,	// (0x0005f405) calc_display_pane_t2_ParamLimits

0x8076,	// (0x0005f41a) calc_display_pane_t3_ParamLimits

0xf1b6,	// (0x0006655a) calc_display_pane_t_ParamLimits

0x817f,	// (0x0005f523) cell_calc_pane_g2

0x0001,

0xf1d3,	// (0x00066577) cell_calc_pane_g

0x8188,	// (0x0005f52c) cell_calc_pane_t1

0x8197,	// (0x0005f53b) grid_highlight_pane_cp02_ParamLimits

0x81ad,	// (0x0005f551) toolbar_button_pane_cp01_ParamLimits

0x81ad,	// (0x0005f551) toolbar_button_pane_cp01

0x1594,	// (0x00058938) temp_image_control_pane_ParamLimits

0x1594,	// (0x00058938) temp_image_control_pane

0xa642,	// (0x000619e6) main_mp3_pane

0x2d39,	// (0x0005a0dd) temp_image_control_pane_g1_ParamLimits

0x2d39,	// (0x0005a0dd) temp_image_control_pane_g1

0x2d47,	// (0x0005a0eb) temp_image_control_pane_g2_ParamLimits

0x2d47,	// (0x0005a0eb) temp_image_control_pane_g2

0x2d59,	// (0x0005a0fd) temp_image_control_pane_g3_ParamLimits

0x2d59,	// (0x0005a0fd) temp_image_control_pane_g3

0xafa0,	// (0x00062344) temp_image_control_pane_g4_ParamLimits

0xafa0,	// (0x00062344) temp_image_control_pane_g4

0x0003,

0xf7a4,	// (0x00066b48) temp_image_control_pane_g_ParamLimits

0xf7a4,	// (0x00066b48) temp_image_control_pane_g

0x2d39,	// (0x0005a0dd) main_mp3_pane_g1

0xafb1,	// (0x00062355) main_mp3_pane_g2

0x0007,

0xf7ad,	// (0x00066b51) main_mp3_pane_g

0x2d9c,	// (0x0005a140) main_mp3_pane_t1

0x8917,	// (0x0005fcbb) main_camera_pane_g8_ParamLimits

0x8917,	// (0x0005fcbb) main_camera_pane_g8

0x8a6f,	// (0x0005fe13) main_video_pane_g7_ParamLimits

0x8a6f,	// (0x0005fe13) main_video_pane_g7

0xaaa3,	// (0x00061e47) main_camera2_pane_t7_ParamLimits

0xaaa3,	// (0x00061e47) main_camera2_pane_t7

0x8f1a,	// (0x000602be) scroll_pane_cp025_ParamLimits

0x8f1a,	// (0x000602be) scroll_pane_cp025

0x8f2e,	// (0x000602d2) scroll_pane_cp026_ParamLimits

0x8f2e,	// (0x000602d2) scroll_pane_cp026

0x8f3d,	// (0x000602e1) wml_content_pane_ParamLimits

0x7393,	// (0x0005e737) main_touch_calib_pane

0xb048,	// (0x000623ec) main_touch_calib_pane_g1

0xb054,	// (0x000623f8) main_touch_calib_pane_g2

0xb060,	// (0x00062404) main_touch_calib_pane_g3

0xb06c,	// (0x00062410) main_touch_calib_pane_g4

0x0003,

0xf7cb,	// (0x00066b6f) main_touch_calib_pane_g

0xb078,	// (0x0006241c) main_touch_calib_pane_t1

0xb08d,	// (0x00062431) main_touch_calib_pane_t2

0x0004,

0xf7d4,	// (0x00066b78) main_touch_calib_pane_t

0x117a,	// (0x0005851e) mup_progress_pane_cp02

0x1199,	// (0x0005853d) navi_pane_g1

0x1219,	// (0x000585bd) navi_pane_mp_t3

0xa642,	// (0x000619e6) main_mp3_pane_ParamLimits

0xa745,	// (0x00061ae9) navi_pane_ParamLimits

0x2d39,	// (0x0005a0dd) main_mp3_pane_g1_ParamLimits

0xafb1,	// (0x00062355) main_mp3_pane_g2_ParamLimits

0xafbd,	// (0x00062361) main_mp3_pane_g3_ParamLimits

0xafbd,	// (0x00062361) main_mp3_pane_g3

0xafc9,	// (0x0006236d) main_mp3_pane_g4_ParamLimits

0xafc9,	// (0x0006236d) main_mp3_pane_g4

0x2d69,	// (0x0005a10d) main_mp3_pane_g5_ParamLimits

0x2d69,	// (0x0005a10d) main_mp3_pane_g5

0x2d77,	// (0x0005a11b) main_mp3_pane_g6_ParamLimits

0x2d77,	// (0x0005a11b) main_mp3_pane_g6

0x2d84,	// (0x0005a128) main_mp3_pane_g7_ParamLimits

0x2d84,	// (0x0005a128) main_mp3_pane_g7

0x2d90,	// (0x0005a134) main_mp3_pane_g8_ParamLimits

0x2d90,	// (0x0005a134) main_mp3_pane_g8

0xf7ad,	// (0x00066b51) main_mp3_pane_g_ParamLimits

0xafd5,	// (0x00062379) main_mp3_pane_t2

0xafe3,	// (0x00062387) main_mp3_pane_t3

0x2daa,	// (0x0005a14e) main_mp3_pane_t4

0x2db8,	// (0x0005a15c) main_mp3_pane_t5

0x0005,

0xf7be,	// (0x00066b62) main_mp3_pane_t

0x2dc6,	// (0x0005a16a) mup_progress_pane_cp01

0x73d5,	// (0x0005e779) aid_zoom_text_secondary2

0x2bbd,	// (0x00059f61) list_cale_ev2_pane

0x2bc5,	// (0x00059f69) scroll_pane_cp023_ParamLimits

0xb0d8,	// (0x0006247c) field_cale_ev2_pane_ParamLimits

0xb0d8,	// (0x0006247c) field_cale_ev2_pane

0xb0ee,	// (0x00062492) field_cale_ev2_pane_g1_ParamLimits

0xb0ee,	// (0x00062492) field_cale_ev2_pane_g1

0xb0fa,	// (0x0006249e) field_cale_ev2_pane_g2_ParamLimits

0xb0fa,	// (0x0006249e) field_cale_ev2_pane_g2

0xb112,	// (0x000624b6) field_cale_ev2_pane_g3_ParamLimits

0xb112,	// (0x000624b6) field_cale_ev2_pane_g3

0x0003,

0xf7df,	// (0x00066b83) field_cale_ev2_pane_g_ParamLimits

0xf7df,	// (0x00066b83) field_cale_ev2_pane_g

0x673c,	// (0x0005dae0) field_cale_ev2_pane_t1_ParamLimits

0x673c,	// (0x0005dae0) field_cale_ev2_pane_t1

0x6753,	// (0x0005daf7) field_cale_ev2_pane_t2_ParamLimits

0x6753,	// (0x0005daf7) field_cale_ev2_pane_t2

0x0001,

0xf7e8,	// (0x00066b8c) field_cale_ev2_pane_t_ParamLimits

0xf7e8,	// (0x00066b8c) field_cale_ev2_pane_t

0xa072,	// (0x00061416) main_postcard_pane_g5_ParamLimits

0xa072,	// (0x00061416) main_postcard_pane_g5

0xa07e,	// (0x00061422) main_postcard_pane_g6_ParamLimits

0xa07e,	// (0x00061422) main_postcard_pane_g6

0x889e,	// (0x0005fc42) camera2_autofocus_pane_cp_ParamLimits

0x889e,	// (0x0005fc42) camera2_autofocus_pane_cp

0xa642,	// (0x000619e6) main_mup3_pane

0xb156,	// (0x000624fa) main_mup3_pane_g1_ParamLimits

0xb156,	// (0x000624fa) main_mup3_pane_g1

0xb177,	// (0x0006251b) main_mup3_pane_g2_ParamLimits

0xb177,	// (0x0006251b) main_mup3_pane_g2

0xb1da,	// (0x0006257e) main_mup3_pane_g3_ParamLimits

0xb1da,	// (0x0006257e) main_mup3_pane_g3

0xb215,	// (0x000625b9) main_mup3_pane_g4_ParamLimits

0xb215,	// (0x000625b9) main_mup3_pane_g4

0xb250,	// (0x000625f4) main_mup3_pane_g5_ParamLimits

0xb250,	// (0x000625f4) main_mup3_pane_g5

0xb28b,	// (0x0006262f) main_mup3_pane_g6_ParamLimits

0xb28b,	// (0x0006262f) main_mup3_pane_g6

0x2e42,	// (0x0005a1e6) main_mup3_pane_g7_ParamLimits

0x2e42,	// (0x0005a1e6) main_mup3_pane_g7

0x0007,

0xf7f8,	// (0x00066b9c) main_mup3_pane_g_ParamLimits

0xf7f8,	// (0x00066b9c) main_mup3_pane_g

0xb2f9,	// (0x0006269d) main_mup3_pane_t1_ParamLimits

0xb2f9,	// (0x0006269d) main_mup3_pane_t1

0xb35c,	// (0x00062700) main_mup3_pane_t2_ParamLimits

0xb35c,	// (0x00062700) main_mup3_pane_t2

0xb419,	// (0x000627bd) main_mup3_pane_t4_ParamLimits

0xb419,	// (0x000627bd) main_mup3_pane_t4

0xb45f,	// (0x00062803) main_mup3_pane_t5_ParamLimits

0xb45f,	// (0x00062803) main_mup3_pane_t5

0xb503,	// (0x000628a7) main_mup3_pane_t6_ParamLimits

0xb503,	// (0x000628a7) main_mup3_pane_t6

0x0005,

0xf809,	// (0x00066bad) main_mup3_pane_t_ParamLimits

0xf809,	// (0x00066bad) main_mup3_pane_t

0xb5ab,	// (0x0006294f) mup3_progress_pane_ParamLimits

0xb5ab,	// (0x0006294f) mup3_progress_pane

0xb5f1,	// (0x00062995) popup_mup3_control_window_ParamLimits

0xb5f1,	// (0x00062995) popup_mup3_control_window

0x2e50,	// (0x0005a1f4) popup_mup3_text_window

0xb60a,	// (0x000629ae) mup3_progress_pane_t1

0xb620,	// (0x000629c4) mup3_progress_pane_t2

0x2e58,	// (0x0005a1fc) mup3_progress_pane_t3

0x0002,

0xf816,	// (0x00066bba) mup3_progress_pane_t

0x2e6f,	// (0x0005a213) mup_progress_pane_cp03

0x7393,	// (0x0005e737) bg_tb_trans_pane_cp04

0xb636,	// (0x000629da) mup3_volume_pane

0xb63e,	// (0x000629e2) popup_mup3_control_window_g1

0xb647,	// (0x000629eb) mup3_volume_pane_g1

0xb650,	// (0x000629f4) mup3_volume_pane_g2

0xb659,	// (0x000629fd) mup3_volume_pane_g3

0x0002,

0xf81d,	// (0x00066bc1) mup3_volume_pane_g

0x7393,	// (0x0005e737) bg_tb_trans_pane_cp03

0x2e7f,	// (0x0005a223) popup_mup3_text_window_g1

0x2e87,	// (0x0005a22b) popup_mup3_text_window_t1

0x8140,	// (0x0005f4e4) list_calc_item_pane_g1_ParamLimits

0x288d,	// (0x00059c31) mup_volume_pane_cp_g1

0xb0a2,	// (0x00062446) main_touch_calib_pane_t3

0xb0b4,	// (0x00062458) main_touch_calib_pane_t4

0xb0c6,	// (0x0006246a) main_touch_calib_pane_t5

0x739d,	// (0x0005e741) aid_cell_size_toolbar2

0x73a5,	// (0x0005e749) aid_popup3_width_pane

0x644b,	// (0x0005d7ef) aid_zoom_text_msg_primary

0x887e,	// (0x0005fc22) vorec_t7

0x80af,	// (0x0005f453) bg_calc_paper_pane_g1_ParamLimits

0x80bb,	// (0x0005f45f) bg_calc_paper_pane_g2_ParamLimits

0x80c7,	// (0x0005f46b) bg_calc_paper_pane_g3_ParamLimits

0x80d3,	// (0x0005f477) bg_calc_paper_pane_g4_ParamLimits

0x80df,	// (0x0005f483) bg_calc_paper_pane_g5_ParamLimits

0x80eb,	// (0x0005f48f) bg_calc_paper_pane_g6_ParamLimits

0x80fa,	// (0x0005f49e) bg_calc_paper_pane_g7_ParamLimits

0x8109,	// (0x0005f4ad) bg_calc_paper_pane_g8_ParamLimits

0xf1bd,	// (0x00066561) bg_calc_paper_pane_g_ParamLimits

0x8118,	// (0x0005f4bc) calc_bg_paper_pane_g9_ParamLimits

0x898a,	// (0x0005fd2e) image_qvga_pane_ParamLimits

0x898a,	// (0x0005fd2e) image_qvga_pane

0x7cff,	// (0x0005f0a3) bg_popup_sub_pane_cp04_ParamLimits

0x14cb,	// (0x0005886f) popup_mup_playback_window_g1_ParamLimits

0x14d7,	// (0x0005887b) popup_mup_playback_window_t1_ParamLimits

0x14ec,	// (0x00058890) popup_mup_playback_window_t2_ParamLimits

0xf549,	// (0x000668ed) popup_mup_playback_window_t_ParamLimits

0xabca,	// (0x00061f6e) main_mup2_pane_g3_ParamLimits

0xabca,	// (0x00061f6e) main_mup2_pane_g3

0x8c45,	// (0x0005ffe9) popup_toolbar_window_cp04

0x18cd,	// (0x00058c71) popup_call2_audio_second_window_g3_ParamLimits

0x18cd,	// (0x00058c71) popup_call2_audio_second_window_g3

0x1cd7,	// (0x0005907b) popup_call2_audio_first_window_g4_ParamLimits

0x1cd7,	// (0x0005907b) popup_call2_audio_first_window_g4

0x2356,	// (0x000596fa) popup_call2_audio_in_window_g4_ParamLimits

0x2356,	// (0x000596fa) popup_call2_audio_in_window_g4

0xa169,	// (0x0006150d) aid_area_sk_bg_cut_ParamLimits

0xa169,	// (0x0006150d) aid_area_sk_bg_cut

0x1501,	// (0x000588a5) aid_area_sk_bg_cut_2_ParamLimits

0x1501,	// (0x000588a5) aid_area_sk_bg_cut_2

0xaf12,	// (0x000622b6) aid_placing_details_win

0xaf1a,	// (0x000622be) aid_placing_details_win_2

0x2c7b,	// (0x0005a01f) camera2_autofocus_pane_g1_ParamLimits

0x7593,	// (0x0005e937) popup_fixed_preview_cale_window_ParamLimits

0x7593,	// (0x0005e937) popup_fixed_preview_cale_window

0x12ab,	// (0x0005864f) navi_slider_pane_g3

0x12a2,	// (0x00058646) navi_slider_pane_g4

0x1299,	// (0x0005863d) navi_slider_pane_g5

0x12ab,	// (0x0005864f) navi_slider_pane_g6

0x9b81,	// (0x00060f25) navi_slider_pane_g7

0x13cc,	// (0x00058770) mup_scale_pane_g3

0x13d5,	// (0x00058779) mup_scale_pane_g4

0x13de,	// (0x00058782) mup_scale_pane_g5

0x9f44,	// (0x000612e8) mup_scale_pane_g6

0x9f4d,	// (0x000612f1) mup_scale_pane_g7

0x12ab,	// (0x0005864f) cams2_slider_pane_g3

0x2917,	// (0x00059cbb) cams2_slider_pane_g4

0xae7f,	// (0x00062223) cams2_slider_pane_g5

0x12ab,	// (0x0005864f) cams2_slider_pane_g6

0xae87,	// (0x0006222b) cams2_slider_pane_g7

0x2b3a,	// (0x00059ede) camera2_autofocus_pane_cp_g1

0x2e95,	// (0x0005a239) bg_popup_preview_window_pane_cp02_ParamLimits

0x2e95,	// (0x0005a239) bg_popup_preview_window_pane_cp02

0xb662,	// (0x00062a06) list_fp_cale_pane_ParamLimits

0xb662,	// (0x00062a06) list_fp_cale_pane

0x2ea1,	// (0x0005a245) popup_fixed_preview_cale_window_t1_ParamLimits

0x2ea1,	// (0x0005a245) popup_fixed_preview_cale_window_t1

0xb672,	// (0x00062a16) popup_fixed_preview_cale_window_t2_ParamLimits

0xb672,	// (0x00062a16) popup_fixed_preview_cale_window_t2

0xb687,	// (0x00062a2b) popup_fixed_preview_cale_window_t3_ParamLimits

0xb687,	// (0x00062a2b) popup_fixed_preview_cale_window_t3

0x0002,

0xf824,	// (0x00066bc8) popup_fixed_preview_cale_window_t_ParamLimits

0xf824,	// (0x00066bc8) popup_fixed_preview_cale_window_t

0xb699,	// (0x00062a3d) list_single_fp_cale_pane_ParamLimits

0xb699,	// (0x00062a3d) list_single_fp_cale_pane

0xb6a6,	// (0x00062a4a) list_single_fp_cale_pane_g1_ParamLimits

0xb6a6,	// (0x00062a4a) list_single_fp_cale_pane_g1

0x2ebf,	// (0x0005a263) list_single_fp_cale_pane_g2_ParamLimits

0x2ebf,	// (0x0005a263) list_single_fp_cale_pane_g2

0x0002,

0xf82b,	// (0x00066bcf) list_single_fp_cale_pane_g_ParamLimits

0xf82b,	// (0x00066bcf) list_single_fp_cale_pane_g

0xb6b2,	// (0x00062a56) list_single_fp_cale_pane_t1_ParamLimits

0xb6b2,	// (0x00062a56) list_single_fp_cale_pane_t1

0xb6c4,	// (0x00062a68) list_single_fp_cale_pane_t2_ParamLimits

0xb6c4,	// (0x00062a68) list_single_fp_cale_pane_t2

0x0001,

0xf832,	// (0x00066bd6) list_single_fp_cale_pane_t_ParamLimits

0xf832,	// (0x00066bd6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x7393,	// (0x0005e737) main_dialer_pane

0xb6f7,	// (0x00062a9b) aid_cell_size_keypad

0xb701,	// (0x00062aa5) dialer_ne_pane

0xb709,	// (0x00062aad) grid_dialer_command_1_pane

0xb711,	// (0x00062ab5) grid_dialer_command_2_pane

0xb719,	// (0x00062abd) grid_dialer_keypad_pane

0xb729,	// (0x00062acd) bg_popup_call_pane_cp06_ParamLimits

0xb729,	// (0x00062acd) bg_popup_call_pane_cp06

0xb735,	// (0x00062ad9) dialer_ne_clear_pane_ParamLimits

0xb735,	// (0x00062ad9) dialer_ne_clear_pane

0x2ed8,	// (0x0005a27c) dialer_ne_pane_g1

0x2ee0,	// (0x0005a284) dialer_ne_pane_t1_ParamLimits

0x2ee0,	// (0x0005a284) dialer_ne_pane_t1

0xb741,	// (0x00062ae5) dialer_ne_pane_t2_ParamLimits

0xb741,	// (0x00062ae5) dialer_ne_pane_t2

0xb75e,	// (0x00062b02) dialer_ne_pane_t3_ParamLimits

0xb75e,	// (0x00062b02) dialer_ne_pane_t3

0x0002,

0xf837,	// (0x00066bdb) dialer_ne_pane_t_ParamLimits

0xf837,	// (0x00066bdb) dialer_ne_pane_t

0xb782,	// (0x00062b26) dialer_ne_pane_t3_copy1_ParamLimits

0xb782,	// (0x00062b26) dialer_ne_pane_t3_copy1

0xb7a6,	// (0x00062b4a) cell_dialer_keypad_pane_ParamLimits

0xb7a6,	// (0x00062b4a) cell_dialer_keypad_pane

0xb7bb,	// (0x00062b5f) cell_dialer_command_1_pane_ParamLimits

0xb7bb,	// (0x00062b5f) cell_dialer_command_1_pane

0xb7d1,	// (0x00062b75) cell_dialer_command_2_pane_ParamLimits

0xb7d1,	// (0x00062b75) cell_dialer_command_2_pane

0x2ef2,	// (0x0005a296) bg_button_pane_cp02_ParamLimits

0x2ef2,	// (0x0005a296) bg_button_pane_cp02

0xb7e0,	// (0x00062b84) cell_dialer_keypad_pane_g1_ParamLimits

0xb7e0,	// (0x00062b84) cell_dialer_keypad_pane_g1

0x2ef2,	// (0x0005a296) bg_button_pane_cp03_ParamLimits

0x2ef2,	// (0x0005a296) bg_button_pane_cp03

0xb7f5,	// (0x00062b99) cell_dialer_command_1_pane_g1_ParamLimits

0xb7f5,	// (0x00062b99) cell_dialer_command_1_pane_g1

0x2efe,	// (0x0005a2a2) bg_button_pane_cp04

0xb808,	// (0x00062bac) cell_dialer_command_2_pane_g1

0x1288,	// (0x0005862c) bg_button_pane_cp06

0x2f06,	// (0x0005a2aa) dialer_ne_clear_pane_g1

0x11a5,	// (0x00058549) navi_pane_g2

0x9b29,	// (0x00060ecd) navi_pane_g3

0x0002,

0xf44c,	// (0x000667f0) navi_pane_g

0x1227,	// (0x000585cb) navi_pane_mv_g2

0x124f,	// (0x000585f3) navi_pane_mv_g5

0x9b4e,	// (0x00060ef2) navi_pane_mv_t1

0x8040,	// (0x0005f3e4) main_clock2_pane

0xb837,	// (0x00062bdb) main_clock2_list_pane_ParamLimits

0xb837,	// (0x00062bdb) main_clock2_list_pane

0xb85d,	// (0x00062c01) main_clock2_pane_t1_ParamLimits

0xb85d,	// (0x00062c01) main_clock2_pane_t1

0xb887,	// (0x00062c2b) main_clock2_pane_t2_ParamLimits

0xb887,	// (0x00062c2b) main_clock2_pane_t2

0x0004,

0xf83e,	// (0x00066be2) main_clock2_pane_t_ParamLimits

0xf83e,	// (0x00066be2) main_clock2_pane_t

0xb8ea,	// (0x00062c8e) popup_clock_analogue_window_cp03_ParamLimits

0xb8ea,	// (0x00062c8e) popup_clock_analogue_window_cp03

0xb906,	// (0x00062caa) popup_clock_digital_window_cp02_ParamLimits

0xb906,	// (0x00062caa) popup_clock_digital_window_cp02

0xb954,	// (0x00062cf8) main_clock2_list_single_pane_ParamLimits

0xb954,	// (0x00062cf8) main_clock2_list_single_pane

0x1288,	// (0x0005862c) list_highlight_pane_cp05

0x2f0e,	// (0x0005a2b2) main_clock2_list_single_pane_t1

0x8c45,	// (0x0005ffe9) popup_toolbar_window_cp04_ParamLimits

0xaf70,	// (0x00062314) camera2_autofocus_pane_g2_ParamLimits

0xaf70,	// (0x00062314) camera2_autofocus_pane_g2

0xaf7c,	// (0x00062320) camera2_autofocus_pane_g3_ParamLimits

0xaf7c,	// (0x00062320) camera2_autofocus_pane_g3

0xaf88,	// (0x0006232c) camera2_autofocus_pane_g4_ParamLimits

0xaf88,	// (0x0006232c) camera2_autofocus_pane_g4

0xaf94,	// (0x00062338) camera2_autofocus_pane_g5_ParamLimits

0xaf94,	// (0x00062338) camera2_autofocus_pane_g5

0x0004,

0xf787,	// (0x00066b2b) camera2_autofocus_pane_g_ParamLimits

0xf787,	// (0x00066b2b) camera2_autofocus_pane_g

0xb136,	// (0x000624da) camera2_autofocus_pane_cp_g2

0xb13e,	// (0x000624e2) camera2_autofocus_pane_cp_g3

0xb146,	// (0x000624ea) camera2_autofocus_pane_cp_g4

0xb14e,	// (0x000624f2) camera2_autofocus_pane_cp_g5

0x0004,

0xf7ed,	// (0x00066b91) camera2_autofocus_pane_cp_g

0xb721,	// (0x00062ac5) popup_dialer_spcha_window

0x7393,	// (0x0005e737) bg_popup_sub_pane_cp07

0x2f1c,	// (0x0005a2c0) list_spcha_pane

0x2f24,	// (0x0005a2c8) list_single_spcha_pane_ParamLimits

0x2f24,	// (0x0005a2c8) list_single_spcha_pane

0x7393,	// (0x0005e737) list_highlight_pane_cp06

0x2f35,	// (0x0005a2d9) list_single_spcha_pane_t1

0x2100,	// (0x000594a4) popup_call2_audio_out_window_g4_ParamLimits

0x2100,	// (0x000594a4) popup_call2_audio_out_window_g4

0x7393,	// (0x0005e737) main_imed2_pane

0x271d,	// (0x00059ac1) popup_imed_adjust2_window

0xa6b6,	// (0x00061a5a) popup_imed_trans_window_ParamLimits

0xa6b6,	// (0x00061a5a) popup_imed_trans_window

0x297e,	// (0x00059d22) popup_blid_sat_info2_window_t1

0x298c,	// (0x00059d30) popup_blid_sat_info2_window_t2

0x000a,

0xf71c,	// (0x00066ac0) popup_blid_sat_info2_window_t

0xb9fc,	// (0x00062da0) aid_size_cell_colour_35

0xba13,	// (0x00062db7) aid_size_cell_colour_112

0xba2a,	// (0x00062dce) aid_size_cell_effect

0xa642,	// (0x000619e6) bg_tb_trans_pane_cp02

0x0d74,	// (0x00058118) heading_imed_pane

0xba44,	// (0x00062de8) listscroll_imed_pane

0x2f43,	// (0x0005a2e7) heading_imed_pane_g1

0x2f4b,	// (0x0005a2ef) heading_imed_pane_t1

0x2f59,	// (0x0005a2fd) grid_imed_colour_35_pane_ParamLimits

0x2f59,	// (0x0005a2fd) grid_imed_colour_35_pane

0xba50,	// (0x00062df4) grid_imed_effect_pane

0x2f6c,	// (0x0005a310) list_imed_aspect_pane

0xba5c,	// (0x00062e00) scroll_pane_cp027_ParamLimits

0xba5c,	// (0x00062e00) scroll_pane_cp027

0xba68,	// (0x00062e0c) cell_imed_effect_pane_ParamLimits

0xba68,	// (0x00062e0c) cell_imed_effect_pane

0x2f74,	// (0x0005a318) cell_imed_colour_pane_ParamLimits

0x2f74,	// (0x0005a318) cell_imed_colour_pane

0x2fae,	// (0x0005a352) cell_imed_colour_pane_g1_ParamLimits

0x2fae,	// (0x0005a352) cell_imed_colour_pane_g1

0x2fbf,	// (0x0005a363) hgihlgiht_grid_pane_cp016_ParamLimits

0x2fbf,	// (0x0005a363) hgihlgiht_grid_pane_cp016

0xba7e,	// (0x00062e22) cell_imed_effect_pane_g1

0xba86,	// (0x00062e2a) grid_highlight_pane_cp017

0x2fd0,	// (0x0005a374) list_imed_single_pane_ParamLimits

0x2fd0,	// (0x0005a374) list_imed_single_pane

0x7393,	// (0x0005e737) list_highlight_pane_cp07

0x2fe3,	// (0x0005a387) list_imed_aspect_pane_comp1_t1

0x26f7,	// (0x00059a9b) bg_tb_trans_pane_cp05

0x3003,	// (0x0005a3a7) popup_imed_adjust2_window_g1

0x302a,	// (0x0005a3ce) popup_imed_adjust2_window_t1

0x3042,	// (0x0005a3e6) slider_imed_adjust_pane

0x3056,	// (0x0005a3fa) slider_imed_adjust_pane_g1

0x3066,	// (0x0005a40a) slider_imed_adjust_pane_g2

0x3076,	// (0x0005a41a) slider_imed_adjust_pane_g3

0x3087,	// (0x0005a42b) slider_imed_adjust_pane_g4

0x0003,

0xf85b,	// (0x00066bff) slider_imed_adjust_pane_g

0xba8f,	// (0x00062e33) aid_size_cell_clipart2

0xba9b,	// (0x00062e3f) grid_imed_clipart_pane

0x3098,	// (0x0005a43c) scroll_pane_cp031

0xbaa5,	// (0x00062e49) cell_imed_clipart_pane_ParamLimits

0xbaa5,	// (0x00062e49) cell_imed_clipart_pane

0xbabc,	// (0x00062e60) cell_imed_clipart_pane_g1

0x7393,	// (0x0005e737) grid_highlight_pane_cp014

0xb843,	// (0x00062be7) main_clock2_pane_g1_ParamLimits

0xb843,	// (0x00062be7) main_clock2_pane_g1

0xb91e,	// (0x00062cc2) aid_call2_pane_cp10

0xb92a,	// (0x00062cce) aid_call_pane_cp10

0x1155,	// (0x000584f9) popup_clock_analogue_window_cp10_g1

0x1155,	// (0x000584f9) popup_clock_analogue_window_cp10_g2

0xb936,	// (0x00062cda) popup_clock_analogue_window_cp10_g3

0xb936,	// (0x00062cda) popup_clock_analogue_window_cp10_g4

0x1155,	// (0x000584f9) popup_clock_analogue_window_cp10_g5

0x0004,

0xf849,	// (0x00066bed) popup_clock_analogue_window_cp10_g

0xb942,	// (0x00062ce6) popup_clock_analogue_window_cp10_t1

0xb966,	// (0x00062d0a) clock_digital_number_pane_cp10_ParamLimits

0xb966,	// (0x00062d0a) clock_digital_number_pane_cp10

0xb97e,	// (0x00062d22) clock_digital_number_pane_cp11_ParamLimits

0xb97e,	// (0x00062d22) clock_digital_number_pane_cp11

0xb996,	// (0x00062d3a) clock_digital_number_pane_cp12_ParamLimits

0xb996,	// (0x00062d3a) clock_digital_number_pane_cp12

0xb9ae,	// (0x00062d52) clock_digital_number_pane_cp13_ParamLimits

0xb9ae,	// (0x00062d52) clock_digital_number_pane_cp13

0xb9c6,	// (0x00062d6a) clock_digital_separator_pane_cp10_ParamLimits

0xb9c6,	// (0x00062d6a) clock_digital_separator_pane_cp10

0xb9de,	// (0x00062d82) popup_clock_digital_window_cp02_t1_ParamLimits

0xb9de,	// (0x00062d82) popup_clock_digital_window_cp02_t1

0x7cf7,	// (0x0005f09b) clock_digital_number_pane_cp10_g1

0x7cf7,	// (0x0005f09b) clock_digital_number_pane_cp10_g2

0x0001,

0xf864,	// (0x00066c08) clock_digital_number_pane_cp10_g

0x7cf7,	// (0x0005f09b) clock_digital_separator_pane_cp10_g1

0x7cf7,	// (0x0005f09b) clock_digital_separator_pane_g2_cp10

0x1258,	// (0x000585fc) navi_pane_vded_g4

0x1261,	// (0x00058605) navi_pane_vded_g5

0x126a,	// (0x0005860e) navi_pane_vded_t1

0x7393,	// (0x0005e737) main_vded_pane

0xbac5,	// (0x00062e69) main_vded_pane_g1

0xbacd,	// (0x00062e71) main_vded_pane_g2

0xbad5,	// (0x00062e79) main_vded_pane_g3

0x0002,

0xf869,	// (0x00066c0d) main_vded_pane_g

0xbadd,	// (0x00062e81) main_vded_pane_t1

0xbaeb,	// (0x00062e8f) main_vded_pane_t2

0x0001,

0xf870,	// (0x00066c14) main_vded_pane_t

0xbaf9,	// (0x00062e9d) vded_slider_pane

0xbb01,	// (0x00062ea5) vded_video_pane

0x30a0,	// (0x0005a444) vded_video_pane_g1

0xbb09,	// (0x00062ead) vded_video_pane_g2

0x2b3a,	// (0x00059ede) vded_video_pane_g3

0x0002,

0xf875,	// (0x00066c19) vded_video_pane_g

0x30aa,	// (0x0005a44e) vded_slider_pane_g1

0x288d,	// (0x00059c31) vded_slider_pane_g2

0x30b3,	// (0x0005a457) vded_slider_pane_g3

0x30bc,	// (0x0005a460) vded_slider_pane_g4

0x30c5,	// (0x0005a469) vded_slider_pane_g5

0x0004,

0xf87c,	// (0x00066c20) vded_slider_pane_g

0xb5e5,	// (0x00062989) mup3_rocker_pane_ParamLimits

0xb5e5,	// (0x00062989) mup3_rocker_pane

0xbb12,	// (0x00062eb6) mup3_control_keys_pane_g1

0xbb1a,	// (0x00062ebe) mup3_control_keys_pane_g2

0xbb22,	// (0x00062ec6) mup3_control_keys_pane_g3

0xbb2a,	// (0x00062ece) mup3_control_keys_pane_g4

0x0003,

0xf887,	// (0x00066c2b) mup3_control_keys_pane_g

0x75b7,	// (0x0005e95b) popup_toolbar2_fixed_window_cp01_ParamLimits

0x75b7,	// (0x0005e95b) popup_toolbar2_fixed_window_cp01

0xb5fd,	// (0x000629a1) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb5fd,	// (0x000629a1) popup_toolbar2_fixed_window_cp02

0x1a3f,	// (0x00058de3) popup_call2_audio_second_window_t4_ParamLimits

0x1a3f,	// (0x00058de3) popup_call2_audio_second_window_t4

0x1f6d,	// (0x00059311) popup_call2_audio_first_window_t6_ParamLimits

0x1f6d,	// (0x00059311) popup_call2_audio_first_window_t6

0x2203,	// (0x000595a7) popup_call2_audio_out_window_t6_ParamLimits

0x2203,	// (0x000595a7) popup_call2_audio_out_window_t6

0x7393,	// (0x0005e737) main_vitu_pane

0xbb3a,	// (0x00062ede) aid_size_cell_itu_ParamLimits

0xbb3a,	// (0x00062ede) aid_size_cell_itu

0x75df,	// (0x0005e983) bg_popup_window_pane_cp08_ParamLimits

0x75df,	// (0x0005e983) bg_popup_window_pane_cp08

0xbb48,	// (0x00062eec) field_vitu_entry_pane_ParamLimits

0xbb48,	// (0x00062eec) field_vitu_entry_pane

0xbb55,	// (0x00062ef9) grid_vitu_function_pane_ParamLimits

0xbb55,	// (0x00062ef9) grid_vitu_function_pane

0xbb61,	// (0x00062f05) grid_vitu_itu_pane_ParamLimits

0xbb61,	// (0x00062f05) grid_vitu_itu_pane

0xbb6d,	// (0x00062f11) cell_vitu_itu_pane_ParamLimits

0xbb6d,	// (0x00062f11) cell_vitu_itu_pane

0xbb82,	// (0x00062f26) cell_vitu_function_pane_ParamLimits

0xbb82,	// (0x00062f26) cell_vitu_function_pane

0xa642,	// (0x000619e6) bg_popup_sub_pane_cp08_ParamLimits

0xa642,	// (0x000619e6) bg_popup_sub_pane_cp08

0xbb94,	// (0x00062f38) field_vitu_entry_pane_t1_ParamLimits

0xbb94,	// (0x00062f38) field_vitu_entry_pane_t1

0x30e6,	// (0x0005a48a) field_vitu_entry_pane_t2_ParamLimits

0x30e6,	// (0x0005a48a) field_vitu_entry_pane_t2

0x0001,

0xf895,	// (0x00066c39) field_vitu_entry_pane_t_ParamLimits

0xf895,	// (0x00066c39) field_vitu_entry_pane_t

0x3103,	// (0x0005a4a7) bg_button_pane_cp05_ParamLimits

0x3103,	// (0x0005a4a7) bg_button_pane_cp05

0xbbad,	// (0x00062f51) cell_vitu_itu_pane_g1

0xbbc5,	// (0x00062f69) cell_vitu_itu_pane_t1_ParamLimits

0xbbc5,	// (0x00062f69) cell_vitu_itu_pane_t1

0xbbd7,	// (0x00062f7b) cell_vitu_itu_pane_t2_ParamLimits

0xbbd7,	// (0x00062f7b) cell_vitu_itu_pane_t2

0x0002,

0xf89a,	// (0x00066c3e) cell_vitu_itu_pane_t_ParamLimits

0xf89a,	// (0x00066c3e) cell_vitu_itu_pane_t

0x3111,	// (0x0005a4b5) bg_button_pane_cp07

0xbc0c,	// (0x00062fb0) cell_vitu_function_pane_g1

0x7f15,	// (0x0005f2b9) main_calc_pane_g1

0x73cd,	// (0x0005e771) aid_visual_content_pane

0x7393,	// (0x0005e737) main_vradio_pane

0xbc15,	// (0x00062fb9) main_vradio_pane_g1_ParamLimits

0xbc15,	// (0x00062fb9) main_vradio_pane_g1

0x311b,	// (0x0005a4bf) main_vradio_pane_g2_ParamLimits

0x311b,	// (0x0005a4bf) main_vradio_pane_g2

0x0001,

0xf8a1,	// (0x00066c45) main_vradio_pane_g_ParamLimits

0xf8a1,	// (0x00066c45) main_vradio_pane_g

0xbc23,	// (0x00062fc7) main_vradio_pane_t1_ParamLimits

0xbc23,	// (0x00062fc7) main_vradio_pane_t1

0xbc35,	// (0x00062fd9) main_vradio_pane_t2_ParamLimits

0xbc35,	// (0x00062fd9) main_vradio_pane_t2

0x3128,	// (0x0005a4cc) main_vradio_pane_t3_ParamLimits

0x3128,	// (0x0005a4cc) main_vradio_pane_t3

0x0002,

0xf8a6,	// (0x00066c4a) main_vradio_pane_t_ParamLimits

0xf8a6,	// (0x00066c4a) main_vradio_pane_t

0xbc47,	// (0x00062feb) vradio_rocker_control_pane_ParamLimits

0xbc47,	// (0x00062feb) vradio_rocker_control_pane

0xbc53,	// (0x00062ff7) vradio_station_info_pane_ParamLimits

0xbc53,	// (0x00062ff7) vradio_station_info_pane

0x313a,	// (0x0005a4de) vradio_frequency_info_pane_ParamLimits

0x313a,	// (0x0005a4de) vradio_frequency_info_pane

0x2b3a,	// (0x00059ede) vradio_station_info_pane_g1

0x3149,	// (0x0005a4ed) vradio_station_info_pane_t1_ParamLimits

0x3149,	// (0x0005a4ed) vradio_station_info_pane_t1

0x316b,	// (0x0005a50f) vradio_station_info_pane_t2_ParamLimits

0x316b,	// (0x0005a50f) vradio_station_info_pane_t2

0x0001,

0xf8ad,	// (0x00066c51) vradio_station_info_pane_t_ParamLimits

0xf8ad,	// (0x00066c51) vradio_station_info_pane_t

0x317d,	// (0x0005a521) vradio_tuning_pane

0x3185,	// (0x0005a529) vradio_rocker_control_pane_g1

0x318d,	// (0x0005a531) vradio_rocker_control_pane_g2

0x3195,	// (0x0005a539) vradio_rocker_control_pane_g3

0x319d,	// (0x0005a541) vradio_rocker_control_pane_g4

0x31a5,	// (0x0005a549) vradio_rocker_control_pane_g5

0x0004,

0xf8b2,	// (0x00066c56) vradio_rocker_control_pane_g

0xbc60,	// (0x00063004) vradio_frequency_info_pane_g1

0x31ad,	// (0x0005a551) vradio_frequency_info_pane_t1_ParamLimits

0x31ad,	// (0x0005a551) vradio_frequency_info_pane_t1

0xbc68,	// (0x0006300c) vradio_tuning_pane_g1

0xbc71,	// (0x00063015) vradio_tuning_pane_t1

0x740c,	// (0x0005e7b0) area_side_right_pane_ParamLimits

0x740c,	// (0x0005e7b0) area_side_right_pane

0x26be,	// (0x00059a62) status_small_pane_g1

0x26c6,	// (0x00059a6a) status_small_pane_g2

0x26cf,	// (0x00059a73) status_small_pane_g3

0x26d8,	// (0x00059a7c) status_small_pane_g4

0x0003,

0xf672,	// (0x00066a16) status_small_pane_g

0x26e1,	// (0x00059a85) status_small_pane_t1

0x7393,	// (0x0005e737) main_video3_pane

0x31c1,	// (0x0005a565) cams_zoom_vslider_pane

0x31c9,	// (0x0005a56d) image3_wide_pane_ParamLimits

0x31c9,	// (0x0005a56d) image3_wide_pane

0x31e3,	// (0x0005a587) image3_wide_small_pane

0x31ed,	// (0x0005a591) main_video3_pane_g1_ParamLimits

0x31ed,	// (0x0005a591) main_video3_pane_g1

0x3209,	// (0x0005a5ad) main_video3_pane_g2_ParamLimits

0x3209,	// (0x0005a5ad) main_video3_pane_g2

0x0001,

0xf8bd,	// (0x00066c61) main_video3_pane_g_ParamLimits

0xf8bd,	// (0x00066c61) main_video3_pane_g

0x3225,	// (0x0005a5c9) main_video3_pane_t1_ParamLimits

0x3225,	// (0x0005a5c9) main_video3_pane_t1

0x3250,	// (0x0005a5f4) main_video3_pane_t2_ParamLimits

0x3250,	// (0x0005a5f4) main_video3_pane_t2

0x327b,	// (0x0005a61f) main_video3_pane_t3_ParamLimits

0x327b,	// (0x0005a61f) main_video3_pane_t3

0x0002,

0xf8c2,	// (0x00066c66) main_video3_pane_t_ParamLimits

0xf8c2,	// (0x00066c66) main_video3_pane_t

0x32a6,	// (0x0005a64a) cams_zoom_vslider_pane_g1

0x32af,	// (0x0005a653) cams_zoom_vslider_pane_g2

0x0001,

0xf8c9,	// (0x00066c6d) cams_zoom_vslider_pane_g

0x32b7,	// (0x0005a65b) small_slider_vertical_pane

0x2b3a,	// (0x00059ede) small_slider_vertical_pane_g1

0x2b3a,	// (0x00059ede) small_slider_vertical_pane_g2

0x32bf,	// (0x0005a663) small_slider_vertical_pane_g3

0x0002,

0xf8ce,	// (0x00066c72) small_slider_vertical_pane_g

0x7393,	// (0x0005e737) main_hwr_training_pane

0x32c8,	// (0x0005a66c) hwr_training_instruct_pane_ParamLimits

0x32c8,	// (0x0005a66c) hwr_training_instruct_pane

0xbc80,	// (0x00063024) hwr_training_navi_pane_ParamLimits

0xbc80,	// (0x00063024) hwr_training_navi_pane

0xbc94,	// (0x00063038) hwr_training_write_pane_ParamLimits

0xbc94,	// (0x00063038) hwr_training_write_pane

0x7393,	// (0x0005e737) bg_frame_shadow_pane

0x32f7,	// (0x0005a69b) hwr_training_write_pane_g1

0x32ff,	// (0x0005a6a3) hwr_training_write_pane_g2

0x3307,	// (0x0005a6ab) hwr_training_write_pane_g3

0x330f,	// (0x0005a6b3) hwr_training_write_pane_g4

0x3317,	// (0x0005a6bb) hwr_training_write_pane_g5

0x331f,	// (0x0005a6c3) hwr_training_write_pane_g6

0x3327,	// (0x0005a6cb) hwr_training_write_pane_g7

0x0006,

0xf8d5,	// (0x00066c79) hwr_training_write_pane_g

0xbcc2,	// (0x00063066) hwr_training_navi_pane_g1_ParamLimits

0xbcc2,	// (0x00063066) hwr_training_navi_pane_g1

0xbcd4,	// (0x00063078) hwr_training_navi_pane_g2_ParamLimits

0xbcd4,	// (0x00063078) hwr_training_navi_pane_g2

0xbce6,	// (0x0006308a) hwr_training_navi_pane_g3_ParamLimits

0xbce6,	// (0x0006308a) hwr_training_navi_pane_g3

0xbcf6,	// (0x0006309a) hwr_training_navi_pane_g4_ParamLimits

0xbcf6,	// (0x0006309a) hwr_training_navi_pane_g4

0x0004,

0xf8e4,	// (0x00066c88) hwr_training_navi_pane_g_ParamLimits

0xf8e4,	// (0x00066c88) hwr_training_navi_pane_g

0xbd10,	// (0x000630b4) hwr_training_navi_pane_t1

0xbd1e,	// (0x000630c2) list_single_hwr_training_instruct_pane_ParamLimits

0xbd1e,	// (0x000630c2) list_single_hwr_training_instruct_pane

0x332f,	// (0x0005a6d3) list_single_hwr_training_instruct_pane_t1

0x2a7a,	// (0x00059e1e) bg_frame_shadow_pane_g1

0x333e,	// (0x0005a6e2) bg_frame_shadow_pane_g2

0x3346,	// (0x0005a6ea) bg_frame_shadow_pane_g3

0x334e,	// (0x0005a6f2) bg_frame_shadow_pane_g4

0x3356,	// (0x0005a6fa) bg_frame_shadow_pane_g5

0x335e,	// (0x0005a702) bg_frame_shadow_pane_g6

0x3366,	// (0x0005a70a) bg_frame_shadow_pane_g7

0x8288,	// (0x0005f62c) bg_frame_shadow_pane_g8

0x0007,

0xf8ef,	// (0x00066c93) bg_frame_shadow_pane_g

0x7393,	// (0x0005e737) main_video_tele_dialer_pane

0xbd36,	// (0x000630da) aid_size_cell_video_keypad_ParamLimits

0xbd36,	// (0x000630da) aid_size_cell_video_keypad

0xbd46,	// (0x000630ea) grid_video_dialer_keypad_pane_ParamLimits

0xbd46,	// (0x000630ea) grid_video_dialer_keypad_pane

0xbd76,	// (0x0006311a) video_down_pane_cp_ParamLimits

0xbd76,	// (0x0006311a) video_down_pane_cp

0xbd9e,	// (0x00063142) cell_video_dialer_keypad_pane_ParamLimits

0xbd9e,	// (0x00063142) cell_video_dialer_keypad_pane

0x336e,	// (0x0005a712) bg_button_pane_cp08_ParamLimits

0x336e,	// (0x0005a712) bg_button_pane_cp08

0xbdb3,	// (0x00063157) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbdb3,	// (0x00063157) cell_video_dialer_keypad_pane_g1

0xb5d9,	// (0x0006297d) mup3_rocker2_pane_ParamLimits

0xb5d9,	// (0x0006297d) mup3_rocker2_pane

0x2b3a,	// (0x00059ede) mup3_rocker2_pane_g1

0xa650,	// (0x000619f4) main_dialer2_pane

0x7393,	// (0x0005e737) main_mp4_pane

0xbdf2,	// (0x00063196) main_mp4_pane_g1_ParamLimits

0xbdf2,	// (0x00063196) main_mp4_pane_g1

0xbe00,	// (0x000631a4) main_mp4_pane_g2_ParamLimits

0xbe00,	// (0x000631a4) main_mp4_pane_g2

0xbe0e,	// (0x000631b2) main_mp4_pane_g3_ParamLimits

0xbe0e,	// (0x000631b2) main_mp4_pane_g3

0xbe43,	// (0x000631e7) main_mp4_pane_g4_ParamLimits

0xbe43,	// (0x000631e7) main_mp4_pane_g4

0xbe71,	// (0x00063215) main_mp4_pane_g5_ParamLimits

0xbe71,	// (0x00063215) main_mp4_pane_g5

0x0005,

0xf90f,	// (0x00066cb3) main_mp4_pane_g_ParamLimits

0xf90f,	// (0x00066cb3) main_mp4_pane_g

0xbecd,	// (0x00063271) main_mp4_pane_t1_ParamLimits

0xbecd,	// (0x00063271) main_mp4_pane_t1

0xbf25,	// (0x000632c9) main_mp4_pane_t2_ParamLimits

0xbf25,	// (0x000632c9) main_mp4_pane_t2

0x337a,	// (0x0005a71e) main_mp4_pane_t3_ParamLimits

0x337a,	// (0x0005a71e) main_mp4_pane_t3

0xbf77,	// (0x0006331b) main_mp4_pane_t4_ParamLimits

0xbf77,	// (0x0006331b) main_mp4_pane_t4

0x0003,

0xf91c,	// (0x00066cc0) main_mp4_pane_t_ParamLimits

0xf91c,	// (0x00066cc0) main_mp4_pane_t

0xbfb7,	// (0x0006335b) mp4_progress_pane_ParamLimits

0xbfb7,	// (0x0006335b) mp4_progress_pane

0xbffb,	// (0x0006339f) mp4_rocker_pane_ParamLimits

0xbffb,	// (0x0006339f) mp4_rocker_pane

0x33a8,	// (0x0005a74c) mp4_progress_pane_t1

0x33bf,	// (0x0005a763) mp4_progress_pane_t2

0x0001,

0xf925,	// (0x00066cc9) mp4_progress_pane_t

0x33d6,	// (0x0005a77a) mup_progress_pane_cp04

0x2b3a,	// (0x00059ede) mp4_rocker_pane_g1

0xc019,	// (0x000633bd) aid_cell_size_keypad2_ParamLimits

0xc019,	// (0x000633bd) aid_cell_size_keypad2

0xc029,	// (0x000633cd) dialer2_ne_pane_ParamLimits

0xc029,	// (0x000633cd) dialer2_ne_pane

0xc035,	// (0x000633d9) grid_dialer2_keypad_pane_ParamLimits

0xc035,	// (0x000633d9) grid_dialer2_keypad_pane

0x3c40,	// (0x0005afe4) bg_popup_call_pane_cp07_ParamLimits

0x3c40,	// (0x0005afe4) bg_popup_call_pane_cp07

0xc041,	// (0x000633e5) dialer2_ne_pane_t1_ParamLimits

0xc041,	// (0x000633e5) dialer2_ne_pane_t1

0xc066,	// (0x0006340a) cell_dialer2_keypad_pane_ParamLimits

0xc066,	// (0x0006340a) cell_dialer2_keypad_pane

0x33fe,	// (0x0005a7a2) bg_button_pane_pane_cp04_ParamLimits

0x33fe,	// (0x0005a7a2) bg_button_pane_pane_cp04

0xc07b,	// (0x0006341f) cell_dialer2_keypad_pane_g1_ParamLimits

0xc07b,	// (0x0006341f) cell_dialer2_keypad_pane_g1

0x8b79,	// (0x0005ff1d) aid_placing_vt_set_content_ParamLimits

0x8b79,	// (0x0005ff1d) aid_placing_vt_set_content

0x8b93,	// (0x0005ff37) aid_placing_vt_set_title_ParamLimits

0x8b93,	// (0x0005ff37) aid_placing_vt_set_title

0x7393,	// (0x0005e737) main_image3_pane

0xc0ef,	// (0x00063493) area_side_right_pane_cp01_ParamLimits

0xc0ef,	// (0x00063493) area_side_right_pane_cp01

0x4211,	// (0x0005b5b5) main_image3_pane_g1_ParamLimits

0x4211,	// (0x0005b5b5) main_image3_pane_g1

0xc11c,	// (0x000634c0) main_image3_pane_g2_ParamLimits

0xc11c,	// (0x000634c0) main_image3_pane_g2

0xc133,	// (0x000634d7) main_image3_pane_g3_ParamLimits

0xc133,	// (0x000634d7) main_image3_pane_g3

0xc14a,	// (0x000634ee) main_image3_pane_g4_ParamLimits

0xc14a,	// (0x000634ee) main_image3_pane_g4

0x0003,

0xf934,	// (0x00066cd8) main_image3_pane_g_ParamLimits

0xf934,	// (0x00066cd8) main_image3_pane_g

0xc161,	// (0x00063505) main_image3_pane_t1_ParamLimits

0xc161,	// (0x00063505) main_image3_pane_t1

0xc186,	// (0x0006352a) main_image3_pane_t2_ParamLimits

0xc186,	// (0x0006352a) main_image3_pane_t2

0xc1a5,	// (0x00063549) main_image3_pane_t3_ParamLimits

0xc1a5,	// (0x00063549) main_image3_pane_t3

0x0003,

0xf93d,	// (0x00066ce1) main_image3_pane_t_ParamLimits

0xf93d,	// (0x00066ce1) main_image3_pane_t

0x75df,	// (0x0005e983) grid_sctrl_middle_pane_cp01_ParamLimits

0x75df,	// (0x0005e983) grid_sctrl_middle_pane_cp01

0xc200,	// (0x000635a4) cell_sctrl_middle_pane_cp01_ParamLimits

0xc200,	// (0x000635a4) cell_sctrl_middle_pane_cp01

0xc211,	// (0x000635b5) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xc211,	// (0x000635b5) cell_sctrl_middle_pane_cp01_g1

0x7393,	// (0x0005e737) main_call4_pane

0xc21e,	// (0x000635c2) aid_size_button_call4_ParamLimits

0xc21e,	// (0x000635c2) aid_size_button_call4

0xc248,	// (0x000635ec) call4_windows_pane_ParamLimits

0xc248,	// (0x000635ec) call4_windows_pane

0xc25c,	// (0x00063600) grid_call4_button_pane_ParamLimits

0xc25c,	// (0x00063600) grid_call4_button_pane

0x3422,	// (0x0005a7c6) call4_windows_conf_pane

0xc276,	// (0x0006361a) popup_call4_audio_first_window_ParamLimits

0xc276,	// (0x0006361a) popup_call4_audio_first_window

0xc296,	// (0x0006363a) popup_call4_audio_second_window_ParamLimits

0xc296,	// (0x0006363a) popup_call4_audio_second_window

0x3455,	// (0x0005a7f9) popup_call4_audio_wait_window_ParamLimits

0x3455,	// (0x0005a7f9) popup_call4_audio_wait_window

0xc2a8,	// (0x0006364c) cell_call4_button_pane_ParamLimits

0xc2a8,	// (0x0006364c) cell_call4_button_pane

0x81ad,	// (0x0005f551) bg_button_pane_cp09_ParamLimits

0x81ad,	// (0x0005f551) bg_button_pane_cp09

0xc2cb,	// (0x0006366f) cell_call4_button_pane_g1_ParamLimits

0xc2cb,	// (0x0006366f) cell_call4_button_pane_g1

0xc2d8,	// (0x0006367c) cell_call4_button_pane_t1_ParamLimits

0xc2d8,	// (0x0006367c) cell_call4_button_pane_t1

0x349b,	// (0x0005a83f) popup_call4_audio_conf_window_ParamLimits

0x349b,	// (0x0005a83f) popup_call4_audio_conf_window

0xb60a,	// (0x000629ae) mup3_progress_pane_t1_ParamLimits

0xb620,	// (0x000629c4) mup3_progress_pane_t2_ParamLimits

0x2e58,	// (0x0005a1fc) mup3_progress_pane_t3_ParamLimits

0xf816,	// (0x00066bba) mup3_progress_pane_t_ParamLimits

0x2e6f,	// (0x0005a213) mup_progress_pane_cp03_ParamLimits

0xbb32,	// (0x00062ed6) mup3_control_keys_pane_g4_copy1

0xbfe5,	// (0x00063389) mp4_rocker2_pane_ParamLimits

0xbfe5,	// (0x00063389) mp4_rocker2_pane

0x34b7,	// (0x0005a85b) mp4_rocker2_pane_g1

0x34af,	// (0x0005a853) mp4_rocker2_pane_g2

0xc2ea,	// (0x0006368e) mp4_rocker2_pane_g3

0xc2f2,	// (0x00063696) mp4_rocker2_pane_g4

0xc2fa,	// (0x0006369e) mp4_rocker2_pane_g5

0x0004,

0xf946,	// (0x00066cea) mp4_rocker2_pane_g

0x7393,	// (0x0005e737) main_camera4_pane

0x7393,	// (0x0005e737) main_video4_pane

0xbd52,	// (0x000630f6) main_video_tele_dialer_pane_t1_ParamLimits

0xbd52,	// (0x000630f6) main_video_tele_dialer_pane_t1

0xbd64,	// (0x00063108) main_video_tele_dialer_pane_t2_ParamLimits

0xbd64,	// (0x00063108) main_video_tele_dialer_pane_t2

0x0001,

0xf900,	// (0x00066ca4) main_video_tele_dialer_pane_t_ParamLimits

0xf900,	// (0x00066ca4) main_video_tele_dialer_pane_t

0xc318,	// (0x000636bc) cam4_autofocus_pane_ParamLimits

0xc318,	// (0x000636bc) cam4_autofocus_pane

0xc324,	// (0x000636c8) cam4_image_uncrop_pane_ParamLimits

0xc324,	// (0x000636c8) cam4_image_uncrop_pane

0xc339,	// (0x000636dd) cam4_indicators_pane_ParamLimits

0xc339,	// (0x000636dd) cam4_indicators_pane

0xc353,	// (0x000636f7) main_camera4_pane_g1_ParamLimits

0xc353,	// (0x000636f7) main_camera4_pane_g1

0xc35f,	// (0x00063703) main_camera4_pane_g2_ParamLimits

0xc35f,	// (0x00063703) main_camera4_pane_g2

0xc36b,	// (0x0006370f) main_camera4_pane_g3_ParamLimits

0xc36b,	// (0x0006370f) main_camera4_pane_g3

0xc377,	// (0x0006371b) main_camera4_pane_g4_ParamLimits

0xc377,	// (0x0006371b) main_camera4_pane_g4

0xc383,	// (0x00063727) main_camera4_pane_g5_ParamLimits

0xc383,	// (0x00063727) main_camera4_pane_g5

0x0005,

0xf951,	// (0x00066cf5) main_camera4_pane_g_ParamLimits

0xf951,	// (0x00066cf5) main_camera4_pane_g

0xc39d,	// (0x00063741) main_camera4_pane_t1_ParamLimits

0xc39d,	// (0x00063741) main_camera4_pane_t1

0x2d69,	// (0x0005a10d) bg_tb_trans_pane_cp06

0xc3c9,	// (0x0006376d) cam4_indicators_pane_g1

0xc3d9,	// (0x0006377d) cam4_indicators_pane_g2

0x0002,

0xf963,	// (0x00066d07) cam4_indicators_pane_g

0xc3f9,	// (0x0006379d) cam4_indicators_pane_t1

0xc421,	// (0x000637c5) main_video4_pane_g1_ParamLimits

0xc421,	// (0x000637c5) main_video4_pane_g1

0xc42d,	// (0x000637d1) main_video4_pane_g2_ParamLimits

0xc42d,	// (0x000637d1) main_video4_pane_g2

0xc42d,	// (0x000637d1) main_video4_pane_g3_ParamLimits

0xc42d,	// (0x000637d1) main_video4_pane_g3

0xc439,	// (0x000637dd) main_video4_pane_g4_ParamLimits

0xc439,	// (0x000637dd) main_video4_pane_g4

0x0004,

0xf96a,	// (0x00066d0e) main_video4_pane_g_ParamLimits

0xf96a,	// (0x00066d0e) main_video4_pane_g

0xc459,	// (0x000637fd) vid4_indicators_pane_ParamLimits

0xc459,	// (0x000637fd) vid4_indicators_pane

0xc477,	// (0x0006381b) video4_image_uncrop_cif_pane_ParamLimits

0xc477,	// (0x0006381b) video4_image_uncrop_cif_pane

0xc484,	// (0x00063828) video4_image_uncrop_nhd_pane_ParamLimits

0xc484,	// (0x00063828) video4_image_uncrop_nhd_pane

0xc324,	// (0x000636c8) video4_image_uncrop_vga_pane_ParamLimits

0xc324,	// (0x000636c8) video4_image_uncrop_vga_pane

0xa642,	// (0x000619e6) bg_tb_trans_pane_cp07

0xc3c9,	// (0x0006376d) vid4_indicators_pane_g1

0xc491,	// (0x00063835) vid4_indicators_pane_g2

0xc4a1,	// (0x00063845) vid4_indicators_pane_g3

0x0004,

0xf975,	// (0x00066d19) vid4_indicators_pane_g

0xc4ce,	// (0x00063872) vid4_indicators_pane_t1

0xc4e8,	// (0x0006388c) cam4_autofocus_pane_g1

0xc4f0,	// (0x00063894) cam4_autofocus_pane_g2

0xc4f8,	// (0x0006389c) cam4_autofocus_pane_g3

0x0002,

0xf980,	// (0x00066d24) cam4_autofocus_pane_g

0xc500,	// (0x000638a4) cam4_autofocus_pane_g3_copy1

0xbd82,	// (0x00063126) video_down_pane_cp_t1

0xbd90,	// (0x00063134) video_down_pane_cp_t2

0x0001,

0xf905,	// (0x00066ca9) video_down_pane_cp_t

0x75df,	// (0x0005e983) popup_vitu2_window_ParamLimits

0x75df,	// (0x0005e983) popup_vitu2_window

0xc508,	// (0x000638ac) aid_size_cell2_itu2_ParamLimits

0xc508,	// (0x000638ac) aid_size_cell2_itu2

0xc52a,	// (0x000638ce) aid_size_cell_itu2_ParamLimits

0xc52a,	// (0x000638ce) aid_size_cell_itu2

0x3c40,	// (0x0005afe4) bg_popup_window_pane_cp09_ParamLimits

0x3c40,	// (0x0005afe4) bg_popup_window_pane_cp09

0xc568,	// (0x0006390c) field_vitu2_entry_pane_ParamLimits

0xc568,	// (0x0006390c) field_vitu2_entry_pane

0xc57e,	// (0x00063922) grid_vitu2_function_pane_ParamLimits

0xc57e,	// (0x00063922) grid_vitu2_function_pane

0xc5b0,	// (0x00063954) grid_vitu2_itu_pane_ParamLimits

0xc5b0,	// (0x00063954) grid_vitu2_itu_pane

0xc606,	// (0x000639aa) cell_vitu2_itu_pane_ParamLimits

0xc606,	// (0x000639aa) cell_vitu2_itu_pane

0xc61b,	// (0x000639bf) cell_vitu2_function_pane_ParamLimits

0xc61b,	// (0x000639bf) cell_vitu2_function_pane

0x34bf,	// (0x0005a863) bg_popup_call_pane_cp08_ParamLimits

0x34bf,	// (0x0005a863) bg_popup_call_pane_cp08

0x34d8,	// (0x0005a87c) field_vitu2_entry_pane_g1

0x34e4,	// (0x0005a888) field_vitu2_entry_pane_g2

0x0002,

0xf987,	// (0x00066d2b) field_vitu2_entry_pane_g

0x6768,	// (0x0005db0c) field_vitu2_entry_pane_t1_ParamLimits

0x6768,	// (0x0005db0c) field_vitu2_entry_pane_t1

0x6783,	// (0x0005db27) field_vitu2_entry_pane_t2_ParamLimits

0x6783,	// (0x0005db27) field_vitu2_entry_pane_t2

0x0001,

0xf98e,	// (0x00066d32) field_vitu2_entry_pane_t_ParamLimits

0xf98e,	// (0x00066d32) field_vitu2_entry_pane_t

0xc65a,	// (0x000639fe) bg_button_pane_cp010_ParamLimits

0xc65a,	// (0x000639fe) bg_button_pane_cp010

0xc668,	// (0x00063a0c) cell_vitu2_itu_pane_g1

0xc686,	// (0x00063a2a) cell_vitu2_itu_pane_t1_ParamLimits

0xc686,	// (0x00063a2a) cell_vitu2_itu_pane_t1

0x67a0,	// (0x0005db44) cell_vitu2_itu_pane_t2_ParamLimits

0x67a0,	// (0x0005db44) cell_vitu2_itu_pane_t2

0x0002,

0xf998,	// (0x00066d3c) cell_vitu2_itu_pane_t_ParamLimits

0xf998,	// (0x00066d3c) cell_vitu2_itu_pane_t

0xa642,	// (0x000619e6) bg_button_pane_cp011

0xc6d8,	// (0x00063a7c) cell_vitu2_function_pane_g1

0x7393,	// (0x0005e737) main_myfav_hc_pane

0xc1e5,	// (0x00063589) popup_image3_note_pane_ParamLimits

0xc1e5,	// (0x00063589) popup_image3_note_pane

0xc1f1,	// (0x00063595) popup_image3_tool_bar_pane_ParamLimits

0xc1f1,	// (0x00063595) popup_image3_tool_bar_pane

0x680e,	// (0x0005dbb2) cell_vitu2_itu_pane_t3_ParamLimits

0x680e,	// (0x0005dbb2) cell_vitu2_itu_pane_t3

0x7393,	// (0x0005e737) bg_popup_trans_pane

0x353f,	// (0x0005a8e3) grid_image3_tool_bar_pane

0x3549,	// (0x0005a8ed) bg_popup_trans_pane_g1

0x0a78,	// (0x00057e1c) bg_popup_trans_pane_g2

0x3551,	// (0x0005a8f5) bg_popup_trans_pane_g3

0x3559,	// (0x0005a8fd) bg_popup_trans_pane_g4

0x3561,	// (0x0005a905) bg_popup_trans_pane_g5

0x3569,	// (0x0005a90d) bg_popup_trans_pane_g6

0x3571,	// (0x0005a915) bg_popup_trans_pane_g7

0x3579,	// (0x0005a91d) bg_popup_trans_pane_g8

0x0a58,	// (0x00057dfc) bg_popup_trans_pane_g9

0x0008,

0xf99f,	// (0x00066d43) bg_popup_trans_pane_g

0xc6ec,	// (0x00063a90) cell_image3_tool_bar_pane_ParamLimits

0xc6ec,	// (0x00063a90) cell_image3_tool_bar_pane

0x2b3a,	// (0x00059ede) cell_image3_tool_bar_pane_g1

0x7393,	// (0x0005e737) bg_popup_trans_pane_cp1

0x3581,	// (0x0005a925) popup_image3_note_pane_t1

0x358f,	// (0x0005a933) popup_image3_note_pane_t2

0x359d,	// (0x0005a941) popup_image3_note_pane_t3

0x0002,

0xf9b2,	// (0x00066d56) popup_image3_note_pane_t

0x35ab,	// (0x0005a94f) popup_image3_note_pane_t3_copy1

0xc700,	// (0x00063aa4) bg_myfav_hc_instruction_pane_ParamLimits

0xc700,	// (0x00063aa4) bg_myfav_hc_instruction_pane

0xc712,	// (0x00063ab6) cell_myfav_contact_pane_ParamLimits

0xc712,	// (0x00063ab6) cell_myfav_contact_pane

0xc72c,	// (0x00063ad0) cell_myfav_contact_pane_cp1_ParamLimits

0xc72c,	// (0x00063ad0) cell_myfav_contact_pane_cp1

0xc742,	// (0x00063ae6) cell_myfav_contact_pane_cp2_ParamLimits

0xc742,	// (0x00063ae6) cell_myfav_contact_pane_cp2

0xc758,	// (0x00063afc) cell_myfav_contact_pane_cp3_ParamLimits

0xc758,	// (0x00063afc) cell_myfav_contact_pane_cp3

0xc76d,	// (0x00063b11) cell_myfav_contact_pane_cp4_ParamLimits

0xc76d,	// (0x00063b11) cell_myfav_contact_pane_cp4

0xc781,	// (0x00063b25) cell_myfav_contact_pane_cp5_ParamLimits

0xc781,	// (0x00063b25) cell_myfav_contact_pane_cp5

0xc795,	// (0x00063b39) cell_myfav_contact_pane_cp6_ParamLimits

0xc795,	// (0x00063b39) cell_myfav_contact_pane_cp6

0xc7a9,	// (0x00063b4d) cell_myfav_contact_pane_cp7_ParamLimits

0xc7a9,	// (0x00063b4d) cell_myfav_contact_pane_cp7

0x35b9,	// (0x0005a95d) listscroll_gen_pane_cp05

0xc7c1,	// (0x00063b65) main_myfav_hc_pane_g1_ParamLimits

0xc7c1,	// (0x00063b65) main_myfav_hc_pane_g1

0xc7d7,	// (0x00063b7b) main_myfav_hc_pane_g2_ParamLimits

0xc7d7,	// (0x00063b7b) main_myfav_hc_pane_g2

0x0002,

0xf9b9,	// (0x00066d5d) main_myfav_hc_pane_g_ParamLimits

0xf9b9,	// (0x00066d5d) main_myfav_hc_pane_g

0xc801,	// (0x00063ba5) main_myfav_hc_pane_t1_ParamLimits

0xc801,	// (0x00063ba5) main_myfav_hc_pane_t1

0x35c2,	// (0x0005a966) main_myfav_hc_pane_t2_ParamLimits

0x35c2,	// (0x0005a966) main_myfav_hc_pane_t2

0x35d4,	// (0x0005a978) main_myfav_hc_pane_t3_ParamLimits

0x35d4,	// (0x0005a978) main_myfav_hc_pane_t3

0xc816,	// (0x00063bba) main_myfav_hc_pane_t4_ParamLimits

0xc816,	// (0x00063bba) main_myfav_hc_pane_t4

0x0004,

0xf9c0,	// (0x00066d64) main_myfav_hc_pane_t_ParamLimits

0xf9c0,	// (0x00066d64) main_myfav_hc_pane_t

0x2b3a,	// (0x00059ede) bg_myfav_hc_instruction_pane_g1

0x35e6,	// (0x0005a98a) cell_myfav_contact_pane_g1_ParamLimits

0x35e6,	// (0x0005a98a) cell_myfav_contact_pane_g1

0x35e6,	// (0x0005a98a) cell_myfav_contact_pane_g2_ParamLimits

0x35e6,	// (0x0005a98a) cell_myfav_contact_pane_g2

0x35f2,	// (0x0005a996) cell_myfav_contact_pane_g3_ParamLimits

0x35f2,	// (0x0005a996) cell_myfav_contact_pane_g3

0x2e42,	// (0x0005a1e6) cell_myfav_contact_pane_g4_ParamLimits

0x2e42,	// (0x0005a1e6) cell_myfav_contact_pane_g4

0x35ff,	// (0x0005a9a3) cell_myfav_contact_pane_g5_ParamLimits

0x35ff,	// (0x0005a9a3) cell_myfav_contact_pane_g5

0x0004,

0xf9cb,	// (0x00066d6f) cell_myfav_contact_pane_g_ParamLimits

0xf9cb,	// (0x00066d6f) cell_myfav_contact_pane_g

0xc7ed,	// (0x00063b91) main_myfav_hc_pane_g3_ParamLimits

0xc7ed,	// (0x00063b91) main_myfav_hc_pane_g3

0x752d,	// (0x0005e8d1) popup_adpt_find_window

0xc83a,	// (0x00063bde) afind_page_pane_ParamLimits

0xc83a,	// (0x00063bde) afind_page_pane

0xc847,	// (0x00063beb) aid_size_cell_afind_ParamLimits

0xc847,	// (0x00063beb) aid_size_cell_afind

0xc861,	// (0x00063c05) bg_popup_sub_pane_cp09_ParamLimits

0xc861,	// (0x00063c05) bg_popup_sub_pane_cp09

0xc86e,	// (0x00063c12) find_pane_cp01_ParamLimits

0xc86e,	// (0x00063c12) find_pane_cp01

0x360b,	// (0x0005a9af) grid_afind_control_pane_ParamLimits

0x360b,	// (0x0005a9af) grid_afind_control_pane

0xc87b,	// (0x00063c1f) grid_afind_pane_ParamLimits

0xc87b,	// (0x00063c1f) grid_afind_pane

0xc891,	// (0x00063c35) cell_afind_pane_ParamLimits

0xc891,	// (0x00063c35) cell_afind_pane

0x2b3a,	// (0x00059ede) afind_page_pane_g1

0xc8c7,	// (0x00063c6b) afind_page_pane_g2

0xc8d0,	// (0x00063c74) afind_page_pane_g3

0x0002,

0xf9d6,	// (0x00066d7a) afind_page_pane_g

0xc8d9,	// (0x00063c7d) afind_page_pane_t1

0x361f,	// (0x0005a9c3) cell_afind_grid_control_pane_ParamLimits

0x361f,	// (0x0005a9c3) cell_afind_grid_control_pane

0x33fe,	// (0x0005a7a2) bg_button_pane_cp69_ParamLimits

0x33fe,	// (0x0005a7a2) bg_button_pane_cp69

0xc8f9,	// (0x00063c9d) cell_afind_pane_g1_ParamLimits

0xc8f9,	// (0x00063c9d) cell_afind_pane_g1

0xc906,	// (0x00063caa) cell_afind_pane_t1_ParamLimits

0xc906,	// (0x00063caa) cell_afind_pane_t1

0x8b14,	// (0x0005feb8) bg_button_pane_cp72

0x362e,	// (0x0005a9d2) cell_afind_grid_control_pane_g1

0xa27a,	// (0x0006161e) aid_image_placing_area_ParamLimits

0xa27a,	// (0x0006161e) aid_image_placing_area

0x30ce,	// (0x0005a472) field_vitu_entry_pane_g1_ParamLimits

0x30ce,	// (0x0005a472) field_vitu_entry_pane_g1

0x30da,	// (0x0005a47e) field_vitu_entry_pane_g2_ParamLimits

0x30da,	// (0x0005a47e) field_vitu_entry_pane_g2

0x0001,

0xf890,	// (0x00066c34) field_vitu_entry_pane_g_ParamLimits

0xf890,	// (0x00066c34) field_vitu_entry_pane_g

0xbbad,	// (0x00062f51) cell_vitu_itu_pane_g1_ParamLimits

0xbbef,	// (0x00062f93) cell_vitu_itu_pane_t3_ParamLimits

0xbbef,	// (0x00062f93) cell_vitu_itu_pane_t3

0x33a8,	// (0x0005a74c) mp4_progress_pane_t1_ParamLimits

0x33bf,	// (0x0005a763) mp4_progress_pane_t2_ParamLimits

0xf925,	// (0x00066cc9) mp4_progress_pane_t_ParamLimits

0x33d6,	// (0x0005a77a) mup_progress_pane_cp04_ParamLimits

0xc828,	// (0x00063bcc) main_myfav_hc_pane_t5_ParamLimits

0xc828,	// (0x00063bcc) main_myfav_hc_pane_t5

0x6453,	// (0x0005d7f7) aid_zoom_text_primary

0x752d,	// (0x0005e8d1) popup_adpt_find_window_ParamLimits

0xa642,	// (0x000619e6) main_cam_set_pane

0xc347,	// (0x000636eb) cam4_zoom_pane_ParamLimits

0xc347,	// (0x000636eb) cam4_zoom_pane

0xc918,	// (0x00063cbc) main_cam_set_pane_g1_ParamLimits

0xc918,	// (0x00063cbc) main_cam_set_pane_g1

0xc926,	// (0x00063cca) main_cam_set_pane_g2_ParamLimits

0xc926,	// (0x00063cca) main_cam_set_pane_g2

0x0001,

0xf9dd,	// (0x00066d81) main_cam_set_pane_g_ParamLimits

0xf9dd,	// (0x00066d81) main_cam_set_pane_g

0xc932,	// (0x00063cd6) main_cam_set_pane_t1_ParamLimits

0xc932,	// (0x00063cd6) main_cam_set_pane_t1

0xc944,	// (0x00063ce8) main_cset_listscroll_pane_ParamLimits

0xc944,	// (0x00063ce8) main_cset_listscroll_pane

0xc96d,	// (0x00063d11) main_cset_slider_pane_ParamLimits

0xc96d,	// (0x00063d11) main_cset_slider_pane

0x363f,	// (0x0005a9e3) main_cset_list_pane_ParamLimits

0x363f,	// (0x0005a9e3) main_cset_list_pane

0x364f,	// (0x0005a9f3) scroll_pane_cp028

0xc98c,	// (0x00063d30) aid_area_touch_slider

0xc9a8,	// (0x00063d4c) cset_slider_pane

0xc9d2,	// (0x00063d76) main_cset_slider_pane_g1

0xc9e7,	// (0x00063d8b) main_cset_slider_pane_g2

0x0011,

0xf9e2,	// (0x00066d86) main_cset_slider_pane_g

0x3688,	// (0x0005aa2c) main_cset_slider_pane_t1

0xcaa3,	// (0x00063e47) main_cset_slider_pane_t2

0xcabd,	// (0x00063e61) main_cset_slider_pane_t3

0xcad7,	// (0x00063e7b) main_cset_slider_pane_t4

0xcaf1,	// (0x00063e95) main_cset_slider_pane_t5

0xcb0b,	// (0x00063eaf) main_cset_slider_pane_t6

0xcb20,	// (0x00063ec4) main_cset_slider_pane_t7

0x000e,

0xfa07,	// (0x00066dab) main_cset_slider_pane_t

0xcc24,	// (0x00063fc8) cset_list_set_pane_ParamLimits

0xcc24,	// (0x00063fc8) cset_list_set_pane

0xcc34,	// (0x00063fd8) aid_position_infowindow_above

0xcc3c,	// (0x00063fe0) aid_position_infowindow_below

0xcc44,	// (0x00063fe8) cset_list_set_pane_g1_ParamLimits

0xcc44,	// (0x00063fe8) cset_list_set_pane_g1

0x685b,	// (0x0005dbff) cset_list_set_pane_g3_ParamLimits

0x685b,	// (0x0005dbff) cset_list_set_pane_g3

0x0001,

0xfa26,	// (0x00066dca) cset_list_set_pane_g_ParamLimits

0xfa26,	// (0x00066dca) cset_list_set_pane_g

0x686a,	// (0x0005dc0e) cset_list_set_pane_t1_ParamLimits

0x686a,	// (0x0005dc0e) cset_list_set_pane_t1

0xa642,	// (0x000619e6) list_highlight_pane_cp021_ParamLimits

0xa642,	// (0x000619e6) list_highlight_pane_cp021

0x13cc,	// (0x00058770) cset_slider_pane_g1

0x13de,	// (0x00058782) cset_slider_pane_g2

0x13d5,	// (0x00058779) cset_slider_pane_g3

0x0002,

0xfa2b,	// (0x00066dcf) cset_slider_pane_g

0xcc50,	// (0x00063ff4) aid_area_touch_cam4_zoom

0xcc58,	// (0x00063ffc) cam4_zoom_cont_pane

0xcc60,	// (0x00064004) cam4_zoom_pane_g1

0xcc68,	// (0x0006400c) cam4_zoom_pane_g2

0xcc70,	// (0x00064014) cam4_zoom_pane_g3

0x0002,

0xfa32,	// (0x00066dd6) cam4_zoom_pane_g

0x3fbd,	// (0x0005b361) cam4_zoom_cont_pane_g1

0x3fc6,	// (0x0005b36a) cam4_zoom_cont_pane_g2

0x3fcf,	// (0x0005b373) cam4_zoom_cont_pane_g3

0x0002,

0xfa39,	// (0x00066ddd) cam4_zoom_cont_pane_g

0xc238,	// (0x000635dc) call4_image_pane_ParamLimits

0xc238,	// (0x000635dc) call4_image_pane

0x3422,	// (0x0005a7c6) call4_windows_conf_pane_ParamLimits

0x3435,	// (0x0005a7d9) popup_call4_audio_in_window_ParamLimits

0x3435,	// (0x0005a7d9) popup_call4_audio_in_window

0x7393,	// (0x0005e737) bg_popup_call2_act_pane_cp02

0x3493,	// (0x0005a837) call4_list_conf_pane

0x2b3a,	// (0x00059ede) call4_image_pane_g1

0x2b3a,	// (0x00059ede) call4_image_pane_g2

0x0001,

0xf756,	// (0x00066afa) call4_image_pane_g

0x3749,	// (0x0005aaed) list_single_graphic_popup_conf4_pane_ParamLimits

0x3749,	// (0x0005aaed) list_single_graphic_popup_conf4_pane

0x7393,	// (0x0005e737) list_highlight_pane_cp022

0x375c,	// (0x0005ab00) list_single_graphic_popup_conf4_pane_g1

0x1023,	// (0x000583c7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa40,	// (0x00066de4) list_single_graphic_popup_conf4_pane_g

0x3764,	// (0x0005ab08) list_single_graphic_popup_conf4_pane_t1

0x8c8b,	// (0x0006002f) popup_vtel_slider_window_ParamLimits

0x8c8b,	// (0x0006002f) popup_vtel_slider_window

0x33ec,	// (0x0005a790) dialer2_ne_pane_t2_ParamLimits

0x33ec,	// (0x0005a790) dialer2_ne_pane_t2

0x0001,

0xf92a,	// (0x00066cce) dialer2_ne_pane_t_ParamLimits

0xf92a,	// (0x00066cce) dialer2_ne_pane_t

0xa642,	// (0x000619e6) bg_popup_sub_pane_cp010_ParamLimits

0xa642,	// (0x000619e6) bg_popup_sub_pane_cp010

0xcc78,	// (0x0006401c) popup_vtel_slider_window_g1_ParamLimits

0xcc78,	// (0x0006401c) popup_vtel_slider_window_g1

0xcc84,	// (0x00064028) popup_vtel_slider_window_g2_ParamLimits

0xcc84,	// (0x00064028) popup_vtel_slider_window_g2

0x0003,

0xfa45,	// (0x00066de9) popup_vtel_slider_window_g_ParamLimits

0xfa45,	// (0x00066de9) popup_vtel_slider_window_g

0xccca,	// (0x0006406e) vtel_slider_pane_ParamLimits

0xccca,	// (0x0006406e) vtel_slider_pane

0xccd9,	// (0x0006407d) vtel_slider_pane_g1_ParamLimits

0xccd9,	// (0x0006407d) vtel_slider_pane_g1

0xcce6,	// (0x0006408a) vtel_slider_pane_g2_ParamLimits

0xcce6,	// (0x0006408a) vtel_slider_pane_g2

0xccf3,	// (0x00064097) vtel_slider_pane_g3_ParamLimits

0xccf3,	// (0x00064097) vtel_slider_pane_g3

0xccd9,	// (0x0006407d) vtel_slider_pane_g4_ParamLimits

0xccd9,	// (0x0006407d) vtel_slider_pane_g4

0xcd00,	// (0x000640a4) vtel_slider_pane_g5_ParamLimits

0xcd00,	// (0x000640a4) vtel_slider_pane_g5

0x0004,

0xfa4e,	// (0x00066df2) vtel_slider_pane_g_ParamLimits

0xfa4e,	// (0x00066df2) vtel_slider_pane_g

0x7393,	// (0x0005e737) main_gallery2_pane

0xc550,	// (0x000638f4) aid_size_row_itut2_dropdow_list_ParamLimits

0xc550,	// (0x000638f4) aid_size_row_itut2_dropdow_list

0xc596,	// (0x0006393a) grid_vitu2_function_top_pane_ParamLimits

0xc596,	// (0x0006393a) grid_vitu2_function_top_pane

0xc5d0,	// (0x00063974) popup_vitu2_dropdown_list_window_ParamLimits

0xc5d0,	// (0x00063974) popup_vitu2_dropdown_list_window

0xc5ea,	// (0x0006398e) popup_vitu2_match_list_window

0xcd0d,	// (0x000640b1) cell_vitu2_function_top_pane_ParamLimits

0xcd0d,	// (0x000640b1) cell_vitu2_function_top_pane

0xcd2d,	// (0x000640d1) cell_vitu2_function_top_pane_cp01_ParamLimits

0xcd2d,	// (0x000640d1) cell_vitu2_function_top_pane_cp01

0xcd4d,	// (0x000640f1) cell_vitu2_function_top_wide_pane_ParamLimits

0xcd4d,	// (0x000640f1) cell_vitu2_function_top_wide_pane

0xa642,	// (0x000619e6) bg_button_pane_cp012

0xcd6b,	// (0x0006410f) cell_vitu2_function_top_pane_g1

0xcd7a,	// (0x0006411e) bg_button_pane_cp013_ParamLimits

0xcd7a,	// (0x0006411e) bg_button_pane_cp013

0xcd96,	// (0x0006413a) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcd96,	// (0x0006413a) cell_vitu2_function_top_wide_pane_g1

0x75df,	// (0x0005e983) bg_popup_sub_pane_cp20

0xcdae,	// (0x00064152) list_vitu2_match_list_pane

0x3549,	// (0x0005a8ed) bg_popup_sub_pane_cp20_g1

0x3551,	// (0x0005a8f5) bg_popup_sub_pane_cp20_g2

0x0a78,	// (0x00057e1c) bg_popup_sub_pane_cp20_g3

0x3559,	// (0x0005a8fd) bg_popup_sub_pane_cp20_g4

0x0a58,	// (0x00057dfc) bg_popup_sub_pane_cp20_g5

0x3780,	// (0x0005ab24) bg_popup_sub_pane_cp20_g6

0x3569,	// (0x0005a90d) bg_popup_sub_pane_cp20_g7

0x3571,	// (0x0005a915) bg_popup_sub_pane_cp20_g8

0x3579,	// (0x0005a91d) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa59,	// (0x00066dfd) bg_popup_sub_pane_cp20_g

0xcdc6,	// (0x0006416a) list_vitu2_match_list_item_pane_ParamLimits

0xcdc6,	// (0x0006416a) list_vitu2_match_list_item_pane

0xcdd8,	// (0x0006417c) list_vitu2_match_list_item_pane_t1

0x7393,	// (0x0005e737) bg_popup_sub_pane_cp21

0x0f61,	// (0x00058305) grid_vitu2_dropdown_list_pane

0xcde6,	// (0x0006418a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xcde6,	// (0x0006418a) cell_vitu2_dropdown_list_char_pane

0xce07,	// (0x000641ab) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xce07,	// (0x000641ab) cell_vitu2_dropdown_list_ctrl_pane

0x379a,	// (0x0005ab3e) cell_vitu2_dropdown_list_char_pane_g1

0x3791,	// (0x0005ab35) cell_vitu2_dropdown_list_char_pane_g2

0x3788,	// (0x0005ab2c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa76,	// (0x00066e1a) cell_vitu2_dropdown_list_char_pane_g

0xce33,	// (0x000641d7) cell_vitu2_dropdown_list_char_pane_t1

0xce41,	// (0x000641e5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xce41,	// (0x000641e5) cell_vitu2_dropdown_list_ctrl_pane_g1

0xce51,	// (0x000641f5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xce51,	// (0x000641f5) cell_vitu2_dropdown_list_ctrl_pane_g2

0xce62,	// (0x00064206) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xce62,	// (0x00064206) cell_vitu2_dropdown_list_ctrl_pane_g3

0xce72,	// (0x00064216) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xce72,	// (0x00064216) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2d69,	// (0x0005a10d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2d69,	// (0x0005a10d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa7d,	// (0x00066e21) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa7d,	// (0x00066e21) cell_vitu2_dropdown_list_ctrl_pane_g

0xce8b,	// (0x0006422f) aid_size_cell_gallery2_ParamLimits

0xce8b,	// (0x0006422f) aid_size_cell_gallery2

0xce99,	// (0x0006423d) grid_gallery2_pane_ParamLimits

0xce99,	// (0x0006423d) grid_gallery2_pane

0xcea6,	// (0x0006424a) scroll_pane_cp029_ParamLimits

0xcea6,	// (0x0006424a) scroll_pane_cp029

0xceb2,	// (0x00064256) cell_gallery2_pane_ParamLimits

0xceb2,	// (0x00064256) cell_gallery2_pane

0x37a3,	// (0x0005ab47) cell_gallery2_pane_g2

0xcede,	// (0x00064282) cell_gallery2_pane_g3

0x37ad,	// (0x0005ab51) cell_gallery2_pane_g4

0x37b5,	// (0x0005ab59) cell_gallery2_pane_g5

0x1288,	// (0x0005862c) grid_highlight_pane_cp10

0xc5ea,	// (0x0006398e) popup_vitu2_match_list_window_ParamLimits

0xc5fa,	// (0x0006399e) popup_vitu2_query_window_ParamLimits

0xc5fa,	// (0x0006399e) popup_vitu2_query_window

0x7393,	// (0x0005e737) bg_vitu2_candi_button_pane

0x379a,	// (0x0005ab3e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x3791,	// (0x0005ab35) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x3788,	// (0x0005ab2c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x68b9,	// (0x0005dc5d) bg_button_pane_cp015

0xcee6,	// (0x0006428a) bg_button_pane_cp016

0xcef0,	// (0x00064294) bg_button_pane_cp017

0xa642,	// (0x000619e6) bg_popup_sub_pane_cp22

0x37bd,	// (0x0005ab61) popup_vitu2_query_window_g1

0x68ce,	// (0x0005dc72) popup_vitu2_query_window_g2

0x0001,

0xfa88,	// (0x00066e2c) popup_vitu2_query_window_g

0x68da,	// (0x0005dc7e) popup_vitu2_query_window_t1_ParamLimits

0x68da,	// (0x0005dc7e) popup_vitu2_query_window_t1

0x6902,	// (0x0005dca6) popup_vitu2_query_window_t2_ParamLimits

0x6902,	// (0x0005dca6) popup_vitu2_query_window_t2

0x6914,	// (0x0005dcb8) popup_vitu2_query_window_t3_ParamLimits

0x6914,	// (0x0005dcb8) popup_vitu2_query_window_t3

0xcf0b,	// (0x000642af) popup_vitu2_query_window_t4_ParamLimits

0xcf0b,	// (0x000642af) popup_vitu2_query_window_t4

0xcf1d,	// (0x000642c1) popup_vitu2_query_window_t5_ParamLimits

0xcf1d,	// (0x000642c1) popup_vitu2_query_window_t5

0x0004,

0xfa8d,	// (0x00066e31) popup_vitu2_query_window_t_ParamLimits

0xfa8d,	// (0x00066e31) popup_vitu2_query_window_t

0x3637,	// (0x0005a9db) main_cset_text_pane

0xc98c,	// (0x00063d30) aid_area_touch_slider_ParamLimits

0xc9a8,	// (0x00063d4c) cset_slider_pane_ParamLimits

0xc9d2,	// (0x00063d76) main_cset_slider_pane_g1_ParamLimits

0xc9e7,	// (0x00063d8b) main_cset_slider_pane_g2_ParamLimits

0x3658,	// (0x0005a9fc) main_cset_slider_pane_g3_ParamLimits

0x3658,	// (0x0005a9fc) main_cset_slider_pane_g3

0xc9fc,	// (0x00063da0) main_cset_slider_pane_g4_ParamLimits

0xc9fc,	// (0x00063da0) main_cset_slider_pane_g4

0xca0b,	// (0x00063daf) main_cset_slider_pane_g5_ParamLimits

0xca0b,	// (0x00063daf) main_cset_slider_pane_g5

0xca17,	// (0x00063dbb) main_cset_slider_pane_g6_ParamLimits

0xca17,	// (0x00063dbb) main_cset_slider_pane_g6

0xf9e2,	// (0x00066d86) main_cset_slider_pane_g_ParamLimits

0x3688,	// (0x0005aa2c) main_cset_slider_pane_t1_ParamLimits

0xcaa3,	// (0x00063e47) main_cset_slider_pane_t2_ParamLimits

0xcabd,	// (0x00063e61) main_cset_slider_pane_t3_ParamLimits

0xcad7,	// (0x00063e7b) main_cset_slider_pane_t4_ParamLimits

0xcaf1,	// (0x00063e95) main_cset_slider_pane_t5_ParamLimits

0xcb0b,	// (0x00063eaf) main_cset_slider_pane_t6_ParamLimits

0xcb20,	// (0x00063ec4) main_cset_slider_pane_t7_ParamLimits

0xcb4a,	// (0x00063eee) main_cset_slider_pane_t8_ParamLimits

0xcb4a,	// (0x00063eee) main_cset_slider_pane_t8

0xcb72,	// (0x00063f16) main_cset_slider_pane_t9_ParamLimits

0xcb72,	// (0x00063f16) main_cset_slider_pane_t9

0xcb9a,	// (0x00063f3e) main_cset_slider_pane_t10_ParamLimits

0xcb9a,	// (0x00063f3e) main_cset_slider_pane_t10

0xcbc2,	// (0x00063f66) main_cset_slider_pane_t11_ParamLimits

0xcbc2,	// (0x00063f66) main_cset_slider_pane_t11

0xcbea,	// (0x00063f8e) main_cset_slider_pane_t12_ParamLimits

0xcbea,	// (0x00063f8e) main_cset_slider_pane_t12

0xcc07,	// (0x00063fab) main_cset_slider_pane_t13_ParamLimits

0xcc07,	// (0x00063fab) main_cset_slider_pane_t13

0xfa07,	// (0x00066dab) main_cset_slider_pane_t_ParamLimits

0x7393,	// (0x0005e737) bg_popup_sub_pane_cp011

0x37c9,	// (0x0005ab6d) main_cset_text_pane_g1

0x37d1,	// (0x0005ab75) main_cset_text_pane_t1

0x37df,	// (0x0005ab83) main_cset_text_pane_t2

0x37ed,	// (0x0005ab91) main_cset_text_pane_t3

0x37fb,	// (0x0005ab9f) main_cset_text_pane_t4

0x3809,	// (0x0005abad) main_cset_text_pane_t5

0x3817,	// (0x0005abbb) main_cset_text_pane_t6

0x3825,	// (0x0005abc9) main_cset_text_pane_t7

0x0006,

0xfa98,	// (0x00066e3c) main_cset_text_pane_t

0x7393,	// (0x0005e737) main_cam4_burst_pane

0x7393,	// (0x0005e737) main_cam5_pane

0xc8e7,	// (0x00063c8b) bg_button_pane_cp019

0xc8f0,	// (0x00063c94) bg_button_pane_cp020

0x3664,	// (0x0005aa08) main_cset_slider_pane_g7_ParamLimits

0x3664,	// (0x0005aa08) main_cset_slider_pane_g7

0x3670,	// (0x0005aa14) main_cset_slider_pane_g8_ParamLimits

0x3670,	// (0x0005aa14) main_cset_slider_pane_g8

0xca2b,	// (0x00063dcf) main_cset_slider_pane_g9_ParamLimits

0xca2b,	// (0x00063dcf) main_cset_slider_pane_g9

0xca37,	// (0x00063ddb) main_cset_slider_pane_g10_ParamLimits

0xca37,	// (0x00063ddb) main_cset_slider_pane_g10

0xca43,	// (0x00063de7) main_cset_slider_pane_g11_ParamLimits

0xca43,	// (0x00063de7) main_cset_slider_pane_g11

0xca4f,	// (0x00063df3) main_cset_slider_pane_g12_ParamLimits

0xca4f,	// (0x00063df3) main_cset_slider_pane_g12

0xca5b,	// (0x00063dff) main_cset_slider_pane_g13_ParamLimits

0xca5b,	// (0x00063dff) main_cset_slider_pane_g13

0xca67,	// (0x00063e0b) main_cset_slider_pane_g14_ParamLimits

0xca67,	// (0x00063e0b) main_cset_slider_pane_g14

0xca73,	// (0x00063e17) main_cset_slider_pane_g15_ParamLimits

0xca73,	// (0x00063e17) main_cset_slider_pane_g15

0x36b6,	// (0x0005aa5a) main_cset_slider_pane_t14_ParamLimits

0x36b6,	// (0x0005aa5a) main_cset_slider_pane_t14

0x36ef,	// (0x0005aa93) main_cset_slider_pane_t15_ParamLimits

0x36ef,	// (0x0005aa93) main_cset_slider_pane_t15

0xcf2f,	// (0x000642d3) aid_cam4_burst_size_cell_ParamLimits

0xcf2f,	// (0x000642d3) aid_cam4_burst_size_cell

0xcf4b,	// (0x000642ef) grid_cam4_burst_pane_ParamLimits

0xcf4b,	// (0x000642ef) grid_cam4_burst_pane

0xcf6d,	// (0x00064311) linegrid_cam4_burst_pane_ParamLimits

0xcf6d,	// (0x00064311) linegrid_cam4_burst_pane

0xcf8b,	// (0x0006432f) scroll_pane_cp30_ParamLimits

0xcf8b,	// (0x0006432f) scroll_pane_cp30

0xcf97,	// (0x0006433b) cell_cam4_burst_pane_ParamLimits

0xcf97,	// (0x0006433b) cell_cam4_burst_pane

0x3833,	// (0x0005abd7) linegrid_cam4_burst_pane_g1_ParamLimits

0x3833,	// (0x0005abd7) linegrid_cam4_burst_pane_g1

0xcfcf,	// (0x00064373) linegrid_cam4_burst_pane_g2_ParamLimits

0xcfcf,	// (0x00064373) linegrid_cam4_burst_pane_g2

0x3840,	// (0x0005abe4) linegrid_cam4_burst_pane_g3_ParamLimits

0x3840,	// (0x0005abe4) linegrid_cam4_burst_pane_g3

0x0002,

0xfaa7,	// (0x00066e4b) linegrid_cam4_burst_pane_g_ParamLimits

0xfaa7,	// (0x00066e4b) linegrid_cam4_burst_pane_g

0xcfe0,	// (0x00064384) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xcfe0,	// (0x00064384) linegrid_cam4_burst_pane_g3_copy1

0x384d,	// (0x0005abf1) linegrid_cam4_burst_pane_g4_ParamLimits

0x384d,	// (0x0005abf1) linegrid_cam4_burst_pane_g4

0xcffa,	// (0x0006439e) linegrid_cam4_burst_pane_g5_ParamLimits

0xcffa,	// (0x0006439e) linegrid_cam4_burst_pane_g5

0xd00b,	// (0x000643af) linegrid_cam4_burst_pane_g6_ParamLimits

0xd00b,	// (0x000643af) linegrid_cam4_burst_pane_g6

0x385a,	// (0x0005abfe) linegrid_cam4_burst_pane_g7_ParamLimits

0x385a,	// (0x0005abfe) linegrid_cam4_burst_pane_g7

0xd01c,	// (0x000643c0) cell_cam4_burst_pane_g1

0x3873,	// (0x0005ac17) main_cam5_pane_t1_ParamLimits

0x3873,	// (0x0005ac17) main_cam5_pane_t1

0x3885,	// (0x0005ac29) main_cam5_pane_t2_ParamLimits

0x3885,	// (0x0005ac29) main_cam5_pane_t2

0x3897,	// (0x0005ac3b) main_cam5_pane_t3_ParamLimits

0x3897,	// (0x0005ac3b) main_cam5_pane_t3

0x38a9,	// (0x0005ac4d) main_cam5_pane_t4_ParamLimits

0x38a9,	// (0x0005ac4d) main_cam5_pane_t4

0x38bf,	// (0x0005ac63) main_cam5_pane_t5_ParamLimits

0x38bf,	// (0x0005ac63) main_cam5_pane_t5

0x38d1,	// (0x0005ac75) main_cam5_pane_t6_ParamLimits

0x38d1,	// (0x0005ac75) main_cam5_pane_t6

0x38e3,	// (0x0005ac87) main_cam5_pane_t7_ParamLimits

0x38e3,	// (0x0005ac87) main_cam5_pane_t7

0x38f5,	// (0x0005ac99) main_cam5_pane_t8_ParamLimits

0x38f5,	// (0x0005ac99) main_cam5_pane_t8

0x3911,	// (0x0005acb5) main_cam5_pane_t9_ParamLimits

0x3911,	// (0x0005acb5) main_cam5_pane_t9

0x3923,	// (0x0005acc7) main_cam5_pane_t10_ParamLimits

0x3923,	// (0x0005acc7) main_cam5_pane_t10

0x3935,	// (0x0005acd9) main_cam5_pane_t11_ParamLimits

0x3935,	// (0x0005acd9) main_cam5_pane_t11

0x3947,	// (0x0005aceb) main_cam5_pane_t12_ParamLimits

0x3947,	// (0x0005aceb) main_cam5_pane_t12

0x395c,	// (0x0005ad00) main_cam5_pane_t13_ParamLimits

0x395c,	// (0x0005ad00) main_cam5_pane_t13

0x000c,

0xfab3,	// (0x00066e57) main_cam5_pane_t_ParamLimits

0xfab3,	// (0x00066e57) main_cam5_pane_t

0x75a8,	// (0x0005e94c) popup_scut_keymap_window_ParamLimits

0x75a8,	// (0x0005e94c) popup_scut_keymap_window

0xd02f,	// (0x000643d3) aid_size_cell_brow_shortcut

0x1288,	// (0x0005862c) bg_popup_window_pane_cp010

0xd03b,	// (0x000643df) grid_scut_pane

0xd045,	// (0x000643e9) cell_scut_pane_ParamLimits

0xd045,	// (0x000643e9) cell_scut_pane

0xd05a,	// (0x000643fe) cell_scut_pane_g1

0x3979,	// (0x0005ad1d) cell_scut_pane_t1

0x3988,	// (0x0005ad2c) cell_scut_pane_t2

0xd063,	// (0x00064407) cell_scut_pane_t3

0x0002,

0xface,	// (0x00066e72) cell_scut_pane_t

0xb297,	// (0x0006263b) main_mup3_pane_g8_ParamLimits

0xb297,	// (0x0006263b) main_mup3_pane_g8

0xc55c,	// (0x00063900) area_vitu2_query_pane_ParamLimits

0xc55c,	// (0x00063900) area_vitu2_query_pane

0x68c1,	// (0x0005dc65) input_focus_pane_cp08

0x3997,	// (0x0005ad3b) area_vitu2_query_pane_g1

0x693c,	// (0x0005dce0) area_vitu2_query_pane_g2

0x0001,

0xfad5,	// (0x00066e79) area_vitu2_query_pane_g

0xd071,	// (0x00064415) area_vitu2_query_pane_t1_ParamLimits

0xd071,	// (0x00064415) area_vitu2_query_pane_t1

0xd083,	// (0x00064427) area_vitu2_query_pane_t2_ParamLimits

0xd083,	// (0x00064427) area_vitu2_query_pane_t2

0x694b,	// (0x0005dcef) area_vitu2_query_pane_t3_ParamLimits

0x694b,	// (0x0005dcef) area_vitu2_query_pane_t3

0x6973,	// (0x0005dd17) area_vitu2_query_pane_t4_ParamLimits

0x6973,	// (0x0005dd17) area_vitu2_query_pane_t4

0x699b,	// (0x0005dd3f) area_vitu2_query_pane_t5_ParamLimits

0x699b,	// (0x0005dd3f) area_vitu2_query_pane_t5

0x69c3,	// (0x0005dd67) area_vitu2_query_pane_t6_ParamLimits

0x69c3,	// (0x0005dd67) area_vitu2_query_pane_t6

0x0006,

0xfada,	// (0x00066e7e) area_vitu2_query_pane_t_ParamLimits

0xfada,	// (0x00066e7e) area_vitu2_query_pane_t

0xd095,	// (0x00064439) bg_button_pane_cp018

0xd0a2,	// (0x00064446) bg_button_pane_cp021

0x6a0f,	// (0x0005ddb3) bg_button_pane_cp022

0x6a1e,	// (0x0005ddc2) input_focus_pane_cp09

0x9b10,	// (0x00060eb4) aid_size_touch_mv_arrow_left

0x1161,	// (0x00058505) aid_size_touch_mv_arrow_right

0xca8b,	// (0x00063e2f) main_cset_slider_pane_g16_ParamLimits

0xca8b,	// (0x00063e2f) main_cset_slider_pane_g16

0xca97,	// (0x00063e3b) main_cset_slider_pane_g17_ParamLimits

0xca97,	// (0x00063e3b) main_cset_slider_pane_g17

0xd01c,	// (0x000643c0) cell_cam4_burst_pane_g1_ParamLimits

0x7393,	// (0x0005e737) compa_mode_pane

0xcc90,	// (0x00064034) popup_vtel_slider_window_g3_ParamLimits

0xcc90,	// (0x00064034) popup_vtel_slider_window_g3

0xcca4,	// (0x00064048) popup_vtel_slider_window_g4_ParamLimits

0xcca4,	// (0x00064048) popup_vtel_slider_window_g4

0xccb8,	// (0x0006405c) popup_vtel_slider_window_t1_ParamLimits

0xccb8,	// (0x0006405c) popup_vtel_slider_window_t1

0x7393,	// (0x0005e737) main_cl_pane

0x271d,	// (0x00059ac1) popup_imed_adjust2_window_ParamLimits

0x26f7,	// (0x00059a9b) bg_tb_trans_pane_cp05_ParamLimits

0x3003,	// (0x0005a3a7) popup_imed_adjust2_window_g1_ParamLimits

0x3012,	// (0x0005a3b6) popup_imed_adjust2_window_g2_ParamLimits

0x3012,	// (0x0005a3b6) popup_imed_adjust2_window_g2

0x301e,	// (0x0005a3c2) popup_imed_adjust2_window_g3_ParamLimits

0x301e,	// (0x0005a3c2) popup_imed_adjust2_window_g3

0x0002,

0xf854,	// (0x00066bf8) popup_imed_adjust2_window_g_ParamLimits

0xf854,	// (0x00066bf8) popup_imed_adjust2_window_g

0x302a,	// (0x0005a3ce) popup_imed_adjust2_window_t1_ParamLimits

0x3042,	// (0x0005a3e6) slider_imed_adjust_pane_ParamLimits

0x3056,	// (0x0005a3fa) slider_imed_adjust_pane_g1_ParamLimits

0x3066,	// (0x0005a40a) slider_imed_adjust_pane_g2_ParamLimits

0x3076,	// (0x0005a41a) slider_imed_adjust_pane_g3_ParamLimits

0x3087,	// (0x0005a42b) slider_imed_adjust_pane_g4_ParamLimits

0xf85b,	// (0x00066bff) slider_imed_adjust_pane_g_ParamLimits

0xc302,	// (0x000636a6) aid_touch_area_cam4_ParamLimits

0xc302,	// (0x000636a6) aid_touch_area_cam4

0xc310,	// (0x000636b4) battery_pane_cp01

0xc391,	// (0x00063735) main_camera4_pane_g6_ParamLimits

0xc391,	// (0x00063735) main_camera4_pane_g6

0xc3af,	// (0x00063753) main_camera4_pane_t2_ParamLimits

0xc3af,	// (0x00063753) main_camera4_pane_t2

0x0001,

0xf95e,	// (0x00066d02) main_camera4_pane_t_ParamLimits

0xf95e,	// (0x00066d02) main_camera4_pane_t

0xc413,	// (0x000637b7) aid_touch_area_vid4_ParamLimits

0xc413,	// (0x000637b7) aid_touch_area_vid4

0xc445,	// (0x000637e9) main_video4_pane_g5_ParamLimits

0xc445,	// (0x000637e9) main_video4_pane_g5

0xc467,	// (0x0006380b) vid4_progress_pane_ParamLimits

0xc467,	// (0x0006380b) vid4_progress_pane

0x367c,	// (0x0005aa20) main_cset_slider_pane_g18_ParamLimits

0x367c,	// (0x0005aa20) main_cset_slider_pane_g18

0x3867,	// (0x0005ac0b) cell_cam4_burst_pane_g2_ParamLimits

0x3867,	// (0x0005ac0b) cell_cam4_burst_pane_g2

0x0001,

0xfaae,	// (0x00066e52) cell_cam4_burst_pane_g_ParamLimits

0xfaae,	// (0x00066e52) cell_cam4_burst_pane_g

0xd0ae,	// (0x00064452) bg_cl_pane_ParamLimits

0xd0ae,	// (0x00064452) bg_cl_pane

0xd0ba,	// (0x0006445e) cl_header_pane_ParamLimits

0xd0ba,	// (0x0006445e) cl_header_pane

0xd0c6,	// (0x0006446a) cl_listscroll_pane_ParamLimits

0xd0c6,	// (0x0006446a) cl_listscroll_pane

0x3a3f,	// (0x0005ade3) bg_cl_pane_g1

0x3a47,	// (0x0005adeb) bg_cl_pane_g2

0x3a4f,	// (0x0005adf3) bg_cl_pane_g3

0x3a57,	// (0x0005adfb) bg_cl_pane_g4

0x3a5f,	// (0x0005ae03) bg_cl_pane_g5

0x3a67,	// (0x0005ae0b) bg_cl_pane_g6

0x3a6f,	// (0x0005ae13) bg_cl_pane_g7

0x3a77,	// (0x0005ae1b) bg_cl_pane_g8

0x3a7f,	// (0x0005ae23) bg_cl_pane_g9

0x0008,

0xfae9,	// (0x00066e8d) bg_cl_pane_g

0xd0d2,	// (0x00064476) aid_height_cl_leading_ParamLimits

0xd0d2,	// (0x00064476) aid_height_cl_leading

0xd0de,	// (0x00064482) aid_height_cl_text_ParamLimits

0xd0de,	// (0x00064482) aid_height_cl_text

0x75df,	// (0x0005e983) bg_cl_header_pane_ParamLimits

0x75df,	// (0x0005e983) bg_cl_header_pane

0xd0f6,	// (0x0006449a) cl_header_pane_g1_ParamLimits

0xd0f6,	// (0x0006449a) cl_header_pane_g1

0xd103,	// (0x000644a7) cl_header_pane_t1_ParamLimits

0xd103,	// (0x000644a7) cl_header_pane_t1

0x3a87,	// (0x0005ae2b) cl_list_pane

0x3a90,	// (0x0005ae34) hc_scroll_pane_cp01

0x0a58,	// (0x00057dfc) bg_cl_header_pane_g1

0x3549,	// (0x0005a8ed) bg_cl_header_pane_g2

0x0a78,	// (0x00057e1c) bg_cl_header_pane_g3

0x3559,	// (0x0005a8fd) bg_cl_header_pane_g4

0x3551,	// (0x0005a8f5) bg_cl_header_pane_g5

0x3780,	// (0x0005ab24) bg_cl_header_pane_g6

0x3571,	// (0x0005a915) bg_cl_header_pane_g7

0x3579,	// (0x0005a91d) bg_cl_header_pane_g8

0x3569,	// (0x0005a90d) bg_cl_header_pane_g9

0x0008,

0xfafc,	// (0x00066ea0) bg_cl_header_pane_g

0xd115,	// (0x000644b9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xd115,	// (0x000644b9) hc_cl_list_double_graphic_heading_pane

0xd125,	// (0x000644c9) hc_cl_list_single_graphic_pane_ParamLimits

0xd125,	// (0x000644c9) hc_cl_list_single_graphic_pane

0xd137,	// (0x000644db) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xd137,	// (0x000644db) hc_cl_list_single_graphic_pane_g1

0xd143,	// (0x000644e7) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xd143,	// (0x000644e7) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfb0f,	// (0x00066eb3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfb0f,	// (0x00066eb3) hc_cl_list_single_graphic_pane_g

0xd157,	// (0x000644fb) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xd157,	// (0x000644fb) hc_cl_list_single_graphic_pane_t1

0xd137,	// (0x000644db) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xd137,	// (0x000644db) hc_cl_list_double_graphic_heading_pane_g1

0xd16c,	// (0x00064510) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xd16c,	// (0x00064510) hc_cl_list_double_graphic_heading_pane_g2

0xd180,	// (0x00064524) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xd180,	// (0x00064524) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfb14,	// (0x00066eb8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfb14,	// (0x00066eb8) hc_cl_list_double_graphic_heading_pane_g

0xd194,	// (0x00064538) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd194,	// (0x00064538) hc_cl_list_double_graphic_heading_pane_t1

0xd1a9,	// (0x0006454d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd1a9,	// (0x0006454d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfb1b,	// (0x00066ebf) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfb1b,	// (0x00066ebf) hc_cl_list_double_graphic_heading_pane_t

0xd1be,	// (0x00064562) vid4_progress_pane_g1

0xd1cd,	// (0x00064571) vid4_progress_pane_g2

0xd1dc,	// (0x00064580) vid4_progress_pane_g3

0xd1eb,	// (0x0006458f) vid4_progress_pane_g4

0x0004,

0xfb20,	// (0x00066ec4) vid4_progress_pane_g

0xd1f7,	// (0x0006459b) vid4_progress_pane_t1

0xd20d,	// (0x000645b1) vid4_progress_pane_t2

0x0002,

0xfb2b,	// (0x00066ecf) vid4_progress_pane_t

0xd237,	// (0x000645db) wait_bar_pane_cp07

0x2935,	// (0x00059cd9) blid_firmament_pane_ParamLimits

0x2976,	// (0x00059d1a) popup_blid_sat_info2_window_g1

0x299a,	// (0x00059d3e) popup_blid_sat_info2_window_t3

0x29a8,	// (0x00059d4c) popup_blid_sat_info2_window_t4

0x29b6,	// (0x00059d5a) popup_blid_sat_info2_window_t5

0x29c4,	// (0x00059d68) popup_blid_sat_info2_window_t6

0x29d4,	// (0x00059d78) popup_blid_sat_info2_window_t7

0x29e2,	// (0x00059d86) popup_blid_sat_info2_window_t8

0x29f0,	// (0x00059d94) popup_blid_sat_info2_window_t9

0x29fe,	// (0x00059da2) popup_blid_sat_info2_window_t10

0x2aba,	// (0x00059e5e) aid_firma_cardinal_ParamLimits

0x2ace,	// (0x00059e72) blid_firmament_pane_t1_ParamLimits

0x2ae5,	// (0x00059e89) blid_firmament_pane_t2_ParamLimits

0x2afc,	// (0x00059ea0) blid_firmament_pane_t3_ParamLimits

0x2b13,	// (0x00059eb7) blid_firmament_pane_t4_ParamLimits

0xf74d,	// (0x00066af1) blid_firmament_pane_t_ParamLimits

0x2b2a,	// (0x00059ece) blid_sat_info_pane_ParamLimits

0xa642,	// (0x000619e6) main_cam_set_pane_ParamLimits

0xb9fc,	// (0x00062da0) aid_size_cell_colour_35_ParamLimits

0xba13,	// (0x00062db7) aid_size_cell_colour_112_ParamLimits

0xba2a,	// (0x00062dce) aid_size_cell_effect_ParamLimits

0xa642,	// (0x000619e6) bg_tb_trans_pane_cp02_ParamLimits

0x0d74,	// (0x00058118) heading_imed_pane_ParamLimits

0xba44,	// (0x00062de8) listscroll_imed_pane_ParamLimits

0x1ce9,	// (0x0005908d) popup_call2_audio_first_window_g5_ParamLimits

0x1ce9,	// (0x0005908d) popup_call2_audio_first_window_g5

0xc0c7,	// (0x0006346b) aid_size_touch_image3_arrow_left_ParamLimits

0xc0c7,	// (0x0006346b) aid_size_touch_image3_arrow_left

0xc0db,	// (0x0006347f) aid_size_touch_image3_arrow_right_ParamLimits

0xc0db,	// (0x0006347f) aid_size_touch_image3_arrow_right

0xd222,	// (0x000645c6) vid4_progress_pane_t3

0xbca8,	// (0x0006304c) main_hwr_training_symbol_option_pane_ParamLimits

0xbca8,	// (0x0006304c) main_hwr_training_symbol_option_pane

0x32e2,	// (0x0005a686) popup_hwr_training_preview_window_ParamLimits

0x32e2,	// (0x0005a686) popup_hwr_training_preview_window

0xbd03,	// (0x000630a7) hwr_training_navi_pane_g5_ParamLimits

0xbd03,	// (0x000630a7) hwr_training_navi_pane_g5

0x3537,	// (0x0005a8db) popup_char_count_window

0x75df,	// (0x0005e983) bg_popup_sub_pane_cp20_ParamLimits

0xcdae,	// (0x00064152) list_vitu2_match_list_pane_ParamLimits

0xcdba,	// (0x0006415e) vitu2_page_scroll_pane_ParamLimits

0xcdba,	// (0x0006415e) vitu2_page_scroll_pane

0x3af3,	// (0x0005ae97) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3af3,	// (0x0005ae97) list_single_hwr_training_symbol_option_pane

0x3b06,	// (0x0005aeaa) list_single_hwr_training_symbol_option_pane_g1

0x3b0e,	// (0x0005aeb2) list_single_hwr_training_symbol_option_pane_t1

0x3b1c,	// (0x0005aec0) bg_button_pane_cp023

0x3b25,	// (0x0005aec9) bg_button_pane_cp024

0xd258,	// (0x000645fc) vitu2_page_scroll_pane_g1

0xd260,	// (0x00064604) vitu2_page_scroll_pane_g2

0x0001,

0xfb32,	// (0x00066ed6) vitu2_page_scroll_pane_g

0xd268,	// (0x0006460c) vitu2_page_scroll_pane_t1

0x288d,	// (0x00059c31) popup_char_count_window_g1

0x3b58,	// (0x0005aefc) popup_char_count_window_g2

0x3b61,	// (0x0005af05) popup_char_count_window_g3

0x0002,

0xfb37,	// (0x00066edb) popup_char_count_window_g

0x3b6a,	// (0x0005af0e) popup_char_count_window_t1

0x7393,	// (0x0005e737) main_vded2_pane

0x2ff1,	// (0x0005a395) aid_size_cell_imed_line

0x2ffb,	// (0x0005a39f) grid_imed_line_width_pane

0xc4b2,	// (0x00063856) vid4_indicators_pane_g4

0x3b78,	// (0x0005af1c) cell_imed_line_width_pane_ParamLimits

0x3b78,	// (0x0005af1c) cell_imed_line_width_pane

0x3b8a,	// (0x0005af2e) cell_imed_line_width_pane_g1

0x290f,	// (0x00059cb3) cell_imed_line_width_pane_g2

0x0001,

0xfb3e,	// (0x00066ee2) cell_imed_line_width_pane_g

0xd277,	// (0x0006461b) main_vded2_pane_g1_ParamLimits

0xd277,	// (0x0006461b) main_vded2_pane_g1

0xd284,	// (0x00064628) main_vded2_pane_g2_ParamLimits

0xd284,	// (0x00064628) main_vded2_pane_g2

0x0001,

0xfb43,	// (0x00066ee7) main_vded2_pane_g_ParamLimits

0xfb43,	// (0x00066ee7) main_vded2_pane_g

0xd290,	// (0x00064634) vded2_slider_pane_ParamLimits

0xd290,	// (0x00064634) vded2_slider_pane

0xd29d,	// (0x00064641) aid_size_touch_vded2_end

0xd2a5,	// (0x00064649) aid_size_touch_vded2_playhead

0xd2ad,	// (0x00064651) aid_size_touch_vded2_start

0xd2b5,	// (0x00064659) vded2_slider_bg_pane

0xd2be,	// (0x00064662) vded2_slider_pane_g1

0xd2c7,	// (0x0006466b) vded2_slider_pane_g2

0xd2cf,	// (0x00064673) vded2_slider_pane_g3

0x0002,

0xfb48,	// (0x00066eec) vded2_slider_pane_g

0xd2d8,	// (0x0006467c) vded2_slider_bg_pane_g1

0xd2e1,	// (0x00064685) vded2_slider_bg_pane_g2

0xd2ea,	// (0x0006468e) vded2_slider_bg_pane_g3

0x0002,

0xfb4f,	// (0x00066ef3) vded2_slider_bg_pane_g

0xa02a,	// (0x000613ce) aid_postcard_touch_down_pane_ParamLimits

0xa02a,	// (0x000613ce) aid_postcard_touch_down_pane

0xa036,	// (0x000613da) aid_postcard_touch_up_pane_ParamLimits

0xa036,	// (0x000613da) aid_postcard_touch_up_pane

0x7393,	// (0x0005e737) main_blid2_pane

0x2705,	// (0x00059aa9) popup_blid2_search_window

0x7393,	// (0x0005e737) blid2_gps_pane

0x7393,	// (0x0005e737) blid2_navig_pane

0x7393,	// (0x0005e737) blid2_search_pane

0x7393,	// (0x0005e737) blid2_tripm_pane

0xd2f3,	// (0x00064697) blid2_search_pane_g1_ParamLimits

0xd2f3,	// (0x00064697) blid2_search_pane_g1

0xd2ff,	// (0x000646a3) blid2_search_pane_t1_ParamLimits

0xd2ff,	// (0x000646a3) blid2_search_pane_t1

0xd311,	// (0x000646b5) aid_size_cell_blid2_gps_ParamLimits

0xd311,	// (0x000646b5) aid_size_cell_blid2_gps

0xd321,	// (0x000646c5) blid2_gps_pane_g1_ParamLimits

0xd321,	// (0x000646c5) blid2_gps_pane_g1

0xd32d,	// (0x000646d1) grid_blid2_satellite_pane_ParamLimits

0xd32d,	// (0x000646d1) grid_blid2_satellite_pane

0xd339,	// (0x000646dd) blid2_navig_pane_g1_ParamLimits

0xd339,	// (0x000646dd) blid2_navig_pane_g1

0xd345,	// (0x000646e9) blid2_navig_pane_t1_ParamLimits

0xd345,	// (0x000646e9) blid2_navig_pane_t1

0xd357,	// (0x000646fb) blid2_navig_pane_t2_ParamLimits

0xd357,	// (0x000646fb) blid2_navig_pane_t2

0x0001,

0xfb56,	// (0x00066efa) blid2_navig_pane_t_ParamLimits

0xfb56,	// (0x00066efa) blid2_navig_pane_t

0xd369,	// (0x0006470d) blid2_navig_ring_pane_ParamLimits

0xd369,	// (0x0006470d) blid2_navig_ring_pane

0xd375,	// (0x00064719) blid2_speed_pane_ParamLimits

0xd375,	// (0x00064719) blid2_speed_pane

0xd381,	// (0x00064725) blid2_tripm_pane_g1_ParamLimits

0xd381,	// (0x00064725) blid2_tripm_pane_g1

0xd38d,	// (0x00064731) blid2_tripm_pane_g2_ParamLimits

0xd38d,	// (0x00064731) blid2_tripm_pane_g2

0xd399,	// (0x0006473d) blid2_tripm_pane_g3_ParamLimits

0xd399,	// (0x0006473d) blid2_tripm_pane_g3

0xd3a5,	// (0x00064749) blid2_tripm_pane_g4_ParamLimits

0xd3a5,	// (0x00064749) blid2_tripm_pane_g4

0xd3b1,	// (0x00064755) blid2_tripm_pane_g5_ParamLimits

0xd3b1,	// (0x00064755) blid2_tripm_pane_g5

0x0005,

0xfb5b,	// (0x00066eff) blid2_tripm_pane_g_ParamLimits

0xfb5b,	// (0x00066eff) blid2_tripm_pane_g

0xd3c9,	// (0x0006476d) blid2_tripm_pane_t1_ParamLimits

0xd3c9,	// (0x0006476d) blid2_tripm_pane_t1

0xd3db,	// (0x0006477f) blid2_tripm_pane_t2_ParamLimits

0xd3db,	// (0x0006477f) blid2_tripm_pane_t2

0xd3ed,	// (0x00064791) blid2_tripm_pane_t3_ParamLimits

0xd3ed,	// (0x00064791) blid2_tripm_pane_t3

0x0003,

0xfb68,	// (0x00066f0c) blid2_tripm_pane_t_ParamLimits

0xfb68,	// (0x00066f0c) blid2_tripm_pane_t

0xd41d,	// (0x000647c1) cell_blid2_satellite_pane_ParamLimits

0xd41d,	// (0x000647c1) cell_blid2_satellite_pane

0xd435,	// (0x000647d9) cell_blid2_satellite_pane_g1

0x3b93,	// (0x0005af37) cell_blid2_satellite_pane_t1

0x2b3a,	// (0x00059ede) blid2_speed_pane_g1

0x3ba1,	// (0x0005af45) blid2_speed_pane_t1

0x3baf,	// (0x0005af53) blid2_speed_pane_t2

0x0001,

0xfb71,	// (0x00066f15) blid2_speed_pane_t

0x2b3a,	// (0x00059ede) blid2_navig_ring_pane_g1

0xd43e,	// (0x000647e2) blid2_navig_ring_pane_g2

0xd446,	// (0x000647ea) blid2_navig_ring_pane_g3

0xd44e,	// (0x000647f2) blid2_navig_ring_pane_g4

0xd456,	// (0x000647fa) blid2_navig_ring_pane_g5

0x0004,

0xfb76,	// (0x00066f1a) blid2_navig_ring_pane_g

0x7393,	// (0x0005e737) bg_popup_window_pane_cp011

0x3bbd,	// (0x0005af61) popup_blid2_search_window_g1

0x3bc5,	// (0x0005af69) popup_blid2_search_window_t1

0x3bd3,	// (0x0005af77) popup_blid2_search_window_t2

0x0001,

0xfb81,	// (0x00066f25) popup_blid2_search_window_t

0x8f12,	// (0x000602b6) main_browser_pane_g1

0x8040,	// (0x0005f3e4) main_browser_pane_ParamLimits

0xa642,	// (0x000619e6) bg_button_pane_cp011_ParamLimits

0xc6d8,	// (0x00063a7c) cell_vitu2_function_pane_g1_ParamLimits

0xa642,	// (0x000619e6) bg_popup_sub_pane_cp22_ParamLimits

0x68c1,	// (0x0005dc65) input_focus_pane_cp08_ParamLimits

0xcefa,	// (0x0006429e) popup_vitu2_query_button_pane_ParamLimits

0xcefa,	// (0x0006429e) popup_vitu2_query_button_pane

0x68b9,	// (0x0005dc5d) popup_vitu2_query_input_button_pane

0x37bd,	// (0x0005ab61) popup_vitu2_query_window_g1_ParamLimits

0x68ce,	// (0x0005dc72) popup_vitu2_query_window_g2_ParamLimits

0xfa88,	// (0x00066e2c) popup_vitu2_query_window_g_ParamLimits

0x7393,	// (0x0005e737) bg_button_pane_cp026

0xd45e,	// (0x00064802) popup_vitu2_query_input_button_pane_g1

0x7393,	// (0x0005e737) bg_button_pane_cp025

0x3be1,	// (0x0005af85) popup_vitu2_query_button_pane_t1

0xaff1,	// (0x00062395) main_mp3_pane_t6

0xafff,	// (0x000623a3) popup_slider_window_cp01

0xc3c1,	// (0x00063765) cam4_battery_pane

0xc3c1,	// (0x00063765) cam4_battery_pane_cp02

0xc3c1,	// (0x00063765) cam4_battery_pane_cp01

0xc3c1,	// (0x00063765) cam4_battery_pane_cp03

0x2b3a,	// (0x00059ede) cam4_battery_pane_g1

0x33e2,	// (0x0005a786) cam4_battery_pane_g2

0x0001,

0xfb86,	// (0x00066f2a) cam4_battery_pane_g

0x2a0c,	// (0x00059db0) popup_blid_sat_info2_window_t11

0x9b10,	// (0x00060eb4) aid_size_touch_mv_arrow_left_ParamLimits

0x1161,	// (0x00058505) aid_size_touch_mv_arrow_right_ParamLimits

0x1199,	// (0x0005853d) navi_pane_g1_ParamLimits

0x11a5,	// (0x00058549) navi_pane_g2_ParamLimits

0x9b29,	// (0x00060ecd) navi_pane_g3_ParamLimits

0xf44c,	// (0x000667f0) navi_pane_g_ParamLimits

0x9b4e,	// (0x00060ef2) navi_pane_mv_t1_ParamLimits

0xba50,	// (0x00062df4) grid_imed_effect_pane_ParamLimits

0x8baa,	// (0x0005ff4e) aid_placing_vt_slider_lsc

0x8bb2,	// (0x0005ff56) aid_placing_vt_slider_prt

0xa642,	// (0x000619e6) bg_tb_trans_pane_cp01_ParamLimits

0x2c89,	// (0x0005a02d) popup_image_details_window_g1_ParamLimits

0x2c9c,	// (0x0005a040) popup_image_details_window_g2_ParamLimits

0x2cb1,	// (0x0005a055) popup_image_details_window_g3_ParamLimits

0x2cb1,	// (0x0005a055) popup_image_details_window_g3

0xf792,	// (0x00066b36) popup_image_details_window_g_ParamLimits

0x2cc5,	// (0x0005a069) popup_image_details_window_t1_ParamLimits

0x2cd7,	// (0x0005a07b) popup_image_details_window_t2_ParamLimits

0x2cf0,	// (0x0005a094) popup_image_details_window_t3_ParamLimits

0x2d04,	// (0x0005a0a8) popup_image_details_window_t4_ParamLimits

0x2d1f,	// (0x0005a0c3) popup_image_details_window_t5_ParamLimits

0xf799,	// (0x00066b3d) popup_image_details_window_t_ParamLimits

0xd0ea,	// (0x0006448e) cl_header_name_pane_ParamLimits

0xd0ea,	// (0x0006448e) cl_header_name_pane

0xd466,	// (0x0006480a) cl_header_name_pane_t1_ParamLimits

0xd466,	// (0x0006480a) cl_header_name_pane_t1

0xd47d,	// (0x00064821) cl_header_name_pane_t2_ParamLimits

0xd47d,	// (0x00064821) cl_header_name_pane_t2

0xd4a7,	// (0x0006484b) cl_header_name_pane_t3_ParamLimits

0xd4a7,	// (0x0006484b) cl_header_name_pane_t3

0x0002,

0xfb8b,	// (0x00066f2f) cl_header_name_pane_t_ParamLimits

0xfb8b,	// (0x00066f2f) cl_header_name_pane_t

0x1227,	// (0x000585cb) navi_pane_mv_g2_ParamLimits

0x34d8,	// (0x0005a87c) field_vitu2_entry_pane_g1_ParamLimits

0x34e4,	// (0x0005a888) field_vitu2_entry_pane_g2_ParamLimits

0x34f0,	// (0x0005a894) field_vitu2_entry_pane_g3_ParamLimits

0x34f0,	// (0x0005a894) field_vitu2_entry_pane_g3

0xf987,	// (0x00066d2b) field_vitu2_entry_pane_g_ParamLimits

0xc668,	// (0x00063a0c) cell_vitu2_itu_pane_g1_ParamLimits

0xc678,	// (0x00063a1c) cell_vitu2_itu_pane_g2_ParamLimits

0xc678,	// (0x00063a1c) cell_vitu2_itu_pane_g2

0x0001,

0xf993,	// (0x00066d37) cell_vitu2_itu_pane_g_ParamLimits

0xf993,	// (0x00066d37) cell_vitu2_itu_pane_g

0xa642,	// (0x000619e6) bg_vkb2_func_pane_cp05_ParamLimits

0xa642,	// (0x000619e6) bg_vkb2_func_pane_cp05

0xa642,	// (0x000619e6) bg_vkb2_func_pane_cp03

0xa642,	// (0x000619e6) bg_vkb2_func_pane_cp04

0xa642,	// (0x000619e6) bg_vkb2_func_pane_cp10_ParamLimits

0xa642,	// (0x000619e6) bg_vkb2_func_pane_cp10

0x6a0f,	// (0x0005ddb3) bg_vkb2_func_pane_cp08

0xd095,	// (0x00064439) bg_vkb2_func_pane_cp06

0xd0a2,	// (0x00064446) bg_vkb2_func_pane_cp07

0x3b2e,	// (0x0005aed2) bg_vkb2_func_pane_cp11_ParamLimits

0x3b2e,	// (0x0005aed2) bg_vkb2_func_pane_cp11

0x3b43,	// (0x0005aee7) bg_vkb2_func_pane_cp12_ParamLimits

0x3b43,	// (0x0005aee7) bg_vkb2_func_pane_cp12

0x7393,	// (0x0005e737) bg_vkb2_func_pane_cp09

0x3549,	// (0x0005a8ed) bg_vkb2_func_pane_g1

0x0a78,	// (0x00057e1c) bg_vkb2_func_pane_g2

0x3551,	// (0x0005a8f5) bg_vkb2_func_pane_g3

0x3559,	// (0x0005a8fd) bg_vkb2_func_pane_g4

0x3780,	// (0x0005ab24) bg_vkb2_func_pane_g5

0x3571,	// (0x0005a915) bg_vkb2_func_pane_g6

0x3579,	// (0x0005a91d) bg_vkb2_func_pane_g7

0x3569,	// (0x0005a90d) bg_vkb2_func_pane_g8

0x0a58,	// (0x00057dfc) bg_vkb2_func_pane_g9

0x0008,

0xfb92,	// (0x00066f36) bg_vkb2_func_pane_g

0xd3bd,	// (0x00064761) blid2_tripm_pane_g6_ParamLimits

0xd3bd,	// (0x00064761) blid2_tripm_pane_g6

0x33a0,	// (0x0005a744) mp4_progress_pane_g1

0xd411,	// (0x000647b5) blid2_tripm_values_pane_ParamLimits

0xd411,	// (0x000647b5) blid2_tripm_values_pane

0xd4cc,	// (0x00064870) blid2_tripm_values_pane_t1

0xd4da,	// (0x0006487e) blid2_tripm_values_pane_t2

0xd4e8,	// (0x0006488c) blid2_tripm_values_pane_t3

0xd4f6,	// (0x0006489a) blid2_tripm_values_pane_t4

0xd504,	// (0x000648a8) blid2_tripm_values_pane_t5

0xd512,	// (0x000648b6) blid2_tripm_values_pane_t6

0xd520,	// (0x000648c4) blid2_tripm_values_pane_t7

0xd52e,	// (0x000648d2) blid2_tripm_values_pane_t8

0xd53c,	// (0x000648e0) blid2_tripm_values_pane_t9

0x0008,

0xfba5,	// (0x00066f49) blid2_tripm_values_pane_t

0x8bd4,	// (0x0005ff78) call_video_pane_t1_ParamLimits

0x8bea,	// (0x0005ff8e) call_video_pane_t2_ParamLimits

0xf2d5,	// (0x00066679) call_video_pane_t_ParamLimits

0x66bd,	// (0x0005da61) msg_header_pane_g1_ParamLimits

0x1411,	// (0x000587b5) msg_header_pane_g2_ParamLimits

0x1411,	// (0x000587b5) msg_header_pane_g2

0x0001,

0xf4ef,	// (0x00066893) msg_header_pane_g_ParamLimits

0xf4ef,	// (0x00066893) msg_header_pane_g

0x8040,	// (0x0005f3e4) main_clock2_pane_ParamLimits

0xb810,	// (0x00062bb4) grid_clock2_toolbar_pane_ParamLimits

0xb810,	// (0x00062bb4) grid_clock2_toolbar_pane

0xb810,	// (0x00062bb4) listscroll_clock2_pane_ParamLimits

0xb810,	// (0x00062bb4) listscroll_clock2_pane

0xb8b3,	// (0x00062c57) main_clock2_pane_t3_ParamLimits

0xb8b3,	// (0x00062c57) main_clock2_pane_t3

0xb8c5,	// (0x00062c69) main_clock2_pane_t4_ParamLimits

0xb8c5,	// (0x00062c69) main_clock2_pane_t4

0x3bef,	// (0x0005af93) cell_clock2_toolbar_pane

0x3bf7,	// (0x0005af9b) cell_clock2_toolbar_pane_cp01

0x3bf7,	// (0x0005af9b) cell_clock2_toolbar_pane_cp02

0x3bff,	// (0x0005afa3) cell_clock2_toolbar_pane_cp03

0x3c07,	// (0x0005afab) list_clock2_pane

0x10c9,	// (0x0005846d) scroll_pane_cp10

0x3c0f,	// (0x0005afb3) list_single_clock2_pane_ParamLimits

0x3c0f,	// (0x0005afb3) list_single_clock2_pane

0x1288,	// (0x0005862c) list_highlight_pane_cp08

0x3c1c,	// (0x0005afc0) list_single_clock2_pane_t1

0x3c2a,	// (0x0005afce) list_single_clock2_pane_t2

0x0001,

0xfbb8,	// (0x00066f5c) list_single_clock2_pane_t

0x7393,	// (0x0005e737) bg_button_pane_cp10

0x3c38,	// (0x0005afdc) cell_clock2_toolbar_pane_g1

0x9f94,	// (0x00061338) aid_main_viewer_pane_g1_ParamLimits

0x9f94,	// (0x00061338) aid_main_viewer_pane_g1

0x9fa0,	// (0x00061344) aid_main_viewer_pane_g2_ParamLimits

0x9fa0,	// (0x00061344) aid_main_viewer_pane_g2

0x9fac,	// (0x00061350) aid_main_viewer_pane_g3_ParamLimits

0x9fac,	// (0x00061350) aid_main_viewer_pane_g3

0x9fbb,	// (0x0006135f) aid_main_viewer_pane_g4_ParamLimits

0x9fbb,	// (0x0006135f) aid_main_viewer_pane_g4

0x0003,

0xf500,	// (0x000668a4) aid_main_viewer_pane_g_ParamLimits

0xf500,	// (0x000668a4) aid_main_viewer_pane_g

0x75df,	// (0x0005e983) main_calc_pane_ParamLimits

0xa650,	// (0x000619f4) main_dialer2_pane_ParamLimits

0x7393,	// (0x0005e737) main_cam6_pane

0x7393,	// (0x0005e737) main_vid6_pane

0xb81c,	// (0x00062bc0) listscroll_gen_pane_cp06_ParamLimits

0xb81c,	// (0x00062bc0) listscroll_gen_pane_cp06

0xb8d7,	// (0x00062c7b) main_clock2_pane_t5_ParamLimits

0xb8d7,	// (0x00062c7b) main_clock2_pane_t5

0xb91e,	// (0x00062cc2) aid_call2_pane_cp10_ParamLimits

0xb92a,	// (0x00062cce) aid_call_pane_cp10_ParamLimits

0x1155,	// (0x000584f9) popup_clock_analogue_window_cp10_g1_ParamLimits

0x1155,	// (0x000584f9) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb936,	// (0x00062cda) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb936,	// (0x00062cda) popup_clock_analogue_window_cp10_g4_ParamLimits

0x1155,	// (0x000584f9) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf849,	// (0x00066bed) popup_clock_analogue_window_cp10_g_ParamLimits

0xb942,	// (0x00062ce6) popup_clock_analogue_window_cp10_t1_ParamLimits

0x340a,	// (0x0005a7ae) cell_dialer2_keypad_pane_g2_ParamLimits

0x340a,	// (0x0005a7ae) cell_dialer2_keypad_pane_g2

0x0001,

0xf92f,	// (0x00066cd3) cell_dialer2_keypad_pane_g_ParamLimits

0xf92f,	// (0x00066cd3) cell_dialer2_keypad_pane_g

0xc090,	// (0x00063434) cell_dialer2_keypad_pane_t1

0xc979,	// (0x00063d1d) main_cset_text2_pane_ParamLimits

0xc979,	// (0x00063d1d) main_cset_text2_pane

0x3997,	// (0x0005ad3b) area_vitu2_query_pane_g1_ParamLimits

0x693c,	// (0x0005dce0) area_vitu2_query_pane_g2_ParamLimits

0xfad5,	// (0x00066e79) area_vitu2_query_pane_g_ParamLimits

0x69eb,	// (0x0005dd8f) area_vitu2_query_pane_t7_ParamLimits

0x69eb,	// (0x0005dd8f) area_vitu2_query_pane_t7

0xd095,	// (0x00064439) bg_button_pane_cp018_ParamLimits

0xd0a2,	// (0x00064446) bg_button_pane_cp021_ParamLimits

0x6a0f,	// (0x0005ddb3) bg_button_pane_cp022_ParamLimits

0x6a0f,	// (0x0005ddb3) bg_vkb2_func_pane_cp08_ParamLimits

0xd095,	// (0x00064439) bg_vkb2_func_pane_cp06_ParamLimits

0xd0a2,	// (0x00064446) bg_vkb2_func_pane_cp07_ParamLimits

0x6a1e,	// (0x0005ddc2) input_focus_pane_cp09_ParamLimits

0xd54a,	// (0x000648ee) cam6_autofocus_pane_ParamLimits

0xd54a,	// (0x000648ee) cam6_autofocus_pane

0xd566,	// (0x0006490a) cam6_image_uncrop_pane_ParamLimits

0xd566,	// (0x0006490a) cam6_image_uncrop_pane

0xd589,	// (0x0006492d) cam6_indi_pane_ParamLimits

0xd589,	// (0x0006492d) cam6_indi_pane

0xd5a3,	// (0x00064947) cam6_mode_pane_ParamLimits

0xd5a3,	// (0x00064947) cam6_mode_pane

0xd5b7,	// (0x0006495b) cam6_timer_pane_ParamLimits

0xd5b7,	// (0x0006495b) cam6_timer_pane

0xd5c3,	// (0x00064967) cam6_zoom_pane_ParamLimits

0xd5c3,	// (0x00064967) cam6_zoom_pane

0xc421,	// (0x000637c5) cam6_mode_pane_g1_ParamLimits

0xc421,	// (0x000637c5) cam6_mode_pane_g1

0xd5d9,	// (0x0006497d) cam6_mode_pane_g2_ParamLimits

0xd5d9,	// (0x0006497d) cam6_mode_pane_g2

0xd5e5,	// (0x00064989) cam6_mode_pane_g3_ParamLimits

0xd5e5,	// (0x00064989) cam6_mode_pane_g3

0xd5f1,	// (0x00064995) cam6_mode_pane_g4_ParamLimits

0xd5f1,	// (0x00064995) cam6_mode_pane_g4

0x0003,

0xfbbd,	// (0x00066f61) cam6_mode_pane_g_ParamLimits

0xfbbd,	// (0x00066f61) cam6_mode_pane_g

0x3c40,	// (0x0005afe4) bg_tb_trans_pane_cp08_ParamLimits

0x3c40,	// (0x0005afe4) bg_tb_trans_pane_cp08

0x3c4e,	// (0x0005aff2) cam6_battery_pane_ParamLimits

0x3c4e,	// (0x0005aff2) cam6_battery_pane

0x3c64,	// (0x0005b008) cam6_indi_pane_g1_ParamLimits

0x3c64,	// (0x0005b008) cam6_indi_pane_g1

0x3c76,	// (0x0005b01a) cam6_indi_pane_g2_ParamLimits

0x3c76,	// (0x0005b01a) cam6_indi_pane_g2

0x3c88,	// (0x0005b02c) cam6_indi_pane_g3_ParamLimits

0x3c88,	// (0x0005b02c) cam6_indi_pane_g3

0x0002,

0xfbc6,	// (0x00066f6a) cam6_indi_pane_g_ParamLimits

0xfbc6,	// (0x00066f6a) cam6_indi_pane_g

0x3c9a,	// (0x0005b03e) cam6_indi_pane_t1_ParamLimits

0x3c9a,	// (0x0005b03e) cam6_indi_pane_t1

0xc4e8,	// (0x0006388c) cam6_autofocus_pane_g1

0xc4f0,	// (0x00063894) cam6_autofocus_pane_g2

0xc4f8,	// (0x0006389c) cam6_autofocus_pane_g3

0xc500,	// (0x000638a4) cam6_autofocus_pane_g4

0x0003,

0xfbcd,	// (0x00066f71) cam6_autofocus_pane_g

0x3cc0,	// (0x0005b064) cam6_timer_pane_g1

0x3cc8,	// (0x0005b06c) cam6_timer_pane_t1

0x3cd6,	// (0x0005b07a) cam6_zoom_cont_pane

0x3cde,	// (0x0005b082) cam6_zoom_pane_g1

0x3ce6,	// (0x0005b08a) cam6_zoom_pane_g2

0xd5fd,	// (0x000649a1) cam6_zoom_pane_g3

0x0002,

0xfbd6,	// (0x00066f7a) cam6_zoom_pane_g

0x2b3a,	// (0x00059ede) cam6_battery_pane_g1

0x2b3a,	// (0x00059ede) cam6_battery_pane_g2

0x0001,

0xf756,	// (0x00066afa) cam6_battery_pane_g

0x3cee,	// (0x0005b092) cam6_zoom_cont_pane_g1

0x3cf7,	// (0x0005b09b) cam6_zoom_cont_pane_g2

0x3d00,	// (0x0005b0a4) cam6_zoom_cont_pane_g3

0x0002,

0xfbdd,	// (0x00066f81) cam6_zoom_cont_pane_g

0xd61a,	// (0x000649be) cam6_mode_pane_cp_ParamLimits

0xd61a,	// (0x000649be) cam6_mode_pane_cp

0xd5c3,	// (0x00064967) cam6_zoom_pane_cp_ParamLimits

0xd5c3,	// (0x00064967) cam6_zoom_pane_cp

0xd62e,	// (0x000649d2) vid6_image_uncrop_cif_pane_ParamLimits

0xd62e,	// (0x000649d2) vid6_image_uncrop_cif_pane

0xd650,	// (0x000649f4) vid6_image_uncrop_nhd_pane_ParamLimits

0xd650,	// (0x000649f4) vid6_image_uncrop_nhd_pane

0xd566,	// (0x0006490a) vid6_image_uncrop_vga_pane_ParamLimits

0xd566,	// (0x0006490a) vid6_image_uncrop_vga_pane

0xd667,	// (0x00064a0b) vid6_image_uncrop_wvga_pane_ParamLimits

0xd667,	// (0x00064a0b) vid6_image_uncrop_wvga_pane

0xd67e,	// (0x00064a22) vid6_indi_pane_ParamLimits

0xd67e,	// (0x00064a22) vid6_indi_pane

0x3c40,	// (0x0005afe4) bg_tb_trans_pane_cp09_ParamLimits

0x3c40,	// (0x0005afe4) bg_tb_trans_pane_cp09

0x3d14,	// (0x0005b0b8) cam6_battery_pane_cp_ParamLimits

0x3d14,	// (0x0005b0b8) cam6_battery_pane_cp

0x3d20,	// (0x0005b0c4) vid6_indi_pane_g1_ParamLimits

0x3d20,	// (0x0005b0c4) vid6_indi_pane_g1

0x3d32,	// (0x0005b0d6) vid6_indi_pane_g2_ParamLimits

0x3d32,	// (0x0005b0d6) vid6_indi_pane_g2

0x3d44,	// (0x0005b0e8) vid6_indi_pane_g3_ParamLimits

0x3d44,	// (0x0005b0e8) vid6_indi_pane_g3

0x3d59,	// (0x0005b0fd) vid6_indi_pane_g4_ParamLimits

0x3d59,	// (0x0005b0fd) vid6_indi_pane_g4

0x3d6e,	// (0x0005b112) vid6_indi_pane_g5_ParamLimits

0x3d6e,	// (0x0005b112) vid6_indi_pane_g5

0x0004,

0xfbe4,	// (0x00066f88) vid6_indi_pane_g_ParamLimits

0xfbe4,	// (0x00066f88) vid6_indi_pane_g

0x3d88,	// (0x0005b12c) vid6_indi_pane_t1_ParamLimits

0x3d88,	// (0x0005b12c) vid6_indi_pane_t1

0x3d9e,	// (0x0005b142) vid6_indi_pane_t2_ParamLimits

0x3d9e,	// (0x0005b142) vid6_indi_pane_t2

0x3dc6,	// (0x0005b16a) vid6_indi_pane_t3_ParamLimits

0x3dc6,	// (0x0005b16a) vid6_indi_pane_t3

0x3dee,	// (0x0005b192) vid6_indi_pane_t4_ParamLimits

0x3dee,	// (0x0005b192) vid6_indi_pane_t4

0x0003,

0xfbef,	// (0x00066f93) vid6_indi_pane_t_ParamLimits

0xfbef,	// (0x00066f93) vid6_indi_pane_t

0x3e12,	// (0x0005b1b6) wait_bar_pane_cp08

0xd69e,	// (0x00064a42) main_cset_text2_pane_t1_ParamLimits

0xd69e,	// (0x00064a42) main_cset_text2_pane_t1

0xd605,	// (0x000649a9) listscroll_gen_pane_cp06_t1_ParamLimits

0xd605,	// (0x000649a9) listscroll_gen_pane_cp06_t1

0x7393,	// (0x0005e737) main_cam6_set_pane

0x2d69,	// (0x0005a10d) bg_tb_trans_pane_cp06_ParamLimits

0xc3c9,	// (0x0006376d) cam4_indicators_pane_g1_ParamLimits

0xc3d9,	// (0x0006377d) cam4_indicators_pane_g2_ParamLimits

0xf963,	// (0x00066d07) cam4_indicators_pane_g_ParamLimits

0xc3f9,	// (0x0006379d) cam4_indicators_pane_t1_ParamLimits

0xa642,	// (0x000619e6) bg_tb_trans_pane_cp07_ParamLimits

0xc3c9,	// (0x0006376d) vid4_indicators_pane_g1_ParamLimits

0xc491,	// (0x00063835) vid4_indicators_pane_g2_ParamLimits

0xc4a1,	// (0x00063845) vid4_indicators_pane_g3_ParamLimits

0xc4b2,	// (0x00063856) vid4_indicators_pane_g4_ParamLimits

0xf975,	// (0x00066d19) vid4_indicators_pane_g_ParamLimits

0xc4ce,	// (0x00063872) vid4_indicators_pane_t1_ParamLimits

0xd1be,	// (0x00064562) vid4_progress_pane_g1_ParamLimits

0xd1cd,	// (0x00064571) vid4_progress_pane_g2_ParamLimits

0xd1dc,	// (0x00064580) vid4_progress_pane_g3_ParamLimits

0xd1eb,	// (0x0006458f) vid4_progress_pane_g4_ParamLimits

0xfb20,	// (0x00066ec4) vid4_progress_pane_g_ParamLimits

0xd1f7,	// (0x0006459b) vid4_progress_pane_t1_ParamLimits

0xd20d,	// (0x000645b1) vid4_progress_pane_t2_ParamLimits

0xd222,	// (0x000645c6) vid4_progress_pane_t3_ParamLimits

0xfb2b,	// (0x00066ecf) vid4_progress_pane_t_ParamLimits

0xd237,	// (0x000645db) wait_bar_pane_cp07_ParamLimits

0xd6ba,	// (0x00064a5e) main_cam6_set_pane_g2_ParamLimits

0xd6ba,	// (0x00064a5e) main_cam6_set_pane_g2

0xd6c6,	// (0x00064a6a) main_cset6_listscroll_pane_ParamLimits

0xd6c6,	// (0x00064a6a) main_cset6_listscroll_pane

0xd6ef,	// (0x00064a93) main_cset6_slider_pane_ParamLimits

0xd6ef,	// (0x00064a93) main_cset6_slider_pane

0xd6fb,	// (0x00064a9f) main_cset6_text2_pane_ParamLimits

0xd6fb,	// (0x00064a9f) main_cset6_text2_pane

0x3e22,	// (0x0005b1c6) main_cset6_text_pane

0x363f,	// (0x0005a9e3) main_cset_list_pane_copy1_ParamLimits

0x363f,	// (0x0005a9e3) main_cset_list_pane_copy1

0x364f,	// (0x0005a9f3) scroll_pane_cp028_copy1

0xd70e,	// (0x00064ab2) cset_list_set_pane_copy1

0xcc34,	// (0x00063fd8) aid_position_infowindow_above_copy1

0xcc3c,	// (0x00063fe0) aid_position_infowindow_below_copy1

0xd71d,	// (0x00064ac1) cset_list_set_pane_g1_copy1

0x6a64,	// (0x0005de08) cset_list_set_pane_g3_copy1_ParamLimits

0x6a64,	// (0x0005de08) cset_list_set_pane_g3_copy1

0x6a73,	// (0x0005de17) cset_list_set_pane_t1_copy1_ParamLimits

0x6a73,	// (0x0005de17) cset_list_set_pane_t1_copy1

0xa642,	// (0x000619e6) list_highlight_pane_cp021_copy1_ParamLimits

0xa642,	// (0x000619e6) list_highlight_pane_cp021_copy1

0x3e2a,	// (0x0005b1ce) cset6_slider_pane_ParamLimits

0x3e2a,	// (0x0005b1ce) cset6_slider_pane

0x3e56,	// (0x0005b1fa) main_cset6_slider_pane_g1_ParamLimits

0x3e56,	// (0x0005b1fa) main_cset6_slider_pane_g1

0xd725,	// (0x00064ac9) main_cset6_slider_pane_g2_ParamLimits

0xd725,	// (0x00064ac9) main_cset6_slider_pane_g2

0x3664,	// (0x0005aa08) main_cset6_slider_pane_g3_ParamLimits

0x3664,	// (0x0005aa08) main_cset6_slider_pane_g3

0xd74d,	// (0x00064af1) main_cset6_slider_pane_g4_ParamLimits

0xd74d,	// (0x00064af1) main_cset6_slider_pane_g4

0xd759,	// (0x00064afd) main_cset6_slider_pane_g5_ParamLimits

0xd759,	// (0x00064afd) main_cset6_slider_pane_g5

0x3664,	// (0x0005aa08) main_cset6_slider_pane_g7_ParamLimits

0x3664,	// (0x0005aa08) main_cset6_slider_pane_g7

0x3670,	// (0x0005aa14) main_cset6_slider_pane_g8_ParamLimits

0x3670,	// (0x0005aa14) main_cset6_slider_pane_g8

0xd765,	// (0x00064b09) main_cset6_slider_pane_g9_ParamLimits

0xd765,	// (0x00064b09) main_cset6_slider_pane_g9

0xd771,	// (0x00064b15) main_cset6_slider_pane_g10_ParamLimits

0xd771,	// (0x00064b15) main_cset6_slider_pane_g10

0xd74d,	// (0x00064af1) main_cset6_slider_pane_g11_ParamLimits

0xd74d,	// (0x00064af1) main_cset6_slider_pane_g11

0xd77d,	// (0x00064b21) main_cset6_slider_pane_g12_ParamLimits

0xd77d,	// (0x00064b21) main_cset6_slider_pane_g12

0xd789,	// (0x00064b2d) main_cset6_slider_pane_g13_ParamLimits

0xd789,	// (0x00064b2d) main_cset6_slider_pane_g13

0xd795,	// (0x00064b39) main_cset6_slider_pane_g14_ParamLimits

0xd795,	// (0x00064b39) main_cset6_slider_pane_g14

0xd7a1,	// (0x00064b45) main_cset6_slider_pane_g15_ParamLimits

0xd7a1,	// (0x00064b45) main_cset6_slider_pane_g15

0xd759,	// (0x00064afd) main_cset6_slider_pane_g16_ParamLimits

0xd759,	// (0x00064afd) main_cset6_slider_pane_g16

0xd7b9,	// (0x00064b5d) main_cset6_slider_pane_g17_ParamLimits

0xd7b9,	// (0x00064b5d) main_cset6_slider_pane_g17

0x0011,

0xfbf8,	// (0x00066f9c) main_cset6_slider_pane_g_ParamLimits

0xfbf8,	// (0x00066f9c) main_cset6_slider_pane_g

0x3e7e,	// (0x0005b222) main_cset6_slider_pane_t1_ParamLimits

0x3e7e,	// (0x0005b222) main_cset6_slider_pane_t1

0xd7c5,	// (0x00064b69) main_cset6_slider_pane_t2_ParamLimits

0xd7c5,	// (0x00064b69) main_cset6_slider_pane_t2

0x3ebf,	// (0x0005b263) main_cset6_slider_pane_t3_ParamLimits

0x3ebf,	// (0x0005b263) main_cset6_slider_pane_t3

0xd7f0,	// (0x00064b94) main_cset6_slider_pane_t4_ParamLimits

0xd7f0,	// (0x00064b94) main_cset6_slider_pane_t4

0x3eea,	// (0x0005b28e) main_cset6_slider_pane_t5_ParamLimits

0x3eea,	// (0x0005b28e) main_cset6_slider_pane_t5

0x3f15,	// (0x0005b2b9) main_cset6_slider_pane_t7_ParamLimits

0x3f15,	// (0x0005b2b9) main_cset6_slider_pane_t7

0xd81b,	// (0x00064bbf) main_cset6_slider_pane_t8_ParamLimits

0xd81b,	// (0x00064bbf) main_cset6_slider_pane_t8

0xd83f,	// (0x00064be3) main_cset6_slider_pane_t9_ParamLimits

0xd83f,	// (0x00064be3) main_cset6_slider_pane_t9

0xd863,	// (0x00064c07) main_cset6_slider_pane_t10_ParamLimits

0xd863,	// (0x00064c07) main_cset6_slider_pane_t10

0xd887,	// (0x00064c2b) main_cset6_slider_pane_t11_ParamLimits

0xd887,	// (0x00064c2b) main_cset6_slider_pane_t11

0x3f4b,	// (0x0005b2ef) main_cset6_slider_pane_t14_ParamLimits

0x3f4b,	// (0x0005b2ef) main_cset6_slider_pane_t14

0x3f84,	// (0x0005b328) main_cset6_slider_pane_t15_ParamLimits

0x3f84,	// (0x0005b328) main_cset6_slider_pane_t15

0x000b,

0xfc1d,	// (0x00066fc1) main_cset6_slider_pane_t_ParamLimits

0xfc1d,	// (0x00066fc1) main_cset6_slider_pane_t

0x3fbd,	// (0x0005b361) cset_slider_pane_g1_copy1

0x3fc6,	// (0x0005b36a) cset_slider_pane_g2_copy1

0x3fcf,	// (0x0005b373) cset_slider_pane_g3_copy1

0x7393,	// (0x0005e737) bg_popup_sub_pane_cp011_copy1

0x37c9,	// (0x0005ab6d) main_cset_text_pane_g1_copy1

0x37d1,	// (0x0005ab75) main_cset_text_pane_t1_copy1

0x37df,	// (0x0005ab83) main_cset_text_pane_t2_copy1

0x37ed,	// (0x0005ab91) main_cset_text_pane_t3_copy1

0x37fb,	// (0x0005ab9f) main_cset_text_pane_t4_copy1

0x3809,	// (0x0005abad) main_cset_text_pane_t5_copy1

0x3817,	// (0x0005abbb) main_cset_text_pane_t6_copy1

0x3825,	// (0x0005abc9) main_cset_text_pane_t7_copy1

0xd8ab,	// (0x00064c4f) main_cset_text2_pane_t1_copy1

0x7393,	// (0x0005e737) main_ncimui_pane

0xa68b,	// (0x00061a2f) popup_query_ncimui_window_ParamLimits

0xa68b,	// (0x00061a2f) popup_query_ncimui_window

0xb12a,	// (0x000624ce) field_cale_ev2_pane_g4_ParamLimits

0xb12a,	// (0x000624ce) field_cale_ev2_pane_g4

0xbdc4,	// (0x00063168) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbdc4,	// (0x00063168) cell_video_dialer_keypad_pane_g2

0x0001,

0xf90a,	// (0x00066cae) cell_video_dialer_keypad_pane_g_ParamLimits

0xf90a,	// (0x00066cae) cell_video_dialer_keypad_pane_g

0xbddc,	// (0x00063180) cell_video_dialer_keypad_pane_t1

0x7393,	// (0x0005e737) bg_popup_window_pane_cp012

0x0fa2,	// (0x00058346) heading_pane_cp06

0x40c1,	// (0x0005b465) ncim_query_content_pane

0x7393,	// (0x0005e737) bg_popup_heading_pane_cp01

0x40c9,	// (0x0005b46d) ncim_heading_pane_t1

0x40d7,	// (0x0005b47b) ncim_indicator_popup_pane

0x40e9,	// (0x0005b48d) ncim_query_button_pane

0x40fd,	// (0x0005b4a1) ncim_query_content_pane_t1

0x410f,	// (0x0005b4b3) ncim_query_content_pane_t2

0x0005,

0xfc5c,	// (0x00067000) ncim_query_content_pane_t

0x4149,	// (0x0005b4ed) ncim_query_list_pane

0x415b,	// (0x0005b4ff) ncim_query_popup_pane

0x40d7,	// (0x0005b47b) ncim_indicator_popup_pane_ParamLimits

0xd98c,	// (0x00064d30) ncim_query_content_pane_g1_ParamLimits

0xd98c,	// (0x00064d30) ncim_query_content_pane_g1

0x40fd,	// (0x0005b4a1) ncim_query_content_pane_t1_ParamLimits

0x410f,	// (0x0005b4b3) ncim_query_content_pane_t2_ParamLimits

0xd998,	// (0x00064d3c) ncim_query_content_pane_t3_ParamLimits

0xd998,	// (0x00064d3c) ncim_query_content_pane_t3

0xd9b5,	// (0x00064d59) ncim_query_content_pane_t4_ParamLimits

0xd9b5,	// (0x00064d59) ncim_query_content_pane_t4

0xd9d2,	// (0x00064d76) ncim_query_content_pane_t5_ParamLimits

0xd9d2,	// (0x00064d76) ncim_query_content_pane_t5

0x4121,	// (0x0005b4c5) ncim_query_content_pane_t6_ParamLimits

0x4121,	// (0x0005b4c5) ncim_query_content_pane_t6

0xfc5c,	// (0x00067000) ncim_query_content_pane_t_ParamLimits

0x4149,	// (0x0005b4ed) ncim_query_list_pane_ParamLimits

0x415b,	// (0x0005b4ff) ncim_query_popup_pane_ParamLimits

0x416f,	// (0x0005b513) wait_bar_pane_cp04

0x7393,	// (0x0005e737) input_focus_pane_cp011

0x4177,	// (0x0005b51b) ncim_query_popup_pane_t1

0x4185,	// (0x0005b529) ncim_list_query_list_pane_ParamLimits

0x4185,	// (0x0005b529) ncim_list_query_list_pane

0x7393,	// (0x0005e737) bg_button_pane_cp027

0x4198,	// (0x0005b53c) ncim_query_button_pane_g1

0x7393,	// (0x0005e737) list_highlight_pane_cp012

0x41a2,	// (0x0005b546) ncim_list_query_list_pane_g1

0x41aa,	// (0x0005b54e) ncim_list_query_list_pane_t1

0xc3e9,	// (0x0006378d) cam4_indicators_pane_g3_ParamLimits

0xc3e9,	// (0x0006378d) cam4_indicators_pane_g3

0xc4be,	// (0x00063862) vid4_indicators_pane_g5_ParamLimits

0xc4be,	// (0x00063862) vid4_indicators_pane_g5

0x0d46,	// (0x000580ea) vid4_progress_pane_g5_ParamLimits

0x0d46,	// (0x000580ea) vid4_progress_pane_g5

0xd8d6,	// (0x00064c7a) main_ncimui_pane_g1

0xd91c,	// (0x00064cc0) ncimui_group_query_pane_ParamLimits

0xd91c,	// (0x00064cc0) ncimui_group_query_pane

0xd950,	// (0x00064cf4) ncimui_list_pane_ParamLimits

0xd950,	// (0x00064cf4) ncimui_list_pane

0xd968,	// (0x00064d0c) ncimui_text_pane_ParamLimits

0xd968,	// (0x00064d0c) ncimui_text_pane

0xd9ef,	// (0x00064d93) ncimui_text_pane_t1_ParamLimits

0xd9ef,	// (0x00064d93) ncimui_text_pane_t1

0x41b8,	// (0x0005b55c) ncimui_list_single_graphic_pane_ParamLimits

0x41b8,	// (0x0005b55c) ncimui_list_single_graphic_pane

0xda0d,	// (0x00064db1) ncimui_query_pane_ParamLimits

0xda0d,	// (0x00064db1) ncimui_query_pane

0x7393,	// (0x0005e737) list_highlight_pane_cp013

0x41c5,	// (0x0005b569) ncim_list_query_list_pane_t1_copy1

0x41d3,	// (0x0005b577) ncim_list_single_graphic_pane_g1

0x41db,	// (0x0005b57f) ncim_query_button_pane_cp01

0x41e3,	// (0x0005b587) ncim_query_entry_pane_ParamLimits

0x41e3,	// (0x0005b587) ncim_query_entry_pane

0x41f3,	// (0x0005b597) ncimui_query_pane_g1

0x41fb,	// (0x0005b59f) ncimui_query_pane_t1_ParamLimits

0x41fb,	// (0x0005b59f) ncimui_query_pane_t1

0x7393,	// (0x0005e737) input_focus_pane_cp012

0x4177,	// (0x0005b51b) ncim_query_entry_pane_t1

0x8040,	// (0x0005f3e4) main_im_pane_ParamLimits

0xa642,	// (0x000619e6) main_mobtv_pane_ParamLimits

0xa642,	// (0x000619e6) main_mobtv_pane

0xd765,	// (0x00064b09) main_cset6_slider_pane_g18_ParamLimits

0xd765,	// (0x00064b09) main_cset6_slider_pane_g18

0xd789,	// (0x00064b2d) main_cset6_slider_pane_g19_ParamLimits

0xd789,	// (0x00064b2d) main_cset6_slider_pane_g19

0x34f0,	// (0x0005a894) bg_main_mobtv_pane_ParamLimits

0x34f0,	// (0x0005a894) bg_main_mobtv_pane

0xda1d,	// (0x00064dc1) main_mobtv_info_pane

0xda26,	// (0x00064dca) main_mobtv_loading_pane_ParamLimits

0xda26,	// (0x00064dca) main_mobtv_loading_pane

0x421f,	// (0x0005b5c3) main_mobtv_pg_channel_list_pane

0x4229,	// (0x0005b5cd) main_mobtv_pg_hdr_pane

0xda33,	// (0x00064dd7) main_mobtv_programe_curr_pane_ParamLimits

0xda33,	// (0x00064dd7) main_mobtv_programe_curr_pane

0xda40,	// (0x00064de4) main_mobtv_programe_next_pane_ParamLimits

0xda40,	// (0x00064de4) main_mobtv_programe_next_pane

0x4232,	// (0x0005b5d6) popup_mobtv_noti_window

0x2b3a,	// (0x00059ede) main_tv_pg_hdr_pane_g1

0x423a,	// (0x0005b5de) main_tv_pg_hdr_pane_g2

0x4242,	// (0x0005b5e6) main_tv_pg_hdr_pane_g3

0x424a,	// (0x0005b5ee) main_tv_pg_hdr_pane_g4

0x4252,	// (0x0005b5f6) main_tv_pg_hdr_pane_g5

0x425a,	// (0x0005b5fe) main_tv_pg_hdr_pane_g6

0x4262,	// (0x0005b606) main_tv_pg_hdr_pane_g7

0x426a,	// (0x0005b60e) main_tv_pg_hdr_pane_g8

0x4272,	// (0x0005b616) main_tv_pg_hdr_pane_g9

0x427a,	// (0x0005b61e) main_tv_pg_hdr_pane_g10

0x4284,	// (0x0005b628) main_tv_pg_hdr_pane_g11

0x000a,

0xfc69,	// (0x0006700d) main_tv_pg_hdr_pane_g

0x428e,	// (0x0005b632) main_tv_pg_hdr_pane_t1

0x429c,	// (0x0005b640) main_tv_pg_hdr_pane_t2

0x42aa,	// (0x0005b64e) main_tv_pg_hdr_pane_t3

0x42b8,	// (0x0005b65c) main_tv_pg_hdr_pane_t4

0x42c6,	// (0x0005b66a) main_tv_pg_hdr_pane_t5

0x0004,

0xfc80,	// (0x00067024) main_tv_pg_hdr_pane_t

0x42d4,	// (0x0005b678) single_mobtv_pg_channel_pane_ParamLimits

0x42d4,	// (0x0005b678) single_mobtv_pg_channel_pane

0x42e6,	// (0x0005b68a) single_mobtv_pg_channel_table_pane

0x42ef,	// (0x0005b693) single_mobtv_pg_channel_thumb_pane

0x42f8,	// (0x0005b69c) single_tv_pg_channel_pane_g1

0x4301,	// (0x0005b6a5) single_tv_pg_channel_pane_g2

0x0001,

0xfc8b,	// (0x0006702f) single_tv_pg_channel_pane_g

0x2d69,	// (0x0005a10d) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2d69,	// (0x0005a10d) bg_single_mobtv_pg_channel_thumb_pane

0x430a,	// (0x0005b6ae) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x430a,	// (0x0005b6ae) single_mobtv_pg_channel_thumb_pane_g1

0x4318,	// (0x0005b6bc) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x4318,	// (0x0005b6bc) single_mobtv_pg_channel_thumb_pane_g2

0x4324,	// (0x0005b6c8) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x4324,	// (0x0005b6c8) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc90,	// (0x00067034) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc90,	// (0x00067034) single_mobtv_pg_channel_thumb_pane_g

0x4330,	// (0x0005b6d4) single_mobtv_pg_channel_thumb_pane_t1

0x433e,	// (0x0005b6e2) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc97,	// (0x0006703b) single_mobtv_pg_channel_thumb_pane_t

0x2b3a,	// (0x00059ede) bg_single_mobtv_pg_channel_table_pane_g1

0x2b3a,	// (0x00059ede) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf756,	// (0x00066afa) bg_single_mobtv_pg_channel_table_pane_g

0x434c,	// (0x0005b6f0) single_mobtv_pg_channel_table_pane_t1

0x435a,	// (0x0005b6fe) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc9c,	// (0x00067040) single_mobtv_pg_channel_table_pane_t

0xda55,	// (0x00064df9) main_mobtv_info_pane_g1_ParamLimits

0xda55,	// (0x00064df9) main_mobtv_info_pane_g1

0xda71,	// (0x00064e15) main_mobtv_info_pane_t1_ParamLimits

0xda71,	// (0x00064e15) main_mobtv_info_pane_t1

0xdad7,	// (0x00064e7b) main_mobtv_info_pane_t2_ParamLimits

0xdad7,	// (0x00064e7b) main_mobtv_info_pane_t2

0x0002,

0xfca6,	// (0x0006704a) main_mobtv_info_pane_t_ParamLimits

0xfca6,	// (0x0006704a) main_mobtv_info_pane_t

0xdb5a,	// (0x00064efe) wait_bar_pane_cp05

0xdb6a,	// (0x00064f0e) main_mobtv_loading_pane_g1_ParamLimits

0xdb6a,	// (0x00064f0e) main_mobtv_loading_pane_g1

0xdb76,	// (0x00064f1a) main_mobtv_loading_pane_g2_ParamLimits

0xdb76,	// (0x00064f1a) main_mobtv_loading_pane_g2

0xdb82,	// (0x00064f26) main_mobtv_loading_pane_g3_ParamLimits

0xdb82,	// (0x00064f26) main_mobtv_loading_pane_g3

0x0002,

0xfcad,	// (0x00067051) main_mobtv_loading_pane_g_ParamLimits

0xfcad,	// (0x00067051) main_mobtv_loading_pane_g

0x4368,	// (0x0005b70c) main_mobtv_loading_pane_t1_ParamLimits

0x4368,	// (0x0005b70c) main_mobtv_loading_pane_t1

0x4380,	// (0x0005b724) main_mobtv_loading_pane_t2_ParamLimits

0x4380,	// (0x0005b724) main_mobtv_loading_pane_t2

0x0001,

0xfcb4,	// (0x00067058) main_mobtv_loading_pane_t_ParamLimits

0xfcb4,	// (0x00067058) main_mobtv_loading_pane_t

0xdb8e,	// (0x00064f32) wait_bar_pane_cp06_ParamLimits

0xdb8e,	// (0x00064f32) wait_bar_pane_cp06

0x43a4,	// (0x0005b748) main_mobtv_programe_curr_pane_t1

0x43b2,	// (0x0005b756) main_mobtv_programe_curr_pane_t2

0x0001,

0xfcb9,	// (0x0006705d) main_mobtv_programe_curr_pane_t

0x43c0,	// (0x0005b764) main_mobtv_programe_next_pane_t1

0x43ce,	// (0x0005b772) main_mobtv_programe_next_pane_t2

0x43dc,	// (0x0005b780) main_mobtv_programe_next_pane_t3

0x0002,

0xfcbe,	// (0x00067062) main_mobtv_programe_next_pane_t

0x7393,	// (0x0005e737) bg_popup_mobtv_noti_window_pane

0x43ea,	// (0x0005b78e) popup_mobtv_noti_window_g1

0x43f2,	// (0x0005b796) popup_mobtv_noti_window_t1

0x4400,	// (0x0005b7a4) popup_mobtv_noti_window_t2

0x0001,

0xfcc5,	// (0x00067069) popup_mobtv_noti_window_t

0x2b3a,	// (0x00059ede) bg_popup_mobtv_noti_window_pane_g1

0x7393,	// (0x0005e737) sc_clock_pane

0x7393,	// (0x0005e737) main_fs_bigclock_pane

0xd3ff,	// (0x000647a3) blid2_tripm_pane_t4_ParamLimits

0xd3ff,	// (0x000647a3) blid2_tripm_pane_t4

0xdb9a,	// (0x00064f3e) sc_clock_pane_g1_ParamLimits

0xdb9a,	// (0x00064f3e) sc_clock_pane_g1

0xdba8,	// (0x00064f4c) sc_clock_pane_t1_ParamLimits

0xdba8,	// (0x00064f4c) sc_clock_pane_t1

0xdbbb,	// (0x00064f5f) sc_clock_pane_t2_ParamLimits

0xdbbb,	// (0x00064f5f) sc_clock_pane_t2

0xdbcd,	// (0x00064f71) sc_clock_pane_t3_ParamLimits

0xdbcd,	// (0x00064f71) sc_clock_pane_t3

0x0004,

0xfcca,	// (0x0006706e) sc_clock_pane_t_ParamLimits

0xfcca,	// (0x0006706e) sc_clock_pane_t

0xe92c,	// (0x00065cd0) main_fs_bigclock_indicator_pane_ParamLimits

0xe92c,	// (0x00065cd0) main_fs_bigclock_indicator_pane

0xdc45,	// (0x00064fe9) main_fs_bigclock_pane_g1_ParamLimits

0xdc45,	// (0x00064fe9) main_fs_bigclock_pane_g1

0xe938,	// (0x00065cdc) main_fs_bigclock_pane_t1_ParamLimits

0xe938,	// (0x00065cdc) main_fs_bigclock_pane_t1

0xe94a,	// (0x00065cee) main_fs_bigclock_pane_t2_ParamLimits

0xe94a,	// (0x00065cee) main_fs_bigclock_pane_t2

0xe95c,	// (0x00065d00) main_fs_bigclock_pane_t3_ParamLimits

0xe95c,	// (0x00065d00) main_fs_bigclock_pane_t3

0x0002,

0xfec4,	// (0x00067268) main_fs_bigclock_pane_t_ParamLimits

0xfec4,	// (0x00067268) main_fs_bigclock_pane_t

0xe96e,	// (0x00065d12) main_fs_bigclock_indicator_pane_g1

0x40f1,	// (0x0005b495) ncim_query_content_pane_g2_ParamLimits

0x40f1,	// (0x0005b495) ncim_query_content_pane_g2

0x0001,

0xfc57,	// (0x00066ffb) ncim_query_content_pane_g_ParamLimits

0xfc57,	// (0x00066ffb) ncim_query_content_pane_g

0xdbdf,	// (0x00064f83) sc_clock_pane_t4_ParamLimits

0xdbdf,	// (0x00064f83) sc_clock_pane_t4

0xa642,	// (0x000619e6) main_radioblah_pane

0x3461,	// (0x0005a805) cell_call4_button_pane_t1_copy1_ParamLimits

0x3461,	// (0x0005a805) cell_call4_button_pane_t1_copy1

0xd8de,	// (0x00064c82) main_ncimui_pane_t1_ParamLimits

0xd8de,	// (0x00064c82) main_ncimui_pane_t1

0xd8f0,	// (0x00064c94) main_ncimui_pane_t2_ParamLimits

0xd8f0,	// (0x00064c94) main_ncimui_pane_t2

0x0002,

0xfc50,	// (0x00066ff4) main_ncimui_pane_t_ParamLimits

0xfc50,	// (0x00066ff4) main_ncimui_pane_t

0x452a,	// (0x0005b8ce) main_radioblah_anim_pane_ParamLimits

0x452a,	// (0x0005b8ce) main_radioblah_anim_pane

0x453b,	// (0x0005b8df) main_radioblah_info_pane_ParamLimits

0x453b,	// (0x0005b8df) main_radioblah_info_pane

0x454f,	// (0x0005b8f3) main_radioblah_pane_t1_ParamLimits

0x454f,	// (0x0005b8f3) main_radioblah_pane_t1

0x456b,	// (0x0005b90f) main_radioblah_pane_t2_ParamLimits

0x456b,	// (0x0005b90f) main_radioblah_pane_t2

0x0003,

0xfceb,	// (0x0006708f) main_radioblah_pane_t_ParamLimits

0xfceb,	// (0x0006708f) main_radioblah_pane_t

0xdc8d,	// (0x00065031) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdc8d,	// (0x00065031) main_radioblah_rocker_ctrl_pane

0x45b3,	// (0x0005b957) main_radioblah_info_pane_t1_ParamLimits

0x45b3,	// (0x0005b957) main_radioblah_info_pane_t1

0xdcd2,	// (0x00065076) main_radioblah_info_pane_t2_ParamLimits

0xdcd2,	// (0x00065076) main_radioblah_info_pane_t2

0x0003,

0xfcf4,	// (0x00067098) main_radioblah_info_pane_t_ParamLimits

0xfcf4,	// (0x00067098) main_radioblah_info_pane_t

0x2b3a,	// (0x00059ede) main_radioblah_rocker_ctrl_pane_g1

0xdd7a,	// (0x0006511e) main_radioblah_rocker_ctrl_pane_g2

0xdd82,	// (0x00065126) main_radioblah_rocker_ctrl_pane_g3

0xdd8a,	// (0x0006512e) main_radioblah_rocker_ctrl_pane_g4

0xdd92,	// (0x00065136) main_radioblah_rocker_ctrl_pane_g5

0xdd9a,	// (0x0006513e) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcfd,	// (0x000670a1) main_radioblah_rocker_ctrl_pane_g

0xd8ab,	// (0x00064c4f) main_cset_text2_pane_t1_copy1_ParamLimits

0xc331,	// (0x000636d5) cam4_image_uncrop_qvga_pane

0xc451,	// (0x000637f5) vid4_image_uncrop_qcif_pane

0xd57d,	// (0x00064921) cam6_image_uncrop_qvga_pane_ParamLimits

0xd57d,	// (0x00064921) cam6_image_uncrop_qvga_pane

0x3d08,	// (0x0005b0ac) vid6_image_uncrop_qcif_pane_ParamLimits

0x3d08,	// (0x0005b0ac) vid6_image_uncrop_qcif_pane

0x7393,	// (0x0005e737) bg_popup_preview_window_pane_cp03

0x40a3,	// (0x0005b447) list_cset_text2_pane

0x40ab,	// (0x0005b44f) main_cset6_text2_pane_g1

0x40b3,	// (0x0005b457) main_cset6_text2_pane_t1

0xdda2,	// (0x00065146) list_cset_text2_pane_t1_ParamLimits

0xdda2,	// (0x00065146) list_cset_text2_pane_t1

0xa642,	// (0x000619e6) main_radioblah_pane_ParamLimits

0xdb48,	// (0x00064eec) main_mobtv_info_pane_t3_ParamLimits

0xdb48,	// (0x00064eec) main_mobtv_info_pane_t3

0xdc7b,	// (0x0006501f) main_radioblah_pane_g1

0xdca6,	// (0x0006504a) main_radioblah_info_pane_g1

0xdd21,	// (0x000650c5) main_radioblah_info_pane_t3_ParamLimits

0xdd21,	// (0x000650c5) main_radioblah_info_pane_t3

0x96d8,	// (0x00060a7c) highlight_cell_cale_month_pane_ParamLimits

0x96d8,	// (0x00060a7c) highlight_cell_cale_month_pane

0x7393,	// (0x0005e737) main_phob_fisheye_pane

0x2eb3,	// (0x0005a257) scroll_pane_cp0031_ParamLimits

0x2eb3,	// (0x0005a257) scroll_pane_cp0031

0x3e12,	// (0x0005b1b6) wait_bar_pane_cp08_ParamLimits

0xd70e,	// (0x00064ab2) cset_list_set_pane_copy1_ParamLimits

0x45ed,	// (0x0005b991) highlight_cell_cale_month_pane_g1

0xddb9,	// (0x0006515d) highlight_cell_cale_month_pane_t1

0x45f5,	// (0x0005b999) list_gen_pane_cp01

0x364f,	// (0x0005a9f3) scroll_pane_01

0xddc7,	// (0x0006516b) list_single_double_fisheye_pane

0x6b53,	// (0x0005def7) list_double_fisheye_pane_g1_ParamLimits

0x6b53,	// (0x0005def7) list_double_fisheye_pane_g1

0xddd0,	// (0x00065174) list_double_fisheye_pane_g2_ParamLimits

0xddd0,	// (0x00065174) list_double_fisheye_pane_g2

0xdde4,	// (0x00065188) list_double_fisheye_pane_g3_ParamLimits

0xdde4,	// (0x00065188) list_double_fisheye_pane_g3

0x0004,

0xfd0a,	// (0x000670ae) list_double_fisheye_pane_g_ParamLimits

0xfd0a,	// (0x000670ae) list_double_fisheye_pane_g

0x6b6b,	// (0x0005df0f) list_double_fisheye_pane_t1_ParamLimits

0x6b6b,	// (0x0005df0f) list_double_fisheye_pane_t1

0x6b86,	// (0x0005df2a) list_double_fisheye_pane_t2_ParamLimits

0x6b86,	// (0x0005df2a) list_double_fisheye_pane_t2

0x0001,

0xfd15,	// (0x000670b9) list_double_fisheye_pane_t_ParamLimits

0xfd15,	// (0x000670b9) list_double_fisheye_pane_t

0x7393,	// (0x0005e737) main_call5_pane

0xdc05,	// (0x00064fa9) sc_swipe_pane_ParamLimits

0xdc05,	// (0x00064fa9) sc_swipe_pane

0xde0d,	// (0x000651b1) call5_image_pane_ParamLimits

0xde0d,	// (0x000651b1) call5_image_pane

0xde19,	// (0x000651bd) call5_swipe_1_pane_ParamLimits

0xde19,	// (0x000651bd) call5_swipe_1_pane

0xde25,	// (0x000651c9) call5_swipe_2_pane_ParamLimits

0xde25,	// (0x000651c9) call5_swipe_2_pane

0xde3d,	// (0x000651e1) popup_call5_audio_first_window_ParamLimits

0xde3d,	// (0x000651e1) popup_call5_audio_first_window

0x2d69,	// (0x0005a10d) call5_swipe_1_pane_g1_ParamLimits

0x2d69,	// (0x0005a10d) call5_swipe_1_pane_g1

0xde49,	// (0x000651ed) call5_swipe_1_pane_g2_ParamLimits

0xde49,	// (0x000651ed) call5_swipe_1_pane_g2

0x0001,

0xfd1a,	// (0x000670be) call5_swipe_1_pane_g_ParamLimits

0xfd1a,	// (0x000670be) call5_swipe_1_pane_g

0xde55,	// (0x000651f9) call5_swipe_1_pane_t1_ParamLimits

0xde55,	// (0x000651f9) call5_swipe_1_pane_t1

0x2d69,	// (0x0005a10d) call5_swipe_2_pane_g1_ParamLimits

0x2d69,	// (0x0005a10d) call5_swipe_2_pane_g1

0xde6a,	// (0x0006520e) call5_swipe_2_pane_g2_ParamLimits

0xde6a,	// (0x0006520e) call5_swipe_2_pane_g2

0x0001,

0xfd1f,	// (0x000670c3) call5_swipe_2_pane_g_ParamLimits

0xfd1f,	// (0x000670c3) call5_swipe_2_pane_g

0xde76,	// (0x0006521a) call5_swipe_2_pane_t1_ParamLimits

0xde76,	// (0x0006521a) call5_swipe_2_pane_t1

0xde8b,	// (0x0006522f) sc_swipe_pane_g1_ParamLimits

0xde8b,	// (0x0006522f) sc_swipe_pane_g1

0xde98,	// (0x0006523c) sc_swipe_pane_g2_ParamLimits

0xde98,	// (0x0006523c) sc_swipe_pane_g2

0x0001,

0xfd24,	// (0x000670c8) sc_swipe_pane_g_ParamLimits

0xfd24,	// (0x000670c8) sc_swipe_pane_g

0xdea4,	// (0x00065248) sc_swipe_pane_t1_ParamLimits

0xdea4,	// (0x00065248) sc_swipe_pane_t1

0x7393,	// (0x0005e737) main_cmail_launcher_pane

0xdeb9,	// (0x0006525d) aid_size_cell_cmail_l_ParamLimits

0xdeb9,	// (0x0006525d) aid_size_cell_cmail_l

0xdec9,	// (0x0006526d) grid_cmail_l_pane_ParamLimits

0xdec9,	// (0x0006526d) grid_cmail_l_pane

0xded5,	// (0x00065279) cell_cmail_l_pane_ParamLimits

0xded5,	// (0x00065279) cell_cmail_l_pane

0xdee7,	// (0x0006528b) cell_cmail_l_pane_g1_ParamLimits

0xdee7,	// (0x0006528b) cell_cmail_l_pane_g1

0xdef7,	// (0x0006529b) cell_cmail_l_pane_t1_ParamLimits

0xdef7,	// (0x0006529b) cell_cmail_l_pane_t1

0xdf0d,	// (0x000652b1) cell_cmail_l_pane_t2_ParamLimits

0xdf0d,	// (0x000652b1) cell_cmail_l_pane_t2

0x0001,

0xfd29,	// (0x000670cd) cell_cmail_l_pane_t_ParamLimits

0xfd29,	// (0x000670cd) cell_cmail_l_pane_t

0xa642,	// (0x000619e6) grid_highlight_pane_cp018_ParamLimits

0xa642,	// (0x000619e6) grid_highlight_pane_cp018

0x7489,	// (0x0005e82d) main2_pane_ParamLimits

0x7489,	// (0x0005e82d) main2_pane

0x8268,	// (0x0005f60c) popup_sp_fs_action_menu_bg_pane_g1

0x8270,	// (0x0005f614) popup_sp_fs_action_menu_bg_pane_g2

0x8278,	// (0x0005f61c) popup_sp_fs_action_menu_bg_pane_g3

0x8280,	// (0x0005f624) popup_sp_fs_action_menu_bg_pane_g4

0x8288,	// (0x0005f62c) popup_sp_fs_action_menu_bg_pane_g5

0x8290,	// (0x0005f634) popup_sp_fs_action_menu_bg_pane_g6

0x8298,	// (0x0005f63c) popup_sp_fs_action_menu_bg_pane_g7

0x82a0,	// (0x0005f644) popup_sp_fs_action_menu_bg_pane_g8

0x82a8,	// (0x0005f64c) popup_sp_fs_action_menu_bg_pane_g9

0x82b0,	// (0x0005f654) popup_sp_fs_action_menu_bg_pane_g10

0x82b0,	// (0x0005f654) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ef,	// (0x00066593) popup_sp_fs_action_menu_bg_pane_g

0x6469,	// (0x0005d80d) list_medium_line_x2_t3_g3_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_x2_t3_g3_g1

0x6475,	// (0x0005d819) list_medium_line_x2_t3_g3_g2_ParamLimits

0x6475,	// (0x0005d819) list_medium_line_x2_t3_g3_g2

0x6481,	// (0x0005d825) list_medium_line_x2_t3_g3_g3_ParamLimits

0x6481,	// (0x0005d825) list_medium_line_x2_t3_g3_g3

0x0002,

0xf29f,	// (0x00066643) list_medium_line_x2_t3_g3_g_ParamLimits

0xf29f,	// (0x00066643) list_medium_line_x2_t3_g3_g

0x648d,	// (0x0005d831) list_medium_line_x2_t3_g3_t1_ParamLimits

0x648d,	// (0x0005d831) list_medium_line_x2_t3_g3_t1

0x64a2,	// (0x0005d846) list_medium_line_x2_t3_g3_t2_ParamLimits

0x64a2,	// (0x0005d846) list_medium_line_x2_t3_g3_t2

0x64b4,	// (0x0005d858) list_medium_line_x2_t3_g3_t3_ParamLimits

0x64b4,	// (0x0005d858) list_medium_line_x2_t3_g3_t3

0x0002,

0xf2a6,	// (0x0006664a) list_medium_line_x2_t3_g3_t_ParamLimits

0xf2a6,	// (0x0006664a) list_medium_line_x2_t3_g3_t

0x6469,	// (0x0005d80d) list_medium_line_x2_t3_g2_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_x2_t3_g2_g1

0x6481,	// (0x0005d825) list_medium_line_x2_t3_g2_g2_ParamLimits

0x6481,	// (0x0005d825) list_medium_line_x2_t3_g2_g2

0x0001,

0xf2ad,	// (0x00066651) list_medium_line_x2_t3_g2_g_ParamLimits

0xf2ad,	// (0x00066651) list_medium_line_x2_t3_g2_g

0x64c9,	// (0x0005d86d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x64c9,	// (0x0005d86d) list_medium_line_x2_t3_g2_t1

0x64df,	// (0x0005d883) list_medium_line_x2_t3_g2_t2_ParamLimits

0x64df,	// (0x0005d883) list_medium_line_x2_t3_g2_t2

0x64b4,	// (0x0005d858) list_medium_line_x2_t3_g2_t3_ParamLimits

0x64b4,	// (0x0005d858) list_medium_line_x2_t3_g2_t3

0x0002,

0xf2b2,	// (0x00066656) list_medium_line_x2_t3_g2_t_ParamLimits

0xf2b2,	// (0x00066656) list_medium_line_x2_t3_g2_t

0x6469,	// (0x0005d80d) list_medium_line_x2_t4_g4_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_x2_t4_g4_g1

0x64f1,	// (0x0005d895) list_medium_line_x2_t4_g4_g2_ParamLimits

0x64f1,	// (0x0005d895) list_medium_line_x2_t4_g4_g2

0x6475,	// (0x0005d819) list_medium_line_x2_t4_g4_g3_ParamLimits

0x6475,	// (0x0005d819) list_medium_line_x2_t4_g4_g3

0x64fd,	// (0x0005d8a1) list_medium_line_x2_t4_g4_g4_ParamLimits

0x64fd,	// (0x0005d8a1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf2b9,	// (0x0006665d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf2b9,	// (0x0006665d) list_medium_line_x2_t4_g4_g

0x6509,	// (0x0005d8ad) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6509,	// (0x0005d8ad) list_medium_line_x2_t4_g4_t1

0x6520,	// (0x0005d8c4) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6520,	// (0x0005d8c4) list_medium_line_x2_t4_g4_t2

0x6535,	// (0x0005d8d9) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6535,	// (0x0005d8d9) list_medium_line_x2_t4_g4_t3

0x6547,	// (0x0005d8eb) list_medium_line_x2_t4_g4_t4_ParamLimits

0x6547,	// (0x0005d8eb) list_medium_line_x2_t4_g4_t4

0x0003,

0xf2c2,	// (0x00066666) list_medium_line_x2_t4_g4_t_ParamLimits

0xf2c2,	// (0x00066666) list_medium_line_x2_t4_g4_t

0x6469,	// (0x0005d80d) list_medium_line_x2_t2_g4_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_x2_t2_g4_g1

0x64f1,	// (0x0005d895) list_medium_line_x2_t2_g4_g2_ParamLimits

0x64f1,	// (0x0005d895) list_medium_line_x2_t2_g4_g2

0x6475,	// (0x0005d819) list_medium_line_x2_t2_g4_g3_ParamLimits

0x6475,	// (0x0005d819) list_medium_line_x2_t2_g4_g3

0x6481,	// (0x0005d825) list_medium_line_x2_t2_g4_g4_ParamLimits

0x6481,	// (0x0005d825) list_medium_line_x2_t2_g4_g4

0x0003,

0xf329,	// (0x000666cd) list_medium_line_x2_t2_g4_g_ParamLimits

0xf329,	// (0x000666cd) list_medium_line_x2_t2_g4_g

0x6559,	// (0x0005d8fd) list_medium_line_x2_t2_g4_t1_ParamLimits

0x6559,	// (0x0005d8fd) list_medium_line_x2_t2_g4_t1

0x64b4,	// (0x0005d858) list_medium_line_x2_t2_g4_t2_ParamLimits

0x64b4,	// (0x0005d858) list_medium_line_x2_t2_g4_t2

0x0001,

0xf332,	// (0x000666d6) list_medium_line_x2_t2_g4_t_ParamLimits

0xf332,	// (0x000666d6) list_medium_line_x2_t2_g4_t

0x6469,	// (0x0005d80d) list_medium_line_x2_t2_g3_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_x2_t2_g3_g1

0x6475,	// (0x0005d819) list_medium_line_x2_t2_g3_g2_ParamLimits

0x6475,	// (0x0005d819) list_medium_line_x2_t2_g3_g2

0x6481,	// (0x0005d825) list_medium_line_x2_t2_g3_g3_ParamLimits

0x6481,	// (0x0005d825) list_medium_line_x2_t2_g3_g3

0x0002,

0xf29f,	// (0x00066643) list_medium_line_x2_t2_g3_g_ParamLimits

0xf29f,	// (0x00066643) list_medium_line_x2_t2_g3_g

0x656e,	// (0x0005d912) list_medium_line_x2_t2_g3_t1_ParamLimits

0x656e,	// (0x0005d912) list_medium_line_x2_t2_g3_t1

0x64b4,	// (0x0005d858) list_medium_line_x2_t2_g3_t2_ParamLimits

0x64b4,	// (0x0005d858) list_medium_line_x2_t2_g3_t2

0x0001,

0xf337,	// (0x000666db) list_medium_line_x2_t2_g3_t_ParamLimits

0xf337,	// (0x000666db) list_medium_line_x2_t2_g3_t

0x9848,	// (0x00060bec) main_sp_fs_list_pane_ParamLimits

0x9848,	// (0x00060bec) main_sp_fs_list_pane

0x9855,	// (0x00060bf9) sp_fs_scroll_pane_ParamLimits

0x9855,	// (0x00060bf9) sp_fs_scroll_pane

0x6583,	// (0x0005d927) list_medium_line_x2_t3_t1

0x6593,	// (0x0005d937) list_medium_line_x2_t3_t2

0x65a1,	// (0x0005d945) list_medium_line_x2_t3_t3

0x0002,

0xf382,	// (0x00066726) list_medium_line_x2_t3_t

0x65af,	// (0x0005d953) list_medium_line_x3_t4_t1

0x65bf,	// (0x0005d963) list_medium_line_x3_t4_t2

0x65cd,	// (0x0005d971) list_medium_line_x3_t4_t3

0x65db,	// (0x0005d97f) list_medium_line_x3_t4_t4

0x0003,

0xf389,	// (0x0006672d) list_medium_line_x3_t4_t

0x65e9,	// (0x0005d98d) list_medium_line_x4_t5_t1

0x65f9,	// (0x0005d99d) list_medium_line_x4_t5_t2

0x65cd,	// (0x0005d971) list_medium_line_x4_t5_t3

0x6607,	// (0x0005d9ab) list_medium_line_x4_t5_t4

0x65db,	// (0x0005d97f) list_medium_line_x4_t5_t5

0x0004,

0xf392,	// (0x00066736) list_medium_line_x4_t5_t

0x6469,	// (0x0005d80d) list_medium_line_t4_g4_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_t4_g4_g1

0x64fd,	// (0x0005d8a1) list_medium_line_t4_g4_g2_ParamLimits

0x64fd,	// (0x0005d8a1) list_medium_line_t4_g4_g2

0x6615,	// (0x0005d9b9) list_medium_line_t4_g4_g3_ParamLimits

0x6615,	// (0x0005d9b9) list_medium_line_t4_g4_g3

0x6481,	// (0x0005d825) list_medium_line_t4_g4_g4_ParamLimits

0x6481,	// (0x0005d825) list_medium_line_t4_g4_g4

0x0003,

0xf39d,	// (0x00066741) list_medium_line_t4_g4_g_ParamLimits

0xf39d,	// (0x00066741) list_medium_line_t4_g4_g

0x6621,	// (0x0005d9c5) list_medium_line_t4_g4_t1_ParamLimits

0x6621,	// (0x0005d9c5) list_medium_line_t4_g4_t1

0x6636,	// (0x0005d9da) list_medium_line_t4_g4_t2_ParamLimits

0x6636,	// (0x0005d9da) list_medium_line_t4_g4_t2

0x664c,	// (0x0005d9f0) list_medium_line_t4_g4_t3_ParamLimits

0x664c,	// (0x0005d9f0) list_medium_line_t4_g4_t3

0x6662,	// (0x0005da06) list_medium_line_t4_g4_t4_ParamLimits

0x6662,	// (0x0005da06) list_medium_line_t4_g4_t4

0x0003,

0xf3a6,	// (0x0006674a) list_medium_line_t4_g4_t_ParamLimits

0xf3a6,	// (0x0006674a) list_medium_line_t4_g4_t

0x9970,	// (0x00060d14) chi_dic_find_pane_g1

0xa65e,	// (0x00061a02) main_tport_pane

0x687f,	// (0x0005dc23) list_medium_line_plain_t1

0x6469,	// (0x0005d80d) list_medium_line_t2_g2_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_t2_g2_g1

0x6475,	// (0x0005d819) list_medium_line_t2_g2_g2_ParamLimits

0x6475,	// (0x0005d819) list_medium_line_t2_g2_g2

0x0001,

0xfa6c,	// (0x00066e10) list_medium_line_t2_g2_g_ParamLimits

0xfa6c,	// (0x00066e10) list_medium_line_t2_g2_g

0x688d,	// (0x0005dc31) list_medium_line_t2_g2_t1_ParamLimits

0x688d,	// (0x0005dc31) list_medium_line_t2_g2_t1

0x68a4,	// (0x0005dc48) list_medium_line_t2_g2_t2_ParamLimits

0x68a4,	// (0x0005dc48) list_medium_line_t2_g2_t2

0x0001,

0xfa71,	// (0x00066e15) list_medium_line_t2_g2_t_ParamLimits

0xfa71,	// (0x00066e15) list_medium_line_t2_g2_t

0x6a2d,	// (0x0005ddd1) aid_sp_fs_list_icon_a_sm

0xd247,	// (0x000645eb) aid_sp_fs_list_icon_d

0x4f06,	// (0x0005c2aa) aid_sp_fs_text_primary

0x3aa9,	// (0x0005ae4d) aid_sp_fs_text_secondary

0xd24f,	// (0x000645f3) list_medium_line

0xd24f,	// (0x000645f3) list_medium_line_g2

0xd24f,	// (0x000645f3) list_medium_line_g3

0xd24f,	// (0x000645f3) list_medium_line_plain

0xd24f,	// (0x000645f3) list_medium_line_plain_t2

0xd24f,	// (0x000645f3) list_medium_line_plain_t3

0xd24f,	// (0x000645f3) list_medium_line_right_icon

0xd24f,	// (0x000645f3) list_medium_line_right_iconx2

0xd24f,	// (0x000645f3) list_medium_line_t2

0xd24f,	// (0x000645f3) list_medium_line_t2_g2

0xd24f,	// (0x000645f3) list_medium_line_t2_g3

0xd24f,	// (0x000645f3) list_medium_line_t2_right_icon

0xd24f,	// (0x000645f3) list_medium_line_t2_right_iconx2

0xd24f,	// (0x000645f3) list_medium_line_t3

0xd24f,	// (0x000645f3) list_medium_line_t3_g2

0xd24f,	// (0x000645f3) list_medium_line_t3_g3

0xd24f,	// (0x000645f3) list_medium_line_t3_right_iconx2

0x6a35,	// (0x0005ddd9) list_medium_line_t4_g4

0x6a3e,	// (0x0005dde2) list_medium_line_x2

0x6a3e,	// (0x0005dde2) list_medium_line_x2_t2_g2

0x6a3e,	// (0x0005dde2) list_medium_line_x2_t2_g3

0x6a3e,	// (0x0005dde2) list_medium_line_x2_t2_g4

0x6a3e,	// (0x0005dde2) list_medium_line_x2_t3

0x6a3e,	// (0x0005dde2) list_medium_line_x2_t3_g2

0x6a3e,	// (0x0005dde2) list_medium_line_x2_t3_g3

0x6a3e,	// (0x0005dde2) list_medium_line_x2_t3_g4

0x6a3e,	// (0x0005dde2) list_medium_line_x2_t4_g2

0x6a3e,	// (0x0005dde2) list_medium_line_x2_t4_g4

0x6a47,	// (0x0005ddeb) list_medium_line_x3

0x6a47,	// (0x0005ddeb) list_medium_line_x3_t4

0x6a47,	// (0x0005ddeb) list_medium_line_x3_t4_g4

0x6a35,	// (0x0005ddd9) list_medium_line_x4_t4

0x6a35,	// (0x0005ddd9) list_medium_line_x4_t4_g7

0x6a35,	// (0x0005ddd9) list_medium_line_x4_t5

0x6a50,	// (0x0005ddf4) list_single_fs_dyc_pane_ParamLimits

0x6a50,	// (0x0005ddf4) list_single_fs_dyc_pane

0x6469,	// (0x0005d80d) list_medium_line_x4_t4_g7_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_x4_t4_g7_g1

0x6a88,	// (0x0005de2c) list_medium_line_x4_t4_g7_g2_ParamLimits

0x6a88,	// (0x0005de2c) list_medium_line_x4_t4_g7_g2

0x6a94,	// (0x0005de38) list_medium_line_x4_t4_g7_g3_ParamLimits

0x6a94,	// (0x0005de38) list_medium_line_x4_t4_g7_g3

0x6aa3,	// (0x0005de47) list_medium_line_x4_t4_g7_g4_ParamLimits

0x6aa3,	// (0x0005de47) list_medium_line_x4_t4_g7_g4

0x6aaf,	// (0x0005de53) list_medium_line_x4_t4_g7_g5_ParamLimits

0x6aaf,	// (0x0005de53) list_medium_line_x4_t4_g7_g5

0x6abe,	// (0x0005de62) list_medium_line_x4_t4_g7_g6_ParamLimits

0x6abe,	// (0x0005de62) list_medium_line_x4_t4_g7_g6

0x6acd,	// (0x0005de71) list_medium_line_x4_t4_g7_g7_ParamLimits

0x6acd,	// (0x0005de71) list_medium_line_x4_t4_g7_g7

0x0006,

0xfc36,	// (0x00066fda) list_medium_line_x4_t4_g7_g_ParamLimits

0xfc36,	// (0x00066fda) list_medium_line_x4_t4_g7_g

0x6ad9,	// (0x0005de7d) list_medium_line_x4_t4_g7_t1_ParamLimits

0x6ad9,	// (0x0005de7d) list_medium_line_x4_t4_g7_t1

0x6aee,	// (0x0005de92) list_medium_line_x4_t4_g7_t2_ParamLimits

0x6aee,	// (0x0005de92) list_medium_line_x4_t4_g7_t2

0x6b03,	// (0x0005dea7) list_medium_line_x4_t4_g7_t3_ParamLimits

0x6b03,	// (0x0005dea7) list_medium_line_x4_t4_g7_t3

0x6b18,	// (0x0005debc) list_medium_line_x4_t4_g7_t4_ParamLimits

0x6b18,	// (0x0005debc) list_medium_line_x4_t4_g7_t4

0x6b2a,	// (0x0005dece) list_medium_line_x4_t4_g7_t5_ParamLimits

0x6b2a,	// (0x0005dece) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc45,	// (0x00066fe9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc45,	// (0x00066fe9) list_medium_line_x4_t4_g7_t

0x6b3c,	// (0x0005dee0) list_single_dyc_row_pane_ParamLimits

0x6b3c,	// (0x0005dee0) list_single_dyc_row_pane

0xde01,	// (0x000651a5) call5_gesture_pane_ParamLimits

0xde01,	// (0x000651a5) call5_gesture_pane

0xde31,	// (0x000651d5) call5_windows_pane_ParamLimits

0xde31,	// (0x000651d5) call5_windows_pane

0xdf1f,	// (0x000652c3) call5_swipe_1_pane_cp_ParamLimits

0xdf1f,	// (0x000652c3) call5_swipe_1_pane_cp

0xdf2b,	// (0x000652cf) call5_swipe_2_pane_cp_ParamLimits

0xdf2b,	// (0x000652cf) call5_swipe_2_pane_cp

0x1288,	// (0x0005862c) call5_image_pane_cp

0xdf37,	// (0x000652db) popup_call5_audio_first_window_cp_ParamLimits

0xdf37,	// (0x000652db) popup_call5_audio_first_window_cp

0xde8b,	// (0x0006522f) call5_swipe_1_pane_g1_cp_ParamLimits

0xde8b,	// (0x0006522f) call5_swipe_1_pane_g1_cp

0xdf43,	// (0x000652e7) call5_swipe_1_pane_g2_cp

0xdea4,	// (0x00065248) call5_swipe_1_pane_t1_cp_ParamLimits

0xdea4,	// (0x00065248) call5_swipe_1_pane_t1_cp

0xde8b,	// (0x0006522f) call5_swipe_2_pane_g1_cp_ParamLimits

0xde8b,	// (0x0006522f) call5_swipe_2_pane_g1_cp

0xdf4b,	// (0x000652ef) call5_swipe_2_pane_g2_cp

0xdf53,	// (0x000652f7) call5_swipe_2_pane_t1_cp_ParamLimits

0xdf53,	// (0x000652f7) call5_swipe_2_pane_t1_cp

0xa642,	// (0x000619e6) main_sp_fs_email_pane

0xdf68,	// (0x0006530c) main_sp_fs_listscroll_pane_te

0x6ba8,	// (0x0005df4c) popup_sp_fs_action_menu_pane_ParamLimits

0x6ba8,	// (0x0005df4c) popup_sp_fs_action_menu_pane

0x2b3a,	// (0x00059ede) bg_sp_fs_ctrlbar_pane_g1

0xdf71,	// (0x00065315) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdf7a,	// (0x0006531e) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdf83,	// (0x00065327) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x2b3a,	// (0x00059ede) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfd2e,	// (0x000670d2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2927,	// (0x00059ccb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2927,	// (0x00059ccb) bg_sp_fs_ctrlbar_ddmenu_pane

0xdf8c,	// (0x00065330) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdf8c,	// (0x00065330) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf123,	// (0x000664c7) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf123,	// (0x000664c7) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfd37,	// (0x000670db) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfd37,	// (0x000670db) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdf98,	// (0x0006533c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdf98,	// (0x0006533c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x6bd8,	// (0x0005df7c) list_medium_line_t2_right_icon_g1

0x6be0,	// (0x0005df84) list_medium_line_t2_right_icon_t1

0x6bef,	// (0x0005df93) list_medium_line_t2_right_icon_t2

0x0001,

0xfd3c,	// (0x000670e0) list_medium_line_t2_right_icon_t

0x26f7,	// (0x00059a9b) bg_sp_fs_ctrlbar_pane_ParamLimits

0x26f7,	// (0x00059a9b) bg_sp_fs_ctrlbar_pane

0xe03f,	// (0x000653e3) main_sp_fs_ctrlbar_button_pane_cp01

0xe047,	// (0x000653eb) main_sp_fs_ctrlbar_ddmenu_pane

0xe051,	// (0x000653f5) main_sp_fs_ctrlbar_pane_g1

0xe05d,	// (0x00065401) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd41,	// (0x000670e5) main_sp_fs_ctrlbar_pane_g

0xe069,	// (0x0006540d) main_sp_fs_ctrlbar_pane_t1

0x6bfd,	// (0x0005dfa1) main_sp_fs_ctrlbar_pane

0x6c15,	// (0x0005dfb9) main_sp_fs_listscroll_pane_te_cp01

0x6c26,	// (0x0005dfca) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x6c26,	// (0x0005dfca) popup_sp_fs_action_menu_pane_cp01

0xa642,	// (0x000619e6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa642,	// (0x000619e6) bg_sp_fs_highlight_list_pane_cp01

0x6c48,	// (0x0005dfec) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x6c48,	// (0x0005dfec) sp_fs_action_menu_list_gene_pane_g1

0xe07e,	// (0x00065422) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe07e,	// (0x00065422) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd46,	// (0x000670ea) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd46,	// (0x000670ea) sp_fs_action_menu_list_gene_pane_g

0x6c57,	// (0x0005dffb) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x6c57,	// (0x0005dffb) sp_fs_action_menu_list_gene_pane_t1

0x6c6f,	// (0x0005e013) sp_fs_action_menu_list_gene_pane_ParamLimits

0x6c6f,	// (0x0005e013) sp_fs_action_menu_list_gene_pane

0xe08b,	// (0x0006542f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe08b,	// (0x0006542f) popup_sp_fs_action_menu_bg_pane

0x6c8c,	// (0x0005e030) sp_fs_action_menu_list_pane_ParamLimits

0x6c8c,	// (0x0005e030) sp_fs_action_menu_list_pane

0xe099,	// (0x0006543d) sp_fs_scroll_pane_cp01_ParamLimits

0xe099,	// (0x0006543d) sp_fs_scroll_pane_cp01

0x6ca8,	// (0x0005e04c) list_medium_line_plain_t2_t1

0x6cb7,	// (0x0005e05b) list_medium_line_plain_t2_t2

0x0001,

0xfd4b,	// (0x000670ef) list_medium_line_plain_t2_t

0x6cc5,	// (0x0005e069) list_medium_line_plain_t3_t1

0x6cd5,	// (0x0005e079) list_medium_line_plain_t3_t2

0x6ce3,	// (0x0005e087) list_medium_line_plain_t3_t3

0x0002,

0xfd50,	// (0x000670f4) list_medium_line_plain_t3_t

0x6469,	// (0x0005d80d) list_medium_line_x2_t2_g2_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_x2_t2_g2_g1

0x6481,	// (0x0005d825) list_medium_line_x2_t2_g2_g2_ParamLimits

0x6481,	// (0x0005d825) list_medium_line_x2_t2_g2_g2

0x0001,

0xf2ad,	// (0x00066651) list_medium_line_x2_t2_g2_g_ParamLimits

0xf2ad,	// (0x00066651) list_medium_line_x2_t2_g2_g

0x6621,	// (0x0005d9c5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x6621,	// (0x0005d9c5) list_medium_line_x2_t2_g2_t1

0x64b4,	// (0x0005d858) list_medium_line_x2_t2_g2_t2_ParamLimits

0x64b4,	// (0x0005d858) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd57,	// (0x000670fb) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd57,	// (0x000670fb) list_medium_line_x2_t2_g2_t

0x6469,	// (0x0005d80d) list_medium_line_x2_t4_g2_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_x2_t4_g2_g1

0x6cf1,	// (0x0005e095) list_medium_line_x2_t4_g2_g2_ParamLimits

0x6cf1,	// (0x0005e095) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd5c,	// (0x00067100) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd5c,	// (0x00067100) list_medium_line_x2_t4_g2_g

0x6d03,	// (0x0005e0a7) list_medium_line_x2_t4_g2_t1_ParamLimits

0x6d03,	// (0x0005e0a7) list_medium_line_x2_t4_g2_t1

0x6d1a,	// (0x0005e0be) list_medium_line_x2_t4_g2_t2_ParamLimits

0x6d1a,	// (0x0005e0be) list_medium_line_x2_t4_g2_t2

0x6d2f,	// (0x0005e0d3) list_medium_line_x2_t4_g2_t3_ParamLimits

0x6d2f,	// (0x0005e0d3) list_medium_line_x2_t4_g2_t3

0x64b4,	// (0x0005d858) list_medium_line_x2_t4_g2_t4_ParamLimits

0x64b4,	// (0x0005d858) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd61,	// (0x00067105) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd61,	// (0x00067105) list_medium_line_x2_t4_g2_t

0x6d41,	// (0x0005e0e5) list_medium_line_t3_right_iconx2_g1

0x6bd8,	// (0x0005df7c) list_medium_line_t3_right_iconx2_g2

0x6d49,	// (0x0005e0ed) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd6a,	// (0x0006710e) list_medium_line_t3_right_iconx2_g

0x6d51,	// (0x0005e0f5) list_medium_line_t3_right_iconx2_t1

0x6d61,	// (0x0005e105) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd71,	// (0x00067115) list_medium_line_t3_right_iconx2_t

0x6469,	// (0x0005d80d) list_medium_line_x3_t4_g4_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_x3_t4_g4_g1

0x6475,	// (0x0005d819) list_medium_line_x3_t4_g4_g2_ParamLimits

0x6475,	// (0x0005d819) list_medium_line_x3_t4_g4_g2

0x64fd,	// (0x0005d8a1) list_medium_line_x3_t4_g4_g3_ParamLimits

0x64fd,	// (0x0005d8a1) list_medium_line_x3_t4_g4_g3

0x6d6f,	// (0x0005e113) list_medium_line_x3_t4_g4_g4_ParamLimits

0x6d6f,	// (0x0005e113) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd76,	// (0x0006711a) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd76,	// (0x0006711a) list_medium_line_x3_t4_g4_g

0x688d,	// (0x0005dc31) list_medium_line_x3_t4_g4_t1_ParamLimits

0x688d,	// (0x0005dc31) list_medium_line_x3_t4_g4_t1

0x68a4,	// (0x0005dc48) list_medium_line_x3_t4_g4_t2_ParamLimits

0x68a4,	// (0x0005dc48) list_medium_line_x3_t4_g4_t2

0x6d7b,	// (0x0005e11f) list_medium_line_x3_t4_g4_t3_ParamLimits

0x6d7b,	// (0x0005e11f) list_medium_line_x3_t4_g4_t3

0x6d90,	// (0x0005e134) list_medium_line_x3_t4_g4_t4_ParamLimits

0x6d90,	// (0x0005e134) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd7f,	// (0x00067123) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd7f,	// (0x00067123) list_medium_line_x3_t4_g4_t

0x6dad,	// (0x0005e151) list_single_dyc_row_text_pane_t1_ParamLimits

0x6dad,	// (0x0005e151) list_single_dyc_row_text_pane_t1

0x6de4,	// (0x0005e188) list_single_dyc_row_text_pane_t2_ParamLimits

0x6de4,	// (0x0005e188) list_single_dyc_row_text_pane_t2

0x6e3b,	// (0x0005e1df) list_single_dyc_row_text_pane_t3_ParamLimits

0x6e3b,	// (0x0005e1df) list_single_dyc_row_text_pane_t3

0x0002,

0xfd88,	// (0x0006712c) list_single_dyc_row_text_pane_t_ParamLimits

0xfd88,	// (0x0006712c) list_single_dyc_row_text_pane_t

0x6e4d,	// (0x0005e1f1) list_single_dyc_row_pane_g1_ParamLimits

0x6e4d,	// (0x0005e1f1) list_single_dyc_row_pane_g1

0x6e59,	// (0x0005e1fd) list_single_dyc_row_pane_g2_ParamLimits

0x6e59,	// (0x0005e1fd) list_single_dyc_row_pane_g2

0x6e65,	// (0x0005e209) list_single_dyc_row_pane_g3_ParamLimits

0x6e65,	// (0x0005e209) list_single_dyc_row_pane_g3

0x6e71,	// (0x0005e215) list_single_dyc_row_pane_g4_ParamLimits

0x6e71,	// (0x0005e215) list_single_dyc_row_pane_g4

0x0003,

0xfd8f,	// (0x00067133) list_single_dyc_row_pane_g_ParamLimits

0xfd8f,	// (0x00067133) list_single_dyc_row_pane_g

0x6e7d,	// (0x0005e221) list_single_dyc_row_text_pane_ParamLimits

0x6e7d,	// (0x0005e221) list_single_dyc_row_text_pane

0x7393,	// (0x0005e737) bg_sp_fs_scroll_pane

0xe0bf,	// (0x00065463) thumb_sp_fs_scroll_pane

0x6469,	// (0x0005d80d) list_medium_line_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_g1

0x6621,	// (0x0005d9c5) list_medium_line_t1_ParamLimits

0x6621,	// (0x0005d9c5) list_medium_line_t1

0x6469,	// (0x0005d80d) list_medium_line_x2_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_x2_g1

0x6475,	// (0x0005d819) list_medium_line_x2_g2_ParamLimits

0x6475,	// (0x0005d819) list_medium_line_x2_g2

0x0001,

0xfa6c,	// (0x00066e10) list_medium_line_x2_g_ParamLimits

0xfa6c,	// (0x00066e10) list_medium_line_x2_g

0x6e9c,	// (0x0005e240) list_medium_line_x2_t1_ParamLimits

0x6e9c,	// (0x0005e240) list_medium_line_x2_t1

0x6469,	// (0x0005d80d) list_medium_line_x3_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_x3_g1

0x6475,	// (0x0005d819) list_medium_line_x3_g2_ParamLimits

0x6475,	// (0x0005d819) list_medium_line_x3_g2

0x0001,

0xfa6c,	// (0x00066e10) list_medium_line_x3_g_ParamLimits

0xfa6c,	// (0x00066e10) list_medium_line_x3_g

0x6e9c,	// (0x0005e240) list_medium_line_x3_t1_ParamLimits

0x6e9c,	// (0x0005e240) list_medium_line_x3_t1

0xe0c8,	// (0x0006546c) thumb_sp_fs_scroll_pane_g1

0xe0d1,	// (0x00065475) thumb_sp_fs_scroll_pane_g2

0xe0da,	// (0x0006547e) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd98,	// (0x0006713c) thumb_sp_fs_scroll_pane_g

0xe0c8,	// (0x0006546c) bg_sp_fs_scroll_pane_g1

0xe0d1,	// (0x00065475) bg_sp_fs_scroll_pane_g2

0xe0da,	// (0x0006547e) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd98,	// (0x0006713c) bg_sp_fs_scroll_pane_g

0x6469,	// (0x0005d80d) list_medium_line_x2_t3_g4_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_x2_t3_g4_g1

0x64f1,	// (0x0005d895) list_medium_line_x2_t3_g4_g2_ParamLimits

0x64f1,	// (0x0005d895) list_medium_line_x2_t3_g4_g2

0x6475,	// (0x0005d819) list_medium_line_x2_t3_g4_g3_ParamLimits

0x6475,	// (0x0005d819) list_medium_line_x2_t3_g4_g3

0x6481,	// (0x0005d825) list_medium_line_x2_t3_g4_g4_ParamLimits

0x6481,	// (0x0005d825) list_medium_line_x2_t3_g4_g4

0x0003,

0xf329,	// (0x000666cd) list_medium_line_x2_t3_g4_g_ParamLimits

0xf329,	// (0x000666cd) list_medium_line_x2_t3_g4_g

0x6eb2,	// (0x0005e256) list_medium_line_x2_t3_g4_t1_ParamLimits

0x6eb2,	// (0x0005e256) list_medium_line_x2_t3_g4_t1

0x6ec8,	// (0x0005e26c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x6ec8,	// (0x0005e26c) list_medium_line_x2_t3_g4_t2

0x64b4,	// (0x0005d858) list_medium_line_x2_t3_g4_t3_ParamLimits

0x64b4,	// (0x0005d858) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd9f,	// (0x00067143) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd9f,	// (0x00067143) list_medium_line_x2_t3_g4_t

0x6469,	// (0x0005d80d) list_medium_line_g2_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_g2_g1

0x6475,	// (0x0005d819) list_medium_line_g2_g2_ParamLimits

0x6475,	// (0x0005d819) list_medium_line_g2_g2

0x0001,

0xfa6c,	// (0x00066e10) list_medium_line_g2_g_ParamLimits

0xfa6c,	// (0x00066e10) list_medium_line_g2_g

0x656e,	// (0x0005d912) list_medium_line_g2_t1_ParamLimits

0x656e,	// (0x0005d912) list_medium_line_g2_t1

0x6469,	// (0x0005d80d) list_medium_line_t3_g2_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_t3_g2_g1

0x6475,	// (0x0005d819) list_medium_line_t3_g2_g2_ParamLimits

0x6475,	// (0x0005d819) list_medium_line_t3_g2_g2

0x0001,

0xfa6c,	// (0x00066e10) list_medium_line_t3_g2_g_ParamLimits

0xfa6c,	// (0x00066e10) list_medium_line_t3_g2_g

0x6ee1,	// (0x0005e285) list_medium_line_t3_g2_t1_ParamLimits

0x6ee1,	// (0x0005e285) list_medium_line_t3_g2_t1

0x6efb,	// (0x0005e29f) list_medium_line_t3_g2_t2_ParamLimits

0x6efb,	// (0x0005e29f) list_medium_line_t3_g2_t2

0x6f10,	// (0x0005e2b4) list_medium_line_t3_g2_t3_ParamLimits

0x6f10,	// (0x0005e2b4) list_medium_line_t3_g2_t3

0x0002,

0xfda6,	// (0x0006714a) list_medium_line_t3_g2_t_ParamLimits

0xfda6,	// (0x0006714a) list_medium_line_t3_g2_t

0x6bd8,	// (0x0005df7c) list_medium_line_right_icon_g1

0x6f26,	// (0x0005e2ca) list_medium_line_right_icon_t1

0x6469,	// (0x0005d80d) list_medium_line_t2_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_t2_g1

0x6f34,	// (0x0005e2d8) list_medium_line_t2_t1_ParamLimits

0x6f34,	// (0x0005e2d8) list_medium_line_t2_t1

0x6f4e,	// (0x0005e2f2) list_medium_line_t2_t2_ParamLimits

0x6f4e,	// (0x0005e2f2) list_medium_line_t2_t2

0x0001,

0xfdad,	// (0x00067151) list_medium_line_t2_t_ParamLimits

0xfdad,	// (0x00067151) list_medium_line_t2_t

0x6469,	// (0x0005d80d) list_medium_line_t3_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_t3_g1

0x6d03,	// (0x0005e0a7) list_medium_line_t3_t1_ParamLimits

0x6d03,	// (0x0005e0a7) list_medium_line_t3_t1

0x6d1a,	// (0x0005e0be) list_medium_line_t3_t2_ParamLimits

0x6d1a,	// (0x0005e0be) list_medium_line_t3_t2

0x6d2f,	// (0x0005e0d3) list_medium_line_t3_t3_ParamLimits

0x6d2f,	// (0x0005e0d3) list_medium_line_t3_t3

0x0002,

0xfdb2,	// (0x00067156) list_medium_line_t3_t_ParamLimits

0xfdb2,	// (0x00067156) list_medium_line_t3_t

0x6469,	// (0x0005d80d) list_medium_line_g3_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_g3_g1

0x64f1,	// (0x0005d895) list_medium_line_g3_g2_ParamLimits

0x64f1,	// (0x0005d895) list_medium_line_g3_g2

0x6475,	// (0x0005d819) list_medium_line_g3_g3_ParamLimits

0x6475,	// (0x0005d819) list_medium_line_g3_g3

0x0002,

0xfdb9,	// (0x0006715d) list_medium_line_g3_g_ParamLimits

0xfdb9,	// (0x0006715d) list_medium_line_g3_g

0x6559,	// (0x0005d8fd) list_medium_line_g3_t1_ParamLimits

0x6559,	// (0x0005d8fd) list_medium_line_g3_t1

0x6469,	// (0x0005d80d) list_medium_line_t2_g3_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_t2_g3_g1

0x64f1,	// (0x0005d895) list_medium_line_t2_g3_g2_ParamLimits

0x64f1,	// (0x0005d895) list_medium_line_t2_g3_g2

0x6475,	// (0x0005d819) list_medium_line_t2_g3_g3_ParamLimits

0x6475,	// (0x0005d819) list_medium_line_t2_g3_g3

0x0002,

0xfdb9,	// (0x0006715d) list_medium_line_t2_g3_g_ParamLimits

0xfdb9,	// (0x0006715d) list_medium_line_t2_g3_g

0x6f63,	// (0x0005e307) list_medium_line_t2_g3_t1_ParamLimits

0x6f63,	// (0x0005e307) list_medium_line_t2_g3_t1

0x6f7a,	// (0x0005e31e) list_medium_line_t2_g3_t2_ParamLimits

0x6f7a,	// (0x0005e31e) list_medium_line_t2_g3_t2

0x0001,

0xfdc0,	// (0x00067164) list_medium_line_t2_g3_t_ParamLimits

0xfdc0,	// (0x00067164) list_medium_line_t2_g3_t

0x6469,	// (0x0005d80d) list_medium_line_t3_g3_g1_ParamLimits

0x6469,	// (0x0005d80d) list_medium_line_t3_g3_g1

0x64f1,	// (0x0005d895) list_medium_line_t3_g3_g2_ParamLimits

0x64f1,	// (0x0005d895) list_medium_line_t3_g3_g2

0x6475,	// (0x0005d819) list_medium_line_t3_g3_g3_ParamLimits

0x6475,	// (0x0005d819) list_medium_line_t3_g3_g3

0x0002,

0xfdb9,	// (0x0006715d) list_medium_line_t3_g3_g_ParamLimits

0xfdb9,	// (0x0006715d) list_medium_line_t3_g3_g

0x6f8f,	// (0x0005e333) list_medium_line_t3_g3_t1_ParamLimits

0x6f8f,	// (0x0005e333) list_medium_line_t3_g3_t1

0x6fa3,	// (0x0005e347) list_medium_line_t3_g3_t2_ParamLimits

0x6fa3,	// (0x0005e347) list_medium_line_t3_g3_t2

0x6fb5,	// (0x0005e359) list_medium_line_t3_g3_t3_ParamLimits

0x6fb5,	// (0x0005e359) list_medium_line_t3_g3_t3

0x0002,

0xfdc5,	// (0x00067169) list_medium_line_t3_g3_t_ParamLimits

0xfdc5,	// (0x00067169) list_medium_line_t3_g3_t

0x6d41,	// (0x0005e0e5) list_medium_line_right_iconx2_g1

0x6bd8,	// (0x0005df7c) list_medium_line_right_iconx2_g2

0x0001,

0xfdcc,	// (0x00067170) list_medium_line_right_iconx2_g

0x6fc7,	// (0x0005e36b) list_medium_line_right_iconx2_t1

0x6d41,	// (0x0005e0e5) list_medium_line_t2_right_iconx2_g1

0x6bd8,	// (0x0005df7c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfdcc,	// (0x00067170) list_medium_line_t2_right_iconx2_g

0x6fd5,	// (0x0005e379) list_medium_line_t2_right_iconx2_t1

0x6fe5,	// (0x0005e389) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfdd1,	// (0x00067175) list_medium_line_t2_right_iconx2_t

0x687f,	// (0x0005dc23) list_medium_line_x4_t4_t1

0x6ff3,	// (0x0005e397) list_medium_line_x4_t4_t2

0x7001,	// (0x0005e3a5) list_medium_line_x4_t4_t3

0x700f,	// (0x0005e3b3) list_medium_line_x4_t4_t4

0x0003,

0xfdd6,	// (0x0006717a) list_medium_line_x4_t4_t

0xe108,	// (0x000654ac) tport_appsw_pane_ParamLimits

0xe108,	// (0x000654ac) tport_appsw_pane

0xe114,	// (0x000654b8) tport_contact_pane_ParamLimits

0xe114,	// (0x000654b8) tport_contact_pane

0xe122,	// (0x000654c6) tport_listscroll_pane_ParamLimits

0xe122,	// (0x000654c6) tport_listscroll_pane

0xe130,	// (0x000654d4) cell_tport_appsw_pane_ParamLimits

0xe130,	// (0x000654d4) cell_tport_appsw_pane

0x2e42,	// (0x0005a1e6) tport_appsw_pane_g1_ParamLimits

0x2e42,	// (0x0005a1e6) tport_appsw_pane_g1

0xe13d,	// (0x000654e1) tport_contact_pane_g1

0xe146,	// (0x000654ea) tport_contact_pane_t1

0xe154,	// (0x000654f8) tport_contact_pane_t2

0x0001,

0xfddf,	// (0x00067183) tport_contact_pane_t

0xe162,	// (0x00065506) list_tport_pane

0x82c2,	// (0x0005f666) scroll_pane_cp_030

0xe173,	// (0x00065517) cell_tport_appsw_pane_g1

0xe18c,	// (0x00065530) cell_tport_appsw_pane_t1

0x7393,	// (0x0005e737) grid_highlight_pane_cp019

0xe19a,	// (0x0006553e) list_tport_double_graphic_pane_ParamLimits

0xe19a,	// (0x0006553e) list_tport_double_graphic_pane

0xa642,	// (0x000619e6) list_highlight_pane_cp023_ParamLimits

0xa642,	// (0x000619e6) list_highlight_pane_cp023

0xe1a7,	// (0x0006554b) list_tport_double_graphic_pane_g1_ParamLimits

0xe1a7,	// (0x0006554b) list_tport_double_graphic_pane_g1

0xe1b4,	// (0x00065558) list_tport_double_graphic_pane_t1_ParamLimits

0xe1b4,	// (0x00065558) list_tport_double_graphic_pane_t1

0xe1c9,	// (0x0006556d) list_tport_double_graphic_pane_t2_ParamLimits

0xe1c9,	// (0x0006556d) list_tport_double_graphic_pane_t2

0x0001,

0xfdeb,	// (0x0006718f) list_tport_double_graphic_pane_t_ParamLimits

0xfdeb,	// (0x0006718f) list_tport_double_graphic_pane_t

0x7393,	// (0x0005e737) main_cale_note_pane

0xc640,	// (0x000639e4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc640,	// (0x000639e4) cell_vitu2_function_top_wide_pane_cp01

0xdb5a,	// (0x00064efe) wait_bar_pane_cp05_ParamLimits

0x7393,	// (0x0005e737) listscroll_cmail_pane

0xe1db,	// (0x0006557f) list_cmail_pane

0xe1f7,	// (0x0006559b) list_cmail_body_pane

0xe1f7,	// (0x0006559b) list_single_cmail_header_caption_pane

0xe20f,	// (0x000655b3) list_single_cmail_header_detail_pane_ParamLimits

0xe20f,	// (0x000655b3) list_single_cmail_header_detail_pane

0xe239,	// (0x000655dd) list_single_cmail_header_caption_pane_t1

0x7025,	// (0x0005e3c9) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7025,	// (0x0005e3c9) list_single_cmail_header_detail_pane_g1

0xe247,	// (0x000655eb) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe247,	// (0x000655eb) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdf0,	// (0x00067194) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdf0,	// (0x00067194) list_single_cmail_header_detail_pane_g

0x703b,	// (0x0005e3df) list_single_cmail_header_detail_pane_t1_ParamLimits

0x703b,	// (0x0005e3df) list_single_cmail_header_detail_pane_t1

0x7091,	// (0x0005e435) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7091,	// (0x0005e435) list_single_cmail_header_editor_pane_bg

0xe260,	// (0x00065604) list_cmail_body_pane_g1

0xe269,	// (0x0006560d) list_cmail_body_pane_t1

0x3549,	// (0x0005a8ed) list_single_cmail_header_editor_pane_bg_g1

0x0a78,	// (0x00057e1c) list_single_cmail_header_editor_pane_bg_g1_copy1

0x3559,	// (0x0005a8fd) list_single_cmail_header_editor_pane_bg_g1_copy2

0x3551,	// (0x0005a8f5) list_single_cmail_header_editor_pane_bg_g1_copy3

0x3780,	// (0x0005ab24) list_single_cmail_header_editor_pane_bg_g1_copy4

0x3579,	// (0x0005a91d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x3569,	// (0x0005a90d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x3571,	// (0x0005a915) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0a58,	// (0x00057dfc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xe277,	// (0x0006561b) calenote_gesture_pane_ParamLimits

0xe277,	// (0x0006561b) calenote_gesture_pane

0xe28f,	// (0x00065633) calenote_window_pane_ParamLimits

0xe28f,	// (0x00065633) calenote_window_pane

0xe2a7,	// (0x0006564b) popup_note_window_cp01

0xe2b0,	// (0x00065654) calenote_swipe_1_pane_ParamLimits

0xe2b0,	// (0x00065654) calenote_swipe_1_pane

0xdf2b,	// (0x000652cf) calenote_swipe_2_pane_ParamLimits

0xdf2b,	// (0x000652cf) calenote_swipe_2_pane

0xde8b,	// (0x0006522f) calenote_swipe_1_pane_g1_ParamLimits

0xde8b,	// (0x0006522f) calenote_swipe_1_pane_g1

0xde98,	// (0x0006523c) calenote_swipe_1_pane_g2_ParamLimits

0xde98,	// (0x0006523c) calenote_swipe_1_pane_g2

0x0001,

0xfd24,	// (0x000670c8) calenote_swipe_1_pane_g_ParamLimits

0xfd24,	// (0x000670c8) calenote_swipe_1_pane_g

0xe2cc,	// (0x00065670) calenote_swipe_1_pane_t1_ParamLimits

0xe2cc,	// (0x00065670) calenote_swipe_1_pane_t1

0xde8b,	// (0x0006522f) calenote_swipe_2_pane_g1_ParamLimits

0xde8b,	// (0x0006522f) calenote_swipe_2_pane_g1

0xe2eb,	// (0x0006568f) calenote_swipe_2_pane_g2_ParamLimits

0xe2eb,	// (0x0006568f) calenote_swipe_2_pane_g2

0x0001,

0xfdfc,	// (0x000671a0) calenote_swipe_2_pane_g_ParamLimits

0xfdfc,	// (0x000671a0) calenote_swipe_2_pane_g

0xe2f7,	// (0x0006569b) calenote_swipe_2_pane_t1_ParamLimits

0xe2f7,	// (0x0006569b) calenote_swipe_2_pane_t1

0x7393,	// (0x0005e737) main_mup_navstr_pane

0xb515,	// (0x000628b9) main_mup3_pane_t7_ParamLimits

0xb515,	// (0x000628b9) main_mup3_pane_t7

0xbe9f,	// (0x00063243) main_mp4_pane_g6_ParamLimits

0xbe9f,	// (0x00063243) main_mp4_pane_g6

0xc1d3,	// (0x00063577) main_image3_pane_t4_ParamLimits

0xc1d3,	// (0x00063577) main_image3_pane_t4

0xe31e,	// (0x000656c2) popup_navstr_preview_pane_ParamLimits

0xe31e,	// (0x000656c2) popup_navstr_preview_pane

0xe32a,	// (0x000656ce) scroll_navstr_pane_ParamLimits

0xe32a,	// (0x000656ce) scroll_navstr_pane

0x7393,	// (0x0005e737) bg_popup_preview_window_pane_cp04

0xe336,	// (0x000656da) popup_navstr_preview_pane_t1

0xe344,	// (0x000656e8) scroll_navstr_pane_g1_ParamLimits

0xe344,	// (0x000656e8) scroll_navstr_pane_g1

0xe351,	// (0x000656f5) scroll_navstr_pane_t1_ParamLimits

0xe351,	// (0x000656f5) scroll_navstr_pane_t1

0xe2c3,	// (0x00065667) bg_button_pane_cp014

0xe2c3,	// (0x00065667) bg_button_pane_cp030

0x6b5f,	// (0x0005df03) list_double_fisheye_pane_g4_ParamLimits

0x6b5f,	// (0x0005df03) list_double_fisheye_pane_g4

0xddf0,	// (0x00065194) list_double_fisheye_pane_g5_ParamLimits

0xddf0,	// (0x00065194) list_double_fisheye_pane_g5

0xe1eb,	// (0x0006558f) sp_fs_scroll_pane_cp03

0xe051,	// (0x000653f5) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe05d,	// (0x00065401) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd41,	// (0x000670e5) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe069,	// (0x0006540d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe1e3,	// (0x00065587) sp_fs_scroll_pane_cp02

0x8350,	// (0x0005f6f4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x8350,	// (0x0005f6f4) popup_sp_fs_calendar_preview_list_single_pane

0x7393,	// (0x0005e737) main_cam6_pano_pane

0xa642,	// (0x000619e6) main_mup3_pane_ParamLimits

0x7393,	// (0x0005e737) main_phacti_pane

0xda4d,	// (0x00064df1) bg_button_pane_cp11

0xda65,	// (0x00064e09) main_mobtv_info_pane_g2_ParamLimits

0xda65,	// (0x00064e09) main_mobtv_info_pane_g2

0x0001,

0xfca1,	// (0x00067045) main_mobtv_info_pane_g_ParamLimits

0xfca1,	// (0x00067045) main_mobtv_info_pane_g

0xdbf1,	// (0x00064f95) sc_clock_pane_t5_ParamLimits

0xdbf1,	// (0x00064f95) sc_clock_pane_t5

0xdc7b,	// (0x0006501f) main_radioblah_pane_g1_ParamLimits

0x4583,	// (0x0005b927) main_radioblah_pane_t3_ParamLimits

0x4583,	// (0x0005b927) main_radioblah_pane_t3

0x459b,	// (0x0005b93f) main_radioblah_pane_t4_ParamLimits

0x459b,	// (0x0005b93f) main_radioblah_pane_t4

0xdc99,	// (0x0006503d) main_radioblah_text_pane_ParamLimits

0xdc99,	// (0x0006503d) main_radioblah_text_pane

0xdca6,	// (0x0006504a) main_radioblah_info_pane_g1_ParamLimits

0xdd33,	// (0x000650d7) main_radioblah_info_pane_t4_ParamLimits

0xdd33,	// (0x000650d7) main_radioblah_info_pane_t4

0xa642,	// (0x000619e6) main_sp_fs_calendar_pane

0xe363,	// (0x00065707) main_phacti_pane_g1

0xe374,	// (0x00065718) phacti_note_pane_ParamLimits

0xe374,	// (0x00065718) phacti_note_pane

0xe388,	// (0x0006572c) phacti_term_pane_ParamLimits

0xe388,	// (0x0006572c) phacti_term_pane

0xe39d,	// (0x00065741) phacti_note_pane_t1_ParamLimits

0xe39d,	// (0x00065741) phacti_note_pane_t1

0x70a3,	// (0x0005e447) phacti_term_pane_g1

0x70ab,	// (0x0005e44f) phacti_term_pane_t1_ParamLimits

0x70ab,	// (0x0005e44f) phacti_term_pane_t1

0xe3b4,	// (0x00065758) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe3bc,	// (0x00065760) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfe06,	// (0x000671aa) popup_sp_fs_calendar_preview_list_single_pane_g

0xe3c4,	// (0x00065768) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe3c4,	// (0x00065768) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe3da,	// (0x0006577e) aid_popup_sp_fs_bg_corner_pane

0x2b3a,	// (0x00059ede) popup_sp_fs_calendar_preview_bg_pane_g1

0x7393,	// (0x0005e737) popup_sp_fs_calendar_preview_bg_pane

0xe3e2,	// (0x00065786) popup_sp_fs_calendar_preview_list_pane

0xa642,	// (0x000619e6) bg_main_sp_fs_cale_pane_ParamLimits

0xa642,	// (0x000619e6) bg_main_sp_fs_cale_pane

0x70d5,	// (0x0005e479) listscroll_cale_mrui_pane_ParamLimits

0x70d5,	// (0x0005e479) listscroll_cale_mrui_pane

0x35b9,	// (0x0005a95d) listscroll_sp_fs_schedule_track_pane

0x70e9,	// (0x0005e48d) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x70e9,	// (0x0005e48d) main_sp_fs_ctrlbar_pane_cp01

0xe411,	// (0x000657b5) main_sp_fs_ribbon_pane

0x70fa,	// (0x0005e49e) popup_sp_fs_cale_preview_window

0xe419,	// (0x000657bd) list_single_sp_fs_schedule_track_pane_ParamLimits

0xe419,	// (0x000657bd) list_single_sp_fs_schedule_track_pane

0x75df,	// (0x0005e983) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x75df,	// (0x0005e983) bg_sp_fs_highlight_list_pane_cp03

0xe42e,	// (0x000657d2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe42e,	// (0x000657d2) list_single_sp_fs_schedule_track_pane_g1

0xe43a,	// (0x000657de) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe43a,	// (0x000657de) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfe0b,	// (0x000671af) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfe0b,	// (0x000671af) list_single_sp_fs_schedule_track_pane_g

0xe446,	// (0x000657ea) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe446,	// (0x000657ea) list_single_sp_fs_schedule_track_pane_t1

0xe45e,	// (0x00065802) sp_fs_schedule_track_pane_ParamLimits

0xe45e,	// (0x00065802) sp_fs_schedule_track_pane

0xe46e,	// (0x00065812) sp_fs_schedule_track_pane_g1

0xe476,	// (0x0006581a) sp_fs_schedule_track_pane_g2

0xe47e,	// (0x00065822) sp_fs_schedule_track_pane_g3

0xe486,	// (0x0006582a) sp_fs_schedule_track_pane_g4

0xe48e,	// (0x00065832) sp_fs_schedule_track_pane_g5

0x0004,

0xfe10,	// (0x000671b4) sp_fs_schedule_track_pane_g

0x3549,	// (0x0005a8ed) bg_sp_fs_schedule_viewer_highlight_g1

0x0a78,	// (0x00057e1c) bg_sp_fs_schedule_viewer_highlight_g2

0x3551,	// (0x0005a8f5) bg_sp_fs_schedule_viewer_highlight_g3

0x3559,	// (0x0005a8fd) bg_sp_fs_schedule_viewer_highlight_g4

0x3780,	// (0x0005ab24) bg_sp_fs_schedule_viewer_highlight_g5

0x3569,	// (0x0005a90d) bg_sp_fs_schedule_viewer_highlight_g6

0x3571,	// (0x0005a915) bg_sp_fs_schedule_viewer_highlight_g7

0x3579,	// (0x0005a91d) bg_sp_fs_schedule_viewer_highlight_g8

0x0a58,	// (0x00057dfc) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfe1b,	// (0x000671bf) bg_sp_fs_schedule_viewer_highlight_g

0x7393,	// (0x0005e737) bg_main_sp_fs_ribbon_pane

0xe496,	// (0x0006583a) main_sp_fs_ribbon_pane_g1

0xe49f,	// (0x00065843) main_sp_fs_ribbon_pane_t1

0xe4ae,	// (0x00065852) main_sp_fs_ribbon_pane_t2

0xe4bd,	// (0x00065861) main_sp_fs_ribbon_pane_t3

0x0002,

0xfe2e,	// (0x000671d2) main_sp_fs_ribbon_pane_t

0xe4cc,	// (0x00065870) main_sp_fs_ribbon_scheduler_pane

0xe4d4,	// (0x00065878) bg_main_sp_fs_ribbon_pane_g1

0xe4dd,	// (0x00065881) bg_main_sp_fs_ribbon_pane_g2

0xe4e6,	// (0x0006588a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfe35,	// (0x000671d9) bg_main_sp_fs_ribbon_pane_g

0xe4ee,	// (0x00065892) main_sp_fs_ribbon_scheduler_pane_g1

0xe4f7,	// (0x0006589b) main_sp_fs_ribbon_scheduler_pane_g2

0xe500,	// (0x000658a4) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe3c,	// (0x000671e0) main_sp_fs_ribbon_scheduler_pane_g

0x45f5,	// (0x0005b999) list_cale_mrui_pane

0xe509,	// (0x000658ad) sp_fs_scroll_pane_cp07_ParamLimits

0xe509,	// (0x000658ad) sp_fs_scroll_pane_cp07

0xe51e,	// (0x000658c2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe51e,	// (0x000658c2) bg_sp_fs_schedule_viewer_highlight

0xe52b,	// (0x000658cf) list_single_sp_fs_schedule_track_pane_cp01

0xe533,	// (0x000658d7) list_sp_fs_schedule_track_pane

0xe53b,	// (0x000658df) sp_fs_scroll_pane_cp06_ParamLimits

0xe53b,	// (0x000658df) sp_fs_scroll_pane_cp06

0x2b3a,	// (0x00059ede) bgmain_sp_fs_calendar_pane_g1

0x710c,	// (0x0005e4b0) list_single_cale_mrui_pane_ParamLimits

0x710c,	// (0x0005e4b0) list_single_cale_mrui_pane

0x7131,	// (0x0005e4d5) list_single_cale_mrui_row_pane_ParamLimits

0x7131,	// (0x0005e4d5) list_single_cale_mrui_row_pane

0x713e,	// (0x0005e4e2) list_single_cale_mrui_row_pane_g1_ParamLimits

0x713e,	// (0x0005e4e2) list_single_cale_mrui_row_pane_g1

0x7176,	// (0x0005e51a) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7176,	// (0x0005e51a) list_single_cale_mrui_row_pane_t1

0x7188,	// (0x0005e52c) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7188,	// (0x0005e52c) list_single_cale_mrui_row_pane_t2

0x71ee,	// (0x0005e592) list_single_cale_mrui_row_pane_t3_ParamLimits

0x71ee,	// (0x0005e592) list_single_cale_mrui_row_pane_t3

0x721d,	// (0x0005e5c1) list_single_cale_mrui_row_pane_t4_ParamLimits

0x721d,	// (0x0005e5c1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe48,	// (0x000671ec) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe48,	// (0x000671ec) list_single_cale_mrui_row_pane_t

0x724c,	// (0x0005e5f0) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x724c,	// (0x0005e5f0) list_single_cmail_header_editor_pane_bg_cp01

0x7270,	// (0x0005e614) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7270,	// (0x0005e614) list_single_cmail_header_editor_pane_bg_cp02

0xe54d,	// (0x000658f1) main_radioblah_text_pane_t1_ParamLimits

0xe54d,	// (0x000658f1) main_radioblah_text_pane_t1

0xe566,	// (0x0006590a) cam6_indi_pane_cp01

0xe56e,	// (0x00065912) cam6_mode_pane_cp01

0xe576,	// (0x0006591a) cam6_pano_pane

0xe57f,	// (0x00065923) cam6_zoom_pane_cp01

0xe587,	// (0x0006592b) cam6_pano_image_pane

0xe590,	// (0x00065934) cam6_pano_pane_g1

0x4301,	// (0x0005b6a5) cam6_pano_pane_g2

0xe599,	// (0x0006593d) cam6_pano_pane_g3

0xe5a2,	// (0x00065946) cam6_pano_pane_g4

0x30a0,	// (0x0005a444) cam6_pano_pane_g5

0xe5ab,	// (0x0006594f) cam6_pano_pane_g6

0xe5b3,	// (0x00065957) cam6_pano_pane_g7

0xe5bb,	// (0x0006595f) cam6_pano_pane_g8

0xe5c4,	// (0x00065968) cam6_pano_pane_g9

0x0008,

0xfe51,	// (0x000671f5) cam6_pano_pane_g

0x7393,	// (0x0005e737) main_browser_tag_pane

0xe316,	// (0x000656ba) grid_navstr_albumart_pane

0xe5cd,	// (0x00065971) cell_navstr_albumart_pane_ParamLimits

0xe5cd,	// (0x00065971) cell_navstr_albumart_pane

0x13f7,	// (0x0005879b) cell_navstr_albumart_pane_g1

0x24d4,	// (0x00059878) cell_navstr_albumart_pane_g2

0x24e4,	// (0x00059888) cell_navstr_albumart_pane_g3

0x24dc,	// (0x00059880) cell_navstr_albumart_pane_g4

0x0003,

0xfe64,	// (0x00067208) cell_navstr_albumart_pane_g

0xe5e4,	// (0x00065988) bt_list_pane_ParamLimits

0xe5e4,	// (0x00065988) bt_list_pane

0xe5f9,	// (0x0006599d) bt_list_pane_t1

0xe608,	// (0x000659ac) bt_list_pane_t2

0x0001,

0xfe6d,	// (0x00067211) bt_list_pane_t

0x7393,	// (0x0005e737) main_cale_prevew_pane

0xe617,	// (0x000659bb) popup_cale_preview_window_ParamLimits

0xe617,	// (0x000659bb) popup_cale_preview_window

0xa642,	// (0x000619e6) bg_popup_preview_window_pane_cp05_ParamLimits

0xa642,	// (0x000619e6) bg_popup_preview_window_pane_cp05

0xe62c,	// (0x000659d0) list_cale_preview_pane_ParamLimits

0xe62c,	// (0x000659d0) list_cale_preview_pane

0xe638,	// (0x000659dc) list_double_cale_preview_pane_ParamLimits

0xe638,	// (0x000659dc) list_double_cale_preview_pane

0xe649,	// (0x000659ed) list_single_cale_preview_pane_ParamLimits

0xe649,	// (0x000659ed) list_single_cale_preview_pane

0xe65d,	// (0x00065a01) list_single_cale_preview_pane_g1

0xe665,	// (0x00065a09) list_single_cale_preview_pane_t1_ParamLimits

0xe665,	// (0x00065a09) list_single_cale_preview_pane_t1

0xe67a,	// (0x00065a1e) list_double_cale_preview_pane_g1

0xe682,	// (0x00065a26) list_double_cale_preview_pane_t1_ParamLimits

0xe682,	// (0x00065a26) list_double_cale_preview_pane_t1

0xe697,	// (0x00065a3b) list_double_cale_preview_pane_t2_ParamLimits

0xe697,	// (0x00065a3b) list_double_cale_preview_pane_t2

0x0001,

0xfe72,	// (0x00067216) list_double_cale_preview_pane_t_ParamLimits

0xfe72,	// (0x00067216) list_double_cale_preview_pane_t

0x7393,	// (0x0005e737) main_ezdial_pane

0xa642,	// (0x000619e6) main_sp_fs_email_pane_ParamLimits

0xdfb2,	// (0x00065356) cmail_ddmenu_btn01_pane_ParamLimits

0xdfb2,	// (0x00065356) cmail_ddmenu_btn01_pane

0xdfcf,	// (0x00065373) cmail_ddmenu_btn02_pane_ParamLimits

0xdfcf,	// (0x00065373) cmail_ddmenu_btn02_pane

0xe025,	// (0x000653c9) cmail_ddmenu_btn03_pane_ParamLimits

0xe025,	// (0x000653c9) cmail_ddmenu_btn03_pane

0x6bfd,	// (0x0005dfa1) main_sp_fs_ctrlbar_pane_ParamLimits

0x6c15,	// (0x0005dfb9) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xe1f7,	// (0x0006559b) list_cmail_body_pane_ParamLimits

0x701d,	// (0x0005e3c1) bg_button_pane_cp12

0xe253,	// (0x000655f7) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe253,	// (0x000655f7) list_single_cmail_header_detail_pane_g3

0x706d,	// (0x0005e411) list_single_cmail_header_detail_pane_t2_ParamLimits

0x706d,	// (0x0005e411) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdf7,	// (0x0006719b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdf7,	// (0x0006719b) list_single_cmail_header_detail_pane_t

0x70c0,	// (0x0005e464) phacti_term_pane_t2_ParamLimits

0x70c0,	// (0x0005e464) phacti_term_pane_t2

0x0001,

0xfe01,	// (0x000671a5) phacti_term_pane_t_ParamLimits

0xfe01,	// (0x000671a5) phacti_term_pane_t

0xe6af,	// (0x00065a53) aid_size_list_single_double

0xe6bb,	// (0x00065a5f) popup_ezdial_listscroll_window

0xe6d4,	// (0x00065a78) popup_number_entry_window_cp01

0x1288,	// (0x0005862c) bg_popup_call_pane_cp09

0xe6e0,	// (0x00065a84) ezdial_list_pane

0xe6e8,	// (0x00065a8c) scroll_pane_cp23

0x2927,	// (0x00059ccb) bg_button_pane_cp028_ParamLimits

0x2927,	// (0x00059ccb) bg_button_pane_cp028

0xe6f0,	// (0x00065a94) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe6f0,	// (0x00065a94) cmail_ddmenu_btn01_pane_g1

0xe702,	// (0x00065aa6) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe702,	// (0x00065aa6) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe77,	// (0x0006721b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe77,	// (0x0006721b) cmail_ddmenu_btn01_pane_g

0xe70e,	// (0x00065ab2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe70e,	// (0x00065ab2) cmail_ddmenu_btn01_pane_t1

0x26f7,	// (0x00059a9b) bg_button_pane_cp029_ParamLimits

0x26f7,	// (0x00059a9b) bg_button_pane_cp029

0xe702,	// (0x00065aa6) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe702,	// (0x00065aa6) cmail_ddmenu_btn02_pane_g1

0xe72f,	// (0x00065ad3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe72f,	// (0x00065ad3) cmail_ddmenu_btn02_pane_t1

0x75df,	// (0x0005e983) bg_button_pane_cp031_ParamLimits

0x75df,	// (0x0005e983) bg_button_pane_cp031

0xe702,	// (0x00065aa6) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe702,	// (0x00065aa6) cmail_ddmenu_btn03_pane_g1

0xe72f,	// (0x00065ad3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe72f,	// (0x00065ad3) cmail_ddmenu_btn03_pane_t1

0xc090,	// (0x00063434) cell_dialer2_keypad_pane_t1_ParamLimits

0xc0aa,	// (0x0006344e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc0aa,	// (0x0006344e) cell_dialer2_keypad_pane_t1_copy1

0xd914,	// (0x00064cb8) ncimui_group_button_pane

0xa642,	// (0x000619e6) main_sp_fs_calendar_pane_ParamLimits

0xe1f7,	// (0x0006559b) list_single_cmail_header_caption_pane_ParamLimits

0x3aa9,	// (0x0005ae4d) aid_recal_txt_sm_pane

0x7393,	// (0x0005e737) mian_recal_day_pane

0x70fa,	// (0x0005e49e) popup_sp_fs_cale_preview_window_ParamLimits

0x7393,	// (0x0005e737) list_recal_day_pane

0x7297,	// (0x0005e63b) list_single_recal_day_pane_ParamLimits

0x7297,	// (0x0005e63b) list_single_recal_day_pane

0xe763,	// (0x00065b07) list_single_recal_day_pane_g1_ParamLimits

0xe763,	// (0x00065b07) list_single_recal_day_pane_g1

0x72a9,	// (0x0005e64d) list_single_recal_day_pane_g2_ParamLimits

0x72a9,	// (0x0005e64d) list_single_recal_day_pane_g2

0x72b5,	// (0x0005e659) list_single_recal_day_pane_g3_ParamLimits

0x72b5,	// (0x0005e659) list_single_recal_day_pane_g3

0x72c1,	// (0x0005e665) list_single_recal_day_pane_g4_ParamLimits

0x72c1,	// (0x0005e665) list_single_recal_day_pane_g4

0x72cd,	// (0x0005e671) list_single_recal_day_pane_g5_ParamLimits

0x72cd,	// (0x0005e671) list_single_recal_day_pane_g5

0x72d9,	// (0x0005e67d) list_single_recal_day_pane_g6_ParamLimits

0x72d9,	// (0x0005e67d) list_single_recal_day_pane_g6

0x0005,

0xfe86,	// (0x0006722a) list_single_recal_day_pane_g_ParamLimits

0xfe86,	// (0x0006722a) list_single_recal_day_pane_g

0x72e5,	// (0x0005e689) list_single_recal_day_pane_t1

0x72f3,	// (0x0005e697) list_single_recal_day_pane_t2

0x0001,

0xfe93,	// (0x00067237) list_single_recal_day_pane_t

0xe76f,	// (0x00065b13) ncimui_query_button_pane_ParamLimits

0xe76f,	// (0x00065b13) ncimui_query_button_pane

0xe77f,	// (0x00065b23) ncimui_query_button_pane_t1_ParamLimits

0xe77f,	// (0x00065b23) ncimui_query_button_pane_t1

0xe792,	// (0x00065b36) ncimui_query_button_pane_t2_ParamLimits

0xe792,	// (0x00065b36) ncimui_query_button_pane_t2

0x0001,

0xfe98,	// (0x0006723c) ncimui_query_button_pane_t_ParamLimits

0xfe98,	// (0x0006723c) ncimui_query_button_pane_t

0xe7a5,	// (0x00065b49) query_button_pane_ParamLimits

0xe7a5,	// (0x00065b49) query_button_pane

0x7393,	// (0x0005e737) bg_button_pane_cp0028

0xe7b2,	// (0x00065b56) query_button_pane_t1

0xa65e,	// (0x00061a02) main_tport_pane_ParamLimits

0xe0e3,	// (0x00065487) bg_popup_window_pane_cp01_ParamLimits

0xe0e3,	// (0x00065487) bg_popup_window_pane_cp01

0xe0f0,	// (0x00065494) heading_pane_cp08_ParamLimits

0xe0f0,	// (0x00065494) heading_pane_cp08

0xe0fc,	// (0x000654a0) heading_pane_cp07_ParamLimits

0xe0fc,	// (0x000654a0) heading_pane_cp07

0xe17c,	// (0x00065520) cell_tport_appsw_pane_g2

0x0002,

0xfde4,	// (0x00067188) cell_tport_appsw_pane_g

0x668f,	// (0x0005da33) input_candi_list_open_g1

0x0c4a,	// (0x00057fee) list_cale_time_pane_g6_ParamLimits

0x0c4a,	// (0x00057fee) list_cale_time_pane_g6

0xb007,	// (0x000623ab) aid_size_touch_calib_1_ParamLimits

0xb007,	// (0x000623ab) aid_size_touch_calib_1

0xb013,	// (0x000623b7) aid_size_touch_calib_2_ParamLimits

0xb013,	// (0x000623b7) aid_size_touch_calib_2

0xb01f,	// (0x000623c3) aid_size_touch_calib_3_ParamLimits

0xb01f,	// (0x000623c3) aid_size_touch_calib_3

0xb02d,	// (0x000623d1) aid_size_touch_calib_4_ParamLimits

0xb02d,	// (0x000623d1) aid_size_touch_calib_4

0xb03b,	// (0x000623df) main_touch_calib_button_group_pane_ParamLimits

0xb03b,	// (0x000623df) main_touch_calib_button_group_pane

0xb048,	// (0x000623ec) main_touch_calib_pane_g1_ParamLimits

0xb054,	// (0x000623f8) main_touch_calib_pane_g2_ParamLimits

0xb060,	// (0x00062404) main_touch_calib_pane_g3_ParamLimits

0xb06c,	// (0x00062410) main_touch_calib_pane_g4_ParamLimits

0xf7cb,	// (0x00066b6f) main_touch_calib_pane_g_ParamLimits

0xb078,	// (0x0006241c) main_touch_calib_pane_t1_ParamLimits

0xb08d,	// (0x00062431) main_touch_calib_pane_t2_ParamLimits

0xb0a2,	// (0x00062446) main_touch_calib_pane_t3_ParamLimits

0xb0b4,	// (0x00062458) main_touch_calib_pane_t4_ParamLimits

0xb0c6,	// (0x0006246a) main_touch_calib_pane_t5_ParamLimits

0xf7d4,	// (0x00066b78) main_touch_calib_pane_t_ParamLimits

0x2ecb,	// (0x0005a26f) list_single_fp_cale_pane_g3_ParamLimits

0x2ecb,	// (0x0005a26f) list_single_fp_cale_pane_g3

0xa642,	// (0x000619e6) bg_button_pane_cp012_ParamLimits

0xa642,	// (0x000619e6) bg_vkb2_func_pane_cp03_ParamLimits

0xcd6b,	// (0x0006410f) cell_vitu2_function_top_pane_g1_ParamLimits

0xa642,	// (0x000619e6) bg_vkb2_func_pane_cp04_ParamLimits

0xd8c7,	// (0x00064c6b) main_ncimui_button_group_pane_ParamLimits

0xd8c7,	// (0x00064c6b) main_ncimui_button_group_pane

0xd902,	// (0x00064ca6) main_ncimui_pane_t3_ParamLimits

0xd902,	// (0x00064ca6) main_ncimui_pane_t3

0xe36b,	// (0x0006570f) phacti_button_group_pane

0xe6af,	// (0x00065a53) aid_size_list_single_double_ParamLimits

0xe6bb,	// (0x00065a5f) popup_ezdial_listscroll_window_ParamLimits

0xe6d4,	// (0x00065a78) popup_number_entry_window_cp01_ParamLimits

0xe7c0,	// (0x00065b64) phacti_button_pane_ParamLimits

0xe7c0,	// (0x00065b64) phacti_button_pane

0x7393,	// (0x0005e737) bg_button_pane_cp14

0xe7cf,	// (0x00065b73) phacti_button_pane_t1

0xe7dd,	// (0x00065b81) main_touch_calib_button_pane_ParamLimits

0xe7dd,	// (0x00065b81) main_touch_calib_button_pane

0x8040,	// (0x0005f3e4) bg_button_pane_cp18_ParamLimits

0x8040,	// (0x0005f3e4) bg_button_pane_cp18

0xe7ed,	// (0x00065b91) main_touch_calib_button_pane_t1_ParamLimits

0xe7ed,	// (0x00065b91) main_touch_calib_button_pane_t1

0xe803,	// (0x00065ba7) main_touch_calib_button_pane_t2_ParamLimits

0xe803,	// (0x00065ba7) main_touch_calib_button_pane_t2

0x0001,

0xfe9d,	// (0x00067241) main_touch_calib_button_pane_t_ParamLimits

0xfe9d,	// (0x00067241) main_touch_calib_button_pane_t

0x7393,	// (0x0005e737) cell_ncimui_button_pane

0x7393,	// (0x0005e737) bg_button_pane_cp032

0xe821,	// (0x00065bc5) cell_ncimui_button_pane_t1

0xc0fc,	// (0x000634a0) image3_infobar_pane_ParamLimits

0xc0fc,	// (0x000634a0) image3_infobar_pane

0xdc11,	// (0x00064fb5) fs_bigclock_status_pane_ParamLimits

0xdc11,	// (0x00064fb5) fs_bigclock_status_pane

0xdc1e,	// (0x00064fc2) main_fs_bigclock_clock_pane_ParamLimits

0xdc1e,	// (0x00064fc2) main_fs_bigclock_clock_pane

0xdc2e,	// (0x00064fd2) main_fs_bigclock_indi_pane_ParamLimits

0xdc2e,	// (0x00064fd2) main_fs_bigclock_indi_pane

0xdc53,	// (0x00064ff7) main_fs_bigclock_swipe_pane_ParamLimits

0xdc53,	// (0x00064ff7) main_fs_bigclock_swipe_pane

0x7393,	// (0x0005e737) main_fs_clock_dumped_data

0x440e,	// (0x0005b7b2) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x440e,	// (0x0005b7b2) list_single_fs_bigclock_indicator_pane_g1

0x4428,	// (0x0005b7cc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x4428,	// (0x0005b7cc) list_single_fs_bigclock_indicator_pane_g2

0x4442,	// (0x0005b7e6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x4442,	// (0x0005b7e6) list_single_fs_bigclock_indicator_pane_g3

0x445c,	// (0x0005b800) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x445c,	// (0x0005b800) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfcd5,	// (0x00067079) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfcd5,	// (0x00067079) list_single_fs_bigclock_indicator_pane_g

0x4480,	// (0x0005b824) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x4480,	// (0x0005b824) list_single_fs_bigclock_indicator_pane_t1

0x44a8,	// (0x0005b84c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x44a8,	// (0x0005b84c) list_single_fs_bigclock_indicator_pane_t2

0x44d0,	// (0x0005b874) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x44d0,	// (0x0005b874) list_single_fs_bigclock_indicator_pane_t3

0x44f8,	// (0x0005b89c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x44f8,	// (0x0005b89c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfce0,	// (0x00067084) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfce0,	// (0x00067084) list_single_fs_bigclock_indicator_pane_t

0xe82f,	// (0x00065bd3) image3_infobar_fav_pane_ParamLimits

0xe82f,	// (0x00065bd3) image3_infobar_fav_pane

0xe83f,	// (0x00065be3) image3_infobar_loc_pane_ParamLimits

0xe83f,	// (0x00065be3) image3_infobar_loc_pane

0xe853,	// (0x00065bf7) image3_infobar_time_pane_ParamLimits

0xe853,	// (0x00065bf7) image3_infobar_time_pane

0x2b3a,	// (0x00059ede) image3_infobar_time_pane_g1

0xe863,	// (0x00065c07) image3_infobar_time_pane_t1

0x2b3a,	// (0x00059ede) image3_infobar_loc_pane_g1

0xe871,	// (0x00065c15) image3_infobar_loc_pane_g2

0x0001,

0xfea2,	// (0x00067246) image3_infobar_loc_pane_g

0xe879,	// (0x00065c1d) image3_infobar_loc_pane_t1

0x2b3a,	// (0x00059ede) image3_infobar_fav_pane_g1

0xe887,	// (0x00065c2b) image3_infobar_fav_pane_g2

0x0001,

0xfea7,	// (0x0006724b) image3_infobar_fav_pane_g

0xe88f,	// (0x00065c33) fs_bigclock_status_battery_pane

0xe898,	// (0x00065c3c) fs_bigclock_status_signal_pane

0xe8a1,	// (0x00065c45) fs_bigclock_status_title_pane

0xe8aa,	// (0x00065c4e) fs_bigclock_status_signal_pane_g1

0xe8b3,	// (0x00065c57) fs_bigclock_status_signal_pane_g2

0x0001,

0xfeac,	// (0x00067250) fs_bigclock_status_signal_pane_g

0xe8bb,	// (0x00065c5f) fs_bigclock_status_battery_pane_g1

0xe8c4,	// (0x00065c68) fs_bigclock_status_battery_pane_g2

0x0001,

0xfeb1,	// (0x00067255) fs_bigclock_status_battery_pane_g

0xe8cc,	// (0x00065c70) fs_bigclock_status_title_pane_t1

0x2b3a,	// (0x00059ede) main_fs_bigclock_clock_pane_g1

0xe8da,	// (0x00065c7e) main_fs_bigclock_clock_pane_g2

0xe8da,	// (0x00065c7e) main_fs_bigclock_clock_pane_g3

0xe8da,	// (0x00065c7e) main_fs_bigclock_clock_pane_g4

0x0003,

0xfeb6,	// (0x0006725a) main_fs_bigclock_clock_pane_g

0xe8e2,	// (0x00065c86) main_fs_bigclock_clock_pane_t1

0xe8f0,	// (0x00065c94) main_fs_bigclock_clock_pane_t2

0x0001,

0xfebf,	// (0x00067263) main_fs_bigclock_clock_pane_t

0xe8ff,	// (0x00065ca3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe8ff,	// (0x00065ca3) list_single_fs_bigclock_indicator_pane

0xe910,	// (0x00065cb4) list_single_fs_bigclock_pane_ParamLimits

0xe910,	// (0x00065cb4) list_single_fs_bigclock_pane

0xe977,	// (0x00065d1b) main_fs_bigclock_indicator_pane_t1

0xe986,	// (0x00065d2a) list_single_fs_bigclock_pane_g1

0xe98e,	// (0x00065d32) list_single_fs_bigclock_pane_t1

0x2b3a,	// (0x00059ede) main_fs_bigclock_swipe_pane_g1

0xe9cc,	// (0x00065d70) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfed0,	// (0x00067274) main_fs_bigclock_swipe_pane_g

0xe9d4,	// (0x00065d78) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe9d4,	// (0x00065d78) main_fs_bigclock_swipe_pane_t1

0x9862,	// (0x00060c06) call_type_pane_ParamLimits

0x7393,	// (0x0005e737) main_btmg_pane

0x716a,	// (0x0005e50e) list_single_cale_mrui_row_pane_g2_ParamLimits

0x716a,	// (0x0005e50e) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe43,	// (0x000671e7) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe43,	// (0x000671e7) list_single_cale_mrui_row_pane_g

0xe753,	// (0x00065af7) list_recal_vselct_arw_lo_pane

0xe75b,	// (0x00065aff) list_recal_vselct_arw_up_pane

0x728e,	// (0x0005e632) list_recal_vselct_pane

0xe9f1,	// (0x00065d95) btmg_button_pane

0xe9f9,	// (0x00065d9d) main_btmg_pane_g1

0x7393,	// (0x0005e737) bg_button_pane_cp044

0xea01,	// (0x00065da5) btmg_button_pane_t1

0x26ef,	// (0x00059a93) aid_listscroll_gen

0xa642,	// (0x000619e6) main_cntbar_detail_pane

0xe1db,	// (0x0006557f) list_cmail_folder_pane

0xe1eb,	// (0x0006558f) sp_fs_scroll_pane_cp03_ParamLimits

0x7301,	// (0x0005e6a5) list_single_fs_dyc_pane_cp01_ParamLimits

0x7301,	// (0x0005e6a5) list_single_fs_dyc_pane_cp01

0xea0f,	// (0x00065db3) aid_size_cmail_indent

0xd24f,	// (0x000645f3) list_single_dyc_row_pane_cp01

0xea32,	// (0x00065dd6) cntbar_detail_list_pane_ParamLimits

0xea32,	// (0x00065dd6) cntbar_detail_list_pane

0xea68,	// (0x00065e0c) main_cntbar_detail_cont_pane_ParamLimits

0xea68,	// (0x00065e0c) main_cntbar_detail_cont_pane

0xea74,	// (0x00065e18) scroll_pane_cp032_ParamLimits

0xea74,	// (0x00065e18) scroll_pane_cp032

0xea80,	// (0x00065e24) cntbar_detail_list_event_pane_ParamLimits

0xea80,	// (0x00065e24) cntbar_detail_list_event_pane

0xea3e,	// (0x00065de2) cntbar_detail_list_shct_pane

0xea90,	// (0x00065e34) aid_list_gen

0x82c2,	// (0x0005f666) aid_scroll

0x3a90,	// (0x0005ae34) aid_size_touch_scroll_bar

0xea99,	// (0x00065e3d) aid_list_double

0x7318,	// (0x0005e6bc) aid_list_single

0x4b2a,	// (0x0005bece) aid_list_single_lg

0x7321,	// (0x0005e6c5) aid_list_z_g_a_sm

0x7329,	// (0x0005e6cd) aid_list_z_g_d

0x7331,	// (0x0005e6d5) aid_txt_z_prm

0x733f,	// (0x0005e6e3) aid_txt_z_prm_cp01

0x734d,	// (0x0005e6f1) aid_txt_z_sec

0xeaa2,	// (0x00065e46) main_cntbar_detail_cont_pane_g1_ParamLimits

0xeaa2,	// (0x00065e46) main_cntbar_detail_cont_pane_g1

0xeaaf,	// (0x00065e53) main_cntbar_detail_cont_pane_g2_ParamLimits

0xeaaf,	// (0x00065e53) main_cntbar_detail_cont_pane_g2

0x0001,

0xfed5,	// (0x00067279) main_cntbar_detail_cont_pane_g_ParamLimits

0xfed5,	// (0x00067279) main_cntbar_detail_cont_pane_g

0xeabb,	// (0x00065e5f) main_cntbar_detail_cont_pane_t1

0xeac9,	// (0x00065e6d) main_cntbar_detail_cont_pane_t2

0xead7,	// (0x00065e7b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfeda,	// (0x0006727e) main_cntbar_detail_cont_pane_t

0xeae5,	// (0x00065e89) cell_cntbar_detail_list_shct_pane_ParamLimits

0xeae5,	// (0x00065e89) cell_cntbar_detail_list_shct_pane

0xeaf7,	// (0x00065e9b) cntbar_detail_list_shct_pane_g1

0xeb00,	// (0x00065ea4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfee1,	// (0x00067285) cntbar_detail_list_shct_pane_g

0xeb09,	// (0x00065ead) cntbar_detail_list_event_pane_g1_ParamLimits

0xeb09,	// (0x00065ead) cntbar_detail_list_event_pane_g1

0xeb15,	// (0x00065eb9) cntbar_detail_list_event_pane_g2_ParamLimits

0xeb15,	// (0x00065eb9) cntbar_detail_list_event_pane_g2

0x0005,

0xfee6,	// (0x0006728a) cntbar_detail_list_event_pane_g_ParamLimits

0xfee6,	// (0x0006728a) cntbar_detail_list_event_pane_g

0xeb81,	// (0x00065f25) cntbar_detail_list_event_pane_t1_ParamLimits

0xeb81,	// (0x00065f25) cntbar_detail_list_event_pane_t1

0xeb96,	// (0x00065f3a) cntbar_detail_list_event_pane_t2_ParamLimits

0xeb96,	// (0x00065f3a) cntbar_detail_list_event_pane_t2

0x0002,

0xfef3,	// (0x00067297) cntbar_detail_list_event_pane_t_ParamLimits

0xfef3,	// (0x00067297) cntbar_detail_list_event_pane_t

0x2b3a,	// (0x00059ede) cell_cntbar_detail_list_shct_pane_g1

0x1247,	// (0x000585eb) navi_pane_mv_g3

0xa642,	// (0x000619e6) main_cntbar_detail_pane_ParamLimits

0x7393,	// (0x0005e737) main_notif_wgt_pane

0xbdea,	// (0x0006318e) aid_tch_main_mp4_pane_g4

0xc011,	// (0x000633b5) popup_slider_window_cp02

0x728e,	// (0x0005e632) list_recal_day_event_pane

0xea18,	// (0x00065dbc) cntbar_detail_btn_pane_ParamLimits

0xea18,	// (0x00065dbc) cntbar_detail_btn_pane

0xea24,	// (0x00065dc8) cntbar_detail_btn_pane_cp01_ParamLimits

0xea24,	// (0x00065dc8) cntbar_detail_btn_pane_cp01

0xea3e,	// (0x00065de2) cntbar_detail_list_shct_pane_ParamLimits

0xea4a,	// (0x00065dee) cntbar_detail_pane_g1_ParamLimits

0xea4a,	// (0x00065dee) cntbar_detail_pane_g1

0xea56,	// (0x00065dfa) cntbar_detail_pane_t1_ParamLimits

0xea56,	// (0x00065dfa) cntbar_detail_pane_t1

0xeb21,	// (0x00065ec5) cntbar_detail_list_event_pane_g3_ParamLimits

0xeb21,	// (0x00065ec5) cntbar_detail_list_event_pane_g3

0xeb39,	// (0x00065edd) cntbar_detail_list_event_pane_g4_ParamLimits

0xeb39,	// (0x00065edd) cntbar_detail_list_event_pane_g4

0xeb51,	// (0x00065ef5) cntbar_detail_list_event_pane_g5_ParamLimits

0xeb51,	// (0x00065ef5) cntbar_detail_list_event_pane_g5

0xeb69,	// (0x00065f0d) cntbar_detail_list_event_pane_g6_ParamLimits

0xeb69,	// (0x00065f0d) cntbar_detail_list_event_pane_g6

0xebab,	// (0x00065f4f) cntbar_detail_list_event_pane_t3_ParamLimits

0xebab,	// (0x00065f4f) cntbar_detail_list_event_pane_t3

0xebbd,	// (0x00065f61) popup_notif_wgt_window_ParamLimits

0xebbd,	// (0x00065f61) popup_notif_wgt_window

0xebcb,	// (0x00065f6f) popup_submenu_window_cp01_ParamLimits

0xebcb,	// (0x00065f6f) popup_submenu_window_cp01

0x1288,	// (0x0005862c) bg_popup_window_pane_cp10

0xebd7,	// (0x00065f7b) listscroll_notif_wgt_pane

0xebdf,	// (0x00065f83) list_notif_wgt_window

0xebe8,	// (0x00065f8c) scroll_pane_cp033

0xebf1,	// (0x00065f95) list_notif_wgt_row_pane_ParamLimits

0xebf1,	// (0x00065f95) list_notif_wgt_row_pane

0xec03,	// (0x00065fa7) aid_size_list_notif_wgt_del

0xec0c,	// (0x00065fb0) list_notif_wgt_row_pane_g1

0xec14,	// (0x00065fb8) list_notif_wgt_row_pane_g2

0xec1c,	// (0x00065fc0) list_notif_wgt_row_pane_g3

0x0002,

0xfefa,	// (0x0006729e) list_notif_wgt_row_pane_g

0xec25,	// (0x00065fc9) list_notif_wgt_row_pane_t1

0xec33,	// (0x00065fd7) list_notif_wgt_row_pane_t2

0xec41,	// (0x00065fe5) list_notif_wgt_row_pane_t3

0x0002,

0xff01,	// (0x000672a5) list_notif_wgt_row_pane_t

0x379a,	// (0x0005ab3e) list_recal_day_event_pane_g1

0xec4f,	// (0x00065ff3) list_recal_day_event_pane_t1

0x7393,	// (0x0005e737) bg_button_pane_cp045

0xec5e,	// (0x00066002) cntbar_detail_btn_pane_t1

0x26f7,	// (0x00059a9b) main_callh_pane_ParamLimits

0x26f7,	// (0x00059a9b) main_callh_pane

0x7393,	// (0x0005e737) main_coverflow0_pane

0x7393,	// (0x0005e737) main_wgtman_pane

0xdc65,	// (0x00065009) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdc65,	// (0x00065009) main_fs_bigclock_unlock_btn_pane

0xe16b,	// (0x0006550f) bg_button_pane_cp16

0xe184,	// (0x00065528) cell_tport_appsw_pane_g3

0xec6c,	// (0x00066010) cf0_flow_pane_ParamLimits

0xec6c,	// (0x00066010) cf0_flow_pane

0xec7b,	// (0x0006601f) listscroll_cf0_pane

0xec84,	// (0x00066028) main_cf0_pane_g1

0xec8e,	// (0x00066032) main_cf0_pane_t1_ParamLimits

0xec8e,	// (0x00066032) main_cf0_pane_t1

0xeca0,	// (0x00066044) main_cf0_pane_t2_ParamLimits

0xeca0,	// (0x00066044) main_cf0_pane_t2

0x0001,

0xff08,	// (0x000672ac) main_cf0_pane_t_ParamLimits

0xff08,	// (0x000672ac) main_cf0_pane_t

0xecb2,	// (0x00066056) scroll_pane_cp11

0xecbb,	// (0x0006605f) cf0_flow_pane_g1

0xecc3,	// (0x00066067) cf0_flow_pane_g2

0x0001,

0xff0d,	// (0x000672b1) cf0_flow_pane_g

0xeccb,	// (0x0006606f) cf0_flow_pane_t1

0x7393,	// (0x0005e737) main_call6_pane

0x7393,	// (0x0005e737) main_calllock_pane

0xecd9,	// (0x0006607d) call6_btn_grp_pane_ParamLimits

0xecd9,	// (0x0006607d) call6_btn_grp_pane

0xece6,	// (0x0006608a) call6_pane_g1_ParamLimits

0xece6,	// (0x0006608a) call6_pane_g1

0xecf3,	// (0x00066097) popup_call6_1st_window_ParamLimits

0xecf3,	// (0x00066097) popup_call6_1st_window

0xecff,	// (0x000660a3) popup_call6_2nd_window_ParamLimits

0xecff,	// (0x000660a3) popup_call6_2nd_window

0xed0b,	// (0x000660af) cell_call6_btn_pane_ParamLimits

0xed0b,	// (0x000660af) cell_call6_btn_pane

0x1288,	// (0x0005862c) bg_popup_call2_in_pane_cp03

0xed1a,	// (0x000660be) popup_call6_1st_window_g1

0xed22,	// (0x000660c6) popup_call6_1st_window_g2

0xed2a,	// (0x000660ce) popup_call6_1st_window_g3

0x0002,

0xff12,	// (0x000672b6) popup_call6_1st_window_g

0xed32,	// (0x000660d6) popup_call6_1st_window_t1

0xed41,	// (0x000660e5) popup_call6_1st_window_t2

0xed4f,	// (0x000660f3) popup_call6_1st_window_t3

0x0002,

0xff19,	// (0x000672bd) popup_call6_1st_window_t

0x1288,	// (0x0005862c) bg_popup_call2_in_pane_cp04

0xed1a,	// (0x000660be) popup_call6_2nd_window_g1

0xed22,	// (0x000660c6) popup_call6_2nd_window_g2

0xed2a,	// (0x000660ce) popup_call6_2nd_window_g3

0x0002,

0xff12,	// (0x000672b6) popup_call6_2nd_window_g

0xed32,	// (0x000660d6) popup_call6_2nd_window_t1

0x7393,	// (0x0005e737) bg_button_pane_cp15

0xed5d,	// (0x00066101) cell_call6_btn_pane_g1

0xed66,	// (0x0006610a) cell_call6_btn_pane_t1

0xed75,	// (0x00066119) listscroll_wgtman_pane_ParamLimits

0xed75,	// (0x00066119) listscroll_wgtman_pane

0xed82,	// (0x00066126) wgtman_btn_pane_ParamLimits

0xed82,	// (0x00066126) wgtman_btn_pane

0x10c9,	// (0x0005846d) aid_scroll_copy1

0xed8e,	// (0x00066132) list_wgtman_pane

0xed98,	// (0x0006613c) wgtman_btn_pane_g1_ParamLimits

0xed98,	// (0x0006613c) wgtman_btn_pane_g1

0xeda4,	// (0x00066148) wgtman_btn_pane_t1_ParamLimits

0xeda4,	// (0x00066148) wgtman_btn_pane_t1

0xedb6,	// (0x0006615a) wgtman_btn_pane_t2_ParamLimits

0xedb6,	// (0x0006615a) wgtman_btn_pane_t2

0x0001,

0xff20,	// (0x000672c4) wgtman_btn_pane_t_ParamLimits

0xff20,	// (0x000672c4) wgtman_btn_pane_t

0xedc8,	// (0x0006616c) listrow_wgtman_pane_ParamLimits

0xedc8,	// (0x0006616c) listrow_wgtman_pane

0xedd9,	// (0x0006617d) listrow_wgtman_pane_g1

0xede2,	// (0x00066186) listrow_wgtman_pane_g2

0x0001,

0xff25,	// (0x000672c9) listrow_wgtman_pane_g

0x735b,	// (0x0005e6ff) listrow_wgtman_pane_t1

0x7369,	// (0x0005e70d) listrow_wgtman_pane_t2

0x0001,

0xff2a,	// (0x000672ce) listrow_wgtman_pane_t

0x7377,	// (0x0005e71b) wait_bar_pane_cp09

0xedea,	// (0x0006618e) main_calllock_btn_pane

0xedf2,	// (0x00066196) main_calllock_pane_g1

0x7393,	// (0x0005e737) bg_button_pane_cp17

0xedfb,	// (0x0006619f) main_calllock_btn_pane_g1

0xee04,	// (0x000661a8) main_calllock_btn_pane_t1

0x7393,	// (0x0005e737) main_dialer3_pane

0x7393,	// (0x0005e737) main_fmrd2_pane

0x2b3a,	// (0x00059ede) main_fs_bigclock_unlock_btn_pane_g1

0xee1b,	// (0x000661bf) main_fs_bigclock_unlock_btn_pane_t1

0xee29,	// (0x000661cd) area_fmrd2_info_pane_ParamLimits

0xee29,	// (0x000661cd) area_fmrd2_info_pane

0xee36,	// (0x000661da) area_fmrd2_visual_pane_ParamLimits

0xee36,	// (0x000661da) area_fmrd2_visual_pane

0xee44,	// (0x000661e8) fmrd2_indi_pane_ParamLimits

0xee44,	// (0x000661e8) fmrd2_indi_pane

0xee51,	// (0x000661f5) area_fmrd2_visual_pane_g1

0xee59,	// (0x000661fd) area_fmrd2_visual_pane_t1

0xee67,	// (0x0006620b) area_fmrd2_visual_pane_t2

0xee75,	// (0x00066219) area_fmrd2_visual_pane_t3

0x0002,

0xff34,	// (0x000672d8) area_fmrd2_visual_pane_t

0xee83,	// (0x00066227) area_fmrd2_info_pane_g1

0xee8b,	// (0x0006622f) area_fmrd2_info_pane_t1

0xee99,	// (0x0006623d) area_fmrd2_info_pane_t2

0xeea7,	// (0x0006624b) area_fmrd2_info_pane_t3

0xeeb5,	// (0x00066259) area_fmrd2_info_pane_t4

0x0003,

0xff3b,	// (0x000672df) area_fmrd2_info_pane_t

0xeec3,	// (0x00066267) fmrd2_indi_pane_t1

0xeed1,	// (0x00066275) fmrd2_indi_pane_t2

0xeedf,	// (0x00066283) fmrd2_indi_pane_t3

0x0002,

0xff44,	// (0x000672e8) fmrd2_indi_pane_t

0x446b,	// (0x0005b80f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x446b,	// (0x0005b80f) list_single_fs_bigclock_indicator_pane_g5

0x450d,	// (0x0005b8b1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x450d,	// (0x0005b8b1) list_single_fs_bigclock_indicator_pane_t5

0xe3ea,	// (0x0006578e) aid_cell_bcale_month_pane_ParamLimits

0xe3ea,	// (0x0006578e) aid_cell_bcale_month_pane

0xe3f6,	// (0x0006579a) bcale_month_pane_ParamLimits

0xe3f6,	// (0x0006579a) bcale_month_pane

0xe402,	// (0x000657a6) bcale_preview_pane_ParamLimits

0xe402,	// (0x000657a6) bcale_preview_pane

0xe98e,	// (0x00065d32) list_single_fs_bigclock_pane_t1_ParamLimits

0xe9a8,	// (0x00065d4c) list_single_fs_bigclock_pane_t2_ParamLimits

0xe9a8,	// (0x00065d4c) list_single_fs_bigclock_pane_t2

0x0001,

0xfecb,	// (0x0006726f) list_single_fs_bigclock_pane_t_ParamLimits

0xfecb,	// (0x0006726f) list_single_fs_bigclock_pane_t

0xee13,	// (0x000661b7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xff2f,	// (0x000672d3) main_fs_bigclock_unlock_btn_pane_g

0xeeed,	// (0x00066291) aid_dia3_key_size_ParamLimits

0xeeed,	// (0x00066291) aid_dia3_key_size

0xeef9,	// (0x0006629d) aid_dia3_listrow_size_ParamLimits

0xeef9,	// (0x0006629d) aid_dia3_listrow_size

0xef05,	// (0x000662a9) dia3_keypad_fun_pane_ParamLimits

0xef05,	// (0x000662a9) dia3_keypad_fun_pane

0xef11,	// (0x000662b5) dia3_keypad_num_pane_ParamLimits

0xef11,	// (0x000662b5) dia3_keypad_num_pane

0xef1d,	// (0x000662c1) dia3_listscroll_pane_ParamLimits

0xef1d,	// (0x000662c1) dia3_listscroll_pane

0xef29,	// (0x000662cd) dia3_numentry_pane_ParamLimits

0xef29,	// (0x000662cd) dia3_numentry_pane

0xef35,	// (0x000662d9) dia3_list_pane

0xef3e,	// (0x000662e2) scroll_pane_cp12

0x7393,	// (0x0005e737) bg_dia3_numentry_pane

0xef47,	// (0x000662eb) dia3_numentry_pane_t1

0xef56,	// (0x000662fa) cell_dia3_key_num_pane

0xef5e,	// (0x00066302) cell_dia3_key0_fun_pane_ParamLimits

0xef5e,	// (0x00066302) cell_dia3_key0_fun_pane

0xef6b,	// (0x0006630f) cell_dia3_key1_fun_pane_ParamLimits

0xef6b,	// (0x0006630f) cell_dia3_key1_fun_pane

0xef78,	// (0x0006631c) dia3_listrow_pane

0x4198,	// (0x0005b53c) bg_dia3_numentry_pane_g1

0x7393,	// (0x0005e737) bg_button_pane_cp21

0xef81,	// (0x00066325) cell_dia3_key_num_pane_t1

0xef8f,	// (0x00066333) cell_dia3_key_num_pane_t2

0xef9e,	// (0x00066342) cell_dia3_key_num_pane_t3

0xefad,	// (0x00066351) cell_dia3_key_num_pane_t4

0x0003,

0xff4b,	// (0x000672ef) cell_dia3_key_num_pane_t

0x7393,	// (0x0005e737) bg_button_pane_cp19

0xefbc,	// (0x00066360) cell_dia3_key0_fun_pane_g1

0x7393,	// (0x0005e737) bg_button_pane_cp20

0xefc4,	// (0x00066368) cell_dia3_key1_fun_pane_g1

0xefcc,	// (0x00066370) area_left_week_number_pane

0xefd5,	// (0x00066379) area_top_day_name_pane

0xefde,	// (0x00066382) frame_month_view_pane

0xefe6,	// (0x0006638a) grid_month_view_pane

0xeff0,	// (0x00066394) cell_top_day_name_pane_ParamLimits

0xeff0,	// (0x00066394) cell_top_day_name_pane

0xf006,	// (0x000663aa) cell_area_left_week_number_pane_ParamLimits

0xf006,	// (0x000663aa) cell_area_left_week_number_pane

0xf01a,	// (0x000663be) cell_month_view_pane_ParamLimits

0xf01a,	// (0x000663be) cell_month_view_pane

0xf035,	// (0x000663d9) frm_month_g1

0xf03e,	// (0x000663e2) frm_month_g2

0xf046,	// (0x000663ea) frm_month_g3

0xf04e,	// (0x000663f2) frm_month_g4

0xf056,	// (0x000663fa) frm_month_g5

0xf05e,	// (0x00066402) frm_month_g6

0xf066,	// (0x0006640a) frm_month_g7

0xf06e,	// (0x00066412) frm_month_g8

0xf077,	// (0x0006641b) frm_month_g9

0xf080,	// (0x00066424) frm_month_g10

0xf089,	// (0x0006642d) frm_month_g11

0xf092,	// (0x00066436) frm_month_g12

0xf09b,	// (0x0006643f) frm_month_g13

0xf0a4,	// (0x00066448) frm_month_g14

0xf0ad,	// (0x00066451) frm_month_g15

0xf0b6,	// (0x0006645a) frm_month_g16

0x000f,

0xff54,	// (0x000672f8) frm_month_g

0xf0bf,	// (0x00066463) cell_top_day_name_pane_t1

0xf0ce,	// (0x00066472) cell_area_left_week_number_pane_g1

0xf0bf,	// (0x00066463) cell_area_left_week_number_pane_t1

0x2b3a,	// (0x00059ede) cell_month_view_pane_g1

0xf0d6,	// (0x0006647a) cell_month_view_pane_t1

0x7393,	// (0x0005e737) main_fps_pane

0xdfed,	// (0x00065391) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdfed,	// (0x00065391) cmail_ddmenu_btn02_pane_cp1

0xe009,	// (0x000653ad) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe009,	// (0x000653ad) cmail_ddmenu_btn02_pane_cp2

0xe723,	// (0x00065ac7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe723,	// (0x00065ac7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe7c,	// (0x00067220) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe7c,	// (0x00067220) cmail_ddmenu_btn02_pane_g

0xe741,	// (0x00065ae5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe741,	// (0x00065ae5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe81,	// (0x00067225) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe81,	// (0x00067225) cmail_ddmenu_btn02_pane_t

0xf0e5,	// (0x00066489) fps_text_pane_ParamLimits

0xf0e5,	// (0x00066489) fps_text_pane

0xf0f2,	// (0x00066496) main_fps_pane_g1_ParamLimits

0xf0f2,	// (0x00066496) main_fps_pane_g1

0xf0fe,	// (0x000664a2) wait_bar_pane_cp010_ParamLimits

0xf0fe,	// (0x000664a2) wait_bar_pane_cp010

0xf10a,	// (0x000664ae) fps_text_pane_t1_ParamLimits

0xf10a,	// (0x000664ae) fps_text_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pqp_apps_qvga_prt_Large
