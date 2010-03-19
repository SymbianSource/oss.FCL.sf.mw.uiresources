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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0007febc };

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
0x57b1,	// (0x0008566d) Screen

0x57bd,	// (0x00085679) application_window

0x57fd,	// (0x000856b9) area_bottom_pane_ParamLimits

0x57fd,	// (0x000856b9) area_bottom_pane

0x5832,	// (0x000856ee) area_top_pane_ParamLimits

0x5832,	// (0x000856ee) area_top_pane

0x0276,	// (0x00080132) call_video_uplink_pane_ParamLimits

0x0276,	// (0x00080132) call_video_uplink_pane

0x58bf,	// (0x0008577b) main_pane_ParamLimits

0x58bf,	// (0x0008577b) main_pane

0xf022,	// (0x0008eede) context_pane

0x8a9d,	// (0x00088959) navi_pane

0x8ac1,	// (0x0008897d) popup_cale_events_window_ParamLimits

0x8ac1,	// (0x0008897d) popup_cale_events_window

0xf035,	// (0x0008eef1) popup_mup_playback_window

0x8ad9,	// (0x00088995) signal_pane

0x4083,	// (0x00083f3f) main_browser_pane

0xdbc6,	// (0x0008da82) main_burst_pane

0x894f,	// (0x0008880b) main_calc_pane

0xdbc6,	// (0x0008da82) main_cale_day_pane

0x4083,	// (0x00083f3f) main_cale_month_pane

0xdbc6,	// (0x0008da82) main_cale_week_pane

0xdbc6,	// (0x0008da82) main_call_pane

0x3d3d,	// (0x00083bf9) main_call_poc_pane

0xdbc6,	// (0x0008da82) main_camera_pane

0xdbc6,	// (0x0008da82) main_chi_dic_pane

0xda68,	// (0x0008d924) main_clock_pane

0x3d3d,	// (0x00083bf9) main_fmradio_pane

0xdbc6,	// (0x0008da82) main_graph_messa_pane

0x3d3d,	// (0x00083bf9) main_help_pane

0x4083,	// (0x00083f3f) main_im_pane

0x3fb8,	// (0x00083e74) main_image_pane_ParamLimits

0x3fb8,	// (0x00083e74) main_image_pane

0x3d3d,	// (0x00083bf9) main_location2_pane

0xdbc6,	// (0x0008da82) main_location_pane

0x3d3d,	// (0x00083bf9) main_messa_pane

0x3d3d,	// (0x00083bf9) main_mp2_pane

0xdbc6,	// (0x0008da82) main_mp_pane

0x3d3d,	// (0x00083bf9) main_msg_pane

0x3d3d,	// (0x00083bf9) main_mup_eq_pane

0x3d3d,	// (0x00083bf9) main_mup_pane

0xdbc6,	// (0x0008da82) main_notes_pane

0x3d3d,	// (0x00083bf9) main_pec_pane

0x3d3d,	// (0x00083bf9) main_phob_pane

0x3d3d,	// (0x00083bf9) main_pinb_pane

0x3d3d,	// (0x00083bf9) main_postcard_pane

0x3d3d,	// (0x00083bf9) main_qdial_pane

0xdbc6,	// (0x0008da82) main_skin_pane

0x3d3d,	// (0x00083bf9) main_smil2_pane

0xdbc6,	// (0x0008da82) main_smil_pane

0xdbc6,	// (0x0008da82) main_video_pane

0xdbc6,	// (0x0008da82) main_video_tele_pane

0x3fb8,	// (0x00083e74) main_viewer_pane_ParamLimits

0x3fb8,	// (0x00083e74) main_viewer_pane

0xdbc6,	// (0x0008da82) main_vorec_pane

0x8987,	// (0x00088843) popup_blid_sat_info_window_ParamLimits

0x8987,	// (0x00088843) popup_blid_sat_info_window

0x89a1,	// (0x0008885d) popup_dyc_status_message_window_ParamLimits

0x89a1,	// (0x0008885d) popup_dyc_status_message_window

0x89b1,	// (0x0008886d) popup_grid_large_graphic_window_ParamLimits

0x89b1,	// (0x0008886d) popup_grid_large_graphic_window

0x8a29,	// (0x000888e5) popup_loc_request_window_ParamLimits

0x8a29,	// (0x000888e5) popup_loc_request_window

0x8a71,	// (0x0008892d) popup_wml_address_window_ParamLimits

0x8a71,	// (0x0008892d) popup_wml_address_window

0x8827,	// (0x000886e3) call_muted_g1

0x84e3,	// (0x0008839f) popup_call_audio_conf_window_ParamLimits

0x84e3,	// (0x0008839f) popup_call_audio_conf_window

0x8837,	// (0x000886f3) popup_call_audio_first_window_ParamLimits

0x8837,	// (0x000886f3) popup_call_audio_first_window

0x8877,	// (0x00088733) popup_call_audio_in_window_ParamLimits

0x8877,	// (0x00088733) popup_call_audio_in_window

0x889b,	// (0x00088757) popup_call_audio_out_window_ParamLimits

0x889b,	// (0x00088757) popup_call_audio_out_window

0x88bd,	// (0x00088779) popup_call_audio_second_window_ParamLimits

0x88bd,	// (0x00088779) popup_call_audio_second_window

0x88ed,	// (0x000887a9) popup_call_audio_wait_window_ParamLimits

0x88ed,	// (0x000887a9) popup_call_audio_wait_window

0x890e,	// (0x000887ca) popup_number_entry_window_ParamLimits

0x890e,	// (0x000887ca) popup_number_entry_window

0x02a2,	// (0x0008015e) bg_popup_call_pane_cp05_ParamLimits

0x02a2,	// (0x0008015e) bg_popup_call_pane_cp05

0x02c2,	// (0x0008017e) popup_number_entry_window_t1

0x02d5,	// (0x00080191) popup_number_entry_window_t2

0x02e7,	// (0x000801a3) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0008efa8) popup_number_entry_window_t

0x02f9,	// (0x000801b5) text_title_cp2

0x030c,	// (0x000801c8) bg_popup_call_pane_cp_ParamLimits

0x030c,	// (0x000801c8) bg_popup_call_pane_cp

0x031a,	// (0x000801d6) call_thumbnail_pane

0x0322,	// (0x000801de) popup_call_audio_in_window_g1_ParamLimits

0x0322,	// (0x000801de) popup_call_audio_in_window_g1

0x032e,	// (0x000801ea) popup_call_audio_in_window_g2_ParamLimits

0x032e,	// (0x000801ea) popup_call_audio_in_window_g2

0x033a,	// (0x000801f6) popup_call_audio_in_window_g3_ParamLimits

0x033a,	// (0x000801f6) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0008efb1) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0008efb1) popup_call_audio_in_window_g

0x0346,	// (0x00080202) popup_call_audio_in_window_t1_ParamLimits

0x0346,	// (0x00080202) popup_call_audio_in_window_t1

0x0362,	// (0x0008021e) popup_call_audio_in_window_t2_ParamLimits

0x0362,	// (0x0008021e) popup_call_audio_in_window_t2

0x3a06,	// (0x000838c2) popup_call_audio_in_window_t3_ParamLimits

0x3a06,	// (0x000838c2) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0008efb8) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0008efb8) popup_call_audio_in_window_t

0x030c,	// (0x000801c8) bg_popup_call_pane_cp01_ParamLimits

0x030c,	// (0x000801c8) bg_popup_call_pane_cp01

0x031a,	// (0x000801d6) call_thumbnail_pane_cp02

0x3a19,	// (0x000838d5) call_type_pane_cp022

0x3a21,	// (0x000838dd) popup_call_audio_out_window_g1_ParamLimits

0x3a21,	// (0x000838dd) popup_call_audio_out_window_g1

0x3a33,	// (0x000838ef) popup_call_audio_out_window_g2_ParamLimits

0x3a33,	// (0x000838ef) popup_call_audio_out_window_g2

0x3a3f,	// (0x000838fb) popup_call_audio_out_window_g3_ParamLimits

0x3a3f,	// (0x000838fb) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0008efbf) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0008efbf) popup_call_audio_out_window_g

0x3a51,	// (0x0008390d) popup_call_audio_out_window_t1_ParamLimits

0x3a51,	// (0x0008390d) popup_call_audio_out_window_t1

0x3a69,	// (0x00083925) popup_call_audio_out_window_t2_ParamLimits

0x3a69,	// (0x00083925) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0008efc6) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0008efc6) popup_call_audio_out_window_t

0x3a7e,	// (0x0008393a) bg_popup_call_pane_ParamLimits

0x3a7e,	// (0x0008393a) bg_popup_call_pane

0x5ab3,	// (0x0008596f) call_thumbnail_pane_cp_ParamLimits

0x5ab3,	// (0x0008596f) call_thumbnail_pane_cp

0x3b02,	// (0x000839be) call_type_pane_cp01_ParamLimits

0x3b02,	// (0x000839be) call_type_pane_cp01

0x3b46,	// (0x00083a02) popup_call_audio_first_window_g1_ParamLimits

0x3b46,	// (0x00083a02) popup_call_audio_first_window_g1

0x3b92,	// (0x00083a4e) popup_call_audio_first_window_g2_ParamLimits

0x3b92,	// (0x00083a4e) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0008efcb) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0008efcb) popup_call_audio_first_window_g

0x3bd6,	// (0x00083a92) popup_call_audio_first_window_t1_ParamLimits

0x3bd6,	// (0x00083a92) popup_call_audio_first_window_t1

0x3c82,	// (0x00083b3e) popup_call_audio_first_window_t4_ParamLimits

0x3c82,	// (0x00083b3e) popup_call_audio_first_window_t4

0x3d0e,	// (0x00083bca) popup_call_audio_first_window_t5_ParamLimits

0x3d0e,	// (0x00083bca) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0008efd0) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0008efd0) popup_call_audio_first_window_t

0x3d3d,	// (0x00083bf9) bg_popup_call_pane_cp02

0x3d47,	// (0x00083c03) call_type_pane_cp023

0x3d4f,	// (0x00083c0b) popup_call_audio_wait_window_g1

0x3d57,	// (0x00083c13) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008efd7) popup_call_audio_wait_window_g

0x3d5f,	// (0x00083c1b) popup_call_audio_wait_window_t3

0x3d6d,	// (0x00083c29) bg_popup_call_pane_cp03_ParamLimits

0x3d6d,	// (0x00083c29) bg_popup_call_pane_cp03

0x3ded,	// (0x00083ca9) call_thumbnail_pane_cp011_ParamLimits

0x3ded,	// (0x00083ca9) call_thumbnail_pane_cp011

0x3df9,	// (0x00083cb5) call_type_pane_cp034_ParamLimits

0x3df9,	// (0x00083cb5) call_type_pane_cp034

0x3e35,	// (0x00083cf1) popup_call_audio_second_window_g1_ParamLimits

0x3e35,	// (0x00083cf1) popup_call_audio_second_window_g1

0x3e71,	// (0x00083d2d) popup_call_audio_second_window_g2_ParamLimits

0x3e71,	// (0x00083d2d) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0008efdc) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0008efdc) popup_call_audio_second_window_g

0x3ead,	// (0x00083d69) popup_call_audio_second_window_t1_ParamLimits

0x3ead,	// (0x00083d69) popup_call_audio_second_window_t1

0x3f2e,	// (0x00083dea) popup_call_audio_second_window_t2_ParamLimits

0x3f2e,	// (0x00083dea) popup_call_audio_second_window_t2

0x3f64,	// (0x00083e20) popup_call_audio_second_window_t3_ParamLimits

0x3f64,	// (0x00083e20) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0008efe1) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0008efe1) popup_call_audio_second_window_t

0x3d3d,	// (0x00083bf9) bg_popup_call_pane_cp04

0x3f9a,	// (0x00083e56) list_conf_pane

0x3fa2,	// (0x00083e5e) popup_call_audio_conf_window_t1

0x3fb0,	// (0x00083e6c) call_thumbnail_pane_g1

0x3fb8,	// (0x00083e74) bg_pinb_pane_ParamLimits

0x3fb8,	// (0x00083e74) bg_pinb_pane

0x3fc6,	// (0x00083e82) find_pinb_pane

0x3fcf,	// (0x00083e8b) listscroll_pinb_pane_ParamLimits

0x3fcf,	// (0x00083e8b) listscroll_pinb_pane

0x3fde,	// (0x00083e9a) pinb_bg_pane_g1

0x5ad7,	// (0x00085993) pinb_bg_pane_g2

0x5ae3,	// (0x0008599f) pinb_bg_pane_g3

0x5aef,	// (0x000859ab) pinb_bg_pane_g4

0x5afb,	// (0x000859b7) pinb_bg_pane_g5

0x5b07,	// (0x000859c3) pinb_bg_pane_g6

0x5b12,	// (0x000859ce) pinb_bg_pane_g7

0x5b1d,	// (0x000859d9) pinb_bg_pane_g8

0x5b28,	// (0x000859e4) pinb_bg_pane_g9

0x5b32,	// (0x000859ee) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0008efe8) pinb_bg_pane_g

0x5b4f,	// (0x00085a0b) grid_pinb_pane

0x5b5a,	// (0x00085a16) list_pinb_pane

0x5b65,	// (0x00085a21) scroll_pane_cp01_ParamLimits

0x5b65,	// (0x00085a21) scroll_pane_cp01

0x3fe8,	// (0x00083ea4) find_pinb_pane_g1_ParamLimits

0x3fe8,	// (0x00083ea4) find_pinb_pane_g1

0x4000,	// (0x00083ebc) find_pinb_pane_t1

0x4012,	// (0x00083ece) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0008f002) find_pinb_pane_t

0x4027,	// (0x00083ee3) input_focus_pane_cp01_ParamLimits

0x4027,	// (0x00083ee3) input_focus_pane_cp01

0x5b77,	// (0x00085a33) cell_pinb_pane_ParamLimits

0x5b77,	// (0x00085a33) cell_pinb_pane

0x5b97,	// (0x00085a53) cell_pinb_pane_g1_ParamLimits

0x5b97,	// (0x00085a53) cell_pinb_pane_g1

0x5bac,	// (0x00085a68) cell_pinb_pane_g2_ParamLimits

0x5bac,	// (0x00085a68) cell_pinb_pane_g2

0x4033,	// (0x00083eef) cell_pinb_pane_g3_ParamLimits

0x4033,	// (0x00083eef) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0008f007) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0008f007) cell_pinb_pane_g

0x3d3d,	// (0x00083bf9) grid_highlight_pane_cp01

0x5bb8,	// (0x00085a74) list_pinb_item_pane_ParamLimits

0x5bb8,	// (0x00085a74) list_pinb_item_pane

0x3d3d,	// (0x00083bf9) list_highlight_pane_cp02

0x5bd3,	// (0x00085a8f) list_pinb_item_pane_g1_ParamLimits

0x5bd3,	// (0x00085a8f) list_pinb_item_pane_g1

0x5be0,	// (0x00085a9c) list_pinb_item_pane_g2_ParamLimits

0x5be0,	// (0x00085a9c) list_pinb_item_pane_g2

0x5bec,	// (0x00085aa8) list_pinb_item_pane_g3_ParamLimits

0x5bec,	// (0x00085aa8) list_pinb_item_pane_g3

0x5bfd,	// (0x00085ab9) list_pinb_item_pane_g4_ParamLimits

0x5bfd,	// (0x00085ab9) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0008f00e) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0008f00e) list_pinb_item_pane_g

0x5c09,	// (0x00085ac5) list_pinb_item_pane_t1_ParamLimits

0x5c09,	// (0x00085ac5) list_pinb_item_pane_t1

0x5c3a,	// (0x00085af6) calc_display_pane

0x5c58,	// (0x00085b14) calc_paper_pane

0x5c74,	// (0x00085b30) grid_calc_pane

0x3d3d,	// (0x00083bf9) bg_list_pane_cp01

0x5ca0,	// (0x00085b5c) clock_g1

0x5ca8,	// (0x00085b64) clock_g2

0x0001,

0xf15b,	// (0x0008f017) clock_g

0x5cb2,	// (0x00085b6e) clock_t1_ParamLimits

0x5cb2,	// (0x00085b6e) clock_t1

0x5cc7,	// (0x00085b83) clock_t2_ParamLimits

0x5cc7,	// (0x00085b83) clock_t2

0x5cd9,	// (0x00085b95) clock_t3_ParamLimits

0x5cd9,	// (0x00085b95) clock_t3

0x5ceb,	// (0x00085ba7) clock_t4_ParamLimits

0x5ceb,	// (0x00085ba7) clock_t4

0x5cfd,	// (0x00085bb9) clock_t5_ParamLimits

0x5cfd,	// (0x00085bb9) clock_t5

0x5d12,	// (0x00085bce) clock_t6_ParamLimits

0x5d12,	// (0x00085bce) clock_t6

0x5d24,	// (0x00085be0) clock_t7_ParamLimits

0x5d24,	// (0x00085be0) clock_t7

0x5d36,	// (0x00085bf2) clock_t8_ParamLimits

0x5d36,	// (0x00085bf2) clock_t8

0x5d4c,	// (0x00085c08) clock_t9_ParamLimits

0x5d4c,	// (0x00085c08) clock_t9

0x0008,

0xf160,	// (0x0008f01c) clock_t_ParamLimits

0xf160,	// (0x0008f01c) clock_t

0x403f,	// (0x00083efb) popup_clock_analogue_window_cp02

0x403f,	// (0x00083efb) popup_clock_digital_window_cp01

0x4047,	// (0x00083f03) listscroll_help_pane

0x3d3d,	// (0x00083bf9) phob_pre_status_pane

0x4051,	// (0x00083f0d) grid_qdial_pane

0x3d3d,	// (0x00083bf9) listscroll_mce_pane

0x405b,	// (0x00083f17) bg_notes_pane

0x4065,	// (0x00083f21) list_notes_pane

0x5d62,	// (0x00085c1e) scroll_pane_cp06

0x406f,	// (0x00083f2b) bg_calc_paper_pane

0x5d77,	// (0x00085c33) list_calc_pane

0x4083,	// (0x00083f3f) bg_calc_display_pane

0x5d91,	// (0x00085c4d) calc_display_pane_t1

0x5da6,	// (0x00085c62) calc_display_pane_t2

0x5dbb,	// (0x00085c77) calc_display_pane_t3

0x0002,

0xf173,	// (0x0008f02f) calc_display_pane_t

0x5dcd,	// (0x00085c89) cell_calc_pane_ParamLimits

0x5dcd,	// (0x00085c89) cell_calc_pane

0x408f,	// (0x00083f4b) bg_calc_paper_pane_g1

0x40a7,	// (0x00083f63) bg_calc_paper_pane_g2

0x409b,	// (0x00083f57) bg_calc_paper_pane_g3

0x40bf,	// (0x00083f7b) bg_calc_paper_pane_g4

0x40b3,	// (0x00083f6f) bg_calc_paper_pane_g5

0x5dfc,	// (0x00085cb8) bg_calc_paper_pane_g6

0x5e0d,	// (0x00085cc9) bg_calc_paper_pane_g7

0x5e1e,	// (0x00085cda) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0008f036) bg_calc_paper_pane_g

0x5e2f,	// (0x00085ceb) calc_bg_paper_pane_g9

0x5e40,	// (0x00085cfc) list_calc_item_pane_ParamLimits

0x5e40,	// (0x00085cfc) list_calc_item_pane

0x40cb,	// (0x00083f87) list_calc_item_pane_g1

0x5e64,	// (0x00085d20) list_calc_item_pane_t1_ParamLimits

0x5e64,	// (0x00085d20) list_calc_item_pane_t1

0x5e76,	// (0x00085d32) list_calc_item_pane_t2_ParamLimits

0x5e76,	// (0x00085d32) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0008f047) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0008f047) list_calc_item_pane_t

0x40d8,	// (0x00083f94) cell_calc_pane_g1

0x40e2,	// (0x00083f9e) grid_highlight_pane_cp02

0x410d,	// (0x00083fc9) bg_calc_display_pane_g1

0x5ea6,	// (0x00085d62) bg_calc_display_pane_g2

0x4104,	// (0x00083fc0) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0008f051) bg_calc_display_pane_g

0x5eb0,	// (0x00085d6c) cell_qdial_pane_ParamLimits

0x5eb0,	// (0x00085d6c) cell_qdial_pane

0x5ec6,	// (0x00085d82) cell_qdial_pane_g1_ParamLimits

0x5ec6,	// (0x00085d82) cell_qdial_pane_g1

0x5ed3,	// (0x00085d8f) cell_qdial_pane_g2_ParamLimits

0x5ed3,	// (0x00085d8f) cell_qdial_pane_g2

0x4116,	// (0x00083fd2) cell_qdial_pane_g3_ParamLimits

0x4116,	// (0x00083fd2) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0008f058) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0008f058) cell_qdial_pane_g

0x5ef1,	// (0x00085dad) cell_qdial_pane_t1_ParamLimits

0x5ef1,	// (0x00085dad) cell_qdial_pane_t1

0x5f09,	// (0x00085dc5) cell_qdial_pane_t2_ParamLimits

0x5f09,	// (0x00085dc5) cell_qdial_pane_t2

0x5f1c,	// (0x00085dd8) cell_qdial_pane_t3_ParamLimits

0x5f1c,	// (0x00085dd8) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0008f061) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0008f061) cell_qdial_pane_t

0x3d3d,	// (0x00083bf9) grid_highlight_pane_cp04

0x4122,	// (0x00083fde) thumbnail_qdial_pane_ParamLimits

0x4122,	// (0x00083fde) thumbnail_qdial_pane

0x417e,	// (0x0008403a) list_help_pane

0x4187,	// (0x00084043) scroll_pane_cp02

0x5f2f,	// (0x00085deb) help_list_pane_t1_ParamLimits

0x5f2f,	// (0x00085deb) help_list_pane_t1

0x5f59,	// (0x00085e15) bg_notes_pane_g2

0x5f61,	// (0x00085e1d) bg_notes_pane_g3

0x5f69,	// (0x00085e25) notes_bg_pane_g1

0x5f71,	// (0x00085e2d) notes_bg_pane_g4

0x5f79,	// (0x00085e35) notes_bg_pane_g5

0x5f81,	// (0x00085e3d) notes_bg_pane_g6

0x5f89,	// (0x00085e45) notes_bg_pane_g7

0x5f91,	// (0x00085e4d) notes_bg_pane_g8

0x5f99,	// (0x00085e55) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0008f07f) notes_bg_pane_g

0x5fa1,	// (0x00085e5d) list_notes_text_pane_ParamLimits

0x5fa1,	// (0x00085e5d) list_notes_text_pane

0x4190,	// (0x0008404c) list_notes_text_pane_g1

0x0416,	// (0x000802d2) list_notes_text_pane_t1

0x4083,	// (0x00083f3f) listscroll_cale_week_pane

0x5fdb,	// (0x00085e97) bg_cale_heading_pane

0x41aa,	// (0x00084066) bg_cale_pane_cp01

0x5fef,	// (0x00085eab) cale_week_corner_pane

0x6005,	// (0x00085ec1) cale_week_day_heading_pane

0x6019,	// (0x00085ed5) cale_week_scroll_pane_g1

0x602a,	// (0x00085ee6) cale_week_scroll_pane_g2

0x603b,	// (0x00085ef7) cale_week_scroll_pane_g3

0x604c,	// (0x00085f08) cale_week_scroll_pane_g4

0x605d,	// (0x00085f19) cale_week_scroll_pane_g5

0x606e,	// (0x00085f2a) cale_week_scroll_pane_g6

0x6081,	// (0x00085f3d) cale_week_scroll_pane_g7

0x6094,	// (0x00085f50) cale_week_scroll_pane_g8

0x60a7,	// (0x00085f63) cale_week_scroll_pane_g9

0x60b8,	// (0x00085f74) cale_week_scroll_pane_g10

0x60c9,	// (0x00085f85) cale_week_scroll_pane_g11

0x60da,	// (0x00085f96) cale_week_scroll_pane_g12

0x60eb,	// (0x00085fa7) cale_week_scroll_pane_g13

0x60fc,	// (0x00085fb8) cale_week_scroll_pane_g14

0x610d,	// (0x00085fc9) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0008f08e) cale_week_scroll_pane_g

0x611e,	// (0x00085fda) cale_week_time_pane

0x6131,	// (0x00085fed) grid_cale_week_pane

0x6146,	// (0x00086002) scroll_pane_cp08

0x6160,	// (0x0008601c) cell_cale_week_pane_ParamLimits

0x6160,	// (0x0008601c) cell_cale_week_pane

0x619e,	// (0x0008605a) cale_week_day_heading_pane_t1

0x61cb,	// (0x00086087) cale_week_day_heading_pane_t2

0x61f8,	// (0x000860b4) cale_week_day_heading_pane_t3

0x6225,	// (0x000860e1) cale_week_day_heading_pane_t4

0x6252,	// (0x0008610e) cale_week_day_heading_pane_t5

0x627f,	// (0x0008613b) cale_week_day_heading_pane_t6

0x62ac,	// (0x00086168) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0008f0ad) cale_week_day_heading_pane_t

0x41d5,	// (0x00084091) bg_cale_side_pane

0x62d9,	// (0x00086195) cale_week_time_pane_t1

0x6305,	// (0x000861c1) cale_week_time_pane_t2

0x6331,	// (0x000861ed) cale_week_time_pane_t3

0x635d,	// (0x00086219) cale_week_time_pane_t4

0x6389,	// (0x00086245) cale_week_time_pane_t5

0x63b5,	// (0x00086271) cale_week_time_pane_t6

0x63e1,	// (0x0008629d) cale_week_time_pane_t7

0x640d,	// (0x000862c9) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0008f0bc) cale_week_time_pane_t

0x6439,	// (0x000862f5) cell_cale_week_pane_g2

0x6452,	// (0x0008630e) cell_cale_week_pane_g3_ParamLimits

0x6452,	// (0x0008630e) cell_cale_week_pane_g3

0x41e3,	// (0x0008409f) grid_highlight_pane_cp07

0x41eb,	// (0x000840a7) listscroll_gms_pane

0x41f5,	// (0x000840b1) grid_gms_pane

0x41fe,	// (0x000840ba) listscroll_gms_pane_g1

0x4206,	// (0x000840c2) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0008f0cd) listscroll_gms_pane_g

0x646a,	// (0x00086326) scroll_pane_cp010

0x6475,	// (0x00086331) cell_gms_pane_ParamLimits

0x6475,	// (0x00086331) cell_gms_pane

0x6488,	// (0x00086344) cell_gms_pane_g1

0x420e,	// (0x000840ca) cell_gms_pane_g2

0x4216,	// (0x000840d2) cell_gms_pane_g3

0x421f,	// (0x000840db) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0008f0d2) cell_gms_pane_g

0x4228,	// (0x000840e4) grid_highlight_pane_cp09

0x87cf,	// (0x0008868b) phob_pre_status_pane_g1

0x87d7,	// (0x00088693) phob_pre_status_pane_g2

0x87df,	// (0x0008869b) phob_pre_status_pane_g3

0x87e7,	// (0x000886a3) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0008f4c1) phob_pre_status_pane_g

0x87f7,	// (0x000886b3) phob_pre_status_pane_t1

0x8807,	// (0x000886c3) phob_pre_status_pane_t2

0x8817,	// (0x000886d3) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0008f4cc) phob_pre_status_pane_t

0x3d3d,	// (0x00083bf9) bg_list_pane_cp05

0x6498,	// (0x00086354) grid_vorec_pane

0x64a2,	// (0x0008635e) vorec_t1

0x64b0,	// (0x0008636c) vorec_t2

0x64be,	// (0x0008637a) vorec_t3

0x64cc,	// (0x00086388) vorec_t4

0x64da,	// (0x00086396) vorec_t5

0x64e8,	// (0x000863a4) vorec_t6

0x0006,

0xf21f,	// (0x0008f0db) vorec_t

0x6504,	// (0x000863c0) wait_bar_pane_cp01

0x650c,	// (0x000863c8) cell_vorec_pane_ParamLimits

0x650c,	// (0x000863c8) cell_vorec_pane

0x4230,	// (0x000840ec) cell_vorec_pane_g1

0x3d3d,	// (0x00083bf9) grid_highlight_pane_cp05

0x6531,	// (0x000863ed) cams_zoom_pane

0x653d,	// (0x000863f9) image_vga_pane

0x654c,	// (0x00086408) main_camera_pane_g1

0x655a,	// (0x00086416) main_camera_pane_g2

0x6566,	// (0x00086422) main_camera_pane_g3

0x6574,	// (0x00086430) main_camera_pane_g4

0x6582,	// (0x0008643e) main_camera_pane_g5

0x6590,	// (0x0008644c) main_camera_pane_g6

0x659e,	// (0x0008645a) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0008f0ea) main_camera_pane_g

0x65ac,	// (0x00086468) main_camera_pane_t1

0x65be,	// (0x0008647a) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0008f0fb) main_camera_pane_t

0x65e1,	// (0x0008649d) cams_zoom_pane_cp_ParamLimits

0x65e1,	// (0x0008649d) cams_zoom_pane_cp

0x6605,	// (0x000864c1) image_cif_pane_ParamLimits

0x6605,	// (0x000864c1) image_cif_pane

0x6623,	// (0x000864df) image_subqcif_pane

0x662d,	// (0x000864e9) main_video_pane_g1_ParamLimits

0x662d,	// (0x000864e9) main_video_pane_g1

0x664d,	// (0x00086509) main_video_pane_g2_ParamLimits

0x664d,	// (0x00086509) main_video_pane_g2

0x667d,	// (0x00086539) main_video_pane_g3_ParamLimits

0x667d,	// (0x00086539) main_video_pane_g3

0x66a6,	// (0x00086562) main_video_pane_g4_ParamLimits

0x66a6,	// (0x00086562) main_video_pane_g4

0x66cf,	// (0x0008658b) main_video_pane_g5_ParamLimits

0x66cf,	// (0x0008658b) main_video_pane_g5

0x4246,	// (0x00084102) main_video_pane_g6_ParamLimits

0x4246,	// (0x00084102) main_video_pane_g6

0x0006,

0xf244,	// (0x0008f100) main_video_pane_g_ParamLimits

0xf244,	// (0x0008f100) main_video_pane_g

0x66f1,	// (0x000865ad) main_video_pane_t1_ParamLimits

0x66f1,	// (0x000865ad) main_video_pane_t1

0x4260,	// (0x0008411c) cams_zoom_pane_g1

0x4269,	// (0x00084125) cams_zoom_pane_g2

0x4272,	// (0x0008412e) cams_zoom_pane_g3

0x427b,	// (0x00084137) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0008f10f) cams_zoom_pane_g

0x673b,	// (0x000865f7) grid_cams_pane

0x6749,	// (0x00086605) linegrid_cams_pane

0x6757,	// (0x00086613) cell_cams_pane_ParamLimits

0x6757,	// (0x00086613) cell_cams_pane

0x4284,	// (0x00084140) cams_burst_image_pane

0x428c,	// (0x00084148) cell_cams_pane_g1

0x3d3d,	// (0x00083bf9) grid_highlight_pane_cp03

0x40d8,	// (0x00083f94) mp_bg_pane_g1

0x3d3d,	// (0x00083bf9) bg_list_pane_cp03

0xeef4,	// (0x0008edb0) bg_mp_pane

0xeefc,	// (0x0008edb8) grid_mp_pane

0xef04,	// (0x0008edc0) media_player_g1

0xef0e,	// (0x0008edca) media_player_t1

0xef1c,	// (0x0008edd8) media_player_t2

0xef2a,	// (0x0008ede6) media_player_t3

0xef38,	// (0x0008edf4) media_player_t4

0xef46,	// (0x0008ee02) media_player_t5

0xef54,	// (0x0008ee10) media_player_t6

0xef62,	// (0x0008ee1e) media_player_t7

0x0006,

0xf5ef,	// (0x0008f4ab) media_player_t

0xef70,	// (0x0008ee2c) wait_bar_pane_cp02

0xf5d4,	// (0x0008f490) main_usb_pane_t

0x87c6,	// (0x00088682) cell_mp_pane

0x40d8,	// (0x00083f94) cell_mp_pane_g1

0x3d3d,	// (0x00083bf9) grid_highlight_pane_cp06

0x4294,	// (0x00084150) grid_skin_colour_pane

0x429c,	// (0x00084158) list_highlight_pane_cp03

0x67c3,	// (0x0008667f) skin_g1

0x42a4,	// (0x00084160) skin_t1

0x42b3,	// (0x0008416f) skin_t2

0x0001,

0xf288,	// (0x0008f144) skin_t

0x67cd,	// (0x00086689) cell_skin_colour_pane_ParamLimits

0x67cd,	// (0x00086689) cell_skin_colour_pane

0x42c1,	// (0x0008417d) cell_skin_colour_pane_g1

0x684d,	// (0x00086709) call_video_g1_ParamLimits

0x684d,	// (0x00086709) call_video_g1

0x685d,	// (0x00086719) call_video_g2_ParamLimits

0x685d,	// (0x00086719) call_video_g2

0x0001,

0xf28d,	// (0x0008f149) call_video_g_ParamLimits

0xf28d,	// (0x0008f149) call_video_g

0x68ad,	// (0x00086769) call_video_uplink_pane_cp1_ParamLimits

0x68ad,	// (0x00086769) call_video_uplink_pane_cp1

0x42d3,	// (0x0008418f) call_video_uplink_pane_cp2

0x697b,	// (0x00086837) video_down_crop_pane_ParamLimits

0x697b,	// (0x00086837) video_down_crop_pane

0x6a6d,	// (0x00086929) video_down_pane_ParamLimits

0x6a6d,	// (0x00086929) video_down_pane

0x42db,	// (0x00084197) video_down_subqcif_pane_ParamLimits

0x42db,	// (0x00084197) video_down_subqcif_pane

0x42f5,	// (0x000841b1) video_down_subqcif_pane_cp_ParamLimits

0x42f5,	// (0x000841b1) video_down_subqcif_pane_cp

0x431b,	// (0x000841d7) im_reading_pane_ParamLimits

0x431b,	// (0x000841d7) im_reading_pane

0x6b8a,	// (0x00086a46) im_writing_pane_ParamLimits

0x6b8a,	// (0x00086a46) im_writing_pane

0x6ba8,	// (0x00086a64) im_reading_pane_t1

0x4335,	// (0x000841f1) list_im_pane

0x4346,	// (0x00084202) scroll_pane_cp07

0x6bf0,	// (0x00086aac) im_writing_pane_t1_ParamLimits

0x6bf0,	// (0x00086aac) im_writing_pane_t1

0x435f,	// (0x0008421b) im_writing_pane_t2_ParamLimits

0x435f,	// (0x0008421b) im_writing_pane_t2

0x0001,

0xf297,	// (0x0008f153) im_writing_pane_t_ParamLimits

0xf297,	// (0x0008f153) im_writing_pane_t

0x3d3d,	// (0x00083bf9) input_focus_pane_cp04

0x3d3d,	// (0x00083bf9) input_focus_pane_cp05

0x6c02,	// (0x00086abe) list_im_single_pane_ParamLimits

0x6c02,	// (0x00086abe) list_im_single_pane

0x6c1e,	// (0x00086ada) list_single_im_pane_t1

0x878a,	// (0x00088646) blid_accuracy_pane

0x8792,	// (0x0008864e) blid_compass_pane

0x879c,	// (0x00088658) main_location_t1

0x87aa,	// (0x00088666) main_location_t2

0x87b8,	// (0x00088674) main_location_t3

0x0002,

0xf5fe,	// (0x0008f4ba) main_location_t

0x3d3d,	// (0x00083bf9) aid_levels_location

0x40d8,	// (0x00083f94) blid_accuracy_pane_g1

0x40d8,	// (0x00083f94) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0008f1b5) blid_accuracy_pane_g

0x43a7,	// (0x00084263) wml_content_pane

0x43e5,	// (0x000842a1) wml_button_pane_ParamLimits

0x43e5,	// (0x000842a1) wml_button_pane

0x6c2d,	// (0x00086ae9) wml_list_single_large_pane_ParamLimits

0x6c2d,	// (0x00086ae9) wml_list_single_large_pane

0x6c4f,	// (0x00086b0b) wml_list_single_medium_pane_ParamLimits

0x6c4f,	// (0x00086b0b) wml_list_single_medium_pane

0x6c75,	// (0x00086b31) wml_list_single_small_pane_ParamLimits

0x6c75,	// (0x00086b31) wml_list_single_small_pane

0x43f9,	// (0x000842b5) wml_selection_box_pane_ParamLimits

0x43f9,	// (0x000842b5) wml_selection_box_pane

0x440c,	// (0x000842c8) wml_list_single_pane_t1

0x441b,	// (0x000842d7) wml_list_single_medium_pane_t1

0x442a,	// (0x000842e6) wml_list_single_large_pane_t1

0x4439,	// (0x000842f5) input_focus_pane_cp02_ParamLimits

0x4439,	// (0x000842f5) input_focus_pane_cp02

0x444c,	// (0x00084308) wml_selection_box_pane_g1

0x4455,	// (0x00084311) wml_selection_box_pane_t1_ParamLimits

0x4455,	// (0x00084311) wml_selection_box_pane_t1

0x3fb8,	// (0x00083e74) bg_wml_button_pane_ParamLimits

0x3fb8,	// (0x00083e74) bg_wml_button_pane

0x446d,	// (0x00084329) wml_button_pane_g1

0x4475,	// (0x00084331) wml_button_pane_t1

0x446d,	// (0x00084329) wml_button_bg_pane_g1

0x4485,	// (0x00084341) wml_button_bg_pane_g2

0x448d,	// (0x00084349) wml_button_bg_pane_g3

0x4495,	// (0x00084351) wml_button_bg_pane_g4

0x449d,	// (0x00084359) wml_button_bg_pane_g5

0x44a5,	// (0x00084361) wml_button_bg_pane_g6

0x44ad,	// (0x00084369) wml_button_bg_pane_g7

0x44b5,	// (0x00084371) wml_button_bg_pane_g8

0x44bd,	// (0x00084379) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0008f158) wml_button_bg_pane_g

0x6ca0,	// (0x00086b5c) bg_list_pane_cp02

0x44c5,	// (0x00084381) mce_header_pane_ParamLimits

0x44c5,	// (0x00084381) mce_header_pane

0x44db,	// (0x00084397) mce_icon_pane

0x44db,	// (0x00084397) mce_image_pane

0x44e4,	// (0x000843a0) mce_text_pane_ParamLimits

0x44e4,	// (0x000843a0) mce_text_pane

0x6caa,	// (0x00086b66) scroll_pane_cp03

0x43dd,	// (0x00084299) scroll_pane_cp04

0x44f7,	// (0x000843b3) scroll_pane_cp05_ParamLimits

0x44f7,	// (0x000843b3) scroll_pane_cp05

0x6cb4,	// (0x00086b70) mce_header_field_pane_ParamLimits

0x6cb4,	// (0x00086b70) mce_header_field_pane

0x6cd6,	// (0x00086b92) mce_header_field_pane_2_ParamLimits

0x6cd6,	// (0x00086b92) mce_header_field_pane_2

0x6cec,	// (0x00086ba8) mce_header_field_pane_3

0x6cf4,	// (0x00086bb0) list_single_mce_message_pane_ParamLimits

0x6cf4,	// (0x00086bb0) list_single_mce_message_pane

0x6d13,	// (0x00086bcf) list_single_mce_smart_pane_ParamLimits

0x6d13,	// (0x00086bcf) list_single_mce_smart_pane

0x4503,	// (0x000843bf) input_focus_pane_cp03

0x450c,	// (0x000843c8) list_header_data_pane

0x6d3d,	// (0x00086bf9) mce_header_field_pane_t1

0x6d4d,	// (0x00086c09) list_single_mce_header_pane_ParamLimits

0x6d4d,	// (0x00086c09) list_single_mce_header_pane

0x4514,	// (0x000843d0) list_single_mce_header_pane_t1

0x4523,	// (0x000843df) list_single_mce_message_pane_g1

0x452b,	// (0x000843e7) list_single_mce_message_pane_t1

0x6d89,	// (0x00086c45) bg_cale_heading_pane_cp01_ParamLimits

0x6d89,	// (0x00086c45) bg_cale_heading_pane_cp01

0x4539,	// (0x000843f5) bg_cale_pane_cp02_ParamLimits

0x4539,	// (0x000843f5) bg_cale_pane_cp02

0x6dac,	// (0x00086c68) cale_month_corner_pane

0x6dc2,	// (0x00086c7e) cale_month_day_heading_pane_ParamLimits

0x6dc2,	// (0x00086c7e) cale_month_day_heading_pane

0x6df5,	// (0x00086cb1) cale_month_pane_g1_ParamLimits

0x6df5,	// (0x00086cb1) cale_month_pane_g1

0x6e11,	// (0x00086ccd) cale_month_pane_g2_ParamLimits

0x6e11,	// (0x00086ccd) cale_month_pane_g2

0x6e2c,	// (0x00086ce8) cale_month_pane_g3_ParamLimits

0x6e2c,	// (0x00086ce8) cale_month_pane_g3

0x6e58,	// (0x00086d14) cale_month_pane_g4_ParamLimits

0x6e58,	// (0x00086d14) cale_month_pane_g4

0x6e84,	// (0x00086d40) cale_month_pane_g5_ParamLimits

0x6e84,	// (0x00086d40) cale_month_pane_g5

0x6eb0,	// (0x00086d6c) cale_month_pane_g6_ParamLimits

0x6eb0,	// (0x00086d6c) cale_month_pane_g6

0x6eec,	// (0x00086da8) cale_month_pane_g7_ParamLimits

0x6eec,	// (0x00086da8) cale_month_pane_g7

0x6f28,	// (0x00086de4) cale_month_pane_g8_ParamLimits

0x6f28,	// (0x00086de4) cale_month_pane_g8

0x6f64,	// (0x00086e20) cale_month_pane_g9_ParamLimits

0x6f64,	// (0x00086e20) cale_month_pane_g9

0x6f9e,	// (0x00086e5a) cale_month_pane_g10_ParamLimits

0x6f9e,	// (0x00086e5a) cale_month_pane_g10

0x6fd8,	// (0x00086e94) cale_month_pane_g11_ParamLimits

0x6fd8,	// (0x00086e94) cale_month_pane_g11

0x7012,	// (0x00086ece) cale_month_pane_g12_ParamLimits

0x7012,	// (0x00086ece) cale_month_pane_g12

0x704c,	// (0x00086f08) cale_month_pane_g13_ParamLimits

0x704c,	// (0x00086f08) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0008f16b) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0008f16b) cale_month_pane_g

0x7086,	// (0x00086f42) cale_month_week_pane

0x7099,	// (0x00086f55) grid_cale_month_pane_ParamLimits

0x7099,	// (0x00086f55) grid_cale_month_pane

0x70c7,	// (0x00086f83) cale_month_day_heading_pane_t1

0x7125,	// (0x00086fe1) cale_month_day_heading_pane_t2

0x718a,	// (0x00087046) cale_month_day_heading_pane_t3

0x71ef,	// (0x000870ab) cale_month_day_heading_pane_t4

0x7254,	// (0x00087110) cale_month_day_heading_pane_t5

0x72c1,	// (0x0008717d) cale_month_day_heading_pane_t6

0x7336,	// (0x000871f2) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0008f186) cale_month_day_heading_pane_t

0x41d5,	// (0x00084091) bg_cale_side_pane_cp01

0x73ab,	// (0x00087267) cale_month_week_pane_t1

0x73d6,	// (0x00087292) cale_month_week_pane_t2

0x7401,	// (0x000872bd) cale_month_week_pane_t3

0x742c,	// (0x000872e8) cale_month_week_pane_t4

0x7457,	// (0x00087313) cale_month_week_pane_t5

0x7482,	// (0x0008733e) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0008f195) cale_month_week_pane_t

0x74ad,	// (0x00087369) cell_cale_month_pane_ParamLimits

0x74ad,	// (0x00087369) cell_cale_month_pane

0x757b,	// (0x00087437) cell_cale_month_pane_g1

0x7587,	// (0x00087443) cell_cale_month_pane_t1_ParamLimits

0x7587,	// (0x00087443) cell_cale_month_pane_t1

0x41e3,	// (0x0008409f) grid_highlight_pane_cp08

0x40d8,	// (0x00083f94) main_smil_g1

0x75a3,	// (0x0008745f) smil_status_pane

0x456e,	// (0x0008442a) smil_text_pane

0xee12,	// (0x0008ecce) bg_popup_call3_rect_pane_g8

0xee1a,	// (0x0008ecd6) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0008f44e) bg_popup_call3_rect_pane_g

0xf0af,	// (0x0008ef6b) smil_status_volume_pane_g1

0x4578,	// (0x00084434) smil_status_pane_t1

0x8b6b,	// (0x00088a27) volume_smil_pane

0x458f,	// (0x0008444b) list_smil_text_pane

0x75b6,	// (0x00087472) scroll_pane_cp011

0x75c1,	// (0x0008747d) smil_text_list_pane_t1_ParamLimits

0x75c1,	// (0x0008747d) smil_text_list_pane_t1

0x7625,	// (0x000874e1) aid_volume_smil_ParamLimits

0x7625,	// (0x000874e1) aid_volume_smil

0x40d8,	// (0x00083f94) smil_volume_pane_g1

0x40d8,	// (0x00083f94) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0008f1b5) smil_volume_pane_g

0x4083,	// (0x00083f3f) listscroll_cale_day_pane

0x4599,	// (0x00084455) bg_cale_pane

0x45b1,	// (0x0008446d) list_cale_pane

0x45c2,	// (0x0008447e) scroll_pane_cp09

0x45d3,	// (0x0008448f) cale_bg_pane_g1

0x45db,	// (0x00084497) cale_bg_pane_g2

0x45e3,	// (0x0008449f) cale_bg_pane_g3

0x45eb,	// (0x000844a7) cale_bg_pane_g4

0x45f3,	// (0x000844af) cale_bg_pane_g5

0x45fb,	// (0x000844b7) cale_bg_pane_g6

0x4603,	// (0x000844bf) cale_bg_pane_g7

0x460b,	// (0x000844c7) cale_bg_pane_g8

0x4613,	// (0x000844cf) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0008f1ba) cale_bg_pane_g

0x7647,	// (0x00087503) list_cale_time_pane_ParamLimits

0x7647,	// (0x00087503) list_cale_time_pane

0x765f,	// (0x0008751b) list_cale_time_pane_g1_ParamLimits

0x765f,	// (0x0008751b) list_cale_time_pane_g1

0x461b,	// (0x000844d7) list_cale_time_pane_g2_ParamLimits

0x461b,	// (0x000844d7) list_cale_time_pane_g2

0x766b,	// (0x00087527) list_cale_time_pane_g3_ParamLimits

0x766b,	// (0x00087527) list_cale_time_pane_g3

0x7679,	// (0x00087535) list_cale_time_pane_g4_ParamLimits

0x7679,	// (0x00087535) list_cale_time_pane_g4

0x7687,	// (0x00087543) list_cale_time_pane_g5_ParamLimits

0x7687,	// (0x00087543) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0008f1cd) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0008f1cd) list_cale_time_pane_g

0x7695,	// (0x00087551) list_cale_time_pane_t1_ParamLimits

0x7695,	// (0x00087551) list_cale_time_pane_t1

0x76bd,	// (0x00087579) list_cale_time_pane_t2_ParamLimits

0x76bd,	// (0x00087579) list_cale_time_pane_t2

0x7a2c,	// (0x000878e8) aid_blid_cardinal_pane

0x7a6e,	// (0x0008792a) compass_pane_t4

0x76e5,	// (0x000875a1) list_cale_time_pane_t4_ParamLimits

0x76e5,	// (0x000875a1) list_cale_time_pane_t4

0x7a7c,	// (0x00087938) compass_pane_t5

0x7a8c,	// (0x00087948) compass_pane_t6

0x7a9a,	// (0x00087956) compass_pane_t7

0xdb18,	// (0x0008d9d4) navi_pane_cc_t1

0xdc6d,	// (0x0008db29) aid_phob_thumbnail_center_pane

0x8280,	// (0x0008813c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0008f1da) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0008f1da) list_cale_time_pane_t

0x030c,	// (0x000801c8) bg_popup_window_pane_cp02_ParamLimits

0x030c,	// (0x000801c8) bg_popup_window_pane_cp02

0x4635,	// (0x000844f1) heading_pane_cp01_ParamLimits

0x4635,	// (0x000844f1) heading_pane_cp01

0x4641,	// (0x000844fd) loc_req_pane_ParamLimits

0x4641,	// (0x000844fd) loc_req_pane

0x4651,	// (0x0008450d) loc_type_pane_ParamLimits

0x4651,	// (0x0008450d) loc_type_pane

0x4663,	// (0x0008451f) loc_type_pane_t1_ParamLimits

0x4663,	// (0x0008451f) loc_type_pane_t1

0x4675,	// (0x00084531) loc_type_pane_t2_ParamLimits

0x4675,	// (0x00084531) loc_type_pane_t2

0x4687,	// (0x00084543) loc_type_pane_t3_ParamLimits

0x4687,	// (0x00084543) loc_type_pane_t3

0x0002,

0xf325,	// (0x0008f1e1) loc_type_pane_t_ParamLimits

0xf325,	// (0x0008f1e1) loc_type_pane_t

0x4699,	// (0x00084555) list_loc_req_pane

0x46a3,	// (0x0008455f) scroll_pane_cp012

0x770d,	// (0x000875c9) list_single_loc_request_popup_menu_pane_ParamLimits

0x770d,	// (0x000875c9) list_single_loc_request_popup_menu_pane

0x46ae,	// (0x0008456a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x46ae,	// (0x0008456a) list_single_loc_request_popup_menu_pane_g1

0x46ba,	// (0x00084576) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x46ba,	// (0x00084576) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0008f1e8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0008f1e8) list_single_loc_request_popup_menu_pane_g

0x46c6,	// (0x00084582) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x46c6,	// (0x00084582) list_single_loc_request_popup_menu_pane_t1

0x771f,	// (0x000875db) bg_popup_window_pane_cp03_ParamLimits

0x771f,	// (0x000875db) bg_popup_window_pane_cp03

0x772d,	// (0x000875e9) heading_loc_req_pane_ParamLimits

0x772d,	// (0x000875e9) heading_loc_req_pane

0x7739,	// (0x000875f5) popup_dyc_status_message_window_g1_ParamLimits

0x7739,	// (0x000875f5) popup_dyc_status_message_window_g1

0x7745,	// (0x00087601) popup_dyc_status_message_window_t1_ParamLimits

0x7745,	// (0x00087601) popup_dyc_status_message_window_t1

0x7757,	// (0x00087613) popup_dyc_status_message_window_t2_ParamLimits

0x7757,	// (0x00087613) popup_dyc_status_message_window_t2

0x7769,	// (0x00087625) popup_dyc_status_message_window_t3_ParamLimits

0x7769,	// (0x00087625) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0008f1ed) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0008f1ed) popup_dyc_status_message_window_t

0x3d3d,	// (0x00083bf9) bg_heading_pane_cp01

0x46e8,	// (0x000845a4) heading_loc_req_pane_g1

0x46f0,	// (0x000845ac) heading_loc_req_pane_g2

0x46f8,	// (0x000845b4) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0008f1f4) heading_loc_req_pane_g

0x4700,	// (0x000845bc) heading_loc_req_pane_t1

0x4710,	// (0x000845cc) bg_popup_sub_pane_cp01_ParamLimits

0x4710,	// (0x000845cc) bg_popup_sub_pane_cp01

0x471e,	// (0x000845da) popup_cale_events_window_g1_ParamLimits

0x471e,	// (0x000845da) popup_cale_events_window_g1

0x473e,	// (0x000845fa) popup_cale_events_window_g2_ParamLimits

0x473e,	// (0x000845fa) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0008f228) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0008f228) popup_cale_events_window_g

0x475e,	// (0x0008461a) popup_cale_events_window_t1_ParamLimits

0x475e,	// (0x0008461a) popup_cale_events_window_t1

0x4770,	// (0x0008462c) popup_cale_events_window_t2_ParamLimits

0x4770,	// (0x0008462c) popup_cale_events_window_t2

0x47ae,	// (0x0008466a) popup_cale_events_window_t3_ParamLimits

0x47ae,	// (0x0008466a) popup_cale_events_window_t3

0x47e8,	// (0x000846a4) popup_cale_events_window_t4_ParamLimits

0x47e8,	// (0x000846a4) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0008f22d) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0008f22d) popup_cale_events_window_t

0x77ed,	// (0x000876a9) call_type_pane

0xd96a,	// (0x0008d826) popup_call_status_window_g1

0x77f9,	// (0x000876b5) popup_call_status_window_g2

0x7805,	// (0x000876c1) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0008f236) popup_call_status_window_g

0x481e,	// (0x000846da) call_type_pane_g1

0x4827,	// (0x000846e3) call_type_pane_g2

0x0001,

0xf381,	// (0x0008f23d) call_type_pane_g

0x3d3d,	// (0x00083bf9) bg_popup_sub_pane_cp02

0x4830,	// (0x000846ec) listscroll_popup_wml_pane

0x4838,	// (0x000846f4) list_wml_pane

0x4842,	// (0x000846fe) scroll_pane_cp013

0x484d,	// (0x00084709) list_single_graphic_popup_wml_pane_ParamLimits

0x484d,	// (0x00084709) list_single_graphic_popup_wml_pane

0x40d8,	// (0x00083f94) list_single_graphic_popup_wml_pane_g1

0x4861,	// (0x0008471d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0008f242) list_single_graphic_popup_wml_pane_g

0x4869,	// (0x00084725) list_single_graphic_popup_wml_pane_t1

0x4877,	// (0x00084733) aid_call_pane

0x3fb0,	// (0x00083e6c) popup_clock_analogue_window_g1

0x3fb0,	// (0x00083e6c) popup_clock_analogue_window_g2

0x7811,	// (0x000876cd) popup_clock_analogue_window_g3

0x7811,	// (0x000876cd) popup_clock_analogue_window_g4

0x40d8,	// (0x00083f94) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0008f247) popup_clock_analogue_window_g

0x7819,	// (0x000876d5) popup_clock_analogue_window_t1

0x7827,	// (0x000876e3) clock_digital_number_pane_ParamLimits

0x7827,	// (0x000876e3) clock_digital_number_pane

0x7833,	// (0x000876ef) clock_digital_number_pane_cp02_ParamLimits

0x7833,	// (0x000876ef) clock_digital_number_pane_cp02

0x783f,	// (0x000876fb) clock_digital_number_pane_cp03_ParamLimits

0x783f,	// (0x000876fb) clock_digital_number_pane_cp03

0x784b,	// (0x00087707) clock_digital_number_pane_cp04_ParamLimits

0x784b,	// (0x00087707) clock_digital_number_pane_cp04

0x7857,	// (0x00087713) clock_digital_separator_pane_ParamLimits

0x7857,	// (0x00087713) clock_digital_separator_pane

0x7863,	// (0x0008771f) popup_clock_digital_window_t1

0x40d8,	// (0x00083f94) clock_digital_number_pane_g1

0x40d8,	// (0x00083f94) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0008f1b5) clock_digital_number_pane_g

0x40d8,	// (0x00083f94) clock_digital_separator_pane_g1

0x40d8,	// (0x00083f94) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0008f1b5) clock_digital_separator_pane_g

0x3d3d,	// (0x00083bf9) bg_popup_window_pane_cp04

0xd978,	// (0x0008d834) heading_pane_cp03

0xd980,	// (0x0008d83c) listscroll_popup_gms_pane

0xd988,	// (0x0008d844) grid_large_graphic_popup_pane

0xd992,	// (0x0008d84e) listscroll_popup_gms_pane_g1

0xd99a,	// (0x0008d856) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0008f252) listscroll_popup_gms_pane_g

0x43dd,	// (0x00084299) scroll_pane_cp014

0x7880,	// (0x0008773c) cell_large_graphic_popup_pane_ParamLimits

0x7880,	// (0x0008773c) cell_large_graphic_popup_pane

0x789a,	// (0x00087756) cell_large_graphic_popup_pane_g1_ParamLimits

0x789a,	// (0x00087756) cell_large_graphic_popup_pane_g1

0xd9a2,	// (0x0008d85e) cell_large_graphic_popup_pane_g2_ParamLimits

0xd9a2,	// (0x0008d85e) cell_large_graphic_popup_pane_g2

0xd9ae,	// (0x0008d86a) cell_large_graphic_popup_pane_g3_ParamLimits

0xd9ae,	// (0x0008d86a) cell_large_graphic_popup_pane_g3

0xd9bb,	// (0x0008d877) cell_large_graphic_popup_pane_g4_ParamLimits

0xd9bb,	// (0x0008d877) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0008f257) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0008f257) cell_large_graphic_popup_pane_g

0xd9cb,	// (0x0008d887) grid_highlight_pane_cp010

0x40d8,	// (0x00083f94) bg_popup_call_pane_g1

0xd9d5,	// (0x0008d891) list_single_graphic_popup_conf_pane_ParamLimits

0xd9d5,	// (0x0008d891) list_single_graphic_popup_conf_pane

0xd9e7,	// (0x0008d8a3) list_highlight_pane_cp01

0xd9f0,	// (0x0008d8ac) list_single_graphic_popup_conf_pane_g1

0xd9f8,	// (0x0008d8b4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0008f260) list_single_graphic_popup_conf_pane_g

0xda00,	// (0x0008d8bc) list_single_graphic_popup_conf_pane_t1

0xda0e,	// (0x0008d8ca) linegrid_cams_pane_g1

0x78a6,	// (0x00087762) linegrid_cams_pane_g2

0x4216,	// (0x000840d2) linegrid_cams_pane_g3

0xda17,	// (0x0008d8d3) linegrid_cams_pane_g4

0x78af,	// (0x0008776b) linegrid_cams_pane_g5

0x78b8,	// (0x00087774) linegrid_cams_pane_g6

0x421f,	// (0x000840db) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0008f265) linegrid_cams_pane_g

0xda20,	// (0x0008d8dc) popup_clock_analogue_window

0xda20,	// (0x0008d8dc) popup_clock_digital_window

0x3d3d,	// (0x00083bf9) popup_phob_thumbnail_window

0x40d8,	// (0x00083f94) call_video_uplink_pane_g1

0xda29,	// (0x0008d8e5) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0008f274) call_video_uplink_pane_g

0xda31,	// (0x0008d8ed) video_uplink_pane

0xda39,	// (0x0008d8f5) mce_image_pane_g1

0x78c3,	// (0x0008777f) mce_image_pane_g2

0x78cd,	// (0x00087789) mce_image_pane_g3

0x78d7,	// (0x00087793) mce_image_pane_g4

0x78df,	// (0x0008779b) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0008f279) mce_image_pane_g

0xda43,	// (0x0008d8ff) control_top_pane_stacon_cp01_ParamLimits

0xda43,	// (0x0008d8ff) control_top_pane_stacon_cp01

0xda57,	// (0x0008d913) uni_indicator_pane_stacon_cp01_ParamLimits

0xda57,	// (0x0008d913) uni_indicator_pane_stacon_cp01

0xda68,	// (0x0008d924) bg_popup_sub_pane_cp03

0x78e7,	// (0x000877a3) chi_dic_find_pane

0x78ef,	// (0x000877ab) listscroll_chi_dic_pane

0x78f8,	// (0x000877b4) main_pane_chidic_g1

0x790b,	// (0x000877c7) chi_dic_find_pane_t1

0xda72,	// (0x0008d92e) find_chidic_pane

0xda7b,	// (0x0008d937) chi_dic_list_pane_ParamLimits

0xda7b,	// (0x0008d937) chi_dic_list_pane

0xda8c,	// (0x0008d948) scroll_pane_cp020

0x7919,	// (0x000877d5) find_chidic_pane_t1

0x3d3d,	// (0x00083bf9) input_focus_pane_cp06

0x7928,	// (0x000877e4) list_chi_dic_pane_ParamLimits

0x7928,	// (0x000877e4) list_chi_dic_pane

0x7940,	// (0x000877fc) list_chi_dic_pane_t1_ParamLimits

0x7940,	// (0x000877fc) list_chi_dic_pane_t1

0x3d3d,	// (0x00083bf9) list_highlight_pane_cp020

0xda94,	// (0x0008d950) bg_cale_heading_pane_g1

0x7953,	// (0x0008780f) bg_cale_heading_pane_g2

0x795b,	// (0x00087817) bg_cale_heading_pane_g3

0x7963,	// (0x0008781f) bg_cale_heading_pane_g4

0x796d,	// (0x00087829) bg_cale_heading_pane_g5

0x7977,	// (0x00087833) bg_cale_heading_pane_g6

0x797f,	// (0x0008783b) bg_cale_heading_pane_g7

0x7987,	// (0x00087843) bg_cale_heading_pane_g8

0x7991,	// (0x0008784d) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0008f284) bg_cale_heading_pane_g

0xda94,	// (0x0008d950) bg_cale_side_pane_g1

0x799b,	// (0x00087857) bg_cale_side_pane_g2

0x79a3,	// (0x0008785f) bg_cale_side_pane_g3

0x79ab,	// (0x00087867) bg_cale_side_pane_g4

0x79b3,	// (0x0008786f) bg_cale_side_pane_g5

0x79bb,	// (0x00087877) bg_cale_side_pane_g6

0x79c3,	// (0x0008787f) bg_cale_side_pane_g7

0x79cb,	// (0x00087887) bg_cale_side_pane_g8

0x79d3,	// (0x0008788f) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0008f297) bg_cale_side_pane_g

0x79db,	// (0x00087897) popup_call_status_window_ParamLimits

0x79db,	// (0x00087897) popup_call_status_window

0xda9c,	// (0x0008d958) stacon_top_pane

0xdaa4,	// (0x0008d960) status_pane_ParamLimits

0xdaa4,	// (0x0008d960) status_pane

0xdab9,	// (0x0008d975) status_small_pane

0xdac1,	// (0x0008d97d) control_pane

0x3d3d,	// (0x00083bf9) stacon_bottom_pane

0xdac9,	// (0x0008d985) list_single_mce_smart_pane_t1_ParamLimits

0xdac9,	// (0x0008d985) list_single_mce_smart_pane_t1

0xdadc,	// (0x0008d998) list_single_mce_smart_pane_t2_ParamLimits

0xdadc,	// (0x0008d998) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0008f2aa) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0008f2aa) list_single_mce_smart_pane_t

0x79e7,	// (0x000878a3) compass_pane

0x79f2,	// (0x000878ae) main_location2_pane_t1

0x7a06,	// (0x000878c2) main_location2_pane_t2

0x7a06,	// (0x000878c2) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0008f2af) main_location2_pane_t

0xdafb,	// (0x0008d9b7) compass_pane_g1_ParamLimits

0xdafb,	// (0x0008d9b7) compass_pane_g1

0x7a50,	// (0x0008790c) compass_pane_t1

0x7a5f,	// (0x0008791b) compass_pane_t2

0x0005,

0xf3fc,	// (0x0008f2b8) compass_pane_t

0x7aaa,	// (0x00087966) text_secondary_cp61

0xdb0f,	// (0x0008d9cb) navi_pane_cams_g5

0xdb32,	// (0x0008d9ee) navi_pane_im_t1

0xdb40,	// (0x0008d9fc) navi_pane_mp_g1_ParamLimits

0xdb40,	// (0x0008d9fc) navi_pane_mp_g1

0xdb54,	// (0x0008da10) navi_pane_mp_g2_ParamLimits

0xdb54,	// (0x0008da10) navi_pane_mp_g2

0xdb60,	// (0x0008da1c) navi_pane_mp_g3_ParamLimits

0xdb60,	// (0x0008da1c) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0008f2cc) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0008f2cc) navi_pane_mp_g

0xdb6c,	// (0x0008da28) navi_pane_mp_t1

0xdb7a,	// (0x0008da36) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0008f2d3) navi_pane_mp_t

0xdbb6,	// (0x0008da72) navi_pane_vt_g1

0xdb6c,	// (0x0008da28) navi_pane_vt_t1

0xdbbe,	// (0x0008da7a) navi_slider_pane

0xdbc6,	// (0x0008da82) zooming_pane

0xdbce,	// (0x0008da8a) navi_slider_pane_g1

0x7bc1,	// (0x00087a7d) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0008f2da) navi_slider_pane_g

0xdbf2,	// (0x0008daae) aid_levels_zoom

0xdbfa,	// (0x0008dab6) zooming_pane_g1

0xdc02,	// (0x0008dabe) zooming_pane_g2

0xdc02,	// (0x0008dabe) zooming_pane_g3

0x0002,

0xf42d,	// (0x0008f2e9) zooming_pane_g

0xdc0a,	// (0x0008dac6) level_10_zoom

0xdc13,	// (0x0008dacf) level_11_zoom

0xdc1c,	// (0x0008dad8) level_1_zoom

0xdc25,	// (0x0008dae1) level_2_zoom

0xdc2e,	// (0x0008daea) level_3_zoom

0xdc37,	// (0x0008daf3) level_4_zoom

0xdc40,	// (0x0008dafc) level_5_zoom

0xdc49,	// (0x0008db05) level_6_zoom

0xdc52,	// (0x0008db0e) level_7_zoom

0xdc5b,	// (0x0008db17) level_8_zoom

0xdc64,	// (0x0008db20) level_9_zoom

0xdc75,	// (0x0008db31) popup_phob_thumbnail_window_g1

0xdc7d,	// (0x0008db39) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0008f2f0) popup_phob_thumbnail_window_g

0xef78,	// (0x0008ee34) level_1_location

0xef80,	// (0x0008ee3c) level_2_location

0xef88,	// (0x0008ee44) level_3_location

0xef90,	// (0x0008ee4c) level_4_location

0xdbc6,	// (0x0008da82) level_5_location

0x7bd3,	// (0x00087a8f) mce_icon_pane_g1

0x7bdb,	// (0x00087a97) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0008f2f5) mce_icon_pane_g

0x7be3,	// (0x00087a9f) main_mup_pane_g1_ParamLimits

0x7be3,	// (0x00087a9f) main_mup_pane_g1

0x7bfb,	// (0x00087ab7) main_mup_pane_g2_ParamLimits

0x7bfb,	// (0x00087ab7) main_mup_pane_g2

0x7c17,	// (0x00087ad3) main_mup_pane_g3_ParamLimits

0x7c17,	// (0x00087ad3) main_mup_pane_g3

0x7c33,	// (0x00087aef) main_mup_pane_g4_ParamLimits

0x7c33,	// (0x00087aef) main_mup_pane_g4

0x7c47,	// (0x00087b03) main_mup_pane_g5_ParamLimits

0x7c47,	// (0x00087b03) main_mup_pane_g5

0x7c68,	// (0x00087b24) main_mup_pane_g6_ParamLimits

0x7c68,	// (0x00087b24) main_mup_pane_g6

0x7c88,	// (0x00087b44) main_mup_pane_g7_ParamLimits

0x7c88,	// (0x00087b44) main_mup_pane_g7

0x7cac,	// (0x00087b68) main_mup_pane_g8_ParamLimits

0x7cac,	// (0x00087b68) main_mup_pane_g8

0x7cd0,	// (0x00087b8c) main_mup_pane_g9_ParamLimits

0x7cd0,	// (0x00087b8c) main_mup_pane_g9

0x7cf3,	// (0x00087baf) main_mup_pane_g10_ParamLimits

0x7cf3,	// (0x00087baf) main_mup_pane_g10

0x7d16,	// (0x00087bd2) main_mup_pane_g11_ParamLimits

0x7d16,	// (0x00087bd2) main_mup_pane_g11

0x7d36,	// (0x00087bf2) main_mup_pane_g12_ParamLimits

0x7d36,	// (0x00087bf2) main_mup_pane_g12

0x7d44,	// (0x00087c00) main_mup_pane_g13_ParamLimits

0x7d44,	// (0x00087c00) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0008f2fa) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0008f2fa) main_mup_pane_g

0x7d5a,	// (0x00087c16) main_mup_pane_t1_ParamLimits

0x7d5a,	// (0x00087c16) main_mup_pane_t1

0x7d79,	// (0x00087c35) main_mup_pane_t2_ParamLimits

0x7d79,	// (0x00087c35) main_mup_pane_t2

0x7d93,	// (0x00087c4f) main_mup_pane_t3_ParamLimits

0x7d93,	// (0x00087c4f) main_mup_pane_t3

0x7dad,	// (0x00087c69) main_mup_pane_t4_ParamLimits

0x7dad,	// (0x00087c69) main_mup_pane_t4

0x7dbf,	// (0x00087c7b) main_mup_pane_t5_ParamLimits

0x7dbf,	// (0x00087c7b) main_mup_pane_t5

0x7dd1,	// (0x00087c8d) main_mup_pane_t6_ParamLimits

0x7dd1,	// (0x00087c8d) main_mup_pane_t6

0x0005,

0xf459,	// (0x0008f315) main_mup_pane_t_ParamLimits

0xf459,	// (0x0008f315) main_mup_pane_t

0x7de7,	// (0x00087ca3) mup_progress_pane_ParamLimits

0x7de7,	// (0x00087ca3) mup_progress_pane

0x7df3,	// (0x00087caf) mup_visualizer_pane_ParamLimits

0x7df3,	// (0x00087caf) mup_visualizer_pane

0x7e31,	// (0x00087ced) mup_volume_pane_ParamLimits

0x7e31,	// (0x00087ced) mup_volume_pane

0xd96a,	// (0x0008d826) mup_visualizer_pane_g1_ParamLimits

0xd96a,	// (0x0008d826) mup_visualizer_pane_g1

0xd96a,	// (0x0008d826) mup_visualizer_pane_g2_ParamLimits

0xd96a,	// (0x0008d826) mup_visualizer_pane_g2

0xdafb,	// (0x0008d9b7) mup_visualizer_pane_g3_ParamLimits

0xdafb,	// (0x0008d9b7) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0008f322) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0008f322) mup_visualizer_pane_g

0x40d8,	// (0x00083f94) mup_volume_pane_g1

0xdc8d,	// (0x0008db49) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0008f329) mup_volume_pane_g

0x40d8,	// (0x00083f94) mup_progress_pane_g1

0xdc96,	// (0x0008db52) mup_progress_pane_g2

0xdc9f,	// (0x0008db5b) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0008f32e) mup_progress_pane_g

0x3d3d,	// (0x00083bf9) bg_popup_window_pane_cp05

0xdca8,	// (0x0008db64) heading_pane_cp02_ParamLimits

0xdca8,	// (0x0008db64) heading_pane_cp02

0xdcc4,	// (0x0008db80) list_popup_blid_pane

0xdccc,	// (0x0008db88) list_blid_sat_info_pane_ParamLimits

0xdccc,	// (0x0008db88) list_blid_sat_info_pane

0xdcdf,	// (0x0008db9b) list_blid_sat_info_pane_g1

0xdce7,	// (0x0008dba3) list_blid_sat_info_pane_t1

0x7f50,	// (0x00087e0c) mup_equalizer_pane_ParamLimits

0x7f50,	// (0x00087e0c) mup_equalizer_pane

0x7f71,	// (0x00087e2d) mup_equalizer_pane_cp1_ParamLimits

0x7f71,	// (0x00087e2d) mup_equalizer_pane_cp1

0x7f92,	// (0x00087e4e) mup_equalizer_pane_cp2_ParamLimits

0x7f92,	// (0x00087e4e) mup_equalizer_pane_cp2

0x7fb3,	// (0x00087e6f) mup_equalizer_pane_cp3_ParamLimits

0x7fb3,	// (0x00087e6f) mup_equalizer_pane_cp3

0x7fd8,	// (0x00087e94) mup_equalizer_pane_cp4_ParamLimits

0x7fd8,	// (0x00087e94) mup_equalizer_pane_cp4

0x7ffd,	// (0x00087eb9) mup_equalizer_pane_cp5

0x8015,	// (0x00087ed1) mup_equalizer_pane_cp6

0x802d,	// (0x00087ee9) mup_equalizer_pane_cp7

0xee92,	// (0x0008ed4e) bg_popup_call_poc_act_pane_g9

0xee9a,	// (0x0008ed56) bg_popup_call_poc_act_pane_g10

0xeea2,	// (0x0008ed5e) bg_popup_call_poc_act_pane_g11

0x000a,

0x3fb8,	// (0x00083e74) mup_scale_pane

0x40d8,	// (0x00083f94) mup_scale_pane_g1

0xdcf5,	// (0x0008dbb1) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0008f34a) mup_scale_pane_g

0xdd19,	// (0x0008dbd5) msg_data_pane

0xdd21,	// (0x0008dbdd) scroll_pane_cp017

0x8057,	// (0x00087f13) bg_list_pane_cp04_ParamLimits

0x8057,	// (0x00087f13) bg_list_pane_cp04

0xdd29,	// (0x0008dbe5) msg_data_pane_g1

0x807f,	// (0x00087f3b) msg_data_pane_g2

0x8089,	// (0x00087f45) msg_data_pane_g3

0x8093,	// (0x00087f4f) msg_data_pane_g4

0x809b,	// (0x00087f57) msg_data_pane_g5

0x80a3,	// (0x00087f5f) msg_data_pane_g6

0x80ab,	// (0x00087f67) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0008f359) msg_data_pane_g

0x80b3,	// (0x00087f6f) msg_text_pane_ParamLimits

0x80b3,	// (0x00087f6f) msg_text_pane

0x80df,	// (0x00087f9b) qrid_highlight_pane_cp011_ParamLimits

0x80df,	// (0x00087f9b) qrid_highlight_pane_cp011

0x3d3d,	// (0x00083bf9) msg_body_pane

0x3d3d,	// (0x00083bf9) msg_header_pane

0xdd3a,	// (0x0008dbf6) input_focus_pane_cp07

0x8103,	// (0x00087fbf) msg_header_pane_t1_ParamLimits

0x8103,	// (0x00087fbf) msg_header_pane_t1

0x8117,	// (0x00087fd3) msg_header_pane_t2_ParamLimits

0x8117,	// (0x00087fd3) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0008f36d) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0008f36d) msg_header_pane_t

0xdd4f,	// (0x0008dc0b) msg_body_pane_g1

0x8129,	// (0x00087fe5) msg_body_pane_t1_ParamLimits

0x8129,	// (0x00087fe5) msg_body_pane_t1

0x815a,	// (0x00088016) msg_body_pane_t2_ParamLimits

0x815a,	// (0x00088016) msg_body_pane_t2

0x816c,	// (0x00088028) msg_body_pane_t3_ParamLimits

0x816c,	// (0x00088028) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0008f372) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0008f372) msg_body_pane_t

0x81d0,	// (0x0008808c) main_viewer_pane_g1_ParamLimits

0x81d0,	// (0x0008808c) main_viewer_pane_g1

0x81dc,	// (0x00088098) main_viewer_pane_g2_ParamLimits

0x81dc,	// (0x00088098) main_viewer_pane_g2

0x81e8,	// (0x000880a4) main_viewer_pane_g3_ParamLimits

0x81e8,	// (0x000880a4) main_viewer_pane_g3

0x81f9,	// (0x000880b5) main_viewer_pane_g4_ParamLimits

0x81f9,	// (0x000880b5) main_viewer_pane_g4

0x820a,	// (0x000880c6) main_viewer_pane_g5_ParamLimits

0x820a,	// (0x000880c6) main_viewer_pane_g5

0x820a,	// (0x000880c6) main_viewer_pane_g7_ParamLimits

0x820a,	// (0x000880c6) main_viewer_pane_g7

0x821c,	// (0x000880d8) main_viewer_pane_g8_ParamLimits

0x821c,	// (0x000880d8) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0008f382) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0008f382) main_viewer_pane_g

0xdd57,	// (0x0008dc13) viewer_content_pane_ParamLimits

0xdd57,	// (0x0008dc13) viewer_content_pane

0x8254,	// (0x00088110) main_postcard_pane_g1_ParamLimits

0x8254,	// (0x00088110) main_postcard_pane_g1

0x8262,	// (0x0008811e) main_postcard_pane_g2_ParamLimits

0x8262,	// (0x0008811e) main_postcard_pane_g2

0x8270,	// (0x0008812c) main_postcard_pane_g3_ParamLimits

0x8270,	// (0x0008812c) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0008f393) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0008f393) main_postcard_pane_g

0x8280,	// (0x0008813c) main_postcard_pane_g4

0xf0c2,	// (0x0008ef7e) smil_status_volume_pane_g2

0x82ac,	// (0x00088168) postcard_pane_ParamLimits

0x82ac,	// (0x00088168) postcard_pane

0xd96a,	// (0x0008d826) postcard_pane_g1_ParamLimits

0xd96a,	// (0x0008d826) postcard_pane_g1

0x82e6,	// (0x000881a2) postcard_pane_g2_ParamLimits

0x82e6,	// (0x000881a2) postcard_pane_g2

0x82f2,	// (0x000881ae) postcard_pane_g3_ParamLimits

0x82f2,	// (0x000881ae) postcard_pane_g3

0xdd65,	// (0x0008dc21) postcard_pane_g4_ParamLimits

0xdd65,	// (0x0008dc21) postcard_pane_g4

0x82fe,	// (0x000881ba) postcard_pane_g5_ParamLimits

0x82fe,	// (0x000881ba) postcard_pane_g5

0x830a,	// (0x000881c6) postcard_pane_g6_ParamLimits

0x830a,	// (0x000881c6) postcard_pane_g6

0xdd73,	// (0x0008dc2f) postcard_pane_g7_ParamLimits

0xdd73,	// (0x0008dc2f) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0008f3a0) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0008f3a0) postcard_pane_g

0x8318,	// (0x000881d4) main_mp2_pane_g1_ParamLimits

0x8318,	// (0x000881d4) main_mp2_pane_g1

0x8326,	// (0x000881e2) main_mp2_pane_g2_ParamLimits

0x8326,	// (0x000881e2) main_mp2_pane_g2

0x8332,	// (0x000881ee) main_mp2_pane_g3_ParamLimits

0x8332,	// (0x000881ee) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0008f3af) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0008f3af) main_mp2_pane_g

0x833e,	// (0x000881fa) main_mp2_pane_t1_ParamLimits

0x833e,	// (0x000881fa) main_mp2_pane_t1

0x8355,	// (0x00088211) main_mp2_pane_t2_ParamLimits

0x8355,	// (0x00088211) main_mp2_pane_t2

0x8369,	// (0x00088225) main_mp2_pane_t3_ParamLimits

0x8369,	// (0x00088225) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0008f3b6) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0008f3b6) main_mp2_pane_t

0xdd81,	// (0x0008dc3d) pec_content_pane_ParamLimits

0xdd81,	// (0x0008dc3d) pec_content_pane

0x43dd,	// (0x00084299) scroll_pane_cp015

0xdd93,	// (0x0008dc4f) pec_attribute_pane_ParamLimits

0xdd93,	// (0x0008dc4f) pec_attribute_pane

0x837b,	// (0x00088237) pec_content_pane_g1_ParamLimits

0x837b,	// (0x00088237) pec_content_pane_g1

0xdda3,	// (0x0008dc5f) pec_content_pane_t1_ParamLimits

0xdda3,	// (0x0008dc5f) pec_content_pane_t1

0xddb5,	// (0x0008dc71) pec_content_pane_t2_ParamLimits

0xddb5,	// (0x0008dc71) pec_content_pane_t2

0x0001,

0xf501,	// (0x0008f3bd) pec_content_pane_t_ParamLimits

0xf501,	// (0x0008f3bd) pec_content_pane_t

0x8387,	// (0x00088243) list_single_graphic_pane_cp01_ParamLimits

0x8387,	// (0x00088243) list_single_graphic_pane_cp01

0x3fb8,	// (0x00083e74) bg_popup_sub_pane_cp04

0xddc7,	// (0x0008dc83) popup_mup_playback_window_g1

0xddd3,	// (0x0008dc8f) popup_mup_playback_window_t1

0xdde8,	// (0x0008dca4) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0008f3c2) popup_mup_playback_window_t

0xde1f,	// (0x0008dcdb) main_image_pane_g1_ParamLimits

0xde1f,	// (0x0008dcdb) main_image_pane_g1

0xde62,	// (0x0008dd1e) scroll_pane_cp018_ParamLimits

0xde62,	// (0x0008dd1e) scroll_pane_cp018

0xde7a,	// (0x0008dd36) scroll_pane_cp016_ParamLimits

0xde7a,	// (0x0008dd36) scroll_pane_cp016

0x8418,	// (0x000882d4) smil2_image_pane_ParamLimits

0x8418,	// (0x000882d4) smil2_image_pane

0x844e,	// (0x0008830a) smil2_root_pane_ParamLimits

0x844e,	// (0x0008830a) smil2_root_pane

0x847a,	// (0x00088336) smil2_text_pane_ParamLimits

0x847a,	// (0x00088336) smil2_text_pane

0x3d3d,	// (0x00083bf9) bg_list_pane_cp06

0xdeb6,	// (0x0008dd72) grid_radio_pane

0x3d3d,	// (0x00083bf9) bg_popup_window_pane_cp06

0xdec0,	// (0x0008dd7c) main_fmradio_pane_t1

0xd978,	// (0x0008d834) heading_pane_cp04

0xdece,	// (0x0008dd8a) main_fmradio_pane_t2

0xeeaa,	// (0x0008ed66) popup_cale_lunar_info_window_g1

0xdedc,	// (0x0008dd98) main_fmradio_pane_t3

0xeeb2,	// (0x0008ed6e) popup_cale_lunar_info_window_g2

0xdeec,	// (0x0008dda8) main_fmradio_pane_t4

0x0001,

0xdefa,	// (0x0008ddb6) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0008f49d) popup_cale_lunar_info_window_g

0xf51b,	// (0x0008f3d7) main_fmradio_pane_t

0xdf08,	// (0x0008ddc4) wait_bar_pane_cp03

0xdf10,	// (0x0008ddcc) cell_fmradio_pane_ParamLimits

0xdf10,	// (0x0008ddcc) cell_fmradio_pane

0xdd73,	// (0x0008dc2f) cell_fmradio_pane_g1_ParamLimits

0xdd73,	// (0x0008dc2f) cell_fmradio_pane_g1

0x3d3d,	// (0x00083bf9) grid_highlight_pane_cp011

0xdf25,	// (0x0008dde1) poc_content_pane_ParamLimits

0xdf25,	// (0x0008dde1) poc_content_pane

0xdf37,	// (0x0008ddf3) scroll_pane_cp019

0x84ba,	// (0x00088376) popup_call_poc_act_window_ParamLimits

0x84ba,	// (0x00088376) popup_call_poc_act_window

0x84c7,	// (0x00088383) popup_call_poc_inact_window_ParamLimits

0x84c7,	// (0x00088383) popup_call_poc_inact_window

0xf5b8,	// (0x0008f474) bg_popup_call_poc_act_pane_g

0xee22,	// (0x0008ecde) bg_popup_call_poc_inact_pane_g1

0xee2a,	// (0x0008ece6) bg_popup_call_poc_inact_pane_g2

0xdf3f,	// (0x0008ddfb) popup_call_poc_act_window_g2

0xee32,	// (0x0008ecee) bg_popup_call_poc_inact_pane_g3

0xee3a,	// (0x0008ecf6) bg_popup_call_poc_inact_pane_g4

0xee42,	// (0x0008ecfe) bg_popup_call_poc_inact_pane_g5

0xdf47,	// (0x0008de03) popup_call_poc_act_window_t1_ParamLimits

0xdf47,	// (0x0008de03) popup_call_poc_act_window_t1

0xdf6f,	// (0x0008de2b) popup_call_poc_act_window_t2_ParamLimits

0xdf6f,	// (0x0008de2b) popup_call_poc_act_window_t2

0xdf97,	// (0x0008de53) popup_call_poc_act_window_t3_ParamLimits

0xdf97,	// (0x0008de53) popup_call_poc_act_window_t3

0xdfbf,	// (0x0008de7b) popup_call_poc_act_window_t4_ParamLimits

0xdfbf,	// (0x0008de7b) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0008f3e2) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0008f3e2) popup_call_poc_act_window_t

0xee4a,	// (0x0008ed06) bg_popup_call_poc_inact_pane_g6

0xee52,	// (0x0008ed0e) bg_popup_call_poc_inact_pane_g7

0xee5a,	// (0x0008ed16) bg_popup_call_poc_inact_pane_g8

0xdfd1,	// (0x0008de8d) popup_call_poc_inact_window_g2

0xee62,	// (0x0008ed1e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0008f461) bg_popup_call_poc_inact_pane_g

0xdfd9,	// (0x0008de95) popup_call_poc_inact_window_t1_ParamLimits

0xdfd9,	// (0x0008de95) popup_call_poc_inact_window_t1

0xdfee,	// (0x0008deaa) popup_call_poc_inact_window_t2_ParamLimits

0xdfee,	// (0x0008deaa) popup_call_poc_inact_window_t2

0xe003,	// (0x0008debf) popup_call_poc_inact_window_t3_ParamLimits

0xe003,	// (0x0008debf) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0008f3eb) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0008f3eb) popup_call_poc_inact_window_t

0xf022,	// (0x0008eede) context_pane_ParamLimits

0x8ad9,	// (0x00088995) signal_pane_ParamLimits

0xdbc6,	// (0x0008da82) main_call2_pane

0xf010,	// (0x0008eecc) popup_phob_thumbnail2_window_ParamLimits

0xf010,	// (0x0008eecc) popup_phob_thumbnail2_window

0x817e,	// (0x0008803a) aid_hotspot_pointer_arrow_pane

0x8186,	// (0x00088042) aid_hotspot_pointer_hand_pane

0x87ef,	// (0x000886ab) phob_pre_status_pane_g5

0x6531,	// (0x000863ed) cams_zoom_pane_ParamLimits

0x653d,	// (0x000863f9) image_vga_pane_ParamLimits

0x654c,	// (0x00086408) main_camera_pane_g1_ParamLimits

0x655a,	// (0x00086416) main_camera_pane_g2_ParamLimits

0x6566,	// (0x00086422) main_camera_pane_g3_ParamLimits

0x6574,	// (0x00086430) main_camera_pane_g4_ParamLimits

0x6582,	// (0x0008643e) main_camera_pane_g5_ParamLimits

0x6590,	// (0x0008644c) main_camera_pane_g6_ParamLimits

0x659e,	// (0x0008645a) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0008f0ea) main_camera_pane_g_ParamLimits

0x65ac,	// (0x00086468) main_camera_pane_t1_ParamLimits

0x65be,	// (0x0008647a) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0008f0fb) main_camera_pane_t_ParamLimits

0x3fb8,	// (0x00083e74) bg_popup_preview_window_pane_cp01_ParamLimits

0x3fb8,	// (0x00083e74) bg_popup_preview_window_pane_cp01

0xe018,	// (0x0008ded4) popup_phob_thumbnail2_window_g1_ParamLimits

0xe018,	// (0x0008ded4) popup_phob_thumbnail2_window_g1

0x3d3d,	// (0x00083bf9) call2_cli_visual_pane

0x84e3,	// (0x0008839f) popup_call2_audio_conf_window_ParamLimits

0x84e3,	// (0x0008839f) popup_call2_audio_conf_window

0x84fc,	// (0x000883b8) popup_call2_audio_first_window_ParamLimits

0x84fc,	// (0x000883b8) popup_call2_audio_first_window

0x859a,	// (0x00088456) popup_call2_audio_in_window_ParamLimits

0x859a,	// (0x00088456) popup_call2_audio_in_window

0x85de,	// (0x0008849a) popup_call2_audio_out_window_ParamLimits

0x85de,	// (0x0008849a) popup_call2_audio_out_window

0x8648,	// (0x00088504) popup_call2_audio_second_window_ParamLimits

0x8648,	// (0x00088504) popup_call2_audio_second_window

0x86a6,	// (0x00088562) popup_call2_audio_wait_window_ParamLimits

0x86a6,	// (0x00088562) popup_call2_audio_wait_window

0x3d3d,	// (0x00083bf9) bg_popup_call2_act_pane_cp03

0x3f9a,	// (0x00083e56) list_conf_pane_cp

0xe024,	// (0x0008dee0) popup_call2_audio_conf_window_t1

0xe032,	// (0x0008deee) list_single_graphic_popup_conf2_pane_ParamLimits

0xe032,	// (0x0008deee) list_single_graphic_popup_conf2_pane

0xd9e7,	// (0x0008d8a3) list_highlight_pane_cp04

0xe045,	// (0x0008df01) list_single_graphic_popup_conf2_pane_g1

0xd9f8,	// (0x0008d8b4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0008f3f2) list_single_graphic_popup_conf2_pane_g

0xe04f,	// (0x0008df0b) list_single_graphic_popup_conf2_pane_t1

0xe05d,	// (0x0008df19) bg_popup_call2_act_pane_cp01_ParamLimits

0xe05d,	// (0x0008df19) bg_popup_call2_act_pane_cp01

0xe0e7,	// (0x0008dfa3) call_type_pane_cp05_ParamLimits

0xe0e7,	// (0x0008dfa3) call_type_pane_cp05

0xe13b,	// (0x0008dff7) popup_call2_audio_second_window_g1_ParamLimits

0xe13b,	// (0x0008dff7) popup_call2_audio_second_window_g1

0xe18f,	// (0x0008e04b) popup_call2_audio_second_window_g2_ParamLimits

0xe18f,	// (0x0008e04b) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0008f3f7) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0008f3f7) popup_call2_audio_second_window_g

0xe1f4,	// (0x0008e0b0) popup_call2_audio_second_window_t1_ParamLimits

0xe1f4,	// (0x0008e0b0) popup_call2_audio_second_window_t1

0xe2af,	// (0x0008e16b) popup_call2_audio_second_window_t2_ParamLimits

0xe2af,	// (0x0008e16b) popup_call2_audio_second_window_t2

0xe302,	// (0x0008e1be) popup_call2_audio_second_window_t3_ParamLimits

0xe302,	// (0x0008e1be) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0008f3fe) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0008f3fe) popup_call2_audio_second_window_t

0x3d3d,	// (0x00083bf9) bg_popup_call2_in_pane_cp02

0x3d47,	// (0x00083c03) call_type_pane_cp04

0x3d4f,	// (0x00083c0b) popup_call2_audio_wait_window_g1

0x3d57,	// (0x00083c13) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008efd7) popup_call2_audio_wait_window_g

0x3d5f,	// (0x00083c1b) popup_call2_audio_wait_window_t3

0xe3f5,	// (0x0008e2b1) bg_popup_call2_act_pane_ParamLimits

0xe3f5,	// (0x0008e2b1) bg_popup_call2_act_pane

0xe4b5,	// (0x0008e371) call_type_pane_cp03_ParamLimits

0xe4b5,	// (0x0008e371) call_type_pane_cp03

0xe519,	// (0x0008e3d5) popup_call2_audio_first_window_g1_ParamLimits

0xe519,	// (0x0008e3d5) popup_call2_audio_first_window_g1

0xe589,	// (0x0008e445) popup_call2_audio_first_window_g2_ParamLimits

0xe589,	// (0x0008e445) popup_call2_audio_first_window_g2

0xd96a,	// (0x0008d826) popup_call2_audio_first_window_g3_ParamLimits

0xd96a,	// (0x0008d826) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0008f407) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0008f407) popup_call2_audio_first_window_g

0xe667,	// (0x0008e523) popup_call2_audio_first_window_t1_ParamLimits

0xe667,	// (0x0008e523) popup_call2_audio_first_window_t1

0xe76a,	// (0x0008e626) popup_call2_audio_first_window_t4_ParamLimits

0xe76a,	// (0x0008e626) popup_call2_audio_first_window_t4

0xe84d,	// (0x0008e709) popup_call2_audio_first_window_t5_ParamLimits

0xe84d,	// (0x0008e709) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0008f412) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0008f412) popup_call2_audio_first_window_t

0x3fb0,	// (0x00083e6c) bg_popup_call2_act_pane_g1

0xeebc,	// (0x0008ed78) popup_cale_lunar_info_window_t1

0xeeca,	// (0x0008ed86) popup_cale_lunar_info_window_t2

0xeed8,	// (0x0008ed94) popup_cale_lunar_info_window_t3

0x3d3d,	// (0x00083bf9) bg_popup_call2_bubble_pane

0xe94e,	// (0x0008e80a) bg_popup_call2_in_pane_cp01_ParamLimits

0xe94e,	// (0x0008e80a) bg_popup_call2_in_pane_cp01

0x3a19,	// (0x000838d5) call_type_pane_cp02

0xe996,	// (0x0008e852) popup_call2_audio_out_window_g1_ParamLimits

0xe996,	// (0x0008e852) popup_call2_audio_out_window_g1

0xe9c2,	// (0x0008e87e) popup_call2_audio_out_window_g2_ParamLimits

0xe9c2,	// (0x0008e87e) popup_call2_audio_out_window_g2

0xe9ea,	// (0x0008e8a6) popup_call2_audio_out_window_g3_ParamLimits

0xe9ea,	// (0x0008e8a6) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0008f41b) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0008f41b) popup_call2_audio_out_window_g

0xea25,	// (0x0008e8e1) popup_call2_audio_out_window_t1_ParamLimits

0xea25,	// (0x0008e8e1) popup_call2_audio_out_window_t1

0xea84,	// (0x0008e940) popup_call2_audio_out_window_t2_ParamLimits

0xea84,	// (0x0008e940) popup_call2_audio_out_window_t2

0xead8,	// (0x0008e994) popup_call2_audio_out_window_t3_ParamLimits

0xead8,	// (0x0008e994) popup_call2_audio_out_window_t3

0xeaee,	// (0x0008e9aa) popup_call2_audio_out_window_t4_ParamLimits

0xeaee,	// (0x0008e9aa) popup_call2_audio_out_window_t4

0xeb04,	// (0x0008e9c0) popup_call2_audio_out_window_t5_ParamLimits

0xeb04,	// (0x0008e9c0) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0008f424) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0008f424) popup_call2_audio_out_window_t

0xeb68,	// (0x0008ea24) bg_popup_call2_in_pane_ParamLimits

0xeb68,	// (0x0008ea24) bg_popup_call2_in_pane

0xebc4,	// (0x0008ea80) popup_call2_audio_in_window_g1_ParamLimits

0xebc4,	// (0x0008ea80) popup_call2_audio_in_window_g1

0xebfc,	// (0x0008eab8) popup_call2_audio_in_window_g2_ParamLimits

0xebfc,	// (0x0008eab8) popup_call2_audio_in_window_g2

0xec34,	// (0x0008eaf0) popup_call2_audio_in_window_g3_ParamLimits

0xec34,	// (0x0008eaf0) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0008f431) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0008f431) popup_call2_audio_in_window_g

0xec8c,	// (0x0008eb48) popup_call2_audio_in_window_t1_ParamLimits

0xec8c,	// (0x0008eb48) popup_call2_audio_in_window_t1

0xed0c,	// (0x0008ebc8) popup_call2_audio_in_window_t2_ParamLimits

0xed0c,	// (0x0008ebc8) popup_call2_audio_in_window_t2

0xed8c,	// (0x0008ec48) popup_call2_audio_in_window_t3_ParamLimits

0xed8c,	// (0x0008ec48) popup_call2_audio_in_window_t3

0xeda6,	// (0x0008ec62) popup_call2_audio_in_window_t4_ParamLimits

0xeda6,	// (0x0008ec62) popup_call2_audio_in_window_t4

0xedb8,	// (0x0008ec74) popup_call2_audio_in_window_t5_ParamLimits

0xedb8,	// (0x0008ec74) popup_call2_audio_in_window_t5

0xedcd,	// (0x0008ec89) popup_call2_audio_in_window_t6_ParamLimits

0xedcd,	// (0x0008ec89) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0008f43a) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0008f43a) popup_call2_audio_in_window_t

0x3fb0,	// (0x00083e6c) bg_popup_call2_in_pane_g1

0xeee6,	// (0x0008eda2) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0008f4a2) popup_cale_lunar_info_window_t

0x3fb8,	// (0x00083e74) bg_popup_call2_rect_pane_ParamLimits

0x3fb8,	// (0x00083e74) bg_popup_call2_rect_pane

0x3d3d,	// (0x00083bf9) call2_cli_visual_graphic_pane

0x3d3d,	// (0x00083bf9) call2_cli_visual_text_pane

0x8b5e,	// (0x00088a1a) smil_status_volume_pane_g3

0x0002,

0x40d8,	// (0x00083f94) call2_cli_visual_graphic_pane_g1

0x40d8,	// (0x00083f94) call2_cli_visual_graphic_pane_g2

0x40d8,	// (0x00083f94) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0008f447) call2_cli_visual_graphic_pane_g

0xede2,	// (0x0008ec9e) bg_popup_call2_rect_pane_g1

0x4176,	// (0x00084032) bg_popup_call2_rect_pane_g2

0xedea,	// (0x0008eca6) bg_popup_call2_rect_pane_g3

0xedf2,	// (0x0008ecae) bg_popup_call2_rect_pane_g4

0xedfa,	// (0x0008ecb6) bg_popup_call2_rect_pane_g5

0xee02,	// (0x0008ecbe) bg_popup_call2_rect_pane_g6

0xee0a,	// (0x0008ecc6) bg_popup_call2_rect_pane_g7

0xee12,	// (0x0008ecce) bg_popup_call2_rect_pane_g8

0xee1a,	// (0x0008ecd6) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0008f44e) bg_popup_call2_rect_pane_g

0xee22,	// (0x0008ecde) bg_popup_call2_bubble_pane_g1

0xee2a,	// (0x0008ece6) bg_popup_call2_bubble_pane_g2

0xee32,	// (0x0008ecee) bg_popup_call2_bubble_pane_g3

0xee3a,	// (0x0008ecf6) bg_popup_call2_bubble_pane_g4

0xee42,	// (0x0008ecfe) bg_popup_call2_bubble_pane_g5

0xee4a,	// (0x0008ed06) bg_popup_call2_bubble_pane_g6

0xee52,	// (0x0008ed0e) bg_popup_call2_bubble_pane_g7

0xee5a,	// (0x0008ed16) bg_popup_call2_bubble_pane_g8

0xee62,	// (0x0008ed1e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0008f461) bg_popup_call2_bubble_pane_g

0x5fc8,	// (0x00085e84) aid_cale_week_size_cell_pane

0x65d2,	// (0x0008648e) aid_cams_cif_uncrop_pane_ParamLimits

0x65d2,	// (0x0008648e) aid_cams_cif_uncrop_pane

0x672f,	// (0x000865eb) aid_cams_size_cell_ParamLimits

0x672f,	// (0x000865eb) aid_cams_size_cell

0x673b,	// (0x000865f7) grid_cams_pane_ParamLimits

0x6749,	// (0x00086605) linegrid_cams_pane_ParamLimits

0x6873,	// (0x0008672f) call_video_pane_t1

0x6890,	// (0x0008674c) call_video_pane_t2

0x0001,

0xf292,	// (0x0008f14e) call_video_pane_t

0x6d6b,	// (0x00086c27) aid_cale_month_size_cell_pane_ParamLimits

0x6d6b,	// (0x00086c27) aid_cale_month_size_cell_pane

0xf62f,	// (0x0008f4eb) smil_status_volume_pane_g

0x8b6b,	// (0x00088a27) volume_smil_pane_ParamLimits

0x022d,	// (0x000800e9) aid_popup2_width_pane

0x5ee4,	// (0x00085da0) cell_qdial_pane_g4_ParamLimits

0x5ee4,	// (0x00085da0) cell_qdial_pane_g4

0x7a2c,	// (0x000878e8) aid_blid_cardinal_pane_ParamLimits

0x7a3c,	// (0x000878f8) aid_blid_destination_pane_ParamLimits

0x7a3c,	// (0x000878f8) aid_blid_destination_pane

0x3fb8,	// (0x00083e74) bg_popup_call_poc_act_pane_ParamLimits

0x3fb8,	// (0x00083e74) bg_popup_call_poc_act_pane

0x3fb8,	// (0x00083e74) bg_popup_call_poc_inact_pane_ParamLimits

0x3fb8,	// (0x00083e74) bg_popup_call_poc_inact_pane

0xee6a,	// (0x0008ed26) bg_popup_call_poc_act_pane_g1

0xee72,	// (0x0008ed2e) bg_popup_call_poc_act_pane_g2

0xee7a,	// (0x0008ed36) bg_popup_call_poc_act_pane_g3

0xee3a,	// (0x0008ecf6) bg_popup_call_poc_act_pane_g4

0xee42,	// (0x0008ecfe) bg_popup_call_poc_act_pane_g5

0xee82,	// (0x0008ed3e) bg_popup_call_poc_act_pane_g6

0xee52,	// (0x0008ed0e) bg_popup_call_poc_act_pane_g7

0xee8a,	// (0x0008ed46) bg_popup_call_poc_act_pane_g8

0x3d3d,	// (0x00083bf9) main_usb_pane

0xefe7,	// (0x0008eea3) popup_cale_lunar_info_window

0x6ba8,	// (0x00086a64) im_reading_pane_t1_ParamLimits

0x4335,	// (0x000841f1) list_im_pane_ParamLimits

0x4346,	// (0x00084202) scroll_pane_cp07_ParamLimits

0x3d3d,	// (0x00083bf9) grid_highlight_pane_cp012

0x3fb8,	// (0x00083e74) mup_scale_pane_ParamLimits

0xd96a,	// (0x0008d826) main_usb_pane_g1_ParamLimits

0xd96a,	// (0x0008d826) main_usb_pane_g1

0x8712,	// (0x000885ce) main_usb_pane_g2_ParamLimits

0x8712,	// (0x000885ce) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0008f48b) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0008f48b) main_usb_pane_g

0x871e,	// (0x000885da) main_usb_pane_t1_ParamLimits

0x871e,	// (0x000885da) main_usb_pane_t1

0x8730,	// (0x000885ec) main_usb_pane_t2_ParamLimits

0x8730,	// (0x000885ec) main_usb_pane_t2

0x8742,	// (0x000885fe) main_usb_pane_t3_ParamLimits

0x8742,	// (0x000885fe) main_usb_pane_t3

0x8754,	// (0x00088610) main_usb_pane_t4_ParamLimits

0x8754,	// (0x00088610) main_usb_pane_t4

0x8766,	// (0x00088622) main_usb_pane_t5_ParamLimits

0x8766,	// (0x00088622) main_usb_pane_t5

0x8778,	// (0x00088634) main_usb_pane_t6_ParamLimits

0x8778,	// (0x00088634) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0008f490) main_usb_pane_t_ParamLimits

0x79e7,	// (0x000878a3) aid_text_placing

0x79f2,	// (0x000878ae) main_location2_pane_t1_ParamLimits

0x7a06,	// (0x000878c2) main_location2_pane_t2_ParamLimits

0x7a06,	// (0x000878c2) main_location2_pane_t3_ParamLimits

0x7a1a,	// (0x000878d6) main_location2_pane_t4_ParamLimits

0x7a1a,	// (0x000878d6) main_location2_pane_t4

0xf3f3,	// (0x0008f2af) main_location2_pane_t_ParamLimits

0x3ff4,	// (0x00083eb0) find_pinb_pane_g2_ParamLimits

0x3ff4,	// (0x00083eb0) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0008effd) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0008effd) find_pinb_pane_g

0x4000,	// (0x00083ebc) find_pinb_pane_t1_ParamLimits

0x4012,	// (0x00083ece) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0008f002) find_pinb_pane_t_ParamLimits

0x3d3d,	// (0x00083bf9) main_call3_pane

0x70c7,	// (0x00086f83) cale_month_day_heading_pane_t1_ParamLimits

0x7125,	// (0x00086fe1) cale_month_day_heading_pane_t2_ParamLimits

0x718a,	// (0x00087046) cale_month_day_heading_pane_t3_ParamLimits

0x71ef,	// (0x000870ab) cale_month_day_heading_pane_t4_ParamLimits

0x7254,	// (0x00087110) cale_month_day_heading_pane_t5_ParamLimits

0x72c1,	// (0x0008717d) cale_month_day_heading_pane_t6_ParamLimits

0x7336,	// (0x000871f2) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0008f186) cale_month_day_heading_pane_t_ParamLimits

0x4586,	// (0x00084442) smil_status_volume_pane

0x82ca,	// (0x00088186) postcard_address_pane_ParamLimits

0x82ca,	// (0x00088186) postcard_address_pane

0x82d8,	// (0x00088194) postcard_message_pane_ParamLimits

0x82d8,	// (0x00088194) postcard_message_pane

0x86e5,	// (0x000885a1) call2_cli_visual_pane_t1_ParamLimits

0x86e5,	// (0x000885a1) call2_cli_visual_pane_t1

0x8cb1,	// (0x00088b6d) postcard_message_pane_t1_ParamLimits

0x8cb1,	// (0x00088b6d) postcard_message_pane_t1

0xf0d5,	// (0x0008ef91) postcard_address_pane_t1_ParamLimits

0xf0d5,	// (0x0008ef91) postcard_address_pane_t1

0x8ca2,	// (0x00088b5e) popup_call3_audio_in_window_ParamLimits

0x8ca2,	// (0x00088b5e) popup_call3_audio_in_window

0x8b80,	// (0x00088a3c) bg_popup_call3_in_pane_ParamLimits

0x8b80,	// (0x00088a3c) bg_popup_call3_in_pane

0x8be8,	// (0x00088aa4) popup_call3_audio_in_window_g1_ParamLimits

0x8be8,	// (0x00088aa4) popup_call3_audio_in_window_g1

0x8c00,	// (0x00088abc) popup_call3_audio_in_window_g2_ParamLimits

0x8c00,	// (0x00088abc) popup_call3_audio_in_window_g2

0x8c18,	// (0x00088ad4) popup_call3_audio_in_window_g3_ParamLimits

0x8c18,	// (0x00088ad4) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0008f4f2) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0008f4f2) popup_call3_audio_in_window_g

0x8c40,	// (0x00088afc) popup_call3_audio_in_window_t1_ParamLimits

0x8c40,	// (0x00088afc) popup_call3_audio_in_window_t1

0x8c68,	// (0x00088b24) popup_call3_audio_in_window_t2_ParamLimits

0x8c68,	// (0x00088b24) popup_call3_audio_in_window_t2

0x8c90,	// (0x00088b4c) popup_call3_audio_in_window_t3_ParamLimits

0x8c90,	// (0x00088b4c) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0008f4fb) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0008f4fb) popup_call3_audio_in_window_t

0xdbc6,	// (0x0008da82) bg_popup_call3_rect_pane

0xede2,	// (0x0008ec9e) bg_popup_call3_rect_pane_g1

0x4176,	// (0x00084032) bg_popup_call3_rect_pane_g2

0xedea,	// (0x0008eca6) bg_popup_call3_rect_pane_g3

0xedf2,	// (0x0008ecae) bg_popup_call3_rect_pane_g4

0xedfa,	// (0x0008ecb6) bg_popup_call3_rect_pane_g5

0xee02,	// (0x0008ecbe) bg_popup_call3_rect_pane_g6

0xee0a,	// (0x0008ecc6) bg_popup_call3_rect_pane_g7

0x7e4c,	// (0x00087d08) mup_visualizer_osc_pane

0xdc85,	// (0x0008db41) mup_visualizer_spec_pane

0x8ba0,	// (0x00088a5c) call3_video_qcif_pane_ParamLimits

0x8ba0,	// (0x00088a5c) call3_video_qcif_pane

0x8bb2,	// (0x00088a6e) call3_video_qcif_uncrop_pane_ParamLimits

0x8bb2,	// (0x00088a6e) call3_video_qcif_uncrop_pane

0x8bc2,	// (0x00088a7e) call3_video_subqcif_pane_ParamLimits

0x8bc2,	// (0x00088a7e) call3_video_subqcif_pane

0x8bd6,	// (0x00088a92) call3_video_subqcif_uncrop_pane_ParamLimits

0x8bd6,	// (0x00088a92) call3_video_subqcif_uncrop_pane

0x8c30,	// (0x00088aec) popup_call3_audio_in_window_g4_ParamLimits

0x8c30,	// (0x00088aec) popup_call3_audio_in_window_g4

0x8b4d,	// (0x00088a09) mup_spec_half_pane

0x8b56,	// (0x00088a12) mup_spec_half_pane_cp

0xf095,	// (0x0008ef51) mup_osc_middle_pane

0xf09e,	// (0x0008ef5a) mup_visualizer_osc_pane_g1

0x8b2d,	// (0x000889e9) mup_spec_bar_pane_ParamLimits

0x8b2d,	// (0x000889e9) mup_spec_bar_pane

0xf082,	// (0x0008ef3e) mup_spec_bar_pane_g1

0xf08c,	// (0x0008ef48) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0008f4e6) mup_spec_bar_pane_g

0x5fc8,	// (0x00085e84) aid_cale_week_size_cell_pane_ParamLimits

0x5fdb,	// (0x00085e97) bg_cale_heading_pane_ParamLimits

0x41aa,	// (0x00084066) bg_cale_pane_cp01_ParamLimits

0x5fef,	// (0x00085eab) cale_week_corner_pane_ParamLimits

0x6005,	// (0x00085ec1) cale_week_day_heading_pane_ParamLimits

0x6019,	// (0x00085ed5) cale_week_scroll_pane_g1_ParamLimits

0x602a,	// (0x00085ee6) cale_week_scroll_pane_g2_ParamLimits

0x603b,	// (0x00085ef7) cale_week_scroll_pane_g3_ParamLimits

0x604c,	// (0x00085f08) cale_week_scroll_pane_g4_ParamLimits

0x605d,	// (0x00085f19) cale_week_scroll_pane_g5_ParamLimits

0x606e,	// (0x00085f2a) cale_week_scroll_pane_g6_ParamLimits

0x6081,	// (0x00085f3d) cale_week_scroll_pane_g7_ParamLimits

0x6094,	// (0x00085f50) cale_week_scroll_pane_g8_ParamLimits

0x60a7,	// (0x00085f63) cale_week_scroll_pane_g9_ParamLimits

0x60b8,	// (0x00085f74) cale_week_scroll_pane_g10_ParamLimits

0x60c9,	// (0x00085f85) cale_week_scroll_pane_g11_ParamLimits

0x60da,	// (0x00085f96) cale_week_scroll_pane_g12_ParamLimits

0x60eb,	// (0x00085fa7) cale_week_scroll_pane_g13_ParamLimits

0x60fc,	// (0x00085fb8) cale_week_scroll_pane_g14_ParamLimits

0x610d,	// (0x00085fc9) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0008f08e) cale_week_scroll_pane_g_ParamLimits

0x611e,	// (0x00085fda) cale_week_time_pane_ParamLimits

0x6131,	// (0x00085fed) grid_cale_week_pane_ParamLimits

0x41c3,	// (0x0008407f) listscroll_cale_week_pane_t1

0x6146,	// (0x00086002) scroll_pane_cp08_ParamLimits

0x6dac,	// (0x00086c68) cale_month_corner_pane_ParamLimits

0x455c,	// (0x00084418) cale_month_pane_t1

0x7086,	// (0x00086f42) cale_month_week_pane_ParamLimits

0xd96a,	// (0x0008d826) popup_call_status_window_g1_ParamLimits

0x77f9,	// (0x000876b5) popup_call_status_window_g2_ParamLimits

0x7805,	// (0x000876c1) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0008f236) popup_call_status_window_g_ParamLimits

0x487f,	// (0x0008473b) aid_call2_pane

0x80f5,	// (0x00087fb1) msg_header_pane_g1

0x82ca,	// (0x00088186) postcard_address2_pane_ParamLimits

0x82ca,	// (0x00088186) postcard_address2_pane

0x82d8,	// (0x00088194) postcard_message2_pane_ParamLimits

0x82d8,	// (0x00088194) postcard_message2_pane

0x8ae7,	// (0x000889a3) message2_row_pane_ParamLimits

0x8ae7,	// (0x000889a3) message2_row_pane

0xf03d,	// (0x0008eef9) address2_row_pane_ParamLimits

0xf03d,	// (0x0008eef9) address2_row_pane

0xf050,	// (0x0008ef0c) postcard_message2_row_pane_g1

0xf058,	// (0x0008ef14) postcard_message2_row_pane_t1

0xf050,	// (0x0008ef0c) address2_row_pane_g1

0xf058,	// (0x0008ef14) address2_row_pane_t1

0x6490,	// (0x0008634c) aid_size_cell_vorec

0x3d3d,	// (0x00083bf9) main_rss_pane

0x8b01,	// (0x000889bd) rss_list_single_pane_ParamLimits

0x8b01,	// (0x000889bd) rss_list_single_pane

0xf066,	// (0x0008ef22) rss_list_single_pane_t1

0xf074,	// (0x0008ef30) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0008f4e1) rss_list_single_pane_t

0x3d3d,	// (0x00083bf9) main_camera2_pane

0x3d3d,	// (0x00083bf9) main_video2_pane

0x8d15,	// (0x00088bd1) cams_zoom_pane_cp2_ParamLimits

0x8d15,	// (0x00088bd1) cams_zoom_pane_cp2

0x8d21,	// (0x00088bdd) image2_vga_pane_ParamLimits

0x8d21,	// (0x00088bdd) image2_vga_pane

0x8d30,	// (0x00088bec) main_camera2_pane_g1_ParamLimits

0x8d30,	// (0x00088bec) main_camera2_pane_g1

0x8d3c,	// (0x00088bf8) main_camera2_pane_g2_ParamLimits

0x8d3c,	// (0x00088bf8) main_camera2_pane_g2

0x8d48,	// (0x00088c04) main_camera2_pane_g3_ParamLimits

0x8d48,	// (0x00088c04) main_camera2_pane_g3

0x8d54,	// (0x00088c10) main_camera2_pane_g4_ParamLimits

0x8d54,	// (0x00088c10) main_camera2_pane_g4

0x8d60,	// (0x00088c1c) main_camera2_pane_g5_ParamLimits

0x8d60,	// (0x00088c1c) main_camera2_pane_g5

0x8d6c,	// (0x00088c28) main_camera2_pane_g6_ParamLimits

0x8d6c,	// (0x00088c28) main_camera2_pane_g6

0x8d78,	// (0x00088c34) main_camera2_pane_g7_ParamLimits

0x8d78,	// (0x00088c34) main_camera2_pane_g7

0x8d84,	// (0x00088c40) main_camera2_pane_g8_ParamLimits

0x8d84,	// (0x00088c40) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0008f502) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0008f502) main_camera2_pane_g

0x8d9c,	// (0x00088c58) main_camera2_pane_t1_ParamLimits

0x8d9c,	// (0x00088c58) main_camera2_pane_t1

0x8dae,	// (0x00088c6a) main_camera2_pane_t2_ParamLimits

0x8dae,	// (0x00088c6a) main_camera2_pane_t2

0x8dc0,	// (0x00088c7c) main_camera2_pane_t3_ParamLimits

0x8dc0,	// (0x00088c7c) main_camera2_pane_t3

0x8dd2,	// (0x00088c8e) main_camera2_pane_t4_ParamLimits

0x8dd2,	// (0x00088c8e) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0008f515) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0008f515) main_camera2_pane_t

0x8e2f,	// (0x00088ceb) cams_zoom_pane_cp4_ParamLimits

0x8e2f,	// (0x00088ceb) cams_zoom_pane_cp4

0x8e3f,	// (0x00088cfb) image2_cif_pane_ParamLimits

0x8e3f,	// (0x00088cfb) image2_cif_pane

0x8e54,	// (0x00088d10) image2_subqcif_pane_ParamLimits

0x8e54,	// (0x00088d10) image2_subqcif_pane

0x8e63,	// (0x00088d1f) main_video2_pane_g1_ParamLimits

0x8e63,	// (0x00088d1f) main_video2_pane_g1

0x8e75,	// (0x00088d31) main_video2_pane_g2_ParamLimits

0x8e75,	// (0x00088d31) main_video2_pane_g2

0x8e85,	// (0x00088d41) main_video2_pane_g3_ParamLimits

0x8e85,	// (0x00088d41) main_video2_pane_g3

0x8e95,	// (0x00088d51) main_video2_pane_g4_ParamLimits

0x8e95,	// (0x00088d51) main_video2_pane_g4

0x8ea5,	// (0x00088d61) main_video2_pane_g5_ParamLimits

0x8ea5,	// (0x00088d61) main_video2_pane_g5

0x8eb5,	// (0x00088d71) main_video2_pane_g6_ParamLimits

0x8eb5,	// (0x00088d71) main_video2_pane_g6

0x0005,

0xf668,	// (0x0008f524) main_video2_pane_g_ParamLimits

0xf668,	// (0x0008f524) main_video2_pane_g

0x8ec7,	// (0x00088d83) main_video2_pane_t1_ParamLimits

0x8ec7,	// (0x00088d83) main_video2_pane_t1

0x8ee1,	// (0x00088d9d) main_video2_pane_t2_ParamLimits

0x8ee1,	// (0x00088d9d) main_video2_pane_t2

0x8f07,	// (0x00088dc3) main_video2_pane_t3_ParamLimits

0x8f07,	// (0x00088dc3) main_video2_pane_t3

0x0002,

0xf675,	// (0x0008f531) main_video2_pane_t_ParamLimits

0xf675,	// (0x0008f531) main_video2_pane_t

0x882f,	// (0x000886eb) call_muted_g2

0x0001,

0xf617,	// (0x0008f4d3) call_muted_g

0x3d3d,	// (0x00083bf9) main_mup2_pane

0x0759,	// (0x00080615) main_mup2_pane_g1_ParamLimits

0x0759,	// (0x00080615) main_mup2_pane_g1

0x8f2d,	// (0x00088de9) main_mup2_pane_g2_ParamLimits

0x8f2d,	// (0x00088de9) main_mup2_pane_g2

0x91bf,	// (0x0008907b) main_mup_pane_g13_cp1

0x91c7,	// (0x00089083) mup_volume_pane_cp1

0x8f4f,	// (0x00088e0b) main_mup2_pane_g4_ParamLimits

0x8f4f,	// (0x00088e0b) main_mup2_pane_g4

0x8f64,	// (0x00088e20) main_mup2_pane_g5_ParamLimits

0x8f64,	// (0x00088e20) main_mup2_pane_g5

0x8f79,	// (0x00088e35) main_mup2_pane_g6_ParamLimits

0x8f79,	// (0x00088e35) main_mup2_pane_g6

0x8f8e,	// (0x00088e4a) main_mup2_pane_g7_ParamLimits

0x8f8e,	// (0x00088e4a) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0008f538) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0008f538) main_mup2_pane_g

0x8faa,	// (0x00088e66) main_mup2_pane_t1_ParamLimits

0x8faa,	// (0x00088e66) main_mup2_pane_t1

0x8fc1,	// (0x00088e7d) main_mup2_pane_t2_ParamLimits

0x8fc1,	// (0x00088e7d) main_mup2_pane_t2

0x8fd8,	// (0x00088e94) main_mup2_pane_t3_ParamLimits

0x8fd8,	// (0x00088e94) main_mup2_pane_t3

0x8fef,	// (0x00088eab) main_mup2_pane_t4_ParamLimits

0x8fef,	// (0x00088eab) main_mup2_pane_t4

0x9009,	// (0x00088ec5) main_mup2_pane_t5_ParamLimits

0x9009,	// (0x00088ec5) main_mup2_pane_t5

0x9023,	// (0x00088edf) main_mup2_pane_t6_ParamLimits

0x9023,	// (0x00088edf) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0008f547) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0008f547) main_mup2_pane_t

0x905b,	// (0x00088f17) mup2_visualizer_pane_ParamLimits

0x905b,	// (0x00088f17) mup2_visualizer_pane

0x9091,	// (0x00088f4d) mup_progress_pane_cp_ParamLimits

0x9091,	// (0x00088f4d) mup_progress_pane_cp

0x91aa,	// (0x00089066) mup_volume_pane_cp_ParamLimits

0x91aa,	// (0x00089066) mup_volume_pane_cp

0x90aa,	// (0x00088f66) mup2_visualizer_pane_g1_ParamLimits

0x90aa,	// (0x00088f66) mup2_visualizer_pane_g1

0x072b,	// (0x000805e7) mup2_visualizer_pane_g2_ParamLimits

0x072b,	// (0x000805e7) mup2_visualizer_pane_g2

0x90bf,	// (0x00088f7b) mup2_visualizer_pane_g3_ParamLimits

0x90bf,	// (0x00088f7b) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0008f554) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0008f554) mup2_visualizer_pane_g

0xdeae,	// (0x0008dd6a) aid_size_cell_fmradio

0x8945,	// (0x00088801) aid_height_parent_landcape

0x43c4,	// (0x00084280) wml_content_pane_cp

0x43cc,	// (0x00084288) wml_tabs_pane

0x43d5,	// (0x00084291) popup_wml_miniature_window

0x43dd,	// (0x00084299) scroll_pane_cp021

0x43f1,	// (0x000842ad) wml_content_pane_comp8

0x3d3d,	// (0x00083bf9) bg_popup_sub_pane_cp05

0x0749,	// (0x00080605) popup_wml_miniature_window_g1

0x0751,	// (0x0008060d) wml_miniature_view_pane

0x90cd,	// (0x00088f89) aid_size_wml_view

0x90d5,	// (0x00088f91) wml_miniature_view_pane_g1

0x90de,	// (0x00088f9a) wml_miniature_view_pane_g2

0x90e7,	// (0x00088fa3) wml_miniature_view_pane_g3

0x90ef,	// (0x00088fab) wml_miniature_view_pane_g4

0x90f7,	// (0x00088fb3) wml_miniature_view_pane_g5

0x90ff,	// (0x00088fbb) wml_miniature_view_pane_g6

0x9107,	// (0x00088fc3) wml_miniature_view_pane_g7

0x910f,	// (0x00088fcb) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0008f55b) wml_miniature_view_pane_g

0x0759,	// (0x00080615) background_graphic_ParamLimits

0x0759,	// (0x00080615) background_graphic

0x0765,	// (0x00080621) wml_tabs_2_pane

0x076e,	// (0x0008062a) wml_tabs_3_pane_ParamLimits

0x076e,	// (0x0008062a) wml_tabs_3_pane

0x0780,	// (0x0008063c) wml_tabs_4_pane_ParamLimits

0x0780,	// (0x0008063c) wml_tabs_4_pane

0x0796,	// (0x00080652) wml_tabs_5_pane_ParamLimits

0x0796,	// (0x00080652) wml_tabs_5_pane

0x07b0,	// (0x0008066c) wml_tabs_pane_g2_ParamLimits

0x07b0,	// (0x0008066c) wml_tabs_pane_g2

0x07c4,	// (0x00080680) wml_tabs_pane_g3_ParamLimits

0x07c4,	// (0x00080680) wml_tabs_pane_g3

0x9117,	// (0x00088fd3) wml_tabs_2_active_pane_ParamLimits

0x9117,	// (0x00088fd3) wml_tabs_2_active_pane

0x9129,	// (0x00088fe5) wml_tabs_2_passive_pane_ParamLimits

0x9129,	// (0x00088fe5) wml_tabs_2_passive_pane

0x913b,	// (0x00088ff7) wml_tabs_3_active_pane_cp_ParamLimits

0x913b,	// (0x00088ff7) wml_tabs_3_active_pane_cp

0x914e,	// (0x0008900a) wml_tabs_3_passive_pane_ParamLimits

0x914e,	// (0x0008900a) wml_tabs_3_passive_pane

0x915f,	// (0x0008901b) wml_tabs_3_passive_pane_cp_ParamLimits

0x915f,	// (0x0008901b) wml_tabs_3_passive_pane_cp

0x9174,	// (0x00089030) tabs_4_active_pane

0x917c,	// (0x00089038) tabs_4_passive_pane

0x9184,	// (0x00089040) tabs_4_passive_pane_cp

0x918c,	// (0x00089048) tabs_4_passive_pane_cp2

0x870a,	// (0x000885c6) aid_height_text

0x7e15,	// (0x00087cd1) mup_volume_cont_pane_ParamLimits

0x7e15,	// (0x00087cd1) mup_volume_cont_pane

0x5b3d,	// (0x000859f9) aid_size_cell_pinb

0x5b47,	// (0x00085a03) aid_size_list_pinb

0x907a,	// (0x00088f36) mup2_volume_cont_pane_ParamLimits

0x907a,	// (0x00088f36) mup2_volume_cont_pane

0x9196,	// (0x00089052) mup2_volume_cont_pane_g1_ParamLimits

0x9196,	// (0x00089052) mup2_volume_cont_pane_g1

0x57c9,	// (0x00085685) aid_size_cell_touch_ParamLimits

0x57c9,	// (0x00085685) aid_size_cell_touch

0x5a24,	// (0x000858e0) touch_pane_ParamLimits

0x5a24,	// (0x000858e0) touch_pane

0x021b,	// (0x000800d7) main_rss2_pane

0x081a,	// (0x000806d6) listscroll_rss2_pane

0x0823,	// (0x000806df) rss2_navigation_pane

0x082b,	// (0x000806e7) list_rss2_pane

0xda8c,	// (0x0008d948) scroll_pane_cp22

0x0833,	// (0x000806ef) rss2_navigation_pane_g1

0x083c,	// (0x000806f8) rss2_navigation_pane_g2

0x0844,	// (0x00080700) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0008f56c) rss2_navigation_pane_g

0x084c,	// (0x00080708) rss2_navigation_pane_t1

0x91cf,	// (0x0008908b) rss2_list_single_pane_ParamLimits

0x91cf,	// (0x0008908b) rss2_list_single_pane

0x085a,	// (0x00080716) rss2_list_single_pane_t2

0x0868,	// (0x00080724) rss2_list_single_pane_t3_ParamLimits

0x0868,	// (0x00080724) rss2_list_single_pane_t3

0x0885,	// (0x00080741) rss2_list_single_pane_t4

0x75ae,	// (0x0008746a) smil_status_pane_g1

0x0294,	// (0x00080150) main_image2_pane_ParamLimits

0x0294,	// (0x00080150) main_image2_pane

0x8d90,	// (0x00088c4c) main_camera2_pane_g9_ParamLimits

0x8d90,	// (0x00088c4c) main_camera2_pane_g9

0x8de4,	// (0x00088ca0) main_camera2_pane_t5_ParamLimits

0x8de4,	// (0x00088ca0) main_camera2_pane_t5

0x8df6,	// (0x00088cb2) main_camera2_pane_t6_ParamLimits

0x8df6,	// (0x00088cb2) main_camera2_pane_t6

0x91f5,	// (0x000890b1) main_image2_pane_g1_ParamLimits

0x91f5,	// (0x000890b1) main_image2_pane_g1

0x84a4,	// (0x00088360) smil2_video_pane_ParamLimits

0x84a4,	// (0x00088360) smil2_video_pane

0x0249,	// (0x00080105) aid_zoom_text_primary_cp

0x028a,	// (0x00080146) popup_preview_fixed_window

0x432d,	// (0x000841e9) im_reading_pane_g1

0x8cda,	// (0x00088b96) cams2_bc_adjust_pane_cp_ParamLimits

0x8cda,	// (0x00088b96) cams2_bc_adjust_pane_cp

0x8e21,	// (0x00088cdd) cams2_bc_adjust_pane_ParamLimits

0x8e21,	// (0x00088cdd) cams2_bc_adjust_pane

0x1c65,	// (0x00081b21) cams2_bc_adjust_pane_g1

0x9201,	// (0x000890bd) cams2_slider_pane

0x920a,	// (0x000890c6) cams2_slider_pane_g1

0x9213,	// (0x000890cf) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0008f573) cams2_slider_pane_g

0x5c3a,	// (0x00085af6) calc_display_pane_ParamLimits

0x5c58,	// (0x00085b14) calc_paper_pane_ParamLimits

0x5c74,	// (0x00085b30) grid_calc_pane_ParamLimits

0x7863,	// (0x0008771f) popup_clock_digital_window_t1_ParamLimits

0xde4b,	// (0x0008dd07) main_image_pane_t1

0x5c20,	// (0x00085adc) aid_size_cell_calc_ParamLimits

0x5c20,	// (0x00085adc) aid_size_cell_calc

0x8977,	// (0x00088833) popup_blid_sat_info2_window_ParamLimits

0x8977,	// (0x00088833) popup_blid_sat_info2_window

0x08cf,	// (0x0008078b) aid_size_cell_blid

0x08d7,	// (0x00080793) bg_popup_window_pane_cp07

0x08fa,	// (0x000807b6) grid_popup_blid_pane

0x0904,	// (0x000807c0) heading_pane_cp05_ParamLimits

0x0904,	// (0x000807c0) heading_pane_cp05

0x09ce,	// (0x0008088a) cell_popup_blid_pane_ParamLimits

0x09ce,	// (0x0008088a) cell_popup_blid_pane

0x09f8,	// (0x000808b4) cell_popup_blid_pane_g1

0x0a00,	// (0x000808bc) cell_popup_blid_pane_t1

0x9040,	// (0x00088efc) mup2_indicator_pane_ParamLimits

0x9040,	// (0x00088efc) mup2_indicator_pane

0xdbc6,	// (0x0008da82) mup2_visualizer_osc_pane

0x0737,	// (0x000805f3) mup2_visualizer_spec_pane_ParamLimits

0x0737,	// (0x000805f3) mup2_visualizer_spec_pane

0x922d,	// (0x000890e9) mup2_spec_half_pane

0x9236,	// (0x000890f2) mup2_spec_half_pane_cp

0x9240,	// (0x000890fc) mup2_spec_bar_pane_ParamLimits

0x9240,	// (0x000890fc) mup2_spec_bar_pane

0xf082,	// (0x0008ef3e) mup2_spec_bar_pane_g1

0xf08c,	// (0x0008ef48) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0008f4e6) mup2_spec_bar_pane_g

0x925f,	// (0x0008911b) mup2_osc_middle_pane

0xf09e,	// (0x0008ef5a) mup2_visualizer_osc_pane_g1

0x02c2,	// (0x0008017e) popup_number_entry_window_t1_ParamLimits

0x02d5,	// (0x00080191) popup_number_entry_window_t2_ParamLimits

0x02e7,	// (0x000801a3) popup_number_entry_window_t3_ParamLimits

0x5a7b,	// (0x00085937) popup_number_entry_window_t5_ParamLimits

0x5a7b,	// (0x00085937) popup_number_entry_window_t5

0xf0ec,	// (0x0008efa8) popup_number_entry_window_t_ParamLimits

0x02f9,	// (0x000801b5) text_title_cp2_ParamLimits

0x818e,	// (0x0008804a) aid_hotspot_pointer_text2_pane

0x8228,	// (0x000880e4) main_viewer_pane_g9_ParamLimits

0x8228,	// (0x000880e4) main_viewer_pane_g9

0x455c,	// (0x00084418) cale_month_pane_t1_ParamLimits

0x4599,	// (0x00084455) bg_cale_pane_ParamLimits

0x45b1,	// (0x0008446d) list_cale_pane_ParamLimits

0x41c3,	// (0x0008407f) listscroll_cale_day_pane_t1

0x45c2,	// (0x0008447e) scroll_pane_cp09_ParamLimits

0x7e54,	// (0x00087d10) main_mup_eq_pane_t1_ParamLimits

0x7e54,	// (0x00087d10) main_mup_eq_pane_t1

0x7e70,	// (0x00087d2c) main_mup_eq_pane_t2_ParamLimits

0x7e70,	// (0x00087d2c) main_mup_eq_pane_t2

0x7e8c,	// (0x00087d48) main_mup_eq_pane_t3_ParamLimits

0x7e8c,	// (0x00087d48) main_mup_eq_pane_t3

0x7ea6,	// (0x00087d62) main_mup_eq_pane_t4_ParamLimits

0x7ea6,	// (0x00087d62) main_mup_eq_pane_t4

0x7ec0,	// (0x00087d7c) main_mup_eq_pane_t5_ParamLimits

0x7ec0,	// (0x00087d7c) main_mup_eq_pane_t5

0x7eda,	// (0x00087d96) main_mup_eq_pane_t6_ParamLimits

0x7eda,	// (0x00087d96) main_mup_eq_pane_t6

0x7ef0,	// (0x00087dac) main_mup_eq_pane_t7_ParamLimits

0x7ef0,	// (0x00087dac) main_mup_eq_pane_t7

0x7f06,	// (0x00087dc2) main_mup_eq_pane_t8_ParamLimits

0x7f06,	// (0x00087dc2) main_mup_eq_pane_t8

0x7f1c,	// (0x00087dd8) main_mup_eq_pane_t9_ParamLimits

0x7f1c,	// (0x00087dd8) main_mup_eq_pane_t9

0x7f38,	// (0x00087df4) main_mup_eq_pane_t10_ParamLimits

0x7f38,	// (0x00087df4) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0008f335) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0008f335) main_mup_eq_pane_t

0x7ffd,	// (0x00087eb9) mup_equalizer_pane_cp5_ParamLimits

0x8015,	// (0x00087ed1) mup_equalizer_pane_cp6_ParamLimits

0x802d,	// (0x00087ee9) mup_equalizer_pane_cp7_ParamLimits

0x021b,	// (0x000800d7) main_gallery_pane

0xf0a7,	// (0x0008ef63) smil2_volume_pane

0xf0af,	// (0x0008ef6b) smil_status_volume_pane_g1_ParamLimits

0xf0c2,	// (0x0008ef7e) smil_status_volume_pane_g2_ParamLimits

0x8b5e,	// (0x00088a1a) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0008f4eb) smil_status_volume_pane_g_ParamLimits

0x08d7,	// (0x00080793) bg_popup_window_pane_cp07_ParamLimits

0x08e5,	// (0x000807a1) blid_firmament_pane

0x9268,	// (0x00089124) aid_size_cell_gallery_ParamLimits

0x9268,	// (0x00089124) aid_size_cell_gallery

0x9276,	// (0x00089132) grid_gallery_pane_ParamLimits

0x9276,	// (0x00089132) grid_gallery_pane

0x9286,	// (0x00089142) cell_gallery_pane_ParamLimits

0x9286,	// (0x00089142) cell_gallery_pane

0x0a0e,	// (0x000808ca) bg_cell_gallery_focus_pane_ParamLimits

0x0a0e,	// (0x000808ca) bg_cell_gallery_focus_pane

0x0a20,	// (0x000808dc) cell_gallery_pane_g1_ParamLimits

0x0a20,	// (0x000808dc) cell_gallery_pane_g1

0x92d4,	// (0x00089190) cell_gallery_pane_g2_ParamLimits

0x92d4,	// (0x00089190) cell_gallery_pane_g2

0x92e1,	// (0x0008919d) cell_gallery_pane_g3_ParamLimits

0x92e1,	// (0x0008919d) cell_gallery_pane_g3

0x0a2c,	// (0x000808e8) cell_gallery_pane_g4_ParamLimits

0x0a2c,	// (0x000808e8) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0008f599) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0008f599) cell_gallery_pane_g

0x0a38,	// (0x000808f4) bg_cell_gallery_focus_pane_g1

0x0a40,	// (0x000808fc) bg_cell_gallery_focus_pane_g2

0x0a48,	// (0x00080904) bg_cell_gallery_focus_pane_g3

0x0a50,	// (0x0008090c) bg_cell_gallery_focus_pane_g4

0x0a58,	// (0x00080914) bg_cell_gallery_focus_pane_g5

0x0a60,	// (0x0008091c) bg_cell_gallery_focus_pane_g6

0x0a68,	// (0x00080924) bg_cell_gallery_focus_pane_g7

0x0a70,	// (0x0008092c) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0008f5a2) bg_cell_gallery_focus_pane_g

0x0a78,	// (0x00080934) aid_firma_cardinal

0x0a8c,	// (0x00080948) blid_firmament_pane_t1

0x0aa3,	// (0x0008095f) blid_firmament_pane_t2

0x0aba,	// (0x00080976) blid_firmament_pane_t3

0x0ad1,	// (0x0008098d) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0008f5b3) blid_firmament_pane_t

0x0ae8,	// (0x000809a4) blid_sat_info_pane

0x0af8,	// (0x000809b4) blid_sat_info_pane_g1

0x0af8,	// (0x000809b4) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0008f5bc) blid_sat_info_pane_g

0x0b02,	// (0x000809be) blid_sat_info_pane_t1

0x0b10,	// (0x000809cc) smil2_volume_content_pane

0x0b19,	// (0x000809d5) smil2_volume_pane_g1

0x0b21,	// (0x000809dd) smil2_volume_content_pane_g1

0x0b2a,	// (0x000809e6) smil2_volume_content_pane_g2

0x0b33,	// (0x000809ef) smil2_volume_content_pane_g3

0x0b3c,	// (0x000809f8) smil2_volume_content_pane_g4

0x0b45,	// (0x00080a01) smil2_volume_content_pane_g5

0x0b4e,	// (0x00080a0a) smil2_volume_content_pane_g6

0x0b57,	// (0x00080a13) smil2_volume_content_pane_g7

0x0b60,	// (0x00080a1c) smil2_volume_content_pane_g8

0x0b69,	// (0x00080a25) smil2_volume_content_pane_g9

0x0b72,	// (0x00080a2e) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0008f5c1) smil2_volume_content_pane_g

0x619e,	// (0x0008605a) cale_week_day_heading_pane_t1_ParamLimits

0x61cb,	// (0x00086087) cale_week_day_heading_pane_t2_ParamLimits

0x61f8,	// (0x000860b4) cale_week_day_heading_pane_t3_ParamLimits

0x6225,	// (0x000860e1) cale_week_day_heading_pane_t4_ParamLimits

0x6252,	// (0x0008610e) cale_week_day_heading_pane_t5_ParamLimits

0x627f,	// (0x0008613b) cale_week_day_heading_pane_t6_ParamLimits

0x62ac,	// (0x00086168) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0008f0ad) cale_week_day_heading_pane_t_ParamLimits

0x41d5,	// (0x00084091) bg_cale_side_pane_ParamLimits

0x62d9,	// (0x00086195) cale_week_time_pane_t1_ParamLimits

0x6305,	// (0x000861c1) cale_week_time_pane_t2_ParamLimits

0x6331,	// (0x000861ed) cale_week_time_pane_t3_ParamLimits

0x635d,	// (0x00086219) cale_week_time_pane_t4_ParamLimits

0x6389,	// (0x00086245) cale_week_time_pane_t5_ParamLimits

0x63b5,	// (0x00086271) cale_week_time_pane_t6_ParamLimits

0x63e1,	// (0x0008629d) cale_week_time_pane_t7_ParamLimits

0x640d,	// (0x000862c9) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0008f0bc) cale_week_time_pane_t_ParamLimits

0x6439,	// (0x000862f5) cell_cale_week_pane_g2_ParamLimits

0x41d5,	// (0x00084091) bg_cale_side_pane_cp01_ParamLimits

0x73ab,	// (0x00087267) cale_month_week_pane_t1_ParamLimits

0x73d6,	// (0x00087292) cale_month_week_pane_t2_ParamLimits

0x7401,	// (0x000872bd) cale_month_week_pane_t3_ParamLimits

0x742c,	// (0x000872e8) cale_month_week_pane_t4_ParamLimits

0x7457,	// (0x00087313) cale_month_week_pane_t5_ParamLimits

0x7482,	// (0x0008733e) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0008f195) cale_month_week_pane_t_ParamLimits

0x757b,	// (0x00087437) cell_cale_month_pane_g1_ParamLimits

0x021b,	// (0x000800d7) main_cale_event_viewer_pane

0x021b,	// (0x000800d7) listscroll_cale_event_viewer_pane

0x0b7b,	// (0x00080a37) list_cale_ev_pane

0x0b83,	// (0x00080a3f) scroll_pane_cp023

0x92ee,	// (0x000891aa) field_cale_ev_pane_ParamLimits

0x92ee,	// (0x000891aa) field_cale_ev_pane

0x0b8f,	// (0x00080a4b) field_cale_ev_content_pane_ParamLimits

0x0b8f,	// (0x00080a4b) field_cale_ev_content_pane

0x0b9b,	// (0x00080a57) field_cale_ev_pane_g1_ParamLimits

0x0b9b,	// (0x00080a57) field_cale_ev_pane_g1

0x0ba7,	// (0x00080a63) field_cale_ev_pane_g2_ParamLimits

0x0ba7,	// (0x00080a63) field_cale_ev_pane_g2

0x0bbf,	// (0x00080a7b) field_cale_ev_pane_g3_ParamLimits

0x0bbf,	// (0x00080a7b) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0008f5d6) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0008f5d6) field_cale_ev_pane_g

0x0bd7,	// (0x00080a93) field_cale_ev_pane_t1_ParamLimits

0x0bd7,	// (0x00080a93) field_cale_ev_pane_t1

0x9312,	// (0x000891ce) field_cale_ev_content_pane_t1_ParamLimits

0x9312,	// (0x000891ce) field_cale_ev_content_pane_t1

0xdd31,	// (0x0008dbed) bg_button_pane_cp01

0x4083,	// (0x00083f3f) listscroll_cale_week_pane_ParamLimits

0x5fbe,	// (0x00085e7a) popup_toolbar_window_cp01

0x41c3,	// (0x0008407f) listscroll_cale_week_pane_t1_ParamLimits

0x4083,	// (0x00083f3f) listscroll_cale_day_pane_ParamLimits

0x5fbe,	// (0x00085e7a) popup_toolbar_window_cp02

0x41c3,	// (0x0008407f) listscroll_cale_day_pane_t1_ParamLimits

0x4083,	// (0x00083f3f) main_cale_month_pane_ParamLimits

0x8a5b,	// (0x00088917) popup_toolbar_window_cp03_ParamLimits

0x8a5b,	// (0x00088917) popup_toolbar_window_cp03

0x83b4,	// (0x00088270) main_image_pane_g2_ParamLimits

0x83b4,	// (0x00088270) main_image_pane_g2

0x83c0,	// (0x0008827c) main_image_pane_g3_ParamLimits

0x83c0,	// (0x0008827c) main_image_pane_g3

0x0002,

0xf50b,	// (0x0008f3c7) main_image_pane_g_ParamLimits

0xf50b,	// (0x0008f3c7) main_image_pane_g

0xde4b,	// (0x0008dd07) main_image_pane_t1_ParamLimits

0x83cc,	// (0x00088288) main_image_pane_t2_ParamLimits

0x83cc,	// (0x00088288) main_image_pane_t2

0x83de,	// (0x0008829a) main_image_pane_t3_ParamLimits

0x83de,	// (0x0008829a) main_image_pane_t3

0x83f0,	// (0x000882ac) main_image_pane_t4_ParamLimits

0x83f0,	// (0x000882ac) main_image_pane_t4

0x0003,

0xf512,	// (0x0008f3ce) main_image_pane_t_ParamLimits

0xf512,	// (0x0008f3ce) main_image_pane_t

0x8402,	// (0x000882be) popup_image_details_window_cp01

0x840c,	// (0x000882c8) popup_toobar_trans_pane_cp01_ParamLimits

0x840c,	// (0x000882c8) popup_toobar_trans_pane_cp01

0x89cc,	// (0x00088888) popup_image_details_window_ParamLimits

0x89cc,	// (0x00088888) popup_image_details_window

0xeff3,	// (0x0008eeaf) popup_image_focus_window

0x8ccc,	// (0x00088b88) camera2_autofocus_pane_ParamLimits

0x8ccc,	// (0x00088b88) camera2_autofocus_pane

0x021b,	// (0x000800d7) bg_popup_sub_pane_cp06

0x0bee,	// (0x00080aaa) popup_image_focus_window_g1

0x0bf6,	// (0x00080ab2) popup_image_focus_window_g2

0x0bfe,	// (0x00080aba) popup_image_focus_window_g3

0x0c06,	// (0x00080ac2) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0008f5dd) popup_image_focus_window_g

0x0c0e,	// (0x00080aca) popup_image_focus_window_t1

0x0c1c,	// (0x00080ad8) popup_image_focus_window_t2

0x0c2c,	// (0x00080ae8) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0008f5e6) popup_image_focus_window_t

0x0c3a,	// (0x00080af6) camera2_autofocus_pane_g1

0x0294,	// (0x00080150) bg_tb_trans_pane_cp01

0x0c48,	// (0x00080b04) popup_image_details_window_g1

0x0c5b,	// (0x00080b17) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0008f5f8) popup_image_details_window_g

0x0c84,	// (0x00080b40) popup_image_details_window_t1

0x0c96,	// (0x00080b52) popup_image_details_window_t2

0x0caf,	// (0x00080b6b) popup_image_details_window_t3

0x0cc3,	// (0x00080b7f) popup_image_details_window_t4

0x0cde,	// (0x00080b9a) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0008f5ff) popup_image_details_window_t

0x406f,	// (0x00083f2b) bg_calc_paper_pane_ParamLimits

0x5d6d,	// (0x00085c29) grid_highlight_pane_cp013

0x5d77,	// (0x00085c33) list_calc_pane_ParamLimits

0x5d89,	// (0x00085c45) scroll_pane_cp024

0x4083,	// (0x00083f3f) bg_calc_display_pane_ParamLimits

0x5d91,	// (0x00085c4d) calc_display_pane_t1_ParamLimits

0x5da6,	// (0x00085c62) calc_display_pane_t2_ParamLimits

0x5dbb,	// (0x00085c77) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0008f02f) calc_display_pane_t_ParamLimits

0x5e8e,	// (0x00085d4a) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0008f04c) cell_calc_pane_g

0x5e97,	// (0x00085d53) cell_calc_pane_t1

0x40e2,	// (0x00083f9e) grid_highlight_pane_cp02_ParamLimits

0x40f8,	// (0x00083fb4) toolbar_button_pane_cp01_ParamLimits

0x40f8,	// (0x00083fb4) toolbar_button_pane_cp01

0xde90,	// (0x0008dd4c) temp_image_control_pane_ParamLimits

0xde90,	// (0x0008dd4c) temp_image_control_pane

0x0294,	// (0x00080150) main_mp3_pane

0x0cf8,	// (0x00080bb4) temp_image_control_pane_g1_ParamLimits

0x0cf8,	// (0x00080bb4) temp_image_control_pane_g1

0x0d06,	// (0x00080bc2) temp_image_control_pane_g2_ParamLimits

0x0d06,	// (0x00080bc2) temp_image_control_pane_g2

0x0d18,	// (0x00080bd4) temp_image_control_pane_g3_ParamLimits

0x0d18,	// (0x00080bd4) temp_image_control_pane_g3

0x9360,	// (0x0008921c) temp_image_control_pane_g4_ParamLimits

0x9360,	// (0x0008921c) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0008f60a) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0008f60a) temp_image_control_pane_g

0x0cf8,	// (0x00080bb4) main_mp3_pane_g1

0x9371,	// (0x0008922d) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0008f613) main_mp3_pane_g

0x0d5b,	// (0x00080c17) main_mp3_pane_t1

0x423a,	// (0x000840f6) main_camera_pane_g8_ParamLimits

0x423a,	// (0x000840f6) main_camera_pane_g8

0x66e5,	// (0x000865a1) main_video_pane_g7_ParamLimits

0x66e5,	// (0x000865a1) main_video_pane_g7

0x8e0f,	// (0x00088ccb) main_camera2_pane_t7_ParamLimits

0x8e0f,	// (0x00088ccb) main_camera2_pane_t7

0x4384,	// (0x00084240) scroll_pane_cp025_ParamLimits

0x4384,	// (0x00084240) scroll_pane_cp025

0x4398,	// (0x00084254) scroll_pane_cp026_ParamLimits

0x4398,	// (0x00084254) scroll_pane_cp026

0x43a7,	// (0x00084263) wml_content_pane_ParamLimits

0x021b,	// (0x000800d7) main_touch_calib_pane

0x9415,	// (0x000892d1) main_touch_calib_pane_g1

0x9421,	// (0x000892dd) main_touch_calib_pane_g2

0x942d,	// (0x000892e9) main_touch_calib_pane_g3

0x9439,	// (0x000892f5) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0008f631) main_touch_calib_pane_g

0x9445,	// (0x00089301) main_touch_calib_pane_t1

0x945c,	// (0x00089318) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0008f63a) main_touch_calib_pane_t

0xdb07,	// (0x0008d9c3) mup_progress_pane_cp02

0xdb26,	// (0x0008d9e2) navi_pane_g1

0xdb88,	// (0x0008da44) navi_pane_mp_t3

0x0294,	// (0x00080150) main_mp3_pane_ParamLimits

0x8a9d,	// (0x00088959) navi_pane_ParamLimits

0x0cf8,	// (0x00080bb4) main_mp3_pane_g1_ParamLimits

0x9371,	// (0x0008922d) main_mp3_pane_g2_ParamLimits

0x937d,	// (0x00089239) main_mp3_pane_g3_ParamLimits

0x937d,	// (0x00089239) main_mp3_pane_g3

0x9389,	// (0x00089245) main_mp3_pane_g4_ParamLimits

0x9389,	// (0x00089245) main_mp3_pane_g4

0x0d28,	// (0x00080be4) main_mp3_pane_g5_ParamLimits

0x0d28,	// (0x00080be4) main_mp3_pane_g5

0x0d36,	// (0x00080bf2) main_mp3_pane_g6_ParamLimits

0x0d36,	// (0x00080bf2) main_mp3_pane_g6

0x0d43,	// (0x00080bff) main_mp3_pane_g7_ParamLimits

0x0d43,	// (0x00080bff) main_mp3_pane_g7

0x0d4f,	// (0x00080c0b) main_mp3_pane_g8_ParamLimits

0x0d4f,	// (0x00080c0b) main_mp3_pane_g8

0xf757,	// (0x0008f613) main_mp3_pane_g_ParamLimits

0x9395,	// (0x00089251) main_mp3_pane_t2

0x93a5,	// (0x00089261) main_mp3_pane_t3

0x0d69,	// (0x00080c25) main_mp3_pane_t4

0x0d77,	// (0x00080c33) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0008f624) main_mp3_pane_t

0x0d85,	// (0x00080c41) mup_progress_pane_cp01

0x0249,	// (0x00080105) aid_zoom_text_secondary2

0x0b7b,	// (0x00080a37) list_cale_ev2_pane

0x0b83,	// (0x00080a3f) scroll_pane_cp023_ParamLimits

0x94b3,	// (0x0008936f) field_cale_ev2_pane_ParamLimits

0x94b3,	// (0x0008936f) field_cale_ev2_pane

0x0d8d,	// (0x00080c49) field_cale_ev2_pane_g1_ParamLimits

0x0d8d,	// (0x00080c49) field_cale_ev2_pane_g1

0x0d99,	// (0x00080c55) field_cale_ev2_pane_g2_ParamLimits

0x0d99,	// (0x00080c55) field_cale_ev2_pane_g2

0x0db1,	// (0x00080c6d) field_cale_ev2_pane_g3_ParamLimits

0x0db1,	// (0x00080c6d) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0008f645) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0008f645) field_cale_ev2_pane_g

0x0dd5,	// (0x00080c91) field_cale_ev2_pane_t1_ParamLimits

0x0dd5,	// (0x00080c91) field_cale_ev2_pane_t1

0x0dec,	// (0x00080ca8) field_cale_ev2_pane_t2_ParamLimits

0x0dec,	// (0x00080ca8) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0008f64e) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0008f64e) field_cale_ev2_pane_t

0x8290,	// (0x0008814c) main_postcard_pane_g5_ParamLimits

0x8290,	// (0x0008814c) main_postcard_pane_g5

0x829e,	// (0x0008815a) main_postcard_pane_g6_ParamLimits

0x829e,	// (0x0008815a) main_postcard_pane_g6

0x6523,	// (0x000863df) camera2_autofocus_pane_cp_ParamLimits

0x6523,	// (0x000863df) camera2_autofocus_pane_cp

0x0294,	// (0x00080150) main_mup3_pane

0x94f1,	// (0x000893ad) main_mup3_pane_g1_ParamLimits

0x94f1,	// (0x000893ad) main_mup3_pane_g1

0x9512,	// (0x000893ce) main_mup3_pane_g2_ParamLimits

0x9512,	// (0x000893ce) main_mup3_pane_g2

0x958e,	// (0x0008944a) main_mup3_pane_g3_ParamLimits

0x958e,	// (0x0008944a) main_mup3_pane_g3

0x95cf,	// (0x0008948b) main_mup3_pane_g4_ParamLimits

0x95cf,	// (0x0008948b) main_mup3_pane_g4

0x9610,	// (0x000894cc) main_mup3_pane_g5_ParamLimits

0x9610,	// (0x000894cc) main_mup3_pane_g5

0x9651,	// (0x0008950d) main_mup3_pane_g6_ParamLimits

0x9651,	// (0x0008950d) main_mup3_pane_g6

0x0e01,	// (0x00080cbd) main_mup3_pane_g7_ParamLimits

0x0e01,	// (0x00080cbd) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0008f65e) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0008f65e) main_mup3_pane_g

0x96c3,	// (0x0008957f) main_mup3_pane_t1_ParamLimits

0x96c3,	// (0x0008957f) main_mup3_pane_t1

0x9736,	// (0x000895f2) main_mup3_pane_t2_ParamLimits

0x9736,	// (0x000895f2) main_mup3_pane_t2

0x9803,	// (0x000896bf) main_mup3_pane_t4_ParamLimits

0x9803,	// (0x000896bf) main_mup3_pane_t4

0x9857,	// (0x00089713) main_mup3_pane_t5_ParamLimits

0x9857,	// (0x00089713) main_mup3_pane_t5

0x9903,	// (0x000897bf) main_mup3_pane_t6_ParamLimits

0x9903,	// (0x000897bf) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0008f66f) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0008f66f) main_mup3_pane_t

0x99ab,	// (0x00089867) mup3_progress_pane_ParamLimits

0x99ab,	// (0x00089867) mup3_progress_pane

0x9a16,	// (0x000898d2) popup_mup3_control_window_ParamLimits

0x9a16,	// (0x000898d2) popup_mup3_control_window

0x0e0f,	// (0x00080ccb) popup_mup3_text_window

0x9a33,	// (0x000898ef) mup3_progress_pane_t1

0x9a4a,	// (0x00089906) mup3_progress_pane_t2

0x0e17,	// (0x00080cd3) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0008f67c) mup3_progress_pane_t

0x0e2e,	// (0x00080cea) mup_progress_pane_cp03

0x021b,	// (0x000800d7) bg_tb_trans_pane_cp04

0x9a61,	// (0x0008991d) mup3_volume_pane

0x9a69,	// (0x00089925) popup_mup3_control_window_g1

0x1c8f,	// (0x00081b4b) mup3_volume_pane_g1

0x1c98,	// (0x00081b54) mup3_volume_pane_g2

0x1ca1,	// (0x00081b5d) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0008f683) mup3_volume_pane_g

0x021b,	// (0x000800d7) bg_tb_trans_pane_cp03

0x0e3e,	// (0x00080cfa) popup_mup3_text_window_g1

0x0e46,	// (0x00080d02) popup_mup3_text_window_t1

0x40cb,	// (0x00083f87) list_calc_item_pane_g1_ParamLimits

0x0801,	// (0x000806bd) mup_volume_pane_cp_g1

0x9473,	// (0x0008932f) main_touch_calib_pane_t3

0x9487,	// (0x00089343) main_touch_calib_pane_t4

0x949d,	// (0x00089359) main_touch_calib_pane_t5

0x0225,	// (0x000800e1) aid_cell_size_toolbar2

0x022d,	// (0x000800e9) aid_popup3_width_pane

0x0239,	// (0x000800f5) aid_zoom_text_msg_primary

0x64f6,	// (0x000863b2) vorec_t7

0x408f,	// (0x00083f4b) bg_calc_paper_pane_g1_ParamLimits

0x40a7,	// (0x00083f63) bg_calc_paper_pane_g2_ParamLimits

0x409b,	// (0x00083f57) bg_calc_paper_pane_g3_ParamLimits

0x40bf,	// (0x00083f7b) bg_calc_paper_pane_g4_ParamLimits

0x40b3,	// (0x00083f6f) bg_calc_paper_pane_g5_ParamLimits

0x5dfc,	// (0x00085cb8) bg_calc_paper_pane_g6_ParamLimits

0x5e0d,	// (0x00085cc9) bg_calc_paper_pane_g7_ParamLimits

0x5e1e,	// (0x00085cda) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0008f036) bg_calc_paper_pane_g_ParamLimits

0x5e2f,	// (0x00085ceb) calc_bg_paper_pane_g9_ParamLimits

0x6614,	// (0x000864d0) image_qvga_pane_ParamLimits

0x6614,	// (0x000864d0) image_qvga_pane

0x3fb8,	// (0x00083e74) bg_popup_sub_pane_cp04_ParamLimits

0xddc7,	// (0x0008dc83) popup_mup_playback_window_g1_ParamLimits

0xddd3,	// (0x0008dc8f) popup_mup_playback_window_t1_ParamLimits

0xdde8,	// (0x0008dca4) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0008f3c2) popup_mup_playback_window_t_ParamLimits

0x8f3e,	// (0x00088dfa) main_mup2_pane_g3_ParamLimits

0x8f3e,	// (0x00088dfa) main_mup2_pane_g3

0x6919,	// (0x000867d5) popup_toolbar_window_cp04

0xe1e3,	// (0x0008e09f) popup_call2_audio_second_window_g3_ParamLimits

0xe1e3,	// (0x0008e09f) popup_call2_audio_second_window_g3

0xe5ed,	// (0x0008e4a9) popup_call2_audio_first_window_g4_ParamLimits

0xe5ed,	// (0x0008e4a9) popup_call2_audio_first_window_g4

0xec6c,	// (0x0008eb28) popup_call2_audio_in_window_g4_ParamLimits

0xec6c,	// (0x0008eb28) popup_call2_audio_in_window_g4

0x83a7,	// (0x00088263) aid_area_sk_bg_cut_ParamLimits

0x83a7,	// (0x00088263) aid_area_sk_bg_cut

0xddfd,	// (0x0008dcb9) aid_area_sk_bg_cut_2_ParamLimits

0xddfd,	// (0x0008dcb9) aid_area_sk_bg_cut_2

0x92c4,	// (0x00089180) aid_placing_details_win

0x92cc,	// (0x00089188) aid_placing_details_win_2

0x0c3a,	// (0x00080af6) camera2_autofocus_pane_g1_ParamLimits

0x59d2,	// (0x0008588e) popup_fixed_preview_cale_window_ParamLimits

0x59d2,	// (0x0008588e) popup_fixed_preview_cale_window

0xdbd7,	// (0x0008da93) navi_slider_pane_g3

0xdbe0,	// (0x0008da9c) navi_slider_pane_g4

0xdbe9,	// (0x0008daa5) navi_slider_pane_g5

0xdbd7,	// (0x0008da93) navi_slider_pane_g6

0x7bca,	// (0x00087a86) navi_slider_pane_g7

0xdcfe,	// (0x0008dbba) mup_scale_pane_g3

0xdd07,	// (0x0008dbc3) mup_scale_pane_g4

0xdd10,	// (0x0008dbcc) mup_scale_pane_g5

0x8045,	// (0x00087f01) mup_scale_pane_g6

0x804e,	// (0x00087f0a) mup_scale_pane_g7

0xdbd7,	// (0x0008da93) cams2_slider_pane_g3

0x08b6,	// (0x00080772) cams2_slider_pane_g4

0x921c,	// (0x000890d8) cams2_slider_pane_g5

0xdbd7,	// (0x0008da93) cams2_slider_pane_g6

0x9224,	// (0x000890e0) cams2_slider_pane_g7

0x0af8,	// (0x000809b4) camera2_autofocus_pane_cp_g1

0x0e54,	// (0x00080d10) bg_popup_preview_window_pane_cp02_ParamLimits

0x0e54,	// (0x00080d10) bg_popup_preview_window_pane_cp02

0x0e60,	// (0x00080d1c) list_fp_cale_pane_ParamLimits

0x0e60,	// (0x00080d1c) list_fp_cale_pane

0x0e6c,	// (0x00080d28) popup_fixed_preview_cale_window_t1_ParamLimits

0x0e6c,	// (0x00080d28) popup_fixed_preview_cale_window_t1

0x9a72,	// (0x0008992e) popup_fixed_preview_cale_window_t2_ParamLimits

0x9a72,	// (0x0008992e) popup_fixed_preview_cale_window_t2

0x9a87,	// (0x00089943) popup_fixed_preview_cale_window_t3_ParamLimits

0x9a87,	// (0x00089943) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0008f68a) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0008f68a) popup_fixed_preview_cale_window_t

0x9a9c,	// (0x00089958) list_single_fp_cale_pane_ParamLimits

0x9a9c,	// (0x00089958) list_single_fp_cale_pane

0x0ea2,	// (0x00080d5e) list_single_fp_cale_pane_g1_ParamLimits

0x0ea2,	// (0x00080d5e) list_single_fp_cale_pane_g1

0x0eae,	// (0x00080d6a) list_single_fp_cale_pane_g2_ParamLimits

0x0eae,	// (0x00080d6a) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0008f691) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0008f691) list_single_fp_cale_pane_g

0x0ec7,	// (0x00080d83) list_single_fp_cale_pane_t1_ParamLimits

0x0ec7,	// (0x00080d83) list_single_fp_cale_pane_t1

0x0ed9,	// (0x00080d95) list_single_fp_cale_pane_t2_ParamLimits

0x0ed9,	// (0x00080d95) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0008f698) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0008f698) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x021b,	// (0x000800d7) main_dialer_pane

0x9aac,	// (0x00089968) aid_cell_size_keypad

0x9ab6,	// (0x00089972) dialer_ne_pane

0x9ac0,	// (0x0008997c) grid_dialer_command_1_pane

0x9ac8,	// (0x00089984) grid_dialer_command_2_pane

0x9ad0,	// (0x0008998c) grid_dialer_keypad_pane

0x9ae4,	// (0x000899a0) bg_popup_call_pane_cp06_ParamLimits

0x9ae4,	// (0x000899a0) bg_popup_call_pane_cp06

0x9af0,	// (0x000899ac) dialer_ne_clear_pane_ParamLimits

0x9af0,	// (0x000899ac) dialer_ne_clear_pane

0x0f0c,	// (0x00080dc8) dialer_ne_pane_g1

0x0f14,	// (0x00080dd0) dialer_ne_pane_t1_ParamLimits

0x0f14,	// (0x00080dd0) dialer_ne_pane_t1

0x9afc,	// (0x000899b8) dialer_ne_pane_t2_ParamLimits

0x9afc,	// (0x000899b8) dialer_ne_pane_t2

0x9b19,	// (0x000899d5) dialer_ne_pane_t3_ParamLimits

0x9b19,	// (0x000899d5) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0008f69d) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0008f69d) dialer_ne_pane_t

0x9b3d,	// (0x000899f9) dialer_ne_pane_t3_copy1_ParamLimits

0x9b3d,	// (0x000899f9) dialer_ne_pane_t3_copy1

0x9b61,	// (0x00089a1d) cell_dialer_keypad_pane_ParamLimits

0x9b61,	// (0x00089a1d) cell_dialer_keypad_pane

0x9b78,	// (0x00089a34) cell_dialer_command_1_pane_ParamLimits

0x9b78,	// (0x00089a34) cell_dialer_command_1_pane

0x9b8e,	// (0x00089a4a) cell_dialer_command_2_pane_ParamLimits

0x9b8e,	// (0x00089a4a) cell_dialer_command_2_pane

0x0f26,	// (0x00080de2) bg_button_pane_cp02_ParamLimits

0x0f26,	// (0x00080de2) bg_button_pane_cp02

0x9b9d,	// (0x00089a59) cell_dialer_keypad_pane_g1_ParamLimits

0x9b9d,	// (0x00089a59) cell_dialer_keypad_pane_g1

0x0f26,	// (0x00080de2) bg_button_pane_cp03_ParamLimits

0x0f26,	// (0x00080de2) bg_button_pane_cp03

0x9bb1,	// (0x00089a6d) cell_dialer_command_1_pane_g1_ParamLimits

0x9bb1,	// (0x00089a6d) cell_dialer_command_1_pane_g1

0x0f32,	// (0x00080dee) bg_button_pane_cp04

0x9bc5,	// (0x00089a81) cell_dialer_command_2_pane_g1

0xdbc6,	// (0x0008da82) bg_button_pane_cp06

0x0f3a,	// (0x00080df6) dialer_ne_clear_pane_g1

0x7b0d,	// (0x000879c9) navi_pane_g2

0x7b3b,	// (0x000879f7) navi_pane_g3

0x0002,

0xf409,	// (0x0008f2c5) navi_pane_g

0x7b66,	// (0x00087a22) navi_pane_mv_g2

0x7b8d,	// (0x00087a49) navi_pane_mv_g5

0x7b95,	// (0x00087a51) navi_pane_mv_t1

0x4083,	// (0x00083f3f) main_clock2_pane

0x9bfb,	// (0x00089ab7) main_clock2_list_pane_ParamLimits

0x9bfb,	// (0x00089ab7) main_clock2_list_pane

0x9c25,	// (0x00089ae1) main_clock2_pane_t1_ParamLimits

0x9c25,	// (0x00089ae1) main_clock2_pane_t1

0x9c53,	// (0x00089b0f) main_clock2_pane_t2_ParamLimits

0x9c53,	// (0x00089b0f) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0008f6a4) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0008f6a4) main_clock2_pane_t

0x9cbc,	// (0x00089b78) popup_clock_analogue_window_cp03_ParamLimits

0x9cbc,	// (0x00089b78) popup_clock_analogue_window_cp03

0x9cdc,	// (0x00089b98) popup_clock_digital_window_cp02_ParamLimits

0x9cdc,	// (0x00089b98) popup_clock_digital_window_cp02

0x9d4d,	// (0x00089c09) main_clock2_list_single_pane_ParamLimits

0x9d4d,	// (0x00089c09) main_clock2_list_single_pane

0xdbc6,	// (0x0008da82) list_highlight_pane_cp05

0x0f42,	// (0x00080dfe) main_clock2_list_single_pane_t1

0x6919,	// (0x000867d5) popup_toolbar_window_cp04_ParamLimits

0x9330,	// (0x000891ec) camera2_autofocus_pane_g2_ParamLimits

0x9330,	// (0x000891ec) camera2_autofocus_pane_g2

0x933c,	// (0x000891f8) camera2_autofocus_pane_g3_ParamLimits

0x933c,	// (0x000891f8) camera2_autofocus_pane_g3

0x9348,	// (0x00089204) camera2_autofocus_pane_g4_ParamLimits

0x9348,	// (0x00089204) camera2_autofocus_pane_g4

0x9354,	// (0x00089210) camera2_autofocus_pane_g5_ParamLimits

0x9354,	// (0x00089210) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0008f5ed) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0008f5ed) camera2_autofocus_pane_g

0x94d1,	// (0x0008938d) camera2_autofocus_pane_cp_g2

0x94d9,	// (0x00089395) camera2_autofocus_pane_cp_g3

0x94e1,	// (0x0008939d) camera2_autofocus_pane_cp_g4

0x94e9,	// (0x000893a5) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0008f653) camera2_autofocus_pane_cp_g

0x9adc,	// (0x00089998) popup_dialer_spcha_window

0x021b,	// (0x000800d7) bg_popup_sub_pane_cp07

0x0f50,	// (0x00080e0c) list_spcha_pane

0x0f58,	// (0x00080e14) list_single_spcha_pane_ParamLimits

0x0f58,	// (0x00080e14) list_single_spcha_pane

0x021b,	// (0x000800d7) list_highlight_pane_cp06

0x0f69,	// (0x00080e25) list_single_spcha_pane_t1

0xea16,	// (0x0008e8d2) popup_call2_audio_out_window_g4_ParamLimits

0xea16,	// (0x0008e8d2) popup_call2_audio_out_window_g4

0x021b,	// (0x000800d7) main_imed2_pane

0xeffd,	// (0x0008eeb9) popup_imed_adjust2_window

0x89da,	// (0x00088896) popup_imed_trans_window_ParamLimits

0x89da,	// (0x00088896) popup_imed_trans_window

0x0930,	// (0x000807ec) popup_blid_sat_info2_window_t1

0x093e,	// (0x000807fa) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0008f582) popup_blid_sat_info2_window_t

0x9df7,	// (0x00089cb3) aid_size_cell_colour_35

0x9e11,	// (0x00089ccd) aid_size_cell_colour_112

0x9e28,	// (0x00089ce4) aid_size_cell_effect

0x0294,	// (0x00080150) bg_tb_trans_pane_cp02

0x46dc,	// (0x00084598) heading_imed_pane

0x9e42,	// (0x00089cfe) listscroll_imed_pane

0x0f77,	// (0x00080e33) heading_imed_pane_g1

0x0f7f,	// (0x00080e3b) heading_imed_pane_t1

0x0f8d,	// (0x00080e49) grid_imed_colour_35_pane_ParamLimits

0x0f8d,	// (0x00080e49) grid_imed_colour_35_pane

0x9e4e,	// (0x00089d0a) grid_imed_effect_pane

0x0fa9,	// (0x00080e65) list_imed_aspect_pane

0x9e5e,	// (0x00089d1a) scroll_pane_cp027_ParamLimits

0x9e5e,	// (0x00089d1a) scroll_pane_cp027

0x9e6a,	// (0x00089d26) cell_imed_effect_pane_ParamLimits

0x9e6a,	// (0x00089d26) cell_imed_effect_pane

0x0fb1,	// (0x00080e6d) cell_imed_colour_pane_ParamLimits

0x0fb1,	// (0x00080e6d) cell_imed_colour_pane

0x0ffb,	// (0x00080eb7) cell_imed_colour_pane_g1_ParamLimits

0x0ffb,	// (0x00080eb7) cell_imed_colour_pane_g1

0x100c,	// (0x00080ec8) hgihlgiht_grid_pane_cp016_ParamLimits

0x100c,	// (0x00080ec8) hgihlgiht_grid_pane_cp016

0x9e86,	// (0x00089d42) cell_imed_effect_pane_g1

0x9e8e,	// (0x00089d4a) grid_highlight_pane_cp017

0x101d,	// (0x00080ed9) list_imed_single_pane_ParamLimits

0x101d,	// (0x00080ed9) list_imed_single_pane

0x021b,	// (0x000800d7) list_highlight_pane_cp07

0x1031,	// (0x00080eed) list_imed_aspect_pane_comp1_t1

0xefd1,	// (0x0008ee8d) bg_tb_trans_pane_cp05

0x1053,	// (0x00080f0f) popup_imed_adjust2_window_g1

0x107a,	// (0x00080f36) popup_imed_adjust2_window_t1

0x1092,	// (0x00080f4e) slider_imed_adjust_pane

0x10a6,	// (0x00080f62) slider_imed_adjust_pane_g1

0x10b6,	// (0x00080f72) slider_imed_adjust_pane_g2

0x10c6,	// (0x00080f82) slider_imed_adjust_pane_g3

0x10d7,	// (0x00080f93) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0008f6c1) slider_imed_adjust_pane_g

0x9e97,	// (0x00089d53) aid_size_cell_clipart2

0x9ea3,	// (0x00089d5f) grid_imed_clipart_pane

0x10e8,	// (0x00080fa4) scroll_pane_cp031

0x9ead,	// (0x00089d69) cell_imed_clipart_pane_ParamLimits

0x9ead,	// (0x00089d69) cell_imed_clipart_pane

0x9ecb,	// (0x00089d87) cell_imed_clipart_pane_g1

0x021b,	// (0x000800d7) grid_highlight_pane_cp014

0x9c07,	// (0x00089ac3) main_clock2_pane_g1_ParamLimits

0x9c07,	// (0x00089ac3) main_clock2_pane_g1

0x9cf8,	// (0x00089bb4) aid_call2_pane_cp10

0x9d0a,	// (0x00089bc6) aid_call_pane_cp10

0xdafb,	// (0x0008d9b7) popup_clock_analogue_window_cp10_g1

0xdafb,	// (0x0008d9b7) popup_clock_analogue_window_cp10_g2

0x9d1c,	// (0x00089bd8) popup_clock_analogue_window_cp10_g3

0x9d1c,	// (0x00089bd8) popup_clock_analogue_window_cp10_g4

0xdafb,	// (0x0008d9b7) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0008f6af) popup_clock_analogue_window_cp10_g

0x9d2e,	// (0x00089bea) popup_clock_analogue_window_cp10_t1

0x9d5f,	// (0x00089c1b) clock_digital_number_pane_cp10_ParamLimits

0x9d5f,	// (0x00089c1b) clock_digital_number_pane_cp10

0x9d77,	// (0x00089c33) clock_digital_number_pane_cp11_ParamLimits

0x9d77,	// (0x00089c33) clock_digital_number_pane_cp11

0x9d8f,	// (0x00089c4b) clock_digital_number_pane_cp12_ParamLimits

0x9d8f,	// (0x00089c4b) clock_digital_number_pane_cp12

0x9da7,	// (0x00089c63) clock_digital_number_pane_cp13_ParamLimits

0x9da7,	// (0x00089c63) clock_digital_number_pane_cp13

0x9dbf,	// (0x00089c7b) clock_digital_separator_pane_cp10_ParamLimits

0x9dbf,	// (0x00089c7b) clock_digital_separator_pane_cp10

0x9dd7,	// (0x00089c93) popup_clock_digital_window_cp02_t1_ParamLimits

0x9dd7,	// (0x00089c93) popup_clock_digital_window_cp02_t1

0x3fb0,	// (0x00083e6c) clock_digital_number_pane_cp10_g1

0x3fb0,	// (0x00083e6c) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0008f6ca) clock_digital_number_pane_cp10_g

0x3fb0,	// (0x00083e6c) clock_digital_separator_pane_cp10_g1

0x3fb0,	// (0x00083e6c) clock_digital_separator_pane_g2_cp10

0xdb96,	// (0x0008da52) navi_pane_vded_g4

0xdb9f,	// (0x0008da5b) navi_pane_vded_g5

0xdba8,	// (0x0008da64) navi_pane_vded_t1

0x021b,	// (0x000800d7) main_vded_pane

0x9ed4,	// (0x00089d90) main_vded_pane_g1

0x9ee0,	// (0x00089d9c) main_vded_pane_g2

0x9eea,	// (0x00089da6) main_vded_pane_g3

0x0002,

0xf813,	// (0x0008f6cf) main_vded_pane_g

0x9ef4,	// (0x00089db0) main_vded_pane_t1

0x9f02,	// (0x00089dbe) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0008f6d6) main_vded_pane_t

0x9f10,	// (0x00089dcc) vded_slider_pane

0x9f1a,	// (0x00089dd6) vded_video_pane

0x10f0,	// (0x00080fac) vded_video_pane_g1

0x9f26,	// (0x00089de2) vded_video_pane_g2

0x0af8,	// (0x000809b4) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0008f6db) vded_video_pane_g

0x10fa,	// (0x00080fb6) vded_slider_pane_g1

0x0801,	// (0x000806bd) vded_slider_pane_g2

0x1103,	// (0x00080fbf) vded_slider_pane_g3

0x110c,	// (0x00080fc8) vded_slider_pane_g4

0x1115,	// (0x00080fd1) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0008f6e2) vded_slider_pane_g

0x9a0a,	// (0x000898c6) mup3_rocker_pane_ParamLimits

0x9a0a,	// (0x000898c6) mup3_rocker_pane

0x9f2f,	// (0x00089deb) mup3_control_keys_pane_g1

0x9f37,	// (0x00089df3) mup3_control_keys_pane_g2

0x9f3f,	// (0x00089dfb) mup3_control_keys_pane_g3

0x9f47,	// (0x00089e03) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0008f6ed) mup3_control_keys_pane_g

0x59f0,	// (0x000858ac) popup_toolbar2_fixed_window_cp01_ParamLimits

0x59f0,	// (0x000858ac) popup_toolbar2_fixed_window_cp01

0x9a26,	// (0x000898e2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9a26,	// (0x000898e2) popup_toolbar2_fixed_window_cp02

0xe355,	// (0x0008e211) popup_call2_audio_second_window_t4_ParamLimits

0xe355,	// (0x0008e211) popup_call2_audio_second_window_t4

0xe883,	// (0x0008e73f) popup_call2_audio_first_window_t6_ParamLimits

0xe883,	// (0x0008e73f) popup_call2_audio_first_window_t6

0xeb19,	// (0x0008e9d5) popup_call2_audio_out_window_t6_ParamLimits

0xeb19,	// (0x0008e9d5) popup_call2_audio_out_window_t6

0x021b,	// (0x000800d7) main_vitu_pane

0x9f57,	// (0x00089e13) aid_size_cell_itu_ParamLimits

0x9f57,	// (0x00089e13) aid_size_cell_itu

0x1563,	// (0x0008141f) bg_popup_window_pane_cp08_ParamLimits

0x1563,	// (0x0008141f) bg_popup_window_pane_cp08

0x9f65,	// (0x00089e21) field_vitu_entry_pane_ParamLimits

0x9f65,	// (0x00089e21) field_vitu_entry_pane

0x9f74,	// (0x00089e30) grid_vitu_function_pane_ParamLimits

0x9f74,	// (0x00089e30) grid_vitu_function_pane

0x9f84,	// (0x00089e40) grid_vitu_itu_pane_ParamLimits

0x9f84,	// (0x00089e40) grid_vitu_itu_pane

0x9f94,	// (0x00089e50) cell_vitu_itu_pane_ParamLimits

0x9f94,	// (0x00089e50) cell_vitu_itu_pane

0x9fab,	// (0x00089e67) cell_vitu_function_pane_ParamLimits

0x9fab,	// (0x00089e67) cell_vitu_function_pane

0x0294,	// (0x00080150) bg_popup_sub_pane_cp08_ParamLimits

0x0294,	// (0x00080150) bg_popup_sub_pane_cp08

0x9fbf,	// (0x00089e7b) field_vitu_entry_pane_t1_ParamLimits

0x9fbf,	// (0x00089e7b) field_vitu_entry_pane_t1

0x1136,	// (0x00080ff2) field_vitu_entry_pane_t2_ParamLimits

0x1136,	// (0x00080ff2) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0008f6fb) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0008f6fb) field_vitu_entry_pane_t

0x1153,	// (0x0008100f) bg_button_pane_cp05_ParamLimits

0x1153,	// (0x0008100f) bg_button_pane_cp05

0x9fd9,	// (0x00089e95) cell_vitu_itu_pane_g1

0x9ff1,	// (0x00089ead) cell_vitu_itu_pane_t1_ParamLimits

0x9ff1,	// (0x00089ead) cell_vitu_itu_pane_t1

0xa003,	// (0x00089ebf) cell_vitu_itu_pane_t2_ParamLimits

0xa003,	// (0x00089ebf) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0008f700) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0008f700) cell_vitu_itu_pane_t

0x1161,	// (0x0008101d) bg_button_pane_cp07

0xa038,	// (0x00089ef4) cell_vitu_function_pane_g1

0x5c98,	// (0x00085b54) main_calc_pane_g1

0x57f1,	// (0x000856ad) aid_visual_content_pane

0x021b,	// (0x000800d7) main_vradio_pane

0xa041,	// (0x00089efd) main_vradio_pane_g1_ParamLimits

0xa041,	// (0x00089efd) main_vradio_pane_g1

0x116b,	// (0x00081027) main_vradio_pane_g2_ParamLimits

0x116b,	// (0x00081027) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0008f707) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0008f707) main_vradio_pane_g

0xa04f,	// (0x00089f0b) main_vradio_pane_t1_ParamLimits

0xa04f,	// (0x00089f0b) main_vradio_pane_t1

0xa061,	// (0x00089f1d) main_vradio_pane_t2_ParamLimits

0xa061,	// (0x00089f1d) main_vradio_pane_t2

0x1178,	// (0x00081034) main_vradio_pane_t3_ParamLimits

0x1178,	// (0x00081034) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0008f70c) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0008f70c) main_vradio_pane_t

0xa073,	// (0x00089f2f) vradio_rocker_control_pane_ParamLimits

0xa073,	// (0x00089f2f) vradio_rocker_control_pane

0xa07f,	// (0x00089f3b) vradio_station_info_pane_ParamLimits

0xa07f,	// (0x00089f3b) vradio_station_info_pane

0x118c,	// (0x00081048) vradio_frequency_info_pane_ParamLimits

0x118c,	// (0x00081048) vradio_frequency_info_pane

0x0af8,	// (0x000809b4) vradio_station_info_pane_g1

0x119b,	// (0x00081057) vradio_station_info_pane_t1_ParamLimits

0x119b,	// (0x00081057) vradio_station_info_pane_t1

0x11bd,	// (0x00081079) vradio_station_info_pane_t2_ParamLimits

0x11bd,	// (0x00081079) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0008f713) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0008f713) vradio_station_info_pane_t

0x11cf,	// (0x0008108b) vradio_tuning_pane

0x11d7,	// (0x00081093) vradio_rocker_control_pane_g1

0x11df,	// (0x0008109b) vradio_rocker_control_pane_g2

0x11e7,	// (0x000810a3) vradio_rocker_control_pane_g3

0x11ef,	// (0x000810ab) vradio_rocker_control_pane_g4

0x11f7,	// (0x000810b3) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0008f718) vradio_rocker_control_pane_g

0xa08c,	// (0x00089f48) vradio_frequency_info_pane_g1

0x11ff,	// (0x000810bb) vradio_frequency_info_pane_t1_ParamLimits

0x11ff,	// (0x000810bb) vradio_frequency_info_pane_t1

0xa096,	// (0x00089f52) vradio_tuning_pane_g1

0xa0a1,	// (0x00089f5d) vradio_tuning_pane_t1

0x0251,	// (0x0008010d) area_side_right_pane_ParamLimits

0x0251,	// (0x0008010d) area_side_right_pane

0xef98,	// (0x0008ee54) status_small_pane_g1

0xefa0,	// (0x0008ee5c) status_small_pane_g2

0xefa9,	// (0x0008ee65) status_small_pane_g3

0xefb2,	// (0x0008ee6e) status_small_pane_g4

0x0003,

0xf61c,	// (0x0008f4d8) status_small_pane_g

0xefbb,	// (0x0008ee77) status_small_pane_t1

0x021b,	// (0x000800d7) main_video3_pane

0x1213,	// (0x000810cf) cams_zoom_vslider_pane

0x121b,	// (0x000810d7) image3_wide_pane_ParamLimits

0x121b,	// (0x000810d7) image3_wide_pane

0x1235,	// (0x000810f1) image3_wide_small_pane

0x1241,	// (0x000810fd) main_video3_pane_g1_ParamLimits

0x1241,	// (0x000810fd) main_video3_pane_g1

0x125d,	// (0x00081119) main_video3_pane_g2_ParamLimits

0x125d,	// (0x00081119) main_video3_pane_g2

0x0001,

0xf867,	// (0x0008f723) main_video3_pane_g_ParamLimits

0xf867,	// (0x0008f723) main_video3_pane_g

0x1279,	// (0x00081135) main_video3_pane_t1_ParamLimits

0x1279,	// (0x00081135) main_video3_pane_t1

0x12a4,	// (0x00081160) main_video3_pane_t2_ParamLimits

0x12a4,	// (0x00081160) main_video3_pane_t2

0x12d1,	// (0x0008118d) main_video3_pane_t3_ParamLimits

0x12d1,	// (0x0008118d) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0008f728) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0008f728) main_video3_pane_t

0x12fe,	// (0x000811ba) cams_zoom_vslider_pane_g1

0x1307,	// (0x000811c3) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0008f72f) cams_zoom_vslider_pane_g

0x130f,	// (0x000811cb) small_slider_vertical_pane

0x0af8,	// (0x000809b4) small_slider_vertical_pane_g1

0x0af8,	// (0x000809b4) small_slider_vertical_pane_g2

0x1317,	// (0x000811d3) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0008f734) small_slider_vertical_pane_g

0x021b,	// (0x000800d7) main_hwr_training_pane

0x1320,	// (0x000811dc) hwr_training_instruct_pane_ParamLimits

0x1320,	// (0x000811dc) hwr_training_instruct_pane

0xa0b0,	// (0x00089f6c) hwr_training_navi_pane_ParamLimits

0xa0b0,	// (0x00089f6c) hwr_training_navi_pane

0xa0ca,	// (0x00089f86) hwr_training_write_pane_ParamLimits

0xa0ca,	// (0x00089f86) hwr_training_write_pane

0x021b,	// (0x000800d7) bg_frame_shadow_pane

0x1357,	// (0x00081213) hwr_training_write_pane_g1

0x135f,	// (0x0008121b) hwr_training_write_pane_g2

0x1367,	// (0x00081223) hwr_training_write_pane_g3

0x136f,	// (0x0008122b) hwr_training_write_pane_g4

0x1377,	// (0x00081233) hwr_training_write_pane_g5

0x137f,	// (0x0008123b) hwr_training_write_pane_g6

0x1387,	// (0x00081243) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0008f73b) hwr_training_write_pane_g

0xa102,	// (0x00089fbe) hwr_training_navi_pane_g1_ParamLimits

0xa102,	// (0x00089fbe) hwr_training_navi_pane_g1

0xa114,	// (0x00089fd0) hwr_training_navi_pane_g2_ParamLimits

0xa114,	// (0x00089fd0) hwr_training_navi_pane_g2

0xa126,	// (0x00089fe2) hwr_training_navi_pane_g3_ParamLimits

0xa126,	// (0x00089fe2) hwr_training_navi_pane_g3

0xa136,	// (0x00089ff2) hwr_training_navi_pane_g4_ParamLimits

0xa136,	// (0x00089ff2) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0008f74a) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0008f74a) hwr_training_navi_pane_g

0xa150,	// (0x0008a00c) hwr_training_navi_pane_t1

0xa15e,	// (0x0008a01a) list_single_hwr_training_instruct_pane_ParamLimits

0xa15e,	// (0x0008a01a) list_single_hwr_training_instruct_pane

0x138f,	// (0x0008124b) list_single_hwr_training_instruct_pane_t1

0x0a38,	// (0x000808f4) bg_frame_shadow_pane_g1

0x139e,	// (0x0008125a) bg_frame_shadow_pane_g2

0x13a6,	// (0x00081262) bg_frame_shadow_pane_g3

0x13ae,	// (0x0008126a) bg_frame_shadow_pane_g4

0x13b6,	// (0x00081272) bg_frame_shadow_pane_g5

0x13be,	// (0x0008127a) bg_frame_shadow_pane_g6

0x13c6,	// (0x00081282) bg_frame_shadow_pane_g7

0x414e,	// (0x0008400a) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0008f755) bg_frame_shadow_pane_g

0x021b,	// (0x000800d7) main_video_tele_dialer_pane

0xa17d,	// (0x0008a039) aid_size_cell_video_keypad_ParamLimits

0xa17d,	// (0x0008a039) aid_size_cell_video_keypad

0xa18d,	// (0x0008a049) grid_video_dialer_keypad_pane_ParamLimits

0xa18d,	// (0x0008a049) grid_video_dialer_keypad_pane

0xa1c1,	// (0x0008a07d) video_down_pane_cp_ParamLimits

0xa1c1,	// (0x0008a07d) video_down_pane_cp

0xa1eb,	// (0x0008a0a7) cell_video_dialer_keypad_pane_ParamLimits

0xa1eb,	// (0x0008a0a7) cell_video_dialer_keypad_pane

0x13ce,	// (0x0008128a) bg_button_pane_cp08_ParamLimits

0x13ce,	// (0x0008128a) bg_button_pane_cp08

0xa202,	// (0x0008a0be) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa202,	// (0x0008a0be) cell_video_dialer_keypad_pane_g1

0x99fe,	// (0x000898ba) mup3_rocker2_pane_ParamLimits

0x99fe,	// (0x000898ba) mup3_rocker2_pane

0x0af8,	// (0x000809b4) mup3_rocker2_pane_g1

0x895c,	// (0x00088818) main_dialer2_pane

0x021b,	// (0x000800d7) main_mp4_pane

0xa245,	// (0x0008a101) main_mp4_pane_g1_ParamLimits

0xa245,	// (0x0008a101) main_mp4_pane_g1

0xa253,	// (0x0008a10f) main_mp4_pane_g2_ParamLimits

0xa253,	// (0x0008a10f) main_mp4_pane_g2

0xa261,	// (0x0008a11d) main_mp4_pane_g3_ParamLimits

0xa261,	// (0x0008a11d) main_mp4_pane_g3

0xa2b4,	// (0x0008a170) main_mp4_pane_g4_ParamLimits

0xa2b4,	// (0x0008a170) main_mp4_pane_g4

0xa2ce,	// (0x0008a18a) main_mp4_pane_g5_ParamLimits

0xa2ce,	// (0x0008a18a) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0008f775) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0008f775) main_mp4_pane_g

0xa302,	// (0x0008a1be) main_mp4_pane_t1_ParamLimits

0xa302,	// (0x0008a1be) main_mp4_pane_t1

0xa35e,	// (0x0008a21a) main_mp4_pane_t2_ParamLimits

0xa35e,	// (0x0008a21a) main_mp4_pane_t2

0x13da,	// (0x00081296) main_mp4_pane_t3_ParamLimits

0x13da,	// (0x00081296) main_mp4_pane_t3

0xa3b0,	// (0x0008a26c) main_mp4_pane_t4_ParamLimits

0xa3b0,	// (0x0008a26c) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0008f782) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0008f782) main_mp4_pane_t

0xa3f0,	// (0x0008a2ac) mp4_progress_pane_ParamLimits

0xa3f0,	// (0x0008a2ac) mp4_progress_pane

0xa43a,	// (0x0008a2f6) mp4_rocker_pane_ParamLimits

0xa43a,	// (0x0008a2f6) mp4_rocker_pane

0x1402,	// (0x000812be) mp4_progress_pane_t1

0x141b,	// (0x000812d7) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0008f78b) mp4_progress_pane_t

0x1434,	// (0x000812f0) mup_progress_pane_cp04

0x1d06,	// (0x00081bc2) mp4_rocker_pane_g1

0xa45c,	// (0x0008a318) aid_cell_size_keypad2_ParamLimits

0xa45c,	// (0x0008a318) aid_cell_size_keypad2

0xa46c,	// (0x0008a328) dialer2_ne_pane_ParamLimits

0xa46c,	// (0x0008a328) dialer2_ne_pane

0xa478,	// (0x0008a334) grid_dialer2_keypad_pane_ParamLimits

0xa478,	// (0x0008a334) grid_dialer2_keypad_pane

0x1d61,	// (0x00081c1d) bg_popup_call_pane_cp07_ParamLimits

0x1d61,	// (0x00081c1d) bg_popup_call_pane_cp07

0xa486,	// (0x0008a342) dialer2_ne_pane_t1_ParamLimits

0xa486,	// (0x0008a342) dialer2_ne_pane_t1

0xa4ab,	// (0x0008a367) cell_dialer2_keypad_pane_ParamLimits

0xa4ab,	// (0x0008a367) cell_dialer2_keypad_pane

0x1452,	// (0x0008130e) bg_button_pane_pane_cp04_ParamLimits

0x1452,	// (0x0008130e) bg_button_pane_pane_cp04

0xa4c2,	// (0x0008a37e) cell_dialer2_keypad_pane_g1_ParamLimits

0xa4c2,	// (0x0008a37e) cell_dialer2_keypad_pane_g1

0x67eb,	// (0x000866a7) aid_placing_vt_set_content_ParamLimits

0x67eb,	// (0x000866a7) aid_placing_vt_set_content

0x6813,	// (0x000866cf) aid_placing_vt_set_title_ParamLimits

0x6813,	// (0x000866cf) aid_placing_vt_set_title

0x021b,	// (0x000800d7) main_image3_pane

0xa55c,	// (0x0008a418) area_side_right_pane_cp01_ParamLimits

0xa55c,	// (0x0008a418) area_side_right_pane_cp01

0xa58b,	// (0x0008a447) main_image3_pane_g1_ParamLimits

0xa58b,	// (0x0008a447) main_image3_pane_g1

0xa599,	// (0x0008a455) main_image3_pane_g2_ParamLimits

0xa599,	// (0x0008a455) main_image3_pane_g2

0xa5b2,	// (0x0008a46e) main_image3_pane_g3_ParamLimits

0xa5b2,	// (0x0008a46e) main_image3_pane_g3

0xa5cb,	// (0x0008a487) main_image3_pane_g4_ParamLimits

0xa5cb,	// (0x0008a487) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0008f79a) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0008f79a) main_image3_pane_g

0xa5e4,	// (0x0008a4a0) main_image3_pane_t1_ParamLimits

0xa5e4,	// (0x0008a4a0) main_image3_pane_t1

0xa609,	// (0x0008a4c5) main_image3_pane_t2_ParamLimits

0xa609,	// (0x0008a4c5) main_image3_pane_t2

0xa628,	// (0x0008a4e4) main_image3_pane_t3_ParamLimits

0xa628,	// (0x0008a4e4) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0008f7a3) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0008f7a3) main_image3_pane_t

0x1563,	// (0x0008141f) grid_sctrl_middle_pane_cp01_ParamLimits

0x1563,	// (0x0008141f) grid_sctrl_middle_pane_cp01

0xa689,	// (0x0008a545) cell_sctrl_middle_pane_cp01_ParamLimits

0xa689,	// (0x0008a545) cell_sctrl_middle_pane_cp01

0xa69a,	// (0x0008a556) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa69a,	// (0x0008a556) cell_sctrl_middle_pane_cp01_g1

0x021b,	// (0x000800d7) main_call4_pane

0xa6a7,	// (0x0008a563) aid_size_button_call4_ParamLimits

0xa6a7,	// (0x0008a563) aid_size_button_call4

0xa6d9,	// (0x0008a595) call4_windows_pane_ParamLimits

0xa6d9,	// (0x0008a595) call4_windows_pane

0xa6f5,	// (0x0008a5b1) grid_call4_button_pane_ParamLimits

0xa6f5,	// (0x0008a5b1) grid_call4_button_pane

0x145e,	// (0x0008131a) call4_windows_conf_pane

0x1479,	// (0x00081335) popup_call4_audio_first_window_ParamLimits

0x1479,	// (0x00081335) popup_call4_audio_first_window

0x14c7,	// (0x00081383) popup_call4_audio_second_window_ParamLimits

0x14c7,	// (0x00081383) popup_call4_audio_second_window

0x14dd,	// (0x00081399) popup_call4_audio_wait_window_ParamLimits

0x14dd,	// (0x00081399) popup_call4_audio_wait_window

0xa719,	// (0x0008a5d5) cell_call4_button_pane_ParamLimits

0xa719,	// (0x0008a5d5) cell_call4_button_pane

0xa73c,	// (0x0008a5f8) bg_button_pane_cp09_ParamLimits

0xa73c,	// (0x0008a5f8) bg_button_pane_cp09

0xa748,	// (0x0008a604) cell_call4_button_pane_g1_ParamLimits

0xa748,	// (0x0008a604) cell_call4_button_pane_g1

0xa755,	// (0x0008a611) cell_call4_button_pane_t1_ParamLimits

0xa755,	// (0x0008a611) cell_call4_button_pane_t1

0x1525,	// (0x000813e1) popup_call4_audio_conf_window_ParamLimits

0x1525,	// (0x000813e1) popup_call4_audio_conf_window

0x9a33,	// (0x000898ef) mup3_progress_pane_t1_ParamLimits

0x9a4a,	// (0x00089906) mup3_progress_pane_t2_ParamLimits

0x0e17,	// (0x00080cd3) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0008f67c) mup3_progress_pane_t_ParamLimits

0x0e2e,	// (0x00080cea) mup_progress_pane_cp03_ParamLimits

0x9f4f,	// (0x00089e0b) mup3_control_keys_pane_g4_copy1

0xa41e,	// (0x0008a2da) mp4_rocker2_pane_ParamLimits

0xa41e,	// (0x0008a2da) mp4_rocker2_pane

0x1547,	// (0x00081403) mp4_rocker2_pane_g1

0x153f,	// (0x000813fb) mp4_rocker2_pane_g2

0xa767,	// (0x0008a623) mp4_rocker2_pane_g3

0xa76f,	// (0x0008a62b) mp4_rocker2_pane_g4

0xa777,	// (0x0008a633) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0008f7ac) mp4_rocker2_pane_g

0x021b,	// (0x000800d7) main_camera4_pane

0x021b,	// (0x000800d7) main_video4_pane

0xa19d,	// (0x0008a059) main_video_tele_dialer_pane_t1_ParamLimits

0xa19d,	// (0x0008a059) main_video_tele_dialer_pane_t1

0xa1af,	// (0x0008a06b) main_video_tele_dialer_pane_t2_ParamLimits

0xa1af,	// (0x0008a06b) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0008f766) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0008f766) main_video_tele_dialer_pane_t

0xa797,	// (0x0008a653) cam4_autofocus_pane_ParamLimits

0xa797,	// (0x0008a653) cam4_autofocus_pane

0xa7af,	// (0x0008a66b) cam4_image_uncrop_pane_ParamLimits

0xa7af,	// (0x0008a66b) cam4_image_uncrop_pane

0xa7c8,	// (0x0008a684) cam4_indicators_pane_ParamLimits

0xa7c8,	// (0x0008a684) cam4_indicators_pane

0xa7e4,	// (0x0008a6a0) main_camera4_pane_g1_ParamLimits

0xa7e4,	// (0x0008a6a0) main_camera4_pane_g1

0xa7f0,	// (0x0008a6ac) main_camera4_pane_g2_ParamLimits

0xa7f0,	// (0x0008a6ac) main_camera4_pane_g2

0xa7f0,	// (0x0008a6ac) main_camera4_pane_g3_ParamLimits

0xa7f0,	// (0x0008a6ac) main_camera4_pane_g3

0xa7fc,	// (0x0008a6b8) main_camera4_pane_g4_ParamLimits

0xa7fc,	// (0x0008a6b8) main_camera4_pane_g4

0xa808,	// (0x0008a6c4) main_camera4_pane_g5_ParamLimits

0xa808,	// (0x0008a6c4) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0008f7b7) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0008f7b7) main_camera4_pane_g

0xa822,	// (0x0008a6de) main_camera4_pane_t1_ParamLimits

0xa822,	// (0x0008a6de) main_camera4_pane_t1

0xa86c,	// (0x0008a728) bg_tb_trans_pane_cp06

0xa882,	// (0x0008a73e) cam4_indicators_pane_g1

0xa88f,	// (0x0008a74b) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0008f7d2) cam4_indicators_pane_g

0xa8af,	// (0x0008a76b) cam4_indicators_pane_t1

0xa8d9,	// (0x0008a795) main_video4_pane_g1_ParamLimits

0xa8d9,	// (0x0008a795) main_video4_pane_g1

0xa8e5,	// (0x0008a7a1) main_video4_pane_g2_ParamLimits

0xa8e5,	// (0x0008a7a1) main_video4_pane_g2

0xa8f1,	// (0x0008a7ad) main_video4_pane_g3_ParamLimits

0xa8f1,	// (0x0008a7ad) main_video4_pane_g3

0xa8fd,	// (0x0008a7b9) main_video4_pane_g4_ParamLimits

0xa8fd,	// (0x0008a7b9) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0008f7d9) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0008f7d9) main_video4_pane_g

0xa91f,	// (0x0008a7db) vid4_indicators_pane_ParamLimits

0xa91f,	// (0x0008a7db) vid4_indicators_pane

0xa93d,	// (0x0008a7f9) video4_image_uncrop_cif_pane_ParamLimits

0xa93d,	// (0x0008a7f9) video4_image_uncrop_cif_pane

0xa94c,	// (0x0008a808) video4_image_uncrop_nhd_pane_ParamLimits

0xa94c,	// (0x0008a808) video4_image_uncrop_nhd_pane

0xa7af,	// (0x0008a66b) video4_image_uncrop_vga_pane_ParamLimits

0xa7af,	// (0x0008a66b) video4_image_uncrop_vga_pane

0xa95b,	// (0x0008a817) bg_tb_trans_pane_cp07

0xa882,	// (0x0008a73e) vid4_indicators_pane_g1

0xa973,	// (0x0008a82f) vid4_indicators_pane_g2

0xa980,	// (0x0008a83c) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0008f7e4) vid4_indicators_pane_g

0xa9ad,	// (0x0008a869) vid4_indicators_pane_t1

0xa9c7,	// (0x0008a883) cam4_autofocus_pane_g1

0xa9cf,	// (0x0008a88b) cam4_autofocus_pane_g2

0xa9d7,	// (0x0008a893) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0008f7ef) cam4_autofocus_pane_g

0xa9df,	// (0x0008a89b) cam4_autofocus_pane_g3_copy1

0xa1cf,	// (0x0008a08b) video_down_pane_cp_t1

0xa1dd,	// (0x0008a099) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0008f76b) video_down_pane_cp_t

0x1563,	// (0x0008141f) popup_vitu2_window_ParamLimits

0x1563,	// (0x0008141f) popup_vitu2_window

0xa9e7,	// (0x0008a8a3) aid_size_cell2_itu2_ParamLimits

0xa9e7,	// (0x0008a8a3) aid_size_cell2_itu2

0xaa09,	// (0x0008a8c5) aid_size_cell_itu2_ParamLimits

0xaa09,	// (0x0008a8c5) aid_size_cell_itu2

0xaa4d,	// (0x0008a909) bg_popup_window_pane_cp09_ParamLimits

0xaa4d,	// (0x0008a909) bg_popup_window_pane_cp09

0xaa5b,	// (0x0008a917) field_vitu2_entry_pane_ParamLimits

0xaa5b,	// (0x0008a917) field_vitu2_entry_pane

0xaa7b,	// (0x0008a937) grid_vitu2_function_pane_ParamLimits

0xaa7b,	// (0x0008a937) grid_vitu2_function_pane

0xaabf,	// (0x0008a97b) grid_vitu2_itu_pane_ParamLimits

0xaabf,	// (0x0008a97b) grid_vitu2_itu_pane

0xab33,	// (0x0008a9ef) cell_vitu2_itu_pane_ParamLimits

0xab33,	// (0x0008a9ef) cell_vitu2_itu_pane

0xab4a,	// (0x0008aa06) cell_vitu2_function_pane_ParamLimits

0xab4a,	// (0x0008aa06) cell_vitu2_function_pane

0x1571,	// (0x0008142d) bg_popup_call_pane_cp08_ParamLimits

0x1571,	// (0x0008142d) bg_popup_call_pane_cp08

0x158a,	// (0x00081446) field_vitu2_entry_pane_g1

0x1596,	// (0x00081452) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0008f7f6) field_vitu2_entry_pane_g

0xab8e,	// (0x0008aa4a) field_vitu2_entry_pane_t1_ParamLimits

0xab8e,	// (0x0008aa4a) field_vitu2_entry_pane_t1

0x15b0,	// (0x0008146c) field_vitu2_entry_pane_t2_ParamLimits

0x15b0,	// (0x0008146c) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0008f7fd) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0008f7fd) field_vitu2_entry_pane_t

0xaba9,	// (0x0008aa65) bg_button_pane_cp010_ParamLimits

0xaba9,	// (0x0008aa65) bg_button_pane_cp010

0xabb7,	// (0x0008aa73) cell_vitu2_itu_pane_g1

0xabd5,	// (0x0008aa91) cell_vitu2_itu_pane_t1_ParamLimits

0xabd5,	// (0x0008aa91) cell_vitu2_itu_pane_t1

0x56f6,	// (0x000855b2) cell_vitu2_itu_pane_t2_ParamLimits

0x56f6,	// (0x000855b2) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0008f807) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0008f807) cell_vitu2_itu_pane_t

0xa95b,	// (0x0008a817) bg_button_pane_cp011

0xac27,	// (0x0008aae3) cell_vitu2_function_pane_g1

0x021b,	// (0x000800d7) main_myfav_hc_pane

0xa66a,	// (0x0008a526) popup_image3_note_pane_ParamLimits

0xa66a,	// (0x0008a526) popup_image3_note_pane

0xa678,	// (0x0008a534) popup_image3_tool_bar_pane_ParamLimits

0xa678,	// (0x0008a534) popup_image3_tool_bar_pane

0x5764,	// (0x00085620) cell_vitu2_itu_pane_t3_ParamLimits

0x5764,	// (0x00085620) cell_vitu2_itu_pane_t3

0x021b,	// (0x000800d7) bg_popup_trans_pane

0x15d5,	// (0x00081491) grid_image3_tool_bar_pane

0x15df,	// (0x0008149b) bg_popup_trans_pane_g1

0x448d,	// (0x00084349) bg_popup_trans_pane_g2

0x15e7,	// (0x000814a3) bg_popup_trans_pane_g3

0x15ef,	// (0x000814ab) bg_popup_trans_pane_g4

0x15f7,	// (0x000814b3) bg_popup_trans_pane_g5

0x15ff,	// (0x000814bb) bg_popup_trans_pane_g6

0x1607,	// (0x000814c3) bg_popup_trans_pane_g7

0x160f,	// (0x000814cb) bg_popup_trans_pane_g8

0x446d,	// (0x00084329) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0008f80e) bg_popup_trans_pane_g

0x1617,	// (0x000814d3) cell_image3_tool_bar_pane_ParamLimits

0x1617,	// (0x000814d3) cell_image3_tool_bar_pane

0x0af8,	// (0x000809b4) cell_image3_tool_bar_pane_g1

0x021b,	// (0x000800d7) bg_popup_trans_pane_cp1

0x162d,	// (0x000814e9) popup_image3_note_pane_t1

0x163b,	// (0x000814f7) popup_image3_note_pane_t2

0x1649,	// (0x00081505) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0008f821) popup_image3_note_pane_t

0x1659,	// (0x00081515) popup_image3_note_pane_t3_copy1

0xac3b,	// (0x0008aaf7) bg_myfav_hc_instruction_pane_ParamLimits

0xac3b,	// (0x0008aaf7) bg_myfav_hc_instruction_pane

0xac53,	// (0x0008ab0f) cell_myfav_contact_pane_ParamLimits

0xac53,	// (0x0008ab0f) cell_myfav_contact_pane

0xac6d,	// (0x0008ab29) cell_myfav_contact_pane_cp1_ParamLimits

0xac6d,	// (0x0008ab29) cell_myfav_contact_pane_cp1

0xac85,	// (0x0008ab41) cell_myfav_contact_pane_cp2_ParamLimits

0xac85,	// (0x0008ab41) cell_myfav_contact_pane_cp2

0xac9d,	// (0x0008ab59) cell_myfav_contact_pane_cp3_ParamLimits

0xac9d,	// (0x0008ab59) cell_myfav_contact_pane_cp3

0xacb4,	// (0x0008ab70) cell_myfav_contact_pane_cp4_ParamLimits

0xacb4,	// (0x0008ab70) cell_myfav_contact_pane_cp4

0xacca,	// (0x0008ab86) cell_myfav_contact_pane_cp5_ParamLimits

0xacca,	// (0x0008ab86) cell_myfav_contact_pane_cp5

0xacde,	// (0x0008ab9a) cell_myfav_contact_pane_cp6_ParamLimits

0xacde,	// (0x0008ab9a) cell_myfav_contact_pane_cp6

0xacf2,	// (0x0008abae) cell_myfav_contact_pane_cp7_ParamLimits

0xacf2,	// (0x0008abae) cell_myfav_contact_pane_cp7

0x1667,	// (0x00081523) listscroll_gen_pane_cp05

0xad0a,	// (0x0008abc6) main_myfav_hc_pane_g1_ParamLimits

0xad0a,	// (0x0008abc6) main_myfav_hc_pane_g1

0xad24,	// (0x0008abe0) main_myfav_hc_pane_g2_ParamLimits

0xad24,	// (0x0008abe0) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0008f828) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0008f828) main_myfav_hc_pane_g

0xad56,	// (0x0008ac12) main_myfav_hc_pane_t1_ParamLimits

0xad56,	// (0x0008ac12) main_myfav_hc_pane_t1

0x1670,	// (0x0008152c) main_myfav_hc_pane_t2_ParamLimits

0x1670,	// (0x0008152c) main_myfav_hc_pane_t2

0x1682,	// (0x0008153e) main_myfav_hc_pane_t3_ParamLimits

0x1682,	// (0x0008153e) main_myfav_hc_pane_t3

0xad6d,	// (0x0008ac29) main_myfav_hc_pane_t4_ParamLimits

0xad6d,	// (0x0008ac29) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0008f82f) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0008f82f) main_myfav_hc_pane_t

0x0af8,	// (0x000809b4) bg_myfav_hc_instruction_pane_g1

0x1694,	// (0x00081550) cell_myfav_contact_pane_g1_ParamLimits

0x1694,	// (0x00081550) cell_myfav_contact_pane_g1

0x1694,	// (0x00081550) cell_myfav_contact_pane_g2_ParamLimits

0x1694,	// (0x00081550) cell_myfav_contact_pane_g2

0x16a0,	// (0x0008155c) cell_myfav_contact_pane_g3_ParamLimits

0x16a0,	// (0x0008155c) cell_myfav_contact_pane_g3

0x0e01,	// (0x00080cbd) cell_myfav_contact_pane_g4_ParamLimits

0x0e01,	// (0x00080cbd) cell_myfav_contact_pane_g4

0x16ad,	// (0x00081569) cell_myfav_contact_pane_g5_ParamLimits

0x16ad,	// (0x00081569) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0008f83a) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0008f83a) cell_myfav_contact_pane_g

0xad3e,	// (0x0008abfa) main_myfav_hc_pane_g3_ParamLimits

0xad3e,	// (0x0008abfa) main_myfav_hc_pane_g3

0x5933,	// (0x000857ef) popup_adpt_find_window

0xad97,	// (0x0008ac53) afind_page_pane_ParamLimits

0xad97,	// (0x0008ac53) afind_page_pane

0xada4,	// (0x0008ac60) aid_size_cell_afind_ParamLimits

0xada4,	// (0x0008ac60) aid_size_cell_afind

0xadbe,	// (0x0008ac7a) bg_popup_sub_pane_cp09_ParamLimits

0xadbe,	// (0x0008ac7a) bg_popup_sub_pane_cp09

0xadcb,	// (0x0008ac87) find_pane_cp01_ParamLimits

0xadcb,	// (0x0008ac87) find_pane_cp01

0x16b9,	// (0x00081575) grid_afind_control_pane_ParamLimits

0x16b9,	// (0x00081575) grid_afind_control_pane

0xadd8,	// (0x0008ac94) grid_afind_pane_ParamLimits

0xadd8,	// (0x0008ac94) grid_afind_pane

0xadf4,	// (0x0008acb0) cell_afind_pane_ParamLimits

0xadf4,	// (0x0008acb0) cell_afind_pane

0x0af8,	// (0x000809b4) afind_page_pane_g1

0xae40,	// (0x0008acfc) afind_page_pane_g2

0xae49,	// (0x0008ad05) afind_page_pane_g3

0x0002,

0xf989,	// (0x0008f845) afind_page_pane_g

0xae52,	// (0x0008ad0e) afind_page_pane_t1

0x16cd,	// (0x00081589) cell_afind_grid_control_pane_ParamLimits

0x16cd,	// (0x00081589) cell_afind_grid_control_pane

0x1452,	// (0x0008130e) bg_button_pane_cp69_ParamLimits

0x1452,	// (0x0008130e) bg_button_pane_cp69

0xae72,	// (0x0008ad2e) cell_afind_pane_g1_ParamLimits

0xae72,	// (0x0008ad2e) cell_afind_pane_g1

0xae7f,	// (0x0008ad3b) cell_afind_pane_t1_ParamLimits

0xae7f,	// (0x0008ad3b) cell_afind_pane_t1

0x4284,	// (0x00084140) bg_button_pane_cp72

0x16dc,	// (0x00081598) cell_afind_grid_control_pane_g1

0x84d4,	// (0x00088390) aid_image_placing_area_ParamLimits

0x84d4,	// (0x00088390) aid_image_placing_area

0x111e,	// (0x00080fda) field_vitu_entry_pane_g1_ParamLimits

0x111e,	// (0x00080fda) field_vitu_entry_pane_g1

0x112a,	// (0x00080fe6) field_vitu_entry_pane_g2_ParamLimits

0x112a,	// (0x00080fe6) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0008f6f6) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0008f6f6) field_vitu_entry_pane_g

0x9fd9,	// (0x00089e95) cell_vitu_itu_pane_g1_ParamLimits

0xa01b,	// (0x00089ed7) cell_vitu_itu_pane_t3_ParamLimits

0xa01b,	// (0x00089ed7) cell_vitu_itu_pane_t3

0x1402,	// (0x000812be) mp4_progress_pane_t1_ParamLimits

0x141b,	// (0x000812d7) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0008f78b) mp4_progress_pane_t_ParamLimits

0x1434,	// (0x000812f0) mup_progress_pane_cp04_ParamLimits

0xad81,	// (0x0008ac3d) main_myfav_hc_pane_t5_ParamLimits

0xad81,	// (0x0008ac3d) main_myfav_hc_pane_t5

0x0241,	// (0x000800fd) aid_zoom_text_primary

0x5933,	// (0x000857ef) popup_adpt_find_window_ParamLimits

0x0294,	// (0x00080150) main_cam_set_pane

0xa7d6,	// (0x0008a692) cam4_zoom_pane_ParamLimits

0xa7d6,	// (0x0008a692) cam4_zoom_pane

0xae91,	// (0x0008ad4d) main_cam_set_pane_g1_ParamLimits

0xae91,	// (0x0008ad4d) main_cam_set_pane_g1

0xae9f,	// (0x0008ad5b) main_cam_set_pane_g2_ParamLimits

0xae9f,	// (0x0008ad5b) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0008f84c) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0008f84c) main_cam_set_pane_g

0xaeab,	// (0x0008ad67) main_cam_set_pane_t1_ParamLimits

0xaeab,	// (0x0008ad67) main_cam_set_pane_t1

0xaec7,	// (0x0008ad83) main_cset_listscroll_pane_ParamLimits

0xaec7,	// (0x0008ad83) main_cset_listscroll_pane

0xaef6,	// (0x0008adb2) main_cset_slider_pane_ParamLimits

0xaef6,	// (0x0008adb2) main_cset_slider_pane

0x16ed,	// (0x000815a9) main_cset_list_pane_ParamLimits

0x16ed,	// (0x000815a9) main_cset_list_pane

0x16fd,	// (0x000815b9) scroll_pane_cp028

0xaf17,	// (0x0008add3) aid_area_touch_slider

0xaf33,	// (0x0008adef) cset_slider_pane

0xaf5d,	// (0x0008ae19) main_cset_slider_pane_g1

0xaf72,	// (0x0008ae2e) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0008f851) main_cset_slider_pane_g

0x1736,	// (0x000815f2) main_cset_slider_pane_t1

0xb02e,	// (0x0008aeea) main_cset_slider_pane_t2

0xb048,	// (0x0008af04) main_cset_slider_pane_t3

0xb062,	// (0x0008af1e) main_cset_slider_pane_t4

0xb07c,	// (0x0008af38) main_cset_slider_pane_t5

0xb098,	// (0x0008af54) main_cset_slider_pane_t6

0xb0ad,	// (0x0008af69) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0008f876) main_cset_slider_pane_t

0xb1b1,	// (0x0008b06d) cset_list_set_pane_ParamLimits

0xb1b1,	// (0x0008b06d) cset_list_set_pane

0xb1c2,	// (0x0008b07e) aid_position_infowindow_above

0xb1ca,	// (0x0008b086) aid_position_infowindow_below

0x38d4,	// (0x00083790) cset_list_set_pane_g1_ParamLimits

0x38d4,	// (0x00083790) cset_list_set_pane_g1

0x1f6b,	// (0x00081e27) cset_list_set_pane_g3_ParamLimits

0x1f6b,	// (0x00081e27) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0008f895) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0008f895) cset_list_set_pane_g

0x1f7a,	// (0x00081e36) cset_list_set_pane_t1_ParamLimits

0x1f7a,	// (0x00081e36) cset_list_set_pane_t1

0x0294,	// (0x00080150) list_highlight_pane_cp021_ParamLimits

0x0294,	// (0x00080150) list_highlight_pane_cp021

0xdcfe,	// (0x0008dbba) cset_slider_pane_g1

0xdd10,	// (0x0008dbcc) cset_slider_pane_g2

0xdd07,	// (0x0008dbc3) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0008f89a) cset_slider_pane_g

0xb1d2,	// (0x0008b08e) aid_area_touch_cam4_zoom

0xb1da,	// (0x0008b096) cam4_zoom_cont_pane

0xb1e2,	// (0x0008b09e) cam4_zoom_pane_g1

0xb1ea,	// (0x0008b0a6) cam4_zoom_pane_g2

0xb1f2,	// (0x0008b0ae) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0008f8a1) cam4_zoom_pane_g

0xb1fa,	// (0x0008b0b6) cam4_zoom_cont_pane_g1

0xb203,	// (0x0008b0bf) cam4_zoom_cont_pane_g2

0xb20c,	// (0x0008b0c8) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0008f8a8) cam4_zoom_cont_pane_g

0xa6c1,	// (0x0008a57d) call4_image_pane_ParamLimits

0xa6c1,	// (0x0008a57d) call4_image_pane

0x145e,	// (0x0008131a) call4_windows_conf_pane_ParamLimits

0x14a5,	// (0x00081361) popup_call4_audio_in_window_ParamLimits

0x14a5,	// (0x00081361) popup_call4_audio_in_window

0x021b,	// (0x000800d7) bg_popup_call2_act_pane_cp02

0x151d,	// (0x000813d9) call4_list_conf_pane

0x0af8,	// (0x000809b4) call4_image_pane_g1

0x0af8,	// (0x000809b4) call4_image_pane_g2

0x0001,

0xf700,	// (0x0008f5bc) call4_image_pane_g

0x17f1,	// (0x000816ad) list_single_graphic_popup_conf4_pane_ParamLimits

0x17f1,	// (0x000816ad) list_single_graphic_popup_conf4_pane

0x021b,	// (0x000800d7) list_highlight_pane_cp022

0x1806,	// (0x000816c2) list_single_graphic_popup_conf4_pane_g1

0xd9f8,	// (0x0008d8b4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0008f8af) list_single_graphic_popup_conf4_pane_g

0x180e,	// (0x000816ca) list_single_graphic_popup_conf4_pane_t1

0x696d,	// (0x00086829) popup_vtel_slider_window_ParamLimits

0x696d,	// (0x00086829) popup_vtel_slider_window

0x1440,	// (0x000812fc) dialer2_ne_pane_t2_ParamLimits

0x1440,	// (0x000812fc) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0008f790) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0008f790) dialer2_ne_pane_t

0x0294,	// (0x00080150) bg_popup_sub_pane_cp010_ParamLimits

0x0294,	// (0x00080150) bg_popup_sub_pane_cp010

0xb215,	// (0x0008b0d1) popup_vtel_slider_window_g1_ParamLimits

0xb215,	// (0x0008b0d1) popup_vtel_slider_window_g1

0xb221,	// (0x0008b0dd) popup_vtel_slider_window_g2_ParamLimits

0xb221,	// (0x0008b0dd) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0008f8b4) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0008f8b4) popup_vtel_slider_window_g

0xb269,	// (0x0008b125) vtel_slider_pane_ParamLimits

0xb269,	// (0x0008b125) vtel_slider_pane

0xb278,	// (0x0008b134) vtel_slider_pane_g1_ParamLimits

0xb278,	// (0x0008b134) vtel_slider_pane_g1

0xb285,	// (0x0008b141) vtel_slider_pane_g2_ParamLimits

0xb285,	// (0x0008b141) vtel_slider_pane_g2

0xb292,	// (0x0008b14e) vtel_slider_pane_g3_ParamLimits

0xb292,	// (0x0008b14e) vtel_slider_pane_g3

0xb278,	// (0x0008b134) vtel_slider_pane_g4_ParamLimits

0xb278,	// (0x0008b134) vtel_slider_pane_g4

0xb29f,	// (0x0008b15b) vtel_slider_pane_g5_ParamLimits

0xb29f,	// (0x0008b15b) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0008f8bd) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0008f8bd) vtel_slider_pane_g

0x021b,	// (0x000800d7) main_gallery2_pane

0xaa2f,	// (0x0008a8eb) aid_size_row_itut2_dropdow_list_ParamLimits

0xaa2f,	// (0x0008a8eb) aid_size_row_itut2_dropdow_list

0xaa9d,	// (0x0008a959) grid_vitu2_function_top_pane_ParamLimits

0xaa9d,	// (0x0008a959) grid_vitu2_function_top_pane

0xaaef,	// (0x0008a9ab) popup_vitu2_dropdown_list_window_ParamLimits

0xaaef,	// (0x0008a9ab) popup_vitu2_dropdown_list_window

0xab0f,	// (0x0008a9cb) popup_vitu2_match_list_window

0xb2ac,	// (0x0008b168) cell_vitu2_function_top_pane_ParamLimits

0xb2ac,	// (0x0008b168) cell_vitu2_function_top_pane

0xb2cc,	// (0x0008b188) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb2cc,	// (0x0008b188) cell_vitu2_function_top_pane_cp01

0xb2ea,	// (0x0008b1a6) cell_vitu2_function_top_wide_pane_ParamLimits

0xb2ea,	// (0x0008b1a6) cell_vitu2_function_top_wide_pane

0xa95b,	// (0x0008a817) bg_button_pane_cp012

0xb308,	// (0x0008b1c4) cell_vitu2_function_top_pane_g1

0xb317,	// (0x0008b1d3) bg_button_pane_cp013_ParamLimits

0xb317,	// (0x0008b1d3) bg_button_pane_cp013

0xb333,	// (0x0008b1ef) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb333,	// (0x0008b1ef) cell_vitu2_function_top_wide_pane_g1

0xb34b,	// (0x0008b207) bg_popup_sub_pane_cp20

0xb359,	// (0x0008b215) list_vitu2_match_list_pane

0x15df,	// (0x0008149b) bg_popup_sub_pane_cp20_g1

0x15e7,	// (0x000814a3) bg_popup_sub_pane_cp20_g2

0x448d,	// (0x00084349) bg_popup_sub_pane_cp20_g3

0x15ef,	// (0x000814ab) bg_popup_sub_pane_cp20_g4

0x446d,	// (0x00084329) bg_popup_sub_pane_cp20_g5

0x1832,	// (0x000816ee) bg_popup_sub_pane_cp20_g6

0x15ff,	// (0x000814bb) bg_popup_sub_pane_cp20_g7

0x1607,	// (0x000814c3) bg_popup_sub_pane_cp20_g8

0x160f,	// (0x000814cb) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0008f8c8) bg_popup_sub_pane_cp20_g

0xb371,	// (0x0008b22d) list_vitu2_match_list_item_pane_ParamLimits

0xb371,	// (0x0008b22d) list_vitu2_match_list_item_pane

0xb383,	// (0x0008b23f) list_vitu2_match_list_item_pane_t1

0x5d6d,	// (0x00085c29) bg_popup_sub_pane_cp21

0xb3bd,	// (0x0008b279) grid_vitu2_dropdown_list_pane

0xb3c5,	// (0x0008b281) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb3c5,	// (0x0008b281) cell_vitu2_dropdown_list_char_pane

0xb3ea,	// (0x0008b2a6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb3ea,	// (0x0008b2a6) cell_vitu2_dropdown_list_ctrl_pane

0x1864,	// (0x00081720) cell_vitu2_dropdown_list_char_pane_g1

0x185b,	// (0x00081717) cell_vitu2_dropdown_list_char_pane_g2

0x1852,	// (0x0008170e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0008f8e5) cell_vitu2_dropdown_list_char_pane_g

0xb418,	// (0x0008b2d4) cell_vitu2_dropdown_list_char_pane_t1

0xb426,	// (0x0008b2e2) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb426,	// (0x0008b2e2) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb436,	// (0x0008b2f2) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb436,	// (0x0008b2f2) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb447,	// (0x0008b303) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb447,	// (0x0008b303) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb457,	// (0x0008b313) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb457,	// (0x0008b313) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa86c,	// (0x0008a728) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa86c,	// (0x0008a728) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0008f8ec) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0008f8ec) cell_vitu2_dropdown_list_ctrl_pane_g

0xb470,	// (0x0008b32c) aid_size_cell_gallery2_ParamLimits

0xb470,	// (0x0008b32c) aid_size_cell_gallery2

0xb47e,	// (0x0008b33a) grid_gallery2_pane_ParamLimits

0xb47e,	// (0x0008b33a) grid_gallery2_pane

0xb48d,	// (0x0008b349) scroll_pane_cp029_ParamLimits

0xb48d,	// (0x0008b349) scroll_pane_cp029

0xb499,	// (0x0008b355) cell_gallery2_pane_ParamLimits

0xb499,	// (0x0008b355) cell_gallery2_pane

0x186d,	// (0x00081729) cell_gallery2_pane_g2

0xb4c3,	// (0x0008b37f) cell_gallery2_pane_g3

0x1877,	// (0x00081733) cell_gallery2_pane_g4

0x187f,	// (0x0008173b) cell_gallery2_pane_g5

0xdbc6,	// (0x0008da82) grid_highlight_pane_cp10

0xab0f,	// (0x0008a9cb) popup_vitu2_match_list_window_ParamLimits

0xab23,	// (0x0008a9df) popup_vitu2_query_window_ParamLimits

0xab23,	// (0x0008a9df) popup_vitu2_query_window

0x5d6d,	// (0x00085c29) bg_vitu2_candi_button_pane

0x1864,	// (0x00081720) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x185b,	// (0x00081717) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1852,	// (0x0008170e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb4cb,	// (0x0008b387) bg_button_pane_cp015

0xb4dd,	// (0x0008b399) bg_button_pane_cp016

0xb4f0,	// (0x0008b3ac) bg_button_pane_cp017

0xefd1,	// (0x0008ee8d) bg_popup_sub_pane_cp22

0x1887,	// (0x00081743) popup_vitu2_query_window_g1

0xb535,	// (0x0008b3f1) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0008f8f7) popup_vitu2_query_window_g

0xb552,	// (0x0008b40e) popup_vitu2_query_window_t1_ParamLimits

0xb552,	// (0x0008b40e) popup_vitu2_query_window_t1

0xb585,	// (0x0008b441) popup_vitu2_query_window_t2_ParamLimits

0xb585,	// (0x0008b441) popup_vitu2_query_window_t2

0xb597,	// (0x0008b453) popup_vitu2_query_window_t3_ParamLimits

0xb597,	// (0x0008b453) popup_vitu2_query_window_t3

0xb5bf,	// (0x0008b47b) popup_vitu2_query_window_t4_ParamLimits

0xb5bf,	// (0x0008b47b) popup_vitu2_query_window_t4

0xb5e2,	// (0x0008b49e) popup_vitu2_query_window_t5_ParamLimits

0xb5e2,	// (0x0008b49e) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0008f8fe) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0008f8fe) popup_vitu2_query_window_t

0x16e5,	// (0x000815a1) main_cset_text_pane

0xaf17,	// (0x0008add3) aid_area_touch_slider_ParamLimits

0xaf33,	// (0x0008adef) cset_slider_pane_ParamLimits

0xaf5d,	// (0x0008ae19) main_cset_slider_pane_g1_ParamLimits

0xaf72,	// (0x0008ae2e) main_cset_slider_pane_g2_ParamLimits

0x1706,	// (0x000815c2) main_cset_slider_pane_g3_ParamLimits

0x1706,	// (0x000815c2) main_cset_slider_pane_g3

0xaf87,	// (0x0008ae43) main_cset_slider_pane_g4_ParamLimits

0xaf87,	// (0x0008ae43) main_cset_slider_pane_g4

0xaf96,	// (0x0008ae52) main_cset_slider_pane_g5_ParamLimits

0xaf96,	// (0x0008ae52) main_cset_slider_pane_g5

0xafa2,	// (0x0008ae5e) main_cset_slider_pane_g6_ParamLimits

0xafa2,	// (0x0008ae5e) main_cset_slider_pane_g6

0xf995,	// (0x0008f851) main_cset_slider_pane_g_ParamLimits

0x1736,	// (0x000815f2) main_cset_slider_pane_t1_ParamLimits

0xb02e,	// (0x0008aeea) main_cset_slider_pane_t2_ParamLimits

0xb048,	// (0x0008af04) main_cset_slider_pane_t3_ParamLimits

0xb062,	// (0x0008af1e) main_cset_slider_pane_t4_ParamLimits

0xb07c,	// (0x0008af38) main_cset_slider_pane_t5_ParamLimits

0xb098,	// (0x0008af54) main_cset_slider_pane_t6_ParamLimits

0xb0ad,	// (0x0008af69) main_cset_slider_pane_t7_ParamLimits

0xb0d7,	// (0x0008af93) main_cset_slider_pane_t8_ParamLimits

0xb0d7,	// (0x0008af93) main_cset_slider_pane_t8

0xb0ff,	// (0x0008afbb) main_cset_slider_pane_t9_ParamLimits

0xb0ff,	// (0x0008afbb) main_cset_slider_pane_t9

0xb127,	// (0x0008afe3) main_cset_slider_pane_t10_ParamLimits

0xb127,	// (0x0008afe3) main_cset_slider_pane_t10

0xb14f,	// (0x0008b00b) main_cset_slider_pane_t11_ParamLimits

0xb14f,	// (0x0008b00b) main_cset_slider_pane_t11

0xb177,	// (0x0008b033) main_cset_slider_pane_t12_ParamLimits

0xb177,	// (0x0008b033) main_cset_slider_pane_t12

0xb194,	// (0x0008b050) main_cset_slider_pane_t13_ParamLimits

0xb194,	// (0x0008b050) main_cset_slider_pane_t13

0xf9ba,	// (0x0008f876) main_cset_slider_pane_t_ParamLimits

0x021b,	// (0x000800d7) bg_popup_sub_pane_cp011

0x1893,	// (0x0008174f) main_cset_text_pane_g1

0x189b,	// (0x00081757) main_cset_text_pane_t1

0x18a9,	// (0x00081765) main_cset_text_pane_t2

0x18b7,	// (0x00081773) main_cset_text_pane_t3

0x18c5,	// (0x00081781) main_cset_text_pane_t4

0x18d3,	// (0x0008178f) main_cset_text_pane_t5

0x18e1,	// (0x0008179d) main_cset_text_pane_t6

0x18ef,	// (0x000817ab) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0008f90d) main_cset_text_pane_t

0x021b,	// (0x000800d7) main_cam4_burst_pane

0x021b,	// (0x000800d7) main_cam5_pane

0xae60,	// (0x0008ad1c) bg_button_pane_cp019

0xae69,	// (0x0008ad25) bg_button_pane_cp020

0x1712,	// (0x000815ce) main_cset_slider_pane_g7_ParamLimits

0x1712,	// (0x000815ce) main_cset_slider_pane_g7

0x171e,	// (0x000815da) main_cset_slider_pane_g8_ParamLimits

0x171e,	// (0x000815da) main_cset_slider_pane_g8

0xafb6,	// (0x0008ae72) main_cset_slider_pane_g9_ParamLimits

0xafb6,	// (0x0008ae72) main_cset_slider_pane_g9

0xafc2,	// (0x0008ae7e) main_cset_slider_pane_g10_ParamLimits

0xafc2,	// (0x0008ae7e) main_cset_slider_pane_g10

0xafce,	// (0x0008ae8a) main_cset_slider_pane_g11_ParamLimits

0xafce,	// (0x0008ae8a) main_cset_slider_pane_g11

0xafda,	// (0x0008ae96) main_cset_slider_pane_g12_ParamLimits

0xafda,	// (0x0008ae96) main_cset_slider_pane_g12

0xafe6,	// (0x0008aea2) main_cset_slider_pane_g13_ParamLimits

0xafe6,	// (0x0008aea2) main_cset_slider_pane_g13

0xaff2,	// (0x0008aeae) main_cset_slider_pane_g14_ParamLimits

0xaff2,	// (0x0008aeae) main_cset_slider_pane_g14

0xaffe,	// (0x0008aeba) main_cset_slider_pane_g15_ParamLimits

0xaffe,	// (0x0008aeba) main_cset_slider_pane_g15

0x1764,	// (0x00081620) main_cset_slider_pane_t14_ParamLimits

0x1764,	// (0x00081620) main_cset_slider_pane_t14

0x179d,	// (0x00081659) main_cset_slider_pane_t15_ParamLimits

0x179d,	// (0x00081659) main_cset_slider_pane_t15

0xb65b,	// (0x0008b517) aid_cam4_burst_size_cell_ParamLimits

0xb65b,	// (0x0008b517) aid_cam4_burst_size_cell

0xb677,	// (0x0008b533) grid_cam4_burst_pane_ParamLimits

0xb677,	// (0x0008b533) grid_cam4_burst_pane

0xb6a9,	// (0x0008b565) linegrid_cam4_burst_pane_ParamLimits

0xb6a9,	// (0x0008b565) linegrid_cam4_burst_pane

0xb6c9,	// (0x0008b585) scroll_pane_cp30_ParamLimits

0xb6c9,	// (0x0008b585) scroll_pane_cp30

0xb6d5,	// (0x0008b591) cell_cam4_burst_pane_ParamLimits

0xb6d5,	// (0x0008b591) cell_cam4_burst_pane

0x1909,	// (0x000817c5) linegrid_cam4_burst_pane_g1_ParamLimits

0x1909,	// (0x000817c5) linegrid_cam4_burst_pane_g1

0xb715,	// (0x0008b5d1) linegrid_cam4_burst_pane_g2_ParamLimits

0xb715,	// (0x0008b5d1) linegrid_cam4_burst_pane_g2

0x1916,	// (0x000817d2) linegrid_cam4_burst_pane_g3_ParamLimits

0x1916,	// (0x000817d2) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0008f91c) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0008f91c) linegrid_cam4_burst_pane_g

0xb726,	// (0x0008b5e2) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb726,	// (0x0008b5e2) linegrid_cam4_burst_pane_g3_copy1

0x1923,	// (0x000817df) linegrid_cam4_burst_pane_g4_ParamLimits

0x1923,	// (0x000817df) linegrid_cam4_burst_pane_g4

0xb740,	// (0x0008b5fc) linegrid_cam4_burst_pane_g5_ParamLimits

0xb740,	// (0x0008b5fc) linegrid_cam4_burst_pane_g5

0xb751,	// (0x0008b60d) linegrid_cam4_burst_pane_g6_ParamLimits

0xb751,	// (0x0008b60d) linegrid_cam4_burst_pane_g6

0x1930,	// (0x000817ec) linegrid_cam4_burst_pane_g7_ParamLimits

0x1930,	// (0x000817ec) linegrid_cam4_burst_pane_g7

0xb768,	// (0x0008b624) cell_cam4_burst_pane_g1

0x1949,	// (0x00081805) main_cam5_pane_t1_ParamLimits

0x1949,	// (0x00081805) main_cam5_pane_t1

0x195b,	// (0x00081817) main_cam5_pane_t2_ParamLimits

0x195b,	// (0x00081817) main_cam5_pane_t2

0x196d,	// (0x00081829) main_cam5_pane_t3_ParamLimits

0x196d,	// (0x00081829) main_cam5_pane_t3

0x197f,	// (0x0008183b) main_cam5_pane_t4_ParamLimits

0x197f,	// (0x0008183b) main_cam5_pane_t4

0x1997,	// (0x00081853) main_cam5_pane_t5_ParamLimits

0x1997,	// (0x00081853) main_cam5_pane_t5

0x19ab,	// (0x00081867) main_cam5_pane_t6_ParamLimits

0x19ab,	// (0x00081867) main_cam5_pane_t6

0x19bf,	// (0x0008187b) main_cam5_pane_t7_ParamLimits

0x19bf,	// (0x0008187b) main_cam5_pane_t7

0x19d1,	// (0x0008188d) main_cam5_pane_t8_ParamLimits

0x19d1,	// (0x0008188d) main_cam5_pane_t8

0x19ef,	// (0x000818ab) main_cam5_pane_t9_ParamLimits

0x19ef,	// (0x000818ab) main_cam5_pane_t9

0x1a01,	// (0x000818bd) main_cam5_pane_t10_ParamLimits

0x1a01,	// (0x000818bd) main_cam5_pane_t10

0x1a13,	// (0x000818cf) main_cam5_pane_t11_ParamLimits

0x1a13,	// (0x000818cf) main_cam5_pane_t11

0x1a27,	// (0x000818e3) main_cam5_pane_t12_ParamLimits

0x1a27,	// (0x000818e3) main_cam5_pane_t12

0x1a3e,	// (0x000818fa) main_cam5_pane_t13_ParamLimits

0x1a3e,	// (0x000818fa) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0008f928) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0008f928) main_cam5_pane_t

0x59e1,	// (0x0008589d) popup_scut_keymap_window_ParamLimits

0x59e1,	// (0x0008589d) popup_scut_keymap_window

0xb77b,	// (0x0008b637) aid_size_cell_brow_shortcut

0xdbc6,	// (0x0008da82) bg_popup_window_pane_cp010

0xb787,	// (0x0008b643) grid_scut_pane

0xb793,	// (0x0008b64f) cell_scut_pane_ParamLimits

0xb793,	// (0x0008b64f) cell_scut_pane

0xb7ae,	// (0x0008b66a) cell_scut_pane_g1

0x1a61,	// (0x0008191d) cell_scut_pane_t1

0x1a70,	// (0x0008192c) cell_scut_pane_t2

0xb7b7,	// (0x0008b673) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0008f943) cell_scut_pane_t

0x965f,	// (0x0008951b) main_mup3_pane_g8_ParamLimits

0x965f,	// (0x0008951b) main_mup3_pane_g8

0xaa3d,	// (0x0008a8f9) area_vitu2_query_pane_ParamLimits

0xaa3d,	// (0x0008a8f9) area_vitu2_query_pane

0xb503,	// (0x0008b3bf) input_focus_pane_cp08

0x1a7f,	// (0x0008193b) area_vitu2_query_pane_g1

0xb7c5,	// (0x0008b681) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0008f94a) area_vitu2_query_pane_g

0xb7d6,	// (0x0008b692) area_vitu2_query_pane_t1_ParamLimits

0xb7d6,	// (0x0008b692) area_vitu2_query_pane_t1

0xb7ea,	// (0x0008b6a6) area_vitu2_query_pane_t2_ParamLimits

0xb7ea,	// (0x0008b6a6) area_vitu2_query_pane_t2

0xb7fe,	// (0x0008b6ba) area_vitu2_query_pane_t3_ParamLimits

0xb7fe,	// (0x0008b6ba) area_vitu2_query_pane_t3

0x1a8b,	// (0x00081947) area_vitu2_query_pane_t4_ParamLimits

0x1a8b,	// (0x00081947) area_vitu2_query_pane_t4

0x1ab3,	// (0x0008196f) area_vitu2_query_pane_t5_ParamLimits

0x1ab3,	// (0x0008196f) area_vitu2_query_pane_t5

0x1adb,	// (0x00081997) area_vitu2_query_pane_t6_ParamLimits

0x1adb,	// (0x00081997) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0008f94f) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0008f94f) area_vitu2_query_pane_t

0xb826,	// (0x0008b6e2) bg_button_pane_cp018

0xb834,	// (0x0008b6f0) bg_button_pane_cp021

0xb840,	// (0x0008b6fc) bg_button_pane_cp022

0xb851,	// (0x0008b70d) input_focus_pane_cp09

0x7ab9,	// (0x00087975) aid_size_touch_mv_arrow_left

0x7ae4,	// (0x000879a0) aid_size_touch_mv_arrow_right

0xb016,	// (0x0008aed2) main_cset_slider_pane_g16_ParamLimits

0xb016,	// (0x0008aed2) main_cset_slider_pane_g16

0xb022,	// (0x0008aede) main_cset_slider_pane_g17_ParamLimits

0xb022,	// (0x0008aede) main_cset_slider_pane_g17

0xb768,	// (0x0008b624) cell_cam4_burst_pane_g1_ParamLimits

0x021b,	// (0x000800d7) compa_mode_pane

0xb22d,	// (0x0008b0e9) popup_vtel_slider_window_g3_ParamLimits

0xb22d,	// (0x0008b0e9) popup_vtel_slider_window_g3

0xb241,	// (0x0008b0fd) popup_vtel_slider_window_g4_ParamLimits

0xb241,	// (0x0008b0fd) popup_vtel_slider_window_g4

0xb255,	// (0x0008b111) popup_vtel_slider_window_t1_ParamLimits

0xb255,	// (0x0008b111) popup_vtel_slider_window_t1

0x021b,	// (0x000800d7) main_cl_pane

0xeffd,	// (0x0008eeb9) popup_imed_adjust2_window_ParamLimits

0xefd1,	// (0x0008ee8d) bg_tb_trans_pane_cp05_ParamLimits

0x1053,	// (0x00080f0f) popup_imed_adjust2_window_g1_ParamLimits

0x1062,	// (0x00080f1e) popup_imed_adjust2_window_g2_ParamLimits

0x1062,	// (0x00080f1e) popup_imed_adjust2_window_g2

0x106e,	// (0x00080f2a) popup_imed_adjust2_window_g3_ParamLimits

0x106e,	// (0x00080f2a) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0008f6ba) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0008f6ba) popup_imed_adjust2_window_g

0x107a,	// (0x00080f36) popup_imed_adjust2_window_t1_ParamLimits

0x1092,	// (0x00080f4e) slider_imed_adjust_pane_ParamLimits

0x10a6,	// (0x00080f62) slider_imed_adjust_pane_g1_ParamLimits

0x10b6,	// (0x00080f72) slider_imed_adjust_pane_g2_ParamLimits

0x10c6,	// (0x00080f82) slider_imed_adjust_pane_g3_ParamLimits

0x10d7,	// (0x00080f93) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0008f6c1) slider_imed_adjust_pane_g_ParamLimits

0xa77f,	// (0x0008a63b) aid_touch_area_cam4_ParamLimits

0xa77f,	// (0x0008a63b) aid_touch_area_cam4

0xa78f,	// (0x0008a64b) battery_pane_cp01

0xa816,	// (0x0008a6d2) main_camera4_pane_g6_ParamLimits

0xa816,	// (0x0008a6d2) main_camera4_pane_g6

0xa834,	// (0x0008a6f0) main_camera4_pane_t2_ParamLimits

0xa834,	// (0x0008a6f0) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0008f7c4) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0008f7c4) main_camera4_pane_t

0xa8c9,	// (0x0008a785) aid_touch_area_vid4_ParamLimits

0xa8c9,	// (0x0008a785) aid_touch_area_vid4

0xa909,	// (0x0008a7c5) main_video4_pane_g5_ParamLimits

0xa909,	// (0x0008a7c5) main_video4_pane_g5

0xa92d,	// (0x0008a7e9) vid4_progress_pane_ParamLimits

0xa92d,	// (0x0008a7e9) vid4_progress_pane

0x172a,	// (0x000815e6) main_cset_slider_pane_g18_ParamLimits

0x172a,	// (0x000815e6) main_cset_slider_pane_g18

0x193d,	// (0x000817f9) cell_cam4_burst_pane_g2_ParamLimits

0x193d,	// (0x000817f9) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0008f923) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0008f923) cell_cam4_burst_pane_g

0xb862,	// (0x0008b71e) bg_cl_pane_ParamLimits

0xb862,	// (0x0008b71e) bg_cl_pane

0xb86e,	// (0x0008b72a) cl_header_pane_ParamLimits

0xb86e,	// (0x0008b72a) cl_header_pane

0xb87a,	// (0x0008b736) cl_listscroll_pane_ParamLimits

0xb87a,	// (0x0008b736) cl_listscroll_pane

0x1b27,	// (0x000819e3) bg_cl_pane_g1

0x1b2f,	// (0x000819eb) bg_cl_pane_g2

0x1b37,	// (0x000819f3) bg_cl_pane_g3

0x1b3f,	// (0x000819fb) bg_cl_pane_g4

0x1b47,	// (0x00081a03) bg_cl_pane_g5

0x1b4f,	// (0x00081a0b) bg_cl_pane_g6

0x1b57,	// (0x00081a13) bg_cl_pane_g7

0x1b5f,	// (0x00081a1b) bg_cl_pane_g8

0x1b67,	// (0x00081a23) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0008f95e) bg_cl_pane_g

0xb886,	// (0x0008b742) aid_height_cl_leading_ParamLimits

0xb886,	// (0x0008b742) aid_height_cl_leading

0xb892,	// (0x0008b74e) aid_height_cl_text_ParamLimits

0xb892,	// (0x0008b74e) aid_height_cl_text

0x1563,	// (0x0008141f) bg_cl_header_pane_ParamLimits

0x1563,	// (0x0008141f) bg_cl_header_pane

0xb8aa,	// (0x0008b766) cl_header_pane_g1_ParamLimits

0xb8aa,	// (0x0008b766) cl_header_pane_g1

0xb8b7,	// (0x0008b773) cl_header_pane_t1_ParamLimits

0xb8b7,	// (0x0008b773) cl_header_pane_t1

0x1b6f,	// (0x00081a2b) cl_list_pane

0x16fd,	// (0x000815b9) hc_scroll_pane_cp01

0x446d,	// (0x00084329) bg_cl_header_pane_g1

0x15df,	// (0x0008149b) bg_cl_header_pane_g2

0x448d,	// (0x00084349) bg_cl_header_pane_g3

0x15ef,	// (0x000814ab) bg_cl_header_pane_g4

0x15e7,	// (0x000814a3) bg_cl_header_pane_g5

0x1832,	// (0x000816ee) bg_cl_header_pane_g6

0x1607,	// (0x000814c3) bg_cl_header_pane_g7

0x160f,	// (0x000814cb) bg_cl_header_pane_g8

0x15ff,	// (0x000814bb) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0008f971) bg_cl_header_pane_g

0xb8c9,	// (0x0008b785) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb8c9,	// (0x0008b785) hc_cl_list_double_graphic_heading_pane

0x391c,	// (0x000837d8) hc_cl_list_single_graphic_pane_ParamLimits

0x391c,	// (0x000837d8) hc_cl_list_single_graphic_pane

0xb8d9,	// (0x0008b795) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb8d9,	// (0x0008b795) hc_cl_list_single_graphic_pane_g1

0xb8e5,	// (0x0008b7a1) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb8e5,	// (0x0008b7a1) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0008f984) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0008f984) hc_cl_list_single_graphic_pane_g

0xb8f9,	// (0x0008b7b5) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb8f9,	// (0x0008b7b5) hc_cl_list_single_graphic_pane_t1

0xb8d9,	// (0x0008b795) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb8d9,	// (0x0008b795) hc_cl_list_double_graphic_heading_pane_g1

0xb90e,	// (0x0008b7ca) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb90e,	// (0x0008b7ca) hc_cl_list_double_graphic_heading_pane_g2

0xb922,	// (0x0008b7de) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb922,	// (0x0008b7de) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0008f989) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0008f989) hc_cl_list_double_graphic_heading_pane_g

0xb936,	// (0x0008b7f2) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb936,	// (0x0008b7f2) hc_cl_list_double_graphic_heading_pane_t1

0xb94b,	// (0x0008b807) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb94b,	// (0x0008b807) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0008f990) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0008f990) hc_cl_list_double_graphic_heading_pane_t

0xb972,	// (0x0008b82e) vid4_progress_pane_g1

0xb97e,	// (0x0008b83a) vid4_progress_pane_g2

0xb98a,	// (0x0008b846) vid4_progress_pane_g3

0xb999,	// (0x0008b855) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0008f995) vid4_progress_pane_g

0xb9b7,	// (0x0008b873) vid4_progress_pane_t1

0xb9cd,	// (0x0008b889) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0008f9a0) vid4_progress_pane_t

0xb9f8,	// (0x0008b8b4) wait_bar_pane_cp07

0x08e5,	// (0x000807a1) blid_firmament_pane_ParamLimits

0x0928,	// (0x000807e4) popup_blid_sat_info2_window_g1

0x094c,	// (0x00080808) popup_blid_sat_info2_window_t3

0x095a,	// (0x00080816) popup_blid_sat_info2_window_t4

0x0968,	// (0x00080824) popup_blid_sat_info2_window_t5

0x0976,	// (0x00080832) popup_blid_sat_info2_window_t6

0x0986,	// (0x00080842) popup_blid_sat_info2_window_t7

0x0994,	// (0x00080850) popup_blid_sat_info2_window_t8

0x09a2,	// (0x0008085e) popup_blid_sat_info2_window_t9

0x09b0,	// (0x0008086c) popup_blid_sat_info2_window_t10

0x0a78,	// (0x00080934) aid_firma_cardinal_ParamLimits

0x0a8c,	// (0x00080948) blid_firmament_pane_t1_ParamLimits

0x0aa3,	// (0x0008095f) blid_firmament_pane_t2_ParamLimits

0x0aba,	// (0x00080976) blid_firmament_pane_t3_ParamLimits

0x0ad1,	// (0x0008098d) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0008f5b3) blid_firmament_pane_t_ParamLimits

0x0ae8,	// (0x000809a4) blid_sat_info_pane_ParamLimits

0x0294,	// (0x00080150) main_cam_set_pane_ParamLimits

0x9df7,	// (0x00089cb3) aid_size_cell_colour_35_ParamLimits

0x9e11,	// (0x00089ccd) aid_size_cell_colour_112_ParamLimits

0x9e28,	// (0x00089ce4) aid_size_cell_effect_ParamLimits

0x0294,	// (0x00080150) bg_tb_trans_pane_cp02_ParamLimits

0x46dc,	// (0x00084598) heading_imed_pane_ParamLimits

0x9e42,	// (0x00089cfe) listscroll_imed_pane_ParamLimits

0xe5ff,	// (0x0008e4bb) popup_call2_audio_first_window_g5_ParamLimits

0xe5ff,	// (0x0008e4bb) popup_call2_audio_first_window_g5

0xa52a,	// (0x0008a3e6) aid_size_touch_image3_arrow_left_ParamLimits

0xa52a,	// (0x0008a3e6) aid_size_touch_image3_arrow_left

0xa540,	// (0x0008a3fc) aid_size_touch_image3_arrow_right_ParamLimits

0xa540,	// (0x0008a3fc) aid_size_touch_image3_arrow_right

0xb9e3,	// (0x0008b89f) vid4_progress_pane_t3

0xa0e2,	// (0x00089f9e) main_hwr_training_symbol_option_pane_ParamLimits

0xa0e2,	// (0x00089f9e) main_hwr_training_symbol_option_pane

0x1342,	// (0x000811fe) popup_hwr_training_preview_window_ParamLimits

0x1342,	// (0x000811fe) popup_hwr_training_preview_window

0xa143,	// (0x00089fff) hwr_training_navi_pane_g5_ParamLimits

0xa143,	// (0x00089fff) hwr_training_navi_pane_g5

0x15cd,	// (0x00081489) popup_char_count_window

0xb34b,	// (0x0008b207) bg_popup_sub_pane_cp20_ParamLimits

0xb359,	// (0x0008b215) list_vitu2_match_list_pane_ParamLimits

0xb365,	// (0x0008b221) vitu2_page_scroll_pane_ParamLimits

0xb365,	// (0x0008b221) vitu2_page_scroll_pane

0x1bc1,	// (0x00081a7d) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1bc1,	// (0x00081a7d) list_single_hwr_training_symbol_option_pane

0x1bd4,	// (0x00081a90) list_single_hwr_training_symbol_option_pane_g1

0x1bdc,	// (0x00081a98) list_single_hwr_training_symbol_option_pane_t1

0x1bea,	// (0x00081aa6) bg_button_pane_cp023

0x1bf3,	// (0x00081aaf) bg_button_pane_cp024

0xba0a,	// (0x0008b8c6) vitu2_page_scroll_pane_g1

0xba12,	// (0x0008b8ce) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0008f9a7) vitu2_page_scroll_pane_g

0xba1c,	// (0x0008b8d8) vitu2_page_scroll_pane_t1

0x0801,	// (0x000806bd) popup_char_count_window_g1

0x1c26,	// (0x00081ae2) popup_char_count_window_g2

0x1c2f,	// (0x00081aeb) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0008f9ac) popup_char_count_window_g

0x1c38,	// (0x00081af4) popup_char_count_window_t1

0x021b,	// (0x000800d7) main_vded2_pane

0x103f,	// (0x00080efb) aid_size_cell_imed_line

0x1049,	// (0x00080f05) grid_imed_line_width_pane

0xa991,	// (0x0008a84d) vid4_indicators_pane_g4

0x1c46,	// (0x00081b02) cell_imed_line_width_pane_ParamLimits

0x1c46,	// (0x00081b02) cell_imed_line_width_pane

0x1c5c,	// (0x00081b18) cell_imed_line_width_pane_g1

0x1c65,	// (0x00081b21) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0008f9b3) cell_imed_line_width_pane_g

0xba2b,	// (0x0008b8e7) main_vded2_pane_g1_ParamLimits

0xba2b,	// (0x0008b8e7) main_vded2_pane_g1

0xba3a,	// (0x0008b8f6) main_vded2_pane_g2_ParamLimits

0xba3a,	// (0x0008b8f6) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0008f9b8) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0008f9b8) main_vded2_pane_g

0xba48,	// (0x0008b904) vded2_slider_pane_ParamLimits

0xba48,	// (0x0008b904) vded2_slider_pane

0xba55,	// (0x0008b911) aid_size_touch_vded2_end

0xba5f,	// (0x0008b91b) aid_size_touch_vded2_playhead

0x1c6d,	// (0x00081b29) aid_size_touch_vded2_start

0x1c75,	// (0x00081b31) vded2_slider_bg_pane

0x1c7e,	// (0x00081b3a) vded2_slider_pane_g1

0x1c87,	// (0x00081b43) vded2_slider_pane_g2

0xba67,	// (0x0008b923) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0008f9bd) vded2_slider_pane_g

0x1c8f,	// (0x00081b4b) vded2_slider_bg_pane_g1

0x1c98,	// (0x00081b54) vded2_slider_bg_pane_g2

0x1ca1,	// (0x00081b5d) vded2_slider_bg_pane_g3

0x0002,

0xf7c7,	// (0x0008f683) vded2_slider_bg_pane_g

0x8234,	// (0x000880f0) aid_postcard_touch_down_pane_ParamLimits

0x8234,	// (0x000880f0) aid_postcard_touch_down_pane

0x8244,	// (0x00088100) aid_postcard_touch_up_pane_ParamLimits

0x8244,	// (0x00088100) aid_postcard_touch_up_pane

0x021b,	// (0x000800d7) main_blid2_pane

0xefdf,	// (0x0008ee9b) popup_blid2_search_window

0x021b,	// (0x000800d7) blid2_gps_pane

0x021b,	// (0x000800d7) blid2_navig_pane

0x021b,	// (0x000800d7) blid2_search_pane

0x021b,	// (0x000800d7) blid2_tripm_pane

0xba70,	// (0x0008b92c) blid2_search_pane_g1_ParamLimits

0xba70,	// (0x0008b92c) blid2_search_pane_g1

0xba80,	// (0x0008b93c) blid2_search_pane_t1_ParamLimits

0xba80,	// (0x0008b93c) blid2_search_pane_t1

0xba92,	// (0x0008b94e) aid_size_cell_blid2_gps_ParamLimits

0xba92,	// (0x0008b94e) aid_size_cell_blid2_gps

0xbaa2,	// (0x0008b95e) blid2_gps_pane_g1_ParamLimits

0xbaa2,	// (0x0008b95e) blid2_gps_pane_g1

0xbaae,	// (0x0008b96a) grid_blid2_satellite_pane_ParamLimits

0xbaae,	// (0x0008b96a) grid_blid2_satellite_pane

0xbabc,	// (0x0008b978) blid2_navig_pane_g1_ParamLimits

0xbabc,	// (0x0008b978) blid2_navig_pane_g1

0xbac8,	// (0x0008b984) blid2_navig_pane_t1_ParamLimits

0xbac8,	// (0x0008b984) blid2_navig_pane_t1

0xbada,	// (0x0008b996) blid2_navig_pane_t2_ParamLimits

0xbada,	// (0x0008b996) blid2_navig_pane_t2

0x0001,

0xfb08,	// (0x0008f9c4) blid2_navig_pane_t_ParamLimits

0xfb08,	// (0x0008f9c4) blid2_navig_pane_t

0xbaec,	// (0x0008b9a8) blid2_navig_ring_pane_ParamLimits

0xbaec,	// (0x0008b9a8) blid2_navig_ring_pane

0xbafc,	// (0x0008b9b8) blid2_speed_pane_ParamLimits

0xbafc,	// (0x0008b9b8) blid2_speed_pane

0xbb08,	// (0x0008b9c4) blid2_tripm_pane_g1_ParamLimits

0xbb08,	// (0x0008b9c4) blid2_tripm_pane_g1

0xbb18,	// (0x0008b9d4) blid2_tripm_pane_g2_ParamLimits

0xbb18,	// (0x0008b9d4) blid2_tripm_pane_g2

0xbb24,	// (0x0008b9e0) blid2_tripm_pane_g3_ParamLimits

0xbb24,	// (0x0008b9e0) blid2_tripm_pane_g3

0xbb30,	// (0x0008b9ec) blid2_tripm_pane_g4_ParamLimits

0xbb30,	// (0x0008b9ec) blid2_tripm_pane_g4

0xbb3c,	// (0x0008b9f8) blid2_tripm_pane_g5_ParamLimits

0xbb3c,	// (0x0008b9f8) blid2_tripm_pane_g5

0x0005,

0xfb0d,	// (0x0008f9c9) blid2_tripm_pane_g_ParamLimits

0xfb0d,	// (0x0008f9c9) blid2_tripm_pane_g

0xbb58,	// (0x0008ba14) blid2_tripm_pane_t1_ParamLimits

0xbb58,	// (0x0008ba14) blid2_tripm_pane_t1

0xbb6c,	// (0x0008ba28) blid2_tripm_pane_t2_ParamLimits

0xbb6c,	// (0x0008ba28) blid2_tripm_pane_t2

0xbb7e,	// (0x0008ba3a) blid2_tripm_pane_t3_ParamLimits

0xbb7e,	// (0x0008ba3a) blid2_tripm_pane_t3

0x0003,

0xfb1a,	// (0x0008f9d6) blid2_tripm_pane_t_ParamLimits

0xfb1a,	// (0x0008f9d6) blid2_tripm_pane_t

0xbbb0,	// (0x0008ba6c) cell_blid2_satellite_pane_ParamLimits

0xbbb0,	// (0x0008ba6c) cell_blid2_satellite_pane

0xbbce,	// (0x0008ba8a) cell_blid2_satellite_pane_g1

0x1caa,	// (0x00081b66) cell_blid2_satellite_pane_t1

0x0af8,	// (0x000809b4) blid2_speed_pane_g1

0x1cb8,	// (0x00081b74) blid2_speed_pane_t1

0x1cc6,	// (0x00081b82) blid2_speed_pane_t2

0x0001,

0xfb23,	// (0x0008f9df) blid2_speed_pane_t

0x0af8,	// (0x000809b4) blid2_navig_ring_pane_g1

0xbbd7,	// (0x0008ba93) blid2_navig_ring_pane_g2

0xbbdf,	// (0x0008ba9b) blid2_navig_ring_pane_g3

0xbbe7,	// (0x0008baa3) blid2_navig_ring_pane_g4

0xbbef,	// (0x0008baab) blid2_navig_ring_pane_g5

0x0004,

0xfb28,	// (0x0008f9e4) blid2_navig_ring_pane_g

0x021b,	// (0x000800d7) bg_popup_window_pane_cp011

0x1cd4,	// (0x00081b90) popup_blid2_search_window_g1

0x1cdc,	// (0x00081b98) popup_blid2_search_window_t1

0x1cea,	// (0x00081ba6) popup_blid2_search_window_t2

0x0001,

0xfb33,	// (0x0008f9ef) popup_blid2_search_window_t

0x437c,	// (0x00084238) main_browser_pane_g1

0x4083,	// (0x00083f3f) main_browser_pane_ParamLimits

0xa95b,	// (0x0008a817) bg_button_pane_cp011_ParamLimits

0xac27,	// (0x0008aae3) cell_vitu2_function_pane_g1_ParamLimits

0xefd1,	// (0x0008ee8d) bg_popup_sub_pane_cp22_ParamLimits

0xb503,	// (0x0008b3bf) input_focus_pane_cp08_ParamLimits

0xb51a,	// (0x0008b3d6) popup_vitu2_query_button_pane_ParamLimits

0xb51a,	// (0x0008b3d6) popup_vitu2_query_button_pane

0xb52b,	// (0x0008b3e7) popup_vitu2_query_input_button_pane

0x1887,	// (0x00081743) popup_vitu2_query_window_g1_ParamLimits

0xb535,	// (0x0008b3f1) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0008f8f7) popup_vitu2_query_window_g_ParamLimits

0x021b,	// (0x000800d7) bg_button_pane_cp026

0xbbf7,	// (0x0008bab3) popup_vitu2_query_input_button_pane_g1

0x021b,	// (0x000800d7) bg_button_pane_cp025

0x1cf8,	// (0x00081bb4) popup_vitu2_query_button_pane_t1

0x93b5,	// (0x00089271) main_mp3_pane_t6

0x93c5,	// (0x00089281) popup_slider_window_cp01

0xa87a,	// (0x0008a736) cam4_battery_pane

0xa969,	// (0x0008a825) cam4_battery_pane_cp02

0xb960,	// (0x0008b81c) cam4_battery_pane_cp01

0xb96a,	// (0x0008b826) cam4_battery_pane_cp03

0x1d06,	// (0x00081bc2) cam4_battery_pane_g1

0x0af8,	// (0x000809b4) cam4_battery_pane_g2

0x0001,

0xfb38,	// (0x0008f9f4) cam4_battery_pane_g

0x09be,	// (0x0008087a) popup_blid_sat_info2_window_t11

0x7ab9,	// (0x00087975) aid_size_touch_mv_arrow_left_ParamLimits

0x7ae4,	// (0x000879a0) aid_size_touch_mv_arrow_right_ParamLimits

0xdb26,	// (0x0008d9e2) navi_pane_g1_ParamLimits

0x7b0d,	// (0x000879c9) navi_pane_g2_ParamLimits

0x7b3b,	// (0x000879f7) navi_pane_g3_ParamLimits

0xf409,	// (0x0008f2c5) navi_pane_g_ParamLimits

0x7b95,	// (0x00087a51) navi_pane_mv_t1_ParamLimits

0x9e4e,	// (0x00089d0a) grid_imed_effect_pane_ParamLimits

0x6835,	// (0x000866f1) aid_placing_vt_slider_lsc

0x42c9,	// (0x00084185) aid_placing_vt_slider_prt

0x0294,	// (0x00080150) bg_tb_trans_pane_cp01_ParamLimits

0x0c48,	// (0x00080b04) popup_image_details_window_g1_ParamLimits

0x0c5b,	// (0x00080b17) popup_image_details_window_g2_ParamLimits

0x0c70,	// (0x00080b2c) popup_image_details_window_g3_ParamLimits

0x0c70,	// (0x00080b2c) popup_image_details_window_g3

0xf73c,	// (0x0008f5f8) popup_image_details_window_g_ParamLimits

0x0c84,	// (0x00080b40) popup_image_details_window_t1_ParamLimits

0x0c96,	// (0x00080b52) popup_image_details_window_t2_ParamLimits

0x0caf,	// (0x00080b6b) popup_image_details_window_t3_ParamLimits

0x0cc3,	// (0x00080b7f) popup_image_details_window_t4_ParamLimits

0x0cde,	// (0x00080b9a) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0008f5ff) popup_image_details_window_t_ParamLimits

0xb89e,	// (0x0008b75a) cl_header_name_pane_ParamLimits

0xb89e,	// (0x0008b75a) cl_header_name_pane

0xbbff,	// (0x0008babb) cl_header_name_pane_t1_ParamLimits

0xbbff,	// (0x0008babb) cl_header_name_pane_t1

0xbc16,	// (0x0008bad2) cl_header_name_pane_t2_ParamLimits

0xbc16,	// (0x0008bad2) cl_header_name_pane_t2

0xbc40,	// (0x0008bafc) cl_header_name_pane_t3_ParamLimits

0xbc40,	// (0x0008bafc) cl_header_name_pane_t3

0x0002,

0xfb3d,	// (0x0008f9f9) cl_header_name_pane_t_ParamLimits

0xfb3d,	// (0x0008f9f9) cl_header_name_pane_t

0x7b66,	// (0x00087a22) navi_pane_mv_g2_ParamLimits

0x158a,	// (0x00081446) field_vitu2_entry_pane_g1_ParamLimits

0x1596,	// (0x00081452) field_vitu2_entry_pane_g2_ParamLimits

0x15a2,	// (0x0008145e) field_vitu2_entry_pane_g3_ParamLimits

0x15a2,	// (0x0008145e) field_vitu2_entry_pane_g3

0xf93a,	// (0x0008f7f6) field_vitu2_entry_pane_g_ParamLimits

0xabb7,	// (0x0008aa73) cell_vitu2_itu_pane_g1_ParamLimits

0xabc7,	// (0x0008aa83) cell_vitu2_itu_pane_g2_ParamLimits

0xabc7,	// (0x0008aa83) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0008f802) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0008f802) cell_vitu2_itu_pane_g

0xa95b,	// (0x0008a817) bg_vkb2_func_pane_cp05_ParamLimits

0xa95b,	// (0x0008a817) bg_vkb2_func_pane_cp05

0xa95b,	// (0x0008a817) bg_vkb2_func_pane_cp03

0xa95b,	// (0x0008a817) bg_vkb2_func_pane_cp04

0xa95b,	// (0x0008a817) bg_vkb2_func_pane_cp10_ParamLimits

0xa95b,	// (0x0008a817) bg_vkb2_func_pane_cp10

0xb840,	// (0x0008b6fc) bg_vkb2_func_pane_cp08

0xb826,	// (0x0008b6e2) bg_vkb2_func_pane_cp06

0xb834,	// (0x0008b6f0) bg_vkb2_func_pane_cp07

0x1bfc,	// (0x00081ab8) bg_vkb2_func_pane_cp11_ParamLimits

0x1bfc,	// (0x00081ab8) bg_vkb2_func_pane_cp11

0x1c11,	// (0x00081acd) bg_vkb2_func_pane_cp12_ParamLimits

0x1c11,	// (0x00081acd) bg_vkb2_func_pane_cp12

0x021b,	// (0x000800d7) bg_vkb2_func_pane_cp09

0x15df,	// (0x0008149b) bg_vkb2_func_pane_g1

0x448d,	// (0x00084349) bg_vkb2_func_pane_g2

0x15e7,	// (0x000814a3) bg_vkb2_func_pane_g3

0x15ef,	// (0x000814ab) bg_vkb2_func_pane_g4

0x1832,	// (0x000816ee) bg_vkb2_func_pane_g5

0x1607,	// (0x000814c3) bg_vkb2_func_pane_g6

0x160f,	// (0x000814cb) bg_vkb2_func_pane_g7

0x15ff,	// (0x000814bb) bg_vkb2_func_pane_g8

0x446d,	// (0x00084329) bg_vkb2_func_pane_g9

0x0008,

0xfb44,	// (0x0008fa00) bg_vkb2_func_pane_g

0xbb4a,	// (0x0008ba06) blid2_tripm_pane_g6_ParamLimits

0xbb4a,	// (0x0008ba06) blid2_tripm_pane_g6

0x13fa,	// (0x000812b6) mp4_progress_pane_g1

0xbba4,	// (0x0008ba60) blid2_tripm_values_pane_ParamLimits

0xbba4,	// (0x0008ba60) blid2_tripm_values_pane

0xbc65,	// (0x0008bb21) blid2_tripm_values_pane_t1

0xbc73,	// (0x0008bb2f) blid2_tripm_values_pane_t2

0xbc81,	// (0x0008bb3d) blid2_tripm_values_pane_t3

0xbc8f,	// (0x0008bb4b) blid2_tripm_values_pane_t4

0xbc9d,	// (0x0008bb59) blid2_tripm_values_pane_t5

0xbcab,	// (0x0008bb67) blid2_tripm_values_pane_t6

0xbcb9,	// (0x0008bb75) blid2_tripm_values_pane_t7

0xbcc7,	// (0x0008bb83) blid2_tripm_values_pane_t8

0xbcd5,	// (0x0008bb91) blid2_tripm_values_pane_t9

0x0008,

0xfb57,	// (0x0008fa13) blid2_tripm_values_pane_t

0x6873,	// (0x0008672f) call_video_pane_t1_ParamLimits

0x6890,	// (0x0008674c) call_video_pane_t2_ParamLimits

0xf292,	// (0x0008f14e) call_video_pane_t_ParamLimits

0x80f5,	// (0x00087fb1) msg_header_pane_g1_ParamLimits

0xdd43,	// (0x0008dbff) msg_header_pane_g2_ParamLimits

0xdd43,	// (0x0008dbff) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0008f368) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0008f368) msg_header_pane_g

0x4083,	// (0x00083f3f) main_clock2_pane_ParamLimits

0x9bcd,	// (0x00089a89) grid_clock2_toolbar_pane_ParamLimits

0x9bcd,	// (0x00089a89) grid_clock2_toolbar_pane

0x9bcd,	// (0x00089a89) listscroll_clock2_pane_ParamLimits

0x9bcd,	// (0x00089a89) listscroll_clock2_pane

0x9c85,	// (0x00089b41) main_clock2_pane_t3_ParamLimits

0x9c85,	// (0x00089b41) main_clock2_pane_t3

0x9c97,	// (0x00089b53) main_clock2_pane_t4_ParamLimits

0x9c97,	// (0x00089b53) main_clock2_pane_t4

0x1d10,	// (0x00081bcc) cell_clock2_toolbar_pane

0x1d18,	// (0x00081bd4) cell_clock2_toolbar_pane_cp01

0x1d18,	// (0x00081bd4) cell_clock2_toolbar_pane_cp02

0x1d20,	// (0x00081bdc) cell_clock2_toolbar_pane_cp03

0x1d28,	// (0x00081be4) list_clock2_pane

0xda8c,	// (0x0008d948) scroll_pane_cp10

0x1d30,	// (0x00081bec) list_single_clock2_pane_ParamLimits

0x1d30,	// (0x00081bec) list_single_clock2_pane

0xdbc6,	// (0x0008da82) list_highlight_pane_cp08

0x1d3d,	// (0x00081bf9) list_single_clock2_pane_t1

0x1d4b,	// (0x00081c07) list_single_clock2_pane_t2

0x0001,

0xfb6a,	// (0x0008fa26) list_single_clock2_pane_t

0x021b,	// (0x000800d7) bg_button_pane_cp10

0x1d59,	// (0x00081c15) cell_clock2_toolbar_pane_g1

0x8196,	// (0x00088052) aid_main_viewer_pane_g1_ParamLimits

0x8196,	// (0x00088052) aid_main_viewer_pane_g1

0x81a2,	// (0x0008805e) aid_main_viewer_pane_g2_ParamLimits

0x81a2,	// (0x0008805e) aid_main_viewer_pane_g2

0x81ae,	// (0x0008806a) aid_main_viewer_pane_g3_ParamLimits

0x81ae,	// (0x0008806a) aid_main_viewer_pane_g3

0x81bf,	// (0x0008807b) aid_main_viewer_pane_g4_ParamLimits

0x81bf,	// (0x0008807b) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0008f379) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0008f379) aid_main_viewer_pane_g

0x894f,	// (0x0008880b) main_calc_pane_ParamLimits

0x895c,	// (0x00088818) main_dialer2_pane_ParamLimits

0x021b,	// (0x000800d7) main_cam6_pane

0x021b,	// (0x000800d7) main_vid6_pane

0x9bd9,	// (0x00089a95) listscroll_gen_pane_cp06_ParamLimits

0x9bd9,	// (0x00089a95) listscroll_gen_pane_cp06

0x9ca9,	// (0x00089b65) main_clock2_pane_t5_ParamLimits

0x9ca9,	// (0x00089b65) main_clock2_pane_t5

0x9cf8,	// (0x00089bb4) aid_call2_pane_cp10_ParamLimits

0x9d0a,	// (0x00089bc6) aid_call_pane_cp10_ParamLimits

0xdafb,	// (0x0008d9b7) popup_clock_analogue_window_cp10_g1_ParamLimits

0xdafb,	// (0x0008d9b7) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9d1c,	// (0x00089bd8) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9d1c,	// (0x00089bd8) popup_clock_analogue_window_cp10_g4_ParamLimits

0xdafb,	// (0x0008d9b7) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0008f6af) popup_clock_analogue_window_cp10_g_ParamLimits

0x9d2e,	// (0x00089bea) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa4d7,	// (0x0008a393) cell_dialer2_keypad_pane_g2_ParamLimits

0xa4d7,	// (0x0008a393) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0008f795) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0008f795) cell_dialer2_keypad_pane_g

0xa4f3,	// (0x0008a3af) cell_dialer2_keypad_pane_t1

0xaf04,	// (0x0008adc0) main_cset_text2_pane_ParamLimits

0xaf04,	// (0x0008adc0) main_cset_text2_pane

0x1a7f,	// (0x0008193b) area_vitu2_query_pane_g1_ParamLimits

0xb7c5,	// (0x0008b681) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0008f94a) area_vitu2_query_pane_g_ParamLimits

0x1b03,	// (0x000819bf) area_vitu2_query_pane_t7_ParamLimits

0x1b03,	// (0x000819bf) area_vitu2_query_pane_t7

0xb826,	// (0x0008b6e2) bg_button_pane_cp018_ParamLimits

0xb834,	// (0x0008b6f0) bg_button_pane_cp021_ParamLimits

0xb840,	// (0x0008b6fc) bg_button_pane_cp022_ParamLimits

0xb840,	// (0x0008b6fc) bg_vkb2_func_pane_cp08_ParamLimits

0xb826,	// (0x0008b6e2) bg_vkb2_func_pane_cp06_ParamLimits

0xb834,	// (0x0008b6f0) bg_vkb2_func_pane_cp07_ParamLimits

0xb851,	// (0x0008b70d) input_focus_pane_cp09_ParamLimits

0xbce3,	// (0x0008bb9f) cam6_autofocus_pane_ParamLimits

0xbce3,	// (0x0008bb9f) cam6_autofocus_pane

0xbd05,	// (0x0008bbc1) cam6_image_uncrop_pane_ParamLimits

0xbd05,	// (0x0008bbc1) cam6_image_uncrop_pane

0xbd32,	// (0x0008bbee) cam6_indi_pane_ParamLimits

0xbd32,	// (0x0008bbee) cam6_indi_pane

0xbd4c,	// (0x0008bc08) cam6_mode_pane_ParamLimits

0xbd4c,	// (0x0008bc08) cam6_mode_pane

0xbd60,	// (0x0008bc1c) cam6_timer_pane_ParamLimits

0xbd60,	// (0x0008bc1c) cam6_timer_pane

0xbd6c,	// (0x0008bc28) cam6_zoom_pane_ParamLimits

0xbd6c,	// (0x0008bc28) cam6_zoom_pane

0xbd8a,	// (0x0008bc46) cam6_mode_pane_g1_ParamLimits

0xbd8a,	// (0x0008bc46) cam6_mode_pane_g1

0xbd96,	// (0x0008bc52) cam6_mode_pane_g2_ParamLimits

0xbd96,	// (0x0008bc52) cam6_mode_pane_g2

0xbda2,	// (0x0008bc5e) cam6_mode_pane_g3_ParamLimits

0xbda2,	// (0x0008bc5e) cam6_mode_pane_g3

0xbdae,	// (0x0008bc6a) cam6_mode_pane_g4_ParamLimits

0xbdae,	// (0x0008bc6a) cam6_mode_pane_g4

0x0003,

0xfb6f,	// (0x0008fa2b) cam6_mode_pane_g_ParamLimits

0xfb6f,	// (0x0008fa2b) cam6_mode_pane_g

0x1d61,	// (0x00081c1d) bg_tb_trans_pane_cp08_ParamLimits

0x1d61,	// (0x00081c1d) bg_tb_trans_pane_cp08

0x1d6f,	// (0x00081c2b) cam6_battery_pane_ParamLimits

0x1d6f,	// (0x00081c2b) cam6_battery_pane

0x1d85,	// (0x00081c41) cam6_indi_pane_g1_ParamLimits

0x1d85,	// (0x00081c41) cam6_indi_pane_g1

0x1d97,	// (0x00081c53) cam6_indi_pane_g2_ParamLimits

0x1d97,	// (0x00081c53) cam6_indi_pane_g2

0x1da9,	// (0x00081c65) cam6_indi_pane_g3_ParamLimits

0x1da9,	// (0x00081c65) cam6_indi_pane_g3

0x0002,

0xfb78,	// (0x0008fa34) cam6_indi_pane_g_ParamLimits

0xfb78,	// (0x0008fa34) cam6_indi_pane_g

0x1dbb,	// (0x00081c77) cam6_indi_pane_t1_ParamLimits

0x1dbb,	// (0x00081c77) cam6_indi_pane_t1

0xa9cf,	// (0x0008a88b) cam6_autofocus_pane_g1

0xa9c7,	// (0x0008a883) cam6_autofocus_pane_g2

0xa9df,	// (0x0008a89b) cam6_autofocus_pane_g3

0xa9d7,	// (0x0008a893) cam6_autofocus_pane_g4

0x0003,

0xfb7f,	// (0x0008fa3b) cam6_autofocus_pane_g

0x1de1,	// (0x00081c9d) cam6_timer_pane_g1

0x1de9,	// (0x00081ca5) cam6_timer_pane_t1

0x1df7,	// (0x00081cb3) cam6_zoom_cont_pane

0x1dff,	// (0x00081cbb) cam6_zoom_pane_g1

0x1e07,	// (0x00081cc3) cam6_zoom_pane_g2

0xbdba,	// (0x0008bc76) cam6_zoom_pane_g3

0x0002,

0xfb88,	// (0x0008fa44) cam6_zoom_pane_g

0x0af8,	// (0x000809b4) cam6_battery_pane_g1

0x0af8,	// (0x000809b4) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0008f5bc) cam6_battery_pane_g

0x1e0f,	// (0x00081ccb) cam6_zoom_cont_pane_g1

0x1e18,	// (0x00081cd4) cam6_zoom_cont_pane_g2

0x1e21,	// (0x00081cdd) cam6_zoom_cont_pane_g3

0x0002,

0xfb8f,	// (0x0008fa4b) cam6_zoom_cont_pane_g

0xbdd7,	// (0x0008bc93) cam6_mode_pane_cp_ParamLimits

0xbdd7,	// (0x0008bc93) cam6_mode_pane_cp

0xbdeb,	// (0x0008bca7) cam6_zoom_pane_cp_ParamLimits

0xbdeb,	// (0x0008bca7) cam6_zoom_pane_cp

0xbe09,	// (0x0008bcc5) vid6_image_uncrop_cif_pane_ParamLimits

0xbe09,	// (0x0008bcc5) vid6_image_uncrop_cif_pane

0xbe35,	// (0x0008bcf1) vid6_image_uncrop_nhd_pane_ParamLimits

0xbe35,	// (0x0008bcf1) vid6_image_uncrop_nhd_pane

0xbe54,	// (0x0008bd10) vid6_image_uncrop_vga_pane_ParamLimits

0xbe54,	// (0x0008bd10) vid6_image_uncrop_vga_pane

0xbe73,	// (0x0008bd2f) vid6_image_uncrop_wvga_pane_ParamLimits

0xbe73,	// (0x0008bd2f) vid6_image_uncrop_wvga_pane

0xbe92,	// (0x0008bd4e) vid6_indi_pane_ParamLimits

0xbe92,	// (0x0008bd4e) vid6_indi_pane

0x1d61,	// (0x00081c1d) bg_tb_trans_pane_cp09_ParamLimits

0x1d61,	// (0x00081c1d) bg_tb_trans_pane_cp09

0x1e39,	// (0x00081cf5) cam6_battery_pane_cp_ParamLimits

0x1e39,	// (0x00081cf5) cam6_battery_pane_cp

0x1e45,	// (0x00081d01) vid6_indi_pane_g1_ParamLimits

0x1e45,	// (0x00081d01) vid6_indi_pane_g1

0x1e57,	// (0x00081d13) vid6_indi_pane_g2_ParamLimits

0x1e57,	// (0x00081d13) vid6_indi_pane_g2

0x1e69,	// (0x00081d25) vid6_indi_pane_g3_ParamLimits

0x1e69,	// (0x00081d25) vid6_indi_pane_g3

0x1e80,	// (0x00081d3c) vid6_indi_pane_g4_ParamLimits

0x1e80,	// (0x00081d3c) vid6_indi_pane_g4

0x1e97,	// (0x00081d53) vid6_indi_pane_g5_ParamLimits

0x1e97,	// (0x00081d53) vid6_indi_pane_g5

0x0004,

0xfb96,	// (0x0008fa52) vid6_indi_pane_g_ParamLimits

0xfb96,	// (0x0008fa52) vid6_indi_pane_g

0x1eb1,	// (0x00081d6d) vid6_indi_pane_t1_ParamLimits

0x1eb1,	// (0x00081d6d) vid6_indi_pane_t1

0x1ec7,	// (0x00081d83) vid6_indi_pane_t2_ParamLimits

0x1ec7,	// (0x00081d83) vid6_indi_pane_t2

0x1eef,	// (0x00081dab) vid6_indi_pane_t3_ParamLimits

0x1eef,	// (0x00081dab) vid6_indi_pane_t3

0x1f17,	// (0x00081dd3) vid6_indi_pane_t4_ParamLimits

0x1f17,	// (0x00081dd3) vid6_indi_pane_t4

0x0003,

0xfba1,	// (0x0008fa5d) vid6_indi_pane_t_ParamLimits

0xfba1,	// (0x0008fa5d) vid6_indi_pane_t

0x1f3b,	// (0x00081df7) wait_bar_pane_cp08

0xbeb7,	// (0x0008bd73) main_cset_text2_pane_t1_ParamLimits

0xbeb7,	// (0x0008bd73) main_cset_text2_pane_t1

0xbdc2,	// (0x0008bc7e) listscroll_gen_pane_cp06_t1_ParamLimits

0xbdc2,	// (0x0008bc7e) listscroll_gen_pane_cp06_t1

0x021b,	// (0x000800d7) main_cam6_set_pane

0xa86c,	// (0x0008a728) bg_tb_trans_pane_cp06_ParamLimits

0xa882,	// (0x0008a73e) cam4_indicators_pane_g1_ParamLimits

0xa88f,	// (0x0008a74b) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0008f7d2) cam4_indicators_pane_g_ParamLimits

0xa8af,	// (0x0008a76b) cam4_indicators_pane_t1_ParamLimits

0xa95b,	// (0x0008a817) bg_tb_trans_pane_cp07_ParamLimits

0xa882,	// (0x0008a73e) vid4_indicators_pane_g1_ParamLimits

0xa973,	// (0x0008a82f) vid4_indicators_pane_g2_ParamLimits

0xa980,	// (0x0008a83c) vid4_indicators_pane_g3_ParamLimits

0xa991,	// (0x0008a84d) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0008f7e4) vid4_indicators_pane_g_ParamLimits

0xa9ad,	// (0x0008a869) vid4_indicators_pane_t1_ParamLimits

0xb972,	// (0x0008b82e) vid4_progress_pane_g1_ParamLimits

0xb97e,	// (0x0008b83a) vid4_progress_pane_g2_ParamLimits

0xb98a,	// (0x0008b846) vid4_progress_pane_g3_ParamLimits

0xb999,	// (0x0008b855) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0008f995) vid4_progress_pane_g_ParamLimits

0xb9b7,	// (0x0008b873) vid4_progress_pane_t1_ParamLimits

0xb9cd,	// (0x0008b889) vid4_progress_pane_t2_ParamLimits

0xb9e3,	// (0x0008b89f) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0008f9a0) vid4_progress_pane_t_ParamLimits

0xb9f8,	// (0x0008b8b4) wait_bar_pane_cp07_ParamLimits

0xbede,	// (0x0008bd9a) main_cam6_set_pane_g2_ParamLimits

0xbede,	// (0x0008bd9a) main_cam6_set_pane_g2

0xbeea,	// (0x0008bda6) main_cset6_listscroll_pane_ParamLimits

0xbeea,	// (0x0008bda6) main_cset6_listscroll_pane

0xbf17,	// (0x0008bdd3) main_cset6_slider_pane_ParamLimits

0xbf17,	// (0x0008bdd3) main_cset6_slider_pane

0xbf23,	// (0x0008bddf) main_cset6_text2_pane_ParamLimits

0xbf23,	// (0x0008bddf) main_cset6_text2_pane

0x1f4a,	// (0x00081e06) main_cset6_text_pane

0x1f52,	// (0x00081e0e) main_cset_list_pane_copy1_ParamLimits

0x1f52,	// (0x00081e0e) main_cset_list_pane_copy1

0x1f62,	// (0x00081e1e) scroll_pane_cp028_copy1

0xbf36,	// (0x0008bdf2) cset_list_set_pane_copy1

0xbf46,	// (0x0008be02) aid_position_infowindow_above_copy1

0xbf4e,	// (0x0008be0a) aid_position_infowindow_below_copy1

0xbf56,	// (0x0008be12) cset_list_set_pane_g1_copy1

0xbf5e,	// (0x0008be1a) cset_list_set_pane_g3_copy1_ParamLimits

0xbf5e,	// (0x0008be1a) cset_list_set_pane_g3_copy1

0xbf6d,	// (0x0008be29) cset_list_set_pane_t1_copy1_ParamLimits

0xbf6d,	// (0x0008be29) cset_list_set_pane_t1_copy1

0x0294,	// (0x00080150) list_highlight_pane_cp021_copy1_ParamLimits

0x0294,	// (0x00080150) list_highlight_pane_cp021_copy1

0x1f8f,	// (0x00081e4b) cset6_slider_pane_ParamLimits

0x1f8f,	// (0x00081e4b) cset6_slider_pane

0x1fbb,	// (0x00081e77) main_cset6_slider_pane_g1_ParamLimits

0x1fbb,	// (0x00081e77) main_cset6_slider_pane_g1

0xbf82,	// (0x0008be3e) main_cset6_slider_pane_g2_ParamLimits

0xbf82,	// (0x0008be3e) main_cset6_slider_pane_g2

0x1fe3,	// (0x00081e9f) main_cset6_slider_pane_g3_ParamLimits

0x1fe3,	// (0x00081e9f) main_cset6_slider_pane_g3

0xbfaa,	// (0x0008be66) main_cset6_slider_pane_g4_ParamLimits

0xbfaa,	// (0x0008be66) main_cset6_slider_pane_g4

0xbfb6,	// (0x0008be72) main_cset6_slider_pane_g5_ParamLimits

0xbfb6,	// (0x0008be72) main_cset6_slider_pane_g5

0x1712,	// (0x000815ce) main_cset6_slider_pane_g7_ParamLimits

0x1712,	// (0x000815ce) main_cset6_slider_pane_g7

0x171e,	// (0x000815da) main_cset6_slider_pane_g8_ParamLimits

0x171e,	// (0x000815da) main_cset6_slider_pane_g8

0xbfc2,	// (0x0008be7e) main_cset6_slider_pane_g9_ParamLimits

0xbfc2,	// (0x0008be7e) main_cset6_slider_pane_g9

0xbfce,	// (0x0008be8a) main_cset6_slider_pane_g10_ParamLimits

0xbfce,	// (0x0008be8a) main_cset6_slider_pane_g10

0xbfda,	// (0x0008be96) main_cset6_slider_pane_g11_ParamLimits

0xbfda,	// (0x0008be96) main_cset6_slider_pane_g11

0xbfe6,	// (0x0008bea2) main_cset6_slider_pane_g12_ParamLimits

0xbfe6,	// (0x0008bea2) main_cset6_slider_pane_g12

0xbff2,	// (0x0008beae) main_cset6_slider_pane_g13_ParamLimits

0xbff2,	// (0x0008beae) main_cset6_slider_pane_g13

0xbffe,	// (0x0008beba) main_cset6_slider_pane_g14_ParamLimits

0xbffe,	// (0x0008beba) main_cset6_slider_pane_g14

0xc00a,	// (0x0008bec6) main_cset6_slider_pane_g15_ParamLimits

0xc00a,	// (0x0008bec6) main_cset6_slider_pane_g15

0xc022,	// (0x0008bede) main_cset6_slider_pane_g16_ParamLimits

0xc022,	// (0x0008bede) main_cset6_slider_pane_g16

0xc02e,	// (0x0008beea) main_cset6_slider_pane_g17_ParamLimits

0xc02e,	// (0x0008beea) main_cset6_slider_pane_g17

0x0011,

0xfbaa,	// (0x0008fa66) main_cset6_slider_pane_g_ParamLimits

0xfbaa,	// (0x0008fa66) main_cset6_slider_pane_g

0x1fef,	// (0x00081eab) main_cset6_slider_pane_t1_ParamLimits

0x1fef,	// (0x00081eab) main_cset6_slider_pane_t1

0xc052,	// (0x0008bf0e) main_cset6_slider_pane_t2_ParamLimits

0xc052,	// (0x0008bf0e) main_cset6_slider_pane_t2

0xc07d,	// (0x0008bf39) main_cset6_slider_pane_t3_ParamLimits

0xc07d,	// (0x0008bf39) main_cset6_slider_pane_t3

0xc0a8,	// (0x0008bf64) main_cset6_slider_pane_t4_ParamLimits

0xc0a8,	// (0x0008bf64) main_cset6_slider_pane_t4

0xc0d3,	// (0x0008bf8f) main_cset6_slider_pane_t5_ParamLimits

0xc0d3,	// (0x0008bf8f) main_cset6_slider_pane_t5

0x2030,	// (0x00081eec) main_cset6_slider_pane_t7_ParamLimits

0x2030,	// (0x00081eec) main_cset6_slider_pane_t7

0xc0fe,	// (0x0008bfba) main_cset6_slider_pane_t8_ParamLimits

0xc0fe,	// (0x0008bfba) main_cset6_slider_pane_t8

0xc122,	// (0x0008bfde) main_cset6_slider_pane_t9_ParamLimits

0xc122,	// (0x0008bfde) main_cset6_slider_pane_t9

0xc146,	// (0x0008c002) main_cset6_slider_pane_t10_ParamLimits

0xc146,	// (0x0008c002) main_cset6_slider_pane_t10

0xc16a,	// (0x0008c026) main_cset6_slider_pane_t11_ParamLimits

0xc16a,	// (0x0008c026) main_cset6_slider_pane_t11

0x2066,	// (0x00081f22) main_cset6_slider_pane_t14_ParamLimits

0x2066,	// (0x00081f22) main_cset6_slider_pane_t14

0x209f,	// (0x00081f5b) main_cset6_slider_pane_t15_ParamLimits

0x209f,	// (0x00081f5b) main_cset6_slider_pane_t15

0x000b,

0xfbcf,	// (0x0008fa8b) main_cset6_slider_pane_t_ParamLimits

0xfbcf,	// (0x0008fa8b) main_cset6_slider_pane_t

0x17d6,	// (0x00081692) cset_slider_pane_g1_copy1

0x17df,	// (0x0008169b) cset_slider_pane_g2_copy1

0x17e8,	// (0x000816a4) cset_slider_pane_g3_copy1

0x021b,	// (0x000800d7) bg_popup_sub_pane_cp011_copy1

0x1893,	// (0x0008174f) main_cset_text_pane_g1_copy1

0x189b,	// (0x00081757) main_cset_text_pane_t1_copy1

0x18a9,	// (0x00081765) main_cset_text_pane_t2_copy1

0x18b7,	// (0x00081773) main_cset_text_pane_t3_copy1

0x18c5,	// (0x00081781) main_cset_text_pane_t4_copy1

0x18d3,	// (0x0008178f) main_cset_text_pane_t5_copy1

0x18e1,	// (0x0008179d) main_cset_text_pane_t6_copy1

0x18ef,	// (0x000817ab) main_cset_text_pane_t7_copy1

0xc18e,	// (0x0008c04a) main_cset_text2_pane_t1_copy1

0x021b,	// (0x000800d7) main_ncimui_pane

0x89a1,	// (0x0008885d) popup_query_ncimui_window_ParamLimits

0x89a1,	// (0x0008885d) popup_query_ncimui_window

0x0dc9,	// (0x00080c85) field_cale_ev2_pane_g4_ParamLimits

0x0dc9,	// (0x00080c85) field_cale_ev2_pane_g4

0xa217,	// (0x0008a0d3) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa217,	// (0x0008a0d3) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0008f770) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0008f770) cell_video_dialer_keypad_pane_g

0xa22f,	// (0x0008a0eb) cell_video_dialer_keypad_pane_t1

0x021b,	// (0x000800d7) bg_popup_window_pane_cp012

0xd978,	// (0x0008d834) heading_pane_cp06

0x21c7,	// (0x00082083) ncim_query_content_pane

0x021b,	// (0x000800d7) bg_popup_heading_pane_cp01

0x21cf,	// (0x0008208b) ncim_heading_pane_t1

0x21dd,	// (0x00082099) ncim_indicator_popup_pane

0x21ef,	// (0x000820ab) ncim_query_button_pane

0x2205,	// (0x000820c1) ncim_query_content_pane_t1

0x2217,	// (0x000820d3) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0008faca) ncim_query_content_pane_t

0x2251,	// (0x0008210d) ncim_query_list_pane

0x2263,	// (0x0008211f) ncim_query_popup_pane

0x21dd,	// (0x00082099) ncim_indicator_popup_pane_ParamLimits

0xc2b9,	// (0x0008c175) ncim_query_content_pane_g1_ParamLimits

0xc2b9,	// (0x0008c175) ncim_query_content_pane_g1

0x2205,	// (0x000820c1) ncim_query_content_pane_t1_ParamLimits

0x2217,	// (0x000820d3) ncim_query_content_pane_t2_ParamLimits

0xc2c5,	// (0x0008c181) ncim_query_content_pane_t3_ParamLimits

0xc2c5,	// (0x0008c181) ncim_query_content_pane_t3

0xc2e2,	// (0x0008c19e) ncim_query_content_pane_t4_ParamLimits

0xc2e2,	// (0x0008c19e) ncim_query_content_pane_t4

0xc2ff,	// (0x0008c1bb) ncim_query_content_pane_t5_ParamLimits

0xc2ff,	// (0x0008c1bb) ncim_query_content_pane_t5

0x2229,	// (0x000820e5) ncim_query_content_pane_t6_ParamLimits

0x2229,	// (0x000820e5) ncim_query_content_pane_t6

0xfc0e,	// (0x0008faca) ncim_query_content_pane_t_ParamLimits

0x2251,	// (0x0008210d) ncim_query_list_pane_ParamLimits

0x2263,	// (0x0008211f) ncim_query_popup_pane_ParamLimits

0x2277,	// (0x00082133) wait_bar_pane_cp04

0x021b,	// (0x000800d7) input_focus_pane_cp011

0x227f,	// (0x0008213b) ncim_query_popup_pane_t1

0x228d,	// (0x00082149) ncim_list_query_list_pane_ParamLimits

0x228d,	// (0x00082149) ncim_list_query_list_pane

0x021b,	// (0x000800d7) bg_button_pane_cp027

0x22a0,	// (0x0008215c) ncim_query_button_pane_g1

0x021b,	// (0x000800d7) list_highlight_pane_cp012

0x22aa,	// (0x00082166) ncim_list_query_list_pane_g1

0x22b2,	// (0x0008216e) ncim_list_query_list_pane_t1

0xa89f,	// (0x0008a75b) cam4_indicators_pane_g3_ParamLimits

0xa89f,	// (0x0008a75b) cam4_indicators_pane_g3

0xa99d,	// (0x0008a859) vid4_indicators_pane_g5_ParamLimits

0xa99d,	// (0x0008a859) vid4_indicators_pane_g5

0xb9a8,	// (0x0008b864) vid4_progress_pane_g5_ParamLimits

0xb9a8,	// (0x0008b864) vid4_progress_pane_g5

0xc1c0,	// (0x0008c07c) main_ncimui_pane_g1

0xc21a,	// (0x0008c0d6) ncimui_group_query_pane_ParamLimits

0xc21a,	// (0x0008c0d6) ncimui_group_query_pane

0xc264,	// (0x0008c120) ncimui_list_pane_ParamLimits

0xc264,	// (0x0008c120) ncimui_list_pane

0xc285,	// (0x0008c141) ncimui_text_pane_ParamLimits

0xc285,	// (0x0008c141) ncimui_text_pane

0xc31c,	// (0x0008c1d8) ncimui_text_pane_t1_ParamLimits

0xc31c,	// (0x0008c1d8) ncimui_text_pane_t1

0x22c0,	// (0x0008217c) ncimui_list_single_graphic_pane_ParamLimits

0x22c0,	// (0x0008217c) ncimui_list_single_graphic_pane

0xc33b,	// (0x0008c1f7) ncimui_query_pane_ParamLimits

0xc33b,	// (0x0008c1f7) ncimui_query_pane

0x021b,	// (0x000800d7) list_highlight_pane_cp013

0x22d0,	// (0x0008218c) ncim_list_query_list_pane_t1_copy1

0x22aa,	// (0x00082166) ncim_list_single_graphic_pane_g1

0x22de,	// (0x0008219a) ncim_query_button_pane_cp01

0x22ea,	// (0x000821a6) ncim_query_entry_pane_ParamLimits

0x22ea,	// (0x000821a6) ncim_query_entry_pane

0x22fd,	// (0x000821b9) ncimui_query_pane_g1

0x2309,	// (0x000821c5) ncimui_query_pane_t1_ParamLimits

0x2309,	// (0x000821c5) ncimui_query_pane_t1

0x0294,	// (0x00080150) input_focus_pane_cp012

0x2322,	// (0x000821de) ncim_query_entry_pane_t1

0x4083,	// (0x00083f3f) main_im_pane_ParamLimits

0x0294,	// (0x00080150) main_mobtv_pane_ParamLimits

0x0294,	// (0x00080150) main_mobtv_pane

0xc03a,	// (0x0008bef6) main_cset6_slider_pane_g18_ParamLimits

0xc03a,	// (0x0008bef6) main_cset6_slider_pane_g18

0xc046,	// (0x0008bf02) main_cset6_slider_pane_g19_ParamLimits

0xc046,	// (0x0008bf02) main_cset6_slider_pane_g19

0x15a2,	// (0x0008145e) bg_main_mobtv_pane_ParamLimits

0x15a2,	// (0x0008145e) bg_main_mobtv_pane

0xc34e,	// (0x0008c20a) main_mobtv_info_pane

0xc359,	// (0x0008c215) main_mobtv_loading_pane_ParamLimits

0xc359,	// (0x0008c215) main_mobtv_loading_pane

0x2334,	// (0x000821f0) main_mobtv_pg_channel_list_pane

0x233e,	// (0x000821fa) main_mobtv_pg_hdr_pane

0xc366,	// (0x0008c222) main_mobtv_programe_curr_pane_ParamLimits

0xc366,	// (0x0008c222) main_mobtv_programe_curr_pane

0xc373,	// (0x0008c22f) main_mobtv_programe_next_pane_ParamLimits

0xc373,	// (0x0008c22f) main_mobtv_programe_next_pane

0x2347,	// (0x00082203) popup_mobtv_noti_window

0x0af8,	// (0x000809b4) main_tv_pg_hdr_pane_g1

0x2351,	// (0x0008220d) main_tv_pg_hdr_pane_g2

0x2359,	// (0x00082215) main_tv_pg_hdr_pane_g3

0x2361,	// (0x0008221d) main_tv_pg_hdr_pane_g4

0x2369,	// (0x00082225) main_tv_pg_hdr_pane_g5

0x2373,	// (0x0008222f) main_tv_pg_hdr_pane_g6

0x237d,	// (0x00082239) main_tv_pg_hdr_pane_g7

0x2387,	// (0x00082243) main_tv_pg_hdr_pane_g8

0x2391,	// (0x0008224d) main_tv_pg_hdr_pane_g9

0x239b,	// (0x00082257) main_tv_pg_hdr_pane_g10

0x23a5,	// (0x00082261) main_tv_pg_hdr_pane_g11

0x000a,

0xfc1b,	// (0x0008fad7) main_tv_pg_hdr_pane_g

0x23af,	// (0x0008226b) main_tv_pg_hdr_pane_t1

0x23bd,	// (0x00082279) main_tv_pg_hdr_pane_t2

0x23cb,	// (0x00082287) main_tv_pg_hdr_pane_t3

0x23db,	// (0x00082297) main_tv_pg_hdr_pane_t4

0x23eb,	// (0x000822a7) main_tv_pg_hdr_pane_t5

0x0004,

0xfc32,	// (0x0008faee) main_tv_pg_hdr_pane_t

0x23fb,	// (0x000822b7) single_mobtv_pg_channel_pane_ParamLimits

0x23fb,	// (0x000822b7) single_mobtv_pg_channel_pane

0x240d,	// (0x000822c9) single_mobtv_pg_channel_table_pane

0x2416,	// (0x000822d2) single_mobtv_pg_channel_thumb_pane

0x241f,	// (0x000822db) single_tv_pg_channel_pane_g1

0x2428,	// (0x000822e4) single_tv_pg_channel_pane_g2

0x0001,

0xfc3d,	// (0x0008faf9) single_tv_pg_channel_pane_g

0x0d28,	// (0x00080be4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0d28,	// (0x00080be4) bg_single_mobtv_pg_channel_thumb_pane

0x2431,	// (0x000822ed) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2431,	// (0x000822ed) single_mobtv_pg_channel_thumb_pane_g1

0x243f,	// (0x000822fb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x243f,	// (0x000822fb) single_mobtv_pg_channel_thumb_pane_g2

0x244b,	// (0x00082307) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x244b,	// (0x00082307) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc42,	// (0x0008fafe) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc42,	// (0x0008fafe) single_mobtv_pg_channel_thumb_pane_g

0x2457,	// (0x00082313) single_mobtv_pg_channel_thumb_pane_t1

0x2465,	// (0x00082321) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc49,	// (0x0008fb05) single_mobtv_pg_channel_thumb_pane_t

0x0af8,	// (0x000809b4) bg_single_mobtv_pg_channel_table_pane_g1

0x0af8,	// (0x000809b4) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0008f5bc) bg_single_mobtv_pg_channel_table_pane_g

0x2473,	// (0x0008232f) single_mobtv_pg_channel_table_pane_t1

0x2481,	// (0x0008233d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4e,	// (0x0008fb0a) single_mobtv_pg_channel_table_pane_t

0xc388,	// (0x0008c244) main_mobtv_info_pane_g1_ParamLimits

0xc388,	// (0x0008c244) main_mobtv_info_pane_g1

0xc3a4,	// (0x0008c260) main_mobtv_info_pane_t1_ParamLimits

0xc3a4,	// (0x0008c260) main_mobtv_info_pane_t1

0xc41c,	// (0x0008c2d8) main_mobtv_info_pane_t2_ParamLimits

0xc41c,	// (0x0008c2d8) main_mobtv_info_pane_t2

0x0002,

0xfc58,	// (0x0008fb14) main_mobtv_info_pane_t_ParamLimits

0xfc58,	// (0x0008fb14) main_mobtv_info_pane_t

0xc4af,	// (0x0008c36b) wait_bar_pane_cp05

0xc4c1,	// (0x0008c37d) main_mobtv_loading_pane_g1_ParamLimits

0xc4c1,	// (0x0008c37d) main_mobtv_loading_pane_g1

0xc4cd,	// (0x0008c389) main_mobtv_loading_pane_g2_ParamLimits

0xc4cd,	// (0x0008c389) main_mobtv_loading_pane_g2

0xc4d9,	// (0x0008c395) main_mobtv_loading_pane_g3_ParamLimits

0xc4d9,	// (0x0008c395) main_mobtv_loading_pane_g3

0x0002,

0xfc5f,	// (0x0008fb1b) main_mobtv_loading_pane_g_ParamLimits

0xfc5f,	// (0x0008fb1b) main_mobtv_loading_pane_g

0x248f,	// (0x0008234b) main_mobtv_loading_pane_t1_ParamLimits

0x248f,	// (0x0008234b) main_mobtv_loading_pane_t1

0x24a7,	// (0x00082363) main_mobtv_loading_pane_t2_ParamLimits

0x24a7,	// (0x00082363) main_mobtv_loading_pane_t2

0x0001,

0xfc66,	// (0x0008fb22) main_mobtv_loading_pane_t_ParamLimits

0xfc66,	// (0x0008fb22) main_mobtv_loading_pane_t

0xc4e7,	// (0x0008c3a3) wait_bar_pane_cp06_ParamLimits

0xc4e7,	// (0x0008c3a3) wait_bar_pane_cp06

0x24cb,	// (0x00082387) main_mobtv_programe_curr_pane_t1

0x24d9,	// (0x00082395) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc6b,	// (0x0008fb27) main_mobtv_programe_curr_pane_t

0x24e7,	// (0x000823a3) main_mobtv_programe_next_pane_t1

0x24f5,	// (0x000823b1) main_mobtv_programe_next_pane_t2

0x2503,	// (0x000823bf) main_mobtv_programe_next_pane_t3

0x0002,

0xfc70,	// (0x0008fb2c) main_mobtv_programe_next_pane_t

0x021b,	// (0x000800d7) bg_popup_mobtv_noti_window_pane

0x2511,	// (0x000823cd) popup_mobtv_noti_window_g1

0x2519,	// (0x000823d5) popup_mobtv_noti_window_t1

0x2527,	// (0x000823e3) popup_mobtv_noti_window_t2

0x0001,

0xfc77,	// (0x0008fb33) popup_mobtv_noti_window_t

0x0af8,	// (0x000809b4) bg_popup_mobtv_noti_window_pane_g1

0x021b,	// (0x000800d7) sc_clock_pane

0x021b,	// (0x000800d7) main_fs_bigclock_pane

0xbb92,	// (0x0008ba4e) blid2_tripm_pane_t4_ParamLimits

0xbb92,	// (0x0008ba4e) blid2_tripm_pane_t4

0xc4f3,	// (0x0008c3af) sc_clock_pane_g1_ParamLimits

0xc4f3,	// (0x0008c3af) sc_clock_pane_g1

0xc501,	// (0x0008c3bd) sc_clock_pane_t1_ParamLimits

0xc501,	// (0x0008c3bd) sc_clock_pane_t1

0xc516,	// (0x0008c3d2) sc_clock_pane_t2_ParamLimits

0xc516,	// (0x0008c3d2) sc_clock_pane_t2

0xc528,	// (0x0008c3e4) sc_clock_pane_t3_ParamLimits

0xc528,	// (0x0008c3e4) sc_clock_pane_t3

0x0004,

0xfc7c,	// (0x0008fb38) sc_clock_pane_t_ParamLimits

0xfc7c,	// (0x0008fb38) sc_clock_pane_t

0xd1be,	// (0x0008d07a) main_fs_bigclock_indicator_pane_ParamLimits

0xd1be,	// (0x0008d07a) main_fs_bigclock_indicator_pane

0xc5af,	// (0x0008c46b) main_fs_bigclock_pane_g1_ParamLimits

0xc5af,	// (0x0008c46b) main_fs_bigclock_pane_g1

0xd1ca,	// (0x0008d086) main_fs_bigclock_pane_t1_ParamLimits

0xd1ca,	// (0x0008d086) main_fs_bigclock_pane_t1

0xd1dc,	// (0x0008d098) main_fs_bigclock_pane_t2_ParamLimits

0xd1dc,	// (0x0008d098) main_fs_bigclock_pane_t2

0xd1f0,	// (0x0008d0ac) main_fs_bigclock_pane_t3_ParamLimits

0xd1f0,	// (0x0008d0ac) main_fs_bigclock_pane_t3

0x0002,

0xfe7b,	// (0x0008fd37) main_fs_bigclock_pane_t_ParamLimits

0xfe7b,	// (0x0008fd37) main_fs_bigclock_pane_t

0x31b7,	// (0x00083073) main_fs_bigclock_indicator_pane_g1

0x21f7,	// (0x000820b3) ncim_query_content_pane_g2_ParamLimits

0x21f7,	// (0x000820b3) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0008fac5) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0008fac5) ncim_query_content_pane_g

0xc53a,	// (0x0008c3f6) sc_clock_pane_t4_ParamLimits

0xc53a,	// (0x0008c3f6) sc_clock_pane_t4

0x0294,	// (0x00080150) main_radioblah_pane

0x14eb,	// (0x000813a7) cell_call4_button_pane_t1_copy1_ParamLimits

0x14eb,	// (0x000813a7) cell_call4_button_pane_t1_copy1

0xc1ca,	// (0x0008c086) main_ncimui_pane_t1_ParamLimits

0xc1ca,	// (0x0008c086) main_ncimui_pane_t1

0xc1e4,	// (0x0008c0a0) main_ncimui_pane_t2_ParamLimits

0xc1e4,	// (0x0008c0a0) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0008fabe) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0008fabe) main_ncimui_pane_t

0x265f,	// (0x0008251b) main_radioblah_anim_pane_ParamLimits

0x265f,	// (0x0008251b) main_radioblah_anim_pane

0x2670,	// (0x0008252c) main_radioblah_info_pane_ParamLimits

0x2670,	// (0x0008252c) main_radioblah_info_pane

0x2684,	// (0x00082540) main_radioblah_pane_t1_ParamLimits

0x2684,	// (0x00082540) main_radioblah_pane_t1

0x26a0,	// (0x0008255c) main_radioblah_pane_t2_ParamLimits

0x26a0,	// (0x0008255c) main_radioblah_pane_t2

0x0003,

0xfc9d,	// (0x0008fb59) main_radioblah_pane_t_ParamLimits

0xfc9d,	// (0x0008fb59) main_radioblah_pane_t

0xc603,	// (0x0008c4bf) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc603,	// (0x0008c4bf) main_radioblah_rocker_ctrl_pane

0x26e8,	// (0x000825a4) main_radioblah_info_pane_t1_ParamLimits

0x26e8,	// (0x000825a4) main_radioblah_info_pane_t1

0xc64c,	// (0x0008c508) main_radioblah_info_pane_t2_ParamLimits

0xc64c,	// (0x0008c508) main_radioblah_info_pane_t2

0x0003,

0xfca6,	// (0x0008fb62) main_radioblah_info_pane_t_ParamLimits

0xfca6,	// (0x0008fb62) main_radioblah_info_pane_t

0x0af8,	// (0x000809b4) main_radioblah_rocker_ctrl_pane_g1

0xc6fc,	// (0x0008c5b8) main_radioblah_rocker_ctrl_pane_g2

0xc704,	// (0x0008c5c0) main_radioblah_rocker_ctrl_pane_g3

0xc70c,	// (0x0008c5c8) main_radioblah_rocker_ctrl_pane_g4

0xc714,	// (0x0008c5d0) main_radioblah_rocker_ctrl_pane_g5

0xc71c,	// (0x0008c5d8) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcaf,	// (0x0008fb6b) main_radioblah_rocker_ctrl_pane_g

0xc18e,	// (0x0008c04a) main_cset_text2_pane_t1_copy1_ParamLimits

0xa7be,	// (0x0008a67a) cam4_image_uncrop_qvga_pane

0xa915,	// (0x0008a7d1) vid4_image_uncrop_qcif_pane

0xbd24,	// (0x0008bbe0) cam6_image_uncrop_qvga_pane_ParamLimits

0xbd24,	// (0x0008bbe0) cam6_image_uncrop_qvga_pane

0x1e29,	// (0x00081ce5) vid6_image_uncrop_qcif_pane_ParamLimits

0x1e29,	// (0x00081ce5) vid6_image_uncrop_qcif_pane

0x021b,	// (0x000800d7) bg_popup_preview_window_pane_cp03

0x21a9,	// (0x00082065) list_cset_text2_pane

0x21b1,	// (0x0008206d) main_cset6_text2_pane_g1

0x21b9,	// (0x00082075) main_cset6_text2_pane_t1

0xc724,	// (0x0008c5e0) list_cset_text2_pane_t1_ParamLimits

0xc724,	// (0x0008c5e0) list_cset_text2_pane_t1

0x0294,	// (0x00080150) main_radioblah_pane_ParamLimits

0xc49b,	// (0x0008c357) main_mobtv_info_pane_t3_ParamLimits

0xc49b,	// (0x0008c357) main_mobtv_info_pane_t3

0xc5f1,	// (0x0008c4ad) main_radioblah_pane_g1

0xc61c,	// (0x0008c4d8) main_radioblah_info_pane_g1

0xc6a1,	// (0x0008c55d) main_radioblah_info_pane_t3_ParamLimits

0xc6a1,	// (0x0008c55d) main_radioblah_info_pane_t3

0x755d,	// (0x00087419) highlight_cell_cale_month_pane_ParamLimits

0x755d,	// (0x00087419) highlight_cell_cale_month_pane

0x021b,	// (0x000800d7) main_phob_fisheye_pane

0x0e7e,	// (0x00080d3a) scroll_pane_cp0031_ParamLimits

0x0e7e,	// (0x00080d3a) scroll_pane_cp0031

0x1f3b,	// (0x00081df7) wait_bar_pane_cp08_ParamLimits

0xbf36,	// (0x0008bdf2) cset_list_set_pane_copy1_ParamLimits

0x273c,	// (0x000825f8) highlight_cell_cale_month_pane_g1

0xc73d,	// (0x0008c5f9) highlight_cell_cale_month_pane_t1

0x1b6f,	// (0x00081a2b) list_gen_pane_cp01

0x16fd,	// (0x000815b9) scroll_pane_01

0xc74b,	// (0x0008c607) list_single_double_fisheye_pane

0x2744,	// (0x00082600) list_double_fisheye_pane_g1_ParamLimits

0x2744,	// (0x00082600) list_double_fisheye_pane_g1

0x2750,	// (0x0008260c) list_double_fisheye_pane_g2_ParamLimits

0x2750,	// (0x0008260c) list_double_fisheye_pane_g2

0xc754,	// (0x0008c610) list_double_fisheye_pane_g3_ParamLimits

0xc754,	// (0x0008c610) list_double_fisheye_pane_g3

0x0004,

0xfcbc,	// (0x0008fb78) list_double_fisheye_pane_g_ParamLimits

0xfcbc,	// (0x0008fb78) list_double_fisheye_pane_g

0xc760,	// (0x0008c61c) list_double_fisheye_pane_t1_ParamLimits

0xc760,	// (0x0008c61c) list_double_fisheye_pane_t1

0xc77b,	// (0x0008c637) list_double_fisheye_pane_t2_ParamLimits

0xc77b,	// (0x0008c637) list_double_fisheye_pane_t2

0x0001,

0xfcc7,	// (0x0008fb83) list_double_fisheye_pane_t_ParamLimits

0xfcc7,	// (0x0008fb83) list_double_fisheye_pane_t

0x021b,	// (0x000800d7) main_call5_pane

0xc560,	// (0x0008c41c) sc_swipe_pane_ParamLimits

0xc560,	// (0x0008c41c) sc_swipe_pane

0xc7a9,	// (0x0008c665) call5_image_pane_ParamLimits

0xc7a9,	// (0x0008c665) call5_image_pane

0xc7bb,	// (0x0008c677) call5_swipe_1_pane_ParamLimits

0xc7bb,	// (0x0008c677) call5_swipe_1_pane

0xc7c7,	// (0x0008c683) call5_swipe_2_pane_ParamLimits

0xc7c7,	// (0x0008c683) call5_swipe_2_pane

0xc7e3,	// (0x0008c69f) popup_call5_audio_first_window_ParamLimits

0xc7e3,	// (0x0008c69f) popup_call5_audio_first_window

0x0d28,	// (0x00080be4) call5_swipe_1_pane_g1_ParamLimits

0x0d28,	// (0x00080be4) call5_swipe_1_pane_g1

0x2781,	// (0x0008263d) call5_swipe_1_pane_g2_ParamLimits

0x2781,	// (0x0008263d) call5_swipe_1_pane_g2

0x0001,

0xfccc,	// (0x0008fb88) call5_swipe_1_pane_g_ParamLimits

0xfccc,	// (0x0008fb88) call5_swipe_1_pane_g

0x278d,	// (0x00082649) call5_swipe_1_pane_t1_ParamLimits

0x278d,	// (0x00082649) call5_swipe_1_pane_t1

0x0d28,	// (0x00080be4) call5_swipe_2_pane_g1_ParamLimits

0x0d28,	// (0x00080be4) call5_swipe_2_pane_g1

0x27a2,	// (0x0008265e) call5_swipe_2_pane_g2_ParamLimits

0x27a2,	// (0x0008265e) call5_swipe_2_pane_g2

0x0001,

0xfcd1,	// (0x0008fb8d) call5_swipe_2_pane_g_ParamLimits

0xfcd1,	// (0x0008fb8d) call5_swipe_2_pane_g

0x27ae,	// (0x0008266a) call5_swipe_2_pane_t1_ParamLimits

0x27ae,	// (0x0008266a) call5_swipe_2_pane_t1

0x27c3,	// (0x0008267f) sc_swipe_pane_g1_ParamLimits

0x27c3,	// (0x0008267f) sc_swipe_pane_g1

0x27d0,	// (0x0008268c) sc_swipe_pane_g2_ParamLimits

0x27d0,	// (0x0008268c) sc_swipe_pane_g2

0x0001,

0xfcd6,	// (0x0008fb92) sc_swipe_pane_g_ParamLimits

0xfcd6,	// (0x0008fb92) sc_swipe_pane_g

0x27dc,	// (0x00082698) sc_swipe_pane_t1_ParamLimits

0x27dc,	// (0x00082698) sc_swipe_pane_t1

0x021b,	// (0x000800d7) main_cmail_launcher_pane

0xc7f3,	// (0x0008c6af) aid_size_cell_cmail_l_ParamLimits

0xc7f3,	// (0x0008c6af) aid_size_cell_cmail_l

0xc803,	// (0x0008c6bf) grid_cmail_l_pane_ParamLimits

0xc803,	// (0x0008c6bf) grid_cmail_l_pane

0xc813,	// (0x0008c6cf) cell_cmail_l_pane_ParamLimits

0xc813,	// (0x0008c6cf) cell_cmail_l_pane

0xc829,	// (0x0008c6e5) cell_cmail_l_pane_g1_ParamLimits

0xc829,	// (0x0008c6e5) cell_cmail_l_pane_g1

0xc835,	// (0x0008c6f1) cell_cmail_l_pane_t1_ParamLimits

0xc835,	// (0x0008c6f1) cell_cmail_l_pane_t1

0x27f1,	// (0x000826ad) cell_cmail_l_pane_t2_ParamLimits

0x27f1,	// (0x000826ad) cell_cmail_l_pane_t2

0x0001,

0xfcdb,	// (0x0008fb97) cell_cmail_l_pane_t_ParamLimits

0xfcdb,	// (0x0008fb97) cell_cmail_l_pane_t

0x0294,	// (0x00080150) grid_highlight_pane_cp018_ParamLimits

0x0294,	// (0x00080150) grid_highlight_pane_cp018

0x5896,	// (0x00085752) main2_pane_ParamLimits

0x5896,	// (0x00085752) main2_pane

0x412e,	// (0x00083fea) popup_sp_fs_action_menu_bg_pane_g1

0x4136,	// (0x00083ff2) popup_sp_fs_action_menu_bg_pane_g2

0x413e,	// (0x00083ffa) popup_sp_fs_action_menu_bg_pane_g3

0x4146,	// (0x00084002) popup_sp_fs_action_menu_bg_pane_g4

0x414e,	// (0x0008400a) popup_sp_fs_action_menu_bg_pane_g5

0x4156,	// (0x00084012) popup_sp_fs_action_menu_bg_pane_g6

0x415e,	// (0x0008401a) popup_sp_fs_action_menu_bg_pane_g7

0x4166,	// (0x00084022) popup_sp_fs_action_menu_bg_pane_g8

0x416e,	// (0x0008402a) popup_sp_fs_action_menu_bg_pane_g9

0x4176,	// (0x00084032) popup_sp_fs_action_menu_bg_pane_g10

0x4176,	// (0x00084032) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0008f068) popup_sp_fs_action_menu_bg_pane_g

0x048e,	// (0x0008034a) list_medium_line_x2_t3_g3_g1_ParamLimits

0x048e,	// (0x0008034a) list_medium_line_x2_t3_g3_g1

0x049a,	// (0x00080356) list_medium_line_x2_t3_g3_g2_ParamLimits

0x049a,	// (0x00080356) list_medium_line_x2_t3_g3_g2

0x04a6,	// (0x00080362) list_medium_line_x2_t3_g3_g3_ParamLimits

0x04a6,	// (0x00080362) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0008f118) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0008f118) list_medium_line_x2_t3_g3_g

0x04b2,	// (0x0008036e) list_medium_line_x2_t3_g3_t1_ParamLimits

0x04b2,	// (0x0008036e) list_medium_line_x2_t3_g3_t1

0x676c,	// (0x00086628) list_medium_line_x2_t3_g3_t2_ParamLimits

0x676c,	// (0x00086628) list_medium_line_x2_t3_g3_t2

0x04c7,	// (0x00080383) list_medium_line_x2_t3_g3_t3_ParamLimits

0x04c7,	// (0x00080383) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0008f11f) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0008f11f) list_medium_line_x2_t3_g3_t

0x048e,	// (0x0008034a) list_medium_line_x2_t3_g2_g1_ParamLimits

0x048e,	// (0x0008034a) list_medium_line_x2_t3_g2_g1

0x04a6,	// (0x00080362) list_medium_line_x2_t3_g2_g2_ParamLimits

0x04a6,	// (0x00080362) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0008f126) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0008f126) list_medium_line_x2_t3_g2_g

0x04dc,	// (0x00080398) list_medium_line_x2_t3_g2_t1_ParamLimits

0x04dc,	// (0x00080398) list_medium_line_x2_t3_g2_t1

0x04f2,	// (0x000803ae) list_medium_line_x2_t3_g2_t2_ParamLimits

0x04f2,	// (0x000803ae) list_medium_line_x2_t3_g2_t2

0x0504,	// (0x000803c0) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0504,	// (0x000803c0) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0008f12b) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0008f12b) list_medium_line_x2_t3_g2_t

0x048e,	// (0x0008034a) list_medium_line_x2_t4_g4_g1_ParamLimits

0x048e,	// (0x0008034a) list_medium_line_x2_t4_g4_g1

0x0522,	// (0x000803de) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0522,	// (0x000803de) list_medium_line_x2_t4_g4_g2

0x049a,	// (0x00080356) list_medium_line_x2_t4_g4_g3_ParamLimits

0x049a,	// (0x00080356) list_medium_line_x2_t4_g4_g3

0x052e,	// (0x000803ea) list_medium_line_x2_t4_g4_g4_ParamLimits

0x052e,	// (0x000803ea) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0008f132) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0008f132) list_medium_line_x2_t4_g4_g

0x677e,	// (0x0008663a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x677e,	// (0x0008663a) list_medium_line_x2_t4_g4_t1

0x6798,	// (0x00086654) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6798,	// (0x00086654) list_medium_line_x2_t4_g4_t2

0x67ae,	// (0x0008666a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x67ae,	// (0x0008666a) list_medium_line_x2_t4_g4_t3

0x053a,	// (0x000803f6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x053a,	// (0x000803f6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0008f13b) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0008f13b) list_medium_line_x2_t4_g4_t

0x048e,	// (0x0008034a) list_medium_line_x2_t2_g4_g1_ParamLimits

0x048e,	// (0x0008034a) list_medium_line_x2_t2_g4_g1

0x0522,	// (0x000803de) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0522,	// (0x000803de) list_medium_line_x2_t2_g4_g2

0x049a,	// (0x00080356) list_medium_line_x2_t2_g4_g3_ParamLimits

0x049a,	// (0x00080356) list_medium_line_x2_t2_g4_g3

0x04a6,	// (0x00080362) list_medium_line_x2_t2_g4_g4_ParamLimits

0x04a6,	// (0x00080362) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0008f1a2) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0008f1a2) list_medium_line_x2_t2_g4_g

0x054c,	// (0x00080408) list_medium_line_x2_t2_g4_t1_ParamLimits

0x054c,	// (0x00080408) list_medium_line_x2_t2_g4_t1

0x04c7,	// (0x00080383) list_medium_line_x2_t2_g4_t2_ParamLimits

0x04c7,	// (0x00080383) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0008f1ab) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0008f1ab) list_medium_line_x2_t2_g4_t

0x048e,	// (0x0008034a) list_medium_line_x2_t2_g3_g1_ParamLimits

0x048e,	// (0x0008034a) list_medium_line_x2_t2_g3_g1

0x049a,	// (0x00080356) list_medium_line_x2_t2_g3_g2_ParamLimits

0x049a,	// (0x00080356) list_medium_line_x2_t2_g3_g2

0x04a6,	// (0x00080362) list_medium_line_x2_t2_g3_g3_ParamLimits

0x04a6,	// (0x00080362) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0008f118) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0008f118) list_medium_line_x2_t2_g3_g

0x0561,	// (0x0008041d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0561,	// (0x0008041d) list_medium_line_x2_t2_g3_t1

0x04c7,	// (0x00080383) list_medium_line_x2_t2_g3_t2_ParamLimits

0x04c7,	// (0x00080383) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0008f1b0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0008f1b0) list_medium_line_x2_t2_g3_t

0x777b,	// (0x00087637) main_sp_fs_list_pane_ParamLimits

0x777b,	// (0x00087637) main_sp_fs_list_pane

0x7787,	// (0x00087643) sp_fs_scroll_pane_ParamLimits

0x7787,	// (0x00087643) sp_fs_scroll_pane

0x7793,	// (0x0008764f) list_medium_line_x2_t3_t1

0x77a3,	// (0x0008765f) list_medium_line_x2_t3_t2

0x05a4,	// (0x00080460) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0008f1fb) list_medium_line_x2_t3_t

0x77b1,	// (0x0008766d) list_medium_line_x3_t4_t1

0x77c1,	// (0x0008767d) list_medium_line_x3_t4_t2

0x05b2,	// (0x0008046e) list_medium_line_x3_t4_t3

0x05a4,	// (0x00080460) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0008f202) list_medium_line_x3_t4_t

0x77cf,	// (0x0008768b) list_medium_line_x4_t5_t1

0x77df,	// (0x0008769b) list_medium_line_x4_t5_t2

0x05b2,	// (0x0008046e) list_medium_line_x4_t5_t3

0x05c0,	// (0x0008047c) list_medium_line_x4_t5_t4

0x05a4,	// (0x00080460) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0008f20b) list_medium_line_x4_t5_t

0x048e,	// (0x0008034a) list_medium_line_t4_g4_g1_ParamLimits

0x048e,	// (0x0008034a) list_medium_line_t4_g4_g1

0x052e,	// (0x000803ea) list_medium_line_t4_g4_g2_ParamLimits

0x052e,	// (0x000803ea) list_medium_line_t4_g4_g2

0x05ce,	// (0x0008048a) list_medium_line_t4_g4_g3_ParamLimits

0x05ce,	// (0x0008048a) list_medium_line_t4_g4_g3

0x04a6,	// (0x00080362) list_medium_line_t4_g4_g4_ParamLimits

0x04a6,	// (0x00080362) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0008f216) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0008f216) list_medium_line_t4_g4_g

0x05da,	// (0x00080496) list_medium_line_t4_g4_t1_ParamLimits

0x05da,	// (0x00080496) list_medium_line_t4_g4_t1

0x05ef,	// (0x000804ab) list_medium_line_t4_g4_t2_ParamLimits

0x05ef,	// (0x000804ab) list_medium_line_t4_g4_t2

0x0605,	// (0x000804c1) list_medium_line_t4_g4_t3_ParamLimits

0x0605,	// (0x000804c1) list_medium_line_t4_g4_t3

0x04c7,	// (0x00080383) list_medium_line_t4_g4_t4_ParamLimits

0x04c7,	// (0x00080383) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0008f21f) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0008f21f) list_medium_line_t4_g4_t

0x7900,	// (0x000877bc) chi_dic_find_pane_g1

0x896a,	// (0x00088826) main_tport_pane

0x1824,	// (0x000816e0) list_medium_line_plain_t1

0x183a,	// (0x000816f6) list_medium_line_t2_g2_g1_ParamLimits

0x183a,	// (0x000816f6) list_medium_line_t2_g2_g1

0x1846,	// (0x00081702) list_medium_line_t2_g2_g2_ParamLimits

0x1846,	// (0x00081702) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0008f8db) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0008f8db) list_medium_line_t2_g2_g

0xb391,	// (0x0008b24d) list_medium_line_t2_g2_t1_ParamLimits

0xb391,	// (0x0008b24d) list_medium_line_t2_g2_t1

0xb3a8,	// (0x0008b264) list_medium_line_t2_g2_t2_ParamLimits

0xb3a8,	// (0x0008b264) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0008f8e0) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0008f8e0) list_medium_line_t2_g2_t

0x1b78,	// (0x00081a34) aid_sp_fs_list_icon_a_sm

0x39dc,	// (0x00083898) aid_sp_fs_list_icon_d

0x1b80,	// (0x00081a3c) aid_sp_fs_text_primary

0x3dcd,	// (0x00083c89) aid_sp_fs_text_secondary

0x1b89,	// (0x00081a45) list_medium_line

0x1b89,	// (0x00081a45) list_medium_line_g2

0x1b89,	// (0x00081a45) list_medium_line_g3

0x1b89,	// (0x00081a45) list_medium_line_plain

0x1b89,	// (0x00081a45) list_medium_line_plain_t2

0x1b89,	// (0x00081a45) list_medium_line_plain_t3

0x1b89,	// (0x00081a45) list_medium_line_right_icon

0x1b89,	// (0x00081a45) list_medium_line_right_iconx2

0x1b89,	// (0x00081a45) list_medium_line_t2

0x1b89,	// (0x00081a45) list_medium_line_t2_g2

0x1b89,	// (0x00081a45) list_medium_line_t2_g3

0x1b89,	// (0x00081a45) list_medium_line_t2_right_icon

0x1b89,	// (0x00081a45) list_medium_line_t2_right_iconx2

0x1b89,	// (0x00081a45) list_medium_line_t3

0x1b89,	// (0x00081a45) list_medium_line_t3_g2

0x1b89,	// (0x00081a45) list_medium_line_t3_g3

0x1b89,	// (0x00081a45) list_medium_line_t3_right_iconx2

0x1b92,	// (0x00081a4e) list_medium_line_t4_g4

0x1b9b,	// (0x00081a57) list_medium_line_x2

0x1b9b,	// (0x00081a57) list_medium_line_x2_t2_g2

0x1b9b,	// (0x00081a57) list_medium_line_x2_t2_g3

0x1b9b,	// (0x00081a57) list_medium_line_x2_t2_g4

0x1b9b,	// (0x00081a57) list_medium_line_x2_t3

0x1b9b,	// (0x00081a57) list_medium_line_x2_t3_g2

0x1b9b,	// (0x00081a57) list_medium_line_x2_t3_g3

0x1b9b,	// (0x00081a57) list_medium_line_x2_t3_g4

0x1b9b,	// (0x00081a57) list_medium_line_x2_t4_g2

0x1b9b,	// (0x00081a57) list_medium_line_x2_t4_g4

0x1ba4,	// (0x00081a60) list_medium_line_x3

0x1ba4,	// (0x00081a60) list_medium_line_x3_t4

0x1ba4,	// (0x00081a60) list_medium_line_x3_t4_g4

0x1b92,	// (0x00081a4e) list_medium_line_x4_t4

0x1b92,	// (0x00081a4e) list_medium_line_x4_t4_g7

0x1b92,	// (0x00081a4e) list_medium_line_x4_t5

0x1bad,	// (0x00081a69) list_single_fs_dyc_pane_ParamLimits

0x1bad,	// (0x00081a69) list_single_fs_dyc_pane

0x048e,	// (0x0008034a) list_medium_line_x4_t4_g7_g1_ParamLimits

0x048e,	// (0x0008034a) list_medium_line_x4_t4_g7_g1

0x20d8,	// (0x00081f94) list_medium_line_x4_t4_g7_g2_ParamLimits

0x20d8,	// (0x00081f94) list_medium_line_x4_t4_g7_g2

0x20e4,	// (0x00081fa0) list_medium_line_x4_t4_g7_g3_ParamLimits

0x20e4,	// (0x00081fa0) list_medium_line_x4_t4_g7_g3

0x20f3,	// (0x00081faf) list_medium_line_x4_t4_g7_g4_ParamLimits

0x20f3,	// (0x00081faf) list_medium_line_x4_t4_g7_g4

0x20ff,	// (0x00081fbb) list_medium_line_x4_t4_g7_g5_ParamLimits

0x20ff,	// (0x00081fbb) list_medium_line_x4_t4_g7_g5

0x210e,	// (0x00081fca) list_medium_line_x4_t4_g7_g6_ParamLimits

0x210e,	// (0x00081fca) list_medium_line_x4_t4_g7_g6

0x211d,	// (0x00081fd9) list_medium_line_x4_t4_g7_g7_ParamLimits

0x211d,	// (0x00081fd9) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe8,	// (0x0008faa4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe8,	// (0x0008faa4) list_medium_line_x4_t4_g7_g

0x2129,	// (0x00081fe5) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2129,	// (0x00081fe5) list_medium_line_x4_t4_g7_t1

0x213e,	// (0x00081ffa) list_medium_line_x4_t4_g7_t2_ParamLimits

0x213e,	// (0x00081ffa) list_medium_line_x4_t4_g7_t2

0x2153,	// (0x0008200f) list_medium_line_x4_t4_g7_t3_ParamLimits

0x2153,	// (0x0008200f) list_medium_line_x4_t4_g7_t3

0x2168,	// (0x00082024) list_medium_line_x4_t4_g7_t4_ParamLimits

0x2168,	// (0x00082024) list_medium_line_x4_t4_g7_t4

0x217a,	// (0x00082036) list_medium_line_x4_t4_g7_t5_ParamLimits

0x217a,	// (0x00082036) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf7,	// (0x0008fab3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf7,	// (0x0008fab3) list_medium_line_x4_t4_g7_t

0x218c,	// (0x00082048) list_single_dyc_row_pane_ParamLimits

0x218c,	// (0x00082048) list_single_dyc_row_pane

0xc79d,	// (0x0008c659) call5_gesture_pane_ParamLimits

0xc79d,	// (0x0008c659) call5_gesture_pane

0xc7d3,	// (0x0008c68f) call5_windows_pane_ParamLimits

0xc7d3,	// (0x0008c68f) call5_windows_pane

0xc84b,	// (0x0008c707) call5_swipe_1_pane_cp_ParamLimits

0xc84b,	// (0x0008c707) call5_swipe_1_pane_cp

0xc857,	// (0x0008c713) call5_swipe_2_pane_cp_ParamLimits

0xc857,	// (0x0008c713) call5_swipe_2_pane_cp

0xdbc6,	// (0x0008da82) call5_image_pane_cp

0xc863,	// (0x0008c71f) popup_call5_audio_first_window_cp_ParamLimits

0xc863,	// (0x0008c71f) popup_call5_audio_first_window_cp

0x27c3,	// (0x0008267f) call5_swipe_1_pane_g1_cp_ParamLimits

0x27c3,	// (0x0008267f) call5_swipe_1_pane_g1_cp

0x2803,	// (0x000826bf) call5_swipe_1_pane_g2_cp

0x27dc,	// (0x00082698) call5_swipe_1_pane_t1_cp_ParamLimits

0x27dc,	// (0x00082698) call5_swipe_1_pane_t1_cp

0x27c3,	// (0x0008267f) call5_swipe_2_pane_g1_cp_ParamLimits

0x27c3,	// (0x0008267f) call5_swipe_2_pane_g1_cp

0x280b,	// (0x000826c7) call5_swipe_2_pane_g2_cp

0x2813,	// (0x000826cf) call5_swipe_2_pane_t1_cp_ParamLimits

0x2813,	// (0x000826cf) call5_swipe_2_pane_t1_cp

0x0294,	// (0x00080150) main_sp_fs_email_pane

0x2828,	// (0x000826e4) main_sp_fs_listscroll_pane_te

0x2831,	// (0x000826ed) popup_sp_fs_action_menu_pane_ParamLimits

0x2831,	// (0x000826ed) popup_sp_fs_action_menu_pane

0x0af8,	// (0x000809b4) bg_sp_fs_ctrlbar_pane_g1

0x2877,	// (0x00082733) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2880,	// (0x0008273c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2889,	// (0x00082745) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0af8,	// (0x000809b4) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce0,	// (0x0008fb9c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x08d7,	// (0x00080793) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x08d7,	// (0x00080793) bg_sp_fs_ctrlbar_ddmenu_pane

0x2892,	// (0x0008274e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2892,	// (0x0008274e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x289e,	// (0x0008275a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x289e,	// (0x0008275a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce9,	// (0x0008fba5) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce9,	// (0x0008fba5) main_sp_fs_ctrlbar_ddmenu_pane_g

0x28aa,	// (0x00082766) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x28aa,	// (0x00082766) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x28c4,	// (0x00082780) list_medium_line_t2_right_icon_g1

0xc871,	// (0x0008c72d) list_medium_line_t2_right_icon_t1

0xc881,	// (0x0008c73d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcee,	// (0x0008fbaa) list_medium_line_t2_right_icon_t

0xefd1,	// (0x0008ee8d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xefd1,	// (0x0008ee8d) bg_sp_fs_ctrlbar_pane

0xc8e6,	// (0x0008c7a2) main_sp_fs_ctrlbar_button_pane_cp01

0xc8ee,	// (0x0008c7aa) main_sp_fs_ctrlbar_ddmenu_pane

0x2906,	// (0x000827c2) main_sp_fs_ctrlbar_pane_g1

0x2912,	// (0x000827ce) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf3,	// (0x0008fbaf) main_sp_fs_ctrlbar_pane_g

0x291e,	// (0x000827da) main_sp_fs_ctrlbar_pane_t1

0xc8f8,	// (0x0008c7b4) main_sp_fs_ctrlbar_pane

0xc914,	// (0x0008c7d0) main_sp_fs_listscroll_pane_te_cp01

0xc925,	// (0x0008c7e1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc925,	// (0x0008c7e1) popup_sp_fs_action_menu_pane_cp01

0x0294,	// (0x00080150) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0294,	// (0x00080150) bg_sp_fs_highlight_list_pane_cp01

0x2933,	// (0x000827ef) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2933,	// (0x000827ef) sp_fs_action_menu_list_gene_pane_g1

0x2942,	// (0x000827fe) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2942,	// (0x000827fe) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf8,	// (0x0008fbb4) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf8,	// (0x0008fbb4) sp_fs_action_menu_list_gene_pane_g

0x294f,	// (0x0008280b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x294f,	// (0x0008280b) sp_fs_action_menu_list_gene_pane_t1

0x2967,	// (0x00082823) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2967,	// (0x00082823) sp_fs_action_menu_list_gene_pane

0x298a,	// (0x00082846) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x298a,	// (0x00082846) popup_sp_fs_action_menu_bg_pane

0x2998,	// (0x00082854) sp_fs_action_menu_list_pane_ParamLimits

0x2998,	// (0x00082854) sp_fs_action_menu_list_pane

0x29bc,	// (0x00082878) sp_fs_scroll_pane_cp01_ParamLimits

0x29bc,	// (0x00082878) sp_fs_scroll_pane_cp01

0xc93f,	// (0x0008c7fb) list_medium_line_plain_t2_t1

0xc94f,	// (0x0008c80b) list_medium_line_plain_t2_t2

0x0001,

0xfcfd,	// (0x0008fbb9) list_medium_line_plain_t2_t

0xc95d,	// (0x0008c819) list_medium_line_plain_t3_t1

0xc96d,	// (0x0008c829) list_medium_line_plain_t3_t2

0xc97b,	// (0x0008c837) list_medium_line_plain_t3_t3

0x0002,

0xfd02,	// (0x0008fbbe) list_medium_line_plain_t3_t

0x048e,	// (0x0008034a) list_medium_line_x2_t2_g2_g1_ParamLimits

0x048e,	// (0x0008034a) list_medium_line_x2_t2_g2_g1

0x04a6,	// (0x00080362) list_medium_line_x2_t2_g2_g2_ParamLimits

0x04a6,	// (0x00080362) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0008f126) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0008f126) list_medium_line_x2_t2_g2_g

0x05da,	// (0x00080496) list_medium_line_x2_t2_g2_t1_ParamLimits

0x05da,	// (0x00080496) list_medium_line_x2_t2_g2_t1

0x04c7,	// (0x00080383) list_medium_line_x2_t2_g2_t2_ParamLimits

0x04c7,	// (0x00080383) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd09,	// (0x0008fbc5) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd09,	// (0x0008fbc5) list_medium_line_x2_t2_g2_t

0x048e,	// (0x0008034a) list_medium_line_x2_t4_g2_g1_ParamLimits

0x048e,	// (0x0008034a) list_medium_line_x2_t4_g2_g1

0x29e2,	// (0x0008289e) list_medium_line_x2_t4_g2_g2_ParamLimits

0x29e2,	// (0x0008289e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd0e,	// (0x0008fbca) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd0e,	// (0x0008fbca) list_medium_line_x2_t4_g2_g

0xc989,	// (0x0008c845) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc989,	// (0x0008c845) list_medium_line_x2_t4_g2_t1

0xc9a3,	// (0x0008c85f) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc9a3,	// (0x0008c85f) list_medium_line_x2_t4_g2_t2

0xc9b9,	// (0x0008c875) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc9b9,	// (0x0008c875) list_medium_line_x2_t4_g2_t3

0x04c7,	// (0x00080383) list_medium_line_x2_t4_g2_t4_ParamLimits

0x04c7,	// (0x00080383) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd13,	// (0x0008fbcf) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd13,	// (0x0008fbcf) list_medium_line_x2_t4_g2_t

0x29f4,	// (0x000828b0) list_medium_line_t3_right_iconx2_g1

0x28c4,	// (0x00082780) list_medium_line_t3_right_iconx2_g2

0xc9ce,	// (0x0008c88a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1c,	// (0x0008fbd8) list_medium_line_t3_right_iconx2_g

0xc9d6,	// (0x0008c892) list_medium_line_t3_right_iconx2_t1

0xc9e6,	// (0x0008c8a2) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd23,	// (0x0008fbdf) list_medium_line_t3_right_iconx2_t

0x048e,	// (0x0008034a) list_medium_line_x3_t4_g4_g1_ParamLimits

0x048e,	// (0x0008034a) list_medium_line_x3_t4_g4_g1

0x049a,	// (0x00080356) list_medium_line_x3_t4_g4_g2_ParamLimits

0x049a,	// (0x00080356) list_medium_line_x3_t4_g4_g2

0x052e,	// (0x000803ea) list_medium_line_x3_t4_g4_g3_ParamLimits

0x052e,	// (0x000803ea) list_medium_line_x3_t4_g4_g3

0x29fc,	// (0x000828b8) list_medium_line_x3_t4_g4_g4_ParamLimits

0x29fc,	// (0x000828b8) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd28,	// (0x0008fbe4) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd28,	// (0x0008fbe4) list_medium_line_x3_t4_g4_g

0xc9f4,	// (0x0008c8b0) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc9f4,	// (0x0008c8b0) list_medium_line_x3_t4_g4_t1

0xca0b,	// (0x0008c8c7) list_medium_line_x3_t4_g4_t2_ParamLimits

0xca0b,	// (0x0008c8c7) list_medium_line_x3_t4_g4_t2

0x2a08,	// (0x000828c4) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2a08,	// (0x000828c4) list_medium_line_x3_t4_g4_t3

0x2a1d,	// (0x000828d9) list_medium_line_x3_t4_g4_t4_ParamLimits

0x2a1d,	// (0x000828d9) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd31,	// (0x0008fbed) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd31,	// (0x0008fbed) list_medium_line_x3_t4_g4_t

0xca20,	// (0x0008c8dc) list_single_dyc_row_text_pane_t1_ParamLimits

0xca20,	// (0x0008c8dc) list_single_dyc_row_text_pane_t1

0xca63,	// (0x0008c91f) list_single_dyc_row_text_pane_t2_ParamLimits

0xca63,	// (0x0008c91f) list_single_dyc_row_text_pane_t2

0x2a3a,	// (0x000828f6) list_single_dyc_row_text_pane_t3_ParamLimits

0x2a3a,	// (0x000828f6) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3a,	// (0x0008fbf6) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3a,	// (0x0008fbf6) list_single_dyc_row_text_pane_t

0x2a4c,	// (0x00082908) list_single_dyc_row_pane_g1_ParamLimits

0x2a4c,	// (0x00082908) list_single_dyc_row_pane_g1

0x2a58,	// (0x00082914) list_single_dyc_row_pane_g2_ParamLimits

0x2a58,	// (0x00082914) list_single_dyc_row_pane_g2

0x2a64,	// (0x00082920) list_single_dyc_row_pane_g3_ParamLimits

0x2a64,	// (0x00082920) list_single_dyc_row_pane_g3

0x2a70,	// (0x0008292c) list_single_dyc_row_pane_g4_ParamLimits

0x2a70,	// (0x0008292c) list_single_dyc_row_pane_g4

0x0003,

0xfd41,	// (0x0008fbfd) list_single_dyc_row_pane_g_ParamLimits

0xfd41,	// (0x0008fbfd) list_single_dyc_row_pane_g

0x2a7c,	// (0x00082938) list_single_dyc_row_text_pane_ParamLimits

0x2a7c,	// (0x00082938) list_single_dyc_row_text_pane

0x021b,	// (0x000800d7) bg_sp_fs_scroll_pane

0x2a9b,	// (0x00082957) thumb_sp_fs_scroll_pane

0x183a,	// (0x000816f6) list_medium_line_g1_ParamLimits

0x183a,	// (0x000816f6) list_medium_line_g1

0x2aa4,	// (0x00082960) list_medium_line_t1_ParamLimits

0x2aa4,	// (0x00082960) list_medium_line_t1

0x048e,	// (0x0008034a) list_medium_line_x2_g1_ParamLimits

0x048e,	// (0x0008034a) list_medium_line_x2_g1

0x049a,	// (0x00080356) list_medium_line_x2_g2_ParamLimits

0x049a,	// (0x00080356) list_medium_line_x2_g2

0x0001,

0xfd4a,	// (0x0008fc06) list_medium_line_x2_g_ParamLimits

0xfd4a,	// (0x0008fc06) list_medium_line_x2_g

0x2ab9,	// (0x00082975) list_medium_line_x2_t1_ParamLimits

0x2ab9,	// (0x00082975) list_medium_line_x2_t1

0x048e,	// (0x0008034a) list_medium_line_x3_g1_ParamLimits

0x048e,	// (0x0008034a) list_medium_line_x3_g1

0x049a,	// (0x00080356) list_medium_line_x3_g2_ParamLimits

0x049a,	// (0x00080356) list_medium_line_x3_g2

0x0001,

0xfd4a,	// (0x0008fc06) list_medium_line_x3_g_ParamLimits

0xfd4a,	// (0x0008fc06) list_medium_line_x3_g

0x2ab9,	// (0x00082975) list_medium_line_x3_t1_ParamLimits

0x2ab9,	// (0x00082975) list_medium_line_x3_t1

0x2acf,	// (0x0008298b) thumb_sp_fs_scroll_pane_g1

0x2ad8,	// (0x00082994) thumb_sp_fs_scroll_pane_g2

0x2ae1,	// (0x0008299d) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x0008fc0b) thumb_sp_fs_scroll_pane_g

0x2acf,	// (0x0008298b) bg_sp_fs_scroll_pane_g1

0x2ad8,	// (0x00082994) bg_sp_fs_scroll_pane_g2

0x2ae1,	// (0x0008299d) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4f,	// (0x0008fc0b) bg_sp_fs_scroll_pane_g

0x048e,	// (0x0008034a) list_medium_line_x2_t3_g4_g1_ParamLimits

0x048e,	// (0x0008034a) list_medium_line_x2_t3_g4_g1

0x0522,	// (0x000803de) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0522,	// (0x000803de) list_medium_line_x2_t3_g4_g2

0x049a,	// (0x00080356) list_medium_line_x2_t3_g4_g3_ParamLimits

0x049a,	// (0x00080356) list_medium_line_x2_t3_g4_g3

0x04a6,	// (0x00080362) list_medium_line_x2_t3_g4_g4_ParamLimits

0x04a6,	// (0x00080362) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0008f1a2) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0008f1a2) list_medium_line_x2_t3_g4_g

0xcabd,	// (0x0008c979) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcabd,	// (0x0008c979) list_medium_line_x2_t3_g4_t1

0xcad3,	// (0x0008c98f) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcad3,	// (0x0008c98f) list_medium_line_x2_t3_g4_t2

0x04c7,	// (0x00080383) list_medium_line_x2_t3_g4_t3_ParamLimits

0x04c7,	// (0x00080383) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd56,	// (0x0008fc12) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd56,	// (0x0008fc12) list_medium_line_x2_t3_g4_t

0x183a,	// (0x000816f6) list_medium_line_g2_g1_ParamLimits

0x183a,	// (0x000816f6) list_medium_line_g2_g1

0x1846,	// (0x00081702) list_medium_line_g2_g2_ParamLimits

0x1846,	// (0x00081702) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0008f8db) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0008f8db) list_medium_line_g2_g

0x2aea,	// (0x000829a6) list_medium_line_g2_t1_ParamLimits

0x2aea,	// (0x000829a6) list_medium_line_g2_t1

0x183a,	// (0x000816f6) list_medium_line_t3_g2_g1_ParamLimits

0x183a,	// (0x000816f6) list_medium_line_t3_g2_g1

0x1846,	// (0x00081702) list_medium_line_t3_g2_g2_ParamLimits

0x1846,	// (0x00081702) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0008f8db) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0008f8db) list_medium_line_t3_g2_g

0xcaec,	// (0x0008c9a8) list_medium_line_t3_g2_t1_ParamLimits

0xcaec,	// (0x0008c9a8) list_medium_line_t3_g2_t1

0xcb06,	// (0x0008c9c2) list_medium_line_t3_g2_t2_ParamLimits

0xcb06,	// (0x0008c9c2) list_medium_line_t3_g2_t2

0xcb1c,	// (0x0008c9d8) list_medium_line_t3_g2_t3_ParamLimits

0xcb1c,	// (0x0008c9d8) list_medium_line_t3_g2_t3

0x0002,

0xfd5d,	// (0x0008fc19) list_medium_line_t3_g2_t_ParamLimits

0xfd5d,	// (0x0008fc19) list_medium_line_t3_g2_t

0x28c4,	// (0x00082780) list_medium_line_right_icon_g1

0x2aff,	// (0x000829bb) list_medium_line_right_icon_t1

0x183a,	// (0x000816f6) list_medium_line_t2_g1_ParamLimits

0x183a,	// (0x000816f6) list_medium_line_t2_g1

0xcb33,	// (0x0008c9ef) list_medium_line_t2_t1_ParamLimits

0xcb33,	// (0x0008c9ef) list_medium_line_t2_t1

0xcb4d,	// (0x0008ca09) list_medium_line_t2_t2_ParamLimits

0xcb4d,	// (0x0008ca09) list_medium_line_t2_t2

0x0001,

0xfd64,	// (0x0008fc20) list_medium_line_t2_t_ParamLimits

0xfd64,	// (0x0008fc20) list_medium_line_t2_t

0x183a,	// (0x000816f6) list_medium_line_t3_g1_ParamLimits

0x183a,	// (0x000816f6) list_medium_line_t3_g1

0xcb62,	// (0x0008ca1e) list_medium_line_t3_t1_ParamLimits

0xcb62,	// (0x0008ca1e) list_medium_line_t3_t1

0xcb79,	// (0x0008ca35) list_medium_line_t3_t2_ParamLimits

0xcb79,	// (0x0008ca35) list_medium_line_t3_t2

0xcb8e,	// (0x0008ca4a) list_medium_line_t3_t3_ParamLimits

0xcb8e,	// (0x0008ca4a) list_medium_line_t3_t3

0x0002,

0xfd69,	// (0x0008fc25) list_medium_line_t3_t_ParamLimits

0xfd69,	// (0x0008fc25) list_medium_line_t3_t

0x183a,	// (0x000816f6) list_medium_line_g3_g1_ParamLimits

0x183a,	// (0x000816f6) list_medium_line_g3_g1

0x2b0d,	// (0x000829c9) list_medium_line_g3_g2_ParamLimits

0x2b0d,	// (0x000829c9) list_medium_line_g3_g2

0x1846,	// (0x00081702) list_medium_line_g3_g3_ParamLimits

0x1846,	// (0x00081702) list_medium_line_g3_g3

0x0002,

0xfd70,	// (0x0008fc2c) list_medium_line_g3_g_ParamLimits

0xfd70,	// (0x0008fc2c) list_medium_line_g3_g

0x2b19,	// (0x000829d5) list_medium_line_g3_t1_ParamLimits

0x2b19,	// (0x000829d5) list_medium_line_g3_t1

0x183a,	// (0x000816f6) list_medium_line_t2_g3_g1_ParamLimits

0x183a,	// (0x000816f6) list_medium_line_t2_g3_g1

0x2b0d,	// (0x000829c9) list_medium_line_t2_g3_g2_ParamLimits

0x2b0d,	// (0x000829c9) list_medium_line_t2_g3_g2

0x1846,	// (0x00081702) list_medium_line_t2_g3_g3_ParamLimits

0x1846,	// (0x00081702) list_medium_line_t2_g3_g3

0x0002,

0xfd70,	// (0x0008fc2c) list_medium_line_t2_g3_g_ParamLimits

0xfd70,	// (0x0008fc2c) list_medium_line_t2_g3_g

0xcba0,	// (0x0008ca5c) list_medium_line_t2_g3_t1_ParamLimits

0xcba0,	// (0x0008ca5c) list_medium_line_t2_g3_t1

0xcbb7,	// (0x0008ca73) list_medium_line_t2_g3_t2_ParamLimits

0xcbb7,	// (0x0008ca73) list_medium_line_t2_g3_t2

0x0001,

0xfd77,	// (0x0008fc33) list_medium_line_t2_g3_t_ParamLimits

0xfd77,	// (0x0008fc33) list_medium_line_t2_g3_t

0x183a,	// (0x000816f6) list_medium_line_t3_g3_g1_ParamLimits

0x183a,	// (0x000816f6) list_medium_line_t3_g3_g1

0x2b0d,	// (0x000829c9) list_medium_line_t3_g3_g2_ParamLimits

0x2b0d,	// (0x000829c9) list_medium_line_t3_g3_g2

0x1846,	// (0x00081702) list_medium_line_t3_g3_g3_ParamLimits

0x1846,	// (0x00081702) list_medium_line_t3_g3_g3

0x0002,

0xfd70,	// (0x0008fc2c) list_medium_line_t3_g3_g_ParamLimits

0xfd70,	// (0x0008fc2c) list_medium_line_t3_g3_g

0xcbcc,	// (0x0008ca88) list_medium_line_t3_g3_t1_ParamLimits

0xcbcc,	// (0x0008ca88) list_medium_line_t3_g3_t1

0xcbe0,	// (0x0008ca9c) list_medium_line_t3_g3_t2_ParamLimits

0xcbe0,	// (0x0008ca9c) list_medium_line_t3_g3_t2

0xcbf2,	// (0x0008caae) list_medium_line_t3_g3_t3_ParamLimits

0xcbf2,	// (0x0008caae) list_medium_line_t3_g3_t3

0x0002,

0xfd7c,	// (0x0008fc38) list_medium_line_t3_g3_t_ParamLimits

0xfd7c,	// (0x0008fc38) list_medium_line_t3_g3_t

0x29f4,	// (0x000828b0) list_medium_line_right_iconx2_g1

0x28c4,	// (0x00082780) list_medium_line_right_iconx2_g2

0x0001,

0xfd83,	// (0x0008fc3f) list_medium_line_right_iconx2_g

0x2b2e,	// (0x000829ea) list_medium_line_right_iconx2_t1

0x29f4,	// (0x000828b0) list_medium_line_t2_right_iconx2_g1

0x28c4,	// (0x00082780) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd83,	// (0x0008fc3f) list_medium_line_t2_right_iconx2_g

0xcc06,	// (0x0008cac2) list_medium_line_t2_right_iconx2_t1

0xcc16,	// (0x0008cad2) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd88,	// (0x0008fc44) list_medium_line_t2_right_iconx2_t

0x2b3c,	// (0x000829f8) list_medium_line_x4_t4_t1

0xcc24,	// (0x0008cae0) list_medium_line_x4_t4_t2

0xcc34,	// (0x0008caf0) list_medium_line_x4_t4_t3

0xcc44,	// (0x0008cb00) list_medium_line_x4_t4_t4

0x0003,

0xfd8d,	// (0x0008fc49) list_medium_line_x4_t4_t

0xcc7d,	// (0x0008cb39) tport_appsw_pane_ParamLimits

0xcc7d,	// (0x0008cb39) tport_appsw_pane

0xcc8b,	// (0x0008cb47) tport_contact_pane_ParamLimits

0xcc8b,	// (0x0008cb47) tport_contact_pane

0xcc99,	// (0x0008cb55) tport_listscroll_pane_ParamLimits

0xcc99,	// (0x0008cb55) tport_listscroll_pane

0xcca7,	// (0x0008cb63) cell_tport_appsw_pane_ParamLimits

0xcca7,	// (0x0008cb63) cell_tport_appsw_pane

0x0e01,	// (0x00080cbd) tport_appsw_pane_g1_ParamLimits

0x0e01,	// (0x00080cbd) tport_appsw_pane_g1

0x2b4a,	// (0x00082a06) tport_contact_pane_g1

0x2b53,	// (0x00082a0f) tport_contact_pane_t1

0x2b61,	// (0x00082a1d) tport_contact_pane_t2

0x0001,

0xfd96,	// (0x0008fc52) tport_contact_pane_t

0x2b6f,	// (0x00082a2b) list_tport_pane

0x2b78,	// (0x00082a34) scroll_pane_cp_030

0xccd2,	// (0x0008cb8e) cell_tport_appsw_pane_g1

0x2b91,	// (0x00082a4d) cell_tport_appsw_pane_t1

0x021b,	// (0x000800d7) grid_highlight_pane_cp019

0xcce2,	// (0x0008cb9e) list_tport_double_graphic_pane_ParamLimits

0xcce2,	// (0x0008cb9e) list_tport_double_graphic_pane

0x0294,	// (0x00080150) list_highlight_pane_cp023_ParamLimits

0x0294,	// (0x00080150) list_highlight_pane_cp023

0xccf3,	// (0x0008cbaf) list_tport_double_graphic_pane_g1_ParamLimits

0xccf3,	// (0x0008cbaf) list_tport_double_graphic_pane_g1

0xcd00,	// (0x0008cbbc) list_tport_double_graphic_pane_t1_ParamLimits

0xcd00,	// (0x0008cbbc) list_tport_double_graphic_pane_t1

0xcd15,	// (0x0008cbd1) list_tport_double_graphic_pane_t2_ParamLimits

0xcd15,	// (0x0008cbd1) list_tport_double_graphic_pane_t2

0x0001,

0xfda2,	// (0x0008fc5e) list_tport_double_graphic_pane_t_ParamLimits

0xfda2,	// (0x0008fc5e) list_tport_double_graphic_pane_t

0x021b,	// (0x000800d7) main_cale_note_pane

0xab73,	// (0x0008aa2f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xab73,	// (0x0008aa2f) cell_vitu2_function_top_wide_pane_cp01

0xc4af,	// (0x0008c36b) wait_bar_pane_cp05_ParamLimits

0x021b,	// (0x000800d7) listscroll_cmail_pane

0x2ba7,	// (0x00082a63) list_cmail_pane

0xcd31,	// (0x0008cbed) list_cmail_body_pane

0xcd46,	// (0x0008cc02) list_single_cmail_header_caption_pane

0xcd60,	// (0x0008cc1c) list_single_cmail_header_detail_pane_ParamLimits

0xcd60,	// (0x0008cc1c) list_single_cmail_header_detail_pane

0xcd8f,	// (0x0008cc4b) list_single_cmail_header_caption_pane_t1

0xcd9f,	// (0x0008cc5b) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcd9f,	// (0x0008cc5b) list_single_cmail_header_detail_pane_g1

0x39f2,	// (0x000838ae) list_single_cmail_header_detail_pane_g2_ParamLimits

0x39f2,	// (0x000838ae) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda7,	// (0x0008fc63) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda7,	// (0x0008fc63) list_single_cmail_header_detail_pane_g

0x2bd4,	// (0x00082a90) list_single_cmail_header_detail_pane_t1_ParamLimits

0x2bd4,	// (0x00082a90) list_single_cmail_header_detail_pane_t1

0x2c12,	// (0x00082ace) list_single_cmail_header_editor_pane_bg_ParamLimits

0x2c12,	// (0x00082ace) list_single_cmail_header_editor_pane_bg

0x2428,	// (0x000822e4) list_cmail_body_pane_g1

0x2c24,	// (0x00082ae0) list_cmail_body_pane_t1

0x15df,	// (0x0008149b) list_single_cmail_header_editor_pane_bg_g1

0x448d,	// (0x00084349) list_single_cmail_header_editor_pane_bg_g1_copy1

0x15ef,	// (0x000814ab) list_single_cmail_header_editor_pane_bg_g1_copy2

0x15e7,	// (0x000814a3) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1832,	// (0x000816ee) list_single_cmail_header_editor_pane_bg_g1_copy4

0x160f,	// (0x000814cb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x15ff,	// (0x000814bb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x1607,	// (0x000814c3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x446d,	// (0x00084329) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcddd,	// (0x0008cc99) calenote_gesture_pane_ParamLimits

0xcddd,	// (0x0008cc99) calenote_gesture_pane

0xcdf7,	// (0x0008ccb3) calenote_window_pane_ParamLimits

0xcdf7,	// (0x0008ccb3) calenote_window_pane

0x2c32,	// (0x00082aee) popup_note_window_cp01

0xce0f,	// (0x0008cccb) calenote_swipe_1_pane_ParamLimits

0xce0f,	// (0x0008cccb) calenote_swipe_1_pane

0xc857,	// (0x0008c713) calenote_swipe_2_pane_ParamLimits

0xc857,	// (0x0008c713) calenote_swipe_2_pane

0x27c3,	// (0x0008267f) calenote_swipe_1_pane_g1_ParamLimits

0x27c3,	// (0x0008267f) calenote_swipe_1_pane_g1

0x27d0,	// (0x0008268c) calenote_swipe_1_pane_g2_ParamLimits

0x27d0,	// (0x0008268c) calenote_swipe_1_pane_g2

0x0001,

0xfcd6,	// (0x0008fb92) calenote_swipe_1_pane_g_ParamLimits

0xfcd6,	// (0x0008fb92) calenote_swipe_1_pane_g

0x2c44,	// (0x00082b00) calenote_swipe_1_pane_t1_ParamLimits

0x2c44,	// (0x00082b00) calenote_swipe_1_pane_t1

0x27c3,	// (0x0008267f) calenote_swipe_2_pane_g1_ParamLimits

0x27c3,	// (0x0008267f) calenote_swipe_2_pane_g1

0x2c63,	// (0x00082b1f) calenote_swipe_2_pane_g2_ParamLimits

0x2c63,	// (0x00082b1f) calenote_swipe_2_pane_g2

0x0001,

0xfdb3,	// (0x0008fc6f) calenote_swipe_2_pane_g_ParamLimits

0xfdb3,	// (0x0008fc6f) calenote_swipe_2_pane_g

0x2c6f,	// (0x00082b2b) calenote_swipe_2_pane_t1_ParamLimits

0x2c6f,	// (0x00082b2b) calenote_swipe_2_pane_t1

0x021b,	// (0x000800d7) main_mup_navstr_pane

0x9915,	// (0x000897d1) main_mup3_pane_t7_ParamLimits

0x9915,	// (0x000897d1) main_mup3_pane_t7

0xa2e8,	// (0x0008a1a4) main_mp4_pane_g6_ParamLimits

0xa2e8,	// (0x0008a1a4) main_mp4_pane_g6

0xa658,	// (0x0008a514) main_image3_pane_t4_ParamLimits

0xa658,	// (0x0008a514) main_image3_pane_t4

0xce22,	// (0x0008ccde) popup_navstr_preview_pane_ParamLimits

0xce22,	// (0x0008ccde) popup_navstr_preview_pane

0xce2e,	// (0x0008ccea) scroll_navstr_pane_ParamLimits

0xce2e,	// (0x0008ccea) scroll_navstr_pane

0x021b,	// (0x000800d7) bg_popup_preview_window_pane_cp04

0x2c96,	// (0x00082b52) popup_navstr_preview_pane_t1

0xce3a,	// (0x0008ccf6) scroll_navstr_pane_g1_ParamLimits

0xce3a,	// (0x0008ccf6) scroll_navstr_pane_g1

0xce47,	// (0x0008cd03) scroll_navstr_pane_t1_ParamLimits

0xce47,	// (0x0008cd03) scroll_navstr_pane_t1

0x2c3b,	// (0x00082af7) bg_button_pane_cp014

0x2c3b,	// (0x00082af7) bg_button_pane_cp030

0x2764,	// (0x00082620) list_double_fisheye_pane_g4_ParamLimits

0x2764,	// (0x00082620) list_double_fisheye_pane_g4

0x2770,	// (0x0008262c) list_double_fisheye_pane_g5_ParamLimits

0x2770,	// (0x0008262c) list_double_fisheye_pane_g5

0x2baf,	// (0x00082a6b) sp_fs_scroll_pane_cp03

0x2906,	// (0x000827c2) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2912,	// (0x000827ce) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf3,	// (0x0008fbaf) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x291e,	// (0x000827da) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcd27,	// (0x0008cbe3) sp_fs_scroll_pane_cp02

0x4199,	// (0x00084055) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x4199,	// (0x00084055) popup_sp_fs_calendar_preview_list_single_pane

0x021b,	// (0x000800d7) main_cam6_pano_pane

0x0294,	// (0x00080150) main_mup3_pane_ParamLimits

0x021b,	// (0x000800d7) main_phacti_pane

0xc380,	// (0x0008c23c) bg_button_pane_cp11

0xc398,	// (0x0008c254) main_mobtv_info_pane_g2_ParamLimits

0xc398,	// (0x0008c254) main_mobtv_info_pane_g2

0x0001,

0xfc53,	// (0x0008fb0f) main_mobtv_info_pane_g_ParamLimits

0xfc53,	// (0x0008fb0f) main_mobtv_info_pane_g

0xc54c,	// (0x0008c408) sc_clock_pane_t5_ParamLimits

0xc54c,	// (0x0008c408) sc_clock_pane_t5

0xc5f1,	// (0x0008c4ad) main_radioblah_pane_g1_ParamLimits

0x26b8,	// (0x00082574) main_radioblah_pane_t3_ParamLimits

0x26b8,	// (0x00082574) main_radioblah_pane_t3

0x26d0,	// (0x0008258c) main_radioblah_pane_t4_ParamLimits

0x26d0,	// (0x0008258c) main_radioblah_pane_t4

0xc60f,	// (0x0008c4cb) main_radioblah_text_pane_ParamLimits

0xc60f,	// (0x0008c4cb) main_radioblah_text_pane

0xc61c,	// (0x0008c4d8) main_radioblah_info_pane_g1_ParamLimits

0xc6b5,	// (0x0008c571) main_radioblah_info_pane_t4_ParamLimits

0xc6b5,	// (0x0008c571) main_radioblah_info_pane_t4

0x0294,	// (0x00080150) main_sp_fs_calendar_pane

0xce59,	// (0x0008cd15) main_phacti_pane_g1

0xce61,	// (0x0008cd1d) phacti_note_pane_ParamLimits

0xce61,	// (0x0008cd1d) phacti_note_pane

0x2cad,	// (0x00082b69) phacti_term_pane_ParamLimits

0x2cad,	// (0x00082b69) phacti_term_pane

0x2cc2,	// (0x00082b7e) phacti_note_pane_t1_ParamLimits

0x2cc2,	// (0x00082b7e) phacti_note_pane_t1

0x2cd9,	// (0x00082b95) phacti_term_pane_g1

0x2ce1,	// (0x00082b9d) phacti_term_pane_t1_ParamLimits

0x2ce1,	// (0x00082b9d) phacti_term_pane_t1

0x2d0b,	// (0x00082bc7) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2d13,	// (0x00082bcf) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbd,	// (0x0008fc79) popup_sp_fs_calendar_preview_list_single_pane_g

0x2d1b,	// (0x00082bd7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2d1b,	// (0x00082bd7) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2d31,	// (0x00082bed) aid_popup_sp_fs_bg_corner_pane

0x0af8,	// (0x000809b4) popup_sp_fs_calendar_preview_bg_pane_g1

0x021b,	// (0x000800d7) popup_sp_fs_calendar_preview_bg_pane

0x2d39,	// (0x00082bf5) popup_sp_fs_calendar_preview_list_pane

0x0294,	// (0x00080150) bg_main_sp_fs_cale_pane_ParamLimits

0x0294,	// (0x00080150) bg_main_sp_fs_cale_pane

0x2d41,	// (0x00082bfd) listscroll_cale_mrui_pane_ParamLimits

0x2d41,	// (0x00082bfd) listscroll_cale_mrui_pane

0x2d55,	// (0x00082c11) listscroll_sp_fs_schedule_track_pane

0x2d5e,	// (0x00082c1a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x2d5e,	// (0x00082c1a) main_sp_fs_ctrlbar_pane_cp01

0x2d6f,	// (0x00082c2b) main_sp_fs_ribbon_pane

0x2d77,	// (0x00082c33) popup_sp_fs_cale_preview_window

0xcea0,	// (0x0008cd5c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcea0,	// (0x0008cd5c) list_single_sp_fs_schedule_track_pane

0x1563,	// (0x0008141f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1563,	// (0x0008141f) bg_sp_fs_highlight_list_pane_cp03

0xceb2,	// (0x0008cd6e) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xceb2,	// (0x0008cd6e) list_single_sp_fs_schedule_track_pane_g1

0xcebe,	// (0x0008cd7a) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcebe,	// (0x0008cd7a) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc2,	// (0x0008fc7e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc2,	// (0x0008fc7e) list_single_sp_fs_schedule_track_pane_g

0xceca,	// (0x0008cd86) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xceca,	// (0x0008cd86) list_single_sp_fs_schedule_track_pane_t1

0xcee8,	// (0x0008cda4) sp_fs_schedule_track_pane_ParamLimits

0xcee8,	// (0x0008cda4) sp_fs_schedule_track_pane

0x2d89,	// (0x00082c45) sp_fs_schedule_track_pane_g1

0x2d91,	// (0x00082c4d) sp_fs_schedule_track_pane_g2

0x2d99,	// (0x00082c55) sp_fs_schedule_track_pane_g3

0x2da1,	// (0x00082c5d) sp_fs_schedule_track_pane_g4

0x2da9,	// (0x00082c65) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc7,	// (0x0008fc83) sp_fs_schedule_track_pane_g

0x15df,	// (0x0008149b) bg_sp_fs_schedule_viewer_highlight_g1

0x448d,	// (0x00084349) bg_sp_fs_schedule_viewer_highlight_g2

0x15e7,	// (0x000814a3) bg_sp_fs_schedule_viewer_highlight_g3

0x15ef,	// (0x000814ab) bg_sp_fs_schedule_viewer_highlight_g4

0x1832,	// (0x000816ee) bg_sp_fs_schedule_viewer_highlight_g5

0x15ff,	// (0x000814bb) bg_sp_fs_schedule_viewer_highlight_g6

0x1607,	// (0x000814c3) bg_sp_fs_schedule_viewer_highlight_g7

0x160f,	// (0x000814cb) bg_sp_fs_schedule_viewer_highlight_g8

0x446d,	// (0x00084329) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd2,	// (0x0008fc8e) bg_sp_fs_schedule_viewer_highlight_g

0x021b,	// (0x000800d7) bg_main_sp_fs_ribbon_pane

0xcefa,	// (0x0008cdb6) main_sp_fs_ribbon_pane_g1

0x2db1,	// (0x00082c6d) main_sp_fs_ribbon_pane_t1

0xcf03,	// (0x0008cdbf) main_sp_fs_ribbon_pane_t2

0x2dc0,	// (0x00082c7c) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde5,	// (0x0008fca1) main_sp_fs_ribbon_pane_t

0x2dcf,	// (0x00082c8b) main_sp_fs_ribbon_scheduler_pane

0x2dd7,	// (0x00082c93) bg_main_sp_fs_ribbon_pane_g1

0x2de0,	// (0x00082c9c) bg_main_sp_fs_ribbon_pane_g2

0x2de9,	// (0x00082ca5) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdec,	// (0x0008fca8) bg_main_sp_fs_ribbon_pane_g

0x2df1,	// (0x00082cad) main_sp_fs_ribbon_scheduler_pane_g1

0x2dfa,	// (0x00082cb6) main_sp_fs_ribbon_scheduler_pane_g2

0x2e03,	// (0x00082cbf) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf3,	// (0x0008fcaf) main_sp_fs_ribbon_scheduler_pane_g

0x2e0c,	// (0x00082cc8) list_cale_mrui_pane

0xcf12,	// (0x0008cdce) sp_fs_scroll_pane_cp07_ParamLimits

0xcf12,	// (0x0008cdce) sp_fs_scroll_pane_cp07

0xcf28,	// (0x0008cde4) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcf28,	// (0x0008cde4) bg_sp_fs_schedule_viewer_highlight

0x2e15,	// (0x00082cd1) list_single_sp_fs_schedule_track_pane_cp01

0x2e1d,	// (0x00082cd9) list_sp_fs_schedule_track_pane

0x2e25,	// (0x00082ce1) sp_fs_scroll_pane_cp06_ParamLimits

0x2e25,	// (0x00082ce1) sp_fs_scroll_pane_cp06

0x0af8,	// (0x000809b4) bgmain_sp_fs_calendar_pane_g1

0x2e37,	// (0x00082cf3) list_single_cale_mrui_pane_ParamLimits

0x2e37,	// (0x00082cf3) list_single_cale_mrui_pane

0x2e5b,	// (0x00082d17) list_single_cale_mrui_row_pane_ParamLimits

0x2e5b,	// (0x00082d17) list_single_cale_mrui_row_pane

0x2e68,	// (0x00082d24) list_single_cale_mrui_row_pane_g1_ParamLimits

0x2e68,	// (0x00082d24) list_single_cale_mrui_row_pane_g1

0x2ea0,	// (0x00082d5c) list_single_cale_mrui_row_pane_t1_ParamLimits

0x2ea0,	// (0x00082d5c) list_single_cale_mrui_row_pane_t1

0xcf35,	// (0x0008cdf1) list_single_cale_mrui_row_pane_t2_ParamLimits

0xcf35,	// (0x0008cdf1) list_single_cale_mrui_row_pane_t2

0x2eb2,	// (0x00082d6e) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2eb2,	// (0x00082d6e) list_single_cale_mrui_row_pane_t3

0x2ee1,	// (0x00082d9d) list_single_cale_mrui_row_pane_t4_ParamLimits

0x2ee1,	// (0x00082d9d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdff,	// (0x0008fcbb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdff,	// (0x0008fcbb) list_single_cale_mrui_row_pane_t

0xcf9b,	// (0x0008ce57) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xcf9b,	// (0x0008ce57) list_single_cmail_header_editor_pane_bg_cp01

0xcfbd,	// (0x0008ce79) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xcfbd,	// (0x0008ce79) list_single_cmail_header_editor_pane_bg_cp02

0xcfd9,	// (0x0008ce95) main_radioblah_text_pane_t1_ParamLimits

0xcfd9,	// (0x0008ce95) main_radioblah_text_pane_t1

0x2f10,	// (0x00082dcc) cam6_indi_pane_cp01

0x2f18,	// (0x00082dd4) cam6_mode_pane_cp01

0x2f20,	// (0x00082ddc) cam6_pano_pane

0x2f29,	// (0x00082de5) cam6_zoom_pane_cp01

0x2f33,	// (0x00082def) cam6_pano_image_pane

0x2f3c,	// (0x00082df8) cam6_pano_pane_g1

0x2428,	// (0x000822e4) cam6_pano_pane_g2

0x2f45,	// (0x00082e01) cam6_pano_pane_g3

0x2f4e,	// (0x00082e0a) cam6_pano_pane_g4

0x10f0,	// (0x00080fac) cam6_pano_pane_g5

0x2f57,	// (0x00082e13) cam6_pano_pane_g6

0x2f5f,	// (0x00082e1b) cam6_pano_pane_g7

0x2f67,	// (0x00082e23) cam6_pano_pane_g8

0x2f70,	// (0x00082e2c) cam6_pano_pane_g9

0x0008,

0xfe08,	// (0x0008fcc4) cam6_pano_pane_g

0x021b,	// (0x000800d7) main_browser_tag_pane

0x2c8e,	// (0x00082b4a) grid_navstr_albumart_pane

0x2f7b,	// (0x00082e37) cell_navstr_albumart_pane_ParamLimits

0x2f7b,	// (0x00082e37) cell_navstr_albumart_pane

0x2f97,	// (0x00082e53) cell_navstr_albumart_pane_g1

0xedea,	// (0x0008eca6) cell_navstr_albumart_pane_g2

0xedfa,	// (0x0008ecb6) cell_navstr_albumart_pane_g3

0xedf2,	// (0x0008ecae) cell_navstr_albumart_pane_g4

0x0003,

0xfe1b,	// (0x0008fcd7) cell_navstr_albumart_pane_g

0xcff4,	// (0x0008ceb0) bt_list_pane_ParamLimits

0xcff4,	// (0x0008ceb0) bt_list_pane

0xd00d,	// (0x0008cec9) bt_list_pane_t1

0xd01c,	// (0x0008ced8) bt_list_pane_t2

0x0001,

0xfe24,	// (0x0008fce0) bt_list_pane_t

0x021b,	// (0x000800d7) main_cale_prevew_pane

0xd02b,	// (0x0008cee7) popup_cale_preview_window_ParamLimits

0xd02b,	// (0x0008cee7) popup_cale_preview_window

0x0294,	// (0x00080150) bg_popup_preview_window_pane_cp05_ParamLimits

0x0294,	// (0x00080150) bg_popup_preview_window_pane_cp05

0x2f9f,	// (0x00082e5b) list_cale_preview_pane_ParamLimits

0x2f9f,	// (0x00082e5b) list_cale_preview_pane

0xd046,	// (0x0008cf02) list_double_cale_preview_pane_ParamLimits

0xd046,	// (0x0008cf02) list_double_cale_preview_pane

0xd05a,	// (0x0008cf16) list_single_cale_preview_pane_ParamLimits

0xd05a,	// (0x0008cf16) list_single_cale_preview_pane

0xd072,	// (0x0008cf2e) list_single_cale_preview_pane_g1

0xd07a,	// (0x0008cf36) list_single_cale_preview_pane_t1_ParamLimits

0xd07a,	// (0x0008cf36) list_single_cale_preview_pane_t1

0xd08f,	// (0x0008cf4b) list_double_cale_preview_pane_g1

0xd097,	// (0x0008cf53) list_double_cale_preview_pane_t1_ParamLimits

0xd097,	// (0x0008cf53) list_double_cale_preview_pane_t1

0xd0ac,	// (0x0008cf68) list_double_cale_preview_pane_t2_ParamLimits

0xd0ac,	// (0x0008cf68) list_double_cale_preview_pane_t2

0x0001,

0xfe29,	// (0x0008fce5) list_double_cale_preview_pane_t_ParamLimits

0xfe29,	// (0x0008fce5) list_double_cale_preview_pane_t

0x021b,	// (0x000800d7) main_ezdial_pane

0x0294,	// (0x00080150) main_sp_fs_email_pane_ParamLimits

0xc88f,	// (0x0008c74b) cmail_ddmenu_btn01_pane_ParamLimits

0xc88f,	// (0x0008c74b) cmail_ddmenu_btn01_pane

0xc8ac,	// (0x0008c768) cmail_ddmenu_btn02_pane_ParamLimits

0xc8ac,	// (0x0008c768) cmail_ddmenu_btn02_pane

0xc8ca,	// (0x0008c786) cmail_ddmenu_btn03_pane_ParamLimits

0xc8ca,	// (0x0008c786) cmail_ddmenu_btn03_pane

0xc8f8,	// (0x0008c7b4) main_sp_fs_ctrlbar_pane_ParamLimits

0xc914,	// (0x0008c7d0) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcd31,	// (0x0008cbed) list_cmail_body_pane_ParamLimits

0x2bbe,	// (0x00082a7a) bg_button_pane_cp12

0x2bc7,	// (0x00082a83) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2bc7,	// (0x00082a83) list_single_cmail_header_detail_pane_g3

0xcdb7,	// (0x0008cc73) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcdb7,	// (0x0008cc73) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdae,	// (0x0008fc6a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdae,	// (0x0008fc6a) list_single_cmail_header_detail_pane_t

0x2cf6,	// (0x00082bb2) phacti_term_pane_t2_ParamLimits

0x2cf6,	// (0x00082bb2) phacti_term_pane_t2

0x0001,

0xfdb8,	// (0x0008fc74) phacti_term_pane_t_ParamLimits

0xfdb8,	// (0x0008fc74) phacti_term_pane_t

0x2fab,	// (0x00082e67) aid_size_list_single_double

0xd0c4,	// (0x0008cf80) popup_ezdial_listscroll_window

0xd0e4,	// (0x0008cfa0) popup_number_entry_window_cp01

0xdbc6,	// (0x0008da82) bg_popup_call_pane_cp09

0x2fb7,	// (0x00082e73) ezdial_list_pane

0x2fbf,	// (0x00082e7b) scroll_pane_cp23

0x08d7,	// (0x00080793) bg_button_pane_cp028_ParamLimits

0x08d7,	// (0x00080793) bg_button_pane_cp028

0xd0f2,	// (0x0008cfae) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd0f2,	// (0x0008cfae) cmail_ddmenu_btn01_pane_g1

0xd102,	// (0x0008cfbe) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd102,	// (0x0008cfbe) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2e,	// (0x0008fcea) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2e,	// (0x0008fcea) cmail_ddmenu_btn01_pane_g

0x2fc7,	// (0x00082e83) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2fc7,	// (0x00082e83) cmail_ddmenu_btn01_pane_t1

0xefd1,	// (0x0008ee8d) bg_button_pane_cp029_ParamLimits

0xefd1,	// (0x0008ee8d) bg_button_pane_cp029

0xd102,	// (0x0008cfbe) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd102,	// (0x0008cfbe) cmail_ddmenu_btn02_pane_g1

0xd11a,	// (0x0008cfd6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd11a,	// (0x0008cfd6) cmail_ddmenu_btn02_pane_t1

0x1563,	// (0x0008141f) bg_button_pane_cp031_ParamLimits

0x1563,	// (0x0008141f) bg_button_pane_cp031

0xd102,	// (0x0008cfbe) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd102,	// (0x0008cfbe) cmail_ddmenu_btn03_pane_g1

0xd11a,	// (0x0008cfd6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd11a,	// (0x0008cfd6) cmail_ddmenu_btn03_pane_t1

0xa4f3,	// (0x0008a3af) cell_dialer2_keypad_pane_t1_ParamLimits

0xa50d,	// (0x0008a3c9) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa50d,	// (0x0008a3c9) cell_dialer2_keypad_pane_t1_copy1

0xc210,	// (0x0008c0cc) ncimui_group_button_pane

0x0294,	// (0x00080150) main_sp_fs_calendar_pane_ParamLimits

0xcd46,	// (0x0008cc02) list_single_cmail_header_caption_pane_ParamLimits

0x3de4,	// (0x00083ca0) aid_recal_txt_sm_pane

0x021b,	// (0x000800d7) mian_recal_day_pane

0x2d77,	// (0x00082c33) popup_sp_fs_cale_preview_window_ParamLimits

0x021b,	// (0x000800d7) list_recal_day_pane

0x2ff5,	// (0x00082eb1) list_single_recal_day_pane_ParamLimits

0x2ff5,	// (0x00082eb1) list_single_recal_day_pane

0x3007,	// (0x00082ec3) list_single_recal_day_pane_g1_ParamLimits

0x3007,	// (0x00082ec3) list_single_recal_day_pane_g1

0x3013,	// (0x00082ecf) list_single_recal_day_pane_g2_ParamLimits

0x3013,	// (0x00082ecf) list_single_recal_day_pane_g2

0x301f,	// (0x00082edb) list_single_recal_day_pane_g3_ParamLimits

0x301f,	// (0x00082edb) list_single_recal_day_pane_g3

0xd13e,	// (0x0008cffa) list_single_recal_day_pane_g4_ParamLimits

0xd13e,	// (0x0008cffa) list_single_recal_day_pane_g4

0x302b,	// (0x00082ee7) list_single_recal_day_pane_g5_ParamLimits

0x302b,	// (0x00082ee7) list_single_recal_day_pane_g5

0x3037,	// (0x00082ef3) list_single_recal_day_pane_g6_ParamLimits

0x3037,	// (0x00082ef3) list_single_recal_day_pane_g6

0x0005,

0xfe3d,	// (0x0008fcf9) list_single_recal_day_pane_g_ParamLimits

0xfe3d,	// (0x0008fcf9) list_single_recal_day_pane_g

0x3043,	// (0x00082eff) list_single_recal_day_pane_t1

0x3051,	// (0x00082f0d) list_single_recal_day_pane_t2

0x0001,

0xfe4a,	// (0x0008fd06) list_single_recal_day_pane_t

0xd14c,	// (0x0008d008) ncimui_query_button_pane_ParamLimits

0xd14c,	// (0x0008d008) ncimui_query_button_pane

0xd15c,	// (0x0008d018) ncimui_query_button_pane_t1_ParamLimits

0xd15c,	// (0x0008d018) ncimui_query_button_pane_t1

0x305f,	// (0x00082f1b) ncimui_query_button_pane_t2_ParamLimits

0x305f,	// (0x00082f1b) ncimui_query_button_pane_t2

0x0001,

0xfe4f,	// (0x0008fd0b) ncimui_query_button_pane_t_ParamLimits

0xfe4f,	// (0x0008fd0b) ncimui_query_button_pane_t

0xd16f,	// (0x0008d02b) query_button_pane_ParamLimits

0xd16f,	// (0x0008d02b) query_button_pane

0x021b,	// (0x000800d7) bg_button_pane_cp0028

0x3072,	// (0x00082f2e) query_button_pane_t1

0x896a,	// (0x00088826) main_tport_pane_ParamLimits

0xcc54,	// (0x0008cb10) bg_popup_window_pane_cp01_ParamLimits

0xcc54,	// (0x0008cb10) bg_popup_window_pane_cp01

0xcc61,	// (0x0008cb1d) heading_pane_cp08_ParamLimits

0xcc61,	// (0x0008cb1d) heading_pane_cp08

0xcc6f,	// (0x0008cb2b) heading_pane_cp07_ParamLimits

0xcc6f,	// (0x0008cb2b) heading_pane_cp07

0x2b89,	// (0x00082a45) cell_tport_appsw_pane_g2

0x0002,

0xfd9b,	// (0x0008fc57) cell_tport_appsw_pane_g

0x8077,	// (0x00087f33) input_candi_list_open_g1

0x4628,	// (0x000844e4) list_cale_time_pane_g6_ParamLimits

0x4628,	// (0x000844e4) list_cale_time_pane_g6

0x93cf,	// (0x0008928b) aid_size_touch_calib_1_ParamLimits

0x93cf,	// (0x0008928b) aid_size_touch_calib_1

0x93db,	// (0x00089297) aid_size_touch_calib_2_ParamLimits

0x93db,	// (0x00089297) aid_size_touch_calib_2

0x93e9,	// (0x000892a5) aid_size_touch_calib_3_ParamLimits

0x93e9,	// (0x000892a5) aid_size_touch_calib_3

0x93f9,	// (0x000892b5) aid_size_touch_calib_4_ParamLimits

0x93f9,	// (0x000892b5) aid_size_touch_calib_4

0x9407,	// (0x000892c3) main_touch_calib_button_group_pane_ParamLimits

0x9407,	// (0x000892c3) main_touch_calib_button_group_pane

0x9415,	// (0x000892d1) main_touch_calib_pane_g1_ParamLimits

0x9421,	// (0x000892dd) main_touch_calib_pane_g2_ParamLimits

0x942d,	// (0x000892e9) main_touch_calib_pane_g3_ParamLimits

0x9439,	// (0x000892f5) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0008f631) main_touch_calib_pane_g_ParamLimits

0x9445,	// (0x00089301) main_touch_calib_pane_t1_ParamLimits

0x945c,	// (0x00089318) main_touch_calib_pane_t2_ParamLimits

0x9473,	// (0x0008932f) main_touch_calib_pane_t3_ParamLimits

0x9487,	// (0x00089343) main_touch_calib_pane_t4_ParamLimits

0x949d,	// (0x00089359) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0008f63a) main_touch_calib_pane_t_ParamLimits

0x0eba,	// (0x00080d76) list_single_fp_cale_pane_g3_ParamLimits

0x0eba,	// (0x00080d76) list_single_fp_cale_pane_g3

0xa95b,	// (0x0008a817) bg_button_pane_cp012_ParamLimits

0xa95b,	// (0x0008a817) bg_vkb2_func_pane_cp03_ParamLimits

0xb308,	// (0x0008b1c4) cell_vitu2_function_top_pane_g1_ParamLimits

0xa95b,	// (0x0008a817) bg_vkb2_func_pane_cp04_ParamLimits

0xc1ac,	// (0x0008c068) main_ncimui_button_group_pane_ParamLimits

0xc1ac,	// (0x0008c068) main_ncimui_button_group_pane

0xc1fe,	// (0x0008c0ba) main_ncimui_pane_t3_ParamLimits

0xc1fe,	// (0x0008c0ba) main_ncimui_pane_t3

0x2ca4,	// (0x00082b60) phacti_button_group_pane

0x2fab,	// (0x00082e67) aid_size_list_single_double_ParamLimits

0xd0c4,	// (0x0008cf80) popup_ezdial_listscroll_window_ParamLimits

0xd0e4,	// (0x0008cfa0) popup_number_entry_window_cp01_ParamLimits

0xd17c,	// (0x0008d038) phacti_button_pane_ParamLimits

0xd17c,	// (0x0008d038) phacti_button_pane

0x021b,	// (0x000800d7) bg_button_pane_cp14

0x3080,	// (0x00082f3c) phacti_button_pane_t1

0xd18d,	// (0x0008d049) main_touch_calib_button_pane_ParamLimits

0xd18d,	// (0x0008d049) main_touch_calib_button_pane

0x4083,	// (0x00083f3f) bg_button_pane_cp18_ParamLimits

0x4083,	// (0x00083f3f) bg_button_pane_cp18

0x308e,	// (0x00082f4a) main_touch_calib_button_pane_t1_ParamLimits

0x308e,	// (0x00082f4a) main_touch_calib_button_pane_t1

0x30a4,	// (0x00082f60) main_touch_calib_button_pane_t2_ParamLimits

0x30a4,	// (0x00082f60) main_touch_calib_button_pane_t2

0x0001,

0xfe54,	// (0x0008fd10) main_touch_calib_button_pane_t_ParamLimits

0xfe54,	// (0x0008fd10) main_touch_calib_button_pane_t

0x021b,	// (0x000800d7) cell_ncimui_button_pane

0x021b,	// (0x000800d7) bg_button_pane_cp032

0x30c2,	// (0x00082f7e) cell_ncimui_button_pane_t1

0xa569,	// (0x0008a425) image3_infobar_pane_ParamLimits

0xa569,	// (0x0008a425) image3_infobar_pane

0xc56e,	// (0x0008c42a) fs_bigclock_status_pane_ParamLimits

0xc56e,	// (0x0008c42a) fs_bigclock_status_pane

0xc57b,	// (0x0008c437) main_fs_bigclock_clock_pane_ParamLimits

0xc57b,	// (0x0008c437) main_fs_bigclock_clock_pane

0xc58b,	// (0x0008c447) main_fs_bigclock_indi_pane_ParamLimits

0xc58b,	// (0x0008c447) main_fs_bigclock_indi_pane

0xc5bd,	// (0x0008c479) main_fs_bigclock_swipe_pane_ParamLimits

0xc5bd,	// (0x0008c479) main_fs_bigclock_swipe_pane

0x021b,	// (0x000800d7) main_fs_clock_dumped_data

0x2535,	// (0x000823f1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x2535,	// (0x000823f1) list_single_fs_bigclock_indicator_pane_g1

0x2555,	// (0x00082411) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x2555,	// (0x00082411) list_single_fs_bigclock_indicator_pane_g2

0x256f,	// (0x0008242b) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x256f,	// (0x0008242b) list_single_fs_bigclock_indicator_pane_g3

0x258b,	// (0x00082447) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x258b,	// (0x00082447) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc87,	// (0x0008fb43) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc87,	// (0x0008fb43) list_single_fs_bigclock_indicator_pane_g

0x25b1,	// (0x0008246d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x25b1,	// (0x0008246d) list_single_fs_bigclock_indicator_pane_t1

0x25d9,	// (0x00082495) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x25d9,	// (0x00082495) list_single_fs_bigclock_indicator_pane_t2

0x2601,	// (0x000824bd) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2601,	// (0x000824bd) list_single_fs_bigclock_indicator_pane_t3

0x262b,	// (0x000824e7) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x262b,	// (0x000824e7) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc92,	// (0x0008fb4e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc92,	// (0x0008fb4e) list_single_fs_bigclock_indicator_pane_t

0x30d0,	// (0x00082f8c) image3_infobar_fav_pane_ParamLimits

0x30d0,	// (0x00082f8c) image3_infobar_fav_pane

0x30e0,	// (0x00082f9c) image3_infobar_loc_pane_ParamLimits

0x30e0,	// (0x00082f9c) image3_infobar_loc_pane

0x30f6,	// (0x00082fb2) image3_infobar_time_pane_ParamLimits

0x30f6,	// (0x00082fb2) image3_infobar_time_pane

0x0af8,	// (0x000809b4) image3_infobar_time_pane_g1

0x3106,	// (0x00082fc2) image3_infobar_time_pane_t1

0x0af8,	// (0x000809b4) image3_infobar_loc_pane_g1

0x3114,	// (0x00082fd0) image3_infobar_loc_pane_g2

0x0001,

0xfe59,	// (0x0008fd15) image3_infobar_loc_pane_g

0x311c,	// (0x00082fd8) image3_infobar_loc_pane_t1

0x0af8,	// (0x000809b4) image3_infobar_fav_pane_g1

0x312a,	// (0x00082fe6) image3_infobar_fav_pane_g2

0x0001,

0xfe5e,	// (0x0008fd1a) image3_infobar_fav_pane_g

0x3132,	// (0x00082fee) fs_bigclock_status_battery_pane

0x313b,	// (0x00082ff7) fs_bigclock_status_signal_pane

0x3144,	// (0x00083000) fs_bigclock_status_title_pane

0x314d,	// (0x00083009) fs_bigclock_status_signal_pane_g1

0x3156,	// (0x00083012) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe63,	// (0x0008fd1f) fs_bigclock_status_signal_pane_g

0x315e,	// (0x0008301a) fs_bigclock_status_battery_pane_g1

0x3167,	// (0x00083023) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe68,	// (0x0008fd24) fs_bigclock_status_battery_pane_g

0x316f,	// (0x0008302b) fs_bigclock_status_title_pane_t1

0x0af8,	// (0x000809b4) main_fs_bigclock_clock_pane_g1

0x317d,	// (0x00083039) main_fs_bigclock_clock_pane_g2

0x317d,	// (0x00083039) main_fs_bigclock_clock_pane_g3

0x317d,	// (0x00083039) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6d,	// (0x0008fd29) main_fs_bigclock_clock_pane_g

0x3189,	// (0x00083045) main_fs_bigclock_clock_pane_t1

0x3197,	// (0x00083053) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe76,	// (0x0008fd32) main_fs_bigclock_clock_pane_t

0x31a6,	// (0x00083062) list_single_fs_bigclock_indicator_pane_ParamLimits

0x31a6,	// (0x00083062) list_single_fs_bigclock_indicator_pane

0xd19f,	// (0x0008d05b) list_single_fs_bigclock_pane_ParamLimits

0xd19f,	// (0x0008d05b) list_single_fs_bigclock_pane

0x31c0,	// (0x0008307c) main_fs_bigclock_indicator_pane_t1

0x31cf,	// (0x0008308b) list_single_fs_bigclock_pane_g1

0x31d7,	// (0x00083093) list_single_fs_bigclock_pane_t1

0x0af8,	// (0x000809b4) main_fs_bigclock_swipe_pane_g1

0x3215,	// (0x000830d1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe87,	// (0x0008fd43) main_fs_bigclock_swipe_pane_g

0x321d,	// (0x000830d9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x321d,	// (0x000830d9) main_fs_bigclock_swipe_pane_t1

0x77ed,	// (0x000876a9) call_type_pane_ParamLimits

0x021b,	// (0x000800d7) main_btmg_pane

0x2e94,	// (0x00082d50) list_single_cale_mrui_row_pane_g2_ParamLimits

0x2e94,	// (0x00082d50) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfa,	// (0x0008fcb6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfa,	// (0x0008fcb6) list_single_cale_mrui_row_pane_g

0x2fe5,	// (0x00082ea1) list_recal_vselct_arw_lo_pane

0x2fed,	// (0x00082ea9) list_recal_vselct_arw_up_pane

0x3dcd,	// (0x00083c89) list_recal_vselct_pane

0x323a,	// (0x000830f6) btmg_button_pane

0xd202,	// (0x0008d0be) main_btmg_pane_g1

0x021b,	// (0x000800d7) bg_button_pane_cp044

0x3244,	// (0x00083100) btmg_button_pane_t1

0xefc9,	// (0x0008ee85) aid_listscroll_gen

0x0294,	// (0x00080150) main_cntbar_detail_pane

0x2b9f,	// (0x00082a5b) list_cmail_folder_pane

0x2baf,	// (0x00082a6b) sp_fs_scroll_pane_cp03_ParamLimits

0x35e3,	// (0x0008349f) list_single_fs_dyc_pane_cp01_ParamLimits

0x35e3,	// (0x0008349f) list_single_fs_dyc_pane_cp01

0x3252,	// (0x0008310e) aid_size_cmail_indent

0x325b,	// (0x00083117) list_single_dyc_row_pane_cp01

0xd22a,	// (0x0008d0e6) cntbar_detail_list_pane_ParamLimits

0xd22a,	// (0x0008d0e6) cntbar_detail_list_pane

0xd26a,	// (0x0008d126) main_cntbar_detail_cont_pane_ParamLimits

0xd26a,	// (0x0008d126) main_cntbar_detail_cont_pane

0x7787,	// (0x00087643) scroll_pane_cp032_ParamLimits

0x7787,	// (0x00087643) scroll_pane_cp032

0xd276,	// (0x0008d132) cntbar_detail_list_event_pane_ParamLimits

0xd276,	// (0x0008d132) cntbar_detail_list_event_pane

0xd238,	// (0x0008d0f4) cntbar_detail_list_shct_pane

0x44db,	// (0x00084397) aid_list_gen

0x3264,	// (0x00083120) aid_scroll

0x326d,	// (0x00083129) aid_size_touch_scroll_bar

0x3276,	// (0x00083132) aid_list_double

0x327f,	// (0x0008313b) aid_list_single

0xd286,	// (0x0008d142) aid_list_single_lg

0x3288,	// (0x00083144) aid_list_z_g_a_sm

0x39fe,	// (0x000838ba) aid_list_z_g_d

0x3290,	// (0x0008314c) aid_txt_z_prm

0x329e,	// (0x0008315a) aid_txt_z_prm_cp01

0x32ac,	// (0x00083168) aid_txt_z_sec

0xd28f,	// (0x0008d14b) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd28f,	// (0x0008d14b) main_cntbar_detail_cont_pane_g1

0xd29c,	// (0x0008d158) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd29c,	// (0x0008d158) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8c,	// (0x0008fd48) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8c,	// (0x0008fd48) main_cntbar_detail_cont_pane_g

0x32ba,	// (0x00083176) main_cntbar_detail_cont_pane_t1

0x32c8,	// (0x00083184) main_cntbar_detail_cont_pane_t2

0x32d6,	// (0x00083192) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe91,	// (0x0008fd4d) main_cntbar_detail_cont_pane_t

0xd2a8,	// (0x0008d164) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd2a8,	// (0x0008d164) cell_cntbar_detail_list_shct_pane

0x32e4,	// (0x000831a0) cntbar_detail_list_shct_pane_g1

0x32ed,	// (0x000831a9) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe98,	// (0x0008fd54) cntbar_detail_list_shct_pane_g

0xd2bc,	// (0x0008d178) cntbar_detail_list_event_pane_g1_ParamLimits

0xd2bc,	// (0x0008d178) cntbar_detail_list_event_pane_g1

0xd2c8,	// (0x0008d184) cntbar_detail_list_event_pane_g2_ParamLimits

0xd2c8,	// (0x0008d184) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9d,	// (0x0008fd59) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9d,	// (0x0008fd59) cntbar_detail_list_event_pane_g

0xd336,	// (0x0008d1f2) cntbar_detail_list_event_pane_t1_ParamLimits

0xd336,	// (0x0008d1f2) cntbar_detail_list_event_pane_t1

0xd34b,	// (0x0008d207) cntbar_detail_list_event_pane_t2_ParamLimits

0xd34b,	// (0x0008d207) cntbar_detail_list_event_pane_t2

0x0002,

0xfeaa,	// (0x0008fd66) cntbar_detail_list_event_pane_t_ParamLimits

0xfeaa,	// (0x0008fd66) cntbar_detail_list_event_pane_t

0x0af8,	// (0x000809b4) cell_cntbar_detail_list_shct_pane_g1

0x7b85,	// (0x00087a41) navi_pane_mv_g3

0x0294,	// (0x00080150) main_cntbar_detail_pane_ParamLimits

0x021b,	// (0x000800d7) main_notif_wgt_pane

0xa23d,	// (0x0008a0f9) aid_tch_main_mp4_pane_g4

0xa452,	// (0x0008a30e) popup_slider_window_cp02

0x2fdc,	// (0x00082e98) list_recal_day_event_pane

0xd20a,	// (0x0008d0c6) cntbar_detail_btn_pane_ParamLimits

0xd20a,	// (0x0008d0c6) cntbar_detail_btn_pane

0xd21a,	// (0x0008d0d6) cntbar_detail_btn_pane_cp01_ParamLimits

0xd21a,	// (0x0008d0d6) cntbar_detail_btn_pane_cp01

0xd238,	// (0x0008d0f4) cntbar_detail_list_shct_pane_ParamLimits

0xd244,	// (0x0008d100) cntbar_detail_pane_g1_ParamLimits

0xd244,	// (0x0008d100) cntbar_detail_pane_g1

0xd254,	// (0x0008d110) cntbar_detail_pane_t1_ParamLimits

0xd254,	// (0x0008d110) cntbar_detail_pane_t1

0xd2d4,	// (0x0008d190) cntbar_detail_list_event_pane_g3_ParamLimits

0xd2d4,	// (0x0008d190) cntbar_detail_list_event_pane_g3

0xd2ec,	// (0x0008d1a8) cntbar_detail_list_event_pane_g4_ParamLimits

0xd2ec,	// (0x0008d1a8) cntbar_detail_list_event_pane_g4

0xd304,	// (0x0008d1c0) cntbar_detail_list_event_pane_g5_ParamLimits

0xd304,	// (0x0008d1c0) cntbar_detail_list_event_pane_g5

0xd31c,	// (0x0008d1d8) cntbar_detail_list_event_pane_g6_ParamLimits

0xd31c,	// (0x0008d1d8) cntbar_detail_list_event_pane_g6

0xd360,	// (0x0008d21c) cntbar_detail_list_event_pane_t3_ParamLimits

0xd360,	// (0x0008d21c) cntbar_detail_list_event_pane_t3

0xd372,	// (0x0008d22e) popup_notif_wgt_window_ParamLimits

0xd372,	// (0x0008d22e) popup_notif_wgt_window

0xd382,	// (0x0008d23e) popup_submenu_window_cp01_ParamLimits

0xd382,	// (0x0008d23e) popup_submenu_window_cp01

0xdbc6,	// (0x0008da82) bg_popup_window_pane_cp10

0x32f6,	// (0x000831b2) listscroll_notif_wgt_pane

0x3300,	// (0x000831bc) list_notif_wgt_window

0x3309,	// (0x000831c5) scroll_pane_cp033

0x3312,	// (0x000831ce) list_notif_wgt_row_pane_ParamLimits

0x3312,	// (0x000831ce) list_notif_wgt_row_pane

0x3326,	// (0x000831e2) aid_size_list_notif_wgt_del

0x332f,	// (0x000831eb) list_notif_wgt_row_pane_g1

0x3337,	// (0x000831f3) list_notif_wgt_row_pane_g2

0x333f,	// (0x000831fb) list_notif_wgt_row_pane_g3

0x0002,

0xfeb1,	// (0x0008fd6d) list_notif_wgt_row_pane_g

0x3348,	// (0x00083204) list_notif_wgt_row_pane_t1

0x3356,	// (0x00083212) list_notif_wgt_row_pane_t2

0x3364,	// (0x00083220) list_notif_wgt_row_pane_t3

0x0002,

0xfeb8,	// (0x0008fd74) list_notif_wgt_row_pane_t

0x1852,	// (0x0008170e) list_recal_day_event_pane_g1

0x3372,	// (0x0008322e) list_recal_day_event_pane_t1

0x021b,	// (0x000800d7) bg_button_pane_cp045

0x3381,	// (0x0008323d) cntbar_detail_btn_pane_t1

0xefd1,	// (0x0008ee8d) main_callh_pane_ParamLimits

0xefd1,	// (0x0008ee8d) main_callh_pane

0x021b,	// (0x000800d7) main_coverflow0_pane

0x021b,	// (0x000800d7) main_wgtman_pane

0xc5d5,	// (0x0008c491) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc5d5,	// (0x0008c491) main_fs_bigclock_unlock_btn_pane

0x2b81,	// (0x00082a3d) bg_button_pane_cp16

0xccda,	// (0x0008cb96) cell_tport_appsw_pane_g3

0xd390,	// (0x0008d24c) cf0_flow_pane_ParamLimits

0xd390,	// (0x0008d24c) cf0_flow_pane

0x338f,	// (0x0008324b) listscroll_cf0_pane

0x3398,	// (0x00083254) main_cf0_pane_g1

0xd39f,	// (0x0008d25b) main_cf0_pane_t1_ParamLimits

0xd39f,	// (0x0008d25b) main_cf0_pane_t1

0xd3b3,	// (0x0008d26f) main_cf0_pane_t2_ParamLimits

0xd3b3,	// (0x0008d26f) main_cf0_pane_t2

0x0001,

0xfebf,	// (0x0008fd7b) main_cf0_pane_t_ParamLimits

0xfebf,	// (0x0008fd7b) main_cf0_pane_t

0x33a2,	// (0x0008325e) scroll_pane_cp11

0xd3c7,	// (0x0008d283) cf0_flow_pane_g1

0xd3cf,	// (0x0008d28b) cf0_flow_pane_g2

0x0001,

0xfec4,	// (0x0008fd80) cf0_flow_pane_g

0xd3d7,	// (0x0008d293) cf0_flow_pane_t1

0x021b,	// (0x000800d7) main_call6_pane

0x021b,	// (0x000800d7) main_calllock_pane

0xd3e5,	// (0x0008d2a1) call6_btn_grp_pane_ParamLimits

0xd3e5,	// (0x0008d2a1) call6_btn_grp_pane

0xd3f4,	// (0x0008d2b0) call6_pane_g1_ParamLimits

0xd3f4,	// (0x0008d2b0) call6_pane_g1

0xd404,	// (0x0008d2c0) popup_call6_1st_window_ParamLimits

0xd404,	// (0x0008d2c0) popup_call6_1st_window

0xd412,	// (0x0008d2ce) popup_call6_2nd_window_ParamLimits

0xd412,	// (0x0008d2ce) popup_call6_2nd_window

0xd420,	// (0x0008d2dc) cell_call6_btn_pane_ParamLimits

0xd420,	// (0x0008d2dc) cell_call6_btn_pane

0xdbc6,	// (0x0008da82) bg_popup_call2_in_pane_cp03

0x33ad,	// (0x00083269) popup_call6_1st_window_g1

0x33b5,	// (0x00083271) popup_call6_1st_window_g2

0x33bd,	// (0x00083279) popup_call6_1st_window_g3

0x0002,

0xfec9,	// (0x0008fd85) popup_call6_1st_window_g

0x33c5,	// (0x00083281) popup_call6_1st_window_t1

0x33d4,	// (0x00083290) popup_call6_1st_window_t2

0x33e4,	// (0x000832a0) popup_call6_1st_window_t3

0x0002,

0xfed0,	// (0x0008fd8c) popup_call6_1st_window_t

0xdbc6,	// (0x0008da82) bg_popup_call2_in_pane_cp04

0x33ad,	// (0x00083269) popup_call6_2nd_window_g1

0x33b5,	// (0x00083271) popup_call6_2nd_window_g2

0x33bd,	// (0x00083279) popup_call6_2nd_window_g3

0x0002,

0xfec9,	// (0x0008fd85) popup_call6_2nd_window_g

0x33c5,	// (0x00083281) popup_call6_2nd_window_t1

0x021b,	// (0x000800d7) bg_button_pane_cp15

0x33f4,	// (0x000832b0) cell_call6_btn_pane_g1

0x33fd,	// (0x000832b9) cell_call6_btn_pane_t1

0xd42f,	// (0x0008d2eb) listscroll_wgtman_pane_ParamLimits

0xd42f,	// (0x0008d2eb) listscroll_wgtman_pane

0xd44d,	// (0x0008d309) wgtman_btn_pane_ParamLimits

0xd44d,	// (0x0008d309) wgtman_btn_pane

0xda8c,	// (0x0008d948) aid_scroll_copy1

0x340c,	// (0x000832c8) list_wgtman_pane

0xd482,	// (0x0008d33e) wgtman_btn_pane_g1_ParamLimits

0xd482,	// (0x0008d33e) wgtman_btn_pane_g1

0xd4aa,	// (0x0008d366) wgtman_btn_pane_t1_ParamLimits

0xd4aa,	// (0x0008d366) wgtman_btn_pane_t1

0x3416,	// (0x000832d2) wgtman_btn_pane_t2_ParamLimits

0x3416,	// (0x000832d2) wgtman_btn_pane_t2

0x0001,

0xfed7,	// (0x0008fd93) wgtman_btn_pane_t_ParamLimits

0xfed7,	// (0x0008fd93) wgtman_btn_pane_t

0x342d,	// (0x000832e9) listrow_wgtman_pane_ParamLimits

0x342d,	// (0x000832e9) listrow_wgtman_pane

0x3441,	// (0x000832fd) listrow_wgtman_pane_g1

0xd4e1,	// (0x0008d39d) listrow_wgtman_pane_g2

0x0001,

0xfedc,	// (0x0008fd98) listrow_wgtman_pane_g

0x344a,	// (0x00083306) listrow_wgtman_pane_t1

0x3458,	// (0x00083314) listrow_wgtman_pane_t2

0x0001,

0xfee1,	// (0x0008fd9d) listrow_wgtman_pane_t

0x3466,	// (0x00083322) wait_bar_pane_cp09

0x346e,	// (0x0008332a) main_calllock_btn_pane

0x3478,	// (0x00083334) main_calllock_pane_g1

0x021b,	// (0x000800d7) bg_button_pane_cp17

0x3484,	// (0x00083340) main_calllock_btn_pane_g1

0x348d,	// (0x00083349) main_calllock_btn_pane_t1

0x021b,	// (0x000800d7) main_dialer3_pane

0x021b,	// (0x000800d7) main_fmrd2_pane

0x0af8,	// (0x000809b4) main_fs_bigclock_unlock_btn_pane_g1

0x34a4,	// (0x00083360) main_fs_bigclock_unlock_btn_pane_t1

0xd4eb,	// (0x0008d3a7) area_fmrd2_info_pane_ParamLimits

0xd4eb,	// (0x0008d3a7) area_fmrd2_info_pane

0xd4f9,	// (0x0008d3b5) area_fmrd2_visual_pane_ParamLimits

0xd4f9,	// (0x0008d3b5) area_fmrd2_visual_pane

0xd507,	// (0x0008d3c3) fmrd2_indi_pane_ParamLimits

0xd507,	// (0x0008d3c3) fmrd2_indi_pane

0xd514,	// (0x0008d3d0) area_fmrd2_visual_pane_g1

0xd51c,	// (0x0008d3d8) area_fmrd2_visual_pane_t1

0xd52c,	// (0x0008d3e8) area_fmrd2_visual_pane_t2

0xd53c,	// (0x0008d3f8) area_fmrd2_visual_pane_t3

0x0002,

0xfeeb,	// (0x0008fda7) area_fmrd2_visual_pane_t

0xd54c,	// (0x0008d408) area_fmrd2_info_pane_g1

0xd554,	// (0x0008d410) area_fmrd2_info_pane_t1

0xd564,	// (0x0008d420) area_fmrd2_info_pane_t2

0xd574,	// (0x0008d430) area_fmrd2_info_pane_t3

0xd584,	// (0x0008d440) area_fmrd2_info_pane_t4

0x0003,

0xfef2,	// (0x0008fdae) area_fmrd2_info_pane_t

0xd594,	// (0x0008d450) fmrd2_indi_pane_t1

0xd5a4,	// (0x0008d460) fmrd2_indi_pane_t2

0xd5b4,	// (0x0008d470) fmrd2_indi_pane_t3

0x0002,

0xfefb,	// (0x0008fdb7) fmrd2_indi_pane_t

0x259a,	// (0x00082456) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x259a,	// (0x00082456) list_single_fs_bigclock_indicator_pane_g5

0x2640,	// (0x000824fc) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x2640,	// (0x000824fc) list_single_fs_bigclock_indicator_pane_t5

0xce77,	// (0x0008cd33) aid_cell_bcale_month_pane_ParamLimits

0xce77,	// (0x0008cd33) aid_cell_bcale_month_pane

0xce83,	// (0x0008cd3f) bcale_month_pane_ParamLimits

0xce83,	// (0x0008cd3f) bcale_month_pane

0xce91,	// (0x0008cd4d) bcale_preview_pane_ParamLimits

0xce91,	// (0x0008cd4d) bcale_preview_pane

0x31d7,	// (0x00083093) list_single_fs_bigclock_pane_t1_ParamLimits

0x31f1,	// (0x000830ad) list_single_fs_bigclock_pane_t2_ParamLimits

0x31f1,	// (0x000830ad) list_single_fs_bigclock_pane_t2

0x0001,

0xfe82,	// (0x0008fd3e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0008fd3e) list_single_fs_bigclock_pane_t

0x349c,	// (0x00083358) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee6,	// (0x0008fda2) main_fs_bigclock_unlock_btn_pane_g

0xd5c4,	// (0x0008d480) aid_dia3_key_size_ParamLimits

0xd5c4,	// (0x0008d480) aid_dia3_key_size

0xd5d0,	// (0x0008d48c) aid_dia3_listrow_size_ParamLimits

0xd5d0,	// (0x0008d48c) aid_dia3_listrow_size

0xd5de,	// (0x0008d49a) dia3_keypad_fun_pane_ParamLimits

0xd5de,	// (0x0008d49a) dia3_keypad_fun_pane

0xd5ee,	// (0x0008d4aa) dia3_keypad_num_pane_ParamLimits

0xd5ee,	// (0x0008d4aa) dia3_keypad_num_pane

0xd5fe,	// (0x0008d4ba) dia3_listscroll_pane_ParamLimits

0xd5fe,	// (0x0008d4ba) dia3_listscroll_pane

0xd60e,	// (0x0008d4ca) dia3_numentry_pane_ParamLimits

0xd60e,	// (0x0008d4ca) dia3_numentry_pane

0x34b2,	// (0x0008336e) dia3_list_pane

0x34bd,	// (0x00083379) scroll_pane_cp12

0x021b,	// (0x000800d7) bg_dia3_numentry_pane

0x34c8,	// (0x00083384) dia3_numentry_pane_t1

0xd61e,	// (0x0008d4da) cell_dia3_key_num_pane

0xd626,	// (0x0008d4e2) cell_dia3_key0_fun_pane_ParamLimits

0xd626,	// (0x0008d4e2) cell_dia3_key0_fun_pane

0xd633,	// (0x0008d4ef) cell_dia3_key1_fun_pane_ParamLimits

0xd633,	// (0x0008d4ef) cell_dia3_key1_fun_pane

0xd640,	// (0x0008d4fc) dia3_listrow_pane

0x22a0,	// (0x0008215c) bg_dia3_numentry_pane_g1

0x021b,	// (0x000800d7) bg_button_pane_cp21

0x34d7,	// (0x00083393) cell_dia3_key_num_pane_t1

0x34e5,	// (0x000833a1) cell_dia3_key_num_pane_t2

0x34f4,	// (0x000833b0) cell_dia3_key_num_pane_t3

0x3503,	// (0x000833bf) cell_dia3_key_num_pane_t4

0x0003,

0xff02,	// (0x0008fdbe) cell_dia3_key_num_pane_t

0x021b,	// (0x000800d7) bg_button_pane_cp19

0xd64d,	// (0x0008d509) cell_dia3_key0_fun_pane_g1

0x021b,	// (0x000800d7) bg_button_pane_cp20

0xd655,	// (0x0008d511) cell_dia3_key1_fun_pane_g1

0xd65d,	// (0x0008d519) area_left_week_number_pane

0xd666,	// (0x0008d522) area_top_day_name_pane

0xd66f,	// (0x0008d52b) frame_month_view_pane

0xd679,	// (0x0008d535) grid_month_view_pane

0xd683,	// (0x0008d53f) cell_top_day_name_pane_ParamLimits

0xd683,	// (0x0008d53f) cell_top_day_name_pane

0xd69f,	// (0x0008d55b) cell_area_left_week_number_pane_ParamLimits

0xd69f,	// (0x0008d55b) cell_area_left_week_number_pane

0xd6b3,	// (0x0008d56f) cell_month_view_pane_ParamLimits

0xd6b3,	// (0x0008d56f) cell_month_view_pane

0x3512,	// (0x000833ce) frm_month_g1

0xd6d2,	// (0x0008d58e) frm_month_g2

0xd6dc,	// (0x0008d598) frm_month_g3

0xd6e6,	// (0x0008d5a2) frm_month_g4

0xd6f0,	// (0x0008d5ac) frm_month_g5

0xd6fa,	// (0x0008d5b6) frm_month_g6

0xd704,	// (0x0008d5c0) frm_month_g7

0x351b,	// (0x000833d7) frm_month_g8

0xd70e,	// (0x0008d5ca) frm_month_g9

0xd717,	// (0x0008d5d3) frm_month_g10

0xd720,	// (0x0008d5dc) frm_month_g11

0xd729,	// (0x0008d5e5) frm_month_g12

0xd732,	// (0x0008d5ee) frm_month_g13

0xd73d,	// (0x0008d5f9) frm_month_g14

0xd748,	// (0x0008d604) frm_month_g15

0xd753,	// (0x0008d60f) frm_month_g16

0x000f,

0xff0b,	// (0x0008fdc7) frm_month_g

0xd75e,	// (0x0008d61a) cell_top_day_name_pane_t1

0xd76d,	// (0x0008d629) cell_area_left_week_number_pane_g1

0xd75e,	// (0x0008d61a) cell_area_left_week_number_pane_t1

0x0af8,	// (0x000809b4) cell_month_view_pane_g1

0xd775,	// (0x0008d631) cell_month_view_pane_t1

0x021b,	// (0x000800d7) main_fps_pane

0x28cc,	// (0x00082788) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x28cc,	// (0x00082788) cmail_ddmenu_btn02_pane_cp1

0x28e8,	// (0x000827a4) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x28e8,	// (0x000827a4) cmail_ddmenu_btn02_pane_cp2

0xd10e,	// (0x0008cfca) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd10e,	// (0x0008cfca) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe33,	// (0x0008fcef) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe33,	// (0x0008fcef) cmail_ddmenu_btn02_pane_g

0xd12c,	// (0x0008cfe8) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd12c,	// (0x0008cfe8) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe38,	// (0x0008fcf4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe38,	// (0x0008fcf4) cmail_ddmenu_btn02_pane_t

0xd784,	// (0x0008d640) fps_text_pane_ParamLimits

0xd784,	// (0x0008d640) fps_text_pane

0xd791,	// (0x0008d64d) main_fps_pane_g1_ParamLimits

0xd791,	// (0x0008d64d) main_fps_pane_g1

0xd79d,	// (0x0008d659) wait_bar_pane_cp010_ParamLimits

0xd79d,	// (0x0008d659) wait_bar_pane_cp010

0xd7a9,	// (0x0008d665) fps_text_pane_t1_ParamLimits

0xd7a9,	// (0x0008d665) fps_text_pane_t1

0xa846,	// (0x0008a702) cam4_image_uncrop_pane_g1

0xa84f,	// (0x0008a70b) cam4_image_uncrop_pane_g2

0xa858,	// (0x0008a714) cam4_image_uncrop_pane_g3

0xa861,	// (0x0008a71d) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0008f7c9) cam4_image_uncrop_pane_g

0xd640,	// (0x0008d4fc) dia3_listrow_pane_ParamLimits

0x021b,	// (0x000800d7) main_phob2_pane

0xccb4,	// (0x0008cb70) cell_tport_appsw_pane_cp02_ParamLimits

0xccb4,	// (0x0008cb70) cell_tport_appsw_pane_cp02

0xccc3,	// (0x0008cb7f) cell_tport_appsw_pane_cp03_ParamLimits

0xccc3,	// (0x0008cb7f) cell_tport_appsw_pane_cp03

0x021b,	// (0x000800d7) phob2_contact_card_pane

0x021b,	// (0x000800d7) phob2_listscroll_pane

0x3524,	// (0x000833e0) phob2_list_pane

0x352c,	// (0x000833e8) scroll_pane_cp034

0xd7c2,	// (0x0008d67e) phob2_cc_data_pane_ParamLimits

0xd7c2,	// (0x0008d67e) phob2_cc_data_pane

0xd7de,	// (0x0008d69a) phob2_cc_listscroll_pane_ParamLimits

0xd7de,	// (0x0008d69a) phob2_cc_listscroll_pane

0xd7fa,	// (0x0008d6b6) list_double_large_graphic_phob2_pane_ParamLimits

0xd7fa,	// (0x0008d6b6) list_double_large_graphic_phob2_pane

0xd814,	// (0x0008d6d0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd814,	// (0x0008d6d0) list_double_large_graphic_phob2_pane_g1

0xd821,	// (0x0008d6dd) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd821,	// (0x0008d6dd) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2c,	// (0x0008fde8) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2c,	// (0x0008fde8) list_double_large_graphic_phob2_pane_g

0xd82d,	// (0x0008d6e9) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd82d,	// (0x0008d6e9) list_double_large_graphic_phob2_pane_t1

0xd842,	// (0x0008d6fe) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd842,	// (0x0008d6fe) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff31,	// (0x0008fded) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff31,	// (0x0008fded) list_double_large_graphic_phob2_pane_t

0x021b,	// (0x000800d7) list_highlight_pane_cp024

0x3534,	// (0x000833f0) phob2_cc_button_pane

0xd854,	// (0x0008d710) phob2_cc_data_pane_g1_ParamLimits

0xd854,	// (0x0008d710) phob2_cc_data_pane_g1

0xd860,	// (0x0008d71c) phob2_cc_data_pane_g2_ParamLimits

0xd860,	// (0x0008d71c) phob2_cc_data_pane_g2

0x0001,

0xff36,	// (0x0008fdf2) phob2_cc_data_pane_g_ParamLimits

0xff36,	// (0x0008fdf2) phob2_cc_data_pane_g

0xd86c,	// (0x0008d728) phob2_cc_data_pane_t1_ParamLimits

0xd86c,	// (0x0008d728) phob2_cc_data_pane_t1

0xd87e,	// (0x0008d73a) phob2_cc_data_pane_t2_ParamLimits

0xd87e,	// (0x0008d73a) phob2_cc_data_pane_t2

0xd890,	// (0x0008d74c) phob2_cc_data_pane_t3_ParamLimits

0xd890,	// (0x0008d74c) phob2_cc_data_pane_t3

0x0002,

0xff3b,	// (0x0008fdf7) phob2_cc_data_pane_t_ParamLimits

0xff3b,	// (0x0008fdf7) phob2_cc_data_pane_t

0x353c,	// (0x000833f8) phob2_cc_list_pane_ParamLimits

0x353c,	// (0x000833f8) phob2_cc_list_pane

0x18fd,	// (0x000817b9) scroll_pane_cp035_ParamLimits

0x18fd,	// (0x000817b9) scroll_pane_cp035

0x0294,	// (0x00080150) bg_button_pane_cp033

0x3548,	// (0x00083404) phob2_cc_button_pane_g1

0x3554,	// (0x00083410) phob2_cc_button_pane_t1

0x3569,	// (0x00083425) phob2_cc_button_pane_t2

0x0001,

0xff42,	// (0x0008fdfe) phob2_cc_button_pane_t

0xd8a2,	// (0x0008d75e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd8a2,	// (0x0008d75e) list_double_large_graphic_phob2_cc_pane

0xd8c1,	// (0x0008d77d) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd8c1,	// (0x0008d77d) list_double_large_graphic_phob2_cc_pane_g1

0xd8d2,	// (0x0008d78e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd8d2,	// (0x0008d78e) list_double_large_graphic_phob2_cc_pane_g2

0xd8e1,	// (0x0008d79d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd8e1,	// (0x0008d79d) list_double_large_graphic_phob2_cc_pane_g3

0xd8f0,	// (0x0008d7ac) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd8f0,	// (0x0008d7ac) list_double_large_graphic_phob2_cc_pane_g4

0xd901,	// (0x0008d7bd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd901,	// (0x0008d7bd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff47,	// (0x0008fe03) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff47,	// (0x0008fe03) list_double_large_graphic_phob2_cc_pane_g

0xd910,	// (0x0008d7cc) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd910,	// (0x0008d7cc) list_double_large_graphic_phob2_cc_pane_t1

0xd939,	// (0x0008d7f5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd939,	// (0x0008d7f5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff52,	// (0x0008fe0e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff52,	// (0x0008fe0e) list_double_large_graphic_phob2_cc_pane_t

0x357b,	// (0x00083437) list_highlight_pane_cp025_ParamLimits

0x357b,	// (0x00083437) list_highlight_pane_cp025

0x0294,	// (0x00080150) bg_button_pane_cp033_ParamLimits

0x3548,	// (0x00083404) phob2_cc_button_pane_g1_ParamLimits

0x3554,	// (0x00083410) phob2_cc_button_pane_t1_ParamLimits

0x3569,	// (0x00083425) phob2_cc_button_pane_t2_ParamLimits

0xff42,	// (0x0008fdfe) phob2_cc_button_pane_t_ParamLimits

0x5a18,	// (0x000858d4) popup_wgtman_window

0x16fd,	// (0x000815b9) scroll_pane_cp038

0xd46a,	// (0x0008d326) wgtman_btn_pane_cp_01_ParamLimits

0xd46a,	// (0x0008d326) wgtman_btn_pane_cp_01

0x3589,	// (0x00083445) wgtman_content_pane

0x3592,	// (0x0008344e) wgtman_heading_pane

0x021b,	// (0x000800d7) bg_heading_pane_cp02

0x359b,	// (0x00083457) wgtman_heading_pane_g1

0x35a3,	// (0x0008345f) wgtman_heading_pane_t1

0x35b1,	// (0x0008346d) scroll_pane_cp036

0x35b9,	// (0x00083475) wgtman_list_pane

0x2722,	// (0x000825de) wgtman_list_pane_t1_ParamLimits

0x2722,	// (0x000825de) wgtman_list_pane_t1

0xa7a3,	// (0x0008a65f) cam4_grid_pane

0xb4cb,	// (0x0008b387) bg_button_pane_cp015_ParamLimits

0xb4dd,	// (0x0008b399) bg_button_pane_cp016_ParamLimits

0xb4f0,	// (0x0008b3ac) bg_button_pane_cp017_ParamLimits

0xb546,	// (0x0008b402) popup_vitu2_query_window_g3_ParamLimits

0xb546,	// (0x0008b402) popup_vitu2_query_window_g3

0xb605,	// (0x0008b4c1) popup_vitu2_query_window_t6_ParamLimits

0xb605,	// (0x0008b4c1) popup_vitu2_query_window_t6

0xb630,	// (0x0008b4ec) popup_vitu2_query_window_t7_ParamLimits

0xb630,	// (0x0008b4ec) popup_vitu2_query_window_t7

0x154f,	// (0x0008140b) cam4_grid_pane_g1

0x1558,	// (0x00081414) cam4_grid_pane_g2

0x35c1,	// (0x0008347d) cam4_grid_pane_g3

0x35ca,	// (0x00083486) cam4_grid_pane_g4

0x0003,

0xff57,	// (0x0008fe13) cam4_grid_pane_g

0x6835,	// (0x000866f1) aid_placing_vt_slider_lsc_ParamLimits

0x6b68,	// (0x00086a24) vidtel_button_pane_ParamLimits

0x6b68,	// (0x00086a24) vidtel_button_pane

0x021b,	// (0x000800d7) bg_button_pane_cp034

0xd962,	// (0x0008d81e) vidtel_button_pane_g1

0x35d5,	// (0x00083491) vidtel_button_pane_t1

0x181c,	// (0x000816d8) aid_size_vtel_slider_touch

0x18fd,	// (0x000817b9) scroll_pane_cp039

0x22de,	// (0x0008219a) ncim_query_button_pane_cp01_ParamLimits

0x22fd,	// (0x000821b9) ncimui_query_pane_g1_ParamLimits

0x0294,	// (0x00080150) input_focus_pane_cp012_ParamLimits

0x2322,	// (0x000821de) ncim_query_entry_pane_t1_ParamLimits

0x18fd,	// (0x000817b9) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Large
