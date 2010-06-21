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

#include "aknlayoutscalable_elaf_pql_apps_qvga_lsc_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x00072981 };

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
0x1a1d,	// (0x0007439e) Screen

0x1a27,	// (0x000743a8) application_window

0x1a67,	// (0x000743e8) area_bottom_pane_ParamLimits

0x1a67,	// (0x000743e8) area_bottom_pane

0x1a9a,	// (0x0007441b) area_top_pane_ParamLimits

0x1a9a,	// (0x0007441b) area_top_pane

0xaed1,	// (0x0007d852) call_video_uplink_pane_ParamLimits

0xaed1,	// (0x0007d852) call_video_uplink_pane

0x1b1a,	// (0x0007449b) main_pane_ParamLimits

0x1b1a,	// (0x0007449b) main_pane

0xbea4,	// (0x0007e825) context_pane

0x6416,	// (0x00078d97) navi_pane

0x643f,	// (0x00078dc0) popup_cale_events_window_ParamLimits

0x643f,	// (0x00078dc0) popup_cale_events_window

0xbeb7,	// (0x0007e838) popup_mup_playback_window

0x6457,	// (0x00078dd8) signal_pane

0x2659,	// (0x00074fda) main_browser_pane

0x2fc7,	// (0x00075948) main_burst_pane

0xaeed,	// (0x0007d86e) main_calc_pane

0xbe30,	// (0x0007e7b1) main_cale_day_pane

0x28fe,	// (0x0007527f) main_cale_month_pane

0xbe30,	// (0x0007e7b1) main_cale_week_pane

0x2fc7,	// (0x00075948) main_call_pane

0x20d8,	// (0x00074a59) main_call_poc_pane

0x2fc7,	// (0x00075948) main_camera_pane

0x2fc7,	// (0x00075948) main_chi_dic_pane

0x4a7a,	// (0x000773fb) main_clock_pane

0x20d8,	// (0x00074a59) main_fmradio_pane

0x2fc7,	// (0x00075948) main_graph_messa_pane

0x20d8,	// (0x00074a59) main_help_pane

0x2659,	// (0x00074fda) main_im_pane

0x2333,	// (0x00074cb4) main_image_pane_ParamLimits

0x2333,	// (0x00074cb4) main_image_pane

0x20d8,	// (0x00074a59) main_location2_pane

0x2fc7,	// (0x00075948) main_location_pane

0x2333,	// (0x00074cb4) main_messa_pane

0x20d8,	// (0x00074a59) main_mp2_pane

0x2fc7,	// (0x00075948) main_mp_pane

0x20d8,	// (0x00074a59) main_msg_pane

0x20d8,	// (0x00074a59) main_mup_eq_pane

0x20d8,	// (0x00074a59) main_mup_pane

0x2659,	// (0x00074fda) main_notes_pane

0x20d8,	// (0x00074a59) main_pec_pane

0x20d8,	// (0x00074a59) main_phob_pane

0x20d8,	// (0x00074a59) main_pinb_pane

0x20d8,	// (0x00074a59) main_postcard_pane

0x20d8,	// (0x00074a59) main_qdial_pane

0x2fc7,	// (0x00075948) main_skin_pane

0x20d8,	// (0x00074a59) main_smil2_pane

0x2fc7,	// (0x00075948) main_smil_pane

0x2fc7,	// (0x00075948) main_video_pane

0x2fc7,	// (0x00075948) main_video_tele_pane

0x2333,	// (0x00074cb4) main_viewer_pane_ParamLimits

0x2333,	// (0x00074cb4) main_viewer_pane

0x2fc7,	// (0x00075948) main_vorec_pane

0x620a,	// (0x00078b8b) popup_blid_sat_info_window_ParamLimits

0x620a,	// (0x00078b8b) popup_blid_sat_info_window

0x6260,	// (0x00078be1) popup_dyc_status_message_window_ParamLimits

0x6260,	// (0x00078be1) popup_dyc_status_message_window

0x6276,	// (0x00078bf7) popup_grid_large_graphic_window_ParamLimits

0x6276,	// (0x00078bf7) popup_grid_large_graphic_window

0x630c,	// (0x00078c8d) popup_loc_request_window_ParamLimits

0x630c,	// (0x00078c8d) popup_loc_request_window

0x63f0,	// (0x00078d71) popup_wml_address_window_ParamLimits

0x63f0,	// (0x00078d71) popup_wml_address_window

0x6060,	// (0x000789e1) call_muted_g1

0x5b0f,	// (0x00078490) popup_call_audio_conf_window_ParamLimits

0x5b0f,	// (0x00078490) popup_call_audio_conf_window

0x6070,	// (0x000789f1) popup_call_audio_first_window_ParamLimits

0x6070,	// (0x000789f1) popup_call_audio_first_window

0x60ce,	// (0x00078a4f) popup_call_audio_in_window_ParamLimits

0x60ce,	// (0x00078a4f) popup_call_audio_in_window

0x60fa,	// (0x00078a7b) popup_call_audio_out_window_ParamLimits

0x60fa,	// (0x00078a7b) popup_call_audio_out_window

0x6128,	// (0x00078aa9) popup_call_audio_second_window_ParamLimits

0x6128,	// (0x00078aa9) popup_call_audio_second_window

0x616e,	// (0x00078aef) popup_call_audio_wait_window_ParamLimits

0x616e,	// (0x00078aef) popup_call_audio_wait_window

0x61a1,	// (0x00078b22) popup_number_entry_window_ParamLimits

0x61a1,	// (0x00078b22) popup_number_entry_window

0x1c6f,	// (0x000745f0) bg_popup_call_pane_cp05_ParamLimits

0x1c6f,	// (0x000745f0) bg_popup_call_pane_cp05

0x1c8f,	// (0x00074610) popup_number_entry_window_t1

0x1ca2,	// (0x00074623) popup_number_entry_window_t2

0x1cb4,	// (0x00074635) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x00081a47) popup_number_entry_window_t

0x1cfa,	// (0x0007467b) text_title_cp2

0x1d0d,	// (0x0007468e) bg_popup_call_pane_cp_ParamLimits

0x1d0d,	// (0x0007468e) bg_popup_call_pane_cp

0x1d1b,	// (0x0007469c) call_thumbnail_pane

0x1d23,	// (0x000746a4) popup_call_audio_in_window_g1_ParamLimits

0x1d23,	// (0x000746a4) popup_call_audio_in_window_g1

0x1d2f,	// (0x000746b0) popup_call_audio_in_window_g2_ParamLimits

0x1d2f,	// (0x000746b0) popup_call_audio_in_window_g2

0x1d3b,	// (0x000746bc) popup_call_audio_in_window_g3_ParamLimits

0x1d3b,	// (0x000746bc) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x00081a50) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x00081a50) popup_call_audio_in_window_g

0x1d47,	// (0x000746c8) popup_call_audio_in_window_t1_ParamLimits

0x1d47,	// (0x000746c8) popup_call_audio_in_window_t1

0x1d62,	// (0x000746e3) popup_call_audio_in_window_t2_ParamLimits

0x1d62,	// (0x000746e3) popup_call_audio_in_window_t2

0x1d7d,	// (0x000746fe) popup_call_audio_in_window_t3_ParamLimits

0x1d7d,	// (0x000746fe) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x00081a57) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x00081a57) popup_call_audio_in_window_t

0x1d0d,	// (0x0007468e) bg_popup_call_pane_cp01_ParamLimits

0x1d0d,	// (0x0007468e) bg_popup_call_pane_cp01

0x1d1b,	// (0x0007469c) call_thumbnail_pane_cp02

0x1d90,	// (0x00074711) call_type_pane_cp022

0x1d98,	// (0x00074719) popup_call_audio_out_window_g1_ParamLimits

0x1d98,	// (0x00074719) popup_call_audio_out_window_g1

0x1daa,	// (0x0007472b) popup_call_audio_out_window_g2_ParamLimits

0x1daa,	// (0x0007472b) popup_call_audio_out_window_g2

0x1db6,	// (0x00074737) popup_call_audio_out_window_g3_ParamLimits

0x1db6,	// (0x00074737) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x00081a5e) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x00081a5e) popup_call_audio_out_window_g

0x1dc8,	// (0x00074749) popup_call_audio_out_window_t1_ParamLimits

0x1dc8,	// (0x00074749) popup_call_audio_out_window_t1

0x1de0,	// (0x00074761) popup_call_audio_out_window_t2_ParamLimits

0x1de0,	// (0x00074761) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x00081a65) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x00081a65) popup_call_audio_out_window_t

0x1df5,	// (0x00074776) bg_popup_call_pane_ParamLimits

0x1df5,	// (0x00074776) bg_popup_call_pane

0x1e79,	// (0x000747fa) call_thumbnail_pane_cp_ParamLimits

0x1e79,	// (0x000747fa) call_thumbnail_pane_cp

0x1e9d,	// (0x0007481e) call_type_pane_cp01_ParamLimits

0x1e9d,	// (0x0007481e) call_type_pane_cp01

0x1ee1,	// (0x00074862) popup_call_audio_first_window_g1_ParamLimits

0x1ee1,	// (0x00074862) popup_call_audio_first_window_g1

0x1f2d,	// (0x000748ae) popup_call_audio_first_window_g2_ParamLimits

0x1f2d,	// (0x000748ae) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x00081a6a) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x00081a6a) popup_call_audio_first_window_g

0x1f71,	// (0x000748f2) popup_call_audio_first_window_t1_ParamLimits

0x1f71,	// (0x000748f2) popup_call_audio_first_window_t1

0x201d,	// (0x0007499e) popup_call_audio_first_window_t4_ParamLimits

0x201d,	// (0x0007499e) popup_call_audio_first_window_t4

0x20a9,	// (0x00074a2a) popup_call_audio_first_window_t5_ParamLimits

0x20a9,	// (0x00074a2a) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x00081a6f) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x00081a6f) popup_call_audio_first_window_t

0x20d8,	// (0x00074a59) bg_popup_call_pane_cp02

0x20e2,	// (0x00074a63) call_type_pane_cp023

0x20ea,	// (0x00074a6b) popup_call_audio_wait_window_g1

0x20f2,	// (0x00074a73) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x00081a76) popup_call_audio_wait_window_g

0x20fa,	// (0x00074a7b) popup_call_audio_wait_window_t3

0x2108,	// (0x00074a89) bg_popup_call_pane_cp03_ParamLimits

0x2108,	// (0x00074a89) bg_popup_call_pane_cp03

0x2168,	// (0x00074ae9) call_thumbnail_pane_cp011_ParamLimits

0x2168,	// (0x00074ae9) call_thumbnail_pane_cp011

0x2174,	// (0x00074af5) call_type_pane_cp034_ParamLimits

0x2174,	// (0x00074af5) call_type_pane_cp034

0x21b0,	// (0x00074b31) popup_call_audio_second_window_g1_ParamLimits

0x21b0,	// (0x00074b31) popup_call_audio_second_window_g1

0x21ec,	// (0x00074b6d) popup_call_audio_second_window_g2_ParamLimits

0x21ec,	// (0x00074b6d) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x00081a7b) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x00081a7b) popup_call_audio_second_window_g

0x2228,	// (0x00074ba9) popup_call_audio_second_window_t1_ParamLimits

0x2228,	// (0x00074ba9) popup_call_audio_second_window_t1

0x22a9,	// (0x00074c2a) popup_call_audio_second_window_t2_ParamLimits

0x22a9,	// (0x00074c2a) popup_call_audio_second_window_t2

0x22df,	// (0x00074c60) popup_call_audio_second_window_t3_ParamLimits

0x22df,	// (0x00074c60) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x00081a80) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x00081a80) popup_call_audio_second_window_t

0x20d8,	// (0x00074a59) bg_popup_call_pane_cp04

0x2315,	// (0x00074c96) list_conf_pane

0x231d,	// (0x00074c9e) popup_call_audio_conf_window_t1

0x232b,	// (0x00074cac) call_thumbnail_pane_g1

0x2333,	// (0x00074cb4) bg_pinb_pane_ParamLimits

0x2333,	// (0x00074cb4) bg_pinb_pane

0x2341,	// (0x00074cc2) find_pinb_pane

0x234a,	// (0x00074ccb) listscroll_pinb_pane_ParamLimits

0x234a,	// (0x00074ccb) listscroll_pinb_pane

0x2359,	// (0x00074cda) pinb_bg_pane_g1

0x2363,	// (0x00074ce4) pinb_bg_pane_g2

0x236d,	// (0x00074cee) pinb_bg_pane_g3

0x2377,	// (0x00074cf8) pinb_bg_pane_g4

0x2381,	// (0x00074d02) pinb_bg_pane_g5

0x238b,	// (0x00074d0c) pinb_bg_pane_g6

0x2394,	// (0x00074d15) pinb_bg_pane_g7

0x239d,	// (0x00074d1e) pinb_bg_pane_g8

0x23a8,	// (0x00074d29) pinb_bg_pane_g9

0x23b2,	// (0x00074d33) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x00081a87) pinb_bg_pane_g

0x23cd,	// (0x00074d4e) grid_pinb_pane

0x23d6,	// (0x00074d57) list_pinb_pane

0x23df,	// (0x00074d60) scroll_pane_cp01_ParamLimits

0x23df,	// (0x00074d60) scroll_pane_cp01

0x23f1,	// (0x00074d72) find_pinb_pane_g1_ParamLimits

0x23f1,	// (0x00074d72) find_pinb_pane_g1

0x2409,	// (0x00074d8a) find_pinb_pane_t1

0x241b,	// (0x00074d9c) find_pinb_pane_t2

0x0001,

0xf120,	// (0x00081aa1) find_pinb_pane_t

0x2430,	// (0x00074db1) input_focus_pane_cp01_ParamLimits

0x2430,	// (0x00074db1) input_focus_pane_cp01

0x243c,	// (0x00074dbd) cell_pinb_pane_ParamLimits

0x243c,	// (0x00074dbd) cell_pinb_pane

0x2457,	// (0x00074dd8) cell_pinb_pane_g1_ParamLimits

0x2457,	// (0x00074dd8) cell_pinb_pane_g1

0x2467,	// (0x00074de8) cell_pinb_pane_g2_ParamLimits

0x2467,	// (0x00074de8) cell_pinb_pane_g2

0x2473,	// (0x00074df4) cell_pinb_pane_g3_ParamLimits

0x2473,	// (0x00074df4) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x00081aa6) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x00081aa6) cell_pinb_pane_g

0x20d8,	// (0x00074a59) grid_highlight_pane_cp01

0x247f,	// (0x00074e00) list_pinb_item_pane_ParamLimits

0x247f,	// (0x00074e00) list_pinb_item_pane

0x20d8,	// (0x00074a59) list_highlight_pane_cp02

0x2491,	// (0x00074e12) list_pinb_item_pane_g1_ParamLimits

0x2491,	// (0x00074e12) list_pinb_item_pane_g1

0x249e,	// (0x00074e1f) list_pinb_item_pane_g2_ParamLimits

0x249e,	// (0x00074e1f) list_pinb_item_pane_g2

0x24aa,	// (0x00074e2b) list_pinb_item_pane_g3_ParamLimits

0x24aa,	// (0x00074e2b) list_pinb_item_pane_g3

0x24bb,	// (0x00074e3c) list_pinb_item_pane_g4_ParamLimits

0x24bb,	// (0x00074e3c) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x00081aad) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x00081aad) list_pinb_item_pane_g

0x24c7,	// (0x00074e48) list_pinb_item_pane_t1_ParamLimits

0x24c7,	// (0x00074e48) list_pinb_item_pane_t1

0x24fc,	// (0x00074e7d) calc_display_pane

0x2518,	// (0x00074e99) calc_paper_pane

0x2539,	// (0x00074eba) grid_calc_pane

0x20d8,	// (0x00074a59) bg_list_pane_cp01

0xe89a,	// (0x0008121b) clock_g1

0x2555,	// (0x00074ed6) clock_g2

0x0001,

0xf135,	// (0x00081ab6) clock_g

0x255d,	// (0x00074ede) clock_t1_ParamLimits

0x255d,	// (0x00074ede) clock_t1

0x2572,	// (0x00074ef3) clock_t2_ParamLimits

0x2572,	// (0x00074ef3) clock_t2

0x2584,	// (0x00074f05) clock_t3_ParamLimits

0x2584,	// (0x00074f05) clock_t3

0x2596,	// (0x00074f17) clock_t4_ParamLimits

0x2596,	// (0x00074f17) clock_t4

0x25a8,	// (0x00074f29) clock_t5_ParamLimits

0x25a8,	// (0x00074f29) clock_t5

0x25bd,	// (0x00074f3e) clock_t6_ParamLimits

0x25bd,	// (0x00074f3e) clock_t6

0x25cf,	// (0x00074f50) clock_t7_ParamLimits

0x25cf,	// (0x00074f50) clock_t7

0x25e1,	// (0x00074f62) clock_t8_ParamLimits

0x25e1,	// (0x00074f62) clock_t8

0x25f3,	// (0x00074f74) clock_t9_ParamLimits

0x25f3,	// (0x00074f74) clock_t9

0x0008,

0xf13a,	// (0x00081abb) clock_t_ParamLimits

0xf13a,	// (0x00081abb) clock_t

0x2605,	// (0x00074f86) popup_clock_analogue_window_cp02

0x2605,	// (0x00074f86) popup_clock_digital_window_cp01

0x260d,	// (0x00074f8e) listscroll_help_pane

0x20d8,	// (0x00074a59) phob_pre_status_pane

0x2617,	// (0x00074f98) grid_qdial_pane

0x2333,	// (0x00074cb4) listscroll_mce_pane

0x2333,	// (0x00074cb4) bg_notes_pane

0x2621,	// (0x00074fa2) list_notes_pane

0x262f,	// (0x00074fb0) scroll_pane_cp06

0x2641,	// (0x00074fc2) bg_calc_paper_pane

0xaf03,	// (0x0007d884) list_calc_pane

0x2659,	// (0x00074fda) bg_calc_display_pane

0xaf1d,	// (0x0007d89e) calc_display_pane_t1

0xaf32,	// (0x0007d8b3) calc_display_pane_t2

0xaf47,	// (0x0007d8c8) calc_display_pane_t3

0x0002,

0xf14d,	// (0x00081ace) calc_display_pane_t

0x2665,	// (0x00074fe6) cell_calc_pane_ParamLimits

0x2665,	// (0x00074fe6) cell_calc_pane

0x2698,	// (0x00075019) bg_calc_paper_pane_g1

0x26a4,	// (0x00075025) bg_calc_paper_pane_g2

0x26b0,	// (0x00075031) bg_calc_paper_pane_g3

0x26bc,	// (0x0007503d) bg_calc_paper_pane_g4

0x26c8,	// (0x00075049) bg_calc_paper_pane_g5

0x26d4,	// (0x00075055) bg_calc_paper_pane_g6

0x26e3,	// (0x00075064) bg_calc_paper_pane_g7

0x26f2,	// (0x00075073) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x00081ad5) bg_calc_paper_pane_g

0x2701,	// (0x00075082) calc_bg_paper_pane_g9

0x2710,	// (0x00075091) list_calc_item_pane_ParamLimits

0x2710,	// (0x00075091) list_calc_item_pane

0x2724,	// (0x000750a5) list_calc_item_pane_g1

0xaf59,	// (0x0007d8da) list_calc_item_pane_t1_ParamLimits

0xaf59,	// (0x0007d8da) list_calc_item_pane_t1

0x2731,	// (0x000750b2) list_calc_item_pane_t2_ParamLimits

0x2731,	// (0x000750b2) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x00081ae6) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x00081ae6) list_calc_item_pane_t

0x2747,	// (0x000750c8) cell_calc_pane_g1

0x2769,	// (0x000750ea) grid_highlight_pane_cp02

0x278b,	// (0x0007510c) bg_calc_display_pane_g1

0xaf6b,	// (0x0007d8ec) bg_calc_display_pane_g2

0x2794,	// (0x00075115) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x00081af0) bg_calc_display_pane_g

0x279d,	// (0x0007511e) cell_qdial_pane_ParamLimits

0x279d,	// (0x0007511e) cell_qdial_pane

0x27af,	// (0x00075130) cell_qdial_pane_g1_ParamLimits

0x27af,	// (0x00075130) cell_qdial_pane_g1

0x27c5,	// (0x00075146) cell_qdial_pane_g2_ParamLimits

0x27c5,	// (0x00075146) cell_qdial_pane_g2

0x27d6,	// (0x00075157) cell_qdial_pane_g3_ParamLimits

0x27d6,	// (0x00075157) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x00081af7) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x00081af7) cell_qdial_pane_g

0x27f8,	// (0x00075179) cell_qdial_pane_t1_ParamLimits

0x27f8,	// (0x00075179) cell_qdial_pane_t1

0x2810,	// (0x00075191) cell_qdial_pane_t2_ParamLimits

0x2810,	// (0x00075191) cell_qdial_pane_t2

0x2823,	// (0x000751a4) cell_qdial_pane_t3_ParamLimits

0x2823,	// (0x000751a4) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x00081b00) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x00081b00) cell_qdial_pane_t

0x20d8,	// (0x00074a59) grid_highlight_pane_cp04

0x2836,	// (0x000751b7) thumbnail_qdial_pane_ParamLimits

0x2836,	// (0x000751b7) thumbnail_qdial_pane

0x2892,	// (0x00075213) list_help_pane

0x289c,	// (0x0007521d) scroll_pane_cp02

0x28a5,	// (0x00075226) help_list_pane_t1_ParamLimits

0x28a5,	// (0x00075226) help_list_pane_t1

0xaf75,	// (0x0007d8f6) bg_notes_pane_g2

0xaf7d,	// (0x0007d8fe) bg_notes_pane_g3

0xaf85,	// (0x0007d906) notes_bg_pane_g1

0xaf8d,	// (0x0007d90e) notes_bg_pane_g4

0xaf95,	// (0x0007d916) notes_bg_pane_g5

0xaf9d,	// (0x0007d91e) notes_bg_pane_g6

0xafa5,	// (0x0007d926) notes_bg_pane_g7

0xafad,	// (0x0007d92e) notes_bg_pane_g8

0xafb5,	// (0x0007d936) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x00081b1e) notes_bg_pane_g

0x28c1,	// (0x00075242) list_notes_text_pane_ParamLimits

0x28c1,	// (0x00075242) list_notes_text_pane

0x28e4,	// (0x00075265) list_notes_text_pane_g1

0x0c60,	// (0x000735e1) list_notes_text_pane_t1

0x28fe,	// (0x0007527f) listscroll_cale_week_pane

0x2931,	// (0x000752b2) bg_cale_heading_pane

0x2949,	// (0x000752ca) bg_cale_pane_cp01

0x2966,	// (0x000752e7) cale_week_corner_pane

0x2985,	// (0x00075306) cale_week_day_heading_pane

0x29a2,	// (0x00075323) cale_week_scroll_pane_g1

0x29b5,	// (0x00075336) cale_week_scroll_pane_g2

0x29cd,	// (0x0007534e) cale_week_scroll_pane_g3

0x29e5,	// (0x00075366) cale_week_scroll_pane_g4

0x29fd,	// (0x0007537e) cale_week_scroll_pane_g5

0x2a15,	// (0x00075396) cale_week_scroll_pane_g6

0x2a2d,	// (0x000753ae) cale_week_scroll_pane_g7

0x2a45,	// (0x000753c6) cale_week_scroll_pane_g8

0x2a61,	// (0x000753e2) cale_week_scroll_pane_g9

0x2a79,	// (0x000753fa) cale_week_scroll_pane_g10

0x2a91,	// (0x00075412) cale_week_scroll_pane_g11

0x2aa9,	// (0x0007542a) cale_week_scroll_pane_g12

0x2ac1,	// (0x00075442) cale_week_scroll_pane_g13

0x2ad9,	// (0x0007545a) cale_week_scroll_pane_g14

0x2af1,	// (0x00075472) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x00081b2d) cale_week_scroll_pane_g

0x2b25,	// (0x000754a6) cale_week_time_pane

0x2b41,	// (0x000754c2) grid_cale_week_pane

0x2b71,	// (0x000754f2) scroll_pane_cp08

0x2b8e,	// (0x0007550f) cell_cale_week_pane_ParamLimits

0x2b8e,	// (0x0007550f) cell_cale_week_pane

0x2c04,	// (0x00075585) cale_week_day_heading_pane_t1

0x2c2e,	// (0x000755af) cale_week_day_heading_pane_t2

0x2c5d,	// (0x000755de) cale_week_day_heading_pane_t3

0x2c8c,	// (0x0007560d) cale_week_day_heading_pane_t4

0x2cbb,	// (0x0007563c) cale_week_day_heading_pane_t5

0x2cea,	// (0x0007566b) cale_week_day_heading_pane_t6

0x2d19,	// (0x0007569a) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x00081b4e) cale_week_day_heading_pane_t

0x2d43,	// (0x000756c4) bg_cale_side_pane

0x2d51,	// (0x000756d2) cale_week_time_pane_t1

0x2d8b,	// (0x0007570c) cale_week_time_pane_t2

0x2dc5,	// (0x00075746) cale_week_time_pane_t3

0x2dff,	// (0x00075780) cale_week_time_pane_t4

0x2e39,	// (0x000757ba) cale_week_time_pane_t5

0x2e73,	// (0x000757f4) cale_week_time_pane_t6

0x2ead,	// (0x0007582e) cale_week_time_pane_t7

0x2ee7,	// (0x00075868) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x00081b5d) cale_week_time_pane_t

0x2f21,	// (0x000758a2) cell_cale_week_pane_g2

0x2f40,	// (0x000758c1) cell_cale_week_pane_g3_ParamLimits

0x2f40,	// (0x000758c1) cell_cale_week_pane_g3

0x2f58,	// (0x000758d9) grid_highlight_pane_cp07

0x2f60,	// (0x000758e1) listscroll_gms_pane

0x2f6a,	// (0x000758eb) grid_gms_pane

0x2f73,	// (0x000758f4) listscroll_gms_pane_g1

0x2f7b,	// (0x000758fc) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x00081b6e) listscroll_gms_pane_g

0x2f83,	// (0x00075904) scroll_pane_cp010

0x2f8e,	// (0x0007590f) cell_gms_pane_ParamLimits

0x2f8e,	// (0x0007590f) cell_gms_pane

0x2f9e,	// (0x0007591f) cell_gms_pane_g1

0x2fa6,	// (0x00075927) cell_gms_pane_g2

0x28e4,	// (0x00075265) cell_gms_pane_g3

0x2fae,	// (0x0007592f) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x00081b73) cell_gms_pane_g

0x2fb7,	// (0x00075938) grid_highlight_pane_cp09

0x600e,	// (0x0007898f) phob_pre_status_pane_g1

0x6016,	// (0x00078997) phob_pre_status_pane_g2

0x601e,	// (0x0007899f) phob_pre_status_pane_g3

0x6026,	// (0x000789a7) phob_pre_status_pane_g4

0x0004,

0xf5f0,	// (0x00081f71) phob_pre_status_pane_g

0x6036,	// (0x000789b7) phob_pre_status_pane_t1

0x6044,	// (0x000789c5) phob_pre_status_pane_t2

0x6052,	// (0x000789d3) phob_pre_status_pane_t3

0x0002,

0xf5fb,	// (0x00081f7c) phob_pre_status_pane_t

0x2fc7,	// (0x00075948) bg_list_pane_cp05

0x2fcf,	// (0x00075950) grid_vorec_pane

0x2fd7,	// (0x00075958) vorec_t1

0x2fe5,	// (0x00075966) vorec_t2

0x2ff3,	// (0x00075974) vorec_t3

0x3001,	// (0x00075982) vorec_t4

0xae59,	// (0x0007d7da) vorec_t5

0xae67,	// (0x0007d7e8) vorec_t6

0x0004,

0xf1fb,	// (0x00081b7c) vorec_t

0xae75,	// (0x0007d7f6) wait_bar_pane_cp01

0x301d,	// (0x0007599e) cell_vorec_pane_ParamLimits

0x301d,	// (0x0007599e) cell_vorec_pane

0xafbd,	// (0x0007d93e) cell_vorec_pane_g1

0x20d8,	// (0x00074a59) grid_highlight_pane_cp05

0x3042,	// (0x000759c3) cams_zoom_pane

0x3051,	// (0x000759d2) image_vga_pane

0x3069,	// (0x000759ea) main_camera_pane_g1

0x3079,	// (0x000759fa) main_camera_pane_g2

0x3089,	// (0x00075a0a) main_camera_pane_g3

0x3099,	// (0x00075a1a) main_camera_pane_g4

0x30a9,	// (0x00075a2a) main_camera_pane_g5

0x30b9,	// (0x00075a3a) main_camera_pane_g6

0x30c9,	// (0x00075a4a) main_camera_pane_g7

0x0007,

0xf206,	// (0x00081b87) main_camera_pane_g

0x30e5,	// (0x00075a66) main_camera_pane_t1

0x30fb,	// (0x00075a7c) main_camera_pane_t2

0x0001,

0xf217,	// (0x00081b98) main_camera_pane_t

0x312d,	// (0x00075aae) cams_zoom_pane_cp_ParamLimits

0x312d,	// (0x00075aae) cams_zoom_pane_cp

0x3155,	// (0x00075ad6) image_cif_pane_ParamLimits

0x3155,	// (0x00075ad6) image_cif_pane

0x3186,	// (0x00075b07) image_subqcif_pane

0x318e,	// (0x00075b0f) main_video_pane_g1_ParamLimits

0x318e,	// (0x00075b0f) main_video_pane_g1

0x31b2,	// (0x00075b33) main_video_pane_g2_ParamLimits

0x31b2,	// (0x00075b33) main_video_pane_g2

0x31e6,	// (0x00075b67) main_video_pane_g3_ParamLimits

0x31e6,	// (0x00075b67) main_video_pane_g3

0x3214,	// (0x00075b95) main_video_pane_g4_ParamLimits

0x3214,	// (0x00075b95) main_video_pane_g4

0x3242,	// (0x00075bc3) main_video_pane_g5_ParamLimits

0x3242,	// (0x00075bc3) main_video_pane_g5

0x325a,	// (0x00075bdb) main_video_pane_g6_ParamLimits

0x325a,	// (0x00075bdb) main_video_pane_g6

0x0006,

0xf21c,	// (0x00081b9d) main_video_pane_g_ParamLimits

0xf21c,	// (0x00081b9d) main_video_pane_g

0x3283,	// (0x00075c04) main_video_pane_t1_ParamLimits

0x3283,	// (0x00075c04) main_video_pane_t1

0x32cc,	// (0x00075c4d) cams_zoom_pane_g1

0x32d5,	// (0x00075c56) cams_zoom_pane_g2

0x32de,	// (0x00075c5f) cams_zoom_pane_g3

0x32e7,	// (0x00075c68) cams_zoom_pane_g4

0x0003,

0xf22b,	// (0x00081bac) cams_zoom_pane_g

0x3304,	// (0x00075c85) grid_cams_pane

0x3319,	// (0x00075c9a) linegrid_cams_pane

0x332a,	// (0x00075cab) cell_cams_pane_ParamLimits

0x332a,	// (0x00075cab) cell_cams_pane

0x3348,	// (0x00075cc9) cams_burst_image_pane

0x3350,	// (0x00075cd1) cell_cams_pane_g1

0x20d8,	// (0x00074a59) grid_highlight_pane_cp03

0x2747,	// (0x000750c8) mp_bg_pane_g1

0x20d8,	// (0x00074a59) bg_list_pane_cp03

0xbd55,	// (0x0007e6d6) bg_mp_pane

0xbd5d,	// (0x0007e6de) grid_mp_pane

0xbd65,	// (0x0007e6e6) media_player_g1

0xbd6d,	// (0x0007e6ee) media_player_t1

0xbd7b,	// (0x0007e6fc) media_player_t2

0xbd89,	// (0x0007e70a) media_player_t3

0xbd97,	// (0x0007e718) media_player_t4

0xbda5,	// (0x0007e726) media_player_t5

0xbdb3,	// (0x0007e734) media_player_t6

0xbdc1,	// (0x0007e742) media_player_t7

0x0006,

0xf5da,	// (0x00081f5b) media_player_t

0xbdcf,	// (0x0007e750) wait_bar_pane_cp02

0xf5bf,	// (0x00081f40) main_usb_pane_t

0x6005,	// (0x00078986) cell_mp_pane

0x2747,	// (0x000750c8) cell_mp_pane_g1

0x20d8,	// (0x00074a59) grid_highlight_pane_cp06

0x3370,	// (0x00075cf1) grid_skin_colour_pane

0x3378,	// (0x00075cf9) list_highlight_pane_cp03

0x3380,	// (0x00075d01) skin_g1

0x3388,	// (0x00075d09) skin_t1

0x3397,	// (0x00075d18) skin_t2

0x0001,

0xf260,	// (0x00081be1) skin_t

0x33a5,	// (0x00075d26) cell_skin_colour_pane_ParamLimits

0x33a5,	// (0x00075d26) cell_skin_colour_pane

0x33bf,	// (0x00075d40) cell_skin_colour_pane_g1

0x3420,	// (0x00075da1) call_video_g1_ParamLimits

0x3420,	// (0x00075da1) call_video_g1

0x3436,	// (0x00075db7) call_video_g2_ParamLimits

0x3436,	// (0x00075db7) call_video_g2

0x0001,

0xf265,	// (0x00081be6) call_video_g_ParamLimits

0xf265,	// (0x00081be6) call_video_g

0x347e,	// (0x00075dff) call_video_uplink_pane_cp1_ParamLimits

0x347e,	// (0x00075dff) call_video_uplink_pane_cp1

0x34e3,	// (0x00075e64) call_video_uplink_pane_cp2

0x351b,	// (0x00075e9c) video_down_crop_pane_ParamLimits

0x351b,	// (0x00075e9c) video_down_crop_pane

0x35de,	// (0x00075f5f) video_down_pane_ParamLimits

0x35de,	// (0x00075f5f) video_down_pane

0x3688,	// (0x00076009) video_down_subqcif_pane_ParamLimits

0x3688,	// (0x00076009) video_down_subqcif_pane

0x36a0,	// (0x00076021) video_down_subqcif_pane_cp_ParamLimits

0x36a0,	// (0x00076021) video_down_subqcif_pane_cp

0x36d7,	// (0x00076058) im_reading_pane_ParamLimits

0x36d7,	// (0x00076058) im_reading_pane

0x36e9,	// (0x0007606a) im_writing_pane_ParamLimits

0x36e9,	// (0x0007606a) im_writing_pane

0x3707,	// (0x00076088) im_reading_pane_t1

0x373d,	// (0x000760be) list_im_pane

0x374e,	// (0x000760cf) scroll_pane_cp07

0x3767,	// (0x000760e8) im_writing_pane_t1_ParamLimits

0x3767,	// (0x000760e8) im_writing_pane_t1

0x377c,	// (0x000760fd) im_writing_pane_t2_ParamLimits

0x377c,	// (0x000760fd) im_writing_pane_t2

0x0001,

0xf26f,	// (0x00081bf0) im_writing_pane_t_ParamLimits

0xf26f,	// (0x00081bf0) im_writing_pane_t

0x20d8,	// (0x00074a59) input_focus_pane_cp04

0x20d8,	// (0x00074a59) input_focus_pane_cp05

0x3799,	// (0x0007611a) list_im_single_pane_ParamLimits

0x3799,	// (0x0007611a) list_im_single_pane

0x37af,	// (0x00076130) list_single_im_pane_t1

0x5fcb,	// (0x0007894c) blid_accuracy_pane

0x5fd3,	// (0x00078954) blid_compass_pane

0x5fdb,	// (0x0007895c) main_location_t1

0x5fe9,	// (0x0007896a) main_location_t2

0x5ff7,	// (0x00078978) main_location_t3

0x0002,

0xf5e9,	// (0x00081f6a) main_location_t

0x20d8,	// (0x00074a59) aid_levels_location

0x2747,	// (0x000750c8) blid_accuracy_pane_g1

0x2747,	// (0x000750c8) blid_accuracy_pane_g2

0x0001,

0xf2d1,	// (0x00081c52) blid_accuracy_pane_g

0x37e9,	// (0x0007616a) wml_content_pane

0x3827,	// (0x000761a8) wml_button_pane_ParamLimits

0x3827,	// (0x000761a8) wml_button_pane

0x383b,	// (0x000761bc) wml_list_single_large_pane_ParamLimits

0x383b,	// (0x000761bc) wml_list_single_large_pane

0x384f,	// (0x000761d0) wml_list_single_medium_pane_ParamLimits

0x384f,	// (0x000761d0) wml_list_single_medium_pane

0x3864,	// (0x000761e5) wml_list_single_small_pane_ParamLimits

0x3864,	// (0x000761e5) wml_list_single_small_pane

0x387b,	// (0x000761fc) wml_selection_box_pane_ParamLimits

0x387b,	// (0x000761fc) wml_selection_box_pane

0x388e,	// (0x0007620f) wml_list_single_pane_t1

0x389d,	// (0x0007621e) wml_list_single_medium_pane_t1

0x38ac,	// (0x0007622d) wml_list_single_large_pane_t1

0x38bb,	// (0x0007623c) input_focus_pane_cp02_ParamLimits

0x38bb,	// (0x0007623c) input_focus_pane_cp02

0x38ce,	// (0x0007624f) wml_selection_box_pane_g1

0x38d7,	// (0x00076258) wml_selection_box_pane_t1_ParamLimits

0x38d7,	// (0x00076258) wml_selection_box_pane_t1

0x2333,	// (0x00074cb4) bg_wml_button_pane_ParamLimits

0x2333,	// (0x00074cb4) bg_wml_button_pane

0x38ef,	// (0x00076270) wml_button_pane_g1

0x38f7,	// (0x00076278) wml_button_pane_t1

0x38ef,	// (0x00076270) wml_button_bg_pane_g1

0x3907,	// (0x00076288) wml_button_bg_pane_g2

0x390f,	// (0x00076290) wml_button_bg_pane_g3

0x3917,	// (0x00076298) wml_button_bg_pane_g4

0x391f,	// (0x000762a0) wml_button_bg_pane_g5

0x3927,	// (0x000762a8) wml_button_bg_pane_g6

0x392f,	// (0x000762b0) wml_button_bg_pane_g7

0x3937,	// (0x000762b8) wml_button_bg_pane_g8

0x393f,	// (0x000762c0) wml_button_bg_pane_g9

0x0008,

0xf274,	// (0x00081bf5) wml_button_bg_pane_g

0x3947,	// (0x000762c8) bg_list_pane_cp02

0x3950,	// (0x000762d1) mce_header_pane_ParamLimits

0x3950,	// (0x000762d1) mce_header_pane

0x3964,	// (0x000762e5) mce_icon_pane

0x3964,	// (0x000762e5) mce_image_pane

0x396d,	// (0x000762ee) mce_text_pane_ParamLimits

0x396d,	// (0x000762ee) mce_text_pane

0x3981,	// (0x00076302) scroll_pane_cp03

0x3981,	// (0x00076302) scroll_pane_cp04

0x398b,	// (0x0007630c) scroll_pane_cp05_ParamLimits

0x398b,	// (0x0007630c) scroll_pane_cp05

0x3997,	// (0x00076318) mce_header_field_pane_ParamLimits

0x3997,	// (0x00076318) mce_header_field_pane

0x39ae,	// (0x0007632f) mce_header_field_pane_2_ParamLimits

0x39ae,	// (0x0007632f) mce_header_field_pane_2

0x39c4,	// (0x00076345) mce_header_field_pane_3

0x39cc,	// (0x0007634d) list_single_mce_message_pane_ParamLimits

0x39cc,	// (0x0007634d) list_single_mce_message_pane

0x39e1,	// (0x00076362) list_single_mce_smart_pane_ParamLimits

0x39e1,	// (0x00076362) list_single_mce_smart_pane

0x3a01,	// (0x00076382) input_focus_pane_cp03

0x3a0a,	// (0x0007638b) list_header_data_pane

0x3a12,	// (0x00076393) mce_header_field_pane_t1

0x3a20,	// (0x000763a1) list_single_mce_header_pane_ParamLimits

0x3a20,	// (0x000763a1) list_single_mce_header_pane

0x3a34,	// (0x000763b5) list_single_mce_header_pane_t1

0x3a43,	// (0x000763c4) list_single_mce_message_pane_g1

0x3a4c,	// (0x000763cd) list_single_mce_message_pane_t1

0x3a81,	// (0x00076402) bg_cale_heading_pane_cp01_ParamLimits

0x3a81,	// (0x00076402) bg_cale_heading_pane_cp01

0x3ab0,	// (0x00076431) bg_cale_pane_cp02_ParamLimits

0x3ab0,	// (0x00076431) bg_cale_pane_cp02

0x3add,	// (0x0007645e) cale_month_corner_pane

0x3afc,	// (0x0007647d) cale_month_day_heading_pane_ParamLimits

0x3afc,	// (0x0007647d) cale_month_day_heading_pane

0x3b33,	// (0x000764b4) cale_month_pane_g1_ParamLimits

0x3b33,	// (0x000764b4) cale_month_pane_g1

0x3b57,	// (0x000764d8) cale_month_pane_g2_ParamLimits

0x3b57,	// (0x000764d8) cale_month_pane_g2

0x3b7f,	// (0x00076500) cale_month_pane_g3_ParamLimits

0x3b7f,	// (0x00076500) cale_month_pane_g3

0x3bbb,	// (0x0007653c) cale_month_pane_g4_ParamLimits

0x3bbb,	// (0x0007653c) cale_month_pane_g4

0x3bf7,	// (0x00076578) cale_month_pane_g5_ParamLimits

0x3bf7,	// (0x00076578) cale_month_pane_g5

0x3c33,	// (0x000765b4) cale_month_pane_g6_ParamLimits

0x3c33,	// (0x000765b4) cale_month_pane_g6

0x3c6f,	// (0x000765f0) cale_month_pane_g7_ParamLimits

0x3c6f,	// (0x000765f0) cale_month_pane_g7

0x3cab,	// (0x0007662c) cale_month_pane_g8_ParamLimits

0x3cab,	// (0x0007662c) cale_month_pane_g8

0x3cef,	// (0x00076670) cale_month_pane_g9_ParamLimits

0x3cef,	// (0x00076670) cale_month_pane_g9

0x3d31,	// (0x000766b2) cale_month_pane_g10_ParamLimits

0x3d31,	// (0x000766b2) cale_month_pane_g10

0x3d73,	// (0x000766f4) cale_month_pane_g11_ParamLimits

0x3d73,	// (0x000766f4) cale_month_pane_g11

0x3db5,	// (0x00076736) cale_month_pane_g12_ParamLimits

0x3db5,	// (0x00076736) cale_month_pane_g12

0x3df7,	// (0x00076778) cale_month_pane_g13_ParamLimits

0x3df7,	// (0x00076778) cale_month_pane_g13

0x000c,

0xf287,	// (0x00081c08) cale_month_pane_g_ParamLimits

0xf287,	// (0x00081c08) cale_month_pane_g

0x3e4b,	// (0x000767cc) cale_month_week_pane

0x3e67,	// (0x000767e8) grid_cale_month_pane_ParamLimits

0x3e67,	// (0x000767e8) grid_cale_month_pane

0x3e95,	// (0x00076816) cale_month_day_heading_pane_t1

0x3f1b,	// (0x0007689c) cale_month_day_heading_pane_t2

0x3fac,	// (0x0007692d) cale_month_day_heading_pane_t3

0x403d,	// (0x000769be) cale_month_day_heading_pane_t4

0x40ce,	// (0x00076a4f) cale_month_day_heading_pane_t5

0x415f,	// (0x00076ae0) cale_month_day_heading_pane_t6

0x41f0,	// (0x00076b71) cale_month_day_heading_pane_t7

0x0006,

0xf2a2,	// (0x00081c23) cale_month_day_heading_pane_t

0x2d43,	// (0x000756c4) bg_cale_side_pane_cp01

0x4285,	// (0x00076c06) cale_month_week_pane_t1

0x429e,	// (0x00076c1f) cale_month_week_pane_t2

0x42b7,	// (0x00076c38) cale_month_week_pane_t3

0x42d0,	// (0x00076c51) cale_month_week_pane_t4

0x42e9,	// (0x00076c6a) cale_month_week_pane_t5

0x4302,	// (0x00076c83) cale_month_week_pane_t6

0x0005,

0xf2b1,	// (0x00081c32) cale_month_week_pane_t

0x431b,	// (0x00076c9c) cell_cale_month_pane_ParamLimits

0x431b,	// (0x00076c9c) cell_cale_month_pane

0xafc7,	// (0x0007d948) cell_cale_month_pane_g1

0x440d,	// (0x00076d8e) cell_cale_month_pane_t1_ParamLimits

0x440d,	// (0x00076d8e) cell_cale_month_pane_t1

0x2f58,	// (0x000758d9) grid_highlight_pane_cp08

0x2747,	// (0x000750c8) main_smil_g1

0x442d,	// (0x00076dae) smil_status_pane

0x4436,	// (0x00076db7) smil_text_pane

0xbc35,	// (0x0007e5b6) bg_popup_call3_rect_pane_g8

0xbc3d,	// (0x0007e5be) bg_popup_call3_rect_pane_g9

0x0008,

0xf56a,	// (0x00081eeb) bg_popup_call3_rect_pane_g

0xbf1e,	// (0x0007e89f) smil_status_volume_pane_g1

0x4448,	// (0x00076dc9) smil_status_pane_t1

0xbf51,	// (0x0007e8d2) volume_smil_pane

0x445f,	// (0x00076de0) list_smil_text_pane

0x4469,	// (0x00076dea) scroll_pane_cp011

0x4474,	// (0x00076df5) smil_text_list_pane_t1_ParamLimits

0x4474,	// (0x00076df5) smil_text_list_pane_t1

0xafd3,	// (0x0007d954) aid_volume_smil_ParamLimits

0xafd3,	// (0x0007d954) aid_volume_smil

0x2747,	// (0x000750c8) smil_volume_pane_g1

0x2747,	// (0x000750c8) smil_volume_pane_g2

0x0001,

0xf2d1,	// (0x00081c52) smil_volume_pane_g

0x28fe,	// (0x0007527f) listscroll_cale_day_pane

0x44b0,	// (0x00076e31) bg_cale_pane

0x44c8,	// (0x00076e49) list_cale_pane

0x44eb,	// (0x00076e6c) scroll_pane_cp09

0x44fc,	// (0x00076e7d) cale_bg_pane_g1

0x4504,	// (0x00076e85) cale_bg_pane_g2

0x450c,	// (0x00076e8d) cale_bg_pane_g3

0x4514,	// (0x00076e95) cale_bg_pane_g4

0x451c,	// (0x00076e9d) cale_bg_pane_g5

0x4524,	// (0x00076ea5) cale_bg_pane_g6

0x452c,	// (0x00076ead) cale_bg_pane_g7

0x4534,	// (0x00076eb5) cale_bg_pane_g8

0x453c,	// (0x00076ebd) cale_bg_pane_g9

0x0008,

0xf2d6,	// (0x00081c57) cale_bg_pane_g

0x454c,	// (0x00076ecd) list_cale_time_pane_ParamLimits

0x454c,	// (0x00076ecd) list_cale_time_pane

0x4561,	// (0x00076ee2) list_cale_time_pane_g1_ParamLimits

0x4561,	// (0x00076ee2) list_cale_time_pane_g1

0x456d,	// (0x00076eee) list_cale_time_pane_g2_ParamLimits

0x456d,	// (0x00076eee) list_cale_time_pane_g2

0x457a,	// (0x00076efb) list_cale_time_pane_g3_ParamLimits

0x457a,	// (0x00076efb) list_cale_time_pane_g3

0x4586,	// (0x00076f07) list_cale_time_pane_g4_ParamLimits

0x4586,	// (0x00076f07) list_cale_time_pane_g4

0x4592,	// (0x00076f13) list_cale_time_pane_g5_ParamLimits

0x4592,	// (0x00076f13) list_cale_time_pane_g5

0x0005,

0xf2e9,	// (0x00081c6a) list_cale_time_pane_g_ParamLimits

0xf2e9,	// (0x00081c6a) list_cale_time_pane_g

0x45ab,	// (0x00076f2c) list_cale_time_pane_t1_ParamLimits

0x45ab,	// (0x00076f2c) list_cale_time_pane_t1

0x45d3,	// (0x00076f54) list_cale_time_pane_t2_ParamLimits

0x45d3,	// (0x00076f54) list_cale_time_pane_t2

0x4ca5,	// (0x00077626) aid_blid_cardinal_pane

0x4cef,	// (0x00077670) compass_pane_t4

0x45fb,	// (0x00076f7c) list_cale_time_pane_t4_ParamLimits

0x45fb,	// (0x00076f7c) list_cale_time_pane_t4

0x4cfd,	// (0x0007767e) compass_pane_t5

0x4d0b,	// (0x0007768c) compass_pane_t6

0x4d19,	// (0x0007769a) compass_pane_t7

0x4da5,	// (0x00077726) navi_pane_cc_t1

0x4fad,	// (0x0007792e) aid_phob_thumbnail_center_pane

0x554d,	// (0x00077ece) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2f6,	// (0x00081c77) list_cale_time_pane_t_ParamLimits

0xf2f6,	// (0x00081c77) list_cale_time_pane_t

0x1d0d,	// (0x0007468e) bg_popup_window_pane_cp02_ParamLimits

0x1d0d,	// (0x0007468e) bg_popup_window_pane_cp02

0x4623,	// (0x00076fa4) heading_pane_cp01_ParamLimits

0x4623,	// (0x00076fa4) heading_pane_cp01

0x462f,	// (0x00076fb0) loc_req_pane_ParamLimits

0x462f,	// (0x00076fb0) loc_req_pane

0x463f,	// (0x00076fc0) loc_type_pane_ParamLimits

0x463f,	// (0x00076fc0) loc_type_pane

0x4651,	// (0x00076fd2) loc_type_pane_t1_ParamLimits

0x4651,	// (0x00076fd2) loc_type_pane_t1

0x4663,	// (0x00076fe4) loc_type_pane_t2_ParamLimits

0x4663,	// (0x00076fe4) loc_type_pane_t2

0x4675,	// (0x00076ff6) loc_type_pane_t3_ParamLimits

0x4675,	// (0x00076ff6) loc_type_pane_t3

0x0002,

0xf2fd,	// (0x00081c7e) loc_type_pane_t_ParamLimits

0xf2fd,	// (0x00081c7e) loc_type_pane_t

0x4687,	// (0x00077008) list_loc_req_pane

0x4691,	// (0x00077012) scroll_pane_cp012

0x469a,	// (0x0007701b) list_single_loc_request_popup_menu_pane_ParamLimits

0x469a,	// (0x0007701b) list_single_loc_request_popup_menu_pane

0x46a7,	// (0x00077028) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x46a7,	// (0x00077028) list_single_loc_request_popup_menu_pane_g1

0x46b3,	// (0x00077034) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x46b3,	// (0x00077034) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf304,	// (0x00081c85) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf304,	// (0x00081c85) list_single_loc_request_popup_menu_pane_g

0x46bf,	// (0x00077040) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x46bf,	// (0x00077040) list_single_loc_request_popup_menu_pane_t1

0x2333,	// (0x00074cb4) bg_popup_window_pane_cp03_ParamLimits

0x2333,	// (0x00074cb4) bg_popup_window_pane_cp03

0x46d5,	// (0x00077056) heading_loc_req_pane_ParamLimits

0x46d5,	// (0x00077056) heading_loc_req_pane

0x46e1,	// (0x00077062) popup_dyc_status_message_window_g1_ParamLimits

0x46e1,	// (0x00077062) popup_dyc_status_message_window_g1

0x46f5,	// (0x00077076) popup_dyc_status_message_window_t1_ParamLimits

0x46f5,	// (0x00077076) popup_dyc_status_message_window_t1

0x470a,	// (0x0007708b) popup_dyc_status_message_window_t2_ParamLimits

0x470a,	// (0x0007708b) popup_dyc_status_message_window_t2

0x471f,	// (0x000770a0) popup_dyc_status_message_window_t3_ParamLimits

0x471f,	// (0x000770a0) popup_dyc_status_message_window_t3

0x0002,

0xf309,	// (0x00081c8a) popup_dyc_status_message_window_t_ParamLimits

0xf309,	// (0x00081c8a) popup_dyc_status_message_window_t

0x20d8,	// (0x00074a59) bg_heading_pane_cp01

0x473b,	// (0x000770bc) heading_loc_req_pane_g1

0x4743,	// (0x000770c4) heading_loc_req_pane_g2

0x474b,	// (0x000770cc) heading_loc_req_pane_g3

0x0002,

0xf310,	// (0x00081c91) heading_loc_req_pane_g

0x4753,	// (0x000770d4) heading_loc_req_pane_t1

0x477c,	// (0x000770fd) bg_popup_sub_pane_cp01_ParamLimits

0x477c,	// (0x000770fd) bg_popup_sub_pane_cp01

0x478a,	// (0x0007710b) popup_cale_events_window_g1_ParamLimits

0x478a,	// (0x0007710b) popup_cale_events_window_g1

0x47aa,	// (0x0007712b) popup_cale_events_window_g2_ParamLimits

0x47aa,	// (0x0007712b) popup_cale_events_window_g2

0x0001,

0xf344,	// (0x00081cc5) popup_cale_events_window_g_ParamLimits

0xf344,	// (0x00081cc5) popup_cale_events_window_g

0x47ca,	// (0x0007714b) popup_cale_events_window_t1_ParamLimits

0x47ca,	// (0x0007714b) popup_cale_events_window_t1

0x47dc,	// (0x0007715d) popup_cale_events_window_t2_ParamLimits

0x47dc,	// (0x0007715d) popup_cale_events_window_t2

0x481a,	// (0x0007719b) popup_cale_events_window_t3_ParamLimits

0x481a,	// (0x0007719b) popup_cale_events_window_t3

0x4854,	// (0x000771d5) popup_cale_events_window_t4_ParamLimits

0x4854,	// (0x000771d5) popup_cale_events_window_t4

0x0003,

0xf349,	// (0x00081cca) popup_cale_events_window_t_ParamLimits

0xf349,	// (0x00081cca) popup_cale_events_window_t

0x488a,	// (0x0007720b) call_type_pane

0x489a,	// (0x0007721b) popup_call_status_window_g1

0x48ae,	// (0x0007722f) popup_call_status_window_g2

0x48c2,	// (0x00077243) popup_call_status_window_g3

0x0002,

0xf352,	// (0x00081cd3) popup_call_status_window_g

0x48d2,	// (0x00077253) call_type_pane_g1

0x48db,	// (0x0007725c) call_type_pane_g2

0x0001,

0xf359,	// (0x00081cda) call_type_pane_g

0x20d8,	// (0x00074a59) bg_popup_sub_pane_cp02

0x48e4,	// (0x00077265) listscroll_popup_wml_pane

0x48ec,	// (0x0007726d) list_wml_pane

0x48f6,	// (0x00077277) scroll_pane_cp013

0x48ff,	// (0x00077280) list_single_graphic_popup_wml_pane_ParamLimits

0x48ff,	// (0x00077280) list_single_graphic_popup_wml_pane

0x2747,	// (0x000750c8) list_single_graphic_popup_wml_pane_g1

0x4912,	// (0x00077293) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35e,	// (0x00081cdf) list_single_graphic_popup_wml_pane_g

0x491a,	// (0x0007729b) list_single_graphic_popup_wml_pane_t1

0x4930,	// (0x000772b1) aid_call_pane

0x232b,	// (0x00074cac) popup_clock_analogue_window_g1

0x232b,	// (0x00074cac) popup_clock_analogue_window_g2

0xaff5,	// (0x0007d976) popup_clock_analogue_window_g3

0xaff5,	// (0x0007d976) popup_clock_analogue_window_g4

0x2747,	// (0x000750c8) popup_clock_analogue_window_g5

0x0004,

0xf363,	// (0x00081ce4) popup_clock_analogue_window_g

0xaffd,	// (0x0007d97e) popup_clock_analogue_window_t1

0xb00b,	// (0x0007d98c) clock_digital_number_pane_ParamLimits

0xb00b,	// (0x0007d98c) clock_digital_number_pane

0xb017,	// (0x0007d998) clock_digital_number_pane_cp02_ParamLimits

0xb017,	// (0x0007d998) clock_digital_number_pane_cp02

0xb023,	// (0x0007d9a4) clock_digital_number_pane_cp03_ParamLimits

0xb023,	// (0x0007d9a4) clock_digital_number_pane_cp03

0xb02f,	// (0x0007d9b0) clock_digital_number_pane_cp04_ParamLimits

0xb02f,	// (0x0007d9b0) clock_digital_number_pane_cp04

0xb03b,	// (0x0007d9bc) clock_digital_separator_pane_ParamLimits

0xb03b,	// (0x0007d9bc) clock_digital_separator_pane

0xb047,	// (0x0007d9c8) popup_clock_digital_window_t1

0x2747,	// (0x000750c8) clock_digital_number_pane_g1

0x2747,	// (0x000750c8) clock_digital_number_pane_g2

0x0001,

0xf2d1,	// (0x00081c52) clock_digital_number_pane_g

0x2747,	// (0x000750c8) clock_digital_separator_pane_g1

0x2747,	// (0x000750c8) clock_digital_separator_pane_g2

0x0001,

0xf2d1,	// (0x00081c52) clock_digital_separator_pane_g

0x20d8,	// (0x00074a59) bg_popup_window_pane_cp04

0x4938,	// (0x000772b9) heading_pane_cp03

0x4940,	// (0x000772c1) listscroll_popup_gms_pane

0x4948,	// (0x000772c9) grid_large_graphic_popup_pane

0x4952,	// (0x000772d3) listscroll_popup_gms_pane_g1

0x495a,	// (0x000772db) listscroll_popup_gms_pane_g2

0x0001,

0xf36e,	// (0x00081cef) listscroll_popup_gms_pane_g

0x381f,	// (0x000761a0) scroll_pane_cp014

0x4962,	// (0x000772e3) cell_large_graphic_popup_pane_ParamLimits

0x4962,	// (0x000772e3) cell_large_graphic_popup_pane

0x4978,	// (0x000772f9) cell_large_graphic_popup_pane_g1_ParamLimits

0x4978,	// (0x000772f9) cell_large_graphic_popup_pane_g1

0x4984,	// (0x00077305) cell_large_graphic_popup_pane_g2_ParamLimits

0x4984,	// (0x00077305) cell_large_graphic_popup_pane_g2

0x4990,	// (0x00077311) cell_large_graphic_popup_pane_g3_ParamLimits

0x4990,	// (0x00077311) cell_large_graphic_popup_pane_g3

0x499d,	// (0x0007731e) cell_large_graphic_popup_pane_g4_ParamLimits

0x499d,	// (0x0007731e) cell_large_graphic_popup_pane_g4

0x0003,

0xf373,	// (0x00081cf4) cell_large_graphic_popup_pane_g_ParamLimits

0xf373,	// (0x00081cf4) cell_large_graphic_popup_pane_g

0x49ad,	// (0x0007732e) grid_highlight_pane_cp010

0x2747,	// (0x000750c8) bg_popup_call_pane_g1

0x49b7,	// (0x00077338) list_single_graphic_popup_conf_pane_ParamLimits

0x49b7,	// (0x00077338) list_single_graphic_popup_conf_pane

0x49ca,	// (0x0007734b) list_highlight_pane_cp01

0x49d3,	// (0x00077354) list_single_graphic_popup_conf_pane_g1

0x49db,	// (0x0007735c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf37c,	// (0x00081cfd) list_single_graphic_popup_conf_pane_g

0x49e3,	// (0x00077364) list_single_graphic_popup_conf_pane_t1

0x49f1,	// (0x00077372) linegrid_cams_pane_g1

0x49fa,	// (0x0007737b) linegrid_cams_pane_g2

0x28e4,	// (0x00075265) linegrid_cams_pane_g3

0x4a03,	// (0x00077384) linegrid_cams_pane_g4

0x4a0c,	// (0x0007738d) linegrid_cams_pane_g5

0x4a15,	// (0x00077396) linegrid_cams_pane_g6

0x2fae,	// (0x0007592f) linegrid_cams_pane_g7

0x0006,

0xf381,	// (0x00081d02) linegrid_cams_pane_g

0x4a1e,	// (0x0007739f) popup_clock_analogue_window

0x4a1e,	// (0x0007739f) popup_clock_digital_window

0x20d8,	// (0x00074a59) popup_phob_thumbnail_window

0x2747,	// (0x000750c8) call_video_uplink_pane_g1

0x4a27,	// (0x000773a8) call_video_uplink_pane_g2

0x0001,

0xf390,	// (0x00081d11) call_video_uplink_pane_g

0x2f58,	// (0x000758d9) video_uplink_pane

0x4a2f,	// (0x000773b0) mce_image_pane_g1

0x4a39,	// (0x000773ba) mce_image_pane_g2

0x4a41,	// (0x000773c2) mce_image_pane_g3

0x4a49,	// (0x000773ca) mce_image_pane_g4

0x4a51,	// (0x000773d2) mce_image_pane_g5

0x0004,

0xf395,	// (0x00081d16) mce_image_pane_g

0x4a59,	// (0x000773da) control_top_pane_stacon_cp01_ParamLimits

0x4a59,	// (0x000773da) control_top_pane_stacon_cp01

0x4a69,	// (0x000773ea) uni_indicator_pane_stacon_cp01_ParamLimits

0x4a69,	// (0x000773ea) uni_indicator_pane_stacon_cp01

0x4a7a,	// (0x000773fb) bg_popup_sub_pane_cp03

0x4a84,	// (0x00077405) chi_dic_find_pane

0x4a8c,	// (0x0007740d) listscroll_chi_dic_pane

0x4a95,	// (0x00077416) main_pane_chidic_g1

0x4aa8,	// (0x00077429) chi_dic_find_pane_t1

0x4ab6,	// (0x00077437) find_chidic_pane

0x4abf,	// (0x00077440) chi_dic_list_pane_ParamLimits

0x4abf,	// (0x00077440) chi_dic_list_pane

0x4ad0,	// (0x00077451) scroll_pane_cp020

0x4ad8,	// (0x00077459) find_chidic_pane_t1

0x20d8,	// (0x00074a59) input_focus_pane_cp06

0x4ae7,	// (0x00077468) list_chi_dic_pane_ParamLimits

0x4ae7,	// (0x00077468) list_chi_dic_pane

0x4af9,	// (0x0007747a) list_chi_dic_pane_t1_ParamLimits

0x4af9,	// (0x0007747a) list_chi_dic_pane_t1

0x20d8,	// (0x00074a59) list_highlight_pane_cp020

0x4b0c,	// (0x0007748d) bg_cale_heading_pane_g1

0x4b14,	// (0x00077495) bg_cale_heading_pane_g2

0x4b1c,	// (0x0007749d) bg_cale_heading_pane_g3

0x4b24,	// (0x000774a5) bg_cale_heading_pane_g4

0x4b2c,	// (0x000774ad) bg_cale_heading_pane_g5

0x4b34,	// (0x000774b5) bg_cale_heading_pane_g6

0x4b3c,	// (0x000774bd) bg_cale_heading_pane_g7

0x4b44,	// (0x000774c5) bg_cale_heading_pane_g8

0x4b4c,	// (0x000774cd) bg_cale_heading_pane_g9

0x0008,

0xf3a0,	// (0x00081d21) bg_cale_heading_pane_g

0x4b0c,	// (0x0007748d) bg_cale_side_pane_g1

0x4b54,	// (0x000774d5) bg_cale_side_pane_g2

0x4b5c,	// (0x000774dd) bg_cale_side_pane_g3

0x4b64,	// (0x000774e5) bg_cale_side_pane_g4

0x4b6c,	// (0x000774ed) bg_cale_side_pane_g5

0x4b74,	// (0x000774f5) bg_cale_side_pane_g6

0x4b7c,	// (0x000774fd) bg_cale_side_pane_g7

0x4b84,	// (0x00077505) bg_cale_side_pane_g8

0x4b8c,	// (0x0007750d) bg_cale_side_pane_g9

0x0008,

0xf3b3,	// (0x00081d34) bg_cale_side_pane_g

0x4b94,	// (0x00077515) popup_call_status_window_ParamLimits

0x4b94,	// (0x00077515) popup_call_status_window

0x4bdb,	// (0x0007755c) stacon_top_pane

0x4be3,	// (0x00077564) status_pane_ParamLimits

0x4be3,	// (0x00077564) status_pane

0x4bfd,	// (0x0007757e) status_small_pane

0x4c05,	// (0x00077586) control_pane

0x20d8,	// (0x00074a59) stacon_bottom_pane

0x4c0d,	// (0x0007758e) list_single_mce_smart_pane_t1_ParamLimits

0x4c0d,	// (0x0007758e) list_single_mce_smart_pane_t1

0x4c20,	// (0x000775a1) list_single_mce_smart_pane_t2_ParamLimits

0x4c20,	// (0x000775a1) list_single_mce_smart_pane_t2

0x0001,

0xf3c6,	// (0x00081d47) list_single_mce_smart_pane_t_ParamLimits

0xf3c6,	// (0x00081d47) list_single_mce_smart_pane_t

0x4c48,	// (0x000775c9) compass_pane

0x4c51,	// (0x000775d2) main_location2_pane_t1

0x4c67,	// (0x000775e8) main_location2_pane_t2

0x4c7d,	// (0x000775fe) main_location2_pane_t3

0x0003,

0xf3cb,	// (0x00081d4c) main_location2_pane_t

0x4cc5,	// (0x00077646) compass_pane_g1_ParamLimits

0x4cc5,	// (0x00077646) compass_pane_g1

0x4cd1,	// (0x00077652) compass_pane_t1

0x4ce0,	// (0x00077661) compass_pane_t2

0x0005,

0xf3d4,	// (0x00081d55) compass_pane_t

0x4d27,	// (0x000776a8) text_secondary_cp61

0x4d9c,	// (0x0007771d) navi_pane_cams_g5

0x4e05,	// (0x00077786) navi_pane_im_t1

0x4e13,	// (0x00077794) navi_pane_mp_g1_ParamLimits

0x4e13,	// (0x00077794) navi_pane_mp_g1

0x4e27,	// (0x000777a8) navi_pane_mp_g2_ParamLimits

0x4e27,	// (0x000777a8) navi_pane_mp_g2

0x4e33,	// (0x000777b4) navi_pane_mp_g3_ParamLimits

0x4e33,	// (0x000777b4) navi_pane_mp_g3

0x0002,

0xf3e8,	// (0x00081d69) navi_pane_mp_g_ParamLimits

0xf3e8,	// (0x00081d69) navi_pane_mp_g

0x4e3f,	// (0x000777c0) navi_pane_mp_t1

0x4e4d,	// (0x000777ce) navi_pane_mp_t2

0x0002,

0xf3ef,	// (0x00081d70) navi_pane_mp_t

0x4ef6,	// (0x00077877) navi_pane_vt_g1

0x4e3f,	// (0x000777c0) navi_pane_vt_t1

0x4efe,	// (0x0007787f) navi_slider_pane

0x2fc7,	// (0x00075948) zooming_pane

0x4f0e,	// (0x0007788f) navi_slider_pane_g1

0xb064,	// (0x0007d9e5) navi_slider_pane_g2

0x0006,

0xf3f6,	// (0x00081d77) navi_slider_pane_g

0x4f32,	// (0x000778b3) aid_levels_zoom

0x4f3a,	// (0x000778bb) zooming_pane_g1

0x4f42,	// (0x000778c3) zooming_pane_g2

0x4f42,	// (0x000778c3) zooming_pane_g3

0x0002,

0xf405,	// (0x00081d86) zooming_pane_g

0x4f4a,	// (0x000778cb) level_10_zoom

0x4f53,	// (0x000778d4) level_11_zoom

0x4f5c,	// (0x000778dd) level_1_zoom

0x4f65,	// (0x000778e6) level_2_zoom

0x4f6e,	// (0x000778ef) level_3_zoom

0x4f77,	// (0x000778f8) level_4_zoom

0x4f80,	// (0x00077901) level_5_zoom

0x4f89,	// (0x0007790a) level_6_zoom

0x4f92,	// (0x00077913) level_7_zoom

0x4f9b,	// (0x0007791c) level_8_zoom

0x4fa4,	// (0x00077925) level_9_zoom

0x4fb5,	// (0x00077936) popup_phob_thumbnail_window_g1

0x4fbd,	// (0x0007793e) popup_phob_thumbnail_window_g2

0x0001,

0xf40c,	// (0x00081d8d) popup_phob_thumbnail_window_g

0xbdd7,	// (0x0007e758) level_1_location

0xbddf,	// (0x0007e760) level_2_location

0xbde7,	// (0x0007e768) level_3_location

0xbdef,	// (0x0007e770) level_4_location

0x2fc7,	// (0x00075948) level_5_location

0x4fc5,	// (0x00077946) mce_icon_pane_g1

0x4fcd,	// (0x0007794e) mce_icon_pane_g2

0x0001,

0xf411,	// (0x00081d92) mce_icon_pane_g

0x4fd5,	// (0x00077956) main_mup_pane_g1_ParamLimits

0x4fd5,	// (0x00077956) main_mup_pane_g1

0x4feb,	// (0x0007796c) main_mup_pane_g2_ParamLimits

0x4feb,	// (0x0007796c) main_mup_pane_g2

0x5003,	// (0x00077984) main_mup_pane_g3_ParamLimits

0x5003,	// (0x00077984) main_mup_pane_g3

0x501b,	// (0x0007799c) main_mup_pane_g4_ParamLimits

0x501b,	// (0x0007799c) main_mup_pane_g4

0x5033,	// (0x000779b4) main_mup_pane_g5_ParamLimits

0x5033,	// (0x000779b4) main_mup_pane_g5

0x504d,	// (0x000779ce) main_mup_pane_g6_ParamLimits

0x504d,	// (0x000779ce) main_mup_pane_g6

0x5065,	// (0x000779e6) main_mup_pane_g7_ParamLimits

0x5065,	// (0x000779e6) main_mup_pane_g7

0x507d,	// (0x000779fe) main_mup_pane_g8_ParamLimits

0x507d,	// (0x000779fe) main_mup_pane_g8

0x5095,	// (0x00077a16) main_mup_pane_g9_ParamLimits

0x5095,	// (0x00077a16) main_mup_pane_g9

0x50a9,	// (0x00077a2a) main_mup_pane_g10_ParamLimits

0x50a9,	// (0x00077a2a) main_mup_pane_g10

0x50bd,	// (0x00077a3e) main_mup_pane_g11_ParamLimits

0x50bd,	// (0x00077a3e) main_mup_pane_g11

0x50cf,	// (0x00077a50) main_mup_pane_g12_ParamLimits

0x50cf,	// (0x00077a50) main_mup_pane_g12

0x50e3,	// (0x00077a64) main_mup_pane_g13_ParamLimits

0x50e3,	// (0x00077a64) main_mup_pane_g13

0x000c,

0xf416,	// (0x00081d97) main_mup_pane_g_ParamLimits

0xf416,	// (0x00081d97) main_mup_pane_g

0x50f5,	// (0x00077a76) main_mup_pane_t1_ParamLimits

0x50f5,	// (0x00077a76) main_mup_pane_t1

0x510f,	// (0x00077a90) main_mup_pane_t2_ParamLimits

0x510f,	// (0x00077a90) main_mup_pane_t2

0x5127,	// (0x00077aa8) main_mup_pane_t3_ParamLimits

0x5127,	// (0x00077aa8) main_mup_pane_t3

0x513f,	// (0x00077ac0) main_mup_pane_t4_ParamLimits

0x513f,	// (0x00077ac0) main_mup_pane_t4

0x515d,	// (0x00077ade) main_mup_pane_t5_ParamLimits

0x515d,	// (0x00077ade) main_mup_pane_t5

0x5172,	// (0x00077af3) main_mup_pane_t6_ParamLimits

0x5172,	// (0x00077af3) main_mup_pane_t6

0x0005,

0xf431,	// (0x00081db2) main_mup_pane_t_ParamLimits

0xf431,	// (0x00081db2) main_mup_pane_t

0x5184,	// (0x00077b05) mup_progress_pane_ParamLimits

0x5184,	// (0x00077b05) mup_progress_pane

0x5190,	// (0x00077b11) mup_visualizer_pane_ParamLimits

0x5190,	// (0x00077b11) mup_visualizer_pane

0x51b8,	// (0x00077b39) mup_volume_pane_ParamLimits

0x51b8,	// (0x00077b39) mup_volume_pane

0x51d6,	// (0x00077b57) mup_visualizer_pane_g1_ParamLimits

0x51d6,	// (0x00077b57) mup_visualizer_pane_g1

0x51d6,	// (0x00077b57) mup_visualizer_pane_g2_ParamLimits

0x51d6,	// (0x00077b57) mup_visualizer_pane_g2

0x4cc5,	// (0x00077646) mup_visualizer_pane_g3_ParamLimits

0x4cc5,	// (0x00077646) mup_visualizer_pane_g3

0x0002,

0xf43e,	// (0x00081dbf) mup_visualizer_pane_g_ParamLimits

0xf43e,	// (0x00081dbf) mup_visualizer_pane_g

0x2747,	// (0x000750c8) mup_volume_pane_g1

0x51ec,	// (0x00077b6d) mup_volume_pane_g2

0x0001,

0xf445,	// (0x00081dc6) mup_volume_pane_g

0x2747,	// (0x000750c8) mup_progress_pane_g1

0x51f5,	// (0x00077b76) mup_progress_pane_g2

0x51fe,	// (0x00077b7f) mup_progress_pane_g3

0x0002,

0xf44a,	// (0x00081dcb) mup_progress_pane_g

0x20d8,	// (0x00074a59) bg_popup_window_pane_cp05

0x5207,	// (0x00077b88) heading_pane_cp02_ParamLimits

0x5207,	// (0x00077b88) heading_pane_cp02

0x5221,	// (0x00077ba2) list_popup_blid_pane

0x5229,	// (0x00077baa) list_blid_sat_info_pane_ParamLimits

0x5229,	// (0x00077baa) list_blid_sat_info_pane

0x523c,	// (0x00077bbd) list_blid_sat_info_pane_g1

0x5244,	// (0x00077bc5) list_blid_sat_info_pane_t1

0x5324,	// (0x00077ca5) mup_equalizer_pane_ParamLimits

0x5324,	// (0x00077ca5) mup_equalizer_pane

0x533d,	// (0x00077cbe) mup_equalizer_pane_cp1_ParamLimits

0x533d,	// (0x00077cbe) mup_equalizer_pane_cp1

0x5356,	// (0x00077cd7) mup_equalizer_pane_cp2_ParamLimits

0x5356,	// (0x00077cd7) mup_equalizer_pane_cp2

0x536f,	// (0x00077cf0) mup_equalizer_pane_cp3_ParamLimits

0x536f,	// (0x00077cf0) mup_equalizer_pane_cp3

0x5388,	// (0x00077d09) mup_equalizer_pane_cp4_ParamLimits

0x5388,	// (0x00077d09) mup_equalizer_pane_cp4

0x53a1,	// (0x00077d22) mup_equalizer_pane_cp5

0x53b3,	// (0x00077d34) mup_equalizer_pane_cp6

0x53c5,	// (0x00077d46) mup_equalizer_pane_cp7

0xbcb5,	// (0x0007e636) bg_popup_call_poc_act_pane_g9

0xbcbd,	// (0x0007e63e) bg_popup_call_poc_act_pane_g10

0xbcc5,	// (0x0007e646) bg_popup_call_poc_act_pane_g11

0x000a,

0x2333,	// (0x00074cb4) mup_scale_pane

0x2747,	// (0x000750c8) mup_scale_pane_g1

0x53d9,	// (0x00077d5a) mup_scale_pane_g2

0x0006,

0xf466,	// (0x00081de7) mup_scale_pane_g

0x540f,	// (0x00077d90) msg_data_pane

0x5417,	// (0x00077d98) scroll_pane_cp017

0x0e64,	// (0x000737e5) bg_list_pane_cp04_ParamLimits

0x0e64,	// (0x000737e5) bg_list_pane_cp04

0x541f,	// (0x00077da0) msg_data_pane_g1

0x4a39,	// (0x000773ba) msg_data_pane_g2

0x4a41,	// (0x000773c2) msg_data_pane_g3

0x5427,	// (0x00077da8) msg_data_pane_g4

0x4a51,	// (0x000773d2) msg_data_pane_g5

0x4fc5,	// (0x00077946) msg_data_pane_g6

0x542f,	// (0x00077db0) msg_data_pane_g7

0x0006,

0xf475,	// (0x00081df6) msg_data_pane_g

0x0e7c,	// (0x000737fd) msg_text_pane_ParamLimits

0x0e7c,	// (0x000737fd) msg_text_pane

0x5437,	// (0x00077db8) qrid_highlight_pane_cp011_ParamLimits

0x5437,	// (0x00077db8) qrid_highlight_pane_cp011

0x20d8,	// (0x00074a59) msg_body_pane

0x20d8,	// (0x00074a59) msg_header_pane

0x5456,	// (0x00077dd7) input_focus_pane_cp07

0xb07e,	// (0x0007d9ff) msg_header_pane_t1_ParamLimits

0xb07e,	// (0x0007d9ff) msg_header_pane_t1

0x0ead,	// (0x0007382e) msg_header_pane_t2_ParamLimits

0x0ead,	// (0x0007382e) msg_header_pane_t2

0x0001,

0xf489,	// (0x00081e0a) msg_header_pane_t_ParamLimits

0xf489,	// (0x00081e0a) msg_header_pane_t

0x546b,	// (0x00077dec) msg_body_pane_g1

0x0ebf,	// (0x00073840) msg_body_pane_t1_ParamLimits

0x0ebf,	// (0x00073840) msg_body_pane_t1

0x0eea,	// (0x0007386b) msg_body_pane_t2_ParamLimits

0x0eea,	// (0x0007386b) msg_body_pane_t2

0x0efc,	// (0x0007387d) msg_body_pane_t3_ParamLimits

0x0efc,	// (0x0007387d) msg_body_pane_t3

0x0002,

0xf48e,	// (0x00081e0f) msg_body_pane_t_ParamLimits

0xf48e,	// (0x00081e0f) msg_body_pane_t

0x54a9,	// (0x00077e2a) main_viewer_pane_g1_ParamLimits

0x54a9,	// (0x00077e2a) main_viewer_pane_g1

0x54b5,	// (0x00077e36) main_viewer_pane_g2_ParamLimits

0x54b5,	// (0x00077e36) main_viewer_pane_g2

0x54c1,	// (0x00077e42) main_viewer_pane_g3_ParamLimits

0x54c1,	// (0x00077e42) main_viewer_pane_g3

0x54d0,	// (0x00077e51) main_viewer_pane_g4_ParamLimits

0x54d0,	// (0x00077e51) main_viewer_pane_g4

0xb0a8,	// (0x0007da29) main_viewer_pane_g5_ParamLimits

0xb0a8,	// (0x0007da29) main_viewer_pane_g5

0xb0a8,	// (0x0007da29) main_viewer_pane_g7_ParamLimits

0xb0a8,	// (0x0007da29) main_viewer_pane_g7

0xb0ba,	// (0x0007da3b) main_viewer_pane_g8_ParamLimits

0xb0ba,	// (0x0007da3b) main_viewer_pane_g8

0x0007,

0xf49e,	// (0x00081e1f) main_viewer_pane_g_ParamLimits

0xf49e,	// (0x00081e1f) main_viewer_pane_g

0x54df,	// (0x00077e60) viewer_content_pane_ParamLimits

0x54df,	// (0x00077e60) viewer_content_pane

0x5512,	// (0x00077e93) main_postcard_pane_g1_ParamLimits

0x5512,	// (0x00077e93) main_postcard_pane_g1

0x5526,	// (0x00077ea7) main_postcard_pane_g2_ParamLimits

0x5526,	// (0x00077ea7) main_postcard_pane_g2

0x553a,	// (0x00077ebb) main_postcard_pane_g3_ParamLimits

0x553a,	// (0x00077ebb) main_postcard_pane_g3

0x0005,

0xf4af,	// (0x00081e30) main_postcard_pane_g_ParamLimits

0xf4af,	// (0x00081e30) main_postcard_pane_g

0x554d,	// (0x00077ece) main_postcard_pane_g4

0xbf31,	// (0x0007e8b2) smil_status_volume_pane_g2

0x5588,	// (0x00077f09) postcard_pane_ParamLimits

0x5588,	// (0x00077f09) postcard_pane

0x55c8,	// (0x00077f49) postcard_pane_g1_ParamLimits

0x55c8,	// (0x00077f49) postcard_pane_g1

0x55d6,	// (0x00077f57) postcard_pane_g2_ParamLimits

0x55d6,	// (0x00077f57) postcard_pane_g2

0x55e2,	// (0x00077f63) postcard_pane_g3_ParamLimits

0x55e2,	// (0x00077f63) postcard_pane_g3

0x55ee,	// (0x00077f6f) postcard_pane_g4_ParamLimits

0x55ee,	// (0x00077f6f) postcard_pane_g4

0x55fc,	// (0x00077f7d) postcard_pane_g5_ParamLimits

0x55fc,	// (0x00077f7d) postcard_pane_g5

0x5611,	// (0x00077f92) postcard_pane_g6_ParamLimits

0x5611,	// (0x00077f92) postcard_pane_g6

0x55c8,	// (0x00077f49) postcard_pane_g7_ParamLimits

0x55c8,	// (0x00077f49) postcard_pane_g7

0x0006,

0xf4bc,	// (0x00081e3d) postcard_pane_g_ParamLimits

0xf4bc,	// (0x00081e3d) postcard_pane_g

0x5625,	// (0x00077fa6) main_mp2_pane_g1_ParamLimits

0x5625,	// (0x00077fa6) main_mp2_pane_g1

0x5631,	// (0x00077fb2) main_mp2_pane_g2_ParamLimits

0x5631,	// (0x00077fb2) main_mp2_pane_g2

0x563d,	// (0x00077fbe) main_mp2_pane_g3_ParamLimits

0x563d,	// (0x00077fbe) main_mp2_pane_g3

0x0002,

0xf4cb,	// (0x00081e4c) main_mp2_pane_g_ParamLimits

0xf4cb,	// (0x00081e4c) main_mp2_pane_g

0x5649,	// (0x00077fca) main_mp2_pane_t1_ParamLimits

0x5649,	// (0x00077fca) main_mp2_pane_t1

0x565e,	// (0x00077fdf) main_mp2_pane_t2_ParamLimits

0x565e,	// (0x00077fdf) main_mp2_pane_t2

0x5670,	// (0x00077ff1) main_mp2_pane_t3_ParamLimits

0x5670,	// (0x00077ff1) main_mp2_pane_t3

0x0002,

0xf4d2,	// (0x00081e53) main_mp2_pane_t_ParamLimits

0xf4d2,	// (0x00081e53) main_mp2_pane_t

0x5682,	// (0x00078003) pec_content_pane_ParamLimits

0x5682,	// (0x00078003) pec_content_pane

0x381f,	// (0x000761a0) scroll_pane_cp015

0x5694,	// (0x00078015) pec_attribute_pane_ParamLimits

0x5694,	// (0x00078015) pec_attribute_pane

0x56a4,	// (0x00078025) pec_content_pane_g1_ParamLimits

0x56a4,	// (0x00078025) pec_content_pane_g1

0x56b0,	// (0x00078031) pec_content_pane_t1_ParamLimits

0x56b0,	// (0x00078031) pec_content_pane_t1

0x56c2,	// (0x00078043) pec_content_pane_t2_ParamLimits

0x56c2,	// (0x00078043) pec_content_pane_t2

0x0001,

0xf4d9,	// (0x00081e5a) pec_content_pane_t_ParamLimits

0xf4d9,	// (0x00081e5a) pec_content_pane_t

0x56d4,	// (0x00078055) list_single_graphic_pane_cp01_ParamLimits

0x56d4,	// (0x00078055) list_single_graphic_pane_cp01

0x2333,	// (0x00074cb4) bg_popup_sub_pane_cp04

0x56e9,	// (0x0007806a) popup_mup_playback_window_g1

0x56f5,	// (0x00078076) popup_mup_playback_window_t1

0x570a,	// (0x0007808b) popup_mup_playback_window_t2

0x0001,

0xf4de,	// (0x00081e5f) popup_mup_playback_window_t

0x575f,	// (0x000780e0) main_image_pane_g1_ParamLimits

0x575f,	// (0x000780e0) main_image_pane_g1

0x583a,	// (0x000781bb) scroll_pane_cp018_ParamLimits

0x583a,	// (0x000781bb) scroll_pane_cp018

0x5852,	// (0x000781d3) scroll_pane_cp016_ParamLimits

0x5852,	// (0x000781d3) scroll_pane_cp016

0x5886,	// (0x00078207) smil2_image_pane_ParamLimits

0x5886,	// (0x00078207) smil2_image_pane

0x58ae,	// (0x0007822f) smil2_root_pane_ParamLimits

0x58ae,	// (0x0007822f) smil2_root_pane

0x58e6,	// (0x00078267) smil2_text_pane_ParamLimits

0x58e6,	// (0x00078267) smil2_text_pane

0x20d8,	// (0x00074a59) bg_list_pane_cp06

0x595a,	// (0x000782db) grid_radio_pane

0x20d8,	// (0x00074a59) bg_popup_window_pane_cp06

0x5962,	// (0x000782e3) main_fmradio_pane_t1

0x4938,	// (0x000772b9) heading_pane_cp04

0x5970,	// (0x000782f1) main_fmradio_pane_t2

0xbd0d,	// (0x0007e68e) popup_cale_lunar_info_window_g1

0x597e,	// (0x000782ff) main_fmradio_pane_t3

0xbd15,	// (0x0007e696) popup_cale_lunar_info_window_g2

0x598c,	// (0x0007830d) main_fmradio_pane_t4

0x0001,

0x599a,	// (0x0007831b) main_fmradio_pane_t5

0x0004,

0xf5cc,	// (0x00081f4d) popup_cale_lunar_info_window_g

0xf4f3,	// (0x00081e74) main_fmradio_pane_t

0x59a8,	// (0x00078329) wait_bar_pane_cp03

0x59b0,	// (0x00078331) cell_fmradio_pane_ParamLimits

0x59b0,	// (0x00078331) cell_fmradio_pane

0x55c8,	// (0x00077f49) cell_fmradio_pane_g1_ParamLimits

0x55c8,	// (0x00077f49) cell_fmradio_pane_g1

0x20d8,	// (0x00074a59) grid_highlight_pane_cp011

0x59c3,	// (0x00078344) poc_content_pane_ParamLimits

0x59c3,	// (0x00078344) poc_content_pane

0x59d6,	// (0x00078357) scroll_pane_cp019

0x59de,	// (0x0007835f) popup_call_poc_act_window_ParamLimits

0x59de,	// (0x0007835f) popup_call_poc_act_window

0x59fe,	// (0x0007837f) popup_call_poc_inact_window_ParamLimits

0x59fe,	// (0x0007837f) popup_call_poc_inact_window

0xf590,	// (0x00081f11) bg_popup_call_poc_act_pane_g

0xbccd,	// (0x0007e64e) bg_popup_call_poc_inact_pane_g1

0xbcd5,	// (0x0007e656) bg_popup_call_poc_inact_pane_g2

0x5a13,	// (0x00078394) popup_call_poc_act_window_g2

0xbcdd,	// (0x0007e65e) bg_popup_call_poc_inact_pane_g3

0xbc5d,	// (0x0007e5de) bg_popup_call_poc_inact_pane_g4

0xbce5,	// (0x0007e666) bg_popup_call_poc_inact_pane_g5

0x5a1b,	// (0x0007839c) popup_call_poc_act_window_t1_ParamLimits

0x5a1b,	// (0x0007839c) popup_call_poc_act_window_t1

0x5a43,	// (0x000783c4) popup_call_poc_act_window_t2_ParamLimits

0x5a43,	// (0x000783c4) popup_call_poc_act_window_t2

0x5a6b,	// (0x000783ec) popup_call_poc_act_window_t3_ParamLimits

0x5a6b,	// (0x000783ec) popup_call_poc_act_window_t3

0x5a93,	// (0x00078414) popup_call_poc_act_window_t4_ParamLimits

0x5a93,	// (0x00078414) popup_call_poc_act_window_t4

0x0003,

0xf4fe,	// (0x00081e7f) popup_call_poc_act_window_t_ParamLimits

0xf4fe,	// (0x00081e7f) popup_call_poc_act_window_t

0xbced,	// (0x0007e66e) bg_popup_call_poc_inact_pane_g6

0xbcf5,	// (0x0007e676) bg_popup_call_poc_inact_pane_g7

0xbcfd,	// (0x0007e67e) bg_popup_call_poc_inact_pane_g8

0x5aa5,	// (0x00078426) popup_call_poc_inact_window_g2

0xbd05,	// (0x0007e686) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a7,	// (0x00081f28) bg_popup_call_poc_inact_pane_g

0x5aad,	// (0x0007842e) popup_call_poc_inact_window_t1_ParamLimits

0x5aad,	// (0x0007842e) popup_call_poc_inact_window_t1

0x5ac2,	// (0x00078443) popup_call_poc_inact_window_t2_ParamLimits

0x5ac2,	// (0x00078443) popup_call_poc_inact_window_t2

0x5ad7,	// (0x00078458) popup_call_poc_inact_window_t3_ParamLimits

0x5ad7,	// (0x00078458) popup_call_poc_inact_window_t3

0x0002,

0xf507,	// (0x00081e88) popup_call_poc_inact_window_t_ParamLimits

0xf507,	// (0x00081e88) popup_call_poc_inact_window_t

0xbea4,	// (0x0007e825) context_pane_ParamLimits

0x6457,	// (0x00078dd8) signal_pane_ParamLimits

0x2fc7,	// (0x00075948) main_call2_pane

0xbe7d,	// (0x0007e7fe) popup_phob_thumbnail2_window_ParamLimits

0xbe7d,	// (0x0007e7fe) popup_phob_thumbnail2_window

0xb090,	// (0x0007da11) aid_hotspot_pointer_arrow_pane

0xb098,	// (0x0007da19) aid_hotspot_pointer_hand_pane

0x602e,	// (0x000789af) phob_pre_status_pane_g5

0x3042,	// (0x000759c3) cams_zoom_pane_ParamLimits

0x3051,	// (0x000759d2) image_vga_pane_ParamLimits

0x3069,	// (0x000759ea) main_camera_pane_g1_ParamLimits

0x3079,	// (0x000759fa) main_camera_pane_g2_ParamLimits

0x3089,	// (0x00075a0a) main_camera_pane_g3_ParamLimits

0x3099,	// (0x00075a1a) main_camera_pane_g4_ParamLimits

0x30a9,	// (0x00075a2a) main_camera_pane_g5_ParamLimits

0x30b9,	// (0x00075a3a) main_camera_pane_g6_ParamLimits

0x30c9,	// (0x00075a4a) main_camera_pane_g7_ParamLimits

0xf206,	// (0x00081b87) main_camera_pane_g_ParamLimits

0x30e5,	// (0x00075a66) main_camera_pane_t1_ParamLimits

0x30fb,	// (0x00075a7c) main_camera_pane_t2_ParamLimits

0xf217,	// (0x00081b98) main_camera_pane_t_ParamLimits

0x2333,	// (0x00074cb4) bg_popup_preview_window_pane_cp01_ParamLimits

0x2333,	// (0x00074cb4) bg_popup_preview_window_pane_cp01

0x5aec,	// (0x0007846d) popup_phob_thumbnail2_window_g1_ParamLimits

0x5aec,	// (0x0007846d) popup_phob_thumbnail2_window_g1

0x20d8,	// (0x00074a59) call2_cli_visual_pane

0x5b0f,	// (0x00078490) popup_call2_audio_conf_window_ParamLimits

0x5b0f,	// (0x00078490) popup_call2_audio_conf_window

0x5b2d,	// (0x000784ae) popup_call2_audio_first_window_ParamLimits

0x5b2d,	// (0x000784ae) popup_call2_audio_first_window

0x5ba3,	// (0x00078524) popup_call2_audio_in_window_ParamLimits

0x5ba3,	// (0x00078524) popup_call2_audio_in_window

0x5bd7,	// (0x00078558) popup_call2_audio_out_window_ParamLimits

0x5bd7,	// (0x00078558) popup_call2_audio_out_window

0x5c29,	// (0x000785aa) popup_call2_audio_second_window_ParamLimits

0x5c29,	// (0x000785aa) popup_call2_audio_second_window

0x5c7b,	// (0x000785fc) popup_call2_audio_wait_window_ParamLimits

0x5c7b,	// (0x000785fc) popup_call2_audio_wait_window

0x20d8,	// (0x00074a59) bg_popup_call2_act_pane_cp03

0x2315,	// (0x00074c96) list_conf_pane_cp

0x5cb3,	// (0x00078634) popup_call2_audio_conf_window_t1

0x49b7,	// (0x00077338) list_single_graphic_popup_conf2_pane_ParamLimits

0x49b7,	// (0x00077338) list_single_graphic_popup_conf2_pane

0x49ca,	// (0x0007734b) list_highlight_pane_cp04

0x5cc1,	// (0x00078642) list_single_graphic_popup_conf2_pane_g1

0x49db,	// (0x0007735c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf50e,	// (0x00081e8f) list_single_graphic_popup_conf2_pane_g

0x5cc9,	// (0x0007864a) list_single_graphic_popup_conf2_pane_t1

0x5cd7,	// (0x00078658) bg_popup_call2_act_pane_cp01_ParamLimits

0x5cd7,	// (0x00078658) bg_popup_call2_act_pane_cp01

0x5d61,	// (0x000786e2) call_type_pane_cp05_ParamLimits

0x5d61,	// (0x000786e2) call_type_pane_cp05

0x5db5,	// (0x00078736) popup_call2_audio_second_window_g1_ParamLimits

0x5db5,	// (0x00078736) popup_call2_audio_second_window_g1

0x5e09,	// (0x0007878a) popup_call2_audio_second_window_g2_ParamLimits

0x5e09,	// (0x0007878a) popup_call2_audio_second_window_g2

0x0002,

0xf513,	// (0x00081e94) popup_call2_audio_second_window_g_ParamLimits

0xf513,	// (0x00081e94) popup_call2_audio_second_window_g

0x5e6e,	// (0x000787ef) popup_call2_audio_second_window_t1_ParamLimits

0x5e6e,	// (0x000787ef) popup_call2_audio_second_window_t1

0xb0d2,	// (0x0007da53) popup_call2_audio_second_window_t2_ParamLimits

0xb0d2,	// (0x0007da53) popup_call2_audio_second_window_t2

0xb125,	// (0x0007daa6) popup_call2_audio_second_window_t3_ParamLimits

0xb125,	// (0x0007daa6) popup_call2_audio_second_window_t3

0x0003,

0xf51a,	// (0x00081e9b) popup_call2_audio_second_window_t_ParamLimits

0xf51a,	// (0x00081e9b) popup_call2_audio_second_window_t

0x20d8,	// (0x00074a59) bg_popup_call2_in_pane_cp02

0x20e2,	// (0x00074a63) call_type_pane_cp04

0x20ea,	// (0x00074a6b) popup_call2_audio_wait_window_g1

0x20f2,	// (0x00074a73) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x00081a76) popup_call2_audio_wait_window_g

0x20fa,	// (0x00074a7b) popup_call2_audio_wait_window_t3

0xb218,	// (0x0007db99) bg_popup_call2_act_pane_ParamLimits

0xb218,	// (0x0007db99) bg_popup_call2_act_pane

0xb2d8,	// (0x0007dc59) call_type_pane_cp03_ParamLimits

0xb2d8,	// (0x0007dc59) call_type_pane_cp03

0xb33c,	// (0x0007dcbd) popup_call2_audio_first_window_g1_ParamLimits

0xb33c,	// (0x0007dcbd) popup_call2_audio_first_window_g1

0xb3ac,	// (0x0007dd2d) popup_call2_audio_first_window_g2_ParamLimits

0xb3ac,	// (0x0007dd2d) popup_call2_audio_first_window_g2

0x51d6,	// (0x00077b57) popup_call2_audio_first_window_g3_ParamLimits

0x51d6,	// (0x00077b57) popup_call2_audio_first_window_g3

0x0004,

0xf523,	// (0x00081ea4) popup_call2_audio_first_window_g_ParamLimits

0xf523,	// (0x00081ea4) popup_call2_audio_first_window_g

0xb48a,	// (0x0007de0b) popup_call2_audio_first_window_t1_ParamLimits

0xb48a,	// (0x0007de0b) popup_call2_audio_first_window_t1

0xb58d,	// (0x0007df0e) popup_call2_audio_first_window_t4_ParamLimits

0xb58d,	// (0x0007df0e) popup_call2_audio_first_window_t4

0xb670,	// (0x0007dff1) popup_call2_audio_first_window_t5_ParamLimits

0xb670,	// (0x0007dff1) popup_call2_audio_first_window_t5

0x0003,

0xf52e,	// (0x00081eaf) popup_call2_audio_first_window_t_ParamLimits

0xf52e,	// (0x00081eaf) popup_call2_audio_first_window_t

0x232b,	// (0x00074cac) bg_popup_call2_act_pane_g1

0xbd1d,	// (0x0007e69e) popup_cale_lunar_info_window_t1

0xbd2b,	// (0x0007e6ac) popup_cale_lunar_info_window_t2

0xbd39,	// (0x0007e6ba) popup_cale_lunar_info_window_t3

0x20d8,	// (0x00074a59) bg_popup_call2_bubble_pane

0xb771,	// (0x0007e0f2) bg_popup_call2_in_pane_cp01_ParamLimits

0xb771,	// (0x0007e0f2) bg_popup_call2_in_pane_cp01

0x1d90,	// (0x00074711) call_type_pane_cp02

0xb7b9,	// (0x0007e13a) popup_call2_audio_out_window_g1_ParamLimits

0xb7b9,	// (0x0007e13a) popup_call2_audio_out_window_g1

0xb7e5,	// (0x0007e166) popup_call2_audio_out_window_g2_ParamLimits

0xb7e5,	// (0x0007e166) popup_call2_audio_out_window_g2

0xb80d,	// (0x0007e18e) popup_call2_audio_out_window_g3_ParamLimits

0xb80d,	// (0x0007e18e) popup_call2_audio_out_window_g3

0x0003,

0xf537,	// (0x00081eb8) popup_call2_audio_out_window_g_ParamLimits

0xf537,	// (0x00081eb8) popup_call2_audio_out_window_g

0xb848,	// (0x0007e1c9) popup_call2_audio_out_window_t1_ParamLimits

0xb848,	// (0x0007e1c9) popup_call2_audio_out_window_t1

0xb8a7,	// (0x0007e228) popup_call2_audio_out_window_t2_ParamLimits

0xb8a7,	// (0x0007e228) popup_call2_audio_out_window_t2

0xb8fb,	// (0x0007e27c) popup_call2_audio_out_window_t3_ParamLimits

0xb8fb,	// (0x0007e27c) popup_call2_audio_out_window_t3

0xb911,	// (0x0007e292) popup_call2_audio_out_window_t4_ParamLimits

0xb911,	// (0x0007e292) popup_call2_audio_out_window_t4

0xb927,	// (0x0007e2a8) popup_call2_audio_out_window_t5_ParamLimits

0xb927,	// (0x0007e2a8) popup_call2_audio_out_window_t5

0x0005,

0xf540,	// (0x00081ec1) popup_call2_audio_out_window_t_ParamLimits

0xf540,	// (0x00081ec1) popup_call2_audio_out_window_t

0xb98b,	// (0x0007e30c) bg_popup_call2_in_pane_ParamLimits

0xb98b,	// (0x0007e30c) bg_popup_call2_in_pane

0xb9e7,	// (0x0007e368) popup_call2_audio_in_window_g1_ParamLimits

0xb9e7,	// (0x0007e368) popup_call2_audio_in_window_g1

0xba1f,	// (0x0007e3a0) popup_call2_audio_in_window_g2_ParamLimits

0xba1f,	// (0x0007e3a0) popup_call2_audio_in_window_g2

0xba57,	// (0x0007e3d8) popup_call2_audio_in_window_g3_ParamLimits

0xba57,	// (0x0007e3d8) popup_call2_audio_in_window_g3

0x0003,

0xf54d,	// (0x00081ece) popup_call2_audio_in_window_g_ParamLimits

0xf54d,	// (0x00081ece) popup_call2_audio_in_window_g

0xbaaf,	// (0x0007e430) popup_call2_audio_in_window_t1_ParamLimits

0xbaaf,	// (0x0007e430) popup_call2_audio_in_window_t1

0xbb2f,	// (0x0007e4b0) popup_call2_audio_in_window_t2_ParamLimits

0xbb2f,	// (0x0007e4b0) popup_call2_audio_in_window_t2

0xbbaf,	// (0x0007e530) popup_call2_audio_in_window_t3_ParamLimits

0xbbaf,	// (0x0007e530) popup_call2_audio_in_window_t3

0xbbc9,	// (0x0007e54a) popup_call2_audio_in_window_t4_ParamLimits

0xbbc9,	// (0x0007e54a) popup_call2_audio_in_window_t4

0xbbdb,	// (0x0007e55c) popup_call2_audio_in_window_t5_ParamLimits

0xbbdb,	// (0x0007e55c) popup_call2_audio_in_window_t5

0xbbf0,	// (0x0007e571) popup_call2_audio_in_window_t6_ParamLimits

0xbbf0,	// (0x0007e571) popup_call2_audio_in_window_t6

0x0005,

0xf556,	// (0x00081ed7) popup_call2_audio_in_window_t_ParamLimits

0xf556,	// (0x00081ed7) popup_call2_audio_in_window_t

0x232b,	// (0x00074cac) bg_popup_call2_in_pane_g1

0xbd47,	// (0x0007e6c8) popup_cale_lunar_info_window_t4

0x0003,

0xf5d1,	// (0x00081f52) popup_cale_lunar_info_window_t

0x2333,	// (0x00074cb4) bg_popup_call2_rect_pane_ParamLimits

0x2333,	// (0x00074cb4) bg_popup_call2_rect_pane

0x20d8,	// (0x00074a59) call2_cli_visual_graphic_pane

0x20d8,	// (0x00074a59) call2_cli_visual_text_pane

0xbf44,	// (0x0007e8c5) smil_status_volume_pane_g3

0x0002,

0x2747,	// (0x000750c8) call2_cli_visual_graphic_pane_g1

0x2747,	// (0x000750c8) call2_cli_visual_graphic_pane_g2

0x2747,	// (0x000750c8) call2_cli_visual_graphic_pane_g3

0x0002,

0xf563,	// (0x00081ee4) call2_cli_visual_graphic_pane_g

0xbc05,	// (0x0007e586) bg_popup_call2_rect_pane_g1

0x288a,	// (0x0007520b) bg_popup_call2_rect_pane_g2

0xbc0d,	// (0x0007e58e) bg_popup_call2_rect_pane_g3

0xbc15,	// (0x0007e596) bg_popup_call2_rect_pane_g4

0xbc1d,	// (0x0007e59e) bg_popup_call2_rect_pane_g5

0xbc25,	// (0x0007e5a6) bg_popup_call2_rect_pane_g6

0xbc2d,	// (0x0007e5ae) bg_popup_call2_rect_pane_g7

0xbc35,	// (0x0007e5b6) bg_popup_call2_rect_pane_g8

0xbc3d,	// (0x0007e5be) bg_popup_call2_rect_pane_g9

0x0008,

0xf56a,	// (0x00081eeb) bg_popup_call2_rect_pane_g

0xbc45,	// (0x0007e5c6) bg_popup_call2_bubble_pane_g1

0xbc4d,	// (0x0007e5ce) bg_popup_call2_bubble_pane_g2

0xbc55,	// (0x0007e5d6) bg_popup_call2_bubble_pane_g3

0xbc5d,	// (0x0007e5de) bg_popup_call2_bubble_pane_g4

0xbc65,	// (0x0007e5e6) bg_popup_call2_bubble_pane_g5

0xbc6d,	// (0x0007e5ee) bg_popup_call2_bubble_pane_g6

0xbc75,	// (0x0007e5f6) bg_popup_call2_bubble_pane_g7

0xbc7d,	// (0x0007e5fe) bg_popup_call2_bubble_pane_g8

0xbc85,	// (0x0007e606) bg_popup_call2_bubble_pane_g9

0x0008,

0xf57d,	// (0x00081efe) bg_popup_call2_bubble_pane_g

0x2917,	// (0x00075298) aid_cale_week_size_cell_pane

0x3111,	// (0x00075a92) aid_cams_cif_uncrop_pane_ParamLimits

0x3111,	// (0x00075a92) aid_cams_cif_uncrop_pane

0x32f0,	// (0x00075c71) aid_cams_size_cell_ParamLimits

0x32f0,	// (0x00075c71) aid_cams_size_cell

0x3304,	// (0x00075c85) grid_cams_pane_ParamLimits

0x3319,	// (0x00075c9a) linegrid_cams_pane_ParamLimits

0x344a,	// (0x00075dcb) call_video_pane_t1

0x3464,	// (0x00075de5) call_video_pane_t2

0x0001,

0xf26a,	// (0x00081beb) call_video_pane_t

0x3a5b,	// (0x000763dc) aid_cale_month_size_cell_pane_ParamLimits

0x3a5b,	// (0x000763dc) aid_cale_month_size_cell_pane

0xf61a,	// (0x00081f9b) smil_status_volume_pane_g

0xbf51,	// (0x0007e8d2) volume_smil_pane_ParamLimits

0xaea4,	// (0x0007d825) aid_popup2_width_pane

0x27e2,	// (0x00075163) cell_qdial_pane_g4_ParamLimits

0x27e2,	// (0x00075163) cell_qdial_pane_g4

0x4ca5,	// (0x00077626) aid_blid_cardinal_pane_ParamLimits

0x4cb1,	// (0x00077632) aid_blid_destination_pane_ParamLimits

0x4cb1,	// (0x00077632) aid_blid_destination_pane

0x2333,	// (0x00074cb4) bg_popup_call_poc_act_pane_ParamLimits

0x2333,	// (0x00074cb4) bg_popup_call_poc_act_pane

0x2333,	// (0x00074cb4) bg_popup_call_poc_inact_pane_ParamLimits

0x2333,	// (0x00074cb4) bg_popup_call_poc_inact_pane

0xbc8d,	// (0x0007e60e) bg_popup_call_poc_act_pane_g1

0xbc95,	// (0x0007e616) bg_popup_call_poc_act_pane_g2

0xbc9d,	// (0x0007e61e) bg_popup_call_poc_act_pane_g3

0xbc5d,	// (0x0007e5de) bg_popup_call_poc_act_pane_g4

0xbc65,	// (0x0007e5e6) bg_popup_call_poc_act_pane_g5

0xbca5,	// (0x0007e626) bg_popup_call_poc_act_pane_g6

0xbc75,	// (0x0007e5f6) bg_popup_call_poc_act_pane_g7

0xbcad,	// (0x0007e62e) bg_popup_call_poc_act_pane_g8

0x20d8,	// (0x00074a59) main_usb_pane

0xbe5c,	// (0x0007e7dd) popup_cale_lunar_info_window

0x3707,	// (0x00076088) im_reading_pane_t1_ParamLimits

0x373d,	// (0x000760be) list_im_pane_ParamLimits

0x374e,	// (0x000760cf) scroll_pane_cp07_ParamLimits

0x20d8,	// (0x00074a59) grid_highlight_pane_cp012

0x2333,	// (0x00074cb4) mup_scale_pane_ParamLimits

0x55c8,	// (0x00077f49) main_usb_pane_g1_ParamLimits

0x55c8,	// (0x00077f49) main_usb_pane_g1

0x5f4b,	// (0x000788cc) main_usb_pane_g2_ParamLimits

0x5f4b,	// (0x000788cc) main_usb_pane_g2

0x0001,

0xf5ba,	// (0x00081f3b) main_usb_pane_g_ParamLimits

0xf5ba,	// (0x00081f3b) main_usb_pane_g

0x5f5f,	// (0x000788e0) main_usb_pane_t1_ParamLimits

0x5f5f,	// (0x000788e0) main_usb_pane_t1

0x5f71,	// (0x000788f2) main_usb_pane_t2_ParamLimits

0x5f71,	// (0x000788f2) main_usb_pane_t2

0x5f83,	// (0x00078904) main_usb_pane_t3_ParamLimits

0x5f83,	// (0x00078904) main_usb_pane_t3

0x5f95,	// (0x00078916) main_usb_pane_t4_ParamLimits

0x5f95,	// (0x00078916) main_usb_pane_t4

0x5fa7,	// (0x00078928) main_usb_pane_t5_ParamLimits

0x5fa7,	// (0x00078928) main_usb_pane_t5

0x5fb9,	// (0x0007893a) main_usb_pane_t6_ParamLimits

0x5fb9,	// (0x0007893a) main_usb_pane_t6

0x0005,

0xf5bf,	// (0x00081f40) main_usb_pane_t_ParamLimits

0x4c3f,	// (0x000775c0) aid_text_placing

0x4c51,	// (0x000775d2) main_location2_pane_t1_ParamLimits

0x4c67,	// (0x000775e8) main_location2_pane_t2_ParamLimits

0x4c7d,	// (0x000775fe) main_location2_pane_t3_ParamLimits

0x4c93,	// (0x00077614) main_location2_pane_t4_ParamLimits

0x4c93,	// (0x00077614) main_location2_pane_t4

0xf3cb,	// (0x00081d4c) main_location2_pane_t_ParamLimits

0x23fd,	// (0x00074d7e) find_pinb_pane_g2_ParamLimits

0x23fd,	// (0x00074d7e) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x00081a9c) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x00081a9c) find_pinb_pane_g

0x2409,	// (0x00074d8a) find_pinb_pane_t1_ParamLimits

0x241b,	// (0x00074d9c) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x00081aa1) find_pinb_pane_t_ParamLimits

0x20d8,	// (0x00074a59) main_call3_pane

0x3e95,	// (0x00076816) cale_month_day_heading_pane_t1_ParamLimits

0x3f1b,	// (0x0007689c) cale_month_day_heading_pane_t2_ParamLimits

0x3fac,	// (0x0007692d) cale_month_day_heading_pane_t3_ParamLimits

0x403d,	// (0x000769be) cale_month_day_heading_pane_t4_ParamLimits

0x40ce,	// (0x00076a4f) cale_month_day_heading_pane_t5_ParamLimits

0x415f,	// (0x00076ae0) cale_month_day_heading_pane_t6_ParamLimits

0x41f0,	// (0x00076b71) cale_month_day_heading_pane_t7_ParamLimits

0xf2a2,	// (0x00081c23) cale_month_day_heading_pane_t_ParamLimits

0x4456,	// (0x00076dd7) smil_status_volume_pane

0x55a4,	// (0x00077f25) postcard_address_pane_ParamLimits

0x55a4,	// (0x00077f25) postcard_address_pane

0x55b6,	// (0x00077f37) postcard_message_pane_ParamLimits

0x55b6,	// (0x00077f37) postcard_message_pane

0x5f29,	// (0x000788aa) call2_cli_visual_pane_t1_ParamLimits

0x5f29,	// (0x000788aa) call2_cli_visual_pane_t1

0x6673,	// (0x00078ff4) postcard_message_pane_t1_ParamLimits

0x6673,	// (0x00078ff4) postcard_message_pane_t1

0x665c,	// (0x00078fdd) postcard_address_pane_t1_ParamLimits

0x665c,	// (0x00078fdd) postcard_address_pane_t1

0x664a,	// (0x00078fcb) popup_call3_audio_in_window_ParamLimits

0x664a,	// (0x00078fcb) popup_call3_audio_in_window

0x64d9,	// (0x00078e5a) bg_popup_call3_in_pane_ParamLimits

0x64d9,	// (0x00078e5a) bg_popup_call3_in_pane

0x654b,	// (0x00078ecc) popup_call3_audio_in_window_g1_ParamLimits

0x654b,	// (0x00078ecc) popup_call3_audio_in_window_g1

0x656b,	// (0x00078eec) popup_call3_audio_in_window_g2_ParamLimits

0x656b,	// (0x00078eec) popup_call3_audio_in_window_g2

0x658b,	// (0x00078f0c) popup_call3_audio_in_window_g3_ParamLimits

0x658b,	// (0x00078f0c) popup_call3_audio_in_window_g3

0x0003,

0xf621,	// (0x00081fa2) popup_call3_audio_in_window_g_ParamLimits

0xf621,	// (0x00081fa2) popup_call3_audio_in_window_g

0x65bc,	// (0x00078f3d) popup_call3_audio_in_window_t1_ParamLimits

0x65bc,	// (0x00078f3d) popup_call3_audio_in_window_t1

0x65fa,	// (0x00078f7b) popup_call3_audio_in_window_t2_ParamLimits

0x65fa,	// (0x00078f7b) popup_call3_audio_in_window_t2

0x6638,	// (0x00078fb9) popup_call3_audio_in_window_t3_ParamLimits

0x6638,	// (0x00078fb9) popup_call3_audio_in_window_t3

0x0002,

0xf62a,	// (0x00081fab) popup_call3_audio_in_window_t_ParamLimits

0xf62a,	// (0x00081fab) popup_call3_audio_in_window_t

0x2fc7,	// (0x00075948) bg_popup_call3_rect_pane

0xbc05,	// (0x0007e586) bg_popup_call3_rect_pane_g1

0x288a,	// (0x0007520b) bg_popup_call3_rect_pane_g2

0xbc0d,	// (0x0007e58e) bg_popup_call3_rect_pane_g3

0xbc15,	// (0x0007e596) bg_popup_call3_rect_pane_g4

0xbc1d,	// (0x0007e59e) bg_popup_call3_rect_pane_g5

0xbc25,	// (0x0007e5a6) bg_popup_call3_rect_pane_g6

0xbc2d,	// (0x0007e5ae) bg_popup_call3_rect_pane_g7

0x51ce,	// (0x00077b4f) mup_visualizer_osc_pane

0x51e4,	// (0x00077b65) mup_visualizer_spec_pane

0x6509,	// (0x00078e8a) call3_video_qcif_pane_ParamLimits

0x6509,	// (0x00078e8a) call3_video_qcif_pane

0x651a,	// (0x00078e9b) call3_video_qcif_uncrop_pane_ParamLimits

0x651a,	// (0x00078e9b) call3_video_qcif_uncrop_pane

0x6526,	// (0x00078ea7) call3_video_subqcif_pane_ParamLimits

0x6526,	// (0x00078ea7) call3_video_subqcif_pane

0x653a,	// (0x00078ebb) call3_video_subqcif_uncrop_pane_ParamLimits

0x653a,	// (0x00078ebb) call3_video_subqcif_uncrop_pane

0x65ab,	// (0x00078f2c) popup_call3_audio_in_window_g4_ParamLimits

0x65ab,	// (0x00078f2c) popup_call3_audio_in_window_g4

0x64c8,	// (0x00078e49) mup_spec_half_pane

0x64d1,	// (0x00078e52) mup_spec_half_pane_cp

0xbf04,	// (0x0007e885) mup_osc_middle_pane

0xbf0d,	// (0x0007e88e) mup_visualizer_osc_pane_g1

0x64a9,	// (0x00078e2a) mup_spec_bar_pane_ParamLimits

0x64a9,	// (0x00078e2a) mup_spec_bar_pane

0xbef1,	// (0x0007e872) mup_spec_bar_pane_g1

0xbefb,	// (0x0007e87c) mup_spec_bar_pane_g2

0x0001,

0xf615,	// (0x00081f96) mup_spec_bar_pane_g

0x2917,	// (0x00075298) aid_cale_week_size_cell_pane_ParamLimits

0x2931,	// (0x000752b2) bg_cale_heading_pane_ParamLimits

0x2949,	// (0x000752ca) bg_cale_pane_cp01_ParamLimits

0x2966,	// (0x000752e7) cale_week_corner_pane_ParamLimits

0x2985,	// (0x00075306) cale_week_day_heading_pane_ParamLimits

0x29a2,	// (0x00075323) cale_week_scroll_pane_g1_ParamLimits

0x29b5,	// (0x00075336) cale_week_scroll_pane_g2_ParamLimits

0x29cd,	// (0x0007534e) cale_week_scroll_pane_g3_ParamLimits

0x29e5,	// (0x00075366) cale_week_scroll_pane_g4_ParamLimits

0x29fd,	// (0x0007537e) cale_week_scroll_pane_g5_ParamLimits

0x2a15,	// (0x00075396) cale_week_scroll_pane_g6_ParamLimits

0x2a2d,	// (0x000753ae) cale_week_scroll_pane_g7_ParamLimits

0x2a45,	// (0x000753c6) cale_week_scroll_pane_g8_ParamLimits

0x2a61,	// (0x000753e2) cale_week_scroll_pane_g9_ParamLimits

0x2a79,	// (0x000753fa) cale_week_scroll_pane_g10_ParamLimits

0x2a91,	// (0x00075412) cale_week_scroll_pane_g11_ParamLimits

0x2aa9,	// (0x0007542a) cale_week_scroll_pane_g12_ParamLimits

0x2ac1,	// (0x00075442) cale_week_scroll_pane_g13_ParamLimits

0x2ad9,	// (0x0007545a) cale_week_scroll_pane_g14_ParamLimits

0x2af1,	// (0x00075472) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x00081b2d) cale_week_scroll_pane_g_ParamLimits

0x2b25,	// (0x000754a6) cale_week_time_pane_ParamLimits

0x2b41,	// (0x000754c2) grid_cale_week_pane_ParamLimits

0x2b5f,	// (0x000754e0) listscroll_cale_week_pane_t1

0x2b71,	// (0x000754f2) scroll_pane_cp08_ParamLimits

0x3add,	// (0x0007645e) cale_month_corner_pane_ParamLimits

0x3e39,	// (0x000767ba) cale_month_pane_t1

0x3e4b,	// (0x000767cc) cale_month_week_pane_ParamLimits

0x489a,	// (0x0007721b) popup_call_status_window_g1_ParamLimits

0x48ae,	// (0x0007722f) popup_call_status_window_g2_ParamLimits

0x48c2,	// (0x00077243) popup_call_status_window_g3_ParamLimits

0xf352,	// (0x00081cd3) popup_call_status_window_g_ParamLimits

0x4928,	// (0x000772a9) aid_call2_pane

0x0ea1,	// (0x00073822) msg_header_pane_g1

0x55a4,	// (0x00077f25) postcard_address2_pane_ParamLimits

0x55a4,	// (0x00077f25) postcard_address2_pane

0x55b6,	// (0x00077f37) postcard_message2_pane_ParamLimits

0x55b6,	// (0x00077f37) postcard_message2_pane

0x6465,	// (0x00078de6) message2_row_pane_ParamLimits

0x6465,	// (0x00078de6) message2_row_pane

0x647f,	// (0x00078e00) address2_row_pane_ParamLimits

0x647f,	// (0x00078e00) address2_row_pane

0xbebf,	// (0x0007e840) postcard_message2_row_pane_g1

0xbec7,	// (0x0007e848) postcard_message2_row_pane_t1

0xbebf,	// (0x0007e840) address2_row_pane_g1

0xbec7,	// (0x0007e848) address2_row_pane_t1

0x2fbf,	// (0x00075940) aid_size_cell_vorec

0x20d8,	// (0x00074a59) main_rss_pane

0x6492,	// (0x00078e13) rss_list_single_pane_ParamLimits

0x6492,	// (0x00078e13) rss_list_single_pane

0xbed5,	// (0x0007e856) rss_list_single_pane_t1

0xbee3,	// (0x0007e864) rss_list_single_pane_t2

0x0001,

0xf610,	// (0x00081f91) rss_list_single_pane_t

0x20d8,	// (0x00074a59) main_camera2_pane

0x20d8,	// (0x00074a59) main_video2_pane

0x66cc,	// (0x0007904d) cams_zoom_pane_cp2_ParamLimits

0x66cc,	// (0x0007904d) cams_zoom_pane_cp2

0x66e3,	// (0x00079064) image2_vga_pane_ParamLimits

0x66e3,	// (0x00079064) image2_vga_pane

0x6719,	// (0x0007909a) main_camera2_pane_g1_ParamLimits

0x6719,	// (0x0007909a) main_camera2_pane_g1

0x6739,	// (0x000790ba) main_camera2_pane_g2_ParamLimits

0x6739,	// (0x000790ba) main_camera2_pane_g2

0x6750,	// (0x000790d1) main_camera2_pane_g3_ParamLimits

0x6750,	// (0x000790d1) main_camera2_pane_g3

0x6767,	// (0x000790e8) main_camera2_pane_g4_ParamLimits

0x6767,	// (0x000790e8) main_camera2_pane_g4

0x677e,	// (0x000790ff) main_camera2_pane_g5_ParamLimits

0x677e,	// (0x000790ff) main_camera2_pane_g5

0x6795,	// (0x00079116) main_camera2_pane_g6_ParamLimits

0x6795,	// (0x00079116) main_camera2_pane_g6

0x67ac,	// (0x0007912d) main_camera2_pane_g7_ParamLimits

0x67ac,	// (0x0007912d) main_camera2_pane_g7

0x67c3,	// (0x00079144) main_camera2_pane_g8_ParamLimits

0x67c3,	// (0x00079144) main_camera2_pane_g8

0x0008,

0xf631,	// (0x00081fb2) main_camera2_pane_g_ParamLimits

0xf631,	// (0x00081fb2) main_camera2_pane_g

0x67f1,	// (0x00079172) main_camera2_pane_t1_ParamLimits

0x67f1,	// (0x00079172) main_camera2_pane_t1

0x6820,	// (0x000791a1) main_camera2_pane_t2_ParamLimits

0x6820,	// (0x000791a1) main_camera2_pane_t2

0x683d,	// (0x000791be) main_camera2_pane_t3_ParamLimits

0x683d,	// (0x000791be) main_camera2_pane_t3

0x6889,	// (0x0007920a) main_camera2_pane_t4_ParamLimits

0x6889,	// (0x0007920a) main_camera2_pane_t4

0x0006,

0xf644,	// (0x00081fc5) main_camera2_pane_t_ParamLimits

0xf644,	// (0x00081fc5) main_camera2_pane_t

0x68fe,	// (0x0007927f) cams_zoom_pane_cp4_ParamLimits

0x68fe,	// (0x0007927f) cams_zoom_pane_cp4

0x6914,	// (0x00079295) image2_cif_pane_ParamLimits

0x6914,	// (0x00079295) image2_cif_pane

0x6937,	// (0x000792b8) image2_subqcif_pane_ParamLimits

0x6937,	// (0x000792b8) image2_subqcif_pane

0x694d,	// (0x000792ce) main_video2_pane_g1_ParamLimits

0x694d,	// (0x000792ce) main_video2_pane_g1

0x6967,	// (0x000792e8) main_video2_pane_g2_ParamLimits

0x6967,	// (0x000792e8) main_video2_pane_g2

0x697d,	// (0x000792fe) main_video2_pane_g3_ParamLimits

0x697d,	// (0x000792fe) main_video2_pane_g3

0x6993,	// (0x00079314) main_video2_pane_g4_ParamLimits

0x6993,	// (0x00079314) main_video2_pane_g4

0x69a9,	// (0x0007932a) main_video2_pane_g5_ParamLimits

0x69a9,	// (0x0007932a) main_video2_pane_g5

0x69bf,	// (0x00079340) main_video2_pane_g6_ParamLimits

0x69bf,	// (0x00079340) main_video2_pane_g6

0x0005,

0xf653,	// (0x00081fd4) main_video2_pane_g_ParamLimits

0xf653,	// (0x00081fd4) main_video2_pane_g

0x69d9,	// (0x0007935a) main_video2_pane_t1_ParamLimits

0x69d9,	// (0x0007935a) main_video2_pane_t1

0x69fd,	// (0x0007937e) main_video2_pane_t2_ParamLimits

0x69fd,	// (0x0007937e) main_video2_pane_t2

0x6a47,	// (0x000793c8) main_video2_pane_t3_ParamLimits

0x6a47,	// (0x000793c8) main_video2_pane_t3

0x0002,

0xf660,	// (0x00081fe1) main_video2_pane_t_ParamLimits

0xf660,	// (0x00081fe1) main_video2_pane_t

0x6068,	// (0x000789e9) call_muted_g2

0x0001,

0xf602,	// (0x00081f83) call_muted_g

0x20d8,	// (0x00074a59) main_mup2_pane

0x6a89,	// (0x0007940a) main_mup2_pane_g1_ParamLimits

0x6a89,	// (0x0007940a) main_mup2_pane_g1

0x6a95,	// (0x00079416) main_mup2_pane_g2_ParamLimits

0x6a95,	// (0x00079416) main_mup2_pane_g2

0xc070,	// (0x0007e9f1) main_mup_pane_g13_cp1

0xc078,	// (0x0007e9f9) mup_volume_pane_cp1

0x6ab1,	// (0x00079432) main_mup2_pane_g4_ParamLimits

0x6ab1,	// (0x00079432) main_mup2_pane_g4

0x6ac1,	// (0x00079442) main_mup2_pane_g5_ParamLimits

0x6ac1,	// (0x00079442) main_mup2_pane_g5

0x6ad1,	// (0x00079452) main_mup2_pane_g6_ParamLimits

0x6ad1,	// (0x00079452) main_mup2_pane_g6

0x6ae1,	// (0x00079462) main_mup2_pane_g7_ParamLimits

0x6ae1,	// (0x00079462) main_mup2_pane_g7

0x0006,

0xf667,	// (0x00081fe8) main_mup2_pane_g_ParamLimits

0xf667,	// (0x00081fe8) main_mup2_pane_g

0x6af9,	// (0x0007947a) main_mup2_pane_t1_ParamLimits

0x6af9,	// (0x0007947a) main_mup2_pane_t1

0x6b0f,	// (0x00079490) main_mup2_pane_t2_ParamLimits

0x6b0f,	// (0x00079490) main_mup2_pane_t2

0x6b25,	// (0x000794a6) main_mup2_pane_t3_ParamLimits

0x6b25,	// (0x000794a6) main_mup2_pane_t3

0x6b3b,	// (0x000794bc) main_mup2_pane_t4_ParamLimits

0x6b3b,	// (0x000794bc) main_mup2_pane_t4

0x6b53,	// (0x000794d4) main_mup2_pane_t5_ParamLimits

0x6b53,	// (0x000794d4) main_mup2_pane_t5

0x6b6b,	// (0x000794ec) main_mup2_pane_t6_ParamLimits

0x6b6b,	// (0x000794ec) main_mup2_pane_t6

0x0005,

0xf676,	// (0x00081ff7) main_mup2_pane_t_ParamLimits

0xf676,	// (0x00081ff7) main_mup2_pane_t

0x6b9b,	// (0x0007951c) mup2_visualizer_pane_ParamLimits

0x6b9b,	// (0x0007951c) mup2_visualizer_pane

0x6bc6,	// (0x00079547) mup_progress_pane_cp_ParamLimits

0x6bc6,	// (0x00079547) mup_progress_pane_cp

0xc052,	// (0x0007e9d3) mup_volume_pane_cp_ParamLimits

0xc052,	// (0x0007e9d3) mup_volume_pane_cp

0x6bda,	// (0x0007955b) mup2_visualizer_pane_g1_ParamLimits

0x6bda,	// (0x0007955b) mup2_visualizer_pane_g1

0xbf91,	// (0x0007e912) mup2_visualizer_pane_g2_ParamLimits

0xbf91,	// (0x0007e912) mup2_visualizer_pane_g2

0x6bef,	// (0x00079570) mup2_visualizer_pane_g3_ParamLimits

0x6bef,	// (0x00079570) mup2_visualizer_pane_g3

0x0002,

0xf683,	// (0x00082004) mup2_visualizer_pane_g_ParamLimits

0xf683,	// (0x00082004) mup2_visualizer_pane_g

0x5952,	// (0x000782d3) aid_size_cell_fmradio

0x61c4,	// (0x00078b45) aid_height_parent_landcape

0x3806,	// (0x00076187) wml_content_pane_cp

0x380e,	// (0x0007618f) wml_tabs_pane

0x3817,	// (0x00076198) popup_wml_miniature_window

0x381f,	// (0x000761a0) scroll_pane_cp021

0x3833,	// (0x000761b4) wml_content_pane_comp8

0x20d8,	// (0x00074a59) bg_popup_sub_pane_cp05

0xbfaf,	// (0x0007e930) popup_wml_miniature_window_g1

0xbfb7,	// (0x0007e938) wml_miniature_view_pane

0x6bfb,	// (0x0007957c) aid_size_wml_view

0x6c03,	// (0x00079584) wml_miniature_view_pane_g1

0x6c0c,	// (0x0007958d) wml_miniature_view_pane_g2

0x6c15,	// (0x00079596) wml_miniature_view_pane_g3

0x6c1d,	// (0x0007959e) wml_miniature_view_pane_g4

0x6c25,	// (0x000795a6) wml_miniature_view_pane_g5

0x6c2d,	// (0x000795ae) wml_miniature_view_pane_g6

0x6c35,	// (0x000795b6) wml_miniature_view_pane_g7

0x6c3d,	// (0x000795be) wml_miniature_view_pane_g8

0x0007,

0xf68a,	// (0x0008200b) wml_miniature_view_pane_g

0xbfbf,	// (0x0007e940) background_graphic_ParamLimits

0xbfbf,	// (0x0007e940) background_graphic

0xbfcb,	// (0x0007e94c) wml_tabs_2_pane

0xbfd4,	// (0x0007e955) wml_tabs_3_pane_ParamLimits

0xbfd4,	// (0x0007e955) wml_tabs_3_pane

0xbfe6,	// (0x0007e967) wml_tabs_4_pane_ParamLimits

0xbfe6,	// (0x0007e967) wml_tabs_4_pane

0xbffc,	// (0x0007e97d) wml_tabs_5_pane_ParamLimits

0xbffc,	// (0x0007e97d) wml_tabs_5_pane

0xc016,	// (0x0007e997) wml_tabs_pane_g2_ParamLimits

0xc016,	// (0x0007e997) wml_tabs_pane_g2

0xc02a,	// (0x0007e9ab) wml_tabs_pane_g3_ParamLimits

0xc02a,	// (0x0007e9ab) wml_tabs_pane_g3

0x6c45,	// (0x000795c6) wml_tabs_2_active_pane_ParamLimits

0x6c45,	// (0x000795c6) wml_tabs_2_active_pane

0x6c55,	// (0x000795d6) wml_tabs_2_passive_pane_ParamLimits

0x6c55,	// (0x000795d6) wml_tabs_2_passive_pane

0x6c65,	// (0x000795e6) wml_tabs_3_active_pane_cp_ParamLimits

0x6c65,	// (0x000795e6) wml_tabs_3_active_pane_cp

0x6c76,	// (0x000795f7) wml_tabs_3_passive_pane_ParamLimits

0x6c76,	// (0x000795f7) wml_tabs_3_passive_pane

0x6c87,	// (0x00079608) wml_tabs_3_passive_pane_cp_ParamLimits

0x6c87,	// (0x00079608) wml_tabs_3_passive_pane_cp

0x6c98,	// (0x00079619) tabs_4_active_pane

0x6ca0,	// (0x00079621) tabs_4_passive_pane

0x6ca8,	// (0x00079629) tabs_4_passive_pane_cp

0x6cb0,	// (0x00079631) tabs_4_passive_pane_cp2

0x5f43,	// (0x000788c4) aid_height_text

0x51a4,	// (0x00077b25) mup_volume_cont_pane_ParamLimits

0x51a4,	// (0x00077b25) mup_volume_cont_pane

0x23bb,	// (0x00074d3c) aid_size_cell_pinb

0x23c5,	// (0x00074d46) aid_size_list_pinb

0x6bb2,	// (0x00079533) mup2_volume_cont_pane_ParamLimits

0x6bb2,	// (0x00079533) mup2_volume_cont_pane

0xc03e,	// (0x0007e9bf) mup2_volume_cont_pane_g1_ParamLimits

0xc03e,	// (0x0007e9bf) mup2_volume_cont_pane_g1

0x1a3b,	// (0x000743bc) aid_size_cell_touch_ParamLimits

0x1a3b,	// (0x000743bc) aid_size_cell_touch

0x1c27,	// (0x000745a8) touch_pane_ParamLimits

0x1c27,	// (0x000745a8) touch_pane

0x1a31,	// (0x000743b2) main_rss2_pane

0xc080,	// (0x0007ea01) listscroll_rss2_pane

0xc089,	// (0x0007ea0a) rss2_navigation_pane

0xc091,	// (0x0007ea12) list_rss2_pane

0x4ad0,	// (0x00077451) scroll_pane_cp22

0xc099,	// (0x0007ea1a) rss2_navigation_pane_g1

0xc0a2,	// (0x0007ea23) rss2_navigation_pane_g2

0xc0aa,	// (0x0007ea2b) rss2_navigation_pane_g3

0x0002,

0xf69b,	// (0x0008201c) rss2_navigation_pane_g

0xc0b2,	// (0x0007ea33) rss2_navigation_pane_t1

0x6cb8,	// (0x00079639) rss2_list_single_pane_ParamLimits

0x6cb8,	// (0x00079639) rss2_list_single_pane

0xc0c0,	// (0x0007ea41) rss2_list_single_pane_t2

0xc0ce,	// (0x0007ea4f) rss2_list_single_pane_t3_ParamLimits

0xc0ce,	// (0x0007ea4f) rss2_list_single_pane_t3

0xc0eb,	// (0x0007ea6c) rss2_list_single_pane_t4

0x4440,	// (0x00076dc1) smil_status_pane_g1

0xaeed,	// (0x0007d86e) main_image2_pane_ParamLimits

0xaeed,	// (0x0007d86e) main_image2_pane

0x67da,	// (0x0007915b) main_camera2_pane_g9_ParamLimits

0x67da,	// (0x0007915b) main_camera2_pane_g9

0x68cc,	// (0x0007924d) main_camera2_pane_t5_ParamLimits

0x68cc,	// (0x0007924d) main_camera2_pane_t5

0xbf66,	// (0x0007e8e7) main_camera2_pane_t6_ParamLimits

0xbf66,	// (0x0007e8e7) main_camera2_pane_t6

0x6ccc,	// (0x0007964d) main_image2_pane_g1_ParamLimits

0x6ccc,	// (0x0007964d) main_image2_pane_g1

0x5914,	// (0x00078295) smil2_video_pane_ParamLimits

0x5914,	// (0x00078295) smil2_video_pane

0xaebc,	// (0x0007d83d) aid_zoom_text_primary_cp

0xaee5,	// (0x0007d866) popup_preview_fixed_window

0x36ff,	// (0x00076080) im_reading_pane_g1

0x66c0,	// (0x00079041) cams2_bc_adjust_pane_cp_ParamLimits

0x66c0,	// (0x00079041) cams2_bc_adjust_pane_cp

0x68f2,	// (0x00079273) cams2_bc_adjust_pane_ParamLimits

0x68f2,	// (0x00079273) cams2_bc_adjust_pane

0xc0f9,	// (0x0007ea7a) cams2_bc_adjust_pane_g1

0xc101,	// (0x0007ea82) cams2_slider_pane

0xc10a,	// (0x0007ea8b) cams2_slider_pane_g1

0xc113,	// (0x0007ea94) cams2_slider_pane_g2

0x0006,

0xf6a2,	// (0x00082023) cams2_slider_pane_g

0x24fc,	// (0x00074e7d) calc_display_pane_ParamLimits

0x2518,	// (0x00074e99) calc_paper_pane_ParamLimits

0x2539,	// (0x00074eba) grid_calc_pane_ParamLimits

0xb047,	// (0x0007d9c8) popup_clock_digital_window_t1_ParamLimits

0x57ad,	// (0x0007812e) main_image_pane_t1

0x24de,	// (0x00074e5f) aid_size_cell_calc_ParamLimits

0x24de,	// (0x00074e5f) aid_size_cell_calc

0x61f4,	// (0x00078b75) popup_blid_sat_info2_window_ParamLimits

0x61f4,	// (0x00078b75) popup_blid_sat_info2_window

0xc135,	// (0x0007eab6) aid_size_cell_blid

0xc13d,	// (0x0007eabe) bg_popup_window_pane_cp07

0xc160,	// (0x0007eae1) grid_popup_blid_pane

0xc168,	// (0x0007eae9) heading_pane_cp05_ParamLimits

0xc168,	// (0x0007eae9) heading_pane_cp05

0xc230,	// (0x0007ebb1) cell_popup_blid_pane_ParamLimits

0xc230,	// (0x0007ebb1) cell_popup_blid_pane

0xc250,	// (0x0007ebd1) cell_popup_blid_pane_g1

0xc258,	// (0x0007ebd9) cell_popup_blid_pane_t1

0x6b85,	// (0x00079506) mup2_indicator_pane_ParamLimits

0x6b85,	// (0x00079506) mup2_indicator_pane

0x2fc7,	// (0x00075948) mup2_visualizer_osc_pane

0xbf9d,	// (0x0007e91e) mup2_visualizer_spec_pane_ParamLimits

0xbf9d,	// (0x0007e91e) mup2_visualizer_spec_pane

0x6ce0,	// (0x00079661) mup2_spec_half_pane

0x6ce9,	// (0x0007966a) mup2_spec_half_pane_cp

0x6cf1,	// (0x00079672) mup2_spec_bar_pane_ParamLimits

0x6cf1,	// (0x00079672) mup2_spec_bar_pane

0xbef1,	// (0x0007e872) mup2_spec_bar_pane_g1

0xbefb,	// (0x0007e87c) mup2_spec_bar_pane_g2

0x0001,

0xf615,	// (0x00081f96) mup2_spec_bar_pane_g

0x6d10,	// (0x00079691) mup2_osc_middle_pane

0xbf0d,	// (0x0007e88e) mup2_visualizer_osc_pane_g1

0x1c8f,	// (0x00074610) popup_number_entry_window_t1_ParamLimits

0x1ca2,	// (0x00074623) popup_number_entry_window_t2_ParamLimits

0x1cb4,	// (0x00074635) popup_number_entry_window_t3_ParamLimits

0x1cc6,	// (0x00074647) popup_number_entry_window_t5_ParamLimits

0x1cc6,	// (0x00074647) popup_number_entry_window_t5

0xf0c6,	// (0x00081a47) popup_number_entry_window_t_ParamLimits

0x1cfa,	// (0x0007467b) text_title_cp2_ParamLimits

0xb0a0,	// (0x0007da21) aid_hotspot_pointer_text2_pane

0xb0c6,	// (0x0007da47) main_viewer_pane_g9_ParamLimits

0xb0c6,	// (0x0007da47) main_viewer_pane_g9

0x3e39,	// (0x000767ba) cale_month_pane_t1_ParamLimits

0x44b0,	// (0x00076e31) bg_cale_pane_ParamLimits

0x44c8,	// (0x00076e49) list_cale_pane_ParamLimits

0x44d9,	// (0x00076e5a) listscroll_cale_day_pane_t1

0x44eb,	// (0x00076e6c) scroll_pane_cp09_ParamLimits

0x5252,	// (0x00077bd3) main_mup_eq_pane_t1_ParamLimits

0x5252,	// (0x00077bd3) main_mup_eq_pane_t1

0x526a,	// (0x00077beb) main_mup_eq_pane_t2_ParamLimits

0x526a,	// (0x00077beb) main_mup_eq_pane_t2

0x5280,	// (0x00077c01) main_mup_eq_pane_t3_ParamLimits

0x5280,	// (0x00077c01) main_mup_eq_pane_t3

0x5296,	// (0x00077c17) main_mup_eq_pane_t4_ParamLimits

0x5296,	// (0x00077c17) main_mup_eq_pane_t4

0x52ac,	// (0x00077c2d) main_mup_eq_pane_t5_ParamLimits

0x52ac,	// (0x00077c2d) main_mup_eq_pane_t5

0x52c2,	// (0x00077c43) main_mup_eq_pane_t6_ParamLimits

0x52c2,	// (0x00077c43) main_mup_eq_pane_t6

0x52d4,	// (0x00077c55) main_mup_eq_pane_t7_ParamLimits

0x52d4,	// (0x00077c55) main_mup_eq_pane_t7

0x52e6,	// (0x00077c67) main_mup_eq_pane_t8_ParamLimits

0x52e6,	// (0x00077c67) main_mup_eq_pane_t8

0x52f8,	// (0x00077c79) main_mup_eq_pane_t9_ParamLimits

0x52f8,	// (0x00077c79) main_mup_eq_pane_t9

0x530e,	// (0x00077c8f) main_mup_eq_pane_t10_ParamLimits

0x530e,	// (0x00077c8f) main_mup_eq_pane_t10

0x0009,

0xf451,	// (0x00081dd2) main_mup_eq_pane_t_ParamLimits

0xf451,	// (0x00081dd2) main_mup_eq_pane_t

0x53a1,	// (0x00077d22) mup_equalizer_pane_cp5_ParamLimits

0x53b3,	// (0x00077d34) mup_equalizer_pane_cp6_ParamLimits

0x53c5,	// (0x00077d46) mup_equalizer_pane_cp7_ParamLimits

0x1a31,	// (0x000743b2) main_gallery_pane

0xbf16,	// (0x0007e897) smil2_volume_pane

0xbf1e,	// (0x0007e89f) smil_status_volume_pane_g1_ParamLimits

0xbf31,	// (0x0007e8b2) smil_status_volume_pane_g2_ParamLimits

0xbf44,	// (0x0007e8c5) smil_status_volume_pane_g3_ParamLimits

0xf61a,	// (0x00081f9b) smil_status_volume_pane_g_ParamLimits

0xc13d,	// (0x0007eabe) bg_popup_window_pane_cp07_ParamLimits

0xc14b,	// (0x0007eacc) blid_firmament_pane

0x6d19,	// (0x0007969a) aid_size_cell_gallery_ParamLimits

0x6d19,	// (0x0007969a) aid_size_cell_gallery

0x6d2f,	// (0x000796b0) grid_gallery_pane_ParamLimits

0x6d2f,	// (0x000796b0) grid_gallery_pane

0x6d43,	// (0x000796c4) cell_gallery_pane_ParamLimits

0x6d43,	// (0x000796c4) cell_gallery_pane

0xc266,	// (0x0007ebe7) bg_cell_gallery_focus_pane_ParamLimits

0xc266,	// (0x0007ebe7) bg_cell_gallery_focus_pane

0xc278,	// (0x0007ebf9) cell_gallery_pane_g1_ParamLimits

0xc278,	// (0x0007ebf9) cell_gallery_pane_g1

0x6d8a,	// (0x0007970b) cell_gallery_pane_g2_ParamLimits

0x6d8a,	// (0x0007970b) cell_gallery_pane_g2

0x6d97,	// (0x00079718) cell_gallery_pane_g3_ParamLimits

0x6d97,	// (0x00079718) cell_gallery_pane_g3

0xc284,	// (0x0007ec05) cell_gallery_pane_g4_ParamLimits

0xc284,	// (0x0007ec05) cell_gallery_pane_g4

0x0003,

0xf6c8,	// (0x00082049) cell_gallery_pane_g_ParamLimits

0xf6c8,	// (0x00082049) cell_gallery_pane_g

0xc290,	// (0x0007ec11) bg_cell_gallery_focus_pane_g1

0xc298,	// (0x0007ec19) bg_cell_gallery_focus_pane_g2

0xc2a0,	// (0x0007ec21) bg_cell_gallery_focus_pane_g3

0xc2a8,	// (0x0007ec29) bg_cell_gallery_focus_pane_g4

0xc2b0,	// (0x0007ec31) bg_cell_gallery_focus_pane_g5

0xc2b8,	// (0x0007ec39) bg_cell_gallery_focus_pane_g6

0xc2c0,	// (0x0007ec41) bg_cell_gallery_focus_pane_g7

0xc2c8,	// (0x0007ec49) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d1,	// (0x00082052) bg_cell_gallery_focus_pane_g

0xc2d0,	// (0x0007ec51) aid_firma_cardinal

0xc2e4,	// (0x0007ec65) blid_firmament_pane_t1

0xc2fb,	// (0x0007ec7c) blid_firmament_pane_t2

0xc312,	// (0x0007ec93) blid_firmament_pane_t3

0xc329,	// (0x0007ecaa) blid_firmament_pane_t4

0x0003,

0xf6e2,	// (0x00082063) blid_firmament_pane_t

0xc340,	// (0x0007ecc1) blid_sat_info_pane

0xc350,	// (0x0007ecd1) blid_sat_info_pane_g1

0xc350,	// (0x0007ecd1) blid_sat_info_pane_g2

0x0001,

0xf6eb,	// (0x0008206c) blid_sat_info_pane_g

0xc35a,	// (0x0007ecdb) blid_sat_info_pane_t1

0xc368,	// (0x0007ece9) smil2_volume_content_pane

0xc371,	// (0x0007ecf2) smil2_volume_pane_g1

0xc379,	// (0x0007ecfa) smil2_volume_content_pane_g1

0xc382,	// (0x0007ed03) smil2_volume_content_pane_g2

0xc38b,	// (0x0007ed0c) smil2_volume_content_pane_g3

0xc394,	// (0x0007ed15) smil2_volume_content_pane_g4

0xc39d,	// (0x0007ed1e) smil2_volume_content_pane_g5

0xc3a6,	// (0x0007ed27) smil2_volume_content_pane_g6

0xc3af,	// (0x0007ed30) smil2_volume_content_pane_g7

0xc3b8,	// (0x0007ed39) smil2_volume_content_pane_g8

0xc3c1,	// (0x0007ed42) smil2_volume_content_pane_g9

0xc3ca,	// (0x0007ed4b) smil2_volume_content_pane_g10

0x0009,

0xf6f0,	// (0x00082071) smil2_volume_content_pane_g

0x2c04,	// (0x00075585) cale_week_day_heading_pane_t1_ParamLimits

0x2c2e,	// (0x000755af) cale_week_day_heading_pane_t2_ParamLimits

0x2c5d,	// (0x000755de) cale_week_day_heading_pane_t3_ParamLimits

0x2c8c,	// (0x0007560d) cale_week_day_heading_pane_t4_ParamLimits

0x2cbb,	// (0x0007563c) cale_week_day_heading_pane_t5_ParamLimits

0x2cea,	// (0x0007566b) cale_week_day_heading_pane_t6_ParamLimits

0x2d19,	// (0x0007569a) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x00081b4e) cale_week_day_heading_pane_t_ParamLimits

0x2d43,	// (0x000756c4) bg_cale_side_pane_ParamLimits

0x2d51,	// (0x000756d2) cale_week_time_pane_t1_ParamLimits

0x2d8b,	// (0x0007570c) cale_week_time_pane_t2_ParamLimits

0x2dc5,	// (0x00075746) cale_week_time_pane_t3_ParamLimits

0x2dff,	// (0x00075780) cale_week_time_pane_t4_ParamLimits

0x2e39,	// (0x000757ba) cale_week_time_pane_t5_ParamLimits

0x2e73,	// (0x000757f4) cale_week_time_pane_t6_ParamLimits

0x2ead,	// (0x0007582e) cale_week_time_pane_t7_ParamLimits

0x2ee7,	// (0x00075868) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x00081b5d) cale_week_time_pane_t_ParamLimits

0x2f21,	// (0x000758a2) cell_cale_week_pane_g2_ParamLimits

0x2d43,	// (0x000756c4) bg_cale_side_pane_cp01_ParamLimits

0x4285,	// (0x00076c06) cale_month_week_pane_t1_ParamLimits

0x429e,	// (0x00076c1f) cale_month_week_pane_t2_ParamLimits

0x42b7,	// (0x00076c38) cale_month_week_pane_t3_ParamLimits

0x42d0,	// (0x00076c51) cale_month_week_pane_t4_ParamLimits

0x42e9,	// (0x00076c6a) cale_month_week_pane_t5_ParamLimits

0x4302,	// (0x00076c83) cale_month_week_pane_t6_ParamLimits

0xf2b1,	// (0x00081c32) cale_month_week_pane_t_ParamLimits

0xafc7,	// (0x0007d948) cell_cale_month_pane_g1_ParamLimits

0x1a31,	// (0x000743b2) main_cale_event_viewer_pane

0x1a31,	// (0x000743b2) listscroll_cale_event_viewer_pane

0xc3d3,	// (0x0007ed54) list_cale_ev_pane

0xc3db,	// (0x0007ed5c) scroll_pane_cp023

0x6da4,	// (0x00079725) field_cale_ev_pane_ParamLimits

0x6da4,	// (0x00079725) field_cale_ev_pane

0xc3e7,	// (0x0007ed68) field_cale_ev_content_pane_ParamLimits

0xc3e7,	// (0x0007ed68) field_cale_ev_content_pane

0xc3f3,	// (0x0007ed74) field_cale_ev_pane_g1_ParamLimits

0xc3f3,	// (0x0007ed74) field_cale_ev_pane_g1

0xc3ff,	// (0x0007ed80) field_cale_ev_pane_g2_ParamLimits

0xc3ff,	// (0x0007ed80) field_cale_ev_pane_g2

0xc417,	// (0x0007ed98) field_cale_ev_pane_g3_ParamLimits

0xc417,	// (0x0007ed98) field_cale_ev_pane_g3

0x0002,

0xf705,	// (0x00082086) field_cale_ev_pane_g_ParamLimits

0xf705,	// (0x00082086) field_cale_ev_pane_g

0xc42f,	// (0x0007edb0) field_cale_ev_pane_t1_ParamLimits

0xc42f,	// (0x0007edb0) field_cale_ev_pane_t1

0x6dbe,	// (0x0007973f) field_cale_ev_content_pane_t1_ParamLimits

0x6dbe,	// (0x0007973f) field_cale_ev_content_pane_t1

0x544d,	// (0x00077dce) bg_button_pane_cp01

0x28fe,	// (0x0007527f) listscroll_cale_week_pane_ParamLimits

0x290e,	// (0x0007528f) popup_toolbar_window_cp01

0x2b5f,	// (0x000754e0) listscroll_cale_week_pane_t1_ParamLimits

0x28fe,	// (0x0007527f) listscroll_cale_day_pane_ParamLimits

0x290e,	// (0x0007528f) popup_toolbar_window_cp02

0x44d9,	// (0x00076e5a) listscroll_cale_day_pane_t1_ParamLimits

0x28fe,	// (0x0007527f) main_cale_month_pane_ParamLimits

0xbe8f,	// (0x0007e810) popup_toolbar_window_cp03_ParamLimits

0xbe8f,	// (0x0007e810) popup_toolbar_window_cp03

0x578b,	// (0x0007810c) main_image_pane_g2_ParamLimits

0x578b,	// (0x0007810c) main_image_pane_g2

0x579c,	// (0x0007811d) main_image_pane_g3_ParamLimits

0x579c,	// (0x0007811d) main_image_pane_g3

0x0002,

0xf4e3,	// (0x00081e64) main_image_pane_g_ParamLimits

0xf4e3,	// (0x00081e64) main_image_pane_g

0x57ad,	// (0x0007812e) main_image_pane_t1_ParamLimits

0x57c4,	// (0x00078145) main_image_pane_t2_ParamLimits

0x57c4,	// (0x00078145) main_image_pane_t2

0x57d6,	// (0x00078157) main_image_pane_t3_ParamLimits

0x57d6,	// (0x00078157) main_image_pane_t3

0x57fe,	// (0x0007817f) main_image_pane_t4_ParamLimits

0x57fe,	// (0x0007817f) main_image_pane_t4

0x0003,

0xf4ea,	// (0x00081e6b) main_image_pane_t_ParamLimits

0xf4ea,	// (0x00081e6b) main_image_pane_t

0x581e,	// (0x0007819f) popup_image_details_window_cp01

0x5826,	// (0x000781a7) popup_toobar_trans_pane_cp01_ParamLimits

0x5826,	// (0x000781a7) popup_toobar_trans_pane_cp01

0x62bd,	// (0x00078c3e) popup_image_details_window_ParamLimits

0x62bd,	// (0x00078c3e) popup_image_details_window

0xbe64,	// (0x0007e7e5) popup_image_focus_window

0x668e,	// (0x0007900f) camera2_autofocus_pane_ParamLimits

0x668e,	// (0x0007900f) camera2_autofocus_pane

0x1a31,	// (0x000743b2) bg_popup_sub_pane_cp06

0xc446,	// (0x0007edc7) popup_image_focus_window_g1

0xc44e,	// (0x0007edcf) popup_image_focus_window_g2

0xc456,	// (0x0007edd7) popup_image_focus_window_g3

0xc45e,	// (0x0007eddf) popup_image_focus_window_g4

0x0003,

0xf70c,	// (0x0008208d) popup_image_focus_window_g

0xc466,	// (0x0007ede7) popup_image_focus_window_t1

0xc474,	// (0x0007edf5) popup_image_focus_window_t2

0xc483,	// (0x0007ee04) popup_image_focus_window_t3

0x0002,

0xf715,	// (0x00082096) popup_image_focus_window_t

0xc491,	// (0x0007ee12) camera2_autofocus_pane_g1

0xaeed,	// (0x0007d86e) bg_tb_trans_pane_cp01

0xc49f,	// (0x0007ee20) popup_image_details_window_g1

0xc4b2,	// (0x0007ee33) popup_image_details_window_g2

0x0002,

0xf727,	// (0x000820a8) popup_image_details_window_g

0xc4db,	// (0x0007ee5c) popup_image_details_window_t1

0xc4ed,	// (0x0007ee6e) popup_image_details_window_t2

0xc506,	// (0x0007ee87) popup_image_details_window_t3

0xc51a,	// (0x0007ee9b) popup_image_details_window_t4

0xc535,	// (0x0007eeb6) popup_image_details_window_t5

0x0004,

0xf72e,	// (0x000820af) popup_image_details_window_t

0x2641,	// (0x00074fc2) bg_calc_paper_pane_ParamLimits

0x1a31,	// (0x000743b2) grid_highlight_pane_cp013

0xaf03,	// (0x0007d884) list_calc_pane_ParamLimits

0xaf15,	// (0x0007d896) scroll_pane_cp024

0x2659,	// (0x00074fda) bg_calc_display_pane_ParamLimits

0xaf1d,	// (0x0007d89e) calc_display_pane_t1_ParamLimits

0xaf32,	// (0x0007d8b3) calc_display_pane_t2_ParamLimits

0xaf47,	// (0x0007d8c8) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x00081ace) calc_display_pane_t_ParamLimits

0x2751,	// (0x000750d2) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x00081aeb) cell_calc_pane_g

0x275a,	// (0x000750db) cell_calc_pane_t1

0x2769,	// (0x000750ea) grid_highlight_pane_cp02_ParamLimits

0x277f,	// (0x00075100) toolbar_button_pane_cp01_ParamLimits

0x277f,	// (0x00075100) toolbar_button_pane_cp01

0x5868,	// (0x000781e9) temp_image_control_pane_ParamLimits

0x5868,	// (0x000781e9) temp_image_control_pane

0xaeed,	// (0x0007d86e) main_mp3_pane

0xc54f,	// (0x0007eed0) temp_image_control_pane_g1_ParamLimits

0xc54f,	// (0x0007eed0) temp_image_control_pane_g1

0xc55d,	// (0x0007eede) temp_image_control_pane_g2_ParamLimits

0xc55d,	// (0x0007eede) temp_image_control_pane_g2

0xc56f,	// (0x0007eef0) temp_image_control_pane_g3_ParamLimits

0xc56f,	// (0x0007eef0) temp_image_control_pane_g3

0x6e0b,	// (0x0007978c) temp_image_control_pane_g4_ParamLimits

0x6e0b,	// (0x0007978c) temp_image_control_pane_g4

0x0003,

0xf739,	// (0x000820ba) temp_image_control_pane_g_ParamLimits

0xf739,	// (0x000820ba) temp_image_control_pane_g

0xc54f,	// (0x0007eed0) main_mp3_pane_g1

0x6e1c,	// (0x0007979d) main_mp3_pane_g2

0x0007,

0xf742,	// (0x000820c3) main_mp3_pane_g

0xc5b2,	// (0x0007ef33) main_mp3_pane_t1

0x30d9,	// (0x00075a5a) main_camera_pane_g8_ParamLimits

0x30d9,	// (0x00075a5a) main_camera_pane_g8

0x3274,	// (0x00075bf5) main_video_pane_g7_ParamLimits

0x3274,	// (0x00075bf5) main_video_pane_g7

0xbf7f,	// (0x0007e900) main_camera2_pane_t7_ParamLimits

0xbf7f,	// (0x0007e900) main_camera2_pane_t7

0x37c6,	// (0x00076147) scroll_pane_cp025_ParamLimits

0x37c6,	// (0x00076147) scroll_pane_cp025

0x37da,	// (0x0007615b) scroll_pane_cp026_ParamLimits

0x37da,	// (0x0007615b) scroll_pane_cp026

0x37e9,	// (0x0007616a) wml_content_pane_ParamLimits

0x1a31,	// (0x000743b2) main_touch_calib_pane

0x6ede,	// (0x0007985f) main_touch_calib_pane_g1

0x6ef0,	// (0x00079871) main_touch_calib_pane_g2

0x6f02,	// (0x00079883) main_touch_calib_pane_g3

0x6f14,	// (0x00079895) main_touch_calib_pane_g4

0x0003,

0xf760,	// (0x000820e1) main_touch_calib_pane_g

0x6f26,	// (0x000798a7) main_touch_calib_pane_t1

0x6f3e,	// (0x000798bf) main_touch_calib_pane_t2

0x0004,

0xf769,	// (0x000820ea) main_touch_calib_pane_t

0x4d7e,	// (0x000776ff) mup_progress_pane_cp02

0x4db3,	// (0x00077734) navi_pane_g1

0x4e5b,	// (0x000777dc) navi_pane_mp_t3

0xaeed,	// (0x0007d86e) main_mp3_pane_ParamLimits

0x6416,	// (0x00078d97) navi_pane_ParamLimits

0xc54f,	// (0x0007eed0) main_mp3_pane_g1_ParamLimits

0x6e1c,	// (0x0007979d) main_mp3_pane_g2_ParamLimits

0x6e28,	// (0x000797a9) main_mp3_pane_g3_ParamLimits

0x6e28,	// (0x000797a9) main_mp3_pane_g3

0x6e34,	// (0x000797b5) main_mp3_pane_g4_ParamLimits

0x6e34,	// (0x000797b5) main_mp3_pane_g4

0xc57f,	// (0x0007ef00) main_mp3_pane_g5_ParamLimits

0xc57f,	// (0x0007ef00) main_mp3_pane_g5

0xc58d,	// (0x0007ef0e) main_mp3_pane_g6_ParamLimits

0xc58d,	// (0x0007ef0e) main_mp3_pane_g6

0xc59a,	// (0x0007ef1b) main_mp3_pane_g7_ParamLimits

0xc59a,	// (0x0007ef1b) main_mp3_pane_g7

0xc5a6,	// (0x0007ef27) main_mp3_pane_g8_ParamLimits

0xc5a6,	// (0x0007ef27) main_mp3_pane_g8

0xf742,	// (0x000820c3) main_mp3_pane_g_ParamLimits

0x6e40,	// (0x000797c1) main_mp3_pane_t2

0x6e4e,	// (0x000797cf) main_mp3_pane_t3

0xc5c0,	// (0x0007ef41) main_mp3_pane_t4

0xc5ce,	// (0x0007ef4f) main_mp3_pane_t5

0x0005,

0xf753,	// (0x000820d4) main_mp3_pane_t

0xc5dc,	// (0x0007ef5d) mup_progress_pane_cp01

0xaebc,	// (0x0007d83d) aid_zoom_text_secondary2

0xc3d3,	// (0x0007ed54) list_cale_ev2_pane

0xc3db,	// (0x0007ed5c) scroll_pane_cp023_ParamLimits

0x6f8c,	// (0x0007990d) field_cale_ev2_pane_ParamLimits

0x6f8c,	// (0x0007990d) field_cale_ev2_pane

0xe8a2,	// (0x00081223) field_cale_ev2_pane_g1_ParamLimits

0xe8a2,	// (0x00081223) field_cale_ev2_pane_g1

0xe8ae,	// (0x0008122f) field_cale_ev2_pane_g2_ParamLimits

0xe8ae,	// (0x0008122f) field_cale_ev2_pane_g2

0xe8c6,	// (0x00081247) field_cale_ev2_pane_g3_ParamLimits

0xe8c6,	// (0x00081247) field_cale_ev2_pane_g3

0x0003,

0xf774,	// (0x000820f5) field_cale_ev2_pane_g_ParamLimits

0xf774,	// (0x000820f5) field_cale_ev2_pane_g

0xc5e4,	// (0x0007ef65) field_cale_ev2_pane_t1_ParamLimits

0xc5e4,	// (0x0007ef65) field_cale_ev2_pane_t1

0xc5fb,	// (0x0007ef7c) field_cale_ev2_pane_t2_ParamLimits

0xc5fb,	// (0x0007ef7c) field_cale_ev2_pane_t2

0x0001,

0xf77d,	// (0x000820fe) field_cale_ev2_pane_t_ParamLimits

0xf77d,	// (0x000820fe) field_cale_ev2_pane_t

0x5560,	// (0x00077ee1) main_postcard_pane_g5_ParamLimits

0x5560,	// (0x00077ee1) main_postcard_pane_g5

0x5574,	// (0x00077ef5) main_postcard_pane_g6_ParamLimits

0x5574,	// (0x00077ef5) main_postcard_pane_g6

0x3030,	// (0x000759b1) camera2_autofocus_pane_cp_ParamLimits

0x3030,	// (0x000759b1) camera2_autofocus_pane_cp

0xaeed,	// (0x0007d86e) main_mup3_pane

0x6fe2,	// (0x00079963) main_mup3_pane_g1_ParamLimits

0x6fe2,	// (0x00079963) main_mup3_pane_g1

0x7004,	// (0x00079985) main_mup3_pane_g2_ParamLimits

0x7004,	// (0x00079985) main_mup3_pane_g2

0x7077,	// (0x000799f8) main_mup3_pane_g3_ParamLimits

0x7077,	// (0x000799f8) main_mup3_pane_g3

0x70b5,	// (0x00079a36) main_mup3_pane_g4_ParamLimits

0x70b5,	// (0x00079a36) main_mup3_pane_g4

0x70f3,	// (0x00079a74) main_mup3_pane_g5_ParamLimits

0x70f3,	// (0x00079a74) main_mup3_pane_g5

0x7131,	// (0x00079ab2) main_mup3_pane_g6_ParamLimits

0x7131,	// (0x00079ab2) main_mup3_pane_g6

0xc610,	// (0x0007ef91) main_mup3_pane_g7_ParamLimits

0xc610,	// (0x0007ef91) main_mup3_pane_g7

0x0007,

0xf78d,	// (0x0008210e) main_mup3_pane_g_ParamLimits

0xf78d,	// (0x0008210e) main_mup3_pane_g

0x71a7,	// (0x00079b28) main_mup3_pane_t1_ParamLimits

0x71a7,	// (0x00079b28) main_mup3_pane_t1

0x720d,	// (0x00079b8e) main_mup3_pane_t2_ParamLimits

0x720d,	// (0x00079b8e) main_mup3_pane_t2

0x72d3,	// (0x00079c54) main_mup3_pane_t4_ParamLimits

0x72d3,	// (0x00079c54) main_mup3_pane_t4

0x7321,	// (0x00079ca2) main_mup3_pane_t5_ParamLimits

0x7321,	// (0x00079ca2) main_mup3_pane_t5

0x73cf,	// (0x00079d50) main_mup3_pane_t6_ParamLimits

0x73cf,	// (0x00079d50) main_mup3_pane_t6

0x0005,

0xf79e,	// (0x0008211f) main_mup3_pane_t_ParamLimits

0xf79e,	// (0x0008211f) main_mup3_pane_t

0x7483,	// (0x00079e04) mup3_progress_pane_ParamLimits

0x7483,	// (0x00079e04) mup3_progress_pane

0x74ff,	// (0x00079e80) popup_mup3_control_window_ParamLimits

0x74ff,	// (0x00079e80) popup_mup3_control_window

0xc61e,	// (0x0007ef9f) popup_mup3_text_window

0x752d,	// (0x00079eae) mup3_progress_pane_t1

0x754b,	// (0x00079ecc) mup3_progress_pane_t2

0xc626,	// (0x0007efa7) mup3_progress_pane_t3

0x0002,

0xf7ab,	// (0x0008212c) mup3_progress_pane_t

0xc643,	// (0x0007efc4) mup_progress_pane_cp03

0x1a31,	// (0x000743b2) bg_tb_trans_pane_cp04

0x7569,	// (0x00079eea) mup3_volume_pane

0x7571,	// (0x00079ef2) popup_mup3_control_window_g1

0x757a,	// (0x00079efb) mup3_volume_pane_g1

0x7583,	// (0x00079f04) mup3_volume_pane_g2

0x758c,	// (0x00079f0d) mup3_volume_pane_g3

0x0002,

0xf7b2,	// (0x00082133) mup3_volume_pane_g

0x1a31,	// (0x000743b2) bg_tb_trans_pane_cp03

0xc653,	// (0x0007efd4) popup_mup3_text_window_g1

0xc65b,	// (0x0007efdc) popup_mup3_text_window_t1

0x2724,	// (0x000750a5) list_calc_item_pane_g1_ParamLimits

0xc067,	// (0x0007e9e8) mup_volume_pane_cp_g1

0x6f56,	// (0x000798d7) main_touch_calib_pane_t3

0x6f68,	// (0x000798e9) main_touch_calib_pane_t4

0x6f7a,	// (0x000798fb) main_touch_calib_pane_t5

0xae9c,	// (0x0007d81d) aid_cell_size_toolbar2

0xaea4,	// (0x0007d825) aid_popup3_width_pane

0xaeac,	// (0x0007d82d) aid_zoom_text_msg_primary

0x300f,	// (0x00075990) vorec_t7

0x2698,	// (0x00075019) bg_calc_paper_pane_g1_ParamLimits

0x26a4,	// (0x00075025) bg_calc_paper_pane_g2_ParamLimits

0x26b0,	// (0x00075031) bg_calc_paper_pane_g3_ParamLimits

0x26bc,	// (0x0007503d) bg_calc_paper_pane_g4_ParamLimits

0x26c8,	// (0x00075049) bg_calc_paper_pane_g5_ParamLimits

0x26d4,	// (0x00075055) bg_calc_paper_pane_g6_ParamLimits

0x26e3,	// (0x00075064) bg_calc_paper_pane_g7_ParamLimits

0x26f2,	// (0x00075073) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x00081ad5) bg_calc_paper_pane_g_ParamLimits

0x2701,	// (0x00075082) calc_bg_paper_pane_g9_ParamLimits

0x3170,	// (0x00075af1) image_qvga_pane_ParamLimits

0x3170,	// (0x00075af1) image_qvga_pane

0x2333,	// (0x00074cb4) bg_popup_sub_pane_cp04_ParamLimits

0x56e9,	// (0x0007806a) popup_mup_playback_window_g1_ParamLimits

0x56f5,	// (0x00078076) popup_mup_playback_window_t1_ParamLimits

0x570a,	// (0x0007808b) popup_mup_playback_window_t2_ParamLimits

0xf4de,	// (0x00081e5f) popup_mup_playback_window_t_ParamLimits

0x6aa5,	// (0x00079426) main_mup2_pane_g3_ParamLimits

0x6aa5,	// (0x00079426) main_mup2_pane_g3

0x34eb,	// (0x00075e6c) popup_toolbar_window_cp04

0x5e5d,	// (0x000787de) popup_call2_audio_second_window_g3_ParamLimits

0x5e5d,	// (0x000787de) popup_call2_audio_second_window_g3

0xb410,	// (0x0007dd91) popup_call2_audio_first_window_g4_ParamLimits

0xb410,	// (0x0007dd91) popup_call2_audio_first_window_g4

0xba8f,	// (0x0007e410) popup_call2_audio_in_window_g4_ParamLimits

0xba8f,	// (0x0007e410) popup_call2_audio_in_window_g4

0x571f,	// (0x000780a0) aid_area_sk_bg_cut_ParamLimits

0x571f,	// (0x000780a0) aid_area_sk_bg_cut

0x573d,	// (0x000780be) aid_area_sk_bg_cut_2_ParamLimits

0x573d,	// (0x000780be) aid_area_sk_bg_cut_2

0x6d7a,	// (0x000796fb) aid_placing_details_win

0x6d82,	// (0x00079703) aid_placing_details_win_2

0xc491,	// (0x0007ee12) camera2_autofocus_pane_g1_ParamLimits

0x1bc8,	// (0x00074549) popup_fixed_preview_cale_window_ParamLimits

0x1bc8,	// (0x00074549) popup_fixed_preview_cale_window

0x4f17,	// (0x00077898) navi_slider_pane_g3

0x4f20,	// (0x000778a1) navi_slider_pane_g4

0x4f29,	// (0x000778aa) navi_slider_pane_g5

0x4f17,	// (0x00077898) navi_slider_pane_g6

0xb06d,	// (0x0007d9ee) navi_slider_pane_g7

0x53e2,	// (0x00077d63) mup_scale_pane_g3

0x53eb,	// (0x00077d6c) mup_scale_pane_g4

0x53f4,	// (0x00077d75) mup_scale_pane_g5

0x53fd,	// (0x00077d7e) mup_scale_pane_g6

0x5406,	// (0x00077d87) mup_scale_pane_g7

0x4f17,	// (0x00077898) cams2_slider_pane_g3

0xc11c,	// (0x0007ea9d) cams2_slider_pane_g4

0xc124,	// (0x0007eaa5) cams2_slider_pane_g5

0x4f17,	// (0x00077898) cams2_slider_pane_g6

0xc12c,	// (0x0007eaad) cams2_slider_pane_g7

0xc350,	// (0x0007ecd1) camera2_autofocus_pane_cp_g1

0xbe30,	// (0x0007e7b1) bg_popup_preview_window_pane_cp02_ParamLimits

0xbe30,	// (0x0007e7b1) bg_popup_preview_window_pane_cp02

0xc669,	// (0x0007efea) list_fp_cale_pane_ParamLimits

0xc669,	// (0x0007efea) list_fp_cale_pane

0xc675,	// (0x0007eff6) popup_fixed_preview_cale_window_t1_ParamLimits

0xc675,	// (0x0007eff6) popup_fixed_preview_cale_window_t1

0x7595,	// (0x00079f16) popup_fixed_preview_cale_window_t2_ParamLimits

0x7595,	// (0x00079f16) popup_fixed_preview_cale_window_t2

0x75aa,	// (0x00079f2b) popup_fixed_preview_cale_window_t3_ParamLimits

0x75aa,	// (0x00079f2b) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b9,	// (0x0008213a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b9,	// (0x0008213a) popup_fixed_preview_cale_window_t

0x75bf,	// (0x00079f40) list_single_fp_cale_pane_ParamLimits

0x75bf,	// (0x00079f40) list_single_fp_cale_pane

0xc693,	// (0x0007f014) list_single_fp_cale_pane_g1_ParamLimits

0xc693,	// (0x0007f014) list_single_fp_cale_pane_g1

0xc69f,	// (0x0007f020) list_single_fp_cale_pane_g2_ParamLimits

0xc69f,	// (0x0007f020) list_single_fp_cale_pane_g2

0x0002,

0xf7c0,	// (0x00082141) list_single_fp_cale_pane_g_ParamLimits

0xf7c0,	// (0x00082141) list_single_fp_cale_pane_g

0xc6b8,	// (0x0007f039) list_single_fp_cale_pane_t1_ParamLimits

0xc6b8,	// (0x0007f039) list_single_fp_cale_pane_t1

0xc6ca,	// (0x0007f04b) list_single_fp_cale_pane_t2_ParamLimits

0xc6ca,	// (0x0007f04b) list_single_fp_cale_pane_t2

0x0001,

0xf7c7,	// (0x00082148) list_single_fp_cale_pane_t_ParamLimits

0xf7c7,	// (0x00082148) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1a31,	// (0x000743b2) main_dialer_pane

0x75d3,	// (0x00079f54) aid_cell_size_keypad

0x75dd,	// (0x00079f5e) dialer_ne_pane

0x75e5,	// (0x00079f66) grid_dialer_command_1_pane

0x75ed,	// (0x00079f6e) grid_dialer_command_2_pane

0x75f5,	// (0x00079f76) grid_dialer_keypad_pane

0x7605,	// (0x00079f86) bg_popup_call_pane_cp06_ParamLimits

0x7605,	// (0x00079f86) bg_popup_call_pane_cp06

0x7611,	// (0x00079f92) dialer_ne_clear_pane_ParamLimits

0x7611,	// (0x00079f92) dialer_ne_clear_pane

0xc6fd,	// (0x0007f07e) dialer_ne_pane_g1

0xc705,	// (0x0007f086) dialer_ne_pane_t1_ParamLimits

0xc705,	// (0x0007f086) dialer_ne_pane_t1

0x761d,	// (0x00079f9e) dialer_ne_pane_t2_ParamLimits

0x761d,	// (0x00079f9e) dialer_ne_pane_t2

0x7647,	// (0x00079fc8) dialer_ne_pane_t3_ParamLimits

0x7647,	// (0x00079fc8) dialer_ne_pane_t3

0x0002,

0xf7cc,	// (0x0008214d) dialer_ne_pane_t_ParamLimits

0xf7cc,	// (0x0008214d) dialer_ne_pane_t

0x7677,	// (0x00079ff8) dialer_ne_pane_t3_copy1_ParamLimits

0x7677,	// (0x00079ff8) dialer_ne_pane_t3_copy1

0x76a6,	// (0x0007a027) cell_dialer_keypad_pane_ParamLimits

0x76a6,	// (0x0007a027) cell_dialer_keypad_pane

0x76bb,	// (0x0007a03c) cell_dialer_command_1_pane_ParamLimits

0x76bb,	// (0x0007a03c) cell_dialer_command_1_pane

0x76d1,	// (0x0007a052) cell_dialer_command_2_pane_ParamLimits

0x76d1,	// (0x0007a052) cell_dialer_command_2_pane

0xc717,	// (0x0007f098) bg_button_pane_cp02_ParamLimits

0xc717,	// (0x0007f098) bg_button_pane_cp02

0x76e0,	// (0x0007a061) cell_dialer_keypad_pane_g1_ParamLimits

0x76e0,	// (0x0007a061) cell_dialer_keypad_pane_g1

0xc717,	// (0x0007f098) bg_button_pane_cp03_ParamLimits

0xc717,	// (0x0007f098) bg_button_pane_cp03

0x76f5,	// (0x0007a076) cell_dialer_command_1_pane_g1_ParamLimits

0x76f5,	// (0x0007a076) cell_dialer_command_1_pane_g1

0xc723,	// (0x0007f0a4) bg_button_pane_cp04

0x7709,	// (0x0007a08a) cell_dialer_command_2_pane_g1

0x2fc7,	// (0x00075948) bg_button_pane_cp06

0xc72b,	// (0x0007f0ac) dialer_ne_clear_pane_g1

0x4dbf,	// (0x00077740) navi_pane_g2

0x4de8,	// (0x00077769) navi_pane_g3

0x0002,

0xf3e1,	// (0x00081d62) navi_pane_g

0x4e69,	// (0x000777ea) navi_pane_mv_g2

0x4e90,	// (0x00077811) navi_pane_mv_g5

0x4e98,	// (0x00077819) navi_pane_mv_t1

0x2659,	// (0x00074fda) main_clock2_pane

0x774e,	// (0x0007a0cf) main_clock2_list_pane_ParamLimits

0x774e,	// (0x0007a0cf) main_clock2_list_pane

0x7780,	// (0x0007a101) main_clock2_pane_t1_ParamLimits

0x7780,	// (0x0007a101) main_clock2_pane_t1

0x77ba,	// (0x0007a13b) main_clock2_pane_t2_ParamLimits

0x77ba,	// (0x0007a13b) main_clock2_pane_t2

0x0004,

0xf7d8,	// (0x00082159) main_clock2_pane_t_ParamLimits

0xf7d8,	// (0x00082159) main_clock2_pane_t

0x784e,	// (0x0007a1cf) popup_clock_analogue_window_cp03_ParamLimits

0x784e,	// (0x0007a1cf) popup_clock_analogue_window_cp03

0x7873,	// (0x0007a1f4) popup_clock_digital_window_cp02_ParamLimits

0x7873,	// (0x0007a1f4) popup_clock_digital_window_cp02

0x78e4,	// (0x0007a265) main_clock2_list_single_pane_ParamLimits

0x78e4,	// (0x0007a265) main_clock2_list_single_pane

0x2fc7,	// (0x00075948) list_highlight_pane_cp05

0xc763,	// (0x0007f0e4) main_clock2_list_single_pane_t1

0x34eb,	// (0x00075e6c) popup_toolbar_window_cp04_ParamLimits

0x6ddb,	// (0x0007975c) camera2_autofocus_pane_g2_ParamLimits

0x6ddb,	// (0x0007975c) camera2_autofocus_pane_g2

0x6de7,	// (0x00079768) camera2_autofocus_pane_g3_ParamLimits

0x6de7,	// (0x00079768) camera2_autofocus_pane_g3

0x6df3,	// (0x00079774) camera2_autofocus_pane_g4_ParamLimits

0x6df3,	// (0x00079774) camera2_autofocus_pane_g4

0x6dff,	// (0x00079780) camera2_autofocus_pane_g5_ParamLimits

0x6dff,	// (0x00079780) camera2_autofocus_pane_g5

0x0004,

0xf71c,	// (0x0008209d) camera2_autofocus_pane_g_ParamLimits

0xf71c,	// (0x0008209d) camera2_autofocus_pane_g

0x6fa4,	// (0x00079925) camera2_autofocus_pane_cp_g2

0x6fac,	// (0x0007992d) camera2_autofocus_pane_cp_g3

0x6fb4,	// (0x00079935) camera2_autofocus_pane_cp_g4

0x6fbc,	// (0x0007993d) camera2_autofocus_pane_cp_g5

0x0004,

0xf782,	// (0x00082103) camera2_autofocus_pane_cp_g

0x75fd,	// (0x00079f7e) popup_dialer_spcha_window

0x1a31,	// (0x000743b2) bg_popup_sub_pane_cp07

0xc771,	// (0x0007f0f2) list_spcha_pane

0xc779,	// (0x0007f0fa) list_single_spcha_pane_ParamLimits

0xc779,	// (0x0007f0fa) list_single_spcha_pane

0x1a31,	// (0x000743b2) list_highlight_pane_cp06

0xc78a,	// (0x0007f10b) list_single_spcha_pane_t1

0xb839,	// (0x0007e1ba) popup_call2_audio_out_window_g4_ParamLimits

0xb839,	// (0x0007e1ba) popup_call2_audio_out_window_g4

0x1a31,	// (0x000743b2) main_imed2_pane

0xbe6c,	// (0x0007e7ed) popup_imed_adjust2_window

0x62d3,	// (0x00078c54) popup_imed_trans_window_ParamLimits

0x62d3,	// (0x00078c54) popup_imed_trans_window

0xc194,	// (0x0007eb15) popup_blid_sat_info2_window_t1

0xc1a2,	// (0x0007eb23) popup_blid_sat_info2_window_t2

0x000a,

0xf6b1,	// (0x00082032) popup_blid_sat_info2_window_t

0x798e,	// (0x0007a30f) aid_size_cell_colour_35

0x79ae,	// (0x0007a32f) aid_size_cell_colour_112

0x79ce,	// (0x0007a34f) aid_size_cell_effect

0xbe3c,	// (0x0007e7bd) bg_tb_trans_pane_cp02

0x4623,	// (0x00076fa4) heading_imed_pane

0x79ee,	// (0x0007a36f) listscroll_imed_pane

0xc798,	// (0x0007f119) heading_imed_pane_g1

0xc7a0,	// (0x0007f121) heading_imed_pane_t1

0xc7ae,	// (0x0007f12f) grid_imed_colour_35_pane_ParamLimits

0xc7ae,	// (0x0007f12f) grid_imed_colour_35_pane

0x79fa,	// (0x0007a37b) grid_imed_effect_pane

0xc7c1,	// (0x0007f142) list_imed_aspect_pane

0x7a0d,	// (0x0007a38e) scroll_pane_cp027_ParamLimits

0x7a0d,	// (0x0007a38e) scroll_pane_cp027

0x7a19,	// (0x0007a39a) cell_imed_effect_pane_ParamLimits

0x7a19,	// (0x0007a39a) cell_imed_effect_pane

0xc7c9,	// (0x0007f14a) cell_imed_colour_pane_ParamLimits

0xc7c9,	// (0x0007f14a) cell_imed_colour_pane

0xc803,	// (0x0007f184) cell_imed_colour_pane_g1_ParamLimits

0xc803,	// (0x0007f184) cell_imed_colour_pane_g1

0xc814,	// (0x0007f195) hgihlgiht_grid_pane_cp016_ParamLimits

0xc814,	// (0x0007f195) hgihlgiht_grid_pane_cp016

0x7a3e,	// (0x0007a3bf) cell_imed_effect_pane_g1

0x7a46,	// (0x0007a3c7) grid_highlight_pane_cp017

0xc825,	// (0x0007f1a6) list_imed_single_pane_ParamLimits

0xc825,	// (0x0007f1a6) list_imed_single_pane

0x1a31,	// (0x000743b2) list_highlight_pane_cp07

0xc838,	// (0x0007f1b9) list_imed_aspect_pane_comp1_t1

0xbe3c,	// (0x0007e7bd) bg_tb_trans_pane_cp05

0xc858,	// (0x0007f1d9) popup_imed_adjust2_window_g1

0xc87f,	// (0x0007f200) popup_imed_adjust2_window_t1

0xc897,	// (0x0007f218) slider_imed_adjust_pane

0xc8ab,	// (0x0007f22c) slider_imed_adjust_pane_g1

0xc8bb,	// (0x0007f23c) slider_imed_adjust_pane_g2

0xc8cb,	// (0x0007f24c) slider_imed_adjust_pane_g3

0xc8dc,	// (0x0007f25d) slider_imed_adjust_pane_g4

0x0003,

0xf7f5,	// (0x00082176) slider_imed_adjust_pane_g

0x7a4f,	// (0x0007a3d0) aid_size_cell_clipart2

0x7a5b,	// (0x0007a3dc) grid_imed_clipart_pane

0xc8ed,	// (0x0007f26e) scroll_pane_cp031

0x7a65,	// (0x0007a3e6) cell_imed_clipart_pane_ParamLimits

0x7a65,	// (0x0007a3e6) cell_imed_clipart_pane

0x7a7d,	// (0x0007a3fe) cell_imed_clipart_pane_g1

0x1a31,	// (0x000743b2) grid_highlight_pane_cp014

0x7761,	// (0x0007a0e2) main_clock2_pane_g1_ParamLimits

0x7761,	// (0x0007a0e2) main_clock2_pane_g1

0x788f,	// (0x0007a210) aid_call2_pane_cp10

0x78a1,	// (0x0007a222) aid_call_pane_cp10

0x4cc5,	// (0x00077646) popup_clock_analogue_window_cp10_g1

0x4cc5,	// (0x00077646) popup_clock_analogue_window_cp10_g2

0x78b3,	// (0x0007a234) popup_clock_analogue_window_cp10_g3

0x78b3,	// (0x0007a234) popup_clock_analogue_window_cp10_g4

0x4cc5,	// (0x00077646) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e3,	// (0x00082164) popup_clock_analogue_window_cp10_g

0x78c5,	// (0x0007a246) popup_clock_analogue_window_cp10_t1

0x78f6,	// (0x0007a277) clock_digital_number_pane_cp10_ParamLimits

0x78f6,	// (0x0007a277) clock_digital_number_pane_cp10

0x790e,	// (0x0007a28f) clock_digital_number_pane_cp11_ParamLimits

0x790e,	// (0x0007a28f) clock_digital_number_pane_cp11

0x7926,	// (0x0007a2a7) clock_digital_number_pane_cp12_ParamLimits

0x7926,	// (0x0007a2a7) clock_digital_number_pane_cp12

0x793e,	// (0x0007a2bf) clock_digital_number_pane_cp13_ParamLimits

0x793e,	// (0x0007a2bf) clock_digital_number_pane_cp13

0x7956,	// (0x0007a2d7) clock_digital_separator_pane_cp10_ParamLimits

0x7956,	// (0x0007a2d7) clock_digital_separator_pane_cp10

0x796e,	// (0x0007a2ef) popup_clock_digital_window_cp02_t1_ParamLimits

0x796e,	// (0x0007a2ef) popup_clock_digital_window_cp02_t1

0x232b,	// (0x00074cac) clock_digital_number_pane_cp10_g1

0x232b,	// (0x00074cac) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fe,	// (0x0008217f) clock_digital_number_pane_cp10_g

0x232b,	// (0x00074cac) clock_digital_separator_pane_cp10_g1

0x232b,	// (0x00074cac) clock_digital_separator_pane_g2_cp10

0x4ed6,	// (0x00077857) navi_pane_vded_g4

0x4edf,	// (0x00077860) navi_pane_vded_g5

0x4ee8,	// (0x00077869) navi_pane_vded_t1

0x1a31,	// (0x000743b2) main_vded_pane

0x7a86,	// (0x0007a407) main_vded_pane_g1

0x7a90,	// (0x0007a411) main_vded_pane_g2

0x7a98,	// (0x0007a419) main_vded_pane_g3

0x0002,

0xf803,	// (0x00082184) main_vded_pane_g

0x7aa0,	// (0x0007a421) main_vded_pane_t1

0x7aae,	// (0x0007a42f) main_vded_pane_t2

0x0001,

0xf80a,	// (0x0008218b) main_vded_pane_t

0x7abc,	// (0x0007a43d) vded_slider_pane

0x7ac4,	// (0x0007a445) vded_video_pane

0xc8f5,	// (0x0007f276) vded_video_pane_g1

0x7acc,	// (0x0007a44d) vded_video_pane_g2

0xc350,	// (0x0007ecd1) vded_video_pane_g3

0x0002,

0xf80f,	// (0x00082190) vded_video_pane_g

0xc8ff,	// (0x0007f280) vded_slider_pane_g1

0xc067,	// (0x0007e9e8) vded_slider_pane_g2

0xc908,	// (0x0007f289) vded_slider_pane_g3

0xc911,	// (0x0007f292) vded_slider_pane_g4

0xc91a,	// (0x0007f29b) vded_slider_pane_g5

0x0004,

0xf816,	// (0x00082197) vded_slider_pane_g

0x74e9,	// (0x00079e6a) mup3_rocker_pane_ParamLimits

0x74e9,	// (0x00079e6a) mup3_rocker_pane

0x7ad5,	// (0x0007a456) mup3_control_keys_pane_g1

0x7add,	// (0x0007a45e) mup3_control_keys_pane_g2

0x7ae5,	// (0x0007a466) mup3_control_keys_pane_g3

0x7aed,	// (0x0007a46e) mup3_control_keys_pane_g4

0x0003,

0xf821,	// (0x000821a2) mup3_control_keys_pane_g

0x1bfb,	// (0x0007457c) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1bfb,	// (0x0007457c) popup_toolbar2_fixed_window_cp01

0x7517,	// (0x00079e98) popup_toolbar2_fixed_window_cp02_ParamLimits

0x7517,	// (0x00079e98) popup_toolbar2_fixed_window_cp02

0xb178,	// (0x0007daf9) popup_call2_audio_second_window_t4_ParamLimits

0xb178,	// (0x0007daf9) popup_call2_audio_second_window_t4

0xb6a6,	// (0x0007e027) popup_call2_audio_first_window_t6_ParamLimits

0xb6a6,	// (0x0007e027) popup_call2_audio_first_window_t6

0xb93c,	// (0x0007e2bd) popup_call2_audio_out_window_t6_ParamLimits

0xb93c,	// (0x0007e2bd) popup_call2_audio_out_window_t6

0x1a31,	// (0x000743b2) main_vitu_pane

0x7afd,	// (0x0007a47e) aid_size_cell_itu_ParamLimits

0x7afd,	// (0x0007a47e) aid_size_cell_itu

0xaeed,	// (0x0007d86e) bg_popup_window_pane_cp08_ParamLimits

0xaeed,	// (0x0007d86e) bg_popup_window_pane_cp08

0x7b13,	// (0x0007a494) field_vitu_entry_pane_ParamLimits

0x7b13,	// (0x0007a494) field_vitu_entry_pane

0x7b26,	// (0x0007a4a7) grid_vitu_function_pane_ParamLimits

0x7b26,	// (0x0007a4a7) grid_vitu_function_pane

0x7b3b,	// (0x0007a4bc) grid_vitu_itu_pane_ParamLimits

0x7b3b,	// (0x0007a4bc) grid_vitu_itu_pane

0x7b51,	// (0x0007a4d2) cell_vitu_itu_pane_ParamLimits

0x7b51,	// (0x0007a4d2) cell_vitu_itu_pane

0x7b73,	// (0x0007a4f4) cell_vitu_function_pane_ParamLimits

0x7b73,	// (0x0007a4f4) cell_vitu_function_pane

0xaeed,	// (0x0007d86e) bg_popup_sub_pane_cp08_ParamLimits

0xaeed,	// (0x0007d86e) bg_popup_sub_pane_cp08

0x7b8c,	// (0x0007a50d) field_vitu_entry_pane_t1_ParamLimits

0x7b8c,	// (0x0007a50d) field_vitu_entry_pane_t1

0xc93b,	// (0x0007f2bc) field_vitu_entry_pane_t2_ParamLimits

0xc93b,	// (0x0007f2bc) field_vitu_entry_pane_t2

0x0001,

0xf82f,	// (0x000821b0) field_vitu_entry_pane_t_ParamLimits

0xf82f,	// (0x000821b0) field_vitu_entry_pane_t

0xc958,	// (0x0007f2d9) bg_button_pane_cp05_ParamLimits

0xc958,	// (0x0007f2d9) bg_button_pane_cp05

0x7ba8,	// (0x0007a529) cell_vitu_itu_pane_g1

0x7bc0,	// (0x0007a541) cell_vitu_itu_pane_t1_ParamLimits

0x7bc0,	// (0x0007a541) cell_vitu_itu_pane_t1

0x7bd2,	// (0x0007a553) cell_vitu_itu_pane_t2_ParamLimits

0x7bd2,	// (0x0007a553) cell_vitu_itu_pane_t2

0x0002,

0xf834,	// (0x000821b5) cell_vitu_itu_pane_t_ParamLimits

0xf834,	// (0x000821b5) cell_vitu_itu_pane_t

0xc966,	// (0x0007f2e7) bg_button_pane_cp07

0x7c07,	// (0x0007a588) cell_vitu_function_pane_g1

0xaefb,	// (0x0007d87c) main_calc_pane_g1

0x1a5f,	// (0x000743e0) aid_visual_content_pane

0x1a31,	// (0x000743b2) main_vradio_pane

0x7c10,	// (0x0007a591) main_vradio_pane_g1_ParamLimits

0x7c10,	// (0x0007a591) main_vradio_pane_g1

0xc970,	// (0x0007f2f1) main_vradio_pane_g2_ParamLimits

0xc970,	// (0x0007f2f1) main_vradio_pane_g2

0x0001,

0xf83b,	// (0x000821bc) main_vradio_pane_g_ParamLimits

0xf83b,	// (0x000821bc) main_vradio_pane_g

0x7c26,	// (0x0007a5a7) main_vradio_pane_t1_ParamLimits

0x7c26,	// (0x0007a5a7) main_vradio_pane_t1

0x7c3b,	// (0x0007a5bc) main_vradio_pane_t2_ParamLimits

0x7c3b,	// (0x0007a5bc) main_vradio_pane_t2

0xc97d,	// (0x0007f2fe) main_vradio_pane_t3_ParamLimits

0xc97d,	// (0x0007f2fe) main_vradio_pane_t3

0x0002,

0xf840,	// (0x000821c1) main_vradio_pane_t_ParamLimits

0xf840,	// (0x000821c1) main_vradio_pane_t

0x7c50,	// (0x0007a5d1) vradio_rocker_control_pane_ParamLimits

0x7c50,	// (0x0007a5d1) vradio_rocker_control_pane

0x7c62,	// (0x0007a5e3) vradio_station_info_pane_ParamLimits

0x7c62,	// (0x0007a5e3) vradio_station_info_pane

0xc98f,	// (0x0007f310) vradio_frequency_info_pane_ParamLimits

0xc98f,	// (0x0007f310) vradio_frequency_info_pane

0xc350,	// (0x0007ecd1) vradio_station_info_pane_g1

0xc99e,	// (0x0007f31f) vradio_station_info_pane_t1_ParamLimits

0xc99e,	// (0x0007f31f) vradio_station_info_pane_t1

0xc9c0,	// (0x0007f341) vradio_station_info_pane_t2_ParamLimits

0xc9c0,	// (0x0007f341) vradio_station_info_pane_t2

0x0001,

0xf847,	// (0x000821c8) vradio_station_info_pane_t_ParamLimits

0xf847,	// (0x000821c8) vradio_station_info_pane_t

0xc9d2,	// (0x0007f353) vradio_tuning_pane

0xc9da,	// (0x0007f35b) vradio_rocker_control_pane_g1

0xc9e2,	// (0x0007f363) vradio_rocker_control_pane_g2

0xc9ea,	// (0x0007f36b) vradio_rocker_control_pane_g3

0xc9f2,	// (0x0007f373) vradio_rocker_control_pane_g4

0xc9fa,	// (0x0007f37b) vradio_rocker_control_pane_g5

0x0004,

0xf84c,	// (0x000821cd) vradio_rocker_control_pane_g

0x7c72,	// (0x0007a5f3) vradio_frequency_info_pane_g1

0xca02,	// (0x0007f383) vradio_frequency_info_pane_t1_ParamLimits

0xca02,	// (0x0007f383) vradio_frequency_info_pane_t1

0x7c7c,	// (0x0007a5fd) vradio_tuning_pane_g1

0x7c85,	// (0x0007a606) vradio_tuning_pane_t1

0xaec4,	// (0x0007d845) area_side_right_pane_ParamLimits

0xaec4,	// (0x0007d845) area_side_right_pane

0xbdf7,	// (0x0007e778) status_small_pane_g1

0xbdff,	// (0x0007e780) status_small_pane_g2

0xbe08,	// (0x0007e789) status_small_pane_g3

0xbe11,	// (0x0007e792) status_small_pane_g4

0x0003,

0xf607,	// (0x00081f88) status_small_pane_g

0xbe1a,	// (0x0007e79b) status_small_pane_t1

0x1a31,	// (0x000743b2) main_video3_pane

0xca16,	// (0x0007f397) cams_zoom_vslider_pane

0xca1e,	// (0x0007f39f) image3_wide_pane_ParamLimits

0xca1e,	// (0x0007f39f) image3_wide_pane

0xca38,	// (0x0007f3b9) image3_wide_small_pane

0xca42,	// (0x0007f3c3) main_video3_pane_g1_ParamLimits

0xca42,	// (0x0007f3c3) main_video3_pane_g1

0xca5e,	// (0x0007f3df) main_video3_pane_g2_ParamLimits

0xca5e,	// (0x0007f3df) main_video3_pane_g2

0x0001,

0xf857,	// (0x000821d8) main_video3_pane_g_ParamLimits

0xf857,	// (0x000821d8) main_video3_pane_g

0xca7a,	// (0x0007f3fb) main_video3_pane_t1_ParamLimits

0xca7a,	// (0x0007f3fb) main_video3_pane_t1

0xcaa5,	// (0x0007f426) main_video3_pane_t2_ParamLimits

0xcaa5,	// (0x0007f426) main_video3_pane_t2

0xcad0,	// (0x0007f451) main_video3_pane_t3_ParamLimits

0xcad0,	// (0x0007f451) main_video3_pane_t3

0x0002,

0xf85c,	// (0x000821dd) main_video3_pane_t_ParamLimits

0xf85c,	// (0x000821dd) main_video3_pane_t

0xcafb,	// (0x0007f47c) cams_zoom_vslider_pane_g1

0xcb04,	// (0x0007f485) cams_zoom_vslider_pane_g2

0x0001,

0xf863,	// (0x000821e4) cams_zoom_vslider_pane_g

0xcb0c,	// (0x0007f48d) small_slider_vertical_pane

0xc350,	// (0x0007ecd1) small_slider_vertical_pane_g1

0xc350,	// (0x0007ecd1) small_slider_vertical_pane_g2

0xcb14,	// (0x0007f495) small_slider_vertical_pane_g3

0x0002,

0xf868,	// (0x000821e9) small_slider_vertical_pane_g

0x1a31,	// (0x000743b2) main_hwr_training_pane

0xcb1d,	// (0x0007f49e) hwr_training_instruct_pane_ParamLimits

0xcb1d,	// (0x0007f49e) hwr_training_instruct_pane

0x7c94,	// (0x0007a615) hwr_training_navi_pane_ParamLimits

0x7c94,	// (0x0007a615) hwr_training_navi_pane

0x7cab,	// (0x0007a62c) hwr_training_write_pane_ParamLimits

0x7cab,	// (0x0007a62c) hwr_training_write_pane

0x1a31,	// (0x000743b2) bg_frame_shadow_pane

0xcb4c,	// (0x0007f4cd) hwr_training_write_pane_g1

0xcb54,	// (0x0007f4d5) hwr_training_write_pane_g2

0xcb5c,	// (0x0007f4dd) hwr_training_write_pane_g3

0xcb64,	// (0x0007f4e5) hwr_training_write_pane_g4

0xcb6c,	// (0x0007f4ed) hwr_training_write_pane_g5

0xcb74,	// (0x0007f4f5) hwr_training_write_pane_g6

0xcb7c,	// (0x0007f4fd) hwr_training_write_pane_g7

0x0006,

0xf86f,	// (0x000821f0) hwr_training_write_pane_g

0xe8ea,	// (0x0008126b) hwr_training_navi_pane_g1_ParamLimits

0xe8ea,	// (0x0008126b) hwr_training_navi_pane_g1

0xe8fc,	// (0x0008127d) hwr_training_navi_pane_g2_ParamLimits

0xe8fc,	// (0x0008127d) hwr_training_navi_pane_g2

0xe90e,	// (0x0008128f) hwr_training_navi_pane_g3_ParamLimits

0xe90e,	// (0x0008128f) hwr_training_navi_pane_g3

0xe91e,	// (0x0008129f) hwr_training_navi_pane_g4_ParamLimits

0xe91e,	// (0x0008129f) hwr_training_navi_pane_g4

0x0004,

0xf87e,	// (0x000821ff) hwr_training_navi_pane_g_ParamLimits

0xf87e,	// (0x000821ff) hwr_training_navi_pane_g

0xe92b,	// (0x000812ac) hwr_training_navi_pane_t1

0x7ceb,	// (0x0007a66c) list_single_hwr_training_instruct_pane_ParamLimits

0x7ceb,	// (0x0007a66c) list_single_hwr_training_instruct_pane

0xcb84,	// (0x0007f505) list_single_hwr_training_instruct_pane_t1

0xc290,	// (0x0007ec11) bg_frame_shadow_pane_g1

0xcb93,	// (0x0007f514) bg_frame_shadow_pane_g2

0xcb9b,	// (0x0007f51c) bg_frame_shadow_pane_g3

0xcba3,	// (0x0007f524) bg_frame_shadow_pane_g4

0xcbab,	// (0x0007f52c) bg_frame_shadow_pane_g5

0xcbb3,	// (0x0007f534) bg_frame_shadow_pane_g6

0xcbbb,	// (0x0007f53c) bg_frame_shadow_pane_g7

0x2862,	// (0x000751e3) bg_frame_shadow_pane_g8

0x0007,

0xf889,	// (0x0008220a) bg_frame_shadow_pane_g

0x1a31,	// (0x000743b2) main_video_tele_dialer_pane

0x7d03,	// (0x0007a684) aid_size_cell_video_keypad_ParamLimits

0x7d03,	// (0x0007a684) aid_size_cell_video_keypad

0x7d1d,	// (0x0007a69e) grid_video_dialer_keypad_pane_ParamLimits

0x7d1d,	// (0x0007a69e) grid_video_dialer_keypad_pane

0x7d5f,	// (0x0007a6e0) video_down_pane_cp_ParamLimits

0x7d5f,	// (0x0007a6e0) video_down_pane_cp

0x7d8f,	// (0x0007a710) cell_video_dialer_keypad_pane_ParamLimits

0x7d8f,	// (0x0007a710) cell_video_dialer_keypad_pane

0xcbc3,	// (0x0007f544) bg_button_pane_cp08_ParamLimits

0xcbc3,	// (0x0007f544) bg_button_pane_cp08

0x7db1,	// (0x0007a732) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7db1,	// (0x0007a732) cell_video_dialer_keypad_pane_g1

0x74d3,	// (0x00079e54) mup3_rocker2_pane_ParamLimits

0x74d3,	// (0x00079e54) mup3_rocker2_pane

0xc350,	// (0x0007ecd1) mup3_rocker2_pane_g1

0x61cc,	// (0x00078b4d) main_dialer2_pane

0x1a31,	// (0x000743b2) main_mp4_pane

0xe949,	// (0x000812ca) main_mp4_pane_g1_ParamLimits

0xe949,	// (0x000812ca) main_mp4_pane_g1

0xe949,	// (0x000812ca) main_mp4_pane_g2_ParamLimits

0xe949,	// (0x000812ca) main_mp4_pane_g2

0x7dec,	// (0x0007a76d) main_mp4_pane_g3_ParamLimits

0x7dec,	// (0x0007a76d) main_mp4_pane_g3

0xe957,	// (0x000812d8) main_mp4_pane_g4_ParamLimits

0xe957,	// (0x000812d8) main_mp4_pane_g4

0xe985,	// (0x00081306) main_mp4_pane_g5_ParamLimits

0xe985,	// (0x00081306) main_mp4_pane_g5

0x0007,

0xf8a9,	// (0x0008222a) main_mp4_pane_g_ParamLimits

0xf8a9,	// (0x0008222a) main_mp4_pane_g

0xe9f9,	// (0x0008137a) main_mp4_pane_t1_ParamLimits

0xe9f9,	// (0x0008137a) main_mp4_pane_t1

0xea51,	// (0x000813d2) main_mp4_pane_t2_ParamLimits

0xea51,	// (0x000813d2) main_mp4_pane_t2

0xcbcf,	// (0x0007f550) main_mp4_pane_t3_ParamLimits

0xcbcf,	// (0x0007f550) main_mp4_pane_t3

0xeaa3,	// (0x00081424) main_mp4_pane_t4_ParamLimits

0xeaa3,	// (0x00081424) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0008223b) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0008223b) main_mp4_pane_t

0xeae3,	// (0x00081464) mp4_progress_pane_ParamLimits

0xeae3,	// (0x00081464) mp4_progress_pane

0xeb27,	// (0x000814a8) mp4_rocker_pane_ParamLimits

0xeb27,	// (0x000814a8) mp4_rocker_pane

0xcbfd,	// (0x0007f57e) mp4_progress_pane_t1

0xcc14,	// (0x0007f595) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x00082244) mp4_progress_pane_t

0xcc2b,	// (0x0007f5ac) mup_progress_pane_cp04

0xc350,	// (0x0007ecd1) mp4_rocker_pane_g1

0x7e1c,	// (0x0007a79d) aid_cell_size_keypad2_ParamLimits

0x7e1c,	// (0x0007a79d) aid_cell_size_keypad2

0x7e36,	// (0x0007a7b7) dialer2_ne_pane_ParamLimits

0x7e36,	// (0x0007a7b7) dialer2_ne_pane

0x7e4b,	// (0x0007a7cc) grid_dialer2_keypad_pane_ParamLimits

0x7e4b,	// (0x0007a7cc) grid_dialer2_keypad_pane

0xc13d,	// (0x0007eabe) bg_popup_call_pane_cp07_ParamLimits

0xc13d,	// (0x0007eabe) bg_popup_call_pane_cp07

0x7e61,	// (0x0007a7e2) dialer2_ne_pane_t1_ParamLimits

0x7e61,	// (0x0007a7e2) dialer2_ne_pane_t1

0x7e9e,	// (0x0007a81f) cell_dialer2_keypad_pane_ParamLimits

0x7e9e,	// (0x0007a81f) cell_dialer2_keypad_pane

0xcc49,	// (0x0007f5ca) bg_button_pane_pane_cp04_ParamLimits

0xcc49,	// (0x0007f5ca) bg_button_pane_pane_cp04

0x7ec0,	// (0x0007a841) cell_dialer2_keypad_pane_g1_ParamLimits

0x7ec0,	// (0x0007a841) cell_dialer2_keypad_pane_g1

0x33c7,	// (0x00075d48) aid_placing_vt_set_content_ParamLimits

0x33c7,	// (0x00075d48) aid_placing_vt_set_content

0x33e9,	// (0x00075d6a) aid_placing_vt_set_title_ParamLimits

0x33e9,	// (0x00075d6a) aid_placing_vt_set_title

0x1a31,	// (0x000743b2) main_image3_pane

0x7f4f,	// (0x0007a8d0) area_side_right_pane_cp01_ParamLimits

0x7f4f,	// (0x0007a8d0) area_side_right_pane_cp01

0xe949,	// (0x000812ca) main_image3_pane_g1_ParamLimits

0xe949,	// (0x000812ca) main_image3_pane_g1

0x7f66,	// (0x0007a8e7) main_image3_pane_g2_ParamLimits

0x7f66,	// (0x0007a8e7) main_image3_pane_g2

0x7f8c,	// (0x0007a90d) main_image3_pane_g3_ParamLimits

0x7f8c,	// (0x0007a90d) main_image3_pane_g3

0x7fb2,	// (0x0007a933) main_image3_pane_g4_ParamLimits

0x7fb2,	// (0x0007a933) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x00082253) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x00082253) main_image3_pane_g

0x7fd8,	// (0x0007a959) main_image3_pane_t1_ParamLimits

0x7fd8,	// (0x0007a959) main_image3_pane_t1

0x8030,	// (0x0007a9b1) main_image3_pane_t2_ParamLimits

0x8030,	// (0x0007a9b1) main_image3_pane_t2

0x8082,	// (0x0007aa03) main_image3_pane_t3_ParamLimits

0x8082,	// (0x0007aa03) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0008225c) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0008225c) main_image3_pane_t

0xaeed,	// (0x0007d86e) grid_sctrl_middle_pane_cp01_ParamLimits

0xaeed,	// (0x0007d86e) grid_sctrl_middle_pane_cp01

0x8102,	// (0x0007aa83) cell_sctrl_middle_pane_cp01_ParamLimits

0x8102,	// (0x0007aa83) cell_sctrl_middle_pane_cp01

0x811f,	// (0x0007aaa0) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x811f,	// (0x0007aaa0) cell_sctrl_middle_pane_cp01_g1

0x1a31,	// (0x000743b2) main_call4_pane

0x8135,	// (0x0007aab6) aid_size_button_call4_ParamLimits

0x8135,	// (0x0007aab6) aid_size_button_call4

0x8162,	// (0x0007aae3) call4_windows_pane_ParamLimits

0x8162,	// (0x0007aae3) call4_windows_pane

0x8178,	// (0x0007aaf9) grid_call4_button_pane_ParamLimits

0x8178,	// (0x0007aaf9) grid_call4_button_pane

0xcc6d,	// (0x0007f5ee) call4_windows_conf_pane

0x819f,	// (0x0007ab20) popup_call4_audio_first_window_ParamLimits

0x819f,	// (0x0007ab20) popup_call4_audio_first_window

0x81bf,	// (0x0007ab40) popup_call4_audio_second_window_ParamLimits

0x81bf,	// (0x0007ab40) popup_call4_audio_second_window

0xee0c,	// (0x0008178d) popup_call4_audio_wait_window_ParamLimits

0xee0c,	// (0x0008178d) popup_call4_audio_wait_window

0x81d1,	// (0x0007ab52) cell_call4_button_pane_ParamLimits

0x81d1,	// (0x0007ab52) cell_call4_button_pane

0x81f6,	// (0x0007ab77) bg_button_pane_cp09_ParamLimits

0x81f6,	// (0x0007ab77) bg_button_pane_cp09

0x8202,	// (0x0007ab83) cell_call4_button_pane_g1_ParamLimits

0x8202,	// (0x0007ab83) cell_call4_button_pane_g1

0x8228,	// (0x0007aba9) cell_call4_button_pane_t1_ParamLimits

0x8228,	// (0x0007aba9) cell_call4_button_pane_t1

0xee20,	// (0x000817a1) popup_call4_audio_conf_window_ParamLimits

0xee20,	// (0x000817a1) popup_call4_audio_conf_window

0x752d,	// (0x00079eae) mup3_progress_pane_t1_ParamLimits

0x754b,	// (0x00079ecc) mup3_progress_pane_t2_ParamLimits

0xc626,	// (0x0007efa7) mup3_progress_pane_t3_ParamLimits

0xf7ab,	// (0x0008212c) mup3_progress_pane_t_ParamLimits

0xc643,	// (0x0007efc4) mup_progress_pane_cp03_ParamLimits

0x7af5,	// (0x0007a476) mup3_control_keys_pane_g4_copy1

0xeb11,	// (0x00081492) mp4_rocker2_pane_ParamLimits

0xeb11,	// (0x00081492) mp4_rocker2_pane

0xee34,	// (0x000817b5) mp4_rocker2_pane_g1

0xee3c,	// (0x000817bd) mp4_rocker2_pane_g2

0xeba9,	// (0x0008152a) mp4_rocker2_pane_g3

0xebb1,	// (0x00081532) mp4_rocker2_pane_g4

0xebb9,	// (0x0008153a) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x00082265) mp4_rocker2_pane_g

0x1a31,	// (0x000743b2) main_camera4_pane

0x1a31,	// (0x000743b2) main_video4_pane

0x7d31,	// (0x0007a6b2) main_video_tele_dialer_pane_t1_ParamLimits

0x7d31,	// (0x0007a6b2) main_video_tele_dialer_pane_t1

0x7d48,	// (0x0007a6c9) main_video_tele_dialer_pane_t2_ParamLimits

0x7d48,	// (0x0007a6c9) main_video_tele_dialer_pane_t2

0x0001,

0xf89a,	// (0x0008221b) main_video_tele_dialer_pane_t_ParamLimits

0xf89a,	// (0x0008221b) main_video_tele_dialer_pane_t

0x8266,	// (0x0007abe7) cam4_autofocus_pane_ParamLimits

0x8266,	// (0x0007abe7) cam4_autofocus_pane

0x827a,	// (0x0007abfb) cam4_image_uncrop_pane_ParamLimits

0x827a,	// (0x0007abfb) cam4_image_uncrop_pane

0x8291,	// (0x0007ac12) cam4_indicators_pane_ParamLimits

0x8291,	// (0x0007ac12) cam4_indicators_pane

0x82b5,	// (0x0007ac36) main_camera4_pane_g1_ParamLimits

0x82b5,	// (0x0007ac36) main_camera4_pane_g1

0x82c1,	// (0x0007ac42) main_camera4_pane_g2_ParamLimits

0x82c1,	// (0x0007ac42) main_camera4_pane_g2

0x82c1,	// (0x0007ac42) main_camera4_pane_g3_ParamLimits

0x82c1,	// (0x0007ac42) main_camera4_pane_g3

0x82cd,	// (0x0007ac4e) main_camera4_pane_g4_ParamLimits

0x82cd,	// (0x0007ac4e) main_camera4_pane_g4

0x82d9,	// (0x0007ac5a) main_camera4_pane_g5_ParamLimits

0x82d9,	// (0x0007ac5a) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x00082270) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x00082270) main_camera4_pane_g

0x82f6,	// (0x0007ac77) main_camera4_pane_t1_ParamLimits

0x82f6,	// (0x0007ac77) main_camera4_pane_t1

0xc57f,	// (0x0007ef00) bg_tb_trans_pane_cp06

0xebe3,	// (0x00081564) cam4_indicators_pane_g1

0xebf3,	// (0x00081574) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0008228b) cam4_indicators_pane_g

0xec13,	// (0x00081594) cam4_indicators_pane_t1

0x834b,	// (0x0007accc) main_video4_pane_g1_ParamLimits

0x834b,	// (0x0007accc) main_video4_pane_g1

0x835d,	// (0x0007acde) main_video4_pane_g2_ParamLimits

0x835d,	// (0x0007acde) main_video4_pane_g2

0x835d,	// (0x0007acde) main_video4_pane_g3_ParamLimits

0x835d,	// (0x0007acde) main_video4_pane_g3

0x836c,	// (0x0007aced) main_video4_pane_g4_ParamLimits

0x836c,	// (0x0007aced) main_video4_pane_g4

0x0004,

0xf911,	// (0x00082292) main_video4_pane_g_ParamLimits

0xf911,	// (0x00082292) main_video4_pane_g

0x838a,	// (0x0007ad0b) vid4_indicators_pane_ParamLimits

0x838a,	// (0x0007ad0b) vid4_indicators_pane

0x83b2,	// (0x0007ad33) video4_image_uncrop_cif_pane_ParamLimits

0x83b2,	// (0x0007ad33) video4_image_uncrop_cif_pane

0x83ca,	// (0x0007ad4b) video4_image_uncrop_nhd_pane_ParamLimits

0x83ca,	// (0x0007ad4b) video4_image_uncrop_nhd_pane

0x83de,	// (0x0007ad5f) video4_image_uncrop_vga_pane_ParamLimits

0x83de,	// (0x0007ad5f) video4_image_uncrop_vga_pane

0xaeed,	// (0x0007d86e) bg_tb_trans_pane_cp07

0xebe3,	// (0x00081564) vid4_indicators_pane_g1

0xec35,	// (0x000815b6) vid4_indicators_pane_g2

0xec45,	// (0x000815c6) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0008229d) vid4_indicators_pane_g

0xec72,	// (0x000815f3) vid4_indicators_pane_t1

0x83f6,	// (0x0007ad77) cam4_autofocus_pane_g1

0x83fe,	// (0x0007ad7f) cam4_autofocus_pane_g2

0x8406,	// (0x0007ad87) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x000822a8) cam4_autofocus_pane_g

0x840e,	// (0x0007ad8f) cam4_autofocus_pane_g3_copy1

0x7d73,	// (0x0007a6f4) video_down_pane_cp_t1

0x7d81,	// (0x0007a702) video_down_pane_cp_t2

0x0001,

0xf89f,	// (0x00082220) video_down_pane_cp_t

0xaeed,	// (0x0007d86e) popup_vitu2_window_ParamLimits

0xaeed,	// (0x0007d86e) popup_vitu2_window

0x8416,	// (0x0007ad97) aid_size_cell2_itu2_ParamLimits

0x8416,	// (0x0007ad97) aid_size_cell2_itu2

0x843c,	// (0x0007adbd) aid_size_cell_itu2_ParamLimits

0x843c,	// (0x0007adbd) aid_size_cell_itu2

0x848d,	// (0x0007ae0e) bg_popup_window_pane_cp09_ParamLimits

0x848d,	// (0x0007ae0e) bg_popup_window_pane_cp09

0x849b,	// (0x0007ae1c) field_vitu2_entry_pane_ParamLimits

0x849b,	// (0x0007ae1c) field_vitu2_entry_pane

0x84b2,	// (0x0007ae33) grid_vitu2_function_pane_ParamLimits

0x84b2,	// (0x0007ae33) grid_vitu2_function_pane

0x84e7,	// (0x0007ae68) grid_vitu2_itu_pane_ParamLimits

0x84e7,	// (0x0007ae68) grid_vitu2_itu_pane

0x854e,	// (0x0007aecf) cell_vitu2_itu_pane_ParamLimits

0x854e,	// (0x0007aecf) cell_vitu2_itu_pane

0x8576,	// (0x0007aef7) cell_vitu2_function_pane_ParamLimits

0x8576,	// (0x0007aef7) cell_vitu2_function_pane

0xee44,	// (0x000817c5) bg_popup_call_pane_cp08_ParamLimits

0xee44,	// (0x000817c5) bg_popup_call_pane_cp08

0xee5b,	// (0x000817dc) field_vitu2_entry_pane_g1

0xee67,	// (0x000817e8) field_vitu2_entry_pane_g2

0x0002,

0x0614,	// (0x00072f95) field_vitu2_entry_pane_g

0x0f0e,	// (0x0007388f) field_vitu2_entry_pane_t1_ParamLimits

0x0f0e,	// (0x0007388f) field_vitu2_entry_pane_t1

0xcca0,	// (0x0007f621) field_vitu2_entry_pane_t2_ParamLimits

0xcca0,	// (0x0007f621) field_vitu2_entry_pane_t2

0x0001,

0xf92e,	// (0x000822af) field_vitu2_entry_pane_t_ParamLimits

0xf92e,	// (0x000822af) field_vitu2_entry_pane_t

0x85b5,	// (0x0007af36) bg_button_pane_cp010_ParamLimits

0x85b5,	// (0x0007af36) bg_button_pane_cp010

0xec8c,	// (0x0008160d) cell_vitu2_itu_pane_g1

0x85d1,	// (0x0007af52) cell_vitu2_itu_pane_t1_ParamLimits

0x85d1,	// (0x0007af52) cell_vitu2_itu_pane_t1

0x0f3b,	// (0x000738bc) cell_vitu2_itu_pane_t2_ParamLimits

0x0f3b,	// (0x000738bc) cell_vitu2_itu_pane_t2

0x0002,

0xf938,	// (0x000822b9) cell_vitu2_itu_pane_t_ParamLimits

0xf938,	// (0x000822b9) cell_vitu2_itu_pane_t

0xaeed,	// (0x0007d86e) bg_button_pane_cp011

0x862f,	// (0x0007afb0) cell_vitu2_function_pane_g1

0x1a31,	// (0x000743b2) main_myfav_hc_pane

0x80ce,	// (0x0007aa4f) popup_image3_note_pane_ParamLimits

0x80ce,	// (0x0007aa4f) popup_image3_note_pane

0x80e8,	// (0x0007aa69) popup_image3_tool_bar_pane_ParamLimits

0x80e8,	// (0x0007aa69) popup_image3_tool_bar_pane

0x0fc9,	// (0x0007394a) cell_vitu2_itu_pane_t3_ParamLimits

0x0fc9,	// (0x0007394a) cell_vitu2_itu_pane_t3

0x1a31,	// (0x000743b2) bg_popup_trans_pane

0xee89,	// (0x0008180a) grid_image3_tool_bar_pane

0xee93,	// (0x00081814) bg_popup_trans_pane_g1

0x390f,	// (0x00076290) bg_popup_trans_pane_g2

0xee9b,	// (0x0008181c) bg_popup_trans_pane_g3

0xeea3,	// (0x00081824) bg_popup_trans_pane_g4

0xeeab,	// (0x0008182c) bg_popup_trans_pane_g5

0xeeb3,	// (0x00081834) bg_popup_trans_pane_g6

0xeebb,	// (0x0008183c) bg_popup_trans_pane_g7

0xeec3,	// (0x00081844) bg_popup_trans_pane_g8

0x38ef,	// (0x00076270) bg_popup_trans_pane_g9

0x0008,

0xf93f,	// (0x000822c0) bg_popup_trans_pane_g

0xeecb,	// (0x0008184c) cell_image3_tool_bar_pane_ParamLimits

0xeecb,	// (0x0008184c) cell_image3_tool_bar_pane

0xc350,	// (0x0007ecd1) cell_image3_tool_bar_pane_g1

0x1a31,	// (0x000743b2) bg_popup_trans_pane_cp1

0xeedf,	// (0x00081860) popup_image3_note_pane_t1

0xeeed,	// (0x0008186e) popup_image3_note_pane_t2

0xeefb,	// (0x0008187c) popup_image3_note_pane_t3

0x0002,

0x063f,	// (0x00072fc0) popup_image3_note_pane_t

0xef09,	// (0x0008188a) popup_image3_note_pane_t3_copy1

0x8642,	// (0x0007afc3) bg_myfav_hc_instruction_pane_ParamLimits

0x8642,	// (0x0007afc3) bg_myfav_hc_instruction_pane

0x8654,	// (0x0007afd5) cell_myfav_contact_pane_ParamLimits

0x8654,	// (0x0007afd5) cell_myfav_contact_pane

0x866e,	// (0x0007afef) cell_myfav_contact_pane_cp1_ParamLimits

0x866e,	// (0x0007afef) cell_myfav_contact_pane_cp1

0x8684,	// (0x0007b005) cell_myfav_contact_pane_cp2_ParamLimits

0x8684,	// (0x0007b005) cell_myfav_contact_pane_cp2

0x869a,	// (0x0007b01b) cell_myfav_contact_pane_cp3_ParamLimits

0x869a,	// (0x0007b01b) cell_myfav_contact_pane_cp3

0x86af,	// (0x0007b030) cell_myfav_contact_pane_cp4_ParamLimits

0x86af,	// (0x0007b030) cell_myfav_contact_pane_cp4

0x86c3,	// (0x0007b044) cell_myfav_contact_pane_cp5_ParamLimits

0x86c3,	// (0x0007b044) cell_myfav_contact_pane_cp5

0x86d7,	// (0x0007b058) cell_myfav_contact_pane_cp6_ParamLimits

0x86d7,	// (0x0007b058) cell_myfav_contact_pane_cp6

0x86eb,	// (0x0007b06c) cell_myfav_contact_pane_cp7_ParamLimits

0x86eb,	// (0x0007b06c) cell_myfav_contact_pane_cp7

0xef17,	// (0x00081898) listscroll_gen_pane_cp05

0x8703,	// (0x0007b084) main_myfav_hc_pane_g1_ParamLimits

0x8703,	// (0x0007b084) main_myfav_hc_pane_g1

0x8719,	// (0x0007b09a) main_myfav_hc_pane_g2_ParamLimits

0x8719,	// (0x0007b09a) main_myfav_hc_pane_g2

0x0002,

0xf952,	// (0x000822d3) main_myfav_hc_pane_g_ParamLimits

0xf952,	// (0x000822d3) main_myfav_hc_pane_g

0x8743,	// (0x0007b0c4) main_myfav_hc_pane_t1_ParamLimits

0x8743,	// (0x0007b0c4) main_myfav_hc_pane_t1

0xef20,	// (0x000818a1) main_myfav_hc_pane_t2_ParamLimits

0xef20,	// (0x000818a1) main_myfav_hc_pane_t2

0xef32,	// (0x000818b3) main_myfav_hc_pane_t3_ParamLimits

0xef32,	// (0x000818b3) main_myfav_hc_pane_t3

0x8758,	// (0x0007b0d9) main_myfav_hc_pane_t4_ParamLimits

0x8758,	// (0x0007b0d9) main_myfav_hc_pane_t4

0x0004,

0xf959,	// (0x000822da) main_myfav_hc_pane_t_ParamLimits

0xf959,	// (0x000822da) main_myfav_hc_pane_t

0xc350,	// (0x0007ecd1) bg_myfav_hc_instruction_pane_g1

0xef44,	// (0x000818c5) cell_myfav_contact_pane_g1_ParamLimits

0xef44,	// (0x000818c5) cell_myfav_contact_pane_g1

0xef44,	// (0x000818c5) cell_myfav_contact_pane_g2_ParamLimits

0xef44,	// (0x000818c5) cell_myfav_contact_pane_g2

0xef50,	// (0x000818d1) cell_myfav_contact_pane_g3_ParamLimits

0xef50,	// (0x000818d1) cell_myfav_contact_pane_g3

0xc610,	// (0x0007ef91) cell_myfav_contact_pane_g4_ParamLimits

0xc610,	// (0x0007ef91) cell_myfav_contact_pane_g4

0xef5d,	// (0x000818de) cell_myfav_contact_pane_g5_ParamLimits

0xef5d,	// (0x000818de) cell_myfav_contact_pane_g5

0x0004,

0xf964,	// (0x000822e5) cell_myfav_contact_pane_g_ParamLimits

0xf964,	// (0x000822e5) cell_myfav_contact_pane_g

0x872f,	// (0x0007b0b0) main_myfav_hc_pane_g3_ParamLimits

0x872f,	// (0x0007b0b0) main_myfav_hc_pane_g3

0x1b81,	// (0x00074502) popup_adpt_find_window

0x877c,	// (0x0007b0fd) afind_page_pane_ParamLimits

0x877c,	// (0x0007b0fd) afind_page_pane

0x8791,	// (0x0007b112) aid_size_cell_afind_ParamLimits

0x8791,	// (0x0007b112) aid_size_cell_afind

0x87af,	// (0x0007b130) bg_popup_sub_pane_cp09_ParamLimits

0x87af,	// (0x0007b130) bg_popup_sub_pane_cp09

0x87bc,	// (0x0007b13d) find_pane_cp01_ParamLimits

0x87bc,	// (0x0007b13d) find_pane_cp01

0xef69,	// (0x000818ea) grid_afind_control_pane_ParamLimits

0xef69,	// (0x000818ea) grid_afind_control_pane

0x87c9,	// (0x0007b14a) grid_afind_pane_ParamLimits

0x87c9,	// (0x0007b14a) grid_afind_pane

0x87e7,	// (0x0007b168) cell_afind_pane_ParamLimits

0x87e7,	// (0x0007b168) cell_afind_pane

0xc350,	// (0x0007ecd1) afind_page_pane_g1

0x8836,	// (0x0007b1b7) afind_page_pane_g2

0x883f,	// (0x0007b1c0) afind_page_pane_g3

0x0002,

0xf96f,	// (0x000822f0) afind_page_pane_g

0x8848,	// (0x0007b1c9) afind_page_pane_t1

0xef7d,	// (0x000818fe) cell_afind_grid_control_pane_ParamLimits

0xef7d,	// (0x000818fe) cell_afind_grid_control_pane

0xcc49,	// (0x0007f5ca) bg_button_pane_cp69_ParamLimits

0xcc49,	// (0x0007f5ca) bg_button_pane_cp69

0x8868,	// (0x0007b1e9) cell_afind_pane_g1_ParamLimits

0x8868,	// (0x0007b1e9) cell_afind_pane_g1

0x8875,	// (0x0007b1f6) cell_afind_pane_t1_ParamLimits

0x8875,	// (0x0007b1f6) cell_afind_pane_t1

0x3348,	// (0x00075cc9) bg_button_pane_cp72

0xef8c,	// (0x0008190d) cell_afind_grid_control_pane_g1

0x5af8,	// (0x00078479) aid_image_placing_area_ParamLimits

0x5af8,	// (0x00078479) aid_image_placing_area

0xc923,	// (0x0007f2a4) field_vitu_entry_pane_g1_ParamLimits

0xc923,	// (0x0007f2a4) field_vitu_entry_pane_g1

0xc92f,	// (0x0007f2b0) field_vitu_entry_pane_g2_ParamLimits

0xc92f,	// (0x0007f2b0) field_vitu_entry_pane_g2

0x0001,

0xf82a,	// (0x000821ab) field_vitu_entry_pane_g_ParamLimits

0xf82a,	// (0x000821ab) field_vitu_entry_pane_g

0x7ba8,	// (0x0007a529) cell_vitu_itu_pane_g1_ParamLimits

0x7bea,	// (0x0007a56b) cell_vitu_itu_pane_t3_ParamLimits

0x7bea,	// (0x0007a56b) cell_vitu_itu_pane_t3

0xcbfd,	// (0x0007f57e) mp4_progress_pane_t1_ParamLimits

0xcc14,	// (0x0007f595) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x00082244) mp4_progress_pane_t_ParamLimits

0xcc2b,	// (0x0007f5ac) mup_progress_pane_cp04_ParamLimits

0x876a,	// (0x0007b0eb) main_myfav_hc_pane_t5_ParamLimits

0x876a,	// (0x0007b0eb) main_myfav_hc_pane_t5

0xaeb4,	// (0x0007d835) aid_zoom_text_primary

0x1b81,	// (0x00074502) popup_adpt_find_window_ParamLimits

0xaeed,	// (0x0007d86e) main_cam_set_pane

0x82a3,	// (0x0007ac24) cam4_zoom_pane_ParamLimits

0x82a3,	// (0x0007ac24) cam4_zoom_pane

0x8887,	// (0x0007b208) main_cam_set_pane_g1_ParamLimits

0x8887,	// (0x0007b208) main_cam_set_pane_g1

0x8895,	// (0x0007b216) main_cam_set_pane_g2_ParamLimits

0x8895,	// (0x0007b216) main_cam_set_pane_g2

0x0001,

0xf976,	// (0x000822f7) main_cam_set_pane_g_ParamLimits

0xf976,	// (0x000822f7) main_cam_set_pane_g

0x88b4,	// (0x0007b235) main_cam_set_pane_t1_ParamLimits

0x88b4,	// (0x0007b235) main_cam_set_pane_t1

0x88c6,	// (0x0007b247) main_cset_listscroll_pane_ParamLimits

0x88c6,	// (0x0007b247) main_cset_listscroll_pane

0x88e4,	// (0x0007b265) main_cset_slider_pane_ParamLimits

0x88e4,	// (0x0007b265) main_cset_slider_pane

0xef9d,	// (0x0008191e) main_cset_list_pane_ParamLimits

0xef9d,	// (0x0008191e) main_cset_list_pane

0xefad,	// (0x0008192e) scroll_pane_cp028

0x8908,	// (0x0007b289) aid_area_touch_slider

0x8924,	// (0x0007b2a5) cset_slider_pane

0x894e,	// (0x0007b2cf) main_cset_slider_pane_g1

0x8963,	// (0x0007b2e4) main_cset_slider_pane_g2

0x0011,

0xf97b,	// (0x000822fc) main_cset_slider_pane_g

0xefe6,	// (0x00081967) main_cset_slider_pane_t1

0x8a1f,	// (0x0007b3a0) main_cset_slider_pane_t2

0x8a39,	// (0x0007b3ba) main_cset_slider_pane_t3

0x8a53,	// (0x0007b3d4) main_cset_slider_pane_t4

0x8a6d,	// (0x0007b3ee) main_cset_slider_pane_t5

0x8a87,	// (0x0007b408) main_cset_slider_pane_t6

0x8a9c,	// (0x0007b41d) main_cset_slider_pane_t7

0x000e,

0xf9a0,	// (0x00082321) main_cset_slider_pane_t

0x8ba0,	// (0x0007b521) cset_list_set_pane_ParamLimits

0x8ba0,	// (0x0007b521) cset_list_set_pane

0x8bb1,	// (0x0007b532) aid_position_infowindow_above

0x8bb9,	// (0x0007b53a) aid_position_infowindow_below

0x8bc1,	// (0x0007b542) cset_list_set_pane_g1_ParamLimits

0x8bc1,	// (0x0007b542) cset_list_set_pane_g1

0x1027,	// (0x000739a8) cset_list_set_pane_g3_ParamLimits

0x1027,	// (0x000739a8) cset_list_set_pane_g3

0x0001,

0xf9bf,	// (0x00082340) cset_list_set_pane_g_ParamLimits

0xf9bf,	// (0x00082340) cset_list_set_pane_g

0x1036,	// (0x000739b7) cset_list_set_pane_t1_ParamLimits

0x1036,	// (0x000739b7) cset_list_set_pane_t1

0xaeed,	// (0x0007d86e) list_highlight_pane_cp021_ParamLimits

0xaeed,	// (0x0007d86e) list_highlight_pane_cp021

0x53e2,	// (0x00077d63) cset_slider_pane_g1

0x53f4,	// (0x00077d75) cset_slider_pane_g2

0x53eb,	// (0x00077d6c) cset_slider_pane_g3

0x0002,

0xf9c4,	// (0x00082345) cset_slider_pane_g

0xec9e,	// (0x0008161f) aid_area_touch_cam4_zoom

0xeca6,	// (0x00081627) cam4_zoom_cont_pane

0xecae,	// (0x0008162f) cam4_zoom_pane_g1

0xecb6,	// (0x00081637) cam4_zoom_pane_g2

0x8bcd,	// (0x0007b54e) cam4_zoom_pane_g3

0x0002,

0xf9cb,	// (0x0008234c) cam4_zoom_pane_g

0xf098,	// (0x00081a19) cam4_zoom_cont_pane_g1

0xf0a1,	// (0x00081a22) cam4_zoom_cont_pane_g2

0xf0aa,	// (0x00081a2b) cam4_zoom_cont_pane_g3

0x0002,

0xf9d2,	// (0x00082353) cam4_zoom_cont_pane_g

0x8153,	// (0x0007aad4) call4_image_pane_ParamLimits

0x8153,	// (0x0007aad4) call4_image_pane

0xcc6d,	// (0x0007f5ee) call4_windows_conf_pane_ParamLimits

0xcc80,	// (0x0007f601) popup_call4_audio_in_window_ParamLimits

0xcc80,	// (0x0007f601) popup_call4_audio_in_window

0x1a31,	// (0x000743b2) bg_popup_call2_act_pane_cp02

0xee18,	// (0x00081799) call4_list_conf_pane

0xc350,	// (0x0007ecd1) call4_image_pane_g1

0xc350,	// (0x0007ecd1) call4_image_pane_g2

0x0001,

0xf6eb,	// (0x0008206c) call4_image_pane_g

0xf0b3,	// (0x00081a34) list_single_graphic_popup_conf4_pane_ParamLimits

0xf0b3,	// (0x00081a34) list_single_graphic_popup_conf4_pane

0x1a31,	// (0x000743b2) list_highlight_pane_cp022

0xccbd,	// (0x0007f63e) list_single_graphic_popup_conf4_pane_g1

0x49db,	// (0x0007735c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d9,	// (0x0008235a) list_single_graphic_popup_conf4_pane_g

0xccc5,	// (0x0007f646) list_single_graphic_popup_conf4_pane_t1

0x3505,	// (0x00075e86) popup_vtel_slider_window_ParamLimits

0x3505,	// (0x00075e86) popup_vtel_slider_window

0xcc37,	// (0x0007f5b8) dialer2_ne_pane_t2_ParamLimits

0xcc37,	// (0x0007f5b8) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x00082249) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x00082249) dialer2_ne_pane_t

0xc13d,	// (0x0007eabe) bg_popup_sub_pane_cp010_ParamLimits

0xc13d,	// (0x0007eabe) bg_popup_sub_pane_cp010

0x8bd5,	// (0x0007b556) popup_vtel_slider_window_g1_ParamLimits

0x8bd5,	// (0x0007b556) popup_vtel_slider_window_g1

0x8be8,	// (0x0007b569) popup_vtel_slider_window_g2_ParamLimits

0x8be8,	// (0x0007b569) popup_vtel_slider_window_g2

0x0003,

0xf9de,	// (0x0008235f) popup_vtel_slider_window_g_ParamLimits

0xf9de,	// (0x0008235f) popup_vtel_slider_window_g

0x8c3c,	// (0x0007b5bd) vtel_slider_pane_ParamLimits

0x8c3c,	// (0x0007b5bd) vtel_slider_pane

0x8c5e,	// (0x0007b5df) vtel_slider_pane_g1_ParamLimits

0x8c5e,	// (0x0007b5df) vtel_slider_pane_g1

0x8c72,	// (0x0007b5f3) vtel_slider_pane_g2_ParamLimits

0x8c72,	// (0x0007b5f3) vtel_slider_pane_g2

0x8c8a,	// (0x0007b60b) vtel_slider_pane_g3_ParamLimits

0x8c8a,	// (0x0007b60b) vtel_slider_pane_g3

0x8c5e,	// (0x0007b5df) vtel_slider_pane_g4_ParamLimits

0x8c5e,	// (0x0007b5df) vtel_slider_pane_g4

0x8ca0,	// (0x0007b621) vtel_slider_pane_g5_ParamLimits

0x8ca0,	// (0x0007b621) vtel_slider_pane_g5

0x0004,

0xf9e7,	// (0x00082368) vtel_slider_pane_g_ParamLimits

0xf9e7,	// (0x00082368) vtel_slider_pane_g

0xaeed,	// (0x0007d86e) main_gallery2_pane

0x8468,	// (0x0007ade9) aid_size_row_itut2_dropdow_list_ParamLimits

0x8468,	// (0x0007ade9) aid_size_row_itut2_dropdow_list

0x84cb,	// (0x0007ae4c) grid_vitu2_function_top_pane_ParamLimits

0x84cb,	// (0x0007ae4c) grid_vitu2_function_top_pane

0x8510,	// (0x0007ae91) popup_vitu2_dropdown_list_window_ParamLimits

0x8510,	// (0x0007ae91) popup_vitu2_dropdown_list_window

0x852c,	// (0x0007aead) popup_vitu2_match_list_window

0x8cb6,	// (0x0007b637) cell_vitu2_function_top_pane_ParamLimits

0x8cb6,	// (0x0007b637) cell_vitu2_function_top_pane

0x8cce,	// (0x0007b64f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x8cce,	// (0x0007b64f) cell_vitu2_function_top_pane_cp01

0x8cea,	// (0x0007b66b) cell_vitu2_function_top_wide_pane_ParamLimits

0x8cea,	// (0x0007b66b) cell_vitu2_function_top_wide_pane

0xaeed,	// (0x0007d86e) bg_button_pane_cp012

0x8d06,	// (0x0007b687) cell_vitu2_function_top_pane_g1

0xecbe,	// (0x0008163f) bg_button_pane_cp013_ParamLimits

0xecbe,	// (0x0008163f) bg_button_pane_cp013

0x8d1a,	// (0x0007b69b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8d1a,	// (0x0007b69b) cell_vitu2_function_top_wide_pane_g1

0xaeed,	// (0x0007d86e) bg_popup_sub_pane_cp20

0x8d32,	// (0x0007b6b3) list_vitu2_match_list_pane

0xee93,	// (0x00081814) bg_popup_sub_pane_cp20_g1

0xee9b,	// (0x0008181c) bg_popup_sub_pane_cp20_g2

0x390f,	// (0x00076290) bg_popup_sub_pane_cp20_g3

0xeea3,	// (0x00081824) bg_popup_sub_pane_cp20_g4

0x38ef,	// (0x00076270) bg_popup_sub_pane_cp20_g5

0xcce9,	// (0x0007f66a) bg_popup_sub_pane_cp20_g6

0xeeb3,	// (0x00081834) bg_popup_sub_pane_cp20_g7

0xeebb,	// (0x0008183c) bg_popup_sub_pane_cp20_g8

0xeec3,	// (0x00081844) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f2,	// (0x00082373) bg_popup_sub_pane_cp20_g

0xecda,	// (0x0008165b) list_vitu2_match_list_item_pane_ParamLimits

0xecda,	// (0x0008165b) list_vitu2_match_list_item_pane

0xecec,	// (0x0008166d) list_vitu2_match_list_item_pane_t1

0x1a31,	// (0x000743b2) bg_popup_sub_pane_cp21

0x48e4,	// (0x00077265) grid_vitu2_dropdown_list_pane

0x8d50,	// (0x0007b6d1) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8d50,	// (0x0007b6d1) cell_vitu2_dropdown_list_char_pane

0x8d71,	// (0x0007b6f2) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8d71,	// (0x0007b6f2) cell_vitu2_dropdown_list_ctrl_pane

0xccfd,	// (0x0007f67e) cell_vitu2_dropdown_list_char_pane_g1

0xcd06,	// (0x0007f687) cell_vitu2_dropdown_list_char_pane_g2

0xcd0f,	// (0x0007f690) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0f,	// (0x00082390) cell_vitu2_dropdown_list_char_pane_g

0x8d9d,	// (0x0007b71e) cell_vitu2_dropdown_list_char_pane_t1

0x8dab,	// (0x0007b72c) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8dab,	// (0x0007b72c) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8db8,	// (0x0007b739) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8db8,	// (0x0007b739) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8dc5,	// (0x0007b746) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8dc5,	// (0x0007b746) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8dd2,	// (0x0007b753) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8dd2,	// (0x0007b753) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc57f,	// (0x0007ef00) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc57f,	// (0x0007ef00) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa16,	// (0x00082397) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa16,	// (0x00082397) cell_vitu2_dropdown_list_ctrl_pane_g

0x8dee,	// (0x0007b76f) aid_size_cell_gallery2_ParamLimits

0x8dee,	// (0x0007b76f) aid_size_cell_gallery2

0x8e0c,	// (0x0007b78d) grid_gallery2_pane_ParamLimits

0x8e0c,	// (0x0007b78d) grid_gallery2_pane

0x7a0d,	// (0x0007a38e) scroll_pane_cp029_ParamLimits

0x7a0d,	// (0x0007a38e) scroll_pane_cp029

0x8e20,	// (0x0007b7a1) cell_gallery2_pane_ParamLimits

0x8e20,	// (0x0007b7a1) cell_gallery2_pane

0xcd18,	// (0x0007f699) cell_gallery2_pane_g2

0x8e79,	// (0x0007b7fa) cell_gallery2_pane_g3

0xcd20,	// (0x0007f6a1) cell_gallery2_pane_g4

0xcd28,	// (0x0007f6a9) cell_gallery2_pane_g5

0x2fc7,	// (0x00075948) grid_highlight_pane_cp10

0x852c,	// (0x0007aead) popup_vitu2_match_list_window_ParamLimits

0x853d,	// (0x0007aebe) popup_vitu2_query_window_ParamLimits

0x853d,	// (0x0007aebe) popup_vitu2_query_window

0x1a31,	// (0x000743b2) bg_vitu2_candi_button_pane

0xccfd,	// (0x0007f67e) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcd06,	// (0x0007f687) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcd0f,	// (0x0007f690) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x107a,	// (0x000739fb) bg_button_pane_cp015

0x8e81,	// (0x0007b802) bg_button_pane_cp016

0x8e93,	// (0x0007b814) bg_button_pane_cp017

0xbe3c,	// (0x0007e7bd) bg_popup_sub_pane_cp22

0xcd30,	// (0x0007f6b1) popup_vitu2_query_window_g1

0x10a9,	// (0x00073a2a) popup_vitu2_query_window_g2

0x0002,

0xfa21,	// (0x000823a2) popup_vitu2_query_window_g

0x10c4,	// (0x00073a45) popup_vitu2_query_window_t1_ParamLimits

0x10c4,	// (0x00073a45) popup_vitu2_query_window_t1

0x10f7,	// (0x00073a78) popup_vitu2_query_window_t2_ParamLimits

0x10f7,	// (0x00073a78) popup_vitu2_query_window_t2

0x1109,	// (0x00073a8a) popup_vitu2_query_window_t3_ParamLimits

0x1109,	// (0x00073a8a) popup_vitu2_query_window_t3

0x8eb5,	// (0x0007b836) popup_vitu2_query_window_t4_ParamLimits

0x8eb5,	// (0x0007b836) popup_vitu2_query_window_t4

0x8ed2,	// (0x0007b853) popup_vitu2_query_window_t5_ParamLimits

0x8ed2,	// (0x0007b853) popup_vitu2_query_window_t5

0x0006,

0xfa28,	// (0x000823a9) popup_vitu2_query_window_t_ParamLimits

0xfa28,	// (0x000823a9) popup_vitu2_query_window_t

0xef95,	// (0x00081916) main_cset_text_pane

0x8908,	// (0x0007b289) aid_area_touch_slider_ParamLimits

0x8924,	// (0x0007b2a5) cset_slider_pane_ParamLimits

0x894e,	// (0x0007b2cf) main_cset_slider_pane_g1_ParamLimits

0x8963,	// (0x0007b2e4) main_cset_slider_pane_g2_ParamLimits

0xefb6,	// (0x00081937) main_cset_slider_pane_g3_ParamLimits

0xefb6,	// (0x00081937) main_cset_slider_pane_g3

0x8978,	// (0x0007b2f9) main_cset_slider_pane_g4_ParamLimits

0x8978,	// (0x0007b2f9) main_cset_slider_pane_g4

0x8987,	// (0x0007b308) main_cset_slider_pane_g5_ParamLimits

0x8987,	// (0x0007b308) main_cset_slider_pane_g5

0x8993,	// (0x0007b314) main_cset_slider_pane_g6_ParamLimits

0x8993,	// (0x0007b314) main_cset_slider_pane_g6

0xf97b,	// (0x000822fc) main_cset_slider_pane_g_ParamLimits

0xefe6,	// (0x00081967) main_cset_slider_pane_t1_ParamLimits

0x8a1f,	// (0x0007b3a0) main_cset_slider_pane_t2_ParamLimits

0x8a39,	// (0x0007b3ba) main_cset_slider_pane_t3_ParamLimits

0x8a53,	// (0x0007b3d4) main_cset_slider_pane_t4_ParamLimits

0x8a6d,	// (0x0007b3ee) main_cset_slider_pane_t5_ParamLimits

0x8a87,	// (0x0007b408) main_cset_slider_pane_t6_ParamLimits

0x8a9c,	// (0x0007b41d) main_cset_slider_pane_t7_ParamLimits

0x8ac6,	// (0x0007b447) main_cset_slider_pane_t8_ParamLimits

0x8ac6,	// (0x0007b447) main_cset_slider_pane_t8

0x8aee,	// (0x0007b46f) main_cset_slider_pane_t9_ParamLimits

0x8aee,	// (0x0007b46f) main_cset_slider_pane_t9

0x8b16,	// (0x0007b497) main_cset_slider_pane_t10_ParamLimits

0x8b16,	// (0x0007b497) main_cset_slider_pane_t10

0x8b3e,	// (0x0007b4bf) main_cset_slider_pane_t11_ParamLimits

0x8b3e,	// (0x0007b4bf) main_cset_slider_pane_t11

0x8b66,	// (0x0007b4e7) main_cset_slider_pane_t12_ParamLimits

0x8b66,	// (0x0007b4e7) main_cset_slider_pane_t12

0x8b83,	// (0x0007b504) main_cset_slider_pane_t13_ParamLimits

0x8b83,	// (0x0007b504) main_cset_slider_pane_t13

0xf9a0,	// (0x00082321) main_cset_slider_pane_t_ParamLimits

0x1a31,	// (0x000743b2) bg_popup_sub_pane_cp011

0xcd3c,	// (0x0007f6bd) main_cset_text_pane_g1

0xcd44,	// (0x0007f6c5) main_cset_text_pane_t1

0xcd52,	// (0x0007f6d3) main_cset_text_pane_t2

0xcd60,	// (0x0007f6e1) main_cset_text_pane_t3

0xcd6e,	// (0x0007f6ef) main_cset_text_pane_t4

0xcd7c,	// (0x0007f6fd) main_cset_text_pane_t5

0xcd8a,	// (0x0007f70b) main_cset_text_pane_t6

0xcd98,	// (0x0007f719) main_cset_text_pane_t7

0x0006,

0xfa37,	// (0x000823b8) main_cset_text_pane_t

0x1a31,	// (0x000743b2) main_cam4_burst_pane

0x1a31,	// (0x000743b2) main_cam5_pane

0x8856,	// (0x0007b1d7) bg_button_pane_cp019

0x885f,	// (0x0007b1e0) bg_button_pane_cp020

0xefc2,	// (0x00081943) main_cset_slider_pane_g7_ParamLimits

0xefc2,	// (0x00081943) main_cset_slider_pane_g7

0xefce,	// (0x0008194f) main_cset_slider_pane_g8_ParamLimits

0xefce,	// (0x0008194f) main_cset_slider_pane_g8

0x89a7,	// (0x0007b328) main_cset_slider_pane_g9_ParamLimits

0x89a7,	// (0x0007b328) main_cset_slider_pane_g9

0x89b3,	// (0x0007b334) main_cset_slider_pane_g10_ParamLimits

0x89b3,	// (0x0007b334) main_cset_slider_pane_g10

0x89bf,	// (0x0007b340) main_cset_slider_pane_g11_ParamLimits

0x89bf,	// (0x0007b340) main_cset_slider_pane_g11

0x89cb,	// (0x0007b34c) main_cset_slider_pane_g12_ParamLimits

0x89cb,	// (0x0007b34c) main_cset_slider_pane_g12

0x89d7,	// (0x0007b358) main_cset_slider_pane_g13_ParamLimits

0x89d7,	// (0x0007b358) main_cset_slider_pane_g13

0x89e3,	// (0x0007b364) main_cset_slider_pane_g14_ParamLimits

0x89e3,	// (0x0007b364) main_cset_slider_pane_g14

0x89ef,	// (0x0007b370) main_cset_slider_pane_g15_ParamLimits

0x89ef,	// (0x0007b370) main_cset_slider_pane_g15

0xf014,	// (0x00081995) main_cset_slider_pane_t14_ParamLimits

0xf014,	// (0x00081995) main_cset_slider_pane_t14

0xf04d,	// (0x000819ce) main_cset_slider_pane_t15_ParamLimits

0xf04d,	// (0x000819ce) main_cset_slider_pane_t15

0x8eef,	// (0x0007b870) aid_cam4_burst_size_cell_ParamLimits

0x8eef,	// (0x0007b870) aid_cam4_burst_size_cell

0x8f0f,	// (0x0007b890) grid_cam4_burst_pane_ParamLimits

0x8f0f,	// (0x0007b890) grid_cam4_burst_pane

0x8f35,	// (0x0007b8b6) linegrid_cam4_burst_pane_ParamLimits

0x8f35,	// (0x0007b8b6) linegrid_cam4_burst_pane

0x8f57,	// (0x0007b8d8) scroll_pane_cp30_ParamLimits

0x8f57,	// (0x0007b8d8) scroll_pane_cp30

0x8f63,	// (0x0007b8e4) cell_cam4_burst_pane_ParamLimits

0x8f63,	// (0x0007b8e4) cell_cam4_burst_pane

0xcda6,	// (0x0007f727) linegrid_cam4_burst_pane_g1_ParamLimits

0xcda6,	// (0x0007f727) linegrid_cam4_burst_pane_g1

0x8faa,	// (0x0007b92b) linegrid_cam4_burst_pane_g2_ParamLimits

0x8faa,	// (0x0007b92b) linegrid_cam4_burst_pane_g2

0xcdb3,	// (0x0007f734) linegrid_cam4_burst_pane_g3_ParamLimits

0xcdb3,	// (0x0007f734) linegrid_cam4_burst_pane_g3

0x0002,

0xfa46,	// (0x000823c7) linegrid_cam4_burst_pane_g_ParamLimits

0xfa46,	// (0x000823c7) linegrid_cam4_burst_pane_g

0x8fbb,	// (0x0007b93c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8fbb,	// (0x0007b93c) linegrid_cam4_burst_pane_g3_copy1

0xcdc0,	// (0x0007f741) linegrid_cam4_burst_pane_g4_ParamLimits

0xcdc0,	// (0x0007f741) linegrid_cam4_burst_pane_g4

0x8fd5,	// (0x0007b956) linegrid_cam4_burst_pane_g5_ParamLimits

0x8fd5,	// (0x0007b956) linegrid_cam4_burst_pane_g5

0x8fe6,	// (0x0007b967) linegrid_cam4_burst_pane_g6_ParamLimits

0x8fe6,	// (0x0007b967) linegrid_cam4_burst_pane_g6

0xcdcd,	// (0x0007f74e) linegrid_cam4_burst_pane_g7_ParamLimits

0xcdcd,	// (0x0007f74e) linegrid_cam4_burst_pane_g7

0x8ff7,	// (0x0007b978) cell_cam4_burst_pane_g1

0xcde6,	// (0x0007f767) main_cam5_pane_t1_ParamLimits

0xcde6,	// (0x0007f767) main_cam5_pane_t1

0xcdf8,	// (0x0007f779) main_cam5_pane_t2_ParamLimits

0xcdf8,	// (0x0007f779) main_cam5_pane_t2

0xce0a,	// (0x0007f78b) main_cam5_pane_t3_ParamLimits

0xce0a,	// (0x0007f78b) main_cam5_pane_t3

0xce1c,	// (0x0007f79d) main_cam5_pane_t4_ParamLimits

0xce1c,	// (0x0007f79d) main_cam5_pane_t4

0xce32,	// (0x0007f7b3) main_cam5_pane_t5_ParamLimits

0xce32,	// (0x0007f7b3) main_cam5_pane_t5

0xce44,	// (0x0007f7c5) main_cam5_pane_t6_ParamLimits

0xce44,	// (0x0007f7c5) main_cam5_pane_t6

0xce56,	// (0x0007f7d7) main_cam5_pane_t7_ParamLimits

0xce56,	// (0x0007f7d7) main_cam5_pane_t7

0xce68,	// (0x0007f7e9) main_cam5_pane_t8_ParamLimits

0xce68,	// (0x0007f7e9) main_cam5_pane_t8

0xce84,	// (0x0007f805) main_cam5_pane_t9_ParamLimits

0xce84,	// (0x0007f805) main_cam5_pane_t9

0xce96,	// (0x0007f817) main_cam5_pane_t10_ParamLimits

0xce96,	// (0x0007f817) main_cam5_pane_t10

0xcea8,	// (0x0007f829) main_cam5_pane_t11_ParamLimits

0xcea8,	// (0x0007f829) main_cam5_pane_t11

0xceba,	// (0x0007f83b) main_cam5_pane_t12_ParamLimits

0xceba,	// (0x0007f83b) main_cam5_pane_t12

0xcecf,	// (0x0007f850) main_cam5_pane_t13_ParamLimits

0xcecf,	// (0x0007f850) main_cam5_pane_t13

0x000c,

0xfa52,	// (0x000823d3) main_cam5_pane_t_ParamLimits

0xfa52,	// (0x000823d3) main_cam5_pane_t

0x1bdf,	// (0x00074560) popup_scut_keymap_window_ParamLimits

0x1bdf,	// (0x00074560) popup_scut_keymap_window

0x900c,	// (0x0007b98d) aid_size_cell_brow_shortcut

0x2fc7,	// (0x00075948) bg_popup_window_pane_cp010

0x9018,	// (0x0007b999) grid_scut_pane

0x9022,	// (0x0007b9a3) cell_scut_pane_ParamLimits

0x9022,	// (0x0007b9a3) cell_scut_pane

0x9037,	// (0x0007b9b8) cell_scut_pane_g1

0xceec,	// (0x0007f86d) cell_scut_pane_t1

0xcefb,	// (0x0007f87c) cell_scut_pane_t2

0x9040,	// (0x0007b9c1) cell_scut_pane_t3

0x0002,

0xfa6d,	// (0x000823ee) cell_scut_pane_t

0x7140,	// (0x00079ac1) main_mup3_pane_g8_ParamLimits

0x7140,	// (0x00079ac1) main_mup3_pane_g8

0x847b,	// (0x0007adfc) area_vitu2_query_pane_ParamLimits

0x847b,	// (0x0007adfc) area_vitu2_query_pane

0x108a,	// (0x00073a0b) input_focus_pane_cp08

0xcf0a,	// (0x0007f88b) area_vitu2_query_pane_g1

0x1187,	// (0x00073b08) area_vitu2_query_pane_g2

0x0001,

0xfa74,	// (0x000823f5) area_vitu2_query_pane_g

0x904e,	// (0x0007b9cf) area_vitu2_query_pane_t1_ParamLimits

0x904e,	// (0x0007b9cf) area_vitu2_query_pane_t1

0x9060,	// (0x0007b9e1) area_vitu2_query_pane_t2_ParamLimits

0x9060,	// (0x0007b9e1) area_vitu2_query_pane_t2

0x1196,	// (0x00073b17) area_vitu2_query_pane_t3_ParamLimits

0x1196,	// (0x00073b17) area_vitu2_query_pane_t3

0xcf16,	// (0x0007f897) area_vitu2_query_pane_t4_ParamLimits

0xcf16,	// (0x0007f897) area_vitu2_query_pane_t4

0xcf3e,	// (0x0007f8bf) area_vitu2_query_pane_t5_ParamLimits

0xcf3e,	// (0x0007f8bf) area_vitu2_query_pane_t5

0xcf66,	// (0x0007f8e7) area_vitu2_query_pane_t6_ParamLimits

0xcf66,	// (0x0007f8e7) area_vitu2_query_pane_t6

0x0006,

0xfa79,	// (0x000823fa) area_vitu2_query_pane_t_ParamLimits

0xfa79,	// (0x000823fa) area_vitu2_query_pane_t

0x9072,	// (0x0007b9f3) bg_button_pane_cp018

0x907f,	// (0x0007ba00) bg_button_pane_cp021

0x11be,	// (0x00073b3f) bg_button_pane_cp022

0x11cd,	// (0x00073b4e) input_focus_pane_cp09

0x4d36,	// (0x000776b7) aid_size_touch_mv_arrow_left

0x4d5a,	// (0x000776db) aid_size_touch_mv_arrow_right

0x8a07,	// (0x0007b388) main_cset_slider_pane_g16_ParamLimits

0x8a07,	// (0x0007b388) main_cset_slider_pane_g16

0x8a13,	// (0x0007b394) main_cset_slider_pane_g17_ParamLimits

0x8a13,	// (0x0007b394) main_cset_slider_pane_g17

0x8ff7,	// (0x0007b978) cell_cam4_burst_pane_g1_ParamLimits

0x1a31,	// (0x000743b2) compa_mode_pane

0x8bf8,	// (0x0007b579) popup_vtel_slider_window_g3_ParamLimits

0x8bf8,	// (0x0007b579) popup_vtel_slider_window_g3

0x8c0f,	// (0x0007b590) popup_vtel_slider_window_g4_ParamLimits

0x8c0f,	// (0x0007b590) popup_vtel_slider_window_g4

0x8c26,	// (0x0007b5a7) popup_vtel_slider_window_t1_ParamLimits

0x8c26,	// (0x0007b5a7) popup_vtel_slider_window_t1

0x1a31,	// (0x000743b2) main_cl_pane

0xbe6c,	// (0x0007e7ed) popup_imed_adjust2_window_ParamLimits

0xbe3c,	// (0x0007e7bd) bg_tb_trans_pane_cp05_ParamLimits

0xc858,	// (0x0007f1d9) popup_imed_adjust2_window_g1_ParamLimits

0xc867,	// (0x0007f1e8) popup_imed_adjust2_window_g2_ParamLimits

0xc867,	// (0x0007f1e8) popup_imed_adjust2_window_g2

0xc873,	// (0x0007f1f4) popup_imed_adjust2_window_g3_ParamLimits

0xc873,	// (0x0007f1f4) popup_imed_adjust2_window_g3

0x0002,

0xf7ee,	// (0x0008216f) popup_imed_adjust2_window_g_ParamLimits

0xf7ee,	// (0x0008216f) popup_imed_adjust2_window_g

0xc87f,	// (0x0007f200) popup_imed_adjust2_window_t1_ParamLimits

0xc897,	// (0x0007f218) slider_imed_adjust_pane_ParamLimits

0xc8ab,	// (0x0007f22c) slider_imed_adjust_pane_g1_ParamLimits

0xc8bb,	// (0x0007f23c) slider_imed_adjust_pane_g2_ParamLimits

0xc8cb,	// (0x0007f24c) slider_imed_adjust_pane_g3_ParamLimits

0xc8dc,	// (0x0007f25d) slider_imed_adjust_pane_g4_ParamLimits

0xf7f5,	// (0x00082176) slider_imed_adjust_pane_g_ParamLimits

0x8252,	// (0x0007abd3) aid_touch_area_cam4_ParamLimits

0x8252,	// (0x0007abd3) aid_touch_area_cam4

0xebc1,	// (0x00081542) battery_pane_cp01

0x82ea,	// (0x0007ac6b) main_camera4_pane_g6_ParamLimits

0x82ea,	// (0x0007ac6b) main_camera4_pane_g6

0x830b,	// (0x0007ac8c) main_camera4_pane_t2_ParamLimits

0x830b,	// (0x0007ac8c) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0008227d) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0008227d) main_camera4_pane_t

0x8339,	// (0x0007acba) aid_touch_area_vid4_ParamLimits

0x8339,	// (0x0007acba) aid_touch_area_vid4

0x837b,	// (0x0007acfc) main_video4_pane_g5_ParamLimits

0x837b,	// (0x0007acfc) main_video4_pane_g5

0x839c,	// (0x0007ad1d) vid4_progress_pane_ParamLimits

0x839c,	// (0x0007ad1d) vid4_progress_pane

0xefda,	// (0x0008195b) main_cset_slider_pane_g18_ParamLimits

0xefda,	// (0x0008195b) main_cset_slider_pane_g18

0xcdda,	// (0x0007f75b) cell_cam4_burst_pane_g2_ParamLimits

0xcdda,	// (0x0007f75b) cell_cam4_burst_pane_g2

0x0001,

0xfa4d,	// (0x000823ce) cell_cam4_burst_pane_g_ParamLimits

0xfa4d,	// (0x000823ce) cell_cam4_burst_pane_g

0x2659,	// (0x00074fda) bg_cl_pane_ParamLimits

0x2659,	// (0x00074fda) bg_cl_pane

0x908b,	// (0x0007ba0c) cl_header_pane_ParamLimits

0x908b,	// (0x0007ba0c) cl_header_pane

0x909f,	// (0x0007ba20) cl_listscroll_pane_ParamLimits

0x909f,	// (0x0007ba20) cl_listscroll_pane

0xcfb2,	// (0x0007f933) bg_cl_pane_g1

0xcfba,	// (0x0007f93b) bg_cl_pane_g2

0xcfc2,	// (0x0007f943) bg_cl_pane_g3

0xcfca,	// (0x0007f94b) bg_cl_pane_g4

0xcfd2,	// (0x0007f953) bg_cl_pane_g5

0xcfda,	// (0x0007f95b) bg_cl_pane_g6

0xcfe2,	// (0x0007f963) bg_cl_pane_g7

0xcfea,	// (0x0007f96b) bg_cl_pane_g8

0xcff2,	// (0x0007f973) bg_cl_pane_g9

0x0008,

0xfa88,	// (0x00082409) bg_cl_pane_g

0x90af,	// (0x0007ba30) aid_height_cl_leading_ParamLimits

0x90af,	// (0x0007ba30) aid_height_cl_leading

0x90bb,	// (0x0007ba3c) aid_height_cl_text_ParamLimits

0x90bb,	// (0x0007ba3c) aid_height_cl_text

0xaeed,	// (0x0007d86e) bg_cl_header_pane_ParamLimits

0xaeed,	// (0x0007d86e) bg_cl_header_pane

0x90da,	// (0x0007ba5b) cl_header_pane_g1_ParamLimits

0x90da,	// (0x0007ba5b) cl_header_pane_g1

0x90f0,	// (0x0007ba71) cl_header_pane_t1_ParamLimits

0x90f0,	// (0x0007ba71) cl_header_pane_t1

0xcffa,	// (0x0007f97b) cl_list_pane

0xd003,	// (0x0007f984) hc_scroll_pane_cp01

0x38ef,	// (0x00076270) bg_cl_header_pane_g1

0xee93,	// (0x00081814) bg_cl_header_pane_g2

0x390f,	// (0x00076290) bg_cl_header_pane_g3

0xeea3,	// (0x00081824) bg_cl_header_pane_g4

0xee9b,	// (0x0008181c) bg_cl_header_pane_g5

0xcce9,	// (0x0007f66a) bg_cl_header_pane_g6

0xeebb,	// (0x0008183c) bg_cl_header_pane_g7

0xeec3,	// (0x00081844) bg_cl_header_pane_g8

0xeeb3,	// (0x00081834) bg_cl_header_pane_g9

0x0008,

0xfa9b,	// (0x0008241c) bg_cl_header_pane_g

0x9109,	// (0x0007ba8a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9109,	// (0x0007ba8a) hc_cl_list_double_graphic_heading_pane

0x9119,	// (0x0007ba9a) hc_cl_list_single_graphic_pane_ParamLimits

0x9119,	// (0x0007ba9a) hc_cl_list_single_graphic_pane

0x912c,	// (0x0007baad) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x912c,	// (0x0007baad) hc_cl_list_single_graphic_pane_g1

0x9138,	// (0x0007bab9) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9138,	// (0x0007bab9) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaae,	// (0x0008242f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaae,	// (0x0008242f) hc_cl_list_single_graphic_pane_g

0x914c,	// (0x0007bacd) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x914c,	// (0x0007bacd) hc_cl_list_single_graphic_pane_t1

0x912c,	// (0x0007baad) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x912c,	// (0x0007baad) hc_cl_list_double_graphic_heading_pane_g1

0x9161,	// (0x0007bae2) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9161,	// (0x0007bae2) hc_cl_list_double_graphic_heading_pane_g2

0x9175,	// (0x0007baf6) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9175,	// (0x0007baf6) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab3,	// (0x00082434) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab3,	// (0x00082434) hc_cl_list_double_graphic_heading_pane_g

0x9189,	// (0x0007bb0a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9189,	// (0x0007bb0a) hc_cl_list_double_graphic_heading_pane_t1

0x919e,	// (0x0007bb1f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x919e,	// (0x0007bb1f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaba,	// (0x0008243b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaba,	// (0x0008243b) hc_cl_list_double_graphic_heading_pane_t

0xed06,	// (0x00081687) vid4_progress_pane_g1

0xed15,	// (0x00081696) vid4_progress_pane_g2

0xed24,	// (0x000816a5) vid4_progress_pane_g3

0xed33,	// (0x000816b4) vid4_progress_pane_g4

0x0004,

0xfabf,	// (0x00082440) vid4_progress_pane_g

0xed3f,	// (0x000816c0) vid4_progress_pane_t1

0xed55,	// (0x000816d6) vid4_progress_pane_t2

0x0002,

0xfaca,	// (0x0008244b) vid4_progress_pane_t

0xed7f,	// (0x00081700) wait_bar_pane_cp07

0xc14b,	// (0x0007eacc) blid_firmament_pane_ParamLimits

0xc18c,	// (0x0007eb0d) popup_blid_sat_info2_window_g1

0xc1b0,	// (0x0007eb31) popup_blid_sat_info2_window_t3

0xc1be,	// (0x0007eb3f) popup_blid_sat_info2_window_t4

0xc1cc,	// (0x0007eb4d) popup_blid_sat_info2_window_t5

0xc1da,	// (0x0007eb5b) popup_blid_sat_info2_window_t6

0xc1ea,	// (0x0007eb6b) popup_blid_sat_info2_window_t7

0xc1f8,	// (0x0007eb79) popup_blid_sat_info2_window_t8

0xc206,	// (0x0007eb87) popup_blid_sat_info2_window_t9

0xc214,	// (0x0007eb95) popup_blid_sat_info2_window_t10

0xc2d0,	// (0x0007ec51) aid_firma_cardinal_ParamLimits

0xc2e4,	// (0x0007ec65) blid_firmament_pane_t1_ParamLimits

0xc2fb,	// (0x0007ec7c) blid_firmament_pane_t2_ParamLimits

0xc312,	// (0x0007ec93) blid_firmament_pane_t3_ParamLimits

0xc329,	// (0x0007ecaa) blid_firmament_pane_t4_ParamLimits

0xf6e2,	// (0x00082063) blid_firmament_pane_t_ParamLimits

0xc340,	// (0x0007ecc1) blid_sat_info_pane_ParamLimits

0xaeed,	// (0x0007d86e) main_cam_set_pane_ParamLimits

0x798e,	// (0x0007a30f) aid_size_cell_colour_35_ParamLimits

0x79ae,	// (0x0007a32f) aid_size_cell_colour_112_ParamLimits

0x79ce,	// (0x0007a34f) aid_size_cell_effect_ParamLimits

0xbe3c,	// (0x0007e7bd) bg_tb_trans_pane_cp02_ParamLimits

0x4623,	// (0x00076fa4) heading_imed_pane_ParamLimits

0x79ee,	// (0x0007a36f) listscroll_imed_pane_ParamLimits

0xb422,	// (0x0007dda3) popup_call2_audio_first_window_g5_ParamLimits

0xb422,	// (0x0007dda3) popup_call2_audio_first_window_g5

0x7f0b,	// (0x0007a88c) aid_size_touch_image3_arrow_left_ParamLimits

0x7f0b,	// (0x0007a88c) aid_size_touch_image3_arrow_left

0x7f2b,	// (0x0007a8ac) aid_size_touch_image3_arrow_right_ParamLimits

0x7f2b,	// (0x0007a8ac) aid_size_touch_image3_arrow_right

0xed6a,	// (0x000816eb) vid4_progress_pane_t3

0x7cc2,	// (0x0007a643) main_hwr_training_symbol_option_pane_ParamLimits

0x7cc2,	// (0x0007a643) main_hwr_training_symbol_option_pane

0xcb37,	// (0x0007f4b8) popup_hwr_training_preview_window_ParamLimits

0xcb37,	// (0x0007f4b8) popup_hwr_training_preview_window

0x7cde,	// (0x0007a65f) hwr_training_navi_pane_g5_ParamLimits

0x7cde,	// (0x0007a65f) hwr_training_navi_pane_g5

0xee81,	// (0x00081802) popup_char_count_window

0xaeed,	// (0x0007d86e) bg_popup_sub_pane_cp20_ParamLimits

0x8d32,	// (0x0007b6b3) list_vitu2_match_list_pane_ParamLimits

0x8d41,	// (0x0007b6c2) vitu2_page_scroll_pane_ParamLimits

0x8d41,	// (0x0007b6c2) vitu2_page_scroll_pane

0xd02f,	// (0x0007f9b0) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd02f,	// (0x0007f9b0) list_single_hwr_training_symbol_option_pane

0xd042,	// (0x0007f9c3) list_single_hwr_training_symbol_option_pane_g1

0xd04a,	// (0x0007f9cb) list_single_hwr_training_symbol_option_pane_t1

0xd058,	// (0x0007f9d9) bg_button_pane_cp023

0xd061,	// (0x0007f9e2) bg_button_pane_cp024

0x91bc,	// (0x0007bb3d) vitu2_page_scroll_pane_g1

0x91c4,	// (0x0007bb45) vitu2_page_scroll_pane_g2

0x0001,

0xfad1,	// (0x00082452) vitu2_page_scroll_pane_g

0x91cc,	// (0x0007bb4d) vitu2_page_scroll_pane_t1

0xc379,	// (0x0007ecfa) popup_char_count_window_g1

0xd094,	// (0x0007fa15) popup_char_count_window_g2

0xd09d,	// (0x0007fa1e) popup_char_count_window_g3

0x0002,

0xfad6,	// (0x00082457) popup_char_count_window_g

0xd0a6,	// (0x0007fa27) popup_char_count_window_t1

0x1a31,	// (0x000743b2) main_vded2_pane

0xc846,	// (0x0007f1c7) aid_size_cell_imed_line

0xc850,	// (0x0007f1d1) grid_imed_line_width_pane

0xec56,	// (0x000815d7) vid4_indicators_pane_g4

0xd0b4,	// (0x0007fa35) cell_imed_line_width_pane_ParamLimits

0xd0b4,	// (0x0007fa35) cell_imed_line_width_pane

0xd0c6,	// (0x0007fa47) cell_imed_line_width_pane_g1

0xd0cf,	// (0x0007fa50) cell_imed_line_width_pane_g2

0x0001,

0xfadd,	// (0x0008245e) cell_imed_line_width_pane_g

0x91db,	// (0x0007bb5c) main_vded2_pane_g1_ParamLimits

0x91db,	// (0x0007bb5c) main_vded2_pane_g1

0x91f1,	// (0x0007bb72) main_vded2_pane_g2_ParamLimits

0x91f1,	// (0x0007bb72) main_vded2_pane_g2

0x0001,

0xfae2,	// (0x00082463) main_vded2_pane_g_ParamLimits

0xfae2,	// (0x00082463) main_vded2_pane_g

0x9201,	// (0x0007bb82) vded2_slider_pane_ParamLimits

0x9201,	// (0x0007bb82) vded2_slider_pane

0x9214,	// (0x0007bb95) aid_size_touch_vded2_end

0x921c,	// (0x0007bb9d) aid_size_touch_vded2_playhead

0x9224,	// (0x0007bba5) aid_size_touch_vded2_start

0x922c,	// (0x0007bbad) vded2_slider_bg_pane

0x9235,	// (0x0007bbb6) vded2_slider_pane_g1

0x923e,	// (0x0007bbbf) vded2_slider_pane_g2

0x9246,	// (0x0007bbc7) vded2_slider_pane_g3

0x0002,

0xfae7,	// (0x00082468) vded2_slider_pane_g

0x924f,	// (0x0007bbd0) vded2_slider_bg_pane_g1

0x9258,	// (0x0007bbd9) vded2_slider_bg_pane_g2

0x9261,	// (0x0007bbe2) vded2_slider_bg_pane_g3

0x0002,

0xfaee,	// (0x0008246f) vded2_slider_bg_pane_g

0x54ed,	// (0x00077e6e) aid_postcard_touch_down_pane_ParamLimits

0x54ed,	// (0x00077e6e) aid_postcard_touch_down_pane

0x54ff,	// (0x00077e80) aid_postcard_touch_up_pane_ParamLimits

0x54ff,	// (0x00077e80) aid_postcard_touch_up_pane

0x1a31,	// (0x000743b2) main_blid2_pane

0xbe54,	// (0x0007e7d5) popup_blid2_search_window

0x1a31,	// (0x000743b2) blid2_gps_pane

0x1a31,	// (0x000743b2) blid2_navig_pane

0x1a31,	// (0x000743b2) blid2_search_pane

0x1a31,	// (0x000743b2) blid2_tripm_pane

0x926a,	// (0x0007bbeb) blid2_search_pane_g1_ParamLimits

0x926a,	// (0x0007bbeb) blid2_search_pane_g1

0x927e,	// (0x0007bbff) blid2_search_pane_t1_ParamLimits

0x927e,	// (0x0007bbff) blid2_search_pane_t1

0x9290,	// (0x0007bc11) aid_size_cell_blid2_gps_ParamLimits

0x9290,	// (0x0007bc11) aid_size_cell_blid2_gps

0x92a8,	// (0x0007bc29) blid2_gps_pane_g1_ParamLimits

0x92a8,	// (0x0007bc29) blid2_gps_pane_g1

0x92bc,	// (0x0007bc3d) grid_blid2_satellite_pane_ParamLimits

0x92bc,	// (0x0007bc3d) grid_blid2_satellite_pane

0x92d0,	// (0x0007bc51) blid2_navig_pane_g1_ParamLimits

0x92d0,	// (0x0007bc51) blid2_navig_pane_g1

0x92dc,	// (0x0007bc5d) blid2_navig_pane_t1_ParamLimits

0x92dc,	// (0x0007bc5d) blid2_navig_pane_t1

0x92f5,	// (0x0007bc76) blid2_navig_pane_t2_ParamLimits

0x92f5,	// (0x0007bc76) blid2_navig_pane_t2

0x0001,

0xfaf5,	// (0x00082476) blid2_navig_pane_t_ParamLimits

0xfaf5,	// (0x00082476) blid2_navig_pane_t

0x930e,	// (0x0007bc8f) blid2_navig_ring_pane_ParamLimits

0x930e,	// (0x0007bc8f) blid2_navig_ring_pane

0x9323,	// (0x0007bca4) blid2_speed_pane_ParamLimits

0x9323,	// (0x0007bca4) blid2_speed_pane

0x932f,	// (0x0007bcb0) blid2_tripm_pane_g1_ParamLimits

0x932f,	// (0x0007bcb0) blid2_tripm_pane_g1

0x9344,	// (0x0007bcc5) blid2_tripm_pane_g2_ParamLimits

0x9344,	// (0x0007bcc5) blid2_tripm_pane_g2

0x9358,	// (0x0007bcd9) blid2_tripm_pane_g3_ParamLimits

0x9358,	// (0x0007bcd9) blid2_tripm_pane_g3

0x936c,	// (0x0007bced) blid2_tripm_pane_g4_ParamLimits

0x936c,	// (0x0007bced) blid2_tripm_pane_g4

0x9380,	// (0x0007bd01) blid2_tripm_pane_g5_ParamLimits

0x9380,	// (0x0007bd01) blid2_tripm_pane_g5

0x0005,

0xfafa,	// (0x0008247b) blid2_tripm_pane_g_ParamLimits

0xfafa,	// (0x0008247b) blid2_tripm_pane_g

0x93a2,	// (0x0007bd23) blid2_tripm_pane_t1_ParamLimits

0x93a2,	// (0x0007bd23) blid2_tripm_pane_t1

0x93b9,	// (0x0007bd3a) blid2_tripm_pane_t2_ParamLimits

0x93b9,	// (0x0007bd3a) blid2_tripm_pane_t2

0x93d0,	// (0x0007bd51) blid2_tripm_pane_t3_ParamLimits

0x93d0,	// (0x0007bd51) blid2_tripm_pane_t3

0x0003,

0xfb07,	// (0x00082488) blid2_tripm_pane_t_ParamLimits

0xfb07,	// (0x00082488) blid2_tripm_pane_t

0x9413,	// (0x0007bd94) cell_blid2_satellite_pane_ParamLimits

0x9413,	// (0x0007bd94) cell_blid2_satellite_pane

0x942b,	// (0x0007bdac) cell_blid2_satellite_pane_g1

0xd0d7,	// (0x0007fa58) cell_blid2_satellite_pane_t1

0xc350,	// (0x0007ecd1) blid2_speed_pane_g1

0xd0e5,	// (0x0007fa66) blid2_speed_pane_t1

0xd0f3,	// (0x0007fa74) blid2_speed_pane_t2

0x0001,

0xfb10,	// (0x00082491) blid2_speed_pane_t

0xc350,	// (0x0007ecd1) blid2_navig_ring_pane_g1

0x9434,	// (0x0007bdb5) blid2_navig_ring_pane_g2

0x943c,	// (0x0007bdbd) blid2_navig_ring_pane_g3

0x9444,	// (0x0007bdc5) blid2_navig_ring_pane_g4

0x944c,	// (0x0007bdcd) blid2_navig_ring_pane_g5

0x0004,

0xfb15,	// (0x00082496) blid2_navig_ring_pane_g

0x1a31,	// (0x000743b2) bg_popup_window_pane_cp011

0xd101,	// (0x0007fa82) popup_blid2_search_window_g1

0xd109,	// (0x0007fa8a) popup_blid2_search_window_t1

0xd117,	// (0x0007fa98) popup_blid2_search_window_t2

0x0001,

0xfb20,	// (0x000824a1) popup_blid2_search_window_t

0x37be,	// (0x0007613f) main_browser_pane_g1

0x2659,	// (0x00074fda) main_browser_pane_ParamLimits

0xaeed,	// (0x0007d86e) bg_button_pane_cp011_ParamLimits

0x862f,	// (0x0007afb0) cell_vitu2_function_pane_g1_ParamLimits

0xbe3c,	// (0x0007e7bd) bg_popup_sub_pane_cp22_ParamLimits

0x108a,	// (0x00073a0b) input_focus_pane_cp08_ParamLimits

0x8ea5,	// (0x0007b826) popup_vitu2_query_button_pane_ParamLimits

0x8ea5,	// (0x0007b826) popup_vitu2_query_button_pane

0x10a1,	// (0x00073a22) popup_vitu2_query_input_button_pane

0xcd30,	// (0x0007f6b1) popup_vitu2_query_window_g1_ParamLimits

0x10a9,	// (0x00073a2a) popup_vitu2_query_window_g2_ParamLimits

0xfa21,	// (0x000823a2) popup_vitu2_query_window_g_ParamLimits

0x1a31,	// (0x000743b2) bg_button_pane_cp026

0x9454,	// (0x0007bdd5) popup_vitu2_query_input_button_pane_g1

0x1a31,	// (0x000743b2) bg_button_pane_cp025

0xd125,	// (0x0007faa6) popup_vitu2_query_button_pane_t1

0x6e5c,	// (0x000797dd) main_mp3_pane_t6

0x6e6a,	// (0x000797eb) popup_slider_window_cp01

0xebdb,	// (0x0008155c) cam4_battery_pane

0xebdb,	// (0x0008155c) cam4_battery_pane_cp02

0xebdb,	// (0x0008155c) cam4_battery_pane_cp01

0xebdb,	// (0x0008155c) cam4_battery_pane_cp03

0xc350,	// (0x0007ecd1) cam4_battery_pane_g1

0xd133,	// (0x0007fab4) cam4_battery_pane_g2

0x0001,

0xfb25,	// (0x000824a6) cam4_battery_pane_g

0xc222,	// (0x0007eba3) popup_blid_sat_info2_window_t11

0x4d36,	// (0x000776b7) aid_size_touch_mv_arrow_left_ParamLimits

0x4d5a,	// (0x000776db) aid_size_touch_mv_arrow_right_ParamLimits

0x4db3,	// (0x00077734) navi_pane_g1_ParamLimits

0x4dbf,	// (0x00077740) navi_pane_g2_ParamLimits

0x4de8,	// (0x00077769) navi_pane_g3_ParamLimits

0xf3e1,	// (0x00081d62) navi_pane_g_ParamLimits

0x4e98,	// (0x00077819) navi_pane_mv_t1_ParamLimits

0x79fa,	// (0x0007a37b) grid_imed_effect_pane_ParamLimits

0x3406,	// (0x00075d87) aid_placing_vt_slider_lsc

0x3416,	// (0x00075d97) aid_placing_vt_slider_prt

0xaeed,	// (0x0007d86e) bg_tb_trans_pane_cp01_ParamLimits

0xc49f,	// (0x0007ee20) popup_image_details_window_g1_ParamLimits

0xc4b2,	// (0x0007ee33) popup_image_details_window_g2_ParamLimits

0xc4c7,	// (0x0007ee48) popup_image_details_window_g3_ParamLimits

0xc4c7,	// (0x0007ee48) popup_image_details_window_g3

0xf727,	// (0x000820a8) popup_image_details_window_g_ParamLimits

0xc4db,	// (0x0007ee5c) popup_image_details_window_t1_ParamLimits

0xc4ed,	// (0x0007ee6e) popup_image_details_window_t2_ParamLimits

0xc506,	// (0x0007ee87) popup_image_details_window_t3_ParamLimits

0xc51a,	// (0x0007ee9b) popup_image_details_window_t4_ParamLimits

0xc535,	// (0x0007eeb6) popup_image_details_window_t5_ParamLimits

0xf72e,	// (0x000820af) popup_image_details_window_t_ParamLimits

0x90c7,	// (0x0007ba48) cl_header_name_pane_ParamLimits

0x90c7,	// (0x0007ba48) cl_header_name_pane

0x945c,	// (0x0007bddd) cl_header_name_pane_t1_ParamLimits

0x945c,	// (0x0007bddd) cl_header_name_pane_t1

0x947d,	// (0x0007bdfe) cl_header_name_pane_t2_ParamLimits

0x947d,	// (0x0007bdfe) cl_header_name_pane_t2

0x94bf,	// (0x0007be40) cl_header_name_pane_t3_ParamLimits

0x94bf,	// (0x0007be40) cl_header_name_pane_t3

0x0002,

0xfb2a,	// (0x000824ab) cl_header_name_pane_t_ParamLimits

0xfb2a,	// (0x000824ab) cl_header_name_pane_t

0x4e69,	// (0x000777ea) navi_pane_mv_g2_ParamLimits

0xee5b,	// (0x000817dc) field_vitu2_entry_pane_g1_ParamLimits

0xee67,	// (0x000817e8) field_vitu2_entry_pane_g2_ParamLimits

0xee73,	// (0x000817f4) field_vitu2_entry_pane_g3_ParamLimits

0xee73,	// (0x000817f4) field_vitu2_entry_pane_g3

0x0614,	// (0x00072f95) field_vitu2_entry_pane_g_ParamLimits

0xec8c,	// (0x0008160d) cell_vitu2_itu_pane_g1_ParamLimits

0x85c3,	// (0x0007af44) cell_vitu2_itu_pane_g2_ParamLimits

0x85c3,	// (0x0007af44) cell_vitu2_itu_pane_g2

0x0001,

0xf933,	// (0x000822b4) cell_vitu2_itu_pane_g_ParamLimits

0xf933,	// (0x000822b4) cell_vitu2_itu_pane_g

0xaeed,	// (0x0007d86e) bg_vkb2_func_pane_cp05_ParamLimits

0xaeed,	// (0x0007d86e) bg_vkb2_func_pane_cp05

0xaeed,	// (0x0007d86e) bg_vkb2_func_pane_cp03

0xaeed,	// (0x0007d86e) bg_vkb2_func_pane_cp04

0xaeed,	// (0x0007d86e) bg_vkb2_func_pane_cp10_ParamLimits

0xaeed,	// (0x0007d86e) bg_vkb2_func_pane_cp10

0x11be,	// (0x00073b3f) bg_vkb2_func_pane_cp08

0x9072,	// (0x0007b9f3) bg_vkb2_func_pane_cp06

0x907f,	// (0x0007ba00) bg_vkb2_func_pane_cp07

0xd06a,	// (0x0007f9eb) bg_vkb2_func_pane_cp11_ParamLimits

0xd06a,	// (0x0007f9eb) bg_vkb2_func_pane_cp11

0xd07f,	// (0x0007fa00) bg_vkb2_func_pane_cp12_ParamLimits

0xd07f,	// (0x0007fa00) bg_vkb2_func_pane_cp12

0x1a31,	// (0x000743b2) bg_vkb2_func_pane_cp09

0xee93,	// (0x00081814) bg_vkb2_func_pane_g1

0x390f,	// (0x00076290) bg_vkb2_func_pane_g2

0xee9b,	// (0x0008181c) bg_vkb2_func_pane_g3

0xeea3,	// (0x00081824) bg_vkb2_func_pane_g4

0xcce9,	// (0x0007f66a) bg_vkb2_func_pane_g5

0xeebb,	// (0x0008183c) bg_vkb2_func_pane_g6

0xeec3,	// (0x00081844) bg_vkb2_func_pane_g7

0xeeb3,	// (0x00081834) bg_vkb2_func_pane_g8

0x38ef,	// (0x00076270) bg_vkb2_func_pane_g9

0x0008,

0xfb31,	// (0x000824b2) bg_vkb2_func_pane_g

0x9392,	// (0x0007bd13) blid2_tripm_pane_g6_ParamLimits

0x9392,	// (0x0007bd13) blid2_tripm_pane_g6

0xcbf5,	// (0x0007f576) mp4_progress_pane_g1

0x9401,	// (0x0007bd82) blid2_tripm_values_pane_ParamLimits

0x9401,	// (0x0007bd82) blid2_tripm_values_pane

0x94f0,	// (0x0007be71) blid2_tripm_values_pane_t1

0x94fe,	// (0x0007be7f) blid2_tripm_values_pane_t2

0x950c,	// (0x0007be8d) blid2_tripm_values_pane_t3

0x951a,	// (0x0007be9b) blid2_tripm_values_pane_t4

0x9528,	// (0x0007bea9) blid2_tripm_values_pane_t5

0x9536,	// (0x0007beb7) blid2_tripm_values_pane_t6

0x9544,	// (0x0007bec5) blid2_tripm_values_pane_t7

0x9552,	// (0x0007bed3) blid2_tripm_values_pane_t8

0x9560,	// (0x0007bee1) blid2_tripm_values_pane_t9

0x0008,

0xfb44,	// (0x000824c5) blid2_tripm_values_pane_t

0x344a,	// (0x00075dcb) call_video_pane_t1_ParamLimits

0x3464,	// (0x00075de5) call_video_pane_t2_ParamLimits

0xf26a,	// (0x00081beb) call_video_pane_t_ParamLimits

0x0ea1,	// (0x00073822) msg_header_pane_g1_ParamLimits

0x545f,	// (0x00077de0) msg_header_pane_g2_ParamLimits

0x545f,	// (0x00077de0) msg_header_pane_g2

0x0001,

0xf484,	// (0x00081e05) msg_header_pane_g_ParamLimits

0xf484,	// (0x00081e05) msg_header_pane_g

0x2659,	// (0x00074fda) main_clock2_pane_ParamLimits

0x7711,	// (0x0007a092) grid_clock2_toolbar_pane_ParamLimits

0x7711,	// (0x0007a092) grid_clock2_toolbar_pane

0x7711,	// (0x0007a092) listscroll_clock2_pane_ParamLimits

0x7711,	// (0x0007a092) listscroll_clock2_pane

0x77f4,	// (0x0007a175) main_clock2_pane_t3_ParamLimits

0x77f4,	// (0x0007a175) main_clock2_pane_t3

0x7816,	// (0x0007a197) main_clock2_pane_t4_ParamLimits

0x7816,	// (0x0007a197) main_clock2_pane_t4

0xd13d,	// (0x0007fabe) cell_clock2_toolbar_pane

0xd145,	// (0x0007fac6) cell_clock2_toolbar_pane_cp01

0xd145,	// (0x0007fac6) cell_clock2_toolbar_pane_cp02

0xd14d,	// (0x0007face) cell_clock2_toolbar_pane_cp03

0xd155,	// (0x0007fad6) list_clock2_pane

0xd15d,	// (0x0007fade) scroll_pane_cp10

0xd165,	// (0x0007fae6) list_single_clock2_pane_ParamLimits

0xd165,	// (0x0007fae6) list_single_clock2_pane

0x2fc7,	// (0x00075948) list_highlight_pane_cp08

0xd172,	// (0x0007faf3) list_single_clock2_pane_t1

0xd180,	// (0x0007fb01) list_single_clock2_pane_t2

0x0001,

0xfb57,	// (0x000824d8) list_single_clock2_pane_t

0x1a31,	// (0x000743b2) bg_button_pane_cp10

0xd18e,	// (0x0007fb0f) cell_clock2_toolbar_pane_g1

0x5473,	// (0x00077df4) aid_main_viewer_pane_g1_ParamLimits

0x5473,	// (0x00077df4) aid_main_viewer_pane_g1

0x547f,	// (0x00077e00) aid_main_viewer_pane_g2_ParamLimits

0x547f,	// (0x00077e00) aid_main_viewer_pane_g2

0x548b,	// (0x00077e0c) aid_main_viewer_pane_g3_ParamLimits

0x548b,	// (0x00077e0c) aid_main_viewer_pane_g3

0x549a,	// (0x00077e1b) aid_main_viewer_pane_g4_ParamLimits

0x549a,	// (0x00077e1b) aid_main_viewer_pane_g4

0x0003,

0xf495,	// (0x00081e16) aid_main_viewer_pane_g_ParamLimits

0xf495,	// (0x00081e16) aid_main_viewer_pane_g

0xaeed,	// (0x0007d86e) main_calc_pane_ParamLimits

0x61cc,	// (0x00078b4d) main_dialer2_pane_ParamLimits

0x1a31,	// (0x000743b2) main_cam6_pane

0x1a31,	// (0x000743b2) main_vid6_pane

0x771d,	// (0x0007a09e) listscroll_gen_pane_cp06_ParamLimits

0x771d,	// (0x0007a09e) listscroll_gen_pane_cp06

0x7837,	// (0x0007a1b8) main_clock2_pane_t5_ParamLimits

0x7837,	// (0x0007a1b8) main_clock2_pane_t5

0x788f,	// (0x0007a210) aid_call2_pane_cp10_ParamLimits

0x78a1,	// (0x0007a222) aid_call_pane_cp10_ParamLimits

0x4cc5,	// (0x00077646) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4cc5,	// (0x00077646) popup_clock_analogue_window_cp10_g2_ParamLimits

0x78b3,	// (0x0007a234) popup_clock_analogue_window_cp10_g3_ParamLimits

0x78b3,	// (0x0007a234) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4cc5,	// (0x00077646) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e3,	// (0x00082164) popup_clock_analogue_window_cp10_g_ParamLimits

0x78c5,	// (0x0007a246) popup_clock_analogue_window_cp10_t1_ParamLimits

0xcc55,	// (0x0007f5d6) cell_dialer2_keypad_pane_g2_ParamLimits

0xcc55,	// (0x0007f5d6) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0008224e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0008224e) cell_dialer2_keypad_pane_g

0x7ed4,	// (0x0007a855) cell_dialer2_keypad_pane_t1

0x88fa,	// (0x0007b27b) main_cset_text2_pane_ParamLimits

0x88fa,	// (0x0007b27b) main_cset_text2_pane

0xcf0a,	// (0x0007f88b) area_vitu2_query_pane_g1_ParamLimits

0x1187,	// (0x00073b08) area_vitu2_query_pane_g2_ParamLimits

0xfa74,	// (0x000823f5) area_vitu2_query_pane_g_ParamLimits

0xcf8e,	// (0x0007f90f) area_vitu2_query_pane_t7_ParamLimits

0xcf8e,	// (0x0007f90f) area_vitu2_query_pane_t7

0x9072,	// (0x0007b9f3) bg_button_pane_cp018_ParamLimits

0x907f,	// (0x0007ba00) bg_button_pane_cp021_ParamLimits

0x11be,	// (0x00073b3f) bg_button_pane_cp022_ParamLimits

0x11be,	// (0x00073b3f) bg_vkb2_func_pane_cp08_ParamLimits

0x9072,	// (0x0007b9f3) bg_vkb2_func_pane_cp06_ParamLimits

0x907f,	// (0x0007ba00) bg_vkb2_func_pane_cp07_ParamLimits

0x11cd,	// (0x00073b4e) input_focus_pane_cp09_ParamLimits

0xeda9,	// (0x0008172a) cam6_autofocus_pane_ParamLimits

0xeda9,	// (0x0008172a) cam6_autofocus_pane

0x956e,	// (0x0007beef) cam6_image_uncrop_pane_ParamLimits

0x956e,	// (0x0007beef) cam6_image_uncrop_pane

0x957b,	// (0x0007befc) cam6_indi_pane_ParamLimits

0x957b,	// (0x0007befc) cam6_indi_pane

0x9591,	// (0x0007bf12) cam6_mode_pane_ParamLimits

0x9591,	// (0x0007bf12) cam6_mode_pane

0x95a3,	// (0x0007bf24) cam6_timer_pane_ParamLimits

0x95a3,	// (0x0007bf24) cam6_timer_pane

0x95af,	// (0x0007bf30) cam6_zoom_pane_ParamLimits

0x95af,	// (0x0007bf30) cam6_zoom_pane

0x95bb,	// (0x0007bf3c) cam6_mode_pane_g1_ParamLimits

0x95bb,	// (0x0007bf3c) cam6_mode_pane_g1

0x95cb,	// (0x0007bf4c) cam6_mode_pane_g2_ParamLimits

0x95cb,	// (0x0007bf4c) cam6_mode_pane_g2

0x95db,	// (0x0007bf5c) cam6_mode_pane_g3_ParamLimits

0x95db,	// (0x0007bf5c) cam6_mode_pane_g3

0x95eb,	// (0x0007bf6c) cam6_mode_pane_g4_ParamLimits

0x95eb,	// (0x0007bf6c) cam6_mode_pane_g4

0x0003,

0xfb5c,	// (0x000824dd) cam6_mode_pane_g_ParamLimits

0xfb5c,	// (0x000824dd) cam6_mode_pane_g

0xd196,	// (0x0007fb17) bg_tb_trans_pane_cp08_ParamLimits

0xd196,	// (0x0007fb17) bg_tb_trans_pane_cp08

0xd1a4,	// (0x0007fb25) cam6_battery_pane_ParamLimits

0xd1a4,	// (0x0007fb25) cam6_battery_pane

0xd1ba,	// (0x0007fb3b) cam6_indi_pane_g1_ParamLimits

0xd1ba,	// (0x0007fb3b) cam6_indi_pane_g1

0xd1cc,	// (0x0007fb4d) cam6_indi_pane_g2_ParamLimits

0xd1cc,	// (0x0007fb4d) cam6_indi_pane_g2

0xd1de,	// (0x0007fb5f) cam6_indi_pane_g3_ParamLimits

0xd1de,	// (0x0007fb5f) cam6_indi_pane_g3

0x0002,

0xfb65,	// (0x000824e6) cam6_indi_pane_g_ParamLimits

0xfb65,	// (0x000824e6) cam6_indi_pane_g

0xd1f0,	// (0x0007fb71) cam6_indi_pane_t1_ParamLimits

0xd1f0,	// (0x0007fb71) cam6_indi_pane_t1

0x83f6,	// (0x0007ad77) cam6_autofocus_pane_g1

0x83fe,	// (0x0007ad7f) cam6_autofocus_pane_g2

0x8406,	// (0x0007ad87) cam6_autofocus_pane_g3

0x840e,	// (0x0007ad8f) cam6_autofocus_pane_g4

0x0003,

0xfb6c,	// (0x000824ed) cam6_autofocus_pane_g

0xd216,	// (0x0007fb97) cam6_timer_pane_g1

0xd21e,	// (0x0007fb9f) cam6_timer_pane_t1

0xd22c,	// (0x0007fbad) cam6_zoom_cont_pane

0xd234,	// (0x0007fbb5) cam6_zoom_pane_g1

0xd23c,	// (0x0007fbbd) cam6_zoom_pane_g2

0x95fb,	// (0x0007bf7c) cam6_zoom_pane_g3

0x0002,

0xfb75,	// (0x000824f6) cam6_zoom_pane_g

0xc350,	// (0x0007ecd1) cam6_battery_pane_g1

0xc350,	// (0x0007ecd1) cam6_battery_pane_g2

0x0001,

0xf6eb,	// (0x0008206c) cam6_battery_pane_g

0xd244,	// (0x0007fbc5) cam6_zoom_cont_pane_g1

0xd24d,	// (0x0007fbce) cam6_zoom_cont_pane_g2

0xd256,	// (0x0007fbd7) cam6_zoom_cont_pane_g3

0x0002,

0xfb7c,	// (0x000824fd) cam6_zoom_cont_pane_g

0x9618,	// (0x0007bf99) cam6_mode_pane_cp_ParamLimits

0x9618,	// (0x0007bf99) cam6_mode_pane_cp

0x95af,	// (0x0007bf30) cam6_zoom_pane_cp_ParamLimits

0x95af,	// (0x0007bf30) cam6_zoom_pane_cp

0x962a,	// (0x0007bfab) vid6_image_uncrop_cif_pane_ParamLimits

0x962a,	// (0x0007bfab) vid6_image_uncrop_cif_pane

0x9638,	// (0x0007bfb9) vid6_image_uncrop_nhd_pane_ParamLimits

0x9638,	// (0x0007bfb9) vid6_image_uncrop_nhd_pane

0x956e,	// (0x0007beef) vid6_image_uncrop_vga_pane_ParamLimits

0x956e,	// (0x0007beef) vid6_image_uncrop_vga_pane

0x9645,	// (0x0007bfc6) vid6_image_uncrop_wvga_pane_ParamLimits

0x9645,	// (0x0007bfc6) vid6_image_uncrop_wvga_pane

0x9652,	// (0x0007bfd3) vid6_indi_pane_ParamLimits

0x9652,	// (0x0007bfd3) vid6_indi_pane

0xd196,	// (0x0007fb17) bg_tb_trans_pane_cp09_ParamLimits

0xd196,	// (0x0007fb17) bg_tb_trans_pane_cp09

0xd26a,	// (0x0007fbeb) cam6_battery_pane_cp_ParamLimits

0xd26a,	// (0x0007fbeb) cam6_battery_pane_cp

0xd276,	// (0x0007fbf7) vid6_indi_pane_g1_ParamLimits

0xd276,	// (0x0007fbf7) vid6_indi_pane_g1

0xd288,	// (0x0007fc09) vid6_indi_pane_g2_ParamLimits

0xd288,	// (0x0007fc09) vid6_indi_pane_g2

0xd29a,	// (0x0007fc1b) vid6_indi_pane_g3_ParamLimits

0xd29a,	// (0x0007fc1b) vid6_indi_pane_g3

0xd2af,	// (0x0007fc30) vid6_indi_pane_g4_ParamLimits

0xd2af,	// (0x0007fc30) vid6_indi_pane_g4

0xd2c4,	// (0x0007fc45) vid6_indi_pane_g5_ParamLimits

0xd2c4,	// (0x0007fc45) vid6_indi_pane_g5

0x0004,

0xfb83,	// (0x00082504) vid6_indi_pane_g_ParamLimits

0xfb83,	// (0x00082504) vid6_indi_pane_g

0xd2de,	// (0x0007fc5f) vid6_indi_pane_t1_ParamLimits

0xd2de,	// (0x0007fc5f) vid6_indi_pane_t1

0xd2f4,	// (0x0007fc75) vid6_indi_pane_t2_ParamLimits

0xd2f4,	// (0x0007fc75) vid6_indi_pane_t2

0xd31c,	// (0x0007fc9d) vid6_indi_pane_t3_ParamLimits

0xd31c,	// (0x0007fc9d) vid6_indi_pane_t3

0xd344,	// (0x0007fcc5) vid6_indi_pane_t4_ParamLimits

0xd344,	// (0x0007fcc5) vid6_indi_pane_t4

0x0003,

0xfb8e,	// (0x0008250f) vid6_indi_pane_t_ParamLimits

0xfb8e,	// (0x0008250f) vid6_indi_pane_t

0xd368,	// (0x0007fce9) wait_bar_pane_cp08

0x9669,	// (0x0007bfea) main_cset_text2_pane_t1_ParamLimits

0x9669,	// (0x0007bfea) main_cset_text2_pane_t1

0x9603,	// (0x0007bf84) listscroll_gen_pane_cp06_t1_ParamLimits

0x9603,	// (0x0007bf84) listscroll_gen_pane_cp06_t1

0x1a31,	// (0x000743b2) main_cam6_set_pane

0xc57f,	// (0x0007ef00) bg_tb_trans_pane_cp06_ParamLimits

0xebe3,	// (0x00081564) cam4_indicators_pane_g1_ParamLimits

0xebf3,	// (0x00081574) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0008228b) cam4_indicators_pane_g_ParamLimits

0xec13,	// (0x00081594) cam4_indicators_pane_t1_ParamLimits

0xaeed,	// (0x0007d86e) bg_tb_trans_pane_cp07_ParamLimits

0xebe3,	// (0x00081564) vid4_indicators_pane_g1_ParamLimits

0xec35,	// (0x000815b6) vid4_indicators_pane_g2_ParamLimits

0xec45,	// (0x000815c6) vid4_indicators_pane_g3_ParamLimits

0xec56,	// (0x000815d7) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0008229d) vid4_indicators_pane_g_ParamLimits

0xec72,	// (0x000815f3) vid4_indicators_pane_t1_ParamLimits

0xed06,	// (0x00081687) vid4_progress_pane_g1_ParamLimits

0xed15,	// (0x00081696) vid4_progress_pane_g2_ParamLimits

0xed24,	// (0x000816a5) vid4_progress_pane_g3_ParamLimits

0xed33,	// (0x000816b4) vid4_progress_pane_g4_ParamLimits

0xfabf,	// (0x00082440) vid4_progress_pane_g_ParamLimits

0xed3f,	// (0x000816c0) vid4_progress_pane_t1_ParamLimits

0xed55,	// (0x000816d6) vid4_progress_pane_t2_ParamLimits

0xed6a,	// (0x000816eb) vid4_progress_pane_t3_ParamLimits

0xfaca,	// (0x0008244b) vid4_progress_pane_t_ParamLimits

0xed7f,	// (0x00081700) wait_bar_pane_cp07_ParamLimits

0x9684,	// (0x0007c005) main_cam6_set_pane_g2_ParamLimits

0x9684,	// (0x0007c005) main_cam6_set_pane_g2

0x96a6,	// (0x0007c027) main_cset6_listscroll_pane_ParamLimits

0x96a6,	// (0x0007c027) main_cset6_listscroll_pane

0x96c0,	// (0x0007c041) main_cset6_slider_pane_ParamLimits

0x96c0,	// (0x0007c041) main_cset6_slider_pane

0x96d6,	// (0x0007c057) main_cset6_text2_pane_ParamLimits

0x96d6,	// (0x0007c057) main_cset6_text2_pane

0xd378,	// (0x0007fcf9) main_cset6_text_pane

0xef9d,	// (0x0008191e) main_cset_list_pane_copy1_ParamLimits

0xef9d,	// (0x0008191e) main_cset_list_pane_copy1

0xefad,	// (0x0008192e) scroll_pane_cp028_copy1

0x96e4,	// (0x0007c065) cset_list_set_pane_copy1

0x96f6,	// (0x0007c077) aid_position_infowindow_above_copy1

0x96fe,	// (0x0007c07f) aid_position_infowindow_below_copy1

0x9706,	// (0x0007c087) cset_list_set_pane_g1_copy1

0x11f0,	// (0x00073b71) cset_list_set_pane_g3_copy1_ParamLimits

0x11f0,	// (0x00073b71) cset_list_set_pane_g3_copy1

0x11ff,	// (0x00073b80) cset_list_set_pane_t1_copy1_ParamLimits

0x11ff,	// (0x00073b80) cset_list_set_pane_t1_copy1

0xaeed,	// (0x0007d86e) list_highlight_pane_cp021_copy1_ParamLimits

0xaeed,	// (0x0007d86e) list_highlight_pane_cp021_copy1

0xd380,	// (0x0007fd01) cset6_slider_pane_ParamLimits

0xd380,	// (0x0007fd01) cset6_slider_pane

0xd3ac,	// (0x0007fd2d) main_cset6_slider_pane_g1_ParamLimits

0xd3ac,	// (0x0007fd2d) main_cset6_slider_pane_g1

0x970e,	// (0x0007c08f) main_cset6_slider_pane_g2_ParamLimits

0x970e,	// (0x0007c08f) main_cset6_slider_pane_g2

0xefc2,	// (0x00081943) main_cset6_slider_pane_g3_ParamLimits

0xefc2,	// (0x00081943) main_cset6_slider_pane_g3

0x89bf,	// (0x0007b340) main_cset6_slider_pane_g4_ParamLimits

0x89bf,	// (0x0007b340) main_cset6_slider_pane_g4

0x8a07,	// (0x0007b388) main_cset6_slider_pane_g5_ParamLimits

0x8a07,	// (0x0007b388) main_cset6_slider_pane_g5

0xefc2,	// (0x00081943) main_cset6_slider_pane_g7_ParamLimits

0xefc2,	// (0x00081943) main_cset6_slider_pane_g7

0xefce,	// (0x0008194f) main_cset6_slider_pane_g8_ParamLimits

0xefce,	// (0x0008194f) main_cset6_slider_pane_g8

0x89a7,	// (0x0007b328) main_cset6_slider_pane_g9_ParamLimits

0x89a7,	// (0x0007b328) main_cset6_slider_pane_g9

0x89b3,	// (0x0007b334) main_cset6_slider_pane_g10_ParamLimits

0x89b3,	// (0x0007b334) main_cset6_slider_pane_g10

0x89bf,	// (0x0007b340) main_cset6_slider_pane_g11_ParamLimits

0x89bf,	// (0x0007b340) main_cset6_slider_pane_g11

0x89cb,	// (0x0007b34c) main_cset6_slider_pane_g12_ParamLimits

0x89cb,	// (0x0007b34c) main_cset6_slider_pane_g12

0x89d7,	// (0x0007b358) main_cset6_slider_pane_g13_ParamLimits

0x89d7,	// (0x0007b358) main_cset6_slider_pane_g13

0x89e3,	// (0x0007b364) main_cset6_slider_pane_g14_ParamLimits

0x89e3,	// (0x0007b364) main_cset6_slider_pane_g14

0x9736,	// (0x0007c0b7) main_cset6_slider_pane_g15_ParamLimits

0x9736,	// (0x0007c0b7) main_cset6_slider_pane_g15

0x8a07,	// (0x0007b388) main_cset6_slider_pane_g16_ParamLimits

0x8a07,	// (0x0007b388) main_cset6_slider_pane_g16

0x8a13,	// (0x0007b394) main_cset6_slider_pane_g17_ParamLimits

0x8a13,	// (0x0007b394) main_cset6_slider_pane_g17

0x0011,

0xfb97,	// (0x00082518) main_cset6_slider_pane_g_ParamLimits

0xfb97,	// (0x00082518) main_cset6_slider_pane_g

0xd3d4,	// (0x0007fd55) main_cset6_slider_pane_t1_ParamLimits

0xd3d4,	// (0x0007fd55) main_cset6_slider_pane_t1

0xd415,	// (0x0007fd96) main_cset6_slider_pane_t2_ParamLimits

0xd415,	// (0x0007fd96) main_cset6_slider_pane_t2

0xd440,	// (0x0007fdc1) main_cset6_slider_pane_t3_ParamLimits

0xd440,	// (0x0007fdc1) main_cset6_slider_pane_t3

0x974e,	// (0x0007c0cf) main_cset6_slider_pane_t4_ParamLimits

0x974e,	// (0x0007c0cf) main_cset6_slider_pane_t4

0x9779,	// (0x0007c0fa) main_cset6_slider_pane_t5_ParamLimits

0x9779,	// (0x0007c0fa) main_cset6_slider_pane_t5

0xd46b,	// (0x0007fdec) main_cset6_slider_pane_t7_ParamLimits

0xd46b,	// (0x0007fdec) main_cset6_slider_pane_t7

0x97a4,	// (0x0007c125) main_cset6_slider_pane_t8_ParamLimits

0x97a4,	// (0x0007c125) main_cset6_slider_pane_t8

0x97c8,	// (0x0007c149) main_cset6_slider_pane_t9_ParamLimits

0x97c8,	// (0x0007c149) main_cset6_slider_pane_t9

0x97ec,	// (0x0007c16d) main_cset6_slider_pane_t10_ParamLimits

0x97ec,	// (0x0007c16d) main_cset6_slider_pane_t10

0x9810,	// (0x0007c191) main_cset6_slider_pane_t11_ParamLimits

0x9810,	// (0x0007c191) main_cset6_slider_pane_t11

0xd4a1,	// (0x0007fe22) main_cset6_slider_pane_t14_ParamLimits

0xd4a1,	// (0x0007fe22) main_cset6_slider_pane_t14

0xd4da,	// (0x0007fe5b) main_cset6_slider_pane_t15_ParamLimits

0xd4da,	// (0x0007fe5b) main_cset6_slider_pane_t15

0x000b,

0xfbbc,	// (0x0008253d) main_cset6_slider_pane_t_ParamLimits

0xfbbc,	// (0x0008253d) main_cset6_slider_pane_t

0xf098,	// (0x00081a19) cset_slider_pane_g1_copy1

0xf0a1,	// (0x00081a22) cset_slider_pane_g2_copy1

0xf0aa,	// (0x00081a2b) cset_slider_pane_g3_copy1

0x1a31,	// (0x000743b2) bg_popup_sub_pane_cp011_copy1

0xcd3c,	// (0x0007f6bd) main_cset_text_pane_g1_copy1

0xcd44,	// (0x0007f6c5) main_cset_text_pane_t1_copy1

0xcd52,	// (0x0007f6d3) main_cset_text_pane_t2_copy1

0xcd60,	// (0x0007f6e1) main_cset_text_pane_t3_copy1

0xcd6e,	// (0x0007f6ef) main_cset_text_pane_t4_copy1

0xcd7c,	// (0x0007f6fd) main_cset_text_pane_t5_copy1

0xcd8a,	// (0x0007f70b) main_cset_text_pane_t6_copy1

0xcd98,	// (0x0007f719) main_cset_text_pane_t7_copy1

0x984f,	// (0x0007c1d0) main_cset_text2_pane_t1_copy1

0xaeed,	// (0x0007d86e) main_ncimui_pane

0x63da,	// (0x00078d5b) popup_query_ncimui_window_ParamLimits

0x63da,	// (0x00078d5b) popup_query_ncimui_window

0xe8de,	// (0x0008125f) field_cale_ev2_pane_g4_ParamLimits

0xe8de,	// (0x0008125f) field_cale_ev2_pane_g4

0x7dc6,	// (0x0007a747) cell_video_dialer_keypad_pane_g2_ParamLimits

0x7dc6,	// (0x0007a747) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a4,	// (0x00082225) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a4,	// (0x00082225) cell_video_dialer_keypad_pane_g

0x7dde,	// (0x0007a75f) cell_video_dialer_keypad_pane_t1

0x1a31,	// (0x000743b2) bg_popup_window_pane_cp012

0x4938,	// (0x000772b9) heading_pane_cp06

0xd53d,	// (0x0007febe) ncim_query_content_pane

0x1a31,	// (0x000743b2) bg_popup_heading_pane_cp01

0xd545,	// (0x0007fec6) ncim_heading_pane_t1

0xd553,	// (0x0007fed4) ncim_indicator_popup_pane

0xd565,	// (0x0007fee6) ncim_query_button_pane

0xd579,	// (0x0007fefa) ncim_query_content_pane_t1

0xd58b,	// (0x0007ff0c) ncim_query_content_pane_t2

0x0005,

0xfc00,	// (0x00082581) ncim_query_content_pane_t

0xd5c5,	// (0x0007ff46) ncim_query_list_pane

0xd5d7,	// (0x0007ff58) ncim_query_popup_pane

0xd553,	// (0x0007fed4) ncim_indicator_popup_pane_ParamLimits

0x998e,	// (0x0007c30f) ncim_query_content_pane_g1_ParamLimits

0x998e,	// (0x0007c30f) ncim_query_content_pane_g1

0xd579,	// (0x0007fefa) ncim_query_content_pane_t1_ParamLimits

0xd58b,	// (0x0007ff0c) ncim_query_content_pane_t2_ParamLimits

0x999a,	// (0x0007c31b) ncim_query_content_pane_t3_ParamLimits

0x999a,	// (0x0007c31b) ncim_query_content_pane_t3

0x99c2,	// (0x0007c343) ncim_query_content_pane_t4_ParamLimits

0x99c2,	// (0x0007c343) ncim_query_content_pane_t4

0x99ea,	// (0x0007c36b) ncim_query_content_pane_t5_ParamLimits

0x99ea,	// (0x0007c36b) ncim_query_content_pane_t5

0xd59d,	// (0x0007ff1e) ncim_query_content_pane_t6_ParamLimits

0xd59d,	// (0x0007ff1e) ncim_query_content_pane_t6

0xfc00,	// (0x00082581) ncim_query_content_pane_t_ParamLimits

0xd5c5,	// (0x0007ff46) ncim_query_list_pane_ParamLimits

0xd5d7,	// (0x0007ff58) ncim_query_popup_pane_ParamLimits

0xd5eb,	// (0x0007ff6c) wait_bar_pane_cp04

0x1a31,	// (0x000743b2) input_focus_pane_cp011

0xd5f3,	// (0x0007ff74) ncim_query_popup_pane_t1

0xd601,	// (0x0007ff82) ncim_list_query_list_pane_ParamLimits

0xd601,	// (0x0007ff82) ncim_list_query_list_pane

0x1a31,	// (0x000743b2) bg_button_pane_cp027

0xd614,	// (0x0007ff95) ncim_query_button_pane_g1

0x1a31,	// (0x000743b2) list_highlight_pane_cp012

0xd61e,	// (0x0007ff9f) ncim_list_query_list_pane_g1

0xd626,	// (0x0007ffa7) ncim_list_query_list_pane_t1

0xec03,	// (0x00081584) cam4_indicators_pane_g3_ParamLimits

0xec03,	// (0x00081584) cam4_indicators_pane_g3

0xec62,	// (0x000815e3) vid4_indicators_pane_g5_ParamLimits

0xec62,	// (0x000815e3) vid4_indicators_pane_g5

0x46a7,	// (0x00077028) vid4_progress_pane_g5_ParamLimits

0x46a7,	// (0x00077028) vid4_progress_pane_g5

0x987e,	// (0x0007c1ff) main_ncimui_pane_g1

0x98e4,	// (0x0007c265) ncimui_group_query_pane_ParamLimits

0x98e4,	// (0x0007c265) ncimui_group_query_pane

0x992c,	// (0x0007c2ad) ncimui_list_pane_ParamLimits

0x992c,	// (0x0007c2ad) ncimui_list_pane

0x9951,	// (0x0007c2d2) ncimui_text_pane_ParamLimits

0x9951,	// (0x0007c2d2) ncimui_text_pane

0x9a12,	// (0x0007c393) ncimui_text_pane_t1_ParamLimits

0x9a12,	// (0x0007c393) ncimui_text_pane_t1

0xd63d,	// (0x0007ffbe) ncimui_list_single_graphic_pane_ParamLimits

0xd63d,	// (0x0007ffbe) ncimui_list_single_graphic_pane

0x9a30,	// (0x0007c3b1) ncimui_query_pane_ParamLimits

0x9a30,	// (0x0007c3b1) ncimui_query_pane

0x1a31,	// (0x000743b2) list_highlight_pane_cp013

0xd64d,	// (0x0007ffce) ncim_list_query_list_pane_t1_copy1

0xd65b,	// (0x0007ffdc) ncim_list_single_graphic_pane_g1

0xd663,	// (0x0007ffe4) ncim_query_button_pane_cp01

0xd66f,	// (0x0007fff0) ncim_query_entry_pane_ParamLimits

0xd66f,	// (0x0007fff0) ncim_query_entry_pane

0xd682,	// (0x00080003) ncimui_query_pane_g1

0xd68e,	// (0x0008000f) ncimui_query_pane_t1_ParamLimits

0xd68e,	// (0x0008000f) ncimui_query_pane_t1

0xaeed,	// (0x0007d86e) input_focus_pane_cp012

0xd6a7,	// (0x00080028) ncim_query_entry_pane_t1

0x2659,	// (0x00074fda) main_im_pane_ParamLimits

0xaeed,	// (0x0007d86e) main_mobtv_pane_ParamLimits

0xaeed,	// (0x0007d86e) main_mobtv_pane

0x89a7,	// (0x0007b328) main_cset6_slider_pane_g18_ParamLimits

0x89a7,	// (0x0007b328) main_cset6_slider_pane_g18

0x89d7,	// (0x0007b358) main_cset6_slider_pane_g19_ParamLimits

0x89d7,	// (0x0007b358) main_cset6_slider_pane_g19

0xd6b9,	// (0x0008003a) bg_main_mobtv_pane_ParamLimits

0xd6b9,	// (0x0008003a) bg_main_mobtv_pane

0x9a40,	// (0x0007c3c1) main_mobtv_info_pane

0x9a49,	// (0x0007c3ca) main_mobtv_loading_pane_ParamLimits

0x9a49,	// (0x0007c3ca) main_mobtv_loading_pane

0xd6c7,	// (0x00080048) main_mobtv_pg_channel_list_pane

0xd6d1,	// (0x00080052) main_mobtv_pg_hdr_pane

0x9a56,	// (0x0007c3d7) main_mobtv_programe_curr_pane_ParamLimits

0x9a56,	// (0x0007c3d7) main_mobtv_programe_curr_pane

0x9a63,	// (0x0007c3e4) main_mobtv_programe_next_pane_ParamLimits

0x9a63,	// (0x0007c3e4) main_mobtv_programe_next_pane

0xd6da,	// (0x0008005b) popup_mobtv_noti_window

0xc350,	// (0x0007ecd1) main_tv_pg_hdr_pane_g1

0xd6e2,	// (0x00080063) main_tv_pg_hdr_pane_g2

0xd6ea,	// (0x0008006b) main_tv_pg_hdr_pane_g3

0xd6f2,	// (0x00080073) main_tv_pg_hdr_pane_g4

0xd6fa,	// (0x0008007b) main_tv_pg_hdr_pane_g5

0xd702,	// (0x00080083) main_tv_pg_hdr_pane_g6

0xd70a,	// (0x0008008b) main_tv_pg_hdr_pane_g7

0xd712,	// (0x00080093) main_tv_pg_hdr_pane_g8

0xd71a,	// (0x0008009b) main_tv_pg_hdr_pane_g9

0xd722,	// (0x000800a3) main_tv_pg_hdr_pane_g10

0xd72c,	// (0x000800ad) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0d,	// (0x0008258e) main_tv_pg_hdr_pane_g

0xd736,	// (0x000800b7) main_tv_pg_hdr_pane_t1

0xd744,	// (0x000800c5) main_tv_pg_hdr_pane_t2

0xd752,	// (0x000800d3) main_tv_pg_hdr_pane_t3

0xd760,	// (0x000800e1) main_tv_pg_hdr_pane_t4

0xd76e,	// (0x000800ef) main_tv_pg_hdr_pane_t5

0x0004,

0xfc24,	// (0x000825a5) main_tv_pg_hdr_pane_t

0xd77c,	// (0x000800fd) single_mobtv_pg_channel_pane_ParamLimits

0xd77c,	// (0x000800fd) single_mobtv_pg_channel_pane

0xd78e,	// (0x0008010f) single_mobtv_pg_channel_table_pane

0xd797,	// (0x00080118) single_mobtv_pg_channel_thumb_pane

0xd7a0,	// (0x00080121) single_tv_pg_channel_pane_g1

0xd7a9,	// (0x0008012a) single_tv_pg_channel_pane_g2

0x0001,

0xfc2f,	// (0x000825b0) single_tv_pg_channel_pane_g

0xc57f,	// (0x0007ef00) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc57f,	// (0x0007ef00) bg_single_mobtv_pg_channel_thumb_pane

0xd7b2,	// (0x00080133) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd7b2,	// (0x00080133) single_mobtv_pg_channel_thumb_pane_g1

0xd7c0,	// (0x00080141) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd7c0,	// (0x00080141) single_mobtv_pg_channel_thumb_pane_g2

0xd7cc,	// (0x0008014d) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd7cc,	// (0x0008014d) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc34,	// (0x000825b5) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc34,	// (0x000825b5) single_mobtv_pg_channel_thumb_pane_g

0xd7d8,	// (0x00080159) single_mobtv_pg_channel_thumb_pane_t1

0xd7e6,	// (0x00080167) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3b,	// (0x000825bc) single_mobtv_pg_channel_thumb_pane_t

0xc350,	// (0x0007ecd1) bg_single_mobtv_pg_channel_table_pane_g1

0xc350,	// (0x0007ecd1) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6eb,	// (0x0008206c) bg_single_mobtv_pg_channel_table_pane_g

0xd7f4,	// (0x00080175) single_mobtv_pg_channel_table_pane_t1

0xd802,	// (0x00080183) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc40,	// (0x000825c1) single_mobtv_pg_channel_table_pane_t

0x9a78,	// (0x0007c3f9) main_mobtv_info_pane_g1_ParamLimits

0x9a78,	// (0x0007c3f9) main_mobtv_info_pane_g1

0x9a94,	// (0x0007c415) main_mobtv_info_pane_t1_ParamLimits

0x9a94,	// (0x0007c415) main_mobtv_info_pane_t1

0x9afa,	// (0x0007c47b) main_mobtv_info_pane_t2_ParamLimits

0x9afa,	// (0x0007c47b) main_mobtv_info_pane_t2

0x0002,

0xfc4a,	// (0x000825cb) main_mobtv_info_pane_t_ParamLimits

0xfc4a,	// (0x000825cb) main_mobtv_info_pane_t

0x9b7d,	// (0x0007c4fe) wait_bar_pane_cp05

0x9b8d,	// (0x0007c50e) main_mobtv_loading_pane_g1_ParamLimits

0x9b8d,	// (0x0007c50e) main_mobtv_loading_pane_g1

0x9b9e,	// (0x0007c51f) main_mobtv_loading_pane_g2_ParamLimits

0x9b9e,	// (0x0007c51f) main_mobtv_loading_pane_g2

0x9baa,	// (0x0007c52b) main_mobtv_loading_pane_g3_ParamLimits

0x9baa,	// (0x0007c52b) main_mobtv_loading_pane_g3

0x0002,

0xfc51,	// (0x000825d2) main_mobtv_loading_pane_g_ParamLimits

0xfc51,	// (0x000825d2) main_mobtv_loading_pane_g

0xd810,	// (0x00080191) main_mobtv_loading_pane_t1_ParamLimits

0xd810,	// (0x00080191) main_mobtv_loading_pane_t1

0xd828,	// (0x000801a9) main_mobtv_loading_pane_t2_ParamLimits

0xd828,	// (0x000801a9) main_mobtv_loading_pane_t2

0x0001,

0xfc58,	// (0x000825d9) main_mobtv_loading_pane_t_ParamLimits

0xfc58,	// (0x000825d9) main_mobtv_loading_pane_t

0x9bbb,	// (0x0007c53c) wait_bar_pane_cp06_ParamLimits

0x9bbb,	// (0x0007c53c) wait_bar_pane_cp06

0xd84c,	// (0x000801cd) main_mobtv_programe_curr_pane_t1

0xd85a,	// (0x000801db) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5d,	// (0x000825de) main_mobtv_programe_curr_pane_t

0xd868,	// (0x000801e9) main_mobtv_programe_next_pane_t1

0xd876,	// (0x000801f7) main_mobtv_programe_next_pane_t2

0xd884,	// (0x00080205) main_mobtv_programe_next_pane_t3

0x0002,

0xfc62,	// (0x000825e3) main_mobtv_programe_next_pane_t

0x1a31,	// (0x000743b2) bg_popup_mobtv_noti_window_pane

0xd892,	// (0x00080213) popup_mobtv_noti_window_g1

0xd89a,	// (0x0008021b) popup_mobtv_noti_window_t1

0xd8a8,	// (0x00080229) popup_mobtv_noti_window_t2

0x0001,

0xfc69,	// (0x000825ea) popup_mobtv_noti_window_t

0xc350,	// (0x0007ecd1) bg_popup_mobtv_noti_window_pane_g1

0x1a31,	// (0x000743b2) sc_clock_pane

0x1a31,	// (0x000743b2) main_fs_bigclock_pane

0x93eb,	// (0x0007bd6c) blid2_tripm_pane_t4_ParamLimits

0x93eb,	// (0x0007bd6c) blid2_tripm_pane_t4

0x9bca,	// (0x0007c54b) sc_clock_pane_g1_ParamLimits

0x9bca,	// (0x0007c54b) sc_clock_pane_g1

0x9bdc,	// (0x0007c55d) sc_clock_pane_t1_ParamLimits

0x9bdc,	// (0x0007c55d) sc_clock_pane_t1

0x9bfe,	// (0x0007c57f) sc_clock_pane_t2_ParamLimits

0x9bfe,	// (0x0007c57f) sc_clock_pane_t2

0x9c14,	// (0x0007c595) sc_clock_pane_t3_ParamLimits

0x9c14,	// (0x0007c595) sc_clock_pane_t3

0x0004,

0xfc6e,	// (0x000825ef) sc_clock_pane_t_ParamLimits

0xfc6e,	// (0x000825ef) sc_clock_pane_t

0xa508,	// (0x0007ce89) main_fs_bigclock_indicator_pane_ParamLimits

0xa508,	// (0x0007ce89) main_fs_bigclock_indicator_pane

0x9cb0,	// (0x0007c631) main_fs_bigclock_pane_g1_ParamLimits

0x9cb0,	// (0x0007c631) main_fs_bigclock_pane_g1

0xa514,	// (0x0007ce95) main_fs_bigclock_pane_t1_ParamLimits

0xa514,	// (0x0007ce95) main_fs_bigclock_pane_t1

0xa526,	// (0x0007cea7) main_fs_bigclock_pane_t2_ParamLimits

0xa526,	// (0x0007cea7) main_fs_bigclock_pane_t2

0xa538,	// (0x0007ceb9) main_fs_bigclock_pane_t3_ParamLimits

0xa538,	// (0x0007ceb9) main_fs_bigclock_pane_t3

0x0002,

0xfe78,	// (0x000827f9) main_fs_bigclock_pane_t_ParamLimits

0xfe78,	// (0x000827f9) main_fs_bigclock_pane_t

0xe45d,	// (0x00080dde) main_fs_bigclock_indicator_pane_g1

0xd56d,	// (0x0007feee) ncim_query_content_pane_g2_ParamLimits

0xd56d,	// (0x0007feee) ncim_query_content_pane_g2

0x0001,

0xfbfb,	// (0x0008257c) ncim_query_content_pane_g_ParamLimits

0xfbfb,	// (0x0008257c) ncim_query_content_pane_g

0x9c2b,	// (0x0007c5ac) sc_clock_pane_t4_ParamLimits

0x9c2b,	// (0x0007c5ac) sc_clock_pane_t4

0xaeed,	// (0x0007d86e) main_radioblah_pane

0xeb77,	// (0x000814f8) cell_call4_button_pane_t1_copy1_ParamLimits

0xeb77,	// (0x000814f8) cell_call4_button_pane_t1_copy1

0x9896,	// (0x0007c217) main_ncimui_pane_t1_ParamLimits

0x9896,	// (0x0007c217) main_ncimui_pane_t1

0x98b0,	// (0x0007c231) main_ncimui_pane_t2_ParamLimits

0x98b0,	// (0x0007c231) main_ncimui_pane_t2

0x0002,

0xfbf4,	// (0x00082575) main_ncimui_pane_t_ParamLimits

0xfbf4,	// (0x00082575) main_ncimui_pane_t

0xd9e9,	// (0x0008036a) main_radioblah_anim_pane_ParamLimits

0xd9e9,	// (0x0008036a) main_radioblah_anim_pane

0xd9fa,	// (0x0008037b) main_radioblah_info_pane_ParamLimits

0xd9fa,	// (0x0008037b) main_radioblah_info_pane

0xda0e,	// (0x0008038f) main_radioblah_pane_t1_ParamLimits

0xda0e,	// (0x0008038f) main_radioblah_pane_t1

0xda2a,	// (0x000803ab) main_radioblah_pane_t2_ParamLimits

0xda2a,	// (0x000803ab) main_radioblah_pane_t2

0x0003,

0xfc8f,	// (0x00082610) main_radioblah_pane_t_ParamLimits

0xfc8f,	// (0x00082610) main_radioblah_pane_t

0x9cfa,	// (0x0007c67b) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9cfa,	// (0x0007c67b) main_radioblah_rocker_ctrl_pane

0xda72,	// (0x000803f3) main_radioblah_info_pane_t1_ParamLimits

0xda72,	// (0x000803f3) main_radioblah_info_pane_t1

0x9d4e,	// (0x0007c6cf) main_radioblah_info_pane_t2_ParamLimits

0x9d4e,	// (0x0007c6cf) main_radioblah_info_pane_t2

0x0003,

0xfc98,	// (0x00082619) main_radioblah_info_pane_t_ParamLimits

0xfc98,	// (0x00082619) main_radioblah_info_pane_t

0xc350,	// (0x0007ecd1) main_radioblah_rocker_ctrl_pane_g1

0x9dfc,	// (0x0007c77d) main_radioblah_rocker_ctrl_pane_g2

0x9e04,	// (0x0007c785) main_radioblah_rocker_ctrl_pane_g3

0x9e0c,	// (0x0007c78d) main_radioblah_rocker_ctrl_pane_g4

0x9e14,	// (0x0007c795) main_radioblah_rocker_ctrl_pane_g5

0x9e1c,	// (0x0007c79d) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca1,	// (0x00082622) main_radioblah_rocker_ctrl_pane_g

0x984f,	// (0x0007c1d0) main_cset_text2_pane_t1_copy1_ParamLimits

0xebd3,	// (0x00081554) cam4_image_uncrop_qvga_pane

0xec2d,	// (0x000815ae) vid4_image_uncrop_qcif_pane

0xeda9,	// (0x0008172a) cam6_image_uncrop_qvga_pane_ParamLimits

0xeda9,	// (0x0008172a) cam6_image_uncrop_qvga_pane

0xd25e,	// (0x0007fbdf) vid6_image_uncrop_qcif_pane_ParamLimits

0xd25e,	// (0x0007fbdf) vid6_image_uncrop_qcif_pane

0x1a31,	// (0x000743b2) bg_popup_preview_window_pane_cp03

0xd513,	// (0x0007fe94) list_cset_text2_pane

0xd51b,	// (0x0007fe9c) main_cset6_text2_pane_g1

0xd523,	// (0x0007fea4) main_cset6_text2_pane_t1

0x9e24,	// (0x0007c7a5) list_cset_text2_pane_t1_ParamLimits

0x9e24,	// (0x0007c7a5) list_cset_text2_pane_t1

0xaeed,	// (0x0007d86e) main_radioblah_pane_ParamLimits

0x9b6b,	// (0x0007c4ec) main_mobtv_info_pane_t3_ParamLimits

0x9b6b,	// (0x0007c4ec) main_mobtv_info_pane_t3

0x9ce8,	// (0x0007c669) main_radioblah_pane_g1

0x9d22,	// (0x0007c6a3) main_radioblah_info_pane_g1

0x9da1,	// (0x0007c722) main_radioblah_info_pane_t3_ParamLimits

0x9da1,	// (0x0007c722) main_radioblah_info_pane_t3

0x43e7,	// (0x00076d68) highlight_cell_cale_month_pane_ParamLimits

0x43e7,	// (0x00076d68) highlight_cell_cale_month_pane

0x1a31,	// (0x000743b2) main_phob_fisheye_pane

0xc687,	// (0x0007f008) scroll_pane_cp0031_ParamLimits

0xc687,	// (0x0007f008) scroll_pane_cp0031

0xd368,	// (0x0007fce9) wait_bar_pane_cp08_ParamLimits

0x96e4,	// (0x0007c065) cset_list_set_pane_copy1_ParamLimits

0xdaac,	// (0x0008042d) highlight_cell_cale_month_pane_g1

0x9e3d,	// (0x0007c7be) highlight_cell_cale_month_pane_t1

0xdab4,	// (0x00080435) list_gen_pane_cp01

0xefad,	// (0x0008192e) scroll_pane_01

0x12ca,	// (0x00073c4b) list_single_double_fisheye_pane

0x12d3,	// (0x00073c54) list_double_fisheye_pane_g1_ParamLimits

0x12d3,	// (0x00073c54) list_double_fisheye_pane_g1

0x12df,	// (0x00073c60) list_double_fisheye_pane_g2_ParamLimits

0x12df,	// (0x00073c60) list_double_fisheye_pane_g2

0x12f3,	// (0x00073c74) list_double_fisheye_pane_g3_ParamLimits

0x12f3,	// (0x00073c74) list_double_fisheye_pane_g3

0x0004,

0xfcae,	// (0x0008262f) list_double_fisheye_pane_g_ParamLimits

0xfcae,	// (0x0008262f) list_double_fisheye_pane_g

0x131c,	// (0x00073c9d) list_double_fisheye_pane_t1_ParamLimits

0x131c,	// (0x00073c9d) list_double_fisheye_pane_t1

0x1337,	// (0x00073cb8) list_double_fisheye_pane_t2_ParamLimits

0x1337,	// (0x00073cb8) list_double_fisheye_pane_t2

0x0001,

0xfcb9,	// (0x0008263a) list_double_fisheye_pane_t_ParamLimits

0xfcb9,	// (0x0008263a) list_double_fisheye_pane_t

0x1a31,	// (0x000743b2) main_call5_pane

0x9c54,	// (0x0007c5d5) sc_swipe_pane_ParamLimits

0x9c54,	// (0x0007c5d5) sc_swipe_pane

0x9e5c,	// (0x0007c7dd) call5_image_pane_ParamLimits

0x9e5c,	// (0x0007c7dd) call5_image_pane

0x9e71,	// (0x0007c7f2) call5_swipe_1_pane_ParamLimits

0x9e71,	// (0x0007c7f2) call5_swipe_1_pane

0x9e82,	// (0x0007c803) call5_swipe_2_pane_ParamLimits

0x9e82,	// (0x0007c803) call5_swipe_2_pane

0x9ea7,	// (0x0007c828) popup_call5_audio_first_window_ParamLimits

0x9ea7,	// (0x0007c828) popup_call5_audio_first_window

0xc57f,	// (0x0007ef00) call5_swipe_1_pane_g1_ParamLimits

0xc57f,	// (0x0007ef00) call5_swipe_1_pane_g1

0xdabd,	// (0x0008043e) call5_swipe_1_pane_g2_ParamLimits

0xdabd,	// (0x0008043e) call5_swipe_1_pane_g2

0x0001,

0xfcbe,	// (0x0008263f) call5_swipe_1_pane_g_ParamLimits

0xfcbe,	// (0x0008263f) call5_swipe_1_pane_g

0xdac9,	// (0x0008044a) call5_swipe_1_pane_t1_ParamLimits

0xdac9,	// (0x0008044a) call5_swipe_1_pane_t1

0xc57f,	// (0x0007ef00) call5_swipe_2_pane_g1_ParamLimits

0xc57f,	// (0x0007ef00) call5_swipe_2_pane_g1

0xdade,	// (0x0008045f) call5_swipe_2_pane_g2_ParamLimits

0xdade,	// (0x0008045f) call5_swipe_2_pane_g2

0x0001,

0xfcc3,	// (0x00082644) call5_swipe_2_pane_g_ParamLimits

0xfcc3,	// (0x00082644) call5_swipe_2_pane_g

0xdaea,	// (0x0008046b) call5_swipe_2_pane_t1_ParamLimits

0xdaea,	// (0x0008046b) call5_swipe_2_pane_t1

0xdaff,	// (0x00080480) sc_swipe_pane_g1_ParamLimits

0xdaff,	// (0x00080480) sc_swipe_pane_g1

0xdb0c,	// (0x0008048d) sc_swipe_pane_g2_ParamLimits

0xdb0c,	// (0x0008048d) sc_swipe_pane_g2

0x0001,

0xfcc8,	// (0x00082649) sc_swipe_pane_g_ParamLimits

0xfcc8,	// (0x00082649) sc_swipe_pane_g

0xdb18,	// (0x00080499) sc_swipe_pane_t1_ParamLimits

0xdb18,	// (0x00080499) sc_swipe_pane_t1

0x1a31,	// (0x000743b2) main_cmail_launcher_pane

0x9eb6,	// (0x0007c837) aid_size_cell_cmail_l_ParamLimits

0x9eb6,	// (0x0007c837) aid_size_cell_cmail_l

0x9ecf,	// (0x0007c850) grid_cmail_l_pane_ParamLimits

0x9ecf,	// (0x0007c850) grid_cmail_l_pane

0x9ee4,	// (0x0007c865) cell_cmail_l_pane_ParamLimits

0x9ee4,	// (0x0007c865) cell_cmail_l_pane

0x9f06,	// (0x0007c887) cell_cmail_l_pane_g1_ParamLimits

0x9f06,	// (0x0007c887) cell_cmail_l_pane_g1

0x9f16,	// (0x0007c897) cell_cmail_l_pane_t1_ParamLimits

0x9f16,	// (0x0007c897) cell_cmail_l_pane_t1

0x9f2c,	// (0x0007c8ad) cell_cmail_l_pane_t2_ParamLimits

0x9f2c,	// (0x0007c8ad) cell_cmail_l_pane_t2

0x0001,

0xfccd,	// (0x0008264e) cell_cmail_l_pane_t_ParamLimits

0xfccd,	// (0x0008264e) cell_cmail_l_pane_t

0xaeed,	// (0x0007d86e) grid_highlight_pane_cp018_ParamLimits

0xaeed,	// (0x0007d86e) grid_highlight_pane_cp018

0x1aef,	// (0x00074470) main2_pane_ParamLimits

0x1aef,	// (0x00074470) main2_pane

0x2842,	// (0x000751c3) popup_sp_fs_action_menu_bg_pane_g1

0x284a,	// (0x000751cb) popup_sp_fs_action_menu_bg_pane_g2

0x2852,	// (0x000751d3) popup_sp_fs_action_menu_bg_pane_g3

0x285a,	// (0x000751db) popup_sp_fs_action_menu_bg_pane_g4

0x2862,	// (0x000751e3) popup_sp_fs_action_menu_bg_pane_g5

0x286a,	// (0x000751eb) popup_sp_fs_action_menu_bg_pane_g6

0x2872,	// (0x000751f3) popup_sp_fs_action_menu_bg_pane_g7

0x287a,	// (0x000751fb) popup_sp_fs_action_menu_bg_pane_g8

0x2882,	// (0x00075203) popup_sp_fs_action_menu_bg_pane_g9

0x288a,	// (0x0007520b) popup_sp_fs_action_menu_bg_pane_g10

0x288a,	// (0x0007520b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x00081b07) popup_sp_fs_action_menu_bg_pane_g

0x0c6e,	// (0x000735ef) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0c6e,	// (0x000735ef) list_medium_line_x2_t3_g3_g1

0x3358,	// (0x00075cd9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x3358,	// (0x00075cd9) list_medium_line_x2_t3_g3_g2

0x0c7a,	// (0x000735fb) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0c7a,	// (0x000735fb) list_medium_line_x2_t3_g3_g3

0x0002,

0xf234,	// (0x00081bb5) list_medium_line_x2_t3_g3_g_ParamLimits

0xf234,	// (0x00081bb5) list_medium_line_x2_t3_g3_g

0x0c86,	// (0x00073607) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0c86,	// (0x00073607) list_medium_line_x2_t3_g3_t1

0x0c9b,	// (0x0007361c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0c9b,	// (0x0007361c) list_medium_line_x2_t3_g3_t2

0x0cad,	// (0x0007362e) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0cad,	// (0x0007362e) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23b,	// (0x00081bbc) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23b,	// (0x00081bbc) list_medium_line_x2_t3_g3_t

0x0c6e,	// (0x000735ef) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0c6e,	// (0x000735ef) list_medium_line_x2_t3_g2_g1

0x0c7a,	// (0x000735fb) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0c7a,	// (0x000735fb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf242,	// (0x00081bc3) list_medium_line_x2_t3_g2_g_ParamLimits

0xf242,	// (0x00081bc3) list_medium_line_x2_t3_g2_g

0x0cc2,	// (0x00073643) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0cc2,	// (0x00073643) list_medium_line_x2_t3_g2_t1

0x0cd8,	// (0x00073659) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0cd8,	// (0x00073659) list_medium_line_x2_t3_g2_t2

0x0cad,	// (0x0007362e) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0cad,	// (0x0007362e) list_medium_line_x2_t3_g2_t3

0x0002,

0xf247,	// (0x00081bc8) list_medium_line_x2_t3_g2_t_ParamLimits

0xf247,	// (0x00081bc8) list_medium_line_x2_t3_g2_t

0x0c6e,	// (0x000735ef) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0c6e,	// (0x000735ef) list_medium_line_x2_t4_g4_g1

0x3364,	// (0x00075ce5) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3364,	// (0x00075ce5) list_medium_line_x2_t4_g4_g2

0x3358,	// (0x00075cd9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x3358,	// (0x00075cd9) list_medium_line_x2_t4_g4_g3

0x0cea,	// (0x0007366b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0cea,	// (0x0007366b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf24e,	// (0x00081bcf) list_medium_line_x2_t4_g4_g_ParamLimits

0xf24e,	// (0x00081bcf) list_medium_line_x2_t4_g4_g

0x0cf6,	// (0x00073677) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0cf6,	// (0x00073677) list_medium_line_x2_t4_g4_t1

0x0d0d,	// (0x0007368e) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0d0d,	// (0x0007368e) list_medium_line_x2_t4_g4_t2

0x0d22,	// (0x000736a3) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0d22,	// (0x000736a3) list_medium_line_x2_t4_g4_t3

0x0d34,	// (0x000736b5) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0d34,	// (0x000736b5) list_medium_line_x2_t4_g4_t4

0x0003,

0xf257,	// (0x00081bd8) list_medium_line_x2_t4_g4_t_ParamLimits

0xf257,	// (0x00081bd8) list_medium_line_x2_t4_g4_t

0x0c6e,	// (0x000735ef) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0c6e,	// (0x000735ef) list_medium_line_x2_t2_g4_g1

0x3364,	// (0x00075ce5) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3364,	// (0x00075ce5) list_medium_line_x2_t2_g4_g2

0x3358,	// (0x00075cd9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x3358,	// (0x00075cd9) list_medium_line_x2_t2_g4_g3

0x0c7a,	// (0x000735fb) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0c7a,	// (0x000735fb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2be,	// (0x00081c3f) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2be,	// (0x00081c3f) list_medium_line_x2_t2_g4_g

0x0d46,	// (0x000736c7) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0d46,	// (0x000736c7) list_medium_line_x2_t2_g4_t1

0x0cad,	// (0x0007362e) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0cad,	// (0x0007362e) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2c7,	// (0x00081c48) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2c7,	// (0x00081c48) list_medium_line_x2_t2_g4_t

0x0c6e,	// (0x000735ef) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0c6e,	// (0x000735ef) list_medium_line_x2_t2_g3_g1

0x3358,	// (0x00075cd9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x3358,	// (0x00075cd9) list_medium_line_x2_t2_g3_g2

0x0c7a,	// (0x000735fb) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0c7a,	// (0x000735fb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf234,	// (0x00081bb5) list_medium_line_x2_t2_g3_g_ParamLimits

0xf234,	// (0x00081bb5) list_medium_line_x2_t2_g3_g

0x0d5b,	// (0x000736dc) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0d5b,	// (0x000736dc) list_medium_line_x2_t2_g3_t1

0x0cad,	// (0x0007362e) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0cad,	// (0x0007362e) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2cc,	// (0x00081c4d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2cc,	// (0x00081c4d) list_medium_line_x2_t2_g3_t

0x4762,	// (0x000770e3) main_sp_fs_list_pane_ParamLimits

0x4762,	// (0x000770e3) main_sp_fs_list_pane

0x476f,	// (0x000770f0) sp_fs_scroll_pane_ParamLimits

0x476f,	// (0x000770f0) sp_fs_scroll_pane

0x0d70,	// (0x000736f1) list_medium_line_x2_t3_t1

0x0d80,	// (0x00073701) list_medium_line_x2_t3_t2

0x0d8e,	// (0x0007370f) list_medium_line_x2_t3_t3

0x0002,

0xf317,	// (0x00081c98) list_medium_line_x2_t3_t

0x0d9c,	// (0x0007371d) list_medium_line_x3_t4_t1

0x0dac,	// (0x0007372d) list_medium_line_x3_t4_t2

0x0dba,	// (0x0007373b) list_medium_line_x3_t4_t3

0x0dc8,	// (0x00073749) list_medium_line_x3_t4_t4

0x0003,

0xf31e,	// (0x00081c9f) list_medium_line_x3_t4_t

0x0dd6,	// (0x00073757) list_medium_line_x4_t5_t1

0x0de6,	// (0x00073767) list_medium_line_x4_t5_t2

0x0dba,	// (0x0007373b) list_medium_line_x4_t5_t3

0x0df4,	// (0x00073775) list_medium_line_x4_t5_t4

0x0dc8,	// (0x00073749) list_medium_line_x4_t5_t5

0x0004,

0xf327,	// (0x00081ca8) list_medium_line_x4_t5_t

0x0c6e,	// (0x000735ef) list_medium_line_t4_g4_g1_ParamLimits

0x0c6e,	// (0x000735ef) list_medium_line_t4_g4_g1

0x0cea,	// (0x0007366b) list_medium_line_t4_g4_g2_ParamLimits

0x0cea,	// (0x0007366b) list_medium_line_t4_g4_g2

0x0e02,	// (0x00073783) list_medium_line_t4_g4_g3_ParamLimits

0x0e02,	// (0x00073783) list_medium_line_t4_g4_g3

0x0c7a,	// (0x000735fb) list_medium_line_t4_g4_g4_ParamLimits

0x0c7a,	// (0x000735fb) list_medium_line_t4_g4_g4

0x0003,

0xf332,	// (0x00081cb3) list_medium_line_t4_g4_g_ParamLimits

0xf332,	// (0x00081cb3) list_medium_line_t4_g4_g

0x0e0e,	// (0x0007378f) list_medium_line_t4_g4_t1_ParamLimits

0x0e0e,	// (0x0007378f) list_medium_line_t4_g4_t1

0x0e23,	// (0x000737a4) list_medium_line_t4_g4_t2_ParamLimits

0x0e23,	// (0x000737a4) list_medium_line_t4_g4_t2

0x0e39,	// (0x000737ba) list_medium_line_t4_g4_t3_ParamLimits

0x0e39,	// (0x000737ba) list_medium_line_t4_g4_t3

0x0e4f,	// (0x000737d0) list_medium_line_t4_g4_t4_ParamLimits

0x0e4f,	// (0x000737d0) list_medium_line_t4_g4_t4

0x0003,

0xf33b,	// (0x00081cbc) list_medium_line_t4_g4_t_ParamLimits

0xf33b,	// (0x00081cbc) list_medium_line_t4_g4_t

0x4a9d,	// (0x0007741e) chi_dic_find_pane_g1

0x61e0,	// (0x00078b61) main_tport_pane

0xccdb,	// (0x0007f65c) list_medium_line_plain_t1

0xccf1,	// (0x0007f672) list_medium_line_t2_g2_g1_ParamLimits

0xccf1,	// (0x0007f672) list_medium_line_t2_g2_g1

0xecfa,	// (0x0008167b) list_medium_line_t2_g2_g2_ParamLimits

0xecfa,	// (0x0008167b) list_medium_line_t2_g2_g2

0x0001,

0xfa05,	// (0x00082386) list_medium_line_t2_g2_g_ParamLimits

0xfa05,	// (0x00082386) list_medium_line_t2_g2_g

0x104b,	// (0x000739cc) list_medium_line_t2_g2_t1_ParamLimits

0x104b,	// (0x000739cc) list_medium_line_t2_g2_t1

0x1065,	// (0x000739e6) list_medium_line_t2_g2_t2_ParamLimits

0x1065,	// (0x000739e6) list_medium_line_t2_g2_t2

0x0001,

0xfa0a,	// (0x0008238b) list_medium_line_t2_g2_t_ParamLimits

0xfa0a,	// (0x0008238b) list_medium_line_t2_g2_t

0xd00c,	// (0x0007f98d) aid_sp_fs_list_icon_a_sm

0xed8f,	// (0x00081710) aid_sp_fs_list_icon_d

0xd014,	// (0x0007f995) aid_sp_fs_text_primary

0xed97,	// (0x00081718) aid_sp_fs_text_secondary

0xd01d,	// (0x0007f99e) list_medium_line

0xd01d,	// (0x0007f99e) list_medium_line_g2

0xd01d,	// (0x0007f99e) list_medium_line_g3

0xd01d,	// (0x0007f99e) list_medium_line_plain

0xd01d,	// (0x0007f99e) list_medium_line_plain_t2

0xd01d,	// (0x0007f99e) list_medium_line_plain_t3

0xd01d,	// (0x0007f99e) list_medium_line_right_icon

0xd01d,	// (0x0007f99e) list_medium_line_right_iconx2

0xd01d,	// (0x0007f99e) list_medium_line_t2

0xd01d,	// (0x0007f99e) list_medium_line_t2_g2

0xd01d,	// (0x0007f99e) list_medium_line_t2_g3

0xd01d,	// (0x0007f99e) list_medium_line_t2_right_icon

0xd01d,	// (0x0007f99e) list_medium_line_t2_right_iconx2

0xd01d,	// (0x0007f99e) list_medium_line_t3

0xd01d,	// (0x0007f99e) list_medium_line_t3_g2

0xd01d,	// (0x0007f99e) list_medium_line_t3_g3

0xd01d,	// (0x0007f99e) list_medium_line_t3_right_iconx2

0x91b3,	// (0x0007bb34) list_medium_line_t4_g4

0xeda0,	// (0x00081721) list_medium_line_x2

0xeda0,	// (0x00081721) list_medium_line_x2_t2_g2

0xeda0,	// (0x00081721) list_medium_line_x2_t2_g3

0xeda0,	// (0x00081721) list_medium_line_x2_t2_g4

0xeda0,	// (0x00081721) list_medium_line_x2_t3

0xeda0,	// (0x00081721) list_medium_line_x2_t3_g2

0xeda0,	// (0x00081721) list_medium_line_x2_t3_g3

0xeda0,	// (0x00081721) list_medium_line_x2_t3_g4

0xeda0,	// (0x00081721) list_medium_line_x2_t4_g2

0xeda0,	// (0x00081721) list_medium_line_x2_t4_g4

0xd026,	// (0x0007f9a7) list_medium_line_x3

0xd026,	// (0x0007f9a7) list_medium_line_x3_t4

0xd026,	// (0x0007f9a7) list_medium_line_x3_t4_g4

0x91b3,	// (0x0007bb34) list_medium_line_x4_t4

0x91b3,	// (0x0007bb34) list_medium_line_x4_t4_g7

0x91b3,	// (0x0007bb34) list_medium_line_x4_t5

0x11dc,	// (0x00073b5d) list_single_fs_dyc_pane_ParamLimits

0x11dc,	// (0x00073b5d) list_single_fs_dyc_pane

0x0c6e,	// (0x000735ef) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0c6e,	// (0x000735ef) list_medium_line_x4_t4_g7_g1

0x1214,	// (0x00073b95) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1214,	// (0x00073b95) list_medium_line_x4_t4_g7_g2

0x9834,	// (0x0007c1b5) list_medium_line_x4_t4_g7_g3_ParamLimits

0x9834,	// (0x0007c1b5) list_medium_line_x4_t4_g7_g3

0x9843,	// (0x0007c1c4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x9843,	// (0x0007c1c4) list_medium_line_x4_t4_g7_g4

0x1220,	// (0x00073ba1) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1220,	// (0x00073ba1) list_medium_line_x4_t4_g7_g5

0x122f,	// (0x00073bb0) list_medium_line_x4_t4_g7_g6_ParamLimits

0x122f,	// (0x00073bb0) list_medium_line_x4_t4_g7_g6

0x123e,	// (0x00073bbf) list_medium_line_x4_t4_g7_g7_ParamLimits

0x123e,	// (0x00073bbf) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd5,	// (0x00082556) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd5,	// (0x00082556) list_medium_line_x4_t4_g7_g

0x124a,	// (0x00073bcb) list_medium_line_x4_t4_g7_t1_ParamLimits

0x124a,	// (0x00073bcb) list_medium_line_x4_t4_g7_t1

0x125f,	// (0x00073be0) list_medium_line_x4_t4_g7_t2_ParamLimits

0x125f,	// (0x00073be0) list_medium_line_x4_t4_g7_t2

0x1274,	// (0x00073bf5) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1274,	// (0x00073bf5) list_medium_line_x4_t4_g7_t3

0x1289,	// (0x00073c0a) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1289,	// (0x00073c0a) list_medium_line_x4_t4_g7_t4

0x129b,	// (0x00073c1c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x129b,	// (0x00073c1c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe4,	// (0x00082565) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe4,	// (0x00082565) list_medium_line_x4_t4_g7_t

0x12ad,	// (0x00073c2e) list_single_dyc_row_pane_ParamLimits

0x12ad,	// (0x00073c2e) list_single_dyc_row_pane

0x9e4b,	// (0x0007c7cc) call5_gesture_pane_ParamLimits

0x9e4b,	// (0x0007c7cc) call5_gesture_pane

0x9e93,	// (0x0007c814) call5_windows_pane_ParamLimits

0x9e93,	// (0x0007c814) call5_windows_pane

0x9f44,	// (0x0007c8c5) call5_swipe_1_pane_cp_ParamLimits

0x9f44,	// (0x0007c8c5) call5_swipe_1_pane_cp

0x9f50,	// (0x0007c8d1) call5_swipe_2_pane_cp_ParamLimits

0x9f50,	// (0x0007c8d1) call5_swipe_2_pane_cp

0x2fc7,	// (0x00075948) call5_image_pane_cp

0x9f5c,	// (0x0007c8dd) popup_call5_audio_first_window_cp_ParamLimits

0x9f5c,	// (0x0007c8dd) popup_call5_audio_first_window_cp

0xdaff,	// (0x00080480) call5_swipe_1_pane_g1_cp_ParamLimits

0xdaff,	// (0x00080480) call5_swipe_1_pane_g1_cp

0xdb2d,	// (0x000804ae) call5_swipe_1_pane_g2_cp

0xdb18,	// (0x00080499) call5_swipe_1_pane_t1_cp_ParamLimits

0xdb18,	// (0x00080499) call5_swipe_1_pane_t1_cp

0xdaff,	// (0x00080480) call5_swipe_2_pane_g1_cp_ParamLimits

0xdaff,	// (0x00080480) call5_swipe_2_pane_g1_cp

0xdb35,	// (0x000804b6) call5_swipe_2_pane_g2_cp

0xdb3d,	// (0x000804be) call5_swipe_2_pane_t1_cp_ParamLimits

0xdb3d,	// (0x000804be) call5_swipe_2_pane_t1_cp

0xaeed,	// (0x0007d86e) main_sp_fs_email_pane

0xdb52,	// (0x000804d3) main_sp_fs_listscroll_pane_te

0xdb5b,	// (0x000804dc) popup_sp_fs_action_menu_pane_ParamLimits

0xdb5b,	// (0x000804dc) popup_sp_fs_action_menu_pane

0xc350,	// (0x0007ecd1) bg_sp_fs_ctrlbar_pane_g1

0xc908,	// (0x0007f289) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc91a,	// (0x0007f29b) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc911,	// (0x0007f292) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc350,	// (0x0007ecd1) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd2,	// (0x00082653) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc13d,	// (0x0007eabe) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc13d,	// (0x0007eabe) bg_sp_fs_ctrlbar_ddmenu_pane

0xdb8f,	// (0x00080510) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdb8f,	// (0x00080510) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdb9b,	// (0x0008051c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdb9b,	// (0x0008051c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdb,	// (0x0008265c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdb,	// (0x0008265c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdba7,	// (0x00080528) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdba7,	// (0x00080528) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xedb5,	// (0x00081736) list_medium_line_t2_right_icon_g1

0xdbc1,	// (0x00080542) list_medium_line_t2_right_icon_t1

0x1359,	// (0x00073cda) list_medium_line_t2_right_icon_t2

0x0001,

0xfce0,	// (0x00082661) list_medium_line_t2_right_icon_t

0xbe3c,	// (0x0007e7bd) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbe3c,	// (0x0007e7bd) bg_sp_fs_ctrlbar_pane

0x9fae,	// (0x0007c92f) main_sp_fs_ctrlbar_button_pane_cp01

0x9fb6,	// (0x0007c937) main_sp_fs_ctrlbar_ddmenu_pane

0xdc09,	// (0x0008058a) main_sp_fs_ctrlbar_pane_g1

0xdc15,	// (0x00080596) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce5,	// (0x00082666) main_sp_fs_ctrlbar_pane_g

0xdc21,	// (0x000805a2) main_sp_fs_ctrlbar_pane_t1

0x9fc0,	// (0x0007c941) main_sp_fs_ctrlbar_pane

0x9fe1,	// (0x0007c962) main_sp_fs_listscroll_pane_te_cp01

0x1367,	// (0x00073ce8) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x1367,	// (0x00073ce8) popup_sp_fs_action_menu_pane_cp01

0xaeed,	// (0x0007d86e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xaeed,	// (0x0007d86e) bg_sp_fs_highlight_list_pane_cp01

0xdc51,	// (0x000805d2) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdc51,	// (0x000805d2) sp_fs_action_menu_list_gene_pane_g1

0xdc60,	// (0x000805e1) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdc60,	// (0x000805e1) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcef,	// (0x00082670) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcef,	// (0x00082670) sp_fs_action_menu_list_gene_pane_g

0xdc6d,	// (0x000805ee) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdc6d,	// (0x000805ee) sp_fs_action_menu_list_gene_pane_t1

0xdc85,	// (0x00080606) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdc85,	// (0x00080606) sp_fs_action_menu_list_gene_pane

0xdca4,	// (0x00080625) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdca4,	// (0x00080625) popup_sp_fs_action_menu_bg_pane

0xdcb2,	// (0x00080633) sp_fs_action_menu_list_pane_ParamLimits

0xdcb2,	// (0x00080633) sp_fs_action_menu_list_pane

0xdcd2,	// (0x00080653) sp_fs_scroll_pane_cp01_ParamLimits

0xdcd2,	// (0x00080653) sp_fs_scroll_pane_cp01

0x1397,	// (0x00073d18) list_medium_line_plain_t2_t1

0x13a7,	// (0x00073d28) list_medium_line_plain_t2_t2

0x0001,

0xfcf4,	// (0x00082675) list_medium_line_plain_t2_t

0x13b5,	// (0x00073d36) list_medium_line_plain_t3_t1

0x13c5,	// (0x00073d46) list_medium_line_plain_t3_t2

0x13d3,	// (0x00073d54) list_medium_line_plain_t3_t3

0x0002,

0xfcf9,	// (0x0008267a) list_medium_line_plain_t3_t

0x0c6e,	// (0x000735ef) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0c6e,	// (0x000735ef) list_medium_line_x2_t2_g2_g1

0x0c7a,	// (0x000735fb) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0c7a,	// (0x000735fb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf242,	// (0x00081bc3) list_medium_line_x2_t2_g2_g_ParamLimits

0xf242,	// (0x00081bc3) list_medium_line_x2_t2_g2_g

0x0e0e,	// (0x0007378f) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0e0e,	// (0x0007378f) list_medium_line_x2_t2_g2_t1

0x0cad,	// (0x0007362e) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0cad,	// (0x0007362e) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd00,	// (0x00082681) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd00,	// (0x00082681) list_medium_line_x2_t2_g2_t

0x0c6e,	// (0x000735ef) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0c6e,	// (0x000735ef) list_medium_line_x2_t4_g2_g1

0x13e1,	// (0x00073d62) list_medium_line_x2_t4_g2_g2_ParamLimits

0x13e1,	// (0x00073d62) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd05,	// (0x00082686) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd05,	// (0x00082686) list_medium_line_x2_t4_g2_g

0x13f2,	// (0x00073d73) list_medium_line_x2_t4_g2_t1_ParamLimits

0x13f2,	// (0x00073d73) list_medium_line_x2_t4_g2_t1

0x1409,	// (0x00073d8a) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1409,	// (0x00073d8a) list_medium_line_x2_t4_g2_t2

0x141e,	// (0x00073d9f) list_medium_line_x2_t4_g2_t3_ParamLimits

0x141e,	// (0x00073d9f) list_medium_line_x2_t4_g2_t3

0x0cad,	// (0x0007362e) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0cad,	// (0x0007362e) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0a,	// (0x0008268b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0a,	// (0x0008268b) list_medium_line_x2_t4_g2_t

0xedbd,	// (0x0008173e) list_medium_line_t3_right_iconx2_g1

0xedb5,	// (0x00081736) list_medium_line_t3_right_iconx2_g2

0x1430,	// (0x00073db1) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd13,	// (0x00082694) list_medium_line_t3_right_iconx2_g

0x1438,	// (0x00073db9) list_medium_line_t3_right_iconx2_t1

0x1448,	// (0x00073dc9) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1a,	// (0x0008269b) list_medium_line_t3_right_iconx2_t

0x0c6e,	// (0x000735ef) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0c6e,	// (0x000735ef) list_medium_line_x3_t4_g4_g1

0x3358,	// (0x00075cd9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x3358,	// (0x00075cd9) list_medium_line_x3_t4_g4_g2

0x0cea,	// (0x0007366b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0cea,	// (0x0007366b) list_medium_line_x3_t4_g4_g3

0xa001,	// (0x0007c982) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa001,	// (0x0007c982) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1f,	// (0x000826a0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1f,	// (0x000826a0) list_medium_line_x3_t4_g4_g

0x1456,	// (0x00073dd7) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1456,	// (0x00073dd7) list_medium_line_x3_t4_g4_t1

0x146d,	// (0x00073dee) list_medium_line_x3_t4_g4_t2_ParamLimits

0x146d,	// (0x00073dee) list_medium_line_x3_t4_g4_t2

0x1482,	// (0x00073e03) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1482,	// (0x00073e03) list_medium_line_x3_t4_g4_t3

0x1497,	// (0x00073e18) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1497,	// (0x00073e18) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd28,	// (0x000826a9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd28,	// (0x000826a9) list_medium_line_x3_t4_g4_t

0x14b4,	// (0x00073e35) list_single_dyc_row_text_pane_t1_ParamLimits

0x14b4,	// (0x00073e35) list_single_dyc_row_text_pane_t1

0x14eb,	// (0x00073e6c) list_single_dyc_row_text_pane_t2_ParamLimits

0x14eb,	// (0x00073e6c) list_single_dyc_row_text_pane_t2

0xdcf8,	// (0x00080679) list_single_dyc_row_text_pane_t3_ParamLimits

0xdcf8,	// (0x00080679) list_single_dyc_row_text_pane_t3

0x0005,

0xfd31,	// (0x000826b2) list_single_dyc_row_text_pane_t_ParamLimits

0xfd31,	// (0x000826b2) list_single_dyc_row_text_pane_t

0xdd1c,	// (0x0008069d) list_single_dyc_row_pane_g1_ParamLimits

0xdd1c,	// (0x0008069d) list_single_dyc_row_pane_g1

0xdd28,	// (0x000806a9) list_single_dyc_row_pane_g2_ParamLimits

0xdd28,	// (0x000806a9) list_single_dyc_row_pane_g2

0xdd34,	// (0x000806b5) list_single_dyc_row_pane_g3_ParamLimits

0xdd34,	// (0x000806b5) list_single_dyc_row_pane_g3

0xdd40,	// (0x000806c1) list_single_dyc_row_pane_g4_ParamLimits

0xdd40,	// (0x000806c1) list_single_dyc_row_pane_g4

0x0003,

0xfd3e,	// (0x000826bf) list_single_dyc_row_pane_g_ParamLimits

0xfd3e,	// (0x000826bf) list_single_dyc_row_pane_g

0xdd4c,	// (0x000806cd) list_single_dyc_row_text_pane_ParamLimits

0xdd4c,	// (0x000806cd) list_single_dyc_row_text_pane

0x1a31,	// (0x000743b2) bg_sp_fs_scroll_pane

0xdd6b,	// (0x000806ec) thumb_sp_fs_scroll_pane

0xccf1,	// (0x0007f672) list_medium_line_g1_ParamLimits

0xccf1,	// (0x0007f672) list_medium_line_g1

0xdd74,	// (0x000806f5) list_medium_line_t1_ParamLimits

0xdd74,	// (0x000806f5) list_medium_line_t1

0x0c6e,	// (0x000735ef) list_medium_line_x2_g1_ParamLimits

0x0c6e,	// (0x000735ef) list_medium_line_x2_g1

0x3358,	// (0x00075cd9) list_medium_line_x2_g2_ParamLimits

0x3358,	// (0x00075cd9) list_medium_line_x2_g2

0x0001,

0xfd47,	// (0x000826c8) list_medium_line_x2_g_ParamLimits

0xfd47,	// (0x000826c8) list_medium_line_x2_g

0xdd89,	// (0x0008070a) list_medium_line_x2_t1_ParamLimits

0xdd89,	// (0x0008070a) list_medium_line_x2_t1

0x0c6e,	// (0x000735ef) list_medium_line_x3_g1_ParamLimits

0x0c6e,	// (0x000735ef) list_medium_line_x3_g1

0x3358,	// (0x00075cd9) list_medium_line_x3_g2_ParamLimits

0x3358,	// (0x00075cd9) list_medium_line_x3_g2

0x0001,

0xfd47,	// (0x000826c8) list_medium_line_x3_g_ParamLimits

0xfd47,	// (0x000826c8) list_medium_line_x3_g

0xdd89,	// (0x0008070a) list_medium_line_x3_t1_ParamLimits

0xdd89,	// (0x0008070a) list_medium_line_x3_t1

0xdd9f,	// (0x00080720) thumb_sp_fs_scroll_pane_g1

0xdda8,	// (0x00080729) thumb_sp_fs_scroll_pane_g2

0xddb1,	// (0x00080732) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x000826cd) thumb_sp_fs_scroll_pane_g

0xdd9f,	// (0x00080720) bg_sp_fs_scroll_pane_g1

0xdda8,	// (0x00080729) bg_sp_fs_scroll_pane_g2

0xddb1,	// (0x00080732) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4c,	// (0x000826cd) bg_sp_fs_scroll_pane_g

0x0c6e,	// (0x000735ef) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0c6e,	// (0x000735ef) list_medium_line_x2_t3_g4_g1

0x3364,	// (0x00075ce5) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3364,	// (0x00075ce5) list_medium_line_x2_t3_g4_g2

0x3358,	// (0x00075cd9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x3358,	// (0x00075cd9) list_medium_line_x2_t3_g4_g3

0x0c7a,	// (0x000735fb) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0c7a,	// (0x000735fb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2be,	// (0x00081c3f) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2be,	// (0x00081c3f) list_medium_line_x2_t3_g4_g

0x160e,	// (0x00073f8f) list_medium_line_x2_t3_g4_t1_ParamLimits

0x160e,	// (0x00073f8f) list_medium_line_x2_t3_g4_t1

0x1624,	// (0x00073fa5) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1624,	// (0x00073fa5) list_medium_line_x2_t3_g4_t2

0x0cad,	// (0x0007362e) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0cad,	// (0x0007362e) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd53,	// (0x000826d4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd53,	// (0x000826d4) list_medium_line_x2_t3_g4_t

0xccf1,	// (0x0007f672) list_medium_line_g2_g1_ParamLimits

0xccf1,	// (0x0007f672) list_medium_line_g2_g1

0xecfa,	// (0x0008167b) list_medium_line_g2_g2_ParamLimits

0xecfa,	// (0x0008167b) list_medium_line_g2_g2

0x0001,

0xfa05,	// (0x00082386) list_medium_line_g2_g_ParamLimits

0xfa05,	// (0x00082386) list_medium_line_g2_g

0xddba,	// (0x0008073b) list_medium_line_g2_t1_ParamLimits

0xddba,	// (0x0008073b) list_medium_line_g2_t1

0xccf1,	// (0x0007f672) list_medium_line_t3_g2_g1_ParamLimits

0xccf1,	// (0x0007f672) list_medium_line_t3_g2_g1

0xecfa,	// (0x0008167b) list_medium_line_t3_g2_g2_ParamLimits

0xecfa,	// (0x0008167b) list_medium_line_t3_g2_g2

0x0001,

0xfa05,	// (0x00082386) list_medium_line_t3_g2_g_ParamLimits

0xfa05,	// (0x00082386) list_medium_line_t3_g2_g

0x163d,	// (0x00073fbe) list_medium_line_t3_g2_t1_ParamLimits

0x163d,	// (0x00073fbe) list_medium_line_t3_g2_t1

0x1654,	// (0x00073fd5) list_medium_line_t3_g2_t2_ParamLimits

0x1654,	// (0x00073fd5) list_medium_line_t3_g2_t2

0x1669,	// (0x00073fea) list_medium_line_t3_g2_t3_ParamLimits

0x1669,	// (0x00073fea) list_medium_line_t3_g2_t3

0x0002,

0xfd5a,	// (0x000826db) list_medium_line_t3_g2_t_ParamLimits

0xfd5a,	// (0x000826db) list_medium_line_t3_g2_t

0xedb5,	// (0x00081736) list_medium_line_right_icon_g1

0xddcf,	// (0x00080750) list_medium_line_right_icon_t1

0xccf1,	// (0x0007f672) list_medium_line_t2_g1_ParamLimits

0xccf1,	// (0x0007f672) list_medium_line_t2_g1

0xdddd,	// (0x0008075e) list_medium_line_t2_t1_ParamLimits

0xdddd,	// (0x0008075e) list_medium_line_t2_t1

0x167e,	// (0x00073fff) list_medium_line_t2_t2_ParamLimits

0x167e,	// (0x00073fff) list_medium_line_t2_t2

0x0001,

0xfd61,	// (0x000826e2) list_medium_line_t2_t_ParamLimits

0xfd61,	// (0x000826e2) list_medium_line_t2_t

0xccf1,	// (0x0007f672) list_medium_line_t3_g1_ParamLimits

0xccf1,	// (0x0007f672) list_medium_line_t3_g1

0x1693,	// (0x00074014) list_medium_line_t3_t1_ParamLimits

0x1693,	// (0x00074014) list_medium_line_t3_t1

0x16aa,	// (0x0007402b) list_medium_line_t3_t2_ParamLimits

0x16aa,	// (0x0007402b) list_medium_line_t3_t2

0x16bf,	// (0x00074040) list_medium_line_t3_t3_ParamLimits

0x16bf,	// (0x00074040) list_medium_line_t3_t3

0x0002,

0xfd66,	// (0x000826e7) list_medium_line_t3_t_ParamLimits

0xfd66,	// (0x000826e7) list_medium_line_t3_t

0xccf1,	// (0x0007f672) list_medium_line_g3_g1_ParamLimits

0xccf1,	// (0x0007f672) list_medium_line_g3_g1

0xedc5,	// (0x00081746) list_medium_line_g3_g2_ParamLimits

0xedc5,	// (0x00081746) list_medium_line_g3_g2

0xecfa,	// (0x0008167b) list_medium_line_g3_g3_ParamLimits

0xecfa,	// (0x0008167b) list_medium_line_g3_g3

0x0002,

0xfd6d,	// (0x000826ee) list_medium_line_g3_g_ParamLimits

0xfd6d,	// (0x000826ee) list_medium_line_g3_g

0xddf7,	// (0x00080778) list_medium_line_g3_t1_ParamLimits

0xddf7,	// (0x00080778) list_medium_line_g3_t1

0xccf1,	// (0x0007f672) list_medium_line_t2_g3_g1_ParamLimits

0xccf1,	// (0x0007f672) list_medium_line_t2_g3_g1

0xedc5,	// (0x00081746) list_medium_line_t2_g3_g2_ParamLimits

0xedc5,	// (0x00081746) list_medium_line_t2_g3_g2

0xecfa,	// (0x0008167b) list_medium_line_t2_g3_g3_ParamLimits

0xecfa,	// (0x0008167b) list_medium_line_t2_g3_g3

0x0002,

0xfd6d,	// (0x000826ee) list_medium_line_t2_g3_g_ParamLimits

0xfd6d,	// (0x000826ee) list_medium_line_t2_g3_g

0x16d1,	// (0x00074052) list_medium_line_t2_g3_t1_ParamLimits

0x16d1,	// (0x00074052) list_medium_line_t2_g3_t1

0x16e8,	// (0x00074069) list_medium_line_t2_g3_t2_ParamLimits

0x16e8,	// (0x00074069) list_medium_line_t2_g3_t2

0x0001,

0xfd74,	// (0x000826f5) list_medium_line_t2_g3_t_ParamLimits

0xfd74,	// (0x000826f5) list_medium_line_t2_g3_t

0xccf1,	// (0x0007f672) list_medium_line_t3_g3_g1_ParamLimits

0xccf1,	// (0x0007f672) list_medium_line_t3_g3_g1

0xedc5,	// (0x00081746) list_medium_line_t3_g3_g2_ParamLimits

0xedc5,	// (0x00081746) list_medium_line_t3_g3_g2

0xecfa,	// (0x0008167b) list_medium_line_t3_g3_g3_ParamLimits

0xecfa,	// (0x0008167b) list_medium_line_t3_g3_g3

0x0002,

0xfd6d,	// (0x000826ee) list_medium_line_t3_g3_g_ParamLimits

0xfd6d,	// (0x000826ee) list_medium_line_t3_g3_g

0x16fd,	// (0x0007407e) list_medium_line_t3_g3_t1_ParamLimits

0x16fd,	// (0x0007407e) list_medium_line_t3_g3_t1

0x1716,	// (0x00074097) list_medium_line_t3_g3_t2_ParamLimits

0x1716,	// (0x00074097) list_medium_line_t3_g3_t2

0x172c,	// (0x000740ad) list_medium_line_t3_g3_t3_ParamLimits

0x172c,	// (0x000740ad) list_medium_line_t3_g3_t3

0x0002,

0xfd79,	// (0x000826fa) list_medium_line_t3_g3_t_ParamLimits

0xfd79,	// (0x000826fa) list_medium_line_t3_g3_t

0xedbd,	// (0x0008173e) list_medium_line_right_iconx2_g1

0xedb5,	// (0x00081736) list_medium_line_right_iconx2_g2

0x0001,

0xfd80,	// (0x00082701) list_medium_line_right_iconx2_g

0xedd1,	// (0x00081752) list_medium_line_right_iconx2_t1

0xedbd,	// (0x0008173e) list_medium_line_t2_right_iconx2_g1

0xedb5,	// (0x00081736) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd80,	// (0x00082701) list_medium_line_t2_right_iconx2_g

0x1742,	// (0x000740c3) list_medium_line_t2_right_iconx2_t1

0x1752,	// (0x000740d3) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd85,	// (0x00082706) list_medium_line_t2_right_iconx2_t

0x1760,	// (0x000740e1) list_medium_line_x4_t4_t1

0x176e,	// (0x000740ef) list_medium_line_x4_t4_t2

0x177e,	// (0x000740ff) list_medium_line_x4_t4_t3

0x178e,	// (0x0007410f) list_medium_line_x4_t4_t4

0x0003,

0xfd8a,	// (0x0008270b) list_medium_line_x4_t4_t

0xa046,	// (0x0007c9c7) tport_appsw_pane_ParamLimits

0xa046,	// (0x0007c9c7) tport_appsw_pane

0xa057,	// (0x0007c9d8) tport_contact_pane_ParamLimits

0xa057,	// (0x0007c9d8) tport_contact_pane

0xa06b,	// (0x0007c9ec) tport_listscroll_pane_ParamLimits

0xa06b,	// (0x0007c9ec) tport_listscroll_pane

0xa083,	// (0x0007ca04) cell_tport_appsw_pane_ParamLimits

0xa083,	// (0x0007ca04) cell_tport_appsw_pane

0xee73,	// (0x000817f4) tport_appsw_pane_g1_ParamLimits

0xee73,	// (0x000817f4) tport_appsw_pane_g1

0xde0c,	// (0x0008078d) tport_contact_pane_g1

0xde15,	// (0x00080796) tport_contact_pane_t1

0xde23,	// (0x000807a4) tport_contact_pane_t2

0x0001,

0xfd93,	// (0x00082714) tport_contact_pane_t

0xde31,	// (0x000807b2) list_tport_pane

0x289c,	// (0x0007521d) scroll_pane_cp_030

0xde42,	// (0x000807c3) cell_tport_appsw_pane_g1

0xde52,	// (0x000807d3) cell_tport_appsw_pane_t1

0xde60,	// (0x000807e1) grid_highlight_pane_cp019

0xa0b9,	// (0x0007ca3a) list_tport_double_graphic_pane_ParamLimits

0xa0b9,	// (0x0007ca3a) list_tport_double_graphic_pane

0xaeed,	// (0x0007d86e) list_highlight_pane_cp023_ParamLimits

0xaeed,	// (0x0007d86e) list_highlight_pane_cp023

0xa0c6,	// (0x0007ca47) list_tport_double_graphic_pane_g1_ParamLimits

0xa0c6,	// (0x0007ca47) list_tport_double_graphic_pane_g1

0xa0d3,	// (0x0007ca54) list_tport_double_graphic_pane_t1_ParamLimits

0xa0d3,	// (0x0007ca54) list_tport_double_graphic_pane_t1

0xa0e8,	// (0x0007ca69) list_tport_double_graphic_pane_t2_ParamLimits

0xa0e8,	// (0x0007ca69) list_tport_double_graphic_pane_t2

0x0001,

0xfd9f,	// (0x00082720) list_tport_double_graphic_pane_t_ParamLimits

0xfd9f,	// (0x00082720) list_tport_double_graphic_pane_t

0x1a31,	// (0x000743b2) main_cale_note_pane

0x859b,	// (0x0007af1c) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x859b,	// (0x0007af1c) cell_vitu2_function_top_wide_pane_cp01

0x9b7d,	// (0x0007c4fe) wait_bar_pane_cp05_ParamLimits

0xaeed,	// (0x0007d86e) listscroll_cmail_pane

0xde68,	// (0x000807e9) list_cmail_pane

0xa0fa,	// (0x0007ca7b) list_cmail_body_pane

0xa0fa,	// (0x0007ca7b) list_single_cmail_header_caption_pane

0xa111,	// (0x0007ca92) list_single_cmail_header_detail_pane_ParamLimits

0xa111,	// (0x0007ca92) list_single_cmail_header_detail_pane

0xde84,	// (0x00080805) list_single_cmail_header_caption_pane_t1

0x179e,	// (0x0007411f) list_single_cmail_header_detail_pane_g1_ParamLimits

0x179e,	// (0x0007411f) list_single_cmail_header_detail_pane_g1

0xeddf,	// (0x00081760) list_single_cmail_header_detail_pane_g2_ParamLimits

0xeddf,	// (0x00081760) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda4,	// (0x00082725) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda4,	// (0x00082725) list_single_cmail_header_detail_pane_g

0x17b4,	// (0x00074135) list_single_cmail_header_detail_pane_t1_ParamLimits

0x17b4,	// (0x00074135) list_single_cmail_header_detail_pane_t1

0xdecc,	// (0x0008084d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdecc,	// (0x0008084d) list_single_cmail_header_editor_pane_bg

0xdee3,	// (0x00080864) list_cmail_body_pane_g1

0xdeec,	// (0x0008086d) list_cmail_body_pane_t1

0xee93,	// (0x00081814) list_single_cmail_header_editor_pane_bg_g1

0x390f,	// (0x00076290) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeea3,	// (0x00081824) list_single_cmail_header_editor_pane_bg_g1_copy2

0xee9b,	// (0x0008181c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcce9,	// (0x0007f66a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeec3,	// (0x00081844) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeeb3,	// (0x00081834) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeebb,	// (0x0008183c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x38ef,	// (0x00076270) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa13a,	// (0x0007cabb) calenote_gesture_pane_ParamLimits

0xa13a,	// (0x0007cabb) calenote_gesture_pane

0xa156,	// (0x0007cad7) calenote_window_pane_ParamLimits

0xa156,	// (0x0007cad7) calenote_window_pane

0xdefa,	// (0x0008087b) popup_note_window_cp01

0xa172,	// (0x0007caf3) calenote_swipe_1_pane_ParamLimits

0xa172,	// (0x0007caf3) calenote_swipe_1_pane

0x9f50,	// (0x0007c8d1) calenote_swipe_2_pane_ParamLimits

0x9f50,	// (0x0007c8d1) calenote_swipe_2_pane

0xdaff,	// (0x00080480) calenote_swipe_1_pane_g1_ParamLimits

0xdaff,	// (0x00080480) calenote_swipe_1_pane_g1

0xdb0c,	// (0x0008048d) calenote_swipe_1_pane_g2_ParamLimits

0xdb0c,	// (0x0008048d) calenote_swipe_1_pane_g2

0x0001,

0xfcc8,	// (0x00082649) calenote_swipe_1_pane_g_ParamLimits

0xfcc8,	// (0x00082649) calenote_swipe_1_pane_g

0xdf0c,	// (0x0008088d) calenote_swipe_1_pane_t1_ParamLimits

0xdf0c,	// (0x0008088d) calenote_swipe_1_pane_t1

0xdaff,	// (0x00080480) calenote_swipe_2_pane_g1_ParamLimits

0xdaff,	// (0x00080480) calenote_swipe_2_pane_g1

0xdf2b,	// (0x000808ac) calenote_swipe_2_pane_g2_ParamLimits

0xdf2b,	// (0x000808ac) calenote_swipe_2_pane_g2

0x0001,

0xfdb0,	// (0x00082731) calenote_swipe_2_pane_g_ParamLimits

0xfdb0,	// (0x00082731) calenote_swipe_2_pane_g

0xdf37,	// (0x000808b8) calenote_swipe_2_pane_t1_ParamLimits

0xdf37,	// (0x000808b8) calenote_swipe_2_pane_t1

0x1a31,	// (0x000743b2) main_mup_navstr_pane

0x73e1,	// (0x00079d62) main_mup3_pane_t7_ParamLimits

0x73e1,	// (0x00079d62) main_mup3_pane_t7

0xe9b3,	// (0x00081334) main_mp4_pane_g6_ParamLimits

0xe9b3,	// (0x00081334) main_mp4_pane_g6

0xeb65,	// (0x000814e6) main_image3_pane_t4_ParamLimits

0xeb65,	// (0x000814e6) main_image3_pane_t4

0xa187,	// (0x0007cb08) popup_navstr_preview_pane_ParamLimits

0xa187,	// (0x0007cb08) popup_navstr_preview_pane

0xa197,	// (0x0007cb18) scroll_navstr_pane_ParamLimits

0xa197,	// (0x0007cb18) scroll_navstr_pane

0x1a31,	// (0x000743b2) bg_popup_preview_window_pane_cp04

0xdf5e,	// (0x000808df) popup_navstr_preview_pane_t1

0xa1ab,	// (0x0007cb2c) scroll_navstr_pane_g1_ParamLimits

0xa1ab,	// (0x0007cb2c) scroll_navstr_pane_g1

0xa1bf,	// (0x0007cb40) scroll_navstr_pane_t1_ParamLimits

0xa1bf,	// (0x0007cb40) scroll_navstr_pane_t1

0xdf03,	// (0x00080884) bg_button_pane_cp014

0xdf03,	// (0x00080884) bg_button_pane_cp030

0x12ff,	// (0x00073c80) list_double_fisheye_pane_g4_ParamLimits

0x12ff,	// (0x00073c80) list_double_fisheye_pane_g4

0x130b,	// (0x00073c8c) list_double_fisheye_pane_g5_ParamLimits

0x130b,	// (0x00073c8c) list_double_fisheye_pane_g5

0xde78,	// (0x000807f9) sp_fs_scroll_pane_cp03

0xdc09,	// (0x0008058a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdc15,	// (0x00080596) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce5,	// (0x00082666) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdc21,	// (0x000805a2) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xde70,	// (0x000807f1) sp_fs_scroll_pane_cp02

0x28ed,	// (0x0007526e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x28ed,	// (0x0007526e) popup_sp_fs_calendar_preview_list_single_pane

0x1a31,	// (0x000743b2) main_cam6_pano_pane

0xaeed,	// (0x0007d86e) main_mup3_pane_ParamLimits

0x1a31,	// (0x000743b2) main_phacti_pane

0x9a70,	// (0x0007c3f1) bg_button_pane_cp11

0x9a88,	// (0x0007c409) main_mobtv_info_pane_g2_ParamLimits

0x9a88,	// (0x0007c409) main_mobtv_info_pane_g2

0x0001,

0xfc45,	// (0x000825c6) main_mobtv_info_pane_g_ParamLimits

0xfc45,	// (0x000825c6) main_mobtv_info_pane_g

0x9c3d,	// (0x0007c5be) sc_clock_pane_t5_ParamLimits

0x9c3d,	// (0x0007c5be) sc_clock_pane_t5

0x9ce8,	// (0x0007c669) main_radioblah_pane_g1_ParamLimits

0xda42,	// (0x000803c3) main_radioblah_pane_t3_ParamLimits

0xda42,	// (0x000803c3) main_radioblah_pane_t3

0xda5a,	// (0x000803db) main_radioblah_pane_t4_ParamLimits

0xda5a,	// (0x000803db) main_radioblah_pane_t4

0x9d10,	// (0x0007c691) main_radioblah_text_pane_ParamLimits

0x9d10,	// (0x0007c691) main_radioblah_text_pane

0x9d22,	// (0x0007c6a3) main_radioblah_info_pane_g1_ParamLimits

0x9db5,	// (0x0007c736) main_radioblah_info_pane_t4_ParamLimits

0x9db5,	// (0x0007c736) main_radioblah_info_pane_t4

0xaeed,	// (0x0007d86e) main_sp_fs_calendar_pane

0xa1d5,	// (0x0007cb56) main_phacti_pane_g1

0xa1dd,	// (0x0007cb5e) phacti_note_pane_ParamLimits

0xa1dd,	// (0x0007cb5e) phacti_note_pane

0xdf75,	// (0x000808f6) phacti_term_pane_ParamLimits

0xdf75,	// (0x000808f6) phacti_term_pane

0xdf8a,	// (0x0008090b) phacti_note_pane_t1_ParamLimits

0xdf8a,	// (0x0008090b) phacti_note_pane_t1

0xdfa1,	// (0x00080922) phacti_term_pane_g1

0xdfa9,	// (0x0008092a) phacti_term_pane_t1_ParamLimits

0xdfa9,	// (0x0008092a) phacti_term_pane_t1

0xdfd3,	// (0x00080954) popup_sp_fs_calendar_preview_list_single_pane_g1

0xdfdb,	// (0x0008095c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdba,	// (0x0008273b) popup_sp_fs_calendar_preview_list_single_pane_g

0xdfe3,	// (0x00080964) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdfe3,	// (0x00080964) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdff9,	// (0x0008097a) aid_popup_sp_fs_bg_corner_pane

0xc350,	// (0x0007ecd1) popup_sp_fs_calendar_preview_bg_pane_g1

0x1a31,	// (0x000743b2) popup_sp_fs_calendar_preview_bg_pane

0xe001,	// (0x00080982) popup_sp_fs_calendar_preview_list_pane

0xbe3c,	// (0x0007e7bd) bg_main_sp_fs_cale_pane_ParamLimits

0xbe3c,	// (0x0007e7bd) bg_main_sp_fs_cale_pane

0xe009,	// (0x0008098a) listscroll_cale_mrui_pane_ParamLimits

0xe009,	// (0x0008098a) listscroll_cale_mrui_pane

0xe01e,	// (0x0008099f) listscroll_sp_fs_schedule_track_pane

0xe027,	// (0x000809a8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe027,	// (0x000809a8) main_sp_fs_ctrlbar_pane_cp01

0xe03a,	// (0x000809bb) main_sp_fs_ribbon_pane

0xe042,	// (0x000809c3) popup_sp_fs_cale_preview_window

0xa240,	// (0x0007cbc1) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa240,	// (0x0007cbc1) list_single_sp_fs_schedule_track_pane

0xaeed,	// (0x0007d86e) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xaeed,	// (0x0007d86e) bg_sp_fs_highlight_list_pane_cp03

0xa254,	// (0x0007cbd5) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa254,	// (0x0007cbd5) list_single_sp_fs_schedule_track_pane_g1

0xa260,	// (0x0007cbe1) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa260,	// (0x0007cbe1) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdbf,	// (0x00082740) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdbf,	// (0x00082740) list_single_sp_fs_schedule_track_pane_g

0xa26c,	// (0x0007cbed) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa26c,	// (0x0007cbed) list_single_sp_fs_schedule_track_pane_t1

0xa286,	// (0x0007cc07) sp_fs_schedule_track_pane_ParamLimits

0xa286,	// (0x0007cc07) sp_fs_schedule_track_pane

0xe054,	// (0x000809d5) sp_fs_schedule_track_pane_g1

0xe05c,	// (0x000809dd) sp_fs_schedule_track_pane_g2

0xe064,	// (0x000809e5) sp_fs_schedule_track_pane_g3

0xe06c,	// (0x000809ed) sp_fs_schedule_track_pane_g4

0xe074,	// (0x000809f5) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc4,	// (0x00082745) sp_fs_schedule_track_pane_g

0xee93,	// (0x00081814) bg_sp_fs_schedule_viewer_highlight_g1

0x390f,	// (0x00076290) bg_sp_fs_schedule_viewer_highlight_g2

0xee9b,	// (0x0008181c) bg_sp_fs_schedule_viewer_highlight_g3

0xeea3,	// (0x00081824) bg_sp_fs_schedule_viewer_highlight_g4

0xcce9,	// (0x0007f66a) bg_sp_fs_schedule_viewer_highlight_g5

0xeeb3,	// (0x00081834) bg_sp_fs_schedule_viewer_highlight_g6

0xeebb,	// (0x0008183c) bg_sp_fs_schedule_viewer_highlight_g7

0xeec3,	// (0x00081844) bg_sp_fs_schedule_viewer_highlight_g8

0x38ef,	// (0x00076270) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdcf,	// (0x00082750) bg_sp_fs_schedule_viewer_highlight_g

0x1a31,	// (0x000743b2) bg_main_sp_fs_ribbon_pane

0xa297,	// (0x0007cc18) main_sp_fs_ribbon_pane_g1

0xe07c,	// (0x000809fd) main_sp_fs_ribbon_pane_t1

0xa2a0,	// (0x0007cc21) main_sp_fs_ribbon_pane_t2

0xe08b,	// (0x00080a0c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde2,	// (0x00082763) main_sp_fs_ribbon_pane_t

0xe09a,	// (0x00080a1b) main_sp_fs_ribbon_scheduler_pane

0xe0a2,	// (0x00080a23) bg_main_sp_fs_ribbon_pane_g1

0xe0ab,	// (0x00080a2c) bg_main_sp_fs_ribbon_pane_g2

0xe0b4,	// (0x00080a35) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde9,	// (0x0008276a) bg_main_sp_fs_ribbon_pane_g

0xe0bc,	// (0x00080a3d) main_sp_fs_ribbon_scheduler_pane_g1

0xe0c5,	// (0x00080a46) main_sp_fs_ribbon_scheduler_pane_g2

0xe0ce,	// (0x00080a4f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf0,	// (0x00082771) main_sp_fs_ribbon_scheduler_pane_g

0xe0d7,	// (0x00080a58) list_cale_mrui_pane

0xa2af,	// (0x0007cc30) sp_fs_scroll_pane_cp07_ParamLimits

0xa2af,	// (0x0007cc30) sp_fs_scroll_pane_cp07

0xa2c7,	// (0x0007cc48) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa2c7,	// (0x0007cc48) bg_sp_fs_schedule_viewer_highlight

0xe0e4,	// (0x00080a65) list_single_sp_fs_schedule_track_pane_cp01

0xe0ec,	// (0x00080a6d) list_sp_fs_schedule_track_pane

0xe0f4,	// (0x00080a75) sp_fs_scroll_pane_cp06_ParamLimits

0xe0f4,	// (0x00080a75) sp_fs_scroll_pane_cp06

0xc350,	// (0x0007ecd1) bgmain_sp_fs_calendar_pane_g1

0x17f0,	// (0x00074171) list_single_cale_mrui_pane_ParamLimits

0x17f0,	// (0x00074171) list_single_cale_mrui_pane

0xe106,	// (0x00080a87) list_single_cale_mrui_row_pane_ParamLimits

0xe106,	// (0x00080a87) list_single_cale_mrui_row_pane

0xe11c,	// (0x00080a9d) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe11c,	// (0x00080a9d) list_single_cale_mrui_row_pane_g1

0xe161,	// (0x00080ae2) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe161,	// (0x00080ae2) list_single_cale_mrui_row_pane_t1

0x1810,	// (0x00074191) list_single_cale_mrui_row_pane_t2_ParamLimits

0x1810,	// (0x00074191) list_single_cale_mrui_row_pane_t2

0xe173,	// (0x00080af4) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe173,	// (0x00080af4) list_single_cale_mrui_row_pane_t3

0xe1a2,	// (0x00080b23) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe1a2,	// (0x00080b23) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdfe,	// (0x0008277f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdfe,	// (0x0008277f) list_single_cale_mrui_row_pane_t

0x1876,	// (0x000741f7) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1876,	// (0x000741f7) list_single_cmail_header_editor_pane_bg_cp01

0x189a,	// (0x0007421b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x189a,	// (0x0007421b) list_single_cmail_header_editor_pane_bg_cp02

0xa2d7,	// (0x0007cc58) main_radioblah_text_pane_t1_ParamLimits

0xa2d7,	// (0x0007cc58) main_radioblah_text_pane_t1

0xe1d1,	// (0x00080b52) cam6_indi_pane_cp01

0xe1d9,	// (0x00080b5a) cam6_mode_pane_cp01

0xe1e1,	// (0x00080b62) cam6_pano_pane

0xe1ea,	// (0x00080b6b) cam6_zoom_pane_cp01

0xe1f2,	// (0x00080b73) cam6_pano_image_pane

0xe1fb,	// (0x00080b7c) cam6_pano_pane_g1

0xd7a9,	// (0x0008012a) cam6_pano_pane_g2

0xe204,	// (0x00080b85) cam6_pano_pane_g3

0xe20d,	// (0x00080b8e) cam6_pano_pane_g4

0xc8f5,	// (0x0007f276) cam6_pano_pane_g5

0xe216,	// (0x00080b97) cam6_pano_pane_g6

0xe21e,	// (0x00080b9f) cam6_pano_pane_g7

0xe226,	// (0x00080ba7) cam6_pano_pane_g8

0xe22f,	// (0x00080bb0) cam6_pano_pane_g9

0x0008,

0xfe07,	// (0x00082788) cam6_pano_pane_g

0x1a31,	// (0x000743b2) main_browser_tag_pane

0xdf56,	// (0x000808d7) grid_navstr_albumart_pane

0xe238,	// (0x00080bb9) cell_navstr_albumart_pane_ParamLimits

0xe238,	// (0x00080bb9) cell_navstr_albumart_pane

0x541f,	// (0x00077da0) cell_navstr_albumart_pane_g1

0xbc0d,	// (0x0007e58e) cell_navstr_albumart_pane_g2

0xbc1d,	// (0x0007e59e) cell_navstr_albumart_pane_g3

0xbc15,	// (0x0007e596) cell_navstr_albumart_pane_g4

0x0003,

0xfe1a,	// (0x0008279b) cell_navstr_albumart_pane_g

0xa2f0,	// (0x0007cc71) bt_list_pane_ParamLimits

0xa2f0,	// (0x0007cc71) bt_list_pane

0xa303,	// (0x0007cc84) bt_list_pane_t1

0xa312,	// (0x0007cc93) bt_list_pane_t2

0x0001,

0xfe23,	// (0x000827a4) bt_list_pane_t

0x1a31,	// (0x000743b2) main_cale_prevew_pane

0xa321,	// (0x0007cca2) popup_cale_preview_window_ParamLimits

0xa321,	// (0x0007cca2) popup_cale_preview_window

0xaeed,	// (0x0007d86e) bg_popup_preview_window_pane_cp05_ParamLimits

0xaeed,	// (0x0007d86e) bg_popup_preview_window_pane_cp05

0xe24f,	// (0x00080bd0) list_cale_preview_pane_ParamLimits

0xe24f,	// (0x00080bd0) list_cale_preview_pane

0xa336,	// (0x0007ccb7) list_double_cale_preview_pane_ParamLimits

0xa336,	// (0x0007ccb7) list_double_cale_preview_pane

0xa347,	// (0x0007ccc8) list_single_cale_preview_pane_ParamLimits

0xa347,	// (0x0007ccc8) list_single_cale_preview_pane

0xe25b,	// (0x00080bdc) list_single_cale_preview_pane_g1

0xe263,	// (0x00080be4) list_single_cale_preview_pane_t1_ParamLimits

0xe263,	// (0x00080be4) list_single_cale_preview_pane_t1

0xa35b,	// (0x0007ccdc) list_double_cale_preview_pane_g1

0xa363,	// (0x0007cce4) list_double_cale_preview_pane_t1_ParamLimits

0xa363,	// (0x0007cce4) list_double_cale_preview_pane_t1

0xa378,	// (0x0007ccf9) list_double_cale_preview_pane_t2_ParamLimits

0xa378,	// (0x0007ccf9) list_double_cale_preview_pane_t2

0x0001,

0xfe28,	// (0x000827a9) list_double_cale_preview_pane_t_ParamLimits

0xfe28,	// (0x000827a9) list_double_cale_preview_pane_t

0x1a31,	// (0x000743b2) main_ezdial_pane

0xaeed,	// (0x0007d86e) main_sp_fs_email_pane_ParamLimits

0x9f68,	// (0x0007c8e9) cmail_ddmenu_btn01_pane_ParamLimits

0x9f68,	// (0x0007c8e9) cmail_ddmenu_btn01_pane

0x9f7b,	// (0x0007c8fc) cmail_ddmenu_btn02_pane_ParamLimits

0x9f7b,	// (0x0007c8fc) cmail_ddmenu_btn02_pane

0x9f9e,	// (0x0007c91f) cmail_ddmenu_btn03_pane_ParamLimits

0x9f9e,	// (0x0007c91f) cmail_ddmenu_btn03_pane

0x9fc0,	// (0x0007c941) main_sp_fs_ctrlbar_pane_ParamLimits

0x9fe1,	// (0x0007c962) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa0fa,	// (0x0007ca7b) list_cmail_body_pane_ParamLimits

0xde92,	// (0x00080813) bg_button_pane_cp12

0xde9b,	// (0x0008081c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xde9b,	// (0x0008081c) list_single_cmail_header_detail_pane_g3

0xdea8,	// (0x00080829) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdea8,	// (0x00080829) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdab,	// (0x0008272c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdab,	// (0x0008272c) list_single_cmail_header_detail_pane_t

0xdfbe,	// (0x0008093f) phacti_term_pane_t2_ParamLimits

0xdfbe,	// (0x0008093f) phacti_term_pane_t2

0x0001,

0xfdb5,	// (0x00082736) phacti_term_pane_t_ParamLimits

0xfdb5,	// (0x00082736) phacti_term_pane_t

0xe278,	// (0x00080bf9) aid_size_list_single_double

0xa390,	// (0x0007cd11) popup_ezdial_listscroll_window

0xa3a6,	// (0x0007cd27) popup_number_entry_window_cp01

0x2fc7,	// (0x00075948) bg_popup_call_pane_cp09

0xe284,	// (0x00080c05) ezdial_list_pane

0xe28c,	// (0x00080c0d) scroll_pane_cp23

0xbe3c,	// (0x0007e7bd) bg_button_pane_cp028_ParamLimits

0xbe3c,	// (0x0007e7bd) bg_button_pane_cp028

0xa3b2,	// (0x0007cd33) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa3b2,	// (0x0007cd33) cmail_ddmenu_btn01_pane_g1

0xa3be,	// (0x0007cd3f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa3be,	// (0x0007cd3f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2d,	// (0x000827ae) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2d,	// (0x000827ae) cmail_ddmenu_btn01_pane_g

0xe294,	// (0x00080c15) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe294,	// (0x00080c15) cmail_ddmenu_btn01_pane_t1

0xbe3c,	// (0x0007e7bd) bg_button_pane_cp029_ParamLimits

0xbe3c,	// (0x0007e7bd) bg_button_pane_cp029

0xa3ca,	// (0x0007cd4b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa3ca,	// (0x0007cd4b) cmail_ddmenu_btn02_pane_g1

0xa3e2,	// (0x0007cd63) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa3e2,	// (0x0007cd63) cmail_ddmenu_btn02_pane_t1

0xaeed,	// (0x0007d86e) bg_button_pane_cp031_ParamLimits

0xaeed,	// (0x0007d86e) bg_button_pane_cp031

0xa3ca,	// (0x0007cd4b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa3ca,	// (0x0007cd4b) cmail_ddmenu_btn03_pane_g1

0xa3e2,	// (0x0007cd63) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa3e2,	// (0x0007cd63) cmail_ddmenu_btn03_pane_t1

0x7ed4,	// (0x0007a855) cell_dialer2_keypad_pane_t1_ParamLimits

0x7eee,	// (0x0007a86f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x7eee,	// (0x0007a86f) cell_dialer2_keypad_pane_t1_copy1

0x98dc,	// (0x0007c25d) ncimui_group_button_pane

0xaeed,	// (0x0007d86e) main_sp_fs_calendar_pane_ParamLimits

0xa0fa,	// (0x0007ca7b) list_single_cmail_header_caption_pane_ParamLimits

0xedeb,	// (0x0008176c) aid_recal_txt_sm_pane

0x1a31,	// (0x000743b2) mian_recal_day_pane

0xe042,	// (0x000809c3) popup_sp_fs_cale_preview_window_ParamLimits

0xe2a9,	// (0x00080c2a) list_recal_day_pane

0xe2eb,	// (0x00080c6c) list_single_recal_day_pane_ParamLimits

0xe2eb,	// (0x00080c6c) list_single_recal_day_pane

0xe2fd,	// (0x00080c7e) list_single_recal_day_pane_g1_ParamLimits

0xe2fd,	// (0x00080c7e) list_single_recal_day_pane_g1

0xe309,	// (0x00080c8a) list_single_recal_day_pane_g2_ParamLimits

0xe309,	// (0x00080c8a) list_single_recal_day_pane_g2

0xe315,	// (0x00080c96) list_single_recal_day_pane_g3_ParamLimits

0xe315,	// (0x00080c96) list_single_recal_day_pane_g3

0x18b8,	// (0x00074239) list_single_recal_day_pane_g4_ParamLimits

0x18b8,	// (0x00074239) list_single_recal_day_pane_g4

0xe321,	// (0x00080ca2) list_single_recal_day_pane_g5_ParamLimits

0xe321,	// (0x00080ca2) list_single_recal_day_pane_g5

0x18d0,	// (0x00074251) list_single_recal_day_pane_g6_ParamLimits

0x18d0,	// (0x00074251) list_single_recal_day_pane_g6

0x0004,

0xfe3c,	// (0x000827bd) list_single_recal_day_pane_g_ParamLimits

0xfe3c,	// (0x000827bd) list_single_recal_day_pane_g

0xe335,	// (0x00080cb6) list_single_recal_day_pane_t1

0x18dc,	// (0x0007425d) list_single_recal_day_pane_t2

0x0001,

0xfe47,	// (0x000827c8) list_single_recal_day_pane_t

0xa406,	// (0x0007cd87) ncimui_query_button_pane_ParamLimits

0xa406,	// (0x0007cd87) ncimui_query_button_pane

0xa416,	// (0x0007cd97) ncimui_query_button_pane_t1_ParamLimits

0xa416,	// (0x0007cd97) ncimui_query_button_pane_t1

0xe347,	// (0x00080cc8) ncimui_query_button_pane_t2_ParamLimits

0xe347,	// (0x00080cc8) ncimui_query_button_pane_t2

0x0001,

0xfe4c,	// (0x000827cd) ncimui_query_button_pane_t_ParamLimits

0xfe4c,	// (0x000827cd) ncimui_query_button_pane_t

0xa429,	// (0x0007cdaa) query_button_pane_ParamLimits

0xa429,	// (0x0007cdaa) query_button_pane

0x1a31,	// (0x000743b2) bg_button_pane_cp0028

0xe35a,	// (0x00080cdb) query_button_pane_t1

0x61e0,	// (0x00078b61) main_tport_pane_ParamLimits

0xa00d,	// (0x0007c98e) bg_popup_window_pane_cp01_ParamLimits

0xa00d,	// (0x0007c98e) bg_popup_window_pane_cp01

0xa024,	// (0x0007c9a5) heading_pane_cp08_ParamLimits

0xa024,	// (0x0007c9a5) heading_pane_cp08

0xa035,	// (0x0007c9b6) heading_pane_cp07_ParamLimits

0xa035,	// (0x0007c9b6) heading_pane_cp07

0xde42,	// (0x000807c3) cell_tport_appsw_pane_g2

0x0002,

0xfd98,	// (0x00082719) cell_tport_appsw_pane_g

0xb076,	// (0x0007d9f7) input_candi_list_open_g1

0x459e,	// (0x00076f1f) list_cale_time_pane_g6_ParamLimits

0x459e,	// (0x00076f1f) list_cale_time_pane_g6

0x6e72,	// (0x000797f3) aid_size_touch_calib_1_ParamLimits

0x6e72,	// (0x000797f3) aid_size_touch_calib_1

0x6e84,	// (0x00079805) aid_size_touch_calib_2_ParamLimits

0x6e84,	// (0x00079805) aid_size_touch_calib_2

0x6e9a,	// (0x0007981b) aid_size_touch_calib_3_ParamLimits

0x6e9a,	// (0x0007981b) aid_size_touch_calib_3

0x6eb2,	// (0x00079833) aid_size_touch_calib_4_ParamLimits

0x6eb2,	// (0x00079833) aid_size_touch_calib_4

0x6ec6,	// (0x00079847) main_touch_calib_button_group_pane_ParamLimits

0x6ec6,	// (0x00079847) main_touch_calib_button_group_pane

0x6ede,	// (0x0007985f) main_touch_calib_pane_g1_ParamLimits

0x6ef0,	// (0x00079871) main_touch_calib_pane_g2_ParamLimits

0x6f02,	// (0x00079883) main_touch_calib_pane_g3_ParamLimits

0x6f14,	// (0x00079895) main_touch_calib_pane_g4_ParamLimits

0xf760,	// (0x000820e1) main_touch_calib_pane_g_ParamLimits

0x6f26,	// (0x000798a7) main_touch_calib_pane_t1_ParamLimits

0x6f3e,	// (0x000798bf) main_touch_calib_pane_t2_ParamLimits

0x6f56,	// (0x000798d7) main_touch_calib_pane_t3_ParamLimits

0x6f68,	// (0x000798e9) main_touch_calib_pane_t4_ParamLimits

0x6f7a,	// (0x000798fb) main_touch_calib_pane_t5_ParamLimits

0xf769,	// (0x000820ea) main_touch_calib_pane_t_ParamLimits

0xc6ab,	// (0x0007f02c) list_single_fp_cale_pane_g3_ParamLimits

0xc6ab,	// (0x0007f02c) list_single_fp_cale_pane_g3

0xaeed,	// (0x0007d86e) bg_button_pane_cp012_ParamLimits

0xaeed,	// (0x0007d86e) bg_vkb2_func_pane_cp03_ParamLimits

0x8d06,	// (0x0007b687) cell_vitu2_function_top_pane_g1_ParamLimits

0xaeed,	// (0x0007d86e) bg_vkb2_func_pane_cp04_ParamLimits

0x986c,	// (0x0007c1ed) main_ncimui_button_group_pane_ParamLimits

0x986c,	// (0x0007c1ed) main_ncimui_button_group_pane

0x98ca,	// (0x0007c24b) main_ncimui_pane_t3_ParamLimits

0x98ca,	// (0x0007c24b) main_ncimui_pane_t3

0xdf6c,	// (0x000808ed) phacti_button_group_pane

0xe278,	// (0x00080bf9) aid_size_list_single_double_ParamLimits

0xa390,	// (0x0007cd11) popup_ezdial_listscroll_window_ParamLimits

0xa3a6,	// (0x0007cd27) popup_number_entry_window_cp01_ParamLimits

0xa43b,	// (0x0007cdbc) phacti_button_pane_ParamLimits

0xa43b,	// (0x0007cdbc) phacti_button_pane

0x1a31,	// (0x000743b2) bg_button_pane_cp14

0xe368,	// (0x00080ce9) phacti_button_pane_t1

0xa44a,	// (0x0007cdcb) main_touch_calib_button_pane_ParamLimits

0xa44a,	// (0x0007cdcb) main_touch_calib_button_pane

0x2659,	// (0x00074fda) bg_button_pane_cp18_ParamLimits

0x2659,	// (0x00074fda) bg_button_pane_cp18

0xa465,	// (0x0007cde6) main_touch_calib_button_pane_t1_ParamLimits

0xa465,	// (0x0007cde6) main_touch_calib_button_pane_t1

0xa47b,	// (0x0007cdfc) main_touch_calib_button_pane_t2_ParamLimits

0xa47b,	// (0x0007cdfc) main_touch_calib_button_pane_t2

0x0001,

0xfe51,	// (0x000827d2) main_touch_calib_button_pane_t_ParamLimits

0xfe51,	// (0x000827d2) main_touch_calib_button_pane_t

0x1a31,	// (0x000743b2) cell_ncimui_button_pane

0x1a31,	// (0x000743b2) bg_button_pane_cp032

0xe376,	// (0x00080cf7) cell_ncimui_button_pane_t1

0xeb45,	// (0x000814c6) image3_infobar_pane_ParamLimits

0xeb45,	// (0x000814c6) image3_infobar_pane

0x9c65,	// (0x0007c5e6) fs_bigclock_status_pane_ParamLimits

0x9c65,	// (0x0007c5e6) fs_bigclock_status_pane

0x9c72,	// (0x0007c5f3) main_fs_bigclock_clock_pane_ParamLimits

0x9c72,	// (0x0007c5f3) main_fs_bigclock_clock_pane

0x9c94,	// (0x0007c615) main_fs_bigclock_indi_pane_ParamLimits

0x9c94,	// (0x0007c615) main_fs_bigclock_indi_pane

0x9cbe,	// (0x0007c63f) main_fs_bigclock_swipe_pane_ParamLimits

0x9cbe,	// (0x0007c63f) main_fs_bigclock_swipe_pane

0x1a31,	// (0x000743b2) main_fs_clock_dumped_data

0xd8b6,	// (0x00080237) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd8b6,	// (0x00080237) list_single_fs_bigclock_indicator_pane_g1

0xd8d0,	// (0x00080251) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd8d0,	// (0x00080251) list_single_fs_bigclock_indicator_pane_g2

0xd8ea,	// (0x0008026b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd8ea,	// (0x0008026b) list_single_fs_bigclock_indicator_pane_g3

0xd904,	// (0x00080285) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd904,	// (0x00080285) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc79,	// (0x000825fa) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc79,	// (0x000825fa) list_single_fs_bigclock_indicator_pane_g

0xd92d,	// (0x000802ae) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd92d,	// (0x000802ae) list_single_fs_bigclock_indicator_pane_t1

0xd955,	// (0x000802d6) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd955,	// (0x000802d6) list_single_fs_bigclock_indicator_pane_t2

0xd97d,	// (0x000802fe) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd97d,	// (0x000802fe) list_single_fs_bigclock_indicator_pane_t3

0xd9a5,	// (0x00080326) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd9a5,	// (0x00080326) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc84,	// (0x00082605) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc84,	// (0x00082605) list_single_fs_bigclock_indicator_pane_t

0xe384,	// (0x00080d05) image3_infobar_fav_pane_ParamLimits

0xe384,	// (0x00080d05) image3_infobar_fav_pane

0xe394,	// (0x00080d15) image3_infobar_loc_pane_ParamLimits

0xe394,	// (0x00080d15) image3_infobar_loc_pane

0xe3a8,	// (0x00080d29) image3_infobar_time_pane_ParamLimits

0xe3a8,	// (0x00080d29) image3_infobar_time_pane

0xc350,	// (0x0007ecd1) image3_infobar_time_pane_g1

0xe3b8,	// (0x00080d39) image3_infobar_time_pane_t1

0xc350,	// (0x0007ecd1) image3_infobar_loc_pane_g1

0xe3c6,	// (0x00080d47) image3_infobar_loc_pane_g2

0x0001,

0xfe56,	// (0x000827d7) image3_infobar_loc_pane_g

0xe3ce,	// (0x00080d4f) image3_infobar_loc_pane_t1

0xc350,	// (0x0007ecd1) image3_infobar_fav_pane_g1

0xe3dc,	// (0x00080d5d) image3_infobar_fav_pane_g2

0x0001,

0xfe5b,	// (0x000827dc) image3_infobar_fav_pane_g

0xe3e4,	// (0x00080d65) fs_bigclock_status_battery_pane

0xe3ed,	// (0x00080d6e) fs_bigclock_status_signal_pane

0xe3f6,	// (0x00080d77) fs_bigclock_status_title_pane

0xe3ff,	// (0x00080d80) fs_bigclock_status_signal_pane_g1

0xe408,	// (0x00080d89) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe60,	// (0x000827e1) fs_bigclock_status_signal_pane_g

0xe410,	// (0x00080d91) fs_bigclock_status_battery_pane_g1

0xe419,	// (0x00080d9a) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe65,	// (0x000827e6) fs_bigclock_status_battery_pane_g

0xe421,	// (0x00080da2) fs_bigclock_status_title_pane_t1

0xa499,	// (0x0007ce1a) main_fs_bigclock_clock_pane_g1

0xa4ab,	// (0x0007ce2c) main_fs_bigclock_clock_pane_g2

0xa4bc,	// (0x0007ce3d) main_fs_bigclock_clock_pane_g3

0xa4bc,	// (0x0007ce3d) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6a,	// (0x000827eb) main_fs_bigclock_clock_pane_g

0xa4cf,	// (0x0007ce50) main_fs_bigclock_clock_pane_t1

0xa4ea,	// (0x0007ce6b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe73,	// (0x000827f4) main_fs_bigclock_clock_pane_t

0xe42f,	// (0x00080db0) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe42f,	// (0x00080db0) list_single_fs_bigclock_indicator_pane

0xe440,	// (0x00080dc1) list_single_fs_bigclock_pane_ParamLimits

0xe440,	// (0x00080dc1) list_single_fs_bigclock_pane

0xe466,	// (0x00080de7) main_fs_bigclock_indicator_pane_t1

0xe475,	// (0x00080df6) list_single_fs_bigclock_pane_g1

0xe47d,	// (0x00080dfe) list_single_fs_bigclock_pane_t1

0xc350,	// (0x0007ecd1) main_fs_bigclock_swipe_pane_g1

0xe4bd,	// (0x00080e3e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe84,	// (0x00082805) main_fs_bigclock_swipe_pane_g

0xe4c5,	// (0x00080e46) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe4c5,	// (0x00080e46) main_fs_bigclock_swipe_pane_t1

0x488a,	// (0x0007720b) call_type_pane_ParamLimits

0x1a31,	// (0x000743b2) main_btmg_pane

0xe148,	// (0x00080ac9) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe148,	// (0x00080ac9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf7,	// (0x00082778) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf7,	// (0x00082778) list_single_cale_mrui_row_pane_g

0xe2d2,	// (0x00080c53) list_recal_vselct_arw_lo_pane

0xe2da,	// (0x00080c5b) list_recal_vselct_arw_up_pane

0xe2e2,	// (0x00080c63) list_recal_vselct_pane

0xe4e2,	// (0x00080e63) btmg_button_pane

0xa54a,	// (0x0007cecb) main_btmg_pane_g1

0x1a31,	// (0x000743b2) bg_button_pane_cp044

0xe4ea,	// (0x00080e6b) btmg_button_pane_t1

0xbe28,	// (0x0007e7a9) aid_listscroll_gen

0xaeed,	// (0x0007d86e) main_cntbar_detail_pane

0xde68,	// (0x000807e9) list_cmail_folder_pane

0xde78,	// (0x000807f9) sp_fs_scroll_pane_cp03_ParamLimits

0x18ee,	// (0x0007426f) list_single_fs_dyc_pane_cp01_ParamLimits

0x18ee,	// (0x0007426f) list_single_fs_dyc_pane_cp01

0xe4f8,	// (0x00080e79) aid_size_cmail_indent

0xe501,	// (0x00080e82) list_single_dyc_row_pane_cp01

0xa57a,	// (0x0007cefb) cntbar_detail_list_pane_ParamLimits

0xa57a,	// (0x0007cefb) cntbar_detail_list_pane

0xa5c0,	// (0x0007cf41) main_cntbar_detail_cont_pane_ParamLimits

0xa5c0,	// (0x0007cf41) main_cntbar_detail_cont_pane

0xa5d4,	// (0x0007cf55) scroll_pane_cp032_ParamLimits

0xa5d4,	// (0x0007cf55) scroll_pane_cp032

0xa5e0,	// (0x0007cf61) cntbar_detail_list_event_pane_ParamLimits

0xa5e0,	// (0x0007cf61) cntbar_detail_list_event_pane

0xa58a,	// (0x0007cf0b) cntbar_detail_list_shct_pane

0xe50a,	// (0x00080e8b) aid_list_gen

0x289c,	// (0x0007521d) aid_scroll

0xd003,	// (0x0007f984) aid_size_touch_scroll_bar

0xeda0,	// (0x00081721) aid_list_double

0xd01d,	// (0x0007f99e) aid_list_single

0xd01d,	// (0x0007f99e) aid_list_single_lg

0xe513,	// (0x00080e94) aid_list_z_g_a_sm

0xe89a,	// (0x0008121b) aid_list_z_g_d

0xe51b,	// (0x00080e9c) aid_txt_z_prm

0x1904,	// (0x00074285) aid_txt_z_prm_cp01

0x1912,	// (0x00074293) aid_txt_z_sec

0xa5f1,	// (0x0007cf72) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa5f1,	// (0x0007cf72) main_cntbar_detail_cont_pane_g1

0xa605,	// (0x0007cf86) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa605,	// (0x0007cf86) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe89,	// (0x0008280a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe89,	// (0x0008280a) main_cntbar_detail_cont_pane_g

0xe529,	// (0x00080eaa) main_cntbar_detail_cont_pane_t1

0xe537,	// (0x00080eb8) main_cntbar_detail_cont_pane_t2

0xe545,	// (0x00080ec6) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe8e,	// (0x0008280f) main_cntbar_detail_cont_pane_t

0xa615,	// (0x0007cf96) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa615,	// (0x0007cf96) cell_cntbar_detail_list_shct_pane

0xe553,	// (0x00080ed4) cntbar_detail_list_shct_pane_g1

0xe55c,	// (0x00080edd) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe95,	// (0x00082816) cntbar_detail_list_shct_pane_g

0xa627,	// (0x0007cfa8) cntbar_detail_list_event_pane_g1_ParamLimits

0xa627,	// (0x0007cfa8) cntbar_detail_list_event_pane_g1

0xa633,	// (0x0007cfb4) cntbar_detail_list_event_pane_g2_ParamLimits

0xa633,	// (0x0007cfb4) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9a,	// (0x0008281b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9a,	// (0x0008281b) cntbar_detail_list_event_pane_g

0xa69f,	// (0x0007d020) cntbar_detail_list_event_pane_t1_ParamLimits

0xa69f,	// (0x0007d020) cntbar_detail_list_event_pane_t1

0xa6b4,	// (0x0007d035) cntbar_detail_list_event_pane_t2_ParamLimits

0xa6b4,	// (0x0007d035) cntbar_detail_list_event_pane_t2

0x0002,

0xfea7,	// (0x00082828) cntbar_detail_list_event_pane_t_ParamLimits

0xfea7,	// (0x00082828) cntbar_detail_list_event_pane_t

0xc350,	// (0x0007ecd1) cell_cntbar_detail_list_shct_pane_g1

0x4e88,	// (0x00077809) navi_pane_mv_g3

0xaeed,	// (0x0007d86e) main_cntbar_detail_pane_ParamLimits

0x1a31,	// (0x000743b2) main_notif_wgt_pane

0xe941,	// (0x000812c2) aid_tch_main_mp4_pane_g4

0xeb3d,	// (0x000814be) popup_slider_window_cp02

0xe2c8,	// (0x00080c49) list_recal_day_event_pane

0xa552,	// (0x0007ced3) cntbar_detail_btn_pane_ParamLimits

0xa552,	// (0x0007ced3) cntbar_detail_btn_pane

0xa565,	// (0x0007cee6) cntbar_detail_btn_pane_cp01_ParamLimits

0xa565,	// (0x0007cee6) cntbar_detail_btn_pane_cp01

0xa58a,	// (0x0007cf0b) cntbar_detail_list_shct_pane_ParamLimits

0xa59a,	// (0x0007cf1b) cntbar_detail_pane_g1_ParamLimits

0xa59a,	// (0x0007cf1b) cntbar_detail_pane_g1

0xa5aa,	// (0x0007cf2b) cntbar_detail_pane_t1_ParamLimits

0xa5aa,	// (0x0007cf2b) cntbar_detail_pane_t1

0xa63f,	// (0x0007cfc0) cntbar_detail_list_event_pane_g3_ParamLimits

0xa63f,	// (0x0007cfc0) cntbar_detail_list_event_pane_g3

0xa657,	// (0x0007cfd8) cntbar_detail_list_event_pane_g4_ParamLimits

0xa657,	// (0x0007cfd8) cntbar_detail_list_event_pane_g4

0xa66f,	// (0x0007cff0) cntbar_detail_list_event_pane_g5_ParamLimits

0xa66f,	// (0x0007cff0) cntbar_detail_list_event_pane_g5

0xa687,	// (0x0007d008) cntbar_detail_list_event_pane_g6_ParamLimits

0xa687,	// (0x0007d008) cntbar_detail_list_event_pane_g6

0xa6c9,	// (0x0007d04a) cntbar_detail_list_event_pane_t3_ParamLimits

0xa6c9,	// (0x0007d04a) cntbar_detail_list_event_pane_t3

0xa6db,	// (0x0007d05c) popup_notif_wgt_window_ParamLimits

0xa6db,	// (0x0007d05c) popup_notif_wgt_window

0xa6f0,	// (0x0007d071) popup_submenu_window_cp01_ParamLimits

0xa6f0,	// (0x0007d071) popup_submenu_window_cp01

0x2fc7,	// (0x00075948) bg_popup_window_pane_cp10

0xe565,	// (0x00080ee6) listscroll_notif_wgt_pane

0xe576,	// (0x00080ef7) list_notif_wgt_window

0xe57f,	// (0x00080f00) scroll_pane_cp033

0xa700,	// (0x0007d081) list_notif_wgt_row_pane_ParamLimits

0xa700,	// (0x0007d081) list_notif_wgt_row_pane

0xe588,	// (0x00080f09) aid_size_list_notif_wgt_del

0xe595,	// (0x00080f16) list_notif_wgt_row_pane_g1

0xe5a1,	// (0x00080f22) list_notif_wgt_row_pane_g2

0xe5b5,	// (0x00080f36) list_notif_wgt_row_pane_g3

0x0002,

0xfeae,	// (0x0008282f) list_notif_wgt_row_pane_g

0xe5c2,	// (0x00080f43) list_notif_wgt_row_pane_t1

0xe5d8,	// (0x00080f59) list_notif_wgt_row_pane_t2

0xe5ea,	// (0x00080f6b) list_notif_wgt_row_pane_t3

0x0002,

0xfeb5,	// (0x00082836) list_notif_wgt_row_pane_t

0xccfd,	// (0x0007f67e) list_recal_day_event_pane_g1

0xe5fc,	// (0x00080f7d) list_recal_day_event_pane_t1

0x1a31,	// (0x000743b2) bg_button_pane_cp045

0xa710,	// (0x0007d091) cntbar_detail_btn_pane_t1

0xbe3c,	// (0x0007e7bd) main_callh_pane_ParamLimits

0xbe3c,	// (0x0007e7bd) main_callh_pane

0x1a31,	// (0x000743b2) main_coverflow0_pane

0x1a31,	// (0x000743b2) main_wgtman_pane

0x9cd2,	// (0x0007c653) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9cd2,	// (0x0007c653) main_fs_bigclock_unlock_btn_pane

0xde3a,	// (0x000807bb) bg_button_pane_cp16

0xde4a,	// (0x000807cb) cell_tport_appsw_pane_g3

0xa71e,	// (0x0007d09f) cf0_flow_pane_ParamLimits

0xa71e,	// (0x0007d09f) cf0_flow_pane

0xe60b,	// (0x00080f8c) listscroll_cf0_pane

0xe614,	// (0x00080f95) main_cf0_pane_g1

0xa733,	// (0x0007d0b4) main_cf0_pane_t1_ParamLimits

0xa733,	// (0x0007d0b4) main_cf0_pane_t1

0xa748,	// (0x0007d0c9) main_cf0_pane_t2_ParamLimits

0xa748,	// (0x0007d0c9) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x00082842) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x00082842) main_cf0_pane_t

0xe626,	// (0x00080fa7) scroll_pane_cp11

0xa75d,	// (0x0007d0de) cf0_flow_pane_g1

0xa765,	// (0x0007d0e6) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x00082847) cf0_flow_pane_g

0xa76d,	// (0x0007d0ee) cf0_flow_pane_t1

0x1a31,	// (0x000743b2) main_call6_pane

0x1a31,	// (0x000743b2) main_calllock_pane

0xa77b,	// (0x0007d0fc) call6_btn_grp_pane_ParamLimits

0xa77b,	// (0x0007d0fc) call6_btn_grp_pane

0xa791,	// (0x0007d112) call6_pane_g1_ParamLimits

0xa791,	// (0x0007d112) call6_pane_g1

0xa7a4,	// (0x0007d125) popup_call6_1st_window_ParamLimits

0xa7a4,	// (0x0007d125) popup_call6_1st_window

0xa7b3,	// (0x0007d134) popup_call6_2nd_window_ParamLimits

0xa7b3,	// (0x0007d134) popup_call6_2nd_window

0xa7c2,	// (0x0007d143) cell_call6_btn_pane_ParamLimits

0xa7c2,	// (0x0007d143) cell_call6_btn_pane

0x2fc7,	// (0x00075948) bg_popup_call2_in_pane_cp03

0xe62f,	// (0x00080fb0) popup_call6_1st_window_g1

0xe637,	// (0x00080fb8) popup_call6_1st_window_g2

0xe63f,	// (0x00080fc0) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x0008284c) popup_call6_1st_window_g

0xe647,	// (0x00080fc8) popup_call6_1st_window_t1

0xe656,	// (0x00080fd7) popup_call6_1st_window_t2

0xe664,	// (0x00080fe5) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x00082853) popup_call6_1st_window_t

0x2fc7,	// (0x00075948) bg_popup_call2_in_pane_cp04

0xe62f,	// (0x00080fb0) popup_call6_2nd_window_g1

0xe637,	// (0x00080fb8) popup_call6_2nd_window_g2

0xe63f,	// (0x00080fc0) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x0008284c) popup_call6_2nd_window_g

0xe647,	// (0x00080fc8) popup_call6_2nd_window_t1

0x1a31,	// (0x000743b2) bg_button_pane_cp15

0xedf4,	// (0x00081775) cell_call6_btn_pane_g1

0xedfd,	// (0x0008177e) cell_call6_btn_pane_t1

0xa7d6,	// (0x0007d157) listscroll_wgtman_pane_ParamLimits

0xa7d6,	// (0x0007d157) listscroll_wgtman_pane

0xa7f7,	// (0x0007d178) wgtman_btn_pane_ParamLimits

0xa7f7,	// (0x0007d178) wgtman_btn_pane

0x4ad0,	// (0x00077451) aid_scroll_copy1

0xe672,	// (0x00080ff3) list_wgtman_pane

0xa837,	// (0x0007d1b8) wgtman_btn_pane_g1_ParamLimits

0xa837,	// (0x0007d1b8) wgtman_btn_pane_g1

0xa863,	// (0x0007d1e4) wgtman_btn_pane_t1_ParamLimits

0xa863,	// (0x0007d1e4) wgtman_btn_pane_t1

0xe67c,	// (0x00080ffd) wgtman_btn_pane_t2_ParamLimits

0xe67c,	// (0x00080ffd) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x0008285a) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x0008285a) wgtman_btn_pane_t

0xa8a0,	// (0x0007d221) listrow_wgtman_pane_ParamLimits

0xa8a0,	// (0x0007d221) listrow_wgtman_pane

0xa8b1,	// (0x0007d232) listrow_wgtman_pane_g1

0xa8be,	// (0x0007d23f) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x0008285f) listrow_wgtman_pane_g

0x1920,	// (0x000742a1) listrow_wgtman_pane_t1

0x1938,	// (0x000742b9) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x00082864) listrow_wgtman_pane_t

0x195e,	// (0x000742df) wait_bar_pane_cp09

0xe693,	// (0x00081014) main_calllock_btn_pane

0xe69b,	// (0x0008101c) main_calllock_pane_g1

0x1a31,	// (0x000743b2) bg_button_pane_cp17

0xe6a4,	// (0x00081025) main_calllock_btn_pane_g1

0xe6ad,	// (0x0008102e) main_calllock_btn_pane_t1

0x1a31,	// (0x000743b2) main_dialer3_pane

0x1a31,	// (0x000743b2) main_fmrd2_pane

0xc350,	// (0x0007ecd1) main_fs_bigclock_unlock_btn_pane_g1

0xe6c4,	// (0x00081045) main_fs_bigclock_unlock_btn_pane_t1

0xa8d6,	// (0x0007d257) area_fmrd2_info_pane_ParamLimits

0xa8d6,	// (0x0007d257) area_fmrd2_info_pane

0xa8e5,	// (0x0007d266) area_fmrd2_visual_pane_ParamLimits

0xa8e5,	// (0x0007d266) area_fmrd2_visual_pane

0xa8f3,	// (0x0007d274) fmrd2_indi_pane_ParamLimits

0xa8f3,	// (0x0007d274) fmrd2_indi_pane

0xa900,	// (0x0007d281) area_fmrd2_visual_pane_g1

0xa908,	// (0x0007d289) area_fmrd2_visual_pane_t1

0xa916,	// (0x0007d297) area_fmrd2_visual_pane_t2

0xa924,	// (0x0007d2a5) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x0008286e) area_fmrd2_visual_pane_t

0xa932,	// (0x0007d2b3) area_fmrd2_info_pane_g1

0xa93a,	// (0x0007d2bb) area_fmrd2_info_pane_t1

0xa948,	// (0x0007d2c9) area_fmrd2_info_pane_t2

0xa956,	// (0x0007d2d7) area_fmrd2_info_pane_t3

0xa964,	// (0x0007d2e5) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00082875) area_fmrd2_info_pane_t

0xa972,	// (0x0007d2f3) fmrd2_indi_pane_t1

0xa980,	// (0x0007d301) fmrd2_indi_pane_t2

0xa98e,	// (0x0007d30f) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x0008287e) fmrd2_indi_pane_t

0xd913,	// (0x00080294) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd913,	// (0x00080294) list_single_fs_bigclock_indicator_pane_g5

0xd9c1,	// (0x00080342) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd9c1,	// (0x00080342) list_single_fs_bigclock_indicator_pane_t5

0xa1f1,	// (0x0007cb72) aid_cell_bcale_month_pane_ParamLimits

0xa1f1,	// (0x0007cb72) aid_cell_bcale_month_pane

0xa20f,	// (0x0007cb90) bcale_month_pane_ParamLimits

0xa20f,	// (0x0007cb90) bcale_month_pane

0xa227,	// (0x0007cba8) bcale_preview_pane_ParamLimits

0xa227,	// (0x0007cba8) bcale_preview_pane

0xe47d,	// (0x00080dfe) list_single_fs_bigclock_pane_t1_ParamLimits

0xe499,	// (0x00080e1a) list_single_fs_bigclock_pane_t2_ParamLimits

0xe499,	// (0x00080e1a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7f,	// (0x00082800) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7f,	// (0x00082800) list_single_fs_bigclock_pane_t

0xe6bc,	// (0x0008103d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00082869) main_fs_bigclock_unlock_btn_pane_g

0xa99c,	// (0x0007d31d) aid_dia3_key_size_ParamLimits

0xa99c,	// (0x0007d31d) aid_dia3_key_size

0xa9ab,	// (0x0007d32c) aid_dia3_listrow_size_ParamLimits

0xa9ab,	// (0x0007d32c) aid_dia3_listrow_size

0xa9be,	// (0x0007d33f) dia3_keypad_fun_pane_ParamLimits

0xa9be,	// (0x0007d33f) dia3_keypad_fun_pane

0xa9d2,	// (0x0007d353) dia3_keypad_num_pane_ParamLimits

0xa9d2,	// (0x0007d353) dia3_keypad_num_pane

0xa9e3,	// (0x0007d364) dia3_listscroll_pane_ParamLimits

0xa9e3,	// (0x0007d364) dia3_listscroll_pane

0xa9f4,	// (0x0007d375) dia3_numentry_pane_ParamLimits

0xa9f4,	// (0x0007d375) dia3_numentry_pane

0xe6d2,	// (0x00081053) dia3_list_pane

0xe6db,	// (0x0008105c) scroll_pane_cp12

0x1a31,	// (0x000743b2) bg_dia3_numentry_pane

0xaa06,	// (0x0007d387) dia3_numentry_pane_t1

0xaa15,	// (0x0007d396) cell_dia3_key_num_pane

0xaa1d,	// (0x0007d39e) cell_dia3_key0_fun_pane_ParamLimits

0xaa1d,	// (0x0007d39e) cell_dia3_key0_fun_pane

0xaa31,	// (0x0007d3b2) cell_dia3_key1_fun_pane_ParamLimits

0xaa31,	// (0x0007d3b2) cell_dia3_key1_fun_pane

0xaa48,	// (0x0007d3c9) dia3_listrow_pane

0xd614,	// (0x0007ff95) bg_dia3_numentry_pane_g1

0x1a31,	// (0x000743b2) bg_button_pane_cp21

0xe6e4,	// (0x00081065) cell_dia3_key_num_pane_t1

0xe6f2,	// (0x00081073) cell_dia3_key_num_pane_t2

0xe701,	// (0x00081082) cell_dia3_key_num_pane_t3

0xe710,	// (0x00081091) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00082885) cell_dia3_key_num_pane_t

0x1a31,	// (0x000743b2) bg_button_pane_cp19

0xe71f,	// (0x000810a0) cell_dia3_key0_fun_pane_g1

0x1a31,	// (0x000743b2) bg_button_pane_cp20

0xaa5a,	// (0x0007d3db) cell_dia3_key1_fun_pane_g1

0xaa62,	// (0x0007d3e3) area_left_week_number_pane

0xaa6e,	// (0x0007d3ef) area_top_day_name_pane

0xaa7f,	// (0x0007d400) frame_month_view_pane

0xe727,	// (0x000810a8) grid_month_view_pane

0xaa90,	// (0x0007d411) cell_top_day_name_pane_ParamLimits

0xaa90,	// (0x0007d411) cell_top_day_name_pane

0xaab3,	// (0x0007d434) cell_area_left_week_number_pane_ParamLimits

0xaab3,	// (0x0007d434) cell_area_left_week_number_pane

0xaac7,	// (0x0007d448) cell_month_view_pane_ParamLimits

0xaac7,	// (0x0007d448) cell_month_view_pane

0xe735,	// (0x000810b6) frm_month_g1

0xaaec,	// (0x0007d46d) frm_month_g2

0xaafd,	// (0x0007d47e) frm_month_g3

0xab0e,	// (0x0007d48f) frm_month_g4

0xab1f,	// (0x0007d4a0) frm_month_g5

0xab30,	// (0x0007d4b1) frm_month_g6

0xab41,	// (0x0007d4c2) frm_month_g7

0xe742,	// (0x000810c3) frm_month_g8

0xab52,	// (0x0007d4d3) frm_month_g9

0xab62,	// (0x0007d4e3) frm_month_g10

0xab72,	// (0x0007d4f3) frm_month_g11

0xab82,	// (0x0007d503) frm_month_g12

0xab92,	// (0x0007d513) frm_month_g13

0xaba2,	// (0x0007d523) frm_month_g14

0xabb2,	// (0x0007d533) frm_month_g15

0xabc4,	// (0x0007d545) frm_month_g16

0x000f,

0xff0d,	// (0x0008288e) frm_month_g

0xe74f,	// (0x000810d0) cell_top_day_name_pane_t1

0xabd6,	// (0x0007d557) cell_area_left_week_number_pane_g1

0xabe2,	// (0x0007d563) cell_area_left_week_number_pane_t1

0xc57f,	// (0x0007ef00) cell_month_view_pane_g1

0xabf5,	// (0x0007d576) cell_month_view_pane_t1

0x1a31,	// (0x000743b2) main_fps_pane

0xdbd1,	// (0x00080552) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdbd1,	// (0x00080552) cmail_ddmenu_btn02_pane_cp1

0xdbed,	// (0x0008056e) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdbed,	// (0x0008056e) cmail_ddmenu_btn02_pane_cp2

0xa3d6,	// (0x0007cd57) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa3d6,	// (0x0007cd57) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe32,	// (0x000827b3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe32,	// (0x000827b3) cmail_ddmenu_btn02_pane_g

0xa3f4,	// (0x0007cd75) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa3f4,	// (0x0007cd75) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe37,	// (0x000827b8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe37,	// (0x000827b8) cmail_ddmenu_btn02_pane_t

0xac08,	// (0x0007d589) fps_text_pane_ParamLimits

0xac08,	// (0x0007d589) fps_text_pane

0xac1e,	// (0x0007d59f) main_fps_pane_g1_ParamLimits

0xac1e,	// (0x0007d59f) main_fps_pane_g1

0xac34,	// (0x0007d5b5) wait_bar_pane_cp010_ParamLimits

0xac34,	// (0x0007d5b5) wait_bar_pane_cp010

0xac45,	// (0x0007d5c6) fps_text_pane_t1_ParamLimits

0xac45,	// (0x0007d5c6) fps_text_pane_t1

0xf086,	// (0x00081a07) cam4_image_uncrop_pane_g1

0xf08f,	// (0x00081a10) cam4_image_uncrop_pane_g2

0x8327,	// (0x0007aca8) cam4_image_uncrop_pane_g3

0x8330,	// (0x0007acb1) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x00082282) cam4_image_uncrop_pane_g

0xaa48,	// (0x0007d3c9) dia3_listrow_pane_ParamLimits

0x1a31,	// (0x000743b2) main_phob2_pane

0xa094,	// (0x0007ca15) cell_tport_appsw_pane_cp02_ParamLimits

0xa094,	// (0x0007ca15) cell_tport_appsw_pane_cp02

0xa0a4,	// (0x0007ca25) cell_tport_appsw_pane_cp03_ParamLimits

0xa0a4,	// (0x0007ca25) cell_tport_appsw_pane_cp03

0x1a31,	// (0x000743b2) phob2_contact_card_pane

0x1a31,	// (0x000743b2) phob2_listscroll_pane

0xe762,	// (0x000810e3) phob2_list_pane

0xe76a,	// (0x000810eb) scroll_pane_cp034

0xac5d,	// (0x0007d5de) phob2_cc_data_pane_ParamLimits

0xac5d,	// (0x0007d5de) phob2_cc_data_pane

0xac7a,	// (0x0007d5fb) phob2_cc_listscroll_pane_ParamLimits

0xac7a,	// (0x0007d5fb) phob2_cc_listscroll_pane

0xa8a0,	// (0x0007d221) list_double_large_graphic_phob2_pane_ParamLimits

0xa8a0,	// (0x0007d221) list_double_large_graphic_phob2_pane

0xac96,	// (0x0007d617) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xac96,	// (0x0007d617) list_double_large_graphic_phob2_pane_g1

0x1970,	// (0x000742f1) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1970,	// (0x000742f1) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x000828af) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x000828af) list_double_large_graphic_phob2_pane_g

0x197c,	// (0x000742fd) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x197c,	// (0x000742fd) list_double_large_graphic_phob2_pane_t1

0x1992,	// (0x00074313) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1992,	// (0x00074313) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x000828b4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x000828b4) list_double_large_graphic_phob2_pane_t

0x1a31,	// (0x000743b2) list_highlight_pane_cp024

0xacac,	// (0x0007d62d) phob2_cc_button_pane

0xacb4,	// (0x0007d635) phob2_cc_data_pane_g1_ParamLimits

0xacb4,	// (0x0007d635) phob2_cc_data_pane_g1

0xacc9,	// (0x0007d64a) phob2_cc_data_pane_g2_ParamLimits

0xacc9,	// (0x0007d64a) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x000828b9) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x000828b9) phob2_cc_data_pane_g

0xacd9,	// (0x0007d65a) phob2_cc_data_pane_t1_ParamLimits

0xacd9,	// (0x0007d65a) phob2_cc_data_pane_t1

0xacf1,	// (0x0007d672) phob2_cc_data_pane_t2_ParamLimits

0xacf1,	// (0x0007d672) phob2_cc_data_pane_t2

0xad09,	// (0x0007d68a) phob2_cc_data_pane_t3_ParamLimits

0xad09,	// (0x0007d68a) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x000828be) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x000828be) phob2_cc_data_pane_t

0xe772,	// (0x000810f3) phob2_cc_list_pane_ParamLimits

0xe772,	// (0x000810f3) phob2_cc_list_pane

0xd531,	// (0x0007feb2) scroll_pane_cp035_ParamLimits

0xd531,	// (0x0007feb2) scroll_pane_cp035

0xaeed,	// (0x0007d86e) bg_button_pane_cp033

0xe77e,	// (0x000810ff) phob2_cc_button_pane_g1

0xe78a,	// (0x0008110b) phob2_cc_button_pane_t1

0xe79f,	// (0x00081120) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x000828c5) phob2_cc_button_pane_t

0xad21,	// (0x0007d6a2) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xad21,	// (0x0007d6a2) list_double_large_graphic_phob2_cc_pane

0xad4f,	// (0x0007d6d0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xad4f,	// (0x0007d6d0) list_double_large_graphic_phob2_cc_pane_g1

0xad5b,	// (0x0007d6dc) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xad5b,	// (0x0007d6dc) list_double_large_graphic_phob2_cc_pane_g2

0x19a7,	// (0x00074328) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x19a7,	// (0x00074328) list_double_large_graphic_phob2_cc_pane_g3

0x19b3,	// (0x00074334) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x19b3,	// (0x00074334) list_double_large_graphic_phob2_cc_pane_g4

0x19bf,	// (0x00074340) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x19bf,	// (0x00074340) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x000828ca) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x000828ca) list_double_large_graphic_phob2_cc_pane_g

0x19cb,	// (0x0007434c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x19cb,	// (0x0007434c) list_double_large_graphic_phob2_cc_pane_t1

0x19f4,	// (0x00074375) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x19f4,	// (0x00074375) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x000828d5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x000828d5) list_double_large_graphic_phob2_cc_pane_t

0xe7b1,	// (0x00081132) list_highlight_pane_cp025_ParamLimits

0xe7b1,	// (0x00081132) list_highlight_pane_cp025

0xaeed,	// (0x0007d86e) bg_button_pane_cp033_ParamLimits

0xe77e,	// (0x000810ff) phob2_cc_button_pane_g1_ParamLimits

0xe78a,	// (0x0008110b) phob2_cc_button_pane_t1_ParamLimits

0xe79f,	// (0x00081120) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x000828c5) phob2_cc_button_pane_t_ParamLimits

0x1c1f,	// (0x000745a0) popup_wgtman_window

0xd634,	// (0x0007ffb5) scroll_pane_cp038

0xa819,	// (0x0007d19a) wgtman_btn_pane_cp_01_ParamLimits

0xa819,	// (0x0007d19a) wgtman_btn_pane_cp_01

0xe7bf,	// (0x00081140) wgtman_content_pane

0xe7c8,	// (0x00081149) wgtman_heading_pane

0x1a31,	// (0x000743b2) bg_heading_pane_cp02

0xe7d1,	// (0x00081152) wgtman_heading_pane_g1

0xe7d9,	// (0x0008115a) wgtman_heading_pane_t1

0xe7e7,	// (0x00081168) scroll_pane_cp036

0xe7ef,	// (0x00081170) wgtman_list_pane

0xe7f7,	// (0x00081178) wgtman_list_pane_t1_ParamLimits

0xe7f7,	// (0x00081178) wgtman_list_pane_t1

0xebc9,	// (0x0008154a) cam4_grid_pane

0x107a,	// (0x000739fb) bg_button_pane_cp015_ParamLimits

0x8e81,	// (0x0007b802) bg_button_pane_cp016_ParamLimits

0x8e93,	// (0x0007b814) bg_button_pane_cp017_ParamLimits

0x10b8,	// (0x00073a39) popup_vitu2_query_window_g3_ParamLimits

0x10b8,	// (0x00073a39) popup_vitu2_query_window_g3

0x1131,	// (0x00073ab2) popup_vitu2_query_window_t6_ParamLimits

0x1131,	// (0x00073ab2) popup_vitu2_query_window_t6

0x115c,	// (0x00073add) popup_vitu2_query_window_t7_ParamLimits

0x115c,	// (0x00073add) popup_vitu2_query_window_t7

0xf086,	// (0x00081a07) cam4_grid_pane_g1

0xf08f,	// (0x00081a10) cam4_grid_pane_g2

0xe80e,	// (0x0008118f) cam4_grid_pane_g3

0xe817,	// (0x00081198) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x000828da) cam4_grid_pane_g

0x3406,	// (0x00075d87) aid_placing_vt_slider_lsc_ParamLimits

0x36c4,	// (0x00076045) vidtel_button_pane_ParamLimits

0x36c4,	// (0x00076045) vidtel_button_pane

0x1a31,	// (0x000743b2) bg_button_pane_cp034

0xad67,	// (0x0007d6e8) vidtel_button_pane_g1

0xad6f,	// (0x0007d6f0) vidtel_button_pane_t1

0xccd3,	// (0x0007f654) aid_size_vtel_slider_touch

0xd531,	// (0x0007feb2) scroll_pane_cp039

0xd663,	// (0x0007ffe4) ncim_query_button_pane_cp01_ParamLimits

0xd682,	// (0x00080003) ncimui_query_pane_g1_ParamLimits

0xaeed,	// (0x0007d86e) input_focus_pane_cp012_ParamLimits

0xd6a7,	// (0x00080028) ncim_query_entry_pane_t1_ParamLimits

0xd531,	// (0x0007feb2) scroll_pane_cp039_ParamLimits

0x4d86,	// (0x00077707) navi_pane_bcale_mc_g1

0x4d8e,	// (0x0007770f) navi_pane_bcale_mc_t1

0xdc36,	// (0x000805b7) main_sp_fs_email_pane_g1

0xdc42,	// (0x000805c3) main_sp_fs_email_pane_g2

0x0001,

0xfcea,	// (0x0008266b) main_sp_fs_email_pane_g

0xe154,	// (0x00080ad5) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe154,	// (0x00080ad5) list_single_cale_mrui_row_pane_g3

0x18c6,	// (0x00074247) list_single_recal_day_pane_g5_event_pane

0xe32d,	// (0x00080cae) list_single_recal_day_pane_g7

0xe820,	// (0x000811a1) list_recal_day_event_pane_cp01

0xe829,	// (0x000811aa) list_recal_vselct_arw_lo_pane_cp01

0xe831,	// (0x000811b2) list_recal_vselct_arw_up_pane_cp01

0xe839,	// (0x000811ba) list_recal_vselct_pane_cp01

0xccfd,	// (0x0007f67e) list_recal_day_event_pane_cp01_g1

0xe843,	// (0x000811c4) list_recal_day_event_pane_cp01_t1

0xe335,	// (0x00080cb6) list_single_recal_day_pane_t1_ParamLimits

0x18dc,	// (0x0007425d) list_single_recal_day_pane_t2_ParamLimits

0xfe47,	// (0x000827c8) list_single_recal_day_pane_t_ParamLimits

0x2333,	// (0x00074cb4) bg_notes_pane_ParamLimits

0x2621,	// (0x00074fa2) list_notes_pane_ParamLimits

0x262f,	// (0x00074fb0) scroll_pane_cp06_ParamLimits

0x2659,	// (0x00074fda) main_notes_pane_ParamLimits

0x1a31,	// (0x000743b2) main_welc_pane

0xad85,	// (0x0007d706) main_welc_body_pane_ParamLimits

0xad85,	// (0x0007d706) main_welc_body_pane

0xada1,	// (0x0007d722) main_welc_opti_pane_ParamLimits

0xada1,	// (0x0007d722) main_welc_opti_pane

0xadde,	// (0x0007d75f) main_welc_pane_t1_ParamLimits

0xadde,	// (0x0007d75f) main_welc_pane_t1

0xadf8,	// (0x0007d779) main_welc_body_row_pane_ParamLimits

0xadf8,	// (0x0007d779) main_welc_body_row_pane

0xe851,	// (0x000811d2) main_welc_opti_row_pane_ParamLimits

0xe851,	// (0x000811d2) main_welc_opti_row_pane

0xe85f,	// (0x000811e0) main_welc_opti_row_pane_g1

0xae0b,	// (0x0007d78c) main_welc_opti_row_pane_t1

0xe867,	// (0x000811e8) main_welc_body_row_pane_t1

0xe56e,	// (0x00080eef) popup_notif_wgt_heading_pane

0xe588,	// (0x00080f09) aid_size_list_notif_wgt_del_ParamLimits

0xe595,	// (0x00080f16) list_notif_wgt_row_pane_g1_ParamLimits

0xe5a1,	// (0x00080f22) list_notif_wgt_row_pane_g2_ParamLimits

0xe5b5,	// (0x00080f36) list_notif_wgt_row_pane_g3_ParamLimits

0xfeae,	// (0x0008282f) list_notif_wgt_row_pane_g_ParamLimits

0xe5c2,	// (0x00080f43) list_notif_wgt_row_pane_t1_ParamLimits

0xe5d8,	// (0x00080f59) list_notif_wgt_row_pane_t2_ParamLimits

0xe5ea,	// (0x00080f6b) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb5,	// (0x00082836) list_notif_wgt_row_pane_t_ParamLimits

0xa8b1,	// (0x0007d232) listrow_wgtman_pane_g1_ParamLimits

0xa8be,	// (0x0007d23f) listrow_wgtman_pane_g2_ParamLimits

0xfede,	// (0x0008285f) listrow_wgtman_pane_g_ParamLimits

0x1920,	// (0x000742a1) listrow_wgtman_pane_t1_ParamLimits

0x1938,	// (0x000742b9) listrow_wgtman_pane_t2_ParamLimits

0xfee3,	// (0x00082864) listrow_wgtman_pane_t_ParamLimits

0x195e,	// (0x000742df) wait_bar_pane_cp09_ParamLimits

0x1a31,	// (0x000743b2) bg_popup_heading_pane_cp02

0xe876,	// (0x000811f7) popup_notif_wgt_heading_pane_g1

0xe87e,	// (0x000811ff) popup_notif_wgt_heading_pane_t1

0xbe4a,	// (0x0007e7cb) main_vids_pane

0x1a31,	// (0x000743b2) vids_listscroll_pane

0xae1a,	// (0x0007d79b) scroll_pane_cp040

0x1a31,	// (0x000743b2) vids_list_pane

0xae25,	// (0x0007d7a6) vids_list_double_pane_ParamLimits

0xae25,	// (0x0007d7a6) vids_list_double_pane

0xae32,	// (0x0007d7b3) vids_list_double_pane_g1

0xae3b,	// (0x0007d7bc) vids_list_double_pane_t1

0xae4b,	// (0x0007d7cc) vids_list_double_pane_t2

0x0001,

0xff67,	// (0x000828e8) vids_list_double_pane_t

0xaeed,	// (0x0007d86e) main_ncimui_pane_ParamLimits

0x987e,	// (0x0007c1ff) main_ncimui_pane_g1_ParamLimits

0x988a,	// (0x0007c20b) main_ncimui_pane_g2_ParamLimits

0x988a,	// (0x0007c20b) main_ncimui_pane_g2

0x0001,

0xfbef,	// (0x00082570) main_ncimui_pane_g_ParamLimits

0xfbef,	// (0x00082570) main_ncimui_pane_g

0xadb8,	// (0x0007d739) main_welc_pane_g1_ParamLimits

0xadb8,	// (0x0007d739) main_welc_pane_g1

0xadcb,	// (0x0007d74c) main_welc_pane_g2_ParamLimits

0xadcb,	// (0x0007d74c) main_welc_pane_g2

0x0001,

0xff62,	// (0x000828e3) main_welc_pane_g_ParamLimits

0xff62,	// (0x000828e3) main_welc_pane_g

0x2333,	// (0x00074cb4) listscroll_mce_pane_ParamLimits

0x4f06,	// (0x00077887) wait_bar_pane_cp10

0xbe30,	// (0x0007e7b1) main_cale_day_pane_ParamLimits

0xbe30,	// (0x0007e7b1) main_cale_week_pane_ParamLimits

0x2333,	// (0x00074cb4) main_messa_pane_ParamLimits

0x773e,	// (0x0007a0bf) main_clock2_btn_pane_ParamLimits

0x773e,	// (0x0007a0bf) main_clock2_btn_pane

0xc733,	// (0x0007f0b4) main_clock2_btn_pane_cp01_ParamLimits

0xc733,	// (0x0007f0b4) main_clock2_btn_pane_cp01

0xe0d7,	// (0x00080a58) list_cale_mrui_pane_ParamLimits

0xe61e,	// (0x00080f9f) main_cf0_pane_g2

0x0001,

0xfebc,	// (0x0008283d) main_cf0_pane_g

0xaa62,	// (0x0007d3e3) area_left_week_number_pane_ParamLimits

0xaa6e,	// (0x0007d3ef) area_top_day_name_pane_ParamLimits

0xaa7f,	// (0x0007d400) frame_month_view_pane_ParamLimits

0xe727,	// (0x000810a8) grid_month_view_pane_ParamLimits

0xe735,	// (0x000810b6) frm_month_g1_ParamLimits

0xaaec,	// (0x0007d46d) frm_month_g2_ParamLimits

0xaafd,	// (0x0007d47e) frm_month_g3_ParamLimits

0xab0e,	// (0x0007d48f) frm_month_g4_ParamLimits

0xab1f,	// (0x0007d4a0) frm_month_g5_ParamLimits

0xab30,	// (0x0007d4b1) frm_month_g6_ParamLimits

0xab41,	// (0x0007d4c2) frm_month_g7_ParamLimits

0xe742,	// (0x000810c3) frm_month_g8_ParamLimits

0xab52,	// (0x0007d4d3) frm_month_g9_ParamLimits

0xab62,	// (0x0007d4e3) frm_month_g10_ParamLimits

0xab72,	// (0x0007d4f3) frm_month_g11_ParamLimits

0xab82,	// (0x0007d503) frm_month_g12_ParamLimits

0xab92,	// (0x0007d513) frm_month_g13_ParamLimits

0xaba2,	// (0x0007d523) frm_month_g14_ParamLimits

0xabb2,	// (0x0007d533) frm_month_g15_ParamLimits

0xabc4,	// (0x0007d545) frm_month_g16_ParamLimits

0xff0d,	// (0x0008288e) frm_month_g_ParamLimits

0xe74f,	// (0x000810d0) cell_top_day_name_pane_t1_ParamLimits

0xabd6,	// (0x0007d557) cell_area_left_week_number_pane_g1_ParamLimits

0xabe2,	// (0x0007d563) cell_area_left_week_number_pane_t1_ParamLimits

0xc57f,	// (0x0007ef00) cell_month_view_pane_g1_ParamLimits

0xabf5,	// (0x0007d576) cell_month_view_pane_t1_ParamLimits

0x232b,	// (0x00074cac) main_clock2_btn_pane_g1

0xe88c,	// (0x0008120d) main_clock2_btn_pane_t1

0xaeed,	// (0x0007d86e) listscroll_cmail_pane_ParamLimits

0xdc36,	// (0x000805b7) main_sp_fs_email_pane_g1_ParamLimits

0xdc42,	// (0x000805c3) main_sp_fs_email_pane_g2_ParamLimits

0xfcea,	// (0x0008266b) main_sp_fs_email_pane_g_ParamLimits

0xe2a9,	// (0x00080c2a) list_recal_day_pane_ParamLimits

0xe2ba,	// (0x00080c3b) mian_recal_day_pane_t1

0x1561,	// (0x00073ee2) list_single_dyc_row_text_pane_t4_ParamLimits

0x1561,	// (0x00073ee2) list_single_dyc_row_text_pane_t4

0x1598,	// (0x00073f19) list_single_dyc_row_text_pane_t5_ParamLimits

0x1598,	// (0x00073f19) list_single_dyc_row_text_pane_t5

0xdd0a,	// (0x0008068b) list_single_dyc_row_text_pane_t6_ParamLimits

0xdd0a,	// (0x0008068b) list_single_dyc_row_text_pane_t6

0x4544,	// (0x00076ec5) aid_mgn_list_cale_time_pane

0xaeed,	// (0x0007d86e) main_gallery2_pane_ParamLimits

0xc747,	// (0x0007f0c8) main_clock2_pane_cp01_t1

0xc755,	// (0x0007f0d6) main_clock2_pane_cp01_t3

0x0001,

0xf7d3,	// (0x00082154) main_clock2_pane_cp01_t

0x2b09,	// (0x0007548a) cale_week_scroll_pane_g16_ParamLimits

0x2b09,	// (0x0007548a) cale_week_scroll_pane_g16

0x2fc7,	// (0x00075948) vorec_slider_pane

0xad6f,	// (0x0007d6f0) vidtel_button_pane_t1_ParamLimits

0xa499,	// (0x0007ce1a) main_fs_bigclock_clock_pane_g1_ParamLimits

0xa4ab,	// (0x0007ce2c) main_fs_bigclock_clock_pane_g2_ParamLimits

0xa4bc,	// (0x0007ce3d) main_fs_bigclock_clock_pane_g3_ParamLimits

0xa4bc,	// (0x0007ce3d) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe6a,	// (0x000827eb) main_fs_bigclock_clock_pane_g_ParamLimits

0xa4cf,	// (0x0007ce50) main_fs_bigclock_clock_pane_t1_ParamLimits

0xa4ea,	// (0x0007ce6b) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe73,	// (0x000827f4) main_fs_bigclock_clock_pane_t_ParamLimits

0x6fc4,	// (0x00079945) main_mup3_lyrics_pane_ParamLimits

0x6fc4,	// (0x00079945) main_mup3_lyrics_pane

0xae7d,	// (0x0007d7fe) main_mup3_lyrics_pane_t1_ParamLimits

0xae7d,	// (0x0007d7fe) main_mup3_lyrics_pane_t1

0xe939,	// (0x000812ba) aid_main_mp4_pane_t1_area

0xe939,	// (0x000812ba) aid_main_mp4_pane_t2_area

0xe9e1,	// (0x00081362) main_mp4_pane_g7_ParamLimits

0xe9e1,	// (0x00081362) main_mp4_pane_g7

0xe9ed,	// (0x0008136e) main_mp4_pane_g8_ParamLimits

0xe9ed,	// (0x0008136e) main_mp4_pane_g8

0x8197,	// (0x0007ab18) aid_call6_pane_g1_size

0xad3b,	// (0x0007d6bc) list_double_large_graphic_phob2_other_pane_ParamLimits

0xad3b,	// (0x0007d6bc) list_double_large_graphic_phob2_other_pane

0x4b0c,	// (0x0007748d) list_double_large_graphic_phob2_other_pane_g1

0x1a31,	// (0x000743b2) list_highlight_pane_cp026
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

} // end of namespace AknLayoutScalable_Elaf_pql_apps_qvga_lsc_Large
