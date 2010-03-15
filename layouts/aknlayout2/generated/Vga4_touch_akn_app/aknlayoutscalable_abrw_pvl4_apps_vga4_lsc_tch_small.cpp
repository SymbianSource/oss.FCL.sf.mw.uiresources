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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0006ced7 };

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
0xfdf8,	// (0x0006cccf) Screen

0xfe04,	// (0x0006ccdb) application_window

0xfe50,	// (0x0006cd27) area_bottom_pane_ParamLimits

0xfe50,	// (0x0006cd27) area_bottom_pane

0xfe89,	// (0x0006cd60) area_top_pane_ParamLimits

0xfe89,	// (0x0006cd60) area_top_pane

0x95d2,	// (0x000764a9) call_video_uplink_pane_ParamLimits

0x95d2,	// (0x000764a9) call_video_uplink_pane

0xff17,	// (0x0006cdee) main_pane_ParamLimits

0xff17,	// (0x0006cdee) main_pane

0xc889,	// (0x00079760) context_pane

0x3a91,	// (0x00070968) navi_pane

0x3ac1,	// (0x00070998) popup_cale_events_window_ParamLimits

0x3ac1,	// (0x00070998) popup_cale_events_window

0xc89c,	// (0x00079773) popup_mup_playback_window

0x3ad9,	// (0x000709b0) signal_pane

0xa74b,	// (0x00077622) main_browser_pane

0xb264,	// (0x0007813b) main_burst_pane

0x3793,	// (0x0007066a) main_calc_pane

0xc82c,	// (0x00079703) main_cale_day_pane

0x0561,	// (0x0006d438) main_cale_month_pane

0xc82c,	// (0x00079703) main_cale_week_pane

0xb264,	// (0x0007813b) main_call_pane

0x9a11,	// (0x000768e8) main_call_poc_pane

0xb264,	// (0x0007813b) main_camera_pane

0xb264,	// (0x0007813b) main_chi_dic_pane

0xb106,	// (0x00077fdd) main_clock_pane

0x9a11,	// (0x000768e8) main_fmradio_pane

0xb264,	// (0x0007813b) main_graph_messa_pane

0x9a11,	// (0x000768e8) main_help_pane

0xa74b,	// (0x00077622) main_im_pane

0x9c6c,	// (0x00076b43) main_image_pane_ParamLimits

0x9c6c,	// (0x00076b43) main_image_pane

0x9a11,	// (0x000768e8) main_location2_pane

0xb264,	// (0x0007813b) main_location_pane

0x9c6c,	// (0x00076b43) main_messa_pane

0x9a11,	// (0x000768e8) main_mp2_pane

0xb264,	// (0x0007813b) main_mp_pane

0x9a11,	// (0x000768e8) main_msg_pane

0x9a11,	// (0x000768e8) main_mup_eq_pane

0x9a11,	// (0x000768e8) main_mup_pane

0xa74b,	// (0x00077622) main_notes_pane

0x9a11,	// (0x000768e8) main_pec_pane

0x9a11,	// (0x000768e8) main_phob_pane

0x9a11,	// (0x000768e8) main_pinb_pane

0x9a11,	// (0x000768e8) main_postcard_pane

0x9a11,	// (0x000768e8) main_qdial_pane

0xb264,	// (0x0007813b) main_skin_pane

0x9a11,	// (0x000768e8) main_smil2_pane

0xb264,	// (0x0007813b) main_smil_pane

0xb264,	// (0x0007813b) main_video_pane

0xb264,	// (0x0007813b) main_video_tele_pane

0x9c6c,	// (0x00076b43) main_viewer_pane_ParamLimits

0x9c6c,	// (0x00076b43) main_viewer_pane

0xb264,	// (0x0007813b) main_vorec_pane

0x37e9,	// (0x000706c0) popup_blid_sat_info_window_ParamLimits

0x37e9,	// (0x000706c0) popup_blid_sat_info_window

0x384d,	// (0x00070724) popup_dyc_status_message_window_ParamLimits

0x384d,	// (0x00070724) popup_dyc_status_message_window

0x3867,	// (0x0007073e) popup_grid_large_graphic_window_ParamLimits

0x3867,	// (0x0007073e) popup_grid_large_graphic_window

0x3929,	// (0x00070800) popup_loc_request_window_ParamLimits

0x3929,	// (0x00070800) popup_loc_request_window

0x3a65,	// (0x0007093c) popup_wml_address_window_ParamLimits

0x3a65,	// (0x0007093c) popup_wml_address_window

0x35d1,	// (0x000704a8) call_muted_g1

0x3265,	// (0x0007013c) popup_call_audio_conf_window_ParamLimits

0x3265,	// (0x0007013c) popup_call_audio_conf_window

0x35e1,	// (0x000704b8) popup_call_audio_first_window_ParamLimits

0x35e1,	// (0x000704b8) popup_call_audio_first_window

0x3657,	// (0x0007052e) popup_call_audio_in_window_ParamLimits

0x3657,	// (0x0007052e) popup_call_audio_in_window

0x3693,	// (0x0007056a) popup_call_audio_out_window_ParamLimits

0x3693,	// (0x0007056a) popup_call_audio_out_window

0x36cd,	// (0x000705a4) popup_call_audio_second_window_ParamLimits

0x36cd,	// (0x000705a4) popup_call_audio_second_window

0x3723,	// (0x000705fa) popup_call_audio_wait_window_ParamLimits

0x3723,	// (0x000705fa) popup_call_audio_wait_window

0x3758,	// (0x0007062f) popup_number_entry_window_ParamLimits

0x3758,	// (0x0007062f) popup_number_entry_window

0x95fe,	// (0x000764d5) bg_popup_call_pane_cp05_ParamLimits

0x95fe,	// (0x000764d5) bg_popup_call_pane_cp05

0x961e,	// (0x000764f5) popup_number_entry_window_t1

0x9631,	// (0x00076508) popup_number_entry_window_t2

0x9643,	// (0x0007651a) popup_number_entry_window_t3

0x0003,

0xf0d3,	// (0x0007bfaa) popup_number_entry_window_t

0x9655,	// (0x0007652c) text_title_cp2

0x9668,	// (0x0007653f) bg_popup_call_pane_cp_ParamLimits

0x9668,	// (0x0007653f) bg_popup_call_pane_cp

0x9676,	// (0x0007654d) call_thumbnail_pane

0x967e,	// (0x00076555) popup_call_audio_in_window_g1_ParamLimits

0x967e,	// (0x00076555) popup_call_audio_in_window_g1

0x968a,	// (0x00076561) popup_call_audio_in_window_g2_ParamLimits

0x968a,	// (0x00076561) popup_call_audio_in_window_g2

0x9696,	// (0x0007656d) popup_call_audio_in_window_g3_ParamLimits

0x9696,	// (0x0007656d) popup_call_audio_in_window_g3

0x0002,

0xf0dc,	// (0x0007bfb3) popup_call_audio_in_window_g_ParamLimits

0xf0dc,	// (0x0007bfb3) popup_call_audio_in_window_g

0x96a2,	// (0x00076579) popup_call_audio_in_window_t1_ParamLimits

0x96a2,	// (0x00076579) popup_call_audio_in_window_t1

0x96be,	// (0x00076595) popup_call_audio_in_window_t2_ParamLimits

0x96be,	// (0x00076595) popup_call_audio_in_window_t2

0x96da,	// (0x000765b1) popup_call_audio_in_window_t3_ParamLimits

0x96da,	// (0x000765b1) popup_call_audio_in_window_t3

0x0002,

0xf0e3,	// (0x0007bfba) popup_call_audio_in_window_t_ParamLimits

0xf0e3,	// (0x0007bfba) popup_call_audio_in_window_t

0x9668,	// (0x0007653f) bg_popup_call_pane_cp01_ParamLimits

0x9668,	// (0x0007653f) bg_popup_call_pane_cp01

0x9676,	// (0x0007654d) call_thumbnail_pane_cp02

0x96ed,	// (0x000765c4) call_type_pane_cp022

0x96f5,	// (0x000765cc) popup_call_audio_out_window_g1_ParamLimits

0x96f5,	// (0x000765cc) popup_call_audio_out_window_g1

0x9707,	// (0x000765de) popup_call_audio_out_window_g2_ParamLimits

0x9707,	// (0x000765de) popup_call_audio_out_window_g2

0x9713,	// (0x000765ea) popup_call_audio_out_window_g3_ParamLimits

0x9713,	// (0x000765ea) popup_call_audio_out_window_g3

0x0002,

0xf0ea,	// (0x0007bfc1) popup_call_audio_out_window_g_ParamLimits

0xf0ea,	// (0x0007bfc1) popup_call_audio_out_window_g

0x9725,	// (0x000765fc) popup_call_audio_out_window_t1_ParamLimits

0x9725,	// (0x000765fc) popup_call_audio_out_window_t1

0x973d,	// (0x00076614) popup_call_audio_out_window_t2_ParamLimits

0x973d,	// (0x00076614) popup_call_audio_out_window_t2

0x0001,

0xf0f1,	// (0x0007bfc8) popup_call_audio_out_window_t_ParamLimits

0xf0f1,	// (0x0007bfc8) popup_call_audio_out_window_t

0x9752,	// (0x00076629) bg_popup_call_pane_ParamLimits

0x9752,	// (0x00076629) bg_popup_call_pane

0x00d0,	// (0x0006cfa7) call_thumbnail_pane_cp_ParamLimits

0x00d0,	// (0x0006cfa7) call_thumbnail_pane_cp

0x97d6,	// (0x000766ad) call_type_pane_cp01_ParamLimits

0x97d6,	// (0x000766ad) call_type_pane_cp01

0x981a,	// (0x000766f1) popup_call_audio_first_window_g1_ParamLimits

0x981a,	// (0x000766f1) popup_call_audio_first_window_g1

0x9866,	// (0x0007673d) popup_call_audio_first_window_g2_ParamLimits

0x9866,	// (0x0007673d) popup_call_audio_first_window_g2

0x0001,

0xf0f6,	// (0x0007bfcd) popup_call_audio_first_window_g_ParamLimits

0xf0f6,	// (0x0007bfcd) popup_call_audio_first_window_g

0x98aa,	// (0x00076781) popup_call_audio_first_window_t1_ParamLimits

0x98aa,	// (0x00076781) popup_call_audio_first_window_t1

0x9956,	// (0x0007682d) popup_call_audio_first_window_t4_ParamLimits

0x9956,	// (0x0007682d) popup_call_audio_first_window_t4

0x99e2,	// (0x000768b9) popup_call_audio_first_window_t5_ParamLimits

0x99e2,	// (0x000768b9) popup_call_audio_first_window_t5

0x0002,

0xf0fb,	// (0x0007bfd2) popup_call_audio_first_window_t_ParamLimits

0xf0fb,	// (0x0007bfd2) popup_call_audio_first_window_t

0x9a11,	// (0x000768e8) bg_popup_call_pane_cp02

0x9a1b,	// (0x000768f2) call_type_pane_cp023

0x9a23,	// (0x000768fa) popup_call_audio_wait_window_g1

0x9a2b,	// (0x00076902) popup_call_audio_wait_window_g2

0x0001,

0xf102,	// (0x0007bfd9) popup_call_audio_wait_window_g

0x9a33,	// (0x0007690a) popup_call_audio_wait_window_t3

0x9a41,	// (0x00076918) bg_popup_call_pane_cp03_ParamLimits

0x9a41,	// (0x00076918) bg_popup_call_pane_cp03

0x9aa1,	// (0x00076978) call_thumbnail_pane_cp011_ParamLimits

0x9aa1,	// (0x00076978) call_thumbnail_pane_cp011

0x9aad,	// (0x00076984) call_type_pane_cp034_ParamLimits

0x9aad,	// (0x00076984) call_type_pane_cp034

0x9ae9,	// (0x000769c0) popup_call_audio_second_window_g1_ParamLimits

0x9ae9,	// (0x000769c0) popup_call_audio_second_window_g1

0x9b25,	// (0x000769fc) popup_call_audio_second_window_g2_ParamLimits

0x9b25,	// (0x000769fc) popup_call_audio_second_window_g2

0x0001,

0xf107,	// (0x0007bfde) popup_call_audio_second_window_g_ParamLimits

0xf107,	// (0x0007bfde) popup_call_audio_second_window_g

0x9b61,	// (0x00076a38) popup_call_audio_second_window_t1_ParamLimits

0x9b61,	// (0x00076a38) popup_call_audio_second_window_t1

0x9be2,	// (0x00076ab9) popup_call_audio_second_window_t2_ParamLimits

0x9be2,	// (0x00076ab9) popup_call_audio_second_window_t2

0x9c18,	// (0x00076aef) popup_call_audio_second_window_t3_ParamLimits

0x9c18,	// (0x00076aef) popup_call_audio_second_window_t3

0x0002,

0xf10c,	// (0x0007bfe3) popup_call_audio_second_window_t_ParamLimits

0xf10c,	// (0x0007bfe3) popup_call_audio_second_window_t

0x9a11,	// (0x000768e8) bg_popup_call_pane_cp04

0x9c4e,	// (0x00076b25) list_conf_pane

0x9c56,	// (0x00076b2d) popup_call_audio_conf_window_t1

0x9c64,	// (0x00076b3b) call_thumbnail_pane_g1

0x9c6c,	// (0x00076b43) bg_pinb_pane_ParamLimits

0x9c6c,	// (0x00076b43) bg_pinb_pane

0x9c7a,	// (0x00076b51) find_pinb_pane

0x9c83,	// (0x00076b5a) listscroll_pinb_pane_ParamLimits

0x9c83,	// (0x00076b5a) listscroll_pinb_pane

0x9c92,	// (0x00076b69) pinb_bg_pane_g1

0x00f4,	// (0x0006cfcb) pinb_bg_pane_g2

0x0100,	// (0x0006cfd7) pinb_bg_pane_g3

0x010c,	// (0x0006cfe3) pinb_bg_pane_g4

0x0118,	// (0x0006cfef) pinb_bg_pane_g5

0x0124,	// (0x0006cffb) pinb_bg_pane_g6

0x012f,	// (0x0006d006) pinb_bg_pane_g7

0x013a,	// (0x0006d011) pinb_bg_pane_g8

0x0145,	// (0x0006d01c) pinb_bg_pane_g9

0x014f,	// (0x0006d026) pinb_bg_pane_g10

0x0009,

0xf113,	// (0x0007bfea) pinb_bg_pane_g

0x016c,	// (0x0006d043) grid_pinb_pane

0x0177,	// (0x0006d04e) list_pinb_pane

0x0182,	// (0x0006d059) scroll_pane_cp01_ParamLimits

0x0182,	// (0x0006d059) scroll_pane_cp01

0x9c9c,	// (0x00076b73) find_pinb_pane_g1_ParamLimits

0x9c9c,	// (0x00076b73) find_pinb_pane_g1

0x9cb4,	// (0x00076b8b) find_pinb_pane_t1

0x9cc6,	// (0x00076b9d) find_pinb_pane_t2

0x0001,

0xf12d,	// (0x0007c004) find_pinb_pane_t

0x9cdb,	// (0x00076bb2) input_focus_pane_cp01_ParamLimits

0x9cdb,	// (0x00076bb2) input_focus_pane_cp01

0x0194,	// (0x0006d06b) cell_pinb_pane_ParamLimits

0x0194,	// (0x0006d06b) cell_pinb_pane

0x01b6,	// (0x0006d08d) cell_pinb_pane_g1_ParamLimits

0x01b6,	// (0x0006d08d) cell_pinb_pane_g1

0x01cb,	// (0x0006d0a2) cell_pinb_pane_g2_ParamLimits

0x01cb,	// (0x0006d0a2) cell_pinb_pane_g2

0xa701,	// (0x000775d8) cell_pinb_pane_g3_ParamLimits

0xa701,	// (0x000775d8) cell_pinb_pane_g3

0x0002,

0xf132,	// (0x0007c009) cell_pinb_pane_g_ParamLimits

0xf132,	// (0x0007c009) cell_pinb_pane_g

0x9a11,	// (0x000768e8) grid_highlight_pane_cp01

0x01d7,	// (0x0006d0ae) list_pinb_item_pane_ParamLimits

0x01d7,	// (0x0006d0ae) list_pinb_item_pane

0x9a11,	// (0x000768e8) list_highlight_pane_cp02

0x01e9,	// (0x0006d0c0) list_pinb_item_pane_g1_ParamLimits

0x01e9,	// (0x0006d0c0) list_pinb_item_pane_g1

0x01f6,	// (0x0006d0cd) list_pinb_item_pane_g2_ParamLimits

0x01f6,	// (0x0006d0cd) list_pinb_item_pane_g2

0x0202,	// (0x0006d0d9) list_pinb_item_pane_g3_ParamLimits

0x0202,	// (0x0006d0d9) list_pinb_item_pane_g3

0x0213,	// (0x0006d0ea) list_pinb_item_pane_g4_ParamLimits

0x0213,	// (0x0006d0ea) list_pinb_item_pane_g4

0x0003,

0xf139,	// (0x0007c010) list_pinb_item_pane_g_ParamLimits

0xf139,	// (0x0007c010) list_pinb_item_pane_g

0x021f,	// (0x0006d0f6) list_pinb_item_pane_t1_ParamLimits

0x021f,	// (0x0006d0f6) list_pinb_item_pane_t1

0x0254,	// (0x0006d12b) calc_display_pane

0x027c,	// (0x0006d153) calc_paper_pane

0x029f,	// (0x0006d176) grid_calc_pane

0x9a11,	// (0x000768e8) bg_list_pane_cp01

0x02cd,	// (0x0006d1a4) clock_g1

0x02d5,	// (0x0006d1ac) clock_g2

0x0001,

0xf142,	// (0x0007c019) clock_g

0x02dd,	// (0x0006d1b4) clock_t1_ParamLimits

0x02dd,	// (0x0006d1b4) clock_t1

0x02f2,	// (0x0006d1c9) clock_t2_ParamLimits

0x02f2,	// (0x0006d1c9) clock_t2

0x0304,	// (0x0006d1db) clock_t3_ParamLimits

0x0304,	// (0x0006d1db) clock_t3

0x0316,	// (0x0006d1ed) clock_t4_ParamLimits

0x0316,	// (0x0006d1ed) clock_t4

0x0328,	// (0x0006d1ff) clock_t5_ParamLimits

0x0328,	// (0x0006d1ff) clock_t5

0x033d,	// (0x0006d214) clock_t6_ParamLimits

0x033d,	// (0x0006d214) clock_t6

0x034f,	// (0x0006d226) clock_t7_ParamLimits

0x034f,	// (0x0006d226) clock_t7

0x0361,	// (0x0006d238) clock_t8_ParamLimits

0x0361,	// (0x0006d238) clock_t8

0x0375,	// (0x0006d24c) clock_t9_ParamLimits

0x0375,	// (0x0006d24c) clock_t9

0x0008,

0xf147,	// (0x0007c01e) clock_t_ParamLimits

0xf147,	// (0x0007c01e) clock_t

0xa70d,	// (0x000775e4) popup_clock_analogue_window_cp02

0xa70d,	// (0x000775e4) popup_clock_digital_window_cp01

0xa715,	// (0x000775ec) listscroll_help_pane

0x9a11,	// (0x000768e8) phob_pre_status_pane

0xa71f,	// (0x000775f6) grid_qdial_pane

0x9c6c,	// (0x00076b43) listscroll_mce_pane

0x9c6c,	// (0x00076b43) bg_notes_pane

0xa729,	// (0x00077600) list_notes_pane

0x038b,	// (0x0006d262) scroll_pane_cp06

0xa737,	// (0x0007760e) bg_calc_paper_pane

0x9cf9,	// (0x00076bd0) list_calc_pane

0xa74b,	// (0x00077622) bg_calc_display_pane

0x039f,	// (0x0006d276) calc_display_pane_t1

0x03b1,	// (0x0006d288) calc_display_pane_t2

0x9d13,	// (0x00076bea) calc_display_pane_t3

0x0002,

0xf15a,	// (0x0007c031) calc_display_pane_t

0x03c3,	// (0x0006d29a) cell_calc_pane_ParamLimits

0x03c3,	// (0x0006d29a) cell_calc_pane

0xa757,	// (0x0007762e) bg_calc_paper_pane_g1

0xa763,	// (0x0007763a) bg_calc_paper_pane_g2

0xa76f,	// (0x00077646) bg_calc_paper_pane_g3

0xa77b,	// (0x00077652) bg_calc_paper_pane_g4

0xa787,	// (0x0007765e) bg_calc_paper_pane_g5

0x0400,	// (0x0006d2d7) bg_calc_paper_pane_g6

0x0413,	// (0x0006d2ea) bg_calc_paper_pane_g7

0x0426,	// (0x0006d2fd) bg_calc_paper_pane_g8

0x0007,

0xf161,	// (0x0007c038) bg_calc_paper_pane_g

0x0437,	// (0x0006d30e) calc_bg_paper_pane_g9

0x0448,	// (0x0006d31f) list_calc_item_pane_ParamLimits

0x0448,	// (0x0006d31f) list_calc_item_pane

0xa793,	// (0x0007766a) list_calc_item_pane_g1

0x9d25,	// (0x00076bfc) list_calc_item_pane_t1_ParamLimits

0x9d25,	// (0x00076bfc) list_calc_item_pane_t1

0x0460,	// (0x0006d337) list_calc_item_pane_t2_ParamLimits

0x0460,	// (0x0006d337) list_calc_item_pane_t2

0x0001,

0xf172,	// (0x0007c049) list_calc_item_pane_t_ParamLimits

0xf172,	// (0x0007c049) list_calc_item_pane_t

0xa7a0,	// (0x00077677) cell_calc_pane_g1

0xa7aa,	// (0x00077681) grid_highlight_pane_cp02

0xa7cc,	// (0x000776a3) bg_calc_display_pane_g1

0x9d37,	// (0x00076c0e) bg_calc_display_pane_g2

0xa7d5,	// (0x000776ac) bg_calc_display_pane_g3

0x0002,

0xf17c,	// (0x0007c053) bg_calc_display_pane_g

0x0492,	// (0x0006d369) cell_qdial_pane_ParamLimits

0x0492,	// (0x0006d369) cell_qdial_pane

0x04a6,	// (0x0006d37d) cell_qdial_pane_g1_ParamLimits

0x04a6,	// (0x0006d37d) cell_qdial_pane_g1

0x04bc,	// (0x0006d393) cell_qdial_pane_g2_ParamLimits

0x04bc,	// (0x0006d393) cell_qdial_pane_g2

0xa7de,	// (0x000776b5) cell_qdial_pane_g3_ParamLimits

0xa7de,	// (0x000776b5) cell_qdial_pane_g3

0x0003,

0xf183,	// (0x0007c05a) cell_qdial_pane_g_ParamLimits

0xf183,	// (0x0007c05a) cell_qdial_pane_g

0x04e3,	// (0x0006d3ba) cell_qdial_pane_t1_ParamLimits

0x04e3,	// (0x0006d3ba) cell_qdial_pane_t1

0x04fb,	// (0x0006d3d2) cell_qdial_pane_t2_ParamLimits

0x04fb,	// (0x0006d3d2) cell_qdial_pane_t2

0x050e,	// (0x0006d3e5) cell_qdial_pane_t3_ParamLimits

0x050e,	// (0x0006d3e5) cell_qdial_pane_t3

0x0002,

0xf18c,	// (0x0007c063) cell_qdial_pane_t_ParamLimits

0xf18c,	// (0x0007c063) cell_qdial_pane_t

0x9a11,	// (0x000768e8) grid_highlight_pane_cp04

0xa7ea,	// (0x000776c1) thumbnail_qdial_pane_ParamLimits

0xa7ea,	// (0x000776c1) thumbnail_qdial_pane

0xa846,	// (0x0007771d) list_help_pane

0xa84f,	// (0x00077726) scroll_pane_cp02

0x0521,	// (0x0006d3f8) help_list_pane_t1_ParamLimits

0x0521,	// (0x0006d3f8) help_list_pane_t1

0x9d41,	// (0x00076c18) bg_notes_pane_g2

0x9d49,	// (0x00076c20) bg_notes_pane_g3

0x9d51,	// (0x00076c28) notes_bg_pane_g1

0x9d59,	// (0x00076c30) notes_bg_pane_g4

0x9d61,	// (0x00076c38) notes_bg_pane_g5

0x9d69,	// (0x00076c40) notes_bg_pane_g6

0x9d71,	// (0x00076c48) notes_bg_pane_g7

0x9d79,	// (0x00076c50) notes_bg_pane_g8

0x9d81,	// (0x00076c58) notes_bg_pane_g9

0x0006,

0xf1aa,	// (0x0007c081) notes_bg_pane_g

0x053f,	// (0x0006d416) list_notes_text_pane_ParamLimits

0x053f,	// (0x0006d416) list_notes_text_pane

0xa858,	// (0x0007772f) list_notes_text_pane_g1

0x0553,	// (0x0006d42a) list_notes_text_pane_t1

0x0561,	// (0x0006d438) listscroll_cale_week_pane

0x059b,	// (0x0006d472) bg_cale_heading_pane

0xa872,	// (0x00077749) bg_cale_pane_cp01

0x05c0,	// (0x0006d497) cale_week_corner_pane

0x05df,	// (0x0006d4b6) cale_week_day_heading_pane

0x0609,	// (0x0006d4e0) cale_week_scroll_pane_g1

0x0629,	// (0x0006d500) cale_week_scroll_pane_g2

0x0641,	// (0x0006d518) cale_week_scroll_pane_g3

0x0659,	// (0x0006d530) cale_week_scroll_pane_g4

0x0671,	// (0x0006d548) cale_week_scroll_pane_g5

0x068d,	// (0x0006d564) cale_week_scroll_pane_g6

0x06a9,	// (0x0006d580) cale_week_scroll_pane_g7

0x06c9,	// (0x0006d5a0) cale_week_scroll_pane_g8

0x06e9,	// (0x0006d5c0) cale_week_scroll_pane_g9

0x0706,	// (0x0006d5dd) cale_week_scroll_pane_g10

0x0723,	// (0x0006d5fa) cale_week_scroll_pane_g11

0x0740,	// (0x0006d617) cale_week_scroll_pane_g12

0x075d,	// (0x0006d634) cale_week_scroll_pane_g13

0x077a,	// (0x0006d651) cale_week_scroll_pane_g14

0x079f,	// (0x0006d676) cale_week_scroll_pane_g15

0x000e,

0xf1b9,	// (0x0007c090) cale_week_scroll_pane_g

0x07c4,	// (0x0006d69b) cale_week_time_pane

0x07e4,	// (0x0006d6bb) grid_cale_week_pane

0xa8a2,	// (0x00077779) scroll_pane_cp08

0x0813,	// (0x0006d6ea) cell_cale_week_pane_ParamLimits

0x0813,	// (0x0006d6ea) cell_cale_week_pane

0x0895,	// (0x0006d76c) cale_week_day_heading_pane_t1

0x08df,	// (0x0006d7b6) cale_week_day_heading_pane_t2

0x092e,	// (0x0006d805) cale_week_day_heading_pane_t3

0x097d,	// (0x0006d854) cale_week_day_heading_pane_t4

0x09cc,	// (0x0006d8a3) cale_week_day_heading_pane_t5

0x0a1b,	// (0x0006d8f2) cale_week_day_heading_pane_t6

0x0a6e,	// (0x0006d945) cale_week_day_heading_pane_t7

0x0006,

0xf1d8,	// (0x0007c0af) cale_week_day_heading_pane_t

0xa8c4,	// (0x0007779b) bg_cale_side_pane

0x0ab8,	// (0x0006d98f) cale_week_time_pane_t1

0x0af2,	// (0x0006d9c9) cale_week_time_pane_t2

0x0b2c,	// (0x0006da03) cale_week_time_pane_t3

0x0b66,	// (0x0006da3d) cale_week_time_pane_t4

0x0ba0,	// (0x0006da77) cale_week_time_pane_t5

0x0bda,	// (0x0006dab1) cale_week_time_pane_t6

0x0c14,	// (0x0006daeb) cale_week_time_pane_t7

0x0c4e,	// (0x0006db25) cale_week_time_pane_t8

0x0007,

0xf1e7,	// (0x0007c0be) cale_week_time_pane_t

0x0c8c,	// (0x0006db63) cell_cale_week_pane_g2

0x0cab,	// (0x0006db82) cell_cale_week_pane_g3_ParamLimits

0x0cab,	// (0x0006db82) cell_cale_week_pane_g3

0xa8d2,	// (0x000777a9) grid_highlight_pane_cp07

0xa8da,	// (0x000777b1) listscroll_gms_pane

0xa8e4,	// (0x000777bb) grid_gms_pane

0xa8ed,	// (0x000777c4) listscroll_gms_pane_g1

0xa8f5,	// (0x000777cc) listscroll_gms_pane_g2

0x0001,

0xf1f8,	// (0x0007c0cf) listscroll_gms_pane_g

0x0cc3,	// (0x0006db9a) scroll_pane_cp010

0x0cce,	// (0x0006dba5) cell_gms_pane_ParamLimits

0x0cce,	// (0x0006dba5) cell_gms_pane

0x0ce8,	// (0x0006dbbf) cell_gms_pane_g1

0xa8fd,	// (0x000777d4) cell_gms_pane_g2

0xa905,	// (0x000777dc) cell_gms_pane_g3

0xa90e,	// (0x000777e5) cell_gms_pane_g4

0x0003,

0xf1fd,	// (0x0007c0d4) cell_gms_pane_g

0xa917,	// (0x000777ee) grid_highlight_pane_cp09

0x3579,	// (0x00070450) phob_pre_status_pane_g1

0x3581,	// (0x00070458) phob_pre_status_pane_g2

0x3589,	// (0x00070460) phob_pre_status_pane_g3

0x3591,	// (0x00070468) phob_pre_status_pane_g4

0x0004,

0xf5ec,	// (0x0007c4c3) phob_pre_status_pane_g

0x35a1,	// (0x00070478) phob_pre_status_pane_t1

0x35b1,	// (0x00070488) phob_pre_status_pane_t2

0x35c1,	// (0x00070498) phob_pre_status_pane_t3

0x0002,

0xf5f7,	// (0x0007c4ce) phob_pre_status_pane_t

0x9a11,	// (0x000768e8) bg_list_pane_cp05

0x0cf8,	// (0x0006dbcf) grid_vorec_pane

0x0d04,	// (0x0006dbdb) vorec_t1

0x0d12,	// (0x0006dbe9) vorec_t2

0x0d20,	// (0x0006dbf7) vorec_t3

0x0d2e,	// (0x0006dc05) vorec_t4

0x0d3c,	// (0x0006dc13) vorec_t5

0x9d89,	// (0x00076c60) vorec_t6

0x0006,

0xf206,	// (0x0007c0dd) vorec_t

0x0d58,	// (0x0006dc2f) wait_bar_pane_cp01

0x0d60,	// (0x0006dc37) cell_vorec_pane_ParamLimits

0x0d60,	// (0x0006dc37) cell_vorec_pane

0xa91f,	// (0x000777f6) cell_vorec_pane_g1

0x9a11,	// (0x000768e8) grid_highlight_pane_cp05

0x0d8b,	// (0x0006dc62) cams_zoom_pane

0x0d9a,	// (0x0006dc71) image_vga_pane

0x0db4,	// (0x0006dc8b) main_camera_pane_g1

0x0dc6,	// (0x0006dc9d) main_camera_pane_g2

0x0dd6,	// (0x0006dcad) main_camera_pane_g3

0x0dea,	// (0x0006dcc1) main_camera_pane_g4

0x0dfe,	// (0x0006dcd5) main_camera_pane_g5

0x0e12,	// (0x0006dce9) main_camera_pane_g6

0x0e26,	// (0x0006dcfd) main_camera_pane_g7

0x0007,

0xf215,	// (0x0007c0ec) main_camera_pane_g

0x0e3a,	// (0x0006dd11) main_camera_pane_t1

0x0e50,	// (0x0006dd27) main_camera_pane_t2

0x0001,

0xf226,	// (0x0007c0fd) main_camera_pane_t

0x0e8e,	// (0x0006dd65) cams_zoom_pane_cp_ParamLimits

0x0e8e,	// (0x0006dd65) cams_zoom_pane_cp

0x0eb6,	// (0x0006dd8d) image_cif_pane_ParamLimits

0x0eb6,	// (0x0006dd8d) image_cif_pane

0x0ef1,	// (0x0006ddc8) image_subqcif_pane

0x0efb,	// (0x0006ddd2) main_video_pane_g1_ParamLimits

0x0efb,	// (0x0006ddd2) main_video_pane_g1

0x0f1f,	// (0x0006ddf6) main_video_pane_g2_ParamLimits

0x0f1f,	// (0x0006ddf6) main_video_pane_g2

0x0f55,	// (0x0006de2c) main_video_pane_g3_ParamLimits

0x0f55,	// (0x0006de2c) main_video_pane_g3

0x0f83,	// (0x0006de5a) main_video_pane_g4_ParamLimits

0x0f83,	// (0x0006de5a) main_video_pane_g4

0x0fb1,	// (0x0006de88) main_video_pane_g5_ParamLimits

0x0fb1,	// (0x0006de88) main_video_pane_g5

0xa935,	// (0x0007780c) main_video_pane_g6_ParamLimits

0xa935,	// (0x0007780c) main_video_pane_g6

0x0006,

0xf22b,	// (0x0007c102) main_video_pane_g_ParamLimits

0xf22b,	// (0x0007c102) main_video_pane_g

0x0fda,	// (0x0006deb1) main_video_pane_t1_ParamLimits

0x0fda,	// (0x0006deb1) main_video_pane_t1

0xa94f,	// (0x00077826) cams_zoom_pane_g1

0xa958,	// (0x0007782f) cams_zoom_pane_g2

0xa961,	// (0x00077838) cams_zoom_pane_g3

0xa96a,	// (0x00077841) cams_zoom_pane_g4

0x0003,

0xf23a,	// (0x0007c111) cams_zoom_pane_g

0x1037,	// (0x0006df0e) grid_cams_pane

0x1051,	// (0x0006df28) linegrid_cams_pane

0x1063,	// (0x0006df3a) cell_cams_pane_ParamLimits

0x1063,	// (0x0006df3a) cell_cams_pane

0xa973,	// (0x0007784a) cams_burst_image_pane

0xa97b,	// (0x00077852) cell_cams_pane_g1

0x9a11,	// (0x000768e8) grid_highlight_pane_cp03

0xa7a0,	// (0x00077677) mp_bg_pane_g1

0x9a11,	// (0x000768e8) bg_list_pane_cp03

0xc74f,	// (0x00079626) bg_mp_pane

0xc757,	// (0x0007962e) grid_mp_pane

0xc75f,	// (0x00079636) media_player_g1

0xc769,	// (0x00079640) media_player_t1

0xc777,	// (0x0007964e) media_player_t2

0xc785,	// (0x0007965c) media_player_t3

0xc793,	// (0x0007966a) media_player_t4

0xc7a1,	// (0x00079678) media_player_t5

0xc7af,	// (0x00079686) media_player_t6

0xc7bd,	// (0x00079694) media_player_t7

0x0006,

0xf5d6,	// (0x0007c4ad) media_player_t

0xc7cb,	// (0x000796a2) wait_bar_pane_cp02

0xf5bb,	// (0x0007c492) main_usb_pane_t

0x3570,	// (0x00070447) cell_mp_pane

0xa7a0,	// (0x00077677) cell_mp_pane_g1

0x9a11,	// (0x000768e8) grid_highlight_pane_cp06

0xa983,	// (0x0007785a) grid_skin_colour_pane

0xa98b,	// (0x00077862) list_highlight_pane_cp03

0x1178,	// (0x0006e04f) skin_g1

0xa993,	// (0x0007786a) skin_t1

0xa9a2,	// (0x00077879) skin_t2

0x0001,

0xf26f,	// (0x0007c146) skin_t

0x1180,	// (0x0006e057) cell_skin_colour_pane_ParamLimits

0x1180,	// (0x0006e057) cell_skin_colour_pane

0xa9b0,	// (0x00077887) cell_skin_colour_pane_g1

0x11f3,	// (0x0006e0ca) call_video_g1_ParamLimits

0x11f3,	// (0x0006e0ca) call_video_g1

0x120f,	// (0x0006e0e6) call_video_g2_ParamLimits

0x120f,	// (0x0006e0e6) call_video_g2

0x0001,

0xf274,	// (0x0007c14b) call_video_g_ParamLimits

0xf274,	// (0x0007c14b) call_video_g

0x1254,	// (0x0006e12b) call_video_uplink_pane_cp1_ParamLimits

0x1254,	// (0x0006e12b) call_video_uplink_pane_cp1

0xa9c2,	// (0x00077899) call_video_uplink_pane_cp2

0x12f5,	// (0x0006e1cc) video_down_crop_pane_ParamLimits

0x12f5,	// (0x0006e1cc) video_down_crop_pane

0x13de,	// (0x0006e2b5) video_down_pane_ParamLimits

0x13de,	// (0x0006e2b5) video_down_pane

0xa9ca,	// (0x000778a1) video_down_subqcif_pane_ParamLimits

0xa9ca,	// (0x000778a1) video_down_subqcif_pane

0xa9e4,	// (0x000778bb) video_down_subqcif_pane_cp_ParamLimits

0xa9e4,	// (0x000778bb) video_down_subqcif_pane_cp

0xaa0c,	// (0x000778e3) im_reading_pane_ParamLimits

0xaa0c,	// (0x000778e3) im_reading_pane

0x14e7,	// (0x0006e3be) im_writing_pane_ParamLimits

0x14e7,	// (0x0006e3be) im_writing_pane

0x1503,	// (0x0006e3da) im_reading_pane_t1

0xaa26,	// (0x000778fd) list_im_pane

0xaa37,	// (0x0007790e) scroll_pane_cp07

0x153f,	// (0x0006e416) im_writing_pane_t1_ParamLimits

0x153f,	// (0x0006e416) im_writing_pane_t1

0xaa50,	// (0x00077927) im_writing_pane_t2_ParamLimits

0xaa50,	// (0x00077927) im_writing_pane_t2

0x0001,

0xf27e,	// (0x0007c155) im_writing_pane_t_ParamLimits

0xf27e,	// (0x0007c155) im_writing_pane_t

0x9a11,	// (0x000768e8) input_focus_pane_cp04

0x9a11,	// (0x000768e8) input_focus_pane_cp05

0x1554,	// (0x0006e42b) list_im_single_pane_ParamLimits

0x1554,	// (0x0006e42b) list_im_single_pane

0x156a,	// (0x0006e441) list_single_im_pane_t1

0x3530,	// (0x00070407) blid_accuracy_pane

0x3538,	// (0x0007040f) blid_compass_pane

0x3542,	// (0x00070419) main_location_t1

0x3552,	// (0x00070429) main_location_t2

0x3562,	// (0x00070439) main_location_t3

0x0002,

0xf5e5,	// (0x0007c4bc) main_location_t

0x9a11,	// (0x000768e8) aid_levels_location

0xa7a0,	// (0x00077677) blid_accuracy_pane_g1

0xa7a0,	// (0x00077677) blid_accuracy_pane_g2

0x0001,

0xf2e0,	// (0x0007c1b7) blid_accuracy_pane_g

0xaa98,	// (0x0007796f) wml_content_pane

0xaad6,	// (0x000779ad) wml_button_pane_ParamLimits

0xaad6,	// (0x000779ad) wml_button_pane

0x1579,	// (0x0006e450) wml_list_single_large_pane_ParamLimits

0x1579,	// (0x0006e450) wml_list_single_large_pane

0x158f,	// (0x0006e466) wml_list_single_medium_pane_ParamLimits

0x158f,	// (0x0006e466) wml_list_single_medium_pane

0x15a6,	// (0x0006e47d) wml_list_single_small_pane_ParamLimits

0x15a6,	// (0x0006e47d) wml_list_single_small_pane

0xaaea,	// (0x000779c1) wml_selection_box_pane_ParamLimits

0xaaea,	// (0x000779c1) wml_selection_box_pane

0xaafd,	// (0x000779d4) wml_list_single_pane_t1

0xab0c,	// (0x000779e3) wml_list_single_medium_pane_t1

0xab1b,	// (0x000779f2) wml_list_single_large_pane_t1

0xab2a,	// (0x00077a01) input_focus_pane_cp02_ParamLimits

0xab2a,	// (0x00077a01) input_focus_pane_cp02

0xab3d,	// (0x00077a14) wml_selection_box_pane_g1

0xab46,	// (0x00077a1d) wml_selection_box_pane_t1_ParamLimits

0xab46,	// (0x00077a1d) wml_selection_box_pane_t1

0x9c6c,	// (0x00076b43) bg_wml_button_pane_ParamLimits

0x9c6c,	// (0x00076b43) bg_wml_button_pane

0xab5e,	// (0x00077a35) wml_button_pane_g1

0xab66,	// (0x00077a3d) wml_button_pane_t1

0xab5e,	// (0x00077a35) wml_button_bg_pane_g1

0xab76,	// (0x00077a4d) wml_button_bg_pane_g2

0xab7e,	// (0x00077a55) wml_button_bg_pane_g3

0xab86,	// (0x00077a5d) wml_button_bg_pane_g4

0xab8e,	// (0x00077a65) wml_button_bg_pane_g5

0xab96,	// (0x00077a6d) wml_button_bg_pane_g6

0xab9e,	// (0x00077a75) wml_button_bg_pane_g7

0xaba6,	// (0x00077a7d) wml_button_bg_pane_g8

0xabae,	// (0x00077a85) wml_button_bg_pane_g9

0x0008,

0xf283,	// (0x0007c15a) wml_button_bg_pane_g

0x15c2,	// (0x0006e499) bg_list_pane_cp02

0xabb6,	// (0x00077a8d) mce_header_pane_ParamLimits

0xabb6,	// (0x00077a8d) mce_header_pane

0xabcc,	// (0x00077aa3) mce_icon_pane

0xabcc,	// (0x00077aa3) mce_image_pane

0xabd5,	// (0x00077aac) mce_text_pane_ParamLimits

0xabd5,	// (0x00077aac) mce_text_pane

0x15cc,	// (0x0006e4a3) scroll_pane_cp03

0xaace,	// (0x000779a5) scroll_pane_cp04

0xabe8,	// (0x00077abf) scroll_pane_cp05_ParamLimits

0xabe8,	// (0x00077abf) scroll_pane_cp05

0x15d6,	// (0x0006e4ad) mce_header_field_pane_ParamLimits

0x15d6,	// (0x0006e4ad) mce_header_field_pane

0x15ef,	// (0x0006e4c6) mce_header_field_pane_2_ParamLimits

0x15ef,	// (0x0006e4c6) mce_header_field_pane_2

0x1605,	// (0x0006e4dc) mce_header_field_pane_3

0x160d,	// (0x0006e4e4) list_single_mce_message_pane_ParamLimits

0x160d,	// (0x0006e4e4) list_single_mce_message_pane

0x1626,	// (0x0006e4fd) list_single_mce_smart_pane_ParamLimits

0x1626,	// (0x0006e4fd) list_single_mce_smart_pane

0xabf4,	// (0x00077acb) input_focus_pane_cp03

0xabfd,	// (0x00077ad4) list_header_data_pane

0x164a,	// (0x0006e521) mce_header_field_pane_t1

0x165a,	// (0x0006e531) list_single_mce_header_pane_ParamLimits

0x165a,	// (0x0006e531) list_single_mce_header_pane

0xac05,	// (0x00077adc) list_single_mce_header_pane_t1

0xac14,	// (0x00077aeb) list_single_mce_message_pane_g1

0xac1c,	// (0x00077af3) list_single_mce_message_pane_t1

0x1694,	// (0x0006e56b) bg_cale_heading_pane_cp01_ParamLimits

0x1694,	// (0x0006e56b) bg_cale_heading_pane_cp01

0xac2a,	// (0x00077b01) bg_cale_pane_cp02_ParamLimits

0xac2a,	// (0x00077b01) bg_cale_pane_cp02

0x16d3,	// (0x0006e5aa) cale_month_corner_pane

0x16f2,	// (0x0006e5c9) cale_month_day_heading_pane_ParamLimits

0x16f2,	// (0x0006e5c9) cale_month_day_heading_pane

0x1749,	// (0x0006e620) cale_month_pane_g1_ParamLimits

0x1749,	// (0x0006e620) cale_month_pane_g1

0x177d,	// (0x0006e654) cale_month_pane_g2_ParamLimits

0x177d,	// (0x0006e654) cale_month_pane_g2

0x17b5,	// (0x0006e68c) cale_month_pane_g3_ParamLimits

0x17b5,	// (0x0006e68c) cale_month_pane_g3

0x1801,	// (0x0006e6d8) cale_month_pane_g4_ParamLimits

0x1801,	// (0x0006e6d8) cale_month_pane_g4

0x184d,	// (0x0006e724) cale_month_pane_g5_ParamLimits

0x184d,	// (0x0006e724) cale_month_pane_g5

0x189d,	// (0x0006e774) cale_month_pane_g6_ParamLimits

0x189d,	// (0x0006e774) cale_month_pane_g6

0x18f5,	// (0x0006e7cc) cale_month_pane_g7_ParamLimits

0x18f5,	// (0x0006e7cc) cale_month_pane_g7

0x1959,	// (0x0006e830) cale_month_pane_g8_ParamLimits

0x1959,	// (0x0006e830) cale_month_pane_g8

0x19bd,	// (0x0006e894) cale_month_pane_g9_ParamLimits

0x19bd,	// (0x0006e894) cale_month_pane_g9

0x1a17,	// (0x0006e8ee) cale_month_pane_g10_ParamLimits

0x1a17,	// (0x0006e8ee) cale_month_pane_g10

0x1a69,	// (0x0006e940) cale_month_pane_g11_ParamLimits

0x1a69,	// (0x0006e940) cale_month_pane_g11

0x1abb,	// (0x0006e992) cale_month_pane_g12_ParamLimits

0x1abb,	// (0x0006e992) cale_month_pane_g12

0x1b11,	// (0x0006e9e8) cale_month_pane_g13_ParamLimits

0x1b11,	// (0x0006e9e8) cale_month_pane_g13

0x000c,

0xf296,	// (0x0007c16d) cale_month_pane_g_ParamLimits

0xf296,	// (0x0007c16d) cale_month_pane_g

0x1b67,	// (0x0006ea3e) cale_month_week_pane

0x1b8b,	// (0x0006ea62) grid_cale_month_pane_ParamLimits

0x1b8b,	// (0x0006ea62) grid_cale_month_pane

0x1bd9,	// (0x0006eab0) cale_month_day_heading_pane_t1

0x1c5f,	// (0x0006eb36) cale_month_day_heading_pane_t2

0x1cf0,	// (0x0006ebc7) cale_month_day_heading_pane_t3

0x1d81,	// (0x0006ec58) cale_month_day_heading_pane_t4

0x1e12,	// (0x0006ece9) cale_month_day_heading_pane_t5

0x1eab,	// (0x0006ed82) cale_month_day_heading_pane_t6

0x1f4c,	// (0x0006ee23) cale_month_day_heading_pane_t7

0x0006,

0xf2b1,	// (0x0007c188) cale_month_day_heading_pane_t

0xa8c4,	// (0x0007779b) bg_cale_side_pane_cp01

0x1ff5,	// (0x0006eecc) cale_month_week_pane_t1

0x202e,	// (0x0006ef05) cale_month_week_pane_t2

0x2067,	// (0x0006ef3e) cale_month_week_pane_t3

0x20a0,	// (0x0006ef77) cale_month_week_pane_t4

0x20d9,	// (0x0006efb0) cale_month_week_pane_t5

0x2112,	// (0x0006efe9) cale_month_week_pane_t6

0x0005,

0xf2c0,	// (0x0007c197) cale_month_week_pane_t

0x214f,	// (0x0006f026) cell_cale_month_pane_ParamLimits

0x214f,	// (0x0006f026) cell_cale_month_pane

0x9dbb,	// (0x00076c92) cell_cale_month_pane_g1

0x2297,	// (0x0006f16e) cell_cale_month_pane_t1_ParamLimits

0x2297,	// (0x0006f16e) cell_cale_month_pane_t1

0xa8d2,	// (0x000777a9) grid_highlight_pane_cp08

0xa7a0,	// (0x00077677) main_smil_g1

0x22b7,	// (0x0006f18e) smil_status_pane

0xac69,	// (0x00077b40) smil_text_pane

0xc66d,	// (0x00079544) bg_popup_call3_rect_pane_g8

0xc675,	// (0x0007954c) bg_popup_call3_rect_pane_g9

0x0008,

0xf579,	// (0x0007c450) bg_popup_call3_rect_pane_g

0xc903,	// (0x000797da) smil_status_volume_pane_g1

0x22ca,	// (0x0006f1a1) smil_status_pane_t1

0x9eef,	// (0x00076dc6) volume_smil_pane

0xac73,	// (0x00077b4a) list_smil_text_pane

0x22e3,	// (0x0006f1ba) scroll_pane_cp011

0x22ee,	// (0x0006f1c5) smil_text_list_pane_t1_ParamLimits

0x22ee,	// (0x0006f1c5) smil_text_list_pane_t1

0x9dc7,	// (0x00076c9e) aid_volume_smil_ParamLimits

0x9dc7,	// (0x00076c9e) aid_volume_smil

0xa7a0,	// (0x00077677) smil_volume_pane_g1

0xa7a0,	// (0x00077677) smil_volume_pane_g2

0x0001,

0xf2e0,	// (0x0007c1b7) smil_volume_pane_g

0x2327,	// (0x0006f1fe) listscroll_cale_day_pane

0xac7d,	// (0x00077b54) bg_cale_pane

0xac95,	// (0x00077b6c) list_cale_pane

0xacb8,	// (0x00077b8f) scroll_pane_cp09

0xacc9,	// (0x00077ba0) cale_bg_pane_g1

0xacd1,	// (0x00077ba8) cale_bg_pane_g2

0xacd9,	// (0x00077bb0) cale_bg_pane_g3

0xace1,	// (0x00077bb8) cale_bg_pane_g4

0xace9,	// (0x00077bc0) cale_bg_pane_g5

0xacf1,	// (0x00077bc8) cale_bg_pane_g6

0xacf9,	// (0x00077bd0) cale_bg_pane_g7

0xad01,	// (0x00077bd8) cale_bg_pane_g8

0xad09,	// (0x00077be0) cale_bg_pane_g9

0x0008,

0xf2e5,	// (0x0007c1bc) cale_bg_pane_g

0xad11,	// (0x00077be8) list_cale_time_pane_ParamLimits

0xad11,	// (0x00077be8) list_cale_time_pane

0xad26,	// (0x00077bfd) list_cale_time_pane_g1_ParamLimits

0xad26,	// (0x00077bfd) list_cale_time_pane_g1

0xad32,	// (0x00077c09) list_cale_time_pane_g2_ParamLimits

0xad32,	// (0x00077c09) list_cale_time_pane_g2

0x2349,	// (0x0006f220) list_cale_time_pane_g3_ParamLimits

0x2349,	// (0x0006f220) list_cale_time_pane_g3

0x2357,	// (0x0006f22e) list_cale_time_pane_g4_ParamLimits

0x2357,	// (0x0006f22e) list_cale_time_pane_g4

0x2365,	// (0x0006f23c) list_cale_time_pane_g5_ParamLimits

0x2365,	// (0x0006f23c) list_cale_time_pane_g5

0x0005,

0xf2f8,	// (0x0007c1cf) list_cale_time_pane_g_ParamLimits

0xf2f8,	// (0x0007c1cf) list_cale_time_pane_g

0xad4c,	// (0x00077c23) list_cale_time_pane_t1_ParamLimits

0xad4c,	// (0x00077c23) list_cale_time_pane_t1

0xad74,	// (0x00077c4b) list_cale_time_pane_t2_ParamLimits

0xad74,	// (0x00077c4b) list_cale_time_pane_t2

0x2704,	// (0x0006f5db) aid_blid_cardinal_pane

0x2742,	// (0x0006f619) compass_pane_t4

0xad9c,	// (0x00077c73) list_cale_time_pane_t4_ParamLimits

0xad9c,	// (0x00077c73) list_cale_time_pane_t4

0x2750,	// (0x0006f627) compass_pane_t5

0x275e,	// (0x0006f635) compass_pane_t6

0x276c,	// (0x0006f643) compass_pane_t7

0xb1b6,	// (0x0007808d) navi_pane_cc_t1

0xb30b,	// (0x000781e2) aid_phob_thumbnail_center_pane

0x2efb,	// (0x0006fdd2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf305,	// (0x0007c1dc) list_cale_time_pane_t_ParamLimits

0xf305,	// (0x0007c1dc) list_cale_time_pane_t

0x9668,	// (0x0007653f) bg_popup_window_pane_cp02_ParamLimits

0x9668,	// (0x0007653f) bg_popup_window_pane_cp02

0xadc4,	// (0x00077c9b) heading_pane_cp01_ParamLimits

0xadc4,	// (0x00077c9b) heading_pane_cp01

0xadd0,	// (0x00077ca7) loc_req_pane_ParamLimits

0xadd0,	// (0x00077ca7) loc_req_pane

0xade0,	// (0x00077cb7) loc_type_pane_ParamLimits

0xade0,	// (0x00077cb7) loc_type_pane

0xadf2,	// (0x00077cc9) loc_type_pane_t1_ParamLimits

0xadf2,	// (0x00077cc9) loc_type_pane_t1

0xae04,	// (0x00077cdb) loc_type_pane_t2_ParamLimits

0xae04,	// (0x00077cdb) loc_type_pane_t2

0xae16,	// (0x00077ced) loc_type_pane_t3_ParamLimits

0xae16,	// (0x00077ced) loc_type_pane_t3

0x0002,

0xf30c,	// (0x0007c1e3) loc_type_pane_t_ParamLimits

0xf30c,	// (0x0007c1e3) loc_type_pane_t

0xae28,	// (0x00077cff) list_loc_req_pane

0xae32,	// (0x00077d09) scroll_pane_cp012

0x2373,	// (0x0006f24a) list_single_loc_request_popup_menu_pane_ParamLimits

0x2373,	// (0x0006f24a) list_single_loc_request_popup_menu_pane

0xae3d,	// (0x00077d14) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae3d,	// (0x00077d14) list_single_loc_request_popup_menu_pane_g1

0xae49,	// (0x00077d20) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae49,	// (0x00077d20) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf313,	// (0x0007c1ea) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf313,	// (0x0007c1ea) list_single_loc_request_popup_menu_pane_g

0xae55,	// (0x00077d2c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae55,	// (0x00077d2c) list_single_loc_request_popup_menu_pane_t1

0x9c6c,	// (0x00076b43) bg_popup_window_pane_cp03_ParamLimits

0x9c6c,	// (0x00076b43) bg_popup_window_pane_cp03

0xae6b,	// (0x00077d42) heading_loc_req_pane_ParamLimits

0xae6b,	// (0x00077d42) heading_loc_req_pane

0x2380,	// (0x0006f257) popup_dyc_status_message_window_g1_ParamLimits

0x2380,	// (0x0006f257) popup_dyc_status_message_window_g1

0x2394,	// (0x0006f26b) popup_dyc_status_message_window_t1_ParamLimits

0x2394,	// (0x0006f26b) popup_dyc_status_message_window_t1

0x23a9,	// (0x0006f280) popup_dyc_status_message_window_t2_ParamLimits

0x23a9,	// (0x0006f280) popup_dyc_status_message_window_t2

0x23be,	// (0x0006f295) popup_dyc_status_message_window_t3_ParamLimits

0x23be,	// (0x0006f295) popup_dyc_status_message_window_t3

0x0002,

0xf318,	// (0x0007c1ef) popup_dyc_status_message_window_t_ParamLimits

0xf318,	// (0x0007c1ef) popup_dyc_status_message_window_t

0x9a11,	// (0x000768e8) bg_heading_pane_cp01

0xae77,	// (0x00077d4e) heading_loc_req_pane_g1

0xae7f,	// (0x00077d56) heading_loc_req_pane_g2

0xae87,	// (0x00077d5e) heading_loc_req_pane_g3

0x0002,

0xf31f,	// (0x0007c1f6) heading_loc_req_pane_g

0xae8f,	// (0x00077d66) heading_loc_req_pane_t1

0xae9f,	// (0x00077d76) bg_popup_sub_pane_cp01_ParamLimits

0xae9f,	// (0x00077d76) bg_popup_sub_pane_cp01

0xaead,	// (0x00077d84) popup_cale_events_window_g1_ParamLimits

0xaead,	// (0x00077d84) popup_cale_events_window_g1

0xaecd,	// (0x00077da4) popup_cale_events_window_g2_ParamLimits

0xaecd,	// (0x00077da4) popup_cale_events_window_g2

0x0001,

0xf353,	// (0x0007c22a) popup_cale_events_window_g_ParamLimits

0xf353,	// (0x0007c22a) popup_cale_events_window_g

0xaeed,	// (0x00077dc4) popup_cale_events_window_t1_ParamLimits

0xaeed,	// (0x00077dc4) popup_cale_events_window_t1

0xaeff,	// (0x00077dd6) popup_cale_events_window_t2_ParamLimits

0xaeff,	// (0x00077dd6) popup_cale_events_window_t2

0xaf3d,	// (0x00077e14) popup_cale_events_window_t3_ParamLimits

0xaf3d,	// (0x00077e14) popup_cale_events_window_t3

0xaf77,	// (0x00077e4e) popup_cale_events_window_t4_ParamLimits

0xaf77,	// (0x00077e4e) popup_cale_events_window_t4

0x0003,

0xf358,	// (0x0007c22f) popup_cale_events_window_t_ParamLimits

0xf358,	// (0x0007c22f) popup_cale_events_window_t

0x24c3,	// (0x0006f39a) call_type_pane

0x24d3,	// (0x0006f3aa) popup_call_status_window_g1

0x24e7,	// (0x0006f3be) popup_call_status_window_g2

0x24fb,	// (0x0006f3d2) popup_call_status_window_g3

0x0002,

0xf361,	// (0x0007c238) popup_call_status_window_g

0xafad,	// (0x00077e84) call_type_pane_g1

0xafb6,	// (0x00077e8d) call_type_pane_g2

0x0001,

0xf368,	// (0x0007c23f) call_type_pane_g

0x9a11,	// (0x000768e8) bg_popup_sub_pane_cp02

0xafbf,	// (0x00077e96) listscroll_popup_wml_pane

0xafc7,	// (0x00077e9e) list_wml_pane

0xafd1,	// (0x00077ea8) scroll_pane_cp013

0xafdc,	// (0x00077eb3) list_single_graphic_popup_wml_pane_ParamLimits

0xafdc,	// (0x00077eb3) list_single_graphic_popup_wml_pane

0xa7a0,	// (0x00077677) list_single_graphic_popup_wml_pane_g1

0xaff0,	// (0x00077ec7) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf36d,	// (0x0007c244) list_single_graphic_popup_wml_pane_g

0xaff8,	// (0x00077ecf) list_single_graphic_popup_wml_pane_t1

0xb00e,	// (0x00077ee5) aid_call_pane

0x9c64,	// (0x00076b3b) popup_clock_analogue_window_g1

0x9c64,	// (0x00076b3b) popup_clock_analogue_window_g2

0x9de9,	// (0x00076cc0) popup_clock_analogue_window_g3

0x9de9,	// (0x00076cc0) popup_clock_analogue_window_g4

0xa7a0,	// (0x00077677) popup_clock_analogue_window_g5

0x0004,

0xf372,	// (0x0007c249) popup_clock_analogue_window_g

0x9df1,	// (0x00076cc8) popup_clock_analogue_window_t1

0x9dff,	// (0x00076cd6) clock_digital_number_pane_ParamLimits

0x9dff,	// (0x00076cd6) clock_digital_number_pane

0x9e0b,	// (0x00076ce2) clock_digital_number_pane_cp02_ParamLimits

0x9e0b,	// (0x00076ce2) clock_digital_number_pane_cp02

0x9e17,	// (0x00076cee) clock_digital_number_pane_cp03_ParamLimits

0x9e17,	// (0x00076cee) clock_digital_number_pane_cp03

0x9e23,	// (0x00076cfa) clock_digital_number_pane_cp04_ParamLimits

0x9e23,	// (0x00076cfa) clock_digital_number_pane_cp04

0x9e2f,	// (0x00076d06) clock_digital_separator_pane_ParamLimits

0x9e2f,	// (0x00076d06) clock_digital_separator_pane

0x9e3b,	// (0x00076d12) popup_clock_digital_window_t1

0xa7a0,	// (0x00077677) clock_digital_number_pane_g1

0xa7a0,	// (0x00077677) clock_digital_number_pane_g2

0x0001,

0xf2e0,	// (0x0007c1b7) clock_digital_number_pane_g

0xa7a0,	// (0x00077677) clock_digital_separator_pane_g1

0xa7a0,	// (0x00077677) clock_digital_separator_pane_g2

0x0001,

0xf2e0,	// (0x0007c1b7) clock_digital_separator_pane_g

0x9a11,	// (0x000768e8) bg_popup_window_pane_cp04

0xb016,	// (0x00077eed) heading_pane_cp03

0xb01e,	// (0x00077ef5) listscroll_popup_gms_pane

0xb026,	// (0x00077efd) grid_large_graphic_popup_pane

0xb030,	// (0x00077f07) listscroll_popup_gms_pane_g1

0xb038,	// (0x00077f0f) listscroll_popup_gms_pane_g2

0x0001,

0xf37d,	// (0x0007c254) listscroll_popup_gms_pane_g

0xaace,	// (0x000779a5) scroll_pane_cp014

0x250b,	// (0x0006f3e2) cell_large_graphic_popup_pane_ParamLimits

0x250b,	// (0x0006f3e2) cell_large_graphic_popup_pane

0x2523,	// (0x0006f3fa) cell_large_graphic_popup_pane_g1_ParamLimits

0x2523,	// (0x0006f3fa) cell_large_graphic_popup_pane_g1

0xb040,	// (0x00077f17) cell_large_graphic_popup_pane_g2_ParamLimits

0xb040,	// (0x00077f17) cell_large_graphic_popup_pane_g2

0xb04c,	// (0x00077f23) cell_large_graphic_popup_pane_g3_ParamLimits

0xb04c,	// (0x00077f23) cell_large_graphic_popup_pane_g3

0xb059,	// (0x00077f30) cell_large_graphic_popup_pane_g4_ParamLimits

0xb059,	// (0x00077f30) cell_large_graphic_popup_pane_g4

0x0003,

0xf382,	// (0x0007c259) cell_large_graphic_popup_pane_g_ParamLimits

0xf382,	// (0x0007c259) cell_large_graphic_popup_pane_g

0xb069,	// (0x00077f40) grid_highlight_pane_cp010

0xa7a0,	// (0x00077677) bg_popup_call_pane_g1

0xb073,	// (0x00077f4a) list_single_graphic_popup_conf_pane_ParamLimits

0xb073,	// (0x00077f4a) list_single_graphic_popup_conf_pane

0xb085,	// (0x00077f5c) list_highlight_pane_cp01

0xb08e,	// (0x00077f65) list_single_graphic_popup_conf_pane_g1

0xb096,	// (0x00077f6d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf38b,	// (0x0007c262) list_single_graphic_popup_conf_pane_g

0xb09e,	// (0x00077f75) list_single_graphic_popup_conf_pane_t1

0xb0ac,	// (0x00077f83) linegrid_cams_pane_g1

0x252f,	// (0x0006f406) linegrid_cams_pane_g2

0xa905,	// (0x000777dc) linegrid_cams_pane_g3

0xb0b5,	// (0x00077f8c) linegrid_cams_pane_g4

0x2538,	// (0x0006f40f) linegrid_cams_pane_g5

0x2541,	// (0x0006f418) linegrid_cams_pane_g6

0xa90e,	// (0x000777e5) linegrid_cams_pane_g7

0x0006,

0xf390,	// (0x0007c267) linegrid_cams_pane_g

0xb0be,	// (0x00077f95) popup_clock_analogue_window

0xb0be,	// (0x00077f95) popup_clock_digital_window

0x9a11,	// (0x000768e8) popup_phob_thumbnail_window

0xa7a0,	// (0x00077677) call_video_uplink_pane_g1

0xb0c7,	// (0x00077f9e) call_video_uplink_pane_g2

0x0001,

0xf39f,	// (0x0007c276) call_video_uplink_pane_g

0xb0cf,	// (0x00077fa6) video_uplink_pane

0xb0d7,	// (0x00077fae) mce_image_pane_g1

0x254c,	// (0x0006f423) mce_image_pane_g2

0x2556,	// (0x0006f42d) mce_image_pane_g3

0x2560,	// (0x0006f437) mce_image_pane_g4

0x2568,	// (0x0006f43f) mce_image_pane_g5

0x0004,

0xf3a4,	// (0x0007c27b) mce_image_pane_g

0xb0e1,	// (0x00077fb8) control_top_pane_stacon_cp01_ParamLimits

0xb0e1,	// (0x00077fb8) control_top_pane_stacon_cp01

0xb0f5,	// (0x00077fcc) uni_indicator_pane_stacon_cp01_ParamLimits

0xb0f5,	// (0x00077fcc) uni_indicator_pane_stacon_cp01

0xb106,	// (0x00077fdd) bg_popup_sub_pane_cp03

0x2570,	// (0x0006f447) chi_dic_find_pane

0x2578,	// (0x0006f44f) listscroll_chi_dic_pane

0x2581,	// (0x0006f458) main_pane_chidic_g1

0x2594,	// (0x0006f46b) chi_dic_find_pane_t1

0xb110,	// (0x00077fe7) find_chidic_pane

0xb119,	// (0x00077ff0) chi_dic_list_pane_ParamLimits

0xb119,	// (0x00077ff0) chi_dic_list_pane

0xb12a,	// (0x00078001) scroll_pane_cp020

0x25a2,	// (0x0006f479) find_chidic_pane_t1

0x9a11,	// (0x000768e8) input_focus_pane_cp06

0x01d7,	// (0x0006d0ae) list_chi_dic_pane_ParamLimits

0x01d7,	// (0x0006d0ae) list_chi_dic_pane

0x25b1,	// (0x0006f488) list_chi_dic_pane_t1_ParamLimits

0x25b1,	// (0x0006f488) list_chi_dic_pane_t1

0x9a11,	// (0x000768e8) list_highlight_pane_cp020

0xb132,	// (0x00078009) bg_cale_heading_pane_g1

0x25c4,	// (0x0006f49b) bg_cale_heading_pane_g2

0x25cc,	// (0x0006f4a3) bg_cale_heading_pane_g3

0x25d4,	// (0x0006f4ab) bg_cale_heading_pane_g4

0x25de,	// (0x0006f4b5) bg_cale_heading_pane_g5

0x25e8,	// (0x0006f4bf) bg_cale_heading_pane_g6

0x25f0,	// (0x0006f4c7) bg_cale_heading_pane_g7

0x25f8,	// (0x0006f4cf) bg_cale_heading_pane_g8

0x2602,	// (0x0006f4d9) bg_cale_heading_pane_g9

0x0008,

0xf3af,	// (0x0007c286) bg_cale_heading_pane_g

0xb132,	// (0x00078009) bg_cale_side_pane_g1

0x260c,	// (0x0006f4e3) bg_cale_side_pane_g2

0x2616,	// (0x0006f4ed) bg_cale_side_pane_g3

0x2620,	// (0x0006f4f7) bg_cale_side_pane_g4

0x262a,	// (0x0006f501) bg_cale_side_pane_g5

0x2634,	// (0x0006f50b) bg_cale_side_pane_g6

0x263e,	// (0x0006f515) bg_cale_side_pane_g7

0x2648,	// (0x0006f51f) bg_cale_side_pane_g8

0x2650,	// (0x0006f527) bg_cale_side_pane_g9

0x0008,

0xf3c2,	// (0x0007c299) bg_cale_side_pane_g

0x2658,	// (0x0006f52f) popup_call_status_window_ParamLimits

0x2658,	// (0x0006f52f) popup_call_status_window

0xb13a,	// (0x00078011) stacon_top_pane

0xb142,	// (0x00078019) status_pane_ParamLimits

0xb142,	// (0x00078019) status_pane

0xb157,	// (0x0007802e) status_small_pane

0xb15f,	// (0x00078036) control_pane

0x9a11,	// (0x000768e8) stacon_bottom_pane

0xb167,	// (0x0007803e) list_single_mce_smart_pane_t1_ParamLimits

0xb167,	// (0x0007803e) list_single_mce_smart_pane_t1

0xb17a,	// (0x00078051) list_single_mce_smart_pane_t2_ParamLimits

0xb17a,	// (0x00078051) list_single_mce_smart_pane_t2

0x0001,

0xf3d5,	// (0x0007c2ac) list_single_mce_smart_pane_t_ParamLimits

0xf3d5,	// (0x0007c2ac) list_single_mce_smart_pane_t

0x26a5,	// (0x0006f57c) compass_pane

0x26b0,	// (0x0006f587) main_location2_pane_t1

0x26c4,	// (0x0006f59b) main_location2_pane_t2

0x26da,	// (0x0006f5b1) main_location2_pane_t3

0x0003,

0xf3da,	// (0x0007c2b1) main_location2_pane_t

0xb199,	// (0x00078070) compass_pane_g1_ParamLimits

0xb199,	// (0x00078070) compass_pane_g1

0x2724,	// (0x0006f5fb) compass_pane_t1

0x2733,	// (0x0006f60a) compass_pane_t2

0x0005,

0xf3e3,	// (0x0007c2ba) compass_pane_t

0x277a,	// (0x0006f651) text_secondary_cp61

0xb1ad,	// (0x00078084) navi_pane_cams_g5

0xb1d0,	// (0x000780a7) navi_pane_im_t1

0xb1de,	// (0x000780b5) navi_pane_mp_g1_ParamLimits

0xb1de,	// (0x000780b5) navi_pane_mp_g1

0xb1f2,	// (0x000780c9) navi_pane_mp_g2_ParamLimits

0xb1f2,	// (0x000780c9) navi_pane_mp_g2

0xb1fe,	// (0x000780d5) navi_pane_mp_g3_ParamLimits

0xb1fe,	// (0x000780d5) navi_pane_mp_g3

0x0002,

0xf3f7,	// (0x0007c2ce) navi_pane_mp_g_ParamLimits

0xf3f7,	// (0x0007c2ce) navi_pane_mp_g

0xb20a,	// (0x000780e1) navi_pane_mp_t1

0xb218,	// (0x000780ef) navi_pane_mp_t2

0x0002,

0xf3fe,	// (0x0007c2d5) navi_pane_mp_t

0xb254,	// (0x0007812b) navi_pane_vt_g1

0xb20a,	// (0x000780e1) navi_pane_vt_t1

0xb25c,	// (0x00078133) navi_slider_pane

0xb264,	// (0x0007813b) zooming_pane

0xb26c,	// (0x00078143) navi_slider_pane_g1

0x9e58,	// (0x00076d2f) navi_slider_pane_g2

0x0006,

0xf405,	// (0x0007c2dc) navi_slider_pane_g

0xb290,	// (0x00078167) aid_levels_zoom

0xb298,	// (0x0007816f) zooming_pane_g1

0xb2a0,	// (0x00078177) zooming_pane_g2

0xb2a0,	// (0x00078177) zooming_pane_g3

0x0002,

0xf414,	// (0x0007c2eb) zooming_pane_g

0xb2a8,	// (0x0007817f) level_10_zoom

0xb2b1,	// (0x00078188) level_11_zoom

0xb2ba,	// (0x00078191) level_1_zoom

0xb2c3,	// (0x0007819a) level_2_zoom

0xb2cc,	// (0x000781a3) level_3_zoom

0xb2d5,	// (0x000781ac) level_4_zoom

0xb2de,	// (0x000781b5) level_5_zoom

0xb2e7,	// (0x000781be) level_6_zoom

0xb2f0,	// (0x000781c7) level_7_zoom

0xb2f9,	// (0x000781d0) level_8_zoom

0xb302,	// (0x000781d9) level_9_zoom

0xb313,	// (0x000781ea) popup_phob_thumbnail_window_g1

0xb31b,	// (0x000781f2) popup_phob_thumbnail_window_g2

0x0001,

0xf41b,	// (0x0007c2f2) popup_phob_thumbnail_window_g

0xc7d3,	// (0x000796aa) level_1_location

0xc7db,	// (0x000796b2) level_2_location

0xc7e3,	// (0x000796ba) level_3_location

0xc7eb,	// (0x000796c2) level_4_location

0xb264,	// (0x0007813b) level_5_location

0x28c3,	// (0x0006f79a) mce_icon_pane_g1

0x28cd,	// (0x0006f7a4) mce_icon_pane_g2

0x0001,

0xf420,	// (0x0007c2f7) mce_icon_pane_g

0x28d5,	// (0x0006f7ac) main_mup_pane_g1_ParamLimits

0x28d5,	// (0x0006f7ac) main_mup_pane_g1

0x28eb,	// (0x0006f7c2) main_mup_pane_g2_ParamLimits

0x28eb,	// (0x0006f7c2) main_mup_pane_g2

0x2903,	// (0x0006f7da) main_mup_pane_g3_ParamLimits

0x2903,	// (0x0006f7da) main_mup_pane_g3

0x291b,	// (0x0006f7f2) main_mup_pane_g4_ParamLimits

0x291b,	// (0x0006f7f2) main_mup_pane_g4

0x2933,	// (0x0006f80a) main_mup_pane_g5_ParamLimits

0x2933,	// (0x0006f80a) main_mup_pane_g5

0x294f,	// (0x0006f826) main_mup_pane_g6_ParamLimits

0x294f,	// (0x0006f826) main_mup_pane_g6

0x2969,	// (0x0006f840) main_mup_pane_g7_ParamLimits

0x2969,	// (0x0006f840) main_mup_pane_g7

0x2987,	// (0x0006f85e) main_mup_pane_g8_ParamLimits

0x2987,	// (0x0006f85e) main_mup_pane_g8

0x29a5,	// (0x0006f87c) main_mup_pane_g9_ParamLimits

0x29a5,	// (0x0006f87c) main_mup_pane_g9

0x29c1,	// (0x0006f898) main_mup_pane_g10_ParamLimits

0x29c1,	// (0x0006f898) main_mup_pane_g10

0x29df,	// (0x0006f8b6) main_mup_pane_g11_ParamLimits

0x29df,	// (0x0006f8b6) main_mup_pane_g11

0x29f9,	// (0x0006f8d0) main_mup_pane_g12_ParamLimits

0x29f9,	// (0x0006f8d0) main_mup_pane_g12

0x2a0f,	// (0x0006f8e6) main_mup_pane_g13_ParamLimits

0x2a0f,	// (0x0006f8e6) main_mup_pane_g13

0x000c,

0xf425,	// (0x0007c2fc) main_mup_pane_g_ParamLimits

0xf425,	// (0x0007c2fc) main_mup_pane_g

0x2a23,	// (0x0006f8fa) main_mup_pane_t1_ParamLimits

0x2a23,	// (0x0006f8fa) main_mup_pane_t1

0x2a3f,	// (0x0006f916) main_mup_pane_t2_ParamLimits

0x2a3f,	// (0x0006f916) main_mup_pane_t2

0x2a57,	// (0x0006f92e) main_mup_pane_t3_ParamLimits

0x2a57,	// (0x0006f92e) main_mup_pane_t3

0x2a6f,	// (0x0006f946) main_mup_pane_t4_ParamLimits

0x2a6f,	// (0x0006f946) main_mup_pane_t4

0x2a8d,	// (0x0006f964) main_mup_pane_t5_ParamLimits

0x2a8d,	// (0x0006f964) main_mup_pane_t5

0x2aa2,	// (0x0006f979) main_mup_pane_t6_ParamLimits

0x2aa2,	// (0x0006f979) main_mup_pane_t6

0x0005,

0xf440,	// (0x0007c317) main_mup_pane_t_ParamLimits

0xf440,	// (0x0007c317) main_mup_pane_t

0x2ab4,	// (0x0006f98b) mup_progress_pane_ParamLimits

0x2ab4,	// (0x0006f98b) mup_progress_pane

0x2ac0,	// (0x0006f997) mup_visualizer_pane_ParamLimits

0x2ac0,	// (0x0006f997) mup_visualizer_pane

0x2af4,	// (0x0006f9cb) mup_volume_pane_ParamLimits

0x2af4,	// (0x0006f9cb) mup_volume_pane

0xb323,	// (0x000781fa) mup_visualizer_pane_g1_ParamLimits

0xb323,	// (0x000781fa) mup_visualizer_pane_g1

0xb323,	// (0x000781fa) mup_visualizer_pane_g2_ParamLimits

0xb323,	// (0x000781fa) mup_visualizer_pane_g2

0xb199,	// (0x00078070) mup_visualizer_pane_g3_ParamLimits

0xb199,	// (0x00078070) mup_visualizer_pane_g3

0x0002,

0xf44d,	// (0x0007c324) mup_visualizer_pane_g_ParamLimits

0xf44d,	// (0x0007c324) mup_visualizer_pane_g

0xa7a0,	// (0x00077677) mup_volume_pane_g1

0xb339,	// (0x00078210) mup_volume_pane_g2

0x0001,

0xf454,	// (0x0007c32b) mup_volume_pane_g

0xa7a0,	// (0x00077677) mup_progress_pane_g1

0xb342,	// (0x00078219) mup_progress_pane_g2

0xb34b,	// (0x00078222) mup_progress_pane_g3

0x0002,

0xf459,	// (0x0007c330) mup_progress_pane_g

0x9a11,	// (0x000768e8) bg_popup_window_pane_cp05

0xb354,	// (0x0007822b) heading_pane_cp02_ParamLimits

0xb354,	// (0x0007822b) heading_pane_cp02

0xb370,	// (0x00078247) list_popup_blid_pane

0xb378,	// (0x0007824f) list_blid_sat_info_pane_ParamLimits

0xb378,	// (0x0007824f) list_blid_sat_info_pane

0xb38b,	// (0x00078262) list_blid_sat_info_pane_g1

0xb393,	// (0x0007826a) list_blid_sat_info_pane_t1

0x2c1e,	// (0x0006faf5) mup_equalizer_pane_ParamLimits

0x2c1e,	// (0x0006faf5) mup_equalizer_pane

0x2c3f,	// (0x0006fb16) mup_equalizer_pane_cp1_ParamLimits

0x2c3f,	// (0x0006fb16) mup_equalizer_pane_cp1

0x2c60,	// (0x0006fb37) mup_equalizer_pane_cp2_ParamLimits

0x2c60,	// (0x0006fb37) mup_equalizer_pane_cp2

0x2c85,	// (0x0006fb5c) mup_equalizer_pane_cp3_ParamLimits

0x2c85,	// (0x0006fb5c) mup_equalizer_pane_cp3

0x2cae,	// (0x0006fb85) mup_equalizer_pane_cp4_ParamLimits

0x2cae,	// (0x0006fb85) mup_equalizer_pane_cp4

0x2cd7,	// (0x0006fbae) mup_equalizer_pane_cp5

0x2cef,	// (0x0006fbc6) mup_equalizer_pane_cp6

0x2d07,	// (0x0006fbde) mup_equalizer_pane_cp7

0xc6ed,	// (0x000795c4) bg_popup_call_poc_act_pane_g9

0xc6f5,	// (0x000795cc) bg_popup_call_poc_act_pane_g10

0xc6fd,	// (0x000795d4) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c6c,	// (0x00076b43) mup_scale_pane

0xa7a0,	// (0x00077677) mup_scale_pane_g1

0xb3a1,	// (0x00078278) mup_scale_pane_g2

0x0006,

0xf475,	// (0x0007c34c) mup_scale_pane_g

0xb3c5,	// (0x0007829c) msg_data_pane

0xb3cd,	// (0x000782a4) scroll_pane_cp017

0x2d31,	// (0x0006fc08) bg_list_pane_cp04_ParamLimits

0x2d31,	// (0x0006fc08) bg_list_pane_cp04

0xb3d5,	// (0x000782ac) msg_data_pane_g1

0x2d59,	// (0x0006fc30) msg_data_pane_g2

0x2d63,	// (0x0006fc3a) msg_data_pane_g3

0x2d6d,	// (0x0006fc44) msg_data_pane_g4

0x2d75,	// (0x0006fc4c) msg_data_pane_g5

0x2d7d,	// (0x0006fc54) msg_data_pane_g6

0x2d85,	// (0x0006fc5c) msg_data_pane_g7

0x0006,

0xf484,	// (0x0007c35b) msg_data_pane_g

0x2d8d,	// (0x0006fc64) msg_text_pane_ParamLimits

0x2d8d,	// (0x0006fc64) msg_text_pane

0x2db5,	// (0x0006fc8c) qrid_highlight_pane_cp011_ParamLimits

0x2db5,	// (0x0006fc8c) qrid_highlight_pane_cp011

0x9a11,	// (0x000768e8) msg_body_pane

0x9a11,	// (0x000768e8) msg_header_pane

0xb3dd,	// (0x000782b4) input_focus_pane_cp07

0xb3f2,	// (0x000782c9) msg_header_pane_t1_ParamLimits

0xb3f2,	// (0x000782c9) msg_header_pane_t1

0x9e6a,	// (0x00076d41) msg_header_pane_t2_ParamLimits

0x9e6a,	// (0x00076d41) msg_header_pane_t2

0x0001,

0xf498,	// (0x0007c36f) msg_header_pane_t_ParamLimits

0xf498,	// (0x0007c36f) msg_header_pane_t

0xb404,	// (0x000782db) msg_body_pane_g1

0x2de4,	// (0x0006fcbb) msg_body_pane_t1_ParamLimits

0x2de4,	// (0x0006fcbb) msg_body_pane_t1

0x9e7c,	// (0x00076d53) msg_body_pane_t2_ParamLimits

0x9e7c,	// (0x00076d53) msg_body_pane_t2

0x9e8e,	// (0x00076d65) msg_body_pane_t3_ParamLimits

0x9e8e,	// (0x00076d65) msg_body_pane_t3

0x0002,

0xf49d,	// (0x0007c374) msg_body_pane_t_ParamLimits

0xf49d,	// (0x0007c374) msg_body_pane_t

0x2e4f,	// (0x0006fd26) main_viewer_pane_g1_ParamLimits

0x2e4f,	// (0x0006fd26) main_viewer_pane_g1

0x2e5d,	// (0x0006fd34) main_viewer_pane_g2_ParamLimits

0x2e5d,	// (0x0006fd34) main_viewer_pane_g2

0x2e6b,	// (0x0006fd42) main_viewer_pane_g3_ParamLimits

0x2e6b,	// (0x0006fd42) main_viewer_pane_g3

0x2e7a,	// (0x0006fd51) main_viewer_pane_g4_ParamLimits

0x2e7a,	// (0x0006fd51) main_viewer_pane_g4

0x9eb8,	// (0x00076d8f) main_viewer_pane_g5_ParamLimits

0x9eb8,	// (0x00076d8f) main_viewer_pane_g5

0x9eb8,	// (0x00076d8f) main_viewer_pane_g7_ParamLimits

0x9eb8,	// (0x00076d8f) main_viewer_pane_g7

0x9eca,	// (0x00076da1) main_viewer_pane_g8_ParamLimits

0x9eca,	// (0x00076da1) main_viewer_pane_g8

0x0007,

0xf4ad,	// (0x0007c384) main_viewer_pane_g_ParamLimits

0xf4ad,	// (0x0007c384) main_viewer_pane_g

0xb40c,	// (0x000782e3) viewer_content_pane_ParamLimits

0xb40c,	// (0x000782e3) viewer_content_pane

0x2eb8,	// (0x0006fd8f) main_postcard_pane_g1_ParamLimits

0x2eb8,	// (0x0006fd8f) main_postcard_pane_g1

0x2ece,	// (0x0006fda5) main_postcard_pane_g2_ParamLimits

0x2ece,	// (0x0006fda5) main_postcard_pane_g2

0x2ee4,	// (0x0006fdbb) main_postcard_pane_g3_ParamLimits

0x2ee4,	// (0x0006fdbb) main_postcard_pane_g3

0x0005,

0xf4be,	// (0x0007c395) main_postcard_pane_g_ParamLimits

0xf4be,	// (0x0007c395) main_postcard_pane_g

0x2efb,	// (0x0006fdd2) main_postcard_pane_g4

0xc916,	// (0x000797ed) smil_status_volume_pane_g2

0x2f3e,	// (0x0006fe15) postcard_pane_ParamLimits

0x2f3e,	// (0x0006fe15) postcard_pane

0xb41a,	// (0x000782f1) postcard_pane_g1_ParamLimits

0xb41a,	// (0x000782f1) postcard_pane_g1

0x2f8e,	// (0x0006fe65) postcard_pane_g2_ParamLimits

0x2f8e,	// (0x0006fe65) postcard_pane_g2

0x2f9a,	// (0x0006fe71) postcard_pane_g3_ParamLimits

0x2f9a,	// (0x0006fe71) postcard_pane_g3

0xb428,	// (0x000782ff) postcard_pane_g4_ParamLimits

0xb428,	// (0x000782ff) postcard_pane_g4

0x2fa6,	// (0x0006fe7d) postcard_pane_g5_ParamLimits

0x2fa6,	// (0x0006fe7d) postcard_pane_g5

0x2fbb,	// (0x0006fe92) postcard_pane_g6_ParamLimits

0x2fbb,	// (0x0006fe92) postcard_pane_g6

0xb41a,	// (0x000782f1) postcard_pane_g7_ParamLimits

0xb41a,	// (0x000782f1) postcard_pane_g7

0x0006,

0xf4cb,	// (0x0007c3a2) postcard_pane_g_ParamLimits

0xf4cb,	// (0x0007c3a2) postcard_pane_g

0x2fd3,	// (0x0006feaa) main_mp2_pane_g1_ParamLimits

0x2fd3,	// (0x0006feaa) main_mp2_pane_g1

0x2fe1,	// (0x0006feb8) main_mp2_pane_g2_ParamLimits

0x2fe1,	// (0x0006feb8) main_mp2_pane_g2

0x2fed,	// (0x0006fec4) main_mp2_pane_g3_ParamLimits

0x2fed,	// (0x0006fec4) main_mp2_pane_g3

0x0002,

0xf4da,	// (0x0007c3b1) main_mp2_pane_g_ParamLimits

0xf4da,	// (0x0007c3b1) main_mp2_pane_g

0x2ff9,	// (0x0006fed0) main_mp2_pane_t1_ParamLimits

0x2ff9,	// (0x0006fed0) main_mp2_pane_t1

0x3010,	// (0x0006fee7) main_mp2_pane_t2_ParamLimits

0x3010,	// (0x0006fee7) main_mp2_pane_t2

0x3022,	// (0x0006fef9) main_mp2_pane_t3_ParamLimits

0x3022,	// (0x0006fef9) main_mp2_pane_t3

0x0002,

0xf4e1,	// (0x0007c3b8) main_mp2_pane_t_ParamLimits

0xf4e1,	// (0x0007c3b8) main_mp2_pane_t

0xb436,	// (0x0007830d) pec_content_pane_ParamLimits

0xb436,	// (0x0007830d) pec_content_pane

0xaace,	// (0x000779a5) scroll_pane_cp015

0xb448,	// (0x0007831f) pec_attribute_pane_ParamLimits

0xb448,	// (0x0007831f) pec_attribute_pane

0x3034,	// (0x0006ff0b) pec_content_pane_g1_ParamLimits

0x3034,	// (0x0006ff0b) pec_content_pane_g1

0xb458,	// (0x0007832f) pec_content_pane_t1_ParamLimits

0xb458,	// (0x0007832f) pec_content_pane_t1

0xb46a,	// (0x00078341) pec_content_pane_t2_ParamLimits

0xb46a,	// (0x00078341) pec_content_pane_t2

0x0001,

0xf4e8,	// (0x0007c3bf) pec_content_pane_t_ParamLimits

0xf4e8,	// (0x0007c3bf) pec_content_pane_t

0x3040,	// (0x0006ff17) list_single_graphic_pane_cp01_ParamLimits

0x3040,	// (0x0006ff17) list_single_graphic_pane_cp01

0x9c6c,	// (0x00076b43) bg_popup_sub_pane_cp04

0xb47c,	// (0x00078353) popup_mup_playback_window_g1

0xb488,	// (0x0007835f) popup_mup_playback_window_t1

0xb49d,	// (0x00078374) popup_mup_playback_window_t2

0x0001,

0xf4ed,	// (0x0007c3c4) popup_mup_playback_window_t

0xb4d4,	// (0x000783ab) main_image_pane_g1_ParamLimits

0xb4d4,	// (0x000783ab) main_image_pane_g1

0xb517,	// (0x000783ee) scroll_pane_cp018_ParamLimits

0xb517,	// (0x000783ee) scroll_pane_cp018

0xb52f,	// (0x00078406) scroll_pane_cp016_ParamLimits

0xb52f,	// (0x00078406) scroll_pane_cp016

0x310f,	// (0x0006ffe6) smil2_image_pane_ParamLimits

0x310f,	// (0x0006ffe6) smil2_image_pane

0x3145,	// (0x0007001c) smil2_root_pane_ParamLimits

0x3145,	// (0x0007001c) smil2_root_pane

0x317d,	// (0x00070054) smil2_text_pane_ParamLimits

0x317d,	// (0x00070054) smil2_text_pane

0x9a11,	// (0x000768e8) bg_list_pane_cp06

0xb56b,	// (0x00078442) grid_radio_pane

0x9a11,	// (0x000768e8) bg_popup_window_pane_cp06

0xb575,	// (0x0007844c) main_fmradio_pane_t1

0xb016,	// (0x00077eed) heading_pane_cp04

0xb583,	// (0x0007845a) main_fmradio_pane_t2

0xc705,	// (0x000795dc) popup_cale_lunar_info_window_g1

0xb591,	// (0x00078468) main_fmradio_pane_t3

0xc70d,	// (0x000795e4) popup_cale_lunar_info_window_g2

0xb5a1,	// (0x00078478) main_fmradio_pane_t4

0x0001,

0xb5af,	// (0x00078486) main_fmradio_pane_t5

0x0004,

0xf5c8,	// (0x0007c49f) popup_cale_lunar_info_window_g

0xf502,	// (0x0007c3d9) main_fmradio_pane_t

0xb5bd,	// (0x00078494) wait_bar_pane_cp03

0xad11,	// (0x00077be8) cell_fmradio_pane_ParamLimits

0xad11,	// (0x00077be8) cell_fmradio_pane

0xb41a,	// (0x000782f1) cell_fmradio_pane_g1_ParamLimits

0xb41a,	// (0x000782f1) cell_fmradio_pane_g1

0x9a11,	// (0x000768e8) grid_highlight_pane_cp011

0xb5c5,	// (0x0007849c) poc_content_pane_ParamLimits

0xb5c5,	// (0x0007849c) poc_content_pane

0xb5d7,	// (0x000784ae) scroll_pane_cp019

0x320d,	// (0x000700e4) popup_call_poc_act_window_ParamLimits

0x320d,	// (0x000700e4) popup_call_poc_act_window

0x3231,	// (0x00070108) popup_call_poc_inact_window_ParamLimits

0x3231,	// (0x00070108) popup_call_poc_inact_window

0xf59f,	// (0x0007c476) bg_popup_call_poc_act_pane_g

0xc67d,	// (0x00079554) bg_popup_call_poc_inact_pane_g1

0xc685,	// (0x0007955c) bg_popup_call_poc_inact_pane_g2

0xb5df,	// (0x000784b6) popup_call_poc_act_window_g2

0xc68d,	// (0x00079564) bg_popup_call_poc_inact_pane_g3

0xc695,	// (0x0007956c) bg_popup_call_poc_inact_pane_g4

0xc69d,	// (0x00079574) bg_popup_call_poc_inact_pane_g5

0xb5e7,	// (0x000784be) popup_call_poc_act_window_t1_ParamLimits

0xb5e7,	// (0x000784be) popup_call_poc_act_window_t1

0xb60f,	// (0x000784e6) popup_call_poc_act_window_t2_ParamLimits

0xb60f,	// (0x000784e6) popup_call_poc_act_window_t2

0xb637,	// (0x0007850e) popup_call_poc_act_window_t3_ParamLimits

0xb637,	// (0x0007850e) popup_call_poc_act_window_t3

0xb65f,	// (0x00078536) popup_call_poc_act_window_t4_ParamLimits

0xb65f,	// (0x00078536) popup_call_poc_act_window_t4

0x0003,

0xf50d,	// (0x0007c3e4) popup_call_poc_act_window_t_ParamLimits

0xf50d,	// (0x0007c3e4) popup_call_poc_act_window_t

0xc6a5,	// (0x0007957c) bg_popup_call_poc_inact_pane_g6

0xc6ad,	// (0x00079584) bg_popup_call_poc_inact_pane_g7

0xc6b5,	// (0x0007958c) bg_popup_call_poc_inact_pane_g8

0xb671,	// (0x00078548) popup_call_poc_inact_window_g2

0xc6bd,	// (0x00079594) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf58c,	// (0x0007c463) bg_popup_call_poc_inact_pane_g

0xb679,	// (0x00078550) popup_call_poc_inact_window_t1_ParamLimits

0xb679,	// (0x00078550) popup_call_poc_inact_window_t1

0xb68e,	// (0x00078565) popup_call_poc_inact_window_t2_ParamLimits

0xb68e,	// (0x00078565) popup_call_poc_inact_window_t2

0xb6a3,	// (0x0007857a) popup_call_poc_inact_window_t3_ParamLimits

0xb6a3,	// (0x0007857a) popup_call_poc_inact_window_t3

0x0002,

0xf516,	// (0x0007c3ed) popup_call_poc_inact_window_t_ParamLimits

0xf516,	// (0x0007c3ed) popup_call_poc_inact_window_t

0xc889,	// (0x00079760) context_pane_ParamLimits

0x3ad9,	// (0x000709b0) signal_pane_ParamLimits

0xb264,	// (0x0007813b) main_call2_pane

0xc877,	// (0x0007974e) popup_phob_thumbnail2_window_ParamLimits

0xc877,	// (0x0007974e) popup_phob_thumbnail2_window

0x9ea0,	// (0x00076d77) aid_hotspot_pointer_arrow_pane

0x9ea8,	// (0x00076d7f) aid_hotspot_pointer_hand_pane

0x3599,	// (0x00070470) phob_pre_status_pane_g5

0x0d8b,	// (0x0006dc62) cams_zoom_pane_ParamLimits

0x0d9a,	// (0x0006dc71) image_vga_pane_ParamLimits

0x0db4,	// (0x0006dc8b) main_camera_pane_g1_ParamLimits

0x0dc6,	// (0x0006dc9d) main_camera_pane_g2_ParamLimits

0x0dd6,	// (0x0006dcad) main_camera_pane_g3_ParamLimits

0x0dea,	// (0x0006dcc1) main_camera_pane_g4_ParamLimits

0x0dfe,	// (0x0006dcd5) main_camera_pane_g5_ParamLimits

0x0e12,	// (0x0006dce9) main_camera_pane_g6_ParamLimits

0x0e26,	// (0x0006dcfd) main_camera_pane_g7_ParamLimits

0xf215,	// (0x0007c0ec) main_camera_pane_g_ParamLimits

0x0e3a,	// (0x0006dd11) main_camera_pane_t1_ParamLimits

0x0e50,	// (0x0006dd27) main_camera_pane_t2_ParamLimits

0xf226,	// (0x0007c0fd) main_camera_pane_t_ParamLimits

0x9c6c,	// (0x00076b43) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c6c,	// (0x00076b43) bg_popup_preview_window_pane_cp01

0xb873,	// (0x0007874a) popup_phob_thumbnail2_window_g1_ParamLimits

0xb873,	// (0x0007874a) popup_phob_thumbnail2_window_g1

0x9a11,	// (0x000768e8) call2_cli_visual_pane

0x3265,	// (0x0007013c) popup_call2_audio_conf_window_ParamLimits

0x3265,	// (0x0007013c) popup_call2_audio_conf_window

0x328d,	// (0x00070164) popup_call2_audio_first_window_ParamLimits

0x328d,	// (0x00070164) popup_call2_audio_first_window

0x3323,	// (0x000701fa) popup_call2_audio_in_window_ParamLimits

0x3323,	// (0x000701fa) popup_call2_audio_in_window

0x336f,	// (0x00070246) popup_call2_audio_out_window_ParamLimits

0x336f,	// (0x00070246) popup_call2_audio_out_window

0x33e1,	// (0x000702b8) popup_call2_audio_second_window_ParamLimits

0x33e1,	// (0x000702b8) popup_call2_audio_second_window

0x3447,	// (0x0007031e) popup_call2_audio_wait_window_ParamLimits

0x3447,	// (0x0007031e) popup_call2_audio_wait_window

0x9a11,	// (0x000768e8) bg_popup_call2_act_pane_cp03

0x9c4e,	// (0x00076b25) list_conf_pane_cp

0xb87f,	// (0x00078756) popup_call2_audio_conf_window_t1

0xb88d,	// (0x00078764) list_single_graphic_popup_conf2_pane_ParamLimits

0xb88d,	// (0x00078764) list_single_graphic_popup_conf2_pane

0xb085,	// (0x00077f5c) list_highlight_pane_cp04

0xb8a0,	// (0x00078777) list_single_graphic_popup_conf2_pane_g1

0xb096,	// (0x00077f6d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf51d,	// (0x0007c3f4) list_single_graphic_popup_conf2_pane_g

0xb8aa,	// (0x00078781) list_single_graphic_popup_conf2_pane_t1

0xb8b8,	// (0x0007878f) bg_popup_call2_act_pane_cp01_ParamLimits

0xb8b8,	// (0x0007878f) bg_popup_call2_act_pane_cp01

0xb942,	// (0x00078819) call_type_pane_cp05_ParamLimits

0xb942,	// (0x00078819) call_type_pane_cp05

0xb996,	// (0x0007886d) popup_call2_audio_second_window_g1_ParamLimits

0xb996,	// (0x0007886d) popup_call2_audio_second_window_g1

0xb9ea,	// (0x000788c1) popup_call2_audio_second_window_g2_ParamLimits

0xb9ea,	// (0x000788c1) popup_call2_audio_second_window_g2

0x0002,

0xf522,	// (0x0007c3f9) popup_call2_audio_second_window_g_ParamLimits

0xf522,	// (0x0007c3f9) popup_call2_audio_second_window_g

0xba4f,	// (0x00078926) popup_call2_audio_second_window_t1_ParamLimits

0xba4f,	// (0x00078926) popup_call2_audio_second_window_t1

0xbb0a,	// (0x000789e1) popup_call2_audio_second_window_t2_ParamLimits

0xbb0a,	// (0x000789e1) popup_call2_audio_second_window_t2

0xbb5d,	// (0x00078a34) popup_call2_audio_second_window_t3_ParamLimits

0xbb5d,	// (0x00078a34) popup_call2_audio_second_window_t3

0x0003,

0xf529,	// (0x0007c400) popup_call2_audio_second_window_t_ParamLimits

0xf529,	// (0x0007c400) popup_call2_audio_second_window_t

0x9a11,	// (0x000768e8) bg_popup_call2_in_pane_cp02

0x9a1b,	// (0x000768f2) call_type_pane_cp04

0x9a23,	// (0x000768fa) popup_call2_audio_wait_window_g1

0x9a2b,	// (0x00076902) popup_call2_audio_wait_window_g2

0x0001,

0xf102,	// (0x0007bfd9) popup_call2_audio_wait_window_g

0x9a33,	// (0x0007690a) popup_call2_audio_wait_window_t3

0xbc50,	// (0x00078b27) bg_popup_call2_act_pane_ParamLimits

0xbc50,	// (0x00078b27) bg_popup_call2_act_pane

0xbd10,	// (0x00078be7) call_type_pane_cp03_ParamLimits

0xbd10,	// (0x00078be7) call_type_pane_cp03

0xbd74,	// (0x00078c4b) popup_call2_audio_first_window_g1_ParamLimits

0xbd74,	// (0x00078c4b) popup_call2_audio_first_window_g1

0xbde4,	// (0x00078cbb) popup_call2_audio_first_window_g2_ParamLimits

0xbde4,	// (0x00078cbb) popup_call2_audio_first_window_g2

0xb323,	// (0x000781fa) popup_call2_audio_first_window_g3_ParamLimits

0xb323,	// (0x000781fa) popup_call2_audio_first_window_g3

0x0004,

0xf532,	// (0x0007c409) popup_call2_audio_first_window_g_ParamLimits

0xf532,	// (0x0007c409) popup_call2_audio_first_window_g

0xbec2,	// (0x00078d99) popup_call2_audio_first_window_t1_ParamLimits

0xbec2,	// (0x00078d99) popup_call2_audio_first_window_t1

0xbfc5,	// (0x00078e9c) popup_call2_audio_first_window_t4_ParamLimits

0xbfc5,	// (0x00078e9c) popup_call2_audio_first_window_t4

0xc0a8,	// (0x00078f7f) popup_call2_audio_first_window_t5_ParamLimits

0xc0a8,	// (0x00078f7f) popup_call2_audio_first_window_t5

0x0003,

0xf53d,	// (0x0007c414) popup_call2_audio_first_window_t_ParamLimits

0xf53d,	// (0x0007c414) popup_call2_audio_first_window_t

0x9c64,	// (0x00076b3b) bg_popup_call2_act_pane_g1

0xc717,	// (0x000795ee) popup_cale_lunar_info_window_t1

0xc725,	// (0x000795fc) popup_cale_lunar_info_window_t2

0xc733,	// (0x0007960a) popup_cale_lunar_info_window_t3

0x9a11,	// (0x000768e8) bg_popup_call2_bubble_pane

0xc1a9,	// (0x00079080) bg_popup_call2_in_pane_cp01_ParamLimits

0xc1a9,	// (0x00079080) bg_popup_call2_in_pane_cp01

0x96ed,	// (0x000765c4) call_type_pane_cp02

0xc1f1,	// (0x000790c8) popup_call2_audio_out_window_g1_ParamLimits

0xc1f1,	// (0x000790c8) popup_call2_audio_out_window_g1

0xc21d,	// (0x000790f4) popup_call2_audio_out_window_g2_ParamLimits

0xc21d,	// (0x000790f4) popup_call2_audio_out_window_g2

0xc245,	// (0x0007911c) popup_call2_audio_out_window_g3_ParamLimits

0xc245,	// (0x0007911c) popup_call2_audio_out_window_g3

0x0003,

0xf546,	// (0x0007c41d) popup_call2_audio_out_window_g_ParamLimits

0xf546,	// (0x0007c41d) popup_call2_audio_out_window_g

0xc280,	// (0x00079157) popup_call2_audio_out_window_t1_ParamLimits

0xc280,	// (0x00079157) popup_call2_audio_out_window_t1

0xc2df,	// (0x000791b6) popup_call2_audio_out_window_t2_ParamLimits

0xc2df,	// (0x000791b6) popup_call2_audio_out_window_t2

0xc333,	// (0x0007920a) popup_call2_audio_out_window_t3_ParamLimits

0xc333,	// (0x0007920a) popup_call2_audio_out_window_t3

0xc349,	// (0x00079220) popup_call2_audio_out_window_t4_ParamLimits

0xc349,	// (0x00079220) popup_call2_audio_out_window_t4

0xc35f,	// (0x00079236) popup_call2_audio_out_window_t5_ParamLimits

0xc35f,	// (0x00079236) popup_call2_audio_out_window_t5

0x0005,

0xf54f,	// (0x0007c426) popup_call2_audio_out_window_t_ParamLimits

0xf54f,	// (0x0007c426) popup_call2_audio_out_window_t

0xc3c3,	// (0x0007929a) bg_popup_call2_in_pane_ParamLimits

0xc3c3,	// (0x0007929a) bg_popup_call2_in_pane

0xc41f,	// (0x000792f6) popup_call2_audio_in_window_g1_ParamLimits

0xc41f,	// (0x000792f6) popup_call2_audio_in_window_g1

0xc457,	// (0x0007932e) popup_call2_audio_in_window_g2_ParamLimits

0xc457,	// (0x0007932e) popup_call2_audio_in_window_g2

0xc48f,	// (0x00079366) popup_call2_audio_in_window_g3_ParamLimits

0xc48f,	// (0x00079366) popup_call2_audio_in_window_g3

0x0003,

0xf55c,	// (0x0007c433) popup_call2_audio_in_window_g_ParamLimits

0xf55c,	// (0x0007c433) popup_call2_audio_in_window_g

0xc4e7,	// (0x000793be) popup_call2_audio_in_window_t1_ParamLimits

0xc4e7,	// (0x000793be) popup_call2_audio_in_window_t1

0xc567,	// (0x0007943e) popup_call2_audio_in_window_t2_ParamLimits

0xc567,	// (0x0007943e) popup_call2_audio_in_window_t2

0xc5e7,	// (0x000794be) popup_call2_audio_in_window_t3_ParamLimits

0xc5e7,	// (0x000794be) popup_call2_audio_in_window_t3

0xc601,	// (0x000794d8) popup_call2_audio_in_window_t4_ParamLimits

0xc601,	// (0x000794d8) popup_call2_audio_in_window_t4

0xc613,	// (0x000794ea) popup_call2_audio_in_window_t5_ParamLimits

0xc613,	// (0x000794ea) popup_call2_audio_in_window_t5

0xc628,	// (0x000794ff) popup_call2_audio_in_window_t6_ParamLimits

0xc628,	// (0x000794ff) popup_call2_audio_in_window_t6

0x0005,

0xf565,	// (0x0007c43c) popup_call2_audio_in_window_t_ParamLimits

0xf565,	// (0x0007c43c) popup_call2_audio_in_window_t

0x9c64,	// (0x00076b3b) bg_popup_call2_in_pane_g1

0xc741,	// (0x00079618) popup_cale_lunar_info_window_t4

0x0003,

0xf5cd,	// (0x0007c4a4) popup_cale_lunar_info_window_t

0x9c6c,	// (0x00076b43) bg_popup_call2_rect_pane_ParamLimits

0x9c6c,	// (0x00076b43) bg_popup_call2_rect_pane

0x9a11,	// (0x000768e8) call2_cli_visual_graphic_pane

0x9a11,	// (0x000768e8) call2_cli_visual_text_pane

0x9ee2,	// (0x00076db9) smil_status_volume_pane_g3

0x0002,

0xa7a0,	// (0x00077677) call2_cli_visual_graphic_pane_g1

0xa7a0,	// (0x00077677) call2_cli_visual_graphic_pane_g2

0xa7a0,	// (0x00077677) call2_cli_visual_graphic_pane_g3

0x0002,

0xf572,	// (0x0007c449) call2_cli_visual_graphic_pane_g

0xc63d,	// (0x00079514) bg_popup_call2_rect_pane_g1

0xa83e,	// (0x00077715) bg_popup_call2_rect_pane_g2

0xc645,	// (0x0007951c) bg_popup_call2_rect_pane_g3

0xc64d,	// (0x00079524) bg_popup_call2_rect_pane_g4

0xc655,	// (0x0007952c) bg_popup_call2_rect_pane_g5

0xc65d,	// (0x00079534) bg_popup_call2_rect_pane_g6

0xc665,	// (0x0007953c) bg_popup_call2_rect_pane_g7

0xc66d,	// (0x00079544) bg_popup_call2_rect_pane_g8

0xc675,	// (0x0007954c) bg_popup_call2_rect_pane_g9

0x0008,

0xf579,	// (0x0007c450) bg_popup_call2_rect_pane_g

0xc67d,	// (0x00079554) bg_popup_call2_bubble_pane_g1

0xc685,	// (0x0007955c) bg_popup_call2_bubble_pane_g2

0xc68d,	// (0x00079564) bg_popup_call2_bubble_pane_g3

0xc695,	// (0x0007956c) bg_popup_call2_bubble_pane_g4

0xc69d,	// (0x00079574) bg_popup_call2_bubble_pane_g5

0xc6a5,	// (0x0007957c) bg_popup_call2_bubble_pane_g6

0xc6ad,	// (0x00079584) bg_popup_call2_bubble_pane_g7

0xc6b5,	// (0x0007958c) bg_popup_call2_bubble_pane_g8

0xc6bd,	// (0x00079594) bg_popup_call2_bubble_pane_g9

0x0008,

0xf58c,	// (0x0007c463) bg_popup_call2_bubble_pane_g

0x0581,	// (0x0006d458) aid_cale_week_size_cell_pane

0x0e6a,	// (0x0006dd41) aid_cams_cif_uncrop_pane_ParamLimits

0x0e6a,	// (0x0006dd41) aid_cams_cif_uncrop_pane

0x1023,	// (0x0006defa) aid_cams_size_cell_ParamLimits

0x1023,	// (0x0006defa) aid_cams_size_cell

0x1037,	// (0x0006df0e) grid_cams_pane_ParamLimits

0x1051,	// (0x0006df28) linegrid_cams_pane_ParamLimits

0x1220,	// (0x0006e0f7) call_video_pane_t1

0x123a,	// (0x0006e111) call_video_pane_t2

0x0001,

0xf279,	// (0x0007c150) call_video_pane_t

0x166e,	// (0x0006e545) aid_cale_month_size_cell_pane_ParamLimits

0x166e,	// (0x0006e545) aid_cale_month_size_cell_pane

0xf616,	// (0x0007c4ed) smil_status_volume_pane_g

0x9eef,	// (0x00076dc6) volume_smil_pane_ParamLimits

0x95a9,	// (0x00076480) aid_popup2_width_pane

0x04cd,	// (0x0006d3a4) cell_qdial_pane_g4_ParamLimits

0x04cd,	// (0x0006d3a4) cell_qdial_pane_g4

0x2704,	// (0x0006f5db) aid_blid_cardinal_pane_ParamLimits

0x2710,	// (0x0006f5e7) aid_blid_destination_pane_ParamLimits

0x2710,	// (0x0006f5e7) aid_blid_destination_pane

0x9c6c,	// (0x00076b43) bg_popup_call_poc_act_pane_ParamLimits

0x9c6c,	// (0x00076b43) bg_popup_call_poc_act_pane

0x9c6c,	// (0x00076b43) bg_popup_call_poc_inact_pane_ParamLimits

0x9c6c,	// (0x00076b43) bg_popup_call_poc_inact_pane

0xc6c5,	// (0x0007959c) bg_popup_call_poc_act_pane_g1

0xc6cd,	// (0x000795a4) bg_popup_call_poc_act_pane_g2

0xc6d5,	// (0x000795ac) bg_popup_call_poc_act_pane_g3

0xc695,	// (0x0007956c) bg_popup_call_poc_act_pane_g4

0xc69d,	// (0x00079574) bg_popup_call_poc_act_pane_g5

0xc6dd,	// (0x000795b4) bg_popup_call_poc_act_pane_g6

0xc6ad,	// (0x00079584) bg_popup_call_poc_act_pane_g7

0xc6e5,	// (0x000795bc) bg_popup_call_poc_act_pane_g8

0x9a11,	// (0x000768e8) main_usb_pane

0xc84e,	// (0x00079725) popup_cale_lunar_info_window

0x1503,	// (0x0006e3da) im_reading_pane_t1_ParamLimits

0xaa26,	// (0x000778fd) list_im_pane_ParamLimits

0xaa37,	// (0x0007790e) scroll_pane_cp07_ParamLimits

0x9a11,	// (0x000768e8) grid_highlight_pane_cp012

0x9c6c,	// (0x00076b43) mup_scale_pane_ParamLimits

0xb41a,	// (0x000782f1) main_usb_pane_g1_ParamLimits

0xb41a,	// (0x000782f1) main_usb_pane_g1

0x34a5,	// (0x0007037c) main_usb_pane_g2_ParamLimits

0x34a5,	// (0x0007037c) main_usb_pane_g2

0x0001,

0xf5b6,	// (0x0007c48d) main_usb_pane_g_ParamLimits

0xf5b6,	// (0x0007c48d) main_usb_pane_g

0x34bb,	// (0x00070392) main_usb_pane_t1_ParamLimits

0x34bb,	// (0x00070392) main_usb_pane_t1

0x34cd,	// (0x000703a4) main_usb_pane_t2_ParamLimits

0x34cd,	// (0x000703a4) main_usb_pane_t2

0x34df,	// (0x000703b6) main_usb_pane_t3_ParamLimits

0x34df,	// (0x000703b6) main_usb_pane_t3

0x34f1,	// (0x000703c8) main_usb_pane_t4_ParamLimits

0x34f1,	// (0x000703c8) main_usb_pane_t4

0x3506,	// (0x000703dd) main_usb_pane_t5_ParamLimits

0x3506,	// (0x000703dd) main_usb_pane_t5

0x351b,	// (0x000703f2) main_usb_pane_t6_ParamLimits

0x351b,	// (0x000703f2) main_usb_pane_t6

0x0005,

0xf5bb,	// (0x0007c492) main_usb_pane_t_ParamLimits

0x26a5,	// (0x0006f57c) aid_text_placing

0x26b0,	// (0x0006f587) main_location2_pane_t1_ParamLimits

0x26c4,	// (0x0006f59b) main_location2_pane_t2_ParamLimits

0x26da,	// (0x0006f5b1) main_location2_pane_t3_ParamLimits

0x26f0,	// (0x0006f5c7) main_location2_pane_t4_ParamLimits

0x26f0,	// (0x0006f5c7) main_location2_pane_t4

0xf3da,	// (0x0007c2b1) main_location2_pane_t_ParamLimits

0x9ca8,	// (0x00076b7f) find_pinb_pane_g2_ParamLimits

0x9ca8,	// (0x00076b7f) find_pinb_pane_g2

0x0001,

0xf128,	// (0x0007bfff) find_pinb_pane_g_ParamLimits

0xf128,	// (0x0007bfff) find_pinb_pane_g

0x9cb4,	// (0x00076b8b) find_pinb_pane_t1_ParamLimits

0x9cc6,	// (0x00076b9d) find_pinb_pane_t2_ParamLimits

0xf12d,	// (0x0007c004) find_pinb_pane_t_ParamLimits

0x9a11,	// (0x000768e8) main_call3_pane

0x1bd9,	// (0x0006eab0) cale_month_day_heading_pane_t1_ParamLimits

0x1c5f,	// (0x0006eb36) cale_month_day_heading_pane_t2_ParamLimits

0x1cf0,	// (0x0006ebc7) cale_month_day_heading_pane_t3_ParamLimits

0x1d81,	// (0x0006ec58) cale_month_day_heading_pane_t4_ParamLimits

0x1e12,	// (0x0006ece9) cale_month_day_heading_pane_t5_ParamLimits

0x1eab,	// (0x0006ed82) cale_month_day_heading_pane_t6_ParamLimits

0x1f4c,	// (0x0006ee23) cale_month_day_heading_pane_t7_ParamLimits

0xf2b1,	// (0x0007c188) cale_month_day_heading_pane_t_ParamLimits

0x22da,	// (0x0006f1b1) smil_status_volume_pane

0x2f62,	// (0x0006fe39) postcard_address_pane_ParamLimits

0x2f62,	// (0x0006fe39) postcard_address_pane

0x2f78,	// (0x0006fe4f) postcard_message_pane_ParamLimits

0x2f78,	// (0x0006fe4f) postcard_message_pane

0x3481,	// (0x00070358) call2_cli_visual_pane_t1_ParamLimits

0x3481,	// (0x00070358) call2_cli_visual_pane_t1

0x3d0e,	// (0x00070be5) postcard_message_pane_t1_ParamLimits

0x3d0e,	// (0x00070be5) postcard_message_pane_t1

0x3cf7,	// (0x00070bce) postcard_address_pane_t1_ParamLimits

0x3cf7,	// (0x00070bce) postcard_address_pane_t1

0x3ce3,	// (0x00070bba) popup_call3_audio_in_window_ParamLimits

0x3ce3,	// (0x00070bba) popup_call3_audio_in_window

0x3b68,	// (0x00070a3f) bg_popup_call3_in_pane_ParamLimits

0x3b68,	// (0x00070a3f) bg_popup_call3_in_pane

0x3be4,	// (0x00070abb) popup_call3_audio_in_window_g1_ParamLimits

0x3be4,	// (0x00070abb) popup_call3_audio_in_window_g1

0x3c04,	// (0x00070adb) popup_call3_audio_in_window_g2_ParamLimits

0x3c04,	// (0x00070adb) popup_call3_audio_in_window_g2

0x3c24,	// (0x00070afb) popup_call3_audio_in_window_g3_ParamLimits

0x3c24,	// (0x00070afb) popup_call3_audio_in_window_g3

0x0003,

0xf61d,	// (0x0007c4f4) popup_call3_audio_in_window_g_ParamLimits

0xf61d,	// (0x0007c4f4) popup_call3_audio_in_window_g

0x3c55,	// (0x00070b2c) popup_call3_audio_in_window_t1_ParamLimits

0x3c55,	// (0x00070b2c) popup_call3_audio_in_window_t1

0x3c93,	// (0x00070b6a) popup_call3_audio_in_window_t2_ParamLimits

0x3c93,	// (0x00070b6a) popup_call3_audio_in_window_t2

0x3cd1,	// (0x00070ba8) popup_call3_audio_in_window_t3_ParamLimits

0x3cd1,	// (0x00070ba8) popup_call3_audio_in_window_t3

0x0002,

0xf626,	// (0x0007c4fd) popup_call3_audio_in_window_t_ParamLimits

0xf626,	// (0x0007c4fd) popup_call3_audio_in_window_t

0xb264,	// (0x0007813b) bg_popup_call3_rect_pane

0xc63d,	// (0x00079514) bg_popup_call3_rect_pane_g1

0xa83e,	// (0x00077715) bg_popup_call3_rect_pane_g2

0xc645,	// (0x0007951c) bg_popup_call3_rect_pane_g3

0xc64d,	// (0x00079524) bg_popup_call3_rect_pane_g4

0xc655,	// (0x0007952c) bg_popup_call3_rect_pane_g5

0xc65d,	// (0x00079534) bg_popup_call3_rect_pane_g6

0xc665,	// (0x0007953c) bg_popup_call3_rect_pane_g7

0x2b0a,	// (0x0006f9e1) mup_visualizer_osc_pane

0xb331,	// (0x00078208) mup_visualizer_spec_pane

0x3b98,	// (0x00070a6f) call3_video_qcif_pane_ParamLimits

0x3b98,	// (0x00070a6f) call3_video_qcif_pane

0x3bab,	// (0x00070a82) call3_video_qcif_uncrop_pane_ParamLimits

0x3bab,	// (0x00070a82) call3_video_qcif_uncrop_pane

0x3bbb,	// (0x00070a92) call3_video_subqcif_pane_ParamLimits

0x3bbb,	// (0x00070a92) call3_video_subqcif_pane

0x3bd1,	// (0x00070aa8) call3_video_subqcif_uncrop_pane_ParamLimits

0x3bd1,	// (0x00070aa8) call3_video_subqcif_uncrop_pane

0x3c44,	// (0x00070b1b) popup_call3_audio_in_window_g4_ParamLimits

0x3c44,	// (0x00070b1b) popup_call3_audio_in_window_g4

0x3b57,	// (0x00070a2e) mup_spec_half_pane

0x3b60,	// (0x00070a37) mup_spec_half_pane_cp

0xc8e9,	// (0x000797c0) mup_osc_middle_pane

0xc8f2,	// (0x000797c9) mup_visualizer_osc_pane_g1

0x3b37,	// (0x00070a0e) mup_spec_bar_pane_ParamLimits

0x3b37,	// (0x00070a0e) mup_spec_bar_pane

0xc8d6,	// (0x000797ad) mup_spec_bar_pane_g1

0xc8e0,	// (0x000797b7) mup_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0007c4e8) mup_spec_bar_pane_g

0x0581,	// (0x0006d458) aid_cale_week_size_cell_pane_ParamLimits

0x059b,	// (0x0006d472) bg_cale_heading_pane_ParamLimits

0xa872,	// (0x00077749) bg_cale_pane_cp01_ParamLimits

0x05c0,	// (0x0006d497) cale_week_corner_pane_ParamLimits

0x05df,	// (0x0006d4b6) cale_week_day_heading_pane_ParamLimits

0x0609,	// (0x0006d4e0) cale_week_scroll_pane_g1_ParamLimits

0x0629,	// (0x0006d500) cale_week_scroll_pane_g2_ParamLimits

0x0641,	// (0x0006d518) cale_week_scroll_pane_g3_ParamLimits

0x0659,	// (0x0006d530) cale_week_scroll_pane_g4_ParamLimits

0x0671,	// (0x0006d548) cale_week_scroll_pane_g5_ParamLimits

0x068d,	// (0x0006d564) cale_week_scroll_pane_g6_ParamLimits

0x06a9,	// (0x0006d580) cale_week_scroll_pane_g7_ParamLimits

0x06c9,	// (0x0006d5a0) cale_week_scroll_pane_g8_ParamLimits

0x06e9,	// (0x0006d5c0) cale_week_scroll_pane_g9_ParamLimits

0x0706,	// (0x0006d5dd) cale_week_scroll_pane_g10_ParamLimits

0x0723,	// (0x0006d5fa) cale_week_scroll_pane_g11_ParamLimits

0x0740,	// (0x0006d617) cale_week_scroll_pane_g12_ParamLimits

0x075d,	// (0x0006d634) cale_week_scroll_pane_g13_ParamLimits

0x077a,	// (0x0006d651) cale_week_scroll_pane_g14_ParamLimits

0x079f,	// (0x0006d676) cale_week_scroll_pane_g15_ParamLimits

0xf1b9,	// (0x0007c090) cale_week_scroll_pane_g_ParamLimits

0x07c4,	// (0x0006d69b) cale_week_time_pane_ParamLimits

0x07e4,	// (0x0006d6bb) grid_cale_week_pane_ParamLimits

0xa890,	// (0x00077767) listscroll_cale_week_pane_t1

0xa8a2,	// (0x00077779) scroll_pane_cp08_ParamLimits

0x16d3,	// (0x0006e5aa) cale_month_corner_pane_ParamLimits

0xac57,	// (0x00077b2e) cale_month_pane_t1

0x1b67,	// (0x0006ea3e) cale_month_week_pane_ParamLimits

0x24d3,	// (0x0006f3aa) popup_call_status_window_g1_ParamLimits

0x24e7,	// (0x0006f3be) popup_call_status_window_g2_ParamLimits

0x24fb,	// (0x0006f3d2) popup_call_status_window_g3_ParamLimits

0xf361,	// (0x0007c238) popup_call_status_window_g_ParamLimits

0xb006,	// (0x00077edd) aid_call2_pane

0x2dd6,	// (0x0006fcad) msg_header_pane_g1

0x2f62,	// (0x0006fe39) postcard_address2_pane_ParamLimits

0x2f62,	// (0x0006fe39) postcard_address2_pane

0x2f78,	// (0x0006fe4f) postcard_message2_pane_ParamLimits

0x2f78,	// (0x0006fe4f) postcard_message2_pane

0x3ae7,	// (0x000709be) message2_row_pane_ParamLimits

0x3ae7,	// (0x000709be) message2_row_pane

0x3b04,	// (0x000709db) address2_row_pane_ParamLimits

0x3b04,	// (0x000709db) address2_row_pane

0xc8a4,	// (0x0007977b) postcard_message2_row_pane_g1

0xc8ac,	// (0x00079783) postcard_message2_row_pane_t1

0xc8a4,	// (0x0007977b) address2_row_pane_g1

0xc8ac,	// (0x00079783) address2_row_pane_t1

0x0cf0,	// (0x0006dbc7) aid_size_cell_vorec

0x9a11,	// (0x000768e8) main_rss_pane

0x3b17,	// (0x000709ee) rss_list_single_pane_ParamLimits

0x3b17,	// (0x000709ee) rss_list_single_pane

0xc8ba,	// (0x00079791) rss_list_single_pane_t1

0xc8c8,	// (0x0007979f) rss_list_single_pane_t2

0x0001,

0xf60c,	// (0x0007c4e3) rss_list_single_pane_t

0x9a11,	// (0x000768e8) main_camera2_pane

0x9a11,	// (0x000768e8) main_video2_pane

0x3d7d,	// (0x00070c54) cams_zoom_pane_cp2_ParamLimits

0x3d7d,	// (0x00070c54) cams_zoom_pane_cp2

0x3d94,	// (0x00070c6b) image2_vga_pane_ParamLimits

0x3d94,	// (0x00070c6b) image2_vga_pane

0x3ddc,	// (0x00070cb3) main_camera2_pane_g1_ParamLimits

0x3ddc,	// (0x00070cb3) main_camera2_pane_g1

0x3dfc,	// (0x00070cd3) main_camera2_pane_g2_ParamLimits

0x3dfc,	// (0x00070cd3) main_camera2_pane_g2

0x3e13,	// (0x00070cea) main_camera2_pane_g3_ParamLimits

0x3e13,	// (0x00070cea) main_camera2_pane_g3

0x3e2a,	// (0x00070d01) main_camera2_pane_g4_ParamLimits

0x3e2a,	// (0x00070d01) main_camera2_pane_g4

0x3e41,	// (0x00070d18) main_camera2_pane_g5_ParamLimits

0x3e41,	// (0x00070d18) main_camera2_pane_g5

0x3e58,	// (0x00070d2f) main_camera2_pane_g6_ParamLimits

0x3e58,	// (0x00070d2f) main_camera2_pane_g6

0x3e6f,	// (0x00070d46) main_camera2_pane_g7_ParamLimits

0x3e6f,	// (0x00070d46) main_camera2_pane_g7

0x3e86,	// (0x00070d5d) main_camera2_pane_g8_ParamLimits

0x3e86,	// (0x00070d5d) main_camera2_pane_g8

0x0008,

0xf62d,	// (0x0007c504) main_camera2_pane_g_ParamLimits

0xf62d,	// (0x0007c504) main_camera2_pane_g

0x3eb4,	// (0x00070d8b) main_camera2_pane_t1_ParamLimits

0x3eb4,	// (0x00070d8b) main_camera2_pane_t1

0x3ee9,	// (0x00070dc0) main_camera2_pane_t2_ParamLimits

0x3ee9,	// (0x00070dc0) main_camera2_pane_t2

0x3f06,	// (0x00070ddd) main_camera2_pane_t3_ParamLimits

0x3f06,	// (0x00070ddd) main_camera2_pane_t3

0x3f64,	// (0x00070e3b) main_camera2_pane_t4_ParamLimits

0x3f64,	// (0x00070e3b) main_camera2_pane_t4

0x0006,

0xf640,	// (0x0007c517) main_camera2_pane_t_ParamLimits

0xf640,	// (0x0007c517) main_camera2_pane_t

0x3fed,	// (0x00070ec4) cams_zoom_pane_cp4_ParamLimits

0x3fed,	// (0x00070ec4) cams_zoom_pane_cp4

0x4003,	// (0x00070eda) image2_cif_pane_ParamLimits

0x4003,	// (0x00070eda) image2_cif_pane

0x402e,	// (0x00070f05) image2_subqcif_pane_ParamLimits

0x402e,	// (0x00070f05) image2_subqcif_pane

0x4049,	// (0x00070f20) main_video2_pane_g1_ParamLimits

0x4049,	// (0x00070f20) main_video2_pane_g1

0x4063,	// (0x00070f3a) main_video2_pane_g2_ParamLimits

0x4063,	// (0x00070f3a) main_video2_pane_g2

0x4079,	// (0x00070f50) main_video2_pane_g3_ParamLimits

0x4079,	// (0x00070f50) main_video2_pane_g3

0x408f,	// (0x00070f66) main_video2_pane_g4_ParamLimits

0x408f,	// (0x00070f66) main_video2_pane_g4

0x40a5,	// (0x00070f7c) main_video2_pane_g5_ParamLimits

0x40a5,	// (0x00070f7c) main_video2_pane_g5

0x40bb,	// (0x00070f92) main_video2_pane_g6_ParamLimits

0x40bb,	// (0x00070f92) main_video2_pane_g6

0x0005,

0xf64f,	// (0x0007c526) main_video2_pane_g_ParamLimits

0xf64f,	// (0x0007c526) main_video2_pane_g

0x40d5,	// (0x00070fac) main_video2_pane_t1_ParamLimits

0x40d5,	// (0x00070fac) main_video2_pane_t1

0x40f9,	// (0x00070fd0) main_video2_pane_t2_ParamLimits

0x40f9,	// (0x00070fd0) main_video2_pane_t2

0x4149,	// (0x00071020) main_video2_pane_t3_ParamLimits

0x4149,	// (0x00071020) main_video2_pane_t3

0x0002,

0xf65c,	// (0x0007c533) main_video2_pane_t_ParamLimits

0xf65c,	// (0x0007c533) main_video2_pane_t

0x35d9,	// (0x000704b0) call_muted_g2

0x0001,

0xf5fe,	// (0x0007c4d5) call_muted_g

0x9a11,	// (0x000768e8) main_mup2_pane

0x4191,	// (0x00071068) main_mup2_pane_g1_ParamLimits

0x4191,	// (0x00071068) main_mup2_pane_g1

0x419d,	// (0x00071074) main_mup2_pane_g2_ParamLimits

0x419d,	// (0x00071074) main_mup2_pane_g2

0x9f5a,	// (0x00076e31) main_mup_pane_g13_cp1

0x9f62,	// (0x00076e39) mup_volume_pane_cp1

0x41bb,	// (0x00071092) main_mup2_pane_g4_ParamLimits

0x41bb,	// (0x00071092) main_mup2_pane_g4

0x41cd,	// (0x000710a4) main_mup2_pane_g5_ParamLimits

0x41cd,	// (0x000710a4) main_mup2_pane_g5

0x41df,	// (0x000710b6) main_mup2_pane_g6_ParamLimits

0x41df,	// (0x000710b6) main_mup2_pane_g6

0x41f1,	// (0x000710c8) main_mup2_pane_g7_ParamLimits

0x41f1,	// (0x000710c8) main_mup2_pane_g7

0x0006,

0xf663,	// (0x0007c53a) main_mup2_pane_g_ParamLimits

0xf663,	// (0x0007c53a) main_mup2_pane_g

0x4209,	// (0x000710e0) main_mup2_pane_t1_ParamLimits

0x4209,	// (0x000710e0) main_mup2_pane_t1

0x421f,	// (0x000710f6) main_mup2_pane_t2_ParamLimits

0x421f,	// (0x000710f6) main_mup2_pane_t2

0x4235,	// (0x0007110c) main_mup2_pane_t3_ParamLimits

0x4235,	// (0x0007110c) main_mup2_pane_t3

0x424b,	// (0x00071122) main_mup2_pane_t4_ParamLimits

0x424b,	// (0x00071122) main_mup2_pane_t4

0x4263,	// (0x0007113a) main_mup2_pane_t5_ParamLimits

0x4263,	// (0x0007113a) main_mup2_pane_t5

0x427b,	// (0x00071152) main_mup2_pane_t6_ParamLimits

0x427b,	// (0x00071152) main_mup2_pane_t6

0x0005,

0xf672,	// (0x0007c549) main_mup2_pane_t_ParamLimits

0xf672,	// (0x0007c549) main_mup2_pane_t

0x42ab,	// (0x00071182) mup2_visualizer_pane_ParamLimits

0x42ab,	// (0x00071182) mup2_visualizer_pane

0x42d9,	// (0x000711b0) mup_progress_pane_cp_ParamLimits

0x42d9,	// (0x000711b0) mup_progress_pane_cp

0x9f45,	// (0x00076e1c) mup_volume_pane_cp_ParamLimits

0x9f45,	// (0x00076e1c) mup_volume_pane_cp

0x42ef,	// (0x000711c6) mup2_visualizer_pane_g1_ParamLimits

0x42ef,	// (0x000711c6) mup2_visualizer_pane_g1

0xc929,	// (0x00079800) mup2_visualizer_pane_g2_ParamLimits

0xc929,	// (0x00079800) mup2_visualizer_pane_g2

0x4306,	// (0x000711dd) mup2_visualizer_pane_g3_ParamLimits

0x4306,	// (0x000711dd) mup2_visualizer_pane_g3

0x0002,

0xf67f,	// (0x0007c556) mup2_visualizer_pane_g_ParamLimits

0xf67f,	// (0x0007c556) mup2_visualizer_pane_g

0xb563,	// (0x0007843a) aid_size_cell_fmradio

0x3789,	// (0x00070660) aid_height_parent_landcape

0xaab5,	// (0x0007798c) wml_content_pane_cp

0xaabd,	// (0x00077994) wml_tabs_pane

0xaac6,	// (0x0007799d) popup_wml_miniature_window

0xaace,	// (0x000779a5) scroll_pane_cp021

0xaae2,	// (0x000779b9) wml_content_pane_comp8

0x9a11,	// (0x000768e8) bg_popup_sub_pane_cp05

0xc947,	// (0x0007981e) popup_wml_miniature_window_g1

0xc94f,	// (0x00079826) wml_miniature_view_pane

0x4312,	// (0x000711e9) aid_size_wml_view

0x431a,	// (0x000711f1) wml_miniature_view_pane_g1

0x4323,	// (0x000711fa) wml_miniature_view_pane_g2

0x432c,	// (0x00071203) wml_miniature_view_pane_g3

0x4334,	// (0x0007120b) wml_miniature_view_pane_g4

0x433c,	// (0x00071213) wml_miniature_view_pane_g5

0x4344,	// (0x0007121b) wml_miniature_view_pane_g6

0x434c,	// (0x00071223) wml_miniature_view_pane_g7

0x4354,	// (0x0007122b) wml_miniature_view_pane_g8

0x0007,

0xf686,	// (0x0007c55d) wml_miniature_view_pane_g

0xc957,	// (0x0007982e) background_graphic_ParamLimits

0xc957,	// (0x0007982e) background_graphic

0xc963,	// (0x0007983a) wml_tabs_2_pane

0xc96c,	// (0x00079843) wml_tabs_3_pane_ParamLimits

0xc96c,	// (0x00079843) wml_tabs_3_pane

0xc97e,	// (0x00079855) wml_tabs_4_pane_ParamLimits

0xc97e,	// (0x00079855) wml_tabs_4_pane

0xc994,	// (0x0007986b) wml_tabs_5_pane_ParamLimits

0xc994,	// (0x0007986b) wml_tabs_5_pane

0xc9ae,	// (0x00079885) wml_tabs_pane_g2_ParamLimits

0xc9ae,	// (0x00079885) wml_tabs_pane_g2

0xc9c2,	// (0x00079899) wml_tabs_pane_g3_ParamLimits

0xc9c2,	// (0x00079899) wml_tabs_pane_g3

0x435c,	// (0x00071233) wml_tabs_2_active_pane_ParamLimits

0x435c,	// (0x00071233) wml_tabs_2_active_pane

0x4370,	// (0x00071247) wml_tabs_2_passive_pane_ParamLimits

0x4370,	// (0x00071247) wml_tabs_2_passive_pane

0x4384,	// (0x0007125b) wml_tabs_3_active_pane_cp_ParamLimits

0x4384,	// (0x0007125b) wml_tabs_3_active_pane_cp

0x4399,	// (0x00071270) wml_tabs_3_passive_pane_ParamLimits

0x4399,	// (0x00071270) wml_tabs_3_passive_pane

0x43ac,	// (0x00071283) wml_tabs_3_passive_pane_cp_ParamLimits

0x43ac,	// (0x00071283) wml_tabs_3_passive_pane_cp

0x43c3,	// (0x0007129a) tabs_4_active_pane

0x43cb,	// (0x000712a2) tabs_4_passive_pane

0x43d5,	// (0x000712ac) tabs_4_passive_pane_cp

0x43dd,	// (0x000712b4) tabs_4_passive_pane_cp2

0x349d,	// (0x00070374) aid_height_text

0x2adc,	// (0x0006f9b3) mup_volume_cont_pane_ParamLimits

0x2adc,	// (0x0006f9b3) mup_volume_cont_pane

0x015a,	// (0x0006d031) aid_size_cell_pinb

0x0164,	// (0x0006d03b) aid_size_list_pinb

0x42c5,	// (0x0007119c) mup2_volume_cont_pane_ParamLimits

0x42c5,	// (0x0007119c) mup2_volume_cont_pane

0x9f31,	// (0x00076e08) mup2_volume_cont_pane_g1_ParamLimits

0x9f31,	// (0x00076e08) mup2_volume_cont_pane_g1

0xfe10,	// (0x0006cce7) aid_size_cell_touch_ParamLimits

0xfe10,	// (0x0006cce7) aid_size_cell_touch

0x004a,	// (0x0006cf21) touch_pane_ParamLimits

0x004a,	// (0x0006cf21) touch_pane

0x9597,	// (0x0007646e) main_rss2_pane

0xc9df,	// (0x000798b6) listscroll_rss2_pane

0xc9e8,	// (0x000798bf) rss2_navigation_pane

0xc9f0,	// (0x000798c7) list_rss2_pane

0xb12a,	// (0x00078001) scroll_pane_cp22

0xc9f8,	// (0x000798cf) rss2_navigation_pane_g1

0xca01,	// (0x000798d8) rss2_navigation_pane_g2

0xca09,	// (0x000798e0) rss2_navigation_pane_g3

0x0002,

0xf697,	// (0x0007c56e) rss2_navigation_pane_g

0xca11,	// (0x000798e8) rss2_navigation_pane_t1

0x43e7,	// (0x000712be) rss2_list_single_pane_ParamLimits

0x43e7,	// (0x000712be) rss2_list_single_pane

0xca1f,	// (0x000798f6) rss2_list_single_pane_t2

0xca2d,	// (0x00079904) rss2_list_single_pane_t3_ParamLimits

0xca2d,	// (0x00079904) rss2_list_single_pane_t3

0xca4a,	// (0x00079921) rss2_list_single_pane_t4

0x22c2,	// (0x0006f199) smil_status_pane_g1

0x95f0,	// (0x000764c7) main_image2_pane_ParamLimits

0x95f0,	// (0x000764c7) main_image2_pane

0x3e9d,	// (0x00070d74) main_camera2_pane_g9_ParamLimits

0x3e9d,	// (0x00070d74) main_camera2_pane_g9

0x3fb9,	// (0x00070e90) main_camera2_pane_t5_ParamLimits

0x3fb9,	// (0x00070e90) main_camera2_pane_t5

0x9f06,	// (0x00076ddd) main_camera2_pane_t6_ParamLimits

0x9f06,	// (0x00076ddd) main_camera2_pane_t6

0x43fd,	// (0x000712d4) main_image2_pane_g1_ParamLimits

0x43fd,	// (0x000712d4) main_image2_pane_g1

0x31b7,	// (0x0007008e) smil2_video_pane_ParamLimits

0x31b7,	// (0x0007008e) smil2_video_pane

0xfe48,	// (0x0006cd1f) aid_zoom_text_primary_cp

0x95e6,	// (0x000764bd) popup_preview_fixed_window

0xaa1e,	// (0x000778f5) im_reading_pane_g1

0x3d6f,	// (0x00070c46) cams2_bc_adjust_pane_cp_ParamLimits

0x3d6f,	// (0x00070c46) cams2_bc_adjust_pane_cp

0x3fdf,	// (0x00070eb6) cams2_bc_adjust_pane_ParamLimits

0x3fdf,	// (0x00070eb6) cams2_bc_adjust_pane

0xca58,	// (0x0007992f) cams2_bc_adjust_pane_g1

0x9f6a,	// (0x00076e41) cams2_slider_pane

0x9f73,	// (0x00076e4a) cams2_slider_pane_g1

0x9f7c,	// (0x00076e53) cams2_slider_pane_g2

0x0006,

0xf69e,	// (0x0007c575) cams2_slider_pane_g

0x0254,	// (0x0006d12b) calc_display_pane_ParamLimits

0x027c,	// (0x0006d153) calc_paper_pane_ParamLimits

0x029f,	// (0x0006d176) grid_calc_pane_ParamLimits

0x9e3b,	// (0x00076d12) popup_clock_digital_window_t1_ParamLimits

0xb500,	// (0x000783d7) main_image_pane_t1

0x0236,	// (0x0006d10d) aid_size_cell_calc_ParamLimits

0x0236,	// (0x0006d10d) aid_size_cell_calc

0x37cf,	// (0x000706a6) popup_blid_sat_info2_window_ParamLimits

0x37cf,	// (0x000706a6) popup_blid_sat_info2_window

0xca68,	// (0x0007993f) aid_size_cell_blid

0xca70,	// (0x00079947) bg_popup_window_pane_cp07

0xca93,	// (0x0007996a) grid_popup_blid_pane

0xca9d,	// (0x00079974) heading_pane_cp05_ParamLimits

0xca9d,	// (0x00079974) heading_pane_cp05

0xcb67,	// (0x00079a3e) cell_popup_blid_pane_ParamLimits

0xcb67,	// (0x00079a3e) cell_popup_blid_pane

0xcb91,	// (0x00079a68) cell_popup_blid_pane_g1

0xcb99,	// (0x00079a70) cell_popup_blid_pane_t1

0x4295,	// (0x0007116c) mup2_indicator_pane_ParamLimits

0x4295,	// (0x0007116c) mup2_indicator_pane

0xb264,	// (0x0007813b) mup2_visualizer_osc_pane

0xc935,	// (0x0007980c) mup2_visualizer_spec_pane_ParamLimits

0xc935,	// (0x0007980c) mup2_visualizer_spec_pane

0x4413,	// (0x000712ea) mup2_spec_half_pane

0x441c,	// (0x000712f3) mup2_spec_half_pane_cp

0x4424,	// (0x000712fb) mup2_spec_bar_pane_ParamLimits

0x4424,	// (0x000712fb) mup2_spec_bar_pane

0xc8d6,	// (0x000797ad) mup2_spec_bar_pane_g1

0xc8e0,	// (0x000797b7) mup2_spec_bar_pane_g2

0x0001,

0xf611,	// (0x0007c4e8) mup2_spec_bar_pane_g

0x4444,	// (0x0007131b) mup2_osc_middle_pane

0xc8f2,	// (0x000797c9) mup2_visualizer_osc_pane_g1

0x961e,	// (0x000764f5) popup_number_entry_window_t1_ParamLimits

0x9631,	// (0x00076508) popup_number_entry_window_t2_ParamLimits

0x9643,	// (0x0007651a) popup_number_entry_window_t3_ParamLimits

0x009c,	// (0x0006cf73) popup_number_entry_window_t5_ParamLimits

0x009c,	// (0x0006cf73) popup_number_entry_window_t5

0xf0d3,	// (0x0007bfaa) popup_number_entry_window_t_ParamLimits

0x9655,	// (0x0007652c) text_title_cp2_ParamLimits

0x9eb0,	// (0x00076d87) aid_hotspot_pointer_text2_pane

0x9ed6,	// (0x00076dad) main_viewer_pane_g9_ParamLimits

0x9ed6,	// (0x00076dad) main_viewer_pane_g9

0xac57,	// (0x00077b2e) cale_month_pane_t1_ParamLimits

0xac7d,	// (0x00077b54) bg_cale_pane_ParamLimits

0xac95,	// (0x00077b6c) list_cale_pane_ParamLimits

0xaca6,	// (0x00077b7d) listscroll_cale_day_pane_t1

0xacb8,	// (0x00077b8f) scroll_pane_cp09_ParamLimits

0x2b12,	// (0x0006f9e9) main_mup_eq_pane_t1_ParamLimits

0x2b12,	// (0x0006f9e9) main_mup_eq_pane_t1

0x2b2e,	// (0x0006fa05) main_mup_eq_pane_t2_ParamLimits

0x2b2e,	// (0x0006fa05) main_mup_eq_pane_t2

0x2b4a,	// (0x0006fa21) main_mup_eq_pane_t3_ParamLimits

0x2b4a,	// (0x0006fa21) main_mup_eq_pane_t3

0x2b68,	// (0x0006fa3f) main_mup_eq_pane_t4_ParamLimits

0x2b68,	// (0x0006fa3f) main_mup_eq_pane_t4

0x2b86,	// (0x0006fa5d) main_mup_eq_pane_t5_ParamLimits

0x2b86,	// (0x0006fa5d) main_mup_eq_pane_t5

0x2ba4,	// (0x0006fa7b) main_mup_eq_pane_t6_ParamLimits

0x2ba4,	// (0x0006fa7b) main_mup_eq_pane_t6

0x2bba,	// (0x0006fa91) main_mup_eq_pane_t7_ParamLimits

0x2bba,	// (0x0006fa91) main_mup_eq_pane_t7

0x2bd0,	// (0x0006faa7) main_mup_eq_pane_t8_ParamLimits

0x2bd0,	// (0x0006faa7) main_mup_eq_pane_t8

0x2be6,	// (0x0006fabd) main_mup_eq_pane_t9_ParamLimits

0x2be6,	// (0x0006fabd) main_mup_eq_pane_t9

0x2c02,	// (0x0006fad9) main_mup_eq_pane_t10_ParamLimits

0x2c02,	// (0x0006fad9) main_mup_eq_pane_t10

0x0009,

0xf460,	// (0x0007c337) main_mup_eq_pane_t_ParamLimits

0xf460,	// (0x0007c337) main_mup_eq_pane_t

0x2cd7,	// (0x0006fbae) mup_equalizer_pane_cp5_ParamLimits

0x2cef,	// (0x0006fbc6) mup_equalizer_pane_cp6_ParamLimits

0x2d07,	// (0x0006fbde) mup_equalizer_pane_cp7_ParamLimits

0x9597,	// (0x0007646e) main_gallery_pane

0xc8fb,	// (0x000797d2) smil2_volume_pane

0xc903,	// (0x000797da) smil_status_volume_pane_g1_ParamLimits

0xc916,	// (0x000797ed) smil_status_volume_pane_g2_ParamLimits

0x9ee2,	// (0x00076db9) smil_status_volume_pane_g3_ParamLimits

0xf616,	// (0x0007c4ed) smil_status_volume_pane_g_ParamLimits

0xca70,	// (0x00079947) bg_popup_window_pane_cp07_ParamLimits

0xca7e,	// (0x00079955) blid_firmament_pane

0x444d,	// (0x00071324) aid_size_cell_gallery_ParamLimits

0x444d,	// (0x00071324) aid_size_cell_gallery

0x4463,	// (0x0007133a) grid_gallery_pane_ParamLimits

0x4463,	// (0x0007133a) grid_gallery_pane

0x447e,	// (0x00071355) cell_gallery_pane_ParamLimits

0x447e,	// (0x00071355) cell_gallery_pane

0xcba7,	// (0x00079a7e) bg_cell_gallery_focus_pane_ParamLimits

0xcba7,	// (0x00079a7e) bg_cell_gallery_focus_pane

0xcbb9,	// (0x00079a90) cell_gallery_pane_g1_ParamLimits

0xcbb9,	// (0x00079a90) cell_gallery_pane_g1

0x44c9,	// (0x000713a0) cell_gallery_pane_g2_ParamLimits

0x44c9,	// (0x000713a0) cell_gallery_pane_g2

0x44d6,	// (0x000713ad) cell_gallery_pane_g3_ParamLimits

0x44d6,	// (0x000713ad) cell_gallery_pane_g3

0xcbc5,	// (0x00079a9c) cell_gallery_pane_g4_ParamLimits

0xcbc5,	// (0x00079a9c) cell_gallery_pane_g4

0x0003,

0xf6c4,	// (0x0007c59b) cell_gallery_pane_g_ParamLimits

0xf6c4,	// (0x0007c59b) cell_gallery_pane_g

0xcbd1,	// (0x00079aa8) bg_cell_gallery_focus_pane_g1

0xcbd9,	// (0x00079ab0) bg_cell_gallery_focus_pane_g2

0xcbe1,	// (0x00079ab8) bg_cell_gallery_focus_pane_g3

0xcbe9,	// (0x00079ac0) bg_cell_gallery_focus_pane_g4

0xcbf1,	// (0x00079ac8) bg_cell_gallery_focus_pane_g5

0xcbf9,	// (0x00079ad0) bg_cell_gallery_focus_pane_g6

0xcc01,	// (0x00079ad8) bg_cell_gallery_focus_pane_g7

0xcc09,	// (0x00079ae0) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6cd,	// (0x0007c5a4) bg_cell_gallery_focus_pane_g

0xcc11,	// (0x00079ae8) aid_firma_cardinal

0xcc25,	// (0x00079afc) blid_firmament_pane_t1

0xcc3c,	// (0x00079b13) blid_firmament_pane_t2

0xcc53,	// (0x00079b2a) blid_firmament_pane_t3

0xcc6a,	// (0x00079b41) blid_firmament_pane_t4

0x0003,

0xf6de,	// (0x0007c5b5) blid_firmament_pane_t

0xcc81,	// (0x00079b58) blid_sat_info_pane

0xcc91,	// (0x00079b68) blid_sat_info_pane_g1

0xcc91,	// (0x00079b68) blid_sat_info_pane_g2

0x0001,

0xf6e7,	// (0x0007c5be) blid_sat_info_pane_g

0xcc9b,	// (0x00079b72) blid_sat_info_pane_t1

0xcca9,	// (0x00079b80) smil2_volume_content_pane

0xccb2,	// (0x00079b89) smil2_volume_pane_g1

0xccba,	// (0x00079b91) smil2_volume_content_pane_g1

0xccc3,	// (0x00079b9a) smil2_volume_content_pane_g2

0xcccc,	// (0x00079ba3) smil2_volume_content_pane_g3

0xccd5,	// (0x00079bac) smil2_volume_content_pane_g4

0xccde,	// (0x00079bb5) smil2_volume_content_pane_g5

0xcce7,	// (0x00079bbe) smil2_volume_content_pane_g6

0xccf0,	// (0x00079bc7) smil2_volume_content_pane_g7

0xccf9,	// (0x00079bd0) smil2_volume_content_pane_g8

0xcd02,	// (0x00079bd9) smil2_volume_content_pane_g9

0xcd0b,	// (0x00079be2) smil2_volume_content_pane_g10

0x0009,

0xf6ec,	// (0x0007c5c3) smil2_volume_content_pane_g

0x0895,	// (0x0006d76c) cale_week_day_heading_pane_t1_ParamLimits

0x08df,	// (0x0006d7b6) cale_week_day_heading_pane_t2_ParamLimits

0x092e,	// (0x0006d805) cale_week_day_heading_pane_t3_ParamLimits

0x097d,	// (0x0006d854) cale_week_day_heading_pane_t4_ParamLimits

0x09cc,	// (0x0006d8a3) cale_week_day_heading_pane_t5_ParamLimits

0x0a1b,	// (0x0006d8f2) cale_week_day_heading_pane_t6_ParamLimits

0x0a6e,	// (0x0006d945) cale_week_day_heading_pane_t7_ParamLimits

0xf1d8,	// (0x0007c0af) cale_week_day_heading_pane_t_ParamLimits

0xa8c4,	// (0x0007779b) bg_cale_side_pane_ParamLimits

0x0ab8,	// (0x0006d98f) cale_week_time_pane_t1_ParamLimits

0x0af2,	// (0x0006d9c9) cale_week_time_pane_t2_ParamLimits

0x0b2c,	// (0x0006da03) cale_week_time_pane_t3_ParamLimits

0x0b66,	// (0x0006da3d) cale_week_time_pane_t4_ParamLimits

0x0ba0,	// (0x0006da77) cale_week_time_pane_t5_ParamLimits

0x0bda,	// (0x0006dab1) cale_week_time_pane_t6_ParamLimits

0x0c14,	// (0x0006daeb) cale_week_time_pane_t7_ParamLimits

0x0c4e,	// (0x0006db25) cale_week_time_pane_t8_ParamLimits

0xf1e7,	// (0x0007c0be) cale_week_time_pane_t_ParamLimits

0x0c8c,	// (0x0006db63) cell_cale_week_pane_g2_ParamLimits

0xa8c4,	// (0x0007779b) bg_cale_side_pane_cp01_ParamLimits

0x1ff5,	// (0x0006eecc) cale_month_week_pane_t1_ParamLimits

0x202e,	// (0x0006ef05) cale_month_week_pane_t2_ParamLimits

0x2067,	// (0x0006ef3e) cale_month_week_pane_t3_ParamLimits

0x20a0,	// (0x0006ef77) cale_month_week_pane_t4_ParamLimits

0x20d9,	// (0x0006efb0) cale_month_week_pane_t5_ParamLimits

0x2112,	// (0x0006efe9) cale_month_week_pane_t6_ParamLimits

0xf2c0,	// (0x0007c197) cale_month_week_pane_t_ParamLimits

0x9dbb,	// (0x00076c92) cell_cale_month_pane_g1_ParamLimits

0x9597,	// (0x0007646e) main_cale_event_viewer_pane

0x9597,	// (0x0007646e) listscroll_cale_event_viewer_pane

0xcd14,	// (0x00079beb) list_cale_ev_pane

0xcd1c,	// (0x00079bf3) scroll_pane_cp023

0x44e3,	// (0x000713ba) field_cale_ev_pane_ParamLimits

0x44e3,	// (0x000713ba) field_cale_ev_pane

0xcd28,	// (0x00079bff) field_cale_ev_content_pane_ParamLimits

0xcd28,	// (0x00079bff) field_cale_ev_content_pane

0xcd34,	// (0x00079c0b) field_cale_ev_pane_g1_ParamLimits

0xcd34,	// (0x00079c0b) field_cale_ev_pane_g1

0xcd40,	// (0x00079c17) field_cale_ev_pane_g2_ParamLimits

0xcd40,	// (0x00079c17) field_cale_ev_pane_g2

0xcd58,	// (0x00079c2f) field_cale_ev_pane_g3_ParamLimits

0xcd58,	// (0x00079c2f) field_cale_ev_pane_g3

0x0002,

0xf701,	// (0x0007c5d8) field_cale_ev_pane_g_ParamLimits

0xf701,	// (0x0007c5d8) field_cale_ev_pane_g

0xcd70,	// (0x00079c47) field_cale_ev_pane_t1_ParamLimits

0xcd70,	// (0x00079c47) field_cale_ev_pane_t1

0x4507,	// (0x000713de) field_cale_ev_content_pane_t1_ParamLimits

0x4507,	// (0x000713de) field_cale_ev_content_pane_t1

0x2dcb,	// (0x0006fca2) bg_button_pane_cp01

0x0561,	// (0x0006d438) listscroll_cale_week_pane_ParamLimits

0x0577,	// (0x0006d44e) popup_toolbar_window_cp01

0xa890,	// (0x00077767) listscroll_cale_week_pane_t1_ParamLimits

0x2327,	// (0x0006f1fe) listscroll_cale_day_pane_ParamLimits

0x233f,	// (0x0006f216) popup_toolbar_window_cp02

0xaca6,	// (0x00077b7d) listscroll_cale_day_pane_t1_ParamLimits

0x0561,	// (0x0006d438) main_cale_month_pane_ParamLimits

0x3a4f,	// (0x00070926) popup_toolbar_window_cp03_ParamLimits

0x3a4f,	// (0x00070926) popup_toolbar_window_cp03

0x3075,	// (0x0006ff4c) main_image_pane_g2_ParamLimits

0x3075,	// (0x0006ff4c) main_image_pane_g2

0x3086,	// (0x0006ff5d) main_image_pane_g3_ParamLimits

0x3086,	// (0x0006ff5d) main_image_pane_g3

0x0002,

0xf4f2,	// (0x0007c3c9) main_image_pane_g_ParamLimits

0xf4f2,	// (0x0007c3c9) main_image_pane_g

0xb500,	// (0x000783d7) main_image_pane_t1_ParamLimits

0x3097,	// (0x0006ff6e) main_image_pane_t2_ParamLimits

0x3097,	// (0x0006ff6e) main_image_pane_t2

0x30a9,	// (0x0006ff80) main_image_pane_t3_ParamLimits

0x30a9,	// (0x0006ff80) main_image_pane_t3

0x30d1,	// (0x0006ffa8) main_image_pane_t4_ParamLimits

0x30d1,	// (0x0006ffa8) main_image_pane_t4

0x0003,

0xf4f9,	// (0x0007c3d0) main_image_pane_t_ParamLimits

0xf4f9,	// (0x0007c3d0) main_image_pane_t

0x30f1,	// (0x0006ffc8) popup_image_details_window_cp01

0x30fb,	// (0x0006ffd2) popup_toobar_trans_pane_cp01_ParamLimits

0x30fb,	// (0x0006ffd2) popup_toobar_trans_pane_cp01

0x38c2,	// (0x00070799) popup_image_details_window_ParamLimits

0x38c2,	// (0x00070799) popup_image_details_window

0xc85a,	// (0x00079731) popup_image_focus_window

0x3d29,	// (0x00070c00) camera2_autofocus_pane_ParamLimits

0x3d29,	// (0x00070c00) camera2_autofocus_pane

0x9597,	// (0x0007646e) bg_popup_sub_pane_cp06

0xcd87,	// (0x00079c5e) popup_image_focus_window_g1

0xcd8f,	// (0x00079c66) popup_image_focus_window_g2

0xcd97,	// (0x00079c6e) popup_image_focus_window_g3

0xcd9f,	// (0x00079c76) popup_image_focus_window_g4

0x0003,

0xf708,	// (0x0007c5df) popup_image_focus_window_g

0xcda7,	// (0x00079c7e) popup_image_focus_window_t1

0xcdb5,	// (0x00079c8c) popup_image_focus_window_t2

0xcdc5,	// (0x00079c9c) popup_image_focus_window_t3

0x0002,

0xf711,	// (0x0007c5e8) popup_image_focus_window_t

0xcdd3,	// (0x00079caa) camera2_autofocus_pane_g1

0x95f0,	// (0x000764c7) bg_tb_trans_pane_cp01

0xcde1,	// (0x00079cb8) popup_image_details_window_g1

0xcdf4,	// (0x00079ccb) popup_image_details_window_g2

0x0002,

0xf723,	// (0x0007c5fa) popup_image_details_window_g

0xce1d,	// (0x00079cf4) popup_image_details_window_t1

0xce2f,	// (0x00079d06) popup_image_details_window_t2

0xce48,	// (0x00079d1f) popup_image_details_window_t3

0xce5c,	// (0x00079d33) popup_image_details_window_t4

0xce77,	// (0x00079d4e) popup_image_details_window_t5

0x0004,

0xf72a,	// (0x0007c601) popup_image_details_window_t

0xa737,	// (0x0007760e) bg_calc_paper_pane_ParamLimits

0x9cef,	// (0x00076bc6) grid_highlight_pane_cp013

0x9cf9,	// (0x00076bd0) list_calc_pane_ParamLimits

0x9d0b,	// (0x00076be2) scroll_pane_cp024

0xa74b,	// (0x00077622) bg_calc_display_pane_ParamLimits

0x039f,	// (0x0006d276) calc_display_pane_t1_ParamLimits

0x03b1,	// (0x0006d288) calc_display_pane_t2_ParamLimits

0x9d13,	// (0x00076bea) calc_display_pane_t3_ParamLimits

0xf15a,	// (0x0007c031) calc_display_pane_t_ParamLimits

0x047a,	// (0x0006d351) cell_calc_pane_g2

0x0001,

0xf177,	// (0x0007c04e) cell_calc_pane_g

0x0483,	// (0x0006d35a) cell_calc_pane_t1

0xa7aa,	// (0x00077681) grid_highlight_pane_cp02_ParamLimits

0xa7c0,	// (0x00077697) toolbar_button_pane_cp01_ParamLimits

0xa7c0,	// (0x00077697) toolbar_button_pane_cp01

0xb545,	// (0x0007841c) temp_image_control_pane_ParamLimits

0xb545,	// (0x0007841c) temp_image_control_pane

0x95f0,	// (0x000764c7) main_mp3_pane

0xce91,	// (0x00079d68) temp_image_control_pane_g1_ParamLimits

0xce91,	// (0x00079d68) temp_image_control_pane_g1

0xce9f,	// (0x00079d76) temp_image_control_pane_g2_ParamLimits

0xce9f,	// (0x00079d76) temp_image_control_pane_g2

0xceb1,	// (0x00079d88) temp_image_control_pane_g3_ParamLimits

0xceb1,	// (0x00079d88) temp_image_control_pane_g3

0x4558,	// (0x0007142f) temp_image_control_pane_g4_ParamLimits

0x4558,	// (0x0007142f) temp_image_control_pane_g4

0x0003,

0xf735,	// (0x0007c60c) temp_image_control_pane_g_ParamLimits

0xf735,	// (0x0007c60c) temp_image_control_pane_g

0xce91,	// (0x00079d68) main_mp3_pane_g1

0x456b,	// (0x00071442) main_mp3_pane_g2

0x0007,

0xf73e,	// (0x0007c615) main_mp3_pane_g

0xcef4,	// (0x00079dcb) main_mp3_pane_t1

0xa929,	// (0x00077800) main_camera_pane_g8_ParamLimits

0xa929,	// (0x00077800) main_camera_pane_g8

0x0fc9,	// (0x0006dea0) main_video_pane_g7_ParamLimits

0x0fc9,	// (0x0006dea0) main_video_pane_g7

0x9f1f,	// (0x00076df6) main_camera2_pane_t7_ParamLimits

0x9f1f,	// (0x00076df6) main_camera2_pane_t7

0xaa75,	// (0x0007794c) scroll_pane_cp025_ParamLimits

0xaa75,	// (0x0007794c) scroll_pane_cp025

0xaa89,	// (0x00077960) scroll_pane_cp026_ParamLimits

0xaa89,	// (0x00077960) scroll_pane_cp026

0xaa98,	// (0x0007796f) wml_content_pane_ParamLimits

0x9597,	// (0x0007646e) main_touch_calib_pane

0x463d,	// (0x00071514) main_touch_calib_pane_g1

0x464f,	// (0x00071526) main_touch_calib_pane_g2

0x4661,	// (0x00071538) main_touch_calib_pane_g3

0x4673,	// (0x0007154a) main_touch_calib_pane_g4

0x0003,

0xf75c,	// (0x0007c633) main_touch_calib_pane_g

0x4685,	// (0x0007155c) main_touch_calib_pane_t1

0x469f,	// (0x00071576) main_touch_calib_pane_t2

0x0004,

0xf765,	// (0x0007c63c) main_touch_calib_pane_t

0xb1a5,	// (0x0007807c) mup_progress_pane_cp02

0xb1c4,	// (0x0007809b) navi_pane_g1

0xb226,	// (0x000780fd) navi_pane_mp_t3

0x95f0,	// (0x000764c7) main_mp3_pane_ParamLimits

0x3a91,	// (0x00070968) navi_pane_ParamLimits

0xce91,	// (0x00079d68) main_mp3_pane_g1_ParamLimits

0x456b,	// (0x00071442) main_mp3_pane_g2_ParamLimits

0x4577,	// (0x0007144e) main_mp3_pane_g3_ParamLimits

0x4577,	// (0x0007144e) main_mp3_pane_g3

0x4585,	// (0x0007145c) main_mp3_pane_g4_ParamLimits

0x4585,	// (0x0007145c) main_mp3_pane_g4

0xcec1,	// (0x00079d98) main_mp3_pane_g5_ParamLimits

0xcec1,	// (0x00079d98) main_mp3_pane_g5

0xcecf,	// (0x00079da6) main_mp3_pane_g6_ParamLimits

0xcecf,	// (0x00079da6) main_mp3_pane_g6

0xcedc,	// (0x00079db3) main_mp3_pane_g7_ParamLimits

0xcedc,	// (0x00079db3) main_mp3_pane_g7

0xcee8,	// (0x00079dbf) main_mp3_pane_g8_ParamLimits

0xcee8,	// (0x00079dbf) main_mp3_pane_g8

0xf73e,	// (0x0007c615) main_mp3_pane_g_ParamLimits

0x4591,	// (0x00071468) main_mp3_pane_t2

0x459f,	// (0x00071476) main_mp3_pane_t3

0xcf02,	// (0x00079dd9) main_mp3_pane_t4

0xcf10,	// (0x00079de7) main_mp3_pane_t5

0x0005,

0xf74f,	// (0x0007c626) main_mp3_pane_t

0xcf1e,	// (0x00079df5) mup_progress_pane_cp01

0xf0cb,	// (0x0007bfa2) aid_zoom_text_secondary2

0xcd14,	// (0x00079beb) list_cale_ev2_pane

0xcd1c,	// (0x00079bf3) scroll_pane_cp023_ParamLimits

0x46f9,	// (0x000715d0) field_cale_ev2_pane_ParamLimits

0x46f9,	// (0x000715d0) field_cale_ev2_pane

0x471d,	// (0x000715f4) field_cale_ev2_pane_g1_ParamLimits

0x471d,	// (0x000715f4) field_cale_ev2_pane_g1

0x4729,	// (0x00071600) field_cale_ev2_pane_g2_ParamLimits

0x4729,	// (0x00071600) field_cale_ev2_pane_g2

0x4741,	// (0x00071618) field_cale_ev2_pane_g3_ParamLimits

0x4741,	// (0x00071618) field_cale_ev2_pane_g3

0x0003,

0xf770,	// (0x0007c647) field_cale_ev2_pane_g_ParamLimits

0xf770,	// (0x0007c647) field_cale_ev2_pane_g

0x4759,	// (0x00071630) field_cale_ev2_pane_t1_ParamLimits

0x4759,	// (0x00071630) field_cale_ev2_pane_t1

0x4770,	// (0x00071647) field_cale_ev2_pane_t2_ParamLimits

0x4770,	// (0x00071647) field_cale_ev2_pane_t2

0x0001,

0xf779,	// (0x0007c650) field_cale_ev2_pane_t_ParamLimits

0xf779,	// (0x0007c650) field_cale_ev2_pane_t

0x2f12,	// (0x0006fde9) main_postcard_pane_g5_ParamLimits

0x2f12,	// (0x0006fde9) main_postcard_pane_g5

0x2f28,	// (0x0006fdff) main_postcard_pane_g6_ParamLimits

0x2f28,	// (0x0006fdff) main_postcard_pane_g6

0x0d75,	// (0x0006dc4c) camera2_autofocus_pane_cp_ParamLimits

0x0d75,	// (0x0006dc4c) camera2_autofocus_pane_cp

0x95f0,	// (0x000764c7) main_mup3_pane

0x47a5,	// (0x0007167c) main_mup3_pane_g1_ParamLimits

0x47a5,	// (0x0007167c) main_mup3_pane_g1

0x47c7,	// (0x0007169e) main_mup3_pane_g2_ParamLimits

0x47c7,	// (0x0007169e) main_mup3_pane_g2

0x484a,	// (0x00071721) main_mup3_pane_g3_ParamLimits

0x484a,	// (0x00071721) main_mup3_pane_g3

0x4892,	// (0x00071769) main_mup3_pane_g4_ParamLimits

0x4892,	// (0x00071769) main_mup3_pane_g4

0x48d8,	// (0x000717af) main_mup3_pane_g5_ParamLimits

0x48d8,	// (0x000717af) main_mup3_pane_g5

0x4920,	// (0x000717f7) main_mup3_pane_g6_ParamLimits

0x4920,	// (0x000717f7) main_mup3_pane_g6

0xcf26,	// (0x00079dfd) main_mup3_pane_g7_ParamLimits

0xcf26,	// (0x00079dfd) main_mup3_pane_g7

0x0007,

0xf789,	// (0x0007c660) main_mup3_pane_g_ParamLimits

0xf789,	// (0x0007c660) main_mup3_pane_g

0x49a0,	// (0x00071877) main_mup3_pane_t1_ParamLimits

0x49a0,	// (0x00071877) main_mup3_pane_t1

0x4a0e,	// (0x000718e5) main_mup3_pane_t2_ParamLimits

0x4a0e,	// (0x000718e5) main_mup3_pane_t2

0x4ae4,	// (0x000719bb) main_mup3_pane_t4_ParamLimits

0x4ae4,	// (0x000719bb) main_mup3_pane_t4

0x4b42,	// (0x00071a19) main_mup3_pane_t5_ParamLimits

0x4b42,	// (0x00071a19) main_mup3_pane_t5

0x4bfc,	// (0x00071ad3) main_mup3_pane_t6_ParamLimits

0x4bfc,	// (0x00071ad3) main_mup3_pane_t6

0x0005,

0xf79a,	// (0x0007c671) main_mup3_pane_t_ParamLimits

0xf79a,	// (0x0007c671) main_mup3_pane_t

0x4cb4,	// (0x00071b8b) mup3_progress_pane_ParamLimits

0x4cb4,	// (0x00071b8b) mup3_progress_pane

0x4d46,	// (0x00071c1d) popup_mup3_control_window_ParamLimits

0x4d46,	// (0x00071c1d) popup_mup3_control_window

0xcf34,	// (0x00079e0b) popup_mup3_text_window

0x4d7c,	// (0x00071c53) mup3_progress_pane_t1

0x4d9a,	// (0x00071c71) mup3_progress_pane_t2

0xcf3c,	// (0x00079e13) mup3_progress_pane_t3

0x0002,

0xf7a7,	// (0x0007c67e) mup3_progress_pane_t

0xcf59,	// (0x00079e30) mup_progress_pane_cp03

0x9597,	// (0x0007646e) bg_tb_trans_pane_cp04

0x4db8,	// (0x00071c8f) mup3_volume_pane

0x4dc0,	// (0x00071c97) popup_mup3_control_window_g1

0x4dc9,	// (0x00071ca0) mup3_volume_pane_g1

0x4dd2,	// (0x00071ca9) mup3_volume_pane_g2

0x4ddb,	// (0x00071cb2) mup3_volume_pane_g3

0x0002,

0xf7ae,	// (0x0007c685) mup3_volume_pane_g

0x9597,	// (0x0007646e) bg_tb_trans_pane_cp03

0xcf69,	// (0x00079e40) popup_mup3_text_window_g1

0xcf71,	// (0x00079e48) popup_mup3_text_window_t1

0xa793,	// (0x0007766a) list_calc_item_pane_g1_ParamLimits

0xc9d6,	// (0x000798ad) mup_volume_pane_cp_g1

0x46b9,	// (0x00071590) main_touch_calib_pane_t3

0x46cd,	// (0x000715a4) main_touch_calib_pane_t4

0x46e3,	// (0x000715ba) main_touch_calib_pane_t5

0x95a1,	// (0x00076478) aid_cell_size_toolbar2

0x95a9,	// (0x00076480) aid_popup3_width_pane

0xfe40,	// (0x0006cd17) aid_zoom_text_msg_primary

0x0d4a,	// (0x0006dc21) vorec_t7

0xa757,	// (0x0007762e) bg_calc_paper_pane_g1_ParamLimits

0xa763,	// (0x0007763a) bg_calc_paper_pane_g2_ParamLimits

0xa76f,	// (0x00077646) bg_calc_paper_pane_g3_ParamLimits

0xa77b,	// (0x00077652) bg_calc_paper_pane_g4_ParamLimits

0xa787,	// (0x0007765e) bg_calc_paper_pane_g5_ParamLimits

0x0400,	// (0x0006d2d7) bg_calc_paper_pane_g6_ParamLimits

0x0413,	// (0x0006d2ea) bg_calc_paper_pane_g7_ParamLimits

0x0426,	// (0x0006d2fd) bg_calc_paper_pane_g8_ParamLimits

0xf161,	// (0x0007c038) bg_calc_paper_pane_g_ParamLimits

0x0437,	// (0x0006d30e) calc_bg_paper_pane_g9_ParamLimits

0x0ed7,	// (0x0006ddae) image_qvga_pane_ParamLimits

0x0ed7,	// (0x0006ddae) image_qvga_pane

0x9c6c,	// (0x00076b43) bg_popup_sub_pane_cp04_ParamLimits

0xb47c,	// (0x00078353) popup_mup_playback_window_g1_ParamLimits

0xb488,	// (0x0007835f) popup_mup_playback_window_t1_ParamLimits

0xb49d,	// (0x00078374) popup_mup_playback_window_t2_ParamLimits

0xf4ed,	// (0x0007c3c4) popup_mup_playback_window_t_ParamLimits

0x41ad,	// (0x00071084) main_mup2_pane_g3_ParamLimits

0x41ad,	// (0x00071084) main_mup2_pane_g3

0x12b9,	// (0x0006e190) popup_toolbar_window_cp04

0xba3e,	// (0x00078915) popup_call2_audio_second_window_g3_ParamLimits

0xba3e,	// (0x00078915) popup_call2_audio_second_window_g3

0xbe48,	// (0x00078d1f) popup_call2_audio_first_window_g4_ParamLimits

0xbe48,	// (0x00078d1f) popup_call2_audio_first_window_g4

0xc4c7,	// (0x0007939e) popup_call2_audio_in_window_g4_ParamLimits

0xc4c7,	// (0x0007939e) popup_call2_audio_in_window_g4

0x3057,	// (0x0006ff2e) aid_area_sk_bg_cut_ParamLimits

0x3057,	// (0x0006ff2e) aid_area_sk_bg_cut

0xb4b2,	// (0x00078389) aid_area_sk_bg_cut_2_ParamLimits

0xb4b2,	// (0x00078389) aid_area_sk_bg_cut_2

0x44b9,	// (0x00071390) aid_placing_details_win

0x44c1,	// (0x00071398) aid_placing_details_win_2

0xcdd3,	// (0x00079caa) camera2_autofocus_pane_g1_ParamLimits

0xffe9,	// (0x0006cec0) popup_fixed_preview_cale_window_ParamLimits

0xffe9,	// (0x0006cec0) popup_fixed_preview_cale_window

0xb275,	// (0x0007814c) navi_slider_pane_g3

0xb27e,	// (0x00078155) navi_slider_pane_g4

0xb287,	// (0x0007815e) navi_slider_pane_g5

0xb275,	// (0x0007814c) navi_slider_pane_g6

0x9e61,	// (0x00076d38) navi_slider_pane_g7

0xb3aa,	// (0x00078281) mup_scale_pane_g3

0xb3b3,	// (0x0007828a) mup_scale_pane_g4

0xb3bc,	// (0x00078293) mup_scale_pane_g5

0x2d1f,	// (0x0006fbf6) mup_scale_pane_g6

0x2d28,	// (0x0006fbff) mup_scale_pane_g7

0xb275,	// (0x0007814c) cams2_slider_pane_g3

0xca60,	// (0x00079937) cams2_slider_pane_g4

0x9f85,	// (0x00076e5c) cams2_slider_pane_g5

0xb275,	// (0x0007814c) cams2_slider_pane_g6

0x9f8d,	// (0x00076e64) cams2_slider_pane_g7

0xcc91,	// (0x00079b68) camera2_autofocus_pane_cp_g1

0xc82c,	// (0x00079703) bg_popup_preview_window_pane_cp02_ParamLimits

0xc82c,	// (0x00079703) bg_popup_preview_window_pane_cp02

0xcf7f,	// (0x00079e56) list_fp_cale_pane_ParamLimits

0xcf7f,	// (0x00079e56) list_fp_cale_pane

0xcf8b,	// (0x00079e62) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf8b,	// (0x00079e62) popup_fixed_preview_cale_window_t1

0x4de4,	// (0x00071cbb) popup_fixed_preview_cale_window_t2_ParamLimits

0x4de4,	// (0x00071cbb) popup_fixed_preview_cale_window_t2

0x4df9,	// (0x00071cd0) popup_fixed_preview_cale_window_t3_ParamLimits

0x4df9,	// (0x00071cd0) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b5,	// (0x0007c68c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b5,	// (0x0007c68c) popup_fixed_preview_cale_window_t

0x4e0e,	// (0x00071ce5) list_single_fp_cale_pane_ParamLimits

0x4e0e,	// (0x00071ce5) list_single_fp_cale_pane

0xcfa9,	// (0x00079e80) list_single_fp_cale_pane_g1_ParamLimits

0xcfa9,	// (0x00079e80) list_single_fp_cale_pane_g1

0xcfb5,	// (0x00079e8c) list_single_fp_cale_pane_g2_ParamLimits

0xcfb5,	// (0x00079e8c) list_single_fp_cale_pane_g2

0x0002,

0xf7bc,	// (0x0007c693) list_single_fp_cale_pane_g_ParamLimits

0xf7bc,	// (0x0007c693) list_single_fp_cale_pane_g

0xcfce,	// (0x00079ea5) list_single_fp_cale_pane_t1_ParamLimits

0xcfce,	// (0x00079ea5) list_single_fp_cale_pane_t1

0xcfe0,	// (0x00079eb7) list_single_fp_cale_pane_t2_ParamLimits

0xcfe0,	// (0x00079eb7) list_single_fp_cale_pane_t2

0x0001,

0xf7c3,	// (0x0007c69a) list_single_fp_cale_pane_t_ParamLimits

0xf7c3,	// (0x0007c69a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9597,	// (0x0007646e) main_dialer_pane

0x4e23,	// (0x00071cfa) aid_cell_size_keypad

0x4e2d,	// (0x00071d04) dialer_ne_pane

0x4e37,	// (0x00071d0e) grid_dialer_command_1_pane

0x4e3f,	// (0x00071d16) grid_dialer_command_2_pane

0x4e47,	// (0x00071d1e) grid_dialer_keypad_pane

0x4e59,	// (0x00071d30) bg_popup_call_pane_cp06_ParamLimits

0x4e59,	// (0x00071d30) bg_popup_call_pane_cp06

0x4e65,	// (0x00071d3c) dialer_ne_clear_pane_ParamLimits

0x4e65,	// (0x00071d3c) dialer_ne_clear_pane

0xd013,	// (0x00079eea) dialer_ne_pane_g1

0xd01b,	// (0x00079ef2) dialer_ne_pane_t1_ParamLimits

0xd01b,	// (0x00079ef2) dialer_ne_pane_t1

0x4e71,	// (0x00071d48) dialer_ne_pane_t2_ParamLimits

0x4e71,	// (0x00071d48) dialer_ne_pane_t2

0x4e9b,	// (0x00071d72) dialer_ne_pane_t3_ParamLimits

0x4e9b,	// (0x00071d72) dialer_ne_pane_t3

0x0002,

0xf7c8,	// (0x0007c69f) dialer_ne_pane_t_ParamLimits

0xf7c8,	// (0x0007c69f) dialer_ne_pane_t

0x4ecb,	// (0x00071da2) dialer_ne_pane_t3_copy1_ParamLimits

0x4ecb,	// (0x00071da2) dialer_ne_pane_t3_copy1

0x4efa,	// (0x00071dd1) cell_dialer_keypad_pane_ParamLimits

0x4efa,	// (0x00071dd1) cell_dialer_keypad_pane

0x4f11,	// (0x00071de8) cell_dialer_command_1_pane_ParamLimits

0x4f11,	// (0x00071de8) cell_dialer_command_1_pane

0x4f27,	// (0x00071dfe) cell_dialer_command_2_pane_ParamLimits

0x4f27,	// (0x00071dfe) cell_dialer_command_2_pane

0xd02d,	// (0x00079f04) bg_button_pane_cp02_ParamLimits

0xd02d,	// (0x00079f04) bg_button_pane_cp02

0x4f36,	// (0x00071e0d) cell_dialer_keypad_pane_g1_ParamLimits

0x4f36,	// (0x00071e0d) cell_dialer_keypad_pane_g1

0xd02d,	// (0x00079f04) bg_button_pane_cp03_ParamLimits

0xd02d,	// (0x00079f04) bg_button_pane_cp03

0x4f4b,	// (0x00071e22) cell_dialer_command_1_pane_g1_ParamLimits

0x4f4b,	// (0x00071e22) cell_dialer_command_1_pane_g1

0xd039,	// (0x00079f10) bg_button_pane_cp04

0x4f5f,	// (0x00071e36) cell_dialer_command_2_pane_g1

0xb264,	// (0x0007813b) bg_button_pane_cp06

0xd041,	// (0x00079f18) dialer_ne_clear_pane_g1

0x27f1,	// (0x0006f6c8) navi_pane_g2

0x281f,	// (0x0006f6f6) navi_pane_g3

0x0002,

0xf3f0,	// (0x0007c2c7) navi_pane_g

0x284a,	// (0x0006f721) navi_pane_mv_g2

0x2871,	// (0x0006f748) navi_pane_mv_g5

0x2879,	// (0x0006f750) navi_pane_mv_t1

0xa74b,	// (0x00077622) main_clock2_pane

0x4faa,	// (0x00071e81) main_clock2_list_pane_ParamLimits

0x4faa,	// (0x00071e81) main_clock2_list_pane

0x4fe2,	// (0x00071eb9) main_clock2_pane_t1_ParamLimits

0x4fe2,	// (0x00071eb9) main_clock2_pane_t1

0x501e,	// (0x00071ef5) main_clock2_pane_t2_ParamLimits

0x501e,	// (0x00071ef5) main_clock2_pane_t2

0x0004,

0xf7cf,	// (0x0007c6a6) main_clock2_pane_t_ParamLimits

0xf7cf,	// (0x0007c6a6) main_clock2_pane_t

0x50be,	// (0x00071f95) popup_clock_analogue_window_cp03_ParamLimits

0x50be,	// (0x00071f95) popup_clock_analogue_window_cp03

0x50e5,	// (0x00071fbc) popup_clock_digital_window_cp02_ParamLimits

0x50e5,	// (0x00071fbc) popup_clock_digital_window_cp02

0x515e,	// (0x00072035) main_clock2_list_single_pane_ParamLimits

0x515e,	// (0x00072035) main_clock2_list_single_pane

0xb264,	// (0x0007813b) list_highlight_pane_cp05

0xd05d,	// (0x00079f34) main_clock2_list_single_pane_t1

0x12b9,	// (0x0006e190) popup_toolbar_window_cp04_ParamLimits

0x4528,	// (0x000713ff) camera2_autofocus_pane_g2_ParamLimits

0x4528,	// (0x000713ff) camera2_autofocus_pane_g2

0x4534,	// (0x0007140b) camera2_autofocus_pane_g3_ParamLimits

0x4534,	// (0x0007140b) camera2_autofocus_pane_g3

0x4540,	// (0x00071417) camera2_autofocus_pane_g4_ParamLimits

0x4540,	// (0x00071417) camera2_autofocus_pane_g4

0x454c,	// (0x00071423) camera2_autofocus_pane_g5_ParamLimits

0x454c,	// (0x00071423) camera2_autofocus_pane_g5

0x0004,

0xf718,	// (0x0007c5ef) camera2_autofocus_pane_g_ParamLimits

0xf718,	// (0x0007c5ef) camera2_autofocus_pane_g

0x4785,	// (0x0007165c) camera2_autofocus_pane_cp_g2

0x478d,	// (0x00071664) camera2_autofocus_pane_cp_g3

0x4795,	// (0x0007166c) camera2_autofocus_pane_cp_g4

0x479d,	// (0x00071674) camera2_autofocus_pane_cp_g5

0x0004,

0xf77e,	// (0x0007c655) camera2_autofocus_pane_cp_g

0x4e51,	// (0x00071d28) popup_dialer_spcha_window

0x9597,	// (0x0007646e) bg_popup_sub_pane_cp07

0xd06b,	// (0x00079f42) list_spcha_pane

0xd073,	// (0x00079f4a) list_single_spcha_pane_ParamLimits

0xd073,	// (0x00079f4a) list_single_spcha_pane

0x9597,	// (0x0007646e) list_highlight_pane_cp06

0xd084,	// (0x00079f5b) list_single_spcha_pane_t1

0xc271,	// (0x00079148) popup_call2_audio_out_window_g4_ParamLimits

0xc271,	// (0x00079148) popup_call2_audio_out_window_g4

0x9597,	// (0x0007646e) main_imed2_pane

0xc864,	// (0x0007973b) popup_imed_adjust2_window

0x38da,	// (0x000707b1) popup_imed_trans_window_ParamLimits

0x38da,	// (0x000707b1) popup_imed_trans_window

0xcac9,	// (0x000799a0) popup_blid_sat_info2_window_t1

0xcad7,	// (0x000799ae) popup_blid_sat_info2_window_t2

0x000a,

0xf6ad,	// (0x0007c584) popup_blid_sat_info2_window_t

0x5214,	// (0x000720eb) aid_size_cell_colour_35

0x5234,	// (0x0007210b) aid_size_cell_colour_112

0x5254,	// (0x0007212b) aid_size_cell_effect

0xc838,	// (0x0007970f) bg_tb_trans_pane_cp02

0xadc4,	// (0x00077c9b) heading_imed_pane

0x5274,	// (0x0007214b) listscroll_imed_pane

0xd092,	// (0x00079f69) heading_imed_pane_g1

0xd09a,	// (0x00079f71) heading_imed_pane_t1

0xd0a8,	// (0x00079f7f) grid_imed_colour_35_pane_ParamLimits

0xd0a8,	// (0x00079f7f) grid_imed_colour_35_pane

0x5280,	// (0x00072157) grid_imed_effect_pane

0xd0c4,	// (0x00079f9b) list_imed_aspect_pane

0x5295,	// (0x0007216c) scroll_pane_cp027_ParamLimits

0x5295,	// (0x0007216c) scroll_pane_cp027

0x52a6,	// (0x0007217d) cell_imed_effect_pane_ParamLimits

0x52a6,	// (0x0007217d) cell_imed_effect_pane

0xd0cc,	// (0x00079fa3) cell_imed_colour_pane_ParamLimits

0xd0cc,	// (0x00079fa3) cell_imed_colour_pane

0xd116,	// (0x00079fed) cell_imed_colour_pane_g1_ParamLimits

0xd116,	// (0x00079fed) cell_imed_colour_pane_g1

0xd127,	// (0x00079ffe) hgihlgiht_grid_pane_cp016_ParamLimits

0xd127,	// (0x00079ffe) hgihlgiht_grid_pane_cp016

0x52d1,	// (0x000721a8) cell_imed_effect_pane_g1

0x52d9,	// (0x000721b0) grid_highlight_pane_cp017

0xd138,	// (0x0007a00f) list_imed_single_pane_ParamLimits

0xd138,	// (0x0007a00f) list_imed_single_pane

0x9597,	// (0x0007646e) list_highlight_pane_cp07

0xd14c,	// (0x0007a023) list_imed_aspect_pane_comp1_t1

0xc838,	// (0x0007970f) bg_tb_trans_pane_cp05

0xd16e,	// (0x0007a045) popup_imed_adjust2_window_g1

0xd195,	// (0x0007a06c) popup_imed_adjust2_window_t1

0xd1ad,	// (0x0007a084) slider_imed_adjust_pane

0xd1c1,	// (0x0007a098) slider_imed_adjust_pane_g1

0xd1d1,	// (0x0007a0a8) slider_imed_adjust_pane_g2

0xd1e1,	// (0x0007a0b8) slider_imed_adjust_pane_g3

0xd1f2,	// (0x0007a0c9) slider_imed_adjust_pane_g4

0x0003,

0xf7ec,	// (0x0007c6c3) slider_imed_adjust_pane_g

0x52e2,	// (0x000721b9) aid_size_cell_clipart2

0x52ee,	// (0x000721c5) grid_imed_clipart_pane

0xd203,	// (0x0007a0da) scroll_pane_cp031

0x52f8,	// (0x000721cf) cell_imed_clipart_pane_ParamLimits

0x52f8,	// (0x000721cf) cell_imed_clipart_pane

0x5315,	// (0x000721ec) cell_imed_clipart_pane_g1

0x9597,	// (0x0007646e) grid_highlight_pane_cp014

0x4fbf,	// (0x00071e96) main_clock2_pane_g1_ParamLimits

0x4fbf,	// (0x00071e96) main_clock2_pane_g1

0x5105,	// (0x00071fdc) aid_call2_pane_cp10

0x5117,	// (0x00071fee) aid_call_pane_cp10

0xb199,	// (0x00078070) popup_clock_analogue_window_cp10_g1

0xb199,	// (0x00078070) popup_clock_analogue_window_cp10_g2

0x5129,	// (0x00072000) popup_clock_analogue_window_cp10_g3

0x5129,	// (0x00072000) popup_clock_analogue_window_cp10_g4

0xb199,	// (0x00078070) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7da,	// (0x0007c6b1) popup_clock_analogue_window_cp10_g

0x513f,	// (0x00072016) popup_clock_analogue_window_cp10_t1

0x5170,	// (0x00072047) clock_digital_number_pane_cp10_ParamLimits

0x5170,	// (0x00072047) clock_digital_number_pane_cp10

0x518a,	// (0x00072061) clock_digital_number_pane_cp11_ParamLimits

0x518a,	// (0x00072061) clock_digital_number_pane_cp11

0x51a4,	// (0x0007207b) clock_digital_number_pane_cp12_ParamLimits

0x51a4,	// (0x0007207b) clock_digital_number_pane_cp12

0x51be,	// (0x00072095) clock_digital_number_pane_cp13_ParamLimits

0x51be,	// (0x00072095) clock_digital_number_pane_cp13

0x51d8,	// (0x000720af) clock_digital_separator_pane_cp10_ParamLimits

0x51d8,	// (0x000720af) clock_digital_separator_pane_cp10

0x51f2,	// (0x000720c9) popup_clock_digital_window_cp02_t1_ParamLimits

0x51f2,	// (0x000720c9) popup_clock_digital_window_cp02_t1

0x9c64,	// (0x00076b3b) clock_digital_number_pane_cp10_g1

0x9c64,	// (0x00076b3b) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f5,	// (0x0007c6cc) clock_digital_number_pane_cp10_g

0x9c64,	// (0x00076b3b) clock_digital_separator_pane_cp10_g1

0x9c64,	// (0x00076b3b) clock_digital_separator_pane_g2_cp10

0xb234,	// (0x0007810b) navi_pane_vded_g4

0xb23d,	// (0x00078114) navi_pane_vded_g5

0xb246,	// (0x0007811d) navi_pane_vded_t1

0x9597,	// (0x0007646e) main_vded_pane

0x531e,	// (0x000721f5) main_vded_pane_g1

0x532a,	// (0x00072201) main_vded_pane_g2

0x5336,	// (0x0007220d) main_vded_pane_g3

0x0002,

0xf7fa,	// (0x0007c6d1) main_vded_pane_g

0x5342,	// (0x00072219) main_vded_pane_t1

0x5350,	// (0x00072227) main_vded_pane_t2

0x0001,

0xf801,	// (0x0007c6d8) main_vded_pane_t

0x535e,	// (0x00072235) vded_slider_pane

0x5368,	// (0x0007223f) vded_video_pane

0xd20b,	// (0x0007a0e2) vded_video_pane_g1

0x5372,	// (0x00072249) vded_video_pane_g2

0xcc91,	// (0x00079b68) vded_video_pane_g3

0x0002,

0xf806,	// (0x0007c6dd) vded_video_pane_g

0xd215,	// (0x0007a0ec) vded_slider_pane_g1

0xc9d6,	// (0x000798ad) vded_slider_pane_g2

0xd21e,	// (0x0007a0f5) vded_slider_pane_g3

0xd227,	// (0x0007a0fe) vded_slider_pane_g4

0xd230,	// (0x0007a107) vded_slider_pane_g5

0x0004,

0xf80d,	// (0x0007c6e4) vded_slider_pane_g

0x4d30,	// (0x00071c07) mup3_rocker_pane_ParamLimits

0x4d30,	// (0x00071c07) mup3_rocker_pane

0x537b,	// (0x00072252) mup3_control_keys_pane_g1

0x5383,	// (0x0007225a) mup3_control_keys_pane_g2

0x538b,	// (0x00072262) mup3_control_keys_pane_g3

0x5393,	// (0x0007226a) mup3_control_keys_pane_g4

0x0003,

0xf818,	// (0x0007c6ef) mup3_control_keys_pane_g

0x0020,	// (0x0006cef7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0020,	// (0x0006cef7) popup_toolbar2_fixed_window_cp01

0x4d66,	// (0x00071c3d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4d66,	// (0x00071c3d) popup_toolbar2_fixed_window_cp02

0xbbb0,	// (0x00078a87) popup_call2_audio_second_window_t4_ParamLimits

0xbbb0,	// (0x00078a87) popup_call2_audio_second_window_t4

0xc0de,	// (0x00078fb5) popup_call2_audio_first_window_t6_ParamLimits

0xc0de,	// (0x00078fb5) popup_call2_audio_first_window_t6

0xc374,	// (0x0007924b) popup_call2_audio_out_window_t6_ParamLimits

0xc374,	// (0x0007924b) popup_call2_audio_out_window_t6

0x9597,	// (0x0007646e) main_vitu_pane

0x53a3,	// (0x0007227a) aid_size_cell_itu_ParamLimits

0x53a3,	// (0x0007227a) aid_size_cell_itu

0x95f0,	// (0x000764c7) bg_popup_window_pane_cp08_ParamLimits

0x95f0,	// (0x000764c7) bg_popup_window_pane_cp08

0x53b9,	// (0x00072290) field_vitu_entry_pane_ParamLimits

0x53b9,	// (0x00072290) field_vitu_entry_pane

0x53d0,	// (0x000722a7) grid_vitu_function_pane_ParamLimits

0x53d0,	// (0x000722a7) grid_vitu_function_pane

0x53eb,	// (0x000722c2) grid_vitu_itu_pane_ParamLimits

0x53eb,	// (0x000722c2) grid_vitu_itu_pane

0x5409,	// (0x000722e0) cell_vitu_itu_pane_ParamLimits

0x5409,	// (0x000722e0) cell_vitu_itu_pane

0x542f,	// (0x00072306) cell_vitu_function_pane_ParamLimits

0x542f,	// (0x00072306) cell_vitu_function_pane

0x95f0,	// (0x000764c7) bg_popup_sub_pane_cp08_ParamLimits

0x95f0,	// (0x000764c7) bg_popup_sub_pane_cp08

0x544a,	// (0x00072321) field_vitu_entry_pane_t1_ParamLimits

0x544a,	// (0x00072321) field_vitu_entry_pane_t1

0xd251,	// (0x0007a128) field_vitu_entry_pane_t2_ParamLimits

0xd251,	// (0x0007a128) field_vitu_entry_pane_t2

0x0001,

0xf826,	// (0x0007c6fd) field_vitu_entry_pane_t_ParamLimits

0xf826,	// (0x0007c6fd) field_vitu_entry_pane_t

0xd26e,	// (0x0007a145) bg_button_pane_cp05_ParamLimits

0xd26e,	// (0x0007a145) bg_button_pane_cp05

0x546a,	// (0x00072341) cell_vitu_itu_pane_g1

0x5482,	// (0x00072359) cell_vitu_itu_pane_t1_ParamLimits

0x5482,	// (0x00072359) cell_vitu_itu_pane_t1

0x5494,	// (0x0007236b) cell_vitu_itu_pane_t2_ParamLimits

0x5494,	// (0x0007236b) cell_vitu_itu_pane_t2

0x0002,

0xf82b,	// (0x0007c702) cell_vitu_itu_pane_t_ParamLimits

0xf82b,	// (0x0007c702) cell_vitu_itu_pane_t

0xd27c,	// (0x0007a153) bg_button_pane_cp07

0x54c9,	// (0x000723a0) cell_vitu_function_pane_g1

0x9ce7,	// (0x00076bbe) main_calc_pane_g1

0xfe34,	// (0x0006cd0b) aid_visual_content_pane

0x9597,	// (0x0007646e) main_vradio_pane

0x54d2,	// (0x000723a9) main_vradio_pane_g1_ParamLimits

0x54d2,	// (0x000723a9) main_vradio_pane_g1

0xd286,	// (0x0007a15d) main_vradio_pane_g2_ParamLimits

0xd286,	// (0x0007a15d) main_vradio_pane_g2

0x0001,

0xf832,	// (0x0007c709) main_vradio_pane_g_ParamLimits

0xf832,	// (0x0007c709) main_vradio_pane_g

0x54e9,	// (0x000723c0) main_vradio_pane_t1_ParamLimits

0x54e9,	// (0x000723c0) main_vradio_pane_t1

0x54fe,	// (0x000723d5) main_vradio_pane_t2_ParamLimits

0x54fe,	// (0x000723d5) main_vradio_pane_t2

0xd293,	// (0x0007a16a) main_vradio_pane_t3_ParamLimits

0xd293,	// (0x0007a16a) main_vradio_pane_t3

0x0002,

0xf837,	// (0x0007c70e) main_vradio_pane_t_ParamLimits

0xf837,	// (0x0007c70e) main_vradio_pane_t

0x5513,	// (0x000723ea) vradio_rocker_control_pane_ParamLimits

0x5513,	// (0x000723ea) vradio_rocker_control_pane

0x5525,	// (0x000723fc) vradio_station_info_pane_ParamLimits

0x5525,	// (0x000723fc) vradio_station_info_pane

0xd2a7,	// (0x0007a17e) vradio_frequency_info_pane_ParamLimits

0xd2a7,	// (0x0007a17e) vradio_frequency_info_pane

0xcc91,	// (0x00079b68) vradio_station_info_pane_g1

0xd2b6,	// (0x0007a18d) vradio_station_info_pane_t1_ParamLimits

0xd2b6,	// (0x0007a18d) vradio_station_info_pane_t1

0xd2d8,	// (0x0007a1af) vradio_station_info_pane_t2_ParamLimits

0xd2d8,	// (0x0007a1af) vradio_station_info_pane_t2

0x0001,

0xf83e,	// (0x0007c715) vradio_station_info_pane_t_ParamLimits

0xf83e,	// (0x0007c715) vradio_station_info_pane_t

0xd2ea,	// (0x0007a1c1) vradio_tuning_pane

0xd2f2,	// (0x0007a1c9) vradio_rocker_control_pane_g1

0xd2fa,	// (0x0007a1d1) vradio_rocker_control_pane_g2

0xd302,	// (0x0007a1d9) vradio_rocker_control_pane_g3

0xd30a,	// (0x0007a1e1) vradio_rocker_control_pane_g4

0xd312,	// (0x0007a1e9) vradio_rocker_control_pane_g5

0x0004,

0xf843,	// (0x0007c71a) vradio_rocker_control_pane_g

0x5535,	// (0x0007240c) vradio_frequency_info_pane_g1

0xd31a,	// (0x0007a1f1) vradio_frequency_info_pane_t1_ParamLimits

0xd31a,	// (0x0007a1f1) vradio_frequency_info_pane_t1

0x553f,	// (0x00072416) vradio_tuning_pane_g1

0x554a,	// (0x00072421) vradio_tuning_pane_t1

0x95bd,	// (0x00076494) area_side_right_pane_ParamLimits

0x95bd,	// (0x00076494) area_side_right_pane

0xc7f3,	// (0x000796ca) status_small_pane_g1

0xc7fb,	// (0x000796d2) status_small_pane_g2

0xc804,	// (0x000796db) status_small_pane_g3

0xc80d,	// (0x000796e4) status_small_pane_g4

0x0003,

0xf603,	// (0x0007c4da) status_small_pane_g

0xc816,	// (0x000796ed) status_small_pane_t1

0x9597,	// (0x0007646e) main_video3_pane

0xd32e,	// (0x0007a205) cams_zoom_vslider_pane

0xd336,	// (0x0007a20d) image3_wide_pane_ParamLimits

0xd336,	// (0x0007a20d) image3_wide_pane

0xd350,	// (0x0007a227) image3_wide_small_pane

0xd35c,	// (0x0007a233) main_video3_pane_g1_ParamLimits

0xd35c,	// (0x0007a233) main_video3_pane_g1

0xd378,	// (0x0007a24f) main_video3_pane_g2_ParamLimits

0xd378,	// (0x0007a24f) main_video3_pane_g2

0x0001,

0xf84e,	// (0x0007c725) main_video3_pane_g_ParamLimits

0xf84e,	// (0x0007c725) main_video3_pane_g

0xd394,	// (0x0007a26b) main_video3_pane_t1_ParamLimits

0xd394,	// (0x0007a26b) main_video3_pane_t1

0xd3bf,	// (0x0007a296) main_video3_pane_t2_ParamLimits

0xd3bf,	// (0x0007a296) main_video3_pane_t2

0xd3ec,	// (0x0007a2c3) main_video3_pane_t3_ParamLimits

0xd3ec,	// (0x0007a2c3) main_video3_pane_t3

0x0002,

0xf853,	// (0x0007c72a) main_video3_pane_t_ParamLimits

0xf853,	// (0x0007c72a) main_video3_pane_t

0xd419,	// (0x0007a2f0) cams_zoom_vslider_pane_g1

0xd422,	// (0x0007a2f9) cams_zoom_vslider_pane_g2

0x0001,

0xf85a,	// (0x0007c731) cams_zoom_vslider_pane_g

0xd42a,	// (0x0007a301) small_slider_vertical_pane

0xcc91,	// (0x00079b68) small_slider_vertical_pane_g1

0xcc91,	// (0x00079b68) small_slider_vertical_pane_g2

0xd432,	// (0x0007a309) small_slider_vertical_pane_g3

0x0002,

0xf85f,	// (0x0007c736) small_slider_vertical_pane_g

0x9597,	// (0x0007646e) main_hwr_training_pane

0xd43b,	// (0x0007a312) hwr_training_instruct_pane_ParamLimits

0xd43b,	// (0x0007a312) hwr_training_instruct_pane

0x5559,	// (0x00072430) hwr_training_navi_pane_ParamLimits

0x5559,	// (0x00072430) hwr_training_navi_pane

0x5578,	// (0x0007244f) hwr_training_write_pane_ParamLimits

0x5578,	// (0x0007244f) hwr_training_write_pane

0x9597,	// (0x0007646e) bg_frame_shadow_pane

0xd472,	// (0x0007a349) hwr_training_write_pane_g1

0xd47a,	// (0x0007a351) hwr_training_write_pane_g2

0xd482,	// (0x0007a359) hwr_training_write_pane_g3

0xd48a,	// (0x0007a361) hwr_training_write_pane_g4

0xd492,	// (0x0007a369) hwr_training_write_pane_g5

0xd49a,	// (0x0007a371) hwr_training_write_pane_g6

0xd4a2,	// (0x0007a379) hwr_training_write_pane_g7

0x0006,

0xf866,	// (0x0007c73d) hwr_training_write_pane_g

0x9fa2,	// (0x00076e79) hwr_training_navi_pane_g1_ParamLimits

0x9fa2,	// (0x00076e79) hwr_training_navi_pane_g1

0x9fb4,	// (0x00076e8b) hwr_training_navi_pane_g2_ParamLimits

0x9fb4,	// (0x00076e8b) hwr_training_navi_pane_g2

0x9fc6,	// (0x00076e9d) hwr_training_navi_pane_g3_ParamLimits

0x9fc6,	// (0x00076e9d) hwr_training_navi_pane_g3

0x9fd6,	// (0x00076ead) hwr_training_navi_pane_g4_ParamLimits

0x9fd6,	// (0x00076ead) hwr_training_navi_pane_g4

0x0004,

0xf875,	// (0x0007c74c) hwr_training_navi_pane_g_ParamLimits

0xf875,	// (0x0007c74c) hwr_training_navi_pane_g

0x9fe3,	// (0x00076eba) hwr_training_navi_pane_t1

0x55c0,	// (0x00072497) list_single_hwr_training_instruct_pane_ParamLimits

0x55c0,	// (0x00072497) list_single_hwr_training_instruct_pane

0xd4aa,	// (0x0007a381) list_single_hwr_training_instruct_pane_t1

0xcbd1,	// (0x00079aa8) bg_frame_shadow_pane_g1

0xd4b9,	// (0x0007a390) bg_frame_shadow_pane_g2

0xd4c1,	// (0x0007a398) bg_frame_shadow_pane_g3

0xd4c9,	// (0x0007a3a0) bg_frame_shadow_pane_g4

0xd4d1,	// (0x0007a3a8) bg_frame_shadow_pane_g5

0xd4d9,	// (0x0007a3b0) bg_frame_shadow_pane_g6

0xd4e1,	// (0x0007a3b8) bg_frame_shadow_pane_g7

0xa816,	// (0x000776ed) bg_frame_shadow_pane_g8

0x0007,

0xf880,	// (0x0007c757) bg_frame_shadow_pane_g

0x9597,	// (0x0007646e) main_video_tele_dialer_pane

0x55d5,	// (0x000724ac) aid_size_cell_video_keypad_ParamLimits

0x55d5,	// (0x000724ac) aid_size_cell_video_keypad

0x55ef,	// (0x000724c6) grid_video_dialer_keypad_pane_ParamLimits

0x55ef,	// (0x000724c6) grid_video_dialer_keypad_pane

0x563b,	// (0x00072512) video_down_pane_cp_ParamLimits

0x563b,	// (0x00072512) video_down_pane_cp

0x566b,	// (0x00072542) cell_video_dialer_keypad_pane_ParamLimits

0x566b,	// (0x00072542) cell_video_dialer_keypad_pane

0xd4e9,	// (0x0007a3c0) bg_button_pane_cp08_ParamLimits

0xd4e9,	// (0x0007a3c0) bg_button_pane_cp08

0x568f,	// (0x00072566) cell_video_dialer_keypad_pane_g1_ParamLimits

0x568f,	// (0x00072566) cell_video_dialer_keypad_pane_g1

0x4d1a,	// (0x00071bf1) mup3_rocker2_pane_ParamLimits

0x4d1a,	// (0x00071bf1) mup3_rocker2_pane

0xcc91,	// (0x00079b68) mup3_rocker2_pane_g1

0x37a7,	// (0x0007067e) main_dialer2_pane

0x9597,	// (0x0007646e) main_mp4_pane

0x9ff9,	// (0x00076ed0) main_mp4_pane_g1_ParamLimits

0x9ff9,	// (0x00076ed0) main_mp4_pane_g1

0x9ff9,	// (0x00076ed0) main_mp4_pane_g2_ParamLimits

0x9ff9,	// (0x00076ed0) main_mp4_pane_g2

0x56ca,	// (0x000725a1) main_mp4_pane_g3_ParamLimits

0x56ca,	// (0x000725a1) main_mp4_pane_g3

0xa007,	// (0x00076ede) main_mp4_pane_g4_ParamLimits

0xa007,	// (0x00076ede) main_mp4_pane_g4

0xa02f,	// (0x00076f06) main_mp4_pane_g5_ParamLimits

0xa02f,	// (0x00076f06) main_mp4_pane_g5

0x0005,

0xf8a0,	// (0x0007c777) main_mp4_pane_g_ParamLimits

0xf8a0,	// (0x0007c777) main_mp4_pane_g

0xa07f,	// (0x00076f56) main_mp4_pane_t1_ParamLimits

0xa07f,	// (0x00076f56) main_mp4_pane_t1

0xa0db,	// (0x00076fb2) main_mp4_pane_t2_ParamLimits

0xa0db,	// (0x00076fb2) main_mp4_pane_t2

0xd4f5,	// (0x0007a3cc) main_mp4_pane_t3_ParamLimits

0xd4f5,	// (0x0007a3cc) main_mp4_pane_t3

0xa12d,	// (0x00077004) main_mp4_pane_t4_ParamLimits

0xa12d,	// (0x00077004) main_mp4_pane_t4

0x0003,

0xf8ad,	// (0x0007c784) main_mp4_pane_t_ParamLimits

0xf8ad,	// (0x0007c784) main_mp4_pane_t

0xa16d,	// (0x00077044) mp4_progress_pane_ParamLimits

0xa16d,	// (0x00077044) mp4_progress_pane

0xa1b7,	// (0x0007708e) mp4_rocker_pane_ParamLimits

0xa1b7,	// (0x0007708e) mp4_rocker_pane

0xd51d,	// (0x0007a3f4) mp4_progress_pane_t1

0xd536,	// (0x0007a40d) mp4_progress_pane_t2

0x0001,

0xf8b6,	// (0x0007c78d) mp4_progress_pane_t

0xd54f,	// (0x0007a426) mup_progress_pane_cp04

0xdb48,	// (0x0007aa1f) mp4_rocker_pane_g1

0x5714,	// (0x000725eb) aid_cell_size_keypad2_ParamLimits

0x5714,	// (0x000725eb) aid_cell_size_keypad2

0x572a,	// (0x00072601) dialer2_ne_pane_ParamLimits

0x572a,	// (0x00072601) dialer2_ne_pane

0x5742,	// (0x00072619) grid_dialer2_keypad_pane_ParamLimits

0x5742,	// (0x00072619) grid_dialer2_keypad_pane

0xca70,	// (0x00079947) bg_popup_call_pane_cp07_ParamLimits

0xca70,	// (0x00079947) bg_popup_call_pane_cp07

0x575e,	// (0x00072635) dialer2_ne_pane_t1_ParamLimits

0x575e,	// (0x00072635) dialer2_ne_pane_t1

0x5799,	// (0x00072670) cell_dialer2_keypad_pane_ParamLimits

0x5799,	// (0x00072670) cell_dialer2_keypad_pane

0xd56d,	// (0x0007a444) bg_button_pane_pane_cp04_ParamLimits

0xd56d,	// (0x0007a444) bg_button_pane_pane_cp04

0x57bd,	// (0x00072694) cell_dialer2_keypad_pane_g1_ParamLimits

0x57bd,	// (0x00072694) cell_dialer2_keypad_pane_g1

0x11a0,	// (0x0006e077) aid_placing_vt_set_content_ParamLimits

0x11a0,	// (0x0006e077) aid_placing_vt_set_content

0x11c4,	// (0x0006e09b) aid_placing_vt_set_title_ParamLimits

0x11c4,	// (0x0006e09b) aid_placing_vt_set_title

0x9597,	// (0x0007646e) main_image3_pane

0x5883,	// (0x0007275a) area_side_right_pane_cp01_ParamLimits

0x5883,	// (0x0007275a) area_side_right_pane_cp01

0x9ff9,	// (0x00076ed0) main_image3_pane_g1_ParamLimits

0x9ff9,	// (0x00076ed0) main_image3_pane_g1

0x589c,	// (0x00072773) main_image3_pane_g2_ParamLimits

0x589c,	// (0x00072773) main_image3_pane_g2

0x58c4,	// (0x0007279b) main_image3_pane_g3_ParamLimits

0x58c4,	// (0x0007279b) main_image3_pane_g3

0x58ee,	// (0x000727c5) main_image3_pane_g4_ParamLimits

0x58ee,	// (0x000727c5) main_image3_pane_g4

0x0003,

0xf8c5,	// (0x0007c79c) main_image3_pane_g_ParamLimits

0xf8c5,	// (0x0007c79c) main_image3_pane_g

0x5918,	// (0x000727ef) main_image3_pane_t1_ParamLimits

0x5918,	// (0x000727ef) main_image3_pane_t1

0x5970,	// (0x00072847) main_image3_pane_t2_ParamLimits

0x5970,	// (0x00072847) main_image3_pane_t2

0x59c2,	// (0x00072899) main_image3_pane_t3_ParamLimits

0x59c2,	// (0x00072899) main_image3_pane_t3

0x0003,

0xf8ce,	// (0x0007c7a5) main_image3_pane_t_ParamLimits

0xf8ce,	// (0x0007c7a5) main_image3_pane_t

0x95f0,	// (0x000764c7) grid_sctrl_middle_pane_cp01_ParamLimits

0x95f0,	// (0x000764c7) grid_sctrl_middle_pane_cp01

0x5a4a,	// (0x00072921) cell_sctrl_middle_pane_cp01_ParamLimits

0x5a4a,	// (0x00072921) cell_sctrl_middle_pane_cp01

0x5a67,	// (0x0007293e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5a67,	// (0x0007293e) cell_sctrl_middle_pane_cp01_g1

0x9597,	// (0x0007646e) main_call4_pane

0x5a7c,	// (0x00072953) aid_size_button_call4_ParamLimits

0x5a7c,	// (0x00072953) aid_size_button_call4

0x5aaf,	// (0x00072986) call4_windows_pane_ParamLimits

0x5aaf,	// (0x00072986) call4_windows_pane

0x5ad1,	// (0x000729a8) grid_call4_button_pane_ParamLimits

0x5ad1,	// (0x000729a8) grid_call4_button_pane

0xd579,	// (0x0007a450) call4_windows_conf_pane

0x5afc,	// (0x000729d3) popup_call4_audio_first_window_ParamLimits

0x5afc,	// (0x000729d3) popup_call4_audio_first_window

0x5b28,	// (0x000729ff) popup_call4_audio_second_window_ParamLimits

0x5b28,	// (0x000729ff) popup_call4_audio_second_window

0xd5b6,	// (0x0007a48d) popup_call4_audio_wait_window_ParamLimits

0xd5b6,	// (0x0007a48d) popup_call4_audio_wait_window

0x5b3e,	// (0x00072a15) cell_call4_button_pane_ParamLimits

0x5b3e,	// (0x00072a15) cell_call4_button_pane

0x5b65,	// (0x00072a3c) bg_button_pane_cp09_ParamLimits

0x5b65,	// (0x00072a3c) bg_button_pane_cp09

0x5b71,	// (0x00072a48) cell_call4_button_pane_g1_ParamLimits

0x5b71,	// (0x00072a48) cell_call4_button_pane_g1

0x5b97,	// (0x00072a6e) cell_call4_button_pane_t1_ParamLimits

0x5b97,	// (0x00072a6e) cell_call4_button_pane_t1

0xd5fe,	// (0x0007a4d5) popup_call4_audio_conf_window_ParamLimits

0xd5fe,	// (0x0007a4d5) popup_call4_audio_conf_window

0x4d7c,	// (0x00071c53) mup3_progress_pane_t1_ParamLimits

0x4d9a,	// (0x00071c71) mup3_progress_pane_t2_ParamLimits

0xcf3c,	// (0x00079e13) mup3_progress_pane_t3_ParamLimits

0xf7a7,	// (0x0007c67e) mup3_progress_pane_t_ParamLimits

0xcf59,	// (0x00079e30) mup_progress_pane_cp03_ParamLimits

0x539b,	// (0x00072272) mup3_control_keys_pane_g4_copy1

0xa19b,	// (0x00077072) mp4_rocker2_pane_ParamLimits

0xa19b,	// (0x00077072) mp4_rocker2_pane

0xd618,	// (0x0007a4ef) mp4_rocker2_pane_g1

0xd620,	// (0x0007a4f7) mp4_rocker2_pane_g2

0xa20d,	// (0x000770e4) mp4_rocker2_pane_g3

0xa215,	// (0x000770ec) mp4_rocker2_pane_g4

0xa21d,	// (0x000770f4) mp4_rocker2_pane_g5

0x0004,

0xf8d7,	// (0x0007c7ae) mp4_rocker2_pane_g

0x9597,	// (0x0007646e) main_camera4_pane

0x9597,	// (0x0007646e) main_video4_pane

0x5609,	// (0x000724e0) main_video_tele_dialer_pane_t1_ParamLimits

0x5609,	// (0x000724e0) main_video_tele_dialer_pane_t1

0x5622,	// (0x000724f9) main_video_tele_dialer_pane_t2_ParamLimits

0x5622,	// (0x000724f9) main_video_tele_dialer_pane_t2

0x0001,

0xf891,	// (0x0007c768) main_video_tele_dialer_pane_t_ParamLimits

0xf891,	// (0x0007c768) main_video_tele_dialer_pane_t

0x5bd5,	// (0x00072aac) cam4_autofocus_pane_ParamLimits

0x5bd5,	// (0x00072aac) cam4_autofocus_pane

0x5beb,	// (0x00072ac2) cam4_image_uncrop_pane_ParamLimits

0x5beb,	// (0x00072ac2) cam4_image_uncrop_pane

0x5c04,	// (0x00072adb) cam4_indicators_pane_ParamLimits

0x5c04,	// (0x00072adb) cam4_indicators_pane

0x5c33,	// (0x00072b0a) main_camera4_pane_g1_ParamLimits

0x5c33,	// (0x00072b0a) main_camera4_pane_g1

0x5c45,	// (0x00072b1c) main_camera4_pane_g2_ParamLimits

0x5c45,	// (0x00072b1c) main_camera4_pane_g2

0x5c58,	// (0x00072b2f) main_camera4_pane_g3_ParamLimits

0x5c58,	// (0x00072b2f) main_camera4_pane_g3

0x5c6b,	// (0x00072b42) main_camera4_pane_g4_ParamLimits

0x5c6b,	// (0x00072b42) main_camera4_pane_g4

0x5c7e,	// (0x00072b55) main_camera4_pane_g5_ParamLimits

0x5c7e,	// (0x00072b55) main_camera4_pane_g5

0x0005,

0xf8e2,	// (0x0007c7b9) main_camera4_pane_g_ParamLimits

0xf8e2,	// (0x0007c7b9) main_camera4_pane_g

0x5ca2,	// (0x00072b79) main_camera4_pane_t1_ParamLimits

0x5ca2,	// (0x00072b79) main_camera4_pane_t1

0xa243,	// (0x0007711a) bg_tb_trans_pane_cp06

0xa259,	// (0x00077130) cam4_indicators_pane_g1

0xa26a,	// (0x00077141) cam4_indicators_pane_g2

0x0002,

0xf8fd,	// (0x0007c7d4) cam4_indicators_pane_g

0xa282,	// (0x00077159) cam4_indicators_pane_t1

0x5d06,	// (0x00072bdd) main_video4_pane_g1_ParamLimits

0x5d06,	// (0x00072bdd) main_video4_pane_g1

0x5d15,	// (0x00072bec) main_video4_pane_g2_ParamLimits

0x5d15,	// (0x00072bec) main_video4_pane_g2

0x5d24,	// (0x00072bfb) main_video4_pane_g3_ParamLimits

0x5d24,	// (0x00072bfb) main_video4_pane_g3

0x5d33,	// (0x00072c0a) main_video4_pane_g4_ParamLimits

0x5d33,	// (0x00072c0a) main_video4_pane_g4

0x0004,

0xf904,	// (0x0007c7db) main_video4_pane_g_ParamLimits

0xf904,	// (0x0007c7db) main_video4_pane_g

0x5d51,	// (0x00072c28) vid4_indicators_pane_ParamLimits

0x5d51,	// (0x00072c28) vid4_indicators_pane

0x5d7f,	// (0x00072c56) video4_image_uncrop_cif_pane_ParamLimits

0x5d7f,	// (0x00072c56) video4_image_uncrop_cif_pane

0x5d99,	// (0x00072c70) video4_image_uncrop_nhd_pane_ParamLimits

0x5d99,	// (0x00072c70) video4_image_uncrop_nhd_pane

0x5beb,	// (0x00072ac2) video4_image_uncrop_vga_pane_ParamLimits

0x5beb,	// (0x00072ac2) video4_image_uncrop_vga_pane

0xa2a6,	// (0x0007717d) bg_tb_trans_pane_cp07

0xa2be,	// (0x00077195) vid4_indicators_pane_g1

0xa2d4,	// (0x000771ab) vid4_indicators_pane_g2

0xa2e8,	// (0x000771bf) vid4_indicators_pane_g3

0x0004,

0xf90f,	// (0x0007c7e6) vid4_indicators_pane_g

0xa319,	// (0x000771f0) vid4_indicators_pane_t1

0x5daf,	// (0x00072c86) cam4_autofocus_pane_g1

0x5db7,	// (0x00072c8e) cam4_autofocus_pane_g2

0x5dbf,	// (0x00072c96) cam4_autofocus_pane_g3

0x0002,

0xf91a,	// (0x0007c7f1) cam4_autofocus_pane_g

0x5dc7,	// (0x00072c9e) cam4_autofocus_pane_g3_copy1

0x564f,	// (0x00072526) video_down_pane_cp_t1

0x565d,	// (0x00072534) video_down_pane_cp_t2

0x0001,

0xf896,	// (0x0007c76d) video_down_pane_cp_t

0x95f0,	// (0x000764c7) popup_vitu2_window_ParamLimits

0x95f0,	// (0x000764c7) popup_vitu2_window

0x5dcf,	// (0x00072ca6) aid_size_cell2_itu2_ParamLimits

0x5dcf,	// (0x00072ca6) aid_size_cell2_itu2

0x5df5,	// (0x00072ccc) aid_size_cell_itu2_ParamLimits

0x5df5,	// (0x00072ccc) aid_size_cell_itu2

0x5e53,	// (0x00072d2a) bg_popup_window_pane_cp09_ParamLimits

0x5e53,	// (0x00072d2a) bg_popup_window_pane_cp09

0x5e61,	// (0x00072d38) field_vitu2_entry_pane_ParamLimits

0x5e61,	// (0x00072d38) field_vitu2_entry_pane

0x5e89,	// (0x00072d60) grid_vitu2_function_pane_ParamLimits

0x5e89,	// (0x00072d60) grid_vitu2_function_pane

0x5eda,	// (0x00072db1) grid_vitu2_itu_pane_ParamLimits

0x5eda,	// (0x00072db1) grid_vitu2_itu_pane

0x5f65,	// (0x00072e3c) cell_vitu2_itu_pane_ParamLimits

0x5f65,	// (0x00072e3c) cell_vitu2_itu_pane

0x5f8b,	// (0x00072e62) cell_vitu2_function_pane_ParamLimits

0x5f8b,	// (0x00072e62) cell_vitu2_function_pane

0xd628,	// (0x0007a4ff) bg_popup_call_pane_cp08_ParamLimits

0xd628,	// (0x0007a4ff) bg_popup_call_pane_cp08

0xd641,	// (0x0007a518) field_vitu2_entry_pane_g1

0xd64d,	// (0x0007a524) field_vitu2_entry_pane_g2

0x0002,

0xf921,	// (0x0007c7f8) field_vitu2_entry_pane_g

0xa330,	// (0x00077207) field_vitu2_entry_pane_t1_ParamLimits

0xa330,	// (0x00077207) field_vitu2_entry_pane_t1

0xa35f,	// (0x00077236) field_vitu2_entry_pane_t2_ParamLimits

0xa35f,	// (0x00077236) field_vitu2_entry_pane_t2

0x0001,

0xf928,	// (0x0007c7ff) field_vitu2_entry_pane_t_ParamLimits

0xf928,	// (0x0007c7ff) field_vitu2_entry_pane_t

0x5fcf,	// (0x00072ea6) bg_button_pane_cp010_ParamLimits

0x5fcf,	// (0x00072ea6) bg_button_pane_cp010

0x5fdd,	// (0x00072eb4) cell_vitu2_itu_pane_g1

0x5ffb,	// (0x00072ed2) cell_vitu2_itu_pane_t1_ParamLimits

0x5ffb,	// (0x00072ed2) cell_vitu2_itu_pane_t1

0xfd1c,	// (0x0006cbf3) cell_vitu2_itu_pane_t2_ParamLimits

0xfd1c,	// (0x0006cbf3) cell_vitu2_itu_pane_t2

0x0002,

0xf932,	// (0x0007c809) cell_vitu2_itu_pane_t_ParamLimits

0xf932,	// (0x0007c809) cell_vitu2_itu_pane_t

0xa2a6,	// (0x0007717d) bg_button_pane_cp011

0x6061,	// (0x00072f38) cell_vitu2_function_pane_g1

0x9597,	// (0x0007646e) main_myfav_hc_pane

0x5a12,	// (0x000728e9) popup_image3_note_pane_ParamLimits

0x5a12,	// (0x000728e9) popup_image3_note_pane

0x5a2e,	// (0x00072905) popup_image3_tool_bar_pane_ParamLimits

0x5a2e,	// (0x00072905) popup_image3_tool_bar_pane

0xfda0,	// (0x0006cc77) cell_vitu2_itu_pane_t3_ParamLimits

0xfda0,	// (0x0006cc77) cell_vitu2_itu_pane_t3

0x9597,	// (0x0007646e) bg_popup_trans_pane

0xd66f,	// (0x0007a546) grid_image3_tool_bar_pane

0xd679,	// (0x0007a550) bg_popup_trans_pane_g1

0xab7e,	// (0x00077a55) bg_popup_trans_pane_g2

0xd681,	// (0x0007a558) bg_popup_trans_pane_g3

0xd689,	// (0x0007a560) bg_popup_trans_pane_g4

0xd691,	// (0x0007a568) bg_popup_trans_pane_g5

0xd699,	// (0x0007a570) bg_popup_trans_pane_g6

0xd6a1,	// (0x0007a578) bg_popup_trans_pane_g7

0xd6a9,	// (0x0007a580) bg_popup_trans_pane_g8

0xab5e,	// (0x00077a35) bg_popup_trans_pane_g9

0x0008,

0xf939,	// (0x0007c810) bg_popup_trans_pane_g

0xd6b1,	// (0x0007a588) cell_image3_tool_bar_pane_ParamLimits

0xd6b1,	// (0x0007a588) cell_image3_tool_bar_pane

0xcc91,	// (0x00079b68) cell_image3_tool_bar_pane_g1

0x9597,	// (0x0007646e) bg_popup_trans_pane_cp1

0xd6c7,	// (0x0007a59e) popup_image3_note_pane_t1

0xd6d5,	// (0x0007a5ac) popup_image3_note_pane_t2

0xd6e3,	// (0x0007a5ba) popup_image3_note_pane_t3

0x0002,

0xf94c,	// (0x0007c823) popup_image3_note_pane_t

0xd6f3,	// (0x0007a5ca) popup_image3_note_pane_t3_copy1

0x6075,	// (0x00072f4c) bg_myfav_hc_instruction_pane_ParamLimits

0x6075,	// (0x00072f4c) bg_myfav_hc_instruction_pane

0x608d,	// (0x00072f64) cell_myfav_contact_pane_ParamLimits

0x608d,	// (0x00072f64) cell_myfav_contact_pane

0x60a9,	// (0x00072f80) cell_myfav_contact_pane_cp1_ParamLimits

0x60a9,	// (0x00072f80) cell_myfav_contact_pane_cp1

0x60c1,	// (0x00072f98) cell_myfav_contact_pane_cp2_ParamLimits

0x60c1,	// (0x00072f98) cell_myfav_contact_pane_cp2

0x60d9,	// (0x00072fb0) cell_myfav_contact_pane_cp3_ParamLimits

0x60d9,	// (0x00072fb0) cell_myfav_contact_pane_cp3

0x60f0,	// (0x00072fc7) cell_myfav_contact_pane_cp4_ParamLimits

0x60f0,	// (0x00072fc7) cell_myfav_contact_pane_cp4

0x6108,	// (0x00072fdf) cell_myfav_contact_pane_cp5_ParamLimits

0x6108,	// (0x00072fdf) cell_myfav_contact_pane_cp5

0x611c,	// (0x00072ff3) cell_myfav_contact_pane_cp6_ParamLimits

0x611c,	// (0x00072ff3) cell_myfav_contact_pane_cp6

0x6132,	// (0x00073009) cell_myfav_contact_pane_cp7_ParamLimits

0x6132,	// (0x00073009) cell_myfav_contact_pane_cp7

0xd701,	// (0x0007a5d8) listscroll_gen_pane_cp05

0x614a,	// (0x00073021) main_myfav_hc_pane_g1_ParamLimits

0x614a,	// (0x00073021) main_myfav_hc_pane_g1

0x6164,	// (0x0007303b) main_myfav_hc_pane_g2_ParamLimits

0x6164,	// (0x0007303b) main_myfav_hc_pane_g2

0x0002,

0xf953,	// (0x0007c82a) main_myfav_hc_pane_g_ParamLimits

0xf953,	// (0x0007c82a) main_myfav_hc_pane_g

0x6198,	// (0x0007306f) main_myfav_hc_pane_t1_ParamLimits

0x6198,	// (0x0007306f) main_myfav_hc_pane_t1

0xd70a,	// (0x0007a5e1) main_myfav_hc_pane_t2_ParamLimits

0xd70a,	// (0x0007a5e1) main_myfav_hc_pane_t2

0xd71c,	// (0x0007a5f3) main_myfav_hc_pane_t3_ParamLimits

0xd71c,	// (0x0007a5f3) main_myfav_hc_pane_t3

0x61af,	// (0x00073086) main_myfav_hc_pane_t4_ParamLimits

0x61af,	// (0x00073086) main_myfav_hc_pane_t4

0x0004,

0xf95a,	// (0x0007c831) main_myfav_hc_pane_t_ParamLimits

0xf95a,	// (0x0007c831) main_myfav_hc_pane_t

0xcc91,	// (0x00079b68) bg_myfav_hc_instruction_pane_g1

0xd72e,	// (0x0007a605) cell_myfav_contact_pane_g1_ParamLimits

0xd72e,	// (0x0007a605) cell_myfav_contact_pane_g1

0xd72e,	// (0x0007a605) cell_myfav_contact_pane_g2_ParamLimits

0xd72e,	// (0x0007a605) cell_myfav_contact_pane_g2

0xd73a,	// (0x0007a611) cell_myfav_contact_pane_g3_ParamLimits

0xd73a,	// (0x0007a611) cell_myfav_contact_pane_g3

0xcf26,	// (0x00079dfd) cell_myfav_contact_pane_g4_ParamLimits

0xcf26,	// (0x00079dfd) cell_myfav_contact_pane_g4

0xd747,	// (0x0007a61e) cell_myfav_contact_pane_g5_ParamLimits

0xd747,	// (0x0007a61e) cell_myfav_contact_pane_g5

0x0004,

0xf965,	// (0x0007c83c) cell_myfav_contact_pane_g_ParamLimits

0xf965,	// (0x0007c83c) cell_myfav_contact_pane_g

0x617e,	// (0x00073055) main_myfav_hc_pane_g3_ParamLimits

0x617e,	// (0x00073055) main_myfav_hc_pane_g3

0xff81,	// (0x0006ce58) popup_adpt_find_window

0x61d9,	// (0x000730b0) afind_page_pane_ParamLimits

0x61d9,	// (0x000730b0) afind_page_pane

0x61ee,	// (0x000730c5) aid_size_cell_afind_ParamLimits

0x61ee,	// (0x000730c5) aid_size_cell_afind

0x620c,	// (0x000730e3) bg_popup_sub_pane_cp09_ParamLimits

0x620c,	// (0x000730e3) bg_popup_sub_pane_cp09

0x6219,	// (0x000730f0) find_pane_cp01_ParamLimits

0x6219,	// (0x000730f0) find_pane_cp01

0xd753,	// (0x0007a62a) grid_afind_control_pane_ParamLimits

0xd753,	// (0x0007a62a) grid_afind_control_pane

0x6226,	// (0x000730fd) grid_afind_pane_ParamLimits

0x6226,	// (0x000730fd) grid_afind_pane

0x6248,	// (0x0007311f) cell_afind_pane_ParamLimits

0x6248,	// (0x0007311f) cell_afind_pane

0xcc91,	// (0x00079b68) afind_page_pane_g1

0x62af,	// (0x00073186) afind_page_pane_g2

0x62b8,	// (0x0007318f) afind_page_pane_g3

0x0002,

0xf970,	// (0x0007c847) afind_page_pane_g

0x62c1,	// (0x00073198) afind_page_pane_t1

0xd767,	// (0x0007a63e) cell_afind_grid_control_pane_ParamLimits

0xd767,	// (0x0007a63e) cell_afind_grid_control_pane

0xd56d,	// (0x0007a444) bg_button_pane_cp69_ParamLimits

0xd56d,	// (0x0007a444) bg_button_pane_cp69

0x62e1,	// (0x000731b8) cell_afind_pane_g1_ParamLimits

0x62e1,	// (0x000731b8) cell_afind_pane_g1

0x62ee,	// (0x000731c5) cell_afind_pane_t1_ParamLimits

0x62ee,	// (0x000731c5) cell_afind_pane_t1

0xa973,	// (0x0007784a) bg_button_pane_cp72

0xd776,	// (0x0007a64d) cell_afind_grid_control_pane_g1

0x324a,	// (0x00070121) aid_image_placing_area_ParamLimits

0x324a,	// (0x00070121) aid_image_placing_area

0xd239,	// (0x0007a110) field_vitu_entry_pane_g1_ParamLimits

0xd239,	// (0x0007a110) field_vitu_entry_pane_g1

0xd245,	// (0x0007a11c) field_vitu_entry_pane_g2_ParamLimits

0xd245,	// (0x0007a11c) field_vitu_entry_pane_g2

0x0001,

0xf821,	// (0x0007c6f8) field_vitu_entry_pane_g_ParamLimits

0xf821,	// (0x0007c6f8) field_vitu_entry_pane_g

0x546a,	// (0x00072341) cell_vitu_itu_pane_g1_ParamLimits

0x54ac,	// (0x00072383) cell_vitu_itu_pane_t3_ParamLimits

0x54ac,	// (0x00072383) cell_vitu_itu_pane_t3

0xd51d,	// (0x0007a3f4) mp4_progress_pane_t1_ParamLimits

0xd536,	// (0x0007a40d) mp4_progress_pane_t2_ParamLimits

0xf8b6,	// (0x0007c78d) mp4_progress_pane_t_ParamLimits

0xd54f,	// (0x0007a426) mup_progress_pane_cp04_ParamLimits

0x61c3,	// (0x0007309a) main_myfav_hc_pane_t5_ParamLimits

0x61c3,	// (0x0007309a) main_myfav_hc_pane_t5

0x95b5,	// (0x0007648c) aid_zoom_text_primary

0xff81,	// (0x0006ce58) popup_adpt_find_window_ParamLimits

0x95f0,	// (0x000764c7) main_cam_set_pane

0x5c1d,	// (0x00072af4) cam4_zoom_pane_ParamLimits

0x5c1d,	// (0x00072af4) cam4_zoom_pane

0x6300,	// (0x000731d7) main_cam_set_pane_g1_ParamLimits

0x6300,	// (0x000731d7) main_cam_set_pane_g1

0x630e,	// (0x000731e5) main_cam_set_pane_g2_ParamLimits

0x630e,	// (0x000731e5) main_cam_set_pane_g2

0x0001,

0xf977,	// (0x0007c84e) main_cam_set_pane_g_ParamLimits

0xf977,	// (0x0007c84e) main_cam_set_pane_g

0x632f,	// (0x00073206) main_cam_set_pane_t1_ParamLimits

0x632f,	// (0x00073206) main_cam_set_pane_t1

0x634a,	// (0x00073221) main_cset_listscroll_pane_ParamLimits

0x634a,	// (0x00073221) main_cset_listscroll_pane

0x636e,	// (0x00073245) main_cset_slider_pane_ParamLimits

0x636e,	// (0x00073245) main_cset_slider_pane

0xd787,	// (0x0007a65e) main_cset_list_pane_ParamLimits

0xd787,	// (0x0007a65e) main_cset_list_pane

0xd797,	// (0x0007a66e) scroll_pane_cp028

0x6398,	// (0x0007326f) aid_area_touch_slider

0x63b4,	// (0x0007328b) cset_slider_pane

0x63de,	// (0x000732b5) main_cset_slider_pane_g1

0x63f3,	// (0x000732ca) main_cset_slider_pane_g2

0x0011,

0xf97c,	// (0x0007c853) main_cset_slider_pane_g

0xd7d0,	// (0x0007a6a7) main_cset_slider_pane_t1

0x64b5,	// (0x0007338c) main_cset_slider_pane_t2

0x64cf,	// (0x000733a6) main_cset_slider_pane_t3

0x64e9,	// (0x000733c0) main_cset_slider_pane_t4

0x6503,	// (0x000733da) main_cset_slider_pane_t5

0x6521,	// (0x000733f8) main_cset_slider_pane_t6

0x6536,	// (0x0007340d) main_cset_slider_pane_t7

0x000e,

0xf9a1,	// (0x0007c878) main_cset_slider_pane_t

0x6642,	// (0x00073519) cset_list_set_pane_ParamLimits

0x6642,	// (0x00073519) cset_list_set_pane

0x6656,	// (0x0007352d) aid_position_infowindow_above

0x665e,	// (0x00073535) aid_position_infowindow_below

0x6666,	// (0x0007353d) cset_list_set_pane_g1_ParamLimits

0x6666,	// (0x0007353d) cset_list_set_pane_g1

0x6672,	// (0x00073549) cset_list_set_pane_g3_ParamLimits

0x6672,	// (0x00073549) cset_list_set_pane_g3

0x0001,

0xf9c0,	// (0x0007c897) cset_list_set_pane_g_ParamLimits

0xf9c0,	// (0x0007c897) cset_list_set_pane_g

0x6681,	// (0x00073558) cset_list_set_pane_t1_ParamLimits

0x6681,	// (0x00073558) cset_list_set_pane_t1

0x95f0,	// (0x000764c7) list_highlight_pane_cp021_ParamLimits

0x95f0,	// (0x000764c7) list_highlight_pane_cp021

0xb3aa,	// (0x00078281) cset_slider_pane_g1

0xb3bc,	// (0x00078293) cset_slider_pane_g2

0xb3b3,	// (0x0007828a) cset_slider_pane_g3

0x0002,

0xf9c5,	// (0x0007c89c) cset_slider_pane_g

0xa37c,	// (0x00077253) aid_area_touch_cam4_zoom

0xa384,	// (0x0007725b) cam4_zoom_cont_pane

0xa38c,	// (0x00077263) cam4_zoom_pane_g1

0xa394,	// (0x0007726b) cam4_zoom_pane_g2

0x6696,	// (0x0007356d) cam4_zoom_pane_g3

0x0002,

0xf9cc,	// (0x0007c8a3) cam4_zoom_pane_g

0xa39c,	// (0x00077273) cam4_zoom_cont_pane_g1

0xa3a5,	// (0x0007727c) cam4_zoom_cont_pane_g2

0xa3ae,	// (0x00077285) cam4_zoom_cont_pane_g3

0x0002,

0xf9d3,	// (0x0007c8aa) cam4_zoom_cont_pane_g

0x5a9a,	// (0x00072971) call4_image_pane_ParamLimits

0x5a9a,	// (0x00072971) call4_image_pane

0xd579,	// (0x0007a450) call4_windows_conf_pane_ParamLimits

0xd594,	// (0x0007a46b) popup_call4_audio_in_window_ParamLimits

0xd594,	// (0x0007a46b) popup_call4_audio_in_window

0x9597,	// (0x0007646e) bg_popup_call2_act_pane_cp02

0xd5f6,	// (0x0007a4cd) call4_list_conf_pane

0xcc91,	// (0x00079b68) call4_image_pane_g1

0xcc91,	// (0x00079b68) call4_image_pane_g2

0x0001,

0xf6e7,	// (0x0007c5be) call4_image_pane_g

0xd870,	// (0x0007a747) list_single_graphic_popup_conf4_pane_ParamLimits

0xd870,	// (0x0007a747) list_single_graphic_popup_conf4_pane

0x9597,	// (0x0007646e) list_highlight_pane_cp022

0xd885,	// (0x0007a75c) list_single_graphic_popup_conf4_pane_g1

0xb096,	// (0x00077f6d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9da,	// (0x0007c8b1) list_single_graphic_popup_conf4_pane_g

0xd88d,	// (0x0007a764) list_single_graphic_popup_conf4_pane_t1

0x12db,	// (0x0006e1b2) popup_vtel_slider_window_ParamLimits

0x12db,	// (0x0006e1b2) popup_vtel_slider_window

0xd55b,	// (0x0007a432) dialer2_ne_pane_t2_ParamLimits

0xd55b,	// (0x0007a432) dialer2_ne_pane_t2

0x0001,

0xf8bb,	// (0x0007c792) dialer2_ne_pane_t_ParamLimits

0xf8bb,	// (0x0007c792) dialer2_ne_pane_t

0xca70,	// (0x00079947) bg_popup_sub_pane_cp010_ParamLimits

0xca70,	// (0x00079947) bg_popup_sub_pane_cp010

0x669e,	// (0x00073575) popup_vtel_slider_window_g1_ParamLimits

0x669e,	// (0x00073575) popup_vtel_slider_window_g1

0x66b1,	// (0x00073588) popup_vtel_slider_window_g2_ParamLimits

0x66b1,	// (0x00073588) popup_vtel_slider_window_g2

0x0003,

0xf9df,	// (0x0007c8b6) popup_vtel_slider_window_g_ParamLimits

0xf9df,	// (0x0007c8b6) popup_vtel_slider_window_g

0x6707,	// (0x000735de) vtel_slider_pane_ParamLimits

0x6707,	// (0x000735de) vtel_slider_pane

0x6729,	// (0x00073600) vtel_slider_pane_g1_ParamLimits

0x6729,	// (0x00073600) vtel_slider_pane_g1

0x673d,	// (0x00073614) vtel_slider_pane_g2_ParamLimits

0x673d,	// (0x00073614) vtel_slider_pane_g2

0x6755,	// (0x0007362c) vtel_slider_pane_g3_ParamLimits

0x6755,	// (0x0007362c) vtel_slider_pane_g3

0x6729,	// (0x00073600) vtel_slider_pane_g4_ParamLimits

0x6729,	// (0x00073600) vtel_slider_pane_g4

0x676b,	// (0x00073642) vtel_slider_pane_g5_ParamLimits

0x676b,	// (0x00073642) vtel_slider_pane_g5

0x0004,

0xf9e8,	// (0x0007c8bf) vtel_slider_pane_g_ParamLimits

0xf9e8,	// (0x0007c8bf) vtel_slider_pane_g

0x9597,	// (0x0007646e) main_gallery2_pane

0x5e21,	// (0x00072cf8) aid_size_row_itut2_dropdow_list_ParamLimits

0x5e21,	// (0x00072cf8) aid_size_row_itut2_dropdow_list

0x5eb1,	// (0x00072d88) grid_vitu2_function_top_pane_ParamLimits

0x5eb1,	// (0x00072d88) grid_vitu2_function_top_pane

0x5f10,	// (0x00072de7) popup_vitu2_dropdown_list_window_ParamLimits

0x5f10,	// (0x00072de7) popup_vitu2_dropdown_list_window

0x5f39,	// (0x00072e10) popup_vitu2_match_list_window

0x678f,	// (0x00073666) cell_vitu2_function_top_pane_ParamLimits

0x678f,	// (0x00073666) cell_vitu2_function_top_pane

0x67af,	// (0x00073686) cell_vitu2_function_top_pane_cp01_ParamLimits

0x67af,	// (0x00073686) cell_vitu2_function_top_pane_cp01

0x67cd,	// (0x000736a4) cell_vitu2_function_top_wide_pane_ParamLimits

0x67cd,	// (0x000736a4) cell_vitu2_function_top_wide_pane

0xa2a6,	// (0x0007717d) bg_button_pane_cp012

0x67eb,	// (0x000736c2) cell_vitu2_function_top_pane_g1

0xa3b7,	// (0x0007728e) bg_button_pane_cp013_ParamLimits

0xa3b7,	// (0x0007728e) bg_button_pane_cp013

0x67ff,	// (0x000736d6) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x67ff,	// (0x000736d6) cell_vitu2_function_top_wide_pane_g1

0xa2a6,	// (0x0007717d) bg_popup_sub_pane_cp20

0x6817,	// (0x000736ee) list_vitu2_match_list_pane

0xd679,	// (0x0007a550) bg_popup_sub_pane_cp20_g1

0xd681,	// (0x0007a558) bg_popup_sub_pane_cp20_g2

0xab7e,	// (0x00077a55) bg_popup_sub_pane_cp20_g3

0xd689,	// (0x0007a560) bg_popup_sub_pane_cp20_g4

0xab5e,	// (0x00077a35) bg_popup_sub_pane_cp20_g5

0xd8a3,	// (0x0007a77a) bg_popup_sub_pane_cp20_g6

0xd699,	// (0x0007a570) bg_popup_sub_pane_cp20_g7

0xd6a1,	// (0x0007a578) bg_popup_sub_pane_cp20_g8

0xd6a9,	// (0x0007a580) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f3,	// (0x0007c8ca) bg_popup_sub_pane_cp20_g

0xa3d3,	// (0x000772aa) list_vitu2_match_list_item_pane_ParamLimits

0xa3d3,	// (0x000772aa) list_vitu2_match_list_item_pane

0xa3e5,	// (0x000772bc) list_vitu2_match_list_item_pane_t1

0x9cef,	// (0x00076bc6) bg_popup_sub_pane_cp21

0xa3f3,	// (0x000772ca) grid_vitu2_dropdown_list_pane

0x687f,	// (0x00073756) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x687f,	// (0x00073756) cell_vitu2_dropdown_list_char_pane

0x68a2,	// (0x00073779) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x68a2,	// (0x00073779) cell_vitu2_dropdown_list_ctrl_pane

0xd8ab,	// (0x0007a782) cell_vitu2_dropdown_list_char_pane_g1

0xd8b4,	// (0x0007a78b) cell_vitu2_dropdown_list_char_pane_g2

0xd8bd,	// (0x0007a794) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa10,	// (0x0007c8e7) cell_vitu2_dropdown_list_char_pane_g

0x68d0,	// (0x000737a7) cell_vitu2_dropdown_list_char_pane_t1

0x68de,	// (0x000737b5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x68de,	// (0x000737b5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x68ee,	// (0x000737c5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x68ee,	// (0x000737c5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x68ff,	// (0x000737d6) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x68ff,	// (0x000737d6) cell_vitu2_dropdown_list_ctrl_pane_g3

0x690f,	// (0x000737e6) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x690f,	// (0x000737e6) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa243,	// (0x0007711a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa243,	// (0x0007711a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa17,	// (0x0007c8ee) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa17,	// (0x0007c8ee) cell_vitu2_dropdown_list_ctrl_pane_g

0x692b,	// (0x00073802) aid_size_cell_gallery2_ParamLimits

0x692b,	// (0x00073802) aid_size_cell_gallery2

0x6941,	// (0x00073818) grid_gallery2_pane_ParamLimits

0x6941,	// (0x00073818) grid_gallery2_pane

0x6955,	// (0x0007382c) scroll_pane_cp029_ParamLimits

0x6955,	// (0x0007382c) scroll_pane_cp029

0x6961,	// (0x00073838) cell_gallery2_pane_ParamLimits

0x6961,	// (0x00073838) cell_gallery2_pane

0xd8c6,	// (0x0007a79d) cell_gallery2_pane_g2

0x699a,	// (0x00073871) cell_gallery2_pane_g3

0xd8d0,	// (0x0007a7a7) cell_gallery2_pane_g4

0xd8d8,	// (0x0007a7af) cell_gallery2_pane_g5

0xb264,	// (0x0007813b) grid_highlight_pane_cp10

0x5f39,	// (0x00072e10) popup_vitu2_match_list_window_ParamLimits

0x5f50,	// (0x00072e27) popup_vitu2_query_window_ParamLimits

0x5f50,	// (0x00072e27) popup_vitu2_query_window

0x9cef,	// (0x00076bc6) bg_vitu2_candi_button_pane

0xd8ab,	// (0x0007a782) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8b4,	// (0x0007a78b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8bd,	// (0x0007a794) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x69a2,	// (0x00073879) bg_button_pane_cp015

0x69b6,	// (0x0007388d) bg_button_pane_cp016

0x69c9,	// (0x000738a0) bg_button_pane_cp017

0xc838,	// (0x0007970f) bg_popup_sub_pane_cp22

0xd8e0,	// (0x0007a7b7) popup_vitu2_query_window_g1

0x6a0e,	// (0x000738e5) popup_vitu2_query_window_g2

0x0002,

0xfa22,	// (0x0007c8f9) popup_vitu2_query_window_g

0x6a2d,	// (0x00073904) popup_vitu2_query_window_t1_ParamLimits

0x6a2d,	// (0x00073904) popup_vitu2_query_window_t1

0x6a62,	// (0x00073939) popup_vitu2_query_window_t2_ParamLimits

0x6a62,	// (0x00073939) popup_vitu2_query_window_t2

0x6a74,	// (0x0007394b) popup_vitu2_query_window_t3_ParamLimits

0x6a74,	// (0x0007394b) popup_vitu2_query_window_t3

0x6a9c,	// (0x00073973) popup_vitu2_query_window_t4_ParamLimits

0x6a9c,	// (0x00073973) popup_vitu2_query_window_t4

0x6abd,	// (0x00073994) popup_vitu2_query_window_t5_ParamLimits

0x6abd,	// (0x00073994) popup_vitu2_query_window_t5

0x0006,

0xfa29,	// (0x0007c900) popup_vitu2_query_window_t_ParamLimits

0xfa29,	// (0x0007c900) popup_vitu2_query_window_t

0xd77f,	// (0x0007a656) main_cset_text_pane

0x6398,	// (0x0007326f) aid_area_touch_slider_ParamLimits

0x63b4,	// (0x0007328b) cset_slider_pane_ParamLimits

0x63de,	// (0x000732b5) main_cset_slider_pane_g1_ParamLimits

0x63f3,	// (0x000732ca) main_cset_slider_pane_g2_ParamLimits

0xd7a0,	// (0x0007a677) main_cset_slider_pane_g3_ParamLimits

0xd7a0,	// (0x0007a677) main_cset_slider_pane_g3

0x6408,	// (0x000732df) main_cset_slider_pane_g4_ParamLimits

0x6408,	// (0x000732df) main_cset_slider_pane_g4

0x6417,	// (0x000732ee) main_cset_slider_pane_g5_ParamLimits

0x6417,	// (0x000732ee) main_cset_slider_pane_g5

0x6425,	// (0x000732fc) main_cset_slider_pane_g6_ParamLimits

0x6425,	// (0x000732fc) main_cset_slider_pane_g6

0xf97c,	// (0x0007c853) main_cset_slider_pane_g_ParamLimits

0xd7d0,	// (0x0007a6a7) main_cset_slider_pane_t1_ParamLimits

0x64b5,	// (0x0007338c) main_cset_slider_pane_t2_ParamLimits

0x64cf,	// (0x000733a6) main_cset_slider_pane_t3_ParamLimits

0x64e9,	// (0x000733c0) main_cset_slider_pane_t4_ParamLimits

0x6503,	// (0x000733da) main_cset_slider_pane_t5_ParamLimits

0x6521,	// (0x000733f8) main_cset_slider_pane_t6_ParamLimits

0x6536,	// (0x0007340d) main_cset_slider_pane_t7_ParamLimits

0x6564,	// (0x0007343b) main_cset_slider_pane_t8_ParamLimits

0x6564,	// (0x0007343b) main_cset_slider_pane_t8

0x658c,	// (0x00073463) main_cset_slider_pane_t9_ParamLimits

0x658c,	// (0x00073463) main_cset_slider_pane_t9

0x65b4,	// (0x0007348b) main_cset_slider_pane_t10_ParamLimits

0x65b4,	// (0x0007348b) main_cset_slider_pane_t10

0x65dc,	// (0x000734b3) main_cset_slider_pane_t11_ParamLimits

0x65dc,	// (0x000734b3) main_cset_slider_pane_t11

0x6606,	// (0x000734dd) main_cset_slider_pane_t12_ParamLimits

0x6606,	// (0x000734dd) main_cset_slider_pane_t12

0x6623,	// (0x000734fa) main_cset_slider_pane_t13_ParamLimits

0x6623,	// (0x000734fa) main_cset_slider_pane_t13

0xf9a1,	// (0x0007c878) main_cset_slider_pane_t_ParamLimits

0x9597,	// (0x0007646e) bg_popup_sub_pane_cp011

0xd8ec,	// (0x0007a7c3) main_cset_text_pane_g1

0xd8f4,	// (0x0007a7cb) main_cset_text_pane_t1

0xd902,	// (0x0007a7d9) main_cset_text_pane_t2

0xd910,	// (0x0007a7e7) main_cset_text_pane_t3

0xd91e,	// (0x0007a7f5) main_cset_text_pane_t4

0xd92c,	// (0x0007a803) main_cset_text_pane_t5

0xd93a,	// (0x0007a811) main_cset_text_pane_t6

0xd948,	// (0x0007a81f) main_cset_text_pane_t7

0x0006,

0xfa38,	// (0x0007c90f) main_cset_text_pane_t

0x9597,	// (0x0007646e) main_cam4_burst_pane

0x9597,	// (0x0007646e) main_cam5_pane

0x62cf,	// (0x000731a6) bg_button_pane_cp019

0x62d8,	// (0x000731af) bg_button_pane_cp020

0xd7ac,	// (0x0007a683) main_cset_slider_pane_g7_ParamLimits

0xd7ac,	// (0x0007a683) main_cset_slider_pane_g7

0xd7b8,	// (0x0007a68f) main_cset_slider_pane_g8_ParamLimits

0xd7b8,	// (0x0007a68f) main_cset_slider_pane_g8

0x6439,	// (0x00073310) main_cset_slider_pane_g9_ParamLimits

0x6439,	// (0x00073310) main_cset_slider_pane_g9

0x6445,	// (0x0007331c) main_cset_slider_pane_g10_ParamLimits

0x6445,	// (0x0007331c) main_cset_slider_pane_g10

0x6451,	// (0x00073328) main_cset_slider_pane_g11_ParamLimits

0x6451,	// (0x00073328) main_cset_slider_pane_g11

0x645d,	// (0x00073334) main_cset_slider_pane_g12_ParamLimits

0x645d,	// (0x00073334) main_cset_slider_pane_g12

0x6469,	// (0x00073340) main_cset_slider_pane_g13_ParamLimits

0x6469,	// (0x00073340) main_cset_slider_pane_g13

0x6475,	// (0x0007334c) main_cset_slider_pane_g14_ParamLimits

0x6475,	// (0x0007334c) main_cset_slider_pane_g14

0x6481,	// (0x00073358) main_cset_slider_pane_g15_ParamLimits

0x6481,	// (0x00073358) main_cset_slider_pane_g15

0xd7fe,	// (0x0007a6d5) main_cset_slider_pane_t14_ParamLimits

0xd7fe,	// (0x0007a6d5) main_cset_slider_pane_t14

0xd837,	// (0x0007a70e) main_cset_slider_pane_t15_ParamLimits

0xd837,	// (0x0007a70e) main_cset_slider_pane_t15

0x6b34,	// (0x00073a0b) aid_cam4_burst_size_cell_ParamLimits

0x6b34,	// (0x00073a0b) aid_cam4_burst_size_cell

0x6b54,	// (0x00073a2b) grid_cam4_burst_pane_ParamLimits

0x6b54,	// (0x00073a2b) grid_cam4_burst_pane

0x6b8e,	// (0x00073a65) linegrid_cam4_burst_pane_ParamLimits

0x6b8e,	// (0x00073a65) linegrid_cam4_burst_pane

0xd956,	// (0x0007a82d) scroll_pane_cp30_ParamLimits

0xd956,	// (0x0007a82d) scroll_pane_cp30

0x6bb0,	// (0x00073a87) cell_cam4_burst_pane_ParamLimits

0x6bb0,	// (0x00073a87) cell_cam4_burst_pane

0xd962,	// (0x0007a839) linegrid_cam4_burst_pane_g1_ParamLimits

0xd962,	// (0x0007a839) linegrid_cam4_burst_pane_g1

0x6c05,	// (0x00073adc) linegrid_cam4_burst_pane_g2_ParamLimits

0x6c05,	// (0x00073adc) linegrid_cam4_burst_pane_g2

0xd96f,	// (0x0007a846) linegrid_cam4_burst_pane_g3_ParamLimits

0xd96f,	// (0x0007a846) linegrid_cam4_burst_pane_g3

0x0002,

0xfa47,	// (0x0007c91e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa47,	// (0x0007c91e) linegrid_cam4_burst_pane_g

0x6c16,	// (0x00073aed) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6c16,	// (0x00073aed) linegrid_cam4_burst_pane_g3_copy1

0xd97c,	// (0x0007a853) linegrid_cam4_burst_pane_g4_ParamLimits

0xd97c,	// (0x0007a853) linegrid_cam4_burst_pane_g4

0x6c34,	// (0x00073b0b) linegrid_cam4_burst_pane_g5_ParamLimits

0x6c34,	// (0x00073b0b) linegrid_cam4_burst_pane_g5

0x6c45,	// (0x00073b1c) linegrid_cam4_burst_pane_g6_ParamLimits

0x6c45,	// (0x00073b1c) linegrid_cam4_burst_pane_g6

0xd989,	// (0x0007a860) linegrid_cam4_burst_pane_g7_ParamLimits

0xd989,	// (0x0007a860) linegrid_cam4_burst_pane_g7

0x6c5c,	// (0x00073b33) cell_cam4_burst_pane_g1

0xd9a2,	// (0x0007a879) main_cam5_pane_t1_ParamLimits

0xd9a2,	// (0x0007a879) main_cam5_pane_t1

0xd9b4,	// (0x0007a88b) main_cam5_pane_t2_ParamLimits

0xd9b4,	// (0x0007a88b) main_cam5_pane_t2

0xd9c6,	// (0x0007a89d) main_cam5_pane_t3_ParamLimits

0xd9c6,	// (0x0007a89d) main_cam5_pane_t3

0xd9d8,	// (0x0007a8af) main_cam5_pane_t4_ParamLimits

0xd9d8,	// (0x0007a8af) main_cam5_pane_t4

0xd9f0,	// (0x0007a8c7) main_cam5_pane_t5_ParamLimits

0xd9f0,	// (0x0007a8c7) main_cam5_pane_t5

0xda04,	// (0x0007a8db) main_cam5_pane_t6_ParamLimits

0xda04,	// (0x0007a8db) main_cam5_pane_t6

0xda18,	// (0x0007a8ef) main_cam5_pane_t7_ParamLimits

0xda18,	// (0x0007a8ef) main_cam5_pane_t7

0xda2a,	// (0x0007a901) main_cam5_pane_t8_ParamLimits

0xda2a,	// (0x0007a901) main_cam5_pane_t8

0xda48,	// (0x0007a91f) main_cam5_pane_t9_ParamLimits

0xda48,	// (0x0007a91f) main_cam5_pane_t9

0xda5a,	// (0x0007a931) main_cam5_pane_t10_ParamLimits

0xda5a,	// (0x0007a931) main_cam5_pane_t10

0xda6c,	// (0x0007a943) main_cam5_pane_t11_ParamLimits

0xda6c,	// (0x0007a943) main_cam5_pane_t11

0xda80,	// (0x0007a957) main_cam5_pane_t12_ParamLimits

0xda80,	// (0x0007a957) main_cam5_pane_t12

0xda97,	// (0x0007a96e) main_cam5_pane_t13_ParamLimits

0xda97,	// (0x0007a96e) main_cam5_pane_t13

0x000c,

0xfa53,	// (0x0007c92a) main_cam5_pane_t_ParamLimits

0xfa53,	// (0x0007c92a) main_cam5_pane_t

0x0004,	// (0x0006cedb) popup_scut_keymap_window_ParamLimits

0x0004,	// (0x0006cedb) popup_scut_keymap_window

0x6c6f,	// (0x00073b46) aid_size_cell_brow_shortcut

0xb264,	// (0x0007813b) bg_popup_window_pane_cp010

0x6c7b,	// (0x00073b52) grid_scut_pane

0x6c87,	// (0x00073b5e) cell_scut_pane_ParamLimits

0x6c87,	// (0x00073b5e) cell_scut_pane

0x6ca0,	// (0x00073b77) cell_scut_pane_g1

0xdaba,	// (0x0007a991) cell_scut_pane_t1

0xdac9,	// (0x0007a9a0) cell_scut_pane_t2

0x6ca9,	// (0x00073b80) cell_scut_pane_t3

0x0002,

0xfa6e,	// (0x0007c945) cell_scut_pane_t

0x4933,	// (0x0007180a) main_mup3_pane_g8_ParamLimits

0x4933,	// (0x0007180a) main_mup3_pane_g8

0x5e3b,	// (0x00072d12) area_vitu2_query_pane_ParamLimits

0x5e3b,	// (0x00072d12) area_vitu2_query_pane

0x69dc,	// (0x000738b3) input_focus_pane_cp08

0xdad8,	// (0x0007a9af) area_vitu2_query_pane_g1

0x6cb7,	// (0x00073b8e) area_vitu2_query_pane_g2

0x0001,

0xfa75,	// (0x0007c94c) area_vitu2_query_pane_g

0x6cc8,	// (0x00073b9f) area_vitu2_query_pane_t1_ParamLimits

0x6cc8,	// (0x00073b9f) area_vitu2_query_pane_t1

0x6cdc,	// (0x00073bb3) area_vitu2_query_pane_t2_ParamLimits

0x6cdc,	// (0x00073bb3) area_vitu2_query_pane_t2

0x6cf0,	// (0x00073bc7) area_vitu2_query_pane_t3_ParamLimits

0x6cf0,	// (0x00073bc7) area_vitu2_query_pane_t3

0xa3fb,	// (0x000772d2) area_vitu2_query_pane_t4_ParamLimits

0xa3fb,	// (0x000772d2) area_vitu2_query_pane_t4

0xa423,	// (0x000772fa) area_vitu2_query_pane_t5_ParamLimits

0xa423,	// (0x000772fa) area_vitu2_query_pane_t5

0xa44b,	// (0x00077322) area_vitu2_query_pane_t6_ParamLimits

0xa44b,	// (0x00077322) area_vitu2_query_pane_t6

0x0006,

0xfa7a,	// (0x0007c951) area_vitu2_query_pane_t_ParamLimits

0xfa7a,	// (0x0007c951) area_vitu2_query_pane_t

0x6d18,	// (0x00073bef) bg_button_pane_cp018

0x6d26,	// (0x00073bfd) bg_button_pane_cp021

0x6d32,	// (0x00073c09) bg_button_pane_cp022

0x6d43,	// (0x00073c1a) input_focus_pane_cp09

0x2789,	// (0x0006f660) aid_size_touch_mv_arrow_left

0x27b2,	// (0x0006f689) aid_size_touch_mv_arrow_right

0x6499,	// (0x00073370) main_cset_slider_pane_g16_ParamLimits

0x6499,	// (0x00073370) main_cset_slider_pane_g16

0x64a7,	// (0x0007337e) main_cset_slider_pane_g17_ParamLimits

0x64a7,	// (0x0007337e) main_cset_slider_pane_g17

0x6c5c,	// (0x00073b33) cell_cam4_burst_pane_g1_ParamLimits

0x9597,	// (0x0007646e) compa_mode_pane

0x66c1,	// (0x00073598) popup_vtel_slider_window_g3_ParamLimits

0x66c1,	// (0x00073598) popup_vtel_slider_window_g3

0x66d8,	// (0x000735af) popup_vtel_slider_window_g4_ParamLimits

0x66d8,	// (0x000735af) popup_vtel_slider_window_g4

0x66ef,	// (0x000735c6) popup_vtel_slider_window_t1_ParamLimits

0x66ef,	// (0x000735c6) popup_vtel_slider_window_t1

0x9597,	// (0x0007646e) main_cl_pane

0xc864,	// (0x0007973b) popup_imed_adjust2_window_ParamLimits

0xc838,	// (0x0007970f) bg_tb_trans_pane_cp05_ParamLimits

0xd16e,	// (0x0007a045) popup_imed_adjust2_window_g1_ParamLimits

0xd17d,	// (0x0007a054) popup_imed_adjust2_window_g2_ParamLimits

0xd17d,	// (0x0007a054) popup_imed_adjust2_window_g2

0xd189,	// (0x0007a060) popup_imed_adjust2_window_g3_ParamLimits

0xd189,	// (0x0007a060) popup_imed_adjust2_window_g3

0x0002,

0xf7e5,	// (0x0007c6bc) popup_imed_adjust2_window_g_ParamLimits

0xf7e5,	// (0x0007c6bc) popup_imed_adjust2_window_g

0xd195,	// (0x0007a06c) popup_imed_adjust2_window_t1_ParamLimits

0xd1ad,	// (0x0007a084) slider_imed_adjust_pane_ParamLimits

0xd1c1,	// (0x0007a098) slider_imed_adjust_pane_g1_ParamLimits

0xd1d1,	// (0x0007a0a8) slider_imed_adjust_pane_g2_ParamLimits

0xd1e1,	// (0x0007a0b8) slider_imed_adjust_pane_g3_ParamLimits

0xd1f2,	// (0x0007a0c9) slider_imed_adjust_pane_g4_ParamLimits

0xf7ec,	// (0x0007c6c3) slider_imed_adjust_pane_g_ParamLimits

0x5bbd,	// (0x00072a94) aid_touch_area_cam4_ParamLimits

0x5bbd,	// (0x00072a94) aid_touch_area_cam4

0xa225,	// (0x000770fc) battery_pane_cp01

0x5c8f,	// (0x00072b66) main_camera4_pane_g6_ParamLimits

0x5c8f,	// (0x00072b66) main_camera4_pane_g6

0x5cb9,	// (0x00072b90) main_camera4_pane_t2_ParamLimits

0x5cb9,	// (0x00072b90) main_camera4_pane_t2

0x0001,

0xf8ef,	// (0x0007c7c6) main_camera4_pane_t_ParamLimits

0xf8ef,	// (0x0007c7c6) main_camera4_pane_t

0x5cee,	// (0x00072bc5) aid_touch_area_vid4_ParamLimits

0x5cee,	// (0x00072bc5) aid_touch_area_vid4

0x5d42,	// (0x00072c19) main_video4_pane_g5_ParamLimits

0x5d42,	// (0x00072c19) main_video4_pane_g5

0x5d67,	// (0x00072c3e) vid4_progress_pane_ParamLimits

0x5d67,	// (0x00072c3e) vid4_progress_pane

0xd7c4,	// (0x0007a69b) main_cset_slider_pane_g18_ParamLimits

0xd7c4,	// (0x0007a69b) main_cset_slider_pane_g18

0xd996,	// (0x0007a86d) cell_cam4_burst_pane_g2_ParamLimits

0xd996,	// (0x0007a86d) cell_cam4_burst_pane_g2

0x0001,

0xfa4e,	// (0x0007c925) cell_cam4_burst_pane_g_ParamLimits

0xfa4e,	// (0x0007c925) cell_cam4_burst_pane_g

0xa74b,	// (0x00077622) bg_cl_pane_ParamLimits

0xa74b,	// (0x00077622) bg_cl_pane

0x6d54,	// (0x00073c2b) cl_header_pane_ParamLimits

0x6d54,	// (0x00073c2b) cl_header_pane

0x6d68,	// (0x00073c3f) cl_listscroll_pane_ParamLimits

0x6d68,	// (0x00073c3f) cl_listscroll_pane

0xdae4,	// (0x0007a9bb) bg_cl_pane_g1

0xdaec,	// (0x0007a9c3) bg_cl_pane_g2

0xdaf4,	// (0x0007a9cb) bg_cl_pane_g3

0xdafc,	// (0x0007a9d3) bg_cl_pane_g4

0xdb04,	// (0x0007a9db) bg_cl_pane_g5

0xdb0c,	// (0x0007a9e3) bg_cl_pane_g6

0xdb14,	// (0x0007a9eb) bg_cl_pane_g7

0xdb1c,	// (0x0007a9f3) bg_cl_pane_g8

0xdb24,	// (0x0007a9fb) bg_cl_pane_g9

0x0008,

0xfa89,	// (0x0007c960) bg_cl_pane_g

0x6d78,	// (0x00073c4f) aid_height_cl_leading_ParamLimits

0x6d78,	// (0x00073c4f) aid_height_cl_leading

0x6d84,	// (0x00073c5b) aid_height_cl_text_ParamLimits

0x6d84,	// (0x00073c5b) aid_height_cl_text

0x95f0,	// (0x000764c7) bg_cl_header_pane_ParamLimits

0x95f0,	// (0x000764c7) bg_cl_header_pane

0x6da3,	// (0x00073c7a) cl_header_pane_g1_ParamLimits

0x6da3,	// (0x00073c7a) cl_header_pane_g1

0x6db9,	// (0x00073c90) cl_header_pane_t1_ParamLimits

0x6db9,	// (0x00073c90) cl_header_pane_t1

0xdb2c,	// (0x0007aa03) cl_list_pane

0xd797,	// (0x0007a66e) hc_scroll_pane_cp01

0xab5e,	// (0x00077a35) bg_cl_header_pane_g1

0xd679,	// (0x0007a550) bg_cl_header_pane_g2

0xab7e,	// (0x00077a55) bg_cl_header_pane_g3

0xd689,	// (0x0007a560) bg_cl_header_pane_g4

0xd681,	// (0x0007a558) bg_cl_header_pane_g5

0xd8a3,	// (0x0007a77a) bg_cl_header_pane_g6

0xd6a1,	// (0x0007a578) bg_cl_header_pane_g7

0xd6a9,	// (0x0007a580) bg_cl_header_pane_g8

0xd699,	// (0x0007a570) bg_cl_header_pane_g9

0x0008,

0xfa9c,	// (0x0007c973) bg_cl_header_pane_g

0x6dd2,	// (0x00073ca9) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6dd2,	// (0x00073ca9) hc_cl_list_double_graphic_heading_pane

0x6de5,	// (0x00073cbc) hc_cl_list_single_graphic_pane_ParamLimits

0x6de5,	// (0x00073cbc) hc_cl_list_single_graphic_pane

0x6dfd,	// (0x00073cd4) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6dfd,	// (0x00073cd4) hc_cl_list_single_graphic_pane_g1

0x6e09,	// (0x00073ce0) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6e09,	// (0x00073ce0) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaaf,	// (0x0007c986) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaaf,	// (0x0007c986) hc_cl_list_single_graphic_pane_g

0x6e1d,	// (0x00073cf4) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6e1d,	// (0x00073cf4) hc_cl_list_single_graphic_pane_t1

0x6dfd,	// (0x00073cd4) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6dfd,	// (0x00073cd4) hc_cl_list_double_graphic_heading_pane_g1

0x6e32,	// (0x00073d09) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6e32,	// (0x00073d09) hc_cl_list_double_graphic_heading_pane_g2

0x6e46,	// (0x00073d1d) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6e46,	// (0x00073d1d) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab4,	// (0x0007c98b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab4,	// (0x0007c98b) hc_cl_list_double_graphic_heading_pane_g

0x6e5a,	// (0x00073d31) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6e5a,	// (0x00073d31) hc_cl_list_double_graphic_heading_pane_t1

0x6e6f,	// (0x00073d46) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6e6f,	// (0x00073d46) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabb,	// (0x0007c992) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabb,	// (0x0007c992) hc_cl_list_double_graphic_heading_pane_t

0x6e84,	// (0x00073d5b) vid4_progress_pane_g1

0x6e96,	// (0x00073d6d) vid4_progress_pane_g2

0x9eca,	// (0x00076da1) vid4_progress_pane_g3

0xa49f,	// (0x00077376) vid4_progress_pane_g4

0x0004,

0xfac0,	// (0x0007c997) vid4_progress_pane_g

0xa4bd,	// (0x00077394) vid4_progress_pane_t1

0xa4d2,	// (0x000773a9) vid4_progress_pane_t2

0x0002,

0xfacb,	// (0x0007c9a2) vid4_progress_pane_t

0xa4fd,	// (0x000773d4) wait_bar_pane_cp07

0xca7e,	// (0x00079955) blid_firmament_pane_ParamLimits

0xcac1,	// (0x00079998) popup_blid_sat_info2_window_g1

0xcae5,	// (0x000799bc) popup_blid_sat_info2_window_t3

0xcaf3,	// (0x000799ca) popup_blid_sat_info2_window_t4

0xcb01,	// (0x000799d8) popup_blid_sat_info2_window_t5

0xcb0f,	// (0x000799e6) popup_blid_sat_info2_window_t6

0xcb1f,	// (0x000799f6) popup_blid_sat_info2_window_t7

0xcb2d,	// (0x00079a04) popup_blid_sat_info2_window_t8

0xcb3b,	// (0x00079a12) popup_blid_sat_info2_window_t9

0xcb49,	// (0x00079a20) popup_blid_sat_info2_window_t10

0xcc11,	// (0x00079ae8) aid_firma_cardinal_ParamLimits

0xcc25,	// (0x00079afc) blid_firmament_pane_t1_ParamLimits

0xcc3c,	// (0x00079b13) blid_firmament_pane_t2_ParamLimits

0xcc53,	// (0x00079b2a) blid_firmament_pane_t3_ParamLimits

0xcc6a,	// (0x00079b41) blid_firmament_pane_t4_ParamLimits

0xf6de,	// (0x0007c5b5) blid_firmament_pane_t_ParamLimits

0xcc81,	// (0x00079b58) blid_sat_info_pane_ParamLimits

0x95f0,	// (0x000764c7) main_cam_set_pane_ParamLimits

0x5214,	// (0x000720eb) aid_size_cell_colour_35_ParamLimits

0x5234,	// (0x0007210b) aid_size_cell_colour_112_ParamLimits

0x5254,	// (0x0007212b) aid_size_cell_effect_ParamLimits

0xc838,	// (0x0007970f) bg_tb_trans_pane_cp02_ParamLimits

0xadc4,	// (0x00077c9b) heading_imed_pane_ParamLimits

0x5274,	// (0x0007214b) listscroll_imed_pane_ParamLimits

0xbe5a,	// (0x00078d31) popup_call2_audio_first_window_g5_ParamLimits

0xbe5a,	// (0x00078d31) popup_call2_audio_first_window_g5

0x5825,	// (0x000726fc) aid_size_touch_image3_arrow_left_ParamLimits

0x5825,	// (0x000726fc) aid_size_touch_image3_arrow_left

0x5851,	// (0x00072728) aid_size_touch_image3_arrow_right_ParamLimits

0x5851,	// (0x00072728) aid_size_touch_image3_arrow_right

0xa4e8,	// (0x000773bf) vid4_progress_pane_t3

0x5593,	// (0x0007246a) main_hwr_training_symbol_option_pane_ParamLimits

0x5593,	// (0x0007246a) main_hwr_training_symbol_option_pane

0xd45d,	// (0x0007a334) popup_hwr_training_preview_window_ParamLimits

0xd45d,	// (0x0007a334) popup_hwr_training_preview_window

0x55b3,	// (0x0007248a) hwr_training_navi_pane_g5_ParamLimits

0x55b3,	// (0x0007248a) hwr_training_navi_pane_g5

0xd667,	// (0x0007a53e) popup_char_count_window

0xa2a6,	// (0x0007717d) bg_popup_sub_pane_cp20_ParamLimits

0x6817,	// (0x000736ee) list_vitu2_match_list_pane_ParamLimits

0x6826,	// (0x000736fd) vitu2_page_scroll_pane_ParamLimits

0x6826,	// (0x000736fd) vitu2_page_scroll_pane

0xdb35,	// (0x0007aa0c) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb35,	// (0x0007aa0c) list_single_hwr_training_symbol_option_pane

0xdb6f,	// (0x0007aa46) list_single_hwr_training_symbol_option_pane_g1

0xdb77,	// (0x0007aa4e) list_single_hwr_training_symbol_option_pane_t1

0xdb85,	// (0x0007aa5c) bg_button_pane_cp023

0xdb8e,	// (0x0007aa65) bg_button_pane_cp024

0x6ee0,	// (0x00073db7) vitu2_page_scroll_pane_g1

0x6ee8,	// (0x00073dbf) vitu2_page_scroll_pane_g2

0x0001,

0xfad2,	// (0x0007c9a9) vitu2_page_scroll_pane_g

0x6ef2,	// (0x00073dc9) vitu2_page_scroll_pane_t1

0xc9d6,	// (0x000798ad) popup_char_count_window_g1

0xdbc1,	// (0x0007aa98) popup_char_count_window_g2

0xdbca,	// (0x0007aaa1) popup_char_count_window_g3

0x0002,

0xfad7,	// (0x0007c9ae) popup_char_count_window_g

0xdbd3,	// (0x0007aaaa) popup_char_count_window_t1

0x9597,	// (0x0007646e) main_vded2_pane

0xd15a,	// (0x0007a031) aid_size_cell_imed_line

0xd164,	// (0x0007a03b) grid_imed_line_width_pane

0xa2fb,	// (0x000771d2) vid4_indicators_pane_g4

0xdbe1,	// (0x0007aab8) cell_imed_line_width_pane_ParamLimits

0xdbe1,	// (0x0007aab8) cell_imed_line_width_pane

0xdbf7,	// (0x0007aace) cell_imed_line_width_pane_g1

0xca58,	// (0x0007992f) cell_imed_line_width_pane_g2

0x0001,

0xfade,	// (0x0007c9b5) cell_imed_line_width_pane_g

0x6f01,	// (0x00073dd8) main_vded2_pane_g1_ParamLimits

0x6f01,	// (0x00073dd8) main_vded2_pane_g1

0x6f1c,	// (0x00073df3) main_vded2_pane_g2_ParamLimits

0x6f1c,	// (0x00073df3) main_vded2_pane_g2

0x0001,

0xfae3,	// (0x0007c9ba) main_vded2_pane_g_ParamLimits

0xfae3,	// (0x0007c9ba) main_vded2_pane_g

0x6f2e,	// (0x00073e05) vded2_slider_pane_ParamLimits

0x6f2e,	// (0x00073e05) vded2_slider_pane

0x6f3e,	// (0x00073e15) aid_size_touch_vded2_end

0x6f48,	// (0x00073e1f) aid_size_touch_vded2_playhead

0xdc00,	// (0x0007aad7) aid_size_touch_vded2_start

0xdc08,	// (0x0007aadf) vded2_slider_bg_pane

0xdc11,	// (0x0007aae8) vded2_slider_pane_g1

0xdc1a,	// (0x0007aaf1) vded2_slider_pane_g2

0x6f52,	// (0x00073e29) vded2_slider_pane_g3

0x0002,

0xfae8,	// (0x0007c9bf) vded2_slider_pane_g

0xdc22,	// (0x0007aaf9) vded2_slider_bg_pane_g1

0xdc2b,	// (0x0007ab02) vded2_slider_bg_pane_g2

0xdc34,	// (0x0007ab0b) vded2_slider_bg_pane_g3

0x0002,

0xfaef,	// (0x0007c9c6) vded2_slider_bg_pane_g

0x2e89,	// (0x0006fd60) aid_postcard_touch_down_pane_ParamLimits

0x2e89,	// (0x0006fd60) aid_postcard_touch_down_pane

0x2ea1,	// (0x0006fd78) aid_postcard_touch_up_pane_ParamLimits

0x2ea1,	// (0x0006fd78) aid_postcard_touch_up_pane

0x9597,	// (0x0007646e) main_blid2_pane

0xc846,	// (0x0007971d) popup_blid2_search_window

0x9597,	// (0x0007646e) blid2_gps_pane

0x9597,	// (0x0007646e) blid2_navig_pane

0x9597,	// (0x0007646e) blid2_search_pane

0x9597,	// (0x0007646e) blid2_tripm_pane

0x6f5d,	// (0x00073e34) blid2_search_pane_g1_ParamLimits

0x6f5d,	// (0x00073e34) blid2_search_pane_g1

0x6f70,	// (0x00073e47) blid2_search_pane_t1_ParamLimits

0x6f70,	// (0x00073e47) blid2_search_pane_t1

0x6f82,	// (0x00073e59) aid_size_cell_blid2_gps_ParamLimits

0x6f82,	// (0x00073e59) aid_size_cell_blid2_gps

0x6f9a,	// (0x00073e71) blid2_gps_pane_g1_ParamLimits

0x6f9a,	// (0x00073e71) blid2_gps_pane_g1

0x6fae,	// (0x00073e85) grid_blid2_satellite_pane_ParamLimits

0x6fae,	// (0x00073e85) grid_blid2_satellite_pane

0x6fc6,	// (0x00073e9d) blid2_navig_pane_g1_ParamLimits

0x6fc6,	// (0x00073e9d) blid2_navig_pane_g1

0x6fd2,	// (0x00073ea9) blid2_navig_pane_t1_ParamLimits

0x6fd2,	// (0x00073ea9) blid2_navig_pane_t1

0x6fed,	// (0x00073ec4) blid2_navig_pane_t2_ParamLimits

0x6fed,	// (0x00073ec4) blid2_navig_pane_t2

0x0001,

0xfaf6,	// (0x0007c9cd) blid2_navig_pane_t_ParamLimits

0xfaf6,	// (0x0007c9cd) blid2_navig_pane_t

0x7008,	// (0x00073edf) blid2_navig_ring_pane_ParamLimits

0x7008,	// (0x00073edf) blid2_navig_ring_pane

0x7023,	// (0x00073efa) blid2_speed_pane_ParamLimits

0x7023,	// (0x00073efa) blid2_speed_pane

0x702f,	// (0x00073f06) blid2_tripm_pane_g1_ParamLimits

0x702f,	// (0x00073f06) blid2_tripm_pane_g1

0x704a,	// (0x00073f21) blid2_tripm_pane_g2_ParamLimits

0x704a,	// (0x00073f21) blid2_tripm_pane_g2

0x705e,	// (0x00073f35) blid2_tripm_pane_g3_ParamLimits

0x705e,	// (0x00073f35) blid2_tripm_pane_g3

0x7072,	// (0x00073f49) blid2_tripm_pane_g4_ParamLimits

0x7072,	// (0x00073f49) blid2_tripm_pane_g4

0x7086,	// (0x00073f5d) blid2_tripm_pane_g5_ParamLimits

0x7086,	// (0x00073f5d) blid2_tripm_pane_g5

0x0005,

0xfafb,	// (0x0007c9d2) blid2_tripm_pane_g_ParamLimits

0xfafb,	// (0x0007c9d2) blid2_tripm_pane_g

0x70ac,	// (0x00073f83) blid2_tripm_pane_t1_ParamLimits

0x70ac,	// (0x00073f83) blid2_tripm_pane_t1

0x70c5,	// (0x00073f9c) blid2_tripm_pane_t2_ParamLimits

0x70c5,	// (0x00073f9c) blid2_tripm_pane_t2

0x70de,	// (0x00073fb5) blid2_tripm_pane_t3_ParamLimits

0x70de,	// (0x00073fb5) blid2_tripm_pane_t3

0x0003,

0xfb08,	// (0x0007c9df) blid2_tripm_pane_t_ParamLimits

0xfb08,	// (0x0007c9df) blid2_tripm_pane_t

0x7125,	// (0x00073ffc) cell_blid2_satellite_pane_ParamLimits

0x7125,	// (0x00073ffc) cell_blid2_satellite_pane

0x7143,	// (0x0007401a) cell_blid2_satellite_pane_g1

0xdc3d,	// (0x0007ab14) cell_blid2_satellite_pane_t1

0xcc91,	// (0x00079b68) blid2_speed_pane_g1

0xdc4b,	// (0x0007ab22) blid2_speed_pane_t1

0xdc59,	// (0x0007ab30) blid2_speed_pane_t2

0x0001,

0xfb11,	// (0x0007c9e8) blid2_speed_pane_t

0xcc91,	// (0x00079b68) blid2_navig_ring_pane_g1

0x714c,	// (0x00074023) blid2_navig_ring_pane_g2

0x7154,	// (0x0007402b) blid2_navig_ring_pane_g3

0x715c,	// (0x00074033) blid2_navig_ring_pane_g4

0x7164,	// (0x0007403b) blid2_navig_ring_pane_g5

0x0004,

0xfb16,	// (0x0007c9ed) blid2_navig_ring_pane_g

0x9597,	// (0x0007646e) bg_popup_window_pane_cp011

0xdc67,	// (0x0007ab3e) popup_blid2_search_window_g1

0xdc6f,	// (0x0007ab46) popup_blid2_search_window_t1

0xdc7d,	// (0x0007ab54) popup_blid2_search_window_t2

0x0001,

0xfb21,	// (0x0007c9f8) popup_blid2_search_window_t

0xaa6d,	// (0x00077944) main_browser_pane_g1

0xa74b,	// (0x00077622) main_browser_pane_ParamLimits

0xa2a6,	// (0x0007717d) bg_button_pane_cp011_ParamLimits

0x6061,	// (0x00072f38) cell_vitu2_function_pane_g1_ParamLimits

0xc838,	// (0x0007970f) bg_popup_sub_pane_cp22_ParamLimits

0x69dc,	// (0x000738b3) input_focus_pane_cp08_ParamLimits

0x69f3,	// (0x000738ca) popup_vitu2_query_button_pane_ParamLimits

0x69f3,	// (0x000738ca) popup_vitu2_query_button_pane

0x6a04,	// (0x000738db) popup_vitu2_query_input_button_pane

0xd8e0,	// (0x0007a7b7) popup_vitu2_query_window_g1_ParamLimits

0x6a0e,	// (0x000738e5) popup_vitu2_query_window_g2_ParamLimits

0xfa22,	// (0x0007c8f9) popup_vitu2_query_window_g_ParamLimits

0x9597,	// (0x0007646e) bg_button_pane_cp026

0x716c,	// (0x00074043) popup_vitu2_query_input_button_pane_g1

0x9597,	// (0x0007646e) bg_button_pane_cp025

0xdc8b,	// (0x0007ab62) popup_vitu2_query_button_pane_t1

0x45ad,	// (0x00071484) main_mp3_pane_t6

0x45bb,	// (0x00071492) popup_slider_window_cp01

0xa251,	// (0x00077128) cam4_battery_pane

0xa2b4,	// (0x0007718b) cam4_battery_pane_cp02

0xa497,	// (0x0007736e) cam4_battery_pane_cp01

0xa497,	// (0x0007736e) cam4_battery_pane_cp03

0xdb48,	// (0x0007aa1f) cam4_battery_pane_g1

0xcc91,	// (0x00079b68) cam4_battery_pane_g2

0x0001,

0xfb26,	// (0x0007c9fd) cam4_battery_pane_g

0xcb57,	// (0x00079a2e) popup_blid_sat_info2_window_t11

0x2789,	// (0x0006f660) aid_size_touch_mv_arrow_left_ParamLimits

0x27b2,	// (0x0006f689) aid_size_touch_mv_arrow_right_ParamLimits

0xb1c4,	// (0x0007809b) navi_pane_g1_ParamLimits

0x27f1,	// (0x0006f6c8) navi_pane_g2_ParamLimits

0x281f,	// (0x0006f6f6) navi_pane_g3_ParamLimits

0xf3f0,	// (0x0007c2c7) navi_pane_g_ParamLimits

0x2879,	// (0x0006f750) navi_pane_mv_t1_ParamLimits

0x5280,	// (0x00072157) grid_imed_effect_pane_ParamLimits

0x11e3,	// (0x0006e0ba) aid_placing_vt_slider_lsc

0xa9b8,	// (0x0007788f) aid_placing_vt_slider_prt

0x95f0,	// (0x000764c7) bg_tb_trans_pane_cp01_ParamLimits

0xcde1,	// (0x00079cb8) popup_image_details_window_g1_ParamLimits

0xcdf4,	// (0x00079ccb) popup_image_details_window_g2_ParamLimits

0xce09,	// (0x00079ce0) popup_image_details_window_g3_ParamLimits

0xce09,	// (0x00079ce0) popup_image_details_window_g3

0xf723,	// (0x0007c5fa) popup_image_details_window_g_ParamLimits

0xce1d,	// (0x00079cf4) popup_image_details_window_t1_ParamLimits

0xce2f,	// (0x00079d06) popup_image_details_window_t2_ParamLimits

0xce48,	// (0x00079d1f) popup_image_details_window_t3_ParamLimits

0xce5c,	// (0x00079d33) popup_image_details_window_t4_ParamLimits

0xce77,	// (0x00079d4e) popup_image_details_window_t5_ParamLimits

0xf72a,	// (0x0007c601) popup_image_details_window_t_ParamLimits

0x6d90,	// (0x00073c67) cl_header_name_pane_ParamLimits

0x6d90,	// (0x00073c67) cl_header_name_pane

0x7174,	// (0x0007404b) cl_header_name_pane_t1_ParamLimits

0x7174,	// (0x0007404b) cl_header_name_pane_t1

0x7195,	// (0x0007406c) cl_header_name_pane_t2_ParamLimits

0x7195,	// (0x0007406c) cl_header_name_pane_t2

0x71d7,	// (0x000740ae) cl_header_name_pane_t3_ParamLimits

0x71d7,	// (0x000740ae) cl_header_name_pane_t3

0x0002,

0xfb2b,	// (0x0007ca02) cl_header_name_pane_t_ParamLimits

0xfb2b,	// (0x0007ca02) cl_header_name_pane_t

0x284a,	// (0x0006f721) navi_pane_mv_g2_ParamLimits

0xd641,	// (0x0007a518) field_vitu2_entry_pane_g1_ParamLimits

0xd64d,	// (0x0007a524) field_vitu2_entry_pane_g2_ParamLimits

0xd659,	// (0x0007a530) field_vitu2_entry_pane_g3_ParamLimits

0xd659,	// (0x0007a530) field_vitu2_entry_pane_g3

0xf921,	// (0x0007c7f8) field_vitu2_entry_pane_g_ParamLimits

0x5fdd,	// (0x00072eb4) cell_vitu2_itu_pane_g1_ParamLimits

0x5fed,	// (0x00072ec4) cell_vitu2_itu_pane_g2_ParamLimits

0x5fed,	// (0x00072ec4) cell_vitu2_itu_pane_g2

0x0001,

0xf92d,	// (0x0007c804) cell_vitu2_itu_pane_g_ParamLimits

0xf92d,	// (0x0007c804) cell_vitu2_itu_pane_g

0xa2a6,	// (0x0007717d) bg_vkb2_func_pane_cp05_ParamLimits

0xa2a6,	// (0x0007717d) bg_vkb2_func_pane_cp05

0xa2a6,	// (0x0007717d) bg_vkb2_func_pane_cp03

0xa2a6,	// (0x0007717d) bg_vkb2_func_pane_cp04

0xa2a6,	// (0x0007717d) bg_vkb2_func_pane_cp10_ParamLimits

0xa2a6,	// (0x0007717d) bg_vkb2_func_pane_cp10

0x6d32,	// (0x00073c09) bg_vkb2_func_pane_cp08

0x6d18,	// (0x00073bef) bg_vkb2_func_pane_cp06

0x6d26,	// (0x00073bfd) bg_vkb2_func_pane_cp07

0xdb97,	// (0x0007aa6e) bg_vkb2_func_pane_cp11_ParamLimits

0xdb97,	// (0x0007aa6e) bg_vkb2_func_pane_cp11

0xdbac,	// (0x0007aa83) bg_vkb2_func_pane_cp12_ParamLimits

0xdbac,	// (0x0007aa83) bg_vkb2_func_pane_cp12

0x9597,	// (0x0007646e) bg_vkb2_func_pane_cp09

0xd679,	// (0x0007a550) bg_vkb2_func_pane_g1

0xab7e,	// (0x00077a55) bg_vkb2_func_pane_g2

0xd681,	// (0x0007a558) bg_vkb2_func_pane_g3

0xd689,	// (0x0007a560) bg_vkb2_func_pane_g4

0xd8a3,	// (0x0007a77a) bg_vkb2_func_pane_g5

0xd6a1,	// (0x0007a578) bg_vkb2_func_pane_g6

0xd6a9,	// (0x0007a580) bg_vkb2_func_pane_g7

0xd699,	// (0x0007a570) bg_vkb2_func_pane_g8

0xab5e,	// (0x00077a35) bg_vkb2_func_pane_g9

0x0008,

0xfb32,	// (0x0007ca09) bg_vkb2_func_pane_g

0x709a,	// (0x00073f71) blid2_tripm_pane_g6_ParamLimits

0x709a,	// (0x00073f71) blid2_tripm_pane_g6

0xd515,	// (0x0007a3ec) mp4_progress_pane_g1

0x7111,	// (0x00073fe8) blid2_tripm_values_pane_ParamLimits

0x7111,	// (0x00073fe8) blid2_tripm_values_pane

0x7208,	// (0x000740df) blid2_tripm_values_pane_t1

0x7216,	// (0x000740ed) blid2_tripm_values_pane_t2

0x7224,	// (0x000740fb) blid2_tripm_values_pane_t3

0x7232,	// (0x00074109) blid2_tripm_values_pane_t4

0x7240,	// (0x00074117) blid2_tripm_values_pane_t5

0x724e,	// (0x00074125) blid2_tripm_values_pane_t6

0x725c,	// (0x00074133) blid2_tripm_values_pane_t7

0x726a,	// (0x00074141) blid2_tripm_values_pane_t8

0x7278,	// (0x0007414f) blid2_tripm_values_pane_t9

0x0008,

0xfb45,	// (0x0007ca1c) blid2_tripm_values_pane_t

0x1220,	// (0x0006e0f7) call_video_pane_t1_ParamLimits

0x123a,	// (0x0006e111) call_video_pane_t2_ParamLimits

0xf279,	// (0x0007c150) call_video_pane_t_ParamLimits

0x2dd6,	// (0x0006fcad) msg_header_pane_g1_ParamLimits

0xb3e6,	// (0x000782bd) msg_header_pane_g2_ParamLimits

0xb3e6,	// (0x000782bd) msg_header_pane_g2

0x0001,

0xf493,	// (0x0007c36a) msg_header_pane_g_ParamLimits

0xf493,	// (0x0007c36a) msg_header_pane_g

0xa74b,	// (0x00077622) main_clock2_pane_ParamLimits

0x4f67,	// (0x00071e3e) grid_clock2_toolbar_pane_ParamLimits

0x4f67,	// (0x00071e3e) grid_clock2_toolbar_pane

0x4f67,	// (0x00071e3e) listscroll_clock2_pane_ParamLimits

0x4f67,	// (0x00071e3e) listscroll_clock2_pane

0x505e,	// (0x00071f35) main_clock2_pane_t3_ParamLimits

0x505e,	// (0x00071f35) main_clock2_pane_t3

0x5082,	// (0x00071f59) main_clock2_pane_t4_ParamLimits

0x5082,	// (0x00071f59) main_clock2_pane_t4

0xdc99,	// (0x0007ab70) cell_clock2_toolbar_pane

0xdca1,	// (0x0007ab78) cell_clock2_toolbar_pane_cp01

0xdca1,	// (0x0007ab78) cell_clock2_toolbar_pane_cp02

0xdca9,	// (0x0007ab80) cell_clock2_toolbar_pane_cp03

0xdcb1,	// (0x0007ab88) list_clock2_pane

0xb12a,	// (0x00078001) scroll_pane_cp10

0xdcb9,	// (0x0007ab90) list_single_clock2_pane_ParamLimits

0xdcb9,	// (0x0007ab90) list_single_clock2_pane

0xb264,	// (0x0007813b) list_highlight_pane_cp08

0xdcc6,	// (0x0007ab9d) list_single_clock2_pane_t1

0xdcd4,	// (0x0007abab) list_single_clock2_pane_t2

0x0001,

0xfb58,	// (0x0007ca2f) list_single_clock2_pane_t

0x9597,	// (0x0007646e) bg_button_pane_cp10

0xdce2,	// (0x0007abb9) cell_clock2_toolbar_pane_g1

0x2e15,	// (0x0006fcec) aid_main_viewer_pane_g1_ParamLimits

0x2e15,	// (0x0006fcec) aid_main_viewer_pane_g1

0x2e23,	// (0x0006fcfa) aid_main_viewer_pane_g2_ParamLimits

0x2e23,	// (0x0006fcfa) aid_main_viewer_pane_g2

0x2e31,	// (0x0006fd08) aid_main_viewer_pane_g3_ParamLimits

0x2e31,	// (0x0006fd08) aid_main_viewer_pane_g3

0x2e40,	// (0x0006fd17) aid_main_viewer_pane_g4_ParamLimits

0x2e40,	// (0x0006fd17) aid_main_viewer_pane_g4

0x0003,

0xf4a4,	// (0x0007c37b) aid_main_viewer_pane_g_ParamLimits

0xf4a4,	// (0x0007c37b) aid_main_viewer_pane_g

0x3793,	// (0x0007066a) main_calc_pane_ParamLimits

0x37a7,	// (0x0007067e) main_dialer2_pane_ParamLimits

0x9597,	// (0x0007646e) main_cam6_pane

0x9597,	// (0x0007646e) main_vid6_pane

0x4f73,	// (0x00071e4a) listscroll_gen_pane_cp06_ParamLimits

0x4f73,	// (0x00071e4a) listscroll_gen_pane_cp06

0x50a5,	// (0x00071f7c) main_clock2_pane_t5_ParamLimits

0x50a5,	// (0x00071f7c) main_clock2_pane_t5

0x5105,	// (0x00071fdc) aid_call2_pane_cp10_ParamLimits

0x5117,	// (0x00071fee) aid_call_pane_cp10_ParamLimits

0xb199,	// (0x00078070) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb199,	// (0x00078070) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5129,	// (0x00072000) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5129,	// (0x00072000) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb199,	// (0x00078070) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7da,	// (0x0007c6b1) popup_clock_analogue_window_cp10_g_ParamLimits

0x513f,	// (0x00072016) popup_clock_analogue_window_cp10_t1_ParamLimits

0x57d2,	// (0x000726a9) cell_dialer2_keypad_pane_g2_ParamLimits

0x57d2,	// (0x000726a9) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c0,	// (0x0007c797) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c0,	// (0x0007c797) cell_dialer2_keypad_pane_g

0x57ee,	// (0x000726c5) cell_dialer2_keypad_pane_t1

0x638a,	// (0x00073261) main_cset_text2_pane_ParamLimits

0x638a,	// (0x00073261) main_cset_text2_pane

0xdad8,	// (0x0007a9af) area_vitu2_query_pane_g1_ParamLimits

0x6cb7,	// (0x00073b8e) area_vitu2_query_pane_g2_ParamLimits

0xfa75,	// (0x0007c94c) area_vitu2_query_pane_g_ParamLimits

0xa473,	// (0x0007734a) area_vitu2_query_pane_t7_ParamLimits

0xa473,	// (0x0007734a) area_vitu2_query_pane_t7

0x6d18,	// (0x00073bef) bg_button_pane_cp018_ParamLimits

0x6d26,	// (0x00073bfd) bg_button_pane_cp021_ParamLimits

0x6d32,	// (0x00073c09) bg_button_pane_cp022_ParamLimits

0x6d32,	// (0x00073c09) bg_vkb2_func_pane_cp08_ParamLimits

0x6d18,	// (0x00073bef) bg_vkb2_func_pane_cp06_ParamLimits

0x6d26,	// (0x00073bfd) bg_vkb2_func_pane_cp07_ParamLimits

0x6d43,	// (0x00073c1a) input_focus_pane_cp09_ParamLimits

0xa52a,	// (0x00077401) cam6_autofocus_pane_ParamLimits

0xa52a,	// (0x00077401) cam6_autofocus_pane

0x7286,	// (0x0007415d) cam6_image_uncrop_pane_ParamLimits

0x7286,	// (0x0007415d) cam6_image_uncrop_pane

0x7295,	// (0x0007416c) cam6_indi_pane_ParamLimits

0x7295,	// (0x0007416c) cam6_indi_pane

0x72ab,	// (0x00074182) cam6_mode_pane_ParamLimits

0x72ab,	// (0x00074182) cam6_mode_pane

0x72bd,	// (0x00074194) cam6_timer_pane_ParamLimits

0x72bd,	// (0x00074194) cam6_timer_pane

0x72c9,	// (0x000741a0) cam6_zoom_pane_ParamLimits

0x72c9,	// (0x000741a0) cam6_zoom_pane

0x72d7,	// (0x000741ae) cam6_mode_pane_g1_ParamLimits

0x72d7,	// (0x000741ae) cam6_mode_pane_g1

0x72e7,	// (0x000741be) cam6_mode_pane_g2_ParamLimits

0x72e7,	// (0x000741be) cam6_mode_pane_g2

0x72f7,	// (0x000741ce) cam6_mode_pane_g3_ParamLimits

0x72f7,	// (0x000741ce) cam6_mode_pane_g3

0x7307,	// (0x000741de) cam6_mode_pane_g4_ParamLimits

0x7307,	// (0x000741de) cam6_mode_pane_g4

0x0003,

0xfb5d,	// (0x0007ca34) cam6_mode_pane_g_ParamLimits

0xfb5d,	// (0x0007ca34) cam6_mode_pane_g

0xdcea,	// (0x0007abc1) bg_tb_trans_pane_cp08_ParamLimits

0xdcea,	// (0x0007abc1) bg_tb_trans_pane_cp08

0xdcf8,	// (0x0007abcf) cam6_battery_pane_ParamLimits

0xdcf8,	// (0x0007abcf) cam6_battery_pane

0xdd0e,	// (0x0007abe5) cam6_indi_pane_g1_ParamLimits

0xdd0e,	// (0x0007abe5) cam6_indi_pane_g1

0xdd20,	// (0x0007abf7) cam6_indi_pane_g2_ParamLimits

0xdd20,	// (0x0007abf7) cam6_indi_pane_g2

0xdd32,	// (0x0007ac09) cam6_indi_pane_g3_ParamLimits

0xdd32,	// (0x0007ac09) cam6_indi_pane_g3

0x0002,

0xfb66,	// (0x0007ca3d) cam6_indi_pane_g_ParamLimits

0xfb66,	// (0x0007ca3d) cam6_indi_pane_g

0xdd44,	// (0x0007ac1b) cam6_indi_pane_t1_ParamLimits

0xdd44,	// (0x0007ac1b) cam6_indi_pane_t1

0x5db7,	// (0x00072c8e) cam6_autofocus_pane_g1

0x5daf,	// (0x00072c86) cam6_autofocus_pane_g2

0x5dc7,	// (0x00072c9e) cam6_autofocus_pane_g3

0x5dbf,	// (0x00072c96) cam6_autofocus_pane_g4

0x0003,

0xfb6d,	// (0x0007ca44) cam6_autofocus_pane_g

0xdd6a,	// (0x0007ac41) cam6_timer_pane_g1

0xdd72,	// (0x0007ac49) cam6_timer_pane_t1

0xdd80,	// (0x0007ac57) cam6_zoom_cont_pane

0xdd88,	// (0x0007ac5f) cam6_zoom_pane_g1

0xdd90,	// (0x0007ac67) cam6_zoom_pane_g2

0x7317,	// (0x000741ee) cam6_zoom_pane_g3

0x0002,

0xfb76,	// (0x0007ca4d) cam6_zoom_pane_g

0xcc91,	// (0x00079b68) cam6_battery_pane_g1

0xcc91,	// (0x00079b68) cam6_battery_pane_g2

0x0001,

0xf6e7,	// (0x0007c5be) cam6_battery_pane_g

0xdd98,	// (0x0007ac6f) cam6_zoom_cont_pane_g1

0xdda1,	// (0x0007ac78) cam6_zoom_cont_pane_g2

0xddaa,	// (0x0007ac81) cam6_zoom_cont_pane_g3

0x0002,

0xfb7d,	// (0x0007ca54) cam6_zoom_cont_pane_g

0x7334,	// (0x0007420b) cam6_mode_pane_cp_ParamLimits

0x7334,	// (0x0007420b) cam6_mode_pane_cp

0x7346,	// (0x0007421d) cam6_zoom_pane_cp_ParamLimits

0x7346,	// (0x0007421d) cam6_zoom_pane_cp

0x7354,	// (0x0007422b) vid6_image_uncrop_cif_pane_ParamLimits

0x7354,	// (0x0007422b) vid6_image_uncrop_cif_pane

0x7364,	// (0x0007423b) vid6_image_uncrop_nhd_pane_ParamLimits

0x7364,	// (0x0007423b) vid6_image_uncrop_nhd_pane

0x7373,	// (0x0007424a) vid6_image_uncrop_vga_pane_ParamLimits

0x7373,	// (0x0007424a) vid6_image_uncrop_vga_pane

0x7382,	// (0x00074259) vid6_image_uncrop_wvga_pane_ParamLimits

0x7382,	// (0x00074259) vid6_image_uncrop_wvga_pane

0x7391,	// (0x00074268) vid6_indi_pane_ParamLimits

0x7391,	// (0x00074268) vid6_indi_pane

0xdcea,	// (0x0007abc1) bg_tb_trans_pane_cp09_ParamLimits

0xdcea,	// (0x0007abc1) bg_tb_trans_pane_cp09

0xddc2,	// (0x0007ac99) cam6_battery_pane_cp_ParamLimits

0xddc2,	// (0x0007ac99) cam6_battery_pane_cp

0xddce,	// (0x0007aca5) vid6_indi_pane_g1_ParamLimits

0xddce,	// (0x0007aca5) vid6_indi_pane_g1

0xdde0,	// (0x0007acb7) vid6_indi_pane_g2_ParamLimits

0xdde0,	// (0x0007acb7) vid6_indi_pane_g2

0xddf2,	// (0x0007acc9) vid6_indi_pane_g3_ParamLimits

0xddf2,	// (0x0007acc9) vid6_indi_pane_g3

0xde09,	// (0x0007ace0) vid6_indi_pane_g4_ParamLimits

0xde09,	// (0x0007ace0) vid6_indi_pane_g4

0xde20,	// (0x0007acf7) vid6_indi_pane_g5_ParamLimits

0xde20,	// (0x0007acf7) vid6_indi_pane_g5

0x0004,

0xfb84,	// (0x0007ca5b) vid6_indi_pane_g_ParamLimits

0xfb84,	// (0x0007ca5b) vid6_indi_pane_g

0xde3a,	// (0x0007ad11) vid6_indi_pane_t1_ParamLimits

0xde3a,	// (0x0007ad11) vid6_indi_pane_t1

0xde50,	// (0x0007ad27) vid6_indi_pane_t2_ParamLimits

0xde50,	// (0x0007ad27) vid6_indi_pane_t2

0xde78,	// (0x0007ad4f) vid6_indi_pane_t3_ParamLimits

0xde78,	// (0x0007ad4f) vid6_indi_pane_t3

0xdea0,	// (0x0007ad77) vid6_indi_pane_t4_ParamLimits

0xdea0,	// (0x0007ad77) vid6_indi_pane_t4

0x0003,

0xfb8f,	// (0x0007ca66) vid6_indi_pane_t_ParamLimits

0xfb8f,	// (0x0007ca66) vid6_indi_pane_t

0xdec4,	// (0x0007ad9b) wait_bar_pane_cp08

0x73a9,	// (0x00074280) main_cset_text2_pane_t1_ParamLimits

0x73a9,	// (0x00074280) main_cset_text2_pane_t1

0x731f,	// (0x000741f6) listscroll_gen_pane_cp06_t1_ParamLimits

0x731f,	// (0x000741f6) listscroll_gen_pane_cp06_t1

0x9597,	// (0x0007646e) main_cam6_set_pane

0xa243,	// (0x0007711a) bg_tb_trans_pane_cp06_ParamLimits

0xa259,	// (0x00077130) cam4_indicators_pane_g1_ParamLimits

0xa26a,	// (0x00077141) cam4_indicators_pane_g2_ParamLimits

0xf8fd,	// (0x0007c7d4) cam4_indicators_pane_g_ParamLimits

0xa282,	// (0x00077159) cam4_indicators_pane_t1_ParamLimits

0xa2a6,	// (0x0007717d) bg_tb_trans_pane_cp07_ParamLimits

0xa2be,	// (0x00077195) vid4_indicators_pane_g1_ParamLimits

0xa2d4,	// (0x000771ab) vid4_indicators_pane_g2_ParamLimits

0xa2e8,	// (0x000771bf) vid4_indicators_pane_g3_ParamLimits

0xa2fb,	// (0x000771d2) vid4_indicators_pane_g4_ParamLimits

0xf90f,	// (0x0007c7e6) vid4_indicators_pane_g_ParamLimits

0xa319,	// (0x000771f0) vid4_indicators_pane_t1_ParamLimits

0x6e84,	// (0x00073d5b) vid4_progress_pane_g1_ParamLimits

0x6e96,	// (0x00073d6d) vid4_progress_pane_g2_ParamLimits

0x9eca,	// (0x00076da1) vid4_progress_pane_g3_ParamLimits

0xa49f,	// (0x00077376) vid4_progress_pane_g4_ParamLimits

0xfac0,	// (0x0007c997) vid4_progress_pane_g_ParamLimits

0xa4bd,	// (0x00077394) vid4_progress_pane_t1_ParamLimits

0xa4d2,	// (0x000773a9) vid4_progress_pane_t2_ParamLimits

0xa4e8,	// (0x000773bf) vid4_progress_pane_t3_ParamLimits

0xfacb,	// (0x0007c9a2) vid4_progress_pane_t_ParamLimits

0xa4fd,	// (0x000773d4) wait_bar_pane_cp07_ParamLimits

0x73c7,	// (0x0007429e) main_cam6_set_pane_g2_ParamLimits

0x73c7,	// (0x0007429e) main_cam6_set_pane_g2

0x73ed,	// (0x000742c4) main_cset6_listscroll_pane_ParamLimits

0x73ed,	// (0x000742c4) main_cset6_listscroll_pane

0x740b,	// (0x000742e2) main_cset6_slider_pane_ParamLimits

0x740b,	// (0x000742e2) main_cset6_slider_pane

0x7421,	// (0x000742f8) main_cset6_text2_pane_ParamLimits

0x7421,	// (0x000742f8) main_cset6_text2_pane

0xded3,	// (0x0007adaa) main_cset6_text_pane

0xdedb,	// (0x0007adb2) main_cset_list_pane_copy1_ParamLimits

0xdedb,	// (0x0007adb2) main_cset_list_pane_copy1

0xdeeb,	// (0x0007adc2) scroll_pane_cp028_copy1

0x742f,	// (0x00074306) cset_list_set_pane_copy1

0x7443,	// (0x0007431a) aid_position_infowindow_above_copy1

0x744b,	// (0x00074322) aid_position_infowindow_below_copy1

0x7453,	// (0x0007432a) cset_list_set_pane_g1_copy1

0x745b,	// (0x00074332) cset_list_set_pane_g3_copy1_ParamLimits

0x745b,	// (0x00074332) cset_list_set_pane_g3_copy1

0x746a,	// (0x00074341) cset_list_set_pane_t1_copy1_ParamLimits

0x746a,	// (0x00074341) cset_list_set_pane_t1_copy1

0x95f0,	// (0x000764c7) list_highlight_pane_cp021_copy1_ParamLimits

0x95f0,	// (0x000764c7) list_highlight_pane_cp021_copy1

0xdef4,	// (0x0007adcb) cset6_slider_pane_ParamLimits

0xdef4,	// (0x0007adcb) cset6_slider_pane

0xdf20,	// (0x0007adf7) main_cset6_slider_pane_g1_ParamLimits

0xdf20,	// (0x0007adf7) main_cset6_slider_pane_g1

0x747f,	// (0x00074356) main_cset6_slider_pane_g2_ParamLimits

0x747f,	// (0x00074356) main_cset6_slider_pane_g2

0xdf48,	// (0x0007ae1f) main_cset6_slider_pane_g3_ParamLimits

0xdf48,	// (0x0007ae1f) main_cset6_slider_pane_g3

0x74a7,	// (0x0007437e) main_cset6_slider_pane_g4_ParamLimits

0x74a7,	// (0x0007437e) main_cset6_slider_pane_g4

0x74b3,	// (0x0007438a) main_cset6_slider_pane_g5_ParamLimits

0x74b3,	// (0x0007438a) main_cset6_slider_pane_g5

0xd7ac,	// (0x0007a683) main_cset6_slider_pane_g7_ParamLimits

0xd7ac,	// (0x0007a683) main_cset6_slider_pane_g7

0xd7b8,	// (0x0007a68f) main_cset6_slider_pane_g8_ParamLimits

0xd7b8,	// (0x0007a68f) main_cset6_slider_pane_g8

0x6439,	// (0x00073310) main_cset6_slider_pane_g9_ParamLimits

0x6439,	// (0x00073310) main_cset6_slider_pane_g9

0x6445,	// (0x0007331c) main_cset6_slider_pane_g10_ParamLimits

0x6445,	// (0x0007331c) main_cset6_slider_pane_g10

0x6451,	// (0x00073328) main_cset6_slider_pane_g11_ParamLimits

0x6451,	// (0x00073328) main_cset6_slider_pane_g11

0x645d,	// (0x00073334) main_cset6_slider_pane_g12_ParamLimits

0x645d,	// (0x00073334) main_cset6_slider_pane_g12

0x6469,	// (0x00073340) main_cset6_slider_pane_g13_ParamLimits

0x6469,	// (0x00073340) main_cset6_slider_pane_g13

0x6475,	// (0x0007334c) main_cset6_slider_pane_g14_ParamLimits

0x6475,	// (0x0007334c) main_cset6_slider_pane_g14

0x74c1,	// (0x00074398) main_cset6_slider_pane_g15_ParamLimits

0x74c1,	// (0x00074398) main_cset6_slider_pane_g15

0x6499,	// (0x00073370) main_cset6_slider_pane_g16_ParamLimits

0x6499,	// (0x00073370) main_cset6_slider_pane_g16

0x64a7,	// (0x0007337e) main_cset6_slider_pane_g17_ParamLimits

0x64a7,	// (0x0007337e) main_cset6_slider_pane_g17

0x0011,

0xfb98,	// (0x0007ca6f) main_cset6_slider_pane_g_ParamLimits

0xfb98,	// (0x0007ca6f) main_cset6_slider_pane_g

0xdf54,	// (0x0007ae2b) main_cset6_slider_pane_t1_ParamLimits

0xdf54,	// (0x0007ae2b) main_cset6_slider_pane_t1

0x74f1,	// (0x000743c8) main_cset6_slider_pane_t2_ParamLimits

0x74f1,	// (0x000743c8) main_cset6_slider_pane_t2

0x751c,	// (0x000743f3) main_cset6_slider_pane_t3_ParamLimits

0x751c,	// (0x000743f3) main_cset6_slider_pane_t3

0x7547,	// (0x0007441e) main_cset6_slider_pane_t4_ParamLimits

0x7547,	// (0x0007441e) main_cset6_slider_pane_t4

0x7572,	// (0x00074449) main_cset6_slider_pane_t5_ParamLimits

0x7572,	// (0x00074449) main_cset6_slider_pane_t5

0xdf95,	// (0x0007ae6c) main_cset6_slider_pane_t7_ParamLimits

0xdf95,	// (0x0007ae6c) main_cset6_slider_pane_t7

0x759f,	// (0x00074476) main_cset6_slider_pane_t8_ParamLimits

0x759f,	// (0x00074476) main_cset6_slider_pane_t8

0x75c3,	// (0x0007449a) main_cset6_slider_pane_t9_ParamLimits

0x75c3,	// (0x0007449a) main_cset6_slider_pane_t9

0x75e7,	// (0x000744be) main_cset6_slider_pane_t10_ParamLimits

0x75e7,	// (0x000744be) main_cset6_slider_pane_t10

0x760b,	// (0x000744e2) main_cset6_slider_pane_t11_ParamLimits

0x760b,	// (0x000744e2) main_cset6_slider_pane_t11

0xdfcb,	// (0x0007aea2) main_cset6_slider_pane_t14_ParamLimits

0xdfcb,	// (0x0007aea2) main_cset6_slider_pane_t14

0xe004,	// (0x0007aedb) main_cset6_slider_pane_t15_ParamLimits

0xe004,	// (0x0007aedb) main_cset6_slider_pane_t15

0x000b,

0xfbbd,	// (0x0007ca94) main_cset6_slider_pane_t_ParamLimits

0xfbbd,	// (0x0007ca94) main_cset6_slider_pane_t

0xe03d,	// (0x0007af14) cset_slider_pane_g1_copy1

0xe046,	// (0x0007af1d) cset_slider_pane_g2_copy1

0xe04f,	// (0x0007af26) cset_slider_pane_g3_copy1

0x9597,	// (0x0007646e) bg_popup_sub_pane_cp011_copy1

0xe058,	// (0x0007af2f) main_cset_text_pane_g1_copy1

0xd8f4,	// (0x0007a7cb) main_cset_text_pane_t1_copy1

0xd902,	// (0x0007a7d9) main_cset_text_pane_t2_copy1

0xd910,	// (0x0007a7e7) main_cset_text_pane_t3_copy1

0xd91e,	// (0x0007a7f5) main_cset_text_pane_t4_copy1

0xd92c,	// (0x0007a803) main_cset_text_pane_t5_copy1

0xe060,	// (0x0007af37) main_cset_text_pane_t6_copy1

0xe06e,	// (0x0007af45) main_cset_text_pane_t7_copy1

0x73a9,	// (0x00074280) main_cset_text2_pane_t1_copy1

0x95f0,	// (0x000764c7) main_ncimui_pane

0x3a35,	// (0x0007090c) popup_query_ncimui_window_ParamLimits

0x3a35,	// (0x0007090c) popup_query_ncimui_window

0x9f96,	// (0x00076e6d) field_cale_ev2_pane_g4_ParamLimits

0x9f96,	// (0x00076e6d) field_cale_ev2_pane_g4

0x56a4,	// (0x0007257b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x56a4,	// (0x0007257b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89b,	// (0x0007c772) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89b,	// (0x0007c772) cell_video_dialer_keypad_pane_g

0x56bc,	// (0x00072593) cell_video_dialer_keypad_pane_t1

0x9597,	// (0x0007646e) bg_popup_window_pane_cp012

0xb016,	// (0x00077eed) heading_pane_cp06

0xe09a,	// (0x0007af71) ncim_query_content_pane

0x9597,	// (0x0007646e) bg_popup_heading_pane_cp01

0xe0a2,	// (0x0007af79) ncim_heading_pane_t1

0xe0b0,	// (0x0007af87) ncim_indicator_popup_pane

0xe0c2,	// (0x0007af99) ncim_query_button_pane

0xe0d8,	// (0x0007afaf) ncim_query_content_pane_t1

0xe0ea,	// (0x0007afc1) ncim_query_content_pane_t2

0x0005,

0xfc01,	// (0x0007cad8) ncim_query_content_pane_t

0xe124,	// (0x0007affb) ncim_query_list_pane

0xe136,	// (0x0007b00d) ncim_query_popup_pane

0xe0b0,	// (0x0007af87) ncim_indicator_popup_pane_ParamLimits

0x77fe,	// (0x000746d5) ncim_query_content_pane_g1_ParamLimits

0x77fe,	// (0x000746d5) ncim_query_content_pane_g1

0xe0d8,	// (0x0007afaf) ncim_query_content_pane_t1_ParamLimits

0xe0ea,	// (0x0007afc1) ncim_query_content_pane_t2_ParamLimits

0x780a,	// (0x000746e1) ncim_query_content_pane_t3_ParamLimits

0x780a,	// (0x000746e1) ncim_query_content_pane_t3

0x7832,	// (0x00074709) ncim_query_content_pane_t4_ParamLimits

0x7832,	// (0x00074709) ncim_query_content_pane_t4

0x785a,	// (0x00074731) ncim_query_content_pane_t5_ParamLimits

0x785a,	// (0x00074731) ncim_query_content_pane_t5

0xe0fc,	// (0x0007afd3) ncim_query_content_pane_t6_ParamLimits

0xe0fc,	// (0x0007afd3) ncim_query_content_pane_t6

0xfc01,	// (0x0007cad8) ncim_query_content_pane_t_ParamLimits

0xe124,	// (0x0007affb) ncim_query_list_pane_ParamLimits

0xe136,	// (0x0007b00d) ncim_query_popup_pane_ParamLimits

0xe14a,	// (0x0007b021) wait_bar_pane_cp04

0x9597,	// (0x0007646e) input_focus_pane_cp011

0xe152,	// (0x0007b029) ncim_query_popup_pane_t1

0xe160,	// (0x0007b037) ncim_list_query_list_pane_ParamLimits

0xe160,	// (0x0007b037) ncim_list_query_list_pane

0x9597,	// (0x0007646e) bg_button_pane_cp027

0xe173,	// (0x0007b04a) ncim_query_button_pane_g1

0x9597,	// (0x0007646e) list_highlight_pane_cp012

0xe17d,	// (0x0007b054) ncim_list_query_list_pane_g1

0xe185,	// (0x0007b05c) ncim_list_query_list_pane_t1

0xa276,	// (0x0007714d) cam4_indicators_pane_g3_ParamLimits

0xa276,	// (0x0007714d) cam4_indicators_pane_g3

0xa307,	// (0x000771de) vid4_indicators_pane_g5_ParamLimits

0xa307,	// (0x000771de) vid4_indicators_pane_g5

0xa4ae,	// (0x00077385) vid4_progress_pane_g5_ParamLimits

0xa4ae,	// (0x00077385) vid4_progress_pane_g5

0x76ec,	// (0x000745c3) main_ncimui_pane_g1

0x7752,	// (0x00074629) ncimui_group_query_pane_ParamLimits

0x7752,	// (0x00074629) ncimui_group_query_pane

0x779a,	// (0x00074671) ncimui_list_pane_ParamLimits

0x779a,	// (0x00074671) ncimui_list_pane

0x77c1,	// (0x00074698) ncimui_text_pane_ParamLimits

0x77c1,	// (0x00074698) ncimui_text_pane

0x7882,	// (0x00074759) ncimui_text_pane_t1_ParamLimits

0x7882,	// (0x00074759) ncimui_text_pane_t1

0xe193,	// (0x0007b06a) ncimui_list_single_graphic_pane_ParamLimits

0xe193,	// (0x0007b06a) ncimui_list_single_graphic_pane

0x78a0,	// (0x00074777) ncimui_query_pane_ParamLimits

0x78a0,	// (0x00074777) ncimui_query_pane

0x9597,	// (0x0007646e) list_highlight_pane_cp013

0xe1a3,	// (0x0007b07a) ncim_list_query_list_pane_t1_copy1

0xe17d,	// (0x0007b054) ncim_list_single_graphic_pane_g1

0xe1b1,	// (0x0007b088) ncim_query_button_pane_cp01

0xe1bd,	// (0x0007b094) ncim_query_entry_pane_ParamLimits

0xe1bd,	// (0x0007b094) ncim_query_entry_pane

0xe1d0,	// (0x0007b0a7) ncimui_query_pane_g1

0xe1dc,	// (0x0007b0b3) ncimui_query_pane_t1_ParamLimits

0xe1dc,	// (0x0007b0b3) ncimui_query_pane_t1

0x95f0,	// (0x000764c7) input_focus_pane_cp012

0xe1f5,	// (0x0007b0cc) ncim_query_entry_pane_t1

0xa74b,	// (0x00077622) main_im_pane_ParamLimits

0x95f0,	// (0x000764c7) main_mobtv_pane_ParamLimits

0x95f0,	// (0x000764c7) main_mobtv_pane

0x74d9,	// (0x000743b0) main_cset6_slider_pane_g18_ParamLimits

0x74d9,	// (0x000743b0) main_cset6_slider_pane_g18

0x74e5,	// (0x000743bc) main_cset6_slider_pane_g19_ParamLimits

0x74e5,	// (0x000743bc) main_cset6_slider_pane_g19

0x78b3,	// (0x0007478a) bg_main_mobtv_pane_ParamLimits

0x78b3,	// (0x0007478a) bg_main_mobtv_pane

0x78c1,	// (0x00074798) main_mobtv_info_pane

0x78cc,	// (0x000747a3) main_mobtv_loading_pane_ParamLimits

0x78cc,	// (0x000747a3) main_mobtv_loading_pane

0xe207,	// (0x0007b0de) main_mobtv_pg_channel_list_pane

0xe211,	// (0x0007b0e8) main_mobtv_pg_hdr_pane

0x78d9,	// (0x000747b0) main_mobtv_programe_curr_pane_ParamLimits

0x78d9,	// (0x000747b0) main_mobtv_programe_curr_pane

0x78e6,	// (0x000747bd) main_mobtv_programe_next_pane_ParamLimits

0x78e6,	// (0x000747bd) main_mobtv_programe_next_pane

0xe21a,	// (0x0007b0f1) popup_mobtv_noti_window

0xcc91,	// (0x00079b68) main_tv_pg_hdr_pane_g1

0xe224,	// (0x0007b0fb) main_tv_pg_hdr_pane_g2

0xe22c,	// (0x0007b103) main_tv_pg_hdr_pane_g3

0xe234,	// (0x0007b10b) main_tv_pg_hdr_pane_g4

0xe23c,	// (0x0007b113) main_tv_pg_hdr_pane_g5

0xe246,	// (0x0007b11d) main_tv_pg_hdr_pane_g6

0xe250,	// (0x0007b127) main_tv_pg_hdr_pane_g7

0xe25a,	// (0x0007b131) main_tv_pg_hdr_pane_g8

0xe264,	// (0x0007b13b) main_tv_pg_hdr_pane_g9

0xe26e,	// (0x0007b145) main_tv_pg_hdr_pane_g10

0xe278,	// (0x0007b14f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0e,	// (0x0007cae5) main_tv_pg_hdr_pane_g

0xe282,	// (0x0007b159) main_tv_pg_hdr_pane_t1

0xe290,	// (0x0007b167) main_tv_pg_hdr_pane_t2

0xe29e,	// (0x0007b175) main_tv_pg_hdr_pane_t3

0xe2ae,	// (0x0007b185) main_tv_pg_hdr_pane_t4

0xe2be,	// (0x0007b195) main_tv_pg_hdr_pane_t5

0x0004,

0xfc25,	// (0x0007cafc) main_tv_pg_hdr_pane_t

0xe2ce,	// (0x0007b1a5) single_mobtv_pg_channel_pane_ParamLimits

0xe2ce,	// (0x0007b1a5) single_mobtv_pg_channel_pane

0xe2e0,	// (0x0007b1b7) single_mobtv_pg_channel_table_pane

0xe2e9,	// (0x0007b1c0) single_mobtv_pg_channel_thumb_pane

0xe2f2,	// (0x0007b1c9) single_tv_pg_channel_pane_g1

0xe2fb,	// (0x0007b1d2) single_tv_pg_channel_pane_g2

0x0001,

0xfc30,	// (0x0007cb07) single_tv_pg_channel_pane_g

0xcec1,	// (0x00079d98) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcec1,	// (0x00079d98) bg_single_mobtv_pg_channel_thumb_pane

0xe304,	// (0x0007b1db) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe304,	// (0x0007b1db) single_mobtv_pg_channel_thumb_pane_g1

0xe312,	// (0x0007b1e9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe312,	// (0x0007b1e9) single_mobtv_pg_channel_thumb_pane_g2

0xe31e,	// (0x0007b1f5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe31e,	// (0x0007b1f5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc35,	// (0x0007cb0c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc35,	// (0x0007cb0c) single_mobtv_pg_channel_thumb_pane_g

0xe32a,	// (0x0007b201) single_mobtv_pg_channel_thumb_pane_t1

0xe338,	// (0x0007b20f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3c,	// (0x0007cb13) single_mobtv_pg_channel_thumb_pane_t

0xcc91,	// (0x00079b68) bg_single_mobtv_pg_channel_table_pane_g1

0xcc91,	// (0x00079b68) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e7,	// (0x0007c5be) bg_single_mobtv_pg_channel_table_pane_g

0xe346,	// (0x0007b21d) single_mobtv_pg_channel_table_pane_t1

0xe354,	// (0x0007b22b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc41,	// (0x0007cb18) single_mobtv_pg_channel_table_pane_t

0x78fb,	// (0x000747d2) main_mobtv_info_pane_g1_ParamLimits

0x78fb,	// (0x000747d2) main_mobtv_info_pane_g1

0x7919,	// (0x000747f0) main_mobtv_info_pane_t1_ParamLimits

0x7919,	// (0x000747f0) main_mobtv_info_pane_t1

0x7991,	// (0x00074868) main_mobtv_info_pane_t2_ParamLimits

0x7991,	// (0x00074868) main_mobtv_info_pane_t2

0x0002,

0xfc4b,	// (0x0007cb22) main_mobtv_info_pane_t_ParamLimits

0xfc4b,	// (0x0007cb22) main_mobtv_info_pane_t

0x7a20,	// (0x000748f7) wait_bar_pane_cp05

0x7a32,	// (0x00074909) main_mobtv_loading_pane_g1_ParamLimits

0x7a32,	// (0x00074909) main_mobtv_loading_pane_g1

0x7a43,	// (0x0007491a) main_mobtv_loading_pane_g2_ParamLimits

0x7a43,	// (0x0007491a) main_mobtv_loading_pane_g2

0x7a4f,	// (0x00074926) main_mobtv_loading_pane_g3_ParamLimits

0x7a4f,	// (0x00074926) main_mobtv_loading_pane_g3

0x0002,

0xfc52,	// (0x0007cb29) main_mobtv_loading_pane_g_ParamLimits

0xfc52,	// (0x0007cb29) main_mobtv_loading_pane_g

0xe362,	// (0x0007b239) main_mobtv_loading_pane_t1_ParamLimits

0xe362,	// (0x0007b239) main_mobtv_loading_pane_t1

0xe37a,	// (0x0007b251) main_mobtv_loading_pane_t2_ParamLimits

0xe37a,	// (0x0007b251) main_mobtv_loading_pane_t2

0x0001,

0xfc59,	// (0x0007cb30) main_mobtv_loading_pane_t_ParamLimits

0xfc59,	// (0x0007cb30) main_mobtv_loading_pane_t

0x7a62,	// (0x00074939) wait_bar_pane_cp06_ParamLimits

0x7a62,	// (0x00074939) wait_bar_pane_cp06

0xe39e,	// (0x0007b275) main_mobtv_programe_curr_pane_t1

0xe3ac,	// (0x0007b283) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5e,	// (0x0007cb35) main_mobtv_programe_curr_pane_t

0xe3ba,	// (0x0007b291) main_mobtv_programe_next_pane_t1

0xe3c8,	// (0x0007b29f) main_mobtv_programe_next_pane_t2

0xe3d6,	// (0x0007b2ad) main_mobtv_programe_next_pane_t3

0x0002,

0xfc63,	// (0x0007cb3a) main_mobtv_programe_next_pane_t

0x9597,	// (0x0007646e) bg_popup_mobtv_noti_window_pane

0xe3e4,	// (0x0007b2bb) popup_mobtv_noti_window_g1

0xe3ec,	// (0x0007b2c3) popup_mobtv_noti_window_t1

0xe3fa,	// (0x0007b2d1) popup_mobtv_noti_window_t2

0x0001,

0xfc6a,	// (0x0007cb41) popup_mobtv_noti_window_t

0xcc91,	// (0x00079b68) bg_popup_mobtv_noti_window_pane_g1

0x9597,	// (0x0007646e) sc_clock_pane

0x9597,	// (0x0007646e) main_fs_bigclock_pane

0x70fb,	// (0x00073fd2) blid2_tripm_pane_t4_ParamLimits

0x70fb,	// (0x00073fd2) blid2_tripm_pane_t4

0x7a71,	// (0x00074948) sc_clock_pane_g1_ParamLimits

0x7a71,	// (0x00074948) sc_clock_pane_g1

0x7a83,	// (0x0007495a) sc_clock_pane_t1_ParamLimits

0x7a83,	// (0x0007495a) sc_clock_pane_t1

0x7aa7,	// (0x0007497e) sc_clock_pane_t2_ParamLimits

0x7aa7,	// (0x0007497e) sc_clock_pane_t2

0x7abf,	// (0x00074996) sc_clock_pane_t3_ParamLimits

0x7abf,	// (0x00074996) sc_clock_pane_t3

0x0004,

0xfc6f,	// (0x0007cb46) sc_clock_pane_t_ParamLimits

0xfc6f,	// (0x0007cb46) sc_clock_pane_t

0x8a69,	// (0x00075940) main_fs_bigclock_indicator_pane_ParamLimits

0x8a69,	// (0x00075940) main_fs_bigclock_indicator_pane

0xce91,	// (0x00079d68) main_fs_bigclock_pane_g1_ParamLimits

0xce91,	// (0x00079d68) main_fs_bigclock_pane_g1

0x8a75,	// (0x0007594c) main_fs_bigclock_pane_t1_ParamLimits

0x8a75,	// (0x0007594c) main_fs_bigclock_pane_t1

0x8a87,	// (0x0007595e) main_fs_bigclock_pane_t2_ParamLimits

0x8a87,	// (0x0007595e) main_fs_bigclock_pane_t2

0x8a9b,	// (0x00075972) main_fs_bigclock_pane_t3_ParamLimits

0x8a9b,	// (0x00075972) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0007cd4a) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0007cd4a) main_fs_bigclock_pane_t

0xec4d,	// (0x0007bb24) main_fs_bigclock_indicator_pane_g1

0xe0ca,	// (0x0007afa1) ncim_query_content_pane_g2_ParamLimits

0xe0ca,	// (0x0007afa1) ncim_query_content_pane_g2

0x0001,

0xfbfc,	// (0x0007cad3) ncim_query_content_pane_g_ParamLimits

0xfbfc,	// (0x0007cad3) ncim_query_content_pane_g

0x7ad6,	// (0x000749ad) sc_clock_pane_t4_ParamLimits

0x7ad6,	// (0x000749ad) sc_clock_pane_t4

0x95f0,	// (0x000764c7) main_radioblah_pane

0xd5c4,	// (0x0007a49b) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5c4,	// (0x0007a49b) cell_call4_button_pane_t1_copy1

0x7704,	// (0x000745db) main_ncimui_pane_t1_ParamLimits

0x7704,	// (0x000745db) main_ncimui_pane_t1

0x771e,	// (0x000745f5) main_ncimui_pane_t2_ParamLimits

0x771e,	// (0x000745f5) main_ncimui_pane_t2

0x0002,

0xfbf5,	// (0x0007cacc) main_ncimui_pane_t_ParamLimits

0xfbf5,	// (0x0007cacc) main_ncimui_pane_t

0xe546,	// (0x0007b41d) main_radioblah_anim_pane_ParamLimits

0xe546,	// (0x0007b41d) main_radioblah_anim_pane

0xe557,	// (0x0007b42e) main_radioblah_info_pane_ParamLimits

0xe557,	// (0x0007b42e) main_radioblah_info_pane

0xe56b,	// (0x0007b442) main_radioblah_pane_t1_ParamLimits

0xe56b,	// (0x0007b442) main_radioblah_pane_t1

0xe587,	// (0x0007b45e) main_radioblah_pane_t2_ParamLimits

0xe587,	// (0x0007b45e) main_radioblah_pane_t2

0x0003,

0xfc90,	// (0x0007cb67) main_radioblah_pane_t_ParamLimits

0xfc90,	// (0x0007cb67) main_radioblah_pane_t

0x7b86,	// (0x00074a5d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7b86,	// (0x00074a5d) main_radioblah_rocker_ctrl_pane

0xe5cf,	// (0x0007b4a6) main_radioblah_info_pane_t1_ParamLimits

0xe5cf,	// (0x0007b4a6) main_radioblah_info_pane_t1

0x7bde,	// (0x00074ab5) main_radioblah_info_pane_t2_ParamLimits

0x7bde,	// (0x00074ab5) main_radioblah_info_pane_t2

0x0003,

0xfc99,	// (0x0007cb70) main_radioblah_info_pane_t_ParamLimits

0xfc99,	// (0x0007cb70) main_radioblah_info_pane_t

0xcc91,	// (0x00079b68) main_radioblah_rocker_ctrl_pane_g1

0x7c8e,	// (0x00074b65) main_radioblah_rocker_ctrl_pane_g2

0x7c96,	// (0x00074b6d) main_radioblah_rocker_ctrl_pane_g3

0x7c9e,	// (0x00074b75) main_radioblah_rocker_ctrl_pane_g4

0x7ca6,	// (0x00074b7d) main_radioblah_rocker_ctrl_pane_g5

0x7cae,	// (0x00074b85) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca2,	// (0x0007cb79) main_radioblah_rocker_ctrl_pane_g

0x73a9,	// (0x00074280) main_cset_text2_pane_t1_copy1_ParamLimits

0xa239,	// (0x00077110) cam4_image_uncrop_qvga_pane

0xa29c,	// (0x00077173) vid4_image_uncrop_qcif_pane

0xa52a,	// (0x00077401) cam6_image_uncrop_qvga_pane_ParamLimits

0xa52a,	// (0x00077401) cam6_image_uncrop_qvga_pane

0xddb2,	// (0x0007ac89) vid6_image_uncrop_qcif_pane_ParamLimits

0xddb2,	// (0x0007ac89) vid6_image_uncrop_qcif_pane

0x9597,	// (0x0007646e) bg_popup_preview_window_pane_cp03

0xe07c,	// (0x0007af53) list_cset_text2_pane

0xe084,	// (0x0007af5b) main_cset6_text2_pane_g1

0xe08c,	// (0x0007af63) main_cset6_text2_pane_t1

0x7cb6,	// (0x00074b8d) list_cset_text2_pane_t1_ParamLimits

0x7cb6,	// (0x00074b8d) list_cset_text2_pane_t1

0x95f0,	// (0x000764c7) main_radioblah_pane_ParamLimits

0x7a0c,	// (0x000748e3) main_mobtv_info_pane_t3_ParamLimits

0x7a0c,	// (0x000748e3) main_mobtv_info_pane_t3

0x7b74,	// (0x00074a4b) main_radioblah_pane_g1

0x7bae,	// (0x00074a85) main_radioblah_info_pane_g1

0x7c33,	// (0x00074b0a) main_radioblah_info_pane_t3_ParamLimits

0x7c33,	// (0x00074b0a) main_radioblah_info_pane_t3

0x2247,	// (0x0006f11e) highlight_cell_cale_month_pane_ParamLimits

0x2247,	// (0x0006f11e) highlight_cell_cale_month_pane

0x9597,	// (0x0007646e) main_phob_fisheye_pane

0xcf9d,	// (0x00079e74) scroll_pane_cp0031_ParamLimits

0xcf9d,	// (0x00079e74) scroll_pane_cp0031

0xdec4,	// (0x0007ad9b) wait_bar_pane_cp08_ParamLimits

0x742f,	// (0x00074306) cset_list_set_pane_copy1_ParamLimits

0xe609,	// (0x0007b4e0) highlight_cell_cale_month_pane_g1

0x7ccf,	// (0x00074ba6) highlight_cell_cale_month_pane_t1

0xdb2c,	// (0x0007aa03) list_gen_pane_cp01

0xd797,	// (0x0007a66e) scroll_pane_01

0x7cdd,	// (0x00074bb4) list_single_double_fisheye_pane

0x7ce6,	// (0x00074bbd) list_double_fisheye_pane_g1_ParamLimits

0x7ce6,	// (0x00074bbd) list_double_fisheye_pane_g1

0x7cf2,	// (0x00074bc9) list_double_fisheye_pane_g2_ParamLimits

0x7cf2,	// (0x00074bc9) list_double_fisheye_pane_g2

0x7d06,	// (0x00074bdd) list_double_fisheye_pane_g3_ParamLimits

0x7d06,	// (0x00074bdd) list_double_fisheye_pane_g3

0x0004,

0xfcaf,	// (0x0007cb86) list_double_fisheye_pane_g_ParamLimits

0xfcaf,	// (0x0007cb86) list_double_fisheye_pane_g

0x7d2f,	// (0x00074c06) list_double_fisheye_pane_t1_ParamLimits

0x7d2f,	// (0x00074c06) list_double_fisheye_pane_t1

0x7d4a,	// (0x00074c21) list_double_fisheye_pane_t2_ParamLimits

0x7d4a,	// (0x00074c21) list_double_fisheye_pane_t2

0x0001,

0xfcba,	// (0x0007cb91) list_double_fisheye_pane_t_ParamLimits

0xfcba,	// (0x0007cb91) list_double_fisheye_pane_t

0x9597,	// (0x0007646e) main_call5_pane

0x7b01,	// (0x000749d8) sc_swipe_pane_ParamLimits

0x7b01,	// (0x000749d8) sc_swipe_pane

0x7d7f,	// (0x00074c56) call5_image_pane_ParamLimits

0x7d7f,	// (0x00074c56) call5_image_pane

0x7d9c,	// (0x00074c73) call5_swipe_1_pane_ParamLimits

0x7d9c,	// (0x00074c73) call5_swipe_1_pane

0x7daf,	// (0x00074c86) call5_swipe_2_pane_ParamLimits

0x7daf,	// (0x00074c86) call5_swipe_2_pane

0x7ddc,	// (0x00074cb3) popup_call5_audio_first_window_ParamLimits

0x7ddc,	// (0x00074cb3) popup_call5_audio_first_window

0xcec1,	// (0x00079d98) call5_swipe_1_pane_g1_ParamLimits

0xcec1,	// (0x00079d98) call5_swipe_1_pane_g1

0xe611,	// (0x0007b4e8) call5_swipe_1_pane_g2_ParamLimits

0xe611,	// (0x0007b4e8) call5_swipe_1_pane_g2

0x0001,

0xfcbf,	// (0x0007cb96) call5_swipe_1_pane_g_ParamLimits

0xfcbf,	// (0x0007cb96) call5_swipe_1_pane_g

0xe61d,	// (0x0007b4f4) call5_swipe_1_pane_t1_ParamLimits

0xe61d,	// (0x0007b4f4) call5_swipe_1_pane_t1

0xcec1,	// (0x00079d98) call5_swipe_2_pane_g1_ParamLimits

0xcec1,	// (0x00079d98) call5_swipe_2_pane_g1

0xe632,	// (0x0007b509) call5_swipe_2_pane_g2_ParamLimits

0xe632,	// (0x0007b509) call5_swipe_2_pane_g2

0x0001,

0xfcc4,	// (0x0007cb9b) call5_swipe_2_pane_g_ParamLimits

0xfcc4,	// (0x0007cb9b) call5_swipe_2_pane_g

0xe63e,	// (0x0007b515) call5_swipe_2_pane_t1_ParamLimits

0xe63e,	// (0x0007b515) call5_swipe_2_pane_t1

0xe653,	// (0x0007b52a) sc_swipe_pane_g1_ParamLimits

0xe653,	// (0x0007b52a) sc_swipe_pane_g1

0xe660,	// (0x0007b537) sc_swipe_pane_g2_ParamLimits

0xe660,	// (0x0007b537) sc_swipe_pane_g2

0x0001,

0xfcc9,	// (0x0007cba0) sc_swipe_pane_g_ParamLimits

0xfcc9,	// (0x0007cba0) sc_swipe_pane_g

0xe66c,	// (0x0007b543) sc_swipe_pane_t1_ParamLimits

0xe66c,	// (0x0007b543) sc_swipe_pane_t1

0x9597,	// (0x0007646e) main_cmail_launcher_pane

0x7df1,	// (0x00074cc8) aid_size_cell_cmail_l_ParamLimits

0x7df1,	// (0x00074cc8) aid_size_cell_cmail_l

0x7e0b,	// (0x00074ce2) grid_cmail_l_pane_ParamLimits

0x7e0b,	// (0x00074ce2) grid_cmail_l_pane

0x7e26,	// (0x00074cfd) cell_cmail_l_pane_ParamLimits

0x7e26,	// (0x00074cfd) cell_cmail_l_pane

0x7e4e,	// (0x00074d25) cell_cmail_l_pane_g1_ParamLimits

0x7e4e,	// (0x00074d25) cell_cmail_l_pane_g1

0x7e5a,	// (0x00074d31) cell_cmail_l_pane_t1_ParamLimits

0x7e5a,	// (0x00074d31) cell_cmail_l_pane_t1

0xe681,	// (0x0007b558) cell_cmail_l_pane_t2_ParamLimits

0xe681,	// (0x0007b558) cell_cmail_l_pane_t2

0x0001,

0xfcce,	// (0x0007cba5) cell_cmail_l_pane_t_ParamLimits

0xfcce,	// (0x0007cba5) cell_cmail_l_pane_t

0x95f0,	// (0x000764c7) grid_highlight_pane_cp018_ParamLimits

0x95f0,	// (0x000764c7) grid_highlight_pane_cp018

0xfee6,	// (0x0006cdbd) main2_pane_ParamLimits

0xfee6,	// (0x0006cdbd) main2_pane

0xa7f6,	// (0x000776cd) popup_sp_fs_action_menu_bg_pane_g1

0xa7fe,	// (0x000776d5) popup_sp_fs_action_menu_bg_pane_g2

0xa806,	// (0x000776dd) popup_sp_fs_action_menu_bg_pane_g3

0xa80e,	// (0x000776e5) popup_sp_fs_action_menu_bg_pane_g4

0xa816,	// (0x000776ed) popup_sp_fs_action_menu_bg_pane_g5

0xa81e,	// (0x000776f5) popup_sp_fs_action_menu_bg_pane_g6

0xa826,	// (0x000776fd) popup_sp_fs_action_menu_bg_pane_g7

0xa82e,	// (0x00077705) popup_sp_fs_action_menu_bg_pane_g8

0xa836,	// (0x0007770d) popup_sp_fs_action_menu_bg_pane_g9

0xa83e,	// (0x00077715) popup_sp_fs_action_menu_bg_pane_g10

0xa83e,	// (0x00077715) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf193,	// (0x0007c06a) popup_sp_fs_action_menu_bg_pane_g

0x9d97,	// (0x00076c6e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9d97,	// (0x00076c6e) list_medium_line_x2_t3_g3_g1

0x1085,	// (0x0006df5c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1085,	// (0x0006df5c) list_medium_line_x2_t3_g3_g2

0x9da3,	// (0x00076c7a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9da3,	// (0x00076c7a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf243,	// (0x0007c11a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf243,	// (0x0007c11a) list_medium_line_x2_t3_g3_g

0x1091,	// (0x0006df68) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1091,	// (0x0006df68) list_medium_line_x2_t3_g3_t1

0x10a6,	// (0x0006df7d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x10a6,	// (0x0006df7d) list_medium_line_x2_t3_g3_t2

0x10ba,	// (0x0006df91) list_medium_line_x2_t3_g3_t3_ParamLimits

0x10ba,	// (0x0006df91) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24a,	// (0x0007c121) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24a,	// (0x0007c121) list_medium_line_x2_t3_g3_t

0x9d97,	// (0x00076c6e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9d97,	// (0x00076c6e) list_medium_line_x2_t3_g2_g1

0x9da3,	// (0x00076c7a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9da3,	// (0x00076c7a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf251,	// (0x0007c128) list_medium_line_x2_t3_g2_g_ParamLimits

0xf251,	// (0x0007c128) list_medium_line_x2_t3_g2_g

0x10cf,	// (0x0006dfa6) list_medium_line_x2_t3_g2_t1_ParamLimits

0x10cf,	// (0x0006dfa6) list_medium_line_x2_t3_g2_t1

0x10e5,	// (0x0006dfbc) list_medium_line_x2_t3_g2_t2_ParamLimits

0x10e5,	// (0x0006dfbc) list_medium_line_x2_t3_g2_t2

0x10f7,	// (0x0006dfce) list_medium_line_x2_t3_g2_t3_ParamLimits

0x10f7,	// (0x0006dfce) list_medium_line_x2_t3_g2_t3

0x0002,

0xf256,	// (0x0007c12d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf256,	// (0x0007c12d) list_medium_line_x2_t3_g2_t

0x9d97,	// (0x00076c6e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9d97,	// (0x00076c6e) list_medium_line_x2_t4_g4_g1

0x1115,	// (0x0006dfec) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1115,	// (0x0006dfec) list_medium_line_x2_t4_g4_g2

0x1085,	// (0x0006df5c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1085,	// (0x0006df5c) list_medium_line_x2_t4_g4_g3

0x9daf,	// (0x00076c86) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9daf,	// (0x00076c86) list_medium_line_x2_t4_g4_g4

0x0003,

0xf25d,	// (0x0007c134) list_medium_line_x2_t4_g4_g_ParamLimits

0xf25d,	// (0x0007c134) list_medium_line_x2_t4_g4_g

0x1121,	// (0x0006dff8) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1121,	// (0x0006dff8) list_medium_line_x2_t4_g4_t1

0x113b,	// (0x0006e012) list_medium_line_x2_t4_g4_t2_ParamLimits

0x113b,	// (0x0006e012) list_medium_line_x2_t4_g4_t2

0x1151,	// (0x0006e028) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1151,	// (0x0006e028) list_medium_line_x2_t4_g4_t3

0x1166,	// (0x0006e03d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1166,	// (0x0006e03d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf266,	// (0x0007c13d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf266,	// (0x0007c13d) list_medium_line_x2_t4_g4_t

0x9d97,	// (0x00076c6e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9d97,	// (0x00076c6e) list_medium_line_x2_t2_g4_g1

0x1115,	// (0x0006dfec) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1115,	// (0x0006dfec) list_medium_line_x2_t2_g4_g2

0x1085,	// (0x0006df5c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1085,	// (0x0006df5c) list_medium_line_x2_t2_g4_g3

0x9da3,	// (0x00076c7a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9da3,	// (0x00076c7a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2cd,	// (0x0007c1a4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2cd,	// (0x0007c1a4) list_medium_line_x2_t2_g4_g

0x226d,	// (0x0006f144) list_medium_line_x2_t2_g4_t1_ParamLimits

0x226d,	// (0x0006f144) list_medium_line_x2_t2_g4_t1

0x10ba,	// (0x0006df91) list_medium_line_x2_t2_g4_t2_ParamLimits

0x10ba,	// (0x0006df91) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d6,	// (0x0007c1ad) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d6,	// (0x0007c1ad) list_medium_line_x2_t2_g4_t

0x9d97,	// (0x00076c6e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9d97,	// (0x00076c6e) list_medium_line_x2_t2_g3_g1

0x1085,	// (0x0006df5c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1085,	// (0x0006df5c) list_medium_line_x2_t2_g3_g2

0x9da3,	// (0x00076c7a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9da3,	// (0x00076c7a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf243,	// (0x0007c11a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf243,	// (0x0007c11a) list_medium_line_x2_t2_g3_g

0x2282,	// (0x0006f159) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2282,	// (0x0006f159) list_medium_line_x2_t2_g3_t1

0x10ba,	// (0x0006df91) list_medium_line_x2_t2_g3_t2_ParamLimits

0x10ba,	// (0x0006df91) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2db,	// (0x0007c1b2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2db,	// (0x0007c1b2) list_medium_line_x2_t2_g3_t

0x23da,	// (0x0006f2b1) main_sp_fs_list_pane_ParamLimits

0x23da,	// (0x0006f2b1) main_sp_fs_list_pane

0x23e6,	// (0x0006f2bd) sp_fs_scroll_pane_ParamLimits

0x23e6,	// (0x0006f2bd) sp_fs_scroll_pane

0x23f2,	// (0x0006f2c9) list_medium_line_x2_t3_t1

0x2402,	// (0x0006f2d9) list_medium_line_x2_t3_t2

0x2410,	// (0x0006f2e7) list_medium_line_x2_t3_t3

0x0002,

0xf326,	// (0x0007c1fd) list_medium_line_x2_t3_t

0x241e,	// (0x0006f2f5) list_medium_line_x3_t4_t1

0x242e,	// (0x0006f305) list_medium_line_x3_t4_t2

0x243c,	// (0x0006f313) list_medium_line_x3_t4_t3

0x2410,	// (0x0006f2e7) list_medium_line_x3_t4_t4

0x0003,

0xf32d,	// (0x0007c204) list_medium_line_x3_t4_t

0x244a,	// (0x0006f321) list_medium_line_x4_t5_t1

0x245a,	// (0x0006f331) list_medium_line_x4_t5_t2

0x243c,	// (0x0006f313) list_medium_line_x4_t5_t3

0x2468,	// (0x0006f33f) list_medium_line_x4_t5_t4

0x2410,	// (0x0006f2e7) list_medium_line_x4_t5_t5

0x0004,

0xf336,	// (0x0007c20d) list_medium_line_x4_t5_t

0x9d97,	// (0x00076c6e) list_medium_line_t4_g4_g1_ParamLimits

0x9d97,	// (0x00076c6e) list_medium_line_t4_g4_g1

0x9daf,	// (0x00076c86) list_medium_line_t4_g4_g2_ParamLimits

0x9daf,	// (0x00076c86) list_medium_line_t4_g4_g2

0x2476,	// (0x0006f34d) list_medium_line_t4_g4_g3_ParamLimits

0x2476,	// (0x0006f34d) list_medium_line_t4_g4_g3

0x9da3,	// (0x00076c7a) list_medium_line_t4_g4_g4_ParamLimits

0x9da3,	// (0x00076c7a) list_medium_line_t4_g4_g4

0x0003,

0xf341,	// (0x0007c218) list_medium_line_t4_g4_g_ParamLimits

0xf341,	// (0x0007c218) list_medium_line_t4_g4_g

0x2482,	// (0x0006f359) list_medium_line_t4_g4_t1_ParamLimits

0x2482,	// (0x0006f359) list_medium_line_t4_g4_t1

0x2497,	// (0x0006f36e) list_medium_line_t4_g4_t2_ParamLimits

0x2497,	// (0x0006f36e) list_medium_line_t4_g4_t2

0x24ad,	// (0x0006f384) list_medium_line_t4_g4_t3_ParamLimits

0x24ad,	// (0x0006f384) list_medium_line_t4_g4_t3

0x10ba,	// (0x0006df91) list_medium_line_t4_g4_t4_ParamLimits

0x10ba,	// (0x0006df91) list_medium_line_t4_g4_t4

0x0003,

0xf34a,	// (0x0007c221) list_medium_line_t4_g4_t_ParamLimits

0xf34a,	// (0x0007c221) list_medium_line_t4_g4_t

0x2589,	// (0x0006f460) chi_dic_find_pane_g1

0x37bb,	// (0x00070692) main_tport_pane

0x6781,	// (0x00073658) list_medium_line_plain_t1

0x6835,	// (0x0007370c) list_medium_line_t2_g2_g1_ParamLimits

0x6835,	// (0x0007370c) list_medium_line_t2_g2_g1

0x6841,	// (0x00073718) list_medium_line_t2_g2_g2_ParamLimits

0x6841,	// (0x00073718) list_medium_line_t2_g2_g2

0x0001,

0xfa06,	// (0x0007c8dd) list_medium_line_t2_g2_g_ParamLimits

0xfa06,	// (0x0007c8dd) list_medium_line_t2_g2_g

0x684d,	// (0x00073724) list_medium_line_t2_g2_t1_ParamLimits

0x684d,	// (0x00073724) list_medium_line_t2_g2_t1

0x6864,	// (0x0007373b) list_medium_line_t2_g2_t2_ParamLimits

0x6864,	// (0x0007373b) list_medium_line_t2_g2_t2

0x0001,

0xfa0b,	// (0x0007c8e2) list_medium_line_t2_g2_t_ParamLimits

0xfa0b,	// (0x0007c8e2) list_medium_line_t2_g2_t

0xa511,	// (0x000773e8) aid_sp_fs_list_icon_a_sm

0xa519,	// (0x000773f0) aid_sp_fs_list_icon_d

0xa521,	// (0x000773f8) aid_sp_fs_text_primary

0xdb66,	// (0x0007aa3d) aid_sp_fs_text_secondary

0x6ea8,	// (0x00073d7f) list_medium_line

0x6ea8,	// (0x00073d7f) list_medium_line_g2

0x6ea8,	// (0x00073d7f) list_medium_line_g3

0x6ea8,	// (0x00073d7f) list_medium_line_plain

0x6ea8,	// (0x00073d7f) list_medium_line_plain_t2

0x6ea8,	// (0x00073d7f) list_medium_line_plain_t3

0x6ea8,	// (0x00073d7f) list_medium_line_right_icon

0x6ea8,	// (0x00073d7f) list_medium_line_right_iconx2

0x6ea8,	// (0x00073d7f) list_medium_line_t2

0x6ea8,	// (0x00073d7f) list_medium_line_t2_g2

0x6ea8,	// (0x00073d7f) list_medium_line_t2_g3

0x6ea8,	// (0x00073d7f) list_medium_line_t2_right_icon

0x6ea8,	// (0x00073d7f) list_medium_line_t2_right_iconx2

0x6ea8,	// (0x00073d7f) list_medium_line_t3

0x6ea8,	// (0x00073d7f) list_medium_line_t3_g2

0x6ea8,	// (0x00073d7f) list_medium_line_t3_g3

0x6ea8,	// (0x00073d7f) list_medium_line_t3_right_iconx2

0x6eb1,	// (0x00073d88) list_medium_line_t4_g4

0x6eba,	// (0x00073d91) list_medium_line_x2

0x6eba,	// (0x00073d91) list_medium_line_x2_t2_g2

0x6eba,	// (0x00073d91) list_medium_line_x2_t2_g3

0x6eba,	// (0x00073d91) list_medium_line_x2_t2_g4

0x6eba,	// (0x00073d91) list_medium_line_x2_t3

0x6eba,	// (0x00073d91) list_medium_line_x2_t3_g2

0x6eba,	// (0x00073d91) list_medium_line_x2_t3_g3

0x6eba,	// (0x00073d91) list_medium_line_x2_t3_g4

0x6eba,	// (0x00073d91) list_medium_line_x2_t4_g2

0x6eba,	// (0x00073d91) list_medium_line_x2_t4_g4

0x6ec3,	// (0x00073d9a) list_medium_line_x3

0x6ec3,	// (0x00073d9a) list_medium_line_x3_t4

0x6ec3,	// (0x00073d9a) list_medium_line_x3_t4_g4

0x6eb1,	// (0x00073d88) list_medium_line_x4_t4

0x6eb1,	// (0x00073d88) list_medium_line_x4_t4_g7

0x6eb1,	// (0x00073d88) list_medium_line_x4_t5

0x6ecc,	// (0x00073da3) list_single_fs_dyc_pane_ParamLimits

0x6ecc,	// (0x00073da3) list_single_fs_dyc_pane

0x9d97,	// (0x00076c6e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9d97,	// (0x00076c6e) list_medium_line_x4_t4_g7_g1

0xa538,	// (0x0007740f) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa538,	// (0x0007740f) list_medium_line_x4_t4_g7_g2

0x7631,	// (0x00074508) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7631,	// (0x00074508) list_medium_line_x4_t4_g7_g3

0x7640,	// (0x00074517) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7640,	// (0x00074517) list_medium_line_x4_t4_g7_g4

0x764c,	// (0x00074523) list_medium_line_x4_t4_g7_g5_ParamLimits

0x764c,	// (0x00074523) list_medium_line_x4_t4_g7_g5

0x765b,	// (0x00074532) list_medium_line_x4_t4_g7_g6_ParamLimits

0x765b,	// (0x00074532) list_medium_line_x4_t4_g7_g6

0xa544,	// (0x0007741b) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa544,	// (0x0007741b) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd6,	// (0x0007caad) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd6,	// (0x0007caad) list_medium_line_x4_t4_g7_g

0x766a,	// (0x00074541) list_medium_line_x4_t4_g7_t1_ParamLimits

0x766a,	// (0x00074541) list_medium_line_x4_t4_g7_t1

0x767f,	// (0x00074556) list_medium_line_x4_t4_g7_t2_ParamLimits

0x767f,	// (0x00074556) list_medium_line_x4_t4_g7_t2

0x7694,	// (0x0007456b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7694,	// (0x0007456b) list_medium_line_x4_t4_g7_t3

0x76a9,	// (0x00074580) list_medium_line_x4_t4_g7_t4_ParamLimits

0x76a9,	// (0x00074580) list_medium_line_x4_t4_g7_t4

0xa550,	// (0x00077427) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa550,	// (0x00077427) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe5,	// (0x0007cabc) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe5,	// (0x0007cabc) list_medium_line_x4_t4_g7_t

0x76bb,	// (0x00074592) list_single_dyc_row_pane_ParamLimits

0x76bb,	// (0x00074592) list_single_dyc_row_pane

0x7d6c,	// (0x00074c43) call5_gesture_pane_ParamLimits

0x7d6c,	// (0x00074c43) call5_gesture_pane

0x7dc2,	// (0x00074c99) call5_windows_pane_ParamLimits

0x7dc2,	// (0x00074c99) call5_windows_pane

0x7e70,	// (0x00074d47) call5_swipe_1_pane_cp_ParamLimits

0x7e70,	// (0x00074d47) call5_swipe_1_pane_cp

0x7e7c,	// (0x00074d53) call5_swipe_2_pane_cp_ParamLimits

0x7e7c,	// (0x00074d53) call5_swipe_2_pane_cp

0xb264,	// (0x0007813b) call5_image_pane_cp

0x7e88,	// (0x00074d5f) popup_call5_audio_first_window_cp_ParamLimits

0x7e88,	// (0x00074d5f) popup_call5_audio_first_window_cp

0xe653,	// (0x0007b52a) call5_swipe_1_pane_g1_cp_ParamLimits

0xe653,	// (0x0007b52a) call5_swipe_1_pane_g1_cp

0xe693,	// (0x0007b56a) call5_swipe_1_pane_g2_cp

0xe66c,	// (0x0007b543) call5_swipe_1_pane_t1_cp_ParamLimits

0xe66c,	// (0x0007b543) call5_swipe_1_pane_t1_cp

0xe653,	// (0x0007b52a) call5_swipe_2_pane_g1_cp_ParamLimits

0xe653,	// (0x0007b52a) call5_swipe_2_pane_g1_cp

0xe69b,	// (0x0007b572) call5_swipe_2_pane_g2_cp

0xe6a3,	// (0x0007b57a) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6a3,	// (0x0007b57a) call5_swipe_2_pane_t1_cp

0x95f0,	// (0x000764c7) main_sp_fs_email_pane

0xe6b8,	// (0x0007b58f) main_sp_fs_listscroll_pane_te

0xa562,	// (0x00077439) popup_sp_fs_action_menu_pane_ParamLimits

0xa562,	// (0x00077439) popup_sp_fs_action_menu_pane

0xcc91,	// (0x00079b68) bg_sp_fs_ctrlbar_pane_g1

0xe6c1,	// (0x0007b598) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6ca,	// (0x0007b5a1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6d3,	// (0x0007b5aa) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc91,	// (0x00079b68) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd3,	// (0x0007cbaa) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca70,	// (0x00079947) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca70,	// (0x00079947) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6dc,	// (0x0007b5b3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6dc,	// (0x0007b5b3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6e8,	// (0x0007b5bf) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6e8,	// (0x0007b5bf) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdc,	// (0x0007cbb3) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdc,	// (0x0007cbb3) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6f4,	// (0x0007b5cb) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6f4,	// (0x0007b5cb) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7e96,	// (0x00074d6d) list_medium_line_t2_right_icon_g1

0x7e9e,	// (0x00074d75) list_medium_line_t2_right_icon_t1

0x7eae,	// (0x00074d85) list_medium_line_t2_right_icon_t2

0x0001,

0xfce1,	// (0x0007cbb8) list_medium_line_t2_right_icon_t

0xc838,	// (0x0007970f) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc838,	// (0x0007970f) bg_sp_fs_ctrlbar_pane

0x7f0d,	// (0x00074de4) main_sp_fs_ctrlbar_button_pane_cp01

0x7f17,	// (0x00074dee) main_sp_fs_ctrlbar_ddmenu_pane

0xe746,	// (0x0007b61d) main_sp_fs_ctrlbar_pane_g1

0xe752,	// (0x0007b629) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce6,	// (0x0007cbbd) main_sp_fs_ctrlbar_pane_g

0xe75e,	// (0x0007b635) main_sp_fs_ctrlbar_pane_t1

0x7f21,	// (0x00074df8) main_sp_fs_ctrlbar_pane

0x7f45,	// (0x00074e1c) main_sp_fs_listscroll_pane_te_cp01

0x7f65,	// (0x00074e3c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7f65,	// (0x00074e3c) popup_sp_fs_action_menu_pane_cp01

0x95f0,	// (0x000764c7) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x95f0,	// (0x000764c7) bg_sp_fs_highlight_list_pane_cp01

0xa5a8,	// (0x0007747f) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa5a8,	// (0x0007747f) sp_fs_action_menu_list_gene_pane_g1

0xe78e,	// (0x0007b665) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe78e,	// (0x0007b665) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf0,	// (0x0007cbc7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf0,	// (0x0007cbc7) sp_fs_action_menu_list_gene_pane_g

0xa5b7,	// (0x0007748e) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa5b7,	// (0x0007748e) sp_fs_action_menu_list_gene_pane_t1

0xa5cf,	// (0x000774a6) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa5cf,	// (0x000774a6) sp_fs_action_menu_list_gene_pane

0xe79b,	// (0x0007b672) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe79b,	// (0x0007b672) popup_sp_fs_action_menu_bg_pane

0xa5f2,	// (0x000774c9) sp_fs_action_menu_list_pane_ParamLimits

0xa5f2,	// (0x000774c9) sp_fs_action_menu_list_pane

0xe7a9,	// (0x0007b680) sp_fs_scroll_pane_cp01_ParamLimits

0xe7a9,	// (0x0007b680) sp_fs_scroll_pane_cp01

0x7f95,	// (0x00074e6c) list_medium_line_plain_t2_t1

0x7fa5,	// (0x00074e7c) list_medium_line_plain_t2_t2

0x0001,

0xfcf5,	// (0x0007cbcc) list_medium_line_plain_t2_t

0x7fb5,	// (0x00074e8c) list_medium_line_plain_t3_t1

0x7fc5,	// (0x00074e9c) list_medium_line_plain_t3_t2

0x7fd3,	// (0x00074eaa) list_medium_line_plain_t3_t3

0x0002,

0xfcfa,	// (0x0007cbd1) list_medium_line_plain_t3_t

0x9d97,	// (0x00076c6e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9d97,	// (0x00076c6e) list_medium_line_x2_t2_g2_g1

0x9da3,	// (0x00076c7a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9da3,	// (0x00076c7a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf251,	// (0x0007c128) list_medium_line_x2_t2_g2_g_ParamLimits

0xf251,	// (0x0007c128) list_medium_line_x2_t2_g2_g

0x2482,	// (0x0006f359) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2482,	// (0x0006f359) list_medium_line_x2_t2_g2_t1

0x10ba,	// (0x0006df91) list_medium_line_x2_t2_g2_t2_ParamLimits

0x10ba,	// (0x0006df91) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd01,	// (0x0007cbd8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd01,	// (0x0007cbd8) list_medium_line_x2_t2_g2_t

0x9d97,	// (0x00076c6e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9d97,	// (0x00076c6e) list_medium_line_x2_t4_g2_g1

0xa616,	// (0x000774ed) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa616,	// (0x000774ed) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd06,	// (0x0007cbdd) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd06,	// (0x0007cbdd) list_medium_line_x2_t4_g2_g

0x7fe1,	// (0x00074eb8) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7fe1,	// (0x00074eb8) list_medium_line_x2_t4_g2_t1

0x7ffb,	// (0x00074ed2) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7ffb,	// (0x00074ed2) list_medium_line_x2_t4_g2_t2

0x8011,	// (0x00074ee8) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8011,	// (0x00074ee8) list_medium_line_x2_t4_g2_t3

0x10ba,	// (0x0006df91) list_medium_line_x2_t4_g2_t4_ParamLimits

0x10ba,	// (0x0006df91) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0b,	// (0x0007cbe2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0b,	// (0x0007cbe2) list_medium_line_x2_t4_g2_t

0x8026,	// (0x00074efd) list_medium_line_t3_right_iconx2_g1

0x7e96,	// (0x00074d6d) list_medium_line_t3_right_iconx2_g2

0x802e,	// (0x00074f05) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd14,	// (0x0007cbeb) list_medium_line_t3_right_iconx2_g

0x8038,	// (0x00074f0f) list_medium_line_t3_right_iconx2_t1

0x8048,	// (0x00074f1f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1b,	// (0x0007cbf2) list_medium_line_t3_right_iconx2_t

0x9d97,	// (0x00076c6e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9d97,	// (0x00076c6e) list_medium_line_x3_t4_g4_g1

0x1085,	// (0x0006df5c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1085,	// (0x0006df5c) list_medium_line_x3_t4_g4_g2

0x9daf,	// (0x00076c86) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9daf,	// (0x00076c86) list_medium_line_x3_t4_g4_g3

0x8056,	// (0x00074f2d) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8056,	// (0x00074f2d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd20,	// (0x0007cbf7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd20,	// (0x0007cbf7) list_medium_line_x3_t4_g4_g

0x8062,	// (0x00074f39) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8062,	// (0x00074f39) list_medium_line_x3_t4_g4_t1

0x8079,	// (0x00074f50) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8079,	// (0x00074f50) list_medium_line_x3_t4_g4_t2

0x8094,	// (0x00074f6b) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8094,	// (0x00074f6b) list_medium_line_x3_t4_g4_t3

0x80a9,	// (0x00074f80) list_medium_line_x3_t4_g4_t4_ParamLimits

0x80a9,	// (0x00074f80) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd29,	// (0x0007cc00) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd29,	// (0x0007cc00) list_medium_line_x3_t4_g4_t

0x80c6,	// (0x00074f9d) list_single_dyc_row_text_pane_t1_ParamLimits

0x80c6,	// (0x00074f9d) list_single_dyc_row_text_pane_t1

0x810f,	// (0x00074fe6) list_single_dyc_row_text_pane_t2_ParamLimits

0x810f,	// (0x00074fe6) list_single_dyc_row_text_pane_t2

0xa628,	// (0x000774ff) list_single_dyc_row_text_pane_t3_ParamLimits

0xa628,	// (0x000774ff) list_single_dyc_row_text_pane_t3

0x0002,

0xfd32,	// (0x0007cc09) list_single_dyc_row_text_pane_t_ParamLimits

0xfd32,	// (0x0007cc09) list_single_dyc_row_text_pane_t

0xa63a,	// (0x00077511) list_single_dyc_row_pane_g1_ParamLimits

0xa63a,	// (0x00077511) list_single_dyc_row_pane_g1

0xa646,	// (0x0007751d) list_single_dyc_row_pane_g2_ParamLimits

0xa646,	// (0x0007751d) list_single_dyc_row_pane_g2

0xa652,	// (0x00077529) list_single_dyc_row_pane_g3_ParamLimits

0xa652,	// (0x00077529) list_single_dyc_row_pane_g3

0xa65e,	// (0x00077535) list_single_dyc_row_pane_g4_ParamLimits

0xa65e,	// (0x00077535) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007cc10) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007cc10) list_single_dyc_row_pane_g

0xa66a,	// (0x00077541) list_single_dyc_row_text_pane_ParamLimits

0xa66a,	// (0x00077541) list_single_dyc_row_text_pane

0x9597,	// (0x0007646e) bg_sp_fs_scroll_pane

0xe7cf,	// (0x0007b6a6) thumb_sp_fs_scroll_pane

0x6835,	// (0x0007370c) list_medium_line_g1_ParamLimits

0x6835,	// (0x0007370c) list_medium_line_g1

0x8169,	// (0x00075040) list_medium_line_t1_ParamLimits

0x8169,	// (0x00075040) list_medium_line_t1

0x9d97,	// (0x00076c6e) list_medium_line_x2_g1_ParamLimits

0x9d97,	// (0x00076c6e) list_medium_line_x2_g1

0x1085,	// (0x0006df5c) list_medium_line_x2_g2_ParamLimits

0x1085,	// (0x0006df5c) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007cc19) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007cc19) list_medium_line_x2_g

0xa689,	// (0x00077560) list_medium_line_x2_t1_ParamLimits

0xa689,	// (0x00077560) list_medium_line_x2_t1

0x9d97,	// (0x00076c6e) list_medium_line_x3_g1_ParamLimits

0x9d97,	// (0x00076c6e) list_medium_line_x3_g1

0x1085,	// (0x0006df5c) list_medium_line_x3_g2_ParamLimits

0x1085,	// (0x0006df5c) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007cc19) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007cc19) list_medium_line_x3_g

0xa689,	// (0x00077560) list_medium_line_x3_t1_ParamLimits

0xa689,	// (0x00077560) list_medium_line_x3_t1

0xe7d8,	// (0x0007b6af) thumb_sp_fs_scroll_pane_g1

0xe7e1,	// (0x0007b6b8) thumb_sp_fs_scroll_pane_g2

0xe7ea,	// (0x0007b6c1) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007cc1e) thumb_sp_fs_scroll_pane_g

0xe7d8,	// (0x0007b6af) bg_sp_fs_scroll_pane_g1

0xe7e1,	// (0x0007b6b8) bg_sp_fs_scroll_pane_g2

0xe7ea,	// (0x0007b6c1) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007cc1e) bg_sp_fs_scroll_pane_g

0x9d97,	// (0x00076c6e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9d97,	// (0x00076c6e) list_medium_line_x2_t3_g4_g1

0x1115,	// (0x0006dfec) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1115,	// (0x0006dfec) list_medium_line_x2_t3_g4_g2

0x1085,	// (0x0006df5c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1085,	// (0x0006df5c) list_medium_line_x2_t3_g4_g3

0x9da3,	// (0x00076c7a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9da3,	// (0x00076c7a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2cd,	// (0x0007c1a4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2cd,	// (0x0007c1a4) list_medium_line_x2_t3_g4_g

0x817e,	// (0x00075055) list_medium_line_x2_t3_g4_t1_ParamLimits

0x817e,	// (0x00075055) list_medium_line_x2_t3_g4_t1

0x8194,	// (0x0007506b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8194,	// (0x0007506b) list_medium_line_x2_t3_g4_t2

0x10ba,	// (0x0006df91) list_medium_line_x2_t3_g4_t3_ParamLimits

0x10ba,	// (0x0006df91) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007cc25) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007cc25) list_medium_line_x2_t3_g4_t

0x6835,	// (0x0007370c) list_medium_line_g2_g1_ParamLimits

0x6835,	// (0x0007370c) list_medium_line_g2_g1

0x6841,	// (0x00073718) list_medium_line_g2_g2_ParamLimits

0x6841,	// (0x00073718) list_medium_line_g2_g2

0x0001,

0xfa06,	// (0x0007c8dd) list_medium_line_g2_g_ParamLimits

0xfa06,	// (0x0007c8dd) list_medium_line_g2_g

0x81ad,	// (0x00075084) list_medium_line_g2_t1_ParamLimits

0x81ad,	// (0x00075084) list_medium_line_g2_t1

0x6835,	// (0x0007370c) list_medium_line_t3_g2_g1_ParamLimits

0x6835,	// (0x0007370c) list_medium_line_t3_g2_g1

0x6841,	// (0x00073718) list_medium_line_t3_g2_g2_ParamLimits

0x6841,	// (0x00073718) list_medium_line_t3_g2_g2

0x0001,

0xfa06,	// (0x0007c8dd) list_medium_line_t3_g2_g_ParamLimits

0xfa06,	// (0x0007c8dd) list_medium_line_t3_g2_g

0x81c2,	// (0x00075099) list_medium_line_t3_g2_t1_ParamLimits

0x81c2,	// (0x00075099) list_medium_line_t3_g2_t1

0x81dc,	// (0x000750b3) list_medium_line_t3_g2_t2_ParamLimits

0x81dc,	// (0x000750b3) list_medium_line_t3_g2_t2

0x81f2,	// (0x000750c9) list_medium_line_t3_g2_t3_ParamLimits

0x81f2,	// (0x000750c9) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007cc2c) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007cc2c) list_medium_line_t3_g2_t

0x7e96,	// (0x00074d6d) list_medium_line_right_icon_g1

0x8209,	// (0x000750e0) list_medium_line_right_icon_t1

0x6835,	// (0x0007370c) list_medium_line_t2_g1_ParamLimits

0x6835,	// (0x0007370c) list_medium_line_t2_g1

0x8217,	// (0x000750ee) list_medium_line_t2_t1_ParamLimits

0x8217,	// (0x000750ee) list_medium_line_t2_t1

0x8231,	// (0x00075108) list_medium_line_t2_t2_ParamLimits

0x8231,	// (0x00075108) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007cc33) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007cc33) list_medium_line_t2_t

0x6835,	// (0x0007370c) list_medium_line_t3_g1_ParamLimits

0x6835,	// (0x0007370c) list_medium_line_t3_g1

0x824a,	// (0x00075121) list_medium_line_t3_t1_ParamLimits

0x824a,	// (0x00075121) list_medium_line_t3_t1

0x8261,	// (0x00075138) list_medium_line_t3_t2_ParamLimits

0x8261,	// (0x00075138) list_medium_line_t3_t2

0x8276,	// (0x0007514d) list_medium_line_t3_t3_ParamLimits

0x8276,	// (0x0007514d) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007cc38) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007cc38) list_medium_line_t3_t

0x6835,	// (0x0007370c) list_medium_line_g3_g1_ParamLimits

0x6835,	// (0x0007370c) list_medium_line_g3_g1

0x8288,	// (0x0007515f) list_medium_line_g3_g2_ParamLimits

0x8288,	// (0x0007515f) list_medium_line_g3_g2

0x6841,	// (0x00073718) list_medium_line_g3_g3_ParamLimits

0x6841,	// (0x00073718) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007cc3f) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007cc3f) list_medium_line_g3_g

0x8294,	// (0x0007516b) list_medium_line_g3_t1_ParamLimits

0x8294,	// (0x0007516b) list_medium_line_g3_t1

0x6835,	// (0x0007370c) list_medium_line_t2_g3_g1_ParamLimits

0x6835,	// (0x0007370c) list_medium_line_t2_g3_g1

0x8288,	// (0x0007515f) list_medium_line_t2_g3_g2_ParamLimits

0x8288,	// (0x0007515f) list_medium_line_t2_g3_g2

0x6841,	// (0x00073718) list_medium_line_t2_g3_g3_ParamLimits

0x6841,	// (0x00073718) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007cc3f) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007cc3f) list_medium_line_t2_g3_g

0x82a9,	// (0x00075180) list_medium_line_t2_g3_t1_ParamLimits

0x82a9,	// (0x00075180) list_medium_line_t2_g3_t1

0x82c0,	// (0x00075197) list_medium_line_t2_g3_t2_ParamLimits

0x82c0,	// (0x00075197) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007cc46) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007cc46) list_medium_line_t2_g3_t

0x6835,	// (0x0007370c) list_medium_line_t3_g3_g1_ParamLimits

0x6835,	// (0x0007370c) list_medium_line_t3_g3_g1

0x8288,	// (0x0007515f) list_medium_line_t3_g3_g2_ParamLimits

0x8288,	// (0x0007515f) list_medium_line_t3_g3_g2

0x6841,	// (0x00073718) list_medium_line_t3_g3_g3_ParamLimits

0x6841,	// (0x00073718) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007cc3f) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007cc3f) list_medium_line_t3_g3_g

0x82d9,	// (0x000751b0) list_medium_line_t3_g3_t1_ParamLimits

0x82d9,	// (0x000751b0) list_medium_line_t3_g3_t1

0x82f2,	// (0x000751c9) list_medium_line_t3_g3_t2_ParamLimits

0x82f2,	// (0x000751c9) list_medium_line_t3_g3_t2

0x8308,	// (0x000751df) list_medium_line_t3_g3_t3_ParamLimits

0x8308,	// (0x000751df) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007cc4b) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007cc4b) list_medium_line_t3_g3_t

0x8026,	// (0x00074efd) list_medium_line_right_iconx2_g1

0x7e96,	// (0x00074d6d) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007cc52) list_medium_line_right_iconx2_g

0x8322,	// (0x000751f9) list_medium_line_right_iconx2_t1

0x8026,	// (0x00074efd) list_medium_line_t2_right_iconx2_g1

0x7e96,	// (0x00074d6d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007cc52) list_medium_line_t2_right_iconx2_g

0x8330,	// (0x00075207) list_medium_line_t2_right_iconx2_t1

0x8340,	// (0x00075217) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007cc57) list_medium_line_t2_right_iconx2_t

0x8352,	// (0x00075229) list_medium_line_x4_t4_t1

0x8360,	// (0x00075237) list_medium_line_x4_t4_t2

0x8370,	// (0x00075247) list_medium_line_x4_t4_t3

0x8380,	// (0x00075257) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007cc5c) list_medium_line_x4_t4_t

0x83d3,	// (0x000752aa) tport_appsw_pane_ParamLimits

0x83d3,	// (0x000752aa) tport_appsw_pane

0x83eb,	// (0x000752c2) tport_contact_pane_ParamLimits

0x83eb,	// (0x000752c2) tport_contact_pane

0x8403,	// (0x000752da) tport_listscroll_pane_ParamLimits

0x8403,	// (0x000752da) tport_listscroll_pane

0x841d,	// (0x000752f4) cell_tport_appsw_pane_ParamLimits

0x841d,	// (0x000752f4) cell_tport_appsw_pane

0xd659,	// (0x0007a530) tport_appsw_pane_g1_ParamLimits

0xd659,	// (0x0007a530) tport_appsw_pane_g1

0xe7f3,	// (0x0007b6ca) tport_contact_pane_g1

0xe7fc,	// (0x0007b6d3) tport_contact_pane_t1

0xe80a,	// (0x0007b6e1) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007cc65) tport_contact_pane_t

0xe818,	// (0x0007b6ef) list_tport_pane

0xe821,	// (0x0007b6f8) scroll_pane_cp_030

0x8469,	// (0x00075340) cell_tport_appsw_pane_g1

0x8479,	// (0x00075350) cell_tport_appsw_pane_t1

0x9597,	// (0x0007646e) grid_highlight_pane_cp019

0x8487,	// (0x0007535e) list_tport_double_graphic_pane_ParamLimits

0x8487,	// (0x0007535e) list_tport_double_graphic_pane

0x95f0,	// (0x000764c7) list_highlight_pane_cp023_ParamLimits

0x95f0,	// (0x000764c7) list_highlight_pane_cp023

0x8494,	// (0x0007536b) list_tport_double_graphic_pane_g1_ParamLimits

0x8494,	// (0x0007536b) list_tport_double_graphic_pane_g1

0x84a1,	// (0x00075378) list_tport_double_graphic_pane_t1_ParamLimits

0x84a1,	// (0x00075378) list_tport_double_graphic_pane_t1

0x84b6,	// (0x0007538d) list_tport_double_graphic_pane_t2_ParamLimits

0x84b6,	// (0x0007538d) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007cc71) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007cc71) list_tport_double_graphic_pane_t

0x9597,	// (0x0007646e) main_cale_note_pane

0x5fb4,	// (0x00072e8b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5fb4,	// (0x00072e8b) cell_vitu2_function_top_wide_pane_cp01

0x7a20,	// (0x000748f7) wait_bar_pane_cp05_ParamLimits

0x95f0,	// (0x000764c7) listscroll_cmail_pane

0xe832,	// (0x0007b709) list_cmail_pane

0x84d2,	// (0x000753a9) list_cmail_body_pane

0x84e7,	// (0x000753be) list_single_cmail_header_caption_pane

0x8501,	// (0x000753d8) list_single_cmail_header_detail_pane_ParamLimits

0x8501,	// (0x000753d8) list_single_cmail_header_detail_pane

0x8530,	// (0x00075407) list_single_cmail_header_caption_pane_t1

0x854b,	// (0x00075422) list_single_cmail_header_detail_pane_g1_ParamLimits

0x854b,	// (0x00075422) list_single_cmail_header_detail_pane_g1

0xa69f,	// (0x00077576) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa69f,	// (0x00077576) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007cc76) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007cc76) list_single_cmail_header_detail_pane_g

0x8563,	// (0x0007543a) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8563,	// (0x0007543a) list_single_cmail_header_detail_pane_t1

0x85b3,	// (0x0007548a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x85b3,	// (0x0007548a) list_single_cmail_header_editor_pane_bg

0xe2fb,	// (0x0007b1d2) list_cmail_body_pane_g1

0xe856,	// (0x0007b72d) list_cmail_body_pane_t1

0xd679,	// (0x0007a550) list_single_cmail_header_editor_pane_bg_g1

0xab7e,	// (0x00077a55) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd689,	// (0x0007a560) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd681,	// (0x0007a558) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8a3,	// (0x0007a77a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6a9,	// (0x0007a580) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd699,	// (0x0007a570) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6a1,	// (0x0007a578) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab5e,	// (0x00077a35) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x85cc,	// (0x000754a3) calenote_gesture_pane_ParamLimits

0x85cc,	// (0x000754a3) calenote_gesture_pane

0x85ec,	// (0x000754c3) calenote_window_pane_ParamLimits

0x85ec,	// (0x000754c3) calenote_window_pane

0xe864,	// (0x0007b73b) popup_note_window_cp01

0x8608,	// (0x000754df) calenote_swipe_1_pane_ParamLimits

0x8608,	// (0x000754df) calenote_swipe_1_pane

0x7e7c,	// (0x00074d53) calenote_swipe_2_pane_ParamLimits

0x7e7c,	// (0x00074d53) calenote_swipe_2_pane

0xe653,	// (0x0007b52a) calenote_swipe_1_pane_g1_ParamLimits

0xe653,	// (0x0007b52a) calenote_swipe_1_pane_g1

0xe660,	// (0x0007b537) calenote_swipe_1_pane_g2_ParamLimits

0xe660,	// (0x0007b537) calenote_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x0007cba0) calenote_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x0007cba0) calenote_swipe_1_pane_g

0xe876,	// (0x0007b74d) calenote_swipe_1_pane_t1_ParamLimits

0xe876,	// (0x0007b74d) calenote_swipe_1_pane_t1

0xe653,	// (0x0007b52a) calenote_swipe_2_pane_g1_ParamLimits

0xe653,	// (0x0007b52a) calenote_swipe_2_pane_g1

0xe895,	// (0x0007b76c) calenote_swipe_2_pane_g2_ParamLimits

0xe895,	// (0x0007b76c) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007cc82) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007cc82) calenote_swipe_2_pane_g

0xe8a1,	// (0x0007b778) calenote_swipe_2_pane_t1_ParamLimits

0xe8a1,	// (0x0007b778) calenote_swipe_2_pane_t1

0x9597,	// (0x0007646e) main_mup_navstr_pane

0x4c0e,	// (0x00071ae5) main_mup3_pane_t7_ParamLimits

0x4c0e,	// (0x00071ae5) main_mup3_pane_t7

0xa057,	// (0x00076f2e) main_mp4_pane_g6_ParamLimits

0xa057,	// (0x00076f2e) main_mp4_pane_g6

0xa1fb,	// (0x000770d2) main_image3_pane_t4_ParamLimits

0xa1fb,	// (0x000770d2) main_image3_pane_t4

0x861d,	// (0x000754f4) popup_navstr_preview_pane_ParamLimits

0x861d,	// (0x000754f4) popup_navstr_preview_pane

0x862d,	// (0x00075504) scroll_navstr_pane_ParamLimits

0x862d,	// (0x00075504) scroll_navstr_pane

0x9597,	// (0x0007646e) bg_popup_preview_window_pane_cp04

0xe8c8,	// (0x0007b79f) popup_navstr_preview_pane_t1

0x8641,	// (0x00075518) scroll_navstr_pane_g1_ParamLimits

0x8641,	// (0x00075518) scroll_navstr_pane_g1

0x8655,	// (0x0007552c) scroll_navstr_pane_t1_ParamLimits

0x8655,	// (0x0007552c) scroll_navstr_pane_t1

0xe86d,	// (0x0007b744) bg_button_pane_cp014

0xe86d,	// (0x0007b744) bg_button_pane_cp030

0x7d12,	// (0x00074be9) list_double_fisheye_pane_g4_ParamLimits

0x7d12,	// (0x00074be9) list_double_fisheye_pane_g4

0x7d1e,	// (0x00074bf5) list_double_fisheye_pane_g5_ParamLimits

0x7d1e,	// (0x00074bf5) list_double_fisheye_pane_g5

0xe83a,	// (0x0007b711) sp_fs_scroll_pane_cp03

0xe746,	// (0x0007b61d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe752,	// (0x0007b629) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce6,	// (0x0007cbbd) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe75e,	// (0x0007b635) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x84c8,	// (0x0007539f) sp_fs_scroll_pane_cp02

0xa861,	// (0x00077738) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa861,	// (0x00077738) popup_sp_fs_calendar_preview_list_single_pane

0x9597,	// (0x0007646e) main_cam6_pano_pane

0x95f0,	// (0x000764c7) main_mup3_pane_ParamLimits

0x9597,	// (0x0007646e) main_phacti_pane

0x78f3,	// (0x000747ca) bg_button_pane_cp11

0x790d,	// (0x000747e4) main_mobtv_info_pane_g2_ParamLimits

0x790d,	// (0x000747e4) main_mobtv_info_pane_g2

0x0001,

0xfc46,	// (0x0007cb1d) main_mobtv_info_pane_g_ParamLimits

0xfc46,	// (0x0007cb1d) main_mobtv_info_pane_g

0x7ae8,	// (0x000749bf) sc_clock_pane_t5_ParamLimits

0x7ae8,	// (0x000749bf) sc_clock_pane_t5

0x7b74,	// (0x00074a4b) main_radioblah_pane_g1_ParamLimits

0xe59f,	// (0x0007b476) main_radioblah_pane_t3_ParamLimits

0xe59f,	// (0x0007b476) main_radioblah_pane_t3

0xe5b7,	// (0x0007b48e) main_radioblah_pane_t4_ParamLimits

0xe5b7,	// (0x0007b48e) main_radioblah_pane_t4

0x7b9c,	// (0x00074a73) main_radioblah_text_pane_ParamLimits

0x7b9c,	// (0x00074a73) main_radioblah_text_pane

0x7bae,	// (0x00074a85) main_radioblah_info_pane_g1_ParamLimits

0x7c47,	// (0x00074b1e) main_radioblah_info_pane_t4_ParamLimits

0x7c47,	// (0x00074b1e) main_radioblah_info_pane_t4

0x95f0,	// (0x000764c7) main_sp_fs_calendar_pane

0x866c,	// (0x00075543) main_phacti_pane_g1

0x8674,	// (0x0007554b) phacti_note_pane_ParamLimits

0x8674,	// (0x0007554b) phacti_note_pane

0xe8df,	// (0x0007b7b6) phacti_term_pane_ParamLimits

0xe8df,	// (0x0007b7b6) phacti_term_pane

0xe8f4,	// (0x0007b7cb) phacti_note_pane_t1_ParamLimits

0xe8f4,	// (0x0007b7cb) phacti_note_pane_t1

0xa6cf,	// (0x000775a6) phacti_term_pane_g1

0xa6d7,	// (0x000775ae) phacti_term_pane_t1_ParamLimits

0xa6d7,	// (0x000775ae) phacti_term_pane_t1

0xe90b,	// (0x0007b7e2) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe913,	// (0x0007b7ea) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007cc8c) popup_sp_fs_calendar_preview_list_single_pane_g

0xe91b,	// (0x0007b7f2) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe91b,	// (0x0007b7f2) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe931,	// (0x0007b808) aid_popup_sp_fs_bg_corner_pane

0xcc91,	// (0x00079b68) popup_sp_fs_calendar_preview_bg_pane_g1

0x9597,	// (0x0007646e) popup_sp_fs_calendar_preview_bg_pane

0xe939,	// (0x0007b810) popup_sp_fs_calendar_preview_list_pane

0xc838,	// (0x0007970f) bg_main_sp_fs_cale_pane_ParamLimits

0xc838,	// (0x0007970f) bg_main_sp_fs_cale_pane

0xb6c1,	// (0x00078598) listscroll_cale_mrui_pane_ParamLimits

0xb6c1,	// (0x00078598) listscroll_cale_mrui_pane

0xb6d6,	// (0x000785ad) listscroll_sp_fs_schedule_track_pane

0xb6df,	// (0x000785b6) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xb6df,	// (0x000785b6) main_sp_fs_ctrlbar_pane_cp01

0xe941,	// (0x0007b818) main_sp_fs_ribbon_pane

0xb6f2,	// (0x000785c9) popup_sp_fs_cale_preview_window

0x86e5,	// (0x000755bc) list_single_sp_fs_schedule_track_pane_ParamLimits

0x86e5,	// (0x000755bc) list_single_sp_fs_schedule_track_pane

0x95f0,	// (0x000764c7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x95f0,	// (0x000764c7) bg_sp_fs_highlight_list_pane_cp03

0x86f8,	// (0x000755cf) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x86f8,	// (0x000755cf) list_single_sp_fs_schedule_track_pane_g1

0x8704,	// (0x000755db) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8704,	// (0x000755db) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007cc91) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007cc91) list_single_sp_fs_schedule_track_pane_g

0x8710,	// (0x000755e7) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8710,	// (0x000755e7) list_single_sp_fs_schedule_track_pane_t1

0x8732,	// (0x00075609) sp_fs_schedule_track_pane_ParamLimits

0x8732,	// (0x00075609) sp_fs_schedule_track_pane

0xe949,	// (0x0007b820) sp_fs_schedule_track_pane_g1

0xe951,	// (0x0007b828) sp_fs_schedule_track_pane_g2

0xe959,	// (0x0007b830) sp_fs_schedule_track_pane_g3

0xe961,	// (0x0007b838) sp_fs_schedule_track_pane_g4

0xe969,	// (0x0007b840) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007cc96) sp_fs_schedule_track_pane_g

0xd679,	// (0x0007a550) bg_sp_fs_schedule_viewer_highlight_g1

0xab7e,	// (0x00077a55) bg_sp_fs_schedule_viewer_highlight_g2

0xd681,	// (0x0007a558) bg_sp_fs_schedule_viewer_highlight_g3

0xd689,	// (0x0007a560) bg_sp_fs_schedule_viewer_highlight_g4

0xd8a3,	// (0x0007a77a) bg_sp_fs_schedule_viewer_highlight_g5

0xd699,	// (0x0007a570) bg_sp_fs_schedule_viewer_highlight_g6

0xd6a1,	// (0x0007a578) bg_sp_fs_schedule_viewer_highlight_g7

0xd6a9,	// (0x0007a580) bg_sp_fs_schedule_viewer_highlight_g8

0xab5e,	// (0x00077a35) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007cca1) bg_sp_fs_schedule_viewer_highlight_g

0x9597,	// (0x0007646e) bg_main_sp_fs_ribbon_pane

0x8747,	// (0x0007561e) main_sp_fs_ribbon_pane_g1

0xe971,	// (0x0007b848) main_sp_fs_ribbon_pane_t1

0x8750,	// (0x00075627) main_sp_fs_ribbon_pane_t2

0xe980,	// (0x0007b857) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007ccb4) main_sp_fs_ribbon_pane_t

0xe98f,	// (0x0007b866) main_sp_fs_ribbon_scheduler_pane

0xe997,	// (0x0007b86e) bg_main_sp_fs_ribbon_pane_g1

0xe9a0,	// (0x0007b877) bg_main_sp_fs_ribbon_pane_g2

0xe9a9,	// (0x0007b880) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007ccbb) bg_main_sp_fs_ribbon_pane_g

0xe9b1,	// (0x0007b888) main_sp_fs_ribbon_scheduler_pane_g1

0xe9ba,	// (0x0007b891) main_sp_fs_ribbon_scheduler_pane_g2

0xe9c3,	// (0x0007b89a) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007ccc2) main_sp_fs_ribbon_scheduler_pane_g

0xe9cc,	// (0x0007b8a3) list_cale_mrui_pane

0x875f,	// (0x00075636) sp_fs_scroll_pane_cp07_ParamLimits

0x875f,	// (0x00075636) sp_fs_scroll_pane_cp07

0x877b,	// (0x00075652) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x877b,	// (0x00075652) bg_sp_fs_schedule_viewer_highlight

0xe9d9,	// (0x0007b8b0) list_single_sp_fs_schedule_track_pane_cp01

0xe9e1,	// (0x0007b8b8) list_sp_fs_schedule_track_pane

0xe9e9,	// (0x0007b8c0) sp_fs_scroll_pane_cp06_ParamLimits

0xe9e9,	// (0x0007b8c0) sp_fs_scroll_pane_cp06

0xcc91,	// (0x00079b68) bgmain_sp_fs_calendar_pane_g1

0x878d,	// (0x00075664) list_single_cale_mrui_pane_ParamLimits

0x878d,	// (0x00075664) list_single_cale_mrui_pane

0xb704,	// (0x000785db) list_single_cale_mrui_row_pane_ParamLimits

0xb704,	// (0x000785db) list_single_cale_mrui_row_pane

0xb71a,	// (0x000785f1) list_single_cale_mrui_row_pane_g1_ParamLimits

0xb71a,	// (0x000785f1) list_single_cale_mrui_row_pane_g1

0xb752,	// (0x00078629) list_single_cale_mrui_row_pane_t1_ParamLimits

0xb752,	// (0x00078629) list_single_cale_mrui_row_pane_t1

0x87a2,	// (0x00075679) list_single_cale_mrui_row_pane_t2_ParamLimits

0x87a2,	// (0x00075679) list_single_cale_mrui_row_pane_t2

0xb764,	// (0x0007863b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xb764,	// (0x0007863b) list_single_cale_mrui_row_pane_t3

0xb793,	// (0x0007866a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xb793,	// (0x0007866a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007ccd0) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007ccd0) list_single_cale_mrui_row_pane_t

0x880a,	// (0x000756e1) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x880a,	// (0x000756e1) list_single_cmail_header_editor_pane_bg_cp01

0x8830,	// (0x00075707) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8830,	// (0x00075707) list_single_cmail_header_editor_pane_bg_cp02

0x8850,	// (0x00075727) main_radioblah_text_pane_t1_ParamLimits

0x8850,	// (0x00075727) main_radioblah_text_pane_t1

0xea08,	// (0x0007b8df) cam6_indi_pane_cp01

0xea10,	// (0x0007b8e7) cam6_mode_pane_cp01

0xea18,	// (0x0007b8ef) cam6_pano_pane

0xea21,	// (0x0007b8f8) cam6_zoom_pane_cp01

0xea2b,	// (0x0007b902) cam6_pano_image_pane

0xea34,	// (0x0007b90b) cam6_pano_pane_g1

0xe2fb,	// (0x0007b1d2) cam6_pano_pane_g2

0xea3d,	// (0x0007b914) cam6_pano_pane_g3

0xea46,	// (0x0007b91d) cam6_pano_pane_g4

0xd20b,	// (0x0007a0e2) cam6_pano_pane_g5

0xea4f,	// (0x0007b926) cam6_pano_pane_g6

0xea57,	// (0x0007b92e) cam6_pano_pane_g7

0xea5f,	// (0x0007b936) cam6_pano_pane_g8

0xea68,	// (0x0007b93f) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007ccd9) cam6_pano_pane_g

0x9597,	// (0x0007646e) main_browser_tag_pane

0xe8c0,	// (0x0007b797) grid_navstr_albumart_pane

0xea73,	// (0x0007b94a) cell_navstr_albumart_pane_ParamLimits

0xea73,	// (0x0007b94a) cell_navstr_albumart_pane

0xea92,	// (0x0007b969) cell_navstr_albumart_pane_g1

0xc645,	// (0x0007951c) cell_navstr_albumart_pane_g2

0xc655,	// (0x0007952c) cell_navstr_albumart_pane_g3

0xc64d,	// (0x00079524) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007ccec) cell_navstr_albumart_pane_g

0x886b,	// (0x00075742) bt_list_pane_ParamLimits

0x886b,	// (0x00075742) bt_list_pane

0x8881,	// (0x00075758) bt_list_pane_t1

0x8890,	// (0x00075767) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007ccf5) bt_list_pane_t

0x9597,	// (0x0007646e) main_cale_prevew_pane

0x889f,	// (0x00075776) popup_cale_preview_window_ParamLimits

0x889f,	// (0x00075776) popup_cale_preview_window

0x95f0,	// (0x000764c7) bg_popup_preview_window_pane_cp05_ParamLimits

0x95f0,	// (0x000764c7) bg_popup_preview_window_pane_cp05

0xea9a,	// (0x0007b971) list_cale_preview_pane_ParamLimits

0xea9a,	// (0x0007b971) list_cale_preview_pane

0x88bc,	// (0x00075793) list_double_cale_preview_pane_ParamLimits

0x88bc,	// (0x00075793) list_double_cale_preview_pane

0x88d0,	// (0x000757a7) list_single_cale_preview_pane_ParamLimits

0x88d0,	// (0x000757a7) list_single_cale_preview_pane

0x88e8,	// (0x000757bf) list_single_cale_preview_pane_g1

0x88f0,	// (0x000757c7) list_single_cale_preview_pane_t1_ParamLimits

0x88f0,	// (0x000757c7) list_single_cale_preview_pane_t1

0x8905,	// (0x000757dc) list_double_cale_preview_pane_g1

0x890d,	// (0x000757e4) list_double_cale_preview_pane_t1_ParamLimits

0x890d,	// (0x000757e4) list_double_cale_preview_pane_t1

0x8922,	// (0x000757f9) list_double_cale_preview_pane_t2_ParamLimits

0x8922,	// (0x000757f9) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007ccfa) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007ccfa) list_double_cale_preview_pane_t

0x9597,	// (0x0007646e) main_ezdial_pane

0x95f0,	// (0x000764c7) main_sp_fs_email_pane_ParamLimits

0x7ec0,	// (0x00074d97) cmail_ddmenu_btn01_pane_ParamLimits

0x7ec0,	// (0x00074d97) cmail_ddmenu_btn01_pane

0x7ed3,	// (0x00074daa) cmail_ddmenu_btn02_pane_ParamLimits

0x7ed3,	// (0x00074daa) cmail_ddmenu_btn02_pane

0x7ef6,	// (0x00074dcd) cmail_ddmenu_btn03_pane_ParamLimits

0x7ef6,	// (0x00074dcd) cmail_ddmenu_btn03_pane

0x7f21,	// (0x00074df8) main_sp_fs_ctrlbar_pane_ParamLimits

0x7f45,	// (0x00074e1c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x84d2,	// (0x000753a9) list_cmail_body_pane_ParamLimits

0x8540,	// (0x00075417) bg_button_pane_cp12

0xe849,	// (0x0007b720) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe849,	// (0x0007b720) list_single_cmail_header_detail_pane_g3

0xa6ab,	// (0x00077582) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa6ab,	// (0x00077582) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007cc7d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007cc7d) list_single_cmail_header_detail_pane_t

0xa6ec,	// (0x000775c3) phacti_term_pane_t2_ParamLimits

0xa6ec,	// (0x000775c3) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007cc87) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007cc87) phacti_term_pane_t

0xeaa6,	// (0x0007b97d) aid_size_list_single_double

0x893a,	// (0x00075811) popup_ezdial_listscroll_window

0x8956,	// (0x0007582d) popup_number_entry_window_cp01

0xb264,	// (0x0007813b) bg_popup_call_pane_cp09

0xeab2,	// (0x0007b989) ezdial_list_pane

0xeaba,	// (0x0007b991) scroll_pane_cp23

0xc838,	// (0x0007970f) bg_button_pane_cp028_ParamLimits

0xc838,	// (0x0007970f) bg_button_pane_cp028

0x8964,	// (0x0007583b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8964,	// (0x0007583b) cmail_ddmenu_btn01_pane_g1

0x8973,	// (0x0007584a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8973,	// (0x0007584a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007ccff) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007ccff) cmail_ddmenu_btn01_pane_g

0xeac2,	// (0x0007b999) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeac2,	// (0x0007b999) cmail_ddmenu_btn01_pane_t1

0xc838,	// (0x0007970f) bg_button_pane_cp029_ParamLimits

0xc838,	// (0x0007970f) bg_button_pane_cp029

0x8983,	// (0x0007585a) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8983,	// (0x0007585a) cmail_ddmenu_btn02_pane_g1

0x899e,	// (0x00075875) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x899e,	// (0x00075875) cmail_ddmenu_btn02_pane_t1

0x95f0,	// (0x000764c7) bg_button_pane_cp031_ParamLimits

0x95f0,	// (0x000764c7) bg_button_pane_cp031

0x8983,	// (0x0007585a) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8983,	// (0x0007585a) cmail_ddmenu_btn03_pane_g1

0x899e,	// (0x00075875) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x899e,	// (0x00075875) cmail_ddmenu_btn03_pane_t1

0x57ee,	// (0x000726c5) cell_dialer2_keypad_pane_t1_ParamLimits

0x5808,	// (0x000726df) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5808,	// (0x000726df) cell_dialer2_keypad_pane_t1_copy1

0x774a,	// (0x00074621) ncimui_group_button_pane

0x95f0,	// (0x000764c7) main_sp_fs_calendar_pane_ParamLimits

0x84e7,	// (0x000753be) list_single_cmail_header_caption_pane_ParamLimits

0xb6b8,	// (0x0007858f) aid_recal_txt_sm_pane

0x9597,	// (0x0007646e) mian_recal_day_pane

0xb6f2,	// (0x000785c9) popup_sp_fs_cale_preview_window_ParamLimits

0xead7,	// (0x0007b9ae) list_recal_day_pane

0xb7de,	// (0x000786b5) list_single_recal_day_pane_ParamLimits

0xb7de,	// (0x000786b5) list_single_recal_day_pane

0xeafe,	// (0x0007b9d5) list_single_recal_day_pane_g1_ParamLimits

0xeafe,	// (0x0007b9d5) list_single_recal_day_pane_g1

0xb7f0,	// (0x000786c7) list_single_recal_day_pane_g2_ParamLimits

0xb7f0,	// (0x000786c7) list_single_recal_day_pane_g2

0xb7fc,	// (0x000786d3) list_single_recal_day_pane_g3_ParamLimits

0xb7fc,	// (0x000786d3) list_single_recal_day_pane_g3

0x89c5,	// (0x0007589c) list_single_recal_day_pane_g4_ParamLimits

0x89c5,	// (0x0007589c) list_single_recal_day_pane_g4

0xb808,	// (0x000786df) list_single_recal_day_pane_g5_ParamLimits

0xb808,	// (0x000786df) list_single_recal_day_pane_g5

0xb814,	// (0x000786eb) list_single_recal_day_pane_g6_ParamLimits

0xb814,	// (0x000786eb) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007cd0e) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007cd0e) list_single_recal_day_pane_g

0xb828,	// (0x000786ff) list_single_recal_day_pane_t1

0xb83a,	// (0x00078711) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007cd19) list_single_recal_day_pane_t

0x89dd,	// (0x000758b4) ncimui_query_button_pane_ParamLimits

0x89dd,	// (0x000758b4) ncimui_query_button_pane

0x89ed,	// (0x000758c4) ncimui_query_button_pane_t1_ParamLimits

0x89ed,	// (0x000758c4) ncimui_query_button_pane_t1

0xeb0a,	// (0x0007b9e1) ncimui_query_button_pane_t2_ParamLimits

0xeb0a,	// (0x0007b9e1) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007cd1e) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007cd1e) ncimui_query_button_pane_t

0x8a00,	// (0x000758d7) query_button_pane_ParamLimits

0x8a00,	// (0x000758d7) query_button_pane

0x9597,	// (0x0007646e) bg_button_pane_cp0028

0xeb1d,	// (0x0007b9f4) query_button_pane_t1

0x37bb,	// (0x00070692) main_tport_pane_ParamLimits

0x8390,	// (0x00075267) bg_popup_window_pane_cp01_ParamLimits

0x8390,	// (0x00075267) bg_popup_window_pane_cp01

0x83ab,	// (0x00075282) heading_pane_cp08_ParamLimits

0x83ab,	// (0x00075282) heading_pane_cp08

0x83be,	// (0x00075295) heading_pane_cp07_ParamLimits

0x83be,	// (0x00075295) heading_pane_cp07

0x8469,	// (0x00075340) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007cc6a) cell_tport_appsw_pane_g

0x2d51,	// (0x0006fc28) input_candi_list_open_g1

0xad3f,	// (0x00077c16) list_cale_time_pane_g6_ParamLimits

0xad3f,	// (0x00077c16) list_cale_time_pane_g6

0x45c5,	// (0x0007149c) aid_size_touch_calib_1_ParamLimits

0x45c5,	// (0x0007149c) aid_size_touch_calib_1

0x45d7,	// (0x000714ae) aid_size_touch_calib_2_ParamLimits

0x45d7,	// (0x000714ae) aid_size_touch_calib_2

0x45ef,	// (0x000714c6) aid_size_touch_calib_3_ParamLimits

0x45ef,	// (0x000714c6) aid_size_touch_calib_3

0x460d,	// (0x000714e4) aid_size_touch_calib_4_ParamLimits

0x460d,	// (0x000714e4) aid_size_touch_calib_4

0x4625,	// (0x000714fc) main_touch_calib_button_group_pane_ParamLimits

0x4625,	// (0x000714fc) main_touch_calib_button_group_pane

0x463d,	// (0x00071514) main_touch_calib_pane_g1_ParamLimits

0x464f,	// (0x00071526) main_touch_calib_pane_g2_ParamLimits

0x4661,	// (0x00071538) main_touch_calib_pane_g3_ParamLimits

0x4673,	// (0x0007154a) main_touch_calib_pane_g4_ParamLimits

0xf75c,	// (0x0007c633) main_touch_calib_pane_g_ParamLimits

0x4685,	// (0x0007155c) main_touch_calib_pane_t1_ParamLimits

0x469f,	// (0x00071576) main_touch_calib_pane_t2_ParamLimits

0x46b9,	// (0x00071590) main_touch_calib_pane_t3_ParamLimits

0x46cd,	// (0x000715a4) main_touch_calib_pane_t4_ParamLimits

0x46e3,	// (0x000715ba) main_touch_calib_pane_t5_ParamLimits

0xf765,	// (0x0007c63c) main_touch_calib_pane_t_ParamLimits

0xcfc1,	// (0x00079e98) list_single_fp_cale_pane_g3_ParamLimits

0xcfc1,	// (0x00079e98) list_single_fp_cale_pane_g3

0xa2a6,	// (0x0007717d) bg_button_pane_cp012_ParamLimits

0xa2a6,	// (0x0007717d) bg_vkb2_func_pane_cp03_ParamLimits

0x67eb,	// (0x000736c2) cell_vitu2_function_top_pane_g1_ParamLimits

0xa2a6,	// (0x0007717d) bg_vkb2_func_pane_cp04_ParamLimits

0x76d8,	// (0x000745af) main_ncimui_button_group_pane_ParamLimits

0x76d8,	// (0x000745af) main_ncimui_button_group_pane

0x7738,	// (0x0007460f) main_ncimui_pane_t3_ParamLimits

0x7738,	// (0x0007460f) main_ncimui_pane_t3

0xe8d6,	// (0x0007b7ad) phacti_button_group_pane

0xeaa6,	// (0x0007b97d) aid_size_list_single_double_ParamLimits

0x893a,	// (0x00075811) popup_ezdial_listscroll_window_ParamLimits

0x8956,	// (0x0007582d) popup_number_entry_window_cp01_ParamLimits

0x8a13,	// (0x000758ea) phacti_button_pane_ParamLimits

0x8a13,	// (0x000758ea) phacti_button_pane

0x9597,	// (0x0007646e) bg_button_pane_cp14

0xeb2b,	// (0x0007ba02) phacti_button_pane_t1

0x8a24,	// (0x000758fb) main_touch_calib_button_pane_ParamLimits

0x8a24,	// (0x000758fb) main_touch_calib_button_pane

0xa74b,	// (0x00077622) bg_button_pane_cp18_ParamLimits

0xa74b,	// (0x00077622) bg_button_pane_cp18

0xeb39,	// (0x0007ba10) main_touch_calib_button_pane_t1_ParamLimits

0xeb39,	// (0x0007ba10) main_touch_calib_button_pane_t1

0xeb4f,	// (0x0007ba26) main_touch_calib_button_pane_t2_ParamLimits

0xeb4f,	// (0x0007ba26) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007cd23) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007cd23) main_touch_calib_button_pane_t

0x9597,	// (0x0007646e) cell_ncimui_button_pane

0x9597,	// (0x0007646e) bg_button_pane_cp032

0xeb6d,	// (0x0007ba44) cell_ncimui_button_pane_t1

0xa1d9,	// (0x000770b0) image3_infobar_pane_ParamLimits

0xa1d9,	// (0x000770b0) image3_infobar_pane

0x7b14,	// (0x000749eb) fs_bigclock_status_pane_ParamLimits

0x7b14,	// (0x000749eb) fs_bigclock_status_pane

0x7b21,	// (0x000749f8) main_fs_bigclock_clock_pane_ParamLimits

0x7b21,	// (0x000749f8) main_fs_bigclock_clock_pane

0x7b35,	// (0x00074a0c) main_fs_bigclock_indi_pane_ParamLimits

0x7b35,	// (0x00074a0c) main_fs_bigclock_indi_pane

0x7b50,	// (0x00074a27) main_fs_bigclock_swipe_pane_ParamLimits

0x7b50,	// (0x00074a27) main_fs_bigclock_swipe_pane

0x9597,	// (0x0007646e) main_fs_clock_dumped_data

0xe408,	// (0x0007b2df) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe408,	// (0x0007b2df) list_single_fs_bigclock_indicator_pane_g1

0xe432,	// (0x0007b309) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe432,	// (0x0007b309) list_single_fs_bigclock_indicator_pane_g2

0xe44c,	// (0x0007b323) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe44c,	// (0x0007b323) list_single_fs_bigclock_indicator_pane_g3

0xe466,	// (0x0007b33d) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe466,	// (0x0007b33d) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7a,	// (0x0007cb51) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7a,	// (0x0007cb51) list_single_fs_bigclock_indicator_pane_g

0xe491,	// (0x0007b368) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe491,	// (0x0007b368) list_single_fs_bigclock_indicator_pane_t1

0xe4b9,	// (0x0007b390) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4b9,	// (0x0007b390) list_single_fs_bigclock_indicator_pane_t2

0xe4e1,	// (0x0007b3b8) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4e1,	// (0x0007b3b8) list_single_fs_bigclock_indicator_pane_t3

0xe509,	// (0x0007b3e0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe509,	// (0x0007b3e0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc85,	// (0x0007cb5c) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc85,	// (0x0007cb5c) list_single_fs_bigclock_indicator_pane_t

0xeb7b,	// (0x0007ba52) image3_infobar_fav_pane_ParamLimits

0xeb7b,	// (0x0007ba52) image3_infobar_fav_pane

0xeb8b,	// (0x0007ba62) image3_infobar_loc_pane_ParamLimits

0xeb8b,	// (0x0007ba62) image3_infobar_loc_pane

0xeba1,	// (0x0007ba78) image3_infobar_time_pane_ParamLimits

0xeba1,	// (0x0007ba78) image3_infobar_time_pane

0xcc91,	// (0x00079b68) image3_infobar_time_pane_g1

0xebb1,	// (0x0007ba88) image3_infobar_time_pane_t1

0xcc91,	// (0x00079b68) image3_infobar_loc_pane_g1

0xebbf,	// (0x0007ba96) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0007cd28) image3_infobar_loc_pane_g

0xebc7,	// (0x0007ba9e) image3_infobar_loc_pane_t1

0xcc91,	// (0x00079b68) image3_infobar_fav_pane_g1

0xebd5,	// (0x0007baac) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0007cd2d) image3_infobar_fav_pane_g

0xebdd,	// (0x0007bab4) fs_bigclock_status_battery_pane

0xebe6,	// (0x0007babd) fs_bigclock_status_signal_pane

0xebef,	// (0x0007bac6) fs_bigclock_status_title_pane

0xebf8,	// (0x0007bacf) fs_bigclock_status_signal_pane_g1

0xec01,	// (0x0007bad8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0007cd32) fs_bigclock_status_signal_pane_g

0xec09,	// (0x0007bae0) fs_bigclock_status_battery_pane_g1

0xec12,	// (0x0007bae9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0007cd37) fs_bigclock_status_battery_pane_g

0xec1a,	// (0x0007baf1) fs_bigclock_status_title_pane_t1

0xcc91,	// (0x00079b68) main_fs_bigclock_clock_pane_g1

0xec28,	// (0x0007baff) main_fs_bigclock_clock_pane_g2

0xec28,	// (0x0007baff) main_fs_bigclock_clock_pane_g3

0xec28,	// (0x0007baff) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0007cd3c) main_fs_bigclock_clock_pane_g

0xec30,	// (0x0007bb07) main_fs_bigclock_clock_pane_t1

0xec3e,	// (0x0007bb15) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0007cd45) main_fs_bigclock_clock_pane_t

0x8a39,	// (0x00075910) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8a39,	// (0x00075910) list_single_fs_bigclock_indicator_pane

0x8a4a,	// (0x00075921) list_single_fs_bigclock_pane_ParamLimits

0x8a4a,	// (0x00075921) list_single_fs_bigclock_pane

0xec56,	// (0x0007bb2d) main_fs_bigclock_indicator_pane_t1

0xec65,	// (0x0007bb3c) list_single_fs_bigclock_pane_g1

0xec6d,	// (0x0007bb44) list_single_fs_bigclock_pane_t1

0xcc91,	// (0x00079b68) main_fs_bigclock_swipe_pane_g1

0xecb0,	// (0x0007bb87) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0007cd56) main_fs_bigclock_swipe_pane_g

0xecb8,	// (0x0007bb8f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecb8,	// (0x0007bb8f) main_fs_bigclock_swipe_pane_t1

0x24c3,	// (0x0006f39a) call_type_pane_ParamLimits

0x9597,	// (0x0007646e) main_btmg_pane

0xb746,	// (0x0007861d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xb746,	// (0x0007861d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007ccc9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007ccc9) list_single_cale_mrui_row_pane_g

0xb7cc,	// (0x000786a3) list_recal_vselct_arw_lo_pane

0xeaf6,	// (0x0007b9cd) list_recal_vselct_arw_up_pane

0xb7d4,	// (0x000786ab) list_recal_vselct_pane

0x8aad,	// (0x00075984) btmg_button_pane

0x8ab7,	// (0x0007598e) main_btmg_pane_g1

0x9597,	// (0x0007646e) bg_button_pane_cp044

0xecd5,	// (0x0007bbac) btmg_button_pane_t1

0xc824,	// (0x000796fb) aid_listscroll_gen

0x95f0,	// (0x000764c7) main_cntbar_detail_pane

0xe82a,	// (0x0007b701) list_cmail_folder_pane

0xe83a,	// (0x0007b711) sp_fs_scroll_pane_cp03_ParamLimits

0x8ac1,	// (0x00075998) list_single_fs_dyc_pane_cp01_ParamLimits

0x8ac1,	// (0x00075998) list_single_fs_dyc_pane_cp01

0xece3,	// (0x0007bbba) aid_size_cmail_indent

0xb84c,	// (0x00078723) list_single_dyc_row_pane_cp01

0x8b09,	// (0x000759e0) cntbar_detail_list_pane_ParamLimits

0x8b09,	// (0x000759e0) cntbar_detail_list_pane

0x8b5b,	// (0x00075a32) main_cntbar_detail_cont_pane_ParamLimits

0x8b5b,	// (0x00075a32) main_cntbar_detail_cont_pane

0x23e6,	// (0x0006f2bd) scroll_pane_cp032_ParamLimits

0x23e6,	// (0x0006f2bd) scroll_pane_cp032

0x8b6f,	// (0x00075a46) cntbar_detail_list_event_pane_ParamLimits

0x8b6f,	// (0x00075a46) cntbar_detail_list_event_pane

0x8b1b,	// (0x000759f2) cntbar_detail_list_shct_pane

0xabcc,	// (0x00077aa3) aid_list_gen

0xecec,	// (0x0007bbc3) aid_scroll

0xecf5,	// (0x0007bbcc) aid_size_touch_scroll_bar

0x6eba,	// (0x00073d91) aid_list_double

0xecfe,	// (0x0007bbd5) aid_list_single

0x6ea8,	// (0x00073d7f) aid_list_single_lg

0xb855,	// (0x0007872c) aid_list_z_g_a_sm

0xb85d,	// (0x00078734) aid_list_z_g_d

0x8b7f,	// (0x00075a56) aid_txt_z_prm

0x8b8d,	// (0x00075a64) aid_txt_z_prm_cp01

0x8b9b,	// (0x00075a72) aid_txt_z_sec

0x8ba9,	// (0x00075a80) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8ba9,	// (0x00075a80) main_cntbar_detail_cont_pane_g1

0x8bbd,	// (0x00075a94) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8bbd,	// (0x00075a94) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0007cd5b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0007cd5b) main_cntbar_detail_cont_pane_g

0xed07,	// (0x0007bbde) main_cntbar_detail_cont_pane_t1

0xed15,	// (0x0007bbec) main_cntbar_detail_cont_pane_t2

0xed23,	// (0x0007bbfa) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0007cd60) main_cntbar_detail_cont_pane_t

0x8bcd,	// (0x00075aa4) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8bcd,	// (0x00075aa4) cell_cntbar_detail_list_shct_pane

0xed31,	// (0x0007bc08) cntbar_detail_list_shct_pane_g1

0xed3a,	// (0x0007bc11) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0007cd67) cntbar_detail_list_shct_pane_g

0x8bdf,	// (0x00075ab6) cntbar_detail_list_event_pane_g1_ParamLimits

0x8bdf,	// (0x00075ab6) cntbar_detail_list_event_pane_g1

0x8beb,	// (0x00075ac2) cntbar_detail_list_event_pane_g2_ParamLimits

0x8beb,	// (0x00075ac2) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0007cd6c) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0007cd6c) cntbar_detail_list_event_pane_g

0x8c59,	// (0x00075b30) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c59,	// (0x00075b30) cntbar_detail_list_event_pane_t1

0x8c6e,	// (0x00075b45) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c6e,	// (0x00075b45) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0007cd79) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0007cd79) cntbar_detail_list_event_pane_t

0xcc91,	// (0x00079b68) cell_cntbar_detail_list_shct_pane_g1

0x2869,	// (0x0006f740) navi_pane_mv_g3

0x95f0,	// (0x000764c7) main_cntbar_detail_pane_ParamLimits

0x9597,	// (0x0007646e) main_notif_wgt_pane

0x9ff1,	// (0x00076ec8) aid_tch_main_mp4_pane_g4

0xa1cf,	// (0x000770a6) popup_slider_window_cp02

0xb7c2,	// (0x00078699) list_recal_day_event_pane

0x8ad9,	// (0x000759b0) cntbar_detail_btn_pane_ParamLimits

0x8ad9,	// (0x000759b0) cntbar_detail_btn_pane

0x8af1,	// (0x000759c8) cntbar_detail_btn_pane_cp01_ParamLimits

0x8af1,	// (0x000759c8) cntbar_detail_btn_pane_cp01

0x8b1b,	// (0x000759f2) cntbar_detail_list_shct_pane_ParamLimits

0x8b2b,	// (0x00075a02) cntbar_detail_pane_g1_ParamLimits

0x8b2b,	// (0x00075a02) cntbar_detail_pane_g1

0x8b3f,	// (0x00075a16) cntbar_detail_pane_t1_ParamLimits

0x8b3f,	// (0x00075a16) cntbar_detail_pane_t1

0x8bf7,	// (0x00075ace) cntbar_detail_list_event_pane_g3_ParamLimits

0x8bf7,	// (0x00075ace) cntbar_detail_list_event_pane_g3

0x8c0f,	// (0x00075ae6) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c0f,	// (0x00075ae6) cntbar_detail_list_event_pane_g4

0x8c27,	// (0x00075afe) cntbar_detail_list_event_pane_g5_ParamLimits

0x8c27,	// (0x00075afe) cntbar_detail_list_event_pane_g5

0x8c3f,	// (0x00075b16) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c3f,	// (0x00075b16) cntbar_detail_list_event_pane_g6

0x8c83,	// (0x00075b5a) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c83,	// (0x00075b5a) cntbar_detail_list_event_pane_t3

0x8c95,	// (0x00075b6c) popup_notif_wgt_window_ParamLimits

0x8c95,	// (0x00075b6c) popup_notif_wgt_window

0x8cae,	// (0x00075b85) popup_submenu_window_cp01_ParamLimits

0x8cae,	// (0x00075b85) popup_submenu_window_cp01

0xb264,	// (0x0007813b) bg_popup_window_pane_cp10

0xed43,	// (0x0007bc1a) listscroll_notif_wgt_pane

0xed55,	// (0x0007bc2c) list_notif_wgt_window

0xed5e,	// (0x0007bc35) scroll_pane_cp033

0x8cc2,	// (0x00075b99) list_notif_wgt_row_pane_ParamLimits

0x8cc2,	// (0x00075b99) list_notif_wgt_row_pane

0xed67,	// (0x0007bc3e) aid_size_list_notif_wgt_del

0xed74,	// (0x0007bc4b) list_notif_wgt_row_pane_g1

0xed80,	// (0x0007bc57) list_notif_wgt_row_pane_g2

0xed8c,	// (0x0007bc63) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0007cd80) list_notif_wgt_row_pane_g

0xed99,	// (0x0007bc70) list_notif_wgt_row_pane_t1

0xedae,	// (0x0007bc85) list_notif_wgt_row_pane_t2

0xedc0,	// (0x0007bc97) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0007cd87) list_notif_wgt_row_pane_t

0xd8bd,	// (0x0007a794) list_recal_day_event_pane_g1

0xedd2,	// (0x0007bca9) list_recal_day_event_pane_t1

0x9597,	// (0x0007646e) bg_button_pane_cp045

0xede1,	// (0x0007bcb8) cntbar_detail_btn_pane_t1

0xc838,	// (0x0007970f) main_callh_pane_ParamLimits

0xc838,	// (0x0007970f) main_callh_pane

0x9597,	// (0x0007646e) main_coverflow0_pane

0x9597,	// (0x0007646e) main_wgtman_pane

0x7b5e,	// (0x00074a35) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7b5e,	// (0x00074a35) main_fs_bigclock_unlock_btn_pane

0x8461,	// (0x00075338) bg_button_pane_cp16

0x8471,	// (0x00075348) cell_tport_appsw_pane_g3

0x8cd2,	// (0x00075ba9) cf0_flow_pane_ParamLimits

0x8cd2,	// (0x00075ba9) cf0_flow_pane

0xedef,	// (0x0007bcc6) listscroll_cf0_pane

0xedfa,	// (0x0007bcd1) main_cf0_pane_g1

0x8ce7,	// (0x00075bbe) main_cf0_pane_t1_ParamLimits

0x8ce7,	// (0x00075bbe) main_cf0_pane_t1

0x8cfe,	// (0x00075bd5) main_cf0_pane_t2_ParamLimits

0x8cfe,	// (0x00075bd5) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0007cd93) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0007cd93) main_cf0_pane_t

0xee0c,	// (0x0007bce3) scroll_pane_cp11

0x8d15,	// (0x00075bec) cf0_flow_pane_g1

0x8d21,	// (0x00075bf8) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0007cd98) cf0_flow_pane_g

0x8d2d,	// (0x00075c04) cf0_flow_pane_t1

0x9597,	// (0x0007646e) main_call6_pane

0x9597,	// (0x0007646e) main_calllock_pane

0x8d3f,	// (0x00075c16) call6_btn_grp_pane_ParamLimits

0x8d3f,	// (0x00075c16) call6_btn_grp_pane

0x8d59,	// (0x00075c30) call6_pane_g1_ParamLimits

0x8d59,	// (0x00075c30) call6_pane_g1

0x8d6f,	// (0x00075c46) popup_call6_1st_window_ParamLimits

0x8d6f,	// (0x00075c46) popup_call6_1st_window

0x8d80,	// (0x00075c57) popup_call6_2nd_window_ParamLimits

0x8d80,	// (0x00075c57) popup_call6_2nd_window

0x8d91,	// (0x00075c68) cell_call6_btn_pane_ParamLimits

0x8d91,	// (0x00075c68) cell_call6_btn_pane

0xb264,	// (0x0007813b) bg_popup_call2_in_pane_cp03

0xee17,	// (0x0007bcee) popup_call6_1st_window_g1

0xee1f,	// (0x0007bcf6) popup_call6_1st_window_g2

0xee27,	// (0x0007bcfe) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0007cd9d) popup_call6_1st_window_g

0xee2f,	// (0x0007bd06) popup_call6_1st_window_t1

0xee3e,	// (0x0007bd15) popup_call6_1st_window_t2

0xee4e,	// (0x0007bd25) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0007cda4) popup_call6_1st_window_t

0xb264,	// (0x0007813b) bg_popup_call2_in_pane_cp04

0xee17,	// (0x0007bcee) popup_call6_2nd_window_g1

0xee1f,	// (0x0007bcf6) popup_call6_2nd_window_g2

0xee27,	// (0x0007bcfe) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0007cd9d) popup_call6_2nd_window_g

0xee2f,	// (0x0007bd06) popup_call6_2nd_window_t1

0x9597,	// (0x0007646e) bg_button_pane_cp15

0xee5e,	// (0x0007bd35) cell_call6_btn_pane_g1

0xee67,	// (0x0007bd3e) cell_call6_btn_pane_t1

0x8da5,	// (0x00075c7c) listscroll_wgtman_pane_ParamLimits

0x8da5,	// (0x00075c7c) listscroll_wgtman_pane

0x8dc8,	// (0x00075c9f) wgtman_btn_pane_ParamLimits

0x8dc8,	// (0x00075c9f) wgtman_btn_pane

0xb12a,	// (0x00078001) aid_scroll_copy1

0xee76,	// (0x0007bd4d) list_wgtman_pane

0x8e0b,	// (0x00075ce2) wgtman_btn_pane_g1_ParamLimits

0x8e0b,	// (0x00075ce2) wgtman_btn_pane_g1

0x8e37,	// (0x00075d0e) wgtman_btn_pane_t1_ParamLimits

0x8e37,	// (0x00075d0e) wgtman_btn_pane_t1

0xee80,	// (0x0007bd57) wgtman_btn_pane_t2_ParamLimits

0xee80,	// (0x0007bd57) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0007cdab) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0007cdab) wgtman_btn_pane_t

0x8e74,	// (0x00075d4b) listrow_wgtman_pane_ParamLimits

0x8e74,	// (0x00075d4b) listrow_wgtman_pane

0x8e86,	// (0x00075d5d) listrow_wgtman_pane_g1

0x8e93,	// (0x00075d6a) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0007cdb0) listrow_wgtman_pane_g

0x8eb1,	// (0x00075d88) listrow_wgtman_pane_t1

0x8ec9,	// (0x00075da0) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0007cdb5) listrow_wgtman_pane_t

0x8eef,	// (0x00075dc6) wait_bar_pane_cp09

0xee97,	// (0x0007bd6e) main_calllock_btn_pane

0xeea1,	// (0x0007bd78) main_calllock_pane_g1

0x9597,	// (0x0007646e) bg_button_pane_cp17

0xeead,	// (0x0007bd84) main_calllock_btn_pane_g1

0xeeb6,	// (0x0007bd8d) main_calllock_btn_pane_t1

0x9597,	// (0x0007646e) main_dialer3_pane

0x9597,	// (0x0007646e) main_fmrd2_pane

0xcc91,	// (0x00079b68) main_fs_bigclock_unlock_btn_pane_g1

0xeecd,	// (0x0007bda4) main_fs_bigclock_unlock_btn_pane_t1

0x8f01,	// (0x00075dd8) area_fmrd2_info_pane_ParamLimits

0x8f01,	// (0x00075dd8) area_fmrd2_info_pane

0x8f10,	// (0x00075de7) area_fmrd2_visual_pane_ParamLimits

0x8f10,	// (0x00075de7) area_fmrd2_visual_pane

0x8f1e,	// (0x00075df5) fmrd2_indi_pane_ParamLimits

0x8f1e,	// (0x00075df5) fmrd2_indi_pane

0x8f2b,	// (0x00075e02) area_fmrd2_visual_pane_g1

0x8f33,	// (0x00075e0a) area_fmrd2_visual_pane_t1

0x8f43,	// (0x00075e1a) area_fmrd2_visual_pane_t2

0x8f53,	// (0x00075e2a) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0007cdbf) area_fmrd2_visual_pane_t

0x8f63,	// (0x00075e3a) area_fmrd2_info_pane_g1

0x8f6b,	// (0x00075e42) area_fmrd2_info_pane_t1

0x8f7b,	// (0x00075e52) area_fmrd2_info_pane_t2

0x8f8b,	// (0x00075e62) area_fmrd2_info_pane_t3

0x8f9b,	// (0x00075e72) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0007cdc6) area_fmrd2_info_pane_t

0x8fab,	// (0x00075e82) fmrd2_indi_pane_t1

0x8fbb,	// (0x00075e92) fmrd2_indi_pane_t2

0x8fcb,	// (0x00075ea2) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0007cdcf) fmrd2_indi_pane_t

0xe475,	// (0x0007b34c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe475,	// (0x0007b34c) list_single_fs_bigclock_indicator_pane_g5

0xe51e,	// (0x0007b3f5) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe51e,	// (0x0007b3f5) list_single_fs_bigclock_indicator_pane_t5

0x8688,	// (0x0007555f) aid_cell_bcale_month_pane_ParamLimits

0x8688,	// (0x0007555f) aid_cell_bcale_month_pane

0x86a6,	// (0x0007557d) bcale_month_pane_ParamLimits

0x86a6,	// (0x0007557d) bcale_month_pane

0x86c8,	// (0x0007559f) bcale_preview_pane_ParamLimits

0x86c8,	// (0x0007559f) bcale_preview_pane

0xec6d,	// (0x0007bb44) list_single_fs_bigclock_pane_t1_ParamLimits

0xec8c,	// (0x0007bb63) list_single_fs_bigclock_pane_t2_ParamLimits

0xec8c,	// (0x0007bb63) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0007cd51) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0007cd51) list_single_fs_bigclock_pane_t

0xeec5,	// (0x0007bd9c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0007cdba) main_fs_bigclock_unlock_btn_pane_g

0x8fdb,	// (0x00075eb2) aid_dia3_key_size_ParamLimits

0x8fdb,	// (0x00075eb2) aid_dia3_key_size

0x8fea,	// (0x00075ec1) aid_dia3_listrow_size_ParamLimits

0x8fea,	// (0x00075ec1) aid_dia3_listrow_size

0x8fff,	// (0x00075ed6) dia3_keypad_fun_pane_ParamLimits

0x8fff,	// (0x00075ed6) dia3_keypad_fun_pane

0x901b,	// (0x00075ef2) dia3_keypad_num_pane_ParamLimits

0x901b,	// (0x00075ef2) dia3_keypad_num_pane

0x9034,	// (0x00075f0b) dia3_listscroll_pane_ParamLimits

0x9034,	// (0x00075f0b) dia3_listscroll_pane

0x9047,	// (0x00075f1e) dia3_numentry_pane_ParamLimits

0x9047,	// (0x00075f1e) dia3_numentry_pane

0xeedb,	// (0x0007bdb2) dia3_list_pane

0xeee6,	// (0x0007bdbd) scroll_pane_cp12

0x9597,	// (0x0007646e) bg_dia3_numentry_pane

0x905b,	// (0x00075f32) dia3_numentry_pane_t1

0x906a,	// (0x00075f41) cell_dia3_key_num_pane

0x9072,	// (0x00075f49) cell_dia3_key0_fun_pane_ParamLimits

0x9072,	// (0x00075f49) cell_dia3_key0_fun_pane

0x9086,	// (0x00075f5d) cell_dia3_key1_fun_pane_ParamLimits

0x9086,	// (0x00075f5d) cell_dia3_key1_fun_pane

0x909e,	// (0x00075f75) dia3_listrow_pane

0xe173,	// (0x0007b04a) bg_dia3_numentry_pane_g1

0x9597,	// (0x0007646e) bg_button_pane_cp21

0xeef1,	// (0x0007bdc8) cell_dia3_key_num_pane_t1

0xeeff,	// (0x0007bdd6) cell_dia3_key_num_pane_t2

0xef0e,	// (0x0007bde5) cell_dia3_key_num_pane_t3

0xef1d,	// (0x0007bdf4) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0007cdd6) cell_dia3_key_num_pane_t

0x9597,	// (0x0007646e) bg_button_pane_cp19

0x90b0,	// (0x00075f87) cell_dia3_key0_fun_pane_g1

0x9597,	// (0x0007646e) bg_button_pane_cp20

0x90b8,	// (0x00075f8f) cell_dia3_key1_fun_pane_g1

0x90c0,	// (0x00075f97) area_left_week_number_pane

0x90ce,	// (0x00075fa5) area_top_day_name_pane

0x90e1,	// (0x00075fb8) frame_month_view_pane

0xef2c,	// (0x0007be03) grid_month_view_pane

0x90f6,	// (0x00075fcd) cell_top_day_name_pane_ParamLimits

0x90f6,	// (0x00075fcd) cell_top_day_name_pane

0x9125,	// (0x00075ffc) cell_area_left_week_number_pane_ParamLimits

0x9125,	// (0x00075ffc) cell_area_left_week_number_pane

0x9139,	// (0x00076010) cell_month_view_pane_ParamLimits

0x9139,	// (0x00076010) cell_month_view_pane

0xef3a,	// (0x0007be11) frm_month_g1

0x9168,	// (0x0007603f) frm_month_g2

0x917b,	// (0x00076052) frm_month_g3

0x918e,	// (0x00076065) frm_month_g4

0x91a1,	// (0x00076078) frm_month_g5

0x91b4,	// (0x0007608b) frm_month_g6

0x91c7,	// (0x0007609e) frm_month_g7

0xef47,	// (0x0007be1e) frm_month_g8

0x91dc,	// (0x000760b3) frm_month_g9

0x91ec,	// (0x000760c3) frm_month_g10

0x91fc,	// (0x000760d3) frm_month_g11

0x920c,	// (0x000760e3) frm_month_g12

0x921e,	// (0x000760f5) frm_month_g13

0x9232,	// (0x00076109) frm_month_g14

0x9246,	// (0x0007611d) frm_month_g15

0x925a,	// (0x00076131) frm_month_g16

0x000f,

0xff08,	// (0x0007cddf) frm_month_g

0xef54,	// (0x0007be2b) cell_top_day_name_pane_t1

0x926e,	// (0x00076145) cell_area_left_week_number_pane_g1

0x927a,	// (0x00076151) cell_area_left_week_number_pane_t1

0xcec1,	// (0x00079d98) cell_month_view_pane_g1

0x928d,	// (0x00076164) cell_month_view_pane_t1

0x9597,	// (0x0007646e) main_fps_pane

0xe70e,	// (0x0007b5e5) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe70e,	// (0x0007b5e5) cmail_ddmenu_btn02_pane_cp1

0xe72a,	// (0x0007b601) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe72a,	// (0x0007b601) cmail_ddmenu_btn02_pane_cp2

0x8992,	// (0x00075869) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8992,	// (0x00075869) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007cd04) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007cd04) cmail_ddmenu_btn02_pane_g

0x89b3,	// (0x0007588a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x89b3,	// (0x0007588a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007cd09) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007cd09) cmail_ddmenu_btn02_pane_t

0x92a0,	// (0x00076177) fps_text_pane_ParamLimits

0x92a0,	// (0x00076177) fps_text_pane

0x92b7,	// (0x0007618e) main_fps_pane_g1_ParamLimits

0x92b7,	// (0x0007618e) main_fps_pane_g1

0x92cf,	// (0x000761a6) wait_bar_pane_cp010_ParamLimits

0x92cf,	// (0x000761a6) wait_bar_pane_cp010

0x92e2,	// (0x000761b9) fps_text_pane_t1_ParamLimits

0x92e2,	// (0x000761b9) fps_text_pane_t1

0xdb52,	// (0x0007aa29) cam4_image_uncrop_pane_g1

0xdb5b,	// (0x0007aa32) cam4_image_uncrop_pane_g2

0x5cda,	// (0x00072bb1) cam4_image_uncrop_pane_g3

0x5ce3,	// (0x00072bba) cam4_image_uncrop_pane_g4

0x0003,

0xf8f4,	// (0x0007c7cb) cam4_image_uncrop_pane_g

0x909e,	// (0x00075f75) dia3_listrow_pane_ParamLimits

0x9597,	// (0x0007646e) main_phob2_pane

0x8430,	// (0x00075307) cell_tport_appsw_pane_cp02_ParamLimits

0x8430,	// (0x00075307) cell_tport_appsw_pane_cp02

0x8444,	// (0x0007531b) cell_tport_appsw_pane_cp03_ParamLimits

0x8444,	// (0x0007531b) cell_tport_appsw_pane_cp03

0x9597,	// (0x0007646e) phob2_contact_card_pane

0x9597,	// (0x0007646e) phob2_listscroll_pane

0xef67,	// (0x0007be3e) phob2_list_pane

0xef6f,	// (0x0007be46) scroll_pane_cp034

0x92fa,	// (0x000761d1) phob2_cc_data_pane_ParamLimits

0x92fa,	// (0x000761d1) phob2_cc_data_pane

0x931b,	// (0x000761f2) phob2_cc_listscroll_pane_ParamLimits

0x931b,	// (0x000761f2) phob2_cc_listscroll_pane

0x933d,	// (0x00076214) list_double_large_graphic_phob2_pane_ParamLimits

0x933d,	// (0x00076214) list_double_large_graphic_phob2_pane

0x9351,	// (0x00076228) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9351,	// (0x00076228) list_double_large_graphic_phob2_pane_g1

0x9367,	// (0x0007623e) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9367,	// (0x0007623e) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0007ce00) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0007ce00) list_double_large_graphic_phob2_pane_g

0x9373,	// (0x0007624a) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9373,	// (0x0007624a) list_double_large_graphic_phob2_pane_t1

0x9388,	// (0x0007625f) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9388,	// (0x0007625f) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0007ce05) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0007ce05) list_double_large_graphic_phob2_pane_t

0x9597,	// (0x0007646e) list_highlight_pane_cp024

0xef77,	// (0x0007be4e) phob2_cc_button_pane

0x939a,	// (0x00076271) phob2_cc_data_pane_g1_ParamLimits

0x939a,	// (0x00076271) phob2_cc_data_pane_g1

0x93b0,	// (0x00076287) phob2_cc_data_pane_g2_ParamLimits

0x93b0,	// (0x00076287) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0007ce0a) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0007ce0a) phob2_cc_data_pane_g

0x93c2,	// (0x00076299) phob2_cc_data_pane_t1_ParamLimits

0x93c2,	// (0x00076299) phob2_cc_data_pane_t1

0x93da,	// (0x000762b1) phob2_cc_data_pane_t2_ParamLimits

0x93da,	// (0x000762b1) phob2_cc_data_pane_t2

0x93f4,	// (0x000762cb) phob2_cc_data_pane_t3_ParamLimits

0x93f4,	// (0x000762cb) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0007ce0f) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0007ce0f) phob2_cc_data_pane_t

0xef7f,	// (0x0007be56) phob2_cc_list_pane_ParamLimits

0xef7f,	// (0x0007be56) phob2_cc_list_pane

0xd956,	// (0x0007a82d) scroll_pane_cp035_ParamLimits

0xd956,	// (0x0007a82d) scroll_pane_cp035

0x95f0,	// (0x000764c7) bg_button_pane_cp033

0xef8b,	// (0x0007be62) phob2_cc_button_pane_g1

0xef97,	// (0x0007be6e) phob2_cc_button_pane_t1

0xefac,	// (0x0007be83) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0007ce16) phob2_cc_button_pane_t

0x940e,	// (0x000762e5) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x940e,	// (0x000762e5) list_double_large_graphic_phob2_cc_pane

0x9422,	// (0x000762f9) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9422,	// (0x000762f9) list_double_large_graphic_phob2_cc_pane_g1

0x942e,	// (0x00076305) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x942e,	// (0x00076305) list_double_large_graphic_phob2_cc_pane_g2

0x943a,	// (0x00076311) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x943a,	// (0x00076311) list_double_large_graphic_phob2_cc_pane_g3

0x9446,	// (0x0007631d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9446,	// (0x0007631d) list_double_large_graphic_phob2_cc_pane_g4

0x9452,	// (0x00076329) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9452,	// (0x00076329) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0007ce1b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0007ce1b) list_double_large_graphic_phob2_cc_pane_g

0x945e,	// (0x00076335) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x945e,	// (0x00076335) list_double_large_graphic_phob2_cc_pane_t1

0x9487,	// (0x0007635e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9487,	// (0x0007635e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0007ce26) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0007ce26) list_double_large_graphic_phob2_cc_pane_t

0xefbe,	// (0x0007be95) list_highlight_pane_cp025_ParamLimits

0xefbe,	// (0x0007be95) list_highlight_pane_cp025

0x95f0,	// (0x000764c7) bg_button_pane_cp033_ParamLimits

0xef8b,	// (0x0007be62) phob2_cc_button_pane_g1_ParamLimits

0xef97,	// (0x0007be6e) phob2_cc_button_pane_t1_ParamLimits

0xefac,	// (0x0007be83) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0007ce16) phob2_cc_button_pane_t_ParamLimits

0x003e,	// (0x0006cf15) popup_wgtman_window

0xd797,	// (0x0007a66e) scroll_pane_cp038

0x8ded,	// (0x00075cc4) wgtman_btn_pane_cp_01_ParamLimits

0x8ded,	// (0x00075cc4) wgtman_btn_pane_cp_01

0xefcc,	// (0x0007bea3) wgtman_content_pane

0xefd5,	// (0x0007beac) wgtman_heading_pane

0x9597,	// (0x0007646e) bg_heading_pane_cp02

0xefde,	// (0x0007beb5) wgtman_heading_pane_g1

0xefe6,	// (0x0007bebd) wgtman_heading_pane_t1

0xeff4,	// (0x0007becb) scroll_pane_cp036

0xeffc,	// (0x0007bed3) wgtman_list_pane

0xf004,	// (0x0007bedb) wgtman_list_pane_t1_ParamLimits

0xf004,	// (0x0007bedb) wgtman_list_pane_t1

0xa22d,	// (0x00077104) cam4_grid_pane

0x69a2,	// (0x00073879) bg_button_pane_cp015_ParamLimits

0x69b6,	// (0x0007388d) bg_button_pane_cp016_ParamLimits

0x69c9,	// (0x000738a0) bg_button_pane_cp017_ParamLimits

0x6a21,	// (0x000738f8) popup_vitu2_query_window_g3_ParamLimits

0x6a21,	// (0x000738f8) popup_vitu2_query_window_g3

0x6ade,	// (0x000739b5) popup_vitu2_query_window_t6_ParamLimits

0x6ade,	// (0x000739b5) popup_vitu2_query_window_t6

0x6b09,	// (0x000739e0) popup_vitu2_query_window_t7_ParamLimits

0x6b09,	// (0x000739e0) popup_vitu2_query_window_t7

0xdb52,	// (0x0007aa29) cam4_grid_pane_g1

0xdb5b,	// (0x0007aa32) cam4_grid_pane_g2

0xf01e,	// (0x0007bef5) cam4_grid_pane_g3

0xf027,	// (0x0007befe) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0007ce2b) cam4_grid_pane_g

0x11e3,	// (0x0006e0ba) aid_placing_vt_slider_lsc_ParamLimits

0x14d0,	// (0x0006e3a7) vidtel_button_pane_ParamLimits

0x14d0,	// (0x0006e3a7) vidtel_button_pane

0xf032,	// (0x0007bf09) bg_button_pane_cp034

0x94b0,	// (0x00076387) vidtel_button_pane_g1

0xf03c,	// (0x0007bf13) vidtel_button_pane_t1

0xd89b,	// (0x0007a772) aid_size_vtel_slider_touch

0xd956,	// (0x0007a82d) scroll_pane_cp039

0xe1b1,	// (0x0007b088) ncim_query_button_pane_cp01_ParamLimits

0xe1d0,	// (0x0007b0a7) ncimui_query_pane_g1_ParamLimits

0x95f0,	// (0x000764c7) input_focus_pane_cp012_ParamLimits

0xe1f5,	// (0x0007b0cc) ncim_query_entry_pane_t1_ParamLimits

0xd956,	// (0x0007a82d) scroll_pane_cp039_ParamLimits

0x27db,	// (0x0006f6b2) navi_pane_bcale_mc_g1

0x27e3,	// (0x0006f6ba) navi_pane_bcale_mc_t1

0xe773,	// (0x0007b64a) main_sp_fs_email_pane_g1

0xe77f,	// (0x0007b656) main_sp_fs_email_pane_g2

0x0001,

0xfceb,	// (0x0007cbc2) main_sp_fs_email_pane_g

0xe9fb,	// (0x0007b8d2) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9fb,	// (0x0007b8d2) list_single_cale_mrui_row_pane_g3

0x89d3,	// (0x000758aa) list_single_recal_day_pane_g5_event_pane

0xb820,	// (0x000786f7) list_single_recal_day_pane_g7

0xf04a,	// (0x0007bf21) list_recal_day_event_pane_cp01

0xf053,	// (0x0007bf2a) list_recal_vselct_arw_lo_pane_cp01

0xf05b,	// (0x0007bf32) list_recal_vselct_arw_up_pane_cp01

0xf063,	// (0x0007bf3a) list_recal_vselct_pane_cp01

0xd8bd,	// (0x0007a794) list_recal_day_event_pane_cp01_g1

0xb865,	// (0x0007873c) list_recal_day_event_pane_cp01_t1

0xb828,	// (0x000786ff) list_single_recal_day_pane_t1_ParamLimits

0xb83a,	// (0x00078711) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007cd19) list_single_recal_day_pane_t_ParamLimits

0x9c6c,	// (0x00076b43) bg_notes_pane_ParamLimits

0xa729,	// (0x00077600) list_notes_pane_ParamLimits

0x038b,	// (0x0006d262) scroll_pane_cp06_ParamLimits

0xa74b,	// (0x00077622) main_notes_pane_ParamLimits

0x9597,	// (0x0007646e) main_welc_pane

0x94b8,	// (0x0007638f) main_welc_body_pane_ParamLimits

0x94b8,	// (0x0007638f) main_welc_body_pane

0x94d7,	// (0x000763ae) main_welc_opti_pane_ParamLimits

0x94d7,	// (0x000763ae) main_welc_opti_pane

0x9520,	// (0x000763f7) main_welc_pane_t1_ParamLimits

0x9520,	// (0x000763f7) main_welc_pane_t1

0xf06d,	// (0x0007bf44) main_welc_body_row_pane_ParamLimits

0xf06d,	// (0x0007bf44) main_welc_body_row_pane

0x9542,	// (0x00076419) main_welc_opti_row_pane_ParamLimits

0x9542,	// (0x00076419) main_welc_opti_row_pane

0xf081,	// (0x0007bf58) main_welc_opti_row_pane_g1

0xf089,	// (0x0007bf60) main_welc_opti_row_pane_t1

0xf098,	// (0x0007bf6f) main_welc_body_row_pane_t1

0xed4d,	// (0x0007bc24) popup_notif_wgt_heading_pane

0xed67,	// (0x0007bc3e) aid_size_list_notif_wgt_del_ParamLimits

0xed74,	// (0x0007bc4b) list_notif_wgt_row_pane_g1_ParamLimits

0xed80,	// (0x0007bc57) list_notif_wgt_row_pane_g2_ParamLimits

0xed8c,	// (0x0007bc63) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0007cd80) list_notif_wgt_row_pane_g_ParamLimits

0xed99,	// (0x0007bc70) list_notif_wgt_row_pane_t1_ParamLimits

0xedae,	// (0x0007bc85) list_notif_wgt_row_pane_t2_ParamLimits

0xedc0,	// (0x0007bc97) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0007cd87) list_notif_wgt_row_pane_t_ParamLimits

0x8e86,	// (0x00075d5d) listrow_wgtman_pane_g1_ParamLimits

0x8e93,	// (0x00075d6a) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0007cdb0) listrow_wgtman_pane_g_ParamLimits

0x8eb1,	// (0x00075d88) listrow_wgtman_pane_t1_ParamLimits

0x8ec9,	// (0x00075da0) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0007cdb5) listrow_wgtman_pane_t_ParamLimits

0x8eef,	// (0x00075dc6) wait_bar_pane_cp09_ParamLimits

0x9597,	// (0x0007646e) bg_popup_heading_pane_cp02

0xf0a7,	// (0x0007bf7e) popup_notif_wgt_heading_pane_g1

0xf0af,	// (0x0007bf86) popup_notif_wgt_heading_pane_t1

0x9597,	// (0x0007646e) main_vids_pane

0x9597,	// (0x0007646e) vids_listscroll_pane

0x9552,	// (0x00076429) scroll_pane_cp040

0x9597,	// (0x0007646e) vids_list_pane

0x955d,	// (0x00076434) vids_list_double_pane_ParamLimits

0x955d,	// (0x00076434) vids_list_double_pane

0x956e,	// (0x00076445) vids_list_double_pane_g1

0x9577,	// (0x0007644e) vids_list_double_pane_t1

0x9587,	// (0x0007645e) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0007ce39) vids_list_double_pane_t

0x95f0,	// (0x000764c7) main_ncimui_pane_ParamLimits

0x76ec,	// (0x000745c3) main_ncimui_pane_g1_ParamLimits

0x76f8,	// (0x000745cf) main_ncimui_pane_g2_ParamLimits

0x76f8,	// (0x000745cf) main_ncimui_pane_g2

0x0001,

0xfbf0,	// (0x0007cac7) main_ncimui_pane_g_ParamLimits

0xfbf0,	// (0x0007cac7) main_ncimui_pane_g

0x94f6,	// (0x000763cd) main_welc_pane_g1_ParamLimits

0x94f6,	// (0x000763cd) main_welc_pane_g1

0x950b,	// (0x000763e2) main_welc_pane_g2_ParamLimits

0x950b,	// (0x000763e2) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0007ce34) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0007ce34) main_welc_pane_g

0x9c6c,	// (0x00076b43) listscroll_mce_pane_ParamLimits

0x28bb,	// (0x0006f792) wait_bar_pane_cp10

0xc82c,	// (0x00079703) main_cale_day_pane_ParamLimits

0xc82c,	// (0x00079703) main_cale_week_pane_ParamLimits

0x9c6c,	// (0x00076b43) main_messa_pane_ParamLimits

0x4f98,	// (0x00071e6f) main_clock2_btn_pane_ParamLimits

0x4f98,	// (0x00071e6f) main_clock2_btn_pane

0xd049,	// (0x00079f20) main_clock2_btn_pane_cp01_ParamLimits

0xd049,	// (0x00079f20) main_clock2_btn_pane_cp01

0xe9cc,	// (0x0007b8a3) list_cale_mrui_pane_ParamLimits

0xee04,	// (0x0007bcdb) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0007cd8e) main_cf0_pane_g

0x90c0,	// (0x00075f97) area_left_week_number_pane_ParamLimits

0x90ce,	// (0x00075fa5) area_top_day_name_pane_ParamLimits

0x90e1,	// (0x00075fb8) frame_month_view_pane_ParamLimits

0xef2c,	// (0x0007be03) grid_month_view_pane_ParamLimits

0xef3a,	// (0x0007be11) frm_month_g1_ParamLimits

0x9168,	// (0x0007603f) frm_month_g2_ParamLimits

0x917b,	// (0x00076052) frm_month_g3_ParamLimits

0x918e,	// (0x00076065) frm_month_g4_ParamLimits

0x91a1,	// (0x00076078) frm_month_g5_ParamLimits

0x91b4,	// (0x0007608b) frm_month_g6_ParamLimits

0x91c7,	// (0x0007609e) frm_month_g7_ParamLimits

0xef47,	// (0x0007be1e) frm_month_g8_ParamLimits

0x91dc,	// (0x000760b3) frm_month_g9_ParamLimits

0x91ec,	// (0x000760c3) frm_month_g10_ParamLimits

0x91fc,	// (0x000760d3) frm_month_g11_ParamLimits

0x920c,	// (0x000760e3) frm_month_g12_ParamLimits

0x921e,	// (0x000760f5) frm_month_g13_ParamLimits

0x9232,	// (0x00076109) frm_month_g14_ParamLimits

0x9246,	// (0x0007611d) frm_month_g15_ParamLimits

0x925a,	// (0x00076131) frm_month_g16_ParamLimits

0xff08,	// (0x0007cddf) frm_month_g_ParamLimits

0xef54,	// (0x0007be2b) cell_top_day_name_pane_t1_ParamLimits

0x926e,	// (0x00076145) cell_area_left_week_number_pane_g1_ParamLimits

0x927a,	// (0x00076151) cell_area_left_week_number_pane_t1_ParamLimits

0xcec1,	// (0x00079d98) cell_month_view_pane_g1_ParamLimits

0x928d,	// (0x00076164) cell_month_view_pane_t1_ParamLimits

0x9c64,	// (0x00076b3b) main_clock2_btn_pane_g1

0xf0bd,	// (0x0007bf94) main_clock2_btn_pane_t1

0x95f0,	// (0x000764c7) listscroll_cmail_pane_ParamLimits

0xe773,	// (0x0007b64a) main_sp_fs_email_pane_g1_ParamLimits

0xe77f,	// (0x0007b656) main_sp_fs_email_pane_g2_ParamLimits

0xfceb,	// (0x0007cbc2) main_sp_fs_email_pane_g_ParamLimits

0xead7,	// (0x0007b9ae) list_recal_day_pane_ParamLimits

0xeae8,	// (0x0007b9bf) mian_recal_day_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
