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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005c695 };

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
0x0c5c,	// (0x0005d2f1) Screen

0x0c68,	// (0x0005d2fd) application_window

0x0cc4,	// (0x0005d359) area_bottom_pane_ParamLimits

0x0cc4,	// (0x0005d359) area_bottom_pane

0x0d1d,	// (0x0005d3b2) area_top_pane_ParamLimits

0x0d1d,	// (0x0005d3b2) area_top_pane

0x0d81,	// (0x0005d416) call_video_uplink_pane_ParamLimits

0x0d81,	// (0x0005d416) call_video_uplink_pane

0x0dc0,	// (0x0005d455) main_pane_ParamLimits

0x0dc0,	// (0x0005d455) main_pane

0xc919,	// (0x00068fae) context_pane

0x42de,	// (0x00060973) navi_pane

0x4304,	// (0x00060999) popup_cale_events_window_ParamLimits

0x4304,	// (0x00060999) popup_cale_events_window

0xc92c,	// (0x00068fc1) popup_mup_playback_window

0x431c,	// (0x000609b1) signal_pane

0xa899,	// (0x00066f2e) main_browser_pane

0xaa5e,	// (0x000670f3) main_burst_pane

0x4160,	// (0x000607f5) main_calc_pane

0xc8ff,	// (0x00068f94) main_cale_day_pane

0x152e,	// (0x0005dbc3) main_cale_month_pane

0xc8ff,	// (0x00068f94) main_cale_week_pane

0xaa5e,	// (0x000670f3) main_call_pane

0xa469,	// (0x00066afe) main_call_poc_pane

0xaa5e,	// (0x000670f3) main_camera_pane

0xaa5e,	// (0x000670f3) main_chi_dic_pane

0xb276,	// (0x0006790b) main_clock_pane

0xa469,	// (0x00066afe) main_fmradio_pane

0xaa5e,	// (0x000670f3) main_graph_messa_pane

0xa469,	// (0x00066afe) main_help_pane

0xa899,	// (0x00066f2e) main_im_pane

0xa7c8,	// (0x00066e5d) main_image_pane_ParamLimits

0xa7c8,	// (0x00066e5d) main_image_pane

0xa469,	// (0x00066afe) main_location2_pane

0xaa5e,	// (0x000670f3) main_location_pane

0xa7c8,	// (0x00066e5d) main_messa_pane

0xa469,	// (0x00066afe) main_mp2_pane

0xaa5e,	// (0x000670f3) main_mp_pane

0xa469,	// (0x00066afe) main_msg_pane

0xa469,	// (0x00066afe) main_mup_eq_pane

0xa469,	// (0x00066afe) main_mup_pane

0xa899,	// (0x00066f2e) main_notes_pane

0xa469,	// (0x00066afe) main_pec_pane

0xa469,	// (0x00066afe) main_phob_pane

0xa469,	// (0x00066afe) main_pinb_pane

0xa469,	// (0x00066afe) main_postcard_pane

0xa469,	// (0x00066afe) main_qdial_pane

0xaa5e,	// (0x000670f3) main_skin_pane

0xa469,	// (0x00066afe) main_smil2_pane

0xaa5e,	// (0x000670f3) main_smil_pane

0xaa5e,	// (0x000670f3) main_video_pane

0xaa5e,	// (0x000670f3) main_video_tele_pane

0xa7c8,	// (0x00066e5d) main_viewer_pane_ParamLimits

0xa7c8,	// (0x00066e5d) main_viewer_pane

0xaa5e,	// (0x000670f3) main_vorec_pane

0x41ac,	// (0x00060841) popup_blid_sat_info_window_ParamLimits

0x41ac,	// (0x00060841) popup_blid_sat_info_window

0x41cc,	// (0x00060861) popup_dyc_status_message_window_ParamLimits

0x41cc,	// (0x00060861) popup_dyc_status_message_window

0x41da,	// (0x0006086f) popup_grid_large_graphic_window_ParamLimits

0x41da,	// (0x0006086f) popup_grid_large_graphic_window

0x4269,	// (0x000608fe) popup_loc_request_window_ParamLimits

0x4269,	// (0x000608fe) popup_loc_request_window

0x42b6,	// (0x0006094b) popup_wml_address_window_ParamLimits

0x42b6,	// (0x0006094b) popup_wml_address_window

0x4038,	// (0x000606cd) call_muted_g1

0x3cf4,	// (0x00060389) popup_call_audio_conf_window_ParamLimits

0x3cf4,	// (0x00060389) popup_call_audio_conf_window

0x4048,	// (0x000606dd) popup_call_audio_first_window_ParamLimits

0x4048,	// (0x000606dd) popup_call_audio_first_window

0x4088,	// (0x0006071d) popup_call_audio_in_window_ParamLimits

0x4088,	// (0x0006071d) popup_call_audio_in_window

0x40ac,	// (0x00060741) popup_call_audio_out_window_ParamLimits

0x40ac,	// (0x00060741) popup_call_audio_out_window

0x40ce,	// (0x00060763) popup_call_audio_second_window_ParamLimits

0x40ce,	// (0x00060763) popup_call_audio_second_window

0x40fe,	// (0x00060793) popup_call_audio_wait_window_ParamLimits

0x40fe,	// (0x00060793) popup_call_audio_wait_window

0x411f,	// (0x000607b4) popup_number_entry_window_ParamLimits

0x411f,	// (0x000607b4) popup_number_entry_window

0x9ba9,	// (0x0006623e) bg_popup_call_pane_cp05_ParamLimits

0x9ba9,	// (0x0006623e) bg_popup_call_pane_cp05

0x9bc9,	// (0x0006625e) popup_number_entry_window_t1

0x9bdc,	// (0x00066271) popup_number_entry_window_t2

0x9bee,	// (0x00066283) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x0006b744) popup_number_entry_window_t

0x9c00,	// (0x00066295) text_title_cp2

0x9c13,	// (0x000662a8) bg_popup_call_pane_cp_ParamLimits

0x9c13,	// (0x000662a8) bg_popup_call_pane_cp

0x9c21,	// (0x000662b6) call_thumbnail_pane

0x9c29,	// (0x000662be) popup_call_audio_in_window_g1_ParamLimits

0x9c29,	// (0x000662be) popup_call_audio_in_window_g1

0x9c35,	// (0x000662ca) popup_call_audio_in_window_g2_ParamLimits

0x9c35,	// (0x000662ca) popup_call_audio_in_window_g2

0x9c41,	// (0x000662d6) popup_call_audio_in_window_g3_ParamLimits

0x9c41,	// (0x000662d6) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x0006b74d) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x0006b74d) popup_call_audio_in_window_g

0x9c4d,	// (0x000662e2) popup_call_audio_in_window_t1_ParamLimits

0x9c4d,	// (0x000662e2) popup_call_audio_in_window_t1

0x9c69,	// (0x000662fe) popup_call_audio_in_window_t2_ParamLimits

0x9c69,	// (0x000662fe) popup_call_audio_in_window_t2

0x9c85,	// (0x0006631a) popup_call_audio_in_window_t3_ParamLimits

0x9c85,	// (0x0006631a) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x0006b754) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x0006b754) popup_call_audio_in_window_t

0x9c13,	// (0x000662a8) bg_popup_call_pane_cp01_ParamLimits

0x9c13,	// (0x000662a8) bg_popup_call_pane_cp01

0x9c21,	// (0x000662b6) call_thumbnail_pane_cp02

0x9c98,	// (0x0006632d) call_type_pane_cp022

0x9ca0,	// (0x00066335) popup_call_audio_out_window_g1_ParamLimits

0x9ca0,	// (0x00066335) popup_call_audio_out_window_g1

0x9cb2,	// (0x00066347) popup_call_audio_out_window_g2_ParamLimits

0x9cb2,	// (0x00066347) popup_call_audio_out_window_g2

0x9cbe,	// (0x00066353) popup_call_audio_out_window_g3_ParamLimits

0x9cbe,	// (0x00066353) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x0006b75b) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x0006b75b) popup_call_audio_out_window_g

0x9cd0,	// (0x00066365) popup_call_audio_out_window_t1_ParamLimits

0x9cd0,	// (0x00066365) popup_call_audio_out_window_t1

0x9ce8,	// (0x0006637d) popup_call_audio_out_window_t2_ParamLimits

0x9ce8,	// (0x0006637d) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x0006b762) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x0006b762) popup_call_audio_out_window_t

0x9cfd,	// (0x00066392) bg_popup_call_pane_ParamLimits

0x9cfd,	// (0x00066392) bg_popup_call_pane

0x0fdc,	// (0x0005d671) call_thumbnail_pane_cp_ParamLimits

0x0fdc,	// (0x0005d671) call_thumbnail_pane_cp

0x9d81,	// (0x00066416) call_type_pane_cp01_ParamLimits

0x9d81,	// (0x00066416) call_type_pane_cp01

0x9dc5,	// (0x0006645a) popup_call_audio_first_window_g1_ParamLimits

0x9dc5,	// (0x0006645a) popup_call_audio_first_window_g1

0x9e11,	// (0x000664a6) popup_call_audio_first_window_g2_ParamLimits

0x9e11,	// (0x000664a6) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x0006b767) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x0006b767) popup_call_audio_first_window_g

0x9e55,	// (0x000664ea) popup_call_audio_first_window_t1_ParamLimits

0x9e55,	// (0x000664ea) popup_call_audio_first_window_t1

0x9f01,	// (0x00066596) popup_call_audio_first_window_t4_ParamLimits

0x9f01,	// (0x00066596) popup_call_audio_first_window_t4

0x9f8d,	// (0x00066622) popup_call_audio_first_window_t5_ParamLimits

0x9f8d,	// (0x00066622) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x0006b76c) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x0006b76c) popup_call_audio_first_window_t

0xa469,	// (0x00066afe) bg_popup_call_pane_cp02

0xa473,	// (0x00066b08) call_type_pane_cp023

0xa47b,	// (0x00066b10) popup_call_audio_wait_window_g1

0xa483,	// (0x00066b18) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0006b773) popup_call_audio_wait_window_g

0xa48b,	// (0x00066b20) popup_call_audio_wait_window_t3

0xa499,	// (0x00066b2e) bg_popup_call_pane_cp03_ParamLimits

0xa499,	// (0x00066b2e) bg_popup_call_pane_cp03

0xa4f9,	// (0x00066b8e) call_thumbnail_pane_cp011_ParamLimits

0xa4f9,	// (0x00066b8e) call_thumbnail_pane_cp011

0xa505,	// (0x00066b9a) call_type_pane_cp034_ParamLimits

0xa505,	// (0x00066b9a) call_type_pane_cp034

0xa541,	// (0x00066bd6) popup_call_audio_second_window_g1_ParamLimits

0xa541,	// (0x00066bd6) popup_call_audio_second_window_g1

0xa57d,	// (0x00066c12) popup_call_audio_second_window_g2_ParamLimits

0xa57d,	// (0x00066c12) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x0006b778) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x0006b778) popup_call_audio_second_window_g

0xa5b9,	// (0x00066c4e) popup_call_audio_second_window_t1_ParamLimits

0xa5b9,	// (0x00066c4e) popup_call_audio_second_window_t1

0xa63a,	// (0x00066ccf) popup_call_audio_second_window_t2_ParamLimits

0xa63a,	// (0x00066ccf) popup_call_audio_second_window_t2

0xa670,	// (0x00066d05) popup_call_audio_second_window_t3_ParamLimits

0xa670,	// (0x00066d05) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x0006b77d) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x0006b77d) popup_call_audio_second_window_t

0xa469,	// (0x00066afe) bg_popup_call_pane_cp04

0xa7aa,	// (0x00066e3f) list_conf_pane

0xa7b2,	// (0x00066e47) popup_call_audio_conf_window_t1

0xa7c0,	// (0x00066e55) call_thumbnail_pane_g1

0xa7c8,	// (0x00066e5d) bg_pinb_pane_ParamLimits

0xa7c8,	// (0x00066e5d) bg_pinb_pane

0xa7d6,	// (0x00066e6b) find_pinb_pane

0xa7df,	// (0x00066e74) listscroll_pinb_pane_ParamLimits

0xa7df,	// (0x00066e74) listscroll_pinb_pane

0xa7ee,	// (0x00066e83) pinb_bg_pane_g1

0x1000,	// (0x0005d695) pinb_bg_pane_g2

0x100c,	// (0x0005d6a1) pinb_bg_pane_g3

0x1018,	// (0x0005d6ad) pinb_bg_pane_g4

0x1024,	// (0x0005d6b9) pinb_bg_pane_g5

0x1030,	// (0x0005d6c5) pinb_bg_pane_g6

0x103b,	// (0x0005d6d0) pinb_bg_pane_g7

0x1046,	// (0x0005d6db) pinb_bg_pane_g8

0x1051,	// (0x0005d6e6) pinb_bg_pane_g9

0x105b,	// (0x0005d6f0) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x0006b784) pinb_bg_pane_g

0x1078,	// (0x0005d70d) grid_pinb_pane

0x1083,	// (0x0005d718) list_pinb_pane

0x108e,	// (0x0005d723) scroll_pane_cp01_ParamLimits

0x108e,	// (0x0005d723) scroll_pane_cp01

0xa7f8,	// (0x00066e8d) find_pinb_pane_g1_ParamLimits

0xa7f8,	// (0x00066e8d) find_pinb_pane_g1

0xa810,	// (0x00066ea5) find_pinb_pane_t1

0xa822,	// (0x00066eb7) find_pinb_pane_t2

0x0001,

0xf109,	// (0x0006b79e) find_pinb_pane_t

0xa837,	// (0x00066ecc) input_focus_pane_cp01_ParamLimits

0xa837,	// (0x00066ecc) input_focus_pane_cp01

0x10a0,	// (0x0005d735) cell_pinb_pane_ParamLimits

0x10a0,	// (0x0005d735) cell_pinb_pane

0x10cb,	// (0x0005d760) cell_pinb_pane_g1_ParamLimits

0x10cb,	// (0x0005d760) cell_pinb_pane_g1

0xa843,	// (0x00066ed8) cell_pinb_pane_g2_ParamLimits

0xa843,	// (0x00066ed8) cell_pinb_pane_g2

0xa84f,	// (0x00066ee4) cell_pinb_pane_g3_ParamLimits

0xa84f,	// (0x00066ee4) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x0006b7a3) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x0006b7a3) cell_pinb_pane_g

0xa469,	// (0x00066afe) grid_highlight_pane_cp01

0x10e0,	// (0x0005d775) list_pinb_item_pane_ParamLimits

0x10e0,	// (0x0005d775) list_pinb_item_pane

0xa469,	// (0x00066afe) list_highlight_pane_cp02

0x1109,	// (0x0005d79e) list_pinb_item_pane_g1_ParamLimits

0x1109,	// (0x0005d79e) list_pinb_item_pane_g1

0x1116,	// (0x0005d7ab) list_pinb_item_pane_g2_ParamLimits

0x1116,	// (0x0005d7ab) list_pinb_item_pane_g2

0x1122,	// (0x0005d7b7) list_pinb_item_pane_g3_ParamLimits

0x1122,	// (0x0005d7b7) list_pinb_item_pane_g3

0x1133,	// (0x0005d7c8) list_pinb_item_pane_g4_ParamLimits

0x1133,	// (0x0005d7c8) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x0006b7aa) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x0006b7aa) list_pinb_item_pane_g

0x113f,	// (0x0005d7d4) list_pinb_item_pane_t1_ParamLimits

0x113f,	// (0x0005d7d4) list_pinb_item_pane_t1

0x1170,	// (0x0005d805) calc_display_pane

0x118e,	// (0x0005d823) calc_paper_pane

0x11aa,	// (0x0005d83f) grid_calc_pane

0xa469,	// (0x00066afe) bg_list_pane_cp01

0x11d6,	// (0x0005d86b) clock_g1

0x11de,	// (0x0005d873) clock_g2

0x0001,

0xf11e,	// (0x0006b7b3) clock_g

0x11e8,	// (0x0005d87d) clock_t1_ParamLimits

0x11e8,	// (0x0005d87d) clock_t1

0x11fd,	// (0x0005d892) clock_t2_ParamLimits

0x11fd,	// (0x0005d892) clock_t2

0x120f,	// (0x0005d8a4) clock_t3_ParamLimits

0x120f,	// (0x0005d8a4) clock_t3

0x1221,	// (0x0005d8b6) clock_t4_ParamLimits

0x1221,	// (0x0005d8b6) clock_t4

0x1233,	// (0x0005d8c8) clock_t5_ParamLimits

0x1233,	// (0x0005d8c8) clock_t5

0x1248,	// (0x0005d8dd) clock_t6_ParamLimits

0x1248,	// (0x0005d8dd) clock_t6

0x125a,	// (0x0005d8ef) clock_t7_ParamLimits

0x125a,	// (0x0005d8ef) clock_t7

0x126c,	// (0x0005d901) clock_t8_ParamLimits

0x126c,	// (0x0005d901) clock_t8

0x1282,	// (0x0005d917) clock_t9_ParamLimits

0x1282,	// (0x0005d917) clock_t9

0x0008,

0xf123,	// (0x0006b7b8) clock_t_ParamLimits

0xf123,	// (0x0006b7b8) clock_t

0xa85b,	// (0x00066ef0) popup_clock_analogue_window_cp02

0xa85b,	// (0x00066ef0) popup_clock_digital_window_cp01

0xa863,	// (0x00066ef8) listscroll_help_pane

0xa469,	// (0x00066afe) phob_pre_status_pane

0xa86d,	// (0x00066f02) grid_qdial_pane

0xa7c8,	// (0x00066e5d) listscroll_mce_pane

0xa7c8,	// (0x00066e5d) bg_notes_pane

0xa877,	// (0x00066f0c) list_notes_pane

0x1298,	// (0x0005d92d) scroll_pane_cp06

0xa885,	// (0x00066f1a) bg_calc_paper_pane

0x12a7,	// (0x0005d93c) list_calc_pane

0xa899,	// (0x00066f2e) bg_calc_display_pane

0x12c1,	// (0x0005d956) calc_display_pane_t1

0x12d6,	// (0x0005d96b) calc_display_pane_t2

0x12eb,	// (0x0005d980) calc_display_pane_t3

0x0002,

0xf136,	// (0x0006b7cb) calc_display_pane_t

0x12fd,	// (0x0005d992) cell_calc_pane_ParamLimits

0x12fd,	// (0x0005d992) cell_calc_pane

0xa8a5,	// (0x00066f3a) bg_calc_paper_pane_g1

0xa8b1,	// (0x00066f46) bg_calc_paper_pane_g2

0xa8bd,	// (0x00066f52) bg_calc_paper_pane_g3

0xa8c9,	// (0x00066f5e) bg_calc_paper_pane_g4

0xa8d5,	// (0x00066f6a) bg_calc_paper_pane_g5

0x132a,	// (0x0005d9bf) bg_calc_paper_pane_g6

0x133b,	// (0x0005d9d0) bg_calc_paper_pane_g7

0x134c,	// (0x0005d9e1) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x0006b7d2) bg_calc_paper_pane_g

0x135d,	// (0x0005d9f2) calc_bg_paper_pane_g9

0x136e,	// (0x0005da03) list_calc_item_pane_ParamLimits

0x136e,	// (0x0005da03) list_calc_item_pane

0xa8e1,	// (0x00066f76) list_calc_item_pane_g1

0x139b,	// (0x0005da30) list_calc_item_pane_t1_ParamLimits

0x139b,	// (0x0005da30) list_calc_item_pane_t1

0x13ad,	// (0x0005da42) list_calc_item_pane_t2_ParamLimits

0x13ad,	// (0x0005da42) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x0006b7e3) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x0006b7e3) list_calc_item_pane_t

0xa8ee,	// (0x00066f83) cell_calc_pane_g1

0xa8f8,	// (0x00066f8d) grid_highlight_pane_cp02

0x13dd,	// (0x0005da72) bg_calc_display_pane_g1

0x13e6,	// (0x0005da7b) bg_calc_display_pane_g2

0x13f0,	// (0x0005da85) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x0006b7ed) bg_calc_display_pane_g

0x13f9,	// (0x0005da8e) cell_qdial_pane_ParamLimits

0x13f9,	// (0x0005da8e) cell_qdial_pane

0x140d,	// (0x0005daa2) cell_qdial_pane_g1_ParamLimits

0x140d,	// (0x0005daa2) cell_qdial_pane_g1

0x141a,	// (0x0005daaf) cell_qdial_pane_g2_ParamLimits

0x141a,	// (0x0005daaf) cell_qdial_pane_g2

0xa91a,	// (0x00066faf) cell_qdial_pane_g3_ParamLimits

0xa91a,	// (0x00066faf) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x0006b7f4) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x0006b7f4) cell_qdial_pane_g

0x1437,	// (0x0005dacc) cell_qdial_pane_t1_ParamLimits

0x1437,	// (0x0005dacc) cell_qdial_pane_t1

0x144f,	// (0x0005dae4) cell_qdial_pane_t2_ParamLimits

0x144f,	// (0x0005dae4) cell_qdial_pane_t2

0x1462,	// (0x0005daf7) cell_qdial_pane_t3_ParamLimits

0x1462,	// (0x0005daf7) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x0006b7fd) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x0006b7fd) cell_qdial_pane_t

0xa469,	// (0x00066afe) grid_highlight_pane_cp04

0xa926,	// (0x00066fbb) thumbnail_qdial_pane_ParamLimits

0xa926,	// (0x00066fbb) thumbnail_qdial_pane

0xa982,	// (0x00067017) list_help_pane

0xa98b,	// (0x00067020) scroll_pane_cp02

0x1475,	// (0x0005db0a) help_list_pane_t1_ParamLimits

0x1475,	// (0x0005db0a) help_list_pane_t1

0x14ac,	// (0x0005db41) bg_notes_pane_g2

0x14b4,	// (0x0005db49) bg_notes_pane_g3

0x14bc,	// (0x0005db51) notes_bg_pane_g1

0x14c4,	// (0x0005db59) notes_bg_pane_g4

0x14cc,	// (0x0005db61) notes_bg_pane_g5

0x14d4,	// (0x0005db69) notes_bg_pane_g6

0x14dc,	// (0x0005db71) notes_bg_pane_g7

0x14e4,	// (0x0005db79) notes_bg_pane_g8

0x14ec,	// (0x0005db81) notes_bg_pane_g9

0x0006,

0xf186,	// (0x0006b81b) notes_bg_pane_g

0x14f4,	// (0x0005db89) list_notes_text_pane_ParamLimits

0x14f4,	// (0x0005db89) list_notes_text_pane

0xa994,	// (0x00067029) list_notes_text_pane_g1

0x1520,	// (0x0005dbb5) list_notes_text_pane_t1

0x152e,	// (0x0005dbc3) listscroll_cale_week_pane

0x1553,	// (0x0005dbe8) bg_cale_heading_pane

0xa9b7,	// (0x0006704c) bg_cale_pane_cp01

0x1575,	// (0x0005dc0a) cale_week_corner_pane

0x158f,	// (0x0005dc24) cale_week_day_heading_pane

0x15b1,	// (0x0005dc46) cale_week_scroll_pane_g1

0x15ce,	// (0x0005dc63) cale_week_scroll_pane_g2

0x15e1,	// (0x0005dc76) cale_week_scroll_pane_g3

0x15f4,	// (0x0005dc89) cale_week_scroll_pane_g4

0x1607,	// (0x0005dc9c) cale_week_scroll_pane_g5

0x161a,	// (0x0005dcaf) cale_week_scroll_pane_g6

0x162d,	// (0x0005dcc2) cale_week_scroll_pane_g7

0x1642,	// (0x0005dcd7) cale_week_scroll_pane_g8

0x1657,	// (0x0005dcec) cale_week_scroll_pane_g9

0x166a,	// (0x0005dcff) cale_week_scroll_pane_g10

0x167d,	// (0x0005dd12) cale_week_scroll_pane_g11

0x1690,	// (0x0005dd25) cale_week_scroll_pane_g12

0x16a7,	// (0x0005dd3c) cale_week_scroll_pane_g13

0x16c2,	// (0x0005dd57) cale_week_scroll_pane_g14

0x16dd,	// (0x0005dd72) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x0006b82a) cale_week_scroll_pane_g

0x170d,	// (0x0005dda2) cale_week_time_pane

0x1722,	// (0x0005ddb7) grid_cale_week_pane

0xa9e6,	// (0x0006707b) scroll_pane_cp08

0x1741,	// (0x0005ddd6) cell_cale_week_pane_ParamLimits

0x1741,	// (0x0005ddd6) cell_cale_week_pane

0x17a3,	// (0x0005de38) cale_week_day_heading_pane_t1

0x17be,	// (0x0005de53) cale_week_day_heading_pane_t2

0x17d9,	// (0x0005de6e) cale_week_day_heading_pane_t3

0x17f4,	// (0x0005de89) cale_week_day_heading_pane_t4

0x180f,	// (0x0005dea4) cale_week_day_heading_pane_t5

0x182a,	// (0x0005debf) cale_week_day_heading_pane_t6

0x1845,	// (0x0005deda) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x0006b84b) cale_week_day_heading_pane_t

0xaa03,	// (0x00067098) bg_cale_side_pane

0x1860,	// (0x0005def5) cale_week_time_pane_t1

0x187a,	// (0x0005df0f) cale_week_time_pane_t2

0x1894,	// (0x0005df29) cale_week_time_pane_t3

0x18ae,	// (0x0005df43) cale_week_time_pane_t4

0x18c8,	// (0x0005df5d) cale_week_time_pane_t5

0x18e2,	// (0x0005df77) cale_week_time_pane_t6

0x1902,	// (0x0005df97) cale_week_time_pane_t7

0x1924,	// (0x0005dfb9) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x0006b85a) cale_week_time_pane_t

0x1948,	// (0x0005dfdd) cell_cale_week_pane_g2

0x196c,	// (0x0005e001) cell_cale_week_pane_g3_ParamLimits

0x196c,	// (0x0005e001) cell_cale_week_pane_g3

0xaa11,	// (0x000670a6) grid_highlight_pane_cp07

0xaa19,	// (0x000670ae) listscroll_gms_pane

0xaa23,	// (0x000670b8) grid_gms_pane

0xaa2c,	// (0x000670c1) listscroll_gms_pane_g1

0xaa34,	// (0x000670c9) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x0006b86b) listscroll_gms_pane_g

0x1984,	// (0x0005e019) scroll_pane_cp010

0x198f,	// (0x0005e024) cell_gms_pane_ParamLimits

0x198f,	// (0x0005e024) cell_gms_pane

0x199f,	// (0x0005e034) cell_gms_pane_g1

0xaa3c,	// (0x000670d1) cell_gms_pane_g2

0xaa44,	// (0x000670d9) cell_gms_pane_g3

0xaa4d,	// (0x000670e2) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x0006b870) cell_gms_pane_g

0xaa56,	// (0x000670eb) grid_highlight_pane_cp09

0x3fe0,	// (0x00060675) phob_pre_status_pane_g1

0x3fe8,	// (0x0006067d) phob_pre_status_pane_g2

0x3ff0,	// (0x00060685) phob_pre_status_pane_g3

0x3ff8,	// (0x0006068d) phob_pre_status_pane_g4

0x0004,

0xf4ef,	// (0x0006bb84) phob_pre_status_pane_g

0x4008,	// (0x0006069d) phob_pre_status_pane_t1

0x4018,	// (0x000606ad) phob_pre_status_pane_t2

0x4028,	// (0x000606bd) phob_pre_status_pane_t3

0x0002,

0xf4fa,	// (0x0006bb8f) phob_pre_status_pane_t

0xaa5e,	// (0x000670f3) bg_list_pane_cp05

0x19af,	// (0x0005e044) grid_vorec_pane

0x19b9,	// (0x0005e04e) vorec_t1

0x19c7,	// (0x0005e05c) vorec_t2

0x19d5,	// (0x0005e06a) vorec_t3

0x19e3,	// (0x0005e078) vorec_t4

0x9b43,	// (0x000661d8) vorec_t5

0x9b51,	// (0x000661e6) vorec_t6

0x0004,

0xf1e4,	// (0x0006b879) vorec_t

0x9b5f,	// (0x000661f4) wait_bar_pane_cp01

0x19ff,	// (0x0005e094) cell_vorec_pane_ParamLimits

0x19ff,	// (0x0005e094) cell_vorec_pane

0x1a12,	// (0x0005e0a7) cell_vorec_pane_g1

0xa469,	// (0x00066afe) grid_highlight_pane_cp05

0x1a2c,	// (0x0005e0c1) cams_zoom_pane

0x1a38,	// (0x0005e0cd) image_vga_pane

0x1a47,	// (0x0005e0dc) main_camera_pane_g1

0x1a55,	// (0x0005e0ea) main_camera_pane_g2

0x1a61,	// (0x0005e0f6) main_camera_pane_g3

0x1a6d,	// (0x0005e102) main_camera_pane_g4

0x1a79,	// (0x0005e10e) main_camera_pane_g5

0x1a85,	// (0x0005e11a) main_camera_pane_g6

0x1a91,	// (0x0005e126) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x0006b884) main_camera_pane_g

0x1a9d,	// (0x0005e132) main_camera_pane_t1

0x1aaf,	// (0x0005e144) main_camera_pane_t2

0x0001,

0xf200,	// (0x0006b895) main_camera_pane_t

0x1ad0,	// (0x0005e165) cams_zoom_pane_cp_ParamLimits

0x1ad0,	// (0x0005e165) cams_zoom_pane_cp

0x1af4,	// (0x0005e189) image_cif_pane_ParamLimits

0x1af4,	// (0x0005e189) image_cif_pane

0x1b12,	// (0x0005e1a7) image_subqcif_pane

0x1b1a,	// (0x0005e1af) main_video_pane_g1_ParamLimits

0x1b1a,	// (0x0005e1af) main_video_pane_g1

0x1b3a,	// (0x0005e1cf) main_video_pane_g2_ParamLimits

0x1b3a,	// (0x0005e1cf) main_video_pane_g2

0x1b6a,	// (0x0005e1ff) main_video_pane_g3_ParamLimits

0x1b6a,	// (0x0005e1ff) main_video_pane_g3

0x1b93,	// (0x0005e228) main_video_pane_g4_ParamLimits

0x1b93,	// (0x0005e228) main_video_pane_g4

0x1bbc,	// (0x0005e251) main_video_pane_g5_ParamLimits

0x1bbc,	// (0x0005e251) main_video_pane_g5

0xaa72,	// (0x00067107) main_video_pane_g6_ParamLimits

0xaa72,	// (0x00067107) main_video_pane_g6

0x0006,

0xf205,	// (0x0006b89a) main_video_pane_g_ParamLimits

0xf205,	// (0x0006b89a) main_video_pane_g

0x1bde,	// (0x0005e273) main_video_pane_t1_ParamLimits

0x1bde,	// (0x0005e273) main_video_pane_t1

0xaa8c,	// (0x00067121) cams_zoom_pane_g1

0xaabc,	// (0x00067151) cams_zoom_pane_g2

0xaac5,	// (0x0006715a) cams_zoom_pane_g3

0xaace,	// (0x00067163) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x0006b8a9) cams_zoom_pane_g

0x1c28,	// (0x0005e2bd) grid_cams_pane

0x1c36,	// (0x0005e2cb) linegrid_cams_pane

0x1c44,	// (0x0005e2d9) cell_cams_pane_ParamLimits

0x1c44,	// (0x0005e2d9) cell_cams_pane

0xaad7,	// (0x0006716c) cams_burst_image_pane

0xaadf,	// (0x00067174) cell_cams_pane_g1

0xa469,	// (0x00066afe) grid_highlight_pane_cp03

0xa8ee,	// (0x00066f83) mp_bg_pane_g1

0xa469,	// (0x00066afe) bg_list_pane_cp03

0xc824,	// (0x00068eb9) bg_mp_pane

0xc82c,	// (0x00068ec1) grid_mp_pane

0xc834,	// (0x00068ec9) media_player_g1

0xc83c,	// (0x00068ed1) media_player_t1

0xc84a,	// (0x00068edf) media_player_t2

0xc858,	// (0x00068eed) media_player_t3

0xc866,	// (0x00068efb) media_player_t4

0xc874,	// (0x00068f09) media_player_t5

0xc882,	// (0x00068f17) media_player_t6

0xc890,	// (0x00068f25) media_player_t7

0x0006,

0x0212,	// (0x0005c8a7) media_player_t

0xc89e,	// (0x00068f33) wait_bar_pane_cp02

0xf4db,	// (0x0006bb70) main_usb_pane_t

0x3fd7,	// (0x0006066c) cell_mp_pane

0xa8ee,	// (0x00066f83) cell_mp_pane_g1

0xa469,	// (0x00066afe) grid_highlight_pane_cp06

0xaae7,	// (0x0006717c) grid_skin_colour_pane

0xaaef,	// (0x00067184) list_highlight_pane_cp03

0x1d6b,	// (0x0005e400) skin_g1

0xaaf7,	// (0x0006718c) skin_t1

0xab06,	// (0x0006719b) skin_t2

0x0001,

0xf249,	// (0x0006b8de) skin_t

0x1d75,	// (0x0005e40a) cell_skin_colour_pane_ParamLimits

0x1d75,	// (0x0005e40a) cell_skin_colour_pane

0xab14,	// (0x000671a9) cell_skin_colour_pane_g1

0x1df9,	// (0x0005e48e) call_video_g1_ParamLimits

0x1df9,	// (0x0005e48e) call_video_g1

0x1e09,	// (0x0005e49e) call_video_g2_ParamLimits

0x1e09,	// (0x0005e49e) call_video_g2

0x0001,

0xf24e,	// (0x0006b8e3) call_video_g_ParamLimits

0xf24e,	// (0x0006b8e3) call_video_g

0x1e63,	// (0x0005e4f8) call_video_uplink_pane_cp1_ParamLimits

0x1e63,	// (0x0005e4f8) call_video_uplink_pane_cp1

0xab26,	// (0x000671bb) call_video_uplink_pane_cp2

0x1f2f,	// (0x0005e5c4) video_down_crop_pane_ParamLimits

0x1f2f,	// (0x0005e5c4) video_down_crop_pane

0x2021,	// (0x0005e6b6) video_down_pane_ParamLimits

0x2021,	// (0x0005e6b6) video_down_pane

0xab2e,	// (0x000671c3) video_down_subqcif_pane_ParamLimits

0xab2e,	// (0x000671c3) video_down_subqcif_pane

0xab46,	// (0x000671db) video_down_subqcif_pane_cp_ParamLimits

0xab46,	// (0x000671db) video_down_subqcif_pane_cp

0xab6c,	// (0x00067201) im_reading_pane_ParamLimits

0xab6c,	// (0x00067201) im_reading_pane

0x2141,	// (0x0005e7d6) im_writing_pane_ParamLimits

0x2141,	// (0x0005e7d6) im_writing_pane

0x215f,	// (0x0005e7f4) im_reading_pane_t1

0xab86,	// (0x0006721b) list_im_pane

0xab97,	// (0x0006722c) scroll_pane_cp07

0x21b7,	// (0x0005e84c) im_writing_pane_t1_ParamLimits

0x21b7,	// (0x0005e84c) im_writing_pane_t1

0xabb0,	// (0x00067245) im_writing_pane_t2_ParamLimits

0xabb0,	// (0x00067245) im_writing_pane_t2

0x0001,

0xf258,	// (0x0006b8ed) im_writing_pane_t_ParamLimits

0xf258,	// (0x0006b8ed) im_writing_pane_t

0xa469,	// (0x00066afe) input_focus_pane_cp04

0xa469,	// (0x00066afe) input_focus_pane_cp05

0x21c9,	// (0x0005e85e) list_im_single_pane_ParamLimits

0x21c9,	// (0x0005e85e) list_im_single_pane

0x21f0,	// (0x0005e885) list_single_im_pane_t1

0x3f9b,	// (0x00060630) blid_accuracy_pane

0x3fa3,	// (0x00060638) blid_compass_pane

0x3fad,	// (0x00060642) main_location_t1

0x3fbb,	// (0x00060650) main_location_t2

0x3fc9,	// (0x0006065e) main_location_t3

0x0002,

0xf4e8,	// (0x0006bb7d) main_location_t

0xa469,	// (0x00066afe) aid_levels_location

0xa8ee,	// (0x00066f83) blid_accuracy_pane_g1

0xa8ee,	// (0x00066f83) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x0006b94f) blid_accuracy_pane_g

0xabf8,	// (0x0006728d) wml_content_pane

0xac36,	// (0x000672cb) wml_button_pane_ParamLimits

0xac36,	// (0x000672cb) wml_button_pane

0x21ff,	// (0x0005e894) wml_list_single_large_pane_ParamLimits

0x21ff,	// (0x0005e894) wml_list_single_large_pane

0x222a,	// (0x0005e8bf) wml_list_single_medium_pane_ParamLimits

0x222a,	// (0x0005e8bf) wml_list_single_medium_pane

0x225c,	// (0x0005e8f1) wml_list_single_small_pane_ParamLimits

0x225c,	// (0x0005e8f1) wml_list_single_small_pane

0xac4a,	// (0x000672df) wml_selection_box_pane_ParamLimits

0xac4a,	// (0x000672df) wml_selection_box_pane

0xac5d,	// (0x000672f2) wml_list_single_pane_t1

0xac6c,	// (0x00067301) wml_list_single_medium_pane_t1

0xac7b,	// (0x00067310) wml_list_single_large_pane_t1

0xac8a,	// (0x0006731f) input_focus_pane_cp02_ParamLimits

0xac8a,	// (0x0006731f) input_focus_pane_cp02

0xac9d,	// (0x00067332) wml_selection_box_pane_g1

0xaca6,	// (0x0006733b) wml_selection_box_pane_t1_ParamLimits

0xaca6,	// (0x0006733b) wml_selection_box_pane_t1

0xa7c8,	// (0x00066e5d) bg_wml_button_pane_ParamLimits

0xa7c8,	// (0x00066e5d) bg_wml_button_pane

0xacbe,	// (0x00067353) wml_button_pane_g1

0xacc6,	// (0x0006735b) wml_button_pane_t1

0xacbe,	// (0x00067353) wml_button_bg_pane_g1

0xacd6,	// (0x0006736b) wml_button_bg_pane_g2

0xacde,	// (0x00067373) wml_button_bg_pane_g3

0xace6,	// (0x0006737b) wml_button_bg_pane_g4

0xacee,	// (0x00067383) wml_button_bg_pane_g5

0xacf6,	// (0x0006738b) wml_button_bg_pane_g6

0xacfe,	// (0x00067393) wml_button_bg_pane_g7

0xad06,	// (0x0006739b) wml_button_bg_pane_g8

0xad0e,	// (0x000673a3) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x0006b8f2) wml_button_bg_pane_g

0x2299,	// (0x0005e92e) bg_list_pane_cp02

0xad16,	// (0x000673ab) mce_header_pane_ParamLimits

0xad16,	// (0x000673ab) mce_header_pane

0xad2c,	// (0x000673c1) mce_icon_pane

0xad2c,	// (0x000673c1) mce_image_pane

0xad35,	// (0x000673ca) mce_text_pane_ParamLimits

0xad35,	// (0x000673ca) mce_text_pane

0x22a3,	// (0x0005e938) scroll_pane_cp03

0xac2e,	// (0x000672c3) scroll_pane_cp04

0xad48,	// (0x000673dd) scroll_pane_cp05_ParamLimits

0xad48,	// (0x000673dd) scroll_pane_cp05

0x22ad,	// (0x0005e942) mce_header_field_pane_ParamLimits

0x22ad,	// (0x0005e942) mce_header_field_pane

0x22cd,	// (0x0005e962) mce_header_field_pane_2_ParamLimits

0x22cd,	// (0x0005e962) mce_header_field_pane_2

0x22e3,	// (0x0005e978) mce_header_field_pane_3

0x22eb,	// (0x0005e980) list_single_mce_message_pane_ParamLimits

0x22eb,	// (0x0005e980) list_single_mce_message_pane

0x2319,	// (0x0005e9ae) list_single_mce_smart_pane_ParamLimits

0x2319,	// (0x0005e9ae) list_single_mce_smart_pane

0xad54,	// (0x000673e9) input_focus_pane_cp03

0xad5d,	// (0x000673f2) list_header_data_pane

0x2352,	// (0x0005e9e7) mce_header_field_pane_t1

0x2360,	// (0x0005e9f5) list_single_mce_header_pane_ParamLimits

0x2360,	// (0x0005e9f5) list_single_mce_header_pane

0xad65,	// (0x000673fa) list_single_mce_header_pane_t1

0xad74,	// (0x00067409) list_single_mce_message_pane_g1

0xad7c,	// (0x00067411) list_single_mce_message_pane_t1

0x23b6,	// (0x0005ea4b) bg_cale_heading_pane_cp01_ParamLimits

0x23b6,	// (0x0005ea4b) bg_cale_heading_pane_cp01

0xad8a,	// (0x0006741f) bg_cale_pane_cp02_ParamLimits

0xad8a,	// (0x0006741f) bg_cale_pane_cp02

0x2404,	// (0x0005ea99) cale_month_corner_pane

0x2423,	// (0x0005eab8) cale_month_day_heading_pane_ParamLimits

0x2423,	// (0x0005eab8) cale_month_day_heading_pane

0x2489,	// (0x0005eb1e) cale_month_pane_g1_ParamLimits

0x2489,	// (0x0005eb1e) cale_month_pane_g1

0x24cc,	// (0x0005eb61) cale_month_pane_g2_ParamLimits

0x24cc,	// (0x0005eb61) cale_month_pane_g2

0x2506,	// (0x0005eb9b) cale_month_pane_g3_ParamLimits

0x2506,	// (0x0005eb9b) cale_month_pane_g3

0x2556,	// (0x0005ebeb) cale_month_pane_g4_ParamLimits

0x2556,	// (0x0005ebeb) cale_month_pane_g4

0x25a6,	// (0x0005ec3b) cale_month_pane_g5_ParamLimits

0x25a6,	// (0x0005ec3b) cale_month_pane_g5

0x25f6,	// (0x0005ec8b) cale_month_pane_g6_ParamLimits

0x25f6,	// (0x0005ec8b) cale_month_pane_g6

0x2646,	// (0x0005ecdb) cale_month_pane_g7_ParamLimits

0x2646,	// (0x0005ecdb) cale_month_pane_g7

0x26ae,	// (0x0005ed43) cale_month_pane_g8_ParamLimits

0x26ae,	// (0x0005ed43) cale_month_pane_g8

0x2716,	// (0x0005edab) cale_month_pane_g9_ParamLimits

0x2716,	// (0x0005edab) cale_month_pane_g9

0x2774,	// (0x0005ee09) cale_month_pane_g10_ParamLimits

0x2774,	// (0x0005ee09) cale_month_pane_g10

0x27d2,	// (0x0005ee67) cale_month_pane_g11_ParamLimits

0x27d2,	// (0x0005ee67) cale_month_pane_g11

0x2826,	// (0x0005eebb) cale_month_pane_g12_ParamLimits

0x2826,	// (0x0005eebb) cale_month_pane_g12

0x287c,	// (0x0005ef11) cale_month_pane_g13_ParamLimits

0x287c,	// (0x0005ef11) cale_month_pane_g13

0x000c,

0xf270,	// (0x0006b905) cale_month_pane_g_ParamLimits

0xf270,	// (0x0006b905) cale_month_pane_g

0x28d2,	// (0x0005ef67) cale_month_week_pane

0x28f6,	// (0x0005ef8b) grid_cale_month_pane_ParamLimits

0x28f6,	// (0x0005ef8b) grid_cale_month_pane

0x2953,	// (0x0005efe8) cale_month_day_heading_pane_t1

0x29d9,	// (0x0005f06e) cale_month_day_heading_pane_t2

0x2a52,	// (0x0005f0e7) cale_month_day_heading_pane_t3

0x2acb,	// (0x0005f160) cale_month_day_heading_pane_t4

0x2b44,	// (0x0005f1d9) cale_month_day_heading_pane_t5

0x2bbd,	// (0x0005f252) cale_month_day_heading_pane_t6

0x2c36,	// (0x0005f2cb) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x0006b920) cale_month_day_heading_pane_t

0xaa03,	// (0x00067098) bg_cale_side_pane_cp01

0x2cc7,	// (0x0005f35c) cale_month_week_pane_t1

0x2ce0,	// (0x0005f375) cale_month_week_pane_t2

0x2cf9,	// (0x0005f38e) cale_month_week_pane_t3

0x2d12,	// (0x0005f3a7) cale_month_week_pane_t4

0x2d2d,	// (0x0005f3c2) cale_month_week_pane_t5

0x2d4e,	// (0x0005f3e3) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x0006b92f) cale_month_week_pane_t

0x2d6f,	// (0x0005f404) cell_cale_month_pane_ParamLimits

0x2d6f,	// (0x0005f404) cell_cale_month_pane

0x2ebf,	// (0x0005f554) cell_cale_month_pane_g1

0x2ecb,	// (0x0005f560) cell_cale_month_pane_t1_ParamLimits

0x2ecb,	// (0x0005f560) cell_cale_month_pane_t1

0xaa11,	// (0x000670a6) grid_highlight_pane_cp08

0xa8ee,	// (0x00066f83) main_smil_g1

0x2ef7,	// (0x0005f58c) smil_status_pane

0xadc9,	// (0x0006745e) smil_text_pane

0xc704,	// (0x00068d99) bg_popup_call3_rect_pane_g8

0xc70c,	// (0x00068da1) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c3,	// (0x0006bb58) bg_popup_call3_rect_pane_g

0xc993,	// (0x00069028) smil_status_volume_pane_g1

0xadd3,	// (0x00067468) smil_status_pane_t1

0x43d2,	// (0x00060a67) volume_smil_pane

0xadea,	// (0x0006747f) list_smil_text_pane

0x2f0a,	// (0x0005f59f) scroll_pane_cp011

0x2f15,	// (0x0005f5aa) smil_text_list_pane_t1_ParamLimits

0x2f15,	// (0x0005f5aa) smil_text_list_pane_t1

0x2fa2,	// (0x0005f637) aid_volume_smil_ParamLimits

0x2fa2,	// (0x0005f637) aid_volume_smil

0xa8ee,	// (0x00066f83) smil_volume_pane_g1

0xa8ee,	// (0x00066f83) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x0006b94f) smil_volume_pane_g

0x152e,	// (0x0005dbc3) listscroll_cale_day_pane

0xadf4,	// (0x00067489) bg_cale_pane

0xae0c,	// (0x000674a1) list_cale_pane

0xae2f,	// (0x000674c4) scroll_pane_cp09

0xae40,	// (0x000674d5) cale_bg_pane_g1

0xae48,	// (0x000674dd) cale_bg_pane_g2

0xae50,	// (0x000674e5) cale_bg_pane_g3

0xae58,	// (0x000674ed) cale_bg_pane_g4

0xae60,	// (0x000674f5) cale_bg_pane_g5

0xae68,	// (0x000674fd) cale_bg_pane_g6

0xae70,	// (0x00067505) cale_bg_pane_g7

0xae78,	// (0x0006750d) cale_bg_pane_g8

0xae80,	// (0x00067515) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x0006b954) cale_bg_pane_g

0x2fcc,	// (0x0005f661) list_cale_time_pane_ParamLimits

0x2fcc,	// (0x0005f661) list_cale_time_pane

0xae88,	// (0x0006751d) list_cale_time_pane_g1_ParamLimits

0xae88,	// (0x0006751d) list_cale_time_pane_g1

0xae94,	// (0x00067529) list_cale_time_pane_g2_ParamLimits

0xae94,	// (0x00067529) list_cale_time_pane_g2

0x2ff4,	// (0x0005f689) list_cale_time_pane_g3_ParamLimits

0x2ff4,	// (0x0005f689) list_cale_time_pane_g3

0x3002,	// (0x0005f697) list_cale_time_pane_g4_ParamLimits

0x3002,	// (0x0005f697) list_cale_time_pane_g4

0x3010,	// (0x0005f6a5) list_cale_time_pane_g5_ParamLimits

0x3010,	// (0x0005f6a5) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x0006b967) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x0006b967) list_cale_time_pane_g

0xaeae,	// (0x00067543) list_cale_time_pane_t1_ParamLimits

0xaeae,	// (0x00067543) list_cale_time_pane_t1

0xaed6,	// (0x0006756b) list_cale_time_pane_t2_ParamLimits

0xaed6,	// (0x0006756b) list_cale_time_pane_t2

0x33d9,	// (0x0005fa6e) aid_blid_cardinal_pane

0x341b,	// (0x0005fab0) compass_pane_t4

0xaefe,	// (0x00067593) list_cale_time_pane_t4_ParamLimits

0xaefe,	// (0x00067593) list_cale_time_pane_t4

0x3429,	// (0x0005fabe) compass_pane_t5

0x3439,	// (0x0005face) compass_pane_t6

0x3447,	// (0x0005fadc) compass_pane_t7

0xb390,	// (0x00067a25) navi_pane_cc_t1

0xb56d,	// (0x00067c02) aid_phob_thumbnail_center_pane

0x3a9c,	// (0x00060131) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x0006b974) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x0006b974) list_cale_time_pane_t

0x9c13,	// (0x000662a8) bg_popup_window_pane_cp02_ParamLimits

0x9c13,	// (0x000662a8) bg_popup_window_pane_cp02

0xaf26,	// (0x000675bb) heading_pane_cp01_ParamLimits

0xaf26,	// (0x000675bb) heading_pane_cp01

0xaf32,	// (0x000675c7) loc_req_pane_ParamLimits

0xaf32,	// (0x000675c7) loc_req_pane

0xaf42,	// (0x000675d7) loc_type_pane_ParamLimits

0xaf42,	// (0x000675d7) loc_type_pane

0xaf54,	// (0x000675e9) loc_type_pane_t1_ParamLimits

0xaf54,	// (0x000675e9) loc_type_pane_t1

0xaf66,	// (0x000675fb) loc_type_pane_t2_ParamLimits

0xaf66,	// (0x000675fb) loc_type_pane_t2

0xaf78,	// (0x0006760d) loc_type_pane_t3_ParamLimits

0xaf78,	// (0x0006760d) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x0006b97b) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x0006b97b) loc_type_pane_t

0xaf8a,	// (0x0006761f) list_loc_req_pane

0xaf94,	// (0x00067629) scroll_pane_cp012

0x301e,	// (0x0005f6b3) list_single_loc_request_popup_menu_pane_ParamLimits

0x301e,	// (0x0005f6b3) list_single_loc_request_popup_menu_pane

0xaf9f,	// (0x00067634) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf9f,	// (0x00067634) list_single_loc_request_popup_menu_pane_g1

0xafab,	// (0x00067640) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafab,	// (0x00067640) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x0006b982) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x0006b982) list_single_loc_request_popup_menu_pane_g

0xafb7,	// (0x0006764c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafb7,	// (0x0006764c) list_single_loc_request_popup_menu_pane_t1

0x3037,	// (0x0005f6cc) bg_popup_window_pane_cp03_ParamLimits

0x3037,	// (0x0005f6cc) bg_popup_window_pane_cp03

0x3045,	// (0x0005f6da) heading_loc_req_pane_ParamLimits

0x3045,	// (0x0005f6da) heading_loc_req_pane

0x3051,	// (0x0005f6e6) popup_dyc_status_message_window_g1_ParamLimits

0x3051,	// (0x0005f6e6) popup_dyc_status_message_window_g1

0x305d,	// (0x0005f6f2) popup_dyc_status_message_window_t1_ParamLimits

0x305d,	// (0x0005f6f2) popup_dyc_status_message_window_t1

0x306f,	// (0x0005f704) popup_dyc_status_message_window_t2_ParamLimits

0x306f,	// (0x0005f704) popup_dyc_status_message_window_t2

0x3081,	// (0x0005f716) popup_dyc_status_message_window_t3_ParamLimits

0x3081,	// (0x0005f716) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x0006b987) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x0006b987) popup_dyc_status_message_window_t

0xa469,	// (0x00066afe) bg_heading_pane_cp01

0xafcd,	// (0x00067662) heading_loc_req_pane_g1

0xafd5,	// (0x0006766a) heading_loc_req_pane_g2

0xafdd,	// (0x00067672) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x0006b98e) heading_loc_req_pane_g

0xafe5,	// (0x0006767a) heading_loc_req_pane_t1

0xaff4,	// (0x00067689) bg_popup_sub_pane_cp01_ParamLimits

0xaff4,	// (0x00067689) bg_popup_sub_pane_cp01

0xb002,	// (0x00067697) popup_cale_events_window_g1_ParamLimits

0xb002,	// (0x00067697) popup_cale_events_window_g1

0xb022,	// (0x000676b7) popup_cale_events_window_g2_ParamLimits

0xb022,	// (0x000676b7) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x0006b9c2) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x0006b9c2) popup_cale_events_window_g

0xb042,	// (0x000676d7) popup_cale_events_window_t1_ParamLimits

0xb042,	// (0x000676d7) popup_cale_events_window_t1

0xb054,	// (0x000676e9) popup_cale_events_window_t2_ParamLimits

0xb054,	// (0x000676e9) popup_cale_events_window_t2

0xb092,	// (0x00067727) popup_cale_events_window_t3_ParamLimits

0xb092,	// (0x00067727) popup_cale_events_window_t3

0xb0cc,	// (0x00067761) popup_cale_events_window_t4_ParamLimits

0xb0cc,	// (0x00067761) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x0006b9c7) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x0006b9c7) popup_cale_events_window_t

0x317c,	// (0x0005f811) call_type_pane

0xb10e,	// (0x000677a3) popup_call_status_window_g1

0x3188,	// (0x0005f81d) popup_call_status_window_g2

0x3194,	// (0x0005f829) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x0006b9d0) popup_call_status_window_g

0xb11c,	// (0x000677b1) call_type_pane_g1

0xb125,	// (0x000677ba) call_type_pane_g2

0x0001,

0xf342,	// (0x0006b9d7) call_type_pane_g

0xa469,	// (0x00066afe) bg_popup_sub_pane_cp02

0xb12e,	// (0x000677c3) listscroll_popup_wml_pane

0xb136,	// (0x000677cb) list_wml_pane

0xb140,	// (0x000677d5) scroll_pane_cp013

0xb14b,	// (0x000677e0) list_single_graphic_popup_wml_pane_ParamLimits

0xb14b,	// (0x000677e0) list_single_graphic_popup_wml_pane

0xa8ee,	// (0x00066f83) list_single_graphic_popup_wml_pane_g1

0xb15f,	// (0x000677f4) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x0006b9dc) list_single_graphic_popup_wml_pane_g

0xb167,	// (0x000677fc) list_single_graphic_popup_wml_pane_t1

0xb17d,	// (0x00067812) aid_call_pane

0xa7c0,	// (0x00066e55) popup_clock_analogue_window_g1

0xa7c0,	// (0x00066e55) popup_clock_analogue_window_g2

0x31a0,	// (0x0005f835) popup_clock_analogue_window_g3

0x31a0,	// (0x0005f835) popup_clock_analogue_window_g4

0xa8ee,	// (0x00066f83) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x0006b9e1) popup_clock_analogue_window_g

0x31a8,	// (0x0005f83d) popup_clock_analogue_window_t1

0x31b6,	// (0x0005f84b) clock_digital_number_pane_ParamLimits

0x31b6,	// (0x0005f84b) clock_digital_number_pane

0x31c2,	// (0x0005f857) clock_digital_number_pane_cp02_ParamLimits

0x31c2,	// (0x0005f857) clock_digital_number_pane_cp02

0x31ce,	// (0x0005f863) clock_digital_number_pane_cp03_ParamLimits

0x31ce,	// (0x0005f863) clock_digital_number_pane_cp03

0x31da,	// (0x0005f86f) clock_digital_number_pane_cp04_ParamLimits

0x31da,	// (0x0005f86f) clock_digital_number_pane_cp04

0x31e6,	// (0x0005f87b) clock_digital_separator_pane_ParamLimits

0x31e6,	// (0x0005f87b) clock_digital_separator_pane

0x31f2,	// (0x0005f887) popup_clock_digital_window_t1

0xa8ee,	// (0x00066f83) clock_digital_number_pane_g1

0xa8ee,	// (0x00066f83) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x0006b94f) clock_digital_number_pane_g

0xa8ee,	// (0x00066f83) clock_digital_separator_pane_g1

0xa8ee,	// (0x00066f83) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x0006b94f) clock_digital_separator_pane_g

0xa469,	// (0x00066afe) bg_popup_window_pane_cp04

0xb185,	// (0x0006781a) heading_pane_cp03

0xb18d,	// (0x00067822) listscroll_popup_gms_pane

0xb195,	// (0x0006782a) grid_large_graphic_popup_pane

0xb19f,	// (0x00067834) listscroll_popup_gms_pane_g1

0xb1a7,	// (0x0006783c) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x0006b9ec) listscroll_popup_gms_pane_g

0xac2e,	// (0x000672c3) scroll_pane_cp014

0x320f,	// (0x0005f8a4) cell_large_graphic_popup_pane_ParamLimits

0x320f,	// (0x0005f8a4) cell_large_graphic_popup_pane

0x3227,	// (0x0005f8bc) cell_large_graphic_popup_pane_g1_ParamLimits

0x3227,	// (0x0005f8bc) cell_large_graphic_popup_pane_g1

0xb1af,	// (0x00067844) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1af,	// (0x00067844) cell_large_graphic_popup_pane_g2

0xb1bb,	// (0x00067850) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1bb,	// (0x00067850) cell_large_graphic_popup_pane_g3

0xb1c8,	// (0x0006785d) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1c8,	// (0x0006785d) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x0006b9f1) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x0006b9f1) cell_large_graphic_popup_pane_g

0xb1d8,	// (0x0006786d) grid_highlight_pane_cp010

0xa8ee,	// (0x00066f83) bg_popup_call_pane_g1

0xb1e2,	// (0x00067877) list_single_graphic_popup_conf_pane_ParamLimits

0xb1e2,	// (0x00067877) list_single_graphic_popup_conf_pane

0xb1f5,	// (0x0006788a) list_highlight_pane_cp01

0xb1fe,	// (0x00067893) list_single_graphic_popup_conf_pane_g1

0xb206,	// (0x0006789b) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x0006b9fa) list_single_graphic_popup_conf_pane_g

0xb20e,	// (0x000678a3) list_single_graphic_popup_conf_pane_t1

0xb21c,	// (0x000678b1) linegrid_cams_pane_g1

0x3233,	// (0x0005f8c8) linegrid_cams_pane_g2

0xaa44,	// (0x000670d9) linegrid_cams_pane_g3

0xb225,	// (0x000678ba) linegrid_cams_pane_g4

0x323c,	// (0x0005f8d1) linegrid_cams_pane_g5

0x3245,	// (0x0005f8da) linegrid_cams_pane_g6

0xaa4d,	// (0x000670e2) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x0006b9ff) linegrid_cams_pane_g

0xb22e,	// (0x000678c3) popup_clock_analogue_window

0xb22e,	// (0x000678c3) popup_clock_digital_window

0xa469,	// (0x00066afe) popup_phob_thumbnail_window

0xa8ee,	// (0x00066f83) call_video_uplink_pane_g1

0xb237,	// (0x000678cc) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x0006ba0e) call_video_uplink_pane_g

0xb23f,	// (0x000678d4) video_uplink_pane

0xb247,	// (0x000678dc) mce_image_pane_g1

0x324e,	// (0x0005f8e3) mce_image_pane_g2

0x3256,	// (0x0005f8eb) mce_image_pane_g3

0x325e,	// (0x0005f8f3) mce_image_pane_g4

0x3266,	// (0x0005f8fb) mce_image_pane_g5

0x0004,

0xf37e,	// (0x0006ba13) mce_image_pane_g

0xb251,	// (0x000678e6) control_top_pane_stacon_cp01_ParamLimits

0xb251,	// (0x000678e6) control_top_pane_stacon_cp01

0xb265,	// (0x000678fa) uni_indicator_pane_stacon_cp01_ParamLimits

0xb265,	// (0x000678fa) uni_indicator_pane_stacon_cp01

0xb276,	// (0x0006790b) bg_popup_sub_pane_cp03

0x326e,	// (0x0005f903) chi_dic_find_pane

0x3276,	// (0x0005f90b) listscroll_chi_dic_pane

0x327f,	// (0x0005f914) main_pane_chidic_g1

0x3292,	// (0x0005f927) chi_dic_find_pane_t1

0xb280,	// (0x00067915) find_chidic_pane

0xb289,	// (0x0006791e) chi_dic_list_pane_ParamLimits

0xb289,	// (0x0006791e) chi_dic_list_pane

0xb29a,	// (0x0006792f) scroll_pane_cp020

0x32a0,	// (0x0005f935) find_chidic_pane_t1

0xa469,	// (0x00066afe) input_focus_pane_cp06

0x32af,	// (0x0005f944) list_chi_dic_pane_ParamLimits

0x32af,	// (0x0005f944) list_chi_dic_pane

0x32cc,	// (0x0005f961) list_chi_dic_pane_t1_ParamLimits

0x32cc,	// (0x0005f961) list_chi_dic_pane_t1

0xa469,	// (0x00066afe) list_highlight_pane_cp020

0xb2a2,	// (0x00067937) bg_cale_heading_pane_g1

0x32df,	// (0x0005f974) bg_cale_heading_pane_g2

0x32e7,	// (0x0005f97c) bg_cale_heading_pane_g3

0x32ef,	// (0x0005f984) bg_cale_heading_pane_g4

0x32f9,	// (0x0005f98e) bg_cale_heading_pane_g5

0x3303,	// (0x0005f998) bg_cale_heading_pane_g6

0x330b,	// (0x0005f9a0) bg_cale_heading_pane_g7

0x3313,	// (0x0005f9a8) bg_cale_heading_pane_g8

0x331d,	// (0x0005f9b2) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x0006ba1e) bg_cale_heading_pane_g

0xb2a2,	// (0x00067937) bg_cale_side_pane_g1

0x3327,	// (0x0005f9bc) bg_cale_side_pane_g2

0x3331,	// (0x0005f9c6) bg_cale_side_pane_g3

0x333b,	// (0x0005f9d0) bg_cale_side_pane_g4

0x3345,	// (0x0005f9da) bg_cale_side_pane_g5

0x334f,	// (0x0005f9e4) bg_cale_side_pane_g6

0x3359,	// (0x0005f9ee) bg_cale_side_pane_g7

0x3363,	// (0x0005f9f8) bg_cale_side_pane_g8

0x336b,	// (0x0005fa00) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x0006ba31) bg_cale_side_pane_g

0x3373,	// (0x0005fa08) popup_call_status_window_ParamLimits

0x3373,	// (0x0005fa08) popup_call_status_window

0xb2aa,	// (0x0006793f) stacon_top_pane

0xb2b2,	// (0x00067947) status_pane_ParamLimits

0xb2b2,	// (0x00067947) status_pane

0xb2c7,	// (0x0006795c) status_small_pane

0xb2cf,	// (0x00067964) control_pane

0xa469,	// (0x00066afe) stacon_bottom_pane

0xb2d7,	// (0x0006796c) list_single_mce_smart_pane_t1_ParamLimits

0xb2d7,	// (0x0006796c) list_single_mce_smart_pane_t1

0xb2ea,	// (0x0006797f) list_single_mce_smart_pane_t2_ParamLimits

0xb2ea,	// (0x0006797f) list_single_mce_smart_pane_t2

0x0001,

0xf3af,	// (0x0006ba44) list_single_mce_smart_pane_t_ParamLimits

0xf3af,	// (0x0006ba44) list_single_mce_smart_pane_t

0x337f,	// (0x0005fa14) compass_pane

0x338b,	// (0x0005fa20) main_location2_pane_t1

0x339f,	// (0x0005fa34) main_location2_pane_t2

0x33b3,	// (0x0005fa48) main_location2_pane_t3

0x0003,

0xf3b4,	// (0x0006ba49) main_location2_pane_t

0xb309,	// (0x0006799e) compass_pane_g1_ParamLimits

0xb309,	// (0x0006799e) compass_pane_g1

0x33fd,	// (0x0005fa92) compass_pane_t1

0x340c,	// (0x0005faa1) compass_pane_t2

0x0005,

0xf3bd,	// (0x0006ba52) compass_pane_t

0x3457,	// (0x0005faec) text_secondary_cp61

0xb387,	// (0x00067a1c) navi_pane_cams_g5

0xb403,	// (0x00067a98) navi_pane_im_t1

0xb411,	// (0x00067aa6) navi_pane_mp_g1_ParamLimits

0xb411,	// (0x00067aa6) navi_pane_mp_g1

0xb425,	// (0x00067aba) navi_pane_mp_g2_ParamLimits

0xb425,	// (0x00067aba) navi_pane_mp_g2

0xb431,	// (0x00067ac6) navi_pane_mp_g3_ParamLimits

0xb431,	// (0x00067ac6) navi_pane_mp_g3

0x0002,

0x0020,	// (0x0005c6b5) navi_pane_mp_g_ParamLimits

0x0020,	// (0x0005c6b5) navi_pane_mp_g

0xb43d,	// (0x00067ad2) navi_pane_mp_t1

0xb44b,	// (0x00067ae0) navi_pane_mp_t2

0x0002,

0x0027,	// (0x0005c6bc) navi_pane_mp_t

0xb4b6,	// (0x00067b4b) navi_pane_vt_g1

0xb43d,	// (0x00067ad2) navi_pane_vt_t1

0xb4be,	// (0x00067b53) navi_slider_pane

0xaa5e,	// (0x000670f3) zooming_pane

0xb4ce,	// (0x00067b63) navi_slider_pane_g1

0x3492,	// (0x0005fb27) navi_slider_pane_g2

0x0006,

0xf3ca,	// (0x0006ba5f) navi_slider_pane_g

0xb4f2,	// (0x00067b87) aid_levels_zoom

0xb4fa,	// (0x00067b8f) zooming_pane_g1

0xb502,	// (0x00067b97) zooming_pane_g2

0xb502,	// (0x00067b97) zooming_pane_g3

0x0002,

0x003d,	// (0x0005c6d2) zooming_pane_g

0xb50a,	// (0x00067b9f) level_10_zoom

0xb513,	// (0x00067ba8) level_11_zoom

0xb51c,	// (0x00067bb1) level_1_zoom

0xb525,	// (0x00067bba) level_2_zoom

0xb52e,	// (0x00067bc3) level_3_zoom

0xb537,	// (0x00067bcc) level_4_zoom

0xb540,	// (0x00067bd5) level_5_zoom

0xb549,	// (0x00067bde) level_6_zoom

0xb552,	// (0x00067be7) level_7_zoom

0xb55b,	// (0x00067bf0) level_8_zoom

0xb564,	// (0x00067bf9) level_9_zoom

0xb575,	// (0x00067c0a) popup_phob_thumbnail_window_g1

0xb57d,	// (0x00067c12) popup_phob_thumbnail_window_g2

0x0001,

0x0044,	// (0x0005c6d9) popup_phob_thumbnail_window_g

0xc8a6,	// (0x00068f3b) level_1_location

0xc8ae,	// (0x00068f43) level_2_location

0xc8b6,	// (0x00068f4b) level_3_location

0xc8be,	// (0x00068f53) level_4_location

0xaa5e,	// (0x000670f3) level_5_location

0x34a4,	// (0x0005fb39) mce_icon_pane_g1

0x34ac,	// (0x0005fb41) mce_icon_pane_g2

0x0001,

0xf3d9,	// (0x0006ba6e) mce_icon_pane_g

0x34b4,	// (0x0005fb49) main_mup_pane_g1_ParamLimits

0x34b4,	// (0x0005fb49) main_mup_pane_g1

0x34cc,	// (0x0005fb61) main_mup_pane_g2_ParamLimits

0x34cc,	// (0x0005fb61) main_mup_pane_g2

0x34e0,	// (0x0005fb75) main_mup_pane_g3_ParamLimits

0x34e0,	// (0x0005fb75) main_mup_pane_g3

0x34f4,	// (0x0005fb89) main_mup_pane_g4_ParamLimits

0x34f4,	// (0x0005fb89) main_mup_pane_g4

0x3510,	// (0x0005fba5) main_mup_pane_g5_ParamLimits

0x3510,	// (0x0005fba5) main_mup_pane_g5

0x3531,	// (0x0005fbc6) main_mup_pane_g6_ParamLimits

0x3531,	// (0x0005fbc6) main_mup_pane_g6

0x354d,	// (0x0005fbe2) main_mup_pane_g7_ParamLimits

0x354d,	// (0x0005fbe2) main_mup_pane_g7

0x3569,	// (0x0005fbfe) main_mup_pane_g8_ParamLimits

0x3569,	// (0x0005fbfe) main_mup_pane_g8

0x3585,	// (0x0005fc1a) main_mup_pane_g9_ParamLimits

0x3585,	// (0x0005fc1a) main_mup_pane_g9

0x35a4,	// (0x0005fc39) main_mup_pane_g10_ParamLimits

0x35a4,	// (0x0005fc39) main_mup_pane_g10

0x35c3,	// (0x0005fc58) main_mup_pane_g11_ParamLimits

0x35c3,	// (0x0005fc58) main_mup_pane_g11

0x35db,	// (0x0005fc70) main_mup_pane_g12_ParamLimits

0x35db,	// (0x0005fc70) main_mup_pane_g12

0x35e9,	// (0x0005fc7e) main_mup_pane_g13_ParamLimits

0x35e9,	// (0x0005fc7e) main_mup_pane_g13

0x000c,

0xf3de,	// (0x0006ba73) main_mup_pane_g_ParamLimits

0xf3de,	// (0x0006ba73) main_mup_pane_g

0x35ff,	// (0x0005fc94) main_mup_pane_t1_ParamLimits

0x35ff,	// (0x0005fc94) main_mup_pane_t1

0x361c,	// (0x0005fcb1) main_mup_pane_t2_ParamLimits

0x361c,	// (0x0005fcb1) main_mup_pane_t2

0x3636,	// (0x0005fccb) main_mup_pane_t3_ParamLimits

0x3636,	// (0x0005fccb) main_mup_pane_t3

0x3650,	// (0x0005fce5) main_mup_pane_t4_ParamLimits

0x3650,	// (0x0005fce5) main_mup_pane_t4

0x3662,	// (0x0005fcf7) main_mup_pane_t5_ParamLimits

0x3662,	// (0x0005fcf7) main_mup_pane_t5

0x3674,	// (0x0005fd09) main_mup_pane_t6_ParamLimits

0x3674,	// (0x0005fd09) main_mup_pane_t6

0x0005,

0xf3f9,	// (0x0006ba8e) main_mup_pane_t_ParamLimits

0xf3f9,	// (0x0006ba8e) main_mup_pane_t

0x368a,	// (0x0005fd1f) mup_progress_pane_ParamLimits

0x368a,	// (0x0005fd1f) mup_progress_pane

0x3696,	// (0x0005fd2b) mup_visualizer_pane_ParamLimits

0x3696,	// (0x0005fd2b) mup_visualizer_pane

0x36d4,	// (0x0005fd69) mup_volume_pane_ParamLimits

0x36d4,	// (0x0005fd69) mup_volume_pane

0xb10e,	// (0x000677a3) mup_visualizer_pane_g1_ParamLimits

0xb10e,	// (0x000677a3) mup_visualizer_pane_g1

0xb10e,	// (0x000677a3) mup_visualizer_pane_g2_ParamLimits

0xb10e,	// (0x000677a3) mup_visualizer_pane_g2

0xb309,	// (0x0006799e) mup_visualizer_pane_g3_ParamLimits

0xb309,	// (0x0006799e) mup_visualizer_pane_g3

0x0002,

0xf406,	// (0x0006ba9b) mup_visualizer_pane_g_ParamLimits

0xf406,	// (0x0006ba9b) mup_visualizer_pane_g

0xa8ee,	// (0x00066f83) mup_volume_pane_g1

0xb58d,	// (0x00067c22) mup_volume_pane_g2

0x0001,

0xf40d,	// (0x0006baa2) mup_volume_pane_g

0xa8ee,	// (0x00066f83) mup_progress_pane_g1

0xb596,	// (0x00067c2b) mup_progress_pane_g2

0xb59f,	// (0x00067c34) mup_progress_pane_g3

0x0002,

0xf412,	// (0x0006baa7) mup_progress_pane_g

0xa469,	// (0x00066afe) bg_popup_window_pane_cp05

0xb5a8,	// (0x00067c3d) heading_pane_cp02_ParamLimits

0xb5a8,	// (0x00067c3d) heading_pane_cp02

0xb5c2,	// (0x00067c57) list_popup_blid_pane

0xb5ca,	// (0x00067c5f) list_blid_sat_info_pane_ParamLimits

0xb5ca,	// (0x00067c5f) list_blid_sat_info_pane

0xb5dd,	// (0x00067c72) list_blid_sat_info_pane_g1

0xb5e5,	// (0x00067c7a) list_blid_sat_info_pane_t1

0x37df,	// (0x0005fe74) mup_equalizer_pane_ParamLimits

0x37df,	// (0x0005fe74) mup_equalizer_pane

0x3800,	// (0x0005fe95) mup_equalizer_pane_cp1_ParamLimits

0x3800,	// (0x0005fe95) mup_equalizer_pane_cp1

0x3821,	// (0x0005feb6) mup_equalizer_pane_cp2_ParamLimits

0x3821,	// (0x0005feb6) mup_equalizer_pane_cp2

0x3842,	// (0x0005fed7) mup_equalizer_pane_cp3_ParamLimits

0x3842,	// (0x0005fed7) mup_equalizer_pane_cp3

0x3863,	// (0x0005fef8) mup_equalizer_pane_cp4_ParamLimits

0x3863,	// (0x0005fef8) mup_equalizer_pane_cp4

0x3884,	// (0x0005ff19) mup_equalizer_pane_cp5

0x389a,	// (0x0005ff2f) mup_equalizer_pane_cp6

0x38b2,	// (0x0005ff47) mup_equalizer_pane_cp7

0xc784,	// (0x00068e19) bg_popup_call_poc_act_pane_g9

0xc78c,	// (0x00068e21) bg_popup_call_poc_act_pane_g10

0xc794,	// (0x00068e29) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7c8,	// (0x00066e5d) mup_scale_pane

0xa8ee,	// (0x00066f83) mup_scale_pane_g1

0xb5f3,	// (0x00067c88) mup_scale_pane_g2

0x0006,

0xf42e,	// (0x0006bac3) mup_scale_pane_g

0xb617,	// (0x00067cac) msg_data_pane

0xb61f,	// (0x00067cb4) scroll_pane_cp017

0x38dc,	// (0x0005ff71) bg_list_pane_cp04_ParamLimits

0x38dc,	// (0x0005ff71) bg_list_pane_cp04

0xb627,	// (0x00067cbc) msg_data_pane_g1

0x38f4,	// (0x0005ff89) msg_data_pane_g2

0x38fc,	// (0x0005ff91) msg_data_pane_g3

0x3904,	// (0x0005ff99) msg_data_pane_g4

0x390c,	// (0x0005ffa1) msg_data_pane_g5

0x3914,	// (0x0005ffa9) msg_data_pane_g6

0x391c,	// (0x0005ffb1) msg_data_pane_g7

0x0006,

0xf43d,	// (0x0006bad2) msg_data_pane_g

0x3924,	// (0x0005ffb9) msg_text_pane_ParamLimits

0x3924,	// (0x0005ffb9) msg_text_pane

0x397e,	// (0x00060013) qrid_highlight_pane_cp011_ParamLimits

0x397e,	// (0x00060013) qrid_highlight_pane_cp011

0xa469,	// (0x00066afe) msg_body_pane

0xa469,	// (0x00066afe) msg_header_pane

0xb638,	// (0x00067ccd) input_focus_pane_cp07

0x9fc4,	// (0x00066659) msg_header_pane_t1_ParamLimits

0x9fc4,	// (0x00066659) msg_header_pane_t1

0x9fd6,	// (0x0006666b) msg_header_pane_t2_ParamLimits

0x9fd6,	// (0x0006666b) msg_header_pane_t2

0x0001,

0xf451,	// (0x0006bae6) msg_header_pane_t_ParamLimits

0xf451,	// (0x0006bae6) msg_header_pane_t

0xb64d,	// (0x00067ce2) msg_body_pane_g1

0x9fe8,	// (0x0006667d) msg_body_pane_t1_ParamLimits

0x9fe8,	// (0x0006667d) msg_body_pane_t1

0xa019,	// (0x000666ae) msg_body_pane_t2_ParamLimits

0xa019,	// (0x000666ae) msg_body_pane_t2

0xa02b,	// (0x000666c0) msg_body_pane_t3_ParamLimits

0xa02b,	// (0x000666c0) msg_body_pane_t3

0x0002,

0xf456,	// (0x0006baeb) msg_body_pane_t_ParamLimits

0xf456,	// (0x0006baeb) msg_body_pane_t

0x39f8,	// (0x0006008d) main_viewer_pane_g1_ParamLimits

0x39f8,	// (0x0006008d) main_viewer_pane_g1

0x3a04,	// (0x00060099) main_viewer_pane_g2_ParamLimits

0x3a04,	// (0x00060099) main_viewer_pane_g2

0x3a10,	// (0x000600a5) main_viewer_pane_g3_ParamLimits

0x3a10,	// (0x000600a5) main_viewer_pane_g3

0x3a21,	// (0x000600b6) main_viewer_pane_g4_ParamLimits

0x3a21,	// (0x000600b6) main_viewer_pane_g4

0x3a32,	// (0x000600c7) main_viewer_pane_g5_ParamLimits

0x3a32,	// (0x000600c7) main_viewer_pane_g5

0x3a32,	// (0x000600c7) main_viewer_pane_g7_ParamLimits

0x3a32,	// (0x000600c7) main_viewer_pane_g7

0xaf9f,	// (0x00067634) main_viewer_pane_g8_ParamLimits

0xaf9f,	// (0x00067634) main_viewer_pane_g8

0x0007,

0xf466,	// (0x0006bafb) main_viewer_pane_g_ParamLimits

0xf466,	// (0x0006bafb) main_viewer_pane_g

0xb655,	// (0x00067cea) viewer_content_pane_ParamLimits

0xb655,	// (0x00067cea) viewer_content_pane

0x3a70,	// (0x00060105) main_postcard_pane_g1_ParamLimits

0x3a70,	// (0x00060105) main_postcard_pane_g1

0x3a7e,	// (0x00060113) main_postcard_pane_g2_ParamLimits

0x3a7e,	// (0x00060113) main_postcard_pane_g2

0x3a8c,	// (0x00060121) main_postcard_pane_g3_ParamLimits

0x3a8c,	// (0x00060121) main_postcard_pane_g3

0x0005,

0xf477,	// (0x0006bb0c) main_postcard_pane_g_ParamLimits

0xf477,	// (0x0006bb0c) main_postcard_pane_g

0x3a9c,	// (0x00060131) main_postcard_pane_g4

0xc9a6,	// (0x0006903b) smil_status_volume_pane_g2

0x3ac8,	// (0x0006015d) postcard_pane_ParamLimits

0x3ac8,	// (0x0006015d) postcard_pane

0xb10e,	// (0x000677a3) postcard_pane_g1_ParamLimits

0xb10e,	// (0x000677a3) postcard_pane_g1

0x3afa,	// (0x0006018f) postcard_pane_g2_ParamLimits

0x3afa,	// (0x0006018f) postcard_pane_g2

0x3b06,	// (0x0006019b) postcard_pane_g3_ParamLimits

0x3b06,	// (0x0006019b) postcard_pane_g3

0xb663,	// (0x00067cf8) postcard_pane_g4_ParamLimits

0xb663,	// (0x00067cf8) postcard_pane_g4

0x3b12,	// (0x000601a7) postcard_pane_g5_ParamLimits

0x3b12,	// (0x000601a7) postcard_pane_g5

0x3b1e,	// (0x000601b3) postcard_pane_g6_ParamLimits

0x3b1e,	// (0x000601b3) postcard_pane_g6

0xb671,	// (0x00067d06) postcard_pane_g7_ParamLimits

0xb671,	// (0x00067d06) postcard_pane_g7

0x0006,

0xf484,	// (0x0006bb19) postcard_pane_g_ParamLimits

0xf484,	// (0x0006bb19) postcard_pane_g

0x3b2a,	// (0x000601bf) main_mp2_pane_g1_ParamLimits

0x3b2a,	// (0x000601bf) main_mp2_pane_g1

0x3b36,	// (0x000601cb) main_mp2_pane_g2_ParamLimits

0x3b36,	// (0x000601cb) main_mp2_pane_g2

0x3b42,	// (0x000601d7) main_mp2_pane_g3_ParamLimits

0x3b42,	// (0x000601d7) main_mp2_pane_g3

0x0002,

0xf493,	// (0x0006bb28) main_mp2_pane_g_ParamLimits

0xf493,	// (0x0006bb28) main_mp2_pane_g

0x3b4e,	// (0x000601e3) main_mp2_pane_t1_ParamLimits

0x3b4e,	// (0x000601e3) main_mp2_pane_t1

0x3b65,	// (0x000601fa) main_mp2_pane_t2_ParamLimits

0x3b65,	// (0x000601fa) main_mp2_pane_t2

0x3b77,	// (0x0006020c) main_mp2_pane_t3_ParamLimits

0x3b77,	// (0x0006020c) main_mp2_pane_t3

0x0002,

0xf49a,	// (0x0006bb2f) main_mp2_pane_t_ParamLimits

0xf49a,	// (0x0006bb2f) main_mp2_pane_t

0xb67f,	// (0x00067d14) pec_content_pane_ParamLimits

0xb67f,	// (0x00067d14) pec_content_pane

0xac2e,	// (0x000672c3) scroll_pane_cp015

0xb691,	// (0x00067d26) pec_attribute_pane_ParamLimits

0xb691,	// (0x00067d26) pec_attribute_pane

0x3b89,	// (0x0006021e) pec_content_pane_g1_ParamLimits

0x3b89,	// (0x0006021e) pec_content_pane_g1

0xb6a1,	// (0x00067d36) pec_content_pane_t1_ParamLimits

0xb6a1,	// (0x00067d36) pec_content_pane_t1

0xb6b3,	// (0x00067d48) pec_content_pane_t2_ParamLimits

0xb6b3,	// (0x00067d48) pec_content_pane_t2

0x0001,

0x0111,	// (0x0005c7a6) pec_content_pane_t_ParamLimits

0x0111,	// (0x0005c7a6) pec_content_pane_t

0x3b95,	// (0x0006022a) list_single_graphic_pane_cp01_ParamLimits

0x3b95,	// (0x0006022a) list_single_graphic_pane_cp01

0xa7c8,	// (0x00066e5d) bg_popup_sub_pane_cp04

0xb6c5,	// (0x00067d5a) popup_mup_playback_window_g1

0xb6d1,	// (0x00067d66) popup_mup_playback_window_t1

0xb6e6,	// (0x00067d7b) popup_mup_playback_window_t2

0x0001,

0x0116,	// (0x0005c7ab) popup_mup_playback_window_t

0xb71d,	// (0x00067db2) main_image_pane_g1_ParamLimits

0xb71d,	// (0x00067db2) main_image_pane_g1

0xb760,	// (0x00067df5) scroll_pane_cp018_ParamLimits

0xb760,	// (0x00067df5) scroll_pane_cp018

0xb778,	// (0x00067e0d) scroll_pane_cp016_ParamLimits

0xb778,	// (0x00067e0d) scroll_pane_cp016

0x3c2f,	// (0x000602c4) smil2_image_pane_ParamLimits

0x3c2f,	// (0x000602c4) smil2_image_pane

0x3c5f,	// (0x000602f4) smil2_root_pane_ParamLimits

0x3c5f,	// (0x000602f4) smil2_root_pane

0x3c8b,	// (0x00060320) smil2_text_pane_ParamLimits

0x3c8b,	// (0x00060320) smil2_text_pane

0xa469,	// (0x00066afe) bg_list_pane_cp06

0xb7b4,	// (0x00067e49) grid_radio_pane

0xa469,	// (0x00066afe) bg_popup_window_pane_cp06

0xb7bc,	// (0x00067e51) main_fmradio_pane_t1

0xb185,	// (0x0006781a) heading_pane_cp04

0xb7ca,	// (0x00067e5f) main_fmradio_pane_t2

0xc7dc,	// (0x00068e71) popup_cale_lunar_info_window_g1

0xb7d8,	// (0x00067e6d) main_fmradio_pane_t3

0xc7e4,	// (0x00068e79) popup_cale_lunar_info_window_g2

0xb7e6,	// (0x00067e7b) main_fmradio_pane_t4

0x0001,

0xb7f4,	// (0x00067e89) main_fmradio_pane_t5

0x0004,

0x0204,	// (0x0005c899) popup_cale_lunar_info_window_g

0x012b,	// (0x0005c7c0) main_fmradio_pane_t

0xb802,	// (0x00067e97) wait_bar_pane_cp03

0xb80a,	// (0x00067e9f) cell_fmradio_pane_ParamLimits

0xb80a,	// (0x00067e9f) cell_fmradio_pane

0xb671,	// (0x00067d06) cell_fmradio_pane_g1_ParamLimits

0xb671,	// (0x00067d06) cell_fmradio_pane_g1

0xa469,	// (0x00066afe) grid_highlight_pane_cp011

0xb81d,	// (0x00067eb2) poc_content_pane_ParamLimits

0xb81d,	// (0x00067eb2) poc_content_pane

0xb82f,	// (0x00067ec4) scroll_pane_cp019

0x3ccb,	// (0x00060360) popup_call_poc_act_window_ParamLimits

0x3ccb,	// (0x00060360) popup_call_poc_act_window

0x3cd8,	// (0x0006036d) popup_call_poc_inact_window_ParamLimits

0x3cd8,	// (0x0006036d) popup_call_poc_inact_window

0x01c8,	// (0x0005c85d) bg_popup_call_poc_act_pane_g

0xc79c,	// (0x00068e31) bg_popup_call_poc_inact_pane_g1

0xc7a4,	// (0x00068e39) bg_popup_call_poc_inact_pane_g2

0xb837,	// (0x00067ecc) popup_call_poc_act_window_g2

0xc7ac,	// (0x00068e41) bg_popup_call_poc_inact_pane_g3

0xc72c,	// (0x00068dc1) bg_popup_call_poc_inact_pane_g4

0xc7b4,	// (0x00068e49) bg_popup_call_poc_inact_pane_g5

0xb83f,	// (0x00067ed4) popup_call_poc_act_window_t1_ParamLimits

0xb83f,	// (0x00067ed4) popup_call_poc_act_window_t1

0xb867,	// (0x00067efc) popup_call_poc_act_window_t2_ParamLimits

0xb867,	// (0x00067efc) popup_call_poc_act_window_t2

0xb88f,	// (0x00067f24) popup_call_poc_act_window_t3_ParamLimits

0xb88f,	// (0x00067f24) popup_call_poc_act_window_t3

0xb8b7,	// (0x00067f4c) popup_call_poc_act_window_t4_ParamLimits

0xb8b7,	// (0x00067f4c) popup_call_poc_act_window_t4

0x0003,

0x0136,	// (0x0005c7cb) popup_call_poc_act_window_t_ParamLimits

0x0136,	// (0x0005c7cb) popup_call_poc_act_window_t

0xc7bc,	// (0x00068e51) bg_popup_call_poc_inact_pane_g6

0xc7c4,	// (0x00068e59) bg_popup_call_poc_inact_pane_g7

0xc7cc,	// (0x00068e61) bg_popup_call_poc_inact_pane_g8

0xb8c9,	// (0x00067f5e) popup_call_poc_inact_window_g2

0xc7d4,	// (0x00068e69) bg_popup_call_poc_inact_pane_g9

0x0008,

0x01df,	// (0x0005c874) bg_popup_call_poc_inact_pane_g

0xb8d1,	// (0x00067f66) popup_call_poc_inact_window_t1_ParamLimits

0xb8d1,	// (0x00067f66) popup_call_poc_inact_window_t1

0xb8e6,	// (0x00067f7b) popup_call_poc_inact_window_t2_ParamLimits

0xb8e6,	// (0x00067f7b) popup_call_poc_inact_window_t2

0xb8fb,	// (0x00067f90) popup_call_poc_inact_window_t3_ParamLimits

0xb8fb,	// (0x00067f90) popup_call_poc_inact_window_t3

0x0002,

0x013f,	// (0x0005c7d4) popup_call_poc_inact_window_t_ParamLimits

0x013f,	// (0x0005c7d4) popup_call_poc_inact_window_t

0xc919,	// (0x00068fae) context_pane_ParamLimits

0x431c,	// (0x000609b1) signal_pane_ParamLimits

0xaa5e,	// (0x000670f3) main_call2_pane

0x428f,	// (0x00060924) popup_phob_thumbnail2_window_ParamLimits

0x428f,	// (0x00060924) popup_phob_thumbnail2_window

0x39a6,	// (0x0006003b) aid_hotspot_pointer_arrow_pane

0x39ae,	// (0x00060043) aid_hotspot_pointer_hand_pane

0x4000,	// (0x00060695) phob_pre_status_pane_g5

0x1a2c,	// (0x0005e0c1) cams_zoom_pane_ParamLimits

0x1a38,	// (0x0005e0cd) image_vga_pane_ParamLimits

0x1a47,	// (0x0005e0dc) main_camera_pane_g1_ParamLimits

0x1a55,	// (0x0005e0ea) main_camera_pane_g2_ParamLimits

0x1a61,	// (0x0005e0f6) main_camera_pane_g3_ParamLimits

0x1a6d,	// (0x0005e102) main_camera_pane_g4_ParamLimits

0x1a79,	// (0x0005e10e) main_camera_pane_g5_ParamLimits

0x1a85,	// (0x0005e11a) main_camera_pane_g6_ParamLimits

0x1a91,	// (0x0005e126) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x0006b884) main_camera_pane_g_ParamLimits

0x1a9d,	// (0x0005e132) main_camera_pane_t1_ParamLimits

0x1aaf,	// (0x0005e144) main_camera_pane_t2_ParamLimits

0xf200,	// (0x0006b895) main_camera_pane_t_ParamLimits

0xa7c8,	// (0x00066e5d) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7c8,	// (0x00066e5d) bg_popup_preview_window_pane_cp01

0xb910,	// (0x00067fa5) popup_phob_thumbnail2_window_g1_ParamLimits

0xb910,	// (0x00067fa5) popup_phob_thumbnail2_window_g1

0xa469,	// (0x00066afe) call2_cli_visual_pane

0x3cf4,	// (0x00060389) popup_call2_audio_conf_window_ParamLimits

0x3cf4,	// (0x00060389) popup_call2_audio_conf_window

0x3d09,	// (0x0006039e) popup_call2_audio_first_window_ParamLimits

0x3d09,	// (0x0006039e) popup_call2_audio_first_window

0x3da7,	// (0x0006043c) popup_call2_audio_in_window_ParamLimits

0x3da7,	// (0x0006043c) popup_call2_audio_in_window

0x3de9,	// (0x0006047e) popup_call2_audio_out_window_ParamLimits

0x3de9,	// (0x0006047e) popup_call2_audio_out_window

0x3e4b,	// (0x000604e0) popup_call2_audio_second_window_ParamLimits

0x3e4b,	// (0x000604e0) popup_call2_audio_second_window

0x3ea9,	// (0x0006053e) popup_call2_audio_wait_window_ParamLimits

0x3ea9,	// (0x0006053e) popup_call2_audio_wait_window

0xa469,	// (0x00066afe) bg_popup_call2_act_pane_cp03

0xa7aa,	// (0x00066e3f) list_conf_pane_cp

0xb91c,	// (0x00067fb1) popup_call2_audio_conf_window_t1

0xb92a,	// (0x00067fbf) list_single_graphic_popup_conf2_pane_ParamLimits

0xb92a,	// (0x00067fbf) list_single_graphic_popup_conf2_pane

0xb1f5,	// (0x0006788a) list_highlight_pane_cp04

0xb93d,	// (0x00067fd2) list_single_graphic_popup_conf2_pane_g1

0xb206,	// (0x0006789b) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x0146,	// (0x0005c7db) list_single_graphic_popup_conf2_pane_g

0xb947,	// (0x00067fdc) list_single_graphic_popup_conf2_pane_t1

0xb955,	// (0x00067fea) bg_popup_call2_act_pane_cp01_ParamLimits

0xb955,	// (0x00067fea) bg_popup_call2_act_pane_cp01

0xb9df,	// (0x00068074) call_type_pane_cp05_ParamLimits

0xb9df,	// (0x00068074) call_type_pane_cp05

0xba33,	// (0x000680c8) popup_call2_audio_second_window_g1_ParamLimits

0xba33,	// (0x000680c8) popup_call2_audio_second_window_g1

0xba87,	// (0x0006811c) popup_call2_audio_second_window_g2_ParamLimits

0xba87,	// (0x0006811c) popup_call2_audio_second_window_g2

0x0002,

0x014b,	// (0x0005c7e0) popup_call2_audio_second_window_g_ParamLimits

0x014b,	// (0x0005c7e0) popup_call2_audio_second_window_g

0xbaec,	// (0x00068181) popup_call2_audio_second_window_t1_ParamLimits

0xbaec,	// (0x00068181) popup_call2_audio_second_window_t1

0xbba7,	// (0x0006823c) popup_call2_audio_second_window_t2_ParamLimits

0xbba7,	// (0x0006823c) popup_call2_audio_second_window_t2

0xbbfa,	// (0x0006828f) popup_call2_audio_second_window_t3_ParamLimits

0xbbfa,	// (0x0006828f) popup_call2_audio_second_window_t3

0x0003,

0x0152,	// (0x0005c7e7) popup_call2_audio_second_window_t_ParamLimits

0x0152,	// (0x0005c7e7) popup_call2_audio_second_window_t

0xa469,	// (0x00066afe) bg_popup_call2_in_pane_cp02

0xa473,	// (0x00066b08) call_type_pane_cp04

0xa47b,	// (0x00066b10) popup_call2_audio_wait_window_g1

0xa483,	// (0x00066b18) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x0006b773) popup_call2_audio_wait_window_g

0xa48b,	// (0x00066b20) popup_call2_audio_wait_window_t3

0xbced,	// (0x00068382) bg_popup_call2_act_pane_ParamLimits

0xbced,	// (0x00068382) bg_popup_call2_act_pane

0xbdad,	// (0x00068442) call_type_pane_cp03_ParamLimits

0xbdad,	// (0x00068442) call_type_pane_cp03

0xbe11,	// (0x000684a6) popup_call2_audio_first_window_g1_ParamLimits

0xbe11,	// (0x000684a6) popup_call2_audio_first_window_g1

0xbe81,	// (0x00068516) popup_call2_audio_first_window_g2_ParamLimits

0xbe81,	// (0x00068516) popup_call2_audio_first_window_g2

0xb10e,	// (0x000677a3) popup_call2_audio_first_window_g3_ParamLimits

0xb10e,	// (0x000677a3) popup_call2_audio_first_window_g3

0x0004,

0xf4b1,	// (0x0006bb46) popup_call2_audio_first_window_g_ParamLimits

0xf4b1,	// (0x0006bb46) popup_call2_audio_first_window_g

0xbf5f,	// (0x000685f4) popup_call2_audio_first_window_t1_ParamLimits

0xbf5f,	// (0x000685f4) popup_call2_audio_first_window_t1

0xc062,	// (0x000686f7) popup_call2_audio_first_window_t4_ParamLimits

0xc062,	// (0x000686f7) popup_call2_audio_first_window_t4

0xc145,	// (0x000687da) popup_call2_audio_first_window_t5_ParamLimits

0xc145,	// (0x000687da) popup_call2_audio_first_window_t5

0x0003,

0x0166,	// (0x0005c7fb) popup_call2_audio_first_window_t_ParamLimits

0x0166,	// (0x0005c7fb) popup_call2_audio_first_window_t

0xa7c0,	// (0x00066e55) bg_popup_call2_act_pane_g1

0xc7ec,	// (0x00068e81) popup_cale_lunar_info_window_t1

0xc7fa,	// (0x00068e8f) popup_cale_lunar_info_window_t2

0xc808,	// (0x00068e9d) popup_cale_lunar_info_window_t3

0xa469,	// (0x00066afe) bg_popup_call2_bubble_pane

0xc246,	// (0x000688db) bg_popup_call2_in_pane_cp01_ParamLimits

0xc246,	// (0x000688db) bg_popup_call2_in_pane_cp01

0x9c98,	// (0x0006632d) call_type_pane_cp02

0xc28e,	// (0x00068923) popup_call2_audio_out_window_g1_ParamLimits

0xc28e,	// (0x00068923) popup_call2_audio_out_window_g1

0xc2ba,	// (0x0006894f) popup_call2_audio_out_window_g2_ParamLimits

0xc2ba,	// (0x0006894f) popup_call2_audio_out_window_g2

0xc2e2,	// (0x00068977) popup_call2_audio_out_window_g3_ParamLimits

0xc2e2,	// (0x00068977) popup_call2_audio_out_window_g3

0x0003,

0x016f,	// (0x0005c804) popup_call2_audio_out_window_g_ParamLimits

0x016f,	// (0x0005c804) popup_call2_audio_out_window_g

0xc31d,	// (0x000689b2) popup_call2_audio_out_window_t1_ParamLimits

0xc31d,	// (0x000689b2) popup_call2_audio_out_window_t1

0xc37c,	// (0x00068a11) popup_call2_audio_out_window_t2_ParamLimits

0xc37c,	// (0x00068a11) popup_call2_audio_out_window_t2

0xc3d0,	// (0x00068a65) popup_call2_audio_out_window_t3_ParamLimits

0xc3d0,	// (0x00068a65) popup_call2_audio_out_window_t3

0xc3e6,	// (0x00068a7b) popup_call2_audio_out_window_t4_ParamLimits

0xc3e6,	// (0x00068a7b) popup_call2_audio_out_window_t4

0xc3fc,	// (0x00068a91) popup_call2_audio_out_window_t5_ParamLimits

0xc3fc,	// (0x00068a91) popup_call2_audio_out_window_t5

0x0005,

0x0178,	// (0x0005c80d) popup_call2_audio_out_window_t_ParamLimits

0x0178,	// (0x0005c80d) popup_call2_audio_out_window_t

0xc460,	// (0x00068af5) bg_popup_call2_in_pane_ParamLimits

0xc460,	// (0x00068af5) bg_popup_call2_in_pane

0xc4bc,	// (0x00068b51) popup_call2_audio_in_window_g1_ParamLimits

0xc4bc,	// (0x00068b51) popup_call2_audio_in_window_g1

0xc4f4,	// (0x00068b89) popup_call2_audio_in_window_g2_ParamLimits

0xc4f4,	// (0x00068b89) popup_call2_audio_in_window_g2

0xc52c,	// (0x00068bc1) popup_call2_audio_in_window_g3_ParamLimits

0xc52c,	// (0x00068bc1) popup_call2_audio_in_window_g3

0x0003,

0x0185,	// (0x0005c81a) popup_call2_audio_in_window_g_ParamLimits

0x0185,	// (0x0005c81a) popup_call2_audio_in_window_g

0xc584,	// (0x00068c19) popup_call2_audio_in_window_t1_ParamLimits

0xc584,	// (0x00068c19) popup_call2_audio_in_window_t1

0xc604,	// (0x00068c99) popup_call2_audio_in_window_t2_ParamLimits

0xc604,	// (0x00068c99) popup_call2_audio_in_window_t2

0xc684,	// (0x00068d19) popup_call2_audio_in_window_t3_ParamLimits

0xc684,	// (0x00068d19) popup_call2_audio_in_window_t3

0xc69e,	// (0x00068d33) popup_call2_audio_in_window_t4_ParamLimits

0xc69e,	// (0x00068d33) popup_call2_audio_in_window_t4

0xc6b0,	// (0x00068d45) popup_call2_audio_in_window_t5_ParamLimits

0xc6b0,	// (0x00068d45) popup_call2_audio_in_window_t5

0xc6c2,	// (0x00068d57) popup_call2_audio_in_window_t6_ParamLimits

0xc6c2,	// (0x00068d57) popup_call2_audio_in_window_t6

0x0005,

0x018e,	// (0x0005c823) popup_call2_audio_in_window_t_ParamLimits

0x018e,	// (0x0005c823) popup_call2_audio_in_window_t

0xa7c0,	// (0x00066e55) bg_popup_call2_in_pane_g1

0xc816,	// (0x00068eab) popup_cale_lunar_info_window_t4

0x0003,

0x0209,	// (0x0005c89e) popup_cale_lunar_info_window_t

0xa7c8,	// (0x00066e5d) bg_popup_call2_rect_pane_ParamLimits

0xa7c8,	// (0x00066e5d) bg_popup_call2_rect_pane

0xa469,	// (0x00066afe) call2_cli_visual_graphic_pane

0xa469,	// (0x00066afe) call2_cli_visual_text_pane

0x43c5,	// (0x00060a5a) smil_status_volume_pane_g3

0x0002,

0xa8ee,	// (0x00066f83) call2_cli_visual_graphic_pane_g1

0xa8ee,	// (0x00066f83) call2_cli_visual_graphic_pane_g2

0xa8ee,	// (0x00066f83) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4bc,	// (0x0006bb51) call2_cli_visual_graphic_pane_g

0xc6d4,	// (0x00068d69) bg_popup_call2_rect_pane_g1

0xa97a,	// (0x0006700f) bg_popup_call2_rect_pane_g2

0xc6dc,	// (0x00068d71) bg_popup_call2_rect_pane_g3

0xc6e4,	// (0x00068d79) bg_popup_call2_rect_pane_g4

0xc6ec,	// (0x00068d81) bg_popup_call2_rect_pane_g5

0xc6f4,	// (0x00068d89) bg_popup_call2_rect_pane_g6

0xc6fc,	// (0x00068d91) bg_popup_call2_rect_pane_g7

0xc704,	// (0x00068d99) bg_popup_call2_rect_pane_g8

0xc70c,	// (0x00068da1) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c3,	// (0x0006bb58) bg_popup_call2_rect_pane_g

0xc714,	// (0x00068da9) bg_popup_call2_bubble_pane_g1

0xc71c,	// (0x00068db1) bg_popup_call2_bubble_pane_g2

0xc724,	// (0x00068db9) bg_popup_call2_bubble_pane_g3

0xc72c,	// (0x00068dc1) bg_popup_call2_bubble_pane_g4

0xc734,	// (0x00068dc9) bg_popup_call2_bubble_pane_g5

0xc73c,	// (0x00068dd1) bg_popup_call2_bubble_pane_g6

0xc744,	// (0x00068dd9) bg_popup_call2_bubble_pane_g7

0xc74c,	// (0x00068de1) bg_popup_call2_bubble_pane_g8

0xc754,	// (0x00068de9) bg_popup_call2_bubble_pane_g9

0x0008,

0x01b5,	// (0x0005c84a) bg_popup_call2_bubble_pane_g

0x153e,	// (0x0005dbd3) aid_cale_week_size_cell_pane

0x1ac1,	// (0x0005e156) aid_cams_cif_uncrop_pane_ParamLimits

0x1ac1,	// (0x0005e156) aid_cams_cif_uncrop_pane

0x1c1c,	// (0x0005e2b1) aid_cams_size_cell_ParamLimits

0x1c1c,	// (0x0005e2b1) aid_cams_size_cell

0x1c28,	// (0x0005e2bd) grid_cams_pane_ParamLimits

0x1c36,	// (0x0005e2cb) linegrid_cams_pane_ParamLimits

0x1e21,	// (0x0005e4b6) call_video_pane_t1

0x1e42,	// (0x0005e4d7) call_video_pane_t2

0x0001,

0xf253,	// (0x0006b8e8) call_video_pane_t

0x2390,	// (0x0005ea25) aid_cale_month_size_cell_pane_ParamLimits

0x2390,	// (0x0005ea25) aid_cale_month_size_cell_pane

0xf506,	// (0x0006bb9b) smil_status_volume_pane_g

0x43d2,	// (0x00060a67) volume_smil_pane_ParamLimits

0x0c7c,	// (0x0005d311) aid_popup2_width_pane

0x142a,	// (0x0005dabf) cell_qdial_pane_g4_ParamLimits

0x142a,	// (0x0005dabf) cell_qdial_pane_g4

0x33d9,	// (0x0005fa6e) aid_blid_cardinal_pane_ParamLimits

0x33e9,	// (0x0005fa7e) aid_blid_destination_pane_ParamLimits

0x33e9,	// (0x0005fa7e) aid_blid_destination_pane

0xa7c8,	// (0x00066e5d) bg_popup_call_poc_act_pane_ParamLimits

0xa7c8,	// (0x00066e5d) bg_popup_call_poc_act_pane

0xa7c8,	// (0x00066e5d) bg_popup_call_poc_inact_pane_ParamLimits

0xa7c8,	// (0x00066e5d) bg_popup_call_poc_inact_pane

0xc75c,	// (0x00068df1) bg_popup_call_poc_act_pane_g1

0xc764,	// (0x00068df9) bg_popup_call_poc_act_pane_g2

0xc76c,	// (0x00068e01) bg_popup_call_poc_act_pane_g3

0xc72c,	// (0x00068dc1) bg_popup_call_poc_act_pane_g4

0xc734,	// (0x00068dc9) bg_popup_call_poc_act_pane_g5

0xc774,	// (0x00068e09) bg_popup_call_poc_act_pane_g6

0xc744,	// (0x00068dd9) bg_popup_call_poc_act_pane_g7

0xc77c,	// (0x00068e11) bg_popup_call_poc_act_pane_g8

0xa469,	// (0x00066afe) main_usb_pane

0x41c2,	// (0x00060857) popup_cale_lunar_info_window

0x215f,	// (0x0005e7f4) im_reading_pane_t1_ParamLimits

0xab86,	// (0x0006721b) list_im_pane_ParamLimits

0xab97,	// (0x0006722c) scroll_pane_cp07_ParamLimits

0xa469,	// (0x00066afe) grid_highlight_pane_cp012

0xa7c8,	// (0x00066e5d) mup_scale_pane_ParamLimits

0xb10e,	// (0x000677a3) main_usb_pane_g1_ParamLimits

0xb10e,	// (0x000677a3) main_usb_pane_g1

0x3f23,	// (0x000605b8) main_usb_pane_g2_ParamLimits

0x3f23,	// (0x000605b8) main_usb_pane_g2

0x0001,

0xf4d6,	// (0x0006bb6b) main_usb_pane_g_ParamLimits

0xf4d6,	// (0x0006bb6b) main_usb_pane_g

0x3f2f,	// (0x000605c4) main_usb_pane_t1_ParamLimits

0x3f2f,	// (0x000605c4) main_usb_pane_t1

0x3f41,	// (0x000605d6) main_usb_pane_t2_ParamLimits

0x3f41,	// (0x000605d6) main_usb_pane_t2

0x3f53,	// (0x000605e8) main_usb_pane_t3_ParamLimits

0x3f53,	// (0x000605e8) main_usb_pane_t3

0x3f65,	// (0x000605fa) main_usb_pane_t4_ParamLimits

0x3f65,	// (0x000605fa) main_usb_pane_t4

0x3f77,	// (0x0006060c) main_usb_pane_t5_ParamLimits

0x3f77,	// (0x0006060c) main_usb_pane_t5

0x3f89,	// (0x0006061e) main_usb_pane_t6_ParamLimits

0x3f89,	// (0x0006061e) main_usb_pane_t6

0x0005,

0xf4db,	// (0x0006bb70) main_usb_pane_t_ParamLimits

0x337f,	// (0x0005fa14) aid_text_placing

0x338b,	// (0x0005fa20) main_location2_pane_t1_ParamLimits

0x339f,	// (0x0005fa34) main_location2_pane_t2_ParamLimits

0x33b3,	// (0x0005fa48) main_location2_pane_t3_ParamLimits

0x33c7,	// (0x0005fa5c) main_location2_pane_t4_ParamLimits

0x33c7,	// (0x0005fa5c) main_location2_pane_t4

0xf3b4,	// (0x0006ba49) main_location2_pane_t_ParamLimits

0xa804,	// (0x00066e99) find_pinb_pane_g2_ParamLimits

0xa804,	// (0x00066e99) find_pinb_pane_g2

0x0001,

0xf104,	// (0x0006b799) find_pinb_pane_g_ParamLimits

0xf104,	// (0x0006b799) find_pinb_pane_g

0xa810,	// (0x00066ea5) find_pinb_pane_t1_ParamLimits

0xa822,	// (0x00066eb7) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x0006b79e) find_pinb_pane_t_ParamLimits

0xa469,	// (0x00066afe) main_call3_pane

0x2953,	// (0x0005efe8) cale_month_day_heading_pane_t1_ParamLimits

0x29d9,	// (0x0005f06e) cale_month_day_heading_pane_t2_ParamLimits

0x2a52,	// (0x0005f0e7) cale_month_day_heading_pane_t3_ParamLimits

0x2acb,	// (0x0005f160) cale_month_day_heading_pane_t4_ParamLimits

0x2b44,	// (0x0005f1d9) cale_month_day_heading_pane_t5_ParamLimits

0x2bbd,	// (0x0005f252) cale_month_day_heading_pane_t6_ParamLimits

0x2c36,	// (0x0005f2cb) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x0006b920) cale_month_day_heading_pane_t_ParamLimits

0xade1,	// (0x00067476) smil_status_volume_pane

0x3ae2,	// (0x00060177) postcard_address_pane_ParamLimits

0x3ae2,	// (0x00060177) postcard_address_pane

0x3aee,	// (0x00060183) postcard_message_pane_ParamLimits

0x3aee,	// (0x00060183) postcard_message_pane

0x3ee8,	// (0x0006057d) call2_cli_visual_pane_t1_ParamLimits

0x3ee8,	// (0x0006057d) call2_cli_visual_pane_t1

0x4529,	// (0x00060bbe) postcard_message_pane_t1_ParamLimits

0x4529,	// (0x00060bbe) postcard_message_pane_t1

0x4512,	// (0x00060ba7) postcard_address_pane_t1_ParamLimits

0x4512,	// (0x00060ba7) postcard_address_pane_t1

0x4503,	// (0x00060b98) popup_call3_audio_in_window_ParamLimits

0x4503,	// (0x00060b98) popup_call3_audio_in_window

0x43e7,	// (0x00060a7c) bg_popup_call3_in_pane_ParamLimits

0x43e7,	// (0x00060a7c) bg_popup_call3_in_pane

0x4449,	// (0x00060ade) popup_call3_audio_in_window_g1_ParamLimits

0x4449,	// (0x00060ade) popup_call3_audio_in_window_g1

0x4461,	// (0x00060af6) popup_call3_audio_in_window_g2_ParamLimits

0x4461,	// (0x00060af6) popup_call3_audio_in_window_g2

0x4479,	// (0x00060b0e) popup_call3_audio_in_window_g3_ParamLimits

0x4479,	// (0x00060b0e) popup_call3_audio_in_window_g3

0x0003,

0xf50d,	// (0x0006bba2) popup_call3_audio_in_window_g_ParamLimits

0xf50d,	// (0x0006bba2) popup_call3_audio_in_window_g

0x44a1,	// (0x00060b36) popup_call3_audio_in_window_t1_ParamLimits

0x44a1,	// (0x00060b36) popup_call3_audio_in_window_t1

0x44c9,	// (0x00060b5e) popup_call3_audio_in_window_t2_ParamLimits

0x44c9,	// (0x00060b5e) popup_call3_audio_in_window_t2

0x44f1,	// (0x00060b86) popup_call3_audio_in_window_t3_ParamLimits

0x44f1,	// (0x00060b86) popup_call3_audio_in_window_t3

0x0002,

0xf516,	// (0x0006bbab) popup_call3_audio_in_window_t_ParamLimits

0xf516,	// (0x0006bbab) popup_call3_audio_in_window_t

0xaa5e,	// (0x000670f3) bg_popup_call3_rect_pane

0xc6d4,	// (0x00068d69) bg_popup_call3_rect_pane_g1

0xa97a,	// (0x0006700f) bg_popup_call3_rect_pane_g2

0xc6dc,	// (0x00068d71) bg_popup_call3_rect_pane_g3

0xc6e4,	// (0x00068d79) bg_popup_call3_rect_pane_g4

0xc6ec,	// (0x00068d81) bg_popup_call3_rect_pane_g5

0xc6f4,	// (0x00068d89) bg_popup_call3_rect_pane_g6

0xc6fc,	// (0x00068d91) bg_popup_call3_rect_pane_g7

0x36ef,	// (0x0005fd84) mup_visualizer_osc_pane

0xb585,	// (0x00067c1a) mup_visualizer_spec_pane

0x4407,	// (0x00060a9c) call3_video_qcif_pane_ParamLimits

0x4407,	// (0x00060a9c) call3_video_qcif_pane

0x4419,	// (0x00060aae) call3_video_qcif_uncrop_pane_ParamLimits

0x4419,	// (0x00060aae) call3_video_qcif_uncrop_pane

0x4427,	// (0x00060abc) call3_video_subqcif_pane_ParamLimits

0x4427,	// (0x00060abc) call3_video_subqcif_pane

0x4439,	// (0x00060ace) call3_video_subqcif_uncrop_pane_ParamLimits

0x4439,	// (0x00060ace) call3_video_subqcif_uncrop_pane

0x4491,	// (0x00060b26) popup_call3_audio_in_window_g4_ParamLimits

0x4491,	// (0x00060b26) popup_call3_audio_in_window_g4

0x43b2,	// (0x00060a47) mup_spec_half_pane

0x43bb,	// (0x00060a50) mup_spec_half_pane_cp

0xc979,	// (0x0006900e) mup_osc_middle_pane

0xc982,	// (0x00069017) mup_visualizer_osc_pane_g1

0x4393,	// (0x00060a28) mup_spec_bar_pane_ParamLimits

0x4393,	// (0x00060a28) mup_spec_bar_pane

0xc966,	// (0x00068ffb) mup_spec_bar_pane_g1

0xc970,	// (0x00069005) mup_spec_bar_pane_g2

0x0001,

0x024d,	// (0x0005c8e2) mup_spec_bar_pane_g

0x153e,	// (0x0005dbd3) aid_cale_week_size_cell_pane_ParamLimits

0x1553,	// (0x0005dbe8) bg_cale_heading_pane_ParamLimits

0xa9b7,	// (0x0006704c) bg_cale_pane_cp01_ParamLimits

0x1575,	// (0x0005dc0a) cale_week_corner_pane_ParamLimits

0x158f,	// (0x0005dc24) cale_week_day_heading_pane_ParamLimits

0x15b1,	// (0x0005dc46) cale_week_scroll_pane_g1_ParamLimits

0x15ce,	// (0x0005dc63) cale_week_scroll_pane_g2_ParamLimits

0x15e1,	// (0x0005dc76) cale_week_scroll_pane_g3_ParamLimits

0x15f4,	// (0x0005dc89) cale_week_scroll_pane_g4_ParamLimits

0x1607,	// (0x0005dc9c) cale_week_scroll_pane_g5_ParamLimits

0x161a,	// (0x0005dcaf) cale_week_scroll_pane_g6_ParamLimits

0x162d,	// (0x0005dcc2) cale_week_scroll_pane_g7_ParamLimits

0x1642,	// (0x0005dcd7) cale_week_scroll_pane_g8_ParamLimits

0x1657,	// (0x0005dcec) cale_week_scroll_pane_g9_ParamLimits

0x166a,	// (0x0005dcff) cale_week_scroll_pane_g10_ParamLimits

0x167d,	// (0x0005dd12) cale_week_scroll_pane_g11_ParamLimits

0x1690,	// (0x0005dd25) cale_week_scroll_pane_g12_ParamLimits

0x16a7,	// (0x0005dd3c) cale_week_scroll_pane_g13_ParamLimits

0x16c2,	// (0x0005dd57) cale_week_scroll_pane_g14_ParamLimits

0x16dd,	// (0x0005dd72) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x0006b82a) cale_week_scroll_pane_g_ParamLimits

0x170d,	// (0x0005dda2) cale_week_time_pane_ParamLimits

0x1722,	// (0x0005ddb7) grid_cale_week_pane_ParamLimits

0xa9d4,	// (0x00067069) listscroll_cale_week_pane_t1

0xa9e6,	// (0x0006707b) scroll_pane_cp08_ParamLimits

0x2404,	// (0x0005ea99) cale_month_corner_pane_ParamLimits

0xadb7,	// (0x0006744c) cale_month_pane_t1

0x28d2,	// (0x0005ef67) cale_month_week_pane_ParamLimits

0xb10e,	// (0x000677a3) popup_call_status_window_g1_ParamLimits

0x3188,	// (0x0005f81d) popup_call_status_window_g2_ParamLimits

0x3194,	// (0x0005f829) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x0006b9d0) popup_call_status_window_g_ParamLimits

0xb175,	// (0x0006780a) aid_call2_pane

0x399a,	// (0x0006002f) msg_header_pane_g1

0x3ae2,	// (0x00060177) postcard_address2_pane_ParamLimits

0x3ae2,	// (0x00060177) postcard_address2_pane

0x3aee,	// (0x00060183) postcard_message2_pane_ParamLimits

0x3aee,	// (0x00060183) postcard_message2_pane

0x432a,	// (0x000609bf) message2_row_pane_ParamLimits

0x432a,	// (0x000609bf) message2_row_pane

0x4345,	// (0x000609da) address2_row_pane_ParamLimits

0x4345,	// (0x000609da) address2_row_pane

0xc934,	// (0x00068fc9) postcard_message2_row_pane_g1

0xc93c,	// (0x00068fd1) postcard_message2_row_pane_t1

0xc934,	// (0x00068fc9) address2_row_pane_g1

0xc93c,	// (0x00068fd1) address2_row_pane_t1

0x19a7,	// (0x0005e03c) aid_size_cell_vorec

0xa469,	// (0x00066afe) main_rss_pane

0x4358,	// (0x000609ed) rss_list_single_pane_ParamLimits

0x4358,	// (0x000609ed) rss_list_single_pane

0xc94a,	// (0x00068fdf) rss_list_single_pane_t1

0xc958,	// (0x00068fed) rss_list_single_pane_t2

0x0001,

0x0248,	// (0x0005c8dd) rss_list_single_pane_t

0xa469,	// (0x00066afe) main_camera2_pane

0xa469,	// (0x00066afe) main_video2_pane

0x458d,	// (0x00060c22) cams_zoom_pane_cp2_ParamLimits

0x458d,	// (0x00060c22) cams_zoom_pane_cp2

0x4599,	// (0x00060c2e) image2_vga_pane_ParamLimits

0x4599,	// (0x00060c2e) image2_vga_pane

0x45a8,	// (0x00060c3d) main_camera2_pane_g1_ParamLimits

0x45a8,	// (0x00060c3d) main_camera2_pane_g1

0x45b4,	// (0x00060c49) main_camera2_pane_g2_ParamLimits

0x45b4,	// (0x00060c49) main_camera2_pane_g2

0x45c0,	// (0x00060c55) main_camera2_pane_g3_ParamLimits

0x45c0,	// (0x00060c55) main_camera2_pane_g3

0x45cc,	// (0x00060c61) main_camera2_pane_g4_ParamLimits

0x45cc,	// (0x00060c61) main_camera2_pane_g4

0x45d8,	// (0x00060c6d) main_camera2_pane_g5_ParamLimits

0x45d8,	// (0x00060c6d) main_camera2_pane_g5

0x45e4,	// (0x00060c79) main_camera2_pane_g6_ParamLimits

0x45e4,	// (0x00060c79) main_camera2_pane_g6

0x45f0,	// (0x00060c85) main_camera2_pane_g7_ParamLimits

0x45f0,	// (0x00060c85) main_camera2_pane_g7

0x45fc,	// (0x00060c91) main_camera2_pane_g8_ParamLimits

0x45fc,	// (0x00060c91) main_camera2_pane_g8

0x0008,

0xf51d,	// (0x0006bbb2) main_camera2_pane_g_ParamLimits

0xf51d,	// (0x0006bbb2) main_camera2_pane_g

0x4614,	// (0x00060ca9) main_camera2_pane_t1_ParamLimits

0x4614,	// (0x00060ca9) main_camera2_pane_t1

0x4626,	// (0x00060cbb) main_camera2_pane_t2_ParamLimits

0x4626,	// (0x00060cbb) main_camera2_pane_t2

0x4638,	// (0x00060ccd) main_camera2_pane_t3_ParamLimits

0x4638,	// (0x00060ccd) main_camera2_pane_t3

0x464a,	// (0x00060cdf) main_camera2_pane_t4_ParamLimits

0x464a,	// (0x00060cdf) main_camera2_pane_t4

0x0006,

0xf530,	// (0x0006bbc5) main_camera2_pane_t_ParamLimits

0xf530,	// (0x0006bbc5) main_camera2_pane_t

0x46ac,	// (0x00060d41) cams_zoom_pane_cp4_ParamLimits

0x46ac,	// (0x00060d41) cams_zoom_pane_cp4

0x46bc,	// (0x00060d51) image2_cif_pane_ParamLimits

0x46bc,	// (0x00060d51) image2_cif_pane

0x46d1,	// (0x00060d66) image2_subqcif_pane_ParamLimits

0x46d1,	// (0x00060d66) image2_subqcif_pane

0x46e0,	// (0x00060d75) main_video2_pane_g1_ParamLimits

0x46e0,	// (0x00060d75) main_video2_pane_g1

0x46f2,	// (0x00060d87) main_video2_pane_g2_ParamLimits

0x46f2,	// (0x00060d87) main_video2_pane_g2

0x4702,	// (0x00060d97) main_video2_pane_g3_ParamLimits

0x4702,	// (0x00060d97) main_video2_pane_g3

0x4712,	// (0x00060da7) main_video2_pane_g4_ParamLimits

0x4712,	// (0x00060da7) main_video2_pane_g4

0x4722,	// (0x00060db7) main_video2_pane_g5_ParamLimits

0x4722,	// (0x00060db7) main_video2_pane_g5

0x4732,	// (0x00060dc7) main_video2_pane_g6_ParamLimits

0x4732,	// (0x00060dc7) main_video2_pane_g6

0x0005,

0xf53f,	// (0x0006bbd4) main_video2_pane_g_ParamLimits

0xf53f,	// (0x0006bbd4) main_video2_pane_g

0x4744,	// (0x00060dd9) main_video2_pane_t1_ParamLimits

0x4744,	// (0x00060dd9) main_video2_pane_t1

0x475e,	// (0x00060df3) main_video2_pane_t2_ParamLimits

0x475e,	// (0x00060df3) main_video2_pane_t2

0x4784,	// (0x00060e19) main_video2_pane_t3_ParamLimits

0x4784,	// (0x00060e19) main_video2_pane_t3

0x0002,

0xf54c,	// (0x0006bbe1) main_video2_pane_t_ParamLimits

0xf54c,	// (0x0006bbe1) main_video2_pane_t

0x4040,	// (0x000606d5) call_muted_g2

0x0001,

0xf501,	// (0x0006bb96) call_muted_g

0xa469,	// (0x00066afe) main_mup2_pane

0xc9b9,	// (0x0006904e) main_mup2_pane_g1_ParamLimits

0xc9b9,	// (0x0006904e) main_mup2_pane_g1

0x47aa,	// (0x00060e3f) main_mup2_pane_g2_ParamLimits

0x47aa,	// (0x00060e3f) main_mup2_pane_g2

0x4a2c,	// (0x000610c1) main_mup_pane_g13_cp1

0x4a34,	// (0x000610c9) mup_volume_pane_cp1

0x47ca,	// (0x00060e5f) main_mup2_pane_g4_ParamLimits

0x47ca,	// (0x00060e5f) main_mup2_pane_g4

0x47df,	// (0x00060e74) main_mup2_pane_g5_ParamLimits

0x47df,	// (0x00060e74) main_mup2_pane_g5

0x47f4,	// (0x00060e89) main_mup2_pane_g6_ParamLimits

0x47f4,	// (0x00060e89) main_mup2_pane_g6

0x4809,	// (0x00060e9e) main_mup2_pane_g7_ParamLimits

0x4809,	// (0x00060e9e) main_mup2_pane_g7

0x0006,

0xf553,	// (0x0006bbe8) main_mup2_pane_g_ParamLimits

0xf553,	// (0x0006bbe8) main_mup2_pane_g

0x4825,	// (0x00060eba) main_mup2_pane_t1_ParamLimits

0x4825,	// (0x00060eba) main_mup2_pane_t1

0x483c,	// (0x00060ed1) main_mup2_pane_t2_ParamLimits

0x483c,	// (0x00060ed1) main_mup2_pane_t2

0x4853,	// (0x00060ee8) main_mup2_pane_t3_ParamLimits

0x4853,	// (0x00060ee8) main_mup2_pane_t3

0x486a,	// (0x00060eff) main_mup2_pane_t4_ParamLimits

0x486a,	// (0x00060eff) main_mup2_pane_t4

0x4884,	// (0x00060f19) main_mup2_pane_t5_ParamLimits

0x4884,	// (0x00060f19) main_mup2_pane_t5

0x489e,	// (0x00060f33) main_mup2_pane_t6_ParamLimits

0x489e,	// (0x00060f33) main_mup2_pane_t6

0x0005,

0xf562,	// (0x0006bbf7) main_mup2_pane_t_ParamLimits

0xf562,	// (0x0006bbf7) main_mup2_pane_t

0x48d6,	// (0x00060f6b) mup2_visualizer_pane_ParamLimits

0x48d6,	// (0x00060f6b) mup2_visualizer_pane

0x490c,	// (0x00060fa1) mup_progress_pane_cp_ParamLimits

0x490c,	// (0x00060fa1) mup_progress_pane_cp

0x4a17,	// (0x000610ac) mup_volume_pane_cp_ParamLimits

0x4a17,	// (0x000610ac) mup_volume_pane_cp

0x4923,	// (0x00060fb8) mup2_visualizer_pane_g1_ParamLimits

0x4923,	// (0x00060fb8) mup2_visualizer_pane_g1

0xc9c5,	// (0x0006905a) mup2_visualizer_pane_g2_ParamLimits

0xc9c5,	// (0x0006905a) mup2_visualizer_pane_g2

0x4938,	// (0x00060fcd) mup2_visualizer_pane_g3_ParamLimits

0x4938,	// (0x00060fcd) mup2_visualizer_pane_g3

0x0002,

0xf56f,	// (0x0006bc04) mup2_visualizer_pane_g_ParamLimits

0xf56f,	// (0x0006bc04) mup2_visualizer_pane_g

0xb7ac,	// (0x00067e41) aid_size_cell_fmradio

0x4156,	// (0x000607eb) aid_height_parent_landcape

0xac15,	// (0x000672aa) wml_content_pane_cp

0xac1d,	// (0x000672b2) wml_tabs_pane

0xac26,	// (0x000672bb) popup_wml_miniature_window

0xac2e,	// (0x000672c3) scroll_pane_cp021

0xac42,	// (0x000672d7) wml_content_pane_comp8

0xa469,	// (0x00066afe) bg_popup_sub_pane_cp05

0xc9e3,	// (0x00069078) popup_wml_miniature_window_g1

0xc9eb,	// (0x00069080) wml_miniature_view_pane

0x4946,	// (0x00060fdb) aid_size_wml_view

0x494e,	// (0x00060fe3) wml_miniature_view_pane_g1

0x4957,	// (0x00060fec) wml_miniature_view_pane_g2

0x4960,	// (0x00060ff5) wml_miniature_view_pane_g3

0x4968,	// (0x00060ffd) wml_miniature_view_pane_g4

0x4970,	// (0x00061005) wml_miniature_view_pane_g5

0x4978,	// (0x0006100d) wml_miniature_view_pane_g6

0x4980,	// (0x00061015) wml_miniature_view_pane_g7

0x4988,	// (0x0006101d) wml_miniature_view_pane_g8

0x0007,

0xf576,	// (0x0006bc0b) wml_miniature_view_pane_g

0xc9b9,	// (0x0006904e) background_graphic_ParamLimits

0xc9b9,	// (0x0006904e) background_graphic

0xc9f3,	// (0x00069088) wml_tabs_2_pane

0xc9fc,	// (0x00069091) wml_tabs_3_pane_ParamLimits

0xc9fc,	// (0x00069091) wml_tabs_3_pane

0xca0e,	// (0x000690a3) wml_tabs_4_pane_ParamLimits

0xca0e,	// (0x000690a3) wml_tabs_4_pane

0xca24,	// (0x000690b9) wml_tabs_5_pane_ParamLimits

0xca24,	// (0x000690b9) wml_tabs_5_pane

0xca3e,	// (0x000690d3) wml_tabs_pane_g2_ParamLimits

0xca3e,	// (0x000690d3) wml_tabs_pane_g2

0xca52,	// (0x000690e7) wml_tabs_pane_g3_ParamLimits

0xca52,	// (0x000690e7) wml_tabs_pane_g3

0x4990,	// (0x00061025) wml_tabs_2_active_pane_ParamLimits

0x4990,	// (0x00061025) wml_tabs_2_active_pane

0x49a0,	// (0x00061035) wml_tabs_2_passive_pane_ParamLimits

0x49a0,	// (0x00061035) wml_tabs_2_passive_pane

0x49b0,	// (0x00061045) wml_tabs_3_active_pane_cp_ParamLimits

0x49b0,	// (0x00061045) wml_tabs_3_active_pane_cp

0x49c1,	// (0x00061056) wml_tabs_3_passive_pane_ParamLimits

0x49c1,	// (0x00061056) wml_tabs_3_passive_pane

0x49d2,	// (0x00061067) wml_tabs_3_passive_pane_cp_ParamLimits

0x49d2,	// (0x00061067) wml_tabs_3_passive_pane_cp

0x49e3,	// (0x00061078) tabs_4_active_pane

0x49eb,	// (0x00061080) tabs_4_passive_pane

0x49f3,	// (0x00061088) tabs_4_passive_pane_cp

0x49fb,	// (0x00061090) tabs_4_passive_pane_cp2

0x3f1b,	// (0x000605b0) aid_height_text

0x36b8,	// (0x0005fd4d) mup_volume_cont_pane_ParamLimits

0x36b8,	// (0x0005fd4d) mup_volume_cont_pane

0x1066,	// (0x0005d6fb) aid_size_cell_pinb

0x1070,	// (0x0005d705) aid_size_list_pinb

0x48f5,	// (0x00060f8a) mup2_volume_cont_pane_ParamLimits

0x48f5,	// (0x00060f8a) mup2_volume_cont_pane

0x4a03,	// (0x00061098) mup2_volume_cont_pane_g1_ParamLimits

0x4a03,	// (0x00061098) mup2_volume_cont_pane_g1

0x0c88,	// (0x0005d31d) aid_size_cell_touch_ParamLimits

0x0c88,	// (0x0005d31d) aid_size_cell_touch

0x0f49,	// (0x0005d5de) touch_pane_ParamLimits

0x0f49,	// (0x0005d5de) touch_pane

0x0f3f,	// (0x0005d5d4) main_rss2_pane

0xca6f,	// (0x00069104) listscroll_rss2_pane

0xca78,	// (0x0006910d) rss2_navigation_pane

0xca80,	// (0x00069115) list_rss2_pane

0xb29a,	// (0x0006792f) scroll_pane_cp22

0xca88,	// (0x0006911d) rss2_navigation_pane_g1

0xca91,	// (0x00069126) rss2_navigation_pane_g2

0xca99,	// (0x0006912e) rss2_navigation_pane_g3

0x0002,

0x02d3,	// (0x0005c968) rss2_navigation_pane_g

0xcaa1,	// (0x00069136) rss2_navigation_pane_t1

0x4a3c,	// (0x000610d1) rss2_list_single_pane_ParamLimits

0x4a3c,	// (0x000610d1) rss2_list_single_pane

0xcaaf,	// (0x00069144) rss2_list_single_pane_t2

0xcabd,	// (0x00069152) rss2_list_single_pane_t3_ParamLimits

0xcabd,	// (0x00069152) rss2_list_single_pane_t3

0xcada,	// (0x0006916f) rss2_list_single_pane_t4

0x2f02,	// (0x0005f597) smil_status_pane_g1

0x416d,	// (0x00060802) main_image2_pane_ParamLimits

0x416d,	// (0x00060802) main_image2_pane

0x4608,	// (0x00060c9d) main_camera2_pane_g9_ParamLimits

0x4608,	// (0x00060c9d) main_camera2_pane_g9

0x465c,	// (0x00060cf1) main_camera2_pane_t5_ParamLimits

0x465c,	// (0x00060cf1) main_camera2_pane_t5

0x466e,	// (0x00060d03) main_camera2_pane_t6_ParamLimits

0x466e,	// (0x00060d03) main_camera2_pane_t6

0x4a70,	// (0x00061105) main_image2_pane_g1_ParamLimits

0x4a70,	// (0x00061105) main_image2_pane_g1

0x3cb5,	// (0x0006034a) smil2_video_pane_ParamLimits

0x3cb5,	// (0x0006034a) smil2_video_pane

0x0b8c,	// (0x0005d221) aid_zoom_text_primary_cp

0x0eda,	// (0x0005d56f) popup_preview_fixed_window

0xab7e,	// (0x00067213) im_reading_pane_g1

0x4552,	// (0x00060be7) cams2_bc_adjust_pane_cp_ParamLimits

0x4552,	// (0x00060be7) cams2_bc_adjust_pane_cp

0x469e,	// (0x00060d33) cams2_bc_adjust_pane_ParamLimits

0x469e,	// (0x00060d33) cams2_bc_adjust_pane

0xd993,	// (0x0006a028) cams2_bc_adjust_pane_g1

0x4a7c,	// (0x00061111) cams2_slider_pane

0x4a85,	// (0x0006111a) cams2_slider_pane_g1

0x4a8e,	// (0x00061123) cams2_slider_pane_g2

0x0006,

0xf587,	// (0x0006bc1c) cams2_slider_pane_g

0x1170,	// (0x0005d805) calc_display_pane_ParamLimits

0x118e,	// (0x0005d823) calc_paper_pane_ParamLimits

0x11aa,	// (0x0005d83f) grid_calc_pane_ParamLimits

0x31f2,	// (0x0005f887) popup_clock_digital_window_t1_ParamLimits

0xb749,	// (0x00067dde) main_image_pane_t1

0x1156,	// (0x0005d7eb) aid_size_cell_calc_ParamLimits

0x1156,	// (0x0005d7eb) aid_size_cell_calc

0x419e,	// (0x00060833) popup_blid_sat_info2_window_ParamLimits

0x419e,	// (0x00060833) popup_blid_sat_info2_window

0xcaf0,	// (0x00069185) aid_size_cell_blid

0xcaf8,	// (0x0006918d) bg_popup_window_pane_cp07

0xcb1b,	// (0x000691b0) grid_popup_blid_pane

0xcb25,	// (0x000691ba) heading_pane_cp05_ParamLimits

0xcb25,	// (0x000691ba) heading_pane_cp05

0xcbef,	// (0x00069284) cell_popup_blid_pane_ParamLimits

0xcbef,	// (0x00069284) cell_popup_blid_pane

0xcc13,	// (0x000692a8) cell_popup_blid_pane_g1

0xcc1b,	// (0x000692b0) cell_popup_blid_pane_t1

0x48bb,	// (0x00060f50) mup2_indicator_pane_ParamLimits

0x48bb,	// (0x00060f50) mup2_indicator_pane

0xaa5e,	// (0x000670f3) mup2_visualizer_osc_pane

0xc9d1,	// (0x00069066) mup2_visualizer_spec_pane_ParamLimits

0xc9d1,	// (0x00069066) mup2_visualizer_spec_pane

0x4aa8,	// (0x0006113d) mup2_spec_half_pane

0x4ab1,	// (0x00061146) mup2_spec_half_pane_cp

0x4abb,	// (0x00061150) mup2_spec_bar_pane_ParamLimits

0x4abb,	// (0x00061150) mup2_spec_bar_pane

0xc966,	// (0x00068ffb) mup2_spec_bar_pane_g1

0xc970,	// (0x00069005) mup2_spec_bar_pane_g2

0x0001,

0x024d,	// (0x0005c8e2) mup2_spec_bar_pane_g

0x4ada,	// (0x0006116f) mup2_osc_middle_pane

0xc982,	// (0x00069017) mup2_visualizer_osc_pane_g1

0x9bc9,	// (0x0006625e) popup_number_entry_window_t1_ParamLimits

0x9bdc,	// (0x00066271) popup_number_entry_window_t2_ParamLimits

0x9bee,	// (0x00066283) popup_number_entry_window_t3_ParamLimits

0x0fa0,	// (0x0005d635) popup_number_entry_window_t5_ParamLimits

0x0fa0,	// (0x0005d635) popup_number_entry_window_t5

0xf0af,	// (0x0006b744) popup_number_entry_window_t_ParamLimits

0x9c00,	// (0x00066295) text_title_cp2_ParamLimits

0x39b6,	// (0x0006004b) aid_hotspot_pointer_text2_pane

0x3a44,	// (0x000600d9) main_viewer_pane_g9_ParamLimits

0x3a44,	// (0x000600d9) main_viewer_pane_g9

0xadb7,	// (0x0006744c) cale_month_pane_t1_ParamLimits

0xadf4,	// (0x00067489) bg_cale_pane_ParamLimits

0xae0c,	// (0x000674a1) list_cale_pane_ParamLimits

0xae1d,	// (0x000674b2) listscroll_cale_day_pane_t1

0xae2f,	// (0x000674c4) scroll_pane_cp09_ParamLimits

0x36f7,	// (0x0005fd8c) main_mup_eq_pane_t1_ParamLimits

0x36f7,	// (0x0005fd8c) main_mup_eq_pane_t1

0x3711,	// (0x0005fda6) main_mup_eq_pane_t2_ParamLimits

0x3711,	// (0x0005fda6) main_mup_eq_pane_t2

0x3729,	// (0x0005fdbe) main_mup_eq_pane_t3_ParamLimits

0x3729,	// (0x0005fdbe) main_mup_eq_pane_t3

0x3741,	// (0x0005fdd6) main_mup_eq_pane_t4_ParamLimits

0x3741,	// (0x0005fdd6) main_mup_eq_pane_t4

0x3759,	// (0x0005fdee) main_mup_eq_pane_t5_ParamLimits

0x3759,	// (0x0005fdee) main_mup_eq_pane_t5

0x3771,	// (0x0005fe06) main_mup_eq_pane_t6_ParamLimits

0x3771,	// (0x0005fe06) main_mup_eq_pane_t6

0x3785,	// (0x0005fe1a) main_mup_eq_pane_t7_ParamLimits

0x3785,	// (0x0005fe1a) main_mup_eq_pane_t7

0x3799,	// (0x0005fe2e) main_mup_eq_pane_t8_ParamLimits

0x3799,	// (0x0005fe2e) main_mup_eq_pane_t8

0x37af,	// (0x0005fe44) main_mup_eq_pane_t9_ParamLimits

0x37af,	// (0x0005fe44) main_mup_eq_pane_t9

0x37c7,	// (0x0005fe5c) main_mup_eq_pane_t10_ParamLimits

0x37c7,	// (0x0005fe5c) main_mup_eq_pane_t10

0x0009,

0xf419,	// (0x0006baae) main_mup_eq_pane_t_ParamLimits

0xf419,	// (0x0006baae) main_mup_eq_pane_t

0x3884,	// (0x0005ff19) mup_equalizer_pane_cp5_ParamLimits

0x389a,	// (0x0005ff2f) mup_equalizer_pane_cp6_ParamLimits

0x38b2,	// (0x0005ff47) mup_equalizer_pane_cp7_ParamLimits

0x0f3f,	// (0x0005d5d4) main_gallery_pane

0xc98b,	// (0x00069020) smil2_volume_pane

0xc993,	// (0x00069028) smil_status_volume_pane_g1_ParamLimits

0xc9a6,	// (0x0006903b) smil_status_volume_pane_g2_ParamLimits

0x43c5,	// (0x00060a5a) smil_status_volume_pane_g3_ParamLimits

0xf506,	// (0x0006bb9b) smil_status_volume_pane_g_ParamLimits

0xcaf8,	// (0x0006918d) bg_popup_window_pane_cp07_ParamLimits

0xcb06,	// (0x0006919b) blid_firmament_pane

0x4ae3,	// (0x00061178) aid_size_cell_gallery_ParamLimits

0x4ae3,	// (0x00061178) aid_size_cell_gallery

0x4af1,	// (0x00061186) grid_gallery_pane_ParamLimits

0x4af1,	// (0x00061186) grid_gallery_pane

0x4b01,	// (0x00061196) cell_gallery_pane_ParamLimits

0x4b01,	// (0x00061196) cell_gallery_pane

0xcc29,	// (0x000692be) bg_cell_gallery_focus_pane_ParamLimits

0xcc29,	// (0x000692be) bg_cell_gallery_focus_pane

0xcc3b,	// (0x000692d0) cell_gallery_pane_g1_ParamLimits

0xcc3b,	// (0x000692d0) cell_gallery_pane_g1

0x4b4f,	// (0x000611e4) cell_gallery_pane_g2_ParamLimits

0x4b4f,	// (0x000611e4) cell_gallery_pane_g2

0x4b5c,	// (0x000611f1) cell_gallery_pane_g3_ParamLimits

0x4b5c,	// (0x000611f1) cell_gallery_pane_g3

0xcc47,	// (0x000692dc) cell_gallery_pane_g4_ParamLimits

0xcc47,	// (0x000692dc) cell_gallery_pane_g4

0x0003,

0xf596,	// (0x0006bc2b) cell_gallery_pane_g_ParamLimits

0xf596,	// (0x0006bc2b) cell_gallery_pane_g

0xcc53,	// (0x000692e8) bg_cell_gallery_focus_pane_g1

0xcc5b,	// (0x000692f0) bg_cell_gallery_focus_pane_g2

0xcc63,	// (0x000692f8) bg_cell_gallery_focus_pane_g3

0xcc6b,	// (0x00069300) bg_cell_gallery_focus_pane_g4

0xcc73,	// (0x00069308) bg_cell_gallery_focus_pane_g5

0xcc7b,	// (0x00069310) bg_cell_gallery_focus_pane_g6

0xcc83,	// (0x00069318) bg_cell_gallery_focus_pane_g7

0xcc8b,	// (0x00069320) bg_cell_gallery_focus_pane_g8

0x0007,

0x0309,	// (0x0005c99e) bg_cell_gallery_focus_pane_g

0xcc93,	// (0x00069328) aid_firma_cardinal

0xcca7,	// (0x0006933c) blid_firmament_pane_t1

0xccbe,	// (0x00069353) blid_firmament_pane_t2

0xccd5,	// (0x0006936a) blid_firmament_pane_t3

0xccec,	// (0x00069381) blid_firmament_pane_t4

0x0003,

0x031a,	// (0x0005c9af) blid_firmament_pane_t

0xcd03,	// (0x00069398) blid_sat_info_pane

0xcd13,	// (0x000693a8) blid_sat_info_pane_g1

0xcd13,	// (0x000693a8) blid_sat_info_pane_g2

0x0001,

0x0323,	// (0x0005c9b8) blid_sat_info_pane_g

0xcd1d,	// (0x000693b2) blid_sat_info_pane_t1

0xcd2b,	// (0x000693c0) smil2_volume_content_pane

0xcd34,	// (0x000693c9) smil2_volume_pane_g1

0xaa95,	// (0x0006712a) smil2_volume_content_pane_g1

0xcd3c,	// (0x000693d1) smil2_volume_content_pane_g2

0xcd45,	// (0x000693da) smil2_volume_content_pane_g3

0xcd4e,	// (0x000693e3) smil2_volume_content_pane_g4

0xcd57,	// (0x000693ec) smil2_volume_content_pane_g5

0xcd60,	// (0x000693f5) smil2_volume_content_pane_g6

0xcd69,	// (0x000693fe) smil2_volume_content_pane_g7

0xcd72,	// (0x00069407) smil2_volume_content_pane_g8

0xcd7b,	// (0x00069410) smil2_volume_content_pane_g9

0xcd84,	// (0x00069419) smil2_volume_content_pane_g10

0x0009,

0xf59f,	// (0x0006bc34) smil2_volume_content_pane_g

0x17a3,	// (0x0005de38) cale_week_day_heading_pane_t1_ParamLimits

0x17be,	// (0x0005de53) cale_week_day_heading_pane_t2_ParamLimits

0x17d9,	// (0x0005de6e) cale_week_day_heading_pane_t3_ParamLimits

0x17f4,	// (0x0005de89) cale_week_day_heading_pane_t4_ParamLimits

0x180f,	// (0x0005dea4) cale_week_day_heading_pane_t5_ParamLimits

0x182a,	// (0x0005debf) cale_week_day_heading_pane_t6_ParamLimits

0x1845,	// (0x0005deda) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x0006b84b) cale_week_day_heading_pane_t_ParamLimits

0xaa03,	// (0x00067098) bg_cale_side_pane_ParamLimits

0x1860,	// (0x0005def5) cale_week_time_pane_t1_ParamLimits

0x187a,	// (0x0005df0f) cale_week_time_pane_t2_ParamLimits

0x1894,	// (0x0005df29) cale_week_time_pane_t3_ParamLimits

0x18ae,	// (0x0005df43) cale_week_time_pane_t4_ParamLimits

0x18c8,	// (0x0005df5d) cale_week_time_pane_t5_ParamLimits

0x18e2,	// (0x0005df77) cale_week_time_pane_t6_ParamLimits

0x1902,	// (0x0005df97) cale_week_time_pane_t7_ParamLimits

0x1924,	// (0x0005dfb9) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x0006b85a) cale_week_time_pane_t_ParamLimits

0x1948,	// (0x0005dfdd) cell_cale_week_pane_g2_ParamLimits

0xaa03,	// (0x00067098) bg_cale_side_pane_cp01_ParamLimits

0x2cc7,	// (0x0005f35c) cale_month_week_pane_t1_ParamLimits

0x2ce0,	// (0x0005f375) cale_month_week_pane_t2_ParamLimits

0x2cf9,	// (0x0005f38e) cale_month_week_pane_t3_ParamLimits

0x2d12,	// (0x0005f3a7) cale_month_week_pane_t4_ParamLimits

0x2d2d,	// (0x0005f3c2) cale_month_week_pane_t5_ParamLimits

0x2d4e,	// (0x0005f3e3) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x0006b92f) cale_month_week_pane_t_ParamLimits

0x2ebf,	// (0x0005f554) cell_cale_month_pane_g1_ParamLimits

0x0f3f,	// (0x0005d5d4) main_cale_event_viewer_pane

0x9b9f,	// (0x00066234) listscroll_cale_event_viewer_pane

0xcd8d,	// (0x00069422) list_cale_ev_pane

0xcd95,	// (0x0006942a) scroll_pane_cp023

0xcda1,	// (0x00069436) field_cale_ev_pane_ParamLimits

0xcda1,	// (0x00069436) field_cale_ev_pane

0xcdbf,	// (0x00069454) field_cale_ev_content_pane_ParamLimits

0xcdbf,	// (0x00069454) field_cale_ev_content_pane

0xcdcb,	// (0x00069460) field_cale_ev_pane_g1_ParamLimits

0xcdcb,	// (0x00069460) field_cale_ev_pane_g1

0xcdd7,	// (0x0006946c) field_cale_ev_pane_g2_ParamLimits

0xcdd7,	// (0x0006946c) field_cale_ev_pane_g2

0xcdef,	// (0x00069484) field_cale_ev_pane_g3_ParamLimits

0xcdef,	// (0x00069484) field_cale_ev_pane_g3

0x0002,

0x033d,	// (0x0005c9d2) field_cale_ev_pane_g_ParamLimits

0x033d,	// (0x0005c9d2) field_cale_ev_pane_g

0xce07,	// (0x0006949c) field_cale_ev_pane_t1_ParamLimits

0xce07,	// (0x0006949c) field_cale_ev_pane_t1

0xaa9e,	// (0x00067133) field_cale_ev_content_pane_t1_ParamLimits

0xaa9e,	// (0x00067133) field_cale_ev_content_pane_t1

0xb62f,	// (0x00067cc4) bg_button_pane_cp01

0x152e,	// (0x0005dbc3) listscroll_cale_week_pane_ParamLimits

0xa9ae,	// (0x00067043) popup_toolbar_window_cp01

0xa9d4,	// (0x00067069) listscroll_cale_week_pane_t1_ParamLimits

0x152e,	// (0x0005dbc3) listscroll_cale_day_pane_ParamLimits

0xa9ae,	// (0x00067043) popup_toolbar_window_cp02

0xae1d,	// (0x000674b2) listscroll_cale_day_pane_t1_ParamLimits

0x152e,	// (0x0005dbc3) main_cale_month_pane_ParamLimits

0x42a1,	// (0x00060936) popup_toolbar_window_cp03_ParamLimits

0x42a1,	// (0x00060936) popup_toolbar_window_cp03

0x3bcb,	// (0x00060260) main_image_pane_g2_ParamLimits

0x3bcb,	// (0x00060260) main_image_pane_g2

0x3bd7,	// (0x0006026c) main_image_pane_g3_ParamLimits

0x3bd7,	// (0x0006026c) main_image_pane_g3

0x0002,

0xf4a1,	// (0x0006bb36) main_image_pane_g_ParamLimits

0xf4a1,	// (0x0006bb36) main_image_pane_g

0xb749,	// (0x00067dde) main_image_pane_t1_ParamLimits

0x3be3,	// (0x00060278) main_image_pane_t2_ParamLimits

0x3be3,	// (0x00060278) main_image_pane_t2

0x3bf5,	// (0x0006028a) main_image_pane_t3_ParamLimits

0x3bf5,	// (0x0006028a) main_image_pane_t3

0x3c07,	// (0x0006029c) main_image_pane_t4_ParamLimits

0x3c07,	// (0x0006029c) main_image_pane_t4

0x0003,

0xf4a8,	// (0x0006bb3d) main_image_pane_t_ParamLimits

0xf4a8,	// (0x0006bb3d) main_image_pane_t

0x3c19,	// (0x000602ae) popup_image_details_window_cp01

0x3c23,	// (0x000602b8) popup_toobar_trans_pane_cp01_ParamLimits

0x3c23,	// (0x000602b8) popup_toobar_trans_pane_cp01

0x41f1,	// (0x00060886) popup_image_details_window_ParamLimits

0x41f1,	// (0x00060886) popup_image_details_window

0x41ff,	// (0x00060894) popup_image_focus_window

0x4544,	// (0x00060bd9) camera2_autofocus_pane_ParamLimits

0x4544,	// (0x00060bd9) camera2_autofocus_pane

0x9b9f,	// (0x00066234) bg_popup_sub_pane_cp06

0xce1e,	// (0x000694b3) popup_image_focus_window_g1

0xce26,	// (0x000694bb) popup_image_focus_window_g2

0xce2e,	// (0x000694c3) popup_image_focus_window_g3

0xce36,	// (0x000694cb) popup_image_focus_window_g4

0x0003,

0x0344,	// (0x0005c9d9) popup_image_focus_window_g

0xce3e,	// (0x000694d3) popup_image_focus_window_t1

0xce4c,	// (0x000694e1) popup_image_focus_window_t2

0xce5c,	// (0x000694f1) popup_image_focus_window_t3

0x0002,

0x034d,	// (0x0005c9e2) popup_image_focus_window_t

0xce6a,	// (0x000694ff) camera2_autofocus_pane_g1

0xa6a6,	// (0x00066d3b) bg_tb_trans_pane_cp01

0xce78,	// (0x0006950d) popup_image_details_window_g1

0xce8b,	// (0x00069520) popup_image_details_window_g2

0x0002,

0x035f,	// (0x0005c9f4) popup_image_details_window_g

0xceb4,	// (0x00069549) popup_image_details_window_t1

0xcec6,	// (0x0006955b) popup_image_details_window_t2

0xcedf,	// (0x00069574) popup_image_details_window_t3

0xcef3,	// (0x00069588) popup_image_details_window_t4

0xcf0e,	// (0x000695a3) popup_image_details_window_t5

0x0004,

0x0366,	// (0x0005c9fb) popup_image_details_window_t

0xa885,	// (0x00066f1a) bg_calc_paper_pane_ParamLimits

0x0f3f,	// (0x0005d5d4) grid_highlight_pane_cp013

0x12a7,	// (0x0005d93c) list_calc_pane_ParamLimits

0x12b9,	// (0x0005d94e) scroll_pane_cp024

0xa899,	// (0x00066f2e) bg_calc_display_pane_ParamLimits

0x12c1,	// (0x0005d956) calc_display_pane_t1_ParamLimits

0x12d6,	// (0x0005d96b) calc_display_pane_t2_ParamLimits

0x12eb,	// (0x0005d980) calc_display_pane_t3_ParamLimits

0xf136,	// (0x0006b7cb) calc_display_pane_t_ParamLimits

0x13c5,	// (0x0005da5a) cell_calc_pane_g2

0x0001,

0xf153,	// (0x0006b7e8) cell_calc_pane_g

0x13ce,	// (0x0005da63) cell_calc_pane_t1

0xa8f8,	// (0x00066f8d) grid_highlight_pane_cp02_ParamLimits

0xa90e,	// (0x00066fa3) toolbar_button_pane_cp01_ParamLimits

0xa90e,	// (0x00066fa3) toolbar_button_pane_cp01

0xb78e,	// (0x00067e23) temp_image_control_pane_ParamLimits

0xb78e,	// (0x00067e23) temp_image_control_pane

0x416d,	// (0x00060802) main_mp3_pane

0xcf28,	// (0x000695bd) temp_image_control_pane_g1_ParamLimits

0xcf28,	// (0x000695bd) temp_image_control_pane_g1

0xcf36,	// (0x000695cb) temp_image_control_pane_g2_ParamLimits

0xcf36,	// (0x000695cb) temp_image_control_pane_g2

0xcf48,	// (0x000695dd) temp_image_control_pane_g3_ParamLimits

0xcf48,	// (0x000695dd) temp_image_control_pane_g3

0x4b99,	// (0x0006122e) temp_image_control_pane_g4_ParamLimits

0x4b99,	// (0x0006122e) temp_image_control_pane_g4

0x0003,

0xf5bf,	// (0x0006bc54) temp_image_control_pane_g_ParamLimits

0xf5bf,	// (0x0006bc54) temp_image_control_pane_g

0xcf28,	// (0x000695bd) main_mp3_pane_g1

0x4baa,	// (0x0006123f) main_mp3_pane_g2

0x0007,

0xf5c8,	// (0x0006bc5d) main_mp3_pane_g

0xcf8b,	// (0x00069620) main_mp3_pane_t1

0xaa66,	// (0x000670fb) main_camera_pane_g8_ParamLimits

0xaa66,	// (0x000670fb) main_camera_pane_g8

0x1bd2,	// (0x0005e267) main_video_pane_g7_ParamLimits

0x1bd2,	// (0x0005e267) main_video_pane_g7

0x468c,	// (0x00060d21) main_camera2_pane_t7_ParamLimits

0x468c,	// (0x00060d21) main_camera2_pane_t7

0xabd5,	// (0x0006726a) scroll_pane_cp025_ParamLimits

0xabd5,	// (0x0006726a) scroll_pane_cp025

0xabe9,	// (0x0006727e) scroll_pane_cp026_ParamLimits

0xabe9,	// (0x0006727e) scroll_pane_cp026

0xabf8,	// (0x0006728d) wml_content_pane_ParamLimits

0x0f3f,	// (0x0005d5d4) main_touch_calib_pane

0x4c4e,	// (0x000612e3) main_touch_calib_pane_g1

0x4c5a,	// (0x000612ef) main_touch_calib_pane_g2

0x4c66,	// (0x000612fb) main_touch_calib_pane_g3

0x4c72,	// (0x00061307) main_touch_calib_pane_g4

0x0003,

0xf5e6,	// (0x0006bc7b) main_touch_calib_pane_g

0x4c7e,	// (0x00061313) main_touch_calib_pane_t1

0x4c97,	// (0x0006132c) main_touch_calib_pane_t2

0x0004,

0xf5ef,	// (0x0006bc84) main_touch_calib_pane_t

0xb369,	// (0x000679fe) mup_progress_pane_cp02

0xb39e,	// (0x00067a33) navi_pane_g1

0xb459,	// (0x00067aee) navi_pane_mp_t3

0x416d,	// (0x00060802) main_mp3_pane_ParamLimits

0x42de,	// (0x00060973) navi_pane_ParamLimits

0xcf28,	// (0x000695bd) main_mp3_pane_g1_ParamLimits

0x4baa,	// (0x0006123f) main_mp3_pane_g2_ParamLimits

0x4bb6,	// (0x0006124b) main_mp3_pane_g3_ParamLimits

0x4bb6,	// (0x0006124b) main_mp3_pane_g3

0x4bc2,	// (0x00061257) main_mp3_pane_g4_ParamLimits

0x4bc2,	// (0x00061257) main_mp3_pane_g4

0xcf58,	// (0x000695ed) main_mp3_pane_g5_ParamLimits

0xcf58,	// (0x000695ed) main_mp3_pane_g5

0xcf66,	// (0x000695fb) main_mp3_pane_g6_ParamLimits

0xcf66,	// (0x000695fb) main_mp3_pane_g6

0xcf73,	// (0x00069608) main_mp3_pane_g7_ParamLimits

0xcf73,	// (0x00069608) main_mp3_pane_g7

0xcf7f,	// (0x00069614) main_mp3_pane_g8_ParamLimits

0xcf7f,	// (0x00069614) main_mp3_pane_g8

0xf5c8,	// (0x0006bc5d) main_mp3_pane_g_ParamLimits

0x4bce,	// (0x00061263) main_mp3_pane_t2

0x4bde,	// (0x00061273) main_mp3_pane_t3

0xcf99,	// (0x0006962e) main_mp3_pane_t4

0xcfa7,	// (0x0006963c) main_mp3_pane_t5

0x0005,

0xf5d9,	// (0x0006bc6e) main_mp3_pane_t

0xcfb5,	// (0x0006964a) mup_progress_pane_cp01

0x0b8c,	// (0x0005d221) aid_zoom_text_secondary2

0xcd8d,	// (0x00069422) list_cale_ev2_pane

0xcd95,	// (0x0006942a) scroll_pane_cp023_ParamLimits

0x4cf2,	// (0x00061387) field_cale_ev2_pane_ParamLimits

0x4cf2,	// (0x00061387) field_cale_ev2_pane

0xa03d,	// (0x000666d2) field_cale_ev2_pane_g1_ParamLimits

0xa03d,	// (0x000666d2) field_cale_ev2_pane_g1

0xa049,	// (0x000666de) field_cale_ev2_pane_g2_ParamLimits

0xa049,	// (0x000666de) field_cale_ev2_pane_g2

0xa061,	// (0x000666f6) field_cale_ev2_pane_g3_ParamLimits

0xa061,	// (0x000666f6) field_cale_ev2_pane_g3

0x0003,

0xf5fa,	// (0x0006bc8f) field_cale_ev2_pane_g_ParamLimits

0xf5fa,	// (0x0006bc8f) field_cale_ev2_pane_g

0xa085,	// (0x0006671a) field_cale_ev2_pane_t1_ParamLimits

0xa085,	// (0x0006671a) field_cale_ev2_pane_t1

0xa09c,	// (0x00066731) field_cale_ev2_pane_t2_ParamLimits

0xa09c,	// (0x00066731) field_cale_ev2_pane_t2

0x0001,

0xf603,	// (0x0006bc98) field_cale_ev2_pane_t_ParamLimits

0xf603,	// (0x0006bc98) field_cale_ev2_pane_t

0x3aac,	// (0x00060141) main_postcard_pane_g5_ParamLimits

0x3aac,	// (0x00060141) main_postcard_pane_g5

0x3aba,	// (0x0006014f) main_postcard_pane_g6_ParamLimits

0x3aba,	// (0x0006014f) main_postcard_pane_g6

0x1a1c,	// (0x0005e0b1) camera2_autofocus_pane_cp_ParamLimits

0x1a1c,	// (0x0005e0b1) camera2_autofocus_pane_cp

0x416d,	// (0x00060802) main_mup3_pane

0x4d5b,	// (0x000613f0) main_mup3_pane_g1_ParamLimits

0x4d5b,	// (0x000613f0) main_mup3_pane_g1

0x4d7c,	// (0x00061411) main_mup3_pane_g2_ParamLimits

0x4d7c,	// (0x00061411) main_mup3_pane_g2

0x4df6,	// (0x0006148b) main_mup3_pane_g3_ParamLimits

0x4df6,	// (0x0006148b) main_mup3_pane_g3

0x4e39,	// (0x000614ce) main_mup3_pane_g4_ParamLimits

0x4e39,	// (0x000614ce) main_mup3_pane_g4

0x4e7c,	// (0x00061511) main_mup3_pane_g5_ParamLimits

0x4e7c,	// (0x00061511) main_mup3_pane_g5

0x4ebf,	// (0x00061554) main_mup3_pane_g6_ParamLimits

0x4ebf,	// (0x00061554) main_mup3_pane_g6

0xcfbd,	// (0x00069652) main_mup3_pane_g7_ParamLimits

0xcfbd,	// (0x00069652) main_mup3_pane_g7

0x0007,

0xf613,	// (0x0006bca8) main_mup3_pane_g_ParamLimits

0xf613,	// (0x0006bca8) main_mup3_pane_g

0x4f35,	// (0x000615ca) main_mup3_pane_t1_ParamLimits

0x4f35,	// (0x000615ca) main_mup3_pane_t1

0x4fa4,	// (0x00061639) main_mup3_pane_t2_ParamLimits

0x4fa4,	// (0x00061639) main_mup3_pane_t2

0x506d,	// (0x00061702) main_mup3_pane_t4_ParamLimits

0x506d,	// (0x00061702) main_mup3_pane_t4

0x50bb,	// (0x00061750) main_mup3_pane_t5_ParamLimits

0x50bb,	// (0x00061750) main_mup3_pane_t5

0x516b,	// (0x00061800) main_mup3_pane_t6_ParamLimits

0x516b,	// (0x00061800) main_mup3_pane_t6

0x0005,

0xf624,	// (0x0006bcb9) main_mup3_pane_t_ParamLimits

0xf624,	// (0x0006bcb9) main_mup3_pane_t

0x5217,	// (0x000618ac) mup3_progress_pane_ParamLimits

0x5217,	// (0x000618ac) mup3_progress_pane

0x528b,	// (0x00061920) popup_mup3_control_window_ParamLimits

0x528b,	// (0x00061920) popup_mup3_control_window

0xcfcb,	// (0x00069660) popup_mup3_text_window

0x52a4,	// (0x00061939) mup3_progress_pane_t1

0x52c3,	// (0x00061958) mup3_progress_pane_t2

0xcfd3,	// (0x00069668) mup3_progress_pane_t3

0x0002,

0xf631,	// (0x0006bcc6) mup3_progress_pane_t

0xcff0,	// (0x00069685) mup_progress_pane_cp03

0x9b9f,	// (0x00066234) bg_tb_trans_pane_cp04

0x52e2,	// (0x00061977) mup3_volume_pane

0x52ea,	// (0x0006197f) popup_mup3_control_window_g1

0x52f3,	// (0x00061988) mup3_volume_pane_g1

0x52fc,	// (0x00061991) mup3_volume_pane_g2

0x5305,	// (0x0006199a) mup3_volume_pane_g3

0x0002,

0xf638,	// (0x0006bccd) mup3_volume_pane_g

0x9b9f,	// (0x00066234) bg_tb_trans_pane_cp03

0xd000,	// (0x00069695) popup_mup3_text_window_g1

0xd008,	// (0x0006969d) popup_mup3_text_window_t1

0xa8e1,	// (0x00066f76) list_calc_item_pane_g1_ParamLimits

0xca66,	// (0x000690fb) mup_volume_pane_cp_g1

0x4cb0,	// (0x00061345) main_touch_calib_pane_t3

0x4cc6,	// (0x0006135b) main_touch_calib_pane_t4

0x4cdc,	// (0x00061371) main_touch_calib_pane_t5

0x0c74,	// (0x0005d309) aid_cell_size_toolbar2

0x0c7c,	// (0x0005d311) aid_popup3_width_pane

0x0b84,	// (0x0005d219) aid_zoom_text_msg_primary

0x19f1,	// (0x0005e086) vorec_t7

0xa8a5,	// (0x00066f3a) bg_calc_paper_pane_g1_ParamLimits

0xa8b1,	// (0x00066f46) bg_calc_paper_pane_g2_ParamLimits

0xa8bd,	// (0x00066f52) bg_calc_paper_pane_g3_ParamLimits

0xa8c9,	// (0x00066f5e) bg_calc_paper_pane_g4_ParamLimits

0xa8d5,	// (0x00066f6a) bg_calc_paper_pane_g5_ParamLimits

0x132a,	// (0x0005d9bf) bg_calc_paper_pane_g6_ParamLimits

0x133b,	// (0x0005d9d0) bg_calc_paper_pane_g7_ParamLimits

0x134c,	// (0x0005d9e1) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x0006b7d2) bg_calc_paper_pane_g_ParamLimits

0x135d,	// (0x0005d9f2) calc_bg_paper_pane_g9_ParamLimits

0x1b03,	// (0x0005e198) image_qvga_pane_ParamLimits

0x1b03,	// (0x0005e198) image_qvga_pane

0xa7c8,	// (0x00066e5d) bg_popup_sub_pane_cp04_ParamLimits

0xb6c5,	// (0x00067d5a) popup_mup_playback_window_g1_ParamLimits

0xb6d1,	// (0x00067d66) popup_mup_playback_window_t1_ParamLimits

0xb6e6,	// (0x00067d7b) popup_mup_playback_window_t2_ParamLimits

0x0116,	// (0x0005c7ab) popup_mup_playback_window_t_ParamLimits

0x47bb,	// (0x00060e50) main_mup2_pane_g3_ParamLimits

0x47bb,	// (0x00060e50) main_mup2_pane_g3

0x1ecf,	// (0x0005e564) popup_toolbar_window_cp04

0xbadb,	// (0x00068170) popup_call2_audio_second_window_g3_ParamLimits

0xbadb,	// (0x00068170) popup_call2_audio_second_window_g3

0xbee5,	// (0x0006857a) popup_call2_audio_first_window_g4_ParamLimits

0xbee5,	// (0x0006857a) popup_call2_audio_first_window_g4

0xc564,	// (0x00068bf9) popup_call2_audio_in_window_g4_ParamLimits

0xc564,	// (0x00068bf9) popup_call2_audio_in_window_g4

0x3bbe,	// (0x00060253) aid_area_sk_bg_cut_ParamLimits

0x3bbe,	// (0x00060253) aid_area_sk_bg_cut

0xb6fb,	// (0x00067d90) aid_area_sk_bg_cut_2_ParamLimits

0xb6fb,	// (0x00067d90) aid_area_sk_bg_cut_2

0x4b3f,	// (0x000611d4) aid_placing_details_win

0x4b47,	// (0x000611dc) aid_placing_details_win_2

0xce6a,	// (0x000694ff) camera2_autofocus_pane_g1_ParamLimits

0x0ecb,	// (0x0005d560) popup_fixed_preview_cale_window_ParamLimits

0x0ecb,	// (0x0005d560) popup_fixed_preview_cale_window

0xb4d7,	// (0x00067b6c) navi_slider_pane_g3

0xb4e0,	// (0x00067b75) navi_slider_pane_g4

0xb4e9,	// (0x00067b7e) navi_slider_pane_g5

0xb4d7,	// (0x00067b6c) navi_slider_pane_g6

0x349b,	// (0x0005fb30) navi_slider_pane_g7

0xb5fc,	// (0x00067c91) mup_scale_pane_g3

0xb605,	// (0x00067c9a) mup_scale_pane_g4

0xb60e,	// (0x00067ca3) mup_scale_pane_g5

0x38ca,	// (0x0005ff5f) mup_scale_pane_g6

0x38d3,	// (0x0005ff68) mup_scale_pane_g7

0xb4d7,	// (0x00067b6c) cams2_slider_pane_g3

0xcae8,	// (0x0006917d) cams2_slider_pane_g4

0x4a97,	// (0x0006112c) cams2_slider_pane_g5

0xb4d7,	// (0x00067b6c) cams2_slider_pane_g6

0x4a9f,	// (0x00061134) cams2_slider_pane_g7

0xcd13,	// (0x000693a8) camera2_autofocus_pane_cp_g1

0xc8ff,	// (0x00068f94) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8ff,	// (0x00068f94) bg_popup_preview_window_pane_cp02

0xd016,	// (0x000696ab) list_fp_cale_pane_ParamLimits

0xd016,	// (0x000696ab) list_fp_cale_pane

0xd022,	// (0x000696b7) popup_fixed_preview_cale_window_t1_ParamLimits

0xd022,	// (0x000696b7) popup_fixed_preview_cale_window_t1

0x530e,	// (0x000619a3) popup_fixed_preview_cale_window_t2_ParamLimits

0x530e,	// (0x000619a3) popup_fixed_preview_cale_window_t2

0x5323,	// (0x000619b8) popup_fixed_preview_cale_window_t3_ParamLimits

0x5323,	// (0x000619b8) popup_fixed_preview_cale_window_t3

0x0002,

0xf63f,	// (0x0006bcd4) popup_fixed_preview_cale_window_t_ParamLimits

0xf63f,	// (0x0006bcd4) popup_fixed_preview_cale_window_t

0x5338,	// (0x000619cd) list_single_fp_cale_pane_ParamLimits

0x5338,	// (0x000619cd) list_single_fp_cale_pane

0xd040,	// (0x000696d5) list_single_fp_cale_pane_g1_ParamLimits

0xd040,	// (0x000696d5) list_single_fp_cale_pane_g1

0xd04c,	// (0x000696e1) list_single_fp_cale_pane_g2_ParamLimits

0xd04c,	// (0x000696e1) list_single_fp_cale_pane_g2

0x0002,

0x03f8,	// (0x0005ca8d) list_single_fp_cale_pane_g_ParamLimits

0x03f8,	// (0x0005ca8d) list_single_fp_cale_pane_g

0xd065,	// (0x000696fa) list_single_fp_cale_pane_t1_ParamLimits

0xd065,	// (0x000696fa) list_single_fp_cale_pane_t1

0xd077,	// (0x0006970c) list_single_fp_cale_pane_t2_ParamLimits

0xd077,	// (0x0006970c) list_single_fp_cale_pane_t2

0x0001,

0x03ff,	// (0x0005ca94) list_single_fp_cale_pane_t_ParamLimits

0x03ff,	// (0x0005ca94) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f3f,	// (0x0005d5d4) main_dialer_pane

0x534b,	// (0x000619e0) aid_cell_size_keypad

0x5355,	// (0x000619ea) dialer_ne_pane

0x535f,	// (0x000619f4) grid_dialer_command_1_pane

0x5367,	// (0x000619fc) grid_dialer_command_2_pane

0x536f,	// (0x00061a04) grid_dialer_keypad_pane

0x5383,	// (0x00061a18) bg_popup_call_pane_cp06_ParamLimits

0x5383,	// (0x00061a18) bg_popup_call_pane_cp06

0x538f,	// (0x00061a24) dialer_ne_clear_pane_ParamLimits

0x538f,	// (0x00061a24) dialer_ne_clear_pane

0xd0aa,	// (0x0006973f) dialer_ne_pane_g1

0xd0b2,	// (0x00069747) dialer_ne_pane_t1_ParamLimits

0xd0b2,	// (0x00069747) dialer_ne_pane_t1

0x539b,	// (0x00061a30) dialer_ne_pane_t2_ParamLimits

0x539b,	// (0x00061a30) dialer_ne_pane_t2

0x53b8,	// (0x00061a4d) dialer_ne_pane_t3_ParamLimits

0x53b8,	// (0x00061a4d) dialer_ne_pane_t3

0x0002,

0xf646,	// (0x0006bcdb) dialer_ne_pane_t_ParamLimits

0xf646,	// (0x0006bcdb) dialer_ne_pane_t

0x53dc,	// (0x00061a71) dialer_ne_pane_t3_copy1_ParamLimits

0x53dc,	// (0x00061a71) dialer_ne_pane_t3_copy1

0x5400,	// (0x00061a95) cell_dialer_keypad_pane_ParamLimits

0x5400,	// (0x00061a95) cell_dialer_keypad_pane

0x5417,	// (0x00061aac) cell_dialer_command_1_pane_ParamLimits

0x5417,	// (0x00061aac) cell_dialer_command_1_pane

0x542d,	// (0x00061ac2) cell_dialer_command_2_pane_ParamLimits

0x542d,	// (0x00061ac2) cell_dialer_command_2_pane

0xd0c4,	// (0x00069759) bg_button_pane_cp02_ParamLimits

0xd0c4,	// (0x00069759) bg_button_pane_cp02

0x543c,	// (0x00061ad1) cell_dialer_keypad_pane_g1_ParamLimits

0x543c,	// (0x00061ad1) cell_dialer_keypad_pane_g1

0xd0c4,	// (0x00069759) bg_button_pane_cp03_ParamLimits

0xd0c4,	// (0x00069759) bg_button_pane_cp03

0x5451,	// (0x00061ae6) cell_dialer_command_1_pane_g1_ParamLimits

0x5451,	// (0x00061ae6) cell_dialer_command_1_pane_g1

0xd0d0,	// (0x00069765) bg_button_pane_cp04

0x5465,	// (0x00061afa) cell_dialer_command_2_pane_g1

0xaa5e,	// (0x000670f3) bg_button_pane_cp06

0xd0d8,	// (0x0006976d) dialer_ne_clear_pane_g1

0xb3aa,	// (0x00067a3f) navi_pane_g2

0xb3d8,	// (0x00067a6d) navi_pane_g3

0x0002,

0x0019,	// (0x0005c6ae) navi_pane_g

0xb467,	// (0x00067afc) navi_pane_mv_g2

0xb48e,	// (0x00067b23) navi_pane_mv_g5

0x3466,	// (0x0005fafb) navi_pane_mv_t1

0xa899,	// (0x00066f2e) main_clock2_pane

0xe2dd,	// (0x0006a972) main_clock2_list_pane_ParamLimits

0xe2dd,	// (0x0006a972) main_clock2_list_pane

0x54c1,	// (0x00061b56) main_clock2_pane_t1_ParamLimits

0x54c1,	// (0x00061b56) main_clock2_pane_t1

0x54ef,	// (0x00061b84) main_clock2_pane_t2_ParamLimits

0x54ef,	// (0x00061b84) main_clock2_pane_t2

0x0004,

0xf64d,	// (0x0006bce2) main_clock2_pane_t_ParamLimits

0xf64d,	// (0x0006bce2) main_clock2_pane_t

0x5554,	// (0x00061be9) popup_clock_analogue_window_cp03_ParamLimits

0x5554,	// (0x00061be9) popup_clock_analogue_window_cp03

0x5572,	// (0x00061c07) popup_clock_digital_window_cp02_ParamLimits

0x5572,	// (0x00061c07) popup_clock_digital_window_cp02

0x55e7,	// (0x00061c7c) main_clock2_list_single_pane_ParamLimits

0x55e7,	// (0x00061c7c) main_clock2_list_single_pane

0xaa5e,	// (0x000670f3) list_highlight_pane_cp05

0xd112,	// (0x000697a7) main_clock2_list_single_pane_t1

0x1ecf,	// (0x0005e564) popup_toolbar_window_cp04_ParamLimits

0x4b69,	// (0x000611fe) camera2_autofocus_pane_g2_ParamLimits

0x4b69,	// (0x000611fe) camera2_autofocus_pane_g2

0x4b75,	// (0x0006120a) camera2_autofocus_pane_g3_ParamLimits

0x4b75,	// (0x0006120a) camera2_autofocus_pane_g3

0x4b81,	// (0x00061216) camera2_autofocus_pane_g4_ParamLimits

0x4b81,	// (0x00061216) camera2_autofocus_pane_g4

0x4b8d,	// (0x00061222) camera2_autofocus_pane_g5_ParamLimits

0x4b8d,	// (0x00061222) camera2_autofocus_pane_g5

0x0004,

0xf5b4,	// (0x0006bc49) camera2_autofocus_pane_g_ParamLimits

0xf5b4,	// (0x0006bc49) camera2_autofocus_pane_g

0x4d1c,	// (0x000613b1) camera2_autofocus_pane_cp_g2

0x4d24,	// (0x000613b9) camera2_autofocus_pane_cp_g3

0x4d2c,	// (0x000613c1) camera2_autofocus_pane_cp_g4

0x4d34,	// (0x000613c9) camera2_autofocus_pane_cp_g5

0x0004,

0xf608,	// (0x0006bc9d) camera2_autofocus_pane_cp_g

0x537b,	// (0x00061a10) popup_dialer_spcha_window

0x9b9f,	// (0x00066234) bg_popup_sub_pane_cp07

0xd120,	// (0x000697b5) list_spcha_pane

0xd128,	// (0x000697bd) list_single_spcha_pane_ParamLimits

0xd128,	// (0x000697bd) list_single_spcha_pane

0x9b9f,	// (0x00066234) list_highlight_pane_cp06

0xd139,	// (0x000697ce) list_single_spcha_pane_t1

0xc30e,	// (0x000689a3) popup_call2_audio_out_window_g4_ParamLimits

0xc30e,	// (0x000689a3) popup_call2_audio_out_window_g4

0x0f3f,	// (0x0005d5d4) main_imed2_pane

0x4207,	// (0x0006089c) popup_imed_adjust2_window

0x421a,	// (0x000608af) popup_imed_trans_window_ParamLimits

0x421a,	// (0x000608af) popup_imed_trans_window

0xcb51,	// (0x000691e6) popup_blid_sat_info2_window_t1

0xcb5f,	// (0x000691f4) popup_blid_sat_info2_window_t2

0x000a,

0x02e9,	// (0x0005c97e) popup_blid_sat_info2_window_t

0x569c,	// (0x00061d31) aid_size_cell_colour_35

0x56b6,	// (0x00061d4b) aid_size_cell_colour_112

0x56cd,	// (0x00061d62) aid_size_cell_effect

0xa6a6,	// (0x00066d3b) bg_tb_trans_pane_cp02

0xb102,	// (0x00067797) heading_imed_pane

0x56e7,	// (0x00061d7c) listscroll_imed_pane

0xd147,	// (0x000697dc) heading_imed_pane_g1

0xd14f,	// (0x000697e4) heading_imed_pane_t1

0xd15d,	// (0x000697f2) grid_imed_colour_35_pane_ParamLimits

0xd15d,	// (0x000697f2) grid_imed_colour_35_pane

0x56f3,	// (0x00061d88) grid_imed_effect_pane

0xd175,	// (0x0006980a) list_imed_aspect_pane

0x5703,	// (0x00061d98) scroll_pane_cp027_ParamLimits

0x5703,	// (0x00061d98) scroll_pane_cp027

0x570f,	// (0x00061da4) cell_imed_effect_pane_ParamLimits

0x570f,	// (0x00061da4) cell_imed_effect_pane

0xd17d,	// (0x00069812) cell_imed_colour_pane_ParamLimits

0xd17d,	// (0x00069812) cell_imed_colour_pane

0xd1bf,	// (0x00069854) cell_imed_colour_pane_g1_ParamLimits

0xd1bf,	// (0x00069854) cell_imed_colour_pane_g1

0xd1d0,	// (0x00069865) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1d0,	// (0x00069865) hgihlgiht_grid_pane_cp016

0x5727,	// (0x00061dbc) cell_imed_effect_pane_g1

0x572f,	// (0x00061dc4) grid_highlight_pane_cp017

0xd1e1,	// (0x00069876) list_imed_single_pane_ParamLimits

0xd1e1,	// (0x00069876) list_imed_single_pane

0x9b9f,	// (0x00066234) list_highlight_pane_cp07

0xd1f6,	// (0x0006988b) list_imed_aspect_pane_comp1_t1

0xc90b,	// (0x00068fa0) bg_tb_trans_pane_cp05

0xd218,	// (0x000698ad) popup_imed_adjust2_window_g1

0xd23f,	// (0x000698d4) popup_imed_adjust2_window_t1

0xd257,	// (0x000698ec) slider_imed_adjust_pane

0xd26b,	// (0x00069900) slider_imed_adjust_pane_g1

0xd27b,	// (0x00069910) slider_imed_adjust_pane_g2

0xd28b,	// (0x00069920) slider_imed_adjust_pane_g3

0xd29c,	// (0x00069931) slider_imed_adjust_pane_g4

0x0003,

0x042d,	// (0x0005cac2) slider_imed_adjust_pane_g

0x5738,	// (0x00061dcd) aid_size_cell_clipart2

0x5744,	// (0x00061dd9) grid_imed_clipart_pane

0xd2ad,	// (0x00069942) scroll_pane_cp031

0x574e,	// (0x00061de3) cell_imed_clipart_pane_ParamLimits

0x574e,	// (0x00061de3) cell_imed_clipart_pane

0x5771,	// (0x00061e06) cell_imed_clipart_pane_g1

0x9b9f,	// (0x00066234) grid_highlight_pane_cp014

0x54a3,	// (0x00061b38) main_clock2_pane_g1_ParamLimits

0x54a3,	// (0x00061b38) main_clock2_pane_g1

0x558e,	// (0x00061c23) aid_call2_pane_cp10

0x55a0,	// (0x00061c35) aid_call_pane_cp10

0xb309,	// (0x0006799e) popup_clock_analogue_window_cp10_g1

0xb309,	// (0x0006799e) popup_clock_analogue_window_cp10_g2

0x55b2,	// (0x00061c47) popup_clock_analogue_window_cp10_g3

0x55b2,	// (0x00061c47) popup_clock_analogue_window_cp10_g4

0xb309,	// (0x0006799e) popup_clock_analogue_window_cp10_g5

0x0004,

0xf658,	// (0x0006bced) popup_clock_analogue_window_cp10_g

0x55c8,	// (0x00061c5d) popup_clock_analogue_window_cp10_t1

0x55f9,	// (0x00061c8e) clock_digital_number_pane_cp10_ParamLimits

0x55f9,	// (0x00061c8e) clock_digital_number_pane_cp10

0x5613,	// (0x00061ca8) clock_digital_number_pane_cp11_ParamLimits

0x5613,	// (0x00061ca8) clock_digital_number_pane_cp11

0x562d,	// (0x00061cc2) clock_digital_number_pane_cp12_ParamLimits

0x562d,	// (0x00061cc2) clock_digital_number_pane_cp12

0x5647,	// (0x00061cdc) clock_digital_number_pane_cp13_ParamLimits

0x5647,	// (0x00061cdc) clock_digital_number_pane_cp13

0x5661,	// (0x00061cf6) clock_digital_separator_pane_cp10_ParamLimits

0x5661,	// (0x00061cf6) clock_digital_separator_pane_cp10

0x567b,	// (0x00061d10) popup_clock_digital_window_cp02_t1_ParamLimits

0x567b,	// (0x00061d10) popup_clock_digital_window_cp02_t1

0xa7c0,	// (0x00066e55) clock_digital_number_pane_cp10_g1

0xa7c0,	// (0x00066e55) clock_digital_number_pane_cp10_g2

0x0001,

0xf663,	// (0x0006bcf8) clock_digital_number_pane_cp10_g

0xa7c0,	// (0x00066e55) clock_digital_separator_pane_cp10_g1

0xa7c0,	// (0x00066e55) clock_digital_separator_pane_g2_cp10

0xb496,	// (0x00067b2b) navi_pane_vded_g4

0xb49f,	// (0x00067b34) navi_pane_vded_g5

0xb4a8,	// (0x00067b3d) navi_pane_vded_t1

0x0f3f,	// (0x0005d5d4) main_vded_pane

0x577a,	// (0x00061e0f) main_vded_pane_g1

0x5786,	// (0x00061e1b) main_vded_pane_g2

0x5790,	// (0x00061e25) main_vded_pane_g3

0x0002,

0xf668,	// (0x0006bcfd) main_vded_pane_g

0x579a,	// (0x00061e2f) main_vded_pane_t1

0x57a8,	// (0x00061e3d) main_vded_pane_t2

0x0001,

0xf66f,	// (0x0006bd04) main_vded_pane_t

0x57b6,	// (0x00061e4b) vded_slider_pane

0x57c0,	// (0x00061e55) vded_video_pane

0xd2b5,	// (0x0006994a) vded_video_pane_g1

0x57ca,	// (0x00061e5f) vded_video_pane_g2

0xcd13,	// (0x000693a8) vded_video_pane_g3

0x0002,

0xf674,	// (0x0006bd09) vded_video_pane_g

0xd2bf,	// (0x00069954) vded_slider_pane_g1

0xca66,	// (0x000690fb) vded_slider_pane_g2

0xd2c8,	// (0x0006995d) vded_slider_pane_g3

0xd2d1,	// (0x00069966) vded_slider_pane_g4

0xd2da,	// (0x0006996f) vded_slider_pane_g5

0x0004,

0x044e,	// (0x0005cae3) vded_slider_pane_g

0x527d,	// (0x00061912) mup3_rocker_pane_ParamLimits

0x527d,	// (0x00061912) mup3_rocker_pane

0x57d3,	// (0x00061e68) mup3_control_keys_pane_g1

0x57db,	// (0x00061e70) mup3_control_keys_pane_g2

0x57e3,	// (0x00061e78) mup3_control_keys_pane_g3

0x57eb,	// (0x00061e80) mup3_control_keys_pane_g4

0x0003,

0xf67b,	// (0x0006bd10) mup3_control_keys_pane_g

0x0ef3,	// (0x0005d588) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0ef3,	// (0x0005d588) popup_toolbar2_fixed_window_cp01

0x5297,	// (0x0006192c) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5297,	// (0x0006192c) popup_toolbar2_fixed_window_cp02

0xbc4d,	// (0x000682e2) popup_call2_audio_second_window_t4_ParamLimits

0xbc4d,	// (0x000682e2) popup_call2_audio_second_window_t4

0xc17b,	// (0x00068810) popup_call2_audio_first_window_t6_ParamLimits

0xc17b,	// (0x00068810) popup_call2_audio_first_window_t6

0xc411,	// (0x00068aa6) popup_call2_audio_out_window_t6_ParamLimits

0xc411,	// (0x00068aa6) popup_call2_audio_out_window_t6

0x0f3f,	// (0x0005d5d4) main_vitu_pane

0x57fb,	// (0x00061e90) aid_size_cell_itu_ParamLimits

0x57fb,	// (0x00061e90) aid_size_cell_itu

0xe2dd,	// (0x0006a972) bg_popup_window_pane_cp08_ParamLimits

0xe2dd,	// (0x0006a972) bg_popup_window_pane_cp08

0x5809,	// (0x00061e9e) field_vitu_entry_pane_ParamLimits

0x5809,	// (0x00061e9e) field_vitu_entry_pane

0x5818,	// (0x00061ead) grid_vitu_function_pane_ParamLimits

0x5818,	// (0x00061ead) grid_vitu_function_pane

0x5828,	// (0x00061ebd) grid_vitu_itu_pane_ParamLimits

0x5828,	// (0x00061ebd) grid_vitu_itu_pane

0x5838,	// (0x00061ecd) cell_vitu_itu_pane_ParamLimits

0x5838,	// (0x00061ecd) cell_vitu_itu_pane

0x584d,	// (0x00061ee2) cell_vitu_function_pane_ParamLimits

0x584d,	// (0x00061ee2) cell_vitu_function_pane

0xa6a6,	// (0x00066d3b) bg_popup_sub_pane_cp08_ParamLimits

0xa6a6,	// (0x00066d3b) bg_popup_sub_pane_cp08

0x585f,	// (0x00061ef4) field_vitu_entry_pane_t1_ParamLimits

0x585f,	// (0x00061ef4) field_vitu_entry_pane_t1

0xd2fb,	// (0x00069990) field_vitu_entry_pane_t2_ParamLimits

0xd2fb,	// (0x00069990) field_vitu_entry_pane_t2

0x0001,

0xf684,	// (0x0006bd19) field_vitu_entry_pane_t_ParamLimits

0xf684,	// (0x0006bd19) field_vitu_entry_pane_t

0xd318,	// (0x000699ad) bg_button_pane_cp05_ParamLimits

0xd318,	// (0x000699ad) bg_button_pane_cp05

0x587c,	// (0x00061f11) cell_vitu_itu_pane_g1

0x5894,	// (0x00061f29) cell_vitu_itu_pane_t1_ParamLimits

0x5894,	// (0x00061f29) cell_vitu_itu_pane_t1

0x58a6,	// (0x00061f3b) cell_vitu_itu_pane_t2_ParamLimits

0x58a6,	// (0x00061f3b) cell_vitu_itu_pane_t2

0x0002,

0xf689,	// (0x0006bd1e) cell_vitu_itu_pane_t_ParamLimits

0xf689,	// (0x0006bd1e) cell_vitu_itu_pane_t

0xd326,	// (0x000699bb) bg_button_pane_cp07

0x58db,	// (0x00061f70) cell_vitu_function_pane_g1

0x11ce,	// (0x0005d863) main_calc_pane_g1

0x0cb0,	// (0x0005d345) aid_visual_content_pane

0x0f3f,	// (0x0005d5d4) main_vradio_pane

0x58e4,	// (0x00061f79) main_vradio_pane_g1_ParamLimits

0x58e4,	// (0x00061f79) main_vradio_pane_g1

0xd330,	// (0x000699c5) main_vradio_pane_g2_ParamLimits

0xd330,	// (0x000699c5) main_vradio_pane_g2

0x0001,

0xf690,	// (0x0006bd25) main_vradio_pane_g_ParamLimits

0xf690,	// (0x0006bd25) main_vradio_pane_g

0x58f4,	// (0x00061f89) main_vradio_pane_t1_ParamLimits

0x58f4,	// (0x00061f89) main_vradio_pane_t1

0x5906,	// (0x00061f9b) main_vradio_pane_t2_ParamLimits

0x5906,	// (0x00061f9b) main_vradio_pane_t2

0xd33d,	// (0x000699d2) main_vradio_pane_t3_ParamLimits

0xd33d,	// (0x000699d2) main_vradio_pane_t3

0x0002,

0xf695,	// (0x0006bd2a) main_vradio_pane_t_ParamLimits

0xf695,	// (0x0006bd2a) main_vradio_pane_t

0x5918,	// (0x00061fad) vradio_rocker_control_pane_ParamLimits

0x5918,	// (0x00061fad) vradio_rocker_control_pane

0x5924,	// (0x00061fb9) vradio_station_info_pane_ParamLimits

0x5924,	// (0x00061fb9) vradio_station_info_pane

0xd351,	// (0x000699e6) vradio_frequency_info_pane_ParamLimits

0xd351,	// (0x000699e6) vradio_frequency_info_pane

0xcd13,	// (0x000693a8) vradio_station_info_pane_g1

0xd360,	// (0x000699f5) vradio_station_info_pane_t1_ParamLimits

0xd360,	// (0x000699f5) vradio_station_info_pane_t1

0xd382,	// (0x00069a17) vradio_station_info_pane_t2_ParamLimits

0xd382,	// (0x00069a17) vradio_station_info_pane_t2

0x0001,

0x047f,	// (0x0005cb14) vradio_station_info_pane_t_ParamLimits

0x047f,	// (0x0005cb14) vradio_station_info_pane_t

0xd394,	// (0x00069a29) vradio_tuning_pane

0xd39c,	// (0x00069a31) vradio_rocker_control_pane_g1

0xd3a4,	// (0x00069a39) vradio_rocker_control_pane_g2

0xd3ac,	// (0x00069a41) vradio_rocker_control_pane_g3

0xd3b4,	// (0x00069a49) vradio_rocker_control_pane_g4

0xd3bc,	// (0x00069a51) vradio_rocker_control_pane_g5

0x0004,

0x0484,	// (0x0005cb19) vradio_rocker_control_pane_g

0x5933,	// (0x00061fc8) vradio_frequency_info_pane_g1

0xd3c4,	// (0x00069a59) vradio_frequency_info_pane_t1_ParamLimits

0xd3c4,	// (0x00069a59) vradio_frequency_info_pane_t1

0x593d,	// (0x00061fd2) vradio_tuning_pane_g1

0x5946,	// (0x00061fdb) vradio_tuning_pane_t1

0x0cf9,	// (0x0005d38e) area_side_right_pane_ParamLimits

0x0cf9,	// (0x0005d38e) area_side_right_pane

0xc8c6,	// (0x00068f5b) status_small_pane_g1

0xc8ce,	// (0x00068f63) status_small_pane_g2

0xc8d7,	// (0x00068f6c) status_small_pane_g3

0xc8e0,	// (0x00068f75) status_small_pane_g4

0x0003,

0x023f,	// (0x0005c8d4) status_small_pane_g

0xc8e9,	// (0x00068f7e) status_small_pane_t1

0x0f3f,	// (0x0005d5d4) main_video3_pane

0xd3d8,	// (0x00069a6d) cams_zoom_vslider_pane

0xd3e0,	// (0x00069a75) image3_wide_pane_ParamLimits

0xd3e0,	// (0x00069a75) image3_wide_pane

0xd3fa,	// (0x00069a8f) image3_wide_small_pane

0xd406,	// (0x00069a9b) main_video3_pane_g1_ParamLimits

0xd406,	// (0x00069a9b) main_video3_pane_g1

0xd422,	// (0x00069ab7) main_video3_pane_g2_ParamLimits

0xd422,	// (0x00069ab7) main_video3_pane_g2

0x0001,

0x048f,	// (0x0005cb24) main_video3_pane_g_ParamLimits

0x048f,	// (0x0005cb24) main_video3_pane_g

0xd43e,	// (0x00069ad3) main_video3_pane_t1_ParamLimits

0xd43e,	// (0x00069ad3) main_video3_pane_t1

0xd469,	// (0x00069afe) main_video3_pane_t2_ParamLimits

0xd469,	// (0x00069afe) main_video3_pane_t2

0xd494,	// (0x00069b29) main_video3_pane_t3_ParamLimits

0xd494,	// (0x00069b29) main_video3_pane_t3

0x0002,

0x0494,	// (0x0005cb29) main_video3_pane_t_ParamLimits

0x0494,	// (0x0005cb29) main_video3_pane_t

0xd4c1,	// (0x00069b56) cams_zoom_vslider_pane_g1

0xd4ca,	// (0x00069b5f) cams_zoom_vslider_pane_g2

0x0001,

0x049b,	// (0x0005cb30) cams_zoom_vslider_pane_g

0xd4d2,	// (0x00069b67) small_slider_vertical_pane

0xcd13,	// (0x000693a8) small_slider_vertical_pane_g1

0xcd13,	// (0x000693a8) small_slider_vertical_pane_g2

0xd4da,	// (0x00069b6f) small_slider_vertical_pane_g3

0x0002,

0x04a0,	// (0x0005cb35) small_slider_vertical_pane_g

0x0f3f,	// (0x0005d5d4) main_hwr_training_pane

0xd4e3,	// (0x00069b78) hwr_training_instruct_pane_ParamLimits

0xd4e3,	// (0x00069b78) hwr_training_instruct_pane

0x5955,	// (0x00061fea) hwr_training_navi_pane_ParamLimits

0x5955,	// (0x00061fea) hwr_training_navi_pane

0x596f,	// (0x00062004) hwr_training_write_pane_ParamLimits

0x596f,	// (0x00062004) hwr_training_write_pane

0x9b9f,	// (0x00066234) bg_frame_shadow_pane

0xd51a,	// (0x00069baf) hwr_training_write_pane_g1

0xd522,	// (0x00069bb7) hwr_training_write_pane_g2

0xd52a,	// (0x00069bbf) hwr_training_write_pane_g3

0xd532,	// (0x00069bc7) hwr_training_write_pane_g4

0xd53a,	// (0x00069bcf) hwr_training_write_pane_g5

0xd542,	// (0x00069bd7) hwr_training_write_pane_g6

0xd54a,	// (0x00069bdf) hwr_training_write_pane_g7

0x0006,

0x04a7,	// (0x0005cb3c) hwr_training_write_pane_g

0x59a7,	// (0x0006203c) hwr_training_navi_pane_g1_ParamLimits

0x59a7,	// (0x0006203c) hwr_training_navi_pane_g1

0x59b9,	// (0x0006204e) hwr_training_navi_pane_g2_ParamLimits

0x59b9,	// (0x0006204e) hwr_training_navi_pane_g2

0x59cb,	// (0x00062060) hwr_training_navi_pane_g3_ParamLimits

0x59cb,	// (0x00062060) hwr_training_navi_pane_g3

0x59db,	// (0x00062070) hwr_training_navi_pane_g4_ParamLimits

0x59db,	// (0x00062070) hwr_training_navi_pane_g4

0x0004,

0xf69c,	// (0x0006bd31) hwr_training_navi_pane_g_ParamLimits

0xf69c,	// (0x0006bd31) hwr_training_navi_pane_g

0x59f5,	// (0x0006208a) hwr_training_navi_pane_t1

0x5a03,	// (0x00062098) list_single_hwr_training_instruct_pane_ParamLimits

0x5a03,	// (0x00062098) list_single_hwr_training_instruct_pane

0xd552,	// (0x00069be7) list_single_hwr_training_instruct_pane_t1

0xcc53,	// (0x000692e8) bg_frame_shadow_pane_g1

0xd561,	// (0x00069bf6) bg_frame_shadow_pane_g2

0xd569,	// (0x00069bfe) bg_frame_shadow_pane_g3

0xd571,	// (0x00069c06) bg_frame_shadow_pane_g4

0xd579,	// (0x00069c0e) bg_frame_shadow_pane_g5

0xd581,	// (0x00069c16) bg_frame_shadow_pane_g6

0xd589,	// (0x00069c1e) bg_frame_shadow_pane_g7

0xa952,	// (0x00066fe7) bg_frame_shadow_pane_g8

0x0007,

0xf6a7,	// (0x0006bd3c) bg_frame_shadow_pane_g

0x0f3f,	// (0x0005d5d4) main_video_tele_dialer_pane

0x5a2c,	// (0x000620c1) aid_size_cell_video_keypad_ParamLimits

0x5a2c,	// (0x000620c1) aid_size_cell_video_keypad

0x5a3c,	// (0x000620d1) grid_video_dialer_keypad_pane_ParamLimits

0x5a3c,	// (0x000620d1) grid_video_dialer_keypad_pane

0x5a70,	// (0x00062105) video_down_pane_cp_ParamLimits

0x5a70,	// (0x00062105) video_down_pane_cp

0x5a9a,	// (0x0006212f) cell_video_dialer_keypad_pane_ParamLimits

0x5a9a,	// (0x0006212f) cell_video_dialer_keypad_pane

0xd591,	// (0x00069c26) bg_button_pane_cp08_ParamLimits

0xd591,	// (0x00069c26) bg_button_pane_cp08

0x5aaf,	// (0x00062144) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5aaf,	// (0x00062144) cell_video_dialer_keypad_pane_g1

0x5271,	// (0x00061906) mup3_rocker2_pane_ParamLimits

0x5271,	// (0x00061906) mup3_rocker2_pane

0xcd13,	// (0x000693a8) mup3_rocker2_pane_g1

0x417b,	// (0x00060810) main_dialer2_pane

0x0f3f,	// (0x0005d5d4) main_mp4_pane

0x5b07,	// (0x0006219c) main_mp4_pane_g1_ParamLimits

0x5b07,	// (0x0006219c) main_mp4_pane_g1

0x5b15,	// (0x000621aa) main_mp4_pane_g2_ParamLimits

0x5b15,	// (0x000621aa) main_mp4_pane_g2

0x5b23,	// (0x000621b8) main_mp4_pane_g3_ParamLimits

0x5b23,	// (0x000621b8) main_mp4_pane_g3

0x5b68,	// (0x000621fd) main_mp4_pane_g4_ParamLimits

0x5b68,	// (0x000621fd) main_mp4_pane_g4

0x5b96,	// (0x0006222b) main_mp4_pane_g5_ParamLimits

0x5b96,	// (0x0006222b) main_mp4_pane_g5

0x0007,

0xf6c7,	// (0x0006bd5c) main_mp4_pane_g_ParamLimits

0xf6c7,	// (0x0006bd5c) main_mp4_pane_g

0x5c0a,	// (0x0006229f) main_mp4_pane_t1_ParamLimits

0x5c0a,	// (0x0006229f) main_mp4_pane_t1

0x5c66,	// (0x000622fb) main_mp4_pane_t2_ParamLimits

0x5c66,	// (0x000622fb) main_mp4_pane_t2

0xd59d,	// (0x00069c32) main_mp4_pane_t3_ParamLimits

0xd59d,	// (0x00069c32) main_mp4_pane_t3

0x5cb8,	// (0x0006234d) main_mp4_pane_t4_ParamLimits

0x5cb8,	// (0x0006234d) main_mp4_pane_t4

0x0003,

0xf6d8,	// (0x0006bd6d) main_mp4_pane_t_ParamLimits

0xf6d8,	// (0x0006bd6d) main_mp4_pane_t

0x5cfc,	// (0x00062391) mp4_progress_pane_ParamLimits

0x5cfc,	// (0x00062391) mp4_progress_pane

0x5d46,	// (0x000623db) mp4_rocker_pane_ParamLimits

0x5d46,	// (0x000623db) mp4_rocker_pane

0xd5cb,	// (0x00069c60) mp4_progress_pane_t1

0xd5e4,	// (0x00069c79) mp4_progress_pane_t2

0x0001,

0x04fb,	// (0x0005cb90) mp4_progress_pane_t

0xd5fd,	// (0x00069c92) mup_progress_pane_cp04

0xdc98,	// (0x0006a32d) mp4_rocker_pane_g1

0x5d66,	// (0x000623fb) aid_cell_size_keypad2_ParamLimits

0x5d66,	// (0x000623fb) aid_cell_size_keypad2

0x5d76,	// (0x0006240b) dialer2_ne_pane_ParamLimits

0x5d76,	// (0x0006240b) dialer2_ne_pane

0x5d84,	// (0x00062419) grid_dialer2_keypad_pane_ParamLimits

0x5d84,	// (0x00062419) grid_dialer2_keypad_pane

0xdca2,	// (0x0006a337) bg_popup_call_pane_cp07_ParamLimits

0xdca2,	// (0x0006a337) bg_popup_call_pane_cp07

0x5d94,	// (0x00062429) dialer2_ne_pane_t1_ParamLimits

0x5d94,	// (0x00062429) dialer2_ne_pane_t1

0x5db9,	// (0x0006244e) cell_dialer2_keypad_pane_ParamLimits

0x5db9,	// (0x0006244e) cell_dialer2_keypad_pane

0xd622,	// (0x00069cb7) bg_button_pane_pane_cp04_ParamLimits

0xd622,	// (0x00069cb7) bg_button_pane_pane_cp04

0x5dce,	// (0x00062463) cell_dialer2_keypad_pane_g1_ParamLimits

0x5dce,	// (0x00062463) cell_dialer2_keypad_pane_g1

0x1d91,	// (0x0005e426) aid_placing_vt_set_content_ParamLimits

0x1d91,	// (0x0005e426) aid_placing_vt_set_content

0x1dbd,	// (0x0005e452) aid_placing_vt_set_title_ParamLimits

0x1dbd,	// (0x0005e452) aid_placing_vt_set_title

0x0f3f,	// (0x0005d5d4) main_image3_pane

0x5e68,	// (0x000624fd) area_side_right_pane_cp01_ParamLimits

0x5e68,	// (0x000624fd) area_side_right_pane_cp01

0x5e95,	// (0x0006252a) main_image3_pane_g1_ParamLimits

0x5e95,	// (0x0006252a) main_image3_pane_g1

0x5ea3,	// (0x00062538) main_image3_pane_g2_ParamLimits

0x5ea3,	// (0x00062538) main_image3_pane_g2

0x5ebc,	// (0x00062551) main_image3_pane_g3_ParamLimits

0x5ebc,	// (0x00062551) main_image3_pane_g3

0x5ed5,	// (0x0006256a) main_image3_pane_g4_ParamLimits

0x5ed5,	// (0x0006256a) main_image3_pane_g4

0x0003,

0xf6eb,	// (0x0006bd80) main_image3_pane_g_ParamLimits

0xf6eb,	// (0x0006bd80) main_image3_pane_g

0x5eee,	// (0x00062583) main_image3_pane_t1_ParamLimits

0x5eee,	// (0x00062583) main_image3_pane_t1

0x5f13,	// (0x000625a8) main_image3_pane_t2_ParamLimits

0x5f13,	// (0x000625a8) main_image3_pane_t2

0x5f32,	// (0x000625c7) main_image3_pane_t3_ParamLimits

0x5f32,	// (0x000625c7) main_image3_pane_t3

0x0003,

0xf6f4,	// (0x0006bd89) main_image3_pane_t_ParamLimits

0xf6f4,	// (0x0006bd89) main_image3_pane_t

0xe2dd,	// (0x0006a972) grid_sctrl_middle_pane_cp01_ParamLimits

0xe2dd,	// (0x0006a972) grid_sctrl_middle_pane_cp01

0x5f93,	// (0x00062628) cell_sctrl_middle_pane_cp01_ParamLimits

0x5f93,	// (0x00062628) cell_sctrl_middle_pane_cp01

0x5fa4,	// (0x00062639) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5fa4,	// (0x00062639) cell_sctrl_middle_pane_cp01_g1

0x0f3f,	// (0x0005d5d4) main_call4_pane

0x5fb1,	// (0x00062646) aid_size_button_call4_ParamLimits

0x5fb1,	// (0x00062646) aid_size_button_call4

0x5fe7,	// (0x0006267c) call4_windows_pane_ParamLimits

0x5fe7,	// (0x0006267c) call4_windows_pane

0x5ffc,	// (0x00062691) grid_call4_button_pane_ParamLimits

0x5ffc,	// (0x00062691) grid_call4_button_pane

0x602a,	// (0x000626bf) call4_windows_conf_pane

0x6041,	// (0x000626d6) popup_call4_audio_first_window_ParamLimits

0x6041,	// (0x000626d6) popup_call4_audio_first_window

0x6091,	// (0x00062726) popup_call4_audio_second_window_ParamLimits

0x6091,	// (0x00062726) popup_call4_audio_second_window

0x60aa,	// (0x0006273f) popup_call4_audio_wait_window_ParamLimits

0x60aa,	// (0x0006273f) popup_call4_audio_wait_window

0x60b8,	// (0x0006274d) cell_call4_button_pane_ParamLimits

0x60b8,	// (0x0006274d) cell_call4_button_pane

0x60db,	// (0x00062770) bg_button_pane_cp09_ParamLimits

0x60db,	// (0x00062770) bg_button_pane_cp09

0x60e7,	// (0x0006277c) cell_call4_button_pane_g1_ParamLimits

0x60e7,	// (0x0006277c) cell_call4_button_pane_g1

0x60f4,	// (0x00062789) cell_call4_button_pane_t1_ParamLimits

0x60f4,	// (0x00062789) cell_call4_button_pane_t1

0xd636,	// (0x00069ccb) popup_call4_audio_conf_window_ParamLimits

0xd636,	// (0x00069ccb) popup_call4_audio_conf_window

0x52a4,	// (0x00061939) mup3_progress_pane_t1_ParamLimits

0x52c3,	// (0x00061958) mup3_progress_pane_t2_ParamLimits

0xcfd3,	// (0x00069668) mup3_progress_pane_t3_ParamLimits

0xf631,	// (0x0006bcc6) mup3_progress_pane_t_ParamLimits

0xcff0,	// (0x00069685) mup_progress_pane_cp03_ParamLimits

0x57f3,	// (0x00061e88) mup3_control_keys_pane_g4_copy1

0x5d2a,	// (0x000623bf) mp4_rocker2_pane_ParamLimits

0x5d2a,	// (0x000623bf) mp4_rocker2_pane

0xd64a,	// (0x00069cdf) mp4_rocker2_pane_g1

0xd652,	// (0x00069ce7) mp4_rocker2_pane_g2

0x6138,	// (0x000627cd) mp4_rocker2_pane_g3

0x6140,	// (0x000627d5) mp4_rocker2_pane_g4

0x6148,	// (0x000627dd) mp4_rocker2_pane_g5

0x0004,

0xf6fd,	// (0x0006bd92) mp4_rocker2_pane_g

0x0f3f,	// (0x0005d5d4) main_camera4_pane

0x0f3f,	// (0x0005d5d4) main_video4_pane

0x5a4c,	// (0x000620e1) main_video_tele_dialer_pane_t1_ParamLimits

0x5a4c,	// (0x000620e1) main_video_tele_dialer_pane_t1

0x5a5e,	// (0x000620f3) main_video_tele_dialer_pane_t2_ParamLimits

0x5a5e,	// (0x000620f3) main_video_tele_dialer_pane_t2

0x0001,

0xf6b8,	// (0x0006bd4d) main_video_tele_dialer_pane_t_ParamLimits

0xf6b8,	// (0x0006bd4d) main_video_tele_dialer_pane_t

0x6168,	// (0x000627fd) cam4_autofocus_pane_ParamLimits

0x6168,	// (0x000627fd) cam4_autofocus_pane

0x6182,	// (0x00062817) cam4_image_uncrop_pane_ParamLimits

0x6182,	// (0x00062817) cam4_image_uncrop_pane

0x6199,	// (0x0006282e) cam4_indicators_pane_ParamLimits

0x6199,	// (0x0006282e) cam4_indicators_pane

0x61b5,	// (0x0006284a) main_camera4_pane_g1_ParamLimits

0x61b5,	// (0x0006284a) main_camera4_pane_g1

0x61c1,	// (0x00062856) main_camera4_pane_g2_ParamLimits

0x61c1,	// (0x00062856) main_camera4_pane_g2

0x61c1,	// (0x00062856) main_camera4_pane_g3_ParamLimits

0x61c1,	// (0x00062856) main_camera4_pane_g3

0x61cd,	// (0x00062862) main_camera4_pane_g4_ParamLimits

0x61cd,	// (0x00062862) main_camera4_pane_g4

0x61d9,	// (0x0006286e) main_camera4_pane_g5_ParamLimits

0x61d9,	// (0x0006286e) main_camera4_pane_g5

0x0005,

0xf708,	// (0x0006bd9d) main_camera4_pane_g_ParamLimits

0xf708,	// (0x0006bd9d) main_camera4_pane_g

0x61f3,	// (0x00062888) main_camera4_pane_t1_ParamLimits

0x61f3,	// (0x00062888) main_camera4_pane_t1

0x623b,	// (0x000628d0) bg_tb_trans_pane_cp06

0x6251,	// (0x000628e6) cam4_indicators_pane_g1

0x6262,	// (0x000628f7) cam4_indicators_pane_g2

0x0002,

0xf723,	// (0x0006bdb8) cam4_indicators_pane_g

0x627a,	// (0x0006290f) cam4_indicators_pane_t1

0x62a4,	// (0x00062939) main_video4_pane_g1_ParamLimits

0x62a4,	// (0x00062939) main_video4_pane_g1

0x62b0,	// (0x00062945) main_video4_pane_g2_ParamLimits

0x62b0,	// (0x00062945) main_video4_pane_g2

0x62bc,	// (0x00062951) main_video4_pane_g3_ParamLimits

0x62bc,	// (0x00062951) main_video4_pane_g3

0x62c8,	// (0x0006295d) main_video4_pane_g4_ParamLimits

0x62c8,	// (0x0006295d) main_video4_pane_g4

0x0004,

0xf72a,	// (0x0006bdbf) main_video4_pane_g_ParamLimits

0xf72a,	// (0x0006bdbf) main_video4_pane_g

0x62e8,	// (0x0006297d) vid4_indicators_pane_ParamLimits

0x62e8,	// (0x0006297d) vid4_indicators_pane

0x6307,	// (0x0006299c) video4_image_uncrop_cif_pane_ParamLimits

0x6307,	// (0x0006299c) video4_image_uncrop_cif_pane

0x6316,	// (0x000629ab) video4_image_uncrop_nhd_pane_ParamLimits

0x6316,	// (0x000629ab) video4_image_uncrop_nhd_pane

0x6182,	// (0x00062817) video4_image_uncrop_vga_pane_ParamLimits

0x6182,	// (0x00062817) video4_image_uncrop_vga_pane

0x416d,	// (0x00060802) bg_tb_trans_pane_cp07

0x632b,	// (0x000629c0) vid4_indicators_pane_g1

0x633f,	// (0x000629d4) vid4_indicators_pane_g2

0x6353,	// (0x000629e8) vid4_indicators_pane_g3

0x0004,

0xf735,	// (0x0006bdca) vid4_indicators_pane_g

0x6380,	// (0x00062a15) vid4_indicators_pane_t1

0x6397,	// (0x00062a2c) cam4_autofocus_pane_g1

0x639f,	// (0x00062a34) cam4_autofocus_pane_g2

0x63a7,	// (0x00062a3c) cam4_autofocus_pane_g3

0x0002,

0xf740,	// (0x0006bdd5) cam4_autofocus_pane_g

0x63af,	// (0x00062a44) cam4_autofocus_pane_g3_copy1

0x5a7e,	// (0x00062113) video_down_pane_cp_t1

0x5a8c,	// (0x00062121) video_down_pane_cp_t2

0x0001,

0xf6bd,	// (0x0006bd52) video_down_pane_cp_t

0x0f25,	// (0x0005d5ba) popup_vitu2_window_ParamLimits

0x0f25,	// (0x0005d5ba) popup_vitu2_window

0x63b7,	// (0x00062a4c) aid_size_cell2_itu2_ParamLimits

0x63b7,	// (0x00062a4c) aid_size_cell2_itu2

0x63d9,	// (0x00062a6e) aid_size_cell_itu2_ParamLimits

0x63d9,	// (0x00062a6e) aid_size_cell_itu2

0x641d,	// (0x00062ab2) bg_popup_window_pane_cp09_ParamLimits

0x641d,	// (0x00062ab2) bg_popup_window_pane_cp09

0x642b,	// (0x00062ac0) field_vitu2_entry_pane_ParamLimits

0x642b,	// (0x00062ac0) field_vitu2_entry_pane

0x644b,	// (0x00062ae0) grid_vitu2_function_pane_ParamLimits

0x644b,	// (0x00062ae0) grid_vitu2_function_pane

0x648f,	// (0x00062b24) grid_vitu2_itu_pane_ParamLimits

0x648f,	// (0x00062b24) grid_vitu2_itu_pane

0x6509,	// (0x00062b9e) cell_vitu2_itu_pane_ParamLimits

0x6509,	// (0x00062b9e) cell_vitu2_itu_pane

0x6522,	// (0x00062bb7) cell_vitu2_function_pane_ParamLimits

0x6522,	// (0x00062bb7) cell_vitu2_function_pane

0xd65a,	// (0x00069cef) bg_popup_call_pane_cp08_ParamLimits

0xd65a,	// (0x00069cef) bg_popup_call_pane_cp08

0xd671,	// (0x00069d06) field_vitu2_entry_pane_g1

0xd67d,	// (0x00069d12) field_vitu2_entry_pane_g2

0x0002,

0x0566,	// (0x0005cbfb) field_vitu2_entry_pane_g

0x6563,	// (0x00062bf8) field_vitu2_entry_pane_t1_ParamLimits

0x6563,	// (0x00062bf8) field_vitu2_entry_pane_t1

0xa0b1,	// (0x00066746) field_vitu2_entry_pane_t2_ParamLimits

0xa0b1,	// (0x00066746) field_vitu2_entry_pane_t2

0x0001,

0xf747,	// (0x0006bddc) field_vitu2_entry_pane_t_ParamLimits

0xf747,	// (0x0006bddc) field_vitu2_entry_pane_t

0x6595,	// (0x00062c2a) bg_button_pane_cp010_ParamLimits

0x6595,	// (0x00062c2a) bg_button_pane_cp010

0x65a3,	// (0x00062c38) cell_vitu2_itu_pane_g1

0x65c3,	// (0x00062c58) cell_vitu2_itu_pane_t1_ParamLimits

0x65c3,	// (0x00062c58) cell_vitu2_itu_pane_t1

0x0b94,	// (0x0005d229) cell_vitu2_itu_pane_t2_ParamLimits

0x0b94,	// (0x0005d229) cell_vitu2_itu_pane_t2

0x0002,

0xf751,	// (0x0006bde6) cell_vitu2_itu_pane_t_ParamLimits

0xf751,	// (0x0006bde6) cell_vitu2_itu_pane_t

0x416d,	// (0x00060802) bg_button_pane_cp011

0x660f,	// (0x00062ca4) cell_vitu2_function_pane_g1

0x0f3f,	// (0x0005d5d4) main_myfav_hc_pane

0x5f74,	// (0x00062609) popup_image3_note_pane_ParamLimits

0x5f74,	// (0x00062609) popup_image3_note_pane

0x5f82,	// (0x00062617) popup_image3_tool_bar_pane_ParamLimits

0x5f82,	// (0x00062617) popup_image3_tool_bar_pane

0x0c0a,	// (0x0005d29f) cell_vitu2_itu_pane_t3_ParamLimits

0x0c0a,	// (0x0005d29f) cell_vitu2_itu_pane_t3

0x9b9f,	// (0x00066234) bg_popup_trans_pane

0xd69f,	// (0x00069d34) grid_image3_tool_bar_pane

0xd6a9,	// (0x00069d3e) bg_popup_trans_pane_g1

0xacde,	// (0x00067373) bg_popup_trans_pane_g2

0xd6b1,	// (0x00069d46) bg_popup_trans_pane_g3

0xd6b9,	// (0x00069d4e) bg_popup_trans_pane_g4

0xd6c1,	// (0x00069d56) bg_popup_trans_pane_g5

0xd6c9,	// (0x00069d5e) bg_popup_trans_pane_g6

0xd6d1,	// (0x00069d66) bg_popup_trans_pane_g7

0xd6d9,	// (0x00069d6e) bg_popup_trans_pane_g8

0xacbe,	// (0x00067353) bg_popup_trans_pane_g9

0x0008,

0xf758,	// (0x0006bded) bg_popup_trans_pane_g

0xd6e1,	// (0x00069d76) cell_image3_tool_bar_pane_ParamLimits

0xd6e1,	// (0x00069d76) cell_image3_tool_bar_pane

0xcd13,	// (0x000693a8) cell_image3_tool_bar_pane_g1

0x9b9f,	// (0x00066234) bg_popup_trans_pane_cp1

0xd6f5,	// (0x00069d8a) popup_image3_note_pane_t1

0xd703,	// (0x00069d98) popup_image3_note_pane_t2

0xd711,	// (0x00069da6) popup_image3_note_pane_t3

0x0002,

0x0591,	// (0x0005cc26) popup_image3_note_pane_t

0xd71f,	// (0x00069db4) popup_image3_note_pane_t3_copy1

0x6623,	// (0x00062cb8) bg_myfav_hc_instruction_pane_ParamLimits

0x6623,	// (0x00062cb8) bg_myfav_hc_instruction_pane

0x663b,	// (0x00062cd0) cell_myfav_contact_pane_ParamLimits

0x663b,	// (0x00062cd0) cell_myfav_contact_pane

0x6655,	// (0x00062cea) cell_myfav_contact_pane_cp1_ParamLimits

0x6655,	// (0x00062cea) cell_myfav_contact_pane_cp1

0x666d,	// (0x00062d02) cell_myfav_contact_pane_cp2_ParamLimits

0x666d,	// (0x00062d02) cell_myfav_contact_pane_cp2

0x6685,	// (0x00062d1a) cell_myfav_contact_pane_cp3_ParamLimits

0x6685,	// (0x00062d1a) cell_myfav_contact_pane_cp3

0x669c,	// (0x00062d31) cell_myfav_contact_pane_cp4_ParamLimits

0x669c,	// (0x00062d31) cell_myfav_contact_pane_cp4

0x66b2,	// (0x00062d47) cell_myfav_contact_pane_cp5_ParamLimits

0x66b2,	// (0x00062d47) cell_myfav_contact_pane_cp5

0x66c6,	// (0x00062d5b) cell_myfav_contact_pane_cp6_ParamLimits

0x66c6,	// (0x00062d5b) cell_myfav_contact_pane_cp6

0x66da,	// (0x00062d6f) cell_myfav_contact_pane_cp7_ParamLimits

0x66da,	// (0x00062d6f) cell_myfav_contact_pane_cp7

0xd72d,	// (0x00069dc2) listscroll_gen_pane_cp05

0x66f2,	// (0x00062d87) main_myfav_hc_pane_g1_ParamLimits

0x66f2,	// (0x00062d87) main_myfav_hc_pane_g1

0x6708,	// (0x00062d9d) main_myfav_hc_pane_g2_ParamLimits

0x6708,	// (0x00062d9d) main_myfav_hc_pane_g2

0x0002,

0xf76b,	// (0x0006be00) main_myfav_hc_pane_g_ParamLimits

0xf76b,	// (0x0006be00) main_myfav_hc_pane_g

0x6738,	// (0x00062dcd) main_myfav_hc_pane_t1_ParamLimits

0x6738,	// (0x00062dcd) main_myfav_hc_pane_t1

0xd736,	// (0x00069dcb) main_myfav_hc_pane_t2_ParamLimits

0xd736,	// (0x00069dcb) main_myfav_hc_pane_t2

0xd748,	// (0x00069ddd) main_myfav_hc_pane_t3_ParamLimits

0xd748,	// (0x00069ddd) main_myfav_hc_pane_t3

0x674f,	// (0x00062de4) main_myfav_hc_pane_t4_ParamLimits

0x674f,	// (0x00062de4) main_myfav_hc_pane_t4

0x0004,

0xf772,	// (0x0006be07) main_myfav_hc_pane_t_ParamLimits

0xf772,	// (0x0006be07) main_myfav_hc_pane_t

0xcd13,	// (0x000693a8) bg_myfav_hc_instruction_pane_g1

0xd75a,	// (0x00069def) cell_myfav_contact_pane_g1_ParamLimits

0xd75a,	// (0x00069def) cell_myfav_contact_pane_g1

0xd75a,	// (0x00069def) cell_myfav_contact_pane_g2_ParamLimits

0xd75a,	// (0x00069def) cell_myfav_contact_pane_g2

0xd766,	// (0x00069dfb) cell_myfav_contact_pane_g3_ParamLimits

0xd766,	// (0x00069dfb) cell_myfav_contact_pane_g3

0xcfbd,	// (0x00069652) cell_myfav_contact_pane_g4_ParamLimits

0xcfbd,	// (0x00069652) cell_myfav_contact_pane_g4

0xd773,	// (0x00069e08) cell_myfav_contact_pane_g5_ParamLimits

0xd773,	// (0x00069e08) cell_myfav_contact_pane_g5

0x0004,

0x05aa,	// (0x0005cc3f) cell_myfav_contact_pane_g_ParamLimits

0x05aa,	// (0x0005cc3f) cell_myfav_contact_pane_g

0x6720,	// (0x00062db5) main_myfav_hc_pane_g3_ParamLimits

0x6720,	// (0x00062db5) main_myfav_hc_pane_g3

0x0e2e,	// (0x0005d4c3) popup_adpt_find_window

0x6779,	// (0x00062e0e) afind_page_pane_ParamLimits

0x6779,	// (0x00062e0e) afind_page_pane

0x6786,	// (0x00062e1b) aid_size_cell_afind_ParamLimits

0x6786,	// (0x00062e1b) aid_size_cell_afind

0x67a0,	// (0x00062e35) bg_popup_sub_pane_cp09_ParamLimits

0x67a0,	// (0x00062e35) bg_popup_sub_pane_cp09

0x67ad,	// (0x00062e42) find_pane_cp01_ParamLimits

0x67ad,	// (0x00062e42) find_pane_cp01

0xd77f,	// (0x00069e14) grid_afind_control_pane_ParamLimits

0xd77f,	// (0x00069e14) grid_afind_control_pane

0x67ba,	// (0x00062e4f) grid_afind_pane_ParamLimits

0x67ba,	// (0x00062e4f) grid_afind_pane

0x67d4,	// (0x00062e69) cell_afind_pane_ParamLimits

0x67d4,	// (0x00062e69) cell_afind_pane

0xcd13,	// (0x000693a8) afind_page_pane_g1

0x681c,	// (0x00062eb1) afind_page_pane_g2

0x6825,	// (0x00062eba) afind_page_pane_g3

0x0002,

0xf77d,	// (0x0006be12) afind_page_pane_g

0x682e,	// (0x00062ec3) afind_page_pane_t1

0xd793,	// (0x00069e28) cell_afind_grid_control_pane_ParamLimits

0xd793,	// (0x00069e28) cell_afind_grid_control_pane

0xd622,	// (0x00069cb7) bg_button_pane_cp69_ParamLimits

0xd622,	// (0x00069cb7) bg_button_pane_cp69

0x684e,	// (0x00062ee3) cell_afind_pane_g1_ParamLimits

0x684e,	// (0x00062ee3) cell_afind_pane_g1

0x685b,	// (0x00062ef0) cell_afind_pane_t1_ParamLimits

0x685b,	// (0x00062ef0) cell_afind_pane_t1

0xaad7,	// (0x0006716c) bg_button_pane_cp72

0xd7a2,	// (0x00069e37) cell_afind_grid_control_pane_g1

0x3ce5,	// (0x0006037a) aid_image_placing_area_ParamLimits

0x3ce5,	// (0x0006037a) aid_image_placing_area

0xd2e3,	// (0x00069978) field_vitu_entry_pane_g1_ParamLimits

0xd2e3,	// (0x00069978) field_vitu_entry_pane_g1

0xd2ef,	// (0x00069984) field_vitu_entry_pane_g2_ParamLimits

0xd2ef,	// (0x00069984) field_vitu_entry_pane_g2

0x0001,

0x0462,	// (0x0005caf7) field_vitu_entry_pane_g_ParamLimits

0x0462,	// (0x0005caf7) field_vitu_entry_pane_g

0x587c,	// (0x00061f11) cell_vitu_itu_pane_g1_ParamLimits

0x58be,	// (0x00061f53) cell_vitu_itu_pane_t3_ParamLimits

0x58be,	// (0x00061f53) cell_vitu_itu_pane_t3

0xd5cb,	// (0x00069c60) mp4_progress_pane_t1_ParamLimits

0xd5e4,	// (0x00069c79) mp4_progress_pane_t2_ParamLimits

0x04fb,	// (0x0005cb90) mp4_progress_pane_t_ParamLimits

0xd5fd,	// (0x00069c92) mup_progress_pane_cp04_ParamLimits

0x6763,	// (0x00062df8) main_myfav_hc_pane_t5_ParamLimits

0x6763,	// (0x00062df8) main_myfav_hc_pane_t5

0x0cbc,	// (0x0005d351) aid_zoom_text_primary

0x0e2e,	// (0x0005d4c3) popup_adpt_find_window_ParamLimits

0x416d,	// (0x00060802) main_cam_set_pane

0x61a7,	// (0x0006283c) cam4_zoom_pane_ParamLimits

0x61a7,	// (0x0006283c) cam4_zoom_pane

0x686d,	// (0x00062f02) main_cam_set_pane_g1_ParamLimits

0x686d,	// (0x00062f02) main_cam_set_pane_g1

0x687b,	// (0x00062f10) main_cam_set_pane_g2_ParamLimits

0x687b,	// (0x00062f10) main_cam_set_pane_g2

0x0001,

0xf784,	// (0x0006be19) main_cam_set_pane_g_ParamLimits

0xf784,	// (0x0006be19) main_cam_set_pane_g

0x6887,	// (0x00062f1c) main_cam_set_pane_t1_ParamLimits

0x6887,	// (0x00062f1c) main_cam_set_pane_t1

0x68a3,	// (0x00062f38) main_cset_listscroll_pane_ParamLimits

0x68a3,	// (0x00062f38) main_cset_listscroll_pane

0x68ce,	// (0x00062f63) main_cset_slider_pane_ParamLimits

0x68ce,	// (0x00062f63) main_cset_slider_pane

0xd7b3,	// (0x00069e48) main_cset_list_pane_ParamLimits

0xd7b3,	// (0x00069e48) main_cset_list_pane

0xd7c3,	// (0x00069e58) scroll_pane_cp028

0x68ed,	// (0x00062f82) aid_area_touch_slider

0x6909,	// (0x00062f9e) cset_slider_pane

0x6933,	// (0x00062fc8) main_cset_slider_pane_g1

0x6948,	// (0x00062fdd) main_cset_slider_pane_g2

0x0011,

0xf789,	// (0x0006be1e) main_cset_slider_pane_g

0xd7fc,	// (0x00069e91) main_cset_slider_pane_t1

0x6a0e,	// (0x000630a3) main_cset_slider_pane_t2

0x6a28,	// (0x000630bd) main_cset_slider_pane_t3

0x6a42,	// (0x000630d7) main_cset_slider_pane_t4

0x6a60,	// (0x000630f5) main_cset_slider_pane_t5

0x6a7e,	// (0x00063113) main_cset_slider_pane_t6

0x6a95,	// (0x0006312a) main_cset_slider_pane_t7

0x000e,

0xf7ae,	// (0x0006be43) main_cset_slider_pane_t

0x6ba3,	// (0x00063238) cset_list_set_pane_ParamLimits

0x6ba3,	// (0x00063238) cset_list_set_pane

0x6bbc,	// (0x00063251) aid_position_infowindow_above

0x6bc4,	// (0x00063259) aid_position_infowindow_below

0x6bcc,	// (0x00063261) cset_list_set_pane_g1_ParamLimits

0x6bcc,	// (0x00063261) cset_list_set_pane_g1

0x6bd8,	// (0x0006326d) cset_list_set_pane_g3_ParamLimits

0x6bd8,	// (0x0006326d) cset_list_set_pane_g3

0x0001,

0xf7cd,	// (0x0006be62) cset_list_set_pane_g_ParamLimits

0xf7cd,	// (0x0006be62) cset_list_set_pane_g

0x6be7,	// (0x0006327c) cset_list_set_pane_t1_ParamLimits

0x6be7,	// (0x0006327c) cset_list_set_pane_t1

0xa6a6,	// (0x00066d3b) list_highlight_pane_cp021_ParamLimits

0xa6a6,	// (0x00066d3b) list_highlight_pane_cp021

0xb5fc,	// (0x00067c91) cset_slider_pane_g1

0xb60e,	// (0x00067ca3) cset_slider_pane_g2

0xb605,	// (0x00067c9a) cset_slider_pane_g3

0x0002,

0x060a,	// (0x0005cc9f) cset_slider_pane_g

0x6bfc,	// (0x00063291) aid_area_touch_cam4_zoom

0x6c04,	// (0x00063299) cam4_zoom_cont_pane

0x6c0c,	// (0x000632a1) cam4_zoom_pane_g1

0x6c14,	// (0x000632a9) cam4_zoom_pane_g2

0x6c1c,	// (0x000632b1) cam4_zoom_pane_g3

0x0002,

0xf7d2,	// (0x0006be67) cam4_zoom_pane_g

0x6c24,	// (0x000632b9) cam4_zoom_cont_pane_g1

0x6c2d,	// (0x000632c2) cam4_zoom_cont_pane_g2

0x6c36,	// (0x000632cb) cam4_zoom_cont_pane_g3

0x0002,

0xf7d9,	// (0x0006be6e) cam4_zoom_cont_pane_g

0x5fcb,	// (0x00062660) call4_image_pane_ParamLimits

0x5fcb,	// (0x00062660) call4_image_pane

0x602a,	// (0x000626bf) call4_windows_conf_pane_ParamLimits

0x606f,	// (0x00062704) popup_call4_audio_in_window_ParamLimits

0x606f,	// (0x00062704) popup_call4_audio_in_window

0x9b9f,	// (0x00066234) bg_popup_call2_act_pane_cp02

0xd62e,	// (0x00069cc3) call4_list_conf_pane

0xcd13,	// (0x000693a8) call4_image_pane_g1

0xcd13,	// (0x000693a8) call4_image_pane_g2

0x0001,

0x0323,	// (0x0005c9b8) call4_image_pane_g

0xd89c,	// (0x00069f31) list_single_graphic_popup_conf4_pane_ParamLimits

0xd89c,	// (0x00069f31) list_single_graphic_popup_conf4_pane

0x9b9f,	// (0x00066234) list_highlight_pane_cp022

0xd8af,	// (0x00069f44) list_single_graphic_popup_conf4_pane_g1

0xb206,	// (0x0006789b) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf7e0,	// (0x0006be75) list_single_graphic_popup_conf4_pane_g

0xd8b7,	// (0x00069f4c) list_single_graphic_popup_conf4_pane_t1

0x1f21,	// (0x0005e5b6) popup_vtel_slider_window_ParamLimits

0x1f21,	// (0x0005e5b6) popup_vtel_slider_window

0xd610,	// (0x00069ca5) dialer2_ne_pane_t2_ParamLimits

0xd610,	// (0x00069ca5) dialer2_ne_pane_t2

0x0001,

0xf6e1,	// (0x0006bd76) dialer2_ne_pane_t_ParamLimits

0xf6e1,	// (0x0006bd76) dialer2_ne_pane_t

0xa6a6,	// (0x00066d3b) bg_popup_sub_pane_cp010_ParamLimits

0xa6a6,	// (0x00066d3b) bg_popup_sub_pane_cp010

0x6c3f,	// (0x000632d4) popup_vtel_slider_window_g1_ParamLimits

0x6c3f,	// (0x000632d4) popup_vtel_slider_window_g1

0x6c4b,	// (0x000632e0) popup_vtel_slider_window_g2_ParamLimits

0x6c4b,	// (0x000632e0) popup_vtel_slider_window_g2

0x0003,

0xf7e5,	// (0x0006be7a) popup_vtel_slider_window_g_ParamLimits

0xf7e5,	// (0x0006be7a) popup_vtel_slider_window_g

0x6c93,	// (0x00063328) vtel_slider_pane_ParamLimits

0x6c93,	// (0x00063328) vtel_slider_pane

0x6ca2,	// (0x00063337) vtel_slider_pane_g1_ParamLimits

0x6ca2,	// (0x00063337) vtel_slider_pane_g1

0x6caf,	// (0x00063344) vtel_slider_pane_g2_ParamLimits

0x6caf,	// (0x00063344) vtel_slider_pane_g2

0x6cbc,	// (0x00063351) vtel_slider_pane_g3_ParamLimits

0x6cbc,	// (0x00063351) vtel_slider_pane_g3

0x6ca2,	// (0x00063337) vtel_slider_pane_g4_ParamLimits

0x6ca2,	// (0x00063337) vtel_slider_pane_g4

0x6cc9,	// (0x0006335e) vtel_slider_pane_g5_ParamLimits

0x6cc9,	// (0x0006335e) vtel_slider_pane_g5

0x0004,

0xf7ee,	// (0x0006be83) vtel_slider_pane_g_ParamLimits

0xf7ee,	// (0x0006be83) vtel_slider_pane_g

0x416d,	// (0x00060802) main_gallery2_pane

0x63ff,	// (0x00062a94) aid_size_row_itut2_dropdow_list_ParamLimits

0x63ff,	// (0x00062a94) aid_size_row_itut2_dropdow_list

0x646d,	// (0x00062b02) grid_vitu2_function_top_pane_ParamLimits

0x646d,	// (0x00062b02) grid_vitu2_function_top_pane

0x64c7,	// (0x00062b5c) popup_vitu2_dropdown_list_window_ParamLimits

0x64c7,	// (0x00062b5c) popup_vitu2_dropdown_list_window

0x64e7,	// (0x00062b7c) popup_vitu2_match_list_window

0x6ce4,	// (0x00063379) cell_vitu2_function_top_pane_ParamLimits

0x6ce4,	// (0x00063379) cell_vitu2_function_top_pane

0x6cfe,	// (0x00063393) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6cfe,	// (0x00063393) cell_vitu2_function_top_pane_cp01

0x6d1a,	// (0x000633af) cell_vitu2_function_top_wide_pane_ParamLimits

0x6d1a,	// (0x000633af) cell_vitu2_function_top_wide_pane

0x416d,	// (0x00060802) bg_button_pane_cp012

0x6d36,	// (0x000633cb) cell_vitu2_function_top_pane_g1

0x6d4a,	// (0x000633df) bg_button_pane_cp013_ParamLimits

0x6d4a,	// (0x000633df) bg_button_pane_cp013

0x6d66,	// (0x000633fb) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6d66,	// (0x000633fb) cell_vitu2_function_top_wide_pane_g1

0x0f25,	// (0x0005d5ba) bg_popup_sub_pane_cp20

0x6d7e,	// (0x00063413) list_vitu2_match_list_pane

0xd6a9,	// (0x00069d3e) bg_popup_sub_pane_cp20_g1

0xd6b1,	// (0x00069d46) bg_popup_sub_pane_cp20_g2

0xacde,	// (0x00067373) bg_popup_sub_pane_cp20_g3

0xd6b9,	// (0x00069d4e) bg_popup_sub_pane_cp20_g4

0xacbe,	// (0x00067353) bg_popup_sub_pane_cp20_g5

0xd8cd,	// (0x00069f62) bg_popup_sub_pane_cp20_g6

0xd6c9,	// (0x00069d5e) bg_popup_sub_pane_cp20_g7

0xd6d1,	// (0x00069d66) bg_popup_sub_pane_cp20_g8

0xd6d9,	// (0x00069d6e) bg_popup_sub_pane_cp20_g9

0x0008,

0xf7f9,	// (0x0006be8e) bg_popup_sub_pane_cp20_g

0x6d96,	// (0x0006342b) list_vitu2_match_list_item_pane_ParamLimits

0x6d96,	// (0x0006342b) list_vitu2_match_list_item_pane

0x6da8,	// (0x0006343d) list_vitu2_match_list_item_pane_t1

0x0f3f,	// (0x0005d5d4) bg_popup_sub_pane_cp21

0x6dfe,	// (0x00063493) grid_vitu2_dropdown_list_pane

0x6e06,	// (0x0006349b) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6e06,	// (0x0006349b) cell_vitu2_dropdown_list_char_pane

0x6e27,	// (0x000634bc) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6e27,	// (0x000634bc) cell_vitu2_dropdown_list_ctrl_pane

0xd8d5,	// (0x00069f6a) cell_vitu2_dropdown_list_char_pane_g1

0xd8de,	// (0x00069f73) cell_vitu2_dropdown_list_char_pane_g2

0xd8e7,	// (0x00069f7c) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf816,	// (0x0006beab) cell_vitu2_dropdown_list_char_pane_g

0x6e53,	// (0x000634e8) cell_vitu2_dropdown_list_char_pane_t1

0x6e61,	// (0x000634f6) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e61,	// (0x000634f6) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6e71,	// (0x00063506) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6e71,	// (0x00063506) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6e82,	// (0x00063517) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6e82,	// (0x00063517) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6e92,	// (0x00063527) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6e92,	// (0x00063527) cell_vitu2_dropdown_list_ctrl_pane_g4

0x623b,	// (0x000628d0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x623b,	// (0x000628d0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf81d,	// (0x0006beb2) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf81d,	// (0x0006beb2) cell_vitu2_dropdown_list_ctrl_pane_g

0x6eae,	// (0x00063543) aid_size_cell_gallery2_ParamLimits

0x6eae,	// (0x00063543) aid_size_cell_gallery2

0x6ec8,	// (0x0006355d) grid_gallery2_pane_ParamLimits

0x6ec8,	// (0x0006355d) grid_gallery2_pane

0x6edf,	// (0x00063574) scroll_pane_cp029_ParamLimits

0x6edf,	// (0x00063574) scroll_pane_cp029

0x6eef,	// (0x00063584) cell_gallery2_pane_ParamLimits

0x6eef,	// (0x00063584) cell_gallery2_pane

0xd8f0,	// (0x00069f85) cell_gallery2_pane_g2

0x6f44,	// (0x000635d9) cell_gallery2_pane_g3

0xd8f8,	// (0x00069f8d) cell_gallery2_pane_g4

0xd900,	// (0x00069f95) cell_gallery2_pane_g5

0xaa5e,	// (0x000670f3) grid_highlight_pane_cp10

0x64e7,	// (0x00062b7c) popup_vitu2_match_list_window_ParamLimits

0x64f9,	// (0x00062b8e) popup_vitu2_query_window_ParamLimits

0x64f9,	// (0x00062b8e) popup_vitu2_query_window

0x0f3f,	// (0x0005d5d4) bg_vitu2_candi_button_pane

0xd8d5,	// (0x00069f6a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8de,	// (0x00069f73) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8e7,	// (0x00069f7c) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f4c,	// (0x000635e1) bg_button_pane_cp015

0x6f5e,	// (0x000635f3) bg_button_pane_cp016

0x6f71,	// (0x00063606) bg_button_pane_cp017

0xc90b,	// (0x00068fa0) bg_popup_sub_pane_cp22

0xd908,	// (0x00069f9d) popup_vitu2_query_window_g1

0x6fb6,	// (0x0006364b) popup_vitu2_query_window_g2

0x0002,

0xf828,	// (0x0006bebd) popup_vitu2_query_window_g

0x6fd3,	// (0x00063668) popup_vitu2_query_window_t1_ParamLimits

0x6fd3,	// (0x00063668) popup_vitu2_query_window_t1

0x7006,	// (0x0006369b) popup_vitu2_query_window_t2_ParamLimits

0x7006,	// (0x0006369b) popup_vitu2_query_window_t2

0x7018,	// (0x000636ad) popup_vitu2_query_window_t3_ParamLimits

0x7018,	// (0x000636ad) popup_vitu2_query_window_t3

0x7040,	// (0x000636d5) popup_vitu2_query_window_t4_ParamLimits

0x7040,	// (0x000636d5) popup_vitu2_query_window_t4

0x7061,	// (0x000636f6) popup_vitu2_query_window_t5_ParamLimits

0x7061,	// (0x000636f6) popup_vitu2_query_window_t5

0x0006,

0xf82f,	// (0x0006bec4) popup_vitu2_query_window_t_ParamLimits

0xf82f,	// (0x0006bec4) popup_vitu2_query_window_t

0xd7ab,	// (0x00069e40) main_cset_text_pane

0x68ed,	// (0x00062f82) aid_area_touch_slider_ParamLimits

0x6909,	// (0x00062f9e) cset_slider_pane_ParamLimits

0x6933,	// (0x00062fc8) main_cset_slider_pane_g1_ParamLimits

0x6948,	// (0x00062fdd) main_cset_slider_pane_g2_ParamLimits

0xd7cc,	// (0x00069e61) main_cset_slider_pane_g3_ParamLimits

0xd7cc,	// (0x00069e61) main_cset_slider_pane_g3

0x695d,	// (0x00062ff2) main_cset_slider_pane_g4_ParamLimits

0x695d,	// (0x00062ff2) main_cset_slider_pane_g4

0x696c,	// (0x00063001) main_cset_slider_pane_g5_ParamLimits

0x696c,	// (0x00063001) main_cset_slider_pane_g5

0x697a,	// (0x0006300f) main_cset_slider_pane_g6_ParamLimits

0x697a,	// (0x0006300f) main_cset_slider_pane_g6

0xf789,	// (0x0006be1e) main_cset_slider_pane_g_ParamLimits

0xd7fc,	// (0x00069e91) main_cset_slider_pane_t1_ParamLimits

0x6a0e,	// (0x000630a3) main_cset_slider_pane_t2_ParamLimits

0x6a28,	// (0x000630bd) main_cset_slider_pane_t3_ParamLimits

0x6a42,	// (0x000630d7) main_cset_slider_pane_t4_ParamLimits

0x6a60,	// (0x000630f5) main_cset_slider_pane_t5_ParamLimits

0x6a7e,	// (0x00063113) main_cset_slider_pane_t6_ParamLimits

0x6a95,	// (0x0006312a) main_cset_slider_pane_t7_ParamLimits

0x6ac3,	// (0x00063158) main_cset_slider_pane_t8_ParamLimits

0x6ac3,	// (0x00063158) main_cset_slider_pane_t8

0x6aeb,	// (0x00063180) main_cset_slider_pane_t9_ParamLimits

0x6aeb,	// (0x00063180) main_cset_slider_pane_t9

0x6b13,	// (0x000631a8) main_cset_slider_pane_t10_ParamLimits

0x6b13,	// (0x000631a8) main_cset_slider_pane_t10

0x6b3b,	// (0x000631d0) main_cset_slider_pane_t11_ParamLimits

0x6b3b,	// (0x000631d0) main_cset_slider_pane_t11

0x6b65,	// (0x000631fa) main_cset_slider_pane_t12_ParamLimits

0x6b65,	// (0x000631fa) main_cset_slider_pane_t12

0x6b84,	// (0x00063219) main_cset_slider_pane_t13_ParamLimits

0x6b84,	// (0x00063219) main_cset_slider_pane_t13

0xf7ae,	// (0x0006be43) main_cset_slider_pane_t_ParamLimits

0x9b9f,	// (0x00066234) bg_popup_sub_pane_cp011

0xd914,	// (0x00069fa9) main_cset_text_pane_g1

0xd91c,	// (0x00069fb1) main_cset_text_pane_t1

0xd92a,	// (0x00069fbf) main_cset_text_pane_t2

0xd938,	// (0x00069fcd) main_cset_text_pane_t3

0xd946,	// (0x00069fdb) main_cset_text_pane_t4

0xd99b,	// (0x0006a030) main_cset_text_pane_t5

0xd9a9,	// (0x0006a03e) main_cset_text_pane_t6

0xd9b7,	// (0x0006a04c) main_cset_text_pane_t7

0x0006,

0xf83e,	// (0x0006bed3) main_cset_text_pane_t

0x0f3f,	// (0x0005d5d4) main_cam4_burst_pane

0x0f3f,	// (0x0005d5d4) main_cam5_pane

0x683c,	// (0x00062ed1) bg_button_pane_cp019

0x6845,	// (0x00062eda) bg_button_pane_cp020

0xd7d8,	// (0x00069e6d) main_cset_slider_pane_g7_ParamLimits

0xd7d8,	// (0x00069e6d) main_cset_slider_pane_g7

0xd7e4,	// (0x00069e79) main_cset_slider_pane_g8_ParamLimits

0xd7e4,	// (0x00069e79) main_cset_slider_pane_g8

0x698e,	// (0x00063023) main_cset_slider_pane_g9_ParamLimits

0x698e,	// (0x00063023) main_cset_slider_pane_g9

0x699a,	// (0x0006302f) main_cset_slider_pane_g10_ParamLimits

0x699a,	// (0x0006302f) main_cset_slider_pane_g10

0x69a6,	// (0x0006303b) main_cset_slider_pane_g11_ParamLimits

0x69a6,	// (0x0006303b) main_cset_slider_pane_g11

0x69b2,	// (0x00063047) main_cset_slider_pane_g12_ParamLimits

0x69b2,	// (0x00063047) main_cset_slider_pane_g12

0x69be,	// (0x00063053) main_cset_slider_pane_g13_ParamLimits

0x69be,	// (0x00063053) main_cset_slider_pane_g13

0x69cc,	// (0x00063061) main_cset_slider_pane_g14_ParamLimits

0x69cc,	// (0x00063061) main_cset_slider_pane_g14

0x69da,	// (0x0006306f) main_cset_slider_pane_g15_ParamLimits

0x69da,	// (0x0006306f) main_cset_slider_pane_g15

0xd82a,	// (0x00069ebf) main_cset_slider_pane_t14_ParamLimits

0xd82a,	// (0x00069ebf) main_cset_slider_pane_t14

0xd863,	// (0x00069ef8) main_cset_slider_pane_t15_ParamLimits

0xd863,	// (0x00069ef8) main_cset_slider_pane_t15

0x70d8,	// (0x0006376d) aid_cam4_burst_size_cell_ParamLimits

0x70d8,	// (0x0006376d) aid_cam4_burst_size_cell

0x70f4,	// (0x00063789) grid_cam4_burst_pane_ParamLimits

0x70f4,	// (0x00063789) grid_cam4_burst_pane

0x7124,	// (0x000637b9) linegrid_cam4_burst_pane_ParamLimits

0x7124,	// (0x000637b9) linegrid_cam4_burst_pane

0x7144,	// (0x000637d9) scroll_pane_cp30_ParamLimits

0x7144,	// (0x000637d9) scroll_pane_cp30

0x7150,	// (0x000637e5) cell_cam4_burst_pane_ParamLimits

0x7150,	// (0x000637e5) cell_cam4_burst_pane

0xd9c5,	// (0x0006a05a) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9c5,	// (0x0006a05a) linegrid_cam4_burst_pane_g1

0x718c,	// (0x00063821) linegrid_cam4_burst_pane_g2_ParamLimits

0x718c,	// (0x00063821) linegrid_cam4_burst_pane_g2

0xd9d2,	// (0x0006a067) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9d2,	// (0x0006a067) linegrid_cam4_burst_pane_g3

0x0002,

0xf84d,	// (0x0006bee2) linegrid_cam4_burst_pane_g_ParamLimits

0xf84d,	// (0x0006bee2) linegrid_cam4_burst_pane_g

0x719d,	// (0x00063832) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x719d,	// (0x00063832) linegrid_cam4_burst_pane_g3_copy1

0xd9df,	// (0x0006a074) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9df,	// (0x0006a074) linegrid_cam4_burst_pane_g4

0x71b7,	// (0x0006384c) linegrid_cam4_burst_pane_g5_ParamLimits

0x71b7,	// (0x0006384c) linegrid_cam4_burst_pane_g5

0x71c8,	// (0x0006385d) linegrid_cam4_burst_pane_g6_ParamLimits

0x71c8,	// (0x0006385d) linegrid_cam4_burst_pane_g6

0xd9ec,	// (0x0006a081) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9ec,	// (0x0006a081) linegrid_cam4_burst_pane_g7

0x71d9,	// (0x0006386e) cell_cam4_burst_pane_g1

0xda05,	// (0x0006a09a) main_cam5_pane_t1_ParamLimits

0xda05,	// (0x0006a09a) main_cam5_pane_t1

0xda17,	// (0x0006a0ac) main_cam5_pane_t2_ParamLimits

0xda17,	// (0x0006a0ac) main_cam5_pane_t2

0xda29,	// (0x0006a0be) main_cam5_pane_t3_ParamLimits

0xda29,	// (0x0006a0be) main_cam5_pane_t3

0xda3b,	// (0x0006a0d0) main_cam5_pane_t4_ParamLimits

0xda3b,	// (0x0006a0d0) main_cam5_pane_t4

0xda53,	// (0x0006a0e8) main_cam5_pane_t5_ParamLimits

0xda53,	// (0x0006a0e8) main_cam5_pane_t5

0xda67,	// (0x0006a0fc) main_cam5_pane_t6_ParamLimits

0xda67,	// (0x0006a0fc) main_cam5_pane_t6

0xda7b,	// (0x0006a110) main_cam5_pane_t7_ParamLimits

0xda7b,	// (0x0006a110) main_cam5_pane_t7

0xda8d,	// (0x0006a122) main_cam5_pane_t8_ParamLimits

0xda8d,	// (0x0006a122) main_cam5_pane_t8

0xdaa9,	// (0x0006a13e) main_cam5_pane_t9_ParamLimits

0xdaa9,	// (0x0006a13e) main_cam5_pane_t9

0xdabb,	// (0x0006a150) main_cam5_pane_t10_ParamLimits

0xdabb,	// (0x0006a150) main_cam5_pane_t10

0xdacd,	// (0x0006a162) main_cam5_pane_t11_ParamLimits

0xdacd,	// (0x0006a162) main_cam5_pane_t11

0xdadf,	// (0x0006a174) main_cam5_pane_t12_ParamLimits

0xdadf,	// (0x0006a174) main_cam5_pane_t12

0xdaf4,	// (0x0006a189) main_cam5_pane_t13_ParamLimits

0xdaf4,	// (0x0006a189) main_cam5_pane_t13

0x000c,

0xf859,	// (0x0006beee) main_cam5_pane_t_ParamLimits

0xf859,	// (0x0006beee) main_cam5_pane_t

0x0ee4,	// (0x0005d579) popup_scut_keymap_window_ParamLimits

0x0ee4,	// (0x0005d579) popup_scut_keymap_window

0x71ec,	// (0x00063881) aid_size_cell_brow_shortcut

0xaa5e,	// (0x000670f3) bg_popup_window_pane_cp010

0x71f8,	// (0x0006388d) grid_scut_pane

0x7204,	// (0x00063899) cell_scut_pane_ParamLimits

0x7204,	// (0x00063899) cell_scut_pane

0x721b,	// (0x000638b0) cell_scut_pane_g1

0xdb11,	// (0x0006a1a6) cell_scut_pane_t1

0xdb20,	// (0x0006a1b5) cell_scut_pane_t2

0x7224,	// (0x000638b9) cell_scut_pane_t3

0x0002,

0xf874,	// (0x0006bf09) cell_scut_pane_t

0x4ecd,	// (0x00061562) main_mup3_pane_g8_ParamLimits

0x4ecd,	// (0x00061562) main_mup3_pane_g8

0x640d,	// (0x00062aa2) area_vitu2_query_pane_ParamLimits

0x640d,	// (0x00062aa2) area_vitu2_query_pane

0x6f84,	// (0x00063619) input_focus_pane_cp08

0xdb2f,	// (0x0006a1c4) area_vitu2_query_pane_g1

0x7232,	// (0x000638c7) area_vitu2_query_pane_g2

0x0001,

0xf87b,	// (0x0006bf10) area_vitu2_query_pane_g

0x7243,	// (0x000638d8) area_vitu2_query_pane_t1_ParamLimits

0x7243,	// (0x000638d8) area_vitu2_query_pane_t1

0x7257,	// (0x000638ec) area_vitu2_query_pane_t2_ParamLimits

0x7257,	// (0x000638ec) area_vitu2_query_pane_t2

0x726b,	// (0x00063900) area_vitu2_query_pane_t3_ParamLimits

0x726b,	// (0x00063900) area_vitu2_query_pane_t3

0xa0ce,	// (0x00066763) area_vitu2_query_pane_t4_ParamLimits

0xa0ce,	// (0x00066763) area_vitu2_query_pane_t4

0xa0f6,	// (0x0006678b) area_vitu2_query_pane_t5_ParamLimits

0xa0f6,	// (0x0006678b) area_vitu2_query_pane_t5

0xa11e,	// (0x000667b3) area_vitu2_query_pane_t6_ParamLimits

0xa11e,	// (0x000667b3) area_vitu2_query_pane_t6

0x0006,

0xf880,	// (0x0006bf15) area_vitu2_query_pane_t_ParamLimits

0xf880,	// (0x0006bf15) area_vitu2_query_pane_t

0x7293,	// (0x00063928) bg_button_pane_cp018

0x72a1,	// (0x00063936) bg_button_pane_cp021

0x72ad,	// (0x00063942) bg_button_pane_cp022

0x72be,	// (0x00063953) input_focus_pane_cp09

0xb315,	// (0x000679aa) aid_size_touch_mv_arrow_left

0xb340,	// (0x000679d5) aid_size_touch_mv_arrow_right

0x69f2,	// (0x00063087) main_cset_slider_pane_g16_ParamLimits

0x69f2,	// (0x00063087) main_cset_slider_pane_g16

0x6a00,	// (0x00063095) main_cset_slider_pane_g17_ParamLimits

0x6a00,	// (0x00063095) main_cset_slider_pane_g17

0x71d9,	// (0x0006386e) cell_cam4_burst_pane_g1_ParamLimits

0x9b9f,	// (0x00066234) compa_mode_pane

0x6c57,	// (0x000632ec) popup_vtel_slider_window_g3_ParamLimits

0x6c57,	// (0x000632ec) popup_vtel_slider_window_g3

0x6c6b,	// (0x00063300) popup_vtel_slider_window_g4_ParamLimits

0x6c6b,	// (0x00063300) popup_vtel_slider_window_g4

0x6c7f,	// (0x00063314) popup_vtel_slider_window_t1_ParamLimits

0x6c7f,	// (0x00063314) popup_vtel_slider_window_t1

0x0f3f,	// (0x0005d5d4) main_cl_pane

0x4207,	// (0x0006089c) popup_imed_adjust2_window_ParamLimits

0xc90b,	// (0x00068fa0) bg_tb_trans_pane_cp05_ParamLimits

0xd218,	// (0x000698ad) popup_imed_adjust2_window_g1_ParamLimits

0xd227,	// (0x000698bc) popup_imed_adjust2_window_g2_ParamLimits

0xd227,	// (0x000698bc) popup_imed_adjust2_window_g2

0xd233,	// (0x000698c8) popup_imed_adjust2_window_g3_ParamLimits

0xd233,	// (0x000698c8) popup_imed_adjust2_window_g3

0x0002,

0x0426,	// (0x0005cabb) popup_imed_adjust2_window_g_ParamLimits

0x0426,	// (0x0005cabb) popup_imed_adjust2_window_g

0xd23f,	// (0x000698d4) popup_imed_adjust2_window_t1_ParamLimits

0xd257,	// (0x000698ec) slider_imed_adjust_pane_ParamLimits

0xd26b,	// (0x00069900) slider_imed_adjust_pane_g1_ParamLimits

0xd27b,	// (0x00069910) slider_imed_adjust_pane_g2_ParamLimits

0xd28b,	// (0x00069920) slider_imed_adjust_pane_g3_ParamLimits

0xd29c,	// (0x00069931) slider_imed_adjust_pane_g4_ParamLimits

0x042d,	// (0x0005cac2) slider_imed_adjust_pane_g_ParamLimits

0x6150,	// (0x000627e5) aid_touch_area_cam4_ParamLimits

0x6150,	// (0x000627e5) aid_touch_area_cam4

0x6160,	// (0x000627f5) battery_pane_cp01

0x61e7,	// (0x0006287c) main_camera4_pane_g6_ParamLimits

0x61e7,	// (0x0006287c) main_camera4_pane_g6

0x6205,	// (0x0006289a) main_camera4_pane_t2_ParamLimits

0x6205,	// (0x0006289a) main_camera4_pane_t2

0x0001,

0xf715,	// (0x0006bdaa) main_camera4_pane_t_ParamLimits

0xf715,	// (0x0006bdaa) main_camera4_pane_t

0x6294,	// (0x00062929) aid_touch_area_vid4_ParamLimits

0x6294,	// (0x00062929) aid_touch_area_vid4

0x62d4,	// (0x00062969) main_video4_pane_g5_ParamLimits

0x62d4,	// (0x00062969) main_video4_pane_g5

0x62f8,	// (0x0006298d) vid4_progress_pane_ParamLimits

0x62f8,	// (0x0006298d) vid4_progress_pane

0xd7f0,	// (0x00069e85) main_cset_slider_pane_g18_ParamLimits

0xd7f0,	// (0x00069e85) main_cset_slider_pane_g18

0xd9f9,	// (0x0006a08e) cell_cam4_burst_pane_g2_ParamLimits

0xd9f9,	// (0x0006a08e) cell_cam4_burst_pane_g2

0x0001,

0xf854,	// (0x0006bee9) cell_cam4_burst_pane_g_ParamLimits

0xf854,	// (0x0006bee9) cell_cam4_burst_pane_g

0x72cf,	// (0x00063964) bg_cl_pane_ParamLimits

0x72cf,	// (0x00063964) bg_cl_pane

0x72db,	// (0x00063970) cl_header_pane_ParamLimits

0x72db,	// (0x00063970) cl_header_pane

0x72e7,	// (0x0006397c) cl_listscroll_pane_ParamLimits

0x72e7,	// (0x0006397c) cl_listscroll_pane

0xdb3b,	// (0x0006a1d0) bg_cl_pane_g1

0xdb43,	// (0x0006a1d8) bg_cl_pane_g2

0xdb4b,	// (0x0006a1e0) bg_cl_pane_g3

0xdb53,	// (0x0006a1e8) bg_cl_pane_g4

0xdb5b,	// (0x0006a1f0) bg_cl_pane_g5

0xdb63,	// (0x0006a1f8) bg_cl_pane_g6

0xdb6b,	// (0x0006a200) bg_cl_pane_g7

0xdb73,	// (0x0006a208) bg_cl_pane_g8

0xdb7b,	// (0x0006a210) bg_cl_pane_g9

0x0008,

0xf88f,	// (0x0006bf24) bg_cl_pane_g

0x72f3,	// (0x00063988) aid_height_cl_leading_ParamLimits

0x72f3,	// (0x00063988) aid_height_cl_leading

0x72ff,	// (0x00063994) aid_height_cl_text_ParamLimits

0x72ff,	// (0x00063994) aid_height_cl_text

0xe2dd,	// (0x0006a972) bg_cl_header_pane_ParamLimits

0xe2dd,	// (0x0006a972) bg_cl_header_pane

0x7317,	// (0x000639ac) cl_header_pane_g1_ParamLimits

0x7317,	// (0x000639ac) cl_header_pane_g1

0x7324,	// (0x000639b9) cl_header_pane_t1_ParamLimits

0x7324,	// (0x000639b9) cl_header_pane_t1

0xdb83,	// (0x0006a218) cl_list_pane

0xd7c3,	// (0x00069e58) hc_scroll_pane_cp01

0xacbe,	// (0x00067353) bg_cl_header_pane_g1

0xd6a9,	// (0x00069d3e) bg_cl_header_pane_g2

0xacde,	// (0x00067373) bg_cl_header_pane_g3

0xd6b9,	// (0x00069d4e) bg_cl_header_pane_g4

0xd6b1,	// (0x00069d46) bg_cl_header_pane_g5

0xd8cd,	// (0x00069f62) bg_cl_header_pane_g6

0xd6d1,	// (0x00069d66) bg_cl_header_pane_g7

0xd6d9,	// (0x00069d6e) bg_cl_header_pane_g8

0xd6c9,	// (0x00069d5e) bg_cl_header_pane_g9

0x0008,

0xf8a2,	// (0x0006bf37) bg_cl_header_pane_g

0x7336,	// (0x000639cb) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7336,	// (0x000639cb) hc_cl_list_double_graphic_heading_pane

0x734a,	// (0x000639df) hc_cl_list_single_graphic_pane_ParamLimits

0x734a,	// (0x000639df) hc_cl_list_single_graphic_pane

0x7364,	// (0x000639f9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7364,	// (0x000639f9) hc_cl_list_single_graphic_pane_g1

0x7370,	// (0x00063a05) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7370,	// (0x00063a05) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf8b5,	// (0x0006bf4a) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf8b5,	// (0x0006bf4a) hc_cl_list_single_graphic_pane_g

0x7384,	// (0x00063a19) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7384,	// (0x00063a19) hc_cl_list_single_graphic_pane_t1

0x7364,	// (0x000639f9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7364,	// (0x000639f9) hc_cl_list_double_graphic_heading_pane_g1

0x7399,	// (0x00063a2e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7399,	// (0x00063a2e) hc_cl_list_double_graphic_heading_pane_g2

0x73ad,	// (0x00063a42) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x73ad,	// (0x00063a42) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf8ba,	// (0x0006bf4f) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf8ba,	// (0x0006bf4f) hc_cl_list_double_graphic_heading_pane_g

0x73c1,	// (0x00063a56) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x73c1,	// (0x00063a56) hc_cl_list_double_graphic_heading_pane_t1

0x73d6,	// (0x00063a6b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x73d6,	// (0x00063a6b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf8c1,	// (0x0006bf56) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf8c1,	// (0x0006bf56) hc_cl_list_double_graphic_heading_pane_t

0x73f3,	// (0x00063a88) vid4_progress_pane_g1

0x7403,	// (0x00063a98) vid4_progress_pane_g2

0x7413,	// (0x00063aa8) vid4_progress_pane_g3

0x7425,	// (0x00063aba) vid4_progress_pane_g4

0x0004,

0xf8c6,	// (0x0006bf5b) vid4_progress_pane_g

0x743d,	// (0x00063ad2) vid4_progress_pane_t1

0x7453,	// (0x00063ae8) vid4_progress_pane_t2

0x0002,

0xf8d1,	// (0x0006bf66) vid4_progress_pane_t

0x747e,	// (0x00063b13) wait_bar_pane_cp07

0xcb06,	// (0x0006919b) blid_firmament_pane_ParamLimits

0xcb49,	// (0x000691de) popup_blid_sat_info2_window_g1

0xcb6d,	// (0x00069202) popup_blid_sat_info2_window_t3

0xcb7b,	// (0x00069210) popup_blid_sat_info2_window_t4

0xcb89,	// (0x0006921e) popup_blid_sat_info2_window_t5

0xcb97,	// (0x0006922c) popup_blid_sat_info2_window_t6

0xcba7,	// (0x0006923c) popup_blid_sat_info2_window_t7

0xcbb5,	// (0x0006924a) popup_blid_sat_info2_window_t8

0xcbc3,	// (0x00069258) popup_blid_sat_info2_window_t9

0xcbd1,	// (0x00069266) popup_blid_sat_info2_window_t10

0xcc93,	// (0x00069328) aid_firma_cardinal_ParamLimits

0xcca7,	// (0x0006933c) blid_firmament_pane_t1_ParamLimits

0xccbe,	// (0x00069353) blid_firmament_pane_t2_ParamLimits

0xccd5,	// (0x0006936a) blid_firmament_pane_t3_ParamLimits

0xccec,	// (0x00069381) blid_firmament_pane_t4_ParamLimits

0x031a,	// (0x0005c9af) blid_firmament_pane_t_ParamLimits

0xcd03,	// (0x00069398) blid_sat_info_pane_ParamLimits

0x416d,	// (0x00060802) main_cam_set_pane_ParamLimits

0x569c,	// (0x00061d31) aid_size_cell_colour_35_ParamLimits

0x56b6,	// (0x00061d4b) aid_size_cell_colour_112_ParamLimits

0x56cd,	// (0x00061d62) aid_size_cell_effect_ParamLimits

0xa6a6,	// (0x00066d3b) bg_tb_trans_pane_cp02_ParamLimits

0xb102,	// (0x00067797) heading_imed_pane_ParamLimits

0x56e7,	// (0x00061d7c) listscroll_imed_pane_ParamLimits

0xbef7,	// (0x0006858c) popup_call2_audio_first_window_g5_ParamLimits

0xbef7,	// (0x0006858c) popup_call2_audio_first_window_g5

0x5e36,	// (0x000624cb) aid_size_touch_image3_arrow_left_ParamLimits

0x5e36,	// (0x000624cb) aid_size_touch_image3_arrow_left

0x5e4c,	// (0x000624e1) aid_size_touch_image3_arrow_right_ParamLimits

0x5e4c,	// (0x000624e1) aid_size_touch_image3_arrow_right

0x7468,	// (0x00063afd) vid4_progress_pane_t3

0x5987,	// (0x0006201c) main_hwr_training_symbol_option_pane_ParamLimits

0x5987,	// (0x0006201c) main_hwr_training_symbol_option_pane

0xd505,	// (0x00069b9a) popup_hwr_training_preview_window_ParamLimits

0xd505,	// (0x00069b9a) popup_hwr_training_preview_window

0x59e8,	// (0x0006207d) hwr_training_navi_pane_g5_ParamLimits

0x59e8,	// (0x0006207d) hwr_training_navi_pane_g5

0xd697,	// (0x00069d2c) popup_char_count_window

0x0f25,	// (0x0005d5ba) bg_popup_sub_pane_cp20_ParamLimits

0x6d7e,	// (0x00063413) list_vitu2_match_list_pane_ParamLimits

0x6d8a,	// (0x0006341f) vitu2_page_scroll_pane_ParamLimits

0x6d8a,	// (0x0006341f) vitu2_page_scroll_pane

0xdb8c,	// (0x0006a221) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb8c,	// (0x0006a221) list_single_hwr_training_symbol_option_pane

0xdb9f,	// (0x0006a234) list_single_hwr_training_symbol_option_pane_g1

0xdba7,	// (0x0006a23c) list_single_hwr_training_symbol_option_pane_t1

0xdbb5,	// (0x0006a24a) bg_button_pane_cp023

0xdbbe,	// (0x0006a253) bg_button_pane_cp024

0x74c7,	// (0x00063b5c) vitu2_page_scroll_pane_g1

0x74cf,	// (0x00063b64) vitu2_page_scroll_pane_g2

0x0001,

0xf8d8,	// (0x0006bf6d) vitu2_page_scroll_pane_g

0x74d7,	// (0x00063b6c) vitu2_page_scroll_pane_t1

0xaa95,	// (0x0006712a) popup_char_count_window_g1

0xdbf1,	// (0x0006a286) popup_char_count_window_g2

0xd954,	// (0x00069fe9) popup_char_count_window_g3

0x0002,

0xf8dd,	// (0x0006bf72) popup_char_count_window_g

0xdbfa,	// (0x0006a28f) popup_char_count_window_t1

0x0f3f,	// (0x0005d5d4) main_vded2_pane

0xd204,	// (0x00069899) aid_size_cell_imed_line

0xd20e,	// (0x000698a3) grid_imed_line_width_pane

0x6364,	// (0x000629f9) vid4_indicators_pane_g4

0xdc08,	// (0x0006a29d) cell_imed_line_width_pane_ParamLimits

0xdc08,	// (0x0006a29d) cell_imed_line_width_pane

0xdc1c,	// (0x0006a2b1) cell_imed_line_width_pane_g1

0xd993,	// (0x0006a028) cell_imed_line_width_pane_g2

0x0001,

0xf8e4,	// (0x0006bf79) cell_imed_line_width_pane_g

0x74e6,	// (0x00063b7b) main_vded2_pane_g1_ParamLimits

0x74e6,	// (0x00063b7b) main_vded2_pane_g1

0x74f3,	// (0x00063b88) main_vded2_pane_g2_ParamLimits

0x74f3,	// (0x00063b88) main_vded2_pane_g2

0x0001,

0xf8e9,	// (0x0006bf7e) main_vded2_pane_g_ParamLimits

0xf8e9,	// (0x0006bf7e) main_vded2_pane_g

0x7501,	// (0x00063b96) vded2_slider_pane_ParamLimits

0x7501,	// (0x00063b96) vded2_slider_pane

0x750e,	// (0x00063ba3) aid_size_touch_vded2_end

0x7518,	// (0x00063bad) aid_size_touch_vded2_playhead

0xdc25,	// (0x0006a2ba) aid_size_touch_vded2_start

0xdc2d,	// (0x0006a2c2) vded2_slider_bg_pane

0xdc36,	// (0x0006a2cb) vded2_slider_pane_g1

0xdc3f,	// (0x0006a2d4) vded2_slider_pane_g2

0x7520,	// (0x00063bb5) vded2_slider_pane_g3

0x0002,

0xf8ee,	// (0x0006bf83) vded2_slider_pane_g

0xdc47,	// (0x0006a2dc) vded2_slider_bg_pane_g1

0xdc50,	// (0x0006a2e5) vded2_slider_bg_pane_g2

0xdc59,	// (0x0006a2ee) vded2_slider_bg_pane_g3

0x0002,

0xf8f5,	// (0x0006bf8a) vded2_slider_bg_pane_g

0x3a50,	// (0x000600e5) aid_postcard_touch_down_pane_ParamLimits

0x3a50,	// (0x000600e5) aid_postcard_touch_down_pane

0x3a60,	// (0x000600f5) aid_postcard_touch_up_pane_ParamLimits

0x3a60,	// (0x000600f5) aid_postcard_touch_up_pane

0x0f3f,	// (0x0005d5d4) main_blid2_pane

0x4196,	// (0x0006082b) popup_blid2_search_window

0x9b9f,	// (0x00066234) blid2_gps_pane

0x9b9f,	// (0x00066234) blid2_navig_pane

0x9b9f,	// (0x00066234) blid2_search_pane

0x9b9f,	// (0x00066234) blid2_tripm_pane

0x7529,	// (0x00063bbe) blid2_search_pane_g1_ParamLimits

0x7529,	// (0x00063bbe) blid2_search_pane_g1

0x7539,	// (0x00063bce) blid2_search_pane_t1_ParamLimits

0x7539,	// (0x00063bce) blid2_search_pane_t1

0x754b,	// (0x00063be0) aid_size_cell_blid2_gps_ParamLimits

0x754b,	// (0x00063be0) aid_size_cell_blid2_gps

0x755b,	// (0x00063bf0) blid2_gps_pane_g1_ParamLimits

0x755b,	// (0x00063bf0) blid2_gps_pane_g1

0x7567,	// (0x00063bfc) grid_blid2_satellite_pane_ParamLimits

0x7567,	// (0x00063bfc) grid_blid2_satellite_pane

0x7577,	// (0x00063c0c) blid2_navig_pane_g1_ParamLimits

0x7577,	// (0x00063c0c) blid2_navig_pane_g1

0x7583,	// (0x00063c18) blid2_navig_pane_t1_ParamLimits

0x7583,	// (0x00063c18) blid2_navig_pane_t1

0x7595,	// (0x00063c2a) blid2_navig_pane_t2_ParamLimits

0x7595,	// (0x00063c2a) blid2_navig_pane_t2

0x0001,

0xf8fc,	// (0x0006bf91) blid2_navig_pane_t_ParamLimits

0xf8fc,	// (0x0006bf91) blid2_navig_pane_t

0x75a7,	// (0x00063c3c) blid2_navig_ring_pane_ParamLimits

0x75a7,	// (0x00063c3c) blid2_navig_ring_pane

0x75b7,	// (0x00063c4c) blid2_speed_pane_ParamLimits

0x75b7,	// (0x00063c4c) blid2_speed_pane

0x75c3,	// (0x00063c58) blid2_tripm_pane_g1_ParamLimits

0x75c3,	// (0x00063c58) blid2_tripm_pane_g1

0x75d3,	// (0x00063c68) blid2_tripm_pane_g2_ParamLimits

0x75d3,	// (0x00063c68) blid2_tripm_pane_g2

0x75df,	// (0x00063c74) blid2_tripm_pane_g3_ParamLimits

0x75df,	// (0x00063c74) blid2_tripm_pane_g3

0x75eb,	// (0x00063c80) blid2_tripm_pane_g4_ParamLimits

0x75eb,	// (0x00063c80) blid2_tripm_pane_g4

0x75f7,	// (0x00063c8c) blid2_tripm_pane_g5_ParamLimits

0x75f7,	// (0x00063c8c) blid2_tripm_pane_g5

0x0005,

0xf901,	// (0x0006bf96) blid2_tripm_pane_g_ParamLimits

0xf901,	// (0x0006bf96) blid2_tripm_pane_g

0x7613,	// (0x00063ca8) blid2_tripm_pane_t1_ParamLimits

0x7613,	// (0x00063ca8) blid2_tripm_pane_t1

0x7627,	// (0x00063cbc) blid2_tripm_pane_t2_ParamLimits

0x7627,	// (0x00063cbc) blid2_tripm_pane_t2

0x7639,	// (0x00063cce) blid2_tripm_pane_t3_ParamLimits

0x7639,	// (0x00063cce) blid2_tripm_pane_t3

0x0003,

0xf90e,	// (0x0006bfa3) blid2_tripm_pane_t_ParamLimits

0xf90e,	// (0x0006bfa3) blid2_tripm_pane_t

0x766b,	// (0x00063d00) cell_blid2_satellite_pane_ParamLimits

0x766b,	// (0x00063d00) cell_blid2_satellite_pane

0x7685,	// (0x00063d1a) cell_blid2_satellite_pane_g1

0xdc62,	// (0x0006a2f7) cell_blid2_satellite_pane_t1

0xcd13,	// (0x000693a8) blid2_speed_pane_g1

0xdc70,	// (0x0006a305) blid2_speed_pane_t1

0xdc7e,	// (0x0006a313) blid2_speed_pane_t2

0x0001,

0xf917,	// (0x0006bfac) blid2_speed_pane_t

0xcd13,	// (0x000693a8) blid2_navig_ring_pane_g1

0x768e,	// (0x00063d23) blid2_navig_ring_pane_g2

0x7696,	// (0x00063d2b) blid2_navig_ring_pane_g3

0x769e,	// (0x00063d33) blid2_navig_ring_pane_g4

0x76a6,	// (0x00063d3b) blid2_navig_ring_pane_g5

0x0004,

0xf91c,	// (0x0006bfb1) blid2_navig_ring_pane_g

0x9b9f,	// (0x00066234) bg_popup_window_pane_cp011

0xdcb0,	// (0x0006a345) popup_blid2_search_window_g1

0xdcb8,	// (0x0006a34d) popup_blid2_search_window_t1

0xdcc6,	// (0x0006a35b) popup_blid2_search_window_t2

0x0001,

0xf927,	// (0x0006bfbc) popup_blid2_search_window_t

0xabcd,	// (0x00067262) main_browser_pane_g1

0xa899,	// (0x00066f2e) main_browser_pane_ParamLimits

0x416d,	// (0x00060802) bg_button_pane_cp011_ParamLimits

0x660f,	// (0x00062ca4) cell_vitu2_function_pane_g1_ParamLimits

0xc90b,	// (0x00068fa0) bg_popup_sub_pane_cp22_ParamLimits

0x6f84,	// (0x00063619) input_focus_pane_cp08_ParamLimits

0x6f9b,	// (0x00063630) popup_vitu2_query_button_pane_ParamLimits

0x6f9b,	// (0x00063630) popup_vitu2_query_button_pane

0x6fac,	// (0x00063641) popup_vitu2_query_input_button_pane

0xd908,	// (0x00069f9d) popup_vitu2_query_window_g1_ParamLimits

0x6fb6,	// (0x0006364b) popup_vitu2_query_window_g2_ParamLimits

0xf828,	// (0x0006bebd) popup_vitu2_query_window_g_ParamLimits

0x9b9f,	// (0x00066234) bg_button_pane_cp026

0x76ae,	// (0x00063d43) popup_vitu2_query_input_button_pane_g1

0x9b9f,	// (0x00066234) bg_button_pane_cp025

0xdcd4,	// (0x0006a369) popup_vitu2_query_button_pane_t1

0x4bee,	// (0x00061283) main_mp3_pane_t6

0x4bfe,	// (0x00061293) popup_slider_window_cp01

0x6249,	// (0x000628de) cam4_battery_pane

0x6323,	// (0x000629b8) cam4_battery_pane_cp02

0x73eb,	// (0x00063a80) cam4_battery_pane_cp01

0x73eb,	// (0x00063a80) cam4_battery_pane_cp03

0xdc98,	// (0x0006a32d) cam4_battery_pane_g1

0xcd13,	// (0x000693a8) cam4_battery_pane_g2

0x0001,

0xf92c,	// (0x0006bfc1) cam4_battery_pane_g

0xcbdf,	// (0x00069274) popup_blid_sat_info2_window_t11

0xb315,	// (0x000679aa) aid_size_touch_mv_arrow_left_ParamLimits

0xb340,	// (0x000679d5) aid_size_touch_mv_arrow_right_ParamLimits

0xb39e,	// (0x00067a33) navi_pane_g1_ParamLimits

0xb3aa,	// (0x00067a3f) navi_pane_g2_ParamLimits

0xb3d8,	// (0x00067a6d) navi_pane_g3_ParamLimits

0x0019,	// (0x0005c6ae) navi_pane_g_ParamLimits

0x3466,	// (0x0005fafb) navi_pane_mv_t1_ParamLimits

0x56f3,	// (0x00061d88) grid_imed_effect_pane_ParamLimits

0x1de1,	// (0x0005e476) aid_placing_vt_slider_lsc

0xab1c,	// (0x000671b1) aid_placing_vt_slider_prt

0xa6a6,	// (0x00066d3b) bg_tb_trans_pane_cp01_ParamLimits

0xce78,	// (0x0006950d) popup_image_details_window_g1_ParamLimits

0xce8b,	// (0x00069520) popup_image_details_window_g2_ParamLimits

0xcea0,	// (0x00069535) popup_image_details_window_g3_ParamLimits

0xcea0,	// (0x00069535) popup_image_details_window_g3

0x035f,	// (0x0005c9f4) popup_image_details_window_g_ParamLimits

0xceb4,	// (0x00069549) popup_image_details_window_t1_ParamLimits

0xcec6,	// (0x0006955b) popup_image_details_window_t2_ParamLimits

0xcedf,	// (0x00069574) popup_image_details_window_t3_ParamLimits

0xcef3,	// (0x00069588) popup_image_details_window_t4_ParamLimits

0xcf0e,	// (0x000695a3) popup_image_details_window_t5_ParamLimits

0x0366,	// (0x0005c9fb) popup_image_details_window_t_ParamLimits

0x730b,	// (0x000639a0) cl_header_name_pane_ParamLimits

0x730b,	// (0x000639a0) cl_header_name_pane

0x76b6,	// (0x00063d4b) cl_header_name_pane_t1_ParamLimits

0x76b6,	// (0x00063d4b) cl_header_name_pane_t1

0x76cd,	// (0x00063d62) cl_header_name_pane_t2_ParamLimits

0x76cd,	// (0x00063d62) cl_header_name_pane_t2

0x76f7,	// (0x00063d8c) cl_header_name_pane_t3_ParamLimits

0x76f7,	// (0x00063d8c) cl_header_name_pane_t3

0x0002,

0xf931,	// (0x0006bfc6) cl_header_name_pane_t_ParamLimits

0xf931,	// (0x0006bfc6) cl_header_name_pane_t

0xb467,	// (0x00067afc) navi_pane_mv_g2_ParamLimits

0xd671,	// (0x00069d06) field_vitu2_entry_pane_g1_ParamLimits

0xd67d,	// (0x00069d12) field_vitu2_entry_pane_g2_ParamLimits

0xd689,	// (0x00069d1e) field_vitu2_entry_pane_g3_ParamLimits

0xd689,	// (0x00069d1e) field_vitu2_entry_pane_g3

0x0566,	// (0x0005cbfb) field_vitu2_entry_pane_g_ParamLimits

0x65a3,	// (0x00062c38) cell_vitu2_itu_pane_g1_ParamLimits

0x65b5,	// (0x00062c4a) cell_vitu2_itu_pane_g2_ParamLimits

0x65b5,	// (0x00062c4a) cell_vitu2_itu_pane_g2

0x0001,

0xf74c,	// (0x0006bde1) cell_vitu2_itu_pane_g_ParamLimits

0xf74c,	// (0x0006bde1) cell_vitu2_itu_pane_g

0x416d,	// (0x00060802) bg_vkb2_func_pane_cp05_ParamLimits

0x416d,	// (0x00060802) bg_vkb2_func_pane_cp05

0x416d,	// (0x00060802) bg_vkb2_func_pane_cp03

0x416d,	// (0x00060802) bg_vkb2_func_pane_cp04

0x416d,	// (0x00060802) bg_vkb2_func_pane_cp10_ParamLimits

0x416d,	// (0x00060802) bg_vkb2_func_pane_cp10

0x72ad,	// (0x00063942) bg_vkb2_func_pane_cp08

0x7293,	// (0x00063928) bg_vkb2_func_pane_cp06

0x72a1,	// (0x00063936) bg_vkb2_func_pane_cp07

0xdbc7,	// (0x0006a25c) bg_vkb2_func_pane_cp11_ParamLimits

0xdbc7,	// (0x0006a25c) bg_vkb2_func_pane_cp11

0xdbdc,	// (0x0006a271) bg_vkb2_func_pane_cp12_ParamLimits

0xdbdc,	// (0x0006a271) bg_vkb2_func_pane_cp12

0x9b9f,	// (0x00066234) bg_vkb2_func_pane_cp09

0xd6a9,	// (0x00069d3e) bg_vkb2_func_pane_g1

0xacde,	// (0x00067373) bg_vkb2_func_pane_g2

0xd6b1,	// (0x00069d46) bg_vkb2_func_pane_g3

0xd6b9,	// (0x00069d4e) bg_vkb2_func_pane_g4

0xd8cd,	// (0x00069f62) bg_vkb2_func_pane_g5

0xd6d1,	// (0x00069d66) bg_vkb2_func_pane_g6

0xd6d9,	// (0x00069d6e) bg_vkb2_func_pane_g7

0xd6c9,	// (0x00069d5e) bg_vkb2_func_pane_g8

0xacbe,	// (0x00067353) bg_vkb2_func_pane_g9

0x0008,

0xf938,	// (0x0006bfcd) bg_vkb2_func_pane_g

0x7605,	// (0x00063c9a) blid2_tripm_pane_g6_ParamLimits

0x7605,	// (0x00063c9a) blid2_tripm_pane_g6

0xd5c3,	// (0x00069c58) mp4_progress_pane_g1

0x765f,	// (0x00063cf4) blid2_tripm_values_pane_ParamLimits

0x765f,	// (0x00063cf4) blid2_tripm_values_pane

0x771c,	// (0x00063db1) blid2_tripm_values_pane_t1

0x772a,	// (0x00063dbf) blid2_tripm_values_pane_t2

0x7738,	// (0x00063dcd) blid2_tripm_values_pane_t3

0x7746,	// (0x00063ddb) blid2_tripm_values_pane_t4

0x7754,	// (0x00063de9) blid2_tripm_values_pane_t5

0x7762,	// (0x00063df7) blid2_tripm_values_pane_t6

0x7770,	// (0x00063e05) blid2_tripm_values_pane_t7

0x777e,	// (0x00063e13) blid2_tripm_values_pane_t8

0x778c,	// (0x00063e21) blid2_tripm_values_pane_t9

0x0008,

0xf94b,	// (0x0006bfe0) blid2_tripm_values_pane_t

0x1e21,	// (0x0005e4b6) call_video_pane_t1_ParamLimits

0x1e42,	// (0x0005e4d7) call_video_pane_t2_ParamLimits

0xf253,	// (0x0006b8e8) call_video_pane_t_ParamLimits

0x399a,	// (0x0006002f) msg_header_pane_g1_ParamLimits

0xb641,	// (0x00067cd6) msg_header_pane_g2_ParamLimits

0xb641,	// (0x00067cd6) msg_header_pane_g2

0x0001,

0xf44c,	// (0x0006bae1) msg_header_pane_g_ParamLimits

0xf44c,	// (0x0006bae1) msg_header_pane_g

0xa899,	// (0x00066f2e) main_clock2_pane_ParamLimits

0x546d,	// (0x00061b02) grid_clock2_toolbar_pane_ParamLimits

0x546d,	// (0x00061b02) grid_clock2_toolbar_pane

0x546d,	// (0x00061b02) listscroll_clock2_pane_ParamLimits

0x546d,	// (0x00061b02) listscroll_clock2_pane

0x551d,	// (0x00061bb2) main_clock2_pane_t3_ParamLimits

0x551d,	// (0x00061bb2) main_clock2_pane_t3

0x552f,	// (0x00061bc4) main_clock2_pane_t4_ParamLimits

0x552f,	// (0x00061bc4) main_clock2_pane_t4

0xdce2,	// (0x0006a377) cell_clock2_toolbar_pane

0xdcea,	// (0x0006a37f) cell_clock2_toolbar_pane_cp01

0xdcea,	// (0x0006a37f) cell_clock2_toolbar_pane_cp02

0xdcf2,	// (0x0006a387) cell_clock2_toolbar_pane_cp03

0xdcfa,	// (0x0006a38f) list_clock2_pane

0xb29a,	// (0x0006792f) scroll_pane_cp10

0xdd02,	// (0x0006a397) list_single_clock2_pane_ParamLimits

0xdd02,	// (0x0006a397) list_single_clock2_pane

0xaa5e,	// (0x000670f3) list_highlight_pane_cp08

0xdd0f,	// (0x0006a3a4) list_single_clock2_pane_t1

0xdd1d,	// (0x0006a3b2) list_single_clock2_pane_t2

0x0001,

0xf95e,	// (0x0006bff3) list_single_clock2_pane_t

0x9b9f,	// (0x00066234) bg_button_pane_cp10

0xdd2b,	// (0x0006a3c0) cell_clock2_toolbar_pane_g1

0x39be,	// (0x00060053) aid_main_viewer_pane_g1_ParamLimits

0x39be,	// (0x00060053) aid_main_viewer_pane_g1

0x39ca,	// (0x0006005f) aid_main_viewer_pane_g2_ParamLimits

0x39ca,	// (0x0006005f) aid_main_viewer_pane_g2

0x39d6,	// (0x0006006b) aid_main_viewer_pane_g3_ParamLimits

0x39d6,	// (0x0006006b) aid_main_viewer_pane_g3

0x39e7,	// (0x0006007c) aid_main_viewer_pane_g4_ParamLimits

0x39e7,	// (0x0006007c) aid_main_viewer_pane_g4

0x0003,

0xf45d,	// (0x0006baf2) aid_main_viewer_pane_g_ParamLimits

0xf45d,	// (0x0006baf2) aid_main_viewer_pane_g

0x4160,	// (0x000607f5) main_calc_pane_ParamLimits

0x417b,	// (0x00060810) main_dialer2_pane_ParamLimits

0x0f3f,	// (0x0005d5d4) main_cam6_pane

0x0f3f,	// (0x0005d5d4) main_vid6_pane

0x5479,	// (0x00061b0e) listscroll_gen_pane_cp06_ParamLimits

0x5479,	// (0x00061b0e) listscroll_gen_pane_cp06

0x5541,	// (0x00061bd6) main_clock2_pane_t5_ParamLimits

0x5541,	// (0x00061bd6) main_clock2_pane_t5

0x558e,	// (0x00061c23) aid_call2_pane_cp10_ParamLimits

0x55a0,	// (0x00061c35) aid_call_pane_cp10_ParamLimits

0xb309,	// (0x0006799e) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb309,	// (0x0006799e) popup_clock_analogue_window_cp10_g2_ParamLimits

0x55b2,	// (0x00061c47) popup_clock_analogue_window_cp10_g3_ParamLimits

0x55b2,	// (0x00061c47) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb309,	// (0x0006799e) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf658,	// (0x0006bced) popup_clock_analogue_window_cp10_g_ParamLimits

0x55c8,	// (0x00061c5d) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5de3,	// (0x00062478) cell_dialer2_keypad_pane_g2_ParamLimits

0x5de3,	// (0x00062478) cell_dialer2_keypad_pane_g2

0x0001,

0xf6e6,	// (0x0006bd7b) cell_dialer2_keypad_pane_g_ParamLimits

0xf6e6,	// (0x0006bd7b) cell_dialer2_keypad_pane_g

0x5dff,	// (0x00062494) cell_dialer2_keypad_pane_t1

0x68da,	// (0x00062f6f) main_cset_text2_pane_ParamLimits

0x68da,	// (0x00062f6f) main_cset_text2_pane

0xdb2f,	// (0x0006a1c4) area_vitu2_query_pane_g1_ParamLimits

0x7232,	// (0x000638c7) area_vitu2_query_pane_g2_ParamLimits

0xf87b,	// (0x0006bf10) area_vitu2_query_pane_g_ParamLimits

0xa146,	// (0x000667db) area_vitu2_query_pane_t7_ParamLimits

0xa146,	// (0x000667db) area_vitu2_query_pane_t7

0x7293,	// (0x00063928) bg_button_pane_cp018_ParamLimits

0x72a1,	// (0x00063936) bg_button_pane_cp021_ParamLimits

0x72ad,	// (0x00063942) bg_button_pane_cp022_ParamLimits

0x72ad,	// (0x00063942) bg_vkb2_func_pane_cp08_ParamLimits

0x7293,	// (0x00063928) bg_vkb2_func_pane_cp06_ParamLimits

0x72a1,	// (0x00063936) bg_vkb2_func_pane_cp07_ParamLimits

0x72be,	// (0x00063953) input_focus_pane_cp09_ParamLimits

0x779a,	// (0x00063e2f) cam6_autofocus_pane_ParamLimits

0x779a,	// (0x00063e2f) cam6_autofocus_pane

0x77bc,	// (0x00063e51) cam6_image_uncrop_pane_ParamLimits

0x77bc,	// (0x00063e51) cam6_image_uncrop_pane

0x77e9,	// (0x00063e7e) cam6_indi_pane_ParamLimits

0x77e9,	// (0x00063e7e) cam6_indi_pane

0x7803,	// (0x00063e98) cam6_mode_pane_ParamLimits

0x7803,	// (0x00063e98) cam6_mode_pane

0x7817,	// (0x00063eac) cam6_timer_pane_ParamLimits

0x7817,	// (0x00063eac) cam6_timer_pane

0x7828,	// (0x00063ebd) cam6_zoom_pane_ParamLimits

0x7828,	// (0x00063ebd) cam6_zoom_pane

0x7840,	// (0x00063ed5) cam6_mode_pane_g1_ParamLimits

0x7840,	// (0x00063ed5) cam6_mode_pane_g1

0x784c,	// (0x00063ee1) cam6_mode_pane_g2_ParamLimits

0x784c,	// (0x00063ee1) cam6_mode_pane_g2

0x7858,	// (0x00063eed) cam6_mode_pane_g3_ParamLimits

0x7858,	// (0x00063eed) cam6_mode_pane_g3

0x7864,	// (0x00063ef9) cam6_mode_pane_g4_ParamLimits

0x7864,	// (0x00063ef9) cam6_mode_pane_g4

0x0003,

0xf963,	// (0x0006bff8) cam6_mode_pane_g_ParamLimits

0xf963,	// (0x0006bff8) cam6_mode_pane_g

0xdca2,	// (0x0006a337) bg_tb_trans_pane_cp08_ParamLimits

0xdca2,	// (0x0006a337) bg_tb_trans_pane_cp08

0xdd33,	// (0x0006a3c8) cam6_battery_pane_ParamLimits

0xdd33,	// (0x0006a3c8) cam6_battery_pane

0xdd49,	// (0x0006a3de) cam6_indi_pane_g1_ParamLimits

0xdd49,	// (0x0006a3de) cam6_indi_pane_g1

0xdd5b,	// (0x0006a3f0) cam6_indi_pane_g2_ParamLimits

0xdd5b,	// (0x0006a3f0) cam6_indi_pane_g2

0xdd6d,	// (0x0006a402) cam6_indi_pane_g3_ParamLimits

0xdd6d,	// (0x0006a402) cam6_indi_pane_g3

0x0002,

0x07ab,	// (0x0005ce40) cam6_indi_pane_g_ParamLimits

0x07ab,	// (0x0005ce40) cam6_indi_pane_g

0xdd7f,	// (0x0006a414) cam6_indi_pane_t1_ParamLimits

0xdd7f,	// (0x0006a414) cam6_indi_pane_t1

0x639f,	// (0x00062a34) cam6_autofocus_pane_g1

0x6397,	// (0x00062a2c) cam6_autofocus_pane_g2

0x63af,	// (0x00062a44) cam6_autofocus_pane_g3

0x63a7,	// (0x00062a3c) cam6_autofocus_pane_g4

0x0003,

0xf96c,	// (0x0006c001) cam6_autofocus_pane_g

0xdda5,	// (0x0006a43a) cam6_timer_pane_g1

0xddad,	// (0x0006a442) cam6_timer_pane_t1

0xddbb,	// (0x0006a450) cam6_zoom_cont_pane

0xddc3,	// (0x0006a458) cam6_zoom_pane_g1

0xddcb,	// (0x0006a460) cam6_zoom_pane_g2

0x7870,	// (0x00063f05) cam6_zoom_pane_g3

0x0002,

0xf975,	// (0x0006c00a) cam6_zoom_pane_g

0xcd13,	// (0x000693a8) cam6_battery_pane_g1

0xcd13,	// (0x000693a8) cam6_battery_pane_g2

0x0001,

0x0323,	// (0x0005c9b8) cam6_battery_pane_g

0xddd3,	// (0x0006a468) cam6_zoom_cont_pane_g1

0xdddc,	// (0x0006a471) cam6_zoom_cont_pane_g2

0xdde5,	// (0x0006a47a) cam6_zoom_cont_pane_g3

0x0002,

0x07c2,	// (0x0005ce57) cam6_zoom_cont_pane_g

0x788d,	// (0x00063f22) cam6_mode_pane_cp_ParamLimits

0x788d,	// (0x00063f22) cam6_mode_pane_cp

0x78a1,	// (0x00063f36) cam6_zoom_pane_cp_ParamLimits

0x78a1,	// (0x00063f36) cam6_zoom_pane_cp

0x78b9,	// (0x00063f4e) vid6_image_uncrop_cif_pane_ParamLimits

0x78b9,	// (0x00063f4e) vid6_image_uncrop_cif_pane

0x78e5,	// (0x00063f7a) vid6_image_uncrop_nhd_pane_ParamLimits

0x78e5,	// (0x00063f7a) vid6_image_uncrop_nhd_pane

0x7902,	// (0x00063f97) vid6_image_uncrop_vga_pane_ParamLimits

0x7902,	// (0x00063f97) vid6_image_uncrop_vga_pane

0x7921,	// (0x00063fb6) vid6_image_uncrop_wvga_pane_ParamLimits

0x7921,	// (0x00063fb6) vid6_image_uncrop_wvga_pane

0x793e,	// (0x00063fd3) vid6_indi_pane_ParamLimits

0x793e,	// (0x00063fd3) vid6_indi_pane

0xdca2,	// (0x0006a337) bg_tb_trans_pane_cp09_ParamLimits

0xdca2,	// (0x0006a337) bg_tb_trans_pane_cp09

0xddfd,	// (0x0006a492) cam6_battery_pane_cp_ParamLimits

0xddfd,	// (0x0006a492) cam6_battery_pane_cp

0xde09,	// (0x0006a49e) vid6_indi_pane_g1_ParamLimits

0xde09,	// (0x0006a49e) vid6_indi_pane_g1

0xde1b,	// (0x0006a4b0) vid6_indi_pane_g2_ParamLimits

0xde1b,	// (0x0006a4b0) vid6_indi_pane_g2

0xde2d,	// (0x0006a4c2) vid6_indi_pane_g3_ParamLimits

0xde2d,	// (0x0006a4c2) vid6_indi_pane_g3

0xde42,	// (0x0006a4d7) vid6_indi_pane_g4_ParamLimits

0xde42,	// (0x0006a4d7) vid6_indi_pane_g4

0xde57,	// (0x0006a4ec) vid6_indi_pane_g5_ParamLimits

0xde57,	// (0x0006a4ec) vid6_indi_pane_g5

0x0004,

0x07c9,	// (0x0005ce5e) vid6_indi_pane_g_ParamLimits

0x07c9,	// (0x0005ce5e) vid6_indi_pane_g

0xde71,	// (0x0006a506) vid6_indi_pane_t1_ParamLimits

0xde71,	// (0x0006a506) vid6_indi_pane_t1

0xde87,	// (0x0006a51c) vid6_indi_pane_t2_ParamLimits

0xde87,	// (0x0006a51c) vid6_indi_pane_t2

0xdeaf,	// (0x0006a544) vid6_indi_pane_t3_ParamLimits

0xdeaf,	// (0x0006a544) vid6_indi_pane_t3

0xded7,	// (0x0006a56c) vid6_indi_pane_t4_ParamLimits

0xded7,	// (0x0006a56c) vid6_indi_pane_t4

0x0003,

0x07d4,	// (0x0005ce69) vid6_indi_pane_t_ParamLimits

0x07d4,	// (0x0005ce69) vid6_indi_pane_t

0xdefb,	// (0x0006a590) wait_bar_pane_cp08

0x7961,	// (0x00063ff6) main_cset_text2_pane_t1_ParamLimits

0x7961,	// (0x00063ff6) main_cset_text2_pane_t1

0x7878,	// (0x00063f0d) listscroll_gen_pane_cp06_t1_ParamLimits

0x7878,	// (0x00063f0d) listscroll_gen_pane_cp06_t1

0x0f3f,	// (0x0005d5d4) main_cam6_set_pane

0x623b,	// (0x000628d0) bg_tb_trans_pane_cp06_ParamLimits

0x6251,	// (0x000628e6) cam4_indicators_pane_g1_ParamLimits

0x6262,	// (0x000628f7) cam4_indicators_pane_g2_ParamLimits

0xf723,	// (0x0006bdb8) cam4_indicators_pane_g_ParamLimits

0x627a,	// (0x0006290f) cam4_indicators_pane_t1_ParamLimits

0x416d,	// (0x00060802) bg_tb_trans_pane_cp07_ParamLimits

0x632b,	// (0x000629c0) vid4_indicators_pane_g1_ParamLimits

0x633f,	// (0x000629d4) vid4_indicators_pane_g2_ParamLimits

0x6353,	// (0x000629e8) vid4_indicators_pane_g3_ParamLimits

0x6364,	// (0x000629f9) vid4_indicators_pane_g4_ParamLimits

0xf735,	// (0x0006bdca) vid4_indicators_pane_g_ParamLimits

0x6380,	// (0x00062a15) vid4_indicators_pane_t1_ParamLimits

0x73f3,	// (0x00063a88) vid4_progress_pane_g1_ParamLimits

0x7403,	// (0x00063a98) vid4_progress_pane_g2_ParamLimits

0x7413,	// (0x00063aa8) vid4_progress_pane_g3_ParamLimits

0x7425,	// (0x00063aba) vid4_progress_pane_g4_ParamLimits

0xf8c6,	// (0x0006bf5b) vid4_progress_pane_g_ParamLimits

0x743d,	// (0x00063ad2) vid4_progress_pane_t1_ParamLimits

0x7453,	// (0x00063ae8) vid4_progress_pane_t2_ParamLimits

0x7468,	// (0x00063afd) vid4_progress_pane_t3_ParamLimits

0xf8d1,	// (0x0006bf66) vid4_progress_pane_t_ParamLimits

0x747e,	// (0x00063b13) wait_bar_pane_cp07_ParamLimits

0x7998,	// (0x0006402d) main_cam6_set_pane_g2_ParamLimits

0x7998,	// (0x0006402d) main_cam6_set_pane_g2

0x79a4,	// (0x00064039) main_cset6_listscroll_pane_ParamLimits

0x79a4,	// (0x00064039) main_cset6_listscroll_pane

0x79cf,	// (0x00064064) main_cset6_slider_pane_ParamLimits

0x79cf,	// (0x00064064) main_cset6_slider_pane

0x79db,	// (0x00064070) main_cset6_text2_pane_ParamLimits

0x79db,	// (0x00064070) main_cset6_text2_pane

0xdf0a,	// (0x0006a59f) main_cset6_text_pane

0xdf12,	// (0x0006a5a7) main_cset_list_pane_copy1_ParamLimits

0xdf12,	// (0x0006a5a7) main_cset_list_pane_copy1

0xdf22,	// (0x0006a5b7) scroll_pane_cp028_copy1

0x79ee,	// (0x00064083) cset_list_set_pane_copy1

0x7a04,	// (0x00064099) aid_position_infowindow_above_copy1

0x7a0c,	// (0x000640a1) aid_position_infowindow_below_copy1

0x7a14,	// (0x000640a9) cset_list_set_pane_g1_copy1

0x6bd8,	// (0x0006326d) cset_list_set_pane_g3_copy1_ParamLimits

0x6bd8,	// (0x0006326d) cset_list_set_pane_g3_copy1

0x6be7,	// (0x0006327c) cset_list_set_pane_t1_copy1_ParamLimits

0x6be7,	// (0x0006327c) cset_list_set_pane_t1_copy1

0xa6a6,	// (0x00066d3b) list_highlight_pane_cp021_copy1_ParamLimits

0xa6a6,	// (0x00066d3b) list_highlight_pane_cp021_copy1

0xdf2b,	// (0x0006a5c0) cset6_slider_pane_ParamLimits

0xdf2b,	// (0x0006a5c0) cset6_slider_pane

0xdf57,	// (0x0006a5ec) main_cset6_slider_pane_g1_ParamLimits

0xdf57,	// (0x0006a5ec) main_cset6_slider_pane_g1

0x7a1c,	// (0x000640b1) main_cset6_slider_pane_g2_ParamLimits

0x7a1c,	// (0x000640b1) main_cset6_slider_pane_g2

0xdf7f,	// (0x0006a614) main_cset6_slider_pane_g3_ParamLimits

0xdf7f,	// (0x0006a614) main_cset6_slider_pane_g3

0x7a44,	// (0x000640d9) main_cset6_slider_pane_g4_ParamLimits

0x7a44,	// (0x000640d9) main_cset6_slider_pane_g4

0x7a50,	// (0x000640e5) main_cset6_slider_pane_g5_ParamLimits

0x7a50,	// (0x000640e5) main_cset6_slider_pane_g5

0xd7d8,	// (0x00069e6d) main_cset6_slider_pane_g7_ParamLimits

0xd7d8,	// (0x00069e6d) main_cset6_slider_pane_g7

0xd7e4,	// (0x00069e79) main_cset6_slider_pane_g8_ParamLimits

0xd7e4,	// (0x00069e79) main_cset6_slider_pane_g8

0x7a5e,	// (0x000640f3) main_cset6_slider_pane_g9_ParamLimits

0x7a5e,	// (0x000640f3) main_cset6_slider_pane_g9

0x7a6a,	// (0x000640ff) main_cset6_slider_pane_g10_ParamLimits

0x7a6a,	// (0x000640ff) main_cset6_slider_pane_g10

0x7a76,	// (0x0006410b) main_cset6_slider_pane_g11_ParamLimits

0x7a76,	// (0x0006410b) main_cset6_slider_pane_g11

0x7a82,	// (0x00064117) main_cset6_slider_pane_g12_ParamLimits

0x7a82,	// (0x00064117) main_cset6_slider_pane_g12

0xd95d,	// (0x00069ff2) main_cset6_slider_pane_g13_ParamLimits

0xd95d,	// (0x00069ff2) main_cset6_slider_pane_g13

0xd969,	// (0x00069ffe) main_cset6_slider_pane_g14_ParamLimits

0xd969,	// (0x00069ffe) main_cset6_slider_pane_g14

0x7a8e,	// (0x00064123) main_cset6_slider_pane_g15_ParamLimits

0x7a8e,	// (0x00064123) main_cset6_slider_pane_g15

0x7aa6,	// (0x0006413b) main_cset6_slider_pane_g16_ParamLimits

0x7aa6,	// (0x0006413b) main_cset6_slider_pane_g16

0x7ab4,	// (0x00064149) main_cset6_slider_pane_g17_ParamLimits

0x7ab4,	// (0x00064149) main_cset6_slider_pane_g17

0x0011,

0xf97c,	// (0x0006c011) main_cset6_slider_pane_g_ParamLimits

0xf97c,	// (0x0006c011) main_cset6_slider_pane_g

0xdf97,	// (0x0006a62c) main_cset6_slider_pane_t1_ParamLimits

0xdf97,	// (0x0006a62c) main_cset6_slider_pane_t1

0x7ace,	// (0x00064163) main_cset6_slider_pane_t2_ParamLimits

0x7ace,	// (0x00064163) main_cset6_slider_pane_t2

0x7af9,	// (0x0006418e) main_cset6_slider_pane_t3_ParamLimits

0x7af9,	// (0x0006418e) main_cset6_slider_pane_t3

0x7b24,	// (0x000641b9) main_cset6_slider_pane_t4_ParamLimits

0x7b24,	// (0x000641b9) main_cset6_slider_pane_t4

0x7b4f,	// (0x000641e4) main_cset6_slider_pane_t5_ParamLimits

0x7b4f,	// (0x000641e4) main_cset6_slider_pane_t5

0xdfd8,	// (0x0006a66d) main_cset6_slider_pane_t7_ParamLimits

0xdfd8,	// (0x0006a66d) main_cset6_slider_pane_t7

0x7b7c,	// (0x00064211) main_cset6_slider_pane_t8_ParamLimits

0x7b7c,	// (0x00064211) main_cset6_slider_pane_t8

0x7ba0,	// (0x00064235) main_cset6_slider_pane_t9_ParamLimits

0x7ba0,	// (0x00064235) main_cset6_slider_pane_t9

0x7bc4,	// (0x00064259) main_cset6_slider_pane_t10_ParamLimits

0x7bc4,	// (0x00064259) main_cset6_slider_pane_t10

0x7be8,	// (0x0006427d) main_cset6_slider_pane_t11_ParamLimits

0x7be8,	// (0x0006427d) main_cset6_slider_pane_t11

0xe00e,	// (0x0006a6a3) main_cset6_slider_pane_t14_ParamLimits

0xe00e,	// (0x0006a6a3) main_cset6_slider_pane_t14

0xe047,	// (0x0006a6dc) main_cset6_slider_pane_t15_ParamLimits

0xe047,	// (0x0006a6dc) main_cset6_slider_pane_t15

0x000b,

0xf9a1,	// (0x0006c036) main_cset6_slider_pane_t_ParamLimits

0xf9a1,	// (0x0006c036) main_cset6_slider_pane_t

0xd4da,	// (0x00069b6f) cset_slider_pane_g1_copy1

0xd975,	// (0x0006a00a) cset_slider_pane_g2_copy1

0xd97e,	// (0x0006a013) cset_slider_pane_g3_copy1

0x9b9f,	// (0x00066234) bg_popup_sub_pane_cp011_copy1

0xe080,	// (0x0006a715) main_cset_text_pane_g1_copy1

0xd91c,	// (0x00069fb1) main_cset_text_pane_t1_copy1

0xd92a,	// (0x00069fbf) main_cset_text_pane_t2_copy1

0xd938,	// (0x00069fcd) main_cset_text_pane_t3_copy1

0xd946,	// (0x00069fdb) main_cset_text_pane_t4_copy1

0xd99b,	// (0x0006a030) main_cset_text_pane_t5_copy1

0xe088,	// (0x0006a71d) main_cset_text_pane_t6_copy1

0xe096,	// (0x0006a72b) main_cset_text_pane_t7_copy1

0x7ce4,	// (0x00064379) main_cset_text2_pane_t1_copy1

0x416d,	// (0x00060802) main_ncimui_pane

0x41cc,	// (0x00060861) popup_query_ncimui_window_ParamLimits

0x41cc,	// (0x00060861) popup_query_ncimui_window

0xa079,	// (0x0006670e) field_cale_ev2_pane_g4_ParamLimits

0xa079,	// (0x0006670e) field_cale_ev2_pane_g4

0x5ac3,	// (0x00062158) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5ac3,	// (0x00062158) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6c2,	// (0x0006bd57) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6c2,	// (0x0006bd57) cell_video_dialer_keypad_pane_g

0x5adb,	// (0x00062170) cell_video_dialer_keypad_pane_t1

0x9b9f,	// (0x00066234) bg_popup_window_pane_cp012

0xb185,	// (0x0006781a) heading_pane_cp06

0xe0c2,	// (0x0006a757) ncim_query_content_pane

0x9b9f,	// (0x00066234) bg_popup_heading_pane_cp01

0xe0ca,	// (0x0006a75f) ncim_heading_pane_t1

0xe0d8,	// (0x0006a76d) ncim_indicator_popup_pane

0xe0ea,	// (0x0006a77f) ncim_query_button_pane

0xe0fe,	// (0x0006a793) ncim_query_content_pane_t1

0xe110,	// (0x0006a7a5) ncim_query_content_pane_t2

0x0005,

0xf9e5,	// (0x0006c07a) ncim_query_content_pane_t

0xe14a,	// (0x0006a7df) ncim_query_list_pane

0xe15c,	// (0x0006a7f1) ncim_query_popup_pane

0xe0d8,	// (0x0006a76d) ncim_indicator_popup_pane_ParamLimits

0x7e38,	// (0x000644cd) ncim_query_content_pane_g1_ParamLimits

0x7e38,	// (0x000644cd) ncim_query_content_pane_g1

0xe0fe,	// (0x0006a793) ncim_query_content_pane_t1_ParamLimits

0xe110,	// (0x0006a7a5) ncim_query_content_pane_t2_ParamLimits

0x7e44,	// (0x000644d9) ncim_query_content_pane_t3_ParamLimits

0x7e44,	// (0x000644d9) ncim_query_content_pane_t3

0x7e61,	// (0x000644f6) ncim_query_content_pane_t4_ParamLimits

0x7e61,	// (0x000644f6) ncim_query_content_pane_t4

0x7e7e,	// (0x00064513) ncim_query_content_pane_t5_ParamLimits

0x7e7e,	// (0x00064513) ncim_query_content_pane_t5

0xe122,	// (0x0006a7b7) ncim_query_content_pane_t6_ParamLimits

0xe122,	// (0x0006a7b7) ncim_query_content_pane_t6

0xf9e5,	// (0x0006c07a) ncim_query_content_pane_t_ParamLimits

0xe14a,	// (0x0006a7df) ncim_query_list_pane_ParamLimits

0xe15c,	// (0x0006a7f1) ncim_query_popup_pane_ParamLimits

0xe170,	// (0x0006a805) wait_bar_pane_cp04

0x9b9f,	// (0x00066234) input_focus_pane_cp011

0xe178,	// (0x0006a80d) ncim_query_popup_pane_t1

0xe186,	// (0x0006a81b) ncim_list_query_list_pane_ParamLimits

0xe186,	// (0x0006a81b) ncim_list_query_list_pane

0x9b9f,	// (0x00066234) bg_button_pane_cp027

0xe193,	// (0x0006a828) ncim_query_button_pane_g1

0x9b9f,	// (0x00066234) list_highlight_pane_cp012

0xe19d,	// (0x0006a832) ncim_list_query_list_pane_g1

0xe1a5,	// (0x0006a83a) ncim_list_query_list_pane_t1

0x626e,	// (0x00062903) cam4_indicators_pane_g3_ParamLimits

0x626e,	// (0x00062903) cam4_indicators_pane_g3

0x6370,	// (0x00062a05) vid4_indicators_pane_g5_ParamLimits

0x6370,	// (0x00062a05) vid4_indicators_pane_g5

0x7431,	// (0x00063ac6) vid4_progress_pane_g5_ParamLimits

0x7431,	// (0x00063ac6) vid4_progress_pane_g5

0x7d24,	// (0x000643b9) main_ncimui_pane_g1

0x7d8c,	// (0x00064421) ncimui_group_query_pane_ParamLimits

0x7d8c,	// (0x00064421) ncimui_group_query_pane

0x7dd4,	// (0x00064469) ncimui_list_pane_ParamLimits

0x7dd4,	// (0x00064469) ncimui_list_pane

0x7dfb,	// (0x00064490) ncimui_text_pane_ParamLimits

0x7dfb,	// (0x00064490) ncimui_text_pane

0x7e9b,	// (0x00064530) ncimui_text_pane_t1_ParamLimits

0x7e9b,	// (0x00064530) ncimui_text_pane_t1

0xe1b3,	// (0x0006a848) ncimui_list_single_graphic_pane_ParamLimits

0xe1b3,	// (0x0006a848) ncimui_list_single_graphic_pane

0x7eba,	// (0x0006454f) ncimui_query_pane_ParamLimits

0x7eba,	// (0x0006454f) ncimui_query_pane

0x9b9f,	// (0x00066234) list_highlight_pane_cp013

0xe1c3,	// (0x0006a858) ncim_list_query_list_pane_t1_copy1

0xe1d1,	// (0x0006a866) ncim_list_single_graphic_pane_g1

0x7ecd,	// (0x00064562) ncim_query_button_pane_cp01

0x7ed9,	// (0x0006456e) ncim_query_entry_pane_ParamLimits

0x7ed9,	// (0x0006456e) ncim_query_entry_pane

0x7eec,	// (0x00064581) ncimui_query_pane_g1

0x7ef8,	// (0x0006458d) ncimui_query_pane_t1_ParamLimits

0x7ef8,	// (0x0006458d) ncimui_query_pane_t1

0xa6a6,	// (0x00066d3b) input_focus_pane_cp012

0xe1d9,	// (0x0006a86e) ncim_query_entry_pane_t1

0xa899,	// (0x00066f2e) main_im_pane_ParamLimits

0x416d,	// (0x00060802) main_mobtv_pane_ParamLimits

0x416d,	// (0x00060802) main_mobtv_pane

0x7ac2,	// (0x00064157) main_cset6_slider_pane_g18_ParamLimits

0x7ac2,	// (0x00064157) main_cset6_slider_pane_g18

0xdf8b,	// (0x0006a620) main_cset6_slider_pane_g19_ParamLimits

0xdf8b,	// (0x0006a620) main_cset6_slider_pane_g19

0xd689,	// (0x00069d1e) bg_main_mobtv_pane_ParamLimits

0xd689,	// (0x00069d1e) bg_main_mobtv_pane

0x7f11,	// (0x000645a6) main_mobtv_info_pane

0x7f1c,	// (0x000645b1) main_mobtv_loading_pane_ParamLimits

0x7f1c,	// (0x000645b1) main_mobtv_loading_pane

0xe1eb,	// (0x0006a880) main_mobtv_pg_channel_list_pane

0xe1f5,	// (0x0006a88a) main_mobtv_pg_hdr_pane

0x7f29,	// (0x000645be) main_mobtv_programe_curr_pane_ParamLimits

0x7f29,	// (0x000645be) main_mobtv_programe_curr_pane

0x7f36,	// (0x000645cb) main_mobtv_programe_next_pane_ParamLimits

0x7f36,	// (0x000645cb) main_mobtv_programe_next_pane

0xe1fe,	// (0x0006a893) popup_mobtv_noti_window

0xcd13,	// (0x000693a8) main_tv_pg_hdr_pane_g1

0xe206,	// (0x0006a89b) main_tv_pg_hdr_pane_g2

0xe20e,	// (0x0006a8a3) main_tv_pg_hdr_pane_g3

0xe216,	// (0x0006a8ab) main_tv_pg_hdr_pane_g4

0xe21e,	// (0x0006a8b3) main_tv_pg_hdr_pane_g5

0xe228,	// (0x0006a8bd) main_tv_pg_hdr_pane_g6

0xe232,	// (0x0006a8c7) main_tv_pg_hdr_pane_g7

0xe23c,	// (0x0006a8d1) main_tv_pg_hdr_pane_g8

0xe246,	// (0x0006a8db) main_tv_pg_hdr_pane_g9

0xe250,	// (0x0006a8e5) main_tv_pg_hdr_pane_g10

0xe25a,	// (0x0006a8ef) main_tv_pg_hdr_pane_g11

0x000a,

0x0853,	// (0x0005cee8) main_tv_pg_hdr_pane_g

0xe264,	// (0x0006a8f9) main_tv_pg_hdr_pane_t1

0xe272,	// (0x0006a907) main_tv_pg_hdr_pane_t2

0xe280,	// (0x0006a915) main_tv_pg_hdr_pane_t3

0xe290,	// (0x0006a925) main_tv_pg_hdr_pane_t4

0xe2a0,	// (0x0006a935) main_tv_pg_hdr_pane_t5

0x0004,

0x086a,	// (0x0005ceff) main_tv_pg_hdr_pane_t

0xe2b0,	// (0x0006a945) single_mobtv_pg_channel_pane_ParamLimits

0xe2b0,	// (0x0006a945) single_mobtv_pg_channel_pane

0xe2c2,	// (0x0006a957) single_mobtv_pg_channel_table_pane

0xade1,	// (0x00067476) single_mobtv_pg_channel_thumb_pane

0xe2cb,	// (0x0006a960) single_tv_pg_channel_pane_g1

0xe2d4,	// (0x0006a969) single_tv_pg_channel_pane_g2

0x0001,

0x0875,	// (0x0005cf0a) single_tv_pg_channel_pane_g

0xcf58,	// (0x000695ed) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf58,	// (0x000695ed) bg_single_mobtv_pg_channel_thumb_pane

0xe2f4,	// (0x0006a989) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2f4,	// (0x0006a989) single_mobtv_pg_channel_thumb_pane_g1

0xe302,	// (0x0006a997) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe302,	// (0x0006a997) single_mobtv_pg_channel_thumb_pane_g2

0xe30e,	// (0x0006a9a3) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe30e,	// (0x0006a9a3) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xf9f2,	// (0x0006c087) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xf9f2,	// (0x0006c087) single_mobtv_pg_channel_thumb_pane_g

0xe31a,	// (0x0006a9af) single_mobtv_pg_channel_thumb_pane_t1

0xe328,	// (0x0006a9bd) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xf9f9,	// (0x0006c08e) single_mobtv_pg_channel_thumb_pane_t

0xcd13,	// (0x000693a8) bg_single_mobtv_pg_channel_table_pane_g1

0xcd13,	// (0x000693a8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x0323,	// (0x0005c9b8) bg_single_mobtv_pg_channel_table_pane_g

0xe336,	// (0x0006a9cb) single_mobtv_pg_channel_table_pane_t1

0xe344,	// (0x0006a9d9) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xf9fe,	// (0x0006c093) single_mobtv_pg_channel_table_pane_t

0x7f4b,	// (0x000645e0) main_mobtv_info_pane_g1_ParamLimits

0x7f4b,	// (0x000645e0) main_mobtv_info_pane_g1

0x7f67,	// (0x000645fc) main_mobtv_info_pane_t1_ParamLimits

0x7f67,	// (0x000645fc) main_mobtv_info_pane_t1

0x7fdf,	// (0x00064674) main_mobtv_info_pane_t2_ParamLimits

0x7fdf,	// (0x00064674) main_mobtv_info_pane_t2

0x0002,

0xfa08,	// (0x0006c09d) main_mobtv_info_pane_t_ParamLimits

0xfa08,	// (0x0006c09d) main_mobtv_info_pane_t

0x806e,	// (0x00064703) wait_bar_pane_cp05

0x8080,	// (0x00064715) main_mobtv_loading_pane_g1_ParamLimits

0x8080,	// (0x00064715) main_mobtv_loading_pane_g1

0x808e,	// (0x00064723) main_mobtv_loading_pane_g2_ParamLimits

0x808e,	// (0x00064723) main_mobtv_loading_pane_g2

0x809a,	// (0x0006472f) main_mobtv_loading_pane_g3_ParamLimits

0x809a,	// (0x0006472f) main_mobtv_loading_pane_g3

0x0002,

0xfa0f,	// (0x0006c0a4) main_mobtv_loading_pane_g_ParamLimits

0xfa0f,	// (0x0006c0a4) main_mobtv_loading_pane_g

0xe352,	// (0x0006a9e7) main_mobtv_loading_pane_t1_ParamLimits

0xe352,	// (0x0006a9e7) main_mobtv_loading_pane_t1

0xe36a,	// (0x0006a9ff) main_mobtv_loading_pane_t2_ParamLimits

0xe36a,	// (0x0006a9ff) main_mobtv_loading_pane_t2

0x0001,

0xfa16,	// (0x0006c0ab) main_mobtv_loading_pane_t_ParamLimits

0xfa16,	// (0x0006c0ab) main_mobtv_loading_pane_t

0x80a8,	// (0x0006473d) wait_bar_pane_cp06_ParamLimits

0x80a8,	// (0x0006473d) wait_bar_pane_cp06

0xe38e,	// (0x0006aa23) main_mobtv_programe_curr_pane_t1

0xe39c,	// (0x0006aa31) main_mobtv_programe_curr_pane_t2

0x0001,

0xfa1b,	// (0x0006c0b0) main_mobtv_programe_curr_pane_t

0xe3aa,	// (0x0006aa3f) main_mobtv_programe_next_pane_t1

0xe3b8,	// (0x0006aa4d) main_mobtv_programe_next_pane_t2

0xe3c6,	// (0x0006aa5b) main_mobtv_programe_next_pane_t3

0x0002,

0xfa20,	// (0x0006c0b5) main_mobtv_programe_next_pane_t

0x9b9f,	// (0x00066234) bg_popup_mobtv_noti_window_pane

0xe3d4,	// (0x0006aa69) popup_mobtv_noti_window_g1

0xe3dc,	// (0x0006aa71) popup_mobtv_noti_window_t1

0xe3ea,	// (0x0006aa7f) popup_mobtv_noti_window_t2

0x0001,

0xfa27,	// (0x0006c0bc) popup_mobtv_noti_window_t

0xcd13,	// (0x000693a8) bg_popup_mobtv_noti_window_pane_g1

0x0f3f,	// (0x0005d5d4) sc_clock_pane

0x0f3f,	// (0x0005d5d4) main_fs_bigclock_pane

0x764d,	// (0x00063ce2) blid2_tripm_pane_t4_ParamLimits

0x764d,	// (0x00063ce2) blid2_tripm_pane_t4

0x80b4,	// (0x00064749) sc_clock_pane_g1_ParamLimits

0x80b4,	// (0x00064749) sc_clock_pane_g1

0x80c2,	// (0x00064757) sc_clock_pane_t1_ParamLimits

0x80c2,	// (0x00064757) sc_clock_pane_t1

0x80d5,	// (0x0006476a) sc_clock_pane_t2_ParamLimits

0x80d5,	// (0x0006476a) sc_clock_pane_t2

0x80e7,	// (0x0006477c) sc_clock_pane_t3_ParamLimits

0x80e7,	// (0x0006477c) sc_clock_pane_t3

0x0004,

0xfa2c,	// (0x0006c0c1) sc_clock_pane_t_ParamLimits

0xfa2c,	// (0x0006c0c1) sc_clock_pane_t

0x903e,	// (0x000656d3) main_fs_bigclock_indicator_pane_ParamLimits

0x903e,	// (0x000656d3) main_fs_bigclock_indicator_pane

0x816a,	// (0x000647ff) main_fs_bigclock_pane_g1_ParamLimits

0x816a,	// (0x000647ff) main_fs_bigclock_pane_g1

0x904a,	// (0x000656df) main_fs_bigclock_pane_t1_ParamLimits

0x904a,	// (0x000656df) main_fs_bigclock_pane_t1

0x905c,	// (0x000656f1) main_fs_bigclock_pane_t2_ParamLimits

0x905c,	// (0x000656f1) main_fs_bigclock_pane_t2

0x9070,	// (0x00065705) main_fs_bigclock_pane_t3_ParamLimits

0x9070,	// (0x00065705) main_fs_bigclock_pane_t3

0x0002,

0xfbe7,	// (0x0006c27c) main_fs_bigclock_pane_t_ParamLimits

0xfbe7,	// (0x0006c27c) main_fs_bigclock_pane_t

0xec60,	// (0x0006b2f5) main_fs_bigclock_indicator_pane_g1

0xe0f2,	// (0x0006a787) ncim_query_content_pane_g2_ParamLimits

0xe0f2,	// (0x0006a787) ncim_query_content_pane_g2

0x0001,

0xf9e0,	// (0x0006c075) ncim_query_content_pane_g_ParamLimits

0xf9e0,	// (0x0006c075) ncim_query_content_pane_g

0x80fb,	// (0x00064790) sc_clock_pane_t4_ParamLimits

0x80fb,	// (0x00064790) sc_clock_pane_t4

0x416d,	// (0x00060802) main_radioblah_pane

0x6106,	// (0x0006279b) cell_call4_button_pane_t1_copy1_ParamLimits

0x6106,	// (0x0006279b) cell_call4_button_pane_t1_copy1

0x7d3e,	// (0x000643d3) main_ncimui_pane_t1_ParamLimits

0x7d3e,	// (0x000643d3) main_ncimui_pane_t1

0x7d58,	// (0x000643ed) main_ncimui_pane_t2_ParamLimits

0x7d58,	// (0x000643ed) main_ncimui_pane_t2

0x0002,

0xf9d9,	// (0x0006c06e) main_ncimui_pane_t_ParamLimits

0xf9d9,	// (0x0006c06e) main_ncimui_pane_t

0xe530,	// (0x0006abc5) main_radioblah_anim_pane_ParamLimits

0xe530,	// (0x0006abc5) main_radioblah_anim_pane

0xe541,	// (0x0006abd6) main_radioblah_info_pane_ParamLimits

0xe541,	// (0x0006abd6) main_radioblah_info_pane

0xe555,	// (0x0006abea) main_radioblah_pane_t1_ParamLimits

0xe555,	// (0x0006abea) main_radioblah_pane_t1

0xe571,	// (0x0006ac06) main_radioblah_pane_t2_ParamLimits

0xe571,	// (0x0006ac06) main_radioblah_pane_t2

0x0003,

0xfa4d,	// (0x0006c0e2) main_radioblah_pane_t_ParamLimits

0xfa4d,	// (0x0006c0e2) main_radioblah_pane_t

0x81c0,	// (0x00064855) main_radioblah_rocker_ctrl_pane_ParamLimits

0x81c0,	// (0x00064855) main_radioblah_rocker_ctrl_pane

0xe5b9,	// (0x0006ac4e) main_radioblah_info_pane_t1_ParamLimits

0xe5b9,	// (0x0006ac4e) main_radioblah_info_pane_t1

0x8205,	// (0x0006489a) main_radioblah_info_pane_t2_ParamLimits

0x8205,	// (0x0006489a) main_radioblah_info_pane_t2

0x0003,

0xfa56,	// (0x0006c0eb) main_radioblah_info_pane_t_ParamLimits

0xfa56,	// (0x0006c0eb) main_radioblah_info_pane_t

0xcd13,	// (0x000693a8) main_radioblah_rocker_ctrl_pane_g1

0x82b5,	// (0x0006494a) main_radioblah_rocker_ctrl_pane_g2

0x82bd,	// (0x00064952) main_radioblah_rocker_ctrl_pane_g3

0x82c5,	// (0x0006495a) main_radioblah_rocker_ctrl_pane_g4

0x82cd,	// (0x00064962) main_radioblah_rocker_ctrl_pane_g5

0x82d5,	// (0x0006496a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa5f,	// (0x0006c0f4) main_radioblah_rocker_ctrl_pane_g

0x7ce4,	// (0x00064379) main_cset_text2_pane_t1_copy1_ParamLimits

0x6191,	// (0x00062826) cam4_image_uncrop_qvga_pane

0x62e0,	// (0x00062975) vid4_image_uncrop_qcif_pane

0x77db,	// (0x00063e70) cam6_image_uncrop_qvga_pane_ParamLimits

0x77db,	// (0x00063e70) cam6_image_uncrop_qvga_pane

0xdded,	// (0x0006a482) vid6_image_uncrop_qcif_pane_ParamLimits

0xdded,	// (0x0006a482) vid6_image_uncrop_qcif_pane

0x9b9f,	// (0x00066234) bg_popup_preview_window_pane_cp03

0xe0a4,	// (0x0006a739) list_cset_text2_pane

0xe0ac,	// (0x0006a741) main_cset6_text2_pane_g1

0xe0b4,	// (0x0006a749) main_cset6_text2_pane_t1

0x82dd,	// (0x00064972) list_cset_text2_pane_t1_ParamLimits

0x82dd,	// (0x00064972) list_cset_text2_pane_t1

0x416d,	// (0x00060802) main_radioblah_pane_ParamLimits

0x805a,	// (0x000646ef) main_mobtv_info_pane_t3_ParamLimits

0x805a,	// (0x000646ef) main_mobtv_info_pane_t3

0x81ae,	// (0x00064843) main_radioblah_pane_g1

0x81d9,	// (0x0006486e) main_radioblah_info_pane_g1

0x825a,	// (0x000648ef) main_radioblah_info_pane_t3_ParamLimits

0x825a,	// (0x000648ef) main_radioblah_info_pane_t3

0x2e6f,	// (0x0005f504) highlight_cell_cale_month_pane_ParamLimits

0x2e6f,	// (0x0005f504) highlight_cell_cale_month_pane

0x0f3f,	// (0x0005d5d4) main_phob_fisheye_pane

0xd034,	// (0x000696c9) scroll_pane_cp0031_ParamLimits

0xd034,	// (0x000696c9) scroll_pane_cp0031

0xdefb,	// (0x0006a590) wait_bar_pane_cp08_ParamLimits

0x79ee,	// (0x00064083) cset_list_set_pane_copy1_ParamLimits

0xe605,	// (0x0006ac9a) highlight_cell_cale_month_pane_g1

0x82fe,	// (0x00064993) highlight_cell_cale_month_pane_t1

0xdb83,	// (0x0006a218) list_gen_pane_cp01

0xd7c3,	// (0x00069e58) scroll_pane_01

0x830c,	// (0x000649a1) list_single_double_fisheye_pane

0x8315,	// (0x000649aa) list_double_fisheye_pane_g1_ParamLimits

0x8315,	// (0x000649aa) list_double_fisheye_pane_g1

0x8321,	// (0x000649b6) list_double_fisheye_pane_g2_ParamLimits

0x8321,	// (0x000649b6) list_double_fisheye_pane_g2

0x8335,	// (0x000649ca) list_double_fisheye_pane_g3_ParamLimits

0x8335,	// (0x000649ca) list_double_fisheye_pane_g3

0x0004,

0xfa6c,	// (0x0006c101) list_double_fisheye_pane_g_ParamLimits

0xfa6c,	// (0x0006c101) list_double_fisheye_pane_g

0x835e,	// (0x000649f3) list_double_fisheye_pane_t1_ParamLimits

0x835e,	// (0x000649f3) list_double_fisheye_pane_t1

0x8379,	// (0x00064a0e) list_double_fisheye_pane_t2_ParamLimits

0x8379,	// (0x00064a0e) list_double_fisheye_pane_t2

0x0001,

0xfa77,	// (0x0006c10c) list_double_fisheye_pane_t_ParamLimits

0xfa77,	// (0x0006c10c) list_double_fisheye_pane_t

0x0f3f,	// (0x0005d5d4) main_call5_pane

0x8121,	// (0x000647b6) sc_swipe_pane_ParamLimits

0x8121,	// (0x000647b6) sc_swipe_pane

0x83a7,	// (0x00064a3c) call5_image_pane_ParamLimits

0x83a7,	// (0x00064a3c) call5_image_pane

0x83b7,	// (0x00064a4c) call5_swipe_1_pane_ParamLimits

0x83b7,	// (0x00064a4c) call5_swipe_1_pane

0x83c3,	// (0x00064a58) call5_swipe_2_pane_ParamLimits

0x83c3,	// (0x00064a58) call5_swipe_2_pane

0x83dd,	// (0x00064a72) popup_call5_audio_first_window_ParamLimits

0x83dd,	// (0x00064a72) popup_call5_audio_first_window

0xcf58,	// (0x000695ed) call5_swipe_1_pane_g1_ParamLimits

0xcf58,	// (0x000695ed) call5_swipe_1_pane_g1

0xe60d,	// (0x0006aca2) call5_swipe_1_pane_g2_ParamLimits

0xe60d,	// (0x0006aca2) call5_swipe_1_pane_g2

0x0001,

0xfa7c,	// (0x0006c111) call5_swipe_1_pane_g_ParamLimits

0xfa7c,	// (0x0006c111) call5_swipe_1_pane_g

0xe619,	// (0x0006acae) call5_swipe_1_pane_t1_ParamLimits

0xe619,	// (0x0006acae) call5_swipe_1_pane_t1

0xcf58,	// (0x000695ed) call5_swipe_2_pane_g1_ParamLimits

0xcf58,	// (0x000695ed) call5_swipe_2_pane_g1

0xe62e,	// (0x0006acc3) call5_swipe_2_pane_g2_ParamLimits

0xe62e,	// (0x0006acc3) call5_swipe_2_pane_g2

0x0001,

0xfa81,	// (0x0006c116) call5_swipe_2_pane_g_ParamLimits

0xfa81,	// (0x0006c116) call5_swipe_2_pane_g

0xe63a,	// (0x0006accf) call5_swipe_2_pane_t1_ParamLimits

0xe63a,	// (0x0006accf) call5_swipe_2_pane_t1

0xe64f,	// (0x0006ace4) sc_swipe_pane_g1_ParamLimits

0xe64f,	// (0x0006ace4) sc_swipe_pane_g1

0xe65c,	// (0x0006acf1) sc_swipe_pane_g2_ParamLimits

0xe65c,	// (0x0006acf1) sc_swipe_pane_g2

0x0001,

0xfa86,	// (0x0006c11b) sc_swipe_pane_g_ParamLimits

0xfa86,	// (0x0006c11b) sc_swipe_pane_g

0xe668,	// (0x0006acfd) sc_swipe_pane_t1_ParamLimits

0xe668,	// (0x0006acfd) sc_swipe_pane_t1

0x0f3f,	// (0x0005d5d4) main_cmail_launcher_pane

0x83eb,	// (0x00064a80) aid_size_cell_cmail_l_ParamLimits

0x83eb,	// (0x00064a80) aid_size_cell_cmail_l

0x83f9,	// (0x00064a8e) grid_cmail_l_pane_ParamLimits

0x83f9,	// (0x00064a8e) grid_cmail_l_pane

0x8409,	// (0x00064a9e) cell_cmail_l_pane_ParamLimits

0x8409,	// (0x00064a9e) cell_cmail_l_pane

0xe67d,	// (0x0006ad12) cell_cmail_l_pane_g1_ParamLimits

0xe67d,	// (0x0006ad12) cell_cmail_l_pane_g1

0xe689,	// (0x0006ad1e) cell_cmail_l_pane_t1_ParamLimits

0xe689,	// (0x0006ad1e) cell_cmail_l_pane_t1

0xe69f,	// (0x0006ad34) cell_cmail_l_pane_t2_ParamLimits

0xe69f,	// (0x0006ad34) cell_cmail_l_pane_t2

0x0001,

0xfa8b,	// (0x0006c120) cell_cmail_l_pane_t_ParamLimits

0xfa8b,	// (0x0006c120) cell_cmail_l_pane_t

0xa6a6,	// (0x00066d3b) grid_highlight_pane_cp018_ParamLimits

0xa6a6,	// (0x00066d3b) grid_highlight_pane_cp018

0x0d95,	// (0x0005d42a) main2_pane_ParamLimits

0x0d95,	// (0x0005d42a) main2_pane

0xa932,	// (0x00066fc7) popup_sp_fs_action_menu_bg_pane_g1

0xa93a,	// (0x00066fcf) popup_sp_fs_action_menu_bg_pane_g2

0xa942,	// (0x00066fd7) popup_sp_fs_action_menu_bg_pane_g3

0xa94a,	// (0x00066fdf) popup_sp_fs_action_menu_bg_pane_g4

0xa952,	// (0x00066fe7) popup_sp_fs_action_menu_bg_pane_g5

0xa95a,	// (0x00066fef) popup_sp_fs_action_menu_bg_pane_g6

0xa962,	// (0x00066ff7) popup_sp_fs_action_menu_bg_pane_g7

0xa96a,	// (0x00066fff) popup_sp_fs_action_menu_bg_pane_g8

0xa972,	// (0x00067007) popup_sp_fs_action_menu_bg_pane_g9

0xa97a,	// (0x0006700f) popup_sp_fs_action_menu_bg_pane_g10

0xa97a,	// (0x0006700f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x0006b804) popup_sp_fs_action_menu_bg_pane_g

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t3_g3_g1

0x1c63,	// (0x0005e2f8) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1c63,	// (0x0005e2f8) list_medium_line_x2_t3_g3_g2

0x1c6f,	// (0x0005e304) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1c6f,	// (0x0005e304) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x0006b8b2) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x0006b8b2) list_medium_line_x2_t3_g3_g

0x1c7b,	// (0x0005e310) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1c7b,	// (0x0005e310) list_medium_line_x2_t3_g3_t1

0x1c90,	// (0x0005e325) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1c90,	// (0x0005e325) list_medium_line_x2_t3_g3_t2

0x1ca2,	// (0x0005e337) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1ca2,	// (0x0005e337) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x0006b8b9) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x0006b8b9) list_medium_line_x2_t3_g3_t

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t3_g2_g1

0x1c6f,	// (0x0005e304) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1c6f,	// (0x0005e304) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x0006b8c0) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x0006b8c0) list_medium_line_x2_t3_g2_g

0x1cb7,	// (0x0005e34c) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1cb7,	// (0x0005e34c) list_medium_line_x2_t3_g2_t1

0x1ccc,	// (0x0005e361) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1ccc,	// (0x0005e361) list_medium_line_x2_t3_g2_t2

0x1cde,	// (0x0005e373) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1cde,	// (0x0005e373) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x0006b8c5) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x0006b8c5) list_medium_line_x2_t3_g2_t

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t4_g4_g1

0x1cfc,	// (0x0005e391) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1cfc,	// (0x0005e391) list_medium_line_x2_t4_g4_g2

0x1c63,	// (0x0005e2f8) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1c63,	// (0x0005e2f8) list_medium_line_x2_t4_g4_g3

0x1d08,	// (0x0005e39d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1d08,	// (0x0005e39d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x0006b8cc) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x0006b8cc) list_medium_line_x2_t4_g4_g

0x1d14,	// (0x0005e3a9) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1d14,	// (0x0005e3a9) list_medium_line_x2_t4_g4_t1

0x1d2e,	// (0x0005e3c3) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1d2e,	// (0x0005e3c3) list_medium_line_x2_t4_g4_t2

0x1d44,	// (0x0005e3d9) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1d44,	// (0x0005e3d9) list_medium_line_x2_t4_g4_t3

0x1d59,	// (0x0005e3ee) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1d59,	// (0x0005e3ee) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x0006b8d5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x0006b8d5) list_medium_line_x2_t4_g4_t

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t2_g4_g1

0x1cfc,	// (0x0005e391) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1cfc,	// (0x0005e391) list_medium_line_x2_t2_g4_g2

0x1c63,	// (0x0005e2f8) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1c63,	// (0x0005e2f8) list_medium_line_x2_t2_g4_g3

0x1c6f,	// (0x0005e304) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1c6f,	// (0x0005e304) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x0006b93c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x0006b93c) list_medium_line_x2_t2_g4_g

0x2e95,	// (0x0005f52a) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2e95,	// (0x0005f52a) list_medium_line_x2_t2_g4_t1

0x1ca2,	// (0x0005e337) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1ca2,	// (0x0005e337) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x0006b945) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x0006b945) list_medium_line_x2_t2_g4_t

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t2_g3_g1

0x1c63,	// (0x0005e2f8) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1c63,	// (0x0005e2f8) list_medium_line_x2_t2_g3_g2

0x1c6f,	// (0x0005e304) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1c6f,	// (0x0005e304) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x0006b8b2) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x0006b8b2) list_medium_line_x2_t2_g3_g

0x2eaa,	// (0x0005f53f) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2eaa,	// (0x0005f53f) list_medium_line_x2_t2_g3_t1

0x1ca2,	// (0x0005e337) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1ca2,	// (0x0005e337) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x0006b94a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x0006b94a) list_medium_line_x2_t2_g3_t

0x3093,	// (0x0005f728) main_sp_fs_list_pane_ParamLimits

0x3093,	// (0x0005f728) main_sp_fs_list_pane

0x309f,	// (0x0005f734) sp_fs_scroll_pane_ParamLimits

0x309f,	// (0x0005f734) sp_fs_scroll_pane

0x30ab,	// (0x0005f740) list_medium_line_x2_t3_t1

0x30bb,	// (0x0005f750) list_medium_line_x2_t3_t2

0x30c9,	// (0x0005f75e) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x0006b995) list_medium_line_x2_t3_t

0x30d7,	// (0x0005f76c) list_medium_line_x3_t4_t1

0x30e7,	// (0x0005f77c) list_medium_line_x3_t4_t2

0x30f5,	// (0x0005f78a) list_medium_line_x3_t4_t3

0x30c9,	// (0x0005f75e) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x0006b99c) list_medium_line_x3_t4_t

0x3103,	// (0x0005f798) list_medium_line_x4_t5_t1

0x3113,	// (0x0005f7a8) list_medium_line_x4_t5_t2

0x30f5,	// (0x0005f78a) list_medium_line_x4_t5_t3

0x3121,	// (0x0005f7b6) list_medium_line_x4_t5_t4

0x30c9,	// (0x0005f75e) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x0006b9a5) list_medium_line_x4_t5_t

0x1c57,	// (0x0005e2ec) list_medium_line_t4_g4_g1_ParamLimits

0x1c57,	// (0x0005e2ec) list_medium_line_t4_g4_g1

0x1d08,	// (0x0005e39d) list_medium_line_t4_g4_g2_ParamLimits

0x1d08,	// (0x0005e39d) list_medium_line_t4_g4_g2

0x312f,	// (0x0005f7c4) list_medium_line_t4_g4_g3_ParamLimits

0x312f,	// (0x0005f7c4) list_medium_line_t4_g4_g3

0x1c6f,	// (0x0005e304) list_medium_line_t4_g4_g4_ParamLimits

0x1c6f,	// (0x0005e304) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x0006b9b0) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x0006b9b0) list_medium_line_t4_g4_g

0x313b,	// (0x0005f7d0) list_medium_line_t4_g4_t1_ParamLimits

0x313b,	// (0x0005f7d0) list_medium_line_t4_g4_t1

0x3150,	// (0x0005f7e5) list_medium_line_t4_g4_t2_ParamLimits

0x3150,	// (0x0005f7e5) list_medium_line_t4_g4_t2

0x3166,	// (0x0005f7fb) list_medium_line_t4_g4_t3_ParamLimits

0x3166,	// (0x0005f7fb) list_medium_line_t4_g4_t3

0x1ca2,	// (0x0005e337) list_medium_line_t4_g4_t4_ParamLimits

0x1ca2,	// (0x0005e337) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x0006b9b9) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x0006b9b9) list_medium_line_t4_g4_t

0x3287,	// (0x0005f91c) chi_dic_find_pane_g1

0x4189,	// (0x0006081e) main_tport_pane

0x6cd6,	// (0x0006336b) list_medium_line_plain_t1

0x6db6,	// (0x0006344b) list_medium_line_t2_g2_g1_ParamLimits

0x6db6,	// (0x0006344b) list_medium_line_t2_g2_g1

0x6dc2,	// (0x00063457) list_medium_line_t2_g2_g2_ParamLimits

0x6dc2,	// (0x00063457) list_medium_line_t2_g2_g2

0x0001,

0xf80c,	// (0x0006bea1) list_medium_line_t2_g2_g_ParamLimits

0xf80c,	// (0x0006bea1) list_medium_line_t2_g2_g

0x6dce,	// (0x00063463) list_medium_line_t2_g2_t1_ParamLimits

0x6dce,	// (0x00063463) list_medium_line_t2_g2_t1

0x6de8,	// (0x0006347d) list_medium_line_t2_g2_t2_ParamLimits

0x6de8,	// (0x0006347d) list_medium_line_t2_g2_t2

0x0001,

0xf811,	// (0x0006bea6) list_medium_line_t2_g2_t_ParamLimits

0xf811,	// (0x0006bea6) list_medium_line_t2_g2_t

0xa16a,	// (0x000667ff) aid_sp_fs_list_icon_a_sm

0xa172,	// (0x00066807) aid_sp_fs_list_icon_d

0xa17a,	// (0x0006680f) aid_sp_fs_text_primary

0xe2eb,	// (0x0006a980) aid_sp_fs_text_secondary

0x748f,	// (0x00063b24) list_medium_line

0x748f,	// (0x00063b24) list_medium_line_g2

0x748f,	// (0x00063b24) list_medium_line_g3

0x748f,	// (0x00063b24) list_medium_line_plain

0x748f,	// (0x00063b24) list_medium_line_plain_t2

0x748f,	// (0x00063b24) list_medium_line_plain_t3

0x748f,	// (0x00063b24) list_medium_line_right_icon

0x748f,	// (0x00063b24) list_medium_line_right_iconx2

0x748f,	// (0x00063b24) list_medium_line_t2

0x748f,	// (0x00063b24) list_medium_line_t2_g2

0x748f,	// (0x00063b24) list_medium_line_t2_g3

0x748f,	// (0x00063b24) list_medium_line_t2_right_icon

0x748f,	// (0x00063b24) list_medium_line_t2_right_iconx2

0x748f,	// (0x00063b24) list_medium_line_t3

0x748f,	// (0x00063b24) list_medium_line_t3_g2

0x748f,	// (0x00063b24) list_medium_line_t3_g3

0x748f,	// (0x00063b24) list_medium_line_t3_right_iconx2

0x7498,	// (0x00063b2d) list_medium_line_t4_g4

0x74a1,	// (0x00063b36) list_medium_line_x2

0x74a1,	// (0x00063b36) list_medium_line_x2_t2_g2

0x74a1,	// (0x00063b36) list_medium_line_x2_t2_g3

0x74a1,	// (0x00063b36) list_medium_line_x2_t2_g4

0x74a1,	// (0x00063b36) list_medium_line_x2_t3

0x74a1,	// (0x00063b36) list_medium_line_x2_t3_g2

0x74a1,	// (0x00063b36) list_medium_line_x2_t3_g3

0x74a1,	// (0x00063b36) list_medium_line_x2_t3_g4

0x74a1,	// (0x00063b36) list_medium_line_x2_t4_g2

0x74a1,	// (0x00063b36) list_medium_line_x2_t4_g4

0x74aa,	// (0x00063b3f) list_medium_line_x3

0x74aa,	// (0x00063b3f) list_medium_line_x3_t4

0x74aa,	// (0x00063b3f) list_medium_line_x3_t4_g4

0x7498,	// (0x00063b2d) list_medium_line_x4_t4

0x7498,	// (0x00063b2d) list_medium_line_x4_t4_g7

0x7498,	// (0x00063b2d) list_medium_line_x4_t5

0x74b3,	// (0x00063b48) list_single_fs_dyc_pane_ParamLimits

0x74b3,	// (0x00063b48) list_single_fs_dyc_pane

0x1c57,	// (0x0005e2ec) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1c57,	// (0x0005e2ec) list_medium_line_x4_t4_g7_g1

0x7c0e,	// (0x000642a3) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7c0e,	// (0x000642a3) list_medium_line_x4_t4_g7_g2

0x7c1a,	// (0x000642af) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7c1a,	// (0x000642af) list_medium_line_x4_t4_g7_g3

0x7c29,	// (0x000642be) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7c29,	// (0x000642be) list_medium_line_x4_t4_g7_g4

0x7c35,	// (0x000642ca) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7c35,	// (0x000642ca) list_medium_line_x4_t4_g7_g5

0x7c44,	// (0x000642d9) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7c44,	// (0x000642d9) list_medium_line_x4_t4_g7_g6

0x7c53,	// (0x000642e8) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7c53,	// (0x000642e8) list_medium_line_x4_t4_g7_g7

0x0006,

0xf9ba,	// (0x0006c04f) list_medium_line_x4_t4_g7_g_ParamLimits

0xf9ba,	// (0x0006c04f) list_medium_line_x4_t4_g7_g

0x7c5f,	// (0x000642f4) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7c5f,	// (0x000642f4) list_medium_line_x4_t4_g7_t1

0x7c74,	// (0x00064309) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7c74,	// (0x00064309) list_medium_line_x4_t4_g7_t2

0x7c89,	// (0x0006431e) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7c89,	// (0x0006431e) list_medium_line_x4_t4_g7_t3

0x7c9e,	// (0x00064333) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c9e,	// (0x00064333) list_medium_line_x4_t4_g7_t4

0x7cb0,	// (0x00064345) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7cb0,	// (0x00064345) list_medium_line_x4_t4_g7_t5

0x0004,

0xf9c9,	// (0x0006c05e) list_medium_line_x4_t4_g7_t_ParamLimits

0xf9c9,	// (0x0006c05e) list_medium_line_x4_t4_g7_t

0x7cc2,	// (0x00064357) list_single_dyc_row_pane_ParamLimits

0x7cc2,	// (0x00064357) list_single_dyc_row_pane

0x839b,	// (0x00064a30) call5_gesture_pane_ParamLimits

0x839b,	// (0x00064a30) call5_gesture_pane

0x83cf,	// (0x00064a64) call5_windows_pane_ParamLimits

0x83cf,	// (0x00064a64) call5_windows_pane

0x8422,	// (0x00064ab7) call5_swipe_1_pane_cp_ParamLimits

0x8422,	// (0x00064ab7) call5_swipe_1_pane_cp

0x842e,	// (0x00064ac3) call5_swipe_2_pane_cp_ParamLimits

0x842e,	// (0x00064ac3) call5_swipe_2_pane_cp

0xaa5e,	// (0x000670f3) call5_image_pane_cp

0x843a,	// (0x00064acf) popup_call5_audio_first_window_cp_ParamLimits

0x843a,	// (0x00064acf) popup_call5_audio_first_window_cp

0xe64f,	// (0x0006ace4) call5_swipe_1_pane_g1_cp_ParamLimits

0xe64f,	// (0x0006ace4) call5_swipe_1_pane_g1_cp

0xe6bc,	// (0x0006ad51) call5_swipe_1_pane_g2_cp

0xe668,	// (0x0006acfd) call5_swipe_1_pane_t1_cp_ParamLimits

0xe668,	// (0x0006acfd) call5_swipe_1_pane_t1_cp

0xe64f,	// (0x0006ace4) call5_swipe_2_pane_g1_cp_ParamLimits

0xe64f,	// (0x0006ace4) call5_swipe_2_pane_g1_cp

0xe6c4,	// (0x0006ad59) call5_swipe_2_pane_g2_cp

0xe6cc,	// (0x0006ad61) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6cc,	// (0x0006ad61) call5_swipe_2_pane_t1_cp

0xa6a6,	// (0x00066d3b) main_sp_fs_email_pane

0xe6e1,	// (0x0006ad76) main_sp_fs_listscroll_pane_te

0xa183,	// (0x00066818) popup_sp_fs_action_menu_pane_ParamLimits

0xa183,	// (0x00066818) popup_sp_fs_action_menu_pane

0xcd13,	// (0x000693a8) bg_sp_fs_ctrlbar_pane_g1

0xe6ea,	// (0x0006ad7f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f3,	// (0x0006ad88) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6fc,	// (0x0006ad91) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd13,	// (0x000693a8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfa90,	// (0x0006c125) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaf8,	// (0x0006918d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaf8,	// (0x0006918d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe705,	// (0x0006ad9a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe705,	// (0x0006ad9a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe711,	// (0x0006ada6) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe711,	// (0x0006ada6) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfa99,	// (0x0006c12e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfa99,	// (0x0006c12e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe71d,	// (0x0006adb2) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe71d,	// (0x0006adb2) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8448,	// (0x00064add) list_medium_line_t2_right_icon_g1

0x8450,	// (0x00064ae5) list_medium_line_t2_right_icon_t1

0x8460,	// (0x00064af5) list_medium_line_t2_right_icon_t2

0x0001,

0xfa9e,	// (0x0006c133) list_medium_line_t2_right_icon_t

0xc90b,	// (0x00068fa0) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc90b,	// (0x00068fa0) bg_sp_fs_ctrlbar_pane

0x84b1,	// (0x00064b46) main_sp_fs_ctrlbar_button_pane_cp01

0x84b9,	// (0x00064b4e) main_sp_fs_ctrlbar_ddmenu_pane

0xe76f,	// (0x0006ae04) main_sp_fs_ctrlbar_pane_g1

0xe77b,	// (0x0006ae10) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfaa3,	// (0x0006c138) main_sp_fs_ctrlbar_pane_g

0x84f5,	// (0x00064b8a) main_sp_fs_ctrlbar_pane_t1

0x8530,	// (0x00064bc5) main_sp_fs_ctrlbar_pane

0x8546,	// (0x00064bdb) main_sp_fs_listscroll_pane_te_cp01

0x8557,	// (0x00064bec) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8557,	// (0x00064bec) popup_sp_fs_action_menu_pane_cp01

0xa6a6,	// (0x00066d3b) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa6a6,	// (0x00066d3b) bg_sp_fs_highlight_list_pane_cp01

0xa1c5,	// (0x0006685a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa1c5,	// (0x0006685a) sp_fs_action_menu_list_gene_pane_g1

0xe7a2,	// (0x0006ae37) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7a2,	// (0x0006ae37) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfab1,	// (0x0006c146) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfab1,	// (0x0006c146) sp_fs_action_menu_list_gene_pane_g

0xa1d4,	// (0x00066869) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa1d4,	// (0x00066869) sp_fs_action_menu_list_gene_pane_t1

0xa1ec,	// (0x00066881) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa1ec,	// (0x00066881) sp_fs_action_menu_list_gene_pane

0xe7af,	// (0x0006ae44) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7af,	// (0x0006ae44) popup_sp_fs_action_menu_bg_pane

0xa20b,	// (0x000668a0) sp_fs_action_menu_list_pane_ParamLimits

0xa20b,	// (0x000668a0) sp_fs_action_menu_list_pane

0xa22b,	// (0x000668c0) sp_fs_scroll_pane_cp01_ParamLimits

0xa22b,	// (0x000668c0) sp_fs_scroll_pane_cp01

0x8581,	// (0x00064c16) list_medium_line_plain_t2_t1

0x8591,	// (0x00064c26) list_medium_line_plain_t2_t2

0x0001,

0xfab6,	// (0x0006c14b) list_medium_line_plain_t2_t

0x859f,	// (0x00064c34) list_medium_line_plain_t3_t1

0x85af,	// (0x00064c44) list_medium_line_plain_t3_t2

0x85bd,	// (0x00064c52) list_medium_line_plain_t3_t3

0x0002,

0xfabb,	// (0x0006c150) list_medium_line_plain_t3_t

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t2_g2_g1

0x1c6f,	// (0x0005e304) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1c6f,	// (0x0005e304) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x0006b8c0) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x0006b8c0) list_medium_line_x2_t2_g2_g

0x313b,	// (0x0005f7d0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x313b,	// (0x0005f7d0) list_medium_line_x2_t2_g2_t1

0x1ca2,	// (0x0005e337) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1ca2,	// (0x0005e337) list_medium_line_x2_t2_g2_t2

0x0001,

0xfac2,	// (0x0006c157) list_medium_line_x2_t2_g2_t_ParamLimits

0xfac2,	// (0x0006c157) list_medium_line_x2_t2_g2_t

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t4_g2_g1

0x85cb,	// (0x00064c60) list_medium_line_x2_t4_g2_g2_ParamLimits

0x85cb,	// (0x00064c60) list_medium_line_x2_t4_g2_g2

0x0001,

0xfac7,	// (0x0006c15c) list_medium_line_x2_t4_g2_g_ParamLimits

0xfac7,	// (0x0006c15c) list_medium_line_x2_t4_g2_g

0x85dd,	// (0x00064c72) list_medium_line_x2_t4_g2_t1_ParamLimits

0x85dd,	// (0x00064c72) list_medium_line_x2_t4_g2_t1

0x85f7,	// (0x00064c8c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x85f7,	// (0x00064c8c) list_medium_line_x2_t4_g2_t2

0x860d,	// (0x00064ca2) list_medium_line_x2_t4_g2_t3_ParamLimits

0x860d,	// (0x00064ca2) list_medium_line_x2_t4_g2_t3

0x1ca2,	// (0x0005e337) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1ca2,	// (0x0005e337) list_medium_line_x2_t4_g2_t4

0x0003,

0xfacc,	// (0x0006c161) list_medium_line_x2_t4_g2_t_ParamLimits

0xfacc,	// (0x0006c161) list_medium_line_x2_t4_g2_t

0x8622,	// (0x00064cb7) list_medium_line_t3_right_iconx2_g1

0x8448,	// (0x00064add) list_medium_line_t3_right_iconx2_g2

0x862a,	// (0x00064cbf) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfad5,	// (0x0006c16a) list_medium_line_t3_right_iconx2_g

0x8632,	// (0x00064cc7) list_medium_line_t3_right_iconx2_t1

0x8642,	// (0x00064cd7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfadc,	// (0x0006c171) list_medium_line_t3_right_iconx2_t

0x1c57,	// (0x0005e2ec) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1c57,	// (0x0005e2ec) list_medium_line_x3_t4_g4_g1

0x1c63,	// (0x0005e2f8) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1c63,	// (0x0005e2f8) list_medium_line_x3_t4_g4_g2

0x1d08,	// (0x0005e39d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1d08,	// (0x0005e39d) list_medium_line_x3_t4_g4_g3

0x8650,	// (0x00064ce5) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8650,	// (0x00064ce5) list_medium_line_x3_t4_g4_g4

0x0003,

0xfae1,	// (0x0006c176) list_medium_line_x3_t4_g4_g_ParamLimits

0xfae1,	// (0x0006c176) list_medium_line_x3_t4_g4_g

0x865c,	// (0x00064cf1) list_medium_line_x3_t4_g4_t1_ParamLimits

0x865c,	// (0x00064cf1) list_medium_line_x3_t4_g4_t1

0x8673,	// (0x00064d08) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8673,	// (0x00064d08) list_medium_line_x3_t4_g4_t2

0x8688,	// (0x00064d1d) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8688,	// (0x00064d1d) list_medium_line_x3_t4_g4_t3

0x869d,	// (0x00064d32) list_medium_line_x3_t4_g4_t4_ParamLimits

0x869d,	// (0x00064d32) list_medium_line_x3_t4_g4_t4

0x0003,

0xfaea,	// (0x0006c17f) list_medium_line_x3_t4_g4_t_ParamLimits

0xfaea,	// (0x0006c17f) list_medium_line_x3_t4_g4_t

0x86ba,	// (0x00064d4f) list_single_dyc_row_text_pane_t1_ParamLimits

0x86ba,	// (0x00064d4f) list_single_dyc_row_text_pane_t1

0x86f1,	// (0x00064d86) list_single_dyc_row_text_pane_t2_ParamLimits

0x86f1,	// (0x00064d86) list_single_dyc_row_text_pane_t2

0xa251,	// (0x000668e6) list_single_dyc_row_text_pane_t3_ParamLimits

0xa251,	// (0x000668e6) list_single_dyc_row_text_pane_t3

0x0005,

0xfaf3,	// (0x0006c188) list_single_dyc_row_text_pane_t_ParamLimits

0xfaf3,	// (0x0006c188) list_single_dyc_row_text_pane_t

0xa275,	// (0x0006690a) list_single_dyc_row_pane_g1_ParamLimits

0xa275,	// (0x0006690a) list_single_dyc_row_pane_g1

0xa281,	// (0x00066916) list_single_dyc_row_pane_g2_ParamLimits

0xa281,	// (0x00066916) list_single_dyc_row_pane_g2

0xa28d,	// (0x00066922) list_single_dyc_row_pane_g3_ParamLimits

0xa28d,	// (0x00066922) list_single_dyc_row_pane_g3

0xa299,	// (0x0006692e) list_single_dyc_row_pane_g4_ParamLimits

0xa299,	// (0x0006692e) list_single_dyc_row_pane_g4

0x0003,

0xfb00,	// (0x0006c195) list_single_dyc_row_pane_g_ParamLimits

0xfb00,	// (0x0006c195) list_single_dyc_row_pane_g

0xa2a5,	// (0x0006693a) list_single_dyc_row_text_pane_ParamLimits

0xa2a5,	// (0x0006693a) list_single_dyc_row_text_pane

0x9b9f,	// (0x00066234) bg_sp_fs_scroll_pane

0xe7bd,	// (0x0006ae52) thumb_sp_fs_scroll_pane

0x6db6,	// (0x0006344b) list_medium_line_g1_ParamLimits

0x6db6,	// (0x0006344b) list_medium_line_g1

0x8814,	// (0x00064ea9) list_medium_line_t1_ParamLimits

0x8814,	// (0x00064ea9) list_medium_line_t1

0x1c57,	// (0x0005e2ec) list_medium_line_x2_g1_ParamLimits

0x1c57,	// (0x0005e2ec) list_medium_line_x2_g1

0x1c63,	// (0x0005e2f8) list_medium_line_x2_g2_ParamLimits

0x1c63,	// (0x0005e2f8) list_medium_line_x2_g2

0x0001,

0xfb09,	// (0x0006c19e) list_medium_line_x2_g_ParamLimits

0xfb09,	// (0x0006c19e) list_medium_line_x2_g

0xa2c4,	// (0x00066959) list_medium_line_x2_t1_ParamLimits

0xa2c4,	// (0x00066959) list_medium_line_x2_t1

0x1c57,	// (0x0005e2ec) list_medium_line_x3_g1_ParamLimits

0x1c57,	// (0x0005e2ec) list_medium_line_x3_g1

0x1c63,	// (0x0005e2f8) list_medium_line_x3_g2_ParamLimits

0x1c63,	// (0x0005e2f8) list_medium_line_x3_g2

0x0001,

0xfb09,	// (0x0006c19e) list_medium_line_x3_g_ParamLimits

0xfb09,	// (0x0006c19e) list_medium_line_x3_g

0xa2c4,	// (0x00066959) list_medium_line_x3_t1_ParamLimits

0xa2c4,	// (0x00066959) list_medium_line_x3_t1

0xe7c6,	// (0x0006ae5b) thumb_sp_fs_scroll_pane_g1

0xe7cf,	// (0x0006ae64) thumb_sp_fs_scroll_pane_g2

0xe7d8,	// (0x0006ae6d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfb0e,	// (0x0006c1a3) thumb_sp_fs_scroll_pane_g

0xe7c6,	// (0x0006ae5b) bg_sp_fs_scroll_pane_g1

0xe7cf,	// (0x0006ae64) bg_sp_fs_scroll_pane_g2

0xe7d8,	// (0x0006ae6d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfb0e,	// (0x0006c1a3) bg_sp_fs_scroll_pane_g

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1c57,	// (0x0005e2ec) list_medium_line_x2_t3_g4_g1

0x1cfc,	// (0x0005e391) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1cfc,	// (0x0005e391) list_medium_line_x2_t3_g4_g2

0x1c63,	// (0x0005e2f8) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1c63,	// (0x0005e2f8) list_medium_line_x2_t3_g4_g3

0x1c6f,	// (0x0005e304) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1c6f,	// (0x0005e304) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x0006b93c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x0006b93c) list_medium_line_x2_t3_g4_g

0x8829,	// (0x00064ebe) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8829,	// (0x00064ebe) list_medium_line_x2_t3_g4_t1

0x883f,	// (0x00064ed4) list_medium_line_x2_t3_g4_t2_ParamLimits

0x883f,	// (0x00064ed4) list_medium_line_x2_t3_g4_t2

0x1ca2,	// (0x0005e337) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1ca2,	// (0x0005e337) list_medium_line_x2_t3_g4_t3

0x0002,

0xfb15,	// (0x0006c1aa) list_medium_line_x2_t3_g4_t_ParamLimits

0xfb15,	// (0x0006c1aa) list_medium_line_x2_t3_g4_t

0x6db6,	// (0x0006344b) list_medium_line_g2_g1_ParamLimits

0x6db6,	// (0x0006344b) list_medium_line_g2_g1

0x6dc2,	// (0x00063457) list_medium_line_g2_g2_ParamLimits

0x6dc2,	// (0x00063457) list_medium_line_g2_g2

0x0001,

0xf80c,	// (0x0006bea1) list_medium_line_g2_g_ParamLimits

0xf80c,	// (0x0006bea1) list_medium_line_g2_g

0x8859,	// (0x00064eee) list_medium_line_g2_t1_ParamLimits

0x8859,	// (0x00064eee) list_medium_line_g2_t1

0x6db6,	// (0x0006344b) list_medium_line_t3_g2_g1_ParamLimits

0x6db6,	// (0x0006344b) list_medium_line_t3_g2_g1

0x6dc2,	// (0x00063457) list_medium_line_t3_g2_g2_ParamLimits

0x6dc2,	// (0x00063457) list_medium_line_t3_g2_g2

0x0001,

0xf80c,	// (0x0006bea1) list_medium_line_t3_g2_g_ParamLimits

0xf80c,	// (0x0006bea1) list_medium_line_t3_g2_g

0x886e,	// (0x00064f03) list_medium_line_t3_g2_t1_ParamLimits

0x886e,	// (0x00064f03) list_medium_line_t3_g2_t1

0x8888,	// (0x00064f1d) list_medium_line_t3_g2_t2_ParamLimits

0x8888,	// (0x00064f1d) list_medium_line_t3_g2_t2

0x889e,	// (0x00064f33) list_medium_line_t3_g2_t3_ParamLimits

0x889e,	// (0x00064f33) list_medium_line_t3_g2_t3

0x0002,

0xfb1c,	// (0x0006c1b1) list_medium_line_t3_g2_t_ParamLimits

0xfb1c,	// (0x0006c1b1) list_medium_line_t3_g2_t

0x8448,	// (0x00064add) list_medium_line_right_icon_g1

0x88b4,	// (0x00064f49) list_medium_line_right_icon_t1

0x6db6,	// (0x0006344b) list_medium_line_t2_g1_ParamLimits

0x6db6,	// (0x0006344b) list_medium_line_t2_g1

0x88c2,	// (0x00064f57) list_medium_line_t2_t1_ParamLimits

0x88c2,	// (0x00064f57) list_medium_line_t2_t1

0x88dc,	// (0x00064f71) list_medium_line_t2_t2_ParamLimits

0x88dc,	// (0x00064f71) list_medium_line_t2_t2

0x0001,

0xfb23,	// (0x0006c1b8) list_medium_line_t2_t_ParamLimits

0xfb23,	// (0x0006c1b8) list_medium_line_t2_t

0x6db6,	// (0x0006344b) list_medium_line_t3_g1_ParamLimits

0x6db6,	// (0x0006344b) list_medium_line_t3_g1

0x88f1,	// (0x00064f86) list_medium_line_t3_t1_ParamLimits

0x88f1,	// (0x00064f86) list_medium_line_t3_t1

0x890b,	// (0x00064fa0) list_medium_line_t3_t2_ParamLimits

0x890b,	// (0x00064fa0) list_medium_line_t3_t2

0x8921,	// (0x00064fb6) list_medium_line_t3_t3_ParamLimits

0x8921,	// (0x00064fb6) list_medium_line_t3_t3

0x0002,

0xfb28,	// (0x0006c1bd) list_medium_line_t3_t_ParamLimits

0xfb28,	// (0x0006c1bd) list_medium_line_t3_t

0x6db6,	// (0x0006344b) list_medium_line_g3_g1_ParamLimits

0x6db6,	// (0x0006344b) list_medium_line_g3_g1

0x8936,	// (0x00064fcb) list_medium_line_g3_g2_ParamLimits

0x8936,	// (0x00064fcb) list_medium_line_g3_g2

0x6dc2,	// (0x00063457) list_medium_line_g3_g3_ParamLimits

0x6dc2,	// (0x00063457) list_medium_line_g3_g3

0x0002,

0xfb2f,	// (0x0006c1c4) list_medium_line_g3_g_ParamLimits

0xfb2f,	// (0x0006c1c4) list_medium_line_g3_g

0x8942,	// (0x00064fd7) list_medium_line_g3_t1_ParamLimits

0x8942,	// (0x00064fd7) list_medium_line_g3_t1

0x6db6,	// (0x0006344b) list_medium_line_t2_g3_g1_ParamLimits

0x6db6,	// (0x0006344b) list_medium_line_t2_g3_g1

0x8936,	// (0x00064fcb) list_medium_line_t2_g3_g2_ParamLimits

0x8936,	// (0x00064fcb) list_medium_line_t2_g3_g2

0x6dc2,	// (0x00063457) list_medium_line_t2_g3_g3_ParamLimits

0x6dc2,	// (0x00063457) list_medium_line_t2_g3_g3

0x0002,

0xfb2f,	// (0x0006c1c4) list_medium_line_t2_g3_g_ParamLimits

0xfb2f,	// (0x0006c1c4) list_medium_line_t2_g3_g

0x8957,	// (0x00064fec) list_medium_line_t2_g3_t1_ParamLimits

0x8957,	// (0x00064fec) list_medium_line_t2_g3_t1

0x8971,	// (0x00065006) list_medium_line_t2_g3_t2_ParamLimits

0x8971,	// (0x00065006) list_medium_line_t2_g3_t2

0x0001,

0xfb36,	// (0x0006c1cb) list_medium_line_t2_g3_t_ParamLimits

0xfb36,	// (0x0006c1cb) list_medium_line_t2_g3_t

0x6db6,	// (0x0006344b) list_medium_line_t3_g3_g1_ParamLimits

0x6db6,	// (0x0006344b) list_medium_line_t3_g3_g1

0x8936,	// (0x00064fcb) list_medium_line_t3_g3_g2_ParamLimits

0x8936,	// (0x00064fcb) list_medium_line_t3_g3_g2

0x6dc2,	// (0x00063457) list_medium_line_t3_g3_g3_ParamLimits

0x6dc2,	// (0x00063457) list_medium_line_t3_g3_g3

0x0002,

0xfb2f,	// (0x0006c1c4) list_medium_line_t3_g3_g_ParamLimits

0xfb2f,	// (0x0006c1c4) list_medium_line_t3_g3_g

0x8987,	// (0x0006501c) list_medium_line_t3_g3_t1_ParamLimits

0x8987,	// (0x0006501c) list_medium_line_t3_g3_t1

0x89a0,	// (0x00065035) list_medium_line_t3_g3_t2_ParamLimits

0x89a0,	// (0x00065035) list_medium_line_t3_g3_t2

0x89b6,	// (0x0006504b) list_medium_line_t3_g3_t3_ParamLimits

0x89b6,	// (0x0006504b) list_medium_line_t3_g3_t3

0x0002,

0xfb3b,	// (0x0006c1d0) list_medium_line_t3_g3_t_ParamLimits

0xfb3b,	// (0x0006c1d0) list_medium_line_t3_g3_t

0x8622,	// (0x00064cb7) list_medium_line_right_iconx2_g1

0x8448,	// (0x00064add) list_medium_line_right_iconx2_g2

0x0001,

0xfb42,	// (0x0006c1d7) list_medium_line_right_iconx2_g

0x89cc,	// (0x00065061) list_medium_line_right_iconx2_t1

0x8622,	// (0x00064cb7) list_medium_line_t2_right_iconx2_g1

0x8448,	// (0x00064add) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfb42,	// (0x0006c1d7) list_medium_line_t2_right_iconx2_g

0x89da,	// (0x0006506f) list_medium_line_t2_right_iconx2_t1

0x89ea,	// (0x0006507f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb47,	// (0x0006c1dc) list_medium_line_t2_right_iconx2_t

0x89f8,	// (0x0006508d) list_medium_line_x4_t4_t1

0x8a06,	// (0x0006509b) list_medium_line_x4_t4_t2

0x8a16,	// (0x000650ab) list_medium_line_x4_t4_t3

0x8a26,	// (0x000650bb) list_medium_line_x4_t4_t4

0x0003,

0xfb4c,	// (0x0006c1e1) list_medium_line_x4_t4_t

0x8a60,	// (0x000650f5) tport_appsw_pane_ParamLimits

0x8a60,	// (0x000650f5) tport_appsw_pane

0x8a6e,	// (0x00065103) tport_contact_pane_ParamLimits

0x8a6e,	// (0x00065103) tport_contact_pane

0x8a7e,	// (0x00065113) tport_listscroll_pane_ParamLimits

0x8a7e,	// (0x00065113) tport_listscroll_pane

0x8a8e,	// (0x00065123) cell_tport_appsw_pane_ParamLimits

0x8a8e,	// (0x00065123) cell_tport_appsw_pane

0xcfbd,	// (0x00069652) tport_appsw_pane_g1_ParamLimits

0xcfbd,	// (0x00069652) tport_appsw_pane_g1

0xe7e1,	// (0x0006ae76) tport_contact_pane_g1

0xe7ea,	// (0x0006ae7f) tport_contact_pane_t1

0xe7f8,	// (0x0006ae8d) tport_contact_pane_t2

0x0001,

0xfb55,	// (0x0006c1ea) tport_contact_pane_t

0xe806,	// (0x0006ae9b) list_tport_pane

0xe80f,	// (0x0006aea4) scroll_pane_cp_030

0x8ac1,	// (0x00065156) cell_tport_appsw_pane_g1

0x8ad1,	// (0x00065166) cell_tport_appsw_pane_t1

0x8adf,	// (0x00065174) grid_highlight_pane_cp019

0x8ae7,	// (0x0006517c) list_tport_double_graphic_pane_ParamLimits

0x8ae7,	// (0x0006517c) list_tport_double_graphic_pane

0xa6a6,	// (0x00066d3b) list_highlight_pane_cp023_ParamLimits

0xa6a6,	// (0x00066d3b) list_highlight_pane_cp023

0x8af8,	// (0x0006518d) list_tport_double_graphic_pane_g1_ParamLimits

0x8af8,	// (0x0006518d) list_tport_double_graphic_pane_g1

0x8b05,	// (0x0006519a) list_tport_double_graphic_pane_t1_ParamLimits

0x8b05,	// (0x0006519a) list_tport_double_graphic_pane_t1

0x8b1a,	// (0x000651af) list_tport_double_graphic_pane_t2_ParamLimits

0x8b1a,	// (0x000651af) list_tport_double_graphic_pane_t2

0x0001,

0xfb61,	// (0x0006c1f6) list_tport_double_graphic_pane_t_ParamLimits

0xfb61,	// (0x0006c1f6) list_tport_double_graphic_pane_t

0x9b9f,	// (0x00066234) main_cale_note_pane

0x6549,	// (0x00062bde) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6549,	// (0x00062bde) cell_vitu2_function_top_wide_pane_cp01

0x806e,	// (0x00064703) wait_bar_pane_cp05_ParamLimits

0xa6a6,	// (0x00066d3b) listscroll_cmail_pane

0xe818,	// (0x0006aead) list_cmail_pane

0x8b2c,	// (0x000651c1) list_cmail_body_pane

0x8b54,	// (0x000651e9) list_single_cmail_header_caption_pane

0x8b80,	// (0x00065215) list_single_cmail_header_detail_pane_ParamLimits

0x8b80,	// (0x00065215) list_single_cmail_header_detail_pane

0xe828,	// (0x0006aebd) list_single_cmail_header_caption_pane_t1

0x8bb9,	// (0x0006524e) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8bb9,	// (0x0006524e) list_single_cmail_header_detail_pane_g1

0xa2da,	// (0x0006696f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa2da,	// (0x0006696f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb66,	// (0x0006c1fb) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb66,	// (0x0006c1fb) list_single_cmail_header_detail_pane_g

0xa2e6,	// (0x0006697b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa2e6,	// (0x0006697b) list_single_cmail_header_detail_pane_t1

0xa346,	// (0x000669db) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa346,	// (0x000669db) list_single_cmail_header_editor_pane_bg

0xe2d4,	// (0x0006a969) list_cmail_body_pane_g1

0xe84c,	// (0x0006aee1) list_cmail_body_pane_t1

0xd6a9,	// (0x00069d3e) list_single_cmail_header_editor_pane_bg_g1

0xacde,	// (0x00067373) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6b9,	// (0x00069d4e) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6b1,	// (0x00069d46) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8cd,	// (0x00069f62) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6d9,	// (0x00069d6e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6c9,	// (0x00069d5e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6d1,	// (0x00069d66) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacbe,	// (0x00067353) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8bcf,	// (0x00065264) calenote_gesture_pane_ParamLimits

0x8bcf,	// (0x00065264) calenote_gesture_pane

0x8be9,	// (0x0006527e) calenote_window_pane_ParamLimits

0x8be9,	// (0x0006527e) calenote_window_pane

0xe85a,	// (0x0006aeef) popup_note_window_cp01

0x8c01,	// (0x00065296) calenote_swipe_1_pane_ParamLimits

0x8c01,	// (0x00065296) calenote_swipe_1_pane

0x842e,	// (0x00064ac3) calenote_swipe_2_pane_ParamLimits

0x842e,	// (0x00064ac3) calenote_swipe_2_pane

0xe64f,	// (0x0006ace4) calenote_swipe_1_pane_g1_ParamLimits

0xe64f,	// (0x0006ace4) calenote_swipe_1_pane_g1

0xe65c,	// (0x0006acf1) calenote_swipe_1_pane_g2_ParamLimits

0xe65c,	// (0x0006acf1) calenote_swipe_1_pane_g2

0x0001,

0xfa86,	// (0x0006c11b) calenote_swipe_1_pane_g_ParamLimits

0xfa86,	// (0x0006c11b) calenote_swipe_1_pane_g

0xe86c,	// (0x0006af01) calenote_swipe_1_pane_t1_ParamLimits

0xe86c,	// (0x0006af01) calenote_swipe_1_pane_t1

0xe64f,	// (0x0006ace4) calenote_swipe_2_pane_g1_ParamLimits

0xe64f,	// (0x0006ace4) calenote_swipe_2_pane_g1

0xe88b,	// (0x0006af20) calenote_swipe_2_pane_g2_ParamLimits

0xe88b,	// (0x0006af20) calenote_swipe_2_pane_g2

0x0001,

0xfb72,	// (0x0006c207) calenote_swipe_2_pane_g_ParamLimits

0xfb72,	// (0x0006c207) calenote_swipe_2_pane_g

0xe897,	// (0x0006af2c) calenote_swipe_2_pane_t1_ParamLimits

0xe897,	// (0x0006af2c) calenote_swipe_2_pane_t1

0x9b9f,	// (0x00066234) main_mup_navstr_pane

0x517d,	// (0x00061812) main_mup3_pane_t7_ParamLimits

0x517d,	// (0x00061812) main_mup3_pane_t7

0x5bc4,	// (0x00062259) main_mp4_pane_g6_ParamLimits

0x5bc4,	// (0x00062259) main_mp4_pane_g6

0x5f62,	// (0x000625f7) main_image3_pane_t4_ParamLimits

0x5f62,	// (0x000625f7) main_image3_pane_t4

0x8c14,	// (0x000652a9) popup_navstr_preview_pane_ParamLimits

0x8c14,	// (0x000652a9) popup_navstr_preview_pane

0x8c20,	// (0x000652b5) scroll_navstr_pane_ParamLimits

0x8c20,	// (0x000652b5) scroll_navstr_pane

0x9b9f,	// (0x00066234) bg_popup_preview_window_pane_cp04

0xe8be,	// (0x0006af53) popup_navstr_preview_pane_t1

0x8c2c,	// (0x000652c1) scroll_navstr_pane_g1_ParamLimits

0x8c2c,	// (0x000652c1) scroll_navstr_pane_g1

0x8c39,	// (0x000652ce) scroll_navstr_pane_t1_ParamLimits

0x8c39,	// (0x000652ce) scroll_navstr_pane_t1

0xe863,	// (0x0006aef8) bg_button_pane_cp014

0xe863,	// (0x0006aef8) bg_button_pane_cp030

0x8341,	// (0x000649d6) list_double_fisheye_pane_g4_ParamLimits

0x8341,	// (0x000649d6) list_double_fisheye_pane_g4

0x834d,	// (0x000649e2) list_double_fisheye_pane_g5_ParamLimits

0x834d,	// (0x000649e2) list_double_fisheye_pane_g5

0xd987,	// (0x0006a01c) sp_fs_scroll_pane_cp03

0xe76f,	// (0x0006ae04) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe77b,	// (0x0006ae10) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfaa3,	// (0x0006c138) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x84f5,	// (0x00064b8a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe820,	// (0x0006aeb5) sp_fs_scroll_pane_cp02

0xa99d,	// (0x00067032) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa99d,	// (0x00067032) popup_sp_fs_calendar_preview_list_single_pane

0x9b9f,	// (0x00066234) main_cam6_pano_pane

0x416d,	// (0x00060802) main_mup3_pane_ParamLimits

0x9b9f,	// (0x00066234) main_phacti_pane

0x7f43,	// (0x000645d8) bg_button_pane_cp11

0x7f5b,	// (0x000645f0) main_mobtv_info_pane_g2_ParamLimits

0x7f5b,	// (0x000645f0) main_mobtv_info_pane_g2

0x0001,

0xfa03,	// (0x0006c098) main_mobtv_info_pane_g_ParamLimits

0xfa03,	// (0x0006c098) main_mobtv_info_pane_g

0x810d,	// (0x000647a2) sc_clock_pane_t5_ParamLimits

0x810d,	// (0x000647a2) sc_clock_pane_t5

0x81ae,	// (0x00064843) main_radioblah_pane_g1_ParamLimits

0xe589,	// (0x0006ac1e) main_radioblah_pane_t3_ParamLimits

0xe589,	// (0x0006ac1e) main_radioblah_pane_t3

0xe5a1,	// (0x0006ac36) main_radioblah_pane_t4_ParamLimits

0xe5a1,	// (0x0006ac36) main_radioblah_pane_t4

0x81cc,	// (0x00064861) main_radioblah_text_pane_ParamLimits

0x81cc,	// (0x00064861) main_radioblah_text_pane

0x81d9,	// (0x0006486e) main_radioblah_info_pane_g1_ParamLimits

0x826e,	// (0x00064903) main_radioblah_info_pane_t4_ParamLimits

0x826e,	// (0x00064903) main_radioblah_info_pane_t4

0xa6a6,	// (0x00066d3b) main_sp_fs_calendar_pane

0x8c4b,	// (0x000652e0) main_phacti_pane_g1

0x8c53,	// (0x000652e8) phacti_note_pane_ParamLimits

0x8c53,	// (0x000652e8) phacti_note_pane

0xe8d5,	// (0x0006af6a) phacti_term_pane_ParamLimits

0xe8d5,	// (0x0006af6a) phacti_term_pane

0xe8ea,	// (0x0006af7f) phacti_note_pane_t1_ParamLimits

0xe8ea,	// (0x0006af7f) phacti_note_pane_t1

0xa35d,	// (0x000669f2) phacti_term_pane_g1

0xa365,	// (0x000669fa) phacti_term_pane_t1_ParamLimits

0xa365,	// (0x000669fa) phacti_term_pane_t1

0xe91c,	// (0x0006afb1) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe924,	// (0x0006afb9) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0a04,	// (0x0005d099) popup_sp_fs_calendar_preview_list_single_pane_g

0xe92c,	// (0x0006afc1) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe92c,	// (0x0006afc1) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe942,	// (0x0006afd7) aid_popup_sp_fs_bg_corner_pane

0xcd13,	// (0x000693a8) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b9f,	// (0x00066234) popup_sp_fs_calendar_preview_bg_pane

0xa38f,	// (0x00066a24) popup_sp_fs_calendar_preview_list_pane

0xc90b,	// (0x00068fa0) bg_main_sp_fs_cale_pane_ParamLimits

0xc90b,	// (0x00068fa0) bg_main_sp_fs_cale_pane

0xa3a0,	// (0x00066a35) listscroll_cale_mrui_pane_ParamLimits

0xa3a0,	// (0x00066a35) listscroll_cale_mrui_pane

0xa3b5,	// (0x00066a4a) listscroll_sp_fs_schedule_track_pane

0xa3be,	// (0x00066a53) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa3be,	// (0x00066a53) main_sp_fs_ctrlbar_pane_cp01

0xe94a,	// (0x0006afdf) main_sp_fs_ribbon_pane

0xa3d1,	// (0x00066a66) popup_sp_fs_cale_preview_window

0x8cb6,	// (0x0006534b) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8cb6,	// (0x0006534b) list_single_sp_fs_schedule_track_pane

0xe2dd,	// (0x0006a972) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe2dd,	// (0x0006a972) bg_sp_fs_highlight_list_pane_cp03

0x8cd9,	// (0x0006536e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8cd9,	// (0x0006536e) list_single_sp_fs_schedule_track_pane_g1

0x8ce5,	// (0x0006537a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ce5,	// (0x0006537a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb7c,	// (0x0006c211) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb7c,	// (0x0006c211) list_single_sp_fs_schedule_track_pane_g

0x8cf1,	// (0x00065386) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8cf1,	// (0x00065386) list_single_sp_fs_schedule_track_pane_t1

0x8d09,	// (0x0006539e) sp_fs_schedule_track_pane_ParamLimits

0x8d09,	// (0x0006539e) sp_fs_schedule_track_pane

0xe952,	// (0x0006afe7) sp_fs_schedule_track_pane_g1

0xe95a,	// (0x0006afef) sp_fs_schedule_track_pane_g2

0xe962,	// (0x0006aff7) sp_fs_schedule_track_pane_g3

0xe96a,	// (0x0006afff) sp_fs_schedule_track_pane_g4

0xe972,	// (0x0006b007) sp_fs_schedule_track_pane_g5

0x0004,

0x0a0e,	// (0x0005d0a3) sp_fs_schedule_track_pane_g

0xd6a9,	// (0x00069d3e) bg_sp_fs_schedule_viewer_highlight_g1

0xacde,	// (0x00067373) bg_sp_fs_schedule_viewer_highlight_g2

0xd6b1,	// (0x00069d46) bg_sp_fs_schedule_viewer_highlight_g3

0xd6b9,	// (0x00069d4e) bg_sp_fs_schedule_viewer_highlight_g4

0xd8cd,	// (0x00069f62) bg_sp_fs_schedule_viewer_highlight_g5

0xd6c9,	// (0x00069d5e) bg_sp_fs_schedule_viewer_highlight_g6

0xd6d1,	// (0x00069d66) bg_sp_fs_schedule_viewer_highlight_g7

0xd6d9,	// (0x00069d6e) bg_sp_fs_schedule_viewer_highlight_g8

0xacbe,	// (0x00067353) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb81,	// (0x0006c216) bg_sp_fs_schedule_viewer_highlight_g

0x9b9f,	// (0x00066234) bg_main_sp_fs_ribbon_pane

0x8d19,	// (0x000653ae) main_sp_fs_ribbon_pane_g1

0xe97a,	// (0x0006b00f) main_sp_fs_ribbon_pane_t1

0x8d22,	// (0x000653b7) main_sp_fs_ribbon_pane_t2

0xe989,	// (0x0006b01e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb94,	// (0x0006c229) main_sp_fs_ribbon_pane_t

0xe998,	// (0x0006b02d) main_sp_fs_ribbon_scheduler_pane

0xe9a0,	// (0x0006b035) bg_main_sp_fs_ribbon_pane_g1

0xe9a9,	// (0x0006b03e) bg_main_sp_fs_ribbon_pane_g2

0xe9b2,	// (0x0006b047) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0a33,	// (0x0005d0c8) bg_main_sp_fs_ribbon_pane_g

0xe9ba,	// (0x0006b04f) main_sp_fs_ribbon_scheduler_pane_g1

0xe9c3,	// (0x0006b058) main_sp_fs_ribbon_scheduler_pane_g2

0xe9cc,	// (0x0006b061) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0a3a,	// (0x0005d0cf) main_sp_fs_ribbon_scheduler_pane_g

0xe9d5,	// (0x0006b06a) list_cale_mrui_pane

0x8d31,	// (0x000653c6) sp_fs_scroll_pane_cp07_ParamLimits

0x8d31,	// (0x000653c6) sp_fs_scroll_pane_cp07

0x8d4d,	// (0x000653e2) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8d4d,	// (0x000653e2) bg_sp_fs_schedule_viewer_highlight

0xe9e2,	// (0x0006b077) list_single_sp_fs_schedule_track_pane_cp01

0xe9ea,	// (0x0006b07f) list_sp_fs_schedule_track_pane

0xe9f2,	// (0x0006b087) sp_fs_scroll_pane_cp06_ParamLimits

0xe9f2,	// (0x0006b087) sp_fs_scroll_pane_cp06

0xcd13,	// (0x000693a8) bgmain_sp_fs_calendar_pane_g1

0x8d5a,	// (0x000653ef) list_single_cale_mrui_pane_ParamLimits

0x8d5a,	// (0x000653ef) list_single_cale_mrui_pane

0xa3e3,	// (0x00066a78) list_single_cale_mrui_row_pane_ParamLimits

0xa3e3,	// (0x00066a78) list_single_cale_mrui_row_pane

0xa3f0,	// (0x00066a85) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa3f0,	// (0x00066a85) list_single_cale_mrui_row_pane_g1

0xa428,	// (0x00066abd) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa428,	// (0x00066abd) list_single_cale_mrui_row_pane_t1

0x8d8b,	// (0x00065420) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8d8b,	// (0x00065420) list_single_cale_mrui_row_pane_t2

0xa43a,	// (0x00066acf) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa43a,	// (0x00066acf) list_single_cale_mrui_row_pane_t3

0xa6b4,	// (0x00066d49) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa6b4,	// (0x00066d49) list_single_cale_mrui_row_pane_t4

0x0003,

0xfba2,	// (0x0006c237) list_single_cale_mrui_row_pane_t_ParamLimits

0xfba2,	// (0x0006c237) list_single_cale_mrui_row_pane_t

0x8df1,	// (0x00065486) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8df1,	// (0x00065486) list_single_cmail_header_editor_pane_bg_cp01

0x8e11,	// (0x000654a6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e11,	// (0x000654a6) list_single_cmail_header_editor_pane_bg_cp02

0x8e2d,	// (0x000654c2) main_radioblah_text_pane_t1_ParamLimits

0x8e2d,	// (0x000654c2) main_radioblah_text_pane_t1

0xea11,	// (0x0006b0a6) cam6_indi_pane_cp01

0xea19,	// (0x0006b0ae) cam6_mode_pane_cp01

0xea21,	// (0x0006b0b6) cam6_pano_pane

0xea2a,	// (0x0006b0bf) cam6_zoom_pane_cp01

0xea32,	// (0x0006b0c7) cam6_pano_image_pane

0xea3d,	// (0x0006b0d2) cam6_pano_pane_g1

0xe2d4,	// (0x0006a969) cam6_pano_pane_g2

0xea46,	// (0x0006b0db) cam6_pano_pane_g3

0xea4f,	// (0x0006b0e4) cam6_pano_pane_g4

0xd2b5,	// (0x0006994a) cam6_pano_pane_g5

0xea58,	// (0x0006b0ed) cam6_pano_pane_g6

0xea62,	// (0x0006b0f7) cam6_pano_pane_g7

0xea6a,	// (0x0006b0ff) cam6_pano_pane_g8

0xea73,	// (0x0006b108) cam6_pano_pane_g9

0x0008,

0x0a51,	// (0x0005d0e6) cam6_pano_pane_g

0x9b9f,	// (0x00066234) main_browser_tag_pane

0xe8b6,	// (0x0006af4b) grid_navstr_albumart_pane

0xea7e,	// (0x0006b113) cell_navstr_albumart_pane_ParamLimits

0xea7e,	// (0x0006b113) cell_navstr_albumart_pane

0xea9e,	// (0x0006b133) cell_navstr_albumart_pane_g1

0xc6dc,	// (0x00068d71) cell_navstr_albumart_pane_g2

0xc6ec,	// (0x00068d81) cell_navstr_albumart_pane_g3

0xc6e4,	// (0x00068d79) cell_navstr_albumart_pane_g4

0x0003,

0x0a64,	// (0x0005d0f9) cell_navstr_albumart_pane_g

0x8e48,	// (0x000654dd) bt_list_pane_ParamLimits

0x8e48,	// (0x000654dd) bt_list_pane

0x8e69,	// (0x000654fe) bt_list_pane_t1

0x8e78,	// (0x0006550d) bt_list_pane_t2

0x0001,

0xfbab,	// (0x0006c240) bt_list_pane_t

0x9b9f,	// (0x00066234) main_cale_prevew_pane

0x8e87,	// (0x0006551c) popup_cale_preview_window_ParamLimits

0x8e87,	// (0x0006551c) popup_cale_preview_window

0xa6a6,	// (0x00066d3b) bg_popup_preview_window_pane_cp05_ParamLimits

0xa6a6,	// (0x00066d3b) bg_popup_preview_window_pane_cp05

0xeaa6,	// (0x0006b13b) list_cale_preview_pane_ParamLimits

0xeaa6,	// (0x0006b13b) list_cale_preview_pane

0x8ea0,	// (0x00065535) list_double_cale_preview_pane_ParamLimits

0x8ea0,	// (0x00065535) list_double_cale_preview_pane

0x8eb2,	// (0x00065547) list_single_cale_preview_pane_ParamLimits

0x8eb2,	// (0x00065547) list_single_cale_preview_pane

0x8ec6,	// (0x0006555b) list_single_cale_preview_pane_g1

0x8ece,	// (0x00065563) list_single_cale_preview_pane_t1_ParamLimits

0x8ece,	// (0x00065563) list_single_cale_preview_pane_t1

0x8ee3,	// (0x00065578) list_double_cale_preview_pane_g1

0x8eeb,	// (0x00065580) list_double_cale_preview_pane_t1_ParamLimits

0x8eeb,	// (0x00065580) list_double_cale_preview_pane_t1

0x8f00,	// (0x00065595) list_double_cale_preview_pane_t2_ParamLimits

0x8f00,	// (0x00065595) list_double_cale_preview_pane_t2

0x0001,

0xfbb0,	// (0x0006c245) list_double_cale_preview_pane_t_ParamLimits

0xfbb0,	// (0x0006c245) list_double_cale_preview_pane_t

0x9b9f,	// (0x00066234) main_ezdial_pane

0xa6a6,	// (0x00066d3b) main_sp_fs_email_pane_ParamLimits

0x846e,	// (0x00064b03) cmail_ddmenu_btn01_pane_ParamLimits

0x846e,	// (0x00064b03) cmail_ddmenu_btn01_pane

0x8483,	// (0x00064b18) cmail_ddmenu_btn02_pane_ParamLimits

0x8483,	// (0x00064b18) cmail_ddmenu_btn02_pane

0x849b,	// (0x00064b30) cmail_ddmenu_btn03_pane_ParamLimits

0x849b,	// (0x00064b30) cmail_ddmenu_btn03_pane

0x8530,	// (0x00064bc5) main_sp_fs_ctrlbar_pane_ParamLimits

0x8546,	// (0x00064bdb) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b2c,	// (0x000651c1) list_cmail_body_pane_ParamLimits

0xe836,	// (0x0006aecb) bg_button_pane_cp12

0xe83f,	// (0x0006aed4) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe83f,	// (0x0006aed4) list_single_cmail_header_detail_pane_g3

0xa322,	// (0x000669b7) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa322,	// (0x000669b7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb6d,	// (0x0006c202) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb6d,	// (0x0006c202) list_single_cmail_header_detail_pane_t

0xa37a,	// (0x00066a0f) phacti_term_pane_t2_ParamLimits

0xa37a,	// (0x00066a0f) phacti_term_pane_t2

0x0001,

0xfb77,	// (0x0006c20c) phacti_term_pane_t_ParamLimits

0xfb77,	// (0x0006c20c) phacti_term_pane_t

0xeab2,	// (0x0006b147) aid_size_list_single_double

0x8f18,	// (0x000655ad) popup_ezdial_listscroll_window

0x8f3c,	// (0x000655d1) popup_number_entry_window_cp01

0xaa5e,	// (0x000670f3) bg_popup_call_pane_cp09

0xeabe,	// (0x0006b153) ezdial_list_pane

0xeac6,	// (0x0006b15b) scroll_pane_cp23

0xcaf8,	// (0x0006918d) bg_button_pane_cp028_ParamLimits

0xcaf8,	// (0x0006918d) bg_button_pane_cp028

0x8f4a,	// (0x000655df) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8f4a,	// (0x000655df) cmail_ddmenu_btn01_pane_g1

0x8f5a,	// (0x000655ef) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8f5a,	// (0x000655ef) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfbb5,	// (0x0006c24a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfbb5,	// (0x0006c24a) cmail_ddmenu_btn01_pane_g

0xeace,	// (0x0006b163) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeace,	// (0x0006b163) cmail_ddmenu_btn01_pane_t1

0xc90b,	// (0x00068fa0) bg_button_pane_cp029_ParamLimits

0xc90b,	// (0x00068fa0) bg_button_pane_cp029

0x8f5a,	// (0x000655ef) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8f5a,	// (0x000655ef) cmail_ddmenu_btn02_pane_g1

0x8f72,	// (0x00065607) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8f72,	// (0x00065607) cmail_ddmenu_btn02_pane_t1

0xe2dd,	// (0x0006a972) bg_button_pane_cp031_ParamLimits

0xe2dd,	// (0x0006a972) bg_button_pane_cp031

0x8f5a,	// (0x000655ef) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8f5a,	// (0x000655ef) cmail_ddmenu_btn03_pane_g1

0x8f72,	// (0x00065607) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8f72,	// (0x00065607) cmail_ddmenu_btn03_pane_t1

0x5dff,	// (0x00062494) cell_dialer2_keypad_pane_t1_ParamLimits

0x5e19,	// (0x000624ae) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5e19,	// (0x000624ae) cell_dialer2_keypad_pane_t1_copy1

0x7d84,	// (0x00064419) ncimui_group_button_pane

0xa6a6,	// (0x00066d3b) main_sp_fs_calendar_pane_ParamLimits

0x8b54,	// (0x000651e9) list_single_cmail_header_caption_pane_ParamLimits

0xa397,	// (0x00066a2c) aid_recal_txt_sm_pane

0x9b9f,	// (0x00066234) mian_recal_day_pane

0xa3d1,	// (0x00066a66) popup_sp_fs_cale_preview_window_ParamLimits

0xeae3,	// (0x0006b178) list_recal_day_pane

0xa6fe,	// (0x00066d93) list_single_recal_day_pane_ParamLimits

0xa6fe,	// (0x00066d93) list_single_recal_day_pane

0xeb0a,	// (0x0006b19f) list_single_recal_day_pane_g1_ParamLimits

0xeb0a,	// (0x0006b19f) list_single_recal_day_pane_g1

0xa710,	// (0x00066da5) list_single_recal_day_pane_g2_ParamLimits

0xa710,	// (0x00066da5) list_single_recal_day_pane_g2

0xa71c,	// (0x00066db1) list_single_recal_day_pane_g3_ParamLimits

0xa71c,	// (0x00066db1) list_single_recal_day_pane_g3

0x8f96,	// (0x0006562b) list_single_recal_day_pane_g4_ParamLimits

0x8f96,	// (0x0006562b) list_single_recal_day_pane_g4

0xa728,	// (0x00066dbd) list_single_recal_day_pane_g5_ParamLimits

0xa728,	// (0x00066dbd) list_single_recal_day_pane_g5

0xa734,	// (0x00066dc9) list_single_recal_day_pane_g6_ParamLimits

0xa734,	// (0x00066dc9) list_single_recal_day_pane_g6

0x0004,

0xfbc4,	// (0x0006c259) list_single_recal_day_pane_g_ParamLimits

0xfbc4,	// (0x0006c259) list_single_recal_day_pane_g

0xa748,	// (0x00066ddd) list_single_recal_day_pane_t1

0xa75a,	// (0x00066def) list_single_recal_day_pane_t2

0x0001,

0xfbcf,	// (0x0006c264) list_single_recal_day_pane_t

0x8fae,	// (0x00065643) ncimui_query_button_pane_ParamLimits

0x8fae,	// (0x00065643) ncimui_query_button_pane

0x8fbe,	// (0x00065653) ncimui_query_button_pane_t1_ParamLimits

0x8fbe,	// (0x00065653) ncimui_query_button_pane_t1

0xeb16,	// (0x0006b1ab) ncimui_query_button_pane_t2_ParamLimits

0xeb16,	// (0x0006b1ab) ncimui_query_button_pane_t2

0x0001,

0xfbd4,	// (0x0006c269) ncimui_query_button_pane_t_ParamLimits

0xfbd4,	// (0x0006c269) ncimui_query_button_pane_t

0x8fd1,	// (0x00065666) query_button_pane_ParamLimits

0x8fd1,	// (0x00065666) query_button_pane

0x9b9f,	// (0x00066234) bg_button_pane_cp0028

0xeb29,	// (0x0006b1be) query_button_pane_t1

0x4189,	// (0x0006081e) main_tport_pane_ParamLimits

0x8a36,	// (0x000650cb) bg_popup_window_pane_cp01_ParamLimits

0x8a36,	// (0x000650cb) bg_popup_window_pane_cp01

0x8a44,	// (0x000650d9) heading_pane_cp08_ParamLimits

0x8a44,	// (0x000650d9) heading_pane_cp08

0x8a52,	// (0x000650e7) heading_pane_cp07_ParamLimits

0x8a52,	// (0x000650e7) heading_pane_cp07

0x8ac1,	// (0x00065156) cell_tport_appsw_pane_g2

0x0002,

0xfb5a,	// (0x0006c1ef) cell_tport_appsw_pane_g

0x9fbc,	// (0x00066651) input_candi_list_open_g1

0xaea1,	// (0x00067536) list_cale_time_pane_g6_ParamLimits

0xaea1,	// (0x00067536) list_cale_time_pane_g6

0x4c08,	// (0x0006129d) aid_size_touch_calib_1_ParamLimits

0x4c08,	// (0x0006129d) aid_size_touch_calib_1

0x4c14,	// (0x000612a9) aid_size_touch_calib_2_ParamLimits

0x4c14,	// (0x000612a9) aid_size_touch_calib_2

0x4c22,	// (0x000612b7) aid_size_touch_calib_3_ParamLimits

0x4c22,	// (0x000612b7) aid_size_touch_calib_3

0x4c32,	// (0x000612c7) aid_size_touch_calib_4_ParamLimits

0x4c32,	// (0x000612c7) aid_size_touch_calib_4

0x4c40,	// (0x000612d5) main_touch_calib_button_group_pane_ParamLimits

0x4c40,	// (0x000612d5) main_touch_calib_button_group_pane

0x4c4e,	// (0x000612e3) main_touch_calib_pane_g1_ParamLimits

0x4c5a,	// (0x000612ef) main_touch_calib_pane_g2_ParamLimits

0x4c66,	// (0x000612fb) main_touch_calib_pane_g3_ParamLimits

0x4c72,	// (0x00061307) main_touch_calib_pane_g4_ParamLimits

0xf5e6,	// (0x0006bc7b) main_touch_calib_pane_g_ParamLimits

0x4c7e,	// (0x00061313) main_touch_calib_pane_t1_ParamLimits

0x4c97,	// (0x0006132c) main_touch_calib_pane_t2_ParamLimits

0x4cb0,	// (0x00061345) main_touch_calib_pane_t3_ParamLimits

0x4cc6,	// (0x0006135b) main_touch_calib_pane_t4_ParamLimits

0x4cdc,	// (0x00061371) main_touch_calib_pane_t5_ParamLimits

0xf5ef,	// (0x0006bc84) main_touch_calib_pane_t_ParamLimits

0xd058,	// (0x000696ed) list_single_fp_cale_pane_g3_ParamLimits

0xd058,	// (0x000696ed) list_single_fp_cale_pane_g3

0x416d,	// (0x00060802) bg_button_pane_cp012_ParamLimits

0x416d,	// (0x00060802) bg_vkb2_func_pane_cp03_ParamLimits

0x6d36,	// (0x000633cb) cell_vitu2_function_top_pane_g1_ParamLimits

0x416d,	// (0x00060802) bg_vkb2_func_pane_cp04_ParamLimits

0x7d0c,	// (0x000643a1) main_ncimui_button_group_pane_ParamLimits

0x7d0c,	// (0x000643a1) main_ncimui_button_group_pane

0x7d72,	// (0x00064407) main_ncimui_pane_t3_ParamLimits

0x7d72,	// (0x00064407) main_ncimui_pane_t3

0xe8cc,	// (0x0006af61) phacti_button_group_pane

0xeab2,	// (0x0006b147) aid_size_list_single_double_ParamLimits

0x8f18,	// (0x000655ad) popup_ezdial_listscroll_window_ParamLimits

0x8f3c,	// (0x000655d1) popup_number_entry_window_cp01_ParamLimits

0x8fde,	// (0x00065673) phacti_button_pane_ParamLimits

0x8fde,	// (0x00065673) phacti_button_pane

0x9b9f,	// (0x00066234) bg_button_pane_cp14

0xeb37,	// (0x0006b1cc) phacti_button_pane_t1

0x8fef,	// (0x00065684) main_touch_calib_button_pane_ParamLimits

0x8fef,	// (0x00065684) main_touch_calib_button_pane

0xa899,	// (0x00066f2e) bg_button_pane_cp18_ParamLimits

0xa899,	// (0x00066f2e) bg_button_pane_cp18

0xeb45,	// (0x0006b1da) main_touch_calib_button_pane_t1_ParamLimits

0xeb45,	// (0x0006b1da) main_touch_calib_button_pane_t1

0xeb5b,	// (0x0006b1f0) main_touch_calib_button_pane_t2_ParamLimits

0xeb5b,	// (0x0006b1f0) main_touch_calib_button_pane_t2

0x0001,

0x0a9b,	// (0x0005d130) main_touch_calib_button_pane_t_ParamLimits

0x0a9b,	// (0x0005d130) main_touch_calib_button_pane_t

0x9b9f,	// (0x00066234) cell_ncimui_button_pane

0x9b9f,	// (0x00066234) bg_button_pane_cp032

0xeb79,	// (0x0006b20e) cell_ncimui_button_pane_t1

0x5e75,	// (0x0006250a) image3_infobar_pane_ParamLimits

0x5e75,	// (0x0006250a) image3_infobar_pane

0x812f,	// (0x000647c4) fs_bigclock_status_pane_ParamLimits

0x812f,	// (0x000647c4) fs_bigclock_status_pane

0x813c,	// (0x000647d1) main_fs_bigclock_clock_pane_ParamLimits

0x813c,	// (0x000647d1) main_fs_bigclock_clock_pane

0x8150,	// (0x000647e5) main_fs_bigclock_indi_pane_ParamLimits

0x8150,	// (0x000647e5) main_fs_bigclock_indi_pane

0x8178,	// (0x0006480d) main_fs_bigclock_swipe_pane_ParamLimits

0x8178,	// (0x0006480d) main_fs_bigclock_swipe_pane

0x9b9f,	// (0x00066234) main_fs_clock_dumped_data

0xe3f8,	// (0x0006aa8d) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3f8,	// (0x0006aa8d) list_single_fs_bigclock_indicator_pane_g1

0xe414,	// (0x0006aaa9) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe414,	// (0x0006aaa9) list_single_fs_bigclock_indicator_pane_g2

0xe42e,	// (0x0006aac3) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe42e,	// (0x0006aac3) list_single_fs_bigclock_indicator_pane_g3

0xe448,	// (0x0006aadd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe448,	// (0x0006aadd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfa37,	// (0x0006c0cc) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfa37,	// (0x0006c0cc) list_single_fs_bigclock_indicator_pane_g

0xe473,	// (0x0006ab08) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe473,	// (0x0006ab08) list_single_fs_bigclock_indicator_pane_t1

0xe49b,	// (0x0006ab30) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe49b,	// (0x0006ab30) list_single_fs_bigclock_indicator_pane_t2

0xe4c3,	// (0x0006ab58) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4c3,	// (0x0006ab58) list_single_fs_bigclock_indicator_pane_t3

0xe4eb,	// (0x0006ab80) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4eb,	// (0x0006ab80) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfa42,	// (0x0006c0d7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfa42,	// (0x0006c0d7) list_single_fs_bigclock_indicator_pane_t

0xeb87,	// (0x0006b21c) image3_infobar_fav_pane_ParamLimits

0xeb87,	// (0x0006b21c) image3_infobar_fav_pane

0xeb97,	// (0x0006b22c) image3_infobar_loc_pane_ParamLimits

0xeb97,	// (0x0006b22c) image3_infobar_loc_pane

0xebab,	// (0x0006b240) image3_infobar_time_pane_ParamLimits

0xebab,	// (0x0006b240) image3_infobar_time_pane

0xcd13,	// (0x000693a8) image3_infobar_time_pane_g1

0xebbb,	// (0x0006b250) image3_infobar_time_pane_t1

0xcd13,	// (0x000693a8) image3_infobar_loc_pane_g1

0xebc9,	// (0x0006b25e) image3_infobar_loc_pane_g2

0x0001,

0x0aa0,	// (0x0005d135) image3_infobar_loc_pane_g

0xebd1,	// (0x0006b266) image3_infobar_loc_pane_t1

0xcd13,	// (0x000693a8) image3_infobar_fav_pane_g1

0xebdf,	// (0x0006b274) image3_infobar_fav_pane_g2

0x0001,

0x0aa5,	// (0x0005d13a) image3_infobar_fav_pane_g

0xebe7,	// (0x0006b27c) fs_bigclock_status_battery_pane

0xebf0,	// (0x0006b285) fs_bigclock_status_signal_pane

0xebf9,	// (0x0006b28e) fs_bigclock_status_title_pane

0xec02,	// (0x0006b297) fs_bigclock_status_signal_pane_g1

0xec0b,	// (0x0006b2a0) fs_bigclock_status_signal_pane_g2

0x0001,

0x0aaa,	// (0x0005d13f) fs_bigclock_status_signal_pane_g

0xec13,	// (0x0006b2a8) fs_bigclock_status_battery_pane_g1

0xec1c,	// (0x0006b2b1) fs_bigclock_status_battery_pane_g2

0x0001,

0x0aaf,	// (0x0005d144) fs_bigclock_status_battery_pane_g

0xec24,	// (0x0006b2b9) fs_bigclock_status_title_pane_t1

0x8fff,	// (0x00065694) main_fs_bigclock_clock_pane_g1

0x8fff,	// (0x00065694) main_fs_bigclock_clock_pane_g2

0x900c,	// (0x000656a1) main_fs_bigclock_clock_pane_g3

0x900c,	// (0x000656a1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfbd9,	// (0x0006c26e) main_fs_bigclock_clock_pane_g

0x9018,	// (0x000656ad) main_fs_bigclock_clock_pane_t1

0x902b,	// (0x000656c0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfbe2,	// (0x0006c277) main_fs_bigclock_clock_pane_t

0xec32,	// (0x0006b2c7) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec32,	// (0x0006b2c7) list_single_fs_bigclock_indicator_pane

0xec43,	// (0x0006b2d8) list_single_fs_bigclock_pane_ParamLimits

0xec43,	// (0x0006b2d8) list_single_fs_bigclock_pane

0xec69,	// (0x0006b2fe) main_fs_bigclock_indicator_pane_t1

0xec78,	// (0x0006b30d) list_single_fs_bigclock_pane_g1

0xec80,	// (0x0006b315) list_single_fs_bigclock_pane_t1

0xcd13,	// (0x000693a8) main_fs_bigclock_swipe_pane_g1

0xecc3,	// (0x0006b358) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfbf3,	// (0x0006c288) main_fs_bigclock_swipe_pane_g

0xeccb,	// (0x0006b360) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeccb,	// (0x0006b360) main_fs_bigclock_swipe_pane_t1

0x317c,	// (0x0005f811) call_type_pane_ParamLimits

0x9b9f,	// (0x00066234) main_btmg_pane

0xa41c,	// (0x00066ab1) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa41c,	// (0x00066ab1) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb9b,	// (0x0006c230) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb9b,	// (0x0006c230) list_single_cale_mrui_row_pane_g

0xa6ed,	// (0x00066d82) list_recal_vselct_arw_lo_pane

0xeb02,	// (0x0006b197) list_recal_vselct_arw_up_pane

0xa6f5,	// (0x00066d8a) list_recal_vselct_pane

0x9082,	// (0x00065717) btmg_button_pane

0x908e,	// (0x00065723) main_btmg_pane_g1

0x9b9f,	// (0x00066234) bg_button_pane_cp044

0xece8,	// (0x0006b37d) btmg_button_pane_t1

0xc8f7,	// (0x00068f8c) aid_listscroll_gen

0xa6a6,	// (0x00066d3b) main_cntbar_detail_pane

0xe818,	// (0x0006aead) list_cmail_folder_pane

0xd987,	// (0x0006a01c) sp_fs_scroll_pane_cp03_ParamLimits

0x9096,	// (0x0006572b) list_single_fs_dyc_pane_cp01_ParamLimits

0x9096,	// (0x0006572b) list_single_fs_dyc_pane_cp01

0xecf6,	// (0x0006b38b) aid_size_cmail_indent

0xa76c,	// (0x00066e01) list_single_dyc_row_pane_cp01

0x90e5,	// (0x0006577a) cntbar_detail_list_pane_ParamLimits

0x90e5,	// (0x0006577a) cntbar_detail_list_pane

0x911f,	// (0x000657b4) main_cntbar_detail_cont_pane_ParamLimits

0x911f,	// (0x000657b4) main_cntbar_detail_cont_pane

0x309f,	// (0x0005f734) scroll_pane_cp032_ParamLimits

0x309f,	// (0x0005f734) scroll_pane_cp032

0x912b,	// (0x000657c0) cntbar_detail_list_event_pane_ParamLimits

0x912b,	// (0x000657c0) cntbar_detail_list_event_pane

0x90f1,	// (0x00065786) cntbar_detail_list_shct_pane

0xad2c,	// (0x000673c1) aid_list_gen

0xecff,	// (0x0006b394) aid_scroll

0xed08,	// (0x0006b39d) aid_size_touch_scroll_bar

0x74a1,	// (0x00063b36) aid_list_double

0xa775,	// (0x00066e0a) aid_list_single

0x748f,	// (0x00063b24) aid_list_single_lg

0xa77e,	// (0x00066e13) aid_list_z_g_a_sm

0xa786,	// (0x00066e1b) aid_list_z_g_d

0xa78e,	// (0x00066e23) aid_txt_z_prm

0x913f,	// (0x000657d4) aid_txt_z_prm_cp01

0x914d,	// (0x000657e2) aid_txt_z_sec

0x915b,	// (0x000657f0) main_cntbar_detail_cont_pane_g1_ParamLimits

0x915b,	// (0x000657f0) main_cntbar_detail_cont_pane_g1

0x9168,	// (0x000657fd) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9168,	// (0x000657fd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbf8,	// (0x0006c28d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbf8,	// (0x0006c28d) main_cntbar_detail_cont_pane_g

0xed11,	// (0x0006b3a6) main_cntbar_detail_cont_pane_t1

0xed1f,	// (0x0006b3b4) main_cntbar_detail_cont_pane_t2

0xed2d,	// (0x0006b3c2) main_cntbar_detail_cont_pane_t3

0x0002,

0xfbfd,	// (0x0006c292) main_cntbar_detail_cont_pane_t

0x9174,	// (0x00065809) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9174,	// (0x00065809) cell_cntbar_detail_list_shct_pane

0xed3b,	// (0x0006b3d0) cntbar_detail_list_shct_pane_g1

0xed44,	// (0x0006b3d9) cntbar_detail_list_shct_pane_g2

0x0001,

0xfc04,	// (0x0006c299) cntbar_detail_list_shct_pane_g

0x9188,	// (0x0006581d) cntbar_detail_list_event_pane_g1_ParamLimits

0x9188,	// (0x0006581d) cntbar_detail_list_event_pane_g1

0x9194,	// (0x00065829) cntbar_detail_list_event_pane_g2_ParamLimits

0x9194,	// (0x00065829) cntbar_detail_list_event_pane_g2

0x0005,

0xfc09,	// (0x0006c29e) cntbar_detail_list_event_pane_g_ParamLimits

0xfc09,	// (0x0006c29e) cntbar_detail_list_event_pane_g

0x9200,	// (0x00065895) cntbar_detail_list_event_pane_t1_ParamLimits

0x9200,	// (0x00065895) cntbar_detail_list_event_pane_t1

0x9215,	// (0x000658aa) cntbar_detail_list_event_pane_t2_ParamLimits

0x9215,	// (0x000658aa) cntbar_detail_list_event_pane_t2

0x0002,

0xfc16,	// (0x0006c2ab) cntbar_detail_list_event_pane_t_ParamLimits

0xfc16,	// (0x0006c2ab) cntbar_detail_list_event_pane_t

0xcd13,	// (0x000693a8) cell_cntbar_detail_list_shct_pane_g1

0xb486,	// (0x00067b1b) navi_pane_mv_g3

0xa6a6,	// (0x00066d3b) main_cntbar_detail_pane_ParamLimits

0x9b9f,	// (0x00066234) main_notif_wgt_pane

0x5aff,	// (0x00062194) aid_tch_main_mp4_pane_g4

0x5d5e,	// (0x000623f3) popup_slider_window_cp02

0xa6e3,	// (0x00066d78) list_recal_day_event_pane

0x90c5,	// (0x0006575a) cntbar_detail_btn_pane_ParamLimits

0x90c5,	// (0x0006575a) cntbar_detail_btn_pane

0x90d5,	// (0x0006576a) cntbar_detail_btn_pane_cp01_ParamLimits

0x90d5,	// (0x0006576a) cntbar_detail_btn_pane_cp01

0x90f1,	// (0x00065786) cntbar_detail_list_shct_pane_ParamLimits

0x90fd,	// (0x00065792) cntbar_detail_pane_g1_ParamLimits

0x90fd,	// (0x00065792) cntbar_detail_pane_g1

0x9109,	// (0x0006579e) cntbar_detail_pane_t1_ParamLimits

0x9109,	// (0x0006579e) cntbar_detail_pane_t1

0x91a0,	// (0x00065835) cntbar_detail_list_event_pane_g3_ParamLimits

0x91a0,	// (0x00065835) cntbar_detail_list_event_pane_g3

0x91b8,	// (0x0006584d) cntbar_detail_list_event_pane_g4_ParamLimits

0x91b8,	// (0x0006584d) cntbar_detail_list_event_pane_g4

0x91d0,	// (0x00065865) cntbar_detail_list_event_pane_g5_ParamLimits

0x91d0,	// (0x00065865) cntbar_detail_list_event_pane_g5

0x91e8,	// (0x0006587d) cntbar_detail_list_event_pane_g6_ParamLimits

0x91e8,	// (0x0006587d) cntbar_detail_list_event_pane_g6

0x922a,	// (0x000658bf) cntbar_detail_list_event_pane_t3_ParamLimits

0x922a,	// (0x000658bf) cntbar_detail_list_event_pane_t3

0x923c,	// (0x000658d1) popup_notif_wgt_window_ParamLimits

0x923c,	// (0x000658d1) popup_notif_wgt_window

0x924c,	// (0x000658e1) popup_submenu_window_cp01_ParamLimits

0x924c,	// (0x000658e1) popup_submenu_window_cp01

0xaa5e,	// (0x000670f3) bg_popup_window_pane_cp10

0xed4d,	// (0x0006b3e2) listscroll_notif_wgt_pane

0xed5f,	// (0x0006b3f4) list_notif_wgt_window

0xed68,	// (0x0006b3fd) scroll_pane_cp033

0x925a,	// (0x000658ef) list_notif_wgt_row_pane_ParamLimits

0x925a,	// (0x000658ef) list_notif_wgt_row_pane

0xed71,	// (0x0006b406) aid_size_list_notif_wgt_del

0xed7e,	// (0x0006b413) list_notif_wgt_row_pane_g1

0xed8a,	// (0x0006b41f) list_notif_wgt_row_pane_g2

0xed99,	// (0x0006b42e) list_notif_wgt_row_pane_g3

0x0002,

0xfc1d,	// (0x0006c2b2) list_notif_wgt_row_pane_g

0xeda6,	// (0x0006b43b) list_notif_wgt_row_pane_t1

0xedbc,	// (0x0006b451) list_notif_wgt_row_pane_t2

0xedce,	// (0x0006b463) list_notif_wgt_row_pane_t3

0x0002,

0xfc24,	// (0x0006c2b9) list_notif_wgt_row_pane_t

0xd8e7,	// (0x00069f7c) list_recal_day_event_pane_g1

0xede0,	// (0x0006b475) list_recal_day_event_pane_t1

0x9b9f,	// (0x00066234) bg_button_pane_cp045

0x926c,	// (0x00065901) cntbar_detail_btn_pane_t1

0xc90b,	// (0x00068fa0) main_callh_pane_ParamLimits

0xc90b,	// (0x00068fa0) main_callh_pane

0x9b9f,	// (0x00066234) main_coverflow0_pane

0x9b9f,	// (0x00066234) main_wgtman_pane

0x8190,	// (0x00064825) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8190,	// (0x00064825) main_fs_bigclock_unlock_btn_pane

0x8ab9,	// (0x0006514e) bg_button_pane_cp16

0x8ac9,	// (0x0006515e) cell_tport_appsw_pane_g3

0x927a,	// (0x0006590f) cf0_flow_pane_ParamLimits

0x927a,	// (0x0006590f) cf0_flow_pane

0xedef,	// (0x0006b484) listscroll_cf0_pane

0xedfa,	// (0x0006b48f) main_cf0_pane_g1

0x9289,	// (0x0006591e) main_cf0_pane_t1_ParamLimits

0x9289,	// (0x0006591e) main_cf0_pane_t1

0x929d,	// (0x00065932) main_cf0_pane_t2_ParamLimits

0x929d,	// (0x00065932) main_cf0_pane_t2

0x0001,

0xfc30,	// (0x0006c2c5) main_cf0_pane_t_ParamLimits

0xfc30,	// (0x0006c2c5) main_cf0_pane_t

0xee0c,	// (0x0006b4a1) scroll_pane_cp11

0x92b1,	// (0x00065946) cf0_flow_pane_g1

0x92b9,	// (0x0006594e) cf0_flow_pane_g2

0x0001,

0xfc35,	// (0x0006c2ca) cf0_flow_pane_g

0x92c1,	// (0x00065956) cf0_flow_pane_t1

0x9b9f,	// (0x00066234) main_call6_pane

0x9b9f,	// (0x00066234) main_calllock_pane

0x92cf,	// (0x00065964) call6_btn_grp_pane_ParamLimits

0x92cf,	// (0x00065964) call6_btn_grp_pane

0x92de,	// (0x00065973) call6_pane_g1_ParamLimits

0x92de,	// (0x00065973) call6_pane_g1

0x92ee,	// (0x00065983) popup_call6_1st_window_ParamLimits

0x92ee,	// (0x00065983) popup_call6_1st_window

0x92fc,	// (0x00065991) popup_call6_2nd_window_ParamLimits

0x92fc,	// (0x00065991) popup_call6_2nd_window

0x930a,	// (0x0006599f) cell_call6_btn_pane_ParamLimits

0x930a,	// (0x0006599f) cell_call6_btn_pane

0xaa5e,	// (0x000670f3) bg_popup_call2_in_pane_cp03

0xee17,	// (0x0006b4ac) popup_call6_1st_window_g1

0xee1f,	// (0x0006b4b4) popup_call6_1st_window_g2

0xee27,	// (0x0006b4bc) popup_call6_1st_window_g3

0x0002,

0xfc3a,	// (0x0006c2cf) popup_call6_1st_window_g

0xee2f,	// (0x0006b4c4) popup_call6_1st_window_t1

0xee3e,	// (0x0006b4d3) popup_call6_1st_window_t2

0xee4c,	// (0x0006b4e1) popup_call6_1st_window_t3

0x0002,

0xfc41,	// (0x0006c2d6) popup_call6_1st_window_t

0xaa5e,	// (0x000670f3) bg_popup_call2_in_pane_cp04

0xee17,	// (0x0006b4ac) popup_call6_2nd_window_g1

0xee1f,	// (0x0006b4b4) popup_call6_2nd_window_g2

0xee27,	// (0x0006b4bc) popup_call6_2nd_window_g3

0x0002,

0xfc3a,	// (0x0006c2cf) popup_call6_2nd_window_g

0xee2f,	// (0x0006b4c4) popup_call6_2nd_window_t1

0x0f3f,	// (0x0005d5d4) bg_button_pane_cp15

0x9319,	// (0x000659ae) cell_call6_btn_pane_g1

0x9322,	// (0x000659b7) cell_call6_btn_pane_t1

0x9331,	// (0x000659c6) listscroll_wgtman_pane_ParamLimits

0x9331,	// (0x000659c6) listscroll_wgtman_pane

0x934d,	// (0x000659e2) wgtman_btn_pane_ParamLimits

0x934d,	// (0x000659e2) wgtman_btn_pane

0xb29a,	// (0x0006792f) aid_scroll_copy1

0xee5a,	// (0x0006b4ef) list_wgtman_pane

0x9382,	// (0x00065a17) wgtman_btn_pane_g1_ParamLimits

0x9382,	// (0x00065a17) wgtman_btn_pane_g1

0x93aa,	// (0x00065a3f) wgtman_btn_pane_t1_ParamLimits

0x93aa,	// (0x00065a3f) wgtman_btn_pane_t1

0xee64,	// (0x0006b4f9) wgtman_btn_pane_t2_ParamLimits

0xee64,	// (0x0006b4f9) wgtman_btn_pane_t2

0x0001,

0xfc48,	// (0x0006c2dd) wgtman_btn_pane_t_ParamLimits

0xfc48,	// (0x0006c2dd) wgtman_btn_pane_t

0x93e1,	// (0x00065a76) listrow_wgtman_pane_ParamLimits

0x93e1,	// (0x00065a76) listrow_wgtman_pane

0x93fd,	// (0x00065a92) listrow_wgtman_pane_g1

0x940a,	// (0x00065a9f) listrow_wgtman_pane_g2

0x0001,

0xfc4d,	// (0x0006c2e2) listrow_wgtman_pane_g

0x9428,	// (0x00065abd) listrow_wgtman_pane_t1

0x9440,	// (0x00065ad5) listrow_wgtman_pane_t2

0x0001,

0xfc52,	// (0x0006c2e7) listrow_wgtman_pane_t

0x9466,	// (0x00065afb) wait_bar_pane_cp09

0xee7b,	// (0x0006b510) main_calllock_btn_pane

0xee85,	// (0x0006b51a) main_calllock_pane_g1

0x9b9f,	// (0x00066234) bg_button_pane_cp17

0xee91,	// (0x0006b526) main_calllock_btn_pane_g1

0xee9a,	// (0x0006b52f) main_calllock_btn_pane_t1

0x9b9f,	// (0x00066234) main_dialer3_pane

0x9b9f,	// (0x00066234) main_fmrd2_pane

0xcd13,	// (0x000693a8) main_fs_bigclock_unlock_btn_pane_g1

0x9480,	// (0x00065b15) main_fs_bigclock_unlock_btn_pane_t1

0x948e,	// (0x00065b23) area_fmrd2_info_pane_ParamLimits

0x948e,	// (0x00065b23) area_fmrd2_info_pane

0x949c,	// (0x00065b31) area_fmrd2_visual_pane_ParamLimits

0x949c,	// (0x00065b31) area_fmrd2_visual_pane

0x94aa,	// (0x00065b3f) fmrd2_indi_pane_ParamLimits

0x94aa,	// (0x00065b3f) fmrd2_indi_pane

0x94b7,	// (0x00065b4c) area_fmrd2_visual_pane_g1

0x94bf,	// (0x00065b54) area_fmrd2_visual_pane_t1

0x94cf,	// (0x00065b64) area_fmrd2_visual_pane_t2

0x94df,	// (0x00065b74) area_fmrd2_visual_pane_t3

0x0002,

0xfc5c,	// (0x0006c2f1) area_fmrd2_visual_pane_t

0x94ef,	// (0x00065b84) area_fmrd2_info_pane_g1

0x94f7,	// (0x00065b8c) area_fmrd2_info_pane_t1

0x9507,	// (0x00065b9c) area_fmrd2_info_pane_t2

0x9517,	// (0x00065bac) area_fmrd2_info_pane_t3

0x9527,	// (0x00065bbc) area_fmrd2_info_pane_t4

0x0003,

0xfc63,	// (0x0006c2f8) area_fmrd2_info_pane_t

0x9535,	// (0x00065bca) fmrd2_indi_pane_t1

0x9545,	// (0x00065bda) fmrd2_indi_pane_t2

0x9555,	// (0x00065bea) fmrd2_indi_pane_t3

0x0002,

0xfc6c,	// (0x0006c301) fmrd2_indi_pane_t

0xe457,	// (0x0006aaec) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe457,	// (0x0006aaec) list_single_fs_bigclock_indicator_pane_g5

0xe508,	// (0x0006ab9d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe508,	// (0x0006ab9d) list_single_fs_bigclock_indicator_pane_t5

0x8c69,	// (0x000652fe) aid_cell_bcale_month_pane_ParamLimits

0x8c69,	// (0x000652fe) aid_cell_bcale_month_pane

0x8c87,	// (0x0006531c) bcale_month_pane_ParamLimits

0x8c87,	// (0x0006531c) bcale_month_pane

0x8ca5,	// (0x0006533a) bcale_preview_pane_ParamLimits

0x8ca5,	// (0x0006533a) bcale_preview_pane

0xec80,	// (0x0006b315) list_single_fs_bigclock_pane_t1_ParamLimits

0xec9f,	// (0x0006b334) list_single_fs_bigclock_pane_t2_ParamLimits

0xec9f,	// (0x0006b334) list_single_fs_bigclock_pane_t2

0x0001,

0xfbee,	// (0x0006c283) list_single_fs_bigclock_pane_t_ParamLimits

0xfbee,	// (0x0006c283) list_single_fs_bigclock_pane_t

0x9478,	// (0x00065b0d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfc57,	// (0x0006c2ec) main_fs_bigclock_unlock_btn_pane_g

0x9563,	// (0x00065bf8) aid_dia3_key_size_ParamLimits

0x9563,	// (0x00065bf8) aid_dia3_key_size

0x956f,	// (0x00065c04) aid_dia3_listrow_size_ParamLimits

0x956f,	// (0x00065c04) aid_dia3_listrow_size

0x957f,	// (0x00065c14) dia3_keypad_fun_pane_ParamLimits

0x957f,	// (0x00065c14) dia3_keypad_fun_pane

0x9591,	// (0x00065c26) dia3_keypad_num_pane_ParamLimits

0x9591,	// (0x00065c26) dia3_keypad_num_pane

0x95a3,	// (0x00065c38) dia3_listscroll_pane_ParamLimits

0x95a3,	// (0x00065c38) dia3_listscroll_pane

0x95b1,	// (0x00065c46) dia3_numentry_pane_ParamLimits

0x95b1,	// (0x00065c46) dia3_numentry_pane

0xeea9,	// (0x0006b53e) dia3_list_pane

0xeeb4,	// (0x0006b549) scroll_pane_cp12

0x9b9f,	// (0x00066234) bg_dia3_numentry_pane

0x95bf,	// (0x00065c54) dia3_numentry_pane_t1

0x95ce,	// (0x00065c63) cell_dia3_key_num_pane

0x95d6,	// (0x00065c6b) cell_dia3_key0_fun_pane_ParamLimits

0x95d6,	// (0x00065c6b) cell_dia3_key0_fun_pane

0x95e3,	// (0x00065c78) cell_dia3_key1_fun_pane_ParamLimits

0x95e3,	// (0x00065c78) cell_dia3_key1_fun_pane

0x95f0,	// (0x00065c85) dia3_listrow_pane

0xe193,	// (0x0006a828) bg_dia3_numentry_pane_g1

0x9b9f,	// (0x00066234) bg_button_pane_cp21

0xeebf,	// (0x0006b554) cell_dia3_key_num_pane_t1

0xeecd,	// (0x0006b562) cell_dia3_key_num_pane_t2

0xeedc,	// (0x0006b571) cell_dia3_key_num_pane_t3

0xeeeb,	// (0x0006b580) cell_dia3_key_num_pane_t4

0x0003,

0xfc73,	// (0x0006c308) cell_dia3_key_num_pane_t

0x9b9f,	// (0x00066234) bg_button_pane_cp19

0x95fd,	// (0x00065c92) cell_dia3_key0_fun_pane_g1

0x9b9f,	// (0x00066234) bg_button_pane_cp20

0x9605,	// (0x00065c9a) cell_dia3_key1_fun_pane_g1

0x960d,	// (0x00065ca2) area_left_week_number_pane

0x9620,	// (0x00065cb5) area_top_day_name_pane

0x962e,	// (0x00065cc3) frame_month_view_pane

0xeefa,	// (0x0006b58f) grid_month_view_pane

0x9643,	// (0x00065cd8) cell_top_day_name_pane_ParamLimits

0x9643,	// (0x00065cd8) cell_top_day_name_pane

0x965d,	// (0x00065cf2) cell_area_left_week_number_pane_ParamLimits

0x965d,	// (0x00065cf2) cell_area_left_week_number_pane

0x9680,	// (0x00065d15) cell_month_view_pane_ParamLimits

0x9680,	// (0x00065d15) cell_month_view_pane

0xef08,	// (0x0006b59d) frm_month_g1

0x96ac,	// (0x00065d41) frm_month_g2

0x96bd,	// (0x00065d52) frm_month_g3

0x96ce,	// (0x00065d63) frm_month_g4

0x96df,	// (0x00065d74) frm_month_g5

0x96f2,	// (0x00065d87) frm_month_g6

0x9705,	// (0x00065d9a) frm_month_g7

0xef15,	// (0x0006b5aa) frm_month_g8

0x9718,	// (0x00065dad) frm_month_g9

0x9725,	// (0x00065dba) frm_month_g10

0x9732,	// (0x00065dc7) frm_month_g11

0x973f,	// (0x00065dd4) frm_month_g12

0x974c,	// (0x00065de1) frm_month_g13

0x9759,	// (0x00065dee) frm_month_g14

0x9768,	// (0x00065dfd) frm_month_g15

0x9777,	// (0x00065e0c) frm_month_g16

0x000f,

0xfc7c,	// (0x0006c311) frm_month_g

0xef22,	// (0x0006b5b7) cell_top_day_name_pane_t1

0x9786,	// (0x00065e1b) cell_area_left_week_number_pane_g1

0x9795,	// (0x00065e2a) cell_area_left_week_number_pane_t1

0xcf58,	// (0x000695ed) cell_month_view_pane_g1

0x97ab,	// (0x00065e40) cell_month_view_pane_t1

0x9b9f,	// (0x00066234) main_fps_pane

0xe737,	// (0x0006adcc) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe737,	// (0x0006adcc) cmail_ddmenu_btn02_pane_cp1

0xe753,	// (0x0006ade8) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe753,	// (0x0006ade8) cmail_ddmenu_btn02_pane_cp2

0x8f66,	// (0x000655fb) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8f66,	// (0x000655fb) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfbba,	// (0x0006c24f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfbba,	// (0x0006c24f) cmail_ddmenu_btn02_pane_g

0x8f84,	// (0x00065619) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8f84,	// (0x00065619) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfbbf,	// (0x0006c254) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfbbf,	// (0x0006c254) cmail_ddmenu_btn02_pane_t

0x97c1,	// (0x00065e56) fps_text_pane_ParamLimits

0x97c1,	// (0x00065e56) fps_text_pane

0x97ce,	// (0x00065e63) main_fps_pane_g1_ParamLimits

0x97ce,	// (0x00065e63) main_fps_pane_g1

0x97dc,	// (0x00065e71) wait_bar_pane_cp010_ParamLimits

0x97dc,	// (0x00065e71) wait_bar_pane_cp010

0x97e8,	// (0x00065e7d) fps_text_pane_t1_ParamLimits

0x97e8,	// (0x00065e7d) fps_text_pane_t1

0x6217,	// (0x000628ac) cam4_image_uncrop_pane_g1

0x6220,	// (0x000628b5) cam4_image_uncrop_pane_g2

0x6229,	// (0x000628be) cam4_image_uncrop_pane_g3

0x6232,	// (0x000628c7) cam4_image_uncrop_pane_g4

0x0003,

0xf71a,	// (0x0006bdaf) cam4_image_uncrop_pane_g

0x95f0,	// (0x00065c85) dia3_listrow_pane_ParamLimits

0x9b9f,	// (0x00066234) main_phob2_pane

0x8a9b,	// (0x00065130) cell_tport_appsw_pane_cp02_ParamLimits

0x8a9b,	// (0x00065130) cell_tport_appsw_pane_cp02

0x8aaa,	// (0x0006513f) cell_tport_appsw_pane_cp03_ParamLimits

0x8aaa,	// (0x0006513f) cell_tport_appsw_pane_cp03

0x9b9f,	// (0x00066234) phob2_contact_card_pane

0x9b9f,	// (0x00066234) phob2_listscroll_pane

0xef35,	// (0x0006b5ca) phob2_list_pane

0xef3d,	// (0x0006b5d2) scroll_pane_cp034

0x9801,	// (0x00065e96) phob2_cc_data_pane_ParamLimits

0x9801,	// (0x00065e96) phob2_cc_data_pane

0x981b,	// (0x00065eb0) phob2_cc_listscroll_pane_ParamLimits

0x981b,	// (0x00065eb0) phob2_cc_listscroll_pane

0x9835,	// (0x00065eca) list_double_large_graphic_phob2_pane_ParamLimits

0x9835,	// (0x00065eca) list_double_large_graphic_phob2_pane

0x9854,	// (0x00065ee9) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9854,	// (0x00065ee9) list_double_large_graphic_phob2_pane_g1

0x986a,	// (0x00065eff) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x986a,	// (0x00065eff) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc9d,	// (0x0006c332) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc9d,	// (0x0006c332) list_double_large_graphic_phob2_pane_g

0x9876,	// (0x00065f0b) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9876,	// (0x00065f0b) list_double_large_graphic_phob2_pane_t1

0x988c,	// (0x00065f21) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x988c,	// (0x00065f21) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfca2,	// (0x0006c337) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfca2,	// (0x0006c337) list_double_large_graphic_phob2_pane_t

0x9b9f,	// (0x00066234) list_highlight_pane_cp024

0x98a1,	// (0x00065f36) phob2_cc_button_pane

0x98a9,	// (0x00065f3e) phob2_cc_data_pane_g1_ParamLimits

0x98a9,	// (0x00065f3e) phob2_cc_data_pane_g1

0x98b5,	// (0x00065f4a) phob2_cc_data_pane_g2_ParamLimits

0x98b5,	// (0x00065f4a) phob2_cc_data_pane_g2

0x0001,

0xfca7,	// (0x0006c33c) phob2_cc_data_pane_g_ParamLimits

0xfca7,	// (0x0006c33c) phob2_cc_data_pane_g

0x98c1,	// (0x00065f56) phob2_cc_data_pane_t1_ParamLimits

0x98c1,	// (0x00065f56) phob2_cc_data_pane_t1

0x98d3,	// (0x00065f68) phob2_cc_data_pane_t2_ParamLimits

0x98d3,	// (0x00065f68) phob2_cc_data_pane_t2

0x98e5,	// (0x00065f7a) phob2_cc_data_pane_t3_ParamLimits

0x98e5,	// (0x00065f7a) phob2_cc_data_pane_t3

0x0002,

0xfcac,	// (0x0006c341) phob2_cc_data_pane_t_ParamLimits

0xfcac,	// (0x0006c341) phob2_cc_data_pane_t

0xef45,	// (0x0006b5da) phob2_cc_list_pane_ParamLimits

0xef45,	// (0x0006b5da) phob2_cc_list_pane

0xdc8c,	// (0x0006a321) scroll_pane_cp035_ParamLimits

0xdc8c,	// (0x0006a321) scroll_pane_cp035

0xa6a6,	// (0x00066d3b) bg_button_pane_cp033

0xef51,	// (0x0006b5e6) phob2_cc_button_pane_g1

0xef5d,	// (0x0006b5f2) phob2_cc_button_pane_t1

0xef72,	// (0x0006b607) phob2_cc_button_pane_t2

0x0001,

0xfcb3,	// (0x0006c348) phob2_cc_button_pane_t

0x98f7,	// (0x00065f8c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x98f7,	// (0x00065f8c) list_double_large_graphic_phob2_cc_pane

0x996b,	// (0x00066000) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x996b,	// (0x00066000) list_double_large_graphic_phob2_cc_pane_g1

0x997c,	// (0x00066011) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x997c,	// (0x00066011) list_double_large_graphic_phob2_cc_pane_g2

0x9988,	// (0x0006601d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9988,	// (0x0006601d) list_double_large_graphic_phob2_cc_pane_g3

0x9994,	// (0x00066029) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9994,	// (0x00066029) list_double_large_graphic_phob2_cc_pane_g4

0x99a0,	// (0x00066035) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x99a0,	// (0x00066035) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfcb8,	// (0x0006c34d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfcb8,	// (0x0006c34d) list_double_large_graphic_phob2_cc_pane_g

0x99ac,	// (0x00066041) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x99ac,	// (0x00066041) list_double_large_graphic_phob2_cc_pane_t1

0x99d5,	// (0x0006606a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x99d5,	// (0x0006606a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfcc3,	// (0x0006c358) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfcc3,	// (0x0006c358) list_double_large_graphic_phob2_cc_pane_t

0xef84,	// (0x0006b619) list_highlight_pane_cp025_ParamLimits

0xef84,	// (0x0006b619) list_highlight_pane_cp025

0xa6a6,	// (0x00066d3b) bg_button_pane_cp033_ParamLimits

0xef51,	// (0x0006b5e6) phob2_cc_button_pane_g1_ParamLimits

0xef5d,	// (0x0006b5f2) phob2_cc_button_pane_t1_ParamLimits

0xef72,	// (0x0006b607) phob2_cc_button_pane_t2_ParamLimits

0xfcb3,	// (0x0006c348) phob2_cc_button_pane_t_ParamLimits

0x0f33,	// (0x0005d5c8) popup_wgtman_window

0xd7c3,	// (0x00069e58) scroll_pane_cp038

0x936a,	// (0x000659ff) wgtman_btn_pane_cp_01_ParamLimits

0x936a,	// (0x000659ff) wgtman_btn_pane_cp_01

0xef92,	// (0x0006b627) wgtman_content_pane

0xef9b,	// (0x0006b630) wgtman_heading_pane

0x9b9f,	// (0x00066234) bg_heading_pane_cp02

0xefa4,	// (0x0006b639) wgtman_heading_pane_g1

0xefac,	// (0x0006b641) wgtman_heading_pane_t1

0xefba,	// (0x0006b64f) scroll_pane_cp036

0xefc2,	// (0x0006b657) wgtman_list_pane

0xe901,	// (0x0006af96) wgtman_list_pane_t1_ParamLimits

0xe901,	// (0x0006af96) wgtman_list_pane_t1

0x6176,	// (0x0006280b) cam4_grid_pane

0x6f4c,	// (0x000635e1) bg_button_pane_cp015_ParamLimits

0x6f5e,	// (0x000635f3) bg_button_pane_cp016_ParamLimits

0x6f71,	// (0x00063606) bg_button_pane_cp017_ParamLimits

0x6fc7,	// (0x0006365c) popup_vitu2_query_window_g3_ParamLimits

0x6fc7,	// (0x0006365c) popup_vitu2_query_window_g3

0x7082,	// (0x00063717) popup_vitu2_query_window_t6_ParamLimits

0x7082,	// (0x00063717) popup_vitu2_query_window_t6

0x70ad,	// (0x00063742) popup_vitu2_query_window_t7_ParamLimits

0x70ad,	// (0x00063742) popup_vitu2_query_window_t7

0xe5f3,	// (0x0006ac88) cam4_grid_pane_g1

0xe5fc,	// (0x0006ac91) cam4_grid_pane_g2

0xefca,	// (0x0006b65f) cam4_grid_pane_g3

0xefd3,	// (0x0006b668) cam4_grid_pane_g4

0x0003,

0xfcc8,	// (0x0006c35d) cam4_grid_pane_g

0x1de1,	// (0x0005e476) aid_placing_vt_slider_lsc_ParamLimits

0x2121,	// (0x0005e7b6) vidtel_button_pane_ParamLimits

0x2121,	// (0x0005e7b6) vidtel_button_pane

0x9b9f,	// (0x00066234) bg_button_pane_cp034

0xefde,	// (0x0006b673) vidtel_button_pane_g1

0xefe6,	// (0x0006b67b) vidtel_button_pane_t1

0xd8c5,	// (0x00069f5a) aid_size_vtel_slider_touch

0xdc8c,	// (0x0006a321) scroll_pane_cp039

0x7ecd,	// (0x00064562) ncim_query_button_pane_cp01_ParamLimits

0x7eec,	// (0x00064581) ncimui_query_pane_g1_ParamLimits

0xa6a6,	// (0x00066d3b) input_focus_pane_cp012_ParamLimits

0xe1d9,	// (0x0006a86e) ncim_query_entry_pane_t1_ParamLimits

0xdc8c,	// (0x0006a321) scroll_pane_cp039_ParamLimits

0xb371,	// (0x00067a06) navi_pane_bcale_mc_g1

0xb379,	// (0x00067a0e) navi_pane_bcale_mc_t1

0xe787,	// (0x0006ae1c) main_sp_fs_email_pane_g1

0xe793,	// (0x0006ae28) main_sp_fs_email_pane_g2

0x0001,

0xfaac,	// (0x0006c141) main_sp_fs_email_pane_g

0xea04,	// (0x0006b099) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea04,	// (0x0006b099) list_single_cale_mrui_row_pane_g3

0x8fa4,	// (0x00065639) list_single_recal_day_pane_g5_event_pane

0xa740,	// (0x00066dd5) list_single_recal_day_pane_g7

0xeffc,	// (0x0006b691) list_recal_day_event_pane_cp01

0xf005,	// (0x0006b69a) list_recal_vselct_arw_lo_pane_cp01

0xf00d,	// (0x0006b6a2) list_recal_vselct_arw_up_pane_cp01

0xf015,	// (0x0006b6aa) list_recal_vselct_pane_cp01

0xd8e7,	// (0x00069f7c) list_recal_day_event_pane_cp01_g1

0xa79c,	// (0x00066e31) list_recal_day_event_pane_cp01_t1

0xa748,	// (0x00066ddd) list_single_recal_day_pane_t1_ParamLimits

0xa75a,	// (0x00066def) list_single_recal_day_pane_t2_ParamLimits

0xfbcf,	// (0x0006c264) list_single_recal_day_pane_t_ParamLimits

0xa7c8,	// (0x00066e5d) bg_notes_pane_ParamLimits

0xa877,	// (0x00066f0c) list_notes_pane_ParamLimits

0x1298,	// (0x0005d92d) scroll_pane_cp06_ParamLimits

0xa899,	// (0x00066f2e) main_notes_pane_ParamLimits

0xa6a6,	// (0x00066d3b) main_welc_pane

0x9a0d,	// (0x000660a2) main_welc_body_pane_ParamLimits

0x9a0d,	// (0x000660a2) main_welc_body_pane

0x9a26,	// (0x000660bb) main_welc_opti_pane_ParamLimits

0x9a26,	// (0x000660bb) main_welc_opti_pane

0x9a65,	// (0x000660fa) main_welc_pane_t1_ParamLimits

0x9a65,	// (0x000660fa) main_welc_pane_t1

0x9ac1,	// (0x00066156) main_welc_body_row_pane_ParamLimits

0x9ac1,	// (0x00066156) main_welc_body_row_pane

0xe2dd,	// (0x0006a972) main_welc_opti_row_pane_ParamLimits

0xe2dd,	// (0x0006a972) main_welc_opti_row_pane

0xf01f,	// (0x0006b6b4) main_welc_opti_row_pane_g1

0x9aea,	// (0x0006617f) main_welc_opti_row_pane_t1

0xf027,	// (0x0006b6bc) main_welc_body_row_pane_t1

0xed57,	// (0x0006b3ec) popup_notif_wgt_heading_pane

0xed71,	// (0x0006b406) aid_size_list_notif_wgt_del_ParamLimits

0xed7e,	// (0x0006b413) list_notif_wgt_row_pane_g1_ParamLimits

0xed8a,	// (0x0006b41f) list_notif_wgt_row_pane_g2_ParamLimits

0xed99,	// (0x0006b42e) list_notif_wgt_row_pane_g3_ParamLimits

0xfc1d,	// (0x0006c2b2) list_notif_wgt_row_pane_g_ParamLimits

0xeda6,	// (0x0006b43b) list_notif_wgt_row_pane_t1_ParamLimits

0xedbc,	// (0x0006b451) list_notif_wgt_row_pane_t2_ParamLimits

0xedce,	// (0x0006b463) list_notif_wgt_row_pane_t3_ParamLimits

0xfc24,	// (0x0006c2b9) list_notif_wgt_row_pane_t_ParamLimits

0x93fd,	// (0x00065a92) listrow_wgtman_pane_g1_ParamLimits

0x940a,	// (0x00065a9f) listrow_wgtman_pane_g2_ParamLimits

0xfc4d,	// (0x0006c2e2) listrow_wgtman_pane_g_ParamLimits

0x9428,	// (0x00065abd) listrow_wgtman_pane_t1_ParamLimits

0x9440,	// (0x00065ad5) listrow_wgtman_pane_t2_ParamLimits

0xfc52,	// (0x0006c2e7) listrow_wgtman_pane_t_ParamLimits

0x9466,	// (0x00065afb) wait_bar_pane_cp09_ParamLimits

0x9b9f,	// (0x00066234) bg_popup_heading_pane_cp02

0xf036,	// (0x0006b6cb) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x0006b6d3) popup_notif_wgt_heading_pane_t1

0x9b9f,	// (0x00066234) main_vids_pane

0x9b9f,	// (0x00066234) vids_listscroll_pane

0x9af9,	// (0x0006618e) scroll_pane_cp040

0x9b9f,	// (0x00066234) vids_list_pane

0x9b04,	// (0x00066199) vids_list_double_pane_ParamLimits

0x9b04,	// (0x00066199) vids_list_double_pane

0x9b1c,	// (0x000661b1) vids_list_double_pane_g1

0x9b25,	// (0x000661ba) vids_list_double_pane_t1

0x9b35,	// (0x000661ca) vids_list_double_pane_t2

0x0001,

0xfcdf,	// (0x0006c374) vids_list_double_pane_t

0x416d,	// (0x00060802) main_ncimui_pane_ParamLimits

0x7d24,	// (0x000643b9) main_ncimui_pane_g1_ParamLimits

0x7d30,	// (0x000643c5) main_ncimui_pane_g2_ParamLimits

0x7d30,	// (0x000643c5) main_ncimui_pane_g2

0x0001,

0xf9d4,	// (0x0006c069) main_ncimui_pane_g_ParamLimits

0xf9d4,	// (0x0006c069) main_ncimui_pane_g

0x9a3f,	// (0x000660d4) main_welc_pane_g1_ParamLimits

0x9a3f,	// (0x000660d4) main_welc_pane_g1

0x9a4b,	// (0x000660e0) main_welc_pane_g2_ParamLimits

0x9a4b,	// (0x000660e0) main_welc_pane_g2

0x0002,

0xfcd1,	// (0x0006c366) main_welc_pane_g_ParamLimits

0xfcd1,	// (0x0006c366) main_welc_pane_g

0xa7c8,	// (0x00066e5d) listscroll_mce_pane_ParamLimits

0xb4c6,	// (0x00067b5b) wait_bar_pane_cp10

0xc8ff,	// (0x00068f94) main_cale_day_pane_ParamLimits

0xc8ff,	// (0x00068f94) main_cale_week_pane_ParamLimits

0xa7c8,	// (0x00066e5d) main_messa_pane_ParamLimits

0x5497,	// (0x00061b2c) main_clock2_btn_pane_ParamLimits

0x5497,	// (0x00061b2c) main_clock2_btn_pane

0xd0e0,	// (0x00069775) main_clock2_btn_pane_cp01_ParamLimits

0xd0e0,	// (0x00069775) main_clock2_btn_pane_cp01

0xe9d5,	// (0x0006b06a) list_cale_mrui_pane_ParamLimits

0xee04,	// (0x0006b499) main_cf0_pane_g2

0x0001,

0xfc2b,	// (0x0006c2c0) main_cf0_pane_g

0x960d,	// (0x00065ca2) area_left_week_number_pane_ParamLimits

0x9620,	// (0x00065cb5) area_top_day_name_pane_ParamLimits

0x962e,	// (0x00065cc3) frame_month_view_pane_ParamLimits

0xeefa,	// (0x0006b58f) grid_month_view_pane_ParamLimits

0xef08,	// (0x0006b59d) frm_month_g1_ParamLimits

0x96ac,	// (0x00065d41) frm_month_g2_ParamLimits

0x96bd,	// (0x00065d52) frm_month_g3_ParamLimits

0x96ce,	// (0x00065d63) frm_month_g4_ParamLimits

0x96df,	// (0x00065d74) frm_month_g5_ParamLimits

0x96f2,	// (0x00065d87) frm_month_g6_ParamLimits

0x9705,	// (0x00065d9a) frm_month_g7_ParamLimits

0xef15,	// (0x0006b5aa) frm_month_g8_ParamLimits

0x9718,	// (0x00065dad) frm_month_g9_ParamLimits

0x9725,	// (0x00065dba) frm_month_g10_ParamLimits

0x9732,	// (0x00065dc7) frm_month_g11_ParamLimits

0x973f,	// (0x00065dd4) frm_month_g12_ParamLimits

0x974c,	// (0x00065de1) frm_month_g13_ParamLimits

0x9759,	// (0x00065dee) frm_month_g14_ParamLimits

0x9768,	// (0x00065dfd) frm_month_g15_ParamLimits

0x9777,	// (0x00065e0c) frm_month_g16_ParamLimits

0xfc7c,	// (0x0006c311) frm_month_g_ParamLimits

0xef22,	// (0x0006b5b7) cell_top_day_name_pane_t1_ParamLimits

0x9786,	// (0x00065e1b) cell_area_left_week_number_pane_g1_ParamLimits

0x9795,	// (0x00065e2a) cell_area_left_week_number_pane_t1_ParamLimits

0xcf58,	// (0x000695ed) cell_month_view_pane_g1_ParamLimits

0x97ab,	// (0x00065e40) cell_month_view_pane_t1_ParamLimits

0xa7c0,	// (0x00066e55) main_clock2_btn_pane_g1

0xf04c,	// (0x0006b6e1) main_clock2_btn_pane_t1

0xa6a6,	// (0x00066d3b) listscroll_cmail_pane_ParamLimits

0xe787,	// (0x0006ae1c) main_sp_fs_email_pane_g1_ParamLimits

0xe793,	// (0x0006ae28) main_sp_fs_email_pane_g2_ParamLimits

0xfaac,	// (0x0006c141) main_sp_fs_email_pane_g_ParamLimits

0xeae3,	// (0x0006b178) list_recal_day_pane_ParamLimits

0xeaf4,	// (0x0006b189) mian_recal_day_pane_t1

0x8767,	// (0x00064dfc) list_single_dyc_row_text_pane_t4_ParamLimits

0x8767,	// (0x00064dfc) list_single_dyc_row_text_pane_t4

0x879e,	// (0x00064e33) list_single_dyc_row_text_pane_t5_ParamLimits

0x879e,	// (0x00064e33) list_single_dyc_row_text_pane_t5

0xa263,	// (0x000668f8) list_single_dyc_row_text_pane_t6_ParamLimits

0xa263,	// (0x000668f8) list_single_dyc_row_text_pane_t6

0x2fc4,	// (0x0005f659) aid_mgn_list_cale_time_pane

0x416d,	// (0x00060802) main_gallery2_pane_ParamLimits

0xd0f6,	// (0x0006978b) main_clock2_pane_cp01_t1

0xd104,	// (0x00069799) main_clock2_pane_cp01_t3

0x0001,

0x040b,	// (0x0005caa0) main_clock2_pane_cp01_t

0x16f8,	// (0x0005dd8d) cale_week_scroll_pane_g16_ParamLimits

0x16f8,	// (0x0005dd8d) cale_week_scroll_pane_g16

0xaa5e,	// (0x000670f3) vorec_slider_pane

0xefe6,	// (0x0006b67b) vidtel_button_pane_t1_ParamLimits

0x8fff,	// (0x00065694) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8fff,	// (0x00065694) main_fs_bigclock_clock_pane_g2_ParamLimits

0x900c,	// (0x000656a1) main_fs_bigclock_clock_pane_g3_ParamLimits

0x900c,	// (0x000656a1) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfbd9,	// (0x0006c26e) main_fs_bigclock_clock_pane_g_ParamLimits

0x9018,	// (0x000656ad) main_fs_bigclock_clock_pane_t1_ParamLimits

0x902b,	// (0x000656c0) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfbe2,	// (0x0006c277) main_fs_bigclock_clock_pane_t_ParamLimits

0x4d3c,	// (0x000613d1) main_mup3_lyrics_pane_ParamLimits

0x4d3c,	// (0x000613d1) main_mup3_lyrics_pane

0x9b69,	// (0x000661fe) main_mup3_lyrics_pane_t1_ParamLimits

0x9b69,	// (0x000661fe) main_mup3_lyrics_pane_t1

0x5ae9,	// (0x0006217e) aid_main_mp4_pane_t1_area

0x5af3,	// (0x00062188) aid_main_mp4_pane_t2_area

0x5bf2,	// (0x00062287) main_mp4_pane_g7_ParamLimits

0x5bf2,	// (0x00062287) main_mp4_pane_g7

0x5bfe,	// (0x00062293) main_mp4_pane_g8_ParamLimits

0x5bfe,	// (0x00062293) main_mp4_pane_g8

0x601e,	// (0x000626b3) aid_call6_pane_g1_size

0x993d,	// (0x00065fd2) list_double_large_graphic_phob2_other_pane_ParamLimits

0x993d,	// (0x00065fd2) list_double_large_graphic_phob2_other_pane

0xae40,	// (0x000674d5) list_double_large_graphic_phob2_other_pane_g1

0x9b9f,	// (0x00066234) list_highlight_pane_cp026

0xa6a6,	// (0x00066d3b) main_welc_pane_ParamLimits

0x84c3,	// (0x00064b58) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x84c3,	// (0x00064b58) main_sp_fs_ctrlbar_pane_g3

0x84db,	// (0x00064b70) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x84db,	// (0x00064b70) main_sp_fs_ctrlbar_pane_g4

0x850d,	// (0x00064ba2) toolbar2_fixed_button_pane_cp01

0x8518,	// (0x00064bad) toolbar2_fixed_button_pane_cp02

0x8523,	// (0x00064bb8) toolbar2_fixed_button_pane_cp03

0x99fe,	// (0x00066093) list_welc_entry_pane_ParamLimits

0x99fe,	// (0x00066093) list_welc_entry_pane

0x9a59,	// (0x000660ee) main_welc_pane_g3_ParamLimits

0x9a59,	// (0x000660ee) main_welc_pane_g3

0x9a7f,	// (0x00066114) main_welc_pane_t2_ParamLimits

0x9a7f,	// (0x00066114) main_welc_pane_t2

0x9a93,	// (0x00066128) main_welc_pane_t3_ParamLimits

0x9a93,	// (0x00066128) main_welc_pane_t3

0x0002,

0xfcd8,	// (0x0006c36d) main_welc_pane_t_ParamLimits

0xfcd8,	// (0x0006c36d) main_welc_pane_t

0x9aa5,	// (0x0006613a) welc_button_pane_ParamLimits

0x9aa5,	// (0x0006613a) welc_button_pane

0x9ab3,	// (0x00066148) welc_service_logo_pane_ParamLimits

0x9ab3,	// (0x00066148) welc_service_logo_pane

0xf05a,	// (0x0006b6ef) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x0006b6ef) list_single_welc_entry_pane

0xf06b,	// (0x0006b700) list_single_welc_entry_pane_g1

0xf073,	// (0x0006b708) list_single_welc_entry_pane_t1

0xf081,	// (0x0006b716) list_single_welc_entry_pane_t2

0x0001,

0x0b7a,	// (0x0005d20f) list_single_welc_entry_pane_t

0x9b9f,	// (0x00066234) bg_button_pane_cp035

0xf08f,	// (0x0006b724) welc_button_pane_t1

0xf09d,	// (0x0006b732) welc_service_logo_pane_g1

0xf0a6,	// (0x0006b73b) welc_service_logo_pane_g2

0x0001,

0x0b7f,	// (0x0005d214) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
