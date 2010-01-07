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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008b856 };

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
0x0d60,	// (0x0008c5b6) Screen

0x0d6c,	// (0x0008c5c2) application_window

0x0dde,	// (0x0008c634) area_bottom_pane_ParamLimits

0x0dde,	// (0x0008c634) area_bottom_pane

0x0e3c,	// (0x0008c692) area_top_pane_ParamLimits

0x0e3c,	// (0x0008c692) area_top_pane

0x0e99,	// (0x0008c6ef) call_video_uplink_pane_ParamLimits

0x0e99,	// (0x0008c6ef) call_video_uplink_pane

0x0eca,	// (0x0008c720) main_pane_ParamLimits

0x0eca,	// (0x0008c720) main_pane

0xa776,	// (0x00095fcc) context_pane

0x4936,	// (0x0009018c) navi_pane

0x4966,	// (0x000901bc) popup_cale_events_window_ParamLimits

0x4966,	// (0x000901bc) popup_cale_events_window

0xa789,	// (0x00095fdf) popup_mup_playback_window

0x497e,	// (0x000901d4) signal_pane

0xe25d,	// (0x00099ab3) main_browser_pane

0xecb9,	// (0x0009a50f) main_burst_pane

0x4638,	// (0x0008fe8e) main_calc_pane

0xecb9,	// (0x0009a50f) main_cale_day_pane

0xe25d,	// (0x00099ab3) main_cale_month_pane

0xecb9,	// (0x0009a50f) main_cale_week_pane

0xecb9,	// (0x0009a50f) main_call_pane

0xdf37,	// (0x0009978d) main_call_poc_pane

0xecb9,	// (0x0009a50f) main_camera_pane

0xecb9,	// (0x0009a50f) main_chi_dic_pane

0xeb5b,	// (0x0009a3b1) main_clock_pane

0xdf37,	// (0x0009978d) main_fmradio_pane

0xecb9,	// (0x0009a50f) main_graph_messa_pane

0xdf37,	// (0x0009978d) main_help_pane

0xe25d,	// (0x00099ab3) main_im_pane

0xe192,	// (0x000999e8) main_image_pane_ParamLimits

0xe192,	// (0x000999e8) main_image_pane

0xdf37,	// (0x0009978d) main_location2_pane

0xecb9,	// (0x0009a50f) main_location_pane

0xdf37,	// (0x0009978d) main_messa_pane

0xdf37,	// (0x0009978d) main_mp2_pane

0xecb9,	// (0x0009a50f) main_mp_pane

0xdf37,	// (0x0009978d) main_msg_pane

0xdf37,	// (0x0009978d) main_mup_eq_pane

0xdf37,	// (0x0009978d) main_mup_pane

0xecb9,	// (0x0009a50f) main_notes_pane

0xdf37,	// (0x0009978d) main_pec_pane

0xdf37,	// (0x0009978d) main_phob_pane

0xdf37,	// (0x0009978d) main_pinb_pane

0xdf37,	// (0x0009978d) main_postcard_pane

0xdf37,	// (0x0009978d) main_qdial_pane

0xecb9,	// (0x0009a50f) main_skin_pane

0xdf37,	// (0x0009978d) main_smil2_pane

0xecb9,	// (0x0009a50f) main_smil_pane

0xecb9,	// (0x0009a50f) main_video_pane

0xecb9,	// (0x0009a50f) main_video_tele_pane

0xe192,	// (0x000999e8) main_viewer_pane_ParamLimits

0xe192,	// (0x000999e8) main_viewer_pane

0xecb9,	// (0x0009a50f) main_vorec_pane

0x468e,	// (0x0008fee4) popup_blid_sat_info_window_ParamLimits

0x468e,	// (0x0008fee4) popup_blid_sat_info_window

0x46f2,	// (0x0008ff48) popup_dyc_status_message_window_ParamLimits

0x46f2,	// (0x0008ff48) popup_dyc_status_message_window

0x470c,	// (0x0008ff62) popup_grid_large_graphic_window_ParamLimits

0x470c,	// (0x0008ff62) popup_grid_large_graphic_window

0x47ce,	// (0x00090024) popup_loc_request_window_ParamLimits

0x47ce,	// (0x00090024) popup_loc_request_window

0x490a,	// (0x00090160) popup_wml_address_window_ParamLimits

0x490a,	// (0x00090160) popup_wml_address_window

0x4476,	// (0x0008fccc) call_muted_g1

0x39c1,	// (0x0008f217) popup_call_audio_conf_window_ParamLimits

0x39c1,	// (0x0008f217) popup_call_audio_conf_window

0x4486,	// (0x0008fcdc) popup_call_audio_first_window_ParamLimits

0x4486,	// (0x0008fcdc) popup_call_audio_first_window

0x44fc,	// (0x0008fd52) popup_call_audio_in_window_ParamLimits

0x44fc,	// (0x0008fd52) popup_call_audio_in_window

0x4538,	// (0x0008fd8e) popup_call_audio_out_window_ParamLimits

0x4538,	// (0x0008fd8e) popup_call_audio_out_window

0x4572,	// (0x0008fdc8) popup_call_audio_second_window_ParamLimits

0x4572,	// (0x0008fdc8) popup_call_audio_second_window

0x45c8,	// (0x0008fe1e) popup_call_audio_wait_window_ParamLimits

0x45c8,	// (0x0008fe1e) popup_call_audio_wait_window

0x45fd,	// (0x0008fe53) popup_number_entry_window_ParamLimits

0x45fd,	// (0x0008fe53) popup_number_entry_window

0xdb24,	// (0x0009937a) bg_popup_call_pane_cp05_ParamLimits

0xdb24,	// (0x0009937a) bg_popup_call_pane_cp05

0xdb44,	// (0x0009939a) popup_number_entry_window_t1

0xdb57,	// (0x000993ad) popup_number_entry_window_t2

0xdb69,	// (0x000993bf) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x0009a951) popup_number_entry_window_t

0xdb7b,	// (0x000993d1) text_title_cp2

0xdb8e,	// (0x000993e4) bg_popup_call_pane_cp_ParamLimits

0xdb8e,	// (0x000993e4) bg_popup_call_pane_cp

0xdb9c,	// (0x000993f2) call_thumbnail_pane

0xdba4,	// (0x000993fa) popup_call_audio_in_window_g1_ParamLimits

0xdba4,	// (0x000993fa) popup_call_audio_in_window_g1

0xdbb0,	// (0x00099406) popup_call_audio_in_window_g2_ParamLimits

0xdbb0,	// (0x00099406) popup_call_audio_in_window_g2

0xdbbc,	// (0x00099412) popup_call_audio_in_window_g3_ParamLimits

0xdbbc,	// (0x00099412) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0009a95a) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0009a95a) popup_call_audio_in_window_g

0xdbc8,	// (0x0009941e) popup_call_audio_in_window_t1_ParamLimits

0xdbc8,	// (0x0009941e) popup_call_audio_in_window_t1

0xdbe4,	// (0x0009943a) popup_call_audio_in_window_t2_ParamLimits

0xdbe4,	// (0x0009943a) popup_call_audio_in_window_t2

0xdc00,	// (0x00099456) popup_call_audio_in_window_t3_ParamLimits

0xdc00,	// (0x00099456) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x0009a961) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x0009a961) popup_call_audio_in_window_t

0xdb8e,	// (0x000993e4) bg_popup_call_pane_cp01_ParamLimits

0xdb8e,	// (0x000993e4) bg_popup_call_pane_cp01

0xdb9c,	// (0x000993f2) call_thumbnail_pane_cp02

0xdc13,	// (0x00099469) call_type_pane_cp022

0xdc1b,	// (0x00099471) popup_call_audio_out_window_g1_ParamLimits

0xdc1b,	// (0x00099471) popup_call_audio_out_window_g1

0xdc2d,	// (0x00099483) popup_call_audio_out_window_g2_ParamLimits

0xdc2d,	// (0x00099483) popup_call_audio_out_window_g2

0xdc39,	// (0x0009948f) popup_call_audio_out_window_g3_ParamLimits

0xdc39,	// (0x0009948f) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0009a968) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0009a968) popup_call_audio_out_window_g

0xdc4b,	// (0x000994a1) popup_call_audio_out_window_t1_ParamLimits

0xdc4b,	// (0x000994a1) popup_call_audio_out_window_t1

0xdc63,	// (0x000994b9) popup_call_audio_out_window_t2_ParamLimits

0xdc63,	// (0x000994b9) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x0009a96f) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x0009a96f) popup_call_audio_out_window_t

0xdc78,	// (0x000994ce) bg_popup_call_pane_ParamLimits

0xdc78,	// (0x000994ce) bg_popup_call_pane

0x1089,	// (0x0008c8df) call_thumbnail_pane_cp_ParamLimits

0x1089,	// (0x0008c8df) call_thumbnail_pane_cp

0xdcfc,	// (0x00099552) call_type_pane_cp01_ParamLimits

0xdcfc,	// (0x00099552) call_type_pane_cp01

0xdd40,	// (0x00099596) popup_call_audio_first_window_g1_ParamLimits

0xdd40,	// (0x00099596) popup_call_audio_first_window_g1

0xdd8c,	// (0x000995e2) popup_call_audio_first_window_g2_ParamLimits

0xdd8c,	// (0x000995e2) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x0009a974) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x0009a974) popup_call_audio_first_window_g

0xddd0,	// (0x00099626) popup_call_audio_first_window_t1_ParamLimits

0xddd0,	// (0x00099626) popup_call_audio_first_window_t1

0xde7c,	// (0x000996d2) popup_call_audio_first_window_t4_ParamLimits

0xde7c,	// (0x000996d2) popup_call_audio_first_window_t4

0xdf08,	// (0x0009975e) popup_call_audio_first_window_t5_ParamLimits

0xdf08,	// (0x0009975e) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0009a979) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0009a979) popup_call_audio_first_window_t

0xdf37,	// (0x0009978d) bg_popup_call_pane_cp02

0xdf41,	// (0x00099797) call_type_pane_cp023

0xdf49,	// (0x0009979f) popup_call_audio_wait_window_g1

0xdf51,	// (0x000997a7) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0009a980) popup_call_audio_wait_window_g

0xdf59,	// (0x000997af) popup_call_audio_wait_window_t3

0xdf67,	// (0x000997bd) bg_popup_call_pane_cp03_ParamLimits

0xdf67,	// (0x000997bd) bg_popup_call_pane_cp03

0xdfc7,	// (0x0009981d) call_thumbnail_pane_cp011_ParamLimits

0xdfc7,	// (0x0009981d) call_thumbnail_pane_cp011

0xdfd3,	// (0x00099829) call_type_pane_cp034_ParamLimits

0xdfd3,	// (0x00099829) call_type_pane_cp034

0xe00f,	// (0x00099865) popup_call_audio_second_window_g1_ParamLimits

0xe00f,	// (0x00099865) popup_call_audio_second_window_g1

0xe04b,	// (0x000998a1) popup_call_audio_second_window_g2_ParamLimits

0xe04b,	// (0x000998a1) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0009a985) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0009a985) popup_call_audio_second_window_g

0xe087,	// (0x000998dd) popup_call_audio_second_window_t1_ParamLimits

0xe087,	// (0x000998dd) popup_call_audio_second_window_t1

0xe108,	// (0x0009995e) popup_call_audio_second_window_t2_ParamLimits

0xe108,	// (0x0009995e) popup_call_audio_second_window_t2

0xe13e,	// (0x00099994) popup_call_audio_second_window_t3_ParamLimits

0xe13e,	// (0x00099994) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0009a98a) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0009a98a) popup_call_audio_second_window_t

0xdf37,	// (0x0009978d) bg_popup_call_pane_cp04

0xe174,	// (0x000999ca) list_conf_pane

0xe17c,	// (0x000999d2) popup_call_audio_conf_window_t1

0xe18a,	// (0x000999e0) call_thumbnail_pane_g1

0xe192,	// (0x000999e8) bg_pinb_pane_ParamLimits

0xe192,	// (0x000999e8) bg_pinb_pane

0xe1a0,	// (0x000999f6) find_pinb_pane

0xe1a9,	// (0x000999ff) listscroll_pinb_pane_ParamLimits

0xe1a9,	// (0x000999ff) listscroll_pinb_pane

0xe1b8,	// (0x00099a0e) pinb_bg_pane_g1

0x10ad,	// (0x0008c903) pinb_bg_pane_g2

0x10b9,	// (0x0008c90f) pinb_bg_pane_g3

0x10c5,	// (0x0008c91b) pinb_bg_pane_g4

0x10d1,	// (0x0008c927) pinb_bg_pane_g5

0x10dd,	// (0x0008c933) pinb_bg_pane_g6

0x10e8,	// (0x0008c93e) pinb_bg_pane_g7

0x10f3,	// (0x0008c949) pinb_bg_pane_g8

0x10fe,	// (0x0008c954) pinb_bg_pane_g9

0x1108,	// (0x0008c95e) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x0009a991) pinb_bg_pane_g

0x1125,	// (0x0008c97b) grid_pinb_pane

0x1130,	// (0x0008c986) list_pinb_pane

0x113b,	// (0x0008c991) scroll_pane_cp01_ParamLimits

0x113b,	// (0x0008c991) scroll_pane_cp01

0xe1c2,	// (0x00099a18) find_pinb_pane_g1_ParamLimits

0xe1c2,	// (0x00099a18) find_pinb_pane_g1

0xe1da,	// (0x00099a30) find_pinb_pane_t1

0xe1ec,	// (0x00099a42) find_pinb_pane_t2

0x0001,

0xf155,	// (0x0009a9ab) find_pinb_pane_t

0xe201,	// (0x00099a57) input_focus_pane_cp01_ParamLimits

0xe201,	// (0x00099a57) input_focus_pane_cp01

0x114d,	// (0x0008c9a3) cell_pinb_pane_ParamLimits

0x114d,	// (0x0008c9a3) cell_pinb_pane

0x116f,	// (0x0008c9c5) cell_pinb_pane_g1_ParamLimits

0x116f,	// (0x0008c9c5) cell_pinb_pane_g1

0x1183,	// (0x0008c9d9) cell_pinb_pane_g2_ParamLimits

0x1183,	// (0x0008c9d9) cell_pinb_pane_g2

0xe20d,	// (0x00099a63) cell_pinb_pane_g3_ParamLimits

0xe20d,	// (0x00099a63) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x0009a9b0) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x0009a9b0) cell_pinb_pane_g

0xdf37,	// (0x0009978d) grid_highlight_pane_cp01

0x118f,	// (0x0008c9e5) list_pinb_item_pane_ParamLimits

0x118f,	// (0x0008c9e5) list_pinb_item_pane

0xdf37,	// (0x0009978d) list_highlight_pane_cp02

0x11a2,	// (0x0008c9f8) list_pinb_item_pane_g1_ParamLimits

0x11a2,	// (0x0008c9f8) list_pinb_item_pane_g1

0x11af,	// (0x0008ca05) list_pinb_item_pane_g2_ParamLimits

0x11af,	// (0x0008ca05) list_pinb_item_pane_g2

0x11bb,	// (0x0008ca11) list_pinb_item_pane_g3_ParamLimits

0x11bb,	// (0x0008ca11) list_pinb_item_pane_g3

0x11cc,	// (0x0008ca22) list_pinb_item_pane_g4_ParamLimits

0x11cc,	// (0x0008ca22) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x0009a9b7) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x0009a9b7) list_pinb_item_pane_g

0x11d8,	// (0x0008ca2e) list_pinb_item_pane_t1_ParamLimits

0x11d8,	// (0x0008ca2e) list_pinb_item_pane_t1

0x120d,	// (0x0008ca63) calc_display_pane

0x1233,	// (0x0008ca89) calc_paper_pane

0x1256,	// (0x0008caac) grid_calc_pane

0xdf37,	// (0x0009978d) bg_list_pane_cp01

0x1284,	// (0x0008cada) clock_g1

0x128c,	// (0x0008cae2) clock_g2

0x0001,

0xf16a,	// (0x0009a9c0) clock_g

0x1294,	// (0x0008caea) clock_t1_ParamLimits

0x1294,	// (0x0008caea) clock_t1

0x12a9,	// (0x0008caff) clock_t2_ParamLimits

0x12a9,	// (0x0008caff) clock_t2

0x12bb,	// (0x0008cb11) clock_t3_ParamLimits

0x12bb,	// (0x0008cb11) clock_t3

0x12cd,	// (0x0008cb23) clock_t4_ParamLimits

0x12cd,	// (0x0008cb23) clock_t4

0x12df,	// (0x0008cb35) clock_t5_ParamLimits

0x12df,	// (0x0008cb35) clock_t5

0x12f4,	// (0x0008cb4a) clock_t6_ParamLimits

0x12f4,	// (0x0008cb4a) clock_t6

0x1306,	// (0x0008cb5c) clock_t7_ParamLimits

0x1306,	// (0x0008cb5c) clock_t7

0x1318,	// (0x0008cb6e) clock_t8_ParamLimits

0x1318,	// (0x0008cb6e) clock_t8

0x132c,	// (0x0008cb82) clock_t9_ParamLimits

0x132c,	// (0x0008cb82) clock_t9

0x0008,

0xf16f,	// (0x0009a9c5) clock_t_ParamLimits

0xf16f,	// (0x0009a9c5) clock_t

0xe219,	// (0x00099a6f) popup_clock_analogue_window_cp02

0xe219,	// (0x00099a6f) popup_clock_digital_window_cp01

0xe221,	// (0x00099a77) listscroll_help_pane

0xdf37,	// (0x0009978d) phob_pre_status_pane

0xe22b,	// (0x00099a81) grid_qdial_pane

0xdf37,	// (0x0009978d) listscroll_mce_pane

0xe235,	// (0x00099a8b) bg_notes_pane

0xe23f,	// (0x00099a95) list_notes_pane

0x1342,	// (0x0008cb98) scroll_pane_cp06

0xe249,	// (0x00099a9f) bg_calc_paper_pane

0x9cbc,	// (0x00095512) list_calc_pane

0xe25d,	// (0x00099ab3) bg_calc_display_pane

0x134d,	// (0x0008cba3) calc_display_pane_t1

0x135f,	// (0x0008cbb5) calc_display_pane_t2

0x9cd6,	// (0x0009552c) calc_display_pane_t3

0x0002,

0xf182,	// (0x0009a9d8) calc_display_pane_t

0x1371,	// (0x0008cbc7) cell_calc_pane_ParamLimits

0x1371,	// (0x0008cbc7) cell_calc_pane

0xe269,	// (0x00099abf) bg_calc_paper_pane_g1

0xe275,	// (0x00099acb) bg_calc_paper_pane_g2

0xe281,	// (0x00099ad7) bg_calc_paper_pane_g3

0xe28d,	// (0x00099ae3) bg_calc_paper_pane_g4

0xe299,	// (0x00099aef) bg_calc_paper_pane_g5

0x13ac,	// (0x0008cc02) bg_calc_paper_pane_g6

0x13bf,	// (0x0008cc15) bg_calc_paper_pane_g7

0x13d2,	// (0x0008cc28) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x0009a9df) bg_calc_paper_pane_g

0x13e3,	// (0x0008cc39) calc_bg_paper_pane_g9

0x13f4,	// (0x0008cc4a) list_calc_item_pane_ParamLimits

0x13f4,	// (0x0008cc4a) list_calc_item_pane

0xe2a5,	// (0x00099afb) list_calc_item_pane_g1

0x9ce8,	// (0x0009553e) list_calc_item_pane_t1_ParamLimits

0x9ce8,	// (0x0009553e) list_calc_item_pane_t1

0x1408,	// (0x0008cc5e) list_calc_item_pane_t2_ParamLimits

0x1408,	// (0x0008cc5e) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x0009a9f0) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x0009a9f0) list_calc_item_pane_t

0xe2b2,	// (0x00099b08) cell_calc_pane_g1

0xe2bc,	// (0x00099b12) grid_highlight_pane_cp02

0xe2de,	// (0x00099b34) bg_calc_display_pane_g1

0x9cfa,	// (0x00095550) bg_calc_display_pane_g2

0xe2e7,	// (0x00099b3d) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0009a9fa) bg_calc_display_pane_g

0x143a,	// (0x0008cc90) cell_qdial_pane_ParamLimits

0x143a,	// (0x0008cc90) cell_qdial_pane

0x1450,	// (0x0008cca6) cell_qdial_pane_g1_ParamLimits

0x1450,	// (0x0008cca6) cell_qdial_pane_g1

0x1466,	// (0x0008ccbc) cell_qdial_pane_g2_ParamLimits

0x1466,	// (0x0008ccbc) cell_qdial_pane_g2

0xe2f0,	// (0x00099b46) cell_qdial_pane_g3_ParamLimits

0xe2f0,	// (0x00099b46) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0009aa01) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0009aa01) cell_qdial_pane_g

0x148c,	// (0x0008cce2) cell_qdial_pane_t1_ParamLimits

0x148c,	// (0x0008cce2) cell_qdial_pane_t1

0x14a4,	// (0x0008ccfa) cell_qdial_pane_t2_ParamLimits

0x14a4,	// (0x0008ccfa) cell_qdial_pane_t2

0x14b7,	// (0x0008cd0d) cell_qdial_pane_t3_ParamLimits

0x14b7,	// (0x0008cd0d) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0009aa0a) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0009aa0a) cell_qdial_pane_t

0xdf37,	// (0x0009978d) grid_highlight_pane_cp04

0xe2fc,	// (0x00099b52) thumbnail_qdial_pane_ParamLimits

0xe2fc,	// (0x00099b52) thumbnail_qdial_pane

0xe358,	// (0x00099bae) list_help_pane

0xe361,	// (0x00099bb7) scroll_pane_cp02

0x14ca,	// (0x0008cd20) help_list_pane_t1_ParamLimits

0x14ca,	// (0x0008cd20) help_list_pane_t1

0x9d04,	// (0x0009555a) bg_notes_pane_g2

0x9d0c,	// (0x00095562) bg_notes_pane_g3

0x9d14,	// (0x0009556a) notes_bg_pane_g1

0x9d1c,	// (0x00095572) notes_bg_pane_g4

0x9d24,	// (0x0009557a) notes_bg_pane_g5

0x9d2c,	// (0x00095582) notes_bg_pane_g6

0x9d34,	// (0x0009558a) notes_bg_pane_g7

0x9d3c,	// (0x00095592) notes_bg_pane_g8

0x9d44,	// (0x0009559a) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0009aa28) notes_bg_pane_g

0x9d4c,	// (0x000955a2) list_notes_text_pane_ParamLimits

0x9d4c,	// (0x000955a2) list_notes_text_pane

0xe36a,	// (0x00099bc0) list_notes_text_pane_g1

0x14ee,	// (0x0008cd44) list_notes_text_pane_t1

0xe25d,	// (0x00099ab3) listscroll_cale_week_pane

0x1519,	// (0x0008cd6f) bg_cale_heading_pane

0xe384,	// (0x00099bda) bg_cale_pane_cp01

0x1535,	// (0x0008cd8b) cale_week_corner_pane

0x154b,	// (0x0008cda1) cale_week_day_heading_pane

0x1567,	// (0x0008cdbd) cale_week_scroll_pane_g1

0x1580,	// (0x0008cdd6) cale_week_scroll_pane_g2

0x1591,	// (0x0008cde7) cale_week_scroll_pane_g3

0x15a2,	// (0x0008cdf8) cale_week_scroll_pane_g4

0x15b3,	// (0x0008ce09) cale_week_scroll_pane_g5

0x15c4,	// (0x0008ce1a) cale_week_scroll_pane_g6

0x15d5,	// (0x0008ce2b) cale_week_scroll_pane_g7

0x15e6,	// (0x0008ce3c) cale_week_scroll_pane_g8

0x15f7,	// (0x0008ce4d) cale_week_scroll_pane_g9

0x1608,	// (0x0008ce5e) cale_week_scroll_pane_g10

0x1619,	// (0x0008ce6f) cale_week_scroll_pane_g11

0x162a,	// (0x0008ce80) cale_week_scroll_pane_g12

0x163b,	// (0x0008ce91) cale_week_scroll_pane_g13

0x1654,	// (0x0008ceaa) cale_week_scroll_pane_g14

0x166d,	// (0x0008cec3) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0009aa37) cale_week_scroll_pane_g

0x1686,	// (0x0008cedc) cale_week_time_pane

0x1697,	// (0x0008ceed) grid_cale_week_pane

0x16b2,	// (0x0008cf08) scroll_pane_cp08

0x16ca,	// (0x0008cf20) cell_cale_week_pane_ParamLimits

0x16ca,	// (0x0008cf20) cell_cale_week_pane

0x1712,	// (0x0008cf68) cale_week_day_heading_pane_t1

0x1726,	// (0x0008cf7c) cale_week_day_heading_pane_t2

0x173a,	// (0x0008cf90) cale_week_day_heading_pane_t3

0x174e,	// (0x0008cfa4) cale_week_day_heading_pane_t4

0x1762,	// (0x0008cfb8) cale_week_day_heading_pane_t5

0x1776,	// (0x0008cfcc) cale_week_day_heading_pane_t6

0x178a,	// (0x0008cfe0) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0009aa56) cale_week_day_heading_pane_t

0xe3af,	// (0x00099c05) bg_cale_side_pane

0x179e,	// (0x0008cff4) cale_week_time_pane_t1

0x17b6,	// (0x0008d00c) cale_week_time_pane_t2

0x17ce,	// (0x0008d024) cale_week_time_pane_t3

0x17e6,	// (0x0008d03c) cale_week_time_pane_t4

0x17fe,	// (0x0008d054) cale_week_time_pane_t5

0x1816,	// (0x0008d06c) cale_week_time_pane_t6

0x182e,	// (0x0008d084) cale_week_time_pane_t7

0x184a,	// (0x0008d0a0) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0009aa65) cale_week_time_pane_t

0x186a,	// (0x0008d0c0) cell_cale_week_pane_g2

0x187b,	// (0x0008d0d1) cell_cale_week_pane_g3_ParamLimits

0x187b,	// (0x0008d0d1) cell_cale_week_pane_g3

0xe3bd,	// (0x00099c13) grid_highlight_pane_cp07

0xe3c5,	// (0x00099c1b) listscroll_gms_pane

0xe3cf,	// (0x00099c25) grid_gms_pane

0xe3d8,	// (0x00099c2e) listscroll_gms_pane_g1

0xe3e0,	// (0x00099c36) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0009aa76) listscroll_gms_pane_g

0x1893,	// (0x0008d0e9) scroll_pane_cp010

0x189e,	// (0x0008d0f4) cell_gms_pane_ParamLimits

0x189e,	// (0x0008d0f4) cell_gms_pane

0x18b8,	// (0x0008d10e) cell_gms_pane_g1

0xe3e8,	// (0x00099c3e) cell_gms_pane_g2

0xe3f0,	// (0x00099c46) cell_gms_pane_g3

0xe3f9,	// (0x00099c4f) cell_gms_pane_g4

0x0003,

0xf225,	// (0x0009aa7b) cell_gms_pane_g

0xe402,	// (0x00099c58) grid_highlight_pane_cp09

0x441e,	// (0x0008fc74) phob_pre_status_pane_g1

0x4426,	// (0x0008fc7c) phob_pre_status_pane_g2

0x442e,	// (0x0008fc84) phob_pre_status_pane_g3

0x4436,	// (0x0008fc8c) phob_pre_status_pane_g4

0x0004,

0xf58a,	// (0x0009ade0) phob_pre_status_pane_g

0x4446,	// (0x0008fc9c) phob_pre_status_pane_t1

0x4456,	// (0x0008fcac) phob_pre_status_pane_t2

0x4466,	// (0x0008fcbc) phob_pre_status_pane_t3

0x0002,

0xf595,	// (0x0009adeb) phob_pre_status_pane_t

0xdf37,	// (0x0009978d) bg_list_pane_cp05

0x18c8,	// (0x0008d11e) grid_vorec_pane

0x9d63,	// (0x000955b9) vorec_t1

0x9d71,	// (0x000955c7) vorec_t2

0x9d7f,	// (0x000955d5) vorec_t3

0x9d8d,	// (0x000955e3) vorec_t4

0x9d9b,	// (0x000955f1) vorec_t5

0x9da9,	// (0x000955ff) vorec_t6

0x0006,

0xf22e,	// (0x0009aa84) vorec_t

0x9dc5,	// (0x0009561b) wait_bar_pane_cp01

0x18d2,	// (0x0008d128) cell_vorec_pane_ParamLimits

0x18d2,	// (0x0008d128) cell_vorec_pane

0xe40a,	// (0x00099c60) cell_vorec_pane_g1

0xdf37,	// (0x0009978d) grid_highlight_pane_cp05

0x18fd,	// (0x0008d153) cams_zoom_pane

0x190c,	// (0x0008d162) image_vga_pane

0x1926,	// (0x0008d17c) main_camera_pane_g1

0x1938,	// (0x0008d18e) main_camera_pane_g2

0x1948,	// (0x0008d19e) main_camera_pane_g3

0x195c,	// (0x0008d1b2) main_camera_pane_g4

0x1970,	// (0x0008d1c6) main_camera_pane_g5

0x1984,	// (0x0008d1da) main_camera_pane_g6

0x1998,	// (0x0008d1ee) main_camera_pane_g7

0x0007,

0xf23d,	// (0x0009aa93) main_camera_pane_g

0x19ac,	// (0x0008d202) main_camera_pane_t1

0x19c2,	// (0x0008d218) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0009aaa4) main_camera_pane_t

0x1a00,	// (0x0008d256) cams_zoom_pane_cp_ParamLimits

0x1a00,	// (0x0008d256) cams_zoom_pane_cp

0x1a28,	// (0x0008d27e) image_cif_pane_ParamLimits

0x1a28,	// (0x0008d27e) image_cif_pane

0x1a63,	// (0x0008d2b9) image_subqcif_pane

0x1a6d,	// (0x0008d2c3) main_video_pane_g1_ParamLimits

0x1a6d,	// (0x0008d2c3) main_video_pane_g1

0x1a91,	// (0x0008d2e7) main_video_pane_g2_ParamLimits

0x1a91,	// (0x0008d2e7) main_video_pane_g2

0x1ac7,	// (0x0008d31d) main_video_pane_g3_ParamLimits

0x1ac7,	// (0x0008d31d) main_video_pane_g3

0x1af5,	// (0x0008d34b) main_video_pane_g4_ParamLimits

0x1af5,	// (0x0008d34b) main_video_pane_g4

0x1b23,	// (0x0008d379) main_video_pane_g5_ParamLimits

0x1b23,	// (0x0008d379) main_video_pane_g5

0xe420,	// (0x00099c76) main_video_pane_g6_ParamLimits

0xe420,	// (0x00099c76) main_video_pane_g6

0x0006,

0xf253,	// (0x0009aaa9) main_video_pane_g_ParamLimits

0xf253,	// (0x0009aaa9) main_video_pane_g

0x1b4c,	// (0x0008d3a2) main_video_pane_t1_ParamLimits

0x1b4c,	// (0x0008d3a2) main_video_pane_t1

0xe43a,	// (0x00099c90) cams_zoom_pane_g1

0xe443,	// (0x00099c99) cams_zoom_pane_g2

0xe44c,	// (0x00099ca2) cams_zoom_pane_g3

0xe455,	// (0x00099cab) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x0009aab8) cams_zoom_pane_g

0x1ba9,	// (0x0008d3ff) grid_cams_pane

0x1bc3,	// (0x0008d419) linegrid_cams_pane

0x1bd7,	// (0x0008d42d) cell_cams_pane_ParamLimits

0x1bd7,	// (0x0008d42d) cell_cams_pane

0xe45e,	// (0x00099cb4) cams_burst_image_pane

0xe466,	// (0x00099cbc) cell_cams_pane_g1

0xdf37,	// (0x0009978d) grid_highlight_pane_cp03

0xe2b2,	// (0x00099b08) mp_bg_pane_g1

0xdf37,	// (0x0009978d) bg_list_pane_cp03

0xa648,	// (0x00095e9e) bg_mp_pane

0xa650,	// (0x00095ea6) grid_mp_pane

0xa658,	// (0x00095eae) media_player_g1

0xa662,	// (0x00095eb8) media_player_t1

0xa670,	// (0x00095ec6) media_player_t2

0xa67e,	// (0x00095ed4) media_player_t3

0xa68c,	// (0x00095ee2) media_player_t4

0xa69a,	// (0x00095ef0) media_player_t5

0xa6a8,	// (0x00095efe) media_player_t6

0xa6b6,	// (0x00095f0c) media_player_t7

0x0006,

0xf574,	// (0x0009adca) media_player_t

0xa6c4,	// (0x00095f1a) wait_bar_pane_cp02

0xf559,	// (0x0009adaf) main_usb_pane_t

0x4415,	// (0x0008fc6b) cell_mp_pane

0xe2b2,	// (0x00099b08) cell_mp_pane_g1

0xdf37,	// (0x0009978d) grid_highlight_pane_cp06

0xe46e,	// (0x00099cc4) grid_skin_colour_pane

0xe476,	// (0x00099ccc) list_highlight_pane_cp03

0x1d10,	// (0x0008d566) skin_g1

0xe47e,	// (0x00099cd4) skin_t1

0xe48d,	// (0x00099ce3) skin_t2

0x0001,

0xf297,	// (0x0009aaed) skin_t

0x1d1a,	// (0x0008d570) cell_skin_colour_pane_ParamLimits

0x1d1a,	// (0x0008d570) cell_skin_colour_pane

0xe49b,	// (0x00099cf1) cell_skin_colour_pane_g1

0x1d76,	// (0x0008d5cc) call_video_g1_ParamLimits

0x1d76,	// (0x0008d5cc) call_video_g1

0x1d92,	// (0x0008d5e8) call_video_g2_ParamLimits

0x1d92,	// (0x0008d5e8) call_video_g2

0x0001,

0xf29c,	// (0x0009aaf2) call_video_g_ParamLimits

0xf29c,	// (0x0009aaf2) call_video_g

0x1dc8,	// (0x0008d61e) call_video_uplink_pane_cp1_ParamLimits

0x1dc8,	// (0x0008d61e) call_video_uplink_pane_cp1

0xe4b5,	// (0x00099d0b) call_video_uplink_pane_cp2

0x1e48,	// (0x0008d69e) video_down_crop_pane_ParamLimits

0x1e48,	// (0x0008d69e) video_down_crop_pane

0x1f0e,	// (0x0008d764) video_down_pane_ParamLimits

0x1f0e,	// (0x0008d764) video_down_pane

0xe4bd,	// (0x00099d13) video_down_subqcif_pane_ParamLimits

0xe4bd,	// (0x00099d13) video_down_subqcif_pane

0xe4d7,	// (0x00099d2d) video_down_subqcif_pane_cp_ParamLimits

0xe4d7,	// (0x00099d2d) video_down_subqcif_pane_cp

0xe4fd,	// (0x00099d53) im_reading_pane_ParamLimits

0xe4fd,	// (0x00099d53) im_reading_pane

0x1fda,	// (0x0008d830) im_writing_pane_ParamLimits

0x1fda,	// (0x0008d830) im_writing_pane

0x1ff8,	// (0x0008d84e) im_reading_pane_t1

0xe517,	// (0x00099d6d) list_im_pane

0xe528,	// (0x00099d7e) scroll_pane_cp07

0x2037,	// (0x0008d88d) im_writing_pane_t1_ParamLimits

0x2037,	// (0x0008d88d) im_writing_pane_t1

0xe541,	// (0x00099d97) im_writing_pane_t2_ParamLimits

0xe541,	// (0x00099d97) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x0009aafc) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x0009aafc) im_writing_pane_t

0xdf37,	// (0x0009978d) input_focus_pane_cp04

0xdf37,	// (0x0009978d) input_focus_pane_cp05

0x204c,	// (0x0008d8a2) list_im_single_pane_ParamLimits

0x204c,	// (0x0008d8a2) list_im_single_pane

0x2065,	// (0x0008d8bb) list_single_im_pane_t1

0x43d5,	// (0x0008fc2b) blid_accuracy_pane

0x43dd,	// (0x0008fc33) blid_compass_pane

0x43e7,	// (0x0008fc3d) main_location_t1

0x43f7,	// (0x0008fc4d) main_location_t2

0x4407,	// (0x0008fc5d) main_location_t3

0x0002,

0xf583,	// (0x0009add9) main_location_t

0xdf37,	// (0x0009978d) aid_levels_location

0xe2b2,	// (0x00099b08) blid_accuracy_pane_g1

0xe2b2,	// (0x00099b08) blid_accuracy_pane_g2

0x0001,

0x002c,	// (0x0008b882) blid_accuracy_pane_g

0xe589,	// (0x00099ddf) wml_content_pane

0xe5c7,	// (0x00099e1d) wml_button_pane_ParamLimits

0xe5c7,	// (0x00099e1d) wml_button_pane

0x2074,	// (0x0008d8ca) wml_list_single_large_pane_ParamLimits

0x2074,	// (0x0008d8ca) wml_list_single_large_pane

0x208d,	// (0x0008d8e3) wml_list_single_medium_pane_ParamLimits

0x208d,	// (0x0008d8e3) wml_list_single_medium_pane

0x20a7,	// (0x0008d8fd) wml_list_single_small_pane_ParamLimits

0x20a7,	// (0x0008d8fd) wml_list_single_small_pane

0xe5db,	// (0x00099e31) wml_selection_box_pane_ParamLimits

0xe5db,	// (0x00099e31) wml_selection_box_pane

0xe5ee,	// (0x00099e44) wml_list_single_pane_t1

0xe5fd,	// (0x00099e53) wml_list_single_medium_pane_t1

0xe60c,	// (0x00099e62) wml_list_single_large_pane_t1

0xe61b,	// (0x00099e71) input_focus_pane_cp02_ParamLimits

0xe61b,	// (0x00099e71) input_focus_pane_cp02

0xe62e,	// (0x00099e84) wml_selection_box_pane_g1

0xe637,	// (0x00099e8d) wml_selection_box_pane_t1_ParamLimits

0xe637,	// (0x00099e8d) wml_selection_box_pane_t1

0xe192,	// (0x000999e8) bg_wml_button_pane_ParamLimits

0xe192,	// (0x000999e8) bg_wml_button_pane

0xe64f,	// (0x00099ea5) wml_button_pane_g1

0xe657,	// (0x00099ead) wml_button_pane_t1

0xe64f,	// (0x00099ea5) wml_button_bg_pane_g1

0xe667,	// (0x00099ebd) wml_button_bg_pane_g2

0xe66f,	// (0x00099ec5) wml_button_bg_pane_g3

0xe677,	// (0x00099ecd) wml_button_bg_pane_g4

0xe67f,	// (0x00099ed5) wml_button_bg_pane_g5

0xe687,	// (0x00099edd) wml_button_bg_pane_g6

0xe68f,	// (0x00099ee5) wml_button_bg_pane_g7

0xe697,	// (0x00099eed) wml_button_bg_pane_g8

0xe69f,	// (0x00099ef5) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0009ab01) wml_button_bg_pane_g

0x20c6,	// (0x0008d91c) bg_list_pane_cp02

0xe6a7,	// (0x00099efd) mce_header_pane_ParamLimits

0xe6a7,	// (0x00099efd) mce_header_pane

0xe6bd,	// (0x00099f13) mce_icon_pane

0xe6bd,	// (0x00099f13) mce_image_pane

0xe6c6,	// (0x00099f1c) mce_text_pane_ParamLimits

0xe6c6,	// (0x00099f1c) mce_text_pane

0x20d0,	// (0x0008d926) scroll_pane_cp03

0xe5bf,	// (0x00099e15) scroll_pane_cp04

0xe6d9,	// (0x00099f2f) scroll_pane_cp05_ParamLimits

0xe6d9,	// (0x00099f2f) scroll_pane_cp05

0x20da,	// (0x0008d930) mce_header_field_pane_ParamLimits

0x20da,	// (0x0008d930) mce_header_field_pane

0x20f3,	// (0x0008d949) mce_header_field_pane_2_ParamLimits

0x20f3,	// (0x0008d949) mce_header_field_pane_2

0x2109,	// (0x0008d95f) mce_header_field_pane_3

0x2111,	// (0x0008d967) list_single_mce_message_pane_ParamLimits

0x2111,	// (0x0008d967) list_single_mce_message_pane

0x212d,	// (0x0008d983) list_single_mce_smart_pane_ParamLimits

0x212d,	// (0x0008d983) list_single_mce_smart_pane

0xe6e5,	// (0x00099f3b) input_focus_pane_cp03

0xe6ee,	// (0x00099f44) list_header_data_pane

0x2154,	// (0x0008d9aa) mce_header_field_pane_t1

0x2164,	// (0x0008d9ba) list_single_mce_header_pane_ParamLimits

0x2164,	// (0x0008d9ba) list_single_mce_header_pane

0xe6f6,	// (0x00099f4c) list_single_mce_header_pane_t1

0xe705,	// (0x00099f5b) list_single_mce_message_pane_g1

0xe70d,	// (0x00099f63) list_single_mce_message_pane_t1

0x2196,	// (0x0008d9ec) bg_cale_heading_pane_cp01_ParamLimits

0x2196,	// (0x0008d9ec) bg_cale_heading_pane_cp01

0xe71b,	// (0x00099f71) bg_cale_pane_cp02_ParamLimits

0xe71b,	// (0x00099f71) bg_cale_pane_cp02

0x21c9,	// (0x0008da1f) cale_month_corner_pane

0x21df,	// (0x0008da35) cale_month_day_heading_pane_ParamLimits

0x21df,	// (0x0008da35) cale_month_day_heading_pane

0x2212,	// (0x0008da68) cale_month_pane_g1_ParamLimits

0x2212,	// (0x0008da68) cale_month_pane_g1

0x223e,	// (0x0008da94) cale_month_pane_g2_ParamLimits

0x223e,	// (0x0008da94) cale_month_pane_g2

0x225f,	// (0x0008dab5) cale_month_pane_g3_ParamLimits

0x225f,	// (0x0008dab5) cale_month_pane_g3

0x229b,	// (0x0008daf1) cale_month_pane_g4_ParamLimits

0x229b,	// (0x0008daf1) cale_month_pane_g4

0x22d7,	// (0x0008db2d) cale_month_pane_g5_ParamLimits

0x22d7,	// (0x0008db2d) cale_month_pane_g5

0x2313,	// (0x0008db69) cale_month_pane_g6_ParamLimits

0x2313,	// (0x0008db69) cale_month_pane_g6

0x234f,	// (0x0008dba5) cale_month_pane_g7_ParamLimits

0x234f,	// (0x0008dba5) cale_month_pane_g7

0x238b,	// (0x0008dbe1) cale_month_pane_g8_ParamLimits

0x238b,	// (0x0008dbe1) cale_month_pane_g8

0x23c7,	// (0x0008dc1d) cale_month_pane_g9_ParamLimits

0x23c7,	// (0x0008dc1d) cale_month_pane_g9

0x23fd,	// (0x0008dc53) cale_month_pane_g10_ParamLimits

0x23fd,	// (0x0008dc53) cale_month_pane_g10

0x2427,	// (0x0008dc7d) cale_month_pane_g11_ParamLimits

0x2427,	// (0x0008dc7d) cale_month_pane_g11

0x2451,	// (0x0008dca7) cale_month_pane_g12_ParamLimits

0x2451,	// (0x0008dca7) cale_month_pane_g12

0x247f,	// (0x0008dcd5) cale_month_pane_g13_ParamLimits

0x247f,	// (0x0008dcd5) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0009ab14) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0009ab14) cale_month_pane_g

0x24ad,	// (0x0008dd03) cale_month_week_pane

0x24be,	// (0x0008dd14) grid_cale_month_pane_ParamLimits

0x24be,	// (0x0008dd14) grid_cale_month_pane

0x24ec,	// (0x0008dd42) cale_month_day_heading_pane_t1

0x254a,	// (0x0008dda0) cale_month_day_heading_pane_t2

0x25af,	// (0x0008de05) cale_month_day_heading_pane_t3

0x2614,	// (0x0008de6a) cale_month_day_heading_pane_t4

0x2679,	// (0x0008decf) cale_month_day_heading_pane_t5

0x26de,	// (0x0008df34) cale_month_day_heading_pane_t6

0x2743,	// (0x0008df99) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x0009ab2f) cale_month_day_heading_pane_t

0xe3af,	// (0x00099c05) bg_cale_side_pane_cp01

0x27a8,	// (0x0008dffe) cale_month_week_pane_t1

0x27bf,	// (0x0008e015) cale_month_week_pane_t2

0x27d6,	// (0x0008e02c) cale_month_week_pane_t3

0x27ed,	// (0x0008e043) cale_month_week_pane_t4

0x2804,	// (0x0008e05a) cale_month_week_pane_t5

0x281b,	// (0x0008e071) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x0009ab3e) cale_month_week_pane_t

0x283a,	// (0x0008e090) cell_cale_month_pane_ParamLimits

0x283a,	// (0x0008e090) cell_cale_month_pane

0x9dcd,	// (0x00095623) cell_cale_month_pane_g1

0x2912,	// (0x0008e168) cell_cale_month_pane_t1_ParamLimits

0x2912,	// (0x0008e168) cell_cale_month_pane_t1

0xe3bd,	// (0x00099c13) grid_highlight_pane_cp08

0xe2b2,	// (0x00099b08) main_smil_g1

0x292e,	// (0x0008e184) smil_status_pane

0xe750,	// (0x00099fa6) smil_text_pane

0xa566,	// (0x00095dbc) bg_popup_call3_rect_pane_g8

0xa56e,	// (0x00095dc4) bg_popup_call3_rect_pane_g9

0x0008,

0xf517,	// (0x0009ad6d) bg_popup_call3_rect_pane_g

0xa803,	// (0x00096059) smil_status_volume_pane_g1

0xe75a,	// (0x00099fb0) smil_status_pane_t1

0xa836,	// (0x0009608c) volume_smil_pane

0xe771,	// (0x00099fc7) list_smil_text_pane

0x2943,	// (0x0008e199) scroll_pane_cp011

0x294e,	// (0x0008e1a4) smil_text_list_pane_t1_ParamLimits

0x294e,	// (0x0008e1a4) smil_text_list_pane_t1

0x9dd9,	// (0x0009562f) aid_volume_smil_ParamLimits

0x9dd9,	// (0x0009562f) aid_volume_smil

0xe2b2,	// (0x00099b08) smil_volume_pane_g1

0xe2b2,	// (0x00099b08) smil_volume_pane_g2

0x0001,

0x002c,	// (0x0008b882) smil_volume_pane_g

0xe25d,	// (0x00099ab3) listscroll_cale_day_pane

0xe77b,	// (0x00099fd1) bg_cale_pane

0xe793,	// (0x00099fe9) list_cale_pane

0xe7a4,	// (0x00099ffa) scroll_pane_cp09

0xe7b5,	// (0x0009a00b) cale_bg_pane_g1

0xe7bd,	// (0x0009a013) cale_bg_pane_g2

0xe7c5,	// (0x0009a01b) cale_bg_pane_g3

0xe7cd,	// (0x0009a023) cale_bg_pane_g4

0xe7d5,	// (0x0009a02b) cale_bg_pane_g5

0xe7dd,	// (0x0009a033) cale_bg_pane_g6

0xe7e5,	// (0x0009a03b) cale_bg_pane_g7

0xe7ed,	// (0x0009a043) cale_bg_pane_g8

0xe7f5,	// (0x0009a04b) cale_bg_pane_g9

0x0008,

0x0031,	// (0x0008b887) cale_bg_pane_g

0x29a3,	// (0x0008e1f9) list_cale_time_pane_ParamLimits

0x29a3,	// (0x0008e1f9) list_cale_time_pane

0x29b8,	// (0x0008e20e) list_cale_time_pane_g1_ParamLimits

0x29b8,	// (0x0008e20e) list_cale_time_pane_g1

0xe7fd,	// (0x0009a053) list_cale_time_pane_g2_ParamLimits

0xe7fd,	// (0x0009a053) list_cale_time_pane_g2

0x29c4,	// (0x0008e21a) list_cale_time_pane_g3_ParamLimits

0x29c4,	// (0x0008e21a) list_cale_time_pane_g3

0x29d2,	// (0x0008e228) list_cale_time_pane_g4_ParamLimits

0x29d2,	// (0x0008e228) list_cale_time_pane_g4

0x29e0,	// (0x0008e236) list_cale_time_pane_g5_ParamLimits

0x29e0,	// (0x0008e236) list_cale_time_pane_g5

0x0005,

0xf308,	// (0x0009ab5e) list_cale_time_pane_g_ParamLimits

0xf308,	// (0x0009ab5e) list_cale_time_pane_g

0x29ee,	// (0x0008e244) list_cale_time_pane_t1_ParamLimits

0x29ee,	// (0x0008e244) list_cale_time_pane_t1

0x2a16,	// (0x0008e26c) list_cale_time_pane_t2_ParamLimits

0x2a16,	// (0x0008e26c) list_cale_time_pane_t2

0x2e03,	// (0x0008e659) aid_blid_cardinal_pane

0x2e45,	// (0x0008e69b) compass_pane_t4

0x2a3e,	// (0x0008e294) list_cale_time_pane_t4_ParamLimits

0x2a3e,	// (0x0008e294) list_cale_time_pane_t4

0x2e53,	// (0x0008e6a9) compass_pane_t5

0x2e63,	// (0x0008e6b9) compass_pane_t6

0x2e71,	// (0x0008e6c7) compass_pane_t7

0xec0b,	// (0x0009a461) navi_pane_cc_t1

0xed60,	// (0x0009a5b6) aid_phob_thumbnail_center_pane

0x361f,	// (0x0008ee75) main_postcard_pane_g4_ParamLimits

0x0002,

0xf315,	// (0x0009ab6b) list_cale_time_pane_t_ParamLimits

0xf315,	// (0x0009ab6b) list_cale_time_pane_t

0xdb8e,	// (0x000993e4) bg_popup_window_pane_cp02_ParamLimits

0xdb8e,	// (0x000993e4) bg_popup_window_pane_cp02

0xe817,	// (0x0009a06d) heading_pane_cp01_ParamLimits

0xe817,	// (0x0009a06d) heading_pane_cp01

0xe823,	// (0x0009a079) loc_req_pane_ParamLimits

0xe823,	// (0x0009a079) loc_req_pane

0xe833,	// (0x0009a089) loc_type_pane_ParamLimits

0xe833,	// (0x0009a089) loc_type_pane

0xe845,	// (0x0009a09b) loc_type_pane_t1_ParamLimits

0xe845,	// (0x0009a09b) loc_type_pane_t1

0xe857,	// (0x0009a0ad) loc_type_pane_t2_ParamLimits

0xe857,	// (0x0009a0ad) loc_type_pane_t2

0xe869,	// (0x0009a0bf) loc_type_pane_t3_ParamLimits

0xe869,	// (0x0009a0bf) loc_type_pane_t3

0x0002,

0x0058,	// (0x0008b8ae) loc_type_pane_t_ParamLimits

0x0058,	// (0x0008b8ae) loc_type_pane_t

0xe87b,	// (0x0009a0d1) list_loc_req_pane

0xe885,	// (0x0009a0db) scroll_pane_cp012

0x2a66,	// (0x0008e2bc) list_single_loc_request_popup_menu_pane_ParamLimits

0x2a66,	// (0x0008e2bc) list_single_loc_request_popup_menu_pane

0xe890,	// (0x0009a0e6) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe890,	// (0x0009a0e6) list_single_loc_request_popup_menu_pane_g1

0xe89c,	// (0x0009a0f2) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe89c,	// (0x0009a0f2) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x005f,	// (0x0008b8b5) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x005f,	// (0x0008b8b5) list_single_loc_request_popup_menu_pane_g

0xe8a8,	// (0x0009a0fe) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe8a8,	// (0x0009a0fe) list_single_loc_request_popup_menu_pane_t1

0xe192,	// (0x000999e8) bg_popup_window_pane_cp03_ParamLimits

0xe192,	// (0x000999e8) bg_popup_window_pane_cp03

0xf070,	// (0x0009a8c6) heading_loc_req_pane_ParamLimits

0xf070,	// (0x0009a8c6) heading_loc_req_pane

0x2a73,	// (0x0008e2c9) popup_dyc_status_message_window_g1_ParamLimits

0x2a73,	// (0x0008e2c9) popup_dyc_status_message_window_g1

0x2a87,	// (0x0008e2dd) popup_dyc_status_message_window_t1_ParamLimits

0x2a87,	// (0x0008e2dd) popup_dyc_status_message_window_t1

0x2a9c,	// (0x0008e2f2) popup_dyc_status_message_window_t2_ParamLimits

0x2a9c,	// (0x0008e2f2) popup_dyc_status_message_window_t2

0x2ab1,	// (0x0008e307) popup_dyc_status_message_window_t3_ParamLimits

0x2ab1,	// (0x0008e307) popup_dyc_status_message_window_t3

0x0002,

0xf31c,	// (0x0009ab72) popup_dyc_status_message_window_t_ParamLimits

0xf31c,	// (0x0009ab72) popup_dyc_status_message_window_t

0xdf37,	// (0x0009978d) bg_heading_pane_cp01

0xe8be,	// (0x0009a114) heading_loc_req_pane_g1

0xe8c6,	// (0x0009a11c) heading_loc_req_pane_g2

0xe8ce,	// (0x0009a124) heading_loc_req_pane_g3

0x0002,

0x006b,	// (0x0008b8c1) heading_loc_req_pane_g

0xe8d6,	// (0x0009a12c) heading_loc_req_pane_t1

0xe8e6,	// (0x0009a13c) bg_popup_sub_pane_cp01_ParamLimits

0xe8e6,	// (0x0009a13c) bg_popup_sub_pane_cp01

0xe8f4,	// (0x0009a14a) popup_cale_events_window_g1_ParamLimits

0xe8f4,	// (0x0009a14a) popup_cale_events_window_g1

0xe914,	// (0x0009a16a) popup_cale_events_window_g2_ParamLimits

0xe914,	// (0x0009a16a) popup_cale_events_window_g2

0x0001,

0x009f,	// (0x0008b8f5) popup_cale_events_window_g_ParamLimits

0x009f,	// (0x0008b8f5) popup_cale_events_window_g

0xe934,	// (0x0009a18a) popup_cale_events_window_t1_ParamLimits

0xe934,	// (0x0009a18a) popup_cale_events_window_t1

0xe946,	// (0x0009a19c) popup_cale_events_window_t2_ParamLimits

0xe946,	// (0x0009a19c) popup_cale_events_window_t2

0xe984,	// (0x0009a1da) popup_cale_events_window_t3_ParamLimits

0xe984,	// (0x0009a1da) popup_cale_events_window_t3

0xe9be,	// (0x0009a214) popup_cale_events_window_t4_ParamLimits

0xe9be,	// (0x0009a214) popup_cale_events_window_t4

0x0003,

0x00a4,	// (0x0008b8fa) popup_cale_events_window_t_ParamLimits

0x00a4,	// (0x0008b8fa) popup_cale_events_window_t

0x2bb6,	// (0x0008e40c) call_type_pane

0x2bc6,	// (0x0008e41c) popup_call_status_window_g1

0x2bda,	// (0x0008e430) popup_call_status_window_g2

0x2bee,	// (0x0008e444) popup_call_status_window_g3

0x0002,

0xf350,	// (0x0009aba6) popup_call_status_window_g

0xe9f4,	// (0x0009a24a) call_type_pane_g1

0xe9fd,	// (0x0009a253) call_type_pane_g2

0x0001,

0xf357,	// (0x0009abad) call_type_pane_g

0xdf37,	// (0x0009978d) bg_popup_sub_pane_cp02

0xea06,	// (0x0009a25c) listscroll_popup_wml_pane

0xea0e,	// (0x0009a264) list_wml_pane

0xea18,	// (0x0009a26e) scroll_pane_cp013

0xea23,	// (0x0009a279) list_single_graphic_popup_wml_pane_ParamLimits

0xea23,	// (0x0009a279) list_single_graphic_popup_wml_pane

0xe2b2,	// (0x00099b08) list_single_graphic_popup_wml_pane_g1

0xea37,	// (0x0009a28d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf35c,	// (0x0009abb2) list_single_graphic_popup_wml_pane_g

0xea3f,	// (0x0009a295) list_single_graphic_popup_wml_pane_t1

0xea55,	// (0x0009a2ab) aid_call_pane

0xe18a,	// (0x000999e0) popup_clock_analogue_window_g1

0xe18a,	// (0x000999e0) popup_clock_analogue_window_g2

0x9dfb,	// (0x00095651) popup_clock_analogue_window_g3

0x9dfb,	// (0x00095651) popup_clock_analogue_window_g4

0xe2b2,	// (0x00099b08) popup_clock_analogue_window_g5

0x0004,

0xf361,	// (0x0009abb7) popup_clock_analogue_window_g

0x9e03,	// (0x00095659) popup_clock_analogue_window_t1

0x9e11,	// (0x00095667) clock_digital_number_pane_ParamLimits

0x9e11,	// (0x00095667) clock_digital_number_pane

0x9e1d,	// (0x00095673) clock_digital_number_pane_cp02_ParamLimits

0x9e1d,	// (0x00095673) clock_digital_number_pane_cp02

0x9e29,	// (0x0009567f) clock_digital_number_pane_cp03_ParamLimits

0x9e29,	// (0x0009567f) clock_digital_number_pane_cp03

0x9e35,	// (0x0009568b) clock_digital_number_pane_cp04_ParamLimits

0x9e35,	// (0x0009568b) clock_digital_number_pane_cp04

0x9e41,	// (0x00095697) clock_digital_separator_pane_ParamLimits

0x9e41,	// (0x00095697) clock_digital_separator_pane

0x9e4d,	// (0x000956a3) popup_clock_digital_window_t1

0xe2b2,	// (0x00099b08) clock_digital_number_pane_g1

0xe2b2,	// (0x00099b08) clock_digital_number_pane_g2

0x0001,

0x002c,	// (0x0008b882) clock_digital_number_pane_g

0xe2b2,	// (0x00099b08) clock_digital_separator_pane_g1

0xe2b2,	// (0x00099b08) clock_digital_separator_pane_g2

0x0001,

0x002c,	// (0x0008b882) clock_digital_separator_pane_g

0xdf37,	// (0x0009978d) bg_popup_window_pane_cp04

0xea5d,	// (0x0009a2b3) heading_pane_cp03

0xea65,	// (0x0009a2bb) listscroll_popup_gms_pane

0xea6d,	// (0x0009a2c3) grid_large_graphic_popup_pane

0xea77,	// (0x0009a2cd) listscroll_popup_gms_pane_g1

0xea8d,	// (0x0009a2e3) listscroll_popup_gms_pane_g2

0x0001,

0xf36c,	// (0x0009abc2) listscroll_popup_gms_pane_g

0xe5bf,	// (0x00099e15) scroll_pane_cp014

0x2bfe,	// (0x0008e454) cell_large_graphic_popup_pane_ParamLimits

0x2bfe,	// (0x0008e454) cell_large_graphic_popup_pane

0x2c16,	// (0x0008e46c) cell_large_graphic_popup_pane_g1_ParamLimits

0x2c16,	// (0x0008e46c) cell_large_graphic_popup_pane_g1

0xea95,	// (0x0009a2eb) cell_large_graphic_popup_pane_g2_ParamLimits

0xea95,	// (0x0009a2eb) cell_large_graphic_popup_pane_g2

0xeaa1,	// (0x0009a2f7) cell_large_graphic_popup_pane_g3_ParamLimits

0xeaa1,	// (0x0009a2f7) cell_large_graphic_popup_pane_g3

0xeaae,	// (0x0009a304) cell_large_graphic_popup_pane_g4_ParamLimits

0xeaae,	// (0x0009a304) cell_large_graphic_popup_pane_g4

0x0003,

0xf371,	// (0x0009abc7) cell_large_graphic_popup_pane_g_ParamLimits

0xf371,	// (0x0009abc7) cell_large_graphic_popup_pane_g

0xeabe,	// (0x0009a314) grid_highlight_pane_cp010

0xe2b2,	// (0x00099b08) bg_popup_call_pane_g1

0xeac8,	// (0x0009a31e) list_single_graphic_popup_conf_pane_ParamLimits

0xeac8,	// (0x0009a31e) list_single_graphic_popup_conf_pane

0xeada,	// (0x0009a330) list_highlight_pane_cp01

0xeae3,	// (0x0009a339) list_single_graphic_popup_conf_pane_g1

0xeaeb,	// (0x0009a341) list_single_graphic_popup_conf_pane_g2

0x0001,

0x00d7,	// (0x0008b92d) list_single_graphic_popup_conf_pane_g

0xeaf3,	// (0x0009a349) list_single_graphic_popup_conf_pane_t1

0xeb01,	// (0x0009a357) linegrid_cams_pane_g1

0x2c22,	// (0x0008e478) linegrid_cams_pane_g2

0xe3f0,	// (0x00099c46) linegrid_cams_pane_g3

0xeb0a,	// (0x0009a360) linegrid_cams_pane_g4

0x2c2b,	// (0x0008e481) linegrid_cams_pane_g5

0x2c34,	// (0x0008e48a) linegrid_cams_pane_g6

0xe3f9,	// (0x00099c4f) linegrid_cams_pane_g7

0x0006,

0xf37a,	// (0x0009abd0) linegrid_cams_pane_g

0xeb13,	// (0x0009a369) popup_clock_analogue_window

0xeb13,	// (0x0009a369) popup_clock_digital_window

0xdf37,	// (0x0009978d) popup_phob_thumbnail_window

0xe2b2,	// (0x00099b08) call_video_uplink_pane_g1

0xeb1c,	// (0x0009a372) call_video_uplink_pane_g2

0x0001,

0x00eb,	// (0x0008b941) call_video_uplink_pane_g

0xeb24,	// (0x0009a37a) video_uplink_pane

0xeb2c,	// (0x0009a382) mce_image_pane_g1

0x2c3f,	// (0x0008e495) mce_image_pane_g2

0x2c49,	// (0x0008e49f) mce_image_pane_g3

0x2c53,	// (0x0008e4a9) mce_image_pane_g4

0x2c5b,	// (0x0008e4b1) mce_image_pane_g5

0x0004,

0xf389,	// (0x0009abdf) mce_image_pane_g

0xeb36,	// (0x0009a38c) control_top_pane_stacon_cp01_ParamLimits

0xeb36,	// (0x0009a38c) control_top_pane_stacon_cp01

0xeb4a,	// (0x0009a3a0) uni_indicator_pane_stacon_cp01_ParamLimits

0xeb4a,	// (0x0009a3a0) uni_indicator_pane_stacon_cp01

0xeb5b,	// (0x0009a3b1) bg_popup_sub_pane_cp03

0x2c63,	// (0x0008e4b9) chi_dic_find_pane

0x2c6b,	// (0x0008e4c1) listscroll_chi_dic_pane

0x2c74,	// (0x0008e4ca) main_pane_chidic_g1

0x2c87,	// (0x0008e4dd) chi_dic_find_pane_t1

0xeb65,	// (0x0009a3bb) find_chidic_pane

0xeb6e,	// (0x0009a3c4) chi_dic_list_pane_ParamLimits

0xeb6e,	// (0x0009a3c4) chi_dic_list_pane

0xeb7f,	// (0x0009a3d5) scroll_pane_cp020

0x2c95,	// (0x0008e4eb) find_chidic_pane_t1

0xdf37,	// (0x0009978d) input_focus_pane_cp06

0x2ca4,	// (0x0008e4fa) list_chi_dic_pane_ParamLimits

0x2ca4,	// (0x0008e4fa) list_chi_dic_pane

0x2cb6,	// (0x0008e50c) list_chi_dic_pane_t1_ParamLimits

0x2cb6,	// (0x0008e50c) list_chi_dic_pane_t1

0xdf37,	// (0x0009978d) list_highlight_pane_cp020

0xeb87,	// (0x0009a3dd) bg_cale_heading_pane_g1

0x2cc9,	// (0x0008e51f) bg_cale_heading_pane_g2

0x2cd1,	// (0x0008e527) bg_cale_heading_pane_g3

0x2cd9,	// (0x0008e52f) bg_cale_heading_pane_g4

0x2ce1,	// (0x0008e537) bg_cale_heading_pane_g5

0x2ce9,	// (0x0008e53f) bg_cale_heading_pane_g6

0x2cf1,	// (0x0008e547) bg_cale_heading_pane_g7

0x2cf9,	// (0x0008e54f) bg_cale_heading_pane_g8

0x2d01,	// (0x0008e557) bg_cale_heading_pane_g9

0x0008,

0xf394,	// (0x0009abea) bg_cale_heading_pane_g

0xeb87,	// (0x0009a3dd) bg_cale_side_pane_g1

0x2d09,	// (0x0008e55f) bg_cale_side_pane_g2

0x2d13,	// (0x0008e569) bg_cale_side_pane_g3

0x2d1d,	// (0x0008e573) bg_cale_side_pane_g4

0x2d27,	// (0x0008e57d) bg_cale_side_pane_g5

0x2d31,	// (0x0008e587) bg_cale_side_pane_g6

0x2d3b,	// (0x0008e591) bg_cale_side_pane_g7

0x2d45,	// (0x0008e59b) bg_cale_side_pane_g8

0x2d4d,	// (0x0008e5a3) bg_cale_side_pane_g9

0x0008,

0xf3a7,	// (0x0009abfd) bg_cale_side_pane_g

0x2d55,	// (0x0008e5ab) popup_call_status_window_ParamLimits

0x2d55,	// (0x0008e5ab) popup_call_status_window

0xeb8f,	// (0x0009a3e5) stacon_top_pane

0xeb97,	// (0x0009a3ed) status_pane_ParamLimits

0xeb97,	// (0x0009a3ed) status_pane

0xebac,	// (0x0009a402) status_small_pane

0xebb4,	// (0x0009a40a) control_pane

0xdf37,	// (0x0009978d) stacon_bottom_pane

0xebbc,	// (0x0009a412) list_single_mce_smart_pane_t1_ParamLimits

0xebbc,	// (0x0009a412) list_single_mce_smart_pane_t1

0xebcf,	// (0x0009a425) list_single_mce_smart_pane_t2_ParamLimits

0xebcf,	// (0x0009a425) list_single_mce_smart_pane_t2

0x0001,

0x0121,	// (0x0008b977) list_single_mce_smart_pane_t_ParamLimits

0x0121,	// (0x0008b977) list_single_mce_smart_pane_t

0x2da2,	// (0x0008e5f8) compass_pane

0x2dad,	// (0x0008e603) main_location2_pane_t1

0x2dc3,	// (0x0008e619) main_location2_pane_t2

0x2dd9,	// (0x0008e62f) main_location2_pane_t3

0x0003,

0xf3ba,	// (0x0009ac10) main_location2_pane_t

0xebee,	// (0x0009a444) compass_pane_g1_ParamLimits

0xebee,	// (0x0009a444) compass_pane_g1

0x2e27,	// (0x0008e67d) compass_pane_t1

0x2e36,	// (0x0008e68c) compass_pane_t2

0x0005,

0xf3c3,	// (0x0009ac19) compass_pane_t

0x2e81,	// (0x0008e6d7) text_secondary_cp61

0xec02,	// (0x0009a458) navi_pane_cams_g5

0xec25,	// (0x0009a47b) navi_pane_im_t1

0xec33,	// (0x0009a489) navi_pane_mp_g1_ParamLimits

0xec33,	// (0x0009a489) navi_pane_mp_g1

0xec47,	// (0x0009a49d) navi_pane_mp_g2_ParamLimits

0xec47,	// (0x0009a49d) navi_pane_mp_g2

0xec53,	// (0x0009a4a9) navi_pane_mp_g3_ParamLimits

0xec53,	// (0x0009a4a9) navi_pane_mp_g3

0x0002,

0x0143,	// (0x0008b999) navi_pane_mp_g_ParamLimits

0x0143,	// (0x0008b999) navi_pane_mp_g

0xec5f,	// (0x0009a4b5) navi_pane_mp_t1

0xec6d,	// (0x0009a4c3) navi_pane_mp_t2

0x0002,

0x014a,	// (0x0008b9a0) navi_pane_mp_t

0xeca9,	// (0x0009a4ff) navi_pane_vt_g1

0xec5f,	// (0x0009a4b5) navi_pane_vt_t1

0xecb1,	// (0x0009a507) navi_slider_pane

0xecb9,	// (0x0009a50f) zooming_pane

0xecc1,	// (0x0009a517) navi_slider_pane_g1

0x9e6a,	// (0x000956c0) navi_slider_pane_g2

0x0006,

0xf3d7,	// (0x0009ac2d) navi_slider_pane_g

0xece5,	// (0x0009a53b) aid_levels_zoom

0xeced,	// (0x0009a543) zooming_pane_g1

0xecf5,	// (0x0009a54b) zooming_pane_g2

0xecf5,	// (0x0009a54b) zooming_pane_g3

0x0002,

0x0160,	// (0x0008b9b6) zooming_pane_g

0xecfd,	// (0x0009a553) level_10_zoom

0xed06,	// (0x0009a55c) level_11_zoom

0xed0f,	// (0x0009a565) level_1_zoom

0xed18,	// (0x0009a56e) level_2_zoom

0xed21,	// (0x0009a577) level_3_zoom

0xed2a,	// (0x0009a580) level_4_zoom

0xed33,	// (0x0009a589) level_5_zoom

0xed3c,	// (0x0009a592) level_6_zoom

0xed45,	// (0x0009a59b) level_7_zoom

0xed4e,	// (0x0009a5a4) level_8_zoom

0xed57,	// (0x0009a5ad) level_9_zoom

0xed68,	// (0x0009a5be) popup_phob_thumbnail_window_g1

0xed70,	// (0x0009a5c6) popup_phob_thumbnail_window_g2

0x0001,

0x0167,	// (0x0008b9bd) popup_phob_thumbnail_window_g

0xa6cc,	// (0x00095f22) level_1_location

0xa6d4,	// (0x00095f2a) level_2_location

0xa6dc,	// (0x00095f32) level_3_location

0xa6e4,	// (0x00095f3a) level_4_location

0xecb9,	// (0x0009a50f) level_5_location

0x2fac,	// (0x0008e802) mce_icon_pane_g1

0x2fb4,	// (0x0008e80a) mce_icon_pane_g2

0x0001,

0xf3e6,	// (0x0009ac3c) mce_icon_pane_g

0x2fbc,	// (0x0008e812) main_mup_pane_g1_ParamLimits

0x2fbc,	// (0x0008e812) main_mup_pane_g1

0x2fd2,	// (0x0008e828) main_mup_pane_g2_ParamLimits

0x2fd2,	// (0x0008e828) main_mup_pane_g2

0x2fea,	// (0x0008e840) main_mup_pane_g3_ParamLimits

0x2fea,	// (0x0008e840) main_mup_pane_g3

0x3002,	// (0x0008e858) main_mup_pane_g4_ParamLimits

0x3002,	// (0x0008e858) main_mup_pane_g4

0x3014,	// (0x0008e86a) main_mup_pane_g5_ParamLimits

0x3014,	// (0x0008e86a) main_mup_pane_g5

0x3030,	// (0x0008e886) main_mup_pane_g6_ParamLimits

0x3030,	// (0x0008e886) main_mup_pane_g6

0x304a,	// (0x0008e8a0) main_mup_pane_g7_ParamLimits

0x304a,	// (0x0008e8a0) main_mup_pane_g7

0x3068,	// (0x0008e8be) main_mup_pane_g8_ParamLimits

0x3068,	// (0x0008e8be) main_mup_pane_g8

0x3086,	// (0x0008e8dc) main_mup_pane_g9_ParamLimits

0x3086,	// (0x0008e8dc) main_mup_pane_g9

0x30a2,	// (0x0008e8f8) main_mup_pane_g10_ParamLimits

0x30a2,	// (0x0008e8f8) main_mup_pane_g10

0x30c0,	// (0x0008e916) main_mup_pane_g11_ParamLimits

0x30c0,	// (0x0008e916) main_mup_pane_g11

0x30da,	// (0x0008e930) main_mup_pane_g12_ParamLimits

0x30da,	// (0x0008e930) main_mup_pane_g12

0x30f0,	// (0x0008e946) main_mup_pane_g13_ParamLimits

0x30f0,	// (0x0008e946) main_mup_pane_g13

0x000c,

0xf3eb,	// (0x0009ac41) main_mup_pane_g_ParamLimits

0xf3eb,	// (0x0009ac41) main_mup_pane_g

0x3104,	// (0x0008e95a) main_mup_pane_t1_ParamLimits

0x3104,	// (0x0008e95a) main_mup_pane_t1

0x3120,	// (0x0008e976) main_mup_pane_t2_ParamLimits

0x3120,	// (0x0008e976) main_mup_pane_t2

0x3138,	// (0x0008e98e) main_mup_pane_t3_ParamLimits

0x3138,	// (0x0008e98e) main_mup_pane_t3

0x3150,	// (0x0008e9a6) main_mup_pane_t4_ParamLimits

0x3150,	// (0x0008e9a6) main_mup_pane_t4

0x316e,	// (0x0008e9c4) main_mup_pane_t5_ParamLimits

0x316e,	// (0x0008e9c4) main_mup_pane_t5

0x3183,	// (0x0008e9d9) main_mup_pane_t6_ParamLimits

0x3183,	// (0x0008e9d9) main_mup_pane_t6

0x0005,

0xf406,	// (0x0009ac5c) main_mup_pane_t_ParamLimits

0xf406,	// (0x0009ac5c) main_mup_pane_t

0x3195,	// (0x0008e9eb) mup_progress_pane_ParamLimits

0x3195,	// (0x0008e9eb) mup_progress_pane

0x31a1,	// (0x0008e9f7) mup_visualizer_pane_ParamLimits

0x31a1,	// (0x0008e9f7) mup_visualizer_pane

0x31d5,	// (0x0008ea2b) mup_volume_pane_ParamLimits

0x31d5,	// (0x0008ea2b) mup_volume_pane

0xea7f,	// (0x0009a2d5) mup_visualizer_pane_g1_ParamLimits

0xea7f,	// (0x0009a2d5) mup_visualizer_pane_g1

0xea7f,	// (0x0009a2d5) mup_visualizer_pane_g2_ParamLimits

0xea7f,	// (0x0009a2d5) mup_visualizer_pane_g2

0xebee,	// (0x0009a444) mup_visualizer_pane_g3_ParamLimits

0xebee,	// (0x0009a444) mup_visualizer_pane_g3

0x0002,

0xf413,	// (0x0009ac69) mup_visualizer_pane_g_ParamLimits

0xf413,	// (0x0009ac69) mup_visualizer_pane_g

0xe2b2,	// (0x00099b08) mup_volume_pane_g1

0xed80,	// (0x0009a5d6) mup_volume_pane_g2

0x0001,

0x01a0,	// (0x0008b9f6) mup_volume_pane_g

0xe2b2,	// (0x00099b08) mup_progress_pane_g1

0xed89,	// (0x0009a5df) mup_progress_pane_g2

0xed92,	// (0x0009a5e8) mup_progress_pane_g3

0x0002,

0x01a5,	// (0x0008b9fb) mup_progress_pane_g

0xdf37,	// (0x0009978d) bg_popup_window_pane_cp05

0xed9b,	// (0x0009a5f1) heading_pane_cp02_ParamLimits

0xed9b,	// (0x0009a5f1) heading_pane_cp02

0xedb7,	// (0x0009a60d) list_popup_blid_pane

0xedbf,	// (0x0009a615) list_blid_sat_info_pane_ParamLimits

0xedbf,	// (0x0009a615) list_blid_sat_info_pane

0xedd2,	// (0x0009a628) list_blid_sat_info_pane_g1

0xedda,	// (0x0009a630) list_blid_sat_info_pane_t1

0x32ff,	// (0x0008eb55) mup_equalizer_pane_ParamLimits

0x32ff,	// (0x0008eb55) mup_equalizer_pane

0x3320,	// (0x0008eb76) mup_equalizer_pane_cp1_ParamLimits

0x3320,	// (0x0008eb76) mup_equalizer_pane_cp1

0x3341,	// (0x0008eb97) mup_equalizer_pane_cp2_ParamLimits

0x3341,	// (0x0008eb97) mup_equalizer_pane_cp2

0x3366,	// (0x0008ebbc) mup_equalizer_pane_cp3_ParamLimits

0x3366,	// (0x0008ebbc) mup_equalizer_pane_cp3

0x338f,	// (0x0008ebe5) mup_equalizer_pane_cp4_ParamLimits

0x338f,	// (0x0008ebe5) mup_equalizer_pane_cp4

0x33b8,	// (0x0008ec0e) mup_equalizer_pane_cp5

0x33d0,	// (0x0008ec26) mup_equalizer_pane_cp6

0x33e8,	// (0x0008ec3e) mup_equalizer_pane_cp7

0xa5e6,	// (0x00095e3c) bg_popup_call_poc_act_pane_g9

0xa5ee,	// (0x00095e44) bg_popup_call_poc_act_pane_g10

0xa5f6,	// (0x00095e4c) bg_popup_call_poc_act_pane_g11

0x000a,

0xe192,	// (0x000999e8) mup_scale_pane

0xe2b2,	// (0x00099b08) mup_scale_pane_g1

0xede8,	// (0x0009a63e) mup_scale_pane_g2

0x0006,

0xf42f,	// (0x0009ac85) mup_scale_pane_g

0xee0c,	// (0x0009a662) msg_data_pane

0xee14,	// (0x0009a66a) scroll_pane_cp017

0x3412,	// (0x0008ec68) bg_list_pane_cp04_ParamLimits

0x3412,	// (0x0008ec68) bg_list_pane_cp04

0xee1c,	// (0x0009a672) msg_data_pane_g1

0x343a,	// (0x0008ec90) msg_data_pane_g2

0x3444,	// (0x0008ec9a) msg_data_pane_g3

0x344e,	// (0x0008eca4) msg_data_pane_g4

0x3456,	// (0x0008ecac) msg_data_pane_g5

0x345e,	// (0x0008ecb4) msg_data_pane_g6

0x3466,	// (0x0008ecbc) msg_data_pane_g7

0x0006,

0xf43e,	// (0x0009ac94) msg_data_pane_g

0x346e,	// (0x0008ecc4) msg_text_pane_ParamLimits

0x346e,	// (0x0008ecc4) msg_text_pane

0x349a,	// (0x0008ecf0) qrid_highlight_pane_cp011_ParamLimits

0x349a,	// (0x0008ecf0) qrid_highlight_pane_cp011

0xdf37,	// (0x0009978d) msg_body_pane

0xdf37,	// (0x0009978d) msg_header_pane

0xee2d,	// (0x0009a683) input_focus_pane_cp07

0x34be,	// (0x0008ed14) msg_header_pane_t1_ParamLimits

0x34be,	// (0x0008ed14) msg_header_pane_t1

0x34d2,	// (0x0008ed28) msg_header_pane_t2_ParamLimits

0x34d2,	// (0x0008ed28) msg_header_pane_t2

0x0001,

0xf452,	// (0x0009aca8) msg_header_pane_t_ParamLimits

0xf452,	// (0x0009aca8) msg_header_pane_t

0xee42,	// (0x0009a698) msg_body_pane_g1

0x34e4,	// (0x0008ed3a) msg_body_pane_t1_ParamLimits

0x34e4,	// (0x0008ed3a) msg_body_pane_t1

0x3515,	// (0x0008ed6b) msg_body_pane_t2_ParamLimits

0x3515,	// (0x0008ed6b) msg_body_pane_t2

0x3527,	// (0x0008ed7d) msg_body_pane_t3_ParamLimits

0x3527,	// (0x0008ed7d) msg_body_pane_t3

0x0002,

0xf457,	// (0x0009acad) msg_body_pane_t_ParamLimits

0xf457,	// (0x0009acad) msg_body_pane_t

0x3573,	// (0x0008edc9) main_viewer_pane_g1_ParamLimits

0x3573,	// (0x0008edc9) main_viewer_pane_g1

0x3581,	// (0x0008edd7) main_viewer_pane_g2_ParamLimits

0x3581,	// (0x0008edd7) main_viewer_pane_g2

0x358f,	// (0x0008ede5) main_viewer_pane_g3_ParamLimits

0x358f,	// (0x0008ede5) main_viewer_pane_g3

0x359e,	// (0x0008edf4) main_viewer_pane_g4_ParamLimits

0x359e,	// (0x0008edf4) main_viewer_pane_g4

0x9e94,	// (0x000956ea) main_viewer_pane_g5_ParamLimits

0x9e94,	// (0x000956ea) main_viewer_pane_g5

0x9e94,	// (0x000956ea) main_viewer_pane_g7_ParamLimits

0x9e94,	// (0x000956ea) main_viewer_pane_g7

0x9ea6,	// (0x000956fc) main_viewer_pane_g8_ParamLimits

0x9ea6,	// (0x000956fc) main_viewer_pane_g8

0x0007,

0xf467,	// (0x0009acbd) main_viewer_pane_g_ParamLimits

0xf467,	// (0x0009acbd) main_viewer_pane_g

0xee4a,	// (0x0009a6a0) viewer_content_pane_ParamLimits

0xee4a,	// (0x0009a6a0) viewer_content_pane

0x35dc,	// (0x0008ee32) main_postcard_pane_g1_ParamLimits

0x35dc,	// (0x0008ee32) main_postcard_pane_g1

0x35f2,	// (0x0008ee48) main_postcard_pane_g2_ParamLimits

0x35f2,	// (0x0008ee48) main_postcard_pane_g2

0x3608,	// (0x0008ee5e) main_postcard_pane_g3_ParamLimits

0x3608,	// (0x0008ee5e) main_postcard_pane_g3

0x0005,

0xf478,	// (0x0009acce) main_postcard_pane_g_ParamLimits

0xf478,	// (0x0009acce) main_postcard_pane_g

0x361f,	// (0x0008ee75) main_postcard_pane_g4

0xa816,	// (0x0009606c) smil_status_volume_pane_g2

0x3662,	// (0x0008eeb8) postcard_pane_ParamLimits

0x3662,	// (0x0008eeb8) postcard_pane

0xee66,	// (0x0009a6bc) postcard_pane_g1_ParamLimits

0xee66,	// (0x0009a6bc) postcard_pane_g1

0x36b2,	// (0x0008ef08) postcard_pane_g2_ParamLimits

0x36b2,	// (0x0008ef08) postcard_pane_g2

0x36be,	// (0x0008ef14) postcard_pane_g3_ParamLimits

0x36be,	// (0x0008ef14) postcard_pane_g3

0xee58,	// (0x0009a6ae) postcard_pane_g4_ParamLimits

0xee58,	// (0x0009a6ae) postcard_pane_g4

0x36ca,	// (0x0008ef20) postcard_pane_g5_ParamLimits

0x36ca,	// (0x0008ef20) postcard_pane_g5

0x36dc,	// (0x0008ef32) postcard_pane_g6_ParamLimits

0x36dc,	// (0x0008ef32) postcard_pane_g6

0xee66,	// (0x0009a6bc) postcard_pane_g7_ParamLimits

0xee66,	// (0x0009a6bc) postcard_pane_g7

0x0006,

0xf485,	// (0x0009acdb) postcard_pane_g_ParamLimits

0xf485,	// (0x0009acdb) postcard_pane_g

0x36f4,	// (0x0008ef4a) main_mp2_pane_g1_ParamLimits

0x36f4,	// (0x0008ef4a) main_mp2_pane_g1

0x3702,	// (0x0008ef58) main_mp2_pane_g2_ParamLimits

0x3702,	// (0x0008ef58) main_mp2_pane_g2

0x370e,	// (0x0008ef64) main_mp2_pane_g3_ParamLimits

0x370e,	// (0x0008ef64) main_mp2_pane_g3

0x0002,

0xf494,	// (0x0009acea) main_mp2_pane_g_ParamLimits

0xf494,	// (0x0009acea) main_mp2_pane_g

0x371a,	// (0x0008ef70) main_mp2_pane_t1_ParamLimits

0x371a,	// (0x0008ef70) main_mp2_pane_t1

0x3731,	// (0x0008ef87) main_mp2_pane_t2_ParamLimits

0x3731,	// (0x0008ef87) main_mp2_pane_t2

0x3745,	// (0x0008ef9b) main_mp2_pane_t3_ParamLimits

0x3745,	// (0x0008ef9b) main_mp2_pane_t3

0x0002,

0xf49b,	// (0x0009acf1) main_mp2_pane_t_ParamLimits

0xf49b,	// (0x0009acf1) main_mp2_pane_t

0xee74,	// (0x0009a6ca) pec_content_pane_ParamLimits

0xee74,	// (0x0009a6ca) pec_content_pane

0xe5bf,	// (0x00099e15) scroll_pane_cp015

0xee86,	// (0x0009a6dc) pec_attribute_pane_ParamLimits

0xee86,	// (0x0009a6dc) pec_attribute_pane

0x3757,	// (0x0008efad) pec_content_pane_g1_ParamLimits

0x3757,	// (0x0008efad) pec_content_pane_g1

0xee96,	// (0x0009a6ec) pec_content_pane_t1_ParamLimits

0xee96,	// (0x0009a6ec) pec_content_pane_t1

0xeea8,	// (0x0009a6fe) pec_content_pane_t2_ParamLimits

0xeea8,	// (0x0009a6fe) pec_content_pane_t2

0x0001,

0x0234,	// (0x0008ba8a) pec_content_pane_t_ParamLimits

0x0234,	// (0x0008ba8a) pec_content_pane_t

0x3763,	// (0x0008efb9) list_single_graphic_pane_cp01_ParamLimits

0x3763,	// (0x0008efb9) list_single_graphic_pane_cp01

0xe192,	// (0x000999e8) bg_popup_sub_pane_cp04

0xeeba,	// (0x0009a710) popup_mup_playback_window_g1

0xeec6,	// (0x0009a71c) popup_mup_playback_window_t1

0xeedb,	// (0x0009a731) popup_mup_playback_window_t2

0x0001,

0x0239,	// (0x0008ba8f) popup_mup_playback_window_t

0xef12,	// (0x0009a768) main_image_pane_g1_ParamLimits

0xef12,	// (0x0009a768) main_image_pane_g1

0xef55,	// (0x0009a7ab) scroll_pane_cp018_ParamLimits

0xef55,	// (0x0009a7ab) scroll_pane_cp018

0xef6d,	// (0x0009a7c3) scroll_pane_cp016_ParamLimits

0xef6d,	// (0x0009a7c3) scroll_pane_cp016

0x3835,	// (0x0008f08b) smil2_image_pane_ParamLimits

0x3835,	// (0x0008f08b) smil2_image_pane

0x386b,	// (0x0008f0c1) smil2_root_pane_ParamLimits

0x386b,	// (0x0008f0c1) smil2_root_pane

0x38a3,	// (0x0008f0f9) smil2_text_pane_ParamLimits

0x38a3,	// (0x0008f0f9) smil2_text_pane

0xdf37,	// (0x0009978d) bg_list_pane_cp06

0xefa9,	// (0x0009a7ff) grid_radio_pane

0xdf37,	// (0x0009978d) bg_popup_window_pane_cp06

0xefb3,	// (0x0009a809) main_fmradio_pane_t1

0xea5d,	// (0x0009a2b3) heading_pane_cp04

0xefc1,	// (0x0009a817) main_fmradio_pane_t2

0xa5fe,	// (0x00095e54) popup_cale_lunar_info_window_g1

0xefcf,	// (0x0009a825) main_fmradio_pane_t3

0xa606,	// (0x00095e5c) popup_cale_lunar_info_window_g2

0xefdf,	// (0x0009a835) main_fmradio_pane_t4

0x0001,

0xefed,	// (0x0009a843) main_fmradio_pane_t5

0x0004,

0xf566,	// (0x0009adbc) popup_cale_lunar_info_window_g

0x024e,	// (0x0008baa4) main_fmradio_pane_t

0xeffb,	// (0x0009a851) wait_bar_pane_cp03

0xf003,	// (0x0009a859) cell_fmradio_pane_ParamLimits

0xf003,	// (0x0009a859) cell_fmradio_pane

0xee66,	// (0x0009a6bc) cell_fmradio_pane_g1_ParamLimits

0xee66,	// (0x0009a6bc) cell_fmradio_pane_g1

0xdf37,	// (0x0009978d) grid_highlight_pane_cp011

0xf018,	// (0x0009a86e) poc_content_pane_ParamLimits

0xf018,	// (0x0009a86e) poc_content_pane

0xf02a,	// (0x0009a880) scroll_pane_cp019

0x3933,	// (0x0008f189) popup_call_poc_act_window_ParamLimits

0x3933,	// (0x0008f189) popup_call_poc_act_window

0x3957,	// (0x0008f1ad) popup_call_poc_inact_window_ParamLimits

0x3957,	// (0x0008f1ad) popup_call_poc_inact_window

0xf53d,	// (0x0009ad93) bg_popup_call_poc_act_pane_g

0xa576,	// (0x00095dcc) bg_popup_call_poc_inact_pane_g1

0xa57e,	// (0x00095dd4) bg_popup_call_poc_inact_pane_g2

0xf032,	// (0x0009a888) popup_call_poc_act_window_g2

0xa586,	// (0x00095ddc) bg_popup_call_poc_inact_pane_g3

0xa58e,	// (0x00095de4) bg_popup_call_poc_inact_pane_g4

0xa596,	// (0x00095dec) bg_popup_call_poc_inact_pane_g5

0xf03a,	// (0x0009a890) popup_call_poc_act_window_t1_ParamLimits

0xf03a,	// (0x0009a890) popup_call_poc_act_window_t1

0xf07c,	// (0x0009a8d2) popup_call_poc_act_window_t2_ParamLimits

0xf07c,	// (0x0009a8d2) popup_call_poc_act_window_t2

0xf0a4,	// (0x0009a8fa) popup_call_poc_act_window_t3_ParamLimits

0xf0a4,	// (0x0009a8fa) popup_call_poc_act_window_t3

0xf0cc,	// (0x0009a922) popup_call_poc_act_window_t4_ParamLimits

0xf0cc,	// (0x0009a922) popup_call_poc_act_window_t4

0x0003,

0xf4b2,	// (0x0009ad08) popup_call_poc_act_window_t_ParamLimits

0xf4b2,	// (0x0009ad08) popup_call_poc_act_window_t

0xa59e,	// (0x00095df4) bg_popup_call_poc_inact_pane_g6

0xa5a6,	// (0x00095dfc) bg_popup_call_poc_inact_pane_g7

0xa5ae,	// (0x00095e04) bg_popup_call_poc_inact_pane_g8

0xf0de,	// (0x0009a934) popup_call_poc_inact_window_g2

0xa5b6,	// (0x00095e0c) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf52a,	// (0x0009ad80) bg_popup_call_poc_inact_pane_g

0xf0e6,	// (0x0009a93c) popup_call_poc_inact_window_t1_ParamLimits

0xf0e6,	// (0x0009a93c) popup_call_poc_inact_window_t1

0x3970,	// (0x0008f1c6) popup_call_poc_inact_window_t2_ParamLimits

0x3970,	// (0x0008f1c6) popup_call_poc_inact_window_t2

0x3985,	// (0x0008f1db) popup_call_poc_inact_window_t3_ParamLimits

0x3985,	// (0x0008f1db) popup_call_poc_inact_window_t3

0x0002,

0xf4bb,	// (0x0009ad11) popup_call_poc_inact_window_t_ParamLimits

0xf4bb,	// (0x0009ad11) popup_call_poc_inact_window_t

0xa776,	// (0x00095fcc) context_pane_ParamLimits

0x497e,	// (0x000901d4) signal_pane_ParamLimits

0xecb9,	// (0x0009a50f) main_call2_pane

0xa764,	// (0x00095fba) popup_phob_thumbnail2_window_ParamLimits

0xa764,	// (0x00095fba) popup_phob_thumbnail2_window

0x9e7c,	// (0x000956d2) aid_hotspot_pointer_arrow_pane

0x9e84,	// (0x000956da) aid_hotspot_pointer_hand_pane

0x443e,	// (0x0008fc94) phob_pre_status_pane_g5

0x18fd,	// (0x0008d153) cams_zoom_pane_ParamLimits

0x190c,	// (0x0008d162) image_vga_pane_ParamLimits

0x1926,	// (0x0008d17c) main_camera_pane_g1_ParamLimits

0x1938,	// (0x0008d18e) main_camera_pane_g2_ParamLimits

0x1948,	// (0x0008d19e) main_camera_pane_g3_ParamLimits

0x195c,	// (0x0008d1b2) main_camera_pane_g4_ParamLimits

0x1970,	// (0x0008d1c6) main_camera_pane_g5_ParamLimits

0x1984,	// (0x0008d1da) main_camera_pane_g6_ParamLimits

0x1998,	// (0x0008d1ee) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x0009aa93) main_camera_pane_g_ParamLimits

0x19ac,	// (0x0008d202) main_camera_pane_t1_ParamLimits

0x19c2,	// (0x0008d218) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0009aaa4) main_camera_pane_t_ParamLimits

0xe192,	// (0x000999e8) bg_popup_preview_window_pane_cp01_ParamLimits

0xe192,	// (0x000999e8) bg_popup_preview_window_pane_cp01

0x399a,	// (0x0008f1f0) popup_phob_thumbnail2_window_g1_ParamLimits

0x399a,	// (0x0008f1f0) popup_phob_thumbnail2_window_g1

0xdf37,	// (0x0009978d) call2_cli_visual_pane

0x39c1,	// (0x0008f217) popup_call2_audio_conf_window_ParamLimits

0x39c1,	// (0x0008f217) popup_call2_audio_conf_window

0x39e9,	// (0x0008f23f) popup_call2_audio_first_window_ParamLimits

0x39e9,	// (0x0008f23f) popup_call2_audio_first_window

0x3a7f,	// (0x0008f2d5) popup_call2_audio_in_window_ParamLimits

0x3a7f,	// (0x0008f2d5) popup_call2_audio_in_window

0x3acb,	// (0x0008f321) popup_call2_audio_out_window_ParamLimits

0x3acb,	// (0x0008f321) popup_call2_audio_out_window

0x3b3d,	// (0x0008f393) popup_call2_audio_second_window_ParamLimits

0x3b3d,	// (0x0008f393) popup_call2_audio_second_window

0x3ba3,	// (0x0008f3f9) popup_call2_audio_wait_window_ParamLimits

0x3ba3,	// (0x0008f3f9) popup_call2_audio_wait_window

0xdf37,	// (0x0009978d) bg_popup_call2_act_pane_cp03

0xe174,	// (0x000999ca) list_conf_pane_cp

0x3bdd,	// (0x0008f433) popup_call2_audio_conf_window_t1

0x3beb,	// (0x0008f441) list_single_graphic_popup_conf2_pane_ParamLimits

0x3beb,	// (0x0008f441) list_single_graphic_popup_conf2_pane

0xeada,	// (0x0009a330) list_highlight_pane_cp04

0x3bfe,	// (0x0008f454) list_single_graphic_popup_conf2_pane_g1

0xeaeb,	// (0x0009a341) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4c2,	// (0x0009ad18) list_single_graphic_popup_conf2_pane_g

0x3c08,	// (0x0008f45e) list_single_graphic_popup_conf2_pane_t1

0x3c16,	// (0x0008f46c) bg_popup_call2_act_pane_cp01_ParamLimits

0x3c16,	// (0x0008f46c) bg_popup_call2_act_pane_cp01

0x3ca0,	// (0x0008f4f6) call_type_pane_cp05_ParamLimits

0x3ca0,	// (0x0008f4f6) call_type_pane_cp05

0x3cf4,	// (0x0008f54a) popup_call2_audio_second_window_g1_ParamLimits

0x3cf4,	// (0x0008f54a) popup_call2_audio_second_window_g1

0x3d48,	// (0x0008f59e) popup_call2_audio_second_window_g2_ParamLimits

0x3d48,	// (0x0008f59e) popup_call2_audio_second_window_g2

0x0002,

0xf4c7,	// (0x0009ad1d) popup_call2_audio_second_window_g_ParamLimits

0xf4c7,	// (0x0009ad1d) popup_call2_audio_second_window_g

0x3dad,	// (0x0008f603) popup_call2_audio_second_window_t1_ParamLimits

0x3dad,	// (0x0008f603) popup_call2_audio_second_window_t1

0x3e68,	// (0x0008f6be) popup_call2_audio_second_window_t2_ParamLimits

0x3e68,	// (0x0008f6be) popup_call2_audio_second_window_t2

0x3ebb,	// (0x0008f711) popup_call2_audio_second_window_t3_ParamLimits

0x3ebb,	// (0x0008f711) popup_call2_audio_second_window_t3

0x0003,

0xf4ce,	// (0x0009ad24) popup_call2_audio_second_window_t_ParamLimits

0xf4ce,	// (0x0009ad24) popup_call2_audio_second_window_t

0xdf37,	// (0x0009978d) bg_popup_call2_in_pane_cp02

0xdf41,	// (0x00099797) call_type_pane_cp04

0xdf49,	// (0x0009979f) popup_call2_audio_wait_window_g1

0xdf51,	// (0x000997a7) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x0009a980) popup_call2_audio_wait_window_g

0xdf59,	// (0x000997af) popup_call2_audio_wait_window_t3

0x3fae,	// (0x0008f804) bg_popup_call2_act_pane_ParamLimits

0x3fae,	// (0x0008f804) bg_popup_call2_act_pane

0x406e,	// (0x0008f8c4) call_type_pane_cp03_ParamLimits

0x406e,	// (0x0008f8c4) call_type_pane_cp03

0x40d2,	// (0x0008f928) popup_call2_audio_first_window_g1_ParamLimits

0x40d2,	// (0x0008f928) popup_call2_audio_first_window_g1

0x4142,	// (0x0008f998) popup_call2_audio_first_window_g2_ParamLimits

0x4142,	// (0x0008f998) popup_call2_audio_first_window_g2

0xea7f,	// (0x0009a2d5) popup_call2_audio_first_window_g3_ParamLimits

0xea7f,	// (0x0009a2d5) popup_call2_audio_first_window_g3

0x0004,

0xf4d7,	// (0x0009ad2d) popup_call2_audio_first_window_g_ParamLimits

0xf4d7,	// (0x0009ad2d) popup_call2_audio_first_window_g

0x4220,	// (0x0008fa76) popup_call2_audio_first_window_t1_ParamLimits

0x4220,	// (0x0008fa76) popup_call2_audio_first_window_t1

0x9ebe,	// (0x00095714) popup_call2_audio_first_window_t4_ParamLimits

0x9ebe,	// (0x00095714) popup_call2_audio_first_window_t4

0x9fa1,	// (0x000957f7) popup_call2_audio_first_window_t5_ParamLimits

0x9fa1,	// (0x000957f7) popup_call2_audio_first_window_t5

0x0003,

0xf4e2,	// (0x0009ad38) popup_call2_audio_first_window_t_ParamLimits

0xf4e2,	// (0x0009ad38) popup_call2_audio_first_window_t

0xe18a,	// (0x000999e0) bg_popup_call2_act_pane_g1

0xa610,	// (0x00095e66) popup_cale_lunar_info_window_t1

0xa61e,	// (0x00095e74) popup_cale_lunar_info_window_t2

0xa62c,	// (0x00095e82) popup_cale_lunar_info_window_t3

0xdf37,	// (0x0009978d) bg_popup_call2_bubble_pane

0xa0a2,	// (0x000958f8) bg_popup_call2_in_pane_cp01_ParamLimits

0xa0a2,	// (0x000958f8) bg_popup_call2_in_pane_cp01

0xdc13,	// (0x00099469) call_type_pane_cp02

0xa0ea,	// (0x00095940) popup_call2_audio_out_window_g1_ParamLimits

0xa0ea,	// (0x00095940) popup_call2_audio_out_window_g1

0xa116,	// (0x0009596c) popup_call2_audio_out_window_g2_ParamLimits

0xa116,	// (0x0009596c) popup_call2_audio_out_window_g2

0xa13e,	// (0x00095994) popup_call2_audio_out_window_g3_ParamLimits

0xa13e,	// (0x00095994) popup_call2_audio_out_window_g3

0x0003,

0xf4eb,	// (0x0009ad41) popup_call2_audio_out_window_g_ParamLimits

0xf4eb,	// (0x0009ad41) popup_call2_audio_out_window_g

0xa179,	// (0x000959cf) popup_call2_audio_out_window_t1_ParamLimits

0xa179,	// (0x000959cf) popup_call2_audio_out_window_t1

0xa1d8,	// (0x00095a2e) popup_call2_audio_out_window_t2_ParamLimits

0xa1d8,	// (0x00095a2e) popup_call2_audio_out_window_t2

0xa22c,	// (0x00095a82) popup_call2_audio_out_window_t3_ParamLimits

0xa22c,	// (0x00095a82) popup_call2_audio_out_window_t3

0xa242,	// (0x00095a98) popup_call2_audio_out_window_t4_ParamLimits

0xa242,	// (0x00095a98) popup_call2_audio_out_window_t4

0xa258,	// (0x00095aae) popup_call2_audio_out_window_t5_ParamLimits

0xa258,	// (0x00095aae) popup_call2_audio_out_window_t5

0x0005,

0xf4f4,	// (0x0009ad4a) popup_call2_audio_out_window_t_ParamLimits

0xf4f4,	// (0x0009ad4a) popup_call2_audio_out_window_t

0xa2bc,	// (0x00095b12) bg_popup_call2_in_pane_ParamLimits

0xa2bc,	// (0x00095b12) bg_popup_call2_in_pane

0xa318,	// (0x00095b6e) popup_call2_audio_in_window_g1_ParamLimits

0xa318,	// (0x00095b6e) popup_call2_audio_in_window_g1

0xa350,	// (0x00095ba6) popup_call2_audio_in_window_g2_ParamLimits

0xa350,	// (0x00095ba6) popup_call2_audio_in_window_g2

0xa388,	// (0x00095bde) popup_call2_audio_in_window_g3_ParamLimits

0xa388,	// (0x00095bde) popup_call2_audio_in_window_g3

0x0003,

0xf501,	// (0x0009ad57) popup_call2_audio_in_window_g_ParamLimits

0xf501,	// (0x0009ad57) popup_call2_audio_in_window_g

0xa3e0,	// (0x00095c36) popup_call2_audio_in_window_t1_ParamLimits

0xa3e0,	// (0x00095c36) popup_call2_audio_in_window_t1

0xa460,	// (0x00095cb6) popup_call2_audio_in_window_t2_ParamLimits

0xa460,	// (0x00095cb6) popup_call2_audio_in_window_t2

0xa4e0,	// (0x00095d36) popup_call2_audio_in_window_t3_ParamLimits

0xa4e0,	// (0x00095d36) popup_call2_audio_in_window_t3

0xa4fa,	// (0x00095d50) popup_call2_audio_in_window_t4_ParamLimits

0xa4fa,	// (0x00095d50) popup_call2_audio_in_window_t4

0xa50c,	// (0x00095d62) popup_call2_audio_in_window_t5_ParamLimits

0xa50c,	// (0x00095d62) popup_call2_audio_in_window_t5

0xa521,	// (0x00095d77) popup_call2_audio_in_window_t6_ParamLimits

0xa521,	// (0x00095d77) popup_call2_audio_in_window_t6

0x0005,

0xf50a,	// (0x0009ad60) popup_call2_audio_in_window_t_ParamLimits

0xf50a,	// (0x0009ad60) popup_call2_audio_in_window_t

0xe18a,	// (0x000999e0) bg_popup_call2_in_pane_g1

0xa63a,	// (0x00095e90) popup_cale_lunar_info_window_t4

0x0003,

0xf56b,	// (0x0009adc1) popup_cale_lunar_info_window_t

0xe192,	// (0x000999e8) bg_popup_call2_rect_pane_ParamLimits

0xe192,	// (0x000999e8) bg_popup_call2_rect_pane

0xdf37,	// (0x0009978d) call2_cli_visual_graphic_pane

0xdf37,	// (0x0009978d) call2_cli_visual_text_pane

0xa829,	// (0x0009607f) smil_status_volume_pane_g3

0x0002,

0xe2b2,	// (0x00099b08) call2_cli_visual_graphic_pane_g1

0xe2b2,	// (0x00099b08) call2_cli_visual_graphic_pane_g2

0xe2b2,	// (0x00099b08) call2_cli_visual_graphic_pane_g3

0x0002,

0x02be,	// (0x0008bb14) call2_cli_visual_graphic_pane_g

0xa536,	// (0x00095d8c) bg_popup_call2_rect_pane_g1

0xe350,	// (0x00099ba6) bg_popup_call2_rect_pane_g2

0xa53e,	// (0x00095d94) bg_popup_call2_rect_pane_g3

0xa546,	// (0x00095d9c) bg_popup_call2_rect_pane_g4

0xa54e,	// (0x00095da4) bg_popup_call2_rect_pane_g5

0xa556,	// (0x00095dac) bg_popup_call2_rect_pane_g6

0xa55e,	// (0x00095db4) bg_popup_call2_rect_pane_g7

0xa566,	// (0x00095dbc) bg_popup_call2_rect_pane_g8

0xa56e,	// (0x00095dc4) bg_popup_call2_rect_pane_g9

0x0008,

0xf517,	// (0x0009ad6d) bg_popup_call2_rect_pane_g

0xa576,	// (0x00095dcc) bg_popup_call2_bubble_pane_g1

0xa57e,	// (0x00095dd4) bg_popup_call2_bubble_pane_g2

0xa586,	// (0x00095ddc) bg_popup_call2_bubble_pane_g3

0xa58e,	// (0x00095de4) bg_popup_call2_bubble_pane_g4

0xa596,	// (0x00095dec) bg_popup_call2_bubble_pane_g5

0xa59e,	// (0x00095df4) bg_popup_call2_bubble_pane_g6

0xa5a6,	// (0x00095dfc) bg_popup_call2_bubble_pane_g7

0xa5ae,	// (0x00095e04) bg_popup_call2_bubble_pane_g8

0xa5b6,	// (0x00095e0c) bg_popup_call2_bubble_pane_g9

0x0008,

0xf52a,	// (0x0009ad80) bg_popup_call2_bubble_pane_g

0x1506,	// (0x0008cd5c) aid_cale_week_size_cell_pane

0x19dc,	// (0x0008d232) aid_cams_cif_uncrop_pane_ParamLimits

0x19dc,	// (0x0008d232) aid_cams_cif_uncrop_pane

0x1b95,	// (0x0008d3eb) aid_cams_size_cell_ParamLimits

0x1b95,	// (0x0008d3eb) aid_cams_size_cell

0x1ba9,	// (0x0008d3ff) grid_cams_pane_ParamLimits

0x1bc3,	// (0x0008d419) linegrid_cams_pane_ParamLimits

0x1da4,	// (0x0008d5fa) call_video_pane_t1

0x1db6,	// (0x0008d60c) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0009aaf7) call_video_pane_t

0x2178,	// (0x0008d9ce) aid_cale_month_size_cell_pane_ParamLimits

0x2178,	// (0x0008d9ce) aid_cale_month_size_cell_pane

0xf5b4,	// (0x0009ae0a) smil_status_volume_pane_g

0xa836,	// (0x0009608c) volume_smil_pane_ParamLimits

0x0d8a,	// (0x0008c5e0) aid_popup2_width_pane

0x1477,	// (0x0008cccd) cell_qdial_pane_g4_ParamLimits

0x1477,	// (0x0008cccd) cell_qdial_pane_g4

0x2e03,	// (0x0008e659) aid_blid_cardinal_pane_ParamLimits

0x2e13,	// (0x0008e669) aid_blid_destination_pane_ParamLimits

0x2e13,	// (0x0008e669) aid_blid_destination_pane

0xe192,	// (0x000999e8) bg_popup_call_poc_act_pane_ParamLimits

0xe192,	// (0x000999e8) bg_popup_call_poc_act_pane

0xe192,	// (0x000999e8) bg_popup_call_poc_inact_pane_ParamLimits

0xe192,	// (0x000999e8) bg_popup_call_poc_inact_pane

0xa5be,	// (0x00095e14) bg_popup_call_poc_act_pane_g1

0xa5c6,	// (0x00095e1c) bg_popup_call_poc_act_pane_g2

0xa5ce,	// (0x00095e24) bg_popup_call_poc_act_pane_g3

0xa58e,	// (0x00095de4) bg_popup_call_poc_act_pane_g4

0xa596,	// (0x00095dec) bg_popup_call_poc_act_pane_g5

0xa5d6,	// (0x00095e2c) bg_popup_call_poc_act_pane_g6

0xa5a6,	// (0x00095dfc) bg_popup_call_poc_act_pane_g7

0xa5de,	// (0x00095e34) bg_popup_call_poc_act_pane_g8

0xdf37,	// (0x0009978d) main_usb_pane

0xa73b,	// (0x00095f91) popup_cale_lunar_info_window

0x1ff8,	// (0x0008d84e) im_reading_pane_t1_ParamLimits

0xe517,	// (0x00099d6d) list_im_pane_ParamLimits

0xe528,	// (0x00099d7e) scroll_pane_cp07_ParamLimits

0xdf37,	// (0x0009978d) grid_highlight_pane_cp012

0xe192,	// (0x000999e8) mup_scale_pane_ParamLimits

0xee66,	// (0x0009a6bc) main_usb_pane_g1_ParamLimits

0xee66,	// (0x0009a6bc) main_usb_pane_g1

0x434a,	// (0x0008fba0) main_usb_pane_g2_ParamLimits

0x434a,	// (0x0008fba0) main_usb_pane_g2

0x0001,

0xf554,	// (0x0009adaa) main_usb_pane_g_ParamLimits

0xf554,	// (0x0009adaa) main_usb_pane_g

0x4360,	// (0x0008fbb6) main_usb_pane_t1_ParamLimits

0x4360,	// (0x0008fbb6) main_usb_pane_t1

0x4372,	// (0x0008fbc8) main_usb_pane_t2_ParamLimits

0x4372,	// (0x0008fbc8) main_usb_pane_t2

0x4384,	// (0x0008fbda) main_usb_pane_t3_ParamLimits

0x4384,	// (0x0008fbda) main_usb_pane_t3

0x4396,	// (0x0008fbec) main_usb_pane_t4_ParamLimits

0x4396,	// (0x0008fbec) main_usb_pane_t4

0x43ab,	// (0x0008fc01) main_usb_pane_t5_ParamLimits

0x43ab,	// (0x0008fc01) main_usb_pane_t5

0x43c0,	// (0x0008fc16) main_usb_pane_t6_ParamLimits

0x43c0,	// (0x0008fc16) main_usb_pane_t6

0x0005,

0xf559,	// (0x0009adaf) main_usb_pane_t_ParamLimits

0x2da2,	// (0x0008e5f8) aid_text_placing

0x2dad,	// (0x0008e603) main_location2_pane_t1_ParamLimits

0x2dc3,	// (0x0008e619) main_location2_pane_t2_ParamLimits

0x2dd9,	// (0x0008e62f) main_location2_pane_t3_ParamLimits

0x2def,	// (0x0008e645) main_location2_pane_t4_ParamLimits

0x2def,	// (0x0008e645) main_location2_pane_t4

0xf3ba,	// (0x0009ac10) main_location2_pane_t_ParamLimits

0xe1ce,	// (0x00099a24) find_pinb_pane_g2_ParamLimits

0xe1ce,	// (0x00099a24) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0009a9a6) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0009a9a6) find_pinb_pane_g

0xe1da,	// (0x00099a30) find_pinb_pane_t1_ParamLimits

0xe1ec,	// (0x00099a42) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x0009a9ab) find_pinb_pane_t_ParamLimits

0xdf37,	// (0x0009978d) main_call3_pane

0x24ec,	// (0x0008dd42) cale_month_day_heading_pane_t1_ParamLimits

0x254a,	// (0x0008dda0) cale_month_day_heading_pane_t2_ParamLimits

0x25af,	// (0x0008de05) cale_month_day_heading_pane_t3_ParamLimits

0x2614,	// (0x0008de6a) cale_month_day_heading_pane_t4_ParamLimits

0x2679,	// (0x0008decf) cale_month_day_heading_pane_t5_ParamLimits

0x26de,	// (0x0008df34) cale_month_day_heading_pane_t6_ParamLimits

0x2743,	// (0x0008df99) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x0009ab2f) cale_month_day_heading_pane_t_ParamLimits

0xe768,	// (0x00099fbe) smil_status_volume_pane

0x3686,	// (0x0008eedc) postcard_address_pane_ParamLimits

0x3686,	// (0x0008eedc) postcard_address_pane

0x369c,	// (0x0008eef2) postcard_message_pane_ParamLimits

0x369c,	// (0x0008eef2) postcard_message_pane

0x4323,	// (0x0008fb79) call2_cli_visual_pane_t1_ParamLimits

0x4323,	// (0x0008fb79) call2_cli_visual_pane_t1

0x4b8f,	// (0x000903e5) postcard_message_pane_t1_ParamLimits

0x4b8f,	// (0x000903e5) postcard_message_pane_t1

0xa84b,	// (0x000960a1) postcard_address_pane_t1_ParamLimits

0xa84b,	// (0x000960a1) postcard_address_pane_t1

0x4b7b,	// (0x000903d1) popup_call3_audio_in_window_ParamLimits

0x4b7b,	// (0x000903d1) popup_call3_audio_in_window

0x4a00,	// (0x00090256) bg_popup_call3_in_pane_ParamLimits

0x4a00,	// (0x00090256) bg_popup_call3_in_pane

0x4a7c,	// (0x000902d2) popup_call3_audio_in_window_g1_ParamLimits

0x4a7c,	// (0x000902d2) popup_call3_audio_in_window_g1

0x4a9c,	// (0x000902f2) popup_call3_audio_in_window_g2_ParamLimits

0x4a9c,	// (0x000902f2) popup_call3_audio_in_window_g2

0x4abc,	// (0x00090312) popup_call3_audio_in_window_g3_ParamLimits

0x4abc,	// (0x00090312) popup_call3_audio_in_window_g3

0x0003,

0xf5bb,	// (0x0009ae11) popup_call3_audio_in_window_g_ParamLimits

0xf5bb,	// (0x0009ae11) popup_call3_audio_in_window_g

0x4aed,	// (0x00090343) popup_call3_audio_in_window_t1_ParamLimits

0x4aed,	// (0x00090343) popup_call3_audio_in_window_t1

0x4b2b,	// (0x00090381) popup_call3_audio_in_window_t2_ParamLimits

0x4b2b,	// (0x00090381) popup_call3_audio_in_window_t2

0x4b69,	// (0x000903bf) popup_call3_audio_in_window_t3_ParamLimits

0x4b69,	// (0x000903bf) popup_call3_audio_in_window_t3

0x0002,

0xf5c4,	// (0x0009ae1a) popup_call3_audio_in_window_t_ParamLimits

0xf5c4,	// (0x0009ae1a) popup_call3_audio_in_window_t

0xecb9,	// (0x0009a50f) bg_popup_call3_rect_pane

0xa536,	// (0x00095d8c) bg_popup_call3_rect_pane_g1

0xe350,	// (0x00099ba6) bg_popup_call3_rect_pane_g2

0xa53e,	// (0x00095d94) bg_popup_call3_rect_pane_g3

0xa546,	// (0x00095d9c) bg_popup_call3_rect_pane_g4

0xa54e,	// (0x00095da4) bg_popup_call3_rect_pane_g5

0xa556,	// (0x00095dac) bg_popup_call3_rect_pane_g6

0xa55e,	// (0x00095db4) bg_popup_call3_rect_pane_g7

0x31eb,	// (0x0008ea41) mup_visualizer_osc_pane

0xed78,	// (0x0009a5ce) mup_visualizer_spec_pane

0x4a30,	// (0x00090286) call3_video_qcif_pane_ParamLimits

0x4a30,	// (0x00090286) call3_video_qcif_pane

0x4a43,	// (0x00090299) call3_video_qcif_uncrop_pane_ParamLimits

0x4a43,	// (0x00090299) call3_video_qcif_uncrop_pane

0x4a53,	// (0x000902a9) call3_video_subqcif_pane_ParamLimits

0x4a53,	// (0x000902a9) call3_video_subqcif_pane

0x4a69,	// (0x000902bf) call3_video_subqcif_uncrop_pane_ParamLimits

0x4a69,	// (0x000902bf) call3_video_subqcif_uncrop_pane

0x4adc,	// (0x00090332) popup_call3_audio_in_window_g4_ParamLimits

0x4adc,	// (0x00090332) popup_call3_audio_in_window_g4

0x49ef,	// (0x00090245) mup_spec_half_pane

0x49f8,	// (0x0009024e) mup_spec_half_pane_cp

0xa7e9,	// (0x0009603f) mup_osc_middle_pane

0xa7f2,	// (0x00096048) mup_visualizer_osc_pane_g1

0x49cf,	// (0x00090225) mup_spec_bar_pane_ParamLimits

0x49cf,	// (0x00090225) mup_spec_bar_pane

0xa7d6,	// (0x0009602c) mup_spec_bar_pane_g1

0xa7e0,	// (0x00096036) mup_spec_bar_pane_g2

0x0001,

0xf5af,	// (0x0009ae05) mup_spec_bar_pane_g

0x1506,	// (0x0008cd5c) aid_cale_week_size_cell_pane_ParamLimits

0x1519,	// (0x0008cd6f) bg_cale_heading_pane_ParamLimits

0xe384,	// (0x00099bda) bg_cale_pane_cp01_ParamLimits

0x1535,	// (0x0008cd8b) cale_week_corner_pane_ParamLimits

0x154b,	// (0x0008cda1) cale_week_day_heading_pane_ParamLimits

0x1567,	// (0x0008cdbd) cale_week_scroll_pane_g1_ParamLimits

0x1580,	// (0x0008cdd6) cale_week_scroll_pane_g2_ParamLimits

0x1591,	// (0x0008cde7) cale_week_scroll_pane_g3_ParamLimits

0x15a2,	// (0x0008cdf8) cale_week_scroll_pane_g4_ParamLimits

0x15b3,	// (0x0008ce09) cale_week_scroll_pane_g5_ParamLimits

0x15c4,	// (0x0008ce1a) cale_week_scroll_pane_g6_ParamLimits

0x15d5,	// (0x0008ce2b) cale_week_scroll_pane_g7_ParamLimits

0x15e6,	// (0x0008ce3c) cale_week_scroll_pane_g8_ParamLimits

0x15f7,	// (0x0008ce4d) cale_week_scroll_pane_g9_ParamLimits

0x1608,	// (0x0008ce5e) cale_week_scroll_pane_g10_ParamLimits

0x1619,	// (0x0008ce6f) cale_week_scroll_pane_g11_ParamLimits

0x162a,	// (0x0008ce80) cale_week_scroll_pane_g12_ParamLimits

0x163b,	// (0x0008ce91) cale_week_scroll_pane_g13_ParamLimits

0x1654,	// (0x0008ceaa) cale_week_scroll_pane_g14_ParamLimits

0x166d,	// (0x0008cec3) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0009aa37) cale_week_scroll_pane_g_ParamLimits

0x1686,	// (0x0008cedc) cale_week_time_pane_ParamLimits

0x1697,	// (0x0008ceed) grid_cale_week_pane_ParamLimits

0xe39d,	// (0x00099bf3) listscroll_cale_week_pane_t1

0x16b2,	// (0x0008cf08) scroll_pane_cp08_ParamLimits

0x21c9,	// (0x0008da1f) cale_month_corner_pane_ParamLimits

0xe73e,	// (0x00099f94) cale_month_pane_t1

0x24ad,	// (0x0008dd03) cale_month_week_pane_ParamLimits

0x2bc6,	// (0x0008e41c) popup_call_status_window_g1_ParamLimits

0x2bda,	// (0x0008e430) popup_call_status_window_g2_ParamLimits

0x2bee,	// (0x0008e444) popup_call_status_window_g3_ParamLimits

0xf350,	// (0x0009aba6) popup_call_status_window_g_ParamLimits

0xea4d,	// (0x0009a2a3) aid_call2_pane

0x34b0,	// (0x0008ed06) msg_header_pane_g1

0x3686,	// (0x0008eedc) postcard_address2_pane_ParamLimits

0x3686,	// (0x0008eedc) postcard_address2_pane

0x369c,	// (0x0008eef2) postcard_message2_pane_ParamLimits

0x369c,	// (0x0008eef2) postcard_message2_pane

0x498c,	// (0x000901e2) message2_row_pane_ParamLimits

0x498c,	// (0x000901e2) message2_row_pane

0xa791,	// (0x00095fe7) address2_row_pane_ParamLimits

0xa791,	// (0x00095fe7) address2_row_pane

0xa7a4,	// (0x00095ffa) postcard_message2_row_pane_g1

0xa7ac,	// (0x00096002) postcard_message2_row_pane_t1

0xa7a4,	// (0x00095ffa) address2_row_pane_g1

0xa7ac,	// (0x00096002) address2_row_pane_t1

0x18c0,	// (0x0008d116) aid_size_cell_vorec

0xdf37,	// (0x0009978d) main_rss_pane

0x49af,	// (0x00090205) rss_list_single_pane_ParamLimits

0x49af,	// (0x00090205) rss_list_single_pane

0xa7ba,	// (0x00096010) rss_list_single_pane_t1

0xa7c8,	// (0x0009601e) rss_list_single_pane_t2

0x0001,

0xf5aa,	// (0x0009ae00) rss_list_single_pane_t

0xdf37,	// (0x0009978d) main_camera2_pane

0xdf37,	// (0x0009978d) main_video2_pane

0x4bfe,	// (0x00090454) cams_zoom_pane_cp2_ParamLimits

0x4bfe,	// (0x00090454) cams_zoom_pane_cp2

0x4c15,	// (0x0009046b) image2_vga_pane_ParamLimits

0x4c15,	// (0x0009046b) image2_vga_pane

0x4c5d,	// (0x000904b3) main_camera2_pane_g1_ParamLimits

0x4c5d,	// (0x000904b3) main_camera2_pane_g1

0x4c7d,	// (0x000904d3) main_camera2_pane_g2_ParamLimits

0x4c7d,	// (0x000904d3) main_camera2_pane_g2

0x4c94,	// (0x000904ea) main_camera2_pane_g3_ParamLimits

0x4c94,	// (0x000904ea) main_camera2_pane_g3

0x4cab,	// (0x00090501) main_camera2_pane_g4_ParamLimits

0x4cab,	// (0x00090501) main_camera2_pane_g4

0x4cc2,	// (0x00090518) main_camera2_pane_g5_ParamLimits

0x4cc2,	// (0x00090518) main_camera2_pane_g5

0x4cd9,	// (0x0009052f) main_camera2_pane_g6_ParamLimits

0x4cd9,	// (0x0009052f) main_camera2_pane_g6

0x4cf0,	// (0x00090546) main_camera2_pane_g7_ParamLimits

0x4cf0,	// (0x00090546) main_camera2_pane_g7

0x4d07,	// (0x0009055d) main_camera2_pane_g8_ParamLimits

0x4d07,	// (0x0009055d) main_camera2_pane_g8

0x0008,

0xf5cb,	// (0x0009ae21) main_camera2_pane_g_ParamLimits

0xf5cb,	// (0x0009ae21) main_camera2_pane_g

0x4d35,	// (0x0009058b) main_camera2_pane_t1_ParamLimits

0x4d35,	// (0x0009058b) main_camera2_pane_t1

0x4d6a,	// (0x000905c0) main_camera2_pane_t2_ParamLimits

0x4d6a,	// (0x000905c0) main_camera2_pane_t2

0x4d87,	// (0x000905dd) main_camera2_pane_t3_ParamLimits

0x4d87,	// (0x000905dd) main_camera2_pane_t3

0x4de5,	// (0x0009063b) main_camera2_pane_t4_ParamLimits

0x4de5,	// (0x0009063b) main_camera2_pane_t4

0x0006,

0xf5de,	// (0x0009ae34) main_camera2_pane_t_ParamLimits

0xf5de,	// (0x0009ae34) main_camera2_pane_t

0x4e6e,	// (0x000906c4) cams_zoom_pane_cp4_ParamLimits

0x4e6e,	// (0x000906c4) cams_zoom_pane_cp4

0x4e84,	// (0x000906da) image2_cif_pane_ParamLimits

0x4e84,	// (0x000906da) image2_cif_pane

0x4eaf,	// (0x00090705) image2_subqcif_pane_ParamLimits

0x4eaf,	// (0x00090705) image2_subqcif_pane

0x4eca,	// (0x00090720) main_video2_pane_g1_ParamLimits

0x4eca,	// (0x00090720) main_video2_pane_g1

0x4ee4,	// (0x0009073a) main_video2_pane_g2_ParamLimits

0x4ee4,	// (0x0009073a) main_video2_pane_g2

0x4efa,	// (0x00090750) main_video2_pane_g3_ParamLimits

0x4efa,	// (0x00090750) main_video2_pane_g3

0x4f10,	// (0x00090766) main_video2_pane_g4_ParamLimits

0x4f10,	// (0x00090766) main_video2_pane_g4

0x4f26,	// (0x0009077c) main_video2_pane_g5_ParamLimits

0x4f26,	// (0x0009077c) main_video2_pane_g5

0x4f3c,	// (0x00090792) main_video2_pane_g6_ParamLimits

0x4f3c,	// (0x00090792) main_video2_pane_g6

0x0005,

0xf5ed,	// (0x0009ae43) main_video2_pane_g_ParamLimits

0xf5ed,	// (0x0009ae43) main_video2_pane_g

0x4f56,	// (0x000907ac) main_video2_pane_t1_ParamLimits

0x4f56,	// (0x000907ac) main_video2_pane_t1

0x4f7a,	// (0x000907d0) main_video2_pane_t2_ParamLimits

0x4f7a,	// (0x000907d0) main_video2_pane_t2

0x4fca,	// (0x00090820) main_video2_pane_t3_ParamLimits

0x4fca,	// (0x00090820) main_video2_pane_t3

0x0002,

0xf5fa,	// (0x0009ae50) main_video2_pane_t_ParamLimits

0xf5fa,	// (0x0009ae50) main_video2_pane_t

0x447e,	// (0x0008fcd4) call_muted_g2

0x0001,

0xf59c,	// (0x0009adf2) call_muted_g

0xdf37,	// (0x0009978d) main_mup2_pane

0x5012,	// (0x00090868) main_mup2_pane_g1_ParamLimits

0x5012,	// (0x00090868) main_mup2_pane_g1

0x501e,	// (0x00090874) main_mup2_pane_g2_ParamLimits

0x501e,	// (0x00090874) main_mup2_pane_g2

0xa96c,	// (0x000961c2) main_mup_pane_g13_cp1

0xa974,	// (0x000961ca) mup_volume_pane_cp1

0x503c,	// (0x00090892) main_mup2_pane_g4_ParamLimits

0x503c,	// (0x00090892) main_mup2_pane_g4

0x504e,	// (0x000908a4) main_mup2_pane_g5_ParamLimits

0x504e,	// (0x000908a4) main_mup2_pane_g5

0x5060,	// (0x000908b6) main_mup2_pane_g6_ParamLimits

0x5060,	// (0x000908b6) main_mup2_pane_g6

0x5072,	// (0x000908c8) main_mup2_pane_g7_ParamLimits

0x5072,	// (0x000908c8) main_mup2_pane_g7

0x0006,

0xf601,	// (0x0009ae57) main_mup2_pane_g_ParamLimits

0xf601,	// (0x0009ae57) main_mup2_pane_g

0x508a,	// (0x000908e0) main_mup2_pane_t1_ParamLimits

0x508a,	// (0x000908e0) main_mup2_pane_t1

0x50a0,	// (0x000908f6) main_mup2_pane_t2_ParamLimits

0x50a0,	// (0x000908f6) main_mup2_pane_t2

0x50b6,	// (0x0009090c) main_mup2_pane_t3_ParamLimits

0x50b6,	// (0x0009090c) main_mup2_pane_t3

0x50cc,	// (0x00090922) main_mup2_pane_t4_ParamLimits

0x50cc,	// (0x00090922) main_mup2_pane_t4

0x50e4,	// (0x0009093a) main_mup2_pane_t5_ParamLimits

0x50e4,	// (0x0009093a) main_mup2_pane_t5

0x50fc,	// (0x00090952) main_mup2_pane_t6_ParamLimits

0x50fc,	// (0x00090952) main_mup2_pane_t6

0x0005,

0xf610,	// (0x0009ae66) main_mup2_pane_t_ParamLimits

0xf610,	// (0x0009ae66) main_mup2_pane_t

0x512c,	// (0x00090982) mup2_visualizer_pane_ParamLimits

0x512c,	// (0x00090982) mup2_visualizer_pane

0x515a,	// (0x000909b0) mup_progress_pane_cp_ParamLimits

0x515a,	// (0x000909b0) mup_progress_pane_cp

0xa94e,	// (0x000961a4) mup_volume_pane_cp_ParamLimits

0xa94e,	// (0x000961a4) mup_volume_pane_cp

0x5170,	// (0x000909c6) mup2_visualizer_pane_g1_ParamLimits

0x5170,	// (0x000909c6) mup2_visualizer_pane_g1

0xa88d,	// (0x000960e3) mup2_visualizer_pane_g2_ParamLimits

0xa88d,	// (0x000960e3) mup2_visualizer_pane_g2

0x5185,	// (0x000909db) mup2_visualizer_pane_g3_ParamLimits

0x5185,	// (0x000909db) mup2_visualizer_pane_g3

0x0002,

0xf61d,	// (0x0009ae73) mup2_visualizer_pane_g_ParamLimits

0xf61d,	// (0x0009ae73) mup2_visualizer_pane_g

0xefa1,	// (0x0009a7f7) aid_size_cell_fmradio

0x462e,	// (0x0008fe84) aid_height_parent_landcape

0xe5a6,	// (0x00099dfc) wml_content_pane_cp

0xe5ae,	// (0x00099e04) wml_tabs_pane

0xe5b7,	// (0x00099e0d) popup_wml_miniature_window

0xe5bf,	// (0x00099e15) scroll_pane_cp021

0xe5d3,	// (0x00099e29) wml_content_pane_comp8

0xdf37,	// (0x0009978d) bg_popup_sub_pane_cp05

0xa8ab,	// (0x00096101) popup_wml_miniature_window_g1

0xa8b3,	// (0x00096109) wml_miniature_view_pane

0x5191,	// (0x000909e7) aid_size_wml_view

0x5199,	// (0x000909ef) wml_miniature_view_pane_g1

0x51a2,	// (0x000909f8) wml_miniature_view_pane_g2

0x51ab,	// (0x00090a01) wml_miniature_view_pane_g3

0x51b3,	// (0x00090a09) wml_miniature_view_pane_g4

0x51bb,	// (0x00090a11) wml_miniature_view_pane_g5

0x51c3,	// (0x00090a19) wml_miniature_view_pane_g6

0x51cb,	// (0x00090a21) wml_miniature_view_pane_g7

0x51d3,	// (0x00090a29) wml_miniature_view_pane_g8

0x0007,

0xf624,	// (0x0009ae7a) wml_miniature_view_pane_g

0xa8bb,	// (0x00096111) background_graphic_ParamLimits

0xa8bb,	// (0x00096111) background_graphic

0xa8c7,	// (0x0009611d) wml_tabs_2_pane

0xa8d0,	// (0x00096126) wml_tabs_3_pane_ParamLimits

0xa8d0,	// (0x00096126) wml_tabs_3_pane

0xa8e2,	// (0x00096138) wml_tabs_4_pane_ParamLimits

0xa8e2,	// (0x00096138) wml_tabs_4_pane

0xa8f8,	// (0x0009614e) wml_tabs_5_pane_ParamLimits

0xa8f8,	// (0x0009614e) wml_tabs_5_pane

0xa912,	// (0x00096168) wml_tabs_pane_g2_ParamLimits

0xa912,	// (0x00096168) wml_tabs_pane_g2

0xa926,	// (0x0009617c) wml_tabs_pane_g3_ParamLimits

0xa926,	// (0x0009617c) wml_tabs_pane_g3

0x51db,	// (0x00090a31) wml_tabs_2_active_pane_ParamLimits

0x51db,	// (0x00090a31) wml_tabs_2_active_pane

0x51ef,	// (0x00090a45) wml_tabs_2_passive_pane_ParamLimits

0x51ef,	// (0x00090a45) wml_tabs_2_passive_pane

0x5203,	// (0x00090a59) wml_tabs_3_active_pane_cp_ParamLimits

0x5203,	// (0x00090a59) wml_tabs_3_active_pane_cp

0x5218,	// (0x00090a6e) wml_tabs_3_passive_pane_ParamLimits

0x5218,	// (0x00090a6e) wml_tabs_3_passive_pane

0x522b,	// (0x00090a81) wml_tabs_3_passive_pane_cp_ParamLimits

0x522b,	// (0x00090a81) wml_tabs_3_passive_pane_cp

0x5242,	// (0x00090a98) tabs_4_active_pane

0x524a,	// (0x00090aa0) tabs_4_passive_pane

0x5254,	// (0x00090aaa) tabs_4_passive_pane_cp

0x525c,	// (0x00090ab2) tabs_4_passive_pane_cp2

0x4342,	// (0x0008fb98) aid_height_text

0x31bd,	// (0x0008ea13) mup_volume_cont_pane_ParamLimits

0x31bd,	// (0x0008ea13) mup_volume_cont_pane

0x1113,	// (0x0008c969) aid_size_cell_pinb

0x111d,	// (0x0008c973) aid_size_list_pinb

0x5146,	// (0x0009099c) mup2_volume_cont_pane_ParamLimits

0x5146,	// (0x0009099c) mup2_volume_cont_pane

0xa93a,	// (0x00096190) mup2_volume_cont_pane_g1_ParamLimits

0xa93a,	// (0x00096190) mup2_volume_cont_pane_g1

0x0d96,	// (0x0008c5ec) aid_size_cell_touch_ParamLimits

0x0d96,	// (0x0008c5ec) aid_size_cell_touch

0x1002,	// (0x0008c858) touch_pane_ParamLimits

0x1002,	// (0x0008c858) touch_pane

0x0d78,	// (0x0008c5ce) main_rss2_pane

0xa97c,	// (0x000961d2) listscroll_rss2_pane

0xa985,	// (0x000961db) rss2_navigation_pane

0xa98d,	// (0x000961e3) list_rss2_pane

0xeb7f,	// (0x0009a3d5) scroll_pane_cp22

0xa995,	// (0x000961eb) rss2_navigation_pane_g1

0xa99e,	// (0x000961f4) rss2_navigation_pane_g2

0xa9a6,	// (0x000961fc) rss2_navigation_pane_g3

0x0002,

0xf635,	// (0x0009ae8b) rss2_navigation_pane_g

0xa9ae,	// (0x00096204) rss2_navigation_pane_t1

0x5266,	// (0x00090abc) rss2_list_single_pane_ParamLimits

0x5266,	// (0x00090abc) rss2_list_single_pane

0xa9bc,	// (0x00096212) rss2_list_single_pane_t2

0xa9ca,	// (0x00096220) rss2_list_single_pane_t3_ParamLimits

0xa9ca,	// (0x00096220) rss2_list_single_pane_t3

0xa9e7,	// (0x0009623d) rss2_list_single_pane_t4

0x2939,	// (0x0008e18f) smil_status_pane_g1

0xf062,	// (0x0009a8b8) main_image2_pane_ParamLimits

0xf062,	// (0x0009a8b8) main_image2_pane

0x4d1e,	// (0x00090574) main_camera2_pane_g9_ParamLimits

0x4d1e,	// (0x00090574) main_camera2_pane_g9

0x4e3a,	// (0x00090690) main_camera2_pane_t5_ParamLimits

0x4e3a,	// (0x00090690) main_camera2_pane_t5

0xa862,	// (0x000960b8) main_camera2_pane_t6_ParamLimits

0xa862,	// (0x000960b8) main_camera2_pane_t6

0x5280,	// (0x00090ad6) main_image2_pane_g1_ParamLimits

0x5280,	// (0x00090ad6) main_image2_pane_g1

0x38dd,	// (0x0008f133) smil2_video_pane_ParamLimits

0x38dd,	// (0x0008f133) smil2_video_pane

0x0dd6,	// (0x0008c62c) aid_zoom_text_primary_cp

0xdb1a,	// (0x00099370) popup_preview_fixed_window

0xe50f,	// (0x00099d65) im_reading_pane_g1

0x4bf0,	// (0x00090446) cams2_bc_adjust_pane_cp_ParamLimits

0x4bf0,	// (0x00090446) cams2_bc_adjust_pane_cp

0x4e60,	// (0x000906b6) cams2_bc_adjust_pane_ParamLimits

0x4e60,	// (0x000906b6) cams2_bc_adjust_pane

0xa9f5,	// (0x0009624b) cams2_bc_adjust_pane_g1

0xa9fd,	// (0x00096253) cams2_slider_pane

0xaa06,	// (0x0009625c) cams2_slider_pane_g1

0xaa0f,	// (0x00096265) cams2_slider_pane_g2

0x0006,

0xf63c,	// (0x0009ae92) cams2_slider_pane_g

0x120d,	// (0x0008ca63) calc_display_pane_ParamLimits

0x1233,	// (0x0008ca89) calc_paper_pane_ParamLimits

0x1256,	// (0x0008caac) grid_calc_pane_ParamLimits

0x9e4d,	// (0x000956a3) popup_clock_digital_window_t1_ParamLimits

0xef3e,	// (0x0009a794) main_image_pane_t1

0x11ef,	// (0x0008ca45) aid_size_cell_calc_ParamLimits

0x11ef,	// (0x0008ca45) aid_size_cell_calc

0x4674,	// (0x0008feca) popup_blid_sat_info2_window_ParamLimits

0x4674,	// (0x0008feca) popup_blid_sat_info2_window

0xaa31,	// (0x00096287) aid_size_cell_blid

0xaa39,	// (0x0009628f) bg_popup_window_pane_cp07

0xaa5c,	// (0x000962b2) grid_popup_blid_pane

0xaa66,	// (0x000962bc) heading_pane_cp05_ParamLimits

0xaa66,	// (0x000962bc) heading_pane_cp05

0xab30,	// (0x00096386) cell_popup_blid_pane_ParamLimits

0xab30,	// (0x00096386) cell_popup_blid_pane

0xab5a,	// (0x000963b0) cell_popup_blid_pane_g1

0xab62,	// (0x000963b8) cell_popup_blid_pane_t1

0x5116,	// (0x0009096c) mup2_indicator_pane_ParamLimits

0x5116,	// (0x0009096c) mup2_indicator_pane

0xecb9,	// (0x0009a50f) mup2_visualizer_osc_pane

0xa899,	// (0x000960ef) mup2_visualizer_spec_pane_ParamLimits

0xa899,	// (0x000960ef) mup2_visualizer_spec_pane

0x5296,	// (0x00090aec) mup2_spec_half_pane

0x529f,	// (0x00090af5) mup2_spec_half_pane_cp

0x52a7,	// (0x00090afd) mup2_spec_bar_pane_ParamLimits

0x52a7,	// (0x00090afd) mup2_spec_bar_pane

0xa7d6,	// (0x0009602c) mup2_spec_bar_pane_g1

0xa7e0,	// (0x00096036) mup2_spec_bar_pane_g2

0x0001,

0xf5af,	// (0x0009ae05) mup2_spec_bar_pane_g

0x52c7,	// (0x00090b1d) mup2_osc_middle_pane

0xa7f2,	// (0x00096048) mup2_visualizer_osc_pane_g1

0xdb44,	// (0x0009939a) popup_number_entry_window_t1_ParamLimits

0xdb57,	// (0x000993ad) popup_number_entry_window_t2_ParamLimits

0xdb69,	// (0x000993bf) popup_number_entry_window_t3_ParamLimits

0x1054,	// (0x0008c8aa) popup_number_entry_window_t5_ParamLimits

0x1054,	// (0x0008c8aa) popup_number_entry_window_t5

0xf0fb,	// (0x0009a951) popup_number_entry_window_t_ParamLimits

0xdb7b,	// (0x000993d1) text_title_cp2_ParamLimits

0x9e8c,	// (0x000956e2) aid_hotspot_pointer_text2_pane

0x9eb2,	// (0x00095708) main_viewer_pane_g9_ParamLimits

0x9eb2,	// (0x00095708) main_viewer_pane_g9

0xe73e,	// (0x00099f94) cale_month_pane_t1_ParamLimits

0xe77b,	// (0x00099fd1) bg_cale_pane_ParamLimits

0xe793,	// (0x00099fe9) list_cale_pane_ParamLimits

0xe39d,	// (0x00099bf3) listscroll_cale_day_pane_t1

0xe7a4,	// (0x00099ffa) scroll_pane_cp09_ParamLimits

0x31f3,	// (0x0008ea49) main_mup_eq_pane_t1_ParamLimits

0x31f3,	// (0x0008ea49) main_mup_eq_pane_t1

0x320f,	// (0x0008ea65) main_mup_eq_pane_t2_ParamLimits

0x320f,	// (0x0008ea65) main_mup_eq_pane_t2

0x322b,	// (0x0008ea81) main_mup_eq_pane_t3_ParamLimits

0x322b,	// (0x0008ea81) main_mup_eq_pane_t3

0x3249,	// (0x0008ea9f) main_mup_eq_pane_t4_ParamLimits

0x3249,	// (0x0008ea9f) main_mup_eq_pane_t4

0x3267,	// (0x0008eabd) main_mup_eq_pane_t5_ParamLimits

0x3267,	// (0x0008eabd) main_mup_eq_pane_t5

0x3285,	// (0x0008eadb) main_mup_eq_pane_t6_ParamLimits

0x3285,	// (0x0008eadb) main_mup_eq_pane_t6

0x329b,	// (0x0008eaf1) main_mup_eq_pane_t7_ParamLimits

0x329b,	// (0x0008eaf1) main_mup_eq_pane_t7

0x32b1,	// (0x0008eb07) main_mup_eq_pane_t8_ParamLimits

0x32b1,	// (0x0008eb07) main_mup_eq_pane_t8

0x32c7,	// (0x0008eb1d) main_mup_eq_pane_t9_ParamLimits

0x32c7,	// (0x0008eb1d) main_mup_eq_pane_t9

0x32e3,	// (0x0008eb39) main_mup_eq_pane_t10_ParamLimits

0x32e3,	// (0x0008eb39) main_mup_eq_pane_t10

0x0009,

0xf41a,	// (0x0009ac70) main_mup_eq_pane_t_ParamLimits

0xf41a,	// (0x0009ac70) main_mup_eq_pane_t

0x33b8,	// (0x0008ec0e) mup_equalizer_pane_cp5_ParamLimits

0x33d0,	// (0x0008ec26) mup_equalizer_pane_cp6_ParamLimits

0x33e8,	// (0x0008ec3e) mup_equalizer_pane_cp7_ParamLimits

0x0d78,	// (0x0008c5ce) main_gallery_pane

0xa7fb,	// (0x00096051) smil2_volume_pane

0xa803,	// (0x00096059) smil_status_volume_pane_g1_ParamLimits

0xa816,	// (0x0009606c) smil_status_volume_pane_g2_ParamLimits

0xa829,	// (0x0009607f) smil_status_volume_pane_g3_ParamLimits

0xf5b4,	// (0x0009ae0a) smil_status_volume_pane_g_ParamLimits

0xaa39,	// (0x0009628f) bg_popup_window_pane_cp07_ParamLimits

0xaa47,	// (0x0009629d) blid_firmament_pane

0x52d0,	// (0x00090b26) aid_size_cell_gallery_ParamLimits

0x52d0,	// (0x00090b26) aid_size_cell_gallery

0x52e6,	// (0x00090b3c) grid_gallery_pane_ParamLimits

0x52e6,	// (0x00090b3c) grid_gallery_pane

0x5301,	// (0x00090b57) cell_gallery_pane_ParamLimits

0x5301,	// (0x00090b57) cell_gallery_pane

0xab70,	// (0x000963c6) bg_cell_gallery_focus_pane_ParamLimits

0xab70,	// (0x000963c6) bg_cell_gallery_focus_pane

0xab82,	// (0x000963d8) cell_gallery_pane_g1_ParamLimits

0xab82,	// (0x000963d8) cell_gallery_pane_g1

0x5352,	// (0x00090ba8) cell_gallery_pane_g2_ParamLimits

0x5352,	// (0x00090ba8) cell_gallery_pane_g2

0x535f,	// (0x00090bb5) cell_gallery_pane_g3_ParamLimits

0x535f,	// (0x00090bb5) cell_gallery_pane_g3

0xab8e,	// (0x000963e4) cell_gallery_pane_g4_ParamLimits

0xab8e,	// (0x000963e4) cell_gallery_pane_g4

0x0003,

0xf662,	// (0x0009aeb8) cell_gallery_pane_g_ParamLimits

0xf662,	// (0x0009aeb8) cell_gallery_pane_g

0xab9a,	// (0x000963f0) bg_cell_gallery_focus_pane_g1

0xaba2,	// (0x000963f8) bg_cell_gallery_focus_pane_g2

0xabaa,	// (0x00096400) bg_cell_gallery_focus_pane_g3

0xabb2,	// (0x00096408) bg_cell_gallery_focus_pane_g4

0xabba,	// (0x00096410) bg_cell_gallery_focus_pane_g5

0xabc2,	// (0x00096418) bg_cell_gallery_focus_pane_g6

0xabca,	// (0x00096420) bg_cell_gallery_focus_pane_g7

0xabd2,	// (0x00096428) bg_cell_gallery_focus_pane_g8

0x0007,

0xf66b,	// (0x0009aec1) bg_cell_gallery_focus_pane_g

0xabda,	// (0x00096430) aid_firma_cardinal

0xabee,	// (0x00096444) blid_firmament_pane_t1

0xac05,	// (0x0009645b) blid_firmament_pane_t2

0xac1c,	// (0x00096472) blid_firmament_pane_t3

0xac33,	// (0x00096489) blid_firmament_pane_t4

0x0003,

0xf67c,	// (0x0009aed2) blid_firmament_pane_t

0xac4a,	// (0x000964a0) blid_sat_info_pane

0xac5a,	// (0x000964b0) blid_sat_info_pane_g1

0xac5a,	// (0x000964b0) blid_sat_info_pane_g2

0x0001,

0xf685,	// (0x0009aedb) blid_sat_info_pane_g

0xac64,	// (0x000964ba) blid_sat_info_pane_t1

0xac72,	// (0x000964c8) smil2_volume_content_pane

0xac7b,	// (0x000964d1) smil2_volume_pane_g1

0xac83,	// (0x000964d9) smil2_volume_content_pane_g1

0xac8c,	// (0x000964e2) smil2_volume_content_pane_g2

0xac95,	// (0x000964eb) smil2_volume_content_pane_g3

0xac9e,	// (0x000964f4) smil2_volume_content_pane_g4

0xaca7,	// (0x000964fd) smil2_volume_content_pane_g5

0xacb0,	// (0x00096506) smil2_volume_content_pane_g6

0xacb9,	// (0x0009650f) smil2_volume_content_pane_g7

0xacc2,	// (0x00096518) smil2_volume_content_pane_g8

0xaccb,	// (0x00096521) smil2_volume_content_pane_g9

0xacd4,	// (0x0009652a) smil2_volume_content_pane_g10

0x0009,

0xf68a,	// (0x0009aee0) smil2_volume_content_pane_g

0x1712,	// (0x0008cf68) cale_week_day_heading_pane_t1_ParamLimits

0x1726,	// (0x0008cf7c) cale_week_day_heading_pane_t2_ParamLimits

0x173a,	// (0x0008cf90) cale_week_day_heading_pane_t3_ParamLimits

0x174e,	// (0x0008cfa4) cale_week_day_heading_pane_t4_ParamLimits

0x1762,	// (0x0008cfb8) cale_week_day_heading_pane_t5_ParamLimits

0x1776,	// (0x0008cfcc) cale_week_day_heading_pane_t6_ParamLimits

0x178a,	// (0x0008cfe0) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0009aa56) cale_week_day_heading_pane_t_ParamLimits

0xe3af,	// (0x00099c05) bg_cale_side_pane_ParamLimits

0x179e,	// (0x0008cff4) cale_week_time_pane_t1_ParamLimits

0x17b6,	// (0x0008d00c) cale_week_time_pane_t2_ParamLimits

0x17ce,	// (0x0008d024) cale_week_time_pane_t3_ParamLimits

0x17e6,	// (0x0008d03c) cale_week_time_pane_t4_ParamLimits

0x17fe,	// (0x0008d054) cale_week_time_pane_t5_ParamLimits

0x1816,	// (0x0008d06c) cale_week_time_pane_t6_ParamLimits

0x182e,	// (0x0008d084) cale_week_time_pane_t7_ParamLimits

0x184a,	// (0x0008d0a0) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0009aa65) cale_week_time_pane_t_ParamLimits

0x186a,	// (0x0008d0c0) cell_cale_week_pane_g2_ParamLimits

0xe3af,	// (0x00099c05) bg_cale_side_pane_cp01_ParamLimits

0x27a8,	// (0x0008dffe) cale_month_week_pane_t1_ParamLimits

0x27bf,	// (0x0008e015) cale_month_week_pane_t2_ParamLimits

0x27d6,	// (0x0008e02c) cale_month_week_pane_t3_ParamLimits

0x27ed,	// (0x0008e043) cale_month_week_pane_t4_ParamLimits

0x2804,	// (0x0008e05a) cale_month_week_pane_t5_ParamLimits

0x281b,	// (0x0008e071) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x0009ab3e) cale_month_week_pane_t_ParamLimits

0x9dcd,	// (0x00095623) cell_cale_month_pane_g1_ParamLimits

0x0d78,	// (0x0008c5ce) main_cale_event_viewer_pane

0x0d78,	// (0x0008c5ce) listscroll_cale_event_viewer_pane

0xacdd,	// (0x00096533) list_cale_ev_pane

0xace5,	// (0x0009653b) scroll_pane_cp023

0x536c,	// (0x00090bc2) field_cale_ev_pane_ParamLimits

0x536c,	// (0x00090bc2) field_cale_ev_pane

0xacf1,	// (0x00096547) field_cale_ev_content_pane_ParamLimits

0xacf1,	// (0x00096547) field_cale_ev_content_pane

0xacfd,	// (0x00096553) field_cale_ev_pane_g1_ParamLimits

0xacfd,	// (0x00096553) field_cale_ev_pane_g1

0xad09,	// (0x0009655f) field_cale_ev_pane_g2_ParamLimits

0xad09,	// (0x0009655f) field_cale_ev_pane_g2

0xad21,	// (0x00096577) field_cale_ev_pane_g3_ParamLimits

0xad21,	// (0x00096577) field_cale_ev_pane_g3

0x0002,

0xf69f,	// (0x0009aef5) field_cale_ev_pane_g_ParamLimits

0xf69f,	// (0x0009aef5) field_cale_ev_pane_g

0xad39,	// (0x0009658f) field_cale_ev_pane_t1_ParamLimits

0xad39,	// (0x0009658f) field_cale_ev_pane_t1

0x5390,	// (0x00090be6) field_cale_ev_content_pane_t1_ParamLimits

0x5390,	// (0x00090be6) field_cale_ev_content_pane_t1

0xee24,	// (0x0009a67a) bg_button_pane_cp01

0xe25d,	// (0x00099ab3) listscroll_cale_week_pane_ParamLimits

0x14fc,	// (0x0008cd52) popup_toolbar_window_cp01

0xe39d,	// (0x00099bf3) listscroll_cale_week_pane_t1_ParamLimits

0xe25d,	// (0x00099ab3) listscroll_cale_day_pane_ParamLimits

0x2999,	// (0x0008e1ef) popup_toolbar_window_cp02

0xe39d,	// (0x00099bf3) listscroll_cale_day_pane_t1_ParamLimits

0xe25d,	// (0x00099ab3) main_cale_month_pane_ParamLimits

0x48f4,	// (0x0009014a) popup_toolbar_window_cp03_ParamLimits

0x48f4,	// (0x0009014a) popup_toolbar_window_cp03

0x379b,	// (0x0008eff1) main_image_pane_g2_ParamLimits

0x379b,	// (0x0008eff1) main_image_pane_g2

0x37ac,	// (0x0008f002) main_image_pane_g3_ParamLimits

0x37ac,	// (0x0008f002) main_image_pane_g3

0x0002,

0xf4a2,	// (0x0009acf8) main_image_pane_g_ParamLimits

0xf4a2,	// (0x0009acf8) main_image_pane_g

0xef3e,	// (0x0009a794) main_image_pane_t1_ParamLimits

0x37bd,	// (0x0008f013) main_image_pane_t2_ParamLimits

0x37bd,	// (0x0008f013) main_image_pane_t2

0x37cf,	// (0x0008f025) main_image_pane_t3_ParamLimits

0x37cf,	// (0x0008f025) main_image_pane_t3

0x37f7,	// (0x0008f04d) main_image_pane_t4_ParamLimits

0x37f7,	// (0x0008f04d) main_image_pane_t4

0x0003,

0xf4a9,	// (0x0009acff) main_image_pane_t_ParamLimits

0xf4a9,	// (0x0009acff) main_image_pane_t

0x3817,	// (0x0008f06d) popup_image_details_window_cp01

0x3821,	// (0x0008f077) popup_toobar_trans_pane_cp01_ParamLimits

0x3821,	// (0x0008f077) popup_toobar_trans_pane_cp01

0x4767,	// (0x0008ffbd) popup_image_details_window_ParamLimits

0x4767,	// (0x0008ffbd) popup_image_details_window

0xa747,	// (0x00095f9d) popup_image_focus_window

0x4baa,	// (0x00090400) camera2_autofocus_pane_ParamLimits

0x4baa,	// (0x00090400) camera2_autofocus_pane

0x0d78,	// (0x0008c5ce) bg_popup_sub_pane_cp06

0xad50,	// (0x000965a6) popup_image_focus_window_g1

0xad58,	// (0x000965ae) popup_image_focus_window_g2

0xad60,	// (0x000965b6) popup_image_focus_window_g3

0xad68,	// (0x000965be) popup_image_focus_window_g4

0x0003,

0xf6a6,	// (0x0009aefc) popup_image_focus_window_g

0xad70,	// (0x000965c6) popup_image_focus_window_t1

0xad7e,	// (0x000965d4) popup_image_focus_window_t2

0xad8e,	// (0x000965e4) popup_image_focus_window_t3

0x0002,

0xf6af,	// (0x0009af05) popup_image_focus_window_t

0xad9c,	// (0x000965f2) camera2_autofocus_pane_g1

0xf062,	// (0x0009a8b8) bg_tb_trans_pane_cp01

0xadaa,	// (0x00096600) popup_image_details_window_g1

0xadbd,	// (0x00096613) popup_image_details_window_g2

0x0002,

0xf6c1,	// (0x0009af17) popup_image_details_window_g

0xade6,	// (0x0009663c) popup_image_details_window_t1

0xadf8,	// (0x0009664e) popup_image_details_window_t2

0xae11,	// (0x00096667) popup_image_details_window_t3

0xae25,	// (0x0009667b) popup_image_details_window_t4

0xae40,	// (0x00096696) popup_image_details_window_t5

0x0004,

0xf6c8,	// (0x0009af1e) popup_image_details_window_t

0xe249,	// (0x00099a9f) bg_calc_paper_pane_ParamLimits

0x9cb2,	// (0x00095508) grid_highlight_pane_cp013

0x9cbc,	// (0x00095512) list_calc_pane_ParamLimits

0x9cce,	// (0x00095524) scroll_pane_cp024

0xe25d,	// (0x00099ab3) bg_calc_display_pane_ParamLimits

0x134d,	// (0x0008cba3) calc_display_pane_t1_ParamLimits

0x135f,	// (0x0008cbb5) calc_display_pane_t2_ParamLimits

0x9cd6,	// (0x0009552c) calc_display_pane_t3_ParamLimits

0xf182,	// (0x0009a9d8) calc_display_pane_t_ParamLimits

0x1422,	// (0x0008cc78) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0009a9f5) cell_calc_pane_g

0x142b,	// (0x0008cc81) cell_calc_pane_t1

0xe2bc,	// (0x00099b12) grid_highlight_pane_cp02_ParamLimits

0xe2d2,	// (0x00099b28) toolbar_button_pane_cp01_ParamLimits

0xe2d2,	// (0x00099b28) toolbar_button_pane_cp01

0xef83,	// (0x0009a7d9) temp_image_control_pane_ParamLimits

0xef83,	// (0x0009a7d9) temp_image_control_pane

0xf062,	// (0x0009a8b8) main_mp3_pane

0xae5a,	// (0x000966b0) temp_image_control_pane_g1_ParamLimits

0xae5a,	// (0x000966b0) temp_image_control_pane_g1

0xae68,	// (0x000966be) temp_image_control_pane_g2_ParamLimits

0xae68,	// (0x000966be) temp_image_control_pane_g2

0xae7a,	// (0x000966d0) temp_image_control_pane_g3_ParamLimits

0xae7a,	// (0x000966d0) temp_image_control_pane_g3

0x53e1,	// (0x00090c37) temp_image_control_pane_g4_ParamLimits

0x53e1,	// (0x00090c37) temp_image_control_pane_g4

0x0003,

0xf6d3,	// (0x0009af29) temp_image_control_pane_g_ParamLimits

0xf6d3,	// (0x0009af29) temp_image_control_pane_g

0xae5a,	// (0x000966b0) main_mp3_pane_g1

0x53f4,	// (0x00090c4a) main_mp3_pane_g2

0x0007,

0xf6dc,	// (0x0009af32) main_mp3_pane_g

0xaebd,	// (0x00096713) main_mp3_pane_t1

0xe414,	// (0x00099c6a) main_camera_pane_g8_ParamLimits

0xe414,	// (0x00099c6a) main_camera_pane_g8

0x1b3b,	// (0x0008d391) main_video_pane_g7_ParamLimits

0x1b3b,	// (0x0008d391) main_video_pane_g7

0xa87b,	// (0x000960d1) main_camera2_pane_t7_ParamLimits

0xa87b,	// (0x000960d1) main_camera2_pane_t7

0xe566,	// (0x00099dbc) scroll_pane_cp025_ParamLimits

0xe566,	// (0x00099dbc) scroll_pane_cp025

0xe57a,	// (0x00099dd0) scroll_pane_cp026_ParamLimits

0xe57a,	// (0x00099dd0) scroll_pane_cp026

0xe589,	// (0x00099ddf) wml_content_pane_ParamLimits

0x0d78,	// (0x0008c5ce) main_touch_calib_pane

0x54bb,	// (0x00090d11) main_touch_calib_pane_g1

0x54c7,	// (0x00090d1d) main_touch_calib_pane_g2

0x54d3,	// (0x00090d29) main_touch_calib_pane_g3

0x54df,	// (0x00090d35) main_touch_calib_pane_g4

0x0003,

0xf6fa,	// (0x0009af50) main_touch_calib_pane_g

0x54eb,	// (0x00090d41) main_touch_calib_pane_t1

0x5505,	// (0x00090d5b) main_touch_calib_pane_t2

0x0004,

0xf703,	// (0x0009af59) main_touch_calib_pane_t

0xebfa,	// (0x0009a450) mup_progress_pane_cp02

0xec19,	// (0x0009a46f) navi_pane_g1

0xec7b,	// (0x0009a4d1) navi_pane_mp_t3

0xf062,	// (0x0009a8b8) main_mp3_pane_ParamLimits

0x4936,	// (0x0009018c) navi_pane_ParamLimits

0xae5a,	// (0x000966b0) main_mp3_pane_g1_ParamLimits

0x53f4,	// (0x00090c4a) main_mp3_pane_g2_ParamLimits

0x5400,	// (0x00090c56) main_mp3_pane_g3_ParamLimits

0x5400,	// (0x00090c56) main_mp3_pane_g3

0x540e,	// (0x00090c64) main_mp3_pane_g4_ParamLimits

0x540e,	// (0x00090c64) main_mp3_pane_g4

0xae8a,	// (0x000966e0) main_mp3_pane_g5_ParamLimits

0xae8a,	// (0x000966e0) main_mp3_pane_g5

0xae98,	// (0x000966ee) main_mp3_pane_g6_ParamLimits

0xae98,	// (0x000966ee) main_mp3_pane_g6

0xaea5,	// (0x000966fb) main_mp3_pane_g7_ParamLimits

0xaea5,	// (0x000966fb) main_mp3_pane_g7

0xaeb1,	// (0x00096707) main_mp3_pane_g8_ParamLimits

0xaeb1,	// (0x00096707) main_mp3_pane_g8

0xf6dc,	// (0x0009af32) main_mp3_pane_g_ParamLimits

0x541a,	// (0x00090c70) main_mp3_pane_t2

0x5428,	// (0x00090c7e) main_mp3_pane_t3

0xaecb,	// (0x00096721) main_mp3_pane_t4

0xaed9,	// (0x0009672f) main_mp3_pane_t5

0x0005,

0xf6ed,	// (0x0009af43) main_mp3_pane_t

0xaee7,	// (0x0009673d) mup_progress_pane_cp01

0x0dd6,	// (0x0008c62c) aid_zoom_text_secondary2

0xacdd,	// (0x00096533) list_cale_ev2_pane

0xace5,	// (0x0009653b) scroll_pane_cp023_ParamLimits

0x555d,	// (0x00090db3) field_cale_ev2_pane_ParamLimits

0x555d,	// (0x00090db3) field_cale_ev2_pane

0xaeef,	// (0x00096745) field_cale_ev2_pane_g1_ParamLimits

0xaeef,	// (0x00096745) field_cale_ev2_pane_g1

0xaefb,	// (0x00096751) field_cale_ev2_pane_g2_ParamLimits

0xaefb,	// (0x00096751) field_cale_ev2_pane_g2

0xaf13,	// (0x00096769) field_cale_ev2_pane_g3_ParamLimits

0xaf13,	// (0x00096769) field_cale_ev2_pane_g3

0x0003,

0xf70e,	// (0x0009af64) field_cale_ev2_pane_g_ParamLimits

0xf70e,	// (0x0009af64) field_cale_ev2_pane_g

0xaf37,	// (0x0009678d) field_cale_ev2_pane_t1_ParamLimits

0xaf37,	// (0x0009678d) field_cale_ev2_pane_t1

0xaf4e,	// (0x000967a4) field_cale_ev2_pane_t2_ParamLimits

0xaf4e,	// (0x000967a4) field_cale_ev2_pane_t2

0x0001,

0xf717,	// (0x0009af6d) field_cale_ev2_pane_t_ParamLimits

0xf717,	// (0x0009af6d) field_cale_ev2_pane_t

0x3636,	// (0x0008ee8c) main_postcard_pane_g5_ParamLimits

0x3636,	// (0x0008ee8c) main_postcard_pane_g5

0x364c,	// (0x0008eea2) main_postcard_pane_g6_ParamLimits

0x364c,	// (0x0008eea2) main_postcard_pane_g6

0x18e7,	// (0x0008d13d) camera2_autofocus_pane_cp_ParamLimits

0x18e7,	// (0x0008d13d) camera2_autofocus_pane_cp

0xf062,	// (0x0009a8b8) main_mup3_pane

0x55a1,	// (0x00090df7) main_mup3_pane_g1_ParamLimits

0x55a1,	// (0x00090df7) main_mup3_pane_g1

0x55c3,	// (0x00090e19) main_mup3_pane_g2_ParamLimits

0x55c3,	// (0x00090e19) main_mup3_pane_g2

0x5646,	// (0x00090e9c) main_mup3_pane_g3_ParamLimits

0x5646,	// (0x00090e9c) main_mup3_pane_g3

0x568a,	// (0x00090ee0) main_mup3_pane_g4_ParamLimits

0x568a,	// (0x00090ee0) main_mup3_pane_g4

0x56ce,	// (0x00090f24) main_mup3_pane_g5_ParamLimits

0x56ce,	// (0x00090f24) main_mup3_pane_g5

0x5712,	// (0x00090f68) main_mup3_pane_g6_ParamLimits

0x5712,	// (0x00090f68) main_mup3_pane_g6

0xaf63,	// (0x000967b9) main_mup3_pane_g7_ParamLimits

0xaf63,	// (0x000967b9) main_mup3_pane_g7

0x0007,

0xf727,	// (0x0009af7d) main_mup3_pane_g_ParamLimits

0xf727,	// (0x0009af7d) main_mup3_pane_g

0x578e,	// (0x00090fe4) main_mup3_pane_t1_ParamLimits

0x578e,	// (0x00090fe4) main_mup3_pane_t1

0x5808,	// (0x0009105e) main_mup3_pane_t2_ParamLimits

0x5808,	// (0x0009105e) main_mup3_pane_t2

0x58e2,	// (0x00091138) main_mup3_pane_t4_ParamLimits

0x58e2,	// (0x00091138) main_mup3_pane_t4

0x5940,	// (0x00091196) main_mup3_pane_t5_ParamLimits

0x5940,	// (0x00091196) main_mup3_pane_t5

0x59f8,	// (0x0009124e) main_mup3_pane_t6_ParamLimits

0x59f8,	// (0x0009124e) main_mup3_pane_t6

0x0005,

0xf738,	// (0x0009af8e) main_mup3_pane_t_ParamLimits

0xf738,	// (0x0009af8e) main_mup3_pane_t

0x5aae,	// (0x00091304) mup3_progress_pane_ParamLimits

0x5aae,	// (0x00091304) mup3_progress_pane

0x5b32,	// (0x00091388) popup_mup3_control_window_ParamLimits

0x5b32,	// (0x00091388) popup_mup3_control_window

0xaf71,	// (0x000967c7) popup_mup3_text_window

0x5b68,	// (0x000913be) mup3_progress_pane_t1

0x5b7f,	// (0x000913d5) mup3_progress_pane_t2

0xaf79,	// (0x000967cf) mup3_progress_pane_t3

0x0002,

0xf745,	// (0x0009af9b) mup3_progress_pane_t

0xaf90,	// (0x000967e6) mup_progress_pane_cp03

0x0d78,	// (0x0008c5ce) bg_tb_trans_pane_cp04

0x5b96,	// (0x000913ec) mup3_volume_pane

0x5b9e,	// (0x000913f4) popup_mup3_control_window_g1

0x5ba7,	// (0x000913fd) mup3_volume_pane_g1

0x5bb0,	// (0x00091406) mup3_volume_pane_g2

0x5bb9,	// (0x0009140f) mup3_volume_pane_g3

0x0002,

0xf74c,	// (0x0009afa2) mup3_volume_pane_g

0x0d78,	// (0x0008c5ce) bg_tb_trans_pane_cp03

0xafa0,	// (0x000967f6) popup_mup3_text_window_g1

0xafa8,	// (0x000967fe) popup_mup3_text_window_t1

0xe2a5,	// (0x00099afb) list_calc_item_pane_g1_ParamLimits

0xa963,	// (0x000961b9) mup_volume_pane_cp_g1

0x551f,	// (0x00090d75) main_touch_calib_pane_t3

0x5533,	// (0x00090d89) main_touch_calib_pane_t4

0x5547,	// (0x00090d9d) main_touch_calib_pane_t5

0x0d82,	// (0x0008c5d8) aid_cell_size_toolbar2

0x0d8a,	// (0x0008c5e0) aid_popup3_width_pane

0x0dc6,	// (0x0008c61c) aid_zoom_text_msg_primary

0x9db7,	// (0x0009560d) vorec_t7

0xe269,	// (0x00099abf) bg_calc_paper_pane_g1_ParamLimits

0xe275,	// (0x00099acb) bg_calc_paper_pane_g2_ParamLimits

0xe281,	// (0x00099ad7) bg_calc_paper_pane_g3_ParamLimits

0xe28d,	// (0x00099ae3) bg_calc_paper_pane_g4_ParamLimits

0xe299,	// (0x00099aef) bg_calc_paper_pane_g5_ParamLimits

0x13ac,	// (0x0008cc02) bg_calc_paper_pane_g6_ParamLimits

0x13bf,	// (0x0008cc15) bg_calc_paper_pane_g7_ParamLimits

0x13d2,	// (0x0008cc28) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x0009a9df) bg_calc_paper_pane_g_ParamLimits

0x13e3,	// (0x0008cc39) calc_bg_paper_pane_g9_ParamLimits

0x1a49,	// (0x0008d29f) image_qvga_pane_ParamLimits

0x1a49,	// (0x0008d29f) image_qvga_pane

0xe192,	// (0x000999e8) bg_popup_sub_pane_cp04_ParamLimits

0xeeba,	// (0x0009a710) popup_mup_playback_window_g1_ParamLimits

0xeec6,	// (0x0009a71c) popup_mup_playback_window_t1_ParamLimits

0xeedb,	// (0x0009a731) popup_mup_playback_window_t2_ParamLimits

0x0239,	// (0x0008ba8f) popup_mup_playback_window_t_ParamLimits

0x502e,	// (0x00090884) main_mup2_pane_g3_ParamLimits

0x502e,	// (0x00090884) main_mup2_pane_g3

0x1e0c,	// (0x0008d662) popup_toolbar_window_cp04

0x3d9c,	// (0x0008f5f2) popup_call2_audio_second_window_g3_ParamLimits

0x3d9c,	// (0x0008f5f2) popup_call2_audio_second_window_g3

0x41a6,	// (0x0008f9fc) popup_call2_audio_first_window_g4_ParamLimits

0x41a6,	// (0x0008f9fc) popup_call2_audio_first_window_g4

0xa3c0,	// (0x00095c16) popup_call2_audio_in_window_g4_ParamLimits

0xa3c0,	// (0x00095c16) popup_call2_audio_in_window_g4

0x377d,	// (0x0008efd3) aid_area_sk_bg_cut_ParamLimits

0x377d,	// (0x0008efd3) aid_area_sk_bg_cut

0xeef0,	// (0x0009a746) aid_area_sk_bg_cut_2_ParamLimits

0xeef0,	// (0x0009a746) aid_area_sk_bg_cut_2

0x5342,	// (0x00090b98) aid_placing_details_win

0x534a,	// (0x00090ba0) aid_placing_details_win_2

0xad9c,	// (0x000965f2) camera2_autofocus_pane_g1_ParamLimits

0x0fa1,	// (0x0008c7f7) popup_fixed_preview_cale_window_ParamLimits

0x0fa1,	// (0x0008c7f7) popup_fixed_preview_cale_window

0xecca,	// (0x0009a520) navi_slider_pane_g3

0xecd3,	// (0x0009a529) navi_slider_pane_g4

0xecdc,	// (0x0009a532) navi_slider_pane_g5

0xecca,	// (0x0009a520) navi_slider_pane_g6

0x9e73,	// (0x000956c9) navi_slider_pane_g7

0xedf1,	// (0x0009a647) mup_scale_pane_g3

0xedfa,	// (0x0009a650) mup_scale_pane_g4

0xee03,	// (0x0009a659) mup_scale_pane_g5

0x3400,	// (0x0008ec56) mup_scale_pane_g6

0x3409,	// (0x0008ec5f) mup_scale_pane_g7

0xecca,	// (0x0009a520) cams2_slider_pane_g3

0xaa18,	// (0x0009626e) cams2_slider_pane_g4

0xaa20,	// (0x00096276) cams2_slider_pane_g5

0xecca,	// (0x0009a520) cams2_slider_pane_g6

0xaa28,	// (0x0009627e) cams2_slider_pane_g7

0xac5a,	// (0x000964b0) camera2_autofocus_pane_cp_g1

0xafb6,	// (0x0009680c) bg_popup_preview_window_pane_cp02_ParamLimits

0xafb6,	// (0x0009680c) bg_popup_preview_window_pane_cp02

0xafc2,	// (0x00096818) list_fp_cale_pane_ParamLimits

0xafc2,	// (0x00096818) list_fp_cale_pane

0xafce,	// (0x00096824) popup_fixed_preview_cale_window_t1_ParamLimits

0xafce,	// (0x00096824) popup_fixed_preview_cale_window_t1

0x5bc2,	// (0x00091418) popup_fixed_preview_cale_window_t2_ParamLimits

0x5bc2,	// (0x00091418) popup_fixed_preview_cale_window_t2

0x5bd7,	// (0x0009142d) popup_fixed_preview_cale_window_t3_ParamLimits

0x5bd7,	// (0x0009142d) popup_fixed_preview_cale_window_t3

0x0002,

0xf753,	// (0x0009afa9) popup_fixed_preview_cale_window_t_ParamLimits

0xf753,	// (0x0009afa9) popup_fixed_preview_cale_window_t

0xafec,	// (0x00096842) list_single_fp_cale_pane_ParamLimits

0xafec,	// (0x00096842) list_single_fp_cale_pane

0xb004,	// (0x0009685a) list_single_fp_cale_pane_g1_ParamLimits

0xb004,	// (0x0009685a) list_single_fp_cale_pane_g1

0xb010,	// (0x00096866) list_single_fp_cale_pane_g2_ParamLimits

0xb010,	// (0x00096866) list_single_fp_cale_pane_g2

0x0002,

0xf75a,	// (0x0009afb0) list_single_fp_cale_pane_g_ParamLimits

0xf75a,	// (0x0009afb0) list_single_fp_cale_pane_g

0xb029,	// (0x0009687f) list_single_fp_cale_pane_t1_ParamLimits

0xb029,	// (0x0009687f) list_single_fp_cale_pane_t1

0xb03b,	// (0x00096891) list_single_fp_cale_pane_t2_ParamLimits

0xb03b,	// (0x00096891) list_single_fp_cale_pane_t2

0x0001,

0xf761,	// (0x0009afb7) list_single_fp_cale_pane_t_ParamLimits

0xf761,	// (0x0009afb7) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0d78,	// (0x0008c5ce) main_dialer_pane

0x5bee,	// (0x00091444) aid_cell_size_keypad

0x5bf8,	// (0x0009144e) dialer_ne_pane

0x5c02,	// (0x00091458) grid_dialer_command_1_pane

0x5c0a,	// (0x00091460) grid_dialer_command_2_pane

0x5c12,	// (0x00091468) grid_dialer_keypad_pane

0x5c26,	// (0x0009147c) bg_popup_call_pane_cp06_ParamLimits

0x5c26,	// (0x0009147c) bg_popup_call_pane_cp06

0x5c32,	// (0x00091488) dialer_ne_clear_pane_ParamLimits

0x5c32,	// (0x00091488) dialer_ne_clear_pane

0xb06e,	// (0x000968c4) dialer_ne_pane_g1

0xb076,	// (0x000968cc) dialer_ne_pane_t1_ParamLimits

0xb076,	// (0x000968cc) dialer_ne_pane_t1

0x5c3e,	// (0x00091494) dialer_ne_pane_t2_ParamLimits

0x5c3e,	// (0x00091494) dialer_ne_pane_t2

0x5c68,	// (0x000914be) dialer_ne_pane_t3_ParamLimits

0x5c68,	// (0x000914be) dialer_ne_pane_t3

0x0002,

0xf766,	// (0x0009afbc) dialer_ne_pane_t_ParamLimits

0xf766,	// (0x0009afbc) dialer_ne_pane_t

0x5c98,	// (0x000914ee) dialer_ne_pane_t3_copy1_ParamLimits

0x5c98,	// (0x000914ee) dialer_ne_pane_t3_copy1

0x5cc7,	// (0x0009151d) cell_dialer_keypad_pane_ParamLimits

0x5cc7,	// (0x0009151d) cell_dialer_keypad_pane

0x5cde,	// (0x00091534) cell_dialer_command_1_pane_ParamLimits

0x5cde,	// (0x00091534) cell_dialer_command_1_pane

0x5cf4,	// (0x0009154a) cell_dialer_command_2_pane_ParamLimits

0x5cf4,	// (0x0009154a) cell_dialer_command_2_pane

0xb088,	// (0x000968de) bg_button_pane_cp02_ParamLimits

0xb088,	// (0x000968de) bg_button_pane_cp02

0x5d03,	// (0x00091559) cell_dialer_keypad_pane_g1_ParamLimits

0x5d03,	// (0x00091559) cell_dialer_keypad_pane_g1

0xb088,	// (0x000968de) bg_button_pane_cp03_ParamLimits

0xb088,	// (0x000968de) bg_button_pane_cp03

0x5d18,	// (0x0009156e) cell_dialer_command_1_pane_g1_ParamLimits

0x5d18,	// (0x0009156e) cell_dialer_command_1_pane_g1

0xb094,	// (0x000968ea) bg_button_pane_cp04

0x5d2c,	// (0x00091582) cell_dialer_command_2_pane_g1

0xecb9,	// (0x0009a50f) bg_button_pane_cp06

0xb09c,	// (0x000968f2) dialer_ne_clear_pane_g1

0x2ee2,	// (0x0008e738) navi_pane_g2

0x2f10,	// (0x0008e766) navi_pane_g3

0x0002,

0xf3d0,	// (0x0009ac26) navi_pane_g

0x2f3b,	// (0x0008e791) navi_pane_mv_g2

0x2f62,	// (0x0008e7b8) navi_pane_mv_g5

0x2f6a,	// (0x0008e7c0) navi_pane_mv_t1

0xe25d,	// (0x00099ab3) main_clock2_pane

0x5d64,	// (0x000915ba) main_clock2_list_pane_ParamLimits

0x5d64,	// (0x000915ba) main_clock2_list_pane

0x5d9c,	// (0x000915f2) main_clock2_pane_t1_ParamLimits

0x5d9c,	// (0x000915f2) main_clock2_pane_t1

0x5dd8,	// (0x0009162e) main_clock2_pane_t2_ParamLimits

0x5dd8,	// (0x0009162e) main_clock2_pane_t2

0x0004,

0xf76d,	// (0x0009afc3) main_clock2_pane_t_ParamLimits

0xf76d,	// (0x0009afc3) main_clock2_pane_t

0x5e64,	// (0x000916ba) popup_clock_analogue_window_cp03_ParamLimits

0x5e64,	// (0x000916ba) popup_clock_analogue_window_cp03

0x5e8b,	// (0x000916e1) popup_clock_digital_window_cp02_ParamLimits

0x5e8b,	// (0x000916e1) popup_clock_digital_window_cp02

0x5f04,	// (0x0009175a) main_clock2_list_single_pane_ParamLimits

0x5f04,	// (0x0009175a) main_clock2_list_single_pane

0xecb9,	// (0x0009a50f) list_highlight_pane_cp05

0xb0a4,	// (0x000968fa) main_clock2_list_single_pane_t1

0x1e0c,	// (0x0008d662) popup_toolbar_window_cp04_ParamLimits

0x53b1,	// (0x00090c07) camera2_autofocus_pane_g2_ParamLimits

0x53b1,	// (0x00090c07) camera2_autofocus_pane_g2

0x53bd,	// (0x00090c13) camera2_autofocus_pane_g3_ParamLimits

0x53bd,	// (0x00090c13) camera2_autofocus_pane_g3

0x53c9,	// (0x00090c1f) camera2_autofocus_pane_g4_ParamLimits

0x53c9,	// (0x00090c1f) camera2_autofocus_pane_g4

0x53d5,	// (0x00090c2b) camera2_autofocus_pane_g5_ParamLimits

0x53d5,	// (0x00090c2b) camera2_autofocus_pane_g5

0x0004,

0xf6b6,	// (0x0009af0c) camera2_autofocus_pane_g_ParamLimits

0xf6b6,	// (0x0009af0c) camera2_autofocus_pane_g

0x5581,	// (0x00090dd7) camera2_autofocus_pane_cp_g2

0x5589,	// (0x00090ddf) camera2_autofocus_pane_cp_g3

0x5591,	// (0x00090de7) camera2_autofocus_pane_cp_g4

0x5599,	// (0x00090def) camera2_autofocus_pane_cp_g5

0x0004,

0xf71c,	// (0x0009af72) camera2_autofocus_pane_cp_g

0x5c1e,	// (0x00091474) popup_dialer_spcha_window

0x0d78,	// (0x0008c5ce) bg_popup_sub_pane_cp07

0xb0b2,	// (0x00096908) list_spcha_pane

0xb0ba,	// (0x00096910) list_single_spcha_pane_ParamLimits

0xb0ba,	// (0x00096910) list_single_spcha_pane

0x0d78,	// (0x0008c5ce) list_highlight_pane_cp06

0xb0cb,	// (0x00096921) list_single_spcha_pane_t1

0xa16a,	// (0x000959c0) popup_call2_audio_out_window_g4_ParamLimits

0xa16a,	// (0x000959c0) popup_call2_audio_out_window_g4

0x0d78,	// (0x0008c5ce) main_imed2_pane

0xa751,	// (0x00095fa7) popup_imed_adjust2_window

0x477f,	// (0x0008ffd5) popup_imed_trans_window_ParamLimits

0x477f,	// (0x0008ffd5) popup_imed_trans_window

0xaa92,	// (0x000962e8) popup_blid_sat_info2_window_t1

0xaaa0,	// (0x000962f6) popup_blid_sat_info2_window_t2

0x000a,

0xf64b,	// (0x0009aea1) popup_blid_sat_info2_window_t

0x5fba,	// (0x00091810) aid_size_cell_colour_35

0x5fda,	// (0x00091830) aid_size_cell_colour_112

0x5ffa,	// (0x00091850) aid_size_cell_effect

0xa725,	// (0x00095f7b) bg_tb_trans_pane_cp02

0xe817,	// (0x0009a06d) heading_imed_pane

0x601a,	// (0x00091870) listscroll_imed_pane

0xb0d9,	// (0x0009692f) heading_imed_pane_g1

0xb0e1,	// (0x00096937) heading_imed_pane_t1

0xb0ef,	// (0x00096945) grid_imed_colour_35_pane_ParamLimits

0xb0ef,	// (0x00096945) grid_imed_colour_35_pane

0x6026,	// (0x0009187c) grid_imed_effect_pane

0xb10b,	// (0x00096961) list_imed_aspect_pane

0x603d,	// (0x00091893) scroll_pane_cp027_ParamLimits

0x603d,	// (0x00091893) scroll_pane_cp027

0x604e,	// (0x000918a4) cell_imed_effect_pane_ParamLimits

0x604e,	// (0x000918a4) cell_imed_effect_pane

0xb113,	// (0x00096969) cell_imed_colour_pane_ParamLimits

0xb113,	// (0x00096969) cell_imed_colour_pane

0xb15d,	// (0x000969b3) cell_imed_colour_pane_g1_ParamLimits

0xb15d,	// (0x000969b3) cell_imed_colour_pane_g1

0xb16e,	// (0x000969c4) hgihlgiht_grid_pane_cp016_ParamLimits

0xb16e,	// (0x000969c4) hgihlgiht_grid_pane_cp016

0x6073,	// (0x000918c9) cell_imed_effect_pane_g1

0x607b,	// (0x000918d1) grid_highlight_pane_cp017

0xb17f,	// (0x000969d5) list_imed_single_pane_ParamLimits

0xb17f,	// (0x000969d5) list_imed_single_pane

0x0d78,	// (0x0008c5ce) list_highlight_pane_cp07

0xb193,	// (0x000969e9) list_imed_aspect_pane_comp1_t1

0xa725,	// (0x00095f7b) bg_tb_trans_pane_cp05

0xb1b5,	// (0x00096a0b) popup_imed_adjust2_window_g1

0xb1dc,	// (0x00096a32) popup_imed_adjust2_window_t1

0xb1f4,	// (0x00096a4a) slider_imed_adjust_pane

0xb208,	// (0x00096a5e) slider_imed_adjust_pane_g1

0xb218,	// (0x00096a6e) slider_imed_adjust_pane_g2

0xb228,	// (0x00096a7e) slider_imed_adjust_pane_g3

0xb239,	// (0x00096a8f) slider_imed_adjust_pane_g4

0x0003,

0xf78a,	// (0x0009afe0) slider_imed_adjust_pane_g

0x6084,	// (0x000918da) aid_size_cell_clipart2

0x6090,	// (0x000918e6) grid_imed_clipart_pane

0xb24a,	// (0x00096aa0) scroll_pane_cp031

0x609a,	// (0x000918f0) cell_imed_clipart_pane_ParamLimits

0x609a,	// (0x000918f0) cell_imed_clipart_pane

0x60b7,	// (0x0009190d) cell_imed_clipart_pane_g1

0x0d78,	// (0x0008c5ce) grid_highlight_pane_cp014

0x5d79,	// (0x000915cf) main_clock2_pane_g1_ParamLimits

0x5d79,	// (0x000915cf) main_clock2_pane_g1

0x5eab,	// (0x00091701) aid_call2_pane_cp10

0x5ebd,	// (0x00091713) aid_call_pane_cp10

0xebee,	// (0x0009a444) popup_clock_analogue_window_cp10_g1

0xebee,	// (0x0009a444) popup_clock_analogue_window_cp10_g2

0x5ecf,	// (0x00091725) popup_clock_analogue_window_cp10_g3

0x5ecf,	// (0x00091725) popup_clock_analogue_window_cp10_g4

0xebee,	// (0x0009a444) popup_clock_analogue_window_cp10_g5

0x0004,

0xf778,	// (0x0009afce) popup_clock_analogue_window_cp10_g

0x5ee5,	// (0x0009173b) popup_clock_analogue_window_cp10_t1

0x5f16,	// (0x0009176c) clock_digital_number_pane_cp10_ParamLimits

0x5f16,	// (0x0009176c) clock_digital_number_pane_cp10

0x5f30,	// (0x00091786) clock_digital_number_pane_cp11_ParamLimits

0x5f30,	// (0x00091786) clock_digital_number_pane_cp11

0x5f4a,	// (0x000917a0) clock_digital_number_pane_cp12_ParamLimits

0x5f4a,	// (0x000917a0) clock_digital_number_pane_cp12

0x5f64,	// (0x000917ba) clock_digital_number_pane_cp13_ParamLimits

0x5f64,	// (0x000917ba) clock_digital_number_pane_cp13

0x5f7e,	// (0x000917d4) clock_digital_separator_pane_cp10_ParamLimits

0x5f7e,	// (0x000917d4) clock_digital_separator_pane_cp10

0x5f98,	// (0x000917ee) popup_clock_digital_window_cp02_t1_ParamLimits

0x5f98,	// (0x000917ee) popup_clock_digital_window_cp02_t1

0xe18a,	// (0x000999e0) clock_digital_number_pane_cp10_g1

0xe18a,	// (0x000999e0) clock_digital_number_pane_cp10_g2

0x0001,

0x0541,	// (0x0008bd97) clock_digital_number_pane_cp10_g

0xe18a,	// (0x000999e0) clock_digital_separator_pane_cp10_g1

0xe18a,	// (0x000999e0) clock_digital_separator_pane_g2_cp10

0xec89,	// (0x0009a4df) navi_pane_vded_g4

0xec92,	// (0x0009a4e8) navi_pane_vded_g5

0xec9b,	// (0x0009a4f1) navi_pane_vded_t1

0x0d78,	// (0x0008c5ce) main_vded_pane

0x60c0,	// (0x00091916) main_vded_pane_g1

0x60cc,	// (0x00091922) main_vded_pane_g2

0x60d8,	// (0x0009192e) main_vded_pane_g3

0x0002,

0xf793,	// (0x0009afe9) main_vded_pane_g

0x60e4,	// (0x0009193a) main_vded_pane_t1

0x60f2,	// (0x00091948) main_vded_pane_t2

0x0001,

0xf79a,	// (0x0009aff0) main_vded_pane_t

0x6100,	// (0x00091956) vded_slider_pane

0x610a,	// (0x00091960) vded_video_pane

0xb252,	// (0x00096aa8) vded_video_pane_g1

0x6116,	// (0x0009196c) vded_video_pane_g2

0xac5a,	// (0x000964b0) vded_video_pane_g3

0x0002,

0xf79f,	// (0x0009aff5) vded_video_pane_g

0xb25c,	// (0x00096ab2) vded_slider_pane_g1

0xa963,	// (0x000961b9) vded_slider_pane_g2

0xb265,	// (0x00096abb) vded_slider_pane_g3

0xb26e,	// (0x00096ac4) vded_slider_pane_g4

0xb277,	// (0x00096acd) vded_slider_pane_g5

0x0004,

0xf7a6,	// (0x0009affc) vded_slider_pane_g

0x5b1c,	// (0x00091372) mup3_rocker_pane_ParamLimits

0x5b1c,	// (0x00091372) mup3_rocker_pane

0x611f,	// (0x00091975) mup3_control_keys_pane_g1

0x6127,	// (0x0009197d) mup3_control_keys_pane_g2

0x612f,	// (0x00091985) mup3_control_keys_pane_g3

0x6137,	// (0x0009198d) mup3_control_keys_pane_g4

0x0003,

0xf7b1,	// (0x0009b007) mup3_control_keys_pane_g

0x0fd8,	// (0x0008c82e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0fd8,	// (0x0008c82e) popup_toolbar2_fixed_window_cp01

0x5b52,	// (0x000913a8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5b52,	// (0x000913a8) popup_toolbar2_fixed_window_cp02

0x3f0e,	// (0x0008f764) popup_call2_audio_second_window_t4_ParamLimits

0x3f0e,	// (0x0008f764) popup_call2_audio_second_window_t4

0x9fd7,	// (0x0009582d) popup_call2_audio_first_window_t6_ParamLimits

0x9fd7,	// (0x0009582d) popup_call2_audio_first_window_t6

0xa26d,	// (0x00095ac3) popup_call2_audio_out_window_t6_ParamLimits

0xa26d,	// (0x00095ac3) popup_call2_audio_out_window_t6

0x0d78,	// (0x0008c5ce) main_vitu_pane

0x6147,	// (0x0009199d) aid_size_cell_itu_ParamLimits

0x6147,	// (0x0009199d) aid_size_cell_itu

0xf062,	// (0x0009a8b8) bg_popup_window_pane_cp08_ParamLimits

0xf062,	// (0x0009a8b8) bg_popup_window_pane_cp08

0x615d,	// (0x000919b3) field_vitu_entry_pane_ParamLimits

0x615d,	// (0x000919b3) field_vitu_entry_pane

0x6174,	// (0x000919ca) grid_vitu_function_pane_ParamLimits

0x6174,	// (0x000919ca) grid_vitu_function_pane

0x618f,	// (0x000919e5) grid_vitu_itu_pane_ParamLimits

0x618f,	// (0x000919e5) grid_vitu_itu_pane

0x61ad,	// (0x00091a03) cell_vitu_itu_pane_ParamLimits

0x61ad,	// (0x00091a03) cell_vitu_itu_pane

0x61d3,	// (0x00091a29) cell_vitu_function_pane_ParamLimits

0x61d3,	// (0x00091a29) cell_vitu_function_pane

0xf062,	// (0x0009a8b8) bg_popup_sub_pane_cp08_ParamLimits

0xf062,	// (0x0009a8b8) bg_popup_sub_pane_cp08

0x61ee,	// (0x00091a44) field_vitu_entry_pane_t1_ParamLimits

0x61ee,	// (0x00091a44) field_vitu_entry_pane_t1

0xb298,	// (0x00096aee) field_vitu_entry_pane_t2_ParamLimits

0xb298,	// (0x00096aee) field_vitu_entry_pane_t2

0x0001,

0xf7bf,	// (0x0009b015) field_vitu_entry_pane_t_ParamLimits

0xf7bf,	// (0x0009b015) field_vitu_entry_pane_t

0xb2b5,	// (0x00096b0b) bg_button_pane_cp05_ParamLimits

0xb2b5,	// (0x00096b0b) bg_button_pane_cp05

0x620e,	// (0x00091a64) cell_vitu_itu_pane_g1

0x6226,	// (0x00091a7c) cell_vitu_itu_pane_t1_ParamLimits

0x6226,	// (0x00091a7c) cell_vitu_itu_pane_t1

0x6238,	// (0x00091a8e) cell_vitu_itu_pane_t2_ParamLimits

0x6238,	// (0x00091a8e) cell_vitu_itu_pane_t2

0x0002,

0xf7c4,	// (0x0009b01a) cell_vitu_itu_pane_t_ParamLimits

0xf7c4,	// (0x0009b01a) cell_vitu_itu_pane_t

0xb2c3,	// (0x00096b19) bg_button_pane_cp07

0x626d,	// (0x00091ac3) cell_vitu_function_pane_g1

0x9caa,	// (0x00095500) main_calc_pane_g1

0x0dba,	// (0x0008c610) aid_visual_content_pane

0x0d78,	// (0x0008c5ce) main_vradio_pane

0x6276,	// (0x00091acc) main_vradio_pane_g1_ParamLimits

0x6276,	// (0x00091acc) main_vradio_pane_g1

0xb2cd,	// (0x00096b23) main_vradio_pane_g2_ParamLimits

0xb2cd,	// (0x00096b23) main_vradio_pane_g2

0x0001,

0xf7cb,	// (0x0009b021) main_vradio_pane_g_ParamLimits

0xf7cb,	// (0x0009b021) main_vradio_pane_g

0x628d,	// (0x00091ae3) main_vradio_pane_t1_ParamLimits

0x628d,	// (0x00091ae3) main_vradio_pane_t1

0x62a2,	// (0x00091af8) main_vradio_pane_t2_ParamLimits

0x62a2,	// (0x00091af8) main_vradio_pane_t2

0xb2da,	// (0x00096b30) main_vradio_pane_t3_ParamLimits

0xb2da,	// (0x00096b30) main_vradio_pane_t3

0x0002,

0xf7d0,	// (0x0009b026) main_vradio_pane_t_ParamLimits

0xf7d0,	// (0x0009b026) main_vradio_pane_t

0x62b7,	// (0x00091b0d) vradio_rocker_control_pane_ParamLimits

0x62b7,	// (0x00091b0d) vradio_rocker_control_pane

0x62c9,	// (0x00091b1f) vradio_station_info_pane_ParamLimits

0x62c9,	// (0x00091b1f) vradio_station_info_pane

0xb2ee,	// (0x00096b44) vradio_frequency_info_pane_ParamLimits

0xb2ee,	// (0x00096b44) vradio_frequency_info_pane

0xac5a,	// (0x000964b0) vradio_station_info_pane_g1

0xb2fd,	// (0x00096b53) vradio_station_info_pane_t1_ParamLimits

0xb2fd,	// (0x00096b53) vradio_station_info_pane_t1

0xb31f,	// (0x00096b75) vradio_station_info_pane_t2_ParamLimits

0xb31f,	// (0x00096b75) vradio_station_info_pane_t2

0x0001,

0xf7d7,	// (0x0009b02d) vradio_station_info_pane_t_ParamLimits

0xf7d7,	// (0x0009b02d) vradio_station_info_pane_t

0xb331,	// (0x00096b87) vradio_tuning_pane

0xb339,	// (0x00096b8f) vradio_rocker_control_pane_g1

0xb341,	// (0x00096b97) vradio_rocker_control_pane_g2

0xb349,	// (0x00096b9f) vradio_rocker_control_pane_g3

0xb351,	// (0x00096ba7) vradio_rocker_control_pane_g4

0xb359,	// (0x00096baf) vradio_rocker_control_pane_g5

0x0004,

0xf7dc,	// (0x0009b032) vradio_rocker_control_pane_g

0x62d9,	// (0x00091b2f) vradio_frequency_info_pane_g1

0xb361,	// (0x00096bb7) vradio_frequency_info_pane_t1_ParamLimits

0xb361,	// (0x00096bb7) vradio_frequency_info_pane_t1

0x62e3,	// (0x00091b39) vradio_tuning_pane_g1

0x62ee,	// (0x00091b44) vradio_tuning_pane_t1

0x0e17,	// (0x0008c66d) area_side_right_pane_ParamLimits

0x0e17,	// (0x0008c66d) area_side_right_pane

0xa6ec,	// (0x00095f42) status_small_pane_g1

0xa6f4,	// (0x00095f4a) status_small_pane_g2

0xa6fd,	// (0x00095f53) status_small_pane_g3

0xa706,	// (0x00095f5c) status_small_pane_g4

0x0003,

0xf5a1,	// (0x0009adf7) status_small_pane_g

0xa70f,	// (0x00095f65) status_small_pane_t1

0x0d78,	// (0x0008c5ce) main_video3_pane

0xb375,	// (0x00096bcb) cams_zoom_vslider_pane

0xb37d,	// (0x00096bd3) image3_wide_pane_ParamLimits

0xb37d,	// (0x00096bd3) image3_wide_pane

0xb397,	// (0x00096bed) image3_wide_small_pane

0xb3a3,	// (0x00096bf9) main_video3_pane_g1_ParamLimits

0xb3a3,	// (0x00096bf9) main_video3_pane_g1

0xb3bf,	// (0x00096c15) main_video3_pane_g2_ParamLimits

0xb3bf,	// (0x00096c15) main_video3_pane_g2

0x0001,

0xf7e7,	// (0x0009b03d) main_video3_pane_g_ParamLimits

0xf7e7,	// (0x0009b03d) main_video3_pane_g

0xb3db,	// (0x00096c31) main_video3_pane_t1_ParamLimits

0xb3db,	// (0x00096c31) main_video3_pane_t1

0xb406,	// (0x00096c5c) main_video3_pane_t2_ParamLimits

0xb406,	// (0x00096c5c) main_video3_pane_t2

0xb433,	// (0x00096c89) main_video3_pane_t3_ParamLimits

0xb433,	// (0x00096c89) main_video3_pane_t3

0x0002,

0xf7ec,	// (0x0009b042) main_video3_pane_t_ParamLimits

0xf7ec,	// (0x0009b042) main_video3_pane_t

0xb460,	// (0x00096cb6) cams_zoom_vslider_pane_g1

0xb469,	// (0x00096cbf) cams_zoom_vslider_pane_g2

0x0001,

0xf7f3,	// (0x0009b049) cams_zoom_vslider_pane_g

0xb471,	// (0x00096cc7) small_slider_vertical_pane

0xac5a,	// (0x000964b0) small_slider_vertical_pane_g1

0xac5a,	// (0x000964b0) small_slider_vertical_pane_g2

0xb479,	// (0x00096ccf) small_slider_vertical_pane_g3

0x0002,

0xf7f8,	// (0x0009b04e) small_slider_vertical_pane_g

0x0d78,	// (0x0008c5ce) main_hwr_training_pane

0xb482,	// (0x00096cd8) hwr_training_instruct_pane_ParamLimits

0xb482,	// (0x00096cd8) hwr_training_instruct_pane

0x62fd,	// (0x00091b53) hwr_training_navi_pane_ParamLimits

0x62fd,	// (0x00091b53) hwr_training_navi_pane

0x631c,	// (0x00091b72) hwr_training_write_pane_ParamLimits

0x631c,	// (0x00091b72) hwr_training_write_pane

0x0d78,	// (0x0008c5ce) bg_frame_shadow_pane

0xb4b9,	// (0x00096d0f) hwr_training_write_pane_g1

0xb4c1,	// (0x00096d17) hwr_training_write_pane_g2

0xb4c9,	// (0x00096d1f) hwr_training_write_pane_g3

0xb4d1,	// (0x00096d27) hwr_training_write_pane_g4

0xb4d9,	// (0x00096d2f) hwr_training_write_pane_g5

0xb4e1,	// (0x00096d37) hwr_training_write_pane_g6

0xb4e9,	// (0x00096d3f) hwr_training_write_pane_g7

0x0006,

0xf7ff,	// (0x0009b055) hwr_training_write_pane_g

0xd6f5,	// (0x00098f4b) hwr_training_navi_pane_g1_ParamLimits

0xd6f5,	// (0x00098f4b) hwr_training_navi_pane_g1

0xd707,	// (0x00098f5d) hwr_training_navi_pane_g2_ParamLimits

0xd707,	// (0x00098f5d) hwr_training_navi_pane_g2

0xd719,	// (0x00098f6f) hwr_training_navi_pane_g3_ParamLimits

0xd719,	// (0x00098f6f) hwr_training_navi_pane_g3

0xd729,	// (0x00098f7f) hwr_training_navi_pane_g4_ParamLimits

0xd729,	// (0x00098f7f) hwr_training_navi_pane_g4

0x0004,

0xf80e,	// (0x0009b064) hwr_training_navi_pane_g_ParamLimits

0xf80e,	// (0x0009b064) hwr_training_navi_pane_g

0xd736,	// (0x00098f8c) hwr_training_navi_pane_t1

0x6364,	// (0x00091bba) list_single_hwr_training_instruct_pane_ParamLimits

0x6364,	// (0x00091bba) list_single_hwr_training_instruct_pane

0xb4f1,	// (0x00096d47) list_single_hwr_training_instruct_pane_t1

0xab9a,	// (0x000963f0) bg_frame_shadow_pane_g1

0xb500,	// (0x00096d56) bg_frame_shadow_pane_g2

0xb508,	// (0x00096d5e) bg_frame_shadow_pane_g3

0xb510,	// (0x00096d66) bg_frame_shadow_pane_g4

0xb518,	// (0x00096d6e) bg_frame_shadow_pane_g5

0xb520,	// (0x00096d76) bg_frame_shadow_pane_g6

0xb528,	// (0x00096d7e) bg_frame_shadow_pane_g7

0xe328,	// (0x00099b7e) bg_frame_shadow_pane_g8

0x0007,

0xf819,	// (0x0009b06f) bg_frame_shadow_pane_g

0x0d78,	// (0x0008c5ce) main_video_tele_dialer_pane

0x6380,	// (0x00091bd6) aid_size_cell_video_keypad_ParamLimits

0x6380,	// (0x00091bd6) aid_size_cell_video_keypad

0x639a,	// (0x00091bf0) grid_video_dialer_keypad_pane_ParamLimits

0x639a,	// (0x00091bf0) grid_video_dialer_keypad_pane

0x63e8,	// (0x00091c3e) video_down_pane_cp_ParamLimits

0x63e8,	// (0x00091c3e) video_down_pane_cp

0x641c,	// (0x00091c72) cell_video_dialer_keypad_pane_ParamLimits

0x641c,	// (0x00091c72) cell_video_dialer_keypad_pane

0xb530,	// (0x00096d86) bg_button_pane_cp08_ParamLimits

0xb530,	// (0x00096d86) bg_button_pane_cp08

0x6442,	// (0x00091c98) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6442,	// (0x00091c98) cell_video_dialer_keypad_pane_g1

0x5b06,	// (0x0009135c) mup3_rocker2_pane_ParamLimits

0x5b06,	// (0x0009135c) mup3_rocker2_pane

0xac5a,	// (0x000964b0) mup3_rocker2_pane_g1

0x464c,	// (0x0008fea2) main_dialer2_pane

0x0d78,	// (0x0008c5ce) main_mp4_pane

0xd74c,	// (0x00098fa2) main_mp4_pane_g1_ParamLimits

0xd74c,	// (0x00098fa2) main_mp4_pane_g1

0xd74c,	// (0x00098fa2) main_mp4_pane_g2_ParamLimits

0xd74c,	// (0x00098fa2) main_mp4_pane_g2

0x647d,	// (0x00091cd3) main_mp4_pane_g3_ParamLimits

0x647d,	// (0x00091cd3) main_mp4_pane_g3

0xd75a,	// (0x00098fb0) main_mp4_pane_g4_ParamLimits

0xd75a,	// (0x00098fb0) main_mp4_pane_g4

0xd774,	// (0x00098fca) main_mp4_pane_g5_ParamLimits

0xd774,	// (0x00098fca) main_mp4_pane_g5

0x0005,

0xf839,	// (0x0009b08f) main_mp4_pane_g_ParamLimits

0xf839,	// (0x0009b08f) main_mp4_pane_g

0xd7a8,	// (0x00098ffe) main_mp4_pane_t1_ParamLimits

0xd7a8,	// (0x00098ffe) main_mp4_pane_t1

0xd804,	// (0x0009905a) main_mp4_pane_t2_ParamLimits

0xd804,	// (0x0009905a) main_mp4_pane_t2

0xb53c,	// (0x00096d92) main_mp4_pane_t3_ParamLimits

0xb53c,	// (0x00096d92) main_mp4_pane_t3

0xd856,	// (0x000990ac) main_mp4_pane_t4_ParamLimits

0xd856,	// (0x000990ac) main_mp4_pane_t4

0x0003,

0xf846,	// (0x0009b09c) main_mp4_pane_t_ParamLimits

0xf846,	// (0x0009b09c) main_mp4_pane_t

0xd896,	// (0x000990ec) mp4_progress_pane_ParamLimits

0xd896,	// (0x000990ec) mp4_progress_pane

0xd8e0,	// (0x00099136) mp4_rocker_pane_ParamLimits

0xd8e0,	// (0x00099136) mp4_rocker_pane

0xb564,	// (0x00096dba) mp4_progress_pane_t1

0xb57d,	// (0x00096dd3) mp4_progress_pane_t2

0x0001,

0xf84f,	// (0x0009b0a5) mp4_progress_pane_t

0xb596,	// (0x00096dec) mup_progress_pane_cp04

0xb5a2,	// (0x00096df8) mp4_rocker_pane_g1

0x64c7,	// (0x00091d1d) aid_cell_size_keypad2_ParamLimits

0x64c7,	// (0x00091d1d) aid_cell_size_keypad2

0x64dd,	// (0x00091d33) dialer2_ne_pane_ParamLimits

0x64dd,	// (0x00091d33) dialer2_ne_pane

0x64f5,	// (0x00091d4b) grid_dialer2_keypad_pane_ParamLimits

0x64f5,	// (0x00091d4b) grid_dialer2_keypad_pane

0xaa39,	// (0x0009628f) bg_popup_call_pane_cp07_ParamLimits

0xaa39,	// (0x0009628f) bg_popup_call_pane_cp07

0x6511,	// (0x00091d67) dialer2_ne_pane_t1_ParamLimits

0x6511,	// (0x00091d67) dialer2_ne_pane_t1

0x6551,	// (0x00091da7) cell_dialer2_keypad_pane_ParamLimits

0x6551,	// (0x00091da7) cell_dialer2_keypad_pane

0xb5be,	// (0x00096e14) bg_button_pane_pane_cp04_ParamLimits

0xb5be,	// (0x00096e14) bg_button_pane_pane_cp04

0x6577,	// (0x00091dcd) cell_dialer2_keypad_pane_g1_ParamLimits

0x6577,	// (0x00091dcd) cell_dialer2_keypad_pane_g1

0x1d3a,	// (0x0008d590) aid_placing_vt_set_content_ParamLimits

0x1d3a,	// (0x0008d590) aid_placing_vt_set_content

0x1d5a,	// (0x0008d5b0) aid_placing_vt_set_title_ParamLimits

0x1d5a,	// (0x0008d5b0) aid_placing_vt_set_title

0x0d78,	// (0x0008c5ce) main_image3_pane

0x663d,	// (0x00091e93) area_side_right_pane_cp01_ParamLimits

0x663d,	// (0x00091e93) area_side_right_pane_cp01

0xd74c,	// (0x00098fa2) main_image3_pane_g1_ParamLimits

0xd74c,	// (0x00098fa2) main_image3_pane_g1

0x6656,	// (0x00091eac) main_image3_pane_g2_ParamLimits

0x6656,	// (0x00091eac) main_image3_pane_g2

0x667e,	// (0x00091ed4) main_image3_pane_g3_ParamLimits

0x667e,	// (0x00091ed4) main_image3_pane_g3

0x66a8,	// (0x00091efe) main_image3_pane_g4_ParamLimits

0x66a8,	// (0x00091efe) main_image3_pane_g4

0x0003,

0xf85e,	// (0x0009b0b4) main_image3_pane_g_ParamLimits

0xf85e,	// (0x0009b0b4) main_image3_pane_g

0x66d2,	// (0x00091f28) main_image3_pane_t1_ParamLimits

0x66d2,	// (0x00091f28) main_image3_pane_t1

0x672a,	// (0x00091f80) main_image3_pane_t2_ParamLimits

0x672a,	// (0x00091f80) main_image3_pane_t2

0x677c,	// (0x00091fd2) main_image3_pane_t3_ParamLimits

0x677c,	// (0x00091fd2) main_image3_pane_t3

0x0003,

0xf867,	// (0x0009b0bd) main_image3_pane_t_ParamLimits

0xf867,	// (0x0009b0bd) main_image3_pane_t

0xf062,	// (0x0009a8b8) grid_sctrl_middle_pane_cp01_ParamLimits

0xf062,	// (0x0009a8b8) grid_sctrl_middle_pane_cp01

0x6804,	// (0x0009205a) cell_sctrl_middle_pane_cp01_ParamLimits

0x6804,	// (0x0009205a) cell_sctrl_middle_pane_cp01

0x6821,	// (0x00092077) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6821,	// (0x00092077) cell_sctrl_middle_pane_cp01_g1

0x0d78,	// (0x0008c5ce) main_call4_pane

0x6836,	// (0x0009208c) aid_size_button_call4_ParamLimits

0x6836,	// (0x0009208c) aid_size_button_call4

0x6869,	// (0x000920bf) call4_windows_pane_ParamLimits

0x6869,	// (0x000920bf) call4_windows_pane

0x688b,	// (0x000920e1) grid_call4_button_pane_ParamLimits

0x688b,	// (0x000920e1) grid_call4_button_pane

0xb5ca,	// (0x00096e20) call4_windows_conf_pane

0xb5e5,	// (0x00096e3b) popup_call4_audio_first_window_ParamLimits

0xb5e5,	// (0x00096e3b) popup_call4_audio_first_window

0xb633,	// (0x00096e89) popup_call4_audio_second_window_ParamLimits

0xb633,	// (0x00096e89) popup_call4_audio_second_window

0xb649,	// (0x00096e9f) popup_call4_audio_wait_window_ParamLimits

0xb649,	// (0x00096e9f) popup_call4_audio_wait_window

0x68b6,	// (0x0009210c) cell_call4_button_pane_ParamLimits

0x68b6,	// (0x0009210c) cell_call4_button_pane

0x68dd,	// (0x00092133) bg_button_pane_cp09_ParamLimits

0x68dd,	// (0x00092133) bg_button_pane_cp09

0x68e9,	// (0x0009213f) cell_call4_button_pane_g1_ParamLimits

0x68e9,	// (0x0009213f) cell_call4_button_pane_g1

0x690f,	// (0x00092165) cell_call4_button_pane_t1_ParamLimits

0x690f,	// (0x00092165) cell_call4_button_pane_t1

0xb691,	// (0x00096ee7) popup_call4_audio_conf_window_ParamLimits

0xb691,	// (0x00096ee7) popup_call4_audio_conf_window

0x5b68,	// (0x000913be) mup3_progress_pane_t1_ParamLimits

0x5b7f,	// (0x000913d5) mup3_progress_pane_t2_ParamLimits

0xaf79,	// (0x000967cf) mup3_progress_pane_t3_ParamLimits

0xf745,	// (0x0009af9b) mup3_progress_pane_t_ParamLimits

0xaf90,	// (0x000967e6) mup_progress_pane_cp03_ParamLimits

0x613f,	// (0x00091995) mup3_control_keys_pane_g4_copy1

0xd8c4,	// (0x0009911a) mp4_rocker2_pane_ParamLimits

0xd8c4,	// (0x0009911a) mp4_rocker2_pane

0xb6ab,	// (0x00096f01) mp4_rocker2_pane_g1

0xb6b3,	// (0x00096f09) mp4_rocker2_pane_g2

0xd936,	// (0x0009918c) mp4_rocker2_pane_g3

0xd93e,	// (0x00099194) mp4_rocker2_pane_g4

0xd946,	// (0x0009919c) mp4_rocker2_pane_g5

0x0004,

0xf870,	// (0x0009b0c6) mp4_rocker2_pane_g

0x0d78,	// (0x0008c5ce) main_camera4_pane

0x0d78,	// (0x0008c5ce) main_video4_pane

0x63b6,	// (0x00091c0c) main_video_tele_dialer_pane_t1_ParamLimits

0x63b6,	// (0x00091c0c) main_video_tele_dialer_pane_t1

0x63cf,	// (0x00091c25) main_video_tele_dialer_pane_t2_ParamLimits

0x63cf,	// (0x00091c25) main_video_tele_dialer_pane_t2

0x0001,

0xf82a,	// (0x0009b080) main_video_tele_dialer_pane_t_ParamLimits

0xf82a,	// (0x0009b080) main_video_tele_dialer_pane_t

0x694d,	// (0x000921a3) cam4_autofocus_pane_ParamLimits

0x694d,	// (0x000921a3) cam4_autofocus_pane

0x6963,	// (0x000921b9) cam4_image_uncrop_pane_ParamLimits

0x6963,	// (0x000921b9) cam4_image_uncrop_pane

0x697c,	// (0x000921d2) cam4_indicators_pane_ParamLimits

0x697c,	// (0x000921d2) cam4_indicators_pane

0x69ab,	// (0x00092201) main_camera4_pane_g1_ParamLimits

0x69ab,	// (0x00092201) main_camera4_pane_g1

0x69b7,	// (0x0009220d) main_camera4_pane_g2_ParamLimits

0x69b7,	// (0x0009220d) main_camera4_pane_g2

0x69b7,	// (0x0009220d) main_camera4_pane_g3_ParamLimits

0x69b7,	// (0x0009220d) main_camera4_pane_g3

0x69c3,	// (0x00092219) main_camera4_pane_g4_ParamLimits

0x69c3,	// (0x00092219) main_camera4_pane_g4

0x69cf,	// (0x00092225) main_camera4_pane_g5_ParamLimits

0x69cf,	// (0x00092225) main_camera4_pane_g5

0x0005,

0xf87b,	// (0x0009b0d1) main_camera4_pane_g_ParamLimits

0xf87b,	// (0x0009b0d1) main_camera4_pane_g

0x69ec,	// (0x00092242) main_camera4_pane_t1_ParamLimits

0x69ec,	// (0x00092242) main_camera4_pane_t1

0xd960,	// (0x000991b6) bg_tb_trans_pane_cp06

0xd976,	// (0x000991cc) cam4_indicators_pane_g1

0xd983,	// (0x000991d9) cam4_indicators_pane_g2

0x0002,

0xf896,	// (0x0009b0ec) cam4_indicators_pane_g

0xd9a3,	// (0x000991f9) cam4_indicators_pane_t1

0x6a64,	// (0x000922ba) main_video4_pane_g1_ParamLimits

0x6a64,	// (0x000922ba) main_video4_pane_g1

0x6a76,	// (0x000922cc) main_video4_pane_g2_ParamLimits

0x6a76,	// (0x000922cc) main_video4_pane_g2

0x6a8a,	// (0x000922e0) main_video4_pane_g3_ParamLimits

0x6a8a,	// (0x000922e0) main_video4_pane_g3

0x6a9a,	// (0x000922f0) main_video4_pane_g4_ParamLimits

0x6a9a,	// (0x000922f0) main_video4_pane_g4

0x0004,

0xf89d,	// (0x0009b0f3) main_video4_pane_g_ParamLimits

0xf89d,	// (0x0009b0f3) main_video4_pane_g

0x6aba,	// (0x00092310) vid4_indicators_pane_ParamLimits

0x6aba,	// (0x00092310) vid4_indicators_pane

0x6aea,	// (0x00092340) video4_image_uncrop_cif_pane_ParamLimits

0x6aea,	// (0x00092340) video4_image_uncrop_cif_pane

0x6b04,	// (0x0009235a) video4_image_uncrop_nhd_pane_ParamLimits

0x6b04,	// (0x0009235a) video4_image_uncrop_nhd_pane

0x6963,	// (0x000921b9) video4_image_uncrop_vga_pane_ParamLimits

0x6963,	// (0x000921b9) video4_image_uncrop_vga_pane

0xd9c7,	// (0x0009921d) bg_tb_trans_pane_cp07

0x6b1a,	// (0x00092370) vid4_indicators_pane_g1

0x6b27,	// (0x0009237d) vid4_indicators_pane_g2

0x6b34,	// (0x0009238a) vid4_indicators_pane_g3

0x0004,

0xf8a8,	// (0x0009b0fe) vid4_indicators_pane_g

0x6b59,	// (0x000923af) vid4_indicators_pane_t1

0x6b6b,	// (0x000923c1) cam4_autofocus_pane_g1

0x6b73,	// (0x000923c9) cam4_autofocus_pane_g2

0x6b7b,	// (0x000923d1) cam4_autofocus_pane_g3

0x0002,

0xf8b3,	// (0x0009b109) cam4_autofocus_pane_g

0x6b83,	// (0x000923d9) cam4_autofocus_pane_g3_copy1

0x6400,	// (0x00091c56) video_down_pane_cp_t1

0x640e,	// (0x00091c64) video_down_pane_cp_t2

0x0001,

0xf82f,	// (0x0009b085) video_down_pane_cp_t

0xf062,	// (0x0009a8b8) popup_vitu2_window_ParamLimits

0xf062,	// (0x0009a8b8) popup_vitu2_window

0x6b8b,	// (0x000923e1) aid_size_cell2_itu2_ParamLimits

0x6b8b,	// (0x000923e1) aid_size_cell2_itu2

0x6bb1,	// (0x00092407) aid_size_cell_itu2_ParamLimits

0x6bb1,	// (0x00092407) aid_size_cell_itu2

0x6c0f,	// (0x00092465) bg_popup_window_pane_cp09_ParamLimits

0x6c0f,	// (0x00092465) bg_popup_window_pane_cp09

0x6c1d,	// (0x00092473) field_vitu2_entry_pane_ParamLimits

0x6c1d,	// (0x00092473) field_vitu2_entry_pane

0x6c45,	// (0x0009249b) grid_vitu2_function_pane_ParamLimits

0x6c45,	// (0x0009249b) grid_vitu2_function_pane

0x6c96,	// (0x000924ec) grid_vitu2_itu_pane_ParamLimits

0x6c96,	// (0x000924ec) grid_vitu2_itu_pane

0x6d21,	// (0x00092577) cell_vitu2_itu_pane_ParamLimits

0x6d21,	// (0x00092577) cell_vitu2_itu_pane

0x6d47,	// (0x0009259d) cell_vitu2_function_pane_ParamLimits

0x6d47,	// (0x0009259d) cell_vitu2_function_pane

0xb6bb,	// (0x00096f11) bg_popup_call_pane_cp08_ParamLimits

0xb6bb,	// (0x00096f11) bg_popup_call_pane_cp08

0xb6d4,	// (0x00096f2a) field_vitu2_entry_pane_g1

0xb6e0,	// (0x00096f36) field_vitu2_entry_pane_g2

0x0002,

0xf8ba,	// (0x0009b110) field_vitu2_entry_pane_g

0x6d8b,	// (0x000925e1) field_vitu2_entry_pane_t1_ParamLimits

0x6d8b,	// (0x000925e1) field_vitu2_entry_pane_t1

0xb6fa,	// (0x00096f50) field_vitu2_entry_pane_t2_ParamLimits

0xb6fa,	// (0x00096f50) field_vitu2_entry_pane_t2

0x0001,

0xf8c1,	// (0x0009b117) field_vitu2_entry_pane_t_ParamLimits

0xf8c1,	// (0x0009b117) field_vitu2_entry_pane_t

0x6da8,	// (0x000925fe) bg_button_pane_cp010_ParamLimits

0x6da8,	// (0x000925fe) bg_button_pane_cp010

0x6db6,	// (0x0009260c) cell_vitu2_itu_pane_g1

0x6dd4,	// (0x0009262a) cell_vitu2_itu_pane_t1_ParamLimits

0x6dd4,	// (0x0009262a) cell_vitu2_itu_pane_t1

0x0c84,	// (0x0008c4da) cell_vitu2_itu_pane_t2_ParamLimits

0x0c84,	// (0x0008c4da) cell_vitu2_itu_pane_t2

0x0002,

0xf8cb,	// (0x0009b121) cell_vitu2_itu_pane_t_ParamLimits

0xf8cb,	// (0x0009b121) cell_vitu2_itu_pane_t

0xd9df,	// (0x00099235) bg_button_pane_cp011

0x6e3a,	// (0x00092690) cell_vitu2_function_pane_g1

0x0d78,	// (0x0008c5ce) main_myfav_hc_pane

0x67cc,	// (0x00092022) popup_image3_note_pane_ParamLimits

0x67cc,	// (0x00092022) popup_image3_note_pane

0x67e8,	// (0x0009203e) popup_image3_tool_bar_pane_ParamLimits

0x67e8,	// (0x0009203e) popup_image3_tool_bar_pane

0x0d08,	// (0x0008c55e) cell_vitu2_itu_pane_t3_ParamLimits

0x0d08,	// (0x0008c55e) cell_vitu2_itu_pane_t3

0x0d78,	// (0x0008c5ce) bg_popup_trans_pane

0xb71f,	// (0x00096f75) grid_image3_tool_bar_pane

0xb729,	// (0x00096f7f) bg_popup_trans_pane_g1

0xe66f,	// (0x00099ec5) bg_popup_trans_pane_g2

0xb731,	// (0x00096f87) bg_popup_trans_pane_g3

0xb739,	// (0x00096f8f) bg_popup_trans_pane_g4

0xb741,	// (0x00096f97) bg_popup_trans_pane_g5

0xb749,	// (0x00096f9f) bg_popup_trans_pane_g6

0xb751,	// (0x00096fa7) bg_popup_trans_pane_g7

0xb759,	// (0x00096faf) bg_popup_trans_pane_g8

0xe64f,	// (0x00099ea5) bg_popup_trans_pane_g9

0x0008,

0xf8d2,	// (0x0009b128) bg_popup_trans_pane_g

0xb761,	// (0x00096fb7) cell_image3_tool_bar_pane_ParamLimits

0xb761,	// (0x00096fb7) cell_image3_tool_bar_pane

0xac5a,	// (0x000964b0) cell_image3_tool_bar_pane_g1

0x0d78,	// (0x0008c5ce) bg_popup_trans_pane_cp1

0xb777,	// (0x00096fcd) popup_image3_note_pane_t1

0xb785,	// (0x00096fdb) popup_image3_note_pane_t2

0xb793,	// (0x00096fe9) popup_image3_note_pane_t3

0x0002,

0xf8e5,	// (0x0009b13b) popup_image3_note_pane_t

0xb7a3,	// (0x00096ff9) popup_image3_note_pane_t3_copy1

0x6e4e,	// (0x000926a4) bg_myfav_hc_instruction_pane_ParamLimits

0x6e4e,	// (0x000926a4) bg_myfav_hc_instruction_pane

0x6e66,	// (0x000926bc) cell_myfav_contact_pane_ParamLimits

0x6e66,	// (0x000926bc) cell_myfav_contact_pane

0x6e82,	// (0x000926d8) cell_myfav_contact_pane_cp1_ParamLimits

0x6e82,	// (0x000926d8) cell_myfav_contact_pane_cp1

0x6e9a,	// (0x000926f0) cell_myfav_contact_pane_cp2_ParamLimits

0x6e9a,	// (0x000926f0) cell_myfav_contact_pane_cp2

0x6eb2,	// (0x00092708) cell_myfav_contact_pane_cp3_ParamLimits

0x6eb2,	// (0x00092708) cell_myfav_contact_pane_cp3

0x6ec9,	// (0x0009271f) cell_myfav_contact_pane_cp4_ParamLimits

0x6ec9,	// (0x0009271f) cell_myfav_contact_pane_cp4

0x6ee1,	// (0x00092737) cell_myfav_contact_pane_cp5_ParamLimits

0x6ee1,	// (0x00092737) cell_myfav_contact_pane_cp5

0x6ef5,	// (0x0009274b) cell_myfav_contact_pane_cp6_ParamLimits

0x6ef5,	// (0x0009274b) cell_myfav_contact_pane_cp6

0x6f0b,	// (0x00092761) cell_myfav_contact_pane_cp7_ParamLimits

0x6f0b,	// (0x00092761) cell_myfav_contact_pane_cp7

0xb7b1,	// (0x00097007) listscroll_gen_pane_cp05

0x6f23,	// (0x00092779) main_myfav_hc_pane_g1_ParamLimits

0x6f23,	// (0x00092779) main_myfav_hc_pane_g1

0x6f3d,	// (0x00092793) main_myfav_hc_pane_g2_ParamLimits

0x6f3d,	// (0x00092793) main_myfav_hc_pane_g2

0x0002,

0xf8ec,	// (0x0009b142) main_myfav_hc_pane_g_ParamLimits

0xf8ec,	// (0x0009b142) main_myfav_hc_pane_g

0x6f71,	// (0x000927c7) main_myfav_hc_pane_t1_ParamLimits

0x6f71,	// (0x000927c7) main_myfav_hc_pane_t1

0xb7ba,	// (0x00097010) main_myfav_hc_pane_t2_ParamLimits

0xb7ba,	// (0x00097010) main_myfav_hc_pane_t2

0xb7cc,	// (0x00097022) main_myfav_hc_pane_t3_ParamLimits

0xb7cc,	// (0x00097022) main_myfav_hc_pane_t3

0x6f88,	// (0x000927de) main_myfav_hc_pane_t4_ParamLimits

0x6f88,	// (0x000927de) main_myfav_hc_pane_t4

0x0004,

0xf8f3,	// (0x0009b149) main_myfav_hc_pane_t_ParamLimits

0xf8f3,	// (0x0009b149) main_myfav_hc_pane_t

0xac5a,	// (0x000964b0) bg_myfav_hc_instruction_pane_g1

0xb7de,	// (0x00097034) cell_myfav_contact_pane_g1_ParamLimits

0xb7de,	// (0x00097034) cell_myfav_contact_pane_g1

0xb7de,	// (0x00097034) cell_myfav_contact_pane_g2_ParamLimits

0xb7de,	// (0x00097034) cell_myfav_contact_pane_g2

0xb7ea,	// (0x00097040) cell_myfav_contact_pane_g3_ParamLimits

0xb7ea,	// (0x00097040) cell_myfav_contact_pane_g3

0xaf63,	// (0x000967b9) cell_myfav_contact_pane_g4_ParamLimits

0xaf63,	// (0x000967b9) cell_myfav_contact_pane_g4

0xb7f7,	// (0x0009704d) cell_myfav_contact_pane_g5_ParamLimits

0xb7f7,	// (0x0009704d) cell_myfav_contact_pane_g5

0x0004,

0xf8fe,	// (0x0009b154) cell_myfav_contact_pane_g_ParamLimits

0xf8fe,	// (0x0009b154) cell_myfav_contact_pane_g

0x6f57,	// (0x000927ad) main_myfav_hc_pane_g3_ParamLimits

0x6f57,	// (0x000927ad) main_myfav_hc_pane_g3

0x0f38,	// (0x0008c78e) popup_adpt_find_window

0x6fb2,	// (0x00092808) afind_page_pane_ParamLimits

0x6fb2,	// (0x00092808) afind_page_pane

0x6fc7,	// (0x0009281d) aid_size_cell_afind_ParamLimits

0x6fc7,	// (0x0009281d) aid_size_cell_afind

0x6fe5,	// (0x0009283b) bg_popup_sub_pane_cp09_ParamLimits

0x6fe5,	// (0x0009283b) bg_popup_sub_pane_cp09

0x6ff2,	// (0x00092848) find_pane_cp01_ParamLimits

0x6ff2,	// (0x00092848) find_pane_cp01

0xb803,	// (0x00097059) grid_afind_control_pane_ParamLimits

0xb803,	// (0x00097059) grid_afind_control_pane

0x6fff,	// (0x00092855) grid_afind_pane_ParamLimits

0x6fff,	// (0x00092855) grid_afind_pane

0x7021,	// (0x00092877) cell_afind_pane_ParamLimits

0x7021,	// (0x00092877) cell_afind_pane

0xac5a,	// (0x000964b0) afind_page_pane_g1

0x7088,	// (0x000928de) afind_page_pane_g2

0x7091,	// (0x000928e7) afind_page_pane_g3

0x0002,

0xf909,	// (0x0009b15f) afind_page_pane_g

0x709a,	// (0x000928f0) afind_page_pane_t1

0xb817,	// (0x0009706d) cell_afind_grid_control_pane_ParamLimits

0xb817,	// (0x0009706d) cell_afind_grid_control_pane

0xb5be,	// (0x00096e14) bg_button_pane_cp69_ParamLimits

0xb5be,	// (0x00096e14) bg_button_pane_cp69

0x70ba,	// (0x00092910) cell_afind_pane_g1_ParamLimits

0x70ba,	// (0x00092910) cell_afind_pane_g1

0x70c7,	// (0x0009291d) cell_afind_pane_t1_ParamLimits

0x70c7,	// (0x0009291d) cell_afind_pane_t1

0xe45e,	// (0x00099cb4) bg_button_pane_cp72

0xb826,	// (0x0009707c) cell_afind_grid_control_pane_g1

0x39a6,	// (0x0008f1fc) aid_image_placing_area_ParamLimits

0x39a6,	// (0x0008f1fc) aid_image_placing_area

0xb280,	// (0x00096ad6) field_vitu_entry_pane_g1_ParamLimits

0xb280,	// (0x00096ad6) field_vitu_entry_pane_g1

0xb28c,	// (0x00096ae2) field_vitu_entry_pane_g2_ParamLimits

0xb28c,	// (0x00096ae2) field_vitu_entry_pane_g2

0x0001,

0xf7ba,	// (0x0009b010) field_vitu_entry_pane_g_ParamLimits

0xf7ba,	// (0x0009b010) field_vitu_entry_pane_g

0x620e,	// (0x00091a64) cell_vitu_itu_pane_g1_ParamLimits

0x6250,	// (0x00091aa6) cell_vitu_itu_pane_t3_ParamLimits

0x6250,	// (0x00091aa6) cell_vitu_itu_pane_t3

0xb564,	// (0x00096dba) mp4_progress_pane_t1_ParamLimits

0xb57d,	// (0x00096dd3) mp4_progress_pane_t2_ParamLimits

0xf84f,	// (0x0009b0a5) mp4_progress_pane_t_ParamLimits

0xb596,	// (0x00096dec) mup_progress_pane_cp04_ParamLimits

0x6f9c,	// (0x000927f2) main_myfav_hc_pane_t5_ParamLimits

0x6f9c,	// (0x000927f2) main_myfav_hc_pane_t5

0x0dce,	// (0x0008c624) aid_zoom_text_primary

0x0f38,	// (0x0008c78e) popup_adpt_find_window_ParamLimits

0xf062,	// (0x0009a8b8) main_cam_set_pane

0x6995,	// (0x000921eb) cam4_zoom_pane_ParamLimits

0x6995,	// (0x000921eb) cam4_zoom_pane

0x70d9,	// (0x0009292f) main_cam_set_pane_g1_ParamLimits

0x70d9,	// (0x0009292f) main_cam_set_pane_g1

0x70e7,	// (0x0009293d) main_cam_set_pane_g2_ParamLimits

0x70e7,	// (0x0009293d) main_cam_set_pane_g2

0x0001,

0xf910,	// (0x0009b166) main_cam_set_pane_g_ParamLimits

0xf910,	// (0x0009b166) main_cam_set_pane_g

0x710a,	// (0x00092960) main_cam_set_pane_t1_ParamLimits

0x710a,	// (0x00092960) main_cam_set_pane_t1

0x7125,	// (0x0009297b) main_cset_listscroll_pane_ParamLimits

0x7125,	// (0x0009297b) main_cset_listscroll_pane

0x7149,	// (0x0009299f) main_cset_slider_pane_ParamLimits

0x7149,	// (0x0009299f) main_cset_slider_pane

0xb837,	// (0x0009708d) main_cset_list_pane_ParamLimits

0xb837,	// (0x0009708d) main_cset_list_pane

0xb847,	// (0x0009709d) scroll_pane_cp028

0x7173,	// (0x000929c9) aid_area_touch_slider

0x718f,	// (0x000929e5) cset_slider_pane

0x71b9,	// (0x00092a0f) main_cset_slider_pane_g1

0x71ce,	// (0x00092a24) main_cset_slider_pane_g2

0x0011,

0xf915,	// (0x0009b16b) main_cset_slider_pane_g

0xb880,	// (0x000970d6) main_cset_slider_pane_t1

0x7290,	// (0x00092ae6) main_cset_slider_pane_t2

0x72aa,	// (0x00092b00) main_cset_slider_pane_t3

0x72c4,	// (0x00092b1a) main_cset_slider_pane_t4

0x72de,	// (0x00092b34) main_cset_slider_pane_t5

0x72fc,	// (0x00092b52) main_cset_slider_pane_t6

0x7313,	// (0x00092b69) main_cset_slider_pane_t7

0x000e,

0xf93a,	// (0x0009b190) main_cset_slider_pane_t

0x741f,	// (0x00092c75) cset_list_set_pane_ParamLimits

0x741f,	// (0x00092c75) cset_list_set_pane

0x7433,	// (0x00092c89) aid_position_infowindow_above

0x743b,	// (0x00092c91) aid_position_infowindow_below

0xb920,	// (0x00097176) cset_list_set_pane_g1_ParamLimits

0xb920,	// (0x00097176) cset_list_set_pane_g1

0x7443,	// (0x00092c99) cset_list_set_pane_g3_ParamLimits

0x7443,	// (0x00092c99) cset_list_set_pane_g3

0x0001,

0xf959,	// (0x0009b1af) cset_list_set_pane_g_ParamLimits

0xf959,	// (0x0009b1af) cset_list_set_pane_g

0x7452,	// (0x00092ca8) cset_list_set_pane_t1_ParamLimits

0x7452,	// (0x00092ca8) cset_list_set_pane_t1

0xf062,	// (0x0009a8b8) list_highlight_pane_cp021_ParamLimits

0xf062,	// (0x0009a8b8) list_highlight_pane_cp021

0xedf1,	// (0x0009a647) cset_slider_pane_g1

0xee03,	// (0x0009a659) cset_slider_pane_g2

0xedfa,	// (0x0009a650) cset_slider_pane_g3

0x0002,

0x0711,	// (0x0008bf67) cset_slider_pane_g

0xd9ed,	// (0x00099243) aid_area_touch_cam4_zoom

0xd9f5,	// (0x0009924b) cam4_zoom_cont_pane

0xd9fd,	// (0x00099253) cam4_zoom_pane_g1

0xda05,	// (0x0009925b) cam4_zoom_pane_g2

0x7467,	// (0x00092cbd) cam4_zoom_pane_g3

0x0002,

0xf95e,	// (0x0009b1b4) cam4_zoom_pane_g

0xda0d,	// (0x00099263) cam4_zoom_cont_pane_g1

0xda16,	// (0x0009926c) cam4_zoom_cont_pane_g2

0xda1f,	// (0x00099275) cam4_zoom_cont_pane_g3

0x0002,

0xf965,	// (0x0009b1bb) cam4_zoom_cont_pane_g

0x6854,	// (0x000920aa) call4_image_pane_ParamLimits

0x6854,	// (0x000920aa) call4_image_pane

0xb5ca,	// (0x00096e20) call4_windows_conf_pane_ParamLimits

0xb611,	// (0x00096e67) popup_call4_audio_in_window_ParamLimits

0xb611,	// (0x00096e67) popup_call4_audio_in_window

0x0d78,	// (0x0008c5ce) bg_popup_call2_act_pane_cp02

0xb689,	// (0x00096edf) call4_list_conf_pane

0xac5a,	// (0x000964b0) call4_image_pane_g1

0xac5a,	// (0x000964b0) call4_image_pane_g2

0x0001,

0xf685,	// (0x0009aedb) call4_image_pane_g

0xb92c,	// (0x00097182) list_single_graphic_popup_conf4_pane_ParamLimits

0xb92c,	// (0x00097182) list_single_graphic_popup_conf4_pane

0x0d78,	// (0x0008c5ce) list_highlight_pane_cp022

0xb941,	// (0x00097197) list_single_graphic_popup_conf4_pane_g1

0xeaeb,	// (0x0009a341) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf96c,	// (0x0009b1c2) list_single_graphic_popup_conf4_pane_g

0xb949,	// (0x0009719f) list_single_graphic_popup_conf4_pane_t1

0x1e2e,	// (0x0008d684) popup_vtel_slider_window_ParamLimits

0x1e2e,	// (0x0008d684) popup_vtel_slider_window

0xb5ac,	// (0x00096e02) dialer2_ne_pane_t2_ParamLimits

0xb5ac,	// (0x00096e02) dialer2_ne_pane_t2

0x0001,

0xf854,	// (0x0009b0aa) dialer2_ne_pane_t_ParamLimits

0xf854,	// (0x0009b0aa) dialer2_ne_pane_t

0xaa39,	// (0x0009628f) bg_popup_sub_pane_cp010_ParamLimits

0xaa39,	// (0x0009628f) bg_popup_sub_pane_cp010

0x746f,	// (0x00092cc5) popup_vtel_slider_window_g1_ParamLimits

0x746f,	// (0x00092cc5) popup_vtel_slider_window_g1

0x7482,	// (0x00092cd8) popup_vtel_slider_window_g2_ParamLimits

0x7482,	// (0x00092cd8) popup_vtel_slider_window_g2

0x0003,

0xf971,	// (0x0009b1c7) popup_vtel_slider_window_g_ParamLimits

0xf971,	// (0x0009b1c7) popup_vtel_slider_window_g

0x74d8,	// (0x00092d2e) vtel_slider_pane_ParamLimits

0x74d8,	// (0x00092d2e) vtel_slider_pane

0x74fa,	// (0x00092d50) vtel_slider_pane_g1_ParamLimits

0x74fa,	// (0x00092d50) vtel_slider_pane_g1

0x750e,	// (0x00092d64) vtel_slider_pane_g2_ParamLimits

0x750e,	// (0x00092d64) vtel_slider_pane_g2

0x7526,	// (0x00092d7c) vtel_slider_pane_g3_ParamLimits

0x7526,	// (0x00092d7c) vtel_slider_pane_g3

0x74fa,	// (0x00092d50) vtel_slider_pane_g4_ParamLimits

0x74fa,	// (0x00092d50) vtel_slider_pane_g4

0x753c,	// (0x00092d92) vtel_slider_pane_g5_ParamLimits

0x753c,	// (0x00092d92) vtel_slider_pane_g5

0x0004,

0xf97a,	// (0x0009b1d0) vtel_slider_pane_g_ParamLimits

0xf97a,	// (0x0009b1d0) vtel_slider_pane_g

0x0d78,	// (0x0008c5ce) main_gallery2_pane

0x6bdd,	// (0x00092433) aid_size_row_itut2_dropdow_list_ParamLimits

0x6bdd,	// (0x00092433) aid_size_row_itut2_dropdow_list

0x6c6d,	// (0x000924c3) grid_vitu2_function_top_pane_ParamLimits

0x6c6d,	// (0x000924c3) grid_vitu2_function_top_pane

0x6ccc,	// (0x00092522) popup_vitu2_dropdown_list_window_ParamLimits

0x6ccc,	// (0x00092522) popup_vitu2_dropdown_list_window

0x6cf5,	// (0x0009254b) popup_vitu2_match_list_window

0x7552,	// (0x00092da8) cell_vitu2_function_top_pane_ParamLimits

0x7552,	// (0x00092da8) cell_vitu2_function_top_pane

0x7572,	// (0x00092dc8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7572,	// (0x00092dc8) cell_vitu2_function_top_pane_cp01

0x7590,	// (0x00092de6) cell_vitu2_function_top_wide_pane_ParamLimits

0x7590,	// (0x00092de6) cell_vitu2_function_top_wide_pane

0xd9df,	// (0x00099235) bg_button_pane_cp012

0x75ae,	// (0x00092e04) cell_vitu2_function_top_pane_g1

0xda28,	// (0x0009927e) bg_button_pane_cp013_ParamLimits

0xda28,	// (0x0009927e) bg_button_pane_cp013

0x75c2,	// (0x00092e18) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x75c2,	// (0x00092e18) cell_vitu2_function_top_wide_pane_g1

0xd9df,	// (0x00099235) bg_popup_sub_pane_cp20

0x75da,	// (0x00092e30) list_vitu2_match_list_pane

0xb729,	// (0x00096f7f) bg_popup_sub_pane_cp20_g1

0xb731,	// (0x00096f87) bg_popup_sub_pane_cp20_g2

0xe66f,	// (0x00099ec5) bg_popup_sub_pane_cp20_g3

0xb739,	// (0x00096f8f) bg_popup_sub_pane_cp20_g4

0xe64f,	// (0x00099ea5) bg_popup_sub_pane_cp20_g5

0xb965,	// (0x000971bb) bg_popup_sub_pane_cp20_g6

0xb749,	// (0x00096f9f) bg_popup_sub_pane_cp20_g7

0xb751,	// (0x00096fa7) bg_popup_sub_pane_cp20_g8

0xb759,	// (0x00096faf) bg_popup_sub_pane_cp20_g9

0x0008,

0xf985,	// (0x0009b1db) bg_popup_sub_pane_cp20_g

0xda44,	// (0x0009929a) list_vitu2_match_list_item_pane_ParamLimits

0xda44,	// (0x0009929a) list_vitu2_match_list_item_pane

0xda56,	// (0x000992ac) list_vitu2_match_list_item_pane_t1

0x9cb2,	// (0x00095508) bg_popup_sub_pane_cp21

0xda64,	// (0x000992ba) grid_vitu2_dropdown_list_pane

0x7624,	// (0x00092e7a) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7624,	// (0x00092e7a) cell_vitu2_dropdown_list_char_pane

0x7647,	// (0x00092e9d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7647,	// (0x00092e9d) cell_vitu2_dropdown_list_ctrl_pane

0xb985,	// (0x000971db) cell_vitu2_dropdown_list_char_pane_g1

0xb98e,	// (0x000971e4) cell_vitu2_dropdown_list_char_pane_g2

0xb997,	// (0x000971ed) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf9a2,	// (0x0009b1f8) cell_vitu2_dropdown_list_char_pane_g

0x7675,	// (0x00092ecb) cell_vitu2_dropdown_list_char_pane_t1

0x7683,	// (0x00092ed9) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7683,	// (0x00092ed9) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7693,	// (0x00092ee9) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7693,	// (0x00092ee9) cell_vitu2_dropdown_list_ctrl_pane_g2

0x76a4,	// (0x00092efa) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x76a4,	// (0x00092efa) cell_vitu2_dropdown_list_ctrl_pane_g3

0x76b4,	// (0x00092f0a) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x76b4,	// (0x00092f0a) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd960,	// (0x000991b6) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd960,	// (0x000991b6) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf9a9,	// (0x0009b1ff) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf9a9,	// (0x0009b1ff) cell_vitu2_dropdown_list_ctrl_pane_g

0x76d0,	// (0x00092f26) aid_size_cell_gallery2_ParamLimits

0x76d0,	// (0x00092f26) aid_size_cell_gallery2

0x76e6,	// (0x00092f3c) grid_gallery2_pane_ParamLimits

0x76e6,	// (0x00092f3c) grid_gallery2_pane

0x76fa,	// (0x00092f50) scroll_pane_cp029_ParamLimits

0x76fa,	// (0x00092f50) scroll_pane_cp029

0x7706,	// (0x00092f5c) cell_gallery2_pane_ParamLimits

0x7706,	// (0x00092f5c) cell_gallery2_pane

0xb9a0,	// (0x000971f6) cell_gallery2_pane_g2

0x7740,	// (0x00092f96) cell_gallery2_pane_g3

0xb9aa,	// (0x00097200) cell_gallery2_pane_g4

0xb9b2,	// (0x00097208) cell_gallery2_pane_g5

0xecb9,	// (0x0009a50f) grid_highlight_pane_cp10

0x6cf5,	// (0x0009254b) popup_vitu2_match_list_window_ParamLimits

0x6d0c,	// (0x00092562) popup_vitu2_query_window_ParamLimits

0x6d0c,	// (0x00092562) popup_vitu2_query_window

0x9cb2,	// (0x00095508) bg_vitu2_candi_button_pane

0xb985,	// (0x000971db) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb98e,	// (0x000971e4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb997,	// (0x000971ed) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7748,	// (0x00092f9e) bg_button_pane_cp015

0x7752,	// (0x00092fa8) bg_button_pane_cp016

0x775c,	// (0x00092fb2) bg_button_pane_cp017

0xf062,	// (0x0009a8b8) bg_popup_sub_pane_cp22

0xb9ba,	// (0x00097210) popup_vitu2_query_window_g1

0x7784,	// (0x00092fda) popup_vitu2_query_window_g2

0x0001,

0xf9b4,	// (0x0009b20a) popup_vitu2_query_window_g

0x7792,	// (0x00092fe8) popup_vitu2_query_window_t1_ParamLimits

0x7792,	// (0x00092fe8) popup_vitu2_query_window_t1

0x77ba,	// (0x00093010) popup_vitu2_query_window_t2_ParamLimits

0x77ba,	// (0x00093010) popup_vitu2_query_window_t2

0x77cc,	// (0x00093022) popup_vitu2_query_window_t3_ParamLimits

0x77cc,	// (0x00093022) popup_vitu2_query_window_t3

0x77f4,	// (0x0009304a) popup_vitu2_query_window_t4_ParamLimits

0x77f4,	// (0x0009304a) popup_vitu2_query_window_t4

0x7808,	// (0x0009305e) popup_vitu2_query_window_t5_ParamLimits

0x7808,	// (0x0009305e) popup_vitu2_query_window_t5

0x0004,

0xf9b9,	// (0x0009b20f) popup_vitu2_query_window_t_ParamLimits

0xf9b9,	// (0x0009b20f) popup_vitu2_query_window_t

0xb82f,	// (0x00097085) main_cset_text_pane

0x7173,	// (0x000929c9) aid_area_touch_slider_ParamLimits

0x718f,	// (0x000929e5) cset_slider_pane_ParamLimits

0x71b9,	// (0x00092a0f) main_cset_slider_pane_g1_ParamLimits

0x71ce,	// (0x00092a24) main_cset_slider_pane_g2_ParamLimits

0xb850,	// (0x000970a6) main_cset_slider_pane_g3_ParamLimits

0xb850,	// (0x000970a6) main_cset_slider_pane_g3

0x71e3,	// (0x00092a39) main_cset_slider_pane_g4_ParamLimits

0x71e3,	// (0x00092a39) main_cset_slider_pane_g4

0x71f2,	// (0x00092a48) main_cset_slider_pane_g5_ParamLimits

0x71f2,	// (0x00092a48) main_cset_slider_pane_g5

0x7200,	// (0x00092a56) main_cset_slider_pane_g6_ParamLimits

0x7200,	// (0x00092a56) main_cset_slider_pane_g6

0xf915,	// (0x0009b16b) main_cset_slider_pane_g_ParamLimits

0xb880,	// (0x000970d6) main_cset_slider_pane_t1_ParamLimits

0x7290,	// (0x00092ae6) main_cset_slider_pane_t2_ParamLimits

0x72aa,	// (0x00092b00) main_cset_slider_pane_t3_ParamLimits

0x72c4,	// (0x00092b1a) main_cset_slider_pane_t4_ParamLimits

0x72de,	// (0x00092b34) main_cset_slider_pane_t5_ParamLimits

0x72fc,	// (0x00092b52) main_cset_slider_pane_t6_ParamLimits

0x7313,	// (0x00092b69) main_cset_slider_pane_t7_ParamLimits

0x7341,	// (0x00092b97) main_cset_slider_pane_t8_ParamLimits

0x7341,	// (0x00092b97) main_cset_slider_pane_t8

0x7369,	// (0x00092bbf) main_cset_slider_pane_t9_ParamLimits

0x7369,	// (0x00092bbf) main_cset_slider_pane_t9

0x7391,	// (0x00092be7) main_cset_slider_pane_t10_ParamLimits

0x7391,	// (0x00092be7) main_cset_slider_pane_t10

0x73b9,	// (0x00092c0f) main_cset_slider_pane_t11_ParamLimits

0x73b9,	// (0x00092c0f) main_cset_slider_pane_t11

0x73e3,	// (0x00092c39) main_cset_slider_pane_t12_ParamLimits

0x73e3,	// (0x00092c39) main_cset_slider_pane_t12

0x7400,	// (0x00092c56) main_cset_slider_pane_t13_ParamLimits

0x7400,	// (0x00092c56) main_cset_slider_pane_t13

0xf93a,	// (0x0009b190) main_cset_slider_pane_t_ParamLimits

0x0d78,	// (0x0008c5ce) bg_popup_sub_pane_cp011

0xb9c6,	// (0x0009721c) main_cset_text_pane_g1

0xb9ce,	// (0x00097224) main_cset_text_pane_t1

0xb9dc,	// (0x00097232) main_cset_text_pane_t2

0xb9ea,	// (0x00097240) main_cset_text_pane_t3

0xb9f8,	// (0x0009724e) main_cset_text_pane_t4

0xba06,	// (0x0009725c) main_cset_text_pane_t5

0xba14,	// (0x0009726a) main_cset_text_pane_t6

0xba22,	// (0x00097278) main_cset_text_pane_t7

0x0006,

0xf9c4,	// (0x0009b21a) main_cset_text_pane_t

0x0d78,	// (0x0008c5ce) main_cam4_burst_pane

0x0d78,	// (0x0008c5ce) main_cam5_pane

0x70a8,	// (0x000928fe) bg_button_pane_cp019

0x70b1,	// (0x00092907) bg_button_pane_cp020

0xb85c,	// (0x000970b2) main_cset_slider_pane_g7_ParamLimits

0xb85c,	// (0x000970b2) main_cset_slider_pane_g7

0xb868,	// (0x000970be) main_cset_slider_pane_g8_ParamLimits

0xb868,	// (0x000970be) main_cset_slider_pane_g8

0x7214,	// (0x00092a6a) main_cset_slider_pane_g9_ParamLimits

0x7214,	// (0x00092a6a) main_cset_slider_pane_g9

0x7220,	// (0x00092a76) main_cset_slider_pane_g10_ParamLimits

0x7220,	// (0x00092a76) main_cset_slider_pane_g10

0x722c,	// (0x00092a82) main_cset_slider_pane_g11_ParamLimits

0x722c,	// (0x00092a82) main_cset_slider_pane_g11

0x7238,	// (0x00092a8e) main_cset_slider_pane_g12_ParamLimits

0x7238,	// (0x00092a8e) main_cset_slider_pane_g12

0x7244,	// (0x00092a9a) main_cset_slider_pane_g13_ParamLimits

0x7244,	// (0x00092a9a) main_cset_slider_pane_g13

0x7250,	// (0x00092aa6) main_cset_slider_pane_g14_ParamLimits

0x7250,	// (0x00092aa6) main_cset_slider_pane_g14

0x725c,	// (0x00092ab2) main_cset_slider_pane_g15_ParamLimits

0x725c,	// (0x00092ab2) main_cset_slider_pane_g15

0xb8ae,	// (0x00097104) main_cset_slider_pane_t14_ParamLimits

0xb8ae,	// (0x00097104) main_cset_slider_pane_t14

0xb8e7,	// (0x0009713d) main_cset_slider_pane_t15_ParamLimits

0xb8e7,	// (0x0009713d) main_cset_slider_pane_t15

0x781c,	// (0x00093072) aid_cam4_burst_size_cell_ParamLimits

0x781c,	// (0x00093072) aid_cam4_burst_size_cell

0x783c,	// (0x00093092) grid_cam4_burst_pane_ParamLimits

0x783c,	// (0x00093092) grid_cam4_burst_pane

0x7876,	// (0x000930cc) linegrid_cam4_burst_pane_ParamLimits

0x7876,	// (0x000930cc) linegrid_cam4_burst_pane

0xba30,	// (0x00097286) scroll_pane_cp30_ParamLimits

0xba30,	// (0x00097286) scroll_pane_cp30

0x789a,	// (0x000930f0) cell_cam4_burst_pane_ParamLimits

0x789a,	// (0x000930f0) cell_cam4_burst_pane

0xba3c,	// (0x00097292) linegrid_cam4_burst_pane_g1_ParamLimits

0xba3c,	// (0x00097292) linegrid_cam4_burst_pane_g1

0x78ef,	// (0x00093145) linegrid_cam4_burst_pane_g2_ParamLimits

0x78ef,	// (0x00093145) linegrid_cam4_burst_pane_g2

0xba49,	// (0x0009729f) linegrid_cam4_burst_pane_g3_ParamLimits

0xba49,	// (0x0009729f) linegrid_cam4_burst_pane_g3

0x0002,

0xf9d3,	// (0x0009b229) linegrid_cam4_burst_pane_g_ParamLimits

0xf9d3,	// (0x0009b229) linegrid_cam4_burst_pane_g

0x7900,	// (0x00093156) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7900,	// (0x00093156) linegrid_cam4_burst_pane_g3_copy1

0xba56,	// (0x000972ac) linegrid_cam4_burst_pane_g4_ParamLimits

0xba56,	// (0x000972ac) linegrid_cam4_burst_pane_g4

0x791e,	// (0x00093174) linegrid_cam4_burst_pane_g5_ParamLimits

0x791e,	// (0x00093174) linegrid_cam4_burst_pane_g5

0x792f,	// (0x00093185) linegrid_cam4_burst_pane_g6_ParamLimits

0x792f,	// (0x00093185) linegrid_cam4_burst_pane_g6

0xba63,	// (0x000972b9) linegrid_cam4_burst_pane_g7_ParamLimits

0xba63,	// (0x000972b9) linegrid_cam4_burst_pane_g7

0x7946,	// (0x0009319c) cell_cam4_burst_pane_g1

0xba7c,	// (0x000972d2) main_cam5_pane_t1_ParamLimits

0xba7c,	// (0x000972d2) main_cam5_pane_t1

0xba8e,	// (0x000972e4) main_cam5_pane_t2_ParamLimits

0xba8e,	// (0x000972e4) main_cam5_pane_t2

0xbaa0,	// (0x000972f6) main_cam5_pane_t3_ParamLimits

0xbaa0,	// (0x000972f6) main_cam5_pane_t3

0xbab2,	// (0x00097308) main_cam5_pane_t4_ParamLimits

0xbab2,	// (0x00097308) main_cam5_pane_t4

0xbaca,	// (0x00097320) main_cam5_pane_t5_ParamLimits

0xbaca,	// (0x00097320) main_cam5_pane_t5

0xbade,	// (0x00097334) main_cam5_pane_t6_ParamLimits

0xbade,	// (0x00097334) main_cam5_pane_t6

0xbaf2,	// (0x00097348) main_cam5_pane_t7_ParamLimits

0xbaf2,	// (0x00097348) main_cam5_pane_t7

0xbb04,	// (0x0009735a) main_cam5_pane_t8_ParamLimits

0xbb04,	// (0x0009735a) main_cam5_pane_t8

0xbb22,	// (0x00097378) main_cam5_pane_t9_ParamLimits

0xbb22,	// (0x00097378) main_cam5_pane_t9

0xbb34,	// (0x0009738a) main_cam5_pane_t10_ParamLimits

0xbb34,	// (0x0009738a) main_cam5_pane_t10

0xbb46,	// (0x0009739c) main_cam5_pane_t11_ParamLimits

0xbb46,	// (0x0009739c) main_cam5_pane_t11

0xbb5a,	// (0x000973b0) main_cam5_pane_t12_ParamLimits

0xbb5a,	// (0x000973b0) main_cam5_pane_t12

0xbb71,	// (0x000973c7) main_cam5_pane_t13_ParamLimits

0xbb71,	// (0x000973c7) main_cam5_pane_t13

0x000c,

0xf9df,	// (0x0009b235) main_cam5_pane_t_ParamLimits

0xf9df,	// (0x0009b235) main_cam5_pane_t

0x0fbc,	// (0x0008c812) popup_scut_keymap_window_ParamLimits

0x0fbc,	// (0x0008c812) popup_scut_keymap_window

0x7959,	// (0x000931af) aid_size_cell_brow_shortcut

0xecb9,	// (0x0009a50f) bg_popup_window_pane_cp010

0x7965,	// (0x000931bb) grid_scut_pane

0x7971,	// (0x000931c7) cell_scut_pane_ParamLimits

0x7971,	// (0x000931c7) cell_scut_pane

0x798a,	// (0x000931e0) cell_scut_pane_g1

0xbb94,	// (0x000973ea) cell_scut_pane_t1

0xbba3,	// (0x000973f9) cell_scut_pane_t2

0x7993,	// (0x000931e9) cell_scut_pane_t3

0x0002,

0xf9fa,	// (0x0009b250) cell_scut_pane_t

0x5725,	// (0x00090f7b) main_mup3_pane_g8_ParamLimits

0x5725,	// (0x00090f7b) main_mup3_pane_g8

0x6bf7,	// (0x0009244d) area_vitu2_query_pane_ParamLimits

0x6bf7,	// (0x0009244d) area_vitu2_query_pane

0x7766,	// (0x00092fbc) input_focus_pane_cp08

0xbbb2,	// (0x00097408) area_vitu2_query_pane_g1

0x79a1,	// (0x000931f7) area_vitu2_query_pane_g2

0x0001,

0xfa01,	// (0x0009b257) area_vitu2_query_pane_g

0x79b4,	// (0x0009320a) area_vitu2_query_pane_t1_ParamLimits

0x79b4,	// (0x0009320a) area_vitu2_query_pane_t1

0x79c8,	// (0x0009321e) area_vitu2_query_pane_t2_ParamLimits

0x79c8,	// (0x0009321e) area_vitu2_query_pane_t2

0x79dc,	// (0x00093232) area_vitu2_query_pane_t3_ParamLimits

0x79dc,	// (0x00093232) area_vitu2_query_pane_t3

0xbbbe,	// (0x00097414) area_vitu2_query_pane_t4_ParamLimits

0xbbbe,	// (0x00097414) area_vitu2_query_pane_t4

0xbbe6,	// (0x0009743c) area_vitu2_query_pane_t5_ParamLimits

0xbbe6,	// (0x0009743c) area_vitu2_query_pane_t5

0xbc0e,	// (0x00097464) area_vitu2_query_pane_t6_ParamLimits

0xbc0e,	// (0x00097464) area_vitu2_query_pane_t6

0x0006,

0xfa06,	// (0x0009b25c) area_vitu2_query_pane_t_ParamLimits

0xfa06,	// (0x0009b25c) area_vitu2_query_pane_t

0x7a04,	// (0x0009325a) bg_button_pane_cp018

0x7a12,	// (0x00093268) bg_button_pane_cp021

0x7a1e,	// (0x00093274) bg_button_pane_cp022

0x7a2f,	// (0x00093285) input_focus_pane_cp09

0x2e90,	// (0x0008e6e6) aid_size_touch_mv_arrow_left

0x2eb9,	// (0x0008e70f) aid_size_touch_mv_arrow_right

0x7274,	// (0x00092aca) main_cset_slider_pane_g16_ParamLimits

0x7274,	// (0x00092aca) main_cset_slider_pane_g16

0x7282,	// (0x00092ad8) main_cset_slider_pane_g17_ParamLimits

0x7282,	// (0x00092ad8) main_cset_slider_pane_g17

0x7946,	// (0x0009319c) cell_cam4_burst_pane_g1_ParamLimits

0x0d78,	// (0x0008c5ce) compa_mode_pane

0x7492,	// (0x00092ce8) popup_vtel_slider_window_g3_ParamLimits

0x7492,	// (0x00092ce8) popup_vtel_slider_window_g3

0x74a9,	// (0x00092cff) popup_vtel_slider_window_g4_ParamLimits

0x74a9,	// (0x00092cff) popup_vtel_slider_window_g4

0x74c0,	// (0x00092d16) popup_vtel_slider_window_t1_ParamLimits

0x74c0,	// (0x00092d16) popup_vtel_slider_window_t1

0x0d78,	// (0x0008c5ce) main_cl_pane

0xa751,	// (0x00095fa7) popup_imed_adjust2_window_ParamLimits

0xa725,	// (0x00095f7b) bg_tb_trans_pane_cp05_ParamLimits

0xb1b5,	// (0x00096a0b) popup_imed_adjust2_window_g1_ParamLimits

0xb1c4,	// (0x00096a1a) popup_imed_adjust2_window_g2_ParamLimits

0xb1c4,	// (0x00096a1a) popup_imed_adjust2_window_g2

0xb1d0,	// (0x00096a26) popup_imed_adjust2_window_g3_ParamLimits

0xb1d0,	// (0x00096a26) popup_imed_adjust2_window_g3

0x0002,

0xf783,	// (0x0009afd9) popup_imed_adjust2_window_g_ParamLimits

0xf783,	// (0x0009afd9) popup_imed_adjust2_window_g

0xb1dc,	// (0x00096a32) popup_imed_adjust2_window_t1_ParamLimits

0xb1f4,	// (0x00096a4a) slider_imed_adjust_pane_ParamLimits

0xb208,	// (0x00096a5e) slider_imed_adjust_pane_g1_ParamLimits

0xb218,	// (0x00096a6e) slider_imed_adjust_pane_g2_ParamLimits

0xb228,	// (0x00096a7e) slider_imed_adjust_pane_g3_ParamLimits

0xb239,	// (0x00096a8f) slider_imed_adjust_pane_g4_ParamLimits

0xf78a,	// (0x0009afe0) slider_imed_adjust_pane_g_ParamLimits

0x6935,	// (0x0009218b) aid_touch_area_cam4_ParamLimits

0x6935,	// (0x0009218b) aid_touch_area_cam4

0xd94e,	// (0x000991a4) battery_pane_cp01

0x69e0,	// (0x00092236) main_camera4_pane_g6_ParamLimits

0x69e0,	// (0x00092236) main_camera4_pane_g6

0x6a03,	// (0x00092259) main_camera4_pane_t2_ParamLimits

0x6a03,	// (0x00092259) main_camera4_pane_t2

0x0001,

0xf888,	// (0x0009b0de) main_camera4_pane_t_ParamLimits

0xf888,	// (0x0009b0de) main_camera4_pane_t

0x6a4c,	// (0x000922a2) aid_touch_area_vid4_ParamLimits

0x6a4c,	// (0x000922a2) aid_touch_area_vid4

0x6aaa,	// (0x00092300) main_video4_pane_g5_ParamLimits

0x6aaa,	// (0x00092300) main_video4_pane_g5

0x6ad1,	// (0x00092327) vid4_progress_pane_ParamLimits

0x6ad1,	// (0x00092327) vid4_progress_pane

0xb874,	// (0x000970ca) main_cset_slider_pane_g18_ParamLimits

0xb874,	// (0x000970ca) main_cset_slider_pane_g18

0xba70,	// (0x000972c6) cell_cam4_burst_pane_g2_ParamLimits

0xba70,	// (0x000972c6) cell_cam4_burst_pane_g2

0x0001,

0xf9da,	// (0x0009b230) cell_cam4_burst_pane_g_ParamLimits

0xf9da,	// (0x0009b230) cell_cam4_burst_pane_g

0xe25d,	// (0x00099ab3) bg_cl_pane_ParamLimits

0xe25d,	// (0x00099ab3) bg_cl_pane

0x7a40,	// (0x00093296) cl_header_pane_ParamLimits

0x7a40,	// (0x00093296) cl_header_pane

0x7a54,	// (0x000932aa) cl_listscroll_pane_ParamLimits

0x7a54,	// (0x000932aa) cl_listscroll_pane

0xbc5a,	// (0x000974b0) bg_cl_pane_g1

0xbc62,	// (0x000974b8) bg_cl_pane_g2

0xbc6a,	// (0x000974c0) bg_cl_pane_g3

0xbc72,	// (0x000974c8) bg_cl_pane_g4

0xbc7a,	// (0x000974d0) bg_cl_pane_g5

0xbc82,	// (0x000974d8) bg_cl_pane_g6

0xbc8a,	// (0x000974e0) bg_cl_pane_g7

0xbc92,	// (0x000974e8) bg_cl_pane_g8

0xbc9a,	// (0x000974f0) bg_cl_pane_g9

0x0008,

0xfa15,	// (0x0009b26b) bg_cl_pane_g

0x7a64,	// (0x000932ba) aid_height_cl_leading_ParamLimits

0x7a64,	// (0x000932ba) aid_height_cl_leading

0x7a70,	// (0x000932c6) aid_height_cl_text_ParamLimits

0x7a70,	// (0x000932c6) aid_height_cl_text

0xf062,	// (0x0009a8b8) bg_cl_header_pane_ParamLimits

0xf062,	// (0x0009a8b8) bg_cl_header_pane

0x7a8f,	// (0x000932e5) cl_header_pane_g1_ParamLimits

0x7a8f,	// (0x000932e5) cl_header_pane_g1

0x7aa5,	// (0x000932fb) cl_header_pane_t1_ParamLimits

0x7aa5,	// (0x000932fb) cl_header_pane_t1

0xbca2,	// (0x000974f8) cl_list_pane

0xb847,	// (0x0009709d) hc_scroll_pane_cp01

0xe64f,	// (0x00099ea5) bg_cl_header_pane_g1

0xb729,	// (0x00096f7f) bg_cl_header_pane_g2

0xe66f,	// (0x00099ec5) bg_cl_header_pane_g3

0xb739,	// (0x00096f8f) bg_cl_header_pane_g4

0xb731,	// (0x00096f87) bg_cl_header_pane_g5

0xb965,	// (0x000971bb) bg_cl_header_pane_g6

0xb751,	// (0x00096fa7) bg_cl_header_pane_g7

0xb759,	// (0x00096faf) bg_cl_header_pane_g8

0xb749,	// (0x00096f9f) bg_cl_header_pane_g9

0x0008,

0xfa28,	// (0x0009b27e) bg_cl_header_pane_g

0x7abe,	// (0x00093314) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7abe,	// (0x00093314) hc_cl_list_double_graphic_heading_pane

0x7ad1,	// (0x00093327) hc_cl_list_single_graphic_pane_ParamLimits

0x7ad1,	// (0x00093327) hc_cl_list_single_graphic_pane

0x7ae9,	// (0x0009333f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7ae9,	// (0x0009333f) hc_cl_list_single_graphic_pane_g1

0x7af5,	// (0x0009334b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7af5,	// (0x0009334b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa3b,	// (0x0009b291) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa3b,	// (0x0009b291) hc_cl_list_single_graphic_pane_g

0x7b09,	// (0x0009335f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7b09,	// (0x0009335f) hc_cl_list_single_graphic_pane_t1

0x7ae9,	// (0x0009333f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7ae9,	// (0x0009333f) hc_cl_list_double_graphic_heading_pane_g1

0x7b1e,	// (0x00093374) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7b1e,	// (0x00093374) hc_cl_list_double_graphic_heading_pane_g2

0x7b32,	// (0x00093388) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7b32,	// (0x00093388) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa40,	// (0x0009b296) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa40,	// (0x0009b296) hc_cl_list_double_graphic_heading_pane_g

0x7b46,	// (0x0009339c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7b46,	// (0x0009339c) hc_cl_list_double_graphic_heading_pane_t1

0x7b5b,	// (0x000933b1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7b5b,	// (0x000933b1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa47,	// (0x0009b29d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa47,	// (0x0009b29d) hc_cl_list_double_graphic_heading_pane_t

0xda74,	// (0x000992ca) vid4_progress_pane_g1

0xda80,	// (0x000992d6) vid4_progress_pane_g2

0xda8c,	// (0x000992e2) vid4_progress_pane_g3

0xda9b,	// (0x000992f1) vid4_progress_pane_g4

0x0004,

0xfa4c,	// (0x0009b2a2) vid4_progress_pane_g

0xdab9,	// (0x0009930f) vid4_progress_pane_t1

0xdacf,	// (0x00099325) vid4_progress_pane_t2

0x0002,

0xfa57,	// (0x0009b2ad) vid4_progress_pane_t

0xdafa,	// (0x00099350) wait_bar_pane_cp07

0xaa47,	// (0x0009629d) blid_firmament_pane_ParamLimits

0xaa8a,	// (0x000962e0) popup_blid_sat_info2_window_g1

0xaaae,	// (0x00096304) popup_blid_sat_info2_window_t3

0xaabc,	// (0x00096312) popup_blid_sat_info2_window_t4

0xaaca,	// (0x00096320) popup_blid_sat_info2_window_t5

0xaad8,	// (0x0009632e) popup_blid_sat_info2_window_t6

0xaae8,	// (0x0009633e) popup_blid_sat_info2_window_t7

0xaaf6,	// (0x0009634c) popup_blid_sat_info2_window_t8

0xab04,	// (0x0009635a) popup_blid_sat_info2_window_t9

0xab12,	// (0x00096368) popup_blid_sat_info2_window_t10

0xabda,	// (0x00096430) aid_firma_cardinal_ParamLimits

0xabee,	// (0x00096444) blid_firmament_pane_t1_ParamLimits

0xac05,	// (0x0009645b) blid_firmament_pane_t2_ParamLimits

0xac1c,	// (0x00096472) blid_firmament_pane_t3_ParamLimits

0xac33,	// (0x00096489) blid_firmament_pane_t4_ParamLimits

0xf67c,	// (0x0009aed2) blid_firmament_pane_t_ParamLimits

0xac4a,	// (0x000964a0) blid_sat_info_pane_ParamLimits

0xf062,	// (0x0009a8b8) main_cam_set_pane_ParamLimits

0x5fba,	// (0x00091810) aid_size_cell_colour_35_ParamLimits

0x5fda,	// (0x00091830) aid_size_cell_colour_112_ParamLimits

0x5ffa,	// (0x00091850) aid_size_cell_effect_ParamLimits

0xa725,	// (0x00095f7b) bg_tb_trans_pane_cp02_ParamLimits

0xe817,	// (0x0009a06d) heading_imed_pane_ParamLimits

0x601a,	// (0x00091870) listscroll_imed_pane_ParamLimits

0x41b8,	// (0x0008fa0e) popup_call2_audio_first_window_g5_ParamLimits

0x41b8,	// (0x0008fa0e) popup_call2_audio_first_window_g5

0x65df,	// (0x00091e35) aid_size_touch_image3_arrow_left_ParamLimits

0x65df,	// (0x00091e35) aid_size_touch_image3_arrow_left

0x660b,	// (0x00091e61) aid_size_touch_image3_arrow_right_ParamLimits

0x660b,	// (0x00091e61) aid_size_touch_image3_arrow_right

0xdae5,	// (0x0009933b) vid4_progress_pane_t3

0x6337,	// (0x00091b8d) main_hwr_training_symbol_option_pane_ParamLimits

0x6337,	// (0x00091b8d) main_hwr_training_symbol_option_pane

0xb4a4,	// (0x00096cfa) popup_hwr_training_preview_window_ParamLimits

0xb4a4,	// (0x00096cfa) popup_hwr_training_preview_window

0x6357,	// (0x00091bad) hwr_training_navi_pane_g5_ParamLimits

0x6357,	// (0x00091bad) hwr_training_navi_pane_g5

0xb717,	// (0x00096f6d) popup_char_count_window

0xd9df,	// (0x00099235) bg_popup_sub_pane_cp20_ParamLimits

0x75da,	// (0x00092e30) list_vitu2_match_list_pane_ParamLimits

0x75e9,	// (0x00092e3f) vitu2_page_scroll_pane_ParamLimits

0x75e9,	// (0x00092e3f) vitu2_page_scroll_pane

0xbd05,	// (0x0009755b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbd05,	// (0x0009755b) list_single_hwr_training_symbol_option_pane

0xbd18,	// (0x0009756e) list_single_hwr_training_symbol_option_pane_g1

0xbd20,	// (0x00097576) list_single_hwr_training_symbol_option_pane_t1

0xbd2e,	// (0x00097584) bg_button_pane_cp023

0xbd37,	// (0x0009758d) bg_button_pane_cp024

0x7b7a,	// (0x000933d0) vitu2_page_scroll_pane_g1

0x7b82,	// (0x000933d8) vitu2_page_scroll_pane_g2

0x0001,

0xfa5e,	// (0x0009b2b4) vitu2_page_scroll_pane_g

0x7b8c,	// (0x000933e2) vitu2_page_scroll_pane_t1

0xa963,	// (0x000961b9) popup_char_count_window_g1

0xbd6a,	// (0x000975c0) popup_char_count_window_g2

0xbd73,	// (0x000975c9) popup_char_count_window_g3

0x0002,

0xfa63,	// (0x0009b2b9) popup_char_count_window_g

0xbd7c,	// (0x000975d2) popup_char_count_window_t1

0x0d78,	// (0x0008c5ce) main_vded2_pane

0xb1a1,	// (0x000969f7) aid_size_cell_imed_line

0xb1ab,	// (0x00096a01) grid_imed_line_width_pane

0x6b41,	// (0x00092397) vid4_indicators_pane_g4

0xbd8a,	// (0x000975e0) cell_imed_line_width_pane_ParamLimits

0xbd8a,	// (0x000975e0) cell_imed_line_width_pane

0xbda0,	// (0x000975f6) cell_imed_line_width_pane_g1

0xa9f5,	// (0x0009624b) cell_imed_line_width_pane_g2

0x0001,

0xfa6a,	// (0x0009b2c0) cell_imed_line_width_pane_g

0x7b9b,	// (0x000933f1) main_vded2_pane_g1_ParamLimits

0x7b9b,	// (0x000933f1) main_vded2_pane_g1

0x7bb6,	// (0x0009340c) main_vded2_pane_g2_ParamLimits

0x7bb6,	// (0x0009340c) main_vded2_pane_g2

0x0001,

0xfa6f,	// (0x0009b2c5) main_vded2_pane_g_ParamLimits

0xfa6f,	// (0x0009b2c5) main_vded2_pane_g

0x7bc8,	// (0x0009341e) vded2_slider_pane_ParamLimits

0x7bc8,	// (0x0009341e) vded2_slider_pane

0x7bd8,	// (0x0009342e) aid_size_touch_vded2_end

0x7be2,	// (0x00093438) aid_size_touch_vded2_playhead

0xbda9,	// (0x000975ff) aid_size_touch_vded2_start

0xbdb1,	// (0x00097607) vded2_slider_bg_pane

0xbdba,	// (0x00097610) vded2_slider_pane_g1

0xbdc3,	// (0x00097619) vded2_slider_pane_g2

0x7bec,	// (0x00093442) vded2_slider_pane_g3

0x0002,

0xfa74,	// (0x0009b2ca) vded2_slider_pane_g

0xbdcb,	// (0x00097621) vded2_slider_bg_pane_g1

0xbdd4,	// (0x0009762a) vded2_slider_bg_pane_g2

0xbddd,	// (0x00097633) vded2_slider_bg_pane_g3

0x0002,

0xfa7b,	// (0x0009b2d1) vded2_slider_bg_pane_g

0x35ad,	// (0x0008ee03) aid_postcard_touch_down_pane_ParamLimits

0x35ad,	// (0x0008ee03) aid_postcard_touch_down_pane

0x35c5,	// (0x0008ee1b) aid_postcard_touch_up_pane_ParamLimits

0x35c5,	// (0x0008ee1b) aid_postcard_touch_up_pane

0x0d78,	// (0x0008c5ce) main_blid2_pane

0xa733,	// (0x00095f89) popup_blid2_search_window

0x0d78,	// (0x0008c5ce) blid2_gps_pane

0x0d78,	// (0x0008c5ce) blid2_navig_pane

0x0d78,	// (0x0008c5ce) blid2_search_pane

0x0d78,	// (0x0008c5ce) blid2_tripm_pane

0x7bf7,	// (0x0009344d) blid2_search_pane_g1_ParamLimits

0x7bf7,	// (0x0009344d) blid2_search_pane_g1

0x7c0f,	// (0x00093465) blid2_search_pane_t1_ParamLimits

0x7c0f,	// (0x00093465) blid2_search_pane_t1

0x7c21,	// (0x00093477) aid_size_cell_blid2_gps_ParamLimits

0x7c21,	// (0x00093477) aid_size_cell_blid2_gps

0x7c39,	// (0x0009348f) blid2_gps_pane_g1_ParamLimits

0x7c39,	// (0x0009348f) blid2_gps_pane_g1

0x7c4d,	// (0x000934a3) grid_blid2_satellite_pane_ParamLimits

0x7c4d,	// (0x000934a3) grid_blid2_satellite_pane

0x7c65,	// (0x000934bb) blid2_navig_pane_g1_ParamLimits

0x7c65,	// (0x000934bb) blid2_navig_pane_g1

0x7c71,	// (0x000934c7) blid2_navig_pane_t1_ParamLimits

0x7c71,	// (0x000934c7) blid2_navig_pane_t1

0x7c8c,	// (0x000934e2) blid2_navig_pane_t2_ParamLimits

0x7c8c,	// (0x000934e2) blid2_navig_pane_t2

0x0001,

0xfa82,	// (0x0009b2d8) blid2_navig_pane_t_ParamLimits

0xfa82,	// (0x0009b2d8) blid2_navig_pane_t

0x7ca7,	// (0x000934fd) blid2_navig_ring_pane_ParamLimits

0x7ca7,	// (0x000934fd) blid2_navig_ring_pane

0x7cc2,	// (0x00093518) blid2_speed_pane_ParamLimits

0x7cc2,	// (0x00093518) blid2_speed_pane

0x7cce,	// (0x00093524) blid2_tripm_pane_g1_ParamLimits

0x7cce,	// (0x00093524) blid2_tripm_pane_g1

0x7ce9,	// (0x0009353f) blid2_tripm_pane_g2_ParamLimits

0x7ce9,	// (0x0009353f) blid2_tripm_pane_g2

0x7cfd,	// (0x00093553) blid2_tripm_pane_g3_ParamLimits

0x7cfd,	// (0x00093553) blid2_tripm_pane_g3

0x7d11,	// (0x00093567) blid2_tripm_pane_g4_ParamLimits

0x7d11,	// (0x00093567) blid2_tripm_pane_g4

0x7d25,	// (0x0009357b) blid2_tripm_pane_g5_ParamLimits

0x7d25,	// (0x0009357b) blid2_tripm_pane_g5

0x0005,

0xfa87,	// (0x0009b2dd) blid2_tripm_pane_g_ParamLimits

0xfa87,	// (0x0009b2dd) blid2_tripm_pane_g

0x7d4b,	// (0x000935a1) blid2_tripm_pane_t1_ParamLimits

0x7d4b,	// (0x000935a1) blid2_tripm_pane_t1

0x7d66,	// (0x000935bc) blid2_tripm_pane_t2_ParamLimits

0x7d66,	// (0x000935bc) blid2_tripm_pane_t2

0x7d7f,	// (0x000935d5) blid2_tripm_pane_t3_ParamLimits

0x7d7f,	// (0x000935d5) blid2_tripm_pane_t3

0x0003,

0xfa94,	// (0x0009b2ea) blid2_tripm_pane_t_ParamLimits

0xfa94,	// (0x0009b2ea) blid2_tripm_pane_t

0x7dc6,	// (0x0009361c) cell_blid2_satellite_pane_ParamLimits

0x7dc6,	// (0x0009361c) cell_blid2_satellite_pane

0x7de2,	// (0x00093638) cell_blid2_satellite_pane_g1

0xbde6,	// (0x0009763c) cell_blid2_satellite_pane_t1

0xac5a,	// (0x000964b0) blid2_speed_pane_g1

0xbdf4,	// (0x0009764a) blid2_speed_pane_t1

0xbe02,	// (0x00097658) blid2_speed_pane_t2

0x0001,

0xfa9d,	// (0x0009b2f3) blid2_speed_pane_t

0xac5a,	// (0x000964b0) blid2_navig_ring_pane_g1

0x7deb,	// (0x00093641) blid2_navig_ring_pane_g2

0x7df3,	// (0x00093649) blid2_navig_ring_pane_g3

0x7dfb,	// (0x00093651) blid2_navig_ring_pane_g4

0x7e03,	// (0x00093659) blid2_navig_ring_pane_g5

0x0004,

0xfaa2,	// (0x0009b2f8) blid2_navig_ring_pane_g

0x0d78,	// (0x0008c5ce) bg_popup_window_pane_cp011

0xbe10,	// (0x00097666) popup_blid2_search_window_g1

0xbe18,	// (0x0009766e) popup_blid2_search_window_t1

0xbe26,	// (0x0009767c) popup_blid2_search_window_t2

0x0001,

0xfaad,	// (0x0009b303) popup_blid2_search_window_t

0xe55e,	// (0x00099db4) main_browser_pane_g1

0xe25d,	// (0x00099ab3) main_browser_pane_ParamLimits

0xd9df,	// (0x00099235) bg_button_pane_cp011_ParamLimits

0x6e3a,	// (0x00092690) cell_vitu2_function_pane_g1_ParamLimits

0xf062,	// (0x0009a8b8) bg_popup_sub_pane_cp22_ParamLimits

0x7766,	// (0x00092fbc) input_focus_pane_cp08_ParamLimits

0x7773,	// (0x00092fc9) popup_vitu2_query_button_pane_ParamLimits

0x7773,	// (0x00092fc9) popup_vitu2_query_button_pane

0x7748,	// (0x00092f9e) popup_vitu2_query_input_button_pane

0xb9ba,	// (0x00097210) popup_vitu2_query_window_g1_ParamLimits

0x7784,	// (0x00092fda) popup_vitu2_query_window_g2_ParamLimits

0xf9b4,	// (0x0009b20a) popup_vitu2_query_window_g_ParamLimits

0x0d78,	// (0x0008c5ce) bg_button_pane_cp026

0x7e0b,	// (0x00093661) popup_vitu2_query_input_button_pane_g1

0x0d78,	// (0x0008c5ce) bg_button_pane_cp025

0xbe34,	// (0x0009768a) popup_vitu2_query_button_pane_t1

0x5436,	// (0x00090c8c) main_mp3_pane_t6

0x5444,	// (0x00090c9a) popup_slider_window_cp01

0xd96e,	// (0x000991c4) cam4_battery_pane

0xd9d5,	// (0x0009922b) cam4_battery_pane_cp02

0x7b70,	// (0x000933c6) cam4_battery_pane_cp01

0xda6c,	// (0x000992c2) cam4_battery_pane_cp03

0xb5a2,	// (0x00096df8) cam4_battery_pane_g1

0xac5a,	// (0x000964b0) cam4_battery_pane_g2

0x0001,

0xfab2,	// (0x0009b308) cam4_battery_pane_g

0xab20,	// (0x00096376) popup_blid_sat_info2_window_t11

0x2e90,	// (0x0008e6e6) aid_size_touch_mv_arrow_left_ParamLimits

0x2eb9,	// (0x0008e70f) aid_size_touch_mv_arrow_right_ParamLimits

0xec19,	// (0x0009a46f) navi_pane_g1_ParamLimits

0x2ee2,	// (0x0008e738) navi_pane_g2_ParamLimits

0x2f10,	// (0x0008e766) navi_pane_g3_ParamLimits

0xf3d0,	// (0x0009ac26) navi_pane_g_ParamLimits

0x2f6a,	// (0x0008e7c0) navi_pane_mv_t1_ParamLimits

0x6026,	// (0x0009187c) grid_imed_effect_pane_ParamLimits

0xe4a3,	// (0x00099cf9) aid_placing_vt_slider_lsc

0xe4ab,	// (0x00099d01) aid_placing_vt_slider_prt

0xf062,	// (0x0009a8b8) bg_tb_trans_pane_cp01_ParamLimits

0xadaa,	// (0x00096600) popup_image_details_window_g1_ParamLimits

0xadbd,	// (0x00096613) popup_image_details_window_g2_ParamLimits

0xadd2,	// (0x00096628) popup_image_details_window_g3_ParamLimits

0xadd2,	// (0x00096628) popup_image_details_window_g3

0xf6c1,	// (0x0009af17) popup_image_details_window_g_ParamLimits

0xade6,	// (0x0009663c) popup_image_details_window_t1_ParamLimits

0xadf8,	// (0x0009664e) popup_image_details_window_t2_ParamLimits

0xae11,	// (0x00096667) popup_image_details_window_t3_ParamLimits

0xae25,	// (0x0009667b) popup_image_details_window_t4_ParamLimits

0xae40,	// (0x00096696) popup_image_details_window_t5_ParamLimits

0xf6c8,	// (0x0009af1e) popup_image_details_window_t_ParamLimits

0x7a7c,	// (0x000932d2) cl_header_name_pane_ParamLimits

0x7a7c,	// (0x000932d2) cl_header_name_pane

0x7e13,	// (0x00093669) cl_header_name_pane_t1_ParamLimits

0x7e13,	// (0x00093669) cl_header_name_pane_t1

0x7e34,	// (0x0009368a) cl_header_name_pane_t2_ParamLimits

0x7e34,	// (0x0009368a) cl_header_name_pane_t2

0x7e76,	// (0x000936cc) cl_header_name_pane_t3_ParamLimits

0x7e76,	// (0x000936cc) cl_header_name_pane_t3

0x0002,

0xfab7,	// (0x0009b30d) cl_header_name_pane_t_ParamLimits

0xfab7,	// (0x0009b30d) cl_header_name_pane_t

0x2f3b,	// (0x0008e791) navi_pane_mv_g2_ParamLimits

0xb6d4,	// (0x00096f2a) field_vitu2_entry_pane_g1_ParamLimits

0xb6e0,	// (0x00096f36) field_vitu2_entry_pane_g2_ParamLimits

0xb6ec,	// (0x00096f42) field_vitu2_entry_pane_g3_ParamLimits

0xb6ec,	// (0x00096f42) field_vitu2_entry_pane_g3

0xf8ba,	// (0x0009b110) field_vitu2_entry_pane_g_ParamLimits

0x6db6,	// (0x0009260c) cell_vitu2_itu_pane_g1_ParamLimits

0x6dc6,	// (0x0009261c) cell_vitu2_itu_pane_g2_ParamLimits

0x6dc6,	// (0x0009261c) cell_vitu2_itu_pane_g2

0x0001,

0xf8c6,	// (0x0009b11c) cell_vitu2_itu_pane_g_ParamLimits

0xf8c6,	// (0x0009b11c) cell_vitu2_itu_pane_g

0xd9df,	// (0x00099235) bg_vkb2_func_pane_cp05_ParamLimits

0xd9df,	// (0x00099235) bg_vkb2_func_pane_cp05

0xd9df,	// (0x00099235) bg_vkb2_func_pane_cp03

0xd9df,	// (0x00099235) bg_vkb2_func_pane_cp04

0xd9df,	// (0x00099235) bg_vkb2_func_pane_cp10_ParamLimits

0xd9df,	// (0x00099235) bg_vkb2_func_pane_cp10

0x7a1e,	// (0x00093274) bg_vkb2_func_pane_cp08

0x7a04,	// (0x0009325a) bg_vkb2_func_pane_cp06

0x7a12,	// (0x00093268) bg_vkb2_func_pane_cp07

0xbd40,	// (0x00097596) bg_vkb2_func_pane_cp11_ParamLimits

0xbd40,	// (0x00097596) bg_vkb2_func_pane_cp11

0xbd55,	// (0x000975ab) bg_vkb2_func_pane_cp12_ParamLimits

0xbd55,	// (0x000975ab) bg_vkb2_func_pane_cp12

0x0d78,	// (0x0008c5ce) bg_vkb2_func_pane_cp09

0xb729,	// (0x00096f7f) bg_vkb2_func_pane_g1

0xe66f,	// (0x00099ec5) bg_vkb2_func_pane_g2

0xb731,	// (0x00096f87) bg_vkb2_func_pane_g3

0xb739,	// (0x00096f8f) bg_vkb2_func_pane_g4

0xb965,	// (0x000971bb) bg_vkb2_func_pane_g5

0xb751,	// (0x00096fa7) bg_vkb2_func_pane_g6

0xb759,	// (0x00096faf) bg_vkb2_func_pane_g7

0xb749,	// (0x00096f9f) bg_vkb2_func_pane_g8

0xe64f,	// (0x00099ea5) bg_vkb2_func_pane_g9

0x0008,

0xfabe,	// (0x0009b314) bg_vkb2_func_pane_g

0x7d39,	// (0x0009358f) blid2_tripm_pane_g6_ParamLimits

0x7d39,	// (0x0009358f) blid2_tripm_pane_g6

0xb55c,	// (0x00096db2) mp4_progress_pane_g1

0x7db2,	// (0x00093608) blid2_tripm_values_pane_ParamLimits

0x7db2,	// (0x00093608) blid2_tripm_values_pane

0x7ea7,	// (0x000936fd) blid2_tripm_values_pane_t1

0x7eb5,	// (0x0009370b) blid2_tripm_values_pane_t2

0x7ec3,	// (0x00093719) blid2_tripm_values_pane_t3

0x7ed1,	// (0x00093727) blid2_tripm_values_pane_t4

0x7edf,	// (0x00093735) blid2_tripm_values_pane_t5

0x7eed,	// (0x00093743) blid2_tripm_values_pane_t6

0x7efb,	// (0x00093751) blid2_tripm_values_pane_t7

0x7f09,	// (0x0009375f) blid2_tripm_values_pane_t8

0x7f17,	// (0x0009376d) blid2_tripm_values_pane_t9

0x0008,

0xfad1,	// (0x0009b327) blid2_tripm_values_pane_t

0x1da4,	// (0x0008d5fa) call_video_pane_t1_ParamLimits

0x1db6,	// (0x0008d60c) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0009aaf7) call_video_pane_t_ParamLimits

0x34b0,	// (0x0008ed06) msg_header_pane_g1_ParamLimits

0xee36,	// (0x0009a68c) msg_header_pane_g2_ParamLimits

0xee36,	// (0x0009a68c) msg_header_pane_g2

0x0001,

0xf44d,	// (0x0009aca3) msg_header_pane_g_ParamLimits

0xf44d,	// (0x0009aca3) msg_header_pane_g

0xe25d,	// (0x00099ab3) main_clock2_pane_ParamLimits

0x5d34,	// (0x0009158a) grid_clock2_toolbar_pane_ParamLimits

0x5d34,	// (0x0009158a) grid_clock2_toolbar_pane

0x5d34,	// (0x0009158a) listscroll_clock2_pane_ParamLimits

0x5d34,	// (0x0009158a) listscroll_clock2_pane

0x5e18,	// (0x0009166e) main_clock2_pane_t3_ParamLimits

0x5e18,	// (0x0009166e) main_clock2_pane_t3

0x5e33,	// (0x00091689) main_clock2_pane_t4_ParamLimits

0x5e33,	// (0x00091689) main_clock2_pane_t4

0xbe42,	// (0x00097698) cell_clock2_toolbar_pane

0xbe4a,	// (0x000976a0) cell_clock2_toolbar_pane_cp01

0xbe4a,	// (0x000976a0) cell_clock2_toolbar_pane_cp02

0xbe52,	// (0x000976a8) cell_clock2_toolbar_pane_cp03

0xbe5a,	// (0x000976b0) list_clock2_pane

0xeb7f,	// (0x0009a3d5) scroll_pane_cp10

0xbe62,	// (0x000976b8) list_single_clock2_pane_ParamLimits

0xbe62,	// (0x000976b8) list_single_clock2_pane

0xecb9,	// (0x0009a50f) list_highlight_pane_cp08

0xbe6f,	// (0x000976c5) list_single_clock2_pane_t1

0xbe7d,	// (0x000976d3) list_single_clock2_pane_t2

0x0001,

0xfae4,	// (0x0009b33a) list_single_clock2_pane_t

0x0d78,	// (0x0008c5ce) bg_button_pane_cp10

0xbe8b,	// (0x000976e1) cell_clock2_toolbar_pane_g1

0x3539,	// (0x0008ed8f) aid_main_viewer_pane_g1_ParamLimits

0x3539,	// (0x0008ed8f) aid_main_viewer_pane_g1

0x3547,	// (0x0008ed9d) aid_main_viewer_pane_g2_ParamLimits

0x3547,	// (0x0008ed9d) aid_main_viewer_pane_g2

0x3555,	// (0x0008edab) aid_main_viewer_pane_g3_ParamLimits

0x3555,	// (0x0008edab) aid_main_viewer_pane_g3

0x3564,	// (0x0008edba) aid_main_viewer_pane_g4_ParamLimits

0x3564,	// (0x0008edba) aid_main_viewer_pane_g4

0x0003,

0xf45e,	// (0x0009acb4) aid_main_viewer_pane_g_ParamLimits

0xf45e,	// (0x0009acb4) aid_main_viewer_pane_g

0x4638,	// (0x0008fe8e) main_calc_pane_ParamLimits

0x464c,	// (0x0008fea2) main_dialer2_pane_ParamLimits

0x0d78,	// (0x0008c5ce) main_cam6_pane

0x0d78,	// (0x0008c5ce) main_vid6_pane

0x5d40,	// (0x00091596) listscroll_gen_pane_cp06_ParamLimits

0x5d40,	// (0x00091596) listscroll_gen_pane_cp06

0x5e4e,	// (0x000916a4) main_clock2_pane_t5_ParamLimits

0x5e4e,	// (0x000916a4) main_clock2_pane_t5

0x5eab,	// (0x00091701) aid_call2_pane_cp10_ParamLimits

0x5ebd,	// (0x00091713) aid_call_pane_cp10_ParamLimits

0xebee,	// (0x0009a444) popup_clock_analogue_window_cp10_g1_ParamLimits

0xebee,	// (0x0009a444) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5ecf,	// (0x00091725) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5ecf,	// (0x00091725) popup_clock_analogue_window_cp10_g4_ParamLimits

0xebee,	// (0x0009a444) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf778,	// (0x0009afce) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ee5,	// (0x0009173b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x658c,	// (0x00091de2) cell_dialer2_keypad_pane_g2_ParamLimits

0x658c,	// (0x00091de2) cell_dialer2_keypad_pane_g2

0x0001,

0xf859,	// (0x0009b0af) cell_dialer2_keypad_pane_g_ParamLimits

0xf859,	// (0x0009b0af) cell_dialer2_keypad_pane_g

0x65a8,	// (0x00091dfe) cell_dialer2_keypad_pane_t1

0x7165,	// (0x000929bb) main_cset_text2_pane_ParamLimits

0x7165,	// (0x000929bb) main_cset_text2_pane

0xbbb2,	// (0x00097408) area_vitu2_query_pane_g1_ParamLimits

0x79a1,	// (0x000931f7) area_vitu2_query_pane_g2_ParamLimits

0xfa01,	// (0x0009b257) area_vitu2_query_pane_g_ParamLimits

0xbc36,	// (0x0009748c) area_vitu2_query_pane_t7_ParamLimits

0xbc36,	// (0x0009748c) area_vitu2_query_pane_t7

0x7a04,	// (0x0009325a) bg_button_pane_cp018_ParamLimits

0x7a12,	// (0x00093268) bg_button_pane_cp021_ParamLimits

0x7a1e,	// (0x00093274) bg_button_pane_cp022_ParamLimits

0x7a1e,	// (0x00093274) bg_vkb2_func_pane_cp08_ParamLimits

0x7a04,	// (0x0009325a) bg_vkb2_func_pane_cp06_ParamLimits

0x7a12,	// (0x00093268) bg_vkb2_func_pane_cp07_ParamLimits

0x7a2f,	// (0x00093285) input_focus_pane_cp09_ParamLimits

0xdb0c,	// (0x00099362) cam6_autofocus_pane_ParamLimits

0xdb0c,	// (0x00099362) cam6_autofocus_pane

0x7f25,	// (0x0009377b) cam6_image_uncrop_pane_ParamLimits

0x7f25,	// (0x0009377b) cam6_image_uncrop_pane

0x7f34,	// (0x0009378a) cam6_indi_pane_ParamLimits

0x7f34,	// (0x0009378a) cam6_indi_pane

0x7f4a,	// (0x000937a0) cam6_mode_pane_ParamLimits

0x7f4a,	// (0x000937a0) cam6_mode_pane

0x7f5c,	// (0x000937b2) cam6_timer_pane_ParamLimits

0x7f5c,	// (0x000937b2) cam6_timer_pane

0x7f68,	// (0x000937be) cam6_zoom_pane_ParamLimits

0x7f68,	// (0x000937be) cam6_zoom_pane

0x7f76,	// (0x000937cc) cam6_mode_pane_g1_ParamLimits

0x7f76,	// (0x000937cc) cam6_mode_pane_g1

0x7f86,	// (0x000937dc) cam6_mode_pane_g2_ParamLimits

0x7f86,	// (0x000937dc) cam6_mode_pane_g2

0x7f96,	// (0x000937ec) cam6_mode_pane_g3_ParamLimits

0x7f96,	// (0x000937ec) cam6_mode_pane_g3

0x7fa6,	// (0x000937fc) cam6_mode_pane_g4_ParamLimits

0x7fa6,	// (0x000937fc) cam6_mode_pane_g4

0x0003,

0xfae9,	// (0x0009b33f) cam6_mode_pane_g_ParamLimits

0xfae9,	// (0x0009b33f) cam6_mode_pane_g

0xbe93,	// (0x000976e9) bg_tb_trans_pane_cp08_ParamLimits

0xbe93,	// (0x000976e9) bg_tb_trans_pane_cp08

0xbea1,	// (0x000976f7) cam6_battery_pane_ParamLimits

0xbea1,	// (0x000976f7) cam6_battery_pane

0xbeb7,	// (0x0009770d) cam6_indi_pane_g1_ParamLimits

0xbeb7,	// (0x0009770d) cam6_indi_pane_g1

0xbec9,	// (0x0009771f) cam6_indi_pane_g2_ParamLimits

0xbec9,	// (0x0009771f) cam6_indi_pane_g2

0xbedb,	// (0x00097731) cam6_indi_pane_g3_ParamLimits

0xbedb,	// (0x00097731) cam6_indi_pane_g3

0x0002,

0xfaf2,	// (0x0009b348) cam6_indi_pane_g_ParamLimits

0xfaf2,	// (0x0009b348) cam6_indi_pane_g

0xbeed,	// (0x00097743) cam6_indi_pane_t1_ParamLimits

0xbeed,	// (0x00097743) cam6_indi_pane_t1

0x6b73,	// (0x000923c9) cam6_autofocus_pane_g1

0x6b6b,	// (0x000923c1) cam6_autofocus_pane_g2

0x6b83,	// (0x000923d9) cam6_autofocus_pane_g3

0x6b7b,	// (0x000923d1) cam6_autofocus_pane_g4

0x0003,

0xfaf9,	// (0x0009b34f) cam6_autofocus_pane_g

0xbf13,	// (0x00097769) cam6_timer_pane_g1

0xbf1b,	// (0x00097771) cam6_timer_pane_t1

0xbf29,	// (0x0009777f) cam6_zoom_cont_pane

0xbf31,	// (0x00097787) cam6_zoom_pane_g1

0xbf39,	// (0x0009778f) cam6_zoom_pane_g2

0x7fb6,	// (0x0009380c) cam6_zoom_pane_g3

0x0002,

0xfb02,	// (0x0009b358) cam6_zoom_pane_g

0xac5a,	// (0x000964b0) cam6_battery_pane_g1

0xac5a,	// (0x000964b0) cam6_battery_pane_g2

0x0001,

0xf685,	// (0x0009aedb) cam6_battery_pane_g

0xbf41,	// (0x00097797) cam6_zoom_cont_pane_g1

0xbf4a,	// (0x000977a0) cam6_zoom_cont_pane_g2

0xbf53,	// (0x000977a9) cam6_zoom_cont_pane_g3

0x0002,

0xfb09,	// (0x0009b35f) cam6_zoom_cont_pane_g

0x7fd3,	// (0x00093829) cam6_mode_pane_cp_ParamLimits

0x7fd3,	// (0x00093829) cam6_mode_pane_cp

0x7fe5,	// (0x0009383b) cam6_zoom_pane_cp_ParamLimits

0x7fe5,	// (0x0009383b) cam6_zoom_pane_cp

0x7ff3,	// (0x00093849) vid6_image_uncrop_cif_pane_ParamLimits

0x7ff3,	// (0x00093849) vid6_image_uncrop_cif_pane

0x8003,	// (0x00093859) vid6_image_uncrop_nhd_pane_ParamLimits

0x8003,	// (0x00093859) vid6_image_uncrop_nhd_pane

0x8012,	// (0x00093868) vid6_image_uncrop_vga_pane_ParamLimits

0x8012,	// (0x00093868) vid6_image_uncrop_vga_pane

0x8021,	// (0x00093877) vid6_image_uncrop_wvga_pane_ParamLimits

0x8021,	// (0x00093877) vid6_image_uncrop_wvga_pane

0x8030,	// (0x00093886) vid6_indi_pane_ParamLimits

0x8030,	// (0x00093886) vid6_indi_pane

0xbe93,	// (0x000976e9) bg_tb_trans_pane_cp09_ParamLimits

0xbe93,	// (0x000976e9) bg_tb_trans_pane_cp09

0xbf6b,	// (0x000977c1) cam6_battery_pane_cp_ParamLimits

0xbf6b,	// (0x000977c1) cam6_battery_pane_cp

0xbf77,	// (0x000977cd) vid6_indi_pane_g1_ParamLimits

0xbf77,	// (0x000977cd) vid6_indi_pane_g1

0xbf89,	// (0x000977df) vid6_indi_pane_g2_ParamLimits

0xbf89,	// (0x000977df) vid6_indi_pane_g2

0xbf9b,	// (0x000977f1) vid6_indi_pane_g3_ParamLimits

0xbf9b,	// (0x000977f1) vid6_indi_pane_g3

0xbfb2,	// (0x00097808) vid6_indi_pane_g4_ParamLimits

0xbfb2,	// (0x00097808) vid6_indi_pane_g4

0xbfc9,	// (0x0009781f) vid6_indi_pane_g5_ParamLimits

0xbfc9,	// (0x0009781f) vid6_indi_pane_g5

0x0004,

0xfb10,	// (0x0009b366) vid6_indi_pane_g_ParamLimits

0xfb10,	// (0x0009b366) vid6_indi_pane_g

0xbfe3,	// (0x00097839) vid6_indi_pane_t1_ParamLimits

0xbfe3,	// (0x00097839) vid6_indi_pane_t1

0xbff9,	// (0x0009784f) vid6_indi_pane_t2_ParamLimits

0xbff9,	// (0x0009784f) vid6_indi_pane_t2

0xc021,	// (0x00097877) vid6_indi_pane_t3_ParamLimits

0xc021,	// (0x00097877) vid6_indi_pane_t3

0xc049,	// (0x0009789f) vid6_indi_pane_t4_ParamLimits

0xc049,	// (0x0009789f) vid6_indi_pane_t4

0x0003,

0xfb1b,	// (0x0009b371) vid6_indi_pane_t_ParamLimits

0xfb1b,	// (0x0009b371) vid6_indi_pane_t

0xc06d,	// (0x000978c3) wait_bar_pane_cp08

0x8048,	// (0x0009389e) main_cset_text2_pane_t1_ParamLimits

0x8048,	// (0x0009389e) main_cset_text2_pane_t1

0x7fbe,	// (0x00093814) listscroll_gen_pane_cp06_t1_ParamLimits

0x7fbe,	// (0x00093814) listscroll_gen_pane_cp06_t1

0x0d78,	// (0x0008c5ce) main_cam6_set_pane

0xd960,	// (0x000991b6) bg_tb_trans_pane_cp06_ParamLimits

0xd976,	// (0x000991cc) cam4_indicators_pane_g1_ParamLimits

0xd983,	// (0x000991d9) cam4_indicators_pane_g2_ParamLimits

0xf896,	// (0x0009b0ec) cam4_indicators_pane_g_ParamLimits

0xd9a3,	// (0x000991f9) cam4_indicators_pane_t1_ParamLimits

0xd9c7,	// (0x0009921d) bg_tb_trans_pane_cp07_ParamLimits

0x6b1a,	// (0x00092370) vid4_indicators_pane_g1_ParamLimits

0x6b27,	// (0x0009237d) vid4_indicators_pane_g2_ParamLimits

0x6b34,	// (0x0009238a) vid4_indicators_pane_g3_ParamLimits

0x6b41,	// (0x00092397) vid4_indicators_pane_g4_ParamLimits

0xf8a8,	// (0x0009b0fe) vid4_indicators_pane_g_ParamLimits

0x6b59,	// (0x000923af) vid4_indicators_pane_t1_ParamLimits

0xda74,	// (0x000992ca) vid4_progress_pane_g1_ParamLimits

0xda80,	// (0x000992d6) vid4_progress_pane_g2_ParamLimits

0xda8c,	// (0x000992e2) vid4_progress_pane_g3_ParamLimits

0xda9b,	// (0x000992f1) vid4_progress_pane_g4_ParamLimits

0xfa4c,	// (0x0009b2a2) vid4_progress_pane_g_ParamLimits

0xdab9,	// (0x0009930f) vid4_progress_pane_t1_ParamLimits

0xdacf,	// (0x00099325) vid4_progress_pane_t2_ParamLimits

0xdae5,	// (0x0009933b) vid4_progress_pane_t3_ParamLimits

0xfa57,	// (0x0009b2ad) vid4_progress_pane_t_ParamLimits

0xdafa,	// (0x00099350) wait_bar_pane_cp07_ParamLimits

0x8069,	// (0x000938bf) main_cam6_set_pane_g2_ParamLimits

0x8069,	// (0x000938bf) main_cam6_set_pane_g2

0x808f,	// (0x000938e5) main_cset6_listscroll_pane_ParamLimits

0x808f,	// (0x000938e5) main_cset6_listscroll_pane

0x80ad,	// (0x00093903) main_cset6_slider_pane_ParamLimits

0x80ad,	// (0x00093903) main_cset6_slider_pane

0x80c3,	// (0x00093919) main_cset6_text2_pane_ParamLimits

0x80c3,	// (0x00093919) main_cset6_text2_pane

0xc07c,	// (0x000978d2) main_cset6_text_pane

0xc084,	// (0x000978da) main_cset_list_pane_copy1_ParamLimits

0xc084,	// (0x000978da) main_cset_list_pane_copy1

0xc094,	// (0x000978ea) scroll_pane_cp028_copy1

0x80d1,	// (0x00093927) cset_list_set_pane_copy1

0x80e5,	// (0x0009393b) aid_position_infowindow_above_copy1

0x80ed,	// (0x00093943) aid_position_infowindow_below_copy1

0x80f5,	// (0x0009394b) cset_list_set_pane_g1_copy1

0xc09d,	// (0x000978f3) cset_list_set_pane_g3_copy1_ParamLimits

0xc09d,	// (0x000978f3) cset_list_set_pane_g3_copy1

0xc0ac,	// (0x00097902) cset_list_set_pane_t1_copy1_ParamLimits

0xc0ac,	// (0x00097902) cset_list_set_pane_t1_copy1

0xf062,	// (0x0009a8b8) list_highlight_pane_cp021_copy1_ParamLimits

0xf062,	// (0x0009a8b8) list_highlight_pane_cp021_copy1

0xc0c1,	// (0x00097917) cset6_slider_pane_ParamLimits

0xc0c1,	// (0x00097917) cset6_slider_pane

0xc0ed,	// (0x00097943) main_cset6_slider_pane_g1_ParamLimits

0xc0ed,	// (0x00097943) main_cset6_slider_pane_g1

0x80fd,	// (0x00093953) main_cset6_slider_pane_g2_ParamLimits

0x80fd,	// (0x00093953) main_cset6_slider_pane_g2

0xc115,	// (0x0009796b) main_cset6_slider_pane_g3_ParamLimits

0xc115,	// (0x0009796b) main_cset6_slider_pane_g3

0x8125,	// (0x0009397b) main_cset6_slider_pane_g4_ParamLimits

0x8125,	// (0x0009397b) main_cset6_slider_pane_g4

0x8131,	// (0x00093987) main_cset6_slider_pane_g5_ParamLimits

0x8131,	// (0x00093987) main_cset6_slider_pane_g5

0xb85c,	// (0x000970b2) main_cset6_slider_pane_g7_ParamLimits

0xb85c,	// (0x000970b2) main_cset6_slider_pane_g7

0xb868,	// (0x000970be) main_cset6_slider_pane_g8_ParamLimits

0xb868,	// (0x000970be) main_cset6_slider_pane_g8

0x7214,	// (0x00092a6a) main_cset6_slider_pane_g9_ParamLimits

0x7214,	// (0x00092a6a) main_cset6_slider_pane_g9

0x7220,	// (0x00092a76) main_cset6_slider_pane_g10_ParamLimits

0x7220,	// (0x00092a76) main_cset6_slider_pane_g10

0x722c,	// (0x00092a82) main_cset6_slider_pane_g11_ParamLimits

0x722c,	// (0x00092a82) main_cset6_slider_pane_g11

0x7238,	// (0x00092a8e) main_cset6_slider_pane_g12_ParamLimits

0x7238,	// (0x00092a8e) main_cset6_slider_pane_g12

0x7244,	// (0x00092a9a) main_cset6_slider_pane_g13_ParamLimits

0x7244,	// (0x00092a9a) main_cset6_slider_pane_g13

0x7250,	// (0x00092aa6) main_cset6_slider_pane_g14_ParamLimits

0x7250,	// (0x00092aa6) main_cset6_slider_pane_g14

0x813f,	// (0x00093995) main_cset6_slider_pane_g15_ParamLimits

0x813f,	// (0x00093995) main_cset6_slider_pane_g15

0x7274,	// (0x00092aca) main_cset6_slider_pane_g16_ParamLimits

0x7274,	// (0x00092aca) main_cset6_slider_pane_g16

0x7282,	// (0x00092ad8) main_cset6_slider_pane_g17_ParamLimits

0x7282,	// (0x00092ad8) main_cset6_slider_pane_g17

0x0011,

0xfb24,	// (0x0009b37a) main_cset6_slider_pane_g_ParamLimits

0xfb24,	// (0x0009b37a) main_cset6_slider_pane_g

0xc121,	// (0x00097977) main_cset6_slider_pane_t1_ParamLimits

0xc121,	// (0x00097977) main_cset6_slider_pane_t1

0x816f,	// (0x000939c5) main_cset6_slider_pane_t2_ParamLimits

0x816f,	// (0x000939c5) main_cset6_slider_pane_t2

0x819a,	// (0x000939f0) main_cset6_slider_pane_t3_ParamLimits

0x819a,	// (0x000939f0) main_cset6_slider_pane_t3

0x81c5,	// (0x00093a1b) main_cset6_slider_pane_t4_ParamLimits

0x81c5,	// (0x00093a1b) main_cset6_slider_pane_t4

0x81f2,	// (0x00093a48) main_cset6_slider_pane_t5_ParamLimits

0x81f2,	// (0x00093a48) main_cset6_slider_pane_t5

0xc162,	// (0x000979b8) main_cset6_slider_pane_t7_ParamLimits

0xc162,	// (0x000979b8) main_cset6_slider_pane_t7

0x821f,	// (0x00093a75) main_cset6_slider_pane_t8_ParamLimits

0x821f,	// (0x00093a75) main_cset6_slider_pane_t8

0x8243,	// (0x00093a99) main_cset6_slider_pane_t9_ParamLimits

0x8243,	// (0x00093a99) main_cset6_slider_pane_t9

0x8267,	// (0x00093abd) main_cset6_slider_pane_t10_ParamLimits

0x8267,	// (0x00093abd) main_cset6_slider_pane_t10

0x828b,	// (0x00093ae1) main_cset6_slider_pane_t11_ParamLimits

0x828b,	// (0x00093ae1) main_cset6_slider_pane_t11

0xc198,	// (0x000979ee) main_cset6_slider_pane_t14_ParamLimits

0xc198,	// (0x000979ee) main_cset6_slider_pane_t14

0xc1d1,	// (0x00097a27) main_cset6_slider_pane_t15_ParamLimits

0xc1d1,	// (0x00097a27) main_cset6_slider_pane_t15

0x000b,

0xfb49,	// (0x0009b39f) main_cset6_slider_pane_t_ParamLimits

0xfb49,	// (0x0009b39f) main_cset6_slider_pane_t

0xc20a,	// (0x00097a60) cset_slider_pane_g1_copy1

0xc213,	// (0x00097a69) cset_slider_pane_g2_copy1

0xc21c,	// (0x00097a72) cset_slider_pane_g3_copy1

0x0d78,	// (0x0008c5ce) bg_popup_sub_pane_cp011_copy1

0xb9c6,	// (0x0009721c) main_cset_text_pane_g1_copy1

0xb9ce,	// (0x00097224) main_cset_text_pane_t1_copy1

0xb9dc,	// (0x00097232) main_cset_text_pane_t2_copy1

0xb9ea,	// (0x00097240) main_cset_text_pane_t3_copy1

0xb9f8,	// (0x0009724e) main_cset_text_pane_t4_copy1

0xba06,	// (0x0009725c) main_cset_text_pane_t5_copy1

0xba14,	// (0x0009726a) main_cset_text_pane_t6_copy1

0xba22,	// (0x00097278) main_cset_text_pane_t7_copy1

0x8048,	// (0x0009389e) main_cset_text2_pane_t1_copy1

0x0d78,	// (0x0008c5ce) main_ncimui_pane

0x48da,	// (0x00090130) popup_query_ncimui_window_ParamLimits

0x48da,	// (0x00090130) popup_query_ncimui_window

0xaf2b,	// (0x00096781) field_cale_ev2_pane_g4_ParamLimits

0xaf2b,	// (0x00096781) field_cale_ev2_pane_g4

0x6457,	// (0x00091cad) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6457,	// (0x00091cad) cell_video_dialer_keypad_pane_g2

0x0001,

0xf834,	// (0x0009b08a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf834,	// (0x0009b08a) cell_video_dialer_keypad_pane_g

0x646f,	// (0x00091cc5) cell_video_dialer_keypad_pane_t1

0x0d78,	// (0x0008c5ce) bg_popup_window_pane_cp012

0xea5d,	// (0x0009a2b3) heading_pane_cp06

0xc314,	// (0x00097b6a) ncim_query_content_pane

0x0d78,	// (0x0008c5ce) bg_popup_heading_pane_cp01

0xc31c,	// (0x00097b72) ncim_heading_pane_t1

0xc32a,	// (0x00097b80) ncim_indicator_popup_pane

0xc33c,	// (0x00097b92) ncim_query_button_pane

0xc352,	// (0x00097ba8) ncim_query_content_pane_t1

0xc364,	// (0x00097bba) ncim_query_content_pane_t2

0x0005,

0xfb88,	// (0x0009b3de) ncim_query_content_pane_t

0xc39e,	// (0x00097bf4) ncim_query_list_pane

0xc3b0,	// (0x00097c06) ncim_query_popup_pane

0xc32a,	// (0x00097b80) ncim_indicator_popup_pane_ParamLimits

0x8377,	// (0x00093bcd) ncim_query_content_pane_g1_ParamLimits

0x8377,	// (0x00093bcd) ncim_query_content_pane_g1

0xc352,	// (0x00097ba8) ncim_query_content_pane_t1_ParamLimits

0xc364,	// (0x00097bba) ncim_query_content_pane_t2_ParamLimits

0x8383,	// (0x00093bd9) ncim_query_content_pane_t3_ParamLimits

0x8383,	// (0x00093bd9) ncim_query_content_pane_t3

0x83ab,	// (0x00093c01) ncim_query_content_pane_t4_ParamLimits

0x83ab,	// (0x00093c01) ncim_query_content_pane_t4

0x83d3,	// (0x00093c29) ncim_query_content_pane_t5_ParamLimits

0x83d3,	// (0x00093c29) ncim_query_content_pane_t5

0xc376,	// (0x00097bcc) ncim_query_content_pane_t6_ParamLimits

0xc376,	// (0x00097bcc) ncim_query_content_pane_t6

0xfb88,	// (0x0009b3de) ncim_query_content_pane_t_ParamLimits

0xc39e,	// (0x00097bf4) ncim_query_list_pane_ParamLimits

0xc3b0,	// (0x00097c06) ncim_query_popup_pane_ParamLimits

0xc3c4,	// (0x00097c1a) wait_bar_pane_cp04

0x0d78,	// (0x0008c5ce) input_focus_pane_cp011

0xc3cc,	// (0x00097c22) ncim_query_popup_pane_t1

0xc3da,	// (0x00097c30) ncim_list_query_list_pane_ParamLimits

0xc3da,	// (0x00097c30) ncim_list_query_list_pane

0x0d78,	// (0x0008c5ce) bg_button_pane_cp027

0xc3ed,	// (0x00097c43) ncim_query_button_pane_g1

0x0d78,	// (0x0008c5ce) list_highlight_pane_cp012

0xc3f7,	// (0x00097c4d) ncim_list_query_list_pane_g1

0xc3ff,	// (0x00097c55) ncim_list_query_list_pane_t1

0xd993,	// (0x000991e9) cam4_indicators_pane_g3_ParamLimits

0xd993,	// (0x000991e9) cam4_indicators_pane_g3

0x6b4d,	// (0x000923a3) vid4_indicators_pane_g5_ParamLimits

0x6b4d,	// (0x000923a3) vid4_indicators_pane_g5

0xdaaa,	// (0x00099300) vid4_progress_pane_g5_ParamLimits

0xdaaa,	// (0x00099300) vid4_progress_pane_g5

0x82bf,	// (0x00093b15) main_ncimui_pane_g1

0x8305,	// (0x00093b5b) ncimui_group_query_pane_ParamLimits

0x8305,	// (0x00093b5b) ncimui_group_query_pane

0x8339,	// (0x00093b8f) ncimui_list_pane_ParamLimits

0x8339,	// (0x00093b8f) ncimui_list_pane

0x8353,	// (0x00093ba9) ncimui_text_pane_ParamLimits

0x8353,	// (0x00093ba9) ncimui_text_pane

0x83fb,	// (0x00093c51) ncimui_text_pane_t1_ParamLimits

0x83fb,	// (0x00093c51) ncimui_text_pane_t1

0xc40d,	// (0x00097c63) ncimui_list_single_graphic_pane_ParamLimits

0xc40d,	// (0x00097c63) ncimui_list_single_graphic_pane

0x8421,	// (0x00093c77) ncimui_query_pane_ParamLimits

0x8421,	// (0x00093c77) ncimui_query_pane

0x0d78,	// (0x0008c5ce) list_highlight_pane_cp013

0xc41d,	// (0x00097c73) ncim_list_query_list_pane_t1_copy1

0xc3f7,	// (0x00097c4d) ncim_list_single_graphic_pane_g1

0xc42b,	// (0x00097c81) ncim_query_button_pane_cp01

0xc433,	// (0x00097c89) ncim_query_entry_pane_ParamLimits

0xc433,	// (0x00097c89) ncim_query_entry_pane

0xc443,	// (0x00097c99) ncimui_query_pane_g1

0xc44b,	// (0x00097ca1) ncimui_query_pane_t1_ParamLimits

0xc44b,	// (0x00097ca1) ncimui_query_pane_t1

0x0d78,	// (0x0008c5ce) input_focus_pane_cp012

0xc3cc,	// (0x00097c22) ncim_query_entry_pane_t1

0xe25d,	// (0x00099ab3) main_im_pane_ParamLimits

0xf062,	// (0x0009a8b8) main_mobtv_pane_ParamLimits

0xf062,	// (0x0009a8b8) main_mobtv_pane

0x8157,	// (0x000939ad) main_cset6_slider_pane_g18_ParamLimits

0x8157,	// (0x000939ad) main_cset6_slider_pane_g18

0x8163,	// (0x000939b9) main_cset6_slider_pane_g19_ParamLimits

0x8163,	// (0x000939b9) main_cset6_slider_pane_g19

0xc461,	// (0x00097cb7) bg_main_mobtv_pane_ParamLimits

0xc461,	// (0x00097cb7) bg_main_mobtv_pane

0x8431,	// (0x00093c87) main_mobtv_info_pane

0x843c,	// (0x00093c92) main_mobtv_loading_pane_ParamLimits

0x843c,	// (0x00093c92) main_mobtv_loading_pane

0xc46f,	// (0x00097cc5) main_mobtv_pg_channel_list_pane

0xc479,	// (0x00097ccf) main_mobtv_pg_hdr_pane

0x8449,	// (0x00093c9f) main_mobtv_programe_curr_pane_ParamLimits

0x8449,	// (0x00093c9f) main_mobtv_programe_curr_pane

0x8456,	// (0x00093cac) main_mobtv_programe_next_pane_ParamLimits

0x8456,	// (0x00093cac) main_mobtv_programe_next_pane

0xc482,	// (0x00097cd8) popup_mobtv_noti_window

0xac5a,	// (0x000964b0) main_tv_pg_hdr_pane_g1

0xc48c,	// (0x00097ce2) main_tv_pg_hdr_pane_g2

0xc494,	// (0x00097cea) main_tv_pg_hdr_pane_g3

0xc49c,	// (0x00097cf2) main_tv_pg_hdr_pane_g4

0xc4a4,	// (0x00097cfa) main_tv_pg_hdr_pane_g5

0xc4ae,	// (0x00097d04) main_tv_pg_hdr_pane_g6

0xc4b8,	// (0x00097d0e) main_tv_pg_hdr_pane_g7

0xc4c2,	// (0x00097d18) main_tv_pg_hdr_pane_g8

0xc4cc,	// (0x00097d22) main_tv_pg_hdr_pane_g9

0xc4d6,	// (0x00097d2c) main_tv_pg_hdr_pane_g10

0xc4e0,	// (0x00097d36) main_tv_pg_hdr_pane_g11

0x000a,

0xfb95,	// (0x0009b3eb) main_tv_pg_hdr_pane_g

0xc4ea,	// (0x00097d40) main_tv_pg_hdr_pane_t1

0xc4f8,	// (0x00097d4e) main_tv_pg_hdr_pane_t2

0xc506,	// (0x00097d5c) main_tv_pg_hdr_pane_t3

0xc516,	// (0x00097d6c) main_tv_pg_hdr_pane_t4

0xc526,	// (0x00097d7c) main_tv_pg_hdr_pane_t5

0x0004,

0xfbac,	// (0x0009b402) main_tv_pg_hdr_pane_t

0xc536,	// (0x00097d8c) single_mobtv_pg_channel_pane_ParamLimits

0xc536,	// (0x00097d8c) single_mobtv_pg_channel_pane

0xc548,	// (0x00097d9e) single_mobtv_pg_channel_table_pane

0xc551,	// (0x00097da7) single_mobtv_pg_channel_thumb_pane

0xc55a,	// (0x00097db0) single_tv_pg_channel_pane_g1

0xc563,	// (0x00097db9) single_tv_pg_channel_pane_g2

0x0001,

0xfbb7,	// (0x0009b40d) single_tv_pg_channel_pane_g

0xae8a,	// (0x000966e0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xae8a,	// (0x000966e0) bg_single_mobtv_pg_channel_thumb_pane

0xc56c,	// (0x00097dc2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc56c,	// (0x00097dc2) single_mobtv_pg_channel_thumb_pane_g1

0xc57a,	// (0x00097dd0) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc57a,	// (0x00097dd0) single_mobtv_pg_channel_thumb_pane_g2

0xc586,	// (0x00097ddc) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc586,	// (0x00097ddc) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbbc,	// (0x0009b412) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbbc,	// (0x0009b412) single_mobtv_pg_channel_thumb_pane_g

0xc592,	// (0x00097de8) single_mobtv_pg_channel_thumb_pane_t1

0xc5a0,	// (0x00097df6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbc3,	// (0x0009b419) single_mobtv_pg_channel_thumb_pane_t

0xac5a,	// (0x000964b0) bg_single_mobtv_pg_channel_table_pane_g1

0xac5a,	// (0x000964b0) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf685,	// (0x0009aedb) bg_single_mobtv_pg_channel_table_pane_g

0xc5ae,	// (0x00097e04) single_mobtv_pg_channel_table_pane_t1

0xc5bc,	// (0x00097e12) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbc8,	// (0x0009b41e) single_mobtv_pg_channel_table_pane_t

0x846b,	// (0x00093cc1) main_mobtv_info_pane_g1_ParamLimits

0x846b,	// (0x00093cc1) main_mobtv_info_pane_g1

0x8489,	// (0x00093cdf) main_mobtv_info_pane_t1_ParamLimits

0x8489,	// (0x00093cdf) main_mobtv_info_pane_t1

0x8501,	// (0x00093d57) main_mobtv_info_pane_t2_ParamLimits

0x8501,	// (0x00093d57) main_mobtv_info_pane_t2

0x0002,

0xfbd2,	// (0x0009b428) main_mobtv_info_pane_t_ParamLimits

0xfbd2,	// (0x0009b428) main_mobtv_info_pane_t

0x8592,	// (0x00093de8) wait_bar_pane_cp05

0x85a4,	// (0x00093dfa) main_mobtv_loading_pane_g1_ParamLimits

0x85a4,	// (0x00093dfa) main_mobtv_loading_pane_g1

0x85b5,	// (0x00093e0b) main_mobtv_loading_pane_g2_ParamLimits

0x85b5,	// (0x00093e0b) main_mobtv_loading_pane_g2

0x85c1,	// (0x00093e17) main_mobtv_loading_pane_g3_ParamLimits

0x85c1,	// (0x00093e17) main_mobtv_loading_pane_g3

0x0002,

0xfbd9,	// (0x0009b42f) main_mobtv_loading_pane_g_ParamLimits

0xfbd9,	// (0x0009b42f) main_mobtv_loading_pane_g

0xc5ca,	// (0x00097e20) main_mobtv_loading_pane_t1_ParamLimits

0xc5ca,	// (0x00097e20) main_mobtv_loading_pane_t1

0xc5e2,	// (0x00097e38) main_mobtv_loading_pane_t2_ParamLimits

0xc5e2,	// (0x00097e38) main_mobtv_loading_pane_t2

0x0001,

0xfbe0,	// (0x0009b436) main_mobtv_loading_pane_t_ParamLimits

0xfbe0,	// (0x0009b436) main_mobtv_loading_pane_t

0x85d4,	// (0x00093e2a) wait_bar_pane_cp06_ParamLimits

0x85d4,	// (0x00093e2a) wait_bar_pane_cp06

0xc606,	// (0x00097e5c) main_mobtv_programe_curr_pane_t1

0xc614,	// (0x00097e6a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbe5,	// (0x0009b43b) main_mobtv_programe_curr_pane_t

0xc622,	// (0x00097e78) main_mobtv_programe_next_pane_t1

0xc630,	// (0x00097e86) main_mobtv_programe_next_pane_t2

0xc63e,	// (0x00097e94) main_mobtv_programe_next_pane_t3

0x0002,

0xfbea,	// (0x0009b440) main_mobtv_programe_next_pane_t

0x0d78,	// (0x0008c5ce) bg_popup_mobtv_noti_window_pane

0xc64c,	// (0x00097ea2) popup_mobtv_noti_window_g1

0xc654,	// (0x00097eaa) popup_mobtv_noti_window_t1

0xc662,	// (0x00097eb8) popup_mobtv_noti_window_t2

0x0001,

0xfbf1,	// (0x0009b447) popup_mobtv_noti_window_t

0xac5a,	// (0x000964b0) bg_popup_mobtv_noti_window_pane_g1

0x0d78,	// (0x0008c5ce) sc_clock_pane

0x0d78,	// (0x0008c5ce) main_fs_bigclock_pane

0x7d9c,	// (0x000935f2) blid2_tripm_pane_t4_ParamLimits

0x7d9c,	// (0x000935f2) blid2_tripm_pane_t4

0x85e3,	// (0x00093e39) sc_clock_pane_g1_ParamLimits

0x85e3,	// (0x00093e39) sc_clock_pane_g1

0x85f5,	// (0x00093e4b) sc_clock_pane_t1_ParamLimits

0x85f5,	// (0x00093e4b) sc_clock_pane_t1

0x8619,	// (0x00093e6f) sc_clock_pane_t2_ParamLimits

0x8619,	// (0x00093e6f) sc_clock_pane_t2

0x8631,	// (0x00093e87) sc_clock_pane_t3_ParamLimits

0x8631,	// (0x00093e87) sc_clock_pane_t3

0x0004,

0xfbf6,	// (0x0009b44c) sc_clock_pane_t_ParamLimits

0xfbf6,	// (0x0009b44c) sc_clock_pane_t

0x93e2,	// (0x00094c38) main_fs_bigclock_indicator_pane_ParamLimits

0x93e2,	// (0x00094c38) main_fs_bigclock_indicator_pane

0xae5a,	// (0x000966b0) main_fs_bigclock_pane_g1_ParamLimits

0xae5a,	// (0x000966b0) main_fs_bigclock_pane_g1

0x93ee,	// (0x00094c44) main_fs_bigclock_pane_t1_ParamLimits

0x93ee,	// (0x00094c44) main_fs_bigclock_pane_t1

0x9400,	// (0x00094c56) main_fs_bigclock_pane_t2_ParamLimits

0x9400,	// (0x00094c56) main_fs_bigclock_pane_t2

0x9414,	// (0x00094c6a) main_fs_bigclock_pane_t3_ParamLimits

0x9414,	// (0x00094c6a) main_fs_bigclock_pane_t3

0x0002,

0xfdf5,	// (0x0009b64b) main_fs_bigclock_pane_t_ParamLimits

0xfdf5,	// (0x0009b64b) main_fs_bigclock_pane_t

0xd2e3,	// (0x00098b39) main_fs_bigclock_indicator_pane_g1

0xc344,	// (0x00097b9a) ncim_query_content_pane_g2_ParamLimits

0xc344,	// (0x00097b9a) ncim_query_content_pane_g2

0x0001,

0xfb83,	// (0x0009b3d9) ncim_query_content_pane_g_ParamLimits

0xfb83,	// (0x0009b3d9) ncim_query_content_pane_g

0x8646,	// (0x00093e9c) sc_clock_pane_t4_ParamLimits

0x8646,	// (0x00093e9c) sc_clock_pane_t4

0xf062,	// (0x0009a8b8) main_radioblah_pane

0xb657,	// (0x00096ead) cell_call4_button_pane_t1_copy1_ParamLimits

0xb657,	// (0x00096ead) cell_call4_button_pane_t1_copy1

0x82c7,	// (0x00093b1d) main_ncimui_pane_t1_ParamLimits

0x82c7,	// (0x00093b1d) main_ncimui_pane_t1

0x82d9,	// (0x00093b2f) main_ncimui_pane_t2_ParamLimits

0x82d9,	// (0x00093b2f) main_ncimui_pane_t2

0x0002,

0xfb7c,	// (0x0009b3d2) main_ncimui_pane_t_ParamLimits

0xfb7c,	// (0x0009b3d2) main_ncimui_pane_t

0xc79a,	// (0x00097ff0) main_radioblah_anim_pane_ParamLimits

0xc79a,	// (0x00097ff0) main_radioblah_anim_pane

0xc7ab,	// (0x00098001) main_radioblah_info_pane_ParamLimits

0xc7ab,	// (0x00098001) main_radioblah_info_pane

0xc7bf,	// (0x00098015) main_radioblah_pane_t1_ParamLimits

0xc7bf,	// (0x00098015) main_radioblah_pane_t1

0xc7db,	// (0x00098031) main_radioblah_pane_t2_ParamLimits

0xc7db,	// (0x00098031) main_radioblah_pane_t2

0x0003,

0xfc17,	// (0x0009b46d) main_radioblah_pane_t_ParamLimits

0xfc17,	// (0x0009b46d) main_radioblah_pane_t

0x86f4,	// (0x00093f4a) main_radioblah_rocker_ctrl_pane_ParamLimits

0x86f4,	// (0x00093f4a) main_radioblah_rocker_ctrl_pane

0xc823,	// (0x00098079) main_radioblah_info_pane_t1_ParamLimits

0xc823,	// (0x00098079) main_radioblah_info_pane_t1

0x874c,	// (0x00093fa2) main_radioblah_info_pane_t2_ParamLimits

0x874c,	// (0x00093fa2) main_radioblah_info_pane_t2

0x0003,

0xfc20,	// (0x0009b476) main_radioblah_info_pane_t_ParamLimits

0xfc20,	// (0x0009b476) main_radioblah_info_pane_t

0xac5a,	// (0x000964b0) main_radioblah_rocker_ctrl_pane_g1

0x87fc,	// (0x00094052) main_radioblah_rocker_ctrl_pane_g2

0x8804,	// (0x0009405a) main_radioblah_rocker_ctrl_pane_g3

0x880c,	// (0x00094062) main_radioblah_rocker_ctrl_pane_g4

0x8814,	// (0x0009406a) main_radioblah_rocker_ctrl_pane_g5

0x881c,	// (0x00094072) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc29,	// (0x0009b47f) main_radioblah_rocker_ctrl_pane_g

0x8048,	// (0x0009389e) main_cset_text2_pane_t1_copy1_ParamLimits

0xd956,	// (0x000991ac) cam4_image_uncrop_qvga_pane

0xd9bd,	// (0x00099213) vid4_image_uncrop_qcif_pane

0xdb0c,	// (0x00099362) cam6_image_uncrop_qvga_pane_ParamLimits

0xdb0c,	// (0x00099362) cam6_image_uncrop_qvga_pane

0xbf5b,	// (0x000977b1) vid6_image_uncrop_qcif_pane_ParamLimits

0xbf5b,	// (0x000977b1) vid6_image_uncrop_qcif_pane

0x0d78,	// (0x0008c5ce) bg_popup_preview_window_pane_cp03

0xc2f6,	// (0x00097b4c) list_cset_text2_pane

0xc2fe,	// (0x00097b54) main_cset6_text2_pane_g1

0xc306,	// (0x00097b5c) main_cset6_text2_pane_t1

0xc85d,	// (0x000980b3) list_cset_text2_pane_t1_ParamLimits

0xc85d,	// (0x000980b3) list_cset_text2_pane_t1

0xf062,	// (0x0009a8b8) main_radioblah_pane_ParamLimits

0x857e,	// (0x00093dd4) main_mobtv_info_pane_t3_ParamLimits

0x857e,	// (0x00093dd4) main_mobtv_info_pane_t3

0x86e2,	// (0x00093f38) main_radioblah_pane_g1

0x871c,	// (0x00093f72) main_radioblah_info_pane_g1

0x87a1,	// (0x00093ff7) main_radioblah_info_pane_t3_ParamLimits

0x87a1,	// (0x00093ff7) main_radioblah_info_pane_t3

0x28ca,	// (0x0008e120) highlight_cell_cale_month_pane_ParamLimits

0x28ca,	// (0x0008e120) highlight_cell_cale_month_pane

0x0d78,	// (0x0008c5ce) main_phob_fisheye_pane

0xafe0,	// (0x00096836) scroll_pane_cp0031_ParamLimits

0xafe0,	// (0x00096836) scroll_pane_cp0031

0xc06d,	// (0x000978c3) wait_bar_pane_cp08_ParamLimits

0x80d1,	// (0x00093927) cset_list_set_pane_copy1_ParamLimits

0xc877,	// (0x000980cd) highlight_cell_cale_month_pane_g1

0x8824,	// (0x0009407a) highlight_cell_cale_month_pane_t1

0xbca2,	// (0x000974f8) list_gen_pane_cp01

0xb847,	// (0x0009709d) scroll_pane_01

0x8832,	// (0x00094088) list_single_double_fisheye_pane

0xc87f,	// (0x000980d5) list_double_fisheye_pane_g1_ParamLimits

0xc87f,	// (0x000980d5) list_double_fisheye_pane_g1

0xc88b,	// (0x000980e1) list_double_fisheye_pane_g2_ParamLimits

0xc88b,	// (0x000980e1) list_double_fisheye_pane_g2

0x883b,	// (0x00094091) list_double_fisheye_pane_g3_ParamLimits

0x883b,	// (0x00094091) list_double_fisheye_pane_g3

0x0004,

0xfc36,	// (0x0009b48c) list_double_fisheye_pane_g_ParamLimits

0xfc36,	// (0x0009b48c) list_double_fisheye_pane_g

0x8847,	// (0x0009409d) list_double_fisheye_pane_t1_ParamLimits

0x8847,	// (0x0009409d) list_double_fisheye_pane_t1

0x8862,	// (0x000940b8) list_double_fisheye_pane_t2_ParamLimits

0x8862,	// (0x000940b8) list_double_fisheye_pane_t2

0x0001,

0xfc41,	// (0x0009b497) list_double_fisheye_pane_t_ParamLimits

0xfc41,	// (0x0009b497) list_double_fisheye_pane_t

0x0d78,	// (0x0008c5ce) main_call5_pane

0x8671,	// (0x00093ec7) sc_swipe_pane_ParamLimits

0x8671,	// (0x00093ec7) sc_swipe_pane

0x8897,	// (0x000940ed) call5_image_pane_ParamLimits

0x8897,	// (0x000940ed) call5_image_pane

0x88b4,	// (0x0009410a) call5_swipe_1_pane_ParamLimits

0x88b4,	// (0x0009410a) call5_swipe_1_pane

0x88c7,	// (0x0009411d) call5_swipe_2_pane_ParamLimits

0x88c7,	// (0x0009411d) call5_swipe_2_pane

0x88f4,	// (0x0009414a) popup_call5_audio_first_window_ParamLimits

0x88f4,	// (0x0009414a) popup_call5_audio_first_window

0xae8a,	// (0x000966e0) call5_swipe_1_pane_g1_ParamLimits

0xae8a,	// (0x000966e0) call5_swipe_1_pane_g1

0xc8bc,	// (0x00098112) call5_swipe_1_pane_g2_ParamLimits

0xc8bc,	// (0x00098112) call5_swipe_1_pane_g2

0x0001,

0xfc46,	// (0x0009b49c) call5_swipe_1_pane_g_ParamLimits

0xfc46,	// (0x0009b49c) call5_swipe_1_pane_g

0xc8c8,	// (0x0009811e) call5_swipe_1_pane_t1_ParamLimits

0xc8c8,	// (0x0009811e) call5_swipe_1_pane_t1

0xae8a,	// (0x000966e0) call5_swipe_2_pane_g1_ParamLimits

0xae8a,	// (0x000966e0) call5_swipe_2_pane_g1

0xc8dd,	// (0x00098133) call5_swipe_2_pane_g2_ParamLimits

0xc8dd,	// (0x00098133) call5_swipe_2_pane_g2

0x0001,

0xfc4b,	// (0x0009b4a1) call5_swipe_2_pane_g_ParamLimits

0xfc4b,	// (0x0009b4a1) call5_swipe_2_pane_g

0xc8e9,	// (0x0009813f) call5_swipe_2_pane_t1_ParamLimits

0xc8e9,	// (0x0009813f) call5_swipe_2_pane_t1

0xc8fe,	// (0x00098154) sc_swipe_pane_g1_ParamLimits

0xc8fe,	// (0x00098154) sc_swipe_pane_g1

0xc90b,	// (0x00098161) sc_swipe_pane_g2_ParamLimits

0xc90b,	// (0x00098161) sc_swipe_pane_g2

0x0001,

0xfc50,	// (0x0009b4a6) sc_swipe_pane_g_ParamLimits

0xfc50,	// (0x0009b4a6) sc_swipe_pane_g

0xc917,	// (0x0009816d) sc_swipe_pane_t1_ParamLimits

0xc917,	// (0x0009816d) sc_swipe_pane_t1

0x0d78,	// (0x0008c5ce) main_cmail_launcher_pane

0x8909,	// (0x0009415f) aid_size_cell_cmail_l_ParamLimits

0x8909,	// (0x0009415f) aid_size_cell_cmail_l

0x8923,	// (0x00094179) grid_cmail_l_pane_ParamLimits

0x8923,	// (0x00094179) grid_cmail_l_pane

0x893f,	// (0x00094195) cell_cmail_l_pane_ParamLimits

0x893f,	// (0x00094195) cell_cmail_l_pane

0x8967,	// (0x000941bd) cell_cmail_l_pane_g1_ParamLimits

0x8967,	// (0x000941bd) cell_cmail_l_pane_g1

0x8973,	// (0x000941c9) cell_cmail_l_pane_t1_ParamLimits

0x8973,	// (0x000941c9) cell_cmail_l_pane_t1

0xc92c,	// (0x00098182) cell_cmail_l_pane_t2_ParamLimits

0xc92c,	// (0x00098182) cell_cmail_l_pane_t2

0x0001,

0xfc55,	// (0x0009b4ab) cell_cmail_l_pane_t_ParamLimits

0xfc55,	// (0x0009b4ab) cell_cmail_l_pane_t

0xf062,	// (0x0009a8b8) grid_highlight_pane_cp018_ParamLimits

0xf062,	// (0x0009a8b8) grid_highlight_pane_cp018

0x0ead,	// (0x0008c703) main2_pane_ParamLimits

0x0ead,	// (0x0008c703) main2_pane

0xe308,	// (0x00099b5e) popup_sp_fs_action_menu_bg_pane_g1

0xe310,	// (0x00099b66) popup_sp_fs_action_menu_bg_pane_g2

0xe318,	// (0x00099b6e) popup_sp_fs_action_menu_bg_pane_g3

0xe320,	// (0x00099b76) popup_sp_fs_action_menu_bg_pane_g4

0xe328,	// (0x00099b7e) popup_sp_fs_action_menu_bg_pane_g5

0xe330,	// (0x00099b86) popup_sp_fs_action_menu_bg_pane_g6

0xe338,	// (0x00099b8e) popup_sp_fs_action_menu_bg_pane_g7

0xe340,	// (0x00099b96) popup_sp_fs_action_menu_bg_pane_g8

0xe348,	// (0x00099b9e) popup_sp_fs_action_menu_bg_pane_g9

0xe350,	// (0x00099ba6) popup_sp_fs_action_menu_bg_pane_g10

0xe350,	// (0x00099ba6) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0009aa11) popup_sp_fs_action_menu_bg_pane_g

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t3_g3_g1

0x1c05,	// (0x0008d45b) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1c05,	// (0x0008d45b) list_medium_line_x2_t3_g3_g2

0x1c11,	// (0x0008d467) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1c11,	// (0x0008d467) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0009aac1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0009aac1) list_medium_line_x2_t3_g3_g

0x1c1d,	// (0x0008d473) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1c1d,	// (0x0008d473) list_medium_line_x2_t3_g3_t1

0x1c32,	// (0x0008d488) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1c32,	// (0x0008d488) list_medium_line_x2_t3_g3_t2

0x1c46,	// (0x0008d49c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1c46,	// (0x0008d49c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x0009aac8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x0009aac8) list_medium_line_x2_t3_g3_t

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t3_g2_g1

0x1c11,	// (0x0008d467) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1c11,	// (0x0008d467) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x0009aacf) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x0009aacf) list_medium_line_x2_t3_g2_g

0x1c5b,	// (0x0008d4b1) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1c5b,	// (0x0008d4b1) list_medium_line_x2_t3_g2_t1

0x1c71,	// (0x0008d4c7) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1c71,	// (0x0008d4c7) list_medium_line_x2_t3_g2_t2

0x1c83,	// (0x0008d4d9) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1c83,	// (0x0008d4d9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0009aad4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0009aad4) list_medium_line_x2_t3_g2_t

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t4_g4_g1

0x1ca1,	// (0x0008d4f7) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1ca1,	// (0x0008d4f7) list_medium_line_x2_t4_g4_g2

0x1c05,	// (0x0008d45b) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1c05,	// (0x0008d45b) list_medium_line_x2_t4_g4_g3

0x1cad,	// (0x0008d503) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1cad,	// (0x0008d503) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x0009aadb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x0009aadb) list_medium_line_x2_t4_g4_g

0x1cb9,	// (0x0008d50f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1cb9,	// (0x0008d50f) list_medium_line_x2_t4_g4_t1

0x1cd3,	// (0x0008d529) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1cd3,	// (0x0008d529) list_medium_line_x2_t4_g4_t2

0x1ce9,	// (0x0008d53f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1ce9,	// (0x0008d53f) list_medium_line_x2_t4_g4_t3

0x1cfe,	// (0x0008d554) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1cfe,	// (0x0008d554) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0009aae4) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0009aae4) list_medium_line_x2_t4_g4_t

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t2_g4_g1

0x1ca1,	// (0x0008d4f7) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1ca1,	// (0x0008d4f7) list_medium_line_x2_t2_g4_g2

0x1c05,	// (0x0008d45b) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1c05,	// (0x0008d45b) list_medium_line_x2_t2_g4_g3

0x1c11,	// (0x0008d467) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1c11,	// (0x0008d467) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x0009ab4b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x0009ab4b) list_medium_line_x2_t2_g4_g

0x28e8,	// (0x0008e13e) list_medium_line_x2_t2_g4_t1_ParamLimits

0x28e8,	// (0x0008e13e) list_medium_line_x2_t2_g4_t1

0x1c46,	// (0x0008d49c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1c46,	// (0x0008d49c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x0009ab54) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x0009ab54) list_medium_line_x2_t2_g4_t

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t2_g3_g1

0x1c05,	// (0x0008d45b) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1c05,	// (0x0008d45b) list_medium_line_x2_t2_g3_g2

0x1c11,	// (0x0008d467) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1c11,	// (0x0008d467) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0009aac1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0009aac1) list_medium_line_x2_t2_g3_g

0x28fd,	// (0x0008e153) list_medium_line_x2_t2_g3_t1_ParamLimits

0x28fd,	// (0x0008e153) list_medium_line_x2_t2_g3_t1

0x1c46,	// (0x0008d49c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1c46,	// (0x0008d49c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0009ab59) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0009ab59) list_medium_line_x2_t2_g3_t

0x2acd,	// (0x0008e323) main_sp_fs_list_pane_ParamLimits

0x2acd,	// (0x0008e323) main_sp_fs_list_pane

0x2ad9,	// (0x0008e32f) sp_fs_scroll_pane_ParamLimits

0x2ad9,	// (0x0008e32f) sp_fs_scroll_pane

0x2ae5,	// (0x0008e33b) list_medium_line_x2_t3_t1

0x2af5,	// (0x0008e34b) list_medium_line_x2_t3_t2

0x2b03,	// (0x0008e359) list_medium_line_x2_t3_t3

0x0002,

0xf323,	// (0x0009ab79) list_medium_line_x2_t3_t

0x2b11,	// (0x0008e367) list_medium_line_x3_t4_t1

0x2b21,	// (0x0008e377) list_medium_line_x3_t4_t2

0x2b2f,	// (0x0008e385) list_medium_line_x3_t4_t3

0x2b03,	// (0x0008e359) list_medium_line_x3_t4_t4

0x0003,

0xf32a,	// (0x0009ab80) list_medium_line_x3_t4_t

0x2b3d,	// (0x0008e393) list_medium_line_x4_t5_t1

0x2b4d,	// (0x0008e3a3) list_medium_line_x4_t5_t2

0x2b2f,	// (0x0008e385) list_medium_line_x4_t5_t3

0x2b5b,	// (0x0008e3b1) list_medium_line_x4_t5_t4

0x2b03,	// (0x0008e359) list_medium_line_x4_t5_t5

0x0004,

0xf333,	// (0x0009ab89) list_medium_line_x4_t5_t

0x1bf9,	// (0x0008d44f) list_medium_line_t4_g4_g1_ParamLimits

0x1bf9,	// (0x0008d44f) list_medium_line_t4_g4_g1

0x1cad,	// (0x0008d503) list_medium_line_t4_g4_g2_ParamLimits

0x1cad,	// (0x0008d503) list_medium_line_t4_g4_g2

0x2b69,	// (0x0008e3bf) list_medium_line_t4_g4_g3_ParamLimits

0x2b69,	// (0x0008e3bf) list_medium_line_t4_g4_g3

0x1c11,	// (0x0008d467) list_medium_line_t4_g4_g4_ParamLimits

0x1c11,	// (0x0008d467) list_medium_line_t4_g4_g4

0x0003,

0xf33e,	// (0x0009ab94) list_medium_line_t4_g4_g_ParamLimits

0xf33e,	// (0x0009ab94) list_medium_line_t4_g4_g

0x2b75,	// (0x0008e3cb) list_medium_line_t4_g4_t1_ParamLimits

0x2b75,	// (0x0008e3cb) list_medium_line_t4_g4_t1

0x2b8a,	// (0x0008e3e0) list_medium_line_t4_g4_t2_ParamLimits

0x2b8a,	// (0x0008e3e0) list_medium_line_t4_g4_t2

0x2ba0,	// (0x0008e3f6) list_medium_line_t4_g4_t3_ParamLimits

0x2ba0,	// (0x0008e3f6) list_medium_line_t4_g4_t3

0x1c46,	// (0x0008d49c) list_medium_line_t4_g4_t4_ParamLimits

0x1c46,	// (0x0008d49c) list_medium_line_t4_g4_t4

0x0003,

0xf347,	// (0x0009ab9d) list_medium_line_t4_g4_t_ParamLimits

0xf347,	// (0x0009ab9d) list_medium_line_t4_g4_t

0x2c7c,	// (0x0008e4d2) chi_dic_find_pane_g1

0x4660,	// (0x0008feb6) main_tport_pane

0xb957,	// (0x000971ad) list_medium_line_plain_t1

0xb96d,	// (0x000971c3) list_medium_line_t2_g2_g1_ParamLimits

0xb96d,	// (0x000971c3) list_medium_line_t2_g2_g1

0xb979,	// (0x000971cf) list_medium_line_t2_g2_g2_ParamLimits

0xb979,	// (0x000971cf) list_medium_line_t2_g2_g2

0x0001,

0xf998,	// (0x0009b1ee) list_medium_line_t2_g2_g_ParamLimits

0xf998,	// (0x0009b1ee) list_medium_line_t2_g2_g

0x75f8,	// (0x00092e4e) list_medium_line_t2_g2_t1_ParamLimits

0x75f8,	// (0x00092e4e) list_medium_line_t2_g2_t1

0x760f,	// (0x00092e65) list_medium_line_t2_g2_t2_ParamLimits

0x760f,	// (0x00092e65) list_medium_line_t2_g2_t2

0x0001,

0xf99d,	// (0x0009b1f3) list_medium_line_t2_g2_t_ParamLimits

0xf99d,	// (0x0009b1f3) list_medium_line_t2_g2_t

0xbcab,	// (0x00097501) aid_sp_fs_list_icon_a_sm

0xbcb3,	// (0x00097509) aid_sp_fs_list_icon_d

0xbcbb,	// (0x00097511) aid_sp_fs_text_primary

0xbcc4,	// (0x0009751a) aid_sp_fs_text_secondary

0xbccd,	// (0x00097523) list_medium_line

0xbccd,	// (0x00097523) list_medium_line_g2

0xbccd,	// (0x00097523) list_medium_line_g3

0xbccd,	// (0x00097523) list_medium_line_plain

0xbccd,	// (0x00097523) list_medium_line_plain_t2

0xbccd,	// (0x00097523) list_medium_line_plain_t3

0xbccd,	// (0x00097523) list_medium_line_right_icon

0xbccd,	// (0x00097523) list_medium_line_right_iconx2

0xbccd,	// (0x00097523) list_medium_line_t2

0xbccd,	// (0x00097523) list_medium_line_t2_g2

0xbccd,	// (0x00097523) list_medium_line_t2_g3

0xbccd,	// (0x00097523) list_medium_line_t2_right_icon

0xbccd,	// (0x00097523) list_medium_line_t2_right_iconx2

0xbccd,	// (0x00097523) list_medium_line_t3

0xbccd,	// (0x00097523) list_medium_line_t3_g2

0xbccd,	// (0x00097523) list_medium_line_t3_g3

0xbccd,	// (0x00097523) list_medium_line_t3_right_iconx2

0xbcd6,	// (0x0009752c) list_medium_line_t4_g4

0xbcdf,	// (0x00097535) list_medium_line_x2

0xbcdf,	// (0x00097535) list_medium_line_x2_t2_g2

0xbcdf,	// (0x00097535) list_medium_line_x2_t2_g3

0xbcdf,	// (0x00097535) list_medium_line_x2_t2_g4

0xbcdf,	// (0x00097535) list_medium_line_x2_t3

0xbcdf,	// (0x00097535) list_medium_line_x2_t3_g2

0xbcdf,	// (0x00097535) list_medium_line_x2_t3_g3

0xbcdf,	// (0x00097535) list_medium_line_x2_t3_g4

0xbcdf,	// (0x00097535) list_medium_line_x2_t4_g2

0xbcdf,	// (0x00097535) list_medium_line_x2_t4_g4

0xbce8,	// (0x0009753e) list_medium_line_x3

0xbce8,	// (0x0009753e) list_medium_line_x3_t4

0xbce8,	// (0x0009753e) list_medium_line_x3_t4_g4

0xbcd6,	// (0x0009752c) list_medium_line_x4_t4

0xbcd6,	// (0x0009752c) list_medium_line_x4_t4_g7

0xbcd6,	// (0x0009752c) list_medium_line_x4_t5

0xbcf1,	// (0x00097547) list_single_fs_dyc_pane_ParamLimits

0xbcf1,	// (0x00097547) list_single_fs_dyc_pane

0x1bf9,	// (0x0008d44f) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1bf9,	// (0x0008d44f) list_medium_line_x4_t4_g7_g1

0xc225,	// (0x00097a7b) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc225,	// (0x00097a7b) list_medium_line_x4_t4_g7_g2

0xc231,	// (0x00097a87) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc231,	// (0x00097a87) list_medium_line_x4_t4_g7_g3

0xc240,	// (0x00097a96) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc240,	// (0x00097a96) list_medium_line_x4_t4_g7_g4

0xc24c,	// (0x00097aa2) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc24c,	// (0x00097aa2) list_medium_line_x4_t4_g7_g5

0xc25b,	// (0x00097ab1) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc25b,	// (0x00097ab1) list_medium_line_x4_t4_g7_g6

0xc26a,	// (0x00097ac0) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc26a,	// (0x00097ac0) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb62,	// (0x0009b3b8) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb62,	// (0x0009b3b8) list_medium_line_x4_t4_g7_g

0xc276,	// (0x00097acc) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc276,	// (0x00097acc) list_medium_line_x4_t4_g7_t1

0xc28b,	// (0x00097ae1) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc28b,	// (0x00097ae1) list_medium_line_x4_t4_g7_t2

0xc2a0,	// (0x00097af6) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc2a0,	// (0x00097af6) list_medium_line_x4_t4_g7_t3

0xc2b5,	// (0x00097b0b) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc2b5,	// (0x00097b0b) list_medium_line_x4_t4_g7_t4

0xc2c7,	// (0x00097b1d) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc2c7,	// (0x00097b1d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb71,	// (0x0009b3c7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb71,	// (0x0009b3c7) list_medium_line_x4_t4_g7_t

0xc2d9,	// (0x00097b2f) list_single_dyc_row_pane_ParamLimits

0xc2d9,	// (0x00097b2f) list_single_dyc_row_pane

0x8884,	// (0x000940da) call5_gesture_pane_ParamLimits

0x8884,	// (0x000940da) call5_gesture_pane

0x88da,	// (0x00094130) call5_windows_pane_ParamLimits

0x88da,	// (0x00094130) call5_windows_pane

0x8989,	// (0x000941df) call5_swipe_1_pane_cp_ParamLimits

0x8989,	// (0x000941df) call5_swipe_1_pane_cp

0x8995,	// (0x000941eb) call5_swipe_2_pane_cp_ParamLimits

0x8995,	// (0x000941eb) call5_swipe_2_pane_cp

0xecb9,	// (0x0009a50f) call5_image_pane_cp

0x89a1,	// (0x000941f7) popup_call5_audio_first_window_cp_ParamLimits

0x89a1,	// (0x000941f7) popup_call5_audio_first_window_cp

0xc8fe,	// (0x00098154) call5_swipe_1_pane_g1_cp_ParamLimits

0xc8fe,	// (0x00098154) call5_swipe_1_pane_g1_cp

0xc93e,	// (0x00098194) call5_swipe_1_pane_g2_cp

0xc917,	// (0x0009816d) call5_swipe_1_pane_t1_cp_ParamLimits

0xc917,	// (0x0009816d) call5_swipe_1_pane_t1_cp

0xc8fe,	// (0x00098154) call5_swipe_2_pane_g1_cp_ParamLimits

0xc8fe,	// (0x00098154) call5_swipe_2_pane_g1_cp

0xc946,	// (0x0009819c) call5_swipe_2_pane_g2_cp

0xc94e,	// (0x000981a4) call5_swipe_2_pane_t1_cp_ParamLimits

0xc94e,	// (0x000981a4) call5_swipe_2_pane_t1_cp

0xf062,	// (0x0009a8b8) main_sp_fs_email_pane

0xc963,	// (0x000981b9) main_sp_fs_listscroll_pane_te

0xc96c,	// (0x000981c2) popup_sp_fs_action_menu_pane_ParamLimits

0xc96c,	// (0x000981c2) popup_sp_fs_action_menu_pane

0xac5a,	// (0x000964b0) bg_sp_fs_ctrlbar_pane_g1

0xc9b2,	// (0x00098208) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc9bb,	// (0x00098211) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc9c4,	// (0x0009821a) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xac5a,	// (0x000964b0) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc5a,	// (0x0009b4b0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xaa39,	// (0x0009628f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xaa39,	// (0x0009628f) bg_sp_fs_ctrlbar_ddmenu_pane

0xc9cd,	// (0x00098223) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc9cd,	// (0x00098223) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc9d9,	// (0x0009822f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc9d9,	// (0x0009822f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc63,	// (0x0009b4b9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc63,	// (0x0009b4b9) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc9e5,	// (0x0009823b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc9e5,	// (0x0009823b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc9ff,	// (0x00098255) list_medium_line_t2_right_icon_g1

0x89af,	// (0x00094205) list_medium_line_t2_right_icon_t1

0x89bf,	// (0x00094215) list_medium_line_t2_right_icon_t2

0x0001,

0xfc68,	// (0x0009b4be) list_medium_line_t2_right_icon_t

0xa725,	// (0x00095f7b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa725,	// (0x00095f7b) bg_sp_fs_ctrlbar_pane

0x8a15,	// (0x0009426b) main_sp_fs_ctrlbar_button_pane_cp01

0x8a1d,	// (0x00094273) main_sp_fs_ctrlbar_ddmenu_pane

0xca41,	// (0x00098297) main_sp_fs_ctrlbar_pane_g1

0xca4d,	// (0x000982a3) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc6d,	// (0x0009b4c3) main_sp_fs_ctrlbar_pane_g

0xca59,	// (0x000982af) main_sp_fs_ctrlbar_pane_t1

0x8a27,	// (0x0009427d) main_sp_fs_ctrlbar_pane

0x8a4b,	// (0x000942a1) main_sp_fs_listscroll_pane_te_cp01

0x8a6b,	// (0x000942c1) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8a6b,	// (0x000942c1) popup_sp_fs_action_menu_pane_cp01

0xf062,	// (0x0009a8b8) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf062,	// (0x0009a8b8) bg_sp_fs_highlight_list_pane_cp01

0xca6e,	// (0x000982c4) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xca6e,	// (0x000982c4) sp_fs_action_menu_list_gene_pane_g1

0xca7d,	// (0x000982d3) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xca7d,	// (0x000982d3) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc72,	// (0x0009b4c8) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc72,	// (0x0009b4c8) sp_fs_action_menu_list_gene_pane_g

0xca8a,	// (0x000982e0) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xca8a,	// (0x000982e0) sp_fs_action_menu_list_gene_pane_t1

0xcaa2,	// (0x000982f8) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcaa2,	// (0x000982f8) sp_fs_action_menu_list_gene_pane

0xcac5,	// (0x0009831b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcac5,	// (0x0009831b) popup_sp_fs_action_menu_bg_pane

0xcad3,	// (0x00098329) sp_fs_action_menu_list_pane_ParamLimits

0xcad3,	// (0x00098329) sp_fs_action_menu_list_pane

0xcaf7,	// (0x0009834d) sp_fs_scroll_pane_cp01_ParamLimits

0xcaf7,	// (0x0009834d) sp_fs_scroll_pane_cp01

0x8a87,	// (0x000942dd) list_medium_line_plain_t2_t1

0x8a97,	// (0x000942ed) list_medium_line_plain_t2_t2

0x0001,

0xfc77,	// (0x0009b4cd) list_medium_line_plain_t2_t

0x8aa5,	// (0x000942fb) list_medium_line_plain_t3_t1

0x8ab5,	// (0x0009430b) list_medium_line_plain_t3_t2

0x8ac3,	// (0x00094319) list_medium_line_plain_t3_t3

0x0002,

0xfc7c,	// (0x0009b4d2) list_medium_line_plain_t3_t

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t2_g2_g1

0x1c11,	// (0x0008d467) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1c11,	// (0x0008d467) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x0009aacf) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x0009aacf) list_medium_line_x2_t2_g2_g

0x2b75,	// (0x0008e3cb) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2b75,	// (0x0008e3cb) list_medium_line_x2_t2_g2_t1

0x1c46,	// (0x0008d49c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1c46,	// (0x0008d49c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc83,	// (0x0009b4d9) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc83,	// (0x0009b4d9) list_medium_line_x2_t2_g2_t

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t4_g2_g1

0xcb1d,	// (0x00098373) list_medium_line_x2_t4_g2_g2_ParamLimits

0xcb1d,	// (0x00098373) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc88,	// (0x0009b4de) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc88,	// (0x0009b4de) list_medium_line_x2_t4_g2_g

0x8ad1,	// (0x00094327) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8ad1,	// (0x00094327) list_medium_line_x2_t4_g2_t1

0x8aeb,	// (0x00094341) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8aeb,	// (0x00094341) list_medium_line_x2_t4_g2_t2

0x8b01,	// (0x00094357) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8b01,	// (0x00094357) list_medium_line_x2_t4_g2_t3

0x1c46,	// (0x0008d49c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1c46,	// (0x0008d49c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc8d,	// (0x0009b4e3) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc8d,	// (0x0009b4e3) list_medium_line_x2_t4_g2_t

0xcb2f,	// (0x00098385) list_medium_line_t3_right_iconx2_g1

0xc9ff,	// (0x00098255) list_medium_line_t3_right_iconx2_g2

0x8b16,	// (0x0009436c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc96,	// (0x0009b4ec) list_medium_line_t3_right_iconx2_g

0x8b20,	// (0x00094376) list_medium_line_t3_right_iconx2_t1

0x8b30,	// (0x00094386) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc9d,	// (0x0009b4f3) list_medium_line_t3_right_iconx2_t

0x1bf9,	// (0x0008d44f) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1bf9,	// (0x0008d44f) list_medium_line_x3_t4_g4_g1

0x1c05,	// (0x0008d45b) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1c05,	// (0x0008d45b) list_medium_line_x3_t4_g4_g2

0x1cad,	// (0x0008d503) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1cad,	// (0x0008d503) list_medium_line_x3_t4_g4_g3

0xcb37,	// (0x0009838d) list_medium_line_x3_t4_g4_g4_ParamLimits

0xcb37,	// (0x0009838d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfca2,	// (0x0009b4f8) list_medium_line_x3_t4_g4_g_ParamLimits

0xfca2,	// (0x0009b4f8) list_medium_line_x3_t4_g4_g

0x8b3e,	// (0x00094394) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8b3e,	// (0x00094394) list_medium_line_x3_t4_g4_t1

0x8b55,	// (0x000943ab) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8b55,	// (0x000943ab) list_medium_line_x3_t4_g4_t2

0xcb43,	// (0x00098399) list_medium_line_x3_t4_g4_t3_ParamLimits

0xcb43,	// (0x00098399) list_medium_line_x3_t4_g4_t3

0xcb58,	// (0x000983ae) list_medium_line_x3_t4_g4_t4_ParamLimits

0xcb58,	// (0x000983ae) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcab,	// (0x0009b501) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcab,	// (0x0009b501) list_medium_line_x3_t4_g4_t

0x8b6a,	// (0x000943c0) list_single_dyc_row_text_pane_t1_ParamLimits

0x8b6a,	// (0x000943c0) list_single_dyc_row_text_pane_t1

0x8bb1,	// (0x00094407) list_single_dyc_row_text_pane_t2_ParamLimits

0x8bb1,	// (0x00094407) list_single_dyc_row_text_pane_t2

0xcb75,	// (0x000983cb) list_single_dyc_row_text_pane_t3_ParamLimits

0xcb75,	// (0x000983cb) list_single_dyc_row_text_pane_t3

0x0002,

0xfcb4,	// (0x0009b50a) list_single_dyc_row_text_pane_t_ParamLimits

0xfcb4,	// (0x0009b50a) list_single_dyc_row_text_pane_t

0xcb87,	// (0x000983dd) list_single_dyc_row_pane_g1_ParamLimits

0xcb87,	// (0x000983dd) list_single_dyc_row_pane_g1

0xcb93,	// (0x000983e9) list_single_dyc_row_pane_g2_ParamLimits

0xcb93,	// (0x000983e9) list_single_dyc_row_pane_g2

0xcb9f,	// (0x000983f5) list_single_dyc_row_pane_g3_ParamLimits

0xcb9f,	// (0x000983f5) list_single_dyc_row_pane_g3

0xcbab,	// (0x00098401) list_single_dyc_row_pane_g4_ParamLimits

0xcbab,	// (0x00098401) list_single_dyc_row_pane_g4

0x0003,

0xfcbb,	// (0x0009b511) list_single_dyc_row_pane_g_ParamLimits

0xfcbb,	// (0x0009b511) list_single_dyc_row_pane_g

0xcbb7,	// (0x0009840d) list_single_dyc_row_text_pane_ParamLimits

0xcbb7,	// (0x0009840d) list_single_dyc_row_text_pane

0x0d78,	// (0x0008c5ce) bg_sp_fs_scroll_pane

0xcbd6,	// (0x0009842c) thumb_sp_fs_scroll_pane

0xb96d,	// (0x000971c3) list_medium_line_g1_ParamLimits

0xb96d,	// (0x000971c3) list_medium_line_g1

0xcbdf,	// (0x00098435) list_medium_line_t1_ParamLimits

0xcbdf,	// (0x00098435) list_medium_line_t1

0x1bf9,	// (0x0008d44f) list_medium_line_x2_g1_ParamLimits

0x1bf9,	// (0x0008d44f) list_medium_line_x2_g1

0x1c05,	// (0x0008d45b) list_medium_line_x2_g2_ParamLimits

0x1c05,	// (0x0008d45b) list_medium_line_x2_g2

0x0001,

0xfcc4,	// (0x0009b51a) list_medium_line_x2_g_ParamLimits

0xfcc4,	// (0x0009b51a) list_medium_line_x2_g

0xcbf4,	// (0x0009844a) list_medium_line_x2_t1_ParamLimits

0xcbf4,	// (0x0009844a) list_medium_line_x2_t1

0x1bf9,	// (0x0008d44f) list_medium_line_x3_g1_ParamLimits

0x1bf9,	// (0x0008d44f) list_medium_line_x3_g1

0x1c05,	// (0x0008d45b) list_medium_line_x3_g2_ParamLimits

0x1c05,	// (0x0008d45b) list_medium_line_x3_g2

0x0001,

0xfcc4,	// (0x0009b51a) list_medium_line_x3_g_ParamLimits

0xfcc4,	// (0x0009b51a) list_medium_line_x3_g

0xcbf4,	// (0x0009844a) list_medium_line_x3_t1_ParamLimits

0xcbf4,	// (0x0009844a) list_medium_line_x3_t1

0xcc0a,	// (0x00098460) thumb_sp_fs_scroll_pane_g1

0xcc13,	// (0x00098469) thumb_sp_fs_scroll_pane_g2

0xcc1c,	// (0x00098472) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcc9,	// (0x0009b51f) thumb_sp_fs_scroll_pane_g

0xcc0a,	// (0x00098460) bg_sp_fs_scroll_pane_g1

0xcc13,	// (0x00098469) bg_sp_fs_scroll_pane_g2

0xcc1c,	// (0x00098472) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcc9,	// (0x0009b51f) bg_sp_fs_scroll_pane_g

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1bf9,	// (0x0008d44f) list_medium_line_x2_t3_g4_g1

0x1ca1,	// (0x0008d4f7) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1ca1,	// (0x0008d4f7) list_medium_line_x2_t3_g4_g2

0x1c05,	// (0x0008d45b) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1c05,	// (0x0008d45b) list_medium_line_x2_t3_g4_g3

0x1c11,	// (0x0008d467) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1c11,	// (0x0008d467) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x0009ab4b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x0009ab4b) list_medium_line_x2_t3_g4_g

0x8c0b,	// (0x00094461) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8c0b,	// (0x00094461) list_medium_line_x2_t3_g4_t1

0x8c21,	// (0x00094477) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8c21,	// (0x00094477) list_medium_line_x2_t3_g4_t2

0x1c46,	// (0x0008d49c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1c46,	// (0x0008d49c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcd0,	// (0x0009b526) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcd0,	// (0x0009b526) list_medium_line_x2_t3_g4_t

0xb96d,	// (0x000971c3) list_medium_line_g2_g1_ParamLimits

0xb96d,	// (0x000971c3) list_medium_line_g2_g1

0xb979,	// (0x000971cf) list_medium_line_g2_g2_ParamLimits

0xb979,	// (0x000971cf) list_medium_line_g2_g2

0x0001,

0xf998,	// (0x0009b1ee) list_medium_line_g2_g_ParamLimits

0xf998,	// (0x0009b1ee) list_medium_line_g2_g

0xcc25,	// (0x0009847b) list_medium_line_g2_t1_ParamLimits

0xcc25,	// (0x0009847b) list_medium_line_g2_t1

0xb96d,	// (0x000971c3) list_medium_line_t3_g2_g1_ParamLimits

0xb96d,	// (0x000971c3) list_medium_line_t3_g2_g1

0xb979,	// (0x000971cf) list_medium_line_t3_g2_g2_ParamLimits

0xb979,	// (0x000971cf) list_medium_line_t3_g2_g2

0x0001,

0xf998,	// (0x0009b1ee) list_medium_line_t3_g2_g_ParamLimits

0xf998,	// (0x0009b1ee) list_medium_line_t3_g2_g

0x8c3a,	// (0x00094490) list_medium_line_t3_g2_t1_ParamLimits

0x8c3a,	// (0x00094490) list_medium_line_t3_g2_t1

0x8c51,	// (0x000944a7) list_medium_line_t3_g2_t2_ParamLimits

0x8c51,	// (0x000944a7) list_medium_line_t3_g2_t2

0x8c66,	// (0x000944bc) list_medium_line_t3_g2_t3_ParamLimits

0x8c66,	// (0x000944bc) list_medium_line_t3_g2_t3

0x0002,

0xfcd7,	// (0x0009b52d) list_medium_line_t3_g2_t_ParamLimits

0xfcd7,	// (0x0009b52d) list_medium_line_t3_g2_t

0xc9ff,	// (0x00098255) list_medium_line_right_icon_g1

0xcc3a,	// (0x00098490) list_medium_line_right_icon_t1

0xb96d,	// (0x000971c3) list_medium_line_t2_g1_ParamLimits

0xb96d,	// (0x000971c3) list_medium_line_t2_g1

0x8c7f,	// (0x000944d5) list_medium_line_t2_t1_ParamLimits

0x8c7f,	// (0x000944d5) list_medium_line_t2_t1

0x8c99,	// (0x000944ef) list_medium_line_t2_t2_ParamLimits

0x8c99,	// (0x000944ef) list_medium_line_t2_t2

0x0001,

0xfcde,	// (0x0009b534) list_medium_line_t2_t_ParamLimits

0xfcde,	// (0x0009b534) list_medium_line_t2_t

0xb96d,	// (0x000971c3) list_medium_line_t3_g1_ParamLimits

0xb96d,	// (0x000971c3) list_medium_line_t3_g1

0x8cae,	// (0x00094504) list_medium_line_t3_t1_ParamLimits

0x8cae,	// (0x00094504) list_medium_line_t3_t1

0x8cc5,	// (0x0009451b) list_medium_line_t3_t2_ParamLimits

0x8cc5,	// (0x0009451b) list_medium_line_t3_t2

0x8cda,	// (0x00094530) list_medium_line_t3_t3_ParamLimits

0x8cda,	// (0x00094530) list_medium_line_t3_t3

0x0002,

0xfce3,	// (0x0009b539) list_medium_line_t3_t_ParamLimits

0xfce3,	// (0x0009b539) list_medium_line_t3_t

0xb96d,	// (0x000971c3) list_medium_line_g3_g1_ParamLimits

0xb96d,	// (0x000971c3) list_medium_line_g3_g1

0xcc48,	// (0x0009849e) list_medium_line_g3_g2_ParamLimits

0xcc48,	// (0x0009849e) list_medium_line_g3_g2

0xb979,	// (0x000971cf) list_medium_line_g3_g3_ParamLimits

0xb979,	// (0x000971cf) list_medium_line_g3_g3

0x0002,

0xfcea,	// (0x0009b540) list_medium_line_g3_g_ParamLimits

0xfcea,	// (0x0009b540) list_medium_line_g3_g

0xcc54,	// (0x000984aa) list_medium_line_g3_t1_ParamLimits

0xcc54,	// (0x000984aa) list_medium_line_g3_t1

0xb96d,	// (0x000971c3) list_medium_line_t2_g3_g1_ParamLimits

0xb96d,	// (0x000971c3) list_medium_line_t2_g3_g1

0xcc48,	// (0x0009849e) list_medium_line_t2_g3_g2_ParamLimits

0xcc48,	// (0x0009849e) list_medium_line_t2_g3_g2

0xb979,	// (0x000971cf) list_medium_line_t2_g3_g3_ParamLimits

0xb979,	// (0x000971cf) list_medium_line_t2_g3_g3

0x0002,

0xfcea,	// (0x0009b540) list_medium_line_t2_g3_g_ParamLimits

0xfcea,	// (0x0009b540) list_medium_line_t2_g3_g

0x8cec,	// (0x00094542) list_medium_line_t2_g3_t1_ParamLimits

0x8cec,	// (0x00094542) list_medium_line_t2_g3_t1

0x8d03,	// (0x00094559) list_medium_line_t2_g3_t2_ParamLimits

0x8d03,	// (0x00094559) list_medium_line_t2_g3_t2

0x0001,

0xfcf1,	// (0x0009b547) list_medium_line_t2_g3_t_ParamLimits

0xfcf1,	// (0x0009b547) list_medium_line_t2_g3_t

0xb96d,	// (0x000971c3) list_medium_line_t3_g3_g1_ParamLimits

0xb96d,	// (0x000971c3) list_medium_line_t3_g3_g1

0xcc48,	// (0x0009849e) list_medium_line_t3_g3_g2_ParamLimits

0xcc48,	// (0x0009849e) list_medium_line_t3_g3_g2

0xb979,	// (0x000971cf) list_medium_line_t3_g3_g3_ParamLimits

0xb979,	// (0x000971cf) list_medium_line_t3_g3_g3

0x0002,

0xfcea,	// (0x0009b540) list_medium_line_t3_g3_g_ParamLimits

0xfcea,	// (0x0009b540) list_medium_line_t3_g3_g

0x8d18,	// (0x0009456e) list_medium_line_t3_g3_t1_ParamLimits

0x8d18,	// (0x0009456e) list_medium_line_t3_g3_t1

0x8d31,	// (0x00094587) list_medium_line_t3_g3_t2_ParamLimits

0x8d31,	// (0x00094587) list_medium_line_t3_g3_t2

0x8d47,	// (0x0009459d) list_medium_line_t3_g3_t3_ParamLimits

0x8d47,	// (0x0009459d) list_medium_line_t3_g3_t3

0x0002,

0xfcf6,	// (0x0009b54c) list_medium_line_t3_g3_t_ParamLimits

0xfcf6,	// (0x0009b54c) list_medium_line_t3_g3_t

0xcb2f,	// (0x00098385) list_medium_line_right_iconx2_g1

0xc9ff,	// (0x00098255) list_medium_line_right_iconx2_g2

0x0001,

0xfcfd,	// (0x0009b553) list_medium_line_right_iconx2_g

0xcc69,	// (0x000984bf) list_medium_line_right_iconx2_t1

0xcb2f,	// (0x00098385) list_medium_line_t2_right_iconx2_g1

0xc9ff,	// (0x00098255) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcfd,	// (0x0009b553) list_medium_line_t2_right_iconx2_g

0x8d61,	// (0x000945b7) list_medium_line_t2_right_iconx2_t1

0x8d71,	// (0x000945c7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd02,	// (0x0009b558) list_medium_line_t2_right_iconx2_t

0xcc77,	// (0x000984cd) list_medium_line_x4_t4_t1

0x8d7f,	// (0x000945d5) list_medium_line_x4_t4_t2

0x8d8f,	// (0x000945e5) list_medium_line_x4_t4_t3

0x8d9f,	// (0x000945f5) list_medium_line_x4_t4_t4

0x0003,

0xfd07,	// (0x0009b55d) list_medium_line_x4_t4_t

0x8de9,	// (0x0009463f) tport_appsw_pane_ParamLimits

0x8de9,	// (0x0009463f) tport_appsw_pane

0x8dfc,	// (0x00094652) tport_contact_pane_ParamLimits

0x8dfc,	// (0x00094652) tport_contact_pane

0x8e0f,	// (0x00094665) tport_listscroll_pane_ParamLimits

0x8e0f,	// (0x00094665) tport_listscroll_pane

0x8e25,	// (0x0009467b) cell_tport_appsw_pane_ParamLimits

0x8e25,	// (0x0009467b) cell_tport_appsw_pane

0xb6ec,	// (0x00096f42) tport_appsw_pane_g1_ParamLimits

0xb6ec,	// (0x00096f42) tport_appsw_pane_g1

0xcc85,	// (0x000984db) tport_contact_pane_g1

0xcc8e,	// (0x000984e4) tport_contact_pane_t1

0xcc9c,	// (0x000984f2) tport_contact_pane_t2

0x0001,

0xfd10,	// (0x0009b566) tport_contact_pane_t

0xccaa,	// (0x00098500) list_tport_pane

0xccb3,	// (0x00098509) scroll_pane_cp_030

0x8e6b,	// (0x000946c1) cell_tport_appsw_pane_g1

0xcccc,	// (0x00098522) cell_tport_appsw_pane_t1

0x0d78,	// (0x0008c5ce) grid_highlight_pane_cp019

0x8e7b,	// (0x000946d1) list_tport_double_graphic_pane_ParamLimits

0x8e7b,	// (0x000946d1) list_tport_double_graphic_pane

0xf062,	// (0x0009a8b8) list_highlight_pane_cp023_ParamLimits

0xf062,	// (0x0009a8b8) list_highlight_pane_cp023

0x8e8b,	// (0x000946e1) list_tport_double_graphic_pane_g1_ParamLimits

0x8e8b,	// (0x000946e1) list_tport_double_graphic_pane_g1

0x8e98,	// (0x000946ee) list_tport_double_graphic_pane_t1_ParamLimits

0x8e98,	// (0x000946ee) list_tport_double_graphic_pane_t1

0x8ead,	// (0x00094703) list_tport_double_graphic_pane_t2_ParamLimits

0x8ead,	// (0x00094703) list_tport_double_graphic_pane_t2

0x0001,

0xfd1c,	// (0x0009b572) list_tport_double_graphic_pane_t_ParamLimits

0xfd1c,	// (0x0009b572) list_tport_double_graphic_pane_t

0x0d78,	// (0x0008c5ce) main_cale_note_pane

0x6d70,	// (0x000925c6) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6d70,	// (0x000925c6) cell_vitu2_function_top_wide_pane_cp01

0x8592,	// (0x00093de8) wait_bar_pane_cp05_ParamLimits

0x0d78,	// (0x0008c5ce) listscroll_cmail_pane

0xcce2,	// (0x00098538) list_cmail_pane

0x8ec9,	// (0x0009471f) list_cmail_body_pane

0x8ee1,	// (0x00094737) list_single_cmail_header_caption_pane

0x8f01,	// (0x00094757) list_single_cmail_header_detail_pane_ParamLimits

0x8f01,	// (0x00094757) list_single_cmail_header_detail_pane

0x8f33,	// (0x00094789) list_single_cmail_header_caption_pane_t1

0x8f43,	// (0x00094799) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8f43,	// (0x00094799) list_single_cmail_header_detail_pane_g1

0xcd02,	// (0x00098558) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcd02,	// (0x00098558) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd21,	// (0x0009b577) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd21,	// (0x0009b577) list_single_cmail_header_detail_pane_g

0xcd1b,	// (0x00098571) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcd1b,	// (0x00098571) list_single_cmail_header_detail_pane_t1

0xcd59,	// (0x000985af) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcd59,	// (0x000985af) list_single_cmail_header_editor_pane_bg

0xc563,	// (0x00097db9) list_cmail_body_pane_g1

0xcd6b,	// (0x000985c1) list_cmail_body_pane_t1

0xb729,	// (0x00096f7f) list_single_cmail_header_editor_pane_bg_g1

0xe66f,	// (0x00099ec5) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb739,	// (0x00096f8f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb731,	// (0x00096f87) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb965,	// (0x000971bb) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb759,	// (0x00096faf) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb749,	// (0x00096f9f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb751,	// (0x00096fa7) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe64f,	// (0x00099ea5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8f81,	// (0x000947d7) calenote_gesture_pane_ParamLimits

0x8f81,	// (0x000947d7) calenote_gesture_pane

0x8fa1,	// (0x000947f7) calenote_window_pane_ParamLimits

0x8fa1,	// (0x000947f7) calenote_window_pane

0xcd79,	// (0x000985cf) popup_note_window_cp01

0x8fbd,	// (0x00094813) calenote_swipe_1_pane_ParamLimits

0x8fbd,	// (0x00094813) calenote_swipe_1_pane

0x8995,	// (0x000941eb) calenote_swipe_2_pane_ParamLimits

0x8995,	// (0x000941eb) calenote_swipe_2_pane

0xc8fe,	// (0x00098154) calenote_swipe_1_pane_g1_ParamLimits

0xc8fe,	// (0x00098154) calenote_swipe_1_pane_g1

0xc90b,	// (0x00098161) calenote_swipe_1_pane_g2_ParamLimits

0xc90b,	// (0x00098161) calenote_swipe_1_pane_g2

0x0001,

0xfc50,	// (0x0009b4a6) calenote_swipe_1_pane_g_ParamLimits

0xfc50,	// (0x0009b4a6) calenote_swipe_1_pane_g

0xcd8b,	// (0x000985e1) calenote_swipe_1_pane_t1_ParamLimits

0xcd8b,	// (0x000985e1) calenote_swipe_1_pane_t1

0xc8fe,	// (0x00098154) calenote_swipe_2_pane_g1_ParamLimits

0xc8fe,	// (0x00098154) calenote_swipe_2_pane_g1

0xcdaa,	// (0x00098600) calenote_swipe_2_pane_g2_ParamLimits

0xcdaa,	// (0x00098600) calenote_swipe_2_pane_g2

0x0001,

0xfd2d,	// (0x0009b583) calenote_swipe_2_pane_g_ParamLimits

0xfd2d,	// (0x0009b583) calenote_swipe_2_pane_g

0xcdb6,	// (0x0009860c) calenote_swipe_2_pane_t1_ParamLimits

0xcdb6,	// (0x0009860c) calenote_swipe_2_pane_t1

0x0d78,	// (0x0008c5ce) main_mup_navstr_pane

0x5a0a,	// (0x00091260) main_mup3_pane_t7_ParamLimits

0x5a0a,	// (0x00091260) main_mup3_pane_t7

0xd78e,	// (0x00098fe4) main_mp4_pane_g6_ParamLimits

0xd78e,	// (0x00098fe4) main_mp4_pane_g6

0xd924,	// (0x0009917a) main_image3_pane_t4_ParamLimits

0xd924,	// (0x0009917a) main_image3_pane_t4

0x8fd2,	// (0x00094828) popup_navstr_preview_pane_ParamLimits

0x8fd2,	// (0x00094828) popup_navstr_preview_pane

0x8fe2,	// (0x00094838) scroll_navstr_pane_ParamLimits

0x8fe2,	// (0x00094838) scroll_navstr_pane

0x0d78,	// (0x0008c5ce) bg_popup_preview_window_pane_cp04

0xcddd,	// (0x00098633) popup_navstr_preview_pane_t1

0x8ff6,	// (0x0009484c) scroll_navstr_pane_g1_ParamLimits

0x8ff6,	// (0x0009484c) scroll_navstr_pane_g1

0x900a,	// (0x00094860) scroll_navstr_pane_t1_ParamLimits

0x900a,	// (0x00094860) scroll_navstr_pane_t1

0xcd82,	// (0x000985d8) bg_button_pane_cp014

0xcd82,	// (0x000985d8) bg_button_pane_cp030

0xc89f,	// (0x000980f5) list_double_fisheye_pane_g4_ParamLimits

0xc89f,	// (0x000980f5) list_double_fisheye_pane_g4

0xc8ab,	// (0x00098101) list_double_fisheye_pane_g5_ParamLimits

0xc8ab,	// (0x00098101) list_double_fisheye_pane_g5

0xccea,	// (0x00098540) sp_fs_scroll_pane_cp03

0xca41,	// (0x00098297) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xca4d,	// (0x000982a3) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc6d,	// (0x0009b4c3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xca59,	// (0x000982af) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8ebf,	// (0x00094715) sp_fs_scroll_pane_cp02

0xe373,	// (0x00099bc9) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe373,	// (0x00099bc9) popup_sp_fs_calendar_preview_list_single_pane

0x0d78,	// (0x0008c5ce) main_cam6_pano_pane

0xf062,	// (0x0009a8b8) main_mup3_pane_ParamLimits

0x0d78,	// (0x0008c5ce) main_phacti_pane

0x8463,	// (0x00093cb9) bg_button_pane_cp11

0x847d,	// (0x00093cd3) main_mobtv_info_pane_g2_ParamLimits

0x847d,	// (0x00093cd3) main_mobtv_info_pane_g2

0x0001,

0xfbcd,	// (0x0009b423) main_mobtv_info_pane_g_ParamLimits

0xfbcd,	// (0x0009b423) main_mobtv_info_pane_g

0x8658,	// (0x00093eae) sc_clock_pane_t5_ParamLimits

0x8658,	// (0x00093eae) sc_clock_pane_t5

0x86e2,	// (0x00093f38) main_radioblah_pane_g1_ParamLimits

0xc7f3,	// (0x00098049) main_radioblah_pane_t3_ParamLimits

0xc7f3,	// (0x00098049) main_radioblah_pane_t3

0xc80b,	// (0x00098061) main_radioblah_pane_t4_ParamLimits

0xc80b,	// (0x00098061) main_radioblah_pane_t4

0x870a,	// (0x00093f60) main_radioblah_text_pane_ParamLimits

0x870a,	// (0x00093f60) main_radioblah_text_pane

0x871c,	// (0x00093f72) main_radioblah_info_pane_g1_ParamLimits

0x87b5,	// (0x0009400b) main_radioblah_info_pane_t4_ParamLimits

0x87b5,	// (0x0009400b) main_radioblah_info_pane_t4

0xf062,	// (0x0009a8b8) main_sp_fs_calendar_pane

0x9021,	// (0x00094877) main_phacti_pane_g1

0x9029,	// (0x0009487f) phacti_note_pane_ParamLimits

0x9029,	// (0x0009487f) phacti_note_pane

0xcdf4,	// (0x0009864a) phacti_term_pane_ParamLimits

0xcdf4,	// (0x0009864a) phacti_term_pane

0xce09,	// (0x0009865f) phacti_note_pane_t1_ParamLimits

0xce09,	// (0x0009865f) phacti_note_pane_t1

0xce20,	// (0x00098676) phacti_term_pane_g1

0xce28,	// (0x0009867e) phacti_term_pane_t1_ParamLimits

0xce28,	// (0x0009867e) phacti_term_pane_t1

0xce52,	// (0x000986a8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xce5a,	// (0x000986b0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd37,	// (0x0009b58d) popup_sp_fs_calendar_preview_list_single_pane_g

0xce62,	// (0x000986b8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xce62,	// (0x000986b8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xce78,	// (0x000986ce) aid_popup_sp_fs_bg_corner_pane

0xac5a,	// (0x000964b0) popup_sp_fs_calendar_preview_bg_pane_g1

0x0d78,	// (0x0008c5ce) popup_sp_fs_calendar_preview_bg_pane

0xce80,	// (0x000986d6) popup_sp_fs_calendar_preview_list_pane

0xf062,	// (0x0009a8b8) bg_main_sp_fs_cale_pane_ParamLimits

0xf062,	// (0x0009a8b8) bg_main_sp_fs_cale_pane

0xce91,	// (0x000986e7) listscroll_cale_mrui_pane_ParamLimits

0xce91,	// (0x000986e7) listscroll_cale_mrui_pane

0xcea5,	// (0x000986fb) listscroll_sp_fs_schedule_track_pane

0xceae,	// (0x00098704) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xceae,	// (0x00098704) main_sp_fs_ctrlbar_pane_cp01

0xcebf,	// (0x00098715) main_sp_fs_ribbon_pane

0xcec7,	// (0x0009871d) popup_sp_fs_cale_preview_window

0x9080,	// (0x000948d6) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9080,	// (0x000948d6) list_single_sp_fs_schedule_track_pane

0xf062,	// (0x0009a8b8) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xf062,	// (0x0009a8b8) bg_sp_fs_highlight_list_pane_cp03

0x9094,	// (0x000948ea) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9094,	// (0x000948ea) list_single_sp_fs_schedule_track_pane_g1

0x90a0,	// (0x000948f6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x90a0,	// (0x000948f6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd3c,	// (0x0009b592) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd3c,	// (0x0009b592) list_single_sp_fs_schedule_track_pane_g

0x90ac,	// (0x00094902) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x90ac,	// (0x00094902) list_single_sp_fs_schedule_track_pane_t1

0x90ce,	// (0x00094924) sp_fs_schedule_track_pane_ParamLimits

0x90ce,	// (0x00094924) sp_fs_schedule_track_pane

0xced9,	// (0x0009872f) sp_fs_schedule_track_pane_g1

0xcee1,	// (0x00098737) sp_fs_schedule_track_pane_g2

0xcee9,	// (0x0009873f) sp_fs_schedule_track_pane_g3

0xcef1,	// (0x00098747) sp_fs_schedule_track_pane_g4

0xcef9,	// (0x0009874f) sp_fs_schedule_track_pane_g5

0x0004,

0xfd41,	// (0x0009b597) sp_fs_schedule_track_pane_g

0xb729,	// (0x00096f7f) bg_sp_fs_schedule_viewer_highlight_g1

0xe66f,	// (0x00099ec5) bg_sp_fs_schedule_viewer_highlight_g2

0xb731,	// (0x00096f87) bg_sp_fs_schedule_viewer_highlight_g3

0xb739,	// (0x00096f8f) bg_sp_fs_schedule_viewer_highlight_g4

0xb965,	// (0x000971bb) bg_sp_fs_schedule_viewer_highlight_g5

0xb749,	// (0x00096f9f) bg_sp_fs_schedule_viewer_highlight_g6

0xb751,	// (0x00096fa7) bg_sp_fs_schedule_viewer_highlight_g7

0xb759,	// (0x00096faf) bg_sp_fs_schedule_viewer_highlight_g8

0xe64f,	// (0x00099ea5) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd4c,	// (0x0009b5a2) bg_sp_fs_schedule_viewer_highlight_g

0x0d78,	// (0x0008c5ce) bg_main_sp_fs_ribbon_pane

0x90e3,	// (0x00094939) main_sp_fs_ribbon_pane_g1

0xcf01,	// (0x00098757) main_sp_fs_ribbon_pane_t1

0x90ec,	// (0x00094942) main_sp_fs_ribbon_pane_t2

0xcf10,	// (0x00098766) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd5f,	// (0x0009b5b5) main_sp_fs_ribbon_pane_t

0xcf1f,	// (0x00098775) main_sp_fs_ribbon_scheduler_pane

0xcf27,	// (0x0009877d) bg_main_sp_fs_ribbon_pane_g1

0xcf30,	// (0x00098786) bg_main_sp_fs_ribbon_pane_g2

0xcf39,	// (0x0009878f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd66,	// (0x0009b5bc) bg_main_sp_fs_ribbon_pane_g

0xcf41,	// (0x00098797) main_sp_fs_ribbon_scheduler_pane_g1

0xcf4a,	// (0x000987a0) main_sp_fs_ribbon_scheduler_pane_g2

0xcf53,	// (0x000987a9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd6d,	// (0x0009b5c3) main_sp_fs_ribbon_scheduler_pane_g

0xcf5c,	// (0x000987b2) list_cale_mrui_pane

0x90fb,	// (0x00094951) sp_fs_scroll_pane_cp07_ParamLimits

0x90fb,	// (0x00094951) sp_fs_scroll_pane_cp07

0x9111,	// (0x00094967) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9111,	// (0x00094967) bg_sp_fs_schedule_viewer_highlight

0xcf65,	// (0x000987bb) list_single_sp_fs_schedule_track_pane_cp01

0xcf6d,	// (0x000987c3) list_sp_fs_schedule_track_pane

0xcf75,	// (0x000987cb) sp_fs_scroll_pane_cp06_ParamLimits

0xcf75,	// (0x000987cb) sp_fs_scroll_pane_cp06

0xac5a,	// (0x000964b0) bgmain_sp_fs_calendar_pane_g1

0x9123,	// (0x00094979) list_single_cale_mrui_pane_ParamLimits

0x9123,	// (0x00094979) list_single_cale_mrui_pane

0xcf87,	// (0x000987dd) list_single_cale_mrui_row_pane_ParamLimits

0xcf87,	// (0x000987dd) list_single_cale_mrui_row_pane

0xcf94,	// (0x000987ea) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcf94,	// (0x000987ea) list_single_cale_mrui_row_pane_g1

0xcfcc,	// (0x00098822) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcfcc,	// (0x00098822) list_single_cale_mrui_row_pane_t1

0x914a,	// (0x000949a0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x914a,	// (0x000949a0) list_single_cale_mrui_row_pane_t2

0xcfde,	// (0x00098834) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcfde,	// (0x00098834) list_single_cale_mrui_row_pane_t3

0xd00d,	// (0x00098863) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd00d,	// (0x00098863) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd79,	// (0x0009b5cf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd79,	// (0x0009b5cf) list_single_cale_mrui_row_pane_t

0x91b0,	// (0x00094a06) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x91b0,	// (0x00094a06) list_single_cmail_header_editor_pane_bg_cp01

0x91d4,	// (0x00094a2a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x91d4,	// (0x00094a2a) list_single_cmail_header_editor_pane_bg_cp02

0x91f0,	// (0x00094a46) main_radioblah_text_pane_t1_ParamLimits

0x91f0,	// (0x00094a46) main_radioblah_text_pane_t1

0xd03c,	// (0x00098892) cam6_indi_pane_cp01

0xd044,	// (0x0009889a) cam6_mode_pane_cp01

0xd04c,	// (0x000988a2) cam6_pano_pane

0xd055,	// (0x000988ab) cam6_zoom_pane_cp01

0xd05f,	// (0x000988b5) cam6_pano_image_pane

0xd068,	// (0x000988be) cam6_pano_pane_g1

0xc563,	// (0x00097db9) cam6_pano_pane_g2

0xd071,	// (0x000988c7) cam6_pano_pane_g3

0xd07a,	// (0x000988d0) cam6_pano_pane_g4

0xb252,	// (0x00096aa8) cam6_pano_pane_g5

0xd083,	// (0x000988d9) cam6_pano_pane_g6

0xd08b,	// (0x000988e1) cam6_pano_pane_g7

0xd093,	// (0x000988e9) cam6_pano_pane_g8

0xd09c,	// (0x000988f2) cam6_pano_pane_g9

0x0008,

0xfd82,	// (0x0009b5d8) cam6_pano_pane_g

0x0d78,	// (0x0008c5ce) main_browser_tag_pane

0xcdd5,	// (0x0009862b) grid_navstr_albumart_pane

0xd0a7,	// (0x000988fd) cell_navstr_albumart_pane_ParamLimits

0xd0a7,	// (0x000988fd) cell_navstr_albumart_pane

0xd0c3,	// (0x00098919) cell_navstr_albumart_pane_g1

0xa53e,	// (0x00095d94) cell_navstr_albumart_pane_g2

0xa54e,	// (0x00095da4) cell_navstr_albumart_pane_g3

0xa546,	// (0x00095d9c) cell_navstr_albumart_pane_g4

0x0003,

0xfd95,	// (0x0009b5eb) cell_navstr_albumart_pane_g

0x920b,	// (0x00094a61) bt_list_pane_ParamLimits

0x920b,	// (0x00094a61) bt_list_pane

0x9221,	// (0x00094a77) bt_list_pane_t1

0x9230,	// (0x00094a86) bt_list_pane_t2

0x0001,

0xfd9e,	// (0x0009b5f4) bt_list_pane_t

0x0d78,	// (0x0008c5ce) main_cale_prevew_pane

0x923f,	// (0x00094a95) popup_cale_preview_window_ParamLimits

0x923f,	// (0x00094a95) popup_cale_preview_window

0xf062,	// (0x0009a8b8) bg_popup_preview_window_pane_cp05_ParamLimits

0xf062,	// (0x0009a8b8) bg_popup_preview_window_pane_cp05

0xd0cb,	// (0x00098921) list_cale_preview_pane_ParamLimits

0xd0cb,	// (0x00098921) list_cale_preview_pane

0x925a,	// (0x00094ab0) list_double_cale_preview_pane_ParamLimits

0x925a,	// (0x00094ab0) list_double_cale_preview_pane

0x926e,	// (0x00094ac4) list_single_cale_preview_pane_ParamLimits

0x926e,	// (0x00094ac4) list_single_cale_preview_pane

0x9286,	// (0x00094adc) list_single_cale_preview_pane_g1

0x928e,	// (0x00094ae4) list_single_cale_preview_pane_t1_ParamLimits

0x928e,	// (0x00094ae4) list_single_cale_preview_pane_t1

0x92a3,	// (0x00094af9) list_double_cale_preview_pane_g1

0x92ab,	// (0x00094b01) list_double_cale_preview_pane_t1_ParamLimits

0x92ab,	// (0x00094b01) list_double_cale_preview_pane_t1

0x92c0,	// (0x00094b16) list_double_cale_preview_pane_t2_ParamLimits

0x92c0,	// (0x00094b16) list_double_cale_preview_pane_t2

0x0001,

0xfda3,	// (0x0009b5f9) list_double_cale_preview_pane_t_ParamLimits

0xfda3,	// (0x0009b5f9) list_double_cale_preview_pane_t

0x0d78,	// (0x0008c5ce) main_ezdial_pane

0xf062,	// (0x0009a8b8) main_sp_fs_email_pane_ParamLimits

0x89cd,	// (0x00094223) cmail_ddmenu_btn01_pane_ParamLimits

0x89cd,	// (0x00094223) cmail_ddmenu_btn01_pane

0x89e0,	// (0x00094236) cmail_ddmenu_btn02_pane_ParamLimits

0x89e0,	// (0x00094236) cmail_ddmenu_btn02_pane

0x8a03,	// (0x00094259) cmail_ddmenu_btn03_pane_ParamLimits

0x8a03,	// (0x00094259) cmail_ddmenu_btn03_pane

0x8a27,	// (0x0009427d) main_sp_fs_ctrlbar_pane_ParamLimits

0x8a4b,	// (0x000942a1) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8ec9,	// (0x0009471f) list_cmail_body_pane_ParamLimits

0xccf9,	// (0x0009854f) bg_button_pane_cp12

0xcd0e,	// (0x00098564) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcd0e,	// (0x00098564) list_single_cmail_header_detail_pane_g3

0x8f5b,	// (0x000947b1) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8f5b,	// (0x000947b1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd28,	// (0x0009b57e) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd28,	// (0x0009b57e) list_single_cmail_header_detail_pane_t

0xce3d,	// (0x00098693) phacti_term_pane_t2_ParamLimits

0xce3d,	// (0x00098693) phacti_term_pane_t2

0x0001,

0xfd32,	// (0x0009b588) phacti_term_pane_t_ParamLimits

0xfd32,	// (0x0009b588) phacti_term_pane_t

0xd0d7,	// (0x0009892d) aid_size_list_single_double

0x92d8,	// (0x00094b2e) popup_ezdial_listscroll_window

0x92f4,	// (0x00094b4a) popup_number_entry_window_cp01

0xecb9,	// (0x0009a50f) bg_popup_call_pane_cp09

0xd0e3,	// (0x00098939) ezdial_list_pane

0xd0eb,	// (0x00098941) scroll_pane_cp23

0xa725,	// (0x00095f7b) bg_button_pane_cp028_ParamLimits

0xa725,	// (0x00095f7b) bg_button_pane_cp028

0x9302,	// (0x00094b58) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9302,	// (0x00094b58) cmail_ddmenu_btn01_pane_g1

0x930e,	// (0x00094b64) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x930e,	// (0x00094b64) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfda8,	// (0x0009b5fe) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfda8,	// (0x0009b5fe) cmail_ddmenu_btn01_pane_g

0xd0f3,	// (0x00098949) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd0f3,	// (0x00098949) cmail_ddmenu_btn01_pane_t1

0xa725,	// (0x00095f7b) bg_button_pane_cp029_ParamLimits

0xa725,	// (0x00095f7b) bg_button_pane_cp029

0x931a,	// (0x00094b70) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x931a,	// (0x00094b70) cmail_ddmenu_btn02_pane_g1

0x9332,	// (0x00094b88) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9332,	// (0x00094b88) cmail_ddmenu_btn02_pane_t1

0xf062,	// (0x0009a8b8) bg_button_pane_cp031_ParamLimits

0xf062,	// (0x0009a8b8) bg_button_pane_cp031

0x931a,	// (0x00094b70) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x931a,	// (0x00094b70) cmail_ddmenu_btn03_pane_g1

0x9332,	// (0x00094b88) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9332,	// (0x00094b88) cmail_ddmenu_btn03_pane_t1

0x65a8,	// (0x00091dfe) cell_dialer2_keypad_pane_t1_ParamLimits

0x65c2,	// (0x00091e18) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x65c2,	// (0x00091e18) cell_dialer2_keypad_pane_t1_copy1

0x82fd,	// (0x00093b53) ncimui_group_button_pane

0xf062,	// (0x0009a8b8) main_sp_fs_calendar_pane_ParamLimits

0x8ee1,	// (0x00094737) list_single_cmail_header_caption_pane_ParamLimits

0xce88,	// (0x000986de) aid_recal_txt_sm_pane

0x0d78,	// (0x0008c5ce) mian_recal_day_pane

0xcec7,	// (0x0009871d) popup_sp_fs_cale_preview_window_ParamLimits

0x0d78,	// (0x0008c5ce) list_recal_day_pane

0xd121,	// (0x00098977) list_single_recal_day_pane_ParamLimits

0xd121,	// (0x00098977) list_single_recal_day_pane

0xd133,	// (0x00098989) list_single_recal_day_pane_g1_ParamLimits

0xd133,	// (0x00098989) list_single_recal_day_pane_g1

0xd13f,	// (0x00098995) list_single_recal_day_pane_g2_ParamLimits

0xd13f,	// (0x00098995) list_single_recal_day_pane_g2

0xd14b,	// (0x000989a1) list_single_recal_day_pane_g3_ParamLimits

0xd14b,	// (0x000989a1) list_single_recal_day_pane_g3

0x9356,	// (0x00094bac) list_single_recal_day_pane_g4_ParamLimits

0x9356,	// (0x00094bac) list_single_recal_day_pane_g4

0xd157,	// (0x000989ad) list_single_recal_day_pane_g5_ParamLimits

0xd157,	// (0x000989ad) list_single_recal_day_pane_g5

0xd163,	// (0x000989b9) list_single_recal_day_pane_g6_ParamLimits

0xd163,	// (0x000989b9) list_single_recal_day_pane_g6

0x0005,

0xfdb7,	// (0x0009b60d) list_single_recal_day_pane_g_ParamLimits

0xfdb7,	// (0x0009b60d) list_single_recal_day_pane_g

0xd16f,	// (0x000989c5) list_single_recal_day_pane_t1

0xd17d,	// (0x000989d3) list_single_recal_day_pane_t2

0x0001,

0xfdc4,	// (0x0009b61a) list_single_recal_day_pane_t

0x9364,	// (0x00094bba) ncimui_query_button_pane_ParamLimits

0x9364,	// (0x00094bba) ncimui_query_button_pane

0x9374,	// (0x00094bca) ncimui_query_button_pane_t1_ParamLimits

0x9374,	// (0x00094bca) ncimui_query_button_pane_t1

0xd18b,	// (0x000989e1) ncimui_query_button_pane_t2_ParamLimits

0xd18b,	// (0x000989e1) ncimui_query_button_pane_t2

0x0001,

0xfdc9,	// (0x0009b61f) ncimui_query_button_pane_t_ParamLimits

0xfdc9,	// (0x0009b61f) ncimui_query_button_pane_t

0x9387,	// (0x00094bdd) query_button_pane_ParamLimits

0x9387,	// (0x00094bdd) query_button_pane

0x0d78,	// (0x0008c5ce) bg_button_pane_cp0028

0xd19e,	// (0x000989f4) query_button_pane_t1

0x4660,	// (0x0008feb6) main_tport_pane_ParamLimits

0x8daf,	// (0x00094605) bg_popup_window_pane_cp01_ParamLimits

0x8daf,	// (0x00094605) bg_popup_window_pane_cp01

0x8dc5,	// (0x0009461b) heading_pane_cp08_ParamLimits

0x8dc5,	// (0x0009461b) heading_pane_cp08

0x8dd6,	// (0x0009462c) heading_pane_cp07_ParamLimits

0x8dd6,	// (0x0009462c) heading_pane_cp07

0xccc4,	// (0x0009851a) cell_tport_appsw_pane_g2

0x0002,

0xfd15,	// (0x0009b56b) cell_tport_appsw_pane_g

0x3432,	// (0x0008ec88) input_candi_list_open_g1

0xe80a,	// (0x0009a060) list_cale_time_pane_g6_ParamLimits

0xe80a,	// (0x0009a060) list_cale_time_pane_g6

0x544e,	// (0x00090ca4) aid_size_touch_calib_1_ParamLimits

0x544e,	// (0x00090ca4) aid_size_touch_calib_1

0x545a,	// (0x00090cb0) aid_size_touch_calib_2_ParamLimits

0x545a,	// (0x00090cb0) aid_size_touch_calib_2

0x5470,	// (0x00090cc6) aid_size_touch_calib_3_ParamLimits

0x5470,	// (0x00090cc6) aid_size_touch_calib_3

0x548e,	// (0x00090ce4) aid_size_touch_calib_4_ParamLimits

0x548e,	// (0x00090ce4) aid_size_touch_calib_4

0x54a4,	// (0x00090cfa) main_touch_calib_button_group_pane_ParamLimits

0x54a4,	// (0x00090cfa) main_touch_calib_button_group_pane

0x54bb,	// (0x00090d11) main_touch_calib_pane_g1_ParamLimits

0x54c7,	// (0x00090d1d) main_touch_calib_pane_g2_ParamLimits

0x54d3,	// (0x00090d29) main_touch_calib_pane_g3_ParamLimits

0x54df,	// (0x00090d35) main_touch_calib_pane_g4_ParamLimits

0xf6fa,	// (0x0009af50) main_touch_calib_pane_g_ParamLimits

0x54eb,	// (0x00090d41) main_touch_calib_pane_t1_ParamLimits

0x5505,	// (0x00090d5b) main_touch_calib_pane_t2_ParamLimits

0x551f,	// (0x00090d75) main_touch_calib_pane_t3_ParamLimits

0x5533,	// (0x00090d89) main_touch_calib_pane_t4_ParamLimits

0x5547,	// (0x00090d9d) main_touch_calib_pane_t5_ParamLimits

0xf703,	// (0x0009af59) main_touch_calib_pane_t_ParamLimits

0xb01c,	// (0x00096872) list_single_fp_cale_pane_g3_ParamLimits

0xb01c,	// (0x00096872) list_single_fp_cale_pane_g3

0xd9df,	// (0x00099235) bg_button_pane_cp012_ParamLimits

0xd9df,	// (0x00099235) bg_vkb2_func_pane_cp03_ParamLimits

0x75ae,	// (0x00092e04) cell_vitu2_function_top_pane_g1_ParamLimits

0xd9df,	// (0x00099235) bg_vkb2_func_pane_cp04_ParamLimits

0x82b1,	// (0x00093b07) main_ncimui_button_group_pane_ParamLimits

0x82b1,	// (0x00093b07) main_ncimui_button_group_pane

0x82eb,	// (0x00093b41) main_ncimui_pane_t3_ParamLimits

0x82eb,	// (0x00093b41) main_ncimui_pane_t3

0xcdeb,	// (0x00098641) phacti_button_group_pane

0xd0d7,	// (0x0009892d) aid_size_list_single_double_ParamLimits

0x92d8,	// (0x00094b2e) popup_ezdial_listscroll_window_ParamLimits

0x92f4,	// (0x00094b4a) popup_number_entry_window_cp01_ParamLimits

0x939a,	// (0x00094bf0) phacti_button_pane_ParamLimits

0x939a,	// (0x00094bf0) phacti_button_pane

0x0d78,	// (0x0008c5ce) bg_button_pane_cp14

0xd1ac,	// (0x00098a02) phacti_button_pane_t1

0x93ab,	// (0x00094c01) main_touch_calib_button_pane_ParamLimits

0x93ab,	// (0x00094c01) main_touch_calib_button_pane

0xe25d,	// (0x00099ab3) bg_button_pane_cp18_ParamLimits

0xe25d,	// (0x00099ab3) bg_button_pane_cp18

0xd1ba,	// (0x00098a10) main_touch_calib_button_pane_t1_ParamLimits

0xd1ba,	// (0x00098a10) main_touch_calib_button_pane_t1

0xd1d0,	// (0x00098a26) main_touch_calib_button_pane_t2_ParamLimits

0xd1d0,	// (0x00098a26) main_touch_calib_button_pane_t2

0x0001,

0xfdce,	// (0x0009b624) main_touch_calib_button_pane_t_ParamLimits

0xfdce,	// (0x0009b624) main_touch_calib_button_pane_t

0x0d78,	// (0x0008c5ce) cell_ncimui_button_pane

0x0d78,	// (0x0008c5ce) bg_button_pane_cp032

0xd1ee,	// (0x00098a44) cell_ncimui_button_pane_t1

0xd902,	// (0x00099158) image3_infobar_pane_ParamLimits

0xd902,	// (0x00099158) image3_infobar_pane

0x8684,	// (0x00093eda) fs_bigclock_status_pane_ParamLimits

0x8684,	// (0x00093eda) fs_bigclock_status_pane

0x8691,	// (0x00093ee7) main_fs_bigclock_clock_pane_ParamLimits

0x8691,	// (0x00093ee7) main_fs_bigclock_clock_pane

0x86a4,	// (0x00093efa) main_fs_bigclock_indi_pane_ParamLimits

0x86a4,	// (0x00093efa) main_fs_bigclock_indi_pane

0x86bf,	// (0x00093f15) main_fs_bigclock_swipe_pane_ParamLimits

0x86bf,	// (0x00093f15) main_fs_bigclock_swipe_pane

0x0d78,	// (0x0008c5ce) main_fs_clock_dumped_data

0xc670,	// (0x00097ec6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc670,	// (0x00097ec6) list_single_fs_bigclock_indicator_pane_g1

0xc690,	// (0x00097ee6) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc690,	// (0x00097ee6) list_single_fs_bigclock_indicator_pane_g2

0xc6aa,	// (0x00097f00) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc6aa,	// (0x00097f00) list_single_fs_bigclock_indicator_pane_g3

0xc6c6,	// (0x00097f1c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc6c6,	// (0x00097f1c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc01,	// (0x0009b457) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc01,	// (0x0009b457) list_single_fs_bigclock_indicator_pane_g

0xc6ec,	// (0x00097f42) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc6ec,	// (0x00097f42) list_single_fs_bigclock_indicator_pane_t1

0xc714,	// (0x00097f6a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc714,	// (0x00097f6a) list_single_fs_bigclock_indicator_pane_t2

0xc73c,	// (0x00097f92) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc73c,	// (0x00097f92) list_single_fs_bigclock_indicator_pane_t3

0xc766,	// (0x00097fbc) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc766,	// (0x00097fbc) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc0c,	// (0x0009b462) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc0c,	// (0x0009b462) list_single_fs_bigclock_indicator_pane_t

0xd1fc,	// (0x00098a52) image3_infobar_fav_pane_ParamLimits

0xd1fc,	// (0x00098a52) image3_infobar_fav_pane

0xd20c,	// (0x00098a62) image3_infobar_loc_pane_ParamLimits

0xd20c,	// (0x00098a62) image3_infobar_loc_pane

0xd222,	// (0x00098a78) image3_infobar_time_pane_ParamLimits

0xd222,	// (0x00098a78) image3_infobar_time_pane

0xac5a,	// (0x000964b0) image3_infobar_time_pane_g1

0xd232,	// (0x00098a88) image3_infobar_time_pane_t1

0xac5a,	// (0x000964b0) image3_infobar_loc_pane_g1

0xd240,	// (0x00098a96) image3_infobar_loc_pane_g2

0x0001,

0xfdd3,	// (0x0009b629) image3_infobar_loc_pane_g

0xd248,	// (0x00098a9e) image3_infobar_loc_pane_t1

0xac5a,	// (0x000964b0) image3_infobar_fav_pane_g1

0xd256,	// (0x00098aac) image3_infobar_fav_pane_g2

0x0001,

0xfdd8,	// (0x0009b62e) image3_infobar_fav_pane_g

0xd25e,	// (0x00098ab4) fs_bigclock_status_battery_pane

0xd267,	// (0x00098abd) fs_bigclock_status_signal_pane

0xd270,	// (0x00098ac6) fs_bigclock_status_title_pane

0xd279,	// (0x00098acf) fs_bigclock_status_signal_pane_g1

0xd282,	// (0x00098ad8) fs_bigclock_status_signal_pane_g2

0x0001,

0xfddd,	// (0x0009b633) fs_bigclock_status_signal_pane_g

0xd28a,	// (0x00098ae0) fs_bigclock_status_battery_pane_g1

0xd293,	// (0x00098ae9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfde2,	// (0x0009b638) fs_bigclock_status_battery_pane_g

0xd29b,	// (0x00098af1) fs_bigclock_status_title_pane_t1

0xac5a,	// (0x000964b0) main_fs_bigclock_clock_pane_g1

0xd2a9,	// (0x00098aff) main_fs_bigclock_clock_pane_g2

0xd2a9,	// (0x00098aff) main_fs_bigclock_clock_pane_g3

0xd2a9,	// (0x00098aff) main_fs_bigclock_clock_pane_g4

0x0003,

0xfde7,	// (0x0009b63d) main_fs_bigclock_clock_pane_g

0xd2b5,	// (0x00098b0b) main_fs_bigclock_clock_pane_t1

0xd2c3,	// (0x00098b19) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdf0,	// (0x0009b646) main_fs_bigclock_clock_pane_t

0xd2d2,	// (0x00098b28) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd2d2,	// (0x00098b28) list_single_fs_bigclock_indicator_pane

0x93c0,	// (0x00094c16) list_single_fs_bigclock_pane_ParamLimits

0x93c0,	// (0x00094c16) list_single_fs_bigclock_pane

0xd2ec,	// (0x00098b42) main_fs_bigclock_indicator_pane_t1

0xd2fb,	// (0x00098b51) list_single_fs_bigclock_pane_g1

0xd303,	// (0x00098b59) list_single_fs_bigclock_pane_t1

0xac5a,	// (0x000964b0) main_fs_bigclock_swipe_pane_g1

0xd341,	// (0x00098b97) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe01,	// (0x0009b657) main_fs_bigclock_swipe_pane_g

0xd349,	// (0x00098b9f) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd349,	// (0x00098b9f) main_fs_bigclock_swipe_pane_t1

0x2bb6,	// (0x0008e40c) call_type_pane_ParamLimits

0x0d78,	// (0x0008c5ce) main_btmg_pane

0xcfc0,	// (0x00098816) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcfc0,	// (0x00098816) list_single_cale_mrui_row_pane_g2

0x0001,

0xfd74,	// (0x0009b5ca) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd74,	// (0x0009b5ca) list_single_cale_mrui_row_pane_g

0xd111,	// (0x00098967) list_recal_vselct_arw_lo_pane

0xd119,	// (0x0009896f) list_recal_vselct_arw_up_pane

0xbcc4,	// (0x0009751a) list_recal_vselct_pane

0xd366,	// (0x00098bbc) btmg_button_pane

0x9426,	// (0x00094c7c) main_btmg_pane_g1

0x0d78,	// (0x0008c5ce) bg_button_pane_cp044

0xd370,	// (0x00098bc6) btmg_button_pane_t1

0xa71d,	// (0x00095f73) aid_listscroll_gen

0xf062,	// (0x0009a8b8) main_cntbar_detail_pane

0xccda,	// (0x00098530) list_cmail_folder_pane

0xccea,	// (0x00098540) sp_fs_scroll_pane_cp03_ParamLimits

0x9430,	// (0x00094c86) list_single_fs_dyc_pane_cp01_ParamLimits

0x9430,	// (0x00094c86) list_single_fs_dyc_pane_cp01

0xd37e,	// (0x00098bd4) aid_size_cmail_indent

0xd387,	// (0x00098bdd) list_single_dyc_row_pane_cp01

0x947a,	// (0x00094cd0) cntbar_detail_list_pane_ParamLimits

0x947a,	// (0x00094cd0) cntbar_detail_list_pane

0x94cc,	// (0x00094d22) main_cntbar_detail_cont_pane_ParamLimits

0x94cc,	// (0x00094d22) main_cntbar_detail_cont_pane

0x2ad9,	// (0x0008e32f) scroll_pane_cp032_ParamLimits

0x2ad9,	// (0x0008e32f) scroll_pane_cp032

0x94e0,	// (0x00094d36) cntbar_detail_list_event_pane_ParamLimits

0x94e0,	// (0x00094d36) cntbar_detail_list_event_pane

0x948c,	// (0x00094ce2) cntbar_detail_list_shct_pane

0xe6bd,	// (0x00099f13) aid_list_gen

0xd390,	// (0x00098be6) aid_scroll

0xd399,	// (0x00098bef) aid_size_touch_scroll_bar

0xd3a2,	// (0x00098bf8) aid_list_double

0xd3ab,	// (0x00098c01) aid_list_single

0x94f0,	// (0x00094d46) aid_list_single_lg

0xd3b4,	// (0x00098c0a) aid_list_z_g_a_sm

0xd3bc,	// (0x00098c12) aid_list_z_g_d

0xd3c4,	// (0x00098c1a) aid_txt_z_prm

0xd3d2,	// (0x00098c28) aid_txt_z_prm_cp01

0xd3e0,	// (0x00098c36) aid_txt_z_sec

0x94f9,	// (0x00094d4f) main_cntbar_detail_cont_pane_g1_ParamLimits

0x94f9,	// (0x00094d4f) main_cntbar_detail_cont_pane_g1

0x950d,	// (0x00094d63) main_cntbar_detail_cont_pane_g2_ParamLimits

0x950d,	// (0x00094d63) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe06,	// (0x0009b65c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe06,	// (0x0009b65c) main_cntbar_detail_cont_pane_g

0xd3ee,	// (0x00098c44) main_cntbar_detail_cont_pane_t1

0xd3fc,	// (0x00098c52) main_cntbar_detail_cont_pane_t2

0xd40a,	// (0x00098c60) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe0b,	// (0x0009b661) main_cntbar_detail_cont_pane_t

0x951d,	// (0x00094d73) cell_cntbar_detail_list_shct_pane_ParamLimits

0x951d,	// (0x00094d73) cell_cntbar_detail_list_shct_pane

0xd418,	// (0x00098c6e) cntbar_detail_list_shct_pane_g1

0xd421,	// (0x00098c77) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe12,	// (0x0009b668) cntbar_detail_list_shct_pane_g

0x952f,	// (0x00094d85) cntbar_detail_list_event_pane_g1_ParamLimits

0x952f,	// (0x00094d85) cntbar_detail_list_event_pane_g1

0x953b,	// (0x00094d91) cntbar_detail_list_event_pane_g2_ParamLimits

0x953b,	// (0x00094d91) cntbar_detail_list_event_pane_g2

0x0005,

0xfe17,	// (0x0009b66d) cntbar_detail_list_event_pane_g_ParamLimits

0xfe17,	// (0x0009b66d) cntbar_detail_list_event_pane_g

0x95a9,	// (0x00094dff) cntbar_detail_list_event_pane_t1_ParamLimits

0x95a9,	// (0x00094dff) cntbar_detail_list_event_pane_t1

0x95be,	// (0x00094e14) cntbar_detail_list_event_pane_t2_ParamLimits

0x95be,	// (0x00094e14) cntbar_detail_list_event_pane_t2

0x0002,

0xfe24,	// (0x0009b67a) cntbar_detail_list_event_pane_t_ParamLimits

0xfe24,	// (0x0009b67a) cntbar_detail_list_event_pane_t

0xac5a,	// (0x000964b0) cell_cntbar_detail_list_shct_pane_g1

0x2f5a,	// (0x0008e7b0) navi_pane_mv_g3

0xf062,	// (0x0009a8b8) main_cntbar_detail_pane_ParamLimits

0x0d78,	// (0x0008c5ce) main_notif_wgt_pane

0xd744,	// (0x00098f9a) aid_tch_main_mp4_pane_g4

0xd8f8,	// (0x0009914e) popup_slider_window_cp02

0xd108,	// (0x0009895e) list_recal_day_event_pane

0x944a,	// (0x00094ca0) cntbar_detail_btn_pane_ParamLimits

0x944a,	// (0x00094ca0) cntbar_detail_btn_pane

0x9462,	// (0x00094cb8) cntbar_detail_btn_pane_cp01_ParamLimits

0x9462,	// (0x00094cb8) cntbar_detail_btn_pane_cp01

0x948c,	// (0x00094ce2) cntbar_detail_list_shct_pane_ParamLimits

0x949c,	// (0x00094cf2) cntbar_detail_pane_g1_ParamLimits

0x949c,	// (0x00094cf2) cntbar_detail_pane_g1

0x94b0,	// (0x00094d06) cntbar_detail_pane_t1_ParamLimits

0x94b0,	// (0x00094d06) cntbar_detail_pane_t1

0x9547,	// (0x00094d9d) cntbar_detail_list_event_pane_g3_ParamLimits

0x9547,	// (0x00094d9d) cntbar_detail_list_event_pane_g3

0x955f,	// (0x00094db5) cntbar_detail_list_event_pane_g4_ParamLimits

0x955f,	// (0x00094db5) cntbar_detail_list_event_pane_g4

0x9577,	// (0x00094dcd) cntbar_detail_list_event_pane_g5_ParamLimits

0x9577,	// (0x00094dcd) cntbar_detail_list_event_pane_g5

0x958f,	// (0x00094de5) cntbar_detail_list_event_pane_g6_ParamLimits

0x958f,	// (0x00094de5) cntbar_detail_list_event_pane_g6

0x95d3,	// (0x00094e29) cntbar_detail_list_event_pane_t3_ParamLimits

0x95d3,	// (0x00094e29) cntbar_detail_list_event_pane_t3

0x95e5,	// (0x00094e3b) popup_notif_wgt_window_ParamLimits

0x95e5,	// (0x00094e3b) popup_notif_wgt_window

0x95fe,	// (0x00094e54) popup_submenu_window_cp01_ParamLimits

0x95fe,	// (0x00094e54) popup_submenu_window_cp01

0xecb9,	// (0x0009a50f) bg_popup_window_pane_cp10

0xd42a,	// (0x00098c80) listscroll_notif_wgt_pane

0xd434,	// (0x00098c8a) list_notif_wgt_window

0xd43d,	// (0x00098c93) scroll_pane_cp033

0xd446,	// (0x00098c9c) list_notif_wgt_row_pane_ParamLimits

0xd446,	// (0x00098c9c) list_notif_wgt_row_pane

0xd45a,	// (0x00098cb0) aid_size_list_notif_wgt_del

0xd463,	// (0x00098cb9) list_notif_wgt_row_pane_g1

0xd46b,	// (0x00098cc1) list_notif_wgt_row_pane_g2

0xd473,	// (0x00098cc9) list_notif_wgt_row_pane_g3

0x0002,

0xfe2b,	// (0x0009b681) list_notif_wgt_row_pane_g

0xd47c,	// (0x00098cd2) list_notif_wgt_row_pane_t1

0xd48a,	// (0x00098ce0) list_notif_wgt_row_pane_t2

0xd498,	// (0x00098cee) list_notif_wgt_row_pane_t3

0x0002,

0xfe32,	// (0x0009b688) list_notif_wgt_row_pane_t

0xb997,	// (0x000971ed) list_recal_day_event_pane_g1

0xd4a6,	// (0x00098cfc) list_recal_day_event_pane_t1

0x0d78,	// (0x0008c5ce) bg_button_pane_cp045

0xd4b5,	// (0x00098d0b) cntbar_detail_btn_pane_t1

0xa725,	// (0x00095f7b) main_callh_pane_ParamLimits

0xa725,	// (0x00095f7b) main_callh_pane

0x0d78,	// (0x0008c5ce) main_coverflow0_pane

0x0d78,	// (0x0008c5ce) main_wgtman_pane

0x86cd,	// (0x00093f23) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x86cd,	// (0x00093f23) main_fs_bigclock_unlock_btn_pane

0xccbc,	// (0x00098512) bg_button_pane_cp16

0x8e73,	// (0x000946c9) cell_tport_appsw_pane_g3

0x9610,	// (0x00094e66) cf0_flow_pane_ParamLimits

0x9610,	// (0x00094e66) cf0_flow_pane

0xd4c3,	// (0x00098d19) listscroll_cf0_pane

0xd4cc,	// (0x00098d22) main_cf0_pane_g1

0x9625,	// (0x00094e7b) main_cf0_pane_t1_ParamLimits

0x9625,	// (0x00094e7b) main_cf0_pane_t1

0x963d,	// (0x00094e93) main_cf0_pane_t2_ParamLimits

0x963d,	// (0x00094e93) main_cf0_pane_t2

0x0001,

0xfe39,	// (0x0009b68f) main_cf0_pane_t_ParamLimits

0xfe39,	// (0x0009b68f) main_cf0_pane_t

0xd4d6,	// (0x00098d2c) scroll_pane_cp11

0x9655,	// (0x00094eab) cf0_flow_pane_g1

0x9661,	// (0x00094eb7) cf0_flow_pane_g2

0x0001,

0xfe3e,	// (0x0009b694) cf0_flow_pane_g

0x966d,	// (0x00094ec3) cf0_flow_pane_t1

0x0d78,	// (0x0008c5ce) main_call6_pane

0x0d78,	// (0x0008c5ce) main_calllock_pane

0x967f,	// (0x00094ed5) call6_btn_grp_pane_ParamLimits

0x967f,	// (0x00094ed5) call6_btn_grp_pane

0x969b,	// (0x00094ef1) call6_pane_g1_ParamLimits

0x969b,	// (0x00094ef1) call6_pane_g1

0x96b1,	// (0x00094f07) popup_call6_1st_window_ParamLimits

0x96b1,	// (0x00094f07) popup_call6_1st_window

0x96c2,	// (0x00094f18) popup_call6_2nd_window_ParamLimits

0x96c2,	// (0x00094f18) popup_call6_2nd_window

0x96d3,	// (0x00094f29) cell_call6_btn_pane_ParamLimits

0x96d3,	// (0x00094f29) cell_call6_btn_pane

0xecb9,	// (0x0009a50f) bg_popup_call2_in_pane_cp03

0xd4e1,	// (0x00098d37) popup_call6_1st_window_g1

0xd4e9,	// (0x00098d3f) popup_call6_1st_window_g2

0xd4f1,	// (0x00098d47) popup_call6_1st_window_g3

0x0002,

0xfe43,	// (0x0009b699) popup_call6_1st_window_g

0xd4f9,	// (0x00098d4f) popup_call6_1st_window_t1

0xd508,	// (0x00098d5e) popup_call6_1st_window_t2

0xd518,	// (0x00098d6e) popup_call6_1st_window_t3

0x0002,

0xfe4a,	// (0x0009b6a0) popup_call6_1st_window_t

0xecb9,	// (0x0009a50f) bg_popup_call2_in_pane_cp04

0xd4e1,	// (0x00098d37) popup_call6_2nd_window_g1

0xd4e9,	// (0x00098d3f) popup_call6_2nd_window_g2

0xd4f1,	// (0x00098d47) popup_call6_2nd_window_g3

0x0002,

0xfe43,	// (0x0009b699) popup_call6_2nd_window_g

0xd4f9,	// (0x00098d4f) popup_call6_2nd_window_t1

0x0d78,	// (0x0008c5ce) bg_button_pane_cp15

0xd528,	// (0x00098d7e) cell_call6_btn_pane_g1

0xd531,	// (0x00098d87) cell_call6_btn_pane_t1

0x96e7,	// (0x00094f3d) listscroll_wgtman_pane_ParamLimits

0x96e7,	// (0x00094f3d) listscroll_wgtman_pane

0x970a,	// (0x00094f60) wgtman_btn_pane_ParamLimits

0x970a,	// (0x00094f60) wgtman_btn_pane

0xeb7f,	// (0x0009a3d5) aid_scroll_copy1

0xd540,	// (0x00098d96) list_wgtman_pane

0x974d,	// (0x00094fa3) wgtman_btn_pane_g1_ParamLimits

0x974d,	// (0x00094fa3) wgtman_btn_pane_g1

0x9779,	// (0x00094fcf) wgtman_btn_pane_t1_ParamLimits

0x9779,	// (0x00094fcf) wgtman_btn_pane_t1

0xd54a,	// (0x00098da0) wgtman_btn_pane_t2_ParamLimits

0xd54a,	// (0x00098da0) wgtman_btn_pane_t2

0x0001,

0xfe51,	// (0x0009b6a7) wgtman_btn_pane_t_ParamLimits

0xfe51,	// (0x0009b6a7) wgtman_btn_pane_t

0xd561,	// (0x00098db7) listrow_wgtman_pane_ParamLimits

0xd561,	// (0x00098db7) listrow_wgtman_pane

0xd575,	// (0x00098dcb) listrow_wgtman_pane_g1

0x97b6,	// (0x0009500c) listrow_wgtman_pane_g2

0x0001,

0xfe56,	// (0x0009b6ac) listrow_wgtman_pane_g

0xd57e,	// (0x00098dd4) listrow_wgtman_pane_t1

0xd58c,	// (0x00098de2) listrow_wgtman_pane_t2

0x0001,

0xfe5b,	// (0x0009b6b1) listrow_wgtman_pane_t

0xd59a,	// (0x00098df0) wait_bar_pane_cp09

0xd5a2,	// (0x00098df8) main_calllock_btn_pane

0xd5ac,	// (0x00098e02) main_calllock_pane_g1

0x0d78,	// (0x0008c5ce) bg_button_pane_cp17

0xd5b8,	// (0x00098e0e) main_calllock_btn_pane_g1

0xd5c1,	// (0x00098e17) main_calllock_btn_pane_t1

0x0d78,	// (0x0008c5ce) main_dialer3_pane

0x0d78,	// (0x0008c5ce) main_fmrd2_pane

0xac5a,	// (0x000964b0) main_fs_bigclock_unlock_btn_pane_g1

0xd5d8,	// (0x00098e2e) main_fs_bigclock_unlock_btn_pane_t1

0x97c0,	// (0x00095016) area_fmrd2_info_pane_ParamLimits

0x97c0,	// (0x00095016) area_fmrd2_info_pane

0x97d3,	// (0x00095029) area_fmrd2_visual_pane_ParamLimits

0x97d3,	// (0x00095029) area_fmrd2_visual_pane

0x97e1,	// (0x00095037) fmrd2_indi_pane_ParamLimits

0x97e1,	// (0x00095037) fmrd2_indi_pane

0x97ee,	// (0x00095044) area_fmrd2_visual_pane_g1

0x97f6,	// (0x0009504c) area_fmrd2_visual_pane_t1

0x9806,	// (0x0009505c) area_fmrd2_visual_pane_t2

0x9816,	// (0x0009506c) area_fmrd2_visual_pane_t3

0x0002,

0xfe65,	// (0x0009b6bb) area_fmrd2_visual_pane_t

0x9826,	// (0x0009507c) area_fmrd2_info_pane_g1

0x982e,	// (0x00095084) area_fmrd2_info_pane_t1

0x983e,	// (0x00095094) area_fmrd2_info_pane_t2

0x984e,	// (0x000950a4) area_fmrd2_info_pane_t3

0x985e,	// (0x000950b4) area_fmrd2_info_pane_t4

0x0003,

0xfe6c,	// (0x0009b6c2) area_fmrd2_info_pane_t

0x986e,	// (0x000950c4) fmrd2_indi_pane_t1

0x987e,	// (0x000950d4) fmrd2_indi_pane_t2

0x988e,	// (0x000950e4) fmrd2_indi_pane_t3

0x0002,

0xfe75,	// (0x0009b6cb) fmrd2_indi_pane_t

0xc6d5,	// (0x00097f2b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc6d5,	// (0x00097f2b) list_single_fs_bigclock_indicator_pane_g5

0xc77b,	// (0x00097fd1) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc77b,	// (0x00097fd1) list_single_fs_bigclock_indicator_pane_t5

0x903d,	// (0x00094893) aid_cell_bcale_month_pane_ParamLimits

0x903d,	// (0x00094893) aid_cell_bcale_month_pane

0x904f,	// (0x000948a5) bcale_month_pane_ParamLimits

0x904f,	// (0x000948a5) bcale_month_pane

0x9067,	// (0x000948bd) bcale_preview_pane_ParamLimits

0x9067,	// (0x000948bd) bcale_preview_pane

0xd303,	// (0x00098b59) list_single_fs_bigclock_pane_t1_ParamLimits

0xd31d,	// (0x00098b73) list_single_fs_bigclock_pane_t2_ParamLimits

0xd31d,	// (0x00098b73) list_single_fs_bigclock_pane_t2

0x0001,

0xfdfc,	// (0x0009b652) list_single_fs_bigclock_pane_t_ParamLimits

0xfdfc,	// (0x0009b652) list_single_fs_bigclock_pane_t

0xd5d0,	// (0x00098e26) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe60,	// (0x0009b6b6) main_fs_bigclock_unlock_btn_pane_g

0x989e,	// (0x000950f4) aid_dia3_key_size_ParamLimits

0x989e,	// (0x000950f4) aid_dia3_key_size

0x98ad,	// (0x00095103) aid_dia3_listrow_size_ParamLimits

0x98ad,	// (0x00095103) aid_dia3_listrow_size

0x98bb,	// (0x00095111) dia3_keypad_fun_pane_ParamLimits

0x98bb,	// (0x00095111) dia3_keypad_fun_pane

0x98d7,	// (0x0009512d) dia3_keypad_num_pane_ParamLimits

0x98d7,	// (0x0009512d) dia3_keypad_num_pane

0x98f0,	// (0x00095146) dia3_listscroll_pane_ParamLimits

0x98f0,	// (0x00095146) dia3_listscroll_pane

0x9905,	// (0x0009515b) dia3_numentry_pane_ParamLimits

0x9905,	// (0x0009515b) dia3_numentry_pane

0xd5e6,	// (0x00098e3c) dia3_list_pane

0xd5f1,	// (0x00098e47) scroll_pane_cp12

0x0d78,	// (0x0008c5ce) bg_dia3_numentry_pane

0xd5fc,	// (0x00098e52) dia3_numentry_pane_t1

0x9918,	// (0x0009516e) cell_dia3_key_num_pane

0x9920,	// (0x00095176) cell_dia3_key0_fun_pane_ParamLimits

0x9920,	// (0x00095176) cell_dia3_key0_fun_pane

0x9934,	// (0x0009518a) cell_dia3_key1_fun_pane_ParamLimits

0x9934,	// (0x0009518a) cell_dia3_key1_fun_pane

0x994c,	// (0x000951a2) dia3_listrow_pane

0xc3ed,	// (0x00097c43) bg_dia3_numentry_pane_g1

0x0d78,	// (0x0008c5ce) bg_button_pane_cp21

0xd60b,	// (0x00098e61) cell_dia3_key_num_pane_t1

0xd619,	// (0x00098e6f) cell_dia3_key_num_pane_t2

0xd628,	// (0x00098e7e) cell_dia3_key_num_pane_t3

0xd637,	// (0x00098e8d) cell_dia3_key_num_pane_t4

0x0003,

0xfe7c,	// (0x0009b6d2) cell_dia3_key_num_pane_t

0x0d78,	// (0x0008c5ce) bg_button_pane_cp19

0x995e,	// (0x000951b4) cell_dia3_key0_fun_pane_g1

0x0d78,	// (0x0008c5ce) bg_button_pane_cp20

0x9966,	// (0x000951bc) cell_dia3_key1_fun_pane_g1

0x996e,	// (0x000951c4) area_left_week_number_pane

0x9977,	// (0x000951cd) area_top_day_name_pane

0x9980,	// (0x000951d6) frame_month_view_pane

0x998c,	// (0x000951e2) grid_month_view_pane

0x9996,	// (0x000951ec) cell_top_day_name_pane_ParamLimits

0x9996,	// (0x000951ec) cell_top_day_name_pane

0x99b2,	// (0x00095208) cell_area_left_week_number_pane_ParamLimits

0x99b2,	// (0x00095208) cell_area_left_week_number_pane

0x99c8,	// (0x0009521e) cell_month_view_pane_ParamLimits

0x99c8,	// (0x0009521e) cell_month_view_pane

0xd646,	// (0x00098e9c) frm_month_g1

0x99e9,	// (0x0009523f) frm_month_g2

0x99f3,	// (0x00095249) frm_month_g3

0x99fd,	// (0x00095253) frm_month_g4

0x9a07,	// (0x0009525d) frm_month_g5

0x9a11,	// (0x00095267) frm_month_g6

0x9a1d,	// (0x00095273) frm_month_g7

0xd64f,	// (0x00098ea5) frm_month_g8

0x9a29,	// (0x0009527f) frm_month_g9

0x9a32,	// (0x00095288) frm_month_g10

0x9a3b,	// (0x00095291) frm_month_g11

0x9a44,	// (0x0009529a) frm_month_g12

0x9a4d,	// (0x000952a3) frm_month_g13

0x9a56,	// (0x000952ac) frm_month_g14

0x9a61,	// (0x000952b7) frm_month_g15

0x9a6c,	// (0x000952c2) frm_month_g16

0x000f,

0xfe85,	// (0x0009b6db) frm_month_g

0x9a77,	// (0x000952cd) cell_top_day_name_pane_t1

0x9a86,	// (0x000952dc) cell_area_left_week_number_pane_g1

0x9a77,	// (0x000952cd) cell_area_left_week_number_pane_t1

0xac5a,	// (0x000964b0) cell_month_view_pane_g1

0x9a8e,	// (0x000952e4) cell_month_view_pane_t1

0x0d78,	// (0x0008c5ce) main_fps_pane

0xca07,	// (0x0009825d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xca07,	// (0x0009825d) cmail_ddmenu_btn02_pane_cp1

0xca23,	// (0x00098279) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xca23,	// (0x00098279) cmail_ddmenu_btn02_pane_cp2

0x9326,	// (0x00094b7c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9326,	// (0x00094b7c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdad,	// (0x0009b603) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdad,	// (0x0009b603) cmail_ddmenu_btn02_pane_g

0x9344,	// (0x00094b9a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9344,	// (0x00094b9a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdb2,	// (0x0009b608) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdb2,	// (0x0009b608) cmail_ddmenu_btn02_pane_t

0x9a9d,	// (0x000952f3) fps_text_pane_ParamLimits

0x9a9d,	// (0x000952f3) fps_text_pane

0x9ab4,	// (0x0009530a) main_fps_pane_g1_ParamLimits

0x9ab4,	// (0x0009530a) main_fps_pane_g1

0x9acc,	// (0x00095322) wait_bar_pane_cp010_ParamLimits

0x9acc,	// (0x00095322) wait_bar_pane_cp010

0x9adf,	// (0x00095335) fps_text_pane_t1_ParamLimits

0x9adf,	// (0x00095335) fps_text_pane_t1

0x6a24,	// (0x0009227a) cam4_image_uncrop_pane_g1

0x6a2d,	// (0x00092283) cam4_image_uncrop_pane_g2

0x6a38,	// (0x0009228e) cam4_image_uncrop_pane_g3

0x6a41,	// (0x00092297) cam4_image_uncrop_pane_g4

0x0003,

0xf88d,	// (0x0009b0e3) cam4_image_uncrop_pane_g

0x994c,	// (0x000951a2) dia3_listrow_pane_ParamLimits

0x0d78,	// (0x0008c5ce) main_phob2_pane

0x8e3a,	// (0x00094690) cell_tport_appsw_pane_cp02_ParamLimits

0x8e3a,	// (0x00094690) cell_tport_appsw_pane_cp02

0x8e4e,	// (0x000946a4) cell_tport_appsw_pane_cp03_ParamLimits

0x8e4e,	// (0x000946a4) cell_tport_appsw_pane_cp03

0x0d78,	// (0x0008c5ce) phob2_contact_card_pane

0x0d78,	// (0x0008c5ce) phob2_listscroll_pane

0xd658,	// (0x00098eae) phob2_list_pane

0xd660,	// (0x00098eb6) scroll_pane_cp034

0x9af7,	// (0x0009534d) phob2_cc_data_pane_ParamLimits

0x9af7,	// (0x0009534d) phob2_cc_data_pane

0x9b18,	// (0x0009536e) phob2_cc_listscroll_pane_ParamLimits

0x9b18,	// (0x0009536e) phob2_cc_listscroll_pane

0x9b3a,	// (0x00095390) list_double_large_graphic_phob2_pane_ParamLimits

0x9b3a,	// (0x00095390) list_double_large_graphic_phob2_pane

0x9b4f,	// (0x000953a5) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9b4f,	// (0x000953a5) list_double_large_graphic_phob2_pane_g1

0x9b5c,	// (0x000953b2) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9b5c,	// (0x000953b2) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfea6,	// (0x0009b6fc) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfea6,	// (0x0009b6fc) list_double_large_graphic_phob2_pane_g

0x9b68,	// (0x000953be) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9b68,	// (0x000953be) list_double_large_graphic_phob2_pane_t1

0x9b7d,	// (0x000953d3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9b7d,	// (0x000953d3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeab,	// (0x0009b701) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeab,	// (0x0009b701) list_double_large_graphic_phob2_pane_t

0x0d78,	// (0x0008c5ce) list_highlight_pane_cp024

0xd668,	// (0x00098ebe) phob2_cc_button_pane

0x9b8f,	// (0x000953e5) phob2_cc_data_pane_g1_ParamLimits

0x9b8f,	// (0x000953e5) phob2_cc_data_pane_g1

0x9ba5,	// (0x000953fb) phob2_cc_data_pane_g2_ParamLimits

0x9ba5,	// (0x000953fb) phob2_cc_data_pane_g2

0x0001,

0xfeb0,	// (0x0009b706) phob2_cc_data_pane_g_ParamLimits

0xfeb0,	// (0x0009b706) phob2_cc_data_pane_g

0x9bb9,	// (0x0009540f) phob2_cc_data_pane_t1_ParamLimits

0x9bb9,	// (0x0009540f) phob2_cc_data_pane_t1

0x9bd3,	// (0x00095429) phob2_cc_data_pane_t2_ParamLimits

0x9bd3,	// (0x00095429) phob2_cc_data_pane_t2

0x9bed,	// (0x00095443) phob2_cc_data_pane_t3_ParamLimits

0x9bed,	// (0x00095443) phob2_cc_data_pane_t3

0x0002,

0xfeb5,	// (0x0009b70b) phob2_cc_data_pane_t_ParamLimits

0xfeb5,	// (0x0009b70b) phob2_cc_data_pane_t

0xd670,	// (0x00098ec6) phob2_cc_list_pane_ParamLimits

0xd670,	// (0x00098ec6) phob2_cc_list_pane

0xba30,	// (0x00097286) scroll_pane_cp035_ParamLimits

0xba30,	// (0x00097286) scroll_pane_cp035

0xf062,	// (0x0009a8b8) bg_button_pane_cp033

0xd67c,	// (0x00098ed2) phob2_cc_button_pane_g1

0xd688,	// (0x00098ede) phob2_cc_button_pane_t1

0xd69d,	// (0x00098ef3) phob2_cc_button_pane_t2

0x0001,

0xfebc,	// (0x0009b712) phob2_cc_button_pane_t

0x9c07,	// (0x0009545d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9c07,	// (0x0009545d) list_double_large_graphic_phob2_cc_pane

0x9c1c,	// (0x00095472) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9c1c,	// (0x00095472) list_double_large_graphic_phob2_cc_pane_g1

0x9c28,	// (0x0009547e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9c28,	// (0x0009547e) list_double_large_graphic_phob2_cc_pane_g2

0x9c34,	// (0x0009548a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9c34,	// (0x0009548a) list_double_large_graphic_phob2_cc_pane_g3

0x9c40,	// (0x00095496) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9c40,	// (0x00095496) list_double_large_graphic_phob2_cc_pane_g4

0x9c4c,	// (0x000954a2) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9c4c,	// (0x000954a2) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfec1,	// (0x0009b717) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfec1,	// (0x0009b717) list_double_large_graphic_phob2_cc_pane_g

0x9c58,	// (0x000954ae) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9c58,	// (0x000954ae) list_double_large_graphic_phob2_cc_pane_t1

0x9c81,	// (0x000954d7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9c81,	// (0x000954d7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfecc,	// (0x0009b722) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfecc,	// (0x0009b722) list_double_large_graphic_phob2_cc_pane_t

0xd6af,	// (0x00098f05) list_highlight_pane_cp025_ParamLimits

0xd6af,	// (0x00098f05) list_highlight_pane_cp025

0xf062,	// (0x0009a8b8) bg_button_pane_cp033_ParamLimits

0xd67c,	// (0x00098ed2) phob2_cc_button_pane_g1_ParamLimits

0xd688,	// (0x00098ede) phob2_cc_button_pane_t1_ParamLimits

0xd69d,	// (0x00098ef3) phob2_cc_button_pane_t2_ParamLimits

0xfebc,	// (0x0009b712) phob2_cc_button_pane_t_ParamLimits

0x0ff6,	// (0x0008c84c) popup_wgtman_window

0xb847,	// (0x0009709d) scroll_pane_cp038

0x972f,	// (0x00094f85) wgtman_btn_pane_cp_01_ParamLimits

0x972f,	// (0x00094f85) wgtman_btn_pane_cp_01

0xd6bd,	// (0x00098f13) wgtman_content_pane

0xd6c6,	// (0x00098f1c) wgtman_heading_pane

0x0d78,	// (0x0008c5ce) bg_heading_pane_cp02

0xd6cf,	// (0x00098f25) wgtman_heading_pane_g1

0xd6d7,	// (0x00098f2d) wgtman_heading_pane_t1

0xd6e5,	// (0x00098f3b) scroll_pane_cp036

0xd6ed,	// (0x00098f43) wgtman_list_pane

0xc85d,	// (0x000980b3) wgtman_list_pane_t1_ParamLimits

0xc85d,	// (0x000980b3) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
