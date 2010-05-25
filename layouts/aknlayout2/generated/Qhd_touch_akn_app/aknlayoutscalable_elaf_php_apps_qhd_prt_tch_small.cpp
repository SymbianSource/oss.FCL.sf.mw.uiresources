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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00037c5d };

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
0x5680,	// (0x0003d2dd) Screen

0x568c,	// (0x0003d2e9) application_window

0x56e8,	// (0x0003d345) area_bottom_pane_ParamLimits

0x56e8,	// (0x0003d345) area_bottom_pane

0x5741,	// (0x0003d39e) area_top_pane_ParamLimits

0x5741,	// (0x0003d39e) area_top_pane

0x57a5,	// (0x0003d402) call_video_uplink_pane_ParamLimits

0x57a5,	// (0x0003d402) call_video_uplink_pane

0x57e4,	// (0x0003d441) main_pane_ParamLimits

0x57e4,	// (0x0003d441) main_pane

0x22e1,	// (0x00039f3e) context_pane

0x89d5,	// (0x00040632) navi_pane

0x89fb,	// (0x00040658) popup_cale_events_window_ParamLimits

0x89fb,	// (0x00040658) popup_cale_events_window

0x22f4,	// (0x00039f51) popup_mup_playback_window

0x8a13,	// (0x00040670) signal_pane

0x021b,	// (0x00037e78) main_browser_pane

0x03e0,	// (0x0003803d) main_burst_pane

0x8861,	// (0x000404be) main_calc_pane

0x22c7,	// (0x00039f24) main_cale_day_pane

0x5f21,	// (0x0003db7e) main_cale_month_pane

0x22c7,	// (0x00039f24) main_cale_week_pane

0x03e0,	// (0x0003803d) main_call_pane

0xefb6,	// (0x00046c13) main_call_poc_pane

0x03e0,	// (0x0003803d) main_camera_pane

0x03e0,	// (0x0003803d) main_chi_dic_pane

0x0bc3,	// (0x00038820) main_clock_pane

0xefb6,	// (0x00046c13) main_fmradio_pane

0x03e0,	// (0x0003803d) main_graph_messa_pane

0xefb6,	// (0x00046c13) main_help_pane

0x021b,	// (0x00037e78) main_im_pane

0x0156,	// (0x00037db3) main_image_pane_ParamLimits

0x0156,	// (0x00037db3) main_image_pane

0xefb6,	// (0x00046c13) main_location2_pane

0x03e0,	// (0x0003803d) main_location_pane

0x0156,	// (0x00037db3) main_messa_pane

0xefb6,	// (0x00046c13) main_mp2_pane

0x03e0,	// (0x0003803d) main_mp_pane

0xefb6,	// (0x00046c13) main_msg_pane

0xefb6,	// (0x00046c13) main_mup_eq_pane

0xefb6,	// (0x00046c13) main_mup_pane

0x021b,	// (0x00037e78) main_notes_pane

0xefb6,	// (0x00046c13) main_pec_pane

0xefb6,	// (0x00046c13) main_phob_pane

0xefb6,	// (0x00046c13) main_pinb_pane

0xefb6,	// (0x00046c13) main_postcard_pane

0xefb6,	// (0x00046c13) main_qdial_pane

0x03e0,	// (0x0003803d) main_skin_pane

0xefb6,	// (0x00046c13) main_smil2_pane

0x03e0,	// (0x0003803d) main_smil_pane

0x03e0,	// (0x0003803d) main_video_pane

0x03e0,	// (0x0003803d) main_video_tele_pane

0x0156,	// (0x00037db3) main_viewer_pane_ParamLimits

0x0156,	// (0x00037db3) main_viewer_pane

0x03e0,	// (0x0003803d) main_vorec_pane

0x889f,	// (0x000404fc) popup_blid_sat_info_window_ParamLimits

0x889f,	// (0x000404fc) popup_blid_sat_info_window

0x88bf,	// (0x0004051c) popup_dyc_status_message_window_ParamLimits

0x88bf,	// (0x0004051c) popup_dyc_status_message_window

0x88cf,	// (0x0004052c) popup_grid_large_graphic_window_ParamLimits

0x88cf,	// (0x0004052c) popup_grid_large_graphic_window

0x8960,	// (0x000405bd) popup_loc_request_window_ParamLimits

0x8960,	// (0x000405bd) popup_loc_request_window

0x89ad,	// (0x0004060a) popup_wml_address_window_ParamLimits

0x89ad,	// (0x0004060a) popup_wml_address_window

0x8739,	// (0x00040396) call_muted_g1

0x83fb,	// (0x00040058) popup_call_audio_conf_window_ParamLimits

0x83fb,	// (0x00040058) popup_call_audio_conf_window

0x8749,	// (0x000403a6) popup_call_audio_first_window_ParamLimits

0x8749,	// (0x000403a6) popup_call_audio_first_window

0x8789,	// (0x000403e6) popup_call_audio_in_window_ParamLimits

0x8789,	// (0x000403e6) popup_call_audio_in_window

0x87ad,	// (0x0004040a) popup_call_audio_out_window_ParamLimits

0x87ad,	// (0x0004040a) popup_call_audio_out_window

0x87cf,	// (0x0004042c) popup_call_audio_second_window_ParamLimits

0x87cf,	// (0x0004042c) popup_call_audio_second_window

0x87ff,	// (0x0004045c) popup_call_audio_wait_window_ParamLimits

0x87ff,	// (0x0004045c) popup_call_audio_wait_window

0x8820,	// (0x0004047d) popup_number_entry_window_ParamLimits

0x8820,	// (0x0004047d) popup_number_entry_window

0xe74d,	// (0x000463aa) bg_popup_call_pane_cp05_ParamLimits

0xe74d,	// (0x000463aa) bg_popup_call_pane_cp05

0xe76d,	// (0x000463ca) popup_number_entry_window_t1

0xe780,	// (0x000463dd) popup_number_entry_window_t2

0xe792,	// (0x000463ef) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x00046d27) popup_number_entry_window_t

0xe7a4,	// (0x00046401) text_title_cp2

0xe7b7,	// (0x00046414) bg_popup_call_pane_cp_ParamLimits

0xe7b7,	// (0x00046414) bg_popup_call_pane_cp

0xe7c5,	// (0x00046422) call_thumbnail_pane

0xe7cd,	// (0x0004642a) popup_call_audio_in_window_g1_ParamLimits

0xe7cd,	// (0x0004642a) popup_call_audio_in_window_g1

0xe7d9,	// (0x00046436) popup_call_audio_in_window_g2_ParamLimits

0xe7d9,	// (0x00046436) popup_call_audio_in_window_g2

0xe7e5,	// (0x00046442) popup_call_audio_in_window_g3_ParamLimits

0xe7e5,	// (0x00046442) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x00046d30) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x00046d30) popup_call_audio_in_window_g

0xe7f1,	// (0x0004644e) popup_call_audio_in_window_t1_ParamLimits

0xe7f1,	// (0x0004644e) popup_call_audio_in_window_t1

0xe80d,	// (0x0004646a) popup_call_audio_in_window_t2_ParamLimits

0xe80d,	// (0x0004646a) popup_call_audio_in_window_t2

0xe829,	// (0x00046486) popup_call_audio_in_window_t3_ParamLimits

0xe829,	// (0x00046486) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x00046d37) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x00046d37) popup_call_audio_in_window_t

0xe7b7,	// (0x00046414) bg_popup_call_pane_cp01_ParamLimits

0xe7b7,	// (0x00046414) bg_popup_call_pane_cp01

0xe7c5,	// (0x00046422) call_thumbnail_pane_cp02

0xe83c,	// (0x00046499) call_type_pane_cp022

0xe844,	// (0x000464a1) popup_call_audio_out_window_g1_ParamLimits

0xe844,	// (0x000464a1) popup_call_audio_out_window_g1

0xe856,	// (0x000464b3) popup_call_audio_out_window_g2_ParamLimits

0xe856,	// (0x000464b3) popup_call_audio_out_window_g2

0xe862,	// (0x000464bf) popup_call_audio_out_window_g3_ParamLimits

0xe862,	// (0x000464bf) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x00046d3e) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x00046d3e) popup_call_audio_out_window_g

0xe874,	// (0x000464d1) popup_call_audio_out_window_t1_ParamLimits

0xe874,	// (0x000464d1) popup_call_audio_out_window_t1

0xe88c,	// (0x000464e9) popup_call_audio_out_window_t2_ParamLimits

0xe88c,	// (0x000464e9) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x00046d45) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x00046d45) popup_call_audio_out_window_t

0xe8a1,	// (0x000464fe) bg_popup_call_pane_ParamLimits

0xe8a1,	// (0x000464fe) bg_popup_call_pane

0x59e5,	// (0x0003d642) call_thumbnail_pane_cp_ParamLimits

0x59e5,	// (0x0003d642) call_thumbnail_pane_cp

0xe925,	// (0x00046582) call_type_pane_cp01_ParamLimits

0xe925,	// (0x00046582) call_type_pane_cp01

0xe969,	// (0x000465c6) popup_call_audio_first_window_g1_ParamLimits

0xe969,	// (0x000465c6) popup_call_audio_first_window_g1

0xe9b5,	// (0x00046612) popup_call_audio_first_window_g2_ParamLimits

0xe9b5,	// (0x00046612) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x00046d4a) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x00046d4a) popup_call_audio_first_window_g

0xee4f,	// (0x00046aac) popup_call_audio_first_window_t1_ParamLimits

0xee4f,	// (0x00046aac) popup_call_audio_first_window_t1

0xeefb,	// (0x00046b58) popup_call_audio_first_window_t4_ParamLimits

0xeefb,	// (0x00046b58) popup_call_audio_first_window_t4

0xef87,	// (0x00046be4) popup_call_audio_first_window_t5_ParamLimits

0xef87,	// (0x00046be4) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x00046d4f) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x00046d4f) popup_call_audio_first_window_t

0xefb6,	// (0x00046c13) bg_popup_call_pane_cp02

0xefc0,	// (0x00046c1d) call_type_pane_cp023

0xefc8,	// (0x00046c25) popup_call_audio_wait_window_g1

0xefd0,	// (0x00046c2d) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00046d56) popup_call_audio_wait_window_g

0xefd8,	// (0x00046c35) popup_call_audio_wait_window_t3

0xefe6,	// (0x00046c43) bg_popup_call_pane_cp03_ParamLimits

0xefe6,	// (0x00046c43) bg_popup_call_pane_cp03

0xf046,	// (0x00046ca3) call_thumbnail_pane_cp011_ParamLimits

0xf046,	// (0x00046ca3) call_thumbnail_pane_cp011

0xf052,	// (0x00046caf) call_type_pane_cp034_ParamLimits

0xf052,	// (0x00046caf) call_type_pane_cp034

0xf08e,	// (0x00046ceb) popup_call_audio_second_window_g1_ParamLimits

0xf08e,	// (0x00046ceb) popup_call_audio_second_window_g1

0x000f,	// (0x00037c6c) popup_call_audio_second_window_g2_ParamLimits

0x000f,	// (0x00037c6c) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x00046d5b) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x00046d5b) popup_call_audio_second_window_g

0x004b,	// (0x00037ca8) popup_call_audio_second_window_t1_ParamLimits

0x004b,	// (0x00037ca8) popup_call_audio_second_window_t1

0x00cc,	// (0x00037d29) popup_call_audio_second_window_t2_ParamLimits

0x00cc,	// (0x00037d29) popup_call_audio_second_window_t2

0x0102,	// (0x00037d5f) popup_call_audio_second_window_t3_ParamLimits

0x0102,	// (0x00037d5f) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x00046d60) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x00046d60) popup_call_audio_second_window_t

0xefb6,	// (0x00046c13) bg_popup_call_pane_cp04

0x0138,	// (0x00037d95) list_conf_pane

0x0140,	// (0x00037d9d) popup_call_audio_conf_window_t1

0x014e,	// (0x00037dab) call_thumbnail_pane_g1

0x0156,	// (0x00037db3) bg_pinb_pane_ParamLimits

0x0156,	// (0x00037db3) bg_pinb_pane

0x0164,	// (0x00037dc1) find_pinb_pane

0x016d,	// (0x00037dca) listscroll_pinb_pane_ParamLimits

0x016d,	// (0x00037dca) listscroll_pinb_pane

0x017c,	// (0x00037dd9) pinb_bg_pane_g1

0x5a09,	// (0x0003d666) pinb_bg_pane_g2

0x5a15,	// (0x0003d672) pinb_bg_pane_g3

0x5a21,	// (0x0003d67e) pinb_bg_pane_g4

0x5a2d,	// (0x0003d68a) pinb_bg_pane_g5

0x5a39,	// (0x0003d696) pinb_bg_pane_g6

0x5a44,	// (0x0003d6a1) pinb_bg_pane_g7

0x5a4f,	// (0x0003d6ac) pinb_bg_pane_g8

0x5a5a,	// (0x0003d6b7) pinb_bg_pane_g9

0x5a64,	// (0x0003d6c1) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x00046d67) pinb_bg_pane_g

0x5a81,	// (0x0003d6de) grid_pinb_pane

0x5a8c,	// (0x0003d6e9) list_pinb_pane

0x5a97,	// (0x0003d6f4) scroll_pane_cp01_ParamLimits

0x5a97,	// (0x0003d6f4) scroll_pane_cp01

0x0186,	// (0x00037de3) find_pinb_pane_g1_ParamLimits

0x0186,	// (0x00037de3) find_pinb_pane_g1

0x019e,	// (0x00037dfb) find_pinb_pane_t1

0x01b0,	// (0x00037e0d) find_pinb_pane_t2

0x0001,

0xf124,	// (0x00046d81) find_pinb_pane_t

0x01c5,	// (0x00037e22) input_focus_pane_cp01_ParamLimits

0x01c5,	// (0x00037e22) input_focus_pane_cp01

0x5aa9,	// (0x0003d706) cell_pinb_pane_ParamLimits

0x5aa9,	// (0x0003d706) cell_pinb_pane

0x5ad1,	// (0x0003d72e) cell_pinb_pane_g1_ParamLimits

0x5ad1,	// (0x0003d72e) cell_pinb_pane_g1

0x5ae6,	// (0x0003d743) cell_pinb_pane_g2_ParamLimits

0x5ae6,	// (0x0003d743) cell_pinb_pane_g2

0x01d1,	// (0x00037e2e) cell_pinb_pane_g3_ParamLimits

0x01d1,	// (0x00037e2e) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x00046d86) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x00046d86) cell_pinb_pane_g

0xefb6,	// (0x00046c13) grid_highlight_pane_cp01

0x5af2,	// (0x0003d74f) list_pinb_item_pane_ParamLimits

0x5af2,	// (0x0003d74f) list_pinb_item_pane

0xefb6,	// (0x00046c13) list_highlight_pane_cp02

0x5b18,	// (0x0003d775) list_pinb_item_pane_g1_ParamLimits

0x5b18,	// (0x0003d775) list_pinb_item_pane_g1

0x5b25,	// (0x0003d782) list_pinb_item_pane_g2_ParamLimits

0x5b25,	// (0x0003d782) list_pinb_item_pane_g2

0x5b31,	// (0x0003d78e) list_pinb_item_pane_g3_ParamLimits

0x5b31,	// (0x0003d78e) list_pinb_item_pane_g3

0x5b42,	// (0x0003d79f) list_pinb_item_pane_g4_ParamLimits

0x5b42,	// (0x0003d79f) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x00046d8d) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x00046d8d) list_pinb_item_pane_g

0x5b4e,	// (0x0003d7ab) list_pinb_item_pane_t1_ParamLimits

0x5b4e,	// (0x0003d7ab) list_pinb_item_pane_t1

0x5b7f,	// (0x0003d7dc) calc_display_pane

0x5b9d,	// (0x0003d7fa) calc_paper_pane

0x5bb9,	// (0x0003d816) grid_calc_pane

0xefb6,	// (0x00046c13) bg_list_pane_cp01

0x5be5,	// (0x0003d842) clock_g1

0x5bed,	// (0x0003d84a) clock_g2

0x0001,

0xf139,	// (0x00046d96) clock_g

0x5bf7,	// (0x0003d854) clock_t1_ParamLimits

0x5bf7,	// (0x0003d854) clock_t1

0x5c0c,	// (0x0003d869) clock_t2_ParamLimits

0x5c0c,	// (0x0003d869) clock_t2

0x5c1e,	// (0x0003d87b) clock_t3_ParamLimits

0x5c1e,	// (0x0003d87b) clock_t3

0x5c30,	// (0x0003d88d) clock_t4_ParamLimits

0x5c30,	// (0x0003d88d) clock_t4

0x5c42,	// (0x0003d89f) clock_t5_ParamLimits

0x5c42,	// (0x0003d89f) clock_t5

0x5c57,	// (0x0003d8b4) clock_t6_ParamLimits

0x5c57,	// (0x0003d8b4) clock_t6

0x5c69,	// (0x0003d8c6) clock_t7_ParamLimits

0x5c69,	// (0x0003d8c6) clock_t7

0x5c7b,	// (0x0003d8d8) clock_t8_ParamLimits

0x5c7b,	// (0x0003d8d8) clock_t8

0x5c91,	// (0x0003d8ee) clock_t9_ParamLimits

0x5c91,	// (0x0003d8ee) clock_t9

0x0008,

0xf13e,	// (0x00046d9b) clock_t_ParamLimits

0xf13e,	// (0x00046d9b) clock_t

0x01dd,	// (0x00037e3a) popup_clock_analogue_window_cp02

0x01dd,	// (0x00037e3a) popup_clock_digital_window_cp01

0x01e5,	// (0x00037e42) listscroll_help_pane

0xefb6,	// (0x00046c13) phob_pre_status_pane

0x01ef,	// (0x00037e4c) grid_qdial_pane

0x0156,	// (0x00037db3) listscroll_mce_pane

0x0156,	// (0x00037db3) bg_notes_pane

0x01f9,	// (0x00037e56) list_notes_pane

0x5ca7,	// (0x0003d904) scroll_pane_cp06

0x0207,	// (0x00037e64) bg_calc_paper_pane

0x5cb6,	// (0x0003d913) list_calc_pane

0x021b,	// (0x00037e78) bg_calc_display_pane

0x5cd0,	// (0x0003d92d) calc_display_pane_t1

0x5ce5,	// (0x0003d942) calc_display_pane_t2

0x5cfa,	// (0x0003d957) calc_display_pane_t3

0x0002,

0xf151,	// (0x00046dae) calc_display_pane_t

0x5d0c,	// (0x0003d969) cell_calc_pane_ParamLimits

0x5d0c,	// (0x0003d969) cell_calc_pane

0x0227,	// (0x00037e84) bg_calc_paper_pane_g1

0x023f,	// (0x00037e9c) bg_calc_paper_pane_g2

0x0233,	// (0x00037e90) bg_calc_paper_pane_g3

0x0257,	// (0x00037eb4) bg_calc_paper_pane_g4

0x024b,	// (0x00037ea8) bg_calc_paper_pane_g5

0x5d39,	// (0x0003d996) bg_calc_paper_pane_g6

0x5d4a,	// (0x0003d9a7) bg_calc_paper_pane_g7

0x5d5b,	// (0x0003d9b8) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x00046db5) bg_calc_paper_pane_g

0x5d6c,	// (0x0003d9c9) calc_bg_paper_pane_g9

0x5d7d,	// (0x0003d9da) list_calc_item_pane_ParamLimits

0x5d7d,	// (0x0003d9da) list_calc_item_pane

0x0263,	// (0x00037ec0) list_calc_item_pane_g1

0x5dac,	// (0x0003da09) list_calc_item_pane_t1_ParamLimits

0x5dac,	// (0x0003da09) list_calc_item_pane_t1

0x5dbe,	// (0x0003da1b) list_calc_item_pane_t2_ParamLimits

0x5dbe,	// (0x0003da1b) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x00046dc6) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x00046dc6) list_calc_item_pane_t

0x0270,	// (0x00037ecd) cell_calc_pane_g1

0x027a,	// (0x00037ed7) grid_highlight_pane_cp02

0x25f1,	// (0x0003a24e) bg_calc_display_pane_g1

0x5dee,	// (0x0003da4b) bg_calc_display_pane_g2

0x5df8,	// (0x0003da55) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x00046dd0) bg_calc_display_pane_g

0x5e01,	// (0x0003da5e) cell_qdial_pane_ParamLimits

0x5e01,	// (0x0003da5e) cell_qdial_pane

0x5e15,	// (0x0003da72) cell_qdial_pane_g1_ParamLimits

0x5e15,	// (0x0003da72) cell_qdial_pane_g1

0x5e22,	// (0x0003da7f) cell_qdial_pane_g2_ParamLimits

0x5e22,	// (0x0003da7f) cell_qdial_pane_g2

0x029c,	// (0x00037ef9) cell_qdial_pane_g3_ParamLimits

0x029c,	// (0x00037ef9) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x00046dd7) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x00046dd7) cell_qdial_pane_g

0x5e40,	// (0x0003da9d) cell_qdial_pane_t1_ParamLimits

0x5e40,	// (0x0003da9d) cell_qdial_pane_t1

0x5e58,	// (0x0003dab5) cell_qdial_pane_t2_ParamLimits

0x5e58,	// (0x0003dab5) cell_qdial_pane_t2

0x5e6b,	// (0x0003dac8) cell_qdial_pane_t3_ParamLimits

0x5e6b,	// (0x0003dac8) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x00046de0) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x00046de0) cell_qdial_pane_t

0xefb6,	// (0x00046c13) grid_highlight_pane_cp04

0x02a8,	// (0x00037f05) thumbnail_qdial_pane_ParamLimits

0x02a8,	// (0x00037f05) thumbnail_qdial_pane

0x0304,	// (0x00037f61) list_help_pane

0x030d,	// (0x00037f6a) scroll_pane_cp02

0x5e7e,	// (0x0003dadb) help_list_pane_t1_ParamLimits

0x5e7e,	// (0x0003dadb) help_list_pane_t1

0x5eb1,	// (0x0003db0e) bg_notes_pane_g2

0x5eb9,	// (0x0003db16) bg_notes_pane_g3

0x5ec1,	// (0x0003db1e) notes_bg_pane_g1

0x5ec9,	// (0x0003db26) notes_bg_pane_g4

0x5ed1,	// (0x0003db2e) notes_bg_pane_g5

0x5ed9,	// (0x0003db36) notes_bg_pane_g6

0x5ee1,	// (0x0003db3e) notes_bg_pane_g7

0x5ee9,	// (0x0003db46) notes_bg_pane_g8

0x5ef1,	// (0x0003db4e) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x00046dfe) notes_bg_pane_g

0x5ef9,	// (0x0003db56) list_notes_text_pane_ParamLimits

0x5ef9,	// (0x0003db56) list_notes_text_pane

0x0316,	// (0x00037f73) list_notes_text_pane_g1

0x42d5,	// (0x0003bf32) list_notes_text_pane_t1

0x5f21,	// (0x0003db7e) listscroll_cale_week_pane

0x5f46,	// (0x0003dba3) bg_cale_heading_pane

0x0339,	// (0x00037f96) bg_cale_pane_cp01

0x5f66,	// (0x0003dbc3) cale_week_corner_pane

0x5f80,	// (0x0003dbdd) cale_week_day_heading_pane

0x5fa0,	// (0x0003dbfd) cale_week_scroll_pane_g1

0x5fbb,	// (0x0003dc18) cale_week_scroll_pane_g2

0x5fce,	// (0x0003dc2b) cale_week_scroll_pane_g3

0x5fe1,	// (0x0003dc3e) cale_week_scroll_pane_g4

0x5ff4,	// (0x0003dc51) cale_week_scroll_pane_g5

0x6007,	// (0x0003dc64) cale_week_scroll_pane_g6

0x601a,	// (0x0003dc77) cale_week_scroll_pane_g7

0x602f,	// (0x0003dc8c) cale_week_scroll_pane_g8

0x6044,	// (0x0003dca1) cale_week_scroll_pane_g9

0x6057,	// (0x0003dcb4) cale_week_scroll_pane_g10

0x606a,	// (0x0003dcc7) cale_week_scroll_pane_g11

0x607d,	// (0x0003dcda) cale_week_scroll_pane_g12

0x6094,	// (0x0003dcf1) cale_week_scroll_pane_g13

0x60af,	// (0x0003dd0c) cale_week_scroll_pane_g14

0x60ca,	// (0x0003dd27) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x00046e0d) cale_week_scroll_pane_g

0x60fa,	// (0x0003dd57) cale_week_time_pane

0x610f,	// (0x0003dd6c) grid_cale_week_pane

0x0368,	// (0x00037fc5) scroll_pane_cp08

0x612e,	// (0x0003dd8b) cell_cale_week_pane_ParamLimits

0x612e,	// (0x0003dd8b) cell_cale_week_pane

0x6190,	// (0x0003dded) cale_week_day_heading_pane_t1

0x61ab,	// (0x0003de08) cale_week_day_heading_pane_t2

0x61c6,	// (0x0003de23) cale_week_day_heading_pane_t3

0x61e1,	// (0x0003de3e) cale_week_day_heading_pane_t4

0x61fc,	// (0x0003de59) cale_week_day_heading_pane_t5

0x6217,	// (0x0003de74) cale_week_day_heading_pane_t6

0x6232,	// (0x0003de8f) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x00046e2e) cale_week_day_heading_pane_t

0x0385,	// (0x00037fe2) bg_cale_side_pane

0x624d,	// (0x0003deaa) cale_week_time_pane_t1

0x6267,	// (0x0003dec4) cale_week_time_pane_t2

0x6281,	// (0x0003dede) cale_week_time_pane_t3

0x629b,	// (0x0003def8) cale_week_time_pane_t4

0x62b5,	// (0x0003df12) cale_week_time_pane_t5

0x62cf,	// (0x0003df2c) cale_week_time_pane_t6

0x62ed,	// (0x0003df4a) cale_week_time_pane_t7

0x630f,	// (0x0003df6c) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x00046e3d) cale_week_time_pane_t

0x6333,	// (0x0003df90) cell_cale_week_pane_g2

0x6357,	// (0x0003dfb4) cell_cale_week_pane_g3_ParamLimits

0x6357,	// (0x0003dfb4) cell_cale_week_pane_g3

0x0393,	// (0x00037ff0) grid_highlight_pane_cp07

0x039b,	// (0x00037ff8) listscroll_gms_pane

0x03a5,	// (0x00038002) grid_gms_pane

0x03ae,	// (0x0003800b) listscroll_gms_pane_g1

0x03b6,	// (0x00038013) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x00046e4e) listscroll_gms_pane_g

0x636f,	// (0x0003dfcc) scroll_pane_cp010

0x637a,	// (0x0003dfd7) cell_gms_pane_ParamLimits

0x637a,	// (0x0003dfd7) cell_gms_pane

0x638d,	// (0x0003dfea) cell_gms_pane_g1

0x03be,	// (0x0003801b) cell_gms_pane_g2

0x03c6,	// (0x00038023) cell_gms_pane_g3

0x03cf,	// (0x0003802c) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x00046e53) cell_gms_pane_g

0x03d8,	// (0x00038035) grid_highlight_pane_cp09

0x86e1,	// (0x0004033e) phob_pre_status_pane_g1

0x86e9,	// (0x00040346) phob_pre_status_pane_g2

0x86f1,	// (0x0004034e) phob_pre_status_pane_g3

0x86f9,	// (0x00040356) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0004723e) phob_pre_status_pane_g

0x8709,	// (0x00040366) phob_pre_status_pane_t1

0x8719,	// (0x00040376) phob_pre_status_pane_t2

0x8729,	// (0x00040386) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x00047249) phob_pre_status_pane_t

0x03e0,	// (0x0003803d) bg_list_pane_cp05

0x639d,	// (0x0003dffa) grid_vorec_pane

0x63a7,	// (0x0003e004) vorec_t1

0x63b5,	// (0x0003e012) vorec_t2

0x63c3,	// (0x0003e020) vorec_t3

0x63d1,	// (0x0003e02e) vorec_t4

0xd42b,	// (0x00045088) vorec_t5

0xd439,	// (0x00045096) vorec_t6

0x0004,

0xf1ff,	// (0x00046e5c) vorec_t

0xd447,	// (0x000450a4) wait_bar_pane_cp01

0x63ed,	// (0x0003e04a) cell_vorec_pane_ParamLimits

0x63ed,	// (0x0003e04a) cell_vorec_pane

0x6400,	// (0x0003e05d) cell_vorec_pane_g1

0xefb6,	// (0x00046c13) grid_highlight_pane_cp05

0x641a,	// (0x0003e077) cams_zoom_pane

0x6426,	// (0x0003e083) image_vga_pane

0x6435,	// (0x0003e092) main_camera_pane_g1

0x6443,	// (0x0003e0a0) main_camera_pane_g2

0x644f,	// (0x0003e0ac) main_camera_pane_g3

0x645b,	// (0x0003e0b8) main_camera_pane_g4

0x6467,	// (0x0003e0c4) main_camera_pane_g5

0x6473,	// (0x0003e0d0) main_camera_pane_g6

0x647f,	// (0x0003e0dc) main_camera_pane_g7

0x0007,

0xf20a,	// (0x00046e67) main_camera_pane_g

0x648b,	// (0x0003e0e8) main_camera_pane_t1

0x649d,	// (0x0003e0fa) main_camera_pane_t2

0x0001,

0xf21b,	// (0x00046e78) main_camera_pane_t

0x64be,	// (0x0003e11b) cams_zoom_pane_cp_ParamLimits

0x64be,	// (0x0003e11b) cams_zoom_pane_cp

0x64e2,	// (0x0003e13f) image_cif_pane_ParamLimits

0x64e2,	// (0x0003e13f) image_cif_pane

0x6500,	// (0x0003e15d) image_subqcif_pane

0x6508,	// (0x0003e165) main_video_pane_g1_ParamLimits

0x6508,	// (0x0003e165) main_video_pane_g1

0x6528,	// (0x0003e185) main_video_pane_g2_ParamLimits

0x6528,	// (0x0003e185) main_video_pane_g2

0x6558,	// (0x0003e1b5) main_video_pane_g3_ParamLimits

0x6558,	// (0x0003e1b5) main_video_pane_g3

0x6581,	// (0x0003e1de) main_video_pane_g4_ParamLimits

0x6581,	// (0x0003e1de) main_video_pane_g4

0x65aa,	// (0x0003e207) main_video_pane_g5_ParamLimits

0x65aa,	// (0x0003e207) main_video_pane_g5

0x03f4,	// (0x00038051) main_video_pane_g6_ParamLimits

0x03f4,	// (0x00038051) main_video_pane_g6

0x0006,

0xf220,	// (0x00046e7d) main_video_pane_g_ParamLimits

0xf220,	// (0x00046e7d) main_video_pane_g

0x65cc,	// (0x0003e229) main_video_pane_t1_ParamLimits

0x65cc,	// (0x0003e229) main_video_pane_t1

0x040e,	// (0x0003806b) cams_zoom_pane_g1

0x0417,	// (0x00038074) cams_zoom_pane_g2

0x0420,	// (0x0003807d) cams_zoom_pane_g3

0x0429,	// (0x00038086) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x00046e8c) cams_zoom_pane_g

0x6616,	// (0x0003e273) grid_cams_pane

0x6624,	// (0x0003e281) linegrid_cams_pane

0x6632,	// (0x0003e28f) cell_cams_pane_ParamLimits

0x6632,	// (0x0003e28f) cell_cams_pane

0x0432,	// (0x0003808f) cams_burst_image_pane

0x043a,	// (0x00038097) cell_cams_pane_g1

0xefb6,	// (0x00046c13) grid_highlight_pane_cp03

0x0270,	// (0x00037ecd) mp_bg_pane_g1

0xefb6,	// (0x00046c13) bg_list_pane_cp03

0x21ec,	// (0x00039e49) bg_mp_pane

0x21f4,	// (0x00039e51) grid_mp_pane

0x21fc,	// (0x00039e59) media_player_g1

0x2204,	// (0x00039e61) media_player_t1

0x2212,	// (0x00039e6f) media_player_t2

0x2220,	// (0x00039e7d) media_player_t3

0x222e,	// (0x00039e8b) media_player_t4

0x223c,	// (0x00039e99) media_player_t5

0x224a,	// (0x00039ea7) media_player_t6

0x2258,	// (0x00039eb5) media_player_t7

0x0006,

0xf5cb,	// (0x00047228) media_player_t

0x2266,	// (0x00039ec3) wait_bar_pane_cp02

0xf5b0,	// (0x0004720d) main_usb_pane_t

0x86d8,	// (0x00040335) cell_mp_pane

0x0270,	// (0x00037ecd) cell_mp_pane_g1

0xefb6,	// (0x00046c13) grid_highlight_pane_cp06

0x0442,	// (0x0003809f) grid_skin_colour_pane

0x044a,	// (0x000380a7) list_highlight_pane_cp03

0x6645,	// (0x0003e2a2) skin_g1

0x0452,	// (0x000380af) skin_t1

0x0461,	// (0x000380be) skin_t2

0x0001,

0xf264,	// (0x00046ec1) skin_t

0x664f,	// (0x0003e2ac) cell_skin_colour_pane_ParamLimits

0x664f,	// (0x0003e2ac) cell_skin_colour_pane

0x046f,	// (0x000380cc) cell_skin_colour_pane_g1

0x66d3,	// (0x0003e330) call_video_g1_ParamLimits

0x66d3,	// (0x0003e330) call_video_g1

0x66e3,	// (0x0003e340) call_video_g2_ParamLimits

0x66e3,	// (0x0003e340) call_video_g2

0x0001,

0xf269,	// (0x00046ec6) call_video_g_ParamLimits

0xf269,	// (0x00046ec6) call_video_g

0x673d,	// (0x0003e39a) call_video_uplink_pane_cp1_ParamLimits

0x673d,	// (0x0003e39a) call_video_uplink_pane_cp1

0x0481,	// (0x000380de) call_video_uplink_pane_cp2

0x6809,	// (0x0003e466) video_down_crop_pane_ParamLimits

0x6809,	// (0x0003e466) video_down_crop_pane

0x6907,	// (0x0003e564) video_down_pane_ParamLimits

0x6907,	// (0x0003e564) video_down_pane

0x0489,	// (0x000380e6) video_down_subqcif_pane_ParamLimits

0x0489,	// (0x000380e6) video_down_subqcif_pane

0x04a1,	// (0x000380fe) video_down_subqcif_pane_cp_ParamLimits

0x04a1,	// (0x000380fe) video_down_subqcif_pane_cp

0x04c7,	// (0x00038124) im_reading_pane_ParamLimits

0x04c7,	// (0x00038124) im_reading_pane

0x6a27,	// (0x0003e684) im_writing_pane_ParamLimits

0x6a27,	// (0x0003e684) im_writing_pane

0x6a45,	// (0x0003e6a2) im_reading_pane_t1

0x04e1,	// (0x0003813e) list_im_pane

0x04f2,	// (0x0003814f) scroll_pane_cp07

0x6a99,	// (0x0003e6f6) im_writing_pane_t1_ParamLimits

0x6a99,	// (0x0003e6f6) im_writing_pane_t1

0x050b,	// (0x00038168) im_writing_pane_t2_ParamLimits

0x050b,	// (0x00038168) im_writing_pane_t2

0x0001,

0xf273,	// (0x00046ed0) im_writing_pane_t_ParamLimits

0xf273,	// (0x00046ed0) im_writing_pane_t

0xefb6,	// (0x00046c13) input_focus_pane_cp04

0xefb6,	// (0x00046c13) input_focus_pane_cp05

0x6aae,	// (0x0003e70b) list_im_single_pane_ParamLimits

0x6aae,	// (0x0003e70b) list_im_single_pane

0x6ad2,	// (0x0003e72f) list_single_im_pane_t1

0x869c,	// (0x000402f9) blid_accuracy_pane

0x86a4,	// (0x00040301) blid_compass_pane

0x86ae,	// (0x0004030b) main_location_t1

0x86bc,	// (0x00040319) main_location_t2

0x86ca,	// (0x00040327) main_location_t3

0x0002,

0xf5da,	// (0x00047237) main_location_t

0xefb6,	// (0x00046c13) aid_levels_location

0x0270,	// (0x00037ecd) blid_accuracy_pane_g1

0x0270,	// (0x00037ecd) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x00046f32) blid_accuracy_pane_g

0x0553,	// (0x000381b0) wml_content_pane

0x0591,	// (0x000381ee) wml_button_pane_ParamLimits

0x0591,	// (0x000381ee) wml_button_pane

0x6ae1,	// (0x0003e73e) wml_list_single_large_pane_ParamLimits

0x6ae1,	// (0x0003e73e) wml_list_single_large_pane

0x6b0b,	// (0x0003e768) wml_list_single_medium_pane_ParamLimits

0x6b0b,	// (0x0003e768) wml_list_single_medium_pane

0x6b3c,	// (0x0003e799) wml_list_single_small_pane_ParamLimits

0x6b3c,	// (0x0003e799) wml_list_single_small_pane

0x05a5,	// (0x00038202) wml_selection_box_pane_ParamLimits

0x05a5,	// (0x00038202) wml_selection_box_pane

0x05b8,	// (0x00038215) wml_list_single_pane_t1

0x05c7,	// (0x00038224) wml_list_single_medium_pane_t1

0x05d6,	// (0x00038233) wml_list_single_large_pane_t1

0x05e5,	// (0x00038242) input_focus_pane_cp02_ParamLimits

0x05e5,	// (0x00038242) input_focus_pane_cp02

0x05f8,	// (0x00038255) wml_selection_box_pane_g1

0x0601,	// (0x0003825e) wml_selection_box_pane_t1_ParamLimits

0x0601,	// (0x0003825e) wml_selection_box_pane_t1

0x0156,	// (0x00037db3) bg_wml_button_pane_ParamLimits

0x0156,	// (0x00037db3) bg_wml_button_pane

0x0619,	// (0x00038276) wml_button_pane_g1

0x0621,	// (0x0003827e) wml_button_pane_t1

0x0619,	// (0x00038276) wml_button_bg_pane_g1

0x0631,	// (0x0003828e) wml_button_bg_pane_g2

0x0639,	// (0x00038296) wml_button_bg_pane_g3

0x0641,	// (0x0003829e) wml_button_bg_pane_g4

0x0649,	// (0x000382a6) wml_button_bg_pane_g5

0x0651,	// (0x000382ae) wml_button_bg_pane_g6

0x0659,	// (0x000382b6) wml_button_bg_pane_g7

0x0661,	// (0x000382be) wml_button_bg_pane_g8

0x0669,	// (0x000382c6) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x00046ed5) wml_button_bg_pane_g

0x6b76,	// (0x0003e7d3) bg_list_pane_cp02

0x0671,	// (0x000382ce) mce_header_pane_ParamLimits

0x0671,	// (0x000382ce) mce_header_pane

0x0687,	// (0x000382e4) mce_icon_pane

0x0687,	// (0x000382e4) mce_image_pane

0x0690,	// (0x000382ed) mce_text_pane_ParamLimits

0x0690,	// (0x000382ed) mce_text_pane

0x6b80,	// (0x0003e7dd) scroll_pane_cp03

0x0589,	// (0x000381e6) scroll_pane_cp04

0x06a3,	// (0x00038300) scroll_pane_cp05_ParamLimits

0x06a3,	// (0x00038300) scroll_pane_cp05

0x6b8a,	// (0x0003e7e7) mce_header_field_pane_ParamLimits

0x6b8a,	// (0x0003e7e7) mce_header_field_pane

0x6baa,	// (0x0003e807) mce_header_field_pane_2_ParamLimits

0x6baa,	// (0x0003e807) mce_header_field_pane_2

0x6bc0,	// (0x0003e81d) mce_header_field_pane_3

0x6bc8,	// (0x0003e825) list_single_mce_message_pane_ParamLimits

0x6bc8,	// (0x0003e825) list_single_mce_message_pane

0x6bf3,	// (0x0003e850) list_single_mce_smart_pane_ParamLimits

0x6bf3,	// (0x0003e850) list_single_mce_smart_pane

0x06af,	// (0x0003830c) input_focus_pane_cp03

0x06b8,	// (0x00038315) list_header_data_pane

0x6c29,	// (0x0003e886) mce_header_field_pane_t1

0x6c37,	// (0x0003e894) list_single_mce_header_pane_ParamLimits

0x6c37,	// (0x0003e894) list_single_mce_header_pane

0x06c0,	// (0x0003831d) list_single_mce_header_pane_t1

0x06cf,	// (0x0003832c) list_single_mce_message_pane_g1

0x06d7,	// (0x00038334) list_single_mce_message_pane_t1

0x6c89,	// (0x0003e8e6) bg_cale_heading_pane_cp01_ParamLimits

0x6c89,	// (0x0003e8e6) bg_cale_heading_pane_cp01

0x06e5,	// (0x00038342) bg_cale_pane_cp02_ParamLimits

0x06e5,	// (0x00038342) bg_cale_pane_cp02

0x6cd7,	// (0x0003e934) cale_month_corner_pane

0x6cf6,	// (0x0003e953) cale_month_day_heading_pane_ParamLimits

0x6cf6,	// (0x0003e953) cale_month_day_heading_pane

0x6d5c,	// (0x0003e9b9) cale_month_pane_g1_ParamLimits

0x6d5c,	// (0x0003e9b9) cale_month_pane_g1

0x6d9f,	// (0x0003e9fc) cale_month_pane_g2_ParamLimits

0x6d9f,	// (0x0003e9fc) cale_month_pane_g2

0x6dd7,	// (0x0003ea34) cale_month_pane_g3_ParamLimits

0x6dd7,	// (0x0003ea34) cale_month_pane_g3

0x6e23,	// (0x0003ea80) cale_month_pane_g4_ParamLimits

0x6e23,	// (0x0003ea80) cale_month_pane_g4

0x6e6f,	// (0x0003eacc) cale_month_pane_g5_ParamLimits

0x6e6f,	// (0x0003eacc) cale_month_pane_g5

0x6ebb,	// (0x0003eb18) cale_month_pane_g6_ParamLimits

0x6ebb,	// (0x0003eb18) cale_month_pane_g6

0x6f07,	// (0x0003eb64) cale_month_pane_g7_ParamLimits

0x6f07,	// (0x0003eb64) cale_month_pane_g7

0x6f6b,	// (0x0003ebc8) cale_month_pane_g8_ParamLimits

0x6f6b,	// (0x0003ebc8) cale_month_pane_g8

0x6fcf,	// (0x0003ec2c) cale_month_pane_g9_ParamLimits

0x6fcf,	// (0x0003ec2c) cale_month_pane_g9

0x702d,	// (0x0003ec8a) cale_month_pane_g10_ParamLimits

0x702d,	// (0x0003ec8a) cale_month_pane_g10

0x7089,	// (0x0003ece6) cale_month_pane_g11_ParamLimits

0x7089,	// (0x0003ece6) cale_month_pane_g11

0x70dd,	// (0x0003ed3a) cale_month_pane_g12_ParamLimits

0x70dd,	// (0x0003ed3a) cale_month_pane_g12

0x7133,	// (0x0003ed90) cale_month_pane_g13_ParamLimits

0x7133,	// (0x0003ed90) cale_month_pane_g13

0x000c,

0xf28b,	// (0x00046ee8) cale_month_pane_g_ParamLimits

0xf28b,	// (0x00046ee8) cale_month_pane_g

0x7189,	// (0x0003ede6) cale_month_week_pane

0x71ad,	// (0x0003ee0a) grid_cale_month_pane_ParamLimits

0x71ad,	// (0x0003ee0a) grid_cale_month_pane

0x7206,	// (0x0003ee63) cale_month_day_heading_pane_t1

0x728c,	// (0x0003eee9) cale_month_day_heading_pane_t2

0x7305,	// (0x0003ef62) cale_month_day_heading_pane_t3

0x737e,	// (0x0003efdb) cale_month_day_heading_pane_t4

0x73f7,	// (0x0003f054) cale_month_day_heading_pane_t5

0x7470,	// (0x0003f0cd) cale_month_day_heading_pane_t6

0x74e9,	// (0x0003f146) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x00046f03) cale_month_day_heading_pane_t

0x0385,	// (0x00037fe2) bg_cale_side_pane_cp01

0x757a,	// (0x0003f1d7) cale_month_week_pane_t1

0x7593,	// (0x0003f1f0) cale_month_week_pane_t2

0x75ac,	// (0x0003f209) cale_month_week_pane_t3

0x75c5,	// (0x0003f222) cale_month_week_pane_t4

0x75de,	// (0x0003f23b) cale_month_week_pane_t5

0x75ff,	// (0x0003f25c) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x00046f12) cale_month_week_pane_t

0x7620,	// (0x0003f27d) cell_cale_month_pane_ParamLimits

0x7620,	// (0x0003f27d) cell_cale_month_pane

0x7742,	// (0x0003f39f) cell_cale_month_pane_g1

0x774e,	// (0x0003f3ab) cell_cale_month_pane_t1_ParamLimits

0x774e,	// (0x0003f3ab) cell_cale_month_pane_t1

0x0393,	// (0x00037ff0) grid_highlight_pane_cp08

0x0270,	// (0x00037ecd) main_smil_g1

0x777a,	// (0x0003f3d7) smil_status_pane

0x0724,	// (0x00038381) smil_text_pane

0x210c,	// (0x00039d69) bg_popup_call3_rect_pane_g8

0x2114,	// (0x00039d71) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000471cb) bg_popup_call3_rect_pane_g

0x236e,	// (0x00039fcb) smil_status_volume_pane_g1

0x072e,	// (0x0003838b) smil_status_pane_t1

0x8ac6,	// (0x00040723) volume_smil_pane

0x0745,	// (0x000383a2) list_smil_text_pane

0x778d,	// (0x0003f3ea) scroll_pane_cp011

0x7798,	// (0x0003f3f5) smil_text_list_pane_t1_ParamLimits

0x7798,	// (0x0003f3f5) smil_text_list_pane_t1

0x7810,	// (0x0003f46d) aid_volume_smil_ParamLimits

0x7810,	// (0x0003f46d) aid_volume_smil

0x0270,	// (0x00037ecd) smil_volume_pane_g1

0x0270,	// (0x00037ecd) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x00046f32) smil_volume_pane_g

0x5f21,	// (0x0003db7e) listscroll_cale_day_pane

0x074f,	// (0x000383ac) bg_cale_pane

0x0767,	// (0x000383c4) list_cale_pane

0x078a,	// (0x000383e7) scroll_pane_cp09

0x079b,	// (0x000383f8) cale_bg_pane_g1

0x07a3,	// (0x00038400) cale_bg_pane_g2

0x07ab,	// (0x00038408) cale_bg_pane_g3

0x07b3,	// (0x00038410) cale_bg_pane_g4

0x07bb,	// (0x00038418) cale_bg_pane_g5

0x07c3,	// (0x00038420) cale_bg_pane_g6

0x07cb,	// (0x00038428) cale_bg_pane_g7

0x07d3,	// (0x00038430) cale_bg_pane_g8

0x07db,	// (0x00038438) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x00046f37) cale_bg_pane_g

0x783a,	// (0x0003f497) list_cale_time_pane_ParamLimits

0x783a,	// (0x0003f497) list_cale_time_pane

0x07e3,	// (0x00038440) list_cale_time_pane_g1_ParamLimits

0x07e3,	// (0x00038440) list_cale_time_pane_g1

0x07ef,	// (0x0003844c) list_cale_time_pane_g2_ParamLimits

0x07ef,	// (0x0003844c) list_cale_time_pane_g2

0x785c,	// (0x0003f4b9) list_cale_time_pane_g3_ParamLimits

0x785c,	// (0x0003f4b9) list_cale_time_pane_g3

0x786a,	// (0x0003f4c7) list_cale_time_pane_g4_ParamLimits

0x786a,	// (0x0003f4c7) list_cale_time_pane_g4

0x7878,	// (0x0003f4d5) list_cale_time_pane_g5_ParamLimits

0x7878,	// (0x0003f4d5) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x00046f4a) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x00046f4a) list_cale_time_pane_g

0x0809,	// (0x00038466) list_cale_time_pane_t1_ParamLimits

0x0809,	// (0x00038466) list_cale_time_pane_t1

0x0831,	// (0x0003848e) list_cale_time_pane_t2_ParamLimits

0x0831,	// (0x0003848e) list_cale_time_pane_t2

0x7b3f,	// (0x0003f79c) aid_blid_cardinal_pane

0x7b81,	// (0x0003f7de) compass_pane_t4

0x0859,	// (0x000384b6) list_cale_time_pane_t4_ParamLimits

0x0859,	// (0x000384b6) list_cale_time_pane_t4

0x7b8f,	// (0x0003f7ec) compass_pane_t5

0x7b9f,	// (0x0003f7fc) compass_pane_t6

0x7bad,	// (0x0003f80a) compass_pane_t7

0x0d24,	// (0x00038981) navi_pane_cc_t1

0x0f01,	// (0x00038b5e) aid_phob_thumbnail_center_pane

0x81a2,	// (0x0003fdff) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x00046f57) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x00046f57) list_cale_time_pane_t

0xe7b7,	// (0x00046414) bg_popup_window_pane_cp02_ParamLimits

0xe7b7,	// (0x00046414) bg_popup_window_pane_cp02

0x0881,	// (0x000384de) heading_pane_cp01_ParamLimits

0x0881,	// (0x000384de) heading_pane_cp01

0x088d,	// (0x000384ea) loc_req_pane_ParamLimits

0x088d,	// (0x000384ea) loc_req_pane

0x089d,	// (0x000384fa) loc_type_pane_ParamLimits

0x089d,	// (0x000384fa) loc_type_pane

0x08af,	// (0x0003850c) loc_type_pane_t1_ParamLimits

0x08af,	// (0x0003850c) loc_type_pane_t1

0x08c1,	// (0x0003851e) loc_type_pane_t2_ParamLimits

0x08c1,	// (0x0003851e) loc_type_pane_t2

0x08d3,	// (0x00038530) loc_type_pane_t3_ParamLimits

0x08d3,	// (0x00038530) loc_type_pane_t3

0x0002,

0xf301,	// (0x00046f5e) loc_type_pane_t_ParamLimits

0xf301,	// (0x00046f5e) loc_type_pane_t

0x08e5,	// (0x00038542) list_loc_req_pane

0x08ef,	// (0x0003854c) scroll_pane_cp012

0x7886,	// (0x0003f4e3) list_single_loc_request_popup_menu_pane_ParamLimits

0x7886,	// (0x0003f4e3) list_single_loc_request_popup_menu_pane

0x08fa,	// (0x00038557) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x08fa,	// (0x00038557) list_single_loc_request_popup_menu_pane_g1

0x0906,	// (0x00038563) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0906,	// (0x00038563) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x00046f65) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x00046f65) list_single_loc_request_popup_menu_pane_g

0x0912,	// (0x0003856f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x0912,	// (0x0003856f) list_single_loc_request_popup_menu_pane_t1

0x7898,	// (0x0003f4f5) bg_popup_window_pane_cp03_ParamLimits

0x7898,	// (0x0003f4f5) bg_popup_window_pane_cp03

0x78a6,	// (0x0003f503) heading_loc_req_pane_ParamLimits

0x78a6,	// (0x0003f503) heading_loc_req_pane

0x78b2,	// (0x0003f50f) popup_dyc_status_message_window_g1_ParamLimits

0x78b2,	// (0x0003f50f) popup_dyc_status_message_window_g1

0x78be,	// (0x0003f51b) popup_dyc_status_message_window_t1_ParamLimits

0x78be,	// (0x0003f51b) popup_dyc_status_message_window_t1

0x78d0,	// (0x0003f52d) popup_dyc_status_message_window_t2_ParamLimits

0x78d0,	// (0x0003f52d) popup_dyc_status_message_window_t2

0x78e2,	// (0x0003f53f) popup_dyc_status_message_window_t3_ParamLimits

0x78e2,	// (0x0003f53f) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x00046f6a) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x00046f6a) popup_dyc_status_message_window_t

0xefb6,	// (0x00046c13) bg_heading_pane_cp01

0x0934,	// (0x00038591) heading_loc_req_pane_g1

0x093c,	// (0x00038599) heading_loc_req_pane_g2

0x0944,	// (0x000385a1) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x00046f71) heading_loc_req_pane_g

0x094c,	// (0x000385a9) heading_loc_req_pane_t1

0x095b,	// (0x000385b8) bg_popup_sub_pane_cp01_ParamLimits

0x095b,	// (0x000385b8) bg_popup_sub_pane_cp01

0x0969,	// (0x000385c6) popup_cale_events_window_g1_ParamLimits

0x0969,	// (0x000385c6) popup_cale_events_window_g1

0x0989,	// (0x000385e6) popup_cale_events_window_g2_ParamLimits

0x0989,	// (0x000385e6) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x00046fa5) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x00046fa5) popup_cale_events_window_g

0x09a9,	// (0x00038606) popup_cale_events_window_t1_ParamLimits

0x09a9,	// (0x00038606) popup_cale_events_window_t1

0x09bb,	// (0x00038618) popup_cale_events_window_t2_ParamLimits

0x09bb,	// (0x00038618) popup_cale_events_window_t2

0x09f9,	// (0x00038656) popup_cale_events_window_t3_ParamLimits

0x09f9,	// (0x00038656) popup_cale_events_window_t3

0x0a33,	// (0x00038690) popup_cale_events_window_t4_ParamLimits

0x0a33,	// (0x00038690) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x00046faa) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x00046faa) popup_cale_events_window_t

0x790c,	// (0x0003f569) call_type_pane

0x0c8f,	// (0x000388ec) popup_call_status_window_g1

0x7918,	// (0x0003f575) popup_call_status_window_g2

0x7924,	// (0x0003f581) popup_call_status_window_g3

0x0002,

0xf356,	// (0x00046fb3) popup_call_status_window_g

0x0a69,	// (0x000386c6) call_type_pane_g1

0x0a72,	// (0x000386cf) call_type_pane_g2

0x0001,

0xf35d,	// (0x00046fba) call_type_pane_g

0xefb6,	// (0x00046c13) bg_popup_sub_pane_cp02

0x0a7b,	// (0x000386d8) listscroll_popup_wml_pane

0x0a83,	// (0x000386e0) list_wml_pane

0x0a8d,	// (0x000386ea) scroll_pane_cp013

0x0a98,	// (0x000386f5) list_single_graphic_popup_wml_pane_ParamLimits

0x0a98,	// (0x000386f5) list_single_graphic_popup_wml_pane

0x0270,	// (0x00037ecd) list_single_graphic_popup_wml_pane_g1

0x0aac,	// (0x00038709) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x00046fbf) list_single_graphic_popup_wml_pane_g

0x0ab4,	// (0x00038711) list_single_graphic_popup_wml_pane_t1

0x0ac2,	// (0x0003871f) aid_call_pane

0x014e,	// (0x00037dab) popup_clock_analogue_window_g1

0x014e,	// (0x00037dab) popup_clock_analogue_window_g2

0x7930,	// (0x0003f58d) popup_clock_analogue_window_g3

0x7930,	// (0x0003f58d) popup_clock_analogue_window_g4

0x0270,	// (0x00037ecd) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x00046fc4) popup_clock_analogue_window_g

0x7938,	// (0x0003f595) popup_clock_analogue_window_t1

0x7946,	// (0x0003f5a3) clock_digital_number_pane_ParamLimits

0x7946,	// (0x0003f5a3) clock_digital_number_pane

0x7952,	// (0x0003f5af) clock_digital_number_pane_cp02_ParamLimits

0x7952,	// (0x0003f5af) clock_digital_number_pane_cp02

0x795e,	// (0x0003f5bb) clock_digital_number_pane_cp03_ParamLimits

0x795e,	// (0x0003f5bb) clock_digital_number_pane_cp03

0x796a,	// (0x0003f5c7) clock_digital_number_pane_cp04_ParamLimits

0x796a,	// (0x0003f5c7) clock_digital_number_pane_cp04

0x797a,	// (0x0003f5d7) clock_digital_separator_pane_ParamLimits

0x797a,	// (0x0003f5d7) clock_digital_separator_pane

0x7986,	// (0x0003f5e3) popup_clock_digital_window_t1

0x0270,	// (0x00037ecd) clock_digital_number_pane_g1

0x0270,	// (0x00037ecd) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x00046f32) clock_digital_number_pane_g

0x0270,	// (0x00037ecd) clock_digital_separator_pane_g1

0x0270,	// (0x00037ecd) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x00046f32) clock_digital_separator_pane_g

0xefb6,	// (0x00046c13) bg_popup_window_pane_cp04

0x0ad2,	// (0x0003872f) heading_pane_cp03

0x0ada,	// (0x00038737) listscroll_popup_gms_pane

0x0ae2,	// (0x0003873f) grid_large_graphic_popup_pane

0x0aec,	// (0x00038749) listscroll_popup_gms_pane_g1

0x0af4,	// (0x00038751) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x00046fcf) listscroll_popup_gms_pane_g

0x0589,	// (0x000381e6) scroll_pane_cp014

0x79a3,	// (0x0003f600) cell_large_graphic_popup_pane_ParamLimits

0x79a3,	// (0x0003f600) cell_large_graphic_popup_pane

0x79bb,	// (0x0003f618) cell_large_graphic_popup_pane_g1_ParamLimits

0x79bb,	// (0x0003f618) cell_large_graphic_popup_pane_g1

0x0afc,	// (0x00038759) cell_large_graphic_popup_pane_g2_ParamLimits

0x0afc,	// (0x00038759) cell_large_graphic_popup_pane_g2

0x0b08,	// (0x00038765) cell_large_graphic_popup_pane_g3_ParamLimits

0x0b08,	// (0x00038765) cell_large_graphic_popup_pane_g3

0x0b15,	// (0x00038772) cell_large_graphic_popup_pane_g4_ParamLimits

0x0b15,	// (0x00038772) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x00046fd4) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x00046fd4) cell_large_graphic_popup_pane_g

0x0b25,	// (0x00038782) grid_highlight_pane_cp010

0x0270,	// (0x00037ecd) bg_popup_call_pane_g1

0x0b2f,	// (0x0003878c) list_single_graphic_popup_conf_pane_ParamLimits

0x0b2f,	// (0x0003878c) list_single_graphic_popup_conf_pane

0x0b42,	// (0x0003879f) list_highlight_pane_cp01

0x0b4b,	// (0x000387a8) list_single_graphic_popup_conf_pane_g1

0x0b53,	// (0x000387b0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x00046fdd) list_single_graphic_popup_conf_pane_g

0x0b5b,	// (0x000387b8) list_single_graphic_popup_conf_pane_t1

0x0b69,	// (0x000387c6) linegrid_cams_pane_g1

0x79c7,	// (0x0003f624) linegrid_cams_pane_g2

0x03c6,	// (0x00038023) linegrid_cams_pane_g3

0x0b72,	// (0x000387cf) linegrid_cams_pane_g4

0x79d0,	// (0x0003f62d) linegrid_cams_pane_g5

0x79d9,	// (0x0003f636) linegrid_cams_pane_g6

0x03cf,	// (0x0003802c) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x00046fe2) linegrid_cams_pane_g

0x0b7b,	// (0x000387d8) popup_clock_analogue_window

0x0b7b,	// (0x000387d8) popup_clock_digital_window

0xefb6,	// (0x00046c13) popup_phob_thumbnail_window

0x0270,	// (0x00037ecd) call_video_uplink_pane_g1

0x0b84,	// (0x000387e1) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x00046ff1) call_video_uplink_pane_g

0x0b8c,	// (0x000387e9) video_uplink_pane

0x0b94,	// (0x000387f1) mce_image_pane_g1

0x79e2,	// (0x0003f63f) mce_image_pane_g2

0x79ec,	// (0x0003f649) mce_image_pane_g3

0x79f4,	// (0x0003f651) mce_image_pane_g4

0x79fc,	// (0x0003f659) mce_image_pane_g5

0x0004,

0xf399,	// (0x00046ff6) mce_image_pane_g

0x0b9e,	// (0x000387fb) control_top_pane_stacon_cp01_ParamLimits

0x0b9e,	// (0x000387fb) control_top_pane_stacon_cp01

0x0bb2,	// (0x0003880f) uni_indicator_pane_stacon_cp01_ParamLimits

0x0bb2,	// (0x0003880f) uni_indicator_pane_stacon_cp01

0x0bc3,	// (0x00038820) bg_popup_sub_pane_cp03

0x0bcd,	// (0x0003882a) chi_dic_find_pane

0x7a04,	// (0x0003f661) listscroll_chi_dic_pane

0x0bd5,	// (0x00038832) main_pane_chidic_g1

0x0bdd,	// (0x0003883a) chi_dic_find_pane_t1

0x0beb,	// (0x00038848) find_chidic_pane

0x0bf4,	// (0x00038851) chi_dic_list_pane_ParamLimits

0x0bf4,	// (0x00038851) chi_dic_list_pane

0x0c05,	// (0x00038862) scroll_pane_cp020

0x0c0d,	// (0x0003886a) find_chidic_pane_t1

0xefb6,	// (0x00046c13) input_focus_pane_cp06

0x7a18,	// (0x0003f675) list_chi_dic_pane_ParamLimits

0x7a18,	// (0x0003f675) list_chi_dic_pane

0x7a32,	// (0x0003f68f) list_chi_dic_pane_t1_ParamLimits

0x7a32,	// (0x0003f68f) list_chi_dic_pane_t1

0xefb6,	// (0x00046c13) list_highlight_pane_cp020

0x0c1c,	// (0x00038879) bg_cale_heading_pane_g1

0x7a45,	// (0x0003f6a2) bg_cale_heading_pane_g2

0x7a4d,	// (0x0003f6aa) bg_cale_heading_pane_g3

0x7a55,	// (0x0003f6b2) bg_cale_heading_pane_g4

0x7a5f,	// (0x0003f6bc) bg_cale_heading_pane_g5

0x7a69,	// (0x0003f6c6) bg_cale_heading_pane_g6

0x7a71,	// (0x0003f6ce) bg_cale_heading_pane_g7

0x7a79,	// (0x0003f6d6) bg_cale_heading_pane_g8

0x7a83,	// (0x0003f6e0) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x00047001) bg_cale_heading_pane_g

0x0c1c,	// (0x00038879) bg_cale_side_pane_g1

0x7a8d,	// (0x0003f6ea) bg_cale_side_pane_g2

0x7a97,	// (0x0003f6f4) bg_cale_side_pane_g3

0x7aa1,	// (0x0003f6fe) bg_cale_side_pane_g4

0x7aab,	// (0x0003f708) bg_cale_side_pane_g5

0x7ab5,	// (0x0003f712) bg_cale_side_pane_g6

0x7abf,	// (0x0003f71c) bg_cale_side_pane_g7

0x7ac9,	// (0x0003f726) bg_cale_side_pane_g8

0x7ad1,	// (0x0003f72e) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x00047014) bg_cale_side_pane_g

0x7ad9,	// (0x0003f736) popup_call_status_window_ParamLimits

0x7ad9,	// (0x0003f736) popup_call_status_window

0x0c24,	// (0x00038881) stacon_top_pane

0x0c2c,	// (0x00038889) status_pane_ParamLimits

0x0c2c,	// (0x00038889) status_pane

0x0c41,	// (0x0003889e) status_small_pane

0x0c49,	// (0x000388a6) control_pane

0xefb6,	// (0x00046c13) stacon_bottom_pane

0x0c51,	// (0x000388ae) list_single_mce_smart_pane_t1_ParamLimits

0x0c51,	// (0x000388ae) list_single_mce_smart_pane_t1

0x0c64,	// (0x000388c1) list_single_mce_smart_pane_t2_ParamLimits

0x0c64,	// (0x000388c1) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x00047027) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x00047027) list_single_mce_smart_pane_t

0x7ae5,	// (0x0003f742) compass_pane

0x7af1,	// (0x0003f74e) main_location2_pane_t1

0x7b05,	// (0x0003f762) main_location2_pane_t2

0x7b19,	// (0x0003f776) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0004702c) main_location2_pane_t

0x0c83,	// (0x000388e0) compass_pane_g1_ParamLimits

0x0c83,	// (0x000388e0) compass_pane_g1

0x7b63,	// (0x0003f7c0) compass_pane_t1

0x7b72,	// (0x0003f7cf) compass_pane_t2

0x0005,

0xf3d8,	// (0x00047035) compass_pane_t

0x7bbd,	// (0x0003f81a) text_secondary_cp61

0x0d1b,	// (0x00038978) navi_pane_cams_g5

0x0d97,	// (0x000389f4) navi_pane_im_t1

0x0da5,	// (0x00038a02) navi_pane_mp_g1_ParamLimits

0x0da5,	// (0x00038a02) navi_pane_mp_g1

0x0db9,	// (0x00038a16) navi_pane_mp_g2_ParamLimits

0x0db9,	// (0x00038a16) navi_pane_mp_g2

0x0dc5,	// (0x00038a22) navi_pane_mp_g3_ParamLimits

0x0dc5,	// (0x00038a22) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x00047049) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x00047049) navi_pane_mp_g

0x0dd1,	// (0x00038a2e) navi_pane_mp_t1

0x0ddf,	// (0x00038a3c) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x00047050) navi_pane_mp_t

0x0e4a,	// (0x00038aa7) navi_pane_vt_g1

0x0dd1,	// (0x00038a2e) navi_pane_vt_t1

0x0e52,	// (0x00038aaf) navi_slider_pane

0x03e0,	// (0x0003803d) zooming_pane

0x0e62,	// (0x00038abf) navi_slider_pane_g1

0x7bf8,	// (0x0003f855) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x00047057) navi_slider_pane_g

0x0e86,	// (0x00038ae3) aid_levels_zoom

0x0e8e,	// (0x00038aeb) zooming_pane_g1

0x0e96,	// (0x00038af3) zooming_pane_g2

0x0e96,	// (0x00038af3) zooming_pane_g3

0x0002,

0xf409,	// (0x00047066) zooming_pane_g

0x0e9e,	// (0x00038afb) level_10_zoom

0x0ea7,	// (0x00038b04) level_11_zoom

0x0eb0,	// (0x00038b0d) level_1_zoom

0x0eb9,	// (0x00038b16) level_2_zoom

0x0ec2,	// (0x00038b1f) level_3_zoom

0x0ecb,	// (0x00038b28) level_4_zoom

0x0ed4,	// (0x00038b31) level_5_zoom

0x0edd,	// (0x00038b3a) level_6_zoom

0x0ee6,	// (0x00038b43) level_7_zoom

0x0eef,	// (0x00038b4c) level_8_zoom

0x0ef8,	// (0x00038b55) level_9_zoom

0x0f09,	// (0x00038b66) popup_phob_thumbnail_window_g1

0x0f11,	// (0x00038b6e) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0004706d) popup_phob_thumbnail_window_g

0x226e,	// (0x00039ecb) level_1_location

0x2276,	// (0x00039ed3) level_2_location

0x227e,	// (0x00039edb) level_3_location

0x2286,	// (0x00039ee3) level_4_location

0x03e0,	// (0x0003803d) level_5_location

0x7c0a,	// (0x0003f867) mce_icon_pane_g1

0x7c12,	// (0x0003f86f) mce_icon_pane_g2

0x0001,

0xf415,	// (0x00047072) mce_icon_pane_g

0x7c1a,	// (0x0003f877) main_mup_pane_g1_ParamLimits

0x7c1a,	// (0x0003f877) main_mup_pane_g1

0x7c32,	// (0x0003f88f) main_mup_pane_g2_ParamLimits

0x7c32,	// (0x0003f88f) main_mup_pane_g2

0x7c4e,	// (0x0003f8ab) main_mup_pane_g3_ParamLimits

0x7c4e,	// (0x0003f8ab) main_mup_pane_g3

0x7c6a,	// (0x0003f8c7) main_mup_pane_g4_ParamLimits

0x7c6a,	// (0x0003f8c7) main_mup_pane_g4

0x7c86,	// (0x0003f8e3) main_mup_pane_g5_ParamLimits

0x7c86,	// (0x0003f8e3) main_mup_pane_g5

0x7ca7,	// (0x0003f904) main_mup_pane_g6_ParamLimits

0x7ca7,	// (0x0003f904) main_mup_pane_g6

0x7cc3,	// (0x0003f920) main_mup_pane_g7_ParamLimits

0x7cc3,	// (0x0003f920) main_mup_pane_g7

0x7cdf,	// (0x0003f93c) main_mup_pane_g8_ParamLimits

0x7cdf,	// (0x0003f93c) main_mup_pane_g8

0x7cff,	// (0x0003f95c) main_mup_pane_g9_ParamLimits

0x7cff,	// (0x0003f95c) main_mup_pane_g9

0x7d1e,	// (0x0003f97b) main_mup_pane_g10_ParamLimits

0x7d1e,	// (0x0003f97b) main_mup_pane_g10

0x7d3d,	// (0x0003f99a) main_mup_pane_g11_ParamLimits

0x7d3d,	// (0x0003f99a) main_mup_pane_g11

0x7d55,	// (0x0003f9b2) main_mup_pane_g12_ParamLimits

0x7d55,	// (0x0003f9b2) main_mup_pane_g12

0x7d63,	// (0x0003f9c0) main_mup_pane_g13_ParamLimits

0x7d63,	// (0x0003f9c0) main_mup_pane_g13

0x000c,

0xf41a,	// (0x00047077) main_mup_pane_g_ParamLimits

0xf41a,	// (0x00047077) main_mup_pane_g

0x7d79,	// (0x0003f9d6) main_mup_pane_t1_ParamLimits

0x7d79,	// (0x0003f9d6) main_mup_pane_t1

0x7d96,	// (0x0003f9f3) main_mup_pane_t2_ParamLimits

0x7d96,	// (0x0003f9f3) main_mup_pane_t2

0x7db0,	// (0x0003fa0d) main_mup_pane_t3_ParamLimits

0x7db0,	// (0x0003fa0d) main_mup_pane_t3

0x7dca,	// (0x0003fa27) main_mup_pane_t4_ParamLimits

0x7dca,	// (0x0003fa27) main_mup_pane_t4

0x7ddc,	// (0x0003fa39) main_mup_pane_t5_ParamLimits

0x7ddc,	// (0x0003fa39) main_mup_pane_t5

0x7dee,	// (0x0003fa4b) main_mup_pane_t6_ParamLimits

0x7dee,	// (0x0003fa4b) main_mup_pane_t6

0x0005,

0xf435,	// (0x00047092) main_mup_pane_t_ParamLimits

0xf435,	// (0x00047092) main_mup_pane_t

0x7e04,	// (0x0003fa61) mup_progress_pane_ParamLimits

0x7e04,	// (0x0003fa61) mup_progress_pane

0x7e10,	// (0x0003fa6d) mup_visualizer_pane_ParamLimits

0x7e10,	// (0x0003fa6d) mup_visualizer_pane

0x7e4a,	// (0x0003faa7) mup_volume_pane_ParamLimits

0x7e4a,	// (0x0003faa7) mup_volume_pane

0x0c8f,	// (0x000388ec) mup_visualizer_pane_g1_ParamLimits

0x0c8f,	// (0x000388ec) mup_visualizer_pane_g1

0x0c8f,	// (0x000388ec) mup_visualizer_pane_g2_ParamLimits

0x0c8f,	// (0x000388ec) mup_visualizer_pane_g2

0x0c83,	// (0x000388e0) mup_visualizer_pane_g3_ParamLimits

0x0c83,	// (0x000388e0) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0004709f) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0004709f) mup_visualizer_pane_g

0x0270,	// (0x00037ecd) mup_volume_pane_g1

0x0f21,	// (0x00038b7e) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000470a6) mup_volume_pane_g

0x0270,	// (0x00037ecd) mup_progress_pane_g1

0x0f2a,	// (0x00038b87) mup_progress_pane_g2

0x0f33,	// (0x00038b90) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000470ab) mup_progress_pane_g

0xefb6,	// (0x00046c13) bg_popup_window_pane_cp05

0x0f3c,	// (0x00038b99) heading_pane_cp02_ParamLimits

0x0f3c,	// (0x00038b99) heading_pane_cp02

0x0f56,	// (0x00038bb3) list_popup_blid_pane

0x0f5e,	// (0x00038bbb) list_blid_sat_info_pane_ParamLimits

0x0f5e,	// (0x00038bbb) list_blid_sat_info_pane

0x0f71,	// (0x00038bce) list_blid_sat_info_pane_g1

0x0f79,	// (0x00038bd6) list_blid_sat_info_pane_t1

0x7f57,	// (0x0003fbb4) mup_equalizer_pane_ParamLimits

0x7f57,	// (0x0003fbb4) mup_equalizer_pane

0x7f78,	// (0x0003fbd5) mup_equalizer_pane_cp1_ParamLimits

0x7f78,	// (0x0003fbd5) mup_equalizer_pane_cp1

0x7f99,	// (0x0003fbf6) mup_equalizer_pane_cp2_ParamLimits

0x7f99,	// (0x0003fbf6) mup_equalizer_pane_cp2

0x7fba,	// (0x0003fc17) mup_equalizer_pane_cp3_ParamLimits

0x7fba,	// (0x0003fc17) mup_equalizer_pane_cp3

0x7fdb,	// (0x0003fc38) mup_equalizer_pane_cp4_ParamLimits

0x7fdb,	// (0x0003fc38) mup_equalizer_pane_cp4

0x7ffc,	// (0x0003fc59) mup_equalizer_pane_cp5

0x8012,	// (0x0003fc6f) mup_equalizer_pane_cp6

0x802a,	// (0x0003fc87) mup_equalizer_pane_cp7

0x218c,	// (0x00039de9) bg_popup_call_poc_act_pane_g9

0x2194,	// (0x00039df1) bg_popup_call_poc_act_pane_g10

0x219c,	// (0x00039df9) bg_popup_call_poc_act_pane_g11

0x000a,

0x0156,	// (0x00037db3) mup_scale_pane

0x0270,	// (0x00037ecd) mup_scale_pane_g1

0x0f87,	// (0x00038be4) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000470c7) mup_scale_pane_g

0x0fab,	// (0x00038c08) msg_data_pane

0x0fb3,	// (0x00038c10) scroll_pane_cp017

0x44f0,	// (0x0003c14d) bg_list_pane_cp04_ParamLimits

0x44f0,	// (0x0003c14d) bg_list_pane_cp04

0x0fc3,	// (0x00038c20) msg_data_pane_g1

0x8054,	// (0x0003fcb1) msg_data_pane_g2

0x805e,	// (0x0003fcbb) msg_data_pane_g3

0x8066,	// (0x0003fcc3) msg_data_pane_g4

0x806e,	// (0x0003fccb) msg_data_pane_g5

0x8076,	// (0x0003fcd3) msg_data_pane_g6

0x807e,	// (0x0003fcdb) msg_data_pane_g7

0x0006,

0xf479,	// (0x000470d6) msg_data_pane_g

0x4514,	// (0x0003c171) msg_text_pane_ParamLimits

0x4514,	// (0x0003c171) msg_text_pane

0x8086,	// (0x0003fce3) qrid_highlight_pane_cp011_ParamLimits

0x8086,	// (0x0003fce3) qrid_highlight_pane_cp011

0xefb6,	// (0x00046c13) msg_body_pane

0xefb6,	// (0x00046c13) msg_header_pane

0x0fd4,	// (0x00038c31) input_focus_pane_cp07

0x4571,	// (0x0003c1ce) msg_header_pane_t1_ParamLimits

0x4571,	// (0x0003c1ce) msg_header_pane_t1

0x4583,	// (0x0003c1e0) msg_header_pane_t2_ParamLimits

0x4583,	// (0x0003c1e0) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000470ea) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000470ea) msg_header_pane_t

0x100d,	// (0x00038c6a) msg_body_pane_g1

0x4595,	// (0x0003c1f2) msg_body_pane_t1_ParamLimits

0x4595,	// (0x0003c1f2) msg_body_pane_t1

0x45c6,	// (0x0003c223) msg_body_pane_t2_ParamLimits

0x45c6,	// (0x0003c223) msg_body_pane_t2

0x45d8,	// (0x0003c235) msg_body_pane_t3_ParamLimits

0x45d8,	// (0x0003c235) msg_body_pane_t3

0x0002,

0xf492,	// (0x000470ef) msg_body_pane_t_ParamLimits

0xf492,	// (0x000470ef) msg_body_pane_t

0x80f2,	// (0x0003fd4f) main_viewer_pane_g1_ParamLimits

0x80f2,	// (0x0003fd4f) main_viewer_pane_g1

0x80fe,	// (0x0003fd5b) main_viewer_pane_g2_ParamLimits

0x80fe,	// (0x0003fd5b) main_viewer_pane_g2

0x810a,	// (0x0003fd67) main_viewer_pane_g3_ParamLimits

0x810a,	// (0x0003fd67) main_viewer_pane_g3

0x811b,	// (0x0003fd78) main_viewer_pane_g4_ParamLimits

0x811b,	// (0x0003fd78) main_viewer_pane_g4

0x812c,	// (0x0003fd89) main_viewer_pane_g5_ParamLimits

0x812c,	// (0x0003fd89) main_viewer_pane_g5

0x812c,	// (0x0003fd89) main_viewer_pane_g7_ParamLimits

0x812c,	// (0x0003fd89) main_viewer_pane_g7

0x813e,	// (0x0003fd9b) main_viewer_pane_g8_ParamLimits

0x813e,	// (0x0003fd9b) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000470ff) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000470ff) main_viewer_pane_g

0x106a,	// (0x00038cc7) viewer_content_pane_ParamLimits

0x106a,	// (0x00038cc7) viewer_content_pane

0x8176,	// (0x0003fdd3) main_postcard_pane_g1_ParamLimits

0x8176,	// (0x0003fdd3) main_postcard_pane_g1

0x8184,	// (0x0003fde1) main_postcard_pane_g2_ParamLimits

0x8184,	// (0x0003fde1) main_postcard_pane_g2

0x8192,	// (0x0003fdef) main_postcard_pane_g3_ParamLimits

0x8192,	// (0x0003fdef) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x00047110) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x00047110) main_postcard_pane_g

0x81a2,	// (0x0003fdff) main_postcard_pane_g4

0x235b,	// (0x00039fb8) smil_status_volume_pane_g2

0x81ce,	// (0x0003fe2b) postcard_pane_ParamLimits

0x81ce,	// (0x0003fe2b) postcard_pane

0x0c8f,	// (0x000388ec) postcard_pane_g1_ParamLimits

0x0c8f,	// (0x000388ec) postcard_pane_g1

0x8200,	// (0x0003fe5d) postcard_pane_g2_ParamLimits

0x8200,	// (0x0003fe5d) postcard_pane_g2

0x820c,	// (0x0003fe69) postcard_pane_g3_ParamLimits

0x820c,	// (0x0003fe69) postcard_pane_g3

0x1086,	// (0x00038ce3) postcard_pane_g4_ParamLimits

0x1086,	// (0x00038ce3) postcard_pane_g4

0x8218,	// (0x0003fe75) postcard_pane_g5_ParamLimits

0x8218,	// (0x0003fe75) postcard_pane_g5

0x8224,	// (0x0003fe81) postcard_pane_g6_ParamLimits

0x8224,	// (0x0003fe81) postcard_pane_g6

0x1078,	// (0x00038cd5) postcard_pane_g7_ParamLimits

0x1078,	// (0x00038cd5) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0004711d) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0004711d) postcard_pane_g

0x8230,	// (0x0003fe8d) main_mp2_pane_g1_ParamLimits

0x8230,	// (0x0003fe8d) main_mp2_pane_g1

0x823c,	// (0x0003fe99) main_mp2_pane_g2_ParamLimits

0x823c,	// (0x0003fe99) main_mp2_pane_g2

0x8248,	// (0x0003fea5) main_mp2_pane_g3_ParamLimits

0x8248,	// (0x0003fea5) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0004712c) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0004712c) main_mp2_pane_g

0x8254,	// (0x0003feb1) main_mp2_pane_t1_ParamLimits

0x8254,	// (0x0003feb1) main_mp2_pane_t1

0x826b,	// (0x0003fec8) main_mp2_pane_t2_ParamLimits

0x826b,	// (0x0003fec8) main_mp2_pane_t2

0x827f,	// (0x0003fedc) main_mp2_pane_t3_ParamLimits

0x827f,	// (0x0003fedc) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x00047133) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x00047133) main_mp2_pane_t

0x1094,	// (0x00038cf1) pec_content_pane_ParamLimits

0x1094,	// (0x00038cf1) pec_content_pane

0x0589,	// (0x000381e6) scroll_pane_cp015

0x10a6,	// (0x00038d03) pec_attribute_pane_ParamLimits

0x10a6,	// (0x00038d03) pec_attribute_pane

0x8291,	// (0x0003feee) pec_content_pane_g1_ParamLimits

0x8291,	// (0x0003feee) pec_content_pane_g1

0x10b6,	// (0x00038d13) pec_content_pane_t1_ParamLimits

0x10b6,	// (0x00038d13) pec_content_pane_t1

0x10c8,	// (0x00038d25) pec_content_pane_t2_ParamLimits

0x10c8,	// (0x00038d25) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0004713a) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0004713a) pec_content_pane_t

0x829d,	// (0x0003fefa) list_single_graphic_pane_cp01_ParamLimits

0x829d,	// (0x0003fefa) list_single_graphic_pane_cp01

0x0156,	// (0x00037db3) bg_popup_sub_pane_cp04

0x10da,	// (0x00038d37) popup_mup_playback_window_g1

0x10e6,	// (0x00038d43) popup_mup_playback_window_t1

0x10fb,	// (0x00038d58) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0004713f) popup_mup_playback_window_t

0x1132,	// (0x00038d8f) main_image_pane_g1_ParamLimits

0x1132,	// (0x00038d8f) main_image_pane_g1

0x1175,	// (0x00038dd2) scroll_pane_cp018_ParamLimits

0x1175,	// (0x00038dd2) scroll_pane_cp018

0x118d,	// (0x00038dea) scroll_pane_cp016_ParamLimits

0x118d,	// (0x00038dea) scroll_pane_cp016

0x8336,	// (0x0003ff93) smil2_image_pane_ParamLimits

0x8336,	// (0x0003ff93) smil2_image_pane

0x8366,	// (0x0003ffc3) smil2_root_pane_ParamLimits

0x8366,	// (0x0003ffc3) smil2_root_pane

0x8392,	// (0x0003ffef) smil2_text_pane_ParamLimits

0x8392,	// (0x0003ffef) smil2_text_pane

0xefb6,	// (0x00046c13) bg_list_pane_cp06

0x11c9,	// (0x00038e26) grid_radio_pane

0xefb6,	// (0x00046c13) bg_popup_window_pane_cp06

0x11d1,	// (0x00038e2e) main_fmradio_pane_t1

0x0ad2,	// (0x0003872f) heading_pane_cp04

0x11df,	// (0x00038e3c) main_fmradio_pane_t2

0x21a4,	// (0x00039e01) popup_cale_lunar_info_window_g1

0x11ed,	// (0x00038e4a) main_fmradio_pane_t3

0x21ac,	// (0x00039e09) popup_cale_lunar_info_window_g2

0x11fb,	// (0x00038e58) main_fmradio_pane_t4

0x0001,

0x1209,	// (0x00038e66) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0004721a) popup_cale_lunar_info_window_g

0xf4f7,	// (0x00047154) main_fmradio_pane_t

0x1217,	// (0x00038e74) wait_bar_pane_cp03

0x121f,	// (0x00038e7c) cell_fmradio_pane_ParamLimits

0x121f,	// (0x00038e7c) cell_fmradio_pane

0x1078,	// (0x00038cd5) cell_fmradio_pane_g1_ParamLimits

0x1078,	// (0x00038cd5) cell_fmradio_pane_g1

0xefb6,	// (0x00046c13) grid_highlight_pane_cp011

0x1232,	// (0x00038e8f) poc_content_pane_ParamLimits

0x1232,	// (0x00038e8f) poc_content_pane

0x1244,	// (0x00038ea1) scroll_pane_cp019

0x83d2,	// (0x0004002f) popup_call_poc_act_window_ParamLimits

0x83d2,	// (0x0004002f) popup_call_poc_act_window

0x83df,	// (0x0004003c) popup_call_poc_inact_window_ParamLimits

0x83df,	// (0x0004003c) popup_call_poc_inact_window

0xf594,	// (0x000471f1) bg_popup_call_poc_act_pane_g

0x211c,	// (0x00039d79) bg_popup_call_poc_inact_pane_g1

0x2124,	// (0x00039d81) bg_popup_call_poc_inact_pane_g2

0x124c,	// (0x00038ea9) popup_call_poc_act_window_g2

0x212c,	// (0x00039d89) bg_popup_call_poc_inact_pane_g3

0x2134,	// (0x00039d91) bg_popup_call_poc_inact_pane_g4

0x213c,	// (0x00039d99) bg_popup_call_poc_inact_pane_g5

0x1254,	// (0x00038eb1) popup_call_poc_act_window_t1_ParamLimits

0x1254,	// (0x00038eb1) popup_call_poc_act_window_t1

0x127c,	// (0x00038ed9) popup_call_poc_act_window_t2_ParamLimits

0x127c,	// (0x00038ed9) popup_call_poc_act_window_t2

0x12a4,	// (0x00038f01) popup_call_poc_act_window_t3_ParamLimits

0x12a4,	// (0x00038f01) popup_call_poc_act_window_t3

0x12cc,	// (0x00038f29) popup_call_poc_act_window_t4_ParamLimits

0x12cc,	// (0x00038f29) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0004715f) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0004715f) popup_call_poc_act_window_t

0x2144,	// (0x00039da1) bg_popup_call_poc_inact_pane_g6

0x214c,	// (0x00039da9) bg_popup_call_poc_inact_pane_g7

0x2154,	// (0x00039db1) bg_popup_call_poc_inact_pane_g8

0x12de,	// (0x00038f3b) popup_call_poc_inact_window_g2

0x215c,	// (0x00039db9) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000471de) bg_popup_call_poc_inact_pane_g

0x12e6,	// (0x00038f43) popup_call_poc_inact_window_t1_ParamLimits

0x12e6,	// (0x00038f43) popup_call_poc_inact_window_t1

0x12fb,	// (0x00038f58) popup_call_poc_inact_window_t2_ParamLimits

0x12fb,	// (0x00038f58) popup_call_poc_inact_window_t2

0x1310,	// (0x00038f6d) popup_call_poc_inact_window_t3_ParamLimits

0x1310,	// (0x00038f6d) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x00047168) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x00047168) popup_call_poc_inact_window_t

0x22e1,	// (0x00039f3e) context_pane_ParamLimits

0x8a13,	// (0x00040670) signal_pane_ParamLimits

0x03e0,	// (0x0003803d) main_call2_pane

0x8986,	// (0x000405e3) popup_phob_thumbnail2_window_ParamLimits

0x8986,	// (0x000405e3) popup_phob_thumbnail2_window

0x80a0,	// (0x0003fcfd) aid_hotspot_pointer_arrow_pane

0x80a8,	// (0x0003fd05) aid_hotspot_pointer_hand_pane

0x8701,	// (0x0004035e) phob_pre_status_pane_g5

0x641a,	// (0x0003e077) cams_zoom_pane_ParamLimits

0x6426,	// (0x0003e083) image_vga_pane_ParamLimits

0x6435,	// (0x0003e092) main_camera_pane_g1_ParamLimits

0x6443,	// (0x0003e0a0) main_camera_pane_g2_ParamLimits

0x644f,	// (0x0003e0ac) main_camera_pane_g3_ParamLimits

0x645b,	// (0x0003e0b8) main_camera_pane_g4_ParamLimits

0x6467,	// (0x0003e0c4) main_camera_pane_g5_ParamLimits

0x6473,	// (0x0003e0d0) main_camera_pane_g6_ParamLimits

0x647f,	// (0x0003e0dc) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x00046e67) main_camera_pane_g_ParamLimits

0x648b,	// (0x0003e0e8) main_camera_pane_t1_ParamLimits

0x649d,	// (0x0003e0fa) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x00046e78) main_camera_pane_t_ParamLimits

0x0156,	// (0x00037db3) bg_popup_preview_window_pane_cp01_ParamLimits

0x0156,	// (0x00037db3) bg_popup_preview_window_pane_cp01

0x1325,	// (0x00038f82) popup_phob_thumbnail2_window_g1_ParamLimits

0x1325,	// (0x00038f82) popup_phob_thumbnail2_window_g1

0xefb6,	// (0x00046c13) call2_cli_visual_pane

0x83fb,	// (0x00040058) popup_call2_audio_conf_window_ParamLimits

0x83fb,	// (0x00040058) popup_call2_audio_conf_window

0x8410,	// (0x0004006d) popup_call2_audio_first_window_ParamLimits

0x8410,	// (0x0004006d) popup_call2_audio_first_window

0x84ae,	// (0x0004010b) popup_call2_audio_in_window_ParamLimits

0x84ae,	// (0x0004010b) popup_call2_audio_in_window

0x84f0,	// (0x0004014d) popup_call2_audio_out_window_ParamLimits

0x84f0,	// (0x0004014d) popup_call2_audio_out_window

0x8552,	// (0x000401af) popup_call2_audio_second_window_ParamLimits

0x8552,	// (0x000401af) popup_call2_audio_second_window

0x85b0,	// (0x0004020d) popup_call2_audio_wait_window_ParamLimits

0x85b0,	// (0x0004020d) popup_call2_audio_wait_window

0xefb6,	// (0x00046c13) bg_popup_call2_act_pane_cp03

0x0138,	// (0x00037d95) list_conf_pane_cp

0x1331,	// (0x00038f8e) popup_call2_audio_conf_window_t1

0x0b2f,	// (0x0003878c) list_single_graphic_popup_conf2_pane_ParamLimits

0x0b2f,	// (0x0003878c) list_single_graphic_popup_conf2_pane

0x0b42,	// (0x0003879f) list_highlight_pane_cp04

0x133f,	// (0x00038f9c) list_single_graphic_popup_conf2_pane_g1

0x0b53,	// (0x000387b0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0004716f) list_single_graphic_popup_conf2_pane_g

0x1349,	// (0x00038fa6) list_single_graphic_popup_conf2_pane_t1

0x1357,	// (0x00038fb4) bg_popup_call2_act_pane_cp01_ParamLimits

0x1357,	// (0x00038fb4) bg_popup_call2_act_pane_cp01

0x13e1,	// (0x0003903e) call_type_pane_cp05_ParamLimits

0x13e1,	// (0x0003903e) call_type_pane_cp05

0x1435,	// (0x00039092) popup_call2_audio_second_window_g1_ParamLimits

0x1435,	// (0x00039092) popup_call2_audio_second_window_g1

0x1489,	// (0x000390e6) popup_call2_audio_second_window_g2_ParamLimits

0x1489,	// (0x000390e6) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x00047174) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x00047174) popup_call2_audio_second_window_g

0x14ee,	// (0x0003914b) popup_call2_audio_second_window_t1_ParamLimits

0x14ee,	// (0x0003914b) popup_call2_audio_second_window_t1

0x15a9,	// (0x00039206) popup_call2_audio_second_window_t2_ParamLimits

0x15a9,	// (0x00039206) popup_call2_audio_second_window_t2

0x15fc,	// (0x00039259) popup_call2_audio_second_window_t3_ParamLimits

0x15fc,	// (0x00039259) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0004717b) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0004717b) popup_call2_audio_second_window_t

0xefb6,	// (0x00046c13) bg_popup_call2_in_pane_cp02

0xefc0,	// (0x00046c1d) call_type_pane_cp04

0xefc8,	// (0x00046c25) popup_call2_audio_wait_window_g1

0xefd0,	// (0x00046c2d) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x00046d56) popup_call2_audio_wait_window_g

0xefd8,	// (0x00046c35) popup_call2_audio_wait_window_t3

0x16ef,	// (0x0003934c) bg_popup_call2_act_pane_ParamLimits

0x16ef,	// (0x0003934c) bg_popup_call2_act_pane

0x17af,	// (0x0003940c) call_type_pane_cp03_ParamLimits

0x17af,	// (0x0003940c) call_type_pane_cp03

0x1813,	// (0x00039470) popup_call2_audio_first_window_g1_ParamLimits

0x1813,	// (0x00039470) popup_call2_audio_first_window_g1

0x1883,	// (0x000394e0) popup_call2_audio_first_window_g2_ParamLimits

0x1883,	// (0x000394e0) popup_call2_audio_first_window_g2

0x0c8f,	// (0x000388ec) popup_call2_audio_first_window_g3_ParamLimits

0x0c8f,	// (0x000388ec) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x00047184) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x00047184) popup_call2_audio_first_window_g

0x1961,	// (0x000395be) popup_call2_audio_first_window_t1_ParamLimits

0x1961,	// (0x000395be) popup_call2_audio_first_window_t1

0x1a64,	// (0x000396c1) popup_call2_audio_first_window_t4_ParamLimits

0x1a64,	// (0x000396c1) popup_call2_audio_first_window_t4

0x1b47,	// (0x000397a4) popup_call2_audio_first_window_t5_ParamLimits

0x1b47,	// (0x000397a4) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0004718f) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0004718f) popup_call2_audio_first_window_t

0x014e,	// (0x00037dab) bg_popup_call2_act_pane_g1

0x21b4,	// (0x00039e11) popup_cale_lunar_info_window_t1

0x21c2,	// (0x00039e1f) popup_cale_lunar_info_window_t2

0x21d0,	// (0x00039e2d) popup_cale_lunar_info_window_t3

0xefb6,	// (0x00046c13) bg_popup_call2_bubble_pane

0x1c48,	// (0x000398a5) bg_popup_call2_in_pane_cp01_ParamLimits

0x1c48,	// (0x000398a5) bg_popup_call2_in_pane_cp01

0xe83c,	// (0x00046499) call_type_pane_cp02

0x1c90,	// (0x000398ed) popup_call2_audio_out_window_g1_ParamLimits

0x1c90,	// (0x000398ed) popup_call2_audio_out_window_g1

0x1cbc,	// (0x00039919) popup_call2_audio_out_window_g2_ParamLimits

0x1cbc,	// (0x00039919) popup_call2_audio_out_window_g2

0x1ce4,	// (0x00039941) popup_call2_audio_out_window_g3_ParamLimits

0x1ce4,	// (0x00039941) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x00047198) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x00047198) popup_call2_audio_out_window_g

0x1d1f,	// (0x0003997c) popup_call2_audio_out_window_t1_ParamLimits

0x1d1f,	// (0x0003997c) popup_call2_audio_out_window_t1

0x1d7e,	// (0x000399db) popup_call2_audio_out_window_t2_ParamLimits

0x1d7e,	// (0x000399db) popup_call2_audio_out_window_t2

0x1dd2,	// (0x00039a2f) popup_call2_audio_out_window_t3_ParamLimits

0x1dd2,	// (0x00039a2f) popup_call2_audio_out_window_t3

0x1de8,	// (0x00039a45) popup_call2_audio_out_window_t4_ParamLimits

0x1de8,	// (0x00039a45) popup_call2_audio_out_window_t4

0x1dfe,	// (0x00039a5b) popup_call2_audio_out_window_t5_ParamLimits

0x1dfe,	// (0x00039a5b) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000471a1) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000471a1) popup_call2_audio_out_window_t

0x1e62,	// (0x00039abf) bg_popup_call2_in_pane_ParamLimits

0x1e62,	// (0x00039abf) bg_popup_call2_in_pane

0x1ebe,	// (0x00039b1b) popup_call2_audio_in_window_g1_ParamLimits

0x1ebe,	// (0x00039b1b) popup_call2_audio_in_window_g1

0x1ef6,	// (0x00039b53) popup_call2_audio_in_window_g2_ParamLimits

0x1ef6,	// (0x00039b53) popup_call2_audio_in_window_g2

0x1f2e,	// (0x00039b8b) popup_call2_audio_in_window_g3_ParamLimits

0x1f2e,	// (0x00039b8b) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000471ae) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000471ae) popup_call2_audio_in_window_g

0x1f86,	// (0x00039be3) popup_call2_audio_in_window_t1_ParamLimits

0x1f86,	// (0x00039be3) popup_call2_audio_in_window_t1

0x2006,	// (0x00039c63) popup_call2_audio_in_window_t2_ParamLimits

0x2006,	// (0x00039c63) popup_call2_audio_in_window_t2

0x2086,	// (0x00039ce3) popup_call2_audio_in_window_t3_ParamLimits

0x2086,	// (0x00039ce3) popup_call2_audio_in_window_t3

0x20a0,	// (0x00039cfd) popup_call2_audio_in_window_t4_ParamLimits

0x20a0,	// (0x00039cfd) popup_call2_audio_in_window_t4

0x20b2,	// (0x00039d0f) popup_call2_audio_in_window_t5_ParamLimits

0x20b2,	// (0x00039d0f) popup_call2_audio_in_window_t5

0x20c7,	// (0x00039d24) popup_call2_audio_in_window_t6_ParamLimits

0x20c7,	// (0x00039d24) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000471b7) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000471b7) popup_call2_audio_in_window_t

0x014e,	// (0x00037dab) bg_popup_call2_in_pane_g1

0x21de,	// (0x00039e3b) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0004721f) popup_cale_lunar_info_window_t

0x0156,	// (0x00037db3) bg_popup_call2_rect_pane_ParamLimits

0x0156,	// (0x00037db3) bg_popup_call2_rect_pane

0xefb6,	// (0x00046c13) call2_cli_visual_graphic_pane

0xefb6,	// (0x00046c13) call2_cli_visual_text_pane

0x8ab9,	// (0x00040716) smil_status_volume_pane_g3

0x0002,

0x0270,	// (0x00037ecd) call2_cli_visual_graphic_pane_g1

0x0270,	// (0x00037ecd) call2_cli_visual_graphic_pane_g2

0x0270,	// (0x00037ecd) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000471c4) call2_cli_visual_graphic_pane_g

0x20dc,	// (0x00039d39) bg_popup_call2_rect_pane_g1

0x02fc,	// (0x00037f59) bg_popup_call2_rect_pane_g2

0x20e4,	// (0x00039d41) bg_popup_call2_rect_pane_g3

0x20ec,	// (0x00039d49) bg_popup_call2_rect_pane_g4

0x20f4,	// (0x00039d51) bg_popup_call2_rect_pane_g5

0x20fc,	// (0x00039d59) bg_popup_call2_rect_pane_g6

0x2104,	// (0x00039d61) bg_popup_call2_rect_pane_g7

0x210c,	// (0x00039d69) bg_popup_call2_rect_pane_g8

0x2114,	// (0x00039d71) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000471cb) bg_popup_call2_rect_pane_g

0x211c,	// (0x00039d79) bg_popup_call2_bubble_pane_g1

0x2124,	// (0x00039d81) bg_popup_call2_bubble_pane_g2

0x212c,	// (0x00039d89) bg_popup_call2_bubble_pane_g3

0x2134,	// (0x00039d91) bg_popup_call2_bubble_pane_g4

0x213c,	// (0x00039d99) bg_popup_call2_bubble_pane_g5

0x2144,	// (0x00039da1) bg_popup_call2_bubble_pane_g6

0x214c,	// (0x00039da9) bg_popup_call2_bubble_pane_g7

0x2154,	// (0x00039db1) bg_popup_call2_bubble_pane_g8

0x215c,	// (0x00039db9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000471de) bg_popup_call2_bubble_pane_g

0x5f31,	// (0x0003db8e) aid_cale_week_size_cell_pane

0x64af,	// (0x0003e10c) aid_cams_cif_uncrop_pane_ParamLimits

0x64af,	// (0x0003e10c) aid_cams_cif_uncrop_pane

0x660a,	// (0x0003e267) aid_cams_size_cell_ParamLimits

0x660a,	// (0x0003e267) aid_cams_size_cell

0x6616,	// (0x0003e273) grid_cams_pane_ParamLimits

0x6624,	// (0x0003e281) linegrid_cams_pane_ParamLimits

0x66fb,	// (0x0003e358) call_video_pane_t1

0x671c,	// (0x0003e379) call_video_pane_t2

0x0001,

0xf26e,	// (0x00046ecb) call_video_pane_t

0x6c63,	// (0x0003e8c0) aid_cale_month_size_cell_pane_ParamLimits

0x6c63,	// (0x0003e8c0) aid_cale_month_size_cell_pane

0xf60b,	// (0x00047268) smil_status_volume_pane_g

0x8ac6,	// (0x00040723) volume_smil_pane_ParamLimits

0x56a0,	// (0x0003d2fd) aid_popup2_width_pane

0x5e33,	// (0x0003da90) cell_qdial_pane_g4_ParamLimits

0x5e33,	// (0x0003da90) cell_qdial_pane_g4

0x7b3f,	// (0x0003f79c) aid_blid_cardinal_pane_ParamLimits

0x7b4f,	// (0x0003f7ac) aid_blid_destination_pane_ParamLimits

0x7b4f,	// (0x0003f7ac) aid_blid_destination_pane

0x0156,	// (0x00037db3) bg_popup_call_poc_act_pane_ParamLimits

0x0156,	// (0x00037db3) bg_popup_call_poc_act_pane

0x0156,	// (0x00037db3) bg_popup_call_poc_inact_pane_ParamLimits

0x0156,	// (0x00037db3) bg_popup_call_poc_inact_pane

0x2164,	// (0x00039dc1) bg_popup_call_poc_act_pane_g1

0x216c,	// (0x00039dc9) bg_popup_call_poc_act_pane_g2

0x2174,	// (0x00039dd1) bg_popup_call_poc_act_pane_g3

0x2134,	// (0x00039d91) bg_popup_call_poc_act_pane_g4

0x213c,	// (0x00039d99) bg_popup_call_poc_act_pane_g5

0x217c,	// (0x00039dd9) bg_popup_call_poc_act_pane_g6

0x214c,	// (0x00039da9) bg_popup_call_poc_act_pane_g7

0x2184,	// (0x00039de1) bg_popup_call_poc_act_pane_g8

0xefb6,	// (0x00046c13) main_usb_pane

0x88b5,	// (0x00040512) popup_cale_lunar_info_window

0x6a45,	// (0x0003e6a2) im_reading_pane_t1_ParamLimits

0x04e1,	// (0x0003813e) list_im_pane_ParamLimits

0x04f2,	// (0x0003814f) scroll_pane_cp07_ParamLimits

0xefb6,	// (0x00046c13) grid_highlight_pane_cp012

0x0156,	// (0x00037db3) mup_scale_pane_ParamLimits

0x0c8f,	// (0x000388ec) main_usb_pane_g1_ParamLimits

0x0c8f,	// (0x000388ec) main_usb_pane_g1

0x8624,	// (0x00040281) main_usb_pane_g2_ParamLimits

0x8624,	// (0x00040281) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x00047208) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x00047208) main_usb_pane_g

0x8630,	// (0x0004028d) main_usb_pane_t1_ParamLimits

0x8630,	// (0x0004028d) main_usb_pane_t1

0x8642,	// (0x0004029f) main_usb_pane_t2_ParamLimits

0x8642,	// (0x0004029f) main_usb_pane_t2

0x8654,	// (0x000402b1) main_usb_pane_t3_ParamLimits

0x8654,	// (0x000402b1) main_usb_pane_t3

0x8666,	// (0x000402c3) main_usb_pane_t4_ParamLimits

0x8666,	// (0x000402c3) main_usb_pane_t4

0x8678,	// (0x000402d5) main_usb_pane_t5_ParamLimits

0x8678,	// (0x000402d5) main_usb_pane_t5

0x868a,	// (0x000402e7) main_usb_pane_t6_ParamLimits

0x868a,	// (0x000402e7) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0004720d) main_usb_pane_t_ParamLimits

0x7ae5,	// (0x0003f742) aid_text_placing

0x7af1,	// (0x0003f74e) main_location2_pane_t1_ParamLimits

0x7b05,	// (0x0003f762) main_location2_pane_t2_ParamLimits

0x7b19,	// (0x0003f776) main_location2_pane_t3_ParamLimits

0x7b2d,	// (0x0003f78a) main_location2_pane_t4_ParamLimits

0x7b2d,	// (0x0003f78a) main_location2_pane_t4

0xf3cf,	// (0x0004702c) main_location2_pane_t_ParamLimits

0x0192,	// (0x00037def) find_pinb_pane_g2_ParamLimits

0x0192,	// (0x00037def) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x00046d7c) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x00046d7c) find_pinb_pane_g

0x019e,	// (0x00037dfb) find_pinb_pane_t1_ParamLimits

0x01b0,	// (0x00037e0d) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x00046d81) find_pinb_pane_t_ParamLimits

0xefb6,	// (0x00046c13) main_call3_pane

0x7206,	// (0x0003ee63) cale_month_day_heading_pane_t1_ParamLimits

0x728c,	// (0x0003eee9) cale_month_day_heading_pane_t2_ParamLimits

0x7305,	// (0x0003ef62) cale_month_day_heading_pane_t3_ParamLimits

0x737e,	// (0x0003efdb) cale_month_day_heading_pane_t4_ParamLimits

0x73f7,	// (0x0003f054) cale_month_day_heading_pane_t5_ParamLimits

0x7470,	// (0x0003f0cd) cale_month_day_heading_pane_t6_ParamLimits

0x74e9,	// (0x0003f146) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x00046f03) cale_month_day_heading_pane_t_ParamLimits

0x073c,	// (0x00038399) smil_status_volume_pane

0x81e8,	// (0x0003fe45) postcard_address_pane_ParamLimits

0x81e8,	// (0x0003fe45) postcard_address_pane

0x81f4,	// (0x0003fe51) postcard_message_pane_ParamLimits

0x81f4,	// (0x0003fe51) postcard_message_pane

0x85ef,	// (0x0004024c) call2_cli_visual_pane_t1_ParamLimits

0x85ef,	// (0x0004024c) call2_cli_visual_pane_t1

0x8c1d,	// (0x0004087a) postcard_message_pane_t1_ParamLimits

0x8c1d,	// (0x0004087a) postcard_message_pane_t1

0x8c06,	// (0x00040863) postcard_address_pane_t1_ParamLimits

0x8c06,	// (0x00040863) postcard_address_pane_t1

0x8bf7,	// (0x00040854) popup_call3_audio_in_window_ParamLimits

0x8bf7,	// (0x00040854) popup_call3_audio_in_window

0x8adb,	// (0x00040738) bg_popup_call3_in_pane_ParamLimits

0x8adb,	// (0x00040738) bg_popup_call3_in_pane

0x8b3d,	// (0x0004079a) popup_call3_audio_in_window_g1_ParamLimits

0x8b3d,	// (0x0004079a) popup_call3_audio_in_window_g1

0x8b55,	// (0x000407b2) popup_call3_audio_in_window_g2_ParamLimits

0x8b55,	// (0x000407b2) popup_call3_audio_in_window_g2

0x8b6d,	// (0x000407ca) popup_call3_audio_in_window_g3_ParamLimits

0x8b6d,	// (0x000407ca) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0004726f) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0004726f) popup_call3_audio_in_window_g

0x8b95,	// (0x000407f2) popup_call3_audio_in_window_t1_ParamLimits

0x8b95,	// (0x000407f2) popup_call3_audio_in_window_t1

0x8bbd,	// (0x0004081a) popup_call3_audio_in_window_t2_ParamLimits

0x8bbd,	// (0x0004081a) popup_call3_audio_in_window_t2

0x8be5,	// (0x00040842) popup_call3_audio_in_window_t3_ParamLimits

0x8be5,	// (0x00040842) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x00047278) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x00047278) popup_call3_audio_in_window_t

0x03e0,	// (0x0003803d) bg_popup_call3_rect_pane

0x20dc,	// (0x00039d39) bg_popup_call3_rect_pane_g1

0x02fc,	// (0x00037f59) bg_popup_call3_rect_pane_g2

0x20e4,	// (0x00039d41) bg_popup_call3_rect_pane_g3

0x20ec,	// (0x00039d49) bg_popup_call3_rect_pane_g4

0x20f4,	// (0x00039d51) bg_popup_call3_rect_pane_g5

0x20fc,	// (0x00039d59) bg_popup_call3_rect_pane_g6

0x2104,	// (0x00039d61) bg_popup_call3_rect_pane_g7

0x7e65,	// (0x0003fac2) mup_visualizer_osc_pane

0x0f19,	// (0x00038b76) mup_visualizer_spec_pane

0x8afb,	// (0x00040758) call3_video_qcif_pane_ParamLimits

0x8afb,	// (0x00040758) call3_video_qcif_pane

0x8b0d,	// (0x0004076a) call3_video_qcif_uncrop_pane_ParamLimits

0x8b0d,	// (0x0004076a) call3_video_qcif_uncrop_pane

0x8b1b,	// (0x00040778) call3_video_subqcif_pane_ParamLimits

0x8b1b,	// (0x00040778) call3_video_subqcif_pane

0x8b2d,	// (0x0004078a) call3_video_subqcif_uncrop_pane_ParamLimits

0x8b2d,	// (0x0004078a) call3_video_subqcif_uncrop_pane

0x8b85,	// (0x000407e2) popup_call3_audio_in_window_g4_ParamLimits

0x8b85,	// (0x000407e2) popup_call3_audio_in_window_g4

0x8aa8,	// (0x00040705) mup_spec_half_pane

0x8ab1,	// (0x0004070e) mup_spec_half_pane_cp

0x2341,	// (0x00039f9e) mup_osc_middle_pane

0x234a,	// (0x00039fa7) mup_visualizer_osc_pane_g1

0x8a89,	// (0x000406e6) mup_spec_bar_pane_ParamLimits

0x8a89,	// (0x000406e6) mup_spec_bar_pane

0x232e,	// (0x00039f8b) mup_spec_bar_pane_g1

0x2338,	// (0x00039f95) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00047263) mup_spec_bar_pane_g

0x5f31,	// (0x0003db8e) aid_cale_week_size_cell_pane_ParamLimits

0x5f46,	// (0x0003dba3) bg_cale_heading_pane_ParamLimits

0x0339,	// (0x00037f96) bg_cale_pane_cp01_ParamLimits

0x5f66,	// (0x0003dbc3) cale_week_corner_pane_ParamLimits

0x5f80,	// (0x0003dbdd) cale_week_day_heading_pane_ParamLimits

0x5fa0,	// (0x0003dbfd) cale_week_scroll_pane_g1_ParamLimits

0x5fbb,	// (0x0003dc18) cale_week_scroll_pane_g2_ParamLimits

0x5fce,	// (0x0003dc2b) cale_week_scroll_pane_g3_ParamLimits

0x5fe1,	// (0x0003dc3e) cale_week_scroll_pane_g4_ParamLimits

0x5ff4,	// (0x0003dc51) cale_week_scroll_pane_g5_ParamLimits

0x6007,	// (0x0003dc64) cale_week_scroll_pane_g6_ParamLimits

0x601a,	// (0x0003dc77) cale_week_scroll_pane_g7_ParamLimits

0x602f,	// (0x0003dc8c) cale_week_scroll_pane_g8_ParamLimits

0x6044,	// (0x0003dca1) cale_week_scroll_pane_g9_ParamLimits

0x6057,	// (0x0003dcb4) cale_week_scroll_pane_g10_ParamLimits

0x606a,	// (0x0003dcc7) cale_week_scroll_pane_g11_ParamLimits

0x607d,	// (0x0003dcda) cale_week_scroll_pane_g12_ParamLimits

0x6094,	// (0x0003dcf1) cale_week_scroll_pane_g13_ParamLimits

0x60af,	// (0x0003dd0c) cale_week_scroll_pane_g14_ParamLimits

0x60ca,	// (0x0003dd27) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x00046e0d) cale_week_scroll_pane_g_ParamLimits

0x60fa,	// (0x0003dd57) cale_week_time_pane_ParamLimits

0x610f,	// (0x0003dd6c) grid_cale_week_pane_ParamLimits

0x0356,	// (0x00037fb3) listscroll_cale_week_pane_t1

0x0368,	// (0x00037fc5) scroll_pane_cp08_ParamLimits

0x6cd7,	// (0x0003e934) cale_month_corner_pane_ParamLimits

0x0712,	// (0x0003836f) cale_month_pane_t1

0x7189,	// (0x0003ede6) cale_month_week_pane_ParamLimits

0x0c8f,	// (0x000388ec) popup_call_status_window_g1_ParamLimits

0x7918,	// (0x0003f575) popup_call_status_window_g2_ParamLimits

0x7924,	// (0x0003f581) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x00046fb3) popup_call_status_window_g_ParamLimits

0x0aca,	// (0x00038727) aid_call2_pane

0x4565,	// (0x0003c1c2) msg_header_pane_g1

0x81e8,	// (0x0003fe45) postcard_address2_pane_ParamLimits

0x81e8,	// (0x0003fe45) postcard_address2_pane

0x81f4,	// (0x0003fe51) postcard_message2_pane_ParamLimits

0x81f4,	// (0x0003fe51) postcard_message2_pane

0x8a21,	// (0x0004067e) message2_row_pane_ParamLimits

0x8a21,	// (0x0004067e) message2_row_pane

0x8a3c,	// (0x00040699) address2_row_pane_ParamLimits

0x8a3c,	// (0x00040699) address2_row_pane

0x22fc,	// (0x00039f59) postcard_message2_row_pane_g1

0x2304,	// (0x00039f61) postcard_message2_row_pane_t1

0x22fc,	// (0x00039f59) address2_row_pane_g1

0x2304,	// (0x00039f61) address2_row_pane_t1

0x6395,	// (0x0003dff2) aid_size_cell_vorec

0xefb6,	// (0x00046c13) main_rss_pane

0x8a4f,	// (0x000406ac) rss_list_single_pane_ParamLimits

0x8a4f,	// (0x000406ac) rss_list_single_pane

0x2312,	// (0x00039f6f) rss_list_single_pane_t1

0x2320,	// (0x00039f7d) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0004725e) rss_list_single_pane_t

0xefb6,	// (0x00046c13) main_camera2_pane

0xefb6,	// (0x00046c13) main_video2_pane

0x8c81,	// (0x000408de) cams_zoom_pane_cp2_ParamLimits

0x8c81,	// (0x000408de) cams_zoom_pane_cp2

0x8c8d,	// (0x000408ea) image2_vga_pane_ParamLimits

0x8c8d,	// (0x000408ea) image2_vga_pane

0x8c9c,	// (0x000408f9) main_camera2_pane_g1_ParamLimits

0x8c9c,	// (0x000408f9) main_camera2_pane_g1

0x8ca8,	// (0x00040905) main_camera2_pane_g2_ParamLimits

0x8ca8,	// (0x00040905) main_camera2_pane_g2

0x8cb4,	// (0x00040911) main_camera2_pane_g3_ParamLimits

0x8cb4,	// (0x00040911) main_camera2_pane_g3

0x8cc0,	// (0x0004091d) main_camera2_pane_g4_ParamLimits

0x8cc0,	// (0x0004091d) main_camera2_pane_g4

0x8ccc,	// (0x00040929) main_camera2_pane_g5_ParamLimits

0x8ccc,	// (0x00040929) main_camera2_pane_g5

0x8cd8,	// (0x00040935) main_camera2_pane_g6_ParamLimits

0x8cd8,	// (0x00040935) main_camera2_pane_g6

0x8ce4,	// (0x00040941) main_camera2_pane_g7_ParamLimits

0x8ce4,	// (0x00040941) main_camera2_pane_g7

0x8cf0,	// (0x0004094d) main_camera2_pane_g8_ParamLimits

0x8cf0,	// (0x0004094d) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0004727f) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0004727f) main_camera2_pane_g

0x8d08,	// (0x00040965) main_camera2_pane_t1_ParamLimits

0x8d08,	// (0x00040965) main_camera2_pane_t1

0x8d1a,	// (0x00040977) main_camera2_pane_t2_ParamLimits

0x8d1a,	// (0x00040977) main_camera2_pane_t2

0x8d2c,	// (0x00040989) main_camera2_pane_t3_ParamLimits

0x8d2c,	// (0x00040989) main_camera2_pane_t3

0x8d3e,	// (0x0004099b) main_camera2_pane_t4_ParamLimits

0x8d3e,	// (0x0004099b) main_camera2_pane_t4

0x0006,

0xf635,	// (0x00047292) main_camera2_pane_t_ParamLimits

0xf635,	// (0x00047292) main_camera2_pane_t

0x8da0,	// (0x000409fd) cams_zoom_pane_cp4_ParamLimits

0x8da0,	// (0x000409fd) cams_zoom_pane_cp4

0x8db0,	// (0x00040a0d) image2_cif_pane_ParamLimits

0x8db0,	// (0x00040a0d) image2_cif_pane

0x8dc5,	// (0x00040a22) image2_subqcif_pane_ParamLimits

0x8dc5,	// (0x00040a22) image2_subqcif_pane

0x8dd4,	// (0x00040a31) main_video2_pane_g1_ParamLimits

0x8dd4,	// (0x00040a31) main_video2_pane_g1

0x8de6,	// (0x00040a43) main_video2_pane_g2_ParamLimits

0x8de6,	// (0x00040a43) main_video2_pane_g2

0x8df6,	// (0x00040a53) main_video2_pane_g3_ParamLimits

0x8df6,	// (0x00040a53) main_video2_pane_g3

0x8e06,	// (0x00040a63) main_video2_pane_g4_ParamLimits

0x8e06,	// (0x00040a63) main_video2_pane_g4

0x8e16,	// (0x00040a73) main_video2_pane_g5_ParamLimits

0x8e16,	// (0x00040a73) main_video2_pane_g5

0x8e26,	// (0x00040a83) main_video2_pane_g6_ParamLimits

0x8e26,	// (0x00040a83) main_video2_pane_g6

0x0005,

0xf644,	// (0x000472a1) main_video2_pane_g_ParamLimits

0xf644,	// (0x000472a1) main_video2_pane_g

0x8e38,	// (0x00040a95) main_video2_pane_t1_ParamLimits

0x8e38,	// (0x00040a95) main_video2_pane_t1

0x8e52,	// (0x00040aaf) main_video2_pane_t2_ParamLimits

0x8e52,	// (0x00040aaf) main_video2_pane_t2

0x8e78,	// (0x00040ad5) main_video2_pane_t3_ParamLimits

0x8e78,	// (0x00040ad5) main_video2_pane_t3

0x0002,

0xf651,	// (0x000472ae) main_video2_pane_t_ParamLimits

0xf651,	// (0x000472ae) main_video2_pane_t

0x8741,	// (0x0004039e) call_muted_g2

0x0001,

0xf5f3,	// (0x00047250) call_muted_g

0xefb6,	// (0x00046c13) main_mup2_pane

0x23af,	// (0x0003a00c) main_mup2_pane_g1_ParamLimits

0x23af,	// (0x0003a00c) main_mup2_pane_g1

0x8e9e,	// (0x00040afb) main_mup2_pane_g2_ParamLimits

0x8e9e,	// (0x00040afb) main_mup2_pane_g2

0x9120,	// (0x00040d7d) main_mup_pane_g13_cp1

0x9128,	// (0x00040d85) mup_volume_pane_cp1

0x8ebe,	// (0x00040b1b) main_mup2_pane_g4_ParamLimits

0x8ebe,	// (0x00040b1b) main_mup2_pane_g4

0x8ed3,	// (0x00040b30) main_mup2_pane_g5_ParamLimits

0x8ed3,	// (0x00040b30) main_mup2_pane_g5

0x8ee8,	// (0x00040b45) main_mup2_pane_g6_ParamLimits

0x8ee8,	// (0x00040b45) main_mup2_pane_g6

0x8efd,	// (0x00040b5a) main_mup2_pane_g7_ParamLimits

0x8efd,	// (0x00040b5a) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000472b5) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000472b5) main_mup2_pane_g

0x8f19,	// (0x00040b76) main_mup2_pane_t1_ParamLimits

0x8f19,	// (0x00040b76) main_mup2_pane_t1

0x8f30,	// (0x00040b8d) main_mup2_pane_t2_ParamLimits

0x8f30,	// (0x00040b8d) main_mup2_pane_t2

0x8f47,	// (0x00040ba4) main_mup2_pane_t3_ParamLimits

0x8f47,	// (0x00040ba4) main_mup2_pane_t3

0x8f5e,	// (0x00040bbb) main_mup2_pane_t4_ParamLimits

0x8f5e,	// (0x00040bbb) main_mup2_pane_t4

0x8f78,	// (0x00040bd5) main_mup2_pane_t5_ParamLimits

0x8f78,	// (0x00040bd5) main_mup2_pane_t5

0x8f92,	// (0x00040bef) main_mup2_pane_t6_ParamLimits

0x8f92,	// (0x00040bef) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000472c4) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000472c4) main_mup2_pane_t

0x8fca,	// (0x00040c27) mup2_visualizer_pane_ParamLimits

0x8fca,	// (0x00040c27) mup2_visualizer_pane

0x9000,	// (0x00040c5d) mup_progress_pane_cp_ParamLimits

0x9000,	// (0x00040c5d) mup_progress_pane_cp

0x910b,	// (0x00040d68) mup_volume_pane_cp_ParamLimits

0x910b,	// (0x00040d68) mup_volume_pane_cp

0x9017,	// (0x00040c74) mup2_visualizer_pane_g1_ParamLimits

0x9017,	// (0x00040c74) mup2_visualizer_pane_g1

0x2381,	// (0x00039fde) mup2_visualizer_pane_g2_ParamLimits

0x2381,	// (0x00039fde) mup2_visualizer_pane_g2

0x902c,	// (0x00040c89) mup2_visualizer_pane_g3_ParamLimits

0x902c,	// (0x00040c89) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000472d1) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000472d1) mup2_visualizer_pane_g

0x11c1,	// (0x00038e1e) aid_size_cell_fmradio

0x8857,	// (0x000404b4) aid_height_parent_landcape

0x0570,	// (0x000381cd) wml_content_pane_cp

0x0578,	// (0x000381d5) wml_tabs_pane

0x0581,	// (0x000381de) popup_wml_miniature_window

0x0589,	// (0x000381e6) scroll_pane_cp021

0x059d,	// (0x000381fa) wml_content_pane_comp8

0xefb6,	// (0x00046c13) bg_popup_sub_pane_cp05

0x239f,	// (0x00039ffc) popup_wml_miniature_window_g1

0x23a7,	// (0x0003a004) wml_miniature_view_pane

0x903a,	// (0x00040c97) aid_size_wml_view

0x9042,	// (0x00040c9f) wml_miniature_view_pane_g1

0x904b,	// (0x00040ca8) wml_miniature_view_pane_g2

0x9054,	// (0x00040cb1) wml_miniature_view_pane_g3

0x905c,	// (0x00040cb9) wml_miniature_view_pane_g4

0x9064,	// (0x00040cc1) wml_miniature_view_pane_g5

0x906c,	// (0x00040cc9) wml_miniature_view_pane_g6

0x9074,	// (0x00040cd1) wml_miniature_view_pane_g7

0x907c,	// (0x00040cd9) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000472d8) wml_miniature_view_pane_g

0x23af,	// (0x0003a00c) background_graphic_ParamLimits

0x23af,	// (0x0003a00c) background_graphic

0x23bb,	// (0x0003a018) wml_tabs_2_pane

0x23c4,	// (0x0003a021) wml_tabs_3_pane_ParamLimits

0x23c4,	// (0x0003a021) wml_tabs_3_pane

0x23d6,	// (0x0003a033) wml_tabs_4_pane_ParamLimits

0x23d6,	// (0x0003a033) wml_tabs_4_pane

0x23ec,	// (0x0003a049) wml_tabs_5_pane_ParamLimits

0x23ec,	// (0x0003a049) wml_tabs_5_pane

0x2406,	// (0x0003a063) wml_tabs_pane_g2_ParamLimits

0x2406,	// (0x0003a063) wml_tabs_pane_g2

0x241a,	// (0x0003a077) wml_tabs_pane_g3_ParamLimits

0x241a,	// (0x0003a077) wml_tabs_pane_g3

0x9084,	// (0x00040ce1) wml_tabs_2_active_pane_ParamLimits

0x9084,	// (0x00040ce1) wml_tabs_2_active_pane

0x9094,	// (0x00040cf1) wml_tabs_2_passive_pane_ParamLimits

0x9094,	// (0x00040cf1) wml_tabs_2_passive_pane

0x90a4,	// (0x00040d01) wml_tabs_3_active_pane_cp_ParamLimits

0x90a4,	// (0x00040d01) wml_tabs_3_active_pane_cp

0x90b5,	// (0x00040d12) wml_tabs_3_passive_pane_ParamLimits

0x90b5,	// (0x00040d12) wml_tabs_3_passive_pane

0x90c6,	// (0x00040d23) wml_tabs_3_passive_pane_cp_ParamLimits

0x90c6,	// (0x00040d23) wml_tabs_3_passive_pane_cp

0x90d7,	// (0x00040d34) tabs_4_active_pane

0x90df,	// (0x00040d3c) tabs_4_passive_pane

0x90e7,	// (0x00040d44) tabs_4_passive_pane_cp

0x90ef,	// (0x00040d4c) tabs_4_passive_pane_cp2

0x861c,	// (0x00040279) aid_height_text

0x7e32,	// (0x0003fa8f) mup_volume_cont_pane_ParamLimits

0x7e32,	// (0x0003fa8f) mup_volume_cont_pane

0x5a6f,	// (0x0003d6cc) aid_size_cell_pinb

0x5a79,	// (0x0003d6d6) aid_size_list_pinb

0x8fe9,	// (0x00040c46) mup2_volume_cont_pane_ParamLimits

0x8fe9,	// (0x00040c46) mup2_volume_cont_pane

0x90f7,	// (0x00040d54) mup2_volume_cont_pane_g1_ParamLimits

0x90f7,	// (0x00040d54) mup2_volume_cont_pane_g1

0x56ac,	// (0x0003d309) aid_size_cell_touch_ParamLimits

0x56ac,	// (0x0003d309) aid_size_cell_touch

0x5955,	// (0x0003d5b2) touch_pane_ParamLimits

0x5955,	// (0x0003d5b2) touch_pane

0xe743,	// (0x000463a0) main_rss2_pane

0x2437,	// (0x0003a094) listscroll_rss2_pane

0x2440,	// (0x0003a09d) rss2_navigation_pane

0x2448,	// (0x0003a0a5) list_rss2_pane

0x0c05,	// (0x00038862) scroll_pane_cp22

0x2450,	// (0x0003a0ad) rss2_navigation_pane_g1

0x2459,	// (0x0003a0b6) rss2_navigation_pane_g2

0x2461,	// (0x0003a0be) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000472e9) rss2_navigation_pane_g

0x2469,	// (0x0003a0c6) rss2_navigation_pane_t1

0x9130,	// (0x00040d8d) rss2_list_single_pane_ParamLimits

0x9130,	// (0x00040d8d) rss2_list_single_pane

0x2477,	// (0x0003a0d4) rss2_list_single_pane_t2

0x2485,	// (0x0003a0e2) rss2_list_single_pane_t3_ParamLimits

0x2485,	// (0x0003a0e2) rss2_list_single_pane_t3

0x24a2,	// (0x0003a0ff) rss2_list_single_pane_t4

0x7785,	// (0x0003f3e2) smil_status_pane_g1

0x0c9d,	// (0x000388fa) main_image2_pane_ParamLimits

0x0c9d,	// (0x000388fa) main_image2_pane

0x8cfc,	// (0x00040959) main_camera2_pane_g9_ParamLimits

0x8cfc,	// (0x00040959) main_camera2_pane_g9

0x8d50,	// (0x000409ad) main_camera2_pane_t5_ParamLimits

0x8d50,	// (0x000409ad) main_camera2_pane_t5

0x8d62,	// (0x000409bf) main_camera2_pane_t6_ParamLimits

0x8d62,	// (0x000409bf) main_camera2_pane_t6

0x9161,	// (0x00040dbe) main_image2_pane_g1_ParamLimits

0x9161,	// (0x00040dbe) main_image2_pane_g1

0x83bc,	// (0x00040019) smil2_video_pane_ParamLimits

0x83bc,	// (0x00040019) smil2_video_pane

0x42cd,	// (0x0003bf2a) aid_zoom_text_primary_cp

0x58fe,	// (0x0003d55b) popup_preview_fixed_window

0x04d9,	// (0x00038136) im_reading_pane_g1

0x8c46,	// (0x000408a3) cams2_bc_adjust_pane_cp_ParamLimits

0x8c46,	// (0x000408a3) cams2_bc_adjust_pane_cp

0x8d92,	// (0x000409ef) cams2_bc_adjust_pane_ParamLimits

0x8d92,	// (0x000409ef) cams2_bc_adjust_pane

0x916d,	// (0x00040dca) cams2_bc_adjust_pane_g1

0x9175,	// (0x00040dd2) cams2_slider_pane

0x917e,	// (0x00040ddb) cams2_slider_pane_g1

0x9187,	// (0x00040de4) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000472f0) cams2_slider_pane_g

0x5b7f,	// (0x0003d7dc) calc_display_pane_ParamLimits

0x5b9d,	// (0x0003d7fa) calc_paper_pane_ParamLimits

0x5bb9,	// (0x0003d816) grid_calc_pane_ParamLimits

0x7986,	// (0x0003f5e3) popup_clock_digital_window_t1_ParamLimits

0x115e,	// (0x00038dbb) main_image_pane_t1

0x5b65,	// (0x0003d7c2) aid_size_cell_calc_ParamLimits

0x5b65,	// (0x0003d7c2) aid_size_cell_calc

0x8891,	// (0x000404ee) popup_blid_sat_info2_window_ParamLimits

0x8891,	// (0x000404ee) popup_blid_sat_info2_window

0x24b8,	// (0x0003a115) aid_size_cell_blid

0x24c0,	// (0x0003a11d) bg_popup_window_pane_cp07

0x24e3,	// (0x0003a140) grid_popup_blid_pane

0x24ed,	// (0x0003a14a) heading_pane_cp05_ParamLimits

0x24ed,	// (0x0003a14a) heading_pane_cp05

0x25b7,	// (0x0003a214) cell_popup_blid_pane_ParamLimits

0x25b7,	// (0x0003a214) cell_popup_blid_pane

0x25db,	// (0x0003a238) cell_popup_blid_pane_g1

0x25e3,	// (0x0003a240) cell_popup_blid_pane_t1

0x8faf,	// (0x00040c0c) mup2_indicator_pane_ParamLimits

0x8faf,	// (0x00040c0c) mup2_indicator_pane

0x03e0,	// (0x0003803d) mup2_visualizer_osc_pane

0x238d,	// (0x00039fea) mup2_visualizer_spec_pane_ParamLimits

0x238d,	// (0x00039fea) mup2_visualizer_spec_pane

0x91a1,	// (0x00040dfe) mup2_spec_half_pane

0x91aa,	// (0x00040e07) mup2_spec_half_pane_cp

0x91b4,	// (0x00040e11) mup2_spec_bar_pane_ParamLimits

0x91b4,	// (0x00040e11) mup2_spec_bar_pane

0x232e,	// (0x00039f8b) mup2_spec_bar_pane_g1

0x2338,	// (0x00039f95) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x00047263) mup2_spec_bar_pane_g

0x91d3,	// (0x00040e30) mup2_osc_middle_pane

0x234a,	// (0x00039fa7) mup2_visualizer_osc_pane_g1

0xe76d,	// (0x000463ca) popup_number_entry_window_t1_ParamLimits

0xe780,	// (0x000463dd) popup_number_entry_window_t2_ParamLimits

0xe792,	// (0x000463ef) popup_number_entry_window_t3_ParamLimits

0x59ac,	// (0x0003d609) popup_number_entry_window_t5_ParamLimits

0x59ac,	// (0x0003d609) popup_number_entry_window_t5

0xf0ca,	// (0x00046d27) popup_number_entry_window_t_ParamLimits

0xe7a4,	// (0x00046401) text_title_cp2_ParamLimits

0x80b0,	// (0x0003fd0d) aid_hotspot_pointer_text2_pane

0x814a,	// (0x0003fda7) main_viewer_pane_g9_ParamLimits

0x814a,	// (0x0003fda7) main_viewer_pane_g9

0x0712,	// (0x0003836f) cale_month_pane_t1_ParamLimits

0x074f,	// (0x000383ac) bg_cale_pane_ParamLimits

0x0767,	// (0x000383c4) list_cale_pane_ParamLimits

0x0778,	// (0x000383d5) listscroll_cale_day_pane_t1

0x078a,	// (0x000383e7) scroll_pane_cp09_ParamLimits

0x7e6d,	// (0x0003faca) main_mup_eq_pane_t1_ParamLimits

0x7e6d,	// (0x0003faca) main_mup_eq_pane_t1

0x7e87,	// (0x0003fae4) main_mup_eq_pane_t2_ParamLimits

0x7e87,	// (0x0003fae4) main_mup_eq_pane_t2

0x7ea1,	// (0x0003fafe) main_mup_eq_pane_t3_ParamLimits

0x7ea1,	// (0x0003fafe) main_mup_eq_pane_t3

0x7eb9,	// (0x0003fb16) main_mup_eq_pane_t4_ParamLimits

0x7eb9,	// (0x0003fb16) main_mup_eq_pane_t4

0x7ed1,	// (0x0003fb2e) main_mup_eq_pane_t5_ParamLimits

0x7ed1,	// (0x0003fb2e) main_mup_eq_pane_t5

0x7ee9,	// (0x0003fb46) main_mup_eq_pane_t6_ParamLimits

0x7ee9,	// (0x0003fb46) main_mup_eq_pane_t6

0x7efd,	// (0x0003fb5a) main_mup_eq_pane_t7_ParamLimits

0x7efd,	// (0x0003fb5a) main_mup_eq_pane_t7

0x7f11,	// (0x0003fb6e) main_mup_eq_pane_t8_ParamLimits

0x7f11,	// (0x0003fb6e) main_mup_eq_pane_t8

0x7f27,	// (0x0003fb84) main_mup_eq_pane_t9_ParamLimits

0x7f27,	// (0x0003fb84) main_mup_eq_pane_t9

0x7f3f,	// (0x0003fb9c) main_mup_eq_pane_t10_ParamLimits

0x7f3f,	// (0x0003fb9c) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000470b2) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000470b2) main_mup_eq_pane_t

0x7ffc,	// (0x0003fc59) mup_equalizer_pane_cp5_ParamLimits

0x8012,	// (0x0003fc6f) mup_equalizer_pane_cp6_ParamLimits

0x802a,	// (0x0003fc87) mup_equalizer_pane_cp7_ParamLimits

0xe743,	// (0x000463a0) main_gallery_pane

0x2353,	// (0x00039fb0) smil2_volume_pane

0x236e,	// (0x00039fcb) smil_status_volume_pane_g1_ParamLimits

0x235b,	// (0x00039fb8) smil_status_volume_pane_g2_ParamLimits

0x8ab9,	// (0x00040716) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x00047268) smil_status_volume_pane_g_ParamLimits

0x24c0,	// (0x0003a11d) bg_popup_window_pane_cp07_ParamLimits

0x24ce,	// (0x0003a12b) blid_firmament_pane

0x91dc,	// (0x00040e39) aid_size_cell_gallery_ParamLimits

0x91dc,	// (0x00040e39) aid_size_cell_gallery

0x91ea,	// (0x00040e47) grid_gallery_pane_ParamLimits

0x91ea,	// (0x00040e47) grid_gallery_pane

0x91fa,	// (0x00040e57) cell_gallery_pane_ParamLimits

0x91fa,	// (0x00040e57) cell_gallery_pane

0x2606,	// (0x0003a263) bg_cell_gallery_focus_pane_ParamLimits

0x2606,	// (0x0003a263) bg_cell_gallery_focus_pane

0x2618,	// (0x0003a275) cell_gallery_pane_g1_ParamLimits

0x2618,	// (0x0003a275) cell_gallery_pane_g1

0x9248,	// (0x00040ea5) cell_gallery_pane_g2_ParamLimits

0x9248,	// (0x00040ea5) cell_gallery_pane_g2

0x9255,	// (0x00040eb2) cell_gallery_pane_g3_ParamLimits

0x9255,	// (0x00040eb2) cell_gallery_pane_g3

0x2624,	// (0x0003a281) cell_gallery_pane_g4_ParamLimits

0x2624,	// (0x0003a281) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x00047316) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x00047316) cell_gallery_pane_g

0x2630,	// (0x0003a28d) bg_cell_gallery_focus_pane_g1

0x2638,	// (0x0003a295) bg_cell_gallery_focus_pane_g2

0x2640,	// (0x0003a29d) bg_cell_gallery_focus_pane_g3

0x2648,	// (0x0003a2a5) bg_cell_gallery_focus_pane_g4

0x2650,	// (0x0003a2ad) bg_cell_gallery_focus_pane_g5

0x2658,	// (0x0003a2b5) bg_cell_gallery_focus_pane_g6

0x2660,	// (0x0003a2bd) bg_cell_gallery_focus_pane_g7

0x2668,	// (0x0003a2c5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0004731f) bg_cell_gallery_focus_pane_g

0x2670,	// (0x0003a2cd) aid_firma_cardinal

0x2684,	// (0x0003a2e1) blid_firmament_pane_t1

0x269b,	// (0x0003a2f8) blid_firmament_pane_t2

0x26b2,	// (0x0003a30f) blid_firmament_pane_t3

0x26c9,	// (0x0003a326) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x00047330) blid_firmament_pane_t

0x26e0,	// (0x0003a33d) blid_sat_info_pane

0x26f0,	// (0x0003a34d) blid_sat_info_pane_g1

0x26f0,	// (0x0003a34d) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x00047339) blid_sat_info_pane_g

0x26fa,	// (0x0003a357) blid_sat_info_pane_t1

0x2708,	// (0x0003a365) smil2_volume_content_pane

0x2711,	// (0x0003a36e) smil2_volume_pane_g1

0x25f1,	// (0x0003a24e) smil2_volume_content_pane_g1

0x2719,	// (0x0003a376) smil2_volume_content_pane_g2

0x2722,	// (0x0003a37f) smil2_volume_content_pane_g3

0x272b,	// (0x0003a388) smil2_volume_content_pane_g4

0x2734,	// (0x0003a391) smil2_volume_content_pane_g5

0x273d,	// (0x0003a39a) smil2_volume_content_pane_g6

0x2746,	// (0x0003a3a3) smil2_volume_content_pane_g7

0x274f,	// (0x0003a3ac) smil2_volume_content_pane_g8

0x2758,	// (0x0003a3b5) smil2_volume_content_pane_g9

0x2761,	// (0x0003a3be) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0004733e) smil2_volume_content_pane_g

0x6190,	// (0x0003dded) cale_week_day_heading_pane_t1_ParamLimits

0x61ab,	// (0x0003de08) cale_week_day_heading_pane_t2_ParamLimits

0x61c6,	// (0x0003de23) cale_week_day_heading_pane_t3_ParamLimits

0x61e1,	// (0x0003de3e) cale_week_day_heading_pane_t4_ParamLimits

0x61fc,	// (0x0003de59) cale_week_day_heading_pane_t5_ParamLimits

0x6217,	// (0x0003de74) cale_week_day_heading_pane_t6_ParamLimits

0x6232,	// (0x0003de8f) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x00046e2e) cale_week_day_heading_pane_t_ParamLimits

0x0385,	// (0x00037fe2) bg_cale_side_pane_ParamLimits

0x624d,	// (0x0003deaa) cale_week_time_pane_t1_ParamLimits

0x6267,	// (0x0003dec4) cale_week_time_pane_t2_ParamLimits

0x6281,	// (0x0003dede) cale_week_time_pane_t3_ParamLimits

0x629b,	// (0x0003def8) cale_week_time_pane_t4_ParamLimits

0x62b5,	// (0x0003df12) cale_week_time_pane_t5_ParamLimits

0x62cf,	// (0x0003df2c) cale_week_time_pane_t6_ParamLimits

0x62ed,	// (0x0003df4a) cale_week_time_pane_t7_ParamLimits

0x630f,	// (0x0003df6c) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x00046e3d) cale_week_time_pane_t_ParamLimits

0x6333,	// (0x0003df90) cell_cale_week_pane_g2_ParamLimits

0x0385,	// (0x00037fe2) bg_cale_side_pane_cp01_ParamLimits

0x757a,	// (0x0003f1d7) cale_month_week_pane_t1_ParamLimits

0x7593,	// (0x0003f1f0) cale_month_week_pane_t2_ParamLimits

0x75ac,	// (0x0003f209) cale_month_week_pane_t3_ParamLimits

0x75c5,	// (0x0003f222) cale_month_week_pane_t4_ParamLimits

0x75de,	// (0x0003f23b) cale_month_week_pane_t5_ParamLimits

0x75ff,	// (0x0003f25c) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x00046f12) cale_month_week_pane_t_ParamLimits

0x7742,	// (0x0003f39f) cell_cale_month_pane_g1_ParamLimits

0xe743,	// (0x000463a0) main_cale_event_viewer_pane

0xe743,	// (0x000463a0) listscroll_cale_event_viewer_pane

0x276a,	// (0x0003a3c7) list_cale_ev_pane

0x2772,	// (0x0003a3cf) scroll_pane_cp023

0x277e,	// (0x0003a3db) field_cale_ev_pane_ParamLimits

0x277e,	// (0x0003a3db) field_cale_ev_pane

0x279c,	// (0x0003a3f9) field_cale_ev_content_pane_ParamLimits

0x279c,	// (0x0003a3f9) field_cale_ev_content_pane

0x27a8,	// (0x0003a405) field_cale_ev_pane_g1_ParamLimits

0x27a8,	// (0x0003a405) field_cale_ev_pane_g1

0x27b4,	// (0x0003a411) field_cale_ev_pane_g2_ParamLimits

0x27b4,	// (0x0003a411) field_cale_ev_pane_g2

0x27cc,	// (0x0003a429) field_cale_ev_pane_g3_ParamLimits

0x27cc,	// (0x0003a429) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x00047353) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x00047353) field_cale_ev_pane_g

0x27e4,	// (0x0003a441) field_cale_ev_pane_t1_ParamLimits

0x27e4,	// (0x0003a441) field_cale_ev_pane_t1

0x27fb,	// (0x0003a458) field_cale_ev_content_pane_t1_ParamLimits

0x27fb,	// (0x0003a458) field_cale_ev_content_pane_t1

0x0fcb,	// (0x00038c28) bg_button_pane_cp01

0x5f21,	// (0x0003db7e) listscroll_cale_week_pane_ParamLimits

0x0330,	// (0x00037f8d) popup_toolbar_window_cp01

0x0356,	// (0x00037fb3) listscroll_cale_week_pane_t1_ParamLimits

0x5f21,	// (0x0003db7e) listscroll_cale_day_pane_ParamLimits

0x0330,	// (0x00037f8d) popup_toolbar_window_cp02

0x0778,	// (0x000383d5) listscroll_cale_day_pane_t1_ParamLimits

0x5f21,	// (0x0003db7e) main_cale_month_pane_ParamLimits

0x8998,	// (0x000405f5) popup_toolbar_window_cp03_ParamLimits

0x8998,	// (0x000405f5) popup_toolbar_window_cp03

0x82d2,	// (0x0003ff2f) main_image_pane_g2_ParamLimits

0x82d2,	// (0x0003ff2f) main_image_pane_g2

0x82de,	// (0x0003ff3b) main_image_pane_g3_ParamLimits

0x82de,	// (0x0003ff3b) main_image_pane_g3

0x0002,

0xf4e7,	// (0x00047144) main_image_pane_g_ParamLimits

0xf4e7,	// (0x00047144) main_image_pane_g

0x115e,	// (0x00038dbb) main_image_pane_t1_ParamLimits

0x82ea,	// (0x0003ff47) main_image_pane_t2_ParamLimits

0x82ea,	// (0x0003ff47) main_image_pane_t2

0x82fc,	// (0x0003ff59) main_image_pane_t3_ParamLimits

0x82fc,	// (0x0003ff59) main_image_pane_t3

0x830e,	// (0x0003ff6b) main_image_pane_t4_ParamLimits

0x830e,	// (0x0003ff6b) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0004714b) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0004714b) main_image_pane_t

0x8320,	// (0x0003ff7d) popup_image_details_window_cp01

0x832a,	// (0x0003ff87) popup_toobar_trans_pane_cp01_ParamLimits

0x832a,	// (0x0003ff87) popup_toobar_trans_pane_cp01

0x88e8,	// (0x00040545) popup_image_details_window_ParamLimits

0x88e8,	// (0x00040545) popup_image_details_window

0x88f6,	// (0x00040553) popup_image_focus_window

0x8c38,	// (0x00040895) camera2_autofocus_pane_ParamLimits

0x8c38,	// (0x00040895) camera2_autofocus_pane

0xe743,	// (0x000463a0) bg_popup_sub_pane_cp06

0x2819,	// (0x0003a476) popup_image_focus_window_g1

0x2821,	// (0x0003a47e) popup_image_focus_window_g2

0x2829,	// (0x0003a486) popup_image_focus_window_g3

0x2831,	// (0x0003a48e) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0004735a) popup_image_focus_window_g

0x2839,	// (0x0003a496) popup_image_focus_window_t1

0x2847,	// (0x0003a4a4) popup_image_focus_window_t2

0x2857,	// (0x0003a4b4) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x00047363) popup_image_focus_window_t

0x2865,	// (0x0003a4c2) camera2_autofocus_pane_g1

0x0c9d,	// (0x000388fa) bg_tb_trans_pane_cp01

0x2873,	// (0x0003a4d0) popup_image_details_window_g1

0x2886,	// (0x0003a4e3) popup_image_details_window_g2

0x0002,

0xf718,	// (0x00047375) popup_image_details_window_g

0x28af,	// (0x0003a50c) popup_image_details_window_t1

0x28c1,	// (0x0003a51e) popup_image_details_window_t2

0x28da,	// (0x0003a537) popup_image_details_window_t3

0x28ee,	// (0x0003a54b) popup_image_details_window_t4

0x2909,	// (0x0003a566) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0004737c) popup_image_details_window_t

0x0207,	// (0x00037e64) bg_calc_paper_pane_ParamLimits

0xe743,	// (0x000463a0) grid_highlight_pane_cp013

0x5cb6,	// (0x0003d913) list_calc_pane_ParamLimits

0x5cc8,	// (0x0003d925) scroll_pane_cp024

0x021b,	// (0x00037e78) bg_calc_display_pane_ParamLimits

0x5cd0,	// (0x0003d92d) calc_display_pane_t1_ParamLimits

0x5ce5,	// (0x0003d942) calc_display_pane_t2_ParamLimits

0x5cfa,	// (0x0003d957) calc_display_pane_t3_ParamLimits

0xf151,	// (0x00046dae) calc_display_pane_t_ParamLimits

0x5dd6,	// (0x0003da33) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x00046dcb) cell_calc_pane_g

0x5ddf,	// (0x0003da3c) cell_calc_pane_t1

0x027a,	// (0x00037ed7) grid_highlight_pane_cp02_ParamLimits

0x0290,	// (0x00037eed) toolbar_button_pane_cp01_ParamLimits

0x0290,	// (0x00037eed) toolbar_button_pane_cp01

0x11a3,	// (0x00038e00) temp_image_control_pane_ParamLimits

0x11a3,	// (0x00038e00) temp_image_control_pane

0x0c9d,	// (0x000388fa) main_mp3_pane

0x2923,	// (0x0003a580) temp_image_control_pane_g1_ParamLimits

0x2923,	// (0x0003a580) temp_image_control_pane_g1

0x2931,	// (0x0003a58e) temp_image_control_pane_g2_ParamLimits

0x2931,	// (0x0003a58e) temp_image_control_pane_g2

0x2943,	// (0x0003a5a0) temp_image_control_pane_g3_ParamLimits

0x2943,	// (0x0003a5a0) temp_image_control_pane_g3

0x9292,	// (0x00040eef) temp_image_control_pane_g4_ParamLimits

0x9292,	// (0x00040eef) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x00047387) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x00047387) temp_image_control_pane_g

0x2923,	// (0x0003a580) main_mp3_pane_g1

0x92a3,	// (0x00040f00) main_mp3_pane_g2

0x0007,

0xf733,	// (0x00047390) main_mp3_pane_g

0x2986,	// (0x0003a5e3) main_mp3_pane_t1

0x03e8,	// (0x00038045) main_camera_pane_g8_ParamLimits

0x03e8,	// (0x00038045) main_camera_pane_g8

0x65c0,	// (0x0003e21d) main_video_pane_g7_ParamLimits

0x65c0,	// (0x0003e21d) main_video_pane_g7

0x8d80,	// (0x000409dd) main_camera2_pane_t7_ParamLimits

0x8d80,	// (0x000409dd) main_camera2_pane_t7

0x0530,	// (0x0003818d) scroll_pane_cp025_ParamLimits

0x0530,	// (0x0003818d) scroll_pane_cp025

0x0544,	// (0x000381a1) scroll_pane_cp026_ParamLimits

0x0544,	// (0x000381a1) scroll_pane_cp026

0x0553,	// (0x000381b0) wml_content_pane_ParamLimits

0xe743,	// (0x000463a0) main_touch_calib_pane

0x9347,	// (0x00040fa4) main_touch_calib_pane_g1

0x9353,	// (0x00040fb0) main_touch_calib_pane_g2

0x935f,	// (0x00040fbc) main_touch_calib_pane_g3

0x936b,	// (0x00040fc8) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000473ae) main_touch_calib_pane_g

0x9377,	// (0x00040fd4) main_touch_calib_pane_t1

0x9390,	// (0x00040fed) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000473b7) main_touch_calib_pane_t

0x0cfd,	// (0x0003895a) mup_progress_pane_cp02

0x0d32,	// (0x0003898f) navi_pane_g1

0x0ded,	// (0x00038a4a) navi_pane_mp_t3

0x0c9d,	// (0x000388fa) main_mp3_pane_ParamLimits

0x89d5,	// (0x00040632) navi_pane_ParamLimits

0x2923,	// (0x0003a580) main_mp3_pane_g1_ParamLimits

0x92a3,	// (0x00040f00) main_mp3_pane_g2_ParamLimits

0x92af,	// (0x00040f0c) main_mp3_pane_g3_ParamLimits

0x92af,	// (0x00040f0c) main_mp3_pane_g3

0x92bb,	// (0x00040f18) main_mp3_pane_g4_ParamLimits

0x92bb,	// (0x00040f18) main_mp3_pane_g4

0x2953,	// (0x0003a5b0) main_mp3_pane_g5_ParamLimits

0x2953,	// (0x0003a5b0) main_mp3_pane_g5

0x2961,	// (0x0003a5be) main_mp3_pane_g6_ParamLimits

0x2961,	// (0x0003a5be) main_mp3_pane_g6

0x296e,	// (0x0003a5cb) main_mp3_pane_g7_ParamLimits

0x296e,	// (0x0003a5cb) main_mp3_pane_g7

0x297a,	// (0x0003a5d7) main_mp3_pane_g8_ParamLimits

0x297a,	// (0x0003a5d7) main_mp3_pane_g8

0xf733,	// (0x00047390) main_mp3_pane_g_ParamLimits

0x92c7,	// (0x00040f24) main_mp3_pane_t2

0x92d7,	// (0x00040f34) main_mp3_pane_t3

0x2994,	// (0x0003a5f1) main_mp3_pane_t4

0x29a2,	// (0x0003a5ff) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000473a1) main_mp3_pane_t

0x29b0,	// (0x0003a60d) mup_progress_pane_cp01

0x42cd,	// (0x0003bf2a) aid_zoom_text_secondary2

0x276a,	// (0x0003a3c7) list_cale_ev2_pane

0x2772,	// (0x0003a3cf) scroll_pane_cp023_ParamLimits

0x93eb,	// (0x00041048) field_cale_ev2_pane_ParamLimits

0x93eb,	// (0x00041048) field_cale_ev2_pane

0x45ea,	// (0x0003c247) field_cale_ev2_pane_g1_ParamLimits

0x45ea,	// (0x0003c247) field_cale_ev2_pane_g1

0x45f6,	// (0x0003c253) field_cale_ev2_pane_g2_ParamLimits

0x45f6,	// (0x0003c253) field_cale_ev2_pane_g2

0x460e,	// (0x0003c26b) field_cale_ev2_pane_g3_ParamLimits

0x460e,	// (0x0003c26b) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000473c2) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000473c2) field_cale_ev2_pane_g

0x4632,	// (0x0003c28f) field_cale_ev2_pane_t1_ParamLimits

0x4632,	// (0x0003c28f) field_cale_ev2_pane_t1

0x4649,	// (0x0003c2a6) field_cale_ev2_pane_t2_ParamLimits

0x4649,	// (0x0003c2a6) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000473cb) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000473cb) field_cale_ev2_pane_t

0x81b2,	// (0x0003fe0f) main_postcard_pane_g5_ParamLimits

0x81b2,	// (0x0003fe0f) main_postcard_pane_g5

0x81c0,	// (0x0003fe1d) main_postcard_pane_g6_ParamLimits

0x81c0,	// (0x0003fe1d) main_postcard_pane_g6

0x640a,	// (0x0003e067) camera2_autofocus_pane_cp_ParamLimits

0x640a,	// (0x0003e067) camera2_autofocus_pane_cp

0x0c9d,	// (0x000388fa) main_mup3_pane

0x9414,	// (0x00041071) main_mup3_pane_g1_ParamLimits

0x9414,	// (0x00041071) main_mup3_pane_g1

0x9435,	// (0x00041092) main_mup3_pane_g2_ParamLimits

0x9435,	// (0x00041092) main_mup3_pane_g2

0x94ad,	// (0x0004110a) main_mup3_pane_g3_ParamLimits

0x94ad,	// (0x0004110a) main_mup3_pane_g3

0x94f0,	// (0x0004114d) main_mup3_pane_g4_ParamLimits

0x94f0,	// (0x0004114d) main_mup3_pane_g4

0x9533,	// (0x00041190) main_mup3_pane_g5_ParamLimits

0x9533,	// (0x00041190) main_mup3_pane_g5

0x9576,	// (0x000411d3) main_mup3_pane_g6_ParamLimits

0x9576,	// (0x000411d3) main_mup3_pane_g6

0x29e4,	// (0x0003a641) main_mup3_pane_g7_ParamLimits

0x29e4,	// (0x0003a641) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000473db) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000473db) main_mup3_pane_g

0x95ec,	// (0x00041249) main_mup3_pane_t1_ParamLimits

0x95ec,	// (0x00041249) main_mup3_pane_t1

0x965b,	// (0x000412b8) main_mup3_pane_t2_ParamLimits

0x965b,	// (0x000412b8) main_mup3_pane_t2

0x9724,	// (0x00041381) main_mup3_pane_t4_ParamLimits

0x9724,	// (0x00041381) main_mup3_pane_t4

0x9772,	// (0x000413cf) main_mup3_pane_t5_ParamLimits

0x9772,	// (0x000413cf) main_mup3_pane_t5

0x9822,	// (0x0004147f) main_mup3_pane_t6_ParamLimits

0x9822,	// (0x0004147f) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000473ec) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000473ec) main_mup3_pane_t

0x98ce,	// (0x0004152b) mup3_progress_pane_ParamLimits

0x98ce,	// (0x0004152b) mup3_progress_pane

0x994c,	// (0x000415a9) popup_mup3_control_window_ParamLimits

0x994c,	// (0x000415a9) popup_mup3_control_window

0x29f2,	// (0x0003a64f) popup_mup3_text_window

0x9965,	// (0x000415c2) mup3_progress_pane_t1

0x9984,	// (0x000415e1) mup3_progress_pane_t2

0x29fa,	// (0x0003a657) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000473f9) mup3_progress_pane_t

0x2a17,	// (0x0003a674) mup_progress_pane_cp03

0xe743,	// (0x000463a0) bg_tb_trans_pane_cp04

0x99a3,	// (0x00041600) mup3_volume_pane

0x99ab,	// (0x00041608) popup_mup3_control_window_g1

0x99b4,	// (0x00041611) mup3_volume_pane_g1

0x99bd,	// (0x0004161a) mup3_volume_pane_g2

0x99c6,	// (0x00041623) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x00047400) mup3_volume_pane_g

0xe743,	// (0x000463a0) bg_tb_trans_pane_cp03

0x2a27,	// (0x0003a684) popup_mup3_text_window_g1

0x2a2f,	// (0x0003a68c) popup_mup3_text_window_t1

0x0263,	// (0x00037ec0) list_calc_item_pane_g1_ParamLimits

0x242e,	// (0x0003a08b) mup_volume_pane_cp_g1

0x93a9,	// (0x00041006) main_touch_calib_pane_t3

0x93bf,	// (0x0004101c) main_touch_calib_pane_t4

0x93d5,	// (0x00041032) main_touch_calib_pane_t5

0x5698,	// (0x0003d2f5) aid_cell_size_toolbar2

0x56a0,	// (0x0003d2fd) aid_popup3_width_pane

0x42c5,	// (0x0003bf22) aid_zoom_text_msg_primary

0x63df,	// (0x0003e03c) vorec_t7

0x0227,	// (0x00037e84) bg_calc_paper_pane_g1_ParamLimits

0x023f,	// (0x00037e9c) bg_calc_paper_pane_g2_ParamLimits

0x0233,	// (0x00037e90) bg_calc_paper_pane_g3_ParamLimits

0x0257,	// (0x00037eb4) bg_calc_paper_pane_g4_ParamLimits

0x024b,	// (0x00037ea8) bg_calc_paper_pane_g5_ParamLimits

0x5d39,	// (0x0003d996) bg_calc_paper_pane_g6_ParamLimits

0x5d4a,	// (0x0003d9a7) bg_calc_paper_pane_g7_ParamLimits

0x5d5b,	// (0x0003d9b8) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x00046db5) bg_calc_paper_pane_g_ParamLimits

0x5d6c,	// (0x0003d9c9) calc_bg_paper_pane_g9_ParamLimits

0x64f1,	// (0x0003e14e) image_qvga_pane_ParamLimits

0x64f1,	// (0x0003e14e) image_qvga_pane

0x0156,	// (0x00037db3) bg_popup_sub_pane_cp04_ParamLimits

0x10da,	// (0x00038d37) popup_mup_playback_window_g1_ParamLimits

0x10e6,	// (0x00038d43) popup_mup_playback_window_t1_ParamLimits

0x10fb,	// (0x00038d58) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0004713f) popup_mup_playback_window_t_ParamLimits

0x8eaf,	// (0x00040b0c) main_mup2_pane_g3_ParamLimits

0x8eaf,	// (0x00040b0c) main_mup2_pane_g3

0x67a9,	// (0x0003e406) popup_toolbar_window_cp04

0x14dd,	// (0x0003913a) popup_call2_audio_second_window_g3_ParamLimits

0x14dd,	// (0x0003913a) popup_call2_audio_second_window_g3

0x18e7,	// (0x00039544) popup_call2_audio_first_window_g4_ParamLimits

0x18e7,	// (0x00039544) popup_call2_audio_first_window_g4

0x1f66,	// (0x00039bc3) popup_call2_audio_in_window_g4_ParamLimits

0x1f66,	// (0x00039bc3) popup_call2_audio_in_window_g4

0x82c5,	// (0x0003ff22) aid_area_sk_bg_cut_ParamLimits

0x82c5,	// (0x0003ff22) aid_area_sk_bg_cut

0x1110,	// (0x00038d6d) aid_area_sk_bg_cut_2_ParamLimits

0x1110,	// (0x00038d6d) aid_area_sk_bg_cut_2

0x9238,	// (0x00040e95) aid_placing_details_win

0x9240,	// (0x00040e9d) aid_placing_details_win_2

0x2865,	// (0x0003a4c2) camera2_autofocus_pane_g1_ParamLimits

0x58ef,	// (0x0003d54c) popup_fixed_preview_cale_window_ParamLimits

0x58ef,	// (0x0003d54c) popup_fixed_preview_cale_window

0x0e7d,	// (0x00038ada) navi_slider_pane_g3

0x0e74,	// (0x00038ad1) navi_slider_pane_g4

0x0e6b,	// (0x00038ac8) navi_slider_pane_g5

0x0e7d,	// (0x00038ada) navi_slider_pane_g6

0x7c01,	// (0x0003f85e) navi_slider_pane_g7

0x0f90,	// (0x00038bed) mup_scale_pane_g3

0x0f99,	// (0x00038bf6) mup_scale_pane_g4

0x0fa2,	// (0x00038bff) mup_scale_pane_g5

0x8042,	// (0x0003fc9f) mup_scale_pane_g6

0x804b,	// (0x0003fca8) mup_scale_pane_g7

0x0e7d,	// (0x00038ada) cams2_slider_pane_g3

0x24b0,	// (0x0003a10d) cams2_slider_pane_g4

0x9190,	// (0x00040ded) cams2_slider_pane_g5

0x0e7d,	// (0x00038ada) cams2_slider_pane_g6

0x9198,	// (0x00040df5) cams2_slider_pane_g7

0x26f0,	// (0x0003a34d) camera2_autofocus_pane_cp_g1

0x22c7,	// (0x00039f24) bg_popup_preview_window_pane_cp02_ParamLimits

0x22c7,	// (0x00039f24) bg_popup_preview_window_pane_cp02

0x2a3d,	// (0x0003a69a) list_fp_cale_pane_ParamLimits

0x2a3d,	// (0x0003a69a) list_fp_cale_pane

0x2a49,	// (0x0003a6a6) popup_fixed_preview_cale_window_t1_ParamLimits

0x2a49,	// (0x0003a6a6) popup_fixed_preview_cale_window_t1

0x99cf,	// (0x0004162c) popup_fixed_preview_cale_window_t2_ParamLimits

0x99cf,	// (0x0004162c) popup_fixed_preview_cale_window_t2

0x99e4,	// (0x00041641) popup_fixed_preview_cale_window_t3_ParamLimits

0x99e4,	// (0x00041641) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x00047407) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x00047407) popup_fixed_preview_cale_window_t

0x99f9,	// (0x00041656) list_single_fp_cale_pane_ParamLimits

0x99f9,	// (0x00041656) list_single_fp_cale_pane

0x2a67,	// (0x0003a6c4) list_single_fp_cale_pane_g1_ParamLimits

0x2a67,	// (0x0003a6c4) list_single_fp_cale_pane_g1

0x2a73,	// (0x0003a6d0) list_single_fp_cale_pane_g2_ParamLimits

0x2a73,	// (0x0003a6d0) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0004740e) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0004740e) list_single_fp_cale_pane_g

0x2a8c,	// (0x0003a6e9) list_single_fp_cale_pane_t1_ParamLimits

0x2a8c,	// (0x0003a6e9) list_single_fp_cale_pane_t1

0x2a9e,	// (0x0003a6fb) list_single_fp_cale_pane_t2_ParamLimits

0x2a9e,	// (0x0003a6fb) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x00047415) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x00047415) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe743,	// (0x000463a0) main_dialer_pane

0x9a0c,	// (0x00041669) aid_cell_size_keypad

0x9a16,	// (0x00041673) dialer_ne_pane

0x9a20,	// (0x0004167d) grid_dialer_command_1_pane

0x9a28,	// (0x00041685) grid_dialer_command_2_pane

0x9a30,	// (0x0004168d) grid_dialer_keypad_pane

0x9a42,	// (0x0004169f) bg_popup_call_pane_cp06_ParamLimits

0x9a42,	// (0x0004169f) bg_popup_call_pane_cp06

0x9a4e,	// (0x000416ab) dialer_ne_clear_pane_ParamLimits

0x9a4e,	// (0x000416ab) dialer_ne_clear_pane

0x2ad1,	// (0x0003a72e) dialer_ne_pane_g1

0x2ad9,	// (0x0003a736) dialer_ne_pane_t1_ParamLimits

0x2ad9,	// (0x0003a736) dialer_ne_pane_t1

0x9a5a,	// (0x000416b7) dialer_ne_pane_t2_ParamLimits

0x9a5a,	// (0x000416b7) dialer_ne_pane_t2

0x9a77,	// (0x000416d4) dialer_ne_pane_t3_ParamLimits

0x9a77,	// (0x000416d4) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0004741a) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0004741a) dialer_ne_pane_t

0x9a9b,	// (0x000416f8) dialer_ne_pane_t3_copy1_ParamLimits

0x9a9b,	// (0x000416f8) dialer_ne_pane_t3_copy1

0x9abf,	// (0x0004171c) cell_dialer_keypad_pane_ParamLimits

0x9abf,	// (0x0004171c) cell_dialer_keypad_pane

0x9ad6,	// (0x00041733) cell_dialer_command_1_pane_ParamLimits

0x9ad6,	// (0x00041733) cell_dialer_command_1_pane

0x9aec,	// (0x00041749) cell_dialer_command_2_pane_ParamLimits

0x9aec,	// (0x00041749) cell_dialer_command_2_pane

0x2aeb,	// (0x0003a748) bg_button_pane_cp02_ParamLimits

0x2aeb,	// (0x0003a748) bg_button_pane_cp02

0x9afb,	// (0x00041758) cell_dialer_keypad_pane_g1_ParamLimits

0x9afb,	// (0x00041758) cell_dialer_keypad_pane_g1

0x2aeb,	// (0x0003a748) bg_button_pane_cp03_ParamLimits

0x2aeb,	// (0x0003a748) bg_button_pane_cp03

0x9b10,	// (0x0004176d) cell_dialer_command_1_pane_g1_ParamLimits

0x9b10,	// (0x0004176d) cell_dialer_command_1_pane_g1

0x2af7,	// (0x0003a754) bg_button_pane_cp04

0x9b24,	// (0x00041781) cell_dialer_command_2_pane_g1

0x03e0,	// (0x0003803d) bg_button_pane_cp06

0x2aff,	// (0x0003a75c) dialer_ne_clear_pane_g1

0x0d3e,	// (0x0003899b) navi_pane_g2

0x0d6c,	// (0x000389c9) navi_pane_g3

0x0002,

0xf3e5,	// (0x00047042) navi_pane_g

0x0dfb,	// (0x00038a58) navi_pane_mv_g2

0x0e22,	// (0x00038a7f) navi_pane_mv_g5

0x7bcc,	// (0x0003f829) navi_pane_mv_t1

0x021b,	// (0x00037e78) main_clock2_pane

0x9b64,	// (0x000417c1) main_clock2_list_pane_ParamLimits

0x9b64,	// (0x000417c1) main_clock2_list_pane

0x9b8c,	// (0x000417e9) main_clock2_pane_t1_ParamLimits

0x9b8c,	// (0x000417e9) main_clock2_pane_t1

0x9bae,	// (0x0004180b) main_clock2_pane_t2_ParamLimits

0x9bae,	// (0x0004180b) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x00047426) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x00047426) main_clock2_pane_t

0x9c09,	// (0x00041866) popup_clock_analogue_window_cp03_ParamLimits

0x9c09,	// (0x00041866) popup_clock_analogue_window_cp03

0x9c27,	// (0x00041884) popup_clock_digital_window_cp02_ParamLimits

0x9c27,	// (0x00041884) popup_clock_digital_window_cp02

0x9c94,	// (0x000418f1) main_clock2_list_single_pane_ParamLimits

0x9c94,	// (0x000418f1) main_clock2_list_single_pane

0x03e0,	// (0x0003803d) list_highlight_pane_cp05

0x2b3d,	// (0x0003a79a) main_clock2_list_single_pane_t1

0x67a9,	// (0x0003e406) popup_toolbar_window_cp04_ParamLimits

0x9262,	// (0x00040ebf) camera2_autofocus_pane_g2_ParamLimits

0x9262,	// (0x00040ebf) camera2_autofocus_pane_g2

0x926e,	// (0x00040ecb) camera2_autofocus_pane_g3_ParamLimits

0x926e,	// (0x00040ecb) camera2_autofocus_pane_g3

0x927a,	// (0x00040ed7) camera2_autofocus_pane_g4_ParamLimits

0x927a,	// (0x00040ed7) camera2_autofocus_pane_g4

0x9286,	// (0x00040ee3) camera2_autofocus_pane_g5_ParamLimits

0x9286,	// (0x00040ee3) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0004736a) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0004736a) camera2_autofocus_pane_g

0x29c4,	// (0x0003a621) camera2_autofocus_pane_cp_g2

0x29cc,	// (0x0003a629) camera2_autofocus_pane_cp_g3

0x29d4,	// (0x0003a631) camera2_autofocus_pane_cp_g4

0x29dc,	// (0x0003a639) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000473d0) camera2_autofocus_pane_cp_g

0x9a3a,	// (0x00041697) popup_dialer_spcha_window

0xe743,	// (0x000463a0) bg_popup_sub_pane_cp07

0x2b4b,	// (0x0003a7a8) list_spcha_pane

0x2b53,	// (0x0003a7b0) list_single_spcha_pane_ParamLimits

0x2b53,	// (0x0003a7b0) list_single_spcha_pane

0xe743,	// (0x000463a0) list_highlight_pane_cp06

0x2b64,	// (0x0003a7c1) list_single_spcha_pane_t1

0x1d10,	// (0x0003996d) popup_call2_audio_out_window_g4_ParamLimits

0x1d10,	// (0x0003996d) popup_call2_audio_out_window_g4

0xe743,	// (0x000463a0) main_imed2_pane

0x88fe,	// (0x0004055b) popup_imed_adjust2_window

0x8911,	// (0x0004056e) popup_imed_trans_window_ParamLimits

0x8911,	// (0x0004056e) popup_imed_trans_window

0x2519,	// (0x0003a176) popup_blid_sat_info2_window_t1

0x2527,	// (0x0003a184) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000472ff) popup_blid_sat_info2_window_t

0x9d3d,	// (0x0004199a) aid_size_cell_colour_35

0x9d57,	// (0x000419b4) aid_size_cell_colour_112

0x9d6e,	// (0x000419cb) aid_size_cell_effect

0x0c9d,	// (0x000388fa) bg_tb_trans_pane_cp02

0x0928,	// (0x00038585) heading_imed_pane

0x9d88,	// (0x000419e5) listscroll_imed_pane

0x2b72,	// (0x0003a7cf) heading_imed_pane_g1

0x2b7a,	// (0x0003a7d7) heading_imed_pane_t1

0x2b88,	// (0x0003a7e5) grid_imed_colour_35_pane_ParamLimits

0x2b88,	// (0x0003a7e5) grid_imed_colour_35_pane

0x9d94,	// (0x000419f1) grid_imed_effect_pane

0x2b9f,	// (0x0003a7fc) list_imed_aspect_pane

0x9da4,	// (0x00041a01) scroll_pane_cp027_ParamLimits

0x9da4,	// (0x00041a01) scroll_pane_cp027

0x9db0,	// (0x00041a0d) cell_imed_effect_pane_ParamLimits

0x9db0,	// (0x00041a0d) cell_imed_effect_pane

0x2ba7,	// (0x0003a804) cell_imed_colour_pane_ParamLimits

0x2ba7,	// (0x0003a804) cell_imed_colour_pane

0x2be9,	// (0x0003a846) cell_imed_colour_pane_g1_ParamLimits

0x2be9,	// (0x0003a846) cell_imed_colour_pane_g1

0x2bfa,	// (0x0003a857) hgihlgiht_grid_pane_cp016_ParamLimits

0x2bfa,	// (0x0003a857) hgihlgiht_grid_pane_cp016

0x9dc8,	// (0x00041a25) cell_imed_effect_pane_g1

0x9dd0,	// (0x00041a2d) grid_highlight_pane_cp017

0x2c0b,	// (0x0003a868) list_imed_single_pane_ParamLimits

0x2c0b,	// (0x0003a868) list_imed_single_pane

0xe743,	// (0x000463a0) list_highlight_pane_cp07

0x2c20,	// (0x0003a87d) list_imed_aspect_pane_comp1_t1

0x22d3,	// (0x00039f30) bg_tb_trans_pane_cp05

0x2c42,	// (0x0003a89f) popup_imed_adjust2_window_g1

0x2c69,	// (0x0003a8c6) popup_imed_adjust2_window_t1

0x2c81,	// (0x0003a8de) slider_imed_adjust_pane

0x2c95,	// (0x0003a8f2) slider_imed_adjust_pane_g1

0x2ca5,	// (0x0003a902) slider_imed_adjust_pane_g2

0x2cb5,	// (0x0003a912) slider_imed_adjust_pane_g3

0x2cc6,	// (0x0003a923) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x00047443) slider_imed_adjust_pane_g

0x9dd9,	// (0x00041a36) aid_size_cell_clipart2

0x9de5,	// (0x00041a42) grid_imed_clipart_pane

0x2cd7,	// (0x0003a934) scroll_pane_cp031

0x9def,	// (0x00041a4c) cell_imed_clipart_pane_ParamLimits

0x9def,	// (0x00041a4c) cell_imed_clipart_pane

0x9e11,	// (0x00041a6e) cell_imed_clipart_pane_g1

0xe743,	// (0x000463a0) grid_highlight_pane_cp014

0x9b70,	// (0x000417cd) main_clock2_pane_g1_ParamLimits

0x9b70,	// (0x000417cd) main_clock2_pane_g1

0x9c3f,	// (0x0004189c) aid_call2_pane_cp10

0x9c51,	// (0x000418ae) aid_call_pane_cp10

0x0c83,	// (0x000388e0) popup_clock_analogue_window_cp10_g1

0x0c83,	// (0x000388e0) popup_clock_analogue_window_cp10_g2

0x9c63,	// (0x000418c0) popup_clock_analogue_window_cp10_g3

0x9c63,	// (0x000418c0) popup_clock_analogue_window_cp10_g4

0x0c83,	// (0x000388e0) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x00047431) popup_clock_analogue_window_cp10_g

0x9c75,	// (0x000418d2) popup_clock_analogue_window_cp10_t1

0x9ca6,	// (0x00041903) clock_digital_number_pane_cp10_ParamLimits

0x9ca6,	// (0x00041903) clock_digital_number_pane_cp10

0x9cbe,	// (0x0004191b) clock_digital_number_pane_cp11_ParamLimits

0x9cbe,	// (0x0004191b) clock_digital_number_pane_cp11

0x9cd6,	// (0x00041933) clock_digital_number_pane_cp12_ParamLimits

0x9cd6,	// (0x00041933) clock_digital_number_pane_cp12

0x9cee,	// (0x0004194b) clock_digital_number_pane_cp13_ParamLimits

0x9cee,	// (0x0004194b) clock_digital_number_pane_cp13

0x9d06,	// (0x00041963) clock_digital_separator_pane_cp10_ParamLimits

0x9d06,	// (0x00041963) clock_digital_separator_pane_cp10

0x9d1e,	// (0x0004197b) popup_clock_digital_window_cp02_t1_ParamLimits

0x9d1e,	// (0x0004197b) popup_clock_digital_window_cp02_t1

0x014e,	// (0x00037dab) clock_digital_number_pane_cp10_g1

0x014e,	// (0x00037dab) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0004744c) clock_digital_number_pane_cp10_g

0x014e,	// (0x00037dab) clock_digital_separator_pane_cp10_g1

0x014e,	// (0x00037dab) clock_digital_separator_pane_g2_cp10

0x0e2a,	// (0x00038a87) navi_pane_vded_g4

0x0e33,	// (0x00038a90) navi_pane_vded_g5

0x0e3c,	// (0x00038a99) navi_pane_vded_t1

0xe743,	// (0x000463a0) main_vded_pane

0x9e1a,	// (0x00041a77) main_vded_pane_g1

0x9e26,	// (0x00041a83) main_vded_pane_g2

0x9e30,	// (0x00041a8d) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x00047451) main_vded_pane_g

0x9e3a,	// (0x00041a97) main_vded_pane_t1

0x9e48,	// (0x00041aa5) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x00047458) main_vded_pane_t

0x9e56,	// (0x00041ab3) vded_slider_pane

0x9e60,	// (0x00041abd) vded_video_pane

0x2cdf,	// (0x0003a93c) vded_video_pane_g1

0x9e6a,	// (0x00041ac7) vded_video_pane_g2

0x26f0,	// (0x0003a34d) vded_video_pane_g3

0x0002,

0xf800,	// (0x0004745d) vded_video_pane_g

0x2ce9,	// (0x0003a946) vded_slider_pane_g1

0x242e,	// (0x0003a08b) vded_slider_pane_g2

0x2cf2,	// (0x0003a94f) vded_slider_pane_g3

0x2cfb,	// (0x0003a958) vded_slider_pane_g4

0x2d04,	// (0x0003a961) vded_slider_pane_g5

0x0004,

0xf807,	// (0x00047464) vded_slider_pane_g

0x993e,	// (0x0004159b) mup3_rocker_pane_ParamLimits

0x993e,	// (0x0004159b) mup3_rocker_pane

0x9e73,	// (0x00041ad0) mup3_control_keys_pane_g1

0x9e7b,	// (0x00041ad8) mup3_control_keys_pane_g2

0x9e83,	// (0x00041ae0) mup3_control_keys_pane_g3

0x9e8b,	// (0x00041ae8) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0004746f) mup3_control_keys_pane_g

0x5917,	// (0x0003d574) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5917,	// (0x0003d574) popup_toolbar2_fixed_window_cp01

0x9958,	// (0x000415b5) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9958,	// (0x000415b5) popup_toolbar2_fixed_window_cp02

0x164f,	// (0x000392ac) popup_call2_audio_second_window_t4_ParamLimits

0x164f,	// (0x000392ac) popup_call2_audio_second_window_t4

0x1b7d,	// (0x000397da) popup_call2_audio_first_window_t6_ParamLimits

0x1b7d,	// (0x000397da) popup_call2_audio_first_window_t6

0x1e13,	// (0x00039a70) popup_call2_audio_out_window_t6_ParamLimits

0x1e13,	// (0x00039a70) popup_call2_audio_out_window_t6

0xe743,	// (0x000463a0) main_vitu_pane

0x9e9b,	// (0x00041af8) aid_size_cell_itu_ParamLimits

0x9e9b,	// (0x00041af8) aid_size_cell_itu

0x327e,	// (0x0003aedb) bg_popup_window_pane_cp08_ParamLimits

0x327e,	// (0x0003aedb) bg_popup_window_pane_cp08

0x9ea9,	// (0x00041b06) field_vitu_entry_pane_ParamLimits

0x9ea9,	// (0x00041b06) field_vitu_entry_pane

0x9eb8,	// (0x00041b15) grid_vitu_function_pane_ParamLimits

0x9eb8,	// (0x00041b15) grid_vitu_function_pane

0x9ec8,	// (0x00041b25) grid_vitu_itu_pane_ParamLimits

0x9ec8,	// (0x00041b25) grid_vitu_itu_pane

0x9ed8,	// (0x00041b35) cell_vitu_itu_pane_ParamLimits

0x9ed8,	// (0x00041b35) cell_vitu_itu_pane

0x9eed,	// (0x00041b4a) cell_vitu_function_pane_ParamLimits

0x9eed,	// (0x00041b4a) cell_vitu_function_pane

0x0c9d,	// (0x000388fa) bg_popup_sub_pane_cp08_ParamLimits

0x0c9d,	// (0x000388fa) bg_popup_sub_pane_cp08

0x9eff,	// (0x00041b5c) field_vitu_entry_pane_t1_ParamLimits

0x9eff,	// (0x00041b5c) field_vitu_entry_pane_t1

0x2d25,	// (0x0003a982) field_vitu_entry_pane_t2_ParamLimits

0x2d25,	// (0x0003a982) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0004747d) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0004747d) field_vitu_entry_pane_t

0x2d42,	// (0x0003a99f) bg_button_pane_cp05_ParamLimits

0x2d42,	// (0x0003a99f) bg_button_pane_cp05

0x9f1b,	// (0x00041b78) cell_vitu_itu_pane_g1

0x9f33,	// (0x00041b90) cell_vitu_itu_pane_t1_ParamLimits

0x9f33,	// (0x00041b90) cell_vitu_itu_pane_t1

0x9f45,	// (0x00041ba2) cell_vitu_itu_pane_t2_ParamLimits

0x9f45,	// (0x00041ba2) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x00047482) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x00047482) cell_vitu_itu_pane_t

0x2d50,	// (0x0003a9ad) bg_button_pane_cp07

0x9f7a,	// (0x00041bd7) cell_vitu_function_pane_g1

0x5bdd,	// (0x0003d83a) main_calc_pane_g1

0x56d4,	// (0x0003d331) aid_visual_content_pane

0xe743,	// (0x000463a0) main_vradio_pane

0x9f83,	// (0x00041be0) main_vradio_pane_g1_ParamLimits

0x9f83,	// (0x00041be0) main_vradio_pane_g1

0x2d5a,	// (0x0003a9b7) main_vradio_pane_g2_ParamLimits

0x2d5a,	// (0x0003a9b7) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x00047489) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x00047489) main_vradio_pane_g

0x9f93,	// (0x00041bf0) main_vradio_pane_t1_ParamLimits

0x9f93,	// (0x00041bf0) main_vradio_pane_t1

0x9fa5,	// (0x00041c02) main_vradio_pane_t2_ParamLimits

0x9fa5,	// (0x00041c02) main_vradio_pane_t2

0x2d67,	// (0x0003a9c4) main_vradio_pane_t3_ParamLimits

0x2d67,	// (0x0003a9c4) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0004748e) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0004748e) main_vradio_pane_t

0x9fb7,	// (0x00041c14) vradio_rocker_control_pane_ParamLimits

0x9fb7,	// (0x00041c14) vradio_rocker_control_pane

0x9fc3,	// (0x00041c20) vradio_station_info_pane_ParamLimits

0x9fc3,	// (0x00041c20) vradio_station_info_pane

0x2d7b,	// (0x0003a9d8) vradio_frequency_info_pane_ParamLimits

0x2d7b,	// (0x0003a9d8) vradio_frequency_info_pane

0x26f0,	// (0x0003a34d) vradio_station_info_pane_g1

0x2d8a,	// (0x0003a9e7) vradio_station_info_pane_t1_ParamLimits

0x2d8a,	// (0x0003a9e7) vradio_station_info_pane_t1

0x2dac,	// (0x0003aa09) vradio_station_info_pane_t2_ParamLimits

0x2dac,	// (0x0003aa09) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x00047495) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x00047495) vradio_station_info_pane_t

0x2dbe,	// (0x0003aa1b) vradio_tuning_pane

0x2dc6,	// (0x0003aa23) vradio_rocker_control_pane_g1

0x2dce,	// (0x0003aa2b) vradio_rocker_control_pane_g2

0x2dd6,	// (0x0003aa33) vradio_rocker_control_pane_g3

0x2dde,	// (0x0003aa3b) vradio_rocker_control_pane_g4

0x2de6,	// (0x0003aa43) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0004749a) vradio_rocker_control_pane_g

0x9fd2,	// (0x00041c2f) vradio_frequency_info_pane_g1

0x2dee,	// (0x0003aa4b) vradio_frequency_info_pane_t1_ParamLimits

0x2dee,	// (0x0003aa4b) vradio_frequency_info_pane_t1

0x9fdc,	// (0x00041c39) vradio_tuning_pane_g1

0x9fe5,	// (0x00041c42) vradio_tuning_pane_t1

0x571d,	// (0x0003d37a) area_side_right_pane_ParamLimits

0x571d,	// (0x0003d37a) area_side_right_pane

0x228e,	// (0x00039eeb) status_small_pane_g1

0x2296,	// (0x00039ef3) status_small_pane_g2

0x229f,	// (0x00039efc) status_small_pane_g3

0x22a8,	// (0x00039f05) status_small_pane_g4

0x0003,

0xf5f8,	// (0x00047255) status_small_pane_g

0x22b1,	// (0x00039f0e) status_small_pane_t1

0xe743,	// (0x000463a0) main_video3_pane

0x2e02,	// (0x0003aa5f) cams_zoom_vslider_pane

0x2e0a,	// (0x0003aa67) image3_wide_pane_ParamLimits

0x2e0a,	// (0x0003aa67) image3_wide_pane

0x2e24,	// (0x0003aa81) image3_wide_small_pane

0x2e30,	// (0x0003aa8d) main_video3_pane_g1_ParamLimits

0x2e30,	// (0x0003aa8d) main_video3_pane_g1

0x2e4c,	// (0x0003aaa9) main_video3_pane_g2_ParamLimits

0x2e4c,	// (0x0003aaa9) main_video3_pane_g2

0x0001,

0xf848,	// (0x000474a5) main_video3_pane_g_ParamLimits

0xf848,	// (0x000474a5) main_video3_pane_g

0x2e68,	// (0x0003aac5) main_video3_pane_t1_ParamLimits

0x2e68,	// (0x0003aac5) main_video3_pane_t1

0x2e93,	// (0x0003aaf0) main_video3_pane_t2_ParamLimits

0x2e93,	// (0x0003aaf0) main_video3_pane_t2

0x2ebe,	// (0x0003ab1b) main_video3_pane_t3_ParamLimits

0x2ebe,	// (0x0003ab1b) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000474aa) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000474aa) main_video3_pane_t

0x2eeb,	// (0x0003ab48) cams_zoom_vslider_pane_g1

0x2ef4,	// (0x0003ab51) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000474b1) cams_zoom_vslider_pane_g

0x2efc,	// (0x0003ab59) small_slider_vertical_pane

0x26f0,	// (0x0003a34d) small_slider_vertical_pane_g1

0x26f0,	// (0x0003a34d) small_slider_vertical_pane_g2

0x2f04,	// (0x0003ab61) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000474b6) small_slider_vertical_pane_g

0xe743,	// (0x000463a0) main_hwr_training_pane

0x2f0d,	// (0x0003ab6a) hwr_training_instruct_pane_ParamLimits

0x2f0d,	// (0x0003ab6a) hwr_training_instruct_pane

0x9ff4,	// (0x00041c51) hwr_training_navi_pane_ParamLimits

0x9ff4,	// (0x00041c51) hwr_training_navi_pane

0xa00e,	// (0x00041c6b) hwr_training_write_pane_ParamLimits

0xa00e,	// (0x00041c6b) hwr_training_write_pane

0xe743,	// (0x000463a0) bg_frame_shadow_pane

0x2f44,	// (0x0003aba1) hwr_training_write_pane_g1

0x2f4c,	// (0x0003aba9) hwr_training_write_pane_g2

0x2f54,	// (0x0003abb1) hwr_training_write_pane_g3

0x2f5c,	// (0x0003abb9) hwr_training_write_pane_g4

0x2f64,	// (0x0003abc1) hwr_training_write_pane_g5

0x2f6c,	// (0x0003abc9) hwr_training_write_pane_g6

0x2f74,	// (0x0003abd1) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000474bd) hwr_training_write_pane_g

0xa046,	// (0x00041ca3) hwr_training_navi_pane_g1_ParamLimits

0xa046,	// (0x00041ca3) hwr_training_navi_pane_g1

0xa058,	// (0x00041cb5) hwr_training_navi_pane_g2_ParamLimits

0xa058,	// (0x00041cb5) hwr_training_navi_pane_g2

0xa06a,	// (0x00041cc7) hwr_training_navi_pane_g3_ParamLimits

0xa06a,	// (0x00041cc7) hwr_training_navi_pane_g3

0xa07a,	// (0x00041cd7) hwr_training_navi_pane_g4_ParamLimits

0xa07a,	// (0x00041cd7) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000474cc) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000474cc) hwr_training_navi_pane_g

0xa094,	// (0x00041cf1) hwr_training_navi_pane_t1

0xa0a2,	// (0x00041cff) list_single_hwr_training_instruct_pane_ParamLimits

0xa0a2,	// (0x00041cff) list_single_hwr_training_instruct_pane

0x2f7c,	// (0x0003abd9) list_single_hwr_training_instruct_pane_t1

0x2630,	// (0x0003a28d) bg_frame_shadow_pane_g1

0x2f8b,	// (0x0003abe8) bg_frame_shadow_pane_g2

0x2f93,	// (0x0003abf0) bg_frame_shadow_pane_g3

0x2f9b,	// (0x0003abf8) bg_frame_shadow_pane_g4

0x2fa3,	// (0x0003ac00) bg_frame_shadow_pane_g5

0x2fab,	// (0x0003ac08) bg_frame_shadow_pane_g6

0x2fb3,	// (0x0003ac10) bg_frame_shadow_pane_g7

0x02d4,	// (0x00037f31) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000474d7) bg_frame_shadow_pane_g

0xe743,	// (0x000463a0) main_video_tele_dialer_pane

0xa0c7,	// (0x00041d24) aid_size_cell_video_keypad_ParamLimits

0xa0c7,	// (0x00041d24) aid_size_cell_video_keypad

0xa0d7,	// (0x00041d34) grid_video_dialer_keypad_pane_ParamLimits

0xa0d7,	// (0x00041d34) grid_video_dialer_keypad_pane

0xa10b,	// (0x00041d68) video_down_pane_cp_ParamLimits

0xa10b,	// (0x00041d68) video_down_pane_cp

0xa135,	// (0x00041d92) cell_video_dialer_keypad_pane_ParamLimits

0xa135,	// (0x00041d92) cell_video_dialer_keypad_pane

0x2fbb,	// (0x0003ac18) bg_button_pane_cp08_ParamLimits

0x2fbb,	// (0x0003ac18) bg_button_pane_cp08

0xa14a,	// (0x00041da7) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa14a,	// (0x00041da7) cell_video_dialer_keypad_pane_g1

0x9932,	// (0x0004158f) mup3_rocker2_pane_ParamLimits

0x9932,	// (0x0004158f) mup3_rocker2_pane

0x26f0,	// (0x0003a34d) mup3_rocker2_pane_g1

0x886e,	// (0x000404cb) main_dialer2_pane

0xe743,	// (0x000463a0) main_mp4_pane

0xa189,	// (0x00041de6) main_mp4_pane_g1_ParamLimits

0xa189,	// (0x00041de6) main_mp4_pane_g1

0xa197,	// (0x00041df4) main_mp4_pane_g2_ParamLimits

0xa197,	// (0x00041df4) main_mp4_pane_g2

0xa1a5,	// (0x00041e02) main_mp4_pane_g3_ParamLimits

0xa1a5,	// (0x00041e02) main_mp4_pane_g3

0xa1ea,	// (0x00041e47) main_mp4_pane_g4_ParamLimits

0xa1ea,	// (0x00041e47) main_mp4_pane_g4

0xa212,	// (0x00041e6f) main_mp4_pane_g5_ParamLimits

0xa212,	// (0x00041e6f) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000474f7) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000474f7) main_mp4_pane_g

0xa262,	// (0x00041ebf) main_mp4_pane_t1_ParamLimits

0xa262,	// (0x00041ebf) main_mp4_pane_t1

0xa2be,	// (0x00041f1b) main_mp4_pane_t2_ParamLimits

0xa2be,	// (0x00041f1b) main_mp4_pane_t2

0x2fc7,	// (0x0003ac24) main_mp4_pane_t3_ParamLimits

0x2fc7,	// (0x0003ac24) main_mp4_pane_t3

0xa310,	// (0x00041f6d) main_mp4_pane_t4_ParamLimits

0xa310,	// (0x00041f6d) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x00047504) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x00047504) main_mp4_pane_t

0xa354,	// (0x00041fb1) mp4_progress_pane_ParamLimits

0xa354,	// (0x00041fb1) mp4_progress_pane

0xa39e,	// (0x00041ffb) mp4_rocker_pane_ParamLimits

0xa39e,	// (0x00041ffb) mp4_rocker_pane

0x2fef,	// (0x0003ac4c) mp4_progress_pane_t1

0x3008,	// (0x0003ac65) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0004750d) mp4_progress_pane_t

0x3021,	// (0x0003ac7e) mup_progress_pane_cp04

0x26f0,	// (0x0003a34d) mp4_rocker_pane_g1

0xa3be,	// (0x0004201b) aid_cell_size_keypad2_ParamLimits

0xa3be,	// (0x0004201b) aid_cell_size_keypad2

0xa3ce,	// (0x0004202b) dialer2_ne_pane_ParamLimits

0xa3ce,	// (0x0004202b) dialer2_ne_pane

0xa3dc,	// (0x00042039) grid_dialer2_keypad_pane_ParamLimits

0xa3dc,	// (0x00042039) grid_dialer2_keypad_pane

0x3270,	// (0x0003aecd) bg_popup_call_pane_cp07_ParamLimits

0x3270,	// (0x0003aecd) bg_popup_call_pane_cp07

0xa3ec,	// (0x00042049) dialer2_ne_pane_t1_ParamLimits

0xa3ec,	// (0x00042049) dialer2_ne_pane_t1

0xa411,	// (0x0004206e) cell_dialer2_keypad_pane_ParamLimits

0xa411,	// (0x0004206e) cell_dialer2_keypad_pane

0x303f,	// (0x0003ac9c) bg_button_pane_pane_cp04_ParamLimits

0x303f,	// (0x0003ac9c) bg_button_pane_pane_cp04

0xa426,	// (0x00042083) cell_dialer2_keypad_pane_g1_ParamLimits

0xa426,	// (0x00042083) cell_dialer2_keypad_pane_g1

0x666b,	// (0x0003e2c8) aid_placing_vt_set_content_ParamLimits

0x666b,	// (0x0003e2c8) aid_placing_vt_set_content

0x6697,	// (0x0003e2f4) aid_placing_vt_set_title_ParamLimits

0x6697,	// (0x0003e2f4) aid_placing_vt_set_title

0xe743,	// (0x000463a0) main_image3_pane

0xa4c0,	// (0x0004211d) area_side_right_pane_cp01_ParamLimits

0xa4c0,	// (0x0004211d) area_side_right_pane_cp01

0xd451,	// (0x000450ae) main_image3_pane_g1_ParamLimits

0xd451,	// (0x000450ae) main_image3_pane_g1

0xa4ed,	// (0x0004214a) main_image3_pane_g2_ParamLimits

0xa4ed,	// (0x0004214a) main_image3_pane_g2

0xa506,	// (0x00042163) main_image3_pane_g3_ParamLimits

0xa506,	// (0x00042163) main_image3_pane_g3

0xa51f,	// (0x0004217c) main_image3_pane_g4_ParamLimits

0xa51f,	// (0x0004217c) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0004751c) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0004751c) main_image3_pane_g

0xa538,	// (0x00042195) main_image3_pane_t1_ParamLimits

0xa538,	// (0x00042195) main_image3_pane_t1

0xa55d,	// (0x000421ba) main_image3_pane_t2_ParamLimits

0xa55d,	// (0x000421ba) main_image3_pane_t2

0xa57c,	// (0x000421d9) main_image3_pane_t3_ParamLimits

0xa57c,	// (0x000421d9) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x00047525) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x00047525) main_image3_pane_t

0x327e,	// (0x0003aedb) grid_sctrl_middle_pane_cp01_ParamLimits

0x327e,	// (0x0003aedb) grid_sctrl_middle_pane_cp01

0xa5dd,	// (0x0004223a) cell_sctrl_middle_pane_cp01_ParamLimits

0xa5dd,	// (0x0004223a) cell_sctrl_middle_pane_cp01

0xa5ee,	// (0x0004224b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa5ee,	// (0x0004224b) cell_sctrl_middle_pane_cp01_g1

0xe743,	// (0x000463a0) main_call4_pane

0xa5fb,	// (0x00042258) aid_size_button_call4_ParamLimits

0xa5fb,	// (0x00042258) aid_size_button_call4

0xa62b,	// (0x00042288) call4_windows_pane_ParamLimits

0xa62b,	// (0x00042288) call4_windows_pane

0xa645,	// (0x000422a2) grid_call4_button_pane_ParamLimits

0xa645,	// (0x000422a2) grid_call4_button_pane

0x304b,	// (0x0003aca8) call4_windows_conf_pane

0x3062,	// (0x0003acbf) popup_call4_audio_first_window_ParamLimits

0x3062,	// (0x0003acbf) popup_call4_audio_first_window

0x30ae,	// (0x0003ad0b) popup_call4_audio_second_window_ParamLimits

0x30ae,	// (0x0003ad0b) popup_call4_audio_second_window

0x30c2,	// (0x0003ad1f) popup_call4_audio_wait_window_ParamLimits

0x30c2,	// (0x0003ad1f) popup_call4_audio_wait_window

0xa669,	// (0x000422c6) cell_call4_button_pane_ParamLimits

0xa669,	// (0x000422c6) cell_call4_button_pane

0xa68e,	// (0x000422eb) bg_button_pane_cp09_ParamLimits

0xa68e,	// (0x000422eb) bg_button_pane_cp09

0xa69a,	// (0x000422f7) cell_call4_button_pane_g1_ParamLimits

0xa69a,	// (0x000422f7) cell_call4_button_pane_g1

0xa6a7,	// (0x00042304) cell_call4_button_pane_t1_ParamLimits

0xa6a7,	// (0x00042304) cell_call4_button_pane_t1

0x310a,	// (0x0003ad67) popup_call4_audio_conf_window_ParamLimits

0x310a,	// (0x0003ad67) popup_call4_audio_conf_window

0x9965,	// (0x000415c2) mup3_progress_pane_t1_ParamLimits

0x9984,	// (0x000415e1) mup3_progress_pane_t2_ParamLimits

0x29fa,	// (0x0003a657) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000473f9) mup3_progress_pane_t_ParamLimits

0x2a17,	// (0x0003a674) mup_progress_pane_cp03_ParamLimits

0x9e93,	// (0x00041af0) mup3_control_keys_pane_g4_copy1

0xa382,	// (0x00041fdf) mp4_rocker2_pane_ParamLimits

0xa382,	// (0x00041fdf) mp4_rocker2_pane

0x3126,	// (0x0003ad83) mp4_rocker2_pane_g1

0x311e,	// (0x0003ad7b) mp4_rocker2_pane_g2

0xa6b9,	// (0x00042316) mp4_rocker2_pane_g3

0xa6c1,	// (0x0004231e) mp4_rocker2_pane_g4

0xa6c9,	// (0x00042326) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0004752e) mp4_rocker2_pane_g

0xe743,	// (0x000463a0) main_camera4_pane

0xe743,	// (0x000463a0) main_video4_pane

0xa0e7,	// (0x00041d44) main_video_tele_dialer_pane_t1_ParamLimits

0xa0e7,	// (0x00041d44) main_video_tele_dialer_pane_t1

0xa0f9,	// (0x00041d56) main_video_tele_dialer_pane_t2_ParamLimits

0xa0f9,	// (0x00041d56) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000474e8) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000474e8) main_video_tele_dialer_pane_t

0xa6e9,	// (0x00042346) cam4_autofocus_pane_ParamLimits

0xa6e9,	// (0x00042346) cam4_autofocus_pane

0xa703,	// (0x00042360) cam4_image_uncrop_pane_ParamLimits

0xa703,	// (0x00042360) cam4_image_uncrop_pane

0xa71a,	// (0x00042377) cam4_indicators_pane_ParamLimits

0xa71a,	// (0x00042377) cam4_indicators_pane

0xa736,	// (0x00042393) main_camera4_pane_g1_ParamLimits

0xa736,	// (0x00042393) main_camera4_pane_g1

0xa742,	// (0x0004239f) main_camera4_pane_g2_ParamLimits

0xa742,	// (0x0004239f) main_camera4_pane_g2

0xa742,	// (0x0004239f) main_camera4_pane_g3_ParamLimits

0xa742,	// (0x0004239f) main_camera4_pane_g3

0xa74e,	// (0x000423ab) main_camera4_pane_g4_ParamLimits

0xa74e,	// (0x000423ab) main_camera4_pane_g4

0xa75a,	// (0x000423b7) main_camera4_pane_g5_ParamLimits

0xa75a,	// (0x000423b7) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x00047539) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x00047539) main_camera4_pane_g

0xa774,	// (0x000423d1) main_camera4_pane_t1_ParamLimits

0xa774,	// (0x000423d1) main_camera4_pane_t1

0x2953,	// (0x0003a5b0) bg_tb_trans_pane_cp06

0xa7c4,	// (0x00042421) cam4_indicators_pane_g1

0xa7d5,	// (0x00042432) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x00047554) cam4_indicators_pane_g

0xa7f3,	// (0x00042450) cam4_indicators_pane_t1

0xa81d,	// (0x0004247a) main_video4_pane_g1_ParamLimits

0xa81d,	// (0x0004247a) main_video4_pane_g1

0xa829,	// (0x00042486) main_video4_pane_g2_ParamLimits

0xa829,	// (0x00042486) main_video4_pane_g2

0xa835,	// (0x00042492) main_video4_pane_g3_ParamLimits

0xa835,	// (0x00042492) main_video4_pane_g3

0xa841,	// (0x0004249e) main_video4_pane_g4_ParamLimits

0xa841,	// (0x0004249e) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0004755b) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0004755b) main_video4_pane_g

0xa861,	// (0x000424be) vid4_indicators_pane_ParamLimits

0xa861,	// (0x000424be) vid4_indicators_pane

0xa880,	// (0x000424dd) video4_image_uncrop_cif_pane_ParamLimits

0xa880,	// (0x000424dd) video4_image_uncrop_cif_pane

0xa88f,	// (0x000424ec) video4_image_uncrop_nhd_pane_ParamLimits

0xa88f,	// (0x000424ec) video4_image_uncrop_nhd_pane

0xa703,	// (0x00042360) video4_image_uncrop_vga_pane_ParamLimits

0xa703,	// (0x00042360) video4_image_uncrop_vga_pane

0x0c9d,	// (0x000388fa) bg_tb_trans_pane_cp07

0xa8a6,	// (0x00042503) vid4_indicators_pane_g1

0xa8ba,	// (0x00042517) vid4_indicators_pane_g2

0xa8ce,	// (0x0004252b) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x00047566) vid4_indicators_pane_g

0xa8fd,	// (0x0004255a) vid4_indicators_pane_t1

0xa914,	// (0x00042571) cam4_autofocus_pane_g1

0xa91c,	// (0x00042579) cam4_autofocus_pane_g2

0xa924,	// (0x00042581) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x00047571) cam4_autofocus_pane_g

0xa92c,	// (0x00042589) cam4_autofocus_pane_g3_copy1

0xa119,	// (0x00041d76) video_down_pane_cp_t1

0xa127,	// (0x00041d84) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000474ed) video_down_pane_cp_t

0x327e,	// (0x0003aedb) popup_vitu2_window_ParamLimits

0x327e,	// (0x0003aedb) popup_vitu2_window

0xa934,	// (0x00042591) aid_size_cell2_itu2_ParamLimits

0xa934,	// (0x00042591) aid_size_cell2_itu2

0xa956,	// (0x000425b3) aid_size_cell_itu2_ParamLimits

0xa956,	// (0x000425b3) aid_size_cell_itu2

0x3270,	// (0x0003aecd) bg_popup_window_pane_cp09_ParamLimits

0x3270,	// (0x0003aecd) bg_popup_window_pane_cp09

0xa99a,	// (0x000425f7) field_vitu2_entry_pane_ParamLimits

0xa99a,	// (0x000425f7) field_vitu2_entry_pane

0xa9ba,	// (0x00042617) grid_vitu2_function_pane_ParamLimits

0xa9ba,	// (0x00042617) grid_vitu2_function_pane

0xa9fe,	// (0x0004265b) grid_vitu2_itu_pane_ParamLimits

0xa9fe,	// (0x0004265b) grid_vitu2_itu_pane

0xaa7a,	// (0x000426d7) cell_vitu2_itu_pane_ParamLimits

0xaa7a,	// (0x000426d7) cell_vitu2_itu_pane

0xaa93,	// (0x000426f0) cell_vitu2_function_pane_ParamLimits

0xaa93,	// (0x000426f0) cell_vitu2_function_pane

0x312e,	// (0x0003ad8b) bg_popup_call_pane_cp08_ParamLimits

0x312e,	// (0x0003ad8b) bg_popup_call_pane_cp08

0x3145,	// (0x0003ada2) field_vitu2_entry_pane_g1

0x3151,	// (0x0003adae) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x00047578) field_vitu2_entry_pane_g

0x465e,	// (0x0003c2bb) field_vitu2_entry_pane_t1_ParamLimits

0x465e,	// (0x0003c2bb) field_vitu2_entry_pane_t1

0x4690,	// (0x0003c2ed) field_vitu2_entry_pane_t2_ParamLimits

0x4690,	// (0x0003c2ed) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0004757f) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0004757f) field_vitu2_entry_pane_t

0xaad4,	// (0x00042731) bg_button_pane_cp010_ParamLimits

0xaad4,	// (0x00042731) bg_button_pane_cp010

0xaae2,	// (0x0004273f) cell_vitu2_itu_pane_g1

0xab02,	// (0x0004275f) cell_vitu2_itu_pane_t1_ParamLimits

0xab02,	// (0x0004275f) cell_vitu2_itu_pane_t1

0x46ad,	// (0x0003c30a) cell_vitu2_itu_pane_t2_ParamLimits

0x46ad,	// (0x0003c30a) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x00047589) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x00047589) cell_vitu2_itu_pane_t

0x0c9d,	// (0x000388fa) bg_button_pane_cp011

0xab4e,	// (0x000427ab) cell_vitu2_function_pane_g1

0xe743,	// (0x000463a0) main_myfav_hc_pane

0xa5be,	// (0x0004221b) popup_image3_note_pane_ParamLimits

0xa5be,	// (0x0004221b) popup_image3_note_pane

0xa5cc,	// (0x00042229) popup_image3_tool_bar_pane_ParamLimits

0xa5cc,	// (0x00042229) popup_image3_tool_bar_pane

0x4723,	// (0x0003c380) cell_vitu2_itu_pane_t3_ParamLimits

0x4723,	// (0x0003c380) cell_vitu2_itu_pane_t3

0xe743,	// (0x000463a0) bg_popup_trans_pane

0x3190,	// (0x0003aded) grid_image3_tool_bar_pane

0x319a,	// (0x0003adf7) bg_popup_trans_pane_g1

0x0639,	// (0x00038296) bg_popup_trans_pane_g2

0x31a2,	// (0x0003adff) bg_popup_trans_pane_g3

0x31aa,	// (0x0003ae07) bg_popup_trans_pane_g4

0x31b2,	// (0x0003ae0f) bg_popup_trans_pane_g5

0x31ba,	// (0x0003ae17) bg_popup_trans_pane_g6

0x31c2,	// (0x0003ae1f) bg_popup_trans_pane_g7

0x31ca,	// (0x0003ae27) bg_popup_trans_pane_g8

0x0619,	// (0x00038276) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x00047590) bg_popup_trans_pane_g

0x31d2,	// (0x0003ae2f) cell_image3_tool_bar_pane_ParamLimits

0x31d2,	// (0x0003ae2f) cell_image3_tool_bar_pane

0x26f0,	// (0x0003a34d) cell_image3_tool_bar_pane_g1

0xe743,	// (0x000463a0) bg_popup_trans_pane_cp1

0x31e6,	// (0x0003ae43) popup_image3_note_pane_t1

0x31f4,	// (0x0003ae51) popup_image3_note_pane_t2

0x3202,	// (0x0003ae5f) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000475a3) popup_image3_note_pane_t

0x3210,	// (0x0003ae6d) popup_image3_note_pane_t3_copy1

0xab62,	// (0x000427bf) bg_myfav_hc_instruction_pane_ParamLimits

0xab62,	// (0x000427bf) bg_myfav_hc_instruction_pane

0xab7a,	// (0x000427d7) cell_myfav_contact_pane_ParamLimits

0xab7a,	// (0x000427d7) cell_myfav_contact_pane

0xab94,	// (0x000427f1) cell_myfav_contact_pane_cp1_ParamLimits

0xab94,	// (0x000427f1) cell_myfav_contact_pane_cp1

0xabac,	// (0x00042809) cell_myfav_contact_pane_cp2_ParamLimits

0xabac,	// (0x00042809) cell_myfav_contact_pane_cp2

0xabc4,	// (0x00042821) cell_myfav_contact_pane_cp3_ParamLimits

0xabc4,	// (0x00042821) cell_myfav_contact_pane_cp3

0xabdb,	// (0x00042838) cell_myfav_contact_pane_cp4_ParamLimits

0xabdb,	// (0x00042838) cell_myfav_contact_pane_cp4

0xabf1,	// (0x0004284e) cell_myfav_contact_pane_cp5_ParamLimits

0xabf1,	// (0x0004284e) cell_myfav_contact_pane_cp5

0xac05,	// (0x00042862) cell_myfav_contact_pane_cp6_ParamLimits

0xac05,	// (0x00042862) cell_myfav_contact_pane_cp6

0xac19,	// (0x00042876) cell_myfav_contact_pane_cp7_ParamLimits

0xac19,	// (0x00042876) cell_myfav_contact_pane_cp7

0x321e,	// (0x0003ae7b) listscroll_gen_pane_cp05

0xac31,	// (0x0004288e) main_myfav_hc_pane_g1_ParamLimits

0xac31,	// (0x0004288e) main_myfav_hc_pane_g1

0xac47,	// (0x000428a4) main_myfav_hc_pane_g2_ParamLimits

0xac47,	// (0x000428a4) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000475aa) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000475aa) main_myfav_hc_pane_g

0xac75,	// (0x000428d2) main_myfav_hc_pane_t1_ParamLimits

0xac75,	// (0x000428d2) main_myfav_hc_pane_t1

0x3227,	// (0x0003ae84) main_myfav_hc_pane_t2_ParamLimits

0x3227,	// (0x0003ae84) main_myfav_hc_pane_t2

0x3239,	// (0x0003ae96) main_myfav_hc_pane_t3_ParamLimits

0x3239,	// (0x0003ae96) main_myfav_hc_pane_t3

0xac8c,	// (0x000428e9) main_myfav_hc_pane_t4_ParamLimits

0xac8c,	// (0x000428e9) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000475b1) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000475b1) main_myfav_hc_pane_t

0x26f0,	// (0x0003a34d) bg_myfav_hc_instruction_pane_g1

0x324b,	// (0x0003aea8) cell_myfav_contact_pane_g1_ParamLimits

0x324b,	// (0x0003aea8) cell_myfav_contact_pane_g1

0x324b,	// (0x0003aea8) cell_myfav_contact_pane_g2_ParamLimits

0x324b,	// (0x0003aea8) cell_myfav_contact_pane_g2

0x3257,	// (0x0003aeb4) cell_myfav_contact_pane_g3_ParamLimits

0x3257,	// (0x0003aeb4) cell_myfav_contact_pane_g3

0x29e4,	// (0x0003a641) cell_myfav_contact_pane_g4_ParamLimits

0x29e4,	// (0x0003a641) cell_myfav_contact_pane_g4

0x3264,	// (0x0003aec1) cell_myfav_contact_pane_g5_ParamLimits

0x3264,	// (0x0003aec1) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000475bc) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000475bc) cell_myfav_contact_pane_g

0xac5d,	// (0x000428ba) main_myfav_hc_pane_g3_ParamLimits

0xac5d,	// (0x000428ba) main_myfav_hc_pane_g3

0x5852,	// (0x0003d4af) popup_adpt_find_window

0xacb6,	// (0x00042913) afind_page_pane_ParamLimits

0xacb6,	// (0x00042913) afind_page_pane

0xacc3,	// (0x00042920) aid_size_cell_afind_ParamLimits

0xacc3,	// (0x00042920) aid_size_cell_afind

0xacdd,	// (0x0004293a) bg_popup_sub_pane_cp09_ParamLimits

0xacdd,	// (0x0004293a) bg_popup_sub_pane_cp09

0xacea,	// (0x00042947) find_pane_cp01_ParamLimits

0xacea,	// (0x00042947) find_pane_cp01

0x328c,	// (0x0003aee9) grid_afind_control_pane_ParamLimits

0x328c,	// (0x0003aee9) grid_afind_control_pane

0xacf7,	// (0x00042954) grid_afind_pane_ParamLimits

0xacf7,	// (0x00042954) grid_afind_pane

0xad13,	// (0x00042970) cell_afind_pane_ParamLimits

0xad13,	// (0x00042970) cell_afind_pane

0x26f0,	// (0x0003a34d) afind_page_pane_g1

0xad5b,	// (0x000429b8) afind_page_pane_g2

0xad64,	// (0x000429c1) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000475c7) afind_page_pane_g

0xad6d,	// (0x000429ca) afind_page_pane_t1

0x32a0,	// (0x0003aefd) cell_afind_grid_control_pane_ParamLimits

0x32a0,	// (0x0003aefd) cell_afind_grid_control_pane

0x303f,	// (0x0003ac9c) bg_button_pane_cp69_ParamLimits

0x303f,	// (0x0003ac9c) bg_button_pane_cp69

0xad8d,	// (0x000429ea) cell_afind_pane_g1_ParamLimits

0xad8d,	// (0x000429ea) cell_afind_pane_g1

0xad9a,	// (0x000429f7) cell_afind_pane_t1_ParamLimits

0xad9a,	// (0x000429f7) cell_afind_pane_t1

0x0432,	// (0x0003808f) bg_button_pane_cp72

0x32af,	// (0x0003af0c) cell_afind_grid_control_pane_g1

0x83ec,	// (0x00040049) aid_image_placing_area_ParamLimits

0x83ec,	// (0x00040049) aid_image_placing_area

0x2d0d,	// (0x0003a96a) field_vitu_entry_pane_g1_ParamLimits

0x2d0d,	// (0x0003a96a) field_vitu_entry_pane_g1

0x2d19,	// (0x0003a976) field_vitu_entry_pane_g2_ParamLimits

0x2d19,	// (0x0003a976) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x00047478) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x00047478) field_vitu_entry_pane_g

0x9f1b,	// (0x00041b78) cell_vitu_itu_pane_g1_ParamLimits

0x9f5d,	// (0x00041bba) cell_vitu_itu_pane_t3_ParamLimits

0x9f5d,	// (0x00041bba) cell_vitu_itu_pane_t3

0x2fef,	// (0x0003ac4c) mp4_progress_pane_t1_ParamLimits

0x3008,	// (0x0003ac65) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0004750d) mp4_progress_pane_t_ParamLimits

0x3021,	// (0x0003ac7e) mup_progress_pane_cp04_ParamLimits

0xaca0,	// (0x000428fd) main_myfav_hc_pane_t5_ParamLimits

0xaca0,	// (0x000428fd) main_myfav_hc_pane_t5

0x56e0,	// (0x0003d33d) aid_zoom_text_primary

0x5852,	// (0x0003d4af) popup_adpt_find_window_ParamLimits

0x0c9d,	// (0x000388fa) main_cam_set_pane

0xa728,	// (0x00042385) cam4_zoom_pane_ParamLimits

0xa728,	// (0x00042385) cam4_zoom_pane

0xadac,	// (0x00042a09) main_cam_set_pane_g1_ParamLimits

0xadac,	// (0x00042a09) main_cam_set_pane_g1

0xadba,	// (0x00042a17) main_cam_set_pane_g2_ParamLimits

0xadba,	// (0x00042a17) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000475ce) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000475ce) main_cam_set_pane_g

0xadc6,	// (0x00042a23) main_cam_set_pane_t1_ParamLimits

0xadc6,	// (0x00042a23) main_cam_set_pane_t1

0xade2,	// (0x00042a3f) main_cset_listscroll_pane_ParamLimits

0xade2,	// (0x00042a3f) main_cset_listscroll_pane

0xae0d,	// (0x00042a6a) main_cset_slider_pane_ParamLimits

0xae0d,	// (0x00042a6a) main_cset_slider_pane

0x32c0,	// (0x0003af1d) main_cset_list_pane_ParamLimits

0x32c0,	// (0x0003af1d) main_cset_list_pane

0x32d0,	// (0x0003af2d) scroll_pane_cp028

0xae2c,	// (0x00042a89) aid_area_touch_slider

0xae48,	// (0x00042aa5) cset_slider_pane

0xae72,	// (0x00042acf) main_cset_slider_pane_g1

0xae87,	// (0x00042ae4) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000475d3) main_cset_slider_pane_g

0x3309,	// (0x0003af66) main_cset_slider_pane_t1

0xaf49,	// (0x00042ba6) main_cset_slider_pane_t2

0xaf63,	// (0x00042bc0) main_cset_slider_pane_t3

0xaf7d,	// (0x00042bda) main_cset_slider_pane_t4

0xaf97,	// (0x00042bf4) main_cset_slider_pane_t5

0xafb5,	// (0x00042c12) main_cset_slider_pane_t6

0xafcc,	// (0x00042c29) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000475f8) main_cset_slider_pane_t

0xb0d8,	// (0x00042d35) cset_list_set_pane_ParamLimits

0xb0d8,	// (0x00042d35) cset_list_set_pane

0xb0ee,	// (0x00042d4b) aid_position_infowindow_above

0xb0f6,	// (0x00042d53) aid_position_infowindow_below

0x4775,	// (0x0003c3d2) cset_list_set_pane_g1_ParamLimits

0x4775,	// (0x0003c3d2) cset_list_set_pane_g1

0x4781,	// (0x0003c3de) cset_list_set_pane_g3_ParamLimits

0x4781,	// (0x0003c3de) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x00047617) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x00047617) cset_list_set_pane_g

0x4790,	// (0x0003c3ed) cset_list_set_pane_t1_ParamLimits

0x4790,	// (0x0003c3ed) cset_list_set_pane_t1

0x0c9d,	// (0x000388fa) list_highlight_pane_cp021_ParamLimits

0x0c9d,	// (0x000388fa) list_highlight_pane_cp021

0x0f90,	// (0x00038bed) cset_slider_pane_g1

0x0fa2,	// (0x00038bff) cset_slider_pane_g2

0x0f99,	// (0x00038bf6) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0004761c) cset_slider_pane_g

0xb0fe,	// (0x00042d5b) aid_area_touch_cam4_zoom

0xb106,	// (0x00042d63) cam4_zoom_cont_pane

0xb10e,	// (0x00042d6b) cam4_zoom_pane_g1

0xb116,	// (0x00042d73) cam4_zoom_pane_g2

0xb11e,	// (0x00042d7b) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x00047623) cam4_zoom_pane_g

0x3412,	// (0x0003b06f) cam4_zoom_cont_pane_g1

0x341b,	// (0x0003b078) cam4_zoom_cont_pane_g2

0x3424,	// (0x0003b081) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0004762a) cam4_zoom_cont_pane_g

0xa615,	// (0x00042272) call4_image_pane_ParamLimits

0xa615,	// (0x00042272) call4_image_pane

0x304b,	// (0x0003aca8) call4_windows_conf_pane_ParamLimits

0x308c,	// (0x0003ace9) popup_call4_audio_in_window_ParamLimits

0x308c,	// (0x0003ace9) popup_call4_audio_in_window

0xe743,	// (0x000463a0) bg_popup_call2_act_pane_cp02

0x3102,	// (0x0003ad5f) call4_list_conf_pane

0x26f0,	// (0x0003a34d) call4_image_pane_g1

0x26f0,	// (0x0003a34d) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x00047339) call4_image_pane_g

0x33d9,	// (0x0003b036) list_single_graphic_popup_conf4_pane_ParamLimits

0x33d9,	// (0x0003b036) list_single_graphic_popup_conf4_pane

0xe743,	// (0x000463a0) list_highlight_pane_cp022

0x33ec,	// (0x0003b049) list_single_graphic_popup_conf4_pane_g1

0x0b53,	// (0x000387b0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x00047631) list_single_graphic_popup_conf4_pane_g

0x33f4,	// (0x0003b051) list_single_graphic_popup_conf4_pane_t1

0x67fb,	// (0x0003e458) popup_vtel_slider_window_ParamLimits

0x67fb,	// (0x0003e458) popup_vtel_slider_window

0x302d,	// (0x0003ac8a) dialer2_ne_pane_t2_ParamLimits

0x302d,	// (0x0003ac8a) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x00047512) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x00047512) dialer2_ne_pane_t

0x0c9d,	// (0x000388fa) bg_popup_sub_pane_cp010_ParamLimits

0x0c9d,	// (0x000388fa) bg_popup_sub_pane_cp010

0xb126,	// (0x00042d83) popup_vtel_slider_window_g1_ParamLimits

0xb126,	// (0x00042d83) popup_vtel_slider_window_g1

0xb132,	// (0x00042d8f) popup_vtel_slider_window_g2_ParamLimits

0xb132,	// (0x00042d8f) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x00047636) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x00047636) popup_vtel_slider_window_g

0xb17a,	// (0x00042dd7) vtel_slider_pane_ParamLimits

0xb17a,	// (0x00042dd7) vtel_slider_pane

0xb189,	// (0x00042de6) vtel_slider_pane_g1_ParamLimits

0xb189,	// (0x00042de6) vtel_slider_pane_g1

0xb196,	// (0x00042df3) vtel_slider_pane_g2_ParamLimits

0xb196,	// (0x00042df3) vtel_slider_pane_g2

0xb1a3,	// (0x00042e00) vtel_slider_pane_g3_ParamLimits

0xb1a3,	// (0x00042e00) vtel_slider_pane_g3

0xb189,	// (0x00042de6) vtel_slider_pane_g4_ParamLimits

0xb189,	// (0x00042de6) vtel_slider_pane_g4

0xb1b0,	// (0x00042e0d) vtel_slider_pane_g5_ParamLimits

0xb1b0,	// (0x00042e0d) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0004763f) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0004763f) vtel_slider_pane_g

0x0c9d,	// (0x000388fa) main_gallery2_pane

0xa97c,	// (0x000425d9) aid_size_row_itut2_dropdow_list_ParamLimits

0xa97c,	// (0x000425d9) aid_size_row_itut2_dropdow_list

0xa9dc,	// (0x00042639) grid_vitu2_function_top_pane_ParamLimits

0xa9dc,	// (0x00042639) grid_vitu2_function_top_pane

0xaa36,	// (0x00042693) popup_vitu2_dropdown_list_window_ParamLimits

0xaa36,	// (0x00042693) popup_vitu2_dropdown_list_window

0xaa56,	// (0x000426b3) popup_vitu2_match_list_window

0xb1bd,	// (0x00042e1a) cell_vitu2_function_top_pane_ParamLimits

0xb1bd,	// (0x00042e1a) cell_vitu2_function_top_pane

0xb1d7,	// (0x00042e34) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb1d7,	// (0x00042e34) cell_vitu2_function_top_pane_cp01

0xb1f3,	// (0x00042e50) cell_vitu2_function_top_wide_pane_ParamLimits

0xb1f3,	// (0x00042e50) cell_vitu2_function_top_wide_pane

0x0c9d,	// (0x000388fa) bg_button_pane_cp012

0xb20f,	// (0x00042e6c) cell_vitu2_function_top_pane_g1

0xb223,	// (0x00042e80) bg_button_pane_cp013_ParamLimits

0xb223,	// (0x00042e80) bg_button_pane_cp013

0xb23f,	// (0x00042e9c) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb23f,	// (0x00042e9c) cell_vitu2_function_top_wide_pane_g1

0x327e,	// (0x0003aedb) bg_popup_sub_pane_cp20

0xb257,	// (0x00042eb4) list_vitu2_match_list_pane

0x319a,	// (0x0003adf7) bg_popup_sub_pane_cp20_g1

0x31a2,	// (0x0003adff) bg_popup_sub_pane_cp20_g2

0x0639,	// (0x00038296) bg_popup_sub_pane_cp20_g3

0x31aa,	// (0x0003ae07) bg_popup_sub_pane_cp20_g4

0x0619,	// (0x00038276) bg_popup_sub_pane_cp20_g5

0x340a,	// (0x0003b067) bg_popup_sub_pane_cp20_g6

0x31ba,	// (0x0003ae17) bg_popup_sub_pane_cp20_g7

0x31c2,	// (0x0003ae1f) bg_popup_sub_pane_cp20_g8

0x31ca,	// (0x0003ae27) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0004764a) bg_popup_sub_pane_cp20_g

0xb26f,	// (0x00042ecc) list_vitu2_match_list_item_pane_ParamLimits

0xb26f,	// (0x00042ecc) list_vitu2_match_list_item_pane

0xb281,	// (0x00042ede) list_vitu2_match_list_item_pane_t1

0xe743,	// (0x000463a0) bg_popup_sub_pane_cp21

0x0a7b,	// (0x000386d8) grid_vitu2_dropdown_list_pane

0xb28f,	// (0x00042eec) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb28f,	// (0x00042eec) cell_vitu2_dropdown_list_char_pane

0xb2b0,	// (0x00042f0d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb2b0,	// (0x00042f0d) cell_vitu2_dropdown_list_ctrl_pane

0xd45f,	// (0x000450bc) cell_vitu2_dropdown_list_char_pane_g1

0xd468,	// (0x000450c5) cell_vitu2_dropdown_list_char_pane_g2

0xd471,	// (0x000450ce) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x00047667) cell_vitu2_dropdown_list_char_pane_g

0xb2dc,	// (0x00042f39) cell_vitu2_dropdown_list_char_pane_t1

0xb2ea,	// (0x00042f47) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb2ea,	// (0x00042f47) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb2fa,	// (0x00042f57) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb2fa,	// (0x00042f57) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb30b,	// (0x00042f68) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb30b,	// (0x00042f68) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb31b,	// (0x00042f78) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb31b,	// (0x00042f78) cell_vitu2_dropdown_list_ctrl_pane_g4

0x2953,	// (0x0003a5b0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x2953,	// (0x0003a5b0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0004766e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0004766e) cell_vitu2_dropdown_list_ctrl_pane_g

0xb337,	// (0x00042f94) aid_size_cell_gallery2_ParamLimits

0xb337,	// (0x00042f94) aid_size_cell_gallery2

0xb351,	// (0x00042fae) grid_gallery2_pane_ParamLimits

0xb351,	// (0x00042fae) grid_gallery2_pane

0x9da4,	// (0x00041a01) scroll_pane_cp029_ParamLimits

0x9da4,	// (0x00041a01) scroll_pane_cp029

0xb368,	// (0x00042fc5) cell_gallery2_pane_ParamLimits

0xb368,	// (0x00042fc5) cell_gallery2_pane

0xd47a,	// (0x000450d7) cell_gallery2_pane_g2

0xd482,	// (0x000450df) cell_gallery2_pane_g3

0xd48a,	// (0x000450e7) cell_gallery2_pane_g4

0xd492,	// (0x000450ef) cell_gallery2_pane_g5

0x03e0,	// (0x0003803d) grid_highlight_pane_cp10

0xaa56,	// (0x000426b3) popup_vitu2_match_list_window_ParamLimits

0xaa6a,	// (0x000426c7) popup_vitu2_query_window_ParamLimits

0xaa6a,	// (0x000426c7) popup_vitu2_query_window

0xe743,	// (0x000463a0) bg_vitu2_candi_button_pane

0xd45f,	// (0x000450bc) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd468,	// (0x000450c5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd471,	// (0x000450ce) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x47fb,	// (0x0003c458) bg_button_pane_cp015

0xb3ba,	// (0x00043017) bg_button_pane_cp016

0xb3cd,	// (0x0004302a) bg_button_pane_cp017

0x22d3,	// (0x00039f30) bg_popup_sub_pane_cp22

0xd49a,	// (0x000450f7) popup_vitu2_query_window_g1

0x482e,	// (0x0003c48b) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x00047679) popup_vitu2_query_window_g

0x484b,	// (0x0003c4a8) popup_vitu2_query_window_t1_ParamLimits

0x484b,	// (0x0003c4a8) popup_vitu2_query_window_t1

0x487e,	// (0x0003c4db) popup_vitu2_query_window_t2_ParamLimits

0x487e,	// (0x0003c4db) popup_vitu2_query_window_t2

0x4890,	// (0x0003c4ed) popup_vitu2_query_window_t3_ParamLimits

0x4890,	// (0x0003c4ed) popup_vitu2_query_window_t3

0xb3f1,	// (0x0004304e) popup_vitu2_query_window_t4_ParamLimits

0xb3f1,	// (0x0004304e) popup_vitu2_query_window_t4

0xb412,	// (0x0004306f) popup_vitu2_query_window_t5_ParamLimits

0xb412,	// (0x0004306f) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x00047680) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x00047680) popup_vitu2_query_window_t

0x32b8,	// (0x0003af15) main_cset_text_pane

0xae2c,	// (0x00042a89) aid_area_touch_slider_ParamLimits

0xae48,	// (0x00042aa5) cset_slider_pane_ParamLimits

0xae72,	// (0x00042acf) main_cset_slider_pane_g1_ParamLimits

0xae87,	// (0x00042ae4) main_cset_slider_pane_g2_ParamLimits

0x32d9,	// (0x0003af36) main_cset_slider_pane_g3_ParamLimits

0x32d9,	// (0x0003af36) main_cset_slider_pane_g3

0xae9c,	// (0x00042af9) main_cset_slider_pane_g4_ParamLimits

0xae9c,	// (0x00042af9) main_cset_slider_pane_g4

0xaeab,	// (0x00042b08) main_cset_slider_pane_g5_ParamLimits

0xaeab,	// (0x00042b08) main_cset_slider_pane_g5

0xaeb9,	// (0x00042b16) main_cset_slider_pane_g6_ParamLimits

0xaeb9,	// (0x00042b16) main_cset_slider_pane_g6

0xf976,	// (0x000475d3) main_cset_slider_pane_g_ParamLimits

0x3309,	// (0x0003af66) main_cset_slider_pane_t1_ParamLimits

0xaf49,	// (0x00042ba6) main_cset_slider_pane_t2_ParamLimits

0xaf63,	// (0x00042bc0) main_cset_slider_pane_t3_ParamLimits

0xaf7d,	// (0x00042bda) main_cset_slider_pane_t4_ParamLimits

0xaf97,	// (0x00042bf4) main_cset_slider_pane_t5_ParamLimits

0xafb5,	// (0x00042c12) main_cset_slider_pane_t6_ParamLimits

0xafcc,	// (0x00042c29) main_cset_slider_pane_t7_ParamLimits

0xaffa,	// (0x00042c57) main_cset_slider_pane_t8_ParamLimits

0xaffa,	// (0x00042c57) main_cset_slider_pane_t8

0xb022,	// (0x00042c7f) main_cset_slider_pane_t9_ParamLimits

0xb022,	// (0x00042c7f) main_cset_slider_pane_t9

0xb04a,	// (0x00042ca7) main_cset_slider_pane_t10_ParamLimits

0xb04a,	// (0x00042ca7) main_cset_slider_pane_t10

0xb072,	// (0x00042ccf) main_cset_slider_pane_t11_ParamLimits

0xb072,	// (0x00042ccf) main_cset_slider_pane_t11

0xb09c,	// (0x00042cf9) main_cset_slider_pane_t12_ParamLimits

0xb09c,	// (0x00042cf9) main_cset_slider_pane_t12

0xb0b9,	// (0x00042d16) main_cset_slider_pane_t13_ParamLimits

0xb0b9,	// (0x00042d16) main_cset_slider_pane_t13

0xf99b,	// (0x000475f8) main_cset_slider_pane_t_ParamLimits

0xe743,	// (0x000463a0) bg_popup_sub_pane_cp011

0xd4a6,	// (0x00045103) main_cset_text_pane_g1

0xd4ae,	// (0x0004510b) main_cset_text_pane_t1

0xd4bc,	// (0x00045119) main_cset_text_pane_t2

0xd4ca,	// (0x00045127) main_cset_text_pane_t3

0xd4d8,	// (0x00045135) main_cset_text_pane_t4

0xd4e6,	// (0x00045143) main_cset_text_pane_t5

0xd4f4,	// (0x00045151) main_cset_text_pane_t6

0xd502,	// (0x0004515f) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0004768f) main_cset_text_pane_t

0xe743,	// (0x000463a0) main_cam4_burst_pane

0xe743,	// (0x000463a0) main_cam5_pane

0xad7b,	// (0x000429d8) bg_button_pane_cp019

0xad84,	// (0x000429e1) bg_button_pane_cp020

0x32e5,	// (0x0003af42) main_cset_slider_pane_g7_ParamLimits

0x32e5,	// (0x0003af42) main_cset_slider_pane_g7

0x32f1,	// (0x0003af4e) main_cset_slider_pane_g8_ParamLimits

0x32f1,	// (0x0003af4e) main_cset_slider_pane_g8

0xaecd,	// (0x00042b2a) main_cset_slider_pane_g9_ParamLimits

0xaecd,	// (0x00042b2a) main_cset_slider_pane_g9

0xaed9,	// (0x00042b36) main_cset_slider_pane_g10_ParamLimits

0xaed9,	// (0x00042b36) main_cset_slider_pane_g10

0xaee5,	// (0x00042b42) main_cset_slider_pane_g11_ParamLimits

0xaee5,	// (0x00042b42) main_cset_slider_pane_g11

0xaef1,	// (0x00042b4e) main_cset_slider_pane_g12_ParamLimits

0xaef1,	// (0x00042b4e) main_cset_slider_pane_g12

0xaefd,	// (0x00042b5a) main_cset_slider_pane_g13_ParamLimits

0xaefd,	// (0x00042b5a) main_cset_slider_pane_g13

0xaf09,	// (0x00042b66) main_cset_slider_pane_g14_ParamLimits

0xaf09,	// (0x00042b66) main_cset_slider_pane_g14

0xaf15,	// (0x00042b72) main_cset_slider_pane_g15_ParamLimits

0xaf15,	// (0x00042b72) main_cset_slider_pane_g15

0x3337,	// (0x0003af94) main_cset_slider_pane_t14_ParamLimits

0x3337,	// (0x0003af94) main_cset_slider_pane_t14

0x3370,	// (0x0003afcd) main_cset_slider_pane_t15_ParamLimits

0x3370,	// (0x0003afcd) main_cset_slider_pane_t15

0xb433,	// (0x00043090) aid_cam4_burst_size_cell_ParamLimits

0xb433,	// (0x00043090) aid_cam4_burst_size_cell

0xb44f,	// (0x000430ac) grid_cam4_burst_pane_ParamLimits

0xb44f,	// (0x000430ac) grid_cam4_burst_pane

0xb47f,	// (0x000430dc) linegrid_cam4_burst_pane_ParamLimits

0xb47f,	// (0x000430dc) linegrid_cam4_burst_pane

0xb49f,	// (0x000430fc) scroll_pane_cp30_ParamLimits

0xb49f,	// (0x000430fc) scroll_pane_cp30

0xb4ab,	// (0x00043108) cell_cam4_burst_pane_ParamLimits

0xb4ab,	// (0x00043108) cell_cam4_burst_pane

0xd510,	// (0x0004516d) linegrid_cam4_burst_pane_g1_ParamLimits

0xd510,	// (0x0004516d) linegrid_cam4_burst_pane_g1

0xb4e7,	// (0x00043144) linegrid_cam4_burst_pane_g2_ParamLimits

0xb4e7,	// (0x00043144) linegrid_cam4_burst_pane_g2

0xd51d,	// (0x0004517a) linegrid_cam4_burst_pane_g3_ParamLimits

0xd51d,	// (0x0004517a) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0004769e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0004769e) linegrid_cam4_burst_pane_g

0xb4f8,	// (0x00043155) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb4f8,	// (0x00043155) linegrid_cam4_burst_pane_g3_copy1

0xd52a,	// (0x00045187) linegrid_cam4_burst_pane_g4_ParamLimits

0xd52a,	// (0x00045187) linegrid_cam4_burst_pane_g4

0xb512,	// (0x0004316f) linegrid_cam4_burst_pane_g5_ParamLimits

0xb512,	// (0x0004316f) linegrid_cam4_burst_pane_g5

0xb523,	// (0x00043180) linegrid_cam4_burst_pane_g6_ParamLimits

0xb523,	// (0x00043180) linegrid_cam4_burst_pane_g6

0xd537,	// (0x00045194) linegrid_cam4_burst_pane_g7_ParamLimits

0xd537,	// (0x00045194) linegrid_cam4_burst_pane_g7

0xb534,	// (0x00043191) cell_cam4_burst_pane_g1

0xd550,	// (0x000451ad) main_cam5_pane_t1_ParamLimits

0xd550,	// (0x000451ad) main_cam5_pane_t1

0xd562,	// (0x000451bf) main_cam5_pane_t2_ParamLimits

0xd562,	// (0x000451bf) main_cam5_pane_t2

0xd574,	// (0x000451d1) main_cam5_pane_t3_ParamLimits

0xd574,	// (0x000451d1) main_cam5_pane_t3

0xd586,	// (0x000451e3) main_cam5_pane_t4_ParamLimits

0xd586,	// (0x000451e3) main_cam5_pane_t4

0xd59e,	// (0x000451fb) main_cam5_pane_t5_ParamLimits

0xd59e,	// (0x000451fb) main_cam5_pane_t5

0xd5b2,	// (0x0004520f) main_cam5_pane_t6_ParamLimits

0xd5b2,	// (0x0004520f) main_cam5_pane_t6

0xd5c6,	// (0x00045223) main_cam5_pane_t7_ParamLimits

0xd5c6,	// (0x00045223) main_cam5_pane_t7

0xd5d8,	// (0x00045235) main_cam5_pane_t8_ParamLimits

0xd5d8,	// (0x00045235) main_cam5_pane_t8

0xd5f4,	// (0x00045251) main_cam5_pane_t9_ParamLimits

0xd5f4,	// (0x00045251) main_cam5_pane_t9

0xd606,	// (0x00045263) main_cam5_pane_t10_ParamLimits

0xd606,	// (0x00045263) main_cam5_pane_t10

0xd618,	// (0x00045275) main_cam5_pane_t11_ParamLimits

0xd618,	// (0x00045275) main_cam5_pane_t11

0xd62a,	// (0x00045287) main_cam5_pane_t12_ParamLimits

0xd62a,	// (0x00045287) main_cam5_pane_t12

0xd63f,	// (0x0004529c) main_cam5_pane_t13_ParamLimits

0xd63f,	// (0x0004529c) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000476aa) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000476aa) main_cam5_pane_t

0x5908,	// (0x0003d565) popup_scut_keymap_window_ParamLimits

0x5908,	// (0x0003d565) popup_scut_keymap_window

0xb547,	// (0x000431a4) aid_size_cell_brow_shortcut

0x03e0,	// (0x0003803d) bg_popup_window_pane_cp010

0xb553,	// (0x000431b0) grid_scut_pane

0xb55f,	// (0x000431bc) cell_scut_pane_ParamLimits

0xb55f,	// (0x000431bc) cell_scut_pane

0xb576,	// (0x000431d3) cell_scut_pane_g1

0xd65c,	// (0x000452b9) cell_scut_pane_t1

0xd66b,	// (0x000452c8) cell_scut_pane_t2

0xb57f,	// (0x000431dc) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000476c5) cell_scut_pane_t

0x9584,	// (0x000411e1) main_mup3_pane_g8_ParamLimits

0x9584,	// (0x000411e1) main_mup3_pane_g8

0xa98a,	// (0x000425e7) area_vitu2_query_pane_ParamLimits

0xa98a,	// (0x000425e7) area_vitu2_query_pane

0x480d,	// (0x0003c46a) input_focus_pane_cp08

0xd67a,	// (0x000452d7) area_vitu2_query_pane_g1

0x490e,	// (0x0003c56b) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000476cc) area_vitu2_query_pane_g

0xb58d,	// (0x000431ea) area_vitu2_query_pane_t1_ParamLimits

0xb58d,	// (0x000431ea) area_vitu2_query_pane_t1

0xb5a1,	// (0x000431fe) area_vitu2_query_pane_t2_ParamLimits

0xb5a1,	// (0x000431fe) area_vitu2_query_pane_t2

0x491f,	// (0x0003c57c) area_vitu2_query_pane_t3_ParamLimits

0x491f,	// (0x0003c57c) area_vitu2_query_pane_t3

0x4947,	// (0x0003c5a4) area_vitu2_query_pane_t4_ParamLimits

0x4947,	// (0x0003c5a4) area_vitu2_query_pane_t4

0x496f,	// (0x0003c5cc) area_vitu2_query_pane_t5_ParamLimits

0x496f,	// (0x0003c5cc) area_vitu2_query_pane_t5

0x4997,	// (0x0003c5f4) area_vitu2_query_pane_t6_ParamLimits

0x4997,	// (0x0003c5f4) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000476d1) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000476d1) area_vitu2_query_pane_t

0xb5b5,	// (0x00043212) bg_button_pane_cp018

0xb5c3,	// (0x00043220) bg_button_pane_cp021

0x49e3,	// (0x0003c640) bg_button_pane_cp022

0x49f4,	// (0x0003c651) input_focus_pane_cp09

0x0cab,	// (0x00038908) aid_size_touch_mv_arrow_left

0x0cd4,	// (0x00038931) aid_size_touch_mv_arrow_right

0xaf2d,	// (0x00042b8a) main_cset_slider_pane_g16_ParamLimits

0xaf2d,	// (0x00042b8a) main_cset_slider_pane_g16

0xaf3b,	// (0x00042b98) main_cset_slider_pane_g17_ParamLimits

0xaf3b,	// (0x00042b98) main_cset_slider_pane_g17

0xb534,	// (0x00043191) cell_cam4_burst_pane_g1_ParamLimits

0xe743,	// (0x000463a0) compa_mode_pane

0xb13e,	// (0x00042d9b) popup_vtel_slider_window_g3_ParamLimits

0xb13e,	// (0x00042d9b) popup_vtel_slider_window_g3

0xb152,	// (0x00042daf) popup_vtel_slider_window_g4_ParamLimits

0xb152,	// (0x00042daf) popup_vtel_slider_window_g4

0xb166,	// (0x00042dc3) popup_vtel_slider_window_t1_ParamLimits

0xb166,	// (0x00042dc3) popup_vtel_slider_window_t1

0xe743,	// (0x000463a0) main_cl_pane

0x88fe,	// (0x0004055b) popup_imed_adjust2_window_ParamLimits

0x22d3,	// (0x00039f30) bg_tb_trans_pane_cp05_ParamLimits

0x2c42,	// (0x0003a89f) popup_imed_adjust2_window_g1_ParamLimits

0x2c51,	// (0x0003a8ae) popup_imed_adjust2_window_g2_ParamLimits

0x2c51,	// (0x0003a8ae) popup_imed_adjust2_window_g2

0x2c5d,	// (0x0003a8ba) popup_imed_adjust2_window_g3_ParamLimits

0x2c5d,	// (0x0003a8ba) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0004743c) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0004743c) popup_imed_adjust2_window_g

0x2c69,	// (0x0003a8c6) popup_imed_adjust2_window_t1_ParamLimits

0x2c81,	// (0x0003a8de) slider_imed_adjust_pane_ParamLimits

0x2c95,	// (0x0003a8f2) slider_imed_adjust_pane_g1_ParamLimits

0x2ca5,	// (0x0003a902) slider_imed_adjust_pane_g2_ParamLimits

0x2cb5,	// (0x0003a912) slider_imed_adjust_pane_g3_ParamLimits

0x2cc6,	// (0x0003a923) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x00047443) slider_imed_adjust_pane_g_ParamLimits

0xa6d1,	// (0x0004232e) aid_touch_area_cam4_ParamLimits

0xa6d1,	// (0x0004232e) aid_touch_area_cam4

0xa6e1,	// (0x0004233e) battery_pane_cp01

0xa768,	// (0x000423c5) main_camera4_pane_g6_ParamLimits

0xa768,	// (0x000423c5) main_camera4_pane_g6

0xa786,	// (0x000423e3) main_camera4_pane_t2_ParamLimits

0xa786,	// (0x000423e3) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x00047546) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x00047546) main_camera4_pane_t

0xa80d,	// (0x0004246a) aid_touch_area_vid4_ParamLimits

0xa80d,	// (0x0004246a) aid_touch_area_vid4

0xa84d,	// (0x000424aa) main_video4_pane_g5_ParamLimits

0xa84d,	// (0x000424aa) main_video4_pane_g5

0xa871,	// (0x000424ce) vid4_progress_pane_ParamLimits

0xa871,	// (0x000424ce) vid4_progress_pane

0x32fd,	// (0x0003af5a) main_cset_slider_pane_g18_ParamLimits

0x32fd,	// (0x0003af5a) main_cset_slider_pane_g18

0xd544,	// (0x000451a1) cell_cam4_burst_pane_g2_ParamLimits

0xd544,	// (0x000451a1) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000476a5) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000476a5) cell_cam4_burst_pane_g

0xb5cf,	// (0x0004322c) bg_cl_pane_ParamLimits

0xb5cf,	// (0x0004322c) bg_cl_pane

0xb5db,	// (0x00043238) cl_header_pane_ParamLimits

0xb5db,	// (0x00043238) cl_header_pane

0xb5e7,	// (0x00043244) cl_listscroll_pane_ParamLimits

0xb5e7,	// (0x00043244) cl_listscroll_pane

0xd686,	// (0x000452e3) bg_cl_pane_g1

0xd68e,	// (0x000452eb) bg_cl_pane_g2

0xd696,	// (0x000452f3) bg_cl_pane_g3

0xd69e,	// (0x000452fb) bg_cl_pane_g4

0xd6a6,	// (0x00045303) bg_cl_pane_g5

0xd6ae,	// (0x0004530b) bg_cl_pane_g6

0xd6b6,	// (0x00045313) bg_cl_pane_g7

0xd6be,	// (0x0004531b) bg_cl_pane_g8

0xd6c6,	// (0x00045323) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000476e0) bg_cl_pane_g

0xb5f3,	// (0x00043250) aid_height_cl_leading_ParamLimits

0xb5f3,	// (0x00043250) aid_height_cl_leading

0xb5ff,	// (0x0004325c) aid_height_cl_text_ParamLimits

0xb5ff,	// (0x0004325c) aid_height_cl_text

0x327e,	// (0x0003aedb) bg_cl_header_pane_ParamLimits

0x327e,	// (0x0003aedb) bg_cl_header_pane

0xb617,	// (0x00043274) cl_header_pane_g1_ParamLimits

0xb617,	// (0x00043274) cl_header_pane_g1

0xb624,	// (0x00043281) cl_header_pane_t1_ParamLimits

0xb624,	// (0x00043281) cl_header_pane_t1

0xd6ce,	// (0x0004532b) cl_list_pane

0x32d0,	// (0x0003af2d) hc_scroll_pane_cp01

0x0619,	// (0x00038276) bg_cl_header_pane_g1

0x319a,	// (0x0003adf7) bg_cl_header_pane_g2

0x0639,	// (0x00038296) bg_cl_header_pane_g3

0x31aa,	// (0x0003ae07) bg_cl_header_pane_g4

0x31a2,	// (0x0003adff) bg_cl_header_pane_g5

0x340a,	// (0x0003b067) bg_cl_header_pane_g6

0x31c2,	// (0x0003ae1f) bg_cl_header_pane_g7

0x31ca,	// (0x0003ae27) bg_cl_header_pane_g8

0x31ba,	// (0x0003ae17) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000476f3) bg_cl_header_pane_g

0xb636,	// (0x00043293) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb636,	// (0x00043293) hc_cl_list_double_graphic_heading_pane

0xb647,	// (0x000432a4) hc_cl_list_single_graphic_pane_ParamLimits

0xb647,	// (0x000432a4) hc_cl_list_single_graphic_pane

0xb660,	// (0x000432bd) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb660,	// (0x000432bd) hc_cl_list_single_graphic_pane_g1

0xb66c,	// (0x000432c9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb66c,	// (0x000432c9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x00047706) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x00047706) hc_cl_list_single_graphic_pane_g

0xb680,	// (0x000432dd) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb680,	// (0x000432dd) hc_cl_list_single_graphic_pane_t1

0xb660,	// (0x000432bd) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb660,	// (0x000432bd) hc_cl_list_double_graphic_heading_pane_g1

0xb695,	// (0x000432f2) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb695,	// (0x000432f2) hc_cl_list_double_graphic_heading_pane_g2

0xb6a9,	// (0x00043306) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb6a9,	// (0x00043306) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0004770b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0004770b) hc_cl_list_double_graphic_heading_pane_g

0xb6bd,	// (0x0004331a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb6bd,	// (0x0004331a) hc_cl_list_double_graphic_heading_pane_t1

0xb6d2,	// (0x0004332f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb6d2,	// (0x0004332f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x00047712) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x00047712) hc_cl_list_double_graphic_heading_pane_t

0xb6ef,	// (0x0004334c) vid4_progress_pane_g1

0xb6ff,	// (0x0004335c) vid4_progress_pane_g2

0xb70f,	// (0x0004336c) vid4_progress_pane_g3

0xb721,	// (0x0004337e) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x00047717) vid4_progress_pane_g

0xb739,	// (0x00043396) vid4_progress_pane_t1

0xb74f,	// (0x000433ac) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x00047722) vid4_progress_pane_t

0xb779,	// (0x000433d6) wait_bar_pane_cp07

0x24ce,	// (0x0003a12b) blid_firmament_pane_ParamLimits

0x2511,	// (0x0003a16e) popup_blid_sat_info2_window_g1

0x2535,	// (0x0003a192) popup_blid_sat_info2_window_t3

0x2543,	// (0x0003a1a0) popup_blid_sat_info2_window_t4

0x2551,	// (0x0003a1ae) popup_blid_sat_info2_window_t5

0x255f,	// (0x0003a1bc) popup_blid_sat_info2_window_t6

0x256f,	// (0x0003a1cc) popup_blid_sat_info2_window_t7

0x257d,	// (0x0003a1da) popup_blid_sat_info2_window_t8

0x258b,	// (0x0003a1e8) popup_blid_sat_info2_window_t9

0x2599,	// (0x0003a1f6) popup_blid_sat_info2_window_t10

0x2670,	// (0x0003a2cd) aid_firma_cardinal_ParamLimits

0x2684,	// (0x0003a2e1) blid_firmament_pane_t1_ParamLimits

0x269b,	// (0x0003a2f8) blid_firmament_pane_t2_ParamLimits

0x26b2,	// (0x0003a30f) blid_firmament_pane_t3_ParamLimits

0x26c9,	// (0x0003a326) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x00047330) blid_firmament_pane_t_ParamLimits

0x26e0,	// (0x0003a33d) blid_sat_info_pane_ParamLimits

0x0c9d,	// (0x000388fa) main_cam_set_pane_ParamLimits

0x9d3d,	// (0x0004199a) aid_size_cell_colour_35_ParamLimits

0x9d57,	// (0x000419b4) aid_size_cell_colour_112_ParamLimits

0x9d6e,	// (0x000419cb) aid_size_cell_effect_ParamLimits

0x0c9d,	// (0x000388fa) bg_tb_trans_pane_cp02_ParamLimits

0x0928,	// (0x00038585) heading_imed_pane_ParamLimits

0x9d88,	// (0x000419e5) listscroll_imed_pane_ParamLimits

0x18f9,	// (0x00039556) popup_call2_audio_first_window_g5_ParamLimits

0x18f9,	// (0x00039556) popup_call2_audio_first_window_g5

0xa48e,	// (0x000420eb) aid_size_touch_image3_arrow_left_ParamLimits

0xa48e,	// (0x000420eb) aid_size_touch_image3_arrow_left

0xa4a4,	// (0x00042101) aid_size_touch_image3_arrow_right_ParamLimits

0xa4a4,	// (0x00042101) aid_size_touch_image3_arrow_right

0xb764,	// (0x000433c1) vid4_progress_pane_t3

0xa026,	// (0x00041c83) main_hwr_training_symbol_option_pane_ParamLimits

0xa026,	// (0x00041c83) main_hwr_training_symbol_option_pane

0x2f2f,	// (0x0003ab8c) popup_hwr_training_preview_window_ParamLimits

0x2f2f,	// (0x0003ab8c) popup_hwr_training_preview_window

0xa087,	// (0x00041ce4) hwr_training_navi_pane_g5_ParamLimits

0xa087,	// (0x00041ce4) hwr_training_navi_pane_g5

0x3188,	// (0x0003ade5) popup_char_count_window

0x327e,	// (0x0003aedb) bg_popup_sub_pane_cp20_ParamLimits

0xb257,	// (0x00042eb4) list_vitu2_match_list_pane_ParamLimits

0xb263,	// (0x00042ec0) vitu2_page_scroll_pane_ParamLimits

0xb263,	// (0x00042ec0) vitu2_page_scroll_pane

0xd6e0,	// (0x0004533d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd6e0,	// (0x0004533d) list_single_hwr_training_symbol_option_pane

0xd6f3,	// (0x00045350) list_single_hwr_training_symbol_option_pane_g1

0xd6fb,	// (0x00045358) list_single_hwr_training_symbol_option_pane_t1

0xd709,	// (0x00045366) bg_button_pane_cp023

0xd712,	// (0x0004536f) bg_button_pane_cp024

0xb79e,	// (0x000433fb) vitu2_page_scroll_pane_g1

0xb7a6,	// (0x00043403) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x00047729) vitu2_page_scroll_pane_g

0xb7ae,	// (0x0004340b) vitu2_page_scroll_pane_t1

0x242e,	// (0x0003a08b) popup_char_count_window_g1

0xd745,	// (0x000453a2) popup_char_count_window_g2

0xd74e,	// (0x000453ab) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0004772e) popup_char_count_window_g

0xd757,	// (0x000453b4) popup_char_count_window_t1

0xe743,	// (0x000463a0) main_vded2_pane

0x2c2e,	// (0x0003a88b) aid_size_cell_imed_line

0x2c38,	// (0x0003a895) grid_imed_line_width_pane

0xa8df,	// (0x0004253c) vid4_indicators_pane_g4

0xd765,	// (0x000453c2) cell_imed_line_width_pane_ParamLimits

0xd765,	// (0x000453c2) cell_imed_line_width_pane

0xd779,	// (0x000453d6) cell_imed_line_width_pane_g1

0xd782,	// (0x000453df) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x00047735) cell_imed_line_width_pane_g

0xb7bd,	// (0x0004341a) main_vded2_pane_g1_ParamLimits

0xb7bd,	// (0x0004341a) main_vded2_pane_g1

0xb7ca,	// (0x00043427) main_vded2_pane_g2_ParamLimits

0xb7ca,	// (0x00043427) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0004773a) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0004773a) main_vded2_pane_g

0xb7d8,	// (0x00043435) vded2_slider_pane_ParamLimits

0xb7d8,	// (0x00043435) vded2_slider_pane

0xb7e5,	// (0x00043442) aid_size_touch_vded2_end

0xb7ef,	// (0x0004344c) aid_size_touch_vded2_playhead

0xd78a,	// (0x000453e7) aid_size_touch_vded2_start

0xd792,	// (0x000453ef) vded2_slider_bg_pane

0xd79b,	// (0x000453f8) vded2_slider_pane_g1

0xd7a4,	// (0x00045401) vded2_slider_pane_g2

0xb7f7,	// (0x00043454) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0004773f) vded2_slider_pane_g

0xd7ac,	// (0x00045409) vded2_slider_bg_pane_g1

0xd7b5,	// (0x00045412) vded2_slider_bg_pane_g2

0xd7be,	// (0x0004541b) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x00047746) vded2_slider_bg_pane_g

0x8156,	// (0x0003fdb3) aid_postcard_touch_down_pane_ParamLimits

0x8156,	// (0x0003fdb3) aid_postcard_touch_down_pane

0x8166,	// (0x0003fdc3) aid_postcard_touch_up_pane_ParamLimits

0x8166,	// (0x0003fdc3) aid_postcard_touch_up_pane

0xe743,	// (0x000463a0) main_blid2_pane

0x8889,	// (0x000404e6) popup_blid2_search_window

0xe743,	// (0x000463a0) blid2_gps_pane

0xe743,	// (0x000463a0) blid2_navig_pane

0xe743,	// (0x000463a0) blid2_search_pane

0xe743,	// (0x000463a0) blid2_tripm_pane

0xb800,	// (0x0004345d) blid2_search_pane_g1_ParamLimits

0xb800,	// (0x0004345d) blid2_search_pane_g1

0xb810,	// (0x0004346d) blid2_search_pane_t1_ParamLimits

0xb810,	// (0x0004346d) blid2_search_pane_t1

0xb822,	// (0x0004347f) aid_size_cell_blid2_gps_ParamLimits

0xb822,	// (0x0004347f) aid_size_cell_blid2_gps

0xb832,	// (0x0004348f) blid2_gps_pane_g1_ParamLimits

0xb832,	// (0x0004348f) blid2_gps_pane_g1

0xb83e,	// (0x0004349b) grid_blid2_satellite_pane_ParamLimits

0xb83e,	// (0x0004349b) grid_blid2_satellite_pane

0xb84e,	// (0x000434ab) blid2_navig_pane_g1_ParamLimits

0xb84e,	// (0x000434ab) blid2_navig_pane_g1

0xb85a,	// (0x000434b7) blid2_navig_pane_t1_ParamLimits

0xb85a,	// (0x000434b7) blid2_navig_pane_t1

0xb86c,	// (0x000434c9) blid2_navig_pane_t2_ParamLimits

0xb86c,	// (0x000434c9) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0004774d) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0004774d) blid2_navig_pane_t

0xb87e,	// (0x000434db) blid2_navig_ring_pane_ParamLimits

0xb87e,	// (0x000434db) blid2_navig_ring_pane

0xb88e,	// (0x000434eb) blid2_speed_pane_ParamLimits

0xb88e,	// (0x000434eb) blid2_speed_pane

0xb89a,	// (0x000434f7) blid2_tripm_pane_g1_ParamLimits

0xb89a,	// (0x000434f7) blid2_tripm_pane_g1

0xb8aa,	// (0x00043507) blid2_tripm_pane_g2_ParamLimits

0xb8aa,	// (0x00043507) blid2_tripm_pane_g2

0xb8b6,	// (0x00043513) blid2_tripm_pane_g3_ParamLimits

0xb8b6,	// (0x00043513) blid2_tripm_pane_g3

0xb8c2,	// (0x0004351f) blid2_tripm_pane_g4_ParamLimits

0xb8c2,	// (0x0004351f) blid2_tripm_pane_g4

0xb8ce,	// (0x0004352b) blid2_tripm_pane_g5_ParamLimits

0xb8ce,	// (0x0004352b) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x00047752) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x00047752) blid2_tripm_pane_g

0xb8ea,	// (0x00043547) blid2_tripm_pane_t1_ParamLimits

0xb8ea,	// (0x00043547) blid2_tripm_pane_t1

0xb8fe,	// (0x0004355b) blid2_tripm_pane_t2_ParamLimits

0xb8fe,	// (0x0004355b) blid2_tripm_pane_t2

0xb910,	// (0x0004356d) blid2_tripm_pane_t3_ParamLimits

0xb910,	// (0x0004356d) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0004775f) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0004775f) blid2_tripm_pane_t

0xb942,	// (0x0004359f) cell_blid2_satellite_pane_ParamLimits

0xb942,	// (0x0004359f) cell_blid2_satellite_pane

0xb95c,	// (0x000435b9) cell_blid2_satellite_pane_g1

0xd7c7,	// (0x00045424) cell_blid2_satellite_pane_t1

0x26f0,	// (0x0003a34d) blid2_speed_pane_g1

0xd7d5,	// (0x00045432) blid2_speed_pane_t1

0xd7e3,	// (0x00045440) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x00047768) blid2_speed_pane_t

0x26f0,	// (0x0003a34d) blid2_navig_ring_pane_g1

0xb965,	// (0x000435c2) blid2_navig_ring_pane_g2

0xb96d,	// (0x000435ca) blid2_navig_ring_pane_g3

0xb975,	// (0x000435d2) blid2_navig_ring_pane_g4

0xb97d,	// (0x000435da) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0004776d) blid2_navig_ring_pane_g

0xe743,	// (0x000463a0) bg_popup_window_pane_cp011

0xd7f1,	// (0x0004544e) popup_blid2_search_window_g1

0xd7f9,	// (0x00045456) popup_blid2_search_window_t1

0xd807,	// (0x00045464) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x00047778) popup_blid2_search_window_t

0x0528,	// (0x00038185) main_browser_pane_g1

0x021b,	// (0x00037e78) main_browser_pane_ParamLimits

0x0c9d,	// (0x000388fa) bg_button_pane_cp011_ParamLimits

0xab4e,	// (0x000427ab) cell_vitu2_function_pane_g1_ParamLimits

0x22d3,	// (0x00039f30) bg_popup_sub_pane_cp22_ParamLimits

0x480d,	// (0x0003c46a) input_focus_pane_cp08_ParamLimits

0xb3e0,	// (0x0004303d) popup_vitu2_query_button_pane_ParamLimits

0xb3e0,	// (0x0004303d) popup_vitu2_query_button_pane

0x4824,	// (0x0003c481) popup_vitu2_query_input_button_pane

0xd49a,	// (0x000450f7) popup_vitu2_query_window_g1_ParamLimits

0x482e,	// (0x0003c48b) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x00047679) popup_vitu2_query_window_g_ParamLimits

0xe743,	// (0x000463a0) bg_button_pane_cp026

0xb985,	// (0x000435e2) popup_vitu2_query_input_button_pane_g1

0xe743,	// (0x000463a0) bg_button_pane_cp025

0xd815,	// (0x00045472) popup_vitu2_query_button_pane_t1

0x92e7,	// (0x00040f44) main_mp3_pane_t6

0x92f7,	// (0x00040f54) popup_slider_window_cp01

0xa7bc,	// (0x00042419) cam4_battery_pane

0xa89c,	// (0x000424f9) cam4_battery_pane_cp02

0xb6e7,	// (0x00043344) cam4_battery_pane_cp01

0xb6e7,	// (0x00043344) cam4_battery_pane_cp03

0x26f0,	// (0x0003a34d) cam4_battery_pane_g1

0xd823,	// (0x00045480) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0004777d) cam4_battery_pane_g

0x25a7,	// (0x0003a204) popup_blid_sat_info2_window_t11

0x0cab,	// (0x00038908) aid_size_touch_mv_arrow_left_ParamLimits

0x0cd4,	// (0x00038931) aid_size_touch_mv_arrow_right_ParamLimits

0x0d32,	// (0x0003898f) navi_pane_g1_ParamLimits

0x0d3e,	// (0x0003899b) navi_pane_g2_ParamLimits

0x0d6c,	// (0x000389c9) navi_pane_g3_ParamLimits

0xf3e5,	// (0x00047042) navi_pane_g_ParamLimits

0x7bcc,	// (0x0003f829) navi_pane_mv_t1_ParamLimits

0x9d94,	// (0x000419f1) grid_imed_effect_pane_ParamLimits

0x66bb,	// (0x0003e318) aid_placing_vt_slider_lsc

0x0477,	// (0x000380d4) aid_placing_vt_slider_prt

0x0c9d,	// (0x000388fa) bg_tb_trans_pane_cp01_ParamLimits

0x2873,	// (0x0003a4d0) popup_image_details_window_g1_ParamLimits

0x2886,	// (0x0003a4e3) popup_image_details_window_g2_ParamLimits

0x289b,	// (0x0003a4f8) popup_image_details_window_g3_ParamLimits

0x289b,	// (0x0003a4f8) popup_image_details_window_g3

0xf718,	// (0x00047375) popup_image_details_window_g_ParamLimits

0x28af,	// (0x0003a50c) popup_image_details_window_t1_ParamLimits

0x28c1,	// (0x0003a51e) popup_image_details_window_t2_ParamLimits

0x28da,	// (0x0003a537) popup_image_details_window_t3_ParamLimits

0x28ee,	// (0x0003a54b) popup_image_details_window_t4_ParamLimits

0x2909,	// (0x0003a566) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0004737c) popup_image_details_window_t_ParamLimits

0xb60b,	// (0x00043268) cl_header_name_pane_ParamLimits

0xb60b,	// (0x00043268) cl_header_name_pane

0xb98d,	// (0x000435ea) cl_header_name_pane_t1_ParamLimits

0xb98d,	// (0x000435ea) cl_header_name_pane_t1

0xb9a4,	// (0x00043601) cl_header_name_pane_t2_ParamLimits

0xb9a4,	// (0x00043601) cl_header_name_pane_t2

0xb9ce,	// (0x0004362b) cl_header_name_pane_t3_ParamLimits

0xb9ce,	// (0x0004362b) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x00047782) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x00047782) cl_header_name_pane_t

0x0dfb,	// (0x00038a58) navi_pane_mv_g2_ParamLimits

0x3145,	// (0x0003ada2) field_vitu2_entry_pane_g1_ParamLimits

0x3151,	// (0x0003adae) field_vitu2_entry_pane_g2_ParamLimits

0x315d,	// (0x0003adba) field_vitu2_entry_pane_g3_ParamLimits

0x315d,	// (0x0003adba) field_vitu2_entry_pane_g3

0xf91b,	// (0x00047578) field_vitu2_entry_pane_g_ParamLimits

0xaae2,	// (0x0004273f) cell_vitu2_itu_pane_g1_ParamLimits

0xaaf4,	// (0x00042751) cell_vitu2_itu_pane_g2_ParamLimits

0xaaf4,	// (0x00042751) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x00047584) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x00047584) cell_vitu2_itu_pane_g

0x0c9d,	// (0x000388fa) bg_vkb2_func_pane_cp05_ParamLimits

0x0c9d,	// (0x000388fa) bg_vkb2_func_pane_cp05

0x0c9d,	// (0x000388fa) bg_vkb2_func_pane_cp03

0x0c9d,	// (0x000388fa) bg_vkb2_func_pane_cp04

0x0c9d,	// (0x000388fa) bg_vkb2_func_pane_cp10_ParamLimits

0x0c9d,	// (0x000388fa) bg_vkb2_func_pane_cp10

0x49e3,	// (0x0003c640) bg_vkb2_func_pane_cp08

0xb5b5,	// (0x00043212) bg_vkb2_func_pane_cp06

0xb5c3,	// (0x00043220) bg_vkb2_func_pane_cp07

0xd71b,	// (0x00045378) bg_vkb2_func_pane_cp11_ParamLimits

0xd71b,	// (0x00045378) bg_vkb2_func_pane_cp11

0xd730,	// (0x0004538d) bg_vkb2_func_pane_cp12_ParamLimits

0xd730,	// (0x0004538d) bg_vkb2_func_pane_cp12

0xe743,	// (0x000463a0) bg_vkb2_func_pane_cp09

0x319a,	// (0x0003adf7) bg_vkb2_func_pane_g1

0x0639,	// (0x00038296) bg_vkb2_func_pane_g2

0x31a2,	// (0x0003adff) bg_vkb2_func_pane_g3

0x31aa,	// (0x0003ae07) bg_vkb2_func_pane_g4

0x340a,	// (0x0003b067) bg_vkb2_func_pane_g5

0x31c2,	// (0x0003ae1f) bg_vkb2_func_pane_g6

0x31ca,	// (0x0003ae27) bg_vkb2_func_pane_g7

0x31ba,	// (0x0003ae17) bg_vkb2_func_pane_g8

0x0619,	// (0x00038276) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x00047789) bg_vkb2_func_pane_g

0xb8dc,	// (0x00043539) blid2_tripm_pane_g6_ParamLimits

0xb8dc,	// (0x00043539) blid2_tripm_pane_g6

0x2fe7,	// (0x0003ac44) mp4_progress_pane_g1

0xb936,	// (0x00043593) blid2_tripm_values_pane_ParamLimits

0xb936,	// (0x00043593) blid2_tripm_values_pane

0xb9f3,	// (0x00043650) blid2_tripm_values_pane_t1

0xba01,	// (0x0004365e) blid2_tripm_values_pane_t2

0xba0f,	// (0x0004366c) blid2_tripm_values_pane_t3

0xba1d,	// (0x0004367a) blid2_tripm_values_pane_t4

0xba2b,	// (0x00043688) blid2_tripm_values_pane_t5

0xba39,	// (0x00043696) blid2_tripm_values_pane_t6

0xba47,	// (0x000436a4) blid2_tripm_values_pane_t7

0xba55,	// (0x000436b2) blid2_tripm_values_pane_t8

0xba63,	// (0x000436c0) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0004779c) blid2_tripm_values_pane_t

0x66fb,	// (0x0003e358) call_video_pane_t1_ParamLimits

0x671c,	// (0x0003e379) call_video_pane_t2_ParamLimits

0xf26e,	// (0x00046ecb) call_video_pane_t_ParamLimits

0x4565,	// (0x0003c1c2) msg_header_pane_g1_ParamLimits

0x0fdd,	// (0x00038c3a) msg_header_pane_g2_ParamLimits

0x0fdd,	// (0x00038c3a) msg_header_pane_g2

0x0001,

0xf488,	// (0x000470e5) msg_header_pane_g_ParamLimits

0xf488,	// (0x000470e5) msg_header_pane_g

0x021b,	// (0x00037e78) main_clock2_pane_ParamLimits

0x9b2c,	// (0x00041789) grid_clock2_toolbar_pane_ParamLimits

0x9b2c,	// (0x00041789) grid_clock2_toolbar_pane

0x9b2c,	// (0x00041789) listscroll_clock2_pane_ParamLimits

0x9b2c,	// (0x00041789) listscroll_clock2_pane

0x9bd2,	// (0x0004182f) main_clock2_pane_t3_ParamLimits

0x9bd2,	// (0x0004182f) main_clock2_pane_t3

0x9be4,	// (0x00041841) main_clock2_pane_t4_ParamLimits

0x9be4,	// (0x00041841) main_clock2_pane_t4

0xd82d,	// (0x0004548a) cell_clock2_toolbar_pane

0xd835,	// (0x00045492) cell_clock2_toolbar_pane_cp01

0xd835,	// (0x00045492) cell_clock2_toolbar_pane_cp02

0xd83d,	// (0x0004549a) cell_clock2_toolbar_pane_cp03

0xd845,	// (0x000454a2) list_clock2_pane

0x0c05,	// (0x00038862) scroll_pane_cp10

0xd84d,	// (0x000454aa) list_single_clock2_pane_ParamLimits

0xd84d,	// (0x000454aa) list_single_clock2_pane

0x03e0,	// (0x0003803d) list_highlight_pane_cp08

0xd85a,	// (0x000454b7) list_single_clock2_pane_t1

0xd868,	// (0x000454c5) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000477af) list_single_clock2_pane_t

0xe743,	// (0x000463a0) bg_button_pane_cp10

0xd876,	// (0x000454d3) cell_clock2_toolbar_pane_g1

0x80b8,	// (0x0003fd15) aid_main_viewer_pane_g1_ParamLimits

0x80b8,	// (0x0003fd15) aid_main_viewer_pane_g1

0x80c4,	// (0x0003fd21) aid_main_viewer_pane_g2_ParamLimits

0x80c4,	// (0x0003fd21) aid_main_viewer_pane_g2

0x80d0,	// (0x0003fd2d) aid_main_viewer_pane_g3_ParamLimits

0x80d0,	// (0x0003fd2d) aid_main_viewer_pane_g3

0x80e1,	// (0x0003fd3e) aid_main_viewer_pane_g4_ParamLimits

0x80e1,	// (0x0003fd3e) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000470f6) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000470f6) aid_main_viewer_pane_g

0x8861,	// (0x000404be) main_calc_pane_ParamLimits

0x886e,	// (0x000404cb) main_dialer2_pane_ParamLimits

0xe743,	// (0x000463a0) main_cam6_pane

0xe743,	// (0x000463a0) main_vid6_pane

0x9b38,	// (0x00041795) listscroll_gen_pane_cp06_ParamLimits

0x9b38,	// (0x00041795) listscroll_gen_pane_cp06

0x9bf6,	// (0x00041853) main_clock2_pane_t5_ParamLimits

0x9bf6,	// (0x00041853) main_clock2_pane_t5

0x9c3f,	// (0x0004189c) aid_call2_pane_cp10_ParamLimits

0x9c51,	// (0x000418ae) aid_call_pane_cp10_ParamLimits

0x0c83,	// (0x000388e0) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0c83,	// (0x000388e0) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9c63,	// (0x000418c0) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9c63,	// (0x000418c0) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0c83,	// (0x000388e0) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x00047431) popup_clock_analogue_window_cp10_g_ParamLimits

0x9c75,	// (0x000418d2) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa43b,	// (0x00042098) cell_dialer2_keypad_pane_g2_ParamLimits

0xa43b,	// (0x00042098) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x00047517) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x00047517) cell_dialer2_keypad_pane_g

0xa457,	// (0x000420b4) cell_dialer2_keypad_pane_t1

0xae19,	// (0x00042a76) main_cset_text2_pane_ParamLimits

0xae19,	// (0x00042a76) main_cset_text2_pane

0xd67a,	// (0x000452d7) area_vitu2_query_pane_g1_ParamLimits

0x490e,	// (0x0003c56b) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000476cc) area_vitu2_query_pane_g_ParamLimits

0x49bf,	// (0x0003c61c) area_vitu2_query_pane_t7_ParamLimits

0x49bf,	// (0x0003c61c) area_vitu2_query_pane_t7

0xb5b5,	// (0x00043212) bg_button_pane_cp018_ParamLimits

0xb5c3,	// (0x00043220) bg_button_pane_cp021_ParamLimits

0x49e3,	// (0x0003c640) bg_button_pane_cp022_ParamLimits

0x49e3,	// (0x0003c640) bg_vkb2_func_pane_cp08_ParamLimits

0xb5b5,	// (0x00043212) bg_vkb2_func_pane_cp06_ParamLimits

0xb5c3,	// (0x00043220) bg_vkb2_func_pane_cp07_ParamLimits

0x49f4,	// (0x0003c651) input_focus_pane_cp09_ParamLimits

0xba71,	// (0x000436ce) cam6_autofocus_pane_ParamLimits

0xba71,	// (0x000436ce) cam6_autofocus_pane

0xba93,	// (0x000436f0) cam6_image_uncrop_pane_ParamLimits

0xba93,	// (0x000436f0) cam6_image_uncrop_pane

0xbac0,	// (0x0004371d) cam6_indi_pane_ParamLimits

0xbac0,	// (0x0004371d) cam6_indi_pane

0xbada,	// (0x00043737) cam6_mode_pane_ParamLimits

0xbada,	// (0x00043737) cam6_mode_pane

0xbaee,	// (0x0004374b) cam6_timer_pane_ParamLimits

0xbaee,	// (0x0004374b) cam6_timer_pane

0xbafa,	// (0x00043757) cam6_zoom_pane_ParamLimits

0xbafa,	// (0x00043757) cam6_zoom_pane

0xbb12,	// (0x0004376f) cam6_mode_pane_g1_ParamLimits

0xbb12,	// (0x0004376f) cam6_mode_pane_g1

0xbb1e,	// (0x0004377b) cam6_mode_pane_g2_ParamLimits

0xbb1e,	// (0x0004377b) cam6_mode_pane_g2

0xbb2a,	// (0x00043787) cam6_mode_pane_g3_ParamLimits

0xbb2a,	// (0x00043787) cam6_mode_pane_g3

0xbb36,	// (0x00043793) cam6_mode_pane_g4_ParamLimits

0xbb36,	// (0x00043793) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000477b4) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000477b4) cam6_mode_pane_g

0x3270,	// (0x0003aecd) bg_tb_trans_pane_cp08_ParamLimits

0x3270,	// (0x0003aecd) bg_tb_trans_pane_cp08

0xd87e,	// (0x000454db) cam6_battery_pane_ParamLimits

0xd87e,	// (0x000454db) cam6_battery_pane

0xd894,	// (0x000454f1) cam6_indi_pane_g1_ParamLimits

0xd894,	// (0x000454f1) cam6_indi_pane_g1

0xd8a6,	// (0x00045503) cam6_indi_pane_g2_ParamLimits

0xd8a6,	// (0x00045503) cam6_indi_pane_g2

0xd8b8,	// (0x00045515) cam6_indi_pane_g3_ParamLimits

0xd8b8,	// (0x00045515) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000477bd) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000477bd) cam6_indi_pane_g

0xd8ca,	// (0x00045527) cam6_indi_pane_t1_ParamLimits

0xd8ca,	// (0x00045527) cam6_indi_pane_t1

0xa914,	// (0x00042571) cam6_autofocus_pane_g1

0xa91c,	// (0x00042579) cam6_autofocus_pane_g2

0xa924,	// (0x00042581) cam6_autofocus_pane_g3

0xa92c,	// (0x00042589) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000477c4) cam6_autofocus_pane_g

0xd8f0,	// (0x0004554d) cam6_timer_pane_g1

0xd8f8,	// (0x00045555) cam6_timer_pane_t1

0xd906,	// (0x00045563) cam6_zoom_cont_pane

0xd90e,	// (0x0004556b) cam6_zoom_pane_g1

0xd916,	// (0x00045573) cam6_zoom_pane_g2

0xbb42,	// (0x0004379f) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000477cd) cam6_zoom_pane_g

0x26f0,	// (0x0003a34d) cam6_battery_pane_g1

0x26f0,	// (0x0003a34d) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x00047339) cam6_battery_pane_g

0xd91e,	// (0x0004557b) cam6_zoom_cont_pane_g1

0xd927,	// (0x00045584) cam6_zoom_cont_pane_g2

0xd930,	// (0x0004558d) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000477d4) cam6_zoom_cont_pane_g

0xbb5f,	// (0x000437bc) cam6_mode_pane_cp_ParamLimits

0xbb5f,	// (0x000437bc) cam6_mode_pane_cp

0xbafa,	// (0x00043757) cam6_zoom_pane_cp_ParamLimits

0xbafa,	// (0x00043757) cam6_zoom_pane_cp

0xbb73,	// (0x000437d0) vid6_image_uncrop_cif_pane_ParamLimits

0xbb73,	// (0x000437d0) vid6_image_uncrop_cif_pane

0xbb9f,	// (0x000437fc) vid6_image_uncrop_nhd_pane_ParamLimits

0xbb9f,	// (0x000437fc) vid6_image_uncrop_nhd_pane

0xba93,	// (0x000436f0) vid6_image_uncrop_vga_pane_ParamLimits

0xba93,	// (0x000436f0) vid6_image_uncrop_vga_pane

0xbbbc,	// (0x00043819) vid6_image_uncrop_wvga_pane_ParamLimits

0xbbbc,	// (0x00043819) vid6_image_uncrop_wvga_pane

0xbbd9,	// (0x00043836) vid6_indi_pane_ParamLimits

0xbbd9,	// (0x00043836) vid6_indi_pane

0x3270,	// (0x0003aecd) bg_tb_trans_pane_cp09_ParamLimits

0x3270,	// (0x0003aecd) bg_tb_trans_pane_cp09

0xd948,	// (0x000455a5) cam6_battery_pane_cp_ParamLimits

0xd948,	// (0x000455a5) cam6_battery_pane_cp

0xd954,	// (0x000455b1) vid6_indi_pane_g1_ParamLimits

0xd954,	// (0x000455b1) vid6_indi_pane_g1

0xd966,	// (0x000455c3) vid6_indi_pane_g2_ParamLimits

0xd966,	// (0x000455c3) vid6_indi_pane_g2

0xd978,	// (0x000455d5) vid6_indi_pane_g3_ParamLimits

0xd978,	// (0x000455d5) vid6_indi_pane_g3

0xd98d,	// (0x000455ea) vid6_indi_pane_g4_ParamLimits

0xd98d,	// (0x000455ea) vid6_indi_pane_g4

0xd9a2,	// (0x000455ff) vid6_indi_pane_g5_ParamLimits

0xd9a2,	// (0x000455ff) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000477db) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000477db) vid6_indi_pane_g

0xd9bc,	// (0x00045619) vid6_indi_pane_t1_ParamLimits

0xd9bc,	// (0x00045619) vid6_indi_pane_t1

0xd9d2,	// (0x0004562f) vid6_indi_pane_t2_ParamLimits

0xd9d2,	// (0x0004562f) vid6_indi_pane_t2

0xd9fa,	// (0x00045657) vid6_indi_pane_t3_ParamLimits

0xd9fa,	// (0x00045657) vid6_indi_pane_t3

0xda22,	// (0x0004567f) vid6_indi_pane_t4_ParamLimits

0xda22,	// (0x0004567f) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000477e6) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000477e6) vid6_indi_pane_t

0xda46,	// (0x000456a3) wait_bar_pane_cp08

0xbbfe,	// (0x0004385b) main_cset_text2_pane_t1_ParamLimits

0xbbfe,	// (0x0004385b) main_cset_text2_pane_t1

0xbb4a,	// (0x000437a7) listscroll_gen_pane_cp06_t1_ParamLimits

0xbb4a,	// (0x000437a7) listscroll_gen_pane_cp06_t1

0xe743,	// (0x000463a0) main_cam6_set_pane

0x2953,	// (0x0003a5b0) bg_tb_trans_pane_cp06_ParamLimits

0xa7c4,	// (0x00042421) cam4_indicators_pane_g1_ParamLimits

0xa7d5,	// (0x00042432) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x00047554) cam4_indicators_pane_g_ParamLimits

0xa7f3,	// (0x00042450) cam4_indicators_pane_t1_ParamLimits

0x0c9d,	// (0x000388fa) bg_tb_trans_pane_cp07_ParamLimits

0xa8a6,	// (0x00042503) vid4_indicators_pane_g1_ParamLimits

0xa8ba,	// (0x00042517) vid4_indicators_pane_g2_ParamLimits

0xa8ce,	// (0x0004252b) vid4_indicators_pane_g3_ParamLimits

0xa8df,	// (0x0004253c) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x00047566) vid4_indicators_pane_g_ParamLimits

0xa8fd,	// (0x0004255a) vid4_indicators_pane_t1_ParamLimits

0xb6ef,	// (0x0004334c) vid4_progress_pane_g1_ParamLimits

0xb6ff,	// (0x0004335c) vid4_progress_pane_g2_ParamLimits

0xb70f,	// (0x0004336c) vid4_progress_pane_g3_ParamLimits

0xb721,	// (0x0004337e) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x00047717) vid4_progress_pane_g_ParamLimits

0xb739,	// (0x00043396) vid4_progress_pane_t1_ParamLimits

0xb74f,	// (0x000433ac) vid4_progress_pane_t2_ParamLimits

0xb764,	// (0x000433c1) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x00047722) vid4_progress_pane_t_ParamLimits

0xb779,	// (0x000433d6) wait_bar_pane_cp07_ParamLimits

0xbc31,	// (0x0004388e) main_cam6_set_pane_g2_ParamLimits

0xbc31,	// (0x0004388e) main_cam6_set_pane_g2

0xbc3d,	// (0x0004389a) main_cset6_listscroll_pane_ParamLimits

0xbc3d,	// (0x0004389a) main_cset6_listscroll_pane

0xbc68,	// (0x000438c5) main_cset6_slider_pane_ParamLimits

0xbc68,	// (0x000438c5) main_cset6_slider_pane

0xbc74,	// (0x000438d1) main_cset6_text2_pane_ParamLimits

0xbc74,	// (0x000438d1) main_cset6_text2_pane

0xda55,	// (0x000456b2) main_cset6_text_pane

0xda5d,	// (0x000456ba) main_cset_list_pane_copy1_ParamLimits

0xda5d,	// (0x000456ba) main_cset_list_pane_copy1

0xda6d,	// (0x000456ca) scroll_pane_cp028_copy1

0xbc87,	// (0x000438e4) cset_list_set_pane_copy1

0xbc9a,	// (0x000438f7) aid_position_infowindow_above_copy1

0xbca2,	// (0x000438ff) aid_position_infowindow_below_copy1

0x4a44,	// (0x0003c6a1) cset_list_set_pane_g1_copy1

0x4781,	// (0x0003c3de) cset_list_set_pane_g3_copy1_ParamLimits

0x4781,	// (0x0003c3de) cset_list_set_pane_g3_copy1

0x4790,	// (0x0003c3ed) cset_list_set_pane_t1_copy1_ParamLimits

0x4790,	// (0x0003c3ed) cset_list_set_pane_t1_copy1

0x0c9d,	// (0x000388fa) list_highlight_pane_cp021_copy1_ParamLimits

0x0c9d,	// (0x000388fa) list_highlight_pane_cp021_copy1

0xda76,	// (0x000456d3) cset6_slider_pane_ParamLimits

0xda76,	// (0x000456d3) cset6_slider_pane

0xdaa2,	// (0x000456ff) main_cset6_slider_pane_g1_ParamLimits

0xdaa2,	// (0x000456ff) main_cset6_slider_pane_g1

0xbcaa,	// (0x00043907) main_cset6_slider_pane_g2_ParamLimits

0xbcaa,	// (0x00043907) main_cset6_slider_pane_g2

0xdaca,	// (0x00045727) main_cset6_slider_pane_g3_ParamLimits

0xdaca,	// (0x00045727) main_cset6_slider_pane_g3

0xbcd2,	// (0x0004392f) main_cset6_slider_pane_g4_ParamLimits

0xbcd2,	// (0x0004392f) main_cset6_slider_pane_g4

0xbcde,	// (0x0004393b) main_cset6_slider_pane_g5_ParamLimits

0xbcde,	// (0x0004393b) main_cset6_slider_pane_g5

0x32e5,	// (0x0003af42) main_cset6_slider_pane_g7_ParamLimits

0x32e5,	// (0x0003af42) main_cset6_slider_pane_g7

0x32f1,	// (0x0003af4e) main_cset6_slider_pane_g8_ParamLimits

0x32f1,	// (0x0003af4e) main_cset6_slider_pane_g8

0xbcec,	// (0x00043949) main_cset6_slider_pane_g9_ParamLimits

0xbcec,	// (0x00043949) main_cset6_slider_pane_g9

0xbcf8,	// (0x00043955) main_cset6_slider_pane_g10_ParamLimits

0xbcf8,	// (0x00043955) main_cset6_slider_pane_g10

0xbd04,	// (0x00043961) main_cset6_slider_pane_g11_ParamLimits

0xbd04,	// (0x00043961) main_cset6_slider_pane_g11

0xbd10,	// (0x0004396d) main_cset6_slider_pane_g12_ParamLimits

0xbd10,	// (0x0004396d) main_cset6_slider_pane_g12

0xbd1c,	// (0x00043979) main_cset6_slider_pane_g13_ParamLimits

0xbd1c,	// (0x00043979) main_cset6_slider_pane_g13

0xbd28,	// (0x00043985) main_cset6_slider_pane_g14_ParamLimits

0xbd28,	// (0x00043985) main_cset6_slider_pane_g14

0xbd34,	// (0x00043991) main_cset6_slider_pane_g15_ParamLimits

0xbd34,	// (0x00043991) main_cset6_slider_pane_g15

0xbd4c,	// (0x000439a9) main_cset6_slider_pane_g16_ParamLimits

0xbd4c,	// (0x000439a9) main_cset6_slider_pane_g16

0xbd5a,	// (0x000439b7) main_cset6_slider_pane_g17_ParamLimits

0xbd5a,	// (0x000439b7) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000477ef) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000477ef) main_cset6_slider_pane_g

0xdad6,	// (0x00045733) main_cset6_slider_pane_t1_ParamLimits

0xdad6,	// (0x00045733) main_cset6_slider_pane_t1

0xbd80,	// (0x000439dd) main_cset6_slider_pane_t2_ParamLimits

0xbd80,	// (0x000439dd) main_cset6_slider_pane_t2

0xbdab,	// (0x00043a08) main_cset6_slider_pane_t3_ParamLimits

0xbdab,	// (0x00043a08) main_cset6_slider_pane_t3

0xbdd6,	// (0x00043a33) main_cset6_slider_pane_t4_ParamLimits

0xbdd6,	// (0x00043a33) main_cset6_slider_pane_t4

0xbe01,	// (0x00043a5e) main_cset6_slider_pane_t5_ParamLimits

0xbe01,	// (0x00043a5e) main_cset6_slider_pane_t5

0xdb17,	// (0x00045774) main_cset6_slider_pane_t7_ParamLimits

0xdb17,	// (0x00045774) main_cset6_slider_pane_t7

0xbe2e,	// (0x00043a8b) main_cset6_slider_pane_t8_ParamLimits

0xbe2e,	// (0x00043a8b) main_cset6_slider_pane_t8

0xbe52,	// (0x00043aaf) main_cset6_slider_pane_t9_ParamLimits

0xbe52,	// (0x00043aaf) main_cset6_slider_pane_t9

0xbe76,	// (0x00043ad3) main_cset6_slider_pane_t10_ParamLimits

0xbe76,	// (0x00043ad3) main_cset6_slider_pane_t10

0xbe9a,	// (0x00043af7) main_cset6_slider_pane_t11_ParamLimits

0xbe9a,	// (0x00043af7) main_cset6_slider_pane_t11

0xdb4d,	// (0x000457aa) main_cset6_slider_pane_t14_ParamLimits

0xdb4d,	// (0x000457aa) main_cset6_slider_pane_t14

0xdb86,	// (0x000457e3) main_cset6_slider_pane_t15_ParamLimits

0xdb86,	// (0x000457e3) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x00047814) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x00047814) main_cset6_slider_pane_t

0x3412,	// (0x0003b06f) cset_slider_pane_g1_copy1

0x341b,	// (0x0003b078) cset_slider_pane_g2_copy1

0x3424,	// (0x0003b081) cset_slider_pane_g3_copy1

0xe743,	// (0x000463a0) bg_popup_sub_pane_cp011_copy1

0xdbbf,	// (0x0004581c) main_cset_text_pane_g1_copy1

0xd4ae,	// (0x0004510b) main_cset_text_pane_t1_copy1

0xd4bc,	// (0x00045119) main_cset_text_pane_t2_copy1

0xd4ca,	// (0x00045127) main_cset_text_pane_t3_copy1

0xd4d8,	// (0x00045135) main_cset_text_pane_t4_copy1

0xd4e6,	// (0x00045143) main_cset_text_pane_t5_copy1

0xdbc7,	// (0x00045824) main_cset_text_pane_t6_copy1

0xdbd5,	// (0x00045832) main_cset_text_pane_t7_copy1

0xbebe,	// (0x00043b1b) main_cset_text2_pane_t1_copy1

0x0c9d,	// (0x000388fa) main_ncimui_pane

0x88bf,	// (0x0004051c) popup_query_ncimui_window_ParamLimits

0x88bf,	// (0x0004051c) popup_query_ncimui_window

0x4626,	// (0x0003c283) field_cale_ev2_pane_g4_ParamLimits

0x4626,	// (0x0003c283) field_cale_ev2_pane_g4

0xa15b,	// (0x00041db8) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa15b,	// (0x00041db8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000474f2) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000474f2) cell_video_dialer_keypad_pane_g

0xa173,	// (0x00041dd0) cell_video_dialer_keypad_pane_t1

0xe743,	// (0x000463a0) bg_popup_window_pane_cp012

0x0ad2,	// (0x0003872f) heading_pane_cp06

0xdc0d,	// (0x0004586a) ncim_query_content_pane

0xe743,	// (0x000463a0) bg_popup_heading_pane_cp01

0xdc15,	// (0x00045872) ncim_heading_pane_t1

0xdc23,	// (0x00045880) ncim_indicator_popup_pane

0xdc35,	// (0x00045892) ncim_query_button_pane

0xdc49,	// (0x000458a6) ncim_query_content_pane_t1

0xdc5b,	// (0x000458b8) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x00047858) ncim_query_content_pane_t

0xdc95,	// (0x000458f2) ncim_query_list_pane

0xdca7,	// (0x00045904) ncim_query_popup_pane

0xdc23,	// (0x00045880) ncim_indicator_popup_pane_ParamLimits

0xc011,	// (0x00043c6e) ncim_query_content_pane_g1_ParamLimits

0xc011,	// (0x00043c6e) ncim_query_content_pane_g1

0xdc49,	// (0x000458a6) ncim_query_content_pane_t1_ParamLimits

0xdc5b,	// (0x000458b8) ncim_query_content_pane_t2_ParamLimits

0xc01d,	// (0x00043c7a) ncim_query_content_pane_t3_ParamLimits

0xc01d,	// (0x00043c7a) ncim_query_content_pane_t3

0xc03a,	// (0x00043c97) ncim_query_content_pane_t4_ParamLimits

0xc03a,	// (0x00043c97) ncim_query_content_pane_t4

0xc057,	// (0x00043cb4) ncim_query_content_pane_t5_ParamLimits

0xc057,	// (0x00043cb4) ncim_query_content_pane_t5

0xdc6d,	// (0x000458ca) ncim_query_content_pane_t6_ParamLimits

0xdc6d,	// (0x000458ca) ncim_query_content_pane_t6

0xfbfb,	// (0x00047858) ncim_query_content_pane_t_ParamLimits

0xdc95,	// (0x000458f2) ncim_query_list_pane_ParamLimits

0xdca7,	// (0x00045904) ncim_query_popup_pane_ParamLimits

0xdcbb,	// (0x00045918) wait_bar_pane_cp04

0xe743,	// (0x000463a0) input_focus_pane_cp011

0xdcc3,	// (0x00045920) ncim_query_popup_pane_t1

0xdcd1,	// (0x0004592e) ncim_list_query_list_pane_ParamLimits

0xdcd1,	// (0x0004592e) ncim_list_query_list_pane

0xe743,	// (0x000463a0) bg_button_pane_cp027

0xdcde,	// (0x0004593b) ncim_query_button_pane_g1

0xe743,	// (0x000463a0) list_highlight_pane_cp012

0xdce8,	// (0x00045945) ncim_list_query_list_pane_g1

0xdcf0,	// (0x0004594d) ncim_list_query_list_pane_t1

0xa7e4,	// (0x00042441) cam4_indicators_pane_g3_ParamLimits

0xa7e4,	// (0x00042441) cam4_indicators_pane_g3

0xa8eb,	// (0x00042548) vid4_indicators_pane_g5_ParamLimits

0xa8eb,	// (0x00042548) vid4_indicators_pane_g5

0xb72d,	// (0x0004338a) vid4_progress_pane_g5_ParamLimits

0xb72d,	// (0x0004338a) vid4_progress_pane_g5

0xbefd,	// (0x00043b5a) main_ncimui_pane_g1

0xbf65,	// (0x00043bc2) ncimui_group_query_pane_ParamLimits

0xbf65,	// (0x00043bc2) ncimui_group_query_pane

0xbfad,	// (0x00043c0a) ncimui_list_pane_ParamLimits

0xbfad,	// (0x00043c0a) ncimui_list_pane

0xbfd4,	// (0x00043c31) ncimui_text_pane_ParamLimits

0xbfd4,	// (0x00043c31) ncimui_text_pane

0xc074,	// (0x00043cd1) ncimui_text_pane_t1_ParamLimits

0xc074,	// (0x00043cd1) ncimui_text_pane_t1

0xdcfe,	// (0x0004595b) ncimui_list_single_graphic_pane_ParamLimits

0xdcfe,	// (0x0004595b) ncimui_list_single_graphic_pane

0xc093,	// (0x00043cf0) ncimui_query_pane_ParamLimits

0xc093,	// (0x00043cf0) ncimui_query_pane

0xe743,	// (0x000463a0) list_highlight_pane_cp013

0xdd0e,	// (0x0004596b) ncim_list_query_list_pane_t1_copy1

0xdce8,	// (0x00045945) ncim_list_single_graphic_pane_g1

0xc0a6,	// (0x00043d03) ncim_query_button_pane_cp01

0xc0b2,	// (0x00043d0f) ncim_query_entry_pane_ParamLimits

0xc0b2,	// (0x00043d0f) ncim_query_entry_pane

0xc0c5,	// (0x00043d22) ncimui_query_pane_g1

0xc0d1,	// (0x00043d2e) ncimui_query_pane_t1_ParamLimits

0xc0d1,	// (0x00043d2e) ncimui_query_pane_t1

0x0c9d,	// (0x000388fa) input_focus_pane_cp012

0xdd1c,	// (0x00045979) ncim_query_entry_pane_t1

0x021b,	// (0x00037e78) main_im_pane_ParamLimits

0x0c9d,	// (0x000388fa) main_mobtv_pane_ParamLimits

0x0c9d,	// (0x000388fa) main_mobtv_pane

0xbd68,	// (0x000439c5) main_cset6_slider_pane_g18_ParamLimits

0xbd68,	// (0x000439c5) main_cset6_slider_pane_g18

0xbd74,	// (0x000439d1) main_cset6_slider_pane_g19_ParamLimits

0xbd74,	// (0x000439d1) main_cset6_slider_pane_g19

0x315d,	// (0x0003adba) bg_main_mobtv_pane_ParamLimits

0x315d,	// (0x0003adba) bg_main_mobtv_pane

0xc0ea,	// (0x00043d47) main_mobtv_info_pane

0xc0f5,	// (0x00043d52) main_mobtv_loading_pane_ParamLimits

0xc0f5,	// (0x00043d52) main_mobtv_loading_pane

0xdd2e,	// (0x0004598b) main_mobtv_pg_channel_list_pane

0xdd38,	// (0x00045995) main_mobtv_pg_hdr_pane

0xc102,	// (0x00043d5f) main_mobtv_programe_curr_pane_ParamLimits

0xc102,	// (0x00043d5f) main_mobtv_programe_curr_pane

0xc10f,	// (0x00043d6c) main_mobtv_programe_next_pane_ParamLimits

0xc10f,	// (0x00043d6c) main_mobtv_programe_next_pane

0xdd41,	// (0x0004599e) popup_mobtv_noti_window

0x26f0,	// (0x0003a34d) main_tv_pg_hdr_pane_g1

0xdd49,	// (0x000459a6) main_tv_pg_hdr_pane_g2

0xdd51,	// (0x000459ae) main_tv_pg_hdr_pane_g3

0xdd59,	// (0x000459b6) main_tv_pg_hdr_pane_g4

0xdd61,	// (0x000459be) main_tv_pg_hdr_pane_g5

0xdd6b,	// (0x000459c8) main_tv_pg_hdr_pane_g6

0xdd75,	// (0x000459d2) main_tv_pg_hdr_pane_g7

0xdd7f,	// (0x000459dc) main_tv_pg_hdr_pane_g8

0xdd89,	// (0x000459e6) main_tv_pg_hdr_pane_g9

0xdd93,	// (0x000459f0) main_tv_pg_hdr_pane_g10

0xdd9d,	// (0x000459fa) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x00047865) main_tv_pg_hdr_pane_g

0xdda7,	// (0x00045a04) main_tv_pg_hdr_pane_t1

0xddb5,	// (0x00045a12) main_tv_pg_hdr_pane_t2

0xddc3,	// (0x00045a20) main_tv_pg_hdr_pane_t3

0xddd3,	// (0x00045a30) main_tv_pg_hdr_pane_t4

0xdde3,	// (0x00045a40) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0004787c) main_tv_pg_hdr_pane_t

0xddf3,	// (0x00045a50) single_mobtv_pg_channel_pane_ParamLimits

0xddf3,	// (0x00045a50) single_mobtv_pg_channel_pane

0xde05,	// (0x00045a62) single_mobtv_pg_channel_table_pane

0xde0e,	// (0x00045a6b) single_mobtv_pg_channel_thumb_pane

0xde17,	// (0x00045a74) single_tv_pg_channel_pane_g1

0xde20,	// (0x00045a7d) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x00047887) single_tv_pg_channel_pane_g

0x2953,	// (0x0003a5b0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2953,	// (0x0003a5b0) bg_single_mobtv_pg_channel_thumb_pane

0xde29,	// (0x00045a86) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xde29,	// (0x00045a86) single_mobtv_pg_channel_thumb_pane_g1

0xde37,	// (0x00045a94) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xde37,	// (0x00045a94) single_mobtv_pg_channel_thumb_pane_g2

0xde43,	// (0x00045aa0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xde43,	// (0x00045aa0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0004788c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0004788c) single_mobtv_pg_channel_thumb_pane_g

0xde4f,	// (0x00045aac) single_mobtv_pg_channel_thumb_pane_t1

0xde5d,	// (0x00045aba) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x00047893) single_mobtv_pg_channel_thumb_pane_t

0x26f0,	// (0x0003a34d) bg_single_mobtv_pg_channel_table_pane_g1

0x26f0,	// (0x0003a34d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x00047339) bg_single_mobtv_pg_channel_table_pane_g

0xde6b,	// (0x00045ac8) single_mobtv_pg_channel_table_pane_t1

0xde79,	// (0x00045ad6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x00047898) single_mobtv_pg_channel_table_pane_t

0xc124,	// (0x00043d81) main_mobtv_info_pane_g1_ParamLimits

0xc124,	// (0x00043d81) main_mobtv_info_pane_g1

0xc140,	// (0x00043d9d) main_mobtv_info_pane_t1_ParamLimits

0xc140,	// (0x00043d9d) main_mobtv_info_pane_t1

0xc1b8,	// (0x00043e15) main_mobtv_info_pane_t2_ParamLimits

0xc1b8,	// (0x00043e15) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000478a2) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000478a2) main_mobtv_info_pane_t

0xc247,	// (0x00043ea4) wait_bar_pane_cp05

0xc259,	// (0x00043eb6) main_mobtv_loading_pane_g1_ParamLimits

0xc259,	// (0x00043eb6) main_mobtv_loading_pane_g1

0xc267,	// (0x00043ec4) main_mobtv_loading_pane_g2_ParamLimits

0xc267,	// (0x00043ec4) main_mobtv_loading_pane_g2

0xc273,	// (0x00043ed0) main_mobtv_loading_pane_g3_ParamLimits

0xc273,	// (0x00043ed0) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000478a9) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000478a9) main_mobtv_loading_pane_g

0xde87,	// (0x00045ae4) main_mobtv_loading_pane_t1_ParamLimits

0xde87,	// (0x00045ae4) main_mobtv_loading_pane_t1

0xde9f,	// (0x00045afc) main_mobtv_loading_pane_t2_ParamLimits

0xde9f,	// (0x00045afc) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000478b0) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000478b0) main_mobtv_loading_pane_t

0xc281,	// (0x00043ede) wait_bar_pane_cp06_ParamLimits

0xc281,	// (0x00043ede) wait_bar_pane_cp06

0xdec3,	// (0x00045b20) main_mobtv_programe_curr_pane_t1

0xded1,	// (0x00045b2e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000478b5) main_mobtv_programe_curr_pane_t

0xdedf,	// (0x00045b3c) main_mobtv_programe_next_pane_t1

0xdeed,	// (0x00045b4a) main_mobtv_programe_next_pane_t2

0xdefb,	// (0x00045b58) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000478ba) main_mobtv_programe_next_pane_t

0xe743,	// (0x000463a0) bg_popup_mobtv_noti_window_pane

0xdf09,	// (0x00045b66) popup_mobtv_noti_window_g1

0xdf11,	// (0x00045b6e) popup_mobtv_noti_window_t1

0xdf1f,	// (0x00045b7c) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000478c1) popup_mobtv_noti_window_t

0x26f0,	// (0x0003a34d) bg_popup_mobtv_noti_window_pane_g1

0xe743,	// (0x000463a0) sc_clock_pane

0xe743,	// (0x000463a0) main_fs_bigclock_pane

0xb924,	// (0x00043581) blid2_tripm_pane_t4_ParamLimits

0xb924,	// (0x00043581) blid2_tripm_pane_t4

0xc28d,	// (0x00043eea) sc_clock_pane_g1_ParamLimits

0xc28d,	// (0x00043eea) sc_clock_pane_g1

0xc29b,	// (0x00043ef8) sc_clock_pane_t1_ParamLimits

0xc29b,	// (0x00043ef8) sc_clock_pane_t1

0xc2ae,	// (0x00043f0b) sc_clock_pane_t2_ParamLimits

0xc2ae,	// (0x00043f0b) sc_clock_pane_t2

0xc2c0,	// (0x00043f1d) sc_clock_pane_t3_ParamLimits

0xc2c0,	// (0x00043f1d) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000478c6) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000478c6) sc_clock_pane_t

0xcb52,	// (0x000447af) main_fs_bigclock_indicator_pane_ParamLimits

0xcb52,	// (0x000447af) main_fs_bigclock_indicator_pane

0xc343,	// (0x00043fa0) main_fs_bigclock_pane_g1_ParamLimits

0xc343,	// (0x00043fa0) main_fs_bigclock_pane_g1

0xcb5e,	// (0x000447bb) main_fs_bigclock_pane_t1_ParamLimits

0xcb5e,	// (0x000447bb) main_fs_bigclock_pane_t1

0xcb70,	// (0x000447cd) main_fs_bigclock_pane_t2_ParamLimits

0xcb70,	// (0x000447cd) main_fs_bigclock_pane_t2

0xcb84,	// (0x000447e1) main_fs_bigclock_pane_t3_ParamLimits

0xcb84,	// (0x000447e1) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x00047ad0) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x00047ad0) main_fs_bigclock_pane_t

0xea27,	// (0x00046684) main_fs_bigclock_indicator_pane_g1

0xdc3d,	// (0x0004589a) ncim_query_content_pane_g2_ParamLimits

0xdc3d,	// (0x0004589a) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x00047853) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x00047853) ncim_query_content_pane_g

0xc2d4,	// (0x00043f31) sc_clock_pane_t4_ParamLimits

0xc2d4,	// (0x00043f31) sc_clock_pane_t4

0x0c9d,	// (0x000388fa) main_radioblah_pane

0x30d0,	// (0x0003ad2d) cell_call4_button_pane_t1_copy1_ParamLimits

0x30d0,	// (0x0003ad2d) cell_call4_button_pane_t1_copy1

0xbf17,	// (0x00043b74) main_ncimui_pane_t1_ParamLimits

0xbf17,	// (0x00043b74) main_ncimui_pane_t1

0xbf31,	// (0x00043b8e) main_ncimui_pane_t2_ParamLimits

0xbf31,	// (0x00043b8e) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0004784c) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0004784c) main_ncimui_pane_t

0xe064,	// (0x00045cc1) main_radioblah_anim_pane_ParamLimits

0xe064,	// (0x00045cc1) main_radioblah_anim_pane

0xe075,	// (0x00045cd2) main_radioblah_info_pane_ParamLimits

0xe075,	// (0x00045cd2) main_radioblah_info_pane

0xe089,	// (0x00045ce6) main_radioblah_pane_t1_ParamLimits

0xe089,	// (0x00045ce6) main_radioblah_pane_t1

0xe0a5,	// (0x00045d02) main_radioblah_pane_t2_ParamLimits

0xe0a5,	// (0x00045d02) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000478e7) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000478e7) main_radioblah_pane_t

0xc399,	// (0x00043ff6) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc399,	// (0x00043ff6) main_radioblah_rocker_ctrl_pane

0xe0ed,	// (0x00045d4a) main_radioblah_info_pane_t1_ParamLimits

0xe0ed,	// (0x00045d4a) main_radioblah_info_pane_t1

0xc3de,	// (0x0004403b) main_radioblah_info_pane_t2_ParamLimits

0xc3de,	// (0x0004403b) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000478f0) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000478f0) main_radioblah_info_pane_t

0x26f0,	// (0x0003a34d) main_radioblah_rocker_ctrl_pane_g1

0xc48e,	// (0x000440eb) main_radioblah_rocker_ctrl_pane_g2

0xc496,	// (0x000440f3) main_radioblah_rocker_ctrl_pane_g3

0xc49e,	// (0x000440fb) main_radioblah_rocker_ctrl_pane_g4

0xc4a6,	// (0x00044103) main_radioblah_rocker_ctrl_pane_g5

0xc4ae,	// (0x0004410b) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000478f9) main_radioblah_rocker_ctrl_pane_g

0xbebe,	// (0x00043b1b) main_cset_text2_pane_t1_copy1_ParamLimits

0xa712,	// (0x0004236f) cam4_image_uncrop_qvga_pane

0xa859,	// (0x000424b6) vid4_image_uncrop_qcif_pane

0xbab2,	// (0x0004370f) cam6_image_uncrop_qvga_pane_ParamLimits

0xbab2,	// (0x0004370f) cam6_image_uncrop_qvga_pane

0xd938,	// (0x00045595) vid6_image_uncrop_qcif_pane_ParamLimits

0xd938,	// (0x00045595) vid6_image_uncrop_qcif_pane

0xe743,	// (0x000463a0) bg_popup_preview_window_pane_cp03

0xdbe3,	// (0x00045840) list_cset_text2_pane

0xdbeb,	// (0x00045848) main_cset6_text2_pane_g1

0xdbf3,	// (0x00045850) main_cset6_text2_pane_t1

0xc4b6,	// (0x00044113) list_cset_text2_pane_t1_ParamLimits

0xc4b6,	// (0x00044113) list_cset_text2_pane_t1

0x0c9d,	// (0x000388fa) main_radioblah_pane_ParamLimits

0xc233,	// (0x00043e90) main_mobtv_info_pane_t3_ParamLimits

0xc233,	// (0x00043e90) main_mobtv_info_pane_t3

0xc387,	// (0x00043fe4) main_radioblah_pane_g1

0xc3b2,	// (0x0004400f) main_radioblah_info_pane_g1

0xc433,	// (0x00044090) main_radioblah_info_pane_t3_ParamLimits

0xc433,	// (0x00044090) main_radioblah_info_pane_t3

0x771c,	// (0x0003f379) highlight_cell_cale_month_pane_ParamLimits

0x771c,	// (0x0003f379) highlight_cell_cale_month_pane

0xe743,	// (0x000463a0) main_phob_fisheye_pane

0x2a5b,	// (0x0003a6b8) scroll_pane_cp0031_ParamLimits

0x2a5b,	// (0x0003a6b8) scroll_pane_cp0031

0xda46,	// (0x000456a3) wait_bar_pane_cp08_ParamLimits

0xbc87,	// (0x000438e4) cset_list_set_pane_copy1_ParamLimits

0xe127,	// (0x00045d84) highlight_cell_cale_month_pane_g1

0xc4d3,	// (0x00044130) highlight_cell_cale_month_pane_t1

0xd6ce,	// (0x0004532b) list_gen_pane_cp01

0x32d0,	// (0x0003af2d) scroll_pane_01

0xc4e1,	// (0x0004413e) list_single_double_fisheye_pane

0x4b1d,	// (0x0003c77a) list_double_fisheye_pane_g1_ParamLimits

0x4b1d,	// (0x0003c77a) list_double_fisheye_pane_g1

0x4b29,	// (0x0003c786) list_double_fisheye_pane_g2_ParamLimits

0x4b29,	// (0x0003c786) list_double_fisheye_pane_g2

0xc4ea,	// (0x00044147) list_double_fisheye_pane_g3_ParamLimits

0xc4ea,	// (0x00044147) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x00047906) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x00047906) list_double_fisheye_pane_g

0x4b5a,	// (0x0003c7b7) list_double_fisheye_pane_t1_ParamLimits

0x4b5a,	// (0x0003c7b7) list_double_fisheye_pane_t1

0x4b75,	// (0x0003c7d2) list_double_fisheye_pane_t2_ParamLimits

0x4b75,	// (0x0003c7d2) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x00047911) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x00047911) list_double_fisheye_pane_t

0xe743,	// (0x000463a0) main_call5_pane

0xc2fa,	// (0x00043f57) sc_swipe_pane_ParamLimits

0xc2fa,	// (0x00043f57) sc_swipe_pane

0xc502,	// (0x0004415f) call5_image_pane_ParamLimits

0xc502,	// (0x0004415f) call5_image_pane

0xc512,	// (0x0004416f) call5_swipe_1_pane_ParamLimits

0xc512,	// (0x0004416f) call5_swipe_1_pane

0xc51e,	// (0x0004417b) call5_swipe_2_pane_ParamLimits

0xc51e,	// (0x0004417b) call5_swipe_2_pane

0xc538,	// (0x00044195) popup_call5_audio_first_window_ParamLimits

0xc538,	// (0x00044195) popup_call5_audio_first_window

0x2953,	// (0x0003a5b0) call5_swipe_1_pane_g1_ParamLimits

0x2953,	// (0x0003a5b0) call5_swipe_1_pane_g1

0xe12f,	// (0x00045d8c) call5_swipe_1_pane_g2_ParamLimits

0xe12f,	// (0x00045d8c) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x00047916) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x00047916) call5_swipe_1_pane_g

0xe13b,	// (0x00045d98) call5_swipe_1_pane_t1_ParamLimits

0xe13b,	// (0x00045d98) call5_swipe_1_pane_t1

0x2953,	// (0x0003a5b0) call5_swipe_2_pane_g1_ParamLimits

0x2953,	// (0x0003a5b0) call5_swipe_2_pane_g1

0xe150,	// (0x00045dad) call5_swipe_2_pane_g2_ParamLimits

0xe150,	// (0x00045dad) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0004791b) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0004791b) call5_swipe_2_pane_g

0xe15c,	// (0x00045db9) call5_swipe_2_pane_t1_ParamLimits

0xe15c,	// (0x00045db9) call5_swipe_2_pane_t1

0xe171,	// (0x00045dce) sc_swipe_pane_g1_ParamLimits

0xe171,	// (0x00045dce) sc_swipe_pane_g1

0xe17e,	// (0x00045ddb) sc_swipe_pane_g2_ParamLimits

0xe17e,	// (0x00045ddb) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x00047920) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x00047920) sc_swipe_pane_g

0xe18a,	// (0x00045de7) sc_swipe_pane_t1_ParamLimits

0xe18a,	// (0x00045de7) sc_swipe_pane_t1

0xe743,	// (0x000463a0) main_cmail_launcher_pane

0xc546,	// (0x000441a3) aid_size_cell_cmail_l_ParamLimits

0xc546,	// (0x000441a3) aid_size_cell_cmail_l

0xc556,	// (0x000441b3) grid_cmail_l_pane_ParamLimits

0xc556,	// (0x000441b3) grid_cmail_l_pane

0xc566,	// (0x000441c3) cell_cmail_l_pane_ParamLimits

0xc566,	// (0x000441c3) cell_cmail_l_pane

0xc57a,	// (0x000441d7) cell_cmail_l_pane_g1_ParamLimits

0xc57a,	// (0x000441d7) cell_cmail_l_pane_g1

0xc586,	// (0x000441e3) cell_cmail_l_pane_t1_ParamLimits

0xc586,	// (0x000441e3) cell_cmail_l_pane_t1

0xe19f,	// (0x00045dfc) cell_cmail_l_pane_t2_ParamLimits

0xe19f,	// (0x00045dfc) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x00047925) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x00047925) cell_cmail_l_pane_t

0x0c9d,	// (0x000388fa) grid_highlight_pane_cp018_ParamLimits

0x0c9d,	// (0x000388fa) grid_highlight_pane_cp018

0x57b9,	// (0x0003d416) main2_pane_ParamLimits

0x57b9,	// (0x0003d416) main2_pane

0x02b4,	// (0x00037f11) popup_sp_fs_action_menu_bg_pane_g1

0x02bc,	// (0x00037f19) popup_sp_fs_action_menu_bg_pane_g2

0x02c4,	// (0x00037f21) popup_sp_fs_action_menu_bg_pane_g3

0x02cc,	// (0x00037f29) popup_sp_fs_action_menu_bg_pane_g4

0x02d4,	// (0x00037f31) popup_sp_fs_action_menu_bg_pane_g5

0x02dc,	// (0x00037f39) popup_sp_fs_action_menu_bg_pane_g6

0x02e4,	// (0x00037f41) popup_sp_fs_action_menu_bg_pane_g7

0x02ec,	// (0x00037f49) popup_sp_fs_action_menu_bg_pane_g8

0x02f4,	// (0x00037f51) popup_sp_fs_action_menu_bg_pane_g9

0x02fc,	// (0x00037f59) popup_sp_fs_action_menu_bg_pane_g10

0x02fc,	// (0x00037f59) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x00046de7) popup_sp_fs_action_menu_bg_pane_g

0x42e3,	// (0x0003bf40) list_medium_line_x2_t3_g3_g1_ParamLimits

0x42e3,	// (0x0003bf40) list_medium_line_x2_t3_g3_g1

0x42ef,	// (0x0003bf4c) list_medium_line_x2_t3_g3_g2_ParamLimits

0x42ef,	// (0x0003bf4c) list_medium_line_x2_t3_g3_g2

0x42fb,	// (0x0003bf58) list_medium_line_x2_t3_g3_g3_ParamLimits

0x42fb,	// (0x0003bf58) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x00046e95) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x00046e95) list_medium_line_x2_t3_g3_g

0x4307,	// (0x0003bf64) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4307,	// (0x0003bf64) list_medium_line_x2_t3_g3_t1

0x431c,	// (0x0003bf79) list_medium_line_x2_t3_g3_t2_ParamLimits

0x431c,	// (0x0003bf79) list_medium_line_x2_t3_g3_t2

0x432e,	// (0x0003bf8b) list_medium_line_x2_t3_g3_t3_ParamLimits

0x432e,	// (0x0003bf8b) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x00046e9c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x00046e9c) list_medium_line_x2_t3_g3_t

0x42e3,	// (0x0003bf40) list_medium_line_x2_t3_g2_g1_ParamLimits

0x42e3,	// (0x0003bf40) list_medium_line_x2_t3_g2_g1

0x42fb,	// (0x0003bf58) list_medium_line_x2_t3_g2_g2_ParamLimits

0x42fb,	// (0x0003bf58) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x00046ea3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x00046ea3) list_medium_line_x2_t3_g2_g

0x4343,	// (0x0003bfa0) list_medium_line_x2_t3_g2_t1_ParamLimits

0x4343,	// (0x0003bfa0) list_medium_line_x2_t3_g2_t1

0x4359,	// (0x0003bfb6) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4359,	// (0x0003bfb6) list_medium_line_x2_t3_g2_t2

0x436b,	// (0x0003bfc8) list_medium_line_x2_t3_g2_t3_ParamLimits

0x436b,	// (0x0003bfc8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x00046ea8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x00046ea8) list_medium_line_x2_t3_g2_t

0x42e3,	// (0x0003bf40) list_medium_line_x2_t4_g4_g1_ParamLimits

0x42e3,	// (0x0003bf40) list_medium_line_x2_t4_g4_g1

0x4388,	// (0x0003bfe5) list_medium_line_x2_t4_g4_g2_ParamLimits

0x4388,	// (0x0003bfe5) list_medium_line_x2_t4_g4_g2

0x42ef,	// (0x0003bf4c) list_medium_line_x2_t4_g4_g3_ParamLimits

0x42ef,	// (0x0003bf4c) list_medium_line_x2_t4_g4_g3

0x4394,	// (0x0003bff1) list_medium_line_x2_t4_g4_g4_ParamLimits

0x4394,	// (0x0003bff1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x00046eaf) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x00046eaf) list_medium_line_x2_t4_g4_g

0x43a0,	// (0x0003bffd) list_medium_line_x2_t4_g4_t1_ParamLimits

0x43a0,	// (0x0003bffd) list_medium_line_x2_t4_g4_t1

0x43ba,	// (0x0003c017) list_medium_line_x2_t4_g4_t2_ParamLimits

0x43ba,	// (0x0003c017) list_medium_line_x2_t4_g4_t2

0x43d0,	// (0x0003c02d) list_medium_line_x2_t4_g4_t3_ParamLimits

0x43d0,	// (0x0003c02d) list_medium_line_x2_t4_g4_t3

0x43e5,	// (0x0003c042) list_medium_line_x2_t4_g4_t4_ParamLimits

0x43e5,	// (0x0003c042) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x00046eb8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x00046eb8) list_medium_line_x2_t4_g4_t

0x42e3,	// (0x0003bf40) list_medium_line_x2_t2_g4_g1_ParamLimits

0x42e3,	// (0x0003bf40) list_medium_line_x2_t2_g4_g1

0x4388,	// (0x0003bfe5) list_medium_line_x2_t2_g4_g2_ParamLimits

0x4388,	// (0x0003bfe5) list_medium_line_x2_t2_g4_g2

0x42ef,	// (0x0003bf4c) list_medium_line_x2_t2_g4_g3_ParamLimits

0x42ef,	// (0x0003bf4c) list_medium_line_x2_t2_g4_g3

0x42fb,	// (0x0003bf58) list_medium_line_x2_t2_g4_g4_ParamLimits

0x42fb,	// (0x0003bf58) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x00046f1f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x00046f1f) list_medium_line_x2_t2_g4_g

0x43f7,	// (0x0003c054) list_medium_line_x2_t2_g4_t1_ParamLimits

0x43f7,	// (0x0003c054) list_medium_line_x2_t2_g4_t1

0x432e,	// (0x0003bf8b) list_medium_line_x2_t2_g4_t2_ParamLimits

0x432e,	// (0x0003bf8b) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x00046f28) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x00046f28) list_medium_line_x2_t2_g4_t

0x42e3,	// (0x0003bf40) list_medium_line_x2_t2_g3_g1_ParamLimits

0x42e3,	// (0x0003bf40) list_medium_line_x2_t2_g3_g1

0x42ef,	// (0x0003bf4c) list_medium_line_x2_t2_g3_g2_ParamLimits

0x42ef,	// (0x0003bf4c) list_medium_line_x2_t2_g3_g2

0x42fb,	// (0x0003bf58) list_medium_line_x2_t2_g3_g3_ParamLimits

0x42fb,	// (0x0003bf58) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x00046e95) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x00046e95) list_medium_line_x2_t2_g3_g

0x440c,	// (0x0003c069) list_medium_line_x2_t2_g3_t1_ParamLimits

0x440c,	// (0x0003c069) list_medium_line_x2_t2_g3_t1

0x432e,	// (0x0003bf8b) list_medium_line_x2_t2_g3_t2_ParamLimits

0x432e,	// (0x0003bf8b) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x00046f2d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x00046f2d) list_medium_line_x2_t2_g3_t

0x78f4,	// (0x0003f551) main_sp_fs_list_pane_ParamLimits

0x78f4,	// (0x0003f551) main_sp_fs_list_pane

0x7900,	// (0x0003f55d) sp_fs_scroll_pane_ParamLimits

0x7900,	// (0x0003f55d) sp_fs_scroll_pane

0x4421,	// (0x0003c07e) list_medium_line_x2_t3_t1

0x4431,	// (0x0003c08e) list_medium_line_x2_t3_t2

0x443f,	// (0x0003c09c) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x00046f78) list_medium_line_x2_t3_t

0x444d,	// (0x0003c0aa) list_medium_line_x3_t4_t1

0x445d,	// (0x0003c0ba) list_medium_line_x3_t4_t2

0x446b,	// (0x0003c0c8) list_medium_line_x3_t4_t3

0x443f,	// (0x0003c09c) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x00046f7f) list_medium_line_x3_t4_t

0x4479,	// (0x0003c0d6) list_medium_line_x4_t5_t1

0x4489,	// (0x0003c0e6) list_medium_line_x4_t5_t2

0x446b,	// (0x0003c0c8) list_medium_line_x4_t5_t3

0x4497,	// (0x0003c0f4) list_medium_line_x4_t5_t4

0x443f,	// (0x0003c09c) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x00046f88) list_medium_line_x4_t5_t

0x42e3,	// (0x0003bf40) list_medium_line_t4_g4_g1_ParamLimits

0x42e3,	// (0x0003bf40) list_medium_line_t4_g4_g1

0x4394,	// (0x0003bff1) list_medium_line_t4_g4_g2_ParamLimits

0x4394,	// (0x0003bff1) list_medium_line_t4_g4_g2

0x44a5,	// (0x0003c102) list_medium_line_t4_g4_g3_ParamLimits

0x44a5,	// (0x0003c102) list_medium_line_t4_g4_g3

0x42fb,	// (0x0003bf58) list_medium_line_t4_g4_g4_ParamLimits

0x42fb,	// (0x0003bf58) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x00046f93) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x00046f93) list_medium_line_t4_g4_g

0x44b1,	// (0x0003c10e) list_medium_line_t4_g4_t1_ParamLimits

0x44b1,	// (0x0003c10e) list_medium_line_t4_g4_t1

0x44c6,	// (0x0003c123) list_medium_line_t4_g4_t2_ParamLimits

0x44c6,	// (0x0003c123) list_medium_line_t4_g4_t2

0x44db,	// (0x0003c138) list_medium_line_t4_g4_t3_ParamLimits

0x44db,	// (0x0003c138) list_medium_line_t4_g4_t3

0x432e,	// (0x0003bf8b) list_medium_line_t4_g4_t4_ParamLimits

0x432e,	// (0x0003bf8b) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x00046f9c) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x00046f9c) list_medium_line_t4_g4_t

0x7a0d,	// (0x0003f66a) chi_dic_find_pane_g1

0x887c,	// (0x000404d9) main_tport_pane

0x47a5,	// (0x0003c402) list_medium_line_plain_t1

0x47b3,	// (0x0003c410) list_medium_line_t2_g2_g1_ParamLimits

0x47b3,	// (0x0003c410) list_medium_line_t2_g2_g1

0x47bf,	// (0x0003c41c) list_medium_line_t2_g2_g2_ParamLimits

0x47bf,	// (0x0003c41c) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0004765d) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0004765d) list_medium_line_t2_g2_g

0x47cb,	// (0x0003c428) list_medium_line_t2_g2_t1_ParamLimits

0x47cb,	// (0x0003c428) list_medium_line_t2_g2_t1

0x47e5,	// (0x0003c442) list_medium_line_t2_g2_t2_ParamLimits

0x47e5,	// (0x0003c442) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x00047662) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x00047662) list_medium_line_t2_g2_t

0x4a05,	// (0x0003c662) aid_sp_fs_list_icon_a_sm

0x4a0d,	// (0x0003c66a) aid_sp_fs_list_icon_d

0x4a15,	// (0x0003c672) aid_sp_fs_text_primary

0xd6d7,	// (0x00045334) aid_sp_fs_text_secondary

0xb78c,	// (0x000433e9) list_medium_line

0xb78c,	// (0x000433e9) list_medium_line_g2

0xb78c,	// (0x000433e9) list_medium_line_g3

0xb78c,	// (0x000433e9) list_medium_line_plain

0xb78c,	// (0x000433e9) list_medium_line_plain_t2

0xb78c,	// (0x000433e9) list_medium_line_plain_t3

0xb78c,	// (0x000433e9) list_medium_line_right_icon

0xb78c,	// (0x000433e9) list_medium_line_right_iconx2

0xb78c,	// (0x000433e9) list_medium_line_t2

0xb78c,	// (0x000433e9) list_medium_line_t2_g2

0xb78c,	// (0x000433e9) list_medium_line_t2_g3

0xb78c,	// (0x000433e9) list_medium_line_t2_right_icon

0xb78c,	// (0x000433e9) list_medium_line_t2_right_iconx2

0xb78c,	// (0x000433e9) list_medium_line_t3

0xb78c,	// (0x000433e9) list_medium_line_t3_g2

0xb78c,	// (0x000433e9) list_medium_line_t3_g3

0xb78c,	// (0x000433e9) list_medium_line_t3_right_iconx2

0x4a1e,	// (0x0003c67b) list_medium_line_t4_g4

0xb795,	// (0x000433f2) list_medium_line_x2

0xb795,	// (0x000433f2) list_medium_line_x2_t2_g2

0xb795,	// (0x000433f2) list_medium_line_x2_t2_g3

0xb795,	// (0x000433f2) list_medium_line_x2_t2_g4

0xb795,	// (0x000433f2) list_medium_line_x2_t3

0xb795,	// (0x000433f2) list_medium_line_x2_t3_g2

0xb795,	// (0x000433f2) list_medium_line_x2_t3_g3

0xb795,	// (0x000433f2) list_medium_line_x2_t3_g4

0xb795,	// (0x000433f2) list_medium_line_x2_t4_g2

0xb795,	// (0x000433f2) list_medium_line_x2_t4_g4

0x4a27,	// (0x0003c684) list_medium_line_x3

0x4a27,	// (0x0003c684) list_medium_line_x3_t4

0x4a27,	// (0x0003c684) list_medium_line_x3_t4_g4

0x4a1e,	// (0x0003c67b) list_medium_line_x4_t4

0x4a1e,	// (0x0003c67b) list_medium_line_x4_t4_g7

0x4a1e,	// (0x0003c67b) list_medium_line_x4_t5

0x4a30,	// (0x0003c68d) list_single_fs_dyc_pane_ParamLimits

0x4a30,	// (0x0003c68d) list_single_fs_dyc_pane

0x42e3,	// (0x0003bf40) list_medium_line_x4_t4_g7_g1_ParamLimits

0x42e3,	// (0x0003bf40) list_medium_line_x4_t4_g7_g1

0x4a4c,	// (0x0003c6a9) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4a4c,	// (0x0003c6a9) list_medium_line_x4_t4_g7_g2

0x4a58,	// (0x0003c6b5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4a58,	// (0x0003c6b5) list_medium_line_x4_t4_g7_g3

0x4a67,	// (0x0003c6c4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4a67,	// (0x0003c6c4) list_medium_line_x4_t4_g7_g4

0x4a73,	// (0x0003c6d0) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4a73,	// (0x0003c6d0) list_medium_line_x4_t4_g7_g5

0x4a82,	// (0x0003c6df) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4a82,	// (0x0003c6df) list_medium_line_x4_t4_g7_g6

0x4a91,	// (0x0003c6ee) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4a91,	// (0x0003c6ee) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0004782d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0004782d) list_medium_line_x4_t4_g7_g

0x4a9d,	// (0x0003c6fa) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4a9d,	// (0x0003c6fa) list_medium_line_x4_t4_g7_t1

0x4ab2,	// (0x0003c70f) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4ab2,	// (0x0003c70f) list_medium_line_x4_t4_g7_t2

0x4ac7,	// (0x0003c724) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4ac7,	// (0x0003c724) list_medium_line_x4_t4_g7_t3

0x4adc,	// (0x0003c739) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4adc,	// (0x0003c739) list_medium_line_x4_t4_g7_t4

0x4aee,	// (0x0003c74b) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4aee,	// (0x0003c74b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0004783c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0004783c) list_medium_line_x4_t4_g7_t

0x4b00,	// (0x0003c75d) list_single_dyc_row_pane_ParamLimits

0x4b00,	// (0x0003c75d) list_single_dyc_row_pane

0xc4f6,	// (0x00044153) call5_gesture_pane_ParamLimits

0xc4f6,	// (0x00044153) call5_gesture_pane

0xc52a,	// (0x00044187) call5_windows_pane_ParamLimits

0xc52a,	// (0x00044187) call5_windows_pane

0xc59c,	// (0x000441f9) call5_swipe_1_pane_cp_ParamLimits

0xc59c,	// (0x000441f9) call5_swipe_1_pane_cp

0xc5a8,	// (0x00044205) call5_swipe_2_pane_cp_ParamLimits

0xc5a8,	// (0x00044205) call5_swipe_2_pane_cp

0x03e0,	// (0x0003803d) call5_image_pane_cp

0xc5b4,	// (0x00044211) popup_call5_audio_first_window_cp_ParamLimits

0xc5b4,	// (0x00044211) popup_call5_audio_first_window_cp

0xe171,	// (0x00045dce) call5_swipe_1_pane_g1_cp_ParamLimits

0xe171,	// (0x00045dce) call5_swipe_1_pane_g1_cp

0xe1b1,	// (0x00045e0e) call5_swipe_1_pane_g2_cp

0xe18a,	// (0x00045de7) call5_swipe_1_pane_t1_cp_ParamLimits

0xe18a,	// (0x00045de7) call5_swipe_1_pane_t1_cp

0xe171,	// (0x00045dce) call5_swipe_2_pane_g1_cp_ParamLimits

0xe171,	// (0x00045dce) call5_swipe_2_pane_g1_cp

0xe1b9,	// (0x00045e16) call5_swipe_2_pane_g2_cp

0xe1c1,	// (0x00045e1e) call5_swipe_2_pane_t1_cp_ParamLimits

0xe1c1,	// (0x00045e1e) call5_swipe_2_pane_t1_cp

0x0c9d,	// (0x000388fa) main_sp_fs_email_pane

0xe1d6,	// (0x00045e33) main_sp_fs_listscroll_pane_te

0x4b97,	// (0x0003c7f4) popup_sp_fs_action_menu_pane_ParamLimits

0x4b97,	// (0x0003c7f4) popup_sp_fs_action_menu_pane

0x26f0,	// (0x0003a34d) bg_sp_fs_ctrlbar_pane_g1

0xe1df,	// (0x00045e3c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe1e8,	// (0x00045e45) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe1f1,	// (0x00045e4e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x26f0,	// (0x0003a34d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0004792a) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x24c0,	// (0x0003a11d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x24c0,	// (0x0003a11d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe1fa,	// (0x00045e57) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe1fa,	// (0x00045e57) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe206,	// (0x00045e63) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe206,	// (0x00045e63) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x00047933) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x00047933) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe212,	// (0x00045e6f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe212,	// (0x00045e6f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x4bd9,	// (0x0003c836) list_medium_line_t2_right_icon_g1

0x4be1,	// (0x0003c83e) list_medium_line_t2_right_icon_t1

0x4bf1,	// (0x0003c84e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x00047938) list_medium_line_t2_right_icon_t

0x22d3,	// (0x00039f30) bg_sp_fs_ctrlbar_pane_ParamLimits

0x22d3,	// (0x00039f30) bg_sp_fs_ctrlbar_pane

0xc619,	// (0x00044276) main_sp_fs_ctrlbar_button_pane_cp01

0xc621,	// (0x0004427e) main_sp_fs_ctrlbar_ddmenu_pane

0xe264,	// (0x00045ec1) main_sp_fs_ctrlbar_pane_g1

0xe270,	// (0x00045ecd) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0004793d) main_sp_fs_ctrlbar_pane_g

0xe27c,	// (0x00045ed9) main_sp_fs_ctrlbar_pane_t1

0xc62b,	// (0x00044288) main_sp_fs_ctrlbar_pane

0xc641,	// (0x0004429e) main_sp_fs_listscroll_pane_te_cp01

0x4bff,	// (0x0003c85c) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x4bff,	// (0x0003c85c) popup_sp_fs_action_menu_pane_cp01

0x0c9d,	// (0x000388fa) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0c9d,	// (0x000388fa) bg_sp_fs_highlight_list_pane_cp01

0x4c29,	// (0x0003c886) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4c29,	// (0x0003c886) sp_fs_action_menu_list_gene_pane_g1

0xe2ac,	// (0x00045f09) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe2ac,	// (0x00045f09) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x00047947) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x00047947) sp_fs_action_menu_list_gene_pane_g

0x4c38,	// (0x0003c895) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4c38,	// (0x0003c895) sp_fs_action_menu_list_gene_pane_t1

0x4c50,	// (0x0003c8ad) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4c50,	// (0x0003c8ad) sp_fs_action_menu_list_gene_pane

0xe2b9,	// (0x00045f16) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe2b9,	// (0x00045f16) popup_sp_fs_action_menu_bg_pane

0x4c6f,	// (0x0003c8cc) sp_fs_action_menu_list_pane_ParamLimits

0x4c6f,	// (0x0003c8cc) sp_fs_action_menu_list_pane

0xe2c7,	// (0x00045f24) sp_fs_scroll_pane_cp01_ParamLimits

0xe2c7,	// (0x00045f24) sp_fs_scroll_pane_cp01

0x4c8f,	// (0x0003c8ec) list_medium_line_plain_t2_t1

0x4c9f,	// (0x0003c8fc) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0004794c) list_medium_line_plain_t2_t

0x4cad,	// (0x0003c90a) list_medium_line_plain_t3_t1

0x4cbd,	// (0x0003c91a) list_medium_line_plain_t3_t2

0x4ccb,	// (0x0003c928) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x00047951) list_medium_line_plain_t3_t

0x42e3,	// (0x0003bf40) list_medium_line_x2_t2_g2_g1_ParamLimits

0x42e3,	// (0x0003bf40) list_medium_line_x2_t2_g2_g1

0x42fb,	// (0x0003bf58) list_medium_line_x2_t2_g2_g2_ParamLimits

0x42fb,	// (0x0003bf58) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x00046ea3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x00046ea3) list_medium_line_x2_t2_g2_g

0x44b1,	// (0x0003c10e) list_medium_line_x2_t2_g2_t1_ParamLimits

0x44b1,	// (0x0003c10e) list_medium_line_x2_t2_g2_t1

0x432e,	// (0x0003bf8b) list_medium_line_x2_t2_g2_t2_ParamLimits

0x432e,	// (0x0003bf8b) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x00047958) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x00047958) list_medium_line_x2_t2_g2_t

0x42e3,	// (0x0003bf40) list_medium_line_x2_t4_g2_g1_ParamLimits

0x42e3,	// (0x0003bf40) list_medium_line_x2_t4_g2_g1

0x4cd9,	// (0x0003c936) list_medium_line_x2_t4_g2_g2_ParamLimits

0x4cd9,	// (0x0003c936) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0004795d) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0004795d) list_medium_line_x2_t4_g2_g

0x4ceb,	// (0x0003c948) list_medium_line_x2_t4_g2_t1_ParamLimits

0x4ceb,	// (0x0003c948) list_medium_line_x2_t4_g2_t1

0x4d05,	// (0x0003c962) list_medium_line_x2_t4_g2_t2_ParamLimits

0x4d05,	// (0x0003c962) list_medium_line_x2_t4_g2_t2

0x4d1b,	// (0x0003c978) list_medium_line_x2_t4_g2_t3_ParamLimits

0x4d1b,	// (0x0003c978) list_medium_line_x2_t4_g2_t3

0x432e,	// (0x0003bf8b) list_medium_line_x2_t4_g2_t4_ParamLimits

0x432e,	// (0x0003bf8b) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x00047962) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x00047962) list_medium_line_x2_t4_g2_t

0x4d30,	// (0x0003c98d) list_medium_line_t3_right_iconx2_g1

0x4bd9,	// (0x0003c836) list_medium_line_t3_right_iconx2_g2

0x4d38,	// (0x0003c995) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0004796b) list_medium_line_t3_right_iconx2_g

0x4d40,	// (0x0003c99d) list_medium_line_t3_right_iconx2_t1

0x4d50,	// (0x0003c9ad) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x00047972) list_medium_line_t3_right_iconx2_t

0x42e3,	// (0x0003bf40) list_medium_line_x3_t4_g4_g1_ParamLimits

0x42e3,	// (0x0003bf40) list_medium_line_x3_t4_g4_g1

0x42ef,	// (0x0003bf4c) list_medium_line_x3_t4_g4_g2_ParamLimits

0x42ef,	// (0x0003bf4c) list_medium_line_x3_t4_g4_g2

0x4394,	// (0x0003bff1) list_medium_line_x3_t4_g4_g3_ParamLimits

0x4394,	// (0x0003bff1) list_medium_line_x3_t4_g4_g3

0x4d5e,	// (0x0003c9bb) list_medium_line_x3_t4_g4_g4_ParamLimits

0x4d5e,	// (0x0003c9bb) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x00047977) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x00047977) list_medium_line_x3_t4_g4_g

0x4d6a,	// (0x0003c9c7) list_medium_line_x3_t4_g4_t1_ParamLimits

0x4d6a,	// (0x0003c9c7) list_medium_line_x3_t4_g4_t1

0x4d81,	// (0x0003c9de) list_medium_line_x3_t4_g4_t2_ParamLimits

0x4d81,	// (0x0003c9de) list_medium_line_x3_t4_g4_t2

0x44c6,	// (0x0003c123) list_medium_line_x3_t4_g4_t3_ParamLimits

0x44c6,	// (0x0003c123) list_medium_line_x3_t4_g4_t3

0x4d96,	// (0x0003c9f3) list_medium_line_x3_t4_g4_t4_ParamLimits

0x4d96,	// (0x0003c9f3) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x00047980) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x00047980) list_medium_line_x3_t4_g4_t

0x4db3,	// (0x0003ca10) list_single_dyc_row_text_pane_t1_ParamLimits

0x4db3,	// (0x0003ca10) list_single_dyc_row_text_pane_t1

0x4dea,	// (0x0003ca47) list_single_dyc_row_text_pane_t2_ParamLimits

0x4dea,	// (0x0003ca47) list_single_dyc_row_text_pane_t2

0x4e60,	// (0x0003cabd) list_single_dyc_row_text_pane_t3_ParamLimits

0x4e60,	// (0x0003cabd) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x00047989) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x00047989) list_single_dyc_row_text_pane_t

0x4f31,	// (0x0003cb8e) list_single_dyc_row_pane_g1_ParamLimits

0x4f31,	// (0x0003cb8e) list_single_dyc_row_pane_g1

0x4f3d,	// (0x0003cb9a) list_single_dyc_row_pane_g2_ParamLimits

0x4f3d,	// (0x0003cb9a) list_single_dyc_row_pane_g2

0x4f49,	// (0x0003cba6) list_single_dyc_row_pane_g3_ParamLimits

0x4f49,	// (0x0003cba6) list_single_dyc_row_pane_g3

0x4f55,	// (0x0003cbb2) list_single_dyc_row_pane_g4_ParamLimits

0x4f55,	// (0x0003cbb2) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x00047996) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x00047996) list_single_dyc_row_pane_g

0x4f61,	// (0x0003cbbe) list_single_dyc_row_text_pane_ParamLimits

0x4f61,	// (0x0003cbbe) list_single_dyc_row_text_pane

0xe743,	// (0x000463a0) bg_sp_fs_scroll_pane

0xe2ed,	// (0x00045f4a) thumb_sp_fs_scroll_pane

0x47b3,	// (0x0003c410) list_medium_line_g1_ParamLimits

0x47b3,	// (0x0003c410) list_medium_line_g1

0x4f80,	// (0x0003cbdd) list_medium_line_t1_ParamLimits

0x4f80,	// (0x0003cbdd) list_medium_line_t1

0x42e3,	// (0x0003bf40) list_medium_line_x2_g1_ParamLimits

0x42e3,	// (0x0003bf40) list_medium_line_x2_g1

0x42ef,	// (0x0003bf4c) list_medium_line_x2_g2_ParamLimits

0x42ef,	// (0x0003bf4c) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0004799f) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0004799f) list_medium_line_x2_g

0x4f95,	// (0x0003cbf2) list_medium_line_x2_t1_ParamLimits

0x4f95,	// (0x0003cbf2) list_medium_line_x2_t1

0x42e3,	// (0x0003bf40) list_medium_line_x3_g1_ParamLimits

0x42e3,	// (0x0003bf40) list_medium_line_x3_g1

0x42ef,	// (0x0003bf4c) list_medium_line_x3_g2_ParamLimits

0x42ef,	// (0x0003bf4c) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0004799f) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0004799f) list_medium_line_x3_g

0x4f95,	// (0x0003cbf2) list_medium_line_x3_t1_ParamLimits

0x4f95,	// (0x0003cbf2) list_medium_line_x3_t1

0xe2f6,	// (0x00045f53) thumb_sp_fs_scroll_pane_g1

0xe2ff,	// (0x00045f5c) thumb_sp_fs_scroll_pane_g2

0xe308,	// (0x00045f65) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000479a4) thumb_sp_fs_scroll_pane_g

0xe2f6,	// (0x00045f53) bg_sp_fs_scroll_pane_g1

0xe2ff,	// (0x00045f5c) bg_sp_fs_scroll_pane_g2

0xe308,	// (0x00045f65) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000479a4) bg_sp_fs_scroll_pane_g

0x42e3,	// (0x0003bf40) list_medium_line_x2_t3_g4_g1_ParamLimits

0x42e3,	// (0x0003bf40) list_medium_line_x2_t3_g4_g1

0x4388,	// (0x0003bfe5) list_medium_line_x2_t3_g4_g2_ParamLimits

0x4388,	// (0x0003bfe5) list_medium_line_x2_t3_g4_g2

0x42ef,	// (0x0003bf4c) list_medium_line_x2_t3_g4_g3_ParamLimits

0x42ef,	// (0x0003bf4c) list_medium_line_x2_t3_g4_g3

0x42fb,	// (0x0003bf58) list_medium_line_x2_t3_g4_g4_ParamLimits

0x42fb,	// (0x0003bf58) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x00046f1f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x00046f1f) list_medium_line_x2_t3_g4_g

0x4fab,	// (0x0003cc08) list_medium_line_x2_t3_g4_t1_ParamLimits

0x4fab,	// (0x0003cc08) list_medium_line_x2_t3_g4_t1

0x4fc1,	// (0x0003cc1e) list_medium_line_x2_t3_g4_t2_ParamLimits

0x4fc1,	// (0x0003cc1e) list_medium_line_x2_t3_g4_t2

0x432e,	// (0x0003bf8b) list_medium_line_x2_t3_g4_t3_ParamLimits

0x432e,	// (0x0003bf8b) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000479ab) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000479ab) list_medium_line_x2_t3_g4_t

0x47b3,	// (0x0003c410) list_medium_line_g2_g1_ParamLimits

0x47b3,	// (0x0003c410) list_medium_line_g2_g1

0x47bf,	// (0x0003c41c) list_medium_line_g2_g2_ParamLimits

0x47bf,	// (0x0003c41c) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0004765d) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0004765d) list_medium_line_g2_g

0x4fdb,	// (0x0003cc38) list_medium_line_g2_t1_ParamLimits

0x4fdb,	// (0x0003cc38) list_medium_line_g2_t1

0x47b3,	// (0x0003c410) list_medium_line_t3_g2_g1_ParamLimits

0x47b3,	// (0x0003c410) list_medium_line_t3_g2_g1

0x47bf,	// (0x0003c41c) list_medium_line_t3_g2_g2_ParamLimits

0x47bf,	// (0x0003c41c) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0004765d) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0004765d) list_medium_line_t3_g2_g

0x4ff0,	// (0x0003cc4d) list_medium_line_t3_g2_t1_ParamLimits

0x4ff0,	// (0x0003cc4d) list_medium_line_t3_g2_t1

0x500a,	// (0x0003cc67) list_medium_line_t3_g2_t2_ParamLimits

0x500a,	// (0x0003cc67) list_medium_line_t3_g2_t2

0x5020,	// (0x0003cc7d) list_medium_line_t3_g2_t3_ParamLimits

0x5020,	// (0x0003cc7d) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000479b2) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000479b2) list_medium_line_t3_g2_t

0x4bd9,	// (0x0003c836) list_medium_line_right_icon_g1

0x5036,	// (0x0003cc93) list_medium_line_right_icon_t1

0x47b3,	// (0x0003c410) list_medium_line_t2_g1_ParamLimits

0x47b3,	// (0x0003c410) list_medium_line_t2_g1

0x5044,	// (0x0003cca1) list_medium_line_t2_t1_ParamLimits

0x5044,	// (0x0003cca1) list_medium_line_t2_t1

0x505e,	// (0x0003ccbb) list_medium_line_t2_t2_ParamLimits

0x505e,	// (0x0003ccbb) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000479b9) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000479b9) list_medium_line_t2_t

0x47b3,	// (0x0003c410) list_medium_line_t3_g1_ParamLimits

0x47b3,	// (0x0003c410) list_medium_line_t3_g1

0x5073,	// (0x0003ccd0) list_medium_line_t3_t1_ParamLimits

0x5073,	// (0x0003ccd0) list_medium_line_t3_t1

0x508d,	// (0x0003ccea) list_medium_line_t3_t2_ParamLimits

0x508d,	// (0x0003ccea) list_medium_line_t3_t2

0x50a3,	// (0x0003cd00) list_medium_line_t3_t3_ParamLimits

0x50a3,	// (0x0003cd00) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000479be) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000479be) list_medium_line_t3_t

0x47b3,	// (0x0003c410) list_medium_line_g3_g1_ParamLimits

0x47b3,	// (0x0003c410) list_medium_line_g3_g1

0x50b8,	// (0x0003cd15) list_medium_line_g3_g2_ParamLimits

0x50b8,	// (0x0003cd15) list_medium_line_g3_g2

0x47bf,	// (0x0003c41c) list_medium_line_g3_g3_ParamLimits

0x47bf,	// (0x0003c41c) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000479c5) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000479c5) list_medium_line_g3_g

0x50c4,	// (0x0003cd21) list_medium_line_g3_t1_ParamLimits

0x50c4,	// (0x0003cd21) list_medium_line_g3_t1

0x47b3,	// (0x0003c410) list_medium_line_t2_g3_g1_ParamLimits

0x47b3,	// (0x0003c410) list_medium_line_t2_g3_g1

0x50b8,	// (0x0003cd15) list_medium_line_t2_g3_g2_ParamLimits

0x50b8,	// (0x0003cd15) list_medium_line_t2_g3_g2

0x47bf,	// (0x0003c41c) list_medium_line_t2_g3_g3_ParamLimits

0x47bf,	// (0x0003c41c) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000479c5) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000479c5) list_medium_line_t2_g3_g

0x50d9,	// (0x0003cd36) list_medium_line_t2_g3_t1_ParamLimits

0x50d9,	// (0x0003cd36) list_medium_line_t2_g3_t1

0x50f3,	// (0x0003cd50) list_medium_line_t2_g3_t2_ParamLimits

0x50f3,	// (0x0003cd50) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000479cc) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000479cc) list_medium_line_t2_g3_t

0x47b3,	// (0x0003c410) list_medium_line_t3_g3_g1_ParamLimits

0x47b3,	// (0x0003c410) list_medium_line_t3_g3_g1

0x50b8,	// (0x0003cd15) list_medium_line_t3_g3_g2_ParamLimits

0x50b8,	// (0x0003cd15) list_medium_line_t3_g3_g2

0x47bf,	// (0x0003c41c) list_medium_line_t3_g3_g3_ParamLimits

0x47bf,	// (0x0003c41c) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000479c5) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000479c5) list_medium_line_t3_g3_g

0x5109,	// (0x0003cd66) list_medium_line_t3_g3_t1_ParamLimits

0x5109,	// (0x0003cd66) list_medium_line_t3_g3_t1

0x5122,	// (0x0003cd7f) list_medium_line_t3_g3_t2_ParamLimits

0x5122,	// (0x0003cd7f) list_medium_line_t3_g3_t2

0x5138,	// (0x0003cd95) list_medium_line_t3_g3_t3_ParamLimits

0x5138,	// (0x0003cd95) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000479d1) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000479d1) list_medium_line_t3_g3_t

0x4d30,	// (0x0003c98d) list_medium_line_right_iconx2_g1

0x4bd9,	// (0x0003c836) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000479d8) list_medium_line_right_iconx2_g

0x514e,	// (0x0003cdab) list_medium_line_right_iconx2_t1

0x4d30,	// (0x0003c98d) list_medium_line_t2_right_iconx2_g1

0x4bd9,	// (0x0003c836) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000479d8) list_medium_line_t2_right_iconx2_g

0x515c,	// (0x0003cdb9) list_medium_line_t2_right_iconx2_t1

0x516c,	// (0x0003cdc9) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000479dd) list_medium_line_t2_right_iconx2_t

0x517a,	// (0x0003cdd7) list_medium_line_x4_t4_t1

0x5188,	// (0x0003cde5) list_medium_line_x4_t4_t2

0x5198,	// (0x0003cdf5) list_medium_line_x4_t4_t3

0x51a8,	// (0x0003ce05) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000479e2) list_medium_line_x4_t4_t

0xc67c,	// (0x000442d9) tport_appsw_pane_ParamLimits

0xc67c,	// (0x000442d9) tport_appsw_pane

0xc68a,	// (0x000442e7) tport_contact_pane_ParamLimits

0xc68a,	// (0x000442e7) tport_contact_pane

0xc69a,	// (0x000442f7) tport_listscroll_pane_ParamLimits

0xc69a,	// (0x000442f7) tport_listscroll_pane

0xc6aa,	// (0x00044307) cell_tport_appsw_pane_ParamLimits

0xc6aa,	// (0x00044307) cell_tport_appsw_pane

0x29e4,	// (0x0003a641) tport_appsw_pane_g1_ParamLimits

0x29e4,	// (0x0003a641) tport_appsw_pane_g1

0xe311,	// (0x00045f6e) tport_contact_pane_g1

0xdcc3,	// (0x00045920) tport_contact_pane_t1

0xe31a,	// (0x00045f77) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000479eb) tport_contact_pane_t

0xe328,	// (0x00045f85) list_tport_pane

0xe331,	// (0x00045f8e) scroll_pane_cp_030

0xc6dd,	// (0x0004433a) cell_tport_appsw_pane_g1

0xc6ed,	// (0x0004434a) cell_tport_appsw_pane_t1

0xc6fb,	// (0x00044358) grid_highlight_pane_cp019

0xc703,	// (0x00044360) list_tport_double_graphic_pane_ParamLimits

0xc703,	// (0x00044360) list_tport_double_graphic_pane

0x0c9d,	// (0x000388fa) list_highlight_pane_cp023_ParamLimits

0x0c9d,	// (0x000388fa) list_highlight_pane_cp023

0xc714,	// (0x00044371) list_tport_double_graphic_pane_g1_ParamLimits

0xc714,	// (0x00044371) list_tport_double_graphic_pane_g1

0xc721,	// (0x0004437e) list_tport_double_graphic_pane_t1_ParamLimits

0xc721,	// (0x0004437e) list_tport_double_graphic_pane_t1

0xc736,	// (0x00044393) list_tport_double_graphic_pane_t2_ParamLimits

0xc736,	// (0x00044393) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000479f7) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000479f7) list_tport_double_graphic_pane_t

0xe743,	// (0x000463a0) main_cale_note_pane

0xaaba,	// (0x00042717) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xaaba,	// (0x00042717) cell_vitu2_function_top_wide_pane_cp01

0xc247,	// (0x00043ea4) wait_bar_pane_cp05_ParamLimits

0x0c9d,	// (0x000388fa) listscroll_cmail_pane

0xe33a,	// (0x00045f97) list_cmail_pane

0xc748,	// (0x000443a5) list_cmail_body_pane

0xc76f,	// (0x000443cc) list_single_cmail_header_caption_pane

0xc79a,	// (0x000443f7) list_single_cmail_header_detail_pane_ParamLimits

0xc79a,	// (0x000443f7) list_single_cmail_header_detail_pane

0xe34a,	// (0x00045fa7) list_single_cmail_header_caption_pane_t1

0x51b8,	// (0x0003ce15) list_single_cmail_header_detail_pane_g1_ParamLimits

0x51b8,	// (0x0003ce15) list_single_cmail_header_detail_pane_g1

0x51ce,	// (0x0003ce2b) list_single_cmail_header_detail_pane_g2_ParamLimits

0x51ce,	// (0x0003ce2b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000479fc) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000479fc) list_single_cmail_header_detail_pane_g

0x51da,	// (0x0003ce37) list_single_cmail_header_detail_pane_t1_ParamLimits

0x51da,	// (0x0003ce37) list_single_cmail_header_detail_pane_t1

0x523a,	// (0x0003ce97) list_single_cmail_header_editor_pane_bg_ParamLimits

0x523a,	// (0x0003ce97) list_single_cmail_header_editor_pane_bg

0xde20,	// (0x00045a7d) list_cmail_body_pane_g1

0xe36e,	// (0x00045fcb) list_cmail_body_pane_t1

0x319a,	// (0x0003adf7) list_single_cmail_header_editor_pane_bg_g1

0x0639,	// (0x00038296) list_single_cmail_header_editor_pane_bg_g1_copy1

0x31aa,	// (0x0003ae07) list_single_cmail_header_editor_pane_bg_g1_copy2

0x31a2,	// (0x0003adff) list_single_cmail_header_editor_pane_bg_g1_copy3

0x340a,	// (0x0003b067) list_single_cmail_header_editor_pane_bg_g1_copy4

0x31ca,	// (0x0003ae27) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x31ba,	// (0x0003ae17) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x31c2,	// (0x0003ae1f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0619,	// (0x00038276) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc7d0,	// (0x0004442d) calenote_gesture_pane_ParamLimits

0xc7d0,	// (0x0004442d) calenote_gesture_pane

0xc7ea,	// (0x00044447) calenote_window_pane_ParamLimits

0xc7ea,	// (0x00044447) calenote_window_pane

0xe37c,	// (0x00045fd9) popup_note_window_cp01

0xc802,	// (0x0004445f) calenote_swipe_1_pane_ParamLimits

0xc802,	// (0x0004445f) calenote_swipe_1_pane

0xc5a8,	// (0x00044205) calenote_swipe_2_pane_ParamLimits

0xc5a8,	// (0x00044205) calenote_swipe_2_pane

0xe171,	// (0x00045dce) calenote_swipe_1_pane_g1_ParamLimits

0xe171,	// (0x00045dce) calenote_swipe_1_pane_g1

0xe17e,	// (0x00045ddb) calenote_swipe_1_pane_g2_ParamLimits

0xe17e,	// (0x00045ddb) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x00047920) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x00047920) calenote_swipe_1_pane_g

0xe38e,	// (0x00045feb) calenote_swipe_1_pane_t1_ParamLimits

0xe38e,	// (0x00045feb) calenote_swipe_1_pane_t1

0xe171,	// (0x00045dce) calenote_swipe_2_pane_g1_ParamLimits

0xe171,	// (0x00045dce) calenote_swipe_2_pane_g1

0xe3ad,	// (0x0004600a) calenote_swipe_2_pane_g2_ParamLimits

0xe3ad,	// (0x0004600a) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x00047a08) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x00047a08) calenote_swipe_2_pane_g

0xe3b9,	// (0x00046016) calenote_swipe_2_pane_t1_ParamLimits

0xe3b9,	// (0x00046016) calenote_swipe_2_pane_t1

0xe743,	// (0x000463a0) main_mup_navstr_pane

0x9834,	// (0x00041491) main_mup3_pane_t7_ParamLimits

0x9834,	// (0x00041491) main_mup3_pane_t7

0xa23a,	// (0x00041e97) main_mp4_pane_g6_ParamLimits

0xa23a,	// (0x00041e97) main_mp4_pane_g6

0xa5ac,	// (0x00042209) main_image3_pane_t4_ParamLimits

0xa5ac,	// (0x00042209) main_image3_pane_t4

0xc815,	// (0x00044472) popup_navstr_preview_pane_ParamLimits

0xc815,	// (0x00044472) popup_navstr_preview_pane

0xc821,	// (0x0004447e) scroll_navstr_pane_ParamLimits

0xc821,	// (0x0004447e) scroll_navstr_pane

0xe743,	// (0x000463a0) bg_popup_preview_window_pane_cp04

0xe3e0,	// (0x0004603d) popup_navstr_preview_pane_t1

0xc82d,	// (0x0004448a) scroll_navstr_pane_g1_ParamLimits

0xc82d,	// (0x0004448a) scroll_navstr_pane_g1

0xc83a,	// (0x00044497) scroll_navstr_pane_t1_ParamLimits

0xc83a,	// (0x00044497) scroll_navstr_pane_t1

0xe385,	// (0x00045fe2) bg_button_pane_cp014

0xe385,	// (0x00045fe2) bg_button_pane_cp030

0x4b3d,	// (0x0003c79a) list_double_fisheye_pane_g4_ParamLimits

0x4b3d,	// (0x0003c79a) list_double_fisheye_pane_g4

0x4b49,	// (0x0003c7a6) list_double_fisheye_pane_g5_ParamLimits

0x4b49,	// (0x0003c7a6) list_double_fisheye_pane_g5

0x25fa,	// (0x0003a257) sp_fs_scroll_pane_cp03

0xe264,	// (0x00045ec1) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe270,	// (0x00045ecd) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0004793d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe27c,	// (0x00045ed9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe342,	// (0x00045f9f) sp_fs_scroll_pane_cp02

0x031f,	// (0x00037f7c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x031f,	// (0x00037f7c) popup_sp_fs_calendar_preview_list_single_pane

0xe743,	// (0x000463a0) main_cam6_pano_pane

0x0c9d,	// (0x000388fa) main_mup3_pane_ParamLimits

0xe743,	// (0x000463a0) main_phacti_pane

0xc11c,	// (0x00043d79) bg_button_pane_cp11

0xc134,	// (0x00043d91) main_mobtv_info_pane_g2_ParamLimits

0xc134,	// (0x00043d91) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0004789d) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0004789d) main_mobtv_info_pane_g

0xc2e6,	// (0x00043f43) sc_clock_pane_t5_ParamLimits

0xc2e6,	// (0x00043f43) sc_clock_pane_t5

0xc387,	// (0x00043fe4) main_radioblah_pane_g1_ParamLimits

0xe0bd,	// (0x00045d1a) main_radioblah_pane_t3_ParamLimits

0xe0bd,	// (0x00045d1a) main_radioblah_pane_t3

0xe0d5,	// (0x00045d32) main_radioblah_pane_t4_ParamLimits

0xe0d5,	// (0x00045d32) main_radioblah_pane_t4

0xc3a5,	// (0x00044002) main_radioblah_text_pane_ParamLimits

0xc3a5,	// (0x00044002) main_radioblah_text_pane

0xc3b2,	// (0x0004400f) main_radioblah_info_pane_g1_ParamLimits

0xc447,	// (0x000440a4) main_radioblah_info_pane_t4_ParamLimits

0xc447,	// (0x000440a4) main_radioblah_info_pane_t4

0x0c9d,	// (0x000388fa) main_sp_fs_calendar_pane

0xc84c,	// (0x000444a9) main_phacti_pane_g1

0xc854,	// (0x000444b1) phacti_note_pane_ParamLimits

0xc854,	// (0x000444b1) phacti_note_pane

0xe3f7,	// (0x00046054) phacti_term_pane_ParamLimits

0xe3f7,	// (0x00046054) phacti_term_pane

0xe40c,	// (0x00046069) phacti_note_pane_t1_ParamLimits

0xe40c,	// (0x00046069) phacti_note_pane_t1

0x5251,	// (0x0003ceae) phacti_term_pane_g1

0x5259,	// (0x0003ceb6) phacti_term_pane_t1_ParamLimits

0x5259,	// (0x0003ceb6) phacti_term_pane_t1

0xe423,	// (0x00046080) popup_sp_fs_calendar_preview_list_single_pane_g1

0x03be,	// (0x0003801b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x00047a12) popup_sp_fs_calendar_preview_list_single_pane_g

0xe42b,	// (0x00046088) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe42b,	// (0x00046088) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe441,	// (0x0004609e) aid_popup_sp_fs_bg_corner_pane

0x26f0,	// (0x0003a34d) popup_sp_fs_calendar_preview_bg_pane_g1

0xe743,	// (0x000463a0) popup_sp_fs_calendar_preview_bg_pane

0xe449,	// (0x000460a6) popup_sp_fs_calendar_preview_list_pane

0x22d3,	// (0x00039f30) bg_main_sp_fs_cale_pane_ParamLimits

0x22d3,	// (0x00039f30) bg_main_sp_fs_cale_pane

0x528c,	// (0x0003cee9) listscroll_cale_mrui_pane_ParamLimits

0x528c,	// (0x0003cee9) listscroll_cale_mrui_pane

0x52a1,	// (0x0003cefe) listscroll_sp_fs_schedule_track_pane

0x52aa,	// (0x0003cf07) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x52aa,	// (0x0003cf07) main_sp_fs_ctrlbar_pane_cp01

0xe451,	// (0x000460ae) main_sp_fs_ribbon_pane

0x52bd,	// (0x0003cf1a) popup_sp_fs_cale_preview_window

0xc8b7,	// (0x00044514) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc8b7,	// (0x00044514) list_single_sp_fs_schedule_track_pane

0x327e,	// (0x0003aedb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x327e,	// (0x0003aedb) bg_sp_fs_highlight_list_pane_cp03

0xc8d9,	// (0x00044536) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc8d9,	// (0x00044536) list_single_sp_fs_schedule_track_pane_g1

0xc8e5,	// (0x00044542) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc8e5,	// (0x00044542) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x00047a17) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x00047a17) list_single_sp_fs_schedule_track_pane_g

0xc8f1,	// (0x0004454e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc8f1,	// (0x0004454e) list_single_sp_fs_schedule_track_pane_t1

0xc909,	// (0x00044566) sp_fs_schedule_track_pane_ParamLimits

0xc909,	// (0x00044566) sp_fs_schedule_track_pane

0xe459,	// (0x000460b6) sp_fs_schedule_track_pane_g1

0xe461,	// (0x000460be) sp_fs_schedule_track_pane_g2

0xe469,	// (0x000460c6) sp_fs_schedule_track_pane_g3

0xe471,	// (0x000460ce) sp_fs_schedule_track_pane_g4

0xe479,	// (0x000460d6) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x00047a1c) sp_fs_schedule_track_pane_g

0x319a,	// (0x0003adf7) bg_sp_fs_schedule_viewer_highlight_g1

0x0639,	// (0x00038296) bg_sp_fs_schedule_viewer_highlight_g2

0x31a2,	// (0x0003adff) bg_sp_fs_schedule_viewer_highlight_g3

0x31aa,	// (0x0003ae07) bg_sp_fs_schedule_viewer_highlight_g4

0x340a,	// (0x0003b067) bg_sp_fs_schedule_viewer_highlight_g5

0x31ba,	// (0x0003ae17) bg_sp_fs_schedule_viewer_highlight_g6

0x31c2,	// (0x0003ae1f) bg_sp_fs_schedule_viewer_highlight_g7

0x31ca,	// (0x0003ae27) bg_sp_fs_schedule_viewer_highlight_g8

0x0619,	// (0x00038276) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x00047a27) bg_sp_fs_schedule_viewer_highlight_g

0xe743,	// (0x000463a0) bg_main_sp_fs_ribbon_pane

0xc919,	// (0x00044576) main_sp_fs_ribbon_pane_g1

0xe481,	// (0x000460de) main_sp_fs_ribbon_pane_t1

0xc922,	// (0x0004457f) main_sp_fs_ribbon_pane_t2

0xe490,	// (0x000460ed) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x00047a3a) main_sp_fs_ribbon_pane_t

0xe49f,	// (0x000460fc) main_sp_fs_ribbon_scheduler_pane

0xe4a7,	// (0x00046104) bg_main_sp_fs_ribbon_pane_g1

0xe4b0,	// (0x0004610d) bg_main_sp_fs_ribbon_pane_g2

0xe4b9,	// (0x00046116) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x00047a41) bg_main_sp_fs_ribbon_pane_g

0xe4c1,	// (0x0004611e) main_sp_fs_ribbon_scheduler_pane_g1

0xe4ca,	// (0x00046127) main_sp_fs_ribbon_scheduler_pane_g2

0xe4d3,	// (0x00046130) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x00047a48) main_sp_fs_ribbon_scheduler_pane_g

0xe4dc,	// (0x00046139) list_cale_mrui_pane

0xc931,	// (0x0004458e) sp_fs_scroll_pane_cp07_ParamLimits

0xc931,	// (0x0004458e) sp_fs_scroll_pane_cp07

0xc94d,	// (0x000445aa) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc94d,	// (0x000445aa) bg_sp_fs_schedule_viewer_highlight

0xe4e9,	// (0x00046146) list_single_sp_fs_schedule_track_pane_cp01

0xe4f1,	// (0x0004614e) list_sp_fs_schedule_track_pane

0xe4f9,	// (0x00046156) sp_fs_scroll_pane_cp06_ParamLimits

0xe4f9,	// (0x00046156) sp_fs_scroll_pane_cp06

0x26f0,	// (0x0003a34d) bgmain_sp_fs_calendar_pane_g1

0x52cf,	// (0x0003cf2c) list_single_cale_mrui_pane_ParamLimits

0x52cf,	// (0x0003cf2c) list_single_cale_mrui_pane

0x52fd,	// (0x0003cf5a) list_single_cale_mrui_row_pane_ParamLimits

0x52fd,	// (0x0003cf5a) list_single_cale_mrui_row_pane

0x530a,	// (0x0003cf67) list_single_cale_mrui_row_pane_g1_ParamLimits

0x530a,	// (0x0003cf67) list_single_cale_mrui_row_pane_g1

0x5342,	// (0x0003cf9f) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5342,	// (0x0003cf9f) list_single_cale_mrui_row_pane_t1

0x5354,	// (0x0003cfb1) list_single_cale_mrui_row_pane_t2_ParamLimits

0x5354,	// (0x0003cfb1) list_single_cale_mrui_row_pane_t2

0x53ba,	// (0x0003d017) list_single_cale_mrui_row_pane_t3_ParamLimits

0x53ba,	// (0x0003d017) list_single_cale_mrui_row_pane_t3

0x53e9,	// (0x0003d046) list_single_cale_mrui_row_pane_t4_ParamLimits

0x53e9,	// (0x0003d046) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x00047a56) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x00047a56) list_single_cale_mrui_row_pane_t

0x5418,	// (0x0003d075) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x5418,	// (0x0003d075) list_single_cmail_header_editor_pane_bg_cp01

0x5438,	// (0x0003d095) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x5438,	// (0x0003d095) list_single_cmail_header_editor_pane_bg_cp02

0xc95a,	// (0x000445b7) main_radioblah_text_pane_t1_ParamLimits

0xc95a,	// (0x000445b7) main_radioblah_text_pane_t1

0xe518,	// (0x00046175) cam6_indi_pane_cp01

0xe520,	// (0x0004617d) cam6_mode_pane_cp01

0xe528,	// (0x00046185) cam6_pano_pane

0xe531,	// (0x0004618e) cam6_zoom_pane_cp01

0xe539,	// (0x00046196) cam6_pano_image_pane

0xe544,	// (0x000461a1) cam6_pano_pane_g1

0xde20,	// (0x00045a7d) cam6_pano_pane_g2

0xe54d,	// (0x000461aa) cam6_pano_pane_g3

0xe556,	// (0x000461b3) cam6_pano_pane_g4

0x2cdf,	// (0x0003a93c) cam6_pano_pane_g5

0xe55f,	// (0x000461bc) cam6_pano_pane_g6

0xd482,	// (0x000450df) cam6_pano_pane_g7

0xe569,	// (0x000461c6) cam6_pano_pane_g8

0xe572,	// (0x000461cf) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x00047a5f) cam6_pano_pane_g

0xe743,	// (0x000463a0) main_browser_tag_pane

0xe3d8,	// (0x00046035) grid_navstr_albumart_pane

0xe57d,	// (0x000461da) cell_navstr_albumart_pane_ParamLimits

0xe57d,	// (0x000461da) cell_navstr_albumart_pane

0xe59d,	// (0x000461fa) cell_navstr_albumart_pane_g1

0x20e4,	// (0x00039d41) cell_navstr_albumart_pane_g2

0x20f4,	// (0x00039d51) cell_navstr_albumart_pane_g3

0x20ec,	// (0x00039d49) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x00047a72) cell_navstr_albumart_pane_g

0xc975,	// (0x000445d2) bt_list_pane_ParamLimits

0xc975,	// (0x000445d2) bt_list_pane

0xc995,	// (0x000445f2) bt_list_pane_t1

0xc9a4,	// (0x00044601) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x00047a7b) bt_list_pane_t

0xe743,	// (0x000463a0) main_cale_prevew_pane

0xc9b3,	// (0x00044610) popup_cale_preview_window_ParamLimits

0xc9b3,	// (0x00044610) popup_cale_preview_window

0x0c9d,	// (0x000388fa) bg_popup_preview_window_pane_cp05_ParamLimits

0x0c9d,	// (0x000388fa) bg_popup_preview_window_pane_cp05

0xe5a5,	// (0x00046202) list_cale_preview_pane_ParamLimits

0xe5a5,	// (0x00046202) list_cale_preview_pane

0xc9cc,	// (0x00044629) list_double_cale_preview_pane_ParamLimits

0xc9cc,	// (0x00044629) list_double_cale_preview_pane

0xc9de,	// (0x0004463b) list_single_cale_preview_pane_ParamLimits

0xc9de,	// (0x0004463b) list_single_cale_preview_pane

0xc9f4,	// (0x00044651) list_single_cale_preview_pane_g1

0xc9fc,	// (0x00044659) list_single_cale_preview_pane_t1_ParamLimits

0xc9fc,	// (0x00044659) list_single_cale_preview_pane_t1

0xca11,	// (0x0004466e) list_double_cale_preview_pane_g1

0xca19,	// (0x00044676) list_double_cale_preview_pane_t1_ParamLimits

0xca19,	// (0x00044676) list_double_cale_preview_pane_t1

0xca2e,	// (0x0004468b) list_double_cale_preview_pane_t2_ParamLimits

0xca2e,	// (0x0004468b) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x00047a80) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x00047a80) list_double_cale_preview_pane_t

0xe743,	// (0x000463a0) main_ezdial_pane

0x0c9d,	// (0x000388fa) main_sp_fs_email_pane_ParamLimits

0xc5c2,	// (0x0004421f) cmail_ddmenu_btn01_pane_ParamLimits

0xc5c2,	// (0x0004421f) cmail_ddmenu_btn01_pane

0xc5df,	// (0x0004423c) cmail_ddmenu_btn02_pane_ParamLimits

0xc5df,	// (0x0004423c) cmail_ddmenu_btn02_pane

0xc5fd,	// (0x0004425a) cmail_ddmenu_btn03_pane_ParamLimits

0xc5fd,	// (0x0004425a) cmail_ddmenu_btn03_pane

0xc62b,	// (0x00044288) main_sp_fs_ctrlbar_pane_ParamLimits

0xc641,	// (0x0004429e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc748,	// (0x000443a5) list_cmail_body_pane_ParamLimits

0xe358,	// (0x00045fb5) bg_button_pane_cp12

0xe361,	// (0x00045fbe) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe361,	// (0x00045fbe) list_single_cmail_header_detail_pane_g3

0x5216,	// (0x0003ce73) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5216,	// (0x0003ce73) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x00047a03) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x00047a03) list_single_cmail_header_detail_pane_t

0x526e,	// (0x0003cecb) phacti_term_pane_t2_ParamLimits

0x526e,	// (0x0003cecb) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x00047a0d) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x00047a0d) phacti_term_pane_t

0xe5b1,	// (0x0004620e) aid_size_list_single_double

0xca46,	// (0x000446a3) popup_ezdial_listscroll_window

0xca67,	// (0x000446c4) popup_number_entry_window_cp01

0x03e0,	// (0x0003803d) bg_popup_call_pane_cp09

0xe5bd,	// (0x0004621a) ezdial_list_pane

0xe5c5,	// (0x00046222) scroll_pane_cp23

0x24c0,	// (0x0003a11d) bg_button_pane_cp028_ParamLimits

0x24c0,	// (0x0003a11d) bg_button_pane_cp028

0xca75,	// (0x000446d2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xca75,	// (0x000446d2) cmail_ddmenu_btn01_pane_g1

0xca85,	// (0x000446e2) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xca85,	// (0x000446e2) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x00047a85) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x00047a85) cmail_ddmenu_btn01_pane_g

0xe5cd,	// (0x0004622a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5cd,	// (0x0004622a) cmail_ddmenu_btn01_pane_t1

0x22d3,	// (0x00039f30) bg_button_pane_cp029_ParamLimits

0x22d3,	// (0x00039f30) bg_button_pane_cp029

0xca85,	// (0x000446e2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xca85,	// (0x000446e2) cmail_ddmenu_btn02_pane_g1

0xca9e,	// (0x000446fb) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xca9e,	// (0x000446fb) cmail_ddmenu_btn02_pane_t1

0x327e,	// (0x0003aedb) bg_button_pane_cp031_ParamLimits

0x327e,	// (0x0003aedb) bg_button_pane_cp031

0xca85,	// (0x000446e2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xca85,	// (0x000446e2) cmail_ddmenu_btn03_pane_g1

0xca9e,	// (0x000446fb) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xca9e,	// (0x000446fb) cmail_ddmenu_btn03_pane_t1

0xa457,	// (0x000420b4) cell_dialer2_keypad_pane_t1_ParamLimits

0xa471,	// (0x000420ce) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa471,	// (0x000420ce) cell_dialer2_keypad_pane_t1_copy1

0xbf5d,	// (0x00043bba) ncimui_group_button_pane

0x0c9d,	// (0x000388fa) main_sp_fs_calendar_pane_ParamLimits

0xc76f,	// (0x000443cc) list_single_cmail_header_caption_pane_ParamLimits

0x5283,	// (0x0003cee0) aid_recal_txt_sm_pane

0xe743,	// (0x000463a0) mian_recal_day_pane

0x52bd,	// (0x0003cf1a) popup_sp_fs_cale_preview_window_ParamLimits

0xe5e2,	// (0x0004623f) list_recal_day_pane

0x546f,	// (0x0003d0cc) list_single_recal_day_pane_ParamLimits

0x546f,	// (0x0003d0cc) list_single_recal_day_pane

0xe609,	// (0x00046266) list_single_recal_day_pane_g1_ParamLimits

0xe609,	// (0x00046266) list_single_recal_day_pane_g1

0x5481,	// (0x0003d0de) list_single_recal_day_pane_g2_ParamLimits

0x5481,	// (0x0003d0de) list_single_recal_day_pane_g2

0x548d,	// (0x0003d0ea) list_single_recal_day_pane_g3_ParamLimits

0x548d,	// (0x0003d0ea) list_single_recal_day_pane_g3

0x5499,	// (0x0003d0f6) list_single_recal_day_pane_g4_ParamLimits

0x5499,	// (0x0003d0f6) list_single_recal_day_pane_g4

0x54a7,	// (0x0003d104) list_single_recal_day_pane_g5_ParamLimits

0x54a7,	// (0x0003d104) list_single_recal_day_pane_g5

0x54bd,	// (0x0003d11a) list_single_recal_day_pane_g6_ParamLimits

0x54bd,	// (0x0003d11a) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x00047a94) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x00047a94) list_single_recal_day_pane_g

0x54d1,	// (0x0003d12e) list_single_recal_day_pane_t1

0x54e3,	// (0x0003d140) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x00047a9f) list_single_recal_day_pane_t

0xcac2,	// (0x0004471f) ncimui_query_button_pane_ParamLimits

0xcac2,	// (0x0004471f) ncimui_query_button_pane

0xcad2,	// (0x0004472f) ncimui_query_button_pane_t1_ParamLimits

0xcad2,	// (0x0004472f) ncimui_query_button_pane_t1

0xe615,	// (0x00046272) ncimui_query_button_pane_t2_ParamLimits

0xe615,	// (0x00046272) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x00047aa4) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x00047aa4) ncimui_query_button_pane_t

0xcae5,	// (0x00044742) query_button_pane_ParamLimits

0xcae5,	// (0x00044742) query_button_pane

0xe743,	// (0x000463a0) bg_button_pane_cp0028

0xe628,	// (0x00046285) query_button_pane_t1

0x887c,	// (0x000404d9) main_tport_pane_ParamLimits

0xc652,	// (0x000442af) bg_popup_window_pane_cp01_ParamLimits

0xc652,	// (0x000442af) bg_popup_window_pane_cp01

0xc660,	// (0x000442bd) heading_pane_cp08_ParamLimits

0xc660,	// (0x000442bd) heading_pane_cp08

0xc66e,	// (0x000442cb) heading_pane_cp07_ParamLimits

0xc66e,	// (0x000442cb) heading_pane_cp07

0xc6dd,	// (0x0004433a) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000479f0) cell_tport_appsw_pane_g

0x450c,	// (0x0003c169) input_candi_list_open_g1

0x07fc,	// (0x00038459) list_cale_time_pane_g6_ParamLimits

0x07fc,	// (0x00038459) list_cale_time_pane_g6

0x9301,	// (0x00040f5e) aid_size_touch_calib_1_ParamLimits

0x9301,	// (0x00040f5e) aid_size_touch_calib_1

0x930d,	// (0x00040f6a) aid_size_touch_calib_2_ParamLimits

0x930d,	// (0x00040f6a) aid_size_touch_calib_2

0x931b,	// (0x00040f78) aid_size_touch_calib_3_ParamLimits

0x931b,	// (0x00040f78) aid_size_touch_calib_3

0x932b,	// (0x00040f88) aid_size_touch_calib_4_ParamLimits

0x932b,	// (0x00040f88) aid_size_touch_calib_4

0x9339,	// (0x00040f96) main_touch_calib_button_group_pane_ParamLimits

0x9339,	// (0x00040f96) main_touch_calib_button_group_pane

0x9347,	// (0x00040fa4) main_touch_calib_pane_g1_ParamLimits

0x9353,	// (0x00040fb0) main_touch_calib_pane_g2_ParamLimits

0x935f,	// (0x00040fbc) main_touch_calib_pane_g3_ParamLimits

0x936b,	// (0x00040fc8) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000473ae) main_touch_calib_pane_g_ParamLimits

0x9377,	// (0x00040fd4) main_touch_calib_pane_t1_ParamLimits

0x9390,	// (0x00040fed) main_touch_calib_pane_t2_ParamLimits

0x93a9,	// (0x00041006) main_touch_calib_pane_t3_ParamLimits

0x93bf,	// (0x0004101c) main_touch_calib_pane_t4_ParamLimits

0x93d5,	// (0x00041032) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000473b7) main_touch_calib_pane_t_ParamLimits

0x2a7f,	// (0x0003a6dc) list_single_fp_cale_pane_g3_ParamLimits

0x2a7f,	// (0x0003a6dc) list_single_fp_cale_pane_g3

0x0c9d,	// (0x000388fa) bg_button_pane_cp012_ParamLimits

0x0c9d,	// (0x000388fa) bg_vkb2_func_pane_cp03_ParamLimits

0xb20f,	// (0x00042e6c) cell_vitu2_function_top_pane_g1_ParamLimits

0x0c9d,	// (0x000388fa) bg_vkb2_func_pane_cp04_ParamLimits

0xbee5,	// (0x00043b42) main_ncimui_button_group_pane_ParamLimits

0xbee5,	// (0x00043b42) main_ncimui_button_group_pane

0xbf4b,	// (0x00043ba8) main_ncimui_pane_t3_ParamLimits

0xbf4b,	// (0x00043ba8) main_ncimui_pane_t3

0xe3ee,	// (0x0004604b) phacti_button_group_pane

0xe5b1,	// (0x0004620e) aid_size_list_single_double_ParamLimits

0xca46,	// (0x000446a3) popup_ezdial_listscroll_window_ParamLimits

0xca67,	// (0x000446c4) popup_number_entry_window_cp01_ParamLimits

0xcaf2,	// (0x0004474f) phacti_button_pane_ParamLimits

0xcaf2,	// (0x0004474f) phacti_button_pane

0xe743,	// (0x000463a0) bg_button_pane_cp14

0xe636,	// (0x00046293) phacti_button_pane_t1

0xcb03,	// (0x00044760) main_touch_calib_button_pane_ParamLimits

0xcb03,	// (0x00044760) main_touch_calib_button_pane

0x021b,	// (0x00037e78) bg_button_pane_cp18_ParamLimits

0x021b,	// (0x00037e78) bg_button_pane_cp18

0xe644,	// (0x000462a1) main_touch_calib_button_pane_t1_ParamLimits

0xe644,	// (0x000462a1) main_touch_calib_button_pane_t1

0xe65a,	// (0x000462b7) main_touch_calib_button_pane_t2_ParamLimits

0xe65a,	// (0x000462b7) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x00047aa9) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x00047aa9) main_touch_calib_button_pane_t

0xe743,	// (0x000463a0) cell_ncimui_button_pane

0xe743,	// (0x000463a0) bg_button_pane_cp032

0xe678,	// (0x000462d5) cell_ncimui_button_pane_t1

0xa4cd,	// (0x0004212a) image3_infobar_pane_ParamLimits

0xa4cd,	// (0x0004212a) image3_infobar_pane

0xc308,	// (0x00043f65) fs_bigclock_status_pane_ParamLimits

0xc308,	// (0x00043f65) fs_bigclock_status_pane

0xc315,	// (0x00043f72) main_fs_bigclock_clock_pane_ParamLimits

0xc315,	// (0x00043f72) main_fs_bigclock_clock_pane

0xc329,	// (0x00043f86) main_fs_bigclock_indi_pane_ParamLimits

0xc329,	// (0x00043f86) main_fs_bigclock_indi_pane

0xc351,	// (0x00043fae) main_fs_bigclock_swipe_pane_ParamLimits

0xc351,	// (0x00043fae) main_fs_bigclock_swipe_pane

0xe743,	// (0x000463a0) main_fs_clock_dumped_data

0xdf2d,	// (0x00045b8a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdf2d,	// (0x00045b8a) list_single_fs_bigclock_indicator_pane_g1

0xdf48,	// (0x00045ba5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xdf48,	// (0x00045ba5) list_single_fs_bigclock_indicator_pane_g2

0xdf62,	// (0x00045bbf) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xdf62,	// (0x00045bbf) list_single_fs_bigclock_indicator_pane_g3

0xdf7c,	// (0x00045bd9) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xdf7c,	// (0x00045bd9) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000478d1) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000478d1) list_single_fs_bigclock_indicator_pane_g

0xdfa7,	// (0x00045c04) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xdfa7,	// (0x00045c04) list_single_fs_bigclock_indicator_pane_t1

0xdfcf,	// (0x00045c2c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xdfcf,	// (0x00045c2c) list_single_fs_bigclock_indicator_pane_t2

0xdff7,	// (0x00045c54) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xdff7,	// (0x00045c54) list_single_fs_bigclock_indicator_pane_t3

0xe01f,	// (0x00045c7c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe01f,	// (0x00045c7c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000478dc) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000478dc) list_single_fs_bigclock_indicator_pane_t

0xe686,	// (0x000462e3) image3_infobar_fav_pane_ParamLimits

0xe686,	// (0x000462e3) image3_infobar_fav_pane

0xe696,	// (0x000462f3) image3_infobar_loc_pane_ParamLimits

0xe696,	// (0x000462f3) image3_infobar_loc_pane

0xe6aa,	// (0x00046307) image3_infobar_time_pane_ParamLimits

0xe6aa,	// (0x00046307) image3_infobar_time_pane

0x26f0,	// (0x0003a34d) image3_infobar_time_pane_g1

0xe6ba,	// (0x00046317) image3_infobar_time_pane_t1

0x26f0,	// (0x0003a34d) image3_infobar_loc_pane_g1

0xe6c8,	// (0x00046325) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x00047aae) image3_infobar_loc_pane_g

0xe6d0,	// (0x0004632d) image3_infobar_loc_pane_t1

0x26f0,	// (0x0003a34d) image3_infobar_fav_pane_g1

0xe6de,	// (0x0004633b) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x00047ab3) image3_infobar_fav_pane_g

0xe6e6,	// (0x00046343) fs_bigclock_status_battery_pane

0xe6ef,	// (0x0004634c) fs_bigclock_status_signal_pane

0xe6f8,	// (0x00046355) fs_bigclock_status_title_pane

0xe701,	// (0x0004635e) fs_bigclock_status_signal_pane_g1

0xe70a,	// (0x00046367) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x00047ab8) fs_bigclock_status_signal_pane_g

0xe712,	// (0x0004636f) fs_bigclock_status_battery_pane_g1

0xe71b,	// (0x00046378) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x00047abd) fs_bigclock_status_battery_pane_g

0xe723,	// (0x00046380) fs_bigclock_status_title_pane_t1

0xcb13,	// (0x00044770) main_fs_bigclock_clock_pane_g1

0xcb13,	// (0x00044770) main_fs_bigclock_clock_pane_g2

0xcb20,	// (0x0004477d) main_fs_bigclock_clock_pane_g3

0xcb20,	// (0x0004477d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x00047ac2) main_fs_bigclock_clock_pane_g

0xcb2c,	// (0x00044789) main_fs_bigclock_clock_pane_t1

0xcb3f,	// (0x0004479c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x00047acb) main_fs_bigclock_clock_pane_t

0xe9f9,	// (0x00046656) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe9f9,	// (0x00046656) list_single_fs_bigclock_indicator_pane

0xea0a,	// (0x00046667) list_single_fs_bigclock_pane_ParamLimits

0xea0a,	// (0x00046667) list_single_fs_bigclock_pane

0xea30,	// (0x0004668d) main_fs_bigclock_indicator_pane_t1

0xea3f,	// (0x0004669c) list_single_fs_bigclock_pane_g1

0xea47,	// (0x000466a4) list_single_fs_bigclock_pane_t1

0x26f0,	// (0x0003a34d) main_fs_bigclock_swipe_pane_g1

0xea8a,	// (0x000466e7) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x00047adc) main_fs_bigclock_swipe_pane_g

0xea92,	// (0x000466ef) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xea92,	// (0x000466ef) main_fs_bigclock_swipe_pane_t1

0x790c,	// (0x0003f569) call_type_pane_ParamLimits

0xe743,	// (0x000463a0) main_btmg_pane

0x5336,	// (0x0003cf93) list_single_cale_mrui_row_pane_g2_ParamLimits

0x5336,	// (0x0003cf93) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x00047a4f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x00047a4f) list_single_cale_mrui_row_pane_g

0x545e,	// (0x0003d0bb) list_recal_vselct_arw_lo_pane

0xe601,	// (0x0004625e) list_recal_vselct_arw_up_pane

0x5466,	// (0x0003d0c3) list_recal_vselct_pane

0xcb96,	// (0x000447f3) btmg_button_pane

0xcba2,	// (0x000447ff) main_btmg_pane_g1

0xe743,	// (0x000463a0) bg_button_pane_cp044

0xeaaf,	// (0x0004670c) btmg_button_pane_t1

0x22bf,	// (0x00039f1c) aid_listscroll_gen

0x0c9d,	// (0x000388fa) main_cntbar_detail_pane

0xe33a,	// (0x00045f97) list_cmail_folder_pane

0x25fa,	// (0x0003a257) sp_fs_scroll_pane_cp03_ParamLimits

0x54f5,	// (0x0003d152) list_single_fs_dyc_pane_cp01_ParamLimits

0x54f5,	// (0x0003d152) list_single_fs_dyc_pane_cp01

0xeabd,	// (0x0004671a) aid_size_cmail_indent

0x5521,	// (0x0003d17e) list_single_dyc_row_pane_cp01

0xcbca,	// (0x00044827) cntbar_detail_list_pane_ParamLimits

0xcbca,	// (0x00044827) cntbar_detail_list_pane

0xcc04,	// (0x00044861) main_cntbar_detail_cont_pane_ParamLimits

0xcc04,	// (0x00044861) main_cntbar_detail_cont_pane

0x7900,	// (0x0003f55d) scroll_pane_cp032_ParamLimits

0x7900,	// (0x0003f55d) scroll_pane_cp032

0xcc10,	// (0x0004486d) cntbar_detail_list_event_pane_ParamLimits

0xcc10,	// (0x0004486d) cntbar_detail_list_event_pane

0xcbd6,	// (0x00044833) cntbar_detail_list_shct_pane

0x0687,	// (0x000382e4) aid_list_gen

0xeac6,	// (0x00046723) aid_scroll

0xeacf,	// (0x0004672c) aid_size_touch_scroll_bar

0xb795,	// (0x000433f2) aid_list_double

0x552a,	// (0x0003d187) aid_list_single

0xb78c,	// (0x000433e9) aid_list_single_lg

0x5533,	// (0x0003d190) aid_list_z_g_a_sm

0x553b,	// (0x0003d198) aid_list_z_g_d

0x5543,	// (0x0003d1a0) aid_txt_z_prm

0x5551,	// (0x0003d1ae) aid_txt_z_prm_cp01

0x555f,	// (0x0003d1bc) aid_txt_z_sec

0xcc24,	// (0x00044881) main_cntbar_detail_cont_pane_g1_ParamLimits

0xcc24,	// (0x00044881) main_cntbar_detail_cont_pane_g1

0xcc31,	// (0x0004488e) main_cntbar_detail_cont_pane_g2_ParamLimits

0xcc31,	// (0x0004488e) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x00047ae1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x00047ae1) main_cntbar_detail_cont_pane_g

0xead8,	// (0x00046735) main_cntbar_detail_cont_pane_t1

0xeae6,	// (0x00046743) main_cntbar_detail_cont_pane_t2

0xeaf4,	// (0x00046751) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x00047ae6) main_cntbar_detail_cont_pane_t

0xcc3d,	// (0x0004489a) cell_cntbar_detail_list_shct_pane_ParamLimits

0xcc3d,	// (0x0004489a) cell_cntbar_detail_list_shct_pane

0xeb02,	// (0x0004675f) cntbar_detail_list_shct_pane_g1

0xeb0b,	// (0x00046768) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x00047aed) cntbar_detail_list_shct_pane_g

0xcc51,	// (0x000448ae) cntbar_detail_list_event_pane_g1_ParamLimits

0xcc51,	// (0x000448ae) cntbar_detail_list_event_pane_g1

0xcc5d,	// (0x000448ba) cntbar_detail_list_event_pane_g2_ParamLimits

0xcc5d,	// (0x000448ba) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x00047af2) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x00047af2) cntbar_detail_list_event_pane_g

0xccc9,	// (0x00044926) cntbar_detail_list_event_pane_t1_ParamLimits

0xccc9,	// (0x00044926) cntbar_detail_list_event_pane_t1

0xccde,	// (0x0004493b) cntbar_detail_list_event_pane_t2_ParamLimits

0xccde,	// (0x0004493b) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x00047aff) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x00047aff) cntbar_detail_list_event_pane_t

0x26f0,	// (0x0003a34d) cell_cntbar_detail_list_shct_pane_g1

0x0e1a,	// (0x00038a77) navi_pane_mv_g3

0x0c9d,	// (0x000388fa) main_cntbar_detail_pane_ParamLimits

0xe743,	// (0x000463a0) main_notif_wgt_pane

0xa181,	// (0x00041dde) aid_tch_main_mp4_pane_g4

0xa3b6,	// (0x00042013) popup_slider_window_cp02

0x5454,	// (0x0003d0b1) list_recal_day_event_pane

0xcbaa,	// (0x00044807) cntbar_detail_btn_pane_ParamLimits

0xcbaa,	// (0x00044807) cntbar_detail_btn_pane

0xcbba,	// (0x00044817) cntbar_detail_btn_pane_cp01_ParamLimits

0xcbba,	// (0x00044817) cntbar_detail_btn_pane_cp01

0xcbd6,	// (0x00044833) cntbar_detail_list_shct_pane_ParamLimits

0xcbe2,	// (0x0004483f) cntbar_detail_pane_g1_ParamLimits

0xcbe2,	// (0x0004483f) cntbar_detail_pane_g1

0xcbee,	// (0x0004484b) cntbar_detail_pane_t1_ParamLimits

0xcbee,	// (0x0004484b) cntbar_detail_pane_t1

0xcc69,	// (0x000448c6) cntbar_detail_list_event_pane_g3_ParamLimits

0xcc69,	// (0x000448c6) cntbar_detail_list_event_pane_g3

0xcc81,	// (0x000448de) cntbar_detail_list_event_pane_g4_ParamLimits

0xcc81,	// (0x000448de) cntbar_detail_list_event_pane_g4

0xcc99,	// (0x000448f6) cntbar_detail_list_event_pane_g5_ParamLimits

0xcc99,	// (0x000448f6) cntbar_detail_list_event_pane_g5

0xccb1,	// (0x0004490e) cntbar_detail_list_event_pane_g6_ParamLimits

0xccb1,	// (0x0004490e) cntbar_detail_list_event_pane_g6

0xccf3,	// (0x00044950) cntbar_detail_list_event_pane_t3_ParamLimits

0xccf3,	// (0x00044950) cntbar_detail_list_event_pane_t3

0xcd05,	// (0x00044962) popup_notif_wgt_window_ParamLimits

0xcd05,	// (0x00044962) popup_notif_wgt_window

0xcd15,	// (0x00044972) popup_submenu_window_cp01_ParamLimits

0xcd15,	// (0x00044972) popup_submenu_window_cp01

0x03e0,	// (0x0003803d) bg_popup_window_pane_cp10

0xeb14,	// (0x00046771) listscroll_notif_wgt_pane

0xeb26,	// (0x00046783) list_notif_wgt_window

0xeb2f,	// (0x0004678c) scroll_pane_cp033

0xcd27,	// (0x00044984) list_notif_wgt_row_pane_ParamLimits

0xcd27,	// (0x00044984) list_notif_wgt_row_pane

0xeb38,	// (0x00046795) aid_size_list_notif_wgt_del

0xeb45,	// (0x000467a2) list_notif_wgt_row_pane_g1

0xeb51,	// (0x000467ae) list_notif_wgt_row_pane_g2

0xeb60,	// (0x000467bd) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x00047b06) list_notif_wgt_row_pane_g

0xeb6d,	// (0x000467ca) list_notif_wgt_row_pane_t1

0xeb83,	// (0x000467e0) list_notif_wgt_row_pane_t2

0xeb95,	// (0x000467f2) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x00047b0d) list_notif_wgt_row_pane_t

0xd45f,	// (0x000450bc) list_recal_day_event_pane_g1

0xeba7,	// (0x00046804) list_recal_day_event_pane_t1

0xe743,	// (0x000463a0) bg_button_pane_cp045

0xcd39,	// (0x00044996) cntbar_detail_btn_pane_t1

0x22d3,	// (0x00039f30) main_callh_pane_ParamLimits

0x22d3,	// (0x00039f30) main_callh_pane

0xe743,	// (0x000463a0) main_coverflow0_pane

0xe743,	// (0x000463a0) main_wgtman_pane

0xc369,	// (0x00043fc6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc369,	// (0x00043fc6) main_fs_bigclock_unlock_btn_pane

0xc6d5,	// (0x00044332) bg_button_pane_cp16

0xc6e5,	// (0x00044342) cell_tport_appsw_pane_g3

0xcd47,	// (0x000449a4) cf0_flow_pane_ParamLimits

0xcd47,	// (0x000449a4) cf0_flow_pane

0xebb6,	// (0x00046813) listscroll_cf0_pane

0xebc1,	// (0x0004681e) main_cf0_pane_g1

0xcd56,	// (0x000449b3) main_cf0_pane_t1_ParamLimits

0xcd56,	// (0x000449b3) main_cf0_pane_t1

0xcd6a,	// (0x000449c7) main_cf0_pane_t2_ParamLimits

0xcd6a,	// (0x000449c7) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x00047b19) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x00047b19) main_cf0_pane_t

0xebd3,	// (0x00046830) scroll_pane_cp11

0xcd7e,	// (0x000449db) cf0_flow_pane_g1

0xcd86,	// (0x000449e3) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x00047b1e) cf0_flow_pane_g

0xcd8e,	// (0x000449eb) cf0_flow_pane_t1

0xe743,	// (0x000463a0) main_call6_pane

0xe743,	// (0x000463a0) main_calllock_pane

0xcd9c,	// (0x000449f9) call6_btn_grp_pane_ParamLimits

0xcd9c,	// (0x000449f9) call6_btn_grp_pane

0xcdab,	// (0x00044a08) call6_pane_g1_ParamLimits

0xcdab,	// (0x00044a08) call6_pane_g1

0xcdba,	// (0x00044a17) popup_call6_1st_window_ParamLimits

0xcdba,	// (0x00044a17) popup_call6_1st_window

0xcdc8,	// (0x00044a25) popup_call6_2nd_window_ParamLimits

0xcdc8,	// (0x00044a25) popup_call6_2nd_window

0xcdd6,	// (0x00044a33) cell_call6_btn_pane_ParamLimits

0xcdd6,	// (0x00044a33) cell_call6_btn_pane

0x03e0,	// (0x0003803d) bg_popup_call2_in_pane_cp03

0xebde,	// (0x0004683b) popup_call6_1st_window_g1

0xebe6,	// (0x00046843) popup_call6_1st_window_g2

0xebee,	// (0x0004684b) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x00047b23) popup_call6_1st_window_g

0xebf6,	// (0x00046853) popup_call6_1st_window_t1

0xec05,	// (0x00046862) popup_call6_1st_window_t2

0xec15,	// (0x00046872) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x00047b2a) popup_call6_1st_window_t

0x03e0,	// (0x0003803d) bg_popup_call2_in_pane_cp04

0xebde,	// (0x0004683b) popup_call6_2nd_window_g1

0xebe6,	// (0x00046843) popup_call6_2nd_window_g2

0xebee,	// (0x0004684b) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x00047b23) popup_call6_2nd_window_g

0xebf6,	// (0x00046853) popup_call6_2nd_window_t1

0xe743,	// (0x000463a0) bg_button_pane_cp15

0xec25,	// (0x00046882) cell_call6_btn_pane_g1

0xec2e,	// (0x0004688b) cell_call6_btn_pane_t1

0xcde5,	// (0x00044a42) listscroll_wgtman_pane_ParamLimits

0xcde5,	// (0x00044a42) listscroll_wgtman_pane

0xce01,	// (0x00044a5e) wgtman_btn_pane_ParamLimits

0xce01,	// (0x00044a5e) wgtman_btn_pane

0x0c05,	// (0x00038862) aid_scroll_copy1

0xec3d,	// (0x0004689a) list_wgtman_pane

0xce36,	// (0x00044a93) wgtman_btn_pane_g1_ParamLimits

0xce36,	// (0x00044a93) wgtman_btn_pane_g1

0xce5e,	// (0x00044abb) wgtman_btn_pane_t1_ParamLimits

0xce5e,	// (0x00044abb) wgtman_btn_pane_t1

0xec47,	// (0x000468a4) wgtman_btn_pane_t2_ParamLimits

0xec47,	// (0x000468a4) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x00047b31) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x00047b31) wgtman_btn_pane_t

0xce95,	// (0x00044af2) listrow_wgtman_pane_ParamLimits

0xce95,	// (0x00044af2) listrow_wgtman_pane

0xceb0,	// (0x00044b0d) listrow_wgtman_pane_g1

0xcebd,	// (0x00044b1a) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x00047b36) listrow_wgtman_pane_g

0x556d,	// (0x0003d1ca) listrow_wgtman_pane_t1

0x5585,	// (0x0003d1e2) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x00047b3b) listrow_wgtman_pane_t

0x55ab,	// (0x0003d208) wait_bar_pane_cp09

0xec5e,	// (0x000468bb) main_calllock_btn_pane

0xec68,	// (0x000468c5) main_calllock_pane_g1

0xe743,	// (0x000463a0) bg_button_pane_cp17

0xec74,	// (0x000468d1) main_calllock_btn_pane_g1

0xec7d,	// (0x000468da) main_calllock_btn_pane_t1

0xe743,	// (0x000463a0) main_dialer3_pane

0xe743,	// (0x000463a0) main_fmrd2_pane

0x26f0,	// (0x0003a34d) main_fs_bigclock_unlock_btn_pane_g1

0xcee3,	// (0x00044b40) main_fs_bigclock_unlock_btn_pane_t1

0xcef1,	// (0x00044b4e) area_fmrd2_info_pane_ParamLimits

0xcef1,	// (0x00044b4e) area_fmrd2_info_pane

0xceff,	// (0x00044b5c) area_fmrd2_visual_pane_ParamLimits

0xceff,	// (0x00044b5c) area_fmrd2_visual_pane

0xcf0d,	// (0x00044b6a) fmrd2_indi_pane_ParamLimits

0xcf0d,	// (0x00044b6a) fmrd2_indi_pane

0xcf1a,	// (0x00044b77) area_fmrd2_visual_pane_g1

0xcf22,	// (0x00044b7f) area_fmrd2_visual_pane_t1

0xcf32,	// (0x00044b8f) area_fmrd2_visual_pane_t2

0xcf42,	// (0x00044b9f) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x00047b45) area_fmrd2_visual_pane_t

0xcf52,	// (0x00044baf) area_fmrd2_info_pane_g1

0xcf5a,	// (0x00044bb7) area_fmrd2_info_pane_t1

0xcf6a,	// (0x00044bc7) area_fmrd2_info_pane_t2

0xcf7a,	// (0x00044bd7) area_fmrd2_info_pane_t3

0xcf8a,	// (0x00044be7) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x00047b4c) area_fmrd2_info_pane_t

0xcf98,	// (0x00044bf5) fmrd2_indi_pane_t1

0xcfa8,	// (0x00044c05) fmrd2_indi_pane_t2

0xcfb8,	// (0x00044c15) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x00047b55) fmrd2_indi_pane_t

0xdf8b,	// (0x00045be8) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xdf8b,	// (0x00045be8) list_single_fs_bigclock_indicator_pane_g5

0xe03c,	// (0x00045c99) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe03c,	// (0x00045c99) list_single_fs_bigclock_indicator_pane_t5

0xc86a,	// (0x000444c7) aid_cell_bcale_month_pane_ParamLimits

0xc86a,	// (0x000444c7) aid_cell_bcale_month_pane

0xc888,	// (0x000444e5) bcale_month_pane_ParamLimits

0xc888,	// (0x000444e5) bcale_month_pane

0xc8a6,	// (0x00044503) bcale_preview_pane_ParamLimits

0xc8a6,	// (0x00044503) bcale_preview_pane

0xea47,	// (0x000466a4) list_single_fs_bigclock_pane_t1_ParamLimits

0xea66,	// (0x000466c3) list_single_fs_bigclock_pane_t2_ParamLimits

0xea66,	// (0x000466c3) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x00047ad7) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x00047ad7) list_single_fs_bigclock_pane_t

0xcedb,	// (0x00044b38) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x00047b40) main_fs_bigclock_unlock_btn_pane_g

0xcfc6,	// (0x00044c23) aid_dia3_key_size_ParamLimits

0xcfc6,	// (0x00044c23) aid_dia3_key_size

0xcfd2,	// (0x00044c2f) aid_dia3_listrow_size_ParamLimits

0xcfd2,	// (0x00044c2f) aid_dia3_listrow_size

0xcfe2,	// (0x00044c3f) dia3_keypad_fun_pane_ParamLimits

0xcfe2,	// (0x00044c3f) dia3_keypad_fun_pane

0xcff4,	// (0x00044c51) dia3_keypad_num_pane_ParamLimits

0xcff4,	// (0x00044c51) dia3_keypad_num_pane

0xd006,	// (0x00044c63) dia3_listscroll_pane_ParamLimits

0xd006,	// (0x00044c63) dia3_listscroll_pane

0xd014,	// (0x00044c71) dia3_numentry_pane_ParamLimits

0xd014,	// (0x00044c71) dia3_numentry_pane

0xec8c,	// (0x000468e9) dia3_list_pane

0xec97,	// (0x000468f4) scroll_pane_cp12

0xe743,	// (0x000463a0) bg_dia3_numentry_pane

0xd022,	// (0x00044c7f) dia3_numentry_pane_t1

0xd031,	// (0x00044c8e) cell_dia3_key_num_pane

0xd039,	// (0x00044c96) cell_dia3_key0_fun_pane_ParamLimits

0xd039,	// (0x00044c96) cell_dia3_key0_fun_pane

0xd046,	// (0x00044ca3) cell_dia3_key1_fun_pane_ParamLimits

0xd046,	// (0x00044ca3) cell_dia3_key1_fun_pane

0xd053,	// (0x00044cb0) dia3_listrow_pane

0xdcde,	// (0x0004593b) bg_dia3_numentry_pane_g1

0xe743,	// (0x000463a0) bg_button_pane_cp21

0xeca2,	// (0x000468ff) cell_dia3_key_num_pane_t1

0xecb0,	// (0x0004690d) cell_dia3_key_num_pane_t2

0xecbf,	// (0x0004691c) cell_dia3_key_num_pane_t3

0xecce,	// (0x0004692b) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x00047b5c) cell_dia3_key_num_pane_t

0xe743,	// (0x000463a0) bg_button_pane_cp19

0xd060,	// (0x00044cbd) cell_dia3_key0_fun_pane_g1

0xe743,	// (0x000463a0) bg_button_pane_cp20

0xd068,	// (0x00044cc5) cell_dia3_key1_fun_pane_g1

0xd070,	// (0x00044ccd) area_left_week_number_pane

0xd083,	// (0x00044ce0) area_top_day_name_pane

0xd091,	// (0x00044cee) frame_month_view_pane

0xecdd,	// (0x0004693a) grid_month_view_pane

0xd0a6,	// (0x00044d03) cell_top_day_name_pane_ParamLimits

0xd0a6,	// (0x00044d03) cell_top_day_name_pane

0xd0c0,	// (0x00044d1d) cell_area_left_week_number_pane_ParamLimits

0xd0c0,	// (0x00044d1d) cell_area_left_week_number_pane

0xd0e3,	// (0x00044d40) cell_month_view_pane_ParamLimits

0xd0e3,	// (0x00044d40) cell_month_view_pane

0xeceb,	// (0x00046948) frm_month_g1

0xd10f,	// (0x00044d6c) frm_month_g2

0xd120,	// (0x00044d7d) frm_month_g3

0xd131,	// (0x00044d8e) frm_month_g4

0xd142,	// (0x00044d9f) frm_month_g5

0xd155,	// (0x00044db2) frm_month_g6

0xd168,	// (0x00044dc5) frm_month_g7

0xecf8,	// (0x00046955) frm_month_g8

0xd17b,	// (0x00044dd8) frm_month_g9

0xd188,	// (0x00044de5) frm_month_g10

0xd195,	// (0x00044df2) frm_month_g11

0xd1a2,	// (0x00044dff) frm_month_g12

0xd1af,	// (0x00044e0c) frm_month_g13

0xd1bc,	// (0x00044e19) frm_month_g14

0xd1cb,	// (0x00044e28) frm_month_g15

0xd1da,	// (0x00044e37) frm_month_g16

0x000f,

0xff08,	// (0x00047b65) frm_month_g

0xed05,	// (0x00046962) cell_top_day_name_pane_t1

0xd1e9,	// (0x00044e46) cell_area_left_week_number_pane_g1

0xd1f8,	// (0x00044e55) cell_area_left_week_number_pane_t1

0x2953,	// (0x0003a5b0) cell_month_view_pane_g1

0xd20e,	// (0x00044e6b) cell_month_view_pane_t1

0xe743,	// (0x000463a0) main_fps_pane

0xe22c,	// (0x00045e89) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe22c,	// (0x00045e89) cmail_ddmenu_btn02_pane_cp1

0xe248,	// (0x00045ea5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe248,	// (0x00045ea5) cmail_ddmenu_btn02_pane_cp2

0xca91,	// (0x000446ee) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xca91,	// (0x000446ee) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x00047a8a) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x00047a8a) cmail_ddmenu_btn02_pane_g

0xcab0,	// (0x0004470d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcab0,	// (0x0004470d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x00047a8f) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x00047a8f) cmail_ddmenu_btn02_pane_t

0xd224,	// (0x00044e81) fps_text_pane_ParamLimits

0xd224,	// (0x00044e81) fps_text_pane

0xd231,	// (0x00044e8e) main_fps_pane_g1_ParamLimits

0xd231,	// (0x00044e8e) main_fps_pane_g1

0xd23f,	// (0x00044e9c) wait_bar_pane_cp010_ParamLimits

0xd23f,	// (0x00044e9c) wait_bar_pane_cp010

0xd24b,	// (0x00044ea8) fps_text_pane_t1_ParamLimits

0xd24b,	// (0x00044ea8) fps_text_pane_t1

0xa798,	// (0x000423f5) cam4_image_uncrop_pane_g1

0xa7a1,	// (0x000423fe) cam4_image_uncrop_pane_g2

0xa7aa,	// (0x00042407) cam4_image_uncrop_pane_g3

0xa7b3,	// (0x00042410) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0004754b) cam4_image_uncrop_pane_g

0xd053,	// (0x00044cb0) dia3_listrow_pane_ParamLimits

0xe743,	// (0x000463a0) main_phob2_pane

0xc6b7,	// (0x00044314) cell_tport_appsw_pane_cp02_ParamLimits

0xc6b7,	// (0x00044314) cell_tport_appsw_pane_cp02

0xc6c6,	// (0x00044323) cell_tport_appsw_pane_cp03_ParamLimits

0xc6c6,	// (0x00044323) cell_tport_appsw_pane_cp03

0xe743,	// (0x000463a0) phob2_contact_card_pane

0xe743,	// (0x000463a0) phob2_listscroll_pane

0xed18,	// (0x00046975) phob2_list_pane

0xed20,	// (0x0004697d) scroll_pane_cp034

0xd264,	// (0x00044ec1) phob2_cc_data_pane_ParamLimits

0xd264,	// (0x00044ec1) phob2_cc_data_pane

0xd27e,	// (0x00044edb) phob2_cc_listscroll_pane_ParamLimits

0xd27e,	// (0x00044edb) phob2_cc_listscroll_pane

0xce95,	// (0x00044af2) list_double_large_graphic_phob2_pane_ParamLimits

0xce95,	// (0x00044af2) list_double_large_graphic_phob2_pane

0xd298,	// (0x00044ef5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd298,	// (0x00044ef5) list_double_large_graphic_phob2_pane_g1

0x55bd,	// (0x0003d21a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x55bd,	// (0x0003d21a) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x00047b86) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x00047b86) list_double_large_graphic_phob2_pane_g

0x55c9,	// (0x0003d226) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x55c9,	// (0x0003d226) list_double_large_graphic_phob2_pane_t1

0x55de,	// (0x0003d23b) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x55de,	// (0x0003d23b) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x00047b8b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x00047b8b) list_double_large_graphic_phob2_pane_t

0xe743,	// (0x000463a0) list_highlight_pane_cp024

0xd2ae,	// (0x00044f0b) phob2_cc_button_pane

0xd2b6,	// (0x00044f13) phob2_cc_data_pane_g1_ParamLimits

0xd2b6,	// (0x00044f13) phob2_cc_data_pane_g1

0xd2c2,	// (0x00044f1f) phob2_cc_data_pane_g2_ParamLimits

0xd2c2,	// (0x00044f1f) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x00047b90) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x00047b90) phob2_cc_data_pane_g

0xd2ce,	// (0x00044f2b) phob2_cc_data_pane_t1_ParamLimits

0xd2ce,	// (0x00044f2b) phob2_cc_data_pane_t1

0xd2e0,	// (0x00044f3d) phob2_cc_data_pane_t2_ParamLimits

0xd2e0,	// (0x00044f3d) phob2_cc_data_pane_t2

0xd2f2,	// (0x00044f4f) phob2_cc_data_pane_t3_ParamLimits

0xd2f2,	// (0x00044f4f) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x00047b95) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x00047b95) phob2_cc_data_pane_t

0xed28,	// (0x00046985) phob2_cc_list_pane_ParamLimits

0xed28,	// (0x00046985) phob2_cc_list_pane

0xdc01,	// (0x0004585e) scroll_pane_cp035_ParamLimits

0xdc01,	// (0x0004585e) scroll_pane_cp035

0x0c9d,	// (0x000388fa) bg_button_pane_cp033

0xed34,	// (0x00046991) phob2_cc_button_pane_g1

0xed40,	// (0x0004699d) phob2_cc_button_pane_t1

0xed55,	// (0x000469b2) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x00047b9c) phob2_cc_button_pane_t

0xd304,	// (0x00044f61) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd304,	// (0x00044f61) list_double_large_graphic_phob2_cc_pane

0xd32b,	// (0x00044f88) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd32b,	// (0x00044f88) list_double_large_graphic_phob2_cc_pane_g1

0x55f0,	// (0x0003d24d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x55f0,	// (0x0003d24d) list_double_large_graphic_phob2_cc_pane_g2

0x55fc,	// (0x0003d259) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x55fc,	// (0x0003d259) list_double_large_graphic_phob2_cc_pane_g3

0x5608,	// (0x0003d265) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x5608,	// (0x0003d265) list_double_large_graphic_phob2_cc_pane_g4

0x5614,	// (0x0003d271) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5614,	// (0x0003d271) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x00047ba1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x00047ba1) list_double_large_graphic_phob2_cc_pane_g

0x5620,	// (0x0003d27d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5620,	// (0x0003d27d) list_double_large_graphic_phob2_cc_pane_t1

0x5649,	// (0x0003d2a6) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x5649,	// (0x0003d2a6) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x00047bac) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x00047bac) list_double_large_graphic_phob2_cc_pane_t

0xed67,	// (0x000469c4) list_highlight_pane_cp025_ParamLimits

0xed67,	// (0x000469c4) list_highlight_pane_cp025

0x0c9d,	// (0x000388fa) bg_button_pane_cp033_ParamLimits

0xed34,	// (0x00046991) phob2_cc_button_pane_g1_ParamLimits

0xed40,	// (0x0004699d) phob2_cc_button_pane_t1_ParamLimits

0xed55,	// (0x000469b2) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x00047b9c) phob2_cc_button_pane_t_ParamLimits

0x5949,	// (0x0003d5a6) popup_wgtman_window

0x32d0,	// (0x0003af2d) scroll_pane_cp038

0xce1e,	// (0x00044a7b) wgtman_btn_pane_cp_01_ParamLimits

0xce1e,	// (0x00044a7b) wgtman_btn_pane_cp_01

0xed75,	// (0x000469d2) wgtman_content_pane

0xed7e,	// (0x000469db) wgtman_heading_pane

0xe743,	// (0x000463a0) bg_heading_pane_cp02

0xed87,	// (0x000469e4) wgtman_heading_pane_g1

0xed8f,	// (0x000469ec) wgtman_heading_pane_t1

0xed9d,	// (0x000469fa) scroll_pane_cp036

0xeda5,	// (0x00046a02) wgtman_list_pane

0xedad,	// (0x00046a0a) wgtman_list_pane_t1_ParamLimits

0xedad,	// (0x00046a0a) wgtman_list_pane_t1

0xa6f7,	// (0x00042354) cam4_grid_pane

0x47fb,	// (0x0003c458) bg_button_pane_cp015_ParamLimits

0xb3ba,	// (0x00043017) bg_button_pane_cp016_ParamLimits

0xb3cd,	// (0x0004302a) bg_button_pane_cp017_ParamLimits

0x483f,	// (0x0003c49c) popup_vitu2_query_window_g3_ParamLimits

0x483f,	// (0x0003c49c) popup_vitu2_query_window_g3

0x48b8,	// (0x0003c515) popup_vitu2_query_window_t6_ParamLimits

0x48b8,	// (0x0003c515) popup_vitu2_query_window_t6

0x48e3,	// (0x0003c540) popup_vitu2_query_window_t7_ParamLimits

0x48e3,	// (0x0003c540) popup_vitu2_query_window_t7

0xe731,	// (0x0004638e) cam4_grid_pane_g1

0xe73a,	// (0x00046397) cam4_grid_pane_g2

0xedc7,	// (0x00046a24) cam4_grid_pane_g3

0xedd0,	// (0x00046a2d) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x00047bb1) cam4_grid_pane_g

0x66bb,	// (0x0003e318) aid_placing_vt_slider_lsc_ParamLimits

0x6a07,	// (0x0003e664) vidtel_button_pane_ParamLimits

0x6a07,	// (0x0003e664) vidtel_button_pane

0xe743,	// (0x000463a0) bg_button_pane_cp034

0xd33c,	// (0x00044f99) vidtel_button_pane_g1

0xeddb,	// (0x00046a38) vidtel_button_pane_t1

0x3402,	// (0x0003b05f) aid_size_vtel_slider_touch

0xdc01,	// (0x0004585e) scroll_pane_cp039

0xc0a6,	// (0x00043d03) ncim_query_button_pane_cp01_ParamLimits

0xc0c5,	// (0x00043d22) ncimui_query_pane_g1_ParamLimits

0x0c9d,	// (0x000388fa) input_focus_pane_cp012_ParamLimits

0xdd1c,	// (0x00045979) ncim_query_entry_pane_t1_ParamLimits

0xdc01,	// (0x0004585e) scroll_pane_cp039_ParamLimits

0x0d05,	// (0x00038962) navi_pane_bcale_mc_g1

0x0d0d,	// (0x0003896a) navi_pane_bcale_mc_t1

0xe291,	// (0x00045eee) main_sp_fs_email_pane_g1

0xe29d,	// (0x00045efa) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x00047942) main_sp_fs_email_pane_g

0xe50b,	// (0x00046168) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe50b,	// (0x00046168) list_single_cale_mrui_row_pane_g3

0x54b3,	// (0x0003d110) list_single_recal_day_pane_g5_event_pane

0x54c9,	// (0x0003d126) list_single_recal_day_pane_g7

0xedf1,	// (0x00046a4e) list_recal_day_event_pane_cp01

0xedfa,	// (0x00046a57) list_recal_vselct_arw_lo_pane_cp01

0xee02,	// (0x00046a5f) list_recal_vselct_arw_up_pane_cp01

0xee0a,	// (0x00046a67) list_recal_vselct_pane_cp01

0xd45f,	// (0x000450bc) list_recal_day_event_pane_cp01_g1

0x5672,	// (0x0003d2cf) list_recal_day_event_pane_cp01_t1

0x54d1,	// (0x0003d12e) list_single_recal_day_pane_t1_ParamLimits

0x54e3,	// (0x0003d140) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x00047a9f) list_single_recal_day_pane_t_ParamLimits

0x0156,	// (0x00037db3) bg_notes_pane_ParamLimits

0x01f9,	// (0x00037e56) list_notes_pane_ParamLimits

0x5ca7,	// (0x0003d904) scroll_pane_cp06_ParamLimits

0x021b,	// (0x00037e78) main_notes_pane_ParamLimits

0xe743,	// (0x000463a0) main_welc_pane

0xd344,	// (0x00044fa1) main_welc_body_pane_ParamLimits

0xd344,	// (0x00044fa1) main_welc_body_pane

0xd35e,	// (0x00044fbb) main_welc_opti_pane_ParamLimits

0xd35e,	// (0x00044fbb) main_welc_opti_pane

0xd391,	// (0x00044fee) main_welc_pane_t1_ParamLimits

0xd391,	// (0x00044fee) main_welc_pane_t1

0xd3ab,	// (0x00045008) main_welc_body_row_pane_ParamLimits

0xd3ab,	// (0x00045008) main_welc_body_row_pane

0x327e,	// (0x0003aedb) main_welc_opti_row_pane_ParamLimits

0x327e,	// (0x0003aedb) main_welc_opti_row_pane

0xee14,	// (0x00046a71) main_welc_opti_row_pane_g1

0xd3d0,	// (0x0004502d) main_welc_opti_row_pane_t1

0xee1c,	// (0x00046a79) main_welc_body_row_pane_t1

0xeb1e,	// (0x0004677b) popup_notif_wgt_heading_pane

0xeb38,	// (0x00046795) aid_size_list_notif_wgt_del_ParamLimits

0xeb45,	// (0x000467a2) list_notif_wgt_row_pane_g1_ParamLimits

0xeb51,	// (0x000467ae) list_notif_wgt_row_pane_g2_ParamLimits

0xeb60,	// (0x000467bd) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x00047b06) list_notif_wgt_row_pane_g_ParamLimits

0xeb6d,	// (0x000467ca) list_notif_wgt_row_pane_t1_ParamLimits

0xeb83,	// (0x000467e0) list_notif_wgt_row_pane_t2_ParamLimits

0xeb95,	// (0x000467f2) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x00047b0d) list_notif_wgt_row_pane_t_ParamLimits

0xceb0,	// (0x00044b0d) listrow_wgtman_pane_g1_ParamLimits

0xcebd,	// (0x00044b1a) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x00047b36) listrow_wgtman_pane_g_ParamLimits

0x556d,	// (0x0003d1ca) listrow_wgtman_pane_t1_ParamLimits

0x5585,	// (0x0003d1e2) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x00047b3b) listrow_wgtman_pane_t_ParamLimits

0x55ab,	// (0x0003d208) wait_bar_pane_cp09_ParamLimits

0xe743,	// (0x000463a0) bg_popup_heading_pane_cp02

0xee2b,	// (0x00046a88) popup_notif_wgt_heading_pane_g1

0xee33,	// (0x00046a90) popup_notif_wgt_heading_pane_t1

0xe743,	// (0x000463a0) main_vids_pane

0xe743,	// (0x000463a0) vids_listscroll_pane

0xd3df,	// (0x0004503c) scroll_pane_cp040

0xe743,	// (0x000463a0) vids_list_pane

0xd3ea,	// (0x00045047) vids_list_double_pane_ParamLimits

0xd3ea,	// (0x00045047) vids_list_double_pane

0xd404,	// (0x00045061) vids_list_double_pane_g1

0xd40d,	// (0x0004506a) vids_list_double_pane_t1

0xd41d,	// (0x0004507a) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x00047bbf) vids_list_double_pane_t

0x0c9d,	// (0x000388fa) main_ncimui_pane_ParamLimits

0xbefd,	// (0x00043b5a) main_ncimui_pane_g1_ParamLimits

0xbf09,	// (0x00043b66) main_ncimui_pane_g2_ParamLimits

0xbf09,	// (0x00043b66) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x00047847) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x00047847) main_ncimui_pane_g

0xd377,	// (0x00044fd4) main_welc_pane_g1_ParamLimits

0xd377,	// (0x00044fd4) main_welc_pane_g1

0xd383,	// (0x00044fe0) main_welc_pane_g2_ParamLimits

0xd383,	// (0x00044fe0) main_welc_pane_g2

0x0001,

0xff5d,	// (0x00047bba) main_welc_pane_g_ParamLimits

0xff5d,	// (0x00047bba) main_welc_pane_g

0x0156,	// (0x00037db3) listscroll_mce_pane_ParamLimits

0x0e5a,	// (0x00038ab7) wait_bar_pane_cp10

0x22c7,	// (0x00039f24) main_cale_day_pane_ParamLimits

0x22c7,	// (0x00039f24) main_cale_week_pane_ParamLimits

0x0156,	// (0x00037db3) main_messa_pane_ParamLimits

0x9b58,	// (0x000417b5) main_clock2_btn_pane_ParamLimits

0x9b58,	// (0x000417b5) main_clock2_btn_pane

0x2b07,	// (0x0003a764) main_clock2_btn_pane_cp01_ParamLimits

0x2b07,	// (0x0003a764) main_clock2_btn_pane_cp01

0xe4dc,	// (0x00046139) list_cale_mrui_pane_ParamLimits

0xebcb,	// (0x00046828) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x00047b14) main_cf0_pane_g

0xd070,	// (0x00044ccd) area_left_week_number_pane_ParamLimits

0xd083,	// (0x00044ce0) area_top_day_name_pane_ParamLimits

0xd091,	// (0x00044cee) frame_month_view_pane_ParamLimits

0xecdd,	// (0x0004693a) grid_month_view_pane_ParamLimits

0xeceb,	// (0x00046948) frm_month_g1_ParamLimits

0xd10f,	// (0x00044d6c) frm_month_g2_ParamLimits

0xd120,	// (0x00044d7d) frm_month_g3_ParamLimits

0xd131,	// (0x00044d8e) frm_month_g4_ParamLimits

0xd142,	// (0x00044d9f) frm_month_g5_ParamLimits

0xd155,	// (0x00044db2) frm_month_g6_ParamLimits

0xd168,	// (0x00044dc5) frm_month_g7_ParamLimits

0xecf8,	// (0x00046955) frm_month_g8_ParamLimits

0xd17b,	// (0x00044dd8) frm_month_g9_ParamLimits

0xd188,	// (0x00044de5) frm_month_g10_ParamLimits

0xd195,	// (0x00044df2) frm_month_g11_ParamLimits

0xd1a2,	// (0x00044dff) frm_month_g12_ParamLimits

0xd1af,	// (0x00044e0c) frm_month_g13_ParamLimits

0xd1bc,	// (0x00044e19) frm_month_g14_ParamLimits

0xd1cb,	// (0x00044e28) frm_month_g15_ParamLimits

0xd1da,	// (0x00044e37) frm_month_g16_ParamLimits

0xff08,	// (0x00047b65) frm_month_g_ParamLimits

0xed05,	// (0x00046962) cell_top_day_name_pane_t1_ParamLimits

0xd1e9,	// (0x00044e46) cell_area_left_week_number_pane_g1_ParamLimits

0xd1f8,	// (0x00044e55) cell_area_left_week_number_pane_t1_ParamLimits

0x2953,	// (0x0003a5b0) cell_month_view_pane_g1_ParamLimits

0xd20e,	// (0x00044e6b) cell_month_view_pane_t1_ParamLimits

0x014e,	// (0x00037dab) main_clock2_btn_pane_g1

0xee41,	// (0x00046a9e) main_clock2_btn_pane_t1

0x0c9d,	// (0x000388fa) listscroll_cmail_pane_ParamLimits

0xe291,	// (0x00045eee) main_sp_fs_email_pane_g1_ParamLimits

0xe29d,	// (0x00045efa) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x00047942) main_sp_fs_email_pane_g_ParamLimits

0xe5e2,	// (0x0004623f) list_recal_day_pane_ParamLimits

0xe5f3,	// (0x00046250) mian_recal_day_pane_t1

0x4e72,	// (0x0003cacf) list_single_dyc_row_text_pane_t4_ParamLimits

0x4e72,	// (0x0003cacf) list_single_dyc_row_text_pane_t4

0x4ea9,	// (0x0003cb06) list_single_dyc_row_text_pane_t5_ParamLimits

0x4ea9,	// (0x0003cb06) list_single_dyc_row_text_pane_t5

0x4f1f,	// (0x0003cb7c) list_single_dyc_row_text_pane_t6_ParamLimits

0x4f1f,	// (0x0003cb7c) list_single_dyc_row_text_pane_t6

0x7832,	// (0x0003f48f) aid_mgn_list_cale_time_pane

0x0c9d,	// (0x000388fa) main_gallery2_pane_ParamLimits

0x2b1d,	// (0x0003a77a) main_clock2_pane_cp01_t1

0x2b2d,	// (0x0003a78a) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x00047421) main_clock2_pane_cp01_t

0x60e5,	// (0x0003dd42) cale_week_scroll_pane_g16_ParamLimits

0x60e5,	// (0x0003dd42) cale_week_scroll_pane_g16

0x03e0,	// (0x0003803d) vorec_slider_pane

0xeddb,	// (0x00046a38) vidtel_button_pane_t1_ParamLimits

0xcb13,	// (0x00044770) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcb13,	// (0x00044770) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcb20,	// (0x0004477d) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcb20,	// (0x0004477d) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe65,	// (0x00047ac2) main_fs_bigclock_clock_pane_g_ParamLimits

0xcb2c,	// (0x00044789) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcb3f,	// (0x0004479c) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe6e,	// (0x00047acb) main_fs_bigclock_clock_pane_t_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Small
