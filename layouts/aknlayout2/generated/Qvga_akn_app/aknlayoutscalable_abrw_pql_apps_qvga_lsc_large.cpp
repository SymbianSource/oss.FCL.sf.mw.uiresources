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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x0008535a };

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
0x2770,	// (0x00087aca) Screen

0x277a,	// (0x00087ad4) application_window

0x27b0,	// (0x00087b0a) area_bottom_pane_ParamLimits

0x27b0,	// (0x00087b0a) area_bottom_pane

0x27e3,	// (0x00087b3d) area_top_pane_ParamLimits

0x27e3,	// (0x00087b3d) area_top_pane

0xae89,	// (0x000901e3) call_video_uplink_pane_ParamLimits

0xae89,	// (0x000901e3) call_video_uplink_pane

0x2863,	// (0x00087bbd) main_pane_ParamLimits

0x2863,	// (0x00087bbd) main_pane

0xc7e5,	// (0x00091b3f) context_pane

0x5abb,	// (0x0008ae15) navi_pane

0x5ae4,	// (0x0008ae3e) popup_cale_events_window_ParamLimits

0x5ae4,	// (0x0008ae3e) popup_cale_events_window

0xc7f8,	// (0x00091b52) popup_mup_playback_window

0x5afc,	// (0x0008ae56) signal_pane

0x0ce8,	// (0x00086042) main_browser_pane

0x32e3,	// (0x0008863d) main_burst_pane

0xaea5,	// (0x000901ff) main_calc_pane

0xc77f,	// (0x00091ad9) main_cale_day_pane

0x5861,	// (0x0008abbb) main_cale_month_pane

0xc77f,	// (0x00091ad9) main_cale_week_pane

0x32e3,	// (0x0008863d) main_call_pane

0x098f,	// (0x00085ce9) main_call_poc_pane

0x32e3,	// (0x0008863d) main_camera_pane

0x32e3,	// (0x0008863d) main_chi_dic_pane

0xb187,	// (0x000904e1) main_clock_pane

0x098f,	// (0x00085ce9) main_fmradio_pane

0x32e3,	// (0x0008863d) main_graph_messa_pane

0x098f,	// (0x00085ce9) main_help_pane

0x0ce8,	// (0x00086042) main_im_pane

0x0bea,	// (0x00085f44) main_image_pane_ParamLimits

0x0bea,	// (0x00085f44) main_image_pane

0x098f,	// (0x00085ce9) main_location2_pane

0x32e3,	// (0x0008863d) main_location_pane

0x0bea,	// (0x00085f44) main_messa_pane

0x098f,	// (0x00085ce9) main_mp2_pane

0x32e3,	// (0x0008863d) main_mp_pane

0x098f,	// (0x00085ce9) main_msg_pane

0x098f,	// (0x00085ce9) main_mup_eq_pane

0x098f,	// (0x00085ce9) main_mup_pane

0x0ce8,	// (0x00086042) main_notes_pane

0x098f,	// (0x00085ce9) main_pec_pane

0x098f,	// (0x00085ce9) main_phob_pane

0x098f,	// (0x00085ce9) main_pinb_pane

0x098f,	// (0x00085ce9) main_postcard_pane

0x098f,	// (0x00085ce9) main_qdial_pane

0x32e3,	// (0x0008863d) main_skin_pane

0x098f,	// (0x00085ce9) main_smil2_pane

0x32e3,	// (0x0008863d) main_smil_pane

0x32e3,	// (0x0008863d) main_video_pane

0x32e3,	// (0x0008863d) main_video_tele_pane

0x0bea,	// (0x00085f44) main_viewer_pane_ParamLimits

0x0bea,	// (0x00085f44) main_viewer_pane

0x32e3,	// (0x0008863d) main_vorec_pane

0x58af,	// (0x0008ac09) popup_blid_sat_info_window_ParamLimits

0x58af,	// (0x0008ac09) popup_blid_sat_info_window

0x5905,	// (0x0008ac5f) popup_dyc_status_message_window_ParamLimits

0x5905,	// (0x0008ac5f) popup_dyc_status_message_window

0x591b,	// (0x0008ac75) popup_grid_large_graphic_window_ParamLimits

0x591b,	// (0x0008ac75) popup_grid_large_graphic_window

0x59b1,	// (0x0008ad0b) popup_loc_request_window_ParamLimits

0x59b1,	// (0x0008ad0b) popup_loc_request_window

0x5a95,	// (0x0008adef) popup_wml_address_window_ParamLimits

0x5a95,	// (0x0008adef) popup_wml_address_window

0x56f5,	// (0x0008aa4f) call_muted_g1

0x53d5,	// (0x0008a72f) popup_call_audio_conf_window_ParamLimits

0x53d5,	// (0x0008a72f) popup_call_audio_conf_window

0x5705,	// (0x0008aa5f) popup_call_audio_first_window_ParamLimits

0x5705,	// (0x0008aa5f) popup_call_audio_first_window

0x5763,	// (0x0008aabd) popup_call_audio_in_window_ParamLimits

0x5763,	// (0x0008aabd) popup_call_audio_in_window

0x578f,	// (0x0008aae9) popup_call_audio_out_window_ParamLimits

0x578f,	// (0x0008aae9) popup_call_audio_out_window

0x57bd,	// (0x0008ab17) popup_call_audio_second_window_ParamLimits

0x57bd,	// (0x0008ab17) popup_call_audio_second_window

0x5803,	// (0x0008ab5d) popup_call_audio_wait_window_ParamLimits

0x5803,	// (0x0008ab5d) popup_call_audio_wait_window

0x5836,	// (0x0008ab90) popup_number_entry_window_ParamLimits

0x5836,	// (0x0008ab90) popup_number_entry_window

0x057e,	// (0x000858d8) bg_popup_call_pane_cp05_ParamLimits

0x057e,	// (0x000858d8) bg_popup_call_pane_cp05

0x059e,	// (0x000858f8) popup_number_entry_window_t1

0x05b1,	// (0x0008590b) popup_number_entry_window_t2

0x05c3,	// (0x0008591d) popup_number_entry_window_t3

0x0003,

0xf05f,	// (0x000943b9) popup_number_entry_window_t

0x05d5,	// (0x0008592f) text_title_cp2

0x05e8,	// (0x00085942) bg_popup_call_pane_cp_ParamLimits

0x05e8,	// (0x00085942) bg_popup_call_pane_cp

0x05f6,	// (0x00085950) call_thumbnail_pane

0x05fe,	// (0x00085958) popup_call_audio_in_window_g1_ParamLimits

0x05fe,	// (0x00085958) popup_call_audio_in_window_g1

0x060a,	// (0x00085964) popup_call_audio_in_window_g2_ParamLimits

0x060a,	// (0x00085964) popup_call_audio_in_window_g2

0x0616,	// (0x00085970) popup_call_audio_in_window_g3_ParamLimits

0x0616,	// (0x00085970) popup_call_audio_in_window_g3

0x0002,

0xf068,	// (0x000943c2) popup_call_audio_in_window_g_ParamLimits

0xf068,	// (0x000943c2) popup_call_audio_in_window_g

0x0622,	// (0x0008597c) popup_call_audio_in_window_t1_ParamLimits

0x0622,	// (0x0008597c) popup_call_audio_in_window_t1

0x063d,	// (0x00085997) popup_call_audio_in_window_t2_ParamLimits

0x063d,	// (0x00085997) popup_call_audio_in_window_t2

0x0658,	// (0x000859b2) popup_call_audio_in_window_t3_ParamLimits

0x0658,	// (0x000859b2) popup_call_audio_in_window_t3

0x0002,

0xf06f,	// (0x000943c9) popup_call_audio_in_window_t_ParamLimits

0xf06f,	// (0x000943c9) popup_call_audio_in_window_t

0x05e8,	// (0x00085942) bg_popup_call_pane_cp01_ParamLimits

0x05e8,	// (0x00085942) bg_popup_call_pane_cp01

0x05f6,	// (0x00085950) call_thumbnail_pane_cp02

0x066b,	// (0x000859c5) call_type_pane_cp022

0x0673,	// (0x000859cd) popup_call_audio_out_window_g1_ParamLimits

0x0673,	// (0x000859cd) popup_call_audio_out_window_g1

0x0685,	// (0x000859df) popup_call_audio_out_window_g2_ParamLimits

0x0685,	// (0x000859df) popup_call_audio_out_window_g2

0x0691,	// (0x000859eb) popup_call_audio_out_window_g3_ParamLimits

0x0691,	// (0x000859eb) popup_call_audio_out_window_g3

0x0002,

0xf076,	// (0x000943d0) popup_call_audio_out_window_g_ParamLimits

0xf076,	// (0x000943d0) popup_call_audio_out_window_g

0x06a3,	// (0x000859fd) popup_call_audio_out_window_t1_ParamLimits

0x06a3,	// (0x000859fd) popup_call_audio_out_window_t1

0x06bb,	// (0x00085a15) popup_call_audio_out_window_t2_ParamLimits

0x06bb,	// (0x00085a15) popup_call_audio_out_window_t2

0x0001,

0xf07d,	// (0x000943d7) popup_call_audio_out_window_t_ParamLimits

0xf07d,	// (0x000943d7) popup_call_audio_out_window_t

0x06d0,	// (0x00085a2a) bg_popup_call_pane_ParamLimits

0x06d0,	// (0x00085a2a) bg_popup_call_pane

0x29a5,	// (0x00087cff) call_thumbnail_pane_cp_ParamLimits

0x29a5,	// (0x00087cff) call_thumbnail_pane_cp

0x0754,	// (0x00085aae) call_type_pane_cp01_ParamLimits

0x0754,	// (0x00085aae) call_type_pane_cp01

0x0798,	// (0x00085af2) popup_call_audio_first_window_g1_ParamLimits

0x0798,	// (0x00085af2) popup_call_audio_first_window_g1

0x07e4,	// (0x00085b3e) popup_call_audio_first_window_g2_ParamLimits

0x07e4,	// (0x00085b3e) popup_call_audio_first_window_g2

0x0001,

0xf082,	// (0x000943dc) popup_call_audio_first_window_g_ParamLimits

0xf082,	// (0x000943dc) popup_call_audio_first_window_g

0x0828,	// (0x00085b82) popup_call_audio_first_window_t1_ParamLimits

0x0828,	// (0x00085b82) popup_call_audio_first_window_t1

0x08d4,	// (0x00085c2e) popup_call_audio_first_window_t4_ParamLimits

0x08d4,	// (0x00085c2e) popup_call_audio_first_window_t4

0x0960,	// (0x00085cba) popup_call_audio_first_window_t5_ParamLimits

0x0960,	// (0x00085cba) popup_call_audio_first_window_t5

0x0002,

0xf087,	// (0x000943e1) popup_call_audio_first_window_t_ParamLimits

0xf087,	// (0x000943e1) popup_call_audio_first_window_t

0x098f,	// (0x00085ce9) bg_popup_call_pane_cp02

0x0999,	// (0x00085cf3) call_type_pane_cp023

0x09a1,	// (0x00085cfb) popup_call_audio_wait_window_g1

0x09a9,	// (0x00085d03) popup_call_audio_wait_window_g2

0x0001,

0xf08e,	// (0x000943e8) popup_call_audio_wait_window_g

0x09b1,	// (0x00085d0b) popup_call_audio_wait_window_t3

0x09bf,	// (0x00085d19) bg_popup_call_pane_cp03_ParamLimits

0x09bf,	// (0x00085d19) bg_popup_call_pane_cp03

0x0a1f,	// (0x00085d79) call_thumbnail_pane_cp011_ParamLimits

0x0a1f,	// (0x00085d79) call_thumbnail_pane_cp011

0x0a2b,	// (0x00085d85) call_type_pane_cp034_ParamLimits

0x0a2b,	// (0x00085d85) call_type_pane_cp034

0x0a67,	// (0x00085dc1) popup_call_audio_second_window_g1_ParamLimits

0x0a67,	// (0x00085dc1) popup_call_audio_second_window_g1

0x0aa3,	// (0x00085dfd) popup_call_audio_second_window_g2_ParamLimits

0x0aa3,	// (0x00085dfd) popup_call_audio_second_window_g2

0x0001,

0xf093,	// (0x000943ed) popup_call_audio_second_window_g_ParamLimits

0xf093,	// (0x000943ed) popup_call_audio_second_window_g

0x0adf,	// (0x00085e39) popup_call_audio_second_window_t1_ParamLimits

0x0adf,	// (0x00085e39) popup_call_audio_second_window_t1

0x0b60,	// (0x00085eba) popup_call_audio_second_window_t2_ParamLimits

0x0b60,	// (0x00085eba) popup_call_audio_second_window_t2

0x0b96,	// (0x00085ef0) popup_call_audio_second_window_t3_ParamLimits

0x0b96,	// (0x00085ef0) popup_call_audio_second_window_t3

0x0002,

0xf098,	// (0x000943f2) popup_call_audio_second_window_t_ParamLimits

0xf098,	// (0x000943f2) popup_call_audio_second_window_t

0x098f,	// (0x00085ce9) bg_popup_call_pane_cp04

0x0bcc,	// (0x00085f26) list_conf_pane

0x0bd4,	// (0x00085f2e) popup_call_audio_conf_window_t1

0x0be2,	// (0x00085f3c) call_thumbnail_pane_g1

0x0bea,	// (0x00085f44) bg_pinb_pane_ParamLimits

0x0bea,	// (0x00085f44) bg_pinb_pane

0x0bf8,	// (0x00085f52) find_pinb_pane

0x0bea,	// (0x00085f44) listscroll_pinb_pane_ParamLimits

0x0bea,	// (0x00085f44) listscroll_pinb_pane

0x0c02,	// (0x00085f5c) pinb_bg_pane_g1

0x0c02,	// (0x00085f5c) pinb_bg_pane_g2

0x0c02,	// (0x00085f5c) pinb_bg_pane_g3

0x0c02,	// (0x00085f5c) pinb_bg_pane_g4

0x0c02,	// (0x00085f5c) pinb_bg_pane_g5

0x0c02,	// (0x00085f5c) pinb_bg_pane_g6

0x0c02,	// (0x00085f5c) pinb_bg_pane_g7

0x0c02,	// (0x00085f5c) pinb_bg_pane_g8

0x0c02,	// (0x00085f5c) pinb_bg_pane_g9

0x0c02,	// (0x00085f5c) pinb_bg_pane_g10

0x0009,

0xf09f,	// (0x000943f9) pinb_bg_pane_g

0x29d4,	// (0x00087d2e) grid_pinb_pane

0x0574,	// (0x000858ce) list_pinb_pane

0x0c0c,	// (0x00085f66) scroll_pane_cp01_ParamLimits

0x0c0c,	// (0x00085f66) scroll_pane_cp01

0x0c19,	// (0x00085f73) find_pinb_pane_g1_ParamLimits

0x0c19,	// (0x00085f73) find_pinb_pane_g1

0x0c31,	// (0x00085f8b) find_pinb_pane_t1

0x0c43,	// (0x00085f9d) find_pinb_pane_t2

0x0001,

0xf0b9,	// (0x00094413) find_pinb_pane_t

0x0c58,	// (0x00085fb2) input_focus_pane_cp01_ParamLimits

0x0c58,	// (0x00085fb2) input_focus_pane_cp01

0x29de,	// (0x00087d38) cell_pinb_pane_ParamLimits

0x29de,	// (0x00087d38) cell_pinb_pane

0x0c64,	// (0x00085fbe) cell_pinb_pane_g1_ParamLimits

0x0c64,	// (0x00085fbe) cell_pinb_pane_g1

0x0c72,	// (0x00085fcc) cell_pinb_pane_g2_ParamLimits

0x0c72,	// (0x00085fcc) cell_pinb_pane_g2

0x0c72,	// (0x00085fcc) cell_pinb_pane_g3_ParamLimits

0x0c72,	// (0x00085fcc) cell_pinb_pane_g3

0x0002,

0xf0be,	// (0x00094418) cell_pinb_pane_g_ParamLimits

0xf0be,	// (0x00094418) cell_pinb_pane_g

0x098f,	// (0x00085ce9) grid_highlight_pane_cp01

0x0c80,	// (0x00085fda) list_pinb_item_pane_ParamLimits

0x0c80,	// (0x00085fda) list_pinb_item_pane

0x0574,	// (0x000858ce) list_highlight_pane_cp02

0x0c8e,	// (0x00085fe8) list_pinb_item_pane_g1_ParamLimits

0x0c8e,	// (0x00085fe8) list_pinb_item_pane_g1

0x0c72,	// (0x00085fcc) list_pinb_item_pane_g2_ParamLimits

0x0c72,	// (0x00085fcc) list_pinb_item_pane_g2

0x0c64,	// (0x00085fbe) list_pinb_item_pane_g3_ParamLimits

0x0c64,	// (0x00085fbe) list_pinb_item_pane_g3

0x0c72,	// (0x00085fcc) list_pinb_item_pane_g4_ParamLimits

0x0c72,	// (0x00085fcc) list_pinb_item_pane_g4

0x0003,

0xf0c5,	// (0x0009441f) list_pinb_item_pane_g_ParamLimits

0xf0c5,	// (0x0009441f) list_pinb_item_pane_g

0x0c9c,	// (0x00085ff6) list_pinb_item_pane_t1_ParamLimits

0x0c9c,	// (0x00085ff6) list_pinb_item_pane_t1

0x2a12,	// (0x00087d6c) calc_display_pane

0x2a2e,	// (0x00087d88) calc_paper_pane

0x2a4f,	// (0x00087da9) grid_calc_pane

0x098f,	// (0x00085ce9) bg_list_pane_cp01

0x2a6b,	// (0x00087dc5) clock_g1

0x2a73,	// (0x00087dcd) clock_g2

0x0001,

0xf0ce,	// (0x00094428) clock_g

0x2a7b,	// (0x00087dd5) clock_t1_ParamLimits

0x2a7b,	// (0x00087dd5) clock_t1

0x2a90,	// (0x00087dea) clock_t2_ParamLimits

0x2a90,	// (0x00087dea) clock_t2

0x2aa2,	// (0x00087dfc) clock_t3_ParamLimits

0x2aa2,	// (0x00087dfc) clock_t3

0x2ab4,	// (0x00087e0e) clock_t4_ParamLimits

0x2ab4,	// (0x00087e0e) clock_t4

0x2ac6,	// (0x00087e20) clock_t5_ParamLimits

0x2ac6,	// (0x00087e20) clock_t5

0x2adb,	// (0x00087e35) clock_t6_ParamLimits

0x2adb,	// (0x00087e35) clock_t6

0x2aed,	// (0x00087e47) clock_t7_ParamLimits

0x2aed,	// (0x00087e47) clock_t7

0x2aff,	// (0x00087e59) clock_t8_ParamLimits

0x2aff,	// (0x00087e59) clock_t8

0x2b11,	// (0x00087e6b) clock_t9_ParamLimits

0x2b11,	// (0x00087e6b) clock_t9

0x0008,

0xf0d3,	// (0x0009442d) clock_t_ParamLimits

0xf0d3,	// (0x0009442d) clock_t

0x0cb0,	// (0x0008600a) popup_clock_analogue_window_cp02

0x0cb0,	// (0x0008600a) popup_clock_digital_window_cp01

0x098f,	// (0x00085ce9) listscroll_help_pane

0x098f,	// (0x00085ce9) phob_pre_status_pane

0x0cb8,	// (0x00086012) grid_qdial_pane

0x0bea,	// (0x00085f44) listscroll_mce_pane

0x0bea,	// (0x00085f44) bg_notes_pane

0x0cc2,	// (0x0008601c) list_notes_pane

0x2b23,	// (0x00087e7d) scroll_pane_cp06

0x0cd0,	// (0x0008602a) bg_calc_paper_pane

0xaec5,	// (0x0009021f) list_calc_pane

0x0ce8,	// (0x00086042) bg_calc_display_pane

0xaedf,	// (0x00090239) calc_display_pane_t1

0xaef4,	// (0x0009024e) calc_display_pane_t2

0xaf09,	// (0x00090263) calc_display_pane_t3

0x0002,

0xf0e6,	// (0x00094440) calc_display_pane_t

0x2b35,	// (0x00087e8f) cell_calc_pane_ParamLimits

0x2b35,	// (0x00087e8f) cell_calc_pane

0x0cf4,	// (0x0008604e) bg_calc_paper_pane_g1

0x0d00,	// (0x0008605a) bg_calc_paper_pane_g2

0x0d0c,	// (0x00086066) bg_calc_paper_pane_g3

0x0d18,	// (0x00086072) bg_calc_paper_pane_g4

0x0d24,	// (0x0008607e) bg_calc_paper_pane_g5

0x2b68,	// (0x00087ec2) bg_calc_paper_pane_g6

0x2b77,	// (0x00087ed1) bg_calc_paper_pane_g7

0x2b86,	// (0x00087ee0) bg_calc_paper_pane_g8

0x0007,

0xf0ed,	// (0x00094447) bg_calc_paper_pane_g

0x2b95,	// (0x00087eef) calc_bg_paper_pane_g9

0x2ba4,	// (0x00087efe) list_calc_item_pane_ParamLimits

0x2ba4,	// (0x00087efe) list_calc_item_pane

0x0d30,	// (0x0008608a) list_calc_item_pane_g1

0xaf1b,	// (0x00090275) list_calc_item_pane_t1_ParamLimits

0xaf1b,	// (0x00090275) list_calc_item_pane_t1

0x2bb8,	// (0x00087f12) list_calc_item_pane_t2_ParamLimits

0x2bb8,	// (0x00087f12) list_calc_item_pane_t2

0x0001,

0xf0fe,	// (0x00094458) list_calc_item_pane_t_ParamLimits

0xf0fe,	// (0x00094458) list_calc_item_pane_t

0x0c02,	// (0x00085f5c) cell_calc_pane_g1

0x0d3d,	// (0x00086097) grid_highlight_pane_cp02

0x0d5f,	// (0x000860b9) bg_calc_display_pane_g1

0xaf2d,	// (0x00090287) bg_calc_display_pane_g2

0x0d68,	// (0x000860c2) bg_calc_display_pane_g3

0x0002,

0xf108,	// (0x00094462) bg_calc_display_pane_g

0x2be6,	// (0x00087f40) cell_qdial_pane_ParamLimits

0x2be6,	// (0x00087f40) cell_qdial_pane

0x2bf8,	// (0x00087f52) cell_qdial_pane_g1_ParamLimits

0x2bf8,	// (0x00087f52) cell_qdial_pane_g1

0x2c0e,	// (0x00087f68) cell_qdial_pane_g2_ParamLimits

0x2c0e,	// (0x00087f68) cell_qdial_pane_g2

0x0d71,	// (0x000860cb) cell_qdial_pane_g3_ParamLimits

0x0d71,	// (0x000860cb) cell_qdial_pane_g3

0x0003,

0xf10f,	// (0x00094469) cell_qdial_pane_g_ParamLimits

0xf10f,	// (0x00094469) cell_qdial_pane_g

0x2c35,	// (0x00087f8f) cell_qdial_pane_t1_ParamLimits

0x2c35,	// (0x00087f8f) cell_qdial_pane_t1

0x2c4d,	// (0x00087fa7) cell_qdial_pane_t2_ParamLimits

0x2c4d,	// (0x00087fa7) cell_qdial_pane_t2

0x2c60,	// (0x00087fba) cell_qdial_pane_t3_ParamLimits

0x2c60,	// (0x00087fba) cell_qdial_pane_t3

0x0002,

0xf118,	// (0x00094472) cell_qdial_pane_t_ParamLimits

0xf118,	// (0x00094472) cell_qdial_pane_t

0x098f,	// (0x00085ce9) grid_highlight_pane_cp04

0x0d7d,	// (0x000860d7) thumbnail_qdial_pane_ParamLimits

0x0d7d,	// (0x000860d7) thumbnail_qdial_pane

0x0dd9,	// (0x00086133) list_help_pane

0x0de3,	// (0x0008613d) scroll_pane_cp02

0x2c73,	// (0x00087fcd) help_list_pane_t1_ParamLimits

0x2c73,	// (0x00087fcd) help_list_pane_t1

0xaf37,	// (0x00090291) bg_notes_pane_g2

0xaf3f,	// (0x00090299) bg_notes_pane_g3

0xaf47,	// (0x000902a1) notes_bg_pane_g1

0xaf4f,	// (0x000902a9) notes_bg_pane_g4

0xaf57,	// (0x000902b1) notes_bg_pane_g5

0xaf5f,	// (0x000902b9) notes_bg_pane_g6

0xaf67,	// (0x000902c1) notes_bg_pane_g7

0xaf6f,	// (0x000902c9) notes_bg_pane_g8

0xaf77,	// (0x000902d1) notes_bg_pane_g9

0x0006,

0xf136,	// (0x00094490) notes_bg_pane_g

0x2c90,	// (0x00087fea) list_notes_text_pane_ParamLimits

0x2c90,	// (0x00087fea) list_notes_text_pane

0x0dec,	// (0x00086146) list_notes_text_pane_g1

0x2cb3,	// (0x0008800d) list_notes_text_pane_t1

0x2cc1,	// (0x0008801b) listscroll_cale_week_pane

0x2ceb,	// (0x00088045) bg_cale_heading_pane

0x0e0f,	// (0x00086169) bg_cale_pane_cp01

0x2d03,	// (0x0008805d) cale_week_corner_pane

0x2d22,	// (0x0008807c) cale_week_day_heading_pane

0x2d3f,	// (0x00088099) cale_week_scroll_pane_g1

0x2d52,	// (0x000880ac) cale_week_scroll_pane_g2

0x2d6a,	// (0x000880c4) cale_week_scroll_pane_g3

0x2d82,	// (0x000880dc) cale_week_scroll_pane_g4

0x2d9a,	// (0x000880f4) cale_week_scroll_pane_g5

0x2db2,	// (0x0008810c) cale_week_scroll_pane_g6

0x2dca,	// (0x00088124) cale_week_scroll_pane_g7

0x2de2,	// (0x0008813c) cale_week_scroll_pane_g8

0x2dfe,	// (0x00088158) cale_week_scroll_pane_g9

0x2e16,	// (0x00088170) cale_week_scroll_pane_g10

0x2e2e,	// (0x00088188) cale_week_scroll_pane_g11

0x2e46,	// (0x000881a0) cale_week_scroll_pane_g12

0x2e5e,	// (0x000881b8) cale_week_scroll_pane_g13

0x2e76,	// (0x000881d0) cale_week_scroll_pane_g14

0x2e8e,	// (0x000881e8) cale_week_scroll_pane_g15

0x000f,

0xf145,	// (0x0009449f) cale_week_scroll_pane_g

0x2ec2,	// (0x0008821c) cale_week_time_pane

0x2ede,	// (0x00088238) grid_cale_week_pane

0x0e3e,	// (0x00086198) scroll_pane_cp08

0x2efc,	// (0x00088256) cell_cale_week_pane_ParamLimits

0x2efc,	// (0x00088256) cell_cale_week_pane

0x2f72,	// (0x000882cc) cale_week_day_heading_pane_t1

0x2f9c,	// (0x000882f6) cale_week_day_heading_pane_t2

0x2fcb,	// (0x00088325) cale_week_day_heading_pane_t3

0x2ffa,	// (0x00088354) cale_week_day_heading_pane_t4

0x3029,	// (0x00088383) cale_week_day_heading_pane_t5

0x3058,	// (0x000883b2) cale_week_day_heading_pane_t6

0x3087,	// (0x000883e1) cale_week_day_heading_pane_t7

0x0006,

0xf166,	// (0x000944c0) cale_week_day_heading_pane_t

0x0e5b,	// (0x000861b5) bg_cale_side_pane

0x30b1,	// (0x0008840b) cale_week_time_pane_t1

0x30eb,	// (0x00088445) cale_week_time_pane_t2

0x3125,	// (0x0008847f) cale_week_time_pane_t3

0x315f,	// (0x000884b9) cale_week_time_pane_t4

0x3199,	// (0x000884f3) cale_week_time_pane_t5

0x31d3,	// (0x0008852d) cale_week_time_pane_t6

0x320d,	// (0x00088567) cale_week_time_pane_t7

0x3247,	// (0x000885a1) cale_week_time_pane_t8

0x0007,

0xf175,	// (0x000944cf) cale_week_time_pane_t

0x3281,	// (0x000885db) cell_cale_week_pane_g2

0x32a0,	// (0x000885fa) cell_cale_week_pane_g3_ParamLimits

0x32a0,	// (0x000885fa) cell_cale_week_pane_g3

0x0e69,	// (0x000861c3) grid_highlight_pane_cp07

0x0e71,	// (0x000861cb) listscroll_gms_pane

0x0e7b,	// (0x000861d5) grid_gms_pane

0x0e84,	// (0x000861de) listscroll_gms_pane_g1

0x0e8c,	// (0x000861e6) listscroll_gms_pane_g2

0x0001,

0xf186,	// (0x000944e0) listscroll_gms_pane_g

0x32b8,	// (0x00088612) scroll_pane_cp010

0x32c3,	// (0x0008861d) cell_gms_pane_ParamLimits

0x32c3,	// (0x0008861d) cell_gms_pane

0x32d3,	// (0x0008862d) cell_gms_pane_g1

0x0e94,	// (0x000861ee) cell_gms_pane_g2

0x0dec,	// (0x00086146) cell_gms_pane_g3

0x0e9c,	// (0x000861f6) cell_gms_pane_g4

0x0003,

0xf18b,	// (0x000944e5) cell_gms_pane_g

0x0ea5,	// (0x000861ff) grid_highlight_pane_cp09

0x5683,	// (0x0008a9dd) phob_pre_status_pane_g1

0x568b,	// (0x0008a9e5) phob_pre_status_pane_g2

0x5693,	// (0x0008a9ed) phob_pre_status_pane_g3

0x569b,	// (0x0008a9f5) phob_pre_status_pane_g4

0x0004,

0xf574,	// (0x000948ce) phob_pre_status_pane_g

0x56ab,	// (0x0008aa05) phob_pre_status_pane_t1

0x56b9,	// (0x0008aa13) phob_pre_status_pane_t2

0x56c7,	// (0x0008aa21) phob_pre_status_pane_t3

0x0002,

0xf57f,	// (0x000948d9) phob_pre_status_pane_t

0x32e3,	// (0x0008863d) bg_list_pane_cp05

0x32eb,	// (0x00088645) grid_vorec_pane

0x32f3,	// (0x0008864d) vorec_t1

0x3301,	// (0x0008865b) vorec_t2

0x330f,	// (0x00088669) vorec_t3

0x331d,	// (0x00088677) vorec_t4

0xa6d3,	// (0x0008fa2d) vorec_t5

0xa6e1,	// (0x0008fa3b) vorec_t6

0x0004,

0xf194,	// (0x000944ee) vorec_t

0xa6ef,	// (0x0008fa49) wait_bar_pane_cp01

0x3339,	// (0x00088693) cell_vorec_pane_ParamLimits

0x3339,	// (0x00088693) cell_vorec_pane

0xaf7f,	// (0x000902d9) cell_vorec_pane_g1

0x098f,	// (0x00085ce9) grid_highlight_pane_cp05

0x334c,	// (0x000886a6) cams_zoom_pane

0x334c,	// (0x000886a6) image_vga_pane

0x0c64,	// (0x00085fbe) main_camera_pane_g1

0x0c64,	// (0x00085fbe) main_camera_pane_g2

0x0c64,	// (0x00085fbe) main_camera_pane_g3

0x0c64,	// (0x00085fbe) main_camera_pane_g4

0x0c64,	// (0x00085fbe) main_camera_pane_g5

0x0c64,	// (0x00085fbe) main_camera_pane_g6

0x0c64,	// (0x00085fbe) main_camera_pane_g7

0x0007,

0xf19f,	// (0x000944f9) main_camera_pane_g

0x335a,	// (0x000886b4) main_camera_pane_t1

0x335a,	// (0x000886b4) main_camera_pane_t2

0x0001,

0xf1b0,	// (0x0009450a) main_camera_pane_t

0x3382,	// (0x000886dc) cams_zoom_pane_cp_ParamLimits

0x3382,	// (0x000886dc) cams_zoom_pane_cp

0x33b6,	// (0x00088710) image_cif_pane_ParamLimits

0x33b6,	// (0x00088710) image_cif_pane

0x0574,	// (0x000858ce) image_subqcif_pane

0x33c8,	// (0x00088722) main_video_pane_g1_ParamLimits

0x33c8,	// (0x00088722) main_video_pane_g1

0x33f6,	// (0x00088750) main_video_pane_g2_ParamLimits

0x33f6,	// (0x00088750) main_video_pane_g2

0x3430,	// (0x0008878a) main_video_pane_g3_ParamLimits

0x3430,	// (0x0008878a) main_video_pane_g3

0x3430,	// (0x0008878a) main_video_pane_g4_ParamLimits

0x3430,	// (0x0008878a) main_video_pane_g4

0x3464,	// (0x000887be) main_video_pane_g5_ParamLimits

0x3464,	// (0x000887be) main_video_pane_g5

0x3472,	// (0x000887cc) main_video_pane_g6_ParamLimits

0x3472,	// (0x000887cc) main_video_pane_g6

0x0006,

0xf1b5,	// (0x0009450f) main_video_pane_g_ParamLimits

0xf1b5,	// (0x0009450f) main_video_pane_g

0x349a,	// (0x000887f4) main_video_pane_t1_ParamLimits

0x349a,	// (0x000887f4) main_video_pane_t1

0x34de,	// (0x00088838) cams_zoom_pane_g1

0x34de,	// (0x00088838) cams_zoom_pane_g2

0x34de,	// (0x00088838) cams_zoom_pane_g3

0x34de,	// (0x00088838) cams_zoom_pane_g4

0x0003,

0xf1c4,	// (0x0009451e) cams_zoom_pane_g

0x34fc,	// (0x00088856) grid_cams_pane

0x3511,	// (0x0008886b) linegrid_cams_pane

0x3522,	// (0x0008887c) cell_cams_pane_ParamLimits

0x3522,	// (0x0008887c) cell_cams_pane

0x3540,	// (0x0008889a) cams_burst_image_pane

0x3548,	// (0x000888a2) cell_cams_pane_g1

0x098f,	// (0x00085ce9) grid_highlight_pane_cp03

0x0c02,	// (0x00085f5c) mp_bg_pane_g1

0x0574,	// (0x000858ce) bg_list_pane_cp03

0x0574,	// (0x000858ce) bg_mp_pane

0x0574,	// (0x000858ce) grid_mp_pane

0x34de,	// (0x00088838) media_player_g1

0xc727,	// (0x00091a81) media_player_t1

0xc727,	// (0x00091a81) media_player_t2

0xc727,	// (0x00091a81) media_player_t3

0xc727,	// (0x00091a81) media_player_t4

0xc727,	// (0x00091a81) media_player_t5

0xc727,	// (0x00091a81) media_player_t6

0xc727,	// (0x00091a81) media_player_t7

0x0006,

0xf55e,	// (0x000948b8) media_player_t

0x0574,	// (0x000858ce) wait_bar_pane_cp02

0xf543,	// (0x0009489d) main_usb_pane_t

0xb187,	// (0x000904e1) cell_mp_pane

0x0c02,	// (0x00085f5c) cell_mp_pane_g1

0x098f,	// (0x00085ce9) grid_highlight_pane_cp06

0x358e,	// (0x000888e8) grid_skin_colour_pane

0x3596,	// (0x000888f0) list_highlight_pane_cp03

0x359e,	// (0x000888f8) skin_g1

0x35a6,	// (0x00088900) skin_t1

0x35b5,	// (0x0008890f) skin_t2

0x0001,

0xf1f2,	// (0x0009454c) skin_t

0x35c3,	// (0x0008891d) cell_skin_colour_pane_ParamLimits

0x35c3,	// (0x0008891d) cell_skin_colour_pane

0x35dd,	// (0x00088937) cell_skin_colour_pane_g1

0x363e,	// (0x00088998) call_video_g1_ParamLimits

0x363e,	// (0x00088998) call_video_g1

0x3654,	// (0x000889ae) call_video_g2_ParamLimits

0x3654,	// (0x000889ae) call_video_g2

0x0001,

0xf1f7,	// (0x00094551) call_video_g_ParamLimits

0xf1f7,	// (0x00094551) call_video_g

0x369c,	// (0x000889f6) call_video_uplink_pane_cp1_ParamLimits

0x369c,	// (0x000889f6) call_video_uplink_pane_cp1

0x3701,	// (0x00088a5b) call_video_uplink_pane_cp2

0x3739,	// (0x00088a93) video_down_crop_pane_ParamLimits

0x3739,	// (0x00088a93) video_down_crop_pane

0x37fc,	// (0x00088b56) video_down_pane_ParamLimits

0x37fc,	// (0x00088b56) video_down_pane

0x38a6,	// (0x00088c00) video_down_subqcif_pane_ParamLimits

0x38a6,	// (0x00088c00) video_down_subqcif_pane

0x38be,	// (0x00088c18) video_down_subqcif_pane_cp_ParamLimits

0x38be,	// (0x00088c18) video_down_subqcif_pane_cp

0x38f5,	// (0x00088c4f) im_reading_pane_ParamLimits

0x38f5,	// (0x00088c4f) im_reading_pane

0x3907,	// (0x00088c61) im_writing_pane_ParamLimits

0x3907,	// (0x00088c61) im_writing_pane

0x3925,	// (0x00088c7f) im_reading_pane_t1

0x395b,	// (0x00088cb5) list_im_pane

0x396c,	// (0x00088cc6) scroll_pane_cp07

0x3985,	// (0x00088cdf) im_writing_pane_t1_ParamLimits

0x3985,	// (0x00088cdf) im_writing_pane_t1

0x399a,	// (0x00088cf4) im_writing_pane_t2_ParamLimits

0x399a,	// (0x00088cf4) im_writing_pane_t2

0x0001,

0xf201,	// (0x0009455b) im_writing_pane_t_ParamLimits

0xf201,	// (0x0009455b) im_writing_pane_t

0x098f,	// (0x00085ce9) input_focus_pane_cp04

0x098f,	// (0x00085ce9) input_focus_pane_cp05

0x39b7,	// (0x00088d11) list_im_single_pane_ParamLimits

0x39b7,	// (0x00088d11) list_im_single_pane

0x39cd,	// (0x00088d27) list_single_im_pane_t1

0x32e3,	// (0x0008863d) blid_accuracy_pane

0x32e3,	// (0x0008863d) blid_compass_pane

0xc737,	// (0x00091a91) main_location_t1

0xc737,	// (0x00091a91) main_location_t2

0xc737,	// (0x00091a91) main_location_t3

0x0002,

0xf56d,	// (0x000948c7) main_location_t

0x098f,	// (0x00085ce9) aid_levels_location

0x0c02,	// (0x00085f5c) blid_accuracy_pane_g1

0x0c02,	// (0x00085f5c) blid_accuracy_pane_g2

0x0001,

0xf0a1,	// (0x000943fb) blid_accuracy_pane_g

0x3a07,	// (0x00088d61) wml_content_pane

0x3a45,	// (0x00088d9f) wml_button_pane_ParamLimits

0x3a45,	// (0x00088d9f) wml_button_pane

0x3a59,	// (0x00088db3) wml_list_single_large_pane_ParamLimits

0x3a59,	// (0x00088db3) wml_list_single_large_pane

0x3a6d,	// (0x00088dc7) wml_list_single_medium_pane_ParamLimits

0x3a6d,	// (0x00088dc7) wml_list_single_medium_pane

0x3a82,	// (0x00088ddc) wml_list_single_small_pane_ParamLimits

0x3a82,	// (0x00088ddc) wml_list_single_small_pane

0x3a99,	// (0x00088df3) wml_selection_box_pane_ParamLimits

0x3a99,	// (0x00088df3) wml_selection_box_pane

0x3aac,	// (0x00088e06) wml_list_single_pane_t1

0x3abb,	// (0x00088e15) wml_list_single_medium_pane_t1

0x3aca,	// (0x00088e24) wml_list_single_large_pane_t1

0x3ad9,	// (0x00088e33) input_focus_pane_cp02_ParamLimits

0x3ad9,	// (0x00088e33) input_focus_pane_cp02

0x3aec,	// (0x00088e46) wml_selection_box_pane_g1

0x3af5,	// (0x00088e4f) wml_selection_box_pane_t1_ParamLimits

0x3af5,	// (0x00088e4f) wml_selection_box_pane_t1

0x0bea,	// (0x00085f44) bg_wml_button_pane_ParamLimits

0x0bea,	// (0x00085f44) bg_wml_button_pane

0x3b0d,	// (0x00088e67) wml_button_pane_g1

0x3b15,	// (0x00088e6f) wml_button_pane_t1

0x3b0d,	// (0x00088e67) wml_button_bg_pane_g1

0x3b25,	// (0x00088e7f) wml_button_bg_pane_g2

0x3b2d,	// (0x00088e87) wml_button_bg_pane_g3

0x3b35,	// (0x00088e8f) wml_button_bg_pane_g4

0x3b3d,	// (0x00088e97) wml_button_bg_pane_g5

0x3b45,	// (0x00088e9f) wml_button_bg_pane_g6

0x3b4d,	// (0x00088ea7) wml_button_bg_pane_g7

0x3b55,	// (0x00088eaf) wml_button_bg_pane_g8

0x3b5d,	// (0x00088eb7) wml_button_bg_pane_g9

0x0008,

0xf206,	// (0x00094560) wml_button_bg_pane_g

0x3b65,	// (0x00088ebf) bg_list_pane_cp02

0x3b6e,	// (0x00088ec8) mce_header_pane_ParamLimits

0x3b6e,	// (0x00088ec8) mce_header_pane

0x3b82,	// (0x00088edc) mce_icon_pane

0x3b82,	// (0x00088edc) mce_image_pane

0x3b8b,	// (0x00088ee5) mce_text_pane_ParamLimits

0x3b8b,	// (0x00088ee5) mce_text_pane

0x3b9f,	// (0x00088ef9) scroll_pane_cp03

0x3b9f,	// (0x00088ef9) scroll_pane_cp04

0x3ba9,	// (0x00088f03) scroll_pane_cp05_ParamLimits

0x3ba9,	// (0x00088f03) scroll_pane_cp05

0x3bb5,	// (0x00088f0f) mce_header_field_pane_ParamLimits

0x3bb5,	// (0x00088f0f) mce_header_field_pane

0x3bcc,	// (0x00088f26) mce_header_field_pane_2_ParamLimits

0x3bcc,	// (0x00088f26) mce_header_field_pane_2

0x3be2,	// (0x00088f3c) mce_header_field_pane_3

0x3bea,	// (0x00088f44) list_single_mce_message_pane_ParamLimits

0x3bea,	// (0x00088f44) list_single_mce_message_pane

0x3bff,	// (0x00088f59) list_single_mce_smart_pane_ParamLimits

0x3bff,	// (0x00088f59) list_single_mce_smart_pane

0x3c1f,	// (0x00088f79) input_focus_pane_cp03

0x3c28,	// (0x00088f82) list_header_data_pane

0x3c30,	// (0x00088f8a) mce_header_field_pane_t1

0x3c3e,	// (0x00088f98) list_single_mce_header_pane_ParamLimits

0x3c3e,	// (0x00088f98) list_single_mce_header_pane

0x3c52,	// (0x00088fac) list_single_mce_header_pane_t1

0x3c61,	// (0x00088fbb) list_single_mce_message_pane_g1

0x3c6a,	// (0x00088fc4) list_single_mce_message_pane_t1

0x3c9f,	// (0x00088ff9) bg_cale_heading_pane_cp01_ParamLimits

0x3c9f,	// (0x00088ff9) bg_cale_heading_pane_cp01

0x3cce,	// (0x00089028) bg_cale_pane_cp02_ParamLimits

0x3cce,	// (0x00089028) bg_cale_pane_cp02

0x3cfb,	// (0x00089055) cale_month_corner_pane

0x3d1a,	// (0x00089074) cale_month_day_heading_pane_ParamLimits

0x3d1a,	// (0x00089074) cale_month_day_heading_pane

0x3d51,	// (0x000890ab) cale_month_pane_g1_ParamLimits

0x3d51,	// (0x000890ab) cale_month_pane_g1

0x3d75,	// (0x000890cf) cale_month_pane_g2_ParamLimits

0x3d75,	// (0x000890cf) cale_month_pane_g2

0x3d9d,	// (0x000890f7) cale_month_pane_g3_ParamLimits

0x3d9d,	// (0x000890f7) cale_month_pane_g3

0x3dd9,	// (0x00089133) cale_month_pane_g4_ParamLimits

0x3dd9,	// (0x00089133) cale_month_pane_g4

0x3e15,	// (0x0008916f) cale_month_pane_g5_ParamLimits

0x3e15,	// (0x0008916f) cale_month_pane_g5

0x3e51,	// (0x000891ab) cale_month_pane_g6_ParamLimits

0x3e51,	// (0x000891ab) cale_month_pane_g6

0x3e8d,	// (0x000891e7) cale_month_pane_g7_ParamLimits

0x3e8d,	// (0x000891e7) cale_month_pane_g7

0x3ec9,	// (0x00089223) cale_month_pane_g8_ParamLimits

0x3ec9,	// (0x00089223) cale_month_pane_g8

0x3f0d,	// (0x00089267) cale_month_pane_g9_ParamLimits

0x3f0d,	// (0x00089267) cale_month_pane_g9

0x3f4f,	// (0x000892a9) cale_month_pane_g10_ParamLimits

0x3f4f,	// (0x000892a9) cale_month_pane_g10

0x3f91,	// (0x000892eb) cale_month_pane_g11_ParamLimits

0x3f91,	// (0x000892eb) cale_month_pane_g11

0x3fd3,	// (0x0008932d) cale_month_pane_g12_ParamLimits

0x3fd3,	// (0x0008932d) cale_month_pane_g12

0x4015,	// (0x0008936f) cale_month_pane_g13_ParamLimits

0x4015,	// (0x0008936f) cale_month_pane_g13

0x000c,

0xf219,	// (0x00094573) cale_month_pane_g_ParamLimits

0xf219,	// (0x00094573) cale_month_pane_g

0x4069,	// (0x000893c3) cale_month_week_pane

0x4085,	// (0x000893df) grid_cale_month_pane_ParamLimits

0x4085,	// (0x000893df) grid_cale_month_pane

0x40b3,	// (0x0008940d) cale_month_day_heading_pane_t1

0x4139,	// (0x00089493) cale_month_day_heading_pane_t2

0x41ca,	// (0x00089524) cale_month_day_heading_pane_t3

0x425b,	// (0x000895b5) cale_month_day_heading_pane_t4

0x42ec,	// (0x00089646) cale_month_day_heading_pane_t5

0x437d,	// (0x000896d7) cale_month_day_heading_pane_t6

0x440e,	// (0x00089768) cale_month_day_heading_pane_t7

0x0006,

0xf234,	// (0x0009458e) cale_month_day_heading_pane_t

0x0e5b,	// (0x000861b5) bg_cale_side_pane_cp01

0x44a3,	// (0x000897fd) cale_month_week_pane_t1

0x44bc,	// (0x00089816) cale_month_week_pane_t2

0x44d5,	// (0x0008982f) cale_month_week_pane_t3

0x44ee,	// (0x00089848) cale_month_week_pane_t4

0x4507,	// (0x00089861) cale_month_week_pane_t5

0x4520,	// (0x0008987a) cale_month_week_pane_t6

0x0005,

0xf243,	// (0x0009459d) cale_month_week_pane_t

0x4539,	// (0x00089893) cell_cale_month_pane_ParamLimits

0x4539,	// (0x00089893) cell_cale_month_pane

0xaf89,	// (0x000902e3) cell_cale_month_pane_g1

0x462b,	// (0x00089985) cell_cale_month_pane_t1_ParamLimits

0x462b,	// (0x00089985) cell_cale_month_pane_t1

0x0e69,	// (0x000861c3) grid_highlight_pane_cp08

0x0c02,	// (0x00085f5c) main_smil_g1

0x464b,	// (0x000899a5) smil_status_pane

0x4654,	// (0x000899ae) smil_text_pane

0xc5ff,	// (0x00091959) bg_popup_call3_rect_pane_g8

0xc607,	// (0x00091961) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ee,	// (0x00094848) bg_popup_call3_rect_pane_g

0xc85a,	// (0x00091bb4) smil_status_volume_pane_g1

0x4666,	// (0x000899c0) smil_status_pane_t1

0xc88d,	// (0x00091be7) volume_smil_pane

0x467d,	// (0x000899d7) list_smil_text_pane

0x4687,	// (0x000899e1) scroll_pane_cp011

0x4692,	// (0x000899ec) smil_text_list_pane_t1_ParamLimits

0x4692,	// (0x000899ec) smil_text_list_pane_t1

0xaf95,	// (0x000902ef) aid_volume_smil_ParamLimits

0xaf95,	// (0x000902ef) aid_volume_smil

0x0c02,	// (0x00085f5c) smil_volume_pane_g1

0x0c02,	// (0x00085f5c) smil_volume_pane_g2

0x0001,

0xf0a1,	// (0x000943fb) smil_volume_pane_g

0x2cc1,	// (0x0008801b) listscroll_cale_day_pane

0x46ce,	// (0x00089a28) bg_cale_pane

0x46e6,	// (0x00089a40) list_cale_pane

0x4709,	// (0x00089a63) scroll_pane_cp09

0x471a,	// (0x00089a74) cale_bg_pane_g1

0x4722,	// (0x00089a7c) cale_bg_pane_g2

0x472a,	// (0x00089a84) cale_bg_pane_g3

0x4732,	// (0x00089a8c) cale_bg_pane_g4

0x473a,	// (0x00089a94) cale_bg_pane_g5

0x4742,	// (0x00089a9c) cale_bg_pane_g6

0x474a,	// (0x00089aa4) cale_bg_pane_g7

0x4752,	// (0x00089aac) cale_bg_pane_g8

0x475a,	// (0x00089ab4) cale_bg_pane_g9

0x0008,

0xf255,	// (0x000945af) cale_bg_pane_g

0x476a,	// (0x00089ac4) list_cale_time_pane_ParamLimits

0x476a,	// (0x00089ac4) list_cale_time_pane

0x477f,	// (0x00089ad9) list_cale_time_pane_g1_ParamLimits

0x477f,	// (0x00089ad9) list_cale_time_pane_g1

0x478b,	// (0x00089ae5) list_cale_time_pane_g2_ParamLimits

0x478b,	// (0x00089ae5) list_cale_time_pane_g2

0x4798,	// (0x00089af2) list_cale_time_pane_g3_ParamLimits

0x4798,	// (0x00089af2) list_cale_time_pane_g3

0x47a4,	// (0x00089afe) list_cale_time_pane_g4_ParamLimits

0x47a4,	// (0x00089afe) list_cale_time_pane_g4

0x47b0,	// (0x00089b0a) list_cale_time_pane_g5_ParamLimits

0x47b0,	// (0x00089b0a) list_cale_time_pane_g5

0x0005,

0xf268,	// (0x000945c2) list_cale_time_pane_g_ParamLimits

0xf268,	// (0x000945c2) list_cale_time_pane_g

0x47c9,	// (0x00089b23) list_cale_time_pane_t1_ParamLimits

0x47c9,	// (0x00089b23) list_cale_time_pane_t1

0x47f1,	// (0x00089b4b) list_cale_time_pane_t2_ParamLimits

0x47f1,	// (0x00089b4b) list_cale_time_pane_t2

0x4c77,	// (0x00089fd1) aid_blid_cardinal_pane

0x4cb5,	// (0x0008a00f) compass_pane_t4

0x4819,	// (0x00089b73) list_cale_time_pane_t4_ParamLimits

0x4819,	// (0x00089b73) list_cale_time_pane_t4

0x4cc3,	// (0x0008a01d) compass_pane_t5

0x4cd1,	// (0x0008a02b) compass_pane_t6

0x4cdf,	// (0x0008a039) compass_pane_t7

0xb2a4,	// (0x000905fe) navi_pane_cc_t1

0xb45b,	// (0x000907b5) aid_phob_thumbnail_center_pane

0x50cd,	// (0x0008a427) main_postcard_pane_g4_ParamLimits

0x0002,

0xf275,	// (0x000945cf) list_cale_time_pane_t_ParamLimits

0xf275,	// (0x000945cf) list_cale_time_pane_t

0x05e8,	// (0x00085942) bg_popup_window_pane_cp02_ParamLimits

0x05e8,	// (0x00085942) bg_popup_window_pane_cp02

0x4841,	// (0x00089b9b) heading_pane_cp01_ParamLimits

0x4841,	// (0x00089b9b) heading_pane_cp01

0x484d,	// (0x00089ba7) loc_req_pane_ParamLimits

0x484d,	// (0x00089ba7) loc_req_pane

0x485d,	// (0x00089bb7) loc_type_pane_ParamLimits

0x485d,	// (0x00089bb7) loc_type_pane

0x486f,	// (0x00089bc9) loc_type_pane_t1_ParamLimits

0x486f,	// (0x00089bc9) loc_type_pane_t1

0x4881,	// (0x00089bdb) loc_type_pane_t2_ParamLimits

0x4881,	// (0x00089bdb) loc_type_pane_t2

0x4893,	// (0x00089bed) loc_type_pane_t3_ParamLimits

0x4893,	// (0x00089bed) loc_type_pane_t3

0x0002,

0xf27c,	// (0x000945d6) loc_type_pane_t_ParamLimits

0xf27c,	// (0x000945d6) loc_type_pane_t

0x48a5,	// (0x00089bff) list_loc_req_pane

0x48af,	// (0x00089c09) scroll_pane_cp012

0x48b8,	// (0x00089c12) list_single_loc_request_popup_menu_pane_ParamLimits

0x48b8,	// (0x00089c12) list_single_loc_request_popup_menu_pane

0x48c5,	// (0x00089c1f) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x48c5,	// (0x00089c1f) list_single_loc_request_popup_menu_pane_g1

0x48d1,	// (0x00089c2b) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x48d1,	// (0x00089c2b) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf283,	// (0x000945dd) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf283,	// (0x000945dd) list_single_loc_request_popup_menu_pane_g

0x48dd,	// (0x00089c37) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x48dd,	// (0x00089c37) list_single_loc_request_popup_menu_pane_t1

0x0bea,	// (0x00085f44) bg_popup_window_pane_cp03_ParamLimits

0x0bea,	// (0x00085f44) bg_popup_window_pane_cp03

0x13fc,	// (0x00086756) heading_loc_req_pane_ParamLimits

0x13fc,	// (0x00086756) heading_loc_req_pane

0x48f3,	// (0x00089c4d) popup_dyc_status_message_window_g1_ParamLimits

0x48f3,	// (0x00089c4d) popup_dyc_status_message_window_g1

0x4907,	// (0x00089c61) popup_dyc_status_message_window_t1_ParamLimits

0x4907,	// (0x00089c61) popup_dyc_status_message_window_t1

0x491c,	// (0x00089c76) popup_dyc_status_message_window_t2_ParamLimits

0x491c,	// (0x00089c76) popup_dyc_status_message_window_t2

0x4931,	// (0x00089c8b) popup_dyc_status_message_window_t3_ParamLimits

0x4931,	// (0x00089c8b) popup_dyc_status_message_window_t3

0x0002,

0xf288,	// (0x000945e2) popup_dyc_status_message_window_t_ParamLimits

0xf288,	// (0x000945e2) popup_dyc_status_message_window_t

0x098f,	// (0x00085ce9) bg_heading_pane_cp01

0x494d,	// (0x00089ca7) heading_loc_req_pane_g1

0x4955,	// (0x00089caf) heading_loc_req_pane_g2

0x495d,	// (0x00089cb7) heading_loc_req_pane_g3

0x0002,

0xf28f,	// (0x000945e9) heading_loc_req_pane_g

0x4965,	// (0x00089cbf) heading_loc_req_pane_t1

0x49ac,	// (0x00089d06) bg_popup_sub_pane_cp01_ParamLimits

0x49ac,	// (0x00089d06) bg_popup_sub_pane_cp01

0x49ba,	// (0x00089d14) popup_cale_events_window_g1_ParamLimits

0x49ba,	// (0x00089d14) popup_cale_events_window_g1

0x49da,	// (0x00089d34) popup_cale_events_window_g2_ParamLimits

0x49da,	// (0x00089d34) popup_cale_events_window_g2

0x0001,

0xf2c3,	// (0x0009461d) popup_cale_events_window_g_ParamLimits

0xf2c3,	// (0x0009461d) popup_cale_events_window_g

0x49fa,	// (0x00089d54) popup_cale_events_window_t1_ParamLimits

0x49fa,	// (0x00089d54) popup_cale_events_window_t1

0x4a0c,	// (0x00089d66) popup_cale_events_window_t2_ParamLimits

0x4a0c,	// (0x00089d66) popup_cale_events_window_t2

0x4a4a,	// (0x00089da4) popup_cale_events_window_t3_ParamLimits

0x4a4a,	// (0x00089da4) popup_cale_events_window_t3

0xafb7,	// (0x00090311) popup_cale_events_window_t4_ParamLimits

0xafb7,	// (0x00090311) popup_cale_events_window_t4

0x0003,

0xf2c8,	// (0x00094622) popup_cale_events_window_t_ParamLimits

0xf2c8,	// (0x00094622) popup_cale_events_window_t

0x4a84,	// (0x00089dde) call_type_pane

0x4a94,	// (0x00089dee) popup_call_status_window_g1

0x4aa8,	// (0x00089e02) popup_call_status_window_g2

0x4abc,	// (0x00089e16) popup_call_status_window_g3

0x0002,

0xf2d1,	// (0x0009462b) popup_call_status_window_g

0xafed,	// (0x00090347) call_type_pane_g1

0xaff6,	// (0x00090350) call_type_pane_g2

0x0001,

0xf2d8,	// (0x00094632) call_type_pane_g

0x098f,	// (0x00085ce9) bg_popup_sub_pane_cp02

0xafff,	// (0x00090359) listscroll_popup_wml_pane

0xb007,	// (0x00090361) list_wml_pane

0xb011,	// (0x0009036b) scroll_pane_cp013

0x4acc,	// (0x00089e26) list_single_graphic_popup_wml_pane_ParamLimits

0x4acc,	// (0x00089e26) list_single_graphic_popup_wml_pane

0x0c02,	// (0x00085f5c) list_single_graphic_popup_wml_pane_g1

0xb01a,	// (0x00090374) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2dd,	// (0x00094637) list_single_graphic_popup_wml_pane_g

0xb022,	// (0x0009037c) list_single_graphic_popup_wml_pane_t1

0xb038,	// (0x00090392) aid_call_pane

0x0be2,	// (0x00085f3c) popup_clock_analogue_window_g1

0x0be2,	// (0x00085f3c) popup_clock_analogue_window_g2

0xb040,	// (0x0009039a) popup_clock_analogue_window_g3

0xb040,	// (0x0009039a) popup_clock_analogue_window_g4

0x0c02,	// (0x00085f5c) popup_clock_analogue_window_g5

0x0004,

0xf2e2,	// (0x0009463c) popup_clock_analogue_window_g

0xb048,	// (0x000903a2) popup_clock_analogue_window_t1

0xb056,	// (0x000903b0) clock_digital_number_pane_ParamLimits

0xb056,	// (0x000903b0) clock_digital_number_pane

0xb062,	// (0x000903bc) clock_digital_number_pane_cp02_ParamLimits

0xb062,	// (0x000903bc) clock_digital_number_pane_cp02

0xb06e,	// (0x000903c8) clock_digital_number_pane_cp03_ParamLimits

0xb06e,	// (0x000903c8) clock_digital_number_pane_cp03

0xb07a,	// (0x000903d4) clock_digital_number_pane_cp04_ParamLimits

0xb07a,	// (0x000903d4) clock_digital_number_pane_cp04

0xb086,	// (0x000903e0) clock_digital_separator_pane_ParamLimits

0xb086,	// (0x000903e0) clock_digital_separator_pane

0xb092,	// (0x000903ec) popup_clock_digital_window_t1

0x0c02,	// (0x00085f5c) clock_digital_number_pane_g1

0x0c02,	// (0x00085f5c) clock_digital_number_pane_g2

0x0001,

0xf0a1,	// (0x000943fb) clock_digital_number_pane_g

0x0c02,	// (0x00085f5c) clock_digital_separator_pane_g1

0x0c02,	// (0x00085f5c) clock_digital_separator_pane_g2

0x0001,

0xf0a1,	// (0x000943fb) clock_digital_separator_pane_g

0x098f,	// (0x00085ce9) bg_popup_window_pane_cp04

0xb0af,	// (0x00090409) heading_pane_cp03

0x32e3,	// (0x0008863d) listscroll_popup_gms_pane

0x098f,	// (0x00085ce9) grid_large_graphic_popup_pane

0xb0b8,	// (0x00090412) listscroll_popup_gms_pane_g1

0xb0c1,	// (0x0009041b) listscroll_popup_gms_pane_g2

0x0001,

0xf2ed,	// (0x00094647) listscroll_popup_gms_pane_g

0xb0ca,	// (0x00090424) scroll_pane_cp014

0x0c80,	// (0x00085fda) cell_large_graphic_popup_pane_ParamLimits

0x0c80,	// (0x00085fda) cell_large_graphic_popup_pane

0x0c64,	// (0x00085fbe) cell_large_graphic_popup_pane_g1_ParamLimits

0x0c64,	// (0x00085fbe) cell_large_graphic_popup_pane_g1

0xb0d2,	// (0x0009042c) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0d2,	// (0x0009042c) cell_large_graphic_popup_pane_g2

0xb0e0,	// (0x0009043a) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0e0,	// (0x0009043a) cell_large_graphic_popup_pane_g3

0xb0ee,	// (0x00090448) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0ee,	// (0x00090448) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f2,	// (0x0009464c) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f2,	// (0x0009464c) cell_large_graphic_popup_pane_g

0x098f,	// (0x00085ce9) grid_highlight_pane_cp010

0x0c02,	// (0x00085f5c) bg_popup_call_pane_g1

0xb0ff,	// (0x00090459) list_single_graphic_popup_conf_pane_ParamLimits

0xb0ff,	// (0x00090459) list_single_graphic_popup_conf_pane

0xb112,	// (0x0009046c) list_highlight_pane_cp01

0xb11b,	// (0x00090475) list_single_graphic_popup_conf_pane_g1

0xb123,	// (0x0009047d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2fb,	// (0x00094655) list_single_graphic_popup_conf_pane_g

0xb12b,	// (0x00090485) list_single_graphic_popup_conf_pane_t1

0xb139,	// (0x00090493) linegrid_cams_pane_g1

0x4adf,	// (0x00089e39) linegrid_cams_pane_g2

0x0dec,	// (0x00086146) linegrid_cams_pane_g3

0xb142,	// (0x0009049c) linegrid_cams_pane_g4

0x4ae8,	// (0x00089e42) linegrid_cams_pane_g5

0x4af1,	// (0x00089e4b) linegrid_cams_pane_g6

0x0e9c,	// (0x000861f6) linegrid_cams_pane_g7

0x0006,

0xf300,	// (0x0009465a) linegrid_cams_pane_g

0xb14b,	// (0x000904a5) popup_clock_analogue_window

0xb14b,	// (0x000904a5) popup_clock_digital_window

0x098f,	// (0x00085ce9) popup_phob_thumbnail_window

0x0c02,	// (0x00085f5c) call_video_uplink_pane_g1

0xb154,	// (0x000904ae) call_video_uplink_pane_g2

0x0001,

0xf30f,	// (0x00094669) call_video_uplink_pane_g

0x0e69,	// (0x000861c3) video_uplink_pane

0xb15c,	// (0x000904b6) mce_image_pane_g1

0x4afa,	// (0x00089e54) mce_image_pane_g2

0x4b02,	// (0x00089e5c) mce_image_pane_g3

0x4b0a,	// (0x00089e64) mce_image_pane_g4

0x4b12,	// (0x00089e6c) mce_image_pane_g5

0x0004,

0xf314,	// (0x0009466e) mce_image_pane_g

0xb166,	// (0x000904c0) control_top_pane_stacon_cp01_ParamLimits

0xb166,	// (0x000904c0) control_top_pane_stacon_cp01

0xb176,	// (0x000904d0) uni_indicator_pane_stacon_cp01_ParamLimits

0xb176,	// (0x000904d0) uni_indicator_pane_stacon_cp01

0xb187,	// (0x000904e1) bg_popup_sub_pane_cp03

0xb191,	// (0x000904eb) chi_dic_find_pane

0x4b1a,	// (0x00089e74) listscroll_chi_dic_pane

0xb199,	// (0x000904f3) main_pane_chidic_g1

0xb1a1,	// (0x000904fb) chi_dic_find_pane_t1

0xb1af,	// (0x00090509) find_chidic_pane

0xb1b8,	// (0x00090512) chi_dic_list_pane_ParamLimits

0xb1b8,	// (0x00090512) chi_dic_list_pane

0xb0ca,	// (0x00090424) scroll_pane_cp020

0xb1c9,	// (0x00090523) find_chidic_pane_t1

0x098f,	// (0x00085ce9) input_focus_pane_cp06

0x4b2e,	// (0x00089e88) list_chi_dic_pane_ParamLimits

0x4b2e,	// (0x00089e88) list_chi_dic_pane

0x4b40,	// (0x00089e9a) list_chi_dic_pane_t1_ParamLimits

0x4b40,	// (0x00089e9a) list_chi_dic_pane_t1

0x098f,	// (0x00085ce9) list_highlight_pane_cp020

0xb1d8,	// (0x00090532) bg_cale_heading_pane_g1

0x4b53,	// (0x00089ead) bg_cale_heading_pane_g2

0x4b5b,	// (0x00089eb5) bg_cale_heading_pane_g3

0x4b63,	// (0x00089ebd) bg_cale_heading_pane_g4

0x4b6b,	// (0x00089ec5) bg_cale_heading_pane_g5

0x4b73,	// (0x00089ecd) bg_cale_heading_pane_g6

0x4b7b,	// (0x00089ed5) bg_cale_heading_pane_g7

0x4b83,	// (0x00089edd) bg_cale_heading_pane_g8

0x4b8b,	// (0x00089ee5) bg_cale_heading_pane_g9

0x0008,

0xf31f,	// (0x00094679) bg_cale_heading_pane_g

0xb1d8,	// (0x00090532) bg_cale_side_pane_g1

0x4b93,	// (0x00089eed) bg_cale_side_pane_g2

0x4b9b,	// (0x00089ef5) bg_cale_side_pane_g3

0x4ba3,	// (0x00089efd) bg_cale_side_pane_g4

0x4bab,	// (0x00089f05) bg_cale_side_pane_g5

0x4bb3,	// (0x00089f0d) bg_cale_side_pane_g6

0x4bbb,	// (0x00089f15) bg_cale_side_pane_g7

0x4bc3,	// (0x00089f1d) bg_cale_side_pane_g8

0x4bcb,	// (0x00089f25) bg_cale_side_pane_g9

0x0008,

0xf332,	// (0x0009468c) bg_cale_side_pane_g

0x4bd3,	// (0x00089f2d) popup_call_status_window_ParamLimits

0x4bd3,	// (0x00089f2d) popup_call_status_window

0xb1e0,	// (0x0009053a) stacon_top_pane

0xb1e8,	// (0x00090542) status_pane_ParamLimits

0xb1e8,	// (0x00090542) status_pane

0xb202,	// (0x0009055c) status_small_pane

0xb20a,	// (0x00090564) control_pane

0x098f,	// (0x00085ce9) stacon_bottom_pane

0xb212,	// (0x0009056c) list_single_mce_smart_pane_t1_ParamLimits

0xb212,	// (0x0009056c) list_single_mce_smart_pane_t1

0xb225,	// (0x0009057f) list_single_mce_smart_pane_t2_ParamLimits

0xb225,	// (0x0009057f) list_single_mce_smart_pane_t2

0x0001,

0xf345,	// (0x0009469f) list_single_mce_smart_pane_t_ParamLimits

0xf345,	// (0x0009469f) list_single_mce_smart_pane_t

0x4c1a,	// (0x00089f74) compass_pane

0x4c23,	// (0x00089f7d) main_location2_pane_t1

0x4c39,	// (0x00089f93) main_location2_pane_t2

0x4c4f,	// (0x00089fa9) main_location2_pane_t3

0x0003,

0xf34a,	// (0x000946a4) main_location2_pane_t

0xb24d,	// (0x000905a7) compass_pane_g1_ParamLimits

0xb24d,	// (0x000905a7) compass_pane_g1

0x4c97,	// (0x00089ff1) compass_pane_t1

0x4ca6,	// (0x0008a000) compass_pane_t2

0x0005,

0xf353,	// (0x000946ad) compass_pane_t

0x4ced,	// (0x0008a047) text_secondary_cp61

0xb29b,	// (0x000905f5) navi_pane_cams_g5

0xb2e7,	// (0x00090641) navi_pane_im_t1

0xb2f5,	// (0x0009064f) navi_pane_mp_g1_ParamLimits

0xb2f5,	// (0x0009064f) navi_pane_mp_g1

0xb309,	// (0x00090663) navi_pane_mp_g2_ParamLimits

0xb309,	// (0x00090663) navi_pane_mp_g2

0xb315,	// (0x0009066f) navi_pane_mp_g3_ParamLimits

0xb315,	// (0x0009066f) navi_pane_mp_g3

0x0002,

0xf367,	// (0x000946c1) navi_pane_mp_g_ParamLimits

0xf367,	// (0x000946c1) navi_pane_mp_g

0xb321,	// (0x0009067b) navi_pane_mp_t1

0xb32f,	// (0x00090689) navi_pane_mp_t2

0x0002,

0xf36e,	// (0x000946c8) navi_pane_mp_t

0xb39a,	// (0x000906f4) navi_pane_vt_g1

0xb321,	// (0x0009067b) navi_pane_vt_t1

0xb3a2,	// (0x000906fc) navi_slider_pane

0x32e3,	// (0x0008863d) zooming_pane

0xb3aa,	// (0x00090704) navi_slider_pane_g1

0xb3b3,	// (0x0009070d) navi_slider_pane_g2

0x0006,

0xf375,	// (0x000946cf) navi_slider_pane_g

0xb3e0,	// (0x0009073a) aid_levels_zoom

0xb3e8,	// (0x00090742) zooming_pane_g1

0xb3f0,	// (0x0009074a) zooming_pane_g2

0xb3f0,	// (0x0009074a) zooming_pane_g3

0x0002,

0xf384,	// (0x000946de) zooming_pane_g

0xb3f8,	// (0x00090752) level_10_zoom

0xb401,	// (0x0009075b) level_11_zoom

0xb40a,	// (0x00090764) level_1_zoom

0xb413,	// (0x0009076d) level_2_zoom

0xb41c,	// (0x00090776) level_3_zoom

0xb425,	// (0x0009077f) level_4_zoom

0xb42e,	// (0x00090788) level_5_zoom

0xb437,	// (0x00090791) level_6_zoom

0xb440,	// (0x0009079a) level_7_zoom

0xb449,	// (0x000907a3) level_8_zoom

0xb452,	// (0x000907ac) level_9_zoom

0xb463,	// (0x000907bd) popup_phob_thumbnail_window_g1

0xb46b,	// (0x000907c5) popup_phob_thumbnail_window_g2

0x0001,

0xf38b,	// (0x000946e5) popup_phob_thumbnail_window_g

0x56d5,	// (0x0008aa2f) level_1_location

0x56dd,	// (0x0008aa37) level_2_location

0x56e5,	// (0x0008aa3f) level_3_location

0x56ed,	// (0x0008aa47) level_4_location

0x32e3,	// (0x0008863d) level_5_location

0x4d83,	// (0x0008a0dd) mce_icon_pane_g1

0x4d8b,	// (0x0008a0e5) mce_icon_pane_g2

0x0001,

0xf390,	// (0x000946ea) mce_icon_pane_g

0xeb27,	// (0x00093e81) main_mup_pane_g1_ParamLimits

0xeb27,	// (0x00093e81) main_mup_pane_g1

0xeb27,	// (0x00093e81) main_mup_pane_g2_ParamLimits

0xeb27,	// (0x00093e81) main_mup_pane_g2

0xeb27,	// (0x00093e81) main_mup_pane_g3_ParamLimits

0xeb27,	// (0x00093e81) main_mup_pane_g3

0xeb27,	// (0x00093e81) main_mup_pane_g4_ParamLimits

0xeb27,	// (0x00093e81) main_mup_pane_g4

0xeb27,	// (0x00093e81) main_mup_pane_g5_ParamLimits

0xeb27,	// (0x00093e81) main_mup_pane_g5

0xeb27,	// (0x00093e81) main_mup_pane_g6_ParamLimits

0xeb27,	// (0x00093e81) main_mup_pane_g6

0xeb27,	// (0x00093e81) main_mup_pane_g7_ParamLimits

0xeb27,	// (0x00093e81) main_mup_pane_g7

0xeb27,	// (0x00093e81) main_mup_pane_g8_ParamLimits

0xeb27,	// (0x00093e81) main_mup_pane_g8

0xeb27,	// (0x00093e81) main_mup_pane_g9_ParamLimits

0xeb27,	// (0x00093e81) main_mup_pane_g9

0xeb27,	// (0x00093e81) main_mup_pane_g10_ParamLimits

0xeb27,	// (0x00093e81) main_mup_pane_g10

0xeb27,	// (0x00093e81) main_mup_pane_g11_ParamLimits

0xeb27,	// (0x00093e81) main_mup_pane_g11

0x0c64,	// (0x00085fbe) main_mup_pane_g12_ParamLimits

0x0c64,	// (0x00085fbe) main_mup_pane_g12

0xeb27,	// (0x00093e81) main_mup_pane_g13_ParamLimits

0xeb27,	// (0x00093e81) main_mup_pane_g13

0x000c,

0xf395,	// (0x000946ef) main_mup_pane_g_ParamLimits

0xf395,	// (0x000946ef) main_mup_pane_g

0xeb35,	// (0x00093e8f) main_mup_pane_t1_ParamLimits

0xeb35,	// (0x00093e8f) main_mup_pane_t1

0xeb35,	// (0x00093e8f) main_mup_pane_t2_ParamLimits

0xeb35,	// (0x00093e8f) main_mup_pane_t2

0xeb35,	// (0x00093e8f) main_mup_pane_t3_ParamLimits

0xeb35,	// (0x00093e8f) main_mup_pane_t3

0x335a,	// (0x000886b4) main_mup_pane_t4_ParamLimits

0x335a,	// (0x000886b4) main_mup_pane_t4

0x335a,	// (0x000886b4) main_mup_pane_t5_ParamLimits

0x335a,	// (0x000886b4) main_mup_pane_t5

0xb473,	// (0x000907cd) main_mup_pane_t6_ParamLimits

0xb473,	// (0x000907cd) main_mup_pane_t6

0x0005,

0xf3b0,	// (0x0009470a) main_mup_pane_t_ParamLimits

0xf3b0,	// (0x0009470a) main_mup_pane_t

0x0c80,	// (0x00085fda) mup_progress_pane_ParamLimits

0x0c80,	// (0x00085fda) mup_progress_pane

0xb487,	// (0x000907e1) mup_visualizer_pane_ParamLimits

0xb487,	// (0x000907e1) mup_visualizer_pane

0xb487,	// (0x000907e1) mup_volume_pane_ParamLimits

0xb487,	// (0x000907e1) mup_volume_pane

0x0c72,	// (0x00085fcc) mup_visualizer_pane_g1_ParamLimits

0x0c72,	// (0x00085fcc) mup_visualizer_pane_g1

0xb495,	// (0x000907ef) mup_visualizer_pane_g2_ParamLimits

0xb495,	// (0x000907ef) mup_visualizer_pane_g2

0x0c64,	// (0x00085fbe) mup_visualizer_pane_g3_ParamLimits

0x0c64,	// (0x00085fbe) mup_visualizer_pane_g3

0x0002,

0xf3bd,	// (0x00094717) mup_visualizer_pane_g_ParamLimits

0xf3bd,	// (0x00094717) mup_visualizer_pane_g

0x34de,	// (0x00088838) mup_volume_pane_g1

0x34de,	// (0x00088838) mup_volume_pane_g2

0x0001,

0xf3c4,	// (0x0009471e) mup_volume_pane_g

0x34de,	// (0x00088838) mup_progress_pane_g1

0x34de,	// (0x00088838) mup_progress_pane_g2

0x34de,	// (0x00088838) mup_progress_pane_g3

0x0002,

0xf3c9,	// (0x00094723) mup_progress_pane_g

0x098f,	// (0x00085ce9) bg_popup_window_pane_cp05

0xb4a3,	// (0x000907fd) heading_pane_cp02_ParamLimits

0xb4a3,	// (0x000907fd) heading_pane_cp02

0xb4bd,	// (0x00090817) list_popup_blid_pane

0xb4c5,	// (0x0009081f) list_blid_sat_info_pane_ParamLimits

0xb4c5,	// (0x0009081f) list_blid_sat_info_pane

0xb4d8,	// (0x00090832) list_blid_sat_info_pane_g1

0xb4e0,	// (0x0009083a) list_blid_sat_info_pane_t1

0x4e65,	// (0x0008a1bf) mup_equalizer_pane_ParamLimits

0x4e65,	// (0x0008a1bf) mup_equalizer_pane

0x4e7e,	// (0x0008a1d8) mup_equalizer_pane_cp1_ParamLimits

0x4e7e,	// (0x0008a1d8) mup_equalizer_pane_cp1

0x4e97,	// (0x0008a1f1) mup_equalizer_pane_cp2_ParamLimits

0x4e97,	// (0x0008a1f1) mup_equalizer_pane_cp2

0x4eb0,	// (0x0008a20a) mup_equalizer_pane_cp3_ParamLimits

0x4eb0,	// (0x0008a20a) mup_equalizer_pane_cp3

0x4ec9,	// (0x0008a223) mup_equalizer_pane_cp4_ParamLimits

0x4ec9,	// (0x0008a223) mup_equalizer_pane_cp4

0x4ee2,	// (0x0008a23c) mup_equalizer_pane_cp5

0x4ef4,	// (0x0008a24e) mup_equalizer_pane_cp6

0x4f06,	// (0x0008a260) mup_equalizer_pane_cp7

0xc67f,	// (0x000919d9) bg_popup_call_poc_act_pane_g9

0xc687,	// (0x000919e1) bg_popup_call_poc_act_pane_g10

0xc68f,	// (0x000919e9) bg_popup_call_poc_act_pane_g11

0x000a,

0x0bea,	// (0x00085f44) mup_scale_pane

0x0c02,	// (0x00085f5c) mup_scale_pane_g1

0xb4ee,	// (0x00090848) mup_scale_pane_g2

0x0006,

0xf3e5,	// (0x0009473f) mup_scale_pane_g

0xb512,	// (0x0009086c) msg_data_pane

0xb51a,	// (0x00090874) scroll_pane_cp017

0x4f2c,	// (0x0008a286) bg_list_pane_cp04_ParamLimits

0x4f2c,	// (0x0008a286) bg_list_pane_cp04

0xb52a,	// (0x00090884) msg_data_pane_g1

0x4afa,	// (0x00089e54) msg_data_pane_g2

0x4b02,	// (0x00089e5c) msg_data_pane_g3

0x4f44,	// (0x0008a29e) msg_data_pane_g4

0x4b12,	// (0x00089e6c) msg_data_pane_g5

0x4d83,	// (0x0008a0dd) msg_data_pane_g6

0x4f4c,	// (0x0008a2a6) msg_data_pane_g7

0x0006,

0xf3f4,	// (0x0009474e) msg_data_pane_g

0x4f54,	// (0x0008a2ae) msg_text_pane_ParamLimits

0x4f54,	// (0x0008a2ae) msg_text_pane

0x4f79,	// (0x0008a2d3) qrid_highlight_pane_cp011_ParamLimits

0x4f79,	// (0x0008a2d3) qrid_highlight_pane_cp011

0x098f,	// (0x00085ce9) msg_body_pane

0x098f,	// (0x00085ce9) msg_header_pane

0xb53b,	// (0x00090895) input_focus_pane_cp07

0xb550,	// (0x000908aa) msg_header_pane_t1_ParamLimits

0xb550,	// (0x000908aa) msg_header_pane_t1

0x4f9b,	// (0x0008a2f5) msg_header_pane_t2_ParamLimits

0x4f9b,	// (0x0008a2f5) msg_header_pane_t2

0x0001,

0xf408,	// (0x00094762) msg_header_pane_t_ParamLimits

0xf408,	// (0x00094762) msg_header_pane_t

0xb566,	// (0x000908c0) msg_body_pane_g1

0x4fb2,	// (0x0008a30c) msg_body_pane_t1_ParamLimits

0x4fb2,	// (0x0008a30c) msg_body_pane_t1

0x4fdd,	// (0x0008a337) msg_body_pane_t2_ParamLimits

0x4fdd,	// (0x0008a337) msg_body_pane_t2

0x4fef,	// (0x0008a349) msg_body_pane_t3_ParamLimits

0x4fef,	// (0x0008a349) msg_body_pane_t3

0x0002,

0xf40d,	// (0x00094767) msg_body_pane_t_ParamLimits

0xf40d,	// (0x00094767) msg_body_pane_t

0x5037,	// (0x0008a391) main_viewer_pane_g1_ParamLimits

0x5037,	// (0x0008a391) main_viewer_pane_g1

0x5043,	// (0x0008a39d) main_viewer_pane_g2_ParamLimits

0x5043,	// (0x0008a39d) main_viewer_pane_g2

0x504f,	// (0x0008a3a9) main_viewer_pane_g3_ParamLimits

0x504f,	// (0x0008a3a9) main_viewer_pane_g3

0x505e,	// (0x0008a3b8) main_viewer_pane_g4_ParamLimits

0x505e,	// (0x0008a3b8) main_viewer_pane_g4

0xb586,	// (0x000908e0) main_viewer_pane_g5_ParamLimits

0xb586,	// (0x000908e0) main_viewer_pane_g5

0xb586,	// (0x000908e0) main_viewer_pane_g7_ParamLimits

0xb586,	// (0x000908e0) main_viewer_pane_g7

0xb598,	// (0x000908f2) main_viewer_pane_g8_ParamLimits

0xb598,	// (0x000908f2) main_viewer_pane_g8

0x0007,

0xf41d,	// (0x00094777) main_viewer_pane_g_ParamLimits

0xf41d,	// (0x00094777) main_viewer_pane_g

0xb5b0,	// (0x0009090a) viewer_content_pane_ParamLimits

0xb5b0,	// (0x0009090a) viewer_content_pane

0x5092,	// (0x0008a3ec) main_postcard_pane_g1_ParamLimits

0x5092,	// (0x0008a3ec) main_postcard_pane_g1

0x50a6,	// (0x0008a400) main_postcard_pane_g2_ParamLimits

0x50a6,	// (0x0008a400) main_postcard_pane_g2

0x50ba,	// (0x0008a414) main_postcard_pane_g3_ParamLimits

0x50ba,	// (0x0008a414) main_postcard_pane_g3

0x0005,

0xf42e,	// (0x00094788) main_postcard_pane_g_ParamLimits

0xf42e,	// (0x00094788) main_postcard_pane_g

0x50cd,	// (0x0008a427) main_postcard_pane_g4

0xc86d,	// (0x00091bc7) smil_status_volume_pane_g2

0x5108,	// (0x0008a462) postcard_pane_ParamLimits

0x5108,	// (0x0008a462) postcard_pane

0xb5be,	// (0x00090918) postcard_pane_g1_ParamLimits

0xb5be,	// (0x00090918) postcard_pane_g1

0x5148,	// (0x0008a4a2) postcard_pane_g2_ParamLimits

0x5148,	// (0x0008a4a2) postcard_pane_g2

0x5154,	// (0x0008a4ae) postcard_pane_g3_ParamLimits

0x5154,	// (0x0008a4ae) postcard_pane_g3

0xb5cc,	// (0x00090926) postcard_pane_g4_ParamLimits

0xb5cc,	// (0x00090926) postcard_pane_g4

0x5160,	// (0x0008a4ba) postcard_pane_g5_ParamLimits

0x5160,	// (0x0008a4ba) postcard_pane_g5

0x5175,	// (0x0008a4cf) postcard_pane_g6_ParamLimits

0x5175,	// (0x0008a4cf) postcard_pane_g6

0xb5be,	// (0x00090918) postcard_pane_g7_ParamLimits

0xb5be,	// (0x00090918) postcard_pane_g7

0x0006,

0xf43b,	// (0x00094795) postcard_pane_g_ParamLimits

0xf43b,	// (0x00094795) postcard_pane_g

0x5189,	// (0x0008a4e3) main_mp2_pane_g1_ParamLimits

0x5189,	// (0x0008a4e3) main_mp2_pane_g1

0x5195,	// (0x0008a4ef) main_mp2_pane_g2_ParamLimits

0x5195,	// (0x0008a4ef) main_mp2_pane_g2

0x51a1,	// (0x0008a4fb) main_mp2_pane_g3_ParamLimits

0x51a1,	// (0x0008a4fb) main_mp2_pane_g3

0x0002,

0xf44a,	// (0x000947a4) main_mp2_pane_g_ParamLimits

0xf44a,	// (0x000947a4) main_mp2_pane_g

0x51ad,	// (0x0008a507) main_mp2_pane_t1_ParamLimits

0x51ad,	// (0x0008a507) main_mp2_pane_t1

0x51c2,	// (0x0008a51c) main_mp2_pane_t2_ParamLimits

0x51c2,	// (0x0008a51c) main_mp2_pane_t2

0x51d4,	// (0x0008a52e) main_mp2_pane_t3_ParamLimits

0x51d4,	// (0x0008a52e) main_mp2_pane_t3

0x0002,

0xf451,	// (0x000947ab) main_mp2_pane_t_ParamLimits

0xf451,	// (0x000947ab) main_mp2_pane_t

0xb5da,	// (0x00090934) pec_content_pane_ParamLimits

0xb5da,	// (0x00090934) pec_content_pane

0x3a3d,	// (0x00088d97) scroll_pane_cp015

0xb5ec,	// (0x00090946) pec_attribute_pane_ParamLimits

0xb5ec,	// (0x00090946) pec_attribute_pane

0x51e6,	// (0x0008a540) pec_content_pane_g1_ParamLimits

0x51e6,	// (0x0008a540) pec_content_pane_g1

0xb5fc,	// (0x00090956) pec_content_pane_t1_ParamLimits

0xb5fc,	// (0x00090956) pec_content_pane_t1

0xb60e,	// (0x00090968) pec_content_pane_t2_ParamLimits

0xb60e,	// (0x00090968) pec_content_pane_t2

0x0001,

0xf458,	// (0x000947b2) pec_content_pane_t_ParamLimits

0xf458,	// (0x000947b2) pec_content_pane_t

0x51f2,	// (0x0008a54c) list_single_graphic_pane_cp01_ParamLimits

0x51f2,	// (0x0008a54c) list_single_graphic_pane_cp01

0x0bea,	// (0x00085f44) bg_popup_sub_pane_cp04

0xb620,	// (0x0009097a) popup_mup_playback_window_g1

0xb62c,	// (0x00090986) popup_mup_playback_window_t1

0xb641,	// (0x0009099b) popup_mup_playback_window_t2

0x0001,

0xf45d,	// (0x000947b7) popup_mup_playback_window_t

0xb678,	// (0x000909d2) main_image_pane_g1_ParamLimits

0xb678,	// (0x000909d2) main_image_pane_g1

0xb6bb,	// (0x00090a15) scroll_pane_cp018_ParamLimits

0xb6bb,	// (0x00090a15) scroll_pane_cp018

0xb6d3,	// (0x00090a2d) scroll_pane_cp016_ParamLimits

0xb6d3,	// (0x00090a2d) scroll_pane_cp016

0x52bd,	// (0x0008a617) smil2_image_pane_ParamLimits

0x52bd,	// (0x0008a617) smil2_image_pane

0x52e5,	// (0x0008a63f) smil2_root_pane_ParamLimits

0x52e5,	// (0x0008a63f) smil2_root_pane

0x531d,	// (0x0008a677) smil2_text_pane_ParamLimits

0x531d,	// (0x0008a677) smil2_text_pane

0x098f,	// (0x00085ce9) bg_list_pane_cp06

0xb707,	// (0x00090a61) grid_radio_pane

0x098f,	// (0x00085ce9) bg_popup_window_pane_cp06

0xb70f,	// (0x00090a69) main_fmradio_pane_t1

0xc6d7,	// (0x00091a31) heading_pane_cp04

0xb71d,	// (0x00090a77) main_fmradio_pane_t2

0xc6df,	// (0x00091a39) popup_cale_lunar_info_window_g1

0xb72b,	// (0x00090a85) main_fmradio_pane_t3

0xc6e7,	// (0x00091a41) popup_cale_lunar_info_window_g2

0xb739,	// (0x00090a93) main_fmradio_pane_t4

0x0001,

0xb747,	// (0x00090aa1) main_fmradio_pane_t5

0x0004,

0xf550,	// (0x000948aa) popup_cale_lunar_info_window_g

0xf472,	// (0x000947cc) main_fmradio_pane_t

0xb755,	// (0x00090aaf) wait_bar_pane_cp03

0xb75d,	// (0x00090ab7) cell_fmradio_pane_ParamLimits

0xb75d,	// (0x00090ab7) cell_fmradio_pane

0xb5be,	// (0x00090918) cell_fmradio_pane_g1_ParamLimits

0xb5be,	// (0x00090918) cell_fmradio_pane_g1

0x098f,	// (0x00085ce9) grid_highlight_pane_cp011

0xb770,	// (0x00090aca) poc_content_pane_ParamLimits

0xb770,	// (0x00090aca) poc_content_pane

0xb783,	// (0x00090add) scroll_pane_cp019

0x5389,	// (0x0008a6e3) popup_call_poc_act_window_ParamLimits

0x5389,	// (0x0008a6e3) popup_call_poc_act_window

0x53a9,	// (0x0008a703) popup_call_poc_inact_window_ParamLimits

0x53a9,	// (0x0008a703) popup_call_poc_inact_window

0xf514,	// (0x0009486e) bg_popup_call_poc_act_pane_g

0xc697,	// (0x000919f1) bg_popup_call_poc_inact_pane_g1

0xc69f,	// (0x000919f9) bg_popup_call_poc_inact_pane_g2

0xb78b,	// (0x00090ae5) popup_call_poc_act_window_g2

0xc6a7,	// (0x00091a01) bg_popup_call_poc_inact_pane_g3

0xc627,	// (0x00091981) bg_popup_call_poc_inact_pane_g4

0xc6af,	// (0x00091a09) bg_popup_call_poc_inact_pane_g5

0xb793,	// (0x00090aed) popup_call_poc_act_window_t1_ParamLimits

0xb793,	// (0x00090aed) popup_call_poc_act_window_t1

0xb7bb,	// (0x00090b15) popup_call_poc_act_window_t2_ParamLimits

0xb7bb,	// (0x00090b15) popup_call_poc_act_window_t2

0xb7e3,	// (0x00090b3d) popup_call_poc_act_window_t3_ParamLimits

0xb7e3,	// (0x00090b3d) popup_call_poc_act_window_t3

0xb80b,	// (0x00090b65) popup_call_poc_act_window_t4_ParamLimits

0xb80b,	// (0x00090b65) popup_call_poc_act_window_t4

0x0003,

0xf47d,	// (0x000947d7) popup_call_poc_act_window_t_ParamLimits

0xf47d,	// (0x000947d7) popup_call_poc_act_window_t

0xc6b7,	// (0x00091a11) bg_popup_call_poc_inact_pane_g6

0xc6bf,	// (0x00091a19) bg_popup_call_poc_inact_pane_g7

0xc6c7,	// (0x00091a21) bg_popup_call_poc_inact_pane_g8

0xb81d,	// (0x00090b77) popup_call_poc_inact_window_g2

0xc6cf,	// (0x00091a29) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf52b,	// (0x00094885) bg_popup_call_poc_inact_pane_g

0xb825,	// (0x00090b7f) popup_call_poc_inact_window_t1_ParamLimits

0xb825,	// (0x00090b7f) popup_call_poc_inact_window_t1

0xb83a,	// (0x00090b94) popup_call_poc_inact_window_t2_ParamLimits

0xb83a,	// (0x00090b94) popup_call_poc_inact_window_t2

0xb84f,	// (0x00090ba9) popup_call_poc_inact_window_t3_ParamLimits

0xb84f,	// (0x00090ba9) popup_call_poc_inact_window_t3

0x0002,

0xf486,	// (0x000947e0) popup_call_poc_inact_window_t_ParamLimits

0xf486,	// (0x000947e0) popup_call_poc_inact_window_t

0xc7e5,	// (0x00091b3f) context_pane_ParamLimits

0x5afc,	// (0x0008ae56) signal_pane_ParamLimits

0x32e3,	// (0x0008863d) main_call2_pane

0xc7be,	// (0x00091b18) popup_phob_thumbnail2_window_ParamLimits

0xc7be,	// (0x00091b18) popup_phob_thumbnail2_window

0xb56e,	// (0x000908c8) aid_hotspot_pointer_arrow_pane

0xb576,	// (0x000908d0) aid_hotspot_pointer_hand_pane

0x56a3,	// (0x0008a9fd) phob_pre_status_pane_g5

0x334c,	// (0x000886a6) cams_zoom_pane_ParamLimits

0x334c,	// (0x000886a6) image_vga_pane_ParamLimits

0x0c64,	// (0x00085fbe) main_camera_pane_g1_ParamLimits

0x0c64,	// (0x00085fbe) main_camera_pane_g2_ParamLimits

0x0c64,	// (0x00085fbe) main_camera_pane_g3_ParamLimits

0x0c64,	// (0x00085fbe) main_camera_pane_g4_ParamLimits

0x0c64,	// (0x00085fbe) main_camera_pane_g5_ParamLimits

0x0c64,	// (0x00085fbe) main_camera_pane_g6_ParamLimits

0x0c64,	// (0x00085fbe) main_camera_pane_g7_ParamLimits

0xf19f,	// (0x000944f9) main_camera_pane_g_ParamLimits

0x335a,	// (0x000886b4) main_camera_pane_t1_ParamLimits

0x335a,	// (0x000886b4) main_camera_pane_t2_ParamLimits

0xf1b0,	// (0x0009450a) main_camera_pane_t_ParamLimits

0x0bea,	// (0x00085f44) bg_popup_preview_window_pane_cp01_ParamLimits

0x0bea,	// (0x00085f44) bg_popup_preview_window_pane_cp01

0xb864,	// (0x00090bbe) popup_phob_thumbnail2_window_g1_ParamLimits

0xb864,	// (0x00090bbe) popup_phob_thumbnail2_window_g1

0x098f,	// (0x00085ce9) call2_cli_visual_pane

0x53d5,	// (0x0008a72f) popup_call2_audio_conf_window_ParamLimits

0x53d5,	// (0x0008a72f) popup_call2_audio_conf_window

0x53f3,	// (0x0008a74d) popup_call2_audio_first_window_ParamLimits

0x53f3,	// (0x0008a74d) popup_call2_audio_first_window

0x5469,	// (0x0008a7c3) popup_call2_audio_in_window_ParamLimits

0x5469,	// (0x0008a7c3) popup_call2_audio_in_window

0x549d,	// (0x0008a7f7) popup_call2_audio_out_window_ParamLimits

0x549d,	// (0x0008a7f7) popup_call2_audio_out_window

0x54ef,	// (0x0008a849) popup_call2_audio_second_window_ParamLimits

0x54ef,	// (0x0008a849) popup_call2_audio_second_window

0x5541,	// (0x0008a89b) popup_call2_audio_wait_window_ParamLimits

0x5541,	// (0x0008a89b) popup_call2_audio_wait_window

0x098f,	// (0x00085ce9) bg_popup_call2_act_pane_cp03

0x0bcc,	// (0x00085f26) list_conf_pane_cp

0xb870,	// (0x00090bca) popup_call2_audio_conf_window_t1

0xb0ff,	// (0x00090459) list_single_graphic_popup_conf2_pane_ParamLimits

0xb0ff,	// (0x00090459) list_single_graphic_popup_conf2_pane

0xb112,	// (0x0009046c) list_highlight_pane_cp04

0xb87e,	// (0x00090bd8) list_single_graphic_popup_conf2_pane_g1

0xb123,	// (0x0009047d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf48d,	// (0x000947e7) list_single_graphic_popup_conf2_pane_g

0xb886,	// (0x00090be0) list_single_graphic_popup_conf2_pane_t1

0xb894,	// (0x00090bee) bg_popup_call2_act_pane_cp01_ParamLimits

0xb894,	// (0x00090bee) bg_popup_call2_act_pane_cp01

0xb91e,	// (0x00090c78) call_type_pane_cp05_ParamLimits

0xb91e,	// (0x00090c78) call_type_pane_cp05

0xb972,	// (0x00090ccc) popup_call2_audio_second_window_g1_ParamLimits

0xb972,	// (0x00090ccc) popup_call2_audio_second_window_g1

0xb9c6,	// (0x00090d20) popup_call2_audio_second_window_g2_ParamLimits

0xb9c6,	// (0x00090d20) popup_call2_audio_second_window_g2

0x0002,

0xf492,	// (0x000947ec) popup_call2_audio_second_window_g_ParamLimits

0xf492,	// (0x000947ec) popup_call2_audio_second_window_g

0xba2b,	// (0x00090d85) popup_call2_audio_second_window_t1_ParamLimits

0xba2b,	// (0x00090d85) popup_call2_audio_second_window_t1

0xbae6,	// (0x00090e40) popup_call2_audio_second_window_t2_ParamLimits

0xbae6,	// (0x00090e40) popup_call2_audio_second_window_t2

0xbb39,	// (0x00090e93) popup_call2_audio_second_window_t3_ParamLimits

0xbb39,	// (0x00090e93) popup_call2_audio_second_window_t3

0x0003,

0xf499,	// (0x000947f3) popup_call2_audio_second_window_t_ParamLimits

0xf499,	// (0x000947f3) popup_call2_audio_second_window_t

0x098f,	// (0x00085ce9) bg_popup_call2_in_pane_cp02

0x0999,	// (0x00085cf3) call_type_pane_cp04

0x5579,	// (0x0008a8d3) popup_call2_audio_wait_window_g1

0x5581,	// (0x0008a8db) popup_call2_audio_wait_window_g2

0x0001,

0xf4a2,	// (0x000947fc) popup_call2_audio_wait_window_g

0x09b1,	// (0x00085d0b) popup_call2_audio_wait_window_t3

0xbc2c,	// (0x00090f86) bg_popup_call2_act_pane_ParamLimits

0xbc2c,	// (0x00090f86) bg_popup_call2_act_pane

0xbcec,	// (0x00091046) call_type_pane_cp03_ParamLimits

0xbcec,	// (0x00091046) call_type_pane_cp03

0xbd50,	// (0x000910aa) popup_call2_audio_first_window_g1_ParamLimits

0xbd50,	// (0x000910aa) popup_call2_audio_first_window_g1

0xbdc0,	// (0x0009111a) popup_call2_audio_first_window_g2_ParamLimits

0xbdc0,	// (0x0009111a) popup_call2_audio_first_window_g2

0xbe24,	// (0x0009117e) popup_call2_audio_first_window_g3_ParamLimits

0xbe24,	// (0x0009117e) popup_call2_audio_first_window_g3

0x0004,

0xf4a7,	// (0x00094801) popup_call2_audio_first_window_g_ParamLimits

0xf4a7,	// (0x00094801) popup_call2_audio_first_window_g

0xbeac,	// (0x00091206) popup_call2_audio_first_window_t1_ParamLimits

0xbeac,	// (0x00091206) popup_call2_audio_first_window_t1

0xbfaf,	// (0x00091309) popup_call2_audio_first_window_t4_ParamLimits

0xbfaf,	// (0x00091309) popup_call2_audio_first_window_t4

0xc092,	// (0x000913ec) popup_call2_audio_first_window_t5_ParamLimits

0xc092,	// (0x000913ec) popup_call2_audio_first_window_t5

0x0003,

0xf4b2,	// (0x0009480c) popup_call2_audio_first_window_t_ParamLimits

0xf4b2,	// (0x0009480c) popup_call2_audio_first_window_t

0x0be2,	// (0x00085f3c) bg_popup_call2_act_pane_g1

0xc6ef,	// (0x00091a49) popup_cale_lunar_info_window_t1

0xc6fd,	// (0x00091a57) popup_cale_lunar_info_window_t2

0xc70b,	// (0x00091a65) popup_cale_lunar_info_window_t3

0x098f,	// (0x00085ce9) bg_popup_call2_bubble_pane

0xc193,	// (0x000914ed) bg_popup_call2_in_pane_cp01_ParamLimits

0xc193,	// (0x000914ed) bg_popup_call2_in_pane_cp01

0x066b,	// (0x000859c5) call_type_pane_cp02

0x5589,	// (0x0008a8e3) popup_call2_audio_out_window_g1_ParamLimits

0x5589,	// (0x0008a8e3) popup_call2_audio_out_window_g1

0xc1db,	// (0x00091535) popup_call2_audio_out_window_g2_ParamLimits

0xc1db,	// (0x00091535) popup_call2_audio_out_window_g2

0x55b5,	// (0x0008a90f) popup_call2_audio_out_window_g3_ParamLimits

0x55b5,	// (0x0008a90f) popup_call2_audio_out_window_g3

0x0003,

0xf4bb,	// (0x00094815) popup_call2_audio_out_window_g_ParamLimits

0xf4bb,	// (0x00094815) popup_call2_audio_out_window_g

0xc212,	// (0x0009156c) popup_call2_audio_out_window_t1_ParamLimits

0xc212,	// (0x0009156c) popup_call2_audio_out_window_t1

0xc271,	// (0x000915cb) popup_call2_audio_out_window_t2_ParamLimits

0xc271,	// (0x000915cb) popup_call2_audio_out_window_t2

0xc2c5,	// (0x0009161f) popup_call2_audio_out_window_t3_ParamLimits

0xc2c5,	// (0x0009161f) popup_call2_audio_out_window_t3

0xc2db,	// (0x00091635) popup_call2_audio_out_window_t4_ParamLimits

0xc2db,	// (0x00091635) popup_call2_audio_out_window_t4

0xc2f1,	// (0x0009164b) popup_call2_audio_out_window_t5_ParamLimits

0xc2f1,	// (0x0009164b) popup_call2_audio_out_window_t5

0x0005,

0xf4c4,	// (0x0009481e) popup_call2_audio_out_window_t_ParamLimits

0xf4c4,	// (0x0009481e) popup_call2_audio_out_window_t

0xc355,	// (0x000916af) bg_popup_call2_in_pane_ParamLimits

0xc355,	// (0x000916af) bg_popup_call2_in_pane

0xc3b1,	// (0x0009170b) popup_call2_audio_in_window_g1_ParamLimits

0xc3b1,	// (0x0009170b) popup_call2_audio_in_window_g1

0xc3e9,	// (0x00091743) popup_call2_audio_in_window_g2_ParamLimits

0xc3e9,	// (0x00091743) popup_call2_audio_in_window_g2

0xc421,	// (0x0009177b) popup_call2_audio_in_window_g3_ParamLimits

0xc421,	// (0x0009177b) popup_call2_audio_in_window_g3

0x0003,

0xf4d1,	// (0x0009482b) popup_call2_audio_in_window_g_ParamLimits

0xf4d1,	// (0x0009482b) popup_call2_audio_in_window_g

0xc479,	// (0x000917d3) popup_call2_audio_in_window_t1_ParamLimits

0xc479,	// (0x000917d3) popup_call2_audio_in_window_t1

0xc4f9,	// (0x00091853) popup_call2_audio_in_window_t2_ParamLimits

0xc4f9,	// (0x00091853) popup_call2_audio_in_window_t2

0xc579,	// (0x000918d3) popup_call2_audio_in_window_t3_ParamLimits

0xc579,	// (0x000918d3) popup_call2_audio_in_window_t3

0xc593,	// (0x000918ed) popup_call2_audio_in_window_t4_ParamLimits

0xc593,	// (0x000918ed) popup_call2_audio_in_window_t4

0xc5a5,	// (0x000918ff) popup_call2_audio_in_window_t5_ParamLimits

0xc5a5,	// (0x000918ff) popup_call2_audio_in_window_t5

0xc5ba,	// (0x00091914) popup_call2_audio_in_window_t6_ParamLimits

0xc5ba,	// (0x00091914) popup_call2_audio_in_window_t6

0x0005,

0xf4da,	// (0x00094834) popup_call2_audio_in_window_t_ParamLimits

0xf4da,	// (0x00094834) popup_call2_audio_in_window_t

0x0be2,	// (0x00085f3c) bg_popup_call2_in_pane_g1

0xc719,	// (0x00091a73) popup_cale_lunar_info_window_t4

0x0003,

0xf555,	// (0x000948af) popup_cale_lunar_info_window_t

0x0bea,	// (0x00085f44) bg_popup_call2_rect_pane_ParamLimits

0x0bea,	// (0x00085f44) bg_popup_call2_rect_pane

0x098f,	// (0x00085ce9) call2_cli_visual_graphic_pane

0x098f,	// (0x00085ce9) call2_cli_visual_text_pane

0xc880,	// (0x00091bda) smil_status_volume_pane_g3

0x0002,

0x0c02,	// (0x00085f5c) call2_cli_visual_graphic_pane_g1

0x0c02,	// (0x00085f5c) call2_cli_visual_graphic_pane_g2

0x0c02,	// (0x00085f5c) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e7,	// (0x00094841) call2_cli_visual_graphic_pane_g

0xc5cf,	// (0x00091929) bg_popup_call2_rect_pane_g1

0x0dd1,	// (0x0008612b) bg_popup_call2_rect_pane_g2

0xc5d7,	// (0x00091931) bg_popup_call2_rect_pane_g3

0xc5df,	// (0x00091939) bg_popup_call2_rect_pane_g4

0xc5e7,	// (0x00091941) bg_popup_call2_rect_pane_g5

0xc5ef,	// (0x00091949) bg_popup_call2_rect_pane_g6

0xc5f7,	// (0x00091951) bg_popup_call2_rect_pane_g7

0xc5ff,	// (0x00091959) bg_popup_call2_rect_pane_g8

0xc607,	// (0x00091961) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ee,	// (0x00094848) bg_popup_call2_rect_pane_g

0xc60f,	// (0x00091969) bg_popup_call2_bubble_pane_g1

0xc617,	// (0x00091971) bg_popup_call2_bubble_pane_g2

0xc61f,	// (0x00091979) bg_popup_call2_bubble_pane_g3

0xc627,	// (0x00091981) bg_popup_call2_bubble_pane_g4

0xc62f,	// (0x00091989) bg_popup_call2_bubble_pane_g5

0xc637,	// (0x00091991) bg_popup_call2_bubble_pane_g6

0xc63f,	// (0x00091999) bg_popup_call2_bubble_pane_g7

0xc647,	// (0x000919a1) bg_popup_call2_bubble_pane_g8

0xc64f,	// (0x000919a9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf501,	// (0x0009485b) bg_popup_call2_bubble_pane_g

0x2cd1,	// (0x0008802b) aid_cale_week_size_cell_pane

0x336e,	// (0x000886c8) aid_cams_cif_uncrop_pane_ParamLimits

0x336e,	// (0x000886c8) aid_cams_cif_uncrop_pane

0x34e8,	// (0x00088842) aid_cams_size_cell_ParamLimits

0x34e8,	// (0x00088842) aid_cams_size_cell

0x34fc,	// (0x00088856) grid_cams_pane_ParamLimits

0x3511,	// (0x0008886b) linegrid_cams_pane_ParamLimits

0x3668,	// (0x000889c2) call_video_pane_t1

0x3682,	// (0x000889dc) call_video_pane_t2

0x0001,

0xf1fc,	// (0x00094556) call_video_pane_t

0x3c79,	// (0x00088fd3) aid_cale_month_size_cell_pane_ParamLimits

0x3c79,	// (0x00088fd3) aid_cale_month_size_cell_pane

0xf599,	// (0x000948f3) smil_status_volume_pane_g

0xc88d,	// (0x00091be7) volume_smil_pane_ParamLimits

0xae5c,	// (0x000901b6) aid_popup2_width_pane

0x2c1f,	// (0x00087f79) cell_qdial_pane_g4_ParamLimits

0x2c1f,	// (0x00087f79) cell_qdial_pane_g4

0x4c77,	// (0x00089fd1) aid_blid_cardinal_pane_ParamLimits

0x4c83,	// (0x00089fdd) aid_blid_destination_pane_ParamLimits

0x4c83,	// (0x00089fdd) aid_blid_destination_pane

0x0bea,	// (0x00085f44) bg_popup_call_poc_act_pane_ParamLimits

0x0bea,	// (0x00085f44) bg_popup_call_poc_act_pane

0x0bea,	// (0x00085f44) bg_popup_call_poc_inact_pane_ParamLimits

0x0bea,	// (0x00085f44) bg_popup_call_poc_inact_pane

0xc657,	// (0x000919b1) bg_popup_call_poc_act_pane_g1

0xc65f,	// (0x000919b9) bg_popup_call_poc_act_pane_g2

0xc667,	// (0x000919c1) bg_popup_call_poc_act_pane_g3

0xc627,	// (0x00091981) bg_popup_call_poc_act_pane_g4

0xc62f,	// (0x00091989) bg_popup_call_poc_act_pane_g5

0xc66f,	// (0x000919c9) bg_popup_call_poc_act_pane_g6

0xc63f,	// (0x00091999) bg_popup_call_poc_act_pane_g7

0xc677,	// (0x000919d1) bg_popup_call_poc_act_pane_g8

0x098f,	// (0x00085ce9) main_usb_pane

0xc79d,	// (0x00091af7) popup_cale_lunar_info_window

0x3925,	// (0x00088c7f) im_reading_pane_t1_ParamLimits

0x395b,	// (0x00088cb5) list_im_pane_ParamLimits

0x396c,	// (0x00088cc6) scroll_pane_cp07_ParamLimits

0x098f,	// (0x00085ce9) grid_highlight_pane_cp012

0x0bea,	// (0x00085f44) mup_scale_pane_ParamLimits

0xb5be,	// (0x00090918) main_usb_pane_g1_ParamLimits

0xb5be,	// (0x00090918) main_usb_pane_g1

0x5603,	// (0x0008a95d) main_usb_pane_g2_ParamLimits

0x5603,	// (0x0008a95d) main_usb_pane_g2

0x0001,

0xf53e,	// (0x00094898) main_usb_pane_g_ParamLimits

0xf53e,	// (0x00094898) main_usb_pane_g

0x5617,	// (0x0008a971) main_usb_pane_t1_ParamLimits

0x5617,	// (0x0008a971) main_usb_pane_t1

0x5629,	// (0x0008a983) main_usb_pane_t2_ParamLimits

0x5629,	// (0x0008a983) main_usb_pane_t2

0x563b,	// (0x0008a995) main_usb_pane_t3_ParamLimits

0x563b,	// (0x0008a995) main_usb_pane_t3

0x564d,	// (0x0008a9a7) main_usb_pane_t4_ParamLimits

0x564d,	// (0x0008a9a7) main_usb_pane_t4

0x565f,	// (0x0008a9b9) main_usb_pane_t5_ParamLimits

0x565f,	// (0x0008a9b9) main_usb_pane_t5

0x5671,	// (0x0008a9cb) main_usb_pane_t6_ParamLimits

0x5671,	// (0x0008a9cb) main_usb_pane_t6

0x0005,

0xf543,	// (0x0009489d) main_usb_pane_t_ParamLimits

0xb244,	// (0x0009059e) aid_text_placing

0x4c23,	// (0x00089f7d) main_location2_pane_t1_ParamLimits

0x4c39,	// (0x00089f93) main_location2_pane_t2_ParamLimits

0x4c4f,	// (0x00089fa9) main_location2_pane_t3_ParamLimits

0x4c65,	// (0x00089fbf) main_location2_pane_t4_ParamLimits

0x4c65,	// (0x00089fbf) main_location2_pane_t4

0xf34a,	// (0x000946a4) main_location2_pane_t_ParamLimits

0x0c25,	// (0x00085f7f) find_pinb_pane_g2_ParamLimits

0x0c25,	// (0x00085f7f) find_pinb_pane_g2

0x0001,

0xf0b4,	// (0x0009440e) find_pinb_pane_g_ParamLimits

0xf0b4,	// (0x0009440e) find_pinb_pane_g

0x0c31,	// (0x00085f8b) find_pinb_pane_t1_ParamLimits

0x0c43,	// (0x00085f9d) find_pinb_pane_t2_ParamLimits

0xf0b9,	// (0x00094413) find_pinb_pane_t_ParamLimits

0x098f,	// (0x00085ce9) main_call3_pane

0x40b3,	// (0x0008940d) cale_month_day_heading_pane_t1_ParamLimits

0x4139,	// (0x00089493) cale_month_day_heading_pane_t2_ParamLimits

0x41ca,	// (0x00089524) cale_month_day_heading_pane_t3_ParamLimits

0x425b,	// (0x000895b5) cale_month_day_heading_pane_t4_ParamLimits

0x42ec,	// (0x00089646) cale_month_day_heading_pane_t5_ParamLimits

0x437d,	// (0x000896d7) cale_month_day_heading_pane_t6_ParamLimits

0x440e,	// (0x00089768) cale_month_day_heading_pane_t7_ParamLimits

0xf234,	// (0x0009458e) cale_month_day_heading_pane_t_ParamLimits

0x4674,	// (0x000899ce) smil_status_volume_pane

0x5124,	// (0x0008a47e) postcard_address_pane_ParamLimits

0x5124,	// (0x0008a47e) postcard_address_pane

0x5136,	// (0x0008a490) postcard_message_pane_ParamLimits

0x5136,	// (0x0008a490) postcard_message_pane

0x55e1,	// (0x0008a93b) call2_cli_visual_pane_t1_ParamLimits

0x55e1,	// (0x0008a93b) call2_cli_visual_pane_t1

0xc8ba,	// (0x00091c14) postcard_message_pane_t1_ParamLimits

0xc8ba,	// (0x00091c14) postcard_message_pane_t1

0xc8a2,	// (0x00091bfc) postcard_address_pane_t1_ParamLimits

0xc8a2,	// (0x00091bfc) postcard_address_pane_t1

0x5ca8,	// (0x0008b002) popup_call3_audio_in_window_ParamLimits

0x5ca8,	// (0x0008b002) popup_call3_audio_in_window

0x5b37,	// (0x0008ae91) bg_popup_call3_in_pane_ParamLimits

0x5b37,	// (0x0008ae91) bg_popup_call3_in_pane

0x5ba9,	// (0x0008af03) popup_call3_audio_in_window_g1_ParamLimits

0x5ba9,	// (0x0008af03) popup_call3_audio_in_window_g1

0x5bc9,	// (0x0008af23) popup_call3_audio_in_window_g2_ParamLimits

0x5bc9,	// (0x0008af23) popup_call3_audio_in_window_g2

0x5be9,	// (0x0008af43) popup_call3_audio_in_window_g3_ParamLimits

0x5be9,	// (0x0008af43) popup_call3_audio_in_window_g3

0x0003,

0xf5a0,	// (0x000948fa) popup_call3_audio_in_window_g_ParamLimits

0xf5a0,	// (0x000948fa) popup_call3_audio_in_window_g

0x5c1a,	// (0x0008af74) popup_call3_audio_in_window_t1_ParamLimits

0x5c1a,	// (0x0008af74) popup_call3_audio_in_window_t1

0x5c58,	// (0x0008afb2) popup_call3_audio_in_window_t2_ParamLimits

0x5c58,	// (0x0008afb2) popup_call3_audio_in_window_t2

0x5c96,	// (0x0008aff0) popup_call3_audio_in_window_t3_ParamLimits

0x5c96,	// (0x0008aff0) popup_call3_audio_in_window_t3

0x0002,

0xf5a9,	// (0x00094903) popup_call3_audio_in_window_t_ParamLimits

0xf5a9,	// (0x00094903) popup_call3_audio_in_window_t

0x32e3,	// (0x0008863d) bg_popup_call3_rect_pane

0xc5cf,	// (0x00091929) bg_popup_call3_rect_pane_g1

0x0dd1,	// (0x0008612b) bg_popup_call3_rect_pane_g2

0xc5d7,	// (0x00091931) bg_popup_call3_rect_pane_g3

0xc5df,	// (0x00091939) bg_popup_call3_rect_pane_g4

0xc5e7,	// (0x00091941) bg_popup_call3_rect_pane_g5

0xc5ef,	// (0x00091949) bg_popup_call3_rect_pane_g6

0xc5f7,	// (0x00091951) bg_popup_call3_rect_pane_g7

0x0574,	// (0x000858ce) mup_visualizer_osc_pane

0x0574,	// (0x000858ce) mup_visualizer_spec_pane

0x5b67,	// (0x0008aec1) call3_video_qcif_pane_ParamLimits

0x5b67,	// (0x0008aec1) call3_video_qcif_pane

0x5b78,	// (0x0008aed2) call3_video_qcif_uncrop_pane_ParamLimits

0x5b78,	// (0x0008aed2) call3_video_qcif_uncrop_pane

0x5b84,	// (0x0008aede) call3_video_subqcif_pane_ParamLimits

0x5b84,	// (0x0008aede) call3_video_subqcif_pane

0x5b98,	// (0x0008aef2) call3_video_subqcif_uncrop_pane_ParamLimits

0x5b98,	// (0x0008aef2) call3_video_subqcif_uncrop_pane

0x5c09,	// (0x0008af63) popup_call3_audio_in_window_g4_ParamLimits

0x5c09,	// (0x0008af63) popup_call3_audio_in_window_g4

0x0574,	// (0x000858ce) mup_spec_half_pane

0x0574,	// (0x000858ce) mup_spec_half_pane_cp

0x0574,	// (0x000858ce) mup_osc_middle_pane

0x34de,	// (0x00088838) mup_visualizer_osc_pane_g1

0xc833,	// (0x00091b8d) mup_spec_bar_pane_ParamLimits

0xc833,	// (0x00091b8d) mup_spec_bar_pane

0x34de,	// (0x00088838) mup_spec_bar_pane_g1

0x34de,	// (0x00088838) mup_spec_bar_pane_g2

0x0001,

0xf3c4,	// (0x0009471e) mup_spec_bar_pane_g

0x2cd1,	// (0x0008802b) aid_cale_week_size_cell_pane_ParamLimits

0x2ceb,	// (0x00088045) bg_cale_heading_pane_ParamLimits

0x0e0f,	// (0x00086169) bg_cale_pane_cp01_ParamLimits

0x2d03,	// (0x0008805d) cale_week_corner_pane_ParamLimits

0x2d22,	// (0x0008807c) cale_week_day_heading_pane_ParamLimits

0x2d3f,	// (0x00088099) cale_week_scroll_pane_g1_ParamLimits

0x2d52,	// (0x000880ac) cale_week_scroll_pane_g2_ParamLimits

0x2d6a,	// (0x000880c4) cale_week_scroll_pane_g3_ParamLimits

0x2d82,	// (0x000880dc) cale_week_scroll_pane_g4_ParamLimits

0x2d9a,	// (0x000880f4) cale_week_scroll_pane_g5_ParamLimits

0x2db2,	// (0x0008810c) cale_week_scroll_pane_g6_ParamLimits

0x2dca,	// (0x00088124) cale_week_scroll_pane_g7_ParamLimits

0x2de2,	// (0x0008813c) cale_week_scroll_pane_g8_ParamLimits

0x2dfe,	// (0x00088158) cale_week_scroll_pane_g9_ParamLimits

0x2e16,	// (0x00088170) cale_week_scroll_pane_g10_ParamLimits

0x2e2e,	// (0x00088188) cale_week_scroll_pane_g11_ParamLimits

0x2e46,	// (0x000881a0) cale_week_scroll_pane_g12_ParamLimits

0x2e5e,	// (0x000881b8) cale_week_scroll_pane_g13_ParamLimits

0x2e76,	// (0x000881d0) cale_week_scroll_pane_g14_ParamLimits

0x2e8e,	// (0x000881e8) cale_week_scroll_pane_g15_ParamLimits

0xf145,	// (0x0009449f) cale_week_scroll_pane_g_ParamLimits

0x2ec2,	// (0x0008821c) cale_week_time_pane_ParamLimits

0x2ede,	// (0x00088238) grid_cale_week_pane_ParamLimits

0x0e2c,	// (0x00086186) listscroll_cale_week_pane_t1

0x0e3e,	// (0x00086198) scroll_pane_cp08_ParamLimits

0x3cfb,	// (0x00089055) cale_month_corner_pane_ParamLimits

0x4057,	// (0x000893b1) cale_month_pane_t1

0x4069,	// (0x000893c3) cale_month_week_pane_ParamLimits

0x4a94,	// (0x00089dee) popup_call_status_window_g1_ParamLimits

0x4aa8,	// (0x00089e02) popup_call_status_window_g2_ParamLimits

0x4abc,	// (0x00089e16) popup_call_status_window_g3_ParamLimits

0xf2d1,	// (0x0009462b) popup_call_status_window_g_ParamLimits

0xb030,	// (0x0009038a) aid_call2_pane

0x4f8f,	// (0x0008a2e9) msg_header_pane_g1

0x5124,	// (0x0008a47e) postcard_address2_pane_ParamLimits

0x5124,	// (0x0008a47e) postcard_address2_pane

0x5136,	// (0x0008a490) postcard_message2_pane_ParamLimits

0x5136,	// (0x0008a490) postcard_message2_pane

0x5b0a,	// (0x0008ae64) message2_row_pane_ParamLimits

0x5b0a,	// (0x0008ae64) message2_row_pane

0x5b24,	// (0x0008ae7e) address2_row_pane_ParamLimits

0x5b24,	// (0x0008ae7e) address2_row_pane

0xc800,	// (0x00091b5a) postcard_message2_row_pane_g1

0xc808,	// (0x00091b62) postcard_message2_row_pane_t1

0xc800,	// (0x00091b5a) address2_row_pane_g1

0xc808,	// (0x00091b62) address2_row_pane_t1

0x32db,	// (0x00088635) aid_size_cell_vorec

0x098f,	// (0x00085ce9) main_rss_pane

0xc816,	// (0x00091b70) rss_list_single_pane_ParamLimits

0xc816,	// (0x00091b70) rss_list_single_pane

0xc824,	// (0x00091b7e) rss_list_single_pane_t1

0xc824,	// (0x00091b7e) rss_list_single_pane_t2

0x0001,

0xf594,	// (0x000948ee) rss_list_single_pane_t

0x098f,	// (0x00085ce9) main_camera2_pane

0x098f,	// (0x00085ce9) main_video2_pane

0xeb49,	// (0x00093ea3) cams_zoom_pane_cp2_ParamLimits

0xeb49,	// (0x00093ea3) cams_zoom_pane_cp2

0xeb49,	// (0x00093ea3) image2_vga_pane_ParamLimits

0xeb49,	// (0x00093ea3) image2_vga_pane

0xeb57,	// (0x00093eb1) main_camera2_pane_g1_ParamLimits

0xeb57,	// (0x00093eb1) main_camera2_pane_g1

0xeb57,	// (0x00093eb1) main_camera2_pane_g2_ParamLimits

0xeb57,	// (0x00093eb1) main_camera2_pane_g2

0xeb57,	// (0x00093eb1) main_camera2_pane_g3_ParamLimits

0xeb57,	// (0x00093eb1) main_camera2_pane_g3

0xeb57,	// (0x00093eb1) main_camera2_pane_g4_ParamLimits

0xeb57,	// (0x00093eb1) main_camera2_pane_g4

0xeb57,	// (0x00093eb1) main_camera2_pane_g5_ParamLimits

0xeb57,	// (0x00093eb1) main_camera2_pane_g5

0xeb57,	// (0x00093eb1) main_camera2_pane_g6_ParamLimits

0xeb57,	// (0x00093eb1) main_camera2_pane_g6

0xeb57,	// (0x00093eb1) main_camera2_pane_g7_ParamLimits

0xeb57,	// (0x00093eb1) main_camera2_pane_g7

0xeb57,	// (0x00093eb1) main_camera2_pane_g8_ParamLimits

0xeb57,	// (0x00093eb1) main_camera2_pane_g8

0x0008,

0xf5b0,	// (0x0009490a) main_camera2_pane_g_ParamLimits

0xf5b0,	// (0x0009490a) main_camera2_pane_g

0x5cc8,	// (0x0008b022) main_camera2_pane_t1_ParamLimits

0x5cc8,	// (0x0008b022) main_camera2_pane_t1

0x5cc8,	// (0x0008b022) main_camera2_pane_t2_ParamLimits

0x5cc8,	// (0x0008b022) main_camera2_pane_t2

0x5cc8,	// (0x0008b022) main_camera2_pane_t3_ParamLimits

0x5cc8,	// (0x0008b022) main_camera2_pane_t3

0x5cc8,	// (0x0008b022) main_camera2_pane_t4_ParamLimits

0x5cc8,	// (0x0008b022) main_camera2_pane_t4

0x0006,

0xf5c3,	// (0x0009491d) main_camera2_pane_t_ParamLimits

0xf5c3,	// (0x0009491d) main_camera2_pane_t

0xeb65,	// (0x00093ebf) cams_zoom_pane_cp4_ParamLimits

0xeb65,	// (0x00093ebf) cams_zoom_pane_cp4

0x5cdc,	// (0x0008b036) image2_cif_pane_ParamLimits

0x5cdc,	// (0x0008b036) image2_cif_pane

0xaea5,	// (0x000901ff) image2_subqcif_pane_ParamLimits

0xaea5,	// (0x000901ff) image2_subqcif_pane

0x5cea,	// (0x0008b044) main_video2_pane_g1_ParamLimits

0x5cea,	// (0x0008b044) main_video2_pane_g1

0x5cea,	// (0x0008b044) main_video2_pane_g2_ParamLimits

0x5cea,	// (0x0008b044) main_video2_pane_g2

0x5cea,	// (0x0008b044) main_video2_pane_g3_ParamLimits

0x5cea,	// (0x0008b044) main_video2_pane_g3

0x5cea,	// (0x0008b044) main_video2_pane_g4_ParamLimits

0x5cea,	// (0x0008b044) main_video2_pane_g4

0x5cea,	// (0x0008b044) main_video2_pane_g5_ParamLimits

0x5cea,	// (0x0008b044) main_video2_pane_g5

0x5cea,	// (0x0008b044) main_video2_pane_g6_ParamLimits

0x5cea,	// (0x0008b044) main_video2_pane_g6

0x0005,

0xf5d2,	// (0x0009492c) main_video2_pane_g_ParamLimits

0xf5d2,	// (0x0009492c) main_video2_pane_g

0x5cf8,	// (0x0008b052) main_video2_pane_t1_ParamLimits

0x5cf8,	// (0x0008b052) main_video2_pane_t1

0x5cf8,	// (0x0008b052) main_video2_pane_t2_ParamLimits

0x5cf8,	// (0x0008b052) main_video2_pane_t2

0x5cf8,	// (0x0008b052) main_video2_pane_t3_ParamLimits

0x5cf8,	// (0x0008b052) main_video2_pane_t3

0x0002,

0xf5df,	// (0x00094939) main_video2_pane_t_ParamLimits

0xf5df,	// (0x00094939) main_video2_pane_t

0x56fd,	// (0x0008aa57) call_muted_g2

0x0001,

0xf586,	// (0x000948e0) call_muted_g

0x098f,	// (0x00085ce9) main_mup2_pane

0xeb27,	// (0x00093e81) main_mup2_pane_g1_ParamLimits

0xeb27,	// (0x00093e81) main_mup2_pane_g1

0xeb27,	// (0x00093e81) main_mup2_pane_g2_ParamLimits

0xeb27,	// (0x00093e81) main_mup2_pane_g2

0x0eb5,	// (0x0008620f) main_mup_pane_g13_cp1

0xaeb3,	// (0x0009020d) mup_volume_pane_cp1

0xeb27,	// (0x00093e81) main_mup2_pane_g4_ParamLimits

0xeb27,	// (0x00093e81) main_mup2_pane_g4

0xeb27,	// (0x00093e81) main_mup2_pane_g5_ParamLimits

0xeb27,	// (0x00093e81) main_mup2_pane_g5

0xeb27,	// (0x00093e81) main_mup2_pane_g6_ParamLimits

0xeb27,	// (0x00093e81) main_mup2_pane_g6

0xeb27,	// (0x00093e81) main_mup2_pane_g7_ParamLimits

0xeb27,	// (0x00093e81) main_mup2_pane_g7

0x0006,

0xf5e6,	// (0x00094940) main_mup2_pane_g_ParamLimits

0xf5e6,	// (0x00094940) main_mup2_pane_g

0xeb35,	// (0x00093e8f) main_mup2_pane_t1_ParamLimits

0xeb35,	// (0x00093e8f) main_mup2_pane_t1

0xeb35,	// (0x00093e8f) main_mup2_pane_t2_ParamLimits

0xeb35,	// (0x00093e8f) main_mup2_pane_t2

0xeb35,	// (0x00093e8f) main_mup2_pane_t3_ParamLimits

0xeb35,	// (0x00093e8f) main_mup2_pane_t3

0xeb35,	// (0x00093e8f) main_mup2_pane_t4_ParamLimits

0xeb35,	// (0x00093e8f) main_mup2_pane_t4

0xeb35,	// (0x00093e8f) main_mup2_pane_t5_ParamLimits

0xeb35,	// (0x00093e8f) main_mup2_pane_t5

0xeb35,	// (0x00093e8f) main_mup2_pane_t6_ParamLimits

0xeb35,	// (0x00093e8f) main_mup2_pane_t6

0x0005,

0xf5f5,	// (0x0009494f) main_mup2_pane_t_ParamLimits

0xf5f5,	// (0x0009494f) main_mup2_pane_t

0xb487,	// (0x000907e1) mup2_visualizer_pane_ParamLimits

0xb487,	// (0x000907e1) mup2_visualizer_pane

0xb487,	// (0x000907e1) mup_progress_pane_cp_ParamLimits

0xb487,	// (0x000907e1) mup_progress_pane_cp

0xc9d7,	// (0x00091d31) mup_volume_pane_cp_ParamLimits

0xc9d7,	// (0x00091d31) mup_volume_pane_cp

0x0c64,	// (0x00085fbe) mup2_visualizer_pane_g1_ParamLimits

0x0c64,	// (0x00085fbe) mup2_visualizer_pane_g1

0x0c72,	// (0x00085fcc) mup2_visualizer_pane_g2_ParamLimits

0x0c72,	// (0x00085fcc) mup2_visualizer_pane_g2

0x0c72,	// (0x00085fcc) mup2_visualizer_pane_g3_ParamLimits

0x0c72,	// (0x00085fcc) mup2_visualizer_pane_g3

0x0002,

0xf0be,	// (0x00094418) mup2_visualizer_pane_g_ParamLimits

0xf0be,	// (0x00094418) mup2_visualizer_pane_g

0x0ead,	// (0x00086207) aid_size_cell_fmradio

0x5859,	// (0x0008abb3) aid_height_parent_landcape

0x3a24,	// (0x00088d7e) wml_content_pane_cp

0x3a2c,	// (0x00088d86) wml_tabs_pane

0x3a35,	// (0x00088d8f) popup_wml_miniature_window

0x3a3d,	// (0x00088d97) scroll_pane_cp021

0x3a51,	// (0x00088dab) wml_content_pane_comp8

0x098f,	// (0x00085ce9) bg_popup_sub_pane_cp05

0xc922,	// (0x00091c7c) popup_wml_miniature_window_g1

0xc92a,	// (0x00091c84) wml_miniature_view_pane

0x5d0c,	// (0x0008b066) aid_size_wml_view

0x5d14,	// (0x0008b06e) wml_miniature_view_pane_g1

0x5d1d,	// (0x0008b077) wml_miniature_view_pane_g2

0x5d26,	// (0x0008b080) wml_miniature_view_pane_g3

0x5d2e,	// (0x0008b088) wml_miniature_view_pane_g4

0x5d36,	// (0x0008b090) wml_miniature_view_pane_g5

0x5d3e,	// (0x0008b098) wml_miniature_view_pane_g6

0x5d46,	// (0x0008b0a0) wml_miniature_view_pane_g7

0x5d4e,	// (0x0008b0a8) wml_miniature_view_pane_g8

0x0007,

0xf602,	// (0x0009495c) wml_miniature_view_pane_g

0xc932,	// (0x00091c8c) background_graphic_ParamLimits

0xc932,	// (0x00091c8c) background_graphic

0xc93e,	// (0x00091c98) wml_tabs_2_pane

0xc947,	// (0x00091ca1) wml_tabs_3_pane_ParamLimits

0xc947,	// (0x00091ca1) wml_tabs_3_pane

0xc959,	// (0x00091cb3) wml_tabs_4_pane_ParamLimits

0xc959,	// (0x00091cb3) wml_tabs_4_pane

0xc96f,	// (0x00091cc9) wml_tabs_5_pane_ParamLimits

0xc96f,	// (0x00091cc9) wml_tabs_5_pane

0xc989,	// (0x00091ce3) wml_tabs_pane_g2_ParamLimits

0xc989,	// (0x00091ce3) wml_tabs_pane_g2

0xc99e,	// (0x00091cf8) wml_tabs_pane_g3_ParamLimits

0xc99e,	// (0x00091cf8) wml_tabs_pane_g3

0xc9b3,	// (0x00091d0d) wml_tabs_2_active_pane_ParamLimits

0xc9b3,	// (0x00091d0d) wml_tabs_2_active_pane

0xc9b3,	// (0x00091d0d) wml_tabs_2_passive_pane_ParamLimits

0xc9b3,	// (0x00091d0d) wml_tabs_2_passive_pane

0x5d56,	// (0x0008b0b0) wml_tabs_3_active_pane_cp_ParamLimits

0x5d56,	// (0x0008b0b0) wml_tabs_3_active_pane_cp

0x5d67,	// (0x0008b0c1) wml_tabs_3_passive_pane_ParamLimits

0x5d67,	// (0x0008b0c1) wml_tabs_3_passive_pane

0x5d78,	// (0x0008b0d2) wml_tabs_3_passive_pane_cp_ParamLimits

0x5d78,	// (0x0008b0d2) wml_tabs_3_passive_pane_cp

0x5d89,	// (0x0008b0e3) tabs_4_active_pane

0x5d91,	// (0x0008b0eb) tabs_4_passive_pane

0x5d99,	// (0x0008b0f3) tabs_4_passive_pane_cp

0x5da1,	// (0x0008b0fb) tabs_4_passive_pane_cp2

0x55fb,	// (0x0008a955) aid_height_text

0xb487,	// (0x000907e1) mup_volume_cont_pane_ParamLimits

0xb487,	// (0x000907e1) mup_volume_cont_pane

0x29c9,	// (0x00087d23) aid_size_cell_pinb

0x0574,	// (0x000858ce) aid_size_list_pinb

0xb487,	// (0x000907e1) mup2_volume_cont_pane_ParamLimits

0xb487,	// (0x000907e1) mup2_volume_cont_pane

0xc9c1,	// (0x00091d1b) mup2_volume_cont_pane_g1_ParamLimits

0xc9c1,	// (0x00091d1b) mup2_volume_cont_pane_g1

0x2784,	// (0x00087ade) aid_size_cell_touch_ParamLimits

0x2784,	// (0x00087ade) aid_size_cell_touch

0x2929,	// (0x00087c83) touch_pane_ParamLimits

0x2929,	// (0x00087c83) touch_pane

0xaeb3,	// (0x0009020d) main_rss2_pane

0xc9f6,	// (0x00091d50) listscroll_rss2_pane

0xc9ff,	// (0x00091d59) rss2_navigation_pane

0xca07,	// (0x00091d61) list_rss2_pane

0xb0ca,	// (0x00090424) scroll_pane_cp22

0xca0f,	// (0x00091d69) rss2_navigation_pane_g1

0xca18,	// (0x00091d72) rss2_navigation_pane_g2

0xca20,	// (0x00091d7a) rss2_navigation_pane_g3

0x0002,

0xf613,	// (0x0009496d) rss2_navigation_pane_g

0xca28,	// (0x00091d82) rss2_navigation_pane_t1

0x5da9,	// (0x0008b103) rss2_list_single_pane_ParamLimits

0x5da9,	// (0x0008b103) rss2_list_single_pane

0xca36,	// (0x00091d90) rss2_list_single_pane_t2

0xca44,	// (0x00091d9e) rss2_list_single_pane_t3_ParamLimits

0xca44,	// (0x00091d9e) rss2_list_single_pane_t3

0xca61,	// (0x00091dbb) rss2_list_single_pane_t4

0x465e,	// (0x000899b8) smil_status_pane_g1

0xaea5,	// (0x000901ff) main_image2_pane_ParamLimits

0xaea5,	// (0x000901ff) main_image2_pane

0xeb57,	// (0x00093eb1) main_camera2_pane_g9_ParamLimits

0xeb57,	// (0x00093eb1) main_camera2_pane_g9

0x5cc8,	// (0x0008b022) main_camera2_pane_t5_ParamLimits

0x5cc8,	// (0x0008b022) main_camera2_pane_t5

0xc8d6,	// (0x00091c30) main_camera2_pane_t6_ParamLimits

0xc8d6,	// (0x00091c30) main_camera2_pane_t6

0x5dbd,	// (0x0008b117) main_image2_pane_g1_ParamLimits

0x5dbd,	// (0x0008b117) main_image2_pane_g1

0x534b,	// (0x0008a6a5) smil2_video_pane_ParamLimits

0x534b,	// (0x0008a6a5) smil2_video_pane

0xae74,	// (0x000901ce) aid_zoom_text_primary_cp

0xae9d,	// (0x000901f7) popup_preview_fixed_window

0x391d,	// (0x00088c77) im_reading_pane_g1

0x5cba,	// (0x0008b014) cams2_bc_adjust_pane_cp_ParamLimits

0x5cba,	// (0x0008b014) cams2_bc_adjust_pane_cp

0xc8fe,	// (0x00091c58) cams2_bc_adjust_pane_ParamLimits

0xc8fe,	// (0x00091c58) cams2_bc_adjust_pane

0x0eb5,	// (0x0008620f) cams2_bc_adjust_pane_g1

0xaeb3,	// (0x0009020d) cams2_slider_pane

0x0eb5,	// (0x0008620f) cams2_slider_pane_g1

0x0eb5,	// (0x0008620f) cams2_slider_pane_g2

0x0006,

0xf61a,	// (0x00094974) cams2_slider_pane_g

0x2a12,	// (0x00087d6c) calc_display_pane_ParamLimits

0x2a2e,	// (0x00087d88) calc_paper_pane_ParamLimits

0x2a4f,	// (0x00087da9) grid_calc_pane_ParamLimits

0xb092,	// (0x000903ec) popup_clock_digital_window_t1_ParamLimits

0xb6a4,	// (0x000909fe) main_image_pane_t1

0x29f4,	// (0x00087d4e) aid_size_cell_calc_ParamLimits

0x29f4,	// (0x00087d4e) aid_size_cell_calc

0x5899,	// (0x0008abf3) popup_blid_sat_info2_window_ParamLimits

0x5899,	// (0x0008abf3) popup_blid_sat_info2_window

0xca6f,	// (0x00091dc9) aid_size_cell_blid

0xca77,	// (0x00091dd1) bg_popup_window_pane_cp07

0xca9a,	// (0x00091df4) grid_popup_blid_pane

0xcaa2,	// (0x00091dfc) heading_pane_cp05_ParamLimits

0xcaa2,	// (0x00091dfc) heading_pane_cp05

0x0f23,	// (0x0008627d) cell_popup_blid_pane_ParamLimits

0x0f23,	// (0x0008627d) cell_popup_blid_pane

0x0f43,	// (0x0008629d) cell_popup_blid_pane_g1

0x0f4b,	// (0x000862a5) cell_popup_blid_pane_t1

0xb487,	// (0x000907e1) mup2_indicator_pane_ParamLimits

0xb487,	// (0x000907e1) mup2_indicator_pane

0x0574,	// (0x000858ce) mup2_visualizer_osc_pane

0xc90c,	// (0x00091c66) mup2_visualizer_spec_pane_ParamLimits

0xc90c,	// (0x00091c66) mup2_visualizer_spec_pane

0x0574,	// (0x000858ce) mup2_spec_half_pane

0x0574,	// (0x000858ce) mup2_spec_half_pane_cp

0x0f59,	// (0x000862b3) mup2_spec_bar_pane_ParamLimits

0x0f59,	// (0x000862b3) mup2_spec_bar_pane

0x34de,	// (0x00088838) mup2_spec_bar_pane_g1

0x0f78,	// (0x000862d2) mup2_spec_bar_pane_g2

0x0001,

0xf640,	// (0x0009499a) mup2_spec_bar_pane_g

0x0574,	// (0x000858ce) mup2_osc_middle_pane

0x34de,	// (0x00088838) mup2_visualizer_osc_pane_g1

0x059e,	// (0x000858f8) popup_number_entry_window_t1_ParamLimits

0x05b1,	// (0x0008590b) popup_number_entry_window_t2_ParamLimits

0x05c3,	// (0x0008591d) popup_number_entry_window_t3_ParamLimits

0x2971,	// (0x00087ccb) popup_number_entry_window_t5_ParamLimits

0x2971,	// (0x00087ccb) popup_number_entry_window_t5

0xf05f,	// (0x000943b9) popup_number_entry_window_t_ParamLimits

0x05d5,	// (0x0008592f) text_title_cp2_ParamLimits

0xb57e,	// (0x000908d8) aid_hotspot_pointer_text2_pane

0xb5a4,	// (0x000908fe) main_viewer_pane_g9_ParamLimits

0xb5a4,	// (0x000908fe) main_viewer_pane_g9

0x4057,	// (0x000893b1) cale_month_pane_t1_ParamLimits

0x46ce,	// (0x00089a28) bg_cale_pane_ParamLimits

0x46e6,	// (0x00089a40) list_cale_pane_ParamLimits

0x46f7,	// (0x00089a51) listscroll_cale_day_pane_t1

0x4709,	// (0x00089a63) scroll_pane_cp09_ParamLimits

0x4d93,	// (0x0008a0ed) main_mup_eq_pane_t1_ParamLimits

0x4d93,	// (0x0008a0ed) main_mup_eq_pane_t1

0x4dab,	// (0x0008a105) main_mup_eq_pane_t2_ParamLimits

0x4dab,	// (0x0008a105) main_mup_eq_pane_t2

0x4dc1,	// (0x0008a11b) main_mup_eq_pane_t3_ParamLimits

0x4dc1,	// (0x0008a11b) main_mup_eq_pane_t3

0x4dd7,	// (0x0008a131) main_mup_eq_pane_t4_ParamLimits

0x4dd7,	// (0x0008a131) main_mup_eq_pane_t4

0x4ded,	// (0x0008a147) main_mup_eq_pane_t5_ParamLimits

0x4ded,	// (0x0008a147) main_mup_eq_pane_t5

0x4e03,	// (0x0008a15d) main_mup_eq_pane_t6_ParamLimits

0x4e03,	// (0x0008a15d) main_mup_eq_pane_t6

0x4e15,	// (0x0008a16f) main_mup_eq_pane_t7_ParamLimits

0x4e15,	// (0x0008a16f) main_mup_eq_pane_t7

0x4e27,	// (0x0008a181) main_mup_eq_pane_t8_ParamLimits

0x4e27,	// (0x0008a181) main_mup_eq_pane_t8

0x4e39,	// (0x0008a193) main_mup_eq_pane_t9_ParamLimits

0x4e39,	// (0x0008a193) main_mup_eq_pane_t9

0x4e4f,	// (0x0008a1a9) main_mup_eq_pane_t10_ParamLimits

0x4e4f,	// (0x0008a1a9) main_mup_eq_pane_t10

0x0009,

0xf3d0,	// (0x0009472a) main_mup_eq_pane_t_ParamLimits

0xf3d0,	// (0x0009472a) main_mup_eq_pane_t

0x4ee2,	// (0x0008a23c) mup_equalizer_pane_cp5_ParamLimits

0x4ef4,	// (0x0008a24e) mup_equalizer_pane_cp6_ParamLimits

0x4f06,	// (0x0008a260) mup_equalizer_pane_cp7_ParamLimits

0xaeb3,	// (0x0009020d) main_gallery_pane

0xc852,	// (0x00091bac) smil2_volume_pane

0xc85a,	// (0x00091bb4) smil_status_volume_pane_g1_ParamLimits

0xc86d,	// (0x00091bc7) smil_status_volume_pane_g2_ParamLimits

0xc880,	// (0x00091bda) smil_status_volume_pane_g3_ParamLimits

0xf599,	// (0x000948f3) smil_status_volume_pane_g_ParamLimits

0xca77,	// (0x00091dd1) bg_popup_window_pane_cp07_ParamLimits

0xca85,	// (0x00091ddf) blid_firmament_pane

0x334c,	// (0x000886a6) aid_size_cell_gallery_ParamLimits

0x334c,	// (0x000886a6) aid_size_cell_gallery

0x5dd1,	// (0x0008b12b) grid_gallery_pane_ParamLimits

0x5dd1,	// (0x0008b12b) grid_gallery_pane

0x5de7,	// (0x0008b141) cell_gallery_pane_ParamLimits

0x5de7,	// (0x0008b141) cell_gallery_pane

0x334c,	// (0x000886a6) bg_cell_gallery_focus_pane_ParamLimits

0x334c,	// (0x000886a6) bg_cell_gallery_focus_pane

0x0c64,	// (0x00085fbe) cell_gallery_pane_g1_ParamLimits

0x0c64,	// (0x00085fbe) cell_gallery_pane_g1

0x0c64,	// (0x00085fbe) cell_gallery_pane_g2_ParamLimits

0x0c64,	// (0x00085fbe) cell_gallery_pane_g2

0x0c64,	// (0x00085fbe) cell_gallery_pane_g3_ParamLimits

0x0c64,	// (0x00085fbe) cell_gallery_pane_g3

0x0c72,	// (0x00085fcc) cell_gallery_pane_g4_ParamLimits

0x0c72,	// (0x00085fcc) cell_gallery_pane_g4

0x0003,

0xf645,	// (0x0009499f) cell_gallery_pane_g_ParamLimits

0xf645,	// (0x0009499f) cell_gallery_pane_g

0x0f82,	// (0x000862dc) bg_cell_gallery_focus_pane_g1

0x0f8a,	// (0x000862e4) bg_cell_gallery_focus_pane_g2

0x0f92,	// (0x000862ec) bg_cell_gallery_focus_pane_g3

0x0f9a,	// (0x000862f4) bg_cell_gallery_focus_pane_g4

0x0fa2,	// (0x000862fc) bg_cell_gallery_focus_pane_g5

0x0faa,	// (0x00086304) bg_cell_gallery_focus_pane_g6

0x0fb2,	// (0x0008630c) bg_cell_gallery_focus_pane_g7

0x0fba,	// (0x00086314) bg_cell_gallery_focus_pane_g8

0x0007,

0xf64e,	// (0x000949a8) bg_cell_gallery_focus_pane_g

0x0fc2,	// (0x0008631c) aid_firma_cardinal

0x0fd6,	// (0x00086330) blid_firmament_pane_t1

0x0fed,	// (0x00086347) blid_firmament_pane_t2

0x1004,	// (0x0008635e) blid_firmament_pane_t3

0x101b,	// (0x00086375) blid_firmament_pane_t4

0x0003,

0xf65f,	// (0x000949b9) blid_firmament_pane_t

0x1032,	// (0x0008638c) blid_sat_info_pane

0x34de,	// (0x00088838) blid_sat_info_pane_g1

0x34de,	// (0x00088838) blid_sat_info_pane_g2

0x0001,

0xf3c4,	// (0x0009471e) blid_sat_info_pane_g

0x1042,	// (0x0008639c) blid_sat_info_pane_t1

0x1050,	// (0x000863aa) smil2_volume_content_pane

0x1059,	// (0x000863b3) smil2_volume_pane_g1

0x1061,	// (0x000863bb) smil2_volume_content_pane_g1

0x106a,	// (0x000863c4) smil2_volume_content_pane_g2

0x1073,	// (0x000863cd) smil2_volume_content_pane_g3

0x107c,	// (0x000863d6) smil2_volume_content_pane_g4

0x1085,	// (0x000863df) smil2_volume_content_pane_g5

0x108e,	// (0x000863e8) smil2_volume_content_pane_g6

0x1097,	// (0x000863f1) smil2_volume_content_pane_g7

0x10a0,	// (0x000863fa) smil2_volume_content_pane_g8

0x10a9,	// (0x00086403) smil2_volume_content_pane_g9

0x10b2,	// (0x0008640c) smil2_volume_content_pane_g10

0x0009,

0xf668,	// (0x000949c2) smil2_volume_content_pane_g

0x2f72,	// (0x000882cc) cale_week_day_heading_pane_t1_ParamLimits

0x2f9c,	// (0x000882f6) cale_week_day_heading_pane_t2_ParamLimits

0x2fcb,	// (0x00088325) cale_week_day_heading_pane_t3_ParamLimits

0x2ffa,	// (0x00088354) cale_week_day_heading_pane_t4_ParamLimits

0x3029,	// (0x00088383) cale_week_day_heading_pane_t5_ParamLimits

0x3058,	// (0x000883b2) cale_week_day_heading_pane_t6_ParamLimits

0x3087,	// (0x000883e1) cale_week_day_heading_pane_t7_ParamLimits

0xf166,	// (0x000944c0) cale_week_day_heading_pane_t_ParamLimits

0x0e5b,	// (0x000861b5) bg_cale_side_pane_ParamLimits

0x30b1,	// (0x0008840b) cale_week_time_pane_t1_ParamLimits

0x30eb,	// (0x00088445) cale_week_time_pane_t2_ParamLimits

0x3125,	// (0x0008847f) cale_week_time_pane_t3_ParamLimits

0x315f,	// (0x000884b9) cale_week_time_pane_t4_ParamLimits

0x3199,	// (0x000884f3) cale_week_time_pane_t5_ParamLimits

0x31d3,	// (0x0008852d) cale_week_time_pane_t6_ParamLimits

0x320d,	// (0x00088567) cale_week_time_pane_t7_ParamLimits

0x3247,	// (0x000885a1) cale_week_time_pane_t8_ParamLimits

0xf175,	// (0x000944cf) cale_week_time_pane_t_ParamLimits

0x3281,	// (0x000885db) cell_cale_week_pane_g2_ParamLimits

0x0e5b,	// (0x000861b5) bg_cale_side_pane_cp01_ParamLimits

0x44a3,	// (0x000897fd) cale_month_week_pane_t1_ParamLimits

0x44bc,	// (0x00089816) cale_month_week_pane_t2_ParamLimits

0x44d5,	// (0x0008982f) cale_month_week_pane_t3_ParamLimits

0x44ee,	// (0x00089848) cale_month_week_pane_t4_ParamLimits

0x4507,	// (0x00089861) cale_month_week_pane_t5_ParamLimits

0x4520,	// (0x0008987a) cale_month_week_pane_t6_ParamLimits

0xf243,	// (0x0009459d) cale_month_week_pane_t_ParamLimits

0xaf89,	// (0x000902e3) cell_cale_month_pane_g1_ParamLimits

0xaeb3,	// (0x0009020d) main_cale_event_viewer_pane

0x0574,	// (0x000858ce) listscroll_cale_event_viewer_pane

0x10bb,	// (0x00086415) list_cale_ev_pane

0x10c3,	// (0x0008641d) scroll_pane_cp023

0x5e07,	// (0x0008b161) field_cale_ev_pane_ParamLimits

0x5e07,	// (0x0008b161) field_cale_ev_pane

0x10cf,	// (0x00086429) field_cale_ev_content_pane_ParamLimits

0x10cf,	// (0x00086429) field_cale_ev_content_pane

0x10db,	// (0x00086435) field_cale_ev_pane_g1_ParamLimits

0x10db,	// (0x00086435) field_cale_ev_pane_g1

0x10e7,	// (0x00086441) field_cale_ev_pane_g2_ParamLimits

0x10e7,	// (0x00086441) field_cale_ev_pane_g2

0x10ff,	// (0x00086459) field_cale_ev_pane_g3_ParamLimits

0x10ff,	// (0x00086459) field_cale_ev_pane_g3

0x0002,

0xf67d,	// (0x000949d7) field_cale_ev_pane_g_ParamLimits

0xf67d,	// (0x000949d7) field_cale_ev_pane_g

0x1117,	// (0x00086471) field_cale_ev_pane_t1_ParamLimits

0x1117,	// (0x00086471) field_cale_ev_pane_t1

0x2c73,	// (0x00087fcd) field_cale_ev_content_pane_t1_ParamLimits

0x2c73,	// (0x00087fcd) field_cale_ev_content_pane_t1

0xb532,	// (0x0009088c) bg_button_pane_cp01

0x2cc1,	// (0x0008801b) listscroll_cale_week_pane_ParamLimits

0x0e06,	// (0x00086160) popup_toolbar_window_cp01

0x0e2c,	// (0x00086186) listscroll_cale_week_pane_t1_ParamLimits

0x2cc1,	// (0x0008801b) listscroll_cale_day_pane_ParamLimits

0x0e06,	// (0x00086160) popup_toolbar_window_cp02

0x46f7,	// (0x00089a51) listscroll_cale_day_pane_t1_ParamLimits

0x5861,	// (0x0008abbb) main_cale_month_pane_ParamLimits

0xc7d0,	// (0x00091b2a) popup_toolbar_window_cp03_ParamLimits

0xc7d0,	// (0x00091b2a) popup_toolbar_window_cp03

0x5225,	// (0x0008a57f) main_image_pane_g2_ParamLimits

0x5225,	// (0x0008a57f) main_image_pane_g2

0x5236,	// (0x0008a590) main_image_pane_g3_ParamLimits

0x5236,	// (0x0008a590) main_image_pane_g3

0x0002,

0xf462,	// (0x000947bc) main_image_pane_g_ParamLimits

0xf462,	// (0x000947bc) main_image_pane_g

0xb6a4,	// (0x000909fe) main_image_pane_t1_ParamLimits

0x5247,	// (0x0008a5a1) main_image_pane_t2_ParamLimits

0x5247,	// (0x0008a5a1) main_image_pane_t2

0x5259,	// (0x0008a5b3) main_image_pane_t3_ParamLimits

0x5259,	// (0x0008a5b3) main_image_pane_t3

0x5281,	// (0x0008a5db) main_image_pane_t4_ParamLimits

0x5281,	// (0x0008a5db) main_image_pane_t4

0x0003,

0xf469,	// (0x000947c3) main_image_pane_t_ParamLimits

0xf469,	// (0x000947c3) main_image_pane_t

0x52a1,	// (0x0008a5fb) popup_image_details_window_cp01

0x52a9,	// (0x0008a603) popup_toobar_trans_pane_cp01_ParamLimits

0x52a9,	// (0x0008a603) popup_toobar_trans_pane_cp01

0x5962,	// (0x0008acbc) popup_image_details_window_ParamLimits

0x5962,	// (0x0008acbc) popup_image_details_window

0xc7a5,	// (0x00091aff) popup_image_focus_window

0xeb49,	// (0x00093ea3) camera2_autofocus_pane_ParamLimits

0xeb49,	// (0x00093ea3) camera2_autofocus_pane

0x0574,	// (0x000858ce) bg_popup_sub_pane_cp06

0x112e,	// (0x00086488) popup_image_focus_window_g1

0x1136,	// (0x00086490) popup_image_focus_window_g2

0x113e,	// (0x00086498) popup_image_focus_window_g3

0x1146,	// (0x000864a0) popup_image_focus_window_g4

0x0003,

0xf684,	// (0x000949de) popup_image_focus_window_g

0x114e,	// (0x000864a8) popup_image_focus_window_t1

0x115c,	// (0x000864b6) popup_image_focus_window_t2

0x116b,	// (0x000864c5) popup_image_focus_window_t3

0x0002,

0xf68d,	// (0x000949e7) popup_image_focus_window_t

0x0c64,	// (0x00085fbe) camera2_autofocus_pane_g1

0x334c,	// (0x000886a6) bg_tb_trans_pane_cp01

0x1179,	// (0x000864d3) popup_image_details_window_g1

0x118c,	// (0x000864e6) popup_image_details_window_g2

0x0002,

0xf69f,	// (0x000949f9) popup_image_details_window_g

0x11b5,	// (0x0008650f) popup_image_details_window_t1

0x11c7,	// (0x00086521) popup_image_details_window_t2

0x11e0,	// (0x0008653a) popup_image_details_window_t3

0x11f4,	// (0x0008654e) popup_image_details_window_t4

0x120f,	// (0x00086569) popup_image_details_window_t5

0x0004,

0xf6a6,	// (0x00094a00) popup_image_details_window_t

0x0cd0,	// (0x0008602a) bg_calc_paper_pane_ParamLimits

0xaeb3,	// (0x0009020d) grid_highlight_pane_cp013

0xaec5,	// (0x0009021f) list_calc_pane_ParamLimits

0xaed7,	// (0x00090231) scroll_pane_cp024

0x0ce8,	// (0x00086042) bg_calc_display_pane_ParamLimits

0xaedf,	// (0x00090239) calc_display_pane_t1_ParamLimits

0xaef4,	// (0x0009024e) calc_display_pane_t2_ParamLimits

0xaf09,	// (0x00090263) calc_display_pane_t3_ParamLimits

0xf0e6,	// (0x00094440) calc_display_pane_t_ParamLimits

0x2bce,	// (0x00087f28) cell_calc_pane_g2

0x0001,

0xf103,	// (0x0009445d) cell_calc_pane_g

0x2bd7,	// (0x00087f31) cell_calc_pane_t1

0x0d3d,	// (0x00086097) grid_highlight_pane_cp02_ParamLimits

0x0d53,	// (0x000860ad) toolbar_button_pane_cp01_ParamLimits

0x0d53,	// (0x000860ad) toolbar_button_pane_cp01

0xb6e9,	// (0x00090a43) temp_image_control_pane_ParamLimits

0xb6e9,	// (0x00090a43) temp_image_control_pane

0xaea5,	// (0x000901ff) main_mp3_pane

0x1229,	// (0x00086583) temp_image_control_pane_g1_ParamLimits

0x1229,	// (0x00086583) temp_image_control_pane_g1

0x1237,	// (0x00086591) temp_image_control_pane_g2_ParamLimits

0x1237,	// (0x00086591) temp_image_control_pane_g2

0x1249,	// (0x000865a3) temp_image_control_pane_g3_ParamLimits

0x1249,	// (0x000865a3) temp_image_control_pane_g3

0x5e21,	// (0x0008b17b) temp_image_control_pane_g4_ParamLimits

0x5e21,	// (0x0008b17b) temp_image_control_pane_g4

0x0003,

0xf6b1,	// (0x00094a0b) temp_image_control_pane_g_ParamLimits

0xf6b1,	// (0x00094a0b) temp_image_control_pane_g

0x1229,	// (0x00086583) main_mp3_pane_g1

0x5e32,	// (0x0008b18c) main_mp3_pane_g2

0x0007,

0xf6ba,	// (0x00094a14) main_mp3_pane_g

0x127e,	// (0x000865d8) main_mp3_pane_t1

0x0c72,	// (0x00085fcc) main_camera_pane_g8_ParamLimits

0x0c72,	// (0x00085fcc) main_camera_pane_g8

0x348c,	// (0x000887e6) main_video_pane_g7_ParamLimits

0x348c,	// (0x000887e6) main_video_pane_g7

0xc8ea,	// (0x00091c44) main_camera2_pane_t7_ParamLimits

0xc8ea,	// (0x00091c44) main_camera2_pane_t7

0x39e4,	// (0x00088d3e) scroll_pane_cp025_ParamLimits

0x39e4,	// (0x00088d3e) scroll_pane_cp025

0x39f8,	// (0x00088d52) scroll_pane_cp026_ParamLimits

0x39f8,	// (0x00088d52) scroll_pane_cp026

0x3a07,	// (0x00088d61) wml_content_pane_ParamLimits

0xaeb3,	// (0x0009020d) main_touch_calib_pane

0x5ef4,	// (0x0008b24e) main_touch_calib_pane_g1

0x5f06,	// (0x0008b260) main_touch_calib_pane_g2

0x5f18,	// (0x0008b272) main_touch_calib_pane_g3

0x5f2a,	// (0x0008b284) main_touch_calib_pane_g4

0x0003,

0xf6d8,	// (0x00094a32) main_touch_calib_pane_g

0x5f3c,	// (0x0008b296) main_touch_calib_pane_t1

0x5f54,	// (0x0008b2ae) main_touch_calib_pane_t2

0x0004,

0xf6e1,	// (0x00094a3b) main_touch_calib_pane_t

0xb27d,	// (0x000905d7) mup_progress_pane_cp02

0xb2b2,	// (0x0009060c) navi_pane_g1

0xb33d,	// (0x00090697) navi_pane_mp_t3

0xaea5,	// (0x000901ff) main_mp3_pane_ParamLimits

0x5abb,	// (0x0008ae15) navi_pane_ParamLimits

0x1229,	// (0x00086583) main_mp3_pane_g1_ParamLimits

0x5e32,	// (0x0008b18c) main_mp3_pane_g2_ParamLimits

0x5e3e,	// (0x0008b198) main_mp3_pane_g3_ParamLimits

0x5e3e,	// (0x0008b198) main_mp3_pane_g3

0x5e4a,	// (0x0008b1a4) main_mp3_pane_g4_ParamLimits

0x5e4a,	// (0x0008b1a4) main_mp3_pane_g4

0x0c64,	// (0x00085fbe) main_mp3_pane_g5_ParamLimits

0x0c64,	// (0x00085fbe) main_mp3_pane_g5

0x1259,	// (0x000865b3) main_mp3_pane_g6_ParamLimits

0x1259,	// (0x000865b3) main_mp3_pane_g6

0x1266,	// (0x000865c0) main_mp3_pane_g7_ParamLimits

0x1266,	// (0x000865c0) main_mp3_pane_g7

0x1272,	// (0x000865cc) main_mp3_pane_g8_ParamLimits

0x1272,	// (0x000865cc) main_mp3_pane_g8

0xf6ba,	// (0x00094a14) main_mp3_pane_g_ParamLimits

0x5e56,	// (0x0008b1b0) main_mp3_pane_t2

0x5e64,	// (0x0008b1be) main_mp3_pane_t3

0x128c,	// (0x000865e6) main_mp3_pane_t4

0x129a,	// (0x000865f4) main_mp3_pane_t5

0x0005,

0xf6cb,	// (0x00094a25) main_mp3_pane_t

0x12a8,	// (0x00086602) mup_progress_pane_cp01

0xae74,	// (0x000901ce) aid_zoom_text_secondary2

0x10bb,	// (0x00086415) list_cale_ev2_pane

0x10c3,	// (0x0008641d) scroll_pane_cp023_ParamLimits

0x5fa2,	// (0x0008b2fc) field_cale_ev2_pane_ParamLimits

0x5fa2,	// (0x0008b2fc) field_cale_ev2_pane

0xcb06,	// (0x00091e60) field_cale_ev2_pane_g1_ParamLimits

0xcb06,	// (0x00091e60) field_cale_ev2_pane_g1

0xcb12,	// (0x00091e6c) field_cale_ev2_pane_g2_ParamLimits

0xcb12,	// (0x00091e6c) field_cale_ev2_pane_g2

0xcb2a,	// (0x00091e84) field_cale_ev2_pane_g3_ParamLimits

0xcb2a,	// (0x00091e84) field_cale_ev2_pane_g3

0x0003,

0xf6ec,	// (0x00094a46) field_cale_ev2_pane_g_ParamLimits

0xf6ec,	// (0x00094a46) field_cale_ev2_pane_g

0xcb4e,	// (0x00091ea8) field_cale_ev2_pane_t1_ParamLimits

0xcb4e,	// (0x00091ea8) field_cale_ev2_pane_t1

0xcb65,	// (0x00091ebf) field_cale_ev2_pane_t2_ParamLimits

0xcb65,	// (0x00091ebf) field_cale_ev2_pane_t2

0x0001,

0xf6f5,	// (0x00094a4f) field_cale_ev2_pane_t_ParamLimits

0xf6f5,	// (0x00094a4f) field_cale_ev2_pane_t

0x50e0,	// (0x0008a43a) main_postcard_pane_g5_ParamLimits

0x50e0,	// (0x0008a43a) main_postcard_pane_g5

0x50f4,	// (0x0008a44e) main_postcard_pane_g6_ParamLimits

0x50f4,	// (0x0008a44e) main_postcard_pane_g6

0x334c,	// (0x000886a6) camera2_autofocus_pane_cp_ParamLimits

0x334c,	// (0x000886a6) camera2_autofocus_pane_cp

0xaea5,	// (0x000901ff) main_mup3_pane

0x5ff8,	// (0x0008b352) main_mup3_pane_g1_ParamLimits

0x5ff8,	// (0x0008b352) main_mup3_pane_g1

0x601a,	// (0x0008b374) main_mup3_pane_g2_ParamLimits

0x601a,	// (0x0008b374) main_mup3_pane_g2

0x608d,	// (0x0008b3e7) main_mup3_pane_g3_ParamLimits

0x608d,	// (0x0008b3e7) main_mup3_pane_g3

0x60cb,	// (0x0008b425) main_mup3_pane_g4_ParamLimits

0x60cb,	// (0x0008b425) main_mup3_pane_g4

0x6109,	// (0x0008b463) main_mup3_pane_g5_ParamLimits

0x6109,	// (0x0008b463) main_mup3_pane_g5

0x6147,	// (0x0008b4a1) main_mup3_pane_g6_ParamLimits

0x6147,	// (0x0008b4a1) main_mup3_pane_g6

0x0c72,	// (0x00085fcc) main_mup3_pane_g7_ParamLimits

0x0c72,	// (0x00085fcc) main_mup3_pane_g7

0x0007,

0xf705,	// (0x00094a5f) main_mup3_pane_g_ParamLimits

0xf705,	// (0x00094a5f) main_mup3_pane_g

0x61bd,	// (0x0008b517) main_mup3_pane_t1_ParamLimits

0x61bd,	// (0x0008b517) main_mup3_pane_t1

0x6223,	// (0x0008b57d) main_mup3_pane_t2_ParamLimits

0x6223,	// (0x0008b57d) main_mup3_pane_t2

0x62e9,	// (0x0008b643) main_mup3_pane_t4_ParamLimits

0x62e9,	// (0x0008b643) main_mup3_pane_t4

0x6337,	// (0x0008b691) main_mup3_pane_t5_ParamLimits

0x6337,	// (0x0008b691) main_mup3_pane_t5

0x63e5,	// (0x0008b73f) main_mup3_pane_t6_ParamLimits

0x63e5,	// (0x0008b73f) main_mup3_pane_t6

0x0005,

0xf716,	// (0x00094a70) main_mup3_pane_t_ParamLimits

0xf716,	// (0x00094a70) main_mup3_pane_t

0x6499,	// (0x0008b7f3) mup3_progress_pane_ParamLimits

0x6499,	// (0x0008b7f3) mup3_progress_pane

0x6515,	// (0x0008b86f) popup_mup3_control_window_ParamLimits

0x6515,	// (0x0008b86f) popup_mup3_control_window

0x12b0,	// (0x0008660a) popup_mup3_text_window

0x6543,	// (0x0008b89d) mup3_progress_pane_t1

0x6561,	// (0x0008b8bb) mup3_progress_pane_t2

0x12b8,	// (0x00086612) mup3_progress_pane_t3

0x0002,

0xf723,	// (0x00094a7d) mup3_progress_pane_t

0x12d5,	// (0x0008662f) mup_progress_pane_cp03

0x0574,	// (0x000858ce) bg_tb_trans_pane_cp04

0x657f,	// (0x0008b8d9) mup3_volume_pane

0x6587,	// (0x0008b8e1) popup_mup3_control_window_g1

0x6590,	// (0x0008b8ea) mup3_volume_pane_g1

0x6599,	// (0x0008b8f3) mup3_volume_pane_g2

0x65a2,	// (0x0008b8fc) mup3_volume_pane_g3

0x0002,

0xf72a,	// (0x00094a84) mup3_volume_pane_g

0x0574,	// (0x000858ce) bg_tb_trans_pane_cp03

0x12e5,	// (0x0008663f) popup_mup3_text_window_g1

0x12ed,	// (0x00086647) popup_mup3_text_window_t1

0x0d30,	// (0x0008608a) list_calc_item_pane_g1_ParamLimits

0xc9ed,	// (0x00091d47) mup_volume_pane_cp_g1

0x5f6c,	// (0x0008b2c6) main_touch_calib_pane_t3

0x5f7e,	// (0x0008b2d8) main_touch_calib_pane_t4

0x5f90,	// (0x0008b2ea) main_touch_calib_pane_t5

0xae54,	// (0x000901ae) aid_cell_size_toolbar2

0xae5c,	// (0x000901b6) aid_popup3_width_pane

0xae64,	// (0x000901be) aid_zoom_text_msg_primary

0x332b,	// (0x00088685) vorec_t7

0x0cf4,	// (0x0008604e) bg_calc_paper_pane_g1_ParamLimits

0x0d00,	// (0x0008605a) bg_calc_paper_pane_g2_ParamLimits

0x0d0c,	// (0x00086066) bg_calc_paper_pane_g3_ParamLimits

0x0d18,	// (0x00086072) bg_calc_paper_pane_g4_ParamLimits

0x0d24,	// (0x0008607e) bg_calc_paper_pane_g5_ParamLimits

0x2b68,	// (0x00087ec2) bg_calc_paper_pane_g6_ParamLimits

0x2b77,	// (0x00087ed1) bg_calc_paper_pane_g7_ParamLimits

0x2b86,	// (0x00087ee0) bg_calc_paper_pane_g8_ParamLimits

0xf0ed,	// (0x00094447) bg_calc_paper_pane_g_ParamLimits

0x2b95,	// (0x00087eef) calc_bg_paper_pane_g9_ParamLimits

0x334c,	// (0x000886a6) image_qvga_pane_ParamLimits

0x334c,	// (0x000886a6) image_qvga_pane

0x0bea,	// (0x00085f44) bg_popup_sub_pane_cp04_ParamLimits

0xb620,	// (0x0009097a) popup_mup_playback_window_g1_ParamLimits

0xb62c,	// (0x00090986) popup_mup_playback_window_t1_ParamLimits

0xb641,	// (0x0009099b) popup_mup_playback_window_t2_ParamLimits

0xf45d,	// (0x000947b7) popup_mup_playback_window_t_ParamLimits

0x0c72,	// (0x00085fcc) main_mup2_pane_g3_ParamLimits

0x0c72,	// (0x00085fcc) main_mup2_pane_g3

0x3709,	// (0x00088a63) popup_toolbar_window_cp04

0xba1a,	// (0x00090d74) popup_call2_audio_second_window_g3_ParamLimits

0xba1a,	// (0x00090d74) popup_call2_audio_second_window_g3

0xbe32,	// (0x0009118c) popup_call2_audio_first_window_g4_ParamLimits

0xbe32,	// (0x0009118c) popup_call2_audio_first_window_g4

0xc459,	// (0x000917b3) popup_call2_audio_in_window_g4_ParamLimits

0xc459,	// (0x000917b3) popup_call2_audio_in_window_g4

0x5207,	// (0x0008a561) aid_area_sk_bg_cut_ParamLimits

0x5207,	// (0x0008a561) aid_area_sk_bg_cut

0xb656,	// (0x000909b0) aid_area_sk_bg_cut_2_ParamLimits

0xb656,	// (0x000909b0) aid_area_sk_bg_cut_2

0x0574,	// (0x000858ce) aid_placing_details_win

0x0574,	// (0x000858ce) aid_placing_details_win_2

0x0c64,	// (0x00085fbe) camera2_autofocus_pane_g1_ParamLimits

0x28ca,	// (0x00087c24) popup_fixed_preview_cale_window_ParamLimits

0x28ca,	// (0x00087c24) popup_fixed_preview_cale_window

0xb3bc,	// (0x00090716) navi_slider_pane_g3

0xb3c5,	// (0x0009071f) navi_slider_pane_g4

0xb3ce,	// (0x00090728) navi_slider_pane_g5

0xb3bc,	// (0x00090716) navi_slider_pane_g6

0xb3d7,	// (0x00090731) navi_slider_pane_g7

0xb4f7,	// (0x00090851) mup_scale_pane_g3

0xb500,	// (0x0009085a) mup_scale_pane_g4

0xb509,	// (0x00090863) mup_scale_pane_g5

0x4f1a,	// (0x0008a274) mup_scale_pane_g6

0x4f23,	// (0x0008a27d) mup_scale_pane_g7

0x0eb5,	// (0x0008620f) cams2_slider_pane_g3

0x0eb5,	// (0x0008620f) cams2_slider_pane_g4

0x0eb5,	// (0x0008620f) cams2_slider_pane_g5

0x0eb5,	// (0x0008620f) cams2_slider_pane_g6

0x0eb5,	// (0x0008620f) cams2_slider_pane_g7

0x34de,	// (0x00088838) camera2_autofocus_pane_cp_g1

0xc77f,	// (0x00091ad9) bg_popup_preview_window_pane_cp02_ParamLimits

0xc77f,	// (0x00091ad9) bg_popup_preview_window_pane_cp02

0x12fb,	// (0x00086655) list_fp_cale_pane_ParamLimits

0x12fb,	// (0x00086655) list_fp_cale_pane

0x1307,	// (0x00086661) popup_fixed_preview_cale_window_t1_ParamLimits

0x1307,	// (0x00086661) popup_fixed_preview_cale_window_t1

0x65ab,	// (0x0008b905) popup_fixed_preview_cale_window_t2_ParamLimits

0x65ab,	// (0x0008b905) popup_fixed_preview_cale_window_t2

0x65c0,	// (0x0008b91a) popup_fixed_preview_cale_window_t3_ParamLimits

0x65c0,	// (0x0008b91a) popup_fixed_preview_cale_window_t3

0x0002,

0xf731,	// (0x00094a8b) popup_fixed_preview_cale_window_t_ParamLimits

0xf731,	// (0x00094a8b) popup_fixed_preview_cale_window_t

0x65d5,	// (0x0008b92f) list_single_fp_cale_pane_ParamLimits

0x65d5,	// (0x0008b92f) list_single_fp_cale_pane

0x1325,	// (0x0008667f) list_single_fp_cale_pane_g1_ParamLimits

0x1325,	// (0x0008667f) list_single_fp_cale_pane_g1

0x1331,	// (0x0008668b) list_single_fp_cale_pane_g2_ParamLimits

0x1331,	// (0x0008668b) list_single_fp_cale_pane_g2

0x0002,

0xf738,	// (0x00094a92) list_single_fp_cale_pane_g_ParamLimits

0xf738,	// (0x00094a92) list_single_fp_cale_pane_g

0x134a,	// (0x000866a4) list_single_fp_cale_pane_t1_ParamLimits

0x134a,	// (0x000866a4) list_single_fp_cale_pane_t1

0x135c,	// (0x000866b6) list_single_fp_cale_pane_t2_ParamLimits

0x135c,	// (0x000866b6) list_single_fp_cale_pane_t2

0x0001,

0xf73f,	// (0x00094a99) list_single_fp_cale_pane_t_ParamLimits

0xf73f,	// (0x00094a99) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xaeb3,	// (0x0009020d) main_dialer_pane

0x65e9,	// (0x0008b943) aid_cell_size_keypad

0x0574,	// (0x000858ce) dialer_ne_pane

0x0574,	// (0x000858ce) grid_dialer_command_1_pane

0x0574,	// (0x000858ce) grid_dialer_command_2_pane

0x0574,	// (0x000858ce) grid_dialer_keypad_pane

0x65f3,	// (0x0008b94d) bg_popup_call_pane_cp06_ParamLimits

0x65f3,	// (0x0008b94d) bg_popup_call_pane_cp06

0x65f3,	// (0x0008b94d) dialer_ne_clear_pane_ParamLimits

0x65f3,	// (0x0008b94d) dialer_ne_clear_pane

0x34de,	// (0x00088838) dialer_ne_pane_g1

0xb473,	// (0x000907cd) dialer_ne_pane_t1_ParamLimits

0xb473,	// (0x000907cd) dialer_ne_pane_t1

0x6601,	// (0x0008b95b) dialer_ne_pane_t2_ParamLimits

0x6601,	// (0x0008b95b) dialer_ne_pane_t2

0x6629,	// (0x0008b983) dialer_ne_pane_t3_ParamLimits

0x6629,	// (0x0008b983) dialer_ne_pane_t3

0x0002,

0xf744,	// (0x00094a9e) dialer_ne_pane_t_ParamLimits

0xf744,	// (0x00094a9e) dialer_ne_pane_t

0x6629,	// (0x0008b983) dialer_ne_pane_t3_copy1_ParamLimits

0x6629,	// (0x0008b983) dialer_ne_pane_t3_copy1

0x6656,	// (0x0008b9b0) cell_dialer_keypad_pane_ParamLimits

0x6656,	// (0x0008b9b0) cell_dialer_keypad_pane

0x666b,	// (0x0008b9c5) cell_dialer_command_1_pane_ParamLimits

0x666b,	// (0x0008b9c5) cell_dialer_command_1_pane

0x667c,	// (0x0008b9d6) cell_dialer_command_2_pane_ParamLimits

0x667c,	// (0x0008b9d6) cell_dialer_command_2_pane

0x334c,	// (0x000886a6) bg_button_pane_cp02_ParamLimits

0x334c,	// (0x000886a6) bg_button_pane_cp02

0x0c64,	// (0x00085fbe) cell_dialer_keypad_pane_g1_ParamLimits

0x0c64,	// (0x00085fbe) cell_dialer_keypad_pane_g1

0x334c,	// (0x000886a6) bg_button_pane_cp03_ParamLimits

0x334c,	// (0x000886a6) bg_button_pane_cp03

0x0c64,	// (0x00085fbe) cell_dialer_command_1_pane_g1_ParamLimits

0x0c64,	// (0x00085fbe) cell_dialer_command_1_pane_g1

0x0574,	// (0x000858ce) bg_button_pane_cp04

0x34de,	// (0x00088838) cell_dialer_command_2_pane_g1

0x0574,	// (0x000858ce) bg_button_pane_cp06

0x34de,	// (0x00088838) dialer_ne_clear_pane_g1

0xb2be,	// (0x00090618) navi_pane_g2

0x4d20,	// (0x0008a07a) navi_pane_g3

0x0002,

0xf360,	// (0x000946ba) navi_pane_g

0xb34b,	// (0x000906a5) navi_pane_mv_g2

0xb372,	// (0x000906cc) navi_pane_mv_g5

0x4d3d,	// (0x0008a097) navi_pane_mv_t1

0x0ce8,	// (0x00086042) main_clock2_pane

0x66c8,	// (0x0008ba22) main_clock2_list_pane_ParamLimits

0x66c8,	// (0x0008ba22) main_clock2_list_pane

0x66fa,	// (0x0008ba54) main_clock2_pane_t1_ParamLimits

0x66fa,	// (0x0008ba54) main_clock2_pane_t1

0x6734,	// (0x0008ba8e) main_clock2_pane_t2_ParamLimits

0x6734,	// (0x0008ba8e) main_clock2_pane_t2

0x0004,

0xf750,	// (0x00094aaa) main_clock2_pane_t_ParamLimits

0xf750,	// (0x00094aaa) main_clock2_pane_t

0x67c8,	// (0x0008bb22) popup_clock_analogue_window_cp03_ParamLimits

0x67c8,	// (0x0008bb22) popup_clock_analogue_window_cp03

0x67ed,	// (0x0008bb47) popup_clock_digital_window_cp02_ParamLimits

0x67ed,	// (0x0008bb47) popup_clock_digital_window_cp02

0x685e,	// (0x0008bbb8) main_clock2_list_single_pane_ParamLimits

0x685e,	// (0x0008bbb8) main_clock2_list_single_pane

0x32e3,	// (0x0008863d) list_highlight_pane_cp05

0x13dc,	// (0x00086736) main_clock2_list_single_pane_t1

0x3709,	// (0x00088a63) popup_toolbar_window_cp04_ParamLimits

0x0c72,	// (0x00085fcc) camera2_autofocus_pane_g2_ParamLimits

0x0c72,	// (0x00085fcc) camera2_autofocus_pane_g2

0x0c72,	// (0x00085fcc) camera2_autofocus_pane_g3_ParamLimits

0x0c72,	// (0x00085fcc) camera2_autofocus_pane_g3

0x0c72,	// (0x00085fcc) camera2_autofocus_pane_g4_ParamLimits

0x0c72,	// (0x00085fcc) camera2_autofocus_pane_g4

0x0c72,	// (0x00085fcc) camera2_autofocus_pane_g5_ParamLimits

0x0c72,	// (0x00085fcc) camera2_autofocus_pane_g5

0x0004,

0xf694,	// (0x000949ee) camera2_autofocus_pane_g_ParamLimits

0xf694,	// (0x000949ee) camera2_autofocus_pane_g

0x5fba,	// (0x0008b314) camera2_autofocus_pane_cp_g2

0x5fc2,	// (0x0008b31c) camera2_autofocus_pane_cp_g3

0x5fca,	// (0x0008b324) camera2_autofocus_pane_cp_g4

0x5fd2,	// (0x0008b32c) camera2_autofocus_pane_cp_g5

0x0004,

0xf6fa,	// (0x00094a54) camera2_autofocus_pane_cp_g

0x0574,	// (0x000858ce) popup_dialer_spcha_window

0x0574,	// (0x000858ce) bg_popup_sub_pane_cp07

0x0574,	// (0x000858ce) list_spcha_pane

0x13ea,	// (0x00086744) list_single_spcha_pane_ParamLimits

0x13ea,	// (0x00086744) list_single_spcha_pane

0x0574,	// (0x000858ce) list_highlight_pane_cp06

0xc727,	// (0x00091a81) list_single_spcha_pane_t1

0xc203,	// (0x0009155d) popup_call2_audio_out_window_g4_ParamLimits

0xc203,	// (0x0009155d) popup_call2_audio_out_window_g4

0xaeb3,	// (0x0009020d) main_imed2_pane

0xc7ad,	// (0x00091b07) popup_imed_adjust2_window

0x5978,	// (0x0008acd2) popup_imed_trans_window_ParamLimits

0x5978,	// (0x0008acd2) popup_imed_trans_window

0xcace,	// (0x00091e28) popup_blid_sat_info2_window_t1

0xcadc,	// (0x00091e36) popup_blid_sat_info2_window_t2

0x000a,

0xf629,	// (0x00094983) popup_blid_sat_info2_window_t

0x6908,	// (0x0008bc62) aid_size_cell_colour_35

0x6928,	// (0x0008bc82) aid_size_cell_colour_112

0x6948,	// (0x0008bca2) aid_size_cell_effect

0xb487,	// (0x000907e1) bg_tb_trans_pane_cp02

0x4841,	// (0x00089b9b) heading_imed_pane

0x6968,	// (0x0008bcc2) listscroll_imed_pane

0x1408,	// (0x00086762) heading_imed_pane_g1

0x1410,	// (0x0008676a) heading_imed_pane_t1

0x141e,	// (0x00086778) grid_imed_colour_35_pane_ParamLimits

0x141e,	// (0x00086778) grid_imed_colour_35_pane

0x6974,	// (0x0008bcce) grid_imed_effect_pane

0x1431,	// (0x0008678b) list_imed_aspect_pane

0x6987,	// (0x0008bce1) scroll_pane_cp027_ParamLimits

0x6987,	// (0x0008bce1) scroll_pane_cp027

0x6993,	// (0x0008bced) cell_imed_effect_pane_ParamLimits

0x6993,	// (0x0008bced) cell_imed_effect_pane

0x1439,	// (0x00086793) cell_imed_colour_pane_ParamLimits

0x1439,	// (0x00086793) cell_imed_colour_pane

0x1473,	// (0x000867cd) cell_imed_colour_pane_g1_ParamLimits

0x1473,	// (0x000867cd) cell_imed_colour_pane_g1

0x1484,	// (0x000867de) hgihlgiht_grid_pane_cp016_ParamLimits

0x1484,	// (0x000867de) hgihlgiht_grid_pane_cp016

0x69b8,	// (0x0008bd12) cell_imed_effect_pane_g1

0x69c0,	// (0x0008bd1a) grid_highlight_pane_cp017

0x1495,	// (0x000867ef) list_imed_single_pane_ParamLimits

0x1495,	// (0x000867ef) list_imed_single_pane

0x0574,	// (0x000858ce) list_highlight_pane_cp07

0x14a8,	// (0x00086802) list_imed_aspect_pane_comp1_t1

0xb487,	// (0x000907e1) bg_tb_trans_pane_cp05

0x14c8,	// (0x00086822) popup_imed_adjust2_window_g1

0x14ef,	// (0x00086849) popup_imed_adjust2_window_t1

0x1507,	// (0x00086861) slider_imed_adjust_pane

0x151b,	// (0x00086875) slider_imed_adjust_pane_g1

0x152b,	// (0x00086885) slider_imed_adjust_pane_g2

0x153b,	// (0x00086895) slider_imed_adjust_pane_g3

0x154c,	// (0x000868a6) slider_imed_adjust_pane_g4

0x0003,

0xf76d,	// (0x00094ac7) slider_imed_adjust_pane_g

0x69c9,	// (0x0008bd23) aid_size_cell_clipart2

0x69d5,	// (0x0008bd2f) grid_imed_clipart_pane

0x155d,	// (0x000868b7) scroll_pane_cp031

0x69df,	// (0x0008bd39) cell_imed_clipart_pane_ParamLimits

0x69df,	// (0x0008bd39) cell_imed_clipart_pane

0x69f7,	// (0x0008bd51) cell_imed_clipart_pane_g1

0x0574,	// (0x000858ce) grid_highlight_pane_cp014

0x66db,	// (0x0008ba35) main_clock2_pane_g1_ParamLimits

0x66db,	// (0x0008ba35) main_clock2_pane_g1

0x6809,	// (0x0008bb63) aid_call2_pane_cp10

0x681b,	// (0x0008bb75) aid_call_pane_cp10

0xb24d,	// (0x000905a7) popup_clock_analogue_window_cp10_g1

0xb24d,	// (0x000905a7) popup_clock_analogue_window_cp10_g2

0x682d,	// (0x0008bb87) popup_clock_analogue_window_cp10_g3

0x682d,	// (0x0008bb87) popup_clock_analogue_window_cp10_g4

0xb24d,	// (0x000905a7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf75b,	// (0x00094ab5) popup_clock_analogue_window_cp10_g

0x683f,	// (0x0008bb99) popup_clock_analogue_window_cp10_t1

0x6870,	// (0x0008bbca) clock_digital_number_pane_cp10_ParamLimits

0x6870,	// (0x0008bbca) clock_digital_number_pane_cp10

0x6888,	// (0x0008bbe2) clock_digital_number_pane_cp11_ParamLimits

0x6888,	// (0x0008bbe2) clock_digital_number_pane_cp11

0x68a0,	// (0x0008bbfa) clock_digital_number_pane_cp12_ParamLimits

0x68a0,	// (0x0008bbfa) clock_digital_number_pane_cp12

0x68b8,	// (0x0008bc12) clock_digital_number_pane_cp13_ParamLimits

0x68b8,	// (0x0008bc12) clock_digital_number_pane_cp13

0x68d0,	// (0x0008bc2a) clock_digital_separator_pane_cp10_ParamLimits

0x68d0,	// (0x0008bc2a) clock_digital_separator_pane_cp10

0x68e8,	// (0x0008bc42) popup_clock_digital_window_cp02_t1_ParamLimits

0x68e8,	// (0x0008bc42) popup_clock_digital_window_cp02_t1

0x0be2,	// (0x00085f3c) clock_digital_number_pane_cp10_g1

0x0be2,	// (0x00085f3c) clock_digital_number_pane_cp10_g2

0x0001,

0xf776,	// (0x00094ad0) clock_digital_number_pane_cp10_g

0x0be2,	// (0x00085f3c) clock_digital_separator_pane_cp10_g1

0x0be2,	// (0x00085f3c) clock_digital_separator_pane_g2_cp10

0xb37a,	// (0x000906d4) navi_pane_vded_g4

0xb383,	// (0x000906dd) navi_pane_vded_g5

0xb38c,	// (0x000906e6) navi_pane_vded_t1

0xaeb3,	// (0x0009020d) main_vded_pane

0x6a00,	// (0x0008bd5a) main_vded_pane_g1

0x6a0a,	// (0x0008bd64) main_vded_pane_g2

0x6a12,	// (0x0008bd6c) main_vded_pane_g3

0x0002,

0xf77b,	// (0x00094ad5) main_vded_pane_g

0x6a1a,	// (0x0008bd74) main_vded_pane_t1

0x6a28,	// (0x0008bd82) main_vded_pane_t2

0x0001,

0xf782,	// (0x00094adc) main_vded_pane_t

0x6a36,	// (0x0008bd90) vded_slider_pane

0x6a3e,	// (0x0008bd98) vded_video_pane

0x1565,	// (0x000868bf) vded_video_pane_g1

0x6a46,	// (0x0008bda0) vded_video_pane_g2

0x34de,	// (0x00088838) vded_video_pane_g3

0x0002,

0xf787,	// (0x00094ae1) vded_video_pane_g

0x156f,	// (0x000868c9) vded_slider_pane_g1

0xc9ed,	// (0x00091d47) vded_slider_pane_g2

0x1578,	// (0x000868d2) vded_slider_pane_g3

0x1581,	// (0x000868db) vded_slider_pane_g4

0x158a,	// (0x000868e4) vded_slider_pane_g5

0x0004,

0xf78e,	// (0x00094ae8) vded_slider_pane_g

0x64ff,	// (0x0008b859) mup3_rocker_pane_ParamLimits

0x64ff,	// (0x0008b859) mup3_rocker_pane

0x6a4f,	// (0x0008bda9) mup3_control_keys_pane_g1

0x6a57,	// (0x0008bdb1) mup3_control_keys_pane_g2

0x6a5f,	// (0x0008bdb9) mup3_control_keys_pane_g3

0x6a67,	// (0x0008bdc1) mup3_control_keys_pane_g4

0x0003,

0xf799,	// (0x00094af3) mup3_control_keys_pane_g

0x28fd,	// (0x00087c57) popup_toolbar2_fixed_window_cp01_ParamLimits

0x28fd,	// (0x00087c57) popup_toolbar2_fixed_window_cp01

0x652d,	// (0x0008b887) popup_toolbar2_fixed_window_cp02_ParamLimits

0x652d,	// (0x0008b887) popup_toolbar2_fixed_window_cp02

0xbb8c,	// (0x00090ee6) popup_call2_audio_second_window_t4_ParamLimits

0xbb8c,	// (0x00090ee6) popup_call2_audio_second_window_t4

0xc0c8,	// (0x00091422) popup_call2_audio_first_window_t6_ParamLimits

0xc0c8,	// (0x00091422) popup_call2_audio_first_window_t6

0xc306,	// (0x00091660) popup_call2_audio_out_window_t6_ParamLimits

0xc306,	// (0x00091660) popup_call2_audio_out_window_t6

0xaeb3,	// (0x0009020d) main_vitu_pane

0x334c,	// (0x000886a6) aid_size_cell_itu_ParamLimits

0x334c,	// (0x000886a6) aid_size_cell_itu

0x334c,	// (0x000886a6) bg_popup_window_pane_cp08_ParamLimits

0x334c,	// (0x000886a6) bg_popup_window_pane_cp08

0x334c,	// (0x000886a6) field_vitu_entry_pane_ParamLimits

0x334c,	// (0x000886a6) field_vitu_entry_pane

0x334c,	// (0x000886a6) grid_vitu_function_pane_ParamLimits

0x334c,	// (0x000886a6) grid_vitu_function_pane

0x334c,	// (0x000886a6) grid_vitu_itu_pane_ParamLimits

0x334c,	// (0x000886a6) grid_vitu_itu_pane

0x6a77,	// (0x0008bdd1) cell_vitu_itu_pane_ParamLimits

0x6a77,	// (0x0008bdd1) cell_vitu_itu_pane

0x334c,	// (0x000886a6) cell_vitu_function_pane_ParamLimits

0x334c,	// (0x000886a6) cell_vitu_function_pane

0x334c,	// (0x000886a6) bg_popup_sub_pane_cp08_ParamLimits

0x334c,	// (0x000886a6) bg_popup_sub_pane_cp08

0x335a,	// (0x000886b4) field_vitu_entry_pane_t1_ParamLimits

0x335a,	// (0x000886b4) field_vitu_entry_pane_t1

0x138f,	// (0x000866e9) field_vitu_entry_pane_t2_ParamLimits

0x138f,	// (0x000866e9) field_vitu_entry_pane_t2

0x0001,

0xf7a7,	// (0x00094b01) field_vitu_entry_pane_t_ParamLimits

0xf7a7,	// (0x00094b01) field_vitu_entry_pane_t

0xca77,	// (0x00091dd1) bg_button_pane_cp05_ParamLimits

0xca77,	// (0x00091dd1) bg_button_pane_cp05

0x1593,	// (0x000868ed) cell_vitu_itu_pane_g1

0xeb35,	// (0x00093e8f) cell_vitu_itu_pane_t1_ParamLimits

0xeb35,	// (0x00093e8f) cell_vitu_itu_pane_t1

0xeb35,	// (0x00093e8f) cell_vitu_itu_pane_t2_ParamLimits

0xeb35,	// (0x00093e8f) cell_vitu_itu_pane_t2

0x0002,

0xf7ac,	// (0x00094b06) cell_vitu_itu_pane_t_ParamLimits

0xf7ac,	// (0x00094b06) cell_vitu_itu_pane_t

0x0574,	// (0x000858ce) bg_button_pane_cp07

0x34de,	// (0x00088838) cell_vitu_function_pane_g1

0xaebd,	// (0x00090217) main_calc_pane_g1

0x27a8,	// (0x00087b02) aid_visual_content_pane

0xaeb3,	// (0x0009020d) main_vradio_pane

0x0c64,	// (0x00085fbe) main_vradio_pane_g1_ParamLimits

0x0c64,	// (0x00085fbe) main_vradio_pane_g1

0x0c72,	// (0x00085fcc) main_vradio_pane_g2_ParamLimits

0x0c72,	// (0x00085fcc) main_vradio_pane_g2

0x0001,

0xf7b3,	// (0x00094b0d) main_vradio_pane_g_ParamLimits

0xf7b3,	// (0x00094b0d) main_vradio_pane_g

0x335a,	// (0x000886b4) main_vradio_pane_t1_ParamLimits

0x335a,	// (0x000886b4) main_vradio_pane_t1

0x335a,	// (0x000886b4) main_vradio_pane_t2_ParamLimits

0x335a,	// (0x000886b4) main_vradio_pane_t2

0xb473,	// (0x000907cd) main_vradio_pane_t3_ParamLimits

0xb473,	// (0x000907cd) main_vradio_pane_t3

0x0002,

0xf7b8,	// (0x00094b12) main_vradio_pane_t_ParamLimits

0xf7b8,	// (0x00094b12) main_vradio_pane_t

0x334c,	// (0x000886a6) vradio_rocker_control_pane_ParamLimits

0x334c,	// (0x000886a6) vradio_rocker_control_pane

0x334c,	// (0x000886a6) vradio_station_info_pane_ParamLimits

0x334c,	// (0x000886a6) vradio_station_info_pane

0x334c,	// (0x000886a6) vradio_frequency_info_pane_ParamLimits

0x334c,	// (0x000886a6) vradio_frequency_info_pane

0x34de,	// (0x00088838) vradio_station_info_pane_g1

0xeb35,	// (0x00093e8f) vradio_station_info_pane_t1_ParamLimits

0xeb35,	// (0x00093e8f) vradio_station_info_pane_t1

0xb473,	// (0x000907cd) vradio_station_info_pane_t2_ParamLimits

0xb473,	// (0x000907cd) vradio_station_info_pane_t2

0x0001,

0xf7bf,	// (0x00094b19) vradio_station_info_pane_t_ParamLimits

0xf7bf,	// (0x00094b19) vradio_station_info_pane_t

0x0574,	// (0x000858ce) vradio_tuning_pane

0x6a8b,	// (0x0008bde5) vradio_rocker_control_pane_g1

0x15af,	// (0x00086909) vradio_rocker_control_pane_g2

0x6a93,	// (0x0008bded) vradio_rocker_control_pane_g3

0x6a9b,	// (0x0008bdf5) vradio_rocker_control_pane_g4

0x6aa3,	// (0x0008bdfd) vradio_rocker_control_pane_g5

0x0004,

0xf7c4,	// (0x00094b1e) vradio_rocker_control_pane_g

0x34de,	// (0x00088838) vradio_frequency_info_pane_g1

0x335a,	// (0x000886b4) vradio_frequency_info_pane_t1_ParamLimits

0x335a,	// (0x000886b4) vradio_frequency_info_pane_t1

0x6aab,	// (0x0008be05) vradio_tuning_pane_g1

0x6ab4,	// (0x0008be0e) vradio_tuning_pane_t1

0xae7c,	// (0x000901d6) area_side_right_pane_ParamLimits

0xae7c,	// (0x000901d6) area_side_right_pane

0xc746,	// (0x00091aa0) status_small_pane_g1

0xc74e,	// (0x00091aa8) status_small_pane_g2

0xc757,	// (0x00091ab1) status_small_pane_g3

0xc760,	// (0x00091aba) status_small_pane_g4

0x0003,

0xf58b,	// (0x000948e5) status_small_pane_g

0xc769,	// (0x00091ac3) status_small_pane_t1

0xaeb3,	// (0x0009020d) main_video3_pane

0x15b7,	// (0x00086911) cams_zoom_vslider_pane

0x15bf,	// (0x00086919) image3_wide_pane_ParamLimits

0x15bf,	// (0x00086919) image3_wide_pane

0x15d9,	// (0x00086933) image3_wide_small_pane

0x15e3,	// (0x0008693d) main_video3_pane_g1_ParamLimits

0x15e3,	// (0x0008693d) main_video3_pane_g1

0x15ff,	// (0x00086959) main_video3_pane_g2_ParamLimits

0x15ff,	// (0x00086959) main_video3_pane_g2

0x0001,

0xf7cf,	// (0x00094b29) main_video3_pane_g_ParamLimits

0xf7cf,	// (0x00094b29) main_video3_pane_g

0x161b,	// (0x00086975) main_video3_pane_t1_ParamLimits

0x161b,	// (0x00086975) main_video3_pane_t1

0x1646,	// (0x000869a0) main_video3_pane_t2_ParamLimits

0x1646,	// (0x000869a0) main_video3_pane_t2

0x1671,	// (0x000869cb) main_video3_pane_t3_ParamLimits

0x1671,	// (0x000869cb) main_video3_pane_t3

0x0002,

0xf7d4,	// (0x00094b2e) main_video3_pane_t_ParamLimits

0xf7d4,	// (0x00094b2e) main_video3_pane_t

0x169c,	// (0x000869f6) cams_zoom_vslider_pane_g1

0x16a5,	// (0x000869ff) cams_zoom_vslider_pane_g2

0x0001,

0xf7db,	// (0x00094b35) cams_zoom_vslider_pane_g

0x16ad,	// (0x00086a07) small_slider_vertical_pane

0x34de,	// (0x00088838) small_slider_vertical_pane_g1

0x34de,	// (0x00088838) small_slider_vertical_pane_g2

0x16b5,	// (0x00086a0f) small_slider_vertical_pane_g3

0x0002,

0xf7e0,	// (0x00094b3a) small_slider_vertical_pane_g

0xaeb3,	// (0x0009020d) main_hwr_training_pane

0x16be,	// (0x00086a18) hwr_training_instruct_pane_ParamLimits

0x16be,	// (0x00086a18) hwr_training_instruct_pane

0x6ac3,	// (0x0008be1d) hwr_training_navi_pane_ParamLimits

0x6ac3,	// (0x0008be1d) hwr_training_navi_pane

0x6ada,	// (0x0008be34) hwr_training_write_pane_ParamLimits

0x6ada,	// (0x0008be34) hwr_training_write_pane

0x0574,	// (0x000858ce) bg_frame_shadow_pane

0x16ed,	// (0x00086a47) hwr_training_write_pane_g1

0x16f5,	// (0x00086a4f) hwr_training_write_pane_g2

0x16fd,	// (0x00086a57) hwr_training_write_pane_g3

0x1705,	// (0x00086a5f) hwr_training_write_pane_g4

0x170d,	// (0x00086a67) hwr_training_write_pane_g5

0x1715,	// (0x00086a6f) hwr_training_write_pane_g6

0x171d,	// (0x00086a77) hwr_training_write_pane_g7

0x0006,

0xf7e7,	// (0x00094b41) hwr_training_write_pane_g

0xeb73,	// (0x00093ecd) hwr_training_navi_pane_g1_ParamLimits

0xeb73,	// (0x00093ecd) hwr_training_navi_pane_g1

0xeb85,	// (0x00093edf) hwr_training_navi_pane_g2_ParamLimits

0xeb85,	// (0x00093edf) hwr_training_navi_pane_g2

0xeb97,	// (0x00093ef1) hwr_training_navi_pane_g3_ParamLimits

0xeb97,	// (0x00093ef1) hwr_training_navi_pane_g3

0xeba7,	// (0x00093f01) hwr_training_navi_pane_g4_ParamLimits

0xeba7,	// (0x00093f01) hwr_training_navi_pane_g4

0x0004,

0xf7f6,	// (0x00094b50) hwr_training_navi_pane_g_ParamLimits

0xf7f6,	// (0x00094b50) hwr_training_navi_pane_g

0xebb4,	// (0x00093f0e) hwr_training_navi_pane_t1

0x6b1a,	// (0x0008be74) list_single_hwr_training_instruct_pane_ParamLimits

0x6b1a,	// (0x0008be74) list_single_hwr_training_instruct_pane

0x1725,	// (0x00086a7f) list_single_hwr_training_instruct_pane_t1

0x0f82,	// (0x000862dc) bg_frame_shadow_pane_g1

0x1734,	// (0x00086a8e) bg_frame_shadow_pane_g2

0x173c,	// (0x00086a96) bg_frame_shadow_pane_g3

0x1744,	// (0x00086a9e) bg_frame_shadow_pane_g4

0x174c,	// (0x00086aa6) bg_frame_shadow_pane_g5

0x1754,	// (0x00086aae) bg_frame_shadow_pane_g6

0x175c,	// (0x00086ab6) bg_frame_shadow_pane_g7

0x0da9,	// (0x00086103) bg_frame_shadow_pane_g8

0x0007,

0xf801,	// (0x00094b5b) bg_frame_shadow_pane_g

0xaeb3,	// (0x0009020d) main_video_tele_dialer_pane

0x6b32,	// (0x0008be8c) aid_size_cell_video_keypad_ParamLimits

0x6b32,	// (0x0008be8c) aid_size_cell_video_keypad

0x6b4c,	// (0x0008bea6) grid_video_dialer_keypad_pane_ParamLimits

0x6b4c,	// (0x0008bea6) grid_video_dialer_keypad_pane

0x6b8e,	// (0x0008bee8) video_down_pane_cp_ParamLimits

0x6b8e,	// (0x0008bee8) video_down_pane_cp

0x6bbe,	// (0x0008bf18) cell_video_dialer_keypad_pane_ParamLimits

0x6bbe,	// (0x0008bf18) cell_video_dialer_keypad_pane

0x1764,	// (0x00086abe) bg_button_pane_cp08_ParamLimits

0x1764,	// (0x00086abe) bg_button_pane_cp08

0x6be0,	// (0x0008bf3a) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6be0,	// (0x0008bf3a) cell_video_dialer_keypad_pane_g1

0x64e9,	// (0x0008b843) mup3_rocker2_pane_ParamLimits

0x64e9,	// (0x0008b843) mup3_rocker2_pane

0x34de,	// (0x00088838) mup3_rocker2_pane_g1

0x5871,	// (0x0008abcb) main_dialer2_pane

0xaeb3,	// (0x0009020d) main_mp4_pane

0xebde,	// (0x00093f38) main_mp4_pane_g1_ParamLimits

0xebde,	// (0x00093f38) main_mp4_pane_g1

0xebde,	// (0x00093f38) main_mp4_pane_g2_ParamLimits

0xebde,	// (0x00093f38) main_mp4_pane_g2

0x6c1b,	// (0x0008bf75) main_mp4_pane_g3_ParamLimits

0x6c1b,	// (0x0008bf75) main_mp4_pane_g3

0xebec,	// (0x00093f46) main_mp4_pane_g4_ParamLimits

0xebec,	// (0x00093f46) main_mp4_pane_g4

0xec1a,	// (0x00093f74) main_mp4_pane_g5_ParamLimits

0xec1a,	// (0x00093f74) main_mp4_pane_g5

0x0007,

0xf821,	// (0x00094b7b) main_mp4_pane_g_ParamLimits

0xf821,	// (0x00094b7b) main_mp4_pane_g

0xec8e,	// (0x00093fe8) main_mp4_pane_t1_ParamLimits

0xec8e,	// (0x00093fe8) main_mp4_pane_t1

0xece6,	// (0x00094040) main_mp4_pane_t2_ParamLimits

0xece6,	// (0x00094040) main_mp4_pane_t2

0xcb7a,	// (0x00091ed4) main_mp4_pane_t3_ParamLimits

0xcb7a,	// (0x00091ed4) main_mp4_pane_t3

0xed38,	// (0x00094092) main_mp4_pane_t4_ParamLimits

0xed38,	// (0x00094092) main_mp4_pane_t4

0x0003,

0xf832,	// (0x00094b8c) main_mp4_pane_t_ParamLimits

0xf832,	// (0x00094b8c) main_mp4_pane_t

0xed78,	// (0x000940d2) mp4_progress_pane_ParamLimits

0xed78,	// (0x000940d2) mp4_progress_pane

0xedbc,	// (0x00094116) mp4_rocker_pane_ParamLimits

0xedbc,	// (0x00094116) mp4_rocker_pane

0xcba8,	// (0x00091f02) mp4_progress_pane_t1

0xcbbf,	// (0x00091f19) mp4_progress_pane_t2

0x0001,

0xf83b,	// (0x00094b95) mp4_progress_pane_t

0xcbd6,	// (0x00091f30) mup_progress_pane_cp04

0x0eb5,	// (0x0008620f) mp4_rocker_pane_g1

0x6c4b,	// (0x0008bfa5) aid_cell_size_keypad2_ParamLimits

0x6c4b,	// (0x0008bfa5) aid_cell_size_keypad2

0x6c65,	// (0x0008bfbf) dialer2_ne_pane_ParamLimits

0x6c65,	// (0x0008bfbf) dialer2_ne_pane

0x6c7a,	// (0x0008bfd4) grid_dialer2_keypad_pane_ParamLimits

0x6c7a,	// (0x0008bfd4) grid_dialer2_keypad_pane

0xca77,	// (0x00091dd1) bg_popup_call_pane_cp07_ParamLimits

0xca77,	// (0x00091dd1) bg_popup_call_pane_cp07

0x6c90,	// (0x0008bfea) dialer2_ne_pane_t1_ParamLimits

0x6c90,	// (0x0008bfea) dialer2_ne_pane_t1

0x6ccd,	// (0x0008c027) cell_dialer2_keypad_pane_ParamLimits

0x6ccd,	// (0x0008c027) cell_dialer2_keypad_pane

0xcbf4,	// (0x00091f4e) bg_button_pane_pane_cp04_ParamLimits

0xcbf4,	// (0x00091f4e) bg_button_pane_pane_cp04

0x6cef,	// (0x0008c049) cell_dialer2_keypad_pane_g1_ParamLimits

0x6cef,	// (0x0008c049) cell_dialer2_keypad_pane_g1

0x35e5,	// (0x0008893f) aid_placing_vt_set_content_ParamLimits

0x35e5,	// (0x0008893f) aid_placing_vt_set_content

0x3607,	// (0x00088961) aid_placing_vt_set_title_ParamLimits

0x3607,	// (0x00088961) aid_placing_vt_set_title

0xaeb3,	// (0x0009020d) main_image3_pane

0x6d7e,	// (0x0008c0d8) area_side_right_pane_cp01_ParamLimits

0x6d7e,	// (0x0008c0d8) area_side_right_pane_cp01

0xebde,	// (0x00093f38) main_image3_pane_g1_ParamLimits

0xebde,	// (0x00093f38) main_image3_pane_g1

0x6d95,	// (0x0008c0ef) main_image3_pane_g2_ParamLimits

0x6d95,	// (0x0008c0ef) main_image3_pane_g2

0x6dbb,	// (0x0008c115) main_image3_pane_g3_ParamLimits

0x6dbb,	// (0x0008c115) main_image3_pane_g3

0x6de1,	// (0x0008c13b) main_image3_pane_g4_ParamLimits

0x6de1,	// (0x0008c13b) main_image3_pane_g4

0x0003,

0xf84a,	// (0x00094ba4) main_image3_pane_g_ParamLimits

0xf84a,	// (0x00094ba4) main_image3_pane_g

0x6e07,	// (0x0008c161) main_image3_pane_t1_ParamLimits

0x6e07,	// (0x0008c161) main_image3_pane_t1

0x6e5f,	// (0x0008c1b9) main_image3_pane_t2_ParamLimits

0x6e5f,	// (0x0008c1b9) main_image3_pane_t2

0x6eb1,	// (0x0008c20b) main_image3_pane_t3_ParamLimits

0x6eb1,	// (0x0008c20b) main_image3_pane_t3

0x0003,

0xf853,	// (0x00094bad) main_image3_pane_t_ParamLimits

0xf853,	// (0x00094bad) main_image3_pane_t

0x334c,	// (0x000886a6) grid_sctrl_middle_pane_cp01_ParamLimits

0x334c,	// (0x000886a6) grid_sctrl_middle_pane_cp01

0x6f31,	// (0x0008c28b) cell_sctrl_middle_pane_cp01_ParamLimits

0x6f31,	// (0x0008c28b) cell_sctrl_middle_pane_cp01

0x6f4e,	// (0x0008c2a8) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6f4e,	// (0x0008c2a8) cell_sctrl_middle_pane_cp01_g1

0xaeb3,	// (0x0009020d) main_call4_pane

0x6f64,	// (0x0008c2be) aid_size_button_call4_ParamLimits

0x6f64,	// (0x0008c2be) aid_size_button_call4

0x6f91,	// (0x0008c2eb) call4_windows_pane_ParamLimits

0x6f91,	// (0x0008c2eb) call4_windows_pane

0x6fa7,	// (0x0008c301) grid_call4_button_pane_ParamLimits

0x6fa7,	// (0x0008c301) grid_call4_button_pane

0xcc18,	// (0x00091f72) call4_windows_conf_pane

0x6fce,	// (0x0008c328) popup_call4_audio_first_window_ParamLimits

0x6fce,	// (0x0008c328) popup_call4_audio_first_window

0xcc4b,	// (0x00091fa5) popup_call4_audio_second_window_ParamLimits

0xcc4b,	// (0x00091fa5) popup_call4_audio_second_window

0xcc5d,	// (0x00091fb7) popup_call4_audio_wait_window_ParamLimits

0xcc5d,	// (0x00091fb7) popup_call4_audio_wait_window

0x6fee,	// (0x0008c348) cell_call4_button_pane_ParamLimits

0x6fee,	// (0x0008c348) cell_call4_button_pane

0x7013,	// (0x0008c36d) bg_button_pane_cp09_ParamLimits

0x7013,	// (0x0008c36d) bg_button_pane_cp09

0x701f,	// (0x0008c379) cell_call4_button_pane_g1_ParamLimits

0x701f,	// (0x0008c379) cell_call4_button_pane_g1

0x7045,	// (0x0008c39f) cell_call4_button_pane_t1_ParamLimits

0x7045,	// (0x0008c39f) cell_call4_button_pane_t1

0xcc71,	// (0x00091fcb) popup_call4_audio_conf_window_ParamLimits

0xcc71,	// (0x00091fcb) popup_call4_audio_conf_window

0x6543,	// (0x0008b89d) mup3_progress_pane_t1_ParamLimits

0x6561,	// (0x0008b8bb) mup3_progress_pane_t2_ParamLimits

0x12b8,	// (0x00086612) mup3_progress_pane_t3_ParamLimits

0xf723,	// (0x00094a7d) mup3_progress_pane_t_ParamLimits

0x12d5,	// (0x0008662f) mup_progress_pane_cp03_ParamLimits

0x6a6f,	// (0x0008bdc9) mup3_control_keys_pane_g4_copy1

0xeda6,	// (0x00094100) mp4_rocker2_pane_ParamLimits

0xeda6,	// (0x00094100) mp4_rocker2_pane

0xcc85,	// (0x00091fdf) mp4_rocker2_pane_g1

0xcc8d,	// (0x00091fe7) mp4_rocker2_pane_g2

0xee3e,	// (0x00094198) mp4_rocker2_pane_g3

0xee46,	// (0x000941a0) mp4_rocker2_pane_g4

0xee4e,	// (0x000941a8) mp4_rocker2_pane_g5

0x0004,

0xf85c,	// (0x00094bb6) mp4_rocker2_pane_g

0xaeb3,	// (0x0009020d) main_camera4_pane

0xaeb3,	// (0x0009020d) main_video4_pane

0x6b60,	// (0x0008beba) main_video_tele_dialer_pane_t1_ParamLimits

0x6b60,	// (0x0008beba) main_video_tele_dialer_pane_t1

0x6b77,	// (0x0008bed1) main_video_tele_dialer_pane_t2_ParamLimits

0x6b77,	// (0x0008bed1) main_video_tele_dialer_pane_t2

0x0001,

0xf812,	// (0x00094b6c) main_video_tele_dialer_pane_t_ParamLimits

0xf812,	// (0x00094b6c) main_video_tele_dialer_pane_t

0x7083,	// (0x0008c3dd) cam4_autofocus_pane_ParamLimits

0x7083,	// (0x0008c3dd) cam4_autofocus_pane

0x7097,	// (0x0008c3f1) cam4_image_uncrop_pane_ParamLimits

0x7097,	// (0x0008c3f1) cam4_image_uncrop_pane

0x70ae,	// (0x0008c408) cam4_indicators_pane_ParamLimits

0x70ae,	// (0x0008c408) cam4_indicators_pane

0x70d2,	// (0x0008c42c) main_camera4_pane_g1_ParamLimits

0x70d2,	// (0x0008c42c) main_camera4_pane_g1

0x70de,	// (0x0008c438) main_camera4_pane_g2_ParamLimits

0x70de,	// (0x0008c438) main_camera4_pane_g2

0x70de,	// (0x0008c438) main_camera4_pane_g3_ParamLimits

0x70de,	// (0x0008c438) main_camera4_pane_g3

0x70ea,	// (0x0008c444) main_camera4_pane_g4_ParamLimits

0x70ea,	// (0x0008c444) main_camera4_pane_g4

0x70f6,	// (0x0008c450) main_camera4_pane_g5_ParamLimits

0x70f6,	// (0x0008c450) main_camera4_pane_g5

0x0005,

0xf867,	// (0x00094bc1) main_camera4_pane_g_ParamLimits

0xf867,	// (0x00094bc1) main_camera4_pane_g

0x7113,	// (0x0008c46d) main_camera4_pane_t1_ParamLimits

0x7113,	// (0x0008c46d) main_camera4_pane_t1

0xee70,	// (0x000941ca) bg_tb_trans_pane_cp06

0xee86,	// (0x000941e0) cam4_indicators_pane_g1

0xee96,	// (0x000941f0) cam4_indicators_pane_g2

0x0002,

0xf882,	// (0x00094bdc) cam4_indicators_pane_g

0xeeb6,	// (0x00094210) cam4_indicators_pane_t1

0x7168,	// (0x0008c4c2) main_video4_pane_g1_ParamLimits

0x7168,	// (0x0008c4c2) main_video4_pane_g1

0x717a,	// (0x0008c4d4) main_video4_pane_g2_ParamLimits

0x717a,	// (0x0008c4d4) main_video4_pane_g2

0x717a,	// (0x0008c4d4) main_video4_pane_g3_ParamLimits

0x717a,	// (0x0008c4d4) main_video4_pane_g3

0x7189,	// (0x0008c4e3) main_video4_pane_g4_ParamLimits

0x7189,	// (0x0008c4e3) main_video4_pane_g4

0x0004,

0xf889,	// (0x00094be3) main_video4_pane_g_ParamLimits

0xf889,	// (0x00094be3) main_video4_pane_g

0x71a7,	// (0x0008c501) vid4_indicators_pane_ParamLimits

0x71a7,	// (0x0008c501) vid4_indicators_pane

0x71cf,	// (0x0008c529) video4_image_uncrop_cif_pane_ParamLimits

0x71cf,	// (0x0008c529) video4_image_uncrop_cif_pane

0x71e7,	// (0x0008c541) video4_image_uncrop_nhd_pane_ParamLimits

0x71e7,	// (0x0008c541) video4_image_uncrop_nhd_pane

0x71fb,	// (0x0008c555) video4_image_uncrop_vga_pane_ParamLimits

0x71fb,	// (0x0008c555) video4_image_uncrop_vga_pane

0xaea5,	// (0x000901ff) bg_tb_trans_pane_cp07

0xee86,	// (0x000941e0) vid4_indicators_pane_g1

0xeed8,	// (0x00094232) vid4_indicators_pane_g2

0xeee8,	// (0x00094242) vid4_indicators_pane_g3

0x0004,

0xf894,	// (0x00094bee) vid4_indicators_pane_g

0xef15,	// (0x0009426f) vid4_indicators_pane_t1

0x7213,	// (0x0008c56d) cam4_autofocus_pane_g1

0x721b,	// (0x0008c575) cam4_autofocus_pane_g2

0x7223,	// (0x0008c57d) cam4_autofocus_pane_g3

0x0002,

0xf89f,	// (0x00094bf9) cam4_autofocus_pane_g

0x722b,	// (0x0008c585) cam4_autofocus_pane_g3_copy1

0x6ba2,	// (0x0008befc) video_down_pane_cp_t1

0x6bb0,	// (0x0008bf0a) video_down_pane_cp_t2

0x0001,

0xf817,	// (0x00094b71) video_down_pane_cp_t

0xaea5,	// (0x000901ff) popup_vitu2_window_ParamLimits

0xaea5,	// (0x000901ff) popup_vitu2_window

0x7233,	// (0x0008c58d) aid_size_cell2_itu2_ParamLimits

0x7233,	// (0x0008c58d) aid_size_cell2_itu2

0x7259,	// (0x0008c5b3) aid_size_cell_itu2_ParamLimits

0x7259,	// (0x0008c5b3) aid_size_cell_itu2

0x72ab,	// (0x0008c605) bg_popup_window_pane_cp09_ParamLimits

0x72ab,	// (0x0008c605) bg_popup_window_pane_cp09

0x72b9,	// (0x0008c613) field_vitu2_entry_pane_ParamLimits

0x72b9,	// (0x0008c613) field_vitu2_entry_pane

0x72d3,	// (0x0008c62d) grid_vitu2_function_pane_ParamLimits

0x72d3,	// (0x0008c62d) grid_vitu2_function_pane

0x730e,	// (0x0008c668) grid_vitu2_itu_pane_ParamLimits

0x730e,	// (0x0008c668) grid_vitu2_itu_pane

0x737c,	// (0x0008c6d6) cell_vitu2_itu_pane_ParamLimits

0x737c,	// (0x0008c6d6) cell_vitu2_itu_pane

0x73a4,	// (0x0008c6fe) cell_vitu2_function_pane_ParamLimits

0x73a4,	// (0x0008c6fe) cell_vitu2_function_pane

0xcca7,	// (0x00092001) bg_popup_call_pane_cp08_ParamLimits

0xcca7,	// (0x00092001) bg_popup_call_pane_cp08

0xccbe,	// (0x00092018) field_vitu2_entry_pane_g1

0xccca,	// (0x00092024) field_vitu2_entry_pane_g2

0x0002,

0xf8a6,	// (0x00094c00) field_vitu2_entry_pane_g

0x73e3,	// (0x0008c73d) field_vitu2_entry_pane_t1_ParamLimits

0x73e3,	// (0x0008c73d) field_vitu2_entry_pane_t1

0xccd6,	// (0x00092030) field_vitu2_entry_pane_t2_ParamLimits

0xccd6,	// (0x00092030) field_vitu2_entry_pane_t2

0x0001,

0xf8ad,	// (0x00094c07) field_vitu2_entry_pane_t_ParamLimits

0xf8ad,	// (0x00094c07) field_vitu2_entry_pane_t

0x7410,	// (0x0008c76a) bg_button_pane_cp010_ParamLimits

0x7410,	// (0x0008c76a) bg_button_pane_cp010

0x741e,	// (0x0008c778) cell_vitu2_itu_pane_g1

0x7444,	// (0x0008c79e) cell_vitu2_itu_pane_t1_ParamLimits

0x7444,	// (0x0008c79e) cell_vitu2_itu_pane_t1

0x2684,	// (0x000879de) cell_vitu2_itu_pane_t2_ParamLimits

0x2684,	// (0x000879de) cell_vitu2_itu_pane_t2

0x0002,

0xf8b7,	// (0x00094c11) cell_vitu2_itu_pane_t_ParamLimits

0xf8b7,	// (0x00094c11) cell_vitu2_itu_pane_t

0xaea5,	// (0x000901ff) bg_button_pane_cp011

0x74a2,	// (0x0008c7fc) cell_vitu2_function_pane_g1

0xaeb3,	// (0x0009020d) main_myfav_hc_pane

0x6efd,	// (0x0008c257) popup_image3_note_pane_ParamLimits

0x6efd,	// (0x0008c257) popup_image3_note_pane

0x6f17,	// (0x0008c271) popup_image3_tool_bar_pane_ParamLimits

0x6f17,	// (0x0008c271) popup_image3_tool_bar_pane

0x2712,	// (0x00087a6c) cell_vitu2_itu_pane_t3_ParamLimits

0x2712,	// (0x00087a6c) cell_vitu2_itu_pane_t3

0x0574,	// (0x000858ce) bg_popup_trans_pane

0xccfb,	// (0x00092055) grid_image3_tool_bar_pane

0xcd05,	// (0x0009205f) bg_popup_trans_pane_g1

0x3b2d,	// (0x00088e87) bg_popup_trans_pane_g2

0xcd0d,	// (0x00092067) bg_popup_trans_pane_g3

0xcd15,	// (0x0009206f) bg_popup_trans_pane_g4

0xcd1d,	// (0x00092077) bg_popup_trans_pane_g5

0xcd25,	// (0x0009207f) bg_popup_trans_pane_g6

0xcd2d,	// (0x00092087) bg_popup_trans_pane_g7

0xcd35,	// (0x0009208f) bg_popup_trans_pane_g8

0x3b0d,	// (0x00088e67) bg_popup_trans_pane_g9

0x0008,

0xf8be,	// (0x00094c18) bg_popup_trans_pane_g

0xcd3d,	// (0x00092097) cell_image3_tool_bar_pane_ParamLimits

0xcd3d,	// (0x00092097) cell_image3_tool_bar_pane

0x34de,	// (0x00088838) cell_image3_tool_bar_pane_g1

0x0574,	// (0x000858ce) bg_popup_trans_pane_cp1

0xcd51,	// (0x000920ab) popup_image3_note_pane_t1

0xcd5f,	// (0x000920b9) popup_image3_note_pane_t2

0xcd6d,	// (0x000920c7) popup_image3_note_pane_t3

0x0002,

0xf8d1,	// (0x00094c2b) popup_image3_note_pane_t

0xcd7b,	// (0x000920d5) popup_image3_note_pane_t3_copy1

0x74b6,	// (0x0008c810) bg_myfav_hc_instruction_pane_ParamLimits

0x74b6,	// (0x0008c810) bg_myfav_hc_instruction_pane

0x74c8,	// (0x0008c822) cell_myfav_contact_pane_ParamLimits

0x74c8,	// (0x0008c822) cell_myfav_contact_pane

0x74e2,	// (0x0008c83c) cell_myfav_contact_pane_cp1_ParamLimits

0x74e2,	// (0x0008c83c) cell_myfav_contact_pane_cp1

0x74f8,	// (0x0008c852) cell_myfav_contact_pane_cp2_ParamLimits

0x74f8,	// (0x0008c852) cell_myfav_contact_pane_cp2

0x750e,	// (0x0008c868) cell_myfav_contact_pane_cp3_ParamLimits

0x750e,	// (0x0008c868) cell_myfav_contact_pane_cp3

0x7523,	// (0x0008c87d) cell_myfav_contact_pane_cp4_ParamLimits

0x7523,	// (0x0008c87d) cell_myfav_contact_pane_cp4

0x7537,	// (0x0008c891) cell_myfav_contact_pane_cp5_ParamLimits

0x7537,	// (0x0008c891) cell_myfav_contact_pane_cp5

0x754b,	// (0x0008c8a5) cell_myfav_contact_pane_cp6_ParamLimits

0x754b,	// (0x0008c8a5) cell_myfav_contact_pane_cp6

0x755f,	// (0x0008c8b9) cell_myfav_contact_pane_cp7_ParamLimits

0x755f,	// (0x0008c8b9) cell_myfav_contact_pane_cp7

0xcd89,	// (0x000920e3) listscroll_gen_pane_cp05

0x7577,	// (0x0008c8d1) main_myfav_hc_pane_g1_ParamLimits

0x7577,	// (0x0008c8d1) main_myfav_hc_pane_g1

0x758d,	// (0x0008c8e7) main_myfav_hc_pane_g2_ParamLimits

0x758d,	// (0x0008c8e7) main_myfav_hc_pane_g2

0x0002,

0xf8d8,	// (0x00094c32) main_myfav_hc_pane_g_ParamLimits

0xf8d8,	// (0x00094c32) main_myfav_hc_pane_g

0x75b7,	// (0x0008c911) main_myfav_hc_pane_t1_ParamLimits

0x75b7,	// (0x0008c911) main_myfav_hc_pane_t1

0xcd92,	// (0x000920ec) main_myfav_hc_pane_t2_ParamLimits

0xcd92,	// (0x000920ec) main_myfav_hc_pane_t2

0xcda4,	// (0x000920fe) main_myfav_hc_pane_t3_ParamLimits

0xcda4,	// (0x000920fe) main_myfav_hc_pane_t3

0x75cc,	// (0x0008c926) main_myfav_hc_pane_t4_ParamLimits

0x75cc,	// (0x0008c926) main_myfav_hc_pane_t4

0x0004,

0xf8df,	// (0x00094c39) main_myfav_hc_pane_t_ParamLimits

0xf8df,	// (0x00094c39) main_myfav_hc_pane_t

0x34de,	// (0x00088838) bg_myfav_hc_instruction_pane_g1

0xcdb6,	// (0x00092110) cell_myfav_contact_pane_g1_ParamLimits

0xcdb6,	// (0x00092110) cell_myfav_contact_pane_g1

0xcdb6,	// (0x00092110) cell_myfav_contact_pane_g2_ParamLimits

0xcdb6,	// (0x00092110) cell_myfav_contact_pane_g2

0xcdc2,	// (0x0009211c) cell_myfav_contact_pane_g3_ParamLimits

0xcdc2,	// (0x0009211c) cell_myfav_contact_pane_g3

0x0c72,	// (0x00085fcc) cell_myfav_contact_pane_g4_ParamLimits

0x0c72,	// (0x00085fcc) cell_myfav_contact_pane_g4

0xcdcf,	// (0x00092129) cell_myfav_contact_pane_g5_ParamLimits

0xcdcf,	// (0x00092129) cell_myfav_contact_pane_g5

0x0004,

0xf8ea,	// (0x00094c44) cell_myfav_contact_pane_g_ParamLimits

0xf8ea,	// (0x00094c44) cell_myfav_contact_pane_g

0x75a3,	// (0x0008c8fd) main_myfav_hc_pane_g3_ParamLimits

0x75a3,	// (0x0008c8fd) main_myfav_hc_pane_g3

0x263f,	// (0x00087999) popup_adpt_find_window

0x75f0,	// (0x0008c94a) afind_page_pane_ParamLimits

0x75f0,	// (0x0008c94a) afind_page_pane

0x7605,	// (0x0008c95f) aid_size_cell_afind_ParamLimits

0x7605,	// (0x0008c95f) aid_size_cell_afind

0x7623,	// (0x0008c97d) bg_popup_sub_pane_cp09_ParamLimits

0x7623,	// (0x0008c97d) bg_popup_sub_pane_cp09

0x7630,	// (0x0008c98a) find_pane_cp01_ParamLimits

0x7630,	// (0x0008c98a) find_pane_cp01

0xcddb,	// (0x00092135) grid_afind_control_pane_ParamLimits

0xcddb,	// (0x00092135) grid_afind_control_pane

0x763d,	// (0x0008c997) grid_afind_pane_ParamLimits

0x763d,	// (0x0008c997) grid_afind_pane

0x765b,	// (0x0008c9b5) cell_afind_pane_ParamLimits

0x765b,	// (0x0008c9b5) cell_afind_pane

0x34de,	// (0x00088838) afind_page_pane_g1

0x76aa,	// (0x0008ca04) afind_page_pane_g2

0x76b2,	// (0x0008ca0c) afind_page_pane_g3

0x0002,

0xf8f5,	// (0x00094c4f) afind_page_pane_g

0x76ba,	// (0x0008ca14) afind_page_pane_t1

0xce01,	// (0x0009215b) cell_afind_grid_control_pane_ParamLimits

0xce01,	// (0x0009215b) cell_afind_grid_control_pane

0xcbf4,	// (0x00091f4e) bg_button_pane_cp69_ParamLimits

0xcbf4,	// (0x00091f4e) bg_button_pane_cp69

0x76c8,	// (0x0008ca22) cell_afind_pane_g1_ParamLimits

0x76c8,	// (0x0008ca22) cell_afind_pane_g1

0x76d5,	// (0x0008ca2f) cell_afind_pane_t1_ParamLimits

0x76d5,	// (0x0008ca2f) cell_afind_pane_t1

0x3540,	// (0x0008889a) bg_button_pane_cp72

0xce10,	// (0x0009216a) cell_afind_grid_control_pane_g1

0x53be,	// (0x0008a718) aid_image_placing_area_ParamLimits

0x53be,	// (0x0008a718) aid_image_placing_area

0x0c64,	// (0x00085fbe) field_vitu_entry_pane_g1_ParamLimits

0x0c64,	// (0x00085fbe) field_vitu_entry_pane_g1

0x0c64,	// (0x00085fbe) field_vitu_entry_pane_g2_ParamLimits

0x0c64,	// (0x00085fbe) field_vitu_entry_pane_g2

0x0001,

0xf7a2,	// (0x00094afc) field_vitu_entry_pane_g_ParamLimits

0xf7a2,	// (0x00094afc) field_vitu_entry_pane_g

0x1593,	// (0x000868ed) cell_vitu_itu_pane_g1_ParamLimits

0x138f,	// (0x000866e9) cell_vitu_itu_pane_t3_ParamLimits

0x138f,	// (0x000866e9) cell_vitu_itu_pane_t3

0xcba8,	// (0x00091f02) mp4_progress_pane_t1_ParamLimits

0xcbbf,	// (0x00091f19) mp4_progress_pane_t2_ParamLimits

0xf83b,	// (0x00094b95) mp4_progress_pane_t_ParamLimits

0xcbd6,	// (0x00091f30) mup_progress_pane_cp04_ParamLimits

0x75de,	// (0x0008c938) main_myfav_hc_pane_t5_ParamLimits

0x75de,	// (0x0008c938) main_myfav_hc_pane_t5

0xae6c,	// (0x000901c6) aid_zoom_text_primary

0x263f,	// (0x00087999) popup_adpt_find_window_ParamLimits

0xaea5,	// (0x000901ff) main_cam_set_pane

0x70c0,	// (0x0008c41a) cam4_zoom_pane_ParamLimits

0x70c0,	// (0x0008c41a) cam4_zoom_pane

0x76e7,	// (0x0008ca41) main_cam_set_pane_g1_ParamLimits

0x76e7,	// (0x0008ca41) main_cam_set_pane_g1

0x76f5,	// (0x0008ca4f) main_cam_set_pane_g2_ParamLimits

0x76f5,	// (0x0008ca4f) main_cam_set_pane_g2

0x0001,

0xf8fc,	// (0x00094c56) main_cam_set_pane_g_ParamLimits

0xf8fc,	// (0x00094c56) main_cam_set_pane_g

0x7714,	// (0x0008ca6e) main_cam_set_pane_t1_ParamLimits

0x7714,	// (0x0008ca6e) main_cam_set_pane_t1

0x7726,	// (0x0008ca80) main_cset_listscroll_pane_ParamLimits

0x7726,	// (0x0008ca80) main_cset_listscroll_pane

0x7748,	// (0x0008caa2) main_cset_slider_pane_ParamLimits

0x7748,	// (0x0008caa2) main_cset_slider_pane

0xce21,	// (0x0009217b) main_cset_list_pane_ParamLimits

0xce21,	// (0x0009217b) main_cset_list_pane

0xce31,	// (0x0009218b) scroll_pane_cp028

0x776c,	// (0x0008cac6) aid_area_touch_slider

0x7788,	// (0x0008cae2) cset_slider_pane

0x77ab,	// (0x0008cb05) main_cset_slider_pane_g1

0x77c0,	// (0x0008cb1a) main_cset_slider_pane_g2

0x0011,

0xf901,	// (0x00094c5b) main_cset_slider_pane_g

0xce6a,	// (0x000921c4) main_cset_slider_pane_t1

0x787c,	// (0x0008cbd6) main_cset_slider_pane_t2

0x7896,	// (0x0008cbf0) main_cset_slider_pane_t3

0x78b0,	// (0x0008cc0a) main_cset_slider_pane_t4

0x78ca,	// (0x0008cc24) main_cset_slider_pane_t5

0x78e4,	// (0x0008cc3e) main_cset_slider_pane_t6

0x78f9,	// (0x0008cc53) main_cset_slider_pane_t7

0x000e,

0xf926,	// (0x00094c80) main_cset_slider_pane_t

0x79fd,	// (0x0008cd57) cset_list_set_pane_ParamLimits

0x79fd,	// (0x0008cd57) cset_list_set_pane

0xcf04,	// (0x0009225e) aid_position_infowindow_above

0xcf0c,	// (0x00092266) aid_position_infowindow_below

0x7a0e,	// (0x0008cd68) cset_list_set_pane_g1_ParamLimits

0x7a0e,	// (0x0008cd68) cset_list_set_pane_g1

0x7a1a,	// (0x0008cd74) cset_list_set_pane_g3_ParamLimits

0x7a1a,	// (0x0008cd74) cset_list_set_pane_g3

0x0001,

0xf945,	// (0x00094c9f) cset_list_set_pane_g_ParamLimits

0xf945,	// (0x00094c9f) cset_list_set_pane_g

0x7a29,	// (0x0008cd83) cset_list_set_pane_t1_ParamLimits

0x7a29,	// (0x0008cd83) cset_list_set_pane_t1

0x334c,	// (0x000886a6) list_highlight_pane_cp021_ParamLimits

0x334c,	// (0x000886a6) list_highlight_pane_cp021

0xb4f7,	// (0x00090851) cset_slider_pane_g1

0xb509,	// (0x00090863) cset_slider_pane_g2

0xb500,	// (0x0009085a) cset_slider_pane_g3

0x0002,

0xf94a,	// (0x00094ca4) cset_slider_pane_g

0xef2f,	// (0x00094289) aid_area_touch_cam4_zoom

0xef37,	// (0x00094291) cam4_zoom_cont_pane

0xef3f,	// (0x00094299) cam4_zoom_pane_g1

0xef47,	// (0x000942a1) cam4_zoom_pane_g2

0x7a3e,	// (0x0008cd98) cam4_zoom_pane_g3

0x0002,

0xf951,	// (0x00094cab) cam4_zoom_pane_g

0xef4f,	// (0x000942a9) cam4_zoom_cont_pane_g1

0xef58,	// (0x000942b2) cam4_zoom_cont_pane_g2

0xef61,	// (0x000942bb) cam4_zoom_cont_pane_g3

0x0002,

0xf958,	// (0x00094cb2) cam4_zoom_cont_pane_g

0x6f82,	// (0x0008c2dc) call4_image_pane_ParamLimits

0x6f82,	// (0x0008c2dc) call4_image_pane

0xcc18,	// (0x00091f72) call4_windows_conf_pane_ParamLimits

0xcc2b,	// (0x00091f85) popup_call4_audio_in_window_ParamLimits

0xcc2b,	// (0x00091f85) popup_call4_audio_in_window

0x0574,	// (0x000858ce) bg_popup_call2_act_pane_cp02

0xcc69,	// (0x00091fc3) call4_list_conf_pane

0x34de,	// (0x00088838) call4_image_pane_g1

0x34de,	// (0x00088838) call4_image_pane_g2

0x0001,

0xf3c4,	// (0x0009471e) call4_image_pane_g

0xcf14,	// (0x0009226e) list_single_graphic_popup_conf4_pane_ParamLimits

0xcf14,	// (0x0009226e) list_single_graphic_popup_conf4_pane

0x0574,	// (0x000858ce) list_highlight_pane_cp022

0xcf27,	// (0x00092281) list_single_graphic_popup_conf4_pane_g1

0xb123,	// (0x0009047d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf95f,	// (0x00094cb9) list_single_graphic_popup_conf4_pane_g

0xcf2f,	// (0x00092289) list_single_graphic_popup_conf4_pane_t1

0x3723,	// (0x00088a7d) popup_vtel_slider_window_ParamLimits

0x3723,	// (0x00088a7d) popup_vtel_slider_window

0xcbe2,	// (0x00091f3c) dialer2_ne_pane_t2_ParamLimits

0xcbe2,	// (0x00091f3c) dialer2_ne_pane_t2

0x0001,

0xf840,	// (0x00094b9a) dialer2_ne_pane_t_ParamLimits

0xf840,	// (0x00094b9a) dialer2_ne_pane_t

0xca77,	// (0x00091dd1) bg_popup_sub_pane_cp010_ParamLimits

0xca77,	// (0x00091dd1) bg_popup_sub_pane_cp010

0x7a46,	// (0x0008cda0) popup_vtel_slider_window_g1_ParamLimits

0x7a46,	// (0x0008cda0) popup_vtel_slider_window_g1

0x7a59,	// (0x0008cdb3) popup_vtel_slider_window_g2_ParamLimits

0x7a59,	// (0x0008cdb3) popup_vtel_slider_window_g2

0x0003,

0xf964,	// (0x00094cbe) popup_vtel_slider_window_g_ParamLimits

0xf964,	// (0x00094cbe) popup_vtel_slider_window_g

0x7aad,	// (0x0008ce07) vtel_slider_pane_ParamLimits

0x7aad,	// (0x0008ce07) vtel_slider_pane

0x7acf,	// (0x0008ce29) vtel_slider_pane_g1_ParamLimits

0x7acf,	// (0x0008ce29) vtel_slider_pane_g1

0x7ae3,	// (0x0008ce3d) vtel_slider_pane_g2_ParamLimits

0x7ae3,	// (0x0008ce3d) vtel_slider_pane_g2

0x7afb,	// (0x0008ce55) vtel_slider_pane_g3_ParamLimits

0x7afb,	// (0x0008ce55) vtel_slider_pane_g3

0x7acf,	// (0x0008ce29) vtel_slider_pane_g4_ParamLimits

0x7acf,	// (0x0008ce29) vtel_slider_pane_g4

0x7b11,	// (0x0008ce6b) vtel_slider_pane_g5_ParamLimits

0x7b11,	// (0x0008ce6b) vtel_slider_pane_g5

0x0004,

0xf96d,	// (0x00094cc7) vtel_slider_pane_g_ParamLimits

0xf96d,	// (0x00094cc7) vtel_slider_pane_g

0xaea5,	// (0x000901ff) main_gallery2_pane

0x7285,	// (0x0008c5df) aid_size_row_itut2_dropdow_list_ParamLimits

0x7285,	// (0x0008c5df) aid_size_row_itut2_dropdow_list

0x72ef,	// (0x0008c649) grid_vitu2_function_top_pane_ParamLimits

0x72ef,	// (0x0008c649) grid_vitu2_function_top_pane

0x7337,	// (0x0008c691) popup_vitu2_dropdown_list_window_ParamLimits

0x7337,	// (0x0008c691) popup_vitu2_dropdown_list_window

0x7358,	// (0x0008c6b2) popup_vitu2_match_list_window

0x7b27,	// (0x0008ce81) cell_vitu2_function_top_pane_ParamLimits

0x7b27,	// (0x0008ce81) cell_vitu2_function_top_pane

0x7b3f,	// (0x0008ce99) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7b3f,	// (0x0008ce99) cell_vitu2_function_top_pane_cp01

0x7b5b,	// (0x0008ceb5) cell_vitu2_function_top_wide_pane_ParamLimits

0x7b5b,	// (0x0008ceb5) cell_vitu2_function_top_wide_pane

0xaea5,	// (0x000901ff) bg_button_pane_cp012

0x7b78,	// (0x0008ced2) cell_vitu2_function_top_pane_g1

0xef6a,	// (0x000942c4) bg_button_pane_cp013_ParamLimits

0xef6a,	// (0x000942c4) bg_button_pane_cp013

0x7b8c,	// (0x0008cee6) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7b8c,	// (0x0008cee6) cell_vitu2_function_top_wide_pane_g1

0xaea5,	// (0x000901ff) bg_popup_sub_pane_cp20

0x7ba4,	// (0x0008cefe) list_vitu2_match_list_pane

0xcd05,	// (0x0009205f) bg_popup_sub_pane_cp20_g1

0xcd0d,	// (0x00092067) bg_popup_sub_pane_cp20_g2

0x3b2d,	// (0x00088e87) bg_popup_sub_pane_cp20_g3

0xcd15,	// (0x0009206f) bg_popup_sub_pane_cp20_g4

0x3b0d,	// (0x00088e67) bg_popup_sub_pane_cp20_g5

0xcf45,	// (0x0009229f) bg_popup_sub_pane_cp20_g6

0xcd25,	// (0x0009207f) bg_popup_sub_pane_cp20_g7

0xcd2d,	// (0x00092087) bg_popup_sub_pane_cp20_g8

0xcd35,	// (0x0009208f) bg_popup_sub_pane_cp20_g9

0x0008,

0xf978,	// (0x00094cd2) bg_popup_sub_pane_cp20_g

0xef86,	// (0x000942e0) list_vitu2_match_list_item_pane_ParamLimits

0xef86,	// (0x000942e0) list_vitu2_match_list_item_pane

0xef98,	// (0x000942f2) list_vitu2_match_list_item_pane_t1

0xaeb3,	// (0x0009020d) bg_popup_sub_pane_cp21

0x32e3,	// (0x0008863d) grid_vitu2_dropdown_list_pane

0x7bc2,	// (0x0008cf1c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7bc2,	// (0x0008cf1c) cell_vitu2_dropdown_list_char_pane

0x7be0,	// (0x0008cf3a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7be0,	// (0x0008cf3a) cell_vitu2_dropdown_list_ctrl_pane

0xcf5a,	// (0x000922b4) cell_vitu2_dropdown_list_char_pane_g1

0xcf63,	// (0x000922bd) cell_vitu2_dropdown_list_char_pane_g2

0xcf6c,	// (0x000922c6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf995,	// (0x00094cef) cell_vitu2_dropdown_list_char_pane_g

0x7c08,	// (0x0008cf62) cell_vitu2_dropdown_list_char_pane_t1

0x7c16,	// (0x0008cf70) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7c16,	// (0x0008cf70) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7c26,	// (0x0008cf80) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7c26,	// (0x0008cf80) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7c37,	// (0x0008cf91) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7c37,	// (0x0008cf91) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7c47,	// (0x0008cfa1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7c47,	// (0x0008cfa1) cell_vitu2_dropdown_list_ctrl_pane_g4

0xee70,	// (0x000941ca) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xee70,	// (0x000941ca) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf99c,	// (0x00094cf6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf99c,	// (0x00094cf6) cell_vitu2_dropdown_list_ctrl_pane_g

0x7c63,	// (0x0008cfbd) aid_size_cell_gallery2_ParamLimits

0x7c63,	// (0x0008cfbd) aid_size_cell_gallery2

0x7c81,	// (0x0008cfdb) grid_gallery2_pane_ParamLimits

0x7c81,	// (0x0008cfdb) grid_gallery2_pane

0x6987,	// (0x0008bce1) scroll_pane_cp029_ParamLimits

0x6987,	// (0x0008bce1) scroll_pane_cp029

0x7c95,	// (0x0008cfef) cell_gallery2_pane_ParamLimits

0x7c95,	// (0x0008cfef) cell_gallery2_pane

0xcf75,	// (0x000922cf) cell_gallery2_pane_g2

0x7cee,	// (0x0008d048) cell_gallery2_pane_g3

0xcf7d,	// (0x000922d7) cell_gallery2_pane_g4

0xcf85,	// (0x000922df) cell_gallery2_pane_g5

0x32e3,	// (0x0008863d) grid_highlight_pane_cp10

0x7358,	// (0x0008c6b2) popup_vitu2_match_list_window_ParamLimits

0x7369,	// (0x0008c6c3) popup_vitu2_query_window_ParamLimits

0x7369,	// (0x0008c6c3) popup_vitu2_query_window

0xaeb3,	// (0x0009020d) bg_vitu2_candi_button_pane

0xcf5a,	// (0x000922b4) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcf63,	// (0x000922bd) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcf6c,	// (0x000922c6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7cf6,	// (0x0008d050) bg_button_pane_cp015

0x7d07,	// (0x0008d061) bg_button_pane_cp016

0x7d13,	// (0x0008d06d) bg_button_pane_cp017

0xb487,	// (0x000907e1) bg_popup_sub_pane_cp22

0xcf8d,	// (0x000922e7) popup_vitu2_query_window_g1

0x7d51,	// (0x0008d0ab) popup_vitu2_query_window_g2

0x0002,

0xf9a7,	// (0x00094d01) popup_vitu2_query_window_g

0x7d71,	// (0x0008d0cb) popup_vitu2_query_window_t1_ParamLimits

0x7d71,	// (0x0008d0cb) popup_vitu2_query_window_t1

0x7da4,	// (0x0008d0fe) popup_vitu2_query_window_t2_ParamLimits

0x7da4,	// (0x0008d0fe) popup_vitu2_query_window_t2

0x7db6,	// (0x0008d110) popup_vitu2_query_window_t3_ParamLimits

0x7db6,	// (0x0008d110) popup_vitu2_query_window_t3

0x7dde,	// (0x0008d138) popup_vitu2_query_window_t4_ParamLimits

0x7dde,	// (0x0008d138) popup_vitu2_query_window_t4

0x7df0,	// (0x0008d14a) popup_vitu2_query_window_t5_ParamLimits

0x7df0,	// (0x0008d14a) popup_vitu2_query_window_t5

0x0006,

0xf9ae,	// (0x00094d08) popup_vitu2_query_window_t_ParamLimits

0xf9ae,	// (0x00094d08) popup_vitu2_query_window_t

0xce19,	// (0x00092173) main_cset_text_pane

0x776c,	// (0x0008cac6) aid_area_touch_slider_ParamLimits

0x7788,	// (0x0008cae2) cset_slider_pane_ParamLimits

0x77ab,	// (0x0008cb05) main_cset_slider_pane_g1_ParamLimits

0x77c0,	// (0x0008cb1a) main_cset_slider_pane_g2_ParamLimits

0xce3a,	// (0x00092194) main_cset_slider_pane_g3_ParamLimits

0xce3a,	// (0x00092194) main_cset_slider_pane_g3

0x77d5,	// (0x0008cb2f) main_cset_slider_pane_g4_ParamLimits

0x77d5,	// (0x0008cb2f) main_cset_slider_pane_g4

0x77e4,	// (0x0008cb3e) main_cset_slider_pane_g5_ParamLimits

0x77e4,	// (0x0008cb3e) main_cset_slider_pane_g5

0x77f0,	// (0x0008cb4a) main_cset_slider_pane_g6_ParamLimits

0x77f0,	// (0x0008cb4a) main_cset_slider_pane_g6

0xf901,	// (0x00094c5b) main_cset_slider_pane_g_ParamLimits

0xce6a,	// (0x000921c4) main_cset_slider_pane_t1_ParamLimits

0x787c,	// (0x0008cbd6) main_cset_slider_pane_t2_ParamLimits

0x7896,	// (0x0008cbf0) main_cset_slider_pane_t3_ParamLimits

0x78b0,	// (0x0008cc0a) main_cset_slider_pane_t4_ParamLimits

0x78ca,	// (0x0008cc24) main_cset_slider_pane_t5_ParamLimits

0x78e4,	// (0x0008cc3e) main_cset_slider_pane_t6_ParamLimits

0x78f9,	// (0x0008cc53) main_cset_slider_pane_t7_ParamLimits

0x7923,	// (0x0008cc7d) main_cset_slider_pane_t8_ParamLimits

0x7923,	// (0x0008cc7d) main_cset_slider_pane_t8

0x794b,	// (0x0008cca5) main_cset_slider_pane_t9_ParamLimits

0x794b,	// (0x0008cca5) main_cset_slider_pane_t9

0x7973,	// (0x0008cccd) main_cset_slider_pane_t10_ParamLimits

0x7973,	// (0x0008cccd) main_cset_slider_pane_t10

0x799b,	// (0x0008ccf5) main_cset_slider_pane_t11_ParamLimits

0x799b,	// (0x0008ccf5) main_cset_slider_pane_t11

0x79c3,	// (0x0008cd1d) main_cset_slider_pane_t12_ParamLimits

0x79c3,	// (0x0008cd1d) main_cset_slider_pane_t12

0x79e0,	// (0x0008cd3a) main_cset_slider_pane_t13_ParamLimits

0x79e0,	// (0x0008cd3a) main_cset_slider_pane_t13

0xf926,	// (0x00094c80) main_cset_slider_pane_t_ParamLimits

0x0574,	// (0x000858ce) bg_popup_sub_pane_cp011

0xcf99,	// (0x000922f3) main_cset_text_pane_g1

0xcfa1,	// (0x000922fb) main_cset_text_pane_t1

0xcfaf,	// (0x00092309) main_cset_text_pane_t2

0xcfbd,	// (0x00092317) main_cset_text_pane_t3

0xcfcb,	// (0x00092325) main_cset_text_pane_t4

0xcfd9,	// (0x00092333) main_cset_text_pane_t5

0xcfe7,	// (0x00092341) main_cset_text_pane_t6

0xcff5,	// (0x0009234f) main_cset_text_pane_t7

0x0006,

0xf9bd,	// (0x00094d17) main_cset_text_pane_t

0xaeb3,	// (0x0009020d) main_cam4_burst_pane

0xaeb3,	// (0x0009020d) main_cam5_pane

0xcdef,	// (0x00092149) bg_button_pane_cp019

0xcdf8,	// (0x00092152) bg_button_pane_cp020

0xce46,	// (0x000921a0) main_cset_slider_pane_g7_ParamLimits

0xce46,	// (0x000921a0) main_cset_slider_pane_g7

0xce52,	// (0x000921ac) main_cset_slider_pane_g8_ParamLimits

0xce52,	// (0x000921ac) main_cset_slider_pane_g8

0x7804,	// (0x0008cb5e) main_cset_slider_pane_g9_ParamLimits

0x7804,	// (0x0008cb5e) main_cset_slider_pane_g9

0x7810,	// (0x0008cb6a) main_cset_slider_pane_g10_ParamLimits

0x7810,	// (0x0008cb6a) main_cset_slider_pane_g10

0x781c,	// (0x0008cb76) main_cset_slider_pane_g11_ParamLimits

0x781c,	// (0x0008cb76) main_cset_slider_pane_g11

0x7828,	// (0x0008cb82) main_cset_slider_pane_g12_ParamLimits

0x7828,	// (0x0008cb82) main_cset_slider_pane_g12

0x7834,	// (0x0008cb8e) main_cset_slider_pane_g13_ParamLimits

0x7834,	// (0x0008cb8e) main_cset_slider_pane_g13

0x7840,	// (0x0008cb9a) main_cset_slider_pane_g14_ParamLimits

0x7840,	// (0x0008cb9a) main_cset_slider_pane_g14

0x784c,	// (0x0008cba6) main_cset_slider_pane_g15_ParamLimits

0x784c,	// (0x0008cba6) main_cset_slider_pane_g15

0xce92,	// (0x000921ec) main_cset_slider_pane_t14_ParamLimits

0xce92,	// (0x000921ec) main_cset_slider_pane_t14

0xcecb,	// (0x00092225) main_cset_slider_pane_t15_ParamLimits

0xcecb,	// (0x00092225) main_cset_slider_pane_t15

0x7e58,	// (0x0008d1b2) aid_cam4_burst_size_cell_ParamLimits

0x7e58,	// (0x0008d1b2) aid_cam4_burst_size_cell

0x7e78,	// (0x0008d1d2) grid_cam4_burst_pane_ParamLimits

0x7e78,	// (0x0008d1d2) grid_cam4_burst_pane

0x7e9e,	// (0x0008d1f8) linegrid_cam4_burst_pane_ParamLimits

0x7e9e,	// (0x0008d1f8) linegrid_cam4_burst_pane

0x7ec0,	// (0x0008d21a) scroll_pane_cp30_ParamLimits

0x7ec0,	// (0x0008d21a) scroll_pane_cp30

0x7ecc,	// (0x0008d226) cell_cam4_burst_pane_ParamLimits

0x7ecc,	// (0x0008d226) cell_cam4_burst_pane

0xd003,	// (0x0009235d) linegrid_cam4_burst_pane_g1_ParamLimits

0xd003,	// (0x0009235d) linegrid_cam4_burst_pane_g1

0x7f13,	// (0x0008d26d) linegrid_cam4_burst_pane_g2_ParamLimits

0x7f13,	// (0x0008d26d) linegrid_cam4_burst_pane_g2

0xd010,	// (0x0009236a) linegrid_cam4_burst_pane_g3_ParamLimits

0xd010,	// (0x0009236a) linegrid_cam4_burst_pane_g3

0x0002,

0xf9cc,	// (0x00094d26) linegrid_cam4_burst_pane_g_ParamLimits

0xf9cc,	// (0x00094d26) linegrid_cam4_burst_pane_g

0x7f24,	// (0x0008d27e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7f24,	// (0x0008d27e) linegrid_cam4_burst_pane_g3_copy1

0xd01d,	// (0x00092377) linegrid_cam4_burst_pane_g4_ParamLimits

0xd01d,	// (0x00092377) linegrid_cam4_burst_pane_g4

0x7f3e,	// (0x0008d298) linegrid_cam4_burst_pane_g5_ParamLimits

0x7f3e,	// (0x0008d298) linegrid_cam4_burst_pane_g5

0x7f4f,	// (0x0008d2a9) linegrid_cam4_burst_pane_g6_ParamLimits

0x7f4f,	// (0x0008d2a9) linegrid_cam4_burst_pane_g6

0xd02a,	// (0x00092384) linegrid_cam4_burst_pane_g7_ParamLimits

0xd02a,	// (0x00092384) linegrid_cam4_burst_pane_g7

0x7f60,	// (0x0008d2ba) cell_cam4_burst_pane_g1

0xd043,	// (0x0009239d) main_cam5_pane_t1_ParamLimits

0xd043,	// (0x0009239d) main_cam5_pane_t1

0xd055,	// (0x000923af) main_cam5_pane_t2_ParamLimits

0xd055,	// (0x000923af) main_cam5_pane_t2

0xd067,	// (0x000923c1) main_cam5_pane_t3_ParamLimits

0xd067,	// (0x000923c1) main_cam5_pane_t3

0xd079,	// (0x000923d3) main_cam5_pane_t4_ParamLimits

0xd079,	// (0x000923d3) main_cam5_pane_t4

0xd08f,	// (0x000923e9) main_cam5_pane_t5_ParamLimits

0xd08f,	// (0x000923e9) main_cam5_pane_t5

0xd0a1,	// (0x000923fb) main_cam5_pane_t6_ParamLimits

0xd0a1,	// (0x000923fb) main_cam5_pane_t6

0xd0b3,	// (0x0009240d) main_cam5_pane_t7_ParamLimits

0xd0b3,	// (0x0009240d) main_cam5_pane_t7

0xd0c5,	// (0x0009241f) main_cam5_pane_t8_ParamLimits

0xd0c5,	// (0x0009241f) main_cam5_pane_t8

0xd0e1,	// (0x0009243b) main_cam5_pane_t9_ParamLimits

0xd0e1,	// (0x0009243b) main_cam5_pane_t9

0xd0f3,	// (0x0009244d) main_cam5_pane_t10_ParamLimits

0xd0f3,	// (0x0009244d) main_cam5_pane_t10

0xd105,	// (0x0009245f) main_cam5_pane_t11_ParamLimits

0xd105,	// (0x0009245f) main_cam5_pane_t11

0xd117,	// (0x00092471) main_cam5_pane_t12_ParamLimits

0xd117,	// (0x00092471) main_cam5_pane_t12

0xd12c,	// (0x00092486) main_cam5_pane_t13_ParamLimits

0xd12c,	// (0x00092486) main_cam5_pane_t13

0x000c,

0xf9d8,	// (0x00094d32) main_cam5_pane_t_ParamLimits

0xf9d8,	// (0x00094d32) main_cam5_pane_t

0x28e1,	// (0x00087c3b) popup_scut_keymap_window_ParamLimits

0x28e1,	// (0x00087c3b) popup_scut_keymap_window

0x7f75,	// (0x0008d2cf) aid_size_cell_brow_shortcut

0x32e3,	// (0x0008863d) bg_popup_window_pane_cp010

0x7f81,	// (0x0008d2db) grid_scut_pane

0x7f8b,	// (0x0008d2e5) cell_scut_pane_ParamLimits

0x7f8b,	// (0x0008d2e5) cell_scut_pane

0x7fa0,	// (0x0008d2fa) cell_scut_pane_g1

0xd149,	// (0x000924a3) cell_scut_pane_t1

0xd158,	// (0x000924b2) cell_scut_pane_t2

0x7fa9,	// (0x0008d303) cell_scut_pane_t3

0x0002,

0xf9f3,	// (0x00094d4d) cell_scut_pane_t

0x6156,	// (0x0008b4b0) main_mup3_pane_g8_ParamLimits

0x6156,	// (0x0008b4b0) main_mup3_pane_g8

0x7299,	// (0x0008c5f3) area_vitu2_query_pane_ParamLimits

0x7299,	// (0x0008c5f3) area_vitu2_query_pane

0x7d1f,	// (0x0008d079) input_focus_pane_cp08

0xd167,	// (0x000924c1) area_vitu2_query_pane_g1

0x7fb7,	// (0x0008d311) area_vitu2_query_pane_g2

0x0001,

0xf9fa,	// (0x00094d54) area_vitu2_query_pane_g

0x7fc6,	// (0x0008d320) area_vitu2_query_pane_t1_ParamLimits

0x7fc6,	// (0x0008d320) area_vitu2_query_pane_t1

0x7fd8,	// (0x0008d332) area_vitu2_query_pane_t2_ParamLimits

0x7fd8,	// (0x0008d332) area_vitu2_query_pane_t2

0x7fea,	// (0x0008d344) area_vitu2_query_pane_t3_ParamLimits

0x7fea,	// (0x0008d344) area_vitu2_query_pane_t3

0xd173,	// (0x000924cd) area_vitu2_query_pane_t4_ParamLimits

0xd173,	// (0x000924cd) area_vitu2_query_pane_t4

0xd19b,	// (0x000924f5) area_vitu2_query_pane_t5_ParamLimits

0xd19b,	// (0x000924f5) area_vitu2_query_pane_t5

0xd1c3,	// (0x0009251d) area_vitu2_query_pane_t6_ParamLimits

0xd1c3,	// (0x0009251d) area_vitu2_query_pane_t6

0x0006,

0xf9ff,	// (0x00094d59) area_vitu2_query_pane_t_ParamLimits

0xf9ff,	// (0x00094d59) area_vitu2_query_pane_t

0x8012,	// (0x0008d36c) bg_button_pane_cp018

0x801e,	// (0x0008d378) bg_button_pane_cp021

0x802a,	// (0x0008d384) bg_button_pane_cp022

0x8049,	// (0x0008d3a3) input_focus_pane_cp09

0x4cfc,	// (0x0008a056) aid_size_touch_mv_arrow_left

0xb259,	// (0x000905b3) aid_size_touch_mv_arrow_right

0x7864,	// (0x0008cbbe) main_cset_slider_pane_g16_ParamLimits

0x7864,	// (0x0008cbbe) main_cset_slider_pane_g16

0x7870,	// (0x0008cbca) main_cset_slider_pane_g17_ParamLimits

0x7870,	// (0x0008cbca) main_cset_slider_pane_g17

0x7f60,	// (0x0008d2ba) cell_cam4_burst_pane_g1_ParamLimits

0x0574,	// (0x000858ce) compa_mode_pane

0x7a69,	// (0x0008cdc3) popup_vtel_slider_window_g3_ParamLimits

0x7a69,	// (0x0008cdc3) popup_vtel_slider_window_g3

0x7a80,	// (0x0008cdda) popup_vtel_slider_window_g4_ParamLimits

0x7a80,	// (0x0008cdda) popup_vtel_slider_window_g4

0x7a97,	// (0x0008cdf1) popup_vtel_slider_window_t1_ParamLimits

0x7a97,	// (0x0008cdf1) popup_vtel_slider_window_t1

0xaeb3,	// (0x0009020d) main_cl_pane

0xc7ad,	// (0x00091b07) popup_imed_adjust2_window_ParamLimits

0xb487,	// (0x000907e1) bg_tb_trans_pane_cp05_ParamLimits

0x14c8,	// (0x00086822) popup_imed_adjust2_window_g1_ParamLimits

0x14d7,	// (0x00086831) popup_imed_adjust2_window_g2_ParamLimits

0x14d7,	// (0x00086831) popup_imed_adjust2_window_g2

0x14e3,	// (0x0008683d) popup_imed_adjust2_window_g3_ParamLimits

0x14e3,	// (0x0008683d) popup_imed_adjust2_window_g3

0x0002,

0xf766,	// (0x00094ac0) popup_imed_adjust2_window_g_ParamLimits

0xf766,	// (0x00094ac0) popup_imed_adjust2_window_g

0x14ef,	// (0x00086849) popup_imed_adjust2_window_t1_ParamLimits

0x1507,	// (0x00086861) slider_imed_adjust_pane_ParamLimits

0x151b,	// (0x00086875) slider_imed_adjust_pane_g1_ParamLimits

0x152b,	// (0x00086885) slider_imed_adjust_pane_g2_ParamLimits

0x153b,	// (0x00086895) slider_imed_adjust_pane_g3_ParamLimits

0x154c,	// (0x000868a6) slider_imed_adjust_pane_g4_ParamLimits

0xf76d,	// (0x00094ac7) slider_imed_adjust_pane_g_ParamLimits

0x706f,	// (0x0008c3c9) aid_touch_area_cam4_ParamLimits

0x706f,	// (0x0008c3c9) aid_touch_area_cam4

0xee56,	// (0x000941b0) battery_pane_cp01

0x7107,	// (0x0008c461) main_camera4_pane_g6_ParamLimits

0x7107,	// (0x0008c461) main_camera4_pane_g6

0x7128,	// (0x0008c482) main_camera4_pane_t2_ParamLimits

0x7128,	// (0x0008c482) main_camera4_pane_t2

0x0001,

0xf874,	// (0x00094bce) main_camera4_pane_t_ParamLimits

0xf874,	// (0x00094bce) main_camera4_pane_t

0x7156,	// (0x0008c4b0) aid_touch_area_vid4_ParamLimits

0x7156,	// (0x0008c4b0) aid_touch_area_vid4

0x7198,	// (0x0008c4f2) main_video4_pane_g5_ParamLimits

0x7198,	// (0x0008c4f2) main_video4_pane_g5

0x71b9,	// (0x0008c513) vid4_progress_pane_ParamLimits

0x71b9,	// (0x0008c513) vid4_progress_pane

0xce5e,	// (0x000921b8) main_cset_slider_pane_g18_ParamLimits

0xce5e,	// (0x000921b8) main_cset_slider_pane_g18

0xd037,	// (0x00092391) cell_cam4_burst_pane_g2_ParamLimits

0xd037,	// (0x00092391) cell_cam4_burst_pane_g2

0x0001,

0xf9d3,	// (0x00094d2d) cell_cam4_burst_pane_g_ParamLimits

0xf9d3,	// (0x00094d2d) cell_cam4_burst_pane_g

0x0ce8,	// (0x00086042) bg_cl_pane_ParamLimits

0x0ce8,	// (0x00086042) bg_cl_pane

0x8059,	// (0x0008d3b3) cl_header_pane_ParamLimits

0x8059,	// (0x0008d3b3) cl_header_pane

0x806d,	// (0x0008d3c7) cl_listscroll_pane_ParamLimits

0x806d,	// (0x0008d3c7) cl_listscroll_pane

0xd20f,	// (0x00092569) bg_cl_pane_g1

0xd217,	// (0x00092571) bg_cl_pane_g2

0xd21f,	// (0x00092579) bg_cl_pane_g3

0xd227,	// (0x00092581) bg_cl_pane_g4

0xd22f,	// (0x00092589) bg_cl_pane_g5

0xd237,	// (0x00092591) bg_cl_pane_g6

0xd23f,	// (0x00092599) bg_cl_pane_g7

0xd247,	// (0x000925a1) bg_cl_pane_g8

0xd24f,	// (0x000925a9) bg_cl_pane_g9

0x0008,

0xfa0e,	// (0x00094d68) bg_cl_pane_g

0x807d,	// (0x0008d3d7) aid_height_cl_leading_ParamLimits

0x807d,	// (0x0008d3d7) aid_height_cl_leading

0x8089,	// (0x0008d3e3) aid_height_cl_text_ParamLimits

0x8089,	// (0x0008d3e3) aid_height_cl_text

0x334c,	// (0x000886a6) bg_cl_header_pane_ParamLimits

0x334c,	// (0x000886a6) bg_cl_header_pane

0x80a8,	// (0x0008d402) cl_header_pane_g1_ParamLimits

0x80a8,	// (0x0008d402) cl_header_pane_g1

0x80be,	// (0x0008d418) cl_header_pane_t1_ParamLimits

0x80be,	// (0x0008d418) cl_header_pane_t1

0xd257,	// (0x000925b1) cl_list_pane

0xd260,	// (0x000925ba) hc_scroll_pane_cp01

0x3b0d,	// (0x00088e67) bg_cl_header_pane_g1

0xcd05,	// (0x0009205f) bg_cl_header_pane_g2

0x3b2d,	// (0x00088e87) bg_cl_header_pane_g3

0xcd15,	// (0x0009206f) bg_cl_header_pane_g4

0xcd0d,	// (0x00092067) bg_cl_header_pane_g5

0xcf45,	// (0x0009229f) bg_cl_header_pane_g6

0xcd2d,	// (0x00092087) bg_cl_header_pane_g7

0xcd35,	// (0x0009208f) bg_cl_header_pane_g8

0xcd25,	// (0x0009207f) bg_cl_header_pane_g9

0x0008,

0xfa21,	// (0x00094d7b) bg_cl_header_pane_g

0x80d7,	// (0x0008d431) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x80d7,	// (0x0008d431) hc_cl_list_double_graphic_heading_pane

0x80e7,	// (0x0008d441) hc_cl_list_single_graphic_pane_ParamLimits

0x80e7,	// (0x0008d441) hc_cl_list_single_graphic_pane

0x80fa,	// (0x0008d454) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x80fa,	// (0x0008d454) hc_cl_list_single_graphic_pane_g1

0x8106,	// (0x0008d460) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8106,	// (0x0008d460) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa34,	// (0x00094d8e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa34,	// (0x00094d8e) hc_cl_list_single_graphic_pane_g

0x811a,	// (0x0008d474) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x811a,	// (0x0008d474) hc_cl_list_single_graphic_pane_t1

0x80fa,	// (0x0008d454) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x80fa,	// (0x0008d454) hc_cl_list_double_graphic_heading_pane_g1

0x812f,	// (0x0008d489) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x812f,	// (0x0008d489) hc_cl_list_double_graphic_heading_pane_g2

0x8143,	// (0x0008d49d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8143,	// (0x0008d49d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa39,	// (0x00094d93) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa39,	// (0x00094d93) hc_cl_list_double_graphic_heading_pane_g

0x8157,	// (0x0008d4b1) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8157,	// (0x0008d4b1) hc_cl_list_double_graphic_heading_pane_t1

0x816c,	// (0x0008d4c6) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x816c,	// (0x0008d4c6) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa40,	// (0x00094d9a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa40,	// (0x00094d9a) hc_cl_list_double_graphic_heading_pane_t

0xefa6,	// (0x00094300) vid4_progress_pane_g1

0xefb5,	// (0x0009430f) vid4_progress_pane_g2

0xefc4,	// (0x0009431e) vid4_progress_pane_g3

0xefd3,	// (0x0009432d) vid4_progress_pane_g4

0x0004,

0xfa45,	// (0x00094d9f) vid4_progress_pane_g

0xefeb,	// (0x00094345) vid4_progress_pane_t1

0xf001,	// (0x0009435b) vid4_progress_pane_t2

0x0002,

0xfa50,	// (0x00094daa) vid4_progress_pane_t

0xf02b,	// (0x00094385) wait_bar_pane_cp07

0xca85,	// (0x00091ddf) blid_firmament_pane_ParamLimits

0xcac6,	// (0x00091e20) popup_blid_sat_info2_window_g1

0xcaea,	// (0x00091e44) popup_blid_sat_info2_window_t3

0xcaf8,	// (0x00091e52) popup_blid_sat_info2_window_t4

0x0ebf,	// (0x00086219) popup_blid_sat_info2_window_t5

0x0ecd,	// (0x00086227) popup_blid_sat_info2_window_t6

0x0edd,	// (0x00086237) popup_blid_sat_info2_window_t7

0x0eeb,	// (0x00086245) popup_blid_sat_info2_window_t8

0x0ef9,	// (0x00086253) popup_blid_sat_info2_window_t9

0x0f07,	// (0x00086261) popup_blid_sat_info2_window_t10

0x0fc2,	// (0x0008631c) aid_firma_cardinal_ParamLimits

0x0fd6,	// (0x00086330) blid_firmament_pane_t1_ParamLimits

0x0fed,	// (0x00086347) blid_firmament_pane_t2_ParamLimits

0x1004,	// (0x0008635e) blid_firmament_pane_t3_ParamLimits

0x101b,	// (0x00086375) blid_firmament_pane_t4_ParamLimits

0xf65f,	// (0x000949b9) blid_firmament_pane_t_ParamLimits

0x1032,	// (0x0008638c) blid_sat_info_pane_ParamLimits

0xaea5,	// (0x000901ff) main_cam_set_pane_ParamLimits

0x6908,	// (0x0008bc62) aid_size_cell_colour_35_ParamLimits

0x6928,	// (0x0008bc82) aid_size_cell_colour_112_ParamLimits

0x6948,	// (0x0008bca2) aid_size_cell_effect_ParamLimits

0xb487,	// (0x000907e1) bg_tb_trans_pane_cp02_ParamLimits

0x4841,	// (0x00089b9b) heading_imed_pane_ParamLimits

0x6968,	// (0x0008bcc2) listscroll_imed_pane_ParamLimits

0xbe44,	// (0x0009119e) popup_call2_audio_first_window_g5_ParamLimits

0xbe44,	// (0x0009119e) popup_call2_audio_first_window_g5

0x6d3a,	// (0x0008c094) aid_size_touch_image3_arrow_left_ParamLimits

0x6d3a,	// (0x0008c094) aid_size_touch_image3_arrow_left

0x6d5a,	// (0x0008c0b4) aid_size_touch_image3_arrow_right_ParamLimits

0x6d5a,	// (0x0008c0b4) aid_size_touch_image3_arrow_right

0xf016,	// (0x00094370) vid4_progress_pane_t3

0x6af1,	// (0x0008be4b) main_hwr_training_symbol_option_pane_ParamLimits

0x6af1,	// (0x0008be4b) main_hwr_training_symbol_option_pane

0x16d8,	// (0x00086a32) popup_hwr_training_preview_window_ParamLimits

0x16d8,	// (0x00086a32) popup_hwr_training_preview_window

0x6b0d,	// (0x0008be67) hwr_training_navi_pane_g5_ParamLimits

0x6b0d,	// (0x0008be67) hwr_training_navi_pane_g5

0xccf3,	// (0x0009204d) popup_char_count_window

0xaea5,	// (0x000901ff) bg_popup_sub_pane_cp20_ParamLimits

0x7ba4,	// (0x0008cefe) list_vitu2_match_list_pane_ParamLimits

0x7bb3,	// (0x0008cf0d) vitu2_page_scroll_pane_ParamLimits

0x7bb3,	// (0x0008cf0d) vitu2_page_scroll_pane

0xd294,	// (0x000925ee) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd294,	// (0x000925ee) list_single_hwr_training_symbol_option_pane

0xd2a7,	// (0x00092601) list_single_hwr_training_symbol_option_pane_g1

0xd2af,	// (0x00092609) list_single_hwr_training_symbol_option_pane_t1

0xd2bd,	// (0x00092617) bg_button_pane_cp023

0xd2c6,	// (0x00092620) bg_button_pane_cp024

0x81b0,	// (0x0008d50a) vitu2_page_scroll_pane_g1

0x81b8,	// (0x0008d512) vitu2_page_scroll_pane_g2

0x0001,

0xfa57,	// (0x00094db1) vitu2_page_scroll_pane_g

0x81c0,	// (0x0008d51a) vitu2_page_scroll_pane_t1

0x1061,	// (0x000863bb) popup_char_count_window_g1

0xd2f9,	// (0x00092653) popup_char_count_window_g2

0xd302,	// (0x0009265c) popup_char_count_window_g3

0x0002,

0xfa5c,	// (0x00094db6) popup_char_count_window_g

0xd30b,	// (0x00092665) popup_char_count_window_t1

0xaeb3,	// (0x0009020d) main_vded2_pane

0x14b6,	// (0x00086810) aid_size_cell_imed_line

0x14c0,	// (0x0008681a) grid_imed_line_width_pane

0xeef9,	// (0x00094253) vid4_indicators_pane_g4

0xd319,	// (0x00092673) cell_imed_line_width_pane_ParamLimits

0xd319,	// (0x00092673) cell_imed_line_width_pane

0xd32b,	// (0x00092685) cell_imed_line_width_pane_g1

0xd334,	// (0x0009268e) cell_imed_line_width_pane_g2

0x0001,

0xfa63,	// (0x00094dbd) cell_imed_line_width_pane_g

0x81cf,	// (0x0008d529) main_vded2_pane_g1_ParamLimits

0x81cf,	// (0x0008d529) main_vded2_pane_g1

0x81e5,	// (0x0008d53f) main_vded2_pane_g2_ParamLimits

0x81e5,	// (0x0008d53f) main_vded2_pane_g2

0x0001,

0xfa68,	// (0x00094dc2) main_vded2_pane_g_ParamLimits

0xfa68,	// (0x00094dc2) main_vded2_pane_g

0x81f5,	// (0x0008d54f) vded2_slider_pane_ParamLimits

0x81f5,	// (0x0008d54f) vded2_slider_pane

0x8208,	// (0x0008d562) aid_size_touch_vded2_end

0x8210,	// (0x0008d56a) aid_size_touch_vded2_playhead

0x8218,	// (0x0008d572) aid_size_touch_vded2_start

0x8220,	// (0x0008d57a) vded2_slider_bg_pane

0x8229,	// (0x0008d583) vded2_slider_pane_g1

0x8232,	// (0x0008d58c) vded2_slider_pane_g2

0x823a,	// (0x0008d594) vded2_slider_pane_g3

0x0002,

0xfa6d,	// (0x00094dc7) vded2_slider_pane_g

0x8243,	// (0x0008d59d) vded2_slider_bg_pane_g1

0x824c,	// (0x0008d5a6) vded2_slider_bg_pane_g2

0x8255,	// (0x0008d5af) vded2_slider_bg_pane_g3

0x0002,

0xfa74,	// (0x00094dce) vded2_slider_bg_pane_g

0x506d,	// (0x0008a3c7) aid_postcard_touch_down_pane_ParamLimits

0x506d,	// (0x0008a3c7) aid_postcard_touch_down_pane

0x507f,	// (0x0008a3d9) aid_postcard_touch_up_pane_ParamLimits

0x507f,	// (0x0008a3d9) aid_postcard_touch_up_pane

0xaeb3,	// (0x0009020d) main_blid2_pane

0xc795,	// (0x00091aef) popup_blid2_search_window

0x0574,	// (0x000858ce) blid2_gps_pane

0x0574,	// (0x000858ce) blid2_navig_pane

0x0574,	// (0x000858ce) blid2_search_pane

0x0574,	// (0x000858ce) blid2_tripm_pane

0x825e,	// (0x0008d5b8) blid2_search_pane_g1_ParamLimits

0x825e,	// (0x0008d5b8) blid2_search_pane_g1

0x8272,	// (0x0008d5cc) blid2_search_pane_t1_ParamLimits

0x8272,	// (0x0008d5cc) blid2_search_pane_t1

0x8284,	// (0x0008d5de) aid_size_cell_blid2_gps_ParamLimits

0x8284,	// (0x0008d5de) aid_size_cell_blid2_gps

0x829c,	// (0x0008d5f6) blid2_gps_pane_g1_ParamLimits

0x829c,	// (0x0008d5f6) blid2_gps_pane_g1

0x82b0,	// (0x0008d60a) grid_blid2_satellite_pane_ParamLimits

0x82b0,	// (0x0008d60a) grid_blid2_satellite_pane

0x82c4,	// (0x0008d61e) blid2_navig_pane_g1_ParamLimits

0x82c4,	// (0x0008d61e) blid2_navig_pane_g1

0x82d0,	// (0x0008d62a) blid2_navig_pane_t1_ParamLimits

0x82d0,	// (0x0008d62a) blid2_navig_pane_t1

0x82e9,	// (0x0008d643) blid2_navig_pane_t2_ParamLimits

0x82e9,	// (0x0008d643) blid2_navig_pane_t2

0x0001,

0xfa7b,	// (0x00094dd5) blid2_navig_pane_t_ParamLimits

0xfa7b,	// (0x00094dd5) blid2_navig_pane_t

0x8302,	// (0x0008d65c) blid2_navig_ring_pane_ParamLimits

0x8302,	// (0x0008d65c) blid2_navig_ring_pane

0x8317,	// (0x0008d671) blid2_speed_pane_ParamLimits

0x8317,	// (0x0008d671) blid2_speed_pane

0x8323,	// (0x0008d67d) blid2_tripm_pane_g1_ParamLimits

0x8323,	// (0x0008d67d) blid2_tripm_pane_g1

0x8338,	// (0x0008d692) blid2_tripm_pane_g2_ParamLimits

0x8338,	// (0x0008d692) blid2_tripm_pane_g2

0x834c,	// (0x0008d6a6) blid2_tripm_pane_g3_ParamLimits

0x834c,	// (0x0008d6a6) blid2_tripm_pane_g3

0x8360,	// (0x0008d6ba) blid2_tripm_pane_g4_ParamLimits

0x8360,	// (0x0008d6ba) blid2_tripm_pane_g4

0x8374,	// (0x0008d6ce) blid2_tripm_pane_g5_ParamLimits

0x8374,	// (0x0008d6ce) blid2_tripm_pane_g5

0x0005,

0xfa80,	// (0x00094dda) blid2_tripm_pane_g_ParamLimits

0xfa80,	// (0x00094dda) blid2_tripm_pane_g

0x8396,	// (0x0008d6f0) blid2_tripm_pane_t1_ParamLimits

0x8396,	// (0x0008d6f0) blid2_tripm_pane_t1

0x83ad,	// (0x0008d707) blid2_tripm_pane_t2_ParamLimits

0x83ad,	// (0x0008d707) blid2_tripm_pane_t2

0x83c4,	// (0x0008d71e) blid2_tripm_pane_t3_ParamLimits

0x83c4,	// (0x0008d71e) blid2_tripm_pane_t3

0x0003,

0xfa8d,	// (0x00094de7) blid2_tripm_pane_t_ParamLimits

0xfa8d,	// (0x00094de7) blid2_tripm_pane_t

0x8407,	// (0x0008d761) cell_blid2_satellite_pane_ParamLimits

0x8407,	// (0x0008d761) cell_blid2_satellite_pane

0x841f,	// (0x0008d779) cell_blid2_satellite_pane_g1

0xd33c,	// (0x00092696) cell_blid2_satellite_pane_t1

0x34de,	// (0x00088838) blid2_speed_pane_g1

0xd34a,	// (0x000926a4) blid2_speed_pane_t1

0xd358,	// (0x000926b2) blid2_speed_pane_t2

0x0001,

0xfa96,	// (0x00094df0) blid2_speed_pane_t

0x34de,	// (0x00088838) blid2_navig_ring_pane_g1

0x8428,	// (0x0008d782) blid2_navig_ring_pane_g2

0x8430,	// (0x0008d78a) blid2_navig_ring_pane_g3

0x8438,	// (0x0008d792) blid2_navig_ring_pane_g4

0x8440,	// (0x0008d79a) blid2_navig_ring_pane_g5

0x0004,

0xfa9b,	// (0x00094df5) blid2_navig_ring_pane_g

0x0574,	// (0x000858ce) bg_popup_window_pane_cp011

0xd366,	// (0x000926c0) popup_blid2_search_window_g1

0xd36e,	// (0x000926c8) popup_blid2_search_window_t1

0xd37c,	// (0x000926d6) popup_blid2_search_window_t2

0x0001,

0xfaa6,	// (0x00094e00) popup_blid2_search_window_t

0x39dc,	// (0x00088d36) main_browser_pane_g1

0x0ce8,	// (0x00086042) main_browser_pane_ParamLimits

0xaea5,	// (0x000901ff) bg_button_pane_cp011_ParamLimits

0x74a2,	// (0x0008c7fc) cell_vitu2_function_pane_g1_ParamLimits

0xb487,	// (0x000907e1) bg_popup_sub_pane_cp22_ParamLimits

0x7d1f,	// (0x0008d079) input_focus_pane_cp08_ParamLimits

0x7d3a,	// (0x0008d094) popup_vitu2_query_button_pane_ParamLimits

0x7d3a,	// (0x0008d094) popup_vitu2_query_button_pane

0x7d49,	// (0x0008d0a3) popup_vitu2_query_input_button_pane

0xcf8d,	// (0x000922e7) popup_vitu2_query_window_g1_ParamLimits

0x7d51,	// (0x0008d0ab) popup_vitu2_query_window_g2_ParamLimits

0xf9a7,	// (0x00094d01) popup_vitu2_query_window_g_ParamLimits

0x0574,	// (0x000858ce) bg_button_pane_cp026

0x8448,	// (0x0008d7a2) popup_vitu2_query_input_button_pane_g1

0x0574,	// (0x000858ce) bg_button_pane_cp025

0xd38a,	// (0x000926e4) popup_vitu2_query_button_pane_t1

0x5e72,	// (0x0008b1cc) main_mp3_pane_t6

0x5e80,	// (0x0008b1da) popup_slider_window_cp01

0xee7e,	// (0x000941d8) cam4_battery_pane

0xee7e,	// (0x000941d8) cam4_battery_pane_cp02

0xee7e,	// (0x000941d8) cam4_battery_pane_cp01

0xee7e,	// (0x000941d8) cam4_battery_pane_cp03

0x0eb5,	// (0x0008620f) cam4_battery_pane_g1

0x34de,	// (0x00088838) cam4_battery_pane_g2

0x0001,

0xfaab,	// (0x00094e05) cam4_battery_pane_g

0x0f15,	// (0x0008626f) popup_blid_sat_info2_window_t11

0x4cfc,	// (0x0008a056) aid_size_touch_mv_arrow_left_ParamLimits

0xb259,	// (0x000905b3) aid_size_touch_mv_arrow_right_ParamLimits

0xb2b2,	// (0x0009060c) navi_pane_g1_ParamLimits

0xb2be,	// (0x00090618) navi_pane_g2_ParamLimits

0x4d20,	// (0x0008a07a) navi_pane_g3_ParamLimits

0xf360,	// (0x000946ba) navi_pane_g_ParamLimits

0x4d3d,	// (0x0008a097) navi_pane_mv_t1_ParamLimits

0x6974,	// (0x0008bcce) grid_imed_effect_pane_ParamLimits

0x3624,	// (0x0008897e) aid_placing_vt_slider_lsc

0x3634,	// (0x0008898e) aid_placing_vt_slider_prt

0x334c,	// (0x000886a6) bg_tb_trans_pane_cp01_ParamLimits

0x1179,	// (0x000864d3) popup_image_details_window_g1_ParamLimits

0x118c,	// (0x000864e6) popup_image_details_window_g2_ParamLimits

0x11a1,	// (0x000864fb) popup_image_details_window_g3_ParamLimits

0x11a1,	// (0x000864fb) popup_image_details_window_g3

0xf69f,	// (0x000949f9) popup_image_details_window_g_ParamLimits

0x11b5,	// (0x0008650f) popup_image_details_window_t1_ParamLimits

0x11c7,	// (0x00086521) popup_image_details_window_t2_ParamLimits

0x11e0,	// (0x0008653a) popup_image_details_window_t3_ParamLimits

0x11f4,	// (0x0008654e) popup_image_details_window_t4_ParamLimits

0x120f,	// (0x00086569) popup_image_details_window_t5_ParamLimits

0xf6a6,	// (0x00094a00) popup_image_details_window_t_ParamLimits

0x8095,	// (0x0008d3ef) cl_header_name_pane_ParamLimits

0x8095,	// (0x0008d3ef) cl_header_name_pane

0x8450,	// (0x0008d7aa) cl_header_name_pane_t1_ParamLimits

0x8450,	// (0x0008d7aa) cl_header_name_pane_t1

0x8471,	// (0x0008d7cb) cl_header_name_pane_t2_ParamLimits

0x8471,	// (0x0008d7cb) cl_header_name_pane_t2

0x84b3,	// (0x0008d80d) cl_header_name_pane_t3_ParamLimits

0x84b3,	// (0x0008d80d) cl_header_name_pane_t3

0x0002,

0xfab0,	// (0x00094e0a) cl_header_name_pane_t_ParamLimits

0xfab0,	// (0x00094e0a) cl_header_name_pane_t

0xb34b,	// (0x000906a5) navi_pane_mv_g2_ParamLimits

0xccbe,	// (0x00092018) field_vitu2_entry_pane_g1_ParamLimits

0xccca,	// (0x00092024) field_vitu2_entry_pane_g2_ParamLimits

0xeb27,	// (0x00093e81) field_vitu2_entry_pane_g3_ParamLimits

0xeb27,	// (0x00093e81) field_vitu2_entry_pane_g3

0xf8a6,	// (0x00094c00) field_vitu2_entry_pane_g_ParamLimits

0x741e,	// (0x0008c778) cell_vitu2_itu_pane_g1_ParamLimits

0x7436,	// (0x0008c790) cell_vitu2_itu_pane_g2_ParamLimits

0x7436,	// (0x0008c790) cell_vitu2_itu_pane_g2

0x0001,

0xf8b2,	// (0x00094c0c) cell_vitu2_itu_pane_g_ParamLimits

0xf8b2,	// (0x00094c0c) cell_vitu2_itu_pane_g

0xaea5,	// (0x000901ff) bg_vkb2_func_pane_cp05_ParamLimits

0xaea5,	// (0x000901ff) bg_vkb2_func_pane_cp05

0xaea5,	// (0x000901ff) bg_vkb2_func_pane_cp03

0xaea5,	// (0x000901ff) bg_vkb2_func_pane_cp04

0xaea5,	// (0x000901ff) bg_vkb2_func_pane_cp10_ParamLimits

0xaea5,	// (0x000901ff) bg_vkb2_func_pane_cp10

0x8039,	// (0x0008d393) bg_vkb2_func_pane_cp08

0x8012,	// (0x0008d36c) bg_vkb2_func_pane_cp06

0x801e,	// (0x0008d378) bg_vkb2_func_pane_cp07

0xd2cf,	// (0x00092629) bg_vkb2_func_pane_cp11_ParamLimits

0xd2cf,	// (0x00092629) bg_vkb2_func_pane_cp11

0xd2e4,	// (0x0009263e) bg_vkb2_func_pane_cp12_ParamLimits

0xd2e4,	// (0x0009263e) bg_vkb2_func_pane_cp12

0x0574,	// (0x000858ce) bg_vkb2_func_pane_cp09

0xcd05,	// (0x0009205f) bg_vkb2_func_pane_g1

0x3b2d,	// (0x00088e87) bg_vkb2_func_pane_g2

0xcd0d,	// (0x00092067) bg_vkb2_func_pane_g3

0xcd15,	// (0x0009206f) bg_vkb2_func_pane_g4

0xcf45,	// (0x0009229f) bg_vkb2_func_pane_g5

0xcd2d,	// (0x00092087) bg_vkb2_func_pane_g6

0xcd35,	// (0x0009208f) bg_vkb2_func_pane_g7

0xcd25,	// (0x0009207f) bg_vkb2_func_pane_g8

0x3b0d,	// (0x00088e67) bg_vkb2_func_pane_g9

0x0008,

0xfab7,	// (0x00094e11) bg_vkb2_func_pane_g

0x8386,	// (0x0008d6e0) blid2_tripm_pane_g6_ParamLimits

0x8386,	// (0x0008d6e0) blid2_tripm_pane_g6

0xcba0,	// (0x00091efa) mp4_progress_pane_g1

0x83f5,	// (0x0008d74f) blid2_tripm_values_pane_ParamLimits

0x83f5,	// (0x0008d74f) blid2_tripm_values_pane

0x84e4,	// (0x0008d83e) blid2_tripm_values_pane_t1

0x84f2,	// (0x0008d84c) blid2_tripm_values_pane_t2

0x8500,	// (0x0008d85a) blid2_tripm_values_pane_t3

0x850e,	// (0x0008d868) blid2_tripm_values_pane_t4

0x851c,	// (0x0008d876) blid2_tripm_values_pane_t5

0x852a,	// (0x0008d884) blid2_tripm_values_pane_t6

0x8538,	// (0x0008d892) blid2_tripm_values_pane_t7

0x8546,	// (0x0008d8a0) blid2_tripm_values_pane_t8

0x8554,	// (0x0008d8ae) blid2_tripm_values_pane_t9

0x0008,

0xfaca,	// (0x00094e24) blid2_tripm_values_pane_t

0x3668,	// (0x000889c2) call_video_pane_t1_ParamLimits

0x3682,	// (0x000889dc) call_video_pane_t2_ParamLimits

0xf1fc,	// (0x00094556) call_video_pane_t_ParamLimits

0x4f8f,	// (0x0008a2e9) msg_header_pane_g1_ParamLimits

0xb544,	// (0x0009089e) msg_header_pane_g2_ParamLimits

0xb544,	// (0x0009089e) msg_header_pane_g2

0x0001,

0xf403,	// (0x0009475d) msg_header_pane_g_ParamLimits

0xf403,	// (0x0009475d) msg_header_pane_g

0x0ce8,	// (0x00086042) main_clock2_pane_ParamLimits

0x668b,	// (0x0008b9e5) grid_clock2_toolbar_pane_ParamLimits

0x668b,	// (0x0008b9e5) grid_clock2_toolbar_pane

0x668b,	// (0x0008b9e5) listscroll_clock2_pane_ParamLimits

0x668b,	// (0x0008b9e5) listscroll_clock2_pane

0x676e,	// (0x0008bac8) main_clock2_pane_t3_ParamLimits

0x676e,	// (0x0008bac8) main_clock2_pane_t3

0x6790,	// (0x0008baea) main_clock2_pane_t4_ParamLimits

0x6790,	// (0x0008baea) main_clock2_pane_t4

0xd398,	// (0x000926f2) cell_clock2_toolbar_pane

0xd3a0,	// (0x000926fa) cell_clock2_toolbar_pane_cp01

0xd3a0,	// (0x000926fa) cell_clock2_toolbar_pane_cp02

0xd3a8,	// (0x00092702) cell_clock2_toolbar_pane_cp03

0xd3b0,	// (0x0009270a) list_clock2_pane

0xd3b8,	// (0x00092712) scroll_pane_cp10

0xd3c0,	// (0x0009271a) list_single_clock2_pane_ParamLimits

0xd3c0,	// (0x0009271a) list_single_clock2_pane

0x32e3,	// (0x0008863d) list_highlight_pane_cp08

0xd3cd,	// (0x00092727) list_single_clock2_pane_t1

0xd3db,	// (0x00092735) list_single_clock2_pane_t2

0x0001,

0xfadd,	// (0x00094e37) list_single_clock2_pane_t

0x0574,	// (0x000858ce) bg_button_pane_cp10

0xd3e9,	// (0x00092743) cell_clock2_toolbar_pane_g1

0x5001,	// (0x0008a35b) aid_main_viewer_pane_g1_ParamLimits

0x5001,	// (0x0008a35b) aid_main_viewer_pane_g1

0x500d,	// (0x0008a367) aid_main_viewer_pane_g2_ParamLimits

0x500d,	// (0x0008a367) aid_main_viewer_pane_g2

0x5019,	// (0x0008a373) aid_main_viewer_pane_g3_ParamLimits

0x5019,	// (0x0008a373) aid_main_viewer_pane_g3

0x5028,	// (0x0008a382) aid_main_viewer_pane_g4_ParamLimits

0x5028,	// (0x0008a382) aid_main_viewer_pane_g4

0x0003,

0xf414,	// (0x0009476e) aid_main_viewer_pane_g_ParamLimits

0xf414,	// (0x0009476e) aid_main_viewer_pane_g

0xaea5,	// (0x000901ff) main_calc_pane_ParamLimits

0x5871,	// (0x0008abcb) main_dialer2_pane_ParamLimits

0xaeb3,	// (0x0009020d) main_cam6_pane

0xaeb3,	// (0x0009020d) main_vid6_pane

0x6697,	// (0x0008b9f1) listscroll_gen_pane_cp06_ParamLimits

0x6697,	// (0x0008b9f1) listscroll_gen_pane_cp06

0x67b1,	// (0x0008bb0b) main_clock2_pane_t5_ParamLimits

0x67b1,	// (0x0008bb0b) main_clock2_pane_t5

0x6809,	// (0x0008bb63) aid_call2_pane_cp10_ParamLimits

0x681b,	// (0x0008bb75) aid_call_pane_cp10_ParamLimits

0xb24d,	// (0x000905a7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb24d,	// (0x000905a7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x682d,	// (0x0008bb87) popup_clock_analogue_window_cp10_g3_ParamLimits

0x682d,	// (0x0008bb87) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb24d,	// (0x000905a7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf75b,	// (0x00094ab5) popup_clock_analogue_window_cp10_g_ParamLimits

0x683f,	// (0x0008bb99) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcc00,	// (0x00091f5a) cell_dialer2_keypad_pane_g2_ParamLimits

0xcc00,	// (0x00091f5a) cell_dialer2_keypad_pane_g2

0x0001,

0xf845,	// (0x00094b9f) cell_dialer2_keypad_pane_g_ParamLimits

0xf845,	// (0x00094b9f) cell_dialer2_keypad_pane_g

0x6d03,	// (0x0008c05d) cell_dialer2_keypad_pane_t1

0x775e,	// (0x0008cab8) main_cset_text2_pane_ParamLimits

0x775e,	// (0x0008cab8) main_cset_text2_pane

0xd167,	// (0x000924c1) area_vitu2_query_pane_g1_ParamLimits

0x7fb7,	// (0x0008d311) area_vitu2_query_pane_g2_ParamLimits

0xf9fa,	// (0x00094d54) area_vitu2_query_pane_g_ParamLimits

0xd1eb,	// (0x00092545) area_vitu2_query_pane_t7_ParamLimits

0xd1eb,	// (0x00092545) area_vitu2_query_pane_t7

0x8012,	// (0x0008d36c) bg_button_pane_cp018_ParamLimits

0x801e,	// (0x0008d378) bg_button_pane_cp021_ParamLimits

0x802a,	// (0x0008d384) bg_button_pane_cp022_ParamLimits

0x8039,	// (0x0008d393) bg_vkb2_func_pane_cp08_ParamLimits

0x8012,	// (0x0008d36c) bg_vkb2_func_pane_cp06_ParamLimits

0x801e,	// (0x0008d378) bg_vkb2_func_pane_cp07_ParamLimits

0x8049,	// (0x0008d3a3) input_focus_pane_cp09_ParamLimits

0xf03b,	// (0x00094395) cam6_autofocus_pane_ParamLimits

0xf03b,	// (0x00094395) cam6_autofocus_pane

0x8562,	// (0x0008d8bc) cam6_image_uncrop_pane_ParamLimits

0x8562,	// (0x0008d8bc) cam6_image_uncrop_pane

0x8570,	// (0x0008d8ca) cam6_indi_pane_ParamLimits

0x8570,	// (0x0008d8ca) cam6_indi_pane

0x8586,	// (0x0008d8e0) cam6_mode_pane_ParamLimits

0x8586,	// (0x0008d8e0) cam6_mode_pane

0x8598,	// (0x0008d8f2) cam6_timer_pane_ParamLimits

0x8598,	// (0x0008d8f2) cam6_timer_pane

0x85a4,	// (0x0008d8fe) cam6_zoom_pane_ParamLimits

0x85a4,	// (0x0008d8fe) cam6_zoom_pane

0x85b1,	// (0x0008d90b) cam6_mode_pane_g1_ParamLimits

0x85b1,	// (0x0008d90b) cam6_mode_pane_g1

0x85c1,	// (0x0008d91b) cam6_mode_pane_g2_ParamLimits

0x85c1,	// (0x0008d91b) cam6_mode_pane_g2

0x85d1,	// (0x0008d92b) cam6_mode_pane_g3_ParamLimits

0x85d1,	// (0x0008d92b) cam6_mode_pane_g3

0x85e1,	// (0x0008d93b) cam6_mode_pane_g4_ParamLimits

0x85e1,	// (0x0008d93b) cam6_mode_pane_g4

0x0003,

0xfae2,	// (0x00094e3c) cam6_mode_pane_g_ParamLimits

0xfae2,	// (0x00094e3c) cam6_mode_pane_g

0x1770,	// (0x00086aca) bg_tb_trans_pane_cp08_ParamLimits

0x1770,	// (0x00086aca) bg_tb_trans_pane_cp08

0xd3f1,	// (0x0009274b) cam6_battery_pane_ParamLimits

0xd3f1,	// (0x0009274b) cam6_battery_pane

0xd407,	// (0x00092761) cam6_indi_pane_g1_ParamLimits

0xd407,	// (0x00092761) cam6_indi_pane_g1

0xd419,	// (0x00092773) cam6_indi_pane_g2_ParamLimits

0xd419,	// (0x00092773) cam6_indi_pane_g2

0xd42b,	// (0x00092785) cam6_indi_pane_g3_ParamLimits

0xd42b,	// (0x00092785) cam6_indi_pane_g3

0x0002,

0xfaeb,	// (0x00094e45) cam6_indi_pane_g_ParamLimits

0xfaeb,	// (0x00094e45) cam6_indi_pane_g

0xd43d,	// (0x00092797) cam6_indi_pane_t1_ParamLimits

0xd43d,	// (0x00092797) cam6_indi_pane_t1

0x721b,	// (0x0008c575) cam6_autofocus_pane_g1

0x7213,	// (0x0008c56d) cam6_autofocus_pane_g2

0x722b,	// (0x0008c585) cam6_autofocus_pane_g3

0x7223,	// (0x0008c57d) cam6_autofocus_pane_g4

0x0003,

0xfaf2,	// (0x00094e4c) cam6_autofocus_pane_g

0xd463,	// (0x000927bd) cam6_timer_pane_g1

0xd46b,	// (0x000927c5) cam6_timer_pane_t1

0xd479,	// (0x000927d3) cam6_zoom_cont_pane

0xd481,	// (0x000927db) cam6_zoom_pane_g1

0xd48a,	// (0x000927e4) cam6_zoom_pane_g2

0x85f1,	// (0x0008d94b) cam6_zoom_pane_g3

0x0002,

0xfafb,	// (0x00094e55) cam6_zoom_pane_g

0x34de,	// (0x00088838) cam6_battery_pane_g1

0x34de,	// (0x00088838) cam6_battery_pane_g2

0x0001,

0xf3c4,	// (0x0009471e) cam6_battery_pane_g

0xd481,	// (0x000927db) cam6_zoom_cont_pane_g1

0xd48a,	// (0x000927e4) cam6_zoom_cont_pane_g2

0xd493,	// (0x000927ed) cam6_zoom_cont_pane_g3

0x0002,

0xfb02,	// (0x00094e5c) cam6_zoom_cont_pane_g

0x860f,	// (0x0008d969) cam6_mode_pane_cp_ParamLimits

0x860f,	// (0x0008d969) cam6_mode_pane_cp

0x8621,	// (0x0008d97b) cam6_zoom_pane_cp_ParamLimits

0x8621,	// (0x0008d97b) cam6_zoom_pane_cp

0x862d,	// (0x0008d987) vid6_image_uncrop_cif_pane_ParamLimits

0x862d,	// (0x0008d987) vid6_image_uncrop_cif_pane

0x863b,	// (0x0008d995) vid6_image_uncrop_nhd_pane_ParamLimits

0x863b,	// (0x0008d995) vid6_image_uncrop_nhd_pane

0x8648,	// (0x0008d9a2) vid6_image_uncrop_vga_pane_ParamLimits

0x8648,	// (0x0008d9a2) vid6_image_uncrop_vga_pane

0x8655,	// (0x0008d9af) vid6_image_uncrop_wvga_pane_ParamLimits

0x8655,	// (0x0008d9af) vid6_image_uncrop_wvga_pane

0x8662,	// (0x0008d9bc) vid6_indi_pane_ParamLimits

0x8662,	// (0x0008d9bc) vid6_indi_pane

0x1770,	// (0x00086aca) bg_tb_trans_pane_cp09_ParamLimits

0x1770,	// (0x00086aca) bg_tb_trans_pane_cp09

0xd4a7,	// (0x00092801) cam6_battery_pane_cp_ParamLimits

0xd4a7,	// (0x00092801) cam6_battery_pane_cp

0xd4b3,	// (0x0009280d) vid6_indi_pane_g1_ParamLimits

0xd4b3,	// (0x0009280d) vid6_indi_pane_g1

0xd4c5,	// (0x0009281f) vid6_indi_pane_g2_ParamLimits

0xd4c5,	// (0x0009281f) vid6_indi_pane_g2

0xd4d7,	// (0x00092831) vid6_indi_pane_g3_ParamLimits

0xd4d7,	// (0x00092831) vid6_indi_pane_g3

0xd4ec,	// (0x00092846) vid6_indi_pane_g4_ParamLimits

0xd4ec,	// (0x00092846) vid6_indi_pane_g4

0xd501,	// (0x0009285b) vid6_indi_pane_g5_ParamLimits

0xd501,	// (0x0009285b) vid6_indi_pane_g5

0x0004,

0xfb09,	// (0x00094e63) vid6_indi_pane_g_ParamLimits

0xfb09,	// (0x00094e63) vid6_indi_pane_g

0xd51b,	// (0x00092875) vid6_indi_pane_t1_ParamLimits

0xd51b,	// (0x00092875) vid6_indi_pane_t1

0xd531,	// (0x0009288b) vid6_indi_pane_t2_ParamLimits

0xd531,	// (0x0009288b) vid6_indi_pane_t2

0xd559,	// (0x000928b3) vid6_indi_pane_t3_ParamLimits

0xd559,	// (0x000928b3) vid6_indi_pane_t3

0xd581,	// (0x000928db) vid6_indi_pane_t4_ParamLimits

0xd581,	// (0x000928db) vid6_indi_pane_t4

0x0003,

0xfb14,	// (0x00094e6e) vid6_indi_pane_t_ParamLimits

0xfb14,	// (0x00094e6e) vid6_indi_pane_t

0xd5a5,	// (0x000928ff) wait_bar_pane_cp08

0x8679,	// (0x0008d9d3) main_cset_text2_pane_t1_ParamLimits

0x8679,	// (0x0008d9d3) main_cset_text2_pane_t1

0x85fa,	// (0x0008d954) listscroll_gen_pane_cp06_t1_ParamLimits

0x85fa,	// (0x0008d954) listscroll_gen_pane_cp06_t1

0xaeb3,	// (0x0009020d) main_cam6_set_pane

0xee70,	// (0x000941ca) bg_tb_trans_pane_cp06_ParamLimits

0xee86,	// (0x000941e0) cam4_indicators_pane_g1_ParamLimits

0xee96,	// (0x000941f0) cam4_indicators_pane_g2_ParamLimits

0xf882,	// (0x00094bdc) cam4_indicators_pane_g_ParamLimits

0xeeb6,	// (0x00094210) cam4_indicators_pane_t1_ParamLimits

0xaea5,	// (0x000901ff) bg_tb_trans_pane_cp07_ParamLimits

0xee86,	// (0x000941e0) vid4_indicators_pane_g1_ParamLimits

0xeed8,	// (0x00094232) vid4_indicators_pane_g2_ParamLimits

0xeee8,	// (0x00094242) vid4_indicators_pane_g3_ParamLimits

0xeef9,	// (0x00094253) vid4_indicators_pane_g4_ParamLimits

0xf894,	// (0x00094bee) vid4_indicators_pane_g_ParamLimits

0xef15,	// (0x0009426f) vid4_indicators_pane_t1_ParamLimits

0xefa6,	// (0x00094300) vid4_progress_pane_g1_ParamLimits

0xefb5,	// (0x0009430f) vid4_progress_pane_g2_ParamLimits

0xefc4,	// (0x0009431e) vid4_progress_pane_g3_ParamLimits

0xefd3,	// (0x0009432d) vid4_progress_pane_g4_ParamLimits

0xfa45,	// (0x00094d9f) vid4_progress_pane_g_ParamLimits

0xefeb,	// (0x00094345) vid4_progress_pane_t1_ParamLimits

0xf001,	// (0x0009435b) vid4_progress_pane_t2_ParamLimits

0xf016,	// (0x00094370) vid4_progress_pane_t3_ParamLimits

0xfa50,	// (0x00094daa) vid4_progress_pane_t_ParamLimits

0xf02b,	// (0x00094385) wait_bar_pane_cp07_ParamLimits

0x8694,	// (0x0008d9ee) main_cam6_set_pane_g2_ParamLimits

0x8694,	// (0x0008d9ee) main_cam6_set_pane_g2

0x86b6,	// (0x0008da10) main_cset6_listscroll_pane_ParamLimits

0x86b6,	// (0x0008da10) main_cset6_listscroll_pane

0x86d0,	// (0x0008da2a) main_cset6_slider_pane_ParamLimits

0x86d0,	// (0x0008da2a) main_cset6_slider_pane

0x86e6,	// (0x0008da40) main_cset6_text2_pane_ParamLimits

0x86e6,	// (0x0008da40) main_cset6_text2_pane

0xd5b5,	// (0x0009290f) main_cset6_text_pane

0xce21,	// (0x0009217b) main_cset_list_pane_copy1_ParamLimits

0xce21,	// (0x0009217b) main_cset_list_pane_copy1

0xce31,	// (0x0009218b) scroll_pane_cp028_copy1

0x86f4,	// (0x0008da4e) cset_list_set_pane_copy1

0x8706,	// (0x0008da60) aid_position_infowindow_above_copy1

0x870e,	// (0x0008da68) aid_position_infowindow_below_copy1

0x8716,	// (0x0008da70) cset_list_set_pane_g1_copy1

0x871e,	// (0x0008da78) cset_list_set_pane_g3_copy1_ParamLimits

0x871e,	// (0x0008da78) cset_list_set_pane_g3_copy1

0x872d,	// (0x0008da87) cset_list_set_pane_t1_copy1_ParamLimits

0x872d,	// (0x0008da87) cset_list_set_pane_t1_copy1

0x334c,	// (0x000886a6) list_highlight_pane_cp021_copy1_ParamLimits

0x334c,	// (0x000886a6) list_highlight_pane_cp021_copy1

0xd5bd,	// (0x00092917) cset6_slider_pane_ParamLimits

0xd5bd,	// (0x00092917) cset6_slider_pane

0xd5e9,	// (0x00092943) main_cset6_slider_pane_g1_ParamLimits

0xd5e9,	// (0x00092943) main_cset6_slider_pane_g1

0x8742,	// (0x0008da9c) main_cset6_slider_pane_g2_ParamLimits

0x8742,	// (0x0008da9c) main_cset6_slider_pane_g2

0xce46,	// (0x000921a0) main_cset6_slider_pane_g3_ParamLimits

0xce46,	// (0x000921a0) main_cset6_slider_pane_g3

0x781c,	// (0x0008cb76) main_cset6_slider_pane_g4_ParamLimits

0x781c,	// (0x0008cb76) main_cset6_slider_pane_g4

0x7864,	// (0x0008cbbe) main_cset6_slider_pane_g5_ParamLimits

0x7864,	// (0x0008cbbe) main_cset6_slider_pane_g5

0xce46,	// (0x000921a0) main_cset6_slider_pane_g7_ParamLimits

0xce46,	// (0x000921a0) main_cset6_slider_pane_g7

0xce52,	// (0x000921ac) main_cset6_slider_pane_g8_ParamLimits

0xce52,	// (0x000921ac) main_cset6_slider_pane_g8

0x7804,	// (0x0008cb5e) main_cset6_slider_pane_g9_ParamLimits

0x7804,	// (0x0008cb5e) main_cset6_slider_pane_g9

0x7810,	// (0x0008cb6a) main_cset6_slider_pane_g10_ParamLimits

0x7810,	// (0x0008cb6a) main_cset6_slider_pane_g10

0x781c,	// (0x0008cb76) main_cset6_slider_pane_g11_ParamLimits

0x781c,	// (0x0008cb76) main_cset6_slider_pane_g11

0x7828,	// (0x0008cb82) main_cset6_slider_pane_g12_ParamLimits

0x7828,	// (0x0008cb82) main_cset6_slider_pane_g12

0x7834,	// (0x0008cb8e) main_cset6_slider_pane_g13_ParamLimits

0x7834,	// (0x0008cb8e) main_cset6_slider_pane_g13

0x7840,	// (0x0008cb9a) main_cset6_slider_pane_g14_ParamLimits

0x7840,	// (0x0008cb9a) main_cset6_slider_pane_g14

0x876a,	// (0x0008dac4) main_cset6_slider_pane_g15_ParamLimits

0x876a,	// (0x0008dac4) main_cset6_slider_pane_g15

0x7864,	// (0x0008cbbe) main_cset6_slider_pane_g16_ParamLimits

0x7864,	// (0x0008cbbe) main_cset6_slider_pane_g16

0x7870,	// (0x0008cbca) main_cset6_slider_pane_g17_ParamLimits

0x7870,	// (0x0008cbca) main_cset6_slider_pane_g17

0x0011,

0xfb1d,	// (0x00094e77) main_cset6_slider_pane_g_ParamLimits

0xfb1d,	// (0x00094e77) main_cset6_slider_pane_g

0xd611,	// (0x0009296b) main_cset6_slider_pane_t1_ParamLimits

0xd611,	// (0x0009296b) main_cset6_slider_pane_t1

0xd652,	// (0x000929ac) main_cset6_slider_pane_t2_ParamLimits

0xd652,	// (0x000929ac) main_cset6_slider_pane_t2

0xd67d,	// (0x000929d7) main_cset6_slider_pane_t3_ParamLimits

0xd67d,	// (0x000929d7) main_cset6_slider_pane_t3

0x8782,	// (0x0008dadc) main_cset6_slider_pane_t4_ParamLimits

0x8782,	// (0x0008dadc) main_cset6_slider_pane_t4

0x87ad,	// (0x0008db07) main_cset6_slider_pane_t5_ParamLimits

0x87ad,	// (0x0008db07) main_cset6_slider_pane_t5

0xd6a8,	// (0x00092a02) main_cset6_slider_pane_t7_ParamLimits

0xd6a8,	// (0x00092a02) main_cset6_slider_pane_t7

0x87d8,	// (0x0008db32) main_cset6_slider_pane_t8_ParamLimits

0x87d8,	// (0x0008db32) main_cset6_slider_pane_t8

0x87fc,	// (0x0008db56) main_cset6_slider_pane_t9_ParamLimits

0x87fc,	// (0x0008db56) main_cset6_slider_pane_t9

0x8820,	// (0x0008db7a) main_cset6_slider_pane_t10_ParamLimits

0x8820,	// (0x0008db7a) main_cset6_slider_pane_t10

0x8844,	// (0x0008db9e) main_cset6_slider_pane_t11_ParamLimits

0x8844,	// (0x0008db9e) main_cset6_slider_pane_t11

0xd6de,	// (0x00092a38) main_cset6_slider_pane_t14_ParamLimits

0xd6de,	// (0x00092a38) main_cset6_slider_pane_t14

0xd717,	// (0x00092a71) main_cset6_slider_pane_t15_ParamLimits

0xd717,	// (0x00092a71) main_cset6_slider_pane_t15

0x000b,

0xfb42,	// (0x00094e9c) main_cset6_slider_pane_t_ParamLimits

0xfb42,	// (0x00094e9c) main_cset6_slider_pane_t

0xd750,	// (0x00092aaa) cset_slider_pane_g1_copy1

0xd759,	// (0x00092ab3) cset_slider_pane_g2_copy1

0xd762,	// (0x00092abc) cset_slider_pane_g3_copy1

0x0574,	// (0x000858ce) bg_popup_sub_pane_cp011_copy1

0xcf99,	// (0x000922f3) main_cset_text_pane_g1_copy1

0xcfa1,	// (0x000922fb) main_cset_text_pane_t1_copy1

0xcfaf,	// (0x00092309) main_cset_text_pane_t2_copy1

0xcfbd,	// (0x00092317) main_cset_text_pane_t3_copy1

0xcfcb,	// (0x00092325) main_cset_text_pane_t4_copy1

0xcfd9,	// (0x00092333) main_cset_text_pane_t5_copy1

0xcfe7,	// (0x00092341) main_cset_text_pane_t6_copy1

0xcff5,	// (0x0009234f) main_cset_text_pane_t7_copy1

0x8885,	// (0x0008dbdf) main_cset_text2_pane_t1_copy1

0xaea5,	// (0x000901ff) main_ncimui_pane

0x5a7f,	// (0x0008add9) popup_query_ncimui_window_ParamLimits

0x5a7f,	// (0x0008add9) popup_query_ncimui_window

0xcb42,	// (0x00091e9c) field_cale_ev2_pane_g4_ParamLimits

0xcb42,	// (0x00091e9c) field_cale_ev2_pane_g4

0x6bf5,	// (0x0008bf4f) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6bf5,	// (0x0008bf4f) cell_video_dialer_keypad_pane_g2

0x0001,

0xf81c,	// (0x00094b76) cell_video_dialer_keypad_pane_g_ParamLimits

0xf81c,	// (0x00094b76) cell_video_dialer_keypad_pane_g

0x6c0d,	// (0x0008bf67) cell_video_dialer_keypad_pane_t1

0x0574,	// (0x000858ce) bg_popup_window_pane_cp012

0xc6d7,	// (0x00091a31) heading_pane_cp06

0xd7bb,	// (0x00092b15) ncim_query_content_pane

0x0574,	// (0x000858ce) bg_popup_heading_pane_cp01

0xd7c3,	// (0x00092b1d) ncim_heading_pane_t1

0xd7d1,	// (0x00092b2b) ncim_indicator_popup_pane

0xd7e3,	// (0x00092b3d) ncim_query_button_pane

0xd7f7,	// (0x00092b51) ncim_query_content_pane_t1

0xd809,	// (0x00092b63) ncim_query_content_pane_t2

0x0005,

0xfb86,	// (0x00094ee0) ncim_query_content_pane_t

0xd843,	// (0x00092b9d) ncim_query_list_pane

0xd855,	// (0x00092baf) ncim_query_popup_pane

0xd7d1,	// (0x00092b2b) ncim_indicator_popup_pane_ParamLimits

0x89c4,	// (0x0008dd1e) ncim_query_content_pane_g1_ParamLimits

0x89c4,	// (0x0008dd1e) ncim_query_content_pane_g1

0xd7f7,	// (0x00092b51) ncim_query_content_pane_t1_ParamLimits

0xd809,	// (0x00092b63) ncim_query_content_pane_t2_ParamLimits

0x89d0,	// (0x0008dd2a) ncim_query_content_pane_t3_ParamLimits

0x89d0,	// (0x0008dd2a) ncim_query_content_pane_t3

0x89f8,	// (0x0008dd52) ncim_query_content_pane_t4_ParamLimits

0x89f8,	// (0x0008dd52) ncim_query_content_pane_t4

0x8a20,	// (0x0008dd7a) ncim_query_content_pane_t5_ParamLimits

0x8a20,	// (0x0008dd7a) ncim_query_content_pane_t5

0xd81b,	// (0x00092b75) ncim_query_content_pane_t6_ParamLimits

0xd81b,	// (0x00092b75) ncim_query_content_pane_t6

0xfb86,	// (0x00094ee0) ncim_query_content_pane_t_ParamLimits

0xd843,	// (0x00092b9d) ncim_query_list_pane_ParamLimits

0xd855,	// (0x00092baf) ncim_query_popup_pane_ParamLimits

0xd869,	// (0x00092bc3) wait_bar_pane_cp04

0x0574,	// (0x000858ce) input_focus_pane_cp011

0xd871,	// (0x00092bcb) ncim_query_popup_pane_t1

0xd87f,	// (0x00092bd9) ncim_list_query_list_pane_ParamLimits

0xd87f,	// (0x00092bd9) ncim_list_query_list_pane

0x0574,	// (0x000858ce) bg_button_pane_cp027

0xd892,	// (0x00092bec) ncim_query_button_pane_g1

0x0574,	// (0x000858ce) list_highlight_pane_cp012

0xd89c,	// (0x00092bf6) ncim_list_query_list_pane_g1

0xd8a4,	// (0x00092bfe) ncim_list_query_list_pane_t1

0xeea6,	// (0x00094200) cam4_indicators_pane_g3_ParamLimits

0xeea6,	// (0x00094200) cam4_indicators_pane_g3

0xef05,	// (0x0009425f) vid4_indicators_pane_g5_ParamLimits

0xef05,	// (0x0009425f) vid4_indicators_pane_g5

0xefdf,	// (0x00094339) vid4_progress_pane_g5_ParamLimits

0xefdf,	// (0x00094339) vid4_progress_pane_g5

0x88b4,	// (0x0008dc0e) main_ncimui_pane_g1

0x891a,	// (0x0008dc74) ncimui_group_query_pane_ParamLimits

0x891a,	// (0x0008dc74) ncimui_group_query_pane

0x8962,	// (0x0008dcbc) ncimui_list_pane_ParamLimits

0x8962,	// (0x0008dcbc) ncimui_list_pane

0x8987,	// (0x0008dce1) ncimui_text_pane_ParamLimits

0x8987,	// (0x0008dce1) ncimui_text_pane

0x8a48,	// (0x0008dda2) ncimui_text_pane_t1_ParamLimits

0x8a48,	// (0x0008dda2) ncimui_text_pane_t1

0xd8bb,	// (0x00092c15) ncimui_list_single_graphic_pane_ParamLimits

0xd8bb,	// (0x00092c15) ncimui_list_single_graphic_pane

0x8a66,	// (0x0008ddc0) ncimui_query_pane_ParamLimits

0x8a66,	// (0x0008ddc0) ncimui_query_pane

0x0574,	// (0x000858ce) list_highlight_pane_cp013

0xd8cb,	// (0x00092c25) ncim_list_query_list_pane_t1_copy1

0xd8d9,	// (0x00092c33) ncim_list_single_graphic_pane_g1

0xd8e1,	// (0x00092c3b) ncim_query_button_pane_cp01

0xd8ed,	// (0x00092c47) ncim_query_entry_pane_ParamLimits

0xd8ed,	// (0x00092c47) ncim_query_entry_pane

0xd900,	// (0x00092c5a) ncimui_query_pane_g1

0xd90c,	// (0x00092c66) ncimui_query_pane_t1_ParamLimits

0xd90c,	// (0x00092c66) ncimui_query_pane_t1

0x334c,	// (0x000886a6) input_focus_pane_cp012

0xd925,	// (0x00092c7f) ncim_query_entry_pane_t1

0x0ce8,	// (0x00086042) main_im_pane_ParamLimits

0xaea5,	// (0x000901ff) main_mobtv_pane_ParamLimits

0xaea5,	// (0x000901ff) main_mobtv_pane

0x7804,	// (0x0008cb5e) main_cset6_slider_pane_g18_ParamLimits

0x7804,	// (0x0008cb5e) main_cset6_slider_pane_g18

0x7834,	// (0x0008cb8e) main_cset6_slider_pane_g19_ParamLimits

0x7834,	// (0x0008cb8e) main_cset6_slider_pane_g19

0x0c8e,	// (0x00085fe8) bg_main_mobtv_pane_ParamLimits

0x0c8e,	// (0x00085fe8) bg_main_mobtv_pane

0x8a76,	// (0x0008ddd0) main_mobtv_info_pane

0x8a7f,	// (0x0008ddd9) main_mobtv_loading_pane_ParamLimits

0x8a7f,	// (0x0008ddd9) main_mobtv_loading_pane

0xd937,	// (0x00092c91) main_mobtv_pg_channel_list_pane

0xd941,	// (0x00092c9b) main_mobtv_pg_hdr_pane

0x8a8c,	// (0x0008dde6) main_mobtv_programe_curr_pane_ParamLimits

0x8a8c,	// (0x0008dde6) main_mobtv_programe_curr_pane

0x8a99,	// (0x0008ddf3) main_mobtv_programe_next_pane_ParamLimits

0x8a99,	// (0x0008ddf3) main_mobtv_programe_next_pane

0xd94a,	// (0x00092ca4) popup_mobtv_noti_window

0x34de,	// (0x00088838) main_tv_pg_hdr_pane_g1

0xd952,	// (0x00092cac) main_tv_pg_hdr_pane_g2

0xd95a,	// (0x00092cb4) main_tv_pg_hdr_pane_g3

0xd962,	// (0x00092cbc) main_tv_pg_hdr_pane_g4

0xd96a,	// (0x00092cc4) main_tv_pg_hdr_pane_g5

0xd972,	// (0x00092ccc) main_tv_pg_hdr_pane_g6

0xd97a,	// (0x00092cd4) main_tv_pg_hdr_pane_g7

0xd982,	// (0x00092cdc) main_tv_pg_hdr_pane_g8

0xd98a,	// (0x00092ce4) main_tv_pg_hdr_pane_g9

0xd992,	// (0x00092cec) main_tv_pg_hdr_pane_g10

0xd99c,	// (0x00092cf6) main_tv_pg_hdr_pane_g11

0x000a,

0xfb93,	// (0x00094eed) main_tv_pg_hdr_pane_g

0xd9a6,	// (0x00092d00) main_tv_pg_hdr_pane_t1

0xd9b4,	// (0x00092d0e) main_tv_pg_hdr_pane_t2

0xd9c2,	// (0x00092d1c) main_tv_pg_hdr_pane_t3

0xd9d0,	// (0x00092d2a) main_tv_pg_hdr_pane_t4

0xd9de,	// (0x00092d38) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaa,	// (0x00094f04) main_tv_pg_hdr_pane_t

0xd9ec,	// (0x00092d46) single_mobtv_pg_channel_pane_ParamLimits

0xd9ec,	// (0x00092d46) single_mobtv_pg_channel_pane

0xd9fe,	// (0x00092d58) single_mobtv_pg_channel_table_pane

0xda07,	// (0x00092d61) single_mobtv_pg_channel_thumb_pane

0xda10,	// (0x00092d6a) single_tv_pg_channel_pane_g1

0xda19,	// (0x00092d73) single_tv_pg_channel_pane_g2

0x0001,

0xfbb5,	// (0x00094f0f) single_tv_pg_channel_pane_g

0x0c64,	// (0x00085fbe) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0c64,	// (0x00085fbe) bg_single_mobtv_pg_channel_thumb_pane

0xda22,	// (0x00092d7c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xda22,	// (0x00092d7c) single_mobtv_pg_channel_thumb_pane_g1

0xda30,	// (0x00092d8a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xda30,	// (0x00092d8a) single_mobtv_pg_channel_thumb_pane_g2

0xda3c,	// (0x00092d96) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xda3c,	// (0x00092d96) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbba,	// (0x00094f14) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbba,	// (0x00094f14) single_mobtv_pg_channel_thumb_pane_g

0xda48,	// (0x00092da2) single_mobtv_pg_channel_thumb_pane_t1

0xda56,	// (0x00092db0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc1,	// (0x00094f1b) single_mobtv_pg_channel_thumb_pane_t

0x34de,	// (0x00088838) bg_single_mobtv_pg_channel_table_pane_g1

0x34de,	// (0x00088838) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c4,	// (0x0009471e) bg_single_mobtv_pg_channel_table_pane_g

0xda64,	// (0x00092dbe) single_mobtv_pg_channel_table_pane_t1

0xda72,	// (0x00092dcc) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbc6,	// (0x00094f20) single_mobtv_pg_channel_table_pane_t

0x8aae,	// (0x0008de08) main_mobtv_info_pane_g1_ParamLimits

0x8aae,	// (0x0008de08) main_mobtv_info_pane_g1

0x8aca,	// (0x0008de24) main_mobtv_info_pane_t1_ParamLimits

0x8aca,	// (0x0008de24) main_mobtv_info_pane_t1

0x8b30,	// (0x0008de8a) main_mobtv_info_pane_t2_ParamLimits

0x8b30,	// (0x0008de8a) main_mobtv_info_pane_t2

0x0002,

0xfbd0,	// (0x00094f2a) main_mobtv_info_pane_t_ParamLimits

0xfbd0,	// (0x00094f2a) main_mobtv_info_pane_t

0x8bb3,	// (0x0008df0d) wait_bar_pane_cp05

0x8bc3,	// (0x0008df1d) main_mobtv_loading_pane_g1_ParamLimits

0x8bc3,	// (0x0008df1d) main_mobtv_loading_pane_g1

0x8bd4,	// (0x0008df2e) main_mobtv_loading_pane_g2_ParamLimits

0x8bd4,	// (0x0008df2e) main_mobtv_loading_pane_g2

0x8be0,	// (0x0008df3a) main_mobtv_loading_pane_g3_ParamLimits

0x8be0,	// (0x0008df3a) main_mobtv_loading_pane_g3

0x0002,

0xfbd7,	// (0x00094f31) main_mobtv_loading_pane_g_ParamLimits

0xfbd7,	// (0x00094f31) main_mobtv_loading_pane_g

0xda80,	// (0x00092dda) main_mobtv_loading_pane_t1_ParamLimits

0xda80,	// (0x00092dda) main_mobtv_loading_pane_t1

0xda98,	// (0x00092df2) main_mobtv_loading_pane_t2_ParamLimits

0xda98,	// (0x00092df2) main_mobtv_loading_pane_t2

0x0001,

0xfbde,	// (0x00094f38) main_mobtv_loading_pane_t_ParamLimits

0xfbde,	// (0x00094f38) main_mobtv_loading_pane_t

0x8bf1,	// (0x0008df4b) wait_bar_pane_cp06_ParamLimits

0x8bf1,	// (0x0008df4b) wait_bar_pane_cp06

0xdabc,	// (0x00092e16) main_mobtv_programe_curr_pane_t1

0xdaca,	// (0x00092e24) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe3,	// (0x00094f3d) main_mobtv_programe_curr_pane_t

0xdad8,	// (0x00092e32) main_mobtv_programe_next_pane_t1

0xdae6,	// (0x00092e40) main_mobtv_programe_next_pane_t2

0xdaf4,	// (0x00092e4e) main_mobtv_programe_next_pane_t3

0x0002,

0xfbe8,	// (0x00094f42) main_mobtv_programe_next_pane_t

0x0574,	// (0x000858ce) bg_popup_mobtv_noti_window_pane

0xdb02,	// (0x00092e5c) popup_mobtv_noti_window_g1

0xdb0a,	// (0x00092e64) popup_mobtv_noti_window_t1

0xdb18,	// (0x00092e72) popup_mobtv_noti_window_t2

0x0001,

0xfbef,	// (0x00094f49) popup_mobtv_noti_window_t

0x34de,	// (0x00088838) bg_popup_mobtv_noti_window_pane_g1

0xaeb3,	// (0x0009020d) sc_clock_pane

0xaeb3,	// (0x0009020d) main_fs_bigclock_pane

0x83df,	// (0x0008d739) blid2_tripm_pane_t4_ParamLimits

0x83df,	// (0x0008d739) blid2_tripm_pane_t4

0x8c00,	// (0x0008df5a) sc_clock_pane_g1_ParamLimits

0x8c00,	// (0x0008df5a) sc_clock_pane_g1

0x8c12,	// (0x0008df6c) sc_clock_pane_t1_ParamLimits

0x8c12,	// (0x0008df6c) sc_clock_pane_t1

0x8c34,	// (0x0008df8e) sc_clock_pane_t2_ParamLimits

0x8c34,	// (0x0008df8e) sc_clock_pane_t2

0x8c4a,	// (0x0008dfa4) sc_clock_pane_t3_ParamLimits

0x8c4a,	// (0x0008dfa4) sc_clock_pane_t3

0x0004,

0xfbf4,	// (0x00094f4e) sc_clock_pane_t_ParamLimits

0xfbf4,	// (0x00094f4e) sc_clock_pane_t

0x9a42,	// (0x0008ed9c) main_fs_bigclock_indicator_pane_ParamLimits

0x9a42,	// (0x0008ed9c) main_fs_bigclock_indicator_pane

0x8ce6,	// (0x0008e040) main_fs_bigclock_pane_g1_ParamLimits

0x8ce6,	// (0x0008e040) main_fs_bigclock_pane_g1

0x9a4e,	// (0x0008eda8) main_fs_bigclock_pane_t1_ParamLimits

0x9a4e,	// (0x0008eda8) main_fs_bigclock_pane_t1

0x9a60,	// (0x0008edba) main_fs_bigclock_pane_t2_ParamLimits

0x9a60,	// (0x0008edba) main_fs_bigclock_pane_t2

0x9a72,	// (0x0008edcc) main_fs_bigclock_pane_t3_ParamLimits

0x9a72,	// (0x0008edcc) main_fs_bigclock_pane_t3

0x0002,

0xfdbd,	// (0x00095117) main_fs_bigclock_pane_t_ParamLimits

0xfdbd,	// (0x00095117) main_fs_bigclock_pane_t

0xe58e,	// (0x000938e8) main_fs_bigclock_indicator_pane_g1

0xd7eb,	// (0x00092b45) ncim_query_content_pane_g2_ParamLimits

0xd7eb,	// (0x00092b45) ncim_query_content_pane_g2

0x0001,

0xfb81,	// (0x00094edb) ncim_query_content_pane_g_ParamLimits

0xfb81,	// (0x00094edb) ncim_query_content_pane_g

0x8c61,	// (0x0008dfbb) sc_clock_pane_t4_ParamLimits

0x8c61,	// (0x0008dfbb) sc_clock_pane_t4

0xaea5,	// (0x000901ff) main_radioblah_pane

0xee0c,	// (0x00094166) cell_call4_button_pane_t1_copy1_ParamLimits

0xee0c,	// (0x00094166) cell_call4_button_pane_t1_copy1

0x88cc,	// (0x0008dc26) main_ncimui_pane_t1_ParamLimits

0x88cc,	// (0x0008dc26) main_ncimui_pane_t1

0x88e6,	// (0x0008dc40) main_ncimui_pane_t2_ParamLimits

0x88e6,	// (0x0008dc40) main_ncimui_pane_t2

0x0002,

0xfb7a,	// (0x00094ed4) main_ncimui_pane_t_ParamLimits

0xfb7a,	// (0x00094ed4) main_ncimui_pane_t

0xdc59,	// (0x00092fb3) main_radioblah_anim_pane_ParamLimits

0xdc59,	// (0x00092fb3) main_radioblah_anim_pane

0xdc6a,	// (0x00092fc4) main_radioblah_info_pane_ParamLimits

0xdc6a,	// (0x00092fc4) main_radioblah_info_pane

0xdc7e,	// (0x00092fd8) main_radioblah_pane_t1_ParamLimits

0xdc7e,	// (0x00092fd8) main_radioblah_pane_t1

0xdc9a,	// (0x00092ff4) main_radioblah_pane_t2_ParamLimits

0xdc9a,	// (0x00092ff4) main_radioblah_pane_t2

0x0003,

0xfc15,	// (0x00094f6f) main_radioblah_pane_t_ParamLimits

0xfc15,	// (0x00094f6f) main_radioblah_pane_t

0x8d30,	// (0x0008e08a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8d30,	// (0x0008e08a) main_radioblah_rocker_ctrl_pane

0xdce2,	// (0x0009303c) main_radioblah_info_pane_t1_ParamLimits

0xdce2,	// (0x0009303c) main_radioblah_info_pane_t1

0x8d84,	// (0x0008e0de) main_radioblah_info_pane_t2_ParamLimits

0x8d84,	// (0x0008e0de) main_radioblah_info_pane_t2

0x0003,

0xfc1e,	// (0x00094f78) main_radioblah_info_pane_t_ParamLimits

0xfc1e,	// (0x00094f78) main_radioblah_info_pane_t

0x34de,	// (0x00088838) main_radioblah_rocker_ctrl_pane_g1

0x8e32,	// (0x0008e18c) main_radioblah_rocker_ctrl_pane_g2

0x8e3a,	// (0x0008e194) main_radioblah_rocker_ctrl_pane_g3

0x8e42,	// (0x0008e19c) main_radioblah_rocker_ctrl_pane_g4

0x8e4a,	// (0x0008e1a4) main_radioblah_rocker_ctrl_pane_g5

0x8e52,	// (0x0008e1ac) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc27,	// (0x00094f81) main_radioblah_rocker_ctrl_pane_g

0x8885,	// (0x0008dbdf) main_cset_text2_pane_t1_copy1_ParamLimits

0xee68,	// (0x000941c2) cam4_image_uncrop_qvga_pane

0xeed0,	// (0x0009422a) vid4_image_uncrop_qcif_pane

0xf03b,	// (0x00094395) cam6_image_uncrop_qvga_pane_ParamLimits

0xf03b,	// (0x00094395) cam6_image_uncrop_qvga_pane

0xd49b,	// (0x000927f5) vid6_image_uncrop_qcif_pane_ParamLimits

0xd49b,	// (0x000927f5) vid6_image_uncrop_qcif_pane

0x0574,	// (0x000858ce) bg_popup_preview_window_pane_cp03

0xd791,	// (0x00092aeb) list_cset_text2_pane

0xd799,	// (0x00092af3) main_cset6_text2_pane_g1

0xd7a1,	// (0x00092afb) main_cset6_text2_pane_t1

0x8e5a,	// (0x0008e1b4) list_cset_text2_pane_t1_ParamLimits

0x8e5a,	// (0x0008e1b4) list_cset_text2_pane_t1

0xaea5,	// (0x000901ff) main_radioblah_pane_ParamLimits

0x8ba1,	// (0x0008defb) main_mobtv_info_pane_t3_ParamLimits

0x8ba1,	// (0x0008defb) main_mobtv_info_pane_t3

0x8d1e,	// (0x0008e078) main_radioblah_pane_g1

0x8d58,	// (0x0008e0b2) main_radioblah_info_pane_g1

0x8dd7,	// (0x0008e131) main_radioblah_info_pane_t3_ParamLimits

0x8dd7,	// (0x0008e131) main_radioblah_info_pane_t3

0x4605,	// (0x0008995f) highlight_cell_cale_month_pane_ParamLimits

0x4605,	// (0x0008995f) highlight_cell_cale_month_pane

0xaeb3,	// (0x0009020d) main_phob_fisheye_pane

0x1319,	// (0x00086673) scroll_pane_cp0031_ParamLimits

0x1319,	// (0x00086673) scroll_pane_cp0031

0xd5a5,	// (0x000928ff) wait_bar_pane_cp08_ParamLimits

0x86f4,	// (0x0008da4e) cset_list_set_pane_copy1_ParamLimits

0xdd1c,	// (0x00093076) highlight_cell_cale_month_pane_g1

0x8e73,	// (0x0008e1cd) highlight_cell_cale_month_pane_t1

0xdd24,	// (0x0009307e) list_gen_pane_cp01

0xce31,	// (0x0009218b) scroll_pane_01

0x8e81,	// (0x0008e1db) list_single_double_fisheye_pane

0x8e8a,	// (0x0008e1e4) list_double_fisheye_pane_g1_ParamLimits

0x8e8a,	// (0x0008e1e4) list_double_fisheye_pane_g1

0x8e96,	// (0x0008e1f0) list_double_fisheye_pane_g2_ParamLimits

0x8e96,	// (0x0008e1f0) list_double_fisheye_pane_g2

0x8eaa,	// (0x0008e204) list_double_fisheye_pane_g3_ParamLimits

0x8eaa,	// (0x0008e204) list_double_fisheye_pane_g3

0x0004,

0xfc34,	// (0x00094f8e) list_double_fisheye_pane_g_ParamLimits

0xfc34,	// (0x00094f8e) list_double_fisheye_pane_g

0x8ed3,	// (0x0008e22d) list_double_fisheye_pane_t1_ParamLimits

0x8ed3,	// (0x0008e22d) list_double_fisheye_pane_t1

0x8eee,	// (0x0008e248) list_double_fisheye_pane_t2_ParamLimits

0x8eee,	// (0x0008e248) list_double_fisheye_pane_t2

0x0001,

0xfc3f,	// (0x00094f99) list_double_fisheye_pane_t_ParamLimits

0xfc3f,	// (0x00094f99) list_double_fisheye_pane_t

0xaeb3,	// (0x0009020d) main_call5_pane

0x8c8a,	// (0x0008dfe4) sc_swipe_pane_ParamLimits

0x8c8a,	// (0x0008dfe4) sc_swipe_pane

0x8f21,	// (0x0008e27b) call5_image_pane_ParamLimits

0x8f21,	// (0x0008e27b) call5_image_pane

0x8f36,	// (0x0008e290) call5_swipe_1_pane_ParamLimits

0x8f36,	// (0x0008e290) call5_swipe_1_pane

0x8f47,	// (0x0008e2a1) call5_swipe_2_pane_ParamLimits

0x8f47,	// (0x0008e2a1) call5_swipe_2_pane

0x8f6c,	// (0x0008e2c6) popup_call5_audio_first_window_ParamLimits

0x8f6c,	// (0x0008e2c6) popup_call5_audio_first_window

0x0c64,	// (0x00085fbe) call5_swipe_1_pane_g1_ParamLimits

0x0c64,	// (0x00085fbe) call5_swipe_1_pane_g1

0xdd2d,	// (0x00093087) call5_swipe_1_pane_g2_ParamLimits

0xdd2d,	// (0x00093087) call5_swipe_1_pane_g2

0x0001,

0xfc44,	// (0x00094f9e) call5_swipe_1_pane_g_ParamLimits

0xfc44,	// (0x00094f9e) call5_swipe_1_pane_g

0xdd39,	// (0x00093093) call5_swipe_1_pane_t1_ParamLimits

0xdd39,	// (0x00093093) call5_swipe_1_pane_t1

0x0c64,	// (0x00085fbe) call5_swipe_2_pane_g1_ParamLimits

0x0c64,	// (0x00085fbe) call5_swipe_2_pane_g1

0xdd4e,	// (0x000930a8) call5_swipe_2_pane_g2_ParamLimits

0xdd4e,	// (0x000930a8) call5_swipe_2_pane_g2

0x0001,

0xfc49,	// (0x00094fa3) call5_swipe_2_pane_g_ParamLimits

0xfc49,	// (0x00094fa3) call5_swipe_2_pane_g

0xdd5a,	// (0x000930b4) call5_swipe_2_pane_t1_ParamLimits

0xdd5a,	// (0x000930b4) call5_swipe_2_pane_t1

0xdd6f,	// (0x000930c9) sc_swipe_pane_g1_ParamLimits

0xdd6f,	// (0x000930c9) sc_swipe_pane_g1

0xdd7c,	// (0x000930d6) sc_swipe_pane_g2_ParamLimits

0xdd7c,	// (0x000930d6) sc_swipe_pane_g2

0x0001,

0xfc4e,	// (0x00094fa8) sc_swipe_pane_g_ParamLimits

0xfc4e,	// (0x00094fa8) sc_swipe_pane_g

0xdd88,	// (0x000930e2) sc_swipe_pane_t1_ParamLimits

0xdd88,	// (0x000930e2) sc_swipe_pane_t1

0xaeb3,	// (0x0009020d) main_cmail_launcher_pane

0x8f7b,	// (0x0008e2d5) aid_size_cell_cmail_l_ParamLimits

0x8f7b,	// (0x0008e2d5) aid_size_cell_cmail_l

0x8f94,	// (0x0008e2ee) grid_cmail_l_pane_ParamLimits

0x8f94,	// (0x0008e2ee) grid_cmail_l_pane

0x8fa9,	// (0x0008e303) cell_cmail_l_pane_ParamLimits

0x8fa9,	// (0x0008e303) cell_cmail_l_pane

0x8fcb,	// (0x0008e325) cell_cmail_l_pane_g1_ParamLimits

0x8fcb,	// (0x0008e325) cell_cmail_l_pane_g1

0x8fdb,	// (0x0008e335) cell_cmail_l_pane_t1_ParamLimits

0x8fdb,	// (0x0008e335) cell_cmail_l_pane_t1

0xdd9d,	// (0x000930f7) cell_cmail_l_pane_t2_ParamLimits

0xdd9d,	// (0x000930f7) cell_cmail_l_pane_t2

0x0001,

0xfc53,	// (0x00094fad) cell_cmail_l_pane_t_ParamLimits

0xfc53,	// (0x00094fad) cell_cmail_l_pane_t

0x334c,	// (0x000886a6) grid_highlight_pane_cp018_ParamLimits

0x334c,	// (0x000886a6) grid_highlight_pane_cp018

0x2838,	// (0x00087b92) main2_pane_ParamLimits

0x2838,	// (0x00087b92) main2_pane

0x0d89,	// (0x000860e3) popup_sp_fs_action_menu_bg_pane_g1

0x0d91,	// (0x000860eb) popup_sp_fs_action_menu_bg_pane_g2

0x0d99,	// (0x000860f3) popup_sp_fs_action_menu_bg_pane_g3

0x0da1,	// (0x000860fb) popup_sp_fs_action_menu_bg_pane_g4

0x0da9,	// (0x00086103) popup_sp_fs_action_menu_bg_pane_g5

0x0db1,	// (0x0008610b) popup_sp_fs_action_menu_bg_pane_g6

0x0db9,	// (0x00086113) popup_sp_fs_action_menu_bg_pane_g7

0x0dc1,	// (0x0008611b) popup_sp_fs_action_menu_bg_pane_g8

0x0dc9,	// (0x00086123) popup_sp_fs_action_menu_bg_pane_g9

0x0dd1,	// (0x0008612b) popup_sp_fs_action_menu_bg_pane_g10

0x0dd1,	// (0x0008612b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf11f,	// (0x00094479) popup_sp_fs_action_menu_bg_pane_g

0x3550,	// (0x000888aa) list_medium_line_x2_t3_g3_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t3_g3_g1

0x355c,	// (0x000888b6) list_medium_line_x2_t3_g3_g2_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_x2_t3_g3_g2

0x3550,	// (0x000888aa) list_medium_line_x2_t3_g3_g3_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1cd,	// (0x00094527) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1cd,	// (0x00094527) list_medium_line_x2_t3_g3_g

0x3568,	// (0x000888c2) list_medium_line_x2_t3_g3_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t3_g3_t1

0x3568,	// (0x000888c2) list_medium_line_x2_t3_g3_t2_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t3_g3_t2

0x357b,	// (0x000888d5) list_medium_line_x2_t3_g3_t3_ParamLimits

0x357b,	// (0x000888d5) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1d4,	// (0x0009452e) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1d4,	// (0x0009452e) list_medium_line_x2_t3_g3_t

0x3550,	// (0x000888aa) list_medium_line_x2_t3_g2_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t3_g2_g1

0x3550,	// (0x000888aa) list_medium_line_x2_t3_g2_g2_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1db,	// (0x00094535) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1db,	// (0x00094535) list_medium_line_x2_t3_g2_g

0x3568,	// (0x000888c2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t3_g2_t1

0x3568,	// (0x000888c2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t3_g2_t2

0x357b,	// (0x000888d5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x357b,	// (0x000888d5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1d4,	// (0x0009452e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1d4,	// (0x0009452e) list_medium_line_x2_t3_g2_t

0x3550,	// (0x000888aa) list_medium_line_x2_t4_g4_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t4_g4_g1

0x355c,	// (0x000888b6) list_medium_line_x2_t4_g4_g2_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_x2_t4_g4_g2

0x355c,	// (0x000888b6) list_medium_line_x2_t4_g4_g3_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_x2_t4_g4_g3

0x3550,	// (0x000888aa) list_medium_line_x2_t4_g4_g4_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1e0,	// (0x0009453a) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1e0,	// (0x0009453a) list_medium_line_x2_t4_g4_g

0x3568,	// (0x000888c2) list_medium_line_x2_t4_g4_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t4_g4_t1

0x3568,	// (0x000888c2) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t4_g4_t2

0x3568,	// (0x000888c2) list_medium_line_x2_t4_g4_t3_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t4_g4_t3

0x357b,	// (0x000888d5) list_medium_line_x2_t4_g4_t4_ParamLimits

0x357b,	// (0x000888d5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1e9,	// (0x00094543) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1e9,	// (0x00094543) list_medium_line_x2_t4_g4_t

0x3550,	// (0x000888aa) list_medium_line_x2_t2_g4_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t2_g4_g1

0x355c,	// (0x000888b6) list_medium_line_x2_t2_g4_g2_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_x2_t2_g4_g2

0x355c,	// (0x000888b6) list_medium_line_x2_t2_g4_g3_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_x2_t2_g4_g3

0x3550,	// (0x000888aa) list_medium_line_x2_t2_g4_g4_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1e0,	// (0x0009453a) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1e0,	// (0x0009453a) list_medium_line_x2_t2_g4_g

0x3568,	// (0x000888c2) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t2_g4_t1

0x357b,	// (0x000888d5) list_medium_line_x2_t2_g4_t2_ParamLimits

0x357b,	// (0x000888d5) list_medium_line_x2_t2_g4_t2

0x0001,

0xf250,	// (0x000945aa) list_medium_line_x2_t2_g4_t_ParamLimits

0xf250,	// (0x000945aa) list_medium_line_x2_t2_g4_t

0x3550,	// (0x000888aa) list_medium_line_x2_t2_g3_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t2_g3_g1

0x355c,	// (0x000888b6) list_medium_line_x2_t2_g3_g2_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_x2_t2_g3_g2

0x3550,	// (0x000888aa) list_medium_line_x2_t2_g3_g3_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1cd,	// (0x00094527) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1cd,	// (0x00094527) list_medium_line_x2_t2_g3_g

0x3568,	// (0x000888c2) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t2_g3_t1

0x357b,	// (0x000888d5) list_medium_line_x2_t2_g3_t2_ParamLimits

0x357b,	// (0x000888d5) list_medium_line_x2_t2_g3_t2

0x0001,

0xf250,	// (0x000945aa) list_medium_line_x2_t2_g3_t_ParamLimits

0xf250,	// (0x000945aa) list_medium_line_x2_t2_g3_t

0x4974,	// (0x00089cce) main_sp_fs_list_pane_ParamLimits

0x4974,	// (0x00089cce) main_sp_fs_list_pane

0x4981,	// (0x00089cdb) sp_fs_scroll_pane_ParamLimits

0x4981,	// (0x00089cdb) sp_fs_scroll_pane

0x498e,	// (0x00089ce8) list_medium_line_x2_t3_t1

0x498e,	// (0x00089ce8) list_medium_line_x2_t3_t2

0x499d,	// (0x00089cf7) list_medium_line_x2_t3_t3

0x0002,

0xf296,	// (0x000945f0) list_medium_line_x2_t3_t

0x498e,	// (0x00089ce8) list_medium_line_x3_t4_t1

0x498e,	// (0x00089ce8) list_medium_line_x3_t4_t2

0x498e,	// (0x00089ce8) list_medium_line_x3_t4_t3

0x498e,	// (0x00089ce8) list_medium_line_x3_t4_t4

0x0003,

0xf29d,	// (0x000945f7) list_medium_line_x3_t4_t

0x498e,	// (0x00089ce8) list_medium_line_x4_t5_t1

0x498e,	// (0x00089ce8) list_medium_line_x4_t5_t2

0x498e,	// (0x00089ce8) list_medium_line_x4_t5_t3

0x498e,	// (0x00089ce8) list_medium_line_x4_t5_t4

0x498e,	// (0x00089ce8) list_medium_line_x4_t5_t5

0x0004,

0xf2a6,	// (0x00094600) list_medium_line_x4_t5_t

0x3550,	// (0x000888aa) list_medium_line_t4_g4_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_t4_g4_g1

0x3550,	// (0x000888aa) list_medium_line_t4_g4_g2_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_t4_g4_g2

0x3550,	// (0x000888aa) list_medium_line_t4_g4_g3_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_t4_g4_g3

0x3550,	// (0x000888aa) list_medium_line_t4_g4_g4_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_t4_g4_g4

0x0003,

0xf2b1,	// (0x0009460b) list_medium_line_t4_g4_g_ParamLimits

0xf2b1,	// (0x0009460b) list_medium_line_t4_g4_g

0x3568,	// (0x000888c2) list_medium_line_t4_g4_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t4_g4_t1

0x3568,	// (0x000888c2) list_medium_line_t4_g4_t2_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t4_g4_t2

0x3568,	// (0x000888c2) list_medium_line_t4_g4_t3_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t4_g4_t3

0x3568,	// (0x000888c2) list_medium_line_t4_g4_t4_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t4_g4_t4

0x0003,

0xf2ba,	// (0x00094614) list_medium_line_t4_g4_t_ParamLimits

0xf2ba,	// (0x00094614) list_medium_line_t4_g4_t

0x4b23,	// (0x00089e7d) chi_dic_find_pane_g1

0x5885,	// (0x0008abdf) main_tport_pane

0x498e,	// (0x00089ce8) list_medium_line_plain_t1

0x3550,	// (0x000888aa) list_medium_line_t2_g2_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_t2_g2_g1

0xcf4d,	// (0x000922a7) list_medium_line_t2_g2_g2_ParamLimits

0xcf4d,	// (0x000922a7) list_medium_line_t2_g2_g2

0x0001,

0xf98b,	// (0x00094ce5) list_medium_line_t2_g2_g_ParamLimits

0xf98b,	// (0x00094ce5) list_medium_line_t2_g2_g

0x3568,	// (0x000888c2) list_medium_line_t2_g2_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t2_g2_t1

0x3568,	// (0x000888c2) list_medium_line_t2_g2_t2_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t2_g2_t2

0x0001,

0xf990,	// (0x00094cea) list_medium_line_t2_g2_t_ParamLimits

0xf990,	// (0x00094cea) list_medium_line_t2_g2_t

0xd269,	// (0x000925c3) aid_sp_fs_list_icon_a_sm

0xd271,	// (0x000925cb) aid_sp_fs_list_icon_d

0xd279,	// (0x000925d3) aid_sp_fs_text_primary

0xd282,	// (0x000925dc) aid_sp_fs_text_secondary

0xd28b,	// (0x000925e5) list_medium_line

0xd28b,	// (0x000925e5) list_medium_line_g2

0xd28b,	// (0x000925e5) list_medium_line_g3

0xd28b,	// (0x000925e5) list_medium_line_plain

0xd28b,	// (0x000925e5) list_medium_line_plain_t2

0xd28b,	// (0x000925e5) list_medium_line_plain_t3

0xd28b,	// (0x000925e5) list_medium_line_right_icon

0xd28b,	// (0x000925e5) list_medium_line_right_iconx2

0xd28b,	// (0x000925e5) list_medium_line_t2

0xd28b,	// (0x000925e5) list_medium_line_t2_g2

0xd28b,	// (0x000925e5) list_medium_line_t2_g3

0xd28b,	// (0x000925e5) list_medium_line_t2_right_icon

0xd28b,	// (0x000925e5) list_medium_line_t2_right_iconx2

0xd28b,	// (0x000925e5) list_medium_line_t3

0xd28b,	// (0x000925e5) list_medium_line_t3_g2

0xd28b,	// (0x000925e5) list_medium_line_t3_g3

0xd28b,	// (0x000925e5) list_medium_line_t3_right_iconx2

0x8181,	// (0x0008d4db) list_medium_line_t4_g4

0x818a,	// (0x0008d4e4) list_medium_line_x2

0x818a,	// (0x0008d4e4) list_medium_line_x2_t2_g2

0x818a,	// (0x0008d4e4) list_medium_line_x2_t2_g3

0x818a,	// (0x0008d4e4) list_medium_line_x2_t2_g4

0x818a,	// (0x0008d4e4) list_medium_line_x2_t3

0x818a,	// (0x0008d4e4) list_medium_line_x2_t3_g2

0x818a,	// (0x0008d4e4) list_medium_line_x2_t3_g3

0x818a,	// (0x0008d4e4) list_medium_line_x2_t3_g4

0x818a,	// (0x0008d4e4) list_medium_line_x2_t4_g2

0x818a,	// (0x0008d4e4) list_medium_line_x2_t4_g4

0x8193,	// (0x0008d4ed) list_medium_line_x3

0x8193,	// (0x0008d4ed) list_medium_line_x3_t4

0x8193,	// (0x0008d4ed) list_medium_line_x3_t4_g4

0x8181,	// (0x0008d4db) list_medium_line_x4_t4

0x8181,	// (0x0008d4db) list_medium_line_x4_t4_g7

0x8181,	// (0x0008d4db) list_medium_line_x4_t5

0x819c,	// (0x0008d4f6) list_single_fs_dyc_pane_ParamLimits

0x819c,	// (0x0008d4f6) list_single_fs_dyc_pane

0x3550,	// (0x000888aa) list_medium_line_x4_t4_g7_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x4_t4_g7_g1

0x0c64,	// (0x00085fbe) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0c64,	// (0x00085fbe) list_medium_line_x4_t4_g7_g2

0x355c,	// (0x000888b6) list_medium_line_x4_t4_g7_g3_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_x4_t4_g7_g3

0x0c64,	// (0x00085fbe) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0c64,	// (0x00085fbe) list_medium_line_x4_t4_g7_g4

0x0c64,	// (0x00085fbe) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0c64,	// (0x00085fbe) list_medium_line_x4_t4_g7_g5

0x0c64,	// (0x00085fbe) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0c64,	// (0x00085fbe) list_medium_line_x4_t4_g7_g6

0x0c72,	// (0x00085fcc) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0c72,	// (0x00085fcc) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb5b,	// (0x00094eb5) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb5b,	// (0x00094eb5) list_medium_line_x4_t4_g7_g

0x3568,	// (0x000888c2) list_medium_line_x4_t4_g7_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x4_t4_g7_t1

0x3568,	// (0x000888c2) list_medium_line_x4_t4_g7_t2_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x4_t4_g7_t2

0x3568,	// (0x000888c2) list_medium_line_x4_t4_g7_t3_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x4_t4_g7_t3

0xd76b,	// (0x00092ac5) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd76b,	// (0x00092ac5) list_medium_line_x4_t4_g7_t4

0xd77e,	// (0x00092ad8) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd77e,	// (0x00092ad8) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6a,	// (0x00094ec4) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6a,	// (0x00094ec4) list_medium_line_x4_t4_g7_t

0x8868,	// (0x0008dbc2) list_single_dyc_row_pane_ParamLimits

0x8868,	// (0x0008dbc2) list_single_dyc_row_pane

0x8f10,	// (0x0008e26a) call5_gesture_pane_ParamLimits

0x8f10,	// (0x0008e26a) call5_gesture_pane

0x8f58,	// (0x0008e2b2) call5_windows_pane_ParamLimits

0x8f58,	// (0x0008e2b2) call5_windows_pane

0x8ff1,	// (0x0008e34b) call5_swipe_1_pane_cp_ParamLimits

0x8ff1,	// (0x0008e34b) call5_swipe_1_pane_cp

0x8ffd,	// (0x0008e357) call5_swipe_2_pane_cp_ParamLimits

0x8ffd,	// (0x0008e357) call5_swipe_2_pane_cp

0x32e3,	// (0x0008863d) call5_image_pane_cp

0x9009,	// (0x0008e363) popup_call5_audio_first_window_cp_ParamLimits

0x9009,	// (0x0008e363) popup_call5_audio_first_window_cp

0xdd6f,	// (0x000930c9) call5_swipe_1_pane_g1_cp_ParamLimits

0xdd6f,	// (0x000930c9) call5_swipe_1_pane_g1_cp

0xddb5,	// (0x0009310f) call5_swipe_1_pane_g2_cp

0xdd88,	// (0x000930e2) call5_swipe_1_pane_t1_cp_ParamLimits

0xdd88,	// (0x000930e2) call5_swipe_1_pane_t1_cp

0xdd6f,	// (0x000930c9) call5_swipe_2_pane_g1_cp_ParamLimits

0xdd6f,	// (0x000930c9) call5_swipe_2_pane_g1_cp

0xddbd,	// (0x00093117) call5_swipe_2_pane_g2_cp

0xddc5,	// (0x0009311f) call5_swipe_2_pane_t1_cp_ParamLimits

0xddc5,	// (0x0009311f) call5_swipe_2_pane_t1_cp

0x334c,	// (0x000886a6) main_sp_fs_email_pane

0xddda,	// (0x00093134) main_sp_fs_listscroll_pane_te

0x9015,	// (0x0008e36f) popup_sp_fs_action_menu_pane_ParamLimits

0x9015,	// (0x0008e36f) popup_sp_fs_action_menu_pane

0x34de,	// (0x00088838) bg_sp_fs_ctrlbar_pane_g1

0x1578,	// (0x000868d2) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x158a,	// (0x000868e4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1581,	// (0x000868db) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x34de,	// (0x00088838) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc58,	// (0x00094fb2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca77,	// (0x00091dd1) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca77,	// (0x00091dd1) bg_sp_fs_ctrlbar_ddmenu_pane

0xdde3,	// (0x0009313d) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdde3,	// (0x0009313d) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xddef,	// (0x00093149) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xddef,	// (0x00093149) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc61,	// (0x00094fbb) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc61,	// (0x00094fbb) main_sp_fs_ctrlbar_ddmenu_pane_g

0xddfb,	// (0x00093155) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xddfb,	// (0x00093155) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xde15,	// (0x0009316f) list_medium_line_t2_right_icon_g1

0x498e,	// (0x00089ce8) list_medium_line_t2_right_icon_t1

0x498e,	// (0x00089ce8) list_medium_line_t2_right_icon_t2

0x0001,

0xfc66,	// (0x00094fc0) list_medium_line_t2_right_icon_t

0xb487,	// (0x000907e1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb487,	// (0x000907e1) bg_sp_fs_ctrlbar_pane

0x908f,	// (0x0008e3e9) main_sp_fs_ctrlbar_button_pane_cp01

0x9097,	// (0x0008e3f1) main_sp_fs_ctrlbar_ddmenu_pane

0xde55,	// (0x000931af) main_sp_fs_ctrlbar_pane_g1

0xde61,	// (0x000931bb) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc6b,	// (0x00094fc5) main_sp_fs_ctrlbar_pane_g

0x90d3,	// (0x0008e42d) main_sp_fs_ctrlbar_pane_t1

0x911c,	// (0x0008e476) main_sp_fs_ctrlbar_pane

0x913d,	// (0x0008e497) main_sp_fs_listscroll_pane_te_cp01

0x915d,	// (0x0008e4b7) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x915d,	// (0x0008e4b7) popup_sp_fs_action_menu_pane_cp01

0x334c,	// (0x000886a6) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x334c,	// (0x000886a6) bg_sp_fs_highlight_list_pane_cp01

0x918d,	// (0x0008e4e7) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x918d,	// (0x0008e4e7) sp_fs_action_menu_list_gene_pane_g1

0xde88,	// (0x000931e2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xde88,	// (0x000931e2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc79,	// (0x00094fd3) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc79,	// (0x00094fd3) sp_fs_action_menu_list_gene_pane_g

0x919c,	// (0x0008e4f6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x919c,	// (0x0008e4f6) sp_fs_action_menu_list_gene_pane_t1

0x91b4,	// (0x0008e50e) sp_fs_action_menu_list_gene_pane_ParamLimits

0x91b4,	// (0x0008e50e) sp_fs_action_menu_list_gene_pane

0xde95,	// (0x000931ef) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xde95,	// (0x000931ef) popup_sp_fs_action_menu_bg_pane

0x91d3,	// (0x0008e52d) sp_fs_action_menu_list_pane_ParamLimits

0x91d3,	// (0x0008e52d) sp_fs_action_menu_list_pane

0xdea3,	// (0x000931fd) sp_fs_scroll_pane_cp01_ParamLimits

0xdea3,	// (0x000931fd) sp_fs_scroll_pane_cp01

0x498e,	// (0x00089ce8) list_medium_line_plain_t2_t1

0x498e,	// (0x00089ce8) list_medium_line_plain_t2_t2

0x0001,

0xfc66,	// (0x00094fc0) list_medium_line_plain_t2_t

0x498e,	// (0x00089ce8) list_medium_line_plain_t3_t1

0x498e,	// (0x00089ce8) list_medium_line_plain_t3_t2

0x498e,	// (0x00089ce8) list_medium_line_plain_t3_t3

0x0002,

0xfc7e,	// (0x00094fd8) list_medium_line_plain_t3_t

0x3550,	// (0x000888aa) list_medium_line_x2_t2_g2_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t2_g2_g1

0x3550,	// (0x000888aa) list_medium_line_x2_t2_g2_g2_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1db,	// (0x00094535) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1db,	// (0x00094535) list_medium_line_x2_t2_g2_g

0x3568,	// (0x000888c2) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t2_g2_t1

0x357b,	// (0x000888d5) list_medium_line_x2_t2_g2_t2_ParamLimits

0x357b,	// (0x000888d5) list_medium_line_x2_t2_g2_t2

0x0001,

0xf250,	// (0x000945aa) list_medium_line_x2_t2_g2_t_ParamLimits

0xf250,	// (0x000945aa) list_medium_line_x2_t2_g2_t

0x3550,	// (0x000888aa) list_medium_line_x2_t4_g2_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t4_g2_g1

0xdec9,	// (0x00093223) list_medium_line_x2_t4_g2_g2_ParamLimits

0xdec9,	// (0x00093223) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc85,	// (0x00094fdf) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc85,	// (0x00094fdf) list_medium_line_x2_t4_g2_g

0x3568,	// (0x000888c2) list_medium_line_x2_t4_g2_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t4_g2_t1

0x3568,	// (0x000888c2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t4_g2_t2

0x3568,	// (0x000888c2) list_medium_line_x2_t4_g2_t3_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t4_g2_t3

0x357b,	// (0x000888d5) list_medium_line_x2_t4_g2_t4_ParamLimits

0x357b,	// (0x000888d5) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1e9,	// (0x00094543) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1e9,	// (0x00094543) list_medium_line_x2_t4_g2_t

0xde15,	// (0x0009316f) list_medium_line_t3_right_iconx2_g1

0x34de,	// (0x00088838) list_medium_line_t3_right_iconx2_g2

0xdeda,	// (0x00093234) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8a,	// (0x00094fe4) list_medium_line_t3_right_iconx2_g

0x498e,	// (0x00089ce8) list_medium_line_t3_right_iconx2_t1

0x498e,	// (0x00089ce8) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc66,	// (0x00094fc0) list_medium_line_t3_right_iconx2_t

0x3550,	// (0x000888aa) list_medium_line_x3_t4_g4_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x3_t4_g4_g1

0x355c,	// (0x000888b6) list_medium_line_x3_t4_g4_g2_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_x3_t4_g4_g2

0x3550,	// (0x000888aa) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x3_t4_g4_g3

0x355c,	// (0x000888b6) list_medium_line_x3_t4_g4_g4_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc91,	// (0x00094feb) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc91,	// (0x00094feb) list_medium_line_x3_t4_g4_g

0x3568,	// (0x000888c2) list_medium_line_x3_t4_g4_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x3_t4_g4_t1

0x3568,	// (0x000888c2) list_medium_line_x3_t4_g4_t2_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x3_t4_g4_t2

0x3568,	// (0x000888c2) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x3_t4_g4_t3

0xdee3,	// (0x0009323d) list_medium_line_x3_t4_g4_t4_ParamLimits

0xdee3,	// (0x0009323d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc9a,	// (0x00094ff4) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc9a,	// (0x00094ff4) list_medium_line_x3_t4_g4_t

0x91f3,	// (0x0008e54d) list_single_dyc_row_text_pane_t1_ParamLimits

0x91f3,	// (0x0008e54d) list_single_dyc_row_text_pane_t1

0x922a,	// (0x0008e584) list_single_dyc_row_text_pane_t2_ParamLimits

0x922a,	// (0x0008e584) list_single_dyc_row_text_pane_t2

0xdf00,	// (0x0009325a) list_single_dyc_row_text_pane_t3_ParamLimits

0xdf00,	// (0x0009325a) list_single_dyc_row_text_pane_t3

0x0005,

0xfca3,	// (0x00094ffd) list_single_dyc_row_text_pane_t_ParamLimits

0xfca3,	// (0x00094ffd) list_single_dyc_row_text_pane_t

0xdf24,	// (0x0009327e) list_single_dyc_row_pane_g1_ParamLimits

0xdf24,	// (0x0009327e) list_single_dyc_row_pane_g1

0xdf30,	// (0x0009328a) list_single_dyc_row_pane_g2_ParamLimits

0xdf30,	// (0x0009328a) list_single_dyc_row_pane_g2

0xdf3c,	// (0x00093296) list_single_dyc_row_pane_g3_ParamLimits

0xdf3c,	// (0x00093296) list_single_dyc_row_pane_g3

0xdf48,	// (0x000932a2) list_single_dyc_row_pane_g4_ParamLimits

0xdf48,	// (0x000932a2) list_single_dyc_row_pane_g4

0x0003,

0xfcb0,	// (0x0009500a) list_single_dyc_row_pane_g_ParamLimits

0xfcb0,	// (0x0009500a) list_single_dyc_row_pane_g

0xdf54,	// (0x000932ae) list_single_dyc_row_text_pane_ParamLimits

0xdf54,	// (0x000932ae) list_single_dyc_row_text_pane

0x0574,	// (0x000858ce) bg_sp_fs_scroll_pane

0xdf73,	// (0x000932cd) thumb_sp_fs_scroll_pane

0x3550,	// (0x000888aa) list_medium_line_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_g1

0x3568,	// (0x000888c2) list_medium_line_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t1

0x3550,	// (0x000888aa) list_medium_line_x2_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_g1

0xcf4d,	// (0x000922a7) list_medium_line_x2_g2_ParamLimits

0xcf4d,	// (0x000922a7) list_medium_line_x2_g2

0x0001,

0xf98b,	// (0x00094ce5) list_medium_line_x2_g_ParamLimits

0xf98b,	// (0x00094ce5) list_medium_line_x2_g

0x335a,	// (0x000886b4) list_medium_line_x2_t1_ParamLimits

0x335a,	// (0x000886b4) list_medium_line_x2_t1

0x3550,	// (0x000888aa) list_medium_line_x3_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x3_g1

0xdf7c,	// (0x000932d6) list_medium_line_x3_g2_ParamLimits

0xdf7c,	// (0x000932d6) list_medium_line_x3_g2

0x0001,

0xfcb9,	// (0x00095013) list_medium_line_x3_g_ParamLimits

0xfcb9,	// (0x00095013) list_medium_line_x3_g

0xdf89,	// (0x000932e3) list_medium_line_x3_t1_ParamLimits

0xdf89,	// (0x000932e3) list_medium_line_x3_t1

0xdf9d,	// (0x000932f7) thumb_sp_fs_scroll_pane_g1

0xdfa6,	// (0x00093300) thumb_sp_fs_scroll_pane_g2

0xdfaf,	// (0x00093309) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcbe,	// (0x00095018) thumb_sp_fs_scroll_pane_g

0xdf9d,	// (0x000932f7) bg_sp_fs_scroll_pane_g1

0xdfa6,	// (0x00093300) bg_sp_fs_scroll_pane_g2

0xdfaf,	// (0x00093309) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcbe,	// (0x00095018) bg_sp_fs_scroll_pane_g

0x3550,	// (0x000888aa) list_medium_line_x2_t3_g4_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t3_g4_g1

0x355c,	// (0x000888b6) list_medium_line_x2_t3_g4_g2_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_x2_t3_g4_g2

0x355c,	// (0x000888b6) list_medium_line_x2_t3_g4_g3_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_x2_t3_g4_g3

0x3550,	// (0x000888aa) list_medium_line_x2_t3_g4_g4_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1e0,	// (0x0009453a) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1e0,	// (0x0009453a) list_medium_line_x2_t3_g4_g

0x3568,	// (0x000888c2) list_medium_line_x2_t3_g4_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t3_g4_t1

0x3568,	// (0x000888c2) list_medium_line_x2_t3_g4_t2_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_x2_t3_g4_t2

0x357b,	// (0x000888d5) list_medium_line_x2_t3_g4_t3_ParamLimits

0x357b,	// (0x000888d5) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1d4,	// (0x0009452e) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1d4,	// (0x0009452e) list_medium_line_x2_t3_g4_t

0x3550,	// (0x000888aa) list_medium_line_g2_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_g2_g1

0xcf4d,	// (0x000922a7) list_medium_line_g2_g2_ParamLimits

0xcf4d,	// (0x000922a7) list_medium_line_g2_g2

0x0001,

0xf98b,	// (0x00094ce5) list_medium_line_g2_g_ParamLimits

0xf98b,	// (0x00094ce5) list_medium_line_g2_g

0x3568,	// (0x000888c2) list_medium_line_g2_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_g2_t1

0x3550,	// (0x000888aa) list_medium_line_t3_g2_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_t3_g2_g1

0xcf4d,	// (0x000922a7) list_medium_line_t3_g2_g2_ParamLimits

0xcf4d,	// (0x000922a7) list_medium_line_t3_g2_g2

0x0001,

0xf98b,	// (0x00094ce5) list_medium_line_t3_g2_g_ParamLimits

0xf98b,	// (0x00094ce5) list_medium_line_t3_g2_g

0x3568,	// (0x000888c2) list_medium_line_t3_g2_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t3_g2_t1

0x3568,	// (0x000888c2) list_medium_line_t3_g2_t2_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t3_g2_t2

0x3568,	// (0x000888c2) list_medium_line_t3_g2_t3_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t3_g2_t3

0x0002,

0xfcc5,	// (0x0009501f) list_medium_line_t3_g2_t_ParamLimits

0xfcc5,	// (0x0009501f) list_medium_line_t3_g2_t

0xdfb8,	// (0x00093312) list_medium_line_right_icon_g1

0x498e,	// (0x00089ce8) list_medium_line_right_icon_t1

0x3550,	// (0x000888aa) list_medium_line_t2_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_t2_g1

0x3568,	// (0x000888c2) list_medium_line_t2_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t2_t1

0x3568,	// (0x000888c2) list_medium_line_t2_t2_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t2_t2

0x0001,

0xf990,	// (0x00094cea) list_medium_line_t2_t_ParamLimits

0xf990,	// (0x00094cea) list_medium_line_t2_t

0x3550,	// (0x000888aa) list_medium_line_t3_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_t3_g1

0x3568,	// (0x000888c2) list_medium_line_t3_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t3_t1

0x3568,	// (0x000888c2) list_medium_line_t3_t2_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t3_t2

0x3568,	// (0x000888c2) list_medium_line_t3_t3_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t3_t3

0x0002,

0xfcc5,	// (0x0009501f) list_medium_line_t3_t_ParamLimits

0xfcc5,	// (0x0009501f) list_medium_line_t3_t

0x3550,	// (0x000888aa) list_medium_line_g3_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_g3_g1

0x355c,	// (0x000888b6) list_medium_line_g3_g2_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_g3_g2

0x355c,	// (0x000888b6) list_medium_line_g3_g3_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_g3_g3

0x0002,

0xfccc,	// (0x00095026) list_medium_line_g3_g_ParamLimits

0xfccc,	// (0x00095026) list_medium_line_g3_g

0x3568,	// (0x000888c2) list_medium_line_g3_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_g3_t1

0x3550,	// (0x000888aa) list_medium_line_t2_g3_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_t2_g3_g1

0x355c,	// (0x000888b6) list_medium_line_t2_g3_g2_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_t2_g3_g2

0x355c,	// (0x000888b6) list_medium_line_t2_g3_g3_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_t2_g3_g3

0x0002,

0xfccc,	// (0x00095026) list_medium_line_t2_g3_g_ParamLimits

0xfccc,	// (0x00095026) list_medium_line_t2_g3_g

0x3568,	// (0x000888c2) list_medium_line_t2_g3_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t2_g3_t1

0x3568,	// (0x000888c2) list_medium_line_t2_g3_t2_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t2_g3_t2

0x0001,

0xf990,	// (0x00094cea) list_medium_line_t2_g3_t_ParamLimits

0xf990,	// (0x00094cea) list_medium_line_t2_g3_t

0x3550,	// (0x000888aa) list_medium_line_t3_g3_g1_ParamLimits

0x3550,	// (0x000888aa) list_medium_line_t3_g3_g1

0x355c,	// (0x000888b6) list_medium_line_t3_g3_g2_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_t3_g3_g2

0x355c,	// (0x000888b6) list_medium_line_t3_g3_g3_ParamLimits

0x355c,	// (0x000888b6) list_medium_line_t3_g3_g3

0x0002,

0xfccc,	// (0x00095026) list_medium_line_t3_g3_g_ParamLimits

0xfccc,	// (0x00095026) list_medium_line_t3_g3_g

0x3568,	// (0x000888c2) list_medium_line_t3_g3_t1_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t3_g3_t1

0x3568,	// (0x000888c2) list_medium_line_t3_g3_t2_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t3_g3_t2

0x3568,	// (0x000888c2) list_medium_line_t3_g3_t3_ParamLimits

0x3568,	// (0x000888c2) list_medium_line_t3_g3_t3

0x0002,

0xfcc5,	// (0x0009501f) list_medium_line_t3_g3_t_ParamLimits

0xfcc5,	// (0x0009501f) list_medium_line_t3_g3_t

0xde15,	// (0x0009316f) list_medium_line_right_iconx2_g1

0xde15,	// (0x0009316f) list_medium_line_right_iconx2_g2

0x0001,

0xfcd3,	// (0x0009502d) list_medium_line_right_iconx2_g

0x499d,	// (0x00089cf7) list_medium_line_right_iconx2_t1

0xde15,	// (0x0009316f) list_medium_line_t2_right_iconx2_g1

0xde15,	// (0x0009316f) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd3,	// (0x0009502d) list_medium_line_t2_right_iconx2_g

0x498e,	// (0x00089ce8) list_medium_line_t2_right_iconx2_t1

0x498e,	// (0x00089ce8) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc66,	// (0x00094fc0) list_medium_line_t2_right_iconx2_t

0x498e,	// (0x00089ce8) list_medium_line_x4_t4_t1

0x498e,	// (0x00089ce8) list_medium_line_x4_t4_t2

0x498e,	// (0x00089ce8) list_medium_line_x4_t4_t3

0x498e,	// (0x00089ce8) list_medium_line_x4_t4_t4

0x0003,

0xf29d,	// (0x000945f7) list_medium_line_x4_t4_t

0x9386,	// (0x0008e6e0) tport_appsw_pane_ParamLimits

0x9386,	// (0x0008e6e0) tport_appsw_pane

0x9397,	// (0x0008e6f1) tport_contact_pane_ParamLimits

0x9397,	// (0x0008e6f1) tport_contact_pane

0x93ab,	// (0x0008e705) tport_listscroll_pane_ParamLimits

0x93ab,	// (0x0008e705) tport_listscroll_pane

0x93c3,	// (0x0008e71d) cell_tport_appsw_pane_ParamLimits

0x93c3,	// (0x0008e71d) cell_tport_appsw_pane

0xeb27,	// (0x00093e81) tport_appsw_pane_g1_ParamLimits

0xeb27,	// (0x00093e81) tport_appsw_pane_g1

0xdfc1,	// (0x0009331b) tport_contact_pane_g1

0xdfca,	// (0x00093324) tport_contact_pane_t1

0xdfd8,	// (0x00093332) tport_contact_pane_t2

0x0001,

0xfcd8,	// (0x00095032) tport_contact_pane_t

0xdfe6,	// (0x00093340) list_tport_pane

0x0de3,	// (0x0008613d) scroll_pane_cp_030

0xdff7,	// (0x00093351) cell_tport_appsw_pane_g1

0xe007,	// (0x00093361) cell_tport_appsw_pane_t1

0xe015,	// (0x0009336f) grid_highlight_pane_cp019

0x93f9,	// (0x0008e753) list_tport_double_graphic_pane_ParamLimits

0x93f9,	// (0x0008e753) list_tport_double_graphic_pane

0x334c,	// (0x000886a6) list_highlight_pane_cp023_ParamLimits

0x334c,	// (0x000886a6) list_highlight_pane_cp023

0x9406,	// (0x0008e760) list_tport_double_graphic_pane_g1_ParamLimits

0x9406,	// (0x0008e760) list_tport_double_graphic_pane_g1

0x9413,	// (0x0008e76d) list_tport_double_graphic_pane_t1_ParamLimits

0x9413,	// (0x0008e76d) list_tport_double_graphic_pane_t1

0x9428,	// (0x0008e782) list_tport_double_graphic_pane_t2_ParamLimits

0x9428,	// (0x0008e782) list_tport_double_graphic_pane_t2

0x0001,

0xfce4,	// (0x0009503e) list_tport_double_graphic_pane_t_ParamLimits

0xfce4,	// (0x0009503e) list_tport_double_graphic_pane_t

0x0574,	// (0x000858ce) main_cale_note_pane

0x73c9,	// (0x0008c723) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x73c9,	// (0x0008c723) cell_vitu2_function_top_wide_pane_cp01

0x8bb3,	// (0x0008df0d) wait_bar_pane_cp05_ParamLimits

0x334c,	// (0x000886a6) listscroll_cmail_pane

0xe025,	// (0x0009337f) list_cmail_pane

0x943a,	// (0x0008e794) list_cmail_body_pane

0x943a,	// (0x0008e794) list_single_cmail_header_caption_pane

0x9451,	// (0x0008e7ab) list_single_cmail_header_detail_pane_ParamLimits

0x9451,	// (0x0008e7ab) list_single_cmail_header_detail_pane

0xe048,	// (0x000933a2) list_single_cmail_header_caption_pane_t1

0x947c,	// (0x0008e7d6) list_single_cmail_header_detail_pane_g1_ParamLimits

0x947c,	// (0x0008e7d6) list_single_cmail_header_detail_pane_g1

0xe05f,	// (0x000933b9) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe05f,	// (0x000933b9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfce9,	// (0x00095043) list_single_cmail_header_detail_pane_g_ParamLimits

0xfce9,	// (0x00095043) list_single_cmail_header_detail_pane_g

0x9492,	// (0x0008e7ec) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9492,	// (0x0008e7ec) list_single_cmail_header_detail_pane_t1

0xe09c,	// (0x000933f6) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe09c,	// (0x000933f6) list_single_cmail_header_editor_pane_bg

0xe0b3,	// (0x0009340d) list_cmail_body_pane_g1

0xe0bc,	// (0x00093416) list_cmail_body_pane_t1

0xcd05,	// (0x0009205f) list_single_cmail_header_editor_pane_bg_g1

0x3b2d,	// (0x00088e87) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcd15,	// (0x0009206f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcd0d,	// (0x00092067) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcf45,	// (0x0009229f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcd35,	// (0x0009208f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcd25,	// (0x0009207f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcd2d,	// (0x00092087) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x3b0d,	// (0x00088e67) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x94ce,	// (0x0008e828) calenote_gesture_pane_ParamLimits

0x94ce,	// (0x0008e828) calenote_gesture_pane

0x94ea,	// (0x0008e844) calenote_window_pane_ParamLimits

0x94ea,	// (0x0008e844) calenote_window_pane

0xe0ca,	// (0x00093424) popup_note_window_cp01

0x9506,	// (0x0008e860) calenote_swipe_1_pane_ParamLimits

0x9506,	// (0x0008e860) calenote_swipe_1_pane

0x8ffd,	// (0x0008e357) calenote_swipe_2_pane_ParamLimits

0x8ffd,	// (0x0008e357) calenote_swipe_2_pane

0xdd6f,	// (0x000930c9) calenote_swipe_1_pane_g1_ParamLimits

0xdd6f,	// (0x000930c9) calenote_swipe_1_pane_g1

0xdd7c,	// (0x000930d6) calenote_swipe_1_pane_g2_ParamLimits

0xdd7c,	// (0x000930d6) calenote_swipe_1_pane_g2

0x0001,

0xfc4e,	// (0x00094fa8) calenote_swipe_1_pane_g_ParamLimits

0xfc4e,	// (0x00094fa8) calenote_swipe_1_pane_g

0xe0dc,	// (0x00093436) calenote_swipe_1_pane_t1_ParamLimits

0xe0dc,	// (0x00093436) calenote_swipe_1_pane_t1

0xdd6f,	// (0x000930c9) calenote_swipe_2_pane_g1_ParamLimits

0xdd6f,	// (0x000930c9) calenote_swipe_2_pane_g1

0xe0fb,	// (0x00093455) calenote_swipe_2_pane_g2_ParamLimits

0xe0fb,	// (0x00093455) calenote_swipe_2_pane_g2

0x0001,

0xfcf5,	// (0x0009504f) calenote_swipe_2_pane_g_ParamLimits

0xfcf5,	// (0x0009504f) calenote_swipe_2_pane_g

0xe107,	// (0x00093461) calenote_swipe_2_pane_t1_ParamLimits

0xe107,	// (0x00093461) calenote_swipe_2_pane_t1

0x0574,	// (0x000858ce) main_mup_navstr_pane

0x63f7,	// (0x0008b751) main_mup3_pane_t7_ParamLimits

0x63f7,	// (0x0008b751) main_mup3_pane_t7

0xec48,	// (0x00093fa2) main_mp4_pane_g6_ParamLimits

0xec48,	// (0x00093fa2) main_mp4_pane_g6

0xedfa,	// (0x00094154) main_image3_pane_t4_ParamLimits

0xedfa,	// (0x00094154) main_image3_pane_t4

0x951b,	// (0x0008e875) popup_navstr_preview_pane_ParamLimits

0x951b,	// (0x0008e875) popup_navstr_preview_pane

0x952b,	// (0x0008e885) scroll_navstr_pane_ParamLimits

0x952b,	// (0x0008e885) scroll_navstr_pane

0x0574,	// (0x000858ce) bg_popup_preview_window_pane_cp04

0xe12e,	// (0x00093488) popup_navstr_preview_pane_t1

0x953f,	// (0x0008e899) scroll_navstr_pane_g1_ParamLimits

0x953f,	// (0x0008e899) scroll_navstr_pane_g1

0x9553,	// (0x0008e8ad) scroll_navstr_pane_t1_ParamLimits

0x9553,	// (0x0008e8ad) scroll_navstr_pane_t1

0xe0d3,	// (0x0009342d) bg_button_pane_cp014

0xe0d3,	// (0x0009342d) bg_button_pane_cp030

0x8eb6,	// (0x0008e210) list_double_fisheye_pane_g4_ParamLimits

0x8eb6,	// (0x0008e210) list_double_fisheye_pane_g4

0x8ec2,	// (0x0008e21c) list_double_fisheye_pane_g5_ParamLimits

0x8ec2,	// (0x0008e21c) list_double_fisheye_pane_g5

0xe03c,	// (0x00093396) sp_fs_scroll_pane_cp03

0xde55,	// (0x000931af) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xde61,	// (0x000931bb) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc6b,	// (0x00094fc5) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x90d3,	// (0x0008e42d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe034,	// (0x0009338e) sp_fs_scroll_pane_cp02

0x0df5,	// (0x0008614f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0df5,	// (0x0008614f) popup_sp_fs_calendar_preview_list_single_pane

0x0574,	// (0x000858ce) main_cam6_pano_pane

0xaea5,	// (0x000901ff) main_mup3_pane_ParamLimits

0x0574,	// (0x000858ce) main_phacti_pane

0x8aa6,	// (0x0008de00) bg_button_pane_cp11

0x8abe,	// (0x0008de18) main_mobtv_info_pane_g2_ParamLimits

0x8abe,	// (0x0008de18) main_mobtv_info_pane_g2

0x0001,

0xfbcb,	// (0x00094f25) main_mobtv_info_pane_g_ParamLimits

0xfbcb,	// (0x00094f25) main_mobtv_info_pane_g

0x8c73,	// (0x0008dfcd) sc_clock_pane_t5_ParamLimits

0x8c73,	// (0x0008dfcd) sc_clock_pane_t5

0x8d1e,	// (0x0008e078) main_radioblah_pane_g1_ParamLimits

0xdcb2,	// (0x0009300c) main_radioblah_pane_t3_ParamLimits

0xdcb2,	// (0x0009300c) main_radioblah_pane_t3

0xdcca,	// (0x00093024) main_radioblah_pane_t4_ParamLimits

0xdcca,	// (0x00093024) main_radioblah_pane_t4

0x8d46,	// (0x0008e0a0) main_radioblah_text_pane_ParamLimits

0x8d46,	// (0x0008e0a0) main_radioblah_text_pane

0x8d58,	// (0x0008e0b2) main_radioblah_info_pane_g1_ParamLimits

0x8deb,	// (0x0008e145) main_radioblah_info_pane_t4_ParamLimits

0x8deb,	// (0x0008e145) main_radioblah_info_pane_t4

0x334c,	// (0x000886a6) main_sp_fs_calendar_pane

0x9569,	// (0x0008e8c3) main_phacti_pane_g1

0x9571,	// (0x0008e8cb) phacti_note_pane_ParamLimits

0x9571,	// (0x0008e8cb) phacti_note_pane

0xe145,	// (0x0009349f) phacti_term_pane_ParamLimits

0xe145,	// (0x0009349f) phacti_term_pane

0xe15a,	// (0x000934b4) phacti_note_pane_t1_ParamLimits

0xe15a,	// (0x000934b4) phacti_note_pane_t1

0xe171,	// (0x000934cb) phacti_term_pane_g1

0xe179,	// (0x000934d3) phacti_term_pane_t1_ParamLimits

0xe179,	// (0x000934d3) phacti_term_pane_t1

0xe1a3,	// (0x000934fd) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe1ab,	// (0x00093505) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcff,	// (0x00095059) popup_sp_fs_calendar_preview_list_single_pane_g

0xe1b3,	// (0x0009350d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe1b3,	// (0x0009350d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe1c9,	// (0x00093523) aid_popup_sp_fs_bg_corner_pane

0x34de,	// (0x00088838) popup_sp_fs_calendar_preview_bg_pane_g1

0x0574,	// (0x000858ce) popup_sp_fs_calendar_preview_bg_pane

0xe1d1,	// (0x0009352b) popup_sp_fs_calendar_preview_list_pane

0xb487,	// (0x000907e1) bg_main_sp_fs_cale_pane_ParamLimits

0xb487,	// (0x000907e1) bg_main_sp_fs_cale_pane

0xe1e2,	// (0x0009353c) listscroll_cale_mrui_pane_ParamLimits

0xe1e2,	// (0x0009353c) listscroll_cale_mrui_pane

0xe1f7,	// (0x00093551) listscroll_sp_fs_schedule_track_pane

0xe200,	// (0x0009355a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe200,	// (0x0009355a) main_sp_fs_ctrlbar_pane_cp01

0xe213,	// (0x0009356d) main_sp_fs_ribbon_pane

0xe21b,	// (0x00093575) popup_sp_fs_cale_preview_window

0x95d4,	// (0x0008e92e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x95d4,	// (0x0008e92e) list_single_sp_fs_schedule_track_pane

0x334c,	// (0x000886a6) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x334c,	// (0x000886a6) bg_sp_fs_highlight_list_pane_cp03

0x95e8,	// (0x0008e942) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x95e8,	// (0x0008e942) list_single_sp_fs_schedule_track_pane_g1

0x95f4,	// (0x0008e94e) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x95f4,	// (0x0008e94e) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd04,	// (0x0009505e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd04,	// (0x0009505e) list_single_sp_fs_schedule_track_pane_g

0x9600,	// (0x0008e95a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9600,	// (0x0008e95a) list_single_sp_fs_schedule_track_pane_t1

0x961a,	// (0x0008e974) sp_fs_schedule_track_pane_ParamLimits

0x961a,	// (0x0008e974) sp_fs_schedule_track_pane

0xe22d,	// (0x00093587) sp_fs_schedule_track_pane_g1

0xe235,	// (0x0009358f) sp_fs_schedule_track_pane_g2

0xe23d,	// (0x00093597) sp_fs_schedule_track_pane_g3

0xe245,	// (0x0009359f) sp_fs_schedule_track_pane_g4

0xe24d,	// (0x000935a7) sp_fs_schedule_track_pane_g5

0x0004,

0xfd09,	// (0x00095063) sp_fs_schedule_track_pane_g

0xcd05,	// (0x0009205f) bg_sp_fs_schedule_viewer_highlight_g1

0x3b2d,	// (0x00088e87) bg_sp_fs_schedule_viewer_highlight_g2

0xcd0d,	// (0x00092067) bg_sp_fs_schedule_viewer_highlight_g3

0xcd15,	// (0x0009206f) bg_sp_fs_schedule_viewer_highlight_g4

0xcf45,	// (0x0009229f) bg_sp_fs_schedule_viewer_highlight_g5

0xcd25,	// (0x0009207f) bg_sp_fs_schedule_viewer_highlight_g6

0xcd2d,	// (0x00092087) bg_sp_fs_schedule_viewer_highlight_g7

0xcd35,	// (0x0009208f) bg_sp_fs_schedule_viewer_highlight_g8

0x3b0d,	// (0x00088e67) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd14,	// (0x0009506e) bg_sp_fs_schedule_viewer_highlight_g

0x0574,	// (0x000858ce) bg_main_sp_fs_ribbon_pane

0x962b,	// (0x0008e985) main_sp_fs_ribbon_pane_g1

0xe255,	// (0x000935af) main_sp_fs_ribbon_pane_t1

0x9634,	// (0x0008e98e) main_sp_fs_ribbon_pane_t2

0xe264,	// (0x000935be) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd27,	// (0x00095081) main_sp_fs_ribbon_pane_t

0xe273,	// (0x000935cd) main_sp_fs_ribbon_scheduler_pane

0xe27b,	// (0x000935d5) bg_main_sp_fs_ribbon_pane_g1

0xe284,	// (0x000935de) bg_main_sp_fs_ribbon_pane_g2

0xe28d,	// (0x000935e7) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd2e,	// (0x00095088) bg_main_sp_fs_ribbon_pane_g

0xe295,	// (0x000935ef) main_sp_fs_ribbon_scheduler_pane_g1

0xe29e,	// (0x000935f8) main_sp_fs_ribbon_scheduler_pane_g2

0xe2a7,	// (0x00093601) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd35,	// (0x0009508f) main_sp_fs_ribbon_scheduler_pane_g

0xe2b0,	// (0x0009360a) list_cale_mrui_pane

0x9643,	// (0x0008e99d) sp_fs_scroll_pane_cp07_ParamLimits

0x9643,	// (0x0008e99d) sp_fs_scroll_pane_cp07

0x965b,	// (0x0008e9b5) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x965b,	// (0x0008e9b5) bg_sp_fs_schedule_viewer_highlight

0xe2bd,	// (0x00093617) list_single_sp_fs_schedule_track_pane_cp01

0xe2c5,	// (0x0009361f) list_sp_fs_schedule_track_pane

0xe2cd,	// (0x00093627) sp_fs_scroll_pane_cp06_ParamLimits

0xe2cd,	// (0x00093627) sp_fs_scroll_pane_cp06

0x34de,	// (0x00088838) bgmain_sp_fs_calendar_pane_g1

0x966b,	// (0x0008e9c5) list_single_cale_mrui_pane_ParamLimits

0x966b,	// (0x0008e9c5) list_single_cale_mrui_pane

0xe2df,	// (0x00093639) list_single_cale_mrui_row_pane_ParamLimits

0xe2df,	// (0x00093639) list_single_cale_mrui_row_pane

0x968b,	// (0x0008e9e5) list_single_cale_mrui_row_pane_g1_ParamLimits

0x968b,	// (0x0008e9e5) list_single_cale_mrui_row_pane_g1

0x96c3,	// (0x0008ea1d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x96c3,	// (0x0008ea1d) list_single_cale_mrui_row_pane_t1

0x96d5,	// (0x0008ea2f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x96d5,	// (0x0008ea2f) list_single_cale_mrui_row_pane_t2

0x973b,	// (0x0008ea95) list_single_cale_mrui_row_pane_t3_ParamLimits

0x973b,	// (0x0008ea95) list_single_cale_mrui_row_pane_t3

0x976a,	// (0x0008eac4) list_single_cale_mrui_row_pane_t4_ParamLimits

0x976a,	// (0x0008eac4) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd43,	// (0x0009509d) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd43,	// (0x0009509d) list_single_cale_mrui_row_pane_t

0x9799,	// (0x0008eaf3) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9799,	// (0x0008eaf3) list_single_cmail_header_editor_pane_bg_cp01

0x97bd,	// (0x0008eb17) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x97bd,	// (0x0008eb17) list_single_cmail_header_editor_pane_bg_cp02

0x97db,	// (0x0008eb35) main_radioblah_text_pane_t1_ParamLimits

0x97db,	// (0x0008eb35) main_radioblah_text_pane_t1

0xe302,	// (0x0009365c) cam6_indi_pane_cp01

0xe30a,	// (0x00093664) cam6_mode_pane_cp01

0xe312,	// (0x0009366c) cam6_pano_pane

0xe31b,	// (0x00093675) cam6_zoom_pane_cp01

0xe323,	// (0x0009367d) cam6_pano_image_pane

0xe32c,	// (0x00093686) cam6_pano_pane_g1

0xda19,	// (0x00092d73) cam6_pano_pane_g2

0xe335,	// (0x0009368f) cam6_pano_pane_g3

0xe33e,	// (0x00093698) cam6_pano_pane_g4

0x1565,	// (0x000868bf) cam6_pano_pane_g5

0xe347,	// (0x000936a1) cam6_pano_pane_g6

0xe34f,	// (0x000936a9) cam6_pano_pane_g7

0xe357,	// (0x000936b1) cam6_pano_pane_g8

0xe360,	// (0x000936ba) cam6_pano_pane_g9

0x0008,

0xfd4c,	// (0x000950a6) cam6_pano_pane_g

0x0574,	// (0x000858ce) main_browser_tag_pane

0xe126,	// (0x00093480) grid_navstr_albumart_pane

0xe369,	// (0x000936c3) cell_navstr_albumart_pane_ParamLimits

0xe369,	// (0x000936c3) cell_navstr_albumart_pane

0xb52a,	// (0x00090884) cell_navstr_albumart_pane_g1

0xc5d7,	// (0x00091931) cell_navstr_albumart_pane_g2

0xc5e7,	// (0x00091941) cell_navstr_albumart_pane_g3

0xc5df,	// (0x00091939) cell_navstr_albumart_pane_g4

0x0003,

0xfd5f,	// (0x000950b9) cell_navstr_albumart_pane_g

0x97f4,	// (0x0008eb4e) bt_list_pane_ParamLimits

0x97f4,	// (0x0008eb4e) bt_list_pane

0x9807,	// (0x0008eb61) bt_list_pane_t1

0x9816,	// (0x0008eb70) bt_list_pane_t2

0x0001,

0xfd68,	// (0x000950c2) bt_list_pane_t

0x0574,	// (0x000858ce) main_cale_prevew_pane

0x9825,	// (0x0008eb7f) popup_cale_preview_window_ParamLimits

0x9825,	// (0x0008eb7f) popup_cale_preview_window

0x334c,	// (0x000886a6) bg_popup_preview_window_pane_cp05_ParamLimits

0x334c,	// (0x000886a6) bg_popup_preview_window_pane_cp05

0xe380,	// (0x000936da) list_cale_preview_pane_ParamLimits

0xe380,	// (0x000936da) list_cale_preview_pane

0x983a,	// (0x0008eb94) list_double_cale_preview_pane_ParamLimits

0x983a,	// (0x0008eb94) list_double_cale_preview_pane

0x984b,	// (0x0008eba5) list_single_cale_preview_pane_ParamLimits

0x984b,	// (0x0008eba5) list_single_cale_preview_pane

0xe38c,	// (0x000936e6) list_single_cale_preview_pane_g1

0xe394,	// (0x000936ee) list_single_cale_preview_pane_t1_ParamLimits

0xe394,	// (0x000936ee) list_single_cale_preview_pane_t1

0x985f,	// (0x0008ebb9) list_double_cale_preview_pane_g1

0x9867,	// (0x0008ebc1) list_double_cale_preview_pane_t1_ParamLimits

0x9867,	// (0x0008ebc1) list_double_cale_preview_pane_t1

0x987c,	// (0x0008ebd6) list_double_cale_preview_pane_t2_ParamLimits

0x987c,	// (0x0008ebd6) list_double_cale_preview_pane_t2

0x0001,

0xfd6d,	// (0x000950c7) list_double_cale_preview_pane_t_ParamLimits

0xfd6d,	// (0x000950c7) list_double_cale_preview_pane_t

0x0574,	// (0x000858ce) main_ezdial_pane

0x334c,	// (0x000886a6) main_sp_fs_email_pane_ParamLimits

0x9049,	// (0x0008e3a3) cmail_ddmenu_btn01_pane_ParamLimits

0x9049,	// (0x0008e3a3) cmail_ddmenu_btn01_pane

0x905c,	// (0x0008e3b6) cmail_ddmenu_btn02_pane_ParamLimits

0x905c,	// (0x0008e3b6) cmail_ddmenu_btn02_pane

0x907f,	// (0x0008e3d9) cmail_ddmenu_btn03_pane_ParamLimits

0x907f,	// (0x0008e3d9) cmail_ddmenu_btn03_pane

0x911c,	// (0x0008e476) main_sp_fs_ctrlbar_pane_ParamLimits

0x913d,	// (0x0008e497) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x943a,	// (0x0008e794) list_cmail_body_pane_ParamLimits

0xe056,	// (0x000933b0) bg_button_pane_cp12

0xe06b,	// (0x000933c5) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe06b,	// (0x000933c5) list_single_cmail_header_detail_pane_g3

0xe078,	// (0x000933d2) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe078,	// (0x000933d2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcf0,	// (0x0009504a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcf0,	// (0x0009504a) list_single_cmail_header_detail_pane_t

0xe18e,	// (0x000934e8) phacti_term_pane_t2_ParamLimits

0xe18e,	// (0x000934e8) phacti_term_pane_t2

0x0001,

0xfcfa,	// (0x00095054) phacti_term_pane_t_ParamLimits

0xfcfa,	// (0x00095054) phacti_term_pane_t

0xe3a9,	// (0x00093703) aid_size_list_single_double

0x9894,	// (0x0008ebee) popup_ezdial_listscroll_window

0x98aa,	// (0x0008ec04) popup_number_entry_window_cp01

0x32e3,	// (0x0008863d) bg_popup_call_pane_cp09

0xe3b5,	// (0x0009370f) ezdial_list_pane

0xe3bd,	// (0x00093717) scroll_pane_cp23

0xb487,	// (0x000907e1) bg_button_pane_cp028_ParamLimits

0xb487,	// (0x000907e1) bg_button_pane_cp028

0x98b6,	// (0x0008ec10) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x98b6,	// (0x0008ec10) cmail_ddmenu_btn01_pane_g1

0x98c2,	// (0x0008ec1c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x98c2,	// (0x0008ec1c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd72,	// (0x000950cc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd72,	// (0x000950cc) cmail_ddmenu_btn01_pane_g

0xe3c5,	// (0x0009371f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe3c5,	// (0x0009371f) cmail_ddmenu_btn01_pane_t1

0xb487,	// (0x000907e1) bg_button_pane_cp029_ParamLimits

0xb487,	// (0x000907e1) bg_button_pane_cp029

0x98ce,	// (0x0008ec28) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x98ce,	// (0x0008ec28) cmail_ddmenu_btn02_pane_g1

0x98e6,	// (0x0008ec40) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x98e6,	// (0x0008ec40) cmail_ddmenu_btn02_pane_t1

0x334c,	// (0x000886a6) bg_button_pane_cp031_ParamLimits

0x334c,	// (0x000886a6) bg_button_pane_cp031

0x98ce,	// (0x0008ec28) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x98ce,	// (0x0008ec28) cmail_ddmenu_btn03_pane_g1

0x98e6,	// (0x0008ec40) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x98e6,	// (0x0008ec40) cmail_ddmenu_btn03_pane_t1

0x6d03,	// (0x0008c05d) cell_dialer2_keypad_pane_t1_ParamLimits

0x6d1d,	// (0x0008c077) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6d1d,	// (0x0008c077) cell_dialer2_keypad_pane_t1_copy1

0x8912,	// (0x0008dc6c) ncimui_group_button_pane

0x334c,	// (0x000886a6) main_sp_fs_calendar_pane_ParamLimits

0x943a,	// (0x0008e794) list_single_cmail_header_caption_pane_ParamLimits

0xe1d9,	// (0x00093533) aid_recal_txt_sm_pane

0x0574,	// (0x000858ce) mian_recal_day_pane

0xe21b,	// (0x00093575) popup_sp_fs_cale_preview_window_ParamLimits

0xe3da,	// (0x00093734) list_recal_day_pane

0xe41c,	// (0x00093776) list_single_recal_day_pane_ParamLimits

0xe41c,	// (0x00093776) list_single_recal_day_pane

0xe42e,	// (0x00093788) list_single_recal_day_pane_g1_ParamLimits

0xe42e,	// (0x00093788) list_single_recal_day_pane_g1

0xe43a,	// (0x00093794) list_single_recal_day_pane_g2_ParamLimits

0xe43a,	// (0x00093794) list_single_recal_day_pane_g2

0xe446,	// (0x000937a0) list_single_recal_day_pane_g3_ParamLimits

0xe446,	// (0x000937a0) list_single_recal_day_pane_g3

0x990a,	// (0x0008ec64) list_single_recal_day_pane_g4_ParamLimits

0x990a,	// (0x0008ec64) list_single_recal_day_pane_g4

0xe452,	// (0x000937ac) list_single_recal_day_pane_g5_ParamLimits

0xe452,	// (0x000937ac) list_single_recal_day_pane_g5

0x9922,	// (0x0008ec7c) list_single_recal_day_pane_g6_ParamLimits

0x9922,	// (0x0008ec7c) list_single_recal_day_pane_g6

0x0004,

0xfd81,	// (0x000950db) list_single_recal_day_pane_g_ParamLimits

0xfd81,	// (0x000950db) list_single_recal_day_pane_g

0xe466,	// (0x000937c0) list_single_recal_day_pane_t1

0x992e,	// (0x0008ec88) list_single_recal_day_pane_t2

0x0001,

0xfd8c,	// (0x000950e6) list_single_recal_day_pane_t

0x9940,	// (0x0008ec9a) ncimui_query_button_pane_ParamLimits

0x9940,	// (0x0008ec9a) ncimui_query_button_pane

0x9950,	// (0x0008ecaa) ncimui_query_button_pane_t1_ParamLimits

0x9950,	// (0x0008ecaa) ncimui_query_button_pane_t1

0xe478,	// (0x000937d2) ncimui_query_button_pane_t2_ParamLimits

0xe478,	// (0x000937d2) ncimui_query_button_pane_t2

0x0001,

0xfd91,	// (0x000950eb) ncimui_query_button_pane_t_ParamLimits

0xfd91,	// (0x000950eb) ncimui_query_button_pane_t

0x9963,	// (0x0008ecbd) query_button_pane_ParamLimits

0x9963,	// (0x0008ecbd) query_button_pane

0x0574,	// (0x000858ce) bg_button_pane_cp0028

0xe48b,	// (0x000937e5) query_button_pane_t1

0x5885,	// (0x0008abdf) main_tport_pane_ParamLimits

0x934d,	// (0x0008e6a7) bg_popup_window_pane_cp01_ParamLimits

0x934d,	// (0x0008e6a7) bg_popup_window_pane_cp01

0x9364,	// (0x0008e6be) heading_pane_cp08_ParamLimits

0x9364,	// (0x0008e6be) heading_pane_cp08

0x9375,	// (0x0008e6cf) heading_pane_cp07_ParamLimits

0x9375,	// (0x0008e6cf) heading_pane_cp07

0xdff7,	// (0x00093351) cell_tport_appsw_pane_g2

0x0002,

0xfcdd,	// (0x00095037) cell_tport_appsw_pane_g

0xb522,	// (0x0009087c) input_candi_list_open_g1

0x47bc,	// (0x00089b16) list_cale_time_pane_g6_ParamLimits

0x47bc,	// (0x00089b16) list_cale_time_pane_g6

0x5e88,	// (0x0008b1e2) aid_size_touch_calib_1_ParamLimits

0x5e88,	// (0x0008b1e2) aid_size_touch_calib_1

0x5e9a,	// (0x0008b1f4) aid_size_touch_calib_2_ParamLimits

0x5e9a,	// (0x0008b1f4) aid_size_touch_calib_2

0x5eb0,	// (0x0008b20a) aid_size_touch_calib_3_ParamLimits

0x5eb0,	// (0x0008b20a) aid_size_touch_calib_3

0x5ec8,	// (0x0008b222) aid_size_touch_calib_4_ParamLimits

0x5ec8,	// (0x0008b222) aid_size_touch_calib_4

0x5edc,	// (0x0008b236) main_touch_calib_button_group_pane_ParamLimits

0x5edc,	// (0x0008b236) main_touch_calib_button_group_pane

0x5ef4,	// (0x0008b24e) main_touch_calib_pane_g1_ParamLimits

0x5f06,	// (0x0008b260) main_touch_calib_pane_g2_ParamLimits

0x5f18,	// (0x0008b272) main_touch_calib_pane_g3_ParamLimits

0x5f2a,	// (0x0008b284) main_touch_calib_pane_g4_ParamLimits

0xf6d8,	// (0x00094a32) main_touch_calib_pane_g_ParamLimits

0x5f3c,	// (0x0008b296) main_touch_calib_pane_t1_ParamLimits

0x5f54,	// (0x0008b2ae) main_touch_calib_pane_t2_ParamLimits

0x5f6c,	// (0x0008b2c6) main_touch_calib_pane_t3_ParamLimits

0x5f7e,	// (0x0008b2d8) main_touch_calib_pane_t4_ParamLimits

0x5f90,	// (0x0008b2ea) main_touch_calib_pane_t5_ParamLimits

0xf6e1,	// (0x00094a3b) main_touch_calib_pane_t_ParamLimits

0x133d,	// (0x00086697) list_single_fp_cale_pane_g3_ParamLimits

0x133d,	// (0x00086697) list_single_fp_cale_pane_g3

0xaea5,	// (0x000901ff) bg_button_pane_cp012_ParamLimits

0xaea5,	// (0x000901ff) bg_vkb2_func_pane_cp03_ParamLimits

0x7b78,	// (0x0008ced2) cell_vitu2_function_top_pane_g1_ParamLimits

0xaea5,	// (0x000901ff) bg_vkb2_func_pane_cp04_ParamLimits

0x88a2,	// (0x0008dbfc) main_ncimui_button_group_pane_ParamLimits

0x88a2,	// (0x0008dbfc) main_ncimui_button_group_pane

0x8900,	// (0x0008dc5a) main_ncimui_pane_t3_ParamLimits

0x8900,	// (0x0008dc5a) main_ncimui_pane_t3

0xe13c,	// (0x00093496) phacti_button_group_pane

0xe3a9,	// (0x00093703) aid_size_list_single_double_ParamLimits

0x9894,	// (0x0008ebee) popup_ezdial_listscroll_window_ParamLimits

0x98aa,	// (0x0008ec04) popup_number_entry_window_cp01_ParamLimits

0x9975,	// (0x0008eccf) phacti_button_pane_ParamLimits

0x9975,	// (0x0008eccf) phacti_button_pane

0x0574,	// (0x000858ce) bg_button_pane_cp14

0xe499,	// (0x000937f3) phacti_button_pane_t1

0x9984,	// (0x0008ecde) main_touch_calib_button_pane_ParamLimits

0x9984,	// (0x0008ecde) main_touch_calib_button_pane

0x0ce8,	// (0x00086042) bg_button_pane_cp18_ParamLimits

0x0ce8,	// (0x00086042) bg_button_pane_cp18

0x999f,	// (0x0008ecf9) main_touch_calib_button_pane_t1_ParamLimits

0x999f,	// (0x0008ecf9) main_touch_calib_button_pane_t1

0x99b5,	// (0x0008ed0f) main_touch_calib_button_pane_t2_ParamLimits

0x99b5,	// (0x0008ed0f) main_touch_calib_button_pane_t2

0x0001,

0xfd96,	// (0x000950f0) main_touch_calib_button_pane_t_ParamLimits

0xfd96,	// (0x000950f0) main_touch_calib_button_pane_t

0x0574,	// (0x000858ce) cell_ncimui_button_pane

0x0574,	// (0x000858ce) bg_button_pane_cp032

0xe4a7,	// (0x00093801) cell_ncimui_button_pane_t1

0xedda,	// (0x00094134) image3_infobar_pane_ParamLimits

0xedda,	// (0x00094134) image3_infobar_pane

0x8c9b,	// (0x0008dff5) fs_bigclock_status_pane_ParamLimits

0x8c9b,	// (0x0008dff5) fs_bigclock_status_pane

0x8ca8,	// (0x0008e002) main_fs_bigclock_clock_pane_ParamLimits

0x8ca8,	// (0x0008e002) main_fs_bigclock_clock_pane

0x8cca,	// (0x0008e024) main_fs_bigclock_indi_pane_ParamLimits

0x8cca,	// (0x0008e024) main_fs_bigclock_indi_pane

0x8cf4,	// (0x0008e04e) main_fs_bigclock_swipe_pane_ParamLimits

0x8cf4,	// (0x0008e04e) main_fs_bigclock_swipe_pane

0x0574,	// (0x000858ce) main_fs_clock_dumped_data

0xdb26,	// (0x00092e80) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdb26,	// (0x00092e80) list_single_fs_bigclock_indicator_pane_g1

0xdb40,	// (0x00092e9a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdb40,	// (0x00092e9a) list_single_fs_bigclock_indicator_pane_g2

0xdb5a,	// (0x00092eb4) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdb5a,	// (0x00092eb4) list_single_fs_bigclock_indicator_pane_g3

0xdb74,	// (0x00092ece) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdb74,	// (0x00092ece) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbff,	// (0x00094f59) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbff,	// (0x00094f59) list_single_fs_bigclock_indicator_pane_g

0xdb9d,	// (0x00092ef7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdb9d,	// (0x00092ef7) list_single_fs_bigclock_indicator_pane_t1

0xdbc5,	// (0x00092f1f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdbc5,	// (0x00092f1f) list_single_fs_bigclock_indicator_pane_t2

0xdbed,	// (0x00092f47) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdbed,	// (0x00092f47) list_single_fs_bigclock_indicator_pane_t3

0xdc15,	// (0x00092f6f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xdc15,	// (0x00092f6f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0a,	// (0x00094f64) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0a,	// (0x00094f64) list_single_fs_bigclock_indicator_pane_t

0xe4b5,	// (0x0009380f) image3_infobar_fav_pane_ParamLimits

0xe4b5,	// (0x0009380f) image3_infobar_fav_pane

0xe4c5,	// (0x0009381f) image3_infobar_loc_pane_ParamLimits

0xe4c5,	// (0x0009381f) image3_infobar_loc_pane

0xe4d9,	// (0x00093833) image3_infobar_time_pane_ParamLimits

0xe4d9,	// (0x00093833) image3_infobar_time_pane

0x34de,	// (0x00088838) image3_infobar_time_pane_g1

0xe4e9,	// (0x00093843) image3_infobar_time_pane_t1

0x34de,	// (0x00088838) image3_infobar_loc_pane_g1

0xe4f7,	// (0x00093851) image3_infobar_loc_pane_g2

0x0001,

0xfd9b,	// (0x000950f5) image3_infobar_loc_pane_g

0xe4ff,	// (0x00093859) image3_infobar_loc_pane_t1

0x34de,	// (0x00088838) image3_infobar_fav_pane_g1

0xe50d,	// (0x00093867) image3_infobar_fav_pane_g2

0x0001,

0xfda0,	// (0x000950fa) image3_infobar_fav_pane_g

0xe515,	// (0x0009386f) fs_bigclock_status_battery_pane

0xe51e,	// (0x00093878) fs_bigclock_status_signal_pane

0xe527,	// (0x00093881) fs_bigclock_status_title_pane

0xe530,	// (0x0009388a) fs_bigclock_status_signal_pane_g1

0xe539,	// (0x00093893) fs_bigclock_status_signal_pane_g2

0x0001,

0xfda5,	// (0x000950ff) fs_bigclock_status_signal_pane_g

0xe541,	// (0x0009389b) fs_bigclock_status_battery_pane_g1

0xe54a,	// (0x000938a4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdaa,	// (0x00095104) fs_bigclock_status_battery_pane_g

0xe552,	// (0x000938ac) fs_bigclock_status_title_pane_t1

0x99d3,	// (0x0008ed2d) main_fs_bigclock_clock_pane_g1

0x99e5,	// (0x0008ed3f) main_fs_bigclock_clock_pane_g2

0x99f6,	// (0x0008ed50) main_fs_bigclock_clock_pane_g3

0x99f6,	// (0x0008ed50) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdaf,	// (0x00095109) main_fs_bigclock_clock_pane_g

0x9a09,	// (0x0008ed63) main_fs_bigclock_clock_pane_t1

0x9a24,	// (0x0008ed7e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdb8,	// (0x00095112) main_fs_bigclock_clock_pane_t

0xe560,	// (0x000938ba) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe560,	// (0x000938ba) list_single_fs_bigclock_indicator_pane

0xe571,	// (0x000938cb) list_single_fs_bigclock_pane_ParamLimits

0xe571,	// (0x000938cb) list_single_fs_bigclock_pane

0xe597,	// (0x000938f1) main_fs_bigclock_indicator_pane_t1

0xe5a6,	// (0x00093900) list_single_fs_bigclock_pane_g1

0xe5ae,	// (0x00093908) list_single_fs_bigclock_pane_t1

0x34de,	// (0x00088838) main_fs_bigclock_swipe_pane_g1

0xe5ee,	// (0x00093948) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdc9,	// (0x00095123) main_fs_bigclock_swipe_pane_g

0xe5f6,	// (0x00093950) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe5f6,	// (0x00093950) main_fs_bigclock_swipe_pane_t1

0x4a84,	// (0x00089dde) call_type_pane_ParamLimits

0x0574,	// (0x000858ce) main_btmg_pane

0x96b7,	// (0x0008ea11) list_single_cale_mrui_row_pane_g2_ParamLimits

0x96b7,	// (0x0008ea11) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd3c,	// (0x00095096) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd3c,	// (0x00095096) list_single_cale_mrui_row_pane_g

0xe403,	// (0x0009375d) list_recal_vselct_arw_lo_pane

0xe40b,	// (0x00093765) list_recal_vselct_arw_up_pane

0xe413,	// (0x0009376d) list_recal_vselct_pane

0xe613,	// (0x0009396d) btmg_button_pane

0x9a84,	// (0x0008edde) main_btmg_pane_g1

0x0574,	// (0x000858ce) bg_button_pane_cp044

0xe61b,	// (0x00093975) btmg_button_pane_t1

0xc777,	// (0x00091ad1) aid_listscroll_gen

0x334c,	// (0x000886a6) main_cntbar_detail_pane

0xe01d,	// (0x00093377) list_cmail_folder_pane

0xe03c,	// (0x00093396) sp_fs_scroll_pane_cp03_ParamLimits

0x9a8c,	// (0x0008ede6) list_single_fs_dyc_pane_cp01_ParamLimits

0x9a8c,	// (0x0008ede6) list_single_fs_dyc_pane_cp01

0xe629,	// (0x00093983) aid_size_cmail_indent

0xe632,	// (0x0009398c) list_single_dyc_row_pane_cp01

0x9aca,	// (0x0008ee24) cntbar_detail_list_pane_ParamLimits

0x9aca,	// (0x0008ee24) cntbar_detail_list_pane

0x9b10,	// (0x0008ee6a) main_cntbar_detail_cont_pane_ParamLimits

0x9b10,	// (0x0008ee6a) main_cntbar_detail_cont_pane

0x9b24,	// (0x0008ee7e) scroll_pane_cp032_ParamLimits

0x9b24,	// (0x0008ee7e) scroll_pane_cp032

0x9b30,	// (0x0008ee8a) cntbar_detail_list_event_pane_ParamLimits

0x9b30,	// (0x0008ee8a) cntbar_detail_list_event_pane

0x9ada,	// (0x0008ee34) cntbar_detail_list_shct_pane

0xe63b,	// (0x00093995) aid_list_gen

0x0de3,	// (0x0008613d) aid_scroll

0xd260,	// (0x000925ba) aid_size_touch_scroll_bar

0x818a,	// (0x0008d4e4) aid_list_double

0xd28b,	// (0x000925e5) aid_list_single

0xd28b,	// (0x000925e5) aid_list_single_lg

0x9b41,	// (0x0008ee9b) aid_list_z_g_a_sm

0x9b49,	// (0x0008eea3) aid_list_z_g_d

0x9b51,	// (0x0008eeab) aid_txt_z_prm

0x9b5f,	// (0x0008eeb9) aid_txt_z_prm_cp01

0x9b6d,	// (0x0008eec7) aid_txt_z_sec

0x9b7b,	// (0x0008eed5) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9b7b,	// (0x0008eed5) main_cntbar_detail_cont_pane_g1

0x9b8f,	// (0x0008eee9) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9b8f,	// (0x0008eee9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdce,	// (0x00095128) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdce,	// (0x00095128) main_cntbar_detail_cont_pane_g

0xe644,	// (0x0009399e) main_cntbar_detail_cont_pane_t1

0xe652,	// (0x000939ac) main_cntbar_detail_cont_pane_t2

0xe660,	// (0x000939ba) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdd3,	// (0x0009512d) main_cntbar_detail_cont_pane_t

0x9b9f,	// (0x0008eef9) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9b9f,	// (0x0008eef9) cell_cntbar_detail_list_shct_pane

0xe66e,	// (0x000939c8) cntbar_detail_list_shct_pane_g1

0xe677,	// (0x000939d1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdda,	// (0x00095134) cntbar_detail_list_shct_pane_g

0x9bb1,	// (0x0008ef0b) cntbar_detail_list_event_pane_g1_ParamLimits

0x9bb1,	// (0x0008ef0b) cntbar_detail_list_event_pane_g1

0x9bbd,	// (0x0008ef17) cntbar_detail_list_event_pane_g2_ParamLimits

0x9bbd,	// (0x0008ef17) cntbar_detail_list_event_pane_g2

0x0005,

0xfddf,	// (0x00095139) cntbar_detail_list_event_pane_g_ParamLimits

0xfddf,	// (0x00095139) cntbar_detail_list_event_pane_g

0x9c29,	// (0x0008ef83) cntbar_detail_list_event_pane_t1_ParamLimits

0x9c29,	// (0x0008ef83) cntbar_detail_list_event_pane_t1

0x9c3e,	// (0x0008ef98) cntbar_detail_list_event_pane_t2_ParamLimits

0x9c3e,	// (0x0008ef98) cntbar_detail_list_event_pane_t2

0x0002,

0xfdec,	// (0x00095146) cntbar_detail_list_event_pane_t_ParamLimits

0xfdec,	// (0x00095146) cntbar_detail_list_event_pane_t

0x34de,	// (0x00088838) cell_cntbar_detail_list_shct_pane_g1

0xb36a,	// (0x000906c4) navi_pane_mv_g3

0x334c,	// (0x000886a6) main_cntbar_detail_pane_ParamLimits

0x0574,	// (0x000858ce) main_notif_wgt_pane

0xebd6,	// (0x00093f30) aid_tch_main_mp4_pane_g4

0xedd2,	// (0x0009412c) popup_slider_window_cp02

0xe3f9,	// (0x00093753) list_recal_day_event_pane

0x9aa2,	// (0x0008edfc) cntbar_detail_btn_pane_ParamLimits

0x9aa2,	// (0x0008edfc) cntbar_detail_btn_pane

0x9ab5,	// (0x0008ee0f) cntbar_detail_btn_pane_cp01_ParamLimits

0x9ab5,	// (0x0008ee0f) cntbar_detail_btn_pane_cp01

0x9ada,	// (0x0008ee34) cntbar_detail_list_shct_pane_ParamLimits

0x9aea,	// (0x0008ee44) cntbar_detail_pane_g1_ParamLimits

0x9aea,	// (0x0008ee44) cntbar_detail_pane_g1

0x9afa,	// (0x0008ee54) cntbar_detail_pane_t1_ParamLimits

0x9afa,	// (0x0008ee54) cntbar_detail_pane_t1

0x9bc9,	// (0x0008ef23) cntbar_detail_list_event_pane_g3_ParamLimits

0x9bc9,	// (0x0008ef23) cntbar_detail_list_event_pane_g3

0x9be1,	// (0x0008ef3b) cntbar_detail_list_event_pane_g4_ParamLimits

0x9be1,	// (0x0008ef3b) cntbar_detail_list_event_pane_g4

0x9bf9,	// (0x0008ef53) cntbar_detail_list_event_pane_g5_ParamLimits

0x9bf9,	// (0x0008ef53) cntbar_detail_list_event_pane_g5

0x9c11,	// (0x0008ef6b) cntbar_detail_list_event_pane_g6_ParamLimits

0x9c11,	// (0x0008ef6b) cntbar_detail_list_event_pane_g6

0x9c53,	// (0x0008efad) cntbar_detail_list_event_pane_t3_ParamLimits

0x9c53,	// (0x0008efad) cntbar_detail_list_event_pane_t3

0x9c65,	// (0x0008efbf) popup_notif_wgt_window_ParamLimits

0x9c65,	// (0x0008efbf) popup_notif_wgt_window

0x9c7a,	// (0x0008efd4) popup_submenu_window_cp01_ParamLimits

0x9c7a,	// (0x0008efd4) popup_submenu_window_cp01

0x32e3,	// (0x0008863d) bg_popup_window_pane_cp10

0xe680,	// (0x000939da) listscroll_notif_wgt_pane

0xe691,	// (0x000939eb) list_notif_wgt_window

0xe69a,	// (0x000939f4) scroll_pane_cp033

0x9c8a,	// (0x0008efe4) list_notif_wgt_row_pane_ParamLimits

0x9c8a,	// (0x0008efe4) list_notif_wgt_row_pane

0xe6a3,	// (0x000939fd) aid_size_list_notif_wgt_del

0xe6b0,	// (0x00093a0a) list_notif_wgt_row_pane_g1

0xe6bc,	// (0x00093a16) list_notif_wgt_row_pane_g2

0xe6d0,	// (0x00093a2a) list_notif_wgt_row_pane_g3

0x0002,

0xfdf3,	// (0x0009514d) list_notif_wgt_row_pane_g

0xe6dd,	// (0x00093a37) list_notif_wgt_row_pane_t1

0xe6f3,	// (0x00093a4d) list_notif_wgt_row_pane_t2

0xe705,	// (0x00093a5f) list_notif_wgt_row_pane_t3

0x0002,

0xfdfa,	// (0x00095154) list_notif_wgt_row_pane_t

0xcf6c,	// (0x000922c6) list_recal_day_event_pane_g1

0xe717,	// (0x00093a71) list_recal_day_event_pane_t1

0x0574,	// (0x000858ce) bg_button_pane_cp045

0x9c9a,	// (0x0008eff4) cntbar_detail_btn_pane_t1

0xb487,	// (0x000907e1) main_callh_pane_ParamLimits

0xb487,	// (0x000907e1) main_callh_pane

0x0574,	// (0x000858ce) main_coverflow0_pane

0x0574,	// (0x000858ce) main_wgtman_pane

0x8d08,	// (0x0008e062) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8d08,	// (0x0008e062) main_fs_bigclock_unlock_btn_pane

0xdfef,	// (0x00093349) bg_button_pane_cp16

0xdfff,	// (0x00093359) cell_tport_appsw_pane_g3

0x9ca8,	// (0x0008f002) cf0_flow_pane_ParamLimits

0x9ca8,	// (0x0008f002) cf0_flow_pane

0xe726,	// (0x00093a80) listscroll_cf0_pane

0xe72f,	// (0x00093a89) main_cf0_pane_g1

0x9cbd,	// (0x0008f017) main_cf0_pane_t1_ParamLimits

0x9cbd,	// (0x0008f017) main_cf0_pane_t1

0x9cd2,	// (0x0008f02c) main_cf0_pane_t2_ParamLimits

0x9cd2,	// (0x0008f02c) main_cf0_pane_t2

0x0001,

0xfe06,	// (0x00095160) main_cf0_pane_t_ParamLimits

0xfe06,	// (0x00095160) main_cf0_pane_t

0xe741,	// (0x00093a9b) scroll_pane_cp11

0x9ce7,	// (0x0008f041) cf0_flow_pane_g1

0x9cef,	// (0x0008f049) cf0_flow_pane_g2

0x0001,

0xfe0b,	// (0x00095165) cf0_flow_pane_g

0x9cf7,	// (0x0008f051) cf0_flow_pane_t1

0x0574,	// (0x000858ce) main_call6_pane

0x0574,	// (0x000858ce) main_calllock_pane

0x9d05,	// (0x0008f05f) call6_btn_grp_pane_ParamLimits

0x9d05,	// (0x0008f05f) call6_btn_grp_pane

0x9d1b,	// (0x0008f075) call6_pane_g1_ParamLimits

0x9d1b,	// (0x0008f075) call6_pane_g1

0x9d2e,	// (0x0008f088) popup_call6_1st_window_ParamLimits

0x9d2e,	// (0x0008f088) popup_call6_1st_window

0x9d3d,	// (0x0008f097) popup_call6_2nd_window_ParamLimits

0x9d3d,	// (0x0008f097) popup_call6_2nd_window

0x9d4c,	// (0x0008f0a6) cell_call6_btn_pane_ParamLimits

0x9d4c,	// (0x0008f0a6) cell_call6_btn_pane

0x32e3,	// (0x0008863d) bg_popup_call2_in_pane_cp03

0xe74a,	// (0x00093aa4) popup_call6_1st_window_g1

0xe752,	// (0x00093aac) popup_call6_1st_window_g2

0xe75a,	// (0x00093ab4) popup_call6_1st_window_g3

0x0002,

0xfe10,	// (0x0009516a) popup_call6_1st_window_g

0xe762,	// (0x00093abc) popup_call6_1st_window_t1

0xe771,	// (0x00093acb) popup_call6_1st_window_t2

0xe77f,	// (0x00093ad9) popup_call6_1st_window_t3

0x0002,

0xfe17,	// (0x00095171) popup_call6_1st_window_t

0x32e3,	// (0x0008863d) bg_popup_call2_in_pane_cp04

0xe78d,	// (0x00093ae7) popup_call6_2nd_window_g1

0xe795,	// (0x00093aef) popup_call6_2nd_window_g2

0xe79d,	// (0x00093af7) popup_call6_2nd_window_g3

0x0002,

0xfe1e,	// (0x00095178) popup_call6_2nd_window_g

0xe7a5,	// (0x00093aff) popup_call6_2nd_window_t1

0xaeb3,	// (0x0009020d) bg_button_pane_cp15

0xf047,	// (0x000943a1) cell_call6_btn_pane_g1

0xf050,	// (0x000943aa) cell_call6_btn_pane_t1

0x9d60,	// (0x0008f0ba) listscroll_wgtman_pane_ParamLimits

0x9d60,	// (0x0008f0ba) listscroll_wgtman_pane

0x9d81,	// (0x0008f0db) wgtman_btn_pane_ParamLimits

0x9d81,	// (0x0008f0db) wgtman_btn_pane

0xb0ca,	// (0x00090424) aid_scroll_copy1

0xe7b4,	// (0x00093b0e) list_wgtman_pane

0x9dc1,	// (0x0008f11b) wgtman_btn_pane_g1_ParamLimits

0x9dc1,	// (0x0008f11b) wgtman_btn_pane_g1

0x9ded,	// (0x0008f147) wgtman_btn_pane_t1_ParamLimits

0x9ded,	// (0x0008f147) wgtman_btn_pane_t1

0xe7be,	// (0x00093b18) wgtman_btn_pane_t2_ParamLimits

0xe7be,	// (0x00093b18) wgtman_btn_pane_t2

0x0001,

0xfe25,	// (0x0009517f) wgtman_btn_pane_t_ParamLimits

0xfe25,	// (0x0009517f) wgtman_btn_pane_t

0x9e2a,	// (0x0008f184) listrow_wgtman_pane_ParamLimits

0x9e2a,	// (0x0008f184) listrow_wgtman_pane

0x9e3c,	// (0x0008f196) listrow_wgtman_pane_g1

0x9e49,	// (0x0008f1a3) listrow_wgtman_pane_g2

0x0001,

0xfe2a,	// (0x00095184) listrow_wgtman_pane_g

0x9e61,	// (0x0008f1bb) listrow_wgtman_pane_t1

0x9e79,	// (0x0008f1d3) listrow_wgtman_pane_t2

0x0001,

0xfe2f,	// (0x00095189) listrow_wgtman_pane_t

0x9e9f,	// (0x0008f1f9) wait_bar_pane_cp09

0xe7d5,	// (0x00093b2f) main_calllock_btn_pane

0xe7dd,	// (0x00093b37) main_calllock_pane_g1

0x0574,	// (0x000858ce) bg_button_pane_cp17

0xe7e6,	// (0x00093b40) main_calllock_btn_pane_g1

0xe7ef,	// (0x00093b49) main_calllock_btn_pane_t1

0x0574,	// (0x000858ce) main_dialer3_pane

0x0574,	// (0x000858ce) main_fmrd2_pane

0x34de,	// (0x00088838) main_fs_bigclock_unlock_btn_pane_g1

0xe806,	// (0x00093b60) main_fs_bigclock_unlock_btn_pane_t1

0x9eb1,	// (0x0008f20b) area_fmrd2_info_pane_ParamLimits

0x9eb1,	// (0x0008f20b) area_fmrd2_info_pane

0x9ec0,	// (0x0008f21a) area_fmrd2_visual_pane_ParamLimits

0x9ec0,	// (0x0008f21a) area_fmrd2_visual_pane

0x9ece,	// (0x0008f228) fmrd2_indi_pane_ParamLimits

0x9ece,	// (0x0008f228) fmrd2_indi_pane

0x9edb,	// (0x0008f235) area_fmrd2_visual_pane_g1

0x9ee3,	// (0x0008f23d) area_fmrd2_visual_pane_t1

0x9ef1,	// (0x0008f24b) area_fmrd2_visual_pane_t2

0x9eff,	// (0x0008f259) area_fmrd2_visual_pane_t3

0x0002,

0xfe39,	// (0x00095193) area_fmrd2_visual_pane_t

0x9f0d,	// (0x0008f267) area_fmrd2_info_pane_g1

0x9f15,	// (0x0008f26f) area_fmrd2_info_pane_t1

0x9f23,	// (0x0008f27d) area_fmrd2_info_pane_t2

0x9f31,	// (0x0008f28b) area_fmrd2_info_pane_t3

0x9f3f,	// (0x0008f299) area_fmrd2_info_pane_t4

0x0003,

0xfe40,	// (0x0009519a) area_fmrd2_info_pane_t

0x9f4d,	// (0x0008f2a7) fmrd2_indi_pane_t1

0x9f5b,	// (0x0008f2b5) fmrd2_indi_pane_t2

0x9f69,	// (0x0008f2c3) fmrd2_indi_pane_t3

0x0002,

0xfe49,	// (0x000951a3) fmrd2_indi_pane_t

0xdb83,	// (0x00092edd) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdb83,	// (0x00092edd) list_single_fs_bigclock_indicator_pane_g5

0xdc31,	// (0x00092f8b) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xdc31,	// (0x00092f8b) list_single_fs_bigclock_indicator_pane_t5

0x9585,	// (0x0008e8df) aid_cell_bcale_month_pane_ParamLimits

0x9585,	// (0x0008e8df) aid_cell_bcale_month_pane

0x95a3,	// (0x0008e8fd) bcale_month_pane_ParamLimits

0x95a3,	// (0x0008e8fd) bcale_month_pane

0x95bb,	// (0x0008e915) bcale_preview_pane_ParamLimits

0x95bb,	// (0x0008e915) bcale_preview_pane

0xe5ae,	// (0x00093908) list_single_fs_bigclock_pane_t1_ParamLimits

0xe5ca,	// (0x00093924) list_single_fs_bigclock_pane_t2_ParamLimits

0xe5ca,	// (0x00093924) list_single_fs_bigclock_pane_t2

0x0001,

0xfdc4,	// (0x0009511e) list_single_fs_bigclock_pane_t_ParamLimits

0xfdc4,	// (0x0009511e) list_single_fs_bigclock_pane_t

0xe7fe,	// (0x00093b58) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe34,	// (0x0009518e) main_fs_bigclock_unlock_btn_pane_g

0x9f77,	// (0x0008f2d1) aid_dia3_key_size_ParamLimits

0x9f77,	// (0x0008f2d1) aid_dia3_key_size

0x9f86,	// (0x0008f2e0) aid_dia3_listrow_size_ParamLimits

0x9f86,	// (0x0008f2e0) aid_dia3_listrow_size

0x9f99,	// (0x0008f2f3) dia3_keypad_fun_pane_ParamLimits

0x9f99,	// (0x0008f2f3) dia3_keypad_fun_pane

0x9fad,	// (0x0008f307) dia3_keypad_num_pane_ParamLimits

0x9fad,	// (0x0008f307) dia3_keypad_num_pane

0x9fbe,	// (0x0008f318) dia3_listscroll_pane_ParamLimits

0x9fbe,	// (0x0008f318) dia3_listscroll_pane

0x9fcf,	// (0x0008f329) dia3_numentry_pane_ParamLimits

0x9fcf,	// (0x0008f329) dia3_numentry_pane

0xe814,	// (0x00093b6e) dia3_list_pane

0xe81d,	// (0x00093b77) scroll_pane_cp12

0x0574,	// (0x000858ce) bg_dia3_numentry_pane

0x9fe3,	// (0x0008f33d) dia3_numentry_pane_t1

0x9ff2,	// (0x0008f34c) cell_dia3_key_num_pane

0x9ffa,	// (0x0008f354) cell_dia3_key0_fun_pane_ParamLimits

0x9ffa,	// (0x0008f354) cell_dia3_key0_fun_pane

0xa00e,	// (0x0008f368) cell_dia3_key1_fun_pane_ParamLimits

0xa00e,	// (0x0008f368) cell_dia3_key1_fun_pane

0xa025,	// (0x0008f37f) dia3_listrow_pane

0xd892,	// (0x00092bec) bg_dia3_numentry_pane_g1

0x0574,	// (0x000858ce) bg_button_pane_cp21

0xe826,	// (0x00093b80) cell_dia3_key_num_pane_t1

0xe834,	// (0x00093b8e) cell_dia3_key_num_pane_t2

0xe843,	// (0x00093b9d) cell_dia3_key_num_pane_t3

0xe852,	// (0x00093bac) cell_dia3_key_num_pane_t4

0x0003,

0xfe50,	// (0x000951aa) cell_dia3_key_num_pane_t

0x0574,	// (0x000858ce) bg_button_pane_cp19

0xe861,	// (0x00093bbb) cell_dia3_key0_fun_pane_g1

0x0574,	// (0x000858ce) bg_button_pane_cp20

0xa037,	// (0x0008f391) cell_dia3_key1_fun_pane_g1

0xa03f,	// (0x0008f399) area_left_week_number_pane

0xa04b,	// (0x0008f3a5) area_top_day_name_pane

0xa05c,	// (0x0008f3b6) frame_month_view_pane

0xe869,	// (0x00093bc3) grid_month_view_pane

0xa06d,	// (0x0008f3c7) cell_top_day_name_pane_ParamLimits

0xa06d,	// (0x0008f3c7) cell_top_day_name_pane

0xa090,	// (0x0008f3ea) cell_area_left_week_number_pane_ParamLimits

0xa090,	// (0x0008f3ea) cell_area_left_week_number_pane

0xa0a4,	// (0x0008f3fe) cell_month_view_pane_ParamLimits

0xa0a4,	// (0x0008f3fe) cell_month_view_pane

0xe877,	// (0x00093bd1) frm_month_g1

0xa0c9,	// (0x0008f423) frm_month_g2

0xa0da,	// (0x0008f434) frm_month_g3

0xa0eb,	// (0x0008f445) frm_month_g4

0xa0fc,	// (0x0008f456) frm_month_g5

0xa10d,	// (0x0008f467) frm_month_g6

0xa11e,	// (0x0008f478) frm_month_g7

0xe884,	// (0x00093bde) frm_month_g8

0xa12f,	// (0x0008f489) frm_month_g9

0xa13f,	// (0x0008f499) frm_month_g10

0xa14f,	// (0x0008f4a9) frm_month_g11

0xa15f,	// (0x0008f4b9) frm_month_g12

0xa16f,	// (0x0008f4c9) frm_month_g13

0xa17f,	// (0x0008f4d9) frm_month_g14

0xa18f,	// (0x0008f4e9) frm_month_g15

0xa1a1,	// (0x0008f4fb) frm_month_g16

0x000f,

0xfe59,	// (0x000951b3) frm_month_g

0xe891,	// (0x00093beb) cell_top_day_name_pane_t1

0xa1b3,	// (0x0008f50d) cell_area_left_week_number_pane_g1

0xa1bf,	// (0x0008f519) cell_area_left_week_number_pane_t1

0x0c64,	// (0x00085fbe) cell_month_view_pane_g1

0xa1d2,	// (0x0008f52c) cell_month_view_pane_t1

0x0574,	// (0x000858ce) main_fps_pane

0xde1d,	// (0x00093177) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xde1d,	// (0x00093177) cmail_ddmenu_btn02_pane_cp1

0xde39,	// (0x00093193) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xde39,	// (0x00093193) cmail_ddmenu_btn02_pane_cp2

0x98da,	// (0x0008ec34) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x98da,	// (0x0008ec34) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd77,	// (0x000950d1) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd77,	// (0x000950d1) cmail_ddmenu_btn02_pane_g

0x98f8,	// (0x0008ec52) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x98f8,	// (0x0008ec52) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd7c,	// (0x000950d6) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd7c,	// (0x000950d6) cmail_ddmenu_btn02_pane_t

0xa1e5,	// (0x0008f53f) fps_text_pane_ParamLimits

0xa1e5,	// (0x0008f53f) fps_text_pane

0xa1fb,	// (0x0008f555) main_fps_pane_g1_ParamLimits

0xa1fb,	// (0x0008f555) main_fps_pane_g1

0xa211,	// (0x0008f56b) wait_bar_pane_cp010_ParamLimits

0xa211,	// (0x0008f56b) wait_bar_pane_cp010

0xa222,	// (0x0008f57c) fps_text_pane_t1_ParamLimits

0xa222,	// (0x0008f57c) fps_text_pane_t1

0xcc95,	// (0x00091fef) cam4_image_uncrop_pane_g1

0xcc9e,	// (0x00091ff8) cam4_image_uncrop_pane_g2

0x7144,	// (0x0008c49e) cam4_image_uncrop_pane_g3

0x714d,	// (0x0008c4a7) cam4_image_uncrop_pane_g4

0x0003,

0xf879,	// (0x00094bd3) cam4_image_uncrop_pane_g

0xa025,	// (0x0008f37f) dia3_listrow_pane_ParamLimits

0x0574,	// (0x000858ce) main_phob2_pane

0x93d4,	// (0x0008e72e) cell_tport_appsw_pane_cp02_ParamLimits

0x93d4,	// (0x0008e72e) cell_tport_appsw_pane_cp02

0x93e4,	// (0x0008e73e) cell_tport_appsw_pane_cp03_ParamLimits

0x93e4,	// (0x0008e73e) cell_tport_appsw_pane_cp03

0x0574,	// (0x000858ce) phob2_contact_card_pane

0x0574,	// (0x000858ce) phob2_listscroll_pane

0xe8a4,	// (0x00093bfe) phob2_list_pane

0xe8ac,	// (0x00093c06) scroll_pane_cp034

0xa23a,	// (0x0008f594) phob2_cc_data_pane_ParamLimits

0xa23a,	// (0x0008f594) phob2_cc_data_pane

0xa257,	// (0x0008f5b1) phob2_cc_listscroll_pane_ParamLimits

0xa257,	// (0x0008f5b1) phob2_cc_listscroll_pane

0x9e2a,	// (0x0008f184) list_double_large_graphic_phob2_pane_ParamLimits

0x9e2a,	// (0x0008f184) list_double_large_graphic_phob2_pane

0xa273,	// (0x0008f5cd) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa273,	// (0x0008f5cd) list_double_large_graphic_phob2_pane_g1

0xa280,	// (0x0008f5da) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xa280,	// (0x0008f5da) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe7a,	// (0x000951d4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe7a,	// (0x000951d4) list_double_large_graphic_phob2_pane_g

0xa2a4,	// (0x0008f5fe) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xa2a4,	// (0x0008f5fe) list_double_large_graphic_phob2_pane_t1

0xa2b9,	// (0x0008f613) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xa2b9,	// (0x0008f613) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe83,	// (0x000951dd) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe83,	// (0x000951dd) list_double_large_graphic_phob2_pane_t

0x0574,	// (0x000858ce) list_highlight_pane_cp024

0xe8b4,	// (0x00093c0e) phob2_cc_button_pane

0xa2ce,	// (0x0008f628) phob2_cc_data_pane_g1_ParamLimits

0xa2ce,	// (0x0008f628) phob2_cc_data_pane_g1

0xa2e5,	// (0x0008f63f) phob2_cc_data_pane_g2_ParamLimits

0xa2e5,	// (0x0008f63f) phob2_cc_data_pane_g2

0x0001,

0xfe88,	// (0x000951e2) phob2_cc_data_pane_g_ParamLimits

0xfe88,	// (0x000951e2) phob2_cc_data_pane_g

0xa2f7,	// (0x0008f651) phob2_cc_data_pane_t1_ParamLimits

0xa2f7,	// (0x0008f651) phob2_cc_data_pane_t1

0xa30f,	// (0x0008f669) phob2_cc_data_pane_t2_ParamLimits

0xa30f,	// (0x0008f669) phob2_cc_data_pane_t2

0xa327,	// (0x0008f681) phob2_cc_data_pane_t3_ParamLimits

0xa327,	// (0x0008f681) phob2_cc_data_pane_t3

0x0002,

0xfe8d,	// (0x000951e7) phob2_cc_data_pane_t_ParamLimits

0xfe8d,	// (0x000951e7) phob2_cc_data_pane_t

0xe8bc,	// (0x00093c16) phob2_cc_list_pane_ParamLimits

0xe8bc,	// (0x00093c16) phob2_cc_list_pane

0xd7af,	// (0x00092b09) scroll_pane_cp035_ParamLimits

0xd7af,	// (0x00092b09) scroll_pane_cp035

0x334c,	// (0x000886a6) bg_button_pane_cp033

0xe8c8,	// (0x00093c22) phob2_cc_button_pane_g1

0xe8d4,	// (0x00093c2e) phob2_cc_button_pane_t1

0xe8e9,	// (0x00093c43) phob2_cc_button_pane_t2

0x0001,

0xfe94,	// (0x000951ee) phob2_cc_button_pane_t

0xa33f,	// (0x0008f699) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa33f,	// (0x0008f699) list_double_large_graphic_phob2_cc_pane

0xa36d,	// (0x0008f6c7) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa36d,	// (0x0008f6c7) list_double_large_graphic_phob2_cc_pane_g1

0xa379,	// (0x0008f6d3) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa379,	// (0x0008f6d3) list_double_large_graphic_phob2_cc_pane_g2

0xa385,	// (0x0008f6df) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa385,	// (0x0008f6df) list_double_large_graphic_phob2_cc_pane_g3

0xa391,	// (0x0008f6eb) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xa391,	// (0x0008f6eb) list_double_large_graphic_phob2_cc_pane_g4

0xa39d,	// (0x0008f6f7) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xa39d,	// (0x0008f6f7) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe99,	// (0x000951f3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe99,	// (0x000951f3) list_double_large_graphic_phob2_cc_pane_g

0xa3a9,	// (0x0008f703) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xa3a9,	// (0x0008f703) list_double_large_graphic_phob2_cc_pane_t1

0xa3d2,	// (0x0008f72c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xa3d2,	// (0x0008f72c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfea4,	// (0x000951fe) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfea4,	// (0x000951fe) list_double_large_graphic_phob2_cc_pane_t

0xe8fb,	// (0x00093c55) list_highlight_pane_cp025_ParamLimits

0xe8fb,	// (0x00093c55) list_highlight_pane_cp025

0x334c,	// (0x000886a6) bg_button_pane_cp033_ParamLimits

0xe8c8,	// (0x00093c22) phob2_cc_button_pane_g1_ParamLimits

0xe8d4,	// (0x00093c2e) phob2_cc_button_pane_t1_ParamLimits

0xe8e9,	// (0x00093c43) phob2_cc_button_pane_t2_ParamLimits

0xfe94,	// (0x000951ee) phob2_cc_button_pane_t_ParamLimits

0x2921,	// (0x00087c7b) popup_wgtman_window

0xd8b2,	// (0x00092c0c) scroll_pane_cp038

0x9da3,	// (0x0008f0fd) wgtman_btn_pane_cp_01_ParamLimits

0x9da3,	// (0x0008f0fd) wgtman_btn_pane_cp_01

0xe909,	// (0x00093c63) wgtman_content_pane

0xe912,	// (0x00093c6c) wgtman_heading_pane

0x0574,	// (0x000858ce) bg_heading_pane_cp02

0xe91b,	// (0x00093c75) wgtman_heading_pane_g1

0xe923,	// (0x00093c7d) wgtman_heading_pane_t1

0xe931,	// (0x00093c8b) scroll_pane_cp036

0xe939,	// (0x00093c93) wgtman_list_pane

0xe941,	// (0x00093c9b) wgtman_list_pane_t1_ParamLimits

0xe941,	// (0x00093c9b) wgtman_list_pane_t1

0xee5e,	// (0x000941b8) cam4_grid_pane

0x7cf6,	// (0x0008d050) bg_button_pane_cp015_ParamLimits

0x7d07,	// (0x0008d061) bg_button_pane_cp016_ParamLimits

0x7d13,	// (0x0008d06d) bg_button_pane_cp017_ParamLimits

0x7d65,	// (0x0008d0bf) popup_vitu2_query_window_g3_ParamLimits

0x7d65,	// (0x0008d0bf) popup_vitu2_query_window_g3

0x7e02,	// (0x0008d15c) popup_vitu2_query_window_t6_ParamLimits

0x7e02,	// (0x0008d15c) popup_vitu2_query_window_t6

0x7e2d,	// (0x0008d187) popup_vitu2_query_window_t7_ParamLimits

0x7e2d,	// (0x0008d187) popup_vitu2_query_window_t7

0xcc95,	// (0x00091fef) cam4_grid_pane_g1

0xcc9e,	// (0x00091ff8) cam4_grid_pane_g2

0xe958,	// (0x00093cb2) cam4_grid_pane_g3

0xe961,	// (0x00093cbb) cam4_grid_pane_g4

0x0003,

0xfea9,	// (0x00095203) cam4_grid_pane_g

0x3624,	// (0x0008897e) aid_placing_vt_slider_lsc_ParamLimits

0x38e2,	// (0x00088c3c) vidtel_button_pane_ParamLimits

0x38e2,	// (0x00088c3c) vidtel_button_pane

0x0574,	// (0x000858ce) bg_button_pane_cp034

0xa3fb,	// (0x0008f755) vidtel_button_pane_g1

0xa403,	// (0x0008f75d) vidtel_button_pane_t1

0xcf3d,	// (0x00092297) aid_size_vtel_slider_touch

0xd7af,	// (0x00092b09) scroll_pane_cp039

0xd8e1,	// (0x00092c3b) ncim_query_button_pane_cp01_ParamLimits

0xd900,	// (0x00092c5a) ncimui_query_pane_g1_ParamLimits

0x334c,	// (0x000886a6) input_focus_pane_cp012_ParamLimits

0xd925,	// (0x00092c7f) ncim_query_entry_pane_t1_ParamLimits

0xd7af,	// (0x00092b09) scroll_pane_cp039_ParamLimits

0xb285,	// (0x000905df) navi_pane_bcale_mc_g1

0xb28d,	// (0x000905e7) navi_pane_bcale_mc_t1

0xde6d,	// (0x000931c7) main_sp_fs_email_pane_g1

0xde79,	// (0x000931d3) main_sp_fs_email_pane_g2

0x0001,

0xfc74,	// (0x00094fce) main_sp_fs_email_pane_g

0xe2f5,	// (0x0009364f) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe2f5,	// (0x0009364f) list_single_cale_mrui_row_pane_g3

0x9918,	// (0x0008ec72) list_single_recal_day_pane_g5_event_pane

0xe45e,	// (0x000937b8) list_single_recal_day_pane_g7

0xe96a,	// (0x00093cc4) list_recal_day_event_pane_cp01

0xe973,	// (0x00093ccd) list_recal_vselct_arw_lo_pane_cp01

0xe97b,	// (0x00093cd5) list_recal_vselct_arw_up_pane_cp01

0xe983,	// (0x00093cdd) list_recal_vselct_pane_cp01

0xcf6c,	// (0x000922c6) list_recal_day_event_pane_cp01_g1

0xe98d,	// (0x00093ce7) list_recal_day_event_pane_cp01_t1

0xe466,	// (0x000937c0) list_single_recal_day_pane_t1_ParamLimits

0x992e,	// (0x0008ec88) list_single_recal_day_pane_t2_ParamLimits

0xfd8c,	// (0x000950e6) list_single_recal_day_pane_t_ParamLimits

0x0bea,	// (0x00085f44) bg_notes_pane_ParamLimits

0x0cc2,	// (0x0008601c) list_notes_pane_ParamLimits

0x2b23,	// (0x00087e7d) scroll_pane_cp06_ParamLimits

0x0ce8,	// (0x00086042) main_notes_pane_ParamLimits

0x334c,	// (0x000886a6) main_welc_pane

0xa440,	// (0x0008f79a) main_welc_body_pane_ParamLimits

0xa440,	// (0x0008f79a) main_welc_body_pane

0xa45c,	// (0x0008f7b6) main_welc_opti_pane_ParamLimits

0xa45c,	// (0x0008f7b6) main_welc_opti_pane

0xa4d0,	// (0x0008f82a) main_welc_pane_t1_ParamLimits

0xa4d0,	// (0x0008f82a) main_welc_pane_t1

0xa680,	// (0x0008f9da) main_welc_body_row_pane_ParamLimits

0xa680,	// (0x0008f9da) main_welc_body_row_pane

0x0c80,	// (0x00085fda) main_welc_opti_row_pane_ParamLimits

0x0c80,	// (0x00085fda) main_welc_opti_row_pane

0xe9ab,	// (0x00093d05) main_welc_opti_row_pane_g1

0xa693,	// (0x0008f9ed) main_welc_opti_row_pane_t1

0xe9b3,	// (0x00093d0d) main_welc_body_row_pane_t1

0xe689,	// (0x000939e3) popup_notif_wgt_heading_pane

0xe6a3,	// (0x000939fd) aid_size_list_notif_wgt_del_ParamLimits

0xe6b0,	// (0x00093a0a) list_notif_wgt_row_pane_g1_ParamLimits

0xe6bc,	// (0x00093a16) list_notif_wgt_row_pane_g2_ParamLimits

0xe6d0,	// (0x00093a2a) list_notif_wgt_row_pane_g3_ParamLimits

0xfdf3,	// (0x0009514d) list_notif_wgt_row_pane_g_ParamLimits

0xe6dd,	// (0x00093a37) list_notif_wgt_row_pane_t1_ParamLimits

0xe6f3,	// (0x00093a4d) list_notif_wgt_row_pane_t2_ParamLimits

0xe705,	// (0x00093a5f) list_notif_wgt_row_pane_t3_ParamLimits

0xfdfa,	// (0x00095154) list_notif_wgt_row_pane_t_ParamLimits

0x9e3c,	// (0x0008f196) listrow_wgtman_pane_g1_ParamLimits

0x9e49,	// (0x0008f1a3) listrow_wgtman_pane_g2_ParamLimits

0xfe2a,	// (0x00095184) listrow_wgtman_pane_g_ParamLimits

0x9e61,	// (0x0008f1bb) listrow_wgtman_pane_t1_ParamLimits

0x9e79,	// (0x0008f1d3) listrow_wgtman_pane_t2_ParamLimits

0xfe2f,	// (0x00095189) listrow_wgtman_pane_t_ParamLimits

0x9e9f,	// (0x0008f1f9) wait_bar_pane_cp09_ParamLimits

0x0574,	// (0x000858ce) bg_popup_heading_pane_cp02

0xe9c2,	// (0x00093d1c) popup_notif_wgt_heading_pane_g1

0xe9ca,	// (0x00093d24) popup_notif_wgt_heading_pane_t1

0xc78b,	// (0x00091ae5) main_vids_pane

0x0574,	// (0x000858ce) vids_listscroll_pane

0xa6a2,	// (0x0008f9fc) scroll_pane_cp040

0x0574,	// (0x000858ce) vids_list_pane

0xe9d8,	// (0x00093d32) vids_list_double_pane_ParamLimits

0xe9d8,	// (0x00093d32) vids_list_double_pane

0xa6ad,	// (0x0008fa07) vids_list_double_pane_g1

0xa6b6,	// (0x0008fa10) vids_list_double_pane_t1

0xa6c5,	// (0x0008fa1f) vids_list_double_pane_t2

0x0001,

0xfec8,	// (0x00095222) vids_list_double_pane_t

0xaea5,	// (0x000901ff) main_ncimui_pane_ParamLimits

0x88b4,	// (0x0008dc0e) main_ncimui_pane_g1_ParamLimits

0x88c0,	// (0x0008dc1a) main_ncimui_pane_g2_ParamLimits

0x88c0,	// (0x0008dc1a) main_ncimui_pane_g2

0x0001,

0xfb75,	// (0x00094ecf) main_ncimui_pane_g_ParamLimits

0xfb75,	// (0x00094ecf) main_ncimui_pane_g

0xa473,	// (0x0008f7cd) main_welc_pane_g1_ParamLimits

0xa473,	// (0x0008f7cd) main_welc_pane_g1

0xa486,	// (0x0008f7e0) main_welc_pane_g2_ParamLimits

0xa486,	// (0x0008f7e0) main_welc_pane_g2

0x0003,

0xfeb2,	// (0x0009520c) main_welc_pane_g_ParamLimits

0xfeb2,	// (0x0009520c) main_welc_pane_g

0x0bea,	// (0x00085f44) listscroll_mce_pane_ParamLimits

0x4d7b,	// (0x0008a0d5) wait_bar_pane_cp10

0xc77f,	// (0x00091ad9) main_cale_day_pane_ParamLimits

0xc77f,	// (0x00091ad9) main_cale_week_pane_ParamLimits

0x0bea,	// (0x00085f44) main_messa_pane_ParamLimits

0x66b8,	// (0x0008ba12) main_clock2_btn_pane_ParamLimits

0x66b8,	// (0x0008ba12) main_clock2_btn_pane

0x13ac,	// (0x00086706) main_clock2_btn_pane_cp01_ParamLimits

0x13ac,	// (0x00086706) main_clock2_btn_pane_cp01

0xe2b0,	// (0x0009360a) list_cale_mrui_pane_ParamLimits

0xe739,	// (0x00093a93) main_cf0_pane_g2

0x0001,

0xfe01,	// (0x0009515b) main_cf0_pane_g

0xa03f,	// (0x0008f399) area_left_week_number_pane_ParamLimits

0xa04b,	// (0x0008f3a5) area_top_day_name_pane_ParamLimits

0xa05c,	// (0x0008f3b6) frame_month_view_pane_ParamLimits

0xe869,	// (0x00093bc3) grid_month_view_pane_ParamLimits

0xe877,	// (0x00093bd1) frm_month_g1_ParamLimits

0xa0c9,	// (0x0008f423) frm_month_g2_ParamLimits

0xa0da,	// (0x0008f434) frm_month_g3_ParamLimits

0xa0eb,	// (0x0008f445) frm_month_g4_ParamLimits

0xa0fc,	// (0x0008f456) frm_month_g5_ParamLimits

0xa10d,	// (0x0008f467) frm_month_g6_ParamLimits

0xa11e,	// (0x0008f478) frm_month_g7_ParamLimits

0xe884,	// (0x00093bde) frm_month_g8_ParamLimits

0xa12f,	// (0x0008f489) frm_month_g9_ParamLimits

0xa13f,	// (0x0008f499) frm_month_g10_ParamLimits

0xa14f,	// (0x0008f4a9) frm_month_g11_ParamLimits

0xa15f,	// (0x0008f4b9) frm_month_g12_ParamLimits

0xa16f,	// (0x0008f4c9) frm_month_g13_ParamLimits

0xa17f,	// (0x0008f4d9) frm_month_g14_ParamLimits

0xa18f,	// (0x0008f4e9) frm_month_g15_ParamLimits

0xa1a1,	// (0x0008f4fb) frm_month_g16_ParamLimits

0xfe59,	// (0x000951b3) frm_month_g_ParamLimits

0xe891,	// (0x00093beb) cell_top_day_name_pane_t1_ParamLimits

0xa1b3,	// (0x0008f50d) cell_area_left_week_number_pane_g1_ParamLimits

0xa1bf,	// (0x0008f519) cell_area_left_week_number_pane_t1_ParamLimits

0x0c64,	// (0x00085fbe) cell_month_view_pane_g1_ParamLimits

0xa1d2,	// (0x0008f52c) cell_month_view_pane_t1_ParamLimits

0x0be2,	// (0x00085f3c) main_clock2_btn_pane_g1

0xe9e8,	// (0x00093d42) main_clock2_btn_pane_t1

0x334c,	// (0x000886a6) listscroll_cmail_pane_ParamLimits

0xde6d,	// (0x000931c7) main_sp_fs_email_pane_g1_ParamLimits

0xde79,	// (0x000931d3) main_sp_fs_email_pane_g2_ParamLimits

0xfc74,	// (0x00094fce) main_sp_fs_email_pane_g_ParamLimits

0xe3da,	// (0x00093734) list_recal_day_pane_ParamLimits

0xe3eb,	// (0x00093745) mian_recal_day_pane_t1

0x92a0,	// (0x0008e5fa) list_single_dyc_row_text_pane_t4_ParamLimits

0x92a0,	// (0x0008e5fa) list_single_dyc_row_text_pane_t4

0x92d7,	// (0x0008e631) list_single_dyc_row_text_pane_t5_ParamLimits

0x92d7,	// (0x0008e631) list_single_dyc_row_text_pane_t5

0xdf12,	// (0x0009326c) list_single_dyc_row_text_pane_t6_ParamLimits

0xdf12,	// (0x0009326c) list_single_dyc_row_text_pane_t6

0x4762,	// (0x00089abc) aid_mgn_list_cale_time_pane

0xaea5,	// (0x000901ff) main_gallery2_pane_ParamLimits

0x13c0,	// (0x0008671a) main_clock2_pane_cp01_t1

0x13ce,	// (0x00086728) main_clock2_pane_cp01_t3

0x0001,

0xf74b,	// (0x00094aa5) main_clock2_pane_cp01_t

0x2ea6,	// (0x00088200) cale_week_scroll_pane_g16_ParamLimits

0x2ea6,	// (0x00088200) cale_week_scroll_pane_g16

0x32e3,	// (0x0008863d) vorec_slider_pane

0xa403,	// (0x0008f75d) vidtel_button_pane_t1_ParamLimits

0x99d3,	// (0x0008ed2d) main_fs_bigclock_clock_pane_g1_ParamLimits

0x99e5,	// (0x0008ed3f) main_fs_bigclock_clock_pane_g2_ParamLimits

0x99f6,	// (0x0008ed50) main_fs_bigclock_clock_pane_g3_ParamLimits

0x99f6,	// (0x0008ed50) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdaf,	// (0x00095109) main_fs_bigclock_clock_pane_g_ParamLimits

0x9a09,	// (0x0008ed63) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9a24,	// (0x0008ed7e) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdb8,	// (0x00095112) main_fs_bigclock_clock_pane_t_ParamLimits

0x5fda,	// (0x0008b334) main_mup3_lyrics_pane_ParamLimits

0x5fda,	// (0x0008b334) main_mup3_lyrics_pane

0xa6f7,	// (0x0008fa51) main_mup3_lyrics_pane_t1_ParamLimits

0xa6f7,	// (0x0008fa51) main_mup3_lyrics_pane_t1

0xebc2,	// (0x00093f1c) aid_main_mp4_pane_t1_area

0xebcc,	// (0x00093f26) aid_main_mp4_pane_t2_area

0xec76,	// (0x00093fd0) main_mp4_pane_g7_ParamLimits

0xec76,	// (0x00093fd0) main_mp4_pane_g7

0xec82,	// (0x00093fdc) main_mp4_pane_g8_ParamLimits

0xec82,	// (0x00093fdc) main_mp4_pane_g8

0x6fc6,	// (0x0008c320) aid_call6_pane_g1_size

0xa359,	// (0x0008f6b3) list_double_large_graphic_phob2_other_pane_ParamLimits

0xa359,	// (0x0008f6b3) list_double_large_graphic_phob2_other_pane

0xb1d8,	// (0x00090532) list_double_large_graphic_phob2_other_pane_g1

0x0574,	// (0x000858ce) list_highlight_pane_cp026

0x334c,	// (0x000886a6) main_welc_pane_ParamLimits

0x90a1,	// (0x0008e3fb) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x90a1,	// (0x0008e3fb) main_sp_fs_ctrlbar_pane_g3

0x90b9,	// (0x0008e413) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x90b9,	// (0x0008e413) main_sp_fs_ctrlbar_pane_g4

0x90fb,	// (0x0008e455) toolbar2_fixed_button_pane_cp01

0x9106,	// (0x0008e460) toolbar2_fixed_button_pane_cp02

0x9111,	// (0x0008e46b) toolbar2_fixed_button_pane_cp03

0xa42c,	// (0x0008f786) list_welc_entry_pane_ParamLimits

0xa42c,	// (0x0008f786) list_welc_entry_pane

0xa499,	// (0x0008f7f3) main_welc_pane_g3_ParamLimits

0xa499,	// (0x0008f7f3) main_welc_pane_g3

0xa4ea,	// (0x0008f844) main_welc_pane_t2_ParamLimits

0xa4ea,	// (0x0008f844) main_welc_pane_t2

0xa501,	// (0x0008f85b) main_welc_pane_t3_ParamLimits

0xa501,	// (0x0008f85b) main_welc_pane_t3

0x0005,

0xfebb,	// (0x00095215) main_welc_pane_t_ParamLimits

0xfebb,	// (0x00095215) main_welc_pane_t

0xa611,	// (0x0008f96b) welc_button_pane_ParamLimits

0xa611,	// (0x0008f96b) welc_button_pane

0xa66f,	// (0x0008f9c9) welc_service_logo_pane_ParamLimits

0xa66f,	// (0x0008f9c9) welc_service_logo_pane

0xa716,	// (0x0008fa70) list_single_welc_entry_pane_ParamLimits

0xa716,	// (0x0008fa70) list_single_welc_entry_pane

0xa727,	// (0x0008fa81) list_single_welc_entry_pane_g1

0xa72f,	// (0x0008fa89) list_single_welc_entry_pane_t1

0xa73d,	// (0x0008fa97) list_single_welc_entry_pane_t2

0x0001,

0xfecd,	// (0x00095227) list_single_welc_entry_pane_t

0x0574,	// (0x000858ce) bg_button_pane_cp035

0xa74b,	// (0x0008faa5) welc_button_pane_t1

0xe9f6,	// (0x00093d50) welc_service_logo_pane_g1

0xe9ff,	// (0x00093d59) welc_service_logo_pane_g2

0x0001,

0xfed2,	// (0x0009522c) welc_service_logo_pane_g

0xaeb3,	// (0x0009020d) main_int_radio_pane

0x0d68,	// (0x000860c2) list_single_fs_dyc_pane_g1

0xa28c,	// (0x0008f5e6) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xa28c,	// (0x0008f5e6) list_double_large_graphic_phob2_pane_g3

0xa298,	// (0x0008f5f2) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xa298,	// (0x0008f5f2) list_double_large_graphic_phob2_pane_g4

0xa759,	// (0x0008fab3) main_int_radio1_pane_ParamLimits

0xa759,	// (0x0008fab3) main_int_radio1_pane

0xea08,	// (0x00093d62) find_pane_cp02

0xa776,	// (0x0008fad0) input_focus_pane_cp12_ParamLimits

0xa776,	// (0x0008fad0) input_focus_pane_cp12

0xa786,	// (0x0008fae0) input_focus_pane_cp13_ParamLimits

0xa786,	// (0x0008fae0) input_focus_pane_cp13

0xa79a,	// (0x0008faf4) input_focus_pane_cp14_ParamLimits

0xa79a,	// (0x0008faf4) input_focus_pane_cp14

0xea11,	// (0x00093d6b) int_radio1_listscroll_pane

0xa7ae,	// (0x0008fb08) main_int_radio1_pane_g1_ParamLimits

0xa7ae,	// (0x0008fb08) main_int_radio1_pane_g1

0xa7c2,	// (0x0008fb1c) main_int_radio1_pane_t1_ParamLimits

0xa7c2,	// (0x0008fb1c) main_int_radio1_pane_t1

0xa7d9,	// (0x0008fb33) main_int_radio1_pane_t2_ParamLimits

0xa7d9,	// (0x0008fb33) main_int_radio1_pane_t2

0xa7f0,	// (0x0008fb4a) main_int_radio1_pane_t3_ParamLimits

0xa7f0,	// (0x0008fb4a) main_int_radio1_pane_t3

0xa807,	// (0x0008fb61) main_int_radio1_pane_t4_ParamLimits

0xa807,	// (0x0008fb61) main_int_radio1_pane_t4

0xea1b,	// (0x00093d75) main_int_radio1_pane_t5_ParamLimits

0xea1b,	// (0x00093d75) main_int_radio1_pane_t5

0xa819,	// (0x0008fb73) main_int_radio1_pane_t6_ParamLimits

0xa819,	// (0x0008fb73) main_int_radio1_pane_t6

0xa82e,	// (0x0008fb88) main_int_radio1_pane_t7_ParamLimits

0xa82e,	// (0x0008fb88) main_int_radio1_pane_t7

0xa843,	// (0x0008fb9d) main_int_radio1_pane_t8_ParamLimits

0xa843,	// (0x0008fb9d) main_int_radio1_pane_t8

0xa860,	// (0x0008fbba) main_int_radio1_pane_t9_ParamLimits

0xa860,	// (0x0008fbba) main_int_radio1_pane_t9

0xa872,	// (0x0008fbcc) main_int_radio1_pane_t10_ParamLimits

0xa872,	// (0x0008fbcc) main_int_radio1_pane_t10

0xa896,	// (0x0008fbf0) main_int_radio1_pane_t11_ParamLimits

0xa896,	// (0x0008fbf0) main_int_radio1_pane_t11

0xa8ba,	// (0x0008fc14) main_int_radio1_pane_t12_ParamLimits

0xa8ba,	// (0x0008fc14) main_int_radio1_pane_t12

0x000b,

0xfed7,	// (0x00095231) main_int_radio1_pane_t_ParamLimits

0xfed7,	// (0x00095231) main_int_radio1_pane_t

0xea2d,	// (0x00093d87) int_radio_list_pane

0xe8ac,	// (0x00093c06) scroll_pane_cp037

0xea35,	// (0x00093d8f) list_double_large_graphic_int_radio_pane_ParamLimits

0xea35,	// (0x00093d8f) list_double_large_graphic_int_radio_pane

0xea46,	// (0x00093da0) list_double_large_graphic_int_radio_pane_g1

0xea4f,	// (0x00093da9) list_double_large_graphic_int_radio_pane_t1

0xea5d,	// (0x00093db7) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfef0,	// (0x0009524a) list_double_large_graphic_int_radio_pane_t

0x0574,	// (0x000858ce) list_highlight_pane_cp027

0xe99b,	// (0x00093cf5) main_button_pane_4

0xa4ac,	// (0x0008f806) main_welc_pane_g4_ParamLimits

0xa4ac,	// (0x0008f806) main_welc_pane_g4

0xa518,	// (0x0008f872) main_welc_pane_t4_ParamLimits

0xa518,	// (0x0008f872) main_welc_pane_t4

0xa52f,	// (0x0008f889) main_welc_pane_t5_ParamLimits

0xa52f,	// (0x0008f889) main_welc_pane_t5

0xa56a,	// (0x0008f8c4) main_welc_pane_t6_ParamLimits

0xa56a,	// (0x0008f8c4) main_welc_pane_t6

0xa624,	// (0x0008f97e) welc_button_pane_2_ParamLimits

0xa624,	// (0x0008f97e) welc_button_pane_2

0xa638,	// (0x0008f992) welc_button_pane_3_ParamLimits

0xa638,	// (0x0008f992) welc_button_pane_3

0xe9a3,	// (0x00093cfd) welc_button_pane_4

0xa64f,	// (0x0008f9a9) welc_button_pane_5_ParamLimits

0xa64f,	// (0x0008f9a9) welc_button_pane_5

0x27a8,	// (0x00087b02) main_popup_welc_pane

0xea7a,	// (0x00093dd4) main_welc_sk_g3

0xea84,	// (0x00093dde) main_welc_sk_g4

0xea8e,	// (0x00093de8) main_welc_sk_t3

0xea9c,	// (0x00093df6) main_welc_sk_t4

0xeaaa,	// (0x00093e04) popup_welc_pane_t4

0xeab8,	// (0x00093e12) popup_welc_pane_t5

0xeac6,	// (0x00093e20) popup_welc_pane_t6

0xaeb3,	// (0x0009020d) main_acti_pane

0x0574,	// (0x000858ce) main_sso_pane

0xa8cc,	// (0x0008fc26) sso_body_pane_ParamLimits

0xa8cc,	// (0x0008fc26) sso_body_pane

0xa8e0,	// (0x0008fc3a) sso_logo_pane_ParamLimits

0xa8e0,	// (0x0008fc3a) sso_logo_pane

0xa908,	// (0x0008fc62) sso_sk_pane_ParamLimits

0xa908,	// (0x0008fc62) sso_sk_pane

0x34de,	// (0x00088838) main_sso_logo_pane_g1

0xa91a,	// (0x0008fc74) sso_sk_pane_t1_ParamLimits

0xa91a,	// (0x0008fc74) sso_sk_pane_t1

0xa933,	// (0x0008fc8d) sso_sk_pane_t2_ParamLimits

0xa933,	// (0x0008fc8d) sso_sk_pane_t2

0x0001,

0xfef5,	// (0x0009524f) sso_sk_pane_t_ParamLimits

0xfef5,	// (0x0009524f) sso_sk_pane_t

0xeafe,	// (0x00093e58) aid_sso_gap

0xeb07,	// (0x00093e61) aid_sso_txt1

0xeb0f,	// (0x00093e69) aid_sso_txt2

0xeb17,	// (0x00093e71) aid_sso_txt3

0x0002,

0xfefa,	// (0x00095254) aid_sso_txt

0xeb1f,	// (0x00093e79) aid_sso_widget

0xa993,	// (0x0008fced) sso_btn_pane_ParamLimits

0xa993,	// (0x0008fced) sso_btn_pane

0xaa05,	// (0x0008fd5f) sso_option_pane_ParamLimits

0xaa05,	// (0x0008fd5f) sso_option_pane

0xaa63,	// (0x0008fdbd) sso_query_pane_ParamLimits

0xaa63,	// (0x0008fdbd) sso_query_pane

0xaaa3,	// (0x0008fdfd) sso_query_pane_cp01_ParamLimits

0xaaa3,	// (0x0008fdfd) sso_query_pane_cp01

0xaae5,	// (0x0008fe3f) sso_t_hdr_pane_ParamLimits

0xaae5,	// (0x0008fe3f) sso_t_hdr_pane

0xab09,	// (0x0008fe63) sso_t_nml_pane_ParamLimits

0xab09,	// (0x0008fe63) sso_t_nml_pane

0xeb17,	// (0x00093e71) sso_t_sub_pane

0xa8ed,	// (0x0008fc47) sso_popup_window_ParamLimits

0xa8ed,	// (0x0008fc47) sso_popup_window

0xa949,	// (0x0008fca3) sso_apps_pane_ParamLimits

0xa949,	// (0x0008fca3) sso_apps_pane

0xa96f,	// (0x0008fcc9) sso_body_pane_g1

0xa977,	// (0x0008fcd1) sso_body_pane_t1

0xa985,	// (0x0008fcdf) sso_body_pane_t2

0x0001,

0xff01,	// (0x0009525b) sso_body_pane_t

0xa9d5,	// (0x0008fd2f) sso_btn_pane_cp01_ParamLimits

0xa9d5,	// (0x0008fd2f) sso_btn_pane_cp01

0xaa3d,	// (0x0008fd97) sso_prog_pane_ParamLimits

0xaa3d,	// (0x0008fd97) sso_prog_pane

0xab53,	// (0x0008fead) sso_t_hdr_pane_t1_ParamLimits

0xab53,	// (0x0008fead) sso_t_hdr_pane_t1

0x004d,	// (0x000853a7) input_focus_pane_cp10_ParamLimits

0x004d,	// (0x000853a7) input_focus_pane_cp10

0x0065,	// (0x000853bf) sso_query_pane_t1_ParamLimits

0x0065,	// (0x000853bf) sso_query_pane_t1

0x0078,	// (0x000853d2) sso_query_pane_t2_ParamLimits

0x0078,	// (0x000853d2) sso_query_pane_t2

0x0093,	// (0x000853ed) sso_query_pane_t3_ParamLimits

0x0093,	// (0x000853ed) sso_query_pane_t3

0x00bd,	// (0x00085417) sso_query_pane_t4_ParamLimits

0x00bd,	// (0x00085417) sso_query_pane_t4

0x0003,

0xff06,	// (0x00095260) sso_query_pane_t_ParamLimits

0xff06,	// (0x00095260) sso_query_pane_t

0x0574,	// (0x000858ce) bg_button_pane_cp22

0xea6b,	// (0x00093dc5) sso_btn_pane_t1

0xab66,	// (0x0008fec0) sso_t_nml_pane_t1_ParamLimits

0xab66,	// (0x0008fec0) sso_t_nml_pane_t1

0x00fe,	// (0x00085458) sso_option_row_pane_ParamLimits

0x00fe,	// (0x00085458) sso_option_row_pane

0x0111,	// (0x0008546b) sso_t_sub_pane_t1_ParamLimits

0x0111,	// (0x0008546b) sso_t_sub_pane_t1

0x334c,	// (0x000886a6) bg_popup_window_pane_cp11_ParamLimits

0x334c,	// (0x000886a6) bg_popup_window_pane_cp11

0x0124,	// (0x0008547e) popup_sk_window_cp01_ParamLimits

0x0124,	// (0x0008547e) popup_sk_window_cp01

0x0131,	// (0x0008548b) sso_popup_body_pane_ParamLimits

0x0131,	// (0x0008548b) sso_popup_body_pane

0x013e,	// (0x00085498) scroll_pane_cp21_ParamLimits

0x013e,	// (0x00085498) scroll_pane_cp21

0x014b,	// (0x000854a5) sso_popup_body_t_pane_ParamLimits

0x014b,	// (0x000854a5) sso_popup_body_t_pane

0x0158,	// (0x000854b2) sso_popup_body_t_hdr_pane_ParamLimits

0x0158,	// (0x000854b2) sso_popup_body_t_hdr_pane

0x0164,	// (0x000854be) sso_popup_body_t_nml_pane_ParamLimits

0x0164,	// (0x000854be) sso_popup_body_t_nml_pane

0x017d,	// (0x000854d7) sso_popup_body_t_sub_pane_ParamLimits

0x017d,	// (0x000854d7) sso_popup_body_t_sub_pane

0x019c,	// (0x000854f6) sso_popup_body_t_hdr_pane_t1

0xab81,	// (0x0008fedb) sso_popup_body_t_nml_pane_t1_ParamLimits

0xab81,	// (0x0008fedb) sso_popup_body_t_nml_pane_t1

0x01e6,	// (0x00085540) sso_popup_body_t_sub_pane_t1_ParamLimits

0x01e6,	// (0x00085540) sso_popup_body_t_sub_pane_t1

0x34de,	// (0x00088838) sso_prog_pane_g1

0xabb8,	// (0x0008ff12) sso_apps_pane_comp1_ParamLimits

0xabb8,	// (0x0008ff12) sso_apps_pane_comp1

0x021d,	// (0x00085577) sso_apps_pane_comp1_g1

0x0225,	// (0x0008557f) sso_apps_pane_comp1_t1

0x0241,	// (0x0008559b) sso_option_row_pane_g1

0x0249,	// (0x000855a3) sso_option_row_pane_t1

0xa419,	// (0x0008f773) bg_welc_area_ParamLimits

0xa419,	// (0x0008f773) bg_welc_area

0xa5a8,	// (0x0008f902) sso_t_hdr_pane_a_t1_ParamLimits

0xa5a8,	// (0x0008f902) sso_t_hdr_pane_a_t1

0xa5c1,	// (0x0008f91b) sso_t_nml_pane_a_t1_ParamLimits

0xa5c1,	// (0x0008f91b) sso_t_nml_pane_a_t1

0xa5e6,	// (0x0008f940) sso_t_sub_pane_a_t1_ParamLimits

0xa5e6,	// (0x0008f940) sso_t_sub_pane_a_t1

0xea6b,	// (0x00093dc5) sso_btn_pane_t1_copy1

0x0574,	// (0x000858ce) welc_button_pane_2_comp1

0xead4,	// (0x00093e2e) sso_t_hdr_pane_p_t1

0xeae2,	// (0x00093e3c) sso_t_nml_pane_p_t1

0xeaf0,	// (0x00093e4a) sso_t_sub_pane_p_t1

0xe025,	// (0x0009337f) list_cmail_pane_ParamLimits

0xa65f,	// (0x0008f9b9) welc_button_pane_cp01_ParamLimits

0xa65f,	// (0x0008f9b9) welc_button_pane_cp01

0x0574,	// (0x000858ce) main_att_pane

0x0233,	// (0x0008558d) input_focus_pane_cp10_t1

0x0249,	// (0x000855a3) sso_option_row_pane_t1_ParamLimits

0xabcb,	// (0x0008ff25) main_att_body_pane_ParamLimits

0xabcb,	// (0x0008ff25) main_att_body_pane

0xabe1,	// (0x0008ff3b) att_btn_pane_ParamLimits

0xabe1,	// (0x0008ff3b) att_btn_pane

0xabfe,	// (0x0008ff58) att_btn_pane_cp01_ParamLimits

0xabfe,	// (0x0008ff58) att_btn_pane_cp01

0xac1a,	// (0x0008ff74) att_li_srv_pane_ParamLimits

0xac1a,	// (0x0008ff74) att_li_srv_pane

0xac30,	// (0x0008ff8a) att_opt_pane_ParamLimits

0xac30,	// (0x0008ff8a) att_opt_pane

0xac76,	// (0x0008ffd0) att_query_pane_ParamLimits

0xac76,	// (0x0008ffd0) att_query_pane

0xacaa,	// (0x00090004) att_query_pane_cp01_ParamLimits

0xacaa,	// (0x00090004) att_query_pane_cp01

0xace4,	// (0x0009003e) att_t_hdr_pane_ParamLimits

0xace4,	// (0x0009003e) att_t_hdr_pane

0xad28,	// (0x00090082) att_t_nml_pane_ParamLimits

0xad28,	// (0x00090082) att_t_nml_pane

0xad59,	// (0x000900b3) att_t_nml_pane_cp01_ParamLimits

0xad59,	// (0x000900b3) att_t_nml_pane_cp01

0xad7f,	// (0x000900d9) att_t_nmlb_pane_ParamLimits

0xad7f,	// (0x000900d9) att_t_nmlb_pane

0xad98,	// (0x000900f2) att_term_pane_ParamLimits

0xad98,	// (0x000900f2) att_term_pane

0xaddc,	// (0x00090136) main_att_body_pane_g1_ParamLimits

0xaddc,	// (0x00090136) main_att_body_pane_g1

0x0034,	// (0x0008538e) att_t_hdr_pane_t1_ParamLimits

0x0034,	// (0x0008538e) att_t_hdr_pane_t1

0x0480,	// (0x000857da) att_t_nml_pane_t1_ParamLimits

0x0480,	// (0x000857da) att_t_nml_pane_t1

0x04a5,	// (0x000857ff) att_btn_pane_t1

0x0574,	// (0x000858ce) bg_button_pane_cp23

0xae20,	// (0x0009017a) att_li_srv_row_pane_ParamLimits

0xae20,	// (0x0009017a) att_li_srv_row_pane

0x04c3,	// (0x0008581d) att_t_nmlb_pane_t1_ParamLimits

0x04c3,	// (0x0008581d) att_t_nmlb_pane_t1

0x04dc,	// (0x00085836) att_query_pane_t1

0x04eb,	// (0x00085845) att_query_pane_t2

0x04fa,	// (0x00085854) att_query_pane_t3

0x0002,

0xff0f,	// (0x00095269) att_query_pane_t

0x0509,	// (0x00085863) input_focus_pane_cp11

0x0512,	// (0x0008586c) att_term_pane_t1_ParamLimits

0x0512,	// (0x0008586c) att_term_pane_t1

0x0574,	// (0x000858ce) att_opt_row_pane

0x052f,	// (0x00085889) att_opt_row_pane_g1

0x0537,	// (0x00085891) att_opt_row_pane_t1_ParamLimits

0x0537,	// (0x00085891) att_opt_row_pane_t1

0xae30,	// (0x0009018a) att_li_srv_row_pane_g1

0xae38,	// (0x00090192) att_li_srv_row_pane_t1

0xae46,	// (0x000901a0) att_li_srv_row_pane_t2

0x0001,

0xff16,	// (0x00095270) att_li_srv_row_pane_t
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
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pql_apps_qvga_lsc_Large
