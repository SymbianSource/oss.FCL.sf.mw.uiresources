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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000763b1 };

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
0x678f,	// (0x0007cb40) Screen

0x679b,	// (0x0007cb4c) application_window

0x67f7,	// (0x0007cba8) area_bottom_pane_ParamLimits

0x67f7,	// (0x0007cba8) area_bottom_pane

0x6850,	// (0x0007cc01) area_top_pane_ParamLimits

0x6850,	// (0x0007cc01) area_top_pane

0x68b4,	// (0x0007cc65) call_video_uplink_pane_ParamLimits

0x68b4,	// (0x0007cc65) call_video_uplink_pane

0x68f3,	// (0x0007cca4) main_pane_ParamLimits

0x68f3,	// (0x0007cca4) main_pane

0x1f77,	// (0x00078328) context_pane

0x9b02,	// (0x0007feb3) navi_pane

0x9b28,	// (0x0007fed9) popup_cale_events_window_ParamLimits

0x9b28,	// (0x0007fed9) popup_cale_events_window

0x1f8a,	// (0x0007833b) popup_mup_playback_window

0x9b40,	// (0x0007fef1) signal_pane

0xefdd,	// (0x0008538e) main_browser_pane

0x0105,	// (0x000764b6) main_burst_pane

0x998e,	// (0x0007fd3f) main_calc_pane

0x1f5d,	// (0x0007830e) main_cale_day_pane

0x7036,	// (0x0007d3e7) main_cale_month_pane

0x1f5d,	// (0x0007830e) main_cale_week_pane

0x0105,	// (0x000764b6) main_call_pane

0xeca6,	// (0x00085057) main_call_poc_pane

0x0105,	// (0x000764b6) main_camera_pane

0x0105,	// (0x000764b6) main_chi_dic_pane

0x08e8,	// (0x00076c99) main_clock_pane

0xeca6,	// (0x00085057) main_fmradio_pane

0x0105,	// (0x000764b6) main_graph_messa_pane

0xeca6,	// (0x00085057) main_help_pane

0xefdd,	// (0x0008538e) main_im_pane

0xef18,	// (0x000852c9) main_image_pane_ParamLimits

0xef18,	// (0x000852c9) main_image_pane

0xeca6,	// (0x00085057) main_location2_pane

0x0105,	// (0x000764b6) main_location_pane

0xef18,	// (0x000852c9) main_messa_pane

0xeca6,	// (0x00085057) main_mp2_pane

0x0105,	// (0x000764b6) main_mp_pane

0xeca6,	// (0x00085057) main_msg_pane

0xeca6,	// (0x00085057) main_mup_eq_pane

0xeca6,	// (0x00085057) main_mup_pane

0xefdd,	// (0x0008538e) main_notes_pane

0xeca6,	// (0x00085057) main_pec_pane

0xeca6,	// (0x00085057) main_phob_pane

0xeca6,	// (0x00085057) main_pinb_pane

0xeca6,	// (0x00085057) main_postcard_pane

0xeca6,	// (0x00085057) main_qdial_pane

0x0105,	// (0x000764b6) main_skin_pane

0xeca6,	// (0x00085057) main_smil2_pane

0x0105,	// (0x000764b6) main_smil_pane

0x0105,	// (0x000764b6) main_video_pane

0x0105,	// (0x000764b6) main_video_tele_pane

0xef18,	// (0x000852c9) main_viewer_pane_ParamLimits

0xef18,	// (0x000852c9) main_viewer_pane

0x0105,	// (0x000764b6) main_vorec_pane

0x99cc,	// (0x0007fd7d) popup_blid_sat_info_window_ParamLimits

0x99cc,	// (0x0007fd7d) popup_blid_sat_info_window

0x99ec,	// (0x0007fd9d) popup_dyc_status_message_window_ParamLimits

0x99ec,	// (0x0007fd9d) popup_dyc_status_message_window

0x99fc,	// (0x0007fdad) popup_grid_large_graphic_window_ParamLimits

0x99fc,	// (0x0007fdad) popup_grid_large_graphic_window

0x9a8d,	// (0x0007fe3e) popup_loc_request_window_ParamLimits

0x9a8d,	// (0x0007fe3e) popup_loc_request_window

0x9ada,	// (0x0007fe8b) popup_wml_address_window_ParamLimits

0x9ada,	// (0x0007fe8b) popup_wml_address_window

0x9866,	// (0x0007fc17) call_muted_g1

0x9528,	// (0x0007f8d9) popup_call_audio_conf_window_ParamLimits

0x9528,	// (0x0007f8d9) popup_call_audio_conf_window

0x9876,	// (0x0007fc27) popup_call_audio_first_window_ParamLimits

0x9876,	// (0x0007fc27) popup_call_audio_first_window

0x98b6,	// (0x0007fc67) popup_call_audio_in_window_ParamLimits

0x98b6,	// (0x0007fc67) popup_call_audio_in_window

0x98da,	// (0x0007fc8b) popup_call_audio_out_window_ParamLimits

0x98da,	// (0x0007fc8b) popup_call_audio_out_window

0x98fc,	// (0x0007fcad) popup_call_audio_second_window_ParamLimits

0x98fc,	// (0x0007fcad) popup_call_audio_second_window

0x992c,	// (0x0007fcdd) popup_call_audio_wait_window_ParamLimits

0x992c,	// (0x0007fcdd) popup_call_audio_wait_window

0x994d,	// (0x0007fcfe) popup_number_entry_window_ParamLimits

0x994d,	// (0x0007fcfe) popup_number_entry_window

0xe893,	// (0x00084c44) bg_popup_call_pane_cp05_ParamLimits

0xe893,	// (0x00084c44) bg_popup_call_pane_cp05

0xe8b3,	// (0x00084c64) popup_number_entry_window_t1

0xe8c6,	// (0x00084c77) popup_number_entry_window_t2

0xe8d8,	// (0x00084c89) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x00085477) popup_number_entry_window_t

0xe8ea,	// (0x00084c9b) text_title_cp2

0xe8fd,	// (0x00084cae) bg_popup_call_pane_cp_ParamLimits

0xe8fd,	// (0x00084cae) bg_popup_call_pane_cp

0xe90b,	// (0x00084cbc) call_thumbnail_pane

0xe913,	// (0x00084cc4) popup_call_audio_in_window_g1_ParamLimits

0xe913,	// (0x00084cc4) popup_call_audio_in_window_g1

0xe91f,	// (0x00084cd0) popup_call_audio_in_window_g2_ParamLimits

0xe91f,	// (0x00084cd0) popup_call_audio_in_window_g2

0xe92b,	// (0x00084cdc) popup_call_audio_in_window_g3_ParamLimits

0xe92b,	// (0x00084cdc) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x00085480) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x00085480) popup_call_audio_in_window_g

0xe937,	// (0x00084ce8) popup_call_audio_in_window_t1_ParamLimits

0xe937,	// (0x00084ce8) popup_call_audio_in_window_t1

0xe953,	// (0x00084d04) popup_call_audio_in_window_t2_ParamLimits

0xe953,	// (0x00084d04) popup_call_audio_in_window_t2

0xe96f,	// (0x00084d20) popup_call_audio_in_window_t3_ParamLimits

0xe96f,	// (0x00084d20) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x00085487) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x00085487) popup_call_audio_in_window_t

0xe8fd,	// (0x00084cae) bg_popup_call_pane_cp01_ParamLimits

0xe8fd,	// (0x00084cae) bg_popup_call_pane_cp01

0xe90b,	// (0x00084cbc) call_thumbnail_pane_cp02

0xe982,	// (0x00084d33) call_type_pane_cp022

0xe98a,	// (0x00084d3b) popup_call_audio_out_window_g1_ParamLimits

0xe98a,	// (0x00084d3b) popup_call_audio_out_window_g1

0xe99c,	// (0x00084d4d) popup_call_audio_out_window_g2_ParamLimits

0xe99c,	// (0x00084d4d) popup_call_audio_out_window_g2

0xe9a8,	// (0x00084d59) popup_call_audio_out_window_g3_ParamLimits

0xe9a8,	// (0x00084d59) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0008548e) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0008548e) popup_call_audio_out_window_g

0xe9ba,	// (0x00084d6b) popup_call_audio_out_window_t1_ParamLimits

0xe9ba,	// (0x00084d6b) popup_call_audio_out_window_t1

0xe9d2,	// (0x00084d83) popup_call_audio_out_window_t2_ParamLimits

0xe9d2,	// (0x00084d83) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x00085495) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x00085495) popup_call_audio_out_window_t

0xe9e7,	// (0x00084d98) bg_popup_call_pane_ParamLimits

0xe9e7,	// (0x00084d98) bg_popup_call_pane

0x6af4,	// (0x0007cea5) call_thumbnail_pane_cp_ParamLimits

0x6af4,	// (0x0007cea5) call_thumbnail_pane_cp

0xea6b,	// (0x00084e1c) call_type_pane_cp01_ParamLimits

0xea6b,	// (0x00084e1c) call_type_pane_cp01

0xeaaf,	// (0x00084e60) popup_call_audio_first_window_g1_ParamLimits

0xeaaf,	// (0x00084e60) popup_call_audio_first_window_g1

0xeafb,	// (0x00084eac) popup_call_audio_first_window_g2_ParamLimits

0xeafb,	// (0x00084eac) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0008549a) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0008549a) popup_call_audio_first_window_g

0xeb3f,	// (0x00084ef0) popup_call_audio_first_window_t1_ParamLimits

0xeb3f,	// (0x00084ef0) popup_call_audio_first_window_t1

0xebeb,	// (0x00084f9c) popup_call_audio_first_window_t4_ParamLimits

0xebeb,	// (0x00084f9c) popup_call_audio_first_window_t4

0xec77,	// (0x00085028) popup_call_audio_first_window_t5_ParamLimits

0xec77,	// (0x00085028) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0008549f) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0008549f) popup_call_audio_first_window_t

0xeca6,	// (0x00085057) bg_popup_call_pane_cp02

0xecb0,	// (0x00085061) call_type_pane_cp023

0xecb8,	// (0x00085069) popup_call_audio_wait_window_g1

0xecc0,	// (0x00085071) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000854a6) popup_call_audio_wait_window_g

0xecc8,	// (0x00085079) popup_call_audio_wait_window_t3

0xecd6,	// (0x00085087) bg_popup_call_pane_cp03_ParamLimits

0xecd6,	// (0x00085087) bg_popup_call_pane_cp03

0xed36,	// (0x000850e7) call_thumbnail_pane_cp011_ParamLimits

0xed36,	// (0x000850e7) call_thumbnail_pane_cp011

0xed59,	// (0x0008510a) call_type_pane_cp034_ParamLimits

0xed59,	// (0x0008510a) call_type_pane_cp034

0xed95,	// (0x00085146) popup_call_audio_second_window_g1_ParamLimits

0xed95,	// (0x00085146) popup_call_audio_second_window_g1

0xedd1,	// (0x00085182) popup_call_audio_second_window_g2_ParamLimits

0xedd1,	// (0x00085182) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000854ab) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000854ab) popup_call_audio_second_window_g

0xee0d,	// (0x000851be) popup_call_audio_second_window_t1_ParamLimits

0xee0d,	// (0x000851be) popup_call_audio_second_window_t1

0xee8e,	// (0x0008523f) popup_call_audio_second_window_t2_ParamLimits

0xee8e,	// (0x0008523f) popup_call_audio_second_window_t2

0xeec4,	// (0x00085275) popup_call_audio_second_window_t3_ParamLimits

0xeec4,	// (0x00085275) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000854b0) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000854b0) popup_call_audio_second_window_t

0xeca6,	// (0x00085057) bg_popup_call_pane_cp04

0xeefa,	// (0x000852ab) list_conf_pane

0xef02,	// (0x000852b3) popup_call_audio_conf_window_t1

0xef10,	// (0x000852c1) call_thumbnail_pane_g1

0xef18,	// (0x000852c9) bg_pinb_pane_ParamLimits

0xef18,	// (0x000852c9) bg_pinb_pane

0xef26,	// (0x000852d7) find_pinb_pane

0xef2f,	// (0x000852e0) listscroll_pinb_pane_ParamLimits

0xef2f,	// (0x000852e0) listscroll_pinb_pane

0xef3e,	// (0x000852ef) pinb_bg_pane_g1

0x6b18,	// (0x0007cec9) pinb_bg_pane_g2

0x6b24,	// (0x0007ced5) pinb_bg_pane_g3

0x6b30,	// (0x0007cee1) pinb_bg_pane_g4

0x6b3c,	// (0x0007ceed) pinb_bg_pane_g5

0x6b48,	// (0x0007cef9) pinb_bg_pane_g6

0x6b53,	// (0x0007cf04) pinb_bg_pane_g7

0x6b5e,	// (0x0007cf0f) pinb_bg_pane_g8

0x6b69,	// (0x0007cf1a) pinb_bg_pane_g9

0x6b73,	// (0x0007cf24) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000854b7) pinb_bg_pane_g

0x6b90,	// (0x0007cf41) grid_pinb_pane

0x6b9b,	// (0x0007cf4c) list_pinb_pane

0x6ba6,	// (0x0007cf57) scroll_pane_cp01_ParamLimits

0x6ba6,	// (0x0007cf57) scroll_pane_cp01

0xef48,	// (0x000852f9) find_pinb_pane_g1_ParamLimits

0xef48,	// (0x000852f9) find_pinb_pane_g1

0xef60,	// (0x00085311) find_pinb_pane_t1

0xef72,	// (0x00085323) find_pinb_pane_t2

0x0001,

0xf120,	// (0x000854d1) find_pinb_pane_t

0xef87,	// (0x00085338) input_focus_pane_cp01_ParamLimits

0xef87,	// (0x00085338) input_focus_pane_cp01

0x6bb8,	// (0x0007cf69) cell_pinb_pane_ParamLimits

0x6bb8,	// (0x0007cf69) cell_pinb_pane

0x6be0,	// (0x0007cf91) cell_pinb_pane_g1_ParamLimits

0x6be0,	// (0x0007cf91) cell_pinb_pane_g1

0x6bf5,	// (0x0007cfa6) cell_pinb_pane_g2_ParamLimits

0x6bf5,	// (0x0007cfa6) cell_pinb_pane_g2

0xef93,	// (0x00085344) cell_pinb_pane_g3_ParamLimits

0xef93,	// (0x00085344) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x000854d6) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x000854d6) cell_pinb_pane_g

0xeca6,	// (0x00085057) grid_highlight_pane_cp01

0x6c01,	// (0x0007cfb2) list_pinb_item_pane_ParamLimits

0x6c01,	// (0x0007cfb2) list_pinb_item_pane

0xeca6,	// (0x00085057) list_highlight_pane_cp02

0x6c27,	// (0x0007cfd8) list_pinb_item_pane_g1_ParamLimits

0x6c27,	// (0x0007cfd8) list_pinb_item_pane_g1

0x6c34,	// (0x0007cfe5) list_pinb_item_pane_g2_ParamLimits

0x6c34,	// (0x0007cfe5) list_pinb_item_pane_g2

0x6c40,	// (0x0007cff1) list_pinb_item_pane_g3_ParamLimits

0x6c40,	// (0x0007cff1) list_pinb_item_pane_g3

0x6c51,	// (0x0007d002) list_pinb_item_pane_g4_ParamLimits

0x6c51,	// (0x0007d002) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x000854dd) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x000854dd) list_pinb_item_pane_g

0x6c5d,	// (0x0007d00e) list_pinb_item_pane_t1_ParamLimits

0x6c5d,	// (0x0007d00e) list_pinb_item_pane_t1

0x6c8e,	// (0x0007d03f) calc_display_pane

0x6cac,	// (0x0007d05d) calc_paper_pane

0x6cc8,	// (0x0007d079) grid_calc_pane

0xeca6,	// (0x00085057) bg_list_pane_cp01

0x6cf4,	// (0x0007d0a5) clock_g1

0x6cfc,	// (0x0007d0ad) clock_g2

0x0001,

0xf135,	// (0x000854e6) clock_g

0x6d06,	// (0x0007d0b7) clock_t1_ParamLimits

0x6d06,	// (0x0007d0b7) clock_t1

0x6d1b,	// (0x0007d0cc) clock_t2_ParamLimits

0x6d1b,	// (0x0007d0cc) clock_t2

0x6d2d,	// (0x0007d0de) clock_t3_ParamLimits

0x6d2d,	// (0x0007d0de) clock_t3

0x6d3f,	// (0x0007d0f0) clock_t4_ParamLimits

0x6d3f,	// (0x0007d0f0) clock_t4

0x6d51,	// (0x0007d102) clock_t5_ParamLimits

0x6d51,	// (0x0007d102) clock_t5

0x6d66,	// (0x0007d117) clock_t6_ParamLimits

0x6d66,	// (0x0007d117) clock_t6

0x6d78,	// (0x0007d129) clock_t7_ParamLimits

0x6d78,	// (0x0007d129) clock_t7

0x6d8a,	// (0x0007d13b) clock_t8_ParamLimits

0x6d8a,	// (0x0007d13b) clock_t8

0x6da0,	// (0x0007d151) clock_t9_ParamLimits

0x6da0,	// (0x0007d151) clock_t9

0x0008,

0xf13a,	// (0x000854eb) clock_t_ParamLimits

0xf13a,	// (0x000854eb) clock_t

0xef9f,	// (0x00085350) popup_clock_analogue_window_cp02

0xef9f,	// (0x00085350) popup_clock_digital_window_cp01

0xefa7,	// (0x00085358) listscroll_help_pane

0xeca6,	// (0x00085057) phob_pre_status_pane

0xefb1,	// (0x00085362) grid_qdial_pane

0xef18,	// (0x000852c9) listscroll_mce_pane

0xef18,	// (0x000852c9) bg_notes_pane

0xefbb,	// (0x0008536c) list_notes_pane

0x6db6,	// (0x0007d167) scroll_pane_cp06

0xefc9,	// (0x0008537a) bg_calc_paper_pane

0x6dc5,	// (0x0007d176) list_calc_pane

0xefdd,	// (0x0008538e) bg_calc_display_pane

0x6ddf,	// (0x0007d190) calc_display_pane_t1

0x6df4,	// (0x0007d1a5) calc_display_pane_t2

0x6e09,	// (0x0007d1ba) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000854fe) calc_display_pane_t

0x6e1b,	// (0x0007d1cc) cell_calc_pane_ParamLimits

0x6e1b,	// (0x0007d1cc) cell_calc_pane

0xefe9,	// (0x0008539a) bg_calc_paper_pane_g1

0xeff5,	// (0x000853a6) bg_calc_paper_pane_g2

0xf001,	// (0x000853b2) bg_calc_paper_pane_g3

0xf00d,	// (0x000853be) bg_calc_paper_pane_g4

0xf019,	// (0x000853ca) bg_calc_paper_pane_g5

0x6e48,	// (0x0007d1f9) bg_calc_paper_pane_g6

0x6e59,	// (0x0007d20a) bg_calc_paper_pane_g7

0x6e6a,	// (0x0007d21b) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x00085505) bg_calc_paper_pane_g

0x6e7b,	// (0x0007d22c) calc_bg_paper_pane_g9

0x6e8c,	// (0x0007d23d) list_calc_item_pane_ParamLimits

0x6e8c,	// (0x0007d23d) list_calc_item_pane

0xf025,	// (0x000853d6) list_calc_item_pane_g1

0x6eb8,	// (0x0007d269) list_calc_item_pane_t1_ParamLimits

0x6eb8,	// (0x0007d269) list_calc_item_pane_t1

0x6eca,	// (0x0007d27b) list_calc_item_pane_t2_ParamLimits

0x6eca,	// (0x0007d27b) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x00085516) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x00085516) list_calc_item_pane_t

0xf032,	// (0x000853e3) cell_calc_pane_g1

0xf03c,	// (0x000853ed) grid_highlight_pane_cp02

0x6efa,	// (0x0007d2ab) bg_calc_display_pane_g1

0x6f03,	// (0x0007d2b4) bg_calc_display_pane_g2

0x6f0d,	// (0x0007d2be) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x00085520) bg_calc_display_pane_g

0x6f16,	// (0x0007d2c7) cell_qdial_pane_ParamLimits

0x6f16,	// (0x0007d2c7) cell_qdial_pane

0x6f2a,	// (0x0007d2db) cell_qdial_pane_g1_ParamLimits

0x6f2a,	// (0x0007d2db) cell_qdial_pane_g1

0x6f37,	// (0x0007d2e8) cell_qdial_pane_g2_ParamLimits

0x6f37,	// (0x0007d2e8) cell_qdial_pane_g2

0xf05e,	// (0x0008540f) cell_qdial_pane_g3_ParamLimits

0xf05e,	// (0x0008540f) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x00085527) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x00085527) cell_qdial_pane_g

0x6f55,	// (0x0007d306) cell_qdial_pane_t1_ParamLimits

0x6f55,	// (0x0007d306) cell_qdial_pane_t1

0x6f6d,	// (0x0007d31e) cell_qdial_pane_t2_ParamLimits

0x6f6d,	// (0x0007d31e) cell_qdial_pane_t2

0x6f80,	// (0x0007d331) cell_qdial_pane_t3_ParamLimits

0x6f80,	// (0x0007d331) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x00085530) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x00085530) cell_qdial_pane_t

0xeca6,	// (0x00085057) grid_highlight_pane_cp04

0xf06a,	// (0x0008541b) thumbnail_qdial_pane_ParamLimits

0xf06a,	// (0x0008541b) thumbnail_qdial_pane

0x0029,	// (0x000763da) list_help_pane

0x0032,	// (0x000763e3) scroll_pane_cp02

0x6f93,	// (0x0007d344) help_list_pane_t1_ParamLimits

0x6f93,	// (0x0007d344) help_list_pane_t1

0x6fc6,	// (0x0007d377) bg_notes_pane_g2

0x6fce,	// (0x0007d37f) bg_notes_pane_g3

0x6fd6,	// (0x0007d387) notes_bg_pane_g1

0x6fde,	// (0x0007d38f) notes_bg_pane_g4

0x6fe6,	// (0x0007d397) notes_bg_pane_g5

0x6fee,	// (0x0007d39f) notes_bg_pane_g6

0x6ff6,	// (0x0007d3a7) notes_bg_pane_g7

0x6ffe,	// (0x0007d3af) notes_bg_pane_g8

0x7006,	// (0x0007d3b7) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0008554e) notes_bg_pane_g

0x700e,	// (0x0007d3bf) list_notes_text_pane_ParamLimits

0x700e,	// (0x0007d3bf) list_notes_text_pane

0x003b,	// (0x000763ec) list_notes_text_pane_g1

0x5546,	// (0x0007b8f7) list_notes_text_pane_t1

0x7036,	// (0x0007d3e7) listscroll_cale_week_pane

0x705b,	// (0x0007d40c) bg_cale_heading_pane

0x005e,	// (0x0007640f) bg_cale_pane_cp01

0x707b,	// (0x0007d42c) cale_week_corner_pane

0x7095,	// (0x0007d446) cale_week_day_heading_pane

0x70b5,	// (0x0007d466) cale_week_scroll_pane_g1

0x70d0,	// (0x0007d481) cale_week_scroll_pane_g2

0x70e3,	// (0x0007d494) cale_week_scroll_pane_g3

0x70f6,	// (0x0007d4a7) cale_week_scroll_pane_g4

0x7109,	// (0x0007d4ba) cale_week_scroll_pane_g5

0x711c,	// (0x0007d4cd) cale_week_scroll_pane_g6

0x712f,	// (0x0007d4e0) cale_week_scroll_pane_g7

0x7144,	// (0x0007d4f5) cale_week_scroll_pane_g8

0x7159,	// (0x0007d50a) cale_week_scroll_pane_g9

0x716c,	// (0x0007d51d) cale_week_scroll_pane_g10

0x717f,	// (0x0007d530) cale_week_scroll_pane_g11

0x7192,	// (0x0007d543) cale_week_scroll_pane_g12

0x71a9,	// (0x0007d55a) cale_week_scroll_pane_g13

0x71c4,	// (0x0007d575) cale_week_scroll_pane_g14

0x71df,	// (0x0007d590) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0008555d) cale_week_scroll_pane_g

0x720f,	// (0x0007d5c0) cale_week_time_pane

0x7224,	// (0x0007d5d5) grid_cale_week_pane

0x008d,	// (0x0007643e) scroll_pane_cp08

0x7243,	// (0x0007d5f4) cell_cale_week_pane_ParamLimits

0x7243,	// (0x0007d5f4) cell_cale_week_pane

0x72a5,	// (0x0007d656) cale_week_day_heading_pane_t1

0x72c0,	// (0x0007d671) cale_week_day_heading_pane_t2

0x72db,	// (0x0007d68c) cale_week_day_heading_pane_t3

0x72f6,	// (0x0007d6a7) cale_week_day_heading_pane_t4

0x7311,	// (0x0007d6c2) cale_week_day_heading_pane_t5

0x732c,	// (0x0007d6dd) cale_week_day_heading_pane_t6

0x7347,	// (0x0007d6f8) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0008557e) cale_week_day_heading_pane_t

0x00aa,	// (0x0007645b) bg_cale_side_pane

0x7362,	// (0x0007d713) cale_week_time_pane_t1

0x737c,	// (0x0007d72d) cale_week_time_pane_t2

0x7396,	// (0x0007d747) cale_week_time_pane_t3

0x73b0,	// (0x0007d761) cale_week_time_pane_t4

0x73ca,	// (0x0007d77b) cale_week_time_pane_t5

0x73e4,	// (0x0007d795) cale_week_time_pane_t6

0x7402,	// (0x0007d7b3) cale_week_time_pane_t7

0x7424,	// (0x0007d7d5) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0008558d) cale_week_time_pane_t

0x7448,	// (0x0007d7f9) cell_cale_week_pane_g2

0x746c,	// (0x0007d81d) cell_cale_week_pane_g3_ParamLimits

0x746c,	// (0x0007d81d) cell_cale_week_pane_g3

0x00b8,	// (0x00076469) grid_highlight_pane_cp07

0x00c0,	// (0x00076471) listscroll_gms_pane

0x00ca,	// (0x0007647b) grid_gms_pane

0x00d3,	// (0x00076484) listscroll_gms_pane_g1

0x00db,	// (0x0007648c) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0008559e) listscroll_gms_pane_g

0x7484,	// (0x0007d835) scroll_pane_cp010

0x748f,	// (0x0007d840) cell_gms_pane_ParamLimits

0x748f,	// (0x0007d840) cell_gms_pane

0x74a2,	// (0x0007d853) cell_gms_pane_g1

0x00e3,	// (0x00076494) cell_gms_pane_g2

0x00eb,	// (0x0007649c) cell_gms_pane_g3

0x00f4,	// (0x000764a5) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000855a3) cell_gms_pane_g

0x00fd,	// (0x000764ae) grid_highlight_pane_cp09

0x980e,	// (0x0007fbbf) phob_pre_status_pane_g1

0x9816,	// (0x0007fbc7) phob_pre_status_pane_g2

0x981e,	// (0x0007fbcf) phob_pre_status_pane_g3

0x9826,	// (0x0007fbd7) phob_pre_status_pane_g4

0x0004,

0xf5dd,	// (0x0008598e) phob_pre_status_pane_g

0x9836,	// (0x0007fbe7) phob_pre_status_pane_t1

0x9846,	// (0x0007fbf7) phob_pre_status_pane_t2

0x9856,	// (0x0007fc07) phob_pre_status_pane_t3

0x0002,

0xf5e8,	// (0x00085999) phob_pre_status_pane_t

0x0105,	// (0x000764b6) bg_list_pane_cp05

0x74b2,	// (0x0007d863) grid_vorec_pane

0x74bc,	// (0x0007d86d) vorec_t1

0x74ca,	// (0x0007d87b) vorec_t2

0x74d8,	// (0x0007d889) vorec_t3

0x74e6,	// (0x0007d897) vorec_t4

0xe831,	// (0x00084be2) vorec_t5

0xe83f,	// (0x00084bf0) vorec_t6

0x0004,

0xf1fb,	// (0x000855ac) vorec_t

0xe84d,	// (0x00084bfe) wait_bar_pane_cp01

0x7502,	// (0x0007d8b3) cell_vorec_pane_ParamLimits

0x7502,	// (0x0007d8b3) cell_vorec_pane

0x7515,	// (0x0007d8c6) cell_vorec_pane_g1

0xeca6,	// (0x00085057) grid_highlight_pane_cp05

0x752f,	// (0x0007d8e0) cams_zoom_pane

0x753b,	// (0x0007d8ec) image_vga_pane

0x754a,	// (0x0007d8fb) main_camera_pane_g1

0x7558,	// (0x0007d909) main_camera_pane_g2

0x7564,	// (0x0007d915) main_camera_pane_g3

0x7570,	// (0x0007d921) main_camera_pane_g4

0x757c,	// (0x0007d92d) main_camera_pane_g5

0x7588,	// (0x0007d939) main_camera_pane_g6

0x7594,	// (0x0007d945) main_camera_pane_g7

0x0007,

0xf206,	// (0x000855b7) main_camera_pane_g

0x75a0,	// (0x0007d951) main_camera_pane_t1

0x75b2,	// (0x0007d963) main_camera_pane_t2

0x0001,

0xf217,	// (0x000855c8) main_camera_pane_t

0x75d3,	// (0x0007d984) cams_zoom_pane_cp_ParamLimits

0x75d3,	// (0x0007d984) cams_zoom_pane_cp

0x75f7,	// (0x0007d9a8) image_cif_pane_ParamLimits

0x75f7,	// (0x0007d9a8) image_cif_pane

0x7615,	// (0x0007d9c6) image_subqcif_pane

0x761d,	// (0x0007d9ce) main_video_pane_g1_ParamLimits

0x761d,	// (0x0007d9ce) main_video_pane_g1

0x763d,	// (0x0007d9ee) main_video_pane_g2_ParamLimits

0x763d,	// (0x0007d9ee) main_video_pane_g2

0x766d,	// (0x0007da1e) main_video_pane_g3_ParamLimits

0x766d,	// (0x0007da1e) main_video_pane_g3

0x7696,	// (0x0007da47) main_video_pane_g4_ParamLimits

0x7696,	// (0x0007da47) main_video_pane_g4

0x76bf,	// (0x0007da70) main_video_pane_g5_ParamLimits

0x76bf,	// (0x0007da70) main_video_pane_g5

0x0119,	// (0x000764ca) main_video_pane_g6_ParamLimits

0x0119,	// (0x000764ca) main_video_pane_g6

0x0006,

0xf21c,	// (0x000855cd) main_video_pane_g_ParamLimits

0xf21c,	// (0x000855cd) main_video_pane_g

0x76e1,	// (0x0007da92) main_video_pane_t1_ParamLimits

0x76e1,	// (0x0007da92) main_video_pane_t1

0x0133,	// (0x000764e4) cams_zoom_pane_g1

0x013c,	// (0x000764ed) cams_zoom_pane_g2

0x0145,	// (0x000764f6) cams_zoom_pane_g3

0x014e,	// (0x000764ff) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x000855dc) cams_zoom_pane_g

0x772b,	// (0x0007dadc) grid_cams_pane

0x7739,	// (0x0007daea) linegrid_cams_pane

0x7747,	// (0x0007daf8) cell_cams_pane_ParamLimits

0x7747,	// (0x0007daf8) cell_cams_pane

0x0157,	// (0x00076508) cams_burst_image_pane

0x015f,	// (0x00076510) cell_cams_pane_g1

0xeca6,	// (0x00085057) grid_highlight_pane_cp03

0xf032,	// (0x000853e3) mp_bg_pane_g1

0xeca6,	// (0x00085057) bg_list_pane_cp03

0x1e82,	// (0x00078233) bg_mp_pane

0x1e8a,	// (0x0007823b) grid_mp_pane

0x1e92,	// (0x00078243) media_player_g1

0x1e9a,	// (0x0007824b) media_player_t1

0x1ea8,	// (0x00078259) media_player_t2

0x1eb6,	// (0x00078267) media_player_t3

0x1ec4,	// (0x00078275) media_player_t4

0x1ed2,	// (0x00078283) media_player_t5

0x1ee0,	// (0x00078291) media_player_t6

0x1eee,	// (0x0007829f) media_player_t7

0x0006,

0xf5c7,	// (0x00085978) media_player_t

0x1efc,	// (0x000782ad) wait_bar_pane_cp02

0xf5ac,	// (0x0008595d) main_usb_pane_t

0x9805,	// (0x0007fbb6) cell_mp_pane

0xf032,	// (0x000853e3) cell_mp_pane_g1

0xeca6,	// (0x00085057) grid_highlight_pane_cp06

0x0167,	// (0x00076518) grid_skin_colour_pane

0x016f,	// (0x00076520) list_highlight_pane_cp03

0x7772,	// (0x0007db23) skin_g1

0x0177,	// (0x00076528) skin_t1

0x0186,	// (0x00076537) skin_t2

0x0001,

0xf260,	// (0x00085611) skin_t

0x777c,	// (0x0007db2d) cell_skin_colour_pane_ParamLimits

0x777c,	// (0x0007db2d) cell_skin_colour_pane

0x0194,	// (0x00076545) cell_skin_colour_pane_g1

0x7800,	// (0x0007dbb1) call_video_g1_ParamLimits

0x7800,	// (0x0007dbb1) call_video_g1

0x7810,	// (0x0007dbc1) call_video_g2_ParamLimits

0x7810,	// (0x0007dbc1) call_video_g2

0x0001,

0xf265,	// (0x00085616) call_video_g_ParamLimits

0xf265,	// (0x00085616) call_video_g

0x786a,	// (0x0007dc1b) call_video_uplink_pane_cp1_ParamLimits

0x786a,	// (0x0007dc1b) call_video_uplink_pane_cp1

0x01a6,	// (0x00076557) call_video_uplink_pane_cp2

0x7936,	// (0x0007dce7) video_down_crop_pane_ParamLimits

0x7936,	// (0x0007dce7) video_down_crop_pane

0x7a34,	// (0x0007dde5) video_down_pane_ParamLimits

0x7a34,	// (0x0007dde5) video_down_pane

0x01ae,	// (0x0007655f) video_down_subqcif_pane_ParamLimits

0x01ae,	// (0x0007655f) video_down_subqcif_pane

0x01c6,	// (0x00076577) video_down_subqcif_pane_cp_ParamLimits

0x01c6,	// (0x00076577) video_down_subqcif_pane_cp

0x01ec,	// (0x0007659d) im_reading_pane_ParamLimits

0x01ec,	// (0x0007659d) im_reading_pane

0x7b54,	// (0x0007df05) im_writing_pane_ParamLimits

0x7b54,	// (0x0007df05) im_writing_pane

0x7b72,	// (0x0007df23) im_reading_pane_t1

0x0206,	// (0x000765b7) list_im_pane

0x0217,	// (0x000765c8) scroll_pane_cp07

0x7bc6,	// (0x0007df77) im_writing_pane_t1_ParamLimits

0x7bc6,	// (0x0007df77) im_writing_pane_t1

0x0230,	// (0x000765e1) im_writing_pane_t2_ParamLimits

0x0230,	// (0x000765e1) im_writing_pane_t2

0x0001,

0xf26f,	// (0x00085620) im_writing_pane_t_ParamLimits

0xf26f,	// (0x00085620) im_writing_pane_t

0xeca6,	// (0x00085057) input_focus_pane_cp04

0xeca6,	// (0x00085057) input_focus_pane_cp05

0x7bdb,	// (0x0007df8c) list_im_single_pane_ParamLimits

0x7bdb,	// (0x0007df8c) list_im_single_pane

0x7bff,	// (0x0007dfb0) list_single_im_pane_t1

0x97c9,	// (0x0007fb7a) blid_accuracy_pane

0x97d1,	// (0x0007fb82) blid_compass_pane

0x97db,	// (0x0007fb8c) main_location_t1

0x97e9,	// (0x0007fb9a) main_location_t2

0x97f7,	// (0x0007fba8) main_location_t3

0x0002,

0xf5d6,	// (0x00085987) main_location_t

0xeca6,	// (0x00085057) aid_levels_location

0xf032,	// (0x000853e3) blid_accuracy_pane_g1

0xf032,	// (0x000853e3) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x00085682) blid_accuracy_pane_g

0x0278,	// (0x00076629) wml_content_pane

0x02b6,	// (0x00076667) wml_button_pane_ParamLimits

0x02b6,	// (0x00076667) wml_button_pane

0x7c0e,	// (0x0007dfbf) wml_list_single_large_pane_ParamLimits

0x7c0e,	// (0x0007dfbf) wml_list_single_large_pane

0x7c38,	// (0x0007dfe9) wml_list_single_medium_pane_ParamLimits

0x7c38,	// (0x0007dfe9) wml_list_single_medium_pane

0x7c69,	// (0x0007e01a) wml_list_single_small_pane_ParamLimits

0x7c69,	// (0x0007e01a) wml_list_single_small_pane

0x02ca,	// (0x0007667b) wml_selection_box_pane_ParamLimits

0x02ca,	// (0x0007667b) wml_selection_box_pane

0x02dd,	// (0x0007668e) wml_list_single_pane_t1

0x02ec,	// (0x0007669d) wml_list_single_medium_pane_t1

0x02fb,	// (0x000766ac) wml_list_single_large_pane_t1

0x030a,	// (0x000766bb) input_focus_pane_cp02_ParamLimits

0x030a,	// (0x000766bb) input_focus_pane_cp02

0x031d,	// (0x000766ce) wml_selection_box_pane_g1

0x0326,	// (0x000766d7) wml_selection_box_pane_t1_ParamLimits

0x0326,	// (0x000766d7) wml_selection_box_pane_t1

0xef18,	// (0x000852c9) bg_wml_button_pane_ParamLimits

0xef18,	// (0x000852c9) bg_wml_button_pane

0x033e,	// (0x000766ef) wml_button_pane_g1

0x0346,	// (0x000766f7) wml_button_pane_t1

0x033e,	// (0x000766ef) wml_button_bg_pane_g1

0x0356,	// (0x00076707) wml_button_bg_pane_g2

0x035e,	// (0x0007670f) wml_button_bg_pane_g3

0x0366,	// (0x00076717) wml_button_bg_pane_g4

0x036e,	// (0x0007671f) wml_button_bg_pane_g5

0x0376,	// (0x00076727) wml_button_bg_pane_g6

0x037e,	// (0x0007672f) wml_button_bg_pane_g7

0x0386,	// (0x00076737) wml_button_bg_pane_g8

0x038e,	// (0x0007673f) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x00085625) wml_button_bg_pane_g

0x7ca3,	// (0x0007e054) bg_list_pane_cp02

0x0396,	// (0x00076747) mce_header_pane_ParamLimits

0x0396,	// (0x00076747) mce_header_pane

0x03ac,	// (0x0007675d) mce_icon_pane

0x03ac,	// (0x0007675d) mce_image_pane

0x03b5,	// (0x00076766) mce_text_pane_ParamLimits

0x03b5,	// (0x00076766) mce_text_pane

0x7cad,	// (0x0007e05e) scroll_pane_cp03

0x02ae,	// (0x0007665f) scroll_pane_cp04

0x03c8,	// (0x00076779) scroll_pane_cp05_ParamLimits

0x03c8,	// (0x00076779) scroll_pane_cp05

0x7cb7,	// (0x0007e068) mce_header_field_pane_ParamLimits

0x7cb7,	// (0x0007e068) mce_header_field_pane

0x7cd7,	// (0x0007e088) mce_header_field_pane_2_ParamLimits

0x7cd7,	// (0x0007e088) mce_header_field_pane_2

0x7ced,	// (0x0007e09e) mce_header_field_pane_3

0x7cf5,	// (0x0007e0a6) list_single_mce_message_pane_ParamLimits

0x7cf5,	// (0x0007e0a6) list_single_mce_message_pane

0x7d20,	// (0x0007e0d1) list_single_mce_smart_pane_ParamLimits

0x7d20,	// (0x0007e0d1) list_single_mce_smart_pane

0x03d4,	// (0x00076785) input_focus_pane_cp03

0x03dd,	// (0x0007678e) list_header_data_pane

0x7d56,	// (0x0007e107) mce_header_field_pane_t1

0x7d64,	// (0x0007e115) list_single_mce_header_pane_ParamLimits

0x7d64,	// (0x0007e115) list_single_mce_header_pane

0x03e5,	// (0x00076796) list_single_mce_header_pane_t1

0x03f4,	// (0x000767a5) list_single_mce_message_pane_g1

0x03fc,	// (0x000767ad) list_single_mce_message_pane_t1

0x7db6,	// (0x0007e167) bg_cale_heading_pane_cp01_ParamLimits

0x7db6,	// (0x0007e167) bg_cale_heading_pane_cp01

0x040a,	// (0x000767bb) bg_cale_pane_cp02_ParamLimits

0x040a,	// (0x000767bb) bg_cale_pane_cp02

0x7e04,	// (0x0007e1b5) cale_month_corner_pane

0x7e23,	// (0x0007e1d4) cale_month_day_heading_pane_ParamLimits

0x7e23,	// (0x0007e1d4) cale_month_day_heading_pane

0x7e89,	// (0x0007e23a) cale_month_pane_g1_ParamLimits

0x7e89,	// (0x0007e23a) cale_month_pane_g1

0x7ecc,	// (0x0007e27d) cale_month_pane_g2_ParamLimits

0x7ecc,	// (0x0007e27d) cale_month_pane_g2

0x7f04,	// (0x0007e2b5) cale_month_pane_g3_ParamLimits

0x7f04,	// (0x0007e2b5) cale_month_pane_g3

0x7f50,	// (0x0007e301) cale_month_pane_g4_ParamLimits

0x7f50,	// (0x0007e301) cale_month_pane_g4

0x7f9c,	// (0x0007e34d) cale_month_pane_g5_ParamLimits

0x7f9c,	// (0x0007e34d) cale_month_pane_g5

0x7fe8,	// (0x0007e399) cale_month_pane_g6_ParamLimits

0x7fe8,	// (0x0007e399) cale_month_pane_g6

0x8034,	// (0x0007e3e5) cale_month_pane_g7_ParamLimits

0x8034,	// (0x0007e3e5) cale_month_pane_g7

0x8098,	// (0x0007e449) cale_month_pane_g8_ParamLimits

0x8098,	// (0x0007e449) cale_month_pane_g8

0x80fc,	// (0x0007e4ad) cale_month_pane_g9_ParamLimits

0x80fc,	// (0x0007e4ad) cale_month_pane_g9

0x815a,	// (0x0007e50b) cale_month_pane_g10_ParamLimits

0x815a,	// (0x0007e50b) cale_month_pane_g10

0x81b6,	// (0x0007e567) cale_month_pane_g11_ParamLimits

0x81b6,	// (0x0007e567) cale_month_pane_g11

0x820a,	// (0x0007e5bb) cale_month_pane_g12_ParamLimits

0x820a,	// (0x0007e5bb) cale_month_pane_g12

0x8260,	// (0x0007e611) cale_month_pane_g13_ParamLimits

0x8260,	// (0x0007e611) cale_month_pane_g13

0x000c,

0xf287,	// (0x00085638) cale_month_pane_g_ParamLimits

0xf287,	// (0x00085638) cale_month_pane_g

0x82b6,	// (0x0007e667) cale_month_week_pane

0x82da,	// (0x0007e68b) grid_cale_month_pane_ParamLimits

0x82da,	// (0x0007e68b) grid_cale_month_pane

0x8333,	// (0x0007e6e4) cale_month_day_heading_pane_t1

0x83b9,	// (0x0007e76a) cale_month_day_heading_pane_t2

0x8432,	// (0x0007e7e3) cale_month_day_heading_pane_t3

0x84ab,	// (0x0007e85c) cale_month_day_heading_pane_t4

0x8524,	// (0x0007e8d5) cale_month_day_heading_pane_t5

0x859d,	// (0x0007e94e) cale_month_day_heading_pane_t6

0x8616,	// (0x0007e9c7) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x00085653) cale_month_day_heading_pane_t

0x00aa,	// (0x0007645b) bg_cale_side_pane_cp01

0x86a7,	// (0x0007ea58) cale_month_week_pane_t1

0x86c0,	// (0x0007ea71) cale_month_week_pane_t2

0x86d9,	// (0x0007ea8a) cale_month_week_pane_t3

0x86f2,	// (0x0007eaa3) cale_month_week_pane_t4

0x870b,	// (0x0007eabc) cale_month_week_pane_t5

0x872c,	// (0x0007eadd) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x00085662) cale_month_week_pane_t

0x874d,	// (0x0007eafe) cell_cale_month_pane_ParamLimits

0x874d,	// (0x0007eafe) cell_cale_month_pane

0x886f,	// (0x0007ec20) cell_cale_month_pane_g1

0x887b,	// (0x0007ec2c) cell_cale_month_pane_t1_ParamLimits

0x887b,	// (0x0007ec2c) cell_cale_month_pane_t1

0x00b8,	// (0x00076469) grid_highlight_pane_cp08

0xf032,	// (0x000853e3) main_smil_g1

0x88a7,	// (0x0007ec58) smil_status_pane

0x0449,	// (0x000767fa) smil_text_pane

0x1da2,	// (0x00078153) bg_popup_call3_rect_pane_g8

0x1daa,	// (0x0007815b) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x0008591b) bg_popup_call3_rect_pane_g

0x2010,	// (0x000783c1) smil_status_volume_pane_g1

0x0453,	// (0x00076804) smil_status_pane_t1

0x9bf3,	// (0x0007ffa4) volume_smil_pane

0x046a,	// (0x0007681b) list_smil_text_pane

0x88ba,	// (0x0007ec6b) scroll_pane_cp011

0x88c5,	// (0x0007ec76) smil_text_list_pane_t1_ParamLimits

0x88c5,	// (0x0007ec76) smil_text_list_pane_t1

0x893d,	// (0x0007ecee) aid_volume_smil_ParamLimits

0x893d,	// (0x0007ecee) aid_volume_smil

0xf032,	// (0x000853e3) smil_volume_pane_g1

0xf032,	// (0x000853e3) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x00085682) smil_volume_pane_g

0x7036,	// (0x0007d3e7) listscroll_cale_day_pane

0x0474,	// (0x00076825) bg_cale_pane

0x048c,	// (0x0007683d) list_cale_pane

0x04af,	// (0x00076860) scroll_pane_cp09

0x04c0,	// (0x00076871) cale_bg_pane_g1

0x04c8,	// (0x00076879) cale_bg_pane_g2

0x04d0,	// (0x00076881) cale_bg_pane_g3

0x04d8,	// (0x00076889) cale_bg_pane_g4

0x04e0,	// (0x00076891) cale_bg_pane_g5

0x04e8,	// (0x00076899) cale_bg_pane_g6

0x04f0,	// (0x000768a1) cale_bg_pane_g7

0x04f8,	// (0x000768a9) cale_bg_pane_g8

0x0500,	// (0x000768b1) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x00085687) cale_bg_pane_g

0x8967,	// (0x0007ed18) list_cale_time_pane_ParamLimits

0x8967,	// (0x0007ed18) list_cale_time_pane

0x0508,	// (0x000768b9) list_cale_time_pane_g1_ParamLimits

0x0508,	// (0x000768b9) list_cale_time_pane_g1

0x0514,	// (0x000768c5) list_cale_time_pane_g2_ParamLimits

0x0514,	// (0x000768c5) list_cale_time_pane_g2

0x8989,	// (0x0007ed3a) list_cale_time_pane_g3_ParamLimits

0x8989,	// (0x0007ed3a) list_cale_time_pane_g3

0x8997,	// (0x0007ed48) list_cale_time_pane_g4_ParamLimits

0x8997,	// (0x0007ed48) list_cale_time_pane_g4

0x89a5,	// (0x0007ed56) list_cale_time_pane_g5_ParamLimits

0x89a5,	// (0x0007ed56) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x0008569a) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x0008569a) list_cale_time_pane_g

0x052e,	// (0x000768df) list_cale_time_pane_t1_ParamLimits

0x052e,	// (0x000768df) list_cale_time_pane_t1

0x0556,	// (0x00076907) list_cale_time_pane_t2_ParamLimits

0x0556,	// (0x00076907) list_cale_time_pane_t2

0x8c6c,	// (0x0007f01d) aid_blid_cardinal_pane

0x8cae,	// (0x0007f05f) compass_pane_t4

0x057e,	// (0x0007692f) list_cale_time_pane_t4_ParamLimits

0x057e,	// (0x0007692f) list_cale_time_pane_t4

0x8cbc,	// (0x0007f06d) compass_pane_t5

0x8ccc,	// (0x0007f07d) compass_pane_t6

0x8cda,	// (0x0007f08b) compass_pane_t7

0x0a2d,	// (0x00076dde) navi_pane_cc_t1

0x0c0a,	// (0x00076fbb) aid_phob_thumbnail_center_pane

0x92cf,	// (0x0007f680) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x000856a7) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x000856a7) list_cale_time_pane_t

0xe8fd,	// (0x00084cae) bg_popup_window_pane_cp02_ParamLimits

0xe8fd,	// (0x00084cae) bg_popup_window_pane_cp02

0x05a6,	// (0x00076957) heading_pane_cp01_ParamLimits

0x05a6,	// (0x00076957) heading_pane_cp01

0x05b2,	// (0x00076963) loc_req_pane_ParamLimits

0x05b2,	// (0x00076963) loc_req_pane

0x05c2,	// (0x00076973) loc_type_pane_ParamLimits

0x05c2,	// (0x00076973) loc_type_pane

0x05d4,	// (0x00076985) loc_type_pane_t1_ParamLimits

0x05d4,	// (0x00076985) loc_type_pane_t1

0x05e6,	// (0x00076997) loc_type_pane_t2_ParamLimits

0x05e6,	// (0x00076997) loc_type_pane_t2

0x05f8,	// (0x000769a9) loc_type_pane_t3_ParamLimits

0x05f8,	// (0x000769a9) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x000856ae) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x000856ae) loc_type_pane_t

0x060a,	// (0x000769bb) list_loc_req_pane

0x0614,	// (0x000769c5) scroll_pane_cp012

0x89b3,	// (0x0007ed64) list_single_loc_request_popup_menu_pane_ParamLimits

0x89b3,	// (0x0007ed64) list_single_loc_request_popup_menu_pane

0x061f,	// (0x000769d0) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x061f,	// (0x000769d0) list_single_loc_request_popup_menu_pane_g1

0x062b,	// (0x000769dc) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x062b,	// (0x000769dc) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x000856b5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x000856b5) list_single_loc_request_popup_menu_pane_g

0x0637,	// (0x000769e8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0637,	// (0x000769e8) list_single_loc_request_popup_menu_pane_t1

0x89c5,	// (0x0007ed76) bg_popup_window_pane_cp03_ParamLimits

0x89c5,	// (0x0007ed76) bg_popup_window_pane_cp03

0x89d3,	// (0x0007ed84) heading_loc_req_pane_ParamLimits

0x89d3,	// (0x0007ed84) heading_loc_req_pane

0x89df,	// (0x0007ed90) popup_dyc_status_message_window_g1_ParamLimits

0x89df,	// (0x0007ed90) popup_dyc_status_message_window_g1

0x89eb,	// (0x0007ed9c) popup_dyc_status_message_window_t1_ParamLimits

0x89eb,	// (0x0007ed9c) popup_dyc_status_message_window_t1

0x89fd,	// (0x0007edae) popup_dyc_status_message_window_t2_ParamLimits

0x89fd,	// (0x0007edae) popup_dyc_status_message_window_t2

0x8a0f,	// (0x0007edc0) popup_dyc_status_message_window_t3_ParamLimits

0x8a0f,	// (0x0007edc0) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x000856ba) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x000856ba) popup_dyc_status_message_window_t

0xeca6,	// (0x00085057) bg_heading_pane_cp01

0x0659,	// (0x00076a0a) heading_loc_req_pane_g1

0x0661,	// (0x00076a12) heading_loc_req_pane_g2

0x0669,	// (0x00076a1a) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x000856c1) heading_loc_req_pane_g

0x0671,	// (0x00076a22) heading_loc_req_pane_t1

0x0680,	// (0x00076a31) bg_popup_sub_pane_cp01_ParamLimits

0x0680,	// (0x00076a31) bg_popup_sub_pane_cp01

0x068e,	// (0x00076a3f) popup_cale_events_window_g1_ParamLimits

0x068e,	// (0x00076a3f) popup_cale_events_window_g1

0x06ae,	// (0x00076a5f) popup_cale_events_window_g2_ParamLimits

0x06ae,	// (0x00076a5f) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x000856f5) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x000856f5) popup_cale_events_window_g

0x06ce,	// (0x00076a7f) popup_cale_events_window_t1_ParamLimits

0x06ce,	// (0x00076a7f) popup_cale_events_window_t1

0x06e0,	// (0x00076a91) popup_cale_events_window_t2_ParamLimits

0x06e0,	// (0x00076a91) popup_cale_events_window_t2

0x071e,	// (0x00076acf) popup_cale_events_window_t3_ParamLimits

0x071e,	// (0x00076acf) popup_cale_events_window_t3

0x0758,	// (0x00076b09) popup_cale_events_window_t4_ParamLimits

0x0758,	// (0x00076b09) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x000856fa) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x000856fa) popup_cale_events_window_t

0x8a39,	// (0x0007edea) call_type_pane

0x0c22,	// (0x00076fd3) popup_call_status_window_g1

0x8a45,	// (0x0007edf6) popup_call_status_window_g2

0x8a51,	// (0x0007ee02) popup_call_status_window_g3

0x0002,

0xf352,	// (0x00085703) popup_call_status_window_g

0x078e,	// (0x00076b3f) call_type_pane_g1

0x0797,	// (0x00076b48) call_type_pane_g2

0x0001,

0xf359,	// (0x0008570a) call_type_pane_g

0xeca6,	// (0x00085057) bg_popup_sub_pane_cp02

0x07a0,	// (0x00076b51) listscroll_popup_wml_pane

0x07a8,	// (0x00076b59) list_wml_pane

0x07b2,	// (0x00076b63) scroll_pane_cp013

0x07bd,	// (0x00076b6e) list_single_graphic_popup_wml_pane_ParamLimits

0x07bd,	// (0x00076b6e) list_single_graphic_popup_wml_pane

0xf032,	// (0x000853e3) list_single_graphic_popup_wml_pane_g1

0x07d1,	// (0x00076b82) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x0008570f) list_single_graphic_popup_wml_pane_g

0x07d9,	// (0x00076b8a) list_single_graphic_popup_wml_pane_t1

0x07e7,	// (0x00076b98) aid_call_pane

0xef10,	// (0x000852c1) popup_clock_analogue_window_g1

0xef10,	// (0x000852c1) popup_clock_analogue_window_g2

0x8a5d,	// (0x0007ee0e) popup_clock_analogue_window_g3

0x8a5d,	// (0x0007ee0e) popup_clock_analogue_window_g4

0xf032,	// (0x000853e3) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x00085714) popup_clock_analogue_window_g

0x8a65,	// (0x0007ee16) popup_clock_analogue_window_t1

0x8a73,	// (0x0007ee24) clock_digital_number_pane_ParamLimits

0x8a73,	// (0x0007ee24) clock_digital_number_pane

0x8a7f,	// (0x0007ee30) clock_digital_number_pane_cp02_ParamLimits

0x8a7f,	// (0x0007ee30) clock_digital_number_pane_cp02

0x8a8b,	// (0x0007ee3c) clock_digital_number_pane_cp03_ParamLimits

0x8a8b,	// (0x0007ee3c) clock_digital_number_pane_cp03

0x8a97,	// (0x0007ee48) clock_digital_number_pane_cp04_ParamLimits

0x8a97,	// (0x0007ee48) clock_digital_number_pane_cp04

0x8aa7,	// (0x0007ee58) clock_digital_separator_pane_ParamLimits

0x8aa7,	// (0x0007ee58) clock_digital_separator_pane

0x8ab3,	// (0x0007ee64) popup_clock_digital_window_t1

0xf032,	// (0x000853e3) clock_digital_number_pane_g1

0xf032,	// (0x000853e3) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x00085682) clock_digital_number_pane_g

0xf032,	// (0x000853e3) clock_digital_separator_pane_g1

0xf032,	// (0x000853e3) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x00085682) clock_digital_separator_pane_g

0xeca6,	// (0x00085057) bg_popup_window_pane_cp04

0x07f7,	// (0x00076ba8) heading_pane_cp03

0x07ff,	// (0x00076bb0) listscroll_popup_gms_pane

0x0807,	// (0x00076bb8) grid_large_graphic_popup_pane

0x0811,	// (0x00076bc2) listscroll_popup_gms_pane_g1

0x0819,	// (0x00076bca) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x0008571f) listscroll_popup_gms_pane_g

0x02ae,	// (0x0007665f) scroll_pane_cp014

0x8ad0,	// (0x0007ee81) cell_large_graphic_popup_pane_ParamLimits

0x8ad0,	// (0x0007ee81) cell_large_graphic_popup_pane

0x8ae8,	// (0x0007ee99) cell_large_graphic_popup_pane_g1_ParamLimits

0x8ae8,	// (0x0007ee99) cell_large_graphic_popup_pane_g1

0x0821,	// (0x00076bd2) cell_large_graphic_popup_pane_g2_ParamLimits

0x0821,	// (0x00076bd2) cell_large_graphic_popup_pane_g2

0x082d,	// (0x00076bde) cell_large_graphic_popup_pane_g3_ParamLimits

0x082d,	// (0x00076bde) cell_large_graphic_popup_pane_g3

0x083a,	// (0x00076beb) cell_large_graphic_popup_pane_g4_ParamLimits

0x083a,	// (0x00076beb) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x00085724) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x00085724) cell_large_graphic_popup_pane_g

0x084a,	// (0x00076bfb) grid_highlight_pane_cp010

0xf032,	// (0x000853e3) bg_popup_call_pane_g1

0x0854,	// (0x00076c05) list_single_graphic_popup_conf_pane_ParamLimits

0x0854,	// (0x00076c05) list_single_graphic_popup_conf_pane

0x0867,	// (0x00076c18) list_highlight_pane_cp01

0x0870,	// (0x00076c21) list_single_graphic_popup_conf_pane_g1

0x0878,	// (0x00076c29) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x0008572d) list_single_graphic_popup_conf_pane_g

0x0880,	// (0x00076c31) list_single_graphic_popup_conf_pane_t1

0x088e,	// (0x00076c3f) linegrid_cams_pane_g1

0x8af4,	// (0x0007eea5) linegrid_cams_pane_g2

0x00eb,	// (0x0007649c) linegrid_cams_pane_g3

0x0897,	// (0x00076c48) linegrid_cams_pane_g4

0x8afd,	// (0x0007eeae) linegrid_cams_pane_g5

0x8b06,	// (0x0007eeb7) linegrid_cams_pane_g6

0x00f4,	// (0x000764a5) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x00085732) linegrid_cams_pane_g

0x08a0,	// (0x00076c51) popup_clock_analogue_window

0x08a0,	// (0x00076c51) popup_clock_digital_window

0xeca6,	// (0x00085057) popup_phob_thumbnail_window

0xf032,	// (0x000853e3) call_video_uplink_pane_g1

0x08a9,	// (0x00076c5a) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x00085741) call_video_uplink_pane_g

0x08b1,	// (0x00076c62) video_uplink_pane

0x08b9,	// (0x00076c6a) mce_image_pane_g1

0x8b0f,	// (0x0007eec0) mce_image_pane_g2

0x8b19,	// (0x0007eeca) mce_image_pane_g3

0x8b21,	// (0x0007eed2) mce_image_pane_g4

0x8b29,	// (0x0007eeda) mce_image_pane_g5

0x0004,

0xf395,	// (0x00085746) mce_image_pane_g

0x08c3,	// (0x00076c74) control_top_pane_stacon_cp01_ParamLimits

0x08c3,	// (0x00076c74) control_top_pane_stacon_cp01

0x08d7,	// (0x00076c88) uni_indicator_pane_stacon_cp01_ParamLimits

0x08d7,	// (0x00076c88) uni_indicator_pane_stacon_cp01

0x08e8,	// (0x00076c99) bg_popup_sub_pane_cp03

0x08f2,	// (0x00076ca3) chi_dic_find_pane

0x8b31,	// (0x0007eee2) listscroll_chi_dic_pane

0x08fa,	// (0x00076cab) main_pane_chidic_g1

0x0902,	// (0x00076cb3) chi_dic_find_pane_t1

0x0910,	// (0x00076cc1) find_chidic_pane

0x0919,	// (0x00076cca) chi_dic_list_pane_ParamLimits

0x0919,	// (0x00076cca) chi_dic_list_pane

0x092a,	// (0x00076cdb) scroll_pane_cp020

0x0932,	// (0x00076ce3) find_chidic_pane_t1

0xeca6,	// (0x00085057) input_focus_pane_cp06

0x8b45,	// (0x0007eef6) list_chi_dic_pane_ParamLimits

0x8b45,	// (0x0007eef6) list_chi_dic_pane

0x8b5f,	// (0x0007ef10) list_chi_dic_pane_t1_ParamLimits

0x8b5f,	// (0x0007ef10) list_chi_dic_pane_t1

0xeca6,	// (0x00085057) list_highlight_pane_cp020

0x0941,	// (0x00076cf2) bg_cale_heading_pane_g1

0x8b72,	// (0x0007ef23) bg_cale_heading_pane_g2

0x8b7a,	// (0x0007ef2b) bg_cale_heading_pane_g3

0x8b82,	// (0x0007ef33) bg_cale_heading_pane_g4

0x8b8c,	// (0x0007ef3d) bg_cale_heading_pane_g5

0x8b96,	// (0x0007ef47) bg_cale_heading_pane_g6

0x8b9e,	// (0x0007ef4f) bg_cale_heading_pane_g7

0x8ba6,	// (0x0007ef57) bg_cale_heading_pane_g8

0x8bb0,	// (0x0007ef61) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x00085751) bg_cale_heading_pane_g

0x0941,	// (0x00076cf2) bg_cale_side_pane_g1

0x8bba,	// (0x0007ef6b) bg_cale_side_pane_g2

0x8bc4,	// (0x0007ef75) bg_cale_side_pane_g3

0x8bce,	// (0x0007ef7f) bg_cale_side_pane_g4

0x8bd8,	// (0x0007ef89) bg_cale_side_pane_g5

0x8be2,	// (0x0007ef93) bg_cale_side_pane_g6

0x8bec,	// (0x0007ef9d) bg_cale_side_pane_g7

0x8bf6,	// (0x0007efa7) bg_cale_side_pane_g8

0x8bfe,	// (0x0007efaf) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x00085764) bg_cale_side_pane_g

0x8c06,	// (0x0007efb7) popup_call_status_window_ParamLimits

0x8c06,	// (0x0007efb7) popup_call_status_window

0x0949,	// (0x00076cfa) stacon_top_pane

0x0951,	// (0x00076d02) status_pane_ParamLimits

0x0951,	// (0x00076d02) status_pane

0x0966,	// (0x00076d17) status_small_pane

0x096e,	// (0x00076d1f) control_pane

0xeca6,	// (0x00085057) stacon_bottom_pane

0x0976,	// (0x00076d27) list_single_mce_smart_pane_t1_ParamLimits

0x0976,	// (0x00076d27) list_single_mce_smart_pane_t1

0x0989,	// (0x00076d3a) list_single_mce_smart_pane_t2_ParamLimits

0x0989,	// (0x00076d3a) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x00085777) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x00085777) list_single_mce_smart_pane_t

0x8c12,	// (0x0007efc3) compass_pane

0x8c1e,	// (0x0007efcf) main_location2_pane_t1

0x8c32,	// (0x0007efe3) main_location2_pane_t2

0x8c46,	// (0x0007eff7) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x0008577c) main_location2_pane_t

0x09a8,	// (0x00076d59) compass_pane_g1_ParamLimits

0x09a8,	// (0x00076d59) compass_pane_g1

0x8c90,	// (0x0007f041) compass_pane_t1

0x8c9f,	// (0x0007f050) compass_pane_t2

0x0005,

0xf3d4,	// (0x00085785) compass_pane_t

0x8cea,	// (0x0007f09b) text_secondary_cp61

0x0a24,	// (0x00076dd5) navi_pane_cams_g5

0x0aa0,	// (0x00076e51) navi_pane_im_t1

0x0aae,	// (0x00076e5f) navi_pane_mp_g1_ParamLimits

0x0aae,	// (0x00076e5f) navi_pane_mp_g1

0x0ac2,	// (0x00076e73) navi_pane_mp_g2_ParamLimits

0x0ac2,	// (0x00076e73) navi_pane_mp_g2

0x0ace,	// (0x00076e7f) navi_pane_mp_g3_ParamLimits

0x0ace,	// (0x00076e7f) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x00085799) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x00085799) navi_pane_mp_g

0x0ada,	// (0x00076e8b) navi_pane_mp_t1

0x0ae8,	// (0x00076e99) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x000857a0) navi_pane_mp_t

0x0b53,	// (0x00076f04) navi_pane_vt_g1

0x0ada,	// (0x00076e8b) navi_pane_vt_t1

0x0b5b,	// (0x00076f0c) navi_slider_pane

0x0105,	// (0x000764b6) zooming_pane

0x0b6b,	// (0x00076f1c) navi_slider_pane_g1

0x8d25,	// (0x0007f0d6) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x000857a7) navi_slider_pane_g

0x0b8f,	// (0x00076f40) aid_levels_zoom

0x0b97,	// (0x00076f48) zooming_pane_g1

0x0b9f,	// (0x00076f50) zooming_pane_g2

0x0b9f,	// (0x00076f50) zooming_pane_g3

0x0002,

0xf405,	// (0x000857b6) zooming_pane_g

0x0ba7,	// (0x00076f58) level_10_zoom

0x0bb0,	// (0x00076f61) level_11_zoom

0x0bb9,	// (0x00076f6a) level_1_zoom

0x0bc2,	// (0x00076f73) level_2_zoom

0x0bcb,	// (0x00076f7c) level_3_zoom

0x0bd4,	// (0x00076f85) level_4_zoom

0x0bdd,	// (0x00076f8e) level_5_zoom

0x0be6,	// (0x00076f97) level_6_zoom

0x0bef,	// (0x00076fa0) level_7_zoom

0x0bf8,	// (0x00076fa9) level_8_zoom

0x0c01,	// (0x00076fb2) level_9_zoom

0x0c12,	// (0x00076fc3) popup_phob_thumbnail_window_g1

0x0c1a,	// (0x00076fcb) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x000857bd) popup_phob_thumbnail_window_g

0x1f04,	// (0x000782b5) level_1_location

0x1f0c,	// (0x000782bd) level_2_location

0x1f14,	// (0x000782c5) level_3_location

0x1f1c,	// (0x000782cd) level_4_location

0x0105,	// (0x000764b6) level_5_location

0x8d37,	// (0x0007f0e8) mce_icon_pane_g1

0x8d3f,	// (0x0007f0f0) mce_icon_pane_g2

0x0001,

0xf411,	// (0x000857c2) mce_icon_pane_g

0x8d47,	// (0x0007f0f8) main_mup_pane_g1_ParamLimits

0x8d47,	// (0x0007f0f8) main_mup_pane_g1

0x8d5f,	// (0x0007f110) main_mup_pane_g2_ParamLimits

0x8d5f,	// (0x0007f110) main_mup_pane_g2

0x8d7b,	// (0x0007f12c) main_mup_pane_g3_ParamLimits

0x8d7b,	// (0x0007f12c) main_mup_pane_g3

0x8d97,	// (0x0007f148) main_mup_pane_g4_ParamLimits

0x8d97,	// (0x0007f148) main_mup_pane_g4

0x8db3,	// (0x0007f164) main_mup_pane_g5_ParamLimits

0x8db3,	// (0x0007f164) main_mup_pane_g5

0x8dd4,	// (0x0007f185) main_mup_pane_g6_ParamLimits

0x8dd4,	// (0x0007f185) main_mup_pane_g6

0x8df0,	// (0x0007f1a1) main_mup_pane_g7_ParamLimits

0x8df0,	// (0x0007f1a1) main_mup_pane_g7

0x8e0c,	// (0x0007f1bd) main_mup_pane_g8_ParamLimits

0x8e0c,	// (0x0007f1bd) main_mup_pane_g8

0x8e2c,	// (0x0007f1dd) main_mup_pane_g9_ParamLimits

0x8e2c,	// (0x0007f1dd) main_mup_pane_g9

0x8e4b,	// (0x0007f1fc) main_mup_pane_g10_ParamLimits

0x8e4b,	// (0x0007f1fc) main_mup_pane_g10

0x8e6a,	// (0x0007f21b) main_mup_pane_g11_ParamLimits

0x8e6a,	// (0x0007f21b) main_mup_pane_g11

0x8e82,	// (0x0007f233) main_mup_pane_g12_ParamLimits

0x8e82,	// (0x0007f233) main_mup_pane_g12

0x8e90,	// (0x0007f241) main_mup_pane_g13_ParamLimits

0x8e90,	// (0x0007f241) main_mup_pane_g13

0x000c,

0xf416,	// (0x000857c7) main_mup_pane_g_ParamLimits

0xf416,	// (0x000857c7) main_mup_pane_g

0x8ea6,	// (0x0007f257) main_mup_pane_t1_ParamLimits

0x8ea6,	// (0x0007f257) main_mup_pane_t1

0x8ec3,	// (0x0007f274) main_mup_pane_t2_ParamLimits

0x8ec3,	// (0x0007f274) main_mup_pane_t2

0x8edd,	// (0x0007f28e) main_mup_pane_t3_ParamLimits

0x8edd,	// (0x0007f28e) main_mup_pane_t3

0x8ef7,	// (0x0007f2a8) main_mup_pane_t4_ParamLimits

0x8ef7,	// (0x0007f2a8) main_mup_pane_t4

0x8f09,	// (0x0007f2ba) main_mup_pane_t5_ParamLimits

0x8f09,	// (0x0007f2ba) main_mup_pane_t5

0x8f1b,	// (0x0007f2cc) main_mup_pane_t6_ParamLimits

0x8f1b,	// (0x0007f2cc) main_mup_pane_t6

0x0005,

0xf431,	// (0x000857e2) main_mup_pane_t_ParamLimits

0xf431,	// (0x000857e2) main_mup_pane_t

0x8f31,	// (0x0007f2e2) mup_progress_pane_ParamLimits

0x8f31,	// (0x0007f2e2) mup_progress_pane

0x8f3d,	// (0x0007f2ee) mup_visualizer_pane_ParamLimits

0x8f3d,	// (0x0007f2ee) mup_visualizer_pane

0x8f77,	// (0x0007f328) mup_volume_pane_ParamLimits

0x8f77,	// (0x0007f328) mup_volume_pane

0x0c22,	// (0x00076fd3) mup_visualizer_pane_g1_ParamLimits

0x0c22,	// (0x00076fd3) mup_visualizer_pane_g1

0x0c22,	// (0x00076fd3) mup_visualizer_pane_g2_ParamLimits

0x0c22,	// (0x00076fd3) mup_visualizer_pane_g2

0x09a8,	// (0x00076d59) mup_visualizer_pane_g3_ParamLimits

0x09a8,	// (0x00076d59) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x000857ef) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x000857ef) mup_visualizer_pane_g

0xf032,	// (0x000853e3) mup_volume_pane_g1

0x0c38,	// (0x00076fe9) mup_volume_pane_g2

0x0001,

0xf445,	// (0x000857f6) mup_volume_pane_g

0xf032,	// (0x000853e3) mup_progress_pane_g1

0x0c41,	// (0x00076ff2) mup_progress_pane_g2

0x0c4a,	// (0x00076ffb) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x000857fb) mup_progress_pane_g

0xeca6,	// (0x00085057) bg_popup_window_pane_cp05

0x0c53,	// (0x00077004) heading_pane_cp02_ParamLimits

0x0c53,	// (0x00077004) heading_pane_cp02

0x0c6d,	// (0x0007701e) list_popup_blid_pane

0x0c75,	// (0x00077026) list_blid_sat_info_pane_ParamLimits

0x0c75,	// (0x00077026) list_blid_sat_info_pane

0x0c88,	// (0x00077039) list_blid_sat_info_pane_g1

0x0c90,	// (0x00077041) list_blid_sat_info_pane_t1

0x9084,	// (0x0007f435) mup_equalizer_pane_ParamLimits

0x9084,	// (0x0007f435) mup_equalizer_pane

0x90a5,	// (0x0007f456) mup_equalizer_pane_cp1_ParamLimits

0x90a5,	// (0x0007f456) mup_equalizer_pane_cp1

0x90c6,	// (0x0007f477) mup_equalizer_pane_cp2_ParamLimits

0x90c6,	// (0x0007f477) mup_equalizer_pane_cp2

0x90e7,	// (0x0007f498) mup_equalizer_pane_cp3_ParamLimits

0x90e7,	// (0x0007f498) mup_equalizer_pane_cp3

0x9108,	// (0x0007f4b9) mup_equalizer_pane_cp4_ParamLimits

0x9108,	// (0x0007f4b9) mup_equalizer_pane_cp4

0x9129,	// (0x0007f4da) mup_equalizer_pane_cp5

0x913f,	// (0x0007f4f0) mup_equalizer_pane_cp6

0x9157,	// (0x0007f508) mup_equalizer_pane_cp7

0x1e22,	// (0x000781d3) bg_popup_call_poc_act_pane_g9

0x1e2a,	// (0x000781db) bg_popup_call_poc_act_pane_g10

0x1e32,	// (0x000781e3) bg_popup_call_poc_act_pane_g11

0x000a,

0xef18,	// (0x000852c9) mup_scale_pane

0xf032,	// (0x000853e3) mup_scale_pane_g1

0x0c9e,	// (0x0007704f) mup_scale_pane_g2

0x0006,

0xf466,	// (0x00085817) mup_scale_pane_g

0x0cc2,	// (0x00077073) msg_data_pane

0x0cca,	// (0x0007707b) scroll_pane_cp017

0x5738,	// (0x0007bae9) bg_list_pane_cp04_ParamLimits

0x5738,	// (0x0007bae9) bg_list_pane_cp04

0x0cd2,	// (0x00077083) msg_data_pane_g1

0x9181,	// (0x0007f532) msg_data_pane_g2

0x918b,	// (0x0007f53c) msg_data_pane_g3

0x9193,	// (0x0007f544) msg_data_pane_g4

0x919b,	// (0x0007f54c) msg_data_pane_g5

0x91a3,	// (0x0007f554) msg_data_pane_g6

0x91ab,	// (0x0007f55c) msg_data_pane_g7

0x0006,

0xf475,	// (0x00085826) msg_data_pane_g

0x575e,	// (0x0007bb0f) msg_text_pane_ParamLimits

0x575e,	// (0x0007bb0f) msg_text_pane

0x91b3,	// (0x0007f564) qrid_highlight_pane_cp011_ParamLimits

0x91b3,	// (0x0007f564) qrid_highlight_pane_cp011

0xeca6,	// (0x00085057) msg_body_pane

0xeca6,	// (0x00085057) msg_header_pane

0x0ce3,	// (0x00077094) input_focus_pane_cp07

0x57b1,	// (0x0007bb62) msg_header_pane_t1_ParamLimits

0x57b1,	// (0x0007bb62) msg_header_pane_t1

0x57c3,	// (0x0007bb74) msg_header_pane_t2_ParamLimits

0x57c3,	// (0x0007bb74) msg_header_pane_t2

0x0001,

0xf489,	// (0x0008583a) msg_header_pane_t_ParamLimits

0xf489,	// (0x0008583a) msg_header_pane_t

0x0cf8,	// (0x000770a9) msg_body_pane_g1

0x57d5,	// (0x0007bb86) msg_body_pane_t1_ParamLimits

0x57d5,	// (0x0007bb86) msg_body_pane_t1

0x5806,	// (0x0007bbb7) msg_body_pane_t2_ParamLimits

0x5806,	// (0x0007bbb7) msg_body_pane_t2

0x5818,	// (0x0007bbc9) msg_body_pane_t3_ParamLimits

0x5818,	// (0x0007bbc9) msg_body_pane_t3

0x0002,

0xf48e,	// (0x0008583f) msg_body_pane_t_ParamLimits

0xf48e,	// (0x0008583f) msg_body_pane_t

0x921f,	// (0x0007f5d0) main_viewer_pane_g1_ParamLimits

0x921f,	// (0x0007f5d0) main_viewer_pane_g1

0x922b,	// (0x0007f5dc) main_viewer_pane_g2_ParamLimits

0x922b,	// (0x0007f5dc) main_viewer_pane_g2

0x9237,	// (0x0007f5e8) main_viewer_pane_g3_ParamLimits

0x9237,	// (0x0007f5e8) main_viewer_pane_g3

0x9248,	// (0x0007f5f9) main_viewer_pane_g4_ParamLimits

0x9248,	// (0x0007f5f9) main_viewer_pane_g4

0x9259,	// (0x0007f60a) main_viewer_pane_g5_ParamLimits

0x9259,	// (0x0007f60a) main_viewer_pane_g5

0x9259,	// (0x0007f60a) main_viewer_pane_g7_ParamLimits

0x9259,	// (0x0007f60a) main_viewer_pane_g7

0x926b,	// (0x0007f61c) main_viewer_pane_g8_ParamLimits

0x926b,	// (0x0007f61c) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x0008584f) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0008584f) main_viewer_pane_g

0x0d00,	// (0x000770b1) viewer_content_pane_ParamLimits

0x0d00,	// (0x000770b1) viewer_content_pane

0x92a3,	// (0x0007f654) main_postcard_pane_g1_ParamLimits

0x92a3,	// (0x0007f654) main_postcard_pane_g1

0x92b1,	// (0x0007f662) main_postcard_pane_g2_ParamLimits

0x92b1,	// (0x0007f662) main_postcard_pane_g2

0x92bf,	// (0x0007f670) main_postcard_pane_g3_ParamLimits

0x92bf,	// (0x0007f670) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x00085860) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x00085860) main_postcard_pane_g

0x92cf,	// (0x0007f680) main_postcard_pane_g4

0x1ff1,	// (0x000783a2) smil_status_volume_pane_g2

0x92fb,	// (0x0007f6ac) postcard_pane_ParamLimits

0x92fb,	// (0x0007f6ac) postcard_pane

0x0c22,	// (0x00076fd3) postcard_pane_g1_ParamLimits

0x0c22,	// (0x00076fd3) postcard_pane_g1

0x932d,	// (0x0007f6de) postcard_pane_g2_ParamLimits

0x932d,	// (0x0007f6de) postcard_pane_g2

0x9339,	// (0x0007f6ea) postcard_pane_g3_ParamLimits

0x9339,	// (0x0007f6ea) postcard_pane_g3

0x0d1c,	// (0x000770cd) postcard_pane_g4_ParamLimits

0x0d1c,	// (0x000770cd) postcard_pane_g4

0x9345,	// (0x0007f6f6) postcard_pane_g5_ParamLimits

0x9345,	// (0x0007f6f6) postcard_pane_g5

0x9351,	// (0x0007f702) postcard_pane_g6_ParamLimits

0x9351,	// (0x0007f702) postcard_pane_g6

0x0d0e,	// (0x000770bf) postcard_pane_g7_ParamLimits

0x0d0e,	// (0x000770bf) postcard_pane_g7

0x0006,

0xf4bc,	// (0x0008586d) postcard_pane_g_ParamLimits

0xf4bc,	// (0x0008586d) postcard_pane_g

0x935d,	// (0x0007f70e) main_mp2_pane_g1_ParamLimits

0x935d,	// (0x0007f70e) main_mp2_pane_g1

0x9369,	// (0x0007f71a) main_mp2_pane_g2_ParamLimits

0x9369,	// (0x0007f71a) main_mp2_pane_g2

0x9375,	// (0x0007f726) main_mp2_pane_g3_ParamLimits

0x9375,	// (0x0007f726) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x0008587c) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x0008587c) main_mp2_pane_g

0x9381,	// (0x0007f732) main_mp2_pane_t1_ParamLimits

0x9381,	// (0x0007f732) main_mp2_pane_t1

0x9398,	// (0x0007f749) main_mp2_pane_t2_ParamLimits

0x9398,	// (0x0007f749) main_mp2_pane_t2

0x93ac,	// (0x0007f75d) main_mp2_pane_t3_ParamLimits

0x93ac,	// (0x0007f75d) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x00085883) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x00085883) main_mp2_pane_t

0x0d2a,	// (0x000770db) pec_content_pane_ParamLimits

0x0d2a,	// (0x000770db) pec_content_pane

0x02ae,	// (0x0007665f) scroll_pane_cp015

0x0d3c,	// (0x000770ed) pec_attribute_pane_ParamLimits

0x0d3c,	// (0x000770ed) pec_attribute_pane

0x93be,	// (0x0007f76f) pec_content_pane_g1_ParamLimits

0x93be,	// (0x0007f76f) pec_content_pane_g1

0x0d4c,	// (0x000770fd) pec_content_pane_t1_ParamLimits

0x0d4c,	// (0x000770fd) pec_content_pane_t1

0x0d5e,	// (0x0007710f) pec_content_pane_t2_ParamLimits

0x0d5e,	// (0x0007710f) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x0008588a) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x0008588a) pec_content_pane_t

0x93ca,	// (0x0007f77b) list_single_graphic_pane_cp01_ParamLimits

0x93ca,	// (0x0007f77b) list_single_graphic_pane_cp01

0xef18,	// (0x000852c9) bg_popup_sub_pane_cp04

0x0d70,	// (0x00077121) popup_mup_playback_window_g1

0x0d7c,	// (0x0007712d) popup_mup_playback_window_t1

0x0d91,	// (0x00077142) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x0008588f) popup_mup_playback_window_t

0x0dc8,	// (0x00077179) main_image_pane_g1_ParamLimits

0x0dc8,	// (0x00077179) main_image_pane_g1

0x0e0b,	// (0x000771bc) scroll_pane_cp018_ParamLimits

0x0e0b,	// (0x000771bc) scroll_pane_cp018

0x0e23,	// (0x000771d4) scroll_pane_cp016_ParamLimits

0x0e23,	// (0x000771d4) scroll_pane_cp016

0x9463,	// (0x0007f814) smil2_image_pane_ParamLimits

0x9463,	// (0x0007f814) smil2_image_pane

0x9493,	// (0x0007f844) smil2_root_pane_ParamLimits

0x9493,	// (0x0007f844) smil2_root_pane

0x94bf,	// (0x0007f870) smil2_text_pane_ParamLimits

0x94bf,	// (0x0007f870) smil2_text_pane

0xeca6,	// (0x00085057) bg_list_pane_cp06

0x0e5f,	// (0x00077210) grid_radio_pane

0xeca6,	// (0x00085057) bg_popup_window_pane_cp06

0x0e67,	// (0x00077218) main_fmradio_pane_t1

0x07f7,	// (0x00076ba8) heading_pane_cp04

0x0e75,	// (0x00077226) main_fmradio_pane_t2

0x1e3a,	// (0x000781eb) popup_cale_lunar_info_window_g1

0x0e83,	// (0x00077234) main_fmradio_pane_t3

0x1e42,	// (0x000781f3) popup_cale_lunar_info_window_g2

0x0e91,	// (0x00077242) main_fmradio_pane_t4

0x0001,

0x0e9f,	// (0x00077250) main_fmradio_pane_t5

0x0004,

0xf5b9,	// (0x0008596a) popup_cale_lunar_info_window_g

0xf4f3,	// (0x000858a4) main_fmradio_pane_t

0x0ead,	// (0x0007725e) wait_bar_pane_cp03

0x0eb5,	// (0x00077266) cell_fmradio_pane_ParamLimits

0x0eb5,	// (0x00077266) cell_fmradio_pane

0x0d0e,	// (0x000770bf) cell_fmradio_pane_g1_ParamLimits

0x0d0e,	// (0x000770bf) cell_fmradio_pane_g1

0xeca6,	// (0x00085057) grid_highlight_pane_cp011

0x0ec8,	// (0x00077279) poc_content_pane_ParamLimits

0x0ec8,	// (0x00077279) poc_content_pane

0x0eda,	// (0x0007728b) scroll_pane_cp019

0x94ff,	// (0x0007f8b0) popup_call_poc_act_window_ParamLimits

0x94ff,	// (0x0007f8b0) popup_call_poc_act_window

0x950c,	// (0x0007f8bd) popup_call_poc_inact_window_ParamLimits

0x950c,	// (0x0007f8bd) popup_call_poc_inact_window

0xf590,	// (0x00085941) bg_popup_call_poc_act_pane_g

0x1db2,	// (0x00078163) bg_popup_call_poc_inact_pane_g1

0x1dba,	// (0x0007816b) bg_popup_call_poc_inact_pane_g2

0x0ee2,	// (0x00077293) popup_call_poc_act_window_g2

0x1dc2,	// (0x00078173) bg_popup_call_poc_inact_pane_g3

0x1dca,	// (0x0007817b) bg_popup_call_poc_inact_pane_g4

0x1dd2,	// (0x00078183) bg_popup_call_poc_inact_pane_g5

0x0eea,	// (0x0007729b) popup_call_poc_act_window_t1_ParamLimits

0x0eea,	// (0x0007729b) popup_call_poc_act_window_t1

0x0f12,	// (0x000772c3) popup_call_poc_act_window_t2_ParamLimits

0x0f12,	// (0x000772c3) popup_call_poc_act_window_t2

0x0f3a,	// (0x000772eb) popup_call_poc_act_window_t3_ParamLimits

0x0f3a,	// (0x000772eb) popup_call_poc_act_window_t3

0x0f62,	// (0x00077313) popup_call_poc_act_window_t4_ParamLimits

0x0f62,	// (0x00077313) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x000858af) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x000858af) popup_call_poc_act_window_t

0x1dda,	// (0x0007818b) bg_popup_call_poc_inact_pane_g6

0x1de2,	// (0x00078193) bg_popup_call_poc_inact_pane_g7

0x1dea,	// (0x0007819b) bg_popup_call_poc_inact_pane_g8

0x0f74,	// (0x00077325) popup_call_poc_inact_window_g2

0x1df2,	// (0x000781a3) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf57d,	// (0x0008592e) bg_popup_call_poc_inact_pane_g

0x0f7c,	// (0x0007732d) popup_call_poc_inact_window_t1_ParamLimits

0x0f7c,	// (0x0007732d) popup_call_poc_inact_window_t1

0x0f91,	// (0x00077342) popup_call_poc_inact_window_t2_ParamLimits

0x0f91,	// (0x00077342) popup_call_poc_inact_window_t2

0x0fa6,	// (0x00077357) popup_call_poc_inact_window_t3_ParamLimits

0x0fa6,	// (0x00077357) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x000858b8) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x000858b8) popup_call_poc_inact_window_t

0x1f77,	// (0x00078328) context_pane_ParamLimits

0x9b40,	// (0x0007fef1) signal_pane_ParamLimits

0x0105,	// (0x000764b6) main_call2_pane

0x9ab3,	// (0x0007fe64) popup_phob_thumbnail2_window_ParamLimits

0x9ab3,	// (0x0007fe64) popup_phob_thumbnail2_window

0x91cd,	// (0x0007f57e) aid_hotspot_pointer_arrow_pane

0x91d5,	// (0x0007f586) aid_hotspot_pointer_hand_pane

0x982e,	// (0x0007fbdf) phob_pre_status_pane_g5

0x752f,	// (0x0007d8e0) cams_zoom_pane_ParamLimits

0x753b,	// (0x0007d8ec) image_vga_pane_ParamLimits

0x754a,	// (0x0007d8fb) main_camera_pane_g1_ParamLimits

0x7558,	// (0x0007d909) main_camera_pane_g2_ParamLimits

0x7564,	// (0x0007d915) main_camera_pane_g3_ParamLimits

0x7570,	// (0x0007d921) main_camera_pane_g4_ParamLimits

0x757c,	// (0x0007d92d) main_camera_pane_g5_ParamLimits

0x7588,	// (0x0007d939) main_camera_pane_g6_ParamLimits

0x7594,	// (0x0007d945) main_camera_pane_g7_ParamLimits

0xf206,	// (0x000855b7) main_camera_pane_g_ParamLimits

0x75a0,	// (0x0007d951) main_camera_pane_t1_ParamLimits

0x75b2,	// (0x0007d963) main_camera_pane_t2_ParamLimits

0xf217,	// (0x000855c8) main_camera_pane_t_ParamLimits

0xef18,	// (0x000852c9) bg_popup_preview_window_pane_cp01_ParamLimits

0xef18,	// (0x000852c9) bg_popup_preview_window_pane_cp01

0x0fbb,	// (0x0007736c) popup_phob_thumbnail2_window_g1_ParamLimits

0x0fbb,	// (0x0007736c) popup_phob_thumbnail2_window_g1

0xeca6,	// (0x00085057) call2_cli_visual_pane

0x9528,	// (0x0007f8d9) popup_call2_audio_conf_window_ParamLimits

0x9528,	// (0x0007f8d9) popup_call2_audio_conf_window

0x953d,	// (0x0007f8ee) popup_call2_audio_first_window_ParamLimits

0x953d,	// (0x0007f8ee) popup_call2_audio_first_window

0x95db,	// (0x0007f98c) popup_call2_audio_in_window_ParamLimits

0x95db,	// (0x0007f98c) popup_call2_audio_in_window

0x961d,	// (0x0007f9ce) popup_call2_audio_out_window_ParamLimits

0x961d,	// (0x0007f9ce) popup_call2_audio_out_window

0x967f,	// (0x0007fa30) popup_call2_audio_second_window_ParamLimits

0x967f,	// (0x0007fa30) popup_call2_audio_second_window

0x96dd,	// (0x0007fa8e) popup_call2_audio_wait_window_ParamLimits

0x96dd,	// (0x0007fa8e) popup_call2_audio_wait_window

0xeca6,	// (0x00085057) bg_popup_call2_act_pane_cp03

0xeefa,	// (0x000852ab) list_conf_pane_cp

0x0fc7,	// (0x00077378) popup_call2_audio_conf_window_t1

0x0854,	// (0x00076c05) list_single_graphic_popup_conf2_pane_ParamLimits

0x0854,	// (0x00076c05) list_single_graphic_popup_conf2_pane

0x0867,	// (0x00076c18) list_highlight_pane_cp04

0x0fd5,	// (0x00077386) list_single_graphic_popup_conf2_pane_g1

0x0878,	// (0x00076c29) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x000858bf) list_single_graphic_popup_conf2_pane_g

0x0fdf,	// (0x00077390) list_single_graphic_popup_conf2_pane_t1

0x0fed,	// (0x0007739e) bg_popup_call2_act_pane_cp01_ParamLimits

0x0fed,	// (0x0007739e) bg_popup_call2_act_pane_cp01

0x1077,	// (0x00077428) call_type_pane_cp05_ParamLimits

0x1077,	// (0x00077428) call_type_pane_cp05

0x10cb,	// (0x0007747c) popup_call2_audio_second_window_g1_ParamLimits

0x10cb,	// (0x0007747c) popup_call2_audio_second_window_g1

0x111f,	// (0x000774d0) popup_call2_audio_second_window_g2_ParamLimits

0x111f,	// (0x000774d0) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x000858c4) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x000858c4) popup_call2_audio_second_window_g

0x1184,	// (0x00077535) popup_call2_audio_second_window_t1_ParamLimits

0x1184,	// (0x00077535) popup_call2_audio_second_window_t1

0x123f,	// (0x000775f0) popup_call2_audio_second_window_t2_ParamLimits

0x123f,	// (0x000775f0) popup_call2_audio_second_window_t2

0x1292,	// (0x00077643) popup_call2_audio_second_window_t3_ParamLimits

0x1292,	// (0x00077643) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x000858cb) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x000858cb) popup_call2_audio_second_window_t

0xeca6,	// (0x00085057) bg_popup_call2_in_pane_cp02

0xecb0,	// (0x00085061) call_type_pane_cp04

0xecb8,	// (0x00085069) popup_call2_audio_wait_window_g1

0xecc0,	// (0x00085071) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000854a6) popup_call2_audio_wait_window_g

0xecc8,	// (0x00085079) popup_call2_audio_wait_window_t3

0x1385,	// (0x00077736) bg_popup_call2_act_pane_ParamLimits

0x1385,	// (0x00077736) bg_popup_call2_act_pane

0x1445,	// (0x000777f6) call_type_pane_cp03_ParamLimits

0x1445,	// (0x000777f6) call_type_pane_cp03

0x14a9,	// (0x0007785a) popup_call2_audio_first_window_g1_ParamLimits

0x14a9,	// (0x0007785a) popup_call2_audio_first_window_g1

0x1519,	// (0x000778ca) popup_call2_audio_first_window_g2_ParamLimits

0x1519,	// (0x000778ca) popup_call2_audio_first_window_g2

0x0c22,	// (0x00076fd3) popup_call2_audio_first_window_g3_ParamLimits

0x0c22,	// (0x00076fd3) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x000858d4) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x000858d4) popup_call2_audio_first_window_g

0x15f7,	// (0x000779a8) popup_call2_audio_first_window_t1_ParamLimits

0x15f7,	// (0x000779a8) popup_call2_audio_first_window_t1

0x16fa,	// (0x00077aab) popup_call2_audio_first_window_t4_ParamLimits

0x16fa,	// (0x00077aab) popup_call2_audio_first_window_t4

0x17dd,	// (0x00077b8e) popup_call2_audio_first_window_t5_ParamLimits

0x17dd,	// (0x00077b8e) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x000858df) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x000858df) popup_call2_audio_first_window_t

0xef10,	// (0x000852c1) bg_popup_call2_act_pane_g1

0x1e4a,	// (0x000781fb) popup_cale_lunar_info_window_t1

0x1e58,	// (0x00078209) popup_cale_lunar_info_window_t2

0x1e66,	// (0x00078217) popup_cale_lunar_info_window_t3

0xeca6,	// (0x00085057) bg_popup_call2_bubble_pane

0x18de,	// (0x00077c8f) bg_popup_call2_in_pane_cp01_ParamLimits

0x18de,	// (0x00077c8f) bg_popup_call2_in_pane_cp01

0xe982,	// (0x00084d33) call_type_pane_cp02

0x1926,	// (0x00077cd7) popup_call2_audio_out_window_g1_ParamLimits

0x1926,	// (0x00077cd7) popup_call2_audio_out_window_g1

0x1952,	// (0x00077d03) popup_call2_audio_out_window_g2_ParamLimits

0x1952,	// (0x00077d03) popup_call2_audio_out_window_g2

0x197a,	// (0x00077d2b) popup_call2_audio_out_window_g3_ParamLimits

0x197a,	// (0x00077d2b) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x000858e8) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x000858e8) popup_call2_audio_out_window_g

0x19b5,	// (0x00077d66) popup_call2_audio_out_window_t1_ParamLimits

0x19b5,	// (0x00077d66) popup_call2_audio_out_window_t1

0x1a14,	// (0x00077dc5) popup_call2_audio_out_window_t2_ParamLimits

0x1a14,	// (0x00077dc5) popup_call2_audio_out_window_t2

0x1a68,	// (0x00077e19) popup_call2_audio_out_window_t3_ParamLimits

0x1a68,	// (0x00077e19) popup_call2_audio_out_window_t3

0x1a7e,	// (0x00077e2f) popup_call2_audio_out_window_t4_ParamLimits

0x1a7e,	// (0x00077e2f) popup_call2_audio_out_window_t4

0x1a94,	// (0x00077e45) popup_call2_audio_out_window_t5_ParamLimits

0x1a94,	// (0x00077e45) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x000858f1) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x000858f1) popup_call2_audio_out_window_t

0x1af8,	// (0x00077ea9) bg_popup_call2_in_pane_ParamLimits

0x1af8,	// (0x00077ea9) bg_popup_call2_in_pane

0x1b54,	// (0x00077f05) popup_call2_audio_in_window_g1_ParamLimits

0x1b54,	// (0x00077f05) popup_call2_audio_in_window_g1

0x1b8c,	// (0x00077f3d) popup_call2_audio_in_window_g2_ParamLimits

0x1b8c,	// (0x00077f3d) popup_call2_audio_in_window_g2

0x1bc4,	// (0x00077f75) popup_call2_audio_in_window_g3_ParamLimits

0x1bc4,	// (0x00077f75) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x000858fe) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x000858fe) popup_call2_audio_in_window_g

0x1c1c,	// (0x00077fcd) popup_call2_audio_in_window_t1_ParamLimits

0x1c1c,	// (0x00077fcd) popup_call2_audio_in_window_t1

0x1c9c,	// (0x0007804d) popup_call2_audio_in_window_t2_ParamLimits

0x1c9c,	// (0x0007804d) popup_call2_audio_in_window_t2

0x1d1c,	// (0x000780cd) popup_call2_audio_in_window_t3_ParamLimits

0x1d1c,	// (0x000780cd) popup_call2_audio_in_window_t3

0x1d36,	// (0x000780e7) popup_call2_audio_in_window_t4_ParamLimits

0x1d36,	// (0x000780e7) popup_call2_audio_in_window_t4

0x1d48,	// (0x000780f9) popup_call2_audio_in_window_t5_ParamLimits

0x1d48,	// (0x000780f9) popup_call2_audio_in_window_t5

0x1d5d,	// (0x0007810e) popup_call2_audio_in_window_t6_ParamLimits

0x1d5d,	// (0x0007810e) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x00085907) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x00085907) popup_call2_audio_in_window_t

0xef10,	// (0x000852c1) bg_popup_call2_in_pane_g1

0x1e74,	// (0x00078225) popup_cale_lunar_info_window_t4

0x0003,

0xf5be,	// (0x0008596f) popup_cale_lunar_info_window_t

0xef18,	// (0x000852c9) bg_popup_call2_rect_pane_ParamLimits

0xef18,	// (0x000852c9) bg_popup_call2_rect_pane

0xeca6,	// (0x00085057) call2_cli_visual_graphic_pane

0xeca6,	// (0x00085057) call2_cli_visual_text_pane

0x9be6,	// (0x0007ff97) smil_status_volume_pane_g3

0x0002,

0xf032,	// (0x000853e3) call2_cli_visual_graphic_pane_g1

0xf032,	// (0x000853e3) call2_cli_visual_graphic_pane_g2

0xf032,	// (0x000853e3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x00085914) call2_cli_visual_graphic_pane_g

0x1d72,	// (0x00078123) bg_popup_call2_rect_pane_g1

0x0021,	// (0x000763d2) bg_popup_call2_rect_pane_g2

0x1d7a,	// (0x0007812b) bg_popup_call2_rect_pane_g3

0x1d82,	// (0x00078133) bg_popup_call2_rect_pane_g4

0x1d8a,	// (0x0007813b) bg_popup_call2_rect_pane_g5

0x1d92,	// (0x00078143) bg_popup_call2_rect_pane_g6

0x1d9a,	// (0x0007814b) bg_popup_call2_rect_pane_g7

0x1da2,	// (0x00078153) bg_popup_call2_rect_pane_g8

0x1daa,	// (0x0007815b) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x0008591b) bg_popup_call2_rect_pane_g

0x1db2,	// (0x00078163) bg_popup_call2_bubble_pane_g1

0x1dba,	// (0x0007816b) bg_popup_call2_bubble_pane_g2

0x1dc2,	// (0x00078173) bg_popup_call2_bubble_pane_g3

0x1dca,	// (0x0007817b) bg_popup_call2_bubble_pane_g4

0x1dd2,	// (0x00078183) bg_popup_call2_bubble_pane_g5

0x1dda,	// (0x0007818b) bg_popup_call2_bubble_pane_g6

0x1de2,	// (0x00078193) bg_popup_call2_bubble_pane_g7

0x1dea,	// (0x0007819b) bg_popup_call2_bubble_pane_g8

0x1df2,	// (0x000781a3) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x0008592e) bg_popup_call2_bubble_pane_g

0x7046,	// (0x0007d3f7) aid_cale_week_size_cell_pane

0x75c4,	// (0x0007d975) aid_cams_cif_uncrop_pane_ParamLimits

0x75c4,	// (0x0007d975) aid_cams_cif_uncrop_pane

0x771f,	// (0x0007dad0) aid_cams_size_cell_ParamLimits

0x771f,	// (0x0007dad0) aid_cams_size_cell

0x772b,	// (0x0007dadc) grid_cams_pane_ParamLimits

0x7739,	// (0x0007daea) linegrid_cams_pane_ParamLimits

0x7828,	// (0x0007dbd9) call_video_pane_t1

0x7849,	// (0x0007dbfa) call_video_pane_t2

0x0001,

0xf26a,	// (0x0008561b) call_video_pane_t

0x7d90,	// (0x0007e141) aid_cale_month_size_cell_pane_ParamLimits

0x7d90,	// (0x0007e141) aid_cale_month_size_cell_pane

0xf607,	// (0x000859b8) smil_status_volume_pane_g

0x9bf3,	// (0x0007ffa4) volume_smil_pane_ParamLimits

0x67af,	// (0x0007cb60) aid_popup2_width_pane

0x6f48,	// (0x0007d2f9) cell_qdial_pane_g4_ParamLimits

0x6f48,	// (0x0007d2f9) cell_qdial_pane_g4

0x8c6c,	// (0x0007f01d) aid_blid_cardinal_pane_ParamLimits

0x8c7c,	// (0x0007f02d) aid_blid_destination_pane_ParamLimits

0x8c7c,	// (0x0007f02d) aid_blid_destination_pane

0xef18,	// (0x000852c9) bg_popup_call_poc_act_pane_ParamLimits

0xef18,	// (0x000852c9) bg_popup_call_poc_act_pane

0xef18,	// (0x000852c9) bg_popup_call_poc_inact_pane_ParamLimits

0xef18,	// (0x000852c9) bg_popup_call_poc_inact_pane

0x1dfa,	// (0x000781ab) bg_popup_call_poc_act_pane_g1

0x1e02,	// (0x000781b3) bg_popup_call_poc_act_pane_g2

0x1e0a,	// (0x000781bb) bg_popup_call_poc_act_pane_g3

0x1dca,	// (0x0007817b) bg_popup_call_poc_act_pane_g4

0x1dd2,	// (0x00078183) bg_popup_call_poc_act_pane_g5

0x1e12,	// (0x000781c3) bg_popup_call_poc_act_pane_g6

0x1de2,	// (0x00078193) bg_popup_call_poc_act_pane_g7

0x1e1a,	// (0x000781cb) bg_popup_call_poc_act_pane_g8

0xeca6,	// (0x00085057) main_usb_pane

0x99e2,	// (0x0007fd93) popup_cale_lunar_info_window

0x7b72,	// (0x0007df23) im_reading_pane_t1_ParamLimits

0x0206,	// (0x000765b7) list_im_pane_ParamLimits

0x0217,	// (0x000765c8) scroll_pane_cp07_ParamLimits

0xeca6,	// (0x00085057) grid_highlight_pane_cp012

0xef18,	// (0x000852c9) mup_scale_pane_ParamLimits

0x0c22,	// (0x00076fd3) main_usb_pane_g1_ParamLimits

0x0c22,	// (0x00076fd3) main_usb_pane_g1

0x9751,	// (0x0007fb02) main_usb_pane_g2_ParamLimits

0x9751,	// (0x0007fb02) main_usb_pane_g2

0x0001,

0xf5a7,	// (0x00085958) main_usb_pane_g_ParamLimits

0xf5a7,	// (0x00085958) main_usb_pane_g

0x975d,	// (0x0007fb0e) main_usb_pane_t1_ParamLimits

0x975d,	// (0x0007fb0e) main_usb_pane_t1

0x976f,	// (0x0007fb20) main_usb_pane_t2_ParamLimits

0x976f,	// (0x0007fb20) main_usb_pane_t2

0x9781,	// (0x0007fb32) main_usb_pane_t3_ParamLimits

0x9781,	// (0x0007fb32) main_usb_pane_t3

0x9793,	// (0x0007fb44) main_usb_pane_t4_ParamLimits

0x9793,	// (0x0007fb44) main_usb_pane_t4

0x97a5,	// (0x0007fb56) main_usb_pane_t5_ParamLimits

0x97a5,	// (0x0007fb56) main_usb_pane_t5

0x97b7,	// (0x0007fb68) main_usb_pane_t6_ParamLimits

0x97b7,	// (0x0007fb68) main_usb_pane_t6

0x0005,

0xf5ac,	// (0x0008595d) main_usb_pane_t_ParamLimits

0x8c12,	// (0x0007efc3) aid_text_placing

0x8c1e,	// (0x0007efcf) main_location2_pane_t1_ParamLimits

0x8c32,	// (0x0007efe3) main_location2_pane_t2_ParamLimits

0x8c46,	// (0x0007eff7) main_location2_pane_t3_ParamLimits

0x8c5a,	// (0x0007f00b) main_location2_pane_t4_ParamLimits

0x8c5a,	// (0x0007f00b) main_location2_pane_t4

0xf3cb,	// (0x0008577c) main_location2_pane_t_ParamLimits

0xef54,	// (0x00085305) find_pinb_pane_g2_ParamLimits

0xef54,	// (0x00085305) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x000854cc) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x000854cc) find_pinb_pane_g

0xef60,	// (0x00085311) find_pinb_pane_t1_ParamLimits

0xef72,	// (0x00085323) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x000854d1) find_pinb_pane_t_ParamLimits

0xeca6,	// (0x00085057) main_call3_pane

0x8333,	// (0x0007e6e4) cale_month_day_heading_pane_t1_ParamLimits

0x83b9,	// (0x0007e76a) cale_month_day_heading_pane_t2_ParamLimits

0x8432,	// (0x0007e7e3) cale_month_day_heading_pane_t3_ParamLimits

0x84ab,	// (0x0007e85c) cale_month_day_heading_pane_t4_ParamLimits

0x8524,	// (0x0007e8d5) cale_month_day_heading_pane_t5_ParamLimits

0x859d,	// (0x0007e94e) cale_month_day_heading_pane_t6_ParamLimits

0x8616,	// (0x0007e9c7) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x00085653) cale_month_day_heading_pane_t_ParamLimits

0x0461,	// (0x00076812) smil_status_volume_pane

0x9315,	// (0x0007f6c6) postcard_address_pane_ParamLimits

0x9315,	// (0x0007f6c6) postcard_address_pane

0x9321,	// (0x0007f6d2) postcard_message_pane_ParamLimits

0x9321,	// (0x0007f6d2) postcard_message_pane

0x971c,	// (0x0007facd) call2_cli_visual_pane_t1_ParamLimits

0x971c,	// (0x0007facd) call2_cli_visual_pane_t1

0x9d4a,	// (0x000800fb) postcard_message_pane_t1_ParamLimits

0x9d4a,	// (0x000800fb) postcard_message_pane_t1

0x9d33,	// (0x000800e4) postcard_address_pane_t1_ParamLimits

0x9d33,	// (0x000800e4) postcard_address_pane_t1

0x9d24,	// (0x000800d5) popup_call3_audio_in_window_ParamLimits

0x9d24,	// (0x000800d5) popup_call3_audio_in_window

0x9c08,	// (0x0007ffb9) bg_popup_call3_in_pane_ParamLimits

0x9c08,	// (0x0007ffb9) bg_popup_call3_in_pane

0x9c6a,	// (0x0008001b) popup_call3_audio_in_window_g1_ParamLimits

0x9c6a,	// (0x0008001b) popup_call3_audio_in_window_g1

0x9c82,	// (0x00080033) popup_call3_audio_in_window_g2_ParamLimits

0x9c82,	// (0x00080033) popup_call3_audio_in_window_g2

0x9c9a,	// (0x0008004b) popup_call3_audio_in_window_g3_ParamLimits

0x9c9a,	// (0x0008004b) popup_call3_audio_in_window_g3

0x0003,

0xf60e,	// (0x000859bf) popup_call3_audio_in_window_g_ParamLimits

0xf60e,	// (0x000859bf) popup_call3_audio_in_window_g

0x9cc2,	// (0x00080073) popup_call3_audio_in_window_t1_ParamLimits

0x9cc2,	// (0x00080073) popup_call3_audio_in_window_t1

0x9cea,	// (0x0008009b) popup_call3_audio_in_window_t2_ParamLimits

0x9cea,	// (0x0008009b) popup_call3_audio_in_window_t2

0x9d12,	// (0x000800c3) popup_call3_audio_in_window_t3_ParamLimits

0x9d12,	// (0x000800c3) popup_call3_audio_in_window_t3

0x0002,

0xf617,	// (0x000859c8) popup_call3_audio_in_window_t_ParamLimits

0xf617,	// (0x000859c8) popup_call3_audio_in_window_t

0x0105,	// (0x000764b6) bg_popup_call3_rect_pane

0x1d72,	// (0x00078123) bg_popup_call3_rect_pane_g1

0x0021,	// (0x000763d2) bg_popup_call3_rect_pane_g2

0x1d7a,	// (0x0007812b) bg_popup_call3_rect_pane_g3

0x1d82,	// (0x00078133) bg_popup_call3_rect_pane_g4

0x1d8a,	// (0x0007813b) bg_popup_call3_rect_pane_g5

0x1d92,	// (0x00078143) bg_popup_call3_rect_pane_g6

0x1d9a,	// (0x0007814b) bg_popup_call3_rect_pane_g7

0x8f92,	// (0x0007f343) mup_visualizer_osc_pane

0x0c30,	// (0x00076fe1) mup_visualizer_spec_pane

0x9c28,	// (0x0007ffd9) call3_video_qcif_pane_ParamLimits

0x9c28,	// (0x0007ffd9) call3_video_qcif_pane

0x9c3a,	// (0x0007ffeb) call3_video_qcif_uncrop_pane_ParamLimits

0x9c3a,	// (0x0007ffeb) call3_video_qcif_uncrop_pane

0x9c48,	// (0x0007fff9) call3_video_subqcif_pane_ParamLimits

0x9c48,	// (0x0007fff9) call3_video_subqcif_pane

0x9c5a,	// (0x0008000b) call3_video_subqcif_uncrop_pane_ParamLimits

0x9c5a,	// (0x0008000b) call3_video_subqcif_uncrop_pane

0x9cb2,	// (0x00080063) popup_call3_audio_in_window_g4_ParamLimits

0x9cb2,	// (0x00080063) popup_call3_audio_in_window_g4

0x9bd5,	// (0x0007ff86) mup_spec_half_pane

0x9bde,	// (0x0007ff8f) mup_spec_half_pane_cp

0x1fd7,	// (0x00078388) mup_osc_middle_pane

0x1fe0,	// (0x00078391) mup_visualizer_osc_pane_g1

0x9bb6,	// (0x0007ff67) mup_spec_bar_pane_ParamLimits

0x9bb6,	// (0x0007ff67) mup_spec_bar_pane

0x1fc4,	// (0x00078375) mup_spec_bar_pane_g1

0x1fce,	// (0x0007837f) mup_spec_bar_pane_g2

0x0001,

0xf602,	// (0x000859b3) mup_spec_bar_pane_g

0x7046,	// (0x0007d3f7) aid_cale_week_size_cell_pane_ParamLimits

0x705b,	// (0x0007d40c) bg_cale_heading_pane_ParamLimits

0x005e,	// (0x0007640f) bg_cale_pane_cp01_ParamLimits

0x707b,	// (0x0007d42c) cale_week_corner_pane_ParamLimits

0x7095,	// (0x0007d446) cale_week_day_heading_pane_ParamLimits

0x70b5,	// (0x0007d466) cale_week_scroll_pane_g1_ParamLimits

0x70d0,	// (0x0007d481) cale_week_scroll_pane_g2_ParamLimits

0x70e3,	// (0x0007d494) cale_week_scroll_pane_g3_ParamLimits

0x70f6,	// (0x0007d4a7) cale_week_scroll_pane_g4_ParamLimits

0x7109,	// (0x0007d4ba) cale_week_scroll_pane_g5_ParamLimits

0x711c,	// (0x0007d4cd) cale_week_scroll_pane_g6_ParamLimits

0x712f,	// (0x0007d4e0) cale_week_scroll_pane_g7_ParamLimits

0x7144,	// (0x0007d4f5) cale_week_scroll_pane_g8_ParamLimits

0x7159,	// (0x0007d50a) cale_week_scroll_pane_g9_ParamLimits

0x716c,	// (0x0007d51d) cale_week_scroll_pane_g10_ParamLimits

0x717f,	// (0x0007d530) cale_week_scroll_pane_g11_ParamLimits

0x7192,	// (0x0007d543) cale_week_scroll_pane_g12_ParamLimits

0x71a9,	// (0x0007d55a) cale_week_scroll_pane_g13_ParamLimits

0x71c4,	// (0x0007d575) cale_week_scroll_pane_g14_ParamLimits

0x71df,	// (0x0007d590) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0008555d) cale_week_scroll_pane_g_ParamLimits

0x720f,	// (0x0007d5c0) cale_week_time_pane_ParamLimits

0x7224,	// (0x0007d5d5) grid_cale_week_pane_ParamLimits

0x007b,	// (0x0007642c) listscroll_cale_week_pane_t1

0x008d,	// (0x0007643e) scroll_pane_cp08_ParamLimits

0x7e04,	// (0x0007e1b5) cale_month_corner_pane_ParamLimits

0x0437,	// (0x000767e8) cale_month_pane_t1

0x82b6,	// (0x0007e667) cale_month_week_pane_ParamLimits

0x0c22,	// (0x00076fd3) popup_call_status_window_g1_ParamLimits

0x8a45,	// (0x0007edf6) popup_call_status_window_g2_ParamLimits

0x8a51,	// (0x0007ee02) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x00085703) popup_call_status_window_g_ParamLimits

0x07ef,	// (0x00076ba0) aid_call2_pane

0x57a5,	// (0x0007bb56) msg_header_pane_g1

0x9315,	// (0x0007f6c6) postcard_address2_pane_ParamLimits

0x9315,	// (0x0007f6c6) postcard_address2_pane

0x9321,	// (0x0007f6d2) postcard_message2_pane_ParamLimits

0x9321,	// (0x0007f6d2) postcard_message2_pane

0x9b4e,	// (0x0007feff) message2_row_pane_ParamLimits

0x9b4e,	// (0x0007feff) message2_row_pane

0x9b69,	// (0x0007ff1a) address2_row_pane_ParamLimits

0x9b69,	// (0x0007ff1a) address2_row_pane

0x1f92,	// (0x00078343) postcard_message2_row_pane_g1

0x1f9a,	// (0x0007834b) postcard_message2_row_pane_t1

0x1f92,	// (0x00078343) address2_row_pane_g1

0x1f9a,	// (0x0007834b) address2_row_pane_t1

0x74aa,	// (0x0007d85b) aid_size_cell_vorec

0xeca6,	// (0x00085057) main_rss_pane

0x9b7c,	// (0x0007ff2d) rss_list_single_pane_ParamLimits

0x9b7c,	// (0x0007ff2d) rss_list_single_pane

0x1fa8,	// (0x00078359) rss_list_single_pane_t1

0x1fb6,	// (0x00078367) rss_list_single_pane_t2

0x0001,

0xf5fd,	// (0x000859ae) rss_list_single_pane_t

0xeca6,	// (0x00085057) main_camera2_pane

0xeca6,	// (0x00085057) main_video2_pane

0x9dae,	// (0x0008015f) cams_zoom_pane_cp2_ParamLimits

0x9dae,	// (0x0008015f) cams_zoom_pane_cp2

0x9dba,	// (0x0008016b) image2_vga_pane_ParamLimits

0x9dba,	// (0x0008016b) image2_vga_pane

0x9dc9,	// (0x0008017a) main_camera2_pane_g1_ParamLimits

0x9dc9,	// (0x0008017a) main_camera2_pane_g1

0x9dd5,	// (0x00080186) main_camera2_pane_g2_ParamLimits

0x9dd5,	// (0x00080186) main_camera2_pane_g2

0x9de1,	// (0x00080192) main_camera2_pane_g3_ParamLimits

0x9de1,	// (0x00080192) main_camera2_pane_g3

0x9ded,	// (0x0008019e) main_camera2_pane_g4_ParamLimits

0x9ded,	// (0x0008019e) main_camera2_pane_g4

0x9df9,	// (0x000801aa) main_camera2_pane_g5_ParamLimits

0x9df9,	// (0x000801aa) main_camera2_pane_g5

0x9e05,	// (0x000801b6) main_camera2_pane_g6_ParamLimits

0x9e05,	// (0x000801b6) main_camera2_pane_g6

0x9e11,	// (0x000801c2) main_camera2_pane_g7_ParamLimits

0x9e11,	// (0x000801c2) main_camera2_pane_g7

0x9e1d,	// (0x000801ce) main_camera2_pane_g8_ParamLimits

0x9e1d,	// (0x000801ce) main_camera2_pane_g8

0x0008,

0xf61e,	// (0x000859cf) main_camera2_pane_g_ParamLimits

0xf61e,	// (0x000859cf) main_camera2_pane_g

0x9e35,	// (0x000801e6) main_camera2_pane_t1_ParamLimits

0x9e35,	// (0x000801e6) main_camera2_pane_t1

0x9e47,	// (0x000801f8) main_camera2_pane_t2_ParamLimits

0x9e47,	// (0x000801f8) main_camera2_pane_t2

0x9e59,	// (0x0008020a) main_camera2_pane_t3_ParamLimits

0x9e59,	// (0x0008020a) main_camera2_pane_t3

0x9e6b,	// (0x0008021c) main_camera2_pane_t4_ParamLimits

0x9e6b,	// (0x0008021c) main_camera2_pane_t4

0x0006,

0xf631,	// (0x000859e2) main_camera2_pane_t_ParamLimits

0xf631,	// (0x000859e2) main_camera2_pane_t

0x9ecd,	// (0x0008027e) cams_zoom_pane_cp4_ParamLimits

0x9ecd,	// (0x0008027e) cams_zoom_pane_cp4

0x9edd,	// (0x0008028e) image2_cif_pane_ParamLimits

0x9edd,	// (0x0008028e) image2_cif_pane

0x9ef2,	// (0x000802a3) image2_subqcif_pane_ParamLimits

0x9ef2,	// (0x000802a3) image2_subqcif_pane

0x9f01,	// (0x000802b2) main_video2_pane_g1_ParamLimits

0x9f01,	// (0x000802b2) main_video2_pane_g1

0x9f13,	// (0x000802c4) main_video2_pane_g2_ParamLimits

0x9f13,	// (0x000802c4) main_video2_pane_g2

0x9f23,	// (0x000802d4) main_video2_pane_g3_ParamLimits

0x9f23,	// (0x000802d4) main_video2_pane_g3

0x9f33,	// (0x000802e4) main_video2_pane_g4_ParamLimits

0x9f33,	// (0x000802e4) main_video2_pane_g4

0x9f43,	// (0x000802f4) main_video2_pane_g5_ParamLimits

0x9f43,	// (0x000802f4) main_video2_pane_g5

0x9f53,	// (0x00080304) main_video2_pane_g6_ParamLimits

0x9f53,	// (0x00080304) main_video2_pane_g6

0x0005,

0xf640,	// (0x000859f1) main_video2_pane_g_ParamLimits

0xf640,	// (0x000859f1) main_video2_pane_g

0x9f65,	// (0x00080316) main_video2_pane_t1_ParamLimits

0x9f65,	// (0x00080316) main_video2_pane_t1

0x9f7f,	// (0x00080330) main_video2_pane_t2_ParamLimits

0x9f7f,	// (0x00080330) main_video2_pane_t2

0x9fa5,	// (0x00080356) main_video2_pane_t3_ParamLimits

0x9fa5,	// (0x00080356) main_video2_pane_t3

0x0002,

0xf64d,	// (0x000859fe) main_video2_pane_t_ParamLimits

0xf64d,	// (0x000859fe) main_video2_pane_t

0x986e,	// (0x0007fc1f) call_muted_g2

0x0001,

0xf5ef,	// (0x000859a0) call_muted_g

0xeca6,	// (0x00085057) main_mup2_pane

0x2051,	// (0x00078402) main_mup2_pane_g1_ParamLimits

0x2051,	// (0x00078402) main_mup2_pane_g1

0x9fcb,	// (0x0008037c) main_mup2_pane_g2_ParamLimits

0x9fcb,	// (0x0008037c) main_mup2_pane_g2

0xa24d,	// (0x000805fe) main_mup_pane_g13_cp1

0xa255,	// (0x00080606) mup_volume_pane_cp1

0x9feb,	// (0x0008039c) main_mup2_pane_g4_ParamLimits

0x9feb,	// (0x0008039c) main_mup2_pane_g4

0xa000,	// (0x000803b1) main_mup2_pane_g5_ParamLimits

0xa000,	// (0x000803b1) main_mup2_pane_g5

0xa015,	// (0x000803c6) main_mup2_pane_g6_ParamLimits

0xa015,	// (0x000803c6) main_mup2_pane_g6

0xa02a,	// (0x000803db) main_mup2_pane_g7_ParamLimits

0xa02a,	// (0x000803db) main_mup2_pane_g7

0x0006,

0xf654,	// (0x00085a05) main_mup2_pane_g_ParamLimits

0xf654,	// (0x00085a05) main_mup2_pane_g

0xa046,	// (0x000803f7) main_mup2_pane_t1_ParamLimits

0xa046,	// (0x000803f7) main_mup2_pane_t1

0xa05d,	// (0x0008040e) main_mup2_pane_t2_ParamLimits

0xa05d,	// (0x0008040e) main_mup2_pane_t2

0xa074,	// (0x00080425) main_mup2_pane_t3_ParamLimits

0xa074,	// (0x00080425) main_mup2_pane_t3

0xa08b,	// (0x0008043c) main_mup2_pane_t4_ParamLimits

0xa08b,	// (0x0008043c) main_mup2_pane_t4

0xa0a5,	// (0x00080456) main_mup2_pane_t5_ParamLimits

0xa0a5,	// (0x00080456) main_mup2_pane_t5

0xa0bf,	// (0x00080470) main_mup2_pane_t6_ParamLimits

0xa0bf,	// (0x00080470) main_mup2_pane_t6

0x0005,

0xf663,	// (0x00085a14) main_mup2_pane_t_ParamLimits

0xf663,	// (0x00085a14) main_mup2_pane_t

0xa0f7,	// (0x000804a8) mup2_visualizer_pane_ParamLimits

0xa0f7,	// (0x000804a8) mup2_visualizer_pane

0xa12d,	// (0x000804de) mup_progress_pane_cp_ParamLimits

0xa12d,	// (0x000804de) mup_progress_pane_cp

0xa238,	// (0x000805e9) mup_volume_pane_cp_ParamLimits

0xa238,	// (0x000805e9) mup_volume_pane_cp

0xa144,	// (0x000804f5) mup2_visualizer_pane_g1_ParamLimits

0xa144,	// (0x000804f5) mup2_visualizer_pane_g1

0x2023,	// (0x000783d4) mup2_visualizer_pane_g2_ParamLimits

0x2023,	// (0x000783d4) mup2_visualizer_pane_g2

0xa159,	// (0x0008050a) mup2_visualizer_pane_g3_ParamLimits

0xa159,	// (0x0008050a) mup2_visualizer_pane_g3

0x0002,

0xf670,	// (0x00085a21) mup2_visualizer_pane_g_ParamLimits

0xf670,	// (0x00085a21) mup2_visualizer_pane_g

0x0e57,	// (0x00077208) aid_size_cell_fmradio

0x9984,	// (0x0007fd35) aid_height_parent_landcape

0x0295,	// (0x00076646) wml_content_pane_cp

0x029d,	// (0x0007664e) wml_tabs_pane

0x02a6,	// (0x00076657) popup_wml_miniature_window

0x02ae,	// (0x0007665f) scroll_pane_cp021

0x02c2,	// (0x00076673) wml_content_pane_comp8

0xeca6,	// (0x00085057) bg_popup_sub_pane_cp05

0x2041,	// (0x000783f2) popup_wml_miniature_window_g1

0x2049,	// (0x000783fa) wml_miniature_view_pane

0xa167,	// (0x00080518) aid_size_wml_view

0xa16f,	// (0x00080520) wml_miniature_view_pane_g1

0xa178,	// (0x00080529) wml_miniature_view_pane_g2

0xa181,	// (0x00080532) wml_miniature_view_pane_g3

0xa189,	// (0x0008053a) wml_miniature_view_pane_g4

0xa191,	// (0x00080542) wml_miniature_view_pane_g5

0xa199,	// (0x0008054a) wml_miniature_view_pane_g6

0xa1a1,	// (0x00080552) wml_miniature_view_pane_g7

0xa1a9,	// (0x0008055a) wml_miniature_view_pane_g8

0x0007,

0xf677,	// (0x00085a28) wml_miniature_view_pane_g

0x2051,	// (0x00078402) background_graphic_ParamLimits

0x2051,	// (0x00078402) background_graphic

0x205d,	// (0x0007840e) wml_tabs_2_pane

0x2066,	// (0x00078417) wml_tabs_3_pane_ParamLimits

0x2066,	// (0x00078417) wml_tabs_3_pane

0x2078,	// (0x00078429) wml_tabs_4_pane_ParamLimits

0x2078,	// (0x00078429) wml_tabs_4_pane

0x208e,	// (0x0007843f) wml_tabs_5_pane_ParamLimits

0x208e,	// (0x0007843f) wml_tabs_5_pane

0x20a8,	// (0x00078459) wml_tabs_pane_g2_ParamLimits

0x20a8,	// (0x00078459) wml_tabs_pane_g2

0x20bc,	// (0x0007846d) wml_tabs_pane_g3_ParamLimits

0x20bc,	// (0x0007846d) wml_tabs_pane_g3

0xa1b1,	// (0x00080562) wml_tabs_2_active_pane_ParamLimits

0xa1b1,	// (0x00080562) wml_tabs_2_active_pane

0xa1c1,	// (0x00080572) wml_tabs_2_passive_pane_ParamLimits

0xa1c1,	// (0x00080572) wml_tabs_2_passive_pane

0xa1d1,	// (0x00080582) wml_tabs_3_active_pane_cp_ParamLimits

0xa1d1,	// (0x00080582) wml_tabs_3_active_pane_cp

0xa1e2,	// (0x00080593) wml_tabs_3_passive_pane_ParamLimits

0xa1e2,	// (0x00080593) wml_tabs_3_passive_pane

0xa1f3,	// (0x000805a4) wml_tabs_3_passive_pane_cp_ParamLimits

0xa1f3,	// (0x000805a4) wml_tabs_3_passive_pane_cp

0xa204,	// (0x000805b5) tabs_4_active_pane

0xa20c,	// (0x000805bd) tabs_4_passive_pane

0xa214,	// (0x000805c5) tabs_4_passive_pane_cp

0xa21c,	// (0x000805cd) tabs_4_passive_pane_cp2

0x9749,	// (0x0007fafa) aid_height_text

0x8f5f,	// (0x0007f310) mup_volume_cont_pane_ParamLimits

0x8f5f,	// (0x0007f310) mup_volume_cont_pane

0x6b7e,	// (0x0007cf2f) aid_size_cell_pinb

0x6b88,	// (0x0007cf39) aid_size_list_pinb

0xa116,	// (0x000804c7) mup2_volume_cont_pane_ParamLimits

0xa116,	// (0x000804c7) mup2_volume_cont_pane

0xa224,	// (0x000805d5) mup2_volume_cont_pane_g1_ParamLimits

0xa224,	// (0x000805d5) mup2_volume_cont_pane_g1

0x67bb,	// (0x0007cb6c) aid_size_cell_touch_ParamLimits

0x67bb,	// (0x0007cb6c) aid_size_cell_touch

0x6a64,	// (0x0007ce15) touch_pane_ParamLimits

0x6a64,	// (0x0007ce15) touch_pane

0xe889,	// (0x00084c3a) main_rss2_pane

0x20d9,	// (0x0007848a) listscroll_rss2_pane

0x20e2,	// (0x00078493) rss2_navigation_pane

0x20ea,	// (0x0007849b) list_rss2_pane

0x092a,	// (0x00076cdb) scroll_pane_cp22

0x20f2,	// (0x000784a3) rss2_navigation_pane_g1

0x20fb,	// (0x000784ac) rss2_navigation_pane_g2

0x2103,	// (0x000784b4) rss2_navigation_pane_g3

0x0002,

0xf688,	// (0x00085a39) rss2_navigation_pane_g

0x210b,	// (0x000784bc) rss2_navigation_pane_t1

0xa25d,	// (0x0008060e) rss2_list_single_pane_ParamLimits

0xa25d,	// (0x0008060e) rss2_list_single_pane

0x2119,	// (0x000784ca) rss2_list_single_pane_t2

0x2127,	// (0x000784d8) rss2_list_single_pane_t3_ParamLimits

0x2127,	// (0x000784d8) rss2_list_single_pane_t3

0x2144,	// (0x000784f5) rss2_list_single_pane_t4

0x88b2,	// (0x0007ec63) smil_status_pane_g1

0xf0a6,	// (0x00085457) main_image2_pane_ParamLimits

0xf0a6,	// (0x00085457) main_image2_pane

0x9e29,	// (0x000801da) main_camera2_pane_g9_ParamLimits

0x9e29,	// (0x000801da) main_camera2_pane_g9

0x9e7d,	// (0x0008022e) main_camera2_pane_t5_ParamLimits

0x9e7d,	// (0x0008022e) main_camera2_pane_t5

0x9e8f,	// (0x00080240) main_camera2_pane_t6_ParamLimits

0x9e8f,	// (0x00080240) main_camera2_pane_t6

0xa28e,	// (0x0008063f) main_image2_pane_g1_ParamLimits

0xa28e,	// (0x0008063f) main_image2_pane_g1

0x94e9,	// (0x0007f89a) smil2_video_pane_ParamLimits

0x94e9,	// (0x0007f89a) smil2_video_pane

0x67ef,	// (0x0007cba0) aid_zoom_text_primary_cp

0x6a0d,	// (0x0007cdbe) popup_preview_fixed_window

0x01fe,	// (0x000765af) im_reading_pane_g1

0x9d73,	// (0x00080124) cams2_bc_adjust_pane_cp_ParamLimits

0x9d73,	// (0x00080124) cams2_bc_adjust_pane_cp

0x9ebf,	// (0x00080270) cams2_bc_adjust_pane_ParamLimits

0x9ebf,	// (0x00080270) cams2_bc_adjust_pane

0xa29a,	// (0x0008064b) cams2_bc_adjust_pane_g1

0xa2a2,	// (0x00080653) cams2_slider_pane

0xa2ab,	// (0x0008065c) cams2_slider_pane_g1

0xa2b4,	// (0x00080665) cams2_slider_pane_g2

0x0006,

0xf68f,	// (0x00085a40) cams2_slider_pane_g

0x6c8e,	// (0x0007d03f) calc_display_pane_ParamLimits

0x6cac,	// (0x0007d05d) calc_paper_pane_ParamLimits

0x6cc8,	// (0x0007d079) grid_calc_pane_ParamLimits

0x8ab3,	// (0x0007ee64) popup_clock_digital_window_t1_ParamLimits

0x0df4,	// (0x000771a5) main_image_pane_t1

0x6c74,	// (0x0007d025) aid_size_cell_calc_ParamLimits

0x6c74,	// (0x0007d025) aid_size_cell_calc

0x99be,	// (0x0007fd6f) popup_blid_sat_info2_window_ParamLimits

0x99be,	// (0x0007fd6f) popup_blid_sat_info2_window

0x215a,	// (0x0007850b) aid_size_cell_blid

0x2162,	// (0x00078513) bg_popup_window_pane_cp07

0x2185,	// (0x00078536) grid_popup_blid_pane

0x218f,	// (0x00078540) heading_pane_cp05_ParamLimits

0x218f,	// (0x00078540) heading_pane_cp05

0x2259,	// (0x0007860a) cell_popup_blid_pane_ParamLimits

0x2259,	// (0x0007860a) cell_popup_blid_pane

0x227d,	// (0x0007862e) cell_popup_blid_pane_g1

0x2285,	// (0x00078636) cell_popup_blid_pane_t1

0xa0dc,	// (0x0008048d) mup2_indicator_pane_ParamLimits

0xa0dc,	// (0x0008048d) mup2_indicator_pane

0x0105,	// (0x000764b6) mup2_visualizer_osc_pane

0x202f,	// (0x000783e0) mup2_visualizer_spec_pane_ParamLimits

0x202f,	// (0x000783e0) mup2_visualizer_spec_pane

0xa2ce,	// (0x0008067f) mup2_spec_half_pane

0xa2d7,	// (0x00080688) mup2_spec_half_pane_cp

0xa2e1,	// (0x00080692) mup2_spec_bar_pane_ParamLimits

0xa2e1,	// (0x00080692) mup2_spec_bar_pane

0x1fc4,	// (0x00078375) mup2_spec_bar_pane_g1

0x1fce,	// (0x0007837f) mup2_spec_bar_pane_g2

0x0001,

0xf602,	// (0x000859b3) mup2_spec_bar_pane_g

0xa300,	// (0x000806b1) mup2_osc_middle_pane

0x1fe0,	// (0x00078391) mup2_visualizer_osc_pane_g1

0xe8b3,	// (0x00084c64) popup_number_entry_window_t1_ParamLimits

0xe8c6,	// (0x00084c77) popup_number_entry_window_t2_ParamLimits

0xe8d8,	// (0x00084c89) popup_number_entry_window_t3_ParamLimits

0x6abb,	// (0x0007ce6c) popup_number_entry_window_t5_ParamLimits

0x6abb,	// (0x0007ce6c) popup_number_entry_window_t5

0xf0c6,	// (0x00085477) popup_number_entry_window_t_ParamLimits

0xe8ea,	// (0x00084c9b) text_title_cp2_ParamLimits

0x91dd,	// (0x0007f58e) aid_hotspot_pointer_text2_pane

0x9277,	// (0x0007f628) main_viewer_pane_g9_ParamLimits

0x9277,	// (0x0007f628) main_viewer_pane_g9

0x0437,	// (0x000767e8) cale_month_pane_t1_ParamLimits

0x0474,	// (0x00076825) bg_cale_pane_ParamLimits

0x048c,	// (0x0007683d) list_cale_pane_ParamLimits

0x049d,	// (0x0007684e) listscroll_cale_day_pane_t1

0x04af,	// (0x00076860) scroll_pane_cp09_ParamLimits

0x8f9a,	// (0x0007f34b) main_mup_eq_pane_t1_ParamLimits

0x8f9a,	// (0x0007f34b) main_mup_eq_pane_t1

0x8fb4,	// (0x0007f365) main_mup_eq_pane_t2_ParamLimits

0x8fb4,	// (0x0007f365) main_mup_eq_pane_t2

0x8fce,	// (0x0007f37f) main_mup_eq_pane_t3_ParamLimits

0x8fce,	// (0x0007f37f) main_mup_eq_pane_t3

0x8fe6,	// (0x0007f397) main_mup_eq_pane_t4_ParamLimits

0x8fe6,	// (0x0007f397) main_mup_eq_pane_t4

0x8ffe,	// (0x0007f3af) main_mup_eq_pane_t5_ParamLimits

0x8ffe,	// (0x0007f3af) main_mup_eq_pane_t5

0x9016,	// (0x0007f3c7) main_mup_eq_pane_t6_ParamLimits

0x9016,	// (0x0007f3c7) main_mup_eq_pane_t6

0x902a,	// (0x0007f3db) main_mup_eq_pane_t7_ParamLimits

0x902a,	// (0x0007f3db) main_mup_eq_pane_t7

0x903e,	// (0x0007f3ef) main_mup_eq_pane_t8_ParamLimits

0x903e,	// (0x0007f3ef) main_mup_eq_pane_t8

0x9054,	// (0x0007f405) main_mup_eq_pane_t9_ParamLimits

0x9054,	// (0x0007f405) main_mup_eq_pane_t9

0x906c,	// (0x0007f41d) main_mup_eq_pane_t10_ParamLimits

0x906c,	// (0x0007f41d) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x00085802) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x00085802) main_mup_eq_pane_t

0x9129,	// (0x0007f4da) mup_equalizer_pane_cp5_ParamLimits

0x913f,	// (0x0007f4f0) mup_equalizer_pane_cp6_ParamLimits

0x9157,	// (0x0007f508) mup_equalizer_pane_cp7_ParamLimits

0xe889,	// (0x00084c3a) main_gallery_pane

0x1fe9,	// (0x0007839a) smil2_volume_pane

0x2010,	// (0x000783c1) smil_status_volume_pane_g1_ParamLimits

0x1ff1,	// (0x000783a2) smil_status_volume_pane_g2_ParamLimits

0x9be6,	// (0x0007ff97) smil_status_volume_pane_g3_ParamLimits

0xf607,	// (0x000859b8) smil_status_volume_pane_g_ParamLimits

0x2162,	// (0x00078513) bg_popup_window_pane_cp07_ParamLimits

0x2170,	// (0x00078521) blid_firmament_pane

0xa309,	// (0x000806ba) aid_size_cell_gallery_ParamLimits

0xa309,	// (0x000806ba) aid_size_cell_gallery

0xa317,	// (0x000806c8) grid_gallery_pane_ParamLimits

0xa317,	// (0x000806c8) grid_gallery_pane

0xa327,	// (0x000806d8) cell_gallery_pane_ParamLimits

0xa327,	// (0x000806d8) cell_gallery_pane

0x2293,	// (0x00078644) bg_cell_gallery_focus_pane_ParamLimits

0x2293,	// (0x00078644) bg_cell_gallery_focus_pane

0x22a5,	// (0x00078656) cell_gallery_pane_g1_ParamLimits

0x22a5,	// (0x00078656) cell_gallery_pane_g1

0xa375,	// (0x00080726) cell_gallery_pane_g2_ParamLimits

0xa375,	// (0x00080726) cell_gallery_pane_g2

0xa382,	// (0x00080733) cell_gallery_pane_g3_ParamLimits

0xa382,	// (0x00080733) cell_gallery_pane_g3

0x22b1,	// (0x00078662) cell_gallery_pane_g4_ParamLimits

0x22b1,	// (0x00078662) cell_gallery_pane_g4

0x0003,

0xf6b5,	// (0x00085a66) cell_gallery_pane_g_ParamLimits

0xf6b5,	// (0x00085a66) cell_gallery_pane_g

0x22bd,	// (0x0007866e) bg_cell_gallery_focus_pane_g1

0x22c5,	// (0x00078676) bg_cell_gallery_focus_pane_g2

0x22cd,	// (0x0007867e) bg_cell_gallery_focus_pane_g3

0x22d5,	// (0x00078686) bg_cell_gallery_focus_pane_g4

0x22dd,	// (0x0007868e) bg_cell_gallery_focus_pane_g5

0x22e5,	// (0x00078696) bg_cell_gallery_focus_pane_g6

0x22ed,	// (0x0007869e) bg_cell_gallery_focus_pane_g7

0x22f5,	// (0x000786a6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6be,	// (0x00085a6f) bg_cell_gallery_focus_pane_g

0x22fd,	// (0x000786ae) aid_firma_cardinal

0x2311,	// (0x000786c2) blid_firmament_pane_t1

0x2328,	// (0x000786d9) blid_firmament_pane_t2

0x233f,	// (0x000786f0) blid_firmament_pane_t3

0x2356,	// (0x00078707) blid_firmament_pane_t4

0x0003,

0xf6cf,	// (0x00085a80) blid_firmament_pane_t

0x236d,	// (0x0007871e) blid_sat_info_pane

0x237d,	// (0x0007872e) blid_sat_info_pane_g1

0x237d,	// (0x0007872e) blid_sat_info_pane_g2

0x0001,

0xf6d8,	// (0x00085a89) blid_sat_info_pane_g

0x2387,	// (0x00078738) blid_sat_info_pane_t1

0x2395,	// (0x00078746) smil2_volume_content_pane

0x239e,	// (0x0007874f) smil2_volume_pane_g1

0xf0b4,	// (0x00085465) smil2_volume_content_pane_g1

0x23a6,	// (0x00078757) smil2_volume_content_pane_g2

0x23af,	// (0x00078760) smil2_volume_content_pane_g3

0x23b8,	// (0x00078769) smil2_volume_content_pane_g4

0x23c1,	// (0x00078772) smil2_volume_content_pane_g5

0x23ca,	// (0x0007877b) smil2_volume_content_pane_g6

0x23d3,	// (0x00078784) smil2_volume_content_pane_g7

0x23dc,	// (0x0007878d) smil2_volume_content_pane_g8

0x23e5,	// (0x00078796) smil2_volume_content_pane_g9

0x23ee,	// (0x0007879f) smil2_volume_content_pane_g10

0x0009,

0xf6dd,	// (0x00085a8e) smil2_volume_content_pane_g

0x72a5,	// (0x0007d656) cale_week_day_heading_pane_t1_ParamLimits

0x72c0,	// (0x0007d671) cale_week_day_heading_pane_t2_ParamLimits

0x72db,	// (0x0007d68c) cale_week_day_heading_pane_t3_ParamLimits

0x72f6,	// (0x0007d6a7) cale_week_day_heading_pane_t4_ParamLimits

0x7311,	// (0x0007d6c2) cale_week_day_heading_pane_t5_ParamLimits

0x732c,	// (0x0007d6dd) cale_week_day_heading_pane_t6_ParamLimits

0x7347,	// (0x0007d6f8) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0008557e) cale_week_day_heading_pane_t_ParamLimits

0x00aa,	// (0x0007645b) bg_cale_side_pane_ParamLimits

0x7362,	// (0x0007d713) cale_week_time_pane_t1_ParamLimits

0x737c,	// (0x0007d72d) cale_week_time_pane_t2_ParamLimits

0x7396,	// (0x0007d747) cale_week_time_pane_t3_ParamLimits

0x73b0,	// (0x0007d761) cale_week_time_pane_t4_ParamLimits

0x73ca,	// (0x0007d77b) cale_week_time_pane_t5_ParamLimits

0x73e4,	// (0x0007d795) cale_week_time_pane_t6_ParamLimits

0x7402,	// (0x0007d7b3) cale_week_time_pane_t7_ParamLimits

0x7424,	// (0x0007d7d5) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0008558d) cale_week_time_pane_t_ParamLimits

0x7448,	// (0x0007d7f9) cell_cale_week_pane_g2_ParamLimits

0x00aa,	// (0x0007645b) bg_cale_side_pane_cp01_ParamLimits

0x86a7,	// (0x0007ea58) cale_month_week_pane_t1_ParamLimits

0x86c0,	// (0x0007ea71) cale_month_week_pane_t2_ParamLimits

0x86d9,	// (0x0007ea8a) cale_month_week_pane_t3_ParamLimits

0x86f2,	// (0x0007eaa3) cale_month_week_pane_t4_ParamLimits

0x870b,	// (0x0007eabc) cale_month_week_pane_t5_ParamLimits

0x872c,	// (0x0007eadd) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x00085662) cale_month_week_pane_t_ParamLimits

0x886f,	// (0x0007ec20) cell_cale_month_pane_g1_ParamLimits

0xe889,	// (0x00084c3a) main_cale_event_viewer_pane

0xe889,	// (0x00084c3a) listscroll_cale_event_viewer_pane

0x23f7,	// (0x000787a8) list_cale_ev_pane

0x23ff,	// (0x000787b0) scroll_pane_cp023

0x240b,	// (0x000787bc) field_cale_ev_pane_ParamLimits

0x240b,	// (0x000787bc) field_cale_ev_pane

0x2429,	// (0x000787da) field_cale_ev_content_pane_ParamLimits

0x2429,	// (0x000787da) field_cale_ev_content_pane

0x2435,	// (0x000787e6) field_cale_ev_pane_g1_ParamLimits

0x2435,	// (0x000787e6) field_cale_ev_pane_g1

0x2441,	// (0x000787f2) field_cale_ev_pane_g2_ParamLimits

0x2441,	// (0x000787f2) field_cale_ev_pane_g2

0x2459,	// (0x0007880a) field_cale_ev_pane_g3_ParamLimits

0x2459,	// (0x0007880a) field_cale_ev_pane_g3

0x0002,

0xf6f2,	// (0x00085aa3) field_cale_ev_pane_g_ParamLimits

0xf6f2,	// (0x00085aa3) field_cale_ev_pane_g

0x2471,	// (0x00078822) field_cale_ev_pane_t1_ParamLimits

0x2471,	// (0x00078822) field_cale_ev_pane_t1

0x2488,	// (0x00078839) field_cale_ev_content_pane_t1_ParamLimits

0x2488,	// (0x00078839) field_cale_ev_content_pane_t1

0x0cda,	// (0x0007708b) bg_button_pane_cp01

0x7036,	// (0x0007d3e7) listscroll_cale_week_pane_ParamLimits

0x0055,	// (0x00076406) popup_toolbar_window_cp01

0x007b,	// (0x0007642c) listscroll_cale_week_pane_t1_ParamLimits

0x7036,	// (0x0007d3e7) listscroll_cale_day_pane_ParamLimits

0x0055,	// (0x00076406) popup_toolbar_window_cp02

0x049d,	// (0x0007684e) listscroll_cale_day_pane_t1_ParamLimits

0x7036,	// (0x0007d3e7) main_cale_month_pane_ParamLimits

0x9ac5,	// (0x0007fe76) popup_toolbar_window_cp03_ParamLimits

0x9ac5,	// (0x0007fe76) popup_toolbar_window_cp03

0x93ff,	// (0x0007f7b0) main_image_pane_g2_ParamLimits

0x93ff,	// (0x0007f7b0) main_image_pane_g2

0x940b,	// (0x0007f7bc) main_image_pane_g3_ParamLimits

0x940b,	// (0x0007f7bc) main_image_pane_g3

0x0002,

0xf4e3,	// (0x00085894) main_image_pane_g_ParamLimits

0xf4e3,	// (0x00085894) main_image_pane_g

0x0df4,	// (0x000771a5) main_image_pane_t1_ParamLimits

0x9417,	// (0x0007f7c8) main_image_pane_t2_ParamLimits

0x9417,	// (0x0007f7c8) main_image_pane_t2

0x9429,	// (0x0007f7da) main_image_pane_t3_ParamLimits

0x9429,	// (0x0007f7da) main_image_pane_t3

0x943b,	// (0x0007f7ec) main_image_pane_t4_ParamLimits

0x943b,	// (0x0007f7ec) main_image_pane_t4

0x0003,

0xf4ea,	// (0x0008589b) main_image_pane_t_ParamLimits

0xf4ea,	// (0x0008589b) main_image_pane_t

0x944d,	// (0x0007f7fe) popup_image_details_window_cp01

0x9457,	// (0x0007f808) popup_toobar_trans_pane_cp01_ParamLimits

0x9457,	// (0x0007f808) popup_toobar_trans_pane_cp01

0x9a15,	// (0x0007fdc6) popup_image_details_window_ParamLimits

0x9a15,	// (0x0007fdc6) popup_image_details_window

0x9a23,	// (0x0007fdd4) popup_image_focus_window

0x9d65,	// (0x00080116) camera2_autofocus_pane_ParamLimits

0x9d65,	// (0x00080116) camera2_autofocus_pane

0xe889,	// (0x00084c3a) bg_popup_sub_pane_cp06

0x24a6,	// (0x00078857) popup_image_focus_window_g1

0x24ae,	// (0x0007885f) popup_image_focus_window_g2

0x24b6,	// (0x00078867) popup_image_focus_window_g3

0x24be,	// (0x0007886f) popup_image_focus_window_g4

0x0003,

0xf6f9,	// (0x00085aaa) popup_image_focus_window_g

0x24c6,	// (0x00078877) popup_image_focus_window_t1

0x24d4,	// (0x00078885) popup_image_focus_window_t2

0x24e4,	// (0x00078895) popup_image_focus_window_t3

0x0002,

0xf702,	// (0x00085ab3) popup_image_focus_window_t

0x24f2,	// (0x000788a3) camera2_autofocus_pane_g1

0xf0a6,	// (0x00085457) bg_tb_trans_pane_cp01

0x2500,	// (0x000788b1) popup_image_details_window_g1

0x2513,	// (0x000788c4) popup_image_details_window_g2

0x0002,

0xf714,	// (0x00085ac5) popup_image_details_window_g

0x253c,	// (0x000788ed) popup_image_details_window_t1

0x254e,	// (0x000788ff) popup_image_details_window_t2

0x2567,	// (0x00078918) popup_image_details_window_t3

0x257b,	// (0x0007892c) popup_image_details_window_t4

0x2596,	// (0x00078947) popup_image_details_window_t5

0x0004,

0xf71b,	// (0x00085acc) popup_image_details_window_t

0xefc9,	// (0x0008537a) bg_calc_paper_pane_ParamLimits

0xe889,	// (0x00084c3a) grid_highlight_pane_cp013

0x6dc5,	// (0x0007d176) list_calc_pane_ParamLimits

0x6dd7,	// (0x0007d188) scroll_pane_cp024

0xefdd,	// (0x0008538e) bg_calc_display_pane_ParamLimits

0x6ddf,	// (0x0007d190) calc_display_pane_t1_ParamLimits

0x6df4,	// (0x0007d1a5) calc_display_pane_t2_ParamLimits

0x6e09,	// (0x0007d1ba) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000854fe) calc_display_pane_t_ParamLimits

0x6ee2,	// (0x0007d293) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0008551b) cell_calc_pane_g

0x6eeb,	// (0x0007d29c) cell_calc_pane_t1

0xf03c,	// (0x000853ed) grid_highlight_pane_cp02_ParamLimits

0xf052,	// (0x00085403) toolbar_button_pane_cp01_ParamLimits

0xf052,	// (0x00085403) toolbar_button_pane_cp01

0x0e39,	// (0x000771ea) temp_image_control_pane_ParamLimits

0x0e39,	// (0x000771ea) temp_image_control_pane

0xf0a6,	// (0x00085457) main_mp3_pane

0x25b0,	// (0x00078961) temp_image_control_pane_g1_ParamLimits

0x25b0,	// (0x00078961) temp_image_control_pane_g1

0x25be,	// (0x0007896f) temp_image_control_pane_g2_ParamLimits

0x25be,	// (0x0007896f) temp_image_control_pane_g2

0x25d0,	// (0x00078981) temp_image_control_pane_g3_ParamLimits

0x25d0,	// (0x00078981) temp_image_control_pane_g3

0xa3bf,	// (0x00080770) temp_image_control_pane_g4_ParamLimits

0xa3bf,	// (0x00080770) temp_image_control_pane_g4

0x0003,

0xf726,	// (0x00085ad7) temp_image_control_pane_g_ParamLimits

0xf726,	// (0x00085ad7) temp_image_control_pane_g

0x25b0,	// (0x00078961) main_mp3_pane_g1

0xa3d0,	// (0x00080781) main_mp3_pane_g2

0x0007,

0xf72f,	// (0x00085ae0) main_mp3_pane_g

0x2613,	// (0x000789c4) main_mp3_pane_t1

0x010d,	// (0x000764be) main_camera_pane_g8_ParamLimits

0x010d,	// (0x000764be) main_camera_pane_g8

0x76d5,	// (0x0007da86) main_video_pane_g7_ParamLimits

0x76d5,	// (0x0007da86) main_video_pane_g7

0x9ead,	// (0x0008025e) main_camera2_pane_t7_ParamLimits

0x9ead,	// (0x0008025e) main_camera2_pane_t7

0x0255,	// (0x00076606) scroll_pane_cp025_ParamLimits

0x0255,	// (0x00076606) scroll_pane_cp025

0x0269,	// (0x0007661a) scroll_pane_cp026_ParamLimits

0x0269,	// (0x0007661a) scroll_pane_cp026

0x0278,	// (0x00076629) wml_content_pane_ParamLimits

0xe889,	// (0x00084c3a) main_touch_calib_pane

0xa474,	// (0x00080825) main_touch_calib_pane_g1

0xa480,	// (0x00080831) main_touch_calib_pane_g2

0xa48c,	// (0x0008083d) main_touch_calib_pane_g3

0xa498,	// (0x00080849) main_touch_calib_pane_g4

0x0003,

0xf74d,	// (0x00085afe) main_touch_calib_pane_g

0xa4a4,	// (0x00080855) main_touch_calib_pane_t1

0xa4bd,	// (0x0008086e) main_touch_calib_pane_t2

0x0004,

0xf756,	// (0x00085b07) main_touch_calib_pane_t

0x0a06,	// (0x00076db7) mup_progress_pane_cp02

0x0a3b,	// (0x00076dec) navi_pane_g1

0x0af6,	// (0x00076ea7) navi_pane_mp_t3

0xf0a6,	// (0x00085457) main_mp3_pane_ParamLimits

0x9b02,	// (0x0007feb3) navi_pane_ParamLimits

0x25b0,	// (0x00078961) main_mp3_pane_g1_ParamLimits

0xa3d0,	// (0x00080781) main_mp3_pane_g2_ParamLimits

0xa3dc,	// (0x0008078d) main_mp3_pane_g3_ParamLimits

0xa3dc,	// (0x0008078d) main_mp3_pane_g3

0xa3e8,	// (0x00080799) main_mp3_pane_g4_ParamLimits

0xa3e8,	// (0x00080799) main_mp3_pane_g4

0x25e0,	// (0x00078991) main_mp3_pane_g5_ParamLimits

0x25e0,	// (0x00078991) main_mp3_pane_g5

0x25ee,	// (0x0007899f) main_mp3_pane_g6_ParamLimits

0x25ee,	// (0x0007899f) main_mp3_pane_g6

0x25fb,	// (0x000789ac) main_mp3_pane_g7_ParamLimits

0x25fb,	// (0x000789ac) main_mp3_pane_g7

0x2607,	// (0x000789b8) main_mp3_pane_g8_ParamLimits

0x2607,	// (0x000789b8) main_mp3_pane_g8

0xf72f,	// (0x00085ae0) main_mp3_pane_g_ParamLimits

0xa3f4,	// (0x000807a5) main_mp3_pane_t2

0xa404,	// (0x000807b5) main_mp3_pane_t3

0x2621,	// (0x000789d2) main_mp3_pane_t4

0x262f,	// (0x000789e0) main_mp3_pane_t5

0x0005,

0xf740,	// (0x00085af1) main_mp3_pane_t

0x263d,	// (0x000789ee) mup_progress_pane_cp01

0x67ef,	// (0x0007cba0) aid_zoom_text_secondary2

0x23f7,	// (0x000787a8) list_cale_ev2_pane

0x23ff,	// (0x000787b0) scroll_pane_cp023_ParamLimits

0xa518,	// (0x000808c9) field_cale_ev2_pane_ParamLimits

0xa518,	// (0x000808c9) field_cale_ev2_pane

0xa541,	// (0x000808f2) field_cale_ev2_pane_g1_ParamLimits

0xa541,	// (0x000808f2) field_cale_ev2_pane_g1

0xa54d,	// (0x000808fe) field_cale_ev2_pane_g2_ParamLimits

0xa54d,	// (0x000808fe) field_cale_ev2_pane_g2

0xa565,	// (0x00080916) field_cale_ev2_pane_g3_ParamLimits

0xa565,	// (0x00080916) field_cale_ev2_pane_g3

0x0003,

0xf761,	// (0x00085b12) field_cale_ev2_pane_g_ParamLimits

0xf761,	// (0x00085b12) field_cale_ev2_pane_g

0x582a,	// (0x0007bbdb) field_cale_ev2_pane_t1_ParamLimits

0x582a,	// (0x0007bbdb) field_cale_ev2_pane_t1

0x5841,	// (0x0007bbf2) field_cale_ev2_pane_t2_ParamLimits

0x5841,	// (0x0007bbf2) field_cale_ev2_pane_t2

0x0001,

0xf76a,	// (0x00085b1b) field_cale_ev2_pane_t_ParamLimits

0xf76a,	// (0x00085b1b) field_cale_ev2_pane_t

0x92df,	// (0x0007f690) main_postcard_pane_g5_ParamLimits

0x92df,	// (0x0007f690) main_postcard_pane_g5

0x92ed,	// (0x0007f69e) main_postcard_pane_g6_ParamLimits

0x92ed,	// (0x0007f69e) main_postcard_pane_g6

0x751f,	// (0x0007d8d0) camera2_autofocus_pane_cp_ParamLimits

0x751f,	// (0x0007d8d0) camera2_autofocus_pane_cp

0xf0a6,	// (0x00085457) main_mup3_pane

0xa5a8,	// (0x00080959) main_mup3_pane_g1_ParamLimits

0xa5a8,	// (0x00080959) main_mup3_pane_g1

0xa5c9,	// (0x0008097a) main_mup3_pane_g2_ParamLimits

0xa5c9,	// (0x0008097a) main_mup3_pane_g2

0xa641,	// (0x000809f2) main_mup3_pane_g3_ParamLimits

0xa641,	// (0x000809f2) main_mup3_pane_g3

0xa684,	// (0x00080a35) main_mup3_pane_g4_ParamLimits

0xa684,	// (0x00080a35) main_mup3_pane_g4

0xa6c7,	// (0x00080a78) main_mup3_pane_g5_ParamLimits

0xa6c7,	// (0x00080a78) main_mup3_pane_g5

0xa70a,	// (0x00080abb) main_mup3_pane_g6_ParamLimits

0xa70a,	// (0x00080abb) main_mup3_pane_g6

0x2665,	// (0x00078a16) main_mup3_pane_g7_ParamLimits

0x2665,	// (0x00078a16) main_mup3_pane_g7

0x0007,

0xf77a,	// (0x00085b2b) main_mup3_pane_g_ParamLimits

0xf77a,	// (0x00085b2b) main_mup3_pane_g

0xa780,	// (0x00080b31) main_mup3_pane_t1_ParamLimits

0xa780,	// (0x00080b31) main_mup3_pane_t1

0xa7ef,	// (0x00080ba0) main_mup3_pane_t2_ParamLimits

0xa7ef,	// (0x00080ba0) main_mup3_pane_t2

0xa8b8,	// (0x00080c69) main_mup3_pane_t4_ParamLimits

0xa8b8,	// (0x00080c69) main_mup3_pane_t4

0xa906,	// (0x00080cb7) main_mup3_pane_t5_ParamLimits

0xa906,	// (0x00080cb7) main_mup3_pane_t5

0xa9b6,	// (0x00080d67) main_mup3_pane_t6_ParamLimits

0xa9b6,	// (0x00080d67) main_mup3_pane_t6

0x0005,

0xf78b,	// (0x00085b3c) main_mup3_pane_t_ParamLimits

0xf78b,	// (0x00085b3c) main_mup3_pane_t

0xaa62,	// (0x00080e13) mup3_progress_pane_ParamLimits

0xaa62,	// (0x00080e13) mup3_progress_pane

0xaae0,	// (0x00080e91) popup_mup3_control_window_ParamLimits

0xaae0,	// (0x00080e91) popup_mup3_control_window

0x2673,	// (0x00078a24) popup_mup3_text_window

0xaaf9,	// (0x00080eaa) mup3_progress_pane_t1

0xab18,	// (0x00080ec9) mup3_progress_pane_t2

0x267b,	// (0x00078a2c) mup3_progress_pane_t3

0x0002,

0xf798,	// (0x00085b49) mup3_progress_pane_t

0x2698,	// (0x00078a49) mup_progress_pane_cp03

0xe889,	// (0x00084c3a) bg_tb_trans_pane_cp04

0xab37,	// (0x00080ee8) mup3_volume_pane

0xab3f,	// (0x00080ef0) popup_mup3_control_window_g1

0xab48,	// (0x00080ef9) mup3_volume_pane_g1

0xab51,	// (0x00080f02) mup3_volume_pane_g2

0xab5a,	// (0x00080f0b) mup3_volume_pane_g3

0x0002,

0xf79f,	// (0x00085b50) mup3_volume_pane_g

0xe889,	// (0x00084c3a) bg_tb_trans_pane_cp03

0x26a8,	// (0x00078a59) popup_mup3_text_window_g1

0x26b0,	// (0x00078a61) popup_mup3_text_window_t1

0xf025,	// (0x000853d6) list_calc_item_pane_g1_ParamLimits

0x20d0,	// (0x00078481) mup_volume_pane_cp_g1

0xa4d6,	// (0x00080887) main_touch_calib_pane_t3

0xa4ec,	// (0x0008089d) main_touch_calib_pane_t4

0xa502,	// (0x000808b3) main_touch_calib_pane_t5

0x67a7,	// (0x0007cb58) aid_cell_size_toolbar2

0x67af,	// (0x0007cb60) aid_popup3_width_pane

0x5536,	// (0x0007b8e7) aid_zoom_text_msg_primary

0x74f4,	// (0x0007d8a5) vorec_t7

0xefe9,	// (0x0008539a) bg_calc_paper_pane_g1_ParamLimits

0xeff5,	// (0x000853a6) bg_calc_paper_pane_g2_ParamLimits

0xf001,	// (0x000853b2) bg_calc_paper_pane_g3_ParamLimits

0xf00d,	// (0x000853be) bg_calc_paper_pane_g4_ParamLimits

0xf019,	// (0x000853ca) bg_calc_paper_pane_g5_ParamLimits

0x6e48,	// (0x0007d1f9) bg_calc_paper_pane_g6_ParamLimits

0x6e59,	// (0x0007d20a) bg_calc_paper_pane_g7_ParamLimits

0x6e6a,	// (0x0007d21b) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x00085505) bg_calc_paper_pane_g_ParamLimits

0x6e7b,	// (0x0007d22c) calc_bg_paper_pane_g9_ParamLimits

0x7606,	// (0x0007d9b7) image_qvga_pane_ParamLimits

0x7606,	// (0x0007d9b7) image_qvga_pane

0xef18,	// (0x000852c9) bg_popup_sub_pane_cp04_ParamLimits

0x0d70,	// (0x00077121) popup_mup_playback_window_g1_ParamLimits

0x0d7c,	// (0x0007712d) popup_mup_playback_window_t1_ParamLimits

0x0d91,	// (0x00077142) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x0008588f) popup_mup_playback_window_t_ParamLimits

0x9fdc,	// (0x0008038d) main_mup2_pane_g3_ParamLimits

0x9fdc,	// (0x0008038d) main_mup2_pane_g3

0x78d6,	// (0x0007dc87) popup_toolbar_window_cp04

0x1173,	// (0x00077524) popup_call2_audio_second_window_g3_ParamLimits

0x1173,	// (0x00077524) popup_call2_audio_second_window_g3

0x157d,	// (0x0007792e) popup_call2_audio_first_window_g4_ParamLimits

0x157d,	// (0x0007792e) popup_call2_audio_first_window_g4

0x1bfc,	// (0x00077fad) popup_call2_audio_in_window_g4_ParamLimits

0x1bfc,	// (0x00077fad) popup_call2_audio_in_window_g4

0x93f2,	// (0x0007f7a3) aid_area_sk_bg_cut_ParamLimits

0x93f2,	// (0x0007f7a3) aid_area_sk_bg_cut

0x0da6,	// (0x00077157) aid_area_sk_bg_cut_2_ParamLimits

0x0da6,	// (0x00077157) aid_area_sk_bg_cut_2

0xa365,	// (0x00080716) aid_placing_details_win

0xa36d,	// (0x0008071e) aid_placing_details_win_2

0x24f2,	// (0x000788a3) camera2_autofocus_pane_g1_ParamLimits

0x69fe,	// (0x0007cdaf) popup_fixed_preview_cale_window_ParamLimits

0x69fe,	// (0x0007cdaf) popup_fixed_preview_cale_window

0x0b86,	// (0x00076f37) navi_slider_pane_g3

0x0b7d,	// (0x00076f2e) navi_slider_pane_g4

0x0b74,	// (0x00076f25) navi_slider_pane_g5

0x0b86,	// (0x00076f37) navi_slider_pane_g6

0x8d2e,	// (0x0007f0df) navi_slider_pane_g7

0x0ca7,	// (0x00077058) mup_scale_pane_g3

0x0cb0,	// (0x00077061) mup_scale_pane_g4

0x0cb9,	// (0x0007706a) mup_scale_pane_g5

0x916f,	// (0x0007f520) mup_scale_pane_g6

0x9178,	// (0x0007f529) mup_scale_pane_g7

0x0b86,	// (0x00076f37) cams2_slider_pane_g3

0x2152,	// (0x00078503) cams2_slider_pane_g4

0xa2bd,	// (0x0008066e) cams2_slider_pane_g5

0x0b86,	// (0x00076f37) cams2_slider_pane_g6

0xa2c5,	// (0x00080676) cams2_slider_pane_g7

0x237d,	// (0x0007872e) camera2_autofocus_pane_cp_g1

0x1f5d,	// (0x0007830e) bg_popup_preview_window_pane_cp02_ParamLimits

0x1f5d,	// (0x0007830e) bg_popup_preview_window_pane_cp02

0x26be,	// (0x00078a6f) list_fp_cale_pane_ParamLimits

0x26be,	// (0x00078a6f) list_fp_cale_pane

0x26ca,	// (0x00078a7b) popup_fixed_preview_cale_window_t1_ParamLimits

0x26ca,	// (0x00078a7b) popup_fixed_preview_cale_window_t1

0xab63,	// (0x00080f14) popup_fixed_preview_cale_window_t2_ParamLimits

0xab63,	// (0x00080f14) popup_fixed_preview_cale_window_t2

0xab78,	// (0x00080f29) popup_fixed_preview_cale_window_t3_ParamLimits

0xab78,	// (0x00080f29) popup_fixed_preview_cale_window_t3

0x0002,

0xf7a6,	// (0x00085b57) popup_fixed_preview_cale_window_t_ParamLimits

0xf7a6,	// (0x00085b57) popup_fixed_preview_cale_window_t

0xab8d,	// (0x00080f3e) list_single_fp_cale_pane_ParamLimits

0xab8d,	// (0x00080f3e) list_single_fp_cale_pane

0x26e8,	// (0x00078a99) list_single_fp_cale_pane_g1_ParamLimits

0x26e8,	// (0x00078a99) list_single_fp_cale_pane_g1

0x26f4,	// (0x00078aa5) list_single_fp_cale_pane_g2_ParamLimits

0x26f4,	// (0x00078aa5) list_single_fp_cale_pane_g2

0x0002,

0xf7ad,	// (0x00085b5e) list_single_fp_cale_pane_g_ParamLimits

0xf7ad,	// (0x00085b5e) list_single_fp_cale_pane_g

0x270d,	// (0x00078abe) list_single_fp_cale_pane_t1_ParamLimits

0x270d,	// (0x00078abe) list_single_fp_cale_pane_t1

0x271f,	// (0x00078ad0) list_single_fp_cale_pane_t2_ParamLimits

0x271f,	// (0x00078ad0) list_single_fp_cale_pane_t2

0x0001,

0xf7b4,	// (0x00085b65) list_single_fp_cale_pane_t_ParamLimits

0xf7b4,	// (0x00085b65) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe889,	// (0x00084c3a) main_dialer_pane

0xaba0,	// (0x00080f51) aid_cell_size_keypad

0xabaa,	// (0x00080f5b) dialer_ne_pane

0xabb4,	// (0x00080f65) grid_dialer_command_1_pane

0xabbc,	// (0x00080f6d) grid_dialer_command_2_pane

0xabc4,	// (0x00080f75) grid_dialer_keypad_pane

0xabd6,	// (0x00080f87) bg_popup_call_pane_cp06_ParamLimits

0xabd6,	// (0x00080f87) bg_popup_call_pane_cp06

0xabe2,	// (0x00080f93) dialer_ne_clear_pane_ParamLimits

0xabe2,	// (0x00080f93) dialer_ne_clear_pane

0x2752,	// (0x00078b03) dialer_ne_pane_g1

0x275a,	// (0x00078b0b) dialer_ne_pane_t1_ParamLimits

0x275a,	// (0x00078b0b) dialer_ne_pane_t1

0xabee,	// (0x00080f9f) dialer_ne_pane_t2_ParamLimits

0xabee,	// (0x00080f9f) dialer_ne_pane_t2

0xac0b,	// (0x00080fbc) dialer_ne_pane_t3_ParamLimits

0xac0b,	// (0x00080fbc) dialer_ne_pane_t3

0x0002,

0xf7b9,	// (0x00085b6a) dialer_ne_pane_t_ParamLimits

0xf7b9,	// (0x00085b6a) dialer_ne_pane_t

0xac2f,	// (0x00080fe0) dialer_ne_pane_t3_copy1_ParamLimits

0xac2f,	// (0x00080fe0) dialer_ne_pane_t3_copy1

0xac53,	// (0x00081004) cell_dialer_keypad_pane_ParamLimits

0xac53,	// (0x00081004) cell_dialer_keypad_pane

0xac6a,	// (0x0008101b) cell_dialer_command_1_pane_ParamLimits

0xac6a,	// (0x0008101b) cell_dialer_command_1_pane

0xac80,	// (0x00081031) cell_dialer_command_2_pane_ParamLimits

0xac80,	// (0x00081031) cell_dialer_command_2_pane

0x276c,	// (0x00078b1d) bg_button_pane_cp02_ParamLimits

0x276c,	// (0x00078b1d) bg_button_pane_cp02

0xac8f,	// (0x00081040) cell_dialer_keypad_pane_g1_ParamLimits

0xac8f,	// (0x00081040) cell_dialer_keypad_pane_g1

0x276c,	// (0x00078b1d) bg_button_pane_cp03_ParamLimits

0x276c,	// (0x00078b1d) bg_button_pane_cp03

0xaca4,	// (0x00081055) cell_dialer_command_1_pane_g1_ParamLimits

0xaca4,	// (0x00081055) cell_dialer_command_1_pane_g1

0x2778,	// (0x00078b29) bg_button_pane_cp04

0xacb8,	// (0x00081069) cell_dialer_command_2_pane_g1

0x0105,	// (0x000764b6) bg_button_pane_cp06

0x2780,	// (0x00078b31) dialer_ne_clear_pane_g1

0x0a47,	// (0x00076df8) navi_pane_g2

0x0a75,	// (0x00076e26) navi_pane_g3

0x0002,

0xf3e1,	// (0x00085792) navi_pane_g

0x0b04,	// (0x00076eb5) navi_pane_mv_g2

0x0b2b,	// (0x00076edc) navi_pane_mv_g5

0x8cf9,	// (0x0007f0aa) navi_pane_mv_t1

0xefdd,	// (0x0008538e) main_clock2_pane

0x3f86,	// (0x0007a337) main_clock2_list_pane_ParamLimits

0x3f86,	// (0x0007a337) main_clock2_list_pane

0xad14,	// (0x000810c5) main_clock2_pane_t1_ParamLimits

0xad14,	// (0x000810c5) main_clock2_pane_t1

0xad42,	// (0x000810f3) main_clock2_pane_t2_ParamLimits

0xad42,	// (0x000810f3) main_clock2_pane_t2

0x0004,

0xf7c5,	// (0x00085b76) main_clock2_pane_t_ParamLimits

0xf7c5,	// (0x00085b76) main_clock2_pane_t

0xada7,	// (0x00081158) popup_clock_analogue_window_cp03_ParamLimits

0xada7,	// (0x00081158) popup_clock_analogue_window_cp03

0xadc5,	// (0x00081176) popup_clock_digital_window_cp02_ParamLimits

0xadc5,	// (0x00081176) popup_clock_digital_window_cp02

0xae3a,	// (0x000811eb) main_clock2_list_single_pane_ParamLimits

0xae3a,	// (0x000811eb) main_clock2_list_single_pane

0x0105,	// (0x000764b6) list_highlight_pane_cp05

0x27be,	// (0x00078b6f) main_clock2_list_single_pane_t1

0x78d6,	// (0x0007dc87) popup_toolbar_window_cp04_ParamLimits

0xa38f,	// (0x00080740) camera2_autofocus_pane_g2_ParamLimits

0xa38f,	// (0x00080740) camera2_autofocus_pane_g2

0xa39b,	// (0x0008074c) camera2_autofocus_pane_g3_ParamLimits

0xa39b,	// (0x0008074c) camera2_autofocus_pane_g3

0xa3a7,	// (0x00080758) camera2_autofocus_pane_g4_ParamLimits

0xa3a7,	// (0x00080758) camera2_autofocus_pane_g4

0xa3b3,	// (0x00080764) camera2_autofocus_pane_g5_ParamLimits

0xa3b3,	// (0x00080764) camera2_autofocus_pane_g5

0x0004,

0xf709,	// (0x00085aba) camera2_autofocus_pane_g_ParamLimits

0xf709,	// (0x00085aba) camera2_autofocus_pane_g

0x2645,	// (0x000789f6) camera2_autofocus_pane_cp_g2

0x264d,	// (0x000789fe) camera2_autofocus_pane_cp_g3

0x2655,	// (0x00078a06) camera2_autofocus_pane_cp_g4

0x265d,	// (0x00078a0e) camera2_autofocus_pane_cp_g5

0x0004,

0xf76f,	// (0x00085b20) camera2_autofocus_pane_cp_g

0xabce,	// (0x00080f7f) popup_dialer_spcha_window

0xe889,	// (0x00084c3a) bg_popup_sub_pane_cp07

0x27cc,	// (0x00078b7d) list_spcha_pane

0x27d4,	// (0x00078b85) list_single_spcha_pane_ParamLimits

0x27d4,	// (0x00078b85) list_single_spcha_pane

0xe889,	// (0x00084c3a) list_highlight_pane_cp06

0x27e5,	// (0x00078b96) list_single_spcha_pane_t1

0x19a6,	// (0x00077d57) popup_call2_audio_out_window_g4_ParamLimits

0x19a6,	// (0x00077d57) popup_call2_audio_out_window_g4

0xe889,	// (0x00084c3a) main_imed2_pane

0x9a2b,	// (0x0007fddc) popup_imed_adjust2_window

0x9a3e,	// (0x0007fdef) popup_imed_trans_window_ParamLimits

0x9a3e,	// (0x0007fdef) popup_imed_trans_window

0x21bb,	// (0x0007856c) popup_blid_sat_info2_window_t1

0x21c9,	// (0x0007857a) popup_blid_sat_info2_window_t2

0x000a,

0xf69e,	// (0x00085a4f) popup_blid_sat_info2_window_t

0xaeef,	// (0x000812a0) aid_size_cell_colour_35

0xaf09,	// (0x000812ba) aid_size_cell_colour_112

0xaf20,	// (0x000812d1) aid_size_cell_effect

0xf0a6,	// (0x00085457) bg_tb_trans_pane_cp02

0x064d,	// (0x000769fe) heading_imed_pane

0xaf3a,	// (0x000812eb) listscroll_imed_pane

0x27f3,	// (0x00078ba4) heading_imed_pane_g1

0x27fb,	// (0x00078bac) heading_imed_pane_t1

0x2809,	// (0x00078bba) grid_imed_colour_35_pane_ParamLimits

0x2809,	// (0x00078bba) grid_imed_colour_35_pane

0xaf46,	// (0x000812f7) grid_imed_effect_pane

0x2820,	// (0x00078bd1) list_imed_aspect_pane

0xaf56,	// (0x00081307) scroll_pane_cp027_ParamLimits

0xaf56,	// (0x00081307) scroll_pane_cp027

0xaf62,	// (0x00081313) cell_imed_effect_pane_ParamLimits

0xaf62,	// (0x00081313) cell_imed_effect_pane

0x2828,	// (0x00078bd9) cell_imed_colour_pane_ParamLimits

0x2828,	// (0x00078bd9) cell_imed_colour_pane

0x286a,	// (0x00078c1b) cell_imed_colour_pane_g1_ParamLimits

0x286a,	// (0x00078c1b) cell_imed_colour_pane_g1

0x287b,	// (0x00078c2c) hgihlgiht_grid_pane_cp016_ParamLimits

0x287b,	// (0x00078c2c) hgihlgiht_grid_pane_cp016

0xaf7a,	// (0x0008132b) cell_imed_effect_pane_g1

0xaf82,	// (0x00081333) grid_highlight_pane_cp017

0x288c,	// (0x00078c3d) list_imed_single_pane_ParamLimits

0x288c,	// (0x00078c3d) list_imed_single_pane

0xe889,	// (0x00084c3a) list_highlight_pane_cp07

0x28a1,	// (0x00078c52) list_imed_aspect_pane_comp1_t1

0x1f69,	// (0x0007831a) bg_tb_trans_pane_cp05

0x28c3,	// (0x00078c74) popup_imed_adjust2_window_g1

0x28ea,	// (0x00078c9b) popup_imed_adjust2_window_t1

0x2902,	// (0x00078cb3) slider_imed_adjust_pane

0x2916,	// (0x00078cc7) slider_imed_adjust_pane_g1

0x2926,	// (0x00078cd7) slider_imed_adjust_pane_g2

0x2936,	// (0x00078ce7) slider_imed_adjust_pane_g3

0x2947,	// (0x00078cf8) slider_imed_adjust_pane_g4

0x0003,

0xf7e2,	// (0x00085b93) slider_imed_adjust_pane_g

0xaf8b,	// (0x0008133c) aid_size_cell_clipart2

0xaf97,	// (0x00081348) grid_imed_clipart_pane

0x2958,	// (0x00078d09) scroll_pane_cp031

0xafa1,	// (0x00081352) cell_imed_clipart_pane_ParamLimits

0xafa1,	// (0x00081352) cell_imed_clipart_pane

0xafc3,	// (0x00081374) cell_imed_clipart_pane_g1

0xe889,	// (0x00084c3a) grid_highlight_pane_cp014

0xacf6,	// (0x000810a7) main_clock2_pane_g1_ParamLimits

0xacf6,	// (0x000810a7) main_clock2_pane_g1

0xade1,	// (0x00081192) aid_call2_pane_cp10

0xadf3,	// (0x000811a4) aid_call_pane_cp10

0x09a8,	// (0x00076d59) popup_clock_analogue_window_cp10_g1

0x09a8,	// (0x00076d59) popup_clock_analogue_window_cp10_g2

0xae05,	// (0x000811b6) popup_clock_analogue_window_cp10_g3

0xae05,	// (0x000811b6) popup_clock_analogue_window_cp10_g4

0x09a8,	// (0x00076d59) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d0,	// (0x00085b81) popup_clock_analogue_window_cp10_g

0xae1b,	// (0x000811cc) popup_clock_analogue_window_cp10_t1

0xae4c,	// (0x000811fd) clock_digital_number_pane_cp10_ParamLimits

0xae4c,	// (0x000811fd) clock_digital_number_pane_cp10

0xae66,	// (0x00081217) clock_digital_number_pane_cp11_ParamLimits

0xae66,	// (0x00081217) clock_digital_number_pane_cp11

0xae80,	// (0x00081231) clock_digital_number_pane_cp12_ParamLimits

0xae80,	// (0x00081231) clock_digital_number_pane_cp12

0xae9a,	// (0x0008124b) clock_digital_number_pane_cp13_ParamLimits

0xae9a,	// (0x0008124b) clock_digital_number_pane_cp13

0xaeb4,	// (0x00081265) clock_digital_separator_pane_cp10_ParamLimits

0xaeb4,	// (0x00081265) clock_digital_separator_pane_cp10

0xaece,	// (0x0008127f) popup_clock_digital_window_cp02_t1_ParamLimits

0xaece,	// (0x0008127f) popup_clock_digital_window_cp02_t1

0xef10,	// (0x000852c1) clock_digital_number_pane_cp10_g1

0xef10,	// (0x000852c1) clock_digital_number_pane_cp10_g2

0x0001,

0xf7eb,	// (0x00085b9c) clock_digital_number_pane_cp10_g

0xef10,	// (0x000852c1) clock_digital_separator_pane_cp10_g1

0xef10,	// (0x000852c1) clock_digital_separator_pane_g2_cp10

0x0b33,	// (0x00076ee4) navi_pane_vded_g4

0x0b3c,	// (0x00076eed) navi_pane_vded_g5

0x0b45,	// (0x00076ef6) navi_pane_vded_t1

0xe889,	// (0x00084c3a) main_vded_pane

0xafcc,	// (0x0008137d) main_vded_pane_g1

0xafd8,	// (0x00081389) main_vded_pane_g2

0xafe2,	// (0x00081393) main_vded_pane_g3

0x0002,

0xf7f0,	// (0x00085ba1) main_vded_pane_g

0xafec,	// (0x0008139d) main_vded_pane_t1

0xaffa,	// (0x000813ab) main_vded_pane_t2

0x0001,

0xf7f7,	// (0x00085ba8) main_vded_pane_t

0xb008,	// (0x000813b9) vded_slider_pane

0xb012,	// (0x000813c3) vded_video_pane

0x2960,	// (0x00078d11) vded_video_pane_g1

0xb01c,	// (0x000813cd) vded_video_pane_g2

0x237d,	// (0x0007872e) vded_video_pane_g3

0x0002,

0xf7fc,	// (0x00085bad) vded_video_pane_g

0x296a,	// (0x00078d1b) vded_slider_pane_g1

0x20d0,	// (0x00078481) vded_slider_pane_g2

0x2973,	// (0x00078d24) vded_slider_pane_g3

0x297c,	// (0x00078d2d) vded_slider_pane_g4

0x2985,	// (0x00078d36) vded_slider_pane_g5

0x0004,

0xf803,	// (0x00085bb4) vded_slider_pane_g

0xaad2,	// (0x00080e83) mup3_rocker_pane_ParamLimits

0xaad2,	// (0x00080e83) mup3_rocker_pane

0xb025,	// (0x000813d6) mup3_control_keys_pane_g1

0xb02d,	// (0x000813de) mup3_control_keys_pane_g2

0xb035,	// (0x000813e6) mup3_control_keys_pane_g3

0xb03d,	// (0x000813ee) mup3_control_keys_pane_g4

0x0003,

0xf80e,	// (0x00085bbf) mup3_control_keys_pane_g

0x6a26,	// (0x0007cdd7) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6a26,	// (0x0007cdd7) popup_toolbar2_fixed_window_cp01

0xaaec,	// (0x00080e9d) popup_toolbar2_fixed_window_cp02_ParamLimits

0xaaec,	// (0x00080e9d) popup_toolbar2_fixed_window_cp02

0x12e5,	// (0x00077696) popup_call2_audio_second_window_t4_ParamLimits

0x12e5,	// (0x00077696) popup_call2_audio_second_window_t4

0x1813,	// (0x00077bc4) popup_call2_audio_first_window_t6_ParamLimits

0x1813,	// (0x00077bc4) popup_call2_audio_first_window_t6

0x1aa9,	// (0x00077e5a) popup_call2_audio_out_window_t6_ParamLimits

0x1aa9,	// (0x00077e5a) popup_call2_audio_out_window_t6

0xe889,	// (0x00084c3a) main_vitu_pane

0xb04d,	// (0x000813fe) aid_size_cell_itu_ParamLimits

0xb04d,	// (0x000813fe) aid_size_cell_itu

0x3f86,	// (0x0007a337) bg_popup_window_pane_cp08_ParamLimits

0x3f86,	// (0x0007a337) bg_popup_window_pane_cp08

0xb05b,	// (0x0008140c) field_vitu_entry_pane_ParamLimits

0xb05b,	// (0x0008140c) field_vitu_entry_pane

0xb06a,	// (0x0008141b) grid_vitu_function_pane_ParamLimits

0xb06a,	// (0x0008141b) grid_vitu_function_pane

0xb07a,	// (0x0008142b) grid_vitu_itu_pane_ParamLimits

0xb07a,	// (0x0008142b) grid_vitu_itu_pane

0xb08a,	// (0x0008143b) cell_vitu_itu_pane_ParamLimits

0xb08a,	// (0x0008143b) cell_vitu_itu_pane

0xb09f,	// (0x00081450) cell_vitu_function_pane_ParamLimits

0xb09f,	// (0x00081450) cell_vitu_function_pane

0xf0a6,	// (0x00085457) bg_popup_sub_pane_cp08_ParamLimits

0xf0a6,	// (0x00085457) bg_popup_sub_pane_cp08

0xb0b1,	// (0x00081462) field_vitu_entry_pane_t1_ParamLimits

0xb0b1,	// (0x00081462) field_vitu_entry_pane_t1

0x29a6,	// (0x00078d57) field_vitu_entry_pane_t2_ParamLimits

0x29a6,	// (0x00078d57) field_vitu_entry_pane_t2

0x0001,

0xf81c,	// (0x00085bcd) field_vitu_entry_pane_t_ParamLimits

0xf81c,	// (0x00085bcd) field_vitu_entry_pane_t

0x29c3,	// (0x00078d74) bg_button_pane_cp05_ParamLimits

0x29c3,	// (0x00078d74) bg_button_pane_cp05

0xb0cd,	// (0x0008147e) cell_vitu_itu_pane_g1

0xb0e5,	// (0x00081496) cell_vitu_itu_pane_t1_ParamLimits

0xb0e5,	// (0x00081496) cell_vitu_itu_pane_t1

0xb0f7,	// (0x000814a8) cell_vitu_itu_pane_t2_ParamLimits

0xb0f7,	// (0x000814a8) cell_vitu_itu_pane_t2

0x0002,

0xf821,	// (0x00085bd2) cell_vitu_itu_pane_t_ParamLimits

0xf821,	// (0x00085bd2) cell_vitu_itu_pane_t

0x29d1,	// (0x00078d82) bg_button_pane_cp07

0xb12c,	// (0x000814dd) cell_vitu_function_pane_g1

0x6cec,	// (0x0007d09d) main_calc_pane_g1

0x67e3,	// (0x0007cb94) aid_visual_content_pane

0xe889,	// (0x00084c3a) main_vradio_pane

0xb135,	// (0x000814e6) main_vradio_pane_g1_ParamLimits

0xb135,	// (0x000814e6) main_vradio_pane_g1

0x29db,	// (0x00078d8c) main_vradio_pane_g2_ParamLimits

0x29db,	// (0x00078d8c) main_vradio_pane_g2

0x0001,

0xf828,	// (0x00085bd9) main_vradio_pane_g_ParamLimits

0xf828,	// (0x00085bd9) main_vradio_pane_g

0xb145,	// (0x000814f6) main_vradio_pane_t1_ParamLimits

0xb145,	// (0x000814f6) main_vradio_pane_t1

0xb157,	// (0x00081508) main_vradio_pane_t2_ParamLimits

0xb157,	// (0x00081508) main_vradio_pane_t2

0x29e8,	// (0x00078d99) main_vradio_pane_t3_ParamLimits

0x29e8,	// (0x00078d99) main_vradio_pane_t3

0x0002,

0xf82d,	// (0x00085bde) main_vradio_pane_t_ParamLimits

0xf82d,	// (0x00085bde) main_vradio_pane_t

0xb169,	// (0x0008151a) vradio_rocker_control_pane_ParamLimits

0xb169,	// (0x0008151a) vradio_rocker_control_pane

0xb175,	// (0x00081526) vradio_station_info_pane_ParamLimits

0xb175,	// (0x00081526) vradio_station_info_pane

0x29fc,	// (0x00078dad) vradio_frequency_info_pane_ParamLimits

0x29fc,	// (0x00078dad) vradio_frequency_info_pane

0x237d,	// (0x0007872e) vradio_station_info_pane_g1

0x2a0b,	// (0x00078dbc) vradio_station_info_pane_t1_ParamLimits

0x2a0b,	// (0x00078dbc) vradio_station_info_pane_t1

0x2a2d,	// (0x00078dde) vradio_station_info_pane_t2_ParamLimits

0x2a2d,	// (0x00078dde) vradio_station_info_pane_t2

0x0001,

0xf834,	// (0x00085be5) vradio_station_info_pane_t_ParamLimits

0xf834,	// (0x00085be5) vradio_station_info_pane_t

0x2a3f,	// (0x00078df0) vradio_tuning_pane

0x2a47,	// (0x00078df8) vradio_rocker_control_pane_g1

0x2a4f,	// (0x00078e00) vradio_rocker_control_pane_g2

0x2a57,	// (0x00078e08) vradio_rocker_control_pane_g3

0x2a5f,	// (0x00078e10) vradio_rocker_control_pane_g4

0x2a67,	// (0x00078e18) vradio_rocker_control_pane_g5

0x0004,

0xf839,	// (0x00085bea) vradio_rocker_control_pane_g

0xb184,	// (0x00081535) vradio_frequency_info_pane_g1

0x2a6f,	// (0x00078e20) vradio_frequency_info_pane_t1_ParamLimits

0x2a6f,	// (0x00078e20) vradio_frequency_info_pane_t1

0xb18e,	// (0x0008153f) vradio_tuning_pane_g1

0xb197,	// (0x00081548) vradio_tuning_pane_t1

0x682c,	// (0x0007cbdd) area_side_right_pane_ParamLimits

0x682c,	// (0x0007cbdd) area_side_right_pane

0x1f24,	// (0x000782d5) status_small_pane_g1

0x1f2c,	// (0x000782dd) status_small_pane_g2

0x1f35,	// (0x000782e6) status_small_pane_g3

0x1f3e,	// (0x000782ef) status_small_pane_g4

0x0003,

0xf5f4,	// (0x000859a5) status_small_pane_g

0x1f47,	// (0x000782f8) status_small_pane_t1

0xe889,	// (0x00084c3a) main_video3_pane

0x2a83,	// (0x00078e34) cams_zoom_vslider_pane

0x2a93,	// (0x00078e44) image3_wide_pane_ParamLimits

0x2a93,	// (0x00078e44) image3_wide_pane

0x2aad,	// (0x00078e5e) image3_wide_small_pane

0x2ab9,	// (0x00078e6a) main_video3_pane_g1_ParamLimits

0x2ab9,	// (0x00078e6a) main_video3_pane_g1

0x2ad5,	// (0x00078e86) main_video3_pane_g2_ParamLimits

0x2ad5,	// (0x00078e86) main_video3_pane_g2

0x0001,

0xf844,	// (0x00085bf5) main_video3_pane_g_ParamLimits

0xf844,	// (0x00085bf5) main_video3_pane_g

0x2af1,	// (0x00078ea2) main_video3_pane_t1_ParamLimits

0x2af1,	// (0x00078ea2) main_video3_pane_t1

0x2b1c,	// (0x00078ecd) main_video3_pane_t2_ParamLimits

0x2b1c,	// (0x00078ecd) main_video3_pane_t2

0x2b47,	// (0x00078ef8) main_video3_pane_t3_ParamLimits

0x2b47,	// (0x00078ef8) main_video3_pane_t3

0x0002,

0xf849,	// (0x00085bfa) main_video3_pane_t_ParamLimits

0xf849,	// (0x00085bfa) main_video3_pane_t

0x2b74,	// (0x00078f25) cams_zoom_vslider_pane_g1

0x2b7d,	// (0x00078f2e) cams_zoom_vslider_pane_g2

0x0001,

0xf850,	// (0x00085c01) cams_zoom_vslider_pane_g

0x2b85,	// (0x00078f36) small_slider_vertical_pane

0x237d,	// (0x0007872e) small_slider_vertical_pane_g1

0x237d,	// (0x0007872e) small_slider_vertical_pane_g2

0x2b8d,	// (0x00078f3e) small_slider_vertical_pane_g3

0x0002,

0xf855,	// (0x00085c06) small_slider_vertical_pane_g

0xe889,	// (0x00084c3a) main_hwr_training_pane

0x2b96,	// (0x00078f47) hwr_training_instruct_pane_ParamLimits

0x2b96,	// (0x00078f47) hwr_training_instruct_pane

0xb1a6,	// (0x00081557) hwr_training_navi_pane_ParamLimits

0xb1a6,	// (0x00081557) hwr_training_navi_pane

0xb1c0,	// (0x00081571) hwr_training_write_pane_ParamLimits

0xb1c0,	// (0x00081571) hwr_training_write_pane

0xe889,	// (0x00084c3a) bg_frame_shadow_pane

0x2bcd,	// (0x00078f7e) hwr_training_write_pane_g1

0x2bd5,	// (0x00078f86) hwr_training_write_pane_g2

0x2bdd,	// (0x00078f8e) hwr_training_write_pane_g3

0x2be5,	// (0x00078f96) hwr_training_write_pane_g4

0x2bed,	// (0x00078f9e) hwr_training_write_pane_g5

0x2bf5,	// (0x00078fa6) hwr_training_write_pane_g6

0x2bfd,	// (0x00078fae) hwr_training_write_pane_g7

0x0006,

0xf85c,	// (0x00085c0d) hwr_training_write_pane_g

0xb1f8,	// (0x000815a9) hwr_training_navi_pane_g1_ParamLimits

0xb1f8,	// (0x000815a9) hwr_training_navi_pane_g1

0xb20a,	// (0x000815bb) hwr_training_navi_pane_g2_ParamLimits

0xb20a,	// (0x000815bb) hwr_training_navi_pane_g2

0xb21c,	// (0x000815cd) hwr_training_navi_pane_g3_ParamLimits

0xb21c,	// (0x000815cd) hwr_training_navi_pane_g3

0xb22c,	// (0x000815dd) hwr_training_navi_pane_g4_ParamLimits

0xb22c,	// (0x000815dd) hwr_training_navi_pane_g4

0x0004,

0xf86b,	// (0x00085c1c) hwr_training_navi_pane_g_ParamLimits

0xf86b,	// (0x00085c1c) hwr_training_navi_pane_g

0xb246,	// (0x000815f7) hwr_training_navi_pane_t1

0xb254,	// (0x00081605) list_single_hwr_training_instruct_pane_ParamLimits

0xb254,	// (0x00081605) list_single_hwr_training_instruct_pane

0x2c05,	// (0x00078fb6) list_single_hwr_training_instruct_pane_t1

0x22bd,	// (0x0007866e) bg_frame_shadow_pane_g1

0x2c14,	// (0x00078fc5) bg_frame_shadow_pane_g2

0x2c1c,	// (0x00078fcd) bg_frame_shadow_pane_g3

0x2c24,	// (0x00078fd5) bg_frame_shadow_pane_g4

0x2c2c,	// (0x00078fdd) bg_frame_shadow_pane_g5

0x2c34,	// (0x00078fe5) bg_frame_shadow_pane_g6

0x2c3c,	// (0x00078fed) bg_frame_shadow_pane_g7

0xf096,	// (0x00085447) bg_frame_shadow_pane_g8

0x0007,

0xf876,	// (0x00085c27) bg_frame_shadow_pane_g

0xe889,	// (0x00084c3a) main_video_tele_dialer_pane

0xb279,	// (0x0008162a) aid_size_cell_video_keypad_ParamLimits

0xb279,	// (0x0008162a) aid_size_cell_video_keypad

0xb289,	// (0x0008163a) grid_video_dialer_keypad_pane_ParamLimits

0xb289,	// (0x0008163a) grid_video_dialer_keypad_pane

0xb2bd,	// (0x0008166e) video_down_pane_cp_ParamLimits

0xb2bd,	// (0x0008166e) video_down_pane_cp

0xb2e7,	// (0x00081698) cell_video_dialer_keypad_pane_ParamLimits

0xb2e7,	// (0x00081698) cell_video_dialer_keypad_pane

0x2c44,	// (0x00078ff5) bg_button_pane_cp08_ParamLimits

0x2c44,	// (0x00078ff5) bg_button_pane_cp08

0xb2fc,	// (0x000816ad) cell_video_dialer_keypad_pane_g1_ParamLimits

0xb2fc,	// (0x000816ad) cell_video_dialer_keypad_pane_g1

0xaac6,	// (0x00080e77) mup3_rocker2_pane_ParamLimits

0xaac6,	// (0x00080e77) mup3_rocker2_pane

0x237d,	// (0x0007872e) mup3_rocker2_pane_g1

0x999b,	// (0x0007fd4c) main_dialer2_pane

0xe889,	// (0x00084c3a) main_mp4_pane

0xb351,	// (0x00081702) main_mp4_pane_g1_ParamLimits

0xb351,	// (0x00081702) main_mp4_pane_g1

0xb35f,	// (0x00081710) main_mp4_pane_g2_ParamLimits

0xb35f,	// (0x00081710) main_mp4_pane_g2

0xb36d,	// (0x0008171e) main_mp4_pane_g3_ParamLimits

0xb36d,	// (0x0008171e) main_mp4_pane_g3

0xb3b2,	// (0x00081763) main_mp4_pane_g4_ParamLimits

0xb3b2,	// (0x00081763) main_mp4_pane_g4

0xb3e0,	// (0x00081791) main_mp4_pane_g5_ParamLimits

0xb3e0,	// (0x00081791) main_mp4_pane_g5

0x0007,

0xf896,	// (0x00085c47) main_mp4_pane_g_ParamLimits

0xf896,	// (0x00085c47) main_mp4_pane_g

0xb454,	// (0x00081805) main_mp4_pane_t1_ParamLimits

0xb454,	// (0x00081805) main_mp4_pane_t1

0xb4b0,	// (0x00081861) main_mp4_pane_t2_ParamLimits

0xb4b0,	// (0x00081861) main_mp4_pane_t2

0x2c50,	// (0x00079001) main_mp4_pane_t3_ParamLimits

0x2c50,	// (0x00079001) main_mp4_pane_t3

0xb502,	// (0x000818b3) main_mp4_pane_t4_ParamLimits

0xb502,	// (0x000818b3) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x00085c58) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x00085c58) main_mp4_pane_t

0xb546,	// (0x000818f7) mp4_progress_pane_ParamLimits

0xb546,	// (0x000818f7) mp4_progress_pane

0xb590,	// (0x00081941) mp4_rocker_pane_ParamLimits

0xb590,	// (0x00081941) mp4_rocker_pane

0x2c7e,	// (0x0007902f) mp4_progress_pane_t1

0x2c97,	// (0x00079048) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x00085c61) mp4_progress_pane_t

0x2cb0,	// (0x00079061) mup_progress_pane_cp04

0x237d,	// (0x0007872e) mp4_rocker_pane_g1

0xb5b0,	// (0x00081961) aid_cell_size_keypad2_ParamLimits

0xb5b0,	// (0x00081961) aid_cell_size_keypad2

0xb5c0,	// (0x00081971) dialer2_ne_pane_ParamLimits

0xb5c0,	// (0x00081971) dialer2_ne_pane

0xb5ce,	// (0x0008197f) grid_dialer2_keypad_pane_ParamLimits

0xb5ce,	// (0x0008197f) grid_dialer2_keypad_pane

0x33ac,	// (0x0007975d) bg_popup_call_pane_cp07_ParamLimits

0x33ac,	// (0x0007975d) bg_popup_call_pane_cp07

0xb5de,	// (0x0008198f) dialer2_ne_pane_t1_ParamLimits

0xb5de,	// (0x0008198f) dialer2_ne_pane_t1

0xb603,	// (0x000819b4) cell_dialer2_keypad_pane_ParamLimits

0xb603,	// (0x000819b4) cell_dialer2_keypad_pane

0x2cdf,	// (0x00079090) bg_button_pane_pane_cp04_ParamLimits

0x2cdf,	// (0x00079090) bg_button_pane_pane_cp04

0xb618,	// (0x000819c9) cell_dialer2_keypad_pane_g1_ParamLimits

0xb618,	// (0x000819c9) cell_dialer2_keypad_pane_g1

0x7798,	// (0x0007db49) aid_placing_vt_set_content_ParamLimits

0x7798,	// (0x0007db49) aid_placing_vt_set_content

0x77c4,	// (0x0007db75) aid_placing_vt_set_title_ParamLimits

0x77c4,	// (0x0007db75) aid_placing_vt_set_title

0xe889,	// (0x00084c3a) main_image3_pane

0xb6b2,	// (0x00081a63) area_side_right_pane_cp01_ParamLimits

0xb6b2,	// (0x00081a63) area_side_right_pane_cp01

0xed42,	// (0x000850f3) main_image3_pane_g1_ParamLimits

0xed42,	// (0x000850f3) main_image3_pane_g1

0xb6df,	// (0x00081a90) main_image3_pane_g2_ParamLimits

0xb6df,	// (0x00081a90) main_image3_pane_g2

0xb6f8,	// (0x00081aa9) main_image3_pane_g3_ParamLimits

0xb6f8,	// (0x00081aa9) main_image3_pane_g3

0xb711,	// (0x00081ac2) main_image3_pane_g4_ParamLimits

0xb711,	// (0x00081ac2) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x00085c70) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x00085c70) main_image3_pane_g

0xb72a,	// (0x00081adb) main_image3_pane_t1_ParamLimits

0xb72a,	// (0x00081adb) main_image3_pane_t1

0xb74f,	// (0x00081b00) main_image3_pane_t2_ParamLimits

0xb74f,	// (0x00081b00) main_image3_pane_t2

0xb76e,	// (0x00081b1f) main_image3_pane_t3_ParamLimits

0xb76e,	// (0x00081b1f) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x00085c79) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x00085c79) main_image3_pane_t

0x3f86,	// (0x0007a337) grid_sctrl_middle_pane_cp01_ParamLimits

0x3f86,	// (0x0007a337) grid_sctrl_middle_pane_cp01

0xb7cf,	// (0x00081b80) cell_sctrl_middle_pane_cp01_ParamLimits

0xb7cf,	// (0x00081b80) cell_sctrl_middle_pane_cp01

0xb7e0,	// (0x00081b91) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xb7e0,	// (0x00081b91) cell_sctrl_middle_pane_cp01_g1

0xe889,	// (0x00084c3a) main_call4_pane

0xb7ed,	// (0x00081b9e) aid_size_button_call4_ParamLimits

0xb7ed,	// (0x00081b9e) aid_size_button_call4

0xb823,	// (0x00081bd4) call4_windows_pane_ParamLimits

0xb823,	// (0x00081bd4) call4_windows_pane

0xb838,	// (0x00081be9) grid_call4_button_pane_ParamLimits

0xb838,	// (0x00081be9) grid_call4_button_pane

0xb866,	// (0x00081c17) call4_windows_conf_pane

0xb87d,	// (0x00081c2e) popup_call4_audio_first_window_ParamLimits

0xb87d,	// (0x00081c2e) popup_call4_audio_first_window

0xb8cd,	// (0x00081c7e) popup_call4_audio_second_window_ParamLimits

0xb8cd,	// (0x00081c7e) popup_call4_audio_second_window

0xb8e6,	// (0x00081c97) popup_call4_audio_wait_window_ParamLimits

0xb8e6,	// (0x00081c97) popup_call4_audio_wait_window

0xb8f4,	// (0x00081ca5) cell_call4_button_pane_ParamLimits

0xb8f4,	// (0x00081ca5) cell_call4_button_pane

0xb917,	// (0x00081cc8) bg_button_pane_cp09_ParamLimits

0xb917,	// (0x00081cc8) bg_button_pane_cp09

0xb923,	// (0x00081cd4) cell_call4_button_pane_g1_ParamLimits

0xb923,	// (0x00081cd4) cell_call4_button_pane_g1

0xb930,	// (0x00081ce1) cell_call4_button_pane_t1_ParamLimits

0xb930,	// (0x00081ce1) cell_call4_button_pane_t1

0x2cf3,	// (0x000790a4) popup_call4_audio_conf_window_ParamLimits

0x2cf3,	// (0x000790a4) popup_call4_audio_conf_window

0xaaf9,	// (0x00080eaa) mup3_progress_pane_t1_ParamLimits

0xab18,	// (0x00080ec9) mup3_progress_pane_t2_ParamLimits

0x267b,	// (0x00078a2c) mup3_progress_pane_t3_ParamLimits

0xf798,	// (0x00085b49) mup3_progress_pane_t_ParamLimits

0x2698,	// (0x00078a49) mup_progress_pane_cp03_ParamLimits

0xb045,	// (0x000813f6) mup3_control_keys_pane_g4_copy1

0xb574,	// (0x00081925) mp4_rocker2_pane_ParamLimits

0xb574,	// (0x00081925) mp4_rocker2_pane

0x2d0f,	// (0x000790c0) mp4_rocker2_pane_g1

0x2d07,	// (0x000790b8) mp4_rocker2_pane_g2

0xb974,	// (0x00081d25) mp4_rocker2_pane_g3

0xb97c,	// (0x00081d2d) mp4_rocker2_pane_g4

0xb984,	// (0x00081d35) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x00085c82) mp4_rocker2_pane_g

0xe889,	// (0x00084c3a) main_camera4_pane

0xe889,	// (0x00084c3a) main_video4_pane

0xb299,	// (0x0008164a) main_video_tele_dialer_pane_t1_ParamLimits

0xb299,	// (0x0008164a) main_video_tele_dialer_pane_t1

0xb2ab,	// (0x0008165c) main_video_tele_dialer_pane_t2_ParamLimits

0xb2ab,	// (0x0008165c) main_video_tele_dialer_pane_t2

0x0001,

0xf887,	// (0x00085c38) main_video_tele_dialer_pane_t_ParamLimits

0xf887,	// (0x00085c38) main_video_tele_dialer_pane_t

0xb9a4,	// (0x00081d55) cam4_autofocus_pane_ParamLimits

0xb9a4,	// (0x00081d55) cam4_autofocus_pane

0xb9be,	// (0x00081d6f) cam4_image_uncrop_pane_ParamLimits

0xb9be,	// (0x00081d6f) cam4_image_uncrop_pane

0xb9d5,	// (0x00081d86) cam4_indicators_pane_ParamLimits

0xb9d5,	// (0x00081d86) cam4_indicators_pane

0xb9f1,	// (0x00081da2) main_camera4_pane_g1_ParamLimits

0xb9f1,	// (0x00081da2) main_camera4_pane_g1

0xb9fd,	// (0x00081dae) main_camera4_pane_g2_ParamLimits

0xb9fd,	// (0x00081dae) main_camera4_pane_g2

0xb9fd,	// (0x00081dae) main_camera4_pane_g3_ParamLimits

0xb9fd,	// (0x00081dae) main_camera4_pane_g3

0xba09,	// (0x00081dba) main_camera4_pane_g4_ParamLimits

0xba09,	// (0x00081dba) main_camera4_pane_g4

0xba15,	// (0x00081dc6) main_camera4_pane_g5_ParamLimits

0xba15,	// (0x00081dc6) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x00085c8d) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x00085c8d) main_camera4_pane_g

0xba2f,	// (0x00081de0) main_camera4_pane_t1_ParamLimits

0xba2f,	// (0x00081de0) main_camera4_pane_t1

0x25e0,	// (0x00078991) bg_tb_trans_pane_cp06

0xba7f,	// (0x00081e30) cam4_indicators_pane_g1

0xba90,	// (0x00081e41) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x00085ca8) cam4_indicators_pane_g

0xbaae,	// (0x00081e5f) cam4_indicators_pane_t1

0xbad8,	// (0x00081e89) main_video4_pane_g1_ParamLimits

0xbad8,	// (0x00081e89) main_video4_pane_g1

0xbae4,	// (0x00081e95) main_video4_pane_g2_ParamLimits

0xbae4,	// (0x00081e95) main_video4_pane_g2

0xbaf0,	// (0x00081ea1) main_video4_pane_g3_ParamLimits

0xbaf0,	// (0x00081ea1) main_video4_pane_g3

0xbafc,	// (0x00081ead) main_video4_pane_g4_ParamLimits

0xbafc,	// (0x00081ead) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x00085caf) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x00085caf) main_video4_pane_g

0xbb1c,	// (0x00081ecd) vid4_indicators_pane_ParamLimits

0xbb1c,	// (0x00081ecd) vid4_indicators_pane

0xbb3b,	// (0x00081eec) video4_image_uncrop_cif_pane_ParamLimits

0xbb3b,	// (0x00081eec) video4_image_uncrop_cif_pane

0xbb4a,	// (0x00081efb) video4_image_uncrop_nhd_pane_ParamLimits

0xbb4a,	// (0x00081efb) video4_image_uncrop_nhd_pane

0xb9be,	// (0x00081d6f) video4_image_uncrop_vga_pane_ParamLimits

0xb9be,	// (0x00081d6f) video4_image_uncrop_vga_pane

0xf0a6,	// (0x00085457) bg_tb_trans_pane_cp07

0xbb61,	// (0x00081f12) vid4_indicators_pane_g1

0xbb75,	// (0x00081f26) vid4_indicators_pane_g2

0xbb89,	// (0x00081f3a) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x00085cba) vid4_indicators_pane_g

0xbbb8,	// (0x00081f69) vid4_indicators_pane_t1

0xbbcf,	// (0x00081f80) cam4_autofocus_pane_g1

0xbbd7,	// (0x00081f88) cam4_autofocus_pane_g2

0xbbdf,	// (0x00081f90) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x00085cc5) cam4_autofocus_pane_g

0xbbe7,	// (0x00081f98) cam4_autofocus_pane_g3_copy1

0xb2cb,	// (0x0008167c) video_down_pane_cp_t1

0xb2d9,	// (0x0008168a) video_down_pane_cp_t2

0x0001,

0xf88c,	// (0x00085c3d) video_down_pane_cp_t

0x3f86,	// (0x0007a337) popup_vitu2_window_ParamLimits

0x3f86,	// (0x0007a337) popup_vitu2_window

0xbbef,	// (0x00081fa0) aid_size_cell2_itu2_ParamLimits

0xbbef,	// (0x00081fa0) aid_size_cell2_itu2

0xbc11,	// (0x00081fc2) aid_size_cell_itu2_ParamLimits

0xbc11,	// (0x00081fc2) aid_size_cell_itu2

0x33ac,	// (0x0007975d) bg_popup_window_pane_cp09_ParamLimits

0x33ac,	// (0x0007975d) bg_popup_window_pane_cp09

0xbc55,	// (0x00082006) field_vitu2_entry_pane_ParamLimits

0xbc55,	// (0x00082006) field_vitu2_entry_pane

0xbc75,	// (0x00082026) grid_vitu2_function_pane_ParamLimits

0xbc75,	// (0x00082026) grid_vitu2_function_pane

0xbcb9,	// (0x0008206a) grid_vitu2_itu_pane_ParamLimits

0xbcb9,	// (0x0008206a) grid_vitu2_itu_pane

0xbd35,	// (0x000820e6) cell_vitu2_itu_pane_ParamLimits

0xbd35,	// (0x000820e6) cell_vitu2_itu_pane

0xbd4e,	// (0x000820ff) cell_vitu2_function_pane_ParamLimits

0xbd4e,	// (0x000820ff) cell_vitu2_function_pane

0x2d29,	// (0x000790da) bg_popup_call_pane_cp08_ParamLimits

0x2d29,	// (0x000790da) bg_popup_call_pane_cp08

0x2d40,	// (0x000790f1) field_vitu2_entry_pane_g1

0x2d4c,	// (0x000790fd) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x00085ccc) field_vitu2_entry_pane_g

0x5856,	// (0x0007bc07) field_vitu2_entry_pane_t1_ParamLimits

0x5856,	// (0x0007bc07) field_vitu2_entry_pane_t1

0x5886,	// (0x0007bc37) field_vitu2_entry_pane_t2_ParamLimits

0x5886,	// (0x0007bc37) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x00085cd3) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x00085cd3) field_vitu2_entry_pane_t

0xbd8f,	// (0x00082140) bg_button_pane_cp010_ParamLimits

0xbd8f,	// (0x00082140) bg_button_pane_cp010

0xbd9d,	// (0x0008214e) cell_vitu2_itu_pane_g1

0xbdbd,	// (0x0008216e) cell_vitu2_itu_pane_t1_ParamLimits

0xbdbd,	// (0x0008216e) cell_vitu2_itu_pane_t1

0x58a3,	// (0x0007bc54) cell_vitu2_itu_pane_t2_ParamLimits

0x58a3,	// (0x0007bc54) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x00085cdd) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x00085cdd) cell_vitu2_itu_pane_t

0xf0a6,	// (0x00085457) bg_button_pane_cp011

0xbe09,	// (0x000821ba) cell_vitu2_function_pane_g1

0xe889,	// (0x00084c3a) main_myfav_hc_pane

0xb7b0,	// (0x00081b61) popup_image3_note_pane_ParamLimits

0xb7b0,	// (0x00081b61) popup_image3_note_pane

0xb7be,	// (0x00081b6f) popup_image3_tool_bar_pane_ParamLimits

0xb7be,	// (0x00081b6f) popup_image3_tool_bar_pane

0x5919,	// (0x0007bcca) cell_vitu2_itu_pane_t3_ParamLimits

0x5919,	// (0x0007bcca) cell_vitu2_itu_pane_t3

0xe889,	// (0x00084c3a) bg_popup_trans_pane

0x2d6e,	// (0x0007911f) grid_image3_tool_bar_pane

0x2d78,	// (0x00079129) bg_popup_trans_pane_g1

0x035e,	// (0x0007670f) bg_popup_trans_pane_g2

0x2d80,	// (0x00079131) bg_popup_trans_pane_g3

0x2d88,	// (0x00079139) bg_popup_trans_pane_g4

0x2d90,	// (0x00079141) bg_popup_trans_pane_g5

0x2d98,	// (0x00079149) bg_popup_trans_pane_g6

0x2da0,	// (0x00079151) bg_popup_trans_pane_g7

0x2da8,	// (0x00079159) bg_popup_trans_pane_g8

0x033e,	// (0x000766ef) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x00085ce4) bg_popup_trans_pane_g

0x2db0,	// (0x00079161) cell_image3_tool_bar_pane_ParamLimits

0x2db0,	// (0x00079161) cell_image3_tool_bar_pane

0x237d,	// (0x0007872e) cell_image3_tool_bar_pane_g1

0xe889,	// (0x00084c3a) bg_popup_trans_pane_cp1

0x2dc4,	// (0x00079175) popup_image3_note_pane_t1

0x2dd2,	// (0x00079183) popup_image3_note_pane_t2

0x2de0,	// (0x00079191) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x00085cf7) popup_image3_note_pane_t

0x2dee,	// (0x0007919f) popup_image3_note_pane_t3_copy1

0xbe1d,	// (0x000821ce) bg_myfav_hc_instruction_pane_ParamLimits

0xbe1d,	// (0x000821ce) bg_myfav_hc_instruction_pane

0xbe35,	// (0x000821e6) cell_myfav_contact_pane_ParamLimits

0xbe35,	// (0x000821e6) cell_myfav_contact_pane

0xbe4f,	// (0x00082200) cell_myfav_contact_pane_cp1_ParamLimits

0xbe4f,	// (0x00082200) cell_myfav_contact_pane_cp1

0xbe67,	// (0x00082218) cell_myfav_contact_pane_cp2_ParamLimits

0xbe67,	// (0x00082218) cell_myfav_contact_pane_cp2

0xbe7f,	// (0x00082230) cell_myfav_contact_pane_cp3_ParamLimits

0xbe7f,	// (0x00082230) cell_myfav_contact_pane_cp3

0xbe96,	// (0x00082247) cell_myfav_contact_pane_cp4_ParamLimits

0xbe96,	// (0x00082247) cell_myfav_contact_pane_cp4

0xbeac,	// (0x0008225d) cell_myfav_contact_pane_cp5_ParamLimits

0xbeac,	// (0x0008225d) cell_myfav_contact_pane_cp5

0xbec0,	// (0x00082271) cell_myfav_contact_pane_cp6_ParamLimits

0xbec0,	// (0x00082271) cell_myfav_contact_pane_cp6

0xbed4,	// (0x00082285) cell_myfav_contact_pane_cp7_ParamLimits

0xbed4,	// (0x00082285) cell_myfav_contact_pane_cp7

0x2dfc,	// (0x000791ad) listscroll_gen_pane_cp05

0xbeec,	// (0x0008229d) main_myfav_hc_pane_g1_ParamLimits

0xbeec,	// (0x0008229d) main_myfav_hc_pane_g1

0xbf02,	// (0x000822b3) main_myfav_hc_pane_g2_ParamLimits

0xbf02,	// (0x000822b3) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x00085cfe) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x00085cfe) main_myfav_hc_pane_g

0xbf30,	// (0x000822e1) main_myfav_hc_pane_t1_ParamLimits

0xbf30,	// (0x000822e1) main_myfav_hc_pane_t1

0x2e05,	// (0x000791b6) main_myfav_hc_pane_t2_ParamLimits

0x2e05,	// (0x000791b6) main_myfav_hc_pane_t2

0x2e17,	// (0x000791c8) main_myfav_hc_pane_t3_ParamLimits

0x2e17,	// (0x000791c8) main_myfav_hc_pane_t3

0xbf47,	// (0x000822f8) main_myfav_hc_pane_t4_ParamLimits

0xbf47,	// (0x000822f8) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x00085d05) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x00085d05) main_myfav_hc_pane_t

0x237d,	// (0x0007872e) bg_myfav_hc_instruction_pane_g1

0x2e29,	// (0x000791da) cell_myfav_contact_pane_g1_ParamLimits

0x2e29,	// (0x000791da) cell_myfav_contact_pane_g1

0x2e29,	// (0x000791da) cell_myfav_contact_pane_g2_ParamLimits

0x2e29,	// (0x000791da) cell_myfav_contact_pane_g2

0x2e35,	// (0x000791e6) cell_myfav_contact_pane_g3_ParamLimits

0x2e35,	// (0x000791e6) cell_myfav_contact_pane_g3

0x2665,	// (0x00078a16) cell_myfav_contact_pane_g4_ParamLimits

0x2665,	// (0x00078a16) cell_myfav_contact_pane_g4

0x2e42,	// (0x000791f3) cell_myfav_contact_pane_g5_ParamLimits

0x2e42,	// (0x000791f3) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x00085d10) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x00085d10) cell_myfav_contact_pane_g

0xbf18,	// (0x000822c9) main_myfav_hc_pane_g3_ParamLimits

0xbf18,	// (0x000822c9) main_myfav_hc_pane_g3

0x6961,	// (0x0007cd12) popup_adpt_find_window

0xbf71,	// (0x00082322) afind_page_pane_ParamLimits

0xbf71,	// (0x00082322) afind_page_pane

0xbf7e,	// (0x0008232f) aid_size_cell_afind_ParamLimits

0xbf7e,	// (0x0008232f) aid_size_cell_afind

0xbf98,	// (0x00082349) bg_popup_sub_pane_cp09_ParamLimits

0xbf98,	// (0x00082349) bg_popup_sub_pane_cp09

0xbfa5,	// (0x00082356) find_pane_cp01_ParamLimits

0xbfa5,	// (0x00082356) find_pane_cp01

0x2e4e,	// (0x000791ff) grid_afind_control_pane_ParamLimits

0x2e4e,	// (0x000791ff) grid_afind_control_pane

0xbfb2,	// (0x00082363) grid_afind_pane_ParamLimits

0xbfb2,	// (0x00082363) grid_afind_pane

0xbfce,	// (0x0008237f) cell_afind_pane_ParamLimits

0xbfce,	// (0x0008237f) cell_afind_pane

0x237d,	// (0x0007872e) afind_page_pane_g1

0xc016,	// (0x000823c7) afind_page_pane_g2

0xc01f,	// (0x000823d0) afind_page_pane_g3

0x0002,

0xf96a,	// (0x00085d1b) afind_page_pane_g

0xc028,	// (0x000823d9) afind_page_pane_t1

0x2e62,	// (0x00079213) cell_afind_grid_control_pane_ParamLimits

0x2e62,	// (0x00079213) cell_afind_grid_control_pane

0x2cdf,	// (0x00079090) bg_button_pane_cp69_ParamLimits

0x2cdf,	// (0x00079090) bg_button_pane_cp69

0xc048,	// (0x000823f9) cell_afind_pane_g1_ParamLimits

0xc048,	// (0x000823f9) cell_afind_pane_g1

0xc055,	// (0x00082406) cell_afind_pane_t1_ParamLimits

0xc055,	// (0x00082406) cell_afind_pane_t1

0x0157,	// (0x00076508) bg_button_pane_cp72

0x2e71,	// (0x00079222) cell_afind_grid_control_pane_g1

0x9519,	// (0x0007f8ca) aid_image_placing_area_ParamLimits

0x9519,	// (0x0007f8ca) aid_image_placing_area

0x298e,	// (0x00078d3f) field_vitu_entry_pane_g1_ParamLimits

0x298e,	// (0x00078d3f) field_vitu_entry_pane_g1

0x299a,	// (0x00078d4b) field_vitu_entry_pane_g2_ParamLimits

0x299a,	// (0x00078d4b) field_vitu_entry_pane_g2

0x0001,

0xf817,	// (0x00085bc8) field_vitu_entry_pane_g_ParamLimits

0xf817,	// (0x00085bc8) field_vitu_entry_pane_g

0xb0cd,	// (0x0008147e) cell_vitu_itu_pane_g1_ParamLimits

0xb10f,	// (0x000814c0) cell_vitu_itu_pane_t3_ParamLimits

0xb10f,	// (0x000814c0) cell_vitu_itu_pane_t3

0x2c7e,	// (0x0007902f) mp4_progress_pane_t1_ParamLimits

0x2c97,	// (0x00079048) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x00085c61) mp4_progress_pane_t_ParamLimits

0x2cb0,	// (0x00079061) mup_progress_pane_cp04_ParamLimits

0xbf5b,	// (0x0008230c) main_myfav_hc_pane_t5_ParamLimits

0xbf5b,	// (0x0008230c) main_myfav_hc_pane_t5

0x553e,	// (0x0007b8ef) aid_zoom_text_primary

0x6961,	// (0x0007cd12) popup_adpt_find_window_ParamLimits

0xf0a6,	// (0x00085457) main_cam_set_pane

0xb9e3,	// (0x00081d94) cam4_zoom_pane_ParamLimits

0xb9e3,	// (0x00081d94) cam4_zoom_pane

0xc067,	// (0x00082418) main_cam_set_pane_g1_ParamLimits

0xc067,	// (0x00082418) main_cam_set_pane_g1

0xc075,	// (0x00082426) main_cam_set_pane_g2_ParamLimits

0xc075,	// (0x00082426) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x00085d22) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x00085d22) main_cam_set_pane_g

0xc081,	// (0x00082432) main_cam_set_pane_t1_ParamLimits

0xc081,	// (0x00082432) main_cam_set_pane_t1

0xc09d,	// (0x0008244e) main_cset_listscroll_pane_ParamLimits

0xc09d,	// (0x0008244e) main_cset_listscroll_pane

0xc0c8,	// (0x00082479) main_cset_slider_pane_ParamLimits

0xc0c8,	// (0x00082479) main_cset_slider_pane

0x2e82,	// (0x00079233) main_cset_list_pane_ParamLimits

0x2e82,	// (0x00079233) main_cset_list_pane

0x2e92,	// (0x00079243) scroll_pane_cp028

0xc0e7,	// (0x00082498) aid_area_touch_slider

0xc103,	// (0x000824b4) cset_slider_pane

0xc12d,	// (0x000824de) main_cset_slider_pane_g1

0xc142,	// (0x000824f3) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x00085d27) main_cset_slider_pane_g

0x2ecb,	// (0x0007927c) main_cset_slider_pane_t1

0xc204,	// (0x000825b5) main_cset_slider_pane_t2

0xc21e,	// (0x000825cf) main_cset_slider_pane_t3

0xc238,	// (0x000825e9) main_cset_slider_pane_t4

0xc252,	// (0x00082603) main_cset_slider_pane_t5

0xc270,	// (0x00082621) main_cset_slider_pane_t6

0xc287,	// (0x00082638) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x00085d4c) main_cset_slider_pane_t

0xc393,	// (0x00082744) cset_list_set_pane_ParamLimits

0xc393,	// (0x00082744) cset_list_set_pane

0xc3a9,	// (0x0008275a) aid_position_infowindow_above

0xc3b1,	// (0x00082762) aid_position_infowindow_below

0xc3b9,	// (0x0008276a) cset_list_set_pane_g1_ParamLimits

0xc3b9,	// (0x0008276a) cset_list_set_pane_g1

0x596b,	// (0x0007bd1c) cset_list_set_pane_g3_ParamLimits

0x596b,	// (0x0007bd1c) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x00085d6b) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x00085d6b) cset_list_set_pane_g

0x597a,	// (0x0007bd2b) cset_list_set_pane_t1_ParamLimits

0x597a,	// (0x0007bd2b) cset_list_set_pane_t1

0xf0a6,	// (0x00085457) list_highlight_pane_cp021_ParamLimits

0xf0a6,	// (0x00085457) list_highlight_pane_cp021

0x0ca7,	// (0x00077058) cset_slider_pane_g1

0x0cb9,	// (0x0007706a) cset_slider_pane_g2

0x0cb0,	// (0x00077061) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x00085d70) cset_slider_pane_g

0xc3c5,	// (0x00082776) aid_area_touch_cam4_zoom

0xc3cd,	// (0x0008277e) cam4_zoom_cont_pane

0xc3d5,	// (0x00082786) cam4_zoom_pane_g1

0xc3dd,	// (0x0008278e) cam4_zoom_pane_g2

0xc3e5,	// (0x00082796) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x00085d77) cam4_zoom_pane_g

0x34f8,	// (0x000798a9) cam4_zoom_cont_pane_g1

0x3501,	// (0x000798b2) cam4_zoom_cont_pane_g2

0x350a,	// (0x000798bb) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x00085d7e) cam4_zoom_cont_pane_g

0xb807,	// (0x00081bb8) call4_image_pane_ParamLimits

0xb807,	// (0x00081bb8) call4_image_pane

0xb866,	// (0x00081c17) call4_windows_conf_pane_ParamLimits

0xb8ab,	// (0x00081c5c) popup_call4_audio_in_window_ParamLimits

0xb8ab,	// (0x00081c5c) popup_call4_audio_in_window

0xe889,	// (0x00084c3a) bg_popup_call2_act_pane_cp02

0x2ceb,	// (0x0007909c) call4_list_conf_pane

0x237d,	// (0x0007872e) call4_image_pane_g1

0x237d,	// (0x0007872e) call4_image_pane_g2

0x0001,

0xf6d8,	// (0x00085a89) call4_image_pane_g

0x2f6b,	// (0x0007931c) list_single_graphic_popup_conf4_pane_ParamLimits

0x2f6b,	// (0x0007931c) list_single_graphic_popup_conf4_pane

0xe889,	// (0x00084c3a) list_highlight_pane_cp022

0x2f7e,	// (0x0007932f) list_single_graphic_popup_conf4_pane_g1

0x0878,	// (0x00076c29) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x00085d85) list_single_graphic_popup_conf4_pane_g

0x2f86,	// (0x00079337) list_single_graphic_popup_conf4_pane_t1

0x7928,	// (0x0007dcd9) popup_vtel_slider_window_ParamLimits

0x7928,	// (0x0007dcd9) popup_vtel_slider_window

0x2ccd,	// (0x0007907e) dialer2_ne_pane_t2_ParamLimits

0x2ccd,	// (0x0007907e) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x00085c66) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x00085c66) dialer2_ne_pane_t

0xf0a6,	// (0x00085457) bg_popup_sub_pane_cp010_ParamLimits

0xf0a6,	// (0x00085457) bg_popup_sub_pane_cp010

0xc3ed,	// (0x0008279e) popup_vtel_slider_window_g1_ParamLimits

0xc3ed,	// (0x0008279e) popup_vtel_slider_window_g1

0xc3f9,	// (0x000827aa) popup_vtel_slider_window_g2_ParamLimits

0xc3f9,	// (0x000827aa) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x00085d8a) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x00085d8a) popup_vtel_slider_window_g

0xc441,	// (0x000827f2) vtel_slider_pane_ParamLimits

0xc441,	// (0x000827f2) vtel_slider_pane

0xc450,	// (0x00082801) vtel_slider_pane_g1_ParamLimits

0xc450,	// (0x00082801) vtel_slider_pane_g1

0xc45d,	// (0x0008280e) vtel_slider_pane_g2_ParamLimits

0xc45d,	// (0x0008280e) vtel_slider_pane_g2

0xc46a,	// (0x0008281b) vtel_slider_pane_g3_ParamLimits

0xc46a,	// (0x0008281b) vtel_slider_pane_g3

0xc450,	// (0x00082801) vtel_slider_pane_g4_ParamLimits

0xc450,	// (0x00082801) vtel_slider_pane_g4

0xc477,	// (0x00082828) vtel_slider_pane_g5_ParamLimits

0xc477,	// (0x00082828) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x00085d93) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x00085d93) vtel_slider_pane_g

0xf0a6,	// (0x00085457) main_gallery2_pane

0xbc37,	// (0x00081fe8) aid_size_row_itut2_dropdow_list_ParamLimits

0xbc37,	// (0x00081fe8) aid_size_row_itut2_dropdow_list

0xbc97,	// (0x00082048) grid_vitu2_function_top_pane_ParamLimits

0xbc97,	// (0x00082048) grid_vitu2_function_top_pane

0xbcf1,	// (0x000820a2) popup_vitu2_dropdown_list_window_ParamLimits

0xbcf1,	// (0x000820a2) popup_vitu2_dropdown_list_window

0xbd11,	// (0x000820c2) popup_vitu2_match_list_window

0xc484,	// (0x00082835) cell_vitu2_function_top_pane_ParamLimits

0xc484,	// (0x00082835) cell_vitu2_function_top_pane

0xc49e,	// (0x0008284f) cell_vitu2_function_top_pane_cp01_ParamLimits

0xc49e,	// (0x0008284f) cell_vitu2_function_top_pane_cp01

0xc4ba,	// (0x0008286b) cell_vitu2_function_top_wide_pane_ParamLimits

0xc4ba,	// (0x0008286b) cell_vitu2_function_top_wide_pane

0xf0a6,	// (0x00085457) bg_button_pane_cp012

0xc4d6,	// (0x00082887) cell_vitu2_function_top_pane_g1

0xc4ea,	// (0x0008289b) bg_button_pane_cp013_ParamLimits

0xc4ea,	// (0x0008289b) bg_button_pane_cp013

0xc506,	// (0x000828b7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xc506,	// (0x000828b7) cell_vitu2_function_top_wide_pane_g1

0x3f86,	// (0x0007a337) bg_popup_sub_pane_cp20

0xc51e,	// (0x000828cf) list_vitu2_match_list_pane

0x2d78,	// (0x00079129) bg_popup_sub_pane_cp20_g1

0x2d80,	// (0x00079131) bg_popup_sub_pane_cp20_g2

0x035e,	// (0x0007670f) bg_popup_sub_pane_cp20_g3

0x2d88,	// (0x00079139) bg_popup_sub_pane_cp20_g4

0x033e,	// (0x000766ef) bg_popup_sub_pane_cp20_g5

0x2f9c,	// (0x0007934d) bg_popup_sub_pane_cp20_g6

0x2d98,	// (0x00079149) bg_popup_sub_pane_cp20_g7

0x2da0,	// (0x00079151) bg_popup_sub_pane_cp20_g8

0x2da8,	// (0x00079159) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x00085d9e) bg_popup_sub_pane_cp20_g

0xc536,	// (0x000828e7) list_vitu2_match_list_item_pane_ParamLimits

0xc536,	// (0x000828e7) list_vitu2_match_list_item_pane

0xc548,	// (0x000828f9) list_vitu2_match_list_item_pane_t1

0xe889,	// (0x00084c3a) bg_popup_sub_pane_cp21

0x07a0,	// (0x00076b51) grid_vitu2_dropdown_list_pane

0xc562,	// (0x00082913) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xc562,	// (0x00082913) cell_vitu2_dropdown_list_char_pane

0xc583,	// (0x00082934) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xc583,	// (0x00082934) cell_vitu2_dropdown_list_ctrl_pane

0x2fb6,	// (0x00079367) cell_vitu2_dropdown_list_char_pane_g1

0x2fad,	// (0x0007935e) cell_vitu2_dropdown_list_char_pane_g2

0x2fa4,	// (0x00079355) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x00085dbb) cell_vitu2_dropdown_list_char_pane_g

0xc5af,	// (0x00082960) cell_vitu2_dropdown_list_char_pane_t1

0xc5bd,	// (0x0008296e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xc5bd,	// (0x0008296e) cell_vitu2_dropdown_list_ctrl_pane_g1

0xc5cd,	// (0x0008297e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xc5cd,	// (0x0008297e) cell_vitu2_dropdown_list_ctrl_pane_g2

0xc5de,	// (0x0008298f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xc5de,	// (0x0008298f) cell_vitu2_dropdown_list_ctrl_pane_g3

0xc5ee,	// (0x0008299f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xc5ee,	// (0x0008299f) cell_vitu2_dropdown_list_ctrl_pane_g4

0x25e0,	// (0x00078991) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x25e0,	// (0x00078991) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x00085dc2) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x00085dc2) cell_vitu2_dropdown_list_ctrl_pane_g

0xc60a,	// (0x000829bb) aid_size_cell_gallery2_ParamLimits

0xc60a,	// (0x000829bb) aid_size_cell_gallery2

0xc624,	// (0x000829d5) grid_gallery2_pane_ParamLimits

0xc624,	// (0x000829d5) grid_gallery2_pane

0xc63b,	// (0x000829ec) scroll_pane_cp029_ParamLimits

0xc63b,	// (0x000829ec) scroll_pane_cp029

0xc64b,	// (0x000829fc) cell_gallery2_pane_ParamLimits

0xc64b,	// (0x000829fc) cell_gallery2_pane

0x2fbf,	// (0x00079370) cell_gallery2_pane_g2

0x40d2,	// (0x0007a483) cell_gallery2_pane_g3

0x2fc7,	// (0x00079378) cell_gallery2_pane_g4

0x2fcf,	// (0x00079380) cell_gallery2_pane_g5

0x0105,	// (0x000764b6) grid_highlight_pane_cp10

0xbd11,	// (0x000820c2) popup_vitu2_match_list_window_ParamLimits

0xbd25,	// (0x000820d6) popup_vitu2_query_window_ParamLimits

0xbd25,	// (0x000820d6) popup_vitu2_query_window

0xe889,	// (0x00084c3a) bg_vitu2_candi_button_pane

0x2fb6,	// (0x00079367) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2fad,	// (0x0007935e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2fa4,	// (0x00079355) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x59d9,	// (0x0007bd8a) bg_button_pane_cp015

0xc6a0,	// (0x00082a51) bg_button_pane_cp016

0xc6b3,	// (0x00082a64) bg_button_pane_cp017

0x1f69,	// (0x0007831a) bg_popup_sub_pane_cp22

0x2fd7,	// (0x00079388) popup_vitu2_query_window_g1

0x5a0c,	// (0x0007bdbd) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x00085dcd) popup_vitu2_query_window_g

0x5a29,	// (0x0007bdda) popup_vitu2_query_window_t1_ParamLimits

0x5a29,	// (0x0007bdda) popup_vitu2_query_window_t1

0x5a5c,	// (0x0007be0d) popup_vitu2_query_window_t2_ParamLimits

0x5a5c,	// (0x0007be0d) popup_vitu2_query_window_t2

0x5a6e,	// (0x0007be1f) popup_vitu2_query_window_t3_ParamLimits

0x5a6e,	// (0x0007be1f) popup_vitu2_query_window_t3

0xc6d7,	// (0x00082a88) popup_vitu2_query_window_t4_ParamLimits

0xc6d7,	// (0x00082a88) popup_vitu2_query_window_t4

0xc6f8,	// (0x00082aa9) popup_vitu2_query_window_t5_ParamLimits

0xc6f8,	// (0x00082aa9) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x00085dd4) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x00085dd4) popup_vitu2_query_window_t

0x2e7a,	// (0x0007922b) main_cset_text_pane

0xc0e7,	// (0x00082498) aid_area_touch_slider_ParamLimits

0xc103,	// (0x000824b4) cset_slider_pane_ParamLimits

0xc12d,	// (0x000824de) main_cset_slider_pane_g1_ParamLimits

0xc142,	// (0x000824f3) main_cset_slider_pane_g2_ParamLimits

0x2e9b,	// (0x0007924c) main_cset_slider_pane_g3_ParamLimits

0x2e9b,	// (0x0007924c) main_cset_slider_pane_g3

0xc157,	// (0x00082508) main_cset_slider_pane_g4_ParamLimits

0xc157,	// (0x00082508) main_cset_slider_pane_g4

0xc166,	// (0x00082517) main_cset_slider_pane_g5_ParamLimits

0xc166,	// (0x00082517) main_cset_slider_pane_g5

0xc174,	// (0x00082525) main_cset_slider_pane_g6_ParamLimits

0xc174,	// (0x00082525) main_cset_slider_pane_g6

0xf976,	// (0x00085d27) main_cset_slider_pane_g_ParamLimits

0x2ecb,	// (0x0007927c) main_cset_slider_pane_t1_ParamLimits

0xc204,	// (0x000825b5) main_cset_slider_pane_t2_ParamLimits

0xc21e,	// (0x000825cf) main_cset_slider_pane_t3_ParamLimits

0xc238,	// (0x000825e9) main_cset_slider_pane_t4_ParamLimits

0xc252,	// (0x00082603) main_cset_slider_pane_t5_ParamLimits

0xc270,	// (0x00082621) main_cset_slider_pane_t6_ParamLimits

0xc287,	// (0x00082638) main_cset_slider_pane_t7_ParamLimits

0xc2b5,	// (0x00082666) main_cset_slider_pane_t8_ParamLimits

0xc2b5,	// (0x00082666) main_cset_slider_pane_t8

0xc2dd,	// (0x0008268e) main_cset_slider_pane_t9_ParamLimits

0xc2dd,	// (0x0008268e) main_cset_slider_pane_t9

0xc305,	// (0x000826b6) main_cset_slider_pane_t10_ParamLimits

0xc305,	// (0x000826b6) main_cset_slider_pane_t10

0xc32d,	// (0x000826de) main_cset_slider_pane_t11_ParamLimits

0xc32d,	// (0x000826de) main_cset_slider_pane_t11

0xc357,	// (0x00082708) main_cset_slider_pane_t12_ParamLimits

0xc357,	// (0x00082708) main_cset_slider_pane_t12

0xc374,	// (0x00082725) main_cset_slider_pane_t13_ParamLimits

0xc374,	// (0x00082725) main_cset_slider_pane_t13

0xf99b,	// (0x00085d4c) main_cset_slider_pane_t_ParamLimits

0xe889,	// (0x00084c3a) bg_popup_sub_pane_cp011

0x2fe3,	// (0x00079394) main_cset_text_pane_g1

0x2feb,	// (0x0007939c) main_cset_text_pane_t1

0x2ff9,	// (0x000793aa) main_cset_text_pane_t2

0x3007,	// (0x000793b8) main_cset_text_pane_t3

0x3015,	// (0x000793c6) main_cset_text_pane_t4

0x3023,	// (0x000793d4) main_cset_text_pane_t5

0x3031,	// (0x000793e2) main_cset_text_pane_t6

0x303f,	// (0x000793f0) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x00085de3) main_cset_text_pane_t

0xe889,	// (0x00084c3a) main_cam4_burst_pane

0xe889,	// (0x00084c3a) main_cam5_pane

0xc036,	// (0x000823e7) bg_button_pane_cp019

0xc03f,	// (0x000823f0) bg_button_pane_cp020

0x2ea7,	// (0x00079258) main_cset_slider_pane_g7_ParamLimits

0x2ea7,	// (0x00079258) main_cset_slider_pane_g7

0x2eb3,	// (0x00079264) main_cset_slider_pane_g8_ParamLimits

0x2eb3,	// (0x00079264) main_cset_slider_pane_g8

0xc188,	// (0x00082539) main_cset_slider_pane_g9_ParamLimits

0xc188,	// (0x00082539) main_cset_slider_pane_g9

0xc194,	// (0x00082545) main_cset_slider_pane_g10_ParamLimits

0xc194,	// (0x00082545) main_cset_slider_pane_g10

0xc1a0,	// (0x00082551) main_cset_slider_pane_g11_ParamLimits

0xc1a0,	// (0x00082551) main_cset_slider_pane_g11

0xc1ac,	// (0x0008255d) main_cset_slider_pane_g12_ParamLimits

0xc1ac,	// (0x0008255d) main_cset_slider_pane_g12

0xc1b8,	// (0x00082569) main_cset_slider_pane_g13_ParamLimits

0xc1b8,	// (0x00082569) main_cset_slider_pane_g13

0xc1c4,	// (0x00082575) main_cset_slider_pane_g14_ParamLimits

0xc1c4,	// (0x00082575) main_cset_slider_pane_g14

0xc1d0,	// (0x00082581) main_cset_slider_pane_g15_ParamLimits

0xc1d0,	// (0x00082581) main_cset_slider_pane_g15

0x2ef9,	// (0x000792aa) main_cset_slider_pane_t14_ParamLimits

0x2ef9,	// (0x000792aa) main_cset_slider_pane_t14

0x2f32,	// (0x000792e3) main_cset_slider_pane_t15_ParamLimits

0x2f32,	// (0x000792e3) main_cset_slider_pane_t15

0xc719,	// (0x00082aca) aid_cam4_burst_size_cell_ParamLimits

0xc719,	// (0x00082aca) aid_cam4_burst_size_cell

0xc735,	// (0x00082ae6) grid_cam4_burst_pane_ParamLimits

0xc735,	// (0x00082ae6) grid_cam4_burst_pane

0xc765,	// (0x00082b16) linegrid_cam4_burst_pane_ParamLimits

0xc765,	// (0x00082b16) linegrid_cam4_burst_pane

0xc785,	// (0x00082b36) scroll_pane_cp30_ParamLimits

0xc785,	// (0x00082b36) scroll_pane_cp30

0xc791,	// (0x00082b42) cell_cam4_burst_pane_ParamLimits

0xc791,	// (0x00082b42) cell_cam4_burst_pane

0x3059,	// (0x0007940a) linegrid_cam4_burst_pane_g1_ParamLimits

0x3059,	// (0x0007940a) linegrid_cam4_burst_pane_g1

0xc7cd,	// (0x00082b7e) linegrid_cam4_burst_pane_g2_ParamLimits

0xc7cd,	// (0x00082b7e) linegrid_cam4_burst_pane_g2

0x3066,	// (0x00079417) linegrid_cam4_burst_pane_g3_ParamLimits

0x3066,	// (0x00079417) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x00085df2) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x00085df2) linegrid_cam4_burst_pane_g

0xc7de,	// (0x00082b8f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xc7de,	// (0x00082b8f) linegrid_cam4_burst_pane_g3_copy1

0x3073,	// (0x00079424) linegrid_cam4_burst_pane_g4_ParamLimits

0x3073,	// (0x00079424) linegrid_cam4_burst_pane_g4

0xc7f8,	// (0x00082ba9) linegrid_cam4_burst_pane_g5_ParamLimits

0xc7f8,	// (0x00082ba9) linegrid_cam4_burst_pane_g5

0xc809,	// (0x00082bba) linegrid_cam4_burst_pane_g6_ParamLimits

0xc809,	// (0x00082bba) linegrid_cam4_burst_pane_g6

0x3080,	// (0x00079431) linegrid_cam4_burst_pane_g7_ParamLimits

0x3080,	// (0x00079431) linegrid_cam4_burst_pane_g7

0xc81a,	// (0x00082bcb) cell_cam4_burst_pane_g1

0x3099,	// (0x0007944a) main_cam5_pane_t1_ParamLimits

0x3099,	// (0x0007944a) main_cam5_pane_t1

0x30ab,	// (0x0007945c) main_cam5_pane_t2_ParamLimits

0x30ab,	// (0x0007945c) main_cam5_pane_t2

0x30bd,	// (0x0007946e) main_cam5_pane_t3_ParamLimits

0x30bd,	// (0x0007946e) main_cam5_pane_t3

0x30cf,	// (0x00079480) main_cam5_pane_t4_ParamLimits

0x30cf,	// (0x00079480) main_cam5_pane_t4

0x30e7,	// (0x00079498) main_cam5_pane_t5_ParamLimits

0x30e7,	// (0x00079498) main_cam5_pane_t5

0x30fb,	// (0x000794ac) main_cam5_pane_t6_ParamLimits

0x30fb,	// (0x000794ac) main_cam5_pane_t6

0x310f,	// (0x000794c0) main_cam5_pane_t7_ParamLimits

0x310f,	// (0x000794c0) main_cam5_pane_t7

0x3121,	// (0x000794d2) main_cam5_pane_t8_ParamLimits

0x3121,	// (0x000794d2) main_cam5_pane_t8

0x313d,	// (0x000794ee) main_cam5_pane_t9_ParamLimits

0x313d,	// (0x000794ee) main_cam5_pane_t9

0x314f,	// (0x00079500) main_cam5_pane_t10_ParamLimits

0x314f,	// (0x00079500) main_cam5_pane_t10

0x3161,	// (0x00079512) main_cam5_pane_t11_ParamLimits

0x3161,	// (0x00079512) main_cam5_pane_t11

0x3173,	// (0x00079524) main_cam5_pane_t12_ParamLimits

0x3173,	// (0x00079524) main_cam5_pane_t12

0x3188,	// (0x00079539) main_cam5_pane_t13_ParamLimits

0x3188,	// (0x00079539) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x00085dfe) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x00085dfe) main_cam5_pane_t

0x6a17,	// (0x0007cdc8) popup_scut_keymap_window_ParamLimits

0x6a17,	// (0x0007cdc8) popup_scut_keymap_window

0xc82d,	// (0x00082bde) aid_size_cell_brow_shortcut

0x0105,	// (0x000764b6) bg_popup_window_pane_cp010

0xc839,	// (0x00082bea) grid_scut_pane

0xc845,	// (0x00082bf6) cell_scut_pane_ParamLimits

0xc845,	// (0x00082bf6) cell_scut_pane

0xc85c,	// (0x00082c0d) cell_scut_pane_g1

0x31a5,	// (0x00079556) cell_scut_pane_t1

0x31b4,	// (0x00079565) cell_scut_pane_t2

0xc865,	// (0x00082c16) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x00085e19) cell_scut_pane_t

0xa718,	// (0x00080ac9) main_mup3_pane_g8_ParamLimits

0xa718,	// (0x00080ac9) main_mup3_pane_g8

0xbc45,	// (0x00081ff6) area_vitu2_query_pane_ParamLimits

0xbc45,	// (0x00081ff6) area_vitu2_query_pane

0x59eb,	// (0x0007bd9c) input_focus_pane_cp08

0x31c3,	// (0x00079574) area_vitu2_query_pane_g1

0x5aec,	// (0x0007be9d) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x00085e20) area_vitu2_query_pane_g

0xc873,	// (0x00082c24) area_vitu2_query_pane_t1_ParamLimits

0xc873,	// (0x00082c24) area_vitu2_query_pane_t1

0xc887,	// (0x00082c38) area_vitu2_query_pane_t2_ParamLimits

0xc887,	// (0x00082c38) area_vitu2_query_pane_t2

0x5afd,	// (0x0007beae) area_vitu2_query_pane_t3_ParamLimits

0x5afd,	// (0x0007beae) area_vitu2_query_pane_t3

0x5b25,	// (0x0007bed6) area_vitu2_query_pane_t4_ParamLimits

0x5b25,	// (0x0007bed6) area_vitu2_query_pane_t4

0x5b4d,	// (0x0007befe) area_vitu2_query_pane_t5_ParamLimits

0x5b4d,	// (0x0007befe) area_vitu2_query_pane_t5

0x5b75,	// (0x0007bf26) area_vitu2_query_pane_t6_ParamLimits

0x5b75,	// (0x0007bf26) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x00085e25) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x00085e25) area_vitu2_query_pane_t

0xc89b,	// (0x00082c4c) bg_button_pane_cp018

0xc8a9,	// (0x00082c5a) bg_button_pane_cp021

0x5bc1,	// (0x0007bf72) bg_button_pane_cp022

0x5bd2,	// (0x0007bf83) input_focus_pane_cp09

0x09b4,	// (0x00076d65) aid_size_touch_mv_arrow_left

0x09dd,	// (0x00076d8e) aid_size_touch_mv_arrow_right

0xc1e8,	// (0x00082599) main_cset_slider_pane_g16_ParamLimits

0xc1e8,	// (0x00082599) main_cset_slider_pane_g16

0xc1f6,	// (0x000825a7) main_cset_slider_pane_g17_ParamLimits

0xc1f6,	// (0x000825a7) main_cset_slider_pane_g17

0xc81a,	// (0x00082bcb) cell_cam4_burst_pane_g1_ParamLimits

0xe889,	// (0x00084c3a) compa_mode_pane

0xc405,	// (0x000827b6) popup_vtel_slider_window_g3_ParamLimits

0xc405,	// (0x000827b6) popup_vtel_slider_window_g3

0xc419,	// (0x000827ca) popup_vtel_slider_window_g4_ParamLimits

0xc419,	// (0x000827ca) popup_vtel_slider_window_g4

0xc42d,	// (0x000827de) popup_vtel_slider_window_t1_ParamLimits

0xc42d,	// (0x000827de) popup_vtel_slider_window_t1

0xe889,	// (0x00084c3a) main_cl_pane

0x9a2b,	// (0x0007fddc) popup_imed_adjust2_window_ParamLimits

0x1f69,	// (0x0007831a) bg_tb_trans_pane_cp05_ParamLimits

0x28c3,	// (0x00078c74) popup_imed_adjust2_window_g1_ParamLimits

0x28d2,	// (0x00078c83) popup_imed_adjust2_window_g2_ParamLimits

0x28d2,	// (0x00078c83) popup_imed_adjust2_window_g2

0x28de,	// (0x00078c8f) popup_imed_adjust2_window_g3_ParamLimits

0x28de,	// (0x00078c8f) popup_imed_adjust2_window_g3

0x0002,

0xf7db,	// (0x00085b8c) popup_imed_adjust2_window_g_ParamLimits

0xf7db,	// (0x00085b8c) popup_imed_adjust2_window_g

0x28ea,	// (0x00078c9b) popup_imed_adjust2_window_t1_ParamLimits

0x2902,	// (0x00078cb3) slider_imed_adjust_pane_ParamLimits

0x2916,	// (0x00078cc7) slider_imed_adjust_pane_g1_ParamLimits

0x2926,	// (0x00078cd7) slider_imed_adjust_pane_g2_ParamLimits

0x2936,	// (0x00078ce7) slider_imed_adjust_pane_g3_ParamLimits

0x2947,	// (0x00078cf8) slider_imed_adjust_pane_g4_ParamLimits

0xf7e2,	// (0x00085b93) slider_imed_adjust_pane_g_ParamLimits

0xb98c,	// (0x00081d3d) aid_touch_area_cam4_ParamLimits

0xb98c,	// (0x00081d3d) aid_touch_area_cam4

0xb99c,	// (0x00081d4d) battery_pane_cp01

0xba23,	// (0x00081dd4) main_camera4_pane_g6_ParamLimits

0xba23,	// (0x00081dd4) main_camera4_pane_g6

0xba41,	// (0x00081df2) main_camera4_pane_t2_ParamLimits

0xba41,	// (0x00081df2) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x00085c9a) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x00085c9a) main_camera4_pane_t

0xbac8,	// (0x00081e79) aid_touch_area_vid4_ParamLimits

0xbac8,	// (0x00081e79) aid_touch_area_vid4

0xbb08,	// (0x00081eb9) main_video4_pane_g5_ParamLimits

0xbb08,	// (0x00081eb9) main_video4_pane_g5

0xbb2c,	// (0x00081edd) vid4_progress_pane_ParamLimits

0xbb2c,	// (0x00081edd) vid4_progress_pane

0x2ebf,	// (0x00079270) main_cset_slider_pane_g18_ParamLimits

0x2ebf,	// (0x00079270) main_cset_slider_pane_g18

0x308d,	// (0x0007943e) cell_cam4_burst_pane_g2_ParamLimits

0x308d,	// (0x0007943e) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x00085df9) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x00085df9) cell_cam4_burst_pane_g

0xc8b5,	// (0x00082c66) bg_cl_pane_ParamLimits

0xc8b5,	// (0x00082c66) bg_cl_pane

0xc8c1,	// (0x00082c72) cl_header_pane_ParamLimits

0xc8c1,	// (0x00082c72) cl_header_pane

0xc8cd,	// (0x00082c7e) cl_listscroll_pane_ParamLimits

0xc8cd,	// (0x00082c7e) cl_listscroll_pane

0x31cf,	// (0x00079580) bg_cl_pane_g1

0x31d7,	// (0x00079588) bg_cl_pane_g2

0x31df,	// (0x00079590) bg_cl_pane_g3

0x31e7,	// (0x00079598) bg_cl_pane_g4

0x31ef,	// (0x000795a0) bg_cl_pane_g5

0x31f7,	// (0x000795a8) bg_cl_pane_g6

0x31ff,	// (0x000795b0) bg_cl_pane_g7

0x3207,	// (0x000795b8) bg_cl_pane_g8

0x320f,	// (0x000795c0) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x00085e34) bg_cl_pane_g

0xc8d9,	// (0x00082c8a) aid_height_cl_leading_ParamLimits

0xc8d9,	// (0x00082c8a) aid_height_cl_leading

0xc8e5,	// (0x00082c96) aid_height_cl_text_ParamLimits

0xc8e5,	// (0x00082c96) aid_height_cl_text

0x3f86,	// (0x0007a337) bg_cl_header_pane_ParamLimits

0x3f86,	// (0x0007a337) bg_cl_header_pane

0xc8fd,	// (0x00082cae) cl_header_pane_g1_ParamLimits

0xc8fd,	// (0x00082cae) cl_header_pane_g1

0xc90a,	// (0x00082cbb) cl_header_pane_t1_ParamLimits

0xc90a,	// (0x00082cbb) cl_header_pane_t1

0x3217,	// (0x000795c8) cl_list_pane

0x2e92,	// (0x00079243) hc_scroll_pane_cp01

0x033e,	// (0x000766ef) bg_cl_header_pane_g1

0x2d78,	// (0x00079129) bg_cl_header_pane_g2

0x035e,	// (0x0007670f) bg_cl_header_pane_g3

0x2d88,	// (0x00079139) bg_cl_header_pane_g4

0x2d80,	// (0x00079131) bg_cl_header_pane_g5

0x2f9c,	// (0x0007934d) bg_cl_header_pane_g6

0x2da0,	// (0x00079151) bg_cl_header_pane_g7

0x2da8,	// (0x00079159) bg_cl_header_pane_g8

0x2d98,	// (0x00079149) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x00085e47) bg_cl_header_pane_g

0xc91c,	// (0x00082ccd) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xc91c,	// (0x00082ccd) hc_cl_list_double_graphic_heading_pane

0xc92d,	// (0x00082cde) hc_cl_list_single_graphic_pane_ParamLimits

0xc92d,	// (0x00082cde) hc_cl_list_single_graphic_pane

0xc946,	// (0x00082cf7) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xc946,	// (0x00082cf7) hc_cl_list_single_graphic_pane_g1

0xc952,	// (0x00082d03) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xc952,	// (0x00082d03) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x00085e5a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x00085e5a) hc_cl_list_single_graphic_pane_g

0xc966,	// (0x00082d17) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xc966,	// (0x00082d17) hc_cl_list_single_graphic_pane_t1

0xc946,	// (0x00082cf7) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xc946,	// (0x00082cf7) hc_cl_list_double_graphic_heading_pane_g1

0xc97b,	// (0x00082d2c) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xc97b,	// (0x00082d2c) hc_cl_list_double_graphic_heading_pane_g2

0xc98f,	// (0x00082d40) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xc98f,	// (0x00082d40) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x00085e5f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x00085e5f) hc_cl_list_double_graphic_heading_pane_g

0xc9a3,	// (0x00082d54) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xc9a3,	// (0x00082d54) hc_cl_list_double_graphic_heading_pane_t1

0xc9b8,	// (0x00082d69) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xc9b8,	// (0x00082d69) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x00085e66) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x00085e66) hc_cl_list_double_graphic_heading_pane_t

0xc9d5,	// (0x00082d86) vid4_progress_pane_g1

0xc9e5,	// (0x00082d96) vid4_progress_pane_g2

0xc9f5,	// (0x00082da6) vid4_progress_pane_g3

0xca07,	// (0x00082db8) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x00085e6b) vid4_progress_pane_g

0xca1f,	// (0x00082dd0) vid4_progress_pane_t1

0xca35,	// (0x00082de6) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x00085e76) vid4_progress_pane_t

0xca5f,	// (0x00082e10) wait_bar_pane_cp07

0x2170,	// (0x00078521) blid_firmament_pane_ParamLimits

0x21b3,	// (0x00078564) popup_blid_sat_info2_window_g1

0x21d7,	// (0x00078588) popup_blid_sat_info2_window_t3

0x21e5,	// (0x00078596) popup_blid_sat_info2_window_t4

0x21f3,	// (0x000785a4) popup_blid_sat_info2_window_t5

0x2201,	// (0x000785b2) popup_blid_sat_info2_window_t6

0x2211,	// (0x000785c2) popup_blid_sat_info2_window_t7

0x221f,	// (0x000785d0) popup_blid_sat_info2_window_t8

0x222d,	// (0x000785de) popup_blid_sat_info2_window_t9

0x223b,	// (0x000785ec) popup_blid_sat_info2_window_t10

0x22fd,	// (0x000786ae) aid_firma_cardinal_ParamLimits

0x2311,	// (0x000786c2) blid_firmament_pane_t1_ParamLimits

0x2328,	// (0x000786d9) blid_firmament_pane_t2_ParamLimits

0x233f,	// (0x000786f0) blid_firmament_pane_t3_ParamLimits

0x2356,	// (0x00078707) blid_firmament_pane_t4_ParamLimits

0xf6cf,	// (0x00085a80) blid_firmament_pane_t_ParamLimits

0x236d,	// (0x0007871e) blid_sat_info_pane_ParamLimits

0xf0a6,	// (0x00085457) main_cam_set_pane_ParamLimits

0xaeef,	// (0x000812a0) aid_size_cell_colour_35_ParamLimits

0xaf09,	// (0x000812ba) aid_size_cell_colour_112_ParamLimits

0xaf20,	// (0x000812d1) aid_size_cell_effect_ParamLimits

0xf0a6,	// (0x00085457) bg_tb_trans_pane_cp02_ParamLimits

0x064d,	// (0x000769fe) heading_imed_pane_ParamLimits

0xaf3a,	// (0x000812eb) listscroll_imed_pane_ParamLimits

0x158f,	// (0x00077940) popup_call2_audio_first_window_g5_ParamLimits

0x158f,	// (0x00077940) popup_call2_audio_first_window_g5

0xb680,	// (0x00081a31) aid_size_touch_image3_arrow_left_ParamLimits

0xb680,	// (0x00081a31) aid_size_touch_image3_arrow_left

0xb696,	// (0x00081a47) aid_size_touch_image3_arrow_right_ParamLimits

0xb696,	// (0x00081a47) aid_size_touch_image3_arrow_right

0xca4a,	// (0x00082dfb) vid4_progress_pane_t3

0xb1d8,	// (0x00081589) main_hwr_training_symbol_option_pane_ParamLimits

0xb1d8,	// (0x00081589) main_hwr_training_symbol_option_pane

0x2bb8,	// (0x00078f69) popup_hwr_training_preview_window_ParamLimits

0x2bb8,	// (0x00078f69) popup_hwr_training_preview_window

0xb239,	// (0x000815ea) hwr_training_navi_pane_g5_ParamLimits

0xb239,	// (0x000815ea) hwr_training_navi_pane_g5

0x2d66,	// (0x00079117) popup_char_count_window

0x3f86,	// (0x0007a337) bg_popup_sub_pane_cp20_ParamLimits

0xc51e,	// (0x000828cf) list_vitu2_match_list_pane_ParamLimits

0xc52a,	// (0x000828db) vitu2_page_scroll_pane_ParamLimits

0xc52a,	// (0x000828db) vitu2_page_scroll_pane

0x3220,	// (0x000795d1) list_single_hwr_training_symbol_option_pane_ParamLimits

0x3220,	// (0x000795d1) list_single_hwr_training_symbol_option_pane

0x3233,	// (0x000795e4) list_single_hwr_training_symbol_option_pane_g1

0x323b,	// (0x000795ec) list_single_hwr_training_symbol_option_pane_t1

0x3249,	// (0x000795fa) bg_button_pane_cp023

0x3252,	// (0x00079603) bg_button_pane_cp024

0xca95,	// (0x00082e46) vitu2_page_scroll_pane_g1

0xca9d,	// (0x00082e4e) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x00085e7d) vitu2_page_scroll_pane_g

0xcaa5,	// (0x00082e56) vitu2_page_scroll_pane_t1

0x20d0,	// (0x00078481) popup_char_count_window_g1

0x3285,	// (0x00079636) popup_char_count_window_g2

0x328e,	// (0x0007963f) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x00085e82) popup_char_count_window_g

0x3297,	// (0x00079648) popup_char_count_window_t1

0xe889,	// (0x00084c3a) main_vded2_pane

0x28af,	// (0x00078c60) aid_size_cell_imed_line

0x28b9,	// (0x00078c6a) grid_imed_line_width_pane

0xbb9a,	// (0x00081f4b) vid4_indicators_pane_g4

0x32a5,	// (0x00079656) cell_imed_line_width_pane_ParamLimits

0x32a5,	// (0x00079656) cell_imed_line_width_pane

0x32b9,	// (0x0007966a) cell_imed_line_width_pane_g1

0x2a8b,	// (0x00078e3c) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x00085e89) cell_imed_line_width_pane_g

0xcab4,	// (0x00082e65) main_vded2_pane_g1_ParamLimits

0xcab4,	// (0x00082e65) main_vded2_pane_g1

0xcac1,	// (0x00082e72) main_vded2_pane_g2_ParamLimits

0xcac1,	// (0x00082e72) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x00085e8e) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x00085e8e) main_vded2_pane_g

0xcacf,	// (0x00082e80) vded2_slider_pane_ParamLimits

0xcacf,	// (0x00082e80) vded2_slider_pane

0xcadc,	// (0x00082e8d) aid_size_touch_vded2_end

0xcae6,	// (0x00082e97) aid_size_touch_vded2_playhead

0x32c2,	// (0x00079673) aid_size_touch_vded2_start

0x32ca,	// (0x0007967b) vded2_slider_bg_pane

0x32d3,	// (0x00079684) vded2_slider_pane_g1

0x32dc,	// (0x0007968d) vded2_slider_pane_g2

0xcaee,	// (0x00082e9f) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x00085e93) vded2_slider_pane_g

0x32e4,	// (0x00079695) vded2_slider_bg_pane_g1

0x32ed,	// (0x0007969e) vded2_slider_bg_pane_g2

0x32f6,	// (0x000796a7) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x00085e9a) vded2_slider_bg_pane_g

0x9283,	// (0x0007f634) aid_postcard_touch_down_pane_ParamLimits

0x9283,	// (0x0007f634) aid_postcard_touch_down_pane

0x9293,	// (0x0007f644) aid_postcard_touch_up_pane_ParamLimits

0x9293,	// (0x0007f644) aid_postcard_touch_up_pane

0xe889,	// (0x00084c3a) main_blid2_pane

0x99b6,	// (0x0007fd67) popup_blid2_search_window

0xe889,	// (0x00084c3a) blid2_gps_pane

0xe889,	// (0x00084c3a) blid2_navig_pane

0xe889,	// (0x00084c3a) blid2_search_pane

0xe889,	// (0x00084c3a) blid2_tripm_pane

0xcaf7,	// (0x00082ea8) blid2_search_pane_g1_ParamLimits

0xcaf7,	// (0x00082ea8) blid2_search_pane_g1

0xcb07,	// (0x00082eb8) blid2_search_pane_t1_ParamLimits

0xcb07,	// (0x00082eb8) blid2_search_pane_t1

0xcb19,	// (0x00082eca) aid_size_cell_blid2_gps_ParamLimits

0xcb19,	// (0x00082eca) aid_size_cell_blid2_gps

0xcb29,	// (0x00082eda) blid2_gps_pane_g1_ParamLimits

0xcb29,	// (0x00082eda) blid2_gps_pane_g1

0xcb35,	// (0x00082ee6) grid_blid2_satellite_pane_ParamLimits

0xcb35,	// (0x00082ee6) grid_blid2_satellite_pane

0xcb45,	// (0x00082ef6) blid2_navig_pane_g1_ParamLimits

0xcb45,	// (0x00082ef6) blid2_navig_pane_g1

0xcb51,	// (0x00082f02) blid2_navig_pane_t1_ParamLimits

0xcb51,	// (0x00082f02) blid2_navig_pane_t1

0xcb63,	// (0x00082f14) blid2_navig_pane_t2_ParamLimits

0xcb63,	// (0x00082f14) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x00085ea1) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x00085ea1) blid2_navig_pane_t

0xcb75,	// (0x00082f26) blid2_navig_ring_pane_ParamLimits

0xcb75,	// (0x00082f26) blid2_navig_ring_pane

0xcb85,	// (0x00082f36) blid2_speed_pane_ParamLimits

0xcb85,	// (0x00082f36) blid2_speed_pane

0xcb91,	// (0x00082f42) blid2_tripm_pane_g1_ParamLimits

0xcb91,	// (0x00082f42) blid2_tripm_pane_g1

0xcba1,	// (0x00082f52) blid2_tripm_pane_g2_ParamLimits

0xcba1,	// (0x00082f52) blid2_tripm_pane_g2

0xcbad,	// (0x00082f5e) blid2_tripm_pane_g3_ParamLimits

0xcbad,	// (0x00082f5e) blid2_tripm_pane_g3

0xcbb9,	// (0x00082f6a) blid2_tripm_pane_g4_ParamLimits

0xcbb9,	// (0x00082f6a) blid2_tripm_pane_g4

0xcbc5,	// (0x00082f76) blid2_tripm_pane_g5_ParamLimits

0xcbc5,	// (0x00082f76) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00085ea6) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00085ea6) blid2_tripm_pane_g

0xcbe1,	// (0x00082f92) blid2_tripm_pane_t1_ParamLimits

0xcbe1,	// (0x00082f92) blid2_tripm_pane_t1

0xcbf5,	// (0x00082fa6) blid2_tripm_pane_t2_ParamLimits

0xcbf5,	// (0x00082fa6) blid2_tripm_pane_t2

0xcc07,	// (0x00082fb8) blid2_tripm_pane_t3_ParamLimits

0xcc07,	// (0x00082fb8) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x00085eb3) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x00085eb3) blid2_tripm_pane_t

0xcc39,	// (0x00082fea) cell_blid2_satellite_pane_ParamLimits

0xcc39,	// (0x00082fea) cell_blid2_satellite_pane

0xcc53,	// (0x00083004) cell_blid2_satellite_pane_g1

0x32ff,	// (0x000796b0) cell_blid2_satellite_pane_t1

0x237d,	// (0x0007872e) blid2_speed_pane_g1

0x330d,	// (0x000796be) blid2_speed_pane_t1

0x331b,	// (0x000796cc) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x00085ebc) blid2_speed_pane_t

0x237d,	// (0x0007872e) blid2_navig_ring_pane_g1

0xcc5c,	// (0x0008300d) blid2_navig_ring_pane_g2

0xcc64,	// (0x00083015) blid2_navig_ring_pane_g3

0xcc6c,	// (0x0008301d) blid2_navig_ring_pane_g4

0xcc74,	// (0x00083025) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x00085ec1) blid2_navig_ring_pane_g

0xe889,	// (0x00084c3a) bg_popup_window_pane_cp011

0x3329,	// (0x000796da) popup_blid2_search_window_g1

0x3331,	// (0x000796e2) popup_blid2_search_window_t1

0x333f,	// (0x000796f0) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x00085ecc) popup_blid2_search_window_t

0x024d,	// (0x000765fe) main_browser_pane_g1

0xefdd,	// (0x0008538e) main_browser_pane_ParamLimits

0xf0a6,	// (0x00085457) bg_button_pane_cp011_ParamLimits

0xbe09,	// (0x000821ba) cell_vitu2_function_pane_g1_ParamLimits

0x1f69,	// (0x0007831a) bg_popup_sub_pane_cp22_ParamLimits

0x59eb,	// (0x0007bd9c) input_focus_pane_cp08_ParamLimits

0xc6c6,	// (0x00082a77) popup_vitu2_query_button_pane_ParamLimits

0xc6c6,	// (0x00082a77) popup_vitu2_query_button_pane

0x5a02,	// (0x0007bdb3) popup_vitu2_query_input_button_pane

0x2fd7,	// (0x00079388) popup_vitu2_query_window_g1_ParamLimits

0x5a0c,	// (0x0007bdbd) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x00085dcd) popup_vitu2_query_window_g_ParamLimits

0xe889,	// (0x00084c3a) bg_button_pane_cp026

0xcc7c,	// (0x0008302d) popup_vitu2_query_input_button_pane_g1

0xe889,	// (0x00084c3a) bg_button_pane_cp025

0x334d,	// (0x000796fe) popup_vitu2_query_button_pane_t1

0xa414,	// (0x000807c5) main_mp3_pane_t6

0xa424,	// (0x000807d5) popup_slider_window_cp01

0xba77,	// (0x00081e28) cam4_battery_pane

0xbb57,	// (0x00081f08) cam4_battery_pane_cp02

0xc9cd,	// (0x00082d7e) cam4_battery_pane_cp01

0xc9cd,	// (0x00082d7e) cam4_battery_pane_cp03

0x237d,	// (0x0007872e) cam4_battery_pane_g1

0x2cc3,	// (0x00079074) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x00085ed1) cam4_battery_pane_g

0x2249,	// (0x000785fa) popup_blid_sat_info2_window_t11

0x09b4,	// (0x00076d65) aid_size_touch_mv_arrow_left_ParamLimits

0x09dd,	// (0x00076d8e) aid_size_touch_mv_arrow_right_ParamLimits

0x0a3b,	// (0x00076dec) navi_pane_g1_ParamLimits

0x0a47,	// (0x00076df8) navi_pane_g2_ParamLimits

0x0a75,	// (0x00076e26) navi_pane_g3_ParamLimits

0xf3e1,	// (0x00085792) navi_pane_g_ParamLimits

0x8cf9,	// (0x0007f0aa) navi_pane_mv_t1_ParamLimits

0xaf46,	// (0x000812f7) grid_imed_effect_pane_ParamLimits

0x77e8,	// (0x0007db99) aid_placing_vt_slider_lsc

0x019c,	// (0x0007654d) aid_placing_vt_slider_prt

0xf0a6,	// (0x00085457) bg_tb_trans_pane_cp01_ParamLimits

0x2500,	// (0x000788b1) popup_image_details_window_g1_ParamLimits

0x2513,	// (0x000788c4) popup_image_details_window_g2_ParamLimits

0x2528,	// (0x000788d9) popup_image_details_window_g3_ParamLimits

0x2528,	// (0x000788d9) popup_image_details_window_g3

0xf714,	// (0x00085ac5) popup_image_details_window_g_ParamLimits

0x253c,	// (0x000788ed) popup_image_details_window_t1_ParamLimits

0x254e,	// (0x000788ff) popup_image_details_window_t2_ParamLimits

0x2567,	// (0x00078918) popup_image_details_window_t3_ParamLimits

0x257b,	// (0x0007892c) popup_image_details_window_t4_ParamLimits

0x2596,	// (0x00078947) popup_image_details_window_t5_ParamLimits

0xf71b,	// (0x00085acc) popup_image_details_window_t_ParamLimits

0xc8f1,	// (0x00082ca2) cl_header_name_pane_ParamLimits

0xc8f1,	// (0x00082ca2) cl_header_name_pane

0xcc84,	// (0x00083035) cl_header_name_pane_t1_ParamLimits

0xcc84,	// (0x00083035) cl_header_name_pane_t1

0xcc9b,	// (0x0008304c) cl_header_name_pane_t2_ParamLimits

0xcc9b,	// (0x0008304c) cl_header_name_pane_t2

0xccc5,	// (0x00083076) cl_header_name_pane_t3_ParamLimits

0xccc5,	// (0x00083076) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00085ed6) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00085ed6) cl_header_name_pane_t

0x0b04,	// (0x00076eb5) navi_pane_mv_g2_ParamLimits

0x2d40,	// (0x000790f1) field_vitu2_entry_pane_g1_ParamLimits

0x2d4c,	// (0x000790fd) field_vitu2_entry_pane_g2_ParamLimits

0x2d58,	// (0x00079109) field_vitu2_entry_pane_g3_ParamLimits

0x2d58,	// (0x00079109) field_vitu2_entry_pane_g3

0xf91b,	// (0x00085ccc) field_vitu2_entry_pane_g_ParamLimits

0xbd9d,	// (0x0008214e) cell_vitu2_itu_pane_g1_ParamLimits

0xbdaf,	// (0x00082160) cell_vitu2_itu_pane_g2_ParamLimits

0xbdaf,	// (0x00082160) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x00085cd8) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x00085cd8) cell_vitu2_itu_pane_g

0xf0a6,	// (0x00085457) bg_vkb2_func_pane_cp05_ParamLimits

0xf0a6,	// (0x00085457) bg_vkb2_func_pane_cp05

0xf0a6,	// (0x00085457) bg_vkb2_func_pane_cp03

0xf0a6,	// (0x00085457) bg_vkb2_func_pane_cp04

0xf0a6,	// (0x00085457) bg_vkb2_func_pane_cp10_ParamLimits

0xf0a6,	// (0x00085457) bg_vkb2_func_pane_cp10

0x5bc1,	// (0x0007bf72) bg_vkb2_func_pane_cp08

0xc89b,	// (0x00082c4c) bg_vkb2_func_pane_cp06

0xc8a9,	// (0x00082c5a) bg_vkb2_func_pane_cp07

0x325b,	// (0x0007960c) bg_vkb2_func_pane_cp11_ParamLimits

0x325b,	// (0x0007960c) bg_vkb2_func_pane_cp11

0x3270,	// (0x00079621) bg_vkb2_func_pane_cp12_ParamLimits

0x3270,	// (0x00079621) bg_vkb2_func_pane_cp12

0xe889,	// (0x00084c3a) bg_vkb2_func_pane_cp09

0x2d78,	// (0x00079129) bg_vkb2_func_pane_g1

0x035e,	// (0x0007670f) bg_vkb2_func_pane_g2

0x2d80,	// (0x00079131) bg_vkb2_func_pane_g3

0x2d88,	// (0x00079139) bg_vkb2_func_pane_g4

0x2f9c,	// (0x0007934d) bg_vkb2_func_pane_g5

0x2da0,	// (0x00079151) bg_vkb2_func_pane_g6

0x2da8,	// (0x00079159) bg_vkb2_func_pane_g7

0x2d98,	// (0x00079149) bg_vkb2_func_pane_g8

0x033e,	// (0x000766ef) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x00085edd) bg_vkb2_func_pane_g

0xcbd3,	// (0x00082f84) blid2_tripm_pane_g6_ParamLimits

0xcbd3,	// (0x00082f84) blid2_tripm_pane_g6

0x2c76,	// (0x00079027) mp4_progress_pane_g1

0xcc2d,	// (0x00082fde) blid2_tripm_values_pane_ParamLimits

0xcc2d,	// (0x00082fde) blid2_tripm_values_pane

0xccea,	// (0x0008309b) blid2_tripm_values_pane_t1

0xccf8,	// (0x000830a9) blid2_tripm_values_pane_t2

0xcd06,	// (0x000830b7) blid2_tripm_values_pane_t3

0xcd14,	// (0x000830c5) blid2_tripm_values_pane_t4

0xcd22,	// (0x000830d3) blid2_tripm_values_pane_t5

0xcd30,	// (0x000830e1) blid2_tripm_values_pane_t6

0xcd3e,	// (0x000830ef) blid2_tripm_values_pane_t7

0xcd4c,	// (0x000830fd) blid2_tripm_values_pane_t8

0xcd5a,	// (0x0008310b) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x00085ef0) blid2_tripm_values_pane_t

0x7828,	// (0x0007dbd9) call_video_pane_t1_ParamLimits

0x7849,	// (0x0007dbfa) call_video_pane_t2_ParamLimits

0xf26a,	// (0x0008561b) call_video_pane_t_ParamLimits

0x57a5,	// (0x0007bb56) msg_header_pane_g1_ParamLimits

0x0cec,	// (0x0007709d) msg_header_pane_g2_ParamLimits

0x0cec,	// (0x0007709d) msg_header_pane_g2

0x0001,

0xf484,	// (0x00085835) msg_header_pane_g_ParamLimits

0xf484,	// (0x00085835) msg_header_pane_g

0xefdd,	// (0x0008538e) main_clock2_pane_ParamLimits

0xacc0,	// (0x00081071) grid_clock2_toolbar_pane_ParamLimits

0xacc0,	// (0x00081071) grid_clock2_toolbar_pane

0xacc0,	// (0x00081071) listscroll_clock2_pane_ParamLimits

0xacc0,	// (0x00081071) listscroll_clock2_pane

0xad70,	// (0x00081121) main_clock2_pane_t3_ParamLimits

0xad70,	// (0x00081121) main_clock2_pane_t3

0xad82,	// (0x00081133) main_clock2_pane_t4_ParamLimits

0xad82,	// (0x00081133) main_clock2_pane_t4

0x335b,	// (0x0007970c) cell_clock2_toolbar_pane

0x3363,	// (0x00079714) cell_clock2_toolbar_pane_cp01

0x3363,	// (0x00079714) cell_clock2_toolbar_pane_cp02

0x336b,	// (0x0007971c) cell_clock2_toolbar_pane_cp03

0x3373,	// (0x00079724) list_clock2_pane

0x092a,	// (0x00076cdb) scroll_pane_cp10

0x337b,	// (0x0007972c) list_single_clock2_pane_ParamLimits

0x337b,	// (0x0007972c) list_single_clock2_pane

0x0105,	// (0x000764b6) list_highlight_pane_cp08

0x3388,	// (0x00079739) list_single_clock2_pane_t1

0x3396,	// (0x00079747) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x00085f03) list_single_clock2_pane_t

0xe889,	// (0x00084c3a) bg_button_pane_cp10

0x33a4,	// (0x00079755) cell_clock2_toolbar_pane_g1

0x91e5,	// (0x0007f596) aid_main_viewer_pane_g1_ParamLimits

0x91e5,	// (0x0007f596) aid_main_viewer_pane_g1

0x91f1,	// (0x0007f5a2) aid_main_viewer_pane_g2_ParamLimits

0x91f1,	// (0x0007f5a2) aid_main_viewer_pane_g2

0x91fd,	// (0x0007f5ae) aid_main_viewer_pane_g3_ParamLimits

0x91fd,	// (0x0007f5ae) aid_main_viewer_pane_g3

0x920e,	// (0x0007f5bf) aid_main_viewer_pane_g4_ParamLimits

0x920e,	// (0x0007f5bf) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x00085846) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x00085846) aid_main_viewer_pane_g

0x998e,	// (0x0007fd3f) main_calc_pane_ParamLimits

0x999b,	// (0x0007fd4c) main_dialer2_pane_ParamLimits

0xe889,	// (0x00084c3a) main_cam6_pane

0xe889,	// (0x00084c3a) main_vid6_pane

0xaccc,	// (0x0008107d) listscroll_gen_pane_cp06_ParamLimits

0xaccc,	// (0x0008107d) listscroll_gen_pane_cp06

0xad94,	// (0x00081145) main_clock2_pane_t5_ParamLimits

0xad94,	// (0x00081145) main_clock2_pane_t5

0xade1,	// (0x00081192) aid_call2_pane_cp10_ParamLimits

0xadf3,	// (0x000811a4) aid_call_pane_cp10_ParamLimits

0x09a8,	// (0x00076d59) popup_clock_analogue_window_cp10_g1_ParamLimits

0x09a8,	// (0x00076d59) popup_clock_analogue_window_cp10_g2_ParamLimits

0xae05,	// (0x000811b6) popup_clock_analogue_window_cp10_g3_ParamLimits

0xae05,	// (0x000811b6) popup_clock_analogue_window_cp10_g4_ParamLimits

0x09a8,	// (0x00076d59) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d0,	// (0x00085b81) popup_clock_analogue_window_cp10_g_ParamLimits

0xae1b,	// (0x000811cc) popup_clock_analogue_window_cp10_t1_ParamLimits

0xb62d,	// (0x000819de) cell_dialer2_keypad_pane_g2_ParamLimits

0xb62d,	// (0x000819de) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x00085c6b) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x00085c6b) cell_dialer2_keypad_pane_g

0xb649,	// (0x000819fa) cell_dialer2_keypad_pane_t1

0xc0d4,	// (0x00082485) main_cset_text2_pane_ParamLimits

0xc0d4,	// (0x00082485) main_cset_text2_pane

0x31c3,	// (0x00079574) area_vitu2_query_pane_g1_ParamLimits

0x5aec,	// (0x0007be9d) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x00085e20) area_vitu2_query_pane_g_ParamLimits

0x5b9d,	// (0x0007bf4e) area_vitu2_query_pane_t7_ParamLimits

0x5b9d,	// (0x0007bf4e) area_vitu2_query_pane_t7

0xc89b,	// (0x00082c4c) bg_button_pane_cp018_ParamLimits

0xc8a9,	// (0x00082c5a) bg_button_pane_cp021_ParamLimits

0x5bc1,	// (0x0007bf72) bg_button_pane_cp022_ParamLimits

0x5bc1,	// (0x0007bf72) bg_vkb2_func_pane_cp08_ParamLimits

0xc89b,	// (0x00082c4c) bg_vkb2_func_pane_cp06_ParamLimits

0xc8a9,	// (0x00082c5a) bg_vkb2_func_pane_cp07_ParamLimits

0x5bd2,	// (0x0007bf83) input_focus_pane_cp09_ParamLimits

0xcd68,	// (0x00083119) cam6_autofocus_pane_ParamLimits

0xcd68,	// (0x00083119) cam6_autofocus_pane

0xcd8a,	// (0x0008313b) cam6_image_uncrop_pane_ParamLimits

0xcd8a,	// (0x0008313b) cam6_image_uncrop_pane

0xcdb7,	// (0x00083168) cam6_indi_pane_ParamLimits

0xcdb7,	// (0x00083168) cam6_indi_pane

0xcdd1,	// (0x00083182) cam6_mode_pane_ParamLimits

0xcdd1,	// (0x00083182) cam6_mode_pane

0xcde5,	// (0x00083196) cam6_timer_pane_ParamLimits

0xcde5,	// (0x00083196) cam6_timer_pane

0xcdf1,	// (0x000831a2) cam6_zoom_pane_ParamLimits

0xcdf1,	// (0x000831a2) cam6_zoom_pane

0xce09,	// (0x000831ba) cam6_mode_pane_g1_ParamLimits

0xce09,	// (0x000831ba) cam6_mode_pane_g1

0xce15,	// (0x000831c6) cam6_mode_pane_g2_ParamLimits

0xce15,	// (0x000831c6) cam6_mode_pane_g2

0xce21,	// (0x000831d2) cam6_mode_pane_g3_ParamLimits

0xce21,	// (0x000831d2) cam6_mode_pane_g3

0xce2d,	// (0x000831de) cam6_mode_pane_g4_ParamLimits

0xce2d,	// (0x000831de) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x00085f08) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x00085f08) cam6_mode_pane_g

0x33ac,	// (0x0007975d) bg_tb_trans_pane_cp08_ParamLimits

0x33ac,	// (0x0007975d) bg_tb_trans_pane_cp08

0x33ba,	// (0x0007976b) cam6_battery_pane_ParamLimits

0x33ba,	// (0x0007976b) cam6_battery_pane

0x33d0,	// (0x00079781) cam6_indi_pane_g1_ParamLimits

0x33d0,	// (0x00079781) cam6_indi_pane_g1

0x33e2,	// (0x00079793) cam6_indi_pane_g2_ParamLimits

0x33e2,	// (0x00079793) cam6_indi_pane_g2

0x33f4,	// (0x000797a5) cam6_indi_pane_g3_ParamLimits

0x33f4,	// (0x000797a5) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x00085f11) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x00085f11) cam6_indi_pane_g

0x3406,	// (0x000797b7) cam6_indi_pane_t1_ParamLimits

0x3406,	// (0x000797b7) cam6_indi_pane_t1

0xbbcf,	// (0x00081f80) cam6_autofocus_pane_g1

0xbbd7,	// (0x00081f88) cam6_autofocus_pane_g2

0xbbdf,	// (0x00081f90) cam6_autofocus_pane_g3

0xbbe7,	// (0x00081f98) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x00085f18) cam6_autofocus_pane_g

0x342c,	// (0x000797dd) cam6_timer_pane_g1

0x3434,	// (0x000797e5) cam6_timer_pane_t1

0x3442,	// (0x000797f3) cam6_zoom_cont_pane

0x344a,	// (0x000797fb) cam6_zoom_pane_g1

0x3452,	// (0x00079803) cam6_zoom_pane_g2

0xce39,	// (0x000831ea) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x00085f21) cam6_zoom_pane_g

0x237d,	// (0x0007872e) cam6_battery_pane_g1

0x237d,	// (0x0007872e) cam6_battery_pane_g2

0x0001,

0xf6d8,	// (0x00085a89) cam6_battery_pane_g

0x345a,	// (0x0007980b) cam6_zoom_cont_pane_g1

0x3463,	// (0x00079814) cam6_zoom_cont_pane_g2

0x346c,	// (0x0007981d) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x00085f28) cam6_zoom_cont_pane_g

0xce56,	// (0x00083207) cam6_mode_pane_cp_ParamLimits

0xce56,	// (0x00083207) cam6_mode_pane_cp

0xcdf1,	// (0x000831a2) cam6_zoom_pane_cp_ParamLimits

0xcdf1,	// (0x000831a2) cam6_zoom_pane_cp

0xce6a,	// (0x0008321b) vid6_image_uncrop_cif_pane_ParamLimits

0xce6a,	// (0x0008321b) vid6_image_uncrop_cif_pane

0xce96,	// (0x00083247) vid6_image_uncrop_nhd_pane_ParamLimits

0xce96,	// (0x00083247) vid6_image_uncrop_nhd_pane

0xcd8a,	// (0x0008313b) vid6_image_uncrop_vga_pane_ParamLimits

0xcd8a,	// (0x0008313b) vid6_image_uncrop_vga_pane

0xceb3,	// (0x00083264) vid6_image_uncrop_wvga_pane_ParamLimits

0xceb3,	// (0x00083264) vid6_image_uncrop_wvga_pane

0xced0,	// (0x00083281) vid6_indi_pane_ParamLimits

0xced0,	// (0x00083281) vid6_indi_pane

0x33ac,	// (0x0007975d) bg_tb_trans_pane_cp09_ParamLimits

0x33ac,	// (0x0007975d) bg_tb_trans_pane_cp09

0x3484,	// (0x00079835) cam6_battery_pane_cp_ParamLimits

0x3484,	// (0x00079835) cam6_battery_pane_cp

0x3490,	// (0x00079841) vid6_indi_pane_g1_ParamLimits

0x3490,	// (0x00079841) vid6_indi_pane_g1

0x34a2,	// (0x00079853) vid6_indi_pane_g2_ParamLimits

0x34a2,	// (0x00079853) vid6_indi_pane_g2

0x34b4,	// (0x00079865) vid6_indi_pane_g3_ParamLimits

0x34b4,	// (0x00079865) vid6_indi_pane_g3

0x34c9,	// (0x0007987a) vid6_indi_pane_g4_ParamLimits

0x34c9,	// (0x0007987a) vid6_indi_pane_g4

0x34de,	// (0x0007988f) vid6_indi_pane_g5_ParamLimits

0x34de,	// (0x0007988f) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x00085f2f) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x00085f2f) vid6_indi_pane_g

0x351c,	// (0x000798cd) vid6_indi_pane_t1_ParamLimits

0x351c,	// (0x000798cd) vid6_indi_pane_t1

0x3532,	// (0x000798e3) vid6_indi_pane_t2_ParamLimits

0x3532,	// (0x000798e3) vid6_indi_pane_t2

0x355a,	// (0x0007990b) vid6_indi_pane_t3_ParamLimits

0x355a,	// (0x0007990b) vid6_indi_pane_t3

0x3582,	// (0x00079933) vid6_indi_pane_t4_ParamLimits

0x3582,	// (0x00079933) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x00085f3a) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x00085f3a) vid6_indi_pane_t

0x35a6,	// (0x00079957) wait_bar_pane_cp08

0xcef5,	// (0x000832a6) main_cset_text2_pane_t1_ParamLimits

0xcef5,	// (0x000832a6) main_cset_text2_pane_t1

0xce41,	// (0x000831f2) listscroll_gen_pane_cp06_t1_ParamLimits

0xce41,	// (0x000831f2) listscroll_gen_pane_cp06_t1

0xe889,	// (0x00084c3a) main_cam6_set_pane

0x25e0,	// (0x00078991) bg_tb_trans_pane_cp06_ParamLimits

0xba7f,	// (0x00081e30) cam4_indicators_pane_g1_ParamLimits

0xba90,	// (0x00081e41) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x00085ca8) cam4_indicators_pane_g_ParamLimits

0xbaae,	// (0x00081e5f) cam4_indicators_pane_t1_ParamLimits

0xf0a6,	// (0x00085457) bg_tb_trans_pane_cp07_ParamLimits

0xbb61,	// (0x00081f12) vid4_indicators_pane_g1_ParamLimits

0xbb75,	// (0x00081f26) vid4_indicators_pane_g2_ParamLimits

0xbb89,	// (0x00081f3a) vid4_indicators_pane_g3_ParamLimits

0xbb9a,	// (0x00081f4b) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x00085cba) vid4_indicators_pane_g_ParamLimits

0xbbb8,	// (0x00081f69) vid4_indicators_pane_t1_ParamLimits

0xc9d5,	// (0x00082d86) vid4_progress_pane_g1_ParamLimits

0xc9e5,	// (0x00082d96) vid4_progress_pane_g2_ParamLimits

0xc9f5,	// (0x00082da6) vid4_progress_pane_g3_ParamLimits

0xca07,	// (0x00082db8) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x00085e6b) vid4_progress_pane_g_ParamLimits

0xca1f,	// (0x00082dd0) vid4_progress_pane_t1_ParamLimits

0xca35,	// (0x00082de6) vid4_progress_pane_t2_ParamLimits

0xca4a,	// (0x00082dfb) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x00085e76) vid4_progress_pane_t_ParamLimits

0xca5f,	// (0x00082e10) wait_bar_pane_cp07_ParamLimits

0xcf28,	// (0x000832d9) main_cam6_set_pane_g2_ParamLimits

0xcf28,	// (0x000832d9) main_cam6_set_pane_g2

0xcf34,	// (0x000832e5) main_cset6_listscroll_pane_ParamLimits

0xcf34,	// (0x000832e5) main_cset6_listscroll_pane

0xcf5f,	// (0x00083310) main_cset6_slider_pane_ParamLimits

0xcf5f,	// (0x00083310) main_cset6_slider_pane

0xcf6b,	// (0x0008331c) main_cset6_text2_pane_ParamLimits

0xcf6b,	// (0x0008331c) main_cset6_text2_pane

0x35b5,	// (0x00079966) main_cset6_text_pane

0x35bd,	// (0x0007996e) main_cset_list_pane_copy1_ParamLimits

0x35bd,	// (0x0007996e) main_cset_list_pane_copy1

0x35cd,	// (0x0007997e) scroll_pane_cp028_copy1

0xcf7e,	// (0x0008332f) cset_list_set_pane_copy1

0xcf91,	// (0x00083342) aid_position_infowindow_above_copy1

0xcf99,	// (0x0008334a) aid_position_infowindow_below_copy1

0xcfa1,	// (0x00083352) cset_list_set_pane_g1_copy1

0x596b,	// (0x0007bd1c) cset_list_set_pane_g3_copy1_ParamLimits

0x596b,	// (0x0007bd1c) cset_list_set_pane_g3_copy1

0x597a,	// (0x0007bd2b) cset_list_set_pane_t1_copy1_ParamLimits

0x597a,	// (0x0007bd2b) cset_list_set_pane_t1_copy1

0xf0a6,	// (0x00085457) list_highlight_pane_cp021_copy1_ParamLimits

0xf0a6,	// (0x00085457) list_highlight_pane_cp021_copy1

0x35d6,	// (0x00079987) cset6_slider_pane_ParamLimits

0x35d6,	// (0x00079987) cset6_slider_pane

0x3602,	// (0x000799b3) main_cset6_slider_pane_g1_ParamLimits

0x3602,	// (0x000799b3) main_cset6_slider_pane_g1

0xcfa9,	// (0x0008335a) main_cset6_slider_pane_g2_ParamLimits

0xcfa9,	// (0x0008335a) main_cset6_slider_pane_g2

0x362a,	// (0x000799db) main_cset6_slider_pane_g3_ParamLimits

0x362a,	// (0x000799db) main_cset6_slider_pane_g3

0xcfd1,	// (0x00083382) main_cset6_slider_pane_g4_ParamLimits

0xcfd1,	// (0x00083382) main_cset6_slider_pane_g4

0xcfdd,	// (0x0008338e) main_cset6_slider_pane_g5_ParamLimits

0xcfdd,	// (0x0008338e) main_cset6_slider_pane_g5

0x2ea7,	// (0x00079258) main_cset6_slider_pane_g7_ParamLimits

0x2ea7,	// (0x00079258) main_cset6_slider_pane_g7

0x2eb3,	// (0x00079264) main_cset6_slider_pane_g8_ParamLimits

0x2eb3,	// (0x00079264) main_cset6_slider_pane_g8

0xcfeb,	// (0x0008339c) main_cset6_slider_pane_g9_ParamLimits

0xcfeb,	// (0x0008339c) main_cset6_slider_pane_g9

0xcff7,	// (0x000833a8) main_cset6_slider_pane_g10_ParamLimits

0xcff7,	// (0x000833a8) main_cset6_slider_pane_g10

0xd003,	// (0x000833b4) main_cset6_slider_pane_g11_ParamLimits

0xd003,	// (0x000833b4) main_cset6_slider_pane_g11

0xd00f,	// (0x000833c0) main_cset6_slider_pane_g12_ParamLimits

0xd00f,	// (0x000833c0) main_cset6_slider_pane_g12

0xd01b,	// (0x000833cc) main_cset6_slider_pane_g13_ParamLimits

0xd01b,	// (0x000833cc) main_cset6_slider_pane_g13

0xd027,	// (0x000833d8) main_cset6_slider_pane_g14_ParamLimits

0xd027,	// (0x000833d8) main_cset6_slider_pane_g14

0xd033,	// (0x000833e4) main_cset6_slider_pane_g15_ParamLimits

0xd033,	// (0x000833e4) main_cset6_slider_pane_g15

0xd04b,	// (0x000833fc) main_cset6_slider_pane_g16_ParamLimits

0xd04b,	// (0x000833fc) main_cset6_slider_pane_g16

0xd059,	// (0x0008340a) main_cset6_slider_pane_g17_ParamLimits

0xd059,	// (0x0008340a) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x00085f43) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x00085f43) main_cset6_slider_pane_g

0x3636,	// (0x000799e7) main_cset6_slider_pane_t1_ParamLimits

0x3636,	// (0x000799e7) main_cset6_slider_pane_t1

0xd07f,	// (0x00083430) main_cset6_slider_pane_t2_ParamLimits

0xd07f,	// (0x00083430) main_cset6_slider_pane_t2

0xd0aa,	// (0x0008345b) main_cset6_slider_pane_t3_ParamLimits

0xd0aa,	// (0x0008345b) main_cset6_slider_pane_t3

0xd0d5,	// (0x00083486) main_cset6_slider_pane_t4_ParamLimits

0xd0d5,	// (0x00083486) main_cset6_slider_pane_t4

0xd100,	// (0x000834b1) main_cset6_slider_pane_t5_ParamLimits

0xd100,	// (0x000834b1) main_cset6_slider_pane_t5

0x3677,	// (0x00079a28) main_cset6_slider_pane_t7_ParamLimits

0x3677,	// (0x00079a28) main_cset6_slider_pane_t7

0xd12d,	// (0x000834de) main_cset6_slider_pane_t8_ParamLimits

0xd12d,	// (0x000834de) main_cset6_slider_pane_t8

0xd151,	// (0x00083502) main_cset6_slider_pane_t9_ParamLimits

0xd151,	// (0x00083502) main_cset6_slider_pane_t9

0xd175,	// (0x00083526) main_cset6_slider_pane_t10_ParamLimits

0xd175,	// (0x00083526) main_cset6_slider_pane_t10

0xd199,	// (0x0008354a) main_cset6_slider_pane_t11_ParamLimits

0xd199,	// (0x0008354a) main_cset6_slider_pane_t11

0x36ad,	// (0x00079a5e) main_cset6_slider_pane_t14_ParamLimits

0x36ad,	// (0x00079a5e) main_cset6_slider_pane_t14

0x36e6,	// (0x00079a97) main_cset6_slider_pane_t15_ParamLimits

0x36e6,	// (0x00079a97) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x00085f68) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x00085f68) main_cset6_slider_pane_t

0x34f8,	// (0x000798a9) cset_slider_pane_g1_copy1

0x3501,	// (0x000798b2) cset_slider_pane_g2_copy1

0x350a,	// (0x000798bb) cset_slider_pane_g3_copy1

0xe889,	// (0x00084c3a) bg_popup_sub_pane_cp011_copy1

0x371f,	// (0x00079ad0) main_cset_text_pane_g1_copy1

0x2feb,	// (0x0007939c) main_cset_text_pane_t1_copy1

0x2ff9,	// (0x000793aa) main_cset_text_pane_t2_copy1

0x3007,	// (0x000793b8) main_cset_text_pane_t3_copy1

0x3015,	// (0x000793c6) main_cset_text_pane_t4_copy1

0x3023,	// (0x000793d4) main_cset_text_pane_t5_copy1

0x3727,	// (0x00079ad8) main_cset_text_pane_t6_copy1

0x3735,	// (0x00079ae6) main_cset_text_pane_t7_copy1

0xd1d8,	// (0x00083589) main_cset_text2_pane_t1_copy1

0xf0a6,	// (0x00085457) main_ncimui_pane

0x99ec,	// (0x0007fd9d) popup_query_ncimui_window_ParamLimits

0x99ec,	// (0x0007fd9d) popup_query_ncimui_window

0xa57d,	// (0x0008092e) field_cale_ev2_pane_g4_ParamLimits

0xa57d,	// (0x0008092e) field_cale_ev2_pane_g4

0xb30d,	// (0x000816be) cell_video_dialer_keypad_pane_g2_ParamLimits

0xb30d,	// (0x000816be) cell_video_dialer_keypad_pane_g2

0x0001,

0xf891,	// (0x00085c42) cell_video_dialer_keypad_pane_g_ParamLimits

0xf891,	// (0x00085c42) cell_video_dialer_keypad_pane_g

0xb325,	// (0x000816d6) cell_video_dialer_keypad_pane_t1

0xe889,	// (0x00084c3a) bg_popup_window_pane_cp012

0x07f7,	// (0x00076ba8) heading_pane_cp06

0x3761,	// (0x00079b12) ncim_query_content_pane

0xe889,	// (0x00084c3a) bg_popup_heading_pane_cp01

0x3769,	// (0x00079b1a) ncim_heading_pane_t1

0x3777,	// (0x00079b28) ncim_indicator_popup_pane

0x3789,	// (0x00079b3a) ncim_query_button_pane

0x379d,	// (0x00079b4e) ncim_query_content_pane_t1

0x37af,	// (0x00079b60) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x00085fac) ncim_query_content_pane_t

0x37e9,	// (0x00079b9a) ncim_query_list_pane

0x37fb,	// (0x00079bac) ncim_query_popup_pane

0x3777,	// (0x00079b28) ncim_indicator_popup_pane_ParamLimits

0xd32b,	// (0x000836dc) ncim_query_content_pane_g1_ParamLimits

0xd32b,	// (0x000836dc) ncim_query_content_pane_g1

0x379d,	// (0x00079b4e) ncim_query_content_pane_t1_ParamLimits

0x37af,	// (0x00079b60) ncim_query_content_pane_t2_ParamLimits

0xd337,	// (0x000836e8) ncim_query_content_pane_t3_ParamLimits

0xd337,	// (0x000836e8) ncim_query_content_pane_t3

0xd354,	// (0x00083705) ncim_query_content_pane_t4_ParamLimits

0xd354,	// (0x00083705) ncim_query_content_pane_t4

0xd371,	// (0x00083722) ncim_query_content_pane_t5_ParamLimits

0xd371,	// (0x00083722) ncim_query_content_pane_t5

0x37c1,	// (0x00079b72) ncim_query_content_pane_t6_ParamLimits

0x37c1,	// (0x00079b72) ncim_query_content_pane_t6

0xfbfb,	// (0x00085fac) ncim_query_content_pane_t_ParamLimits

0x37e9,	// (0x00079b9a) ncim_query_list_pane_ParamLimits

0x37fb,	// (0x00079bac) ncim_query_popup_pane_ParamLimits

0x380f,	// (0x00079bc0) wait_bar_pane_cp04

0xe889,	// (0x00084c3a) input_focus_pane_cp011

0x3817,	// (0x00079bc8) ncim_query_popup_pane_t1

0x3825,	// (0x00079bd6) ncim_list_query_list_pane_ParamLimits

0x3825,	// (0x00079bd6) ncim_list_query_list_pane

0xe889,	// (0x00084c3a) bg_button_pane_cp027

0x3832,	// (0x00079be3) ncim_query_button_pane_g1

0xe889,	// (0x00084c3a) list_highlight_pane_cp012

0x383c,	// (0x00079bed) ncim_list_query_list_pane_g1

0x3844,	// (0x00079bf5) ncim_list_query_list_pane_t1

0xba9f,	// (0x00081e50) cam4_indicators_pane_g3_ParamLimits

0xba9f,	// (0x00081e50) cam4_indicators_pane_g3

0xbba6,	// (0x00081f57) vid4_indicators_pane_g5_ParamLimits

0xbba6,	// (0x00081f57) vid4_indicators_pane_g5

0xca13,	// (0x00082dc4) vid4_progress_pane_g5_ParamLimits

0xca13,	// (0x00082dc4) vid4_progress_pane_g5

0xd217,	// (0x000835c8) main_ncimui_pane_g1

0xd27f,	// (0x00083630) ncimui_group_query_pane_ParamLimits

0xd27f,	// (0x00083630) ncimui_group_query_pane

0xd2c7,	// (0x00083678) ncimui_list_pane_ParamLimits

0xd2c7,	// (0x00083678) ncimui_list_pane

0xd2ee,	// (0x0008369f) ncimui_text_pane_ParamLimits

0xd2ee,	// (0x0008369f) ncimui_text_pane

0xd38e,	// (0x0008373f) ncimui_text_pane_t1_ParamLimits

0xd38e,	// (0x0008373f) ncimui_text_pane_t1

0x3852,	// (0x00079c03) ncimui_list_single_graphic_pane_ParamLimits

0x3852,	// (0x00079c03) ncimui_list_single_graphic_pane

0xd3ad,	// (0x0008375e) ncimui_query_pane_ParamLimits

0xd3ad,	// (0x0008375e) ncimui_query_pane

0xe889,	// (0x00084c3a) list_highlight_pane_cp013

0x3862,	// (0x00079c13) ncim_list_query_list_pane_t1_copy1

0x383c,	// (0x00079bed) ncim_list_single_graphic_pane_g1

0xd3c0,	// (0x00083771) ncim_query_button_pane_cp01

0xd3cc,	// (0x0008377d) ncim_query_entry_pane_ParamLimits

0xd3cc,	// (0x0008377d) ncim_query_entry_pane

0xd3df,	// (0x00083790) ncimui_query_pane_g1

0xd3eb,	// (0x0008379c) ncimui_query_pane_t1_ParamLimits

0xd3eb,	// (0x0008379c) ncimui_query_pane_t1

0xf0a6,	// (0x00085457) input_focus_pane_cp012

0x3870,	// (0x00079c21) ncim_query_entry_pane_t1

0xefdd,	// (0x0008538e) main_im_pane_ParamLimits

0xf0a6,	// (0x00085457) main_mobtv_pane_ParamLimits

0xf0a6,	// (0x00085457) main_mobtv_pane

0xd067,	// (0x00083418) main_cset6_slider_pane_g18_ParamLimits

0xd067,	// (0x00083418) main_cset6_slider_pane_g18

0xd073,	// (0x00083424) main_cset6_slider_pane_g19_ParamLimits

0xd073,	// (0x00083424) main_cset6_slider_pane_g19

0x2d58,	// (0x00079109) bg_main_mobtv_pane_ParamLimits

0x2d58,	// (0x00079109) bg_main_mobtv_pane

0xd404,	// (0x000837b5) main_mobtv_info_pane

0xd40f,	// (0x000837c0) main_mobtv_loading_pane_ParamLimits

0xd40f,	// (0x000837c0) main_mobtv_loading_pane

0x3882,	// (0x00079c33) main_mobtv_pg_channel_list_pane

0x388c,	// (0x00079c3d) main_mobtv_pg_hdr_pane

0xd41c,	// (0x000837cd) main_mobtv_programe_curr_pane_ParamLimits

0xd41c,	// (0x000837cd) main_mobtv_programe_curr_pane

0xd429,	// (0x000837da) main_mobtv_programe_next_pane_ParamLimits

0xd429,	// (0x000837da) main_mobtv_programe_next_pane

0x3895,	// (0x00079c46) popup_mobtv_noti_window

0x237d,	// (0x0007872e) main_tv_pg_hdr_pane_g1

0x389d,	// (0x00079c4e) main_tv_pg_hdr_pane_g2

0x38a5,	// (0x00079c56) main_tv_pg_hdr_pane_g3

0x38ad,	// (0x00079c5e) main_tv_pg_hdr_pane_g4

0x38b5,	// (0x00079c66) main_tv_pg_hdr_pane_g5

0x38bf,	// (0x00079c70) main_tv_pg_hdr_pane_g6

0x38c9,	// (0x00079c7a) main_tv_pg_hdr_pane_g7

0x38d3,	// (0x00079c84) main_tv_pg_hdr_pane_g8

0x38dd,	// (0x00079c8e) main_tv_pg_hdr_pane_g9

0x38e7,	// (0x00079c98) main_tv_pg_hdr_pane_g10

0x38f1,	// (0x00079ca2) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00085fb9) main_tv_pg_hdr_pane_g

0x38fb,	// (0x00079cac) main_tv_pg_hdr_pane_t1

0x3909,	// (0x00079cba) main_tv_pg_hdr_pane_t2

0x3917,	// (0x00079cc8) main_tv_pg_hdr_pane_t3

0x3927,	// (0x00079cd8) main_tv_pg_hdr_pane_t4

0x3937,	// (0x00079ce8) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x00085fd0) main_tv_pg_hdr_pane_t

0x3947,	// (0x00079cf8) single_mobtv_pg_channel_pane_ParamLimits

0x3947,	// (0x00079cf8) single_mobtv_pg_channel_pane

0x3959,	// (0x00079d0a) single_mobtv_pg_channel_table_pane

0x3962,	// (0x00079d13) single_mobtv_pg_channel_thumb_pane

0x396b,	// (0x00079d1c) single_tv_pg_channel_pane_g1

0x3974,	// (0x00079d25) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00085fdb) single_tv_pg_channel_pane_g

0x25e0,	// (0x00078991) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x25e0,	// (0x00078991) bg_single_mobtv_pg_channel_thumb_pane

0x397d,	// (0x00079d2e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x397d,	// (0x00079d2e) single_mobtv_pg_channel_thumb_pane_g1

0x398b,	// (0x00079d3c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x398b,	// (0x00079d3c) single_mobtv_pg_channel_thumb_pane_g2

0x3997,	// (0x00079d48) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x3997,	// (0x00079d48) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x00085fe0) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x00085fe0) single_mobtv_pg_channel_thumb_pane_g

0x39a3,	// (0x00079d54) single_mobtv_pg_channel_thumb_pane_t1

0x39b1,	// (0x00079d62) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00085fe7) single_mobtv_pg_channel_thumb_pane_t

0x237d,	// (0x0007872e) bg_single_mobtv_pg_channel_table_pane_g1

0x237d,	// (0x0007872e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6d8,	// (0x00085a89) bg_single_mobtv_pg_channel_table_pane_g

0x39bf,	// (0x00079d70) single_mobtv_pg_channel_table_pane_t1

0x39cd,	// (0x00079d7e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x00085fec) single_mobtv_pg_channel_table_pane_t

0xd43e,	// (0x000837ef) main_mobtv_info_pane_g1_ParamLimits

0xd43e,	// (0x000837ef) main_mobtv_info_pane_g1

0xd45a,	// (0x0008380b) main_mobtv_info_pane_t1_ParamLimits

0xd45a,	// (0x0008380b) main_mobtv_info_pane_t1

0xd4d2,	// (0x00083883) main_mobtv_info_pane_t2_ParamLimits

0xd4d2,	// (0x00083883) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x00085ff6) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x00085ff6) main_mobtv_info_pane_t

0xd561,	// (0x00083912) wait_bar_pane_cp05

0xd573,	// (0x00083924) main_mobtv_loading_pane_g1_ParamLimits

0xd573,	// (0x00083924) main_mobtv_loading_pane_g1

0xd581,	// (0x00083932) main_mobtv_loading_pane_g2_ParamLimits

0xd581,	// (0x00083932) main_mobtv_loading_pane_g2

0xd58d,	// (0x0008393e) main_mobtv_loading_pane_g3_ParamLimits

0xd58d,	// (0x0008393e) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x00085ffd) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x00085ffd) main_mobtv_loading_pane_g

0x39db,	// (0x00079d8c) main_mobtv_loading_pane_t1_ParamLimits

0x39db,	// (0x00079d8c) main_mobtv_loading_pane_t1

0x39f3,	// (0x00079da4) main_mobtv_loading_pane_t2_ParamLimits

0x39f3,	// (0x00079da4) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x00086004) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x00086004) main_mobtv_loading_pane_t

0xd59b,	// (0x0008394c) wait_bar_pane_cp06_ParamLimits

0xd59b,	// (0x0008394c) wait_bar_pane_cp06

0x3a17,	// (0x00079dc8) main_mobtv_programe_curr_pane_t1

0x3a25,	// (0x00079dd6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x00086009) main_mobtv_programe_curr_pane_t

0x3a33,	// (0x00079de4) main_mobtv_programe_next_pane_t1

0x3a41,	// (0x00079df2) main_mobtv_programe_next_pane_t2

0x3a4f,	// (0x00079e00) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0008600e) main_mobtv_programe_next_pane_t

0xe889,	// (0x00084c3a) bg_popup_mobtv_noti_window_pane

0x3a5d,	// (0x00079e0e) popup_mobtv_noti_window_g1

0x3a65,	// (0x00079e16) popup_mobtv_noti_window_t1

0x3a73,	// (0x00079e24) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x00086015) popup_mobtv_noti_window_t

0x237d,	// (0x0007872e) bg_popup_mobtv_noti_window_pane_g1

0xe889,	// (0x00084c3a) sc_clock_pane

0xe889,	// (0x00084c3a) main_fs_bigclock_pane

0xcc1b,	// (0x00082fcc) blid2_tripm_pane_t4_ParamLimits

0xcc1b,	// (0x00082fcc) blid2_tripm_pane_t4

0xd5a7,	// (0x00083958) sc_clock_pane_g1_ParamLimits

0xd5a7,	// (0x00083958) sc_clock_pane_g1

0xd5b5,	// (0x00083966) sc_clock_pane_t1_ParamLimits

0xd5b5,	// (0x00083966) sc_clock_pane_t1

0xd5c8,	// (0x00083979) sc_clock_pane_t2_ParamLimits

0xd5c8,	// (0x00083979) sc_clock_pane_t2

0xd5da,	// (0x0008398b) sc_clock_pane_t3_ParamLimits

0xd5da,	// (0x0008398b) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0008601a) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0008601a) sc_clock_pane_t

0xdeec,	// (0x0008429d) main_fs_bigclock_indicator_pane_ParamLimits

0xdeec,	// (0x0008429d) main_fs_bigclock_indicator_pane

0xd65d,	// (0x00083a0e) main_fs_bigclock_pane_g1_ParamLimits

0xd65d,	// (0x00083a0e) main_fs_bigclock_pane_g1

0xdef8,	// (0x000842a9) main_fs_bigclock_pane_t1_ParamLimits

0xdef8,	// (0x000842a9) main_fs_bigclock_pane_t1

0xdf0a,	// (0x000842bb) main_fs_bigclock_pane_t2_ParamLimits

0xdf0a,	// (0x000842bb) main_fs_bigclock_pane_t2

0xdf1e,	// (0x000842cf) main_fs_bigclock_pane_t3_ParamLimits

0xdf1e,	// (0x000842cf) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00086224) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00086224) main_fs_bigclock_pane_t

0x42d0,	// (0x0007a681) main_fs_bigclock_indicator_pane_g1

0x3791,	// (0x00079b42) ncim_query_content_pane_g2_ParamLimits

0x3791,	// (0x00079b42) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00085fa7) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00085fa7) ncim_query_content_pane_g

0xd5ee,	// (0x0008399f) sc_clock_pane_t4_ParamLimits

0xd5ee,	// (0x0008399f) sc_clock_pane_t4

0xf0a6,	// (0x00085457) main_radioblah_pane

0xb942,	// (0x00081cf3) cell_call4_button_pane_t1_copy1_ParamLimits

0xb942,	// (0x00081cf3) cell_call4_button_pane_t1_copy1

0xd231,	// (0x000835e2) main_ncimui_pane_t1_ParamLimits

0xd231,	// (0x000835e2) main_ncimui_pane_t1

0xd24b,	// (0x000835fc) main_ncimui_pane_t2_ParamLimits

0xd24b,	// (0x000835fc) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x00085fa0) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x00085fa0) main_ncimui_pane_t

0x3bb8,	// (0x00079f69) main_radioblah_anim_pane_ParamLimits

0x3bb8,	// (0x00079f69) main_radioblah_anim_pane

0x3bc9,	// (0x00079f7a) main_radioblah_info_pane_ParamLimits

0x3bc9,	// (0x00079f7a) main_radioblah_info_pane

0x3bdd,	// (0x00079f8e) main_radioblah_pane_t1_ParamLimits

0x3bdd,	// (0x00079f8e) main_radioblah_pane_t1

0x3bf9,	// (0x00079faa) main_radioblah_pane_t2_ParamLimits

0x3bf9,	// (0x00079faa) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0008603b) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0008603b) main_radioblah_pane_t

0xd6b3,	// (0x00083a64) main_radioblah_rocker_ctrl_pane_ParamLimits

0xd6b3,	// (0x00083a64) main_radioblah_rocker_ctrl_pane

0x3c41,	// (0x00079ff2) main_radioblah_info_pane_t1_ParamLimits

0x3c41,	// (0x00079ff2) main_radioblah_info_pane_t1

0xd6f8,	// (0x00083aa9) main_radioblah_info_pane_t2_ParamLimits

0xd6f8,	// (0x00083aa9) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x00086044) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x00086044) main_radioblah_info_pane_t

0x237d,	// (0x0007872e) main_radioblah_rocker_ctrl_pane_g1

0xd7a8,	// (0x00083b59) main_radioblah_rocker_ctrl_pane_g2

0xd7b0,	// (0x00083b61) main_radioblah_rocker_ctrl_pane_g3

0xd7b8,	// (0x00083b69) main_radioblah_rocker_ctrl_pane_g4

0xd7c0,	// (0x00083b71) main_radioblah_rocker_ctrl_pane_g5

0xd7c8,	// (0x00083b79) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0008604d) main_radioblah_rocker_ctrl_pane_g

0xd1d8,	// (0x00083589) main_cset_text2_pane_t1_copy1_ParamLimits

0xb9cd,	// (0x00081d7e) cam4_image_uncrop_qvga_pane

0xbb14,	// (0x00081ec5) vid4_image_uncrop_qcif_pane

0xcda9,	// (0x0008315a) cam6_image_uncrop_qvga_pane_ParamLimits

0xcda9,	// (0x0008315a) cam6_image_uncrop_qvga_pane

0x3474,	// (0x00079825) vid6_image_uncrop_qcif_pane_ParamLimits

0x3474,	// (0x00079825) vid6_image_uncrop_qcif_pane

0xe889,	// (0x00084c3a) bg_popup_preview_window_pane_cp03

0x3743,	// (0x00079af4) list_cset_text2_pane

0x374b,	// (0x00079afc) main_cset6_text2_pane_g1

0x3753,	// (0x00079b04) main_cset6_text2_pane_t1

0xd7d0,	// (0x00083b81) list_cset_text2_pane_t1_ParamLimits

0xd7d0,	// (0x00083b81) list_cset_text2_pane_t1

0xf0a6,	// (0x00085457) main_radioblah_pane_ParamLimits

0xd54d,	// (0x000838fe) main_mobtv_info_pane_t3_ParamLimits

0xd54d,	// (0x000838fe) main_mobtv_info_pane_t3

0xd6a1,	// (0x00083a52) main_radioblah_pane_g1

0xd6cc,	// (0x00083a7d) main_radioblah_info_pane_g1

0xd74d,	// (0x00083afe) main_radioblah_info_pane_t3_ParamLimits

0xd74d,	// (0x00083afe) main_radioblah_info_pane_t3

0x8849,	// (0x0007ebfa) highlight_cell_cale_month_pane_ParamLimits

0x8849,	// (0x0007ebfa) highlight_cell_cale_month_pane

0xe889,	// (0x00084c3a) main_phob_fisheye_pane

0x26dc,	// (0x00078a8d) scroll_pane_cp0031_ParamLimits

0x26dc,	// (0x00078a8d) scroll_pane_cp0031

0x35a6,	// (0x00079957) wait_bar_pane_cp08_ParamLimits

0xcf7e,	// (0x0008332f) cset_list_set_pane_copy1_ParamLimits

0x3c7b,	// (0x0007a02c) highlight_cell_cale_month_pane_g1

0xd7ed,	// (0x00083b9e) highlight_cell_cale_month_pane_t1

0x3217,	// (0x000795c8) list_gen_pane_cp01

0x2e92,	// (0x00079243) scroll_pane_01

0x5cc5,	// (0x0007c076) list_single_double_fisheye_pane

0x5cce,	// (0x0007c07f) list_double_fisheye_pane_g1_ParamLimits

0x5cce,	// (0x0007c07f) list_double_fisheye_pane_g1

0x5cda,	// (0x0007c08b) list_double_fisheye_pane_g2_ParamLimits

0x5cda,	// (0x0007c08b) list_double_fisheye_pane_g2

0x5cee,	// (0x0007c09f) list_double_fisheye_pane_g3_ParamLimits

0x5cee,	// (0x0007c09f) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0008605a) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0008605a) list_double_fisheye_pane_g

0x5d17,	// (0x0007c0c8) list_double_fisheye_pane_t1_ParamLimits

0x5d17,	// (0x0007c0c8) list_double_fisheye_pane_t1

0x5d32,	// (0x0007c0e3) list_double_fisheye_pane_t2_ParamLimits

0x5d32,	// (0x0007c0e3) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x00086065) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x00086065) list_double_fisheye_pane_t

0xe889,	// (0x00084c3a) main_call5_pane

0xd614,	// (0x000839c5) sc_swipe_pane_ParamLimits

0xd614,	// (0x000839c5) sc_swipe_pane

0xd807,	// (0x00083bb8) call5_image_pane_ParamLimits

0xd807,	// (0x00083bb8) call5_image_pane

0xd817,	// (0x00083bc8) call5_swipe_1_pane_ParamLimits

0xd817,	// (0x00083bc8) call5_swipe_1_pane

0xd823,	// (0x00083bd4) call5_swipe_2_pane_ParamLimits

0xd823,	// (0x00083bd4) call5_swipe_2_pane

0xd83d,	// (0x00083bee) popup_call5_audio_first_window_ParamLimits

0xd83d,	// (0x00083bee) popup_call5_audio_first_window

0x25e0,	// (0x00078991) call5_swipe_1_pane_g1_ParamLimits

0x25e0,	// (0x00078991) call5_swipe_1_pane_g1

0x3c83,	// (0x0007a034) call5_swipe_1_pane_g2_ParamLimits

0x3c83,	// (0x0007a034) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0008606a) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0008606a) call5_swipe_1_pane_g

0x3c8f,	// (0x0007a040) call5_swipe_1_pane_t1_ParamLimits

0x3c8f,	// (0x0007a040) call5_swipe_1_pane_t1

0x25e0,	// (0x00078991) call5_swipe_2_pane_g1_ParamLimits

0x25e0,	// (0x00078991) call5_swipe_2_pane_g1

0x3ca4,	// (0x0007a055) call5_swipe_2_pane_g2_ParamLimits

0x3ca4,	// (0x0007a055) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0008606f) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0008606f) call5_swipe_2_pane_g

0x3cb0,	// (0x0007a061) call5_swipe_2_pane_t1_ParamLimits

0x3cb0,	// (0x0007a061) call5_swipe_2_pane_t1

0x3cc5,	// (0x0007a076) sc_swipe_pane_g1_ParamLimits

0x3cc5,	// (0x0007a076) sc_swipe_pane_g1

0x3cd2,	// (0x0007a083) sc_swipe_pane_g2_ParamLimits

0x3cd2,	// (0x0007a083) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x00086074) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x00086074) sc_swipe_pane_g

0x3cde,	// (0x0007a08f) sc_swipe_pane_t1_ParamLimits

0x3cde,	// (0x0007a08f) sc_swipe_pane_t1

0xe889,	// (0x00084c3a) main_cmail_launcher_pane

0xd84b,	// (0x00083bfc) aid_size_cell_cmail_l_ParamLimits

0xd84b,	// (0x00083bfc) aid_size_cell_cmail_l

0xd859,	// (0x00083c0a) grid_cmail_l_pane_ParamLimits

0xd859,	// (0x00083c0a) grid_cmail_l_pane

0xd869,	// (0x00083c1a) cell_cmail_l_pane_ParamLimits

0xd869,	// (0x00083c1a) cell_cmail_l_pane

0x3cf3,	// (0x0007a0a4) cell_cmail_l_pane_g1_ParamLimits

0x3cf3,	// (0x0007a0a4) cell_cmail_l_pane_g1

0x3cff,	// (0x0007a0b0) cell_cmail_l_pane_t1_ParamLimits

0x3cff,	// (0x0007a0b0) cell_cmail_l_pane_t1

0x3d15,	// (0x0007a0c6) cell_cmail_l_pane_t2_ParamLimits

0x3d15,	// (0x0007a0c6) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x00086079) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x00086079) cell_cmail_l_pane_t

0xf0a6,	// (0x00085457) grid_highlight_pane_cp018_ParamLimits

0xf0a6,	// (0x00085457) grid_highlight_pane_cp018

0x68c8,	// (0x0007cc79) main2_pane_ParamLimits

0x68c8,	// (0x0007cc79) main2_pane

0xf076,	// (0x00085427) popup_sp_fs_action_menu_bg_pane_g1

0xf07e,	// (0x0008542f) popup_sp_fs_action_menu_bg_pane_g2

0xf086,	// (0x00085437) popup_sp_fs_action_menu_bg_pane_g3

0xf08e,	// (0x0008543f) popup_sp_fs_action_menu_bg_pane_g4

0xf096,	// (0x00085447) popup_sp_fs_action_menu_bg_pane_g5

0xf09e,	// (0x0008544f) popup_sp_fs_action_menu_bg_pane_g6

0x0009,	// (0x000763ba) popup_sp_fs_action_menu_bg_pane_g7

0x0011,	// (0x000763c2) popup_sp_fs_action_menu_bg_pane_g8

0x0019,	// (0x000763ca) popup_sp_fs_action_menu_bg_pane_g9

0x0021,	// (0x000763d2) popup_sp_fs_action_menu_bg_pane_g10

0x0021,	// (0x000763d2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x00085537) popup_sp_fs_action_menu_bg_pane_g

0x5554,	// (0x0007b905) list_medium_line_x2_t3_g3_g1_ParamLimits

0x5554,	// (0x0007b905) list_medium_line_x2_t3_g3_g1

0x775a,	// (0x0007db0b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x775a,	// (0x0007db0b) list_medium_line_x2_t3_g3_g2

0x5560,	// (0x0007b911) list_medium_line_x2_t3_g3_g3_ParamLimits

0x5560,	// (0x0007b911) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x000855e5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x000855e5) list_medium_line_x2_t3_g3_g

0x556c,	// (0x0007b91d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x556c,	// (0x0007b91d) list_medium_line_x2_t3_g3_t1

0x5581,	// (0x0007b932) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5581,	// (0x0007b932) list_medium_line_x2_t3_g3_t2

0x5593,	// (0x0007b944) list_medium_line_x2_t3_g3_t3_ParamLimits

0x5593,	// (0x0007b944) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x000855ec) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x000855ec) list_medium_line_x2_t3_g3_t

0x5554,	// (0x0007b905) list_medium_line_x2_t3_g2_g1_ParamLimits

0x5554,	// (0x0007b905) list_medium_line_x2_t3_g2_g1

0x5560,	// (0x0007b911) list_medium_line_x2_t3_g2_g2_ParamLimits

0x5560,	// (0x0007b911) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x000855f3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x000855f3) list_medium_line_x2_t3_g2_g

0x55a8,	// (0x0007b959) list_medium_line_x2_t3_g2_t1_ParamLimits

0x55a8,	// (0x0007b959) list_medium_line_x2_t3_g2_t1

0x55be,	// (0x0007b96f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x55be,	// (0x0007b96f) list_medium_line_x2_t3_g2_t2

0x5593,	// (0x0007b944) list_medium_line_x2_t3_g2_t3_ParamLimits

0x5593,	// (0x0007b944) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x000855f8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x000855f8) list_medium_line_x2_t3_g2_t

0x5554,	// (0x0007b905) list_medium_line_x2_t4_g4_g1_ParamLimits

0x5554,	// (0x0007b905) list_medium_line_x2_t4_g4_g1

0x7766,	// (0x0007db17) list_medium_line_x2_t4_g4_g2_ParamLimits

0x7766,	// (0x0007db17) list_medium_line_x2_t4_g4_g2

0x775a,	// (0x0007db0b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x775a,	// (0x0007db0b) list_medium_line_x2_t4_g4_g3

0x55d0,	// (0x0007b981) list_medium_line_x2_t4_g4_g4_ParamLimits

0x55d0,	// (0x0007b981) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x000855ff) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x000855ff) list_medium_line_x2_t4_g4_g

0x55dc,	// (0x0007b98d) list_medium_line_x2_t4_g4_t1_ParamLimits

0x55dc,	// (0x0007b98d) list_medium_line_x2_t4_g4_t1

0x55f6,	// (0x0007b9a7) list_medium_line_x2_t4_g4_t2_ParamLimits

0x55f6,	// (0x0007b9a7) list_medium_line_x2_t4_g4_t2

0x560c,	// (0x0007b9bd) list_medium_line_x2_t4_g4_t3_ParamLimits

0x560c,	// (0x0007b9bd) list_medium_line_x2_t4_g4_t3

0x5621,	// (0x0007b9d2) list_medium_line_x2_t4_g4_t4_ParamLimits

0x5621,	// (0x0007b9d2) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x00085608) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x00085608) list_medium_line_x2_t4_g4_t

0x5554,	// (0x0007b905) list_medium_line_x2_t2_g4_g1_ParamLimits

0x5554,	// (0x0007b905) list_medium_line_x2_t2_g4_g1

0x7766,	// (0x0007db17) list_medium_line_x2_t2_g4_g2_ParamLimits

0x7766,	// (0x0007db17) list_medium_line_x2_t2_g4_g2

0x775a,	// (0x0007db0b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x775a,	// (0x0007db0b) list_medium_line_x2_t2_g4_g3

0x5560,	// (0x0007b911) list_medium_line_x2_t2_g4_g4_ParamLimits

0x5560,	// (0x0007b911) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x0008566f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x0008566f) list_medium_line_x2_t2_g4_g

0x5633,	// (0x0007b9e4) list_medium_line_x2_t2_g4_t1_ParamLimits

0x5633,	// (0x0007b9e4) list_medium_line_x2_t2_g4_t1

0x5593,	// (0x0007b944) list_medium_line_x2_t2_g4_t2_ParamLimits

0x5593,	// (0x0007b944) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x00085678) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x00085678) list_medium_line_x2_t2_g4_t

0x5554,	// (0x0007b905) list_medium_line_x2_t2_g3_g1_ParamLimits

0x5554,	// (0x0007b905) list_medium_line_x2_t2_g3_g1

0x775a,	// (0x0007db0b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x775a,	// (0x0007db0b) list_medium_line_x2_t2_g3_g2

0x5560,	// (0x0007b911) list_medium_line_x2_t2_g3_g3_ParamLimits

0x5560,	// (0x0007b911) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x000855e5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x000855e5) list_medium_line_x2_t2_g3_g

0x5648,	// (0x0007b9f9) list_medium_line_x2_t2_g3_t1_ParamLimits

0x5648,	// (0x0007b9f9) list_medium_line_x2_t2_g3_t1

0x5593,	// (0x0007b944) list_medium_line_x2_t2_g3_t2_ParamLimits

0x5593,	// (0x0007b944) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x0008567d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x0008567d) list_medium_line_x2_t2_g3_t

0x8a21,	// (0x0007edd2) main_sp_fs_list_pane_ParamLimits

0x8a21,	// (0x0007edd2) main_sp_fs_list_pane

0x8a2d,	// (0x0007edde) sp_fs_scroll_pane_ParamLimits

0x8a2d,	// (0x0007edde) sp_fs_scroll_pane

0x565d,	// (0x0007ba0e) list_medium_line_x2_t3_t1

0x566d,	// (0x0007ba1e) list_medium_line_x2_t3_t2

0x567b,	// (0x0007ba2c) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x000856c8) list_medium_line_x2_t3_t

0x5689,	// (0x0007ba3a) list_medium_line_x3_t4_t1

0x5699,	// (0x0007ba4a) list_medium_line_x3_t4_t2

0x56a7,	// (0x0007ba58) list_medium_line_x3_t4_t3

0x567b,	// (0x0007ba2c) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x000856cf) list_medium_line_x3_t4_t

0x56b5,	// (0x0007ba66) list_medium_line_x4_t5_t1

0x56c5,	// (0x0007ba76) list_medium_line_x4_t5_t2

0x56a7,	// (0x0007ba58) list_medium_line_x4_t5_t3

0x56d3,	// (0x0007ba84) list_medium_line_x4_t5_t4

0x567b,	// (0x0007ba2c) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x000856d8) list_medium_line_x4_t5_t

0x5554,	// (0x0007b905) list_medium_line_t4_g4_g1_ParamLimits

0x5554,	// (0x0007b905) list_medium_line_t4_g4_g1

0x56e1,	// (0x0007ba92) list_medium_line_t4_g4_g2_ParamLimits

0x56e1,	// (0x0007ba92) list_medium_line_t4_g4_g2

0x56ed,	// (0x0007ba9e) list_medium_line_t4_g4_g3_ParamLimits

0x56ed,	// (0x0007ba9e) list_medium_line_t4_g4_g3

0x5560,	// (0x0007b911) list_medium_line_t4_g4_g4_ParamLimits

0x5560,	// (0x0007b911) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x000856e3) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x000856e3) list_medium_line_t4_g4_g

0x56f9,	// (0x0007baaa) list_medium_line_t4_g4_t1_ParamLimits

0x56f9,	// (0x0007baaa) list_medium_line_t4_g4_t1

0x570e,	// (0x0007babf) list_medium_line_t4_g4_t2_ParamLimits

0x570e,	// (0x0007babf) list_medium_line_t4_g4_t2

0x5723,	// (0x0007bad4) list_medium_line_t4_g4_t3_ParamLimits

0x5723,	// (0x0007bad4) list_medium_line_t4_g4_t3

0x5593,	// (0x0007b944) list_medium_line_t4_g4_t4_ParamLimits

0x5593,	// (0x0007b944) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x000856ec) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x000856ec) list_medium_line_t4_g4_t

0x8b3a,	// (0x0007eeeb) chi_dic_find_pane_g1

0x99a9,	// (0x0007fd5a) main_tport_pane

0x598f,	// (0x0007bd40) list_medium_line_plain_t1

0x599d,	// (0x0007bd4e) list_medium_line_t2_g2_g1_ParamLimits

0x599d,	// (0x0007bd4e) list_medium_line_t2_g2_g1

0xc556,	// (0x00082907) list_medium_line_t2_g2_g2_ParamLimits

0xc556,	// (0x00082907) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x00085db1) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x00085db1) list_medium_line_t2_g2_g

0x59a9,	// (0x0007bd5a) list_medium_line_t2_g2_t1_ParamLimits

0x59a9,	// (0x0007bd5a) list_medium_line_t2_g2_t1

0x59c3,	// (0x0007bd74) list_medium_line_t2_g2_t2_ParamLimits

0x59c3,	// (0x0007bd74) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x00085db6) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x00085db6) list_medium_line_t2_g2_t

0x5be3,	// (0x0007bf94) aid_sp_fs_list_icon_a_sm

0xca72,	// (0x00082e23) aid_sp_fs_list_icon_d

0xf0bd,	// (0x0008546e) aid_sp_fs_text_primary

0x5beb,	// (0x0007bf9c) aid_sp_fs_text_secondary

0xca7a,	// (0x00082e2b) list_medium_line

0xca7a,	// (0x00082e2b) list_medium_line_g2

0xca7a,	// (0x00082e2b) list_medium_line_g3

0xca7a,	// (0x00082e2b) list_medium_line_plain

0xca7a,	// (0x00082e2b) list_medium_line_plain_t2

0xca7a,	// (0x00082e2b) list_medium_line_plain_t3

0xca7a,	// (0x00082e2b) list_medium_line_right_icon

0xca7a,	// (0x00082e2b) list_medium_line_right_iconx2

0xca7a,	// (0x00082e2b) list_medium_line_t2

0xca7a,	// (0x00082e2b) list_medium_line_t2_g2

0xca7a,	// (0x00082e2b) list_medium_line_t2_g3

0xca7a,	// (0x00082e2b) list_medium_line_t2_right_icon

0xca7a,	// (0x00082e2b) list_medium_line_t2_right_iconx2

0xca7a,	// (0x00082e2b) list_medium_line_t3

0xca7a,	// (0x00082e2b) list_medium_line_t3_g2

0xca7a,	// (0x00082e2b) list_medium_line_t3_g3

0xca7a,	// (0x00082e2b) list_medium_line_t3_right_iconx2

0xca83,	// (0x00082e34) list_medium_line_t4_g4

0xed50,	// (0x00085101) list_medium_line_x2

0xed50,	// (0x00085101) list_medium_line_x2_t2_g2

0xed50,	// (0x00085101) list_medium_line_x2_t2_g3

0xed50,	// (0x00085101) list_medium_line_x2_t2_g4

0xed50,	// (0x00085101) list_medium_line_x2_t3

0xed50,	// (0x00085101) list_medium_line_x2_t3_g2

0xed50,	// (0x00085101) list_medium_line_x2_t3_g3

0xed50,	// (0x00085101) list_medium_line_x2_t3_g4

0xed50,	// (0x00085101) list_medium_line_x2_t4_g2

0xed50,	// (0x00085101) list_medium_line_x2_t4_g4

0xca8c,	// (0x00082e3d) list_medium_line_x3

0xca8c,	// (0x00082e3d) list_medium_line_x3_t4

0xca8c,	// (0x00082e3d) list_medium_line_x3_t4_g4

0xca83,	// (0x00082e34) list_medium_line_x4_t4

0xca83,	// (0x00082e34) list_medium_line_x4_t4_g7

0xca83,	// (0x00082e34) list_medium_line_x4_t5

0x5bf4,	// (0x0007bfa5) list_single_fs_dyc_pane_ParamLimits

0x5bf4,	// (0x0007bfa5) list_single_fs_dyc_pane

0x5554,	// (0x0007b905) list_medium_line_x4_t4_g7_g1_ParamLimits

0x5554,	// (0x0007b905) list_medium_line_x4_t4_g7_g1

0x5c08,	// (0x0007bfb9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5c08,	// (0x0007bfb9) list_medium_line_x4_t4_g7_g2

0xd1bd,	// (0x0008356e) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd1bd,	// (0x0008356e) list_medium_line_x4_t4_g7_g3

0xd1cc,	// (0x0008357d) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd1cc,	// (0x0008357d) list_medium_line_x4_t4_g7_g4

0x5c14,	// (0x0007bfc5) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5c14,	// (0x0007bfc5) list_medium_line_x4_t4_g7_g5

0x5c23,	// (0x0007bfd4) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5c23,	// (0x0007bfd4) list_medium_line_x4_t4_g7_g6

0x5c32,	// (0x0007bfe3) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5c32,	// (0x0007bfe3) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x00085f81) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x00085f81) list_medium_line_x4_t4_g7_g

0x5c3e,	// (0x0007bfef) list_medium_line_x4_t4_g7_t1_ParamLimits

0x5c3e,	// (0x0007bfef) list_medium_line_x4_t4_g7_t1

0x5c53,	// (0x0007c004) list_medium_line_x4_t4_g7_t2_ParamLimits

0x5c53,	// (0x0007c004) list_medium_line_x4_t4_g7_t2

0x5c68,	// (0x0007c019) list_medium_line_x4_t4_g7_t3_ParamLimits

0x5c68,	// (0x0007c019) list_medium_line_x4_t4_g7_t3

0x5c7d,	// (0x0007c02e) list_medium_line_x4_t4_g7_t4_ParamLimits

0x5c7d,	// (0x0007c02e) list_medium_line_x4_t4_g7_t4

0x5c8f,	// (0x0007c040) list_medium_line_x4_t4_g7_t5_ParamLimits

0x5c8f,	// (0x0007c040) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x00085f90) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x00085f90) list_medium_line_x4_t4_g7_t

0x5ca1,	// (0x0007c052) list_single_dyc_row_pane_ParamLimits

0x5ca1,	// (0x0007c052) list_single_dyc_row_pane

0xd7fb,	// (0x00083bac) call5_gesture_pane_ParamLimits

0xd7fb,	// (0x00083bac) call5_gesture_pane

0xd82f,	// (0x00083be0) call5_windows_pane_ParamLimits

0xd82f,	// (0x00083be0) call5_windows_pane

0xd882,	// (0x00083c33) call5_swipe_1_pane_cp_ParamLimits

0xd882,	// (0x00083c33) call5_swipe_1_pane_cp

0xd88e,	// (0x00083c3f) call5_swipe_2_pane_cp_ParamLimits

0xd88e,	// (0x00083c3f) call5_swipe_2_pane_cp

0x0105,	// (0x000764b6) call5_image_pane_cp

0xd89a,	// (0x00083c4b) popup_call5_audio_first_window_cp_ParamLimits

0xd89a,	// (0x00083c4b) popup_call5_audio_first_window_cp

0x3cc5,	// (0x0007a076) call5_swipe_1_pane_g1_cp_ParamLimits

0x3cc5,	// (0x0007a076) call5_swipe_1_pane_g1_cp

0x3d32,	// (0x0007a0e3) call5_swipe_1_pane_g2_cp

0x3cde,	// (0x0007a08f) call5_swipe_1_pane_t1_cp_ParamLimits

0x3cde,	// (0x0007a08f) call5_swipe_1_pane_t1_cp

0x3cc5,	// (0x0007a076) call5_swipe_2_pane_g1_cp_ParamLimits

0x3cc5,	// (0x0007a076) call5_swipe_2_pane_g1_cp

0x3d3a,	// (0x0007a0eb) call5_swipe_2_pane_g2_cp

0x3d42,	// (0x0007a0f3) call5_swipe_2_pane_t1_cp_ParamLimits

0x3d42,	// (0x0007a0f3) call5_swipe_2_pane_t1_cp

0xf0a6,	// (0x00085457) main_sp_fs_email_pane

0x3d57,	// (0x0007a108) main_sp_fs_listscroll_pane_te

0xd8a8,	// (0x00083c59) popup_sp_fs_action_menu_pane_ParamLimits

0xd8a8,	// (0x00083c59) popup_sp_fs_action_menu_pane

0x237d,	// (0x0007872e) bg_sp_fs_ctrlbar_pane_g1

0x3d60,	// (0x0007a111) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x3d69,	// (0x0007a11a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3d72,	// (0x0007a123) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x237d,	// (0x0007872e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0008607e) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2162,	// (0x00078513) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2162,	// (0x00078513) bg_sp_fs_ctrlbar_ddmenu_pane

0x3d7b,	// (0x0007a12c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3d7b,	// (0x0007a12c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x3d87,	// (0x0007a138) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x3d87,	// (0x0007a138) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x00086087) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x00086087) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3d93,	// (0x0007a144) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3d93,	// (0x0007a144) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd8ec,	// (0x00083c9d) list_medium_line_t2_right_icon_g1

0x5d54,	// (0x0007c105) list_medium_line_t2_right_icon_t1

0x5d64,	// (0x0007c115) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0008608c) list_medium_line_t2_right_icon_t

0x1f69,	// (0x0007831a) bg_sp_fs_ctrlbar_pane_ParamLimits

0x1f69,	// (0x0007831a) bg_sp_fs_ctrlbar_pane

0xd94b,	// (0x00083cfc) main_sp_fs_ctrlbar_button_pane_cp01

0xd953,	// (0x00083d04) main_sp_fs_ctrlbar_ddmenu_pane

0x3de5,	// (0x0007a196) main_sp_fs_ctrlbar_pane_g1

0x3df1,	// (0x0007a1a2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x00086091) main_sp_fs_ctrlbar_pane_g

0x3dfd,	// (0x0007a1ae) main_sp_fs_ctrlbar_pane_t1

0xd95d,	// (0x00083d0e) main_sp_fs_ctrlbar_pane

0xd973,	// (0x00083d24) main_sp_fs_listscroll_pane_te_cp01

0x5d72,	// (0x0007c123) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x5d72,	// (0x0007c123) popup_sp_fs_action_menu_pane_cp01

0xf0a6,	// (0x00085457) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf0a6,	// (0x00085457) bg_sp_fs_highlight_list_pane_cp01

0x5d9c,	// (0x0007c14d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x5d9c,	// (0x0007c14d) sp_fs_action_menu_list_gene_pane_g1

0x3e2d,	// (0x0007a1de) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x3e2d,	// (0x0007a1de) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0008609b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0008609b) sp_fs_action_menu_list_gene_pane_g

0x5dab,	// (0x0007c15c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x5dab,	// (0x0007c15c) sp_fs_action_menu_list_gene_pane_t1

0x5dc3,	// (0x0007c174) sp_fs_action_menu_list_gene_pane_ParamLimits

0x5dc3,	// (0x0007c174) sp_fs_action_menu_list_gene_pane

0x3e3a,	// (0x0007a1eb) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x3e3a,	// (0x0007a1eb) popup_sp_fs_action_menu_bg_pane

0x5de4,	// (0x0007c195) sp_fs_action_menu_list_pane_ParamLimits

0x5de4,	// (0x0007c195) sp_fs_action_menu_list_pane

0xd984,	// (0x00083d35) sp_fs_scroll_pane_cp01_ParamLimits

0xd984,	// (0x00083d35) sp_fs_scroll_pane_cp01

0x5e06,	// (0x0007c1b7) list_medium_line_plain_t2_t1

0x5e16,	// (0x0007c1c7) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000860a0) list_medium_line_plain_t2_t

0x5e24,	// (0x0007c1d5) list_medium_line_plain_t3_t1

0x5e34,	// (0x0007c1e5) list_medium_line_plain_t3_t2

0x5e42,	// (0x0007c1f3) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000860a5) list_medium_line_plain_t3_t

0x5554,	// (0x0007b905) list_medium_line_x2_t2_g2_g1_ParamLimits

0x5554,	// (0x0007b905) list_medium_line_x2_t2_g2_g1

0x5560,	// (0x0007b911) list_medium_line_x2_t2_g2_g2_ParamLimits

0x5560,	// (0x0007b911) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x000855f3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x000855f3) list_medium_line_x2_t2_g2_g

0x56f9,	// (0x0007baaa) list_medium_line_x2_t2_g2_t1_ParamLimits

0x56f9,	// (0x0007baaa) list_medium_line_x2_t2_g2_t1

0x5593,	// (0x0007b944) list_medium_line_x2_t2_g2_t2_ParamLimits

0x5593,	// (0x0007b944) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000860ac) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000860ac) list_medium_line_x2_t2_g2_t

0x5554,	// (0x0007b905) list_medium_line_x2_t4_g2_g1_ParamLimits

0x5554,	// (0x0007b905) list_medium_line_x2_t4_g2_g1

0x5e50,	// (0x0007c201) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5e50,	// (0x0007c201) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000860b1) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000860b1) list_medium_line_x2_t4_g2_g

0x5e62,	// (0x0007c213) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5e62,	// (0x0007c213) list_medium_line_x2_t4_g2_t1

0x5e7c,	// (0x0007c22d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x5e7c,	// (0x0007c22d) list_medium_line_x2_t4_g2_t2

0x5e92,	// (0x0007c243) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5e92,	// (0x0007c243) list_medium_line_x2_t4_g2_t3

0x5593,	// (0x0007b944) list_medium_line_x2_t4_g2_t4_ParamLimits

0x5593,	// (0x0007b944) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000860b6) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000860b6) list_medium_line_x2_t4_g2_t

0xd9aa,	// (0x00083d5b) list_medium_line_t3_right_iconx2_g1

0xd8ec,	// (0x00083c9d) list_medium_line_t3_right_iconx2_g2

0x5ea7,	// (0x0007c258) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000860bf) list_medium_line_t3_right_iconx2_g

0x5eaf,	// (0x0007c260) list_medium_line_t3_right_iconx2_t1

0x5ebf,	// (0x0007c270) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000860c6) list_medium_line_t3_right_iconx2_t

0x5554,	// (0x0007b905) list_medium_line_x3_t4_g4_g1_ParamLimits

0x5554,	// (0x0007b905) list_medium_line_x3_t4_g4_g1

0x775a,	// (0x0007db0b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x775a,	// (0x0007db0b) list_medium_line_x3_t4_g4_g2

0x56e1,	// (0x0007ba92) list_medium_line_x3_t4_g4_g3_ParamLimits

0x56e1,	// (0x0007ba92) list_medium_line_x3_t4_g4_g3

0xd9b2,	// (0x00083d63) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd9b2,	// (0x00083d63) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000860cb) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000860cb) list_medium_line_x3_t4_g4_g

0x5ecd,	// (0x0007c27e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x5ecd,	// (0x0007c27e) list_medium_line_x3_t4_g4_t1

0x5ee4,	// (0x0007c295) list_medium_line_x3_t4_g4_t2_ParamLimits

0x5ee4,	// (0x0007c295) list_medium_line_x3_t4_g4_t2

0x570e,	// (0x0007babf) list_medium_line_x3_t4_g4_t3_ParamLimits

0x570e,	// (0x0007babf) list_medium_line_x3_t4_g4_t3

0x5ef9,	// (0x0007c2aa) list_medium_line_x3_t4_g4_t4_ParamLimits

0x5ef9,	// (0x0007c2aa) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000860d4) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000860d4) list_medium_line_x3_t4_g4_t

0x5f16,	// (0x0007c2c7) list_single_dyc_row_text_pane_t1_ParamLimits

0x5f16,	// (0x0007c2c7) list_single_dyc_row_text_pane_t1

0x5f4d,	// (0x0007c2fe) list_single_dyc_row_text_pane_t2_ParamLimits

0x5f4d,	// (0x0007c2fe) list_single_dyc_row_text_pane_t2

0x5fc3,	// (0x0007c374) list_single_dyc_row_text_pane_t3_ParamLimits

0x5fc3,	// (0x0007c374) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000860dd) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000860dd) list_single_dyc_row_text_pane_t

0x6094,	// (0x0007c445) list_single_dyc_row_pane_g1_ParamLimits

0x6094,	// (0x0007c445) list_single_dyc_row_pane_g1

0x60a0,	// (0x0007c451) list_single_dyc_row_pane_g2_ParamLimits

0x60a0,	// (0x0007c451) list_single_dyc_row_pane_g2

0x60ac,	// (0x0007c45d) list_single_dyc_row_pane_g3_ParamLimits

0x60ac,	// (0x0007c45d) list_single_dyc_row_pane_g3

0x60b8,	// (0x0007c469) list_single_dyc_row_pane_g4_ParamLimits

0x60b8,	// (0x0007c469) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000860ea) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000860ea) list_single_dyc_row_pane_g

0x60c4,	// (0x0007c475) list_single_dyc_row_text_pane_ParamLimits

0x60c4,	// (0x0007c475) list_single_dyc_row_text_pane

0xe889,	// (0x00084c3a) bg_sp_fs_scroll_pane

0x3e48,	// (0x0007a1f9) thumb_sp_fs_scroll_pane

0x599d,	// (0x0007bd4e) list_medium_line_g1_ParamLimits

0x599d,	// (0x0007bd4e) list_medium_line_g1

0x60e3,	// (0x0007c494) list_medium_line_t1_ParamLimits

0x60e3,	// (0x0007c494) list_medium_line_t1

0x5554,	// (0x0007b905) list_medium_line_x2_g1_ParamLimits

0x5554,	// (0x0007b905) list_medium_line_x2_g1

0x775a,	// (0x0007db0b) list_medium_line_x2_g2_ParamLimits

0x775a,	// (0x0007db0b) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000860f3) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000860f3) list_medium_line_x2_g

0x60f8,	// (0x0007c4a9) list_medium_line_x2_t1_ParamLimits

0x60f8,	// (0x0007c4a9) list_medium_line_x2_t1

0x5554,	// (0x0007b905) list_medium_line_x3_g1_ParamLimits

0x5554,	// (0x0007b905) list_medium_line_x3_g1

0x775a,	// (0x0007db0b) list_medium_line_x3_g2_ParamLimits

0x775a,	// (0x0007db0b) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000860f3) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000860f3) list_medium_line_x3_g

0x60f8,	// (0x0007c4a9) list_medium_line_x3_t1_ParamLimits

0x60f8,	// (0x0007c4a9) list_medium_line_x3_t1

0x3e51,	// (0x0007a202) thumb_sp_fs_scroll_pane_g1

0x3e5a,	// (0x0007a20b) thumb_sp_fs_scroll_pane_g2

0x3e63,	// (0x0007a214) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000860f8) thumb_sp_fs_scroll_pane_g

0x3e51,	// (0x0007a202) bg_sp_fs_scroll_pane_g1

0x3e5a,	// (0x0007a20b) bg_sp_fs_scroll_pane_g2

0x3e63,	// (0x0007a214) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000860f8) bg_sp_fs_scroll_pane_g

0x5554,	// (0x0007b905) list_medium_line_x2_t3_g4_g1_ParamLimits

0x5554,	// (0x0007b905) list_medium_line_x2_t3_g4_g1

0x7766,	// (0x0007db17) list_medium_line_x2_t3_g4_g2_ParamLimits

0x7766,	// (0x0007db17) list_medium_line_x2_t3_g4_g2

0x775a,	// (0x0007db0b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x775a,	// (0x0007db0b) list_medium_line_x2_t3_g4_g3

0x5560,	// (0x0007b911) list_medium_line_x2_t3_g4_g4_ParamLimits

0x5560,	// (0x0007b911) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x0008566f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x0008566f) list_medium_line_x2_t3_g4_g

0x610e,	// (0x0007c4bf) list_medium_line_x2_t3_g4_t1_ParamLimits

0x610e,	// (0x0007c4bf) list_medium_line_x2_t3_g4_t1

0x6124,	// (0x0007c4d5) list_medium_line_x2_t3_g4_t2_ParamLimits

0x6124,	// (0x0007c4d5) list_medium_line_x2_t3_g4_t2

0x5593,	// (0x0007b944) list_medium_line_x2_t3_g4_t3_ParamLimits

0x5593,	// (0x0007b944) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000860ff) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000860ff) list_medium_line_x2_t3_g4_t

0x599d,	// (0x0007bd4e) list_medium_line_g2_g1_ParamLimits

0x599d,	// (0x0007bd4e) list_medium_line_g2_g1

0xc556,	// (0x00082907) list_medium_line_g2_g2_ParamLimits

0xc556,	// (0x00082907) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x00085db1) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x00085db1) list_medium_line_g2_g

0x613e,	// (0x0007c4ef) list_medium_line_g2_t1_ParamLimits

0x613e,	// (0x0007c4ef) list_medium_line_g2_t1

0x599d,	// (0x0007bd4e) list_medium_line_t3_g2_g1_ParamLimits

0x599d,	// (0x0007bd4e) list_medium_line_t3_g2_g1

0xc556,	// (0x00082907) list_medium_line_t3_g2_g2_ParamLimits

0xc556,	// (0x00082907) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x00085db1) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x00085db1) list_medium_line_t3_g2_g

0x6153,	// (0x0007c504) list_medium_line_t3_g2_t1_ParamLimits

0x6153,	// (0x0007c504) list_medium_line_t3_g2_t1

0x616d,	// (0x0007c51e) list_medium_line_t3_g2_t2_ParamLimits

0x616d,	// (0x0007c51e) list_medium_line_t3_g2_t2

0x6183,	// (0x0007c534) list_medium_line_t3_g2_t3_ParamLimits

0x6183,	// (0x0007c534) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x00086106) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x00086106) list_medium_line_t3_g2_t

0xd8ec,	// (0x00083c9d) list_medium_line_right_icon_g1

0x6199,	// (0x0007c54a) list_medium_line_right_icon_t1

0x599d,	// (0x0007bd4e) list_medium_line_t2_g1_ParamLimits

0x599d,	// (0x0007bd4e) list_medium_line_t2_g1

0x61a7,	// (0x0007c558) list_medium_line_t2_t1_ParamLimits

0x61a7,	// (0x0007c558) list_medium_line_t2_t1

0x61c1,	// (0x0007c572) list_medium_line_t2_t2_ParamLimits

0x61c1,	// (0x0007c572) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0008610d) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0008610d) list_medium_line_t2_t

0x599d,	// (0x0007bd4e) list_medium_line_t3_g1_ParamLimits

0x599d,	// (0x0007bd4e) list_medium_line_t3_g1

0x61d6,	// (0x0007c587) list_medium_line_t3_t1_ParamLimits

0x61d6,	// (0x0007c587) list_medium_line_t3_t1

0x61f0,	// (0x0007c5a1) list_medium_line_t3_t2_ParamLimits

0x61f0,	// (0x0007c5a1) list_medium_line_t3_t2

0x6206,	// (0x0007c5b7) list_medium_line_t3_t3_ParamLimits

0x6206,	// (0x0007c5b7) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x00086112) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x00086112) list_medium_line_t3_t

0x599d,	// (0x0007bd4e) list_medium_line_g3_g1_ParamLimits

0x599d,	// (0x0007bd4e) list_medium_line_g3_g1

0xd9be,	// (0x00083d6f) list_medium_line_g3_g2_ParamLimits

0xd9be,	// (0x00083d6f) list_medium_line_g3_g2

0xc556,	// (0x00082907) list_medium_line_g3_g3_ParamLimits

0xc556,	// (0x00082907) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x00086119) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x00086119) list_medium_line_g3_g

0x621b,	// (0x0007c5cc) list_medium_line_g3_t1_ParamLimits

0x621b,	// (0x0007c5cc) list_medium_line_g3_t1

0x599d,	// (0x0007bd4e) list_medium_line_t2_g3_g1_ParamLimits

0x599d,	// (0x0007bd4e) list_medium_line_t2_g3_g1

0xd9be,	// (0x00083d6f) list_medium_line_t2_g3_g2_ParamLimits

0xd9be,	// (0x00083d6f) list_medium_line_t2_g3_g2

0xc556,	// (0x00082907) list_medium_line_t2_g3_g3_ParamLimits

0xc556,	// (0x00082907) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x00086119) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x00086119) list_medium_line_t2_g3_g

0x6230,	// (0x0007c5e1) list_medium_line_t2_g3_t1_ParamLimits

0x6230,	// (0x0007c5e1) list_medium_line_t2_g3_t1

0x624a,	// (0x0007c5fb) list_medium_line_t2_g3_t2_ParamLimits

0x624a,	// (0x0007c5fb) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x00086120) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x00086120) list_medium_line_t2_g3_t

0x599d,	// (0x0007bd4e) list_medium_line_t3_g3_g1_ParamLimits

0x599d,	// (0x0007bd4e) list_medium_line_t3_g3_g1

0xd9be,	// (0x00083d6f) list_medium_line_t3_g3_g2_ParamLimits

0xd9be,	// (0x00083d6f) list_medium_line_t3_g3_g2

0xc556,	// (0x00082907) list_medium_line_t3_g3_g3_ParamLimits

0xc556,	// (0x00082907) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x00086119) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x00086119) list_medium_line_t3_g3_g

0x6260,	// (0x0007c611) list_medium_line_t3_g3_t1_ParamLimits

0x6260,	// (0x0007c611) list_medium_line_t3_g3_t1

0x6279,	// (0x0007c62a) list_medium_line_t3_g3_t2_ParamLimits

0x6279,	// (0x0007c62a) list_medium_line_t3_g3_t2

0x628f,	// (0x0007c640) list_medium_line_t3_g3_t3_ParamLimits

0x628f,	// (0x0007c640) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x00086125) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x00086125) list_medium_line_t3_g3_t

0xd9aa,	// (0x00083d5b) list_medium_line_right_iconx2_g1

0xd8ec,	// (0x00083c9d) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0008612c) list_medium_line_right_iconx2_g

0xd9ca,	// (0x00083d7b) list_medium_line_right_iconx2_t1

0xd9aa,	// (0x00083d5b) list_medium_line_t2_right_iconx2_g1

0xd8ec,	// (0x00083c9d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0008612c) list_medium_line_t2_right_iconx2_g

0x62a5,	// (0x0007c656) list_medium_line_t2_right_iconx2_t1

0x62b5,	// (0x0007c666) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x00086131) list_medium_line_t2_right_iconx2_t

0x62c3,	// (0x0007c674) list_medium_line_x4_t4_t1

0x62d1,	// (0x0007c682) list_medium_line_x4_t4_t2

0x62e1,	// (0x0007c692) list_medium_line_x4_t4_t3

0x62f1,	// (0x0007c6a2) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x00086136) list_medium_line_x4_t4_t

0xda02,	// (0x00083db3) tport_appsw_pane_ParamLimits

0xda02,	// (0x00083db3) tport_appsw_pane

0xda10,	// (0x00083dc1) tport_contact_pane_ParamLimits

0xda10,	// (0x00083dc1) tport_contact_pane

0xda20,	// (0x00083dd1) tport_listscroll_pane_ParamLimits

0xda20,	// (0x00083dd1) tport_listscroll_pane

0xda30,	// (0x00083de1) cell_tport_appsw_pane_ParamLimits

0xda30,	// (0x00083de1) cell_tport_appsw_pane

0x2665,	// (0x00078a16) tport_appsw_pane_g1_ParamLimits

0x2665,	// (0x00078a16) tport_appsw_pane_g1

0x3e6c,	// (0x0007a21d) tport_contact_pane_g1

0x3817,	// (0x00079bc8) tport_contact_pane_t1

0x3e75,	// (0x0007a226) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0008613f) tport_contact_pane_t

0x3e83,	// (0x0007a234) list_tport_pane

0x3e8c,	// (0x0007a23d) scroll_pane_cp_030

0xda63,	// (0x00083e14) cell_tport_appsw_pane_g1

0xda73,	// (0x00083e24) cell_tport_appsw_pane_t1

0xda81,	// (0x00083e32) grid_highlight_pane_cp019

0xda89,	// (0x00083e3a) list_tport_double_graphic_pane_ParamLimits

0xda89,	// (0x00083e3a) list_tport_double_graphic_pane

0xf0a6,	// (0x00085457) list_highlight_pane_cp023_ParamLimits

0xf0a6,	// (0x00085457) list_highlight_pane_cp023

0xda9a,	// (0x00083e4b) list_tport_double_graphic_pane_g1_ParamLimits

0xda9a,	// (0x00083e4b) list_tport_double_graphic_pane_g1

0xdaa7,	// (0x00083e58) list_tport_double_graphic_pane_t1_ParamLimits

0xdaa7,	// (0x00083e58) list_tport_double_graphic_pane_t1

0xdabc,	// (0x00083e6d) list_tport_double_graphic_pane_t2_ParamLimits

0xdabc,	// (0x00083e6d) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0008614b) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0008614b) list_tport_double_graphic_pane_t

0xe889,	// (0x00084c3a) main_cale_note_pane

0xbd75,	// (0x00082126) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xbd75,	// (0x00082126) cell_vitu2_function_top_wide_pane_cp01

0xd561,	// (0x00083912) wait_bar_pane_cp05_ParamLimits

0xf0a6,	// (0x00085457) listscroll_cmail_pane

0x3e95,	// (0x0007a246) list_cmail_pane

0xdace,	// (0x00083e7f) list_cmail_body_pane

0xdaf5,	// (0x00083ea6) list_single_cmail_header_caption_pane

0xdb20,	// (0x00083ed1) list_single_cmail_header_detail_pane_ParamLimits

0xdb20,	// (0x00083ed1) list_single_cmail_header_detail_pane

0x3ea5,	// (0x0007a256) list_single_cmail_header_caption_pane_t1

0x6301,	// (0x0007c6b2) list_single_cmail_header_detail_pane_g1_ParamLimits

0x6301,	// (0x0007c6b2) list_single_cmail_header_detail_pane_g1

0xdb56,	// (0x00083f07) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdb56,	// (0x00083f07) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x00086150) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x00086150) list_single_cmail_header_detail_pane_g

0x6317,	// (0x0007c6c8) list_single_cmail_header_detail_pane_t1_ParamLimits

0x6317,	// (0x0007c6c8) list_single_cmail_header_detail_pane_t1

0x6377,	// (0x0007c728) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6377,	// (0x0007c728) list_single_cmail_header_editor_pane_bg

0x3974,	// (0x00079d25) list_cmail_body_pane_g1

0x3ec9,	// (0x0007a27a) list_cmail_body_pane_t1

0x2d78,	// (0x00079129) list_single_cmail_header_editor_pane_bg_g1

0x035e,	// (0x0007670f) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2d88,	// (0x00079139) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2d80,	// (0x00079131) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2f9c,	// (0x0007934d) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2da8,	// (0x00079159) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2d98,	// (0x00079149) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2da0,	// (0x00079151) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x033e,	// (0x000766ef) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdb62,	// (0x00083f13) calenote_gesture_pane_ParamLimits

0xdb62,	// (0x00083f13) calenote_gesture_pane

0xdb7c,	// (0x00083f2d) calenote_window_pane_ParamLimits

0xdb7c,	// (0x00083f2d) calenote_window_pane

0x3ed7,	// (0x0007a288) popup_note_window_cp01

0xdb94,	// (0x00083f45) calenote_swipe_1_pane_ParamLimits

0xdb94,	// (0x00083f45) calenote_swipe_1_pane

0xd88e,	// (0x00083c3f) calenote_swipe_2_pane_ParamLimits

0xd88e,	// (0x00083c3f) calenote_swipe_2_pane

0x3cc5,	// (0x0007a076) calenote_swipe_1_pane_g1_ParamLimits

0x3cc5,	// (0x0007a076) calenote_swipe_1_pane_g1

0x3cd2,	// (0x0007a083) calenote_swipe_1_pane_g2_ParamLimits

0x3cd2,	// (0x0007a083) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x00086074) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x00086074) calenote_swipe_1_pane_g

0x3ee9,	// (0x0007a29a) calenote_swipe_1_pane_t1_ParamLimits

0x3ee9,	// (0x0007a29a) calenote_swipe_1_pane_t1

0x3cc5,	// (0x0007a076) calenote_swipe_2_pane_g1_ParamLimits

0x3cc5,	// (0x0007a076) calenote_swipe_2_pane_g1

0x3f08,	// (0x0007a2b9) calenote_swipe_2_pane_g2_ParamLimits

0x3f08,	// (0x0007a2b9) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0008615c) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0008615c) calenote_swipe_2_pane_g

0x3f14,	// (0x0007a2c5) calenote_swipe_2_pane_t1_ParamLimits

0x3f14,	// (0x0007a2c5) calenote_swipe_2_pane_t1

0xe889,	// (0x00084c3a) main_mup_navstr_pane

0xa9c8,	// (0x00080d79) main_mup3_pane_t7_ParamLimits

0xa9c8,	// (0x00080d79) main_mup3_pane_t7

0xb40e,	// (0x000817bf) main_mp4_pane_g6_ParamLimits

0xb40e,	// (0x000817bf) main_mp4_pane_g6

0xb79e,	// (0x00081b4f) main_image3_pane_t4_ParamLimits

0xb79e,	// (0x00081b4f) main_image3_pane_t4

0xdba7,	// (0x00083f58) popup_navstr_preview_pane_ParamLimits

0xdba7,	// (0x00083f58) popup_navstr_preview_pane

0xdbb3,	// (0x00083f64) scroll_navstr_pane_ParamLimits

0xdbb3,	// (0x00083f64) scroll_navstr_pane

0xe889,	// (0x00084c3a) bg_popup_preview_window_pane_cp04

0x3f3b,	// (0x0007a2ec) popup_navstr_preview_pane_t1

0xdbbf,	// (0x00083f70) scroll_navstr_pane_g1_ParamLimits

0xdbbf,	// (0x00083f70) scroll_navstr_pane_g1

0xdbcc,	// (0x00083f7d) scroll_navstr_pane_t1_ParamLimits

0xdbcc,	// (0x00083f7d) scroll_navstr_pane_t1

0x3ee0,	// (0x0007a291) bg_button_pane_cp014

0x3ee0,	// (0x0007a291) bg_button_pane_cp030

0x5cfa,	// (0x0007c0ab) list_double_fisheye_pane_g4_ParamLimits

0x5cfa,	// (0x0007c0ab) list_double_fisheye_pane_g4

0x5d06,	// (0x0007c0b7) list_double_fisheye_pane_g5_ParamLimits

0x5d06,	// (0x0007c0b7) list_double_fisheye_pane_g5

0x2004,	// (0x000783b5) sp_fs_scroll_pane_cp03

0x3de5,	// (0x0007a196) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x3df1,	// (0x0007a1a2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x00086091) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x3dfd,	// (0x0007a1ae) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x3e9d,	// (0x0007a24e) sp_fs_scroll_pane_cp02

0x0044,	// (0x000763f5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0044,	// (0x000763f5) popup_sp_fs_calendar_preview_list_single_pane

0xe889,	// (0x00084c3a) main_cam6_pano_pane

0xf0a6,	// (0x00085457) main_mup3_pane_ParamLimits

0xe889,	// (0x00084c3a) main_phacti_pane

0xd436,	// (0x000837e7) bg_button_pane_cp11

0xd44e,	// (0x000837ff) main_mobtv_info_pane_g2_ParamLimits

0xd44e,	// (0x000837ff) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x00085ff1) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x00085ff1) main_mobtv_info_pane_g

0xd600,	// (0x000839b1) sc_clock_pane_t5_ParamLimits

0xd600,	// (0x000839b1) sc_clock_pane_t5

0xd6a1,	// (0x00083a52) main_radioblah_pane_g1_ParamLimits

0x3c11,	// (0x00079fc2) main_radioblah_pane_t3_ParamLimits

0x3c11,	// (0x00079fc2) main_radioblah_pane_t3

0x3c29,	// (0x00079fda) main_radioblah_pane_t4_ParamLimits

0x3c29,	// (0x00079fda) main_radioblah_pane_t4

0xd6bf,	// (0x00083a70) main_radioblah_text_pane_ParamLimits

0xd6bf,	// (0x00083a70) main_radioblah_text_pane

0xd6cc,	// (0x00083a7d) main_radioblah_info_pane_g1_ParamLimits

0xd761,	// (0x00083b12) main_radioblah_info_pane_t4_ParamLimits

0xd761,	// (0x00083b12) main_radioblah_info_pane_t4

0xf0a6,	// (0x00085457) main_sp_fs_calendar_pane

0xdbde,	// (0x00083f8f) main_phacti_pane_g1

0xdbe6,	// (0x00083f97) phacti_note_pane_ParamLimits

0xdbe6,	// (0x00083f97) phacti_note_pane

0x3f52,	// (0x0007a303) phacti_term_pane_ParamLimits

0x3f52,	// (0x0007a303) phacti_term_pane

0x3f67,	// (0x0007a318) phacti_note_pane_t1_ParamLimits

0x3f67,	// (0x0007a318) phacti_note_pane_t1

0x638e,	// (0x0007c73f) phacti_term_pane_g1

0x6396,	// (0x0007c747) phacti_term_pane_t1_ParamLimits

0x6396,	// (0x0007c747) phacti_term_pane_t1

0x3f7e,	// (0x0007a32f) popup_sp_fs_calendar_preview_list_single_pane_g1

0x00e3,	// (0x00076494) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00086166) popup_sp_fs_calendar_preview_list_single_pane_g

0x3f94,	// (0x0007a345) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x3f94,	// (0x0007a345) popup_sp_fs_calendar_preview_list_single_pane_t1

0x3faa,	// (0x0007a35b) aid_popup_sp_fs_bg_corner_pane

0x237d,	// (0x0007872e) popup_sp_fs_calendar_preview_bg_pane_g1

0xe889,	// (0x00084c3a) popup_sp_fs_calendar_preview_bg_pane

0x3fb2,	// (0x0007a363) popup_sp_fs_calendar_preview_list_pane

0x1f69,	// (0x0007831a) bg_main_sp_fs_cale_pane_ParamLimits

0x1f69,	// (0x0007831a) bg_main_sp_fs_cale_pane

0x63c0,	// (0x0007c771) listscroll_cale_mrui_pane_ParamLimits

0x63c0,	// (0x0007c771) listscroll_cale_mrui_pane

0x63d5,	// (0x0007c786) listscroll_sp_fs_schedule_track_pane

0x63de,	// (0x0007c78f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x63de,	// (0x0007c78f) main_sp_fs_ctrlbar_pane_cp01

0x3fba,	// (0x0007a36b) main_sp_fs_ribbon_pane

0x63f1,	// (0x0007c7a2) popup_sp_fs_cale_preview_window

0xdc52,	// (0x00084003) list_single_sp_fs_schedule_track_pane_ParamLimits

0xdc52,	// (0x00084003) list_single_sp_fs_schedule_track_pane

0x3f86,	// (0x0007a337) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x3f86,	// (0x0007a337) bg_sp_fs_highlight_list_pane_cp03

0xdc74,	// (0x00084025) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xdc74,	// (0x00084025) list_single_sp_fs_schedule_track_pane_g1

0xdc80,	// (0x00084031) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xdc80,	// (0x00084031) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0008616b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0008616b) list_single_sp_fs_schedule_track_pane_g

0xdc8c,	// (0x0008403d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xdc8c,	// (0x0008403d) list_single_sp_fs_schedule_track_pane_t1

0xdca4,	// (0x00084055) sp_fs_schedule_track_pane_ParamLimits

0xdca4,	// (0x00084055) sp_fs_schedule_track_pane

0x3fc2,	// (0x0007a373) sp_fs_schedule_track_pane_g1

0x3fca,	// (0x0007a37b) sp_fs_schedule_track_pane_g2

0x3fd2,	// (0x0007a383) sp_fs_schedule_track_pane_g3

0x3fda,	// (0x0007a38b) sp_fs_schedule_track_pane_g4

0x3fe2,	// (0x0007a393) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00086170) sp_fs_schedule_track_pane_g

0x2d78,	// (0x00079129) bg_sp_fs_schedule_viewer_highlight_g1

0x035e,	// (0x0007670f) bg_sp_fs_schedule_viewer_highlight_g2

0x2d80,	// (0x00079131) bg_sp_fs_schedule_viewer_highlight_g3

0x2d88,	// (0x00079139) bg_sp_fs_schedule_viewer_highlight_g4

0x2f9c,	// (0x0007934d) bg_sp_fs_schedule_viewer_highlight_g5

0x2d98,	// (0x00079149) bg_sp_fs_schedule_viewer_highlight_g6

0x2da0,	// (0x00079151) bg_sp_fs_schedule_viewer_highlight_g7

0x2da8,	// (0x00079159) bg_sp_fs_schedule_viewer_highlight_g8

0x033e,	// (0x000766ef) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0008617b) bg_sp_fs_schedule_viewer_highlight_g

0xe889,	// (0x00084c3a) bg_main_sp_fs_ribbon_pane

0xdcb4,	// (0x00084065) main_sp_fs_ribbon_pane_g1

0x3fea,	// (0x0007a39b) main_sp_fs_ribbon_pane_t1

0xdcbd,	// (0x0008406e) main_sp_fs_ribbon_pane_t2

0x3ff9,	// (0x0007a3aa) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0008618e) main_sp_fs_ribbon_pane_t

0x4008,	// (0x0007a3b9) main_sp_fs_ribbon_scheduler_pane

0x4010,	// (0x0007a3c1) bg_main_sp_fs_ribbon_pane_g1

0x4019,	// (0x0007a3ca) bg_main_sp_fs_ribbon_pane_g2

0x4022,	// (0x0007a3d3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00086195) bg_main_sp_fs_ribbon_pane_g

0x402a,	// (0x0007a3db) main_sp_fs_ribbon_scheduler_pane_g1

0x4033,	// (0x0007a3e4) main_sp_fs_ribbon_scheduler_pane_g2

0x403c,	// (0x0007a3ed) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0008619c) main_sp_fs_ribbon_scheduler_pane_g

0x4045,	// (0x0007a3f6) list_cale_mrui_pane

0xdccc,	// (0x0008407d) sp_fs_scroll_pane_cp07_ParamLimits

0xdccc,	// (0x0008407d) sp_fs_scroll_pane_cp07

0xdce8,	// (0x00084099) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xdce8,	// (0x00084099) bg_sp_fs_schedule_viewer_highlight

0x4052,	// (0x0007a403) list_single_sp_fs_schedule_track_pane_cp01

0x405a,	// (0x0007a40b) list_sp_fs_schedule_track_pane

0x4062,	// (0x0007a413) sp_fs_scroll_pane_cp06_ParamLimits

0x4062,	// (0x0007a413) sp_fs_scroll_pane_cp06

0x237d,	// (0x0007872e) bgmain_sp_fs_calendar_pane_g1

0x6403,	// (0x0007c7b4) list_single_cale_mrui_pane_ParamLimits

0x6403,	// (0x0007c7b4) list_single_cale_mrui_pane

0x6430,	// (0x0007c7e1) list_single_cale_mrui_row_pane_ParamLimits

0x6430,	// (0x0007c7e1) list_single_cale_mrui_row_pane

0x643d,	// (0x0007c7ee) list_single_cale_mrui_row_pane_g1_ParamLimits

0x643d,	// (0x0007c7ee) list_single_cale_mrui_row_pane_g1

0x6475,	// (0x0007c826) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6475,	// (0x0007c826) list_single_cale_mrui_row_pane_t1

0x6487,	// (0x0007c838) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6487,	// (0x0007c838) list_single_cale_mrui_row_pane_t2

0x64ed,	// (0x0007c89e) list_single_cale_mrui_row_pane_t3_ParamLimits

0x64ed,	// (0x0007c89e) list_single_cale_mrui_row_pane_t3

0x651c,	// (0x0007c8cd) list_single_cale_mrui_row_pane_t4_ParamLimits

0x651c,	// (0x0007c8cd) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000861aa) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000861aa) list_single_cale_mrui_row_pane_t

0x654b,	// (0x0007c8fc) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x654b,	// (0x0007c8fc) list_single_cmail_header_editor_pane_bg_cp01

0x656b,	// (0x0007c91c) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x656b,	// (0x0007c91c) list_single_cmail_header_editor_pane_bg_cp02

0xdcf5,	// (0x000840a6) main_radioblah_text_pane_t1_ParamLimits

0xdcf5,	// (0x000840a6) main_radioblah_text_pane_t1

0x4081,	// (0x0007a432) cam6_indi_pane_cp01

0x4089,	// (0x0007a43a) cam6_mode_pane_cp01

0x4091,	// (0x0007a442) cam6_pano_pane

0x409a,	// (0x0007a44b) cam6_zoom_pane_cp01

0x40a2,	// (0x0007a453) cam6_pano_image_pane

0x40ad,	// (0x0007a45e) cam6_pano_pane_g1

0x3974,	// (0x00079d25) cam6_pano_pane_g2

0x40b6,	// (0x0007a467) cam6_pano_pane_g3

0x40bf,	// (0x0007a470) cam6_pano_pane_g4

0x2960,	// (0x00078d11) cam6_pano_pane_g5

0x40c8,	// (0x0007a479) cam6_pano_pane_g6

0x40d2,	// (0x0007a483) cam6_pano_pane_g7

0x40da,	// (0x0007a48b) cam6_pano_pane_g8

0x40e3,	// (0x0007a494) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000861b3) cam6_pano_pane_g

0xe889,	// (0x00084c3a) main_browser_tag_pane

0x3f33,	// (0x0007a2e4) grid_navstr_albumart_pane

0x40ee,	// (0x0007a49f) cell_navstr_albumart_pane_ParamLimits

0x40ee,	// (0x0007a49f) cell_navstr_albumart_pane

0x410e,	// (0x0007a4bf) cell_navstr_albumart_pane_g1

0x1d7a,	// (0x0007812b) cell_navstr_albumart_pane_g2

0x1d8a,	// (0x0007813b) cell_navstr_albumart_pane_g3

0x1d82,	// (0x00078133) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000861c6) cell_navstr_albumart_pane_g

0xdd10,	// (0x000840c1) bt_list_pane_ParamLimits

0xdd10,	// (0x000840c1) bt_list_pane

0xdd30,	// (0x000840e1) bt_list_pane_t1

0xdd3f,	// (0x000840f0) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000861cf) bt_list_pane_t

0xe889,	// (0x00084c3a) main_cale_prevew_pane

0xdd4e,	// (0x000840ff) popup_cale_preview_window_ParamLimits

0xdd4e,	// (0x000840ff) popup_cale_preview_window

0xf0a6,	// (0x00085457) bg_popup_preview_window_pane_cp05_ParamLimits

0xf0a6,	// (0x00085457) bg_popup_preview_window_pane_cp05

0x4116,	// (0x0007a4c7) list_cale_preview_pane_ParamLimits

0x4116,	// (0x0007a4c7) list_cale_preview_pane

0xdd67,	// (0x00084118) list_double_cale_preview_pane_ParamLimits

0xdd67,	// (0x00084118) list_double_cale_preview_pane

0xdd79,	// (0x0008412a) list_single_cale_preview_pane_ParamLimits

0xdd79,	// (0x0008412a) list_single_cale_preview_pane

0xdd8f,	// (0x00084140) list_single_cale_preview_pane_g1

0xdd97,	// (0x00084148) list_single_cale_preview_pane_t1_ParamLimits

0xdd97,	// (0x00084148) list_single_cale_preview_pane_t1

0xddac,	// (0x0008415d) list_double_cale_preview_pane_g1

0xddb4,	// (0x00084165) list_double_cale_preview_pane_t1_ParamLimits

0xddb4,	// (0x00084165) list_double_cale_preview_pane_t1

0xddc9,	// (0x0008417a) list_double_cale_preview_pane_t2_ParamLimits

0xddc9,	// (0x0008417a) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000861d4) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000861d4) list_double_cale_preview_pane_t

0xe889,	// (0x00084c3a) main_ezdial_pane

0xf0a6,	// (0x00085457) main_sp_fs_email_pane_ParamLimits

0xd8f4,	// (0x00083ca5) cmail_ddmenu_btn01_pane_ParamLimits

0xd8f4,	// (0x00083ca5) cmail_ddmenu_btn01_pane

0xd911,	// (0x00083cc2) cmail_ddmenu_btn02_pane_ParamLimits

0xd911,	// (0x00083cc2) cmail_ddmenu_btn02_pane

0xd92f,	// (0x00083ce0) cmail_ddmenu_btn03_pane_ParamLimits

0xd92f,	// (0x00083ce0) cmail_ddmenu_btn03_pane

0xd95d,	// (0x00083d0e) main_sp_fs_ctrlbar_pane_ParamLimits

0xd973,	// (0x00083d24) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xdace,	// (0x00083e7f) list_cmail_body_pane_ParamLimits

0x3eb3,	// (0x0007a264) bg_button_pane_cp12

0x3ebc,	// (0x0007a26d) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3ebc,	// (0x0007a26d) list_single_cmail_header_detail_pane_g3

0x6353,	// (0x0007c704) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6353,	// (0x0007c704) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00086157) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00086157) list_single_cmail_header_detail_pane_t

0x63ab,	// (0x0007c75c) phacti_term_pane_t2_ParamLimits

0x63ab,	// (0x0007c75c) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00086161) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00086161) phacti_term_pane_t

0x4122,	// (0x0007a4d3) aid_size_list_single_double

0xdde1,	// (0x00084192) popup_ezdial_listscroll_window

0xde02,	// (0x000841b3) popup_number_entry_window_cp01

0x0105,	// (0x000764b6) bg_popup_call_pane_cp09

0x412e,	// (0x0007a4df) ezdial_list_pane

0x4136,	// (0x0007a4e7) scroll_pane_cp23

0x2162,	// (0x00078513) bg_button_pane_cp028_ParamLimits

0x2162,	// (0x00078513) bg_button_pane_cp028

0xde10,	// (0x000841c1) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xde10,	// (0x000841c1) cmail_ddmenu_btn01_pane_g1

0xde20,	// (0x000841d1) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xde20,	// (0x000841d1) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000861d9) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000861d9) cmail_ddmenu_btn01_pane_g

0x413e,	// (0x0007a4ef) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x413e,	// (0x0007a4ef) cmail_ddmenu_btn01_pane_t1

0x1f69,	// (0x0007831a) bg_button_pane_cp029_ParamLimits

0x1f69,	// (0x0007831a) bg_button_pane_cp029

0xde20,	// (0x000841d1) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xde20,	// (0x000841d1) cmail_ddmenu_btn02_pane_g1

0xde38,	// (0x000841e9) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xde38,	// (0x000841e9) cmail_ddmenu_btn02_pane_t1

0x3f86,	// (0x0007a337) bg_button_pane_cp031_ParamLimits

0x3f86,	// (0x0007a337) bg_button_pane_cp031

0xde20,	// (0x000841d1) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xde20,	// (0x000841d1) cmail_ddmenu_btn03_pane_g1

0xde38,	// (0x000841e9) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xde38,	// (0x000841e9) cmail_ddmenu_btn03_pane_t1

0xb649,	// (0x000819fa) cell_dialer2_keypad_pane_t1_ParamLimits

0xb663,	// (0x00081a14) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xb663,	// (0x00081a14) cell_dialer2_keypad_pane_t1_copy1

0xd277,	// (0x00083628) ncimui_group_button_pane

0xf0a6,	// (0x00085457) main_sp_fs_calendar_pane_ParamLimits

0xdaf5,	// (0x00083ea6) list_single_cmail_header_caption_pane_ParamLimits

0xdc1a,	// (0x00083fcb) aid_recal_txt_sm_pane

0xe889,	// (0x00084c3a) mian_recal_day_pane

0x63f1,	// (0x0007c7a2) popup_sp_fs_cale_preview_window_ParamLimits

0x4153,	// (0x0007a504) list_recal_day_pane

0x65a2,	// (0x0007c953) list_single_recal_day_pane_ParamLimits

0x65a2,	// (0x0007c953) list_single_recal_day_pane

0x417a,	// (0x0007a52b) list_single_recal_day_pane_g1_ParamLimits

0x417a,	// (0x0007a52b) list_single_recal_day_pane_g1

0x65b4,	// (0x0007c965) list_single_recal_day_pane_g2_ParamLimits

0x65b4,	// (0x0007c965) list_single_recal_day_pane_g2

0x65c0,	// (0x0007c971) list_single_recal_day_pane_g3_ParamLimits

0x65c0,	// (0x0007c971) list_single_recal_day_pane_g3

0x65cc,	// (0x0007c97d) list_single_recal_day_pane_g4_ParamLimits

0x65cc,	// (0x0007c97d) list_single_recal_day_pane_g4

0x65da,	// (0x0007c98b) list_single_recal_day_pane_g5_ParamLimits

0x65da,	// (0x0007c98b) list_single_recal_day_pane_g5

0x65f0,	// (0x0007c9a1) list_single_recal_day_pane_g6_ParamLimits

0x65f0,	// (0x0007c9a1) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000861e8) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000861e8) list_single_recal_day_pane_g

0x6604,	// (0x0007c9b5) list_single_recal_day_pane_t1

0x6616,	// (0x0007c9c7) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000861f3) list_single_recal_day_pane_t

0xde5c,	// (0x0008420d) ncimui_query_button_pane_ParamLimits

0xde5c,	// (0x0008420d) ncimui_query_button_pane

0xde6c,	// (0x0008421d) ncimui_query_button_pane_t1_ParamLimits

0xde6c,	// (0x0008421d) ncimui_query_button_pane_t1

0x4186,	// (0x0007a537) ncimui_query_button_pane_t2_ParamLimits

0x4186,	// (0x0007a537) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000861f8) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000861f8) ncimui_query_button_pane_t

0xde7f,	// (0x00084230) query_button_pane_ParamLimits

0xde7f,	// (0x00084230) query_button_pane

0xe889,	// (0x00084c3a) bg_button_pane_cp0028

0x4199,	// (0x0007a54a) query_button_pane_t1

0x99a9,	// (0x0007fd5a) main_tport_pane_ParamLimits

0xd9d8,	// (0x00083d89) bg_popup_window_pane_cp01_ParamLimits

0xd9d8,	// (0x00083d89) bg_popup_window_pane_cp01

0xd9e6,	// (0x00083d97) heading_pane_cp08_ParamLimits

0xd9e6,	// (0x00083d97) heading_pane_cp08

0xd9f4,	// (0x00083da5) heading_pane_cp07_ParamLimits

0xd9f4,	// (0x00083da5) heading_pane_cp07

0xda63,	// (0x00083e14) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x00086144) cell_tport_appsw_pane_g

0x5756,	// (0x0007bb07) input_candi_list_open_g1

0x0521,	// (0x000768d2) list_cale_time_pane_g6_ParamLimits

0x0521,	// (0x000768d2) list_cale_time_pane_g6

0xa42e,	// (0x000807df) aid_size_touch_calib_1_ParamLimits

0xa42e,	// (0x000807df) aid_size_touch_calib_1

0xa43a,	// (0x000807eb) aid_size_touch_calib_2_ParamLimits

0xa43a,	// (0x000807eb) aid_size_touch_calib_2

0xa448,	// (0x000807f9) aid_size_touch_calib_3_ParamLimits

0xa448,	// (0x000807f9) aid_size_touch_calib_3

0xa458,	// (0x00080809) aid_size_touch_calib_4_ParamLimits

0xa458,	// (0x00080809) aid_size_touch_calib_4

0xa466,	// (0x00080817) main_touch_calib_button_group_pane_ParamLimits

0xa466,	// (0x00080817) main_touch_calib_button_group_pane

0xa474,	// (0x00080825) main_touch_calib_pane_g1_ParamLimits

0xa480,	// (0x00080831) main_touch_calib_pane_g2_ParamLimits

0xa48c,	// (0x0008083d) main_touch_calib_pane_g3_ParamLimits

0xa498,	// (0x00080849) main_touch_calib_pane_g4_ParamLimits

0xf74d,	// (0x00085afe) main_touch_calib_pane_g_ParamLimits

0xa4a4,	// (0x00080855) main_touch_calib_pane_t1_ParamLimits

0xa4bd,	// (0x0008086e) main_touch_calib_pane_t2_ParamLimits

0xa4d6,	// (0x00080887) main_touch_calib_pane_t3_ParamLimits

0xa4ec,	// (0x0008089d) main_touch_calib_pane_t4_ParamLimits

0xa502,	// (0x000808b3) main_touch_calib_pane_t5_ParamLimits

0xf756,	// (0x00085b07) main_touch_calib_pane_t_ParamLimits

0x2700,	// (0x00078ab1) list_single_fp_cale_pane_g3_ParamLimits

0x2700,	// (0x00078ab1) list_single_fp_cale_pane_g3

0xf0a6,	// (0x00085457) bg_button_pane_cp012_ParamLimits

0xf0a6,	// (0x00085457) bg_vkb2_func_pane_cp03_ParamLimits

0xc4d6,	// (0x00082887) cell_vitu2_function_top_pane_g1_ParamLimits

0xf0a6,	// (0x00085457) bg_vkb2_func_pane_cp04_ParamLimits

0xd1ff,	// (0x000835b0) main_ncimui_button_group_pane_ParamLimits

0xd1ff,	// (0x000835b0) main_ncimui_button_group_pane

0xd265,	// (0x00083616) main_ncimui_pane_t3_ParamLimits

0xd265,	// (0x00083616) main_ncimui_pane_t3

0x3f49,	// (0x0007a2fa) phacti_button_group_pane

0x4122,	// (0x0007a4d3) aid_size_list_single_double_ParamLimits

0xdde1,	// (0x00084192) popup_ezdial_listscroll_window_ParamLimits

0xde02,	// (0x000841b3) popup_number_entry_window_cp01_ParamLimits

0xde8c,	// (0x0008423d) phacti_button_pane_ParamLimits

0xde8c,	// (0x0008423d) phacti_button_pane

0xe889,	// (0x00084c3a) bg_button_pane_cp14

0x41a7,	// (0x0007a558) phacti_button_pane_t1

0xde9d,	// (0x0008424e) main_touch_calib_button_pane_ParamLimits

0xde9d,	// (0x0008424e) main_touch_calib_button_pane

0xefdd,	// (0x0008538e) bg_button_pane_cp18_ParamLimits

0xefdd,	// (0x0008538e) bg_button_pane_cp18

0x41b5,	// (0x0007a566) main_touch_calib_button_pane_t1_ParamLimits

0x41b5,	// (0x0007a566) main_touch_calib_button_pane_t1

0x41cb,	// (0x0007a57c) main_touch_calib_button_pane_t2_ParamLimits

0x41cb,	// (0x0007a57c) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000861fd) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000861fd) main_touch_calib_button_pane_t

0xe889,	// (0x00084c3a) cell_ncimui_button_pane

0xe889,	// (0x00084c3a) bg_button_pane_cp032

0x41e9,	// (0x0007a59a) cell_ncimui_button_pane_t1

0xb6bf,	// (0x00081a70) image3_infobar_pane_ParamLimits

0xb6bf,	// (0x00081a70) image3_infobar_pane

0xd622,	// (0x000839d3) fs_bigclock_status_pane_ParamLimits

0xd622,	// (0x000839d3) fs_bigclock_status_pane

0xd62f,	// (0x000839e0) main_fs_bigclock_clock_pane_ParamLimits

0xd62f,	// (0x000839e0) main_fs_bigclock_clock_pane

0xd643,	// (0x000839f4) main_fs_bigclock_indi_pane_ParamLimits

0xd643,	// (0x000839f4) main_fs_bigclock_indi_pane

0xd66b,	// (0x00083a1c) main_fs_bigclock_swipe_pane_ParamLimits

0xd66b,	// (0x00083a1c) main_fs_bigclock_swipe_pane

0xe889,	// (0x00084c3a) main_fs_clock_dumped_data

0x3a81,	// (0x00079e32) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3a81,	// (0x00079e32) list_single_fs_bigclock_indicator_pane_g1

0x3a9c,	// (0x00079e4d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x3a9c,	// (0x00079e4d) list_single_fs_bigclock_indicator_pane_g2

0x3ab6,	// (0x00079e67) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x3ab6,	// (0x00079e67) list_single_fs_bigclock_indicator_pane_g3

0x3ad0,	// (0x00079e81) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x3ad0,	// (0x00079e81) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x00086025) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x00086025) list_single_fs_bigclock_indicator_pane_g

0x3afb,	// (0x00079eac) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3afb,	// (0x00079eac) list_single_fs_bigclock_indicator_pane_t1

0x3b23,	// (0x00079ed4) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3b23,	// (0x00079ed4) list_single_fs_bigclock_indicator_pane_t2

0x3b4b,	// (0x00079efc) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3b4b,	// (0x00079efc) list_single_fs_bigclock_indicator_pane_t3

0x3b73,	// (0x00079f24) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3b73,	// (0x00079f24) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x00086030) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x00086030) list_single_fs_bigclock_indicator_pane_t

0x41f7,	// (0x0007a5a8) image3_infobar_fav_pane_ParamLimits

0x41f7,	// (0x0007a5a8) image3_infobar_fav_pane

0x4207,	// (0x0007a5b8) image3_infobar_loc_pane_ParamLimits

0x4207,	// (0x0007a5b8) image3_infobar_loc_pane

0x421b,	// (0x0007a5cc) image3_infobar_time_pane_ParamLimits

0x421b,	// (0x0007a5cc) image3_infobar_time_pane

0x237d,	// (0x0007872e) image3_infobar_time_pane_g1

0x422b,	// (0x0007a5dc) image3_infobar_time_pane_t1

0x237d,	// (0x0007872e) image3_infobar_loc_pane_g1

0x4239,	// (0x0007a5ea) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00086202) image3_infobar_loc_pane_g

0x4241,	// (0x0007a5f2) image3_infobar_loc_pane_t1

0x237d,	// (0x0007872e) image3_infobar_fav_pane_g1

0x424f,	// (0x0007a600) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00086207) image3_infobar_fav_pane_g

0x4257,	// (0x0007a608) fs_bigclock_status_battery_pane

0x4260,	// (0x0007a611) fs_bigclock_status_signal_pane

0x4269,	// (0x0007a61a) fs_bigclock_status_title_pane

0x4272,	// (0x0007a623) fs_bigclock_status_signal_pane_g1

0x427b,	// (0x0007a62c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0008620c) fs_bigclock_status_signal_pane_g

0x4283,	// (0x0007a634) fs_bigclock_status_battery_pane_g1

0x428c,	// (0x0007a63d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00086211) fs_bigclock_status_battery_pane_g

0x4294,	// (0x0007a645) fs_bigclock_status_title_pane_t1

0xdead,	// (0x0008425e) main_fs_bigclock_clock_pane_g1

0xdead,	// (0x0008425e) main_fs_bigclock_clock_pane_g2

0xdeba,	// (0x0008426b) main_fs_bigclock_clock_pane_g3

0xdeba,	// (0x0008426b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00086216) main_fs_bigclock_clock_pane_g

0xdec6,	// (0x00084277) main_fs_bigclock_clock_pane_t1

0xded9,	// (0x0008428a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0008621f) main_fs_bigclock_clock_pane_t

0x42a2,	// (0x0007a653) list_single_fs_bigclock_indicator_pane_ParamLimits

0x42a2,	// (0x0007a653) list_single_fs_bigclock_indicator_pane

0x42b3,	// (0x0007a664) list_single_fs_bigclock_pane_ParamLimits

0x42b3,	// (0x0007a664) list_single_fs_bigclock_pane

0x42d9,	// (0x0007a68a) main_fs_bigclock_indicator_pane_t1

0x42e8,	// (0x0007a699) list_single_fs_bigclock_pane_g1

0x42f0,	// (0x0007a6a1) list_single_fs_bigclock_pane_t1

0x237d,	// (0x0007872e) main_fs_bigclock_swipe_pane_g1

0x4333,	// (0x0007a6e4) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00086230) main_fs_bigclock_swipe_pane_g

0x433b,	// (0x0007a6ec) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x433b,	// (0x0007a6ec) main_fs_bigclock_swipe_pane_t1

0x8a39,	// (0x0007edea) call_type_pane_ParamLimits

0xe889,	// (0x00084c3a) main_btmg_pane

0x6469,	// (0x0007c81a) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6469,	// (0x0007c81a) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000861a3) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000861a3) list_single_cale_mrui_row_pane_g

0x6591,	// (0x0007c942) list_recal_vselct_arw_lo_pane

0x4172,	// (0x0007a523) list_recal_vselct_arw_up_pane

0x6599,	// (0x0007c94a) list_recal_vselct_pane

0xdf30,	// (0x000842e1) btmg_button_pane

0xdf3c,	// (0x000842ed) main_btmg_pane_g1

0xe889,	// (0x00084c3a) bg_button_pane_cp044

0x4358,	// (0x0007a709) btmg_button_pane_t1

0x1f55,	// (0x00078306) aid_listscroll_gen

0xf0a6,	// (0x00085457) main_cntbar_detail_pane

0x3e95,	// (0x0007a246) list_cmail_folder_pane

0x2004,	// (0x000783b5) sp_fs_scroll_pane_cp03_ParamLimits

0x6628,	// (0x0007c9d9) list_single_fs_dyc_pane_cp01_ParamLimits

0x6628,	// (0x0007c9d9) list_single_fs_dyc_pane_cp01

0x4366,	// (0x0007a717) aid_size_cmail_indent

0x664d,	// (0x0007c9fe) list_single_dyc_row_pane_cp01

0xdf64,	// (0x00084315) cntbar_detail_list_pane_ParamLimits

0xdf64,	// (0x00084315) cntbar_detail_list_pane

0xdf9e,	// (0x0008434f) main_cntbar_detail_cont_pane_ParamLimits

0xdf9e,	// (0x0008434f) main_cntbar_detail_cont_pane

0x8a2d,	// (0x0007edde) scroll_pane_cp032_ParamLimits

0x8a2d,	// (0x0007edde) scroll_pane_cp032

0xdfaa,	// (0x0008435b) cntbar_detail_list_event_pane_ParamLimits

0xdfaa,	// (0x0008435b) cntbar_detail_list_event_pane

0xdf70,	// (0x00084321) cntbar_detail_list_shct_pane

0x03ac,	// (0x0007675d) aid_list_gen

0x436f,	// (0x0007a720) aid_scroll

0x4378,	// (0x0007a729) aid_size_touch_scroll_bar

0xed50,	// (0x00085101) aid_list_double

0xdfbe,	// (0x0008436f) aid_list_single

0xca7a,	// (0x00082e2b) aid_list_single_lg

0x6656,	// (0x0007ca07) aid_list_z_g_a_sm

0xdfc7,	// (0x00084378) aid_list_z_g_d

0x665e,	// (0x0007ca0f) aid_txt_z_prm

0x666c,	// (0x0007ca1d) aid_txt_z_prm_cp01

0x667a,	// (0x0007ca2b) aid_txt_z_sec

0xdfcf,	// (0x00084380) main_cntbar_detail_cont_pane_g1_ParamLimits

0xdfcf,	// (0x00084380) main_cntbar_detail_cont_pane_g1

0xdfdc,	// (0x0008438d) main_cntbar_detail_cont_pane_g2_ParamLimits

0xdfdc,	// (0x0008438d) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00086235) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00086235) main_cntbar_detail_cont_pane_g

0x4381,	// (0x0007a732) main_cntbar_detail_cont_pane_t1

0x438f,	// (0x0007a740) main_cntbar_detail_cont_pane_t2

0x439d,	// (0x0007a74e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0008623a) main_cntbar_detail_cont_pane_t

0xdfe8,	// (0x00084399) cell_cntbar_detail_list_shct_pane_ParamLimits

0xdfe8,	// (0x00084399) cell_cntbar_detail_list_shct_pane

0x43ab,	// (0x0007a75c) cntbar_detail_list_shct_pane_g1

0x43b4,	// (0x0007a765) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00086241) cntbar_detail_list_shct_pane_g

0xdffc,	// (0x000843ad) cntbar_detail_list_event_pane_g1_ParamLimits

0xdffc,	// (0x000843ad) cntbar_detail_list_event_pane_g1

0xe008,	// (0x000843b9) cntbar_detail_list_event_pane_g2_ParamLimits

0xe008,	// (0x000843b9) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00086246) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00086246) cntbar_detail_list_event_pane_g

0xe074,	// (0x00084425) cntbar_detail_list_event_pane_t1_ParamLimits

0xe074,	// (0x00084425) cntbar_detail_list_event_pane_t1

0xe089,	// (0x0008443a) cntbar_detail_list_event_pane_t2_ParamLimits

0xe089,	// (0x0008443a) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00086253) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00086253) cntbar_detail_list_event_pane_t

0x237d,	// (0x0007872e) cell_cntbar_detail_list_shct_pane_g1

0x0b23,	// (0x00076ed4) navi_pane_mv_g3

0xf0a6,	// (0x00085457) main_cntbar_detail_pane_ParamLimits

0xe889,	// (0x00084c3a) main_notif_wgt_pane

0xb349,	// (0x000816fa) aid_tch_main_mp4_pane_g4

0xb5a8,	// (0x00081959) popup_slider_window_cp02

0x6587,	// (0x0007c938) list_recal_day_event_pane

0xdf44,	// (0x000842f5) cntbar_detail_btn_pane_ParamLimits

0xdf44,	// (0x000842f5) cntbar_detail_btn_pane

0xdf54,	// (0x00084305) cntbar_detail_btn_pane_cp01_ParamLimits

0xdf54,	// (0x00084305) cntbar_detail_btn_pane_cp01

0xdf70,	// (0x00084321) cntbar_detail_list_shct_pane_ParamLimits

0xdf7c,	// (0x0008432d) cntbar_detail_pane_g1_ParamLimits

0xdf7c,	// (0x0008432d) cntbar_detail_pane_g1

0xdf88,	// (0x00084339) cntbar_detail_pane_t1_ParamLimits

0xdf88,	// (0x00084339) cntbar_detail_pane_t1

0xe014,	// (0x000843c5) cntbar_detail_list_event_pane_g3_ParamLimits

0xe014,	// (0x000843c5) cntbar_detail_list_event_pane_g3

0xe02c,	// (0x000843dd) cntbar_detail_list_event_pane_g4_ParamLimits

0xe02c,	// (0x000843dd) cntbar_detail_list_event_pane_g4

0xe044,	// (0x000843f5) cntbar_detail_list_event_pane_g5_ParamLimits

0xe044,	// (0x000843f5) cntbar_detail_list_event_pane_g5

0xe05c,	// (0x0008440d) cntbar_detail_list_event_pane_g6_ParamLimits

0xe05c,	// (0x0008440d) cntbar_detail_list_event_pane_g6

0xe09e,	// (0x0008444f) cntbar_detail_list_event_pane_t3_ParamLimits

0xe09e,	// (0x0008444f) cntbar_detail_list_event_pane_t3

0xe0b0,	// (0x00084461) popup_notif_wgt_window_ParamLimits

0xe0b0,	// (0x00084461) popup_notif_wgt_window

0xe0c0,	// (0x00084471) popup_submenu_window_cp01_ParamLimits

0xe0c0,	// (0x00084471) popup_submenu_window_cp01

0x0105,	// (0x000764b6) bg_popup_window_pane_cp10

0x43bd,	// (0x0007a76e) listscroll_notif_wgt_pane

0x43cf,	// (0x0007a780) list_notif_wgt_window

0x43d8,	// (0x0007a789) scroll_pane_cp033

0xe0d2,	// (0x00084483) list_notif_wgt_row_pane_ParamLimits

0xe0d2,	// (0x00084483) list_notif_wgt_row_pane

0x43e1,	// (0x0007a792) aid_size_list_notif_wgt_del

0x43ee,	// (0x0007a79f) list_notif_wgt_row_pane_g1

0x43fa,	// (0x0007a7ab) list_notif_wgt_row_pane_g2

0x4409,	// (0x0007a7ba) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0008625a) list_notif_wgt_row_pane_g

0x4416,	// (0x0007a7c7) list_notif_wgt_row_pane_t1

0x442c,	// (0x0007a7dd) list_notif_wgt_row_pane_t2

0x443e,	// (0x0007a7ef) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00086261) list_notif_wgt_row_pane_t

0x2fb6,	// (0x00079367) list_recal_day_event_pane_g1

0x4450,	// (0x0007a801) list_recal_day_event_pane_t1

0xe889,	// (0x00084c3a) bg_button_pane_cp045

0xe0e4,	// (0x00084495) cntbar_detail_btn_pane_t1

0x1f69,	// (0x0007831a) main_callh_pane_ParamLimits

0x1f69,	// (0x0007831a) main_callh_pane

0xe889,	// (0x00084c3a) main_coverflow0_pane

0xe889,	// (0x00084c3a) main_wgtman_pane

0xd683,	// (0x00083a34) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xd683,	// (0x00083a34) main_fs_bigclock_unlock_btn_pane

0xda5b,	// (0x00083e0c) bg_button_pane_cp16

0xda6b,	// (0x00083e1c) cell_tport_appsw_pane_g3

0xe0f2,	// (0x000844a3) cf0_flow_pane_ParamLimits

0xe0f2,	// (0x000844a3) cf0_flow_pane

0x445f,	// (0x0007a810) listscroll_cf0_pane

0x446a,	// (0x0007a81b) main_cf0_pane_g1

0xe101,	// (0x000844b2) main_cf0_pane_t1_ParamLimits

0xe101,	// (0x000844b2) main_cf0_pane_t1

0xe115,	// (0x000844c6) main_cf0_pane_t2_ParamLimits

0xe115,	// (0x000844c6) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0008626d) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0008626d) main_cf0_pane_t

0x447c,	// (0x0007a82d) scroll_pane_cp11

0xe129,	// (0x000844da) cf0_flow_pane_g1

0xe131,	// (0x000844e2) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00086272) cf0_flow_pane_g

0xe139,	// (0x000844ea) cf0_flow_pane_t1

0xe889,	// (0x00084c3a) main_call6_pane

0xe889,	// (0x00084c3a) main_calllock_pane

0xe147,	// (0x000844f8) call6_btn_grp_pane_ParamLimits

0xe147,	// (0x000844f8) call6_btn_grp_pane

0xe156,	// (0x00084507) call6_pane_g1_ParamLimits

0xe156,	// (0x00084507) call6_pane_g1

0xe166,	// (0x00084517) popup_call6_1st_window_ParamLimits

0xe166,	// (0x00084517) popup_call6_1st_window

0xe174,	// (0x00084525) popup_call6_2nd_window_ParamLimits

0xe174,	// (0x00084525) popup_call6_2nd_window

0xe182,	// (0x00084533) cell_call6_btn_pane_ParamLimits

0xe182,	// (0x00084533) cell_call6_btn_pane

0x0105,	// (0x000764b6) bg_popup_call2_in_pane_cp03

0x4487,	// (0x0007a838) popup_call6_1st_window_g1

0x448f,	// (0x0007a840) popup_call6_1st_window_g2

0x4497,	// (0x0007a848) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00086277) popup_call6_1st_window_g

0x449f,	// (0x0007a850) popup_call6_1st_window_t1

0x44ae,	// (0x0007a85f) popup_call6_1st_window_t2

0x44bc,	// (0x0007a86d) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0008627e) popup_call6_1st_window_t

0x0105,	// (0x000764b6) bg_popup_call2_in_pane_cp04

0x4487,	// (0x0007a838) popup_call6_2nd_window_g1

0x448f,	// (0x0007a840) popup_call6_2nd_window_g2

0x4497,	// (0x0007a848) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00086277) popup_call6_2nd_window_g

0x449f,	// (0x0007a850) popup_call6_2nd_window_t1

0xe889,	// (0x00084c3a) bg_button_pane_cp15

0x4501,	// (0x0007a8b2) cell_call6_btn_pane_g1

0xe191,	// (0x00084542) cell_call6_btn_pane_t1

0xe1a0,	// (0x00084551) listscroll_wgtman_pane_ParamLimits

0xe1a0,	// (0x00084551) listscroll_wgtman_pane

0xe1bc,	// (0x0008456d) wgtman_btn_pane_ParamLimits

0xe1bc,	// (0x0008456d) wgtman_btn_pane

0x092a,	// (0x00076cdb) aid_scroll_copy1

0x44ca,	// (0x0007a87b) list_wgtman_pane

0xe1f1,	// (0x000845a2) wgtman_btn_pane_g1_ParamLimits

0xe1f1,	// (0x000845a2) wgtman_btn_pane_g1

0xe219,	// (0x000845ca) wgtman_btn_pane_t1_ParamLimits

0xe219,	// (0x000845ca) wgtman_btn_pane_t1

0x44d4,	// (0x0007a885) wgtman_btn_pane_t2_ParamLimits

0x44d4,	// (0x0007a885) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00086285) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00086285) wgtman_btn_pane_t

0xe250,	// (0x00084601) listrow_wgtman_pane_ParamLimits

0xe250,	// (0x00084601) listrow_wgtman_pane

0xe26b,	// (0x0008461c) listrow_wgtman_pane_g1

0xe278,	// (0x00084629) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0008628a) listrow_wgtman_pane_g

0x6688,	// (0x0007ca39) listrow_wgtman_pane_t1

0x66a0,	// (0x0007ca51) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0008628f) listrow_wgtman_pane_t

0x66c6,	// (0x0007ca77) wait_bar_pane_cp09

0x44eb,	// (0x0007a89c) main_calllock_btn_pane

0x44f5,	// (0x0007a8a6) main_calllock_pane_g1

0xe889,	// (0x00084c3a) bg_button_pane_cp17

0x4501,	// (0x0007a8b2) main_calllock_btn_pane_g1

0x450a,	// (0x0007a8bb) main_calllock_btn_pane_t1

0xe889,	// (0x00084c3a) main_dialer3_pane

0xe889,	// (0x00084c3a) main_fmrd2_pane

0x237d,	// (0x0007872e) main_fs_bigclock_unlock_btn_pane_g1

0xe29e,	// (0x0008464f) main_fs_bigclock_unlock_btn_pane_t1

0xe2ac,	// (0x0008465d) area_fmrd2_info_pane_ParamLimits

0xe2ac,	// (0x0008465d) area_fmrd2_info_pane

0xe2ba,	// (0x0008466b) area_fmrd2_visual_pane_ParamLimits

0xe2ba,	// (0x0008466b) area_fmrd2_visual_pane

0xe2c8,	// (0x00084679) fmrd2_indi_pane_ParamLimits

0xe2c8,	// (0x00084679) fmrd2_indi_pane

0xe2d5,	// (0x00084686) area_fmrd2_visual_pane_g1

0xe2dd,	// (0x0008468e) area_fmrd2_visual_pane_t1

0xe2ed,	// (0x0008469e) area_fmrd2_visual_pane_t2

0xe2fd,	// (0x000846ae) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00086299) area_fmrd2_visual_pane_t

0xe30d,	// (0x000846be) area_fmrd2_info_pane_g1

0xe315,	// (0x000846c6) area_fmrd2_info_pane_t1

0xe325,	// (0x000846d6) area_fmrd2_info_pane_t2

0xe335,	// (0x000846e6) area_fmrd2_info_pane_t3

0xe345,	// (0x000846f6) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000862a0) area_fmrd2_info_pane_t

0xe353,	// (0x00084704) fmrd2_indi_pane_t1

0xe363,	// (0x00084714) fmrd2_indi_pane_t2

0xe373,	// (0x00084724) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000862a9) fmrd2_indi_pane_t

0x3adf,	// (0x00079e90) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x3adf,	// (0x00079e90) list_single_fs_bigclock_indicator_pane_g5

0x3b90,	// (0x00079f41) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3b90,	// (0x00079f41) list_single_fs_bigclock_indicator_pane_t5

0xdbfc,	// (0x00083fad) aid_cell_bcale_month_pane_ParamLimits

0xdbfc,	// (0x00083fad) aid_cell_bcale_month_pane

0xdc23,	// (0x00083fd4) bcale_month_pane_ParamLimits

0xdc23,	// (0x00083fd4) bcale_month_pane

0xdc41,	// (0x00083ff2) bcale_preview_pane_ParamLimits

0xdc41,	// (0x00083ff2) bcale_preview_pane

0x42f0,	// (0x0007a6a1) list_single_fs_bigclock_pane_t1_ParamLimits

0x430f,	// (0x0007a6c0) list_single_fs_bigclock_pane_t2_ParamLimits

0x430f,	// (0x0007a6c0) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0008622b) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0008622b) list_single_fs_bigclock_pane_t

0xe296,	// (0x00084647) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00086294) main_fs_bigclock_unlock_btn_pane_g

0xe381,	// (0x00084732) aid_dia3_key_size_ParamLimits

0xe381,	// (0x00084732) aid_dia3_key_size

0xe38d,	// (0x0008473e) aid_dia3_listrow_size_ParamLimits

0xe38d,	// (0x0008473e) aid_dia3_listrow_size

0xe39d,	// (0x0008474e) dia3_keypad_fun_pane_ParamLimits

0xe39d,	// (0x0008474e) dia3_keypad_fun_pane

0xe3af,	// (0x00084760) dia3_keypad_num_pane_ParamLimits

0xe3af,	// (0x00084760) dia3_keypad_num_pane

0xe3c1,	// (0x00084772) dia3_listscroll_pane_ParamLimits

0xe3c1,	// (0x00084772) dia3_listscroll_pane

0xe3cf,	// (0x00084780) dia3_numentry_pane_ParamLimits

0xe3cf,	// (0x00084780) dia3_numentry_pane

0x4519,	// (0x0007a8ca) dia3_list_pane

0x4524,	// (0x0007a8d5) scroll_pane_cp12

0xe889,	// (0x00084c3a) bg_dia3_numentry_pane

0xe3dd,	// (0x0008478e) dia3_numentry_pane_t1

0xe3ec,	// (0x0008479d) cell_dia3_key_num_pane

0xe3f4,	// (0x000847a5) cell_dia3_key0_fun_pane_ParamLimits

0xe3f4,	// (0x000847a5) cell_dia3_key0_fun_pane

0xe401,	// (0x000847b2) cell_dia3_key1_fun_pane_ParamLimits

0xe401,	// (0x000847b2) cell_dia3_key1_fun_pane

0xe40e,	// (0x000847bf) dia3_listrow_pane

0x3832,	// (0x00079be3) bg_dia3_numentry_pane_g1

0xe889,	// (0x00084c3a) bg_button_pane_cp21

0x452f,	// (0x0007a8e0) cell_dia3_key_num_pane_t1

0x453d,	// (0x0007a8ee) cell_dia3_key_num_pane_t2

0x454c,	// (0x0007a8fd) cell_dia3_key_num_pane_t3

0x455b,	// (0x0007a90c) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000862b0) cell_dia3_key_num_pane_t

0xe889,	// (0x00084c3a) bg_button_pane_cp19

0xe41b,	// (0x000847cc) cell_dia3_key0_fun_pane_g1

0xe889,	// (0x00084c3a) bg_button_pane_cp20

0xe423,	// (0x000847d4) cell_dia3_key1_fun_pane_g1

0xe42b,	// (0x000847dc) area_left_week_number_pane

0xe43e,	// (0x000847ef) area_top_day_name_pane

0xe44c,	// (0x000847fd) frame_month_view_pane

0x456a,	// (0x0007a91b) grid_month_view_pane

0xe461,	// (0x00084812) cell_top_day_name_pane_ParamLimits

0xe461,	// (0x00084812) cell_top_day_name_pane

0xe47b,	// (0x0008482c) cell_area_left_week_number_pane_ParamLimits

0xe47b,	// (0x0008482c) cell_area_left_week_number_pane

0xe49e,	// (0x0008484f) cell_month_view_pane_ParamLimits

0xe49e,	// (0x0008484f) cell_month_view_pane

0x4578,	// (0x0007a929) frm_month_g1

0xe4ca,	// (0x0008487b) frm_month_g2

0xe4db,	// (0x0008488c) frm_month_g3

0xe4ec,	// (0x0008489d) frm_month_g4

0xe4fd,	// (0x000848ae) frm_month_g5

0xe510,	// (0x000848c1) frm_month_g6

0xe523,	// (0x000848d4) frm_month_g7

0x4585,	// (0x0007a936) frm_month_g8

0xe536,	// (0x000848e7) frm_month_g9

0xe543,	// (0x000848f4) frm_month_g10

0xe550,	// (0x00084901) frm_month_g11

0xe55d,	// (0x0008490e) frm_month_g12

0xe56a,	// (0x0008491b) frm_month_g13

0xe577,	// (0x00084928) frm_month_g14

0xe586,	// (0x00084937) frm_month_g15

0xe595,	// (0x00084946) frm_month_g16

0x000f,

0xff08,	// (0x000862b9) frm_month_g

0x4592,	// (0x0007a943) cell_top_day_name_pane_t1

0xe5a4,	// (0x00084955) cell_area_left_week_number_pane_g1

0xe5b3,	// (0x00084964) cell_area_left_week_number_pane_t1

0x25e0,	// (0x00078991) cell_month_view_pane_g1

0xe5c9,	// (0x0008497a) cell_month_view_pane_t1

0xe889,	// (0x00084c3a) main_fps_pane

0x3dad,	// (0x0007a15e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3dad,	// (0x0007a15e) cmail_ddmenu_btn02_pane_cp1

0x3dc9,	// (0x0007a17a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x3dc9,	// (0x0007a17a) cmail_ddmenu_btn02_pane_cp2

0xde2c,	// (0x000841dd) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xde2c,	// (0x000841dd) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000861de) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000861de) cmail_ddmenu_btn02_pane_g

0xde4a,	// (0x000841fb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xde4a,	// (0x000841fb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000861e3) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000861e3) cmail_ddmenu_btn02_pane_t

0xe5df,	// (0x00084990) fps_text_pane_ParamLimits

0xe5df,	// (0x00084990) fps_text_pane

0xe5ec,	// (0x0008499d) main_fps_pane_g1_ParamLimits

0xe5ec,	// (0x0008499d) main_fps_pane_g1

0xe5fa,	// (0x000849ab) wait_bar_pane_cp010_ParamLimits

0xe5fa,	// (0x000849ab) wait_bar_pane_cp010

0xe606,	// (0x000849b7) fps_text_pane_t1_ParamLimits

0xe606,	// (0x000849b7) fps_text_pane_t1

0xba53,	// (0x00081e04) cam4_image_uncrop_pane_g1

0xba5c,	// (0x00081e0d) cam4_image_uncrop_pane_g2

0xba65,	// (0x00081e16) cam4_image_uncrop_pane_g3

0xba6e,	// (0x00081e1f) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x00085c9f) cam4_image_uncrop_pane_g

0xe40e,	// (0x000847bf) dia3_listrow_pane_ParamLimits

0xe889,	// (0x00084c3a) main_phob2_pane

0xda3d,	// (0x00083dee) cell_tport_appsw_pane_cp02_ParamLimits

0xda3d,	// (0x00083dee) cell_tport_appsw_pane_cp02

0xda4c,	// (0x00083dfd) cell_tport_appsw_pane_cp03_ParamLimits

0xda4c,	// (0x00083dfd) cell_tport_appsw_pane_cp03

0xe889,	// (0x00084c3a) phob2_contact_card_pane

0xe889,	// (0x00084c3a) phob2_listscroll_pane

0x45a5,	// (0x0007a956) phob2_list_pane

0x45ad,	// (0x0007a95e) scroll_pane_cp034

0xe61f,	// (0x000849d0) phob2_cc_data_pane_ParamLimits

0xe61f,	// (0x000849d0) phob2_cc_data_pane

0xe639,	// (0x000849ea) phob2_cc_listscroll_pane_ParamLimits

0xe639,	// (0x000849ea) phob2_cc_listscroll_pane

0xe250,	// (0x00084601) list_double_large_graphic_phob2_pane_ParamLimits

0xe250,	// (0x00084601) list_double_large_graphic_phob2_pane

0xe653,	// (0x00084a04) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe653,	// (0x00084a04) list_double_large_graphic_phob2_pane_g1

0x66d8,	// (0x0007ca89) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x66d8,	// (0x0007ca89) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000862da) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000862da) list_double_large_graphic_phob2_pane_g

0x66e4,	// (0x0007ca95) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x66e4,	// (0x0007ca95) list_double_large_graphic_phob2_pane_t1

0x66f9,	// (0x0007caaa) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x66f9,	// (0x0007caaa) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000862df) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000862df) list_double_large_graphic_phob2_pane_t

0xe889,	// (0x00084c3a) list_highlight_pane_cp024

0xe669,	// (0x00084a1a) phob2_cc_button_pane

0xe671,	// (0x00084a22) phob2_cc_data_pane_g1_ParamLimits

0xe671,	// (0x00084a22) phob2_cc_data_pane_g1

0xe67d,	// (0x00084a2e) phob2_cc_data_pane_g2_ParamLimits

0xe67d,	// (0x00084a2e) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000862e4) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000862e4) phob2_cc_data_pane_g

0xe689,	// (0x00084a3a) phob2_cc_data_pane_t1_ParamLimits

0xe689,	// (0x00084a3a) phob2_cc_data_pane_t1

0xe69b,	// (0x00084a4c) phob2_cc_data_pane_t2_ParamLimits

0xe69b,	// (0x00084a4c) phob2_cc_data_pane_t2

0xe6ad,	// (0x00084a5e) phob2_cc_data_pane_t3_ParamLimits

0xe6ad,	// (0x00084a5e) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000862e9) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000862e9) phob2_cc_data_pane_t

0x45b5,	// (0x0007a966) phob2_cc_list_pane_ParamLimits

0x45b5,	// (0x0007a966) phob2_cc_list_pane

0x304d,	// (0x000793fe) scroll_pane_cp035_ParamLimits

0x304d,	// (0x000793fe) scroll_pane_cp035

0xf0a6,	// (0x00085457) bg_button_pane_cp033

0x45c1,	// (0x0007a972) phob2_cc_button_pane_g1

0x45cd,	// (0x0007a97e) phob2_cc_button_pane_t1

0x45e2,	// (0x0007a993) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000862f0) phob2_cc_button_pane_t

0xe6bf,	// (0x00084a70) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xe6bf,	// (0x00084a70) list_double_large_graphic_phob2_cc_pane

0xe72d,	// (0x00084ade) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xe72d,	// (0x00084ade) list_double_large_graphic_phob2_cc_pane_g1

0xe73e,	// (0x00084aef) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xe73e,	// (0x00084aef) list_double_large_graphic_phob2_cc_pane_g2

0x670b,	// (0x0007cabc) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x670b,	// (0x0007cabc) list_double_large_graphic_phob2_cc_pane_g3

0x6717,	// (0x0007cac8) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6717,	// (0x0007cac8) list_double_large_graphic_phob2_cc_pane_g4

0x6723,	// (0x0007cad4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6723,	// (0x0007cad4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000862f5) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000862f5) list_double_large_graphic_phob2_cc_pane_g

0x672f,	// (0x0007cae0) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x672f,	// (0x0007cae0) list_double_large_graphic_phob2_cc_pane_t1

0x6758,	// (0x0007cb09) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x6758,	// (0x0007cb09) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00086300) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00086300) list_double_large_graphic_phob2_cc_pane_t

0x45f4,	// (0x0007a9a5) list_highlight_pane_cp025_ParamLimits

0x45f4,	// (0x0007a9a5) list_highlight_pane_cp025

0xf0a6,	// (0x00085457) bg_button_pane_cp033_ParamLimits

0x45c1,	// (0x0007a972) phob2_cc_button_pane_g1_ParamLimits

0x45cd,	// (0x0007a97e) phob2_cc_button_pane_t1_ParamLimits

0x45e2,	// (0x0007a993) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000862f0) phob2_cc_button_pane_t_ParamLimits

0x6a58,	// (0x0007ce09) popup_wgtman_window

0x2e92,	// (0x00079243) scroll_pane_cp038

0xe1d9,	// (0x0008458a) wgtman_btn_pane_cp_01_ParamLimits

0xe1d9,	// (0x0008458a) wgtman_btn_pane_cp_01

0x4602,	// (0x0007a9b3) wgtman_content_pane

0x460b,	// (0x0007a9bc) wgtman_heading_pane

0xe889,	// (0x00084c3a) bg_heading_pane_cp02

0x4614,	// (0x0007a9c5) wgtman_heading_pane_g1

0x461c,	// (0x0007a9cd) wgtman_heading_pane_t1

0x462a,	// (0x0007a9db) scroll_pane_cp036

0x4632,	// (0x0007a9e3) wgtman_list_pane

0x463a,	// (0x0007a9eb) wgtman_list_pane_t1_ParamLimits

0x463a,	// (0x0007a9eb) wgtman_list_pane_t1

0xb9b2,	// (0x00081d63) cam4_grid_pane

0x59d9,	// (0x0007bd8a) bg_button_pane_cp015_ParamLimits

0xc6a0,	// (0x00082a51) bg_button_pane_cp016_ParamLimits

0xc6b3,	// (0x00082a64) bg_button_pane_cp017_ParamLimits

0x5a1d,	// (0x0007bdce) popup_vitu2_query_window_g3_ParamLimits

0x5a1d,	// (0x0007bdce) popup_vitu2_query_window_g3

0x5a96,	// (0x0007be47) popup_vitu2_query_window_t6_ParamLimits

0x5a96,	// (0x0007be47) popup_vitu2_query_window_t6

0x5ac1,	// (0x0007be72) popup_vitu2_query_window_t7_ParamLimits

0x5ac1,	// (0x0007be72) popup_vitu2_query_window_t7

0x2d17,	// (0x000790c8) cam4_grid_pane_g1

0x2d20,	// (0x000790d1) cam4_grid_pane_g2

0x4654,	// (0x0007aa05) cam4_grid_pane_g3

0x465d,	// (0x0007aa0e) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00086305) cam4_grid_pane_g

0x77e8,	// (0x0007db99) aid_placing_vt_slider_lsc_ParamLimits

0x7b34,	// (0x0007dee5) vidtel_button_pane_ParamLimits

0x7b34,	// (0x0007dee5) vidtel_button_pane

0xe889,	// (0x00084c3a) bg_button_pane_cp034

0x4668,	// (0x0007aa19) vidtel_button_pane_g1

0x4670,	// (0x0007aa21) vidtel_button_pane_t1

0x2f94,	// (0x00079345) aid_size_vtel_slider_touch

0x304d,	// (0x000793fe) scroll_pane_cp039

0xd3c0,	// (0x00083771) ncim_query_button_pane_cp01_ParamLimits

0xd3df,	// (0x00083790) ncimui_query_pane_g1_ParamLimits

0xf0a6,	// (0x00085457) input_focus_pane_cp012_ParamLimits

0x3870,	// (0x00079c21) ncim_query_entry_pane_t1_ParamLimits

0x304d,	// (0x000793fe) scroll_pane_cp039_ParamLimits

0x0a0e,	// (0x00076dbf) navi_pane_bcale_mc_g1

0x0a16,	// (0x00076dc7) navi_pane_bcale_mc_t1

0x3e12,	// (0x0007a1c3) main_sp_fs_email_pane_g1

0x3e1e,	// (0x0007a1cf) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00086096) main_sp_fs_email_pane_g

0x4074,	// (0x0007a425) list_single_cale_mrui_row_pane_g3_ParamLimits

0x4074,	// (0x0007a425) list_single_cale_mrui_row_pane_g3

0x65e6,	// (0x0007c997) list_single_recal_day_pane_g5_event_pane

0x65fc,	// (0x0007c9ad) list_single_recal_day_pane_g7

0x4686,	// (0x0007aa37) list_recal_day_event_pane_cp01

0x468f,	// (0x0007aa40) list_recal_vselct_arw_lo_pane_cp01

0x4697,	// (0x0007aa48) list_recal_vselct_arw_up_pane_cp01

0x469f,	// (0x0007aa50) list_recal_vselct_pane_cp01

0x2fb6,	// (0x00079367) list_recal_day_event_pane_cp01_g1

0x6781,	// (0x0007cb32) list_recal_day_event_pane_cp01_t1

0x6604,	// (0x0007c9b5) list_single_recal_day_pane_t1_ParamLimits

0x6616,	// (0x0007c9c7) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000861f3) list_single_recal_day_pane_t_ParamLimits

0xef18,	// (0x000852c9) bg_notes_pane_ParamLimits

0xefbb,	// (0x0008536c) list_notes_pane_ParamLimits

0x6db6,	// (0x0007d167) scroll_pane_cp06_ParamLimits

0xefdd,	// (0x0008538e) main_notes_pane_ParamLimits

0xe889,	// (0x00084c3a) main_welc_pane

0xe74a,	// (0x00084afb) main_welc_body_pane_ParamLimits

0xe74a,	// (0x00084afb) main_welc_body_pane

0xe764,	// (0x00084b15) main_welc_opti_pane_ParamLimits

0xe764,	// (0x00084b15) main_welc_opti_pane

0xe797,	// (0x00084b48) main_welc_pane_t1_ParamLimits

0xe797,	// (0x00084b48) main_welc_pane_t1

0xe7b1,	// (0x00084b62) main_welc_body_row_pane_ParamLimits

0xe7b1,	// (0x00084b62) main_welc_body_row_pane

0x3f86,	// (0x0007a337) main_welc_opti_row_pane_ParamLimits

0x3f86,	// (0x0007a337) main_welc_opti_row_pane

0x46a9,	// (0x0007aa5a) main_welc_opti_row_pane_g1

0xe7d6,	// (0x00084b87) main_welc_opti_row_pane_t1

0x46b1,	// (0x0007aa62) main_welc_body_row_pane_t1

0x43c7,	// (0x0007a778) popup_notif_wgt_heading_pane

0x43e1,	// (0x0007a792) aid_size_list_notif_wgt_del_ParamLimits

0x43ee,	// (0x0007a79f) list_notif_wgt_row_pane_g1_ParamLimits

0x43fa,	// (0x0007a7ab) list_notif_wgt_row_pane_g2_ParamLimits

0x4409,	// (0x0007a7ba) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0008625a) list_notif_wgt_row_pane_g_ParamLimits

0x4416,	// (0x0007a7c7) list_notif_wgt_row_pane_t1_ParamLimits

0x442c,	// (0x0007a7dd) list_notif_wgt_row_pane_t2_ParamLimits

0x443e,	// (0x0007a7ef) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00086261) list_notif_wgt_row_pane_t_ParamLimits

0xe26b,	// (0x0008461c) listrow_wgtman_pane_g1_ParamLimits

0xe278,	// (0x00084629) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0008628a) listrow_wgtman_pane_g_ParamLimits

0x6688,	// (0x0007ca39) listrow_wgtman_pane_t1_ParamLimits

0x66a0,	// (0x0007ca51) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0008628f) listrow_wgtman_pane_t_ParamLimits

0x66c6,	// (0x0007ca77) wait_bar_pane_cp09_ParamLimits

0xe889,	// (0x00084c3a) bg_popup_heading_pane_cp02

0x46c0,	// (0x0007aa71) popup_notif_wgt_heading_pane_g1

0x46c8,	// (0x0007aa79) popup_notif_wgt_heading_pane_t1

0xe889,	// (0x00084c3a) main_vids_pane

0xe889,	// (0x00084c3a) vids_listscroll_pane

0xe7e5,	// (0x00084b96) scroll_pane_cp040

0xe889,	// (0x00084c3a) vids_list_pane

0xe7f0,	// (0x00084ba1) vids_list_double_pane_ParamLimits

0xe7f0,	// (0x00084ba1) vids_list_double_pane

0xe80a,	// (0x00084bbb) vids_list_double_pane_g1

0xe813,	// (0x00084bc4) vids_list_double_pane_t1

0xe823,	// (0x00084bd4) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00086313) vids_list_double_pane_t

0xf0a6,	// (0x00085457) main_ncimui_pane_ParamLimits

0xd217,	// (0x000835c8) main_ncimui_pane_g1_ParamLimits

0xd223,	// (0x000835d4) main_ncimui_pane_g2_ParamLimits

0xd223,	// (0x000835d4) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00085f9b) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00085f9b) main_ncimui_pane_g

0xe77d,	// (0x00084b2e) main_welc_pane_g1_ParamLimits

0xe77d,	// (0x00084b2e) main_welc_pane_g1

0xe789,	// (0x00084b3a) main_welc_pane_g2_ParamLimits

0xe789,	// (0x00084b3a) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0008630e) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0008630e) main_welc_pane_g

0xef18,	// (0x000852c9) listscroll_mce_pane_ParamLimits

0x0b63,	// (0x00076f14) wait_bar_pane_cp10

0x1f5d,	// (0x0007830e) main_cale_day_pane_ParamLimits

0x1f5d,	// (0x0007830e) main_cale_week_pane_ParamLimits

0xef18,	// (0x000852c9) main_messa_pane_ParamLimits

0xacea,	// (0x0008109b) main_clock2_btn_pane_ParamLimits

0xacea,	// (0x0008109b) main_clock2_btn_pane

0x2788,	// (0x00078b39) main_clock2_btn_pane_cp01_ParamLimits

0x2788,	// (0x00078b39) main_clock2_btn_pane_cp01

0x4045,	// (0x0007a3f6) list_cale_mrui_pane_ParamLimits

0x4474,	// (0x0007a825) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00086268) main_cf0_pane_g

0xe42b,	// (0x000847dc) area_left_week_number_pane_ParamLimits

0xe43e,	// (0x000847ef) area_top_day_name_pane_ParamLimits

0xe44c,	// (0x000847fd) frame_month_view_pane_ParamLimits

0x456a,	// (0x0007a91b) grid_month_view_pane_ParamLimits

0x4578,	// (0x0007a929) frm_month_g1_ParamLimits

0xe4ca,	// (0x0008487b) frm_month_g2_ParamLimits

0xe4db,	// (0x0008488c) frm_month_g3_ParamLimits

0xe4ec,	// (0x0008489d) frm_month_g4_ParamLimits

0xe4fd,	// (0x000848ae) frm_month_g5_ParamLimits

0xe510,	// (0x000848c1) frm_month_g6_ParamLimits

0xe523,	// (0x000848d4) frm_month_g7_ParamLimits

0x4585,	// (0x0007a936) frm_month_g8_ParamLimits

0xe536,	// (0x000848e7) frm_month_g9_ParamLimits

0xe543,	// (0x000848f4) frm_month_g10_ParamLimits

0xe550,	// (0x00084901) frm_month_g11_ParamLimits

0xe55d,	// (0x0008490e) frm_month_g12_ParamLimits

0xe56a,	// (0x0008491b) frm_month_g13_ParamLimits

0xe577,	// (0x00084928) frm_month_g14_ParamLimits

0xe586,	// (0x00084937) frm_month_g15_ParamLimits

0xe595,	// (0x00084946) frm_month_g16_ParamLimits

0xff08,	// (0x000862b9) frm_month_g_ParamLimits

0x4592,	// (0x0007a943) cell_top_day_name_pane_t1_ParamLimits

0xe5a4,	// (0x00084955) cell_area_left_week_number_pane_g1_ParamLimits

0xe5b3,	// (0x00084964) cell_area_left_week_number_pane_t1_ParamLimits

0x25e0,	// (0x00078991) cell_month_view_pane_g1_ParamLimits

0xe5c9,	// (0x0008497a) cell_month_view_pane_t1_ParamLimits

0xef10,	// (0x000852c1) main_clock2_btn_pane_g1

0x46d6,	// (0x0007aa87) main_clock2_btn_pane_t1

0xf0a6,	// (0x00085457) listscroll_cmail_pane_ParamLimits

0x3e12,	// (0x0007a1c3) main_sp_fs_email_pane_g1_ParamLimits

0x3e1e,	// (0x0007a1cf) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00086096) main_sp_fs_email_pane_g_ParamLimits

0x4153,	// (0x0007a504) list_recal_day_pane_ParamLimits

0x4164,	// (0x0007a515) mian_recal_day_pane_t1

0x5fd5,	// (0x0007c386) list_single_dyc_row_text_pane_t4_ParamLimits

0x5fd5,	// (0x0007c386) list_single_dyc_row_text_pane_t4

0x600c,	// (0x0007c3bd) list_single_dyc_row_text_pane_t5_ParamLimits

0x600c,	// (0x0007c3bd) list_single_dyc_row_text_pane_t5

0x6082,	// (0x0007c433) list_single_dyc_row_text_pane_t6_ParamLimits

0x6082,	// (0x0007c433) list_single_dyc_row_text_pane_t6

0x895f,	// (0x0007ed10) aid_mgn_list_cale_time_pane

0xf0a6,	// (0x00085457) main_gallery2_pane_ParamLimits

0x279e,	// (0x00078b4f) main_clock2_pane_cp01_t1

0x27ae,	// (0x00078b5f) main_clock2_pane_cp01_t3

0x0001,

0xf7c0,	// (0x00085b71) main_clock2_pane_cp01_t

0x71fa,	// (0x0007d5ab) cale_week_scroll_pane_g16_ParamLimits

0x71fa,	// (0x0007d5ab) cale_week_scroll_pane_g16

0x0105,	// (0x000764b6) vorec_slider_pane

0x4670,	// (0x0007aa21) vidtel_button_pane_t1_ParamLimits

0xdead,	// (0x0008425e) main_fs_bigclock_clock_pane_g1_ParamLimits

0xdead,	// (0x0008425e) main_fs_bigclock_clock_pane_g2_ParamLimits

0xdeba,	// (0x0008426b) main_fs_bigclock_clock_pane_g3_ParamLimits

0xdeba,	// (0x0008426b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x00086216) main_fs_bigclock_clock_pane_g_ParamLimits

0xdec6,	// (0x00084277) main_fs_bigclock_clock_pane_t1_ParamLimits

0xded9,	// (0x0008428a) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x0008621f) main_fs_bigclock_clock_pane_t_ParamLimits

0xa589,	// (0x0008093a) main_mup3_lyrics_pane_ParamLimits

0xa589,	// (0x0008093a) main_mup3_lyrics_pane

0xe857,	// (0x00084c08) main_mup3_lyrics_pane_t1_ParamLimits

0xe857,	// (0x00084c08) main_mup3_lyrics_pane_t1

0xb333,	// (0x000816e4) aid_main_mp4_pane_t1_area

0xb33d,	// (0x000816ee) aid_main_mp4_pane_t2_area

0xb43c,	// (0x000817ed) main_mp4_pane_g7_ParamLimits

0xb43c,	// (0x000817ed) main_mp4_pane_g7

0xb448,	// (0x000817f9) main_mp4_pane_g8_ParamLimits

0xb448,	// (0x000817f9) main_mp4_pane_g8

0xb85a,	// (0x00081c0b) aid_call6_pane_g1_size

0xe701,	// (0x00084ab2) list_double_large_graphic_phob2_other_pane_ParamLimits

0xe701,	// (0x00084ab2) list_double_large_graphic_phob2_other_pane

0x04c0,	// (0x00076871) list_double_large_graphic_phob2_other_pane_g1

0xe889,	// (0x00084c3a) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
