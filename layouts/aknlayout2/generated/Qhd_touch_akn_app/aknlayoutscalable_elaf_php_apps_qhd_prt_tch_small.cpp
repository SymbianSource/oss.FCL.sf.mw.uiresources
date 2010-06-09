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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0003b419 };

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
0x2326,	// (0x0003d73f) Screen

0x2332,	// (0x0003d74b) application_window

0x238e,	// (0x0003d7a7) area_bottom_pane_ParamLimits

0x238e,	// (0x0003d7a7) area_bottom_pane

0x23e7,	// (0x0003d800) area_top_pane_ParamLimits

0x23e7,	// (0x0003d800) area_top_pane

0x244b,	// (0x0003d864) call_video_uplink_pane_ParamLimits

0x244b,	// (0x0003d864) call_video_uplink_pane

0x248a,	// (0x0003d8a3) main_pane_ParamLimits

0x248a,	// (0x0003d8a3) main_pane

0xdddd,	// (0x000491f6) context_pane

0x567b,	// (0x00040a94) navi_pane

0x56a1,	// (0x00040aba) popup_cale_events_window_ParamLimits

0x56a1,	// (0x00040aba) popup_cale_events_window

0xddf0,	// (0x00049209) popup_mup_playback_window

0x56b9,	// (0x00040ad2) signal_pane

0xbd98,	// (0x000471b1) main_browser_pane

0xbf5d,	// (0x00047376) main_burst_pane

0x5507,	// (0x00040920) main_calc_pane

0xddc3,	// (0x000491dc) main_cale_day_pane

0x2bc7,	// (0x0003dfe0) main_cale_month_pane

0xddc3,	// (0x000491dc) main_cale_week_pane

0xbf5d,	// (0x00047376) main_call_pane

0xb751,	// (0x00046b6a) main_call_poc_pane

0xbf5d,	// (0x00047376) main_camera_pane

0xbf5d,	// (0x00047376) main_chi_dic_pane

0xc734,	// (0x00047b4d) main_clock_pane

0xb751,	// (0x00046b6a) main_fmradio_pane

0xbf5d,	// (0x00047376) main_graph_messa_pane

0xb751,	// (0x00046b6a) main_help_pane

0xbd98,	// (0x000471b1) main_im_pane

0xbcd3,	// (0x000470ec) main_image_pane_ParamLimits

0xbcd3,	// (0x000470ec) main_image_pane

0xb751,	// (0x00046b6a) main_location2_pane

0xbf5d,	// (0x00047376) main_location_pane

0xbcd3,	// (0x000470ec) main_messa_pane

0xb751,	// (0x00046b6a) main_mp2_pane

0xbf5d,	// (0x00047376) main_mp_pane

0xb751,	// (0x00046b6a) main_msg_pane

0xb751,	// (0x00046b6a) main_mup_eq_pane

0xb751,	// (0x00046b6a) main_mup_pane

0xbd98,	// (0x000471b1) main_notes_pane

0xb751,	// (0x00046b6a) main_pec_pane

0xb751,	// (0x00046b6a) main_phob_pane

0xb751,	// (0x00046b6a) main_pinb_pane

0xb751,	// (0x00046b6a) main_postcard_pane

0xb751,	// (0x00046b6a) main_qdial_pane

0xbf5d,	// (0x00047376) main_skin_pane

0xb751,	// (0x00046b6a) main_smil2_pane

0xbf5d,	// (0x00047376) main_smil_pane

0xbf5d,	// (0x00047376) main_video_pane

0xbf5d,	// (0x00047376) main_video_tele_pane

0xbcd3,	// (0x000470ec) main_viewer_pane_ParamLimits

0xbcd3,	// (0x000470ec) main_viewer_pane

0xbf5d,	// (0x00047376) main_vorec_pane

0x5545,	// (0x0004095e) popup_blid_sat_info_window_ParamLimits

0x5545,	// (0x0004095e) popup_blid_sat_info_window

0x5565,	// (0x0004097e) popup_dyc_status_message_window_ParamLimits

0x5565,	// (0x0004097e) popup_dyc_status_message_window

0x5575,	// (0x0004098e) popup_grid_large_graphic_window_ParamLimits

0x5575,	// (0x0004098e) popup_grid_large_graphic_window

0x5606,	// (0x00040a1f) popup_loc_request_window_ParamLimits

0x5606,	// (0x00040a1f) popup_loc_request_window

0x5653,	// (0x00040a6c) popup_wml_address_window_ParamLimits

0x5653,	// (0x00040a6c) popup_wml_address_window

0x53df,	// (0x000407f8) call_muted_g1

0x50a1,	// (0x000404ba) popup_call_audio_conf_window_ParamLimits

0x50a1,	// (0x000404ba) popup_call_audio_conf_window

0x53ef,	// (0x00040808) popup_call_audio_first_window_ParamLimits

0x53ef,	// (0x00040808) popup_call_audio_first_window

0x542f,	// (0x00040848) popup_call_audio_in_window_ParamLimits

0x542f,	// (0x00040848) popup_call_audio_in_window

0x5453,	// (0x0004086c) popup_call_audio_out_window_ParamLimits

0x5453,	// (0x0004086c) popup_call_audio_out_window

0x5475,	// (0x0004088e) popup_call_audio_second_window_ParamLimits

0x5475,	// (0x0004088e) popup_call_audio_second_window

0x54a5,	// (0x000408be) popup_call_audio_wait_window_ParamLimits

0x54a5,	// (0x000408be) popup_call_audio_wait_window

0x54c6,	// (0x000408df) popup_number_entry_window_ParamLimits

0x54c6,	// (0x000408df) popup_number_entry_window

0xb33e,	// (0x00046757) bg_popup_call_pane_cp05_ParamLimits

0xb33e,	// (0x00046757) bg_popup_call_pane_cp05

0xb35e,	// (0x00046777) popup_number_entry_window_t1

0xb371,	// (0x0004678a) popup_number_entry_window_t2

0xb383,	// (0x0004679c) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0004a4e3) popup_number_entry_window_t

0xb395,	// (0x000467ae) text_title_cp2

0xb3a8,	// (0x000467c1) bg_popup_call_pane_cp_ParamLimits

0xb3a8,	// (0x000467c1) bg_popup_call_pane_cp

0xb3b6,	// (0x000467cf) call_thumbnail_pane

0xb3be,	// (0x000467d7) popup_call_audio_in_window_g1_ParamLimits

0xb3be,	// (0x000467d7) popup_call_audio_in_window_g1

0xb3ca,	// (0x000467e3) popup_call_audio_in_window_g2_ParamLimits

0xb3ca,	// (0x000467e3) popup_call_audio_in_window_g2

0xb3d6,	// (0x000467ef) popup_call_audio_in_window_g3_ParamLimits

0xb3d6,	// (0x000467ef) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0004a4ec) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0004a4ec) popup_call_audio_in_window_g

0xb3e2,	// (0x000467fb) popup_call_audio_in_window_t1_ParamLimits

0xb3e2,	// (0x000467fb) popup_call_audio_in_window_t1

0xb3fe,	// (0x00046817) popup_call_audio_in_window_t2_ParamLimits

0xb3fe,	// (0x00046817) popup_call_audio_in_window_t2

0xb41a,	// (0x00046833) popup_call_audio_in_window_t3_ParamLimits

0xb41a,	// (0x00046833) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0004a4f3) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0004a4f3) popup_call_audio_in_window_t

0xb3a8,	// (0x000467c1) bg_popup_call_pane_cp01_ParamLimits

0xb3a8,	// (0x000467c1) bg_popup_call_pane_cp01

0xb3b6,	// (0x000467cf) call_thumbnail_pane_cp02

0xb42d,	// (0x00046846) call_type_pane_cp022

0xb435,	// (0x0004684e) popup_call_audio_out_window_g1_ParamLimits

0xb435,	// (0x0004684e) popup_call_audio_out_window_g1

0xb447,	// (0x00046860) popup_call_audio_out_window_g2_ParamLimits

0xb447,	// (0x00046860) popup_call_audio_out_window_g2

0xb453,	// (0x0004686c) popup_call_audio_out_window_g3_ParamLimits

0xb453,	// (0x0004686c) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0004a4fa) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0004a4fa) popup_call_audio_out_window_g

0xb465,	// (0x0004687e) popup_call_audio_out_window_t1_ParamLimits

0xb465,	// (0x0004687e) popup_call_audio_out_window_t1

0xb47d,	// (0x00046896) popup_call_audio_out_window_t2_ParamLimits

0xb47d,	// (0x00046896) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0004a501) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0004a501) popup_call_audio_out_window_t

0xb492,	// (0x000468ab) bg_popup_call_pane_ParamLimits

0xb492,	// (0x000468ab) bg_popup_call_pane

0x268b,	// (0x0003daa4) call_thumbnail_pane_cp_ParamLimits

0x268b,	// (0x0003daa4) call_thumbnail_pane_cp

0xb516,	// (0x0004692f) call_type_pane_cp01_ParamLimits

0xb516,	// (0x0004692f) call_type_pane_cp01

0xb55a,	// (0x00046973) popup_call_audio_first_window_g1_ParamLimits

0xb55a,	// (0x00046973) popup_call_audio_first_window_g1

0xb5a6,	// (0x000469bf) popup_call_audio_first_window_g2_ParamLimits

0xb5a6,	// (0x000469bf) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0004a506) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0004a506) popup_call_audio_first_window_g

0xb5ea,	// (0x00046a03) popup_call_audio_first_window_t1_ParamLimits

0xb5ea,	// (0x00046a03) popup_call_audio_first_window_t1

0xb696,	// (0x00046aaf) popup_call_audio_first_window_t4_ParamLimits

0xb696,	// (0x00046aaf) popup_call_audio_first_window_t4

0xb722,	// (0x00046b3b) popup_call_audio_first_window_t5_ParamLimits

0xb722,	// (0x00046b3b) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0004a50b) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0004a50b) popup_call_audio_first_window_t

0xb751,	// (0x00046b6a) bg_popup_call_pane_cp02

0xb75b,	// (0x00046b74) call_type_pane_cp023

0xb763,	// (0x00046b7c) popup_call_audio_wait_window_g1

0xb76b,	// (0x00046b84) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004a512) popup_call_audio_wait_window_g

0xb773,	// (0x00046b8c) popup_call_audio_wait_window_t3

0xb781,	// (0x00046b9a) bg_popup_call_pane_cp03_ParamLimits

0xb781,	// (0x00046b9a) bg_popup_call_pane_cp03

0xb7e1,	// (0x00046bfa) call_thumbnail_pane_cp011_ParamLimits

0xb7e1,	// (0x00046bfa) call_thumbnail_pane_cp011

0xb7ed,	// (0x00046c06) call_type_pane_cp034_ParamLimits

0xb7ed,	// (0x00046c06) call_type_pane_cp034

0xb829,	// (0x00046c42) popup_call_audio_second_window_g1_ParamLimits

0xb829,	// (0x00046c42) popup_call_audio_second_window_g1

0xbb8c,	// (0x00046fa5) popup_call_audio_second_window_g2_ParamLimits

0xbb8c,	// (0x00046fa5) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0004a517) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0004a517) popup_call_audio_second_window_g

0xbbc8,	// (0x00046fe1) popup_call_audio_second_window_t1_ParamLimits

0xbbc8,	// (0x00046fe1) popup_call_audio_second_window_t1

0xbc49,	// (0x00047062) popup_call_audio_second_window_t2_ParamLimits

0xbc49,	// (0x00047062) popup_call_audio_second_window_t2

0xbc7f,	// (0x00047098) popup_call_audio_second_window_t3_ParamLimits

0xbc7f,	// (0x00047098) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0004a51c) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0004a51c) popup_call_audio_second_window_t

0xb751,	// (0x00046b6a) bg_popup_call_pane_cp04

0xbcb5,	// (0x000470ce) list_conf_pane

0xbcbd,	// (0x000470d6) popup_call_audio_conf_window_t1

0xbccb,	// (0x000470e4) call_thumbnail_pane_g1

0xbcd3,	// (0x000470ec) bg_pinb_pane_ParamLimits

0xbcd3,	// (0x000470ec) bg_pinb_pane

0xbce1,	// (0x000470fa) find_pinb_pane

0xbcea,	// (0x00047103) listscroll_pinb_pane_ParamLimits

0xbcea,	// (0x00047103) listscroll_pinb_pane

0xbcf9,	// (0x00047112) pinb_bg_pane_g1

0x26af,	// (0x0003dac8) pinb_bg_pane_g2

0x26bb,	// (0x0003dad4) pinb_bg_pane_g3

0x26c7,	// (0x0003dae0) pinb_bg_pane_g4

0x26d3,	// (0x0003daec) pinb_bg_pane_g5

0x26df,	// (0x0003daf8) pinb_bg_pane_g6

0x26ea,	// (0x0003db03) pinb_bg_pane_g7

0x26f5,	// (0x0003db0e) pinb_bg_pane_g8

0x2700,	// (0x0003db19) pinb_bg_pane_g9

0x270a,	// (0x0003db23) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0004a523) pinb_bg_pane_g

0x2727,	// (0x0003db40) grid_pinb_pane

0x2732,	// (0x0003db4b) list_pinb_pane

0x273d,	// (0x0003db56) scroll_pane_cp01_ParamLimits

0x273d,	// (0x0003db56) scroll_pane_cp01

0xbd03,	// (0x0004711c) find_pinb_pane_g1_ParamLimits

0xbd03,	// (0x0004711c) find_pinb_pane_g1

0xbd1b,	// (0x00047134) find_pinb_pane_t1

0xbd2d,	// (0x00047146) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0004a53d) find_pinb_pane_t

0xbd42,	// (0x0004715b) input_focus_pane_cp01_ParamLimits

0xbd42,	// (0x0004715b) input_focus_pane_cp01

0x274f,	// (0x0003db68) cell_pinb_pane_ParamLimits

0x274f,	// (0x0003db68) cell_pinb_pane

0x2777,	// (0x0003db90) cell_pinb_pane_g1_ParamLimits

0x2777,	// (0x0003db90) cell_pinb_pane_g1

0x278c,	// (0x0003dba5) cell_pinb_pane_g2_ParamLimits

0x278c,	// (0x0003dba5) cell_pinb_pane_g2

0xbd4e,	// (0x00047167) cell_pinb_pane_g3_ParamLimits

0xbd4e,	// (0x00047167) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0004a542) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0004a542) cell_pinb_pane_g

0xb751,	// (0x00046b6a) grid_highlight_pane_cp01

0x2798,	// (0x0003dbb1) list_pinb_item_pane_ParamLimits

0x2798,	// (0x0003dbb1) list_pinb_item_pane

0xb751,	// (0x00046b6a) list_highlight_pane_cp02

0x27be,	// (0x0003dbd7) list_pinb_item_pane_g1_ParamLimits

0x27be,	// (0x0003dbd7) list_pinb_item_pane_g1

0x27cb,	// (0x0003dbe4) list_pinb_item_pane_g2_ParamLimits

0x27cb,	// (0x0003dbe4) list_pinb_item_pane_g2

0x27d7,	// (0x0003dbf0) list_pinb_item_pane_g3_ParamLimits

0x27d7,	// (0x0003dbf0) list_pinb_item_pane_g3

0x27e8,	// (0x0003dc01) list_pinb_item_pane_g4_ParamLimits

0x27e8,	// (0x0003dc01) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0004a549) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0004a549) list_pinb_item_pane_g

0x27f4,	// (0x0003dc0d) list_pinb_item_pane_t1_ParamLimits

0x27f4,	// (0x0003dc0d) list_pinb_item_pane_t1

0x2825,	// (0x0003dc3e) calc_display_pane

0x2843,	// (0x0003dc5c) calc_paper_pane

0x285f,	// (0x0003dc78) grid_calc_pane

0xb751,	// (0x00046b6a) bg_list_pane_cp01

0x288b,	// (0x0003dca4) clock_g1

0x2893,	// (0x0003dcac) clock_g2

0x0001,

0xf139,	// (0x0004a552) clock_g

0x289d,	// (0x0003dcb6) clock_t1_ParamLimits

0x289d,	// (0x0003dcb6) clock_t1

0x28b2,	// (0x0003dccb) clock_t2_ParamLimits

0x28b2,	// (0x0003dccb) clock_t2

0x28c4,	// (0x0003dcdd) clock_t3_ParamLimits

0x28c4,	// (0x0003dcdd) clock_t3

0x28d6,	// (0x0003dcef) clock_t4_ParamLimits

0x28d6,	// (0x0003dcef) clock_t4

0x28e8,	// (0x0003dd01) clock_t5_ParamLimits

0x28e8,	// (0x0003dd01) clock_t5

0x28fd,	// (0x0003dd16) clock_t6_ParamLimits

0x28fd,	// (0x0003dd16) clock_t6

0x290f,	// (0x0003dd28) clock_t7_ParamLimits

0x290f,	// (0x0003dd28) clock_t7

0x2921,	// (0x0003dd3a) clock_t8_ParamLimits

0x2921,	// (0x0003dd3a) clock_t8

0x2937,	// (0x0003dd50) clock_t9_ParamLimits

0x2937,	// (0x0003dd50) clock_t9

0x0008,

0xf13e,	// (0x0004a557) clock_t_ParamLimits

0xf13e,	// (0x0004a557) clock_t

0xbd5a,	// (0x00047173) popup_clock_analogue_window_cp02

0xbd5a,	// (0x00047173) popup_clock_digital_window_cp01

0xbd62,	// (0x0004717b) listscroll_help_pane

0xb751,	// (0x00046b6a) phob_pre_status_pane

0xbd6c,	// (0x00047185) grid_qdial_pane

0xbcd3,	// (0x000470ec) listscroll_mce_pane

0xbcd3,	// (0x000470ec) bg_notes_pane

0xbd76,	// (0x0004718f) list_notes_pane

0x294d,	// (0x0003dd66) scroll_pane_cp06

0xbd84,	// (0x0004719d) bg_calc_paper_pane

0x295c,	// (0x0003dd75) list_calc_pane

0xbd98,	// (0x000471b1) bg_calc_display_pane

0x2976,	// (0x0003dd8f) calc_display_pane_t1

0x298b,	// (0x0003dda4) calc_display_pane_t2

0x29a0,	// (0x0003ddb9) calc_display_pane_t3

0x0002,

0xf151,	// (0x0004a56a) calc_display_pane_t

0x29b2,	// (0x0003ddcb) cell_calc_pane_ParamLimits

0x29b2,	// (0x0003ddcb) cell_calc_pane

0xbda4,	// (0x000471bd) bg_calc_paper_pane_g1

0xbdb0,	// (0x000471c9) bg_calc_paper_pane_g2

0xbdbc,	// (0x000471d5) bg_calc_paper_pane_g3

0xbdc8,	// (0x000471e1) bg_calc_paper_pane_g4

0xbdd4,	// (0x000471ed) bg_calc_paper_pane_g5

0x29df,	// (0x0003ddf8) bg_calc_paper_pane_g6

0x29f0,	// (0x0003de09) bg_calc_paper_pane_g7

0x2a01,	// (0x0003de1a) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0004a571) bg_calc_paper_pane_g

0x2a12,	// (0x0003de2b) calc_bg_paper_pane_g9

0x2a23,	// (0x0003de3c) list_calc_item_pane_ParamLimits

0x2a23,	// (0x0003de3c) list_calc_item_pane

0xbde0,	// (0x000471f9) list_calc_item_pane_g1

0x2a52,	// (0x0003de6b) list_calc_item_pane_t1_ParamLimits

0x2a52,	// (0x0003de6b) list_calc_item_pane_t1

0x2a64,	// (0x0003de7d) list_calc_item_pane_t2_ParamLimits

0x2a64,	// (0x0003de7d) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0004a582) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0004a582) list_calc_item_pane_t

0xbded,	// (0x00047206) cell_calc_pane_g1

0xbdf7,	// (0x00047210) grid_highlight_pane_cp02

0xe199,	// (0x000495b2) bg_calc_display_pane_g1

0x2a94,	// (0x0003dead) bg_calc_display_pane_g2

0x2a9e,	// (0x0003deb7) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0004a58c) bg_calc_display_pane_g

0x2aa7,	// (0x0003dec0) cell_qdial_pane_ParamLimits

0x2aa7,	// (0x0003dec0) cell_qdial_pane

0x2abb,	// (0x0003ded4) cell_qdial_pane_g1_ParamLimits

0x2abb,	// (0x0003ded4) cell_qdial_pane_g1

0x2ac8,	// (0x0003dee1) cell_qdial_pane_g2_ParamLimits

0x2ac8,	// (0x0003dee1) cell_qdial_pane_g2

0xbe19,	// (0x00047232) cell_qdial_pane_g3_ParamLimits

0xbe19,	// (0x00047232) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0004a593) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0004a593) cell_qdial_pane_g

0x2ae6,	// (0x0003deff) cell_qdial_pane_t1_ParamLimits

0x2ae6,	// (0x0003deff) cell_qdial_pane_t1

0x2afe,	// (0x0003df17) cell_qdial_pane_t2_ParamLimits

0x2afe,	// (0x0003df17) cell_qdial_pane_t2

0x2b11,	// (0x0003df2a) cell_qdial_pane_t3_ParamLimits

0x2b11,	// (0x0003df2a) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0004a59c) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0004a59c) cell_qdial_pane_t

0xb751,	// (0x00046b6a) grid_highlight_pane_cp04

0xbe25,	// (0x0004723e) thumbnail_qdial_pane_ParamLimits

0xbe25,	// (0x0004723e) thumbnail_qdial_pane

0xbe81,	// (0x0004729a) list_help_pane

0xbe8a,	// (0x000472a3) scroll_pane_cp02

0x2b24,	// (0x0003df3d) help_list_pane_t1_ParamLimits

0x2b24,	// (0x0003df3d) help_list_pane_t1

0x2b57,	// (0x0003df70) bg_notes_pane_g2

0x2b5f,	// (0x0003df78) bg_notes_pane_g3

0x2b67,	// (0x0003df80) notes_bg_pane_g1

0x2b6f,	// (0x0003df88) notes_bg_pane_g4

0x2b77,	// (0x0003df90) notes_bg_pane_g5

0x2b7f,	// (0x0003df98) notes_bg_pane_g6

0x2b87,	// (0x0003dfa0) notes_bg_pane_g7

0x2b8f,	// (0x0003dfa8) notes_bg_pane_g8

0x2b97,	// (0x0003dfb0) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0004a5ba) notes_bg_pane_g

0x2b9f,	// (0x0003dfb8) list_notes_text_pane_ParamLimits

0x2b9f,	// (0x0003dfb8) list_notes_text_pane

0xbe93,	// (0x000472ac) list_notes_text_pane_g1

0x0f74,	// (0x0003c38d) list_notes_text_pane_t1

0x2bc7,	// (0x0003dfe0) listscroll_cale_week_pane

0x2bec,	// (0x0003e005) bg_cale_heading_pane

0xbeb6,	// (0x000472cf) bg_cale_pane_cp01

0x2c0c,	// (0x0003e025) cale_week_corner_pane

0x2c26,	// (0x0003e03f) cale_week_day_heading_pane

0x2c46,	// (0x0003e05f) cale_week_scroll_pane_g1

0x2c61,	// (0x0003e07a) cale_week_scroll_pane_g2

0x2c74,	// (0x0003e08d) cale_week_scroll_pane_g3

0x2c87,	// (0x0003e0a0) cale_week_scroll_pane_g4

0x2c9a,	// (0x0003e0b3) cale_week_scroll_pane_g5

0x2cad,	// (0x0003e0c6) cale_week_scroll_pane_g6

0x2cc0,	// (0x0003e0d9) cale_week_scroll_pane_g7

0x2cd5,	// (0x0003e0ee) cale_week_scroll_pane_g8

0x2cea,	// (0x0003e103) cale_week_scroll_pane_g9

0x2cfd,	// (0x0003e116) cale_week_scroll_pane_g10

0x2d10,	// (0x0003e129) cale_week_scroll_pane_g11

0x2d23,	// (0x0003e13c) cale_week_scroll_pane_g12

0x2d3a,	// (0x0003e153) cale_week_scroll_pane_g13

0x2d55,	// (0x0003e16e) cale_week_scroll_pane_g14

0x2d70,	// (0x0003e189) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0004a5c9) cale_week_scroll_pane_g

0x2da0,	// (0x0003e1b9) cale_week_time_pane

0x2db5,	// (0x0003e1ce) grid_cale_week_pane

0xbee5,	// (0x000472fe) scroll_pane_cp08

0x2dd4,	// (0x0003e1ed) cell_cale_week_pane_ParamLimits

0x2dd4,	// (0x0003e1ed) cell_cale_week_pane

0x2e36,	// (0x0003e24f) cale_week_day_heading_pane_t1

0x2e51,	// (0x0003e26a) cale_week_day_heading_pane_t2

0x2e6c,	// (0x0003e285) cale_week_day_heading_pane_t3

0x2e87,	// (0x0003e2a0) cale_week_day_heading_pane_t4

0x2ea2,	// (0x0003e2bb) cale_week_day_heading_pane_t5

0x2ebd,	// (0x0003e2d6) cale_week_day_heading_pane_t6

0x2ed8,	// (0x0003e2f1) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0004a5ea) cale_week_day_heading_pane_t

0xbf02,	// (0x0004731b) bg_cale_side_pane

0x2ef3,	// (0x0003e30c) cale_week_time_pane_t1

0x2f0d,	// (0x0003e326) cale_week_time_pane_t2

0x2f27,	// (0x0003e340) cale_week_time_pane_t3

0x2f41,	// (0x0003e35a) cale_week_time_pane_t4

0x2f5b,	// (0x0003e374) cale_week_time_pane_t5

0x2f75,	// (0x0003e38e) cale_week_time_pane_t6

0x2f93,	// (0x0003e3ac) cale_week_time_pane_t7

0x2fb5,	// (0x0003e3ce) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0004a5f9) cale_week_time_pane_t

0x2fd9,	// (0x0003e3f2) cell_cale_week_pane_g2

0x2ffd,	// (0x0003e416) cell_cale_week_pane_g3_ParamLimits

0x2ffd,	// (0x0003e416) cell_cale_week_pane_g3

0xbf10,	// (0x00047329) grid_highlight_pane_cp07

0xbf18,	// (0x00047331) listscroll_gms_pane

0xbf22,	// (0x0004733b) grid_gms_pane

0xbf2b,	// (0x00047344) listscroll_gms_pane_g1

0xbf33,	// (0x0004734c) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0004a60a) listscroll_gms_pane_g

0x3015,	// (0x0003e42e) scroll_pane_cp010

0x3020,	// (0x0003e439) cell_gms_pane_ParamLimits

0x3020,	// (0x0003e439) cell_gms_pane

0x3033,	// (0x0003e44c) cell_gms_pane_g1

0xbf3b,	// (0x00047354) cell_gms_pane_g2

0xbf43,	// (0x0004735c) cell_gms_pane_g3

0xbf4c,	// (0x00047365) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0004a60f) cell_gms_pane_g

0xbf55,	// (0x0004736e) grid_highlight_pane_cp09

0x5387,	// (0x000407a0) phob_pre_status_pane_g1

0x538f,	// (0x000407a8) phob_pre_status_pane_g2

0x5397,	// (0x000407b0) phob_pre_status_pane_g3

0x539f,	// (0x000407b8) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0004a9fa) phob_pre_status_pane_g

0x53af,	// (0x000407c8) phob_pre_status_pane_t1

0x53bf,	// (0x000407d8) phob_pre_status_pane_t2

0x53cf,	// (0x000407e8) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0004aa05) phob_pre_status_pane_t

0xbf5d,	// (0x00047376) bg_list_pane_cp05

0x3043,	// (0x0003e45c) grid_vorec_pane

0x304d,	// (0x0003e466) vorec_t1

0x305b,	// (0x0003e474) vorec_t2

0x3069,	// (0x0003e482) vorec_t3

0x3077,	// (0x0003e490) vorec_t4

0xa11e,	// (0x00045537) vorec_t5

0xa12c,	// (0x00045545) vorec_t6

0x0004,

0xf1ff,	// (0x0004a618) vorec_t

0xa13a,	// (0x00045553) wait_bar_pane_cp01

0x3093,	// (0x0003e4ac) cell_vorec_pane_ParamLimits

0x3093,	// (0x0003e4ac) cell_vorec_pane

0x30a6,	// (0x0003e4bf) cell_vorec_pane_g1

0xb751,	// (0x00046b6a) grid_highlight_pane_cp05

0x30c0,	// (0x0003e4d9) cams_zoom_pane

0x30cc,	// (0x0003e4e5) image_vga_pane

0x30db,	// (0x0003e4f4) main_camera_pane_g1

0x30e9,	// (0x0003e502) main_camera_pane_g2

0x30f5,	// (0x0003e50e) main_camera_pane_g3

0x3101,	// (0x0003e51a) main_camera_pane_g4

0x310d,	// (0x0003e526) main_camera_pane_g5

0x3119,	// (0x0003e532) main_camera_pane_g6

0x3125,	// (0x0003e53e) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0004a623) main_camera_pane_g

0x3131,	// (0x0003e54a) main_camera_pane_t1

0x3143,	// (0x0003e55c) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0004a634) main_camera_pane_t

0x3164,	// (0x0003e57d) cams_zoom_pane_cp_ParamLimits

0x3164,	// (0x0003e57d) cams_zoom_pane_cp

0x3188,	// (0x0003e5a1) image_cif_pane_ParamLimits

0x3188,	// (0x0003e5a1) image_cif_pane

0x31a6,	// (0x0003e5bf) image_subqcif_pane

0x31ae,	// (0x0003e5c7) main_video_pane_g1_ParamLimits

0x31ae,	// (0x0003e5c7) main_video_pane_g1

0x31ce,	// (0x0003e5e7) main_video_pane_g2_ParamLimits

0x31ce,	// (0x0003e5e7) main_video_pane_g2

0x31fe,	// (0x0003e617) main_video_pane_g3_ParamLimits

0x31fe,	// (0x0003e617) main_video_pane_g3

0x3227,	// (0x0003e640) main_video_pane_g4_ParamLimits

0x3227,	// (0x0003e640) main_video_pane_g4

0x3250,	// (0x0003e669) main_video_pane_g5_ParamLimits

0x3250,	// (0x0003e669) main_video_pane_g5

0xbf71,	// (0x0004738a) main_video_pane_g6_ParamLimits

0xbf71,	// (0x0004738a) main_video_pane_g6

0x0006,

0xf220,	// (0x0004a639) main_video_pane_g_ParamLimits

0xf220,	// (0x0004a639) main_video_pane_g

0x3272,	// (0x0003e68b) main_video_pane_t1_ParamLimits

0x3272,	// (0x0003e68b) main_video_pane_t1

0xbf8b,	// (0x000473a4) cams_zoom_pane_g1

0xbf94,	// (0x000473ad) cams_zoom_pane_g2

0xbf9d,	// (0x000473b6) cams_zoom_pane_g3

0xbfa6,	// (0x000473bf) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0004a648) cams_zoom_pane_g

0x32bc,	// (0x0003e6d5) grid_cams_pane

0x32ca,	// (0x0003e6e3) linegrid_cams_pane

0x32d8,	// (0x0003e6f1) cell_cams_pane_ParamLimits

0x32d8,	// (0x0003e6f1) cell_cams_pane

0xbfaf,	// (0x000473c8) cams_burst_image_pane

0xbfb7,	// (0x000473d0) cell_cams_pane_g1

0xb751,	// (0x00046b6a) grid_highlight_pane_cp03

0xbded,	// (0x00047206) mp_bg_pane_g1

0xb751,	// (0x00046b6a) bg_list_pane_cp03

0xdce8,	// (0x00049101) bg_mp_pane

0xdcf0,	// (0x00049109) grid_mp_pane

0xdcf8,	// (0x00049111) media_player_g1

0xdd00,	// (0x00049119) media_player_t1

0xdd0e,	// (0x00049127) media_player_t2

0xdd1c,	// (0x00049135) media_player_t3

0xdd2a,	// (0x00049143) media_player_t4

0xdd38,	// (0x00049151) media_player_t5

0xdd46,	// (0x0004915f) media_player_t6

0xdd54,	// (0x0004916d) media_player_t7

0x0006,

0xf5cb,	// (0x0004a9e4) media_player_t

0xdd62,	// (0x0004917b) wait_bar_pane_cp02

0xf5b0,	// (0x0004a9c9) main_usb_pane_t

0x537e,	// (0x00040797) cell_mp_pane

0xbded,	// (0x00047206) cell_mp_pane_g1

0xb751,	// (0x00046b6a) grid_highlight_pane_cp06

0xbfbf,	// (0x000473d8) grid_skin_colour_pane

0xbfc7,	// (0x000473e0) list_highlight_pane_cp03

0x32eb,	// (0x0003e704) skin_g1

0xbfcf,	// (0x000473e8) skin_t1

0xbfde,	// (0x000473f7) skin_t2

0x0001,

0xf264,	// (0x0004a67d) skin_t

0x32f5,	// (0x0003e70e) cell_skin_colour_pane_ParamLimits

0x32f5,	// (0x0003e70e) cell_skin_colour_pane

0xbfec,	// (0x00047405) cell_skin_colour_pane_g1

0x3379,	// (0x0003e792) call_video_g1_ParamLimits

0x3379,	// (0x0003e792) call_video_g1

0x3389,	// (0x0003e7a2) call_video_g2_ParamLimits

0x3389,	// (0x0003e7a2) call_video_g2

0x0001,

0xf269,	// (0x0004a682) call_video_g_ParamLimits

0xf269,	// (0x0004a682) call_video_g

0x33e3,	// (0x0003e7fc) call_video_uplink_pane_cp1_ParamLimits

0x33e3,	// (0x0003e7fc) call_video_uplink_pane_cp1

0xbffe,	// (0x00047417) call_video_uplink_pane_cp2

0x34af,	// (0x0003e8c8) video_down_crop_pane_ParamLimits

0x34af,	// (0x0003e8c8) video_down_crop_pane

0x35ad,	// (0x0003e9c6) video_down_pane_ParamLimits

0x35ad,	// (0x0003e9c6) video_down_pane

0xc006,	// (0x0004741f) video_down_subqcif_pane_ParamLimits

0xc006,	// (0x0004741f) video_down_subqcif_pane

0xc01e,	// (0x00047437) video_down_subqcif_pane_cp_ParamLimits

0xc01e,	// (0x00047437) video_down_subqcif_pane_cp

0xc044,	// (0x0004745d) im_reading_pane_ParamLimits

0xc044,	// (0x0004745d) im_reading_pane

0x36cd,	// (0x0003eae6) im_writing_pane_ParamLimits

0x36cd,	// (0x0003eae6) im_writing_pane

0x36eb,	// (0x0003eb04) im_reading_pane_t1

0xc05e,	// (0x00047477) list_im_pane

0xc06f,	// (0x00047488) scroll_pane_cp07

0x373f,	// (0x0003eb58) im_writing_pane_t1_ParamLimits

0x373f,	// (0x0003eb58) im_writing_pane_t1

0xc088,	// (0x000474a1) im_writing_pane_t2_ParamLimits

0xc088,	// (0x000474a1) im_writing_pane_t2

0x0001,

0xf273,	// (0x0004a68c) im_writing_pane_t_ParamLimits

0xf273,	// (0x0004a68c) im_writing_pane_t

0xb751,	// (0x00046b6a) input_focus_pane_cp04

0xb751,	// (0x00046b6a) input_focus_pane_cp05

0x3754,	// (0x0003eb6d) list_im_single_pane_ParamLimits

0x3754,	// (0x0003eb6d) list_im_single_pane

0x3778,	// (0x0003eb91) list_single_im_pane_t1

0x5342,	// (0x0004075b) blid_accuracy_pane

0x534a,	// (0x00040763) blid_compass_pane

0x5354,	// (0x0004076d) main_location_t1

0x5362,	// (0x0004077b) main_location_t2

0x5370,	// (0x00040789) main_location_t3

0x0002,

0xf5da,	// (0x0004a9f3) main_location_t

0xb751,	// (0x00046b6a) aid_levels_location

0xbded,	// (0x00047206) blid_accuracy_pane_g1

0xbded,	// (0x00047206) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0004a6ee) blid_accuracy_pane_g

0xc0d0,	// (0x000474e9) wml_content_pane

0xc10e,	// (0x00047527) wml_button_pane_ParamLimits

0xc10e,	// (0x00047527) wml_button_pane

0x3787,	// (0x0003eba0) wml_list_single_large_pane_ParamLimits

0x3787,	// (0x0003eba0) wml_list_single_large_pane

0x37b1,	// (0x0003ebca) wml_list_single_medium_pane_ParamLimits

0x37b1,	// (0x0003ebca) wml_list_single_medium_pane

0x37e2,	// (0x0003ebfb) wml_list_single_small_pane_ParamLimits

0x37e2,	// (0x0003ebfb) wml_list_single_small_pane

0xc122,	// (0x0004753b) wml_selection_box_pane_ParamLimits

0xc122,	// (0x0004753b) wml_selection_box_pane

0xc135,	// (0x0004754e) wml_list_single_pane_t1

0xc144,	// (0x0004755d) wml_list_single_medium_pane_t1

0xc153,	// (0x0004756c) wml_list_single_large_pane_t1

0xc162,	// (0x0004757b) input_focus_pane_cp02_ParamLimits

0xc162,	// (0x0004757b) input_focus_pane_cp02

0xc175,	// (0x0004758e) wml_selection_box_pane_g1

0xc17e,	// (0x00047597) wml_selection_box_pane_t1_ParamLimits

0xc17e,	// (0x00047597) wml_selection_box_pane_t1

0xbcd3,	// (0x000470ec) bg_wml_button_pane_ParamLimits

0xbcd3,	// (0x000470ec) bg_wml_button_pane

0xc196,	// (0x000475af) wml_button_pane_g1

0xc19e,	// (0x000475b7) wml_button_pane_t1

0xc196,	// (0x000475af) wml_button_bg_pane_g1

0xc1ae,	// (0x000475c7) wml_button_bg_pane_g2

0xc1b6,	// (0x000475cf) wml_button_bg_pane_g3

0xc1be,	// (0x000475d7) wml_button_bg_pane_g4

0xc1c6,	// (0x000475df) wml_button_bg_pane_g5

0xc1ce,	// (0x000475e7) wml_button_bg_pane_g6

0xc1d6,	// (0x000475ef) wml_button_bg_pane_g7

0xc1de,	// (0x000475f7) wml_button_bg_pane_g8

0xc1e6,	// (0x000475ff) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0004a691) wml_button_bg_pane_g

0x381c,	// (0x0003ec35) bg_list_pane_cp02

0xc1ee,	// (0x00047607) mce_header_pane_ParamLimits

0xc1ee,	// (0x00047607) mce_header_pane

0xc204,	// (0x0004761d) mce_icon_pane

0xc204,	// (0x0004761d) mce_image_pane

0xc20d,	// (0x00047626) mce_text_pane_ParamLimits

0xc20d,	// (0x00047626) mce_text_pane

0x3826,	// (0x0003ec3f) scroll_pane_cp03

0xc106,	// (0x0004751f) scroll_pane_cp04

0xc220,	// (0x00047639) scroll_pane_cp05_ParamLimits

0xc220,	// (0x00047639) scroll_pane_cp05

0x3830,	// (0x0003ec49) mce_header_field_pane_ParamLimits

0x3830,	// (0x0003ec49) mce_header_field_pane

0x3850,	// (0x0003ec69) mce_header_field_pane_2_ParamLimits

0x3850,	// (0x0003ec69) mce_header_field_pane_2

0x3866,	// (0x0003ec7f) mce_header_field_pane_3

0x386e,	// (0x0003ec87) list_single_mce_message_pane_ParamLimits

0x386e,	// (0x0003ec87) list_single_mce_message_pane

0x3899,	// (0x0003ecb2) list_single_mce_smart_pane_ParamLimits

0x3899,	// (0x0003ecb2) list_single_mce_smart_pane

0xc22c,	// (0x00047645) input_focus_pane_cp03

0xc235,	// (0x0004764e) list_header_data_pane

0x38cf,	// (0x0003ece8) mce_header_field_pane_t1

0x38dd,	// (0x0003ecf6) list_single_mce_header_pane_ParamLimits

0x38dd,	// (0x0003ecf6) list_single_mce_header_pane

0xc23d,	// (0x00047656) list_single_mce_header_pane_t1

0xc24c,	// (0x00047665) list_single_mce_message_pane_g1

0xc254,	// (0x0004766d) list_single_mce_message_pane_t1

0x392f,	// (0x0003ed48) bg_cale_heading_pane_cp01_ParamLimits

0x392f,	// (0x0003ed48) bg_cale_heading_pane_cp01

0xc262,	// (0x0004767b) bg_cale_pane_cp02_ParamLimits

0xc262,	// (0x0004767b) bg_cale_pane_cp02

0x397d,	// (0x0003ed96) cale_month_corner_pane

0x399c,	// (0x0003edb5) cale_month_day_heading_pane_ParamLimits

0x399c,	// (0x0003edb5) cale_month_day_heading_pane

0x3a02,	// (0x0003ee1b) cale_month_pane_g1_ParamLimits

0x3a02,	// (0x0003ee1b) cale_month_pane_g1

0x3a45,	// (0x0003ee5e) cale_month_pane_g2_ParamLimits

0x3a45,	// (0x0003ee5e) cale_month_pane_g2

0x3a7d,	// (0x0003ee96) cale_month_pane_g3_ParamLimits

0x3a7d,	// (0x0003ee96) cale_month_pane_g3

0x3ac9,	// (0x0003eee2) cale_month_pane_g4_ParamLimits

0x3ac9,	// (0x0003eee2) cale_month_pane_g4

0x3b15,	// (0x0003ef2e) cale_month_pane_g5_ParamLimits

0x3b15,	// (0x0003ef2e) cale_month_pane_g5

0x3b61,	// (0x0003ef7a) cale_month_pane_g6_ParamLimits

0x3b61,	// (0x0003ef7a) cale_month_pane_g6

0x3bad,	// (0x0003efc6) cale_month_pane_g7_ParamLimits

0x3bad,	// (0x0003efc6) cale_month_pane_g7

0x3c11,	// (0x0003f02a) cale_month_pane_g8_ParamLimits

0x3c11,	// (0x0003f02a) cale_month_pane_g8

0x3c75,	// (0x0003f08e) cale_month_pane_g9_ParamLimits

0x3c75,	// (0x0003f08e) cale_month_pane_g9

0x3cd3,	// (0x0003f0ec) cale_month_pane_g10_ParamLimits

0x3cd3,	// (0x0003f0ec) cale_month_pane_g10

0x3d2f,	// (0x0003f148) cale_month_pane_g11_ParamLimits

0x3d2f,	// (0x0003f148) cale_month_pane_g11

0x3d83,	// (0x0003f19c) cale_month_pane_g12_ParamLimits

0x3d83,	// (0x0003f19c) cale_month_pane_g12

0x3dd9,	// (0x0003f1f2) cale_month_pane_g13_ParamLimits

0x3dd9,	// (0x0003f1f2) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0004a6a4) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0004a6a4) cale_month_pane_g

0x3e2f,	// (0x0003f248) cale_month_week_pane

0x3e53,	// (0x0003f26c) grid_cale_month_pane_ParamLimits

0x3e53,	// (0x0003f26c) grid_cale_month_pane

0x3eac,	// (0x0003f2c5) cale_month_day_heading_pane_t1

0x3f32,	// (0x0003f34b) cale_month_day_heading_pane_t2

0x3fab,	// (0x0003f3c4) cale_month_day_heading_pane_t3

0x4024,	// (0x0003f43d) cale_month_day_heading_pane_t4

0x409d,	// (0x0003f4b6) cale_month_day_heading_pane_t5

0x4116,	// (0x0003f52f) cale_month_day_heading_pane_t6

0x418f,	// (0x0003f5a8) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0004a6bf) cale_month_day_heading_pane_t

0xbf02,	// (0x0004731b) bg_cale_side_pane_cp01

0x4220,	// (0x0003f639) cale_month_week_pane_t1

0x4239,	// (0x0003f652) cale_month_week_pane_t2

0x4252,	// (0x0003f66b) cale_month_week_pane_t3

0x426b,	// (0x0003f684) cale_month_week_pane_t4

0x4284,	// (0x0003f69d) cale_month_week_pane_t5

0x42a5,	// (0x0003f6be) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0004a6ce) cale_month_week_pane_t

0x42c6,	// (0x0003f6df) cell_cale_month_pane_ParamLimits

0x42c6,	// (0x0003f6df) cell_cale_month_pane

0x43e8,	// (0x0003f801) cell_cale_month_pane_g1

0x43f4,	// (0x0003f80d) cell_cale_month_pane_t1_ParamLimits

0x43f4,	// (0x0003f80d) cell_cale_month_pane_t1

0xbf10,	// (0x00047329) grid_highlight_pane_cp08

0xbded,	// (0x00047206) main_smil_g1

0x4420,	// (0x0003f839) smil_status_pane

0xc2a1,	// (0x000476ba) smil_text_pane

0xdc08,	// (0x00049021) bg_popup_call3_rect_pane_g8

0xdc10,	// (0x00049029) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0004a987) bg_popup_call3_rect_pane_g

0xde57,	// (0x00049270) smil_status_volume_pane_g1

0xc2ab,	// (0x000476c4) smil_status_pane_t1

0x576c,	// (0x00040b85) volume_smil_pane

0xc2c2,	// (0x000476db) list_smil_text_pane

0x4433,	// (0x0003f84c) scroll_pane_cp011

0x443e,	// (0x0003f857) smil_text_list_pane_t1_ParamLimits

0x443e,	// (0x0003f857) smil_text_list_pane_t1

0x44b6,	// (0x0003f8cf) aid_volume_smil_ParamLimits

0x44b6,	// (0x0003f8cf) aid_volume_smil

0xbded,	// (0x00047206) smil_volume_pane_g1

0xbded,	// (0x00047206) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0004a6ee) smil_volume_pane_g

0x2bc7,	// (0x0003dfe0) listscroll_cale_day_pane

0xc2cc,	// (0x000476e5) bg_cale_pane

0xc2e4,	// (0x000476fd) list_cale_pane

0xc307,	// (0x00047720) scroll_pane_cp09

0xc318,	// (0x00047731) cale_bg_pane_g1

0xc320,	// (0x00047739) cale_bg_pane_g2

0xc328,	// (0x00047741) cale_bg_pane_g3

0xc330,	// (0x00047749) cale_bg_pane_g4

0xc338,	// (0x00047751) cale_bg_pane_g5

0xc340,	// (0x00047759) cale_bg_pane_g6

0xc348,	// (0x00047761) cale_bg_pane_g7

0xc350,	// (0x00047769) cale_bg_pane_g8

0xc358,	// (0x00047771) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0004a6f3) cale_bg_pane_g

0x44e0,	// (0x0003f8f9) list_cale_time_pane_ParamLimits

0x44e0,	// (0x0003f8f9) list_cale_time_pane

0xc360,	// (0x00047779) list_cale_time_pane_g1_ParamLimits

0xc360,	// (0x00047779) list_cale_time_pane_g1

0xc36c,	// (0x00047785) list_cale_time_pane_g2_ParamLimits

0xc36c,	// (0x00047785) list_cale_time_pane_g2

0x4502,	// (0x0003f91b) list_cale_time_pane_g3_ParamLimits

0x4502,	// (0x0003f91b) list_cale_time_pane_g3

0x4510,	// (0x0003f929) list_cale_time_pane_g4_ParamLimits

0x4510,	// (0x0003f929) list_cale_time_pane_g4

0x451e,	// (0x0003f937) list_cale_time_pane_g5_ParamLimits

0x451e,	// (0x0003f937) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0004a706) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0004a706) list_cale_time_pane_g

0xc386,	// (0x0004779f) list_cale_time_pane_t1_ParamLimits

0xc386,	// (0x0004779f) list_cale_time_pane_t1

0xc3ae,	// (0x000477c7) list_cale_time_pane_t2_ParamLimits

0xc3ae,	// (0x000477c7) list_cale_time_pane_t2

0x47e5,	// (0x0003fbfe) aid_blid_cardinal_pane

0x4827,	// (0x0003fc40) compass_pane_t4

0xc3d6,	// (0x000477ef) list_cale_time_pane_t4_ParamLimits

0xc3d6,	// (0x000477ef) list_cale_time_pane_t4

0x4835,	// (0x0003fc4e) compass_pane_t5

0x4845,	// (0x0003fc5e) compass_pane_t6

0x4853,	// (0x0003fc6c) compass_pane_t7

0xc879,	// (0x00047c92) navi_pane_cc_t1

0xca7e,	// (0x00047e97) aid_phob_thumbnail_center_pane

0x4e48,	// (0x00040261) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0004a713) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0004a713) list_cale_time_pane_t

0xb3a8,	// (0x000467c1) bg_popup_window_pane_cp02_ParamLimits

0xb3a8,	// (0x000467c1) bg_popup_window_pane_cp02

0xc3fe,	// (0x00047817) heading_pane_cp01_ParamLimits

0xc3fe,	// (0x00047817) heading_pane_cp01

0xc40a,	// (0x00047823) loc_req_pane_ParamLimits

0xc40a,	// (0x00047823) loc_req_pane

0xc41a,	// (0x00047833) loc_type_pane_ParamLimits

0xc41a,	// (0x00047833) loc_type_pane

0xc42c,	// (0x00047845) loc_type_pane_t1_ParamLimits

0xc42c,	// (0x00047845) loc_type_pane_t1

0xc43e,	// (0x00047857) loc_type_pane_t2_ParamLimits

0xc43e,	// (0x00047857) loc_type_pane_t2

0xc450,	// (0x00047869) loc_type_pane_t3_ParamLimits

0xc450,	// (0x00047869) loc_type_pane_t3

0x0002,

0xf301,	// (0x0004a71a) loc_type_pane_t_ParamLimits

0xf301,	// (0x0004a71a) loc_type_pane_t

0xc462,	// (0x0004787b) list_loc_req_pane

0xc46c,	// (0x00047885) scroll_pane_cp012

0x452c,	// (0x0003f945) list_single_loc_request_popup_menu_pane_ParamLimits

0x452c,	// (0x0003f945) list_single_loc_request_popup_menu_pane

0xc477,	// (0x00047890) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc477,	// (0x00047890) list_single_loc_request_popup_menu_pane_g1

0xc483,	// (0x0004789c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc483,	// (0x0004789c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0004a721) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0004a721) list_single_loc_request_popup_menu_pane_g

0xc48f,	// (0x000478a8) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc48f,	// (0x000478a8) list_single_loc_request_popup_menu_pane_t1

0x453e,	// (0x0003f957) bg_popup_window_pane_cp03_ParamLimits

0x453e,	// (0x0003f957) bg_popup_window_pane_cp03

0x454c,	// (0x0003f965) heading_loc_req_pane_ParamLimits

0x454c,	// (0x0003f965) heading_loc_req_pane

0x4558,	// (0x0003f971) popup_dyc_status_message_window_g1_ParamLimits

0x4558,	// (0x0003f971) popup_dyc_status_message_window_g1

0x4564,	// (0x0003f97d) popup_dyc_status_message_window_t1_ParamLimits

0x4564,	// (0x0003f97d) popup_dyc_status_message_window_t1

0x4576,	// (0x0003f98f) popup_dyc_status_message_window_t2_ParamLimits

0x4576,	// (0x0003f98f) popup_dyc_status_message_window_t2

0x4588,	// (0x0003f9a1) popup_dyc_status_message_window_t3_ParamLimits

0x4588,	// (0x0003f9a1) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0004a726) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0004a726) popup_dyc_status_message_window_t

0xb751,	// (0x00046b6a) bg_heading_pane_cp01

0xc4a5,	// (0x000478be) heading_loc_req_pane_g1

0xc4ad,	// (0x000478c6) heading_loc_req_pane_g2

0xc4b5,	// (0x000478ce) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0004a72d) heading_loc_req_pane_g

0xc4bd,	// (0x000478d6) heading_loc_req_pane_t1

0xc4cc,	// (0x000478e5) bg_popup_sub_pane_cp01_ParamLimits

0xc4cc,	// (0x000478e5) bg_popup_sub_pane_cp01

0xc4da,	// (0x000478f3) popup_cale_events_window_g1_ParamLimits

0xc4da,	// (0x000478f3) popup_cale_events_window_g1

0xc4fa,	// (0x00047913) popup_cale_events_window_g2_ParamLimits

0xc4fa,	// (0x00047913) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0004a761) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0004a761) popup_cale_events_window_g

0xc51a,	// (0x00047933) popup_cale_events_window_t1_ParamLimits

0xc51a,	// (0x00047933) popup_cale_events_window_t1

0xc52c,	// (0x00047945) popup_cale_events_window_t2_ParamLimits

0xc52c,	// (0x00047945) popup_cale_events_window_t2

0xc56a,	// (0x00047983) popup_cale_events_window_t3_ParamLimits

0xc56a,	// (0x00047983) popup_cale_events_window_t3

0xc5a4,	// (0x000479bd) popup_cale_events_window_t4_ParamLimits

0xc5a4,	// (0x000479bd) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0004a766) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0004a766) popup_cale_events_window_t

0x45b2,	// (0x0003f9cb) call_type_pane

0xc9da,	// (0x00047df3) popup_call_status_window_g1

0x45be,	// (0x0003f9d7) popup_call_status_window_g2

0x45ca,	// (0x0003f9e3) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0004a76f) popup_call_status_window_g

0xc5da,	// (0x000479f3) call_type_pane_g1

0xc5e3,	// (0x000479fc) call_type_pane_g2

0x0001,

0xf35d,	// (0x0004a776) call_type_pane_g

0xb751,	// (0x00046b6a) bg_popup_sub_pane_cp02

0xc5ec,	// (0x00047a05) listscroll_popup_wml_pane

0xc5f4,	// (0x00047a0d) list_wml_pane

0xc5fe,	// (0x00047a17) scroll_pane_cp013

0xc609,	// (0x00047a22) list_single_graphic_popup_wml_pane_ParamLimits

0xc609,	// (0x00047a22) list_single_graphic_popup_wml_pane

0xbded,	// (0x00047206) list_single_graphic_popup_wml_pane_g1

0xc61d,	// (0x00047a36) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0004a77b) list_single_graphic_popup_wml_pane_g

0xc625,	// (0x00047a3e) list_single_graphic_popup_wml_pane_t1

0xc63b,	// (0x00047a54) aid_call_pane

0xbccb,	// (0x000470e4) popup_clock_analogue_window_g1

0xbccb,	// (0x000470e4) popup_clock_analogue_window_g2

0x45d6,	// (0x0003f9ef) popup_clock_analogue_window_g3

0x45d6,	// (0x0003f9ef) popup_clock_analogue_window_g4

0xbded,	// (0x00047206) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0004a780) popup_clock_analogue_window_g

0x45de,	// (0x0003f9f7) popup_clock_analogue_window_t1

0x45ec,	// (0x0003fa05) clock_digital_number_pane_ParamLimits

0x45ec,	// (0x0003fa05) clock_digital_number_pane

0x45f8,	// (0x0003fa11) clock_digital_number_pane_cp02_ParamLimits

0x45f8,	// (0x0003fa11) clock_digital_number_pane_cp02

0x4604,	// (0x0003fa1d) clock_digital_number_pane_cp03_ParamLimits

0x4604,	// (0x0003fa1d) clock_digital_number_pane_cp03

0x4610,	// (0x0003fa29) clock_digital_number_pane_cp04_ParamLimits

0x4610,	// (0x0003fa29) clock_digital_number_pane_cp04

0x4620,	// (0x0003fa39) clock_digital_separator_pane_ParamLimits

0x4620,	// (0x0003fa39) clock_digital_separator_pane

0x462c,	// (0x0003fa45) popup_clock_digital_window_t1

0xbded,	// (0x00047206) clock_digital_number_pane_g1

0xbded,	// (0x00047206) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0004a6ee) clock_digital_number_pane_g

0xbded,	// (0x00047206) clock_digital_separator_pane_g1

0xbded,	// (0x00047206) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0004a6ee) clock_digital_separator_pane_g

0xb751,	// (0x00046b6a) bg_popup_window_pane_cp04

0xc643,	// (0x00047a5c) heading_pane_cp03

0xc64b,	// (0x00047a64) listscroll_popup_gms_pane

0xc653,	// (0x00047a6c) grid_large_graphic_popup_pane

0xc65d,	// (0x00047a76) listscroll_popup_gms_pane_g1

0xc665,	// (0x00047a7e) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0004a78b) listscroll_popup_gms_pane_g

0xc106,	// (0x0004751f) scroll_pane_cp014

0x4649,	// (0x0003fa62) cell_large_graphic_popup_pane_ParamLimits

0x4649,	// (0x0003fa62) cell_large_graphic_popup_pane

0x4661,	// (0x0003fa7a) cell_large_graphic_popup_pane_g1_ParamLimits

0x4661,	// (0x0003fa7a) cell_large_graphic_popup_pane_g1

0xc66d,	// (0x00047a86) cell_large_graphic_popup_pane_g2_ParamLimits

0xc66d,	// (0x00047a86) cell_large_graphic_popup_pane_g2

0xc679,	// (0x00047a92) cell_large_graphic_popup_pane_g3_ParamLimits

0xc679,	// (0x00047a92) cell_large_graphic_popup_pane_g3

0xc686,	// (0x00047a9f) cell_large_graphic_popup_pane_g4_ParamLimits

0xc686,	// (0x00047a9f) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0004a790) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0004a790) cell_large_graphic_popup_pane_g

0xc696,	// (0x00047aaf) grid_highlight_pane_cp010

0xbded,	// (0x00047206) bg_popup_call_pane_g1

0xc6a0,	// (0x00047ab9) list_single_graphic_popup_conf_pane_ParamLimits

0xc6a0,	// (0x00047ab9) list_single_graphic_popup_conf_pane

0xc6b3,	// (0x00047acc) list_highlight_pane_cp01

0xc6bc,	// (0x00047ad5) list_single_graphic_popup_conf_pane_g1

0xc6c4,	// (0x00047add) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0004a799) list_single_graphic_popup_conf_pane_g

0xc6cc,	// (0x00047ae5) list_single_graphic_popup_conf_pane_t1

0xc6da,	// (0x00047af3) linegrid_cams_pane_g1

0x466d,	// (0x0003fa86) linegrid_cams_pane_g2

0xbf43,	// (0x0004735c) linegrid_cams_pane_g3

0xc6e3,	// (0x00047afc) linegrid_cams_pane_g4

0x4676,	// (0x0003fa8f) linegrid_cams_pane_g5

0x467f,	// (0x0003fa98) linegrid_cams_pane_g6

0xbf4c,	// (0x00047365) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0004a79e) linegrid_cams_pane_g

0xc6ec,	// (0x00047b05) popup_clock_analogue_window

0xc6ec,	// (0x00047b05) popup_clock_digital_window

0xb751,	// (0x00046b6a) popup_phob_thumbnail_window

0xbded,	// (0x00047206) call_video_uplink_pane_g1

0xc6f5,	// (0x00047b0e) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0004a7ad) call_video_uplink_pane_g

0xc6fd,	// (0x00047b16) video_uplink_pane

0xc705,	// (0x00047b1e) mce_image_pane_g1

0x4688,	// (0x0003faa1) mce_image_pane_g2

0x4692,	// (0x0003faab) mce_image_pane_g3

0x469a,	// (0x0003fab3) mce_image_pane_g4

0x46a2,	// (0x0003fabb) mce_image_pane_g5

0x0004,

0xf399,	// (0x0004a7b2) mce_image_pane_g

0xc70f,	// (0x00047b28) control_top_pane_stacon_cp01_ParamLimits

0xc70f,	// (0x00047b28) control_top_pane_stacon_cp01

0xc723,	// (0x00047b3c) uni_indicator_pane_stacon_cp01_ParamLimits

0xc723,	// (0x00047b3c) uni_indicator_pane_stacon_cp01

0xc734,	// (0x00047b4d) bg_popup_sub_pane_cp03

0xc73e,	// (0x00047b57) chi_dic_find_pane

0x46aa,	// (0x0003fac3) listscroll_chi_dic_pane

0xc746,	// (0x00047b5f) main_pane_chidic_g1

0xc74e,	// (0x00047b67) chi_dic_find_pane_t1

0xc75c,	// (0x00047b75) find_chidic_pane

0xc765,	// (0x00047b7e) chi_dic_list_pane_ParamLimits

0xc765,	// (0x00047b7e) chi_dic_list_pane

0xc776,	// (0x00047b8f) scroll_pane_cp020

0xc77e,	// (0x00047b97) find_chidic_pane_t1

0xb751,	// (0x00046b6a) input_focus_pane_cp06

0x46be,	// (0x0003fad7) list_chi_dic_pane_ParamLimits

0x46be,	// (0x0003fad7) list_chi_dic_pane

0x46d8,	// (0x0003faf1) list_chi_dic_pane_t1_ParamLimits

0x46d8,	// (0x0003faf1) list_chi_dic_pane_t1

0xb751,	// (0x00046b6a) list_highlight_pane_cp020

0xc78d,	// (0x00047ba6) bg_cale_heading_pane_g1

0x46eb,	// (0x0003fb04) bg_cale_heading_pane_g2

0x46f3,	// (0x0003fb0c) bg_cale_heading_pane_g3

0x46fb,	// (0x0003fb14) bg_cale_heading_pane_g4

0x4705,	// (0x0003fb1e) bg_cale_heading_pane_g5

0x470f,	// (0x0003fb28) bg_cale_heading_pane_g6

0x4717,	// (0x0003fb30) bg_cale_heading_pane_g7

0x471f,	// (0x0003fb38) bg_cale_heading_pane_g8

0x4729,	// (0x0003fb42) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0004a7bd) bg_cale_heading_pane_g

0xc78d,	// (0x00047ba6) bg_cale_side_pane_g1

0x4733,	// (0x0003fb4c) bg_cale_side_pane_g2

0x473d,	// (0x0003fb56) bg_cale_side_pane_g3

0x4747,	// (0x0003fb60) bg_cale_side_pane_g4

0x4751,	// (0x0003fb6a) bg_cale_side_pane_g5

0x475b,	// (0x0003fb74) bg_cale_side_pane_g6

0x4765,	// (0x0003fb7e) bg_cale_side_pane_g7

0x476f,	// (0x0003fb88) bg_cale_side_pane_g8

0x4777,	// (0x0003fb90) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0004a7d0) bg_cale_side_pane_g

0x477f,	// (0x0003fb98) popup_call_status_window_ParamLimits

0x477f,	// (0x0003fb98) popup_call_status_window

0xc795,	// (0x00047bae) stacon_top_pane

0xc79d,	// (0x00047bb6) status_pane_ParamLimits

0xc79d,	// (0x00047bb6) status_pane

0xc7b2,	// (0x00047bcb) status_small_pane

0xc7ba,	// (0x00047bd3) control_pane

0xb751,	// (0x00046b6a) stacon_bottom_pane

0xc7c2,	// (0x00047bdb) list_single_mce_smart_pane_t1_ParamLimits

0xc7c2,	// (0x00047bdb) list_single_mce_smart_pane_t1

0xc7d5,	// (0x00047bee) list_single_mce_smart_pane_t2_ParamLimits

0xc7d5,	// (0x00047bee) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0004a7e3) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0004a7e3) list_single_mce_smart_pane_t

0x478b,	// (0x0003fba4) compass_pane

0x4797,	// (0x0003fbb0) main_location2_pane_t1

0x47ab,	// (0x0003fbc4) main_location2_pane_t2

0x47bf,	// (0x0003fbd8) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0004a7e8) main_location2_pane_t

0xc7f4,	// (0x00047c0d) compass_pane_g1_ParamLimits

0xc7f4,	// (0x00047c0d) compass_pane_g1

0x4809,	// (0x0003fc22) compass_pane_t1

0x4818,	// (0x0003fc31) compass_pane_t2

0x0005,

0xf3d8,	// (0x0004a7f1) compass_pane_t

0x4863,	// (0x0003fc7c) text_secondary_cp61

0xc870,	// (0x00047c89) navi_pane_cams_g5

0xc906,	// (0x00047d1f) navi_pane_im_t1

0xc914,	// (0x00047d2d) navi_pane_mp_g1_ParamLimits

0xc914,	// (0x00047d2d) navi_pane_mp_g1

0xc928,	// (0x00047d41) navi_pane_mp_g2_ParamLimits

0xc928,	// (0x00047d41) navi_pane_mp_g2

0xc934,	// (0x00047d4d) navi_pane_mp_g3_ParamLimits

0xc934,	// (0x00047d4d) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0004a805) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0004a805) navi_pane_mp_g

0xc940,	// (0x00047d59) navi_pane_mp_t1

0xc94e,	// (0x00047d67) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0004a80c) navi_pane_mp_t

0xc9b9,	// (0x00047dd2) navi_pane_vt_g1

0xc940,	// (0x00047d59) navi_pane_vt_t1

0xc9c1,	// (0x00047dda) navi_slider_pane

0xbf5d,	// (0x00047376) zooming_pane

0xc9d1,	// (0x00047dea) navi_slider_pane_g1

0x489e,	// (0x0003fcb7) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0004a813) navi_slider_pane_g

0xca03,	// (0x00047e1c) aid_levels_zoom

0xca0b,	// (0x00047e24) zooming_pane_g1

0xca13,	// (0x00047e2c) zooming_pane_g2

0xca13,	// (0x00047e2c) zooming_pane_g3

0x0002,

0xf409,	// (0x0004a822) zooming_pane_g

0xca1b,	// (0x00047e34) level_10_zoom

0xca24,	// (0x00047e3d) level_11_zoom

0xca2d,	// (0x00047e46) level_1_zoom

0xca36,	// (0x00047e4f) level_2_zoom

0xca3f,	// (0x00047e58) level_3_zoom

0xca48,	// (0x00047e61) level_4_zoom

0xca51,	// (0x00047e6a) level_5_zoom

0xca5a,	// (0x00047e73) level_6_zoom

0xca63,	// (0x00047e7c) level_7_zoom

0xca6c,	// (0x00047e85) level_8_zoom

0xca75,	// (0x00047e8e) level_9_zoom

0xca86,	// (0x00047e9f) popup_phob_thumbnail_window_g1

0xca8e,	// (0x00047ea7) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0004a829) popup_phob_thumbnail_window_g

0xdd6a,	// (0x00049183) level_1_location

0xdd72,	// (0x0004918b) level_2_location

0xdd7a,	// (0x00049193) level_3_location

0xdd82,	// (0x0004919b) level_4_location

0xbf5d,	// (0x00047376) level_5_location

0x48b0,	// (0x0003fcc9) mce_icon_pane_g1

0x48b8,	// (0x0003fcd1) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0004a82e) mce_icon_pane_g

0x48c0,	// (0x0003fcd9) main_mup_pane_g1_ParamLimits

0x48c0,	// (0x0003fcd9) main_mup_pane_g1

0x48d8,	// (0x0003fcf1) main_mup_pane_g2_ParamLimits

0x48d8,	// (0x0003fcf1) main_mup_pane_g2

0x48f4,	// (0x0003fd0d) main_mup_pane_g3_ParamLimits

0x48f4,	// (0x0003fd0d) main_mup_pane_g3

0x4910,	// (0x0003fd29) main_mup_pane_g4_ParamLimits

0x4910,	// (0x0003fd29) main_mup_pane_g4

0x492c,	// (0x0003fd45) main_mup_pane_g5_ParamLimits

0x492c,	// (0x0003fd45) main_mup_pane_g5

0x494d,	// (0x0003fd66) main_mup_pane_g6_ParamLimits

0x494d,	// (0x0003fd66) main_mup_pane_g6

0x4969,	// (0x0003fd82) main_mup_pane_g7_ParamLimits

0x4969,	// (0x0003fd82) main_mup_pane_g7

0x4985,	// (0x0003fd9e) main_mup_pane_g8_ParamLimits

0x4985,	// (0x0003fd9e) main_mup_pane_g8

0x49a5,	// (0x0003fdbe) main_mup_pane_g9_ParamLimits

0x49a5,	// (0x0003fdbe) main_mup_pane_g9

0x49c4,	// (0x0003fddd) main_mup_pane_g10_ParamLimits

0x49c4,	// (0x0003fddd) main_mup_pane_g10

0x49e3,	// (0x0003fdfc) main_mup_pane_g11_ParamLimits

0x49e3,	// (0x0003fdfc) main_mup_pane_g11

0x49fb,	// (0x0003fe14) main_mup_pane_g12_ParamLimits

0x49fb,	// (0x0003fe14) main_mup_pane_g12

0x4a09,	// (0x0003fe22) main_mup_pane_g13_ParamLimits

0x4a09,	// (0x0003fe22) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0004a833) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0004a833) main_mup_pane_g

0x4a1f,	// (0x0003fe38) main_mup_pane_t1_ParamLimits

0x4a1f,	// (0x0003fe38) main_mup_pane_t1

0x4a3c,	// (0x0003fe55) main_mup_pane_t2_ParamLimits

0x4a3c,	// (0x0003fe55) main_mup_pane_t2

0x4a56,	// (0x0003fe6f) main_mup_pane_t3_ParamLimits

0x4a56,	// (0x0003fe6f) main_mup_pane_t3

0x4a70,	// (0x0003fe89) main_mup_pane_t4_ParamLimits

0x4a70,	// (0x0003fe89) main_mup_pane_t4

0x4a82,	// (0x0003fe9b) main_mup_pane_t5_ParamLimits

0x4a82,	// (0x0003fe9b) main_mup_pane_t5

0x4a94,	// (0x0003fead) main_mup_pane_t6_ParamLimits

0x4a94,	// (0x0003fead) main_mup_pane_t6

0x0005,

0xf435,	// (0x0004a84e) main_mup_pane_t_ParamLimits

0xf435,	// (0x0004a84e) main_mup_pane_t

0x4aaa,	// (0x0003fec3) mup_progress_pane_ParamLimits

0x4aaa,	// (0x0003fec3) mup_progress_pane

0x4ab6,	// (0x0003fecf) mup_visualizer_pane_ParamLimits

0x4ab6,	// (0x0003fecf) mup_visualizer_pane

0x4af0,	// (0x0003ff09) mup_volume_pane_ParamLimits

0x4af0,	// (0x0003ff09) mup_volume_pane

0xc9da,	// (0x00047df3) mup_visualizer_pane_g1_ParamLimits

0xc9da,	// (0x00047df3) mup_visualizer_pane_g1

0xc9da,	// (0x00047df3) mup_visualizer_pane_g2_ParamLimits

0xc9da,	// (0x00047df3) mup_visualizer_pane_g2

0xc7f4,	// (0x00047c0d) mup_visualizer_pane_g3_ParamLimits

0xc7f4,	// (0x00047c0d) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0004a85b) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0004a85b) mup_visualizer_pane_g

0xbded,	// (0x00047206) mup_volume_pane_g1

0xca9e,	// (0x00047eb7) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0004a862) mup_volume_pane_g

0xbded,	// (0x00047206) mup_progress_pane_g1

0xcaa7,	// (0x00047ec0) mup_progress_pane_g2

0xcab0,	// (0x00047ec9) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0004a867) mup_progress_pane_g

0xb751,	// (0x00046b6a) bg_popup_window_pane_cp05

0xcab9,	// (0x00047ed2) heading_pane_cp02_ParamLimits

0xcab9,	// (0x00047ed2) heading_pane_cp02

0xcad3,	// (0x00047eec) list_popup_blid_pane

0xcadb,	// (0x00047ef4) list_blid_sat_info_pane_ParamLimits

0xcadb,	// (0x00047ef4) list_blid_sat_info_pane

0xcaee,	// (0x00047f07) list_blid_sat_info_pane_g1

0xcaf6,	// (0x00047f0f) list_blid_sat_info_pane_t1

0x4bfd,	// (0x00040016) mup_equalizer_pane_ParamLimits

0x4bfd,	// (0x00040016) mup_equalizer_pane

0x4c1e,	// (0x00040037) mup_equalizer_pane_cp1_ParamLimits

0x4c1e,	// (0x00040037) mup_equalizer_pane_cp1

0x4c3f,	// (0x00040058) mup_equalizer_pane_cp2_ParamLimits

0x4c3f,	// (0x00040058) mup_equalizer_pane_cp2

0x4c60,	// (0x00040079) mup_equalizer_pane_cp3_ParamLimits

0x4c60,	// (0x00040079) mup_equalizer_pane_cp3

0x4c81,	// (0x0004009a) mup_equalizer_pane_cp4_ParamLimits

0x4c81,	// (0x0004009a) mup_equalizer_pane_cp4

0x4ca2,	// (0x000400bb) mup_equalizer_pane_cp5

0x4cb8,	// (0x000400d1) mup_equalizer_pane_cp6

0x4cd0,	// (0x000400e9) mup_equalizer_pane_cp7

0xdc88,	// (0x000490a1) bg_popup_call_poc_act_pane_g9

0xdc90,	// (0x000490a9) bg_popup_call_poc_act_pane_g10

0xdc98,	// (0x000490b1) bg_popup_call_poc_act_pane_g11

0x000a,

0xbcd3,	// (0x000470ec) mup_scale_pane

0xbded,	// (0x00047206) mup_scale_pane_g1

0xcb04,	// (0x00047f1d) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0004a883) mup_scale_pane_g

0xcb28,	// (0x00047f41) msg_data_pane

0xcb30,	// (0x00047f49) scroll_pane_cp017

0x118f,	// (0x0003c5a8) bg_list_pane_cp04_ParamLimits

0x118f,	// (0x0003c5a8) bg_list_pane_cp04

0xcb38,	// (0x00047f51) msg_data_pane_g1

0x4cfa,	// (0x00040113) msg_data_pane_g2

0x4d04,	// (0x0004011d) msg_data_pane_g3

0x4d0c,	// (0x00040125) msg_data_pane_g4

0x4d14,	// (0x0004012d) msg_data_pane_g5

0x4d1c,	// (0x00040135) msg_data_pane_g6

0x4d24,	// (0x0004013d) msg_data_pane_g7

0x0006,

0xf479,	// (0x0004a892) msg_data_pane_g

0x11b3,	// (0x0003c5cc) msg_text_pane_ParamLimits

0x11b3,	// (0x0003c5cc) msg_text_pane

0x4d2c,	// (0x00040145) qrid_highlight_pane_cp011_ParamLimits

0x4d2c,	// (0x00040145) qrid_highlight_pane_cp011

0xb751,	// (0x00046b6a) msg_body_pane

0xb751,	// (0x00046b6a) msg_header_pane

0xcb49,	// (0x00047f62) input_focus_pane_cp07

0x1210,	// (0x0003c629) msg_header_pane_t1_ParamLimits

0x1210,	// (0x0003c629) msg_header_pane_t1

0x1222,	// (0x0003c63b) msg_header_pane_t2_ParamLimits

0x1222,	// (0x0003c63b) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0004a8a6) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0004a8a6) msg_header_pane_t

0xcb5e,	// (0x00047f77) msg_body_pane_g1

0x1234,	// (0x0003c64d) msg_body_pane_t1_ParamLimits

0x1234,	// (0x0003c64d) msg_body_pane_t1

0x1265,	// (0x0003c67e) msg_body_pane_t2_ParamLimits

0x1265,	// (0x0003c67e) msg_body_pane_t2

0x1277,	// (0x0003c690) msg_body_pane_t3_ParamLimits

0x1277,	// (0x0003c690) msg_body_pane_t3

0x0002,

0xf492,	// (0x0004a8ab) msg_body_pane_t_ParamLimits

0xf492,	// (0x0004a8ab) msg_body_pane_t

0x4d98,	// (0x000401b1) main_viewer_pane_g1_ParamLimits

0x4d98,	// (0x000401b1) main_viewer_pane_g1

0x4da4,	// (0x000401bd) main_viewer_pane_g2_ParamLimits

0x4da4,	// (0x000401bd) main_viewer_pane_g2

0x4db0,	// (0x000401c9) main_viewer_pane_g3_ParamLimits

0x4db0,	// (0x000401c9) main_viewer_pane_g3

0x4dc1,	// (0x000401da) main_viewer_pane_g4_ParamLimits

0x4dc1,	// (0x000401da) main_viewer_pane_g4

0x4dd2,	// (0x000401eb) main_viewer_pane_g5_ParamLimits

0x4dd2,	// (0x000401eb) main_viewer_pane_g5

0x4dd2,	// (0x000401eb) main_viewer_pane_g7_ParamLimits

0x4dd2,	// (0x000401eb) main_viewer_pane_g7

0x4de4,	// (0x000401fd) main_viewer_pane_g8_ParamLimits

0x4de4,	// (0x000401fd) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0004a8bb) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0004a8bb) main_viewer_pane_g

0xcb66,	// (0x00047f7f) viewer_content_pane_ParamLimits

0xcb66,	// (0x00047f7f) viewer_content_pane

0x4e1c,	// (0x00040235) main_postcard_pane_g1_ParamLimits

0x4e1c,	// (0x00040235) main_postcard_pane_g1

0x4e2a,	// (0x00040243) main_postcard_pane_g2_ParamLimits

0x4e2a,	// (0x00040243) main_postcard_pane_g2

0x4e38,	// (0x00040251) main_postcard_pane_g3_ParamLimits

0x4e38,	// (0x00040251) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0004a8cc) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0004a8cc) main_postcard_pane_g

0x4e48,	// (0x00040261) main_postcard_pane_g4

0xde6a,	// (0x00049283) smil_status_volume_pane_g2

0x4e74,	// (0x0004028d) postcard_pane_ParamLimits

0x4e74,	// (0x0004028d) postcard_pane

0xc9da,	// (0x00047df3) postcard_pane_g1_ParamLimits

0xc9da,	// (0x00047df3) postcard_pane_g1

0x4ea6,	// (0x000402bf) postcard_pane_g2_ParamLimits

0x4ea6,	// (0x000402bf) postcard_pane_g2

0x4eb2,	// (0x000402cb) postcard_pane_g3_ParamLimits

0x4eb2,	// (0x000402cb) postcard_pane_g3

0xcb74,	// (0x00047f8d) postcard_pane_g4_ParamLimits

0xcb74,	// (0x00047f8d) postcard_pane_g4

0x4ebe,	// (0x000402d7) postcard_pane_g5_ParamLimits

0x4ebe,	// (0x000402d7) postcard_pane_g5

0x4eca,	// (0x000402e3) postcard_pane_g6_ParamLimits

0x4eca,	// (0x000402e3) postcard_pane_g6

0xcb82,	// (0x00047f9b) postcard_pane_g7_ParamLimits

0xcb82,	// (0x00047f9b) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0004a8d9) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0004a8d9) postcard_pane_g

0x4ed6,	// (0x000402ef) main_mp2_pane_g1_ParamLimits

0x4ed6,	// (0x000402ef) main_mp2_pane_g1

0x4ee2,	// (0x000402fb) main_mp2_pane_g2_ParamLimits

0x4ee2,	// (0x000402fb) main_mp2_pane_g2

0x4eee,	// (0x00040307) main_mp2_pane_g3_ParamLimits

0x4eee,	// (0x00040307) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0004a8e8) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0004a8e8) main_mp2_pane_g

0x4efa,	// (0x00040313) main_mp2_pane_t1_ParamLimits

0x4efa,	// (0x00040313) main_mp2_pane_t1

0x4f11,	// (0x0004032a) main_mp2_pane_t2_ParamLimits

0x4f11,	// (0x0004032a) main_mp2_pane_t2

0x4f25,	// (0x0004033e) main_mp2_pane_t3_ParamLimits

0x4f25,	// (0x0004033e) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0004a8ef) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0004a8ef) main_mp2_pane_t

0xcb90,	// (0x00047fa9) pec_content_pane_ParamLimits

0xcb90,	// (0x00047fa9) pec_content_pane

0xc106,	// (0x0004751f) scroll_pane_cp015

0xcba2,	// (0x00047fbb) pec_attribute_pane_ParamLimits

0xcba2,	// (0x00047fbb) pec_attribute_pane

0x4f37,	// (0x00040350) pec_content_pane_g1_ParamLimits

0x4f37,	// (0x00040350) pec_content_pane_g1

0xcbb2,	// (0x00047fcb) pec_content_pane_t1_ParamLimits

0xcbb2,	// (0x00047fcb) pec_content_pane_t1

0xcbc4,	// (0x00047fdd) pec_content_pane_t2_ParamLimits

0xcbc4,	// (0x00047fdd) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0004a8f6) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0004a8f6) pec_content_pane_t

0x4f43,	// (0x0004035c) list_single_graphic_pane_cp01_ParamLimits

0x4f43,	// (0x0004035c) list_single_graphic_pane_cp01

0xbcd3,	// (0x000470ec) bg_popup_sub_pane_cp04

0xcbd6,	// (0x00047fef) popup_mup_playback_window_g1

0xcbe2,	// (0x00047ffb) popup_mup_playback_window_t1

0xcbf7,	// (0x00048010) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0004a8fb) popup_mup_playback_window_t

0xcc2e,	// (0x00048047) main_image_pane_g1_ParamLimits

0xcc2e,	// (0x00048047) main_image_pane_g1

0xcc71,	// (0x0004808a) scroll_pane_cp018_ParamLimits

0xcc71,	// (0x0004808a) scroll_pane_cp018

0xcc89,	// (0x000480a2) scroll_pane_cp016_ParamLimits

0xcc89,	// (0x000480a2) scroll_pane_cp016

0x4fdc,	// (0x000403f5) smil2_image_pane_ParamLimits

0x4fdc,	// (0x000403f5) smil2_image_pane

0x500c,	// (0x00040425) smil2_root_pane_ParamLimits

0x500c,	// (0x00040425) smil2_root_pane

0x5038,	// (0x00040451) smil2_text_pane_ParamLimits

0x5038,	// (0x00040451) smil2_text_pane

0xb751,	// (0x00046b6a) bg_list_pane_cp06

0xccc5,	// (0x000480de) grid_radio_pane

0xb751,	// (0x00046b6a) bg_popup_window_pane_cp06

0xcccd,	// (0x000480e6) main_fmradio_pane_t1

0xc643,	// (0x00047a5c) heading_pane_cp04

0xccdb,	// (0x000480f4) main_fmradio_pane_t2

0xdca0,	// (0x000490b9) popup_cale_lunar_info_window_g1

0xcce9,	// (0x00048102) main_fmradio_pane_t3

0xdca8,	// (0x000490c1) popup_cale_lunar_info_window_g2

0xccf7,	// (0x00048110) main_fmradio_pane_t4

0x0001,

0xcd05,	// (0x0004811e) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0004a9d6) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0004a910) main_fmradio_pane_t

0xcd13,	// (0x0004812c) wait_bar_pane_cp03

0xcd1b,	// (0x00048134) cell_fmradio_pane_ParamLimits

0xcd1b,	// (0x00048134) cell_fmradio_pane

0xcb82,	// (0x00047f9b) cell_fmradio_pane_g1_ParamLimits

0xcb82,	// (0x00047f9b) cell_fmradio_pane_g1

0xb751,	// (0x00046b6a) grid_highlight_pane_cp011

0xcd2e,	// (0x00048147) poc_content_pane_ParamLimits

0xcd2e,	// (0x00048147) poc_content_pane

0xcd40,	// (0x00048159) scroll_pane_cp019

0x5078,	// (0x00040491) popup_call_poc_act_window_ParamLimits

0x5078,	// (0x00040491) popup_call_poc_act_window

0x5085,	// (0x0004049e) popup_call_poc_inact_window_ParamLimits

0x5085,	// (0x0004049e) popup_call_poc_inact_window

0xf594,	// (0x0004a9ad) bg_popup_call_poc_act_pane_g

0xdc18,	// (0x00049031) bg_popup_call_poc_inact_pane_g1

0xdc20,	// (0x00049039) bg_popup_call_poc_inact_pane_g2

0xcd48,	// (0x00048161) popup_call_poc_act_window_g2

0xdc28,	// (0x00049041) bg_popup_call_poc_inact_pane_g3

0xdc30,	// (0x00049049) bg_popup_call_poc_inact_pane_g4

0xdc38,	// (0x00049051) bg_popup_call_poc_inact_pane_g5

0xcd50,	// (0x00048169) popup_call_poc_act_window_t1_ParamLimits

0xcd50,	// (0x00048169) popup_call_poc_act_window_t1

0xcd78,	// (0x00048191) popup_call_poc_act_window_t2_ParamLimits

0xcd78,	// (0x00048191) popup_call_poc_act_window_t2

0xcda0,	// (0x000481b9) popup_call_poc_act_window_t3_ParamLimits

0xcda0,	// (0x000481b9) popup_call_poc_act_window_t3

0xcdc8,	// (0x000481e1) popup_call_poc_act_window_t4_ParamLimits

0xcdc8,	// (0x000481e1) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0004a91b) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0004a91b) popup_call_poc_act_window_t

0xdc40,	// (0x00049059) bg_popup_call_poc_inact_pane_g6

0xdc48,	// (0x00049061) bg_popup_call_poc_inact_pane_g7

0xdc50,	// (0x00049069) bg_popup_call_poc_inact_pane_g8

0xcdda,	// (0x000481f3) popup_call_poc_inact_window_g2

0xdc58,	// (0x00049071) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0004a99a) bg_popup_call_poc_inact_pane_g

0xcde2,	// (0x000481fb) popup_call_poc_inact_window_t1_ParamLimits

0xcde2,	// (0x000481fb) popup_call_poc_inact_window_t1

0xcdf7,	// (0x00048210) popup_call_poc_inact_window_t2_ParamLimits

0xcdf7,	// (0x00048210) popup_call_poc_inact_window_t2

0xce0c,	// (0x00048225) popup_call_poc_inact_window_t3_ParamLimits

0xce0c,	// (0x00048225) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0004a924) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0004a924) popup_call_poc_inact_window_t

0xdddd,	// (0x000491f6) context_pane_ParamLimits

0x56b9,	// (0x00040ad2) signal_pane_ParamLimits

0xbf5d,	// (0x00047376) main_call2_pane

0x562c,	// (0x00040a45) popup_phob_thumbnail2_window_ParamLimits

0x562c,	// (0x00040a45) popup_phob_thumbnail2_window

0x4d46,	// (0x0004015f) aid_hotspot_pointer_arrow_pane

0x4d4e,	// (0x00040167) aid_hotspot_pointer_hand_pane

0x53a7,	// (0x000407c0) phob_pre_status_pane_g5

0x30c0,	// (0x0003e4d9) cams_zoom_pane_ParamLimits

0x30cc,	// (0x0003e4e5) image_vga_pane_ParamLimits

0x30db,	// (0x0003e4f4) main_camera_pane_g1_ParamLimits

0x30e9,	// (0x0003e502) main_camera_pane_g2_ParamLimits

0x30f5,	// (0x0003e50e) main_camera_pane_g3_ParamLimits

0x3101,	// (0x0003e51a) main_camera_pane_g4_ParamLimits

0x310d,	// (0x0003e526) main_camera_pane_g5_ParamLimits

0x3119,	// (0x0003e532) main_camera_pane_g6_ParamLimits

0x3125,	// (0x0003e53e) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0004a623) main_camera_pane_g_ParamLimits

0x3131,	// (0x0003e54a) main_camera_pane_t1_ParamLimits

0x3143,	// (0x0003e55c) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0004a634) main_camera_pane_t_ParamLimits

0xbcd3,	// (0x000470ec) bg_popup_preview_window_pane_cp01_ParamLimits

0xbcd3,	// (0x000470ec) bg_popup_preview_window_pane_cp01

0xce21,	// (0x0004823a) popup_phob_thumbnail2_window_g1_ParamLimits

0xce21,	// (0x0004823a) popup_phob_thumbnail2_window_g1

0xb751,	// (0x00046b6a) call2_cli_visual_pane

0x50a1,	// (0x000404ba) popup_call2_audio_conf_window_ParamLimits

0x50a1,	// (0x000404ba) popup_call2_audio_conf_window

0x50b6,	// (0x000404cf) popup_call2_audio_first_window_ParamLimits

0x50b6,	// (0x000404cf) popup_call2_audio_first_window

0x5154,	// (0x0004056d) popup_call2_audio_in_window_ParamLimits

0x5154,	// (0x0004056d) popup_call2_audio_in_window

0x5196,	// (0x000405af) popup_call2_audio_out_window_ParamLimits

0x5196,	// (0x000405af) popup_call2_audio_out_window

0x51f8,	// (0x00040611) popup_call2_audio_second_window_ParamLimits

0x51f8,	// (0x00040611) popup_call2_audio_second_window

0x5256,	// (0x0004066f) popup_call2_audio_wait_window_ParamLimits

0x5256,	// (0x0004066f) popup_call2_audio_wait_window

0xb751,	// (0x00046b6a) bg_popup_call2_act_pane_cp03

0xbcb5,	// (0x000470ce) list_conf_pane_cp

0xce2d,	// (0x00048246) popup_call2_audio_conf_window_t1

0xc6a0,	// (0x00047ab9) list_single_graphic_popup_conf2_pane_ParamLimits

0xc6a0,	// (0x00047ab9) list_single_graphic_popup_conf2_pane

0xc6b3,	// (0x00047acc) list_highlight_pane_cp04

0xce3b,	// (0x00048254) list_single_graphic_popup_conf2_pane_g1

0xc6c4,	// (0x00047add) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0004a92b) list_single_graphic_popup_conf2_pane_g

0xce45,	// (0x0004825e) list_single_graphic_popup_conf2_pane_t1

0xce53,	// (0x0004826c) bg_popup_call2_act_pane_cp01_ParamLimits

0xce53,	// (0x0004826c) bg_popup_call2_act_pane_cp01

0xcedd,	// (0x000482f6) call_type_pane_cp05_ParamLimits

0xcedd,	// (0x000482f6) call_type_pane_cp05

0xcf31,	// (0x0004834a) popup_call2_audio_second_window_g1_ParamLimits

0xcf31,	// (0x0004834a) popup_call2_audio_second_window_g1

0xcf85,	// (0x0004839e) popup_call2_audio_second_window_g2_ParamLimits

0xcf85,	// (0x0004839e) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0004a930) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0004a930) popup_call2_audio_second_window_g

0xcfea,	// (0x00048403) popup_call2_audio_second_window_t1_ParamLimits

0xcfea,	// (0x00048403) popup_call2_audio_second_window_t1

0xd0a5,	// (0x000484be) popup_call2_audio_second_window_t2_ParamLimits

0xd0a5,	// (0x000484be) popup_call2_audio_second_window_t2

0xd0f8,	// (0x00048511) popup_call2_audio_second_window_t3_ParamLimits

0xd0f8,	// (0x00048511) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0004a937) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0004a937) popup_call2_audio_second_window_t

0xb751,	// (0x00046b6a) bg_popup_call2_in_pane_cp02

0xb75b,	// (0x00046b74) call_type_pane_cp04

0xb763,	// (0x00046b7c) popup_call2_audio_wait_window_g1

0xb76b,	// (0x00046b84) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0004a512) popup_call2_audio_wait_window_g

0xb773,	// (0x00046b8c) popup_call2_audio_wait_window_t3

0xd1eb,	// (0x00048604) bg_popup_call2_act_pane_ParamLimits

0xd1eb,	// (0x00048604) bg_popup_call2_act_pane

0xd2ab,	// (0x000486c4) call_type_pane_cp03_ParamLimits

0xd2ab,	// (0x000486c4) call_type_pane_cp03

0xd30f,	// (0x00048728) popup_call2_audio_first_window_g1_ParamLimits

0xd30f,	// (0x00048728) popup_call2_audio_first_window_g1

0xd37f,	// (0x00048798) popup_call2_audio_first_window_g2_ParamLimits

0xd37f,	// (0x00048798) popup_call2_audio_first_window_g2

0xc9da,	// (0x00047df3) popup_call2_audio_first_window_g3_ParamLimits

0xc9da,	// (0x00047df3) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0004a940) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0004a940) popup_call2_audio_first_window_g

0xd45d,	// (0x00048876) popup_call2_audio_first_window_t1_ParamLimits

0xd45d,	// (0x00048876) popup_call2_audio_first_window_t1

0xd560,	// (0x00048979) popup_call2_audio_first_window_t4_ParamLimits

0xd560,	// (0x00048979) popup_call2_audio_first_window_t4

0xd643,	// (0x00048a5c) popup_call2_audio_first_window_t5_ParamLimits

0xd643,	// (0x00048a5c) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0004a94b) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0004a94b) popup_call2_audio_first_window_t

0xbccb,	// (0x000470e4) bg_popup_call2_act_pane_g1

0xdcb0,	// (0x000490c9) popup_cale_lunar_info_window_t1

0xdcbe,	// (0x000490d7) popup_cale_lunar_info_window_t2

0xdccc,	// (0x000490e5) popup_cale_lunar_info_window_t3

0xb751,	// (0x00046b6a) bg_popup_call2_bubble_pane

0xd744,	// (0x00048b5d) bg_popup_call2_in_pane_cp01_ParamLimits

0xd744,	// (0x00048b5d) bg_popup_call2_in_pane_cp01

0xb42d,	// (0x00046846) call_type_pane_cp02

0xd78c,	// (0x00048ba5) popup_call2_audio_out_window_g1_ParamLimits

0xd78c,	// (0x00048ba5) popup_call2_audio_out_window_g1

0xd7b8,	// (0x00048bd1) popup_call2_audio_out_window_g2_ParamLimits

0xd7b8,	// (0x00048bd1) popup_call2_audio_out_window_g2

0xd7e0,	// (0x00048bf9) popup_call2_audio_out_window_g3_ParamLimits

0xd7e0,	// (0x00048bf9) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0004a954) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0004a954) popup_call2_audio_out_window_g

0xd81b,	// (0x00048c34) popup_call2_audio_out_window_t1_ParamLimits

0xd81b,	// (0x00048c34) popup_call2_audio_out_window_t1

0xd87a,	// (0x00048c93) popup_call2_audio_out_window_t2_ParamLimits

0xd87a,	// (0x00048c93) popup_call2_audio_out_window_t2

0xd8ce,	// (0x00048ce7) popup_call2_audio_out_window_t3_ParamLimits

0xd8ce,	// (0x00048ce7) popup_call2_audio_out_window_t3

0xd8e4,	// (0x00048cfd) popup_call2_audio_out_window_t4_ParamLimits

0xd8e4,	// (0x00048cfd) popup_call2_audio_out_window_t4

0xd8fa,	// (0x00048d13) popup_call2_audio_out_window_t5_ParamLimits

0xd8fa,	// (0x00048d13) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0004a95d) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0004a95d) popup_call2_audio_out_window_t

0xd95e,	// (0x00048d77) bg_popup_call2_in_pane_ParamLimits

0xd95e,	// (0x00048d77) bg_popup_call2_in_pane

0xd9ba,	// (0x00048dd3) popup_call2_audio_in_window_g1_ParamLimits

0xd9ba,	// (0x00048dd3) popup_call2_audio_in_window_g1

0xd9f2,	// (0x00048e0b) popup_call2_audio_in_window_g2_ParamLimits

0xd9f2,	// (0x00048e0b) popup_call2_audio_in_window_g2

0xda2a,	// (0x00048e43) popup_call2_audio_in_window_g3_ParamLimits

0xda2a,	// (0x00048e43) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0004a96a) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0004a96a) popup_call2_audio_in_window_g

0xda82,	// (0x00048e9b) popup_call2_audio_in_window_t1_ParamLimits

0xda82,	// (0x00048e9b) popup_call2_audio_in_window_t1

0xdb02,	// (0x00048f1b) popup_call2_audio_in_window_t2_ParamLimits

0xdb02,	// (0x00048f1b) popup_call2_audio_in_window_t2

0xdb82,	// (0x00048f9b) popup_call2_audio_in_window_t3_ParamLimits

0xdb82,	// (0x00048f9b) popup_call2_audio_in_window_t3

0xdb9c,	// (0x00048fb5) popup_call2_audio_in_window_t4_ParamLimits

0xdb9c,	// (0x00048fb5) popup_call2_audio_in_window_t4

0xdbae,	// (0x00048fc7) popup_call2_audio_in_window_t5_ParamLimits

0xdbae,	// (0x00048fc7) popup_call2_audio_in_window_t5

0xdbc3,	// (0x00048fdc) popup_call2_audio_in_window_t6_ParamLimits

0xdbc3,	// (0x00048fdc) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0004a973) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0004a973) popup_call2_audio_in_window_t

0xbccb,	// (0x000470e4) bg_popup_call2_in_pane_g1

0xdcda,	// (0x000490f3) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0004a9db) popup_cale_lunar_info_window_t

0xbcd3,	// (0x000470ec) bg_popup_call2_rect_pane_ParamLimits

0xbcd3,	// (0x000470ec) bg_popup_call2_rect_pane

0xb751,	// (0x00046b6a) call2_cli_visual_graphic_pane

0xb751,	// (0x00046b6a) call2_cli_visual_text_pane

0x575f,	// (0x00040b78) smil_status_volume_pane_g3

0x0002,

0xbded,	// (0x00047206) call2_cli_visual_graphic_pane_g1

0xbded,	// (0x00047206) call2_cli_visual_graphic_pane_g2

0xbded,	// (0x00047206) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0004a980) call2_cli_visual_graphic_pane_g

0xdbd8,	// (0x00048ff1) bg_popup_call2_rect_pane_g1

0xbe79,	// (0x00047292) bg_popup_call2_rect_pane_g2

0xdbe0,	// (0x00048ff9) bg_popup_call2_rect_pane_g3

0xdbe8,	// (0x00049001) bg_popup_call2_rect_pane_g4

0xdbf0,	// (0x00049009) bg_popup_call2_rect_pane_g5

0xdbf8,	// (0x00049011) bg_popup_call2_rect_pane_g6

0xdc00,	// (0x00049019) bg_popup_call2_rect_pane_g7

0xdc08,	// (0x00049021) bg_popup_call2_rect_pane_g8

0xdc10,	// (0x00049029) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0004a987) bg_popup_call2_rect_pane_g

0xdc18,	// (0x00049031) bg_popup_call2_bubble_pane_g1

0xdc20,	// (0x00049039) bg_popup_call2_bubble_pane_g2

0xdc28,	// (0x00049041) bg_popup_call2_bubble_pane_g3

0xdc30,	// (0x00049049) bg_popup_call2_bubble_pane_g4

0xdc38,	// (0x00049051) bg_popup_call2_bubble_pane_g5

0xdc40,	// (0x00049059) bg_popup_call2_bubble_pane_g6

0xdc48,	// (0x00049061) bg_popup_call2_bubble_pane_g7

0xdc50,	// (0x00049069) bg_popup_call2_bubble_pane_g8

0xdc58,	// (0x00049071) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0004a99a) bg_popup_call2_bubble_pane_g

0x2bd7,	// (0x0003dff0) aid_cale_week_size_cell_pane

0x3155,	// (0x0003e56e) aid_cams_cif_uncrop_pane_ParamLimits

0x3155,	// (0x0003e56e) aid_cams_cif_uncrop_pane

0x32b0,	// (0x0003e6c9) aid_cams_size_cell_ParamLimits

0x32b0,	// (0x0003e6c9) aid_cams_size_cell

0x32bc,	// (0x0003e6d5) grid_cams_pane_ParamLimits

0x32ca,	// (0x0003e6e3) linegrid_cams_pane_ParamLimits

0x33a1,	// (0x0003e7ba) call_video_pane_t1

0x33c2,	// (0x0003e7db) call_video_pane_t2

0x0001,

0xf26e,	// (0x0004a687) call_video_pane_t

0x3909,	// (0x0003ed22) aid_cale_month_size_cell_pane_ParamLimits

0x3909,	// (0x0003ed22) aid_cale_month_size_cell_pane

0xf60b,	// (0x0004aa24) smil_status_volume_pane_g

0x576c,	// (0x00040b85) volume_smil_pane_ParamLimits

0x2346,	// (0x0003d75f) aid_popup2_width_pane

0x2ad9,	// (0x0003def2) cell_qdial_pane_g4_ParamLimits

0x2ad9,	// (0x0003def2) cell_qdial_pane_g4

0x47e5,	// (0x0003fbfe) aid_blid_cardinal_pane_ParamLimits

0x47f5,	// (0x0003fc0e) aid_blid_destination_pane_ParamLimits

0x47f5,	// (0x0003fc0e) aid_blid_destination_pane

0xbcd3,	// (0x000470ec) bg_popup_call_poc_act_pane_ParamLimits

0xbcd3,	// (0x000470ec) bg_popup_call_poc_act_pane

0xbcd3,	// (0x000470ec) bg_popup_call_poc_inact_pane_ParamLimits

0xbcd3,	// (0x000470ec) bg_popup_call_poc_inact_pane

0xdc60,	// (0x00049079) bg_popup_call_poc_act_pane_g1

0xdc68,	// (0x00049081) bg_popup_call_poc_act_pane_g2

0xdc70,	// (0x00049089) bg_popup_call_poc_act_pane_g3

0xdc30,	// (0x00049049) bg_popup_call_poc_act_pane_g4

0xdc38,	// (0x00049051) bg_popup_call_poc_act_pane_g5

0xdc78,	// (0x00049091) bg_popup_call_poc_act_pane_g6

0xdc48,	// (0x00049061) bg_popup_call_poc_act_pane_g7

0xdc80,	// (0x00049099) bg_popup_call_poc_act_pane_g8

0xb751,	// (0x00046b6a) main_usb_pane

0x555b,	// (0x00040974) popup_cale_lunar_info_window

0x36eb,	// (0x0003eb04) im_reading_pane_t1_ParamLimits

0xc05e,	// (0x00047477) list_im_pane_ParamLimits

0xc06f,	// (0x00047488) scroll_pane_cp07_ParamLimits

0xb751,	// (0x00046b6a) grid_highlight_pane_cp012

0xbcd3,	// (0x000470ec) mup_scale_pane_ParamLimits

0xc9da,	// (0x00047df3) main_usb_pane_g1_ParamLimits

0xc9da,	// (0x00047df3) main_usb_pane_g1

0x52ca,	// (0x000406e3) main_usb_pane_g2_ParamLimits

0x52ca,	// (0x000406e3) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0004a9c4) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0004a9c4) main_usb_pane_g

0x52d6,	// (0x000406ef) main_usb_pane_t1_ParamLimits

0x52d6,	// (0x000406ef) main_usb_pane_t1

0x52e8,	// (0x00040701) main_usb_pane_t2_ParamLimits

0x52e8,	// (0x00040701) main_usb_pane_t2

0x52fa,	// (0x00040713) main_usb_pane_t3_ParamLimits

0x52fa,	// (0x00040713) main_usb_pane_t3

0x530c,	// (0x00040725) main_usb_pane_t4_ParamLimits

0x530c,	// (0x00040725) main_usb_pane_t4

0x531e,	// (0x00040737) main_usb_pane_t5_ParamLimits

0x531e,	// (0x00040737) main_usb_pane_t5

0x5330,	// (0x00040749) main_usb_pane_t6_ParamLimits

0x5330,	// (0x00040749) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0004a9c9) main_usb_pane_t_ParamLimits

0x478b,	// (0x0003fba4) aid_text_placing

0x4797,	// (0x0003fbb0) main_location2_pane_t1_ParamLimits

0x47ab,	// (0x0003fbc4) main_location2_pane_t2_ParamLimits

0x47bf,	// (0x0003fbd8) main_location2_pane_t3_ParamLimits

0x47d3,	// (0x0003fbec) main_location2_pane_t4_ParamLimits

0x47d3,	// (0x0003fbec) main_location2_pane_t4

0xf3cf,	// (0x0004a7e8) main_location2_pane_t_ParamLimits

0xbd0f,	// (0x00047128) find_pinb_pane_g2_ParamLimits

0xbd0f,	// (0x00047128) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0004a538) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0004a538) find_pinb_pane_g

0xbd1b,	// (0x00047134) find_pinb_pane_t1_ParamLimits

0xbd2d,	// (0x00047146) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0004a53d) find_pinb_pane_t_ParamLimits

0xb751,	// (0x00046b6a) main_call3_pane

0x3eac,	// (0x0003f2c5) cale_month_day_heading_pane_t1_ParamLimits

0x3f32,	// (0x0003f34b) cale_month_day_heading_pane_t2_ParamLimits

0x3fab,	// (0x0003f3c4) cale_month_day_heading_pane_t3_ParamLimits

0x4024,	// (0x0003f43d) cale_month_day_heading_pane_t4_ParamLimits

0x409d,	// (0x0003f4b6) cale_month_day_heading_pane_t5_ParamLimits

0x4116,	// (0x0003f52f) cale_month_day_heading_pane_t6_ParamLimits

0x418f,	// (0x0003f5a8) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0004a6bf) cale_month_day_heading_pane_t_ParamLimits

0xc2b9,	// (0x000476d2) smil_status_volume_pane

0x4e8e,	// (0x000402a7) postcard_address_pane_ParamLimits

0x4e8e,	// (0x000402a7) postcard_address_pane

0x4e9a,	// (0x000402b3) postcard_message_pane_ParamLimits

0x4e9a,	// (0x000402b3) postcard_message_pane

0x5295,	// (0x000406ae) call2_cli_visual_pane_t1_ParamLimits

0x5295,	// (0x000406ae) call2_cli_visual_pane_t1

0x58c3,	// (0x00040cdc) postcard_message_pane_t1_ParamLimits

0x58c3,	// (0x00040cdc) postcard_message_pane_t1

0x58ac,	// (0x00040cc5) postcard_address_pane_t1_ParamLimits

0x58ac,	// (0x00040cc5) postcard_address_pane_t1

0x589d,	// (0x00040cb6) popup_call3_audio_in_window_ParamLimits

0x589d,	// (0x00040cb6) popup_call3_audio_in_window

0x5781,	// (0x00040b9a) bg_popup_call3_in_pane_ParamLimits

0x5781,	// (0x00040b9a) bg_popup_call3_in_pane

0x57e3,	// (0x00040bfc) popup_call3_audio_in_window_g1_ParamLimits

0x57e3,	// (0x00040bfc) popup_call3_audio_in_window_g1

0x57fb,	// (0x00040c14) popup_call3_audio_in_window_g2_ParamLimits

0x57fb,	// (0x00040c14) popup_call3_audio_in_window_g2

0x5813,	// (0x00040c2c) popup_call3_audio_in_window_g3_ParamLimits

0x5813,	// (0x00040c2c) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0004aa2b) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0004aa2b) popup_call3_audio_in_window_g

0x583b,	// (0x00040c54) popup_call3_audio_in_window_t1_ParamLimits

0x583b,	// (0x00040c54) popup_call3_audio_in_window_t1

0x5863,	// (0x00040c7c) popup_call3_audio_in_window_t2_ParamLimits

0x5863,	// (0x00040c7c) popup_call3_audio_in_window_t2

0x588b,	// (0x00040ca4) popup_call3_audio_in_window_t3_ParamLimits

0x588b,	// (0x00040ca4) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0004aa34) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0004aa34) popup_call3_audio_in_window_t

0xbf5d,	// (0x00047376) bg_popup_call3_rect_pane

0xdbd8,	// (0x00048ff1) bg_popup_call3_rect_pane_g1

0xbe79,	// (0x00047292) bg_popup_call3_rect_pane_g2

0xdbe0,	// (0x00048ff9) bg_popup_call3_rect_pane_g3

0xdbe8,	// (0x00049001) bg_popup_call3_rect_pane_g4

0xdbf0,	// (0x00049009) bg_popup_call3_rect_pane_g5

0xdbf8,	// (0x00049011) bg_popup_call3_rect_pane_g6

0xdc00,	// (0x00049019) bg_popup_call3_rect_pane_g7

0x4b0b,	// (0x0003ff24) mup_visualizer_osc_pane

0xca96,	// (0x00047eaf) mup_visualizer_spec_pane

0x57a1,	// (0x00040bba) call3_video_qcif_pane_ParamLimits

0x57a1,	// (0x00040bba) call3_video_qcif_pane

0x57b3,	// (0x00040bcc) call3_video_qcif_uncrop_pane_ParamLimits

0x57b3,	// (0x00040bcc) call3_video_qcif_uncrop_pane

0x57c1,	// (0x00040bda) call3_video_subqcif_pane_ParamLimits

0x57c1,	// (0x00040bda) call3_video_subqcif_pane

0x57d3,	// (0x00040bec) call3_video_subqcif_uncrop_pane_ParamLimits

0x57d3,	// (0x00040bec) call3_video_subqcif_uncrop_pane

0x582b,	// (0x00040c44) popup_call3_audio_in_window_g4_ParamLimits

0x582b,	// (0x00040c44) popup_call3_audio_in_window_g4

0x574e,	// (0x00040b67) mup_spec_half_pane

0x5757,	// (0x00040b70) mup_spec_half_pane_cp

0xde3d,	// (0x00049256) mup_osc_middle_pane

0xde46,	// (0x0004925f) mup_visualizer_osc_pane_g1

0x572f,	// (0x00040b48) mup_spec_bar_pane_ParamLimits

0x572f,	// (0x00040b48) mup_spec_bar_pane

0xde2a,	// (0x00049243) mup_spec_bar_pane_g1

0xde34,	// (0x0004924d) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004aa1f) mup_spec_bar_pane_g

0x2bd7,	// (0x0003dff0) aid_cale_week_size_cell_pane_ParamLimits

0x2bec,	// (0x0003e005) bg_cale_heading_pane_ParamLimits

0xbeb6,	// (0x000472cf) bg_cale_pane_cp01_ParamLimits

0x2c0c,	// (0x0003e025) cale_week_corner_pane_ParamLimits

0x2c26,	// (0x0003e03f) cale_week_day_heading_pane_ParamLimits

0x2c46,	// (0x0003e05f) cale_week_scroll_pane_g1_ParamLimits

0x2c61,	// (0x0003e07a) cale_week_scroll_pane_g2_ParamLimits

0x2c74,	// (0x0003e08d) cale_week_scroll_pane_g3_ParamLimits

0x2c87,	// (0x0003e0a0) cale_week_scroll_pane_g4_ParamLimits

0x2c9a,	// (0x0003e0b3) cale_week_scroll_pane_g5_ParamLimits

0x2cad,	// (0x0003e0c6) cale_week_scroll_pane_g6_ParamLimits

0x2cc0,	// (0x0003e0d9) cale_week_scroll_pane_g7_ParamLimits

0x2cd5,	// (0x0003e0ee) cale_week_scroll_pane_g8_ParamLimits

0x2cea,	// (0x0003e103) cale_week_scroll_pane_g9_ParamLimits

0x2cfd,	// (0x0003e116) cale_week_scroll_pane_g10_ParamLimits

0x2d10,	// (0x0003e129) cale_week_scroll_pane_g11_ParamLimits

0x2d23,	// (0x0003e13c) cale_week_scroll_pane_g12_ParamLimits

0x2d3a,	// (0x0003e153) cale_week_scroll_pane_g13_ParamLimits

0x2d55,	// (0x0003e16e) cale_week_scroll_pane_g14_ParamLimits

0x2d70,	// (0x0003e189) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0004a5c9) cale_week_scroll_pane_g_ParamLimits

0x2da0,	// (0x0003e1b9) cale_week_time_pane_ParamLimits

0x2db5,	// (0x0003e1ce) grid_cale_week_pane_ParamLimits

0xbed3,	// (0x000472ec) listscroll_cale_week_pane_t1

0xbee5,	// (0x000472fe) scroll_pane_cp08_ParamLimits

0x397d,	// (0x0003ed96) cale_month_corner_pane_ParamLimits

0xc28f,	// (0x000476a8) cale_month_pane_t1

0x3e2f,	// (0x0003f248) cale_month_week_pane_ParamLimits

0xc9da,	// (0x00047df3) popup_call_status_window_g1_ParamLimits

0x45be,	// (0x0003f9d7) popup_call_status_window_g2_ParamLimits

0x45ca,	// (0x0003f9e3) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0004a76f) popup_call_status_window_g_ParamLimits

0xc633,	// (0x00047a4c) aid_call2_pane

0x1204,	// (0x0003c61d) msg_header_pane_g1

0x4e8e,	// (0x000402a7) postcard_address2_pane_ParamLimits

0x4e8e,	// (0x000402a7) postcard_address2_pane

0x4e9a,	// (0x000402b3) postcard_message2_pane_ParamLimits

0x4e9a,	// (0x000402b3) postcard_message2_pane

0x56c7,	// (0x00040ae0) message2_row_pane_ParamLimits

0x56c7,	// (0x00040ae0) message2_row_pane

0x56e2,	// (0x00040afb) address2_row_pane_ParamLimits

0x56e2,	// (0x00040afb) address2_row_pane

0xddf8,	// (0x00049211) postcard_message2_row_pane_g1

0xde00,	// (0x00049219) postcard_message2_row_pane_t1

0xddf8,	// (0x00049211) address2_row_pane_g1

0xde00,	// (0x00049219) address2_row_pane_t1

0x303b,	// (0x0003e454) aid_size_cell_vorec

0xb751,	// (0x00046b6a) main_rss_pane

0x56f5,	// (0x00040b0e) rss_list_single_pane_ParamLimits

0x56f5,	// (0x00040b0e) rss_list_single_pane

0xde0e,	// (0x00049227) rss_list_single_pane_t1

0xde1c,	// (0x00049235) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0004aa1a) rss_list_single_pane_t

0xb751,	// (0x00046b6a) main_camera2_pane

0xb751,	// (0x00046b6a) main_video2_pane

0x5927,	// (0x00040d40) cams_zoom_pane_cp2_ParamLimits

0x5927,	// (0x00040d40) cams_zoom_pane_cp2

0x5933,	// (0x00040d4c) image2_vga_pane_ParamLimits

0x5933,	// (0x00040d4c) image2_vga_pane

0x5942,	// (0x00040d5b) main_camera2_pane_g1_ParamLimits

0x5942,	// (0x00040d5b) main_camera2_pane_g1

0x594e,	// (0x00040d67) main_camera2_pane_g2_ParamLimits

0x594e,	// (0x00040d67) main_camera2_pane_g2

0x595a,	// (0x00040d73) main_camera2_pane_g3_ParamLimits

0x595a,	// (0x00040d73) main_camera2_pane_g3

0x5966,	// (0x00040d7f) main_camera2_pane_g4_ParamLimits

0x5966,	// (0x00040d7f) main_camera2_pane_g4

0x5972,	// (0x00040d8b) main_camera2_pane_g5_ParamLimits

0x5972,	// (0x00040d8b) main_camera2_pane_g5

0x597e,	// (0x00040d97) main_camera2_pane_g6_ParamLimits

0x597e,	// (0x00040d97) main_camera2_pane_g6

0x598a,	// (0x00040da3) main_camera2_pane_g7_ParamLimits

0x598a,	// (0x00040da3) main_camera2_pane_g7

0x5996,	// (0x00040daf) main_camera2_pane_g8_ParamLimits

0x5996,	// (0x00040daf) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0004aa3b) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0004aa3b) main_camera2_pane_g

0x59ae,	// (0x00040dc7) main_camera2_pane_t1_ParamLimits

0x59ae,	// (0x00040dc7) main_camera2_pane_t1

0x59c0,	// (0x00040dd9) main_camera2_pane_t2_ParamLimits

0x59c0,	// (0x00040dd9) main_camera2_pane_t2

0x59d2,	// (0x00040deb) main_camera2_pane_t3_ParamLimits

0x59d2,	// (0x00040deb) main_camera2_pane_t3

0x59e4,	// (0x00040dfd) main_camera2_pane_t4_ParamLimits

0x59e4,	// (0x00040dfd) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0004aa4e) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0004aa4e) main_camera2_pane_t

0x5a46,	// (0x00040e5f) cams_zoom_pane_cp4_ParamLimits

0x5a46,	// (0x00040e5f) cams_zoom_pane_cp4

0x5a56,	// (0x00040e6f) image2_cif_pane_ParamLimits

0x5a56,	// (0x00040e6f) image2_cif_pane

0x5a6b,	// (0x00040e84) image2_subqcif_pane_ParamLimits

0x5a6b,	// (0x00040e84) image2_subqcif_pane

0x5a7a,	// (0x00040e93) main_video2_pane_g1_ParamLimits

0x5a7a,	// (0x00040e93) main_video2_pane_g1

0x5a8c,	// (0x00040ea5) main_video2_pane_g2_ParamLimits

0x5a8c,	// (0x00040ea5) main_video2_pane_g2

0x5a9c,	// (0x00040eb5) main_video2_pane_g3_ParamLimits

0x5a9c,	// (0x00040eb5) main_video2_pane_g3

0x5aac,	// (0x00040ec5) main_video2_pane_g4_ParamLimits

0x5aac,	// (0x00040ec5) main_video2_pane_g4

0x5abc,	// (0x00040ed5) main_video2_pane_g5_ParamLimits

0x5abc,	// (0x00040ed5) main_video2_pane_g5

0x5acc,	// (0x00040ee5) main_video2_pane_g6_ParamLimits

0x5acc,	// (0x00040ee5) main_video2_pane_g6

0x0005,

0xf644,	// (0x0004aa5d) main_video2_pane_g_ParamLimits

0xf644,	// (0x0004aa5d) main_video2_pane_g

0x5ade,	// (0x00040ef7) main_video2_pane_t1_ParamLimits

0x5ade,	// (0x00040ef7) main_video2_pane_t1

0x5af8,	// (0x00040f11) main_video2_pane_t2_ParamLimits

0x5af8,	// (0x00040f11) main_video2_pane_t2

0x5b1e,	// (0x00040f37) main_video2_pane_t3_ParamLimits

0x5b1e,	// (0x00040f37) main_video2_pane_t3

0x0002,

0xf651,	// (0x0004aa6a) main_video2_pane_t_ParamLimits

0xf651,	// (0x0004aa6a) main_video2_pane_t

0x53e7,	// (0x00040800) call_muted_g2

0x0001,

0xf5f3,	// (0x0004aa0c) call_muted_g

0xb751,	// (0x00046b6a) main_mup2_pane

0xde7d,	// (0x00049296) main_mup2_pane_g1_ParamLimits

0xde7d,	// (0x00049296) main_mup2_pane_g1

0x5b44,	// (0x00040f5d) main_mup2_pane_g2_ParamLimits

0x5b44,	// (0x00040f5d) main_mup2_pane_g2

0x5dc6,	// (0x000411df) main_mup_pane_g13_cp1

0x5dce,	// (0x000411e7) mup_volume_pane_cp1

0x5b64,	// (0x00040f7d) main_mup2_pane_g4_ParamLimits

0x5b64,	// (0x00040f7d) main_mup2_pane_g4

0x5b79,	// (0x00040f92) main_mup2_pane_g5_ParamLimits

0x5b79,	// (0x00040f92) main_mup2_pane_g5

0x5b8e,	// (0x00040fa7) main_mup2_pane_g6_ParamLimits

0x5b8e,	// (0x00040fa7) main_mup2_pane_g6

0x5ba3,	// (0x00040fbc) main_mup2_pane_g7_ParamLimits

0x5ba3,	// (0x00040fbc) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0004aa71) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0004aa71) main_mup2_pane_g

0x5bbf,	// (0x00040fd8) main_mup2_pane_t1_ParamLimits

0x5bbf,	// (0x00040fd8) main_mup2_pane_t1

0x5bd6,	// (0x00040fef) main_mup2_pane_t2_ParamLimits

0x5bd6,	// (0x00040fef) main_mup2_pane_t2

0x5bed,	// (0x00041006) main_mup2_pane_t3_ParamLimits

0x5bed,	// (0x00041006) main_mup2_pane_t3

0x5c04,	// (0x0004101d) main_mup2_pane_t4_ParamLimits

0x5c04,	// (0x0004101d) main_mup2_pane_t4

0x5c1e,	// (0x00041037) main_mup2_pane_t5_ParamLimits

0x5c1e,	// (0x00041037) main_mup2_pane_t5

0x5c38,	// (0x00041051) main_mup2_pane_t6_ParamLimits

0x5c38,	// (0x00041051) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0004aa80) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0004aa80) main_mup2_pane_t

0x5c70,	// (0x00041089) mup2_visualizer_pane_ParamLimits

0x5c70,	// (0x00041089) mup2_visualizer_pane

0x5ca6,	// (0x000410bf) mup_progress_pane_cp_ParamLimits

0x5ca6,	// (0x000410bf) mup_progress_pane_cp

0x5db1,	// (0x000411ca) mup_volume_pane_cp_ParamLimits

0x5db1,	// (0x000411ca) mup_volume_pane_cp

0x5cbd,	// (0x000410d6) mup2_visualizer_pane_g1_ParamLimits

0x5cbd,	// (0x000410d6) mup2_visualizer_pane_g1

0xde89,	// (0x000492a2) mup2_visualizer_pane_g2_ParamLimits

0xde89,	// (0x000492a2) mup2_visualizer_pane_g2

0x5cd2,	// (0x000410eb) mup2_visualizer_pane_g3_ParamLimits

0x5cd2,	// (0x000410eb) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0004aa8d) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0004aa8d) mup2_visualizer_pane_g

0xccbd,	// (0x000480d6) aid_size_cell_fmradio

0x54fd,	// (0x00040916) aid_height_parent_landcape

0xc0ed,	// (0x00047506) wml_content_pane_cp

0xc0f5,	// (0x0004750e) wml_tabs_pane

0xc0fe,	// (0x00047517) popup_wml_miniature_window

0xc106,	// (0x0004751f) scroll_pane_cp021

0xc11a,	// (0x00047533) wml_content_pane_comp8

0xb751,	// (0x00046b6a) bg_popup_sub_pane_cp05

0xdea7,	// (0x000492c0) popup_wml_miniature_window_g1

0xdeaf,	// (0x000492c8) wml_miniature_view_pane

0x5ce0,	// (0x000410f9) aid_size_wml_view

0x5ce8,	// (0x00041101) wml_miniature_view_pane_g1

0x5cf1,	// (0x0004110a) wml_miniature_view_pane_g2

0x5cfa,	// (0x00041113) wml_miniature_view_pane_g3

0x5d02,	// (0x0004111b) wml_miniature_view_pane_g4

0x5d0a,	// (0x00041123) wml_miniature_view_pane_g5

0x5d12,	// (0x0004112b) wml_miniature_view_pane_g6

0x5d1a,	// (0x00041133) wml_miniature_view_pane_g7

0x5d22,	// (0x0004113b) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0004aa94) wml_miniature_view_pane_g

0xde7d,	// (0x00049296) background_graphic_ParamLimits

0xde7d,	// (0x00049296) background_graphic

0xdeb7,	// (0x000492d0) wml_tabs_2_pane

0xdec0,	// (0x000492d9) wml_tabs_3_pane_ParamLimits

0xdec0,	// (0x000492d9) wml_tabs_3_pane

0xded2,	// (0x000492eb) wml_tabs_4_pane_ParamLimits

0xded2,	// (0x000492eb) wml_tabs_4_pane

0xdee8,	// (0x00049301) wml_tabs_5_pane_ParamLimits

0xdee8,	// (0x00049301) wml_tabs_5_pane

0xdf02,	// (0x0004931b) wml_tabs_pane_g2_ParamLimits

0xdf02,	// (0x0004931b) wml_tabs_pane_g2

0xdf16,	// (0x0004932f) wml_tabs_pane_g3_ParamLimits

0xdf16,	// (0x0004932f) wml_tabs_pane_g3

0x5d2a,	// (0x00041143) wml_tabs_2_active_pane_ParamLimits

0x5d2a,	// (0x00041143) wml_tabs_2_active_pane

0x5d3a,	// (0x00041153) wml_tabs_2_passive_pane_ParamLimits

0x5d3a,	// (0x00041153) wml_tabs_2_passive_pane

0x5d4a,	// (0x00041163) wml_tabs_3_active_pane_cp_ParamLimits

0x5d4a,	// (0x00041163) wml_tabs_3_active_pane_cp

0x5d5b,	// (0x00041174) wml_tabs_3_passive_pane_ParamLimits

0x5d5b,	// (0x00041174) wml_tabs_3_passive_pane

0x5d6c,	// (0x00041185) wml_tabs_3_passive_pane_cp_ParamLimits

0x5d6c,	// (0x00041185) wml_tabs_3_passive_pane_cp

0x5d7d,	// (0x00041196) tabs_4_active_pane

0x5d85,	// (0x0004119e) tabs_4_passive_pane

0x5d8d,	// (0x000411a6) tabs_4_passive_pane_cp

0x5d95,	// (0x000411ae) tabs_4_passive_pane_cp2

0x52c2,	// (0x000406db) aid_height_text

0x4ad8,	// (0x0003fef1) mup_volume_cont_pane_ParamLimits

0x4ad8,	// (0x0003fef1) mup_volume_cont_pane

0x2715,	// (0x0003db2e) aid_size_cell_pinb

0x271f,	// (0x0003db38) aid_size_list_pinb

0x5c8f,	// (0x000410a8) mup2_volume_cont_pane_ParamLimits

0x5c8f,	// (0x000410a8) mup2_volume_cont_pane

0x5d9d,	// (0x000411b6) mup2_volume_cont_pane_g1_ParamLimits

0x5d9d,	// (0x000411b6) mup2_volume_cont_pane_g1

0x2352,	// (0x0003d76b) aid_size_cell_touch_ParamLimits

0x2352,	// (0x0003d76b) aid_size_cell_touch

0x25fb,	// (0x0003da14) touch_pane_ParamLimits

0x25fb,	// (0x0003da14) touch_pane

0xb334,	// (0x0004674d) main_rss2_pane

0xdf33,	// (0x0004934c) listscroll_rss2_pane

0xdf3c,	// (0x00049355) rss2_navigation_pane

0xdf44,	// (0x0004935d) list_rss2_pane

0xc776,	// (0x00047b8f) scroll_pane_cp22

0xdf4c,	// (0x00049365) rss2_navigation_pane_g1

0xdf55,	// (0x0004936e) rss2_navigation_pane_g2

0xdf5d,	// (0x00049376) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0004aaa5) rss2_navigation_pane_g

0xdf65,	// (0x0004937e) rss2_navigation_pane_t1

0x5dd6,	// (0x000411ef) rss2_list_single_pane_ParamLimits

0x5dd6,	// (0x000411ef) rss2_list_single_pane

0xdf73,	// (0x0004938c) rss2_list_single_pane_t2

0xdf81,	// (0x0004939a) rss2_list_single_pane_t3_ParamLimits

0xdf81,	// (0x0004939a) rss2_list_single_pane_t3

0xdf9e,	// (0x000493b7) rss2_list_single_pane_t4

0x442b,	// (0x0003f844) smil_status_pane_g1

0xc8c1,	// (0x00047cda) main_image2_pane_ParamLimits

0xc8c1,	// (0x00047cda) main_image2_pane

0x59a2,	// (0x00040dbb) main_camera2_pane_g9_ParamLimits

0x59a2,	// (0x00040dbb) main_camera2_pane_g9

0x59f6,	// (0x00040e0f) main_camera2_pane_t5_ParamLimits

0x59f6,	// (0x00040e0f) main_camera2_pane_t5

0x5a08,	// (0x00040e21) main_camera2_pane_t6_ParamLimits

0x5a08,	// (0x00040e21) main_camera2_pane_t6

0x5e07,	// (0x00041220) main_image2_pane_g1_ParamLimits

0x5e07,	// (0x00041220) main_image2_pane_g1

0x5062,	// (0x0004047b) smil2_video_pane_ParamLimits

0x5062,	// (0x0004047b) smil2_video_pane

0x0f6c,	// (0x0003c385) aid_zoom_text_primary_cp

0x25a4,	// (0x0003d9bd) popup_preview_fixed_window

0xc056,	// (0x0004746f) im_reading_pane_g1

0x58ec,	// (0x00040d05) cams2_bc_adjust_pane_cp_ParamLimits

0x58ec,	// (0x00040d05) cams2_bc_adjust_pane_cp

0x5a38,	// (0x00040e51) cams2_bc_adjust_pane_ParamLimits

0x5a38,	// (0x00040e51) cams2_bc_adjust_pane

0x5e13,	// (0x0004122c) cams2_bc_adjust_pane_g1

0x5e1b,	// (0x00041234) cams2_slider_pane

0x5e24,	// (0x0004123d) cams2_slider_pane_g1

0x5e2d,	// (0x00041246) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0004aaac) cams2_slider_pane_g

0x2825,	// (0x0003dc3e) calc_display_pane_ParamLimits

0x2843,	// (0x0003dc5c) calc_paper_pane_ParamLimits

0x285f,	// (0x0003dc78) grid_calc_pane_ParamLimits

0x462c,	// (0x0003fa45) popup_clock_digital_window_t1_ParamLimits

0xcc5a,	// (0x00048073) main_image_pane_t1

0x280b,	// (0x0003dc24) aid_size_cell_calc_ParamLimits

0x280b,	// (0x0003dc24) aid_size_cell_calc

0x5537,	// (0x00040950) popup_blid_sat_info2_window_ParamLimits

0x5537,	// (0x00040950) popup_blid_sat_info2_window

0xdfb4,	// (0x000493cd) aid_size_cell_blid

0xdfbc,	// (0x000493d5) bg_popup_window_pane_cp07

0xdfdf,	// (0x000493f8) grid_popup_blid_pane

0xdfe9,	// (0x00049402) heading_pane_cp05_ParamLimits

0xdfe9,	// (0x00049402) heading_pane_cp05

0xe0b3,	// (0x000494cc) cell_popup_blid_pane_ParamLimits

0xe0b3,	// (0x000494cc) cell_popup_blid_pane

0xe0d7,	// (0x000494f0) cell_popup_blid_pane_g1

0xe0df,	// (0x000494f8) cell_popup_blid_pane_t1

0x5c55,	// (0x0004106e) mup2_indicator_pane_ParamLimits

0x5c55,	// (0x0004106e) mup2_indicator_pane

0xbf5d,	// (0x00047376) mup2_visualizer_osc_pane

0xde95,	// (0x000492ae) mup2_visualizer_spec_pane_ParamLimits

0xde95,	// (0x000492ae) mup2_visualizer_spec_pane

0x5e47,	// (0x00041260) mup2_spec_half_pane

0x5e50,	// (0x00041269) mup2_spec_half_pane_cp

0x5e5a,	// (0x00041273) mup2_spec_bar_pane_ParamLimits

0x5e5a,	// (0x00041273) mup2_spec_bar_pane

0xde2a,	// (0x00049243) mup2_spec_bar_pane_g1

0xde34,	// (0x0004924d) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004aa1f) mup2_spec_bar_pane_g

0x5e79,	// (0x00041292) mup2_osc_middle_pane

0xde46,	// (0x0004925f) mup2_visualizer_osc_pane_g1

0xb35e,	// (0x00046777) popup_number_entry_window_t1_ParamLimits

0xb371,	// (0x0004678a) popup_number_entry_window_t2_ParamLimits

0xb383,	// (0x0004679c) popup_number_entry_window_t3_ParamLimits

0x2652,	// (0x0003da6b) popup_number_entry_window_t5_ParamLimits

0x2652,	// (0x0003da6b) popup_number_entry_window_t5

0xf0ca,	// (0x0004a4e3) popup_number_entry_window_t_ParamLimits

0xb395,	// (0x000467ae) text_title_cp2_ParamLimits

0x4d56,	// (0x0004016f) aid_hotspot_pointer_text2_pane

0x4df0,	// (0x00040209) main_viewer_pane_g9_ParamLimits

0x4df0,	// (0x00040209) main_viewer_pane_g9

0xc28f,	// (0x000476a8) cale_month_pane_t1_ParamLimits

0xc2cc,	// (0x000476e5) bg_cale_pane_ParamLimits

0xc2e4,	// (0x000476fd) list_cale_pane_ParamLimits

0xc2f5,	// (0x0004770e) listscroll_cale_day_pane_t1

0xc307,	// (0x00047720) scroll_pane_cp09_ParamLimits

0x4b13,	// (0x0003ff2c) main_mup_eq_pane_t1_ParamLimits

0x4b13,	// (0x0003ff2c) main_mup_eq_pane_t1

0x4b2d,	// (0x0003ff46) main_mup_eq_pane_t2_ParamLimits

0x4b2d,	// (0x0003ff46) main_mup_eq_pane_t2

0x4b47,	// (0x0003ff60) main_mup_eq_pane_t3_ParamLimits

0x4b47,	// (0x0003ff60) main_mup_eq_pane_t3

0x4b5f,	// (0x0003ff78) main_mup_eq_pane_t4_ParamLimits

0x4b5f,	// (0x0003ff78) main_mup_eq_pane_t4

0x4b77,	// (0x0003ff90) main_mup_eq_pane_t5_ParamLimits

0x4b77,	// (0x0003ff90) main_mup_eq_pane_t5

0x4b8f,	// (0x0003ffa8) main_mup_eq_pane_t6_ParamLimits

0x4b8f,	// (0x0003ffa8) main_mup_eq_pane_t6

0x4ba3,	// (0x0003ffbc) main_mup_eq_pane_t7_ParamLimits

0x4ba3,	// (0x0003ffbc) main_mup_eq_pane_t7

0x4bb7,	// (0x0003ffd0) main_mup_eq_pane_t8_ParamLimits

0x4bb7,	// (0x0003ffd0) main_mup_eq_pane_t8

0x4bcd,	// (0x0003ffe6) main_mup_eq_pane_t9_ParamLimits

0x4bcd,	// (0x0003ffe6) main_mup_eq_pane_t9

0x4be5,	// (0x0003fffe) main_mup_eq_pane_t10_ParamLimits

0x4be5,	// (0x0003fffe) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0004a86e) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0004a86e) main_mup_eq_pane_t

0x4ca2,	// (0x000400bb) mup_equalizer_pane_cp5_ParamLimits

0x4cb8,	// (0x000400d1) mup_equalizer_pane_cp6_ParamLimits

0x4cd0,	// (0x000400e9) mup_equalizer_pane_cp7_ParamLimits

0xb334,	// (0x0004674d) main_gallery_pane

0xde4f,	// (0x00049268) smil2_volume_pane

0xde57,	// (0x00049270) smil_status_volume_pane_g1_ParamLimits

0xde6a,	// (0x00049283) smil_status_volume_pane_g2_ParamLimits

0x575f,	// (0x00040b78) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0004aa24) smil_status_volume_pane_g_ParamLimits

0xdfbc,	// (0x000493d5) bg_popup_window_pane_cp07_ParamLimits

0xdfca,	// (0x000493e3) blid_firmament_pane

0x5e82,	// (0x0004129b) aid_size_cell_gallery_ParamLimits

0x5e82,	// (0x0004129b) aid_size_cell_gallery

0x5e90,	// (0x000412a9) grid_gallery_pane_ParamLimits

0x5e90,	// (0x000412a9) grid_gallery_pane

0x5ea0,	// (0x000412b9) cell_gallery_pane_ParamLimits

0x5ea0,	// (0x000412b9) cell_gallery_pane

0xe0ed,	// (0x00049506) bg_cell_gallery_focus_pane_ParamLimits

0xe0ed,	// (0x00049506) bg_cell_gallery_focus_pane

0xe0ff,	// (0x00049518) cell_gallery_pane_g1_ParamLimits

0xe0ff,	// (0x00049518) cell_gallery_pane_g1

0x5eee,	// (0x00041307) cell_gallery_pane_g2_ParamLimits

0x5eee,	// (0x00041307) cell_gallery_pane_g2

0x5efb,	// (0x00041314) cell_gallery_pane_g3_ParamLimits

0x5efb,	// (0x00041314) cell_gallery_pane_g3

0xe10b,	// (0x00049524) cell_gallery_pane_g4_ParamLimits

0xe10b,	// (0x00049524) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0004aad2) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0004aad2) cell_gallery_pane_g

0xe117,	// (0x00049530) bg_cell_gallery_focus_pane_g1

0xe11f,	// (0x00049538) bg_cell_gallery_focus_pane_g2

0xe127,	// (0x00049540) bg_cell_gallery_focus_pane_g3

0xe12f,	// (0x00049548) bg_cell_gallery_focus_pane_g4

0xe137,	// (0x00049550) bg_cell_gallery_focus_pane_g5

0xe13f,	// (0x00049558) bg_cell_gallery_focus_pane_g6

0xe147,	// (0x00049560) bg_cell_gallery_focus_pane_g7

0xe14f,	// (0x00049568) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0004aadb) bg_cell_gallery_focus_pane_g

0xe157,	// (0x00049570) aid_firma_cardinal

0xe16b,	// (0x00049584) blid_firmament_pane_t1

0xe182,	// (0x0004959b) blid_firmament_pane_t2

0xe1a2,	// (0x000495bb) blid_firmament_pane_t3

0xe1b9,	// (0x000495d2) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0004aaec) blid_firmament_pane_t

0xe1d0,	// (0x000495e9) blid_sat_info_pane

0xe1e0,	// (0x000495f9) blid_sat_info_pane_g1

0xe1e0,	// (0x000495f9) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0004aaf5) blid_sat_info_pane_g

0xe1ea,	// (0x00049603) blid_sat_info_pane_t1

0xe1f8,	// (0x00049611) smil2_volume_content_pane

0xe201,	// (0x0004961a) smil2_volume_pane_g1

0xe199,	// (0x000495b2) smil2_volume_content_pane_g1

0xe209,	// (0x00049622) smil2_volume_content_pane_g2

0xe212,	// (0x0004962b) smil2_volume_content_pane_g3

0xe21b,	// (0x00049634) smil2_volume_content_pane_g4

0xe224,	// (0x0004963d) smil2_volume_content_pane_g5

0xe22d,	// (0x00049646) smil2_volume_content_pane_g6

0xe236,	// (0x0004964f) smil2_volume_content_pane_g7

0xe23f,	// (0x00049658) smil2_volume_content_pane_g8

0xe248,	// (0x00049661) smil2_volume_content_pane_g9

0xe251,	// (0x0004966a) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0004aafa) smil2_volume_content_pane_g

0x2e36,	// (0x0003e24f) cale_week_day_heading_pane_t1_ParamLimits

0x2e51,	// (0x0003e26a) cale_week_day_heading_pane_t2_ParamLimits

0x2e6c,	// (0x0003e285) cale_week_day_heading_pane_t3_ParamLimits

0x2e87,	// (0x0003e2a0) cale_week_day_heading_pane_t4_ParamLimits

0x2ea2,	// (0x0003e2bb) cale_week_day_heading_pane_t5_ParamLimits

0x2ebd,	// (0x0003e2d6) cale_week_day_heading_pane_t6_ParamLimits

0x2ed8,	// (0x0003e2f1) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0004a5ea) cale_week_day_heading_pane_t_ParamLimits

0xbf02,	// (0x0004731b) bg_cale_side_pane_ParamLimits

0x2ef3,	// (0x0003e30c) cale_week_time_pane_t1_ParamLimits

0x2f0d,	// (0x0003e326) cale_week_time_pane_t2_ParamLimits

0x2f27,	// (0x0003e340) cale_week_time_pane_t3_ParamLimits

0x2f41,	// (0x0003e35a) cale_week_time_pane_t4_ParamLimits

0x2f5b,	// (0x0003e374) cale_week_time_pane_t5_ParamLimits

0x2f75,	// (0x0003e38e) cale_week_time_pane_t6_ParamLimits

0x2f93,	// (0x0003e3ac) cale_week_time_pane_t7_ParamLimits

0x2fb5,	// (0x0003e3ce) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0004a5f9) cale_week_time_pane_t_ParamLimits

0x2fd9,	// (0x0003e3f2) cell_cale_week_pane_g2_ParamLimits

0xbf02,	// (0x0004731b) bg_cale_side_pane_cp01_ParamLimits

0x4220,	// (0x0003f639) cale_month_week_pane_t1_ParamLimits

0x4239,	// (0x0003f652) cale_month_week_pane_t2_ParamLimits

0x4252,	// (0x0003f66b) cale_month_week_pane_t3_ParamLimits

0x426b,	// (0x0003f684) cale_month_week_pane_t4_ParamLimits

0x4284,	// (0x0003f69d) cale_month_week_pane_t5_ParamLimits

0x42a5,	// (0x0003f6be) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0004a6ce) cale_month_week_pane_t_ParamLimits

0x43e8,	// (0x0003f801) cell_cale_month_pane_g1_ParamLimits

0xb334,	// (0x0004674d) main_cale_event_viewer_pane

0xb334,	// (0x0004674d) listscroll_cale_event_viewer_pane

0xe25a,	// (0x00049673) list_cale_ev_pane

0xe262,	// (0x0004967b) scroll_pane_cp023

0xe26e,	// (0x00049687) field_cale_ev_pane_ParamLimits

0xe26e,	// (0x00049687) field_cale_ev_pane

0xe298,	// (0x000496b1) field_cale_ev_content_pane_ParamLimits

0xe298,	// (0x000496b1) field_cale_ev_content_pane

0xe2a4,	// (0x000496bd) field_cale_ev_pane_g1_ParamLimits

0xe2a4,	// (0x000496bd) field_cale_ev_pane_g1

0xe2b0,	// (0x000496c9) field_cale_ev_pane_g2_ParamLimits

0xe2b0,	// (0x000496c9) field_cale_ev_pane_g2

0xe2c8,	// (0x000496e1) field_cale_ev_pane_g3_ParamLimits

0xe2c8,	// (0x000496e1) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0004ab0f) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0004ab0f) field_cale_ev_pane_g

0xe2e0,	// (0x000496f9) field_cale_ev_pane_t1_ParamLimits

0xe2e0,	// (0x000496f9) field_cale_ev_pane_t1

0xe2f7,	// (0x00049710) field_cale_ev_content_pane_t1_ParamLimits

0xe2f7,	// (0x00049710) field_cale_ev_content_pane_t1

0xcb40,	// (0x00047f59) bg_button_pane_cp01

0x2bc7,	// (0x0003dfe0) listscroll_cale_week_pane_ParamLimits

0xbead,	// (0x000472c6) popup_toolbar_window_cp01

0xbed3,	// (0x000472ec) listscroll_cale_week_pane_t1_ParamLimits

0x2bc7,	// (0x0003dfe0) listscroll_cale_day_pane_ParamLimits

0xbead,	// (0x000472c6) popup_toolbar_window_cp02

0xc2f5,	// (0x0004770e) listscroll_cale_day_pane_t1_ParamLimits

0x2bc7,	// (0x0003dfe0) main_cale_month_pane_ParamLimits

0x563e,	// (0x00040a57) popup_toolbar_window_cp03_ParamLimits

0x563e,	// (0x00040a57) popup_toolbar_window_cp03

0x4f78,	// (0x00040391) main_image_pane_g2_ParamLimits

0x4f78,	// (0x00040391) main_image_pane_g2

0x4f84,	// (0x0004039d) main_image_pane_g3_ParamLimits

0x4f84,	// (0x0004039d) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0004a900) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0004a900) main_image_pane_g

0xcc5a,	// (0x00048073) main_image_pane_t1_ParamLimits

0x4f90,	// (0x000403a9) main_image_pane_t2_ParamLimits

0x4f90,	// (0x000403a9) main_image_pane_t2

0x4fa2,	// (0x000403bb) main_image_pane_t3_ParamLimits

0x4fa2,	// (0x000403bb) main_image_pane_t3

0x4fb4,	// (0x000403cd) main_image_pane_t4_ParamLimits

0x4fb4,	// (0x000403cd) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0004a907) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0004a907) main_image_pane_t

0x4fc6,	// (0x000403df) popup_image_details_window_cp01

0x4fd0,	// (0x000403e9) popup_toobar_trans_pane_cp01_ParamLimits

0x4fd0,	// (0x000403e9) popup_toobar_trans_pane_cp01

0x558e,	// (0x000409a7) popup_image_details_window_ParamLimits

0x558e,	// (0x000409a7) popup_image_details_window

0x559c,	// (0x000409b5) popup_image_focus_window

0x58de,	// (0x00040cf7) camera2_autofocus_pane_ParamLimits

0x58de,	// (0x00040cf7) camera2_autofocus_pane

0xb334,	// (0x0004674d) bg_popup_sub_pane_cp06

0xe315,	// (0x0004972e) popup_image_focus_window_g1

0xe31d,	// (0x00049736) popup_image_focus_window_g2

0xe325,	// (0x0004973e) popup_image_focus_window_g3

0xe32d,	// (0x00049746) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0004ab16) popup_image_focus_window_g

0xe335,	// (0x0004974e) popup_image_focus_window_t1

0xe343,	// (0x0004975c) popup_image_focus_window_t2

0xe353,	// (0x0004976c) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0004ab1f) popup_image_focus_window_t

0xe361,	// (0x0004977a) camera2_autofocus_pane_g1

0xc8c1,	// (0x00047cda) bg_tb_trans_pane_cp01

0xe36f,	// (0x00049788) popup_image_details_window_g1

0xe382,	// (0x0004979b) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0004ab31) popup_image_details_window_g

0xe3ab,	// (0x000497c4) popup_image_details_window_t1

0xe3bd,	// (0x000497d6) popup_image_details_window_t2

0xe3d6,	// (0x000497ef) popup_image_details_window_t3

0xe3ea,	// (0x00049803) popup_image_details_window_t4

0xe405,	// (0x0004981e) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0004ab38) popup_image_details_window_t

0xbd84,	// (0x0004719d) bg_calc_paper_pane_ParamLimits

0xb334,	// (0x0004674d) grid_highlight_pane_cp013

0x295c,	// (0x0003dd75) list_calc_pane_ParamLimits

0x296e,	// (0x0003dd87) scroll_pane_cp024

0xbd98,	// (0x000471b1) bg_calc_display_pane_ParamLimits

0x2976,	// (0x0003dd8f) calc_display_pane_t1_ParamLimits

0x298b,	// (0x0003dda4) calc_display_pane_t2_ParamLimits

0x29a0,	// (0x0003ddb9) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0004a56a) calc_display_pane_t_ParamLimits

0x2a7c,	// (0x0003de95) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0004a587) cell_calc_pane_g

0x2a85,	// (0x0003de9e) cell_calc_pane_t1

0xbdf7,	// (0x00047210) grid_highlight_pane_cp02_ParamLimits

0xbe0d,	// (0x00047226) toolbar_button_pane_cp01_ParamLimits

0xbe0d,	// (0x00047226) toolbar_button_pane_cp01

0xcc9f,	// (0x000480b8) temp_image_control_pane_ParamLimits

0xcc9f,	// (0x000480b8) temp_image_control_pane

0xc8c1,	// (0x00047cda) main_mp3_pane

0xe41f,	// (0x00049838) temp_image_control_pane_g1_ParamLimits

0xe41f,	// (0x00049838) temp_image_control_pane_g1

0xe42d,	// (0x00049846) temp_image_control_pane_g2_ParamLimits

0xe42d,	// (0x00049846) temp_image_control_pane_g2

0xe43f,	// (0x00049858) temp_image_control_pane_g3_ParamLimits

0xe43f,	// (0x00049858) temp_image_control_pane_g3

0x5f38,	// (0x00041351) temp_image_control_pane_g4_ParamLimits

0x5f38,	// (0x00041351) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0004ab43) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0004ab43) temp_image_control_pane_g

0xe41f,	// (0x00049838) main_mp3_pane_g1

0x5f49,	// (0x00041362) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0004ab4c) main_mp3_pane_g

0xe482,	// (0x0004989b) main_mp3_pane_t1

0xbf65,	// (0x0004737e) main_camera_pane_g8_ParamLimits

0xbf65,	// (0x0004737e) main_camera_pane_g8

0x3266,	// (0x0003e67f) main_video_pane_g7_ParamLimits

0x3266,	// (0x0003e67f) main_video_pane_g7

0x5a26,	// (0x00040e3f) main_camera2_pane_t7_ParamLimits

0x5a26,	// (0x00040e3f) main_camera2_pane_t7

0xc0ad,	// (0x000474c6) scroll_pane_cp025_ParamLimits

0xc0ad,	// (0x000474c6) scroll_pane_cp025

0xc0c1,	// (0x000474da) scroll_pane_cp026_ParamLimits

0xc0c1,	// (0x000474da) scroll_pane_cp026

0xc0d0,	// (0x000474e9) wml_content_pane_ParamLimits

0xb334,	// (0x0004674d) main_touch_calib_pane

0x5fed,	// (0x00041406) main_touch_calib_pane_g1

0x5ff9,	// (0x00041412) main_touch_calib_pane_g2

0x6005,	// (0x0004141e) main_touch_calib_pane_g3

0x6011,	// (0x0004142a) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0004ab6a) main_touch_calib_pane_g

0x601d,	// (0x00041436) main_touch_calib_pane_t1

0x6036,	// (0x0004144f) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0004ab73) main_touch_calib_pane_t

0xc852,	// (0x00047c6b) mup_progress_pane_cp02

0xc887,	// (0x00047ca0) navi_pane_g1

0xc95c,	// (0x00047d75) navi_pane_mp_t3

0xc8c1,	// (0x00047cda) main_mp3_pane_ParamLimits

0x567b,	// (0x00040a94) navi_pane_ParamLimits

0xe41f,	// (0x00049838) main_mp3_pane_g1_ParamLimits

0x5f49,	// (0x00041362) main_mp3_pane_g2_ParamLimits

0x5f55,	// (0x0004136e) main_mp3_pane_g3_ParamLimits

0x5f55,	// (0x0004136e) main_mp3_pane_g3

0x5f61,	// (0x0004137a) main_mp3_pane_g4_ParamLimits

0x5f61,	// (0x0004137a) main_mp3_pane_g4

0xe44f,	// (0x00049868) main_mp3_pane_g5_ParamLimits

0xe44f,	// (0x00049868) main_mp3_pane_g5

0xe45d,	// (0x00049876) main_mp3_pane_g6_ParamLimits

0xe45d,	// (0x00049876) main_mp3_pane_g6

0xe46a,	// (0x00049883) main_mp3_pane_g7_ParamLimits

0xe46a,	// (0x00049883) main_mp3_pane_g7

0xe476,	// (0x0004988f) main_mp3_pane_g8_ParamLimits

0xe476,	// (0x0004988f) main_mp3_pane_g8

0xf733,	// (0x0004ab4c) main_mp3_pane_g_ParamLimits

0x5f6d,	// (0x00041386) main_mp3_pane_t2

0x5f7d,	// (0x00041396) main_mp3_pane_t3

0xe490,	// (0x000498a9) main_mp3_pane_t4

0xe49e,	// (0x000498b7) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0004ab5d) main_mp3_pane_t

0xe4ac,	// (0x000498c5) mup_progress_pane_cp01

0x0f6c,	// (0x0003c385) aid_zoom_text_secondary2

0xe25a,	// (0x00049673) list_cale_ev2_pane

0xe262,	// (0x0004967b) scroll_pane_cp023_ParamLimits

0x6091,	// (0x000414aa) field_cale_ev2_pane_ParamLimits

0x6091,	// (0x000414aa) field_cale_ev2_pane

0x1289,	// (0x0003c6a2) field_cale_ev2_pane_g1_ParamLimits

0x1289,	// (0x0003c6a2) field_cale_ev2_pane_g1

0x1295,	// (0x0003c6ae) field_cale_ev2_pane_g2_ParamLimits

0x1295,	// (0x0003c6ae) field_cale_ev2_pane_g2

0x12ad,	// (0x0003c6c6) field_cale_ev2_pane_g3_ParamLimits

0x12ad,	// (0x0003c6c6) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0004ab7e) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0004ab7e) field_cale_ev2_pane_g

0x12d1,	// (0x0003c6ea) field_cale_ev2_pane_t1_ParamLimits

0x12d1,	// (0x0003c6ea) field_cale_ev2_pane_t1

0x12e8,	// (0x0003c701) field_cale_ev2_pane_t2_ParamLimits

0x12e8,	// (0x0003c701) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0004ab87) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0004ab87) field_cale_ev2_pane_t

0x4e58,	// (0x00040271) main_postcard_pane_g5_ParamLimits

0x4e58,	// (0x00040271) main_postcard_pane_g5

0x4e66,	// (0x0004027f) main_postcard_pane_g6_ParamLimits

0x4e66,	// (0x0004027f) main_postcard_pane_g6

0x30b0,	// (0x0003e4c9) camera2_autofocus_pane_cp_ParamLimits

0x30b0,	// (0x0003e4c9) camera2_autofocus_pane_cp

0xc8c1,	// (0x00047cda) main_mup3_pane

0x60d9,	// (0x000414f2) main_mup3_pane_g1_ParamLimits

0x60d9,	// (0x000414f2) main_mup3_pane_g1

0x60fa,	// (0x00041513) main_mup3_pane_g2_ParamLimits

0x60fa,	// (0x00041513) main_mup3_pane_g2

0x6172,	// (0x0004158b) main_mup3_pane_g3_ParamLimits

0x6172,	// (0x0004158b) main_mup3_pane_g3

0x61b5,	// (0x000415ce) main_mup3_pane_g4_ParamLimits

0x61b5,	// (0x000415ce) main_mup3_pane_g4

0x61f8,	// (0x00041611) main_mup3_pane_g5_ParamLimits

0x61f8,	// (0x00041611) main_mup3_pane_g5

0x623b,	// (0x00041654) main_mup3_pane_g6_ParamLimits

0x623b,	// (0x00041654) main_mup3_pane_g6

0xe4d4,	// (0x000498ed) main_mup3_pane_g7_ParamLimits

0xe4d4,	// (0x000498ed) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0004ab97) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0004ab97) main_mup3_pane_g

0x62b1,	// (0x000416ca) main_mup3_pane_t1_ParamLimits

0x62b1,	// (0x000416ca) main_mup3_pane_t1

0x6320,	// (0x00041739) main_mup3_pane_t2_ParamLimits

0x6320,	// (0x00041739) main_mup3_pane_t2

0x63e9,	// (0x00041802) main_mup3_pane_t4_ParamLimits

0x63e9,	// (0x00041802) main_mup3_pane_t4

0x6437,	// (0x00041850) main_mup3_pane_t5_ParamLimits

0x6437,	// (0x00041850) main_mup3_pane_t5

0x64e7,	// (0x00041900) main_mup3_pane_t6_ParamLimits

0x64e7,	// (0x00041900) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0004aba8) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0004aba8) main_mup3_pane_t

0x6593,	// (0x000419ac) mup3_progress_pane_ParamLimits

0x6593,	// (0x000419ac) mup3_progress_pane

0x6611,	// (0x00041a2a) popup_mup3_control_window_ParamLimits

0x6611,	// (0x00041a2a) popup_mup3_control_window

0xe4e2,	// (0x000498fb) popup_mup3_text_window

0x662a,	// (0x00041a43) mup3_progress_pane_t1

0x6649,	// (0x00041a62) mup3_progress_pane_t2

0xe4ea,	// (0x00049903) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0004abb5) mup3_progress_pane_t

0xe507,	// (0x00049920) mup_progress_pane_cp03

0xb334,	// (0x0004674d) bg_tb_trans_pane_cp04

0x6668,	// (0x00041a81) mup3_volume_pane

0x6670,	// (0x00041a89) popup_mup3_control_window_g1

0x6679,	// (0x00041a92) mup3_volume_pane_g1

0x6682,	// (0x00041a9b) mup3_volume_pane_g2

0x668b,	// (0x00041aa4) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0004abbc) mup3_volume_pane_g

0xb334,	// (0x0004674d) bg_tb_trans_pane_cp03

0xe517,	// (0x00049930) popup_mup3_text_window_g1

0xe51f,	// (0x00049938) popup_mup3_text_window_t1

0xbde0,	// (0x000471f9) list_calc_item_pane_g1_ParamLimits

0xdf2a,	// (0x00049343) mup_volume_pane_cp_g1

0x604f,	// (0x00041468) main_touch_calib_pane_t3

0x6065,	// (0x0004147e) main_touch_calib_pane_t4

0x607b,	// (0x00041494) main_touch_calib_pane_t5

0x233e,	// (0x0003d757) aid_cell_size_toolbar2

0x2346,	// (0x0003d75f) aid_popup3_width_pane

0x0f64,	// (0x0003c37d) aid_zoom_text_msg_primary

0x3085,	// (0x0003e49e) vorec_t7

0xbda4,	// (0x000471bd) bg_calc_paper_pane_g1_ParamLimits

0xbdb0,	// (0x000471c9) bg_calc_paper_pane_g2_ParamLimits

0xbdbc,	// (0x000471d5) bg_calc_paper_pane_g3_ParamLimits

0xbdc8,	// (0x000471e1) bg_calc_paper_pane_g4_ParamLimits

0xbdd4,	// (0x000471ed) bg_calc_paper_pane_g5_ParamLimits

0x29df,	// (0x0003ddf8) bg_calc_paper_pane_g6_ParamLimits

0x29f0,	// (0x0003de09) bg_calc_paper_pane_g7_ParamLimits

0x2a01,	// (0x0003de1a) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0004a571) bg_calc_paper_pane_g_ParamLimits

0x2a12,	// (0x0003de2b) calc_bg_paper_pane_g9_ParamLimits

0x3197,	// (0x0003e5b0) image_qvga_pane_ParamLimits

0x3197,	// (0x0003e5b0) image_qvga_pane

0xbcd3,	// (0x000470ec) bg_popup_sub_pane_cp04_ParamLimits

0xcbd6,	// (0x00047fef) popup_mup_playback_window_g1_ParamLimits

0xcbe2,	// (0x00047ffb) popup_mup_playback_window_t1_ParamLimits

0xcbf7,	// (0x00048010) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0004a8fb) popup_mup_playback_window_t_ParamLimits

0x5b55,	// (0x00040f6e) main_mup2_pane_g3_ParamLimits

0x5b55,	// (0x00040f6e) main_mup2_pane_g3

0x344f,	// (0x0003e868) popup_toolbar_window_cp04

0xcfd9,	// (0x000483f2) popup_call2_audio_second_window_g3_ParamLimits

0xcfd9,	// (0x000483f2) popup_call2_audio_second_window_g3

0xd3e3,	// (0x000487fc) popup_call2_audio_first_window_g4_ParamLimits

0xd3e3,	// (0x000487fc) popup_call2_audio_first_window_g4

0xda62,	// (0x00048e7b) popup_call2_audio_in_window_g4_ParamLimits

0xda62,	// (0x00048e7b) popup_call2_audio_in_window_g4

0x4f6b,	// (0x00040384) aid_area_sk_bg_cut_ParamLimits

0x4f6b,	// (0x00040384) aid_area_sk_bg_cut

0xcc0c,	// (0x00048025) aid_area_sk_bg_cut_2_ParamLimits

0xcc0c,	// (0x00048025) aid_area_sk_bg_cut_2

0x5ede,	// (0x000412f7) aid_placing_details_win

0x5ee6,	// (0x000412ff) aid_placing_details_win_2

0xe361,	// (0x0004977a) camera2_autofocus_pane_g1_ParamLimits

0x2595,	// (0x0003d9ae) popup_fixed_preview_cale_window_ParamLimits

0x2595,	// (0x0003d9ae) popup_fixed_preview_cale_window

0xc9e8,	// (0x00047e01) navi_slider_pane_g3

0xc9f1,	// (0x00047e0a) navi_slider_pane_g4

0xc9fa,	// (0x00047e13) navi_slider_pane_g5

0xc9e8,	// (0x00047e01) navi_slider_pane_g6

0x48a7,	// (0x0003fcc0) navi_slider_pane_g7

0xcb0d,	// (0x00047f26) mup_scale_pane_g3

0xcb16,	// (0x00047f2f) mup_scale_pane_g4

0xcb1f,	// (0x00047f38) mup_scale_pane_g5

0x4ce8,	// (0x00040101) mup_scale_pane_g6

0x4cf1,	// (0x0004010a) mup_scale_pane_g7

0xc9e8,	// (0x00047e01) cams2_slider_pane_g3

0xdfac,	// (0x000493c5) cams2_slider_pane_g4

0x5e36,	// (0x0004124f) cams2_slider_pane_g5

0xc9e8,	// (0x00047e01) cams2_slider_pane_g6

0x5e3e,	// (0x00041257) cams2_slider_pane_g7

0xe1e0,	// (0x000495f9) camera2_autofocus_pane_cp_g1

0xddc3,	// (0x000491dc) bg_popup_preview_window_pane_cp02_ParamLimits

0xddc3,	// (0x000491dc) bg_popup_preview_window_pane_cp02

0xe52d,	// (0x00049946) list_fp_cale_pane_ParamLimits

0xe52d,	// (0x00049946) list_fp_cale_pane

0xe539,	// (0x00049952) popup_fixed_preview_cale_window_t1_ParamLimits

0xe539,	// (0x00049952) popup_fixed_preview_cale_window_t1

0x6694,	// (0x00041aad) popup_fixed_preview_cale_window_t2_ParamLimits

0x6694,	// (0x00041aad) popup_fixed_preview_cale_window_t2

0x66a9,	// (0x00041ac2) popup_fixed_preview_cale_window_t3_ParamLimits

0x66a9,	// (0x00041ac2) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0004abc3) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0004abc3) popup_fixed_preview_cale_window_t

0x66be,	// (0x00041ad7) list_single_fp_cale_pane_ParamLimits

0x66be,	// (0x00041ad7) list_single_fp_cale_pane

0xe557,	// (0x00049970) list_single_fp_cale_pane_g1_ParamLimits

0xe557,	// (0x00049970) list_single_fp_cale_pane_g1

0xe563,	// (0x0004997c) list_single_fp_cale_pane_g2_ParamLimits

0xe563,	// (0x0004997c) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0004abca) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0004abca) list_single_fp_cale_pane_g

0xe57c,	// (0x00049995) list_single_fp_cale_pane_t1_ParamLimits

0xe57c,	// (0x00049995) list_single_fp_cale_pane_t1

0xe58e,	// (0x000499a7) list_single_fp_cale_pane_t2_ParamLimits

0xe58e,	// (0x000499a7) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0004abd1) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0004abd1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb334,	// (0x0004674d) main_dialer_pane

0x66d1,	// (0x00041aea) aid_cell_size_keypad

0x66db,	// (0x00041af4) dialer_ne_pane

0x66e5,	// (0x00041afe) grid_dialer_command_1_pane

0x66ed,	// (0x00041b06) grid_dialer_command_2_pane

0x66f5,	// (0x00041b0e) grid_dialer_keypad_pane

0x6707,	// (0x00041b20) bg_popup_call_pane_cp06_ParamLimits

0x6707,	// (0x00041b20) bg_popup_call_pane_cp06

0x6713,	// (0x00041b2c) dialer_ne_clear_pane_ParamLimits

0x6713,	// (0x00041b2c) dialer_ne_clear_pane

0xe5c1,	// (0x000499da) dialer_ne_pane_g1

0xe5c9,	// (0x000499e2) dialer_ne_pane_t1_ParamLimits

0xe5c9,	// (0x000499e2) dialer_ne_pane_t1

0x671f,	// (0x00041b38) dialer_ne_pane_t2_ParamLimits

0x671f,	// (0x00041b38) dialer_ne_pane_t2

0x673c,	// (0x00041b55) dialer_ne_pane_t3_ParamLimits

0x673c,	// (0x00041b55) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0004abd6) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0004abd6) dialer_ne_pane_t

0x6760,	// (0x00041b79) dialer_ne_pane_t3_copy1_ParamLimits

0x6760,	// (0x00041b79) dialer_ne_pane_t3_copy1

0x6784,	// (0x00041b9d) cell_dialer_keypad_pane_ParamLimits

0x6784,	// (0x00041b9d) cell_dialer_keypad_pane

0x679b,	// (0x00041bb4) cell_dialer_command_1_pane_ParamLimits

0x679b,	// (0x00041bb4) cell_dialer_command_1_pane

0x67b1,	// (0x00041bca) cell_dialer_command_2_pane_ParamLimits

0x67b1,	// (0x00041bca) cell_dialer_command_2_pane

0xe5db,	// (0x000499f4) bg_button_pane_cp02_ParamLimits

0xe5db,	// (0x000499f4) bg_button_pane_cp02

0x67c0,	// (0x00041bd9) cell_dialer_keypad_pane_g1_ParamLimits

0x67c0,	// (0x00041bd9) cell_dialer_keypad_pane_g1

0xe5db,	// (0x000499f4) bg_button_pane_cp03_ParamLimits

0xe5db,	// (0x000499f4) bg_button_pane_cp03

0x67d5,	// (0x00041bee) cell_dialer_command_1_pane_g1_ParamLimits

0x67d5,	// (0x00041bee) cell_dialer_command_1_pane_g1

0xe5e7,	// (0x00049a00) bg_button_pane_cp04

0x67e9,	// (0x00041c02) cell_dialer_command_2_pane_g1

0xbf5d,	// (0x00047376) bg_button_pane_cp06

0xe5ef,	// (0x00049a08) dialer_ne_clear_pane_g1

0xc893,	// (0x00047cac) navi_pane_g2

0xc8db,	// (0x00047cf4) navi_pane_g3

0x0002,

0xf3e5,	// (0x0004a7fe) navi_pane_g

0xc96a,	// (0x00047d83) navi_pane_mv_g2

0xc991,	// (0x00047daa) navi_pane_mv_g5

0x4872,	// (0x0003fc8b) navi_pane_mv_t1

0xbd98,	// (0x000471b1) main_clock2_pane

0x6829,	// (0x00041c42) main_clock2_list_pane_ParamLimits

0x6829,	// (0x00041c42) main_clock2_list_pane

0x6851,	// (0x00041c6a) main_clock2_pane_t1_ParamLimits

0x6851,	// (0x00041c6a) main_clock2_pane_t1

0x6873,	// (0x00041c8c) main_clock2_pane_t2_ParamLimits

0x6873,	// (0x00041c8c) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0004abe2) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0004abe2) main_clock2_pane_t

0x68ce,	// (0x00041ce7) popup_clock_analogue_window_cp03_ParamLimits

0x68ce,	// (0x00041ce7) popup_clock_analogue_window_cp03

0x68ec,	// (0x00041d05) popup_clock_digital_window_cp02_ParamLimits

0x68ec,	// (0x00041d05) popup_clock_digital_window_cp02

0x6959,	// (0x00041d72) main_clock2_list_single_pane_ParamLimits

0x6959,	// (0x00041d72) main_clock2_list_single_pane

0xbf5d,	// (0x00047376) list_highlight_pane_cp05

0xe62d,	// (0x00049a46) main_clock2_list_single_pane_t1

0x344f,	// (0x0003e868) popup_toolbar_window_cp04_ParamLimits

0x5f08,	// (0x00041321) camera2_autofocus_pane_g2_ParamLimits

0x5f08,	// (0x00041321) camera2_autofocus_pane_g2

0x5f14,	// (0x0004132d) camera2_autofocus_pane_g3_ParamLimits

0x5f14,	// (0x0004132d) camera2_autofocus_pane_g3

0x5f20,	// (0x00041339) camera2_autofocus_pane_g4_ParamLimits

0x5f20,	// (0x00041339) camera2_autofocus_pane_g4

0x5f2c,	// (0x00041345) camera2_autofocus_pane_g5_ParamLimits

0x5f2c,	// (0x00041345) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0004ab26) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0004ab26) camera2_autofocus_pane_g

0xe4b4,	// (0x000498cd) camera2_autofocus_pane_cp_g2

0xe4bc,	// (0x000498d5) camera2_autofocus_pane_cp_g3

0xe4c4,	// (0x000498dd) camera2_autofocus_pane_cp_g4

0xe4cc,	// (0x000498e5) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0004ab8c) camera2_autofocus_pane_cp_g

0x66ff,	// (0x00041b18) popup_dialer_spcha_window

0xb334,	// (0x0004674d) bg_popup_sub_pane_cp07

0xe63b,	// (0x00049a54) list_spcha_pane

0xe643,	// (0x00049a5c) list_single_spcha_pane_ParamLimits

0xe643,	// (0x00049a5c) list_single_spcha_pane

0xb334,	// (0x0004674d) list_highlight_pane_cp06

0xe654,	// (0x00049a6d) list_single_spcha_pane_t1

0xd80c,	// (0x00048c25) popup_call2_audio_out_window_g4_ParamLimits

0xd80c,	// (0x00048c25) popup_call2_audio_out_window_g4

0xb334,	// (0x0004674d) main_imed2_pane

0x55a4,	// (0x000409bd) popup_imed_adjust2_window

0x55b7,	// (0x000409d0) popup_imed_trans_window_ParamLimits

0x55b7,	// (0x000409d0) popup_imed_trans_window

0xe015,	// (0x0004942e) popup_blid_sat_info2_window_t1

0xe023,	// (0x0004943c) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0004aabb) popup_blid_sat_info2_window_t

0x6a02,	// (0x00041e1b) aid_size_cell_colour_35

0x6a1c,	// (0x00041e35) aid_size_cell_colour_112

0x6a33,	// (0x00041e4c) aid_size_cell_effect

0xc8c1,	// (0x00047cda) bg_tb_trans_pane_cp02

0xc8cf,	// (0x00047ce8) heading_imed_pane

0x6a4d,	// (0x00041e66) listscroll_imed_pane

0xe662,	// (0x00049a7b) heading_imed_pane_g1

0xe66a,	// (0x00049a83) heading_imed_pane_t1

0xe678,	// (0x00049a91) grid_imed_colour_35_pane_ParamLimits

0xe678,	// (0x00049a91) grid_imed_colour_35_pane

0x6a59,	// (0x00041e72) grid_imed_effect_pane

0xe68f,	// (0x00049aa8) list_imed_aspect_pane

0x6a69,	// (0x00041e82) scroll_pane_cp027_ParamLimits

0x6a69,	// (0x00041e82) scroll_pane_cp027

0x6a75,	// (0x00041e8e) cell_imed_effect_pane_ParamLimits

0x6a75,	// (0x00041e8e) cell_imed_effect_pane

0xe697,	// (0x00049ab0) cell_imed_colour_pane_ParamLimits

0xe697,	// (0x00049ab0) cell_imed_colour_pane

0xe6d9,	// (0x00049af2) cell_imed_colour_pane_g1_ParamLimits

0xe6d9,	// (0x00049af2) cell_imed_colour_pane_g1

0xe6ea,	// (0x00049b03) hgihlgiht_grid_pane_cp016_ParamLimits

0xe6ea,	// (0x00049b03) hgihlgiht_grid_pane_cp016

0x6a8d,	// (0x00041ea6) cell_imed_effect_pane_g1

0x6a95,	// (0x00041eae) grid_highlight_pane_cp017

0xe6fb,	// (0x00049b14) list_imed_single_pane_ParamLimits

0xe6fb,	// (0x00049b14) list_imed_single_pane

0xb334,	// (0x0004674d) list_highlight_pane_cp07

0xe710,	// (0x00049b29) list_imed_aspect_pane_comp1_t1

0xddcf,	// (0x000491e8) bg_tb_trans_pane_cp05

0xe732,	// (0x00049b4b) popup_imed_adjust2_window_g1

0xe759,	// (0x00049b72) popup_imed_adjust2_window_t1

0xe771,	// (0x00049b8a) slider_imed_adjust_pane

0xe785,	// (0x00049b9e) slider_imed_adjust_pane_g1

0xe795,	// (0x00049bae) slider_imed_adjust_pane_g2

0xe7a5,	// (0x00049bbe) slider_imed_adjust_pane_g3

0xe7b6,	// (0x00049bcf) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0004abff) slider_imed_adjust_pane_g

0x6a9e,	// (0x00041eb7) aid_size_cell_clipart2

0x6aaa,	// (0x00041ec3) grid_imed_clipart_pane

0xe7c7,	// (0x00049be0) scroll_pane_cp031

0x6ab4,	// (0x00041ecd) cell_imed_clipart_pane_ParamLimits

0x6ab4,	// (0x00041ecd) cell_imed_clipart_pane

0x6ad6,	// (0x00041eef) cell_imed_clipart_pane_g1

0xb334,	// (0x0004674d) grid_highlight_pane_cp014

0x6835,	// (0x00041c4e) main_clock2_pane_g1_ParamLimits

0x6835,	// (0x00041c4e) main_clock2_pane_g1

0x6904,	// (0x00041d1d) aid_call2_pane_cp10

0x6916,	// (0x00041d2f) aid_call_pane_cp10

0xc7f4,	// (0x00047c0d) popup_clock_analogue_window_cp10_g1

0xc7f4,	// (0x00047c0d) popup_clock_analogue_window_cp10_g2

0x6928,	// (0x00041d41) popup_clock_analogue_window_cp10_g3

0x6928,	// (0x00041d41) popup_clock_analogue_window_cp10_g4

0xc7f4,	// (0x00047c0d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0004abed) popup_clock_analogue_window_cp10_g

0x693a,	// (0x00041d53) popup_clock_analogue_window_cp10_t1

0x696b,	// (0x00041d84) clock_digital_number_pane_cp10_ParamLimits

0x696b,	// (0x00041d84) clock_digital_number_pane_cp10

0x6983,	// (0x00041d9c) clock_digital_number_pane_cp11_ParamLimits

0x6983,	// (0x00041d9c) clock_digital_number_pane_cp11

0x699b,	// (0x00041db4) clock_digital_number_pane_cp12_ParamLimits

0x699b,	// (0x00041db4) clock_digital_number_pane_cp12

0x69b3,	// (0x00041dcc) clock_digital_number_pane_cp13_ParamLimits

0x69b3,	// (0x00041dcc) clock_digital_number_pane_cp13

0x69cb,	// (0x00041de4) clock_digital_separator_pane_cp10_ParamLimits

0x69cb,	// (0x00041de4) clock_digital_separator_pane_cp10

0x69e3,	// (0x00041dfc) popup_clock_digital_window_cp02_t1_ParamLimits

0x69e3,	// (0x00041dfc) popup_clock_digital_window_cp02_t1

0xbccb,	// (0x000470e4) clock_digital_number_pane_cp10_g1

0xbccb,	// (0x000470e4) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0004ac08) clock_digital_number_pane_cp10_g

0xbccb,	// (0x000470e4) clock_digital_separator_pane_cp10_g1

0xbccb,	// (0x000470e4) clock_digital_separator_pane_g2_cp10

0xc999,	// (0x00047db2) navi_pane_vded_g4

0xc9a2,	// (0x00047dbb) navi_pane_vded_g5

0xc9ab,	// (0x00047dc4) navi_pane_vded_t1

0xb334,	// (0x0004674d) main_vded_pane

0x6adf,	// (0x00041ef8) main_vded_pane_g1

0x6aeb,	// (0x00041f04) main_vded_pane_g2

0x6af5,	// (0x00041f0e) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0004ac0d) main_vded_pane_g

0x6aff,	// (0x00041f18) main_vded_pane_t1

0x6b0d,	// (0x00041f26) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0004ac14) main_vded_pane_t

0x6b1b,	// (0x00041f34) vded_slider_pane

0x6b25,	// (0x00041f3e) vded_video_pane

0xe7cf,	// (0x00049be8) vded_video_pane_g1

0x6b2f,	// (0x00041f48) vded_video_pane_g2

0xe1e0,	// (0x000495f9) vded_video_pane_g3

0x0002,

0xf800,	// (0x0004ac19) vded_video_pane_g

0xe7d9,	// (0x00049bf2) vded_slider_pane_g1

0xdf2a,	// (0x00049343) vded_slider_pane_g2

0xe7e2,	// (0x00049bfb) vded_slider_pane_g3

0xe7eb,	// (0x00049c04) vded_slider_pane_g4

0xe7f4,	// (0x00049c0d) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0004ac20) vded_slider_pane_g

0x6603,	// (0x00041a1c) mup3_rocker_pane_ParamLimits

0x6603,	// (0x00041a1c) mup3_rocker_pane

0x6b38,	// (0x00041f51) mup3_control_keys_pane_g1

0x6b40,	// (0x00041f59) mup3_control_keys_pane_g2

0x6b48,	// (0x00041f61) mup3_control_keys_pane_g3

0x6b50,	// (0x00041f69) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0004ac2b) mup3_control_keys_pane_g

0x25bd,	// (0x0003d9d6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x25bd,	// (0x0003d9d6) popup_toolbar2_fixed_window_cp01

0x661d,	// (0x00041a36) popup_toolbar2_fixed_window_cp02_ParamLimits

0x661d,	// (0x00041a36) popup_toolbar2_fixed_window_cp02

0xd14b,	// (0x00048564) popup_call2_audio_second_window_t4_ParamLimits

0xd14b,	// (0x00048564) popup_call2_audio_second_window_t4

0xd679,	// (0x00048a92) popup_call2_audio_first_window_t6_ParamLimits

0xd679,	// (0x00048a92) popup_call2_audio_first_window_t6

0xd90f,	// (0x00048d28) popup_call2_audio_out_window_t6_ParamLimits

0xd90f,	// (0x00048d28) popup_call2_audio_out_window_t6

0xb334,	// (0x0004674d) main_vitu_pane

0x6b60,	// (0x00041f79) aid_size_cell_itu_ParamLimits

0x6b60,	// (0x00041f79) aid_size_cell_itu

0xeea3,	// (0x0004a2bc) bg_popup_window_pane_cp08_ParamLimits

0xeea3,	// (0x0004a2bc) bg_popup_window_pane_cp08

0x6b6e,	// (0x00041f87) field_vitu_entry_pane_ParamLimits

0x6b6e,	// (0x00041f87) field_vitu_entry_pane

0x6b7d,	// (0x00041f96) grid_vitu_function_pane_ParamLimits

0x6b7d,	// (0x00041f96) grid_vitu_function_pane

0x6b8d,	// (0x00041fa6) grid_vitu_itu_pane_ParamLimits

0x6b8d,	// (0x00041fa6) grid_vitu_itu_pane

0x6b9d,	// (0x00041fb6) cell_vitu_itu_pane_ParamLimits

0x6b9d,	// (0x00041fb6) cell_vitu_itu_pane

0x6bb2,	// (0x00041fcb) cell_vitu_function_pane_ParamLimits

0x6bb2,	// (0x00041fcb) cell_vitu_function_pane

0xc8c1,	// (0x00047cda) bg_popup_sub_pane_cp08_ParamLimits

0xc8c1,	// (0x00047cda) bg_popup_sub_pane_cp08

0x6bc4,	// (0x00041fdd) field_vitu_entry_pane_t1_ParamLimits

0x6bc4,	// (0x00041fdd) field_vitu_entry_pane_t1

0xe815,	// (0x00049c2e) field_vitu_entry_pane_t2_ParamLimits

0xe815,	// (0x00049c2e) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0004ac39) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0004ac39) field_vitu_entry_pane_t

0xe832,	// (0x00049c4b) bg_button_pane_cp05_ParamLimits

0xe832,	// (0x00049c4b) bg_button_pane_cp05

0x6be0,	// (0x00041ff9) cell_vitu_itu_pane_g1

0x6bf8,	// (0x00042011) cell_vitu_itu_pane_t1_ParamLimits

0x6bf8,	// (0x00042011) cell_vitu_itu_pane_t1

0x6c0a,	// (0x00042023) cell_vitu_itu_pane_t2_ParamLimits

0x6c0a,	// (0x00042023) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0004ac3e) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0004ac3e) cell_vitu_itu_pane_t

0xe840,	// (0x00049c59) bg_button_pane_cp07

0x6c3f,	// (0x00042058) cell_vitu_function_pane_g1

0x2883,	// (0x0003dc9c) main_calc_pane_g1

0x237a,	// (0x0003d793) aid_visual_content_pane

0xb334,	// (0x0004674d) main_vradio_pane

0x6c48,	// (0x00042061) main_vradio_pane_g1_ParamLimits

0x6c48,	// (0x00042061) main_vradio_pane_g1

0xe84a,	// (0x00049c63) main_vradio_pane_g2_ParamLimits

0xe84a,	// (0x00049c63) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0004ac45) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0004ac45) main_vradio_pane_g

0x6c58,	// (0x00042071) main_vradio_pane_t1_ParamLimits

0x6c58,	// (0x00042071) main_vradio_pane_t1

0x6c6a,	// (0x00042083) main_vradio_pane_t2_ParamLimits

0x6c6a,	// (0x00042083) main_vradio_pane_t2

0xe857,	// (0x00049c70) main_vradio_pane_t3_ParamLimits

0xe857,	// (0x00049c70) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0004ac4a) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0004ac4a) main_vradio_pane_t

0x6c7c,	// (0x00042095) vradio_rocker_control_pane_ParamLimits

0x6c7c,	// (0x00042095) vradio_rocker_control_pane

0x6c88,	// (0x000420a1) vradio_station_info_pane_ParamLimits

0x6c88,	// (0x000420a1) vradio_station_info_pane

0xe86b,	// (0x00049c84) vradio_frequency_info_pane_ParamLimits

0xe86b,	// (0x00049c84) vradio_frequency_info_pane

0xe1e0,	// (0x000495f9) vradio_station_info_pane_g1

0xe87a,	// (0x00049c93) vradio_station_info_pane_t1_ParamLimits

0xe87a,	// (0x00049c93) vradio_station_info_pane_t1

0xe89c,	// (0x00049cb5) vradio_station_info_pane_t2_ParamLimits

0xe89c,	// (0x00049cb5) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0004ac51) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0004ac51) vradio_station_info_pane_t

0xe8ae,	// (0x00049cc7) vradio_tuning_pane

0xe8b6,	// (0x00049ccf) vradio_rocker_control_pane_g1

0xe8be,	// (0x00049cd7) vradio_rocker_control_pane_g2

0xe8c6,	// (0x00049cdf) vradio_rocker_control_pane_g3

0xe8ce,	// (0x00049ce7) vradio_rocker_control_pane_g4

0xe8d6,	// (0x00049cef) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0004ac56) vradio_rocker_control_pane_g

0x6c97,	// (0x000420b0) vradio_frequency_info_pane_g1

0xe8de,	// (0x00049cf7) vradio_frequency_info_pane_t1_ParamLimits

0xe8de,	// (0x00049cf7) vradio_frequency_info_pane_t1

0x6ca1,	// (0x000420ba) vradio_tuning_pane_g1

0x6caa,	// (0x000420c3) vradio_tuning_pane_t1

0x23c3,	// (0x0003d7dc) area_side_right_pane_ParamLimits

0x23c3,	// (0x0003d7dc) area_side_right_pane

0xdd8a,	// (0x000491a3) status_small_pane_g1

0xdd92,	// (0x000491ab) status_small_pane_g2

0xdd9b,	// (0x000491b4) status_small_pane_g3

0xdda4,	// (0x000491bd) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0004aa11) status_small_pane_g

0xddad,	// (0x000491c6) status_small_pane_t1

0xb334,	// (0x0004674d) main_video3_pane

0xe8f2,	// (0x00049d0b) cams_zoom_vslider_pane

0xe8fa,	// (0x00049d13) image3_wide_pane_ParamLimits

0xe8fa,	// (0x00049d13) image3_wide_pane

0xe914,	// (0x00049d2d) image3_wide_small_pane

0xe920,	// (0x00049d39) main_video3_pane_g1_ParamLimits

0xe920,	// (0x00049d39) main_video3_pane_g1

0xe93c,	// (0x00049d55) main_video3_pane_g2_ParamLimits

0xe93c,	// (0x00049d55) main_video3_pane_g2

0x0001,

0xf848,	// (0x0004ac61) main_video3_pane_g_ParamLimits

0xf848,	// (0x0004ac61) main_video3_pane_g

0xe958,	// (0x00049d71) main_video3_pane_t1_ParamLimits

0xe958,	// (0x00049d71) main_video3_pane_t1

0xe983,	// (0x00049d9c) main_video3_pane_t2_ParamLimits

0xe983,	// (0x00049d9c) main_video3_pane_t2

0xe9ae,	// (0x00049dc7) main_video3_pane_t3_ParamLimits

0xe9ae,	// (0x00049dc7) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0004ac66) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0004ac66) main_video3_pane_t

0xe9db,	// (0x00049df4) cams_zoom_vslider_pane_g1

0xe9e4,	// (0x00049dfd) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0004ac6d) cams_zoom_vslider_pane_g

0xe9ec,	// (0x00049e05) small_slider_vertical_pane

0xe1e0,	// (0x000495f9) small_slider_vertical_pane_g1

0xe1e0,	// (0x000495f9) small_slider_vertical_pane_g2

0xe9f4,	// (0x00049e0d) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0004ac72) small_slider_vertical_pane_g

0xb334,	// (0x0004674d) main_hwr_training_pane

0xe9fd,	// (0x00049e16) hwr_training_instruct_pane_ParamLimits

0xe9fd,	// (0x00049e16) hwr_training_instruct_pane

0x6cb9,	// (0x000420d2) hwr_training_navi_pane_ParamLimits

0x6cb9,	// (0x000420d2) hwr_training_navi_pane

0x6cd3,	// (0x000420ec) hwr_training_write_pane_ParamLimits

0x6cd3,	// (0x000420ec) hwr_training_write_pane

0xb334,	// (0x0004674d) bg_frame_shadow_pane

0xea34,	// (0x00049e4d) hwr_training_write_pane_g1

0xea3c,	// (0x00049e55) hwr_training_write_pane_g2

0xea44,	// (0x00049e5d) hwr_training_write_pane_g3

0xea4c,	// (0x00049e65) hwr_training_write_pane_g4

0xea54,	// (0x00049e6d) hwr_training_write_pane_g5

0xea5c,	// (0x00049e75) hwr_training_write_pane_g6

0xea64,	// (0x00049e7d) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0004ac79) hwr_training_write_pane_g

0x6d0b,	// (0x00042124) hwr_training_navi_pane_g1_ParamLimits

0x6d0b,	// (0x00042124) hwr_training_navi_pane_g1

0x6d1d,	// (0x00042136) hwr_training_navi_pane_g2_ParamLimits

0x6d1d,	// (0x00042136) hwr_training_navi_pane_g2

0x6d2f,	// (0x00042148) hwr_training_navi_pane_g3_ParamLimits

0x6d2f,	// (0x00042148) hwr_training_navi_pane_g3

0x6d3f,	// (0x00042158) hwr_training_navi_pane_g4_ParamLimits

0x6d3f,	// (0x00042158) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0004ac88) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0004ac88) hwr_training_navi_pane_g

0x6d59,	// (0x00042172) hwr_training_navi_pane_t1

0x6d67,	// (0x00042180) list_single_hwr_training_instruct_pane_ParamLimits

0x6d67,	// (0x00042180) list_single_hwr_training_instruct_pane

0xea6c,	// (0x00049e85) list_single_hwr_training_instruct_pane_t1

0xe117,	// (0x00049530) bg_frame_shadow_pane_g1

0xea7b,	// (0x00049e94) bg_frame_shadow_pane_g2

0xea83,	// (0x00049e9c) bg_frame_shadow_pane_g3

0xea8b,	// (0x00049ea4) bg_frame_shadow_pane_g4

0xea93,	// (0x00049eac) bg_frame_shadow_pane_g5

0xea9b,	// (0x00049eb4) bg_frame_shadow_pane_g6

0xeaa3,	// (0x00049ebc) bg_frame_shadow_pane_g7

0xbe51,	// (0x0004726a) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0004ac93) bg_frame_shadow_pane_g

0xb334,	// (0x0004674d) main_video_tele_dialer_pane

0x6d8c,	// (0x000421a5) aid_size_cell_video_keypad_ParamLimits

0x6d8c,	// (0x000421a5) aid_size_cell_video_keypad

0x6d9c,	// (0x000421b5) grid_video_dialer_keypad_pane_ParamLimits

0x6d9c,	// (0x000421b5) grid_video_dialer_keypad_pane

0x6dd0,	// (0x000421e9) video_down_pane_cp_ParamLimits

0x6dd0,	// (0x000421e9) video_down_pane_cp

0x6dfa,	// (0x00042213) cell_video_dialer_keypad_pane_ParamLimits

0x6dfa,	// (0x00042213) cell_video_dialer_keypad_pane

0xeaab,	// (0x00049ec4) bg_button_pane_cp08_ParamLimits

0xeaab,	// (0x00049ec4) bg_button_pane_cp08

0x6e0f,	// (0x00042228) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6e0f,	// (0x00042228) cell_video_dialer_keypad_pane_g1

0x65f7,	// (0x00041a10) mup3_rocker2_pane_ParamLimits

0x65f7,	// (0x00041a10) mup3_rocker2_pane

0xe1e0,	// (0x000495f9) mup3_rocker2_pane_g1

0x5514,	// (0x0004092d) main_dialer2_pane

0xb334,	// (0x0004674d) main_mp4_pane

0x6e4e,	// (0x00042267) main_mp4_pane_g1_ParamLimits

0x6e4e,	// (0x00042267) main_mp4_pane_g1

0x6e5c,	// (0x00042275) main_mp4_pane_g2_ParamLimits

0x6e5c,	// (0x00042275) main_mp4_pane_g2

0x6e6a,	// (0x00042283) main_mp4_pane_g3_ParamLimits

0x6e6a,	// (0x00042283) main_mp4_pane_g3

0x6eaf,	// (0x000422c8) main_mp4_pane_g4_ParamLimits

0x6eaf,	// (0x000422c8) main_mp4_pane_g4

0x6ed7,	// (0x000422f0) main_mp4_pane_g5_ParamLimits

0x6ed7,	// (0x000422f0) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0004acb3) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0004acb3) main_mp4_pane_g

0x6f27,	// (0x00042340) main_mp4_pane_t1_ParamLimits

0x6f27,	// (0x00042340) main_mp4_pane_t1

0x6f83,	// (0x0004239c) main_mp4_pane_t2_ParamLimits

0x6f83,	// (0x0004239c) main_mp4_pane_t2

0xeab7,	// (0x00049ed0) main_mp4_pane_t3_ParamLimits

0xeab7,	// (0x00049ed0) main_mp4_pane_t3

0x6fd5,	// (0x000423ee) main_mp4_pane_t4_ParamLimits

0x6fd5,	// (0x000423ee) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0004acc0) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0004acc0) main_mp4_pane_t

0x7019,	// (0x00042432) mp4_progress_pane_ParamLimits

0x7019,	// (0x00042432) mp4_progress_pane

0x7063,	// (0x0004247c) mp4_rocker_pane_ParamLimits

0x7063,	// (0x0004247c) mp4_rocker_pane

0xeadf,	// (0x00049ef8) mp4_progress_pane_t1

0xeaf8,	// (0x00049f11) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004acc9) mp4_progress_pane_t

0xeb11,	// (0x00049f2a) mup_progress_pane_cp04

0xe1e0,	// (0x000495f9) mp4_rocker_pane_g1

0x7083,	// (0x0004249c) aid_cell_size_keypad2_ParamLimits

0x7083,	// (0x0004249c) aid_cell_size_keypad2

0x7093,	// (0x000424ac) dialer2_ne_pane_ParamLimits

0x7093,	// (0x000424ac) dialer2_ne_pane

0x70a1,	// (0x000424ba) grid_dialer2_keypad_pane_ParamLimits

0x70a1,	// (0x000424ba) grid_dialer2_keypad_pane

0xee7a,	// (0x0004a293) bg_popup_call_pane_cp07_ParamLimits

0xee7a,	// (0x0004a293) bg_popup_call_pane_cp07

0x70b1,	// (0x000424ca) dialer2_ne_pane_t1_ParamLimits

0x70b1,	// (0x000424ca) dialer2_ne_pane_t1

0x70d6,	// (0x000424ef) cell_dialer2_keypad_pane_ParamLimits

0x70d6,	// (0x000424ef) cell_dialer2_keypad_pane

0xeb2f,	// (0x00049f48) bg_button_pane_pane_cp04_ParamLimits

0xeb2f,	// (0x00049f48) bg_button_pane_pane_cp04

0x70eb,	// (0x00042504) cell_dialer2_keypad_pane_g1_ParamLimits

0x70eb,	// (0x00042504) cell_dialer2_keypad_pane_g1

0x3311,	// (0x0003e72a) aid_placing_vt_set_content_ParamLimits

0x3311,	// (0x0003e72a) aid_placing_vt_set_content

0x333d,	// (0x0003e756) aid_placing_vt_set_title_ParamLimits

0x333d,	// (0x0003e756) aid_placing_vt_set_title

0xb334,	// (0x0004674d) main_image3_pane

0x7185,	// (0x0004259e) area_side_right_pane_cp01_ParamLimits

0x7185,	// (0x0004259e) area_side_right_pane_cp01

0xa176,	// (0x0004558f) main_image3_pane_g1_ParamLimits

0xa176,	// (0x0004558f) main_image3_pane_g1

0x71b2,	// (0x000425cb) main_image3_pane_g2_ParamLimits

0x71b2,	// (0x000425cb) main_image3_pane_g2

0x71cb,	// (0x000425e4) main_image3_pane_g3_ParamLimits

0x71cb,	// (0x000425e4) main_image3_pane_g3

0x71e4,	// (0x000425fd) main_image3_pane_g4_ParamLimits

0x71e4,	// (0x000425fd) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004acd8) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004acd8) main_image3_pane_g

0x71fd,	// (0x00042616) main_image3_pane_t1_ParamLimits

0x71fd,	// (0x00042616) main_image3_pane_t1

0x7222,	// (0x0004263b) main_image3_pane_t2_ParamLimits

0x7222,	// (0x0004263b) main_image3_pane_t2

0x7241,	// (0x0004265a) main_image3_pane_t3_ParamLimits

0x7241,	// (0x0004265a) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0004ace1) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0004ace1) main_image3_pane_t

0xeea3,	// (0x0004a2bc) grid_sctrl_middle_pane_cp01_ParamLimits

0xeea3,	// (0x0004a2bc) grid_sctrl_middle_pane_cp01

0x72a2,	// (0x000426bb) cell_sctrl_middle_pane_cp01_ParamLimits

0x72a2,	// (0x000426bb) cell_sctrl_middle_pane_cp01

0x72b3,	// (0x000426cc) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x72b3,	// (0x000426cc) cell_sctrl_middle_pane_cp01_g1

0xb334,	// (0x0004674d) main_call4_pane

0x72c0,	// (0x000426d9) aid_size_button_call4_ParamLimits

0x72c0,	// (0x000426d9) aid_size_button_call4

0x72f0,	// (0x00042709) call4_windows_pane_ParamLimits

0x72f0,	// (0x00042709) call4_windows_pane

0x730a,	// (0x00042723) grid_call4_button_pane_ParamLimits

0x730a,	// (0x00042723) grid_call4_button_pane

0xeb3b,	// (0x00049f54) call4_windows_conf_pane

0xeb52,	// (0x00049f6b) popup_call4_audio_first_window_ParamLimits

0xeb52,	// (0x00049f6b) popup_call4_audio_first_window

0xeb9a,	// (0x00049fb3) popup_call4_audio_second_window_ParamLimits

0xeb9a,	// (0x00049fb3) popup_call4_audio_second_window

0xebb3,	// (0x00049fcc) popup_call4_audio_wait_window_ParamLimits

0xebb3,	// (0x00049fcc) popup_call4_audio_wait_window

0x732e,	// (0x00042747) cell_call4_button_pane_ParamLimits

0x732e,	// (0x00042747) cell_call4_button_pane

0x7353,	// (0x0004276c) bg_button_pane_cp09_ParamLimits

0x7353,	// (0x0004276c) bg_button_pane_cp09

0x735f,	// (0x00042778) cell_call4_button_pane_g1_ParamLimits

0x735f,	// (0x00042778) cell_call4_button_pane_g1

0x736c,	// (0x00042785) cell_call4_button_pane_t1_ParamLimits

0x736c,	// (0x00042785) cell_call4_button_pane_t1

0xebc9,	// (0x00049fe2) popup_call4_audio_conf_window_ParamLimits

0xebc9,	// (0x00049fe2) popup_call4_audio_conf_window

0x662a,	// (0x00041a43) mup3_progress_pane_t1_ParamLimits

0x6649,	// (0x00041a62) mup3_progress_pane_t2_ParamLimits

0xe4ea,	// (0x00049903) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0004abb5) mup3_progress_pane_t_ParamLimits

0xe507,	// (0x00049920) mup_progress_pane_cp03_ParamLimits

0x6b58,	// (0x00041f71) mup3_control_keys_pane_g4_copy1

0x7047,	// (0x00042460) mp4_rocker2_pane_ParamLimits

0x7047,	// (0x00042460) mp4_rocker2_pane

0xebdd,	// (0x00049ff6) mp4_rocker2_pane_g1

0xebe5,	// (0x00049ffe) mp4_rocker2_pane_g2

0x73b0,	// (0x000427c9) mp4_rocker2_pane_g3

0x73b8,	// (0x000427d1) mp4_rocker2_pane_g4

0x73c0,	// (0x000427d9) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004acea) mp4_rocker2_pane_g

0xb334,	// (0x0004674d) main_camera4_pane

0xb334,	// (0x0004674d) main_video4_pane

0x6dac,	// (0x000421c5) main_video_tele_dialer_pane_t1_ParamLimits

0x6dac,	// (0x000421c5) main_video_tele_dialer_pane_t1

0x6dbe,	// (0x000421d7) main_video_tele_dialer_pane_t2_ParamLimits

0x6dbe,	// (0x000421d7) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0004aca4) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0004aca4) main_video_tele_dialer_pane_t

0x73e0,	// (0x000427f9) cam4_autofocus_pane_ParamLimits

0x73e0,	// (0x000427f9) cam4_autofocus_pane

0x73fa,	// (0x00042813) cam4_image_uncrop_pane_ParamLimits

0x73fa,	// (0x00042813) cam4_image_uncrop_pane

0x7411,	// (0x0004282a) cam4_indicators_pane_ParamLimits

0x7411,	// (0x0004282a) cam4_indicators_pane

0x742d,	// (0x00042846) main_camera4_pane_g1_ParamLimits

0x742d,	// (0x00042846) main_camera4_pane_g1

0x7439,	// (0x00042852) main_camera4_pane_g2_ParamLimits

0x7439,	// (0x00042852) main_camera4_pane_g2

0x7439,	// (0x00042852) main_camera4_pane_g3_ParamLimits

0x7439,	// (0x00042852) main_camera4_pane_g3

0x7445,	// (0x0004285e) main_camera4_pane_g4_ParamLimits

0x7445,	// (0x0004285e) main_camera4_pane_g4

0x7451,	// (0x0004286a) main_camera4_pane_g5_ParamLimits

0x7451,	// (0x0004286a) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0004acf5) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0004acf5) main_camera4_pane_g

0x746b,	// (0x00042884) main_camera4_pane_t1_ParamLimits

0x746b,	// (0x00042884) main_camera4_pane_t1

0xe44f,	// (0x00049868) bg_tb_trans_pane_cp06

0x74bb,	// (0x000428d4) cam4_indicators_pane_g1

0x74cc,	// (0x000428e5) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0004ad10) cam4_indicators_pane_g

0x74ea,	// (0x00042903) cam4_indicators_pane_t1

0x7514,	// (0x0004292d) main_video4_pane_g1_ParamLimits

0x7514,	// (0x0004292d) main_video4_pane_g1

0x7520,	// (0x00042939) main_video4_pane_g2_ParamLimits

0x7520,	// (0x00042939) main_video4_pane_g2

0x752c,	// (0x00042945) main_video4_pane_g3_ParamLimits

0x752c,	// (0x00042945) main_video4_pane_g3

0x7538,	// (0x00042951) main_video4_pane_g4_ParamLimits

0x7538,	// (0x00042951) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004ad17) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004ad17) main_video4_pane_g

0x7558,	// (0x00042971) vid4_indicators_pane_ParamLimits

0x7558,	// (0x00042971) vid4_indicators_pane

0x7577,	// (0x00042990) video4_image_uncrop_cif_pane_ParamLimits

0x7577,	// (0x00042990) video4_image_uncrop_cif_pane

0x7586,	// (0x0004299f) video4_image_uncrop_nhd_pane_ParamLimits

0x7586,	// (0x0004299f) video4_image_uncrop_nhd_pane

0x73fa,	// (0x00042813) video4_image_uncrop_vga_pane_ParamLimits

0x73fa,	// (0x00042813) video4_image_uncrop_vga_pane

0xc8c1,	// (0x00047cda) bg_tb_trans_pane_cp07

0x759d,	// (0x000429b6) vid4_indicators_pane_g1

0x75b1,	// (0x000429ca) vid4_indicators_pane_g2

0x75c5,	// (0x000429de) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0004ad22) vid4_indicators_pane_g

0x75f4,	// (0x00042a0d) vid4_indicators_pane_t1

0x760b,	// (0x00042a24) cam4_autofocus_pane_g1

0x7613,	// (0x00042a2c) cam4_autofocus_pane_g2

0x761b,	// (0x00042a34) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0004ad2d) cam4_autofocus_pane_g

0x7623,	// (0x00042a3c) cam4_autofocus_pane_g3_copy1

0x6dde,	// (0x000421f7) video_down_pane_cp_t1

0x6dec,	// (0x00042205) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0004aca9) video_down_pane_cp_t

0xeea3,	// (0x0004a2bc) popup_vitu2_window_ParamLimits

0xeea3,	// (0x0004a2bc) popup_vitu2_window

0x762b,	// (0x00042a44) aid_size_cell2_itu2_ParamLimits

0x762b,	// (0x00042a44) aid_size_cell2_itu2

0x764d,	// (0x00042a66) aid_size_cell_itu2_ParamLimits

0x764d,	// (0x00042a66) aid_size_cell_itu2

0xee7a,	// (0x0004a293) bg_popup_window_pane_cp09_ParamLimits

0xee7a,	// (0x0004a293) bg_popup_window_pane_cp09

0x7691,	// (0x00042aaa) field_vitu2_entry_pane_ParamLimits

0x7691,	// (0x00042aaa) field_vitu2_entry_pane

0x76b1,	// (0x00042aca) grid_vitu2_function_pane_ParamLimits

0x76b1,	// (0x00042aca) grid_vitu2_function_pane

0x76f5,	// (0x00042b0e) grid_vitu2_itu_pane_ParamLimits

0x76f5,	// (0x00042b0e) grid_vitu2_itu_pane

0x7771,	// (0x00042b8a) cell_vitu2_itu_pane_ParamLimits

0x7771,	// (0x00042b8a) cell_vitu2_itu_pane

0x778a,	// (0x00042ba3) cell_vitu2_function_pane_ParamLimits

0x778a,	// (0x00042ba3) cell_vitu2_function_pane

0xebed,	// (0x0004a006) bg_popup_call_pane_cp08_ParamLimits

0xebed,	// (0x0004a006) bg_popup_call_pane_cp08

0xec04,	// (0x0004a01d) field_vitu2_entry_pane_g1

0xec10,	// (0x0004a029) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0004ad34) field_vitu2_entry_pane_g

0x12fd,	// (0x0003c716) field_vitu2_entry_pane_t1_ParamLimits

0x12fd,	// (0x0003c716) field_vitu2_entry_pane_t1

0x132f,	// (0x0003c748) field_vitu2_entry_pane_t2_ParamLimits

0x132f,	// (0x0003c748) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004ad3b) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004ad3b) field_vitu2_entry_pane_t

0x77cb,	// (0x00042be4) bg_button_pane_cp010_ParamLimits

0x77cb,	// (0x00042be4) bg_button_pane_cp010

0x77d9,	// (0x00042bf2) cell_vitu2_itu_pane_g1

0x77f9,	// (0x00042c12) cell_vitu2_itu_pane_t1_ParamLimits

0x77f9,	// (0x00042c12) cell_vitu2_itu_pane_t1

0x134c,	// (0x0003c765) cell_vitu2_itu_pane_t2_ParamLimits

0x134c,	// (0x0003c765) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0004ad45) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0004ad45) cell_vitu2_itu_pane_t

0xc8c1,	// (0x00047cda) bg_button_pane_cp011

0x7845,	// (0x00042c5e) cell_vitu2_function_pane_g1

0xb334,	// (0x0004674d) main_myfav_hc_pane

0x7283,	// (0x0004269c) popup_image3_note_pane_ParamLimits

0x7283,	// (0x0004269c) popup_image3_note_pane

0x7291,	// (0x000426aa) popup_image3_tool_bar_pane_ParamLimits

0x7291,	// (0x000426aa) popup_image3_tool_bar_pane

0x13c2,	// (0x0003c7db) cell_vitu2_itu_pane_t3_ParamLimits

0x13c2,	// (0x0003c7db) cell_vitu2_itu_pane_t3

0xb334,	// (0x0004674d) bg_popup_trans_pane

0xec32,	// (0x0004a04b) grid_image3_tool_bar_pane

0xec3c,	// (0x0004a055) bg_popup_trans_pane_g1

0xc1b6,	// (0x000475cf) bg_popup_trans_pane_g2

0xec44,	// (0x0004a05d) bg_popup_trans_pane_g3

0xec4c,	// (0x0004a065) bg_popup_trans_pane_g4

0xec54,	// (0x0004a06d) bg_popup_trans_pane_g5

0xec5c,	// (0x0004a075) bg_popup_trans_pane_g6

0xec64,	// (0x0004a07d) bg_popup_trans_pane_g7

0xec6c,	// (0x0004a085) bg_popup_trans_pane_g8

0xc196,	// (0x000475af) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0004ad4c) bg_popup_trans_pane_g

0xec74,	// (0x0004a08d) cell_image3_tool_bar_pane_ParamLimits

0xec74,	// (0x0004a08d) cell_image3_tool_bar_pane

0xe1e0,	// (0x000495f9) cell_image3_tool_bar_pane_g1

0xb334,	// (0x0004674d) bg_popup_trans_pane_cp1

0xec88,	// (0x0004a0a1) popup_image3_note_pane_t1

0xec96,	// (0x0004a0af) popup_image3_note_pane_t2

0xeca4,	// (0x0004a0bd) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0004ad5f) popup_image3_note_pane_t

0xecb2,	// (0x0004a0cb) popup_image3_note_pane_t3_copy1

0x7859,	// (0x00042c72) bg_myfav_hc_instruction_pane_ParamLimits

0x7859,	// (0x00042c72) bg_myfav_hc_instruction_pane

0x7871,	// (0x00042c8a) cell_myfav_contact_pane_ParamLimits

0x7871,	// (0x00042c8a) cell_myfav_contact_pane

0x788b,	// (0x00042ca4) cell_myfav_contact_pane_cp1_ParamLimits

0x788b,	// (0x00042ca4) cell_myfav_contact_pane_cp1

0x78a3,	// (0x00042cbc) cell_myfav_contact_pane_cp2_ParamLimits

0x78a3,	// (0x00042cbc) cell_myfav_contact_pane_cp2

0x78bb,	// (0x00042cd4) cell_myfav_contact_pane_cp3_ParamLimits

0x78bb,	// (0x00042cd4) cell_myfav_contact_pane_cp3

0x78d2,	// (0x00042ceb) cell_myfav_contact_pane_cp4_ParamLimits

0x78d2,	// (0x00042ceb) cell_myfav_contact_pane_cp4

0x78e8,	// (0x00042d01) cell_myfav_contact_pane_cp5_ParamLimits

0x78e8,	// (0x00042d01) cell_myfav_contact_pane_cp5

0x78fc,	// (0x00042d15) cell_myfav_contact_pane_cp6_ParamLimits

0x78fc,	// (0x00042d15) cell_myfav_contact_pane_cp6

0x7910,	// (0x00042d29) cell_myfav_contact_pane_cp7_ParamLimits

0x7910,	// (0x00042d29) cell_myfav_contact_pane_cp7

0xecc0,	// (0x0004a0d9) listscroll_gen_pane_cp05

0x7928,	// (0x00042d41) main_myfav_hc_pane_g1_ParamLimits

0x7928,	// (0x00042d41) main_myfav_hc_pane_g1

0x793e,	// (0x00042d57) main_myfav_hc_pane_g2_ParamLimits

0x793e,	// (0x00042d57) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0004ad66) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0004ad66) main_myfav_hc_pane_g

0x796c,	// (0x00042d85) main_myfav_hc_pane_t1_ParamLimits

0x796c,	// (0x00042d85) main_myfav_hc_pane_t1

0xecc9,	// (0x0004a0e2) main_myfav_hc_pane_t2_ParamLimits

0xecc9,	// (0x0004a0e2) main_myfav_hc_pane_t2

0xecdb,	// (0x0004a0f4) main_myfav_hc_pane_t3_ParamLimits

0xecdb,	// (0x0004a0f4) main_myfav_hc_pane_t3

0x7983,	// (0x00042d9c) main_myfav_hc_pane_t4_ParamLimits

0x7983,	// (0x00042d9c) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0004ad6d) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0004ad6d) main_myfav_hc_pane_t

0xe1e0,	// (0x000495f9) bg_myfav_hc_instruction_pane_g1

0xeced,	// (0x0004a106) cell_myfav_contact_pane_g1_ParamLimits

0xeced,	// (0x0004a106) cell_myfav_contact_pane_g1

0xeced,	// (0x0004a106) cell_myfav_contact_pane_g2_ParamLimits

0xeced,	// (0x0004a106) cell_myfav_contact_pane_g2

0xecf9,	// (0x0004a112) cell_myfav_contact_pane_g3_ParamLimits

0xecf9,	// (0x0004a112) cell_myfav_contact_pane_g3

0xe4d4,	// (0x000498ed) cell_myfav_contact_pane_g4_ParamLimits

0xe4d4,	// (0x000498ed) cell_myfav_contact_pane_g4

0xed06,	// (0x0004a11f) cell_myfav_contact_pane_g5_ParamLimits

0xed06,	// (0x0004a11f) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0004ad78) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0004ad78) cell_myfav_contact_pane_g

0x7954,	// (0x00042d6d) main_myfav_hc_pane_g3_ParamLimits

0x7954,	// (0x00042d6d) main_myfav_hc_pane_g3

0x24f8,	// (0x0003d911) popup_adpt_find_window

0x79ad,	// (0x00042dc6) afind_page_pane_ParamLimits

0x79ad,	// (0x00042dc6) afind_page_pane

0x79ba,	// (0x00042dd3) aid_size_cell_afind_ParamLimits

0x79ba,	// (0x00042dd3) aid_size_cell_afind

0x79d4,	// (0x00042ded) bg_popup_sub_pane_cp09_ParamLimits

0x79d4,	// (0x00042ded) bg_popup_sub_pane_cp09

0x79e1,	// (0x00042dfa) find_pane_cp01_ParamLimits

0x79e1,	// (0x00042dfa) find_pane_cp01

0xed12,	// (0x0004a12b) grid_afind_control_pane_ParamLimits

0xed12,	// (0x0004a12b) grid_afind_control_pane

0x79ee,	// (0x00042e07) grid_afind_pane_ParamLimits

0x79ee,	// (0x00042e07) grid_afind_pane

0x7a0a,	// (0x00042e23) cell_afind_pane_ParamLimits

0x7a0a,	// (0x00042e23) cell_afind_pane

0xe1e0,	// (0x000495f9) afind_page_pane_g1

0x7a52,	// (0x00042e6b) afind_page_pane_g2

0x7a5b,	// (0x00042e74) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0004ad83) afind_page_pane_g

0x7a64,	// (0x00042e7d) afind_page_pane_t1

0xed26,	// (0x0004a13f) cell_afind_grid_control_pane_ParamLimits

0xed26,	// (0x0004a13f) cell_afind_grid_control_pane

0xeb2f,	// (0x00049f48) bg_button_pane_cp69_ParamLimits

0xeb2f,	// (0x00049f48) bg_button_pane_cp69

0x7a84,	// (0x00042e9d) cell_afind_pane_g1_ParamLimits

0x7a84,	// (0x00042e9d) cell_afind_pane_g1

0x7a91,	// (0x00042eaa) cell_afind_pane_t1_ParamLimits

0x7a91,	// (0x00042eaa) cell_afind_pane_t1

0xbfaf,	// (0x000473c8) bg_button_pane_cp72

0xed35,	// (0x0004a14e) cell_afind_grid_control_pane_g1

0x5092,	// (0x000404ab) aid_image_placing_area_ParamLimits

0x5092,	// (0x000404ab) aid_image_placing_area

0xe7fd,	// (0x00049c16) field_vitu_entry_pane_g1_ParamLimits

0xe7fd,	// (0x00049c16) field_vitu_entry_pane_g1

0xe809,	// (0x00049c22) field_vitu_entry_pane_g2_ParamLimits

0xe809,	// (0x00049c22) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0004ac34) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0004ac34) field_vitu_entry_pane_g

0x6be0,	// (0x00041ff9) cell_vitu_itu_pane_g1_ParamLimits

0x6c22,	// (0x0004203b) cell_vitu_itu_pane_t3_ParamLimits

0x6c22,	// (0x0004203b) cell_vitu_itu_pane_t3

0xeadf,	// (0x00049ef8) mp4_progress_pane_t1_ParamLimits

0xeaf8,	// (0x00049f11) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004acc9) mp4_progress_pane_t_ParamLimits

0xeb11,	// (0x00049f2a) mup_progress_pane_cp04_ParamLimits

0x7997,	// (0x00042db0) main_myfav_hc_pane_t5_ParamLimits

0x7997,	// (0x00042db0) main_myfav_hc_pane_t5

0x2386,	// (0x0003d79f) aid_zoom_text_primary

0x24f8,	// (0x0003d911) popup_adpt_find_window_ParamLimits

0xc8c1,	// (0x00047cda) main_cam_set_pane

0x741f,	// (0x00042838) cam4_zoom_pane_ParamLimits

0x741f,	// (0x00042838) cam4_zoom_pane

0x7aa3,	// (0x00042ebc) main_cam_set_pane_g1_ParamLimits

0x7aa3,	// (0x00042ebc) main_cam_set_pane_g1

0x7ab1,	// (0x00042eca) main_cam_set_pane_g2_ParamLimits

0x7ab1,	// (0x00042eca) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0004ad8a) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0004ad8a) main_cam_set_pane_g

0x7abd,	// (0x00042ed6) main_cam_set_pane_t1_ParamLimits

0x7abd,	// (0x00042ed6) main_cam_set_pane_t1

0x7ad9,	// (0x00042ef2) main_cset_listscroll_pane_ParamLimits

0x7ad9,	// (0x00042ef2) main_cset_listscroll_pane

0x7b04,	// (0x00042f1d) main_cset_slider_pane_ParamLimits

0x7b04,	// (0x00042f1d) main_cset_slider_pane

0xed46,	// (0x0004a15f) main_cset_list_pane_ParamLimits

0xed46,	// (0x0004a15f) main_cset_list_pane

0xed56,	// (0x0004a16f) scroll_pane_cp028

0x7b23,	// (0x00042f3c) aid_area_touch_slider

0x7b3f,	// (0x00042f58) cset_slider_pane

0x7b69,	// (0x00042f82) main_cset_slider_pane_g1

0x7b7e,	// (0x00042f97) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0004ad8f) main_cset_slider_pane_g

0xed8f,	// (0x0004a1a8) main_cset_slider_pane_t1

0x7c40,	// (0x00043059) main_cset_slider_pane_t2

0x7c5a,	// (0x00043073) main_cset_slider_pane_t3

0x7c74,	// (0x0004308d) main_cset_slider_pane_t4

0x7c8e,	// (0x000430a7) main_cset_slider_pane_t5

0x7cac,	// (0x000430c5) main_cset_slider_pane_t6

0x7cc3,	// (0x000430dc) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0004adb4) main_cset_slider_pane_t

0x7dcf,	// (0x000431e8) cset_list_set_pane_ParamLimits

0x7dcf,	// (0x000431e8) cset_list_set_pane

0x7de5,	// (0x000431fe) aid_position_infowindow_above

0x7ded,	// (0x00043206) aid_position_infowindow_below

0x1414,	// (0x0003c82d) cset_list_set_pane_g1_ParamLimits

0x1414,	// (0x0003c82d) cset_list_set_pane_g1

0x1420,	// (0x0003c839) cset_list_set_pane_g3_ParamLimits

0x1420,	// (0x0003c839) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0004add3) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0004add3) cset_list_set_pane_g

0x142f,	// (0x0003c848) cset_list_set_pane_t1_ParamLimits

0x142f,	// (0x0003c848) cset_list_set_pane_t1

0xc8c1,	// (0x00047cda) list_highlight_pane_cp021_ParamLimits

0xc8c1,	// (0x00047cda) list_highlight_pane_cp021

0xcb0d,	// (0x00047f26) cset_slider_pane_g1

0xcb1f,	// (0x00047f38) cset_slider_pane_g2

0xcb16,	// (0x00047f2f) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004add8) cset_slider_pane_g

0x7df5,	// (0x0004320e) aid_area_touch_cam4_zoom

0x7dfd,	// (0x00043216) cam4_zoom_cont_pane

0x7e05,	// (0x0004321e) cam4_zoom_pane_g1

0x7e0d,	// (0x00043226) cam4_zoom_pane_g2

0x7e15,	// (0x0004322e) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0004addf) cam4_zoom_pane_g

0xee88,	// (0x0004a2a1) cam4_zoom_cont_pane_g1

0xee91,	// (0x0004a2aa) cam4_zoom_cont_pane_g2

0xee9a,	// (0x0004a2b3) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004ade6) cam4_zoom_cont_pane_g

0x72da,	// (0x000426f3) call4_image_pane_ParamLimits

0x72da,	// (0x000426f3) call4_image_pane

0xeb3b,	// (0x00049f54) call4_windows_conf_pane_ParamLimits

0xeb78,	// (0x00049f91) popup_call4_audio_in_window_ParamLimits

0xeb78,	// (0x00049f91) popup_call4_audio_in_window

0xb334,	// (0x0004674d) bg_popup_call2_act_pane_cp02

0xebc1,	// (0x00049fda) call4_list_conf_pane

0xe1e0,	// (0x000495f9) call4_image_pane_g1

0xe1e0,	// (0x000495f9) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0004aaf5) call4_image_pane_g

0xee2f,	// (0x0004a248) list_single_graphic_popup_conf4_pane_ParamLimits

0xee2f,	// (0x0004a248) list_single_graphic_popup_conf4_pane

0xb334,	// (0x0004674d) list_highlight_pane_cp022

0xee42,	// (0x0004a25b) list_single_graphic_popup_conf4_pane_g1

0xc6c4,	// (0x00047add) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0004aded) list_single_graphic_popup_conf4_pane_g

0xee4a,	// (0x0004a263) list_single_graphic_popup_conf4_pane_t1

0x34a1,	// (0x0003e8ba) popup_vtel_slider_window_ParamLimits

0x34a1,	// (0x0003e8ba) popup_vtel_slider_window

0xeb1d,	// (0x00049f36) dialer2_ne_pane_t2_ParamLimits

0xeb1d,	// (0x00049f36) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0004acce) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0004acce) dialer2_ne_pane_t

0xc8c1,	// (0x00047cda) bg_popup_sub_pane_cp010_ParamLimits

0xc8c1,	// (0x00047cda) bg_popup_sub_pane_cp010

0x7e1d,	// (0x00043236) popup_vtel_slider_window_g1_ParamLimits

0x7e1d,	// (0x00043236) popup_vtel_slider_window_g1

0x7e29,	// (0x00043242) popup_vtel_slider_window_g2_ParamLimits

0x7e29,	// (0x00043242) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0004adf2) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0004adf2) popup_vtel_slider_window_g

0x7e71,	// (0x0004328a) vtel_slider_pane_ParamLimits

0x7e71,	// (0x0004328a) vtel_slider_pane

0x7e80,	// (0x00043299) vtel_slider_pane_g1_ParamLimits

0x7e80,	// (0x00043299) vtel_slider_pane_g1

0x7e8d,	// (0x000432a6) vtel_slider_pane_g2_ParamLimits

0x7e8d,	// (0x000432a6) vtel_slider_pane_g2

0x7e9a,	// (0x000432b3) vtel_slider_pane_g3_ParamLimits

0x7e9a,	// (0x000432b3) vtel_slider_pane_g3

0x7e80,	// (0x00043299) vtel_slider_pane_g4_ParamLimits

0x7e80,	// (0x00043299) vtel_slider_pane_g4

0x7ea7,	// (0x000432c0) vtel_slider_pane_g5_ParamLimits

0x7ea7,	// (0x000432c0) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004adfb) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004adfb) vtel_slider_pane_g

0xc8c1,	// (0x00047cda) main_gallery2_pane

0x7673,	// (0x00042a8c) aid_size_row_itut2_dropdow_list_ParamLimits

0x7673,	// (0x00042a8c) aid_size_row_itut2_dropdow_list

0x76d3,	// (0x00042aec) grid_vitu2_function_top_pane_ParamLimits

0x76d3,	// (0x00042aec) grid_vitu2_function_top_pane

0x772d,	// (0x00042b46) popup_vitu2_dropdown_list_window_ParamLimits

0x772d,	// (0x00042b46) popup_vitu2_dropdown_list_window

0x774d,	// (0x00042b66) popup_vitu2_match_list_window

0x7eb4,	// (0x000432cd) cell_vitu2_function_top_pane_ParamLimits

0x7eb4,	// (0x000432cd) cell_vitu2_function_top_pane

0x7ece,	// (0x000432e7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7ece,	// (0x000432e7) cell_vitu2_function_top_pane_cp01

0x7eea,	// (0x00043303) cell_vitu2_function_top_wide_pane_ParamLimits

0x7eea,	// (0x00043303) cell_vitu2_function_top_wide_pane

0xc8c1,	// (0x00047cda) bg_button_pane_cp012

0x7f06,	// (0x0004331f) cell_vitu2_function_top_pane_g1

0x7f1a,	// (0x00043333) bg_button_pane_cp013_ParamLimits

0x7f1a,	// (0x00043333) bg_button_pane_cp013

0x7f36,	// (0x0004334f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7f36,	// (0x0004334f) cell_vitu2_function_top_wide_pane_g1

0xeea3,	// (0x0004a2bc) bg_popup_sub_pane_cp20

0x7f4e,	// (0x00043367) list_vitu2_match_list_pane

0xec3c,	// (0x0004a055) bg_popup_sub_pane_cp20_g1

0xec44,	// (0x0004a05d) bg_popup_sub_pane_cp20_g2

0xc1b6,	// (0x000475cf) bg_popup_sub_pane_cp20_g3

0xec4c,	// (0x0004a065) bg_popup_sub_pane_cp20_g4

0xc196,	// (0x000475af) bg_popup_sub_pane_cp20_g5

0xee60,	// (0x0004a279) bg_popup_sub_pane_cp20_g6

0xec5c,	// (0x0004a075) bg_popup_sub_pane_cp20_g7

0xec64,	// (0x0004a07d) bg_popup_sub_pane_cp20_g8

0xec6c,	// (0x0004a085) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004ae06) bg_popup_sub_pane_cp20_g

0x7f66,	// (0x0004337f) list_vitu2_match_list_item_pane_ParamLimits

0x7f66,	// (0x0004337f) list_vitu2_match_list_item_pane

0x7f78,	// (0x00043391) list_vitu2_match_list_item_pane_t1

0xb334,	// (0x0004674d) bg_popup_sub_pane_cp21

0xc5ec,	// (0x00047a05) grid_vitu2_dropdown_list_pane

0x7f86,	// (0x0004339f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7f86,	// (0x0004339f) cell_vitu2_dropdown_list_char_pane

0x7fa7,	// (0x000433c0) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7fa7,	// (0x000433c0) cell_vitu2_dropdown_list_ctrl_pane

0xeeb1,	// (0x0004a2ca) cell_vitu2_dropdown_list_char_pane_g1

0xee68,	// (0x0004a281) cell_vitu2_dropdown_list_char_pane_g2

0xee71,	// (0x0004a28a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0004ae23) cell_vitu2_dropdown_list_char_pane_g

0x7fd3,	// (0x000433ec) cell_vitu2_dropdown_list_char_pane_t1

0x7fe1,	// (0x000433fa) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7fe1,	// (0x000433fa) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7ff1,	// (0x0004340a) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7ff1,	// (0x0004340a) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8002,	// (0x0004341b) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8002,	// (0x0004341b) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8012,	// (0x0004342b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8012,	// (0x0004342b) cell_vitu2_dropdown_list_ctrl_pane_g4

0xe44f,	// (0x00049868) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xe44f,	// (0x00049868) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0004ae2a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0004ae2a) cell_vitu2_dropdown_list_ctrl_pane_g

0x802e,	// (0x00043447) aid_size_cell_gallery2_ParamLimits

0x802e,	// (0x00043447) aid_size_cell_gallery2

0x8048,	// (0x00043461) grid_gallery2_pane_ParamLimits

0x8048,	// (0x00043461) grid_gallery2_pane

0x805f,	// (0x00043478) scroll_pane_cp029_ParamLimits

0x805f,	// (0x00043478) scroll_pane_cp029

0x806f,	// (0x00043488) cell_gallery2_pane_ParamLimits

0x806f,	// (0x00043488) cell_gallery2_pane

0xeeba,	// (0x0004a2d3) cell_gallery2_pane_g2

0xa184,	// (0x0004559d) cell_gallery2_pane_g3

0xeec2,	// (0x0004a2db) cell_gallery2_pane_g4

0xeeca,	// (0x0004a2e3) cell_gallery2_pane_g5

0xbf5d,	// (0x00047376) grid_highlight_pane_cp10

0x774d,	// (0x00042b66) popup_vitu2_match_list_window_ParamLimits

0x7761,	// (0x00042b7a) popup_vitu2_query_window_ParamLimits

0x7761,	// (0x00042b7a) popup_vitu2_query_window

0xb334,	// (0x0004674d) bg_vitu2_candi_button_pane

0xeeb1,	// (0x0004a2ca) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee68,	// (0x0004a281) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xee71,	// (0x0004a28a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x149a,	// (0x0003c8b3) bg_button_pane_cp015

0x80c4,	// (0x000434dd) bg_button_pane_cp016

0x80d7,	// (0x000434f0) bg_button_pane_cp017

0xddcf,	// (0x000491e8) bg_popup_sub_pane_cp22

0xeed2,	// (0x0004a2eb) popup_vitu2_query_window_g1

0x14cd,	// (0x0003c8e6) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0004ae35) popup_vitu2_query_window_g

0x14ea,	// (0x0003c903) popup_vitu2_query_window_t1_ParamLimits

0x14ea,	// (0x0003c903) popup_vitu2_query_window_t1

0x151d,	// (0x0003c936) popup_vitu2_query_window_t2_ParamLimits

0x151d,	// (0x0003c936) popup_vitu2_query_window_t2

0x152f,	// (0x0003c948) popup_vitu2_query_window_t3_ParamLimits

0x152f,	// (0x0003c948) popup_vitu2_query_window_t3

0x80fb,	// (0x00043514) popup_vitu2_query_window_t4_ParamLimits

0x80fb,	// (0x00043514) popup_vitu2_query_window_t4

0x811c,	// (0x00043535) popup_vitu2_query_window_t5_ParamLimits

0x811c,	// (0x00043535) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0004ae3c) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0004ae3c) popup_vitu2_query_window_t

0xed3e,	// (0x0004a157) main_cset_text_pane

0x7b23,	// (0x00042f3c) aid_area_touch_slider_ParamLimits

0x7b3f,	// (0x00042f58) cset_slider_pane_ParamLimits

0x7b69,	// (0x00042f82) main_cset_slider_pane_g1_ParamLimits

0x7b7e,	// (0x00042f97) main_cset_slider_pane_g2_ParamLimits

0xed5f,	// (0x0004a178) main_cset_slider_pane_g3_ParamLimits

0xed5f,	// (0x0004a178) main_cset_slider_pane_g3

0x7b93,	// (0x00042fac) main_cset_slider_pane_g4_ParamLimits

0x7b93,	// (0x00042fac) main_cset_slider_pane_g4

0x7ba2,	// (0x00042fbb) main_cset_slider_pane_g5_ParamLimits

0x7ba2,	// (0x00042fbb) main_cset_slider_pane_g5

0x7bb0,	// (0x00042fc9) main_cset_slider_pane_g6_ParamLimits

0x7bb0,	// (0x00042fc9) main_cset_slider_pane_g6

0xf976,	// (0x0004ad8f) main_cset_slider_pane_g_ParamLimits

0xed8f,	// (0x0004a1a8) main_cset_slider_pane_t1_ParamLimits

0x7c40,	// (0x00043059) main_cset_slider_pane_t2_ParamLimits

0x7c5a,	// (0x00043073) main_cset_slider_pane_t3_ParamLimits

0x7c74,	// (0x0004308d) main_cset_slider_pane_t4_ParamLimits

0x7c8e,	// (0x000430a7) main_cset_slider_pane_t5_ParamLimits

0x7cac,	// (0x000430c5) main_cset_slider_pane_t6_ParamLimits

0x7cc3,	// (0x000430dc) main_cset_slider_pane_t7_ParamLimits

0x7cf1,	// (0x0004310a) main_cset_slider_pane_t8_ParamLimits

0x7cf1,	// (0x0004310a) main_cset_slider_pane_t8

0x7d19,	// (0x00043132) main_cset_slider_pane_t9_ParamLimits

0x7d19,	// (0x00043132) main_cset_slider_pane_t9

0x7d41,	// (0x0004315a) main_cset_slider_pane_t10_ParamLimits

0x7d41,	// (0x0004315a) main_cset_slider_pane_t10

0x7d69,	// (0x00043182) main_cset_slider_pane_t11_ParamLimits

0x7d69,	// (0x00043182) main_cset_slider_pane_t11

0x7d93,	// (0x000431ac) main_cset_slider_pane_t12_ParamLimits

0x7d93,	// (0x000431ac) main_cset_slider_pane_t12

0x7db0,	// (0x000431c9) main_cset_slider_pane_t13_ParamLimits

0x7db0,	// (0x000431c9) main_cset_slider_pane_t13

0xf99b,	// (0x0004adb4) main_cset_slider_pane_t_ParamLimits

0xb334,	// (0x0004674d) bg_popup_sub_pane_cp011

0xeede,	// (0x0004a2f7) main_cset_text_pane_g1

0xeee6,	// (0x0004a2ff) main_cset_text_pane_t1

0xeef4,	// (0x0004a30d) main_cset_text_pane_t2

0xef02,	// (0x0004a31b) main_cset_text_pane_t3

0xef10,	// (0x0004a329) main_cset_text_pane_t4

0xef1e,	// (0x0004a337) main_cset_text_pane_t5

0xef2c,	// (0x0004a345) main_cset_text_pane_t6

0xef3a,	// (0x0004a353) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0004ae4b) main_cset_text_pane_t

0xb334,	// (0x0004674d) main_cam4_burst_pane

0xb334,	// (0x0004674d) main_cam5_pane

0x7a72,	// (0x00042e8b) bg_button_pane_cp019

0x7a7b,	// (0x00042e94) bg_button_pane_cp020

0xed6b,	// (0x0004a184) main_cset_slider_pane_g7_ParamLimits

0xed6b,	// (0x0004a184) main_cset_slider_pane_g7

0xed77,	// (0x0004a190) main_cset_slider_pane_g8_ParamLimits

0xed77,	// (0x0004a190) main_cset_slider_pane_g8

0x7bc4,	// (0x00042fdd) main_cset_slider_pane_g9_ParamLimits

0x7bc4,	// (0x00042fdd) main_cset_slider_pane_g9

0x7bd0,	// (0x00042fe9) main_cset_slider_pane_g10_ParamLimits

0x7bd0,	// (0x00042fe9) main_cset_slider_pane_g10

0x7bdc,	// (0x00042ff5) main_cset_slider_pane_g11_ParamLimits

0x7bdc,	// (0x00042ff5) main_cset_slider_pane_g11

0x7be8,	// (0x00043001) main_cset_slider_pane_g12_ParamLimits

0x7be8,	// (0x00043001) main_cset_slider_pane_g12

0x7bf4,	// (0x0004300d) main_cset_slider_pane_g13_ParamLimits

0x7bf4,	// (0x0004300d) main_cset_slider_pane_g13

0x7c00,	// (0x00043019) main_cset_slider_pane_g14_ParamLimits

0x7c00,	// (0x00043019) main_cset_slider_pane_g14

0x7c0c,	// (0x00043025) main_cset_slider_pane_g15_ParamLimits

0x7c0c,	// (0x00043025) main_cset_slider_pane_g15

0xedbd,	// (0x0004a1d6) main_cset_slider_pane_t14_ParamLimits

0xedbd,	// (0x0004a1d6) main_cset_slider_pane_t14

0xedf6,	// (0x0004a20f) main_cset_slider_pane_t15_ParamLimits

0xedf6,	// (0x0004a20f) main_cset_slider_pane_t15

0x813d,	// (0x00043556) aid_cam4_burst_size_cell_ParamLimits

0x813d,	// (0x00043556) aid_cam4_burst_size_cell

0x8159,	// (0x00043572) grid_cam4_burst_pane_ParamLimits

0x8159,	// (0x00043572) grid_cam4_burst_pane

0x8189,	// (0x000435a2) linegrid_cam4_burst_pane_ParamLimits

0x8189,	// (0x000435a2) linegrid_cam4_burst_pane

0x81a9,	// (0x000435c2) scroll_pane_cp30_ParamLimits

0x81a9,	// (0x000435c2) scroll_pane_cp30

0x81b5,	// (0x000435ce) cell_cam4_burst_pane_ParamLimits

0x81b5,	// (0x000435ce) cell_cam4_burst_pane

0xef48,	// (0x0004a361) linegrid_cam4_burst_pane_g1_ParamLimits

0xef48,	// (0x0004a361) linegrid_cam4_burst_pane_g1

0x81f1,	// (0x0004360a) linegrid_cam4_burst_pane_g2_ParamLimits

0x81f1,	// (0x0004360a) linegrid_cam4_burst_pane_g2

0xef55,	// (0x0004a36e) linegrid_cam4_burst_pane_g3_ParamLimits

0xef55,	// (0x0004a36e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0004ae5a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004ae5a) linegrid_cam4_burst_pane_g

0x8202,	// (0x0004361b) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8202,	// (0x0004361b) linegrid_cam4_burst_pane_g3_copy1

0xef6e,	// (0x0004a387) linegrid_cam4_burst_pane_g4_ParamLimits

0xef6e,	// (0x0004a387) linegrid_cam4_burst_pane_g4

0x821c,	// (0x00043635) linegrid_cam4_burst_pane_g5_ParamLimits

0x821c,	// (0x00043635) linegrid_cam4_burst_pane_g5

0x822d,	// (0x00043646) linegrid_cam4_burst_pane_g6_ParamLimits

0x822d,	// (0x00043646) linegrid_cam4_burst_pane_g6

0xef7b,	// (0x0004a394) linegrid_cam4_burst_pane_g7_ParamLimits

0xef7b,	// (0x0004a394) linegrid_cam4_burst_pane_g7

0x823e,	// (0x00043657) cell_cam4_burst_pane_g1

0xef94,	// (0x0004a3ad) main_cam5_pane_t1_ParamLimits

0xef94,	// (0x0004a3ad) main_cam5_pane_t1

0xefa6,	// (0x0004a3bf) main_cam5_pane_t2_ParamLimits

0xefa6,	// (0x0004a3bf) main_cam5_pane_t2

0xefb8,	// (0x0004a3d1) main_cam5_pane_t3_ParamLimits

0xefb8,	// (0x0004a3d1) main_cam5_pane_t3

0xefca,	// (0x0004a3e3) main_cam5_pane_t4_ParamLimits

0xefca,	// (0x0004a3e3) main_cam5_pane_t4

0xefe2,	// (0x0004a3fb) main_cam5_pane_t5_ParamLimits

0xefe2,	// (0x0004a3fb) main_cam5_pane_t5

0xeff6,	// (0x0004a40f) main_cam5_pane_t6_ParamLimits

0xeff6,	// (0x0004a40f) main_cam5_pane_t6

0xf00a,	// (0x0004a423) main_cam5_pane_t7_ParamLimits

0xf00a,	// (0x0004a423) main_cam5_pane_t7

0xf01c,	// (0x0004a435) main_cam5_pane_t8_ParamLimits

0xf01c,	// (0x0004a435) main_cam5_pane_t8

0xf038,	// (0x0004a451) main_cam5_pane_t9_ParamLimits

0xf038,	// (0x0004a451) main_cam5_pane_t9

0xf04a,	// (0x0004a463) main_cam5_pane_t10_ParamLimits

0xf04a,	// (0x0004a463) main_cam5_pane_t10

0xf05c,	// (0x0004a475) main_cam5_pane_t11_ParamLimits

0xf05c,	// (0x0004a475) main_cam5_pane_t11

0xf06e,	// (0x0004a487) main_cam5_pane_t12_ParamLimits

0xf06e,	// (0x0004a487) main_cam5_pane_t12

0xf083,	// (0x0004a49c) main_cam5_pane_t13_ParamLimits

0xf083,	// (0x0004a49c) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0004ae66) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0004ae66) main_cam5_pane_t

0x25ae,	// (0x0003d9c7) popup_scut_keymap_window_ParamLimits

0x25ae,	// (0x0003d9c7) popup_scut_keymap_window

0x8251,	// (0x0004366a) aid_size_cell_brow_shortcut

0xbf5d,	// (0x00047376) bg_popup_window_pane_cp010

0x825d,	// (0x00043676) grid_scut_pane

0x8269,	// (0x00043682) cell_scut_pane_ParamLimits

0x8269,	// (0x00043682) cell_scut_pane

0x8280,	// (0x00043699) cell_scut_pane_g1

0xf0a0,	// (0x0004a4b9) cell_scut_pane_t1

0xf0af,	// (0x0004a4c8) cell_scut_pane_t2

0x8289,	// (0x000436a2) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0004ae81) cell_scut_pane_t

0x6249,	// (0x00041662) main_mup3_pane_g8_ParamLimits

0x6249,	// (0x00041662) main_mup3_pane_g8

0x7681,	// (0x00042a9a) area_vitu2_query_pane_ParamLimits

0x7681,	// (0x00042a9a) area_vitu2_query_pane

0x14ac,	// (0x0003c8c5) input_focus_pane_cp08

0xf0be,	// (0x0004a4d7) area_vitu2_query_pane_g1

0x15ad,	// (0x0003c9c6) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0004ae88) area_vitu2_query_pane_g

0x8297,	// (0x000436b0) area_vitu2_query_pane_t1_ParamLimits

0x8297,	// (0x000436b0) area_vitu2_query_pane_t1

0x82ab,	// (0x000436c4) area_vitu2_query_pane_t2_ParamLimits

0x82ab,	// (0x000436c4) area_vitu2_query_pane_t2

0x15be,	// (0x0003c9d7) area_vitu2_query_pane_t3_ParamLimits

0x15be,	// (0x0003c9d7) area_vitu2_query_pane_t3

0x15e6,	// (0x0003c9ff) area_vitu2_query_pane_t4_ParamLimits

0x15e6,	// (0x0003c9ff) area_vitu2_query_pane_t4

0x160e,	// (0x0003ca27) area_vitu2_query_pane_t5_ParamLimits

0x160e,	// (0x0003ca27) area_vitu2_query_pane_t5

0x1636,	// (0x0003ca4f) area_vitu2_query_pane_t6_ParamLimits

0x1636,	// (0x0003ca4f) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0004ae8d) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0004ae8d) area_vitu2_query_pane_t

0x82bf,	// (0x000436d8) bg_button_pane_cp018

0x82cd,	// (0x000436e6) bg_button_pane_cp021

0x1682,	// (0x0003ca9b) bg_button_pane_cp022

0x1693,	// (0x0003caac) input_focus_pane_cp09

0xc800,	// (0x00047c19) aid_size_touch_mv_arrow_left

0xc829,	// (0x00047c42) aid_size_touch_mv_arrow_right

0x7c24,	// (0x0004303d) main_cset_slider_pane_g16_ParamLimits

0x7c24,	// (0x0004303d) main_cset_slider_pane_g16

0x7c32,	// (0x0004304b) main_cset_slider_pane_g17_ParamLimits

0x7c32,	// (0x0004304b) main_cset_slider_pane_g17

0x823e,	// (0x00043657) cell_cam4_burst_pane_g1_ParamLimits

0xb334,	// (0x0004674d) compa_mode_pane

0x7e35,	// (0x0004324e) popup_vtel_slider_window_g3_ParamLimits

0x7e35,	// (0x0004324e) popup_vtel_slider_window_g3

0x7e49,	// (0x00043262) popup_vtel_slider_window_g4_ParamLimits

0x7e49,	// (0x00043262) popup_vtel_slider_window_g4

0x7e5d,	// (0x00043276) popup_vtel_slider_window_t1_ParamLimits

0x7e5d,	// (0x00043276) popup_vtel_slider_window_t1

0xb334,	// (0x0004674d) main_cl_pane

0x55a4,	// (0x000409bd) popup_imed_adjust2_window_ParamLimits

0xddcf,	// (0x000491e8) bg_tb_trans_pane_cp05_ParamLimits

0xe732,	// (0x00049b4b) popup_imed_adjust2_window_g1_ParamLimits

0xe741,	// (0x00049b5a) popup_imed_adjust2_window_g2_ParamLimits

0xe741,	// (0x00049b5a) popup_imed_adjust2_window_g2

0xe74d,	// (0x00049b66) popup_imed_adjust2_window_g3_ParamLimits

0xe74d,	// (0x00049b66) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0004abf8) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0004abf8) popup_imed_adjust2_window_g

0xe759,	// (0x00049b72) popup_imed_adjust2_window_t1_ParamLimits

0xe771,	// (0x00049b8a) slider_imed_adjust_pane_ParamLimits

0xe785,	// (0x00049b9e) slider_imed_adjust_pane_g1_ParamLimits

0xe795,	// (0x00049bae) slider_imed_adjust_pane_g2_ParamLimits

0xe7a5,	// (0x00049bbe) slider_imed_adjust_pane_g3_ParamLimits

0xe7b6,	// (0x00049bcf) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0004abff) slider_imed_adjust_pane_g_ParamLimits

0x73c8,	// (0x000427e1) aid_touch_area_cam4_ParamLimits

0x73c8,	// (0x000427e1) aid_touch_area_cam4

0x73d8,	// (0x000427f1) battery_pane_cp01

0x745f,	// (0x00042878) main_camera4_pane_g6_ParamLimits

0x745f,	// (0x00042878) main_camera4_pane_g6

0x747d,	// (0x00042896) main_camera4_pane_t2_ParamLimits

0x747d,	// (0x00042896) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0004ad02) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0004ad02) main_camera4_pane_t

0x7504,	// (0x0004291d) aid_touch_area_vid4_ParamLimits

0x7504,	// (0x0004291d) aid_touch_area_vid4

0x7544,	// (0x0004295d) main_video4_pane_g5_ParamLimits

0x7544,	// (0x0004295d) main_video4_pane_g5

0x7568,	// (0x00042981) vid4_progress_pane_ParamLimits

0x7568,	// (0x00042981) vid4_progress_pane

0xed83,	// (0x0004a19c) main_cset_slider_pane_g18_ParamLimits

0xed83,	// (0x0004a19c) main_cset_slider_pane_g18

0xef88,	// (0x0004a3a1) cell_cam4_burst_pane_g2_ParamLimits

0xef88,	// (0x0004a3a1) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0004ae61) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0004ae61) cell_cam4_burst_pane_g

0x82d9,	// (0x000436f2) bg_cl_pane_ParamLimits

0x82d9,	// (0x000436f2) bg_cl_pane

0x82e5,	// (0x000436fe) cl_header_pane_ParamLimits

0x82e5,	// (0x000436fe) cl_header_pane

0x82f1,	// (0x0004370a) cl_listscroll_pane_ParamLimits

0x82f1,	// (0x0004370a) cl_listscroll_pane

0x007b,	// (0x0003b494) bg_cl_pane_g1

0x0083,	// (0x0003b49c) bg_cl_pane_g2

0x008b,	// (0x0003b4a4) bg_cl_pane_g3

0x0093,	// (0x0003b4ac) bg_cl_pane_g4

0x009b,	// (0x0003b4b4) bg_cl_pane_g5

0x00a3,	// (0x0003b4bc) bg_cl_pane_g6

0x00ab,	// (0x0003b4c4) bg_cl_pane_g7

0x00b3,	// (0x0003b4cc) bg_cl_pane_g8

0x00bb,	// (0x0003b4d4) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0004ae9c) bg_cl_pane_g

0x82fd,	// (0x00043716) aid_height_cl_leading_ParamLimits

0x82fd,	// (0x00043716) aid_height_cl_leading

0x8309,	// (0x00043722) aid_height_cl_text_ParamLimits

0x8309,	// (0x00043722) aid_height_cl_text

0xeea3,	// (0x0004a2bc) bg_cl_header_pane_ParamLimits

0xeea3,	// (0x0004a2bc) bg_cl_header_pane

0x8321,	// (0x0004373a) cl_header_pane_g1_ParamLimits

0x8321,	// (0x0004373a) cl_header_pane_g1

0x832e,	// (0x00043747) cl_header_pane_t1_ParamLimits

0x832e,	// (0x00043747) cl_header_pane_t1

0x00c3,	// (0x0003b4dc) cl_list_pane

0xed56,	// (0x0004a16f) hc_scroll_pane_cp01

0xc196,	// (0x000475af) bg_cl_header_pane_g1

0xec3c,	// (0x0004a055) bg_cl_header_pane_g2

0xc1b6,	// (0x000475cf) bg_cl_header_pane_g3

0xec4c,	// (0x0004a065) bg_cl_header_pane_g4

0xec44,	// (0x0004a05d) bg_cl_header_pane_g5

0xee60,	// (0x0004a279) bg_cl_header_pane_g6

0xec64,	// (0x0004a07d) bg_cl_header_pane_g7

0xec6c,	// (0x0004a085) bg_cl_header_pane_g8

0xec5c,	// (0x0004a075) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0004aeaf) bg_cl_header_pane_g

0x8340,	// (0x00043759) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8340,	// (0x00043759) hc_cl_list_double_graphic_heading_pane

0x8351,	// (0x0004376a) hc_cl_list_single_graphic_pane_ParamLimits

0x8351,	// (0x0004376a) hc_cl_list_single_graphic_pane

0x836a,	// (0x00043783) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x836a,	// (0x00043783) hc_cl_list_single_graphic_pane_g1

0x8376,	// (0x0004378f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8376,	// (0x0004378f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0004aec2) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0004aec2) hc_cl_list_single_graphic_pane_g

0x838a,	// (0x000437a3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x838a,	// (0x000437a3) hc_cl_list_single_graphic_pane_t1

0x836a,	// (0x00043783) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x836a,	// (0x00043783) hc_cl_list_double_graphic_heading_pane_g1

0x839f,	// (0x000437b8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x839f,	// (0x000437b8) hc_cl_list_double_graphic_heading_pane_g2

0x83b3,	// (0x000437cc) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x83b3,	// (0x000437cc) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0004aec7) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0004aec7) hc_cl_list_double_graphic_heading_pane_g

0x83c7,	// (0x000437e0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x83c7,	// (0x000437e0) hc_cl_list_double_graphic_heading_pane_t1

0x83dc,	// (0x000437f5) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x83dc,	// (0x000437f5) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0004aece) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0004aece) hc_cl_list_double_graphic_heading_pane_t

0x83f9,	// (0x00043812) vid4_progress_pane_g1

0x8409,	// (0x00043822) vid4_progress_pane_g2

0x8419,	// (0x00043832) vid4_progress_pane_g3

0x842b,	// (0x00043844) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0004aed3) vid4_progress_pane_g

0x8443,	// (0x0004385c) vid4_progress_pane_t1

0x8459,	// (0x00043872) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0004aede) vid4_progress_pane_t

0x8483,	// (0x0004389c) wait_bar_pane_cp07

0xdfca,	// (0x000493e3) blid_firmament_pane_ParamLimits

0xe00d,	// (0x00049426) popup_blid_sat_info2_window_g1

0xe031,	// (0x0004944a) popup_blid_sat_info2_window_t3

0xe03f,	// (0x00049458) popup_blid_sat_info2_window_t4

0xe04d,	// (0x00049466) popup_blid_sat_info2_window_t5

0xe05b,	// (0x00049474) popup_blid_sat_info2_window_t6

0xe06b,	// (0x00049484) popup_blid_sat_info2_window_t7

0xe079,	// (0x00049492) popup_blid_sat_info2_window_t8

0xe087,	// (0x000494a0) popup_blid_sat_info2_window_t9

0xe095,	// (0x000494ae) popup_blid_sat_info2_window_t10

0xe157,	// (0x00049570) aid_firma_cardinal_ParamLimits

0xe16b,	// (0x00049584) blid_firmament_pane_t1_ParamLimits

0xe182,	// (0x0004959b) blid_firmament_pane_t2_ParamLimits

0xe1a2,	// (0x000495bb) blid_firmament_pane_t3_ParamLimits

0xe1b9,	// (0x000495d2) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0004aaec) blid_firmament_pane_t_ParamLimits

0xe1d0,	// (0x000495e9) blid_sat_info_pane_ParamLimits

0xc8c1,	// (0x00047cda) main_cam_set_pane_ParamLimits

0x6a02,	// (0x00041e1b) aid_size_cell_colour_35_ParamLimits

0x6a1c,	// (0x00041e35) aid_size_cell_colour_112_ParamLimits

0x6a33,	// (0x00041e4c) aid_size_cell_effect_ParamLimits

0xc8c1,	// (0x00047cda) bg_tb_trans_pane_cp02_ParamLimits

0xc8cf,	// (0x00047ce8) heading_imed_pane_ParamLimits

0x6a4d,	// (0x00041e66) listscroll_imed_pane_ParamLimits

0xd3f5,	// (0x0004880e) popup_call2_audio_first_window_g5_ParamLimits

0xd3f5,	// (0x0004880e) popup_call2_audio_first_window_g5

0x7153,	// (0x0004256c) aid_size_touch_image3_arrow_left_ParamLimits

0x7153,	// (0x0004256c) aid_size_touch_image3_arrow_left

0x7169,	// (0x00042582) aid_size_touch_image3_arrow_right_ParamLimits

0x7169,	// (0x00042582) aid_size_touch_image3_arrow_right

0x846e,	// (0x00043887) vid4_progress_pane_t3

0x6ceb,	// (0x00042104) main_hwr_training_symbol_option_pane_ParamLimits

0x6ceb,	// (0x00042104) main_hwr_training_symbol_option_pane

0xea1f,	// (0x00049e38) popup_hwr_training_preview_window_ParamLimits

0xea1f,	// (0x00049e38) popup_hwr_training_preview_window

0x6d4c,	// (0x00042165) hwr_training_navi_pane_g5_ParamLimits

0x6d4c,	// (0x00042165) hwr_training_navi_pane_g5

0xec2a,	// (0x0004a043) popup_char_count_window

0xeea3,	// (0x0004a2bc) bg_popup_sub_pane_cp20_ParamLimits

0x7f4e,	// (0x00043367) list_vitu2_match_list_pane_ParamLimits

0x7f5a,	// (0x00043373) vitu2_page_scroll_pane_ParamLimits

0x7f5a,	// (0x00043373) vitu2_page_scroll_pane

0xa195,	// (0x000455ae) list_single_hwr_training_symbol_option_pane_ParamLimits

0xa195,	// (0x000455ae) list_single_hwr_training_symbol_option_pane

0xa1a8,	// (0x000455c1) list_single_hwr_training_symbol_option_pane_g1

0xa1b0,	// (0x000455c9) list_single_hwr_training_symbol_option_pane_t1

0xa1be,	// (0x000455d7) bg_button_pane_cp023

0xa1c7,	// (0x000455e0) bg_button_pane_cp024

0x84a8,	// (0x000438c1) vitu2_page_scroll_pane_g1

0x84b0,	// (0x000438c9) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0004aee5) vitu2_page_scroll_pane_g

0x84b8,	// (0x000438d1) vitu2_page_scroll_pane_t1

0xdf2a,	// (0x00049343) popup_char_count_window_g1

0xa1fa,	// (0x00045613) popup_char_count_window_g2

0xa203,	// (0x0004561c) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0004aeea) popup_char_count_window_g

0xa20c,	// (0x00045625) popup_char_count_window_t1

0xb334,	// (0x0004674d) main_vded2_pane

0xe71e,	// (0x00049b37) aid_size_cell_imed_line

0xe728,	// (0x00049b41) grid_imed_line_width_pane

0x75d6,	// (0x000429ef) vid4_indicators_pane_g4

0xa21a,	// (0x00045633) cell_imed_line_width_pane_ParamLimits

0xa21a,	// (0x00045633) cell_imed_line_width_pane

0xa22e,	// (0x00045647) cell_imed_line_width_pane_g1

0xa237,	// (0x00045650) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0004aef1) cell_imed_line_width_pane_g

0x84c7,	// (0x000438e0) main_vded2_pane_g1_ParamLimits

0x84c7,	// (0x000438e0) main_vded2_pane_g1

0x84d4,	// (0x000438ed) main_vded2_pane_g2_ParamLimits

0x84d4,	// (0x000438ed) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0004aef6) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0004aef6) main_vded2_pane_g

0x84e2,	// (0x000438fb) vded2_slider_pane_ParamLimits

0x84e2,	// (0x000438fb) vded2_slider_pane

0x84ef,	// (0x00043908) aid_size_touch_vded2_end

0x84f9,	// (0x00043912) aid_size_touch_vded2_playhead

0xa23f,	// (0x00045658) aid_size_touch_vded2_start

0xa247,	// (0x00045660) vded2_slider_bg_pane

0xa250,	// (0x00045669) vded2_slider_pane_g1

0xa259,	// (0x00045672) vded2_slider_pane_g2

0x8501,	// (0x0004391a) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0004aefb) vded2_slider_pane_g

0xa261,	// (0x0004567a) vded2_slider_bg_pane_g1

0xa26a,	// (0x00045683) vded2_slider_bg_pane_g2

0xa273,	// (0x0004568c) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0004af02) vded2_slider_bg_pane_g

0x4dfc,	// (0x00040215) aid_postcard_touch_down_pane_ParamLimits

0x4dfc,	// (0x00040215) aid_postcard_touch_down_pane

0x4e0c,	// (0x00040225) aid_postcard_touch_up_pane_ParamLimits

0x4e0c,	// (0x00040225) aid_postcard_touch_up_pane

0xb334,	// (0x0004674d) main_blid2_pane

0x552f,	// (0x00040948) popup_blid2_search_window

0xb334,	// (0x0004674d) blid2_gps_pane

0xb334,	// (0x0004674d) blid2_navig_pane

0xb334,	// (0x0004674d) blid2_search_pane

0xb334,	// (0x0004674d) blid2_tripm_pane

0x850a,	// (0x00043923) blid2_search_pane_g1_ParamLimits

0x850a,	// (0x00043923) blid2_search_pane_g1

0x851a,	// (0x00043933) blid2_search_pane_t1_ParamLimits

0x851a,	// (0x00043933) blid2_search_pane_t1

0x852c,	// (0x00043945) aid_size_cell_blid2_gps_ParamLimits

0x852c,	// (0x00043945) aid_size_cell_blid2_gps

0x853c,	// (0x00043955) blid2_gps_pane_g1_ParamLimits

0x853c,	// (0x00043955) blid2_gps_pane_g1

0x8548,	// (0x00043961) grid_blid2_satellite_pane_ParamLimits

0x8548,	// (0x00043961) grid_blid2_satellite_pane

0x8558,	// (0x00043971) blid2_navig_pane_g1_ParamLimits

0x8558,	// (0x00043971) blid2_navig_pane_g1

0x8564,	// (0x0004397d) blid2_navig_pane_t1_ParamLimits

0x8564,	// (0x0004397d) blid2_navig_pane_t1

0x8576,	// (0x0004398f) blid2_navig_pane_t2_ParamLimits

0x8576,	// (0x0004398f) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0004af09) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0004af09) blid2_navig_pane_t

0x8588,	// (0x000439a1) blid2_navig_ring_pane_ParamLimits

0x8588,	// (0x000439a1) blid2_navig_ring_pane

0x8598,	// (0x000439b1) blid2_speed_pane_ParamLimits

0x8598,	// (0x000439b1) blid2_speed_pane

0x85a4,	// (0x000439bd) blid2_tripm_pane_g1_ParamLimits

0x85a4,	// (0x000439bd) blid2_tripm_pane_g1

0x85b4,	// (0x000439cd) blid2_tripm_pane_g2_ParamLimits

0x85b4,	// (0x000439cd) blid2_tripm_pane_g2

0x85c0,	// (0x000439d9) blid2_tripm_pane_g3_ParamLimits

0x85c0,	// (0x000439d9) blid2_tripm_pane_g3

0x85cc,	// (0x000439e5) blid2_tripm_pane_g4_ParamLimits

0x85cc,	// (0x000439e5) blid2_tripm_pane_g4

0x85d8,	// (0x000439f1) blid2_tripm_pane_g5_ParamLimits

0x85d8,	// (0x000439f1) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0004af0e) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0004af0e) blid2_tripm_pane_g

0x85f4,	// (0x00043a0d) blid2_tripm_pane_t1_ParamLimits

0x85f4,	// (0x00043a0d) blid2_tripm_pane_t1

0x8608,	// (0x00043a21) blid2_tripm_pane_t2_ParamLimits

0x8608,	// (0x00043a21) blid2_tripm_pane_t2

0x861a,	// (0x00043a33) blid2_tripm_pane_t3_ParamLimits

0x861a,	// (0x00043a33) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0004af1b) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0004af1b) blid2_tripm_pane_t

0x864c,	// (0x00043a65) cell_blid2_satellite_pane_ParamLimits

0x864c,	// (0x00043a65) cell_blid2_satellite_pane

0x8666,	// (0x00043a7f) cell_blid2_satellite_pane_g1

0xa27c,	// (0x00045695) cell_blid2_satellite_pane_t1

0xe1e0,	// (0x000495f9) blid2_speed_pane_g1

0xa28a,	// (0x000456a3) blid2_speed_pane_t1

0xa298,	// (0x000456b1) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0004af24) blid2_speed_pane_t

0xe1e0,	// (0x000495f9) blid2_navig_ring_pane_g1

0x866f,	// (0x00043a88) blid2_navig_ring_pane_g2

0x8677,	// (0x00043a90) blid2_navig_ring_pane_g3

0x867f,	// (0x00043a98) blid2_navig_ring_pane_g4

0x8687,	// (0x00043aa0) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0004af29) blid2_navig_ring_pane_g

0xb334,	// (0x0004674d) bg_popup_window_pane_cp011

0xa2a6,	// (0x000456bf) popup_blid2_search_window_g1

0xa2ae,	// (0x000456c7) popup_blid2_search_window_t1

0xa2bc,	// (0x000456d5) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0004af34) popup_blid2_search_window_t

0xc0a5,	// (0x000474be) main_browser_pane_g1

0xbd98,	// (0x000471b1) main_browser_pane_ParamLimits

0xc8c1,	// (0x00047cda) bg_button_pane_cp011_ParamLimits

0x7845,	// (0x00042c5e) cell_vitu2_function_pane_g1_ParamLimits

0xddcf,	// (0x000491e8) bg_popup_sub_pane_cp22_ParamLimits

0x14ac,	// (0x0003c8c5) input_focus_pane_cp08_ParamLimits

0x80ea,	// (0x00043503) popup_vitu2_query_button_pane_ParamLimits

0x80ea,	// (0x00043503) popup_vitu2_query_button_pane

0x14c3,	// (0x0003c8dc) popup_vitu2_query_input_button_pane

0xeed2,	// (0x0004a2eb) popup_vitu2_query_window_g1_ParamLimits

0x14cd,	// (0x0003c8e6) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0004ae35) popup_vitu2_query_window_g_ParamLimits

0xb334,	// (0x0004674d) bg_button_pane_cp026

0x868f,	// (0x00043aa8) popup_vitu2_query_input_button_pane_g1

0xb334,	// (0x0004674d) bg_button_pane_cp025

0xa2ca,	// (0x000456e3) popup_vitu2_query_button_pane_t1

0x5f8d,	// (0x000413a6) main_mp3_pane_t6

0x5f9d,	// (0x000413b6) popup_slider_window_cp01

0x74b3,	// (0x000428cc) cam4_battery_pane

0x7593,	// (0x000429ac) cam4_battery_pane_cp02

0x83f1,	// (0x0004380a) cam4_battery_pane_cp01

0x83f1,	// (0x0004380a) cam4_battery_pane_cp03

0xe1e0,	// (0x000495f9) cam4_battery_pane_g1

0xa2d8,	// (0x000456f1) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0004af39) cam4_battery_pane_g

0xe0a3,	// (0x000494bc) popup_blid_sat_info2_window_t11

0xc800,	// (0x00047c19) aid_size_touch_mv_arrow_left_ParamLimits

0xc829,	// (0x00047c42) aid_size_touch_mv_arrow_right_ParamLimits

0xc887,	// (0x00047ca0) navi_pane_g1_ParamLimits

0xc893,	// (0x00047cac) navi_pane_g2_ParamLimits

0xc8db,	// (0x00047cf4) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0004a7fe) navi_pane_g_ParamLimits

0x4872,	// (0x0003fc8b) navi_pane_mv_t1_ParamLimits

0x6a59,	// (0x00041e72) grid_imed_effect_pane_ParamLimits

0x3361,	// (0x0003e77a) aid_placing_vt_slider_lsc

0xbff4,	// (0x0004740d) aid_placing_vt_slider_prt

0xc8c1,	// (0x00047cda) bg_tb_trans_pane_cp01_ParamLimits

0xe36f,	// (0x00049788) popup_image_details_window_g1_ParamLimits

0xe382,	// (0x0004979b) popup_image_details_window_g2_ParamLimits

0xe397,	// (0x000497b0) popup_image_details_window_g3_ParamLimits

0xe397,	// (0x000497b0) popup_image_details_window_g3

0xf718,	// (0x0004ab31) popup_image_details_window_g_ParamLimits

0xe3ab,	// (0x000497c4) popup_image_details_window_t1_ParamLimits

0xe3bd,	// (0x000497d6) popup_image_details_window_t2_ParamLimits

0xe3d6,	// (0x000497ef) popup_image_details_window_t3_ParamLimits

0xe3ea,	// (0x00049803) popup_image_details_window_t4_ParamLimits

0xe405,	// (0x0004981e) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0004ab38) popup_image_details_window_t_ParamLimits

0x8315,	// (0x0004372e) cl_header_name_pane_ParamLimits

0x8315,	// (0x0004372e) cl_header_name_pane

0x8697,	// (0x00043ab0) cl_header_name_pane_t1_ParamLimits

0x8697,	// (0x00043ab0) cl_header_name_pane_t1

0x86ae,	// (0x00043ac7) cl_header_name_pane_t2_ParamLimits

0x86ae,	// (0x00043ac7) cl_header_name_pane_t2

0x86d8,	// (0x00043af1) cl_header_name_pane_t3_ParamLimits

0x86d8,	// (0x00043af1) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0004af3e) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0004af3e) cl_header_name_pane_t

0xc96a,	// (0x00047d83) navi_pane_mv_g2_ParamLimits

0xec04,	// (0x0004a01d) field_vitu2_entry_pane_g1_ParamLimits

0xec10,	// (0x0004a029) field_vitu2_entry_pane_g2_ParamLimits

0xec1c,	// (0x0004a035) field_vitu2_entry_pane_g3_ParamLimits

0xec1c,	// (0x0004a035) field_vitu2_entry_pane_g3

0xf91b,	// (0x0004ad34) field_vitu2_entry_pane_g_ParamLimits

0x77d9,	// (0x00042bf2) cell_vitu2_itu_pane_g1_ParamLimits

0x77eb,	// (0x00042c04) cell_vitu2_itu_pane_g2_ParamLimits

0x77eb,	// (0x00042c04) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0004ad40) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0004ad40) cell_vitu2_itu_pane_g

0xc8c1,	// (0x00047cda) bg_vkb2_func_pane_cp05_ParamLimits

0xc8c1,	// (0x00047cda) bg_vkb2_func_pane_cp05

0xc8c1,	// (0x00047cda) bg_vkb2_func_pane_cp03

0xc8c1,	// (0x00047cda) bg_vkb2_func_pane_cp04

0xc8c1,	// (0x00047cda) bg_vkb2_func_pane_cp10_ParamLimits

0xc8c1,	// (0x00047cda) bg_vkb2_func_pane_cp10

0x1682,	// (0x0003ca9b) bg_vkb2_func_pane_cp08

0x82bf,	// (0x000436d8) bg_vkb2_func_pane_cp06

0x82cd,	// (0x000436e6) bg_vkb2_func_pane_cp07

0xa1d0,	// (0x000455e9) bg_vkb2_func_pane_cp11_ParamLimits

0xa1d0,	// (0x000455e9) bg_vkb2_func_pane_cp11

0xa1e5,	// (0x000455fe) bg_vkb2_func_pane_cp12_ParamLimits

0xa1e5,	// (0x000455fe) bg_vkb2_func_pane_cp12

0xb334,	// (0x0004674d) bg_vkb2_func_pane_cp09

0xec3c,	// (0x0004a055) bg_vkb2_func_pane_g1

0xc1b6,	// (0x000475cf) bg_vkb2_func_pane_g2

0xec44,	// (0x0004a05d) bg_vkb2_func_pane_g3

0xec4c,	// (0x0004a065) bg_vkb2_func_pane_g4

0xee60,	// (0x0004a279) bg_vkb2_func_pane_g5

0xec64,	// (0x0004a07d) bg_vkb2_func_pane_g6

0xec6c,	// (0x0004a085) bg_vkb2_func_pane_g7

0xec5c,	// (0x0004a075) bg_vkb2_func_pane_g8

0xc196,	// (0x000475af) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0004af45) bg_vkb2_func_pane_g

0x85e6,	// (0x000439ff) blid2_tripm_pane_g6_ParamLimits

0x85e6,	// (0x000439ff) blid2_tripm_pane_g6

0xead7,	// (0x00049ef0) mp4_progress_pane_g1

0x8640,	// (0x00043a59) blid2_tripm_values_pane_ParamLimits

0x8640,	// (0x00043a59) blid2_tripm_values_pane

0x86fd,	// (0x00043b16) blid2_tripm_values_pane_t1

0x870b,	// (0x00043b24) blid2_tripm_values_pane_t2

0x8719,	// (0x00043b32) blid2_tripm_values_pane_t3

0x8727,	// (0x00043b40) blid2_tripm_values_pane_t4

0x8735,	// (0x00043b4e) blid2_tripm_values_pane_t5

0x8743,	// (0x00043b5c) blid2_tripm_values_pane_t6

0x8751,	// (0x00043b6a) blid2_tripm_values_pane_t7

0x875f,	// (0x00043b78) blid2_tripm_values_pane_t8

0x876d,	// (0x00043b86) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0004af58) blid2_tripm_values_pane_t

0x33a1,	// (0x0003e7ba) call_video_pane_t1_ParamLimits

0x33c2,	// (0x0003e7db) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0004a687) call_video_pane_t_ParamLimits

0x1204,	// (0x0003c61d) msg_header_pane_g1_ParamLimits

0xcb52,	// (0x00047f6b) msg_header_pane_g2_ParamLimits

0xcb52,	// (0x00047f6b) msg_header_pane_g2

0x0001,

0xf488,	// (0x0004a8a1) msg_header_pane_g_ParamLimits

0xf488,	// (0x0004a8a1) msg_header_pane_g

0xbd98,	// (0x000471b1) main_clock2_pane_ParamLimits

0x67f1,	// (0x00041c0a) grid_clock2_toolbar_pane_ParamLimits

0x67f1,	// (0x00041c0a) grid_clock2_toolbar_pane

0x67f1,	// (0x00041c0a) listscroll_clock2_pane_ParamLimits

0x67f1,	// (0x00041c0a) listscroll_clock2_pane

0x6897,	// (0x00041cb0) main_clock2_pane_t3_ParamLimits

0x6897,	// (0x00041cb0) main_clock2_pane_t3

0x68a9,	// (0x00041cc2) main_clock2_pane_t4_ParamLimits

0x68a9,	// (0x00041cc2) main_clock2_pane_t4

0xa2e2,	// (0x000456fb) cell_clock2_toolbar_pane

0xa2ea,	// (0x00045703) cell_clock2_toolbar_pane_cp01

0xa2ea,	// (0x00045703) cell_clock2_toolbar_pane_cp02

0xa2f2,	// (0x0004570b) cell_clock2_toolbar_pane_cp03

0xa2fa,	// (0x00045713) list_clock2_pane

0xc776,	// (0x00047b8f) scroll_pane_cp10

0xa302,	// (0x0004571b) list_single_clock2_pane_ParamLimits

0xa302,	// (0x0004571b) list_single_clock2_pane

0xbf5d,	// (0x00047376) list_highlight_pane_cp08

0xa30f,	// (0x00045728) list_single_clock2_pane_t1

0xa31d,	// (0x00045736) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0004af6b) list_single_clock2_pane_t

0xb334,	// (0x0004674d) bg_button_pane_cp10

0xa32b,	// (0x00045744) cell_clock2_toolbar_pane_g1

0x4d5e,	// (0x00040177) aid_main_viewer_pane_g1_ParamLimits

0x4d5e,	// (0x00040177) aid_main_viewer_pane_g1

0x4d6a,	// (0x00040183) aid_main_viewer_pane_g2_ParamLimits

0x4d6a,	// (0x00040183) aid_main_viewer_pane_g2

0x4d76,	// (0x0004018f) aid_main_viewer_pane_g3_ParamLimits

0x4d76,	// (0x0004018f) aid_main_viewer_pane_g3

0x4d87,	// (0x000401a0) aid_main_viewer_pane_g4_ParamLimits

0x4d87,	// (0x000401a0) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0004a8b2) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0004a8b2) aid_main_viewer_pane_g

0x5507,	// (0x00040920) main_calc_pane_ParamLimits

0x5514,	// (0x0004092d) main_dialer2_pane_ParamLimits

0xb334,	// (0x0004674d) main_cam6_pane

0xb334,	// (0x0004674d) main_vid6_pane

0x67fd,	// (0x00041c16) listscroll_gen_pane_cp06_ParamLimits

0x67fd,	// (0x00041c16) listscroll_gen_pane_cp06

0x68bb,	// (0x00041cd4) main_clock2_pane_t5_ParamLimits

0x68bb,	// (0x00041cd4) main_clock2_pane_t5

0x6904,	// (0x00041d1d) aid_call2_pane_cp10_ParamLimits

0x6916,	// (0x00041d2f) aid_call_pane_cp10_ParamLimits

0xc7f4,	// (0x00047c0d) popup_clock_analogue_window_cp10_g1_ParamLimits

0xc7f4,	// (0x00047c0d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x6928,	// (0x00041d41) popup_clock_analogue_window_cp10_g3_ParamLimits

0x6928,	// (0x00041d41) popup_clock_analogue_window_cp10_g4_ParamLimits

0xc7f4,	// (0x00047c0d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0004abed) popup_clock_analogue_window_cp10_g_ParamLimits

0x693a,	// (0x00041d53) popup_clock_analogue_window_cp10_t1_ParamLimits

0x7100,	// (0x00042519) cell_dialer2_keypad_pane_g2_ParamLimits

0x7100,	// (0x00042519) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0004acd3) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0004acd3) cell_dialer2_keypad_pane_g

0x711c,	// (0x00042535) cell_dialer2_keypad_pane_t1

0x7b10,	// (0x00042f29) main_cset_text2_pane_ParamLimits

0x7b10,	// (0x00042f29) main_cset_text2_pane

0xf0be,	// (0x0004a4d7) area_vitu2_query_pane_g1_ParamLimits

0x15ad,	// (0x0003c9c6) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0004ae88) area_vitu2_query_pane_g_ParamLimits

0x165e,	// (0x0003ca77) area_vitu2_query_pane_t7_ParamLimits

0x165e,	// (0x0003ca77) area_vitu2_query_pane_t7

0x82bf,	// (0x000436d8) bg_button_pane_cp018_ParamLimits

0x82cd,	// (0x000436e6) bg_button_pane_cp021_ParamLimits

0x1682,	// (0x0003ca9b) bg_button_pane_cp022_ParamLimits

0x1682,	// (0x0003ca9b) bg_vkb2_func_pane_cp08_ParamLimits

0x82bf,	// (0x000436d8) bg_vkb2_func_pane_cp06_ParamLimits

0x82cd,	// (0x000436e6) bg_vkb2_func_pane_cp07_ParamLimits

0x1693,	// (0x0003caac) input_focus_pane_cp09_ParamLimits

0x877b,	// (0x00043b94) cam6_autofocus_pane_ParamLimits

0x877b,	// (0x00043b94) cam6_autofocus_pane

0x879d,	// (0x00043bb6) cam6_image_uncrop_pane_ParamLimits

0x879d,	// (0x00043bb6) cam6_image_uncrop_pane

0x87ca,	// (0x00043be3) cam6_indi_pane_ParamLimits

0x87ca,	// (0x00043be3) cam6_indi_pane

0x87e4,	// (0x00043bfd) cam6_mode_pane_ParamLimits

0x87e4,	// (0x00043bfd) cam6_mode_pane

0x87f8,	// (0x00043c11) cam6_timer_pane_ParamLimits

0x87f8,	// (0x00043c11) cam6_timer_pane

0x8804,	// (0x00043c1d) cam6_zoom_pane_ParamLimits

0x8804,	// (0x00043c1d) cam6_zoom_pane

0x881c,	// (0x00043c35) cam6_mode_pane_g1_ParamLimits

0x881c,	// (0x00043c35) cam6_mode_pane_g1

0x8828,	// (0x00043c41) cam6_mode_pane_g2_ParamLimits

0x8828,	// (0x00043c41) cam6_mode_pane_g2

0x8834,	// (0x00043c4d) cam6_mode_pane_g3_ParamLimits

0x8834,	// (0x00043c4d) cam6_mode_pane_g3

0x8840,	// (0x00043c59) cam6_mode_pane_g4_ParamLimits

0x8840,	// (0x00043c59) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0004af70) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0004af70) cam6_mode_pane_g

0xee7a,	// (0x0004a293) bg_tb_trans_pane_cp08_ParamLimits

0xee7a,	// (0x0004a293) bg_tb_trans_pane_cp08

0xa333,	// (0x0004574c) cam6_battery_pane_ParamLimits

0xa333,	// (0x0004574c) cam6_battery_pane

0xa349,	// (0x00045762) cam6_indi_pane_g1_ParamLimits

0xa349,	// (0x00045762) cam6_indi_pane_g1

0xa35b,	// (0x00045774) cam6_indi_pane_g2_ParamLimits

0xa35b,	// (0x00045774) cam6_indi_pane_g2

0xa36d,	// (0x00045786) cam6_indi_pane_g3_ParamLimits

0xa36d,	// (0x00045786) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0004af79) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0004af79) cam6_indi_pane_g

0xa37f,	// (0x00045798) cam6_indi_pane_t1_ParamLimits

0xa37f,	// (0x00045798) cam6_indi_pane_t1

0x760b,	// (0x00042a24) cam6_autofocus_pane_g1

0x7613,	// (0x00042a2c) cam6_autofocus_pane_g2

0x761b,	// (0x00042a34) cam6_autofocus_pane_g3

0x7623,	// (0x00042a3c) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0004af80) cam6_autofocus_pane_g

0xa3a5,	// (0x000457be) cam6_timer_pane_g1

0xa3ad,	// (0x000457c6) cam6_timer_pane_t1

0xa3bb,	// (0x000457d4) cam6_zoom_cont_pane

0xa3c3,	// (0x000457dc) cam6_zoom_pane_g1

0xa3cb,	// (0x000457e4) cam6_zoom_pane_g2

0x884c,	// (0x00043c65) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0004af89) cam6_zoom_pane_g

0xe1e0,	// (0x000495f9) cam6_battery_pane_g1

0xe1e0,	// (0x000495f9) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0004aaf5) cam6_battery_pane_g

0xa3d3,	// (0x000457ec) cam6_zoom_cont_pane_g1

0xa3dc,	// (0x000457f5) cam6_zoom_cont_pane_g2

0xa3e5,	// (0x000457fe) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0004af90) cam6_zoom_cont_pane_g

0x8869,	// (0x00043c82) cam6_mode_pane_cp_ParamLimits

0x8869,	// (0x00043c82) cam6_mode_pane_cp

0x8804,	// (0x00043c1d) cam6_zoom_pane_cp_ParamLimits

0x8804,	// (0x00043c1d) cam6_zoom_pane_cp

0x887d,	// (0x00043c96) vid6_image_uncrop_cif_pane_ParamLimits

0x887d,	// (0x00043c96) vid6_image_uncrop_cif_pane

0x88a9,	// (0x00043cc2) vid6_image_uncrop_nhd_pane_ParamLimits

0x88a9,	// (0x00043cc2) vid6_image_uncrop_nhd_pane

0x879d,	// (0x00043bb6) vid6_image_uncrop_vga_pane_ParamLimits

0x879d,	// (0x00043bb6) vid6_image_uncrop_vga_pane

0x88c6,	// (0x00043cdf) vid6_image_uncrop_wvga_pane_ParamLimits

0x88c6,	// (0x00043cdf) vid6_image_uncrop_wvga_pane

0x88e3,	// (0x00043cfc) vid6_indi_pane_ParamLimits

0x88e3,	// (0x00043cfc) vid6_indi_pane

0xee7a,	// (0x0004a293) bg_tb_trans_pane_cp09_ParamLimits

0xee7a,	// (0x0004a293) bg_tb_trans_pane_cp09

0xa3fd,	// (0x00045816) cam6_battery_pane_cp_ParamLimits

0xa3fd,	// (0x00045816) cam6_battery_pane_cp

0xa409,	// (0x00045822) vid6_indi_pane_g1_ParamLimits

0xa409,	// (0x00045822) vid6_indi_pane_g1

0xa41b,	// (0x00045834) vid6_indi_pane_g2_ParamLimits

0xa41b,	// (0x00045834) vid6_indi_pane_g2

0xa42d,	// (0x00045846) vid6_indi_pane_g3_ParamLimits

0xa42d,	// (0x00045846) vid6_indi_pane_g3

0xa442,	// (0x0004585b) vid6_indi_pane_g4_ParamLimits

0xa442,	// (0x0004585b) vid6_indi_pane_g4

0xa457,	// (0x00045870) vid6_indi_pane_g5_ParamLimits

0xa457,	// (0x00045870) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0004af97) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0004af97) vid6_indi_pane_g

0xa471,	// (0x0004588a) vid6_indi_pane_t1_ParamLimits

0xa471,	// (0x0004588a) vid6_indi_pane_t1

0xa487,	// (0x000458a0) vid6_indi_pane_t2_ParamLimits

0xa487,	// (0x000458a0) vid6_indi_pane_t2

0xa4af,	// (0x000458c8) vid6_indi_pane_t3_ParamLimits

0xa4af,	// (0x000458c8) vid6_indi_pane_t3

0xa4d7,	// (0x000458f0) vid6_indi_pane_t4_ParamLimits

0xa4d7,	// (0x000458f0) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0004afa2) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0004afa2) vid6_indi_pane_t

0xa4fb,	// (0x00045914) wait_bar_pane_cp08

0x8908,	// (0x00043d21) main_cset_text2_pane_t1_ParamLimits

0x8908,	// (0x00043d21) main_cset_text2_pane_t1

0x8854,	// (0x00043c6d) listscroll_gen_pane_cp06_t1_ParamLimits

0x8854,	// (0x00043c6d) listscroll_gen_pane_cp06_t1

0xb334,	// (0x0004674d) main_cam6_set_pane

0xe44f,	// (0x00049868) bg_tb_trans_pane_cp06_ParamLimits

0x74bb,	// (0x000428d4) cam4_indicators_pane_g1_ParamLimits

0x74cc,	// (0x000428e5) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0004ad10) cam4_indicators_pane_g_ParamLimits

0x74ea,	// (0x00042903) cam4_indicators_pane_t1_ParamLimits

0xc8c1,	// (0x00047cda) bg_tb_trans_pane_cp07_ParamLimits

0x759d,	// (0x000429b6) vid4_indicators_pane_g1_ParamLimits

0x75b1,	// (0x000429ca) vid4_indicators_pane_g2_ParamLimits

0x75c5,	// (0x000429de) vid4_indicators_pane_g3_ParamLimits

0x75d6,	// (0x000429ef) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0004ad22) vid4_indicators_pane_g_ParamLimits

0x75f4,	// (0x00042a0d) vid4_indicators_pane_t1_ParamLimits

0x83f9,	// (0x00043812) vid4_progress_pane_g1_ParamLimits

0x8409,	// (0x00043822) vid4_progress_pane_g2_ParamLimits

0x8419,	// (0x00043832) vid4_progress_pane_g3_ParamLimits

0x842b,	// (0x00043844) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0004aed3) vid4_progress_pane_g_ParamLimits

0x8443,	// (0x0004385c) vid4_progress_pane_t1_ParamLimits

0x8459,	// (0x00043872) vid4_progress_pane_t2_ParamLimits

0x846e,	// (0x00043887) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0004aede) vid4_progress_pane_t_ParamLimits

0x8483,	// (0x0004389c) wait_bar_pane_cp07_ParamLimits

0x893b,	// (0x00043d54) main_cam6_set_pane_g2_ParamLimits

0x893b,	// (0x00043d54) main_cam6_set_pane_g2

0x8947,	// (0x00043d60) main_cset6_listscroll_pane_ParamLimits

0x8947,	// (0x00043d60) main_cset6_listscroll_pane

0x8972,	// (0x00043d8b) main_cset6_slider_pane_ParamLimits

0x8972,	// (0x00043d8b) main_cset6_slider_pane

0x897e,	// (0x00043d97) main_cset6_text2_pane_ParamLimits

0x897e,	// (0x00043d97) main_cset6_text2_pane

0xa50a,	// (0x00045923) main_cset6_text_pane

0xa512,	// (0x0004592b) main_cset_list_pane_copy1_ParamLimits

0xa512,	// (0x0004592b) main_cset_list_pane_copy1

0xa522,	// (0x0004593b) scroll_pane_cp028_copy1

0x8991,	// (0x00043daa) cset_list_set_pane_copy1

0x89a4,	// (0x00043dbd) aid_position_infowindow_above_copy1

0x89ac,	// (0x00043dc5) aid_position_infowindow_below_copy1

0x16e3,	// (0x0003cafc) cset_list_set_pane_g1_copy1

0x1420,	// (0x0003c839) cset_list_set_pane_g3_copy1_ParamLimits

0x1420,	// (0x0003c839) cset_list_set_pane_g3_copy1

0x142f,	// (0x0003c848) cset_list_set_pane_t1_copy1_ParamLimits

0x142f,	// (0x0003c848) cset_list_set_pane_t1_copy1

0xc8c1,	// (0x00047cda) list_highlight_pane_cp021_copy1_ParamLimits

0xc8c1,	// (0x00047cda) list_highlight_pane_cp021_copy1

0xa52b,	// (0x00045944) cset6_slider_pane_ParamLimits

0xa52b,	// (0x00045944) cset6_slider_pane

0xa557,	// (0x00045970) main_cset6_slider_pane_g1_ParamLimits

0xa557,	// (0x00045970) main_cset6_slider_pane_g1

0x89b4,	// (0x00043dcd) main_cset6_slider_pane_g2_ParamLimits

0x89b4,	// (0x00043dcd) main_cset6_slider_pane_g2

0xa57f,	// (0x00045998) main_cset6_slider_pane_g3_ParamLimits

0xa57f,	// (0x00045998) main_cset6_slider_pane_g3

0x89dc,	// (0x00043df5) main_cset6_slider_pane_g4_ParamLimits

0x89dc,	// (0x00043df5) main_cset6_slider_pane_g4

0x89e8,	// (0x00043e01) main_cset6_slider_pane_g5_ParamLimits

0x89e8,	// (0x00043e01) main_cset6_slider_pane_g5

0xed6b,	// (0x0004a184) main_cset6_slider_pane_g7_ParamLimits

0xed6b,	// (0x0004a184) main_cset6_slider_pane_g7

0xed77,	// (0x0004a190) main_cset6_slider_pane_g8_ParamLimits

0xed77,	// (0x0004a190) main_cset6_slider_pane_g8

0x89f6,	// (0x00043e0f) main_cset6_slider_pane_g9_ParamLimits

0x89f6,	// (0x00043e0f) main_cset6_slider_pane_g9

0x8a02,	// (0x00043e1b) main_cset6_slider_pane_g10_ParamLimits

0x8a02,	// (0x00043e1b) main_cset6_slider_pane_g10

0x8a0e,	// (0x00043e27) main_cset6_slider_pane_g11_ParamLimits

0x8a0e,	// (0x00043e27) main_cset6_slider_pane_g11

0x8a1a,	// (0x00043e33) main_cset6_slider_pane_g12_ParamLimits

0x8a1a,	// (0x00043e33) main_cset6_slider_pane_g12

0x8a26,	// (0x00043e3f) main_cset6_slider_pane_g13_ParamLimits

0x8a26,	// (0x00043e3f) main_cset6_slider_pane_g13

0x8a32,	// (0x00043e4b) main_cset6_slider_pane_g14_ParamLimits

0x8a32,	// (0x00043e4b) main_cset6_slider_pane_g14

0x8a3e,	// (0x00043e57) main_cset6_slider_pane_g15_ParamLimits

0x8a3e,	// (0x00043e57) main_cset6_slider_pane_g15

0x8a56,	// (0x00043e6f) main_cset6_slider_pane_g16_ParamLimits

0x8a56,	// (0x00043e6f) main_cset6_slider_pane_g16

0x8a64,	// (0x00043e7d) main_cset6_slider_pane_g17_ParamLimits

0x8a64,	// (0x00043e7d) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0004afab) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0004afab) main_cset6_slider_pane_g

0xa58b,	// (0x000459a4) main_cset6_slider_pane_t1_ParamLimits

0xa58b,	// (0x000459a4) main_cset6_slider_pane_t1

0x8a8a,	// (0x00043ea3) main_cset6_slider_pane_t2_ParamLimits

0x8a8a,	// (0x00043ea3) main_cset6_slider_pane_t2

0x8ab5,	// (0x00043ece) main_cset6_slider_pane_t3_ParamLimits

0x8ab5,	// (0x00043ece) main_cset6_slider_pane_t3

0x8ae0,	// (0x00043ef9) main_cset6_slider_pane_t4_ParamLimits

0x8ae0,	// (0x00043ef9) main_cset6_slider_pane_t4

0x8b0b,	// (0x00043f24) main_cset6_slider_pane_t5_ParamLimits

0x8b0b,	// (0x00043f24) main_cset6_slider_pane_t5

0xa5cc,	// (0x000459e5) main_cset6_slider_pane_t7_ParamLimits

0xa5cc,	// (0x000459e5) main_cset6_slider_pane_t7

0x8b38,	// (0x00043f51) main_cset6_slider_pane_t8_ParamLimits

0x8b38,	// (0x00043f51) main_cset6_slider_pane_t8

0x8b5c,	// (0x00043f75) main_cset6_slider_pane_t9_ParamLimits

0x8b5c,	// (0x00043f75) main_cset6_slider_pane_t9

0x8b80,	// (0x00043f99) main_cset6_slider_pane_t10_ParamLimits

0x8b80,	// (0x00043f99) main_cset6_slider_pane_t10

0x8ba4,	// (0x00043fbd) main_cset6_slider_pane_t11_ParamLimits

0x8ba4,	// (0x00043fbd) main_cset6_slider_pane_t11

0xa602,	// (0x00045a1b) main_cset6_slider_pane_t14_ParamLimits

0xa602,	// (0x00045a1b) main_cset6_slider_pane_t14

0xa63b,	// (0x00045a54) main_cset6_slider_pane_t15_ParamLimits

0xa63b,	// (0x00045a54) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0004afd0) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0004afd0) main_cset6_slider_pane_t

0xee88,	// (0x0004a2a1) cset_slider_pane_g1_copy1

0xee91,	// (0x0004a2aa) cset_slider_pane_g2_copy1

0xee9a,	// (0x0004a2b3) cset_slider_pane_g3_copy1

0xb334,	// (0x0004674d) bg_popup_sub_pane_cp011_copy1

0xa674,	// (0x00045a8d) main_cset_text_pane_g1_copy1

0xeee6,	// (0x0004a2ff) main_cset_text_pane_t1_copy1

0xeef4,	// (0x0004a30d) main_cset_text_pane_t2_copy1

0xef02,	// (0x0004a31b) main_cset_text_pane_t3_copy1

0xef10,	// (0x0004a329) main_cset_text_pane_t4_copy1

0xef1e,	// (0x0004a337) main_cset_text_pane_t5_copy1

0xa67c,	// (0x00045a95) main_cset_text_pane_t6_copy1

0xa68a,	// (0x00045aa3) main_cset_text_pane_t7_copy1

0x8bc8,	// (0x00043fe1) main_cset_text2_pane_t1_copy1

0xc8c1,	// (0x00047cda) main_ncimui_pane

0x5565,	// (0x0004097e) popup_query_ncimui_window_ParamLimits

0x5565,	// (0x0004097e) popup_query_ncimui_window

0x12c5,	// (0x0003c6de) field_cale_ev2_pane_g4_ParamLimits

0x12c5,	// (0x0003c6de) field_cale_ev2_pane_g4

0x6e20,	// (0x00042239) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6e20,	// (0x00042239) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0004acae) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0004acae) cell_video_dialer_keypad_pane_g

0x6e38,	// (0x00042251) cell_video_dialer_keypad_pane_t1

0xb334,	// (0x0004674d) bg_popup_window_pane_cp012

0xc643,	// (0x00047a5c) heading_pane_cp06

0xa6b6,	// (0x00045acf) ncim_query_content_pane

0xb334,	// (0x0004674d) bg_popup_heading_pane_cp01

0xa6be,	// (0x00045ad7) ncim_heading_pane_t1

0xa6cc,	// (0x00045ae5) ncim_indicator_popup_pane

0xa6de,	// (0x00045af7) ncim_query_button_pane

0xa6f2,	// (0x00045b0b) ncim_query_content_pane_t1

0xa704,	// (0x00045b1d) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0004b014) ncim_query_content_pane_t

0xa73e,	// (0x00045b57) ncim_query_list_pane

0xa750,	// (0x00045b69) ncim_query_popup_pane

0xa6cc,	// (0x00045ae5) ncim_indicator_popup_pane_ParamLimits

0x8d1b,	// (0x00044134) ncim_query_content_pane_g1_ParamLimits

0x8d1b,	// (0x00044134) ncim_query_content_pane_g1

0xa6f2,	// (0x00045b0b) ncim_query_content_pane_t1_ParamLimits

0xa704,	// (0x00045b1d) ncim_query_content_pane_t2_ParamLimits

0x8d27,	// (0x00044140) ncim_query_content_pane_t3_ParamLimits

0x8d27,	// (0x00044140) ncim_query_content_pane_t3

0x8d44,	// (0x0004415d) ncim_query_content_pane_t4_ParamLimits

0x8d44,	// (0x0004415d) ncim_query_content_pane_t4

0x8d61,	// (0x0004417a) ncim_query_content_pane_t5_ParamLimits

0x8d61,	// (0x0004417a) ncim_query_content_pane_t5

0xa716,	// (0x00045b2f) ncim_query_content_pane_t6_ParamLimits

0xa716,	// (0x00045b2f) ncim_query_content_pane_t6

0xfbfb,	// (0x0004b014) ncim_query_content_pane_t_ParamLimits

0xa73e,	// (0x00045b57) ncim_query_list_pane_ParamLimits

0xa750,	// (0x00045b69) ncim_query_popup_pane_ParamLimits

0xa764,	// (0x00045b7d) wait_bar_pane_cp04

0xb334,	// (0x0004674d) input_focus_pane_cp011

0xa76c,	// (0x00045b85) ncim_query_popup_pane_t1

0xa77a,	// (0x00045b93) ncim_list_query_list_pane_ParamLimits

0xa77a,	// (0x00045b93) ncim_list_query_list_pane

0xb334,	// (0x0004674d) bg_button_pane_cp027

0xa787,	// (0x00045ba0) ncim_query_button_pane_g1

0xb334,	// (0x0004674d) list_highlight_pane_cp012

0xa791,	// (0x00045baa) ncim_list_query_list_pane_g1

0xa799,	// (0x00045bb2) ncim_list_query_list_pane_t1

0x74db,	// (0x000428f4) cam4_indicators_pane_g3_ParamLimits

0x74db,	// (0x000428f4) cam4_indicators_pane_g3

0x75e2,	// (0x000429fb) vid4_indicators_pane_g5_ParamLimits

0x75e2,	// (0x000429fb) vid4_indicators_pane_g5

0x8437,	// (0x00043850) vid4_progress_pane_g5_ParamLimits

0x8437,	// (0x00043850) vid4_progress_pane_g5

0x8c07,	// (0x00044020) main_ncimui_pane_g1

0x8c6f,	// (0x00044088) ncimui_group_query_pane_ParamLimits

0x8c6f,	// (0x00044088) ncimui_group_query_pane

0x8cb7,	// (0x000440d0) ncimui_list_pane_ParamLimits

0x8cb7,	// (0x000440d0) ncimui_list_pane

0x8cde,	// (0x000440f7) ncimui_text_pane_ParamLimits

0x8cde,	// (0x000440f7) ncimui_text_pane

0x8d7e,	// (0x00044197) ncimui_text_pane_t1_ParamLimits

0x8d7e,	// (0x00044197) ncimui_text_pane_t1

0xa7a7,	// (0x00045bc0) ncimui_list_single_graphic_pane_ParamLimits

0xa7a7,	// (0x00045bc0) ncimui_list_single_graphic_pane

0x8d9d,	// (0x000441b6) ncimui_query_pane_ParamLimits

0x8d9d,	// (0x000441b6) ncimui_query_pane

0xb334,	// (0x0004674d) list_highlight_pane_cp013

0xa7b7,	// (0x00045bd0) ncim_list_query_list_pane_t1_copy1

0xa791,	// (0x00045baa) ncim_list_single_graphic_pane_g1

0x8db0,	// (0x000441c9) ncim_query_button_pane_cp01

0x8dbc,	// (0x000441d5) ncim_query_entry_pane_ParamLimits

0x8dbc,	// (0x000441d5) ncim_query_entry_pane

0x8dcf,	// (0x000441e8) ncimui_query_pane_g1

0x8ddb,	// (0x000441f4) ncimui_query_pane_t1_ParamLimits

0x8ddb,	// (0x000441f4) ncimui_query_pane_t1

0xc8c1,	// (0x00047cda) input_focus_pane_cp012

0xa7c5,	// (0x00045bde) ncim_query_entry_pane_t1

0xbd98,	// (0x000471b1) main_im_pane_ParamLimits

0xc8c1,	// (0x00047cda) main_mobtv_pane_ParamLimits

0xc8c1,	// (0x00047cda) main_mobtv_pane

0x8a72,	// (0x00043e8b) main_cset6_slider_pane_g18_ParamLimits

0x8a72,	// (0x00043e8b) main_cset6_slider_pane_g18

0x8a7e,	// (0x00043e97) main_cset6_slider_pane_g19_ParamLimits

0x8a7e,	// (0x00043e97) main_cset6_slider_pane_g19

0xec1c,	// (0x0004a035) bg_main_mobtv_pane_ParamLimits

0xec1c,	// (0x0004a035) bg_main_mobtv_pane

0x8df4,	// (0x0004420d) main_mobtv_info_pane

0x8dff,	// (0x00044218) main_mobtv_loading_pane_ParamLimits

0x8dff,	// (0x00044218) main_mobtv_loading_pane

0xa7d7,	// (0x00045bf0) main_mobtv_pg_channel_list_pane

0xa7e1,	// (0x00045bfa) main_mobtv_pg_hdr_pane

0x8e0c,	// (0x00044225) main_mobtv_programe_curr_pane_ParamLimits

0x8e0c,	// (0x00044225) main_mobtv_programe_curr_pane

0x8e19,	// (0x00044232) main_mobtv_programe_next_pane_ParamLimits

0x8e19,	// (0x00044232) main_mobtv_programe_next_pane

0xa7ea,	// (0x00045c03) popup_mobtv_noti_window

0xe1e0,	// (0x000495f9) main_tv_pg_hdr_pane_g1

0xa7f2,	// (0x00045c0b) main_tv_pg_hdr_pane_g2

0xa7fa,	// (0x00045c13) main_tv_pg_hdr_pane_g3

0xa802,	// (0x00045c1b) main_tv_pg_hdr_pane_g4

0xa80a,	// (0x00045c23) main_tv_pg_hdr_pane_g5

0xa814,	// (0x00045c2d) main_tv_pg_hdr_pane_g6

0xa81e,	// (0x00045c37) main_tv_pg_hdr_pane_g7

0xa828,	// (0x00045c41) main_tv_pg_hdr_pane_g8

0xa832,	// (0x00045c4b) main_tv_pg_hdr_pane_g9

0xa83c,	// (0x00045c55) main_tv_pg_hdr_pane_g10

0xa846,	// (0x00045c5f) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0004b021) main_tv_pg_hdr_pane_g

0xa850,	// (0x00045c69) main_tv_pg_hdr_pane_t1

0xa85e,	// (0x00045c77) main_tv_pg_hdr_pane_t2

0xa86c,	// (0x00045c85) main_tv_pg_hdr_pane_t3

0xa87c,	// (0x00045c95) main_tv_pg_hdr_pane_t4

0xa88c,	// (0x00045ca5) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0004b038) main_tv_pg_hdr_pane_t

0xa89c,	// (0x00045cb5) single_mobtv_pg_channel_pane_ParamLimits

0xa89c,	// (0x00045cb5) single_mobtv_pg_channel_pane

0xa8ae,	// (0x00045cc7) single_mobtv_pg_channel_table_pane

0xa8b7,	// (0x00045cd0) single_mobtv_pg_channel_thumb_pane

0xa8c0,	// (0x00045cd9) single_tv_pg_channel_pane_g1

0xa8c9,	// (0x00045ce2) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0004b043) single_tv_pg_channel_pane_g

0xe44f,	// (0x00049868) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe44f,	// (0x00049868) bg_single_mobtv_pg_channel_thumb_pane

0xa8d2,	// (0x00045ceb) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xa8d2,	// (0x00045ceb) single_mobtv_pg_channel_thumb_pane_g1

0xa8e0,	// (0x00045cf9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xa8e0,	// (0x00045cf9) single_mobtv_pg_channel_thumb_pane_g2

0xa8ec,	// (0x00045d05) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xa8ec,	// (0x00045d05) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0004b048) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0004b048) single_mobtv_pg_channel_thumb_pane_g

0xa8f8,	// (0x00045d11) single_mobtv_pg_channel_thumb_pane_t1

0xa906,	// (0x00045d1f) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0004b04f) single_mobtv_pg_channel_thumb_pane_t

0xe1e0,	// (0x000495f9) bg_single_mobtv_pg_channel_table_pane_g1

0xe1e0,	// (0x000495f9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0004aaf5) bg_single_mobtv_pg_channel_table_pane_g

0xa914,	// (0x00045d2d) single_mobtv_pg_channel_table_pane_t1

0xa922,	// (0x00045d3b) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0004b054) single_mobtv_pg_channel_table_pane_t

0x8e2e,	// (0x00044247) main_mobtv_info_pane_g1_ParamLimits

0x8e2e,	// (0x00044247) main_mobtv_info_pane_g1

0x8e4a,	// (0x00044263) main_mobtv_info_pane_t1_ParamLimits

0x8e4a,	// (0x00044263) main_mobtv_info_pane_t1

0x8ec2,	// (0x000442db) main_mobtv_info_pane_t2_ParamLimits

0x8ec2,	// (0x000442db) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0004b05e) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0004b05e) main_mobtv_info_pane_t

0x8f51,	// (0x0004436a) wait_bar_pane_cp05

0x8f63,	// (0x0004437c) main_mobtv_loading_pane_g1_ParamLimits

0x8f63,	// (0x0004437c) main_mobtv_loading_pane_g1

0x8f71,	// (0x0004438a) main_mobtv_loading_pane_g2_ParamLimits

0x8f71,	// (0x0004438a) main_mobtv_loading_pane_g2

0x8f7d,	// (0x00044396) main_mobtv_loading_pane_g3_ParamLimits

0x8f7d,	// (0x00044396) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0004b065) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0004b065) main_mobtv_loading_pane_g

0xa930,	// (0x00045d49) main_mobtv_loading_pane_t1_ParamLimits

0xa930,	// (0x00045d49) main_mobtv_loading_pane_t1

0xa948,	// (0x00045d61) main_mobtv_loading_pane_t2_ParamLimits

0xa948,	// (0x00045d61) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0004b06c) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0004b06c) main_mobtv_loading_pane_t

0x8f8b,	// (0x000443a4) wait_bar_pane_cp06_ParamLimits

0x8f8b,	// (0x000443a4) wait_bar_pane_cp06

0xa96c,	// (0x00045d85) main_mobtv_programe_curr_pane_t1

0xa97a,	// (0x00045d93) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0004b071) main_mobtv_programe_curr_pane_t

0xa988,	// (0x00045da1) main_mobtv_programe_next_pane_t1

0xa996,	// (0x00045daf) main_mobtv_programe_next_pane_t2

0xa9a4,	// (0x00045dbd) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0004b076) main_mobtv_programe_next_pane_t

0xb334,	// (0x0004674d) bg_popup_mobtv_noti_window_pane

0xa9b2,	// (0x00045dcb) popup_mobtv_noti_window_g1

0xa9ba,	// (0x00045dd3) popup_mobtv_noti_window_t1

0xa9c8,	// (0x00045de1) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0004b07d) popup_mobtv_noti_window_t

0xe1e0,	// (0x000495f9) bg_popup_mobtv_noti_window_pane_g1

0xb334,	// (0x0004674d) sc_clock_pane

0xb334,	// (0x0004674d) main_fs_bigclock_pane

0x862e,	// (0x00043a47) blid2_tripm_pane_t4_ParamLimits

0x862e,	// (0x00043a47) blid2_tripm_pane_t4

0x8f97,	// (0x000443b0) sc_clock_pane_g1_ParamLimits

0x8f97,	// (0x000443b0) sc_clock_pane_g1

0x8fa5,	// (0x000443be) sc_clock_pane_t1_ParamLimits

0x8fa5,	// (0x000443be) sc_clock_pane_t1

0x8fb8,	// (0x000443d1) sc_clock_pane_t2_ParamLimits

0x8fb8,	// (0x000443d1) sc_clock_pane_t2

0x8fca,	// (0x000443e3) sc_clock_pane_t3_ParamLimits

0x8fca,	// (0x000443e3) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0004b082) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0004b082) sc_clock_pane_t

0x983d,	// (0x00044c56) main_fs_bigclock_indicator_pane_ParamLimits

0x983d,	// (0x00044c56) main_fs_bigclock_indicator_pane

0x904d,	// (0x00044466) main_fs_bigclock_pane_g1_ParamLimits

0x904d,	// (0x00044466) main_fs_bigclock_pane_g1

0x9849,	// (0x00044c62) main_fs_bigclock_pane_t1_ParamLimits

0x9849,	// (0x00044c62) main_fs_bigclock_pane_t1

0x985b,	// (0x00044c74) main_fs_bigclock_pane_t2_ParamLimits

0x985b,	// (0x00044c74) main_fs_bigclock_pane_t2

0x986f,	// (0x00044c88) main_fs_bigclock_pane_t3_ParamLimits

0x986f,	// (0x00044c88) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0004b28c) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0004b28c) main_fs_bigclock_pane_t

0xb235,	// (0x0004664e) main_fs_bigclock_indicator_pane_g1

0xa6e6,	// (0x00045aff) ncim_query_content_pane_g2_ParamLimits

0xa6e6,	// (0x00045aff) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0004b00f) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0004b00f) ncim_query_content_pane_g

0x8fde,	// (0x000443f7) sc_clock_pane_t4_ParamLimits

0x8fde,	// (0x000443f7) sc_clock_pane_t4

0xc8c1,	// (0x00047cda) main_radioblah_pane

0x737e,	// (0x00042797) cell_call4_button_pane_t1_copy1_ParamLimits

0x737e,	// (0x00042797) cell_call4_button_pane_t1_copy1

0x8c21,	// (0x0004403a) main_ncimui_pane_t1_ParamLimits

0x8c21,	// (0x0004403a) main_ncimui_pane_t1

0x8c3b,	// (0x00044054) main_ncimui_pane_t2_ParamLimits

0x8c3b,	// (0x00044054) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0004b008) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0004b008) main_ncimui_pane_t

0xab0d,	// (0x00045f26) main_radioblah_anim_pane_ParamLimits

0xab0d,	// (0x00045f26) main_radioblah_anim_pane

0xab1e,	// (0x00045f37) main_radioblah_info_pane_ParamLimits

0xab1e,	// (0x00045f37) main_radioblah_info_pane

0xab32,	// (0x00045f4b) main_radioblah_pane_t1_ParamLimits

0xab32,	// (0x00045f4b) main_radioblah_pane_t1

0xab4e,	// (0x00045f67) main_radioblah_pane_t2_ParamLimits

0xab4e,	// (0x00045f67) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0004b0a3) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0004b0a3) main_radioblah_pane_t

0x90a3,	// (0x000444bc) main_radioblah_rocker_ctrl_pane_ParamLimits

0x90a3,	// (0x000444bc) main_radioblah_rocker_ctrl_pane

0xab96,	// (0x00045faf) main_radioblah_info_pane_t1_ParamLimits

0xab96,	// (0x00045faf) main_radioblah_info_pane_t1

0x90e8,	// (0x00044501) main_radioblah_info_pane_t2_ParamLimits

0x90e8,	// (0x00044501) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0004b0ac) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0004b0ac) main_radioblah_info_pane_t

0xe1e0,	// (0x000495f9) main_radioblah_rocker_ctrl_pane_g1

0x9198,	// (0x000445b1) main_radioblah_rocker_ctrl_pane_g2

0x91a0,	// (0x000445b9) main_radioblah_rocker_ctrl_pane_g3

0x91a8,	// (0x000445c1) main_radioblah_rocker_ctrl_pane_g4

0x91b0,	// (0x000445c9) main_radioblah_rocker_ctrl_pane_g5

0x91b8,	// (0x000445d1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0004b0b5) main_radioblah_rocker_ctrl_pane_g

0x8bc8,	// (0x00043fe1) main_cset_text2_pane_t1_copy1_ParamLimits

0x7409,	// (0x00042822) cam4_image_uncrop_qvga_pane

0x7550,	// (0x00042969) vid4_image_uncrop_qcif_pane

0x87bc,	// (0x00043bd5) cam6_image_uncrop_qvga_pane_ParamLimits

0x87bc,	// (0x00043bd5) cam6_image_uncrop_qvga_pane

0xa3ed,	// (0x00045806) vid6_image_uncrop_qcif_pane_ParamLimits

0xa3ed,	// (0x00045806) vid6_image_uncrop_qcif_pane

0xb334,	// (0x0004674d) bg_popup_preview_window_pane_cp03

0xa698,	// (0x00045ab1) list_cset_text2_pane

0xa6a0,	// (0x00045ab9) main_cset6_text2_pane_g1

0xa6a8,	// (0x00045ac1) main_cset6_text2_pane_t1

0x91c0,	// (0x000445d9) list_cset_text2_pane_t1_ParamLimits

0x91c0,	// (0x000445d9) list_cset_text2_pane_t1

0xc8c1,	// (0x00047cda) main_radioblah_pane_ParamLimits

0x8f3d,	// (0x00044356) main_mobtv_info_pane_t3_ParamLimits

0x8f3d,	// (0x00044356) main_mobtv_info_pane_t3

0x9091,	// (0x000444aa) main_radioblah_pane_g1

0x90bc,	// (0x000444d5) main_radioblah_info_pane_g1

0x913d,	// (0x00044556) main_radioblah_info_pane_t3_ParamLimits

0x913d,	// (0x00044556) main_radioblah_info_pane_t3

0x43c2,	// (0x0003f7db) highlight_cell_cale_month_pane_ParamLimits

0x43c2,	// (0x0003f7db) highlight_cell_cale_month_pane

0xb334,	// (0x0004674d) main_phob_fisheye_pane

0xe54b,	// (0x00049964) scroll_pane_cp0031_ParamLimits

0xe54b,	// (0x00049964) scroll_pane_cp0031

0xa4fb,	// (0x00045914) wait_bar_pane_cp08_ParamLimits

0x8991,	// (0x00043daa) cset_list_set_pane_copy1_ParamLimits

0xabd0,	// (0x00045fe9) highlight_cell_cale_month_pane_g1

0x91dd,	// (0x000445f6) highlight_cell_cale_month_pane_t1

0x00c3,	// (0x0003b4dc) list_gen_pane_cp01

0xed56,	// (0x0004a16f) scroll_pane_01

0x91eb,	// (0x00044604) list_single_double_fisheye_pane

0x17c3,	// (0x0003cbdc) list_double_fisheye_pane_g1_ParamLimits

0x17c3,	// (0x0003cbdc) list_double_fisheye_pane_g1

0x17cf,	// (0x0003cbe8) list_double_fisheye_pane_g2_ParamLimits

0x17cf,	// (0x0003cbe8) list_double_fisheye_pane_g2

0x91f4,	// (0x0004460d) list_double_fisheye_pane_g3_ParamLimits

0x91f4,	// (0x0004460d) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0004b0c2) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0004b0c2) list_double_fisheye_pane_g

0x1800,	// (0x0003cc19) list_double_fisheye_pane_t1_ParamLimits

0x1800,	// (0x0003cc19) list_double_fisheye_pane_t1

0x181b,	// (0x0003cc34) list_double_fisheye_pane_t2_ParamLimits

0x181b,	// (0x0003cc34) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0004b0cd) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0004b0cd) list_double_fisheye_pane_t

0xb334,	// (0x0004674d) main_call5_pane

0x9004,	// (0x0004441d) sc_swipe_pane_ParamLimits

0x9004,	// (0x0004441d) sc_swipe_pane

0x920c,	// (0x00044625) call5_image_pane_ParamLimits

0x920c,	// (0x00044625) call5_image_pane

0x921c,	// (0x00044635) call5_swipe_1_pane_ParamLimits

0x921c,	// (0x00044635) call5_swipe_1_pane

0x9228,	// (0x00044641) call5_swipe_2_pane_ParamLimits

0x9228,	// (0x00044641) call5_swipe_2_pane

0x9242,	// (0x0004465b) popup_call5_audio_first_window_ParamLimits

0x9242,	// (0x0004465b) popup_call5_audio_first_window

0xe44f,	// (0x00049868) call5_swipe_1_pane_g1_ParamLimits

0xe44f,	// (0x00049868) call5_swipe_1_pane_g1

0xabd8,	// (0x00045ff1) call5_swipe_1_pane_g2_ParamLimits

0xabd8,	// (0x00045ff1) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0004b0d2) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0004b0d2) call5_swipe_1_pane_g

0xabe4,	// (0x00045ffd) call5_swipe_1_pane_t1_ParamLimits

0xabe4,	// (0x00045ffd) call5_swipe_1_pane_t1

0xe44f,	// (0x00049868) call5_swipe_2_pane_g1_ParamLimits

0xe44f,	// (0x00049868) call5_swipe_2_pane_g1

0xabf9,	// (0x00046012) call5_swipe_2_pane_g2_ParamLimits

0xabf9,	// (0x00046012) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0004b0d7) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0004b0d7) call5_swipe_2_pane_g

0xac05,	// (0x0004601e) call5_swipe_2_pane_t1_ParamLimits

0xac05,	// (0x0004601e) call5_swipe_2_pane_t1

0xac1a,	// (0x00046033) sc_swipe_pane_g1_ParamLimits

0xac1a,	// (0x00046033) sc_swipe_pane_g1

0xac27,	// (0x00046040) sc_swipe_pane_g2_ParamLimits

0xac27,	// (0x00046040) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0004b0dc) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0004b0dc) sc_swipe_pane_g

0xac33,	// (0x0004604c) sc_swipe_pane_t1_ParamLimits

0xac33,	// (0x0004604c) sc_swipe_pane_t1

0xb334,	// (0x0004674d) main_cmail_launcher_pane

0x9250,	// (0x00044669) aid_size_cell_cmail_l_ParamLimits

0x9250,	// (0x00044669) aid_size_cell_cmail_l

0x925e,	// (0x00044677) grid_cmail_l_pane_ParamLimits

0x925e,	// (0x00044677) grid_cmail_l_pane

0x926e,	// (0x00044687) cell_cmail_l_pane_ParamLimits

0x926e,	// (0x00044687) cell_cmail_l_pane

0xac48,	// (0x00046061) cell_cmail_l_pane_g1_ParamLimits

0xac48,	// (0x00046061) cell_cmail_l_pane_g1

0xac54,	// (0x0004606d) cell_cmail_l_pane_t1_ParamLimits

0xac54,	// (0x0004606d) cell_cmail_l_pane_t1

0xac6a,	// (0x00046083) cell_cmail_l_pane_t2_ParamLimits

0xac6a,	// (0x00046083) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0004b0e1) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0004b0e1) cell_cmail_l_pane_t

0xc8c1,	// (0x00047cda) grid_highlight_pane_cp018_ParamLimits

0xc8c1,	// (0x00047cda) grid_highlight_pane_cp018

0x245f,	// (0x0003d878) main2_pane_ParamLimits

0x245f,	// (0x0003d878) main2_pane

0xbe31,	// (0x0004724a) popup_sp_fs_action_menu_bg_pane_g1

0xbe39,	// (0x00047252) popup_sp_fs_action_menu_bg_pane_g2

0xbe41,	// (0x0004725a) popup_sp_fs_action_menu_bg_pane_g3

0xbe49,	// (0x00047262) popup_sp_fs_action_menu_bg_pane_g4

0xbe51,	// (0x0004726a) popup_sp_fs_action_menu_bg_pane_g5

0xbe59,	// (0x00047272) popup_sp_fs_action_menu_bg_pane_g6

0xbe61,	// (0x0004727a) popup_sp_fs_action_menu_bg_pane_g7

0xbe69,	// (0x00047282) popup_sp_fs_action_menu_bg_pane_g8

0xbe71,	// (0x0004728a) popup_sp_fs_action_menu_bg_pane_g9

0xbe79,	// (0x00047292) popup_sp_fs_action_menu_bg_pane_g10

0xbe79,	// (0x00047292) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0004a5a3) popup_sp_fs_action_menu_bg_pane_g

0x0f82,	// (0x0003c39b) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0f82,	// (0x0003c39b) list_medium_line_x2_t3_g3_g1

0x0f8e,	// (0x0003c3a7) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0f8e,	// (0x0003c3a7) list_medium_line_x2_t3_g3_g2

0x0f9a,	// (0x0003c3b3) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0f9a,	// (0x0003c3b3) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0004a651) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0004a651) list_medium_line_x2_t3_g3_g

0x0fa6,	// (0x0003c3bf) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0fa6,	// (0x0003c3bf) list_medium_line_x2_t3_g3_t1

0x0fbb,	// (0x0003c3d4) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0fbb,	// (0x0003c3d4) list_medium_line_x2_t3_g3_t2

0x0fcd,	// (0x0003c3e6) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0fcd,	// (0x0003c3e6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0004a658) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0004a658) list_medium_line_x2_t3_g3_t

0x0f82,	// (0x0003c39b) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0f82,	// (0x0003c39b) list_medium_line_x2_t3_g2_g1

0x0f9a,	// (0x0003c3b3) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0f9a,	// (0x0003c3b3) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0004a65f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0004a65f) list_medium_line_x2_t3_g2_g

0x0fe2,	// (0x0003c3fb) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0fe2,	// (0x0003c3fb) list_medium_line_x2_t3_g2_t1

0x0ff8,	// (0x0003c411) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0ff8,	// (0x0003c411) list_medium_line_x2_t3_g2_t2

0x100a,	// (0x0003c423) list_medium_line_x2_t3_g2_t3_ParamLimits

0x100a,	// (0x0003c423) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0004a664) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0004a664) list_medium_line_x2_t3_g2_t

0x0f82,	// (0x0003c39b) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0f82,	// (0x0003c39b) list_medium_line_x2_t4_g4_g1

0x1027,	// (0x0003c440) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1027,	// (0x0003c440) list_medium_line_x2_t4_g4_g2

0x0f8e,	// (0x0003c3a7) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0f8e,	// (0x0003c3a7) list_medium_line_x2_t4_g4_g3

0x1033,	// (0x0003c44c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1033,	// (0x0003c44c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0004a66b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0004a66b) list_medium_line_x2_t4_g4_g

0x103f,	// (0x0003c458) list_medium_line_x2_t4_g4_t1_ParamLimits

0x103f,	// (0x0003c458) list_medium_line_x2_t4_g4_t1

0x1059,	// (0x0003c472) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1059,	// (0x0003c472) list_medium_line_x2_t4_g4_t2

0x106f,	// (0x0003c488) list_medium_line_x2_t4_g4_t3_ParamLimits

0x106f,	// (0x0003c488) list_medium_line_x2_t4_g4_t3

0x1084,	// (0x0003c49d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1084,	// (0x0003c49d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0004a674) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0004a674) list_medium_line_x2_t4_g4_t

0x0f82,	// (0x0003c39b) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0f82,	// (0x0003c39b) list_medium_line_x2_t2_g4_g1

0x1027,	// (0x0003c440) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1027,	// (0x0003c440) list_medium_line_x2_t2_g4_g2

0x0f8e,	// (0x0003c3a7) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0f8e,	// (0x0003c3a7) list_medium_line_x2_t2_g4_g3

0x0f9a,	// (0x0003c3b3) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0f9a,	// (0x0003c3b3) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0004a6db) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0004a6db) list_medium_line_x2_t2_g4_g

0x1096,	// (0x0003c4af) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1096,	// (0x0003c4af) list_medium_line_x2_t2_g4_t1

0x0fcd,	// (0x0003c3e6) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0fcd,	// (0x0003c3e6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0004a6e4) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0004a6e4) list_medium_line_x2_t2_g4_t

0x0f82,	// (0x0003c39b) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0f82,	// (0x0003c39b) list_medium_line_x2_t2_g3_g1

0x0f8e,	// (0x0003c3a7) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0f8e,	// (0x0003c3a7) list_medium_line_x2_t2_g3_g2

0x0f9a,	// (0x0003c3b3) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0f9a,	// (0x0003c3b3) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0004a651) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0004a651) list_medium_line_x2_t2_g3_g

0x10ab,	// (0x0003c4c4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x10ab,	// (0x0003c4c4) list_medium_line_x2_t2_g3_t1

0x0fcd,	// (0x0003c3e6) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0fcd,	// (0x0003c3e6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0004a6e9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0004a6e9) list_medium_line_x2_t2_g3_t

0x459a,	// (0x0003f9b3) main_sp_fs_list_pane_ParamLimits

0x459a,	// (0x0003f9b3) main_sp_fs_list_pane

0x45a6,	// (0x0003f9bf) sp_fs_scroll_pane_ParamLimits

0x45a6,	// (0x0003f9bf) sp_fs_scroll_pane

0x10c0,	// (0x0003c4d9) list_medium_line_x2_t3_t1

0x10d0,	// (0x0003c4e9) list_medium_line_x2_t3_t2

0x10de,	// (0x0003c4f7) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0004a734) list_medium_line_x2_t3_t

0x10ec,	// (0x0003c505) list_medium_line_x3_t4_t1

0x10fc,	// (0x0003c515) list_medium_line_x3_t4_t2

0x110a,	// (0x0003c523) list_medium_line_x3_t4_t3

0x10de,	// (0x0003c4f7) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0004a73b) list_medium_line_x3_t4_t

0x1118,	// (0x0003c531) list_medium_line_x4_t5_t1

0x1128,	// (0x0003c541) list_medium_line_x4_t5_t2

0x110a,	// (0x0003c523) list_medium_line_x4_t5_t3

0x1136,	// (0x0003c54f) list_medium_line_x4_t5_t4

0x10de,	// (0x0003c4f7) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0004a744) list_medium_line_x4_t5_t

0x0f82,	// (0x0003c39b) list_medium_line_t4_g4_g1_ParamLimits

0x0f82,	// (0x0003c39b) list_medium_line_t4_g4_g1

0x1033,	// (0x0003c44c) list_medium_line_t4_g4_g2_ParamLimits

0x1033,	// (0x0003c44c) list_medium_line_t4_g4_g2

0x1144,	// (0x0003c55d) list_medium_line_t4_g4_g3_ParamLimits

0x1144,	// (0x0003c55d) list_medium_line_t4_g4_g3

0x0f9a,	// (0x0003c3b3) list_medium_line_t4_g4_g4_ParamLimits

0x0f9a,	// (0x0003c3b3) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0004a74f) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0004a74f) list_medium_line_t4_g4_g

0x1150,	// (0x0003c569) list_medium_line_t4_g4_t1_ParamLimits

0x1150,	// (0x0003c569) list_medium_line_t4_g4_t1

0x1165,	// (0x0003c57e) list_medium_line_t4_g4_t2_ParamLimits

0x1165,	// (0x0003c57e) list_medium_line_t4_g4_t2

0x117a,	// (0x0003c593) list_medium_line_t4_g4_t3_ParamLimits

0x117a,	// (0x0003c593) list_medium_line_t4_g4_t3

0x0fcd,	// (0x0003c3e6) list_medium_line_t4_g4_t4_ParamLimits

0x0fcd,	// (0x0003c3e6) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0004a758) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0004a758) list_medium_line_t4_g4_t

0x46b3,	// (0x0003facc) chi_dic_find_pane_g1

0x5522,	// (0x0004093b) main_tport_pane

0x1444,	// (0x0003c85d) list_medium_line_plain_t1

0x1452,	// (0x0003c86b) list_medium_line_t2_g2_g1_ParamLimits

0x1452,	// (0x0003c86b) list_medium_line_t2_g2_g1

0x145e,	// (0x0003c877) list_medium_line_t2_g2_g2_ParamLimits

0x145e,	// (0x0003c877) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004ae19) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004ae19) list_medium_line_t2_g2_g

0x146a,	// (0x0003c883) list_medium_line_t2_g2_t1_ParamLimits

0x146a,	// (0x0003c883) list_medium_line_t2_g2_t1

0x1484,	// (0x0003c89d) list_medium_line_t2_g2_t2_ParamLimits

0x1484,	// (0x0003c89d) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0004ae1e) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0004ae1e) list_medium_line_t2_g2_t

0x16a4,	// (0x0003cabd) aid_sp_fs_list_icon_a_sm

0x16ac,	// (0x0003cac5) aid_sp_fs_list_icon_d

0x16b4,	// (0x0003cacd) aid_sp_fs_text_primary

0xa18c,	// (0x000455a5) aid_sp_fs_text_secondary

0x8496,	// (0x000438af) list_medium_line

0x8496,	// (0x000438af) list_medium_line_g2

0x8496,	// (0x000438af) list_medium_line_g3

0x8496,	// (0x000438af) list_medium_line_plain

0x8496,	// (0x000438af) list_medium_line_plain_t2

0x8496,	// (0x000438af) list_medium_line_plain_t3

0x8496,	// (0x000438af) list_medium_line_right_icon

0x8496,	// (0x000438af) list_medium_line_right_iconx2

0x8496,	// (0x000438af) list_medium_line_t2

0x8496,	// (0x000438af) list_medium_line_t2_g2

0x8496,	// (0x000438af) list_medium_line_t2_g3

0x8496,	// (0x000438af) list_medium_line_t2_right_icon

0x8496,	// (0x000438af) list_medium_line_t2_right_iconx2

0x8496,	// (0x000438af) list_medium_line_t3

0x8496,	// (0x000438af) list_medium_line_t3_g2

0x8496,	// (0x000438af) list_medium_line_t3_g3

0x8496,	// (0x000438af) list_medium_line_t3_right_iconx2

0x16bd,	// (0x0003cad6) list_medium_line_t4_g4

0x849f,	// (0x000438b8) list_medium_line_x2

0x849f,	// (0x000438b8) list_medium_line_x2_t2_g2

0x849f,	// (0x000438b8) list_medium_line_x2_t2_g3

0x849f,	// (0x000438b8) list_medium_line_x2_t2_g4

0x849f,	// (0x000438b8) list_medium_line_x2_t3

0x849f,	// (0x000438b8) list_medium_line_x2_t3_g2

0x849f,	// (0x000438b8) list_medium_line_x2_t3_g3

0x849f,	// (0x000438b8) list_medium_line_x2_t3_g4

0x849f,	// (0x000438b8) list_medium_line_x2_t4_g2

0x849f,	// (0x000438b8) list_medium_line_x2_t4_g4

0x16c6,	// (0x0003cadf) list_medium_line_x3

0x16c6,	// (0x0003cadf) list_medium_line_x3_t4

0x16c6,	// (0x0003cadf) list_medium_line_x3_t4_g4

0x16bd,	// (0x0003cad6) list_medium_line_x4_t4

0x16bd,	// (0x0003cad6) list_medium_line_x4_t4_g7

0x16bd,	// (0x0003cad6) list_medium_line_x4_t5

0x16cf,	// (0x0003cae8) list_single_fs_dyc_pane_ParamLimits

0x16cf,	// (0x0003cae8) list_single_fs_dyc_pane

0x0f82,	// (0x0003c39b) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0f82,	// (0x0003c39b) list_medium_line_x4_t4_g7_g1

0x16eb,	// (0x0003cb04) list_medium_line_x4_t4_g7_g2_ParamLimits

0x16eb,	// (0x0003cb04) list_medium_line_x4_t4_g7_g2

0x16f7,	// (0x0003cb10) list_medium_line_x4_t4_g7_g3_ParamLimits

0x16f7,	// (0x0003cb10) list_medium_line_x4_t4_g7_g3

0x1706,	// (0x0003cb1f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1706,	// (0x0003cb1f) list_medium_line_x4_t4_g7_g4

0x1712,	// (0x0003cb2b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1712,	// (0x0003cb2b) list_medium_line_x4_t4_g7_g5

0x1721,	// (0x0003cb3a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1721,	// (0x0003cb3a) list_medium_line_x4_t4_g7_g6

0x1730,	// (0x0003cb49) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1730,	// (0x0003cb49) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0004afe9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0004afe9) list_medium_line_x4_t4_g7_g

0x173c,	// (0x0003cb55) list_medium_line_x4_t4_g7_t1_ParamLimits

0x173c,	// (0x0003cb55) list_medium_line_x4_t4_g7_t1

0x1751,	// (0x0003cb6a) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1751,	// (0x0003cb6a) list_medium_line_x4_t4_g7_t2

0x1766,	// (0x0003cb7f) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1766,	// (0x0003cb7f) list_medium_line_x4_t4_g7_t3

0x177b,	// (0x0003cb94) list_medium_line_x4_t4_g7_t4_ParamLimits

0x177b,	// (0x0003cb94) list_medium_line_x4_t4_g7_t4

0x178d,	// (0x0003cba6) list_medium_line_x4_t4_g7_t5_ParamLimits

0x178d,	// (0x0003cba6) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0004aff8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0004aff8) list_medium_line_x4_t4_g7_t

0x179f,	// (0x0003cbb8) list_single_dyc_row_pane_ParamLimits

0x179f,	// (0x0003cbb8) list_single_dyc_row_pane

0x9200,	// (0x00044619) call5_gesture_pane_ParamLimits

0x9200,	// (0x00044619) call5_gesture_pane

0x9234,	// (0x0004464d) call5_windows_pane_ParamLimits

0x9234,	// (0x0004464d) call5_windows_pane

0x9287,	// (0x000446a0) call5_swipe_1_pane_cp_ParamLimits

0x9287,	// (0x000446a0) call5_swipe_1_pane_cp

0x9293,	// (0x000446ac) call5_swipe_2_pane_cp_ParamLimits

0x9293,	// (0x000446ac) call5_swipe_2_pane_cp

0xbf5d,	// (0x00047376) call5_image_pane_cp

0x929f,	// (0x000446b8) popup_call5_audio_first_window_cp_ParamLimits

0x929f,	// (0x000446b8) popup_call5_audio_first_window_cp

0xac1a,	// (0x00046033) call5_swipe_1_pane_g1_cp_ParamLimits

0xac1a,	// (0x00046033) call5_swipe_1_pane_g1_cp

0xac87,	// (0x000460a0) call5_swipe_1_pane_g2_cp

0xac33,	// (0x0004604c) call5_swipe_1_pane_t1_cp_ParamLimits

0xac33,	// (0x0004604c) call5_swipe_1_pane_t1_cp

0xac1a,	// (0x00046033) call5_swipe_2_pane_g1_cp_ParamLimits

0xac1a,	// (0x00046033) call5_swipe_2_pane_g1_cp

0xac8f,	// (0x000460a8) call5_swipe_2_pane_g2_cp

0xac97,	// (0x000460b0) call5_swipe_2_pane_t1_cp_ParamLimits

0xac97,	// (0x000460b0) call5_swipe_2_pane_t1_cp

0xc8c1,	// (0x00047cda) main_sp_fs_email_pane

0xacac,	// (0x000460c5) main_sp_fs_listscroll_pane_te

0x183d,	// (0x0003cc56) popup_sp_fs_action_menu_pane_ParamLimits

0x183d,	// (0x0003cc56) popup_sp_fs_action_menu_pane

0xe1e0,	// (0x000495f9) bg_sp_fs_ctrlbar_pane_g1

0xacb5,	// (0x000460ce) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xacbe,	// (0x000460d7) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xacc7,	// (0x000460e0) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe1e0,	// (0x000495f9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0004b0e6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdfbc,	// (0x000493d5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdfbc,	// (0x000493d5) bg_sp_fs_ctrlbar_ddmenu_pane

0xacd0,	// (0x000460e9) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xacd0,	// (0x000460e9) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xacdc,	// (0x000460f5) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xacdc,	// (0x000460f5) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0004b0ef) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0004b0ef) main_sp_fs_ctrlbar_ddmenu_pane_g

0xace8,	// (0x00046101) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xace8,	// (0x00046101) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x187f,	// (0x0003cc98) list_medium_line_t2_right_icon_g1

0x1887,	// (0x0003cca0) list_medium_line_t2_right_icon_t1

0x1897,	// (0x0003ccb0) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0004b0f4) list_medium_line_t2_right_icon_t

0xddcf,	// (0x000491e8) bg_sp_fs_ctrlbar_pane_ParamLimits

0xddcf,	// (0x000491e8) bg_sp_fs_ctrlbar_pane

0x9304,	// (0x0004471d) main_sp_fs_ctrlbar_button_pane_cp01

0x930c,	// (0x00044725) main_sp_fs_ctrlbar_ddmenu_pane

0xad3a,	// (0x00046153) main_sp_fs_ctrlbar_pane_g1

0xad46,	// (0x0004615f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0004b0f9) main_sp_fs_ctrlbar_pane_g

0xad52,	// (0x0004616b) main_sp_fs_ctrlbar_pane_t1

0x9316,	// (0x0004472f) main_sp_fs_ctrlbar_pane

0x932c,	// (0x00044745) main_sp_fs_listscroll_pane_te_cp01

0x18a5,	// (0x0003ccbe) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x18a5,	// (0x0003ccbe) popup_sp_fs_action_menu_pane_cp01

0xc8c1,	// (0x00047cda) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc8c1,	// (0x00047cda) bg_sp_fs_highlight_list_pane_cp01

0x18cf,	// (0x0003cce8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x18cf,	// (0x0003cce8) sp_fs_action_menu_list_gene_pane_g1

0xad82,	// (0x0004619b) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xad82,	// (0x0004619b) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0004b103) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0004b103) sp_fs_action_menu_list_gene_pane_g

0x18de,	// (0x0003ccf7) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x18de,	// (0x0003ccf7) sp_fs_action_menu_list_gene_pane_t1

0x18f6,	// (0x0003cd0f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x18f6,	// (0x0003cd0f) sp_fs_action_menu_list_gene_pane

0xad8f,	// (0x000461a8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xad8f,	// (0x000461a8) popup_sp_fs_action_menu_bg_pane

0x1915,	// (0x0003cd2e) sp_fs_action_menu_list_pane_ParamLimits

0x1915,	// (0x0003cd2e) sp_fs_action_menu_list_pane

0xad9d,	// (0x000461b6) sp_fs_scroll_pane_cp01_ParamLimits

0xad9d,	// (0x000461b6) sp_fs_scroll_pane_cp01

0x1935,	// (0x0003cd4e) list_medium_line_plain_t2_t1

0x1945,	// (0x0003cd5e) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0004b108) list_medium_line_plain_t2_t

0x1953,	// (0x0003cd6c) list_medium_line_plain_t3_t1

0x1963,	// (0x0003cd7c) list_medium_line_plain_t3_t2

0x1971,	// (0x0003cd8a) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0004b10d) list_medium_line_plain_t3_t

0x0f82,	// (0x0003c39b) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0f82,	// (0x0003c39b) list_medium_line_x2_t2_g2_g1

0x0f9a,	// (0x0003c3b3) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0f9a,	// (0x0003c3b3) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0004a65f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0004a65f) list_medium_line_x2_t2_g2_g

0x1150,	// (0x0003c569) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1150,	// (0x0003c569) list_medium_line_x2_t2_g2_t1

0x0fcd,	// (0x0003c3e6) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0fcd,	// (0x0003c3e6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0004b114) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0004b114) list_medium_line_x2_t2_g2_t

0x0f82,	// (0x0003c39b) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0f82,	// (0x0003c39b) list_medium_line_x2_t4_g2_g1

0x197f,	// (0x0003cd98) list_medium_line_x2_t4_g2_g2_ParamLimits

0x197f,	// (0x0003cd98) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0004b119) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0004b119) list_medium_line_x2_t4_g2_g

0x1991,	// (0x0003cdaa) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1991,	// (0x0003cdaa) list_medium_line_x2_t4_g2_t1

0x19ab,	// (0x0003cdc4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x19ab,	// (0x0003cdc4) list_medium_line_x2_t4_g2_t2

0x19c1,	// (0x0003cdda) list_medium_line_x2_t4_g2_t3_ParamLimits

0x19c1,	// (0x0003cdda) list_medium_line_x2_t4_g2_t3

0x0fcd,	// (0x0003c3e6) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0fcd,	// (0x0003c3e6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0004b11e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0004b11e) list_medium_line_x2_t4_g2_t

0x19d6,	// (0x0003cdef) list_medium_line_t3_right_iconx2_g1

0x187f,	// (0x0003cc98) list_medium_line_t3_right_iconx2_g2

0x19de,	// (0x0003cdf7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0004b127) list_medium_line_t3_right_iconx2_g

0x19e6,	// (0x0003cdff) list_medium_line_t3_right_iconx2_t1

0x19f6,	// (0x0003ce0f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0004b12e) list_medium_line_t3_right_iconx2_t

0x0f82,	// (0x0003c39b) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0f82,	// (0x0003c39b) list_medium_line_x3_t4_g4_g1

0x0f8e,	// (0x0003c3a7) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0f8e,	// (0x0003c3a7) list_medium_line_x3_t4_g4_g2

0x1033,	// (0x0003c44c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1033,	// (0x0003c44c) list_medium_line_x3_t4_g4_g3

0x1a04,	// (0x0003ce1d) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1a04,	// (0x0003ce1d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0004b133) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0004b133) list_medium_line_x3_t4_g4_g

0x1a10,	// (0x0003ce29) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1a10,	// (0x0003ce29) list_medium_line_x3_t4_g4_t1

0x1a27,	// (0x0003ce40) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1a27,	// (0x0003ce40) list_medium_line_x3_t4_g4_t2

0x1165,	// (0x0003c57e) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1165,	// (0x0003c57e) list_medium_line_x3_t4_g4_t3

0x1a3c,	// (0x0003ce55) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1a3c,	// (0x0003ce55) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0004b13c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0004b13c) list_medium_line_x3_t4_g4_t

0x1a59,	// (0x0003ce72) list_single_dyc_row_text_pane_t1_ParamLimits

0x1a59,	// (0x0003ce72) list_single_dyc_row_text_pane_t1

0x1a90,	// (0x0003cea9) list_single_dyc_row_text_pane_t2_ParamLimits

0x1a90,	// (0x0003cea9) list_single_dyc_row_text_pane_t2

0x1b06,	// (0x0003cf1f) list_single_dyc_row_text_pane_t3_ParamLimits

0x1b06,	// (0x0003cf1f) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0004b145) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0004b145) list_single_dyc_row_text_pane_t

0x1bd7,	// (0x0003cff0) list_single_dyc_row_pane_g1_ParamLimits

0x1bd7,	// (0x0003cff0) list_single_dyc_row_pane_g1

0x1be3,	// (0x0003cffc) list_single_dyc_row_pane_g2_ParamLimits

0x1be3,	// (0x0003cffc) list_single_dyc_row_pane_g2

0x1bef,	// (0x0003d008) list_single_dyc_row_pane_g3_ParamLimits

0x1bef,	// (0x0003d008) list_single_dyc_row_pane_g3

0x1bfb,	// (0x0003d014) list_single_dyc_row_pane_g4_ParamLimits

0x1bfb,	// (0x0003d014) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0004b152) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0004b152) list_single_dyc_row_pane_g

0x1c07,	// (0x0003d020) list_single_dyc_row_text_pane_ParamLimits

0x1c07,	// (0x0003d020) list_single_dyc_row_text_pane

0xb334,	// (0x0004674d) bg_sp_fs_scroll_pane

0xadc3,	// (0x000461dc) thumb_sp_fs_scroll_pane

0x1452,	// (0x0003c86b) list_medium_line_g1_ParamLimits

0x1452,	// (0x0003c86b) list_medium_line_g1

0x1c26,	// (0x0003d03f) list_medium_line_t1_ParamLimits

0x1c26,	// (0x0003d03f) list_medium_line_t1

0x0f82,	// (0x0003c39b) list_medium_line_x2_g1_ParamLimits

0x0f82,	// (0x0003c39b) list_medium_line_x2_g1

0x0f8e,	// (0x0003c3a7) list_medium_line_x2_g2_ParamLimits

0x0f8e,	// (0x0003c3a7) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0004b15b) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0004b15b) list_medium_line_x2_g

0x1c3b,	// (0x0003d054) list_medium_line_x2_t1_ParamLimits

0x1c3b,	// (0x0003d054) list_medium_line_x2_t1

0x0f82,	// (0x0003c39b) list_medium_line_x3_g1_ParamLimits

0x0f82,	// (0x0003c39b) list_medium_line_x3_g1

0x0f8e,	// (0x0003c3a7) list_medium_line_x3_g2_ParamLimits

0x0f8e,	// (0x0003c3a7) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0004b15b) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0004b15b) list_medium_line_x3_g

0x1c3b,	// (0x0003d054) list_medium_line_x3_t1_ParamLimits

0x1c3b,	// (0x0003d054) list_medium_line_x3_t1

0xadcc,	// (0x000461e5) thumb_sp_fs_scroll_pane_g1

0xadd5,	// (0x000461ee) thumb_sp_fs_scroll_pane_g2

0xadde,	// (0x000461f7) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004b160) thumb_sp_fs_scroll_pane_g

0xadcc,	// (0x000461e5) bg_sp_fs_scroll_pane_g1

0xadd5,	// (0x000461ee) bg_sp_fs_scroll_pane_g2

0xadde,	// (0x000461f7) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0004b160) bg_sp_fs_scroll_pane_g

0x0f82,	// (0x0003c39b) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0f82,	// (0x0003c39b) list_medium_line_x2_t3_g4_g1

0x1027,	// (0x0003c440) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1027,	// (0x0003c440) list_medium_line_x2_t3_g4_g2

0x0f8e,	// (0x0003c3a7) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0f8e,	// (0x0003c3a7) list_medium_line_x2_t3_g4_g3

0x0f9a,	// (0x0003c3b3) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0f9a,	// (0x0003c3b3) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0004a6db) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0004a6db) list_medium_line_x2_t3_g4_g

0x1c51,	// (0x0003d06a) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1c51,	// (0x0003d06a) list_medium_line_x2_t3_g4_t1

0x1c67,	// (0x0003d080) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1c67,	// (0x0003d080) list_medium_line_x2_t3_g4_t2

0x0fcd,	// (0x0003c3e6) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0fcd,	// (0x0003c3e6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0004b167) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0004b167) list_medium_line_x2_t3_g4_t

0x1452,	// (0x0003c86b) list_medium_line_g2_g1_ParamLimits

0x1452,	// (0x0003c86b) list_medium_line_g2_g1

0x145e,	// (0x0003c877) list_medium_line_g2_g2_ParamLimits

0x145e,	// (0x0003c877) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004ae19) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004ae19) list_medium_line_g2_g

0x1c81,	// (0x0003d09a) list_medium_line_g2_t1_ParamLimits

0x1c81,	// (0x0003d09a) list_medium_line_g2_t1

0x1452,	// (0x0003c86b) list_medium_line_t3_g2_g1_ParamLimits

0x1452,	// (0x0003c86b) list_medium_line_t3_g2_g1

0x145e,	// (0x0003c877) list_medium_line_t3_g2_g2_ParamLimits

0x145e,	// (0x0003c877) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004ae19) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004ae19) list_medium_line_t3_g2_g

0x1c96,	// (0x0003d0af) list_medium_line_t3_g2_t1_ParamLimits

0x1c96,	// (0x0003d0af) list_medium_line_t3_g2_t1

0x1cb0,	// (0x0003d0c9) list_medium_line_t3_g2_t2_ParamLimits

0x1cb0,	// (0x0003d0c9) list_medium_line_t3_g2_t2

0x1cc6,	// (0x0003d0df) list_medium_line_t3_g2_t3_ParamLimits

0x1cc6,	// (0x0003d0df) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0004b16e) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0004b16e) list_medium_line_t3_g2_t

0x187f,	// (0x0003cc98) list_medium_line_right_icon_g1

0x1cdc,	// (0x0003d0f5) list_medium_line_right_icon_t1

0x1452,	// (0x0003c86b) list_medium_line_t2_g1_ParamLimits

0x1452,	// (0x0003c86b) list_medium_line_t2_g1

0x1cea,	// (0x0003d103) list_medium_line_t2_t1_ParamLimits

0x1cea,	// (0x0003d103) list_medium_line_t2_t1

0x1d04,	// (0x0003d11d) list_medium_line_t2_t2_ParamLimits

0x1d04,	// (0x0003d11d) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0004b175) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0004b175) list_medium_line_t2_t

0x1452,	// (0x0003c86b) list_medium_line_t3_g1_ParamLimits

0x1452,	// (0x0003c86b) list_medium_line_t3_g1

0x1d19,	// (0x0003d132) list_medium_line_t3_t1_ParamLimits

0x1d19,	// (0x0003d132) list_medium_line_t3_t1

0x1d33,	// (0x0003d14c) list_medium_line_t3_t2_ParamLimits

0x1d33,	// (0x0003d14c) list_medium_line_t3_t2

0x1d49,	// (0x0003d162) list_medium_line_t3_t3_ParamLimits

0x1d49,	// (0x0003d162) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0004b17a) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0004b17a) list_medium_line_t3_t

0x1452,	// (0x0003c86b) list_medium_line_g3_g1_ParamLimits

0x1452,	// (0x0003c86b) list_medium_line_g3_g1

0x1d5e,	// (0x0003d177) list_medium_line_g3_g2_ParamLimits

0x1d5e,	// (0x0003d177) list_medium_line_g3_g2

0x145e,	// (0x0003c877) list_medium_line_g3_g3_ParamLimits

0x145e,	// (0x0003c877) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0004b181) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0004b181) list_medium_line_g3_g

0x1d6a,	// (0x0003d183) list_medium_line_g3_t1_ParamLimits

0x1d6a,	// (0x0003d183) list_medium_line_g3_t1

0x1452,	// (0x0003c86b) list_medium_line_t2_g3_g1_ParamLimits

0x1452,	// (0x0003c86b) list_medium_line_t2_g3_g1

0x1d5e,	// (0x0003d177) list_medium_line_t2_g3_g2_ParamLimits

0x1d5e,	// (0x0003d177) list_medium_line_t2_g3_g2

0x145e,	// (0x0003c877) list_medium_line_t2_g3_g3_ParamLimits

0x145e,	// (0x0003c877) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0004b181) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0004b181) list_medium_line_t2_g3_g

0x1d7f,	// (0x0003d198) list_medium_line_t2_g3_t1_ParamLimits

0x1d7f,	// (0x0003d198) list_medium_line_t2_g3_t1

0x1d99,	// (0x0003d1b2) list_medium_line_t2_g3_t2_ParamLimits

0x1d99,	// (0x0003d1b2) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0004b188) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0004b188) list_medium_line_t2_g3_t

0x1452,	// (0x0003c86b) list_medium_line_t3_g3_g1_ParamLimits

0x1452,	// (0x0003c86b) list_medium_line_t3_g3_g1

0x1d5e,	// (0x0003d177) list_medium_line_t3_g3_g2_ParamLimits

0x1d5e,	// (0x0003d177) list_medium_line_t3_g3_g2

0x145e,	// (0x0003c877) list_medium_line_t3_g3_g3_ParamLimits

0x145e,	// (0x0003c877) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0004b181) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0004b181) list_medium_line_t3_g3_g

0x1daf,	// (0x0003d1c8) list_medium_line_t3_g3_t1_ParamLimits

0x1daf,	// (0x0003d1c8) list_medium_line_t3_g3_t1

0x1dc8,	// (0x0003d1e1) list_medium_line_t3_g3_t2_ParamLimits

0x1dc8,	// (0x0003d1e1) list_medium_line_t3_g3_t2

0x1dde,	// (0x0003d1f7) list_medium_line_t3_g3_t3_ParamLimits

0x1dde,	// (0x0003d1f7) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0004b18d) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0004b18d) list_medium_line_t3_g3_t

0x19d6,	// (0x0003cdef) list_medium_line_right_iconx2_g1

0x187f,	// (0x0003cc98) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004b194) list_medium_line_right_iconx2_g

0x1df4,	// (0x0003d20d) list_medium_line_right_iconx2_t1

0x19d6,	// (0x0003cdef) list_medium_line_t2_right_iconx2_g1

0x187f,	// (0x0003cc98) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0004b194) list_medium_line_t2_right_iconx2_g

0x1e02,	// (0x0003d21b) list_medium_line_t2_right_iconx2_t1

0x1e12,	// (0x0003d22b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0004b199) list_medium_line_t2_right_iconx2_t

0x1e20,	// (0x0003d239) list_medium_line_x4_t4_t1

0x1e2e,	// (0x0003d247) list_medium_line_x4_t4_t2

0x1e3e,	// (0x0003d257) list_medium_line_x4_t4_t3

0x1e4e,	// (0x0003d267) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0004b19e) list_medium_line_x4_t4_t

0x9367,	// (0x00044780) tport_appsw_pane_ParamLimits

0x9367,	// (0x00044780) tport_appsw_pane

0x9375,	// (0x0004478e) tport_contact_pane_ParamLimits

0x9375,	// (0x0004478e) tport_contact_pane

0x9385,	// (0x0004479e) tport_listscroll_pane_ParamLimits

0x9385,	// (0x0004479e) tport_listscroll_pane

0x9395,	// (0x000447ae) cell_tport_appsw_pane_ParamLimits

0x9395,	// (0x000447ae) cell_tport_appsw_pane

0xe4d4,	// (0x000498ed) tport_appsw_pane_g1_ParamLimits

0xe4d4,	// (0x000498ed) tport_appsw_pane_g1

0xade7,	// (0x00046200) tport_contact_pane_g1

0xa76c,	// (0x00045b85) tport_contact_pane_t1

0xadf0,	// (0x00046209) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0004b1a7) tport_contact_pane_t

0xadfe,	// (0x00046217) list_tport_pane

0xae07,	// (0x00046220) scroll_pane_cp_030

0x93c8,	// (0x000447e1) cell_tport_appsw_pane_g1

0x93d8,	// (0x000447f1) cell_tport_appsw_pane_t1

0x93e6,	// (0x000447ff) grid_highlight_pane_cp019

0x93ee,	// (0x00044807) list_tport_double_graphic_pane_ParamLimits

0x93ee,	// (0x00044807) list_tport_double_graphic_pane

0xc8c1,	// (0x00047cda) list_highlight_pane_cp023_ParamLimits

0xc8c1,	// (0x00047cda) list_highlight_pane_cp023

0x93ff,	// (0x00044818) list_tport_double_graphic_pane_g1_ParamLimits

0x93ff,	// (0x00044818) list_tport_double_graphic_pane_g1

0x940c,	// (0x00044825) list_tport_double_graphic_pane_t1_ParamLimits

0x940c,	// (0x00044825) list_tport_double_graphic_pane_t1

0x9421,	// (0x0004483a) list_tport_double_graphic_pane_t2_ParamLimits

0x9421,	// (0x0004483a) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0004b1b3) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0004b1b3) list_tport_double_graphic_pane_t

0xb334,	// (0x0004674d) main_cale_note_pane

0x77b1,	// (0x00042bca) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x77b1,	// (0x00042bca) cell_vitu2_function_top_wide_pane_cp01

0x8f51,	// (0x0004436a) wait_bar_pane_cp05_ParamLimits

0xc8c1,	// (0x00047cda) listscroll_cmail_pane

0xae10,	// (0x00046229) list_cmail_pane

0x9433,	// (0x0004484c) list_cmail_body_pane

0x945a,	// (0x00044873) list_single_cmail_header_caption_pane

0x9485,	// (0x0004489e) list_single_cmail_header_detail_pane_ParamLimits

0x9485,	// (0x0004489e) list_single_cmail_header_detail_pane

0xae20,	// (0x00046239) list_single_cmail_header_caption_pane_t1

0x1e5e,	// (0x0003d277) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1e5e,	// (0x0003d277) list_single_cmail_header_detail_pane_g1

0x1e74,	// (0x0003d28d) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1e74,	// (0x0003d28d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0004b1b8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0004b1b8) list_single_cmail_header_detail_pane_g

0x1e80,	// (0x0003d299) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1e80,	// (0x0003d299) list_single_cmail_header_detail_pane_t1

0x1ee0,	// (0x0003d2f9) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1ee0,	// (0x0003d2f9) list_single_cmail_header_editor_pane_bg

0xa8c9,	// (0x00045ce2) list_cmail_body_pane_g1

0xae44,	// (0x0004625d) list_cmail_body_pane_t1

0xec3c,	// (0x0004a055) list_single_cmail_header_editor_pane_bg_g1

0xc1b6,	// (0x000475cf) list_single_cmail_header_editor_pane_bg_g1_copy1

0xec4c,	// (0x0004a065) list_single_cmail_header_editor_pane_bg_g1_copy2

0xec44,	// (0x0004a05d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xee60,	// (0x0004a279) list_single_cmail_header_editor_pane_bg_g1_copy4

0xec6c,	// (0x0004a085) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xec5c,	// (0x0004a075) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xec64,	// (0x0004a07d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc196,	// (0x000475af) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x94bb,	// (0x000448d4) calenote_gesture_pane_ParamLimits

0x94bb,	// (0x000448d4) calenote_gesture_pane

0x94d5,	// (0x000448ee) calenote_window_pane_ParamLimits

0x94d5,	// (0x000448ee) calenote_window_pane

0xae52,	// (0x0004626b) popup_note_window_cp01

0x94ed,	// (0x00044906) calenote_swipe_1_pane_ParamLimits

0x94ed,	// (0x00044906) calenote_swipe_1_pane

0x9293,	// (0x000446ac) calenote_swipe_2_pane_ParamLimits

0x9293,	// (0x000446ac) calenote_swipe_2_pane

0xac1a,	// (0x00046033) calenote_swipe_1_pane_g1_ParamLimits

0xac1a,	// (0x00046033) calenote_swipe_1_pane_g1

0xac27,	// (0x00046040) calenote_swipe_1_pane_g2_ParamLimits

0xac27,	// (0x00046040) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0004b0dc) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0004b0dc) calenote_swipe_1_pane_g

0xae64,	// (0x0004627d) calenote_swipe_1_pane_t1_ParamLimits

0xae64,	// (0x0004627d) calenote_swipe_1_pane_t1

0xac1a,	// (0x00046033) calenote_swipe_2_pane_g1_ParamLimits

0xac1a,	// (0x00046033) calenote_swipe_2_pane_g1

0xae83,	// (0x0004629c) calenote_swipe_2_pane_g2_ParamLimits

0xae83,	// (0x0004629c) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0004b1c4) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0004b1c4) calenote_swipe_2_pane_g

0xae8f,	// (0x000462a8) calenote_swipe_2_pane_t1_ParamLimits

0xae8f,	// (0x000462a8) calenote_swipe_2_pane_t1

0xb334,	// (0x0004674d) main_mup_navstr_pane

0x64f9,	// (0x00041912) main_mup3_pane_t7_ParamLimits

0x64f9,	// (0x00041912) main_mup3_pane_t7

0x6eff,	// (0x00042318) main_mp4_pane_g6_ParamLimits

0x6eff,	// (0x00042318) main_mp4_pane_g6

0x7271,	// (0x0004268a) main_image3_pane_t4_ParamLimits

0x7271,	// (0x0004268a) main_image3_pane_t4

0x9500,	// (0x00044919) popup_navstr_preview_pane_ParamLimits

0x9500,	// (0x00044919) popup_navstr_preview_pane

0x950c,	// (0x00044925) scroll_navstr_pane_ParamLimits

0x950c,	// (0x00044925) scroll_navstr_pane

0xb334,	// (0x0004674d) bg_popup_preview_window_pane_cp04

0xaeb6,	// (0x000462cf) popup_navstr_preview_pane_t1

0x9518,	// (0x00044931) scroll_navstr_pane_g1_ParamLimits

0x9518,	// (0x00044931) scroll_navstr_pane_g1

0x9525,	// (0x0004493e) scroll_navstr_pane_t1_ParamLimits

0x9525,	// (0x0004493e) scroll_navstr_pane_t1

0xae5b,	// (0x00046274) bg_button_pane_cp014

0xae5b,	// (0x00046274) bg_button_pane_cp030

0x17e3,	// (0x0003cbfc) list_double_fisheye_pane_g4_ParamLimits

0x17e3,	// (0x0003cbfc) list_double_fisheye_pane_g4

0x17ef,	// (0x0003cc08) list_double_fisheye_pane_g5_ParamLimits

0x17ef,	// (0x0003cc08) list_double_fisheye_pane_g5

0xe28c,	// (0x000496a5) sp_fs_scroll_pane_cp03

0xad3a,	// (0x00046153) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xad46,	// (0x0004615f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0004b0f9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xad52,	// (0x0004616b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xae18,	// (0x00046231) sp_fs_scroll_pane_cp02

0xbe9c,	// (0x000472b5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xbe9c,	// (0x000472b5) popup_sp_fs_calendar_preview_list_single_pane

0xb334,	// (0x0004674d) main_cam6_pano_pane

0xc8c1,	// (0x00047cda) main_mup3_pane_ParamLimits

0xb334,	// (0x0004674d) main_phacti_pane

0x8e26,	// (0x0004423f) bg_button_pane_cp11

0x8e3e,	// (0x00044257) main_mobtv_info_pane_g2_ParamLimits

0x8e3e,	// (0x00044257) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0004b059) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0004b059) main_mobtv_info_pane_g

0x8ff0,	// (0x00044409) sc_clock_pane_t5_ParamLimits

0x8ff0,	// (0x00044409) sc_clock_pane_t5

0x9091,	// (0x000444aa) main_radioblah_pane_g1_ParamLimits

0xab66,	// (0x00045f7f) main_radioblah_pane_t3_ParamLimits

0xab66,	// (0x00045f7f) main_radioblah_pane_t3

0xab7e,	// (0x00045f97) main_radioblah_pane_t4_ParamLimits

0xab7e,	// (0x00045f97) main_radioblah_pane_t4

0x90af,	// (0x000444c8) main_radioblah_text_pane_ParamLimits

0x90af,	// (0x000444c8) main_radioblah_text_pane

0x90bc,	// (0x000444d5) main_radioblah_info_pane_g1_ParamLimits

0x9151,	// (0x0004456a) main_radioblah_info_pane_t4_ParamLimits

0x9151,	// (0x0004456a) main_radioblah_info_pane_t4

0xc8c1,	// (0x00047cda) main_sp_fs_calendar_pane

0x9537,	// (0x00044950) main_phacti_pane_g1

0x953f,	// (0x00044958) phacti_note_pane_ParamLimits

0x953f,	// (0x00044958) phacti_note_pane

0xaecd,	// (0x000462e6) phacti_term_pane_ParamLimits

0xaecd,	// (0x000462e6) phacti_term_pane

0xaee2,	// (0x000462fb) phacti_note_pane_t1_ParamLimits

0xaee2,	// (0x000462fb) phacti_note_pane_t1

0x1ef7,	// (0x0003d310) phacti_term_pane_g1

0x1eff,	// (0x0003d318) phacti_term_pane_t1_ParamLimits

0x1eff,	// (0x0003d318) phacti_term_pane_t1

0xaef9,	// (0x00046312) popup_sp_fs_calendar_preview_list_single_pane_g1

0xbf3b,	// (0x00047354) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0004b1ce) popup_sp_fs_calendar_preview_list_single_pane_g

0xaf01,	// (0x0004631a) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xaf01,	// (0x0004631a) popup_sp_fs_calendar_preview_list_single_pane_t1

0xaf17,	// (0x00046330) aid_popup_sp_fs_bg_corner_pane

0xe1e0,	// (0x000495f9) popup_sp_fs_calendar_preview_bg_pane_g1

0xb334,	// (0x0004674d) popup_sp_fs_calendar_preview_bg_pane

0xaf1f,	// (0x00046338) popup_sp_fs_calendar_preview_list_pane

0xddcf,	// (0x000491e8) bg_main_sp_fs_cale_pane_ParamLimits

0xddcf,	// (0x000491e8) bg_main_sp_fs_cale_pane

0x1f32,	// (0x0003d34b) listscroll_cale_mrui_pane_ParamLimits

0x1f32,	// (0x0003d34b) listscroll_cale_mrui_pane

0x1f47,	// (0x0003d360) listscroll_sp_fs_schedule_track_pane

0x1f50,	// (0x0003d369) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1f50,	// (0x0003d369) main_sp_fs_ctrlbar_pane_cp01

0xaf27,	// (0x00046340) main_sp_fs_ribbon_pane

0x1f63,	// (0x0003d37c) popup_sp_fs_cale_preview_window

0x95a2,	// (0x000449bb) list_single_sp_fs_schedule_track_pane_ParamLimits

0x95a2,	// (0x000449bb) list_single_sp_fs_schedule_track_pane

0xeea3,	// (0x0004a2bc) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xeea3,	// (0x0004a2bc) bg_sp_fs_highlight_list_pane_cp03

0x95c4,	// (0x000449dd) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x95c4,	// (0x000449dd) list_single_sp_fs_schedule_track_pane_g1

0x95d0,	// (0x000449e9) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x95d0,	// (0x000449e9) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0004b1d3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0004b1d3) list_single_sp_fs_schedule_track_pane_g

0x95dc,	// (0x000449f5) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x95dc,	// (0x000449f5) list_single_sp_fs_schedule_track_pane_t1

0x95f4,	// (0x00044a0d) sp_fs_schedule_track_pane_ParamLimits

0x95f4,	// (0x00044a0d) sp_fs_schedule_track_pane

0xaf2f,	// (0x00046348) sp_fs_schedule_track_pane_g1

0xaf37,	// (0x00046350) sp_fs_schedule_track_pane_g2

0xaf3f,	// (0x00046358) sp_fs_schedule_track_pane_g3

0xaf47,	// (0x00046360) sp_fs_schedule_track_pane_g4

0xaf4f,	// (0x00046368) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0004b1d8) sp_fs_schedule_track_pane_g

0xec3c,	// (0x0004a055) bg_sp_fs_schedule_viewer_highlight_g1

0xc1b6,	// (0x000475cf) bg_sp_fs_schedule_viewer_highlight_g2

0xec44,	// (0x0004a05d) bg_sp_fs_schedule_viewer_highlight_g3

0xec4c,	// (0x0004a065) bg_sp_fs_schedule_viewer_highlight_g4

0xee60,	// (0x0004a279) bg_sp_fs_schedule_viewer_highlight_g5

0xec5c,	// (0x0004a075) bg_sp_fs_schedule_viewer_highlight_g6

0xec64,	// (0x0004a07d) bg_sp_fs_schedule_viewer_highlight_g7

0xec6c,	// (0x0004a085) bg_sp_fs_schedule_viewer_highlight_g8

0xc196,	// (0x000475af) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0004b1e3) bg_sp_fs_schedule_viewer_highlight_g

0xb334,	// (0x0004674d) bg_main_sp_fs_ribbon_pane

0x9604,	// (0x00044a1d) main_sp_fs_ribbon_pane_g1

0xaf57,	// (0x00046370) main_sp_fs_ribbon_pane_t1

0x960d,	// (0x00044a26) main_sp_fs_ribbon_pane_t2

0xaf66,	// (0x0004637f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0004b1f6) main_sp_fs_ribbon_pane_t

0xaf75,	// (0x0004638e) main_sp_fs_ribbon_scheduler_pane

0xaf7d,	// (0x00046396) bg_main_sp_fs_ribbon_pane_g1

0xaf86,	// (0x0004639f) bg_main_sp_fs_ribbon_pane_g2

0xaf8f,	// (0x000463a8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0004b1fd) bg_main_sp_fs_ribbon_pane_g

0xaf97,	// (0x000463b0) main_sp_fs_ribbon_scheduler_pane_g1

0xafa0,	// (0x000463b9) main_sp_fs_ribbon_scheduler_pane_g2

0xafa9,	// (0x000463c2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0004b204) main_sp_fs_ribbon_scheduler_pane_g

0xafb2,	// (0x000463cb) list_cale_mrui_pane

0x961c,	// (0x00044a35) sp_fs_scroll_pane_cp07_ParamLimits

0x961c,	// (0x00044a35) sp_fs_scroll_pane_cp07

0x9638,	// (0x00044a51) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9638,	// (0x00044a51) bg_sp_fs_schedule_viewer_highlight

0xafbf,	// (0x000463d8) list_single_sp_fs_schedule_track_pane_cp01

0xafc7,	// (0x000463e0) list_sp_fs_schedule_track_pane

0xafcf,	// (0x000463e8) sp_fs_scroll_pane_cp06_ParamLimits

0xafcf,	// (0x000463e8) sp_fs_scroll_pane_cp06

0xe1e0,	// (0x000495f9) bgmain_sp_fs_calendar_pane_g1

0x1f75,	// (0x0003d38e) list_single_cale_mrui_pane_ParamLimits

0x1f75,	// (0x0003d38e) list_single_cale_mrui_pane

0x1fa3,	// (0x0003d3bc) list_single_cale_mrui_row_pane_ParamLimits

0x1fa3,	// (0x0003d3bc) list_single_cale_mrui_row_pane

0x1fb0,	// (0x0003d3c9) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1fb0,	// (0x0003d3c9) list_single_cale_mrui_row_pane_g1

0x1fe8,	// (0x0003d401) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1fe8,	// (0x0003d401) list_single_cale_mrui_row_pane_t1

0x1ffa,	// (0x0003d413) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1ffa,	// (0x0003d413) list_single_cale_mrui_row_pane_t2

0x2060,	// (0x0003d479) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2060,	// (0x0003d479) list_single_cale_mrui_row_pane_t3

0x208f,	// (0x0003d4a8) list_single_cale_mrui_row_pane_t4_ParamLimits

0x208f,	// (0x0003d4a8) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0004b212) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0004b212) list_single_cale_mrui_row_pane_t

0x20be,	// (0x0003d4d7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x20be,	// (0x0003d4d7) list_single_cmail_header_editor_pane_bg_cp01

0x20de,	// (0x0003d4f7) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x20de,	// (0x0003d4f7) list_single_cmail_header_editor_pane_bg_cp02

0x9645,	// (0x00044a5e) main_radioblah_text_pane_t1_ParamLimits

0x9645,	// (0x00044a5e) main_radioblah_text_pane_t1

0xafee,	// (0x00046407) cam6_indi_pane_cp01

0xaff6,	// (0x0004640f) cam6_mode_pane_cp01

0xaffe,	// (0x00046417) cam6_pano_pane

0xb007,	// (0x00046420) cam6_zoom_pane_cp01

0xb00f,	// (0x00046428) cam6_pano_image_pane

0xb01a,	// (0x00046433) cam6_pano_pane_g1

0xa8c9,	// (0x00045ce2) cam6_pano_pane_g2

0xb023,	// (0x0004643c) cam6_pano_pane_g3

0xb02c,	// (0x00046445) cam6_pano_pane_g4

0xe7cf,	// (0x00049be8) cam6_pano_pane_g5

0xb035,	// (0x0004644e) cam6_pano_pane_g6

0xa184,	// (0x0004559d) cam6_pano_pane_g7

0xb03f,	// (0x00046458) cam6_pano_pane_g8

0xb048,	// (0x00046461) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0004b21b) cam6_pano_pane_g

0xb334,	// (0x0004674d) main_browser_tag_pane

0xaeae,	// (0x000462c7) grid_navstr_albumart_pane

0xb053,	// (0x0004646c) cell_navstr_albumart_pane_ParamLimits

0xb053,	// (0x0004646c) cell_navstr_albumart_pane

0xb073,	// (0x0004648c) cell_navstr_albumart_pane_g1

0xdbe0,	// (0x00048ff9) cell_navstr_albumart_pane_g2

0xdbf0,	// (0x00049009) cell_navstr_albumart_pane_g3

0xdbe8,	// (0x00049001) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0004b22e) cell_navstr_albumart_pane_g

0x9660,	// (0x00044a79) bt_list_pane_ParamLimits

0x9660,	// (0x00044a79) bt_list_pane

0x9680,	// (0x00044a99) bt_list_pane_t1

0x968f,	// (0x00044aa8) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0004b237) bt_list_pane_t

0xb334,	// (0x0004674d) main_cale_prevew_pane

0x969e,	// (0x00044ab7) popup_cale_preview_window_ParamLimits

0x969e,	// (0x00044ab7) popup_cale_preview_window

0xc8c1,	// (0x00047cda) bg_popup_preview_window_pane_cp05_ParamLimits

0xc8c1,	// (0x00047cda) bg_popup_preview_window_pane_cp05

0xb07b,	// (0x00046494) list_cale_preview_pane_ParamLimits

0xb07b,	// (0x00046494) list_cale_preview_pane

0x96b7,	// (0x00044ad0) list_double_cale_preview_pane_ParamLimits

0x96b7,	// (0x00044ad0) list_double_cale_preview_pane

0x96c9,	// (0x00044ae2) list_single_cale_preview_pane_ParamLimits

0x96c9,	// (0x00044ae2) list_single_cale_preview_pane

0x96df,	// (0x00044af8) list_single_cale_preview_pane_g1

0x96e7,	// (0x00044b00) list_single_cale_preview_pane_t1_ParamLimits

0x96e7,	// (0x00044b00) list_single_cale_preview_pane_t1

0x96fc,	// (0x00044b15) list_double_cale_preview_pane_g1

0x9704,	// (0x00044b1d) list_double_cale_preview_pane_t1_ParamLimits

0x9704,	// (0x00044b1d) list_double_cale_preview_pane_t1

0x9719,	// (0x00044b32) list_double_cale_preview_pane_t2_ParamLimits

0x9719,	// (0x00044b32) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0004b23c) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0004b23c) list_double_cale_preview_pane_t

0xb334,	// (0x0004674d) main_ezdial_pane

0xc8c1,	// (0x00047cda) main_sp_fs_email_pane_ParamLimits

0x92ad,	// (0x000446c6) cmail_ddmenu_btn01_pane_ParamLimits

0x92ad,	// (0x000446c6) cmail_ddmenu_btn01_pane

0x92ca,	// (0x000446e3) cmail_ddmenu_btn02_pane_ParamLimits

0x92ca,	// (0x000446e3) cmail_ddmenu_btn02_pane

0x92e8,	// (0x00044701) cmail_ddmenu_btn03_pane_ParamLimits

0x92e8,	// (0x00044701) cmail_ddmenu_btn03_pane

0x9316,	// (0x0004472f) main_sp_fs_ctrlbar_pane_ParamLimits

0x932c,	// (0x00044745) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9433,	// (0x0004484c) list_cmail_body_pane_ParamLimits

0xae2e,	// (0x00046247) bg_button_pane_cp12

0xae37,	// (0x00046250) list_single_cmail_header_detail_pane_g3_ParamLimits

0xae37,	// (0x00046250) list_single_cmail_header_detail_pane_g3

0x1ebc,	// (0x0003d2d5) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1ebc,	// (0x0003d2d5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0004b1bf) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0004b1bf) list_single_cmail_header_detail_pane_t

0x1f14,	// (0x0003d32d) phacti_term_pane_t2_ParamLimits

0x1f14,	// (0x0003d32d) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0004b1c9) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0004b1c9) phacti_term_pane_t

0xb087,	// (0x000464a0) aid_size_list_single_double

0x9731,	// (0x00044b4a) popup_ezdial_listscroll_window

0x9752,	// (0x00044b6b) popup_number_entry_window_cp01

0xbf5d,	// (0x00047376) bg_popup_call_pane_cp09

0xb093,	// (0x000464ac) ezdial_list_pane

0xb09b,	// (0x000464b4) scroll_pane_cp23

0xdfbc,	// (0x000493d5) bg_button_pane_cp028_ParamLimits

0xdfbc,	// (0x000493d5) bg_button_pane_cp028

0x9760,	// (0x00044b79) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9760,	// (0x00044b79) cmail_ddmenu_btn01_pane_g1

0x9770,	// (0x00044b89) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9770,	// (0x00044b89) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0004b241) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0004b241) cmail_ddmenu_btn01_pane_g

0xb0a3,	// (0x000464bc) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb0a3,	// (0x000464bc) cmail_ddmenu_btn01_pane_t1

0xddcf,	// (0x000491e8) bg_button_pane_cp029_ParamLimits

0xddcf,	// (0x000491e8) bg_button_pane_cp029

0x9770,	// (0x00044b89) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9770,	// (0x00044b89) cmail_ddmenu_btn02_pane_g1

0x9789,	// (0x00044ba2) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9789,	// (0x00044ba2) cmail_ddmenu_btn02_pane_t1

0xeea3,	// (0x0004a2bc) bg_button_pane_cp031_ParamLimits

0xeea3,	// (0x0004a2bc) bg_button_pane_cp031

0x9770,	// (0x00044b89) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9770,	// (0x00044b89) cmail_ddmenu_btn03_pane_g1

0x9789,	// (0x00044ba2) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9789,	// (0x00044ba2) cmail_ddmenu_btn03_pane_t1

0x711c,	// (0x00042535) cell_dialer2_keypad_pane_t1_ParamLimits

0x7136,	// (0x0004254f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7136,	// (0x0004254f) cell_dialer2_keypad_pane_t1_copy1

0x8c67,	// (0x00044080) ncimui_group_button_pane

0xc8c1,	// (0x00047cda) main_sp_fs_calendar_pane_ParamLimits

0x945a,	// (0x00044873) list_single_cmail_header_caption_pane_ParamLimits

0x1f29,	// (0x0003d342) aid_recal_txt_sm_pane

0xb334,	// (0x0004674d) mian_recal_day_pane

0x1f63,	// (0x0003d37c) popup_sp_fs_cale_preview_window_ParamLimits

0xb0b8,	// (0x000464d1) list_recal_day_pane

0x2115,	// (0x0003d52e) list_single_recal_day_pane_ParamLimits

0x2115,	// (0x0003d52e) list_single_recal_day_pane

0xb0df,	// (0x000464f8) list_single_recal_day_pane_g1_ParamLimits

0xb0df,	// (0x000464f8) list_single_recal_day_pane_g1

0x2127,	// (0x0003d540) list_single_recal_day_pane_g2_ParamLimits

0x2127,	// (0x0003d540) list_single_recal_day_pane_g2

0x2133,	// (0x0003d54c) list_single_recal_day_pane_g3_ParamLimits

0x2133,	// (0x0003d54c) list_single_recal_day_pane_g3

0x213f,	// (0x0003d558) list_single_recal_day_pane_g4_ParamLimits

0x213f,	// (0x0003d558) list_single_recal_day_pane_g4

0x214d,	// (0x0003d566) list_single_recal_day_pane_g5_ParamLimits

0x214d,	// (0x0003d566) list_single_recal_day_pane_g5

0x2163,	// (0x0003d57c) list_single_recal_day_pane_g6_ParamLimits

0x2163,	// (0x0003d57c) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0004b250) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0004b250) list_single_recal_day_pane_g

0x2177,	// (0x0003d590) list_single_recal_day_pane_t1

0x2189,	// (0x0003d5a2) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0004b25b) list_single_recal_day_pane_t

0x97ad,	// (0x00044bc6) ncimui_query_button_pane_ParamLimits

0x97ad,	// (0x00044bc6) ncimui_query_button_pane

0x97bd,	// (0x00044bd6) ncimui_query_button_pane_t1_ParamLimits

0x97bd,	// (0x00044bd6) ncimui_query_button_pane_t1

0xb0eb,	// (0x00046504) ncimui_query_button_pane_t2_ParamLimits

0xb0eb,	// (0x00046504) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0004b260) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0004b260) ncimui_query_button_pane_t

0x97d0,	// (0x00044be9) query_button_pane_ParamLimits

0x97d0,	// (0x00044be9) query_button_pane

0xb334,	// (0x0004674d) bg_button_pane_cp0028

0xb0fe,	// (0x00046517) query_button_pane_t1

0x5522,	// (0x0004093b) main_tport_pane_ParamLimits

0x933d,	// (0x00044756) bg_popup_window_pane_cp01_ParamLimits

0x933d,	// (0x00044756) bg_popup_window_pane_cp01

0x934b,	// (0x00044764) heading_pane_cp08_ParamLimits

0x934b,	// (0x00044764) heading_pane_cp08

0x9359,	// (0x00044772) heading_pane_cp07_ParamLimits

0x9359,	// (0x00044772) heading_pane_cp07

0x93c8,	// (0x000447e1) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0004b1ac) cell_tport_appsw_pane_g

0x11ab,	// (0x0003c5c4) input_candi_list_open_g1

0xc379,	// (0x00047792) list_cale_time_pane_g6_ParamLimits

0xc379,	// (0x00047792) list_cale_time_pane_g6

0x5fa7,	// (0x000413c0) aid_size_touch_calib_1_ParamLimits

0x5fa7,	// (0x000413c0) aid_size_touch_calib_1

0x5fb3,	// (0x000413cc) aid_size_touch_calib_2_ParamLimits

0x5fb3,	// (0x000413cc) aid_size_touch_calib_2

0x5fc1,	// (0x000413da) aid_size_touch_calib_3_ParamLimits

0x5fc1,	// (0x000413da) aid_size_touch_calib_3

0x5fd1,	// (0x000413ea) aid_size_touch_calib_4_ParamLimits

0x5fd1,	// (0x000413ea) aid_size_touch_calib_4

0x5fdf,	// (0x000413f8) main_touch_calib_button_group_pane_ParamLimits

0x5fdf,	// (0x000413f8) main_touch_calib_button_group_pane

0x5fed,	// (0x00041406) main_touch_calib_pane_g1_ParamLimits

0x5ff9,	// (0x00041412) main_touch_calib_pane_g2_ParamLimits

0x6005,	// (0x0004141e) main_touch_calib_pane_g3_ParamLimits

0x6011,	// (0x0004142a) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0004ab6a) main_touch_calib_pane_g_ParamLimits

0x601d,	// (0x00041436) main_touch_calib_pane_t1_ParamLimits

0x6036,	// (0x0004144f) main_touch_calib_pane_t2_ParamLimits

0x604f,	// (0x00041468) main_touch_calib_pane_t3_ParamLimits

0x6065,	// (0x0004147e) main_touch_calib_pane_t4_ParamLimits

0x607b,	// (0x00041494) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0004ab73) main_touch_calib_pane_t_ParamLimits

0xe56f,	// (0x00049988) list_single_fp_cale_pane_g3_ParamLimits

0xe56f,	// (0x00049988) list_single_fp_cale_pane_g3

0xc8c1,	// (0x00047cda) bg_button_pane_cp012_ParamLimits

0xc8c1,	// (0x00047cda) bg_vkb2_func_pane_cp03_ParamLimits

0x7f06,	// (0x0004331f) cell_vitu2_function_top_pane_g1_ParamLimits

0xc8c1,	// (0x00047cda) bg_vkb2_func_pane_cp04_ParamLimits

0x8bef,	// (0x00044008) main_ncimui_button_group_pane_ParamLimits

0x8bef,	// (0x00044008) main_ncimui_button_group_pane

0x8c55,	// (0x0004406e) main_ncimui_pane_t3_ParamLimits

0x8c55,	// (0x0004406e) main_ncimui_pane_t3

0xaec4,	// (0x000462dd) phacti_button_group_pane

0xb087,	// (0x000464a0) aid_size_list_single_double_ParamLimits

0x9731,	// (0x00044b4a) popup_ezdial_listscroll_window_ParamLimits

0x9752,	// (0x00044b6b) popup_number_entry_window_cp01_ParamLimits

0x97dd,	// (0x00044bf6) phacti_button_pane_ParamLimits

0x97dd,	// (0x00044bf6) phacti_button_pane

0xb334,	// (0x0004674d) bg_button_pane_cp14

0xb10c,	// (0x00046525) phacti_button_pane_t1

0x97ee,	// (0x00044c07) main_touch_calib_button_pane_ParamLimits

0x97ee,	// (0x00044c07) main_touch_calib_button_pane

0xbd98,	// (0x000471b1) bg_button_pane_cp18_ParamLimits

0xbd98,	// (0x000471b1) bg_button_pane_cp18

0xb11a,	// (0x00046533) main_touch_calib_button_pane_t1_ParamLimits

0xb11a,	// (0x00046533) main_touch_calib_button_pane_t1

0xb130,	// (0x00046549) main_touch_calib_button_pane_t2_ParamLimits

0xb130,	// (0x00046549) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0004b265) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0004b265) main_touch_calib_button_pane_t

0xb334,	// (0x0004674d) cell_ncimui_button_pane

0xb334,	// (0x0004674d) bg_button_pane_cp032

0xb14e,	// (0x00046567) cell_ncimui_button_pane_t1

0x7192,	// (0x000425ab) image3_infobar_pane_ParamLimits

0x7192,	// (0x000425ab) image3_infobar_pane

0x9012,	// (0x0004442b) fs_bigclock_status_pane_ParamLimits

0x9012,	// (0x0004442b) fs_bigclock_status_pane

0x901f,	// (0x00044438) main_fs_bigclock_clock_pane_ParamLimits

0x901f,	// (0x00044438) main_fs_bigclock_clock_pane

0x9033,	// (0x0004444c) main_fs_bigclock_indi_pane_ParamLimits

0x9033,	// (0x0004444c) main_fs_bigclock_indi_pane

0x905b,	// (0x00044474) main_fs_bigclock_swipe_pane_ParamLimits

0x905b,	// (0x00044474) main_fs_bigclock_swipe_pane

0xb334,	// (0x0004674d) main_fs_clock_dumped_data

0xa9d6,	// (0x00045def) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xa9d6,	// (0x00045def) list_single_fs_bigclock_indicator_pane_g1

0xa9f1,	// (0x00045e0a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xa9f1,	// (0x00045e0a) list_single_fs_bigclock_indicator_pane_g2

0xaa0b,	// (0x00045e24) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xaa0b,	// (0x00045e24) list_single_fs_bigclock_indicator_pane_g3

0xaa25,	// (0x00045e3e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xaa25,	// (0x00045e3e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0004b08d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0004b08d) list_single_fs_bigclock_indicator_pane_g

0xaa50,	// (0x00045e69) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xaa50,	// (0x00045e69) list_single_fs_bigclock_indicator_pane_t1

0xaa78,	// (0x00045e91) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xaa78,	// (0x00045e91) list_single_fs_bigclock_indicator_pane_t2

0xaaa0,	// (0x00045eb9) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xaaa0,	// (0x00045eb9) list_single_fs_bigclock_indicator_pane_t3

0xaac8,	// (0x00045ee1) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xaac8,	// (0x00045ee1) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0004b098) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0004b098) list_single_fs_bigclock_indicator_pane_t

0xb15c,	// (0x00046575) image3_infobar_fav_pane_ParamLimits

0xb15c,	// (0x00046575) image3_infobar_fav_pane

0xb16c,	// (0x00046585) image3_infobar_loc_pane_ParamLimits

0xb16c,	// (0x00046585) image3_infobar_loc_pane

0xb180,	// (0x00046599) image3_infobar_time_pane_ParamLimits

0xb180,	// (0x00046599) image3_infobar_time_pane

0xe1e0,	// (0x000495f9) image3_infobar_time_pane_g1

0xb190,	// (0x000465a9) image3_infobar_time_pane_t1

0xe1e0,	// (0x000495f9) image3_infobar_loc_pane_g1

0xb19e,	// (0x000465b7) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0004b26a) image3_infobar_loc_pane_g

0xb1a6,	// (0x000465bf) image3_infobar_loc_pane_t1

0xe1e0,	// (0x000495f9) image3_infobar_fav_pane_g1

0xb1b4,	// (0x000465cd) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0004b26f) image3_infobar_fav_pane_g

0xb1bc,	// (0x000465d5) fs_bigclock_status_battery_pane

0xb1c5,	// (0x000465de) fs_bigclock_status_signal_pane

0xb1ce,	// (0x000465e7) fs_bigclock_status_title_pane

0xb1d7,	// (0x000465f0) fs_bigclock_status_signal_pane_g1

0xb1e0,	// (0x000465f9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0004b274) fs_bigclock_status_signal_pane_g

0xb1e8,	// (0x00046601) fs_bigclock_status_battery_pane_g1

0xb1f1,	// (0x0004660a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0004b279) fs_bigclock_status_battery_pane_g

0xb1f9,	// (0x00046612) fs_bigclock_status_title_pane_t1

0x97fe,	// (0x00044c17) main_fs_bigclock_clock_pane_g1

0x97fe,	// (0x00044c17) main_fs_bigclock_clock_pane_g2

0x980b,	// (0x00044c24) main_fs_bigclock_clock_pane_g3

0x980b,	// (0x00044c24) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0004b27e) main_fs_bigclock_clock_pane_g

0x9817,	// (0x00044c30) main_fs_bigclock_clock_pane_t1

0x982a,	// (0x00044c43) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0004b287) main_fs_bigclock_clock_pane_t

0xb207,	// (0x00046620) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb207,	// (0x00046620) list_single_fs_bigclock_indicator_pane

0xb218,	// (0x00046631) list_single_fs_bigclock_pane_ParamLimits

0xb218,	// (0x00046631) list_single_fs_bigclock_pane

0xb23e,	// (0x00046657) main_fs_bigclock_indicator_pane_t1

0xb24d,	// (0x00046666) list_single_fs_bigclock_pane_g1

0xb255,	// (0x0004666e) list_single_fs_bigclock_pane_t1

0xe1e0,	// (0x000495f9) main_fs_bigclock_swipe_pane_g1

0xb298,	// (0x000466b1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0004b298) main_fs_bigclock_swipe_pane_g

0xb2a0,	// (0x000466b9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb2a0,	// (0x000466b9) main_fs_bigclock_swipe_pane_t1

0x45b2,	// (0x0003f9cb) call_type_pane_ParamLimits

0xb334,	// (0x0004674d) main_btmg_pane

0x1fdc,	// (0x0003d3f5) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1fdc,	// (0x0003d3f5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0004b20b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0004b20b) list_single_cale_mrui_row_pane_g

0x2104,	// (0x0003d51d) list_recal_vselct_arw_lo_pane

0xb0d7,	// (0x000464f0) list_recal_vselct_arw_up_pane

0x210c,	// (0x0003d525) list_recal_vselct_pane

0x9881,	// (0x00044c9a) btmg_button_pane

0x988d,	// (0x00044ca6) main_btmg_pane_g1

0xb334,	// (0x0004674d) bg_button_pane_cp044

0xb2bd,	// (0x000466d6) btmg_button_pane_t1

0xddbb,	// (0x000491d4) aid_listscroll_gen

0xc8c1,	// (0x00047cda) main_cntbar_detail_pane

0xae10,	// (0x00046229) list_cmail_folder_pane

0xe28c,	// (0x000496a5) sp_fs_scroll_pane_cp03_ParamLimits

0x219b,	// (0x0003d5b4) list_single_fs_dyc_pane_cp01_ParamLimits

0x219b,	// (0x0003d5b4) list_single_fs_dyc_pane_cp01

0xb2cb,	// (0x000466e4) aid_size_cmail_indent

0x21c7,	// (0x0003d5e0) list_single_dyc_row_pane_cp01

0x98b5,	// (0x00044cce) cntbar_detail_list_pane_ParamLimits

0x98b5,	// (0x00044cce) cntbar_detail_list_pane

0x98ef,	// (0x00044d08) main_cntbar_detail_cont_pane_ParamLimits

0x98ef,	// (0x00044d08) main_cntbar_detail_cont_pane

0x45a6,	// (0x0003f9bf) scroll_pane_cp032_ParamLimits

0x45a6,	// (0x0003f9bf) scroll_pane_cp032

0x98fb,	// (0x00044d14) cntbar_detail_list_event_pane_ParamLimits

0x98fb,	// (0x00044d14) cntbar_detail_list_event_pane

0x98c1,	// (0x00044cda) cntbar_detail_list_shct_pane

0xc204,	// (0x0004761d) aid_list_gen

0xb2d4,	// (0x000466ed) aid_scroll

0xb2dd,	// (0x000466f6) aid_size_touch_scroll_bar

0x849f,	// (0x000438b8) aid_list_double

0x21d0,	// (0x0003d5e9) aid_list_single

0x8496,	// (0x000438af) aid_list_single_lg

0x21d9,	// (0x0003d5f2) aid_list_z_g_a_sm

0x21e1,	// (0x0003d5fa) aid_list_z_g_d

0x21e9,	// (0x0003d602) aid_txt_z_prm

0x21f7,	// (0x0003d610) aid_txt_z_prm_cp01

0x2205,	// (0x0003d61e) aid_txt_z_sec

0x990f,	// (0x00044d28) main_cntbar_detail_cont_pane_g1_ParamLimits

0x990f,	// (0x00044d28) main_cntbar_detail_cont_pane_g1

0x991c,	// (0x00044d35) main_cntbar_detail_cont_pane_g2_ParamLimits

0x991c,	// (0x00044d35) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0004b29d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0004b29d) main_cntbar_detail_cont_pane_g

0xb2e6,	// (0x000466ff) main_cntbar_detail_cont_pane_t1

0xb2f4,	// (0x0004670d) main_cntbar_detail_cont_pane_t2

0xb302,	// (0x0004671b) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0004b2a2) main_cntbar_detail_cont_pane_t

0x9928,	// (0x00044d41) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9928,	// (0x00044d41) cell_cntbar_detail_list_shct_pane

0xb310,	// (0x00046729) cntbar_detail_list_shct_pane_g1

0xb319,	// (0x00046732) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0004b2a9) cntbar_detail_list_shct_pane_g

0x993c,	// (0x00044d55) cntbar_detail_list_event_pane_g1_ParamLimits

0x993c,	// (0x00044d55) cntbar_detail_list_event_pane_g1

0x9948,	// (0x00044d61) cntbar_detail_list_event_pane_g2_ParamLimits

0x9948,	// (0x00044d61) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0004b2ae) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0004b2ae) cntbar_detail_list_event_pane_g

0x99b4,	// (0x00044dcd) cntbar_detail_list_event_pane_t1_ParamLimits

0x99b4,	// (0x00044dcd) cntbar_detail_list_event_pane_t1

0x99c9,	// (0x00044de2) cntbar_detail_list_event_pane_t2_ParamLimits

0x99c9,	// (0x00044de2) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0004b2bb) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0004b2bb) cntbar_detail_list_event_pane_t

0xe1e0,	// (0x000495f9) cell_cntbar_detail_list_shct_pane_g1

0xc989,	// (0x00047da2) navi_pane_mv_g3

0xc8c1,	// (0x00047cda) main_cntbar_detail_pane_ParamLimits

0xb334,	// (0x0004674d) main_notif_wgt_pane

0x6e46,	// (0x0004225f) aid_tch_main_mp4_pane_g4

0x707b,	// (0x00042494) popup_slider_window_cp02

0x20fa,	// (0x0003d513) list_recal_day_event_pane

0x9895,	// (0x00044cae) cntbar_detail_btn_pane_ParamLimits

0x9895,	// (0x00044cae) cntbar_detail_btn_pane

0x98a5,	// (0x00044cbe) cntbar_detail_btn_pane_cp01_ParamLimits

0x98a5,	// (0x00044cbe) cntbar_detail_btn_pane_cp01

0x98c1,	// (0x00044cda) cntbar_detail_list_shct_pane_ParamLimits

0x98cd,	// (0x00044ce6) cntbar_detail_pane_g1_ParamLimits

0x98cd,	// (0x00044ce6) cntbar_detail_pane_g1

0x98d9,	// (0x00044cf2) cntbar_detail_pane_t1_ParamLimits

0x98d9,	// (0x00044cf2) cntbar_detail_pane_t1

0x9954,	// (0x00044d6d) cntbar_detail_list_event_pane_g3_ParamLimits

0x9954,	// (0x00044d6d) cntbar_detail_list_event_pane_g3

0x996c,	// (0x00044d85) cntbar_detail_list_event_pane_g4_ParamLimits

0x996c,	// (0x00044d85) cntbar_detail_list_event_pane_g4

0x9984,	// (0x00044d9d) cntbar_detail_list_event_pane_g5_ParamLimits

0x9984,	// (0x00044d9d) cntbar_detail_list_event_pane_g5

0x999c,	// (0x00044db5) cntbar_detail_list_event_pane_g6_ParamLimits

0x999c,	// (0x00044db5) cntbar_detail_list_event_pane_g6

0x99de,	// (0x00044df7) cntbar_detail_list_event_pane_t3_ParamLimits

0x99de,	// (0x00044df7) cntbar_detail_list_event_pane_t3

0x99f0,	// (0x00044e09) popup_notif_wgt_window_ParamLimits

0x99f0,	// (0x00044e09) popup_notif_wgt_window

0x9a00,	// (0x00044e19) popup_submenu_window_cp01_ParamLimits

0x9a00,	// (0x00044e19) popup_submenu_window_cp01

0xbf5d,	// (0x00047376) bg_popup_window_pane_cp10

0xb865,	// (0x00046c7e) listscroll_notif_wgt_pane

0xb877,	// (0x00046c90) list_notif_wgt_window

0xb880,	// (0x00046c99) scroll_pane_cp033

0x9a12,	// (0x00044e2b) list_notif_wgt_row_pane_ParamLimits

0x9a12,	// (0x00044e2b) list_notif_wgt_row_pane

0xb889,	// (0x00046ca2) aid_size_list_notif_wgt_del

0xb896,	// (0x00046caf) list_notif_wgt_row_pane_g1

0xb8a2,	// (0x00046cbb) list_notif_wgt_row_pane_g2

0xb8b1,	// (0x00046cca) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0004b2c2) list_notif_wgt_row_pane_g

0xb8be,	// (0x00046cd7) list_notif_wgt_row_pane_t1

0xb8d4,	// (0x00046ced) list_notif_wgt_row_pane_t2

0xb8e6,	// (0x00046cff) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0004b2c9) list_notif_wgt_row_pane_t

0xeeb1,	// (0x0004a2ca) list_recal_day_event_pane_g1

0xb8f8,	// (0x00046d11) list_recal_day_event_pane_t1

0xb334,	// (0x0004674d) bg_button_pane_cp045

0x9a24,	// (0x00044e3d) cntbar_detail_btn_pane_t1

0xddcf,	// (0x000491e8) main_callh_pane_ParamLimits

0xddcf,	// (0x000491e8) main_callh_pane

0xb334,	// (0x0004674d) main_coverflow0_pane

0xb334,	// (0x0004674d) main_wgtman_pane

0x9073,	// (0x0004448c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9073,	// (0x0004448c) main_fs_bigclock_unlock_btn_pane

0x93c0,	// (0x000447d9) bg_button_pane_cp16

0x93d0,	// (0x000447e9) cell_tport_appsw_pane_g3

0x9a32,	// (0x00044e4b) cf0_flow_pane_ParamLimits

0x9a32,	// (0x00044e4b) cf0_flow_pane

0xb907,	// (0x00046d20) listscroll_cf0_pane

0xb912,	// (0x00046d2b) main_cf0_pane_g1

0x9a41,	// (0x00044e5a) main_cf0_pane_t1_ParamLimits

0x9a41,	// (0x00044e5a) main_cf0_pane_t1

0x9a55,	// (0x00044e6e) main_cf0_pane_t2_ParamLimits

0x9a55,	// (0x00044e6e) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0004b2d5) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0004b2d5) main_cf0_pane_t

0xb924,	// (0x00046d3d) scroll_pane_cp11

0x9a69,	// (0x00044e82) cf0_flow_pane_g1

0x9a71,	// (0x00044e8a) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0004b2da) cf0_flow_pane_g

0x9a79,	// (0x00044e92) cf0_flow_pane_t1

0xb334,	// (0x0004674d) main_call6_pane

0xb334,	// (0x0004674d) main_calllock_pane

0x9a87,	// (0x00044ea0) call6_btn_grp_pane_ParamLimits

0x9a87,	// (0x00044ea0) call6_btn_grp_pane

0x9a96,	// (0x00044eaf) call6_pane_g1_ParamLimits

0x9a96,	// (0x00044eaf) call6_pane_g1

0x9aa6,	// (0x00044ebf) popup_call6_1st_window_ParamLimits

0x9aa6,	// (0x00044ebf) popup_call6_1st_window

0x9ab4,	// (0x00044ecd) popup_call6_2nd_window_ParamLimits

0x9ab4,	// (0x00044ecd) popup_call6_2nd_window

0x9ac2,	// (0x00044edb) cell_call6_btn_pane_ParamLimits

0x9ac2,	// (0x00044edb) cell_call6_btn_pane

0xbf5d,	// (0x00047376) bg_popup_call2_in_pane_cp03

0xb92f,	// (0x00046d48) popup_call6_1st_window_g1

0xb937,	// (0x00046d50) popup_call6_1st_window_g2

0xb93f,	// (0x00046d58) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0004b2df) popup_call6_1st_window_g

0xb947,	// (0x00046d60) popup_call6_1st_window_t1

0xb956,	// (0x00046d6f) popup_call6_1st_window_t2

0xb964,	// (0x00046d7d) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0004b2e6) popup_call6_1st_window_t

0xbf5d,	// (0x00047376) bg_popup_call2_in_pane_cp04

0xb92f,	// (0x00046d48) popup_call6_2nd_window_g1

0xb937,	// (0x00046d50) popup_call6_2nd_window_g2

0xb93f,	// (0x00046d58) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0004b2df) popup_call6_2nd_window_g

0xb947,	// (0x00046d60) popup_call6_2nd_window_t1

0xb334,	// (0x0004674d) bg_button_pane_cp15

0xb972,	// (0x00046d8b) cell_call6_btn_pane_g1

0x9ad1,	// (0x00044eea) cell_call6_btn_pane_t1

0x9ae0,	// (0x00044ef9) listscroll_wgtman_pane_ParamLimits

0x9ae0,	// (0x00044ef9) listscroll_wgtman_pane

0x9afc,	// (0x00044f15) wgtman_btn_pane_ParamLimits

0x9afc,	// (0x00044f15) wgtman_btn_pane

0xc776,	// (0x00047b8f) aid_scroll_copy1

0xb97b,	// (0x00046d94) list_wgtman_pane

0x9b31,	// (0x00044f4a) wgtman_btn_pane_g1_ParamLimits

0x9b31,	// (0x00044f4a) wgtman_btn_pane_g1

0x9b59,	// (0x00044f72) wgtman_btn_pane_t1_ParamLimits

0x9b59,	// (0x00044f72) wgtman_btn_pane_t1

0xb985,	// (0x00046d9e) wgtman_btn_pane_t2_ParamLimits

0xb985,	// (0x00046d9e) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0004b2ed) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0004b2ed) wgtman_btn_pane_t

0x9b90,	// (0x00044fa9) listrow_wgtman_pane_ParamLimits

0x9b90,	// (0x00044fa9) listrow_wgtman_pane

0x9bab,	// (0x00044fc4) listrow_wgtman_pane_g1

0x9bb8,	// (0x00044fd1) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0004b2f2) listrow_wgtman_pane_g

0x2213,	// (0x0003d62c) listrow_wgtman_pane_t1

0x222b,	// (0x0003d644) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0004b2f7) listrow_wgtman_pane_t

0x2251,	// (0x0003d66a) wait_bar_pane_cp09

0xb99c,	// (0x00046db5) main_calllock_btn_pane

0xb9a6,	// (0x00046dbf) main_calllock_pane_g1

0xb334,	// (0x0004674d) bg_button_pane_cp17

0xb972,	// (0x00046d8b) main_calllock_btn_pane_g1

0xb9b2,	// (0x00046dcb) main_calllock_btn_pane_t1

0xb334,	// (0x0004674d) main_dialer3_pane

0xb334,	// (0x0004674d) main_fmrd2_pane

0xe1e0,	// (0x000495f9) main_fs_bigclock_unlock_btn_pane_g1

0x9bde,	// (0x00044ff7) main_fs_bigclock_unlock_btn_pane_t1

0x9bec,	// (0x00045005) area_fmrd2_info_pane_ParamLimits

0x9bec,	// (0x00045005) area_fmrd2_info_pane

0x9bfa,	// (0x00045013) area_fmrd2_visual_pane_ParamLimits

0x9bfa,	// (0x00045013) area_fmrd2_visual_pane

0x9c08,	// (0x00045021) fmrd2_indi_pane_ParamLimits

0x9c08,	// (0x00045021) fmrd2_indi_pane

0x9c15,	// (0x0004502e) area_fmrd2_visual_pane_g1

0x9c1d,	// (0x00045036) area_fmrd2_visual_pane_t1

0x9c2d,	// (0x00045046) area_fmrd2_visual_pane_t2

0x9c3d,	// (0x00045056) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0004b301) area_fmrd2_visual_pane_t

0x9c4d,	// (0x00045066) area_fmrd2_info_pane_g1

0x9c55,	// (0x0004506e) area_fmrd2_info_pane_t1

0x9c65,	// (0x0004507e) area_fmrd2_info_pane_t2

0x9c75,	// (0x0004508e) area_fmrd2_info_pane_t3

0x9c85,	// (0x0004509e) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0004b308) area_fmrd2_info_pane_t

0x9c93,	// (0x000450ac) fmrd2_indi_pane_t1

0x9ca3,	// (0x000450bc) fmrd2_indi_pane_t2

0x9cb3,	// (0x000450cc) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0004b311) fmrd2_indi_pane_t

0xaa34,	// (0x00045e4d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xaa34,	// (0x00045e4d) list_single_fs_bigclock_indicator_pane_g5

0xaae5,	// (0x00045efe) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xaae5,	// (0x00045efe) list_single_fs_bigclock_indicator_pane_t5

0x9555,	// (0x0004496e) aid_cell_bcale_month_pane_ParamLimits

0x9555,	// (0x0004496e) aid_cell_bcale_month_pane

0x9573,	// (0x0004498c) bcale_month_pane_ParamLimits

0x9573,	// (0x0004498c) bcale_month_pane

0x9591,	// (0x000449aa) bcale_preview_pane_ParamLimits

0x9591,	// (0x000449aa) bcale_preview_pane

0xb255,	// (0x0004666e) list_single_fs_bigclock_pane_t1_ParamLimits

0xb274,	// (0x0004668d) list_single_fs_bigclock_pane_t2_ParamLimits

0xb274,	// (0x0004668d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0004b293) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0004b293) list_single_fs_bigclock_pane_t

0x9bd6,	// (0x00044fef) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0004b2fc) main_fs_bigclock_unlock_btn_pane_g

0x9cc1,	// (0x000450da) aid_dia3_key_size_ParamLimits

0x9cc1,	// (0x000450da) aid_dia3_key_size

0x9ccd,	// (0x000450e6) aid_dia3_listrow_size_ParamLimits

0x9ccd,	// (0x000450e6) aid_dia3_listrow_size

0x9cdd,	// (0x000450f6) dia3_keypad_fun_pane_ParamLimits

0x9cdd,	// (0x000450f6) dia3_keypad_fun_pane

0x9cef,	// (0x00045108) dia3_keypad_num_pane_ParamLimits

0x9cef,	// (0x00045108) dia3_keypad_num_pane

0x9d01,	// (0x0004511a) dia3_listscroll_pane_ParamLimits

0x9d01,	// (0x0004511a) dia3_listscroll_pane

0x9d0f,	// (0x00045128) dia3_numentry_pane_ParamLimits

0x9d0f,	// (0x00045128) dia3_numentry_pane

0xb9c1,	// (0x00046dda) dia3_list_pane

0xb9cc,	// (0x00046de5) scroll_pane_cp12

0xb334,	// (0x0004674d) bg_dia3_numentry_pane

0x9d1d,	// (0x00045136) dia3_numentry_pane_t1

0x9d2c,	// (0x00045145) cell_dia3_key_num_pane

0x9d34,	// (0x0004514d) cell_dia3_key0_fun_pane_ParamLimits

0x9d34,	// (0x0004514d) cell_dia3_key0_fun_pane

0x9d41,	// (0x0004515a) cell_dia3_key1_fun_pane_ParamLimits

0x9d41,	// (0x0004515a) cell_dia3_key1_fun_pane

0x9d4e,	// (0x00045167) dia3_listrow_pane

0xa787,	// (0x00045ba0) bg_dia3_numentry_pane_g1

0xb334,	// (0x0004674d) bg_button_pane_cp21

0xb9d7,	// (0x00046df0) cell_dia3_key_num_pane_t1

0xb9e5,	// (0x00046dfe) cell_dia3_key_num_pane_t2

0xb9f4,	// (0x00046e0d) cell_dia3_key_num_pane_t3

0xba03,	// (0x00046e1c) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0004b318) cell_dia3_key_num_pane_t

0xb334,	// (0x0004674d) bg_button_pane_cp19

0x9d5b,	// (0x00045174) cell_dia3_key0_fun_pane_g1

0xb334,	// (0x0004674d) bg_button_pane_cp20

0x9d63,	// (0x0004517c) cell_dia3_key1_fun_pane_g1

0x9d6b,	// (0x00045184) area_left_week_number_pane

0x9d7e,	// (0x00045197) area_top_day_name_pane

0x9d8c,	// (0x000451a5) frame_month_view_pane

0xba12,	// (0x00046e2b) grid_month_view_pane

0x9da1,	// (0x000451ba) cell_top_day_name_pane_ParamLimits

0x9da1,	// (0x000451ba) cell_top_day_name_pane

0x9dbb,	// (0x000451d4) cell_area_left_week_number_pane_ParamLimits

0x9dbb,	// (0x000451d4) cell_area_left_week_number_pane

0x9dde,	// (0x000451f7) cell_month_view_pane_ParamLimits

0x9dde,	// (0x000451f7) cell_month_view_pane

0xba20,	// (0x00046e39) frm_month_g1

0x9e0a,	// (0x00045223) frm_month_g2

0x9e1b,	// (0x00045234) frm_month_g3

0x9e2c,	// (0x00045245) frm_month_g4

0x9e3d,	// (0x00045256) frm_month_g5

0x9e50,	// (0x00045269) frm_month_g6

0x9e63,	// (0x0004527c) frm_month_g7

0xba2d,	// (0x00046e46) frm_month_g8

0x9e76,	// (0x0004528f) frm_month_g9

0x9e83,	// (0x0004529c) frm_month_g10

0x9e90,	// (0x000452a9) frm_month_g11

0x9e9d,	// (0x000452b6) frm_month_g12

0x9eaa,	// (0x000452c3) frm_month_g13

0x9eb7,	// (0x000452d0) frm_month_g14

0x9ec6,	// (0x000452df) frm_month_g15

0x9ed5,	// (0x000452ee) frm_month_g16

0x000f,

0xff08,	// (0x0004b321) frm_month_g

0xba3a,	// (0x00046e53) cell_top_day_name_pane_t1

0x9ee4,	// (0x000452fd) cell_area_left_week_number_pane_g1

0x9ef3,	// (0x0004530c) cell_area_left_week_number_pane_t1

0xe44f,	// (0x00049868) cell_month_view_pane_g1

0x9f09,	// (0x00045322) cell_month_view_pane_t1

0xb334,	// (0x0004674d) main_fps_pane

0xad02,	// (0x0004611b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xad02,	// (0x0004611b) cmail_ddmenu_btn02_pane_cp1

0xad1e,	// (0x00046137) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xad1e,	// (0x00046137) cmail_ddmenu_btn02_pane_cp2

0x977c,	// (0x00044b95) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x977c,	// (0x00044b95) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0004b246) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0004b246) cmail_ddmenu_btn02_pane_g

0x979b,	// (0x00044bb4) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x979b,	// (0x00044bb4) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0004b24b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0004b24b) cmail_ddmenu_btn02_pane_t

0x9f1f,	// (0x00045338) fps_text_pane_ParamLimits

0x9f1f,	// (0x00045338) fps_text_pane

0x9f2c,	// (0x00045345) main_fps_pane_g1_ParamLimits

0x9f2c,	// (0x00045345) main_fps_pane_g1

0x9f3a,	// (0x00045353) wait_bar_pane_cp010_ParamLimits

0x9f3a,	// (0x00045353) wait_bar_pane_cp010

0x9f46,	// (0x0004535f) fps_text_pane_t1_ParamLimits

0x9f46,	// (0x0004535f) fps_text_pane_t1

0x748f,	// (0x000428a8) cam4_image_uncrop_pane_g1

0x7498,	// (0x000428b1) cam4_image_uncrop_pane_g2

0x74a1,	// (0x000428ba) cam4_image_uncrop_pane_g3

0x74aa,	// (0x000428c3) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004ad07) cam4_image_uncrop_pane_g

0x9d4e,	// (0x00045167) dia3_listrow_pane_ParamLimits

0xb334,	// (0x0004674d) main_phob2_pane

0x93a2,	// (0x000447bb) cell_tport_appsw_pane_cp02_ParamLimits

0x93a2,	// (0x000447bb) cell_tport_appsw_pane_cp02

0x93b1,	// (0x000447ca) cell_tport_appsw_pane_cp03_ParamLimits

0x93b1,	// (0x000447ca) cell_tport_appsw_pane_cp03

0xb334,	// (0x0004674d) phob2_contact_card_pane

0xb334,	// (0x0004674d) phob2_listscroll_pane

0xba4d,	// (0x00046e66) phob2_list_pane

0xba55,	// (0x00046e6e) scroll_pane_cp034

0x9f5f,	// (0x00045378) phob2_cc_data_pane_ParamLimits

0x9f5f,	// (0x00045378) phob2_cc_data_pane

0x9f79,	// (0x00045392) phob2_cc_listscroll_pane_ParamLimits

0x9f79,	// (0x00045392) phob2_cc_listscroll_pane

0x9b90,	// (0x00044fa9) list_double_large_graphic_phob2_pane_ParamLimits

0x9b90,	// (0x00044fa9) list_double_large_graphic_phob2_pane

0x9f93,	// (0x000453ac) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9f93,	// (0x000453ac) list_double_large_graphic_phob2_pane_g1

0x2263,	// (0x0003d67c) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x2263,	// (0x0003d67c) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0004b342) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0004b342) list_double_large_graphic_phob2_pane_g

0x226f,	// (0x0003d688) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x226f,	// (0x0003d688) list_double_large_graphic_phob2_pane_t1

0x2284,	// (0x0003d69d) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x2284,	// (0x0003d69d) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0004b347) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0004b347) list_double_large_graphic_phob2_pane_t

0xb334,	// (0x0004674d) list_highlight_pane_cp024

0x9fa9,	// (0x000453c2) phob2_cc_button_pane

0x9fb1,	// (0x000453ca) phob2_cc_data_pane_g1_ParamLimits

0x9fb1,	// (0x000453ca) phob2_cc_data_pane_g1

0x9fbd,	// (0x000453d6) phob2_cc_data_pane_g2_ParamLimits

0x9fbd,	// (0x000453d6) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0004b34c) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0004b34c) phob2_cc_data_pane_g

0x9fc9,	// (0x000453e2) phob2_cc_data_pane_t1_ParamLimits

0x9fc9,	// (0x000453e2) phob2_cc_data_pane_t1

0x9fdb,	// (0x000453f4) phob2_cc_data_pane_t2_ParamLimits

0x9fdb,	// (0x000453f4) phob2_cc_data_pane_t2

0x9fed,	// (0x00045406) phob2_cc_data_pane_t3_ParamLimits

0x9fed,	// (0x00045406) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0004b351) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0004b351) phob2_cc_data_pane_t

0xba5d,	// (0x00046e76) phob2_cc_list_pane_ParamLimits

0xba5d,	// (0x00046e76) phob2_cc_list_pane

0xef62,	// (0x0004a37b) scroll_pane_cp035_ParamLimits

0xef62,	// (0x0004a37b) scroll_pane_cp035

0xc8c1,	// (0x00047cda) bg_button_pane_cp033

0xba69,	// (0x00046e82) phob2_cc_button_pane_g1

0xba75,	// (0x00046e8e) phob2_cc_button_pane_t1

0xba8a,	// (0x00046ea3) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0004b358) phob2_cc_button_pane_t

0x9fff,	// (0x00045418) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9fff,	// (0x00045418) list_double_large_graphic_phob2_cc_pane

0xa026,	// (0x0004543f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa026,	// (0x0004543f) list_double_large_graphic_phob2_cc_pane_g1

0x2296,	// (0x0003d6af) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x2296,	// (0x0003d6af) list_double_large_graphic_phob2_cc_pane_g2

0x22a2,	// (0x0003d6bb) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x22a2,	// (0x0003d6bb) list_double_large_graphic_phob2_cc_pane_g3

0x22ae,	// (0x0003d6c7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x22ae,	// (0x0003d6c7) list_double_large_graphic_phob2_cc_pane_g4

0x22ba,	// (0x0003d6d3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x22ba,	// (0x0003d6d3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0004b35d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0004b35d) list_double_large_graphic_phob2_cc_pane_g

0x22c6,	// (0x0003d6df) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x22c6,	// (0x0003d6df) list_double_large_graphic_phob2_cc_pane_t1

0x22ef,	// (0x0003d708) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x22ef,	// (0x0003d708) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0004b368) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0004b368) list_double_large_graphic_phob2_cc_pane_t

0xba9c,	// (0x00046eb5) list_highlight_pane_cp025_ParamLimits

0xba9c,	// (0x00046eb5) list_highlight_pane_cp025

0xc8c1,	// (0x00047cda) bg_button_pane_cp033_ParamLimits

0xba69,	// (0x00046e82) phob2_cc_button_pane_g1_ParamLimits

0xba75,	// (0x00046e8e) phob2_cc_button_pane_t1_ParamLimits

0xba8a,	// (0x00046ea3) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0004b358) phob2_cc_button_pane_t_ParamLimits

0x25ef,	// (0x0003da08) popup_wgtman_window

0xed56,	// (0x0004a16f) scroll_pane_cp038

0x9b19,	// (0x00044f32) wgtman_btn_pane_cp_01_ParamLimits

0x9b19,	// (0x00044f32) wgtman_btn_pane_cp_01

0xbaaa,	// (0x00046ec3) wgtman_content_pane

0xbab3,	// (0x00046ecc) wgtman_heading_pane

0xb334,	// (0x0004674d) bg_heading_pane_cp02

0xbabc,	// (0x00046ed5) wgtman_heading_pane_g1

0xbac4,	// (0x00046edd) wgtman_heading_pane_t1

0xbad2,	// (0x00046eeb) scroll_pane_cp036

0xbada,	// (0x00046ef3) wgtman_list_pane

0xbae2,	// (0x00046efb) wgtman_list_pane_t1_ParamLimits

0xbae2,	// (0x00046efb) wgtman_list_pane_t1

0x73ee,	// (0x00042807) cam4_grid_pane

0x149a,	// (0x0003c8b3) bg_button_pane_cp015_ParamLimits

0x80c4,	// (0x000434dd) bg_button_pane_cp016_ParamLimits

0x80d7,	// (0x000434f0) bg_button_pane_cp017_ParamLimits

0x14de,	// (0x0003c8f7) popup_vitu2_query_window_g3_ParamLimits

0x14de,	// (0x0003c8f7) popup_vitu2_query_window_g3

0x1557,	// (0x0003c970) popup_vitu2_query_window_t6_ParamLimits

0x1557,	// (0x0003c970) popup_vitu2_query_window_t6

0x1582,	// (0x0003c99b) popup_vitu2_query_window_t7_ParamLimits

0x1582,	// (0x0003c99b) popup_vitu2_query_window_t7

0xb322,	// (0x0004673b) cam4_grid_pane_g1

0xb32b,	// (0x00046744) cam4_grid_pane_g2

0xbafc,	// (0x00046f15) cam4_grid_pane_g3

0xbb05,	// (0x00046f1e) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0004b36d) cam4_grid_pane_g

0x3361,	// (0x0003e77a) aid_placing_vt_slider_lsc_ParamLimits

0x36ad,	// (0x0003eac6) vidtel_button_pane_ParamLimits

0x36ad,	// (0x0003eac6) vidtel_button_pane

0xb334,	// (0x0004674d) bg_button_pane_cp034

0xbb10,	// (0x00046f29) vidtel_button_pane_g1

0xbb18,	// (0x00046f31) vidtel_button_pane_t1

0xee58,	// (0x0004a271) aid_size_vtel_slider_touch

0xef62,	// (0x0004a37b) scroll_pane_cp039

0x8db0,	// (0x000441c9) ncim_query_button_pane_cp01_ParamLimits

0x8dcf,	// (0x000441e8) ncimui_query_pane_g1_ParamLimits

0xc8c1,	// (0x00047cda) input_focus_pane_cp012_ParamLimits

0xa7c5,	// (0x00045bde) ncim_query_entry_pane_t1_ParamLimits

0xef62,	// (0x0004a37b) scroll_pane_cp039_ParamLimits

0xc85a,	// (0x00047c73) navi_pane_bcale_mc_g1

0xc862,	// (0x00047c7b) navi_pane_bcale_mc_t1

0xad67,	// (0x00046180) main_sp_fs_email_pane_g1

0xad73,	// (0x0004618c) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0004b0fe) main_sp_fs_email_pane_g

0xafe1,	// (0x000463fa) list_single_cale_mrui_row_pane_g3_ParamLimits

0xafe1,	// (0x000463fa) list_single_cale_mrui_row_pane_g3

0x2159,	// (0x0003d572) list_single_recal_day_pane_g5_event_pane

0x216f,	// (0x0003d588) list_single_recal_day_pane_g7

0xbb2e,	// (0x00046f47) list_recal_day_event_pane_cp01

0xbb37,	// (0x00046f50) list_recal_vselct_arw_lo_pane_cp01

0xbb3f,	// (0x00046f58) list_recal_vselct_arw_up_pane_cp01

0xbb47,	// (0x00046f60) list_recal_vselct_pane_cp01

0xeeb1,	// (0x0004a2ca) list_recal_day_event_pane_cp01_g1

0x2318,	// (0x0003d731) list_recal_day_event_pane_cp01_t1

0x2177,	// (0x0003d590) list_single_recal_day_pane_t1_ParamLimits

0x2189,	// (0x0003d5a2) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0004b25b) list_single_recal_day_pane_t_ParamLimits

0xbcd3,	// (0x000470ec) bg_notes_pane_ParamLimits

0xbd76,	// (0x0004718f) list_notes_pane_ParamLimits

0x294d,	// (0x0003dd66) scroll_pane_cp06_ParamLimits

0xbd98,	// (0x000471b1) main_notes_pane_ParamLimits

0xb334,	// (0x0004674d) main_welc_pane

0xa037,	// (0x00045450) main_welc_body_pane_ParamLimits

0xa037,	// (0x00045450) main_welc_body_pane

0xa051,	// (0x0004546a) main_welc_opti_pane_ParamLimits

0xa051,	// (0x0004546a) main_welc_opti_pane

0xa084,	// (0x0004549d) main_welc_pane_t1_ParamLimits

0xa084,	// (0x0004549d) main_welc_pane_t1

0xa09e,	// (0x000454b7) main_welc_body_row_pane_ParamLimits

0xa09e,	// (0x000454b7) main_welc_body_row_pane

0xeea3,	// (0x0004a2bc) main_welc_opti_row_pane_ParamLimits

0xeea3,	// (0x0004a2bc) main_welc_opti_row_pane

0xbb51,	// (0x00046f6a) main_welc_opti_row_pane_g1

0xa0c3,	// (0x000454dc) main_welc_opti_row_pane_t1

0xbb59,	// (0x00046f72) main_welc_body_row_pane_t1

0xb86f,	// (0x00046c88) popup_notif_wgt_heading_pane

0xb889,	// (0x00046ca2) aid_size_list_notif_wgt_del_ParamLimits

0xb896,	// (0x00046caf) list_notif_wgt_row_pane_g1_ParamLimits

0xb8a2,	// (0x00046cbb) list_notif_wgt_row_pane_g2_ParamLimits

0xb8b1,	// (0x00046cca) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0004b2c2) list_notif_wgt_row_pane_g_ParamLimits

0xb8be,	// (0x00046cd7) list_notif_wgt_row_pane_t1_ParamLimits

0xb8d4,	// (0x00046ced) list_notif_wgt_row_pane_t2_ParamLimits

0xb8e6,	// (0x00046cff) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0004b2c9) list_notif_wgt_row_pane_t_ParamLimits

0x9bab,	// (0x00044fc4) listrow_wgtman_pane_g1_ParamLimits

0x9bb8,	// (0x00044fd1) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0004b2f2) listrow_wgtman_pane_g_ParamLimits

0x2213,	// (0x0003d62c) listrow_wgtman_pane_t1_ParamLimits

0x222b,	// (0x0003d644) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0004b2f7) listrow_wgtman_pane_t_ParamLimits

0x2251,	// (0x0003d66a) wait_bar_pane_cp09_ParamLimits

0xb334,	// (0x0004674d) bg_popup_heading_pane_cp02

0xbb68,	// (0x00046f81) popup_notif_wgt_heading_pane_g1

0xbb70,	// (0x00046f89) popup_notif_wgt_heading_pane_t1

0xb334,	// (0x0004674d) main_vids_pane

0xb334,	// (0x0004674d) vids_listscroll_pane

0xa0d2,	// (0x000454eb) scroll_pane_cp040

0xb334,	// (0x0004674d) vids_list_pane

0xa0dd,	// (0x000454f6) vids_list_double_pane_ParamLimits

0xa0dd,	// (0x000454f6) vids_list_double_pane

0xa0f7,	// (0x00045510) vids_list_double_pane_g1

0xa100,	// (0x00045519) vids_list_double_pane_t1

0xa110,	// (0x00045529) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0004b37b) vids_list_double_pane_t

0xc8c1,	// (0x00047cda) main_ncimui_pane_ParamLimits

0x8c07,	// (0x00044020) main_ncimui_pane_g1_ParamLimits

0x8c13,	// (0x0004402c) main_ncimui_pane_g2_ParamLimits

0x8c13,	// (0x0004402c) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0004b003) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0004b003) main_ncimui_pane_g

0xa06a,	// (0x00045483) main_welc_pane_g1_ParamLimits

0xa06a,	// (0x00045483) main_welc_pane_g1

0xa076,	// (0x0004548f) main_welc_pane_g2_ParamLimits

0xa076,	// (0x0004548f) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0004b376) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0004b376) main_welc_pane_g

0xbcd3,	// (0x000470ec) listscroll_mce_pane_ParamLimits

0xc9c9,	// (0x00047de2) wait_bar_pane_cp10

0xddc3,	// (0x000491dc) main_cale_day_pane_ParamLimits

0xddc3,	// (0x000491dc) main_cale_week_pane_ParamLimits

0xbcd3,	// (0x000470ec) main_messa_pane_ParamLimits

0x681d,	// (0x00041c36) main_clock2_btn_pane_ParamLimits

0x681d,	// (0x00041c36) main_clock2_btn_pane

0xe5f7,	// (0x00049a10) main_clock2_btn_pane_cp01_ParamLimits

0xe5f7,	// (0x00049a10) main_clock2_btn_pane_cp01

0xafb2,	// (0x000463cb) list_cale_mrui_pane_ParamLimits

0xb91c,	// (0x00046d35) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0004b2d0) main_cf0_pane_g

0x9d6b,	// (0x00045184) area_left_week_number_pane_ParamLimits

0x9d7e,	// (0x00045197) area_top_day_name_pane_ParamLimits

0x9d8c,	// (0x000451a5) frame_month_view_pane_ParamLimits

0xba12,	// (0x00046e2b) grid_month_view_pane_ParamLimits

0xba20,	// (0x00046e39) frm_month_g1_ParamLimits

0x9e0a,	// (0x00045223) frm_month_g2_ParamLimits

0x9e1b,	// (0x00045234) frm_month_g3_ParamLimits

0x9e2c,	// (0x00045245) frm_month_g4_ParamLimits

0x9e3d,	// (0x00045256) frm_month_g5_ParamLimits

0x9e50,	// (0x00045269) frm_month_g6_ParamLimits

0x9e63,	// (0x0004527c) frm_month_g7_ParamLimits

0xba2d,	// (0x00046e46) frm_month_g8_ParamLimits

0x9e76,	// (0x0004528f) frm_month_g9_ParamLimits

0x9e83,	// (0x0004529c) frm_month_g10_ParamLimits

0x9e90,	// (0x000452a9) frm_month_g11_ParamLimits

0x9e9d,	// (0x000452b6) frm_month_g12_ParamLimits

0x9eaa,	// (0x000452c3) frm_month_g13_ParamLimits

0x9eb7,	// (0x000452d0) frm_month_g14_ParamLimits

0x9ec6,	// (0x000452df) frm_month_g15_ParamLimits

0x9ed5,	// (0x000452ee) frm_month_g16_ParamLimits

0xff08,	// (0x0004b321) frm_month_g_ParamLimits

0xba3a,	// (0x00046e53) cell_top_day_name_pane_t1_ParamLimits

0x9ee4,	// (0x000452fd) cell_area_left_week_number_pane_g1_ParamLimits

0x9ef3,	// (0x0004530c) cell_area_left_week_number_pane_t1_ParamLimits

0xe44f,	// (0x00049868) cell_month_view_pane_g1_ParamLimits

0x9f09,	// (0x00045322) cell_month_view_pane_t1_ParamLimits

0xbccb,	// (0x000470e4) main_clock2_btn_pane_g1

0xbb7e,	// (0x00046f97) main_clock2_btn_pane_t1

0xc8c1,	// (0x00047cda) listscroll_cmail_pane_ParamLimits

0xad67,	// (0x00046180) main_sp_fs_email_pane_g1_ParamLimits

0xad73,	// (0x0004618c) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0004b0fe) main_sp_fs_email_pane_g_ParamLimits

0xb0b8,	// (0x000464d1) list_recal_day_pane_ParamLimits

0xb0c9,	// (0x000464e2) mian_recal_day_pane_t1

0x1b18,	// (0x0003cf31) list_single_dyc_row_text_pane_t4_ParamLimits

0x1b18,	// (0x0003cf31) list_single_dyc_row_text_pane_t4

0x1b4f,	// (0x0003cf68) list_single_dyc_row_text_pane_t5_ParamLimits

0x1b4f,	// (0x0003cf68) list_single_dyc_row_text_pane_t5

0x1bc5,	// (0x0003cfde) list_single_dyc_row_text_pane_t6_ParamLimits

0x1bc5,	// (0x0003cfde) list_single_dyc_row_text_pane_t6

0x44d8,	// (0x0003f8f1) aid_mgn_list_cale_time_pane

0xc8c1,	// (0x00047cda) main_gallery2_pane_ParamLimits

0xe60d,	// (0x00049a26) main_clock2_pane_cp01_t1

0xe61d,	// (0x00049a36) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0004abdd) main_clock2_pane_cp01_t

0x2d8b,	// (0x0003e1a4) cale_week_scroll_pane_g16_ParamLimits

0x2d8b,	// (0x0003e1a4) cale_week_scroll_pane_g16

0xbf5d,	// (0x00047376) vorec_slider_pane

0xbb18,	// (0x00046f31) vidtel_button_pane_t1_ParamLimits

0x97fe,	// (0x00044c17) main_fs_bigclock_clock_pane_g1_ParamLimits

0x97fe,	// (0x00044c17) main_fs_bigclock_clock_pane_g2_ParamLimits

0x980b,	// (0x00044c24) main_fs_bigclock_clock_pane_g3_ParamLimits

0x980b,	// (0x00044c24) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x0004b27e) main_fs_bigclock_clock_pane_g_ParamLimits

0x9817,	// (0x00044c30) main_fs_bigclock_clock_pane_t1_ParamLimits

0x982a,	// (0x00044c43) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x0004b287) main_fs_bigclock_clock_pane_t_ParamLimits

0x60ba,	// (0x000414d3) main_mup3_lyrics_pane_ParamLimits

0x60ba,	// (0x000414d3) main_mup3_lyrics_pane

0xa144,	// (0x0004555d) main_mup3_lyrics_pane_t1_ParamLimits

0xa144,	// (0x0004555d) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
