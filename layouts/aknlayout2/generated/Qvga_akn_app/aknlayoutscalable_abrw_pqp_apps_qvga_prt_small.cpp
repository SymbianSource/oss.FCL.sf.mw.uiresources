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

#include "aknlayoutscalable_abrw_pqp_apps_qvga_prt_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt[]; }

namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pqp_apps_qvga_prt + 0x000471dd };

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
0x4be4,	// (0x0004bdc1) Screen

0x4bee,	// (0x0004bdcb) application_window

0x4c4a,	// (0x0004be27) area_bottom_pane_ParamLimits

0x4c4a,	// (0x0004be27) area_bottom_pane

0x4c86,	// (0x0004be63) area_top_pane_ParamLimits

0x4c86,	// (0x0004be63) area_top_pane

0x4ce2,	// (0x0004bebf) call_video_uplink_pane_ParamLimits

0x4ce2,	// (0x0004bebf) call_video_uplink_pane

0x4d1d,	// (0x0004befa) main_pane_ParamLimits

0x4d1d,	// (0x0004befa) main_pane

0x0b20,	// (0x00047cfd) context_pane

0x8100,	// (0x0004f2dd) navi_pane

0x811a,	// (0x0004f2f7) popup_cale_events_window_ParamLimits

0x811a,	// (0x0004f2f7) popup_cale_events_window

0x0b33,	// (0x00047d10) popup_mup_playback_window

0x8131,	// (0x0004f30e) signal_pane

0x57ea,	// (0x0004c9c7) main_browser_pane

0xd29d,	// (0x0005447a) main_burst_pane

0x4e44,	// (0x0004c021) main_calc_pane

0xefe6,	// (0x000561c3) main_cale_day_pane

0x5b1e,	// (0x0004ccfb) main_cale_month_pane

0xefe6,	// (0x000561c3) main_cale_week_pane

0xd29d,	// (0x0005447a) main_call_pane

0x531b,	// (0x0004c4f8) main_call_poc_pane

0xd29d,	// (0x0005447a) main_camera_pane

0xd29d,	// (0x0005447a) main_chi_dic_pane

0xda81,	// (0x00054c5e) main_clock_pane

0x531b,	// (0x0004c4f8) main_fmradio_pane

0xd29d,	// (0x0005447a) main_graph_messa_pane

0x531b,	// (0x0004c4f8) main_help_pane

0x57ea,	// (0x0004c9c7) main_im_pane

0x5576,	// (0x0004c753) main_image_pane_ParamLimits

0x5576,	// (0x0004c753) main_image_pane

0x531b,	// (0x0004c4f8) main_location2_pane

0xd29d,	// (0x0005447a) main_location_pane

0x5576,	// (0x0004c753) main_messa_pane

0x531b,	// (0x0004c4f8) main_mp2_pane

0xd29d,	// (0x0005447a) main_mp_pane

0x531b,	// (0x0004c4f8) main_msg_pane

0x531b,	// (0x0004c4f8) main_mup_eq_pane

0x531b,	// (0x0004c4f8) main_mup_pane

0x57ea,	// (0x0004c9c7) main_notes_pane

0x531b,	// (0x0004c4f8) main_pec_pane

0x531b,	// (0x0004c4f8) main_phob_pane

0x531b,	// (0x0004c4f8) main_pinb_pane

0x531b,	// (0x0004c4f8) main_postcard_pane

0x531b,	// (0x0004c4f8) main_qdial_pane

0xd29d,	// (0x0005447a) main_skin_pane

0x531b,	// (0x0004c4f8) main_smil2_pane

0xd29d,	// (0x0005447a) main_smil_pane

0xd29d,	// (0x0005447a) main_video_pane

0xd29d,	// (0x0005447a) main_video_tele_pane

0x5576,	// (0x0004c753) main_viewer_pane_ParamLimits

0x5576,	// (0x0004c753) main_viewer_pane

0xd29d,	// (0x0005447a) main_vorec_pane

0x7ffe,	// (0x0004f1db) popup_blid_sat_info_window_ParamLimits

0x7ffe,	// (0x0004f1db) popup_blid_sat_info_window

0x801a,	// (0x0004f1f7) popup_dyc_status_message_window_ParamLimits

0x801a,	// (0x0004f1f7) popup_dyc_status_message_window

0x8026,	// (0x0004f203) popup_grid_large_graphic_window_ParamLimits

0x8026,	// (0x0004f203) popup_grid_large_graphic_window

0x8097,	// (0x0004f274) popup_loc_request_window_ParamLimits

0x8097,	// (0x0004f274) popup_loc_request_window

0x80da,	// (0x0004f2b7) popup_wml_address_window_ParamLimits

0x80da,	// (0x0004f2b7) popup_wml_address_window

0x7ecd,	// (0x0004f0aa) call_muted_g1

0x7bc3,	// (0x0004eda0) popup_call_audio_conf_window_ParamLimits

0x7bc3,	// (0x0004eda0) popup_call_audio_conf_window

0x7edd,	// (0x0004f0ba) popup_call_audio_first_window_ParamLimits

0x7edd,	// (0x0004f0ba) popup_call_audio_first_window

0x7f11,	// (0x0004f0ee) popup_call_audio_in_window_ParamLimits

0x7f11,	// (0x0004f0ee) popup_call_audio_in_window

0x7f2d,	// (0x0004f10a) popup_call_audio_out_window_ParamLimits

0x7f2d,	// (0x0004f10a) popup_call_audio_out_window

0x7f49,	// (0x0004f126) popup_call_audio_second_window_ParamLimits

0x7f49,	// (0x0004f126) popup_call_audio_second_window

0x7f71,	// (0x0004f14e) popup_call_audio_wait_window_ParamLimits

0x7f71,	// (0x0004f14e) popup_call_audio_wait_window

0x7f90,	// (0x0004f16d) popup_number_entry_window_ParamLimits

0x7f90,	// (0x0004f16d) popup_number_entry_window

0x4eb1,	// (0x0004c08e) bg_popup_call_pane_cp05_ParamLimits

0x4eb1,	// (0x0004c08e) bg_popup_call_pane_cp05

0x4ed1,	// (0x0004c0ae) popup_number_entry_window_t1

0x4ee4,	// (0x0004c0c1) popup_number_entry_window_t2

0x4ef6,	// (0x0004c0d3) popup_number_entry_window_t3

0x0003,

0xf05f,	// (0x0005623c) popup_number_entry_window_t

0x4f3d,	// (0x0004c11a) text_title_cp2

0x4f50,	// (0x0004c12d) bg_popup_call_pane_cp_ParamLimits

0x4f50,	// (0x0004c12d) bg_popup_call_pane_cp

0x4f5e,	// (0x0004c13b) call_thumbnail_pane

0x4f66,	// (0x0004c143) popup_call_audio_in_window_g1_ParamLimits

0x4f66,	// (0x0004c143) popup_call_audio_in_window_g1

0x4f72,	// (0x0004c14f) popup_call_audio_in_window_g2_ParamLimits

0x4f72,	// (0x0004c14f) popup_call_audio_in_window_g2

0x4f7e,	// (0x0004c15b) popup_call_audio_in_window_g3_ParamLimits

0x4f7e,	// (0x0004c15b) popup_call_audio_in_window_g3

0x0002,

0xf068,	// (0x00056245) popup_call_audio_in_window_g_ParamLimits

0xf068,	// (0x00056245) popup_call_audio_in_window_g

0x4f8a,	// (0x0004c167) popup_call_audio_in_window_t1_ParamLimits

0x4f8a,	// (0x0004c167) popup_call_audio_in_window_t1

0x4fa5,	// (0x0004c182) popup_call_audio_in_window_t2_ParamLimits

0x4fa5,	// (0x0004c182) popup_call_audio_in_window_t2

0x4fc0,	// (0x0004c19d) popup_call_audio_in_window_t3_ParamLimits

0x4fc0,	// (0x0004c19d) popup_call_audio_in_window_t3

0x0002,

0xf06f,	// (0x0005624c) popup_call_audio_in_window_t_ParamLimits

0xf06f,	// (0x0005624c) popup_call_audio_in_window_t

0x4f50,	// (0x0004c12d) bg_popup_call_pane_cp01_ParamLimits

0x4f50,	// (0x0004c12d) bg_popup_call_pane_cp01

0x4f5e,	// (0x0004c13b) call_thumbnail_pane_cp02

0x4fd3,	// (0x0004c1b0) call_type_pane_cp022

0x4fdb,	// (0x0004c1b8) popup_call_audio_out_window_g1_ParamLimits

0x4fdb,	// (0x0004c1b8) popup_call_audio_out_window_g1

0x4fed,	// (0x0004c1ca) popup_call_audio_out_window_g2_ParamLimits

0x4fed,	// (0x0004c1ca) popup_call_audio_out_window_g2

0x4ff9,	// (0x0004c1d6) popup_call_audio_out_window_g3_ParamLimits

0x4ff9,	// (0x0004c1d6) popup_call_audio_out_window_g3

0x0002,

0xf076,	// (0x00056253) popup_call_audio_out_window_g_ParamLimits

0xf076,	// (0x00056253) popup_call_audio_out_window_g

0x500b,	// (0x0004c1e8) popup_call_audio_out_window_t1_ParamLimits

0x500b,	// (0x0004c1e8) popup_call_audio_out_window_t1

0x5023,	// (0x0004c200) popup_call_audio_out_window_t2_ParamLimits

0x5023,	// (0x0004c200) popup_call_audio_out_window_t2

0x0001,

0xf07d,	// (0x0005625a) popup_call_audio_out_window_t_ParamLimits

0xf07d,	// (0x0005625a) popup_call_audio_out_window_t

0x5038,	// (0x0004c215) bg_popup_call_pane_ParamLimits

0x5038,	// (0x0004c215) bg_popup_call_pane

0x50bc,	// (0x0004c299) call_thumbnail_pane_cp_ParamLimits

0x50bc,	// (0x0004c299) call_thumbnail_pane_cp

0x50e0,	// (0x0004c2bd) call_type_pane_cp01_ParamLimits

0x50e0,	// (0x0004c2bd) call_type_pane_cp01

0x5124,	// (0x0004c301) popup_call_audio_first_window_g1_ParamLimits

0x5124,	// (0x0004c301) popup_call_audio_first_window_g1

0x5170,	// (0x0004c34d) popup_call_audio_first_window_g2_ParamLimits

0x5170,	// (0x0004c34d) popup_call_audio_first_window_g2

0x0001,

0xf082,	// (0x0005625f) popup_call_audio_first_window_g_ParamLimits

0xf082,	// (0x0005625f) popup_call_audio_first_window_g

0x51b4,	// (0x0004c391) popup_call_audio_first_window_t1_ParamLimits

0x51b4,	// (0x0004c391) popup_call_audio_first_window_t1

0x5260,	// (0x0004c43d) popup_call_audio_first_window_t4_ParamLimits

0x5260,	// (0x0004c43d) popup_call_audio_first_window_t4

0x52ec,	// (0x0004c4c9) popup_call_audio_first_window_t5_ParamLimits

0x52ec,	// (0x0004c4c9) popup_call_audio_first_window_t5

0x0002,

0xf087,	// (0x00056264) popup_call_audio_first_window_t_ParamLimits

0xf087,	// (0x00056264) popup_call_audio_first_window_t

0x531b,	// (0x0004c4f8) bg_popup_call_pane_cp02

0x5325,	// (0x0004c502) call_type_pane_cp023

0x532d,	// (0x0004c50a) popup_call_audio_wait_window_g1

0x5335,	// (0x0004c512) popup_call_audio_wait_window_g2

0x0001,

0xf08e,	// (0x0005626b) popup_call_audio_wait_window_g

0x533d,	// (0x0004c51a) popup_call_audio_wait_window_t3

0x534b,	// (0x0004c528) bg_popup_call_pane_cp03_ParamLimits

0x534b,	// (0x0004c528) bg_popup_call_pane_cp03

0x53ab,	// (0x0004c588) call_thumbnail_pane_cp011_ParamLimits

0x53ab,	// (0x0004c588) call_thumbnail_pane_cp011

0x53b7,	// (0x0004c594) call_type_pane_cp034_ParamLimits

0x53b7,	// (0x0004c594) call_type_pane_cp034

0x53f3,	// (0x0004c5d0) popup_call_audio_second_window_g1_ParamLimits

0x53f3,	// (0x0004c5d0) popup_call_audio_second_window_g1

0x542f,	// (0x0004c60c) popup_call_audio_second_window_g2_ParamLimits

0x542f,	// (0x0004c60c) popup_call_audio_second_window_g2

0x0001,

0xf093,	// (0x00056270) popup_call_audio_second_window_g_ParamLimits

0xf093,	// (0x00056270) popup_call_audio_second_window_g

0x546b,	// (0x0004c648) popup_call_audio_second_window_t1_ParamLimits

0x546b,	// (0x0004c648) popup_call_audio_second_window_t1

0x54ec,	// (0x0004c6c9) popup_call_audio_second_window_t2_ParamLimits

0x54ec,	// (0x0004c6c9) popup_call_audio_second_window_t2

0x5522,	// (0x0004c6ff) popup_call_audio_second_window_t3_ParamLimits

0x5522,	// (0x0004c6ff) popup_call_audio_second_window_t3

0x0002,

0xf098,	// (0x00056275) popup_call_audio_second_window_t_ParamLimits

0xf098,	// (0x00056275) popup_call_audio_second_window_t

0x531b,	// (0x0004c4f8) bg_popup_call_pane_cp04

0x5558,	// (0x0004c735) list_conf_pane

0x5560,	// (0x0004c73d) popup_call_audio_conf_window_t1

0x556e,	// (0x0004c74b) call_thumbnail_pane_g1

0x5576,	// (0x0004c753) bg_pinb_pane_ParamLimits

0x5576,	// (0x0004c753) bg_pinb_pane

0x5584,	// (0x0004c761) find_pinb_pane

0x5576,	// (0x0004c753) listscroll_pinb_pane_ParamLimits

0x5576,	// (0x0004c753) listscroll_pinb_pane

0x558e,	// (0x0004c76b) pinb_bg_pane_g1

0x558e,	// (0x0004c76b) pinb_bg_pane_g2

0x558e,	// (0x0004c76b) pinb_bg_pane_g3

0x558e,	// (0x0004c76b) pinb_bg_pane_g4

0x558e,	// (0x0004c76b) pinb_bg_pane_g5

0x558e,	// (0x0004c76b) pinb_bg_pane_g6

0x558e,	// (0x0004c76b) pinb_bg_pane_g7

0x558e,	// (0x0004c76b) pinb_bg_pane_g8

0x558e,	// (0x0004c76b) pinb_bg_pane_g9

0x558e,	// (0x0004c76b) pinb_bg_pane_g10

0x0009,

0xf09f,	// (0x0005627c) pinb_bg_pane_g

0x55a3,	// (0x0004c780) grid_pinb_pane

0x4bf8,	// (0x0004bdd5) list_pinb_pane

0x55ad,	// (0x0004c78a) scroll_pane_cp01_ParamLimits

0x55ad,	// (0x0004c78a) scroll_pane_cp01

0x55ba,	// (0x0004c797) find_pinb_pane_g1_ParamLimits

0x55ba,	// (0x0004c797) find_pinb_pane_g1

0x55d2,	// (0x0004c7af) find_pinb_pane_t1

0x55e4,	// (0x0004c7c1) find_pinb_pane_t2

0x0001,

0xf0b9,	// (0x00056296) find_pinb_pane_t

0x55f9,	// (0x0004c7d6) input_focus_pane_cp01_ParamLimits

0x55f9,	// (0x0004c7d6) input_focus_pane_cp01

0x5605,	// (0x0004c7e2) cell_pinb_pane_ParamLimits

0x5605,	// (0x0004c7e2) cell_pinb_pane

0x5619,	// (0x0004c7f6) cell_pinb_pane_g1_ParamLimits

0x5619,	// (0x0004c7f6) cell_pinb_pane_g1

0x5627,	// (0x0004c804) cell_pinb_pane_g2_ParamLimits

0x5627,	// (0x0004c804) cell_pinb_pane_g2

0x5627,	// (0x0004c804) cell_pinb_pane_g3_ParamLimits

0x5627,	// (0x0004c804) cell_pinb_pane_g3

0x0002,

0xf0be,	// (0x0005629b) cell_pinb_pane_g_ParamLimits

0xf0be,	// (0x0005629b) cell_pinb_pane_g

0x531b,	// (0x0004c4f8) grid_highlight_pane_cp01

0x5635,	// (0x0004c812) list_pinb_item_pane_ParamLimits

0x5635,	// (0x0004c812) list_pinb_item_pane

0x4bf8,	// (0x0004bdd5) list_highlight_pane_cp02

0x5643,	// (0x0004c820) list_pinb_item_pane_g1_ParamLimits

0x5643,	// (0x0004c820) list_pinb_item_pane_g1

0x5627,	// (0x0004c804) list_pinb_item_pane_g2_ParamLimits

0x5627,	// (0x0004c804) list_pinb_item_pane_g2

0x5619,	// (0x0004c7f6) list_pinb_item_pane_g3_ParamLimits

0x5619,	// (0x0004c7f6) list_pinb_item_pane_g3

0x5627,	// (0x0004c804) list_pinb_item_pane_g4_ParamLimits

0x5627,	// (0x0004c804) list_pinb_item_pane_g4

0x0003,

0xf0c5,	// (0x000562a2) list_pinb_item_pane_g_ParamLimits

0xf0c5,	// (0x000562a2) list_pinb_item_pane_g

0x5651,	// (0x0004c82e) list_pinb_item_pane_t1_ParamLimits

0x5651,	// (0x0004c82e) list_pinb_item_pane_t1

0x567f,	// (0x0004c85c) calc_display_pane

0x5697,	// (0x0004c874) calc_paper_pane

0x56b3,	// (0x0004c890) grid_calc_pane

0x531b,	// (0x0004c4f8) bg_list_pane_cp01

0x56d3,	// (0x0004c8b0) clock_g1

0x56db,	// (0x0004c8b8) clock_g2

0x0001,

0xf0ce,	// (0x000562ab) clock_g

0x56e3,	// (0x0004c8c0) clock_t1_ParamLimits

0x56e3,	// (0x0004c8c0) clock_t1

0x56f8,	// (0x0004c8d5) clock_t2_ParamLimits

0x56f8,	// (0x0004c8d5) clock_t2

0x570a,	// (0x0004c8e7) clock_t3_ParamLimits

0x570a,	// (0x0004c8e7) clock_t3

0x571c,	// (0x0004c8f9) clock_t4_ParamLimits

0x571c,	// (0x0004c8f9) clock_t4

0x572e,	// (0x0004c90b) clock_t5_ParamLimits

0x572e,	// (0x0004c90b) clock_t5

0x5743,	// (0x0004c920) clock_t6_ParamLimits

0x5743,	// (0x0004c920) clock_t6

0x5755,	// (0x0004c932) clock_t7_ParamLimits

0x5755,	// (0x0004c932) clock_t7

0x5767,	// (0x0004c944) clock_t8_ParamLimits

0x5767,	// (0x0004c944) clock_t8

0x5779,	// (0x0004c956) clock_t9_ParamLimits

0x5779,	// (0x0004c956) clock_t9

0x0008,

0xf0d3,	// (0x000562b0) clock_t_ParamLimits

0xf0d3,	// (0x000562b0) clock_t

0x578b,	// (0x0004c968) popup_clock_analogue_window_cp02

0x578b,	// (0x0004c968) popup_clock_digital_window_cp01

0x531b,	// (0x0004c4f8) listscroll_help_pane

0x531b,	// (0x0004c4f8) phob_pre_status_pane

0x5793,	// (0x0004c970) grid_qdial_pane

0x5576,	// (0x0004c753) listscroll_mce_pane

0x5576,	// (0x0004c753) bg_notes_pane

0x579d,	// (0x0004c97a) list_notes_pane

0x57ab,	// (0x0004c988) scroll_pane_cp06

0x57b8,	// (0x0004c995) bg_calc_paper_pane

0x57d0,	// (0x0004c9ad) list_calc_pane

0x57ea,	// (0x0004c9c7) bg_calc_display_pane

0x57f6,	// (0x0004c9d3) calc_display_pane_t1

0x580b,	// (0x0004c9e8) calc_display_pane_t2

0x5820,	// (0x0004c9fd) calc_display_pane_t3

0x0002,

0xf0e6,	// (0x000562c3) calc_display_pane_t

0x5832,	// (0x0004ca0f) cell_calc_pane_ParamLimits

0x5832,	// (0x0004ca0f) cell_calc_pane

0x5859,	// (0x0004ca36) bg_calc_paper_pane_g1

0x5865,	// (0x0004ca42) bg_calc_paper_pane_g2

0x5871,	// (0x0004ca4e) bg_calc_paper_pane_g3

0x587d,	// (0x0004ca5a) bg_calc_paper_pane_g4

0x5889,	// (0x0004ca66) bg_calc_paper_pane_g5

0x5895,	// (0x0004ca72) bg_calc_paper_pane_g6

0x58a4,	// (0x0004ca81) bg_calc_paper_pane_g7

0x58b3,	// (0x0004ca90) bg_calc_paper_pane_g8

0x0007,

0xf0ed,	// (0x000562ca) bg_calc_paper_pane_g

0x58c2,	// (0x0004ca9f) calc_bg_paper_pane_g9

0x58d1,	// (0x0004caae) list_calc_item_pane_ParamLimits

0x58d1,	// (0x0004caae) list_calc_item_pane

0x58ea,	// (0x0004cac7) list_calc_item_pane_g1

0x58f7,	// (0x0004cad4) list_calc_item_pane_t1_ParamLimits

0x58f7,	// (0x0004cad4) list_calc_item_pane_t1

0x5909,	// (0x0004cae6) list_calc_item_pane_t2_ParamLimits

0x5909,	// (0x0004cae6) list_calc_item_pane_t2

0x0001,

0xf0fe,	// (0x000562db) list_calc_item_pane_t_ParamLimits

0xf0fe,	// (0x000562db) list_calc_item_pane_t

0x558e,	// (0x0004c76b) cell_calc_pane_g1

0x5937,	// (0x0004cb14) grid_highlight_pane_cp02

0x5959,	// (0x0004cb36) bg_calc_display_pane_g1

0x5962,	// (0x0004cb3f) bg_calc_display_pane_g2

0x596c,	// (0x0004cb49) bg_calc_display_pane_g3

0x0002,

0xf108,	// (0x000562e5) bg_calc_display_pane_g

0x5975,	// (0x0004cb52) cell_qdial_pane_ParamLimits

0x5975,	// (0x0004cb52) cell_qdial_pane

0x5987,	// (0x0004cb64) cell_qdial_pane_g1_ParamLimits

0x5987,	// (0x0004cb64) cell_qdial_pane_g1

0x5994,	// (0x0004cb71) cell_qdial_pane_g2_ParamLimits

0x5994,	// (0x0004cb71) cell_qdial_pane_g2

0x59a5,	// (0x0004cb82) cell_qdial_pane_g3_ParamLimits

0x59a5,	// (0x0004cb82) cell_qdial_pane_g3

0x0003,

0xf10f,	// (0x000562ec) cell_qdial_pane_g_ParamLimits

0xf10f,	// (0x000562ec) cell_qdial_pane_g

0x59be,	// (0x0004cb9b) cell_qdial_pane_t1_ParamLimits

0x59be,	// (0x0004cb9b) cell_qdial_pane_t1

0x59d6,	// (0x0004cbb3) cell_qdial_pane_t2_ParamLimits

0x59d6,	// (0x0004cbb3) cell_qdial_pane_t2

0x59e9,	// (0x0004cbc6) cell_qdial_pane_t3_ParamLimits

0x59e9,	// (0x0004cbc6) cell_qdial_pane_t3

0x0002,

0xf118,	// (0x000562f5) cell_qdial_pane_t_ParamLimits

0xf118,	// (0x000562f5) cell_qdial_pane_t

0x531b,	// (0x0004c4f8) grid_highlight_pane_cp04

0x59fc,	// (0x0004cbd9) thumbnail_qdial_pane_ParamLimits

0x59fc,	// (0x0004cbd9) thumbnail_qdial_pane

0x5a58,	// (0x0004cc35) list_help_pane

0x5a62,	// (0x0004cc3f) scroll_pane_cp02

0x5a6b,	// (0x0004cc48) help_list_pane_t1_ParamLimits

0x5a6b,	// (0x0004cc48) help_list_pane_t1

0x5a8a,	// (0x0004cc67) bg_notes_pane_g2

0x5a92,	// (0x0004cc6f) bg_notes_pane_g3

0x5a9a,	// (0x0004cc77) notes_bg_pane_g1

0x5aa2,	// (0x0004cc7f) notes_bg_pane_g4

0x5aaa,	// (0x0004cc87) notes_bg_pane_g5

0x5ab2,	// (0x0004cc8f) notes_bg_pane_g6

0x5aba,	// (0x0004cc97) notes_bg_pane_g7

0x5ac2,	// (0x0004cc9f) notes_bg_pane_g8

0x5aca,	// (0x0004cca7) notes_bg_pane_g9

0x0006,

0xf136,	// (0x00056313) notes_bg_pane_g

0x5ad2,	// (0x0004ccaf) list_notes_text_pane_ParamLimits

0x5ad2,	// (0x0004ccaf) list_notes_text_pane

0x5af6,	// (0x0004ccd3) list_notes_text_pane_g1

0x5aff,	// (0x0004ccdc) list_notes_text_pane_t1

0x5b1e,	// (0x0004ccfb) listscroll_cale_week_pane

0x5b4c,	// (0x0004cd29) bg_cale_heading_pane

0x5b64,	// (0x0004cd41) bg_cale_pane_cp01

0x5b81,	// (0x0004cd5e) cale_week_corner_pane

0x5b9b,	// (0x0004cd78) cale_week_day_heading_pane

0x5bb3,	// (0x0004cd90) cale_week_scroll_pane_g1

0x5bc6,	// (0x0004cda3) cale_week_scroll_pane_g2

0x5bd9,	// (0x0004cdb6) cale_week_scroll_pane_g3

0x5bec,	// (0x0004cdc9) cale_week_scroll_pane_g4

0x5bff,	// (0x0004cddc) cale_week_scroll_pane_g5

0x5c12,	// (0x0004cdef) cale_week_scroll_pane_g6

0x5c25,	// (0x0004ce02) cale_week_scroll_pane_g7

0x5c38,	// (0x0004ce15) cale_week_scroll_pane_g8

0x5c4b,	// (0x0004ce28) cale_week_scroll_pane_g9

0x5c5e,	// (0x0004ce3b) cale_week_scroll_pane_g10

0x5c71,	// (0x0004ce4e) cale_week_scroll_pane_g11

0x5c84,	// (0x0004ce61) cale_week_scroll_pane_g12

0x5c97,	// (0x0004ce74) cale_week_scroll_pane_g13

0x5caa,	// (0x0004ce87) cale_week_scroll_pane_g14

0x5cbd,	// (0x0004ce9a) cale_week_scroll_pane_g15

0x000f,

0xf145,	// (0x00056322) cale_week_scroll_pane_g

0x5ce3,	// (0x0004cec0) cale_week_time_pane

0x5cf6,	// (0x0004ced3) grid_cale_week_pane

0x5d1d,	// (0x0004cefa) scroll_pane_cp08

0x5d3a,	// (0x0004cf17) cell_cale_week_pane_ParamLimits

0x5d3a,	// (0x0004cf17) cell_cale_week_pane

0x5d88,	// (0x0004cf65) cale_week_day_heading_pane_t1

0x5dc3,	// (0x0004cfa0) cale_week_day_heading_pane_t2

0x5dfe,	// (0x0004cfdb) cale_week_day_heading_pane_t3

0x5e39,	// (0x0004d016) cale_week_day_heading_pane_t4

0x5e74,	// (0x0004d051) cale_week_day_heading_pane_t5

0x5eaf,	// (0x0004d08c) cale_week_day_heading_pane_t6

0x5eea,	// (0x0004d0c7) cale_week_day_heading_pane_t7

0x0006,

0xf166,	// (0x00056343) cale_week_day_heading_pane_t

0x5f25,	// (0x0004d102) bg_cale_side_pane

0x5f33,	// (0x0004d110) cale_week_time_pane_t1

0x5f6d,	// (0x0004d14a) cale_week_time_pane_t2

0x5fa7,	// (0x0004d184) cale_week_time_pane_t3

0x5fe1,	// (0x0004d1be) cale_week_time_pane_t4

0x601b,	// (0x0004d1f8) cale_week_time_pane_t5

0x6055,	// (0x0004d232) cale_week_time_pane_t6

0x608f,	// (0x0004d26c) cale_week_time_pane_t7

0x60c9,	// (0x0004d2a6) cale_week_time_pane_t8

0x0007,

0xf175,	// (0x00056352) cale_week_time_pane_t

0x6103,	// (0x0004d2e0) cell_cale_week_pane_g2

0x6127,	// (0x0004d304) cell_cale_week_pane_g3_ParamLimits

0x6127,	// (0x0004d304) cell_cale_week_pane_g3

0x613f,	// (0x0004d31c) grid_highlight_pane_cp07

0x6147,	// (0x0004d324) listscroll_gms_pane

0x6151,	// (0x0004d32e) grid_gms_pane

0x615a,	// (0x0004d337) listscroll_gms_pane_g1

0x6162,	// (0x0004d33f) listscroll_gms_pane_g2

0x0001,

0xf186,	// (0x00056363) listscroll_gms_pane_g

0x616a,	// (0x0004d347) scroll_pane_cp010

0x6173,	// (0x0004d350) cell_gms_pane_ParamLimits

0x6173,	// (0x0004d350) cell_gms_pane

0x6184,	// (0x0004d361) cell_gms_pane_g1

0x618c,	// (0x0004d369) cell_gms_pane_g2

0x5af6,	// (0x0004ccd3) cell_gms_pane_g3

0x6194,	// (0x0004d371) cell_gms_pane_g4

0x0003,

0xf18b,	// (0x00056368) cell_gms_pane_g

0x619d,	// (0x0004d37a) grid_highlight_pane_cp09

0x7e5b,	// (0x0004f038) phob_pre_status_pane_g1

0x7e63,	// (0x0004f040) phob_pre_status_pane_g2

0x7e6b,	// (0x0004f048) phob_pre_status_pane_g3

0x7e73,	// (0x0004f050) phob_pre_status_pane_g4

0x0004,

0xf579,	// (0x00056756) phob_pre_status_pane_g

0x7e83,	// (0x0004f060) phob_pre_status_pane_t1

0x7e91,	// (0x0004f06e) phob_pre_status_pane_t2

0x7e9f,	// (0x0004f07c) phob_pre_status_pane_t3

0x0002,

0xf584,	// (0x00056761) phob_pre_status_pane_t

0xd29d,	// (0x0005447a) bg_list_pane_cp05

0x61ad,	// (0x0004d38a) grid_vorec_pane

0xd2a5,	// (0x00054482) vorec_t1

0xd2b3,	// (0x00054490) vorec_t2

0xd2c1,	// (0x0005449e) vorec_t3

0x61b5,	// (0x0004d392) vorec_t4

0xc92b,	// (0x00053b08) vorec_t5

0xc939,	// (0x00053b16) vorec_t6

0x0004,

0xf194,	// (0x00056371) vorec_t

0xc947,	// (0x00053b24) wait_bar_pane_cp01

0xd2dd,	// (0x000544ba) cell_vorec_pane_ParamLimits

0xd2dd,	// (0x000544ba) cell_vorec_pane

0x61c3,	// (0x0004d3a0) cell_vorec_pane_g1

0x531b,	// (0x0004c4f8) grid_highlight_pane_cp05

0x5635,	// (0x0004c812) cams_zoom_pane

0x5635,	// (0x0004c812) image_vga_pane

0x5627,	// (0x0004c804) main_camera_pane_g1

0x5627,	// (0x0004c804) main_camera_pane_g2

0x5627,	// (0x0004c804) main_camera_pane_g3

0x5627,	// (0x0004c804) main_camera_pane_g4

0x5627,	// (0x0004c804) main_camera_pane_g5

0x5627,	// (0x0004c804) main_camera_pane_g6

0x5627,	// (0x0004c804) main_camera_pane_g7

0x0007,

0xf19f,	// (0x0005637c) main_camera_pane_g

0xd2f0,	// (0x000544cd) main_camera_pane_t1

0xd2f0,	// (0x000544cd) main_camera_pane_t2

0x0001,

0xf1b0,	// (0x0005638d) main_camera_pane_t

0x61cd,	// (0x0004d3aa) cams_zoom_pane_cp_ParamLimits

0x61cd,	// (0x0004d3aa) cams_zoom_pane_cp

0x61fb,	// (0x0004d3d8) image_cif_pane_ParamLimits

0x61fb,	// (0x0004d3d8) image_cif_pane

0x4bf8,	// (0x0004bdd5) image_subqcif_pane

0x6209,	// (0x0004d3e6) main_video_pane_g1_ParamLimits

0x6209,	// (0x0004d3e6) main_video_pane_g1

0x6231,	// (0x0004d40e) main_video_pane_g2_ParamLimits

0x6231,	// (0x0004d40e) main_video_pane_g2

0x6264,	// (0x0004d441) main_video_pane_g3_ParamLimits

0x6264,	// (0x0004d441) main_video_pane_g3

0x6264,	// (0x0004d441) main_video_pane_g4_ParamLimits

0x6264,	// (0x0004d441) main_video_pane_g4

0x6292,	// (0x0004d46f) main_video_pane_g5_ParamLimits

0x6292,	// (0x0004d46f) main_video_pane_g5

0xd304,	// (0x000544e1) main_video_pane_g6_ParamLimits

0xd304,	// (0x000544e1) main_video_pane_g6

0x0006,

0xf1b5,	// (0x00056392) main_video_pane_g_ParamLimits

0xf1b5,	// (0x00056392) main_video_pane_g

0x62ae,	// (0x0004d48b) main_video_pane_t1_ParamLimits

0x62ae,	// (0x0004d48b) main_video_pane_t1

0xd31e,	// (0x000544fb) cams_zoom_pane_g1

0xd31e,	// (0x000544fb) cams_zoom_pane_g2

0xd31e,	// (0x000544fb) cams_zoom_pane_g3

0xd31e,	// (0x000544fb) cams_zoom_pane_g4

0x0003,

0xf1c4,	// (0x000563a1) cams_zoom_pane_g

0x62f4,	// (0x0004d4d1) grid_cams_pane

0x6300,	// (0x0004d4dd) linegrid_cams_pane

0x630c,	// (0x0004d4e9) cell_cams_pane_ParamLimits

0x630c,	// (0x0004d4e9) cell_cams_pane

0xd328,	// (0x00054505) cams_burst_image_pane

0xd330,	// (0x0005450d) cell_cams_pane_g1

0x531b,	// (0x0004c4f8) grid_highlight_pane_cp03

0x558e,	// (0x0004c76b) mp_bg_pane_g1

0x4bf8,	// (0x0004bdd5) bg_list_pane_cp03

0x4bf8,	// (0x0004bdd5) bg_mp_pane

0x4bf8,	// (0x0004bdd5) grid_mp_pane

0xd31e,	// (0x000544fb) media_player_g1

0xef8e,	// (0x0005616b) media_player_t1

0xef8e,	// (0x0005616b) media_player_t2

0xef8e,	// (0x0005616b) media_player_t3

0xef8e,	// (0x0005616b) media_player_t4

0xef8e,	// (0x0005616b) media_player_t5

0xef8e,	// (0x0005616b) media_player_t6

0xef8e,	// (0x0005616b) media_player_t7

0x0006,

0xf563,	// (0x00056740) media_player_t

0x4bf8,	// (0x0004bdd5) wait_bar_pane_cp02

0xf548,	// (0x00056725) main_usb_pane_t

0xda81,	// (0x00054c5e) cell_mp_pane

0x558e,	// (0x0004c76b) cell_mp_pane_g1

0x531b,	// (0x0004c4f8) grid_highlight_pane_cp06

0xd338,	// (0x00054515) grid_skin_colour_pane

0xd340,	// (0x0005451d) list_highlight_pane_cp03

0x631f,	// (0x0004d4fc) skin_g1

0xd348,	// (0x00054525) skin_t1

0xd357,	// (0x00054534) skin_t2

0x0001,

0xf1f2,	// (0x000563cf) skin_t

0x6327,	// (0x0004d504) cell_skin_colour_pane_ParamLimits

0x6327,	// (0x0004d504) cell_skin_colour_pane

0xd365,	// (0x00054542) cell_skin_colour_pane_g1

0x639d,	// (0x0004d57a) call_video_g1_ParamLimits

0x639d,	// (0x0004d57a) call_video_g1

0x63a9,	// (0x0004d586) call_video_g2_ParamLimits

0x63a9,	// (0x0004d586) call_video_g2

0x0001,

0xf1f7,	// (0x000563d4) call_video_g_ParamLimits

0xf1f7,	// (0x000563d4) call_video_g

0x63f9,	// (0x0004d5d6) call_video_uplink_pane_cp1_ParamLimits

0x63f9,	// (0x0004d5d6) call_video_uplink_pane_cp1

0xd377,	// (0x00054554) call_video_uplink_pane_cp2

0x64b5,	// (0x0004d692) video_down_crop_pane_ParamLimits

0x64b5,	// (0x0004d692) video_down_crop_pane

0x657f,	// (0x0004d75c) video_down_pane_ParamLimits

0x657f,	// (0x0004d75c) video_down_pane

0xd37f,	// (0x0005455c) video_down_subqcif_pane_ParamLimits

0xd37f,	// (0x0005455c) video_down_subqcif_pane

0xd397,	// (0x00054574) video_down_subqcif_pane_cp_ParamLimits

0xd397,	// (0x00054574) video_down_subqcif_pane_cp

0xd3bb,	// (0x00054598) im_reading_pane_ParamLimits

0xd3bb,	// (0x00054598) im_reading_pane

0x664b,	// (0x0004d828) im_writing_pane_ParamLimits

0x664b,	// (0x0004d828) im_writing_pane

0x6661,	// (0x0004d83e) im_reading_pane_t1

0xd3d5,	// (0x000545b2) list_im_pane

0xd3e6,	// (0x000545c3) scroll_pane_cp07

0x6699,	// (0x0004d876) im_writing_pane_t1_ParamLimits

0x6699,	// (0x0004d876) im_writing_pane_t1

0xd3ff,	// (0x000545dc) im_writing_pane_t2_ParamLimits

0xd3ff,	// (0x000545dc) im_writing_pane_t2

0x0001,

0xf201,	// (0x000563de) im_writing_pane_t_ParamLimits

0xf201,	// (0x000563de) im_writing_pane_t

0x531b,	// (0x0004c4f8) input_focus_pane_cp04

0x531b,	// (0x0004c4f8) input_focus_pane_cp05

0x66ae,	// (0x0004d88b) list_im_single_pane_ParamLimits

0x66ae,	// (0x0004d88b) list_im_single_pane

0xd41c,	// (0x000545f9) list_single_im_pane_t1

0xd29d,	// (0x0005447a) blid_accuracy_pane

0xd29d,	// (0x0005447a) blid_compass_pane

0xef9e,	// (0x0005617b) main_location_t1

0xef9e,	// (0x0005617b) main_location_t2

0xef9e,	// (0x0005617b) main_location_t3

0x0002,

0xf572,	// (0x0005674f) main_location_t

0x531b,	// (0x0004c4f8) aid_levels_location

0x558e,	// (0x0004c76b) blid_accuracy_pane_g1

0x558e,	// (0x0004c76b) blid_accuracy_pane_g2

0x0001,

0xf255,	// (0x00056432) blid_accuracy_pane_g

0xd456,	// (0x00054633) wml_content_pane

0xd494,	// (0x00054671) wml_button_pane_ParamLimits

0xd494,	// (0x00054671) wml_button_pane

0x66c6,	// (0x0004d8a3) wml_list_single_large_pane_ParamLimits

0x66c6,	// (0x0004d8a3) wml_list_single_large_pane

0x66dd,	// (0x0004d8ba) wml_list_single_medium_pane_ParamLimits

0x66dd,	// (0x0004d8ba) wml_list_single_medium_pane

0x66f5,	// (0x0004d8d2) wml_list_single_small_pane_ParamLimits

0x66f5,	// (0x0004d8d2) wml_list_single_small_pane

0xd4a8,	// (0x00054685) wml_selection_box_pane_ParamLimits

0xd4a8,	// (0x00054685) wml_selection_box_pane

0xd4bb,	// (0x00054698) wml_list_single_pane_t1

0xd4ca,	// (0x000546a7) wml_list_single_medium_pane_t1

0xd4d9,	// (0x000546b6) wml_list_single_large_pane_t1

0xd4e8,	// (0x000546c5) input_focus_pane_cp02_ParamLimits

0xd4e8,	// (0x000546c5) input_focus_pane_cp02

0xd4fb,	// (0x000546d8) wml_selection_box_pane_g1

0xd504,	// (0x000546e1) wml_selection_box_pane_t1_ParamLimits

0xd504,	// (0x000546e1) wml_selection_box_pane_t1

0x5576,	// (0x0004c753) bg_wml_button_pane_ParamLimits

0x5576,	// (0x0004c753) bg_wml_button_pane

0xd51c,	// (0x000546f9) wml_button_pane_g1

0xd524,	// (0x00054701) wml_button_pane_t1

0xd51c,	// (0x000546f9) wml_button_bg_pane_g1

0xd534,	// (0x00054711) wml_button_bg_pane_g2

0xd53c,	// (0x00054719) wml_button_bg_pane_g3

0xd544,	// (0x00054721) wml_button_bg_pane_g4

0xd54c,	// (0x00054729) wml_button_bg_pane_g5

0xd554,	// (0x00054731) wml_button_bg_pane_g6

0xd55c,	// (0x00054739) wml_button_bg_pane_g7

0xd564,	// (0x00054741) wml_button_bg_pane_g8

0xd56c,	// (0x00054749) wml_button_bg_pane_g9

0x0008,

0xf206,	// (0x000563e3) wml_button_bg_pane_g

0x6710,	// (0x0004d8ed) bg_list_pane_cp02

0xd574,	// (0x00054751) mce_header_pane_ParamLimits

0xd574,	// (0x00054751) mce_header_pane

0xd588,	// (0x00054765) mce_icon_pane

0xd588,	// (0x00054765) mce_image_pane

0xd591,	// (0x0005476e) mce_text_pane_ParamLimits

0xd591,	// (0x0005476e) mce_text_pane

0x6719,	// (0x0004d8f6) scroll_pane_cp03

0x6719,	// (0x0004d8f6) scroll_pane_cp04

0xd5a5,	// (0x00054782) scroll_pane_cp05_ParamLimits

0xd5a5,	// (0x00054782) scroll_pane_cp05

0x6721,	// (0x0004d8fe) mce_header_field_pane_ParamLimits

0x6721,	// (0x0004d8fe) mce_header_field_pane

0x6741,	// (0x0004d91e) mce_header_field_pane_2_ParamLimits

0x6741,	// (0x0004d91e) mce_header_field_pane_2

0x6757,	// (0x0004d934) mce_header_field_pane_3

0x675f,	// (0x0004d93c) list_single_mce_message_pane_ParamLimits

0x675f,	// (0x0004d93c) list_single_mce_message_pane

0x6776,	// (0x0004d953) list_single_mce_smart_pane_ParamLimits

0x6776,	// (0x0004d953) list_single_mce_smart_pane

0xd5b1,	// (0x0005478e) input_focus_pane_cp03

0xd5ba,	// (0x00054797) list_header_data_pane

0x6798,	// (0x0004d975) mce_header_field_pane_t1

0x67a6,	// (0x0004d983) list_single_mce_header_pane_ParamLimits

0x67a6,	// (0x0004d983) list_single_mce_header_pane

0xd5c2,	// (0x0005479f) list_single_mce_header_pane_t1

0xd5d1,	// (0x000547ae) list_single_mce_message_pane_g1

0xd5da,	// (0x000547b7) list_single_mce_message_pane_t1

0x67e4,	// (0x0004d9c1) bg_cale_heading_pane_cp01_ParamLimits

0x67e4,	// (0x0004d9c1) bg_cale_heading_pane_cp01

0xd5e9,	// (0x000547c6) bg_cale_pane_cp02_ParamLimits

0xd5e9,	// (0x000547c6) bg_cale_pane_cp02

0x6813,	// (0x0004d9f0) cale_month_corner_pane

0x682d,	// (0x0004da0a) cale_month_day_heading_pane_ParamLimits

0x682d,	// (0x0004da0a) cale_month_day_heading_pane

0x685c,	// (0x0004da39) cale_month_pane_g1_ParamLimits

0x685c,	// (0x0004da39) cale_month_pane_g1

0x6880,	// (0x0004da5d) cale_month_pane_g2_ParamLimits

0x6880,	// (0x0004da5d) cale_month_pane_g2

0x689f,	// (0x0004da7c) cale_month_pane_g3_ParamLimits

0x689f,	// (0x0004da7c) cale_month_pane_g3

0x68db,	// (0x0004dab8) cale_month_pane_g4_ParamLimits

0x68db,	// (0x0004dab8) cale_month_pane_g4

0x6917,	// (0x0004daf4) cale_month_pane_g5_ParamLimits

0x6917,	// (0x0004daf4) cale_month_pane_g5

0x6953,	// (0x0004db30) cale_month_pane_g6_ParamLimits

0x6953,	// (0x0004db30) cale_month_pane_g6

0x698f,	// (0x0004db6c) cale_month_pane_g7_ParamLimits

0x698f,	// (0x0004db6c) cale_month_pane_g7

0x69cb,	// (0x0004dba8) cale_month_pane_g8_ParamLimits

0x69cb,	// (0x0004dba8) cale_month_pane_g8

0x6a07,	// (0x0004dbe4) cale_month_pane_g9_ParamLimits

0x6a07,	// (0x0004dbe4) cale_month_pane_g9

0x6a41,	// (0x0004dc1e) cale_month_pane_g10_ParamLimits

0x6a41,	// (0x0004dc1e) cale_month_pane_g10

0x6a7b,	// (0x0004dc58) cale_month_pane_g11_ParamLimits

0x6a7b,	// (0x0004dc58) cale_month_pane_g11

0x6ab5,	// (0x0004dc92) cale_month_pane_g12_ParamLimits

0x6ab5,	// (0x0004dc92) cale_month_pane_g12

0x6aef,	// (0x0004dccc) cale_month_pane_g13_ParamLimits

0x6aef,	// (0x0004dccc) cale_month_pane_g13

0x000c,

0xf219,	// (0x000563f6) cale_month_pane_g_ParamLimits

0xf219,	// (0x000563f6) cale_month_pane_g

0x6b29,	// (0x0004dd06) cale_month_week_pane

0x6b3c,	// (0x0004dd19) grid_cale_month_pane_ParamLimits

0x6b3c,	// (0x0004dd19) grid_cale_month_pane

0x6b62,	// (0x0004dd3f) cale_month_day_heading_pane_t1

0x6be8,	// (0x0004ddc5) cale_month_day_heading_pane_t2

0x6c79,	// (0x0004de56) cale_month_day_heading_pane_t3

0x6d0a,	// (0x0004dee7) cale_month_day_heading_pane_t4

0x6d9b,	// (0x0004df78) cale_month_day_heading_pane_t5

0x6e2c,	// (0x0004e009) cale_month_day_heading_pane_t6

0x6ebd,	// (0x0004e09a) cale_month_day_heading_pane_t7

0x0006,

0xf234,	// (0x00056411) cale_month_day_heading_pane_t

0x5f25,	// (0x0004d102) bg_cale_side_pane_cp01

0x6f4e,	// (0x0004e12b) cale_month_week_pane_t1

0x6f87,	// (0x0004e164) cale_month_week_pane_t2

0x6fc0,	// (0x0004e19d) cale_month_week_pane_t3

0x6ff9,	// (0x0004e1d6) cale_month_week_pane_t4

0x7032,	// (0x0004e20f) cale_month_week_pane_t5

0x706b,	// (0x0004e248) cale_month_week_pane_t6

0x0005,

0xf243,	// (0x00056420) cale_month_week_pane_t

0x70a4,	// (0x0004e281) cell_cale_month_pane_ParamLimits

0x70a4,	// (0x0004e281) cell_cale_month_pane

0x7192,	// (0x0004e36f) cell_cale_month_pane_g1

0x719e,	// (0x0004e37b) cell_cale_month_pane_t1_ParamLimits

0x719e,	// (0x0004e37b) cell_cale_month_pane_t1

0x613f,	// (0x0004d31c) grid_highlight_pane_cp08

0x558e,	// (0x0004c76b) main_smil_g1

0x71be,	// (0x0004e39b) smil_status_pane

0xd628,	// (0x00054805) smil_text_pane

0xee66,	// (0x00056043) bg_popup_call3_rect_pane_g8

0xee6e,	// (0x0005604b) bg_popup_call3_rect_pane_g9

0x0008,

0xf4f3,	// (0x000566d0) bg_popup_call3_rect_pane_g

0x0ba8,	// (0x00047d85) smil_status_volume_pane_g1

0x71cf,	// (0x0004e3ac) smil_status_pane_t1

0x8175,	// (0x0004f352) volume_smil_pane

0xd632,	// (0x0005480f) list_smil_text_pane

0x71e6,	// (0x0004e3c3) scroll_pane_cp011

0x71ef,	// (0x0004e3cc) smil_text_list_pane_t1_ParamLimits

0x71ef,	// (0x0004e3cc) smil_text_list_pane_t1

0x722e,	// (0x0004e40b) aid_volume_smil_ParamLimits

0x722e,	// (0x0004e40b) aid_volume_smil

0x558e,	// (0x0004c76b) smil_volume_pane_g1

0x558e,	// (0x0004c76b) smil_volume_pane_g2

0x0001,

0xf255,	// (0x00056432) smil_volume_pane_g

0x5b1e,	// (0x0004ccfb) listscroll_cale_day_pane

0xd63c,	// (0x00054819) bg_cale_pane

0xd654,	// (0x00054831) list_cale_pane

0xd677,	// (0x00054854) scroll_pane_cp09

0xd688,	// (0x00054865) cale_bg_pane_g1

0xd690,	// (0x0005486d) cale_bg_pane_g2

0xd698,	// (0x00054875) cale_bg_pane_g3

0xd6a0,	// (0x0005487d) cale_bg_pane_g4

0xd6a8,	// (0x00054885) cale_bg_pane_g5

0xd6b0,	// (0x0005488d) cale_bg_pane_g6

0xd6b8,	// (0x00054895) cale_bg_pane_g7

0xd6c0,	// (0x0005489d) cale_bg_pane_g8

0xd6c8,	// (0x000548a5) cale_bg_pane_g9

0x0008,

0xf25a,	// (0x00056437) cale_bg_pane_g

0x7258,	// (0x0004e435) list_cale_time_pane_ParamLimits

0x7258,	// (0x0004e435) list_cale_time_pane

0xd6d0,	// (0x000548ad) list_cale_time_pane_g1_ParamLimits

0xd6d0,	// (0x000548ad) list_cale_time_pane_g1

0xd6dc,	// (0x000548b9) list_cale_time_pane_g2_ParamLimits

0xd6dc,	// (0x000548b9) list_cale_time_pane_g2

0x726c,	// (0x0004e449) list_cale_time_pane_g3_ParamLimits

0x726c,	// (0x0004e449) list_cale_time_pane_g3

0x7278,	// (0x0004e455) list_cale_time_pane_g4_ParamLimits

0x7278,	// (0x0004e455) list_cale_time_pane_g4

0x7284,	// (0x0004e461) list_cale_time_pane_g5_ParamLimits

0x7284,	// (0x0004e461) list_cale_time_pane_g5

0x0005,

0xf26d,	// (0x0005644a) list_cale_time_pane_g_ParamLimits

0xf26d,	// (0x0005644a) list_cale_time_pane_g

0xd6f6,	// (0x000548d3) list_cale_time_pane_t1_ParamLimits

0xd6f6,	// (0x000548d3) list_cale_time_pane_t1

0xd71e,	// (0x000548fb) list_cale_time_pane_t2_ParamLimits

0xd71e,	// (0x000548fb) list_cale_time_pane_t2

0x751e,	// (0x0004e6fb) aid_blid_cardinal_pane

0x755c,	// (0x0004e739) compass_pane_t4

0xd746,	// (0x00054923) list_cale_time_pane_t4_ParamLimits

0xd746,	// (0x00054923) list_cale_time_pane_t4

0x756a,	// (0x0004e747) compass_pane_t5

0x7578,	// (0x0004e755) compass_pane_t6

0x7586,	// (0x0004e763) compass_pane_t7

0xdb9e,	// (0x00054d7b) navi_pane_cc_t1

0xdd43,	// (0x00054f20) aid_phob_thumbnail_center_pane

0x79a0,	// (0x0004eb7d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf27a,	// (0x00056457) list_cale_time_pane_t_ParamLimits

0xf27a,	// (0x00056457) list_cale_time_pane_t

0x4f50,	// (0x0004c12d) bg_popup_window_pane_cp02_ParamLimits

0x4f50,	// (0x0004c12d) bg_popup_window_pane_cp02

0xd76e,	// (0x0005494b) heading_pane_cp01_ParamLimits

0xd76e,	// (0x0005494b) heading_pane_cp01

0xd77a,	// (0x00054957) loc_req_pane_ParamLimits

0xd77a,	// (0x00054957) loc_req_pane

0xd78a,	// (0x00054967) loc_type_pane_ParamLimits

0xd78a,	// (0x00054967) loc_type_pane

0xd79c,	// (0x00054979) loc_type_pane_t1_ParamLimits

0xd79c,	// (0x00054979) loc_type_pane_t1

0xd7ae,	// (0x0005498b) loc_type_pane_t2_ParamLimits

0xd7ae,	// (0x0005498b) loc_type_pane_t2

0xd7c0,	// (0x0005499d) loc_type_pane_t3_ParamLimits

0xd7c0,	// (0x0005499d) loc_type_pane_t3

0x0002,

0xf281,	// (0x0005645e) loc_type_pane_t_ParamLimits

0xf281,	// (0x0005645e) loc_type_pane_t

0xd7d2,	// (0x000549af) list_loc_req_pane

0xd7dc,	// (0x000549b9) scroll_pane_cp012

0x7290,	// (0x0004e46d) list_single_loc_request_popup_menu_pane_ParamLimits

0x7290,	// (0x0004e46d) list_single_loc_request_popup_menu_pane

0xd7e5,	// (0x000549c2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd7e5,	// (0x000549c2) list_single_loc_request_popup_menu_pane_g1

0xd7f1,	// (0x000549ce) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd7f1,	// (0x000549ce) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf288,	// (0x00056465) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf288,	// (0x00056465) list_single_loc_request_popup_menu_pane_g

0xd7fd,	// (0x000549da) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd7fd,	// (0x000549da) list_single_loc_request_popup_menu_pane_t1

0x72a2,	// (0x0004e47f) bg_popup_window_pane_cp03_ParamLimits

0x72a2,	// (0x0004e47f) bg_popup_window_pane_cp03

0x72b0,	// (0x0004e48d) heading_loc_req_pane_ParamLimits

0x72b0,	// (0x0004e48d) heading_loc_req_pane

0x72bc,	// (0x0004e499) popup_dyc_status_message_window_g1_ParamLimits

0x72bc,	// (0x0004e499) popup_dyc_status_message_window_g1

0x72c8,	// (0x0004e4a5) popup_dyc_status_message_window_t1_ParamLimits

0x72c8,	// (0x0004e4a5) popup_dyc_status_message_window_t1

0x72da,	// (0x0004e4b7) popup_dyc_status_message_window_t2_ParamLimits

0x72da,	// (0x0004e4b7) popup_dyc_status_message_window_t2

0x72ec,	// (0x0004e4c9) popup_dyc_status_message_window_t3_ParamLimits

0x72ec,	// (0x0004e4c9) popup_dyc_status_message_window_t3

0x0002,

0xf28d,	// (0x0005646a) popup_dyc_status_message_window_t_ParamLimits

0xf28d,	// (0x0005646a) popup_dyc_status_message_window_t

0x531b,	// (0x0004c4f8) bg_heading_pane_cp01

0xd813,	// (0x000549f0) heading_loc_req_pane_g1

0xd81b,	// (0x000549f8) heading_loc_req_pane_g2

0xd823,	// (0x00054a00) heading_loc_req_pane_g3

0x0002,

0xf294,	// (0x00056471) heading_loc_req_pane_g

0xd82b,	// (0x00054a08) heading_loc_req_pane_t1

0xd83a,	// (0x00054a17) bg_popup_sub_pane_cp01_ParamLimits

0xd83a,	// (0x00054a17) bg_popup_sub_pane_cp01

0xd848,	// (0x00054a25) popup_cale_events_window_g1_ParamLimits

0xd848,	// (0x00054a25) popup_cale_events_window_g1

0xd868,	// (0x00054a45) popup_cale_events_window_g2_ParamLimits

0xd868,	// (0x00054a45) popup_cale_events_window_g2

0x0001,

0xf2c8,	// (0x000564a5) popup_cale_events_window_g_ParamLimits

0xf2c8,	// (0x000564a5) popup_cale_events_window_g

0xd888,	// (0x00054a65) popup_cale_events_window_t1_ParamLimits

0xd888,	// (0x00054a65) popup_cale_events_window_t1

0xd89a,	// (0x00054a77) popup_cale_events_window_t2_ParamLimits

0xd89a,	// (0x00054a77) popup_cale_events_window_t2

0xd8d8,	// (0x00054ab5) popup_cale_events_window_t3_ParamLimits

0xd8d8,	// (0x00054ab5) popup_cale_events_window_t3

0xd912,	// (0x00054aef) popup_cale_events_window_t4_ParamLimits

0xd912,	// (0x00054aef) popup_cale_events_window_t4

0x0003,

0xf2cd,	// (0x000564aa) popup_cale_events_window_t_ParamLimits

0xf2cd,	// (0x000564aa) popup_cale_events_window_t

0x7318,	// (0x0004e4f5) call_type_pane

0xd948,	// (0x00054b25) popup_call_status_window_g1

0x7324,	// (0x0004e501) popup_call_status_window_g2

0x7330,	// (0x0004e50d) popup_call_status_window_g3

0x0002,

0xf2d6,	// (0x000564b3) popup_call_status_window_g

0xd956,	// (0x00054b33) call_type_pane_g1

0xd95f,	// (0x00054b3c) call_type_pane_g2

0x0001,

0xf2dd,	// (0x000564ba) call_type_pane_g

0x531b,	// (0x0004c4f8) bg_popup_sub_pane_cp02

0xd968,	// (0x00054b45) listscroll_popup_wml_pane

0xd970,	// (0x00054b4d) list_wml_pane

0xd97a,	// (0x00054b57) scroll_pane_cp013

0x733c,	// (0x0004e519) list_single_graphic_popup_wml_pane_ParamLimits

0x733c,	// (0x0004e519) list_single_graphic_popup_wml_pane

0x558e,	// (0x0004c76b) list_single_graphic_popup_wml_pane_g1

0xd983,	// (0x00054b60) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2e2,	// (0x000564bf) list_single_graphic_popup_wml_pane_g

0xd98b,	// (0x00054b68) list_single_graphic_popup_wml_pane_t1

0xd9a1,	// (0x00054b7e) aid_call_pane

0x556e,	// (0x0004c74b) popup_clock_analogue_window_g1

0x556e,	// (0x0004c74b) popup_clock_analogue_window_g2

0x7350,	// (0x0004e52d) popup_clock_analogue_window_g3

0x7350,	// (0x0004e52d) popup_clock_analogue_window_g4

0x558e,	// (0x0004c76b) popup_clock_analogue_window_g5

0x0004,

0xf2e7,	// (0x000564c4) popup_clock_analogue_window_g

0x7358,	// (0x0004e535) popup_clock_analogue_window_t1

0x7366,	// (0x0004e543) clock_digital_number_pane_ParamLimits

0x7366,	// (0x0004e543) clock_digital_number_pane

0x7372,	// (0x0004e54f) clock_digital_number_pane_cp02_ParamLimits

0x7372,	// (0x0004e54f) clock_digital_number_pane_cp02

0x737e,	// (0x0004e55b) clock_digital_number_pane_cp03_ParamLimits

0x737e,	// (0x0004e55b) clock_digital_number_pane_cp03

0x738a,	// (0x0004e567) clock_digital_number_pane_cp04_ParamLimits

0x738a,	// (0x0004e567) clock_digital_number_pane_cp04

0x7396,	// (0x0004e573) clock_digital_separator_pane_ParamLimits

0x7396,	// (0x0004e573) clock_digital_separator_pane

0x73a2,	// (0x0004e57f) popup_clock_digital_window_t1

0x558e,	// (0x0004c76b) clock_digital_number_pane_g1

0x558e,	// (0x0004c76b) clock_digital_number_pane_g2

0x0001,

0xf255,	// (0x00056432) clock_digital_number_pane_g

0x558e,	// (0x0004c76b) clock_digital_separator_pane_g1

0x558e,	// (0x0004c76b) clock_digital_separator_pane_g2

0x0001,

0xf255,	// (0x00056432) clock_digital_separator_pane_g

0x531b,	// (0x0004c4f8) bg_popup_window_pane_cp04

0xd9a9,	// (0x00054b86) heading_pane_cp03

0xd29d,	// (0x0005447a) listscroll_popup_gms_pane

0x531b,	// (0x0004c4f8) grid_large_graphic_popup_pane

0xd9b2,	// (0x00054b8f) listscroll_popup_gms_pane_g1

0xd9bb,	// (0x00054b98) listscroll_popup_gms_pane_g2

0x0001,

0xf2f2,	// (0x000564cf) listscroll_popup_gms_pane_g

0xd9c4,	// (0x00054ba1) scroll_pane_cp014

0x5635,	// (0x0004c812) cell_large_graphic_popup_pane_ParamLimits

0x5635,	// (0x0004c812) cell_large_graphic_popup_pane

0x5619,	// (0x0004c7f6) cell_large_graphic_popup_pane_g1_ParamLimits

0x5619,	// (0x0004c7f6) cell_large_graphic_popup_pane_g1

0xd9cc,	// (0x00054ba9) cell_large_graphic_popup_pane_g2_ParamLimits

0xd9cc,	// (0x00054ba9) cell_large_graphic_popup_pane_g2

0xd9da,	// (0x00054bb7) cell_large_graphic_popup_pane_g3_ParamLimits

0xd9da,	// (0x00054bb7) cell_large_graphic_popup_pane_g3

0xd9e8,	// (0x00054bc5) cell_large_graphic_popup_pane_g4_ParamLimits

0xd9e8,	// (0x00054bc5) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f7,	// (0x000564d4) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f7,	// (0x000564d4) cell_large_graphic_popup_pane_g

0x531b,	// (0x0004c4f8) grid_highlight_pane_cp010

0x558e,	// (0x0004c76b) bg_popup_call_pane_g1

0xd9f9,	// (0x00054bd6) list_single_graphic_popup_conf_pane_ParamLimits

0xd9f9,	// (0x00054bd6) list_single_graphic_popup_conf_pane

0xda0c,	// (0x00054be9) list_highlight_pane_cp01

0xda15,	// (0x00054bf2) list_single_graphic_popup_conf_pane_g1

0xda1d,	// (0x00054bfa) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf300,	// (0x000564dd) list_single_graphic_popup_conf_pane_g

0xda25,	// (0x00054c02) list_single_graphic_popup_conf_pane_t1

0xda33,	// (0x00054c10) linegrid_cams_pane_g1

0x73bf,	// (0x0004e59c) linegrid_cams_pane_g2

0x5af6,	// (0x0004ccd3) linegrid_cams_pane_g3

0xda3c,	// (0x00054c19) linegrid_cams_pane_g4

0x73c8,	// (0x0004e5a5) linegrid_cams_pane_g5

0x73d1,	// (0x0004e5ae) linegrid_cams_pane_g6

0x6194,	// (0x0004d371) linegrid_cams_pane_g7

0x0006,

0xf305,	// (0x000564e2) linegrid_cams_pane_g

0xda45,	// (0x00054c22) popup_clock_analogue_window

0xda45,	// (0x00054c22) popup_clock_digital_window

0x531b,	// (0x0004c4f8) popup_phob_thumbnail_window

0x558e,	// (0x0004c76b) call_video_uplink_pane_g1

0xda4e,	// (0x00054c2b) call_video_uplink_pane_g2

0x0001,

0xf314,	// (0x000564f1) call_video_uplink_pane_g

0x613f,	// (0x0004d31c) video_uplink_pane

0xda56,	// (0x00054c33) mce_image_pane_g1

0x73da,	// (0x0004e5b7) mce_image_pane_g2

0x73e2,	// (0x0004e5bf) mce_image_pane_g3

0x73ea,	// (0x0004e5c7) mce_image_pane_g4

0x73f2,	// (0x0004e5cf) mce_image_pane_g5

0x0004,

0xf319,	// (0x000564f6) mce_image_pane_g

0xda60,	// (0x00054c3d) control_top_pane_stacon_cp01_ParamLimits

0xda60,	// (0x00054c3d) control_top_pane_stacon_cp01

0xda70,	// (0x00054c4d) uni_indicator_pane_stacon_cp01_ParamLimits

0xda70,	// (0x00054c4d) uni_indicator_pane_stacon_cp01

0xda81,	// (0x00054c5e) bg_popup_sub_pane_cp03

0xda8b,	// (0x00054c68) chi_dic_find_pane

0x73fa,	// (0x0004e5d7) listscroll_chi_dic_pane

0xda93,	// (0x00054c70) main_pane_chidic_g1

0xda9b,	// (0x00054c78) chi_dic_find_pane_t1

0xdaa9,	// (0x00054c86) find_chidic_pane

0xdab2,	// (0x00054c8f) chi_dic_list_pane_ParamLimits

0xdab2,	// (0x00054c8f) chi_dic_list_pane

0xd9c4,	// (0x00054ba1) scroll_pane_cp020

0xdac3,	// (0x00054ca0) find_chidic_pane_t1

0x531b,	// (0x0004c4f8) input_focus_pane_cp06

0x740c,	// (0x0004e5e9) list_chi_dic_pane_ParamLimits

0x740c,	// (0x0004e5e9) list_chi_dic_pane

0x741f,	// (0x0004e5fc) list_chi_dic_pane_t1_ParamLimits

0x741f,	// (0x0004e5fc) list_chi_dic_pane_t1

0x531b,	// (0x0004c4f8) list_highlight_pane_cp020

0xdad2,	// (0x00054caf) bg_cale_heading_pane_g1

0x7432,	// (0x0004e60f) bg_cale_heading_pane_g2

0x743a,	// (0x0004e617) bg_cale_heading_pane_g3

0x7442,	// (0x0004e61f) bg_cale_heading_pane_g4

0x744a,	// (0x0004e627) bg_cale_heading_pane_g5

0x7452,	// (0x0004e62f) bg_cale_heading_pane_g6

0x745a,	// (0x0004e637) bg_cale_heading_pane_g7

0x7462,	// (0x0004e63f) bg_cale_heading_pane_g8

0x746a,	// (0x0004e647) bg_cale_heading_pane_g9

0x0008,

0xf324,	// (0x00056501) bg_cale_heading_pane_g

0xdad2,	// (0x00054caf) bg_cale_side_pane_g1

0x7472,	// (0x0004e64f) bg_cale_side_pane_g2

0x747a,	// (0x0004e657) bg_cale_side_pane_g3

0x7482,	// (0x0004e65f) bg_cale_side_pane_g4

0x748a,	// (0x0004e667) bg_cale_side_pane_g5

0x7492,	// (0x0004e66f) bg_cale_side_pane_g6

0x749a,	// (0x0004e677) bg_cale_side_pane_g7

0x74a2,	// (0x0004e67f) bg_cale_side_pane_g8

0x74aa,	// (0x0004e687) bg_cale_side_pane_g9

0x0008,

0xf337,	// (0x00056514) bg_cale_side_pane_g

0x74b2,	// (0x0004e68f) popup_call_status_window_ParamLimits

0x74b2,	// (0x0004e68f) popup_call_status_window

0xdada,	// (0x00054cb7) stacon_top_pane

0xdae2,	// (0x00054cbf) status_pane_ParamLimits

0xdae2,	// (0x00054cbf) status_pane

0xdafc,	// (0x00054cd9) status_small_pane

0xdb04,	// (0x00054ce1) control_pane

0x531b,	// (0x0004c4f8) stacon_bottom_pane

0xdb0c,	// (0x00054ce9) list_single_mce_smart_pane_t1_ParamLimits

0xdb0c,	// (0x00054ce9) list_single_mce_smart_pane_t1

0xdb1f,	// (0x00054cfc) list_single_mce_smart_pane_t2_ParamLimits

0xdb1f,	// (0x00054cfc) list_single_mce_smart_pane_t2

0x0001,

0xf34a,	// (0x00056527) list_single_mce_smart_pane_t_ParamLimits

0xf34a,	// (0x00056527) list_single_mce_smart_pane_t

0x74c1,	// (0x0004e69e) compass_pane

0x74ca,	// (0x0004e6a7) main_location2_pane_t1

0x74e0,	// (0x0004e6bd) main_location2_pane_t2

0x74f6,	// (0x0004e6d3) main_location2_pane_t3

0x0003,

0xf34f,	// (0x0005652c) main_location2_pane_t

0xdb47,	// (0x00054d24) compass_pane_g1_ParamLimits

0xdb47,	// (0x00054d24) compass_pane_g1

0x753e,	// (0x0004e71b) compass_pane_t1

0x754d,	// (0x0004e72a) compass_pane_t2

0x0005,

0xf358,	// (0x00056535) compass_pane_t

0x7594,	// (0x0004e771) text_secondary_cp61

0xdb95,	// (0x00054d72) navi_pane_cams_g5

0xdbe1,	// (0x00054dbe) navi_pane_im_t1

0xdbef,	// (0x00054dcc) navi_pane_mp_g1_ParamLimits

0xdbef,	// (0x00054dcc) navi_pane_mp_g1

0xdc03,	// (0x00054de0) navi_pane_mp_g2_ParamLimits

0xdc03,	// (0x00054de0) navi_pane_mp_g2

0xdc0f,	// (0x00054dec) navi_pane_mp_g3_ParamLimits

0xdc0f,	// (0x00054dec) navi_pane_mp_g3

0x0002,

0xf36c,	// (0x00056549) navi_pane_mp_g_ParamLimits

0xf36c,	// (0x00056549) navi_pane_mp_g

0xdc1b,	// (0x00054df8) navi_pane_mp_t1

0xdc29,	// (0x00054e06) navi_pane_mp_t2

0x0002,

0xf373,	// (0x00056550) navi_pane_mp_t

0xdc94,	// (0x00054e71) navi_pane_vt_g1

0xdc1b,	// (0x00054df8) navi_pane_vt_t1

0xdc9c,	// (0x00054e79) navi_slider_pane

0xd29d,	// (0x0005447a) zooming_pane

0xdca4,	// (0x00054e81) navi_slider_pane_g1

0x7616,	// (0x0004e7f3) navi_slider_pane_g2

0x0006,

0xf37a,	// (0x00056557) navi_slider_pane_g

0xdcc8,	// (0x00054ea5) aid_levels_zoom

0xdcd0,	// (0x00054ead) zooming_pane_g1

0xdcd8,	// (0x00054eb5) zooming_pane_g2

0xdcd8,	// (0x00054eb5) zooming_pane_g3

0x0002,

0xf389,	// (0x00056566) zooming_pane_g

0xdce0,	// (0x00054ebd) level_10_zoom

0xdce9,	// (0x00054ec6) level_11_zoom

0xdcf2,	// (0x00054ecf) level_1_zoom

0xdcfb,	// (0x00054ed8) level_2_zoom

0xdd04,	// (0x00054ee1) level_3_zoom

0xdd0d,	// (0x00054eea) level_4_zoom

0xdd16,	// (0x00054ef3) level_5_zoom

0xdd1f,	// (0x00054efc) level_6_zoom

0xdd28,	// (0x00054f05) level_7_zoom

0xdd31,	// (0x00054f0e) level_8_zoom

0xdd3a,	// (0x00054f17) level_9_zoom

0xdd4b,	// (0x00054f28) popup_phob_thumbnail_window_g1

0xdd53,	// (0x00054f30) popup_phob_thumbnail_window_g2

0x0001,

0xf390,	// (0x0005656d) popup_phob_thumbnail_window_g

0x7ead,	// (0x0004f08a) level_1_location

0x7eb5,	// (0x0004f092) level_2_location

0x7ebd,	// (0x0004f09a) level_3_location

0x7ec5,	// (0x0004f0a2) level_4_location

0xd29d,	// (0x0005447a) level_5_location

0x7628,	// (0x0004e805) mce_icon_pane_g1

0x7630,	// (0x0004e80d) mce_icon_pane_g2

0x0001,

0xf395,	// (0x00056572) mce_icon_pane_g

0x7638,	// (0x0004e815) main_mup_pane_g1_ParamLimits

0x7638,	// (0x0004e815) main_mup_pane_g1

0x5643,	// (0x0004c820) main_mup_pane_g2_ParamLimits

0x5643,	// (0x0004c820) main_mup_pane_g2

0x5643,	// (0x0004c820) main_mup_pane_g3_ParamLimits

0x5643,	// (0x0004c820) main_mup_pane_g3

0x5643,	// (0x0004c820) main_mup_pane_g4_ParamLimits

0x5643,	// (0x0004c820) main_mup_pane_g4

0x5643,	// (0x0004c820) main_mup_pane_g5_ParamLimits

0x5643,	// (0x0004c820) main_mup_pane_g5

0x5643,	// (0x0004c820) main_mup_pane_g6_ParamLimits

0x5643,	// (0x0004c820) main_mup_pane_g6

0x5643,	// (0x0004c820) main_mup_pane_g7_ParamLimits

0x5643,	// (0x0004c820) main_mup_pane_g7

0x5643,	// (0x0004c820) main_mup_pane_g8_ParamLimits

0x5643,	// (0x0004c820) main_mup_pane_g8

0x5643,	// (0x0004c820) main_mup_pane_g9_ParamLimits

0x5643,	// (0x0004c820) main_mup_pane_g9

0x5643,	// (0x0004c820) main_mup_pane_g10_ParamLimits

0x5643,	// (0x0004c820) main_mup_pane_g10

0x5643,	// (0x0004c820) main_mup_pane_g11_ParamLimits

0x5643,	// (0x0004c820) main_mup_pane_g11

0x5627,	// (0x0004c804) main_mup_pane_g12_ParamLimits

0x5627,	// (0x0004c804) main_mup_pane_g12

0x5643,	// (0x0004c820) main_mup_pane_g13_ParamLimits

0x5643,	// (0x0004c820) main_mup_pane_g13

0x000c,

0xf39a,	// (0x00056577) main_mup_pane_g_ParamLimits

0xf39a,	// (0x00056577) main_mup_pane_g

0x5651,	// (0x0004c82e) main_mup_pane_t1_ParamLimits

0x5651,	// (0x0004c82e) main_mup_pane_t1

0x5651,	// (0x0004c82e) main_mup_pane_t2_ParamLimits

0x5651,	// (0x0004c82e) main_mup_pane_t2

0x5651,	// (0x0004c82e) main_mup_pane_t3_ParamLimits

0x5651,	// (0x0004c82e) main_mup_pane_t3

0xd2f0,	// (0x000544cd) main_mup_pane_t4_ParamLimits

0xd2f0,	// (0x000544cd) main_mup_pane_t4

0xd2f0,	// (0x000544cd) main_mup_pane_t5_ParamLimits

0xd2f0,	// (0x000544cd) main_mup_pane_t5

0xdd5b,	// (0x00054f38) main_mup_pane_t6_ParamLimits

0xdd5b,	// (0x00054f38) main_mup_pane_t6

0x0005,

0xf3b5,	// (0x00056592) main_mup_pane_t_ParamLimits

0xf3b5,	// (0x00056592) main_mup_pane_t

0xdd6f,	// (0x00054f4c) mup_progress_pane_ParamLimits

0xdd6f,	// (0x00054f4c) mup_progress_pane

0x0c33,	// (0x00047e10) mup_visualizer_pane_ParamLimits

0x0c33,	// (0x00047e10) mup_visualizer_pane

0x0c33,	// (0x00047e10) mup_volume_pane_ParamLimits

0x0c33,	// (0x00047e10) mup_volume_pane

0x5627,	// (0x0004c804) mup_visualizer_pane_g1_ParamLimits

0x5627,	// (0x0004c804) mup_visualizer_pane_g1

0xdd7d,	// (0x00054f5a) mup_visualizer_pane_g2_ParamLimits

0xdd7d,	// (0x00054f5a) mup_visualizer_pane_g2

0x5619,	// (0x0004c7f6) mup_visualizer_pane_g3_ParamLimits

0x5619,	// (0x0004c7f6) mup_visualizer_pane_g3

0x0002,

0xf3c2,	// (0x0005659f) mup_visualizer_pane_g_ParamLimits

0xf3c2,	// (0x0005659f) mup_visualizer_pane_g

0xd31e,	// (0x000544fb) mup_volume_pane_g1

0xd31e,	// (0x000544fb) mup_volume_pane_g2

0x0001,

0xf3c9,	// (0x000565a6) mup_volume_pane_g

0xd31e,	// (0x000544fb) mup_progress_pane_g1

0xd31e,	// (0x000544fb) mup_progress_pane_g2

0xd31e,	// (0x000544fb) mup_progress_pane_g3

0x0002,

0xf3ce,	// (0x000565ab) mup_progress_pane_g

0x531b,	// (0x0004c4f8) bg_popup_window_pane_cp05

0xdd8b,	// (0x00054f68) heading_pane_cp02_ParamLimits

0xdd8b,	// (0x00054f68) heading_pane_cp02

0xdda5,	// (0x00054f82) list_popup_blid_pane

0xddad,	// (0x00054f8a) list_blid_sat_info_pane_ParamLimits

0xddad,	// (0x00054f8a) list_blid_sat_info_pane

0xddc0,	// (0x00054f9d) list_blid_sat_info_pane_g1

0xddc8,	// (0x00054fa5) list_blid_sat_info_pane_t1

0x771b,	// (0x0004e8f8) mup_equalizer_pane_ParamLimits

0x771b,	// (0x0004e8f8) mup_equalizer_pane

0x7734,	// (0x0004e911) mup_equalizer_pane_cp1_ParamLimits

0x7734,	// (0x0004e911) mup_equalizer_pane_cp1

0x774d,	// (0x0004e92a) mup_equalizer_pane_cp2_ParamLimits

0x774d,	// (0x0004e92a) mup_equalizer_pane_cp2

0x7766,	// (0x0004e943) mup_equalizer_pane_cp3_ParamLimits

0x7766,	// (0x0004e943) mup_equalizer_pane_cp3

0x777f,	// (0x0004e95c) mup_equalizer_pane_cp4_ParamLimits

0x777f,	// (0x0004e95c) mup_equalizer_pane_cp4

0x7798,	// (0x0004e975) mup_equalizer_pane_cp5

0x77aa,	// (0x0004e987) mup_equalizer_pane_cp6

0x77bc,	// (0x0004e999) mup_equalizer_pane_cp7

0xeee6,	// (0x000560c3) bg_popup_call_poc_act_pane_g9

0xeeee,	// (0x000560cb) bg_popup_call_poc_act_pane_g10

0xeef6,	// (0x000560d3) bg_popup_call_poc_act_pane_g11

0x000a,

0x5576,	// (0x0004c753) mup_scale_pane

0x558e,	// (0x0004c76b) mup_scale_pane_g1

0xddd6,	// (0x00054fb3) mup_scale_pane_g2

0x0006,

0xf3ea,	// (0x000565c7) mup_scale_pane_g

0xddfa,	// (0x00054fd7) msg_data_pane

0xde02,	// (0x00054fdf) scroll_pane_cp017

0x77e0,	// (0x0004e9bd) bg_list_pane_cp04_ParamLimits

0x77e0,	// (0x0004e9bd) bg_list_pane_cp04

0xde0a,	// (0x00054fe7) msg_data_pane_g1

0x73da,	// (0x0004e5b7) msg_data_pane_g2

0x73e2,	// (0x0004e5bf) msg_data_pane_g3

0x7800,	// (0x0004e9dd) msg_data_pane_g4

0x73f2,	// (0x0004e5cf) msg_data_pane_g5

0x7628,	// (0x0004e805) msg_data_pane_g6

0x7808,	// (0x0004e9e5) msg_data_pane_g7

0x0006,

0xf3f9,	// (0x000565d6) msg_data_pane_g

0x7810,	// (0x0004e9ed) msg_text_pane_ParamLimits

0x7810,	// (0x0004e9ed) msg_text_pane

0x783c,	// (0x0004ea19) qrid_highlight_pane_cp011_ParamLimits

0x783c,	// (0x0004ea19) qrid_highlight_pane_cp011

0x531b,	// (0x0004c4f8) msg_body_pane

0x531b,	// (0x0004c4f8) msg_header_pane

0xde1b,	// (0x00054ff8) input_focus_pane_cp07

0x785e,	// (0x0004ea3b) msg_header_pane_t1_ParamLimits

0x785e,	// (0x0004ea3b) msg_header_pane_t1

0x7874,	// (0x0004ea51) msg_header_pane_t2_ParamLimits

0x7874,	// (0x0004ea51) msg_header_pane_t2

0x0001,

0xf40d,	// (0x000565ea) msg_header_pane_t_ParamLimits

0xf40d,	// (0x000565ea) msg_header_pane_t

0xde30,	// (0x0005500d) msg_body_pane_g1

0x788b,	// (0x0004ea68) msg_body_pane_t1_ParamLimits

0x788b,	// (0x0004ea68) msg_body_pane_t1

0x0a6a,	// (0x00047c47) msg_body_pane_t2_ParamLimits

0x0a6a,	// (0x00047c47) msg_body_pane_t2

0x0a7c,	// (0x00047c59) msg_body_pane_t3_ParamLimits

0x0a7c,	// (0x00047c59) msg_body_pane_t3

0x0002,

0xf412,	// (0x000565ef) msg_body_pane_t_ParamLimits

0xf412,	// (0x000565ef) msg_body_pane_t

0x7904,	// (0x0004eae1) main_viewer_pane_g1_ParamLimits

0x7904,	// (0x0004eae1) main_viewer_pane_g1

0x7910,	// (0x0004eaed) main_viewer_pane_g2_ParamLimits

0x7910,	// (0x0004eaed) main_viewer_pane_g2

0x791c,	// (0x0004eaf9) main_viewer_pane_g3_ParamLimits

0x791c,	// (0x0004eaf9) main_viewer_pane_g3

0x792b,	// (0x0004eb08) main_viewer_pane_g4_ParamLimits

0x792b,	// (0x0004eb08) main_viewer_pane_g4

0x793a,	// (0x0004eb17) main_viewer_pane_g5_ParamLimits

0x793a,	// (0x0004eb17) main_viewer_pane_g5

0x793a,	// (0x0004eb17) main_viewer_pane_g7_ParamLimits

0x793a,	// (0x0004eb17) main_viewer_pane_g7

0x794c,	// (0x0004eb29) main_viewer_pane_g8_ParamLimits

0x794c,	// (0x0004eb29) main_viewer_pane_g8

0x0007,

0xf422,	// (0x000565ff) main_viewer_pane_g_ParamLimits

0xf422,	// (0x000565ff) main_viewer_pane_g

0xde38,	// (0x00055015) viewer_content_pane_ParamLimits

0xde38,	// (0x00055015) viewer_content_pane

0x797c,	// (0x0004eb59) main_postcard_pane_g1_ParamLimits

0x797c,	// (0x0004eb59) main_postcard_pane_g1

0x7988,	// (0x0004eb65) main_postcard_pane_g2_ParamLimits

0x7988,	// (0x0004eb65) main_postcard_pane_g2

0x7994,	// (0x0004eb71) main_postcard_pane_g3_ParamLimits

0x7994,	// (0x0004eb71) main_postcard_pane_g3

0x0005,

0xf433,	// (0x00056610) main_postcard_pane_g_ParamLimits

0xf433,	// (0x00056610) main_postcard_pane_g

0x79a0,	// (0x0004eb7d) main_postcard_pane_g4

0x0b95,	// (0x00047d72) smil_status_volume_pane_g2

0x79c4,	// (0x0004eba1) postcard_pane_ParamLimits

0x79c4,	// (0x0004eba1) postcard_pane

0xd948,	// (0x00054b25) postcard_pane_g1_ParamLimits

0xd948,	// (0x00054b25) postcard_pane_g1

0x79f4,	// (0x0004ebd1) postcard_pane_g2_ParamLimits

0x79f4,	// (0x0004ebd1) postcard_pane_g2

0x7a00,	// (0x0004ebdd) postcard_pane_g3_ParamLimits

0x7a00,	// (0x0004ebdd) postcard_pane_g3

0xde46,	// (0x00055023) postcard_pane_g4_ParamLimits

0xde46,	// (0x00055023) postcard_pane_g4

0x7a0c,	// (0x0004ebe9) postcard_pane_g5_ParamLimits

0x7a0c,	// (0x0004ebe9) postcard_pane_g5

0x7a18,	// (0x0004ebf5) postcard_pane_g6_ParamLimits

0x7a18,	// (0x0004ebf5) postcard_pane_g6

0xde54,	// (0x00055031) postcard_pane_g7_ParamLimits

0xde54,	// (0x00055031) postcard_pane_g7

0x0006,

0xf440,	// (0x0005661d) postcard_pane_g_ParamLimits

0xf440,	// (0x0005661d) postcard_pane_g

0x7a24,	// (0x0004ec01) main_mp2_pane_g1_ParamLimits

0x7a24,	// (0x0004ec01) main_mp2_pane_g1

0x7a30,	// (0x0004ec0d) main_mp2_pane_g2_ParamLimits

0x7a30,	// (0x0004ec0d) main_mp2_pane_g2

0x7a3c,	// (0x0004ec19) main_mp2_pane_g3_ParamLimits

0x7a3c,	// (0x0004ec19) main_mp2_pane_g3

0x0002,

0xf44f,	// (0x0005662c) main_mp2_pane_g_ParamLimits

0xf44f,	// (0x0005662c) main_mp2_pane_g

0x7a48,	// (0x0004ec25) main_mp2_pane_t1_ParamLimits

0x7a48,	// (0x0004ec25) main_mp2_pane_t1

0x7a5d,	// (0x0004ec3a) main_mp2_pane_t2_ParamLimits

0x7a5d,	// (0x0004ec3a) main_mp2_pane_t2

0x7a6f,	// (0x0004ec4c) main_mp2_pane_t3_ParamLimits

0x7a6f,	// (0x0004ec4c) main_mp2_pane_t3

0x0002,

0xf456,	// (0x00056633) main_mp2_pane_t_ParamLimits

0xf456,	// (0x00056633) main_mp2_pane_t

0xde62,	// (0x0005503f) pec_content_pane_ParamLimits

0xde62,	// (0x0005503f) pec_content_pane

0xd48c,	// (0x00054669) scroll_pane_cp015

0xde74,	// (0x00055051) pec_attribute_pane_ParamLimits

0xde74,	// (0x00055051) pec_attribute_pane

0x7a81,	// (0x0004ec5e) pec_content_pane_g1_ParamLimits

0x7a81,	// (0x0004ec5e) pec_content_pane_g1

0xde84,	// (0x00055061) pec_content_pane_t1_ParamLimits

0xde84,	// (0x00055061) pec_content_pane_t1

0xde96,	// (0x00055073) pec_content_pane_t2_ParamLimits

0xde96,	// (0x00055073) pec_content_pane_t2

0x0001,

0xf45d,	// (0x0005663a) pec_content_pane_t_ParamLimits

0xf45d,	// (0x0005663a) pec_content_pane_t

0x7a8d,	// (0x0004ec6a) list_single_graphic_pane_cp01_ParamLimits

0x7a8d,	// (0x0004ec6a) list_single_graphic_pane_cp01

0x5576,	// (0x0004c753) bg_popup_sub_pane_cp04

0xdea8,	// (0x00055085) popup_mup_playback_window_g1

0xdeb4,	// (0x00055091) popup_mup_playback_window_t1

0xdec9,	// (0x000550a6) popup_mup_playback_window_t2

0x0001,

0xf462,	// (0x0005663f) popup_mup_playback_window_t

0xdf00,	// (0x000550dd) main_image_pane_g1_ParamLimits

0xdf00,	// (0x000550dd) main_image_pane_g1

0xdf43,	// (0x00055120) scroll_pane_cp018_ParamLimits

0xdf43,	// (0x00055120) scroll_pane_cp018

0xdf5b,	// (0x00055138) scroll_pane_cp016_ParamLimits

0xdf5b,	// (0x00055138) scroll_pane_cp016

0x7b12,	// (0x0004ecef) smil2_image_pane_ParamLimits

0x7b12,	// (0x0004ecef) smil2_image_pane

0x7b3a,	// (0x0004ed17) smil2_root_pane_ParamLimits

0x7b3a,	// (0x0004ed17) smil2_root_pane

0x7b66,	// (0x0004ed43) smil2_text_pane_ParamLimits

0x7b66,	// (0x0004ed43) smil2_text_pane

0x531b,	// (0x0004c4f8) bg_list_pane_cp06

0xdf8f,	// (0x0005516c) grid_radio_pane

0x531b,	// (0x0004c4f8) bg_popup_window_pane_cp06

0xdf97,	// (0x00055174) main_fmradio_pane_t1

0xef3e,	// (0x0005611b) heading_pane_cp04

0xdfa5,	// (0x00055182) main_fmradio_pane_t2

0xef46,	// (0x00056123) popup_cale_lunar_info_window_g1

0xdfb3,	// (0x00055190) main_fmradio_pane_t3

0xef4e,	// (0x0005612b) popup_cale_lunar_info_window_g2

0xdfc1,	// (0x0005519e) main_fmradio_pane_t4

0x0001,

0xdfcf,	// (0x000551ac) main_fmradio_pane_t5

0x0004,

0xf555,	// (0x00056732) popup_cale_lunar_info_window_g

0xf477,	// (0x00056654) main_fmradio_pane_t

0xdfdd,	// (0x000551ba) wait_bar_pane_cp03

0xd2dd,	// (0x000544ba) cell_fmradio_pane_ParamLimits

0xd2dd,	// (0x000544ba) cell_fmradio_pane

0xde54,	// (0x00055031) cell_fmradio_pane_g1_ParamLimits

0xde54,	// (0x00055031) cell_fmradio_pane_g1

0x531b,	// (0x0004c4f8) grid_highlight_pane_cp011

0xdfe5,	// (0x000551c2) poc_content_pane_ParamLimits

0xdfe5,	// (0x000551c2) poc_content_pane

0xdff8,	// (0x000551d5) scroll_pane_cp019

0x7b9a,	// (0x0004ed77) popup_call_poc_act_window_ParamLimits

0x7b9a,	// (0x0004ed77) popup_call_poc_act_window

0x7ba7,	// (0x0004ed84) popup_call_poc_inact_window_ParamLimits

0x7ba7,	// (0x0004ed84) popup_call_poc_inact_window

0xf519,	// (0x000566f6) bg_popup_call_poc_act_pane_g

0xeefe,	// (0x000560db) bg_popup_call_poc_inact_pane_g1

0xef06,	// (0x000560e3) bg_popup_call_poc_inact_pane_g2

0xe000,	// (0x000551dd) popup_call_poc_act_window_g2

0xef0e,	// (0x000560eb) bg_popup_call_poc_inact_pane_g3

0xee8e,	// (0x0005606b) bg_popup_call_poc_inact_pane_g4

0xef16,	// (0x000560f3) bg_popup_call_poc_inact_pane_g5

0xe008,	// (0x000551e5) popup_call_poc_act_window_t1_ParamLimits

0xe008,	// (0x000551e5) popup_call_poc_act_window_t1

0xe030,	// (0x0005520d) popup_call_poc_act_window_t2_ParamLimits

0xe030,	// (0x0005520d) popup_call_poc_act_window_t2

0xe058,	// (0x00055235) popup_call_poc_act_window_t3_ParamLimits

0xe058,	// (0x00055235) popup_call_poc_act_window_t3

0xe080,	// (0x0005525d) popup_call_poc_act_window_t4_ParamLimits

0xe080,	// (0x0005525d) popup_call_poc_act_window_t4

0x0003,

0xf482,	// (0x0005665f) popup_call_poc_act_window_t_ParamLimits

0xf482,	// (0x0005665f) popup_call_poc_act_window_t

0xef1e,	// (0x000560fb) bg_popup_call_poc_inact_pane_g6

0xef26,	// (0x00056103) bg_popup_call_poc_inact_pane_g7

0xef2e,	// (0x0005610b) bg_popup_call_poc_inact_pane_g8

0xe092,	// (0x0005526f) popup_call_poc_inact_window_g2

0xef36,	// (0x00056113) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf530,	// (0x0005670d) bg_popup_call_poc_inact_pane_g

0xe09a,	// (0x00055277) popup_call_poc_inact_window_t1_ParamLimits

0xe09a,	// (0x00055277) popup_call_poc_inact_window_t1

0xe0af,	// (0x0005528c) popup_call_poc_inact_window_t2_ParamLimits

0xe0af,	// (0x0005528c) popup_call_poc_inact_window_t2

0xe0c4,	// (0x000552a1) popup_call_poc_inact_window_t3_ParamLimits

0xe0c4,	// (0x000552a1) popup_call_poc_inact_window_t3

0x0002,

0xf48b,	// (0x00056668) popup_call_poc_inact_window_t_ParamLimits

0xf48b,	// (0x00056668) popup_call_poc_inact_window_t

0x0b20,	// (0x00047cfd) context_pane_ParamLimits

0x8131,	// (0x0004f30e) signal_pane_ParamLimits

0xd29d,	// (0x0005447a) main_call2_pane

0x80b3,	// (0x0004f290) popup_phob_thumbnail2_window_ParamLimits

0x80b3,	// (0x0004f290) popup_phob_thumbnail2_window

0x78b6,	// (0x0004ea93) aid_hotspot_pointer_arrow_pane

0x78be,	// (0x0004ea9b) aid_hotspot_pointer_hand_pane

0x7e7b,	// (0x0004f058) phob_pre_status_pane_g5

0x5635,	// (0x0004c812) cams_zoom_pane_ParamLimits

0x5635,	// (0x0004c812) image_vga_pane_ParamLimits

0x5627,	// (0x0004c804) main_camera_pane_g1_ParamLimits

0x5627,	// (0x0004c804) main_camera_pane_g2_ParamLimits

0x5627,	// (0x0004c804) main_camera_pane_g3_ParamLimits

0x5627,	// (0x0004c804) main_camera_pane_g4_ParamLimits

0x5627,	// (0x0004c804) main_camera_pane_g5_ParamLimits

0x5627,	// (0x0004c804) main_camera_pane_g6_ParamLimits

0x5627,	// (0x0004c804) main_camera_pane_g7_ParamLimits

0xf19f,	// (0x0005637c) main_camera_pane_g_ParamLimits

0xd2f0,	// (0x000544cd) main_camera_pane_t1_ParamLimits

0xd2f0,	// (0x000544cd) main_camera_pane_t2_ParamLimits

0xf1b0,	// (0x0005638d) main_camera_pane_t_ParamLimits

0x5576,	// (0x0004c753) bg_popup_preview_window_pane_cp01_ParamLimits

0x5576,	// (0x0004c753) bg_popup_preview_window_pane_cp01

0xe0d9,	// (0x000552b6) popup_phob_thumbnail2_window_g1_ParamLimits

0xe0d9,	// (0x000552b6) popup_phob_thumbnail2_window_g1

0x531b,	// (0x0004c4f8) call2_cli_visual_pane

0x7bc3,	// (0x0004eda0) popup_call2_audio_conf_window_ParamLimits

0x7bc3,	// (0x0004eda0) popup_call2_audio_conf_window

0x7bd6,	// (0x0004edb3) popup_call2_audio_first_window_ParamLimits

0x7bd6,	// (0x0004edb3) popup_call2_audio_first_window

0x7c52,	// (0x0004ee2f) popup_call2_audio_in_window_ParamLimits

0x7c52,	// (0x0004ee2f) popup_call2_audio_in_window

0x7c82,	// (0x0004ee5f) popup_call2_audio_out_window_ParamLimits

0x7c82,	// (0x0004ee5f) popup_call2_audio_out_window

0x7cce,	// (0x0004eeab) popup_call2_audio_second_window_ParamLimits

0x7cce,	// (0x0004eeab) popup_call2_audio_second_window

0x7d1a,	// (0x0004eef7) popup_call2_audio_wait_window_ParamLimits

0x7d1a,	// (0x0004eef7) popup_call2_audio_wait_window

0x531b,	// (0x0004c4f8) bg_popup_call2_act_pane_cp03

0x5558,	// (0x0004c735) list_conf_pane_cp

0xe0e5,	// (0x000552c2) popup_call2_audio_conf_window_t1

0xd9f9,	// (0x00054bd6) list_single_graphic_popup_conf2_pane_ParamLimits

0xd9f9,	// (0x00054bd6) list_single_graphic_popup_conf2_pane

0xda0c,	// (0x00054be9) list_highlight_pane_cp04

0xe0f3,	// (0x000552d0) list_single_graphic_popup_conf2_pane_g1

0xda1d,	// (0x00054bfa) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf492,	// (0x0005666f) list_single_graphic_popup_conf2_pane_g

0xe0fb,	// (0x000552d8) list_single_graphic_popup_conf2_pane_t1

0xe109,	// (0x000552e6) bg_popup_call2_act_pane_cp01_ParamLimits

0xe109,	// (0x000552e6) bg_popup_call2_act_pane_cp01

0xe193,	// (0x00055370) call_type_pane_cp05_ParamLimits

0xe193,	// (0x00055370) call_type_pane_cp05

0xe1e7,	// (0x000553c4) popup_call2_audio_second_window_g1_ParamLimits

0xe1e7,	// (0x000553c4) popup_call2_audio_second_window_g1

0xe23b,	// (0x00055418) popup_call2_audio_second_window_g2_ParamLimits

0xe23b,	// (0x00055418) popup_call2_audio_second_window_g2

0x0002,

0xf497,	// (0x00056674) popup_call2_audio_second_window_g_ParamLimits

0xf497,	// (0x00056674) popup_call2_audio_second_window_g

0xe2a0,	// (0x0005547d) popup_call2_audio_second_window_t1_ParamLimits

0xe2a0,	// (0x0005547d) popup_call2_audio_second_window_t1

0xe35b,	// (0x00055538) popup_call2_audio_second_window_t2_ParamLimits

0xe35b,	// (0x00055538) popup_call2_audio_second_window_t2

0xe3ae,	// (0x0005558b) popup_call2_audio_second_window_t3_ParamLimits

0xe3ae,	// (0x0005558b) popup_call2_audio_second_window_t3

0x0003,

0xf49e,	// (0x0005667b) popup_call2_audio_second_window_t_ParamLimits

0xf49e,	// (0x0005667b) popup_call2_audio_second_window_t

0x531b,	// (0x0004c4f8) bg_popup_call2_in_pane_cp02

0x5325,	// (0x0004c502) call_type_pane_cp04

0x7d57,	// (0x0004ef34) popup_call2_audio_wait_window_g1

0x7d5f,	// (0x0004ef3c) popup_call2_audio_wait_window_g2

0x0001,

0xf4a7,	// (0x00056684) popup_call2_audio_wait_window_g

0x533d,	// (0x0004c51a) popup_call2_audio_wait_window_t3

0xe4a1,	// (0x0005567e) bg_popup_call2_act_pane_ParamLimits

0xe4a1,	// (0x0005567e) bg_popup_call2_act_pane

0xe561,	// (0x0005573e) call_type_pane_cp03_ParamLimits

0xe561,	// (0x0005573e) call_type_pane_cp03

0xe5c5,	// (0x000557a2) popup_call2_audio_first_window_g1_ParamLimits

0xe5c5,	// (0x000557a2) popup_call2_audio_first_window_g1

0xe635,	// (0x00055812) popup_call2_audio_first_window_g2_ParamLimits

0xe635,	// (0x00055812) popup_call2_audio_first_window_g2

0xd948,	// (0x00054b25) popup_call2_audio_first_window_g3_ParamLimits

0xd948,	// (0x00054b25) popup_call2_audio_first_window_g3

0x0004,

0xf4ac,	// (0x00056689) popup_call2_audio_first_window_g_ParamLimits

0xf4ac,	// (0x00056689) popup_call2_audio_first_window_g

0xe713,	// (0x000558f0) popup_call2_audio_first_window_t1_ParamLimits

0xe713,	// (0x000558f0) popup_call2_audio_first_window_t1

0xe816,	// (0x000559f3) popup_call2_audio_first_window_t4_ParamLimits

0xe816,	// (0x000559f3) popup_call2_audio_first_window_t4

0xe8f9,	// (0x00055ad6) popup_call2_audio_first_window_t5_ParamLimits

0xe8f9,	// (0x00055ad6) popup_call2_audio_first_window_t5

0x0003,

0xf4b7,	// (0x00056694) popup_call2_audio_first_window_t_ParamLimits

0xf4b7,	// (0x00056694) popup_call2_audio_first_window_t

0x556e,	// (0x0004c74b) bg_popup_call2_act_pane_g1

0xef56,	// (0x00056133) popup_cale_lunar_info_window_t1

0xef64,	// (0x00056141) popup_cale_lunar_info_window_t2

0xef72,	// (0x0005614f) popup_cale_lunar_info_window_t3

0x531b,	// (0x0004c4f8) bg_popup_call2_bubble_pane

0xe9fa,	// (0x00055bd7) bg_popup_call2_in_pane_cp01_ParamLimits

0xe9fa,	// (0x00055bd7) bg_popup_call2_in_pane_cp01

0x4fd3,	// (0x0004c1b0) call_type_pane_cp02

0x7d67,	// (0x0004ef44) popup_call2_audio_out_window_g1_ParamLimits

0x7d67,	// (0x0004ef44) popup_call2_audio_out_window_g1

0xea42,	// (0x00055c1f) popup_call2_audio_out_window_g2_ParamLimits

0xea42,	// (0x00055c1f) popup_call2_audio_out_window_g2

0x7d93,	// (0x0004ef70) popup_call2_audio_out_window_g3_ParamLimits

0x7d93,	// (0x0004ef70) popup_call2_audio_out_window_g3

0x0003,

0xf4c0,	// (0x0005669d) popup_call2_audio_out_window_g_ParamLimits

0xf4c0,	// (0x0005669d) popup_call2_audio_out_window_g

0xea79,	// (0x00055c56) popup_call2_audio_out_window_t1_ParamLimits

0xea79,	// (0x00055c56) popup_call2_audio_out_window_t1

0xead8,	// (0x00055cb5) popup_call2_audio_out_window_t2_ParamLimits

0xead8,	// (0x00055cb5) popup_call2_audio_out_window_t2

0xeb2c,	// (0x00055d09) popup_call2_audio_out_window_t3_ParamLimits

0xeb2c,	// (0x00055d09) popup_call2_audio_out_window_t3

0xeb42,	// (0x00055d1f) popup_call2_audio_out_window_t4_ParamLimits

0xeb42,	// (0x00055d1f) popup_call2_audio_out_window_t4

0xeb58,	// (0x00055d35) popup_call2_audio_out_window_t5_ParamLimits

0xeb58,	// (0x00055d35) popup_call2_audio_out_window_t5

0x0005,

0xf4c9,	// (0x000566a6) popup_call2_audio_out_window_t_ParamLimits

0xf4c9,	// (0x000566a6) popup_call2_audio_out_window_t

0xebbc,	// (0x00055d99) bg_popup_call2_in_pane_ParamLimits

0xebbc,	// (0x00055d99) bg_popup_call2_in_pane

0xec18,	// (0x00055df5) popup_call2_audio_in_window_g1_ParamLimits

0xec18,	// (0x00055df5) popup_call2_audio_in_window_g1

0xec50,	// (0x00055e2d) popup_call2_audio_in_window_g2_ParamLimits

0xec50,	// (0x00055e2d) popup_call2_audio_in_window_g2

0xec88,	// (0x00055e65) popup_call2_audio_in_window_g3_ParamLimits

0xec88,	// (0x00055e65) popup_call2_audio_in_window_g3

0x0003,

0xf4d6,	// (0x000566b3) popup_call2_audio_in_window_g_ParamLimits

0xf4d6,	// (0x000566b3) popup_call2_audio_in_window_g

0xece0,	// (0x00055ebd) popup_call2_audio_in_window_t1_ParamLimits

0xece0,	// (0x00055ebd) popup_call2_audio_in_window_t1

0xed60,	// (0x00055f3d) popup_call2_audio_in_window_t2_ParamLimits

0xed60,	// (0x00055f3d) popup_call2_audio_in_window_t2

0xede0,	// (0x00055fbd) popup_call2_audio_in_window_t3_ParamLimits

0xede0,	// (0x00055fbd) popup_call2_audio_in_window_t3

0xedfa,	// (0x00055fd7) popup_call2_audio_in_window_t4_ParamLimits

0xedfa,	// (0x00055fd7) popup_call2_audio_in_window_t4

0xee0c,	// (0x00055fe9) popup_call2_audio_in_window_t5_ParamLimits

0xee0c,	// (0x00055fe9) popup_call2_audio_in_window_t5

0xee21,	// (0x00055ffe) popup_call2_audio_in_window_t6_ParamLimits

0xee21,	// (0x00055ffe) popup_call2_audio_in_window_t6

0x0005,

0xf4df,	// (0x000566bc) popup_call2_audio_in_window_t_ParamLimits

0xf4df,	// (0x000566bc) popup_call2_audio_in_window_t

0x556e,	// (0x0004c74b) bg_popup_call2_in_pane_g1

0xef80,	// (0x0005615d) popup_cale_lunar_info_window_t4

0x0003,

0xf55a,	// (0x00056737) popup_cale_lunar_info_window_t

0x5576,	// (0x0004c753) bg_popup_call2_rect_pane_ParamLimits

0x5576,	// (0x0004c753) bg_popup_call2_rect_pane

0x531b,	// (0x0004c4f8) call2_cli_visual_graphic_pane

0x531b,	// (0x0004c4f8) call2_cli_visual_text_pane

0x8168,	// (0x0004f345) smil_status_volume_pane_g3

0x0002,

0x558e,	// (0x0004c76b) call2_cli_visual_graphic_pane_g1

0x558e,	// (0x0004c76b) call2_cli_visual_graphic_pane_g2

0x558e,	// (0x0004c76b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ec,	// (0x000566c9) call2_cli_visual_graphic_pane_g

0xee36,	// (0x00056013) bg_popup_call2_rect_pane_g1

0x5a50,	// (0x0004cc2d) bg_popup_call2_rect_pane_g2

0xee3e,	// (0x0005601b) bg_popup_call2_rect_pane_g3

0xee46,	// (0x00056023) bg_popup_call2_rect_pane_g4

0xee4e,	// (0x0005602b) bg_popup_call2_rect_pane_g5

0xee56,	// (0x00056033) bg_popup_call2_rect_pane_g6

0xee5e,	// (0x0005603b) bg_popup_call2_rect_pane_g7

0xee66,	// (0x00056043) bg_popup_call2_rect_pane_g8

0xee6e,	// (0x0005604b) bg_popup_call2_rect_pane_g9

0x0008,

0xf4f3,	// (0x000566d0) bg_popup_call2_rect_pane_g

0xee76,	// (0x00056053) bg_popup_call2_bubble_pane_g1

0xee7e,	// (0x0005605b) bg_popup_call2_bubble_pane_g2

0xee86,	// (0x00056063) bg_popup_call2_bubble_pane_g3

0xee8e,	// (0x0005606b) bg_popup_call2_bubble_pane_g4

0xee96,	// (0x00056073) bg_popup_call2_bubble_pane_g5

0xee9e,	// (0x0005607b) bg_popup_call2_bubble_pane_g6

0xeea6,	// (0x00056083) bg_popup_call2_bubble_pane_g7

0xeeae,	// (0x0005608b) bg_popup_call2_bubble_pane_g8

0xeeb6,	// (0x00056093) bg_popup_call2_bubble_pane_g9

0x0008,

0xf506,	// (0x000566e3) bg_popup_call2_bubble_pane_g

0x5b37,	// (0x0004cd14) aid_cale_week_size_cell_pane

0x5576,	// (0x0004c753) aid_cams_cif_uncrop_pane_ParamLimits

0x5576,	// (0x0004c753) aid_cams_cif_uncrop_pane

0x62e8,	// (0x0004d4c5) aid_cams_size_cell_ParamLimits

0x62e8,	// (0x0004d4c5) aid_cams_size_cell

0x62f4,	// (0x0004d4d1) grid_cams_pane_ParamLimits

0x6300,	// (0x0004d4dd) linegrid_cams_pane_ParamLimits

0x63bf,	// (0x0004d59c) call_video_pane_t1

0x63dc,	// (0x0004d5b9) call_video_pane_t2

0x0001,

0xf1fc,	// (0x000563d9) call_video_pane_t

0x67be,	// (0x0004d99b) aid_cale_month_size_cell_pane_ParamLimits

0x67be,	// (0x0004d99b) aid_cale_month_size_cell_pane

0xf59e,	// (0x0005677b) smil_status_volume_pane_g

0x8175,	// (0x0004f352) volume_smil_pane_ParamLimits

0x4c0a,	// (0x0004bde7) aid_popup2_width_pane

0x59b1,	// (0x0004cb8e) cell_qdial_pane_g4_ParamLimits

0x59b1,	// (0x0004cb8e) cell_qdial_pane_g4

0x751e,	// (0x0004e6fb) aid_blid_cardinal_pane_ParamLimits

0x752a,	// (0x0004e707) aid_blid_destination_pane_ParamLimits

0x752a,	// (0x0004e707) aid_blid_destination_pane

0x5576,	// (0x0004c753) bg_popup_call_poc_act_pane_ParamLimits

0x5576,	// (0x0004c753) bg_popup_call_poc_act_pane

0x5576,	// (0x0004c753) bg_popup_call_poc_inact_pane_ParamLimits

0x5576,	// (0x0004c753) bg_popup_call_poc_inact_pane

0xeebe,	// (0x0005609b) bg_popup_call_poc_act_pane_g1

0xeec6,	// (0x000560a3) bg_popup_call_poc_act_pane_g2

0xeece,	// (0x000560ab) bg_popup_call_poc_act_pane_g3

0xee8e,	// (0x0005606b) bg_popup_call_poc_act_pane_g4

0xee96,	// (0x00056073) bg_popup_call_poc_act_pane_g5

0xeed6,	// (0x000560b3) bg_popup_call_poc_act_pane_g6

0xeea6,	// (0x00056083) bg_popup_call_poc_act_pane_g7

0xeede,	// (0x000560bb) bg_popup_call_poc_act_pane_g8

0x531b,	// (0x0004c4f8) main_usb_pane

0x8012,	// (0x0004f1ef) popup_cale_lunar_info_window

0x6661,	// (0x0004d83e) im_reading_pane_t1_ParamLimits

0xd3d5,	// (0x000545b2) list_im_pane_ParamLimits

0xd3e6,	// (0x000545c3) scroll_pane_cp07_ParamLimits

0x531b,	// (0x0004c4f8) grid_highlight_pane_cp012

0x5576,	// (0x0004c753) mup_scale_pane_ParamLimits

0xd948,	// (0x00054b25) main_usb_pane_g1_ParamLimits

0xd948,	// (0x00054b25) main_usb_pane_g1

0x7de3,	// (0x0004efc0) main_usb_pane_g2_ParamLimits

0x7de3,	// (0x0004efc0) main_usb_pane_g2

0x0001,

0xf543,	// (0x00056720) main_usb_pane_g_ParamLimits

0xf543,	// (0x00056720) main_usb_pane_g

0x7def,	// (0x0004efcc) main_usb_pane_t1_ParamLimits

0x7def,	// (0x0004efcc) main_usb_pane_t1

0x7e01,	// (0x0004efde) main_usb_pane_t2_ParamLimits

0x7e01,	// (0x0004efde) main_usb_pane_t2

0x7e13,	// (0x0004eff0) main_usb_pane_t3_ParamLimits

0x7e13,	// (0x0004eff0) main_usb_pane_t3

0x7e25,	// (0x0004f002) main_usb_pane_t4_ParamLimits

0x7e25,	// (0x0004f002) main_usb_pane_t4

0x7e37,	// (0x0004f014) main_usb_pane_t5_ParamLimits

0x7e37,	// (0x0004f014) main_usb_pane_t5

0x7e49,	// (0x0004f026) main_usb_pane_t6_ParamLimits

0x7e49,	// (0x0004f026) main_usb_pane_t6

0x0005,

0xf548,	// (0x00056725) main_usb_pane_t_ParamLimits

0xdb3e,	// (0x00054d1b) aid_text_placing

0x74ca,	// (0x0004e6a7) main_location2_pane_t1_ParamLimits

0x74e0,	// (0x0004e6bd) main_location2_pane_t2_ParamLimits

0x74f6,	// (0x0004e6d3) main_location2_pane_t3_ParamLimits

0x750c,	// (0x0004e6e9) main_location2_pane_t4_ParamLimits

0x750c,	// (0x0004e6e9) main_location2_pane_t4

0xf34f,	// (0x0005652c) main_location2_pane_t_ParamLimits

0x55c6,	// (0x0004c7a3) find_pinb_pane_g2_ParamLimits

0x55c6,	// (0x0004c7a3) find_pinb_pane_g2

0x0001,

0xf0b4,	// (0x00056291) find_pinb_pane_g_ParamLimits

0xf0b4,	// (0x00056291) find_pinb_pane_g

0x55d2,	// (0x0004c7af) find_pinb_pane_t1_ParamLimits

0x55e4,	// (0x0004c7c1) find_pinb_pane_t2_ParamLimits

0xf0b9,	// (0x00056296) find_pinb_pane_t_ParamLimits

0x531b,	// (0x0004c4f8) main_call3_pane

0x6b62,	// (0x0004dd3f) cale_month_day_heading_pane_t1_ParamLimits

0x6be8,	// (0x0004ddc5) cale_month_day_heading_pane_t2_ParamLimits

0x6c79,	// (0x0004de56) cale_month_day_heading_pane_t3_ParamLimits

0x6d0a,	// (0x0004dee7) cale_month_day_heading_pane_t4_ParamLimits

0x6d9b,	// (0x0004df78) cale_month_day_heading_pane_t5_ParamLimits

0x6e2c,	// (0x0004e009) cale_month_day_heading_pane_t6_ParamLimits

0x6ebd,	// (0x0004e09a) cale_month_day_heading_pane_t7_ParamLimits

0xf234,	// (0x00056411) cale_month_day_heading_pane_t_ParamLimits

0x71dd,	// (0x0004e3ba) smil_status_volume_pane

0x79dc,	// (0x0004ebb9) postcard_address_pane_ParamLimits

0x79dc,	// (0x0004ebb9) postcard_address_pane

0x79e8,	// (0x0004ebc5) postcard_message_pane_ParamLimits

0x79e8,	// (0x0004ebc5) postcard_message_pane

0x7dbf,	// (0x0004ef9c) call2_cli_visual_pane_t1_ParamLimits

0x7dbf,	// (0x0004ef9c) call2_cli_visual_pane_t1

0x0bf5,	// (0x00047dd2) postcard_message_pane_t1_ParamLimits

0x0bf5,	// (0x00047dd2) postcard_message_pane_t1

0x0bdd,	// (0x00047dba) postcard_address_pane_t1_ParamLimits

0x0bdd,	// (0x00047dba) postcard_address_pane_t1

0x82a2,	// (0x0004f47f) popup_call3_audio_in_window_ParamLimits

0x82a2,	// (0x0004f47f) popup_call3_audio_in_window

0x818a,	// (0x0004f367) bg_popup_call3_in_pane_ParamLimits

0x818a,	// (0x0004f367) bg_popup_call3_in_pane

0x81e8,	// (0x0004f3c5) popup_call3_audio_in_window_g1_ParamLimits

0x81e8,	// (0x0004f3c5) popup_call3_audio_in_window_g1

0x8200,	// (0x0004f3dd) popup_call3_audio_in_window_g2_ParamLimits

0x8200,	// (0x0004f3dd) popup_call3_audio_in_window_g2

0x8218,	// (0x0004f3f5) popup_call3_audio_in_window_g3_ParamLimits

0x8218,	// (0x0004f3f5) popup_call3_audio_in_window_g3

0x0003,

0xf5a5,	// (0x00056782) popup_call3_audio_in_window_g_ParamLimits

0xf5a5,	// (0x00056782) popup_call3_audio_in_window_g

0x8240,	// (0x0004f41d) popup_call3_audio_in_window_t1_ParamLimits

0x8240,	// (0x0004f41d) popup_call3_audio_in_window_t1

0x8268,	// (0x0004f445) popup_call3_audio_in_window_t2_ParamLimits

0x8268,	// (0x0004f445) popup_call3_audio_in_window_t2

0x8290,	// (0x0004f46d) popup_call3_audio_in_window_t3_ParamLimits

0x8290,	// (0x0004f46d) popup_call3_audio_in_window_t3

0x0002,

0xf5ae,	// (0x0005678b) popup_call3_audio_in_window_t_ParamLimits

0xf5ae,	// (0x0005678b) popup_call3_audio_in_window_t

0xd29d,	// (0x0005447a) bg_popup_call3_rect_pane

0xee36,	// (0x00056013) bg_popup_call3_rect_pane_g1

0x5a50,	// (0x0004cc2d) bg_popup_call3_rect_pane_g2

0xee3e,	// (0x0005601b) bg_popup_call3_rect_pane_g3

0xee46,	// (0x00056023) bg_popup_call3_rect_pane_g4

0xee4e,	// (0x0005602b) bg_popup_call3_rect_pane_g5

0xee56,	// (0x00056033) bg_popup_call3_rect_pane_g6

0xee5e,	// (0x0005603b) bg_popup_call3_rect_pane_g7

0x4bf8,	// (0x0004bdd5) mup_visualizer_osc_pane

0x4bf8,	// (0x0004bdd5) mup_visualizer_spec_pane

0x81aa,	// (0x0004f387) call3_video_qcif_pane_ParamLimits

0x81aa,	// (0x0004f387) call3_video_qcif_pane

0x81ba,	// (0x0004f397) call3_video_qcif_uncrop_pane_ParamLimits

0x81ba,	// (0x0004f397) call3_video_qcif_uncrop_pane

0x81c6,	// (0x0004f3a3) call3_video_subqcif_pane_ParamLimits

0x81c6,	// (0x0004f3a3) call3_video_subqcif_pane

0x81d8,	// (0x0004f3b5) call3_video_subqcif_uncrop_pane_ParamLimits

0x81d8,	// (0x0004f3b5) call3_video_subqcif_uncrop_pane

0x8230,	// (0x0004f40d) popup_call3_audio_in_window_g4_ParamLimits

0x8230,	// (0x0004f40d) popup_call3_audio_in_window_g4

0x4bf8,	// (0x0004bdd5) mup_spec_half_pane

0x4bf8,	// (0x0004bdd5) mup_spec_half_pane_cp

0x4bf8,	// (0x0004bdd5) mup_osc_middle_pane

0xd31e,	// (0x000544fb) mup_visualizer_osc_pane_g1

0x0b6e,	// (0x00047d4b) mup_spec_bar_pane_ParamLimits

0x0b6e,	// (0x00047d4b) mup_spec_bar_pane

0xd31e,	// (0x000544fb) mup_spec_bar_pane_g1

0xd31e,	// (0x000544fb) mup_spec_bar_pane_g2

0x0001,

0xf3c9,	// (0x000565a6) mup_spec_bar_pane_g

0x5b37,	// (0x0004cd14) aid_cale_week_size_cell_pane_ParamLimits

0x5b4c,	// (0x0004cd29) bg_cale_heading_pane_ParamLimits

0x5b64,	// (0x0004cd41) bg_cale_pane_cp01_ParamLimits

0x5b81,	// (0x0004cd5e) cale_week_corner_pane_ParamLimits

0x5b9b,	// (0x0004cd78) cale_week_day_heading_pane_ParamLimits

0x5bb3,	// (0x0004cd90) cale_week_scroll_pane_g1_ParamLimits

0x5bc6,	// (0x0004cda3) cale_week_scroll_pane_g2_ParamLimits

0x5bd9,	// (0x0004cdb6) cale_week_scroll_pane_g3_ParamLimits

0x5bec,	// (0x0004cdc9) cale_week_scroll_pane_g4_ParamLimits

0x5bff,	// (0x0004cddc) cale_week_scroll_pane_g5_ParamLimits

0x5c12,	// (0x0004cdef) cale_week_scroll_pane_g6_ParamLimits

0x5c25,	// (0x0004ce02) cale_week_scroll_pane_g7_ParamLimits

0x5c38,	// (0x0004ce15) cale_week_scroll_pane_g8_ParamLimits

0x5c4b,	// (0x0004ce28) cale_week_scroll_pane_g9_ParamLimits

0x5c5e,	// (0x0004ce3b) cale_week_scroll_pane_g10_ParamLimits

0x5c71,	// (0x0004ce4e) cale_week_scroll_pane_g11_ParamLimits

0x5c84,	// (0x0004ce61) cale_week_scroll_pane_g12_ParamLimits

0x5c97,	// (0x0004ce74) cale_week_scroll_pane_g13_ParamLimits

0x5caa,	// (0x0004ce87) cale_week_scroll_pane_g14_ParamLimits

0x5cbd,	// (0x0004ce9a) cale_week_scroll_pane_g15_ParamLimits

0xf145,	// (0x00056322) cale_week_scroll_pane_g_ParamLimits

0x5ce3,	// (0x0004cec0) cale_week_time_pane_ParamLimits

0x5cf6,	// (0x0004ced3) grid_cale_week_pane_ParamLimits

0x5d0b,	// (0x0004cee8) listscroll_cale_week_pane_t1

0x5d1d,	// (0x0004cefa) scroll_pane_cp08_ParamLimits

0x6813,	// (0x0004d9f0) cale_month_corner_pane_ParamLimits

0xd616,	// (0x000547f3) cale_month_pane_t1

0x6b29,	// (0x0004dd06) cale_month_week_pane_ParamLimits

0xd948,	// (0x00054b25) popup_call_status_window_g1_ParamLimits

0x7324,	// (0x0004e501) popup_call_status_window_g2_ParamLimits

0x7330,	// (0x0004e50d) popup_call_status_window_g3_ParamLimits

0xf2d6,	// (0x000564b3) popup_call_status_window_g_ParamLimits

0xd999,	// (0x00054b76) aid_call2_pane

0x7852,	// (0x0004ea2f) msg_header_pane_g1

0x79dc,	// (0x0004ebb9) postcard_address2_pane_ParamLimits

0x79dc,	// (0x0004ebb9) postcard_address2_pane

0x79e8,	// (0x0004ebc5) postcard_message2_pane_ParamLimits

0x79e8,	// (0x0004ebc5) postcard_message2_pane

0x813d,	// (0x0004f31a) message2_row_pane_ParamLimits

0x813d,	// (0x0004f31a) message2_row_pane

0x8155,	// (0x0004f332) address2_row_pane_ParamLimits

0x8155,	// (0x0004f332) address2_row_pane

0x0b3b,	// (0x00047d18) postcard_message2_row_pane_g1

0x0b43,	// (0x00047d20) postcard_message2_row_pane_t1

0x0b3b,	// (0x00047d18) address2_row_pane_g1

0x0b43,	// (0x00047d20) address2_row_pane_t1

0x61a5,	// (0x0004d382) aid_size_cell_vorec

0x531b,	// (0x0004c4f8) main_rss_pane

0x0b51,	// (0x00047d2e) rss_list_single_pane_ParamLimits

0x0b51,	// (0x00047d2e) rss_list_single_pane

0x0b5f,	// (0x00047d3c) rss_list_single_pane_t1

0x0b5f,	// (0x00047d3c) rss_list_single_pane_t2

0x0001,

0xf599,	// (0x00056776) rss_list_single_pane_t

0x531b,	// (0x0004c4f8) main_camera2_pane

0x531b,	// (0x0004c4f8) main_video2_pane

0x4e44,	// (0x0004c021) cams_zoom_pane_cp2_ParamLimits

0x4e44,	// (0x0004c021) cams_zoom_pane_cp2

0x4e44,	// (0x0004c021) image2_vga_pane_ParamLimits

0x4e44,	// (0x0004c021) image2_vga_pane

0xd9cc,	// (0x00054ba9) main_camera2_pane_g1_ParamLimits

0xd9cc,	// (0x00054ba9) main_camera2_pane_g1

0xd9cc,	// (0x00054ba9) main_camera2_pane_g2_ParamLimits

0xd9cc,	// (0x00054ba9) main_camera2_pane_g2

0xd9cc,	// (0x00054ba9) main_camera2_pane_g3_ParamLimits

0xd9cc,	// (0x00054ba9) main_camera2_pane_g3

0xd9cc,	// (0x00054ba9) main_camera2_pane_g4_ParamLimits

0xd9cc,	// (0x00054ba9) main_camera2_pane_g4

0xd9cc,	// (0x00054ba9) main_camera2_pane_g5_ParamLimits

0xd9cc,	// (0x00054ba9) main_camera2_pane_g5

0xd9cc,	// (0x00054ba9) main_camera2_pane_g6_ParamLimits

0xd9cc,	// (0x00054ba9) main_camera2_pane_g6

0xd9cc,	// (0x00054ba9) main_camera2_pane_g7_ParamLimits

0xd9cc,	// (0x00054ba9) main_camera2_pane_g7

0xd9cc,	// (0x00054ba9) main_camera2_pane_g8_ParamLimits

0xd9cc,	// (0x00054ba9) main_camera2_pane_g8

0x0008,

0xf5b5,	// (0x00056792) main_camera2_pane_g_ParamLimits

0xf5b5,	// (0x00056792) main_camera2_pane_g

0x82e5,	// (0x0004f4c2) main_camera2_pane_t1_ParamLimits

0x82e5,	// (0x0004f4c2) main_camera2_pane_t1

0x82e5,	// (0x0004f4c2) main_camera2_pane_t2_ParamLimits

0x82e5,	// (0x0004f4c2) main_camera2_pane_t2

0x82e5,	// (0x0004f4c2) main_camera2_pane_t3_ParamLimits

0x82e5,	// (0x0004f4c2) main_camera2_pane_t3

0x82e5,	// (0x0004f4c2) main_camera2_pane_t4_ParamLimits

0x82e5,	// (0x0004f4c2) main_camera2_pane_t4

0x0006,

0xf5c8,	// (0x000567a5) main_camera2_pane_t_ParamLimits

0xf5c8,	// (0x000567a5) main_camera2_pane_t

0x830d,	// (0x0004f4ea) cams_zoom_pane_cp4_ParamLimits

0x830d,	// (0x0004f4ea) cams_zoom_pane_cp4

0x7fc1,	// (0x0004f19e) image2_cif_pane_ParamLimits

0x7fc1,	// (0x0004f19e) image2_cif_pane

0x4e44,	// (0x0004c021) image2_subqcif_pane_ParamLimits

0x4e44,	// (0x0004c021) image2_subqcif_pane

0x831b,	// (0x0004f4f8) main_video2_pane_g1_ParamLimits

0x831b,	// (0x0004f4f8) main_video2_pane_g1

0x831b,	// (0x0004f4f8) main_video2_pane_g2_ParamLimits

0x831b,	// (0x0004f4f8) main_video2_pane_g2

0x831b,	// (0x0004f4f8) main_video2_pane_g3_ParamLimits

0x831b,	// (0x0004f4f8) main_video2_pane_g3

0x831b,	// (0x0004f4f8) main_video2_pane_g4_ParamLimits

0x831b,	// (0x0004f4f8) main_video2_pane_g4

0x831b,	// (0x0004f4f8) main_video2_pane_g5_ParamLimits

0x831b,	// (0x0004f4f8) main_video2_pane_g5

0x831b,	// (0x0004f4f8) main_video2_pane_g6_ParamLimits

0x831b,	// (0x0004f4f8) main_video2_pane_g6

0x0005,

0xf5d7,	// (0x000567b4) main_video2_pane_g_ParamLimits

0xf5d7,	// (0x000567b4) main_video2_pane_g

0x8329,	// (0x0004f506) main_video2_pane_t1_ParamLimits

0x8329,	// (0x0004f506) main_video2_pane_t1

0x8329,	// (0x0004f506) main_video2_pane_t2_ParamLimits

0x8329,	// (0x0004f506) main_video2_pane_t2

0x8329,	// (0x0004f506) main_video2_pane_t3_ParamLimits

0x8329,	// (0x0004f506) main_video2_pane_t3

0x0002,

0xf5e4,	// (0x000567c1) main_video2_pane_t_ParamLimits

0xf5e4,	// (0x000567c1) main_video2_pane_t

0x7ed5,	// (0x0004f0b2) call_muted_g2

0x0001,

0xf58b,	// (0x00056768) call_muted_g

0x531b,	// (0x0004c4f8) main_mup2_pane

0x5643,	// (0x0004c820) main_mup2_pane_g1_ParamLimits

0x5643,	// (0x0004c820) main_mup2_pane_g1

0x5643,	// (0x0004c820) main_mup2_pane_g2_ParamLimits

0x5643,	// (0x0004c820) main_mup2_pane_g2

0x1fb8,	// (0x00049195) main_mup_pane_g13_cp1

0x4e5a,	// (0x0004c037) mup_volume_pane_cp1

0x5643,	// (0x0004c820) main_mup2_pane_g4_ParamLimits

0x5643,	// (0x0004c820) main_mup2_pane_g4

0x5643,	// (0x0004c820) main_mup2_pane_g5_ParamLimits

0x5643,	// (0x0004c820) main_mup2_pane_g5

0x5643,	// (0x0004c820) main_mup2_pane_g6_ParamLimits

0x5643,	// (0x0004c820) main_mup2_pane_g6

0x5643,	// (0x0004c820) main_mup2_pane_g7_ParamLimits

0x5643,	// (0x0004c820) main_mup2_pane_g7

0x0006,

0xf5eb,	// (0x000567c8) main_mup2_pane_g_ParamLimits

0xf5eb,	// (0x000567c8) main_mup2_pane_g

0x5651,	// (0x0004c82e) main_mup2_pane_t1_ParamLimits

0x5651,	// (0x0004c82e) main_mup2_pane_t1

0x5651,	// (0x0004c82e) main_mup2_pane_t2_ParamLimits

0x5651,	// (0x0004c82e) main_mup2_pane_t2

0x5651,	// (0x0004c82e) main_mup2_pane_t3_ParamLimits

0x5651,	// (0x0004c82e) main_mup2_pane_t3

0x5651,	// (0x0004c82e) main_mup2_pane_t4_ParamLimits

0x5651,	// (0x0004c82e) main_mup2_pane_t4

0x5651,	// (0x0004c82e) main_mup2_pane_t5_ParamLimits

0x5651,	// (0x0004c82e) main_mup2_pane_t5

0x5651,	// (0x0004c82e) main_mup2_pane_t6_ParamLimits

0x5651,	// (0x0004c82e) main_mup2_pane_t6

0x0005,

0xf5fa,	// (0x000567d7) main_mup2_pane_t_ParamLimits

0xf5fa,	// (0x000567d7) main_mup2_pane_t

0x0c33,	// (0x00047e10) mup2_visualizer_pane_ParamLimits

0x0c33,	// (0x00047e10) mup2_visualizer_pane

0x0c33,	// (0x00047e10) mup_progress_pane_cp_ParamLimits

0x0c33,	// (0x00047e10) mup_progress_pane_cp

0x83f0,	// (0x0004f5cd) mup_volume_pane_cp_ParamLimits

0x83f0,	// (0x0004f5cd) mup_volume_pane_cp

0x5619,	// (0x0004c7f6) mup2_visualizer_pane_g1_ParamLimits

0x5619,	// (0x0004c7f6) mup2_visualizer_pane_g1

0x5627,	// (0x0004c804) mup2_visualizer_pane_g2_ParamLimits

0x5627,	// (0x0004c804) mup2_visualizer_pane_g2

0x5627,	// (0x0004c804) mup2_visualizer_pane_g3_ParamLimits

0x5627,	// (0x0004c804) mup2_visualizer_pane_g3

0x0002,

0xf0be,	// (0x0005629b) mup2_visualizer_pane_g_ParamLimits

0xf0be,	// (0x0005629b) mup2_visualizer_pane_g

0x61a5,	// (0x0004d382) aid_size_cell_fmradio

0x7fb7,	// (0x0004f194) aid_height_parent_landcape

0xd473,	// (0x00054650) wml_content_pane_cp

0xd47b,	// (0x00054658) wml_tabs_pane

0xd484,	// (0x00054661) popup_wml_miniature_window

0xd48c,	// (0x00054669) scroll_pane_cp021

0xd4a0,	// (0x0005467d) wml_content_pane_comp8

0x531b,	// (0x0004c4f8) bg_popup_sub_pane_cp05

0x0c57,	// (0x00047e34) popup_wml_miniature_window_g1

0x0c5f,	// (0x00047e3c) wml_miniature_view_pane

0x833d,	// (0x0004f51a) aid_size_wml_view

0x8345,	// (0x0004f522) wml_miniature_view_pane_g1

0x834e,	// (0x0004f52b) wml_miniature_view_pane_g2

0x8357,	// (0x0004f534) wml_miniature_view_pane_g3

0x835f,	// (0x0004f53c) wml_miniature_view_pane_g4

0x8367,	// (0x0004f544) wml_miniature_view_pane_g5

0x836f,	// (0x0004f54c) wml_miniature_view_pane_g6

0x8377,	// (0x0004f554) wml_miniature_view_pane_g7

0x837f,	// (0x0004f55c) wml_miniature_view_pane_g8

0x0007,

0xf607,	// (0x000567e4) wml_miniature_view_pane_g

0x0c67,	// (0x00047e44) background_graphic_ParamLimits

0x0c67,	// (0x00047e44) background_graphic

0x0c73,	// (0x00047e50) wml_tabs_2_pane

0x0c7c,	// (0x00047e59) wml_tabs_3_pane_ParamLimits

0x0c7c,	// (0x00047e59) wml_tabs_3_pane

0x0c8e,	// (0x00047e6b) wml_tabs_4_pane_ParamLimits

0x0c8e,	// (0x00047e6b) wml_tabs_4_pane

0x0ca4,	// (0x00047e81) wml_tabs_5_pane_ParamLimits

0x0ca4,	// (0x00047e81) wml_tabs_5_pane

0x0cbe,	// (0x00047e9b) wml_tabs_pane_g2_ParamLimits

0x0cbe,	// (0x00047e9b) wml_tabs_pane_g2

0x0cd3,	// (0x00047eb0) wml_tabs_pane_g3_ParamLimits

0x0cd3,	// (0x00047eb0) wml_tabs_pane_g3

0x0ce8,	// (0x00047ec5) wml_tabs_2_active_pane_ParamLimits

0x0ce8,	// (0x00047ec5) wml_tabs_2_active_pane

0x0ce8,	// (0x00047ec5) wml_tabs_2_passive_pane_ParamLimits

0x0ce8,	// (0x00047ec5) wml_tabs_2_passive_pane

0x8387,	// (0x0004f564) wml_tabs_3_active_pane_cp_ParamLimits

0x8387,	// (0x0004f564) wml_tabs_3_active_pane_cp

0x8398,	// (0x0004f575) wml_tabs_3_passive_pane_ParamLimits

0x8398,	// (0x0004f575) wml_tabs_3_passive_pane

0x83a9,	// (0x0004f586) wml_tabs_3_passive_pane_cp_ParamLimits

0x83a9,	// (0x0004f586) wml_tabs_3_passive_pane_cp

0x83ba,	// (0x0004f597) tabs_4_active_pane

0x83c2,	// (0x0004f59f) tabs_4_passive_pane

0x83ca,	// (0x0004f5a7) tabs_4_passive_pane_cp

0x83d2,	// (0x0004f5af) tabs_4_passive_pane_cp2

0x7ddb,	// (0x0004efb8) aid_height_text

0x0c33,	// (0x00047e10) mup_volume_cont_pane_ParamLimits

0x0c33,	// (0x00047e10) mup_volume_cont_pane

0x5598,	// (0x0004c775) aid_size_cell_pinb

0x4bf8,	// (0x0004bdd5) aid_size_list_pinb

0x0c33,	// (0x00047e10) mup2_volume_cont_pane_ParamLimits

0x0c33,	// (0x00047e10) mup2_volume_cont_pane

0x83da,	// (0x0004f5b7) mup2_volume_cont_pane_g1_ParamLimits

0x83da,	// (0x0004f5b7) mup2_volume_cont_pane_g1

0x4c12,	// (0x0004bdef) aid_size_cell_touch_ParamLimits

0x4c12,	// (0x0004bdef) aid_size_cell_touch

0x4e64,	// (0x0004c041) touch_pane_ParamLimits

0x4e64,	// (0x0004c041) touch_pane

0x4e5a,	// (0x0004c037) main_rss2_pane

0x0d15,	// (0x00047ef2) listscroll_rss2_pane

0x0d1e,	// (0x00047efb) rss2_navigation_pane

0x0d26,	// (0x00047f03) list_rss2_pane

0xd9c4,	// (0x00054ba1) scroll_pane_cp22

0x0d2e,	// (0x00047f0b) rss2_navigation_pane_g1

0x0d37,	// (0x00047f14) rss2_navigation_pane_g2

0x0d3f,	// (0x00047f1c) rss2_navigation_pane_g3

0x0002,

0xf618,	// (0x000567f5) rss2_navigation_pane_g

0x0d47,	// (0x00047f24) rss2_navigation_pane_t1

0x8406,	// (0x0004f5e3) rss2_list_single_pane_ParamLimits

0x8406,	// (0x0004f5e3) rss2_list_single_pane

0x0d55,	// (0x00047f32) rss2_list_single_pane_t2

0x0d63,	// (0x00047f40) rss2_list_single_pane_t3_ParamLimits

0x0d63,	// (0x00047f40) rss2_list_single_pane_t3

0x0d80,	// (0x00047f5d) rss2_list_single_pane_t4

0x71c7,	// (0x0004e3a4) smil_status_pane_g1

0x7fc1,	// (0x0004f19e) main_image2_pane_ParamLimits

0x7fc1,	// (0x0004f19e) main_image2_pane

0xd9cc,	// (0x00054ba9) main_camera2_pane_g9_ParamLimits

0xd9cc,	// (0x00054ba9) main_camera2_pane_g9

0x82e5,	// (0x0004f4c2) main_camera2_pane_t5_ParamLimits

0x82e5,	// (0x0004f4c2) main_camera2_pane_t5

0x82f9,	// (0x0004f4d6) main_camera2_pane_t6_ParamLimits

0x82f9,	// (0x0004f4d6) main_camera2_pane_t6

0x841d,	// (0x0004f5fa) main_image2_pane_g1_ParamLimits

0x841d,	// (0x0004f5fa) main_image2_pane_g1

0x7b88,	// (0x0004ed65) smil2_video_pane_ParamLimits

0x7b88,	// (0x0004ed65) smil2_video_pane

0x4b14,	// (0x0004bcf1) aid_zoom_text_primary_cp

0x4dfb,	// (0x0004bfd8) popup_preview_fixed_window

0xd3cd,	// (0x000545aa) im_reading_pane_g1

0x82af,	// (0x0004f48c) cams2_bc_adjust_pane_cp_ParamLimits

0x82af,	// (0x0004f48c) cams2_bc_adjust_pane_cp

0x4e44,	// (0x0004c021) cams2_bc_adjust_pane_ParamLimits

0x4e44,	// (0x0004c021) cams2_bc_adjust_pane

0x1fb8,	// (0x00049195) cams2_bc_adjust_pane_g1

0x4e5a,	// (0x0004c037) cams2_slider_pane

0x1fb8,	// (0x00049195) cams2_slider_pane_g1

0x1fb8,	// (0x00049195) cams2_slider_pane_g2

0x0006,

0xf61f,	// (0x000567fc) cams2_slider_pane_g

0x567f,	// (0x0004c85c) calc_display_pane_ParamLimits

0x5697,	// (0x0004c874) calc_paper_pane_ParamLimits

0x56b3,	// (0x0004c890) grid_calc_pane_ParamLimits

0x73a2,	// (0x0004e57f) popup_clock_digital_window_t1_ParamLimits

0xdf2c,	// (0x00055109) main_image_pane_t1

0x5665,	// (0x0004c842) aid_size_cell_calc_ParamLimits

0x5665,	// (0x0004c842) aid_size_cell_calc

0x7ff2,	// (0x0004f1cf) popup_blid_sat_info2_window_ParamLimits

0x7ff2,	// (0x0004f1cf) popup_blid_sat_info2_window

0x0d8e,	// (0x00047f6b) aid_size_cell_blid

0x0c33,	// (0x00047e10) bg_popup_window_pane_cp07

0x0dab,	// (0x00047f88) grid_popup_blid_pane

0x0db3,	// (0x00047f90) heading_pane_cp05_ParamLimits

0x0db3,	// (0x00047f90) heading_pane_cp05

0x0e7b,	// (0x00048058) cell_popup_blid_pane_ParamLimits

0x0e7b,	// (0x00048058) cell_popup_blid_pane

0x0e9b,	// (0x00048078) cell_popup_blid_pane_g1

0x0ea3,	// (0x00048080) cell_popup_blid_pane_t1

0x0c33,	// (0x00047e10) mup2_indicator_pane_ParamLimits

0x0c33,	// (0x00047e10) mup2_indicator_pane

0x4bf8,	// (0x0004bdd5) mup2_visualizer_osc_pane

0x0c41,	// (0x00047e1e) mup2_visualizer_spec_pane_ParamLimits

0x0c41,	// (0x00047e1e) mup2_visualizer_spec_pane

0x4bf8,	// (0x0004bdd5) mup2_spec_half_pane

0x4bf8,	// (0x0004bdd5) mup2_spec_half_pane_cp

0x0eb1,	// (0x0004808e) mup2_spec_bar_pane_ParamLimits

0x0eb1,	// (0x0004808e) mup2_spec_bar_pane

0xd31e,	// (0x000544fb) mup2_spec_bar_pane_g1

0x0ed0,	// (0x000480ad) mup2_spec_bar_pane_g2

0x0001,

0xf645,	// (0x00056822) mup2_spec_bar_pane_g

0x4bf8,	// (0x0004bdd5) mup2_osc_middle_pane

0xd31e,	// (0x000544fb) mup2_visualizer_osc_pane_g1

0x4ed1,	// (0x0004c0ae) popup_number_entry_window_t1_ParamLimits

0x4ee4,	// (0x0004c0c1) popup_number_entry_window_t2_ParamLimits

0x4ef6,	// (0x0004c0d3) popup_number_entry_window_t3_ParamLimits

0x4f08,	// (0x0004c0e5) popup_number_entry_window_t5_ParamLimits

0x4f08,	// (0x0004c0e5) popup_number_entry_window_t5

0xf05f,	// (0x0005623c) popup_number_entry_window_t_ParamLimits

0x4f3d,	// (0x0004c11a) text_title_cp2_ParamLimits

0x78c6,	// (0x0004eaa3) aid_hotspot_pointer_text2_pane

0x7958,	// (0x0004eb35) main_viewer_pane_g9_ParamLimits

0x7958,	// (0x0004eb35) main_viewer_pane_g9

0xd616,	// (0x000547f3) cale_month_pane_t1_ParamLimits

0xd63c,	// (0x00054819) bg_cale_pane_ParamLimits

0xd654,	// (0x00054831) list_cale_pane_ParamLimits

0xd665,	// (0x00054842) listscroll_cale_day_pane_t1

0xd677,	// (0x00054854) scroll_pane_cp09_ParamLimits

0x764b,	// (0x0004e828) main_mup_eq_pane_t1_ParamLimits

0x764b,	// (0x0004e828) main_mup_eq_pane_t1

0x7661,	// (0x0004e83e) main_mup_eq_pane_t2_ParamLimits

0x7661,	// (0x0004e83e) main_mup_eq_pane_t2

0x7677,	// (0x0004e854) main_mup_eq_pane_t3_ParamLimits

0x7677,	// (0x0004e854) main_mup_eq_pane_t3

0x768d,	// (0x0004e86a) main_mup_eq_pane_t4_ParamLimits

0x768d,	// (0x0004e86a) main_mup_eq_pane_t4

0x76a3,	// (0x0004e880) main_mup_eq_pane_t5_ParamLimits

0x76a3,	// (0x0004e880) main_mup_eq_pane_t5

0x76b9,	// (0x0004e896) main_mup_eq_pane_t6_ParamLimits

0x76b9,	// (0x0004e896) main_mup_eq_pane_t6

0x76cb,	// (0x0004e8a8) main_mup_eq_pane_t7_ParamLimits

0x76cb,	// (0x0004e8a8) main_mup_eq_pane_t7

0x76dd,	// (0x0004e8ba) main_mup_eq_pane_t8_ParamLimits

0x76dd,	// (0x0004e8ba) main_mup_eq_pane_t8

0x76ef,	// (0x0004e8cc) main_mup_eq_pane_t9_ParamLimits

0x76ef,	// (0x0004e8cc) main_mup_eq_pane_t9

0x7705,	// (0x0004e8e2) main_mup_eq_pane_t10_ParamLimits

0x7705,	// (0x0004e8e2) main_mup_eq_pane_t10

0x0009,

0xf3d5,	// (0x000565b2) main_mup_eq_pane_t_ParamLimits

0xf3d5,	// (0x000565b2) main_mup_eq_pane_t

0x7798,	// (0x0004e975) mup_equalizer_pane_cp5_ParamLimits

0x77aa,	// (0x0004e987) mup_equalizer_pane_cp6_ParamLimits

0x77bc,	// (0x0004e999) mup_equalizer_pane_cp7_ParamLimits

0x4e5a,	// (0x0004c037) main_gallery_pane

0x0b8d,	// (0x00047d6a) smil2_volume_pane

0x0ba8,	// (0x00047d85) smil_status_volume_pane_g1_ParamLimits

0x0b95,	// (0x00047d72) smil_status_volume_pane_g2_ParamLimits

0x8168,	// (0x0004f345) smil_status_volume_pane_g3_ParamLimits

0xf59e,	// (0x0005677b) smil_status_volume_pane_g_ParamLimits

0x0c33,	// (0x00047e10) bg_popup_window_pane_cp07_ParamLimits

0x0d96,	// (0x00047f73) blid_firmament_pane

0x5635,	// (0x0004c812) aid_size_cell_gallery_ParamLimits

0x5635,	// (0x0004c812) aid_size_cell_gallery

0x8429,	// (0x0004f606) grid_gallery_pane_ParamLimits

0x8429,	// (0x0004f606) grid_gallery_pane

0x8438,	// (0x0004f615) cell_gallery_pane_ParamLimits

0x8438,	// (0x0004f615) cell_gallery_pane

0xdd6f,	// (0x00054f4c) bg_cell_gallery_focus_pane_ParamLimits

0xdd6f,	// (0x00054f4c) bg_cell_gallery_focus_pane

0x5619,	// (0x0004c7f6) cell_gallery_pane_g1_ParamLimits

0x5619,	// (0x0004c7f6) cell_gallery_pane_g1

0x5619,	// (0x0004c7f6) cell_gallery_pane_g2_ParamLimits

0x5619,	// (0x0004c7f6) cell_gallery_pane_g2

0x5619,	// (0x0004c7f6) cell_gallery_pane_g3_ParamLimits

0x5619,	// (0x0004c7f6) cell_gallery_pane_g3

0x5627,	// (0x0004c804) cell_gallery_pane_g4_ParamLimits

0x5627,	// (0x0004c804) cell_gallery_pane_g4

0x0003,

0xf64a,	// (0x00056827) cell_gallery_pane_g_ParamLimits

0xf64a,	// (0x00056827) cell_gallery_pane_g

0x0eda,	// (0x000480b7) bg_cell_gallery_focus_pane_g1

0x0ee2,	// (0x000480bf) bg_cell_gallery_focus_pane_g2

0x0eea,	// (0x000480c7) bg_cell_gallery_focus_pane_g3

0x0ef2,	// (0x000480cf) bg_cell_gallery_focus_pane_g4

0x0efa,	// (0x000480d7) bg_cell_gallery_focus_pane_g5

0x0f02,	// (0x000480df) bg_cell_gallery_focus_pane_g6

0x0f0a,	// (0x000480e7) bg_cell_gallery_focus_pane_g7

0x0f12,	// (0x000480ef) bg_cell_gallery_focus_pane_g8

0x0007,

0xf653,	// (0x00056830) bg_cell_gallery_focus_pane_g

0x0f1a,	// (0x000480f7) aid_firma_cardinal

0x0f2e,	// (0x0004810b) blid_firmament_pane_t1

0x0f45,	// (0x00048122) blid_firmament_pane_t2

0x0f5c,	// (0x00048139) blid_firmament_pane_t3

0x0f73,	// (0x00048150) blid_firmament_pane_t4

0x0003,

0xf664,	// (0x00056841) blid_firmament_pane_t

0x0f8a,	// (0x00048167) blid_sat_info_pane

0xd31e,	// (0x000544fb) blid_sat_info_pane_g1

0xd31e,	// (0x000544fb) blid_sat_info_pane_g2

0x0001,

0xf3c9,	// (0x000565a6) blid_sat_info_pane_g

0x0f9a,	// (0x00048177) blid_sat_info_pane_t1

0x0fa8,	// (0x00048185) smil2_volume_content_pane

0x0fb1,	// (0x0004818e) smil2_volume_pane_g1

0x0fb9,	// (0x00048196) smil2_volume_content_pane_g1

0x0fc2,	// (0x0004819f) smil2_volume_content_pane_g2

0x0fcb,	// (0x000481a8) smil2_volume_content_pane_g3

0x0fd4,	// (0x000481b1) smil2_volume_content_pane_g4

0x0fdd,	// (0x000481ba) smil2_volume_content_pane_g5

0x0fe6,	// (0x000481c3) smil2_volume_content_pane_g6

0x0fef,	// (0x000481cc) smil2_volume_content_pane_g7

0x0ff8,	// (0x000481d5) smil2_volume_content_pane_g8

0x1001,	// (0x000481de) smil2_volume_content_pane_g9

0x100a,	// (0x000481e7) smil2_volume_content_pane_g10

0x0009,

0xf66d,	// (0x0005684a) smil2_volume_content_pane_g

0x5d88,	// (0x0004cf65) cale_week_day_heading_pane_t1_ParamLimits

0x5dc3,	// (0x0004cfa0) cale_week_day_heading_pane_t2_ParamLimits

0x5dfe,	// (0x0004cfdb) cale_week_day_heading_pane_t3_ParamLimits

0x5e39,	// (0x0004d016) cale_week_day_heading_pane_t4_ParamLimits

0x5e74,	// (0x0004d051) cale_week_day_heading_pane_t5_ParamLimits

0x5eaf,	// (0x0004d08c) cale_week_day_heading_pane_t6_ParamLimits

0x5eea,	// (0x0004d0c7) cale_week_day_heading_pane_t7_ParamLimits

0xf166,	// (0x00056343) cale_week_day_heading_pane_t_ParamLimits

0x5f25,	// (0x0004d102) bg_cale_side_pane_ParamLimits

0x5f33,	// (0x0004d110) cale_week_time_pane_t1_ParamLimits

0x5f6d,	// (0x0004d14a) cale_week_time_pane_t2_ParamLimits

0x5fa7,	// (0x0004d184) cale_week_time_pane_t3_ParamLimits

0x5fe1,	// (0x0004d1be) cale_week_time_pane_t4_ParamLimits

0x601b,	// (0x0004d1f8) cale_week_time_pane_t5_ParamLimits

0x6055,	// (0x0004d232) cale_week_time_pane_t6_ParamLimits

0x608f,	// (0x0004d26c) cale_week_time_pane_t7_ParamLimits

0x60c9,	// (0x0004d2a6) cale_week_time_pane_t8_ParamLimits

0xf175,	// (0x00056352) cale_week_time_pane_t_ParamLimits

0x6103,	// (0x0004d2e0) cell_cale_week_pane_g2_ParamLimits

0x5f25,	// (0x0004d102) bg_cale_side_pane_cp01_ParamLimits

0x6f4e,	// (0x0004e12b) cale_month_week_pane_t1_ParamLimits

0x6f87,	// (0x0004e164) cale_month_week_pane_t2_ParamLimits

0x6fc0,	// (0x0004e19d) cale_month_week_pane_t3_ParamLimits

0x6ff9,	// (0x0004e1d6) cale_month_week_pane_t4_ParamLimits

0x7032,	// (0x0004e20f) cale_month_week_pane_t5_ParamLimits

0x706b,	// (0x0004e248) cale_month_week_pane_t6_ParamLimits

0xf243,	// (0x00056420) cale_month_week_pane_t_ParamLimits

0x7192,	// (0x0004e36f) cell_cale_month_pane_g1_ParamLimits

0x4e5a,	// (0x0004c037) main_cale_event_viewer_pane

0x4bf8,	// (0x0004bdd5) listscroll_cale_event_viewer_pane

0x1013,	// (0x000481f0) list_cale_ev_pane

0x101b,	// (0x000481f8) scroll_pane_cp023

0x8454,	// (0x0004f631) field_cale_ev_pane_ParamLimits

0x8454,	// (0x0004f631) field_cale_ev_pane

0x1027,	// (0x00048204) field_cale_ev_content_pane_ParamLimits

0x1027,	// (0x00048204) field_cale_ev_content_pane

0x1033,	// (0x00048210) field_cale_ev_pane_g1_ParamLimits

0x1033,	// (0x00048210) field_cale_ev_pane_g1

0x103f,	// (0x0004821c) field_cale_ev_pane_g2_ParamLimits

0x103f,	// (0x0004821c) field_cale_ev_pane_g2

0x1057,	// (0x00048234) field_cale_ev_pane_g3_ParamLimits

0x1057,	// (0x00048234) field_cale_ev_pane_g3

0x0002,

0xf682,	// (0x0005685f) field_cale_ev_pane_g_ParamLimits

0xf682,	// (0x0005685f) field_cale_ev_pane_g

0x106f,	// (0x0004824c) field_cale_ev_pane_t1_ParamLimits

0x106f,	// (0x0004824c) field_cale_ev_pane_t1

0x846e,	// (0x0004f64b) field_cale_ev_content_pane_t1_ParamLimits

0x846e,	// (0x0004f64b) field_cale_ev_content_pane_t1

0xde12,	// (0x00054fef) bg_button_pane_cp01

0x5b1e,	// (0x0004ccfb) listscroll_cale_week_pane_ParamLimits

0x5b2e,	// (0x0004cd0b) popup_toolbar_window_cp01

0x5d0b,	// (0x0004cee8) listscroll_cale_week_pane_t1_ParamLimits

0x5b1e,	// (0x0004ccfb) listscroll_cale_day_pane_ParamLimits

0x5b2e,	// (0x0004cd0b) popup_toolbar_window_cp02

0xd665,	// (0x00054842) listscroll_cale_day_pane_t1_ParamLimits

0x5b1e,	// (0x0004ccfb) main_cale_month_pane_ParamLimits

0x80c5,	// (0x0004f2a2) popup_toolbar_window_cp03_ParamLimits

0x80c5,	// (0x0004f2a2) popup_toolbar_window_cp03

0x7ab0,	// (0x0004ec8d) main_image_pane_g2_ParamLimits

0x7ab0,	// (0x0004ec8d) main_image_pane_g2

0x7abc,	// (0x0004ec99) main_image_pane_g3_ParamLimits

0x7abc,	// (0x0004ec99) main_image_pane_g3

0x0002,

0xf467,	// (0x00056644) main_image_pane_g_ParamLimits

0xf467,	// (0x00056644) main_image_pane_g

0xdf2c,	// (0x00055109) main_image_pane_t1_ParamLimits

0x7ac8,	// (0x0004eca5) main_image_pane_t2_ParamLimits

0x7ac8,	// (0x0004eca5) main_image_pane_t2

0x7ada,	// (0x0004ecb7) main_image_pane_t3_ParamLimits

0x7ada,	// (0x0004ecb7) main_image_pane_t3

0x7aec,	// (0x0004ecc9) main_image_pane_t4_ParamLimits

0x7aec,	// (0x0004ecc9) main_image_pane_t4

0x0003,

0xf46e,	// (0x0005664b) main_image_pane_t_ParamLimits

0xf46e,	// (0x0005664b) main_image_pane_t

0x7afe,	// (0x0004ecdb) popup_image_details_window_cp01

0x7b06,	// (0x0004ece3) popup_toobar_trans_pane_cp01_ParamLimits

0x7b06,	// (0x0004ece3) popup_toobar_trans_pane_cp01

0x8039,	// (0x0004f216) popup_image_details_window_ParamLimits

0x8039,	// (0x0004f216) popup_image_details_window

0x8045,	// (0x0004f222) popup_image_focus_window

0x4e44,	// (0x0004c021) camera2_autofocus_pane_ParamLimits

0x4e44,	// (0x0004c021) camera2_autofocus_pane

0x4bf8,	// (0x0004bdd5) bg_popup_sub_pane_cp06

0x1086,	// (0x00048263) popup_image_focus_window_g1

0x108e,	// (0x0004826b) popup_image_focus_window_g2

0x1096,	// (0x00048273) popup_image_focus_window_g3

0x109e,	// (0x0004827b) popup_image_focus_window_g4

0x0003,

0xf689,	// (0x00056866) popup_image_focus_window_g

0x10a6,	// (0x00048283) popup_image_focus_window_t1

0x10b4,	// (0x00048291) popup_image_focus_window_t2

0x10c3,	// (0x000482a0) popup_image_focus_window_t3

0x0002,

0xf692,	// (0x0005686f) popup_image_focus_window_t

0x5619,	// (0x0004c7f6) camera2_autofocus_pane_g1

0xdd6f,	// (0x00054f4c) bg_tb_trans_pane_cp01

0x10d1,	// (0x000482ae) popup_image_details_window_g1

0x10e4,	// (0x000482c1) popup_image_details_window_g2

0x0002,

0xf6a4,	// (0x00056881) popup_image_details_window_g

0x110d,	// (0x000482ea) popup_image_details_window_t1

0x111f,	// (0x000482fc) popup_image_details_window_t2

0x1138,	// (0x00048315) popup_image_details_window_t3

0x114c,	// (0x00048329) popup_image_details_window_t4

0x1167,	// (0x00048344) popup_image_details_window_t5

0x0004,

0xf6ab,	// (0x00056888) popup_image_details_window_t

0x57b8,	// (0x0004c995) bg_calc_paper_pane_ParamLimits

0x4e5a,	// (0x0004c037) grid_highlight_pane_cp013

0x57d0,	// (0x0004c9ad) list_calc_pane_ParamLimits

0x57e2,	// (0x0004c9bf) scroll_pane_cp024

0x57ea,	// (0x0004c9c7) bg_calc_display_pane_ParamLimits

0x57f6,	// (0x0004c9d3) calc_display_pane_t1_ParamLimits

0x580b,	// (0x0004c9e8) calc_display_pane_t2_ParamLimits

0x5820,	// (0x0004c9fd) calc_display_pane_t3_ParamLimits

0xf0e6,	// (0x000562c3) calc_display_pane_t_ParamLimits

0x591f,	// (0x0004cafc) cell_calc_pane_g2

0x0001,

0xf103,	// (0x000562e0) cell_calc_pane_g

0x5928,	// (0x0004cb05) cell_calc_pane_t1

0x5937,	// (0x0004cb14) grid_highlight_pane_cp02_ParamLimits

0x594d,	// (0x0004cb2a) toolbar_button_pane_cp01_ParamLimits

0x594d,	// (0x0004cb2a) toolbar_button_pane_cp01

0xdf71,	// (0x0005514e) temp_image_control_pane_ParamLimits

0xdf71,	// (0x0005514e) temp_image_control_pane

0x7fc1,	// (0x0004f19e) main_mp3_pane

0x1181,	// (0x0004835e) temp_image_control_pane_g1_ParamLimits

0x1181,	// (0x0004835e) temp_image_control_pane_g1

0x118f,	// (0x0004836c) temp_image_control_pane_g2_ParamLimits

0x118f,	// (0x0004836c) temp_image_control_pane_g2

0x11a1,	// (0x0004837e) temp_image_control_pane_g3_ParamLimits

0x11a1,	// (0x0004837e) temp_image_control_pane_g3

0x8488,	// (0x0004f665) temp_image_control_pane_g4_ParamLimits

0x8488,	// (0x0004f665) temp_image_control_pane_g4

0x0003,

0xf6b6,	// (0x00056893) temp_image_control_pane_g_ParamLimits

0xf6b6,	// (0x00056893) temp_image_control_pane_g

0x1181,	// (0x0004835e) main_mp3_pane_g1

0x8499,	// (0x0004f676) main_mp3_pane_g2

0x0007,

0xf6bf,	// (0x0005689c) main_mp3_pane_g

0x11d6,	// (0x000483b3) main_mp3_pane_t1

0x5627,	// (0x0004c804) main_camera_pane_g8_ParamLimits

0x5627,	// (0x0004c804) main_camera_pane_g8

0x62a0,	// (0x0004d47d) main_video_pane_g7_ParamLimits

0x62a0,	// (0x0004d47d) main_video_pane_g7

0x82e5,	// (0x0004f4c2) main_camera2_pane_t7_ParamLimits

0x82e5,	// (0x0004f4c2) main_camera2_pane_t7

0xd433,	// (0x00054610) scroll_pane_cp025_ParamLimits

0xd433,	// (0x00054610) scroll_pane_cp025

0xd447,	// (0x00054624) scroll_pane_cp026_ParamLimits

0xd447,	// (0x00054624) scroll_pane_cp026

0xd456,	// (0x00054633) wml_content_pane_ParamLimits

0x4e5a,	// (0x0004c037) main_touch_calib_pane

0x8531,	// (0x0004f70e) main_touch_calib_pane_g1

0x853d,	// (0x0004f71a) main_touch_calib_pane_g2

0x8549,	// (0x0004f726) main_touch_calib_pane_g3

0x8555,	// (0x0004f732) main_touch_calib_pane_g4

0x0003,

0xf6dd,	// (0x000568ba) main_touch_calib_pane_g

0x8561,	// (0x0004f73e) main_touch_calib_pane_t1

0x8576,	// (0x0004f753) main_touch_calib_pane_t2

0x0004,

0xf6e6,	// (0x000568c3) main_touch_calib_pane_t

0xdb77,	// (0x00054d54) mup_progress_pane_cp02

0xdbac,	// (0x00054d89) navi_pane_g1

0xdc37,	// (0x00054e14) navi_pane_mp_t3

0x7fc1,	// (0x0004f19e) main_mp3_pane_ParamLimits

0x8100,	// (0x0004f2dd) navi_pane_ParamLimits

0x1181,	// (0x0004835e) main_mp3_pane_g1_ParamLimits

0x8499,	// (0x0004f676) main_mp3_pane_g2_ParamLimits

0x84a5,	// (0x0004f682) main_mp3_pane_g3_ParamLimits

0x84a5,	// (0x0004f682) main_mp3_pane_g3

0x84b1,	// (0x0004f68e) main_mp3_pane_g4_ParamLimits

0x84b1,	// (0x0004f68e) main_mp3_pane_g4

0x5619,	// (0x0004c7f6) main_mp3_pane_g5_ParamLimits

0x5619,	// (0x0004c7f6) main_mp3_pane_g5

0x11b1,	// (0x0004838e) main_mp3_pane_g6_ParamLimits

0x11b1,	// (0x0004838e) main_mp3_pane_g6

0x11be,	// (0x0004839b) main_mp3_pane_g7_ParamLimits

0x11be,	// (0x0004839b) main_mp3_pane_g7

0x11ca,	// (0x000483a7) main_mp3_pane_g8_ParamLimits

0x11ca,	// (0x000483a7) main_mp3_pane_g8

0xf6bf,	// (0x0005689c) main_mp3_pane_g_ParamLimits

0x84bd,	// (0x0004f69a) main_mp3_pane_t2

0x84cb,	// (0x0004f6a8) main_mp3_pane_t3

0x11e4,	// (0x000483c1) main_mp3_pane_t4

0x11f2,	// (0x000483cf) main_mp3_pane_t5

0x0005,

0xf6d0,	// (0x000568ad) main_mp3_pane_t

0x1200,	// (0x000483dd) mup_progress_pane_cp01

0x4b14,	// (0x0004bcf1) aid_zoom_text_secondary2

0x1013,	// (0x000481f0) list_cale_ev2_pane

0x101b,	// (0x000481f8) scroll_pane_cp023_ParamLimits

0x85c1,	// (0x0004f79e) field_cale_ev2_pane_ParamLimits

0x85c1,	// (0x0004f79e) field_cale_ev2_pane

0x1208,	// (0x000483e5) field_cale_ev2_pane_g1_ParamLimits

0x1208,	// (0x000483e5) field_cale_ev2_pane_g1

0x1214,	// (0x000483f1) field_cale_ev2_pane_g2_ParamLimits

0x1214,	// (0x000483f1) field_cale_ev2_pane_g2

0x122c,	// (0x00048409) field_cale_ev2_pane_g3_ParamLimits

0x122c,	// (0x00048409) field_cale_ev2_pane_g3

0x0003,

0xf6f1,	// (0x000568ce) field_cale_ev2_pane_g_ParamLimits

0xf6f1,	// (0x000568ce) field_cale_ev2_pane_g

0x1250,	// (0x0004842d) field_cale_ev2_pane_t1_ParamLimits

0x1250,	// (0x0004842d) field_cale_ev2_pane_t1

0x1267,	// (0x00048444) field_cale_ev2_pane_t2_ParamLimits

0x1267,	// (0x00048444) field_cale_ev2_pane_t2

0x0001,

0xf6fa,	// (0x000568d7) field_cale_ev2_pane_t_ParamLimits

0xf6fa,	// (0x000568d7) field_cale_ev2_pane_t

0x79ac,	// (0x0004eb89) main_postcard_pane_g5_ParamLimits

0x79ac,	// (0x0004eb89) main_postcard_pane_g5

0x79b8,	// (0x0004eb95) main_postcard_pane_g6_ParamLimits

0x79b8,	// (0x0004eb95) main_postcard_pane_g6

0x5635,	// (0x0004c812) camera2_autofocus_pane_cp_ParamLimits

0x5635,	// (0x0004c812) camera2_autofocus_pane_cp

0x7fc1,	// (0x0004f19e) main_mup3_pane

0x8610,	// (0x0004f7ed) main_mup3_pane_g1_ParamLimits

0x8610,	// (0x0004f7ed) main_mup3_pane_g1

0x8631,	// (0x0004f80e) main_mup3_pane_g2_ParamLimits

0x8631,	// (0x0004f80e) main_mup3_pane_g2

0x869e,	// (0x0004f87b) main_mup3_pane_g3_ParamLimits

0x869e,	// (0x0004f87b) main_mup3_pane_g3

0x86d9,	// (0x0004f8b6) main_mup3_pane_g4_ParamLimits

0x86d9,	// (0x0004f8b6) main_mup3_pane_g4

0x8714,	// (0x0004f8f1) main_mup3_pane_g5_ParamLimits

0x8714,	// (0x0004f8f1) main_mup3_pane_g5

0x874f,	// (0x0004f92c) main_mup3_pane_g6_ParamLimits

0x874f,	// (0x0004f92c) main_mup3_pane_g6

0x5627,	// (0x0004c804) main_mup3_pane_g7_ParamLimits

0x5627,	// (0x0004c804) main_mup3_pane_g7

0x0007,

0xf70a,	// (0x000568e7) main_mup3_pane_g_ParamLimits

0xf70a,	// (0x000568e7) main_mup3_pane_g

0x87bd,	// (0x0004f99a) main_mup3_pane_t1_ParamLimits

0x87bd,	// (0x0004f99a) main_mup3_pane_t1

0x881e,	// (0x0004f9fb) main_mup3_pane_t2_ParamLimits

0x881e,	// (0x0004f9fb) main_mup3_pane_t2

0x88d9,	// (0x0004fab6) main_mup3_pane_t4_ParamLimits

0x88d9,	// (0x0004fab6) main_mup3_pane_t4

0x891f,	// (0x0004fafc) main_mup3_pane_t5_ParamLimits

0x891f,	// (0x0004fafc) main_mup3_pane_t5

0x89c3,	// (0x0004fba0) main_mup3_pane_t6_ParamLimits

0x89c3,	// (0x0004fba0) main_mup3_pane_t6

0x0005,

0xf71b,	// (0x000568f8) main_mup3_pane_t_ParamLimits

0xf71b,	// (0x000568f8) main_mup3_pane_t

0x8a6b,	// (0x0004fc48) mup3_progress_pane_ParamLimits

0x8a6b,	// (0x0004fc48) mup3_progress_pane

0x8acf,	// (0x0004fcac) popup_mup3_control_window_ParamLimits

0x8acf,	// (0x0004fcac) popup_mup3_control_window

0x127c,	// (0x00048459) popup_mup3_text_window

0x8ae8,	// (0x0004fcc5) mup3_progress_pane_t1

0x8b06,	// (0x0004fce3) mup3_progress_pane_t2

0x1284,	// (0x00048461) mup3_progress_pane_t3

0x0002,

0xf728,	// (0x00056905) mup3_progress_pane_t

0x12a1,	// (0x0004847e) mup_progress_pane_cp03

0x4bf8,	// (0x0004bdd5) bg_tb_trans_pane_cp04

0x8b24,	// (0x0004fd01) mup3_volume_pane

0x8b2c,	// (0x0004fd09) popup_mup3_control_window_g1

0x8b35,	// (0x0004fd12) mup3_volume_pane_g1

0x8b3e,	// (0x0004fd1b) mup3_volume_pane_g2

0x8b47,	// (0x0004fd24) mup3_volume_pane_g3

0x0002,

0xf72f,	// (0x0005690c) mup3_volume_pane_g

0x4bf8,	// (0x0004bdd5) bg_tb_trans_pane_cp03

0x12b1,	// (0x0004848e) popup_mup3_text_window_g1

0x12b9,	// (0x00048496) popup_mup3_text_window_t1

0x58ea,	// (0x0004cac7) list_calc_item_pane_g1_ParamLimits

0x0d0c,	// (0x00047ee9) mup_volume_pane_cp_g1

0x858b,	// (0x0004f768) main_touch_calib_pane_t3

0x859d,	// (0x0004f77a) main_touch_calib_pane_t4

0x85af,	// (0x0004f78c) main_touch_calib_pane_t5

0x4c02,	// (0x0004bddf) aid_cell_size_toolbar2

0x4c0a,	// (0x0004bde7) aid_popup3_width_pane

0x4b0c,	// (0x0004bce9) aid_zoom_text_msg_primary

0xd2cf,	// (0x000544ac) vorec_t7

0x5859,	// (0x0004ca36) bg_calc_paper_pane_g1_ParamLimits

0x5865,	// (0x0004ca42) bg_calc_paper_pane_g2_ParamLimits

0x5871,	// (0x0004ca4e) bg_calc_paper_pane_g3_ParamLimits

0x587d,	// (0x0004ca5a) bg_calc_paper_pane_g4_ParamLimits

0x5889,	// (0x0004ca66) bg_calc_paper_pane_g5_ParamLimits

0x5895,	// (0x0004ca72) bg_calc_paper_pane_g6_ParamLimits

0x58a4,	// (0x0004ca81) bg_calc_paper_pane_g7_ParamLimits

0x58b3,	// (0x0004ca90) bg_calc_paper_pane_g8_ParamLimits

0xf0ed,	// (0x000562ca) bg_calc_paper_pane_g_ParamLimits

0x58c2,	// (0x0004ca9f) calc_bg_paper_pane_g9_ParamLimits

0x5635,	// (0x0004c812) image_qvga_pane_ParamLimits

0x5635,	// (0x0004c812) image_qvga_pane

0x5576,	// (0x0004c753) bg_popup_sub_pane_cp04_ParamLimits

0xdea8,	// (0x00055085) popup_mup_playback_window_g1_ParamLimits

0xdeb4,	// (0x00055091) popup_mup_playback_window_t1_ParamLimits

0xdec9,	// (0x000550a6) popup_mup_playback_window_t2_ParamLimits

0xf462,	// (0x0005663f) popup_mup_playback_window_t_ParamLimits

0x5619,	// (0x0004c7f6) main_mup2_pane_g3_ParamLimits

0x5619,	// (0x0004c7f6) main_mup2_pane_g3

0x6463,	// (0x0004d640) popup_toolbar_window_cp04

0xe28f,	// (0x0005546c) popup_call2_audio_second_window_g3_ParamLimits

0xe28f,	// (0x0005546c) popup_call2_audio_second_window_g3

0xe699,	// (0x00055876) popup_call2_audio_first_window_g4_ParamLimits

0xe699,	// (0x00055876) popup_call2_audio_first_window_g4

0xecc0,	// (0x00055e9d) popup_call2_audio_in_window_g4_ParamLimits

0xecc0,	// (0x00055e9d) popup_call2_audio_in_window_g4

0x7aa3,	// (0x0004ec80) aid_area_sk_bg_cut_ParamLimits

0x7aa3,	// (0x0004ec80) aid_area_sk_bg_cut

0xdede,	// (0x000550bb) aid_area_sk_bg_cut_2_ParamLimits

0xdede,	// (0x000550bb) aid_area_sk_bg_cut_2

0x4bf8,	// (0x0004bdd5) aid_placing_details_win

0x4bf8,	// (0x0004bdd5) aid_placing_details_win_2

0x5619,	// (0x0004c7f6) camera2_autofocus_pane_g1_ParamLimits

0x4dee,	// (0x0004bfcb) popup_fixed_preview_cale_window_ParamLimits

0x4dee,	// (0x0004bfcb) popup_fixed_preview_cale_window

0xdcad,	// (0x00054e8a) navi_slider_pane_g3

0xdcb6,	// (0x00054e93) navi_slider_pane_g4

0xdcbf,	// (0x00054e9c) navi_slider_pane_g5

0xdcad,	// (0x00054e8a) navi_slider_pane_g6

0x761f,	// (0x0004e7fc) navi_slider_pane_g7

0xdddf,	// (0x00054fbc) mup_scale_pane_g3

0xdde8,	// (0x00054fc5) mup_scale_pane_g4

0xddf1,	// (0x00054fce) mup_scale_pane_g5

0x77ce,	// (0x0004e9ab) mup_scale_pane_g6

0x77d7,	// (0x0004e9b4) mup_scale_pane_g7

0x1fb8,	// (0x00049195) cams2_slider_pane_g3

0x1fb8,	// (0x00049195) cams2_slider_pane_g4

0x1fb8,	// (0x00049195) cams2_slider_pane_g5

0x1fb8,	// (0x00049195) cams2_slider_pane_g6

0x1fb8,	// (0x00049195) cams2_slider_pane_g7

0xd31e,	// (0x000544fb) camera2_autofocus_pane_cp_g1

0xefe6,	// (0x000561c3) bg_popup_preview_window_pane_cp02_ParamLimits

0xefe6,	// (0x000561c3) bg_popup_preview_window_pane_cp02

0x12c7,	// (0x000484a4) list_fp_cale_pane_ParamLimits

0x12c7,	// (0x000484a4) list_fp_cale_pane

0x12d3,	// (0x000484b0) popup_fixed_preview_cale_window_t1_ParamLimits

0x12d3,	// (0x000484b0) popup_fixed_preview_cale_window_t1

0x8b50,	// (0x0004fd2d) popup_fixed_preview_cale_window_t2_ParamLimits

0x8b50,	// (0x0004fd2d) popup_fixed_preview_cale_window_t2

0x8b65,	// (0x0004fd42) popup_fixed_preview_cale_window_t3_ParamLimits

0x8b65,	// (0x0004fd42) popup_fixed_preview_cale_window_t3

0x0002,

0xf736,	// (0x00056913) popup_fixed_preview_cale_window_t_ParamLimits

0xf736,	// (0x00056913) popup_fixed_preview_cale_window_t

0x8b7a,	// (0x0004fd57) list_single_fp_cale_pane_ParamLimits

0x8b7a,	// (0x0004fd57) list_single_fp_cale_pane

0x12f1,	// (0x000484ce) list_single_fp_cale_pane_g1_ParamLimits

0x12f1,	// (0x000484ce) list_single_fp_cale_pane_g1

0x12fd,	// (0x000484da) list_single_fp_cale_pane_g2_ParamLimits

0x12fd,	// (0x000484da) list_single_fp_cale_pane_g2

0x0002,

0xf73d,	// (0x0005691a) list_single_fp_cale_pane_g_ParamLimits

0xf73d,	// (0x0005691a) list_single_fp_cale_pane_g

0x1316,	// (0x000484f3) list_single_fp_cale_pane_t1_ParamLimits

0x1316,	// (0x000484f3) list_single_fp_cale_pane_t1

0x1328,	// (0x00048505) list_single_fp_cale_pane_t2_ParamLimits

0x1328,	// (0x00048505) list_single_fp_cale_pane_t2

0x0001,

0xf744,	// (0x00056921) list_single_fp_cale_pane_t_ParamLimits

0xf744,	// (0x00056921) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4e5a,	// (0x0004c037) main_dialer_pane

0x8b8a,	// (0x0004fd67) aid_cell_size_keypad

0x4bf8,	// (0x0004bdd5) dialer_ne_pane

0x4bf8,	// (0x0004bdd5) grid_dialer_command_1_pane

0x4bf8,	// (0x0004bdd5) grid_dialer_command_2_pane

0x4bf8,	// (0x0004bdd5) grid_dialer_keypad_pane

0x0c33,	// (0x00047e10) bg_popup_call_pane_cp06_ParamLimits

0x0c33,	// (0x00047e10) bg_popup_call_pane_cp06

0x0c33,	// (0x00047e10) dialer_ne_clear_pane_ParamLimits

0x0c33,	// (0x00047e10) dialer_ne_clear_pane

0xd31e,	// (0x000544fb) dialer_ne_pane_g1

0xd2f0,	// (0x000544cd) dialer_ne_pane_t1_ParamLimits

0xd2f0,	// (0x000544cd) dialer_ne_pane_t1

0x1536,	// (0x00048713) dialer_ne_pane_t2_ParamLimits

0x1536,	// (0x00048713) dialer_ne_pane_t2

0x8b94,	// (0x0004fd71) dialer_ne_pane_t3_ParamLimits

0x8b94,	// (0x0004fd71) dialer_ne_pane_t3

0x0002,

0xf749,	// (0x00056926) dialer_ne_pane_t_ParamLimits

0xf749,	// (0x00056926) dialer_ne_pane_t

0x8b94,	// (0x0004fd71) dialer_ne_pane_t3_copy1_ParamLimits

0x8b94,	// (0x0004fd71) dialer_ne_pane_t3_copy1

0x8bb6,	// (0x0004fd93) cell_dialer_keypad_pane_ParamLimits

0x8bb6,	// (0x0004fd93) cell_dialer_keypad_pane

0x8bcb,	// (0x0004fda8) cell_dialer_command_1_pane_ParamLimits

0x8bcb,	// (0x0004fda8) cell_dialer_command_1_pane

0x8bdc,	// (0x0004fdb9) cell_dialer_command_2_pane_ParamLimits

0x8bdc,	// (0x0004fdb9) cell_dialer_command_2_pane

0xdd6f,	// (0x00054f4c) bg_button_pane_cp02_ParamLimits

0xdd6f,	// (0x00054f4c) bg_button_pane_cp02

0x5619,	// (0x0004c7f6) cell_dialer_keypad_pane_g1_ParamLimits

0x5619,	// (0x0004c7f6) cell_dialer_keypad_pane_g1

0xdd6f,	// (0x00054f4c) bg_button_pane_cp03_ParamLimits

0xdd6f,	// (0x00054f4c) bg_button_pane_cp03

0x5619,	// (0x0004c7f6) cell_dialer_command_1_pane_g1_ParamLimits

0x5619,	// (0x0004c7f6) cell_dialer_command_1_pane_g1

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp04

0xd31e,	// (0x000544fb) cell_dialer_command_2_pane_g1

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp06

0xd31e,	// (0x000544fb) dialer_ne_clear_pane_g1

0xdbb8,	// (0x00054d95) navi_pane_g2

0x75c7,	// (0x0004e7a4) navi_pane_g3

0x0002,

0xf365,	// (0x00056542) navi_pane_g

0xdc45,	// (0x00054e22) navi_pane_mv_g2

0xdc6c,	// (0x00054e49) navi_pane_mv_g5

0x75e4,	// (0x0004e7c1) navi_pane_mv_t1

0x57ea,	// (0x0004c9c7) main_clock2_pane

0x8c1f,	// (0x0004fdfc) main_clock2_list_pane_ParamLimits

0x8c1f,	// (0x0004fdfc) main_clock2_list_pane

0x8c45,	// (0x0004fe22) main_clock2_pane_t1_ParamLimits

0x8c45,	// (0x0004fe22) main_clock2_pane_t1

0x8c65,	// (0x0004fe42) main_clock2_pane_t2_ParamLimits

0x8c65,	// (0x0004fe42) main_clock2_pane_t2

0x0004,

0xf755,	// (0x00056932) main_clock2_pane_t_ParamLimits

0xf755,	// (0x00056932) main_clock2_pane_t

0x8cbe,	// (0x0004fe9b) popup_clock_analogue_window_cp03_ParamLimits

0x8cbe,	// (0x0004fe9b) popup_clock_analogue_window_cp03

0x8cdc,	// (0x0004feb9) popup_clock_digital_window_cp02_ParamLimits

0x8cdc,	// (0x0004feb9) popup_clock_digital_window_cp02

0x8d49,	// (0x0004ff26) main_clock2_list_single_pane_ParamLimits

0x8d49,	// (0x0004ff26) main_clock2_list_single_pane

0xd29d,	// (0x0005447a) list_highlight_pane_cp05

0x138b,	// (0x00048568) main_clock2_list_single_pane_t1

0x6463,	// (0x0004d640) popup_toolbar_window_cp04_ParamLimits

0x5627,	// (0x0004c804) camera2_autofocus_pane_g2_ParamLimits

0x5627,	// (0x0004c804) camera2_autofocus_pane_g2

0x5627,	// (0x0004c804) camera2_autofocus_pane_g3_ParamLimits

0x5627,	// (0x0004c804) camera2_autofocus_pane_g3

0x5627,	// (0x0004c804) camera2_autofocus_pane_g4_ParamLimits

0x5627,	// (0x0004c804) camera2_autofocus_pane_g4

0x5627,	// (0x0004c804) camera2_autofocus_pane_g5_ParamLimits

0x5627,	// (0x0004c804) camera2_autofocus_pane_g5

0x0004,

0xf699,	// (0x00056876) camera2_autofocus_pane_g_ParamLimits

0xf699,	// (0x00056876) camera2_autofocus_pane_g

0x85d7,	// (0x0004f7b4) camera2_autofocus_pane_cp_g2

0x85df,	// (0x0004f7bc) camera2_autofocus_pane_cp_g3

0x85e7,	// (0x0004f7c4) camera2_autofocus_pane_cp_g4

0x85ef,	// (0x0004f7cc) camera2_autofocus_pane_cp_g5

0x0004,

0xf6ff,	// (0x000568dc) camera2_autofocus_pane_cp_g

0x4bf8,	// (0x0004bdd5) popup_dialer_spcha_window

0x4bf8,	// (0x0004bdd5) bg_popup_sub_pane_cp07

0x4bf8,	// (0x0004bdd5) list_spcha_pane

0x1399,	// (0x00048576) list_single_spcha_pane_ParamLimits

0x1399,	// (0x00048576) list_single_spcha_pane

0x4bf8,	// (0x0004bdd5) list_highlight_pane_cp06

0xef8e,	// (0x0005616b) list_single_spcha_pane_t1

0xea6a,	// (0x00055c47) popup_call2_audio_out_window_g4_ParamLimits

0xea6a,	// (0x00055c47) popup_call2_audio_out_window_g4

0x4e5a,	// (0x0004c037) main_imed2_pane

0x804d,	// (0x0004f22a) popup_imed_adjust2_window

0x805e,	// (0x0004f23b) popup_imed_trans_window_ParamLimits

0x805e,	// (0x0004f23b) popup_imed_trans_window

0x0ddf,	// (0x00047fbc) popup_blid_sat_info2_window_t1

0x0ded,	// (0x00047fca) popup_blid_sat_info2_window_t2

0x000a,

0xf62e,	// (0x0005680b) popup_blid_sat_info2_window_t

0x8df3,	// (0x0004ffd0) aid_size_cell_colour_35

0x8e0a,	// (0x0004ffe7) aid_size_cell_colour_112

0x8e21,	// (0x0004fffe) aid_size_cell_effect

0xdd6f,	// (0x00054f4c) bg_tb_trans_pane_cp02

0xf00a,	// (0x000561e7) heading_imed_pane

0x8e3b,	// (0x00050018) listscroll_imed_pane

0x13ab,	// (0x00048588) heading_imed_pane_g1

0x13b3,	// (0x00048590) heading_imed_pane_t1

0x13c1,	// (0x0004859e) grid_imed_colour_35_pane_ParamLimits

0x13c1,	// (0x0004859e) grid_imed_colour_35_pane

0x8e47,	// (0x00050024) grid_imed_effect_pane

0x13d4,	// (0x000485b1) list_imed_aspect_pane

0x8e53,	// (0x00050030) scroll_pane_cp027_ParamLimits

0x8e53,	// (0x00050030) scroll_pane_cp027

0x8e5f,	// (0x0005003c) cell_imed_effect_pane_ParamLimits

0x8e5f,	// (0x0005003c) cell_imed_effect_pane

0x13dc,	// (0x000485b9) cell_imed_colour_pane_ParamLimits

0x13dc,	// (0x000485b9) cell_imed_colour_pane

0x1416,	// (0x000485f3) cell_imed_colour_pane_g1_ParamLimits

0x1416,	// (0x000485f3) cell_imed_colour_pane_g1

0x1427,	// (0x00048604) hgihlgiht_grid_pane_cp016_ParamLimits

0x1427,	// (0x00048604) hgihlgiht_grid_pane_cp016

0x8e75,	// (0x00050052) cell_imed_effect_pane_g1

0x8e7d,	// (0x0005005a) grid_highlight_pane_cp017

0x1438,	// (0x00048615) list_imed_single_pane_ParamLimits

0x1438,	// (0x00048615) list_imed_single_pane

0x4bf8,	// (0x0004bdd5) list_highlight_pane_cp07

0x144b,	// (0x00048628) list_imed_aspect_pane_comp1_t1

0xeff2,	// (0x000561cf) bg_tb_trans_pane_cp05

0x146b,	// (0x00048648) popup_imed_adjust2_window_g1

0x1492,	// (0x0004866f) popup_imed_adjust2_window_t1

0x14aa,	// (0x00048687) slider_imed_adjust_pane

0x14be,	// (0x0004869b) slider_imed_adjust_pane_g1

0x14ce,	// (0x000486ab) slider_imed_adjust_pane_g2

0x14de,	// (0x000486bb) slider_imed_adjust_pane_g3

0x14ef,	// (0x000486cc) slider_imed_adjust_pane_g4

0x0003,

0xf772,	// (0x0005694f) slider_imed_adjust_pane_g

0x8e86,	// (0x00050063) aid_size_cell_clipart2

0x8e92,	// (0x0005006f) grid_imed_clipart_pane

0x1500,	// (0x000486dd) scroll_pane_cp031

0x8e9c,	// (0x00050079) cell_imed_clipart_pane_ParamLimits

0x8e9c,	// (0x00050079) cell_imed_clipart_pane

0x8eb3,	// (0x00050090) cell_imed_clipart_pane_g1

0x4bf8,	// (0x0004bdd5) grid_highlight_pane_cp014

0x8c2b,	// (0x0004fe08) main_clock2_pane_g1_ParamLimits

0x8c2b,	// (0x0004fe08) main_clock2_pane_g1

0x8cf4,	// (0x0004fed1) aid_call2_pane_cp10

0x8d06,	// (0x0004fee3) aid_call_pane_cp10

0xdb47,	// (0x00054d24) popup_clock_analogue_window_cp10_g1

0xdb47,	// (0x00054d24) popup_clock_analogue_window_cp10_g2

0x8d18,	// (0x0004fef5) popup_clock_analogue_window_cp10_g3

0x8d18,	// (0x0004fef5) popup_clock_analogue_window_cp10_g4

0xdb47,	// (0x00054d24) popup_clock_analogue_window_cp10_g5

0x0004,

0xf760,	// (0x0005693d) popup_clock_analogue_window_cp10_g

0x8d2a,	// (0x0004ff07) popup_clock_analogue_window_cp10_t1

0x8d5b,	// (0x0004ff38) clock_digital_number_pane_cp10_ParamLimits

0x8d5b,	// (0x0004ff38) clock_digital_number_pane_cp10

0x8d73,	// (0x0004ff50) clock_digital_number_pane_cp11_ParamLimits

0x8d73,	// (0x0004ff50) clock_digital_number_pane_cp11

0x8d8b,	// (0x0004ff68) clock_digital_number_pane_cp12_ParamLimits

0x8d8b,	// (0x0004ff68) clock_digital_number_pane_cp12

0x8da3,	// (0x0004ff80) clock_digital_number_pane_cp13_ParamLimits

0x8da3,	// (0x0004ff80) clock_digital_number_pane_cp13

0x8dbb,	// (0x0004ff98) clock_digital_separator_pane_cp10_ParamLimits

0x8dbb,	// (0x0004ff98) clock_digital_separator_pane_cp10

0x8dd3,	// (0x0004ffb0) popup_clock_digital_window_cp02_t1_ParamLimits

0x8dd3,	// (0x0004ffb0) popup_clock_digital_window_cp02_t1

0x556e,	// (0x0004c74b) clock_digital_number_pane_cp10_g1

0x556e,	// (0x0004c74b) clock_digital_number_pane_cp10_g2

0x0001,

0xf77b,	// (0x00056958) clock_digital_number_pane_cp10_g

0x556e,	// (0x0004c74b) clock_digital_separator_pane_cp10_g1

0x556e,	// (0x0004c74b) clock_digital_separator_pane_g2_cp10

0xdc74,	// (0x00054e51) navi_pane_vded_g4

0xdc7d,	// (0x00054e5a) navi_pane_vded_g5

0xdc86,	// (0x00054e63) navi_pane_vded_t1

0x4e5a,	// (0x0004c037) main_vded_pane

0x8ebc,	// (0x00050099) main_vded_pane_g1

0x8ec4,	// (0x000500a1) main_vded_pane_g2

0x8ecc,	// (0x000500a9) main_vded_pane_g3

0x0002,

0xf780,	// (0x0005695d) main_vded_pane_g

0x8ed4,	// (0x000500b1) main_vded_pane_t1

0x8ee2,	// (0x000500bf) main_vded_pane_t2

0x0001,

0xf787,	// (0x00056964) main_vded_pane_t

0x8ef0,	// (0x000500cd) vded_slider_pane

0x8ef8,	// (0x000500d5) vded_video_pane

0x1508,	// (0x000486e5) vded_video_pane_g1

0x8f00,	// (0x000500dd) vded_video_pane_g2

0xd31e,	// (0x000544fb) vded_video_pane_g3

0x0002,

0xf78c,	// (0x00056969) vded_video_pane_g

0x1512,	// (0x000486ef) vded_slider_pane_g1

0x0d0c,	// (0x00047ee9) vded_slider_pane_g2

0x151b,	// (0x000486f8) vded_slider_pane_g3

0x1524,	// (0x00048701) vded_slider_pane_g4

0x152d,	// (0x0004870a) vded_slider_pane_g5

0x0004,

0xf793,	// (0x00056970) vded_slider_pane_g

0x8ac3,	// (0x0004fca0) mup3_rocker_pane_ParamLimits

0x8ac3,	// (0x0004fca0) mup3_rocker_pane

0x8f09,	// (0x000500e6) mup3_control_keys_pane_g1

0x8f11,	// (0x000500ee) mup3_control_keys_pane_g2

0x8f19,	// (0x000500f6) mup3_control_keys_pane_g3

0x8f21,	// (0x000500fe) mup3_control_keys_pane_g4

0x0003,

0xf79e,	// (0x0005697b) mup3_control_keys_pane_g

0x4e12,	// (0x0004bfef) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4e12,	// (0x0004bfef) popup_toolbar2_fixed_window_cp01

0x8adb,	// (0x0004fcb8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8adb,	// (0x0004fcb8) popup_toolbar2_fixed_window_cp02

0xe401,	// (0x000555de) popup_call2_audio_second_window_t4_ParamLimits

0xe401,	// (0x000555de) popup_call2_audio_second_window_t4

0xe92f,	// (0x00055b0c) popup_call2_audio_first_window_t6_ParamLimits

0xe92f,	// (0x00055b0c) popup_call2_audio_first_window_t6

0xeb6d,	// (0x00055d4a) popup_call2_audio_out_window_t6_ParamLimits

0xeb6d,	// (0x00055d4a) popup_call2_audio_out_window_t6

0x4e5a,	// (0x0004c037) main_vitu_pane

0x5635,	// (0x0004c812) aid_size_cell_itu_ParamLimits

0x5635,	// (0x0004c812) aid_size_cell_itu

0x5635,	// (0x0004c812) bg_popup_window_pane_cp08_ParamLimits

0x5635,	// (0x0004c812) bg_popup_window_pane_cp08

0x5635,	// (0x0004c812) field_vitu_entry_pane_ParamLimits

0x5635,	// (0x0004c812) field_vitu_entry_pane

0x5635,	// (0x0004c812) grid_vitu_function_pane_ParamLimits

0x5635,	// (0x0004c812) grid_vitu_function_pane

0x5635,	// (0x0004c812) grid_vitu_itu_pane_ParamLimits

0x5635,	// (0x0004c812) grid_vitu_itu_pane

0x8f31,	// (0x0005010e) cell_vitu_itu_pane_ParamLimits

0x8f31,	// (0x0005010e) cell_vitu_itu_pane

0x5635,	// (0x0004c812) cell_vitu_function_pane_ParamLimits

0x5635,	// (0x0004c812) cell_vitu_function_pane

0xdd6f,	// (0x00054f4c) bg_popup_sub_pane_cp08_ParamLimits

0xdd6f,	// (0x00054f4c) bg_popup_sub_pane_cp08

0xdd5b,	// (0x00054f38) field_vitu_entry_pane_t1_ParamLimits

0xdd5b,	// (0x00054f38) field_vitu_entry_pane_t1

0x1536,	// (0x00048713) field_vitu_entry_pane_t2_ParamLimits

0x1536,	// (0x00048713) field_vitu_entry_pane_t2

0x0001,

0xf7ac,	// (0x00056989) field_vitu_entry_pane_t_ParamLimits

0xf7ac,	// (0x00056989) field_vitu_entry_pane_t

0x0c33,	// (0x00047e10) bg_button_pane_cp05_ParamLimits

0x0c33,	// (0x00047e10) bg_button_pane_cp05

0x1553,	// (0x00048730) cell_vitu_itu_pane_g1

0xf016,	// (0x000561f3) cell_vitu_itu_pane_t1_ParamLimits

0xf016,	// (0x000561f3) cell_vitu_itu_pane_t1

0xf016,	// (0x000561f3) cell_vitu_itu_pane_t2_ParamLimits

0xf016,	// (0x000561f3) cell_vitu_itu_pane_t2

0x0002,

0xf7b1,	// (0x0005698e) cell_vitu_itu_pane_t_ParamLimits

0xf7b1,	// (0x0005698e) cell_vitu_itu_pane_t

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp07

0xd31e,	// (0x000544fb) cell_vitu_function_pane_g1

0x56cb,	// (0x0004c8a8) main_calc_pane_g1

0x4c3a,	// (0x0004be17) aid_visual_content_pane

0x4e5a,	// (0x0004c037) main_vradio_pane

0x5627,	// (0x0004c804) main_vradio_pane_g1_ParamLimits

0x5627,	// (0x0004c804) main_vradio_pane_g1

0x5627,	// (0x0004c804) main_vradio_pane_g2_ParamLimits

0x5627,	// (0x0004c804) main_vradio_pane_g2

0x0001,

0xf7b8,	// (0x00056995) main_vradio_pane_g_ParamLimits

0xf7b8,	// (0x00056995) main_vradio_pane_g

0xd2f0,	// (0x000544cd) main_vradio_pane_t1_ParamLimits

0xd2f0,	// (0x000544cd) main_vradio_pane_t1

0xd2f0,	// (0x000544cd) main_vradio_pane_t2_ParamLimits

0xd2f0,	// (0x000544cd) main_vradio_pane_t2

0xd2f0,	// (0x000544cd) main_vradio_pane_t3_ParamLimits

0xd2f0,	// (0x000544cd) main_vradio_pane_t3

0x0002,

0xf7bd,	// (0x0005699a) main_vradio_pane_t_ParamLimits

0xf7bd,	// (0x0005699a) main_vradio_pane_t

0x5635,	// (0x0004c812) vradio_rocker_control_pane_ParamLimits

0x5635,	// (0x0004c812) vradio_rocker_control_pane

0x5635,	// (0x0004c812) vradio_station_info_pane_ParamLimits

0x5635,	// (0x0004c812) vradio_station_info_pane

0xdd6f,	// (0x00054f4c) vradio_frequency_info_pane_ParamLimits

0xdd6f,	// (0x00054f4c) vradio_frequency_info_pane

0xd31e,	// (0x000544fb) vradio_station_info_pane_g1

0xf016,	// (0x000561f3) vradio_station_info_pane_t1_ParamLimits

0xf016,	// (0x000561f3) vradio_station_info_pane_t1

0xd2f0,	// (0x000544cd) vradio_station_info_pane_t2_ParamLimits

0xd2f0,	// (0x000544cd) vradio_station_info_pane_t2

0x0001,

0xf7c4,	// (0x000569a1) vradio_station_info_pane_t_ParamLimits

0xf7c4,	// (0x000569a1) vradio_station_info_pane_t

0x4bf8,	// (0x0004bdd5) vradio_tuning_pane

0x8f3f,	// (0x0005011c) vradio_rocker_control_pane_g1

0x156f,	// (0x0004874c) vradio_rocker_control_pane_g2

0x8f47,	// (0x00050124) vradio_rocker_control_pane_g3

0x8f4f,	// (0x0005012c) vradio_rocker_control_pane_g4

0x8f57,	// (0x00050134) vradio_rocker_control_pane_g5

0x0004,

0xf7c9,	// (0x000569a6) vradio_rocker_control_pane_g

0xd31e,	// (0x000544fb) vradio_frequency_info_pane_g1

0xdd5b,	// (0x00054f38) vradio_frequency_info_pane_t1_ParamLimits

0xdd5b,	// (0x00054f38) vradio_frequency_info_pane_t1

0x8f5f,	// (0x0005013c) vradio_tuning_pane_g1

0x8f68,	// (0x00050145) vradio_tuning_pane_t1

0x4c79,	// (0x0004be56) area_side_right_pane_ParamLimits

0x4c79,	// (0x0004be56) area_side_right_pane

0xefad,	// (0x0005618a) status_small_pane_g1

0xefb5,	// (0x00056192) status_small_pane_g2

0xefbe,	// (0x0005619b) status_small_pane_g3

0xefc7,	// (0x000561a4) status_small_pane_g4

0x0003,

0xf590,	// (0x0005676d) status_small_pane_g

0xefd0,	// (0x000561ad) status_small_pane_t1

0x4e5a,	// (0x0004c037) main_video3_pane

0x1577,	// (0x00048754) cams_zoom_vslider_pane

0x157f,	// (0x0004875c) image3_wide_pane_ParamLimits

0x157f,	// (0x0004875c) image3_wide_pane

0x1599,	// (0x00048776) image3_wide_small_pane

0x15a3,	// (0x00048780) main_video3_pane_g1_ParamLimits

0x15a3,	// (0x00048780) main_video3_pane_g1

0x15bf,	// (0x0004879c) main_video3_pane_g2_ParamLimits

0x15bf,	// (0x0004879c) main_video3_pane_g2

0x0001,

0xf7d4,	// (0x000569b1) main_video3_pane_g_ParamLimits

0xf7d4,	// (0x000569b1) main_video3_pane_g

0x15db,	// (0x000487b8) main_video3_pane_t1_ParamLimits

0x15db,	// (0x000487b8) main_video3_pane_t1

0x1606,	// (0x000487e3) main_video3_pane_t2_ParamLimits

0x1606,	// (0x000487e3) main_video3_pane_t2

0x1631,	// (0x0004880e) main_video3_pane_t3_ParamLimits

0x1631,	// (0x0004880e) main_video3_pane_t3

0x0002,

0xf7d9,	// (0x000569b6) main_video3_pane_t_ParamLimits

0xf7d9,	// (0x000569b6) main_video3_pane_t

0x165c,	// (0x00048839) cams_zoom_vslider_pane_g1

0x1665,	// (0x00048842) cams_zoom_vslider_pane_g2

0x0001,

0xf7e0,	// (0x000569bd) cams_zoom_vslider_pane_g

0x166d,	// (0x0004884a) small_slider_vertical_pane

0xd31e,	// (0x000544fb) small_slider_vertical_pane_g1

0xd31e,	// (0x000544fb) small_slider_vertical_pane_g2

0x1675,	// (0x00048852) small_slider_vertical_pane_g3

0x0002,

0xf7e5,	// (0x000569c2) small_slider_vertical_pane_g

0x4e5a,	// (0x0004c037) main_hwr_training_pane

0x167e,	// (0x0004885b) hwr_training_instruct_pane_ParamLimits

0x167e,	// (0x0004885b) hwr_training_instruct_pane

0x8f77,	// (0x00050154) hwr_training_navi_pane_ParamLimits

0x8f77,	// (0x00050154) hwr_training_navi_pane

0x8f8b,	// (0x00050168) hwr_training_write_pane_ParamLimits

0x8f8b,	// (0x00050168) hwr_training_write_pane

0x4bf8,	// (0x0004bdd5) bg_frame_shadow_pane

0x16ad,	// (0x0004888a) hwr_training_write_pane_g1

0x16b5,	// (0x00048892) hwr_training_write_pane_g2

0x16bd,	// (0x0004889a) hwr_training_write_pane_g3

0x16c5,	// (0x000488a2) hwr_training_write_pane_g4

0x16cd,	// (0x000488aa) hwr_training_write_pane_g5

0x16d5,	// (0x000488b2) hwr_training_write_pane_g6

0x16dd,	// (0x000488ba) hwr_training_write_pane_g7

0x0006,

0xf7ec,	// (0x000569c9) hwr_training_write_pane_g

0x8fb9,	// (0x00050196) hwr_training_navi_pane_g1_ParamLimits

0x8fb9,	// (0x00050196) hwr_training_navi_pane_g1

0x8fcb,	// (0x000501a8) hwr_training_navi_pane_g2_ParamLimits

0x8fcb,	// (0x000501a8) hwr_training_navi_pane_g2

0x8fdd,	// (0x000501ba) hwr_training_navi_pane_g3_ParamLimits

0x8fdd,	// (0x000501ba) hwr_training_navi_pane_g3

0x8fed,	// (0x000501ca) hwr_training_navi_pane_g4_ParamLimits

0x8fed,	// (0x000501ca) hwr_training_navi_pane_g4

0x0004,

0xf7fb,	// (0x000569d8) hwr_training_navi_pane_g_ParamLimits

0xf7fb,	// (0x000569d8) hwr_training_navi_pane_g

0x9007,	// (0x000501e4) hwr_training_navi_pane_t1

0x9015,	// (0x000501f2) list_single_hwr_training_instruct_pane_ParamLimits

0x9015,	// (0x000501f2) list_single_hwr_training_instruct_pane

0x1734,	// (0x00048911) list_single_hwr_training_instruct_pane_t1

0x0eda,	// (0x000480b7) bg_frame_shadow_pane_g1

0x1743,	// (0x00048920) bg_frame_shadow_pane_g2

0x174b,	// (0x00048928) bg_frame_shadow_pane_g3

0x1753,	// (0x00048930) bg_frame_shadow_pane_g4

0x175b,	// (0x00048938) bg_frame_shadow_pane_g5

0x1763,	// (0x00048940) bg_frame_shadow_pane_g6

0x176b,	// (0x00048948) bg_frame_shadow_pane_g7

0x5a28,	// (0x0004cc05) bg_frame_shadow_pane_g8

0x0007,

0xf806,	// (0x000569e3) bg_frame_shadow_pane_g

0x4e5a,	// (0x0004c037) main_video_tele_dialer_pane

0x902d,	// (0x0005020a) aid_size_cell_video_keypad_ParamLimits

0x902d,	// (0x0005020a) aid_size_cell_video_keypad

0x903d,	// (0x0005021a) grid_video_dialer_keypad_pane_ParamLimits

0x903d,	// (0x0005021a) grid_video_dialer_keypad_pane

0x906d,	// (0x0005024a) video_down_pane_cp_ParamLimits

0x906d,	// (0x0005024a) video_down_pane_cp

0x9095,	// (0x00050272) cell_video_dialer_keypad_pane_ParamLimits

0x9095,	// (0x00050272) cell_video_dialer_keypad_pane

0x1773,	// (0x00048950) bg_button_pane_cp08_ParamLimits

0x1773,	// (0x00048950) bg_button_pane_cp08

0x90aa,	// (0x00050287) cell_video_dialer_keypad_pane_g1_ParamLimits

0x90aa,	// (0x00050287) cell_video_dialer_keypad_pane_g1

0x8ab7,	// (0x0004fc94) mup3_rocker2_pane_ParamLimits

0x8ab7,	// (0x0004fc94) mup3_rocker2_pane

0xd31e,	// (0x000544fb) mup3_rocker2_pane_g1

0x7fcf,	// (0x0004f1ac) main_dialer2_pane

0x4e5a,	// (0x0004c037) main_mp4_pane

0x90fd,	// (0x000502da) main_mp4_pane_g1_ParamLimits

0x90fd,	// (0x000502da) main_mp4_pane_g1

0x910b,	// (0x000502e8) main_mp4_pane_g2_ParamLimits

0x910b,	// (0x000502e8) main_mp4_pane_g2

0x9119,	// (0x000502f6) main_mp4_pane_g3_ParamLimits

0x9119,	// (0x000502f6) main_mp4_pane_g3

0x914e,	// (0x0005032b) main_mp4_pane_g4_ParamLimits

0x914e,	// (0x0005032b) main_mp4_pane_g4

0x917c,	// (0x00050359) main_mp4_pane_g5_ParamLimits

0x917c,	// (0x00050359) main_mp4_pane_g5

0x0007,

0xf826,	// (0x00056a03) main_mp4_pane_g_ParamLimits

0xf826,	// (0x00056a03) main_mp4_pane_g

0x91f0,	// (0x000503cd) main_mp4_pane_t1_ParamLimits

0x91f0,	// (0x000503cd) main_mp4_pane_t1

0x9248,	// (0x00050425) main_mp4_pane_t2_ParamLimits

0x9248,	// (0x00050425) main_mp4_pane_t2

0x177f,	// (0x0004895c) main_mp4_pane_t3_ParamLimits

0x177f,	// (0x0004895c) main_mp4_pane_t3

0x929a,	// (0x00050477) main_mp4_pane_t4_ParamLimits

0x929a,	// (0x00050477) main_mp4_pane_t4

0x0003,

0xf837,	// (0x00056a14) main_mp4_pane_t_ParamLimits

0xf837,	// (0x00056a14) main_mp4_pane_t

0x92da,	// (0x000504b7) mp4_progress_pane_ParamLimits

0x92da,	// (0x000504b7) mp4_progress_pane

0x931e,	// (0x000504fb) mp4_rocker_pane_ParamLimits

0x931e,	// (0x000504fb) mp4_rocker_pane

0x17ad,	// (0x0004898a) mp4_progress_pane_t1

0x17c4,	// (0x000489a1) mp4_progress_pane_t2

0x0001,

0xf840,	// (0x00056a1d) mp4_progress_pane_t

0x17db,	// (0x000489b8) mup_progress_pane_cp04

0x1fb8,	// (0x00049195) mp4_rocker_pane_g1

0x933c,	// (0x00050519) aid_cell_size_keypad2_ParamLimits

0x933c,	// (0x00050519) aid_cell_size_keypad2

0x934c,	// (0x00050529) dialer2_ne_pane_ParamLimits

0x934c,	// (0x00050529) dialer2_ne_pane

0x9358,	// (0x00050535) grid_dialer2_keypad_pane_ParamLimits

0x9358,	// (0x00050535) grid_dialer2_keypad_pane

0x0c25,	// (0x00047e02) bg_popup_call_pane_cp07_ParamLimits

0x0c25,	// (0x00047e02) bg_popup_call_pane_cp07

0x9364,	// (0x00050541) dialer2_ne_pane_t1_ParamLimits

0x9364,	// (0x00050541) dialer2_ne_pane_t1

0x9389,	// (0x00050566) cell_dialer2_keypad_pane_ParamLimits

0x9389,	// (0x00050566) cell_dialer2_keypad_pane

0x17f9,	// (0x000489d6) bg_button_pane_pane_cp04_ParamLimits

0x17f9,	// (0x000489d6) bg_button_pane_pane_cp04

0x939e,	// (0x0005057b) cell_dialer2_keypad_pane_g1_ParamLimits

0x939e,	// (0x0005057b) cell_dialer2_keypad_pane_g1

0x633f,	// (0x0004d51c) aid_placing_vt_set_content_ParamLimits

0x633f,	// (0x0004d51c) aid_placing_vt_set_content

0x6365,	// (0x0004d542) aid_placing_vt_set_title_ParamLimits

0x6365,	// (0x0004d542) aid_placing_vt_set_title

0x4e5a,	// (0x0004c037) main_image3_pane

0x9412,	// (0x000505ef) area_side_right_pane_cp01_ParamLimits

0x9412,	// (0x000505ef) area_side_right_pane_cp01

0x943f,	// (0x0005061c) main_image3_pane_g1_ParamLimits

0x943f,	// (0x0005061c) main_image3_pane_g1

0x944d,	// (0x0005062a) main_image3_pane_g2_ParamLimits

0x944d,	// (0x0005062a) main_image3_pane_g2

0x9464,	// (0x00050641) main_image3_pane_g3_ParamLimits

0x9464,	// (0x00050641) main_image3_pane_g3

0x947b,	// (0x00050658) main_image3_pane_g4_ParamLimits

0x947b,	// (0x00050658) main_image3_pane_g4

0x0003,

0xf84f,	// (0x00056a2c) main_image3_pane_g_ParamLimits

0xf84f,	// (0x00056a2c) main_image3_pane_g

0x9492,	// (0x0005066f) main_image3_pane_t1_ParamLimits

0x9492,	// (0x0005066f) main_image3_pane_t1

0x94b7,	// (0x00050694) main_image3_pane_t2_ParamLimits

0x94b7,	// (0x00050694) main_image3_pane_t2

0x94d6,	// (0x000506b3) main_image3_pane_t3_ParamLimits

0x94d6,	// (0x000506b3) main_image3_pane_t3

0x0003,

0xf858,	// (0x00056a35) main_image3_pane_t_ParamLimits

0xf858,	// (0x00056a35) main_image3_pane_t

0x5635,	// (0x0004c812) grid_sctrl_middle_pane_cp01_ParamLimits

0x5635,	// (0x0004c812) grid_sctrl_middle_pane_cp01

0x9531,	// (0x0005070e) cell_sctrl_middle_pane_cp01_ParamLimits

0x9531,	// (0x0005070e) cell_sctrl_middle_pane_cp01

0x9542,	// (0x0005071f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9542,	// (0x0005071f) cell_sctrl_middle_pane_cp01_g1

0x4e5a,	// (0x0004c037) main_call4_pane

0x954f,	// (0x0005072c) aid_size_button_call4_ParamLimits

0x954f,	// (0x0005072c) aid_size_button_call4

0x9579,	// (0x00050756) call4_windows_pane_ParamLimits

0x9579,	// (0x00050756) call4_windows_pane

0x958d,	// (0x0005076a) grid_call4_button_pane_ParamLimits

0x958d,	// (0x0005076a) grid_call4_button_pane

0x181d,	// (0x000489fa) call4_windows_conf_pane

0x95af,	// (0x0005078c) popup_call4_audio_first_window_ParamLimits

0x95af,	// (0x0005078c) popup_call4_audio_first_window

0x1850,	// (0x00048a2d) popup_call4_audio_second_window_ParamLimits

0x1850,	// (0x00048a2d) popup_call4_audio_second_window

0x1862,	// (0x00048a3f) popup_call4_audio_wait_window_ParamLimits

0x1862,	// (0x00048a3f) popup_call4_audio_wait_window

0x95cf,	// (0x000507ac) cell_call4_button_pane_ParamLimits

0x95cf,	// (0x000507ac) cell_call4_button_pane

0x594d,	// (0x0004cb2a) bg_button_pane_cp09_ParamLimits

0x594d,	// (0x0004cb2a) bg_button_pane_cp09

0x95f2,	// (0x000507cf) cell_call4_button_pane_g1_ParamLimits

0x95f2,	// (0x000507cf) cell_call4_button_pane_g1

0x95ff,	// (0x000507dc) cell_call4_button_pane_t1_ParamLimits

0x95ff,	// (0x000507dc) cell_call4_button_pane_t1

0x1876,	// (0x00048a53) popup_call4_audio_conf_window_ParamLimits

0x1876,	// (0x00048a53) popup_call4_audio_conf_window

0x8ae8,	// (0x0004fcc5) mup3_progress_pane_t1_ParamLimits

0x8b06,	// (0x0004fce3) mup3_progress_pane_t2_ParamLimits

0x1284,	// (0x00048461) mup3_progress_pane_t3_ParamLimits

0xf728,	// (0x00056905) mup3_progress_pane_t_ParamLimits

0x12a1,	// (0x0004847e) mup_progress_pane_cp03_ParamLimits

0x8f29,	// (0x00050106) mup3_control_keys_pane_g4_copy1

0x9308,	// (0x000504e5) mp4_rocker2_pane_ParamLimits

0x9308,	// (0x000504e5) mp4_rocker2_pane

0x1892,	// (0x00048a6f) mp4_rocker2_pane_g1

0x188a,	// (0x00048a67) mp4_rocker2_pane_g2

0x9643,	// (0x00050820) mp4_rocker2_pane_g3

0x964b,	// (0x00050828) mp4_rocker2_pane_g4

0x9653,	// (0x00050830) mp4_rocker2_pane_g5

0x0004,

0xf861,	// (0x00056a3e) mp4_rocker2_pane_g

0x4e5a,	// (0x0004c037) main_camera4_pane

0x4e5a,	// (0x0004c037) main_video4_pane

0x9049,	// (0x00050226) main_video_tele_dialer_pane_t1_ParamLimits

0x9049,	// (0x00050226) main_video_tele_dialer_pane_t1

0x905b,	// (0x00050238) main_video_tele_dialer_pane_t2_ParamLimits

0x905b,	// (0x00050238) main_video_tele_dialer_pane_t2

0x0001,

0xf817,	// (0x000569f4) main_video_tele_dialer_pane_t_ParamLimits

0xf817,	// (0x000569f4) main_video_tele_dialer_pane_t

0x9671,	// (0x0005084e) cam4_autofocus_pane_ParamLimits

0x9671,	// (0x0005084e) cam4_autofocus_pane

0x9687,	// (0x00050864) cam4_image_uncrop_pane_ParamLimits

0x9687,	// (0x00050864) cam4_image_uncrop_pane

0x969c,	// (0x00050879) cam4_indicators_pane_ParamLimits

0x969c,	// (0x00050879) cam4_indicators_pane

0x96b6,	// (0x00050893) main_camera4_pane_g1_ParamLimits

0x96b6,	// (0x00050893) main_camera4_pane_g1

0x96c2,	// (0x0005089f) main_camera4_pane_g2_ParamLimits

0x96c2,	// (0x0005089f) main_camera4_pane_g2

0x96c2,	// (0x0005089f) main_camera4_pane_g3_ParamLimits

0x96c2,	// (0x0005089f) main_camera4_pane_g3

0x96ce,	// (0x000508ab) main_camera4_pane_g4_ParamLimits

0x96ce,	// (0x000508ab) main_camera4_pane_g4

0x96da,	// (0x000508b7) main_camera4_pane_g5_ParamLimits

0x96da,	// (0x000508b7) main_camera4_pane_g5

0x0005,

0xf86c,	// (0x00056a49) main_camera4_pane_g_ParamLimits

0xf86c,	// (0x00056a49) main_camera4_pane_g

0x96f4,	// (0x000508d1) main_camera4_pane_t1_ParamLimits

0x96f4,	// (0x000508d1) main_camera4_pane_t1

0x973c,	// (0x00050919) bg_tb_trans_pane_cp06

0x9752,	// (0x0005092f) cam4_indicators_pane_g1

0x9762,	// (0x0005093f) cam4_indicators_pane_g2

0x0002,

0xf887,	// (0x00056a64) cam4_indicators_pane_g

0x9782,	// (0x0005095f) cam4_indicators_pane_t1

0x97aa,	// (0x00050987) main_video4_pane_g1_ParamLimits

0x97aa,	// (0x00050987) main_video4_pane_g1

0x96c2,	// (0x0005089f) main_video4_pane_g2_ParamLimits

0x96c2,	// (0x0005089f) main_video4_pane_g2

0x96c2,	// (0x0005089f) main_video4_pane_g3_ParamLimits

0x96c2,	// (0x0005089f) main_video4_pane_g3

0x96ce,	// (0x000508ab) main_video4_pane_g4_ParamLimits

0x96ce,	// (0x000508ab) main_video4_pane_g4

0x0004,

0xf88e,	// (0x00056a6b) main_video4_pane_g_ParamLimits

0xf88e,	// (0x00056a6b) main_video4_pane_g

0x97be,	// (0x0005099b) vid4_indicators_pane_ParamLimits

0x97be,	// (0x0005099b) vid4_indicators_pane

0x97dc,	// (0x000509b9) video4_image_uncrop_cif_pane_ParamLimits

0x97dc,	// (0x000509b9) video4_image_uncrop_cif_pane

0x97e9,	// (0x000509c6) video4_image_uncrop_nhd_pane_ParamLimits

0x97e9,	// (0x000509c6) video4_image_uncrop_nhd_pane

0x9687,	// (0x00050864) video4_image_uncrop_vga_pane_ParamLimits

0x9687,	// (0x00050864) video4_image_uncrop_vga_pane

0x7fc1,	// (0x0004f19e) bg_tb_trans_pane_cp07

0x9752,	// (0x0005092f) vid4_indicators_pane_g1

0x97f6,	// (0x000509d3) vid4_indicators_pane_g2

0x9806,	// (0x000509e3) vid4_indicators_pane_g3

0x0004,

0xf899,	// (0x00056a76) vid4_indicators_pane_g

0x9833,	// (0x00050a10) vid4_indicators_pane_t1

0x984d,	// (0x00050a2a) cam4_autofocus_pane_g1

0x9855,	// (0x00050a32) cam4_autofocus_pane_g2

0x985d,	// (0x00050a3a) cam4_autofocus_pane_g3

0x0002,

0xf8a4,	// (0x00056a81) cam4_autofocus_pane_g

0x9865,	// (0x00050a42) cam4_autofocus_pane_g3_copy1

0x9079,	// (0x00050256) video_down_pane_cp_t1

0x9087,	// (0x00050264) video_down_pane_cp_t2

0x0001,

0xf81c,	// (0x000569f9) video_down_pane_cp_t

0x4e44,	// (0x0004c021) popup_vitu2_window_ParamLimits

0x4e44,	// (0x0004c021) popup_vitu2_window

0x986d,	// (0x00050a4a) aid_size_cell2_itu2_ParamLimits

0x986d,	// (0x00050a4a) aid_size_cell2_itu2

0x988f,	// (0x00050a6c) aid_size_cell_itu2_ParamLimits

0x988f,	// (0x00050a6c) aid_size_cell_itu2

0x98cd,	// (0x00050aaa) bg_popup_window_pane_cp09_ParamLimits

0x98cd,	// (0x00050aaa) bg_popup_window_pane_cp09

0x98db,	// (0x00050ab8) field_vitu2_entry_pane_ParamLimits

0x98db,	// (0x00050ab8) field_vitu2_entry_pane

0x98f1,	// (0x00050ace) grid_vitu2_function_pane_ParamLimits

0x98f1,	// (0x00050ace) grid_vitu2_function_pane

0x9923,	// (0x00050b00) grid_vitu2_itu_pane_ParamLimits

0x9923,	// (0x00050b00) grid_vitu2_itu_pane

0x997f,	// (0x00050b5c) cell_vitu2_itu_pane_ParamLimits

0x997f,	// (0x00050b5c) cell_vitu2_itu_pane

0x9997,	// (0x00050b74) cell_vitu2_function_pane_ParamLimits

0x9997,	// (0x00050b74) cell_vitu2_function_pane

0x18ac,	// (0x00048a89) bg_popup_call_pane_cp08_ParamLimits

0x18ac,	// (0x00048a89) bg_popup_call_pane_cp08

0x18c3,	// (0x00048aa0) field_vitu2_entry_pane_g1

0x18cf,	// (0x00048aac) field_vitu2_entry_pane_g2

0x0002,

0xf8ab,	// (0x00056a88) field_vitu2_entry_pane_g

0x99d6,	// (0x00050bb3) field_vitu2_entry_pane_t1_ParamLimits

0x99d6,	// (0x00050bb3) field_vitu2_entry_pane_t1

0x18db,	// (0x00048ab8) field_vitu2_entry_pane_t2_ParamLimits

0x18db,	// (0x00048ab8) field_vitu2_entry_pane_t2

0x0001,

0xf8b2,	// (0x00056a8f) field_vitu2_entry_pane_t_ParamLimits

0xf8b2,	// (0x00056a8f) field_vitu2_entry_pane_t

0x9a07,	// (0x00050be4) bg_button_pane_cp010_ParamLimits

0x9a07,	// (0x00050be4) bg_button_pane_cp010

0x9a15,	// (0x00050bf2) cell_vitu2_itu_pane_g1

0x9a3b,	// (0x00050c18) cell_vitu2_itu_pane_t1_ParamLimits

0x9a3b,	// (0x00050c18) cell_vitu2_itu_pane_t1

0x4b1c,	// (0x0004bcf9) cell_vitu2_itu_pane_t2_ParamLimits

0x4b1c,	// (0x0004bcf9) cell_vitu2_itu_pane_t2

0x0002,

0xf8bc,	// (0x00056a99) cell_vitu2_itu_pane_t_ParamLimits

0xf8bc,	// (0x00056a99) cell_vitu2_itu_pane_t

0x7fc1,	// (0x0004f19e) bg_button_pane_cp011

0x9a87,	// (0x00050c64) cell_vitu2_function_pane_g1

0x4e5a,	// (0x0004c037) main_myfav_hc_pane

0x9516,	// (0x000506f3) popup_image3_note_pane_ParamLimits

0x9516,	// (0x000506f3) popup_image3_note_pane

0x9522,	// (0x000506ff) popup_image3_tool_bar_pane_ParamLimits

0x9522,	// (0x000506ff) popup_image3_tool_bar_pane

0x4b92,	// (0x0004bd6f) cell_vitu2_itu_pane_t3_ParamLimits

0x4b92,	// (0x0004bd6f) cell_vitu2_itu_pane_t3

0x4bf8,	// (0x0004bdd5) bg_popup_trans_pane

0x1900,	// (0x00048add) grid_image3_tool_bar_pane

0x190a,	// (0x00048ae7) bg_popup_trans_pane_g1

0xd53c,	// (0x00054719) bg_popup_trans_pane_g2

0x1912,	// (0x00048aef) bg_popup_trans_pane_g3

0x191a,	// (0x00048af7) bg_popup_trans_pane_g4

0x1922,	// (0x00048aff) bg_popup_trans_pane_g5

0x192a,	// (0x00048b07) bg_popup_trans_pane_g6

0x1932,	// (0x00048b0f) bg_popup_trans_pane_g7

0x193a,	// (0x00048b17) bg_popup_trans_pane_g8

0xd51c,	// (0x000546f9) bg_popup_trans_pane_g9

0x0008,

0xf8c3,	// (0x00056aa0) bg_popup_trans_pane_g

0x1942,	// (0x00048b1f) cell_image3_tool_bar_pane_ParamLimits

0x1942,	// (0x00048b1f) cell_image3_tool_bar_pane

0xd31e,	// (0x000544fb) cell_image3_tool_bar_pane_g1

0x4bf8,	// (0x0004bdd5) bg_popup_trans_pane_cp1

0x1956,	// (0x00048b33) popup_image3_note_pane_t1

0x1964,	// (0x00048b41) popup_image3_note_pane_t2

0x1972,	// (0x00048b4f) popup_image3_note_pane_t3

0x0002,

0xf8d6,	// (0x00056ab3) popup_image3_note_pane_t

0x1980,	// (0x00048b5d) popup_image3_note_pane_t3_copy1

0x9a9b,	// (0x00050c78) bg_myfav_hc_instruction_pane_ParamLimits

0x9a9b,	// (0x00050c78) bg_myfav_hc_instruction_pane

0x9aad,	// (0x00050c8a) cell_myfav_contact_pane_ParamLimits

0x9aad,	// (0x00050c8a) cell_myfav_contact_pane

0x9ac7,	// (0x00050ca4) cell_myfav_contact_pane_cp1_ParamLimits

0x9ac7,	// (0x00050ca4) cell_myfav_contact_pane_cp1

0x9add,	// (0x00050cba) cell_myfav_contact_pane_cp2_ParamLimits

0x9add,	// (0x00050cba) cell_myfav_contact_pane_cp2

0x9af3,	// (0x00050cd0) cell_myfav_contact_pane_cp3_ParamLimits

0x9af3,	// (0x00050cd0) cell_myfav_contact_pane_cp3

0x9b08,	// (0x00050ce5) cell_myfav_contact_pane_cp4_ParamLimits

0x9b08,	// (0x00050ce5) cell_myfav_contact_pane_cp4

0x9b1c,	// (0x00050cf9) cell_myfav_contact_pane_cp5_ParamLimits

0x9b1c,	// (0x00050cf9) cell_myfav_contact_pane_cp5

0x9b30,	// (0x00050d0d) cell_myfav_contact_pane_cp6_ParamLimits

0x9b30,	// (0x00050d0d) cell_myfav_contact_pane_cp6

0x9b44,	// (0x00050d21) cell_myfav_contact_pane_cp7_ParamLimits

0x9b44,	// (0x00050d21) cell_myfav_contact_pane_cp7

0x198e,	// (0x00048b6b) listscroll_gen_pane_cp05

0x9b5c,	// (0x00050d39) main_myfav_hc_pane_g1_ParamLimits

0x9b5c,	// (0x00050d39) main_myfav_hc_pane_g1

0x9b72,	// (0x00050d4f) main_myfav_hc_pane_g2_ParamLimits

0x9b72,	// (0x00050d4f) main_myfav_hc_pane_g2

0x0002,

0xf8dd,	// (0x00056aba) main_myfav_hc_pane_g_ParamLimits

0xf8dd,	// (0x00056aba) main_myfav_hc_pane_g

0x9b9c,	// (0x00050d79) main_myfav_hc_pane_t1_ParamLimits

0x9b9c,	// (0x00050d79) main_myfav_hc_pane_t1

0x1997,	// (0x00048b74) main_myfav_hc_pane_t2_ParamLimits

0x1997,	// (0x00048b74) main_myfav_hc_pane_t2

0x19a9,	// (0x00048b86) main_myfav_hc_pane_t3_ParamLimits

0x19a9,	// (0x00048b86) main_myfav_hc_pane_t3

0x9bb1,	// (0x00050d8e) main_myfav_hc_pane_t4_ParamLimits

0x9bb1,	// (0x00050d8e) main_myfav_hc_pane_t4

0x0004,

0xf8e4,	// (0x00056ac1) main_myfav_hc_pane_t_ParamLimits

0xf8e4,	// (0x00056ac1) main_myfav_hc_pane_t

0xd31e,	// (0x000544fb) bg_myfav_hc_instruction_pane_g1

0x19bb,	// (0x00048b98) cell_myfav_contact_pane_g1_ParamLimits

0x19bb,	// (0x00048b98) cell_myfav_contact_pane_g1

0x19bb,	// (0x00048b98) cell_myfav_contact_pane_g2_ParamLimits

0x19bb,	// (0x00048b98) cell_myfav_contact_pane_g2

0x19c7,	// (0x00048ba4) cell_myfav_contact_pane_g3_ParamLimits

0x19c7,	// (0x00048ba4) cell_myfav_contact_pane_g3

0x5627,	// (0x0004c804) cell_myfav_contact_pane_g4_ParamLimits

0x5627,	// (0x0004c804) cell_myfav_contact_pane_g4

0x19d4,	// (0x00048bb1) cell_myfav_contact_pane_g5_ParamLimits

0x19d4,	// (0x00048bb1) cell_myfav_contact_pane_g5

0x0004,

0xf8ef,	// (0x00056acc) cell_myfav_contact_pane_g_ParamLimits

0xf8ef,	// (0x00056acc) cell_myfav_contact_pane_g

0x9b88,	// (0x00050d65) main_myfav_hc_pane_g3_ParamLimits

0x9b88,	// (0x00050d65) main_myfav_hc_pane_g3

0x4d8a,	// (0x0004bf67) popup_adpt_find_window

0x9bd5,	// (0x00050db2) afind_page_pane_ParamLimits

0x9bd5,	// (0x00050db2) afind_page_pane

0x9be2,	// (0x00050dbf) aid_size_cell_afind_ParamLimits

0x9be2,	// (0x00050dbf) aid_size_cell_afind

0x9bfc,	// (0x00050dd9) bg_popup_sub_pane_cp09_ParamLimits

0x9bfc,	// (0x00050dd9) bg_popup_sub_pane_cp09

0x9c09,	// (0x00050de6) find_pane_cp01_ParamLimits

0x9c09,	// (0x00050de6) find_pane_cp01

0x19e0,	// (0x00048bbd) grid_afind_control_pane_ParamLimits

0x19e0,	// (0x00048bbd) grid_afind_control_pane

0x9c16,	// (0x00050df3) grid_afind_pane_ParamLimits

0x9c16,	// (0x00050df3) grid_afind_pane

0x9c2c,	// (0x00050e09) cell_afind_pane_ParamLimits

0x9c2c,	// (0x00050e09) cell_afind_pane

0xd31e,	// (0x000544fb) afind_page_pane_g1

0x9c62,	// (0x00050e3f) afind_page_pane_g2

0x9c6a,	// (0x00050e47) afind_page_pane_g3

0x0002,

0xf8fa,	// (0x00056ad7) afind_page_pane_g

0x9c72,	// (0x00050e4f) afind_page_pane_t1

0x1a06,	// (0x00048be3) cell_afind_grid_control_pane_ParamLimits

0x1a06,	// (0x00048be3) cell_afind_grid_control_pane

0x17f9,	// (0x000489d6) bg_button_pane_cp69_ParamLimits

0x17f9,	// (0x000489d6) bg_button_pane_cp69

0x9c80,	// (0x00050e5d) cell_afind_pane_g1_ParamLimits

0x9c80,	// (0x00050e5d) cell_afind_pane_g1

0x9c8d,	// (0x00050e6a) cell_afind_pane_t1_ParamLimits

0x9c8d,	// (0x00050e6a) cell_afind_pane_t1

0xd328,	// (0x00054505) bg_button_pane_cp72

0x1a15,	// (0x00048bf2) cell_afind_grid_control_pane_g1

0x7bb4,	// (0x0004ed91) aid_image_placing_area_ParamLimits

0x7bb4,	// (0x0004ed91) aid_image_placing_area

0x5619,	// (0x0004c7f6) field_vitu_entry_pane_g1_ParamLimits

0x5619,	// (0x0004c7f6) field_vitu_entry_pane_g1

0x5619,	// (0x0004c7f6) field_vitu_entry_pane_g2_ParamLimits

0x5619,	// (0x0004c7f6) field_vitu_entry_pane_g2

0x0001,

0xf7a7,	// (0x00056984) field_vitu_entry_pane_g_ParamLimits

0xf7a7,	// (0x00056984) field_vitu_entry_pane_g

0x1553,	// (0x00048730) cell_vitu_itu_pane_g1_ParamLimits

0x1536,	// (0x00048713) cell_vitu_itu_pane_t3_ParamLimits

0x1536,	// (0x00048713) cell_vitu_itu_pane_t3

0x17ad,	// (0x0004898a) mp4_progress_pane_t1_ParamLimits

0x17c4,	// (0x000489a1) mp4_progress_pane_t2_ParamLimits

0xf840,	// (0x00056a1d) mp4_progress_pane_t_ParamLimits

0x17db,	// (0x000489b8) mup_progress_pane_cp04_ParamLimits

0x9bc3,	// (0x00050da0) main_myfav_hc_pane_t5_ParamLimits

0x9bc3,	// (0x00050da0) main_myfav_hc_pane_t5

0x4c42,	// (0x0004be1f) aid_zoom_text_primary

0x4d8a,	// (0x0004bf67) popup_adpt_find_window_ParamLimits

0x7fc1,	// (0x0004f19e) main_cam_set_pane

0x96aa,	// (0x00050887) cam4_zoom_pane_ParamLimits

0x96aa,	// (0x00050887) cam4_zoom_pane

0x9c9f,	// (0x00050e7c) main_cam_set_pane_g1_ParamLimits

0x9c9f,	// (0x00050e7c) main_cam_set_pane_g1

0x9cad,	// (0x00050e8a) main_cam_set_pane_g2_ParamLimits

0x9cad,	// (0x00050e8a) main_cam_set_pane_g2

0x0001,

0xf901,	// (0x00056ade) main_cam_set_pane_g_ParamLimits

0xf901,	// (0x00056ade) main_cam_set_pane_g

0x9cb9,	// (0x00050e96) main_cam_set_pane_t1_ParamLimits

0x9cb9,	// (0x00050e96) main_cam_set_pane_t1

0x9ccb,	// (0x00050ea8) main_cset_listscroll_pane_ParamLimits

0x9ccb,	// (0x00050ea8) main_cset_listscroll_pane

0x9cf9,	// (0x00050ed6) main_cset_slider_pane_ParamLimits

0x9cf9,	// (0x00050ed6) main_cset_slider_pane

0x1a26,	// (0x00048c03) main_cset_list_pane_ParamLimits

0x1a26,	// (0x00048c03) main_cset_list_pane

0x1a36,	// (0x00048c13) scroll_pane_cp028

0x9d18,	// (0x00050ef5) aid_area_touch_slider

0x9d34,	// (0x00050f11) cset_slider_pane

0x9d57,	// (0x00050f34) main_cset_slider_pane_g1

0x9d6c,	// (0x00050f49) main_cset_slider_pane_g2

0x0011,

0xf906,	// (0x00056ae3) main_cset_slider_pane_g

0x1a6f,	// (0x00048c4c) main_cset_slider_pane_t1

0x9e28,	// (0x00051005) main_cset_slider_pane_t2

0x9e42,	// (0x0005101f) main_cset_slider_pane_t3

0x9e5c,	// (0x00051039) main_cset_slider_pane_t4

0x9e76,	// (0x00051053) main_cset_slider_pane_t5

0x9e90,	// (0x0005106d) main_cset_slider_pane_t6

0x9ea5,	// (0x00051082) main_cset_slider_pane_t7

0x000e,

0xf92b,	// (0x00056b08) main_cset_slider_pane_t

0x9fa9,	// (0x00051186) cset_list_set_pane_ParamLimits

0x9fa9,	// (0x00051186) cset_list_set_pane

0x1b09,	// (0x00048ce6) aid_position_infowindow_above

0x1b11,	// (0x00048cee) aid_position_infowindow_below

0x9fb9,	// (0x00051196) cset_list_set_pane_g1_ParamLimits

0x9fb9,	// (0x00051196) cset_list_set_pane_g1

0x9fc5,	// (0x000511a2) cset_list_set_pane_g3_ParamLimits

0x9fc5,	// (0x000511a2) cset_list_set_pane_g3

0x0001,

0xf94a,	// (0x00056b27) cset_list_set_pane_g_ParamLimits

0xf94a,	// (0x00056b27) cset_list_set_pane_g

0x9fd4,	// (0x000511b1) cset_list_set_pane_t1_ParamLimits

0x9fd4,	// (0x000511b1) cset_list_set_pane_t1

0xdd6f,	// (0x00054f4c) list_highlight_pane_cp021_ParamLimits

0xdd6f,	// (0x00054f4c) list_highlight_pane_cp021

0xdddf,	// (0x00054fbc) cset_slider_pane_g1

0xddf1,	// (0x00054fce) cset_slider_pane_g2

0xdde8,	// (0x00054fc5) cset_slider_pane_g3

0x0002,

0xf94f,	// (0x00056b2c) cset_slider_pane_g

0x9fe9,	// (0x000511c6) aid_area_touch_cam4_zoom

0x9ff1,	// (0x000511ce) cam4_zoom_cont_pane

0x9ff9,	// (0x000511d6) cam4_zoom_pane_g1

0xa001,	// (0x000511de) cam4_zoom_pane_g2

0xa009,	// (0x000511e6) cam4_zoom_pane_g3

0x0002,

0xf956,	// (0x00056b33) cam4_zoom_pane_g

0xa011,	// (0x000511ee) cam4_zoom_cont_pane_g1

0xa01a,	// (0x000511f7) cam4_zoom_cont_pane_g2

0xa023,	// (0x00051200) cam4_zoom_cont_pane_g3

0x0002,

0xf95d,	// (0x00056b3a) cam4_zoom_cont_pane_g

0x9569,	// (0x00050746) call4_image_pane_ParamLimits

0x9569,	// (0x00050746) call4_image_pane

0x181d,	// (0x000489fa) call4_windows_conf_pane_ParamLimits

0x1830,	// (0x00048a0d) popup_call4_audio_in_window_ParamLimits

0x1830,	// (0x00048a0d) popup_call4_audio_in_window

0x4bf8,	// (0x0004bdd5) bg_popup_call2_act_pane_cp02

0x186e,	// (0x00048a4b) call4_list_conf_pane

0xd31e,	// (0x000544fb) call4_image_pane_g1

0xd31e,	// (0x000544fb) call4_image_pane_g2

0x0001,

0xf3c9,	// (0x000565a6) call4_image_pane_g

0x1b34,	// (0x00048d11) list_single_graphic_popup_conf4_pane_ParamLimits

0x1b34,	// (0x00048d11) list_single_graphic_popup_conf4_pane

0x4bf8,	// (0x0004bdd5) list_highlight_pane_cp022

0x1b47,	// (0x00048d24) list_single_graphic_popup_conf4_pane_g1

0xda1d,	// (0x00054bfa) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf964,	// (0x00056b41) list_single_graphic_popup_conf4_pane_g

0x1b4f,	// (0x00048d2c) list_single_graphic_popup_conf4_pane_t1

0x64a9,	// (0x0004d686) popup_vtel_slider_window_ParamLimits

0x64a9,	// (0x0004d686) popup_vtel_slider_window

0x17e7,	// (0x000489c4) dialer2_ne_pane_t2_ParamLimits

0x17e7,	// (0x000489c4) dialer2_ne_pane_t2

0x0001,

0xf845,	// (0x00056a22) dialer2_ne_pane_t_ParamLimits

0xf845,	// (0x00056a22) dialer2_ne_pane_t

0xdd6f,	// (0x00054f4c) bg_popup_sub_pane_cp010_ParamLimits

0xdd6f,	// (0x00054f4c) bg_popup_sub_pane_cp010

0xa02c,	// (0x00051209) popup_vtel_slider_window_g1_ParamLimits

0xa02c,	// (0x00051209) popup_vtel_slider_window_g1

0xa038,	// (0x00051215) popup_vtel_slider_window_g2_ParamLimits

0xa038,	// (0x00051215) popup_vtel_slider_window_g2

0x0003,

0xf969,	// (0x00056b46) popup_vtel_slider_window_g_ParamLimits

0xf969,	// (0x00056b46) popup_vtel_slider_window_g

0xa07e,	// (0x0005125b) vtel_slider_pane_ParamLimits

0xa07e,	// (0x0005125b) vtel_slider_pane

0xa08d,	// (0x0005126a) vtel_slider_pane_g1_ParamLimits

0xa08d,	// (0x0005126a) vtel_slider_pane_g1

0xa09a,	// (0x00051277) vtel_slider_pane_g2_ParamLimits

0xa09a,	// (0x00051277) vtel_slider_pane_g2

0xa0a7,	// (0x00051284) vtel_slider_pane_g3_ParamLimits

0xa0a7,	// (0x00051284) vtel_slider_pane_g3

0xa08d,	// (0x0005126a) vtel_slider_pane_g4_ParamLimits

0xa08d,	// (0x0005126a) vtel_slider_pane_g4

0xa0b4,	// (0x00051291) vtel_slider_pane_g5_ParamLimits

0xa0b4,	// (0x00051291) vtel_slider_pane_g5

0x0004,

0xf972,	// (0x00056b4f) vtel_slider_pane_g_ParamLimits

0xf972,	// (0x00056b4f) vtel_slider_pane_g

0x7fc1,	// (0x0004f19e) main_gallery2_pane

0x98b5,	// (0x00050a92) aid_size_row_itut2_dropdow_list_ParamLimits

0x98b5,	// (0x00050a92) aid_size_row_itut2_dropdow_list

0x9909,	// (0x00050ae6) grid_vitu2_function_top_pane_ParamLimits

0x9909,	// (0x00050ae6) grid_vitu2_function_top_pane

0x9947,	// (0x00050b24) popup_vitu2_dropdown_list_window_ParamLimits

0x9947,	// (0x00050b24) popup_vitu2_dropdown_list_window

0x9963,	// (0x00050b40) popup_vitu2_match_list_window

0xa0c1,	// (0x0005129e) cell_vitu2_function_top_pane_ParamLimits

0xa0c1,	// (0x0005129e) cell_vitu2_function_top_pane

0xa0d9,	// (0x000512b6) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa0d9,	// (0x000512b6) cell_vitu2_function_top_pane_cp01

0xa0f5,	// (0x000512d2) cell_vitu2_function_top_wide_pane_ParamLimits

0xa0f5,	// (0x000512d2) cell_vitu2_function_top_wide_pane

0x7fc1,	// (0x0004f19e) bg_button_pane_cp012

0xa112,	// (0x000512ef) cell_vitu2_function_top_pane_g1

0xa126,	// (0x00051303) bg_button_pane_cp013_ParamLimits

0xa126,	// (0x00051303) bg_button_pane_cp013

0xa142,	// (0x0005131f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa142,	// (0x0005131f) cell_vitu2_function_top_wide_pane_g1

0x4e44,	// (0x0004c021) bg_popup_sub_pane_cp20

0xa15a,	// (0x00051337) list_vitu2_match_list_pane

0x190a,	// (0x00048ae7) bg_popup_sub_pane_cp20_g1

0x1912,	// (0x00048aef) bg_popup_sub_pane_cp20_g2

0xd53c,	// (0x00054719) bg_popup_sub_pane_cp20_g3

0x191a,	// (0x00048af7) bg_popup_sub_pane_cp20_g4

0xd51c,	// (0x000546f9) bg_popup_sub_pane_cp20_g5

0x1b65,	// (0x00048d42) bg_popup_sub_pane_cp20_g6

0x192a,	// (0x00048b07) bg_popup_sub_pane_cp20_g7

0x1932,	// (0x00048b0f) bg_popup_sub_pane_cp20_g8

0x193a,	// (0x00048b17) bg_popup_sub_pane_cp20_g9

0x0008,

0xf97d,	// (0x00056b5a) bg_popup_sub_pane_cp20_g

0xa172,	// (0x0005134f) list_vitu2_match_list_item_pane_ParamLimits

0xa172,	// (0x0005134f) list_vitu2_match_list_item_pane

0xa184,	// (0x00051361) list_vitu2_match_list_item_pane_t1

0x4e5a,	// (0x0004c037) bg_popup_sub_pane_cp21

0xd29d,	// (0x0005447a) grid_vitu2_dropdown_list_pane

0xa192,	// (0x0005136f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa192,	// (0x0005136f) cell_vitu2_dropdown_list_char_pane

0xa1b0,	// (0x0005138d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa1b0,	// (0x0005138d) cell_vitu2_dropdown_list_ctrl_pane

0x1b8c,	// (0x00048d69) cell_vitu2_dropdown_list_char_pane_g1

0x1b83,	// (0x00048d60) cell_vitu2_dropdown_list_char_pane_g2

0x1b7a,	// (0x00048d57) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf99a,	// (0x00056b77) cell_vitu2_dropdown_list_char_pane_g

0xa1d8,	// (0x000513b5) cell_vitu2_dropdown_list_char_pane_t1

0xa1e6,	// (0x000513c3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa1e6,	// (0x000513c3) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa1f6,	// (0x000513d3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa1f6,	// (0x000513d3) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa207,	// (0x000513e4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa207,	// (0x000513e4) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa217,	// (0x000513f4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa217,	// (0x000513f4) cell_vitu2_dropdown_list_ctrl_pane_g4

0x973c,	// (0x00050919) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x973c,	// (0x00050919) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a1,	// (0x00056b7e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a1,	// (0x00056b7e) cell_vitu2_dropdown_list_ctrl_pane_g

0xa230,	// (0x0005140d) aid_size_cell_gallery2_ParamLimits

0xa230,	// (0x0005140d) aid_size_cell_gallery2

0xa24a,	// (0x00051427) grid_gallery2_pane_ParamLimits

0xa24a,	// (0x00051427) grid_gallery2_pane

0x8e53,	// (0x00050030) scroll_pane_cp029_ParamLimits

0x8e53,	// (0x00050030) scroll_pane_cp029

0xa25b,	// (0x00051438) cell_gallery2_pane_ParamLimits

0xa25b,	// (0x00051438) cell_gallery2_pane

0x1b95,	// (0x00048d72) cell_gallery2_pane_g2

0xa2a8,	// (0x00051485) cell_gallery2_pane_g3

0x1b9d,	// (0x00048d7a) cell_gallery2_pane_g4

0x1ba5,	// (0x00048d82) cell_gallery2_pane_g5

0xd29d,	// (0x0005447a) grid_highlight_pane_cp10

0x9963,	// (0x00050b40) popup_vitu2_match_list_window_ParamLimits

0x9973,	// (0x00050b50) popup_vitu2_query_window_ParamLimits

0x9973,	// (0x00050b50) popup_vitu2_query_window

0x4e5a,	// (0x0004c037) bg_vitu2_candi_button_pane

0x1b8c,	// (0x00048d69) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1b83,	// (0x00048d60) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1b7a,	// (0x00048d57) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xa2b0,	// (0x0005148d) bg_button_pane_cp015

0xa2c1,	// (0x0005149e) bg_button_pane_cp016

0xa2cd,	// (0x000514aa) bg_button_pane_cp017

0xeff2,	// (0x000561cf) bg_popup_sub_pane_cp22

0x1bad,	// (0x00048d8a) popup_vitu2_query_window_g1

0xa30b,	// (0x000514e8) popup_vitu2_query_window_g2

0x0002,

0xf9ac,	// (0x00056b89) popup_vitu2_query_window_g

0xa32b,	// (0x00051508) popup_vitu2_query_window_t1_ParamLimits

0xa32b,	// (0x00051508) popup_vitu2_query_window_t1

0xa35e,	// (0x0005153b) popup_vitu2_query_window_t2_ParamLimits

0xa35e,	// (0x0005153b) popup_vitu2_query_window_t2

0xa370,	// (0x0005154d) popup_vitu2_query_window_t3_ParamLimits

0xa370,	// (0x0005154d) popup_vitu2_query_window_t3

0xa398,	// (0x00051575) popup_vitu2_query_window_t4_ParamLimits

0xa398,	// (0x00051575) popup_vitu2_query_window_t4

0xa3aa,	// (0x00051587) popup_vitu2_query_window_t5_ParamLimits

0xa3aa,	// (0x00051587) popup_vitu2_query_window_t5

0x0006,

0xf9b3,	// (0x00056b90) popup_vitu2_query_window_t_ParamLimits

0xf9b3,	// (0x00056b90) popup_vitu2_query_window_t

0x1a1e,	// (0x00048bfb) main_cset_text_pane

0x9d18,	// (0x00050ef5) aid_area_touch_slider_ParamLimits

0x9d34,	// (0x00050f11) cset_slider_pane_ParamLimits

0x9d57,	// (0x00050f34) main_cset_slider_pane_g1_ParamLimits

0x9d6c,	// (0x00050f49) main_cset_slider_pane_g2_ParamLimits

0x1a3f,	// (0x00048c1c) main_cset_slider_pane_g3_ParamLimits

0x1a3f,	// (0x00048c1c) main_cset_slider_pane_g3

0x9d81,	// (0x00050f5e) main_cset_slider_pane_g4_ParamLimits

0x9d81,	// (0x00050f5e) main_cset_slider_pane_g4

0x9d90,	// (0x00050f6d) main_cset_slider_pane_g5_ParamLimits

0x9d90,	// (0x00050f6d) main_cset_slider_pane_g5

0x9d9c,	// (0x00050f79) main_cset_slider_pane_g6_ParamLimits

0x9d9c,	// (0x00050f79) main_cset_slider_pane_g6

0xf906,	// (0x00056ae3) main_cset_slider_pane_g_ParamLimits

0x1a6f,	// (0x00048c4c) main_cset_slider_pane_t1_ParamLimits

0x9e28,	// (0x00051005) main_cset_slider_pane_t2_ParamLimits

0x9e42,	// (0x0005101f) main_cset_slider_pane_t3_ParamLimits

0x9e5c,	// (0x00051039) main_cset_slider_pane_t4_ParamLimits

0x9e76,	// (0x00051053) main_cset_slider_pane_t5_ParamLimits

0x9e90,	// (0x0005106d) main_cset_slider_pane_t6_ParamLimits

0x9ea5,	// (0x00051082) main_cset_slider_pane_t7_ParamLimits

0x9ecf,	// (0x000510ac) main_cset_slider_pane_t8_ParamLimits

0x9ecf,	// (0x000510ac) main_cset_slider_pane_t8

0x9ef7,	// (0x000510d4) main_cset_slider_pane_t9_ParamLimits

0x9ef7,	// (0x000510d4) main_cset_slider_pane_t9

0x9f1f,	// (0x000510fc) main_cset_slider_pane_t10_ParamLimits

0x9f1f,	// (0x000510fc) main_cset_slider_pane_t10

0x9f47,	// (0x00051124) main_cset_slider_pane_t11_ParamLimits

0x9f47,	// (0x00051124) main_cset_slider_pane_t11

0x9f6f,	// (0x0005114c) main_cset_slider_pane_t12_ParamLimits

0x9f6f,	// (0x0005114c) main_cset_slider_pane_t12

0x9f8c,	// (0x00051169) main_cset_slider_pane_t13_ParamLimits

0x9f8c,	// (0x00051169) main_cset_slider_pane_t13

0xf92b,	// (0x00056b08) main_cset_slider_pane_t_ParamLimits

0x4bf8,	// (0x0004bdd5) bg_popup_sub_pane_cp011

0x1bb9,	// (0x00048d96) main_cset_text_pane_g1

0x1bc1,	// (0x00048d9e) main_cset_text_pane_t1

0x1bcf,	// (0x00048dac) main_cset_text_pane_t2

0x1bdd,	// (0x00048dba) main_cset_text_pane_t3

0x1beb,	// (0x00048dc8) main_cset_text_pane_t4

0x1bf9,	// (0x00048dd6) main_cset_text_pane_t5

0x1c07,	// (0x00048de4) main_cset_text_pane_t6

0x1c15,	// (0x00048df2) main_cset_text_pane_t7

0x0006,

0xf9c2,	// (0x00056b9f) main_cset_text_pane_t

0x4e5a,	// (0x0004c037) main_cam4_burst_pane

0x4e5a,	// (0x0004c037) main_cam5_pane

0x19f4,	// (0x00048bd1) bg_button_pane_cp019

0x19fd,	// (0x00048bda) bg_button_pane_cp020

0x1a4b,	// (0x00048c28) main_cset_slider_pane_g7_ParamLimits

0x1a4b,	// (0x00048c28) main_cset_slider_pane_g7

0x1a57,	// (0x00048c34) main_cset_slider_pane_g8_ParamLimits

0x1a57,	// (0x00048c34) main_cset_slider_pane_g8

0x9db0,	// (0x00050f8d) main_cset_slider_pane_g9_ParamLimits

0x9db0,	// (0x00050f8d) main_cset_slider_pane_g9

0x9dbc,	// (0x00050f99) main_cset_slider_pane_g10_ParamLimits

0x9dbc,	// (0x00050f99) main_cset_slider_pane_g10

0x9dc8,	// (0x00050fa5) main_cset_slider_pane_g11_ParamLimits

0x9dc8,	// (0x00050fa5) main_cset_slider_pane_g11

0x9dd4,	// (0x00050fb1) main_cset_slider_pane_g12_ParamLimits

0x9dd4,	// (0x00050fb1) main_cset_slider_pane_g12

0x9de0,	// (0x00050fbd) main_cset_slider_pane_g13_ParamLimits

0x9de0,	// (0x00050fbd) main_cset_slider_pane_g13

0x9dec,	// (0x00050fc9) main_cset_slider_pane_g14_ParamLimits

0x9dec,	// (0x00050fc9) main_cset_slider_pane_g14

0x9df8,	// (0x00050fd5) main_cset_slider_pane_g15_ParamLimits

0x9df8,	// (0x00050fd5) main_cset_slider_pane_g15

0x1a97,	// (0x00048c74) main_cset_slider_pane_t14_ParamLimits

0x1a97,	// (0x00048c74) main_cset_slider_pane_t14

0x1ad0,	// (0x00048cad) main_cset_slider_pane_t15_ParamLimits

0x1ad0,	// (0x00048cad) main_cset_slider_pane_t15

0xa412,	// (0x000515ef) aid_cam4_burst_size_cell_ParamLimits

0xa412,	// (0x000515ef) aid_cam4_burst_size_cell

0xa42e,	// (0x0005160b) grid_cam4_burst_pane_ParamLimits

0xa42e,	// (0x0005160b) grid_cam4_burst_pane

0xa450,	// (0x0005162d) linegrid_cam4_burst_pane_ParamLimits

0xa450,	// (0x0005162d) linegrid_cam4_burst_pane

0xa46e,	// (0x0005164b) scroll_pane_cp30_ParamLimits

0xa46e,	// (0x0005164b) scroll_pane_cp30

0xa47a,	// (0x00051657) cell_cam4_burst_pane_ParamLimits

0xa47a,	// (0x00051657) cell_cam4_burst_pane

0x1c23,	// (0x00048e00) linegrid_cam4_burst_pane_g1_ParamLimits

0x1c23,	// (0x00048e00) linegrid_cam4_burst_pane_g1

0xa4b2,	// (0x0005168f) linegrid_cam4_burst_pane_g2_ParamLimits

0xa4b2,	// (0x0005168f) linegrid_cam4_burst_pane_g2

0x1c30,	// (0x00048e0d) linegrid_cam4_burst_pane_g3_ParamLimits

0x1c30,	// (0x00048e0d) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d1,	// (0x00056bae) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d1,	// (0x00056bae) linegrid_cam4_burst_pane_g

0xa4c3,	// (0x000516a0) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa4c3,	// (0x000516a0) linegrid_cam4_burst_pane_g3_copy1

0x1c3d,	// (0x00048e1a) linegrid_cam4_burst_pane_g4_ParamLimits

0x1c3d,	// (0x00048e1a) linegrid_cam4_burst_pane_g4

0xa4dd,	// (0x000516ba) linegrid_cam4_burst_pane_g5_ParamLimits

0xa4dd,	// (0x000516ba) linegrid_cam4_burst_pane_g5

0xa4ee,	// (0x000516cb) linegrid_cam4_burst_pane_g6_ParamLimits

0xa4ee,	// (0x000516cb) linegrid_cam4_burst_pane_g6

0x1c4a,	// (0x00048e27) linegrid_cam4_burst_pane_g7_ParamLimits

0x1c4a,	// (0x00048e27) linegrid_cam4_burst_pane_g7

0xa4ff,	// (0x000516dc) cell_cam4_burst_pane_g1

0x1c63,	// (0x00048e40) main_cam5_pane_t1_ParamLimits

0x1c63,	// (0x00048e40) main_cam5_pane_t1

0x1c75,	// (0x00048e52) main_cam5_pane_t2_ParamLimits

0x1c75,	// (0x00048e52) main_cam5_pane_t2

0x1c87,	// (0x00048e64) main_cam5_pane_t3_ParamLimits

0x1c87,	// (0x00048e64) main_cam5_pane_t3

0x1c99,	// (0x00048e76) main_cam5_pane_t4_ParamLimits

0x1c99,	// (0x00048e76) main_cam5_pane_t4

0x1caf,	// (0x00048e8c) main_cam5_pane_t5_ParamLimits

0x1caf,	// (0x00048e8c) main_cam5_pane_t5

0x1cc1,	// (0x00048e9e) main_cam5_pane_t6_ParamLimits

0x1cc1,	// (0x00048e9e) main_cam5_pane_t6

0x1cd3,	// (0x00048eb0) main_cam5_pane_t7_ParamLimits

0x1cd3,	// (0x00048eb0) main_cam5_pane_t7

0x1ce5,	// (0x00048ec2) main_cam5_pane_t8_ParamLimits

0x1ce5,	// (0x00048ec2) main_cam5_pane_t8

0x1d01,	// (0x00048ede) main_cam5_pane_t9_ParamLimits

0x1d01,	// (0x00048ede) main_cam5_pane_t9

0x1d13,	// (0x00048ef0) main_cam5_pane_t10_ParamLimits

0x1d13,	// (0x00048ef0) main_cam5_pane_t10

0x1d25,	// (0x00048f02) main_cam5_pane_t11_ParamLimits

0x1d25,	// (0x00048f02) main_cam5_pane_t11

0x1d37,	// (0x00048f14) main_cam5_pane_t12_ParamLimits

0x1d37,	// (0x00048f14) main_cam5_pane_t12

0x1d4c,	// (0x00048f29) main_cam5_pane_t13_ParamLimits

0x1d4c,	// (0x00048f29) main_cam5_pane_t13

0x000c,

0xf9dd,	// (0x00056bba) main_cam5_pane_t_ParamLimits

0xf9dd,	// (0x00056bba) main_cam5_pane_t

0x4e03,	// (0x0004bfe0) popup_scut_keymap_window_ParamLimits

0x4e03,	// (0x0004bfe0) popup_scut_keymap_window

0xa512,	// (0x000516ef) aid_size_cell_brow_shortcut

0xd29d,	// (0x0005447a) bg_popup_window_pane_cp010

0xa51e,	// (0x000516fb) grid_scut_pane

0xa528,	// (0x00051705) cell_scut_pane_ParamLimits

0xa528,	// (0x00051705) cell_scut_pane

0xa53d,	// (0x0005171a) cell_scut_pane_g1

0x1d69,	// (0x00048f46) cell_scut_pane_t1

0x1d78,	// (0x00048f55) cell_scut_pane_t2

0xa546,	// (0x00051723) cell_scut_pane_t3

0x0002,

0xf9f8,	// (0x00056bd5) cell_scut_pane_t

0x875b,	// (0x0004f938) main_mup3_pane_g8_ParamLimits

0x875b,	// (0x0004f938) main_mup3_pane_g8

0x98c1,	// (0x00050a9e) area_vitu2_query_pane_ParamLimits

0x98c1,	// (0x00050a9e) area_vitu2_query_pane

0xa2d9,	// (0x000514b6) input_focus_pane_cp08

0x1d87,	// (0x00048f64) area_vitu2_query_pane_g1

0xa554,	// (0x00051731) area_vitu2_query_pane_g2

0x0001,

0xf9ff,	// (0x00056bdc) area_vitu2_query_pane_g

0xa563,	// (0x00051740) area_vitu2_query_pane_t1_ParamLimits

0xa563,	// (0x00051740) area_vitu2_query_pane_t1

0xa575,	// (0x00051752) area_vitu2_query_pane_t2_ParamLimits

0xa575,	// (0x00051752) area_vitu2_query_pane_t2

0xa587,	// (0x00051764) area_vitu2_query_pane_t3_ParamLimits

0xa587,	// (0x00051764) area_vitu2_query_pane_t3

0x1d93,	// (0x00048f70) area_vitu2_query_pane_t4_ParamLimits

0x1d93,	// (0x00048f70) area_vitu2_query_pane_t4

0x1dbb,	// (0x00048f98) area_vitu2_query_pane_t5_ParamLimits

0x1dbb,	// (0x00048f98) area_vitu2_query_pane_t5

0x1de3,	// (0x00048fc0) area_vitu2_query_pane_t6_ParamLimits

0x1de3,	// (0x00048fc0) area_vitu2_query_pane_t6

0x0006,

0xfa04,	// (0x00056be1) area_vitu2_query_pane_t_ParamLimits

0xfa04,	// (0x00056be1) area_vitu2_query_pane_t

0xa2c1,	// (0x0005149e) bg_button_pane_cp018

0xa5af,	// (0x0005178c) bg_button_pane_cp021

0xa5bb,	// (0x00051798) bg_button_pane_cp022

0xa5da,	// (0x000517b7) input_focus_pane_cp09

0x75a3,	// (0x0004e780) aid_size_touch_mv_arrow_left

0xdb53,	// (0x00054d30) aid_size_touch_mv_arrow_right

0x9e10,	// (0x00050fed) main_cset_slider_pane_g16_ParamLimits

0x9e10,	// (0x00050fed) main_cset_slider_pane_g16

0x9e1c,	// (0x00050ff9) main_cset_slider_pane_g17_ParamLimits

0x9e1c,	// (0x00050ff9) main_cset_slider_pane_g17

0xa4ff,	// (0x000516dc) cell_cam4_burst_pane_g1_ParamLimits

0x4bf8,	// (0x0004bdd5) compa_mode_pane

0xa044,	// (0x00051221) popup_vtel_slider_window_g3_ParamLimits

0xa044,	// (0x00051221) popup_vtel_slider_window_g3

0xa058,	// (0x00051235) popup_vtel_slider_window_g4_ParamLimits

0xa058,	// (0x00051235) popup_vtel_slider_window_g4

0xa06c,	// (0x00051249) popup_vtel_slider_window_t1_ParamLimits

0xa06c,	// (0x00051249) popup_vtel_slider_window_t1

0x4e5a,	// (0x0004c037) main_cl_pane

0x804d,	// (0x0004f22a) popup_imed_adjust2_window_ParamLimits

0xeff2,	// (0x000561cf) bg_tb_trans_pane_cp05_ParamLimits

0x146b,	// (0x00048648) popup_imed_adjust2_window_g1_ParamLimits

0x147a,	// (0x00048657) popup_imed_adjust2_window_g2_ParamLimits

0x147a,	// (0x00048657) popup_imed_adjust2_window_g2

0x1486,	// (0x00048663) popup_imed_adjust2_window_g3_ParamLimits

0x1486,	// (0x00048663) popup_imed_adjust2_window_g3

0x0002,

0xf76b,	// (0x00056948) popup_imed_adjust2_window_g_ParamLimits

0xf76b,	// (0x00056948) popup_imed_adjust2_window_g

0x1492,	// (0x0004866f) popup_imed_adjust2_window_t1_ParamLimits

0x14aa,	// (0x00048687) slider_imed_adjust_pane_ParamLimits

0x14be,	// (0x0004869b) slider_imed_adjust_pane_g1_ParamLimits

0x14ce,	// (0x000486ab) slider_imed_adjust_pane_g2_ParamLimits

0x14de,	// (0x000486bb) slider_imed_adjust_pane_g3_ParamLimits

0x14ef,	// (0x000486cc) slider_imed_adjust_pane_g4_ParamLimits

0xf772,	// (0x0005694f) slider_imed_adjust_pane_g_ParamLimits

0x965b,	// (0x00050838) aid_touch_area_cam4_ParamLimits

0x965b,	// (0x00050838) aid_touch_area_cam4

0x9669,	// (0x00050846) battery_pane_cp01

0x96e8,	// (0x000508c5) main_camera4_pane_g6_ParamLimits

0x96e8,	// (0x000508c5) main_camera4_pane_g6

0x9706,	// (0x000508e3) main_camera4_pane_t2_ParamLimits

0x9706,	// (0x000508e3) main_camera4_pane_t2

0x0001,

0xf879,	// (0x00056a56) main_camera4_pane_t_ParamLimits

0xf879,	// (0x00056a56) main_camera4_pane_t

0x979c,	// (0x00050979) aid_touch_area_vid4_ParamLimits

0x979c,	// (0x00050979) aid_touch_area_vid4

0x96e8,	// (0x000508c5) main_video4_pane_g5_ParamLimits

0x96e8,	// (0x000508c5) main_video4_pane_g5

0x97cc,	// (0x000509a9) vid4_progress_pane_ParamLimits

0x97cc,	// (0x000509a9) vid4_progress_pane

0x1a63,	// (0x00048c40) main_cset_slider_pane_g18_ParamLimits

0x1a63,	// (0x00048c40) main_cset_slider_pane_g18

0x1c57,	// (0x00048e34) cell_cam4_burst_pane_g2_ParamLimits

0x1c57,	// (0x00048e34) cell_cam4_burst_pane_g2

0x0001,

0xf9d8,	// (0x00056bb5) cell_cam4_burst_pane_g_ParamLimits

0xf9d8,	// (0x00056bb5) cell_cam4_burst_pane_g

0xa5ea,	// (0x000517c7) bg_cl_pane_ParamLimits

0xa5ea,	// (0x000517c7) bg_cl_pane

0xa5f6,	// (0x000517d3) cl_header_pane_ParamLimits

0xa5f6,	// (0x000517d3) cl_header_pane

0xa602,	// (0x000517df) cl_listscroll_pane_ParamLimits

0xa602,	// (0x000517df) cl_listscroll_pane

0x1e2f,	// (0x0004900c) bg_cl_pane_g1

0x1e37,	// (0x00049014) bg_cl_pane_g2

0x1e3f,	// (0x0004901c) bg_cl_pane_g3

0x1e47,	// (0x00049024) bg_cl_pane_g4

0x1e4f,	// (0x0004902c) bg_cl_pane_g5

0x1e57,	// (0x00049034) bg_cl_pane_g6

0x1e5f,	// (0x0004903c) bg_cl_pane_g7

0x1e67,	// (0x00049044) bg_cl_pane_g8

0x1e6f,	// (0x0004904c) bg_cl_pane_g9

0x0008,

0xfa13,	// (0x00056bf0) bg_cl_pane_g

0xa60e,	// (0x000517eb) aid_height_cl_leading_ParamLimits

0xa60e,	// (0x000517eb) aid_height_cl_leading

0xa61a,	// (0x000517f7) aid_height_cl_text_ParamLimits

0xa61a,	// (0x000517f7) aid_height_cl_text

0x5635,	// (0x0004c812) bg_cl_header_pane_ParamLimits

0x5635,	// (0x0004c812) bg_cl_header_pane

0xa632,	// (0x0005180f) cl_header_pane_g1_ParamLimits

0xa632,	// (0x0005180f) cl_header_pane_g1

0xa63f,	// (0x0005181c) cl_header_pane_t1_ParamLimits

0xa63f,	// (0x0005181c) cl_header_pane_t1

0x1e77,	// (0x00049054) cl_list_pane

0x1e80,	// (0x0004905d) hc_scroll_pane_cp01

0xd51c,	// (0x000546f9) bg_cl_header_pane_g1

0x190a,	// (0x00048ae7) bg_cl_header_pane_g2

0xd53c,	// (0x00054719) bg_cl_header_pane_g3

0x191a,	// (0x00048af7) bg_cl_header_pane_g4

0x1912,	// (0x00048aef) bg_cl_header_pane_g5

0x1b65,	// (0x00048d42) bg_cl_header_pane_g6

0x1932,	// (0x00048b0f) bg_cl_header_pane_g7

0x193a,	// (0x00048b17) bg_cl_header_pane_g8

0x192a,	// (0x00048b07) bg_cl_header_pane_g9

0x0008,

0xfa26,	// (0x00056c03) bg_cl_header_pane_g

0xa651,	// (0x0005182e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa651,	// (0x0005182e) hc_cl_list_double_graphic_heading_pane

0xa661,	// (0x0005183e) hc_cl_list_single_graphic_pane_ParamLimits

0xa661,	// (0x0005183e) hc_cl_list_single_graphic_pane

0xa673,	// (0x00051850) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa673,	// (0x00051850) hc_cl_list_single_graphic_pane_g1

0xa67f,	// (0x0005185c) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa67f,	// (0x0005185c) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa39,	// (0x00056c16) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa39,	// (0x00056c16) hc_cl_list_single_graphic_pane_g

0xa693,	// (0x00051870) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa693,	// (0x00051870) hc_cl_list_single_graphic_pane_t1

0xa673,	// (0x00051850) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa673,	// (0x00051850) hc_cl_list_double_graphic_heading_pane_g1

0xa6a8,	// (0x00051885) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa6a8,	// (0x00051885) hc_cl_list_double_graphic_heading_pane_g2

0xa6bc,	// (0x00051899) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa6bc,	// (0x00051899) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa3e,	// (0x00056c1b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa3e,	// (0x00056c1b) hc_cl_list_double_graphic_heading_pane_g

0xa6d0,	// (0x000518ad) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa6d0,	// (0x000518ad) hc_cl_list_double_graphic_heading_pane_t1

0xa6e5,	// (0x000518c2) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa6e5,	// (0x000518c2) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa45,	// (0x00056c22) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa45,	// (0x00056c22) hc_cl_list_double_graphic_heading_pane_t

0xa6fa,	// (0x000518d7) vid4_progress_pane_g1

0xa709,	// (0x000518e6) vid4_progress_pane_g2

0xa718,	// (0x000518f5) vid4_progress_pane_g3

0xa727,	// (0x00051904) vid4_progress_pane_g4

0x0004,

0xfa4a,	// (0x00056c27) vid4_progress_pane_g

0xa73f,	// (0x0005191c) vid4_progress_pane_t1

0xa755,	// (0x00051932) vid4_progress_pane_t2

0x0002,

0xfa55,	// (0x00056c32) vid4_progress_pane_t

0xa77f,	// (0x0005195c) wait_bar_pane_cp07

0x0d96,	// (0x00047f73) blid_firmament_pane_ParamLimits

0x0dd7,	// (0x00047fb4) popup_blid_sat_info2_window_g1

0x0dfb,	// (0x00047fd8) popup_blid_sat_info2_window_t3

0x0e09,	// (0x00047fe6) popup_blid_sat_info2_window_t4

0x0e17,	// (0x00047ff4) popup_blid_sat_info2_window_t5

0x0e25,	// (0x00048002) popup_blid_sat_info2_window_t6

0x0e35,	// (0x00048012) popup_blid_sat_info2_window_t7

0x0e43,	// (0x00048020) popup_blid_sat_info2_window_t8

0x0e51,	// (0x0004802e) popup_blid_sat_info2_window_t9

0x0e5f,	// (0x0004803c) popup_blid_sat_info2_window_t10

0x0f1a,	// (0x000480f7) aid_firma_cardinal_ParamLimits

0x0f2e,	// (0x0004810b) blid_firmament_pane_t1_ParamLimits

0x0f45,	// (0x00048122) blid_firmament_pane_t2_ParamLimits

0x0f5c,	// (0x00048139) blid_firmament_pane_t3_ParamLimits

0x0f73,	// (0x00048150) blid_firmament_pane_t4_ParamLimits

0xf664,	// (0x00056841) blid_firmament_pane_t_ParamLimits

0x0f8a,	// (0x00048167) blid_sat_info_pane_ParamLimits

0x7fc1,	// (0x0004f19e) main_cam_set_pane_ParamLimits

0x8df3,	// (0x0004ffd0) aid_size_cell_colour_35_ParamLimits

0x8e0a,	// (0x0004ffe7) aid_size_cell_colour_112_ParamLimits

0x8e21,	// (0x0004fffe) aid_size_cell_effect_ParamLimits

0xdd6f,	// (0x00054f4c) bg_tb_trans_pane_cp02_ParamLimits

0xf00a,	// (0x000561e7) heading_imed_pane_ParamLimits

0x8e3b,	// (0x00050018) listscroll_imed_pane_ParamLimits

0xe6ab,	// (0x00055888) popup_call2_audio_first_window_g5_ParamLimits

0xe6ab,	// (0x00055888) popup_call2_audio_first_window_g5

0x93ea,	// (0x000505c7) aid_size_touch_image3_arrow_left_ParamLimits

0x93ea,	// (0x000505c7) aid_size_touch_image3_arrow_left

0x93fe,	// (0x000505db) aid_size_touch_image3_arrow_right_ParamLimits

0x93fe,	// (0x000505db) aid_size_touch_image3_arrow_right

0xa76a,	// (0x00051947) vid4_progress_pane_t3

0x8f9f,	// (0x0005017c) main_hwr_training_symbol_option_pane_ParamLimits

0x8f9f,	// (0x0005017c) main_hwr_training_symbol_option_pane

0x1698,	// (0x00048875) popup_hwr_training_preview_window_ParamLimits

0x1698,	// (0x00048875) popup_hwr_training_preview_window

0x8ffa,	// (0x000501d7) hwr_training_navi_pane_g5_ParamLimits

0x8ffa,	// (0x000501d7) hwr_training_navi_pane_g5

0x18f8,	// (0x00048ad5) popup_char_count_window

0x4e44,	// (0x0004c021) bg_popup_sub_pane_cp20_ParamLimits

0xa15a,	// (0x00051337) list_vitu2_match_list_pane_ParamLimits

0xa166,	// (0x00051343) vitu2_page_scroll_pane_ParamLimits

0xa166,	// (0x00051343) vitu2_page_scroll_pane

0x1eb4,	// (0x00049091) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1eb4,	// (0x00049091) list_single_hwr_training_symbol_option_pane

0x1ec7,	// (0x000490a4) list_single_hwr_training_symbol_option_pane_g1

0x1ecf,	// (0x000490ac) list_single_hwr_training_symbol_option_pane_t1

0x1edd,	// (0x000490ba) bg_button_pane_cp023

0x1ee6,	// (0x000490c3) bg_button_pane_cp024

0xa7ac,	// (0x00051989) vitu2_page_scroll_pane_g1

0xa7b4,	// (0x00051991) vitu2_page_scroll_pane_g2

0x0001,

0xfa5c,	// (0x00056c39) vitu2_page_scroll_pane_g

0xa7bc,	// (0x00051999) vitu2_page_scroll_pane_t1

0x0fb9,	// (0x00048196) popup_char_count_window_g1

0x1f19,	// (0x000490f6) popup_char_count_window_g2

0x1f22,	// (0x000490ff) popup_char_count_window_g3

0x0002,

0xfa61,	// (0x00056c3e) popup_char_count_window_g

0x1f2b,	// (0x00049108) popup_char_count_window_t1

0x4e5a,	// (0x0004c037) main_vded2_pane

0x1459,	// (0x00048636) aid_size_cell_imed_line

0x1463,	// (0x00048640) grid_imed_line_width_pane

0x9817,	// (0x000509f4) vid4_indicators_pane_g4

0x1f39,	// (0x00049116) cell_imed_line_width_pane_ParamLimits

0x1f39,	// (0x00049116) cell_imed_line_width_pane

0x1f4b,	// (0x00049128) cell_imed_line_width_pane_g1

0x1f54,	// (0x00049131) cell_imed_line_width_pane_g2

0x0001,

0xfa68,	// (0x00056c45) cell_imed_line_width_pane_g

0xa7cb,	// (0x000519a8) main_vded2_pane_g1_ParamLimits

0xa7cb,	// (0x000519a8) main_vded2_pane_g1

0xa7d8,	// (0x000519b5) main_vded2_pane_g2_ParamLimits

0xa7d8,	// (0x000519b5) main_vded2_pane_g2

0x0001,

0xfa6d,	// (0x00056c4a) main_vded2_pane_g_ParamLimits

0xfa6d,	// (0x00056c4a) main_vded2_pane_g

0xa7e4,	// (0x000519c1) vded2_slider_pane_ParamLimits

0xa7e4,	// (0x000519c1) vded2_slider_pane

0xa7f1,	// (0x000519ce) aid_size_touch_vded2_end

0xa7f9,	// (0x000519d6) aid_size_touch_vded2_playhead

0xa801,	// (0x000519de) aid_size_touch_vded2_start

0xa809,	// (0x000519e6) vded2_slider_bg_pane

0xa812,	// (0x000519ef) vded2_slider_pane_g1

0xa81b,	// (0x000519f8) vded2_slider_pane_g2

0xa823,	// (0x00051a00) vded2_slider_pane_g3

0x0002,

0xfa72,	// (0x00056c4f) vded2_slider_pane_g

0xa82c,	// (0x00051a09) vded2_slider_bg_pane_g1

0xa835,	// (0x00051a12) vded2_slider_bg_pane_g2

0xa83e,	// (0x00051a1b) vded2_slider_bg_pane_g3

0x0002,

0xfa79,	// (0x00056c56) vded2_slider_bg_pane_g

0x7964,	// (0x0004eb41) aid_postcard_touch_down_pane_ParamLimits

0x7964,	// (0x0004eb41) aid_postcard_touch_down_pane

0x7970,	// (0x0004eb4d) aid_postcard_touch_up_pane_ParamLimits

0x7970,	// (0x0004eb4d) aid_postcard_touch_up_pane

0x4e5a,	// (0x0004c037) main_blid2_pane

0x7fea,	// (0x0004f1c7) popup_blid2_search_window

0x4bf8,	// (0x0004bdd5) blid2_gps_pane

0x4bf8,	// (0x0004bdd5) blid2_navig_pane

0x4bf8,	// (0x0004bdd5) blid2_search_pane

0x4bf8,	// (0x0004bdd5) blid2_tripm_pane

0xa847,	// (0x00051a24) blid2_search_pane_g1_ParamLimits

0xa847,	// (0x00051a24) blid2_search_pane_g1

0xa853,	// (0x00051a30) blid2_search_pane_t1_ParamLimits

0xa853,	// (0x00051a30) blid2_search_pane_t1

0xa865,	// (0x00051a42) aid_size_cell_blid2_gps_ParamLimits

0xa865,	// (0x00051a42) aid_size_cell_blid2_gps

0xa875,	// (0x00051a52) blid2_gps_pane_g1_ParamLimits

0xa875,	// (0x00051a52) blid2_gps_pane_g1

0xa881,	// (0x00051a5e) grid_blid2_satellite_pane_ParamLimits

0xa881,	// (0x00051a5e) grid_blid2_satellite_pane

0xa88d,	// (0x00051a6a) blid2_navig_pane_g1_ParamLimits

0xa88d,	// (0x00051a6a) blid2_navig_pane_g1

0xa899,	// (0x00051a76) blid2_navig_pane_t1_ParamLimits

0xa899,	// (0x00051a76) blid2_navig_pane_t1

0xa8ab,	// (0x00051a88) blid2_navig_pane_t2_ParamLimits

0xa8ab,	// (0x00051a88) blid2_navig_pane_t2

0x0001,

0xfa80,	// (0x00056c5d) blid2_navig_pane_t_ParamLimits

0xfa80,	// (0x00056c5d) blid2_navig_pane_t

0xa8bd,	// (0x00051a9a) blid2_navig_ring_pane_ParamLimits

0xa8bd,	// (0x00051a9a) blid2_navig_ring_pane

0xa8c9,	// (0x00051aa6) blid2_speed_pane_ParamLimits

0xa8c9,	// (0x00051aa6) blid2_speed_pane

0xa8d5,	// (0x00051ab2) blid2_tripm_pane_g1_ParamLimits

0xa8d5,	// (0x00051ab2) blid2_tripm_pane_g1

0xa8e1,	// (0x00051abe) blid2_tripm_pane_g2_ParamLimits

0xa8e1,	// (0x00051abe) blid2_tripm_pane_g2

0xa8ed,	// (0x00051aca) blid2_tripm_pane_g3_ParamLimits

0xa8ed,	// (0x00051aca) blid2_tripm_pane_g3

0xa8f9,	// (0x00051ad6) blid2_tripm_pane_g4_ParamLimits

0xa8f9,	// (0x00051ad6) blid2_tripm_pane_g4

0xa905,	// (0x00051ae2) blid2_tripm_pane_g5_ParamLimits

0xa905,	// (0x00051ae2) blid2_tripm_pane_g5

0x0005,

0xfa85,	// (0x00056c62) blid2_tripm_pane_g_ParamLimits

0xfa85,	// (0x00056c62) blid2_tripm_pane_g

0xa91d,	// (0x00051afa) blid2_tripm_pane_t1_ParamLimits

0xa91d,	// (0x00051afa) blid2_tripm_pane_t1

0xa92f,	// (0x00051b0c) blid2_tripm_pane_t2_ParamLimits

0xa92f,	// (0x00051b0c) blid2_tripm_pane_t2

0xa941,	// (0x00051b1e) blid2_tripm_pane_t3_ParamLimits

0xa941,	// (0x00051b1e) blid2_tripm_pane_t3

0x0003,

0xfa92,	// (0x00056c6f) blid2_tripm_pane_t_ParamLimits

0xfa92,	// (0x00056c6f) blid2_tripm_pane_t

0xa971,	// (0x00051b4e) cell_blid2_satellite_pane_ParamLimits

0xa971,	// (0x00051b4e) cell_blid2_satellite_pane

0xa989,	// (0x00051b66) cell_blid2_satellite_pane_g1

0x1f5c,	// (0x00049139) cell_blid2_satellite_pane_t1

0xd31e,	// (0x000544fb) blid2_speed_pane_g1

0x1f6a,	// (0x00049147) blid2_speed_pane_t1

0x1f78,	// (0x00049155) blid2_speed_pane_t2

0x0001,

0xfa9b,	// (0x00056c78) blid2_speed_pane_t

0xd31e,	// (0x000544fb) blid2_navig_ring_pane_g1

0xa992,	// (0x00051b6f) blid2_navig_ring_pane_g2

0xa99a,	// (0x00051b77) blid2_navig_ring_pane_g3

0xa9a2,	// (0x00051b7f) blid2_navig_ring_pane_g4

0xa9aa,	// (0x00051b87) blid2_navig_ring_pane_g5

0x0004,

0xfaa0,	// (0x00056c7d) blid2_navig_ring_pane_g

0x4bf8,	// (0x0004bdd5) bg_popup_window_pane_cp011

0x1f86,	// (0x00049163) popup_blid2_search_window_g1

0x1f8e,	// (0x0004916b) popup_blid2_search_window_t1

0x1f9c,	// (0x00049179) popup_blid2_search_window_t2

0x0001,

0xfaab,	// (0x00056c88) popup_blid2_search_window_t

0xd42b,	// (0x00054608) main_browser_pane_g1

0x57ea,	// (0x0004c9c7) main_browser_pane_ParamLimits

0x7fc1,	// (0x0004f19e) bg_button_pane_cp011_ParamLimits

0x9a87,	// (0x00050c64) cell_vitu2_function_pane_g1_ParamLimits

0xeff2,	// (0x000561cf) bg_popup_sub_pane_cp22_ParamLimits

0xa2d9,	// (0x000514b6) input_focus_pane_cp08_ParamLimits

0xa2f4,	// (0x000514d1) popup_vitu2_query_button_pane_ParamLimits

0xa2f4,	// (0x000514d1) popup_vitu2_query_button_pane

0xa303,	// (0x000514e0) popup_vitu2_query_input_button_pane

0x1bad,	// (0x00048d8a) popup_vitu2_query_window_g1_ParamLimits

0xa30b,	// (0x000514e8) popup_vitu2_query_window_g2_ParamLimits

0xf9ac,	// (0x00056b89) popup_vitu2_query_window_g_ParamLimits

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp026

0xa9b2,	// (0x00051b8f) popup_vitu2_query_input_button_pane_g1

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp025

0x1faa,	// (0x00049187) popup_vitu2_query_button_pane_t1

0x84d9,	// (0x0004f6b6) main_mp3_pane_t6

0x84e7,	// (0x0004f6c4) popup_slider_window_cp01

0x974a,	// (0x00050927) cam4_battery_pane

0x974a,	// (0x00050927) cam4_battery_pane_cp02

0x974a,	// (0x00050927) cam4_battery_pane_cp01

0x974a,	// (0x00050927) cam4_battery_pane_cp03

0x1fb8,	// (0x00049195) cam4_battery_pane_g1

0xd31e,	// (0x000544fb) cam4_battery_pane_g2

0x0001,

0xfab0,	// (0x00056c8d) cam4_battery_pane_g

0x0e6d,	// (0x0004804a) popup_blid_sat_info2_window_t11

0x75a3,	// (0x0004e780) aid_size_touch_mv_arrow_left_ParamLimits

0xdb53,	// (0x00054d30) aid_size_touch_mv_arrow_right_ParamLimits

0xdbac,	// (0x00054d89) navi_pane_g1_ParamLimits

0xdbb8,	// (0x00054d95) navi_pane_g2_ParamLimits

0x75c7,	// (0x0004e7a4) navi_pane_g3_ParamLimits

0xf365,	// (0x00056542) navi_pane_g_ParamLimits

0x75e4,	// (0x0004e7c1) navi_pane_mv_t1_ParamLimits

0x8e47,	// (0x00050024) grid_imed_effect_pane_ParamLimits

0x6385,	// (0x0004d562) aid_placing_vt_slider_lsc

0xd36d,	// (0x0005454a) aid_placing_vt_slider_prt

0xdd6f,	// (0x00054f4c) bg_tb_trans_pane_cp01_ParamLimits

0x10d1,	// (0x000482ae) popup_image_details_window_g1_ParamLimits

0x10e4,	// (0x000482c1) popup_image_details_window_g2_ParamLimits

0x10f9,	// (0x000482d6) popup_image_details_window_g3_ParamLimits

0x10f9,	// (0x000482d6) popup_image_details_window_g3

0xf6a4,	// (0x00056881) popup_image_details_window_g_ParamLimits

0x110d,	// (0x000482ea) popup_image_details_window_t1_ParamLimits

0x111f,	// (0x000482fc) popup_image_details_window_t2_ParamLimits

0x1138,	// (0x00048315) popup_image_details_window_t3_ParamLimits

0x114c,	// (0x00048329) popup_image_details_window_t4_ParamLimits

0x1167,	// (0x00048344) popup_image_details_window_t5_ParamLimits

0xf6ab,	// (0x00056888) popup_image_details_window_t_ParamLimits

0xa626,	// (0x00051803) cl_header_name_pane_ParamLimits

0xa626,	// (0x00051803) cl_header_name_pane

0xa9ba,	// (0x00051b97) cl_header_name_pane_t1_ParamLimits

0xa9ba,	// (0x00051b97) cl_header_name_pane_t1

0xa9d1,	// (0x00051bae) cl_header_name_pane_t2_ParamLimits

0xa9d1,	// (0x00051bae) cl_header_name_pane_t2

0xa9fb,	// (0x00051bd8) cl_header_name_pane_t3_ParamLimits

0xa9fb,	// (0x00051bd8) cl_header_name_pane_t3

0x0002,

0xfab5,	// (0x00056c92) cl_header_name_pane_t_ParamLimits

0xfab5,	// (0x00056c92) cl_header_name_pane_t

0xdc45,	// (0x00054e22) navi_pane_mv_g2_ParamLimits

0x18c3,	// (0x00048aa0) field_vitu2_entry_pane_g1_ParamLimits

0x18cf,	// (0x00048aac) field_vitu2_entry_pane_g2_ParamLimits

0xf02a,	// (0x00056207) field_vitu2_entry_pane_g3_ParamLimits

0xf02a,	// (0x00056207) field_vitu2_entry_pane_g3

0xf8ab,	// (0x00056a88) field_vitu2_entry_pane_g_ParamLimits

0x9a15,	// (0x00050bf2) cell_vitu2_itu_pane_g1_ParamLimits

0x9a2d,	// (0x00050c0a) cell_vitu2_itu_pane_g2_ParamLimits

0x9a2d,	// (0x00050c0a) cell_vitu2_itu_pane_g2

0x0001,

0xf8b7,	// (0x00056a94) cell_vitu2_itu_pane_g_ParamLimits

0xf8b7,	// (0x00056a94) cell_vitu2_itu_pane_g

0x7fc1,	// (0x0004f19e) bg_vkb2_func_pane_cp05_ParamLimits

0x7fc1,	// (0x0004f19e) bg_vkb2_func_pane_cp05

0x7fc1,	// (0x0004f19e) bg_vkb2_func_pane_cp03

0x7fc1,	// (0x0004f19e) bg_vkb2_func_pane_cp04

0x7fc1,	// (0x0004f19e) bg_vkb2_func_pane_cp10_ParamLimits

0x7fc1,	// (0x0004f19e) bg_vkb2_func_pane_cp10

0xa5ca,	// (0x000517a7) bg_vkb2_func_pane_cp08

0xa2c1,	// (0x0005149e) bg_vkb2_func_pane_cp06

0xa5af,	// (0x0005178c) bg_vkb2_func_pane_cp07

0x1eef,	// (0x000490cc) bg_vkb2_func_pane_cp11_ParamLimits

0x1eef,	// (0x000490cc) bg_vkb2_func_pane_cp11

0x1f04,	// (0x000490e1) bg_vkb2_func_pane_cp12_ParamLimits

0x1f04,	// (0x000490e1) bg_vkb2_func_pane_cp12

0x4bf8,	// (0x0004bdd5) bg_vkb2_func_pane_cp09

0x190a,	// (0x00048ae7) bg_vkb2_func_pane_g1

0xd53c,	// (0x00054719) bg_vkb2_func_pane_g2

0x1912,	// (0x00048aef) bg_vkb2_func_pane_g3

0x191a,	// (0x00048af7) bg_vkb2_func_pane_g4

0x1b65,	// (0x00048d42) bg_vkb2_func_pane_g5

0x1932,	// (0x00048b0f) bg_vkb2_func_pane_g6

0x193a,	// (0x00048b17) bg_vkb2_func_pane_g7

0x192a,	// (0x00048b07) bg_vkb2_func_pane_g8

0xd51c,	// (0x000546f9) bg_vkb2_func_pane_g9

0x0008,

0xfabc,	// (0x00056c99) bg_vkb2_func_pane_g

0xa911,	// (0x00051aee) blid2_tripm_pane_g6_ParamLimits

0xa911,	// (0x00051aee) blid2_tripm_pane_g6

0x17a5,	// (0x00048982) mp4_progress_pane_g1

0xa965,	// (0x00051b42) blid2_tripm_values_pane_ParamLimits

0xa965,	// (0x00051b42) blid2_tripm_values_pane

0xaa20,	// (0x00051bfd) blid2_tripm_values_pane_t1

0xaa2e,	// (0x00051c0b) blid2_tripm_values_pane_t2

0xaa3c,	// (0x00051c19) blid2_tripm_values_pane_t3

0xaa4a,	// (0x00051c27) blid2_tripm_values_pane_t4

0xaa58,	// (0x00051c35) blid2_tripm_values_pane_t5

0xaa66,	// (0x00051c43) blid2_tripm_values_pane_t6

0xaa74,	// (0x00051c51) blid2_tripm_values_pane_t7

0xaa82,	// (0x00051c5f) blid2_tripm_values_pane_t8

0xaa90,	// (0x00051c6d) blid2_tripm_values_pane_t9

0x0008,

0xfacf,	// (0x00056cac) blid2_tripm_values_pane_t

0x63bf,	// (0x0004d59c) call_video_pane_t1_ParamLimits

0x63dc,	// (0x0004d5b9) call_video_pane_t2_ParamLimits

0xf1fc,	// (0x000563d9) call_video_pane_t_ParamLimits

0x7852,	// (0x0004ea2f) msg_header_pane_g1_ParamLimits

0xde24,	// (0x00055001) msg_header_pane_g2_ParamLimits

0xde24,	// (0x00055001) msg_header_pane_g2

0x0001,

0xf408,	// (0x000565e5) msg_header_pane_g_ParamLimits

0xf408,	// (0x000565e5) msg_header_pane_g

0x57ea,	// (0x0004c9c7) main_clock2_pane_ParamLimits

0x8beb,	// (0x0004fdc8) grid_clock2_toolbar_pane_ParamLimits

0x8beb,	// (0x0004fdc8) grid_clock2_toolbar_pane

0x8beb,	// (0x0004fdc8) listscroll_clock2_pane_ParamLimits

0x8beb,	// (0x0004fdc8) listscroll_clock2_pane

0x8c87,	// (0x0004fe64) main_clock2_pane_t3_ParamLimits

0x8c87,	// (0x0004fe64) main_clock2_pane_t3

0x8c99,	// (0x0004fe76) main_clock2_pane_t4_ParamLimits

0x8c99,	// (0x0004fe76) main_clock2_pane_t4

0x1fc2,	// (0x0004919f) cell_clock2_toolbar_pane

0x1fca,	// (0x000491a7) cell_clock2_toolbar_pane_cp01

0x1fca,	// (0x000491a7) cell_clock2_toolbar_pane_cp02

0x1fd2,	// (0x000491af) cell_clock2_toolbar_pane_cp03

0x1fda,	// (0x000491b7) list_clock2_pane

0x1fe2,	// (0x000491bf) scroll_pane_cp10

0x1fea,	// (0x000491c7) list_single_clock2_pane_ParamLimits

0x1fea,	// (0x000491c7) list_single_clock2_pane

0xd29d,	// (0x0005447a) list_highlight_pane_cp08

0x1ff7,	// (0x000491d4) list_single_clock2_pane_t1

0x2005,	// (0x000491e2) list_single_clock2_pane_t2

0x0001,

0xfae2,	// (0x00056cbf) list_single_clock2_pane_t

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp10

0x2013,	// (0x000491f0) cell_clock2_toolbar_pane_g1

0x78ce,	// (0x0004eaab) aid_main_viewer_pane_g1_ParamLimits

0x78ce,	// (0x0004eaab) aid_main_viewer_pane_g1

0x78da,	// (0x0004eab7) aid_main_viewer_pane_g2_ParamLimits

0x78da,	// (0x0004eab7) aid_main_viewer_pane_g2

0x78e6,	// (0x0004eac3) aid_main_viewer_pane_g3_ParamLimits

0x78e6,	// (0x0004eac3) aid_main_viewer_pane_g3

0x78f5,	// (0x0004ead2) aid_main_viewer_pane_g4_ParamLimits

0x78f5,	// (0x0004ead2) aid_main_viewer_pane_g4

0x0003,

0xf419,	// (0x000565f6) aid_main_viewer_pane_g_ParamLimits

0xf419,	// (0x000565f6) aid_main_viewer_pane_g

0x4e44,	// (0x0004c021) main_calc_pane_ParamLimits

0x7fcf,	// (0x0004f1ac) main_dialer2_pane_ParamLimits

0x4e5a,	// (0x0004c037) main_cam6_pane

0x4e5a,	// (0x0004c037) main_vid6_pane

0x8bf7,	// (0x0004fdd4) listscroll_gen_pane_cp06_ParamLimits

0x8bf7,	// (0x0004fdd4) listscroll_gen_pane_cp06

0x8cab,	// (0x0004fe88) main_clock2_pane_t5_ParamLimits

0x8cab,	// (0x0004fe88) main_clock2_pane_t5

0x8cf4,	// (0x0004fed1) aid_call2_pane_cp10_ParamLimits

0x8d06,	// (0x0004fee3) aid_call_pane_cp10_ParamLimits

0xdb47,	// (0x00054d24) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdb47,	// (0x00054d24) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8d18,	// (0x0004fef5) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8d18,	// (0x0004fef5) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdb47,	// (0x00054d24) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf760,	// (0x0005693d) popup_clock_analogue_window_cp10_g_ParamLimits

0x8d2a,	// (0x0004ff07) popup_clock_analogue_window_cp10_t1_ParamLimits

0x1805,	// (0x000489e2) cell_dialer2_keypad_pane_g2_ParamLimits

0x1805,	// (0x000489e2) cell_dialer2_keypad_pane_g2

0x0001,

0xf84a,	// (0x00056a27) cell_dialer2_keypad_pane_g_ParamLimits

0xf84a,	// (0x00056a27) cell_dialer2_keypad_pane_g

0x93b3,	// (0x00050590) cell_dialer2_keypad_pane_t1

0x9d05,	// (0x00050ee2) main_cset_text2_pane_ParamLimits

0x9d05,	// (0x00050ee2) main_cset_text2_pane

0x1d87,	// (0x00048f64) area_vitu2_query_pane_g1_ParamLimits

0xa554,	// (0x00051731) area_vitu2_query_pane_g2_ParamLimits

0xf9ff,	// (0x00056bdc) area_vitu2_query_pane_g_ParamLimits

0x1e0b,	// (0x00048fe8) area_vitu2_query_pane_t7_ParamLimits

0x1e0b,	// (0x00048fe8) area_vitu2_query_pane_t7

0xa2c1,	// (0x0005149e) bg_button_pane_cp018_ParamLimits

0xa5af,	// (0x0005178c) bg_button_pane_cp021_ParamLimits

0xa5bb,	// (0x00051798) bg_button_pane_cp022_ParamLimits

0xa5ca,	// (0x000517a7) bg_vkb2_func_pane_cp08_ParamLimits

0xa2c1,	// (0x0005149e) bg_vkb2_func_pane_cp06_ParamLimits

0xa5af,	// (0x0005178c) bg_vkb2_func_pane_cp07_ParamLimits

0xa5da,	// (0x000517b7) input_focus_pane_cp09_ParamLimits

0xaa9e,	// (0x00051c7b) cam6_autofocus_pane_ParamLimits

0xaa9e,	// (0x00051c7b) cam6_autofocus_pane

0xaaba,	// (0x00051c97) cam6_image_uncrop_pane_ParamLimits

0xaaba,	// (0x00051c97) cam6_image_uncrop_pane

0xaae6,	// (0x00051cc3) cam6_indi_pane_ParamLimits

0xaae6,	// (0x00051cc3) cam6_indi_pane

0xab00,	// (0x00051cdd) cam6_mode_pane_ParamLimits

0xab00,	// (0x00051cdd) cam6_mode_pane

0xab14,	// (0x00051cf1) cam6_timer_pane_ParamLimits

0xab14,	// (0x00051cf1) cam6_timer_pane

0xab28,	// (0x00051d05) cam6_zoom_pane_ParamLimits

0xab28,	// (0x00051d05) cam6_zoom_pane

0xab41,	// (0x00051d1e) cam6_mode_pane_g1_ParamLimits

0xab41,	// (0x00051d1e) cam6_mode_pane_g1

0xab4d,	// (0x00051d2a) cam6_mode_pane_g2_ParamLimits

0xab4d,	// (0x00051d2a) cam6_mode_pane_g2

0xab59,	// (0x00051d36) cam6_mode_pane_g3_ParamLimits

0xab59,	// (0x00051d36) cam6_mode_pane_g3

0xab65,	// (0x00051d42) cam6_mode_pane_g4_ParamLimits

0xab65,	// (0x00051d42) cam6_mode_pane_g4

0x0003,

0xfae7,	// (0x00056cc4) cam6_mode_pane_g_ParamLimits

0xfae7,	// (0x00056cc4) cam6_mode_pane_g

0x0c25,	// (0x00047e02) bg_tb_trans_pane_cp08_ParamLimits

0x0c25,	// (0x00047e02) bg_tb_trans_pane_cp08

0x201b,	// (0x000491f8) cam6_battery_pane_ParamLimits

0x201b,	// (0x000491f8) cam6_battery_pane

0x2031,	// (0x0004920e) cam6_indi_pane_g1_ParamLimits

0x2031,	// (0x0004920e) cam6_indi_pane_g1

0x2043,	// (0x00049220) cam6_indi_pane_g2_ParamLimits

0x2043,	// (0x00049220) cam6_indi_pane_g2

0x2055,	// (0x00049232) cam6_indi_pane_g3_ParamLimits

0x2055,	// (0x00049232) cam6_indi_pane_g3

0x0002,

0xfaf0,	// (0x00056ccd) cam6_indi_pane_g_ParamLimits

0xfaf0,	// (0x00056ccd) cam6_indi_pane_g

0x2067,	// (0x00049244) cam6_indi_pane_t1_ParamLimits

0x2067,	// (0x00049244) cam6_indi_pane_t1

0x9855,	// (0x00050a32) cam6_autofocus_pane_g1

0x984d,	// (0x00050a2a) cam6_autofocus_pane_g2

0x9865,	// (0x00050a42) cam6_autofocus_pane_g3

0x985d,	// (0x00050a3a) cam6_autofocus_pane_g4

0x0003,

0xfaf7,	// (0x00056cd4) cam6_autofocus_pane_g

0x208d,	// (0x0004926a) cam6_timer_pane_g1

0x2095,	// (0x00049272) cam6_timer_pane_t1

0x20a3,	// (0x00049280) cam6_zoom_cont_pane

0x20ab,	// (0x00049288) cam6_zoom_pane_g1

0x20b4,	// (0x00049291) cam6_zoom_pane_g2

0xab71,	// (0x00051d4e) cam6_zoom_pane_g3

0x0002,

0xfb00,	// (0x00056cdd) cam6_zoom_pane_g

0xd31e,	// (0x000544fb) cam6_battery_pane_g1

0xd31e,	// (0x000544fb) cam6_battery_pane_g2

0x0001,

0xf3c9,	// (0x000565a6) cam6_battery_pane_g

0x20ab,	// (0x00049288) cam6_zoom_cont_pane_g1

0x20b4,	// (0x00049291) cam6_zoom_cont_pane_g2

0x20bd,	// (0x0004929a) cam6_zoom_cont_pane_g3

0x0002,

0xfb07,	// (0x00056ce4) cam6_zoom_cont_pane_g

0xab8f,	// (0x00051d6c) cam6_mode_pane_cp_ParamLimits

0xab8f,	// (0x00051d6c) cam6_mode_pane_cp

0xaba3,	// (0x00051d80) cam6_zoom_pane_cp_ParamLimits

0xaba3,	// (0x00051d80) cam6_zoom_pane_cp

0xabb9,	// (0x00051d96) vid6_image_uncrop_cif_pane_ParamLimits

0xabb9,	// (0x00051d96) vid6_image_uncrop_cif_pane

0xabdb,	// (0x00051db8) vid6_image_uncrop_nhd_pane_ParamLimits

0xabdb,	// (0x00051db8) vid6_image_uncrop_nhd_pane

0xabf2,	// (0x00051dcf) vid6_image_uncrop_vga_pane_ParamLimits

0xabf2,	// (0x00051dcf) vid6_image_uncrop_vga_pane

0xac09,	// (0x00051de6) vid6_image_uncrop_wvga_pane_ParamLimits

0xac09,	// (0x00051de6) vid6_image_uncrop_wvga_pane

0xac20,	// (0x00051dfd) vid6_indi_pane_ParamLimits

0xac20,	// (0x00051dfd) vid6_indi_pane

0x0c25,	// (0x00047e02) bg_tb_trans_pane_cp09_ParamLimits

0x0c25,	// (0x00047e02) bg_tb_trans_pane_cp09

0x20d1,	// (0x000492ae) cam6_battery_pane_cp_ParamLimits

0x20d1,	// (0x000492ae) cam6_battery_pane_cp

0x20dd,	// (0x000492ba) vid6_indi_pane_g1_ParamLimits

0x20dd,	// (0x000492ba) vid6_indi_pane_g1

0x20ef,	// (0x000492cc) vid6_indi_pane_g2_ParamLimits

0x20ef,	// (0x000492cc) vid6_indi_pane_g2

0x2101,	// (0x000492de) vid6_indi_pane_g3_ParamLimits

0x2101,	// (0x000492de) vid6_indi_pane_g3

0x2116,	// (0x000492f3) vid6_indi_pane_g4_ParamLimits

0x2116,	// (0x000492f3) vid6_indi_pane_g4

0x212b,	// (0x00049308) vid6_indi_pane_g5_ParamLimits

0x212b,	// (0x00049308) vid6_indi_pane_g5

0x0004,

0xfb0e,	// (0x00056ceb) vid6_indi_pane_g_ParamLimits

0xfb0e,	// (0x00056ceb) vid6_indi_pane_g

0x2145,	// (0x00049322) vid6_indi_pane_t1_ParamLimits

0x2145,	// (0x00049322) vid6_indi_pane_t1

0x215b,	// (0x00049338) vid6_indi_pane_t2_ParamLimits

0x215b,	// (0x00049338) vid6_indi_pane_t2

0x2183,	// (0x00049360) vid6_indi_pane_t3_ParamLimits

0x2183,	// (0x00049360) vid6_indi_pane_t3

0x21ab,	// (0x00049388) vid6_indi_pane_t4_ParamLimits

0x21ab,	// (0x00049388) vid6_indi_pane_t4

0x0003,

0xfb19,	// (0x00056cf6) vid6_indi_pane_t_ParamLimits

0xfb19,	// (0x00056cf6) vid6_indi_pane_t

0x21cf,	// (0x000493ac) wait_bar_pane_cp08

0xac40,	// (0x00051e1d) main_cset_text2_pane_t1_ParamLimits

0xac40,	// (0x00051e1d) main_cset_text2_pane_t1

0xab7a,	// (0x00051d57) listscroll_gen_pane_cp06_t1_ParamLimits

0xab7a,	// (0x00051d57) listscroll_gen_pane_cp06_t1

0x4e5a,	// (0x0004c037) main_cam6_set_pane

0x973c,	// (0x00050919) bg_tb_trans_pane_cp06_ParamLimits

0x9752,	// (0x0005092f) cam4_indicators_pane_g1_ParamLimits

0x9762,	// (0x0005093f) cam4_indicators_pane_g2_ParamLimits

0xf887,	// (0x00056a64) cam4_indicators_pane_g_ParamLimits

0x9782,	// (0x0005095f) cam4_indicators_pane_t1_ParamLimits

0x7fc1,	// (0x0004f19e) bg_tb_trans_pane_cp07_ParamLimits

0x9752,	// (0x0005092f) vid4_indicators_pane_g1_ParamLimits

0x97f6,	// (0x000509d3) vid4_indicators_pane_g2_ParamLimits

0x9806,	// (0x000509e3) vid4_indicators_pane_g3_ParamLimits

0x9817,	// (0x000509f4) vid4_indicators_pane_g4_ParamLimits

0xf899,	// (0x00056a76) vid4_indicators_pane_g_ParamLimits

0x9833,	// (0x00050a10) vid4_indicators_pane_t1_ParamLimits

0xa6fa,	// (0x000518d7) vid4_progress_pane_g1_ParamLimits

0xa709,	// (0x000518e6) vid4_progress_pane_g2_ParamLimits

0xa718,	// (0x000518f5) vid4_progress_pane_g3_ParamLimits

0xa727,	// (0x00051904) vid4_progress_pane_g4_ParamLimits

0xfa4a,	// (0x00056c27) vid4_progress_pane_g_ParamLimits

0xa73f,	// (0x0005191c) vid4_progress_pane_t1_ParamLimits

0xa755,	// (0x00051932) vid4_progress_pane_t2_ParamLimits

0xa76a,	// (0x00051947) vid4_progress_pane_t3_ParamLimits

0xfa55,	// (0x00056c32) vid4_progress_pane_t_ParamLimits

0xa77f,	// (0x0005195c) wait_bar_pane_cp07_ParamLimits

0xac5c,	// (0x00051e39) main_cam6_set_pane_g2_ParamLimits

0xac5c,	// (0x00051e39) main_cam6_set_pane_g2

0xac68,	// (0x00051e45) main_cset6_listscroll_pane_ParamLimits

0xac68,	// (0x00051e45) main_cset6_listscroll_pane

0xac91,	// (0x00051e6e) main_cset6_slider_pane_ParamLimits

0xac91,	// (0x00051e6e) main_cset6_slider_pane

0xac9d,	// (0x00051e7a) main_cset6_text2_pane_ParamLimits

0xac9d,	// (0x00051e7a) main_cset6_text2_pane

0x21df,	// (0x000493bc) main_cset6_text_pane

0x1a26,	// (0x00048c03) main_cset_list_pane_copy1_ParamLimits

0x1a26,	// (0x00048c03) main_cset_list_pane_copy1

0x1a36,	// (0x00048c13) scroll_pane_cp028_copy1

0xacb0,	// (0x00051e8d) cset_list_set_pane_copy1

0x1b09,	// (0x00048ce6) aid_position_infowindow_above_copy1

0x1b11,	// (0x00048cee) aid_position_infowindow_below_copy1

0xacbf,	// (0x00051e9c) cset_list_set_pane_g1_copy1

0xacc7,	// (0x00051ea4) cset_list_set_pane_g3_copy1_ParamLimits

0xacc7,	// (0x00051ea4) cset_list_set_pane_g3_copy1

0xacd6,	// (0x00051eb3) cset_list_set_pane_t1_copy1_ParamLimits

0xacd6,	// (0x00051eb3) cset_list_set_pane_t1_copy1

0xdd6f,	// (0x00054f4c) list_highlight_pane_cp021_copy1_ParamLimits

0xdd6f,	// (0x00054f4c) list_highlight_pane_cp021_copy1

0x21e7,	// (0x000493c4) cset6_slider_pane_ParamLimits

0x21e7,	// (0x000493c4) cset6_slider_pane

0x2213,	// (0x000493f0) main_cset6_slider_pane_g1_ParamLimits

0x2213,	// (0x000493f0) main_cset6_slider_pane_g1

0xaceb,	// (0x00051ec8) main_cset6_slider_pane_g2_ParamLimits

0xaceb,	// (0x00051ec8) main_cset6_slider_pane_g2

0x1a4b,	// (0x00048c28) main_cset6_slider_pane_g3_ParamLimits

0x1a4b,	// (0x00048c28) main_cset6_slider_pane_g3

0xad13,	// (0x00051ef0) main_cset6_slider_pane_g4_ParamLimits

0xad13,	// (0x00051ef0) main_cset6_slider_pane_g4

0xad1f,	// (0x00051efc) main_cset6_slider_pane_g5_ParamLimits

0xad1f,	// (0x00051efc) main_cset6_slider_pane_g5

0x1a4b,	// (0x00048c28) main_cset6_slider_pane_g7_ParamLimits

0x1a4b,	// (0x00048c28) main_cset6_slider_pane_g7

0x1a57,	// (0x00048c34) main_cset6_slider_pane_g8_ParamLimits

0x1a57,	// (0x00048c34) main_cset6_slider_pane_g8

0xad2b,	// (0x00051f08) main_cset6_slider_pane_g9_ParamLimits

0xad2b,	// (0x00051f08) main_cset6_slider_pane_g9

0xad37,	// (0x00051f14) main_cset6_slider_pane_g10_ParamLimits

0xad37,	// (0x00051f14) main_cset6_slider_pane_g10

0xad13,	// (0x00051ef0) main_cset6_slider_pane_g11_ParamLimits

0xad13,	// (0x00051ef0) main_cset6_slider_pane_g11

0xad43,	// (0x00051f20) main_cset6_slider_pane_g12_ParamLimits

0xad43,	// (0x00051f20) main_cset6_slider_pane_g12

0xad4f,	// (0x00051f2c) main_cset6_slider_pane_g13_ParamLimits

0xad4f,	// (0x00051f2c) main_cset6_slider_pane_g13

0xad5b,	// (0x00051f38) main_cset6_slider_pane_g14_ParamLimits

0xad5b,	// (0x00051f38) main_cset6_slider_pane_g14

0xad67,	// (0x00051f44) main_cset6_slider_pane_g15_ParamLimits

0xad67,	// (0x00051f44) main_cset6_slider_pane_g15

0xad1f,	// (0x00051efc) main_cset6_slider_pane_g16_ParamLimits

0xad1f,	// (0x00051efc) main_cset6_slider_pane_g16

0xad7f,	// (0x00051f5c) main_cset6_slider_pane_g17_ParamLimits

0xad7f,	// (0x00051f5c) main_cset6_slider_pane_g17

0x0011,

0xfb22,	// (0x00056cff) main_cset6_slider_pane_g_ParamLimits

0xfb22,	// (0x00056cff) main_cset6_slider_pane_g

0x223b,	// (0x00049418) main_cset6_slider_pane_t1_ParamLimits

0x223b,	// (0x00049418) main_cset6_slider_pane_t1

0xad8b,	// (0x00051f68) main_cset6_slider_pane_t2_ParamLimits

0xad8b,	// (0x00051f68) main_cset6_slider_pane_t2

0x227c,	// (0x00049459) main_cset6_slider_pane_t3_ParamLimits

0x227c,	// (0x00049459) main_cset6_slider_pane_t3

0xadb6,	// (0x00051f93) main_cset6_slider_pane_t4_ParamLimits

0xadb6,	// (0x00051f93) main_cset6_slider_pane_t4

0x22a7,	// (0x00049484) main_cset6_slider_pane_t5_ParamLimits

0x22a7,	// (0x00049484) main_cset6_slider_pane_t5

0x22d2,	// (0x000494af) main_cset6_slider_pane_t7_ParamLimits

0x22d2,	// (0x000494af) main_cset6_slider_pane_t7

0xade1,	// (0x00051fbe) main_cset6_slider_pane_t8_ParamLimits

0xade1,	// (0x00051fbe) main_cset6_slider_pane_t8

0xae05,	// (0x00051fe2) main_cset6_slider_pane_t9_ParamLimits

0xae05,	// (0x00051fe2) main_cset6_slider_pane_t9

0xae29,	// (0x00052006) main_cset6_slider_pane_t10_ParamLimits

0xae29,	// (0x00052006) main_cset6_slider_pane_t10

0xae4d,	// (0x0005202a) main_cset6_slider_pane_t11_ParamLimits

0xae4d,	// (0x0005202a) main_cset6_slider_pane_t11

0x2308,	// (0x000494e5) main_cset6_slider_pane_t14_ParamLimits

0x2308,	// (0x000494e5) main_cset6_slider_pane_t14

0x2341,	// (0x0004951e) main_cset6_slider_pane_t15_ParamLimits

0x2341,	// (0x0004951e) main_cset6_slider_pane_t15

0x000b,

0xfb47,	// (0x00056d24) main_cset6_slider_pane_t_ParamLimits

0xfb47,	// (0x00056d24) main_cset6_slider_pane_t

0x1b19,	// (0x00048cf6) cset_slider_pane_g1_copy1

0x1b22,	// (0x00048cff) cset_slider_pane_g2_copy1

0x1b2b,	// (0x00048d08) cset_slider_pane_g3_copy1

0x4bf8,	// (0x0004bdd5) bg_popup_sub_pane_cp011_copy1

0x1bb9,	// (0x00048d96) main_cset_text_pane_g1_copy1

0x1bc1,	// (0x00048d9e) main_cset_text_pane_t1_copy1

0x1bcf,	// (0x00048dac) main_cset_text_pane_t2_copy1

0x1bdd,	// (0x00048dba) main_cset_text_pane_t3_copy1

0x1beb,	// (0x00048dc8) main_cset_text_pane_t4_copy1

0x1bf9,	// (0x00048dd6) main_cset_text_pane_t5_copy1

0x1c07,	// (0x00048de4) main_cset_text_pane_t6_copy1

0x1c15,	// (0x00048df2) main_cset_text_pane_t7_copy1

0xae8e,	// (0x0005206b) main_cset_text2_pane_t1_copy1

0x7fc1,	// (0x0004f19e) main_ncimui_pane

0x801a,	// (0x0004f1f7) popup_query_ncimui_window_ParamLimits

0x801a,	// (0x0004f1f7) popup_query_ncimui_window

0x1244,	// (0x00048421) field_cale_ev2_pane_g4_ParamLimits

0x1244,	// (0x00048421) field_cale_ev2_pane_g4

0x90bb,	// (0x00050298) cell_video_dialer_keypad_pane_g2_ParamLimits

0x90bb,	// (0x00050298) cell_video_dialer_keypad_pane_g2

0x0001,

0xf821,	// (0x000569fe) cell_video_dialer_keypad_pane_g_ParamLimits

0xf821,	// (0x000569fe) cell_video_dialer_keypad_pane_g

0x90d3,	// (0x000502b0) cell_video_dialer_keypad_pane_t1

0x4bf8,	// (0x0004bdd5) bg_popup_window_pane_cp012

0xef3e,	// (0x0005611b) heading_pane_cp06

0x23ca,	// (0x000495a7) ncim_query_content_pane

0x4bf8,	// (0x0004bdd5) bg_popup_heading_pane_cp01

0x23d2,	// (0x000495af) ncim_heading_pane_t1

0x23e0,	// (0x000495bd) ncim_indicator_popup_pane

0x23f2,	// (0x000495cf) ncim_query_button_pane

0x2406,	// (0x000495e3) ncim_query_content_pane_t1

0x2418,	// (0x000495f5) ncim_query_content_pane_t2

0x0005,

0xfb8b,	// (0x00056d68) ncim_query_content_pane_t

0x2452,	// (0x0004962f) ncim_query_list_pane

0x2464,	// (0x00049641) ncim_query_popup_pane

0x23e0,	// (0x000495bd) ncim_indicator_popup_pane_ParamLimits

0xafcf,	// (0x000521ac) ncim_query_content_pane_g1_ParamLimits

0xafcf,	// (0x000521ac) ncim_query_content_pane_g1

0x2406,	// (0x000495e3) ncim_query_content_pane_t1_ParamLimits

0x2418,	// (0x000495f5) ncim_query_content_pane_t2_ParamLimits

0xafdb,	// (0x000521b8) ncim_query_content_pane_t3_ParamLimits

0xafdb,	// (0x000521b8) ncim_query_content_pane_t3

0xaff8,	// (0x000521d5) ncim_query_content_pane_t4_ParamLimits

0xaff8,	// (0x000521d5) ncim_query_content_pane_t4

0xb015,	// (0x000521f2) ncim_query_content_pane_t5_ParamLimits

0xb015,	// (0x000521f2) ncim_query_content_pane_t5

0x242a,	// (0x00049607) ncim_query_content_pane_t6_ParamLimits

0x242a,	// (0x00049607) ncim_query_content_pane_t6

0xfb8b,	// (0x00056d68) ncim_query_content_pane_t_ParamLimits

0x2452,	// (0x0004962f) ncim_query_list_pane_ParamLimits

0x2464,	// (0x00049641) ncim_query_popup_pane_ParamLimits

0x2478,	// (0x00049655) wait_bar_pane_cp04

0x4bf8,	// (0x0004bdd5) input_focus_pane_cp011

0x2480,	// (0x0004965d) ncim_query_popup_pane_t1

0x248e,	// (0x0004966b) ncim_list_query_list_pane_ParamLimits

0x248e,	// (0x0004966b) ncim_list_query_list_pane

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp027

0x24a1,	// (0x0004967e) ncim_query_button_pane_g1

0x4bf8,	// (0x0004bdd5) list_highlight_pane_cp012

0x24ab,	// (0x00049688) ncim_list_query_list_pane_g1

0x24b3,	// (0x00049690) ncim_list_query_list_pane_t1

0x9772,	// (0x0005094f) cam4_indicators_pane_g3_ParamLimits

0x9772,	// (0x0005094f) cam4_indicators_pane_g3

0x9823,	// (0x00050a00) vid4_indicators_pane_g5_ParamLimits

0x9823,	// (0x00050a00) vid4_indicators_pane_g5

0xa733,	// (0x00051910) vid4_progress_pane_g5_ParamLimits

0xa733,	// (0x00051910) vid4_progress_pane_g5

0xaebf,	// (0x0005209c) main_ncimui_pane_g1

0xaf25,	// (0x00052102) ncimui_group_query_pane_ParamLimits

0xaf25,	// (0x00052102) ncimui_group_query_pane

0xaf6d,	// (0x0005214a) ncimui_list_pane_ParamLimits

0xaf6d,	// (0x0005214a) ncimui_list_pane

0xaf92,	// (0x0005216f) ncimui_text_pane_ParamLimits

0xaf92,	// (0x0005216f) ncimui_text_pane

0xb032,	// (0x0005220f) ncimui_text_pane_t1_ParamLimits

0xb032,	// (0x0005220f) ncimui_text_pane_t1

0x24ca,	// (0x000496a7) ncimui_list_single_graphic_pane_ParamLimits

0x24ca,	// (0x000496a7) ncimui_list_single_graphic_pane

0xb050,	// (0x0005222d) ncimui_query_pane_ParamLimits

0xb050,	// (0x0005222d) ncimui_query_pane

0x4bf8,	// (0x0004bdd5) list_highlight_pane_cp013

0x24da,	// (0x000496b7) ncim_list_query_list_pane_t1_copy1

0x24e8,	// (0x000496c5) ncim_list_single_graphic_pane_g1

0x24f0,	// (0x000496cd) ncim_query_button_pane_cp01

0x24fc,	// (0x000496d9) ncim_query_entry_pane_ParamLimits

0x24fc,	// (0x000496d9) ncim_query_entry_pane

0x250f,	// (0x000496ec) ncimui_query_pane_g1

0x251b,	// (0x000496f8) ncimui_query_pane_t1_ParamLimits

0x251b,	// (0x000496f8) ncimui_query_pane_t1

0xdd6f,	// (0x00054f4c) input_focus_pane_cp012

0x2534,	// (0x00049711) ncim_query_entry_pane_t1

0x57ea,	// (0x0004c9c7) main_im_pane_ParamLimits

0x7fc1,	// (0x0004f19e) main_mobtv_pane_ParamLimits

0x7fc1,	// (0x0004f19e) main_mobtv_pane

0xad2b,	// (0x00051f08) main_cset6_slider_pane_g18_ParamLimits

0xad2b,	// (0x00051f08) main_cset6_slider_pane_g18

0xad4f,	// (0x00051f2c) main_cset6_slider_pane_g19_ParamLimits

0xad4f,	// (0x00051f2c) main_cset6_slider_pane_g19

0xf02a,	// (0x00056207) bg_main_mobtv_pane_ParamLimits

0xf02a,	// (0x00056207) bg_main_mobtv_pane

0xb060,	// (0x0005223d) main_mobtv_info_pane

0xb069,	// (0x00052246) main_mobtv_loading_pane_ParamLimits

0xb069,	// (0x00052246) main_mobtv_loading_pane

0x2546,	// (0x00049723) main_mobtv_pg_channel_list_pane

0x2550,	// (0x0004972d) main_mobtv_pg_hdr_pane

0xb076,	// (0x00052253) main_mobtv_programe_curr_pane_ParamLimits

0xb076,	// (0x00052253) main_mobtv_programe_curr_pane

0xb083,	// (0x00052260) main_mobtv_programe_next_pane_ParamLimits

0xb083,	// (0x00052260) main_mobtv_programe_next_pane

0x2559,	// (0x00049736) popup_mobtv_noti_window

0xd31e,	// (0x000544fb) main_tv_pg_hdr_pane_g1

0x2561,	// (0x0004973e) main_tv_pg_hdr_pane_g2

0x2569,	// (0x00049746) main_tv_pg_hdr_pane_g3

0x2571,	// (0x0004974e) main_tv_pg_hdr_pane_g4

0x2579,	// (0x00049756) main_tv_pg_hdr_pane_g5

0x2581,	// (0x0004975e) main_tv_pg_hdr_pane_g6

0x2589,	// (0x00049766) main_tv_pg_hdr_pane_g7

0x2591,	// (0x0004976e) main_tv_pg_hdr_pane_g8

0x2599,	// (0x00049776) main_tv_pg_hdr_pane_g9

0x25a1,	// (0x0004977e) main_tv_pg_hdr_pane_g10

0x25ab,	// (0x00049788) main_tv_pg_hdr_pane_g11

0x000a,

0xfb98,	// (0x00056d75) main_tv_pg_hdr_pane_g

0x25b5,	// (0x00049792) main_tv_pg_hdr_pane_t1

0x25c3,	// (0x000497a0) main_tv_pg_hdr_pane_t2

0x25d1,	// (0x000497ae) main_tv_pg_hdr_pane_t3

0x25df,	// (0x000497bc) main_tv_pg_hdr_pane_t4

0x25ed,	// (0x000497ca) main_tv_pg_hdr_pane_t5

0x0004,

0xfbaf,	// (0x00056d8c) main_tv_pg_hdr_pane_t

0x25fb,	// (0x000497d8) single_mobtv_pg_channel_pane_ParamLimits

0x25fb,	// (0x000497d8) single_mobtv_pg_channel_pane

0x260d,	// (0x000497ea) single_mobtv_pg_channel_table_pane

0x2616,	// (0x000497f3) single_mobtv_pg_channel_thumb_pane

0x261f,	// (0x000497fc) single_tv_pg_channel_pane_g1

0x2628,	// (0x00049805) single_tv_pg_channel_pane_g2

0x0001,

0xfbba,	// (0x00056d97) single_tv_pg_channel_pane_g

0x5619,	// (0x0004c7f6) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x5619,	// (0x0004c7f6) bg_single_mobtv_pg_channel_thumb_pane

0x2631,	// (0x0004980e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2631,	// (0x0004980e) single_mobtv_pg_channel_thumb_pane_g1

0x263f,	// (0x0004981c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x263f,	// (0x0004981c) single_mobtv_pg_channel_thumb_pane_g2

0x264b,	// (0x00049828) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x264b,	// (0x00049828) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbf,	// (0x00056d9c) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbf,	// (0x00056d9c) single_mobtv_pg_channel_thumb_pane_g

0x2657,	// (0x00049834) single_mobtv_pg_channel_thumb_pane_t1

0x2665,	// (0x00049842) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc6,	// (0x00056da3) single_mobtv_pg_channel_thumb_pane_t

0xd31e,	// (0x000544fb) bg_single_mobtv_pg_channel_table_pane_g1

0xd31e,	// (0x000544fb) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c9,	// (0x000565a6) bg_single_mobtv_pg_channel_table_pane_g

0x2673,	// (0x00049850) single_mobtv_pg_channel_table_pane_t1

0x2681,	// (0x0004985e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbcb,	// (0x00056da8) single_mobtv_pg_channel_table_pane_t

0xb098,	// (0x00052275) main_mobtv_info_pane_g1_ParamLimits

0xb098,	// (0x00052275) main_mobtv_info_pane_g1

0xb0b4,	// (0x00052291) main_mobtv_info_pane_t1_ParamLimits

0xb0b4,	// (0x00052291) main_mobtv_info_pane_t1

0xb11a,	// (0x000522f7) main_mobtv_info_pane_t2_ParamLimits

0xb11a,	// (0x000522f7) main_mobtv_info_pane_t2

0x0002,

0xfbd5,	// (0x00056db2) main_mobtv_info_pane_t_ParamLimits

0xfbd5,	// (0x00056db2) main_mobtv_info_pane_t

0xb19d,	// (0x0005237a) wait_bar_pane_cp05

0xb1ad,	// (0x0005238a) main_mobtv_loading_pane_g1_ParamLimits

0xb1ad,	// (0x0005238a) main_mobtv_loading_pane_g1

0xb1b9,	// (0x00052396) main_mobtv_loading_pane_g2_ParamLimits

0xb1b9,	// (0x00052396) main_mobtv_loading_pane_g2

0xb1c5,	// (0x000523a2) main_mobtv_loading_pane_g3_ParamLimits

0xb1c5,	// (0x000523a2) main_mobtv_loading_pane_g3

0x0002,

0xfbdc,	// (0x00056db9) main_mobtv_loading_pane_g_ParamLimits

0xfbdc,	// (0x00056db9) main_mobtv_loading_pane_g

0x268f,	// (0x0004986c) main_mobtv_loading_pane_t1_ParamLimits

0x268f,	// (0x0004986c) main_mobtv_loading_pane_t1

0x26a7,	// (0x00049884) main_mobtv_loading_pane_t2_ParamLimits

0x26a7,	// (0x00049884) main_mobtv_loading_pane_t2

0x0001,

0xfbe3,	// (0x00056dc0) main_mobtv_loading_pane_t_ParamLimits

0xfbe3,	// (0x00056dc0) main_mobtv_loading_pane_t

0xb1d1,	// (0x000523ae) wait_bar_pane_cp06_ParamLimits

0xb1d1,	// (0x000523ae) wait_bar_pane_cp06

0x26cb,	// (0x000498a8) main_mobtv_programe_curr_pane_t1

0x26d9,	// (0x000498b6) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe8,	// (0x00056dc5) main_mobtv_programe_curr_pane_t

0x26e7,	// (0x000498c4) main_mobtv_programe_next_pane_t1

0x26f5,	// (0x000498d2) main_mobtv_programe_next_pane_t2

0x2703,	// (0x000498e0) main_mobtv_programe_next_pane_t3

0x0002,

0xfbed,	// (0x00056dca) main_mobtv_programe_next_pane_t

0x4bf8,	// (0x0004bdd5) bg_popup_mobtv_noti_window_pane

0x2711,	// (0x000498ee) popup_mobtv_noti_window_g1

0x2719,	// (0x000498f6) popup_mobtv_noti_window_t1

0x2727,	// (0x00049904) popup_mobtv_noti_window_t2

0x0001,

0xfbf4,	// (0x00056dd1) popup_mobtv_noti_window_t

0xd31e,	// (0x000544fb) bg_popup_mobtv_noti_window_pane_g1

0x4e5a,	// (0x0004c037) sc_clock_pane

0x4e5a,	// (0x0004c037) main_fs_bigclock_pane

0xa953,	// (0x00051b30) blid2_tripm_pane_t4_ParamLimits

0xa953,	// (0x00051b30) blid2_tripm_pane_t4

0xb1dd,	// (0x000523ba) sc_clock_pane_g1_ParamLimits

0xb1dd,	// (0x000523ba) sc_clock_pane_g1

0xb1eb,	// (0x000523c8) sc_clock_pane_t1_ParamLimits

0xb1eb,	// (0x000523c8) sc_clock_pane_t1

0xb1fe,	// (0x000523db) sc_clock_pane_t2_ParamLimits

0xb1fe,	// (0x000523db) sc_clock_pane_t2

0xb210,	// (0x000523ed) sc_clock_pane_t3_ParamLimits

0xb210,	// (0x000523ed) sc_clock_pane_t3

0x0004,

0xfbf9,	// (0x00056dd6) sc_clock_pane_t_ParamLimits

0xfbf9,	// (0x00056dd6) sc_clock_pane_t

0xbe04,	// (0x00052fe1) main_fs_bigclock_indicator_pane_ParamLimits

0xbe04,	// (0x00052fe1) main_fs_bigclock_indicator_pane

0xb28b,	// (0x00052468) main_fs_bigclock_pane_g1_ParamLimits

0xb28b,	// (0x00052468) main_fs_bigclock_pane_g1

0xbe10,	// (0x00052fed) main_fs_bigclock_pane_t1_ParamLimits

0xbe10,	// (0x00052fed) main_fs_bigclock_pane_t1

0xbe22,	// (0x00052fff) main_fs_bigclock_pane_t2_ParamLimits

0xbe22,	// (0x00052fff) main_fs_bigclock_pane_t2

0xbe34,	// (0x00053011) main_fs_bigclock_pane_t3_ParamLimits

0xbe34,	// (0x00053011) main_fs_bigclock_pane_t3

0x0002,

0xfdc2,	// (0x00056f9f) main_fs_bigclock_pane_t_ParamLimits

0xfdc2,	// (0x00056f9f) main_fs_bigclock_pane_t

0x3212,	// (0x0004a3ef) main_fs_bigclock_indicator_pane_g1

0x23fa,	// (0x000495d7) ncim_query_content_pane_g2_ParamLimits

0x23fa,	// (0x000495d7) ncim_query_content_pane_g2

0x0001,

0xfb86,	// (0x00056d63) ncim_query_content_pane_g_ParamLimits

0xfb86,	// (0x00056d63) ncim_query_content_pane_g

0xb222,	// (0x000523ff) sc_clock_pane_t4_ParamLimits

0xb222,	// (0x000523ff) sc_clock_pane_t4

0x7fc1,	// (0x0004f19e) main_radioblah_pane

0x9611,	// (0x000507ee) cell_call4_button_pane_t1_copy1_ParamLimits

0x9611,	// (0x000507ee) cell_call4_button_pane_t1_copy1

0xaed7,	// (0x000520b4) main_ncimui_pane_t1_ParamLimits

0xaed7,	// (0x000520b4) main_ncimui_pane_t1

0xaef1,	// (0x000520ce) main_ncimui_pane_t2_ParamLimits

0xaef1,	// (0x000520ce) main_ncimui_pane_t2

0x0002,

0xfb7f,	// (0x00056d5c) main_ncimui_pane_t_ParamLimits

0xfb7f,	// (0x00056d5c) main_ncimui_pane_t

0x2868,	// (0x00049a45) main_radioblah_anim_pane_ParamLimits

0x2868,	// (0x00049a45) main_radioblah_anim_pane

0x2879,	// (0x00049a56) main_radioblah_info_pane_ParamLimits

0x2879,	// (0x00049a56) main_radioblah_info_pane

0x288d,	// (0x00049a6a) main_radioblah_pane_t1_ParamLimits

0x288d,	// (0x00049a6a) main_radioblah_pane_t1

0x28a9,	// (0x00049a86) main_radioblah_pane_t2_ParamLimits

0x28a9,	// (0x00049a86) main_radioblah_pane_t2

0x0003,

0xfc1a,	// (0x00056df7) main_radioblah_pane_t_ParamLimits

0xfc1a,	// (0x00056df7) main_radioblah_pane_t

0xb2d3,	// (0x000524b0) main_radioblah_rocker_ctrl_pane_ParamLimits

0xb2d3,	// (0x000524b0) main_radioblah_rocker_ctrl_pane

0x28f1,	// (0x00049ace) main_radioblah_info_pane_t1_ParamLimits

0x28f1,	// (0x00049ace) main_radioblah_info_pane_t1

0xb318,	// (0x000524f5) main_radioblah_info_pane_t2_ParamLimits

0xb318,	// (0x000524f5) main_radioblah_info_pane_t2

0x0003,

0xfc23,	// (0x00056e00) main_radioblah_info_pane_t_ParamLimits

0xfc23,	// (0x00056e00) main_radioblah_info_pane_t

0xd31e,	// (0x000544fb) main_radioblah_rocker_ctrl_pane_g1

0xb3c0,	// (0x0005259d) main_radioblah_rocker_ctrl_pane_g2

0xb3c8,	// (0x000525a5) main_radioblah_rocker_ctrl_pane_g3

0xb3d0,	// (0x000525ad) main_radioblah_rocker_ctrl_pane_g4

0xb3d8,	// (0x000525b5) main_radioblah_rocker_ctrl_pane_g5

0xb3e0,	// (0x000525bd) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc2c,	// (0x00056e09) main_radioblah_rocker_ctrl_pane_g

0xae8e,	// (0x0005206b) main_cset_text2_pane_t1_copy1_ParamLimits

0x9694,	// (0x00050871) cam4_image_uncrop_qvga_pane

0x97b6,	// (0x00050993) vid4_image_uncrop_qcif_pane

0xaada,	// (0x00051cb7) cam6_image_uncrop_qvga_pane_ParamLimits

0xaada,	// (0x00051cb7) cam6_image_uncrop_qvga_pane

0x20c5,	// (0x000492a2) vid6_image_uncrop_qcif_pane_ParamLimits

0x20c5,	// (0x000492a2) vid6_image_uncrop_qcif_pane

0x4bf8,	// (0x0004bdd5) bg_popup_preview_window_pane_cp03

0x23a0,	// (0x0004957d) list_cset_text2_pane

0x23a8,	// (0x00049585) main_cset6_text2_pane_g1

0x23b0,	// (0x0004958d) main_cset6_text2_pane_t1

0x35e1,	// (0x0004a7be) list_cset_text2_pane_t1_ParamLimits

0x35e1,	// (0x0004a7be) list_cset_text2_pane_t1

0x7fc1,	// (0x0004f19e) main_radioblah_pane_ParamLimits

0xb18b,	// (0x00052368) main_mobtv_info_pane_t3_ParamLimits

0xb18b,	// (0x00052368) main_mobtv_info_pane_t3

0xb2c1,	// (0x0005249e) main_radioblah_pane_g1

0xb2ec,	// (0x000524c9) main_radioblah_info_pane_g1

0xb367,	// (0x00052544) main_radioblah_info_pane_t3_ParamLimits

0xb367,	// (0x00052544) main_radioblah_info_pane_t3

0x716c,	// (0x0004e349) highlight_cell_cale_month_pane_ParamLimits

0x716c,	// (0x0004e349) highlight_cell_cale_month_pane

0x4e5a,	// (0x0004c037) main_phob_fisheye_pane

0x12e5,	// (0x000484c2) scroll_pane_cp0031_ParamLimits

0x12e5,	// (0x000484c2) scroll_pane_cp0031

0x21cf,	// (0x000493ac) wait_bar_pane_cp08_ParamLimits

0xacb0,	// (0x00051e8d) cset_list_set_pane_copy1_ParamLimits

0x292b,	// (0x00049b08) highlight_cell_cale_month_pane_g1

0xb3e8,	// (0x000525c5) highlight_cell_cale_month_pane_t1

0x2933,	// (0x00049b10) list_gen_pane_cp01

0x1a36,	// (0x00048c13) scroll_pane_01

0xf04a,	// (0x00056227) list_single_double_fisheye_pane

0x293c,	// (0x00049b19) list_double_fisheye_pane_g1_ParamLimits

0x293c,	// (0x00049b19) list_double_fisheye_pane_g1

0x2948,	// (0x00049b25) list_double_fisheye_pane_g2_ParamLimits

0x2948,	// (0x00049b25) list_double_fisheye_pane_g2

0xf053,	// (0x00056230) list_double_fisheye_pane_g3_ParamLimits

0xf053,	// (0x00056230) list_double_fisheye_pane_g3

0x0004,

0xfc39,	// (0x00056e16) list_double_fisheye_pane_g_ParamLimits

0xfc39,	// (0x00056e16) list_double_fisheye_pane_g

0x2979,	// (0x00049b56) list_double_fisheye_pane_t1_ParamLimits

0x2979,	// (0x00049b56) list_double_fisheye_pane_t1

0x2994,	// (0x00049b71) list_double_fisheye_pane_t2_ParamLimits

0x2994,	// (0x00049b71) list_double_fisheye_pane_t2

0x0001,

0xfc44,	// (0x00056e21) list_double_fisheye_pane_t_ParamLimits

0xfc44,	// (0x00056e21) list_double_fisheye_pane_t

0x4e5a,	// (0x0004c037) main_call5_pane

0xb248,	// (0x00052425) sc_swipe_pane_ParamLimits

0xb248,	// (0x00052425) sc_swipe_pane

0xb402,	// (0x000525df) call5_image_pane_ParamLimits

0xb402,	// (0x000525df) call5_image_pane

0xb40e,	// (0x000525eb) call5_swipe_1_pane_ParamLimits

0xb40e,	// (0x000525eb) call5_swipe_1_pane

0xb41a,	// (0x000525f7) call5_swipe_2_pane_ParamLimits

0xb41a,	// (0x000525f7) call5_swipe_2_pane

0xb432,	// (0x0005260f) popup_call5_audio_first_window_ParamLimits

0xb432,	// (0x0005260f) popup_call5_audio_first_window

0x5619,	// (0x0004c7f6) call5_swipe_1_pane_g1_ParamLimits

0x5619,	// (0x0004c7f6) call5_swipe_1_pane_g1

0x29b6,	// (0x00049b93) call5_swipe_1_pane_g2_ParamLimits

0x29b6,	// (0x00049b93) call5_swipe_1_pane_g2

0x0001,

0xfc49,	// (0x00056e26) call5_swipe_1_pane_g_ParamLimits

0xfc49,	// (0x00056e26) call5_swipe_1_pane_g

0x29c2,	// (0x00049b9f) call5_swipe_1_pane_t1_ParamLimits

0x29c2,	// (0x00049b9f) call5_swipe_1_pane_t1

0x5619,	// (0x0004c7f6) call5_swipe_2_pane_g1_ParamLimits

0x5619,	// (0x0004c7f6) call5_swipe_2_pane_g1

0x29d7,	// (0x00049bb4) call5_swipe_2_pane_g2_ParamLimits

0x29d7,	// (0x00049bb4) call5_swipe_2_pane_g2

0x0001,

0xfc4e,	// (0x00056e2b) call5_swipe_2_pane_g_ParamLimits

0xfc4e,	// (0x00056e2b) call5_swipe_2_pane_g

0x29e3,	// (0x00049bc0) call5_swipe_2_pane_t1_ParamLimits

0x29e3,	// (0x00049bc0) call5_swipe_2_pane_t1

0x29f8,	// (0x00049bd5) sc_swipe_pane_g1_ParamLimits

0x29f8,	// (0x00049bd5) sc_swipe_pane_g1

0x2a05,	// (0x00049be2) sc_swipe_pane_g2_ParamLimits

0x2a05,	// (0x00049be2) sc_swipe_pane_g2

0x0001,

0xfc53,	// (0x00056e30) sc_swipe_pane_g_ParamLimits

0xfc53,	// (0x00056e30) sc_swipe_pane_g

0x2a11,	// (0x00049bee) sc_swipe_pane_t1_ParamLimits

0x2a11,	// (0x00049bee) sc_swipe_pane_t1

0x4e5a,	// (0x0004c037) main_cmail_launcher_pane

0xb43e,	// (0x0005261b) aid_size_cell_cmail_l_ParamLimits

0xb43e,	// (0x0005261b) aid_size_cell_cmail_l

0xb44e,	// (0x0005262b) grid_cmail_l_pane_ParamLimits

0xb44e,	// (0x0005262b) grid_cmail_l_pane

0xb45a,	// (0x00052637) cell_cmail_l_pane_ParamLimits

0xb45a,	// (0x00052637) cell_cmail_l_pane

0xb46c,	// (0x00052649) cell_cmail_l_pane_g1_ParamLimits

0xb46c,	// (0x00052649) cell_cmail_l_pane_g1

0xb47c,	// (0x00052659) cell_cmail_l_pane_t1_ParamLimits

0xb47c,	// (0x00052659) cell_cmail_l_pane_t1

0x2a26,	// (0x00049c03) cell_cmail_l_pane_t2_ParamLimits

0x2a26,	// (0x00049c03) cell_cmail_l_pane_t2

0x0001,

0xfc58,	// (0x00056e35) cell_cmail_l_pane_t_ParamLimits

0xfc58,	// (0x00056e35) cell_cmail_l_pane_t

0xdd6f,	// (0x00054f4c) grid_highlight_pane_cp018_ParamLimits

0xdd6f,	// (0x00054f4c) grid_highlight_pane_cp018

0x4cf6,	// (0x0004bed3) main2_pane_ParamLimits

0x4cf6,	// (0x0004bed3) main2_pane

0x5a08,	// (0x0004cbe5) popup_sp_fs_action_menu_bg_pane_g1

0x5a10,	// (0x0004cbed) popup_sp_fs_action_menu_bg_pane_g2

0x5a18,	// (0x0004cbf5) popup_sp_fs_action_menu_bg_pane_g3

0x5a20,	// (0x0004cbfd) popup_sp_fs_action_menu_bg_pane_g4

0x5a28,	// (0x0004cc05) popup_sp_fs_action_menu_bg_pane_g5

0x5a30,	// (0x0004cc0d) popup_sp_fs_action_menu_bg_pane_g6

0x5a38,	// (0x0004cc15) popup_sp_fs_action_menu_bg_pane_g7

0x5a40,	// (0x0004cc1d) popup_sp_fs_action_menu_bg_pane_g8

0x5a48,	// (0x0004cc25) popup_sp_fs_action_menu_bg_pane_g9

0x5a50,	// (0x0004cc2d) popup_sp_fs_action_menu_bg_pane_g10

0x5a50,	// (0x0004cc2d) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf11f,	// (0x000562fc) popup_sp_fs_action_menu_bg_pane_g

0x095f,	// (0x00047b3c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t3_g3_g1

0x096b,	// (0x00047b48) list_medium_line_x2_t3_g3_g2_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_x2_t3_g3_g2

0x095f,	// (0x00047b3c) list_medium_line_x2_t3_g3_g3_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1cd,	// (0x000563aa) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1cd,	// (0x000563aa) list_medium_line_x2_t3_g3_g

0x0977,	// (0x00047b54) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t3_g3_t1

0x0977,	// (0x00047b54) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t3_g3_t2

0x098a,	// (0x00047b67) list_medium_line_x2_t3_g3_t3_ParamLimits

0x098a,	// (0x00047b67) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1d4,	// (0x000563b1) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1d4,	// (0x000563b1) list_medium_line_x2_t3_g3_t

0x095f,	// (0x00047b3c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t3_g2_g1

0x095f,	// (0x00047b3c) list_medium_line_x2_t3_g2_g2_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1db,	// (0x000563b8) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1db,	// (0x000563b8) list_medium_line_x2_t3_g2_g

0x0977,	// (0x00047b54) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t3_g2_t1

0x0977,	// (0x00047b54) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t3_g2_t2

0x098a,	// (0x00047b67) list_medium_line_x2_t3_g2_t3_ParamLimits

0x098a,	// (0x00047b67) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1d4,	// (0x000563b1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1d4,	// (0x000563b1) list_medium_line_x2_t3_g2_t

0x095f,	// (0x00047b3c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t4_g4_g1

0x096b,	// (0x00047b48) list_medium_line_x2_t4_g4_g2_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_x2_t4_g4_g2

0x096b,	// (0x00047b48) list_medium_line_x2_t4_g4_g3_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_x2_t4_g4_g3

0x095f,	// (0x00047b3c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1e0,	// (0x000563bd) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1e0,	// (0x000563bd) list_medium_line_x2_t4_g4_g

0x0977,	// (0x00047b54) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t4_g4_t1

0x0977,	// (0x00047b54) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t4_g4_t2

0x0977,	// (0x00047b54) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t4_g4_t3

0x098a,	// (0x00047b67) list_medium_line_x2_t4_g4_t4_ParamLimits

0x098a,	// (0x00047b67) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1e9,	// (0x000563c6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1e9,	// (0x000563c6) list_medium_line_x2_t4_g4_t

0x095f,	// (0x00047b3c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t2_g4_g1

0x096b,	// (0x00047b48) list_medium_line_x2_t2_g4_g2_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_x2_t2_g4_g2

0x096b,	// (0x00047b48) list_medium_line_x2_t2_g4_g3_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_x2_t2_g4_g3

0x095f,	// (0x00047b3c) list_medium_line_x2_t2_g4_g4_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1e0,	// (0x000563bd) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1e0,	// (0x000563bd) list_medium_line_x2_t2_g4_g

0x0977,	// (0x00047b54) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t2_g4_t1

0x098a,	// (0x00047b67) list_medium_line_x2_t2_g4_t2_ParamLimits

0x098a,	// (0x00047b67) list_medium_line_x2_t2_g4_t2

0x0001,

0xf250,	// (0x0005642d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf250,	// (0x0005642d) list_medium_line_x2_t2_g4_t

0x095f,	// (0x00047b3c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t2_g3_g1

0x096b,	// (0x00047b48) list_medium_line_x2_t2_g3_g2_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_x2_t2_g3_g2

0x095f,	// (0x00047b3c) list_medium_line_x2_t2_g3_g3_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1cd,	// (0x000563aa) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1cd,	// (0x000563aa) list_medium_line_x2_t2_g3_g

0x0977,	// (0x00047b54) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t2_g3_t1

0x098a,	// (0x00047b67) list_medium_line_x2_t2_g3_t2_ParamLimits

0x098a,	// (0x00047b67) list_medium_line_x2_t2_g3_t2

0x0001,

0xf250,	// (0x0005642d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf250,	// (0x0005642d) list_medium_line_x2_t2_g3_t

0x72fe,	// (0x0004e4db) main_sp_fs_list_pane_ParamLimits

0x72fe,	// (0x0004e4db) main_sp_fs_list_pane

0x730b,	// (0x0004e4e8) sp_fs_scroll_pane_ParamLimits

0x730b,	// (0x0004e4e8) sp_fs_scroll_pane

0x09cb,	// (0x00047ba8) list_medium_line_x2_t3_t1

0x09cb,	// (0x00047ba8) list_medium_line_x2_t3_t2

0x09da,	// (0x00047bb7) list_medium_line_x2_t3_t3

0x0002,

0xf29b,	// (0x00056478) list_medium_line_x2_t3_t

0x09cb,	// (0x00047ba8) list_medium_line_x3_t4_t1

0x09cb,	// (0x00047ba8) list_medium_line_x3_t4_t2

0x09cb,	// (0x00047ba8) list_medium_line_x3_t4_t3

0x09cb,	// (0x00047ba8) list_medium_line_x3_t4_t4

0x0003,

0xf2a2,	// (0x0005647f) list_medium_line_x3_t4_t

0x09cb,	// (0x00047ba8) list_medium_line_x4_t5_t1

0x09cb,	// (0x00047ba8) list_medium_line_x4_t5_t2

0x09cb,	// (0x00047ba8) list_medium_line_x4_t5_t3

0x09cb,	// (0x00047ba8) list_medium_line_x4_t5_t4

0x09cb,	// (0x00047ba8) list_medium_line_x4_t5_t5

0x0004,

0xf2ab,	// (0x00056488) list_medium_line_x4_t5_t

0x095f,	// (0x00047b3c) list_medium_line_t4_g4_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_t4_g4_g1

0x095f,	// (0x00047b3c) list_medium_line_t4_g4_g2_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_t4_g4_g2

0x095f,	// (0x00047b3c) list_medium_line_t4_g4_g3_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_t4_g4_g3

0x095f,	// (0x00047b3c) list_medium_line_t4_g4_g4_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_t4_g4_g4

0x0003,

0xf2b6,	// (0x00056493) list_medium_line_t4_g4_g_ParamLimits

0xf2b6,	// (0x00056493) list_medium_line_t4_g4_g

0x0977,	// (0x00047b54) list_medium_line_t4_g4_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t4_g4_t1

0x0977,	// (0x00047b54) list_medium_line_t4_g4_t2_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t4_g4_t2

0x0977,	// (0x00047b54) list_medium_line_t4_g4_t3_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t4_g4_t3

0x0977,	// (0x00047b54) list_medium_line_t4_g4_t4_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t4_g4_t4

0x0003,

0xf2bf,	// (0x0005649c) list_medium_line_t4_g4_t_ParamLimits

0xf2bf,	// (0x0005649c) list_medium_line_t4_g4_t

0x7403,	// (0x0004e5e0) chi_dic_find_pane_g1

0x7fdd,	// (0x0004f1ba) main_tport_pane

0x09cb,	// (0x00047ba8) list_medium_line_plain_t1

0x095f,	// (0x00047b3c) list_medium_line_t2_g2_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_t2_g2_g1

0x1b6d,	// (0x00048d4a) list_medium_line_t2_g2_g2_ParamLimits

0x1b6d,	// (0x00048d4a) list_medium_line_t2_g2_g2

0x0001,

0xf990,	// (0x00056b6d) list_medium_line_t2_g2_g_ParamLimits

0xf990,	// (0x00056b6d) list_medium_line_t2_g2_g

0x0977,	// (0x00047b54) list_medium_line_t2_g2_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t2_g2_t1

0x0977,	// (0x00047b54) list_medium_line_t2_g2_t2_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t2_g2_t2

0x0001,

0xf995,	// (0x00056b72) list_medium_line_t2_g2_t_ParamLimits

0xf995,	// (0x00056b72) list_medium_line_t2_g2_t

0x1e89,	// (0x00049066) aid_sp_fs_list_icon_a_sm

0x1e91,	// (0x0004906e) aid_sp_fs_list_icon_d

0x1e99,	// (0x00049076) aid_sp_fs_text_primary

0x1ea2,	// (0x0004907f) aid_sp_fs_text_secondary

0xa78f,	// (0x0005196c) list_medium_line

0xa78f,	// (0x0005196c) list_medium_line_g2

0xa78f,	// (0x0005196c) list_medium_line_g3

0xa78f,	// (0x0005196c) list_medium_line_plain

0xa78f,	// (0x0005196c) list_medium_line_plain_t2

0xa78f,	// (0x0005196c) list_medium_line_plain_t3

0xa78f,	// (0x0005196c) list_medium_line_right_icon

0xa78f,	// (0x0005196c) list_medium_line_right_iconx2

0xa78f,	// (0x0005196c) list_medium_line_t2

0xa78f,	// (0x0005196c) list_medium_line_t2_g2

0xa78f,	// (0x0005196c) list_medium_line_t2_g3

0xa78f,	// (0x0005196c) list_medium_line_t2_right_icon

0xa78f,	// (0x0005196c) list_medium_line_t2_right_iconx2

0xa78f,	// (0x0005196c) list_medium_line_t3

0xa78f,	// (0x0005196c) list_medium_line_t3_g2

0xa78f,	// (0x0005196c) list_medium_line_t3_g3

0xa78f,	// (0x0005196c) list_medium_line_t3_right_iconx2

0xf038,	// (0x00056215) list_medium_line_t4_g4

0x1eab,	// (0x00049088) list_medium_line_x2

0x1eab,	// (0x00049088) list_medium_line_x2_t2_g2

0x1eab,	// (0x00049088) list_medium_line_x2_t2_g3

0x1eab,	// (0x00049088) list_medium_line_x2_t2_g4

0x1eab,	// (0x00049088) list_medium_line_x2_t3

0x1eab,	// (0x00049088) list_medium_line_x2_t3_g2

0x1eab,	// (0x00049088) list_medium_line_x2_t3_g3

0x1eab,	// (0x00049088) list_medium_line_x2_t3_g4

0x1eab,	// (0x00049088) list_medium_line_x2_t4_g2

0x1eab,	// (0x00049088) list_medium_line_x2_t4_g4

0xf041,	// (0x0005621e) list_medium_line_x3

0xf041,	// (0x0005621e) list_medium_line_x3_t4

0xf041,	// (0x0005621e) list_medium_line_x3_t4_g4

0xf038,	// (0x00056215) list_medium_line_x4_t4

0xf038,	// (0x00056215) list_medium_line_x4_t4_g7

0xf038,	// (0x00056215) list_medium_line_x4_t5

0xa798,	// (0x00051975) list_single_fs_dyc_pane_ParamLimits

0xa798,	// (0x00051975) list_single_fs_dyc_pane

0x095f,	// (0x00047b3c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x4_t4_g7_g1

0x5619,	// (0x0004c7f6) list_medium_line_x4_t4_g7_g2_ParamLimits

0x5619,	// (0x0004c7f6) list_medium_line_x4_t4_g7_g2

0x096b,	// (0x00047b48) list_medium_line_x4_t4_g7_g3_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_x4_t4_g7_g3

0x5619,	// (0x0004c7f6) list_medium_line_x4_t4_g7_g4_ParamLimits

0x5619,	// (0x0004c7f6) list_medium_line_x4_t4_g7_g4

0x5619,	// (0x0004c7f6) list_medium_line_x4_t4_g7_g5_ParamLimits

0x5619,	// (0x0004c7f6) list_medium_line_x4_t4_g7_g5

0x5619,	// (0x0004c7f6) list_medium_line_x4_t4_g7_g6_ParamLimits

0x5619,	// (0x0004c7f6) list_medium_line_x4_t4_g7_g6

0x5627,	// (0x0004c804) list_medium_line_x4_t4_g7_g7_ParamLimits

0x5627,	// (0x0004c804) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb60,	// (0x00056d3d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb60,	// (0x00056d3d) list_medium_line_x4_t4_g7_g

0x0977,	// (0x00047b54) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x4_t4_g7_t1

0x0977,	// (0x00047b54) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x4_t4_g7_t2

0x0977,	// (0x00047b54) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x4_t4_g7_t3

0x237a,	// (0x00049557) list_medium_line_x4_t4_g7_t4_ParamLimits

0x237a,	// (0x00049557) list_medium_line_x4_t4_g7_t4

0x238d,	// (0x0004956a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x238d,	// (0x0004956a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb6f,	// (0x00056d4c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb6f,	// (0x00056d4c) list_medium_line_x4_t4_g7_t

0xae71,	// (0x0005204e) list_single_dyc_row_pane_ParamLimits

0xae71,	// (0x0005204e) list_single_dyc_row_pane

0xb3f6,	// (0x000525d3) call5_gesture_pane_ParamLimits

0xb3f6,	// (0x000525d3) call5_gesture_pane

0xb426,	// (0x00052603) call5_windows_pane_ParamLimits

0xb426,	// (0x00052603) call5_windows_pane

0xb492,	// (0x0005266f) call5_swipe_1_pane_cp_ParamLimits

0xb492,	// (0x0005266f) call5_swipe_1_pane_cp

0xb49e,	// (0x0005267b) call5_swipe_2_pane_cp_ParamLimits

0xb49e,	// (0x0005267b) call5_swipe_2_pane_cp

0xd29d,	// (0x0005447a) call5_image_pane_cp

0xb4aa,	// (0x00052687) popup_call5_audio_first_window_cp_ParamLimits

0xb4aa,	// (0x00052687) popup_call5_audio_first_window_cp

0x29f8,	// (0x00049bd5) call5_swipe_1_pane_g1_cp_ParamLimits

0x29f8,	// (0x00049bd5) call5_swipe_1_pane_g1_cp

0x2a3e,	// (0x00049c1b) call5_swipe_1_pane_g2_cp

0x2a11,	// (0x00049bee) call5_swipe_1_pane_t1_cp_ParamLimits

0x2a11,	// (0x00049bee) call5_swipe_1_pane_t1_cp

0x29f8,	// (0x00049bd5) call5_swipe_2_pane_g1_cp_ParamLimits

0x29f8,	// (0x00049bd5) call5_swipe_2_pane_g1_cp

0x2a46,	// (0x00049c23) call5_swipe_2_pane_g2_cp

0x2a4e,	// (0x00049c2b) call5_swipe_2_pane_t1_cp_ParamLimits

0x2a4e,	// (0x00049c2b) call5_swipe_2_pane_t1_cp

0xdd6f,	// (0x00054f4c) main_sp_fs_email_pane

0x2a63,	// (0x00049c40) main_sp_fs_listscroll_pane_te

0xb4b6,	// (0x00052693) popup_sp_fs_action_menu_pane_ParamLimits

0xb4b6,	// (0x00052693) popup_sp_fs_action_menu_pane

0xd31e,	// (0x000544fb) bg_sp_fs_ctrlbar_pane_g1

0x151b,	// (0x000486f8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x152d,	// (0x0004870a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1524,	// (0x00048701) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xd31e,	// (0x000544fb) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5d,	// (0x00056e3a) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x0c33,	// (0x00047e10) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x0c33,	// (0x00047e10) bg_sp_fs_ctrlbar_ddmenu_pane

0x2a6c,	// (0x00049c49) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2a6c,	// (0x00049c49) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2a78,	// (0x00049c55) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2a78,	// (0x00049c55) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc66,	// (0x00056e43) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc66,	// (0x00056e43) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2a84,	// (0x00049c61) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2a84,	// (0x00049c61) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x5a50,	// (0x0004cc2d) list_medium_line_t2_right_icon_g1

0x09cb,	// (0x00047ba8) list_medium_line_t2_right_icon_t1

0x09cb,	// (0x00047ba8) list_medium_line_t2_right_icon_t2

0x0001,

0xfc6b,	// (0x00056e48) list_medium_line_t2_right_icon_t

0xeff2,	// (0x000561cf) bg_sp_fs_ctrlbar_pane_ParamLimits

0xeff2,	// (0x000561cf) bg_sp_fs_ctrlbar_pane

0xb53d,	// (0x0005271a) main_sp_fs_ctrlbar_button_pane_cp01

0xb545,	// (0x00052722) main_sp_fs_ctrlbar_ddmenu_pane

0x2ad6,	// (0x00049cb3) main_sp_fs_ctrlbar_pane_g1

0x2ae2,	// (0x00049cbf) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc70,	// (0x00056e4d) main_sp_fs_ctrlbar_pane_g

0xb57f,	// (0x0005275c) main_sp_fs_ctrlbar_pane_t1

0xb5c7,	// (0x000527a4) main_sp_fs_ctrlbar_pane

0xb5db,	// (0x000527b8) main_sp_fs_listscroll_pane_te_cp01

0xb5ec,	// (0x000527c9) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xb5ec,	// (0x000527c9) popup_sp_fs_action_menu_pane_cp01

0xdd6f,	// (0x00054f4c) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xdd6f,	// (0x00054f4c) bg_sp_fs_highlight_list_pane_cp01

0xb60c,	// (0x000527e9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xb60c,	// (0x000527e9) sp_fs_action_menu_list_gene_pane_g1

0x2b09,	// (0x00049ce6) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2b09,	// (0x00049ce6) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7e,	// (0x00056e5b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7e,	// (0x00056e5b) sp_fs_action_menu_list_gene_pane_g

0xb61b,	// (0x000527f8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xb61b,	// (0x000527f8) sp_fs_action_menu_list_gene_pane_t1

0xb633,	// (0x00052810) sp_fs_action_menu_list_gene_pane_ParamLimits

0xb633,	// (0x00052810) sp_fs_action_menu_list_gene_pane

0x2b16,	// (0x00049cf3) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2b16,	// (0x00049cf3) popup_sp_fs_action_menu_bg_pane

0xb650,	// (0x0005282d) sp_fs_action_menu_list_pane_ParamLimits

0xb650,	// (0x0005282d) sp_fs_action_menu_list_pane

0x2b24,	// (0x00049d01) sp_fs_scroll_pane_cp01_ParamLimits

0x2b24,	// (0x00049d01) sp_fs_scroll_pane_cp01

0x09cb,	// (0x00047ba8) list_medium_line_plain_t2_t1

0x09cb,	// (0x00047ba8) list_medium_line_plain_t2_t2

0x0001,

0xfc6b,	// (0x00056e48) list_medium_line_plain_t2_t

0x09cb,	// (0x00047ba8) list_medium_line_plain_t3_t1

0x09cb,	// (0x00047ba8) list_medium_line_plain_t3_t2

0x09cb,	// (0x00047ba8) list_medium_line_plain_t3_t3

0x0002,

0xfc83,	// (0x00056e60) list_medium_line_plain_t3_t

0x095f,	// (0x00047b3c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t2_g2_g1

0x095f,	// (0x00047b3c) list_medium_line_x2_t2_g2_g2_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1db,	// (0x000563b8) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1db,	// (0x000563b8) list_medium_line_x2_t2_g2_g

0x0977,	// (0x00047b54) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t2_g2_t1

0x098a,	// (0x00047b67) list_medium_line_x2_t2_g2_t2_ParamLimits

0x098a,	// (0x00047b67) list_medium_line_x2_t2_g2_t2

0x0001,

0xf250,	// (0x0005642d) list_medium_line_x2_t2_g2_t_ParamLimits

0xf250,	// (0x0005642d) list_medium_line_x2_t2_g2_t

0x095f,	// (0x00047b3c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t4_g2_g1

0x2b4a,	// (0x00049d27) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2b4a,	// (0x00049d27) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc8a,	// (0x00056e67) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc8a,	// (0x00056e67) list_medium_line_x2_t4_g2_g

0x0977,	// (0x00047b54) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t4_g2_t1

0x0977,	// (0x00047b54) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t4_g2_t2

0x0977,	// (0x00047b54) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t4_g2_t3

0x098a,	// (0x00047b67) list_medium_line_x2_t4_g2_t4_ParamLimits

0x098a,	// (0x00047b67) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1e9,	// (0x000563c6) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1e9,	// (0x000563c6) list_medium_line_x2_t4_g2_t

0x5a50,	// (0x0004cc2d) list_medium_line_t3_right_iconx2_g1

0xd31e,	// (0x000544fb) list_medium_line_t3_right_iconx2_g2

0x2b5b,	// (0x00049d38) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8f,	// (0x00056e6c) list_medium_line_t3_right_iconx2_g

0x09cb,	// (0x00047ba8) list_medium_line_t3_right_iconx2_t1

0x09cb,	// (0x00047ba8) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc6b,	// (0x00056e48) list_medium_line_t3_right_iconx2_t

0x095f,	// (0x00047b3c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x3_t4_g4_g1

0x096b,	// (0x00047b48) list_medium_line_x3_t4_g4_g2_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_x3_t4_g4_g2

0x095f,	// (0x00047b3c) list_medium_line_x3_t4_g4_g3_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x3_t4_g4_g3

0x096b,	// (0x00047b48) list_medium_line_x3_t4_g4_g4_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc96,	// (0x00056e73) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc96,	// (0x00056e73) list_medium_line_x3_t4_g4_g

0x0977,	// (0x00047b54) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x3_t4_g4_t1

0x0977,	// (0x00047b54) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x3_t4_g4_t2

0x0977,	// (0x00047b54) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x3_t4_g4_t3

0x2b64,	// (0x00049d41) list_medium_line_x3_t4_g4_t4_ParamLimits

0x2b64,	// (0x00049d41) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc9f,	// (0x00056e7c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc9f,	// (0x00056e7c) list_medium_line_x3_t4_g4_t

0xb66e,	// (0x0005284b) list_single_dyc_row_text_pane_t1_ParamLimits

0xb66e,	// (0x0005284b) list_single_dyc_row_text_pane_t1

0xb6a5,	// (0x00052882) list_single_dyc_row_text_pane_t2_ParamLimits

0xb6a5,	// (0x00052882) list_single_dyc_row_text_pane_t2

0x2b81,	// (0x00049d5e) list_single_dyc_row_text_pane_t3_ParamLimits

0x2b81,	// (0x00049d5e) list_single_dyc_row_text_pane_t3

0x0005,

0xfca8,	// (0x00056e85) list_single_dyc_row_text_pane_t_ParamLimits

0xfca8,	// (0x00056e85) list_single_dyc_row_text_pane_t

0x2ba5,	// (0x00049d82) list_single_dyc_row_pane_g1_ParamLimits

0x2ba5,	// (0x00049d82) list_single_dyc_row_pane_g1

0x2bb1,	// (0x00049d8e) list_single_dyc_row_pane_g2_ParamLimits

0x2bb1,	// (0x00049d8e) list_single_dyc_row_pane_g2

0x2bbd,	// (0x00049d9a) list_single_dyc_row_pane_g3_ParamLimits

0x2bbd,	// (0x00049d9a) list_single_dyc_row_pane_g3

0x2bc9,	// (0x00049da6) list_single_dyc_row_pane_g4_ParamLimits

0x2bc9,	// (0x00049da6) list_single_dyc_row_pane_g4

0x0003,

0xfcb5,	// (0x00056e92) list_single_dyc_row_pane_g_ParamLimits

0xfcb5,	// (0x00056e92) list_single_dyc_row_pane_g

0x2bd5,	// (0x00049db2) list_single_dyc_row_text_pane_ParamLimits

0x2bd5,	// (0x00049db2) list_single_dyc_row_text_pane

0x4bf8,	// (0x0004bdd5) bg_sp_fs_scroll_pane

0x2bf4,	// (0x00049dd1) thumb_sp_fs_scroll_pane

0x095f,	// (0x00047b3c) list_medium_line_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_g1

0x0977,	// (0x00047b54) list_medium_line_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t1

0x095f,	// (0x00047b3c) list_medium_line_x2_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_g1

0x1b6d,	// (0x00048d4a) list_medium_line_x2_g2_ParamLimits

0x1b6d,	// (0x00048d4a) list_medium_line_x2_g2

0x0001,

0xf990,	// (0x00056b6d) list_medium_line_x2_g_ParamLimits

0xf990,	// (0x00056b6d) list_medium_line_x2_g

0xdd5b,	// (0x00054f38) list_medium_line_x2_t1_ParamLimits

0xdd5b,	// (0x00054f38) list_medium_line_x2_t1

0x095f,	// (0x00047b3c) list_medium_line_x3_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x3_g1

0x2bfd,	// (0x00049dda) list_medium_line_x3_g2_ParamLimits

0x2bfd,	// (0x00049dda) list_medium_line_x3_g2

0x0001,

0xfcbe,	// (0x00056e9b) list_medium_line_x3_g_ParamLimits

0xfcbe,	// (0x00056e9b) list_medium_line_x3_g

0x2c0a,	// (0x00049de7) list_medium_line_x3_t1_ParamLimits

0x2c0a,	// (0x00049de7) list_medium_line_x3_t1

0x2c1e,	// (0x00049dfb) thumb_sp_fs_scroll_pane_g1

0x2c27,	// (0x00049e04) thumb_sp_fs_scroll_pane_g2

0x2c30,	// (0x00049e0d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcc3,	// (0x00056ea0) thumb_sp_fs_scroll_pane_g

0x2c1e,	// (0x00049dfb) bg_sp_fs_scroll_pane_g1

0x2c27,	// (0x00049e04) bg_sp_fs_scroll_pane_g2

0x2c30,	// (0x00049e0d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcc3,	// (0x00056ea0) bg_sp_fs_scroll_pane_g

0x095f,	// (0x00047b3c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t3_g4_g1

0x096b,	// (0x00047b48) list_medium_line_x2_t3_g4_g2_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_x2_t3_g4_g2

0x096b,	// (0x00047b48) list_medium_line_x2_t3_g4_g3_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_x2_t3_g4_g3

0x095f,	// (0x00047b3c) list_medium_line_x2_t3_g4_g4_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1e0,	// (0x000563bd) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1e0,	// (0x000563bd) list_medium_line_x2_t3_g4_g

0x0977,	// (0x00047b54) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t3_g4_t1

0x0977,	// (0x00047b54) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_x2_t3_g4_t2

0x098a,	// (0x00047b67) list_medium_line_x2_t3_g4_t3_ParamLimits

0x098a,	// (0x00047b67) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1d4,	// (0x000563b1) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1d4,	// (0x000563b1) list_medium_line_x2_t3_g4_t

0x095f,	// (0x00047b3c) list_medium_line_g2_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_g2_g1

0x1b6d,	// (0x00048d4a) list_medium_line_g2_g2_ParamLimits

0x1b6d,	// (0x00048d4a) list_medium_line_g2_g2

0x0001,

0xf990,	// (0x00056b6d) list_medium_line_g2_g_ParamLimits

0xf990,	// (0x00056b6d) list_medium_line_g2_g

0x0977,	// (0x00047b54) list_medium_line_g2_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_g2_t1

0x095f,	// (0x00047b3c) list_medium_line_t3_g2_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_t3_g2_g1

0x1b6d,	// (0x00048d4a) list_medium_line_t3_g2_g2_ParamLimits

0x1b6d,	// (0x00048d4a) list_medium_line_t3_g2_g2

0x0001,

0xf990,	// (0x00056b6d) list_medium_line_t3_g2_g_ParamLimits

0xf990,	// (0x00056b6d) list_medium_line_t3_g2_g

0x0977,	// (0x00047b54) list_medium_line_t3_g2_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t3_g2_t1

0x0977,	// (0x00047b54) list_medium_line_t3_g2_t2_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t3_g2_t2

0x0977,	// (0x00047b54) list_medium_line_t3_g2_t3_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t3_g2_t3

0x0002,

0xfcca,	// (0x00056ea7) list_medium_line_t3_g2_t_ParamLimits

0xfcca,	// (0x00056ea7) list_medium_line_t3_g2_t

0x1b19,	// (0x00048cf6) list_medium_line_right_icon_g1

0x09cb,	// (0x00047ba8) list_medium_line_right_icon_t1

0x095f,	// (0x00047b3c) list_medium_line_t2_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_t2_g1

0x0977,	// (0x00047b54) list_medium_line_t2_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t2_t1

0x0977,	// (0x00047b54) list_medium_line_t2_t2_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t2_t2

0x0001,

0xf995,	// (0x00056b72) list_medium_line_t2_t_ParamLimits

0xf995,	// (0x00056b72) list_medium_line_t2_t

0x095f,	// (0x00047b3c) list_medium_line_t3_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_t3_g1

0x0977,	// (0x00047b54) list_medium_line_t3_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t3_t1

0x0977,	// (0x00047b54) list_medium_line_t3_t2_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t3_t2

0x0977,	// (0x00047b54) list_medium_line_t3_t3_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t3_t3

0x0002,

0xfcca,	// (0x00056ea7) list_medium_line_t3_t_ParamLimits

0xfcca,	// (0x00056ea7) list_medium_line_t3_t

0x095f,	// (0x00047b3c) list_medium_line_g3_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_g3_g1

0x096b,	// (0x00047b48) list_medium_line_g3_g2_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_g3_g2

0x096b,	// (0x00047b48) list_medium_line_g3_g3_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_g3_g3

0x0002,

0xfcd1,	// (0x00056eae) list_medium_line_g3_g_ParamLimits

0xfcd1,	// (0x00056eae) list_medium_line_g3_g

0x0977,	// (0x00047b54) list_medium_line_g3_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_g3_t1

0x095f,	// (0x00047b3c) list_medium_line_t2_g3_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_t2_g3_g1

0x096b,	// (0x00047b48) list_medium_line_t2_g3_g2_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_t2_g3_g2

0x096b,	// (0x00047b48) list_medium_line_t2_g3_g3_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_t2_g3_g3

0x0002,

0xfcd1,	// (0x00056eae) list_medium_line_t2_g3_g_ParamLimits

0xfcd1,	// (0x00056eae) list_medium_line_t2_g3_g

0x0977,	// (0x00047b54) list_medium_line_t2_g3_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t2_g3_t1

0x0977,	// (0x00047b54) list_medium_line_t2_g3_t2_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t2_g3_t2

0x0001,

0xf995,	// (0x00056b72) list_medium_line_t2_g3_t_ParamLimits

0xf995,	// (0x00056b72) list_medium_line_t2_g3_t

0x095f,	// (0x00047b3c) list_medium_line_t3_g3_g1_ParamLimits

0x095f,	// (0x00047b3c) list_medium_line_t3_g3_g1

0x096b,	// (0x00047b48) list_medium_line_t3_g3_g2_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_t3_g3_g2

0x096b,	// (0x00047b48) list_medium_line_t3_g3_g3_ParamLimits

0x096b,	// (0x00047b48) list_medium_line_t3_g3_g3

0x0002,

0xfcd1,	// (0x00056eae) list_medium_line_t3_g3_g_ParamLimits

0xfcd1,	// (0x00056eae) list_medium_line_t3_g3_g

0x0977,	// (0x00047b54) list_medium_line_t3_g3_t1_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t3_g3_t1

0x0977,	// (0x00047b54) list_medium_line_t3_g3_t2_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t3_g3_t2

0x0977,	// (0x00047b54) list_medium_line_t3_g3_t3_ParamLimits

0x0977,	// (0x00047b54) list_medium_line_t3_g3_t3

0x0002,

0xfcca,	// (0x00056ea7) list_medium_line_t3_g3_t_ParamLimits

0xfcca,	// (0x00056ea7) list_medium_line_t3_g3_t

0x5a50,	// (0x0004cc2d) list_medium_line_right_iconx2_g1

0x5a50,	// (0x0004cc2d) list_medium_line_right_iconx2_g2

0x0001,

0xfcd8,	// (0x00056eb5) list_medium_line_right_iconx2_g

0x2c39,	// (0x00049e16) list_medium_line_right_iconx2_t1

0x5a50,	// (0x0004cc2d) list_medium_line_t2_right_iconx2_g1

0x5a50,	// (0x0004cc2d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcd8,	// (0x00056eb5) list_medium_line_t2_right_iconx2_g

0x09cb,	// (0x00047ba8) list_medium_line_t2_right_iconx2_t1

0x09cb,	// (0x00047ba8) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc6b,	// (0x00056e48) list_medium_line_t2_right_iconx2_t

0x09cb,	// (0x00047ba8) list_medium_line_x4_t4_t1

0x09cb,	// (0x00047ba8) list_medium_line_x4_t4_t2

0x09cb,	// (0x00047ba8) list_medium_line_x4_t4_t3

0x09cb,	// (0x00047ba8) list_medium_line_x4_t4_t4

0x0003,

0xf2a2,	// (0x0005647f) list_medium_line_x4_t4_t

0xb7e1,	// (0x000529be) tport_appsw_pane_ParamLimits

0xb7e1,	// (0x000529be) tport_appsw_pane

0xb7ed,	// (0x000529ca) tport_contact_pane_ParamLimits

0xb7ed,	// (0x000529ca) tport_contact_pane

0xb7fb,	// (0x000529d8) tport_listscroll_pane_ParamLimits

0xb7fb,	// (0x000529d8) tport_listscroll_pane

0xb809,	// (0x000529e6) cell_tport_appsw_pane_ParamLimits

0xb809,	// (0x000529e6) cell_tport_appsw_pane

0x5627,	// (0x0004c804) tport_appsw_pane_g1_ParamLimits

0x5627,	// (0x0004c804) tport_appsw_pane_g1

0x2c48,	// (0x00049e25) tport_contact_pane_g1

0x2c51,	// (0x00049e2e) tport_contact_pane_t1

0x2c5f,	// (0x00049e3c) tport_contact_pane_t2

0x0001,

0xfcdd,	// (0x00056eba) tport_contact_pane_t

0x2c6d,	// (0x00049e4a) list_tport_pane

0x5a62,	// (0x0004cc3f) scroll_pane_cp_030

0x2c7e,	// (0x00049e5b) cell_tport_appsw_pane_g1

0x2c8e,	// (0x00049e6b) cell_tport_appsw_pane_t1

0x2c9c,	// (0x00049e79) grid_highlight_pane_cp019

0xb830,	// (0x00052a0d) list_tport_double_graphic_pane_ParamLimits

0xb830,	// (0x00052a0d) list_tport_double_graphic_pane

0xdd6f,	// (0x00054f4c) list_highlight_pane_cp023_ParamLimits

0xdd6f,	// (0x00054f4c) list_highlight_pane_cp023

0xb83d,	// (0x00052a1a) list_tport_double_graphic_pane_g1_ParamLimits

0xb83d,	// (0x00052a1a) list_tport_double_graphic_pane_g1

0xb84a,	// (0x00052a27) list_tport_double_graphic_pane_t1_ParamLimits

0xb84a,	// (0x00052a27) list_tport_double_graphic_pane_t1

0xb85f,	// (0x00052a3c) list_tport_double_graphic_pane_t2_ParamLimits

0xb85f,	// (0x00052a3c) list_tport_double_graphic_pane_t2

0x0001,

0xfce9,	// (0x00056ec6) list_tport_double_graphic_pane_t_ParamLimits

0xfce9,	// (0x00056ec6) list_tport_double_graphic_pane_t

0x4bf8,	// (0x0004bdd5) main_cale_note_pane

0x99bc,	// (0x00050b99) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x99bc,	// (0x00050b99) cell_vitu2_function_top_wide_pane_cp01

0xb19d,	// (0x0005237a) wait_bar_pane_cp05_ParamLimits

0xdd6f,	// (0x00054f4c) listscroll_cmail_pane

0x2cac,	// (0x00049e89) list_cmail_pane

0xb871,	// (0x00052a4e) list_cmail_body_pane

0xb871,	// (0x00052a4e) list_single_cmail_header_caption_pane

0xb88a,	// (0x00052a67) list_single_cmail_header_detail_pane_ParamLimits

0xb88a,	// (0x00052a67) list_single_cmail_header_detail_pane

0x2ccf,	// (0x00049eac) list_single_cmail_header_caption_pane_t1

0xb8b7,	// (0x00052a94) list_single_cmail_header_detail_pane_g1_ParamLimits

0xb8b7,	// (0x00052a94) list_single_cmail_header_detail_pane_g1

0x2ce6,	// (0x00049ec3) list_single_cmail_header_detail_pane_g2_ParamLimits

0x2ce6,	// (0x00049ec3) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcee,	// (0x00056ecb) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcee,	// (0x00056ecb) list_single_cmail_header_detail_pane_g

0xb8cd,	// (0x00052aaa) list_single_cmail_header_detail_pane_t1_ParamLimits

0xb8cd,	// (0x00052aaa) list_single_cmail_header_detail_pane_t1

0x2d23,	// (0x00049f00) list_single_cmail_header_editor_pane_bg_ParamLimits

0x2d23,	// (0x00049f00) list_single_cmail_header_editor_pane_bg

0x2d3a,	// (0x00049f17) list_cmail_body_pane_g1

0x2d43,	// (0x00049f20) list_cmail_body_pane_t1

0x190a,	// (0x00048ae7) list_single_cmail_header_editor_pane_bg_g1

0xd53c,	// (0x00054719) list_single_cmail_header_editor_pane_bg_g1_copy1

0x191a,	// (0x00048af7) list_single_cmail_header_editor_pane_bg_g1_copy2

0x1912,	// (0x00048aef) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1b65,	// (0x00048d42) list_single_cmail_header_editor_pane_bg_g1_copy4

0x193a,	// (0x00048b17) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x192a,	// (0x00048b07) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1932,	// (0x00048b0f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xd51c,	// (0x000546f9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb909,	// (0x00052ae6) calenote_gesture_pane_ParamLimits

0xb909,	// (0x00052ae6) calenote_gesture_pane

0xb921,	// (0x00052afe) calenote_window_pane_ParamLimits

0xb921,	// (0x00052afe) calenote_window_pane

0x2d51,	// (0x00049f2e) popup_note_window_cp01

0xb939,	// (0x00052b16) calenote_swipe_1_pane_ParamLimits

0xb939,	// (0x00052b16) calenote_swipe_1_pane

0xb49e,	// (0x0005267b) calenote_swipe_2_pane_ParamLimits

0xb49e,	// (0x0005267b) calenote_swipe_2_pane

0x29f8,	// (0x00049bd5) calenote_swipe_1_pane_g1_ParamLimits

0x29f8,	// (0x00049bd5) calenote_swipe_1_pane_g1

0x2a05,	// (0x00049be2) calenote_swipe_1_pane_g2_ParamLimits

0x2a05,	// (0x00049be2) calenote_swipe_1_pane_g2

0x0001,

0xfc53,	// (0x00056e30) calenote_swipe_1_pane_g_ParamLimits

0xfc53,	// (0x00056e30) calenote_swipe_1_pane_g

0x2d63,	// (0x00049f40) calenote_swipe_1_pane_t1_ParamLimits

0x2d63,	// (0x00049f40) calenote_swipe_1_pane_t1

0x29f8,	// (0x00049bd5) calenote_swipe_2_pane_g1_ParamLimits

0x29f8,	// (0x00049bd5) calenote_swipe_2_pane_g1

0x2d82,	// (0x00049f5f) calenote_swipe_2_pane_g2_ParamLimits

0x2d82,	// (0x00049f5f) calenote_swipe_2_pane_g2

0x0001,

0xfcfa,	// (0x00056ed7) calenote_swipe_2_pane_g_ParamLimits

0xfcfa,	// (0x00056ed7) calenote_swipe_2_pane_g

0x2d8e,	// (0x00049f6b) calenote_swipe_2_pane_t1_ParamLimits

0x2d8e,	// (0x00049f6b) calenote_swipe_2_pane_t1

0x4bf8,	// (0x0004bdd5) main_mup_navstr_pane

0x89d5,	// (0x0004fbb2) main_mup3_pane_t7_ParamLimits

0x89d5,	// (0x0004fbb2) main_mup3_pane_t7

0x91aa,	// (0x00050387) main_mp4_pane_g6_ParamLimits

0x91aa,	// (0x00050387) main_mp4_pane_g6

0x9504,	// (0x000506e1) main_image3_pane_t4_ParamLimits

0x9504,	// (0x000506e1) main_image3_pane_t4

0xb94c,	// (0x00052b29) popup_navstr_preview_pane_ParamLimits

0xb94c,	// (0x00052b29) popup_navstr_preview_pane

0xb958,	// (0x00052b35) scroll_navstr_pane_ParamLimits

0xb958,	// (0x00052b35) scroll_navstr_pane

0x4bf8,	// (0x0004bdd5) bg_popup_preview_window_pane_cp04

0x2db5,	// (0x00049f92) popup_navstr_preview_pane_t1

0xb964,	// (0x00052b41) scroll_navstr_pane_g1_ParamLimits

0xb964,	// (0x00052b41) scroll_navstr_pane_g1

0xb971,	// (0x00052b4e) scroll_navstr_pane_t1_ParamLimits

0xb971,	// (0x00052b4e) scroll_navstr_pane_t1

0x2d5a,	// (0x00049f37) bg_button_pane_cp014

0x2d5a,	// (0x00049f37) bg_button_pane_cp030

0x295c,	// (0x00049b39) list_double_fisheye_pane_g4_ParamLimits

0x295c,	// (0x00049b39) list_double_fisheye_pane_g4

0x2968,	// (0x00049b45) list_double_fisheye_pane_g5_ParamLimits

0x2968,	// (0x00049b45) list_double_fisheye_pane_g5

0x2cc3,	// (0x00049ea0) sp_fs_scroll_pane_cp03

0x2ad6,	// (0x00049cb3) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2ae2,	// (0x00049cbf) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc70,	// (0x00056e4d) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb57f,	// (0x0005275c) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x2cbb,	// (0x00049e98) sp_fs_scroll_pane_cp02

0x5b0d,	// (0x0004ccea) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x5b0d,	// (0x0004ccea) popup_sp_fs_calendar_preview_list_single_pane

0x4bf8,	// (0x0004bdd5) main_cam6_pano_pane

0x7fc1,	// (0x0004f19e) main_mup3_pane_ParamLimits

0x4bf8,	// (0x0004bdd5) main_phacti_pane

0xb090,	// (0x0005226d) bg_button_pane_cp11

0xb0a8,	// (0x00052285) main_mobtv_info_pane_g2_ParamLimits

0xb0a8,	// (0x00052285) main_mobtv_info_pane_g2

0x0001,

0xfbd0,	// (0x00056dad) main_mobtv_info_pane_g_ParamLimits

0xfbd0,	// (0x00056dad) main_mobtv_info_pane_g

0xb234,	// (0x00052411) sc_clock_pane_t5_ParamLimits

0xb234,	// (0x00052411) sc_clock_pane_t5

0xb2c1,	// (0x0005249e) main_radioblah_pane_g1_ParamLimits

0x28c1,	// (0x00049a9e) main_radioblah_pane_t3_ParamLimits

0x28c1,	// (0x00049a9e) main_radioblah_pane_t3

0x28d9,	// (0x00049ab6) main_radioblah_pane_t4_ParamLimits

0x28d9,	// (0x00049ab6) main_radioblah_pane_t4

0xb2df,	// (0x000524bc) main_radioblah_text_pane_ParamLimits

0xb2df,	// (0x000524bc) main_radioblah_text_pane

0xb2ec,	// (0x000524c9) main_radioblah_info_pane_g1_ParamLimits

0xb379,	// (0x00052556) main_radioblah_info_pane_t4_ParamLimits

0xb379,	// (0x00052556) main_radioblah_info_pane_t4

0xdd6f,	// (0x00054f4c) main_sp_fs_calendar_pane

0xb983,	// (0x00052b60) main_phacti_pane_g1

0xb98b,	// (0x00052b68) phacti_note_pane_ParamLimits

0xb98b,	// (0x00052b68) phacti_note_pane

0x2dcc,	// (0x00049fa9) phacti_term_pane_ParamLimits

0x2dcc,	// (0x00049fa9) phacti_term_pane

0x2de1,	// (0x00049fbe) phacti_note_pane_t1_ParamLimits

0x2de1,	// (0x00049fbe) phacti_note_pane_t1

0x2df8,	// (0x00049fd5) phacti_term_pane_g1

0x2e00,	// (0x00049fdd) phacti_term_pane_t1_ParamLimits

0x2e00,	// (0x00049fdd) phacti_term_pane_t1

0x2e2a,	// (0x0004a007) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2e32,	// (0x0004a00f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd04,	// (0x00056ee1) popup_sp_fs_calendar_preview_list_single_pane_g

0x2e3a,	// (0x0004a017) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2e3a,	// (0x0004a017) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2e50,	// (0x0004a02d) aid_popup_sp_fs_bg_corner_pane

0xd31e,	// (0x000544fb) popup_sp_fs_calendar_preview_bg_pane_g1

0x4bf8,	// (0x0004bdd5) popup_sp_fs_calendar_preview_bg_pane

0x2e58,	// (0x0004a035) popup_sp_fs_calendar_preview_list_pane

0xeff2,	// (0x000561cf) bg_main_sp_fs_cale_pane_ParamLimits

0xeff2,	// (0x000561cf) bg_main_sp_fs_cale_pane

0x2e69,	// (0x0004a046) listscroll_cale_mrui_pane_ParamLimits

0x2e69,	// (0x0004a046) listscroll_cale_mrui_pane

0x2e7e,	// (0x0004a05b) listscroll_sp_fs_schedule_track_pane

0x2e87,	// (0x0004a064) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x2e87,	// (0x0004a064) main_sp_fs_ctrlbar_pane_cp01

0x2e9a,	// (0x0004a077) main_sp_fs_ribbon_pane

0x2ea2,	// (0x0004a07f) popup_sp_fs_cale_preview_window

0xb9e2,	// (0x00052bbf) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb9e2,	// (0x00052bbf) list_single_sp_fs_schedule_track_pane

0x5635,	// (0x0004c812) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x5635,	// (0x0004c812) bg_sp_fs_highlight_list_pane_cp03

0xb9f8,	// (0x00052bd5) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb9f8,	// (0x00052bd5) list_single_sp_fs_schedule_track_pane_g1

0xba04,	// (0x00052be1) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xba04,	// (0x00052be1) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd09,	// (0x00056ee6) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd09,	// (0x00056ee6) list_single_sp_fs_schedule_track_pane_g

0xba10,	// (0x00052bed) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xba10,	// (0x00052bed) list_single_sp_fs_schedule_track_pane_t1

0xba28,	// (0x00052c05) sp_fs_schedule_track_pane_ParamLimits

0xba28,	// (0x00052c05) sp_fs_schedule_track_pane

0x2eb1,	// (0x0004a08e) sp_fs_schedule_track_pane_g1

0x2eb9,	// (0x0004a096) sp_fs_schedule_track_pane_g2

0x2ec1,	// (0x0004a09e) sp_fs_schedule_track_pane_g3

0x2ec9,	// (0x0004a0a6) sp_fs_schedule_track_pane_g4

0x2ed1,	// (0x0004a0ae) sp_fs_schedule_track_pane_g5

0x0004,

0xfd0e,	// (0x00056eeb) sp_fs_schedule_track_pane_g

0x190a,	// (0x00048ae7) bg_sp_fs_schedule_viewer_highlight_g1

0xd53c,	// (0x00054719) bg_sp_fs_schedule_viewer_highlight_g2

0x1912,	// (0x00048aef) bg_sp_fs_schedule_viewer_highlight_g3

0x191a,	// (0x00048af7) bg_sp_fs_schedule_viewer_highlight_g4

0x1b65,	// (0x00048d42) bg_sp_fs_schedule_viewer_highlight_g5

0x192a,	// (0x00048b07) bg_sp_fs_schedule_viewer_highlight_g6

0x1932,	// (0x00048b0f) bg_sp_fs_schedule_viewer_highlight_g7

0x193a,	// (0x00048b17) bg_sp_fs_schedule_viewer_highlight_g8

0xd51c,	// (0x000546f9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd19,	// (0x00056ef6) bg_sp_fs_schedule_viewer_highlight_g

0x4bf8,	// (0x0004bdd5) bg_main_sp_fs_ribbon_pane

0x9721,	// (0x000508fe) main_sp_fs_ribbon_pane_g1

0x2ed9,	// (0x0004a0b6) main_sp_fs_ribbon_pane_t1

0xba38,	// (0x00052c15) main_sp_fs_ribbon_pane_t2

0x2ee8,	// (0x0004a0c5) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd2c,	// (0x00056f09) main_sp_fs_ribbon_pane_t

0x2ef7,	// (0x0004a0d4) main_sp_fs_ribbon_scheduler_pane

0x2eff,	// (0x0004a0dc) bg_main_sp_fs_ribbon_pane_g1

0x2f08,	// (0x0004a0e5) bg_main_sp_fs_ribbon_pane_g2

0x2f11,	// (0x0004a0ee) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd33,	// (0x00056f10) bg_main_sp_fs_ribbon_pane_g

0x2f19,	// (0x0004a0f6) main_sp_fs_ribbon_scheduler_pane_g1

0x2f22,	// (0x0004a0ff) main_sp_fs_ribbon_scheduler_pane_g2

0x2f2b,	// (0x0004a108) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd3a,	// (0x00056f17) main_sp_fs_ribbon_scheduler_pane_g

0x2f34,	// (0x0004a111) list_cale_mrui_pane

0xba47,	// (0x00052c24) sp_fs_scroll_pane_cp07_ParamLimits

0xba47,	// (0x00052c24) sp_fs_scroll_pane_cp07

0xba5f,	// (0x00052c3c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xba5f,	// (0x00052c3c) bg_sp_fs_schedule_viewer_highlight

0x2f41,	// (0x0004a11e) list_single_sp_fs_schedule_track_pane_cp01

0x2f49,	// (0x0004a126) list_sp_fs_schedule_track_pane

0x2f51,	// (0x0004a12e) sp_fs_scroll_pane_cp06_ParamLimits

0x2f51,	// (0x0004a12e) sp_fs_scroll_pane_cp06

0xd31e,	// (0x000544fb) bgmain_sp_fs_calendar_pane_g1

0xba6c,	// (0x00052c49) list_single_cale_mrui_pane_ParamLimits

0xba6c,	// (0x00052c49) list_single_cale_mrui_pane

0x2f63,	// (0x0004a140) list_single_cale_mrui_row_pane_ParamLimits

0x2f63,	// (0x0004a140) list_single_cale_mrui_row_pane

0xba8e,	// (0x00052c6b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xba8e,	// (0x00052c6b) list_single_cale_mrui_row_pane_g1

0xbac6,	// (0x00052ca3) list_single_cale_mrui_row_pane_t1_ParamLimits

0xbac6,	// (0x00052ca3) list_single_cale_mrui_row_pane_t1

0xbad8,	// (0x00052cb5) list_single_cale_mrui_row_pane_t2_ParamLimits

0xbad8,	// (0x00052cb5) list_single_cale_mrui_row_pane_t2

0xbb3e,	// (0x00052d1b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xbb3e,	// (0x00052d1b) list_single_cale_mrui_row_pane_t3

0xbb6d,	// (0x00052d4a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xbb6d,	// (0x00052d4a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd48,	// (0x00056f25) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd48,	// (0x00056f25) list_single_cale_mrui_row_pane_t

0xbb9c,	// (0x00052d79) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xbb9c,	// (0x00052d79) list_single_cmail_header_editor_pane_bg_cp01

0xbbc0,	// (0x00052d9d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xbbc0,	// (0x00052d9d) list_single_cmail_header_editor_pane_bg_cp02

0xbbde,	// (0x00052dbb) main_radioblah_text_pane_t1_ParamLimits

0xbbde,	// (0x00052dbb) main_radioblah_text_pane_t1

0x2f86,	// (0x0004a163) cam6_indi_pane_cp01

0x2f8e,	// (0x0004a16b) cam6_mode_pane_cp01

0x2f96,	// (0x0004a173) cam6_pano_pane

0x2f9f,	// (0x0004a17c) cam6_zoom_pane_cp01

0x2fa7,	// (0x0004a184) cam6_pano_image_pane

0x2fb0,	// (0x0004a18d) cam6_pano_pane_g1

0x2628,	// (0x00049805) cam6_pano_pane_g2

0x2fb9,	// (0x0004a196) cam6_pano_pane_g3

0x2fc2,	// (0x0004a19f) cam6_pano_pane_g4

0x1508,	// (0x000486e5) cam6_pano_pane_g5

0x2fcb,	// (0x0004a1a8) cam6_pano_pane_g6

0x2fd3,	// (0x0004a1b0) cam6_pano_pane_g7

0x2fdb,	// (0x0004a1b8) cam6_pano_pane_g8

0x2fe4,	// (0x0004a1c1) cam6_pano_pane_g9

0x0008,

0xfd51,	// (0x00056f2e) cam6_pano_pane_g

0x4bf8,	// (0x0004bdd5) main_browser_tag_pane

0x2dad,	// (0x00049f8a) grid_navstr_albumart_pane

0x2fed,	// (0x0004a1ca) cell_navstr_albumart_pane_ParamLimits

0x2fed,	// (0x0004a1ca) cell_navstr_albumart_pane

0xde0a,	// (0x00054fe7) cell_navstr_albumart_pane_g1

0xee3e,	// (0x0005601b) cell_navstr_albumart_pane_g2

0xee4e,	// (0x0005602b) cell_navstr_albumart_pane_g3

0xee46,	// (0x00056023) cell_navstr_albumart_pane_g4

0x0003,

0xfd64,	// (0x00056f41) cell_navstr_albumart_pane_g

0xbbf7,	// (0x00052dd4) bt_list_pane_ParamLimits

0xbbf7,	// (0x00052dd4) bt_list_pane

0xbc0c,	// (0x00052de9) bt_list_pane_t1

0xbc1b,	// (0x00052df8) bt_list_pane_t2

0x0001,

0xfd6d,	// (0x00056f4a) bt_list_pane_t

0x4bf8,	// (0x0004bdd5) main_cale_prevew_pane

0xbc2a,	// (0x00052e07) popup_cale_preview_window_ParamLimits

0xbc2a,	// (0x00052e07) popup_cale_preview_window

0xdd6f,	// (0x00054f4c) bg_popup_preview_window_pane_cp05_ParamLimits

0xdd6f,	// (0x00054f4c) bg_popup_preview_window_pane_cp05

0x3004,	// (0x0004a1e1) list_cale_preview_pane_ParamLimits

0x3004,	// (0x0004a1e1) list_cale_preview_pane

0xbc3f,	// (0x00052e1c) list_double_cale_preview_pane_ParamLimits

0xbc3f,	// (0x00052e1c) list_double_cale_preview_pane

0xbc50,	// (0x00052e2d) list_single_cale_preview_pane_ParamLimits

0xbc50,	// (0x00052e2d) list_single_cale_preview_pane

0xbc64,	// (0x00052e41) list_single_cale_preview_pane_g1

0xbc6c,	// (0x00052e49) list_single_cale_preview_pane_t1_ParamLimits

0xbc6c,	// (0x00052e49) list_single_cale_preview_pane_t1

0x3010,	// (0x0004a1ed) list_double_cale_preview_pane_g1

0x3018,	// (0x0004a1f5) list_double_cale_preview_pane_t1_ParamLimits

0x3018,	// (0x0004a1f5) list_double_cale_preview_pane_t1

0xbc81,	// (0x00052e5e) list_double_cale_preview_pane_t2_ParamLimits

0xbc81,	// (0x00052e5e) list_double_cale_preview_pane_t2

0x0001,

0xfd72,	// (0x00056f4f) list_double_cale_preview_pane_t_ParamLimits

0xfd72,	// (0x00056f4f) list_double_cale_preview_pane_t

0x4bf8,	// (0x0004bdd5) main_ezdial_pane

0xdd6f,	// (0x00054f4c) main_sp_fs_email_pane_ParamLimits

0xb4e8,	// (0x000526c5) cmail_ddmenu_btn01_pane_ParamLimits

0xb4e8,	// (0x000526c5) cmail_ddmenu_btn01_pane

0xb505,	// (0x000526e2) cmail_ddmenu_btn02_pane_ParamLimits

0xb505,	// (0x000526e2) cmail_ddmenu_btn02_pane

0xb523,	// (0x00052700) cmail_ddmenu_btn03_pane_ParamLimits

0xb523,	// (0x00052700) cmail_ddmenu_btn03_pane

0xb5c7,	// (0x000527a4) main_sp_fs_ctrlbar_pane_ParamLimits

0xb5db,	// (0x000527b8) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb871,	// (0x00052a4e) list_cmail_body_pane_ParamLimits

0x2cdd,	// (0x00049eba) bg_button_pane_cp12

0x2cf2,	// (0x00049ecf) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2cf2,	// (0x00049ecf) list_single_cmail_header_detail_pane_g3

0x2cff,	// (0x00049edc) list_single_cmail_header_detail_pane_t2_ParamLimits

0x2cff,	// (0x00049edc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfcf5,	// (0x00056ed2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfcf5,	// (0x00056ed2) list_single_cmail_header_detail_pane_t

0x2e15,	// (0x00049ff2) phacti_term_pane_t2_ParamLimits

0x2e15,	// (0x00049ff2) phacti_term_pane_t2

0x0001,

0xfcff,	// (0x00056edc) phacti_term_pane_t_ParamLimits

0xfcff,	// (0x00056edc) phacti_term_pane_t

0x302d,	// (0x0004a20a) aid_size_list_single_double

0xbc99,	// (0x00052e76) popup_ezdial_listscroll_window

0xbcb2,	// (0x00052e8f) popup_number_entry_window_cp01

0xd29d,	// (0x0005447a) bg_popup_call_pane_cp09

0x3039,	// (0x0004a216) ezdial_list_pane

0x3041,	// (0x0004a21e) scroll_pane_cp23

0x0c33,	// (0x00047e10) bg_button_pane_cp028_ParamLimits

0x0c33,	// (0x00047e10) bg_button_pane_cp028

0xbcbe,	// (0x00052e9b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xbcbe,	// (0x00052e9b) cmail_ddmenu_btn01_pane_g1

0xbcce,	// (0x00052eab) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xbcce,	// (0x00052eab) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd77,	// (0x00056f54) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd77,	// (0x00056f54) cmail_ddmenu_btn01_pane_g

0x3049,	// (0x0004a226) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3049,	// (0x0004a226) cmail_ddmenu_btn01_pane_t1

0xeff2,	// (0x000561cf) bg_button_pane_cp029_ParamLimits

0xeff2,	// (0x000561cf) bg_button_pane_cp029

0xbcce,	// (0x00052eab) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xbcce,	// (0x00052eab) cmail_ddmenu_btn02_pane_g1

0xbce6,	// (0x00052ec3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xbce6,	// (0x00052ec3) cmail_ddmenu_btn02_pane_t1

0x5635,	// (0x0004c812) bg_button_pane_cp031_ParamLimits

0x5635,	// (0x0004c812) bg_button_pane_cp031

0xbcce,	// (0x00052eab) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xbcce,	// (0x00052eab) cmail_ddmenu_btn03_pane_g1

0xbce6,	// (0x00052ec3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xbce6,	// (0x00052ec3) cmail_ddmenu_btn03_pane_t1

0x93b3,	// (0x00050590) cell_dialer2_keypad_pane_t1_ParamLimits

0x93cd,	// (0x000505aa) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x93cd,	// (0x000505aa) cell_dialer2_keypad_pane_t1_copy1

0xaf1d,	// (0x000520fa) ncimui_group_button_pane

0xdd6f,	// (0x00054f4c) main_sp_fs_calendar_pane_ParamLimits

0xb871,	// (0x00052a4e) list_single_cmail_header_caption_pane_ParamLimits

0x2e60,	// (0x0004a03d) aid_recal_txt_sm_pane

0x4bf8,	// (0x0004bdd5) mian_recal_day_pane

0x2ea2,	// (0x0004a07f) popup_sp_fs_cale_preview_window_ParamLimits

0x305e,	// (0x0004a23b) list_recal_day_pane

0x30a0,	// (0x0004a27d) list_single_recal_day_pane_ParamLimits

0x30a0,	// (0x0004a27d) list_single_recal_day_pane

0x30b2,	// (0x0004a28f) list_single_recal_day_pane_g1_ParamLimits

0x30b2,	// (0x0004a28f) list_single_recal_day_pane_g1

0x30be,	// (0x0004a29b) list_single_recal_day_pane_g2_ParamLimits

0x30be,	// (0x0004a29b) list_single_recal_day_pane_g2

0x30ca,	// (0x0004a2a7) list_single_recal_day_pane_g3_ParamLimits

0x30ca,	// (0x0004a2a7) list_single_recal_day_pane_g3

0xbd0a,	// (0x00052ee7) list_single_recal_day_pane_g4_ParamLimits

0xbd0a,	// (0x00052ee7) list_single_recal_day_pane_g4

0x30d6,	// (0x0004a2b3) list_single_recal_day_pane_g5_ParamLimits

0x30d6,	// (0x0004a2b3) list_single_recal_day_pane_g5

0xbd1e,	// (0x00052efb) list_single_recal_day_pane_g6_ParamLimits

0xbd1e,	// (0x00052efb) list_single_recal_day_pane_g6

0x0004,

0xfd86,	// (0x00056f63) list_single_recal_day_pane_g_ParamLimits

0xfd86,	// (0x00056f63) list_single_recal_day_pane_g

0x30ea,	// (0x0004a2c7) list_single_recal_day_pane_t1

0xbd2d,	// (0x00052f0a) list_single_recal_day_pane_t2

0x0001,

0xfd91,	// (0x00056f6e) list_single_recal_day_pane_t

0xbd42,	// (0x00052f1f) ncimui_query_button_pane_ParamLimits

0xbd42,	// (0x00052f1f) ncimui_query_button_pane

0xbd52,	// (0x00052f2f) ncimui_query_button_pane_t1_ParamLimits

0xbd52,	// (0x00052f2f) ncimui_query_button_pane_t1

0x30fc,	// (0x0004a2d9) ncimui_query_button_pane_t2_ParamLimits

0x30fc,	// (0x0004a2d9) ncimui_query_button_pane_t2

0x0001,

0xfd96,	// (0x00056f73) ncimui_query_button_pane_t_ParamLimits

0xfd96,	// (0x00056f73) ncimui_query_button_pane_t

0xbd65,	// (0x00052f42) query_button_pane_ParamLimits

0xbd65,	// (0x00052f42) query_button_pane

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp0028

0x310f,	// (0x0004a2ec) query_button_pane_t1

0x7fdd,	// (0x0004f1ba) main_tport_pane_ParamLimits

0xb7bd,	// (0x0005299a) bg_popup_window_pane_cp01_ParamLimits

0xb7bd,	// (0x0005299a) bg_popup_window_pane_cp01

0xb7c9,	// (0x000529a6) heading_pane_cp08_ParamLimits

0xb7c9,	// (0x000529a6) heading_pane_cp08

0xb7d5,	// (0x000529b2) heading_pane_cp07_ParamLimits

0xb7d5,	// (0x000529b2) heading_pane_cp07

0x2c7e,	// (0x00049e5b) cell_tport_appsw_pane_g2

0x0002,

0xfce2,	// (0x00056ebf) cell_tport_appsw_pane_g

0x77f8,	// (0x0004e9d5) input_candi_list_open_g1

0xd6e9,	// (0x000548c6) list_cale_time_pane_g6_ParamLimits

0xd6e9,	// (0x000548c6) list_cale_time_pane_g6

0x84ef,	// (0x0004f6cc) aid_size_touch_calib_1_ParamLimits

0x84ef,	// (0x0004f6cc) aid_size_touch_calib_1

0x84fb,	// (0x0004f6d8) aid_size_touch_calib_2_ParamLimits

0x84fb,	// (0x0004f6d8) aid_size_touch_calib_2

0x8507,	// (0x0004f6e4) aid_size_touch_calib_3_ParamLimits

0x8507,	// (0x0004f6e4) aid_size_touch_calib_3

0x8515,	// (0x0004f6f2) aid_size_touch_calib_4_ParamLimits

0x8515,	// (0x0004f6f2) aid_size_touch_calib_4

0x8523,	// (0x0004f700) main_touch_calib_button_group_pane_ParamLimits

0x8523,	// (0x0004f700) main_touch_calib_button_group_pane

0x8531,	// (0x0004f70e) main_touch_calib_pane_g1_ParamLimits

0x853d,	// (0x0004f71a) main_touch_calib_pane_g2_ParamLimits

0x8549,	// (0x0004f726) main_touch_calib_pane_g3_ParamLimits

0x8555,	// (0x0004f732) main_touch_calib_pane_g4_ParamLimits

0xf6dd,	// (0x000568ba) main_touch_calib_pane_g_ParamLimits

0x8561,	// (0x0004f73e) main_touch_calib_pane_t1_ParamLimits

0x8576,	// (0x0004f753) main_touch_calib_pane_t2_ParamLimits

0x858b,	// (0x0004f768) main_touch_calib_pane_t3_ParamLimits

0x859d,	// (0x0004f77a) main_touch_calib_pane_t4_ParamLimits

0x85af,	// (0x0004f78c) main_touch_calib_pane_t5_ParamLimits

0xf6e6,	// (0x000568c3) main_touch_calib_pane_t_ParamLimits

0x1309,	// (0x000484e6) list_single_fp_cale_pane_g3_ParamLimits

0x1309,	// (0x000484e6) list_single_fp_cale_pane_g3

0x7fc1,	// (0x0004f19e) bg_button_pane_cp012_ParamLimits

0x7fc1,	// (0x0004f19e) bg_vkb2_func_pane_cp03_ParamLimits

0xa112,	// (0x000512ef) cell_vitu2_function_top_pane_g1_ParamLimits

0x7fc1,	// (0x0004f19e) bg_vkb2_func_pane_cp04_ParamLimits

0xaea9,	// (0x00052086) main_ncimui_button_group_pane_ParamLimits

0xaea9,	// (0x00052086) main_ncimui_button_group_pane

0xaf0b,	// (0x000520e8) main_ncimui_pane_t3_ParamLimits

0xaf0b,	// (0x000520e8) main_ncimui_pane_t3

0x2dc3,	// (0x00049fa0) phacti_button_group_pane

0x302d,	// (0x0004a20a) aid_size_list_single_double_ParamLimits

0xbc99,	// (0x00052e76) popup_ezdial_listscroll_window_ParamLimits

0xbcb2,	// (0x00052e8f) popup_number_entry_window_cp01_ParamLimits

0xbd72,	// (0x00052f4f) phacti_button_pane_ParamLimits

0xbd72,	// (0x00052f4f) phacti_button_pane

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp14

0x311d,	// (0x0004a2fa) phacti_button_pane_t1

0xbd81,	// (0x00052f5e) main_touch_calib_button_pane_ParamLimits

0xbd81,	// (0x00052f5e) main_touch_calib_button_pane

0x57ea,	// (0x0004c9c7) bg_button_pane_cp18_ParamLimits

0x57ea,	// (0x0004c9c7) bg_button_pane_cp18

0xbd92,	// (0x00052f6f) main_touch_calib_button_pane_t1_ParamLimits

0xbd92,	// (0x00052f6f) main_touch_calib_button_pane_t1

0xbda8,	// (0x00052f85) main_touch_calib_button_pane_t2_ParamLimits

0xbda8,	// (0x00052f85) main_touch_calib_button_pane_t2

0x0001,

0xfd9b,	// (0x00056f78) main_touch_calib_button_pane_t_ParamLimits

0xfd9b,	// (0x00056f78) main_touch_calib_button_pane_t

0x4bf8,	// (0x0004bdd5) cell_ncimui_button_pane

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp032

0x312b,	// (0x0004a308) cell_ncimui_button_pane_t1

0x941f,	// (0x000505fc) image3_infobar_pane_ParamLimits

0x941f,	// (0x000505fc) image3_infobar_pane

0xb254,	// (0x00052431) fs_bigclock_status_pane_ParamLimits

0xb254,	// (0x00052431) fs_bigclock_status_pane

0xb261,	// (0x0005243e) main_fs_bigclock_clock_pane_ParamLimits

0xb261,	// (0x0005243e) main_fs_bigclock_clock_pane

0xb279,	// (0x00052456) main_fs_bigclock_indi_pane_ParamLimits

0xb279,	// (0x00052456) main_fs_bigclock_indi_pane

0xb299,	// (0x00052476) main_fs_bigclock_swipe_pane_ParamLimits

0xb299,	// (0x00052476) main_fs_bigclock_swipe_pane

0x4bf8,	// (0x0004bdd5) main_fs_clock_dumped_data

0x2735,	// (0x00049912) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2735,	// (0x00049912) list_single_fs_bigclock_indicator_pane_g1

0x274f,	// (0x0004992c) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x274f,	// (0x0004992c) list_single_fs_bigclock_indicator_pane_g2

0x2769,	// (0x00049946) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2769,	// (0x00049946) list_single_fs_bigclock_indicator_pane_g3

0x2783,	// (0x00049960) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2783,	// (0x00049960) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc04,	// (0x00056de1) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc04,	// (0x00056de1) list_single_fs_bigclock_indicator_pane_g

0x27ac,	// (0x00049989) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x27ac,	// (0x00049989) list_single_fs_bigclock_indicator_pane_t1

0x27d4,	// (0x000499b1) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x27d4,	// (0x000499b1) list_single_fs_bigclock_indicator_pane_t2

0x27fc,	// (0x000499d9) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x27fc,	// (0x000499d9) list_single_fs_bigclock_indicator_pane_t3

0x2824,	// (0x00049a01) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x2824,	// (0x00049a01) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0f,	// (0x00056dec) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0f,	// (0x00056dec) list_single_fs_bigclock_indicator_pane_t

0x3139,	// (0x0004a316) image3_infobar_fav_pane_ParamLimits

0x3139,	// (0x0004a316) image3_infobar_fav_pane

0x3149,	// (0x0004a326) image3_infobar_loc_pane_ParamLimits

0x3149,	// (0x0004a326) image3_infobar_loc_pane

0x315d,	// (0x0004a33a) image3_infobar_time_pane_ParamLimits

0x315d,	// (0x0004a33a) image3_infobar_time_pane

0xd31e,	// (0x000544fb) image3_infobar_time_pane_g1

0x316d,	// (0x0004a34a) image3_infobar_time_pane_t1

0xd31e,	// (0x000544fb) image3_infobar_loc_pane_g1

0x317b,	// (0x0004a358) image3_infobar_loc_pane_g2

0x0001,

0xfda0,	// (0x00056f7d) image3_infobar_loc_pane_g

0x3183,	// (0x0004a360) image3_infobar_loc_pane_t1

0xd31e,	// (0x000544fb) image3_infobar_fav_pane_g1

0x3191,	// (0x0004a36e) image3_infobar_fav_pane_g2

0x0001,

0xfda5,	// (0x00056f82) image3_infobar_fav_pane_g

0x3199,	// (0x0004a376) fs_bigclock_status_battery_pane

0x31a2,	// (0x0004a37f) fs_bigclock_status_signal_pane

0x31ab,	// (0x0004a388) fs_bigclock_status_title_pane

0x31b4,	// (0x0004a391) fs_bigclock_status_signal_pane_g1

0x31bd,	// (0x0004a39a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdaa,	// (0x00056f87) fs_bigclock_status_signal_pane_g

0x31c5,	// (0x0004a3a2) fs_bigclock_status_battery_pane_g1

0x31ce,	// (0x0004a3ab) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdaf,	// (0x00056f8c) fs_bigclock_status_battery_pane_g

0x31d6,	// (0x0004a3b3) fs_bigclock_status_title_pane_t1

0x5627,	// (0x0004c804) main_fs_bigclock_clock_pane_g1

0xbdc6,	// (0x00052fa3) main_fs_bigclock_clock_pane_g2

0xbdd3,	// (0x00052fb0) main_fs_bigclock_clock_pane_g3

0xbdd3,	// (0x00052fb0) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdb4,	// (0x00056f91) main_fs_bigclock_clock_pane_g

0xbddf,	// (0x00052fbc) main_fs_bigclock_clock_pane_t1

0xbdf1,	// (0x00052fce) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdbd,	// (0x00056f9a) main_fs_bigclock_clock_pane_t

0x31e4,	// (0x0004a3c1) list_single_fs_bigclock_indicator_pane_ParamLimits

0x31e4,	// (0x0004a3c1) list_single_fs_bigclock_indicator_pane

0x31f5,	// (0x0004a3d2) list_single_fs_bigclock_pane_ParamLimits

0x31f5,	// (0x0004a3d2) list_single_fs_bigclock_pane

0x321b,	// (0x0004a3f8) main_fs_bigclock_indicator_pane_t1

0x322a,	// (0x0004a407) list_single_fs_bigclock_pane_g1

0x3232,	// (0x0004a40f) list_single_fs_bigclock_pane_t1

0xd31e,	// (0x000544fb) main_fs_bigclock_swipe_pane_g1

0x3272,	// (0x0004a44f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdce,	// (0x00056fab) main_fs_bigclock_swipe_pane_g

0x327a,	// (0x0004a457) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x327a,	// (0x0004a457) main_fs_bigclock_swipe_pane_t1

0x7318,	// (0x0004e4f5) call_type_pane_ParamLimits

0x4bf8,	// (0x0004bdd5) main_btmg_pane

0xbaba,	// (0x00052c97) list_single_cale_mrui_row_pane_g2_ParamLimits

0xbaba,	// (0x00052c97) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd41,	// (0x00056f1e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd41,	// (0x00056f1e) list_single_cale_mrui_row_pane_g

0x3087,	// (0x0004a264) list_recal_vselct_arw_lo_pane

0x308f,	// (0x0004a26c) list_recal_vselct_arw_up_pane

0x3097,	// (0x0004a274) list_recal_vselct_pane

0x3297,	// (0x0004a474) btmg_button_pane

0xbe46,	// (0x00053023) main_btmg_pane_g1

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp044

0x329f,	// (0x0004a47c) btmg_button_pane_t1

0xefde,	// (0x000561bb) aid_listscroll_gen

0xdd6f,	// (0x00054f4c) main_cntbar_detail_pane

0x2ca4,	// (0x00049e81) list_cmail_folder_pane

0x2cc3,	// (0x00049ea0) sp_fs_scroll_pane_cp03_ParamLimits

0xb871,	// (0x00052a4e) list_single_fs_dyc_pane_cp01_ParamLimits

0xb871,	// (0x00052a4e) list_single_fs_dyc_pane_cp01

0x32ad,	// (0x0004a48a) aid_size_cmail_indent

0x32b6,	// (0x0004a493) list_single_dyc_row_pane_cp01

0xbe68,	// (0x00053045) cntbar_detail_list_pane_ParamLimits

0xbe68,	// (0x00053045) cntbar_detail_list_pane

0xbe9e,	// (0x0005307b) main_cntbar_detail_cont_pane_ParamLimits

0xbe9e,	// (0x0005307b) main_cntbar_detail_cont_pane

0xbeaa,	// (0x00053087) scroll_pane_cp032_ParamLimits

0xbeaa,	// (0x00053087) scroll_pane_cp032

0x3678,	// (0x0004a855) cntbar_detail_list_event_pane_ParamLimits

0x3678,	// (0x0004a855) cntbar_detail_list_event_pane

0xbe74,	// (0x00053051) cntbar_detail_list_shct_pane

0x32bf,	// (0x0004a49c) aid_list_gen

0x5a62,	// (0x0004cc3f) aid_scroll

0x1e80,	// (0x0004905d) aid_size_touch_scroll_bar

0x1eab,	// (0x00049088) aid_list_double

0xa78f,	// (0x0005196c) aid_list_single

0xa78f,	// (0x0005196c) aid_list_single_lg

0xbeb6,	// (0x00053093) aid_list_z_g_a_sm

0xbebe,	// (0x0005309b) aid_list_z_g_d

0xbec6,	// (0x000530a3) aid_txt_z_prm

0x32c8,	// (0x0004a4a5) aid_txt_z_prm_cp01

0x32d6,	// (0x0004a4b3) aid_txt_z_sec

0xbed4,	// (0x000530b1) main_cntbar_detail_cont_pane_g1_ParamLimits

0xbed4,	// (0x000530b1) main_cntbar_detail_cont_pane_g1

0xbee1,	// (0x000530be) main_cntbar_detail_cont_pane_g2_ParamLimits

0xbee1,	// (0x000530be) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdd3,	// (0x00056fb0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdd3,	// (0x00056fb0) main_cntbar_detail_cont_pane_g

0x32e4,	// (0x0004a4c1) main_cntbar_detail_cont_pane_t1

0x32f2,	// (0x0004a4cf) main_cntbar_detail_cont_pane_t2

0x3300,	// (0x0004a4dd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdd8,	// (0x00056fb5) main_cntbar_detail_cont_pane_t

0xbeed,	// (0x000530ca) cell_cntbar_detail_list_shct_pane_ParamLimits

0xbeed,	// (0x000530ca) cell_cntbar_detail_list_shct_pane

0x330e,	// (0x0004a4eb) cntbar_detail_list_shct_pane_g1

0x3317,	// (0x0004a4f4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfddf,	// (0x00056fbc) cntbar_detail_list_shct_pane_g

0xbeff,	// (0x000530dc) cntbar_detail_list_event_pane_g1_ParamLimits

0xbeff,	// (0x000530dc) cntbar_detail_list_event_pane_g1

0xbf0b,	// (0x000530e8) cntbar_detail_list_event_pane_g2_ParamLimits

0xbf0b,	// (0x000530e8) cntbar_detail_list_event_pane_g2

0x0005,

0xfde4,	// (0x00056fc1) cntbar_detail_list_event_pane_g_ParamLimits

0xfde4,	// (0x00056fc1) cntbar_detail_list_event_pane_g

0xbf77,	// (0x00053154) cntbar_detail_list_event_pane_t1_ParamLimits

0xbf77,	// (0x00053154) cntbar_detail_list_event_pane_t1

0xbf8c,	// (0x00053169) cntbar_detail_list_event_pane_t2_ParamLimits

0xbf8c,	// (0x00053169) cntbar_detail_list_event_pane_t2

0x0002,

0xfdf1,	// (0x00056fce) cntbar_detail_list_event_pane_t_ParamLimits

0xfdf1,	// (0x00056fce) cntbar_detail_list_event_pane_t

0xd31e,	// (0x000544fb) cell_cntbar_detail_list_shct_pane_g1

0xdc64,	// (0x00054e41) navi_pane_mv_g3

0xdd6f,	// (0x00054f4c) main_cntbar_detail_pane_ParamLimits

0x4bf8,	// (0x0004bdd5) main_notif_wgt_pane

0x90f5,	// (0x000502d2) aid_tch_main_mp4_pane_g4

0x9334,	// (0x00050511) popup_slider_window_cp02

0x307d,	// (0x0004a25a) list_recal_day_event_pane

0xbe4e,	// (0x0005302b) cntbar_detail_btn_pane_ParamLimits

0xbe4e,	// (0x0005302b) cntbar_detail_btn_pane

0xbe5a,	// (0x00053037) cntbar_detail_btn_pane_cp01_ParamLimits

0xbe5a,	// (0x00053037) cntbar_detail_btn_pane_cp01

0xbe74,	// (0x00053051) cntbar_detail_list_shct_pane_ParamLimits

0xbe80,	// (0x0005305d) cntbar_detail_pane_g1_ParamLimits

0xbe80,	// (0x0005305d) cntbar_detail_pane_g1

0xbe8c,	// (0x00053069) cntbar_detail_pane_t1_ParamLimits

0xbe8c,	// (0x00053069) cntbar_detail_pane_t1

0xbf17,	// (0x000530f4) cntbar_detail_list_event_pane_g3_ParamLimits

0xbf17,	// (0x000530f4) cntbar_detail_list_event_pane_g3

0xbf2f,	// (0x0005310c) cntbar_detail_list_event_pane_g4_ParamLimits

0xbf2f,	// (0x0005310c) cntbar_detail_list_event_pane_g4

0xbf47,	// (0x00053124) cntbar_detail_list_event_pane_g5_ParamLimits

0xbf47,	// (0x00053124) cntbar_detail_list_event_pane_g5

0xbf5f,	// (0x0005313c) cntbar_detail_list_event_pane_g6_ParamLimits

0xbf5f,	// (0x0005313c) cntbar_detail_list_event_pane_g6

0xbfa1,	// (0x0005317e) cntbar_detail_list_event_pane_t3_ParamLimits

0xbfa1,	// (0x0005317e) cntbar_detail_list_event_pane_t3

0xbfb3,	// (0x00053190) popup_notif_wgt_window_ParamLimits

0xbfb3,	// (0x00053190) popup_notif_wgt_window

0xbfc1,	// (0x0005319e) popup_submenu_window_cp01_ParamLimits

0xbfc1,	// (0x0005319e) popup_submenu_window_cp01

0xd29d,	// (0x0005447a) bg_popup_window_pane_cp10

0x3320,	// (0x0004a4fd) listscroll_notif_wgt_pane

0x3331,	// (0x0004a50e) list_notif_wgt_window

0x333a,	// (0x0004a517) scroll_pane_cp033

0xbfcd,	// (0x000531aa) list_notif_wgt_row_pane_ParamLimits

0xbfcd,	// (0x000531aa) list_notif_wgt_row_pane

0x3343,	// (0x0004a520) aid_size_list_notif_wgt_del

0x3350,	// (0x0004a52d) list_notif_wgt_row_pane_g1

0x335c,	// (0x0004a539) list_notif_wgt_row_pane_g2

0x3370,	// (0x0004a54d) list_notif_wgt_row_pane_g3

0x0002,

0xfdf8,	// (0x00056fd5) list_notif_wgt_row_pane_g

0x337d,	// (0x0004a55a) list_notif_wgt_row_pane_t1

0x3393,	// (0x0004a570) list_notif_wgt_row_pane_t2

0x33a5,	// (0x0004a582) list_notif_wgt_row_pane_t3

0x0002,

0xfdff,	// (0x00056fdc) list_notif_wgt_row_pane_t

0x1b7a,	// (0x00048d57) list_recal_day_event_pane_g1

0x33b7,	// (0x0004a594) list_recal_day_event_pane_t1

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp045

0xbfdf,	// (0x000531bc) cntbar_detail_btn_pane_t1

0xeff2,	// (0x000561cf) main_callh_pane_ParamLimits

0xeff2,	// (0x000561cf) main_callh_pane

0x4bf8,	// (0x0004bdd5) main_coverflow0_pane

0x4bf8,	// (0x0004bdd5) main_wgtman_pane

0xb2ab,	// (0x00052488) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb2ab,	// (0x00052488) main_fs_bigclock_unlock_btn_pane

0x2c76,	// (0x00049e53) bg_button_pane_cp16

0x2c86,	// (0x00049e63) cell_tport_appsw_pane_g3

0xbfed,	// (0x000531ca) cf0_flow_pane_ParamLimits

0xbfed,	// (0x000531ca) cf0_flow_pane

0x33c6,	// (0x0004a5a3) listscroll_cf0_pane

0x33cf,	// (0x0004a5ac) main_cf0_pane_g1

0xbffc,	// (0x000531d9) main_cf0_pane_t1_ParamLimits

0xbffc,	// (0x000531d9) main_cf0_pane_t1

0xc00e,	// (0x000531eb) main_cf0_pane_t2_ParamLimits

0xc00e,	// (0x000531eb) main_cf0_pane_t2

0x0001,

0xfe0b,	// (0x00056fe8) main_cf0_pane_t_ParamLimits

0xfe0b,	// (0x00056fe8) main_cf0_pane_t

0x33e1,	// (0x0004a5be) scroll_pane_cp11

0xc020,	// (0x000531fd) cf0_flow_pane_g1

0xc028,	// (0x00053205) cf0_flow_pane_g2

0x0001,

0xfe10,	// (0x00056fed) cf0_flow_pane_g

0xc030,	// (0x0005320d) cf0_flow_pane_t1

0x4bf8,	// (0x0004bdd5) main_call6_pane

0x4bf8,	// (0x0004bdd5) main_calllock_pane

0xc03e,	// (0x0005321b) call6_btn_grp_pane_ParamLimits

0xc03e,	// (0x0005321b) call6_btn_grp_pane

0xc04b,	// (0x00053228) call6_pane_g1_ParamLimits

0xc04b,	// (0x00053228) call6_pane_g1

0xc058,	// (0x00053235) popup_call6_1st_window_ParamLimits

0xc058,	// (0x00053235) popup_call6_1st_window

0xc064,	// (0x00053241) popup_call6_2nd_window_ParamLimits

0xc064,	// (0x00053241) popup_call6_2nd_window

0xc070,	// (0x0005324d) cell_call6_btn_pane_ParamLimits

0xc070,	// (0x0005324d) cell_call6_btn_pane

0xd29d,	// (0x0005447a) bg_popup_call2_in_pane_cp03

0x33ea,	// (0x0004a5c7) popup_call6_1st_window_g1

0x33f2,	// (0x0004a5cf) popup_call6_1st_window_g2

0x33fa,	// (0x0004a5d7) popup_call6_1st_window_g3

0x0002,

0xfe15,	// (0x00056ff2) popup_call6_1st_window_g

0x3402,	// (0x0004a5df) popup_call6_1st_window_t1

0x3411,	// (0x0004a5ee) popup_call6_1st_window_t2

0x341f,	// (0x0004a5fc) popup_call6_1st_window_t3

0x0002,

0xfe1c,	// (0x00056ff9) popup_call6_1st_window_t

0xd29d,	// (0x0005447a) bg_popup_call2_in_pane_cp04

0x342d,	// (0x0004a60a) popup_call6_2nd_window_g1

0x3435,	// (0x0004a612) popup_call6_2nd_window_g2

0x343d,	// (0x0004a61a) popup_call6_2nd_window_g3

0x0002,

0xfe23,	// (0x00057000) popup_call6_2nd_window_g

0x3445,	// (0x0004a622) popup_call6_2nd_window_t1

0x4e5a,	// (0x0004c037) bg_button_pane_cp15

0xc07f,	// (0x0005325c) cell_call6_btn_pane_g1

0xc088,	// (0x00053265) cell_call6_btn_pane_t1

0xc097,	// (0x00053274) listscroll_wgtman_pane_ParamLimits

0xc097,	// (0x00053274) listscroll_wgtman_pane

0xc0b3,	// (0x00053290) wgtman_btn_pane_ParamLimits

0xc0b3,	// (0x00053290) wgtman_btn_pane

0xd9c4,	// (0x00054ba1) aid_scroll_copy1

0x3454,	// (0x0004a631) list_wgtman_pane

0xc0e6,	// (0x000532c3) wgtman_btn_pane_g1_ParamLimits

0xc0e6,	// (0x000532c3) wgtman_btn_pane_g1

0xc10e,	// (0x000532eb) wgtman_btn_pane_t1_ParamLimits

0xc10e,	// (0x000532eb) wgtman_btn_pane_t1

0x345e,	// (0x0004a63b) wgtman_btn_pane_t2_ParamLimits

0x345e,	// (0x0004a63b) wgtman_btn_pane_t2

0x0001,

0xfe2a,	// (0x00057007) wgtman_btn_pane_t_ParamLimits

0xfe2a,	// (0x00057007) wgtman_btn_pane_t

0x36d5,	// (0x0004a8b2) listrow_wgtman_pane_ParamLimits

0x36d5,	// (0x0004a8b2) listrow_wgtman_pane

0xc145,	// (0x00053322) listrow_wgtman_pane_g1

0xc152,	// (0x0005332f) listrow_wgtman_pane_g2

0x0001,

0xfe2f,	// (0x0005700c) listrow_wgtman_pane_g

0xc16a,	// (0x00053347) listrow_wgtman_pane_t1

0xc182,	// (0x0005335f) listrow_wgtman_pane_t2

0x0001,

0xfe34,	// (0x00057011) listrow_wgtman_pane_t

0xc1a8,	// (0x00053385) wait_bar_pane_cp09

0x3475,	// (0x0004a652) main_calllock_btn_pane

0x347d,	// (0x0004a65a) main_calllock_pane_g1

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp17

0x3486,	// (0x0004a663) main_calllock_btn_pane_g1

0x348f,	// (0x0004a66c) main_calllock_btn_pane_t1

0x4bf8,	// (0x0004bdd5) main_dialer3_pane

0x4bf8,	// (0x0004bdd5) main_fmrd2_pane

0xd31e,	// (0x000544fb) main_fs_bigclock_unlock_btn_pane_g1

0x34a6,	// (0x0004a683) main_fs_bigclock_unlock_btn_pane_t1

0xc1ba,	// (0x00053397) area_fmrd2_info_pane_ParamLimits

0xc1ba,	// (0x00053397) area_fmrd2_info_pane

0xc1c6,	// (0x000533a3) area_fmrd2_visual_pane_ParamLimits

0xc1c6,	// (0x000533a3) area_fmrd2_visual_pane

0xc1d4,	// (0x000533b1) fmrd2_indi_pane_ParamLimits

0xc1d4,	// (0x000533b1) fmrd2_indi_pane

0xc1e1,	// (0x000533be) area_fmrd2_visual_pane_g1

0xc1e9,	// (0x000533c6) area_fmrd2_visual_pane_t1

0xc1f7,	// (0x000533d4) area_fmrd2_visual_pane_t2

0xc205,	// (0x000533e2) area_fmrd2_visual_pane_t3

0x0002,

0xfe3e,	// (0x0005701b) area_fmrd2_visual_pane_t

0xc213,	// (0x000533f0) area_fmrd2_info_pane_g1

0xc21b,	// (0x000533f8) area_fmrd2_info_pane_t1

0xc229,	// (0x00053406) area_fmrd2_info_pane_t2

0xc237,	// (0x00053414) area_fmrd2_info_pane_t3

0xc245,	// (0x00053422) area_fmrd2_info_pane_t4

0x0003,

0xfe45,	// (0x00057022) area_fmrd2_info_pane_t

0xc253,	// (0x00053430) fmrd2_indi_pane_t1

0xc261,	// (0x0005343e) fmrd2_indi_pane_t2

0xc26f,	// (0x0005344c) fmrd2_indi_pane_t3

0x0002,

0xfe4e,	// (0x0005702b) fmrd2_indi_pane_t

0x2792,	// (0x0004996f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2792,	// (0x0004996f) list_single_fs_bigclock_indicator_pane_g5

0x2840,	// (0x00049a1d) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2840,	// (0x00049a1d) list_single_fs_bigclock_indicator_pane_t5

0xb99f,	// (0x00052b7c) aid_cell_bcale_month_pane_ParamLimits

0xb99f,	// (0x00052b7c) aid_cell_bcale_month_pane

0xb9bd,	// (0x00052b9a) bcale_month_pane_ParamLimits

0xb9bd,	// (0x00052b9a) bcale_month_pane

0xb9d3,	// (0x00052bb0) bcale_preview_pane_ParamLimits

0xb9d3,	// (0x00052bb0) bcale_preview_pane

0x3232,	// (0x0004a40f) list_single_fs_bigclock_pane_t1_ParamLimits

0x324e,	// (0x0004a42b) list_single_fs_bigclock_pane_t2_ParamLimits

0x324e,	// (0x0004a42b) list_single_fs_bigclock_pane_t2

0x0001,

0xfdc9,	// (0x00056fa6) list_single_fs_bigclock_pane_t_ParamLimits

0xfdc9,	// (0x00056fa6) list_single_fs_bigclock_pane_t

0x349e,	// (0x0004a67b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe39,	// (0x00057016) main_fs_bigclock_unlock_btn_pane_g

0xc27d,	// (0x0005345a) aid_dia3_key_size_ParamLimits

0xc27d,	// (0x0005345a) aid_dia3_key_size

0xc289,	// (0x00053466) aid_dia3_listrow_size_ParamLimits

0xc289,	// (0x00053466) aid_dia3_listrow_size

0xc297,	// (0x00053474) dia3_keypad_fun_pane_ParamLimits

0xc297,	// (0x00053474) dia3_keypad_fun_pane

0xc2a3,	// (0x00053480) dia3_keypad_num_pane_ParamLimits

0xc2a3,	// (0x00053480) dia3_keypad_num_pane

0xc2af,	// (0x0005348c) dia3_listscroll_pane_ParamLimits

0xc2af,	// (0x0005348c) dia3_listscroll_pane

0xc2bb,	// (0x00053498) dia3_numentry_pane_ParamLimits

0xc2bb,	// (0x00053498) dia3_numentry_pane

0x34b4,	// (0x0004a691) dia3_list_pane

0x34bd,	// (0x0004a69a) scroll_pane_cp12

0x4bf8,	// (0x0004bdd5) bg_dia3_numentry_pane

0xc2c7,	// (0x000534a4) dia3_numentry_pane_t1

0xc2d6,	// (0x000534b3) cell_dia3_key_num_pane

0xc2de,	// (0x000534bb) cell_dia3_key0_fun_pane_ParamLimits

0xc2de,	// (0x000534bb) cell_dia3_key0_fun_pane

0xc2eb,	// (0x000534c8) cell_dia3_key1_fun_pane_ParamLimits

0xc2eb,	// (0x000534c8) cell_dia3_key1_fun_pane

0xc2f8,	// (0x000534d5) dia3_listrow_pane

0x24a1,	// (0x0004967e) bg_dia3_numentry_pane_g1

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp21

0x34c6,	// (0x0004a6a3) cell_dia3_key_num_pane_t1

0x34d4,	// (0x0004a6b1) cell_dia3_key_num_pane_t2

0x34e3,	// (0x0004a6c0) cell_dia3_key_num_pane_t3

0x34f2,	// (0x0004a6cf) cell_dia3_key_num_pane_t4

0x0003,

0xfe55,	// (0x00057032) cell_dia3_key_num_pane_t

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp19

0x3501,	// (0x0004a6de) cell_dia3_key0_fun_pane_g1

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp20

0xc305,	// (0x000534e2) cell_dia3_key1_fun_pane_g1

0xc30d,	// (0x000534ea) area_left_week_number_pane

0xc31e,	// (0x000534fb) area_top_day_name_pane

0xc32a,	// (0x00053507) frame_month_view_pane

0x3509,	// (0x0004a6e6) grid_month_view_pane

0xc33b,	// (0x00053518) cell_top_day_name_pane_ParamLimits

0xc33b,	// (0x00053518) cell_top_day_name_pane

0xc351,	// (0x0005352e) cell_area_left_week_number_pane_ParamLimits

0xc351,	// (0x0005352e) cell_area_left_week_number_pane

0xc370,	// (0x0005354d) cell_month_view_pane_ParamLimits

0xc370,	// (0x0005354d) cell_month_view_pane

0x3517,	// (0x0004a6f4) frm_month_g1

0xc396,	// (0x00053573) frm_month_g2

0xc3a5,	// (0x00053582) frm_month_g3

0xc3b4,	// (0x00053591) frm_month_g4

0xc3c3,	// (0x000535a0) frm_month_g5

0xc3d2,	// (0x000535af) frm_month_g6

0xc3e1,	// (0x000535be) frm_month_g7

0x3524,	// (0x0004a701) frm_month_g8

0xc3f0,	// (0x000535cd) frm_month_g9

0xc3fd,	// (0x000535da) frm_month_g10

0xc40a,	// (0x000535e7) frm_month_g11

0xc417,	// (0x000535f4) frm_month_g12

0xc424,	// (0x00053601) frm_month_g13

0xc431,	// (0x0005360e) frm_month_g14

0xc43e,	// (0x0005361b) frm_month_g15

0xc44b,	// (0x00053628) frm_month_g16

0x000f,

0xfe5e,	// (0x0005703b) frm_month_g

0x3531,	// (0x0004a70e) cell_top_day_name_pane_t1

0xc458,	// (0x00053635) cell_area_left_week_number_pane_g1

0xc467,	// (0x00053644) cell_area_left_week_number_pane_t1

0x5619,	// (0x0004c7f6) cell_month_view_pane_g1

0xc47d,	// (0x0005365a) cell_month_view_pane_t1

0x4bf8,	// (0x0004bdd5) main_fps_pane

0x2a9e,	// (0x00049c7b) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2a9e,	// (0x00049c7b) cmail_ddmenu_btn02_pane_cp1

0x2aba,	// (0x00049c97) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2aba,	// (0x00049c97) cmail_ddmenu_btn02_pane_cp2

0xbcda,	// (0x00052eb7) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xbcda,	// (0x00052eb7) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd7c,	// (0x00056f59) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd7c,	// (0x00056f59) cmail_ddmenu_btn02_pane_g

0xbcf8,	// (0x00052ed5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xbcf8,	// (0x00052ed5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd81,	// (0x00056f5e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd81,	// (0x00056f5e) cmail_ddmenu_btn02_pane_t

0xc493,	// (0x00053670) fps_text_pane_ParamLimits

0xc493,	// (0x00053670) fps_text_pane

0xc4a0,	// (0x0005367d) main_fps_pane_g1_ParamLimits

0xc4a0,	// (0x0005367d) main_fps_pane_g1

0xc4ac,	// (0x00053689) wait_bar_pane_cp010_ParamLimits

0xc4ac,	// (0x00053689) wait_bar_pane_cp010

0xc4b8,	// (0x00053695) fps_text_pane_t1_ParamLimits

0xc4b8,	// (0x00053695) fps_text_pane_t1

0x9718,	// (0x000508f5) cam4_image_uncrop_pane_g1

0x9721,	// (0x000508fe) cam4_image_uncrop_pane_g2

0x972a,	// (0x00050907) cam4_image_uncrop_pane_g3

0x9733,	// (0x00050910) cam4_image_uncrop_pane_g4

0x0003,

0xf87e,	// (0x00056a5b) cam4_image_uncrop_pane_g

0xc2f8,	// (0x000534d5) dia3_listrow_pane_ParamLimits

0x4bf8,	// (0x0004bdd5) main_phob2_pane

0xb816,	// (0x000529f3) cell_tport_appsw_pane_cp02_ParamLimits

0xb816,	// (0x000529f3) cell_tport_appsw_pane_cp02

0xb823,	// (0x00052a00) cell_tport_appsw_pane_cp03_ParamLimits

0xb823,	// (0x00052a00) cell_tport_appsw_pane_cp03

0x4bf8,	// (0x0004bdd5) phob2_contact_card_pane

0x4bf8,	// (0x0004bdd5) phob2_listscroll_pane

0x3544,	// (0x0004a721) phob2_list_pane

0x354c,	// (0x0004a729) scroll_pane_cp034

0xc4d1,	// (0x000536ae) phob2_cc_data_pane_ParamLimits

0xc4d1,	// (0x000536ae) phob2_cc_data_pane

0xc4e9,	// (0x000536c6) phob2_cc_listscroll_pane_ParamLimits

0xc4e9,	// (0x000536c6) phob2_cc_listscroll_pane

0xc501,	// (0x000536de) list_double_large_graphic_phob2_pane_ParamLimits

0xc501,	// (0x000536de) list_double_large_graphic_phob2_pane

0xc513,	// (0x000536f0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc513,	// (0x000536f0) list_double_large_graphic_phob2_pane_g1

0xc520,	// (0x000536fd) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xc520,	// (0x000536fd) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe7f,	// (0x0005705c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe7f,	// (0x0005705c) list_double_large_graphic_phob2_pane_g

0xc544,	// (0x00053721) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xc544,	// (0x00053721) list_double_large_graphic_phob2_pane_t1

0xc559,	// (0x00053736) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xc559,	// (0x00053736) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe88,	// (0x00057065) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe88,	// (0x00057065) list_double_large_graphic_phob2_pane_t

0x4bf8,	// (0x0004bdd5) list_highlight_pane_cp024

0x3554,	// (0x0004a731) phob2_cc_button_pane

0xc56e,	// (0x0005374b) phob2_cc_data_pane_g1_ParamLimits

0xc56e,	// (0x0005374b) phob2_cc_data_pane_g1

0xc57d,	// (0x0005375a) phob2_cc_data_pane_g2_ParamLimits

0xc57d,	// (0x0005375a) phob2_cc_data_pane_g2

0x0001,

0xfe8d,	// (0x0005706a) phob2_cc_data_pane_g_ParamLimits

0xfe8d,	// (0x0005706a) phob2_cc_data_pane_g

0xc58c,	// (0x00053769) phob2_cc_data_pane_t1_ParamLimits

0xc58c,	// (0x00053769) phob2_cc_data_pane_t1

0xc5a1,	// (0x0005377e) phob2_cc_data_pane_t2_ParamLimits

0xc5a1,	// (0x0005377e) phob2_cc_data_pane_t2

0xc5b6,	// (0x00053793) phob2_cc_data_pane_t3_ParamLimits

0xc5b6,	// (0x00053793) phob2_cc_data_pane_t3

0x0002,

0xfe92,	// (0x0005706f) phob2_cc_data_pane_t_ParamLimits

0xfe92,	// (0x0005706f) phob2_cc_data_pane_t

0x355c,	// (0x0004a739) phob2_cc_list_pane_ParamLimits

0x355c,	// (0x0004a739) phob2_cc_list_pane

0x23be,	// (0x0004959b) scroll_pane_cp035_ParamLimits

0x23be,	// (0x0004959b) scroll_pane_cp035

0xdd6f,	// (0x00054f4c) bg_button_pane_cp033

0x3568,	// (0x0004a745) phob2_cc_button_pane_g1

0x3574,	// (0x0004a751) phob2_cc_button_pane_t1

0x3589,	// (0x0004a766) phob2_cc_button_pane_t2

0x0001,

0xfe99,	// (0x00057076) phob2_cc_button_pane_t

0xc5cb,	// (0x000537a8) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc5cb,	// (0x000537a8) list_double_large_graphic_phob2_cc_pane

0xc611,	// (0x000537ee) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc611,	// (0x000537ee) list_double_large_graphic_phob2_cc_pane_g1

0xc622,	// (0x000537ff) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xc622,	// (0x000537ff) list_double_large_graphic_phob2_cc_pane_g2

0xc631,	// (0x0005380e) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xc631,	// (0x0005380e) list_double_large_graphic_phob2_cc_pane_g3

0xc640,	// (0x0005381d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xc640,	// (0x0005381d) list_double_large_graphic_phob2_cc_pane_g4

0xc651,	// (0x0005382e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xc651,	// (0x0005382e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe9e,	// (0x0005707b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe9e,	// (0x0005707b) list_double_large_graphic_phob2_cc_pane_g

0xc660,	// (0x0005383d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xc660,	// (0x0005383d) list_double_large_graphic_phob2_cc_pane_t1

0xc689,	// (0x00053866) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xc689,	// (0x00053866) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfea9,	// (0x00057086) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfea9,	// (0x00057086) list_double_large_graphic_phob2_cc_pane_t

0x359b,	// (0x0004a778) list_highlight_pane_cp025_ParamLimits

0x359b,	// (0x0004a778) list_highlight_pane_cp025

0xdd6f,	// (0x00054f4c) bg_button_pane_cp033_ParamLimits

0x3568,	// (0x0004a745) phob2_cc_button_pane_g1_ParamLimits

0x3574,	// (0x0004a751) phob2_cc_button_pane_t1_ParamLimits

0x3589,	// (0x0004a766) phob2_cc_button_pane_t2_ParamLimits

0xfe99,	// (0x00057076) phob2_cc_button_pane_t_ParamLimits

0x4e52,	// (0x0004c02f) popup_wgtman_window

0x24c1,	// (0x0004969e) scroll_pane_cp038

0xc0ce,	// (0x000532ab) wgtman_btn_pane_cp_01_ParamLimits

0xc0ce,	// (0x000532ab) wgtman_btn_pane_cp_01

0x35a9,	// (0x0004a786) wgtman_content_pane

0x35b2,	// (0x0004a78f) wgtman_heading_pane

0x4bf8,	// (0x0004bdd5) bg_heading_pane_cp02

0x35bb,	// (0x0004a798) wgtman_heading_pane_g1

0x35c3,	// (0x0004a7a0) wgtman_heading_pane_t1

0x35d1,	// (0x0004a7ae) scroll_pane_cp036

0x35d9,	// (0x0004a7b6) wgtman_list_pane

0x35e1,	// (0x0004a7be) wgtman_list_pane_t1_ParamLimits

0x35e1,	// (0x0004a7be) wgtman_list_pane_t1

0x967d,	// (0x0005085a) cam4_grid_pane

0xa2b0,	// (0x0005148d) bg_button_pane_cp015_ParamLimits

0xa2c1,	// (0x0005149e) bg_button_pane_cp016_ParamLimits

0xa2cd,	// (0x000514aa) bg_button_pane_cp017_ParamLimits

0xa31f,	// (0x000514fc) popup_vitu2_query_window_g3_ParamLimits

0xa31f,	// (0x000514fc) popup_vitu2_query_window_g3

0xa3bc,	// (0x00051599) popup_vitu2_query_window_t6_ParamLimits

0xa3bc,	// (0x00051599) popup_vitu2_query_window_t6

0xa3e7,	// (0x000515c4) popup_vitu2_query_window_t7_ParamLimits

0xa3e7,	// (0x000515c4) popup_vitu2_query_window_t7

0x189a,	// (0x00048a77) cam4_grid_pane_g1

0x18a3,	// (0x00048a80) cam4_grid_pane_g2

0x35f8,	// (0x0004a7d5) cam4_grid_pane_g3

0x3601,	// (0x0004a7de) cam4_grid_pane_g4

0x0003,

0xfeae,	// (0x0005708b) cam4_grid_pane_g

0x6385,	// (0x0004d562) aid_placing_vt_slider_lsc_ParamLimits

0x662f,	// (0x0004d80c) vidtel_button_pane_ParamLimits

0x662f,	// (0x0004d80c) vidtel_button_pane

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp034

0xc6b2,	// (0x0005388f) vidtel_button_pane_g1

0xc6ba,	// (0x00053897) vidtel_button_pane_t1

0x1b5d,	// (0x00048d3a) aid_size_vtel_slider_touch

0x23be,	// (0x0004959b) scroll_pane_cp039

0x24f0,	// (0x000496cd) ncim_query_button_pane_cp01_ParamLimits

0x250f,	// (0x000496ec) ncimui_query_pane_g1_ParamLimits

0xdd6f,	// (0x00054f4c) input_focus_pane_cp012_ParamLimits

0x2534,	// (0x00049711) ncim_query_entry_pane_t1_ParamLimits

0x23be,	// (0x0004959b) scroll_pane_cp039_ParamLimits

0xdb7f,	// (0x00054d5c) navi_pane_bcale_mc_g1

0xdb87,	// (0x00054d64) navi_pane_bcale_mc_t1

0x2aee,	// (0x00049ccb) main_sp_fs_email_pane_g1

0x2afa,	// (0x00049cd7) main_sp_fs_email_pane_g2

0x0001,

0xfc79,	// (0x00056e56) main_sp_fs_email_pane_g

0x2f79,	// (0x0004a156) list_single_cale_mrui_row_pane_g3_ParamLimits

0x2f79,	// (0x0004a156) list_single_cale_mrui_row_pane_g3

0xbd16,	// (0x00052ef3) list_single_recal_day_pane_g5_event_pane

0x30e2,	// (0x0004a2bf) list_single_recal_day_pane_g7

0x360a,	// (0x0004a7e7) list_recal_day_event_pane_cp01

0x3613,	// (0x0004a7f0) list_recal_vselct_arw_lo_pane_cp01

0x361b,	// (0x0004a7f8) list_recal_vselct_arw_up_pane_cp01

0x3623,	// (0x0004a800) list_recal_vselct_pane_cp01

0x1b7a,	// (0x00048d57) list_recal_day_event_pane_cp01_g1

0x362d,	// (0x0004a80a) list_recal_day_event_pane_cp01_t1

0x30ea,	// (0x0004a2c7) list_single_recal_day_pane_t1_ParamLimits

0xbd2d,	// (0x00052f0a) list_single_recal_day_pane_t2_ParamLimits

0xfd91,	// (0x00056f6e) list_single_recal_day_pane_t_ParamLimits

0x5576,	// (0x0004c753) bg_notes_pane_ParamLimits

0x579d,	// (0x0004c97a) list_notes_pane_ParamLimits

0x57ab,	// (0x0004c988) scroll_pane_cp06_ParamLimits

0x57ea,	// (0x0004c9c7) main_notes_pane_ParamLimits

0xdd6f,	// (0x00054f4c) main_welc_pane

0xc6ee,	// (0x000538cb) main_welc_body_pane_ParamLimits

0xc6ee,	// (0x000538cb) main_welc_body_pane

0xc707,	// (0x000538e4) main_welc_opti_pane_ParamLimits

0xc707,	// (0x000538e4) main_welc_opti_pane

0xc760,	// (0x0005393d) main_welc_pane_t1_ParamLimits

0xc760,	// (0x0005393d) main_welc_pane_t1

0xc8c6,	// (0x00053aa3) main_welc_body_row_pane_ParamLimits

0xc8c6,	// (0x00053aa3) main_welc_body_row_pane

0x5635,	// (0x0004c812) main_welc_opti_row_pane_ParamLimits

0x5635,	// (0x0004c812) main_welc_opti_row_pane

0x364b,	// (0x0004a828) main_welc_opti_row_pane_g1

0xc8db,	// (0x00053ab8) main_welc_opti_row_pane_t1

0x3653,	// (0x0004a830) main_welc_body_row_pane_t1

0x3329,	// (0x0004a506) popup_notif_wgt_heading_pane

0x3343,	// (0x0004a520) aid_size_list_notif_wgt_del_ParamLimits

0x3350,	// (0x0004a52d) list_notif_wgt_row_pane_g1_ParamLimits

0x335c,	// (0x0004a539) list_notif_wgt_row_pane_g2_ParamLimits

0x3370,	// (0x0004a54d) list_notif_wgt_row_pane_g3_ParamLimits

0xfdf8,	// (0x00056fd5) list_notif_wgt_row_pane_g_ParamLimits

0x337d,	// (0x0004a55a) list_notif_wgt_row_pane_t1_ParamLimits

0x3393,	// (0x0004a570) list_notif_wgt_row_pane_t2_ParamLimits

0x33a5,	// (0x0004a582) list_notif_wgt_row_pane_t3_ParamLimits

0xfdff,	// (0x00056fdc) list_notif_wgt_row_pane_t_ParamLimits

0xc145,	// (0x00053322) listrow_wgtman_pane_g1_ParamLimits

0xc152,	// (0x0005332f) listrow_wgtman_pane_g2_ParamLimits

0xfe2f,	// (0x0005700c) listrow_wgtman_pane_g_ParamLimits

0xc16a,	// (0x00053347) listrow_wgtman_pane_t1_ParamLimits

0xc182,	// (0x0005335f) listrow_wgtman_pane_t2_ParamLimits

0xfe34,	// (0x00057011) listrow_wgtman_pane_t_ParamLimits

0xc1a8,	// (0x00053385) wait_bar_pane_cp09_ParamLimits

0x4bf8,	// (0x0004bdd5) bg_popup_heading_pane_cp02

0x3662,	// (0x0004a83f) popup_notif_wgt_heading_pane_g1

0x366a,	// (0x0004a847) popup_notif_wgt_heading_pane_t1

0xf000,	// (0x000561dd) main_vids_pane

0x4bf8,	// (0x0004bdd5) vids_listscroll_pane

0xc8ea,	// (0x00053ac7) scroll_pane_cp040

0x4bf8,	// (0x0004bdd5) vids_list_pane

0xc8f3,	// (0x00053ad0) vids_list_double_pane_ParamLimits

0xc8f3,	// (0x00053ad0) vids_list_double_pane

0xc904,	// (0x00053ae1) vids_list_double_pane_g1

0xc90d,	// (0x00053aea) vids_list_double_pane_t1

0xc91d,	// (0x00053afa) vids_list_double_pane_t2

0x0001,

0xfecd,	// (0x000570aa) vids_list_double_pane_t

0x7fc1,	// (0x0004f19e) main_ncimui_pane_ParamLimits

0xaebf,	// (0x0005209c) main_ncimui_pane_g1_ParamLimits

0xaecb,	// (0x000520a8) main_ncimui_pane_g2_ParamLimits

0xaecb,	// (0x000520a8) main_ncimui_pane_g2

0x0001,

0xfb7a,	// (0x00056d57) main_ncimui_pane_g_ParamLimits

0xfb7a,	// (0x00056d57) main_ncimui_pane_g

0xc71c,	// (0x000538f9) main_welc_pane_g1_ParamLimits

0xc71c,	// (0x000538f9) main_welc_pane_g1

0xc728,	// (0x00053905) main_welc_pane_g2_ParamLimits

0xc728,	// (0x00053905) main_welc_pane_g2

0x0003,

0xfeb7,	// (0x00057094) main_welc_pane_g_ParamLimits

0xfeb7,	// (0x00057094) main_welc_pane_g

0x5576,	// (0x0004c753) listscroll_mce_pane_ParamLimits

0x760e,	// (0x0004e7eb) wait_bar_pane_cp10

0xefe6,	// (0x000561c3) main_cale_day_pane_ParamLimits

0xefe6,	// (0x000561c3) main_cale_week_pane_ParamLimits

0x5576,	// (0x0004c753) main_messa_pane_ParamLimits

0x8c13,	// (0x0004fdf0) main_clock2_btn_pane_ParamLimits

0x8c13,	// (0x0004fdf0) main_clock2_btn_pane

0x135b,	// (0x00048538) main_clock2_btn_pane_cp01_ParamLimits

0x135b,	// (0x00048538) main_clock2_btn_pane_cp01

0x2f34,	// (0x0004a111) list_cale_mrui_pane_ParamLimits

0x33d9,	// (0x0004a5b6) main_cf0_pane_g2

0x0001,

0xfe06,	// (0x00056fe3) main_cf0_pane_g

0xc30d,	// (0x000534ea) area_left_week_number_pane_ParamLimits

0xc31e,	// (0x000534fb) area_top_day_name_pane_ParamLimits

0xc32a,	// (0x00053507) frame_month_view_pane_ParamLimits

0x3509,	// (0x0004a6e6) grid_month_view_pane_ParamLimits

0x3517,	// (0x0004a6f4) frm_month_g1_ParamLimits

0xc396,	// (0x00053573) frm_month_g2_ParamLimits

0xc3a5,	// (0x00053582) frm_month_g3_ParamLimits

0xc3b4,	// (0x00053591) frm_month_g4_ParamLimits

0xc3c3,	// (0x000535a0) frm_month_g5_ParamLimits

0xc3d2,	// (0x000535af) frm_month_g6_ParamLimits

0xc3e1,	// (0x000535be) frm_month_g7_ParamLimits

0x3524,	// (0x0004a701) frm_month_g8_ParamLimits

0xc3f0,	// (0x000535cd) frm_month_g9_ParamLimits

0xc3fd,	// (0x000535da) frm_month_g10_ParamLimits

0xc40a,	// (0x000535e7) frm_month_g11_ParamLimits

0xc417,	// (0x000535f4) frm_month_g12_ParamLimits

0xc424,	// (0x00053601) frm_month_g13_ParamLimits

0xc431,	// (0x0005360e) frm_month_g14_ParamLimits

0xc43e,	// (0x0005361b) frm_month_g15_ParamLimits

0xc44b,	// (0x00053628) frm_month_g16_ParamLimits

0xfe5e,	// (0x0005703b) frm_month_g_ParamLimits

0x3531,	// (0x0004a70e) cell_top_day_name_pane_t1_ParamLimits

0xc458,	// (0x00053635) cell_area_left_week_number_pane_g1_ParamLimits

0xc467,	// (0x00053644) cell_area_left_week_number_pane_t1_ParamLimits

0x5619,	// (0x0004c7f6) cell_month_view_pane_g1_ParamLimits

0xc47d,	// (0x0005365a) cell_month_view_pane_t1_ParamLimits

0x556e,	// (0x0004c74b) main_clock2_btn_pane_g1

0x3688,	// (0x0004a865) main_clock2_btn_pane_t1

0xdd6f,	// (0x00054f4c) listscroll_cmail_pane_ParamLimits

0x2aee,	// (0x00049ccb) main_sp_fs_email_pane_g1_ParamLimits

0x2afa,	// (0x00049cd7) main_sp_fs_email_pane_g2_ParamLimits

0xfc79,	// (0x00056e56) main_sp_fs_email_pane_g_ParamLimits

0x305e,	// (0x0004a23b) list_recal_day_pane_ParamLimits

0x306f,	// (0x0004a24c) mian_recal_day_pane_t1

0xb716,	// (0x000528f3) list_single_dyc_row_text_pane_t4_ParamLimits

0xb716,	// (0x000528f3) list_single_dyc_row_text_pane_t4

0xb74d,	// (0x0005292a) list_single_dyc_row_text_pane_t5_ParamLimits

0xb74d,	// (0x0005292a) list_single_dyc_row_text_pane_t5

0x2b93,	// (0x00049d70) list_single_dyc_row_text_pane_t6_ParamLimits

0x2b93,	// (0x00049d70) list_single_dyc_row_text_pane_t6

0x7250,	// (0x0004e42d) aid_mgn_list_cale_time_pane

0x7fc1,	// (0x0004f19e) main_gallery2_pane_ParamLimits

0x136f,	// (0x0004854c) main_clock2_pane_cp01_t1

0x137d,	// (0x0004855a) main_clock2_pane_cp01_t3

0x0001,

0xf750,	// (0x0005692d) main_clock2_pane_cp01_t

0x5cd0,	// (0x0004cead) cale_week_scroll_pane_g16_ParamLimits

0x5cd0,	// (0x0004cead) cale_week_scroll_pane_g16

0xd29d,	// (0x0005447a) vorec_slider_pane

0xc6ba,	// (0x00053897) vidtel_button_pane_t1_ParamLimits

0x5627,	// (0x0004c804) main_fs_bigclock_clock_pane_g1_ParamLimits

0xbdc6,	// (0x00052fa3) main_fs_bigclock_clock_pane_g2_ParamLimits

0xbdd3,	// (0x00052fb0) main_fs_bigclock_clock_pane_g3_ParamLimits

0xbdd3,	// (0x00052fb0) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfdb4,	// (0x00056f91) main_fs_bigclock_clock_pane_g_ParamLimits

0xbddf,	// (0x00052fbc) main_fs_bigclock_clock_pane_t1_ParamLimits

0xbdf1,	// (0x00052fce) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfdbd,	// (0x00056f9a) main_fs_bigclock_clock_pane_t_ParamLimits

0x85f7,	// (0x0004f7d4) main_mup3_lyrics_pane_ParamLimits

0x85f7,	// (0x0004f7d4) main_mup3_lyrics_pane

0xc94f,	// (0x00053b2c) main_mup3_lyrics_pane_t1_ParamLimits

0xc94f,	// (0x00053b2c) main_mup3_lyrics_pane_t1

0x90e1,	// (0x000502be) aid_main_mp4_pane_t1_area

0x90eb,	// (0x000502c8) aid_main_mp4_pane_t2_area

0x91d8,	// (0x000503b5) main_mp4_pane_g7_ParamLimits

0x91d8,	// (0x000503b5) main_mp4_pane_g7

0x91e4,	// (0x000503c1) main_mp4_pane_g8_ParamLimits

0x91e4,	// (0x000503c1) main_mp4_pane_g8

0x95a7,	// (0x00050784) aid_call6_pane_g1_size

0xc5f5,	// (0x000537d2) list_double_large_graphic_phob2_other_pane_ParamLimits

0xc5f5,	// (0x000537d2) list_double_large_graphic_phob2_other_pane

0xdad2,	// (0x00054caf) list_double_large_graphic_phob2_other_pane_g1

0x4bf8,	// (0x0004bdd5) list_highlight_pane_cp026

0xdd6f,	// (0x00054f4c) main_welc_pane_ParamLimits

0xb54f,	// (0x0005272c) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb54f,	// (0x0005272c) main_sp_fs_ctrlbar_pane_g3

0xb567,	// (0x00052744) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb567,	// (0x00052744) main_sp_fs_ctrlbar_pane_g4

0xb5a7,	// (0x00052784) toolbar2_fixed_button_pane_cp01

0xb5b1,	// (0x0005278e) toolbar2_fixed_button_pane_cp02

0xb5bc,	// (0x00052799) toolbar2_fixed_button_pane_cp03

0xc6e2,	// (0x000538bf) list_welc_entry_pane_ParamLimits

0xc6e2,	// (0x000538bf) list_welc_entry_pane

0xc734,	// (0x00053911) main_welc_pane_g3_ParamLimits

0xc734,	// (0x00053911) main_welc_pane_g3

0xc778,	// (0x00053955) main_welc_pane_t2_ParamLimits

0xc778,	// (0x00053955) main_welc_pane_t2

0xc78a,	// (0x00053967) main_welc_pane_t3_ParamLimits

0xc78a,	// (0x00053967) main_welc_pane_t3

0x0005,

0xfec0,	// (0x0005709d) main_welc_pane_t_ParamLimits

0xfec0,	// (0x0005709d) main_welc_pane_t

0xc870,	// (0x00053a4d) welc_button_pane_ParamLimits

0xc870,	// (0x00053a4d) welc_button_pane

0xc8ba,	// (0x00053a97) welc_service_logo_pane_ParamLimits

0xc8ba,	// (0x00053a97) welc_service_logo_pane

0xc96d,	// (0x00053b4a) list_single_welc_entry_pane_ParamLimits

0xc96d,	// (0x00053b4a) list_single_welc_entry_pane

0xc97e,	// (0x00053b5b) list_single_welc_entry_pane_g1

0xc986,	// (0x00053b63) list_single_welc_entry_pane_t1

0xc994,	// (0x00053b71) list_single_welc_entry_pane_t2

0x0001,

0xfed2,	// (0x000570af) list_single_welc_entry_pane_t

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp035

0xc9a2,	// (0x00053b7f) welc_button_pane_t1

0x3696,	// (0x0004a873) welc_service_logo_pane_g1

0x369f,	// (0x0004a87c) welc_service_logo_pane_g2

0x0001,

0xfed7,	// (0x000570b4) welc_service_logo_pane_g

0x4e5a,	// (0x0004c037) main_int_radio_pane

0x596c,	// (0x0004cb49) list_single_fs_dyc_pane_g1

0xc52c,	// (0x00053709) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xc52c,	// (0x00053709) list_double_large_graphic_phob2_pane_g3

0xc538,	// (0x00053715) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xc538,	// (0x00053715) list_double_large_graphic_phob2_pane_g4

0xc9b0,	// (0x00053b8d) main_int_radio1_pane_ParamLimits

0xc9b0,	// (0x00053b8d) main_int_radio1_pane

0x36a8,	// (0x0004a885) find_pane_cp02

0xc9c6,	// (0x00053ba3) input_focus_pane_cp12_ParamLimits

0xc9c6,	// (0x00053ba3) input_focus_pane_cp12

0xc9d2,	// (0x00053baf) input_focus_pane_cp13_ParamLimits

0xc9d2,	// (0x00053baf) input_focus_pane_cp13

0xc9ea,	// (0x00053bc7) input_focus_pane_cp14_ParamLimits

0xc9ea,	// (0x00053bc7) input_focus_pane_cp14

0x36b1,	// (0x0004a88e) int_radio1_listscroll_pane

0xca02,	// (0x00053bdf) main_int_radio1_pane_g1_ParamLimits

0xca02,	// (0x00053bdf) main_int_radio1_pane_g1

0xca0e,	// (0x00053beb) main_int_radio1_pane_t1_ParamLimits

0xca0e,	// (0x00053beb) main_int_radio1_pane_t1

0xca20,	// (0x00053bfd) main_int_radio1_pane_t2_ParamLimits

0xca20,	// (0x00053bfd) main_int_radio1_pane_t2

0xca32,	// (0x00053c0f) main_int_radio1_pane_t3_ParamLimits

0xca32,	// (0x00053c0f) main_int_radio1_pane_t3

0xca44,	// (0x00053c21) main_int_radio1_pane_t4_ParamLimits

0xca44,	// (0x00053c21) main_int_radio1_pane_t4

0x36bb,	// (0x0004a898) main_int_radio1_pane_t5_ParamLimits

0x36bb,	// (0x0004a898) main_int_radio1_pane_t5

0xca5b,	// (0x00053c38) main_int_radio1_pane_t6_ParamLimits

0xca5b,	// (0x00053c38) main_int_radio1_pane_t6

0xca6d,	// (0x00053c4a) main_int_radio1_pane_t7_ParamLimits

0xca6d,	// (0x00053c4a) main_int_radio1_pane_t7

0xca7f,	// (0x00053c5c) main_int_radio1_pane_t8_ParamLimits

0xca7f,	// (0x00053c5c) main_int_radio1_pane_t8

0xca91,	// (0x00053c6e) main_int_radio1_pane_t9_ParamLimits

0xca91,	// (0x00053c6e) main_int_radio1_pane_t9

0xcaa3,	// (0x00053c80) main_int_radio1_pane_t10_ParamLimits

0xcaa3,	// (0x00053c80) main_int_radio1_pane_t10

0xcad2,	// (0x00053caf) main_int_radio1_pane_t11_ParamLimits

0xcad2,	// (0x00053caf) main_int_radio1_pane_t11

0xcb01,	// (0x00053cde) main_int_radio1_pane_t12_ParamLimits

0xcb01,	// (0x00053cde) main_int_radio1_pane_t12

0x000b,

0xfedc,	// (0x000570b9) main_int_radio1_pane_t_ParamLimits

0xfedc,	// (0x000570b9) main_int_radio1_pane_t

0x36cd,	// (0x0004a8aa) int_radio_list_pane

0x354c,	// (0x0004a729) scroll_pane_cp037

0x36d5,	// (0x0004a8b2) list_double_large_graphic_int_radio_pane_ParamLimits

0x36d5,	// (0x0004a8b2) list_double_large_graphic_int_radio_pane

0x36e6,	// (0x0004a8c3) list_double_large_graphic_int_radio_pane_g1

0x36ef,	// (0x0004a8cc) list_double_large_graphic_int_radio_pane_t1

0x36fd,	// (0x0004a8da) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfef5,	// (0x000570d2) list_double_large_graphic_int_radio_pane_t

0x4bf8,	// (0x0004bdd5) list_highlight_pane_cp027

0x363b,	// (0x0004a818) main_button_pane_4

0xc740,	// (0x0005391d) main_welc_pane_g4_ParamLimits

0xc740,	// (0x0005391d) main_welc_pane_g4

0xc79c,	// (0x00053979) main_welc_pane_t4_ParamLimits

0xc79c,	// (0x00053979) main_welc_pane_t4

0xc7ae,	// (0x0005398b) main_welc_pane_t5_ParamLimits

0xc7ae,	// (0x0005398b) main_welc_pane_t5

0xc7de,	// (0x000539bb) main_welc_pane_t6_ParamLimits

0xc7de,	// (0x000539bb) main_welc_pane_t6

0xc87c,	// (0x00053a59) welc_button_pane_2_ParamLimits

0xc87c,	// (0x00053a59) welc_button_pane_2

0xc88e,	// (0x00053a6b) welc_button_pane_3_ParamLimits

0xc88e,	// (0x00053a6b) welc_button_pane_3

0x3643,	// (0x0004a820) welc_button_pane_4

0xc8a2,	// (0x00053a7f) welc_button_pane_5_ParamLimits

0xc8a2,	// (0x00053a7f) welc_button_pane_5

0x4c3a,	// (0x0004be17) main_popup_welc_pane

0x371a,	// (0x0004a8f7) main_welc_sk_g3

0x3724,	// (0x0004a901) main_welc_sk_g4

0x372e,	// (0x0004a90b) main_welc_sk_t3

0x373c,	// (0x0004a919) main_welc_sk_t4

0x374a,	// (0x0004a927) popup_welc_pane_t4

0x3758,	// (0x0004a935) popup_welc_pane_t5

0x3766,	// (0x0004a943) popup_welc_pane_t6

0x4e5a,	// (0x0004c037) main_acti_pane

0x4bf8,	// (0x0004bdd5) main_sso_pane

0xcb18,	// (0x00053cf5) sso_body_pane_ParamLimits

0xcb18,	// (0x00053cf5) sso_body_pane

0xcb26,	// (0x00053d03) sso_logo_pane_ParamLimits

0xcb26,	// (0x00053d03) sso_logo_pane

0xcb49,	// (0x00053d26) sso_sk_pane_ParamLimits

0xcb49,	// (0x00053d26) sso_sk_pane

0xd31e,	// (0x000544fb) main_sso_logo_pane_g1

0xcb56,	// (0x00053d33) sso_sk_pane_t1_ParamLimits

0xcb56,	// (0x00053d33) sso_sk_pane_t1

0xcb69,	// (0x00053d46) sso_sk_pane_t2_ParamLimits

0xcb69,	// (0x00053d46) sso_sk_pane_t2

0x0001,

0xfefa,	// (0x000570d7) sso_sk_pane_t_ParamLimits

0xfefa,	// (0x000570d7) sso_sk_pane_t

0x379e,	// (0x0004a97b) aid_sso_gap

0x37a7,	// (0x0004a984) aid_sso_txt1

0x37af,	// (0x0004a98c) aid_sso_txt2

0x37b7,	// (0x0004a994) aid_sso_txt3

0x0002,

0xfeff,	// (0x000570dc) aid_sso_txt

0x37bf,	// (0x0004a99c) aid_sso_widget

0xcbbe,	// (0x00053d9b) sso_btn_pane_ParamLimits

0xcbbe,	// (0x00053d9b) sso_btn_pane

0xcc27,	// (0x00053e04) sso_option_pane_ParamLimits

0xcc27,	// (0x00053e04) sso_option_pane

0xcc81,	// (0x00053e5e) sso_query_pane_ParamLimits

0xcc81,	// (0x00053e5e) sso_query_pane

0xccbd,	// (0x00053e9a) sso_query_pane_cp01_ParamLimits

0xccbd,	// (0x00053e9a) sso_query_pane_cp01

0xccfb,	// (0x00053ed8) sso_t_hdr_pane_ParamLimits

0xccfb,	// (0x00053ed8) sso_t_hdr_pane

0xcd19,	// (0x00053ef6) sso_t_nml_pane_ParamLimits

0xcd19,	// (0x00053ef6) sso_t_nml_pane

0x37b7,	// (0x0004a994) sso_t_sub_pane

0xcb33,	// (0x00053d10) sso_popup_window_ParamLimits

0xcb33,	// (0x00053d10) sso_popup_window

0xcb7b,	// (0x00053d58) sso_apps_pane_ParamLimits

0xcb7b,	// (0x00053d58) sso_apps_pane

0xcb9a,	// (0x00053d77) sso_body_pane_g1

0xcba2,	// (0x00053d7f) sso_body_pane_t1

0xcbb0,	// (0x00053d8d) sso_body_pane_t2

0x0001,

0xff06,	// (0x000570e3) sso_body_pane_t

0xcbfb,	// (0x00053dd8) sso_btn_pane_cp01_ParamLimits

0xcbfb,	// (0x00053dd8) sso_btn_pane_cp01

0xcc5b,	// (0x00053e38) sso_prog_pane_ParamLimits

0xcc5b,	// (0x00053e38) sso_prog_pane

0xcd5d,	// (0x00053f3a) sso_t_hdr_pane_t1_ParamLimits

0xcd5d,	// (0x00053f3a) sso_t_hdr_pane_t1

0xcd76,	// (0x00053f53) input_focus_pane_cp10_ParamLimits

0xcd76,	// (0x00053f53) input_focus_pane_cp10

0xcd8e,	// (0x00053f6b) sso_query_pane_t1_ParamLimits

0xcd8e,	// (0x00053f6b) sso_query_pane_t1

0xcda1,	// (0x00053f7e) sso_query_pane_t2_ParamLimits

0xcda1,	// (0x00053f7e) sso_query_pane_t2

0xcdbc,	// (0x00053f99) sso_query_pane_t3_ParamLimits

0xcdbc,	// (0x00053f99) sso_query_pane_t3

0xcde6,	// (0x00053fc3) sso_query_pane_t4_ParamLimits

0xcde6,	// (0x00053fc3) sso_query_pane_t4

0x0003,

0xff0b,	// (0x000570e8) sso_query_pane_t_ParamLimits

0xff0b,	// (0x000570e8) sso_query_pane_t

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp22

0x370b,	// (0x0004a8e8) sso_btn_pane_t1

0xce0a,	// (0x00053fe7) sso_t_nml_pane_t1_ParamLimits

0xce0a,	// (0x00053fe7) sso_t_nml_pane_t1

0xce27,	// (0x00054004) sso_option_row_pane_ParamLimits

0xce27,	// (0x00054004) sso_option_row_pane

0xce3a,	// (0x00054017) sso_t_sub_pane_t1_ParamLimits

0xce3a,	// (0x00054017) sso_t_sub_pane_t1

0xdd6f,	// (0x00054f4c) bg_popup_window_pane_cp11_ParamLimits

0xdd6f,	// (0x00054f4c) bg_popup_window_pane_cp11

0xce4d,	// (0x0005402a) popup_sk_window_cp01_ParamLimits

0xce4d,	// (0x0005402a) popup_sk_window_cp01

0xce5a,	// (0x00054037) sso_popup_body_pane_ParamLimits

0xce5a,	// (0x00054037) sso_popup_body_pane

0xce67,	// (0x00054044) scroll_pane_cp21_ParamLimits

0xce67,	// (0x00054044) scroll_pane_cp21

0xce74,	// (0x00054051) sso_popup_body_t_pane_ParamLimits

0xce74,	// (0x00054051) sso_popup_body_t_pane

0xce81,	// (0x0005405e) sso_popup_body_t_hdr_pane_ParamLimits

0xce81,	// (0x0005405e) sso_popup_body_t_hdr_pane

0xce8d,	// (0x0005406a) sso_popup_body_t_nml_pane_ParamLimits

0xce8d,	// (0x0005406a) sso_popup_body_t_nml_pane

0xcea6,	// (0x00054083) sso_popup_body_t_sub_pane_ParamLimits

0xcea6,	// (0x00054083) sso_popup_body_t_sub_pane

0xcec5,	// (0x000540a2) sso_popup_body_t_hdr_pane_t1

0xced5,	// (0x000540b2) sso_popup_body_t_nml_pane_t1_ParamLimits

0xced5,	// (0x000540b2) sso_popup_body_t_nml_pane_t1

0xcf0f,	// (0x000540ec) sso_popup_body_t_sub_pane_t1_ParamLimits

0xcf0f,	// (0x000540ec) sso_popup_body_t_sub_pane_t1

0xd31e,	// (0x000544fb) sso_prog_pane_g1

0xcf34,	// (0x00054111) sso_apps_pane_comp1_ParamLimits

0xcf34,	// (0x00054111) sso_apps_pane_comp1

0xcf46,	// (0x00054123) sso_apps_pane_comp1_g1

0xcf4e,	// (0x0005412b) sso_apps_pane_comp1_t1

0xcf6a,	// (0x00054147) sso_option_row_pane_g1

0xcf72,	// (0x0005414f) sso_option_row_pane_t1

0xc6d0,	// (0x000538ad) bg_welc_area_ParamLimits

0xc6d0,	// (0x000538ad) bg_welc_area

0xc814,	// (0x000539f1) sso_t_hdr_pane_a_t1_ParamLimits

0xc814,	// (0x000539f1) sso_t_hdr_pane_a_t1

0xc826,	// (0x00053a03) sso_t_nml_pane_a_t1_ParamLimits

0xc826,	// (0x00053a03) sso_t_nml_pane_a_t1

0xc848,	// (0x00053a25) sso_t_sub_pane_a_t1_ParamLimits

0xc848,	// (0x00053a25) sso_t_sub_pane_a_t1

0x370b,	// (0x0004a8e8) sso_btn_pane_t1_copy1

0x4bf8,	// (0x0004bdd5) welc_button_pane_2_comp1

0x3774,	// (0x0004a951) sso_t_hdr_pane_p_t1

0x3782,	// (0x0004a95f) sso_t_nml_pane_p_t1

0x3790,	// (0x0004a96d) sso_t_sub_pane_p_t1

0x2cac,	// (0x00049e89) list_cmail_pane_ParamLimits

0xc8ae,	// (0x00053a8b) welc_button_pane_cp01_ParamLimits

0xc8ae,	// (0x00053a8b) welc_button_pane_cp01

0x4bf8,	// (0x0004bdd5) main_att_pane

0xcf5c,	// (0x00054139) input_focus_pane_cp10_t1

0xcf72,	// (0x0005414f) sso_option_row_pane_t1_ParamLimits

0xcf87,	// (0x00054164) main_att_body_pane_ParamLimits

0xcf87,	// (0x00054164) main_att_body_pane

0xcf9b,	// (0x00054178) att_btn_pane_ParamLimits

0xcf9b,	// (0x00054178) att_btn_pane

0xcfb5,	// (0x00054192) att_btn_pane_cp01_ParamLimits

0xcfb5,	// (0x00054192) att_btn_pane_cp01

0xcfcd,	// (0x000541aa) att_li_srv_pane_ParamLimits

0xcfcd,	// (0x000541aa) att_li_srv_pane

0xcfdb,	// (0x000541b8) att_opt_pane_ParamLimits

0xcfdb,	// (0x000541b8) att_opt_pane

0xd01d,	// (0x000541fa) att_query_pane_ParamLimits

0xd01d,	// (0x000541fa) att_query_pane

0xd04d,	// (0x0005422a) att_query_pane_cp01_ParamLimits

0xd04d,	// (0x0005422a) att_query_pane_cp01

0xd083,	// (0x00054260) att_t_hdr_pane_ParamLimits

0xd083,	// (0x00054260) att_t_hdr_pane

0xd0c3,	// (0x000542a0) att_t_nml_pane_ParamLimits

0xd0c3,	// (0x000542a0) att_t_nml_pane

0xd0f1,	// (0x000542ce) att_t_nml_pane_cp01_ParamLimits

0xd0f1,	// (0x000542ce) att_t_nml_pane_cp01

0xd113,	// (0x000542f0) att_t_nmlb_pane_ParamLimits

0xd113,	// (0x000542f0) att_t_nmlb_pane

0xd129,	// (0x00054306) att_term_pane_ParamLimits

0xd129,	// (0x00054306) att_term_pane

0xd169,	// (0x00054346) main_att_body_pane_g1_ParamLimits

0xd169,	// (0x00054346) main_att_body_pane_g1

0xcd5d,	// (0x00053f3a) att_t_hdr_pane_t1_ParamLimits

0xcd5d,	// (0x00053f3a) att_t_hdr_pane_t1

0xd1a9,	// (0x00054386) att_t_nml_pane_t1_ParamLimits

0xd1a9,	// (0x00054386) att_t_nml_pane_t1

0xd1ce,	// (0x000543ab) att_btn_pane_t1

0x4bf8,	// (0x0004bdd5) bg_button_pane_cp23

0xd1dc,	// (0x000543b9) att_li_srv_row_pane_ParamLimits

0xd1dc,	// (0x000543b9) att_li_srv_row_pane

0xd1ec,	// (0x000543c9) att_t_nmlb_pane_t1_ParamLimits

0xd1ec,	// (0x000543c9) att_t_nmlb_pane_t1

0xd205,	// (0x000543e2) att_query_pane_t1

0xd214,	// (0x000543f1) att_query_pane_t2

0xd223,	// (0x00054400) att_query_pane_t3

0x0002,

0xff14,	// (0x000570f1) att_query_pane_t

0xd232,	// (0x0005440f) input_focus_pane_cp11

0xd23b,	// (0x00054418) att_term_pane_t1_ParamLimits

0xd23b,	// (0x00054418) att_term_pane_t1

0x4bf8,	// (0x0004bdd5) att_opt_row_pane

0xd258,	// (0x00054435) att_opt_row_pane_g1

0xd260,	// (0x0005443d) att_opt_row_pane_t1_ParamLimits

0xd260,	// (0x0005443d) att_opt_row_pane_t1

0xd279,	// (0x00054456) att_li_srv_row_pane_g1

0xd281,	// (0x0005445e) att_li_srv_row_pane_t1

0xd28f,	// (0x0005446c) att_li_srv_row_pane_t2

0x0001,

0xff1b,	// (0x000570f8) att_li_srv_row_pane_t
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

} // end of namespace AknLayoutScalable_Abrw_pqp_apps_qvga_prt_Small
