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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0004926b };

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
0x4298,	// (0x0004d503) Screen

0x42a4,	// (0x0004d50f) application_window

0x430a,	// (0x0004d575) area_bottom_pane_ParamLimits

0x430a,	// (0x0004d575) area_bottom_pane

0x4363,	// (0x0004d5ce) area_top_pane_ParamLimits

0x4363,	// (0x0004d5ce) area_top_pane

0x43c7,	// (0x0004d632) call_video_uplink_pane_ParamLimits

0x43c7,	// (0x0004d632) call_video_uplink_pane

0x4405,	// (0x0004d670) main_pane_ParamLimits

0x4405,	// (0x0004d670) main_pane

0xea3a,	// (0x00057ca5) context_pane

0x7fc5,	// (0x00051230) navi_pane

0x7fe5,	// (0x00051250) popup_cale_events_window_ParamLimits

0x7fe5,	// (0x00051250) popup_cale_events_window

0xea4d,	// (0x00057cb8) popup_mup_playback_window

0x7ffd,	// (0x00051268) signal_pane

0x5039,	// (0x0004e2a4) main_browser_pane

0xd5e0,	// (0x0005684b) main_burst_pane

0x7e9b,	// (0x00051106) main_calc_pane

0xd5e0,	// (0x0005684b) main_cale_day_pane

0x5039,	// (0x0004e2a4) main_cale_month_pane

0xd5e0,	// (0x0005684b) main_cale_week_pane

0xd5e0,	// (0x0005684b) main_call_pane

0x4a3c,	// (0x0004dca7) main_call_poc_pane

0xd5e0,	// (0x0005684b) main_camera_pane

0xd5e0,	// (0x0005684b) main_chi_dic_pane

0xd46f,	// (0x000566da) main_clock_pane

0x4a3c,	// (0x0004dca7) main_fmradio_pane

0xd5e0,	// (0x0005684b) main_graph_messa_pane

0x4a3c,	// (0x0004dca7) main_help_pane

0x5039,	// (0x0004e2a4) main_im_pane

0x4c97,	// (0x0004df02) main_image_pane_ParamLimits

0x4c97,	// (0x0004df02) main_image_pane

0x4a3c,	// (0x0004dca7) main_location2_pane

0xd5e0,	// (0x0005684b) main_location_pane

0x4a3c,	// (0x0004dca7) main_messa_pane

0x4a3c,	// (0x0004dca7) main_mp2_pane

0xd5e0,	// (0x0005684b) main_mp_pane

0x4a3c,	// (0x0004dca7) main_msg_pane

0x4a3c,	// (0x0004dca7) main_mup_eq_pane

0x4a3c,	// (0x0004dca7) main_mup_pane

0xd5e0,	// (0x0005684b) main_notes_pane

0x4a3c,	// (0x0004dca7) main_pec_pane

0x4a3c,	// (0x0004dca7) main_phob_pane

0x4a3c,	// (0x0004dca7) main_pinb_pane

0x4a3c,	// (0x0004dca7) main_postcard_pane

0x4a3c,	// (0x0004dca7) main_qdial_pane

0xd5e0,	// (0x0005684b) main_skin_pane

0x4a3c,	// (0x0004dca7) main_smil2_pane

0xd5e0,	// (0x0005684b) main_smil_pane

0xd5e0,	// (0x0005684b) main_video_pane

0xd5e0,	// (0x0005684b) main_video_tele_pane

0x4c97,	// (0x0004df02) main_viewer_pane_ParamLimits

0x4c97,	// (0x0004df02) main_viewer_pane

0xd5e0,	// (0x0005684b) main_vorec_pane

0x7ed1,	// (0x0005113c) popup_blid_sat_info_window_ParamLimits

0x7ed1,	// (0x0005113c) popup_blid_sat_info_window

0x7ee7,	// (0x00051152) popup_dyc_status_message_window_ParamLimits

0x7ee7,	// (0x00051152) popup_dyc_status_message_window

0x7ef5,	// (0x00051160) popup_grid_large_graphic_window_ParamLimits

0x7ef5,	// (0x00051160) popup_grid_large_graphic_window

0x7f69,	// (0x000511d4) popup_loc_request_window_ParamLimits

0x7f69,	// (0x000511d4) popup_loc_request_window

0x7f9d,	// (0x00051208) popup_wml_address_window_ParamLimits

0x7f9d,	// (0x00051208) popup_wml_address_window

0x7d73,	// (0x00050fde) call_muted_g1

0x7a2a,	// (0x00050c95) popup_call_audio_conf_window_ParamLimits

0x7a2a,	// (0x00050c95) popup_call_audio_conf_window

0x7d83,	// (0x00050fee) popup_call_audio_first_window_ParamLimits

0x7d83,	// (0x00050fee) popup_call_audio_first_window

0x7dc3,	// (0x0005102e) popup_call_audio_in_window_ParamLimits

0x7dc3,	// (0x0005102e) popup_call_audio_in_window

0x7de7,	// (0x00051052) popup_call_audio_out_window_ParamLimits

0x7de7,	// (0x00051052) popup_call_audio_out_window

0x7e09,	// (0x00051074) popup_call_audio_second_window_ParamLimits

0x7e09,	// (0x00051074) popup_call_audio_second_window

0x7e39,	// (0x000510a4) popup_call_audio_wait_window_ParamLimits

0x7e39,	// (0x000510a4) popup_call_audio_wait_window

0x7e5a,	// (0x000510c5) popup_number_entry_window_ParamLimits

0x7e5a,	// (0x000510c5) popup_number_entry_window

0x45c8,	// (0x0004d833) bg_popup_call_pane_cp05_ParamLimits

0x45c8,	// (0x0004d833) bg_popup_call_pane_cp05

0x45e8,	// (0x0004d853) popup_number_entry_window_t1

0x45fb,	// (0x0004d866) popup_number_entry_window_t2

0x460d,	// (0x0004d878) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x00058366) popup_number_entry_window_t

0x465e,	// (0x0004d8c9) text_title_cp2

0x4671,	// (0x0004d8dc) bg_popup_call_pane_cp_ParamLimits

0x4671,	// (0x0004d8dc) bg_popup_call_pane_cp

0x467f,	// (0x0004d8ea) call_thumbnail_pane

0x4687,	// (0x0004d8f2) popup_call_audio_in_window_g1_ParamLimits

0x4687,	// (0x0004d8f2) popup_call_audio_in_window_g1

0x4693,	// (0x0004d8fe) popup_call_audio_in_window_g2_ParamLimits

0x4693,	// (0x0004d8fe) popup_call_audio_in_window_g2

0x469f,	// (0x0004d90a) popup_call_audio_in_window_g3_ParamLimits

0x469f,	// (0x0004d90a) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x0005836f) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x0005836f) popup_call_audio_in_window_g

0x46ab,	// (0x0004d916) popup_call_audio_in_window_t1_ParamLimits

0x46ab,	// (0x0004d916) popup_call_audio_in_window_t1

0x46c6,	// (0x0004d931) popup_call_audio_in_window_t2_ParamLimits

0x46c6,	// (0x0004d931) popup_call_audio_in_window_t2

0x46e1,	// (0x0004d94c) popup_call_audio_in_window_t3_ParamLimits

0x46e1,	// (0x0004d94c) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x00058376) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x00058376) popup_call_audio_in_window_t

0x4671,	// (0x0004d8dc) bg_popup_call_pane_cp01_ParamLimits

0x4671,	// (0x0004d8dc) bg_popup_call_pane_cp01

0x467f,	// (0x0004d8ea) call_thumbnail_pane_cp02

0x46f4,	// (0x0004d95f) call_type_pane_cp022

0x46fc,	// (0x0004d967) popup_call_audio_out_window_g1_ParamLimits

0x46fc,	// (0x0004d967) popup_call_audio_out_window_g1

0x470e,	// (0x0004d979) popup_call_audio_out_window_g2_ParamLimits

0x470e,	// (0x0004d979) popup_call_audio_out_window_g2

0x471a,	// (0x0004d985) popup_call_audio_out_window_g3_ParamLimits

0x471a,	// (0x0004d985) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x0005837d) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x0005837d) popup_call_audio_out_window_g

0x472c,	// (0x0004d997) popup_call_audio_out_window_t1_ParamLimits

0x472c,	// (0x0004d997) popup_call_audio_out_window_t1

0x4744,	// (0x0004d9af) popup_call_audio_out_window_t2_ParamLimits

0x4744,	// (0x0004d9af) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x00058384) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x00058384) popup_call_audio_out_window_t

0x4759,	// (0x0004d9c4) bg_popup_call_pane_ParamLimits

0x4759,	// (0x0004d9c4) bg_popup_call_pane

0x47dd,	// (0x0004da48) call_thumbnail_pane_cp_ParamLimits

0x47dd,	// (0x0004da48) call_thumbnail_pane_cp

0x4801,	// (0x0004da6c) call_type_pane_cp01_ParamLimits

0x4801,	// (0x0004da6c) call_type_pane_cp01

0x4845,	// (0x0004dab0) popup_call_audio_first_window_g1_ParamLimits

0x4845,	// (0x0004dab0) popup_call_audio_first_window_g1

0x4891,	// (0x0004dafc) popup_call_audio_first_window_g2_ParamLimits

0x4891,	// (0x0004dafc) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x00058389) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x00058389) popup_call_audio_first_window_g

0x48d5,	// (0x0004db40) popup_call_audio_first_window_t1_ParamLimits

0x48d5,	// (0x0004db40) popup_call_audio_first_window_t1

0x4981,	// (0x0004dbec) popup_call_audio_first_window_t4_ParamLimits

0x4981,	// (0x0004dbec) popup_call_audio_first_window_t4

0x4a0d,	// (0x0004dc78) popup_call_audio_first_window_t5_ParamLimits

0x4a0d,	// (0x0004dc78) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x0005838e) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x0005838e) popup_call_audio_first_window_t

0x4a3c,	// (0x0004dca7) bg_popup_call_pane_cp02

0x4a46,	// (0x0004dcb1) call_type_pane_cp023

0x4a4e,	// (0x0004dcb9) popup_call_audio_wait_window_g1

0x4a56,	// (0x0004dcc1) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00058395) popup_call_audio_wait_window_g

0x4a5e,	// (0x0004dcc9) popup_call_audio_wait_window_t3

0x4a6c,	// (0x0004dcd7) bg_popup_call_pane_cp03_ParamLimits

0x4a6c,	// (0x0004dcd7) bg_popup_call_pane_cp03

0x4acc,	// (0x0004dd37) call_thumbnail_pane_cp011_ParamLimits

0x4acc,	// (0x0004dd37) call_thumbnail_pane_cp011

0x4ad8,	// (0x0004dd43) call_type_pane_cp034_ParamLimits

0x4ad8,	// (0x0004dd43) call_type_pane_cp034

0x4b14,	// (0x0004dd7f) popup_call_audio_second_window_g1_ParamLimits

0x4b14,	// (0x0004dd7f) popup_call_audio_second_window_g1

0x4b50,	// (0x0004ddbb) popup_call_audio_second_window_g2_ParamLimits

0x4b50,	// (0x0004ddbb) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x0005839a) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x0005839a) popup_call_audio_second_window_g

0x4b8c,	// (0x0004ddf7) popup_call_audio_second_window_t1_ParamLimits

0x4b8c,	// (0x0004ddf7) popup_call_audio_second_window_t1

0x4c0d,	// (0x0004de78) popup_call_audio_second_window_t2_ParamLimits

0x4c0d,	// (0x0004de78) popup_call_audio_second_window_t2

0x4c43,	// (0x0004deae) popup_call_audio_second_window_t3_ParamLimits

0x4c43,	// (0x0004deae) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x0005839f) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x0005839f) popup_call_audio_second_window_t

0x4a3c,	// (0x0004dca7) bg_popup_call_pane_cp04

0x4c79,	// (0x0004dee4) list_conf_pane

0x4c81,	// (0x0004deec) popup_call_audio_conf_window_t1

0x4c8f,	// (0x0004defa) call_thumbnail_pane_g1

0x4c97,	// (0x0004df02) bg_pinb_pane_ParamLimits

0x4c97,	// (0x0004df02) bg_pinb_pane

0x4ca5,	// (0x0004df10) find_pinb_pane

0x4cae,	// (0x0004df19) listscroll_pinb_pane_ParamLimits

0x4cae,	// (0x0004df19) listscroll_pinb_pane

0x4cbd,	// (0x0004df28) pinb_bg_pane_g1

0x4cc7,	// (0x0004df32) pinb_bg_pane_g2

0x4cd3,	// (0x0004df3e) pinb_bg_pane_g3

0x4cdf,	// (0x0004df4a) pinb_bg_pane_g4

0x4ceb,	// (0x0004df56) pinb_bg_pane_g5

0x4cf7,	// (0x0004df62) pinb_bg_pane_g6

0x4d02,	// (0x0004df6d) pinb_bg_pane_g7

0x4d0d,	// (0x0004df78) pinb_bg_pane_g8

0x4d18,	// (0x0004df83) pinb_bg_pane_g9

0x4d22,	// (0x0004df8d) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x000583a6) pinb_bg_pane_g

0x4d3f,	// (0x0004dfaa) grid_pinb_pane

0x4d4a,	// (0x0004dfb5) list_pinb_pane

0x4d55,	// (0x0004dfc0) scroll_pane_cp01_ParamLimits

0x4d55,	// (0x0004dfc0) scroll_pane_cp01

0x4d67,	// (0x0004dfd2) find_pinb_pane_g1_ParamLimits

0x4d67,	// (0x0004dfd2) find_pinb_pane_g1

0x4d7f,	// (0x0004dfea) find_pinb_pane_t1

0x4d91,	// (0x0004dffc) find_pinb_pane_t2

0x0001,

0xf155,	// (0x000583c0) find_pinb_pane_t

0x4da6,	// (0x0004e011) input_focus_pane_cp01_ParamLimits

0x4da6,	// (0x0004e011) input_focus_pane_cp01

0x4db2,	// (0x0004e01d) cell_pinb_pane_ParamLimits

0x4db2,	// (0x0004e01d) cell_pinb_pane

0x4de0,	// (0x0004e04b) cell_pinb_pane_g1_ParamLimits

0x4de0,	// (0x0004e04b) cell_pinb_pane_g1

0x4df5,	// (0x0004e060) cell_pinb_pane_g2_ParamLimits

0x4df5,	// (0x0004e060) cell_pinb_pane_g2

0x4e01,	// (0x0004e06c) cell_pinb_pane_g3_ParamLimits

0x4e01,	// (0x0004e06c) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x000583c5) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x000583c5) cell_pinb_pane_g

0x4a3c,	// (0x0004dca7) grid_highlight_pane_cp01

0x4e0d,	// (0x0004e078) list_pinb_item_pane_ParamLimits

0x4e0d,	// (0x0004e078) list_pinb_item_pane

0x4a3c,	// (0x0004dca7) list_highlight_pane_cp02

0x4e37,	// (0x0004e0a2) list_pinb_item_pane_g1_ParamLimits

0x4e37,	// (0x0004e0a2) list_pinb_item_pane_g1

0x4e44,	// (0x0004e0af) list_pinb_item_pane_g2_ParamLimits

0x4e44,	// (0x0004e0af) list_pinb_item_pane_g2

0x4e50,	// (0x0004e0bb) list_pinb_item_pane_g3_ParamLimits

0x4e50,	// (0x0004e0bb) list_pinb_item_pane_g3

0x4e61,	// (0x0004e0cc) list_pinb_item_pane_g4_ParamLimits

0x4e61,	// (0x0004e0cc) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x000583cc) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x000583cc) list_pinb_item_pane_g

0x4e6d,	// (0x0004e0d8) list_pinb_item_pane_t1_ParamLimits

0x4e6d,	// (0x0004e0d8) list_pinb_item_pane_t1

0x4e9e,	// (0x0004e109) calc_display_pane

0x4ebc,	// (0x0004e127) calc_paper_pane

0x4ed8,	// (0x0004e143) grid_calc_pane

0x4a3c,	// (0x0004dca7) bg_list_pane_cp01

0x4f04,	// (0x0004e16f) clock_g1

0x4f0c,	// (0x0004e177) clock_g2

0x0001,

0xf16a,	// (0x000583d5) clock_g

0x4f16,	// (0x0004e181) clock_t1_ParamLimits

0x4f16,	// (0x0004e181) clock_t1

0x4f2b,	// (0x0004e196) clock_t2_ParamLimits

0x4f2b,	// (0x0004e196) clock_t2

0x4f3d,	// (0x0004e1a8) clock_t3_ParamLimits

0x4f3d,	// (0x0004e1a8) clock_t3

0x4f4f,	// (0x0004e1ba) clock_t4_ParamLimits

0x4f4f,	// (0x0004e1ba) clock_t4

0x4f61,	// (0x0004e1cc) clock_t5_ParamLimits

0x4f61,	// (0x0004e1cc) clock_t5

0x4f76,	// (0x0004e1e1) clock_t6_ParamLimits

0x4f76,	// (0x0004e1e1) clock_t6

0x4f88,	// (0x0004e1f3) clock_t7_ParamLimits

0x4f88,	// (0x0004e1f3) clock_t7

0x4f9a,	// (0x0004e205) clock_t8_ParamLimits

0x4f9a,	// (0x0004e205) clock_t8

0x4fb0,	// (0x0004e21b) clock_t9_ParamLimits

0x4fb0,	// (0x0004e21b) clock_t9

0x0008,

0xf16f,	// (0x000583da) clock_t_ParamLimits

0xf16f,	// (0x000583da) clock_t

0x4fc6,	// (0x0004e231) popup_clock_analogue_window_cp02

0x4fc6,	// (0x0004e231) popup_clock_digital_window_cp01

0x4fce,	// (0x0004e239) listscroll_help_pane

0x4a3c,	// (0x0004dca7) phob_pre_status_pane

0x4fd8,	// (0x0004e243) grid_qdial_pane

0x4a3c,	// (0x0004dca7) listscroll_mce_pane

0x4fe2,	// (0x0004e24d) bg_notes_pane

0x4fec,	// (0x0004e257) list_notes_pane

0x4ff6,	// (0x0004e261) scroll_pane_cp06

0x5001,	// (0x0004e26c) bg_calc_paper_pane

0x501f,	// (0x0004e28a) list_calc_pane

0x5039,	// (0x0004e2a4) bg_calc_display_pane

0x5045,	// (0x0004e2b0) calc_display_pane_t1

0x505a,	// (0x0004e2c5) calc_display_pane_t2

0x506f,	// (0x0004e2da) calc_display_pane_t3

0x0002,

0xf182,	// (0x000583ed) calc_display_pane_t

0x5081,	// (0x0004e2ec) cell_calc_pane_ParamLimits

0x5081,	// (0x0004e2ec) cell_calc_pane

0x50ae,	// (0x0004e319) bg_calc_paper_pane_g1

0x50ba,	// (0x0004e325) bg_calc_paper_pane_g2

0x50c6,	// (0x0004e331) bg_calc_paper_pane_g3

0x50d2,	// (0x0004e33d) bg_calc_paper_pane_g4

0x50de,	// (0x0004e349) bg_calc_paper_pane_g5

0x50ea,	// (0x0004e355) bg_calc_paper_pane_g6

0x50fb,	// (0x0004e366) bg_calc_paper_pane_g7

0x510c,	// (0x0004e377) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x000583f4) bg_calc_paper_pane_g

0x511d,	// (0x0004e388) calc_bg_paper_pane_g9

0x512e,	// (0x0004e399) list_calc_item_pane_ParamLimits

0x512e,	// (0x0004e399) list_calc_item_pane

0x5168,	// (0x0004e3d3) list_calc_item_pane_g1

0x5175,	// (0x0004e3e0) list_calc_item_pane_t1_ParamLimits

0x5175,	// (0x0004e3e0) list_calc_item_pane_t1

0x5187,	// (0x0004e3f2) list_calc_item_pane_t2_ParamLimits

0x5187,	// (0x0004e3f2) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00058405) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00058405) list_calc_item_pane_t

0x519f,	// (0x0004e40a) cell_calc_pane_g1

0x51c1,	// (0x0004e42c) grid_highlight_pane_cp02

0x51e3,	// (0x0004e44e) bg_calc_display_pane_g1

0x51ec,	// (0x0004e457) bg_calc_display_pane_g2

0x51f6,	// (0x0004e461) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x0005840f) bg_calc_display_pane_g

0x51ff,	// (0x0004e46a) cell_qdial_pane_ParamLimits

0x51ff,	// (0x0004e46a) cell_qdial_pane

0x5213,	// (0x0004e47e) cell_qdial_pane_g1_ParamLimits

0x5213,	// (0x0004e47e) cell_qdial_pane_g1

0x5220,	// (0x0004e48b) cell_qdial_pane_g2_ParamLimits

0x5220,	// (0x0004e48b) cell_qdial_pane_g2

0x5231,	// (0x0004e49c) cell_qdial_pane_g3_ParamLimits

0x5231,	// (0x0004e49c) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x00058416) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x00058416) cell_qdial_pane_g

0x524a,	// (0x0004e4b5) cell_qdial_pane_t1_ParamLimits

0x524a,	// (0x0004e4b5) cell_qdial_pane_t1

0x5262,	// (0x0004e4cd) cell_qdial_pane_t2_ParamLimits

0x5262,	// (0x0004e4cd) cell_qdial_pane_t2

0x5275,	// (0x0004e4e0) cell_qdial_pane_t3_ParamLimits

0x5275,	// (0x0004e4e0) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x0005841f) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x0005841f) cell_qdial_pane_t

0x4a3c,	// (0x0004dca7) grid_highlight_pane_cp04

0x5288,	// (0x0004e4f3) thumbnail_qdial_pane_ParamLimits

0x5288,	// (0x0004e4f3) thumbnail_qdial_pane

0x52e4,	// (0x0004e54f) list_help_pane

0x52ed,	// (0x0004e558) scroll_pane_cp02

0x52f6,	// (0x0004e561) help_list_pane_t1_ParamLimits

0x52f6,	// (0x0004e561) help_list_pane_t1

0x5334,	// (0x0004e59f) bg_notes_pane_g2

0x533c,	// (0x0004e5a7) bg_notes_pane_g3

0x5344,	// (0x0004e5af) notes_bg_pane_g1

0x534c,	// (0x0004e5b7) notes_bg_pane_g4

0x5354,	// (0x0004e5bf) notes_bg_pane_g5

0x535c,	// (0x0004e5c7) notes_bg_pane_g6

0x5364,	// (0x0004e5cf) notes_bg_pane_g7

0x536c,	// (0x0004e5d7) notes_bg_pane_g8

0x5374,	// (0x0004e5df) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x0005843d) notes_bg_pane_g

0x537c,	// (0x0004e5e7) list_notes_text_pane_ParamLimits

0x537c,	// (0x0004e5e7) list_notes_text_pane

0x53ac,	// (0x0004e617) list_notes_text_pane_g1

0x53b5,	// (0x0004e620) list_notes_text_pane_t1

0x5039,	// (0x0004e2a4) listscroll_cale_week_pane

0x53f1,	// (0x0004e65c) bg_cale_heading_pane

0x5405,	// (0x0004e670) bg_cale_pane_cp01

0x541e,	// (0x0004e689) cale_week_corner_pane

0x542f,	// (0x0004e69a) cale_week_day_heading_pane

0x5443,	// (0x0004e6ae) cale_week_scroll_pane_g1

0x5454,	// (0x0004e6bf) cale_week_scroll_pane_g2

0x5465,	// (0x0004e6d0) cale_week_scroll_pane_g3

0x5476,	// (0x0004e6e1) cale_week_scroll_pane_g4

0x5487,	// (0x0004e6f2) cale_week_scroll_pane_g5

0x5498,	// (0x0004e703) cale_week_scroll_pane_g6

0x54a9,	// (0x0004e714) cale_week_scroll_pane_g7

0x54bc,	// (0x0004e727) cale_week_scroll_pane_g8

0x54cf,	// (0x0004e73a) cale_week_scroll_pane_g9

0x54e0,	// (0x0004e74b) cale_week_scroll_pane_g10

0x54f1,	// (0x0004e75c) cale_week_scroll_pane_g11

0x5502,	// (0x0004e76d) cale_week_scroll_pane_g12

0x5513,	// (0x0004e77e) cale_week_scroll_pane_g13

0x5524,	// (0x0004e78f) cale_week_scroll_pane_g14

0x5535,	// (0x0004e7a0) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x0005844c) cale_week_scroll_pane_g

0x5546,	// (0x0004e7b1) cale_week_time_pane

0x5559,	// (0x0004e7c4) grid_cale_week_pane

0x5580,	// (0x0004e7eb) scroll_pane_cp08

0x559a,	// (0x0004e805) cell_cale_week_pane_ParamLimits

0x559a,	// (0x0004e805) cell_cale_week_pane

0x55d6,	// (0x0004e841) cale_week_day_heading_pane_t1

0x55ea,	// (0x0004e855) cale_week_day_heading_pane_t2

0x55fe,	// (0x0004e869) cale_week_day_heading_pane_t3

0x5612,	// (0x0004e87d) cale_week_day_heading_pane_t4

0x5626,	// (0x0004e891) cale_week_day_heading_pane_t5

0x563a,	// (0x0004e8a5) cale_week_day_heading_pane_t6

0x564e,	// (0x0004e8b9) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x0005846b) cale_week_day_heading_pane_t

0x5662,	// (0x0004e8cd) bg_cale_side_pane

0x5670,	// (0x0004e8db) cale_week_time_pane_t1

0x5688,	// (0x0004e8f3) cale_week_time_pane_t2

0x56a0,	// (0x0004e90b) cale_week_time_pane_t3

0x56b8,	// (0x0004e923) cale_week_time_pane_t4

0x56d0,	// (0x0004e93b) cale_week_time_pane_t5

0x56e8,	// (0x0004e953) cale_week_time_pane_t6

0x5700,	// (0x0004e96b) cale_week_time_pane_t7

0x5718,	// (0x0004e983) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x0005847a) cale_week_time_pane_t

0x5730,	// (0x0004e99b) cell_cale_week_pane_g2

0x5749,	// (0x0004e9b4) cell_cale_week_pane_g3_ParamLimits

0x5749,	// (0x0004e9b4) cell_cale_week_pane_g3

0x5761,	// (0x0004e9cc) grid_highlight_pane_cp07

0x5769,	// (0x0004e9d4) listscroll_gms_pane

0x5773,	// (0x0004e9de) grid_gms_pane

0x577c,	// (0x0004e9e7) listscroll_gms_pane_g1

0x5784,	// (0x0004e9ef) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x0005848b) listscroll_gms_pane_g

0x578c,	// (0x0004e9f7) scroll_pane_cp010

0x5797,	// (0x0004ea02) cell_gms_pane_ParamLimits

0x5797,	// (0x0004ea02) cell_gms_pane

0x57a9,	// (0x0004ea14) cell_gms_pane_g1

0x57b1,	// (0x0004ea1c) cell_gms_pane_g2

0x53ac,	// (0x0004e617) cell_gms_pane_g3

0x57b9,	// (0x0004ea24) cell_gms_pane_g4

0x0003,

0xf225,	// (0x00058490) cell_gms_pane_g

0x57c2,	// (0x0004ea2d) grid_highlight_pane_cp09

0x7d1b,	// (0x00050f86) phob_pre_status_pane_g1

0x7d23,	// (0x00050f8e) phob_pre_status_pane_g2

0x7d2b,	// (0x00050f96) phob_pre_status_pane_g3

0x7d33,	// (0x00050f9e) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x0005887f) phob_pre_status_pane_g

0x7d43,	// (0x00050fae) phob_pre_status_pane_t1

0x7d53,	// (0x00050fbe) phob_pre_status_pane_t2

0x7d63,	// (0x00050fce) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x0005888a) phob_pre_status_pane_t

0x4a3c,	// (0x0004dca7) bg_list_pane_cp05

0x57d2,	// (0x0004ea3d) grid_vorec_pane

0x57da,	// (0x0004ea45) vorec_t1

0x57e8,	// (0x0004ea53) vorec_t2

0x57f6,	// (0x0004ea61) vorec_t3

0x5804,	// (0x0004ea6f) vorec_t4

0x5812,	// (0x0004ea7d) vorec_t5

0x5820,	// (0x0004ea8b) vorec_t6

0x0006,

0xf22e,	// (0x00058499) vorec_t

0x583c,	// (0x0004eaa7) wait_bar_pane_cp01

0x5844,	// (0x0004eaaf) cell_vorec_pane_ParamLimits

0x5844,	// (0x0004eaaf) cell_vorec_pane

0x5857,	// (0x0004eac2) cell_vorec_pane_g1

0x4a3c,	// (0x0004dca7) grid_highlight_pane_cp05

0x5871,	// (0x0004eadc) cams_zoom_pane

0x587d,	// (0x0004eae8) image_vga_pane

0x588c,	// (0x0004eaf7) main_camera_pane_g1

0x589a,	// (0x0004eb05) main_camera_pane_g2

0x58a8,	// (0x0004eb13) main_camera_pane_g3

0x58b4,	// (0x0004eb1f) main_camera_pane_g4

0x58c0,	// (0x0004eb2b) main_camera_pane_g5

0x58cc,	// (0x0004eb37) main_camera_pane_g6

0x58d8,	// (0x0004eb43) main_camera_pane_g7

0x0007,

0xf23d,	// (0x000584a8) main_camera_pane_g

0x58f0,	// (0x0004eb5b) main_camera_pane_t1

0x5902,	// (0x0004eb6d) main_camera_pane_t2

0x0001,

0xf24e,	// (0x000584b9) main_camera_pane_t

0x5923,	// (0x0004eb8e) cams_zoom_pane_cp_ParamLimits

0x5923,	// (0x0004eb8e) cams_zoom_pane_cp

0x5947,	// (0x0004ebb2) image_cif_pane_ParamLimits

0x5947,	// (0x0004ebb2) image_cif_pane

0x5965,	// (0x0004ebd0) image_subqcif_pane

0x596d,	// (0x0004ebd8) main_video_pane_g1_ParamLimits

0x596d,	// (0x0004ebd8) main_video_pane_g1

0x598d,	// (0x0004ebf8) main_video_pane_g2_ParamLimits

0x598d,	// (0x0004ebf8) main_video_pane_g2

0x59bf,	// (0x0004ec2a) main_video_pane_g3_ParamLimits

0x59bf,	// (0x0004ec2a) main_video_pane_g3

0x59ea,	// (0x0004ec55) main_video_pane_g4_ParamLimits

0x59ea,	// (0x0004ec55) main_video_pane_g4

0x5a15,	// (0x0004ec80) main_video_pane_g5_ParamLimits

0x5a15,	// (0x0004ec80) main_video_pane_g5

0x5a2d,	// (0x0004ec98) main_video_pane_g6_ParamLimits

0x5a2d,	// (0x0004ec98) main_video_pane_g6

0x0006,

0xf253,	// (0x000584be) main_video_pane_g_ParamLimits

0xf253,	// (0x000584be) main_video_pane_g

0x5a53,	// (0x0004ecbe) main_video_pane_t1_ParamLimits

0x5a53,	// (0x0004ecbe) main_video_pane_t1

0x5a91,	// (0x0004ecfc) cams_zoom_pane_g1

0x5a9a,	// (0x0004ed05) cams_zoom_pane_g2

0x5aa3,	// (0x0004ed0e) cams_zoom_pane_g3

0x5aac,	// (0x0004ed17) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x000584cd) cams_zoom_pane_g

0x5ac1,	// (0x0004ed2c) grid_cams_pane

0x5acf,	// (0x0004ed3a) linegrid_cams_pane

0x5add,	// (0x0004ed48) cell_cams_pane_ParamLimits

0x5add,	// (0x0004ed48) cell_cams_pane

0x5af0,	// (0x0004ed5b) cams_burst_image_pane

0x5af8,	// (0x0004ed63) cell_cams_pane_g1

0x4a3c,	// (0x0004dca7) grid_highlight_pane_cp03

0x519f,	// (0x0004e40a) mp_bg_pane_g1

0x4a3c,	// (0x0004dca7) bg_list_pane_cp03

0xe904,	// (0x00057b6f) bg_mp_pane

0xe90c,	// (0x00057b77) grid_mp_pane

0xe914,	// (0x00057b7f) media_player_g1

0xe91c,	// (0x00057b87) media_player_t1

0xe92a,	// (0x00057b95) media_player_t2

0xe938,	// (0x00057ba3) media_player_t3

0xe946,	// (0x00057bb1) media_player_t4

0xe954,	// (0x00057bbf) media_player_t5

0xe962,	// (0x00057bcd) media_player_t6

0xe970,	// (0x00057bdb) media_player_t7

0x0006,

0xf5fe,	// (0x00058869) media_player_t

0xe97e,	// (0x00057be9) wait_bar_pane_cp02

0xf5e3,	// (0x0005884e) main_usb_pane_t

0x7d12,	// (0x00050f7d) cell_mp_pane

0x519f,	// (0x0004e40a) cell_mp_pane_g1

0x4a3c,	// (0x0004dca7) grid_highlight_pane_cp06

0x5b52,	// (0x0004edbd) grid_skin_colour_pane

0x5b5a,	// (0x0004edc5) list_highlight_pane_cp03

0x5b62,	// (0x0004edcd) skin_g1

0x5b6c,	// (0x0004edd7) skin_t1

0x5b7b,	// (0x0004ede6) skin_t2

0x0001,

0xf297,	// (0x00058502) skin_t

0x5b89,	// (0x0004edf4) cell_skin_colour_pane_ParamLimits

0x5b89,	// (0x0004edf4) cell_skin_colour_pane

0x5ba5,	// (0x0004ee10) cell_skin_colour_pane_g1

0x5bf2,	// (0x0004ee5d) call_video_g1_ParamLimits

0x5bf2,	// (0x0004ee5d) call_video_g1

0x5c02,	// (0x0004ee6d) call_video_g2_ParamLimits

0x5c02,	// (0x0004ee6d) call_video_g2

0x0001,

0xf29c,	// (0x00058507) call_video_g_ParamLimits

0xf29c,	// (0x00058507) call_video_g

0x5c40,	// (0x0004eeab) call_video_uplink_pane_cp1_ParamLimits

0x5c40,	// (0x0004eeab) call_video_uplink_pane_cp1

0x5c8c,	// (0x0004eef7) call_video_uplink_pane_cp2

0x5cf4,	// (0x0004ef5f) video_down_crop_pane_ParamLimits

0x5cf4,	// (0x0004ef5f) video_down_crop_pane

0x5dcc,	// (0x0004f037) video_down_pane_ParamLimits

0x5dcc,	// (0x0004f037) video_down_pane

0x5eae,	// (0x0004f119) video_down_subqcif_pane_ParamLimits

0x5eae,	// (0x0004f119) video_down_subqcif_pane

0x5ec6,	// (0x0004f131) video_down_subqcif_pane_cp_ParamLimits

0x5ec6,	// (0x0004f131) video_down_subqcif_pane_cp

0x5eea,	// (0x0004f155) im_reading_pane_ParamLimits

0x5eea,	// (0x0004f155) im_reading_pane

0x5efc,	// (0x0004f167) im_writing_pane_ParamLimits

0x5efc,	// (0x0004f167) im_writing_pane

0x5f22,	// (0x0004f18d) im_reading_pane_t1

0x5f82,	// (0x0004f1ed) list_im_pane

0x5f93,	// (0x0004f1fe) scroll_pane_cp07

0x5fac,	// (0x0004f217) im_writing_pane_t1_ParamLimits

0x5fac,	// (0x0004f217) im_writing_pane_t1

0x5fbe,	// (0x0004f229) im_writing_pane_t2_ParamLimits

0x5fbe,	// (0x0004f229) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00058511) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00058511) im_writing_pane_t

0x4a3c,	// (0x0004dca7) input_focus_pane_cp04

0x4a3c,	// (0x0004dca7) input_focus_pane_cp05

0x5fdb,	// (0x0004f246) list_im_single_pane_ParamLimits

0x5fdb,	// (0x0004f246) list_im_single_pane

0x6007,	// (0x0004f272) list_single_im_pane_t1

0x7cd6,	// (0x00050f41) blid_accuracy_pane

0x7cde,	// (0x00050f49) blid_compass_pane

0x7ce8,	// (0x00050f53) main_location_t1

0x7cf6,	// (0x00050f61) main_location_t2

0x7d04,	// (0x00050f6f) main_location_t3

0x0002,

0xf60d,	// (0x00058878) main_location_t

0x4a3c,	// (0x0004dca7) aid_levels_location

0x519f,	// (0x0004e40a) blid_accuracy_pane_g1

0x519f,	// (0x0004e40a) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x00058573) blid_accuracy_pane_g

0x6041,	// (0x0004f2ac) wml_content_pane

0x607f,	// (0x0004f2ea) wml_button_pane_ParamLimits

0x607f,	// (0x0004f2ea) wml_button_pane

0x6093,	// (0x0004f2fe) wml_list_single_large_pane_ParamLimits

0x6093,	// (0x0004f2fe) wml_list_single_large_pane

0x60c5,	// (0x0004f330) wml_list_single_medium_pane_ParamLimits

0x60c5,	// (0x0004f330) wml_list_single_medium_pane

0x60fe,	// (0x0004f369) wml_list_single_small_pane_ParamLimits

0x60fe,	// (0x0004f369) wml_list_single_small_pane

0x6146,	// (0x0004f3b1) wml_selection_box_pane_ParamLimits

0x6146,	// (0x0004f3b1) wml_selection_box_pane

0x6159,	// (0x0004f3c4) wml_list_single_pane_t1

0x6168,	// (0x0004f3d3) wml_list_single_medium_pane_t1

0x6177,	// (0x0004f3e2) wml_list_single_large_pane_t1

0x6186,	// (0x0004f3f1) input_focus_pane_cp02_ParamLimits

0x6186,	// (0x0004f3f1) input_focus_pane_cp02

0x6199,	// (0x0004f404) wml_selection_box_pane_g1

0x61a2,	// (0x0004f40d) wml_selection_box_pane_t1_ParamLimits

0x61a2,	// (0x0004f40d) wml_selection_box_pane_t1

0x4c97,	// (0x0004df02) bg_wml_button_pane_ParamLimits

0x4c97,	// (0x0004df02) bg_wml_button_pane

0x61ba,	// (0x0004f425) wml_button_pane_g1

0x61c2,	// (0x0004f42d) wml_button_pane_t1

0x61ba,	// (0x0004f425) wml_button_bg_pane_g1

0x61d2,	// (0x0004f43d) wml_button_bg_pane_g2

0x61da,	// (0x0004f445) wml_button_bg_pane_g3

0x61e2,	// (0x0004f44d) wml_button_bg_pane_g4

0x61ea,	// (0x0004f455) wml_button_bg_pane_g5

0x61f2,	// (0x0004f45d) wml_button_bg_pane_g6

0x61fa,	// (0x0004f465) wml_button_bg_pane_g7

0x6202,	// (0x0004f46d) wml_button_bg_pane_g8

0x620a,	// (0x0004f475) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x00058516) wml_button_bg_pane_g

0x6212,	// (0x0004f47d) bg_list_pane_cp02

0x621c,	// (0x0004f487) mce_header_pane_ParamLimits

0x621c,	// (0x0004f487) mce_header_pane

0x6232,	// (0x0004f49d) mce_icon_pane

0x6232,	// (0x0004f49d) mce_image_pane

0x623b,	// (0x0004f4a6) mce_text_pane_ParamLimits

0x623b,	// (0x0004f4a6) mce_text_pane

0x624e,	// (0x0004f4b9) scroll_pane_cp03

0x6077,	// (0x0004f2e2) scroll_pane_cp04

0xcfd2,	// (0x0005623d) scroll_pane_cp05_ParamLimits

0xcfd2,	// (0x0005623d) scroll_pane_cp05

0x6258,	// (0x0004f4c3) mce_header_field_pane_ParamLimits

0x6258,	// (0x0004f4c3) mce_header_field_pane

0x6278,	// (0x0004f4e3) mce_header_field_pane_2_ParamLimits

0x6278,	// (0x0004f4e3) mce_header_field_pane_2

0x628e,	// (0x0004f4f9) mce_header_field_pane_3

0x6296,	// (0x0004f501) list_single_mce_message_pane_ParamLimits

0x6296,	// (0x0004f501) list_single_mce_message_pane

0x62c6,	// (0x0004f531) list_single_mce_smart_pane_ParamLimits

0x62c6,	// (0x0004f531) list_single_mce_smart_pane

0xcfde,	// (0x00056249) input_focus_pane_cp03

0xcfe7,	// (0x00056252) list_header_data_pane

0x6301,	// (0x0004f56c) mce_header_field_pane_t1

0x6311,	// (0x0004f57c) list_single_mce_header_pane_ParamLimits

0x6311,	// (0x0004f57c) list_single_mce_header_pane

0xcfef,	// (0x0005625a) list_single_mce_header_pane_t1

0xcffe,	// (0x00056269) list_single_mce_message_pane_g1

0xd006,	// (0x00056271) list_single_mce_message_pane_t1

0x6363,	// (0x0004f5ce) bg_cale_heading_pane_cp01_ParamLimits

0x6363,	// (0x0004f5ce) bg_cale_heading_pane_cp01

0xd014,	// (0x0005627f) bg_cale_pane_cp02_ParamLimits

0xd014,	// (0x0005627f) bg_cale_pane_cp02

0x6386,	// (0x0004f5f1) cale_month_corner_pane

0x639c,	// (0x0004f607) cale_month_day_heading_pane_ParamLimits

0x639c,	// (0x0004f607) cale_month_day_heading_pane

0x63cf,	// (0x0004f63a) cale_month_pane_g1_ParamLimits

0x63cf,	// (0x0004f63a) cale_month_pane_g1

0x63eb,	// (0x0004f656) cale_month_pane_g2_ParamLimits

0x63eb,	// (0x0004f656) cale_month_pane_g2

0x6406,	// (0x0004f671) cale_month_pane_g3_ParamLimits

0x6406,	// (0x0004f671) cale_month_pane_g3

0x6432,	// (0x0004f69d) cale_month_pane_g4_ParamLimits

0x6432,	// (0x0004f69d) cale_month_pane_g4

0x645e,	// (0x0004f6c9) cale_month_pane_g5_ParamLimits

0x645e,	// (0x0004f6c9) cale_month_pane_g5

0x648a,	// (0x0004f6f5) cale_month_pane_g6_ParamLimits

0x648a,	// (0x0004f6f5) cale_month_pane_g6

0x64b6,	// (0x0004f721) cale_month_pane_g7_ParamLimits

0x64b6,	// (0x0004f721) cale_month_pane_g7

0x64f2,	// (0x0004f75d) cale_month_pane_g8_ParamLimits

0x64f2,	// (0x0004f75d) cale_month_pane_g8

0x652e,	// (0x0004f799) cale_month_pane_g9_ParamLimits

0x652e,	// (0x0004f799) cale_month_pane_g9

0x6568,	// (0x0004f7d3) cale_month_pane_g10_ParamLimits

0x6568,	// (0x0004f7d3) cale_month_pane_g10

0x65a2,	// (0x0004f80d) cale_month_pane_g11_ParamLimits

0x65a2,	// (0x0004f80d) cale_month_pane_g11

0x65dc,	// (0x0004f847) cale_month_pane_g12_ParamLimits

0x65dc,	// (0x0004f847) cale_month_pane_g12

0x6616,	// (0x0004f881) cale_month_pane_g13_ParamLimits

0x6616,	// (0x0004f881) cale_month_pane_g13

0x000c,

0xf2be,	// (0x00058529) cale_month_pane_g_ParamLimits

0xf2be,	// (0x00058529) cale_month_pane_g

0x6650,	// (0x0004f8bb) cale_month_week_pane

0x6663,	// (0x0004f8ce) grid_cale_month_pane_ParamLimits

0x6663,	// (0x0004f8ce) grid_cale_month_pane

0x6691,	// (0x0004f8fc) cale_month_day_heading_pane_t1

0x66ef,	// (0x0004f95a) cale_month_day_heading_pane_t2

0x6754,	// (0x0004f9bf) cale_month_day_heading_pane_t3

0x67b9,	// (0x0004fa24) cale_month_day_heading_pane_t4

0x681e,	// (0x0004fa89) cale_month_day_heading_pane_t5

0x6883,	// (0x0004faee) cale_month_day_heading_pane_t6

0x68f0,	// (0x0004fb5b) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00058544) cale_month_day_heading_pane_t

0x5662,	// (0x0004e8cd) bg_cale_side_pane_cp01

0x6965,	// (0x0004fbd0) cale_month_week_pane_t1

0x697c,	// (0x0004fbe7) cale_month_week_pane_t2

0x6993,	// (0x0004fbfe) cale_month_week_pane_t3

0x69aa,	// (0x0004fc15) cale_month_week_pane_t4

0x69c1,	// (0x0004fc2c) cale_month_week_pane_t5

0x69d8,	// (0x0004fc43) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x00058553) cale_month_week_pane_t

0x69ef,	// (0x0004fc5a) cell_cale_month_pane_ParamLimits

0x69ef,	// (0x0004fc5a) cell_cale_month_pane

0x6aa5,	// (0x0004fd10) cell_cale_month_pane_g1

0x6ab1,	// (0x0004fd1c) cell_cale_month_pane_t1_ParamLimits

0x6ab1,	// (0x0004fd1c) cell_cale_month_pane_t1

0x5761,	// (0x0004e9cc) grid_highlight_pane_cp08

0x519f,	// (0x0004e40a) main_smil_g1

0x6acd,	// (0x0004fd38) smil_status_pane

0xd049,	// (0x000562b4) smil_text_pane

0xe824,	// (0x00057a8f) bg_popup_call3_rect_pane_g8

0xe82c,	// (0x00057a97) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x0005880c) bg_popup_call3_rect_pane_g

0xeab4,	// (0x00057d1f) smil_status_volume_pane_g1

0xd053,	// (0x000562be) smil_status_pane_t1

0x80ba,	// (0x00051325) volume_smil_pane

0xd06a,	// (0x000562d5) list_smil_text_pane

0x6ae0,	// (0x0004fd4b) scroll_pane_cp011

0x6aeb,	// (0x0004fd56) smil_text_list_pane_t1_ParamLimits

0x6aeb,	// (0x0004fd56) smil_text_list_pane_t1

0x6b96,	// (0x0004fe01) aid_volume_smil_ParamLimits

0x6b96,	// (0x0004fe01) aid_volume_smil

0x519f,	// (0x0004e40a) smil_volume_pane_g1

0x519f,	// (0x0004e40a) smil_volume_pane_g2

0x0001,

0xf308,	// (0x00058573) smil_volume_pane_g

0x5039,	// (0x0004e2a4) listscroll_cale_day_pane

0xd074,	// (0x000562df) bg_cale_pane

0xd08c,	// (0x000562f7) list_cale_pane

0xd09d,	// (0x00056308) scroll_pane_cp09

0xd0ae,	// (0x00056319) cale_bg_pane_g1

0xd0b6,	// (0x00056321) cale_bg_pane_g2

0xd0be,	// (0x00056329) cale_bg_pane_g3

0xd0c6,	// (0x00056331) cale_bg_pane_g4

0xd0ce,	// (0x00056339) cale_bg_pane_g5

0xd0d6,	// (0x00056341) cale_bg_pane_g6

0xd0de,	// (0x00056349) cale_bg_pane_g7

0xd0e6,	// (0x00056351) cale_bg_pane_g8

0xd0ee,	// (0x00056359) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x00058578) cale_bg_pane_g

0x6bb8,	// (0x0004fe23) list_cale_time_pane_ParamLimits

0x6bb8,	// (0x0004fe23) list_cale_time_pane

0x6bd9,	// (0x0004fe44) list_cale_time_pane_g1_ParamLimits

0x6bd9,	// (0x0004fe44) list_cale_time_pane_g1

0xd0f6,	// (0x00056361) list_cale_time_pane_g2_ParamLimits

0xd0f6,	// (0x00056361) list_cale_time_pane_g2

0x6be5,	// (0x0004fe50) list_cale_time_pane_g3_ParamLimits

0x6be5,	// (0x0004fe50) list_cale_time_pane_g3

0x6c01,	// (0x0004fe6c) list_cale_time_pane_g4_ParamLimits

0x6c01,	// (0x0004fe6c) list_cale_time_pane_g4

0x6c0f,	// (0x0004fe7a) list_cale_time_pane_g5_ParamLimits

0x6c0f,	// (0x0004fe7a) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x0005858b) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x0005858b) list_cale_time_pane_g

0x6c1d,	// (0x0004fe88) list_cale_time_pane_t1_ParamLimits

0x6c1d,	// (0x0004fe88) list_cale_time_pane_t1

0x6c45,	// (0x0004feb0) list_cale_time_pane_t2_ParamLimits

0x6c45,	// (0x0004feb0) list_cale_time_pane_t2

0x6f93,	// (0x000501fe) aid_blid_cardinal_pane

0x6fd5,	// (0x00050240) compass_pane_t4

0x6c6d,	// (0x0004fed8) list_cale_time_pane_t4_ParamLimits

0x6c6d,	// (0x0004fed8) list_cale_time_pane_t4

0x6fe3,	// (0x0005024e) compass_pane_t5

0x6ff3,	// (0x0005025e) compass_pane_t6

0x7001,	// (0x0005026c) compass_pane_t7

0xd532,	// (0x0005679d) navi_pane_cc_t1

0xd687,	// (0x000568f2) aid_phob_thumbnail_center_pane

0x77c4,	// (0x00050a2f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x00058598) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x00058598) list_cale_time_pane_t

0x4671,	// (0x0004d8dc) bg_popup_window_pane_cp02_ParamLimits

0x4671,	// (0x0004d8dc) bg_popup_window_pane_cp02

0xd110,	// (0x0005637b) heading_pane_cp01_ParamLimits

0xd110,	// (0x0005637b) heading_pane_cp01

0xd11c,	// (0x00056387) loc_req_pane_ParamLimits

0xd11c,	// (0x00056387) loc_req_pane

0xd12c,	// (0x00056397) loc_type_pane_ParamLimits

0xd12c,	// (0x00056397) loc_type_pane

0xd13e,	// (0x000563a9) loc_type_pane_t1_ParamLimits

0xd13e,	// (0x000563a9) loc_type_pane_t1

0xd150,	// (0x000563bb) loc_type_pane_t2_ParamLimits

0xd150,	// (0x000563bb) loc_type_pane_t2

0xd162,	// (0x000563cd) loc_type_pane_t3_ParamLimits

0xd162,	// (0x000563cd) loc_type_pane_t3

0x0002,

0xf334,	// (0x0005859f) loc_type_pane_t_ParamLimits

0xf334,	// (0x0005859f) loc_type_pane_t

0xd174,	// (0x000563df) list_loc_req_pane

0xd17e,	// (0x000563e9) scroll_pane_cp012

0x6c95,	// (0x0004ff00) list_single_loc_request_popup_menu_pane_ParamLimits

0x6c95,	// (0x0004ff00) list_single_loc_request_popup_menu_pane

0xd189,	// (0x000563f4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xd189,	// (0x000563f4) list_single_loc_request_popup_menu_pane_g1

0xd195,	// (0x00056400) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xd195,	// (0x00056400) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x000585a6) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x000585a6) list_single_loc_request_popup_menu_pane_g

0xd1a1,	// (0x0005640c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xd1a1,	// (0x0005640c) list_single_loc_request_popup_menu_pane_t1

0x6ca7,	// (0x0004ff12) bg_popup_window_pane_cp03_ParamLimits

0x6ca7,	// (0x0004ff12) bg_popup_window_pane_cp03

0x6cb5,	// (0x0004ff20) heading_loc_req_pane_ParamLimits

0x6cb5,	// (0x0004ff20) heading_loc_req_pane

0x6cc1,	// (0x0004ff2c) popup_dyc_status_message_window_g1_ParamLimits

0x6cc1,	// (0x0004ff2c) popup_dyc_status_message_window_g1

0x6ccd,	// (0x0004ff38) popup_dyc_status_message_window_t1_ParamLimits

0x6ccd,	// (0x0004ff38) popup_dyc_status_message_window_t1

0x6cdf,	// (0x0004ff4a) popup_dyc_status_message_window_t2_ParamLimits

0x6cdf,	// (0x0004ff4a) popup_dyc_status_message_window_t2

0x6cf1,	// (0x0004ff5c) popup_dyc_status_message_window_t3_ParamLimits

0x6cf1,	// (0x0004ff5c) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x000585ab) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x000585ab) popup_dyc_status_message_window_t

0x4a3c,	// (0x0004dca7) bg_heading_pane_cp01

0xd1b7,	// (0x00056422) heading_loc_req_pane_g1

0xd1bf,	// (0x0005642a) heading_loc_req_pane_g2

0xd1c7,	// (0x00056432) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x000585b2) heading_loc_req_pane_g

0xd1cf,	// (0x0005643a) heading_loc_req_pane_t1

0xd1de,	// (0x00056449) bg_popup_sub_pane_cp01_ParamLimits

0xd1de,	// (0x00056449) bg_popup_sub_pane_cp01

0xd1ec,	// (0x00056457) popup_cale_events_window_g1_ParamLimits

0xd1ec,	// (0x00056457) popup_cale_events_window_g1

0xd20c,	// (0x00056477) popup_cale_events_window_g2_ParamLimits

0xd20c,	// (0x00056477) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x000585e6) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x000585e6) popup_cale_events_window_g

0xd22c,	// (0x00056497) popup_cale_events_window_t1_ParamLimits

0xd22c,	// (0x00056497) popup_cale_events_window_t1

0xd23e,	// (0x000564a9) popup_cale_events_window_t2_ParamLimits

0xd23e,	// (0x000564a9) popup_cale_events_window_t2

0xd27c,	// (0x000564e7) popup_cale_events_window_t3_ParamLimits

0xd27c,	// (0x000564e7) popup_cale_events_window_t3

0xd2b6,	// (0x00056521) popup_cale_events_window_t4_ParamLimits

0xd2b6,	// (0x00056521) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x000585eb) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x000585eb) popup_cale_events_window_t

0x6d75,	// (0x0004ffe0) call_type_pane

0xd2ec,	// (0x00056557) popup_call_status_window_g1

0x6d81,	// (0x0004ffec) popup_call_status_window_g2

0x6d8d,	// (0x0004fff8) popup_call_status_window_g3

0x0002,

0xf389,	// (0x000585f4) popup_call_status_window_g

0xd2fa,	// (0x00056565) call_type_pane_g1

0xd303,	// (0x0005656e) call_type_pane_g2

0x0001,

0xf390,	// (0x000585fb) call_type_pane_g

0x4a3c,	// (0x0004dca7) bg_popup_sub_pane_cp02

0xd30c,	// (0x00056577) listscroll_popup_wml_pane

0xd314,	// (0x0005657f) list_wml_pane

0xd31e,	// (0x00056589) scroll_pane_cp013

0xd329,	// (0x00056594) list_single_graphic_popup_wml_pane_ParamLimits

0xd329,	// (0x00056594) list_single_graphic_popup_wml_pane

0x519f,	// (0x0004e40a) list_single_graphic_popup_wml_pane_g1

0xd33d,	// (0x000565a8) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00058600) list_single_graphic_popup_wml_pane_g

0xd345,	// (0x000565b0) list_single_graphic_popup_wml_pane_t1

0xd35b,	// (0x000565c6) aid_call_pane

0x4c8f,	// (0x0004defa) popup_clock_analogue_window_g1

0x4c8f,	// (0x0004defa) popup_clock_analogue_window_g2

0x6d99,	// (0x00050004) popup_clock_analogue_window_g3

0x6d99,	// (0x00050004) popup_clock_analogue_window_g4

0x519f,	// (0x0004e40a) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00058605) popup_clock_analogue_window_g

0x6da1,	// (0x0005000c) popup_clock_analogue_window_t1

0x6daf,	// (0x0005001a) clock_digital_number_pane_ParamLimits

0x6daf,	// (0x0005001a) clock_digital_number_pane

0x6dbb,	// (0x00050026) clock_digital_number_pane_cp02_ParamLimits

0x6dbb,	// (0x00050026) clock_digital_number_pane_cp02

0x6dc7,	// (0x00050032) clock_digital_number_pane_cp03_ParamLimits

0x6dc7,	// (0x00050032) clock_digital_number_pane_cp03

0x6dd3,	// (0x0005003e) clock_digital_number_pane_cp04_ParamLimits

0x6dd3,	// (0x0005003e) clock_digital_number_pane_cp04

0x6ddf,	// (0x0005004a) clock_digital_separator_pane_ParamLimits

0x6ddf,	// (0x0005004a) clock_digital_separator_pane

0x6deb,	// (0x00050056) popup_clock_digital_window_t1

0x519f,	// (0x0004e40a) clock_digital_number_pane_g1

0x519f,	// (0x0004e40a) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x00058573) clock_digital_number_pane_g

0x519f,	// (0x0004e40a) clock_digital_separator_pane_g1

0x519f,	// (0x0004e40a) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x00058573) clock_digital_separator_pane_g

0x4a3c,	// (0x0004dca7) bg_popup_window_pane_cp04

0xd363,	// (0x000565ce) heading_pane_cp03

0xd36b,	// (0x000565d6) listscroll_popup_gms_pane

0xd373,	// (0x000565de) grid_large_graphic_popup_pane

0xd37d,	// (0x000565e8) listscroll_popup_gms_pane_g1

0xd385,	// (0x000565f0) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00058610) listscroll_popup_gms_pane_g

0x6077,	// (0x0004f2e2) scroll_pane_cp014

0xd38d,	// (0x000565f8) cell_large_graphic_popup_pane_ParamLimits

0xd38d,	// (0x000565f8) cell_large_graphic_popup_pane

0xd3a5,	// (0x00056610) cell_large_graphic_popup_pane_g1_ParamLimits

0xd3a5,	// (0x00056610) cell_large_graphic_popup_pane_g1

0xd3b1,	// (0x0005661c) cell_large_graphic_popup_pane_g2_ParamLimits

0xd3b1,	// (0x0005661c) cell_large_graphic_popup_pane_g2

0xd3bd,	// (0x00056628) cell_large_graphic_popup_pane_g3_ParamLimits

0xd3bd,	// (0x00056628) cell_large_graphic_popup_pane_g3

0xd3ca,	// (0x00056635) cell_large_graphic_popup_pane_g4_ParamLimits

0xd3ca,	// (0x00056635) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00058615) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00058615) cell_large_graphic_popup_pane_g

0xd3da,	// (0x00056645) grid_highlight_pane_cp010

0x519f,	// (0x0004e40a) bg_popup_call_pane_g1

0xd3e4,	// (0x0005664f) list_single_graphic_popup_conf_pane_ParamLimits

0xd3e4,	// (0x0005664f) list_single_graphic_popup_conf_pane

0xd3f6,	// (0x00056661) list_highlight_pane_cp01

0xd3ff,	// (0x0005666a) list_single_graphic_popup_conf_pane_g1

0xd407,	// (0x00056672) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x0005861e) list_single_graphic_popup_conf_pane_g

0xd40f,	// (0x0005667a) list_single_graphic_popup_conf_pane_t1

0xd41d,	// (0x00056688) linegrid_cams_pane_g1

0x6e08,	// (0x00050073) linegrid_cams_pane_g2

0x53ac,	// (0x0004e617) linegrid_cams_pane_g3

0xd426,	// (0x00056691) linegrid_cams_pane_g4

0x6e11,	// (0x0005007c) linegrid_cams_pane_g5

0x6e1a,	// (0x00050085) linegrid_cams_pane_g6

0x57b9,	// (0x0004ea24) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00058623) linegrid_cams_pane_g

0xd42f,	// (0x0005669a) popup_clock_analogue_window

0xd42f,	// (0x0005669a) popup_clock_digital_window

0x4a3c,	// (0x0004dca7) popup_phob_thumbnail_window

0x519f,	// (0x0004e40a) call_video_uplink_pane_g1

0xd438,	// (0x000566a3) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00058632) call_video_uplink_pane_g

0x5761,	// (0x0004e9cc) video_uplink_pane

0xd440,	// (0x000566ab) mce_image_pane_g1

0x6e23,	// (0x0005008e) mce_image_pane_g2

0x6e2b,	// (0x00050096) mce_image_pane_g3

0x6e33,	// (0x0005009e) mce_image_pane_g4

0x6e3b,	// (0x000500a6) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x00058637) mce_image_pane_g

0xd44a,	// (0x000566b5) control_top_pane_stacon_cp01_ParamLimits

0xd44a,	// (0x000566b5) control_top_pane_stacon_cp01

0xd45e,	// (0x000566c9) uni_indicator_pane_stacon_cp01_ParamLimits

0xd45e,	// (0x000566c9) uni_indicator_pane_stacon_cp01

0xd46f,	// (0x000566da) bg_popup_sub_pane_cp03

0x6e43,	// (0x000500ae) chi_dic_find_pane

0x6e4b,	// (0x000500b6) listscroll_chi_dic_pane

0x6e54,	// (0x000500bf) main_pane_chidic_g1

0x6e67,	// (0x000500d2) chi_dic_find_pane_t1

0xd479,	// (0x000566e4) find_chidic_pane

0xd482,	// (0x000566ed) chi_dic_list_pane_ParamLimits

0xd482,	// (0x000566ed) chi_dic_list_pane

0xd493,	// (0x000566fe) scroll_pane_cp020

0x6e75,	// (0x000500e0) find_chidic_pane_t1

0x4a3c,	// (0x0004dca7) input_focus_pane_cp06

0x6e84,	// (0x000500ef) list_chi_dic_pane_ParamLimits

0x6e84,	// (0x000500ef) list_chi_dic_pane

0xd49b,	// (0x00056706) list_chi_dic_pane_t1_ParamLimits

0xd49b,	// (0x00056706) list_chi_dic_pane_t1

0x4a3c,	// (0x0004dca7) list_highlight_pane_cp020

0xd4ae,	// (0x00056719) bg_cale_heading_pane_g1

0x6ea5,	// (0x00050110) bg_cale_heading_pane_g2

0x6ead,	// (0x00050118) bg_cale_heading_pane_g3

0x6eb5,	// (0x00050120) bg_cale_heading_pane_g4

0x6ebf,	// (0x0005012a) bg_cale_heading_pane_g5

0x6ec9,	// (0x00050134) bg_cale_heading_pane_g6

0x6ed1,	// (0x0005013c) bg_cale_heading_pane_g7

0x6ed9,	// (0x00050144) bg_cale_heading_pane_g8

0x6ee3,	// (0x0005014e) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00058642) bg_cale_heading_pane_g

0xd4ae,	// (0x00056719) bg_cale_side_pane_g1

0x6eed,	// (0x00050158) bg_cale_side_pane_g2

0x6ef5,	// (0x00050160) bg_cale_side_pane_g3

0x6efd,	// (0x00050168) bg_cale_side_pane_g4

0x6f05,	// (0x00050170) bg_cale_side_pane_g5

0x6f0d,	// (0x00050178) bg_cale_side_pane_g6

0x6f15,	// (0x00050180) bg_cale_side_pane_g7

0x6f1d,	// (0x00050188) bg_cale_side_pane_g8

0x6f25,	// (0x00050190) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x00058655) bg_cale_side_pane_g

0x6f2d,	// (0x00050198) popup_call_status_window_ParamLimits

0x6f2d,	// (0x00050198) popup_call_status_window

0xd4b6,	// (0x00056721) stacon_top_pane

0xd4be,	// (0x00056729) status_pane_ParamLimits

0xd4be,	// (0x00056729) status_pane

0xd4d3,	// (0x0005673e) status_small_pane

0xd4db,	// (0x00056746) control_pane

0x4a3c,	// (0x0004dca7) stacon_bottom_pane

0xd4e3,	// (0x0005674e) list_single_mce_smart_pane_t1_ParamLimits

0xd4e3,	// (0x0005674e) list_single_mce_smart_pane_t1

0xd4f6,	// (0x00056761) list_single_mce_smart_pane_t2_ParamLimits

0xd4f6,	// (0x00056761) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x00058668) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x00058668) list_single_mce_smart_pane_t

0x6f39,	// (0x000501a4) compass_pane

0x6f45,	// (0x000501b0) main_location2_pane_t1

0x6f59,	// (0x000501c4) main_location2_pane_t2

0x6f6d,	// (0x000501d8) main_location2_pane_t3

0x0003,

0xf402,	// (0x0005866d) main_location2_pane_t

0xd515,	// (0x00056780) compass_pane_g1_ParamLimits

0xd515,	// (0x00056780) compass_pane_g1

0x6fb7,	// (0x00050222) compass_pane_t1

0x6fc6,	// (0x00050231) compass_pane_t2

0x0005,

0xf40b,	// (0x00058676) compass_pane_t

0x7011,	// (0x0005027c) text_secondary_cp61

0xd529,	// (0x00056794) navi_pane_cams_g5

0xd54c,	// (0x000567b7) navi_pane_im_t1

0xd55a,	// (0x000567c5) navi_pane_mp_g1_ParamLimits

0xd55a,	// (0x000567c5) navi_pane_mp_g1

0xd56e,	// (0x000567d9) navi_pane_mp_g2_ParamLimits

0xd56e,	// (0x000567d9) navi_pane_mp_g2

0xd57a,	// (0x000567e5) navi_pane_mp_g3_ParamLimits

0xd57a,	// (0x000567e5) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x0005868a) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x0005868a) navi_pane_mp_g

0xd586,	// (0x000567f1) navi_pane_mp_t1

0xd594,	// (0x000567ff) navi_pane_mp_t2

0x0002,

0xf426,	// (0x00058691) navi_pane_mp_t

0xd5d0,	// (0x0005683b) navi_pane_vt_g1

0xd586,	// (0x000567f1) navi_pane_vt_t1

0xd5d8,	// (0x00056843) navi_slider_pane

0xd5e0,	// (0x0005684b) zooming_pane

0xd5e8,	// (0x00056853) navi_slider_pane_g1

0x7128,	// (0x00050393) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x00058698) navi_slider_pane_g

0xd60c,	// (0x00056877) aid_levels_zoom

0xd614,	// (0x0005687f) zooming_pane_g1

0xd61c,	// (0x00056887) zooming_pane_g2

0xd61c,	// (0x00056887) zooming_pane_g3

0x0002,

0xf43c,	// (0x000586a7) zooming_pane_g

0xd624,	// (0x0005688f) level_10_zoom

0xd62d,	// (0x00056898) level_11_zoom

0xd636,	// (0x000568a1) level_1_zoom

0xd63f,	// (0x000568aa) level_2_zoom

0xd648,	// (0x000568b3) level_3_zoom

0xd651,	// (0x000568bc) level_4_zoom

0xd65a,	// (0x000568c5) level_5_zoom

0xd663,	// (0x000568ce) level_6_zoom

0xd66c,	// (0x000568d7) level_7_zoom

0xd675,	// (0x000568e0) level_8_zoom

0xd67e,	// (0x000568e9) level_9_zoom

0xd68f,	// (0x000568fa) popup_phob_thumbnail_window_g1

0xd697,	// (0x00056902) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x000586ae) popup_phob_thumbnail_window_g

0xe986,	// (0x00057bf1) level_1_location

0xe98e,	// (0x00057bf9) level_2_location

0xe996,	// (0x00057c01) level_3_location

0xe99e,	// (0x00057c09) level_4_location

0xd5e0,	// (0x0005684b) level_5_location

0x713a,	// (0x000503a5) mce_icon_pane_g1

0x7142,	// (0x000503ad) mce_icon_pane_g2

0x0001,

0xf448,	// (0x000586b3) mce_icon_pane_g

0x714a,	// (0x000503b5) main_mup_pane_g1_ParamLimits

0x714a,	// (0x000503b5) main_mup_pane_g1

0x7162,	// (0x000503cd) main_mup_pane_g2_ParamLimits

0x7162,	// (0x000503cd) main_mup_pane_g2

0x717e,	// (0x000503e9) main_mup_pane_g3_ParamLimits

0x717e,	// (0x000503e9) main_mup_pane_g3

0x719a,	// (0x00050405) main_mup_pane_g4_ParamLimits

0x719a,	// (0x00050405) main_mup_pane_g4

0x71b6,	// (0x00050421) main_mup_pane_g5_ParamLimits

0x71b6,	// (0x00050421) main_mup_pane_g5

0x71d7,	// (0x00050442) main_mup_pane_g6_ParamLimits

0x71d7,	// (0x00050442) main_mup_pane_g6

0x71f3,	// (0x0005045e) main_mup_pane_g7_ParamLimits

0x71f3,	// (0x0005045e) main_mup_pane_g7

0x720f,	// (0x0005047a) main_mup_pane_g8_ParamLimits

0x720f,	// (0x0005047a) main_mup_pane_g8

0x722b,	// (0x00050496) main_mup_pane_g9_ParamLimits

0x722b,	// (0x00050496) main_mup_pane_g9

0x724a,	// (0x000504b5) main_mup_pane_g10_ParamLimits

0x724a,	// (0x000504b5) main_mup_pane_g10

0x7269,	// (0x000504d4) main_mup_pane_g11_ParamLimits

0x7269,	// (0x000504d4) main_mup_pane_g11

0x7281,	// (0x000504ec) main_mup_pane_g12_ParamLimits

0x7281,	// (0x000504ec) main_mup_pane_g12

0x728f,	// (0x000504fa) main_mup_pane_g13_ParamLimits

0x728f,	// (0x000504fa) main_mup_pane_g13

0x000c,

0xf44d,	// (0x000586b8) main_mup_pane_g_ParamLimits

0xf44d,	// (0x000586b8) main_mup_pane_g

0x72a5,	// (0x00050510) main_mup_pane_t1_ParamLimits

0x72a5,	// (0x00050510) main_mup_pane_t1

0x72c2,	// (0x0005052d) main_mup_pane_t2_ParamLimits

0x72c2,	// (0x0005052d) main_mup_pane_t2

0x72dc,	// (0x00050547) main_mup_pane_t3_ParamLimits

0x72dc,	// (0x00050547) main_mup_pane_t3

0x72f6,	// (0x00050561) main_mup_pane_t4_ParamLimits

0x72f6,	// (0x00050561) main_mup_pane_t4

0x7308,	// (0x00050573) main_mup_pane_t5_ParamLimits

0x7308,	// (0x00050573) main_mup_pane_t5

0x731a,	// (0x00050585) main_mup_pane_t6_ParamLimits

0x731a,	// (0x00050585) main_mup_pane_t6

0x0005,

0xf468,	// (0x000586d3) main_mup_pane_t_ParamLimits

0xf468,	// (0x000586d3) main_mup_pane_t

0x7330,	// (0x0005059b) mup_progress_pane_ParamLimits

0x7330,	// (0x0005059b) mup_progress_pane

0x733c,	// (0x000505a7) mup_visualizer_pane_ParamLimits

0x733c,	// (0x000505a7) mup_visualizer_pane

0x737a,	// (0x000505e5) mup_volume_pane_ParamLimits

0x737a,	// (0x000505e5) mup_volume_pane

0xd2ec,	// (0x00056557) mup_visualizer_pane_g1_ParamLimits

0xd2ec,	// (0x00056557) mup_visualizer_pane_g1

0xd2ec,	// (0x00056557) mup_visualizer_pane_g2_ParamLimits

0xd2ec,	// (0x00056557) mup_visualizer_pane_g2

0xd515,	// (0x00056780) mup_visualizer_pane_g3_ParamLimits

0xd515,	// (0x00056780) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x000586e0) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x000586e0) mup_visualizer_pane_g

0x519f,	// (0x0004e40a) mup_volume_pane_g1

0xd6a7,	// (0x00056912) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x000586e7) mup_volume_pane_g

0x519f,	// (0x0004e40a) mup_progress_pane_g1

0xd6b0,	// (0x0005691b) mup_progress_pane_g2

0xd6b9,	// (0x00056924) mup_progress_pane_g3

0x0002,

0xf481,	// (0x000586ec) mup_progress_pane_g

0x4a3c,	// (0x0004dca7) bg_popup_window_pane_cp05

0xd6c2,	// (0x0005692d) heading_pane_cp02_ParamLimits

0xd6c2,	// (0x0005692d) heading_pane_cp02

0xd6dc,	// (0x00056947) list_popup_blid_pane

0xd6e4,	// (0x0005694f) list_blid_sat_info_pane_ParamLimits

0xd6e4,	// (0x0005694f) list_blid_sat_info_pane

0xd6f7,	// (0x00056962) list_blid_sat_info_pane_g1

0xd6ff,	// (0x0005696a) list_blid_sat_info_pane_t1

0x7485,	// (0x000506f0) mup_equalizer_pane_ParamLimits

0x7485,	// (0x000506f0) mup_equalizer_pane

0x74a6,	// (0x00050711) mup_equalizer_pane_cp1_ParamLimits

0x74a6,	// (0x00050711) mup_equalizer_pane_cp1

0x74c7,	// (0x00050732) mup_equalizer_pane_cp2_ParamLimits

0x74c7,	// (0x00050732) mup_equalizer_pane_cp2

0x74e8,	// (0x00050753) mup_equalizer_pane_cp3_ParamLimits

0x74e8,	// (0x00050753) mup_equalizer_pane_cp3

0x7509,	// (0x00050774) mup_equalizer_pane_cp4_ParamLimits

0x7509,	// (0x00050774) mup_equalizer_pane_cp4

0x752a,	// (0x00050795) mup_equalizer_pane_cp5

0x7540,	// (0x000507ab) mup_equalizer_pane_cp6

0x7558,	// (0x000507c3) mup_equalizer_pane_cp7

0xe8a4,	// (0x00057b0f) bg_popup_call_poc_act_pane_g9

0xe8ac,	// (0x00057b17) bg_popup_call_poc_act_pane_g10

0xe8b4,	// (0x00057b1f) bg_popup_call_poc_act_pane_g11

0x000a,

0x4c97,	// (0x0004df02) mup_scale_pane

0x519f,	// (0x0004e40a) mup_scale_pane_g1

0xd70d,	// (0x00056978) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x00058708) mup_scale_pane_g

0xd731,	// (0x0005699c) msg_data_pane

0xd739,	// (0x000569a4) scroll_pane_cp017

0x7582,	// (0x000507ed) bg_list_pane_cp04_ParamLimits

0x7582,	// (0x000507ed) bg_list_pane_cp04

0xd741,	// (0x000569ac) msg_data_pane_g1

0x75a2,	// (0x0005080d) msg_data_pane_g2

0x6e2b,	// (0x00050096) msg_data_pane_g3

0x75aa,	// (0x00050815) msg_data_pane_g4

0x75b2,	// (0x0005081d) msg_data_pane_g5

0x75ba,	// (0x00050825) msg_data_pane_g6

0x75c2,	// (0x0005082d) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x00058717) msg_data_pane_g

0x75ca,	// (0x00050835) msg_text_pane_ParamLimits

0x75ca,	// (0x00050835) msg_text_pane

0x761d,	// (0x00050888) qrid_highlight_pane_cp011_ParamLimits

0x761d,	// (0x00050888) qrid_highlight_pane_cp011

0x4a3c,	// (0x0004dca7) msg_body_pane

0x4a3c,	// (0x0004dca7) msg_header_pane

0xd752,	// (0x000569bd) input_focus_pane_cp07

0x7647,	// (0x000508b2) msg_header_pane_t1_ParamLimits

0x7647,	// (0x000508b2) msg_header_pane_t1

0x765b,	// (0x000508c6) msg_header_pane_t2_ParamLimits

0x765b,	// (0x000508c6) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0005872b) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0005872b) msg_header_pane_t

0xd767,	// (0x000569d2) msg_body_pane_g1

0x766d,	// (0x000508d8) msg_body_pane_t1_ParamLimits

0x766d,	// (0x000508d8) msg_body_pane_t1

0x769e,	// (0x00050909) msg_body_pane_t2_ParamLimits

0x769e,	// (0x00050909) msg_body_pane_t2

0x76b0,	// (0x0005091b) msg_body_pane_t3_ParamLimits

0x76b0,	// (0x0005091b) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x00058730) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x00058730) msg_body_pane_t

0x7714,	// (0x0005097f) main_viewer_pane_g1_ParamLimits

0x7714,	// (0x0005097f) main_viewer_pane_g1

0x7720,	// (0x0005098b) main_viewer_pane_g2_ParamLimits

0x7720,	// (0x0005098b) main_viewer_pane_g2

0x772c,	// (0x00050997) main_viewer_pane_g3_ParamLimits

0x772c,	// (0x00050997) main_viewer_pane_g3

0x773d,	// (0x000509a8) main_viewer_pane_g4_ParamLimits

0x773d,	// (0x000509a8) main_viewer_pane_g4

0x774e,	// (0x000509b9) main_viewer_pane_g5_ParamLimits

0x774e,	// (0x000509b9) main_viewer_pane_g5

0x774e,	// (0x000509b9) main_viewer_pane_g7_ParamLimits

0x774e,	// (0x000509b9) main_viewer_pane_g7

0x7760,	// (0x000509cb) main_viewer_pane_g8_ParamLimits

0x7760,	// (0x000509cb) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x00058740) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x00058740) main_viewer_pane_g

0xd76f,	// (0x000569da) viewer_content_pane_ParamLimits

0xd76f,	// (0x000569da) viewer_content_pane

0x7798,	// (0x00050a03) main_postcard_pane_g1_ParamLimits

0x7798,	// (0x00050a03) main_postcard_pane_g1

0x77a6,	// (0x00050a11) main_postcard_pane_g2_ParamLimits

0x77a6,	// (0x00050a11) main_postcard_pane_g2

0x77b4,	// (0x00050a1f) main_postcard_pane_g3_ParamLimits

0x77b4,	// (0x00050a1f) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x00058751) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x00058751) main_postcard_pane_g

0x77c4,	// (0x00050a2f) main_postcard_pane_g4

0xeac7,	// (0x00057d32) smil_status_volume_pane_g2

0x77f0,	// (0x00050a5b) postcard_pane_ParamLimits

0x77f0,	// (0x00050a5b) postcard_pane

0xd2ec,	// (0x00056557) postcard_pane_g1_ParamLimits

0xd2ec,	// (0x00056557) postcard_pane_g1

0x7822,	// (0x00050a8d) postcard_pane_g2_ParamLimits

0x7822,	// (0x00050a8d) postcard_pane_g2

0x782e,	// (0x00050a99) postcard_pane_g3_ParamLimits

0x782e,	// (0x00050a99) postcard_pane_g3

0xd77d,	// (0x000569e8) postcard_pane_g4_ParamLimits

0xd77d,	// (0x000569e8) postcard_pane_g4

0x783a,	// (0x00050aa5) postcard_pane_g5_ParamLimits

0x783a,	// (0x00050aa5) postcard_pane_g5

0x7846,	// (0x00050ab1) postcard_pane_g6_ParamLimits

0x7846,	// (0x00050ab1) postcard_pane_g6

0xd78b,	// (0x000569f6) postcard_pane_g7_ParamLimits

0xd78b,	// (0x000569f6) postcard_pane_g7

0x0006,

0xf4f3,	// (0x0005875e) postcard_pane_g_ParamLimits

0xf4f3,	// (0x0005875e) postcard_pane_g

0x7852,	// (0x00050abd) main_mp2_pane_g1_ParamLimits

0x7852,	// (0x00050abd) main_mp2_pane_g1

0x785e,	// (0x00050ac9) main_mp2_pane_g2_ParamLimits

0x785e,	// (0x00050ac9) main_mp2_pane_g2

0x786a,	// (0x00050ad5) main_mp2_pane_g3_ParamLimits

0x786a,	// (0x00050ad5) main_mp2_pane_g3

0x0002,

0xf502,	// (0x0005876d) main_mp2_pane_g_ParamLimits

0xf502,	// (0x0005876d) main_mp2_pane_g

0x7876,	// (0x00050ae1) main_mp2_pane_t1_ParamLimits

0x7876,	// (0x00050ae1) main_mp2_pane_t1

0x788d,	// (0x00050af8) main_mp2_pane_t2_ParamLimits

0x788d,	// (0x00050af8) main_mp2_pane_t2

0x789f,	// (0x00050b0a) main_mp2_pane_t3_ParamLimits

0x789f,	// (0x00050b0a) main_mp2_pane_t3

0x0002,

0xf509,	// (0x00058774) main_mp2_pane_t_ParamLimits

0xf509,	// (0x00058774) main_mp2_pane_t

0xd799,	// (0x00056a04) pec_content_pane_ParamLimits

0xd799,	// (0x00056a04) pec_content_pane

0x6077,	// (0x0004f2e2) scroll_pane_cp015

0xd7ab,	// (0x00056a16) pec_attribute_pane_ParamLimits

0xd7ab,	// (0x00056a16) pec_attribute_pane

0x78b1,	// (0x00050b1c) pec_content_pane_g1_ParamLimits

0x78b1,	// (0x00050b1c) pec_content_pane_g1

0xd7bb,	// (0x00056a26) pec_content_pane_t1_ParamLimits

0xd7bb,	// (0x00056a26) pec_content_pane_t1

0xd7cd,	// (0x00056a38) pec_content_pane_t2_ParamLimits

0xd7cd,	// (0x00056a38) pec_content_pane_t2

0x0001,

0xf510,	// (0x0005877b) pec_content_pane_t_ParamLimits

0xf510,	// (0x0005877b) pec_content_pane_t

0x78bd,	// (0x00050b28) list_single_graphic_pane_cp01_ParamLimits

0x78bd,	// (0x00050b28) list_single_graphic_pane_cp01

0x4c97,	// (0x0004df02) bg_popup_sub_pane_cp04

0xd7df,	// (0x00056a4a) popup_mup_playback_window_g1

0xd7eb,	// (0x00056a56) popup_mup_playback_window_t1

0xd800,	// (0x00056a6b) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x00058780) popup_mup_playback_window_t

0xd837,	// (0x00056aa2) main_image_pane_g1_ParamLimits

0xd837,	// (0x00056aa2) main_image_pane_g1

0xd87a,	// (0x00056ae5) scroll_pane_cp018_ParamLimits

0xd87a,	// (0x00056ae5) scroll_pane_cp018

0xd892,	// (0x00056afd) scroll_pane_cp016_ParamLimits

0xd892,	// (0x00056afd) scroll_pane_cp016

0x7961,	// (0x00050bcc) smil2_image_pane_ParamLimits

0x7961,	// (0x00050bcc) smil2_image_pane

0x7995,	// (0x00050c00) smil2_root_pane_ParamLimits

0x7995,	// (0x00050c00) smil2_root_pane

0x79c1,	// (0x00050c2c) smil2_text_pane_ParamLimits

0x79c1,	// (0x00050c2c) smil2_text_pane

0x4a3c,	// (0x0004dca7) bg_list_pane_cp06

0xd8ce,	// (0x00056b39) grid_radio_pane

0x4a3c,	// (0x0004dca7) bg_popup_window_pane_cp06

0xd8d6,	// (0x00056b41) main_fmradio_pane_t1

0xd363,	// (0x000565ce) heading_pane_cp04

0xd8e4,	// (0x00056b4f) main_fmradio_pane_t2

0xe8bc,	// (0x00057b27) popup_cale_lunar_info_window_g1

0xd8f2,	// (0x00056b5d) main_fmradio_pane_t3

0xe8c4,	// (0x00057b2f) popup_cale_lunar_info_window_g2

0xd900,	// (0x00056b6b) main_fmradio_pane_t4

0x0001,

0xd90e,	// (0x00056b79) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x0005885b) popup_cale_lunar_info_window_g

0xf52a,	// (0x00058795) main_fmradio_pane_t

0xd91c,	// (0x00056b87) wait_bar_pane_cp03

0xd924,	// (0x00056b8f) cell_fmradio_pane_ParamLimits

0xd924,	// (0x00056b8f) cell_fmradio_pane

0xd78b,	// (0x000569f6) cell_fmradio_pane_g1_ParamLimits

0xd78b,	// (0x000569f6) cell_fmradio_pane_g1

0x4a3c,	// (0x0004dca7) grid_highlight_pane_cp011

0xd937,	// (0x00056ba2) poc_content_pane_ParamLimits

0xd937,	// (0x00056ba2) poc_content_pane

0xd949,	// (0x00056bb4) scroll_pane_cp019

0x7a01,	// (0x00050c6c) popup_call_poc_act_window_ParamLimits

0x7a01,	// (0x00050c6c) popup_call_poc_act_window

0x7a0e,	// (0x00050c79) popup_call_poc_inact_window_ParamLimits

0x7a0e,	// (0x00050c79) popup_call_poc_inact_window

0xf5c7,	// (0x00058832) bg_popup_call_poc_act_pane_g

0xe834,	// (0x00057a9f) bg_popup_call_poc_inact_pane_g1

0xe83c,	// (0x00057aa7) bg_popup_call_poc_inact_pane_g2

0xd951,	// (0x00056bbc) popup_call_poc_act_window_g2

0xe844,	// (0x00057aaf) bg_popup_call_poc_inact_pane_g3

0xe84c,	// (0x00057ab7) bg_popup_call_poc_inact_pane_g4

0xe854,	// (0x00057abf) bg_popup_call_poc_inact_pane_g5

0xd959,	// (0x00056bc4) popup_call_poc_act_window_t1_ParamLimits

0xd959,	// (0x00056bc4) popup_call_poc_act_window_t1

0xd981,	// (0x00056bec) popup_call_poc_act_window_t2_ParamLimits

0xd981,	// (0x00056bec) popup_call_poc_act_window_t2

0xd9a9,	// (0x00056c14) popup_call_poc_act_window_t3_ParamLimits

0xd9a9,	// (0x00056c14) popup_call_poc_act_window_t3

0xd9d1,	// (0x00056c3c) popup_call_poc_act_window_t4_ParamLimits

0xd9d1,	// (0x00056c3c) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x000587a0) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x000587a0) popup_call_poc_act_window_t

0xe85c,	// (0x00057ac7) bg_popup_call_poc_inact_pane_g6

0xe864,	// (0x00057acf) bg_popup_call_poc_inact_pane_g7

0xe86c,	// (0x00057ad7) bg_popup_call_poc_inact_pane_g8

0xd9e3,	// (0x00056c4e) popup_call_poc_inact_window_g2

0xe874,	// (0x00057adf) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x0005881f) bg_popup_call_poc_inact_pane_g

0xd9eb,	// (0x00056c56) popup_call_poc_inact_window_t1_ParamLimits

0xd9eb,	// (0x00056c56) popup_call_poc_inact_window_t1

0xda00,	// (0x00056c6b) popup_call_poc_inact_window_t2_ParamLimits

0xda00,	// (0x00056c6b) popup_call_poc_inact_window_t2

0xda15,	// (0x00056c80) popup_call_poc_inact_window_t3_ParamLimits

0xda15,	// (0x00056c80) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x000587a9) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x000587a9) popup_call_poc_inact_window_t

0xea3a,	// (0x00057ca5) context_pane_ParamLimits

0x7ffd,	// (0x00051268) signal_pane_ParamLimits

0xd5e0,	// (0x0005684b) main_call2_pane

0xea28,	// (0x00057c93) popup_phob_thumbnail2_window_ParamLimits

0xea28,	// (0x00057c93) popup_phob_thumbnail2_window

0x76c2,	// (0x0005092d) aid_hotspot_pointer_arrow_pane

0x76ca,	// (0x00050935) aid_hotspot_pointer_hand_pane

0x7d3b,	// (0x00050fa6) phob_pre_status_pane_g5

0x5871,	// (0x0004eadc) cams_zoom_pane_ParamLimits

0x587d,	// (0x0004eae8) image_vga_pane_ParamLimits

0x588c,	// (0x0004eaf7) main_camera_pane_g1_ParamLimits

0x589a,	// (0x0004eb05) main_camera_pane_g2_ParamLimits

0x58a8,	// (0x0004eb13) main_camera_pane_g3_ParamLimits

0x58b4,	// (0x0004eb1f) main_camera_pane_g4_ParamLimits

0x58c0,	// (0x0004eb2b) main_camera_pane_g5_ParamLimits

0x58cc,	// (0x0004eb37) main_camera_pane_g6_ParamLimits

0x58d8,	// (0x0004eb43) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x000584a8) main_camera_pane_g_ParamLimits

0x58f0,	// (0x0004eb5b) main_camera_pane_t1_ParamLimits

0x5902,	// (0x0004eb6d) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x000584b9) main_camera_pane_t_ParamLimits

0x4c97,	// (0x0004df02) bg_popup_preview_window_pane_cp01_ParamLimits

0x4c97,	// (0x0004df02) bg_popup_preview_window_pane_cp01

0xda2a,	// (0x00056c95) popup_phob_thumbnail2_window_g1_ParamLimits

0xda2a,	// (0x00056c95) popup_phob_thumbnail2_window_g1

0x4a3c,	// (0x0004dca7) call2_cli_visual_pane

0x7a2a,	// (0x00050c95) popup_call2_audio_conf_window_ParamLimits

0x7a2a,	// (0x00050c95) popup_call2_audio_conf_window

0x7a3f,	// (0x00050caa) popup_call2_audio_first_window_ParamLimits

0x7a3f,	// (0x00050caa) popup_call2_audio_first_window

0x7add,	// (0x00050d48) popup_call2_audio_in_window_ParamLimits

0x7add,	// (0x00050d48) popup_call2_audio_in_window

0x7b1f,	// (0x00050d8a) popup_call2_audio_out_window_ParamLimits

0x7b1f,	// (0x00050d8a) popup_call2_audio_out_window

0x7b81,	// (0x00050dec) popup_call2_audio_second_window_ParamLimits

0x7b81,	// (0x00050dec) popup_call2_audio_second_window

0x7bdf,	// (0x00050e4a) popup_call2_audio_wait_window_ParamLimits

0x7bdf,	// (0x00050e4a) popup_call2_audio_wait_window

0x4a3c,	// (0x0004dca7) bg_popup_call2_act_pane_cp03

0x4c79,	// (0x0004dee4) list_conf_pane_cp

0xda36,	// (0x00056ca1) popup_call2_audio_conf_window_t1

0xda44,	// (0x00056caf) list_single_graphic_popup_conf2_pane_ParamLimits

0xda44,	// (0x00056caf) list_single_graphic_popup_conf2_pane

0xd3f6,	// (0x00056661) list_highlight_pane_cp04

0xda57,	// (0x00056cc2) list_single_graphic_popup_conf2_pane_g1

0xd407,	// (0x00056672) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x000587b0) list_single_graphic_popup_conf2_pane_g

0xda61,	// (0x00056ccc) list_single_graphic_popup_conf2_pane_t1

0xda6f,	// (0x00056cda) bg_popup_call2_act_pane_cp01_ParamLimits

0xda6f,	// (0x00056cda) bg_popup_call2_act_pane_cp01

0xdaf9,	// (0x00056d64) call_type_pane_cp05_ParamLimits

0xdaf9,	// (0x00056d64) call_type_pane_cp05

0xdb4d,	// (0x00056db8) popup_call2_audio_second_window_g1_ParamLimits

0xdb4d,	// (0x00056db8) popup_call2_audio_second_window_g1

0xdba1,	// (0x00056e0c) popup_call2_audio_second_window_g2_ParamLimits

0xdba1,	// (0x00056e0c) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x000587b5) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x000587b5) popup_call2_audio_second_window_g

0xdc06,	// (0x00056e71) popup_call2_audio_second_window_t1_ParamLimits

0xdc06,	// (0x00056e71) popup_call2_audio_second_window_t1

0xdcc1,	// (0x00056f2c) popup_call2_audio_second_window_t2_ParamLimits

0xdcc1,	// (0x00056f2c) popup_call2_audio_second_window_t2

0xdd14,	// (0x00056f7f) popup_call2_audio_second_window_t3_ParamLimits

0xdd14,	// (0x00056f7f) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x000587bc) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x000587bc) popup_call2_audio_second_window_t

0x4a3c,	// (0x0004dca7) bg_popup_call2_in_pane_cp02

0x4a46,	// (0x0004dcb1) call_type_pane_cp04

0x4a4e,	// (0x0004dcb9) popup_call2_audio_wait_window_g1

0x4a56,	// (0x0004dcc1) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x00058395) popup_call2_audio_wait_window_g

0x4a5e,	// (0x0004dcc9) popup_call2_audio_wait_window_t3

0xde07,	// (0x00057072) bg_popup_call2_act_pane_ParamLimits

0xde07,	// (0x00057072) bg_popup_call2_act_pane

0xdec7,	// (0x00057132) call_type_pane_cp03_ParamLimits

0xdec7,	// (0x00057132) call_type_pane_cp03

0xdf2b,	// (0x00057196) popup_call2_audio_first_window_g1_ParamLimits

0xdf2b,	// (0x00057196) popup_call2_audio_first_window_g1

0xdf9b,	// (0x00057206) popup_call2_audio_first_window_g2_ParamLimits

0xdf9b,	// (0x00057206) popup_call2_audio_first_window_g2

0xd2ec,	// (0x00056557) popup_call2_audio_first_window_g3_ParamLimits

0xd2ec,	// (0x00056557) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x000587c5) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x000587c5) popup_call2_audio_first_window_g

0xe079,	// (0x000572e4) popup_call2_audio_first_window_t1_ParamLimits

0xe079,	// (0x000572e4) popup_call2_audio_first_window_t1

0xe17c,	// (0x000573e7) popup_call2_audio_first_window_t4_ParamLimits

0xe17c,	// (0x000573e7) popup_call2_audio_first_window_t4

0xe25f,	// (0x000574ca) popup_call2_audio_first_window_t5_ParamLimits

0xe25f,	// (0x000574ca) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x000587d0) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x000587d0) popup_call2_audio_first_window_t

0x4c8f,	// (0x0004defa) bg_popup_call2_act_pane_g1

0xe8cc,	// (0x00057b37) popup_cale_lunar_info_window_t1

0xe8da,	// (0x00057b45) popup_cale_lunar_info_window_t2

0xe8e8,	// (0x00057b53) popup_cale_lunar_info_window_t3

0x4a3c,	// (0x0004dca7) bg_popup_call2_bubble_pane

0xe360,	// (0x000575cb) bg_popup_call2_in_pane_cp01_ParamLimits

0xe360,	// (0x000575cb) bg_popup_call2_in_pane_cp01

0x46f4,	// (0x0004d95f) call_type_pane_cp02

0xe3a8,	// (0x00057613) popup_call2_audio_out_window_g1_ParamLimits

0xe3a8,	// (0x00057613) popup_call2_audio_out_window_g1

0xe3d4,	// (0x0005763f) popup_call2_audio_out_window_g2_ParamLimits

0xe3d4,	// (0x0005763f) popup_call2_audio_out_window_g2

0xe3fc,	// (0x00057667) popup_call2_audio_out_window_g3_ParamLimits

0xe3fc,	// (0x00057667) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x000587d9) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x000587d9) popup_call2_audio_out_window_g

0xe437,	// (0x000576a2) popup_call2_audio_out_window_t1_ParamLimits

0xe437,	// (0x000576a2) popup_call2_audio_out_window_t1

0xe496,	// (0x00057701) popup_call2_audio_out_window_t2_ParamLimits

0xe496,	// (0x00057701) popup_call2_audio_out_window_t2

0xe4ea,	// (0x00057755) popup_call2_audio_out_window_t3_ParamLimits

0xe4ea,	// (0x00057755) popup_call2_audio_out_window_t3

0xe500,	// (0x0005776b) popup_call2_audio_out_window_t4_ParamLimits

0xe500,	// (0x0005776b) popup_call2_audio_out_window_t4

0xe516,	// (0x00057781) popup_call2_audio_out_window_t5_ParamLimits

0xe516,	// (0x00057781) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x000587e2) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x000587e2) popup_call2_audio_out_window_t

0xe57a,	// (0x000577e5) bg_popup_call2_in_pane_ParamLimits

0xe57a,	// (0x000577e5) bg_popup_call2_in_pane

0xe5d6,	// (0x00057841) popup_call2_audio_in_window_g1_ParamLimits

0xe5d6,	// (0x00057841) popup_call2_audio_in_window_g1

0xe60e,	// (0x00057879) popup_call2_audio_in_window_g2_ParamLimits

0xe60e,	// (0x00057879) popup_call2_audio_in_window_g2

0xe646,	// (0x000578b1) popup_call2_audio_in_window_g3_ParamLimits

0xe646,	// (0x000578b1) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x000587ef) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x000587ef) popup_call2_audio_in_window_g

0xe69e,	// (0x00057909) popup_call2_audio_in_window_t1_ParamLimits

0xe69e,	// (0x00057909) popup_call2_audio_in_window_t1

0xe71e,	// (0x00057989) popup_call2_audio_in_window_t2_ParamLimits

0xe71e,	// (0x00057989) popup_call2_audio_in_window_t2

0xe79e,	// (0x00057a09) popup_call2_audio_in_window_t3_ParamLimits

0xe79e,	// (0x00057a09) popup_call2_audio_in_window_t3

0xe7b8,	// (0x00057a23) popup_call2_audio_in_window_t4_ParamLimits

0xe7b8,	// (0x00057a23) popup_call2_audio_in_window_t4

0xe7ca,	// (0x00057a35) popup_call2_audio_in_window_t5_ParamLimits

0xe7ca,	// (0x00057a35) popup_call2_audio_in_window_t5

0xe7df,	// (0x00057a4a) popup_call2_audio_in_window_t6_ParamLimits

0xe7df,	// (0x00057a4a) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x000587f8) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x000587f8) popup_call2_audio_in_window_t

0x4c8f,	// (0x0004defa) bg_popup_call2_in_pane_g1

0xe8f6,	// (0x00057b61) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x00058860) popup_cale_lunar_info_window_t

0x4c97,	// (0x0004df02) bg_popup_call2_rect_pane_ParamLimits

0x4c97,	// (0x0004df02) bg_popup_call2_rect_pane

0x4a3c,	// (0x0004dca7) call2_cli_visual_graphic_pane

0x4a3c,	// (0x0004dca7) call2_cli_visual_text_pane

0x80ad,	// (0x00051318) smil_status_volume_pane_g3

0x0002,

0x519f,	// (0x0004e40a) call2_cli_visual_graphic_pane_g1

0x519f,	// (0x0004e40a) call2_cli_visual_graphic_pane_g2

0x519f,	// (0x0004e40a) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00058805) call2_cli_visual_graphic_pane_g

0xe7f4,	// (0x00057a5f) bg_popup_call2_rect_pane_g1

0x52dc,	// (0x0004e547) bg_popup_call2_rect_pane_g2

0xe7fc,	// (0x00057a67) bg_popup_call2_rect_pane_g3

0xe804,	// (0x00057a6f) bg_popup_call2_rect_pane_g4

0xe80c,	// (0x00057a77) bg_popup_call2_rect_pane_g5

0xe814,	// (0x00057a7f) bg_popup_call2_rect_pane_g6

0xe81c,	// (0x00057a87) bg_popup_call2_rect_pane_g7

0xe824,	// (0x00057a8f) bg_popup_call2_rect_pane_g8

0xe82c,	// (0x00057a97) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x0005880c) bg_popup_call2_rect_pane_g

0xe834,	// (0x00057a9f) bg_popup_call2_bubble_pane_g1

0xe83c,	// (0x00057aa7) bg_popup_call2_bubble_pane_g2

0xe844,	// (0x00057aaf) bg_popup_call2_bubble_pane_g3

0xe84c,	// (0x00057ab7) bg_popup_call2_bubble_pane_g4

0xe854,	// (0x00057abf) bg_popup_call2_bubble_pane_g5

0xe85c,	// (0x00057ac7) bg_popup_call2_bubble_pane_g6

0xe864,	// (0x00057acf) bg_popup_call2_bubble_pane_g7

0xe86c,	// (0x00057ad7) bg_popup_call2_bubble_pane_g8

0xe874,	// (0x00057adf) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x0005881f) bg_popup_call2_bubble_pane_g

0x53de,	// (0x0004e649) aid_cale_week_size_cell_pane

0x5914,	// (0x0004eb7f) aid_cams_cif_uncrop_pane_ParamLimits

0x5914,	// (0x0004eb7f) aid_cams_cif_uncrop_pane

0x5ab5,	// (0x0004ed20) aid_cams_size_cell_ParamLimits

0x5ab5,	// (0x0004ed20) aid_cams_size_cell

0x5ac1,	// (0x0004ed2c) grid_cams_pane_ParamLimits

0x5acf,	// (0x0004ed3a) linegrid_cams_pane_ParamLimits

0x5c0e,	// (0x0004ee79) call_video_pane_t1

0x5c27,	// (0x0004ee92) call_video_pane_t2

0x0001,

0xf2a1,	// (0x0005850c) call_video_pane_t

0x6345,	// (0x0004f5b0) aid_cale_month_size_cell_pane_ParamLimits

0x6345,	// (0x0004f5b0) aid_cale_month_size_cell_pane

0xf63e,	// (0x000588a9) smil_status_volume_pane_g

0x80ba,	// (0x00051325) volume_smil_pane_ParamLimits

0x42c2,	// (0x0004d52d) aid_popup2_width_pane

0x523d,	// (0x0004e4a8) cell_qdial_pane_g4_ParamLimits

0x523d,	// (0x0004e4a8) cell_qdial_pane_g4

0x6f93,	// (0x000501fe) aid_blid_cardinal_pane_ParamLimits

0x6fa3,	// (0x0005020e) aid_blid_destination_pane_ParamLimits

0x6fa3,	// (0x0005020e) aid_blid_destination_pane

0x4c97,	// (0x0004df02) bg_popup_call_poc_act_pane_ParamLimits

0x4c97,	// (0x0004df02) bg_popup_call_poc_act_pane

0x4c97,	// (0x0004df02) bg_popup_call_poc_inact_pane_ParamLimits

0x4c97,	// (0x0004df02) bg_popup_call_poc_inact_pane

0xe87c,	// (0x00057ae7) bg_popup_call_poc_act_pane_g1

0xe884,	// (0x00057aef) bg_popup_call_poc_act_pane_g2

0xe88c,	// (0x00057af7) bg_popup_call_poc_act_pane_g3

0xe84c,	// (0x00057ab7) bg_popup_call_poc_act_pane_g4

0xe854,	// (0x00057abf) bg_popup_call_poc_act_pane_g5

0xe894,	// (0x00057aff) bg_popup_call_poc_act_pane_g6

0xe864,	// (0x00057acf) bg_popup_call_poc_act_pane_g7

0xe89c,	// (0x00057b07) bg_popup_call_poc_act_pane_g8

0x4a3c,	// (0x0004dca7) main_usb_pane

0xea03,	// (0x00057c6e) popup_cale_lunar_info_window

0x5f22,	// (0x0004f18d) im_reading_pane_t1_ParamLimits

0x5f82,	// (0x0004f1ed) list_im_pane_ParamLimits

0x5f93,	// (0x0004f1fe) scroll_pane_cp07_ParamLimits

0x4a3c,	// (0x0004dca7) grid_highlight_pane_cp012

0x4c97,	// (0x0004df02) mup_scale_pane_ParamLimits

0xd2ec,	// (0x00056557) main_usb_pane_g1_ParamLimits

0xd2ec,	// (0x00056557) main_usb_pane_g1

0x7c5e,	// (0x00050ec9) main_usb_pane_g2_ParamLimits

0x7c5e,	// (0x00050ec9) main_usb_pane_g2

0x0001,

0xf5de,	// (0x00058849) main_usb_pane_g_ParamLimits

0xf5de,	// (0x00058849) main_usb_pane_g

0x7c6a,	// (0x00050ed5) main_usb_pane_t1_ParamLimits

0x7c6a,	// (0x00050ed5) main_usb_pane_t1

0x7c7c,	// (0x00050ee7) main_usb_pane_t2_ParamLimits

0x7c7c,	// (0x00050ee7) main_usb_pane_t2

0x7c8e,	// (0x00050ef9) main_usb_pane_t3_ParamLimits

0x7c8e,	// (0x00050ef9) main_usb_pane_t3

0x7ca0,	// (0x00050f0b) main_usb_pane_t4_ParamLimits

0x7ca0,	// (0x00050f0b) main_usb_pane_t4

0x7cb2,	// (0x00050f1d) main_usb_pane_t5_ParamLimits

0x7cb2,	// (0x00050f1d) main_usb_pane_t5

0x7cc4,	// (0x00050f2f) main_usb_pane_t6_ParamLimits

0x7cc4,	// (0x00050f2f) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x0005884e) main_usb_pane_t_ParamLimits

0x6f39,	// (0x000501a4) aid_text_placing

0x6f45,	// (0x000501b0) main_location2_pane_t1_ParamLimits

0x6f59,	// (0x000501c4) main_location2_pane_t2_ParamLimits

0x6f6d,	// (0x000501d8) main_location2_pane_t3_ParamLimits

0x6f81,	// (0x000501ec) main_location2_pane_t4_ParamLimits

0x6f81,	// (0x000501ec) main_location2_pane_t4

0xf402,	// (0x0005866d) main_location2_pane_t_ParamLimits

0x4d73,	// (0x0004dfde) find_pinb_pane_g2_ParamLimits

0x4d73,	// (0x0004dfde) find_pinb_pane_g2

0x0001,

0xf150,	// (0x000583bb) find_pinb_pane_g_ParamLimits

0xf150,	// (0x000583bb) find_pinb_pane_g

0x4d7f,	// (0x0004dfea) find_pinb_pane_t1_ParamLimits

0x4d91,	// (0x0004dffc) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x000583c0) find_pinb_pane_t_ParamLimits

0x4a3c,	// (0x0004dca7) main_call3_pane

0x6691,	// (0x0004f8fc) cale_month_day_heading_pane_t1_ParamLimits

0x66ef,	// (0x0004f95a) cale_month_day_heading_pane_t2_ParamLimits

0x6754,	// (0x0004f9bf) cale_month_day_heading_pane_t3_ParamLimits

0x67b9,	// (0x0004fa24) cale_month_day_heading_pane_t4_ParamLimits

0x681e,	// (0x0004fa89) cale_month_day_heading_pane_t5_ParamLimits

0x6883,	// (0x0004faee) cale_month_day_heading_pane_t6_ParamLimits

0x68f0,	// (0x0004fb5b) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00058544) cale_month_day_heading_pane_t_ParamLimits

0xd061,	// (0x000562cc) smil_status_volume_pane

0x780a,	// (0x00050a75) postcard_address_pane_ParamLimits

0x780a,	// (0x00050a75) postcard_address_pane

0x7816,	// (0x00050a81) postcard_message_pane_ParamLimits

0x7816,	// (0x00050a81) postcard_message_pane

0x7c1e,	// (0x00050e89) call2_cli_visual_pane_t1_ParamLimits

0x7c1e,	// (0x00050e89) call2_cli_visual_pane_t1

0x820d,	// (0x00051478) postcard_message_pane_t1_ParamLimits

0x820d,	// (0x00051478) postcard_message_pane_t1

0x81f6,	// (0x00051461) postcard_address_pane_t1_ParamLimits

0x81f6,	// (0x00051461) postcard_address_pane_t1

0x81e7,	// (0x00051452) popup_call3_audio_in_window_ParamLimits

0x81e7,	// (0x00051452) popup_call3_audio_in_window

0x80cf,	// (0x0005133a) bg_popup_call3_in_pane_ParamLimits

0x80cf,	// (0x0005133a) bg_popup_call3_in_pane

0x812d,	// (0x00051398) popup_call3_audio_in_window_g1_ParamLimits

0x812d,	// (0x00051398) popup_call3_audio_in_window_g1

0x8145,	// (0x000513b0) popup_call3_audio_in_window_g2_ParamLimits

0x8145,	// (0x000513b0) popup_call3_audio_in_window_g2

0x815d,	// (0x000513c8) popup_call3_audio_in_window_g3_ParamLimits

0x815d,	// (0x000513c8) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x000588b0) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x000588b0) popup_call3_audio_in_window_g

0x8185,	// (0x000513f0) popup_call3_audio_in_window_t1_ParamLimits

0x8185,	// (0x000513f0) popup_call3_audio_in_window_t1

0x81ad,	// (0x00051418) popup_call3_audio_in_window_t2_ParamLimits

0x81ad,	// (0x00051418) popup_call3_audio_in_window_t2

0x81d5,	// (0x00051440) popup_call3_audio_in_window_t3_ParamLimits

0x81d5,	// (0x00051440) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x000588b9) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x000588b9) popup_call3_audio_in_window_t

0xd5e0,	// (0x0005684b) bg_popup_call3_rect_pane

0xe7f4,	// (0x00057a5f) bg_popup_call3_rect_pane_g1

0x52dc,	// (0x0004e547) bg_popup_call3_rect_pane_g2

0xe7fc,	// (0x00057a67) bg_popup_call3_rect_pane_g3

0xe804,	// (0x00057a6f) bg_popup_call3_rect_pane_g4

0xe80c,	// (0x00057a77) bg_popup_call3_rect_pane_g5

0xe814,	// (0x00057a7f) bg_popup_call3_rect_pane_g6

0xe81c,	// (0x00057a87) bg_popup_call3_rect_pane_g7

0x7395,	// (0x00050600) mup_visualizer_osc_pane

0xd69f,	// (0x0005690a) mup_visualizer_spec_pane

0x80ef,	// (0x0005135a) call3_video_qcif_pane_ParamLimits

0x80ef,	// (0x0005135a) call3_video_qcif_pane

0x80ff,	// (0x0005136a) call3_video_qcif_uncrop_pane_ParamLimits

0x80ff,	// (0x0005136a) call3_video_qcif_uncrop_pane

0x810b,	// (0x00051376) call3_video_subqcif_pane_ParamLimits

0x810b,	// (0x00051376) call3_video_subqcif_pane

0x811d,	// (0x00051388) call3_video_subqcif_uncrop_pane_ParamLimits

0x811d,	// (0x00051388) call3_video_subqcif_uncrop_pane

0x8175,	// (0x000513e0) popup_call3_audio_in_window_g4_ParamLimits

0x8175,	// (0x000513e0) popup_call3_audio_in_window_g4

0x809c,	// (0x00051307) mup_spec_half_pane

0x80a5,	// (0x00051310) mup_spec_half_pane_cp

0xea9a,	// (0x00057d05) mup_osc_middle_pane

0xeaa3,	// (0x00057d0e) mup_visualizer_osc_pane_g1

0x807d,	// (0x000512e8) mup_spec_bar_pane_ParamLimits

0x807d,	// (0x000512e8) mup_spec_bar_pane

0xea87,	// (0x00057cf2) mup_spec_bar_pane_g1

0xea91,	// (0x00057cfc) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x000588a4) mup_spec_bar_pane_g

0x53de,	// (0x0004e649) aid_cale_week_size_cell_pane_ParamLimits

0x53f1,	// (0x0004e65c) bg_cale_heading_pane_ParamLimits

0x5405,	// (0x0004e670) bg_cale_pane_cp01_ParamLimits

0x541e,	// (0x0004e689) cale_week_corner_pane_ParamLimits

0x542f,	// (0x0004e69a) cale_week_day_heading_pane_ParamLimits

0x5443,	// (0x0004e6ae) cale_week_scroll_pane_g1_ParamLimits

0x5454,	// (0x0004e6bf) cale_week_scroll_pane_g2_ParamLimits

0x5465,	// (0x0004e6d0) cale_week_scroll_pane_g3_ParamLimits

0x5476,	// (0x0004e6e1) cale_week_scroll_pane_g4_ParamLimits

0x5487,	// (0x0004e6f2) cale_week_scroll_pane_g5_ParamLimits

0x5498,	// (0x0004e703) cale_week_scroll_pane_g6_ParamLimits

0x54a9,	// (0x0004e714) cale_week_scroll_pane_g7_ParamLimits

0x54bc,	// (0x0004e727) cale_week_scroll_pane_g8_ParamLimits

0x54cf,	// (0x0004e73a) cale_week_scroll_pane_g9_ParamLimits

0x54e0,	// (0x0004e74b) cale_week_scroll_pane_g10_ParamLimits

0x54f1,	// (0x0004e75c) cale_week_scroll_pane_g11_ParamLimits

0x5502,	// (0x0004e76d) cale_week_scroll_pane_g12_ParamLimits

0x5513,	// (0x0004e77e) cale_week_scroll_pane_g13_ParamLimits

0x5524,	// (0x0004e78f) cale_week_scroll_pane_g14_ParamLimits

0x5535,	// (0x0004e7a0) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x0005844c) cale_week_scroll_pane_g_ParamLimits

0x5546,	// (0x0004e7b1) cale_week_time_pane_ParamLimits

0x5559,	// (0x0004e7c4) grid_cale_week_pane_ParamLimits

0x556e,	// (0x0004e7d9) listscroll_cale_week_pane_t1

0x5580,	// (0x0004e7eb) scroll_pane_cp08_ParamLimits

0x6386,	// (0x0004f5f1) cale_month_corner_pane_ParamLimits

0xd037,	// (0x000562a2) cale_month_pane_t1

0x6650,	// (0x0004f8bb) cale_month_week_pane_ParamLimits

0xd2ec,	// (0x00056557) popup_call_status_window_g1_ParamLimits

0x6d81,	// (0x0004ffec) popup_call_status_window_g2_ParamLimits

0x6d8d,	// (0x0004fff8) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x000585f4) popup_call_status_window_g_ParamLimits

0xd353,	// (0x000565be) aid_call2_pane

0x7639,	// (0x000508a4) msg_header_pane_g1

0x780a,	// (0x00050a75) postcard_address2_pane_ParamLimits

0x780a,	// (0x00050a75) postcard_address2_pane

0x7816,	// (0x00050a81) postcard_message2_pane_ParamLimits

0x7816,	// (0x00050a81) postcard_message2_pane

0x800b,	// (0x00051276) message2_row_pane_ParamLimits

0x800b,	// (0x00051276) message2_row_pane

0x8028,	// (0x00051293) address2_row_pane_ParamLimits

0x8028,	// (0x00051293) address2_row_pane

0xea55,	// (0x00057cc0) postcard_message2_row_pane_g1

0xea5d,	// (0x00057cc8) postcard_message2_row_pane_t1

0xea55,	// (0x00057cc0) address2_row_pane_g1

0xea5d,	// (0x00057cc8) address2_row_pane_t1

0x57ca,	// (0x0004ea35) aid_size_cell_vorec

0x4a3c,	// (0x0004dca7) main_rss_pane

0x803b,	// (0x000512a6) rss_list_single_pane_ParamLimits

0x803b,	// (0x000512a6) rss_list_single_pane

0xea6b,	// (0x00057cd6) rss_list_single_pane_t1

0xea79,	// (0x00057ce4) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x0005889f) rss_list_single_pane_t

0x4a3c,	// (0x0004dca7) main_camera2_pane

0x4a3c,	// (0x0004dca7) main_video2_pane

0x8271,	// (0x000514dc) cams_zoom_pane_cp2_ParamLimits

0x8271,	// (0x000514dc) cams_zoom_pane_cp2

0x827d,	// (0x000514e8) image2_vga_pane_ParamLimits

0x827d,	// (0x000514e8) image2_vga_pane

0x828c,	// (0x000514f7) main_camera2_pane_g1_ParamLimits

0x828c,	// (0x000514f7) main_camera2_pane_g1

0x8298,	// (0x00051503) main_camera2_pane_g2_ParamLimits

0x8298,	// (0x00051503) main_camera2_pane_g2

0x82a4,	// (0x0005150f) main_camera2_pane_g3_ParamLimits

0x82a4,	// (0x0005150f) main_camera2_pane_g3

0x82b0,	// (0x0005151b) main_camera2_pane_g4_ParamLimits

0x82b0,	// (0x0005151b) main_camera2_pane_g4

0x82bc,	// (0x00051527) main_camera2_pane_g5_ParamLimits

0x82bc,	// (0x00051527) main_camera2_pane_g5

0x82c8,	// (0x00051533) main_camera2_pane_g6_ParamLimits

0x82c8,	// (0x00051533) main_camera2_pane_g6

0x82d4,	// (0x0005153f) main_camera2_pane_g7_ParamLimits

0x82d4,	// (0x0005153f) main_camera2_pane_g7

0x82e0,	// (0x0005154b) main_camera2_pane_g8_ParamLimits

0x82e0,	// (0x0005154b) main_camera2_pane_g8

0x0008,

0xf655,	// (0x000588c0) main_camera2_pane_g_ParamLimits

0xf655,	// (0x000588c0) main_camera2_pane_g

0x82f8,	// (0x00051563) main_camera2_pane_t1_ParamLimits

0x82f8,	// (0x00051563) main_camera2_pane_t1

0x830a,	// (0x00051575) main_camera2_pane_t2_ParamLimits

0x830a,	// (0x00051575) main_camera2_pane_t2

0x831c,	// (0x00051587) main_camera2_pane_t3_ParamLimits

0x831c,	// (0x00051587) main_camera2_pane_t3

0x832e,	// (0x00051599) main_camera2_pane_t4_ParamLimits

0x832e,	// (0x00051599) main_camera2_pane_t4

0x0006,

0xf668,	// (0x000588d3) main_camera2_pane_t_ParamLimits

0xf668,	// (0x000588d3) main_camera2_pane_t

0x8390,	// (0x000515fb) cams_zoom_pane_cp4_ParamLimits

0x8390,	// (0x000515fb) cams_zoom_pane_cp4

0x83a0,	// (0x0005160b) image2_cif_pane_ParamLimits

0x83a0,	// (0x0005160b) image2_cif_pane

0x83b5,	// (0x00051620) image2_subqcif_pane_ParamLimits

0x83b5,	// (0x00051620) image2_subqcif_pane

0x83c4,	// (0x0005162f) main_video2_pane_g1_ParamLimits

0x83c4,	// (0x0005162f) main_video2_pane_g1

0x83d6,	// (0x00051641) main_video2_pane_g2_ParamLimits

0x83d6,	// (0x00051641) main_video2_pane_g2

0x83e6,	// (0x00051651) main_video2_pane_g3_ParamLimits

0x83e6,	// (0x00051651) main_video2_pane_g3

0x83f6,	// (0x00051661) main_video2_pane_g4_ParamLimits

0x83f6,	// (0x00051661) main_video2_pane_g4

0x8406,	// (0x00051671) main_video2_pane_g5_ParamLimits

0x8406,	// (0x00051671) main_video2_pane_g5

0x8416,	// (0x00051681) main_video2_pane_g6_ParamLimits

0x8416,	// (0x00051681) main_video2_pane_g6

0x0005,

0xf677,	// (0x000588e2) main_video2_pane_g_ParamLimits

0xf677,	// (0x000588e2) main_video2_pane_g

0x8428,	// (0x00051693) main_video2_pane_t1_ParamLimits

0x8428,	// (0x00051693) main_video2_pane_t1

0x8442,	// (0x000516ad) main_video2_pane_t2_ParamLimits

0x8442,	// (0x000516ad) main_video2_pane_t2

0x8468,	// (0x000516d3) main_video2_pane_t3_ParamLimits

0x8468,	// (0x000516d3) main_video2_pane_t3

0x0002,

0xf684,	// (0x000588ef) main_video2_pane_t_ParamLimits

0xf684,	// (0x000588ef) main_video2_pane_t

0x7d7b,	// (0x00050fe6) call_muted_g2

0x0001,

0xf626,	// (0x00058891) call_muted_g

0x4a3c,	// (0x0004dca7) main_mup2_pane

0xeada,	// (0x00057d45) main_mup2_pane_g1_ParamLimits

0xeada,	// (0x00057d45) main_mup2_pane_g1

0x848e,	// (0x000516f9) main_mup2_pane_g2_ParamLimits

0x848e,	// (0x000516f9) main_mup2_pane_g2

0x8710,	// (0x0005197b) main_mup_pane_g13_cp1

0x8718,	// (0x00051983) mup_volume_pane_cp1

0x84ae,	// (0x00051719) main_mup2_pane_g4_ParamLimits

0x84ae,	// (0x00051719) main_mup2_pane_g4

0x84c3,	// (0x0005172e) main_mup2_pane_g5_ParamLimits

0x84c3,	// (0x0005172e) main_mup2_pane_g5

0x84d8,	// (0x00051743) main_mup2_pane_g6_ParamLimits

0x84d8,	// (0x00051743) main_mup2_pane_g6

0x84ed,	// (0x00051758) main_mup2_pane_g7_ParamLimits

0x84ed,	// (0x00051758) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x000588f6) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x000588f6) main_mup2_pane_g

0x8509,	// (0x00051774) main_mup2_pane_t1_ParamLimits

0x8509,	// (0x00051774) main_mup2_pane_t1

0x8520,	// (0x0005178b) main_mup2_pane_t2_ParamLimits

0x8520,	// (0x0005178b) main_mup2_pane_t2

0x8537,	// (0x000517a2) main_mup2_pane_t3_ParamLimits

0x8537,	// (0x000517a2) main_mup2_pane_t3

0x854e,	// (0x000517b9) main_mup2_pane_t4_ParamLimits

0x854e,	// (0x000517b9) main_mup2_pane_t4

0x8568,	// (0x000517d3) main_mup2_pane_t5_ParamLimits

0x8568,	// (0x000517d3) main_mup2_pane_t5

0x8582,	// (0x000517ed) main_mup2_pane_t6_ParamLimits

0x8582,	// (0x000517ed) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x00058905) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x00058905) main_mup2_pane_t

0x85ba,	// (0x00051825) mup2_visualizer_pane_ParamLimits

0x85ba,	// (0x00051825) mup2_visualizer_pane

0x85f0,	// (0x0005185b) mup_progress_pane_cp_ParamLimits

0x85f0,	// (0x0005185b) mup_progress_pane_cp

0x86fb,	// (0x00051966) mup_volume_pane_cp_ParamLimits

0x86fb,	// (0x00051966) mup_volume_pane_cp

0x8607,	// (0x00051872) mup2_visualizer_pane_g1_ParamLimits

0x8607,	// (0x00051872) mup2_visualizer_pane_g1

0xeae6,	// (0x00057d51) mup2_visualizer_pane_g2_ParamLimits

0xeae6,	// (0x00057d51) mup2_visualizer_pane_g2

0x861c,	// (0x00051887) mup2_visualizer_pane_g3_ParamLimits

0x861c,	// (0x00051887) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x00058912) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x00058912) mup2_visualizer_pane_g

0xd8c6,	// (0x00056b31) aid_size_cell_fmradio

0x7e91,	// (0x000510fc) aid_height_parent_landcape

0x605e,	// (0x0004f2c9) wml_content_pane_cp

0x6066,	// (0x0004f2d1) wml_tabs_pane

0x606f,	// (0x0004f2da) popup_wml_miniature_window

0x6077,	// (0x0004f2e2) scroll_pane_cp021

0x608b,	// (0x0004f2f6) wml_content_pane_comp8

0x4a3c,	// (0x0004dca7) bg_popup_sub_pane_cp05

0xeb04,	// (0x00057d6f) popup_wml_miniature_window_g1

0xeb0c,	// (0x00057d77) wml_miniature_view_pane

0x862a,	// (0x00051895) aid_size_wml_view

0x8632,	// (0x0005189d) wml_miniature_view_pane_g1

0x863b,	// (0x000518a6) wml_miniature_view_pane_g2

0x8644,	// (0x000518af) wml_miniature_view_pane_g3

0x864c,	// (0x000518b7) wml_miniature_view_pane_g4

0x8654,	// (0x000518bf) wml_miniature_view_pane_g5

0x865c,	// (0x000518c7) wml_miniature_view_pane_g6

0x8664,	// (0x000518cf) wml_miniature_view_pane_g7

0x866c,	// (0x000518d7) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x00058919) wml_miniature_view_pane_g

0xeada,	// (0x00057d45) background_graphic_ParamLimits

0xeada,	// (0x00057d45) background_graphic

0xeb14,	// (0x00057d7f) wml_tabs_2_pane

0xeb1d,	// (0x00057d88) wml_tabs_3_pane_ParamLimits

0xeb1d,	// (0x00057d88) wml_tabs_3_pane

0xeb2f,	// (0x00057d9a) wml_tabs_4_pane_ParamLimits

0xeb2f,	// (0x00057d9a) wml_tabs_4_pane

0xeb45,	// (0x00057db0) wml_tabs_5_pane_ParamLimits

0xeb45,	// (0x00057db0) wml_tabs_5_pane

0xeb5f,	// (0x00057dca) wml_tabs_pane_g2_ParamLimits

0xeb5f,	// (0x00057dca) wml_tabs_pane_g2

0xeb73,	// (0x00057dde) wml_tabs_pane_g3_ParamLimits

0xeb73,	// (0x00057dde) wml_tabs_pane_g3

0x8674,	// (0x000518df) wml_tabs_2_active_pane_ParamLimits

0x8674,	// (0x000518df) wml_tabs_2_active_pane

0x8684,	// (0x000518ef) wml_tabs_2_passive_pane_ParamLimits

0x8684,	// (0x000518ef) wml_tabs_2_passive_pane

0x8694,	// (0x000518ff) wml_tabs_3_active_pane_cp_ParamLimits

0x8694,	// (0x000518ff) wml_tabs_3_active_pane_cp

0x86a5,	// (0x00051910) wml_tabs_3_passive_pane_ParamLimits

0x86a5,	// (0x00051910) wml_tabs_3_passive_pane

0x86b6,	// (0x00051921) wml_tabs_3_passive_pane_cp_ParamLimits

0x86b6,	// (0x00051921) wml_tabs_3_passive_pane_cp

0x86c7,	// (0x00051932) tabs_4_active_pane

0x86cf,	// (0x0005193a) tabs_4_passive_pane

0x86d7,	// (0x00051942) tabs_4_passive_pane_cp

0x86df,	// (0x0005194a) tabs_4_passive_pane_cp2

0x7c56,	// (0x00050ec1) aid_height_text

0x735e,	// (0x000505c9) mup_volume_cont_pane_ParamLimits

0x735e,	// (0x000505c9) mup_volume_cont_pane

0x4d2d,	// (0x0004df98) aid_size_cell_pinb

0x4d37,	// (0x0004dfa2) aid_size_list_pinb

0x85d9,	// (0x00051844) mup2_volume_cont_pane_ParamLimits

0x85d9,	// (0x00051844) mup2_volume_cont_pane

0x86e7,	// (0x00051952) mup2_volume_cont_pane_g1_ParamLimits

0x86e7,	// (0x00051952) mup2_volume_cont_pane_g1

0x42ce,	// (0x0004d539) aid_size_cell_touch_ParamLimits

0x42ce,	// (0x0004d539) aid_size_cell_touch

0x4571,	// (0x0004d7dc) touch_pane_ParamLimits

0x4571,	// (0x0004d7dc) touch_pane

0x42b0,	// (0x0004d51b) main_rss2_pane

0xeb90,	// (0x00057dfb) listscroll_rss2_pane

0xeb99,	// (0x00057e04) rss2_navigation_pane

0xeba1,	// (0x00057e0c) list_rss2_pane

0xd493,	// (0x000566fe) scroll_pane_cp22

0xeba9,	// (0x00057e14) rss2_navigation_pane_g1

0xebb2,	// (0x00057e1d) rss2_navigation_pane_g2

0xebba,	// (0x00057e25) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x0005892a) rss2_navigation_pane_g

0xebc2,	// (0x00057e2d) rss2_navigation_pane_t1

0x8720,	// (0x0005198b) rss2_list_single_pane_ParamLimits

0x8720,	// (0x0005198b) rss2_list_single_pane

0xebd0,	// (0x00057e3b) rss2_list_single_pane_t2

0xebde,	// (0x00057e49) rss2_list_single_pane_t3_ParamLimits

0xebde,	// (0x00057e49) rss2_list_single_pane_t3

0xebfb,	// (0x00057e66) rss2_list_single_pane_t4

0x6ad8,	// (0x0004fd43) smil_status_pane_g1

0xe9ed,	// (0x00057c58) main_image2_pane_ParamLimits

0xe9ed,	// (0x00057c58) main_image2_pane

0x82ec,	// (0x00051557) main_camera2_pane_g9_ParamLimits

0x82ec,	// (0x00051557) main_camera2_pane_g9

0x8340,	// (0x000515ab) main_camera2_pane_t5_ParamLimits

0x8340,	// (0x000515ab) main_camera2_pane_t5

0x8352,	// (0x000515bd) main_camera2_pane_t6_ParamLimits

0x8352,	// (0x000515bd) main_camera2_pane_t6

0x875c,	// (0x000519c7) main_image2_pane_g1_ParamLimits

0x875c,	// (0x000519c7) main_image2_pane_g1

0x79eb,	// (0x00050c56) smil2_video_pane_ParamLimits

0x79eb,	// (0x00050c56) smil2_video_pane

0x055e,	// (0x000497c9) aid_zoom_text_primary_cp

0x4524,	// (0x0004d78f) popup_preview_fixed_window

0x5f1a,	// (0x0004f185) im_reading_pane_g1

0x8236,	// (0x000514a1) cams2_bc_adjust_pane_cp_ParamLimits

0x8236,	// (0x000514a1) cams2_bc_adjust_pane_cp

0x8382,	// (0x000515ed) cams2_bc_adjust_pane_ParamLimits

0x8382,	// (0x000515ed) cams2_bc_adjust_pane

0xf0f3,	// (0x0005835e) cams2_bc_adjust_pane_g1

0x8768,	// (0x000519d3) cams2_slider_pane

0x8771,	// (0x000519dc) cams2_slider_pane_g1

0x877a,	// (0x000519e5) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x00058931) cams2_slider_pane_g

0x4e9e,	// (0x0004e109) calc_display_pane_ParamLimits

0x4ebc,	// (0x0004e127) calc_paper_pane_ParamLimits

0x4ed8,	// (0x0004e143) grid_calc_pane_ParamLimits

0x6deb,	// (0x00050056) popup_clock_digital_window_t1_ParamLimits

0xd863,	// (0x00056ace) main_image_pane_t1

0x4e84,	// (0x0004e0ef) aid_size_cell_calc_ParamLimits

0x4e84,	// (0x0004e0ef) aid_size_cell_calc

0x7ec3,	// (0x0005112e) popup_blid_sat_info2_window_ParamLimits

0x7ec3,	// (0x0005112e) popup_blid_sat_info2_window

0xec11,	// (0x00057e7c) aid_size_cell_blid

0xec19,	// (0x00057e84) bg_popup_window_pane_cp07

0xec3c,	// (0x00057ea7) grid_popup_blid_pane

0xec46,	// (0x00057eb1) heading_pane_cp05_ParamLimits

0xec46,	// (0x00057eb1) heading_pane_cp05

0xed10,	// (0x00057f7b) cell_popup_blid_pane_ParamLimits

0xed10,	// (0x00057f7b) cell_popup_blid_pane

0xed36,	// (0x00057fa1) cell_popup_blid_pane_g1

0xed3e,	// (0x00057fa9) cell_popup_blid_pane_t1

0x859f,	// (0x0005180a) mup2_indicator_pane_ParamLimits

0x859f,	// (0x0005180a) mup2_indicator_pane

0xd5e0,	// (0x0005684b) mup2_visualizer_osc_pane

0xeaf2,	// (0x00057d5d) mup2_visualizer_spec_pane_ParamLimits

0xeaf2,	// (0x00057d5d) mup2_visualizer_spec_pane

0x8794,	// (0x000519ff) mup2_spec_half_pane

0x879d,	// (0x00051a08) mup2_spec_half_pane_cp

0x87a7,	// (0x00051a12) mup2_spec_bar_pane_ParamLimits

0x87a7,	// (0x00051a12) mup2_spec_bar_pane

0xea87,	// (0x00057cf2) mup2_spec_bar_pane_g1

0xea91,	// (0x00057cfc) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x000588a4) mup2_spec_bar_pane_g

0x87c6,	// (0x00051a31) mup2_osc_middle_pane

0xeaa3,	// (0x00057d0e) mup2_visualizer_osc_pane_g1

0x45e8,	// (0x0004d853) popup_number_entry_window_t1_ParamLimits

0x45fb,	// (0x0004d866) popup_number_entry_window_t2_ParamLimits

0x460d,	// (0x0004d878) popup_number_entry_window_t3_ParamLimits

0x461f,	// (0x0004d88a) popup_number_entry_window_t5_ParamLimits

0x461f,	// (0x0004d88a) popup_number_entry_window_t5

0xf0fb,	// (0x00058366) popup_number_entry_window_t_ParamLimits

0x465e,	// (0x0004d8c9) text_title_cp2_ParamLimits

0x76d2,	// (0x0005093d) aid_hotspot_pointer_text2_pane

0x776c,	// (0x000509d7) main_viewer_pane_g9_ParamLimits

0x776c,	// (0x000509d7) main_viewer_pane_g9

0xd037,	// (0x000562a2) cale_month_pane_t1_ParamLimits

0xd074,	// (0x000562df) bg_cale_pane_ParamLimits

0xd08c,	// (0x000562f7) list_cale_pane_ParamLimits

0x556e,	// (0x0004e7d9) listscroll_cale_day_pane_t1

0xd09d,	// (0x00056308) scroll_pane_cp09_ParamLimits

0x739d,	// (0x00050608) main_mup_eq_pane_t1_ParamLimits

0x739d,	// (0x00050608) main_mup_eq_pane_t1

0x73b7,	// (0x00050622) main_mup_eq_pane_t2_ParamLimits

0x73b7,	// (0x00050622) main_mup_eq_pane_t2

0x73cf,	// (0x0005063a) main_mup_eq_pane_t3_ParamLimits

0x73cf,	// (0x0005063a) main_mup_eq_pane_t3

0x73e7,	// (0x00050652) main_mup_eq_pane_t4_ParamLimits

0x73e7,	// (0x00050652) main_mup_eq_pane_t4

0x73ff,	// (0x0005066a) main_mup_eq_pane_t5_ParamLimits

0x73ff,	// (0x0005066a) main_mup_eq_pane_t5

0x7417,	// (0x00050682) main_mup_eq_pane_t6_ParamLimits

0x7417,	// (0x00050682) main_mup_eq_pane_t6

0x742b,	// (0x00050696) main_mup_eq_pane_t7_ParamLimits

0x742b,	// (0x00050696) main_mup_eq_pane_t7

0x743f,	// (0x000506aa) main_mup_eq_pane_t8_ParamLimits

0x743f,	// (0x000506aa) main_mup_eq_pane_t8

0x7455,	// (0x000506c0) main_mup_eq_pane_t9_ParamLimits

0x7455,	// (0x000506c0) main_mup_eq_pane_t9

0x746d,	// (0x000506d8) main_mup_eq_pane_t10_ParamLimits

0x746d,	// (0x000506d8) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x000586f3) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x000586f3) main_mup_eq_pane_t

0x752a,	// (0x00050795) mup_equalizer_pane_cp5_ParamLimits

0x7540,	// (0x000507ab) mup_equalizer_pane_cp6_ParamLimits

0x7558,	// (0x000507c3) mup_equalizer_pane_cp7_ParamLimits

0x42b0,	// (0x0004d51b) main_gallery_pane

0xeaac,	// (0x00057d17) smil2_volume_pane

0xeab4,	// (0x00057d1f) smil_status_volume_pane_g1_ParamLimits

0xeac7,	// (0x00057d32) smil_status_volume_pane_g2_ParamLimits

0x80ad,	// (0x00051318) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x000588a9) smil_status_volume_pane_g_ParamLimits

0xec19,	// (0x00057e84) bg_popup_window_pane_cp07_ParamLimits

0xec27,	// (0x00057e92) blid_firmament_pane

0x87cf,	// (0x00051a3a) aid_size_cell_gallery_ParamLimits

0x87cf,	// (0x00051a3a) aid_size_cell_gallery

0x87dd,	// (0x00051a48) grid_gallery_pane_ParamLimits

0x87dd,	// (0x00051a48) grid_gallery_pane

0x87ed,	// (0x00051a58) cell_gallery_pane_ParamLimits

0x87ed,	// (0x00051a58) cell_gallery_pane

0xed4c,	// (0x00057fb7) bg_cell_gallery_focus_pane_ParamLimits

0xed4c,	// (0x00057fb7) bg_cell_gallery_focus_pane

0xed5e,	// (0x00057fc9) cell_gallery_pane_g1_ParamLimits

0xed5e,	// (0x00057fc9) cell_gallery_pane_g1

0x883b,	// (0x00051aa6) cell_gallery_pane_g2_ParamLimits

0x883b,	// (0x00051aa6) cell_gallery_pane_g2

0x8848,	// (0x00051ab3) cell_gallery_pane_g3_ParamLimits

0x8848,	// (0x00051ab3) cell_gallery_pane_g3

0xed6a,	// (0x00057fd5) cell_gallery_pane_g4_ParamLimits

0xed6a,	// (0x00057fd5) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x00058957) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x00058957) cell_gallery_pane_g

0xed76,	// (0x00057fe1) bg_cell_gallery_focus_pane_g1

0xed7e,	// (0x00057fe9) bg_cell_gallery_focus_pane_g2

0xed86,	// (0x00057ff1) bg_cell_gallery_focus_pane_g3

0xed8e,	// (0x00057ff9) bg_cell_gallery_focus_pane_g4

0xed96,	// (0x00058001) bg_cell_gallery_focus_pane_g5

0xed9e,	// (0x00058009) bg_cell_gallery_focus_pane_g6

0xeda6,	// (0x00058011) bg_cell_gallery_focus_pane_g7

0xedae,	// (0x00058019) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x00058960) bg_cell_gallery_focus_pane_g

0xedb6,	// (0x00058021) aid_firma_cardinal

0xedca,	// (0x00058035) blid_firmament_pane_t1

0xede1,	// (0x0005804c) blid_firmament_pane_t2

0xedf8,	// (0x00058063) blid_firmament_pane_t3

0xee0f,	// (0x0005807a) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x00058971) blid_firmament_pane_t

0xee26,	// (0x00058091) blid_sat_info_pane

0xee36,	// (0x000580a1) blid_sat_info_pane_g1

0xee36,	// (0x000580a1) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x0005897a) blid_sat_info_pane_g

0xee40,	// (0x000580ab) blid_sat_info_pane_t1

0xee4e,	// (0x000580b9) smil2_volume_content_pane

0xee57,	// (0x000580c2) smil2_volume_pane_g1

0xee5f,	// (0x000580ca) smil2_volume_content_pane_g1

0xee68,	// (0x000580d3) smil2_volume_content_pane_g2

0xee71,	// (0x000580dc) smil2_volume_content_pane_g3

0xee7a,	// (0x000580e5) smil2_volume_content_pane_g4

0xee83,	// (0x000580ee) smil2_volume_content_pane_g5

0xee8c,	// (0x000580f7) smil2_volume_content_pane_g6

0xee95,	// (0x00058100) smil2_volume_content_pane_g7

0xee9e,	// (0x00058109) smil2_volume_content_pane_g8

0xeea7,	// (0x00058112) smil2_volume_content_pane_g9

0xeeb0,	// (0x0005811b) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x0005897f) smil2_volume_content_pane_g

0x55d6,	// (0x0004e841) cale_week_day_heading_pane_t1_ParamLimits

0x55ea,	// (0x0004e855) cale_week_day_heading_pane_t2_ParamLimits

0x55fe,	// (0x0004e869) cale_week_day_heading_pane_t3_ParamLimits

0x5612,	// (0x0004e87d) cale_week_day_heading_pane_t4_ParamLimits

0x5626,	// (0x0004e891) cale_week_day_heading_pane_t5_ParamLimits

0x563a,	// (0x0004e8a5) cale_week_day_heading_pane_t6_ParamLimits

0x564e,	// (0x0004e8b9) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x0005846b) cale_week_day_heading_pane_t_ParamLimits

0x5662,	// (0x0004e8cd) bg_cale_side_pane_ParamLimits

0x5670,	// (0x0004e8db) cale_week_time_pane_t1_ParamLimits

0x5688,	// (0x0004e8f3) cale_week_time_pane_t2_ParamLimits

0x56a0,	// (0x0004e90b) cale_week_time_pane_t3_ParamLimits

0x56b8,	// (0x0004e923) cale_week_time_pane_t4_ParamLimits

0x56d0,	// (0x0004e93b) cale_week_time_pane_t5_ParamLimits

0x56e8,	// (0x0004e953) cale_week_time_pane_t6_ParamLimits

0x5700,	// (0x0004e96b) cale_week_time_pane_t7_ParamLimits

0x5718,	// (0x0004e983) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x0005847a) cale_week_time_pane_t_ParamLimits

0x5730,	// (0x0004e99b) cell_cale_week_pane_g2_ParamLimits

0x5662,	// (0x0004e8cd) bg_cale_side_pane_cp01_ParamLimits

0x6965,	// (0x0004fbd0) cale_month_week_pane_t1_ParamLimits

0x697c,	// (0x0004fbe7) cale_month_week_pane_t2_ParamLimits

0x6993,	// (0x0004fbfe) cale_month_week_pane_t3_ParamLimits

0x69aa,	// (0x0004fc15) cale_month_week_pane_t4_ParamLimits

0x69c1,	// (0x0004fc2c) cale_month_week_pane_t5_ParamLimits

0x69d8,	// (0x0004fc43) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x00058553) cale_month_week_pane_t_ParamLimits

0x6aa5,	// (0x0004fd10) cell_cale_month_pane_g1_ParamLimits

0x42b0,	// (0x0004d51b) main_cale_event_viewer_pane

0x42b0,	// (0x0004d51b) listscroll_cale_event_viewer_pane

0xeeb9,	// (0x00058124) list_cale_ev_pane

0xeec1,	// (0x0005812c) scroll_pane_cp023

0xeecd,	// (0x00058138) field_cale_ev_pane_ParamLimits

0xeecd,	// (0x00058138) field_cale_ev_pane

0xeee7,	// (0x00058152) field_cale_ev_content_pane_ParamLimits

0xeee7,	// (0x00058152) field_cale_ev_content_pane

0xeef3,	// (0x0005815e) field_cale_ev_pane_g1_ParamLimits

0xeef3,	// (0x0005815e) field_cale_ev_pane_g1

0xeeff,	// (0x0005816a) field_cale_ev_pane_g2_ParamLimits

0xeeff,	// (0x0005816a) field_cale_ev_pane_g2

0xef17,	// (0x00058182) field_cale_ev_pane_g3_ParamLimits

0xef17,	// (0x00058182) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x00058994) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x00058994) field_cale_ev_pane_g

0xef2f,	// (0x0005819a) field_cale_ev_pane_t1_ParamLimits

0xef2f,	// (0x0005819a) field_cale_ev_pane_t1

0xef46,	// (0x000581b1) field_cale_ev_content_pane_t1_ParamLimits

0xef46,	// (0x000581b1) field_cale_ev_content_pane_t1

0xd749,	// (0x000569b4) bg_button_pane_cp01

0x5039,	// (0x0004e2a4) listscroll_cale_week_pane_ParamLimits

0x53d4,	// (0x0004e63f) popup_toolbar_window_cp01

0x556e,	// (0x0004e7d9) listscroll_cale_week_pane_t1_ParamLimits

0x5039,	// (0x0004e2a4) listscroll_cale_day_pane_ParamLimits

0x53d4,	// (0x0004e63f) popup_toolbar_window_cp02

0x556e,	// (0x0004e7d9) listscroll_cale_day_pane_t1_ParamLimits

0x5039,	// (0x0004e2a4) main_cale_month_pane_ParamLimits

0x7f87,	// (0x000511f2) popup_toolbar_window_cp03_ParamLimits

0x7f87,	// (0x000511f2) popup_toolbar_window_cp03

0x78fd,	// (0x00050b68) main_image_pane_g2_ParamLimits

0x78fd,	// (0x00050b68) main_image_pane_g2

0x7909,	// (0x00050b74) main_image_pane_g3_ParamLimits

0x7909,	// (0x00050b74) main_image_pane_g3

0x0002,

0xf51a,	// (0x00058785) main_image_pane_g_ParamLimits

0xf51a,	// (0x00058785) main_image_pane_g

0xd863,	// (0x00056ace) main_image_pane_t1_ParamLimits

0x7915,	// (0x00050b80) main_image_pane_t2_ParamLimits

0x7915,	// (0x00050b80) main_image_pane_t2

0x7927,	// (0x00050b92) main_image_pane_t3_ParamLimits

0x7927,	// (0x00050b92) main_image_pane_t3

0x7939,	// (0x00050ba4) main_image_pane_t4_ParamLimits

0x7939,	// (0x00050ba4) main_image_pane_t4

0x0003,

0xf521,	// (0x0005878c) main_image_pane_t_ParamLimits

0xf521,	// (0x0005878c) main_image_pane_t

0x794b,	// (0x00050bb6) popup_image_details_window_cp01

0x7955,	// (0x00050bc0) popup_toobar_trans_pane_cp01_ParamLimits

0x7955,	// (0x00050bc0) popup_toobar_trans_pane_cp01

0x7f0c,	// (0x00051177) popup_image_details_window_ParamLimits

0x7f0c,	// (0x00051177) popup_image_details_window

0xea0d,	// (0x00057c78) popup_image_focus_window

0x8228,	// (0x00051493) camera2_autofocus_pane_ParamLimits

0x8228,	// (0x00051493) camera2_autofocus_pane

0x42b0,	// (0x0004d51b) bg_popup_sub_pane_cp06

0xef63,	// (0x000581ce) popup_image_focus_window_g1

0xef6b,	// (0x000581d6) popup_image_focus_window_g2

0xef73,	// (0x000581de) popup_image_focus_window_g3

0xef7b,	// (0x000581e6) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x0005899b) popup_image_focus_window_g

0xef83,	// (0x000581ee) popup_image_focus_window_t1

0xef91,	// (0x000581fc) popup_image_focus_window_t2

0xefa1,	// (0x0005820c) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x000589a4) popup_image_focus_window_t

0xefaf,	// (0x0005821a) camera2_autofocus_pane_g1

0xe9ed,	// (0x00057c58) bg_tb_trans_pane_cp01

0xefbd,	// (0x00058228) popup_image_details_window_g1

0xefd0,	// (0x0005823b) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x000589b6) popup_image_details_window_g

0xeff9,	// (0x00058264) popup_image_details_window_t1

0xf00b,	// (0x00058276) popup_image_details_window_t2

0xf024,	// (0x0005828f) popup_image_details_window_t3

0xf038,	// (0x000582a3) popup_image_details_window_t4

0xf053,	// (0x000582be) popup_image_details_window_t5

0x0004,

0xf752,	// (0x000589bd) popup_image_details_window_t

0x5001,	// (0x0004e26c) bg_calc_paper_pane_ParamLimits

0x5015,	// (0x0004e280) grid_highlight_pane_cp013

0x501f,	// (0x0004e28a) list_calc_pane_ParamLimits

0x5031,	// (0x0004e29c) scroll_pane_cp024

0x5039,	// (0x0004e2a4) bg_calc_display_pane_ParamLimits

0x5045,	// (0x0004e2b0) calc_display_pane_t1_ParamLimits

0x505a,	// (0x0004e2c5) calc_display_pane_t2_ParamLimits

0x506f,	// (0x0004e2da) calc_display_pane_t3_ParamLimits

0xf182,	// (0x000583ed) calc_display_pane_t_ParamLimits

0x51a9,	// (0x0004e414) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0005840a) cell_calc_pane_g

0x51b2,	// (0x0004e41d) cell_calc_pane_t1

0x51c1,	// (0x0004e42c) grid_highlight_pane_cp02_ParamLimits

0x51d7,	// (0x0004e442) toolbar_button_pane_cp01_ParamLimits

0x51d7,	// (0x0004e442) toolbar_button_pane_cp01

0xd8a8,	// (0x00056b13) temp_image_control_pane_ParamLimits

0xd8a8,	// (0x00056b13) temp_image_control_pane

0xe9ed,	// (0x00057c58) main_mp3_pane

0xf06d,	// (0x000582d8) temp_image_control_pane_g1_ParamLimits

0xf06d,	// (0x000582d8) temp_image_control_pane_g1

0xf07b,	// (0x000582e6) temp_image_control_pane_g2_ParamLimits

0xf07b,	// (0x000582e6) temp_image_control_pane_g2

0xf08d,	// (0x000582f8) temp_image_control_pane_g3_ParamLimits

0xf08d,	// (0x000582f8) temp_image_control_pane_g3

0x8885,	// (0x00051af0) temp_image_control_pane_g4_ParamLimits

0x8885,	// (0x00051af0) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x000589c8) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x000589c8) temp_image_control_pane_g

0xf06d,	// (0x000582d8) main_mp3_pane_g1

0x8896,	// (0x00051b01) main_mp3_pane_g2

0x0007,

0xf766,	// (0x000589d1) main_mp3_pane_g

0x0973,	// (0x00049bde) main_mp3_pane_t1

0x58e4,	// (0x0004eb4f) main_camera_pane_g8_ParamLimits

0x58e4,	// (0x0004eb4f) main_camera_pane_g8

0x5a47,	// (0x0004ecb2) main_video_pane_g7_ParamLimits

0x5a47,	// (0x0004ecb2) main_video_pane_g7

0x8370,	// (0x000515db) main_camera2_pane_t7_ParamLimits

0x8370,	// (0x000515db) main_camera2_pane_t7

0x601e,	// (0x0004f289) scroll_pane_cp025_ParamLimits

0x601e,	// (0x0004f289) scroll_pane_cp025

0x6032,	// (0x0004f29d) scroll_pane_cp026_ParamLimits

0x6032,	// (0x0004f29d) scroll_pane_cp026

0x6041,	// (0x0004f2ac) wml_content_pane_ParamLimits

0x42b0,	// (0x0004d51b) main_touch_calib_pane

0x893a,	// (0x00051ba5) main_touch_calib_pane_g1

0x8946,	// (0x00051bb1) main_touch_calib_pane_g2

0x8952,	// (0x00051bbd) main_touch_calib_pane_g3

0x895e,	// (0x00051bc9) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x000589ef) main_touch_calib_pane_g

0x896a,	// (0x00051bd5) main_touch_calib_pane_t1

0x8981,	// (0x00051bec) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x000589f8) main_touch_calib_pane_t

0xd521,	// (0x0005678c) mup_progress_pane_cp02

0xd540,	// (0x000567ab) navi_pane_g1

0xd5a2,	// (0x0005680d) navi_pane_mp_t3

0xe9ed,	// (0x00057c58) main_mp3_pane_ParamLimits

0x7fc5,	// (0x00051230) navi_pane_ParamLimits

0xf06d,	// (0x000582d8) main_mp3_pane_g1_ParamLimits

0x8896,	// (0x00051b01) main_mp3_pane_g2_ParamLimits

0x88a2,	// (0x00051b0d) main_mp3_pane_g3_ParamLimits

0x88a2,	// (0x00051b0d) main_mp3_pane_g3

0x88ae,	// (0x00051b19) main_mp3_pane_g4_ParamLimits

0x88ae,	// (0x00051b19) main_mp3_pane_g4

0xf09d,	// (0x00058308) main_mp3_pane_g5_ParamLimits

0xf09d,	// (0x00058308) main_mp3_pane_g5

0xf0ab,	// (0x00058316) main_mp3_pane_g6_ParamLimits

0xf0ab,	// (0x00058316) main_mp3_pane_g6

0xf0b8,	// (0x00058323) main_mp3_pane_g7_ParamLimits

0xf0b8,	// (0x00058323) main_mp3_pane_g7

0x0967,	// (0x00049bd2) main_mp3_pane_g8_ParamLimits

0x0967,	// (0x00049bd2) main_mp3_pane_g8

0xf766,	// (0x000589d1) main_mp3_pane_g_ParamLimits

0x88ba,	// (0x00051b25) main_mp3_pane_t2

0x88ca,	// (0x00051b35) main_mp3_pane_t3

0x0981,	// (0x00049bec) main_mp3_pane_t4

0x098f,	// (0x00049bfa) main_mp3_pane_t5

0x0005,

0xf777,	// (0x000589e2) main_mp3_pane_t

0x099d,	// (0x00049c08) mup_progress_pane_cp01

0x055e,	// (0x000497c9) aid_zoom_text_secondary2

0xeeb9,	// (0x00058124) list_cale_ev2_pane

0xeec1,	// (0x0005812c) scroll_pane_cp023_ParamLimits

0x89d4,	// (0x00051c3f) field_cale_ev2_pane_ParamLimits

0x89d4,	// (0x00051c3f) field_cale_ev2_pane

0x09a5,	// (0x00049c10) field_cale_ev2_pane_g1_ParamLimits

0x09a5,	// (0x00049c10) field_cale_ev2_pane_g1

0x09b1,	// (0x00049c1c) field_cale_ev2_pane_g2_ParamLimits

0x09b1,	// (0x00049c1c) field_cale_ev2_pane_g2

0x09c9,	// (0x00049c34) field_cale_ev2_pane_g3_ParamLimits

0x09c9,	// (0x00049c34) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x00058a03) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x00058a03) field_cale_ev2_pane_g

0x8a08,	// (0x00051c73) field_cale_ev2_pane_t1_ParamLimits

0x8a08,	// (0x00051c73) field_cale_ev2_pane_t1

0x8a1f,	// (0x00051c8a) field_cale_ev2_pane_t2_ParamLimits

0x8a1f,	// (0x00051c8a) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x00058a0c) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x00058a0c) field_cale_ev2_pane_t

0x77d4,	// (0x00050a3f) main_postcard_pane_g5_ParamLimits

0x77d4,	// (0x00050a3f) main_postcard_pane_g5

0x77e2,	// (0x00050a4d) main_postcard_pane_g6_ParamLimits

0x77e2,	// (0x00050a4d) main_postcard_pane_g6

0x5861,	// (0x0004eacc) camera2_autofocus_pane_cp_ParamLimits

0x5861,	// (0x0004eacc) camera2_autofocus_pane_cp

0xe9ed,	// (0x00057c58) main_mup3_pane

0x8a54,	// (0x00051cbf) main_mup3_pane_g1_ParamLimits

0x8a54,	// (0x00051cbf) main_mup3_pane_g1

0x8a75,	// (0x00051ce0) main_mup3_pane_g2_ParamLimits

0x8a75,	// (0x00051ce0) main_mup3_pane_g2

0x8af0,	// (0x00051d5b) main_mup3_pane_g3_ParamLimits

0x8af0,	// (0x00051d5b) main_mup3_pane_g3

0x8b2f,	// (0x00051d9a) main_mup3_pane_g4_ParamLimits

0x8b2f,	// (0x00051d9a) main_mup3_pane_g4

0x8b6e,	// (0x00051dd9) main_mup3_pane_g5_ParamLimits

0x8b6e,	// (0x00051dd9) main_mup3_pane_g5

0x8baf,	// (0x00051e1a) main_mup3_pane_g6_ParamLimits

0x8baf,	// (0x00051e1a) main_mup3_pane_g6

0x09ed,	// (0x00049c58) main_mup3_pane_g7_ParamLimits

0x09ed,	// (0x00049c58) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x00058a1c) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x00058a1c) main_mup3_pane_g

0x8c21,	// (0x00051e8c) main_mup3_pane_t1_ParamLimits

0x8c21,	// (0x00051e8c) main_mup3_pane_t1

0x8c90,	// (0x00051efb) main_mup3_pane_t2_ParamLimits

0x8c90,	// (0x00051efb) main_mup3_pane_t2

0x8d59,	// (0x00051fc4) main_mup3_pane_t4_ParamLimits

0x8d59,	// (0x00051fc4) main_mup3_pane_t4

0x8dab,	// (0x00052016) main_mup3_pane_t5_ParamLimits

0x8dab,	// (0x00052016) main_mup3_pane_t5

0x8e53,	// (0x000520be) main_mup3_pane_t6_ParamLimits

0x8e53,	// (0x000520be) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x00058a2d) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x00058a2d) main_mup3_pane_t

0x8efb,	// (0x00052166) mup3_progress_pane_ParamLimits

0x8efb,	// (0x00052166) mup3_progress_pane

0x8f60,	// (0x000521cb) popup_mup3_control_window_ParamLimits

0x8f60,	// (0x000521cb) popup_mup3_control_window

0x09fb,	// (0x00049c66) popup_mup3_text_window

0x8f79,	// (0x000521e4) mup3_progress_pane_t1

0x8f90,	// (0x000521fb) mup3_progress_pane_t2

0x0a03,	// (0x00049c6e) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x00058a3a) mup3_progress_pane_t

0x0a1a,	// (0x00049c85) mup_progress_pane_cp03

0x42b0,	// (0x0004d51b) bg_tb_trans_pane_cp04

0x8fa7,	// (0x00052212) mup3_volume_pane

0x8faf,	// (0x0005221a) popup_mup3_control_window_g1

0x8fb8,	// (0x00052223) mup3_volume_pane_g1

0x8fc1,	// (0x0005222c) mup3_volume_pane_g2

0x8fca,	// (0x00052235) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x00058a41) mup3_volume_pane_g

0x42b0,	// (0x0004d51b) bg_tb_trans_pane_cp03

0x0a2a,	// (0x00049c95) popup_mup3_text_window_g1

0x0a32,	// (0x00049c9d) popup_mup3_text_window_t1

0x5168,	// (0x0004e3d3) list_calc_item_pane_g1_ParamLimits

0xeb87,	// (0x00057df2) mup_volume_pane_cp_g1

0x8998,	// (0x00051c03) main_touch_calib_pane_t3

0x89ac,	// (0x00051c17) main_touch_calib_pane_t4

0x89c0,	// (0x00051c2b) main_touch_calib_pane_t5

0x42ba,	// (0x0004d525) aid_cell_size_toolbar2

0x42c2,	// (0x0004d52d) aid_popup3_width_pane

0x0556,	// (0x000497c1) aid_zoom_text_msg_primary

0x582e,	// (0x0004ea99) vorec_t7

0x50ae,	// (0x0004e319) bg_calc_paper_pane_g1_ParamLimits

0x50ba,	// (0x0004e325) bg_calc_paper_pane_g2_ParamLimits

0x50c6,	// (0x0004e331) bg_calc_paper_pane_g3_ParamLimits

0x50d2,	// (0x0004e33d) bg_calc_paper_pane_g4_ParamLimits

0x50de,	// (0x0004e349) bg_calc_paper_pane_g5_ParamLimits

0x50ea,	// (0x0004e355) bg_calc_paper_pane_g6_ParamLimits

0x50fb,	// (0x0004e366) bg_calc_paper_pane_g7_ParamLimits

0x510c,	// (0x0004e377) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x000583f4) bg_calc_paper_pane_g_ParamLimits

0x511d,	// (0x0004e388) calc_bg_paper_pane_g9_ParamLimits

0x5956,	// (0x0004ebc1) image_qvga_pane_ParamLimits

0x5956,	// (0x0004ebc1) image_qvga_pane

0x4c97,	// (0x0004df02) bg_popup_sub_pane_cp04_ParamLimits

0xd7df,	// (0x00056a4a) popup_mup_playback_window_g1_ParamLimits

0xd7eb,	// (0x00056a56) popup_mup_playback_window_t1_ParamLimits

0xd800,	// (0x00056a6b) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x00058780) popup_mup_playback_window_t_ParamLimits

0x849f,	// (0x0005170a) main_mup2_pane_g3_ParamLimits

0x849f,	// (0x0005170a) main_mup2_pane_g3

0x5c94,	// (0x0004eeff) popup_toolbar_window_cp04

0xdbf5,	// (0x00056e60) popup_call2_audio_second_window_g3_ParamLimits

0xdbf5,	// (0x00056e60) popup_call2_audio_second_window_g3

0xdfff,	// (0x0005726a) popup_call2_audio_first_window_g4_ParamLimits

0xdfff,	// (0x0005726a) popup_call2_audio_first_window_g4

0xe67e,	// (0x000578e9) popup_call2_audio_in_window_g4_ParamLimits

0xe67e,	// (0x000578e9) popup_call2_audio_in_window_g4

0x78f0,	// (0x00050b5b) aid_area_sk_bg_cut_ParamLimits

0x78f0,	// (0x00050b5b) aid_area_sk_bg_cut

0xd815,	// (0x00056a80) aid_area_sk_bg_cut_2_ParamLimits

0xd815,	// (0x00056a80) aid_area_sk_bg_cut_2

0x882b,	// (0x00051a96) aid_placing_details_win

0x8833,	// (0x00051a9e) aid_placing_details_win_2

0xefaf,	// (0x0005821a) camera2_autofocus_pane_g1_ParamLimits

0x4515,	// (0x0004d780) popup_fixed_preview_cale_window_ParamLimits

0x4515,	// (0x0004d780) popup_fixed_preview_cale_window

0xd5f1,	// (0x0005685c) navi_slider_pane_g3

0xd5fa,	// (0x00056865) navi_slider_pane_g4

0xd603,	// (0x0005686e) navi_slider_pane_g5

0xd5f1,	// (0x0005685c) navi_slider_pane_g6

0x7131,	// (0x0005039c) navi_slider_pane_g7

0xd716,	// (0x00056981) mup_scale_pane_g3

0xd71f,	// (0x0005698a) mup_scale_pane_g4

0xd728,	// (0x00056993) mup_scale_pane_g5

0x7570,	// (0x000507db) mup_scale_pane_g6

0x7579,	// (0x000507e4) mup_scale_pane_g7

0xd5f1,	// (0x0005685c) cams2_slider_pane_g3

0xec09,	// (0x00057e74) cams2_slider_pane_g4

0x8783,	// (0x000519ee) cams2_slider_pane_g5

0xd5f1,	// (0x0005685c) cams2_slider_pane_g6

0x878b,	// (0x000519f6) cams2_slider_pane_g7

0xee36,	// (0x000580a1) camera2_autofocus_pane_cp_g1

0x0a40,	// (0x00049cab) bg_popup_preview_window_pane_cp02_ParamLimits

0x0a40,	// (0x00049cab) bg_popup_preview_window_pane_cp02

0x0a4c,	// (0x00049cb7) list_fp_cale_pane_ParamLimits

0x0a4c,	// (0x00049cb7) list_fp_cale_pane

0x0a58,	// (0x00049cc3) popup_fixed_preview_cale_window_t1_ParamLimits

0x0a58,	// (0x00049cc3) popup_fixed_preview_cale_window_t1

0x8fd3,	// (0x0005223e) popup_fixed_preview_cale_window_t2_ParamLimits

0x8fd3,	// (0x0005223e) popup_fixed_preview_cale_window_t2

0x8fe8,	// (0x00052253) popup_fixed_preview_cale_window_t3_ParamLimits

0x8fe8,	// (0x00052253) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x00058a48) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x00058a48) popup_fixed_preview_cale_window_t

0x8ffd,	// (0x00052268) list_single_fp_cale_pane_ParamLimits

0x8ffd,	// (0x00052268) list_single_fp_cale_pane

0x0a76,	// (0x00049ce1) list_single_fp_cale_pane_g1_ParamLimits

0x0a76,	// (0x00049ce1) list_single_fp_cale_pane_g1

0x0a82,	// (0x00049ced) list_single_fp_cale_pane_g2_ParamLimits

0x0a82,	// (0x00049ced) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x00058a4f) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x00058a4f) list_single_fp_cale_pane_g

0x0a9b,	// (0x00049d06) list_single_fp_cale_pane_t1_ParamLimits

0x0a9b,	// (0x00049d06) list_single_fp_cale_pane_t1

0x0aad,	// (0x00049d18) list_single_fp_cale_pane_t2_ParamLimits

0x0aad,	// (0x00049d18) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x00058a56) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x00058a56) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x42b0,	// (0x0004d51b) main_dialer_pane

0x9011,	// (0x0005227c) aid_cell_size_keypad

0x901b,	// (0x00052286) dialer_ne_pane

0x9025,	// (0x00052290) grid_dialer_command_1_pane

0x902d,	// (0x00052298) grid_dialer_command_2_pane

0x9035,	// (0x000522a0) grid_dialer_keypad_pane

0x9049,	// (0x000522b4) bg_popup_call_pane_cp06_ParamLimits

0x9049,	// (0x000522b4) bg_popup_call_pane_cp06

0x9055,	// (0x000522c0) dialer_ne_clear_pane_ParamLimits

0x9055,	// (0x000522c0) dialer_ne_clear_pane

0x0ae0,	// (0x00049d4b) dialer_ne_pane_g1

0x0ae8,	// (0x00049d53) dialer_ne_pane_t1_ParamLimits

0x0ae8,	// (0x00049d53) dialer_ne_pane_t1

0x9061,	// (0x000522cc) dialer_ne_pane_t2_ParamLimits

0x9061,	// (0x000522cc) dialer_ne_pane_t2

0x907e,	// (0x000522e9) dialer_ne_pane_t3_ParamLimits

0x907e,	// (0x000522e9) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x00058a5b) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x00058a5b) dialer_ne_pane_t

0x90a2,	// (0x0005230d) dialer_ne_pane_t3_copy1_ParamLimits

0x90a2,	// (0x0005230d) dialer_ne_pane_t3_copy1

0x90c6,	// (0x00052331) cell_dialer_keypad_pane_ParamLimits

0x90c6,	// (0x00052331) cell_dialer_keypad_pane

0x90dd,	// (0x00052348) cell_dialer_command_1_pane_ParamLimits

0x90dd,	// (0x00052348) cell_dialer_command_1_pane

0x90f3,	// (0x0005235e) cell_dialer_command_2_pane_ParamLimits

0x90f3,	// (0x0005235e) cell_dialer_command_2_pane

0x0afa,	// (0x00049d65) bg_button_pane_cp02_ParamLimits

0x0afa,	// (0x00049d65) bg_button_pane_cp02

0x9102,	// (0x0005236d) cell_dialer_keypad_pane_g1_ParamLimits

0x9102,	// (0x0005236d) cell_dialer_keypad_pane_g1

0x0afa,	// (0x00049d65) bg_button_pane_cp03_ParamLimits

0x0afa,	// (0x00049d65) bg_button_pane_cp03

0x9117,	// (0x00052382) cell_dialer_command_1_pane_g1_ParamLimits

0x9117,	// (0x00052382) cell_dialer_command_1_pane_g1

0x0b06,	// (0x00049d71) bg_button_pane_cp04

0x912a,	// (0x00052395) cell_dialer_command_2_pane_g1

0xd5e0,	// (0x0005684b) bg_button_pane_cp06

0x0b0e,	// (0x00049d79) dialer_ne_clear_pane_g1

0x7074,	// (0x000502df) navi_pane_g2

0x70a2,	// (0x0005030d) navi_pane_g3

0x0002,

0xf418,	// (0x00058683) navi_pane_g

0x70cd,	// (0x00050338) navi_pane_mv_g2

0x70f4,	// (0x0005035f) navi_pane_mv_g5

0x70fc,	// (0x00050367) navi_pane_mv_t1

0x5039,	// (0x0004e2a4) main_clock2_pane

0x9158,	// (0x000523c3) main_clock2_list_pane_ParamLimits

0x9158,	// (0x000523c3) main_clock2_list_pane

0x9180,	// (0x000523eb) main_clock2_pane_t1_ParamLimits

0x9180,	// (0x000523eb) main_clock2_pane_t1

0x91b0,	// (0x0005241b) main_clock2_pane_t2_ParamLimits

0x91b0,	// (0x0005241b) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x00058a62) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x00058a62) main_clock2_pane_t

0x9217,	// (0x00052482) popup_clock_analogue_window_cp03_ParamLimits

0x9217,	// (0x00052482) popup_clock_analogue_window_cp03

0x9237,	// (0x000524a2) popup_clock_digital_window_cp02_ParamLimits

0x9237,	// (0x000524a2) popup_clock_digital_window_cp02

0x92ac,	// (0x00052517) main_clock2_list_single_pane_ParamLimits

0x92ac,	// (0x00052517) main_clock2_list_single_pane

0xd5e0,	// (0x0005684b) list_highlight_pane_cp05

0x0b16,	// (0x00049d81) main_clock2_list_single_pane_t1

0x5c94,	// (0x0004eeff) popup_toolbar_window_cp04_ParamLimits

0x8855,	// (0x00051ac0) camera2_autofocus_pane_g2_ParamLimits

0x8855,	// (0x00051ac0) camera2_autofocus_pane_g2

0x8861,	// (0x00051acc) camera2_autofocus_pane_g3_ParamLimits

0x8861,	// (0x00051acc) camera2_autofocus_pane_g3

0x886d,	// (0x00051ad8) camera2_autofocus_pane_g4_ParamLimits

0x886d,	// (0x00051ad8) camera2_autofocus_pane_g4

0x8879,	// (0x00051ae4) camera2_autofocus_pane_g5_ParamLimits

0x8879,	// (0x00051ae4) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x000589ab) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x000589ab) camera2_autofocus_pane_g

0x8a34,	// (0x00051c9f) camera2_autofocus_pane_cp_g2

0x8a3c,	// (0x00051ca7) camera2_autofocus_pane_cp_g3

0x8a44,	// (0x00051caf) camera2_autofocus_pane_cp_g4

0x8a4c,	// (0x00051cb7) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x00058a11) camera2_autofocus_pane_cp_g

0x9041,	// (0x000522ac) popup_dialer_spcha_window

0x42b0,	// (0x0004d51b) bg_popup_sub_pane_cp07

0x0b24,	// (0x00049d8f) list_spcha_pane

0x0b2c,	// (0x00049d97) list_single_spcha_pane_ParamLimits

0x0b2c,	// (0x00049d97) list_single_spcha_pane

0x42b0,	// (0x0004d51b) list_highlight_pane_cp06

0x0b3d,	// (0x00049da8) list_single_spcha_pane_t1

0xe428,	// (0x00057693) popup_call2_audio_out_window_g4_ParamLimits

0xe428,	// (0x00057693) popup_call2_audio_out_window_g4

0x42b0,	// (0x0004d51b) main_imed2_pane

0xea15,	// (0x00057c80) popup_imed_adjust2_window

0x7f1a,	// (0x00051185) popup_imed_trans_window_ParamLimits

0x7f1a,	// (0x00051185) popup_imed_trans_window

0xec72,	// (0x00057edd) popup_blid_sat_info2_window_t1

0xec80,	// (0x00057eeb) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x00058940) popup_blid_sat_info2_window_t

0x9356,	// (0x000525c1) aid_size_cell_colour_35

0x9370,	// (0x000525db) aid_size_cell_colour_112

0x9387,	// (0x000525f2) aid_size_cell_effect

0xe9ed,	// (0x00057c58) bg_tb_trans_pane_cp02

0xf0c4,	// (0x0005832f) heading_imed_pane

0x93a1,	// (0x0005260c) listscroll_imed_pane

0x0b4b,	// (0x00049db6) heading_imed_pane_g1

0x0b53,	// (0x00049dbe) heading_imed_pane_t1

0x0b61,	// (0x00049dcc) grid_imed_colour_35_pane_ParamLimits

0x0b61,	// (0x00049dcc) grid_imed_colour_35_pane

0x93ad,	// (0x00052618) grid_imed_effect_pane

0x0b7c,	// (0x00049de7) list_imed_aspect_pane

0x93bd,	// (0x00052628) scroll_pane_cp027_ParamLimits

0x93bd,	// (0x00052628) scroll_pane_cp027

0x93c9,	// (0x00052634) cell_imed_effect_pane_ParamLimits

0x93c9,	// (0x00052634) cell_imed_effect_pane

0x0b84,	// (0x00049def) cell_imed_colour_pane_ParamLimits

0x0b84,	// (0x00049def) cell_imed_colour_pane

0x0bc6,	// (0x00049e31) cell_imed_colour_pane_g1_ParamLimits

0x0bc6,	// (0x00049e31) cell_imed_colour_pane_g1

0x0bd7,	// (0x00049e42) hgihlgiht_grid_pane_cp016_ParamLimits

0x0bd7,	// (0x00049e42) hgihlgiht_grid_pane_cp016

0x93e1,	// (0x0005264c) cell_imed_effect_pane_g1

0x93e9,	// (0x00052654) grid_highlight_pane_cp017

0xf0d0,	// (0x0005833b) list_imed_single_pane_ParamLimits

0xf0d0,	// (0x0005833b) list_imed_single_pane

0x42b0,	// (0x0004d51b) list_highlight_pane_cp07

0x0be8,	// (0x00049e53) list_imed_aspect_pane_comp1_t1

0xe9df,	// (0x00057c4a) bg_tb_trans_pane_cp05

0x0c0a,	// (0x00049e75) popup_imed_adjust2_window_g1

0x0c31,	// (0x00049e9c) popup_imed_adjust2_window_t1

0x0c49,	// (0x00049eb4) slider_imed_adjust_pane

0x0c5d,	// (0x00049ec8) slider_imed_adjust_pane_g1

0x0c6d,	// (0x00049ed8) slider_imed_adjust_pane_g2

0x0c7d,	// (0x00049ee8) slider_imed_adjust_pane_g3

0x0c8e,	// (0x00049ef9) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x00058a7f) slider_imed_adjust_pane_g

0x93f2,	// (0x0005265d) aid_size_cell_clipart2

0x93fe,	// (0x00052669) grid_imed_clipart_pane

0x0c9f,	// (0x00049f0a) scroll_pane_cp031

0x9408,	// (0x00052673) cell_imed_clipart_pane_ParamLimits

0x9408,	// (0x00052673) cell_imed_clipart_pane

0x942f,	// (0x0005269a) cell_imed_clipart_pane_g1

0x42b0,	// (0x0004d51b) grid_highlight_pane_cp014

0x9164,	// (0x000523cf) main_clock2_pane_g1_ParamLimits

0x9164,	// (0x000523cf) main_clock2_pane_g1

0x9253,	// (0x000524be) aid_call2_pane_cp10

0x9265,	// (0x000524d0) aid_call_pane_cp10

0xd515,	// (0x00056780) popup_clock_analogue_window_cp10_g1

0xd515,	// (0x00056780) popup_clock_analogue_window_cp10_g2

0x9277,	// (0x000524e2) popup_clock_analogue_window_cp10_g3

0x9277,	// (0x000524e2) popup_clock_analogue_window_cp10_g4

0xd515,	// (0x00056780) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x00058a6d) popup_clock_analogue_window_cp10_g

0x928d,	// (0x000524f8) popup_clock_analogue_window_cp10_t1

0x92be,	// (0x00052529) clock_digital_number_pane_cp10_ParamLimits

0x92be,	// (0x00052529) clock_digital_number_pane_cp10

0x92d6,	// (0x00052541) clock_digital_number_pane_cp11_ParamLimits

0x92d6,	// (0x00052541) clock_digital_number_pane_cp11

0x92ee,	// (0x00052559) clock_digital_number_pane_cp12_ParamLimits

0x92ee,	// (0x00052559) clock_digital_number_pane_cp12

0x9306,	// (0x00052571) clock_digital_number_pane_cp13_ParamLimits

0x9306,	// (0x00052571) clock_digital_number_pane_cp13

0x931e,	// (0x00052589) clock_digital_separator_pane_cp10_ParamLimits

0x931e,	// (0x00052589) clock_digital_separator_pane_cp10

0x9336,	// (0x000525a1) popup_clock_digital_window_cp02_t1_ParamLimits

0x9336,	// (0x000525a1) popup_clock_digital_window_cp02_t1

0x4c8f,	// (0x0004defa) clock_digital_number_pane_cp10_g1

0x4c8f,	// (0x0004defa) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x00058a88) clock_digital_number_pane_cp10_g

0x4c8f,	// (0x0004defa) clock_digital_separator_pane_cp10_g1

0x4c8f,	// (0x0004defa) clock_digital_separator_pane_g2_cp10

0xd5b0,	// (0x0005681b) navi_pane_vded_g4

0xd5b9,	// (0x00056824) navi_pane_vded_g5

0xd5c2,	// (0x0005682d) navi_pane_vded_t1

0x42b0,	// (0x0004d51b) main_vded_pane

0x9438,	// (0x000526a3) main_vded_pane_g1

0x9444,	// (0x000526af) main_vded_pane_g2

0x944e,	// (0x000526b9) main_vded_pane_g3

0x0002,

0xf822,	// (0x00058a8d) main_vded_pane_g

0x9458,	// (0x000526c3) main_vded_pane_t1

0x9466,	// (0x000526d1) main_vded_pane_t2

0x0001,

0xf829,	// (0x00058a94) main_vded_pane_t

0x9474,	// (0x000526df) vded_slider_pane

0x947e,	// (0x000526e9) vded_video_pane

0x0ca7,	// (0x00049f12) vded_video_pane_g1

0x9488,	// (0x000526f3) vded_video_pane_g2

0xee36,	// (0x000580a1) vded_video_pane_g3

0x0002,

0xf82e,	// (0x00058a99) vded_video_pane_g

0x0cb1,	// (0x00049f1c) vded_slider_pane_g1

0xeb87,	// (0x00057df2) vded_slider_pane_g2

0x0cba,	// (0x00049f25) vded_slider_pane_g3

0x0cc3,	// (0x00049f2e) vded_slider_pane_g4

0x0ccc,	// (0x00049f37) vded_slider_pane_g5

0x0004,

0xf835,	// (0x00058aa0) vded_slider_pane_g

0x8f52,	// (0x000521bd) mup3_rocker_pane_ParamLimits

0x8f52,	// (0x000521bd) mup3_rocker_pane

0x9491,	// (0x000526fc) mup3_control_keys_pane_g1

0x9499,	// (0x00052704) mup3_control_keys_pane_g2

0x94a1,	// (0x0005270c) mup3_control_keys_pane_g3

0x94a9,	// (0x00052714) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x00058aab) mup3_control_keys_pane_g

0x453d,	// (0x0004d7a8) popup_toolbar2_fixed_window_cp01_ParamLimits

0x453d,	// (0x0004d7a8) popup_toolbar2_fixed_window_cp01

0x8f6c,	// (0x000521d7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8f6c,	// (0x000521d7) popup_toolbar2_fixed_window_cp02

0xdd67,	// (0x00056fd2) popup_call2_audio_second_window_t4_ParamLimits

0xdd67,	// (0x00056fd2) popup_call2_audio_second_window_t4

0xe295,	// (0x00057500) popup_call2_audio_first_window_t6_ParamLimits

0xe295,	// (0x00057500) popup_call2_audio_first_window_t6

0xe52b,	// (0x00057796) popup_call2_audio_out_window_t6_ParamLimits

0xe52b,	// (0x00057796) popup_call2_audio_out_window_t6

0x42b0,	// (0x0004d51b) main_vitu_pane

0x94b9,	// (0x00052724) aid_size_cell_itu_ParamLimits

0x94b9,	// (0x00052724) aid_size_cell_itu

0x1128,	// (0x0004a393) bg_popup_window_pane_cp08_ParamLimits

0x1128,	// (0x0004a393) bg_popup_window_pane_cp08

0x94c7,	// (0x00052732) field_vitu_entry_pane_ParamLimits

0x94c7,	// (0x00052732) field_vitu_entry_pane

0x94d6,	// (0x00052741) grid_vitu_function_pane_ParamLimits

0x94d6,	// (0x00052741) grid_vitu_function_pane

0x94e6,	// (0x00052751) grid_vitu_itu_pane_ParamLimits

0x94e6,	// (0x00052751) grid_vitu_itu_pane

0x94f6,	// (0x00052761) cell_vitu_itu_pane_ParamLimits

0x94f6,	// (0x00052761) cell_vitu_itu_pane

0x950b,	// (0x00052776) cell_vitu_function_pane_ParamLimits

0x950b,	// (0x00052776) cell_vitu_function_pane

0xe9ed,	// (0x00057c58) bg_popup_sub_pane_cp08_ParamLimits

0xe9ed,	// (0x00057c58) bg_popup_sub_pane_cp08

0x951f,	// (0x0005278a) field_vitu_entry_pane_t1_ParamLimits

0x951f,	// (0x0005278a) field_vitu_entry_pane_t1

0x0ced,	// (0x00049f58) field_vitu_entry_pane_t2_ParamLimits

0x0ced,	// (0x00049f58) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x00058ab9) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x00058ab9) field_vitu_entry_pane_t

0x0d0a,	// (0x00049f75) bg_button_pane_cp05_ParamLimits

0x0d0a,	// (0x00049f75) bg_button_pane_cp05

0x953c,	// (0x000527a7) cell_vitu_itu_pane_g1

0x9554,	// (0x000527bf) cell_vitu_itu_pane_t1_ParamLimits

0x9554,	// (0x000527bf) cell_vitu_itu_pane_t1

0x9566,	// (0x000527d1) cell_vitu_itu_pane_t2_ParamLimits

0x9566,	// (0x000527d1) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x00058abe) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x00058abe) cell_vitu_itu_pane_t

0x0d18,	// (0x00049f83) bg_button_pane_cp07

0x959b,	// (0x00052806) cell_vitu_function_pane_g1

0x4efc,	// (0x0004e167) main_calc_pane_g1

0x42f6,	// (0x0004d561) aid_visual_content_pane

0x42b0,	// (0x0004d51b) main_vradio_pane

0x95a4,	// (0x0005280f) main_vradio_pane_g1_ParamLimits

0x95a4,	// (0x0005280f) main_vradio_pane_g1

0x0d22,	// (0x00049f8d) main_vradio_pane_g2_ParamLimits

0x0d22,	// (0x00049f8d) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x00058ac5) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x00058ac5) main_vradio_pane_g

0x95b4,	// (0x0005281f) main_vradio_pane_t1_ParamLimits

0x95b4,	// (0x0005281f) main_vradio_pane_t1

0x95c6,	// (0x00052831) main_vradio_pane_t2_ParamLimits

0x95c6,	// (0x00052831) main_vradio_pane_t2

0x0d2f,	// (0x00049f9a) main_vradio_pane_t3_ParamLimits

0x0d2f,	// (0x00049f9a) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x00058aca) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x00058aca) main_vradio_pane_t

0x95d8,	// (0x00052843) vradio_rocker_control_pane_ParamLimits

0x95d8,	// (0x00052843) vradio_rocker_control_pane

0x95e4,	// (0x0005284f) vradio_station_info_pane_ParamLimits

0x95e4,	// (0x0005284f) vradio_station_info_pane

0x0d43,	// (0x00049fae) vradio_frequency_info_pane_ParamLimits

0x0d43,	// (0x00049fae) vradio_frequency_info_pane

0xee36,	// (0x000580a1) vradio_station_info_pane_g1

0x0d52,	// (0x00049fbd) vradio_station_info_pane_t1_ParamLimits

0x0d52,	// (0x00049fbd) vradio_station_info_pane_t1

0x0d74,	// (0x00049fdf) vradio_station_info_pane_t2_ParamLimits

0x0d74,	// (0x00049fdf) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x00058ad1) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x00058ad1) vradio_station_info_pane_t

0x0d86,	// (0x00049ff1) vradio_tuning_pane

0x0d8e,	// (0x00049ff9) vradio_rocker_control_pane_g1

0x0d96,	// (0x0004a001) vradio_rocker_control_pane_g2

0x0d9e,	// (0x0004a009) vradio_rocker_control_pane_g3

0x0da6,	// (0x0004a011) vradio_rocker_control_pane_g4

0x0dae,	// (0x0004a019) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x00058ad6) vradio_rocker_control_pane_g

0x95f3,	// (0x0005285e) vradio_frequency_info_pane_g1

0x0db6,	// (0x0004a021) vradio_frequency_info_pane_t1_ParamLimits

0x0db6,	// (0x0004a021) vradio_frequency_info_pane_t1

0x95fd,	// (0x00052868) vradio_tuning_pane_g1

0x9606,	// (0x00052871) vradio_tuning_pane_t1

0x433f,	// (0x0004d5aa) area_side_right_pane_ParamLimits

0x433f,	// (0x0004d5aa) area_side_right_pane

0xe9a6,	// (0x00057c11) status_small_pane_g1

0xe9ae,	// (0x00057c19) status_small_pane_g2

0xe9b7,	// (0x00057c22) status_small_pane_g3

0xe9c0,	// (0x00057c2b) status_small_pane_g4

0x0003,

0xf62b,	// (0x00058896) status_small_pane_g

0xe9c9,	// (0x00057c34) status_small_pane_t1

0x42b0,	// (0x0004d51b) main_video3_pane

0x0dca,	// (0x0004a035) cams_zoom_vslider_pane

0x0dd2,	// (0x0004a03d) image3_wide_pane_ParamLimits

0x0dd2,	// (0x0004a03d) image3_wide_pane

0x0dec,	// (0x0004a057) image3_wide_small_pane

0x0df8,	// (0x0004a063) main_video3_pane_g1_ParamLimits

0x0df8,	// (0x0004a063) main_video3_pane_g1

0x0e14,	// (0x0004a07f) main_video3_pane_g2_ParamLimits

0x0e14,	// (0x0004a07f) main_video3_pane_g2

0x0001,

0xf876,	// (0x00058ae1) main_video3_pane_g_ParamLimits

0xf876,	// (0x00058ae1) main_video3_pane_g

0x0e30,	// (0x0004a09b) main_video3_pane_t1_ParamLimits

0x0e30,	// (0x0004a09b) main_video3_pane_t1

0x0e5b,	// (0x0004a0c6) main_video3_pane_t2_ParamLimits

0x0e5b,	// (0x0004a0c6) main_video3_pane_t2

0x0e86,	// (0x0004a0f1) main_video3_pane_t3_ParamLimits

0x0e86,	// (0x0004a0f1) main_video3_pane_t3

0x0002,

0xf87b,	// (0x00058ae6) main_video3_pane_t_ParamLimits

0xf87b,	// (0x00058ae6) main_video3_pane_t

0x0eb3,	// (0x0004a11e) cams_zoom_vslider_pane_g1

0x0ebc,	// (0x0004a127) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x00058aed) cams_zoom_vslider_pane_g

0x0ec4,	// (0x0004a12f) small_slider_vertical_pane

0xee36,	// (0x000580a1) small_slider_vertical_pane_g1

0xee36,	// (0x000580a1) small_slider_vertical_pane_g2

0x0ecc,	// (0x0004a137) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x00058af2) small_slider_vertical_pane_g

0x42b0,	// (0x0004d51b) main_hwr_training_pane

0x0ed5,	// (0x0004a140) hwr_training_instruct_pane_ParamLimits

0x0ed5,	// (0x0004a140) hwr_training_instruct_pane

0x9615,	// (0x00052880) hwr_training_navi_pane_ParamLimits

0x9615,	// (0x00052880) hwr_training_navi_pane

0x962f,	// (0x0005289a) hwr_training_write_pane_ParamLimits

0x962f,	// (0x0005289a) hwr_training_write_pane

0x42b0,	// (0x0004d51b) bg_frame_shadow_pane

0x0f0c,	// (0x0004a177) hwr_training_write_pane_g1

0x0f14,	// (0x0004a17f) hwr_training_write_pane_g2

0x0f1c,	// (0x0004a187) hwr_training_write_pane_g3

0x0f24,	// (0x0004a18f) hwr_training_write_pane_g4

0x0f2c,	// (0x0004a197) hwr_training_write_pane_g5

0x0f34,	// (0x0004a19f) hwr_training_write_pane_g6

0x0f3c,	// (0x0004a1a7) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x00058af9) hwr_training_write_pane_g

0x9667,	// (0x000528d2) hwr_training_navi_pane_g1_ParamLimits

0x9667,	// (0x000528d2) hwr_training_navi_pane_g1

0x9679,	// (0x000528e4) hwr_training_navi_pane_g2_ParamLimits

0x9679,	// (0x000528e4) hwr_training_navi_pane_g2

0x968b,	// (0x000528f6) hwr_training_navi_pane_g3_ParamLimits

0x968b,	// (0x000528f6) hwr_training_navi_pane_g3

0x969b,	// (0x00052906) hwr_training_navi_pane_g4_ParamLimits

0x969b,	// (0x00052906) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x00058b08) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x00058b08) hwr_training_navi_pane_g

0x96b5,	// (0x00052920) hwr_training_navi_pane_t1

0x96c3,	// (0x0005292e) list_single_hwr_training_instruct_pane_ParamLimits

0x96c3,	// (0x0005292e) list_single_hwr_training_instruct_pane

0x0f78,	// (0x0004a1e3) list_single_hwr_training_instruct_pane_t1

0xed76,	// (0x00057fe1) bg_frame_shadow_pane_g1

0x0f87,	// (0x0004a1f2) bg_frame_shadow_pane_g2

0x0f8f,	// (0x0004a1fa) bg_frame_shadow_pane_g3

0x0f97,	// (0x0004a202) bg_frame_shadow_pane_g4

0x0f9f,	// (0x0004a20a) bg_frame_shadow_pane_g5

0x0fa7,	// (0x0004a212) bg_frame_shadow_pane_g6

0x0faf,	// (0x0004a21a) bg_frame_shadow_pane_g7

0x52b4,	// (0x0004e51f) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x00058b13) bg_frame_shadow_pane_g

0x42b0,	// (0x0004d51b) main_video_tele_dialer_pane

0x96f9,	// (0x00052964) aid_size_cell_video_keypad_ParamLimits

0x96f9,	// (0x00052964) aid_size_cell_video_keypad

0x9709,	// (0x00052974) grid_video_dialer_keypad_pane_ParamLimits

0x9709,	// (0x00052974) grid_video_dialer_keypad_pane

0x973d,	// (0x000529a8) video_down_pane_cp_ParamLimits

0x973d,	// (0x000529a8) video_down_pane_cp

0x9767,	// (0x000529d2) cell_video_dialer_keypad_pane_ParamLimits

0x9767,	// (0x000529d2) cell_video_dialer_keypad_pane

0x0fb7,	// (0x0004a222) bg_button_pane_cp08_ParamLimits

0x0fb7,	// (0x0004a222) bg_button_pane_cp08

0x977c,	// (0x000529e7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x977c,	// (0x000529e7) cell_video_dialer_keypad_pane_g1

0x8f46,	// (0x000521b1) mup3_rocker2_pane_ParamLimits

0x8f46,	// (0x000521b1) mup3_rocker2_pane

0xee36,	// (0x000580a1) mup3_rocker2_pane_g1

0x7ea8,	// (0x00051113) main_dialer2_pane

0x42b0,	// (0x0004d51b) main_mp4_pane

0x97bb,	// (0x00052a26) main_mp4_pane_g1_ParamLimits

0x97bb,	// (0x00052a26) main_mp4_pane_g1

0x97c9,	// (0x00052a34) main_mp4_pane_g2_ParamLimits

0x97c9,	// (0x00052a34) main_mp4_pane_g2

0x97d7,	// (0x00052a42) main_mp4_pane_g3_ParamLimits

0x97d7,	// (0x00052a42) main_mp4_pane_g3

0x981c,	// (0x00052a87) main_mp4_pane_g4_ParamLimits

0x981c,	// (0x00052a87) main_mp4_pane_g4

0x9844,	// (0x00052aaf) main_mp4_pane_g5_ParamLimits

0x9844,	// (0x00052aaf) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x00058b33) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x00058b33) main_mp4_pane_g

0x9894,	// (0x00052aff) main_mp4_pane_t1_ParamLimits

0x9894,	// (0x00052aff) main_mp4_pane_t1

0x98f0,	// (0x00052b5b) main_mp4_pane_t2_ParamLimits

0x98f0,	// (0x00052b5b) main_mp4_pane_t2

0x0fc3,	// (0x0004a22e) main_mp4_pane_t3_ParamLimits

0x0fc3,	// (0x0004a22e) main_mp4_pane_t3

0x9942,	// (0x00052bad) main_mp4_pane_t4_ParamLimits

0x9942,	// (0x00052bad) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x00058b40) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x00058b40) main_mp4_pane_t

0x9986,	// (0x00052bf1) mp4_progress_pane_ParamLimits

0x9986,	// (0x00052bf1) mp4_progress_pane

0x99d0,	// (0x00052c3b) mp4_rocker_pane_ParamLimits

0x99d0,	// (0x00052c3b) mp4_rocker_pane

0x0feb,	// (0x0004a256) mp4_progress_pane_t1

0x1004,	// (0x0004a26f) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x00058b49) mp4_progress_pane_t

0x101d,	// (0x0004a288) mup_progress_pane_cp04

0x18da,	// (0x0004ab45) mp4_rocker_pane_g1

0x99f0,	// (0x00052c5b) aid_cell_size_keypad2_ParamLimits

0x99f0,	// (0x00052c5b) aid_cell_size_keypad2

0x9a00,	// (0x00052c6b) dialer2_ne_pane_ParamLimits

0x9a00,	// (0x00052c6b) dialer2_ne_pane

0x9a0e,	// (0x00052c79) grid_dialer2_keypad_pane_ParamLimits

0x9a0e,	// (0x00052c79) grid_dialer2_keypad_pane

0x1935,	// (0x0004aba0) bg_popup_call_pane_cp07_ParamLimits

0x1935,	// (0x0004aba0) bg_popup_call_pane_cp07

0x9a1e,	// (0x00052c89) dialer2_ne_pane_t1_ParamLimits

0x9a1e,	// (0x00052c89) dialer2_ne_pane_t1

0x9a43,	// (0x00052cae) cell_dialer2_keypad_pane_ParamLimits

0x9a43,	// (0x00052cae) cell_dialer2_keypad_pane

0x103b,	// (0x0004a2a6) bg_button_pane_pane_cp04_ParamLimits

0x103b,	// (0x0004a2a6) bg_button_pane_pane_cp04

0x9a5a,	// (0x00052cc5) cell_dialer2_keypad_pane_g1_ParamLimits

0x9a5a,	// (0x00052cc5) cell_dialer2_keypad_pane_g1

0x5bad,	// (0x0004ee18) aid_placing_vt_set_content_ParamLimits

0x5bad,	// (0x0004ee18) aid_placing_vt_set_content

0x5bc9,	// (0x0004ee34) aid_placing_vt_set_title_ParamLimits

0x5bc9,	// (0x0004ee34) aid_placing_vt_set_title

0x42b0,	// (0x0004d51b) main_image3_pane

0x9af4,	// (0x00052d5f) area_side_right_pane_cp01_ParamLimits

0x9af4,	// (0x00052d5f) area_side_right_pane_cp01

0x9b21,	// (0x00052d8c) main_image3_pane_g1_ParamLimits

0x9b21,	// (0x00052d8c) main_image3_pane_g1

0x9b2f,	// (0x00052d9a) main_image3_pane_g2_ParamLimits

0x9b2f,	// (0x00052d9a) main_image3_pane_g2

0x9b48,	// (0x00052db3) main_image3_pane_g3_ParamLimits

0x9b48,	// (0x00052db3) main_image3_pane_g3

0x9b61,	// (0x00052dcc) main_image3_pane_g4_ParamLimits

0x9b61,	// (0x00052dcc) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x00058b58) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x00058b58) main_image3_pane_g

0x9b7a,	// (0x00052de5) main_image3_pane_t1_ParamLimits

0x9b7a,	// (0x00052de5) main_image3_pane_t1

0x9b9f,	// (0x00052e0a) main_image3_pane_t2_ParamLimits

0x9b9f,	// (0x00052e0a) main_image3_pane_t2

0x9bbe,	// (0x00052e29) main_image3_pane_t3_ParamLimits

0x9bbe,	// (0x00052e29) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x00058b61) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x00058b61) main_image3_pane_t

0x1128,	// (0x0004a393) grid_sctrl_middle_pane_cp01_ParamLimits

0x1128,	// (0x0004a393) grid_sctrl_middle_pane_cp01

0x9c1f,	// (0x00052e8a) cell_sctrl_middle_pane_cp01_ParamLimits

0x9c1f,	// (0x00052e8a) cell_sctrl_middle_pane_cp01

0x9c30,	// (0x00052e9b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9c30,	// (0x00052e9b) cell_sctrl_middle_pane_cp01_g1

0x42b0,	// (0x0004d51b) main_call4_pane

0x9c3d,	// (0x00052ea8) aid_size_button_call4_ParamLimits

0x9c3d,	// (0x00052ea8) aid_size_button_call4

0x9c6d,	// (0x00052ed8) call4_windows_pane_ParamLimits

0x9c6d,	// (0x00052ed8) call4_windows_pane

0x9c87,	// (0x00052ef2) grid_call4_button_pane_ParamLimits

0x9c87,	// (0x00052ef2) grid_call4_button_pane

0x1047,	// (0x0004a2b2) call4_windows_conf_pane

0x105c,	// (0x0004a2c7) popup_call4_audio_first_window_ParamLimits

0x105c,	// (0x0004a2c7) popup_call4_audio_first_window

0x10a8,	// (0x0004a313) popup_call4_audio_second_window_ParamLimits

0x10a8,	// (0x0004a313) popup_call4_audio_second_window

0x10bc,	// (0x0004a327) popup_call4_audio_wait_window_ParamLimits

0x10bc,	// (0x0004a327) popup_call4_audio_wait_window

0x9cab,	// (0x00052f16) cell_call4_button_pane_ParamLimits

0x9cab,	// (0x00052f16) cell_call4_button_pane

0x9cd0,	// (0x00052f3b) bg_button_pane_cp09_ParamLimits

0x9cd0,	// (0x00052f3b) bg_button_pane_cp09

0x9cdc,	// (0x00052f47) cell_call4_button_pane_g1_ParamLimits

0x9cdc,	// (0x00052f47) cell_call4_button_pane_g1

0x9ce9,	// (0x00052f54) cell_call4_button_pane_t1_ParamLimits

0x9ce9,	// (0x00052f54) cell_call4_button_pane_t1

0x1104,	// (0x0004a36f) popup_call4_audio_conf_window_ParamLimits

0x1104,	// (0x0004a36f) popup_call4_audio_conf_window

0x8f79,	// (0x000521e4) mup3_progress_pane_t1_ParamLimits

0x8f90,	// (0x000521fb) mup3_progress_pane_t2_ParamLimits

0x0a03,	// (0x00049c6e) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x00058a3a) mup3_progress_pane_t_ParamLimits

0x0a1a,	// (0x00049c85) mup_progress_pane_cp03_ParamLimits

0x94b1,	// (0x0005271c) mup3_control_keys_pane_g4_copy1

0x99b4,	// (0x00052c1f) mp4_rocker2_pane_ParamLimits

0x99b4,	// (0x00052c1f) mp4_rocker2_pane

0x1120,	// (0x0004a38b) mp4_rocker2_pane_g1

0x1118,	// (0x0004a383) mp4_rocker2_pane_g2

0x9cfb,	// (0x00052f66) mp4_rocker2_pane_g3

0x9d03,	// (0x00052f6e) mp4_rocker2_pane_g4

0x9d0b,	// (0x00052f76) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x00058b6a) mp4_rocker2_pane_g

0x42b0,	// (0x0004d51b) main_camera4_pane

0x42b0,	// (0x0004d51b) main_video4_pane

0x9719,	// (0x00052984) main_video_tele_dialer_pane_t1_ParamLimits

0x9719,	// (0x00052984) main_video_tele_dialer_pane_t1

0x972b,	// (0x00052996) main_video_tele_dialer_pane_t2_ParamLimits

0x972b,	// (0x00052996) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x00058b24) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x00058b24) main_video_tele_dialer_pane_t

0x9d2b,	// (0x00052f96) cam4_autofocus_pane_ParamLimits

0x9d2b,	// (0x00052f96) cam4_autofocus_pane

0x9d39,	// (0x00052fa4) cam4_image_uncrop_pane_ParamLimits

0x9d39,	// (0x00052fa4) cam4_image_uncrop_pane

0x9d50,	// (0x00052fbb) cam4_indicators_pane_ParamLimits

0x9d50,	// (0x00052fbb) cam4_indicators_pane

0x9d6c,	// (0x00052fd7) main_camera4_pane_g1_ParamLimits

0x9d6c,	// (0x00052fd7) main_camera4_pane_g1

0x9d78,	// (0x00052fe3) main_camera4_pane_g2_ParamLimits

0x9d78,	// (0x00052fe3) main_camera4_pane_g2

0x9d78,	// (0x00052fe3) main_camera4_pane_g3_ParamLimits

0x9d78,	// (0x00052fe3) main_camera4_pane_g3

0x9d84,	// (0x00052fef) main_camera4_pane_g4_ParamLimits

0x9d84,	// (0x00052fef) main_camera4_pane_g4

0x9d90,	// (0x00052ffb) main_camera4_pane_g5_ParamLimits

0x9d90,	// (0x00052ffb) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x00058b75) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x00058b75) main_camera4_pane_g

0x9daa,	// (0x00053015) main_camera4_pane_t1_ParamLimits

0x9daa,	// (0x00053015) main_camera4_pane_t1

0x9de9,	// (0x00053054) bg_tb_trans_pane_cp06

0x9dff,	// (0x0005306a) cam4_indicators_pane_g1

0x9e10,	// (0x0005307b) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x00058b90) cam4_indicators_pane_g

0x9e2e,	// (0x00053099) cam4_indicators_pane_t1

0x9e58,	// (0x000530c3) main_video4_pane_g1_ParamLimits

0x9e58,	// (0x000530c3) main_video4_pane_g1

0x9e64,	// (0x000530cf) main_video4_pane_g2_ParamLimits

0x9e64,	// (0x000530cf) main_video4_pane_g2

0x9e70,	// (0x000530db) main_video4_pane_g3_ParamLimits

0x9e70,	// (0x000530db) main_video4_pane_g3

0x9e7c,	// (0x000530e7) main_video4_pane_g4_ParamLimits

0x9e7c,	// (0x000530e7) main_video4_pane_g4

0x0004,

0xf92c,	// (0x00058b97) main_video4_pane_g_ParamLimits

0xf92c,	// (0x00058b97) main_video4_pane_g

0x9e9c,	// (0x00053107) vid4_indicators_pane_ParamLimits

0x9e9c,	// (0x00053107) vid4_indicators_pane

0x9eba,	// (0x00053125) video4_image_uncrop_cif_pane_ParamLimits

0x9eba,	// (0x00053125) video4_image_uncrop_cif_pane

0x9ec9,	// (0x00053134) video4_image_uncrop_nhd_pane_ParamLimits

0x9ec9,	// (0x00053134) video4_image_uncrop_nhd_pane

0x9d39,	// (0x00052fa4) video4_image_uncrop_vga_pane_ParamLimits

0x9d39,	// (0x00052fa4) video4_image_uncrop_vga_pane

0x9ed6,	// (0x00053141) bg_tb_trans_pane_cp07

0x9dff,	// (0x0005306a) vid4_indicators_pane_g1

0x9eec,	// (0x00053157) vid4_indicators_pane_g2

0x9efd,	// (0x00053168) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x00058ba2) vid4_indicators_pane_g

0x9f2a,	// (0x00053195) vid4_indicators_pane_t1

0x9f43,	// (0x000531ae) cam4_autofocus_pane_g1

0x9f4b,	// (0x000531b6) cam4_autofocus_pane_g2

0x9f53,	// (0x000531be) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x00058bad) cam4_autofocus_pane_g

0x9f5b,	// (0x000531c6) cam4_autofocus_pane_g3_copy1

0x974b,	// (0x000529b6) video_down_pane_cp_t1

0x9759,	// (0x000529c4) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x00058b29) video_down_pane_cp_t

0x1128,	// (0x0004a393) popup_vitu2_window_ParamLimits

0x1128,	// (0x0004a393) popup_vitu2_window

0x9f63,	// (0x000531ce) aid_size_cell2_itu2_ParamLimits

0x9f63,	// (0x000531ce) aid_size_cell2_itu2

0x9f85,	// (0x000531f0) aid_size_cell_itu2_ParamLimits

0x9f85,	// (0x000531f0) aid_size_cell_itu2

0x9fc9,	// (0x00053234) bg_popup_window_pane_cp09_ParamLimits

0x9fc9,	// (0x00053234) bg_popup_window_pane_cp09

0x9fd7,	// (0x00053242) field_vitu2_entry_pane_ParamLimits

0x9fd7,	// (0x00053242) field_vitu2_entry_pane

0x9ff7,	// (0x00053262) grid_vitu2_function_pane_ParamLimits

0x9ff7,	// (0x00053262) grid_vitu2_function_pane

0xa03b,	// (0x000532a6) grid_vitu2_itu_pane_ParamLimits

0xa03b,	// (0x000532a6) grid_vitu2_itu_pane

0xa0b1,	// (0x0005331c) cell_vitu2_itu_pane_ParamLimits

0xa0b1,	// (0x0005331c) cell_vitu2_itu_pane

0xa0c6,	// (0x00053331) cell_vitu2_function_pane_ParamLimits

0xa0c6,	// (0x00053331) cell_vitu2_function_pane

0x1136,	// (0x0004a3a1) bg_popup_call_pane_cp08_ParamLimits

0x1136,	// (0x0004a3a1) bg_popup_call_pane_cp08

0x114f,	// (0x0004a3ba) field_vitu2_entry_pane_g1

0x115b,	// (0x0004a3c6) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x00058bb4) field_vitu2_entry_pane_g

0x1175,	// (0x0004a3e0) field_vitu2_entry_pane_t1_ParamLimits

0x1175,	// (0x0004a3e0) field_vitu2_entry_pane_t1

0x11a7,	// (0x0004a412) field_vitu2_entry_pane_t2_ParamLimits

0x11a7,	// (0x0004a412) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x00058bbb) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x00058bbb) field_vitu2_entry_pane_t

0xa107,	// (0x00053372) bg_button_pane_cp010_ParamLimits

0xa107,	// (0x00053372) bg_button_pane_cp010

0xa115,	// (0x00053380) cell_vitu2_itu_pane_g1

0xa133,	// (0x0005339e) cell_vitu2_itu_pane_t1_ParamLimits

0xa133,	// (0x0005339e) cell_vitu2_itu_pane_t1

0x41dd,	// (0x0004d448) cell_vitu2_itu_pane_t2_ParamLimits

0x41dd,	// (0x0004d448) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x00058bc5) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x00058bc5) cell_vitu2_itu_pane_t

0x9ed6,	// (0x00053141) bg_button_pane_cp011

0xa185,	// (0x000533f0) cell_vitu2_function_pane_g1

0x42b0,	// (0x0004d51b) main_myfav_hc_pane

0x9c00,	// (0x00052e6b) popup_image3_note_pane_ParamLimits

0x9c00,	// (0x00052e6b) popup_image3_note_pane

0x9c0e,	// (0x00052e79) popup_image3_tool_bar_pane_ParamLimits

0x9c0e,	// (0x00052e79) popup_image3_tool_bar_pane

0x424b,	// (0x0004d4b6) cell_vitu2_itu_pane_t3_ParamLimits

0x424b,	// (0x0004d4b6) cell_vitu2_itu_pane_t3

0x42b0,	// (0x0004d51b) bg_popup_trans_pane

0x11cc,	// (0x0004a437) grid_image3_tool_bar_pane

0x11d6,	// (0x0004a441) bg_popup_trans_pane_g1

0x61da,	// (0x0004f445) bg_popup_trans_pane_g2

0x11de,	// (0x0004a449) bg_popup_trans_pane_g3

0x11e6,	// (0x0004a451) bg_popup_trans_pane_g4

0x11ee,	// (0x0004a459) bg_popup_trans_pane_g5

0x11f6,	// (0x0004a461) bg_popup_trans_pane_g6

0x11fe,	// (0x0004a469) bg_popup_trans_pane_g7

0x1206,	// (0x0004a471) bg_popup_trans_pane_g8

0x61ba,	// (0x0004f425) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x00058bcc) bg_popup_trans_pane_g

0x120e,	// (0x0004a479) cell_image3_tool_bar_pane_ParamLimits

0x120e,	// (0x0004a479) cell_image3_tool_bar_pane

0xee36,	// (0x000580a1) cell_image3_tool_bar_pane_g1

0x42b0,	// (0x0004d51b) bg_popup_trans_pane_cp1

0x1222,	// (0x0004a48d) popup_image3_note_pane_t1

0x1230,	// (0x0004a49b) popup_image3_note_pane_t2

0x123e,	// (0x0004a4a9) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x00058bdf) popup_image3_note_pane_t

0x124c,	// (0x0004a4b7) popup_image3_note_pane_t3_copy1

0xa199,	// (0x00053404) bg_myfav_hc_instruction_pane_ParamLimits

0xa199,	// (0x00053404) bg_myfav_hc_instruction_pane

0xa1b1,	// (0x0005341c) cell_myfav_contact_pane_ParamLimits

0xa1b1,	// (0x0005341c) cell_myfav_contact_pane

0xa1cb,	// (0x00053436) cell_myfav_contact_pane_cp1_ParamLimits

0xa1cb,	// (0x00053436) cell_myfav_contact_pane_cp1

0xa1e3,	// (0x0005344e) cell_myfav_contact_pane_cp2_ParamLimits

0xa1e3,	// (0x0005344e) cell_myfav_contact_pane_cp2

0xa1fb,	// (0x00053466) cell_myfav_contact_pane_cp3_ParamLimits

0xa1fb,	// (0x00053466) cell_myfav_contact_pane_cp3

0xa212,	// (0x0005347d) cell_myfav_contact_pane_cp4_ParamLimits

0xa212,	// (0x0005347d) cell_myfav_contact_pane_cp4

0xa228,	// (0x00053493) cell_myfav_contact_pane_cp5_ParamLimits

0xa228,	// (0x00053493) cell_myfav_contact_pane_cp5

0xa23c,	// (0x000534a7) cell_myfav_contact_pane_cp6_ParamLimits

0xa23c,	// (0x000534a7) cell_myfav_contact_pane_cp6

0xa250,	// (0x000534bb) cell_myfav_contact_pane_cp7_ParamLimits

0xa250,	// (0x000534bb) cell_myfav_contact_pane_cp7

0x125a,	// (0x0004a4c5) listscroll_gen_pane_cp05

0xa268,	// (0x000534d3) main_myfav_hc_pane_g1_ParamLimits

0xa268,	// (0x000534d3) main_myfav_hc_pane_g1

0xa280,	// (0x000534eb) main_myfav_hc_pane_g2_ParamLimits

0xa280,	// (0x000534eb) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x00058be6) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x00058be6) main_myfav_hc_pane_g

0xa2b0,	// (0x0005351b) main_myfav_hc_pane_t1_ParamLimits

0xa2b0,	// (0x0005351b) main_myfav_hc_pane_t1

0x1263,	// (0x0004a4ce) main_myfav_hc_pane_t2_ParamLimits

0x1263,	// (0x0004a4ce) main_myfav_hc_pane_t2

0x1275,	// (0x0004a4e0) main_myfav_hc_pane_t3_ParamLimits

0x1275,	// (0x0004a4e0) main_myfav_hc_pane_t3

0xa2c7,	// (0x00053532) main_myfav_hc_pane_t4_ParamLimits

0xa2c7,	// (0x00053532) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x00058bed) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x00058bed) main_myfav_hc_pane_t

0xee36,	// (0x000580a1) bg_myfav_hc_instruction_pane_g1

0x1287,	// (0x0004a4f2) cell_myfav_contact_pane_g1_ParamLimits

0x1287,	// (0x0004a4f2) cell_myfav_contact_pane_g1

0x1287,	// (0x0004a4f2) cell_myfav_contact_pane_g2_ParamLimits

0x1287,	// (0x0004a4f2) cell_myfav_contact_pane_g2

0x1293,	// (0x0004a4fe) cell_myfav_contact_pane_g3_ParamLimits

0x1293,	// (0x0004a4fe) cell_myfav_contact_pane_g3

0x09ed,	// (0x00049c58) cell_myfav_contact_pane_g4_ParamLimits

0x09ed,	// (0x00049c58) cell_myfav_contact_pane_g4

0x12a0,	// (0x0004a50b) cell_myfav_contact_pane_g5_ParamLimits

0x12a0,	// (0x0004a50b) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x00058bf8) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x00058bf8) cell_myfav_contact_pane_g

0xa298,	// (0x00053503) main_myfav_hc_pane_g3_ParamLimits

0xa298,	// (0x00053503) main_myfav_hc_pane_g3

0x4477,	// (0x0004d6e2) popup_adpt_find_window

0xa2f1,	// (0x0005355c) afind_page_pane_ParamLimits

0xa2f1,	// (0x0005355c) afind_page_pane

0xa2fe,	// (0x00053569) aid_size_cell_afind_ParamLimits

0xa2fe,	// (0x00053569) aid_size_cell_afind

0xa318,	// (0x00053583) bg_popup_sub_pane_cp09_ParamLimits

0xa318,	// (0x00053583) bg_popup_sub_pane_cp09

0xa325,	// (0x00053590) find_pane_cp01_ParamLimits

0xa325,	// (0x00053590) find_pane_cp01

0x12ac,	// (0x0004a517) grid_afind_control_pane_ParamLimits

0x12ac,	// (0x0004a517) grid_afind_control_pane

0xa332,	// (0x0005359d) grid_afind_pane_ParamLimits

0xa332,	// (0x0005359d) grid_afind_pane

0xa34e,	// (0x000535b9) cell_afind_pane_ParamLimits

0xa34e,	// (0x000535b9) cell_afind_pane

0xee36,	// (0x000580a1) afind_page_pane_g1

0xa396,	// (0x00053601) afind_page_pane_g2

0xa39f,	// (0x0005360a) afind_page_pane_g3

0x0002,

0xf998,	// (0x00058c03) afind_page_pane_g

0xa3a8,	// (0x00053613) afind_page_pane_t1

0x12c0,	// (0x0004a52b) cell_afind_grid_control_pane_ParamLimits

0x12c0,	// (0x0004a52b) cell_afind_grid_control_pane

0x103b,	// (0x0004a2a6) bg_button_pane_cp69_ParamLimits

0x103b,	// (0x0004a2a6) bg_button_pane_cp69

0xa3bf,	// (0x0005362a) cell_afind_pane_g1_ParamLimits

0xa3bf,	// (0x0005362a) cell_afind_pane_g1

0xa3cc,	// (0x00053637) cell_afind_pane_t1_ParamLimits

0xa3cc,	// (0x00053637) cell_afind_pane_t1

0x5af0,	// (0x0004ed5b) bg_button_pane_cp72

0x12cf,	// (0x0004a53a) cell_afind_grid_control_pane_g1

0x7a1b,	// (0x00050c86) aid_image_placing_area_ParamLimits

0x7a1b,	// (0x00050c86) aid_image_placing_area

0x0cd5,	// (0x00049f40) field_vitu_entry_pane_g1_ParamLimits

0x0cd5,	// (0x00049f40) field_vitu_entry_pane_g1

0x0ce1,	// (0x00049f4c) field_vitu_entry_pane_g2_ParamLimits

0x0ce1,	// (0x00049f4c) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x00058ab4) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x00058ab4) field_vitu_entry_pane_g

0x953c,	// (0x000527a7) cell_vitu_itu_pane_g1_ParamLimits

0x957e,	// (0x000527e9) cell_vitu_itu_pane_t3_ParamLimits

0x957e,	// (0x000527e9) cell_vitu_itu_pane_t3

0x0feb,	// (0x0004a256) mp4_progress_pane_t1_ParamLimits

0x1004,	// (0x0004a26f) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x00058b49) mp4_progress_pane_t_ParamLimits

0x101d,	// (0x0004a288) mup_progress_pane_cp04_ParamLimits

0xa2db,	// (0x00053546) main_myfav_hc_pane_t5_ParamLimits

0xa2db,	// (0x00053546) main_myfav_hc_pane_t5

0x4302,	// (0x0004d56d) aid_zoom_text_primary

0x4477,	// (0x0004d6e2) popup_adpt_find_window_ParamLimits

0xe9ed,	// (0x00057c58) main_cam_set_pane

0x9d5e,	// (0x00052fc9) cam4_zoom_pane_ParamLimits

0x9d5e,	// (0x00052fc9) cam4_zoom_pane

0xa3de,	// (0x00053649) main_cam_set_pane_g1_ParamLimits

0xa3de,	// (0x00053649) main_cam_set_pane_g1

0xa3ec,	// (0x00053657) main_cam_set_pane_g2_ParamLimits

0xa3ec,	// (0x00053657) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x00058c0a) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x00058c0a) main_cam_set_pane_g

0xa3f8,	// (0x00053663) main_cam_set_pane_t1_ParamLimits

0xa3f8,	// (0x00053663) main_cam_set_pane_t1

0xa414,	// (0x0005367f) main_cset_listscroll_pane_ParamLimits

0xa414,	// (0x0005367f) main_cset_listscroll_pane

0xa43f,	// (0x000536aa) main_cset_slider_pane_ParamLimits

0xa43f,	// (0x000536aa) main_cset_slider_pane

0x12e0,	// (0x0004a54b) main_cset_list_pane_ParamLimits

0x12e0,	// (0x0004a54b) main_cset_list_pane

0x12f0,	// (0x0004a55b) scroll_pane_cp028

0xa45e,	// (0x000536c9) aid_area_touch_slider

0xa47a,	// (0x000536e5) cset_slider_pane

0xa4a4,	// (0x0005370f) main_cset_slider_pane_g1

0xa4b9,	// (0x00053724) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x00058c0f) main_cset_slider_pane_g

0x1329,	// (0x0004a594) main_cset_slider_pane_t1

0xa581,	// (0x000537ec) main_cset_slider_pane_t2

0xa59b,	// (0x00053806) main_cset_slider_pane_t3

0xa5b5,	// (0x00053820) main_cset_slider_pane_t4

0xa5d3,	// (0x0005383e) main_cset_slider_pane_t5

0xa5f5,	// (0x00053860) main_cset_slider_pane_t6

0xa60c,	// (0x00053877) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x00058c34) main_cset_slider_pane_t

0xa71a,	// (0x00053985) cset_list_set_pane_ParamLimits

0xa71a,	// (0x00053985) cset_list_set_pane

0xa737,	// (0x000539a2) aid_position_infowindow_above

0xa73f,	// (0x000539aa) aid_position_infowindow_below

0xa747,	// (0x000539b2) cset_list_set_pane_g1_ParamLimits

0xa747,	// (0x000539b2) cset_list_set_pane_g1

0x1b3b,	// (0x0004ada6) cset_list_set_pane_g3_ParamLimits

0x1b3b,	// (0x0004ada6) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x00058c53) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x00058c53) cset_list_set_pane_g

0xa753,	// (0x000539be) cset_list_set_pane_t1_ParamLimits

0xa753,	// (0x000539be) cset_list_set_pane_t1

0xe9ed,	// (0x00057c58) list_highlight_pane_cp021_ParamLimits

0xe9ed,	// (0x00057c58) list_highlight_pane_cp021

0xd716,	// (0x00056981) cset_slider_pane_g1

0xd728,	// (0x00056993) cset_slider_pane_g2

0xd71f,	// (0x0005698a) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x00058c58) cset_slider_pane_g

0xa768,	// (0x000539d3) aid_area_touch_cam4_zoom

0xa770,	// (0x000539db) cam4_zoom_cont_pane

0xa778,	// (0x000539e3) cam4_zoom_pane_g1

0xa780,	// (0x000539eb) cam4_zoom_pane_g2

0xa788,	// (0x000539f3) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x00058c5f) cam4_zoom_pane_g

0xa790,	// (0x000539fb) cam4_zoom_cont_pane_g1

0xa799,	// (0x00053a04) cam4_zoom_cont_pane_g2

0xa7a2,	// (0x00053a0d) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x00058c66) cam4_zoom_cont_pane_g

0x9c57,	// (0x00052ec2) call4_image_pane_ParamLimits

0x9c57,	// (0x00052ec2) call4_image_pane

0x1047,	// (0x0004a2b2) call4_windows_conf_pane_ParamLimits

0x1086,	// (0x0004a2f1) popup_call4_audio_in_window_ParamLimits

0x1086,	// (0x0004a2f1) popup_call4_audio_in_window

0x42b0,	// (0x0004d51b) bg_popup_call2_act_pane_cp02

0x10fc,	// (0x0004a367) call4_list_conf_pane

0xee36,	// (0x000580a1) call4_image_pane_g1

0xee36,	// (0x000580a1) call4_image_pane_g2

0x0001,

0xf70f,	// (0x0005897a) call4_image_pane_g

0x13e4,	// (0x0004a64f) list_single_graphic_popup_conf4_pane_ParamLimits

0x13e4,	// (0x0004a64f) list_single_graphic_popup_conf4_pane

0x42b0,	// (0x0004d51b) list_highlight_pane_cp022

0x13f7,	// (0x0004a662) list_single_graphic_popup_conf4_pane_g1

0xd407,	// (0x00056672) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x00058c6d) list_single_graphic_popup_conf4_pane_g

0x13ff,	// (0x0004a66a) list_single_graphic_popup_conf4_pane_t1

0x5ce6,	// (0x0004ef51) popup_vtel_slider_window_ParamLimits

0x5ce6,	// (0x0004ef51) popup_vtel_slider_window

0x1029,	// (0x0004a294) dialer2_ne_pane_t2_ParamLimits

0x1029,	// (0x0004a294) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x00058b4e) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x00058b4e) dialer2_ne_pane_t

0xe9ed,	// (0x00057c58) bg_popup_sub_pane_cp010_ParamLimits

0xe9ed,	// (0x00057c58) bg_popup_sub_pane_cp010

0xa7ab,	// (0x00053a16) popup_vtel_slider_window_g1_ParamLimits

0xa7ab,	// (0x00053a16) popup_vtel_slider_window_g1

0xa7b7,	// (0x00053a22) popup_vtel_slider_window_g2_ParamLimits

0xa7b7,	// (0x00053a22) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x00058c72) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x00058c72) popup_vtel_slider_window_g

0xa7ff,	// (0x00053a6a) vtel_slider_pane_ParamLimits

0xa7ff,	// (0x00053a6a) vtel_slider_pane

0xa80e,	// (0x00053a79) vtel_slider_pane_g1_ParamLimits

0xa80e,	// (0x00053a79) vtel_slider_pane_g1

0xa81b,	// (0x00053a86) vtel_slider_pane_g2_ParamLimits

0xa81b,	// (0x00053a86) vtel_slider_pane_g2

0xa828,	// (0x00053a93) vtel_slider_pane_g3_ParamLimits

0xa828,	// (0x00053a93) vtel_slider_pane_g3

0xa80e,	// (0x00053a79) vtel_slider_pane_g4_ParamLimits

0xa80e,	// (0x00053a79) vtel_slider_pane_g4

0xa835,	// (0x00053aa0) vtel_slider_pane_g5_ParamLimits

0xa835,	// (0x00053aa0) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x00058c7b) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x00058c7b) vtel_slider_pane_g

0x42b0,	// (0x0004d51b) main_gallery2_pane

0x9fab,	// (0x00053216) aid_size_row_itut2_dropdow_list_ParamLimits

0x9fab,	// (0x00053216) aid_size_row_itut2_dropdow_list

0xa019,	// (0x00053284) grid_vitu2_function_top_pane_ParamLimits

0xa019,	// (0x00053284) grid_vitu2_function_top_pane

0xa06f,	// (0x000532da) popup_vitu2_dropdown_list_window_ParamLimits

0xa06f,	// (0x000532da) popup_vitu2_dropdown_list_window

0xa08f,	// (0x000532fa) popup_vitu2_match_list_window

0xa842,	// (0x00053aad) cell_vitu2_function_top_pane_ParamLimits

0xa842,	// (0x00053aad) cell_vitu2_function_top_pane

0xa862,	// (0x00053acd) cell_vitu2_function_top_pane_cp01_ParamLimits

0xa862,	// (0x00053acd) cell_vitu2_function_top_pane_cp01

0xa880,	// (0x00053aeb) cell_vitu2_function_top_wide_pane_ParamLimits

0xa880,	// (0x00053aeb) cell_vitu2_function_top_wide_pane

0x9ed6,	// (0x00053141) bg_button_pane_cp012

0xa89e,	// (0x00053b09) cell_vitu2_function_top_pane_g1

0xa8ad,	// (0x00053b18) bg_button_pane_cp013_ParamLimits

0xa8ad,	// (0x00053b18) bg_button_pane_cp013

0xa8c9,	// (0x00053b34) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa8c9,	// (0x00053b34) cell_vitu2_function_top_wide_pane_g1

0xa8e1,	// (0x00053b4c) bg_popup_sub_pane_cp20

0xa8ef,	// (0x00053b5a) list_vitu2_match_list_pane

0x11d6,	// (0x0004a441) bg_popup_sub_pane_cp20_g1

0x11de,	// (0x0004a449) bg_popup_sub_pane_cp20_g2

0x61da,	// (0x0004f445) bg_popup_sub_pane_cp20_g3

0x11e6,	// (0x0004a451) bg_popup_sub_pane_cp20_g4

0x61ba,	// (0x0004f425) bg_popup_sub_pane_cp20_g5

0x141b,	// (0x0004a686) bg_popup_sub_pane_cp20_g6

0x11f6,	// (0x0004a461) bg_popup_sub_pane_cp20_g7

0x11fe,	// (0x0004a469) bg_popup_sub_pane_cp20_g8

0x1206,	// (0x0004a471) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x00058c86) bg_popup_sub_pane_cp20_g

0xa907,	// (0x00053b72) list_vitu2_match_list_item_pane_ParamLimits

0xa907,	// (0x00053b72) list_vitu2_match_list_item_pane

0xa919,	// (0x00053b84) list_vitu2_match_list_item_pane_t1

0x5015,	// (0x0004e280) bg_popup_sub_pane_cp21

0xa956,	// (0x00053bc1) grid_vitu2_dropdown_list_pane

0xa95e,	// (0x00053bc9) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa95e,	// (0x00053bc9) cell_vitu2_dropdown_list_char_pane

0xa97f,	// (0x00053bea) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa97f,	// (0x00053bea) cell_vitu2_dropdown_list_ctrl_pane

0x144d,	// (0x0004a6b8) cell_vitu2_dropdown_list_char_pane_g1

0x1444,	// (0x0004a6af) cell_vitu2_dropdown_list_char_pane_g2

0x143b,	// (0x0004a6a6) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x00058ca3) cell_vitu2_dropdown_list_char_pane_g

0xa9ab,	// (0x00053c16) cell_vitu2_dropdown_list_char_pane_t1

0xa9b9,	// (0x00053c24) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa9b9,	// (0x00053c24) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa9c9,	// (0x00053c34) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa9c9,	// (0x00053c34) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa9da,	// (0x00053c45) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa9da,	// (0x00053c45) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa9ea,	// (0x00053c55) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa9ea,	// (0x00053c55) cell_vitu2_dropdown_list_ctrl_pane_g4

0x9de9,	// (0x00053054) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x9de9,	// (0x00053054) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x00058caa) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x00058caa) cell_vitu2_dropdown_list_ctrl_pane_g

0xaa06,	// (0x00053c71) aid_size_cell_gallery2_ParamLimits

0xaa06,	// (0x00053c71) aid_size_cell_gallery2

0xaa14,	// (0x00053c7f) grid_gallery2_pane_ParamLimits

0xaa14,	// (0x00053c7f) grid_gallery2_pane

0xaa23,	// (0x00053c8e) scroll_pane_cp029_ParamLimits

0xaa23,	// (0x00053c8e) scroll_pane_cp029

0xaa2f,	// (0x00053c9a) cell_gallery2_pane_ParamLimits

0xaa2f,	// (0x00053c9a) cell_gallery2_pane

0x1456,	// (0x0004a6c1) cell_gallery2_pane_g2

0xaa60,	// (0x00053ccb) cell_gallery2_pane_g3

0x1460,	// (0x0004a6cb) cell_gallery2_pane_g4

0x1468,	// (0x0004a6d3) cell_gallery2_pane_g5

0xd5e0,	// (0x0005684b) grid_highlight_pane_cp10

0xa08f,	// (0x000532fa) popup_vitu2_match_list_window_ParamLimits

0xa0a1,	// (0x0005330c) popup_vitu2_query_window_ParamLimits

0xa0a1,	// (0x0005330c) popup_vitu2_query_window

0x5015,	// (0x0004e280) bg_vitu2_candi_button_pane

0x144d,	// (0x0004a6b8) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1444,	// (0x0004a6af) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x143b,	// (0x0004a6a6) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xaa68,	// (0x00053cd3) bg_button_pane_cp015

0xaa72,	// (0x00053cdd) bg_button_pane_cp016

0xaa7c,	// (0x00053ce7) bg_button_pane_cp017

0xe9ed,	// (0x00057c58) bg_popup_sub_pane_cp22

0x1470,	// (0x0004a6db) popup_vitu2_query_window_g1

0xaaa4,	// (0x00053d0f) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x00058cb5) popup_vitu2_query_window_g

0xaab2,	// (0x00053d1d) popup_vitu2_query_window_t1_ParamLimits

0xaab2,	// (0x00053d1d) popup_vitu2_query_window_t1

0xaada,	// (0x00053d45) popup_vitu2_query_window_t2_ParamLimits

0xaada,	// (0x00053d45) popup_vitu2_query_window_t2

0xaaec,	// (0x00053d57) popup_vitu2_query_window_t3_ParamLimits

0xaaec,	// (0x00053d57) popup_vitu2_query_window_t3

0xab14,	// (0x00053d7f) popup_vitu2_query_window_t4_ParamLimits

0xab14,	// (0x00053d7f) popup_vitu2_query_window_t4

0xab28,	// (0x00053d93) popup_vitu2_query_window_t5_ParamLimits

0xab28,	// (0x00053d93) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x00058cba) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x00058cba) popup_vitu2_query_window_t

0x12d8,	// (0x0004a543) main_cset_text_pane

0xa45e,	// (0x000536c9) aid_area_touch_slider_ParamLimits

0xa47a,	// (0x000536e5) cset_slider_pane_ParamLimits

0xa4a4,	// (0x0005370f) main_cset_slider_pane_g1_ParamLimits

0xa4b9,	// (0x00053724) main_cset_slider_pane_g2_ParamLimits

0x12f9,	// (0x0004a564) main_cset_slider_pane_g3_ParamLimits

0x12f9,	// (0x0004a564) main_cset_slider_pane_g3

0xa4ce,	// (0x00053739) main_cset_slider_pane_g4_ParamLimits

0xa4ce,	// (0x00053739) main_cset_slider_pane_g4

0xa4dd,	// (0x00053748) main_cset_slider_pane_g5_ParamLimits

0xa4dd,	// (0x00053748) main_cset_slider_pane_g5

0xa4eb,	// (0x00053756) main_cset_slider_pane_g6_ParamLimits

0xa4eb,	// (0x00053756) main_cset_slider_pane_g6

0xf9a4,	// (0x00058c0f) main_cset_slider_pane_g_ParamLimits

0x1329,	// (0x0004a594) main_cset_slider_pane_t1_ParamLimits

0xa581,	// (0x000537ec) main_cset_slider_pane_t2_ParamLimits

0xa59b,	// (0x00053806) main_cset_slider_pane_t3_ParamLimits

0xa5b5,	// (0x00053820) main_cset_slider_pane_t4_ParamLimits

0xa5d3,	// (0x0005383e) main_cset_slider_pane_t5_ParamLimits

0xa5f5,	// (0x00053860) main_cset_slider_pane_t6_ParamLimits

0xa60c,	// (0x00053877) main_cset_slider_pane_t7_ParamLimits

0xa63a,	// (0x000538a5) main_cset_slider_pane_t8_ParamLimits

0xa63a,	// (0x000538a5) main_cset_slider_pane_t8

0xa662,	// (0x000538cd) main_cset_slider_pane_t9_ParamLimits

0xa662,	// (0x000538cd) main_cset_slider_pane_t9

0xa68a,	// (0x000538f5) main_cset_slider_pane_t10_ParamLimits

0xa68a,	// (0x000538f5) main_cset_slider_pane_t10

0xa6b2,	// (0x0005391d) main_cset_slider_pane_t11_ParamLimits

0xa6b2,	// (0x0005391d) main_cset_slider_pane_t11

0xa6dc,	// (0x00053947) main_cset_slider_pane_t12_ParamLimits

0xa6dc,	// (0x00053947) main_cset_slider_pane_t12

0xa6fb,	// (0x00053966) main_cset_slider_pane_t13_ParamLimits

0xa6fb,	// (0x00053966) main_cset_slider_pane_t13

0xf9c9,	// (0x00058c34) main_cset_slider_pane_t_ParamLimits

0x42b0,	// (0x0004d51b) bg_popup_sub_pane_cp011

0x147c,	// (0x0004a6e7) main_cset_text_pane_g1

0x1484,	// (0x0004a6ef) main_cset_text_pane_t1

0x1492,	// (0x0004a6fd) main_cset_text_pane_t2

0x14a0,	// (0x0004a70b) main_cset_text_pane_t3

0x14ae,	// (0x0004a719) main_cset_text_pane_t4

0x14bc,	// (0x0004a727) main_cset_text_pane_t5

0x14ca,	// (0x0004a735) main_cset_text_pane_t6

0x14d8,	// (0x0004a743) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x00058cc5) main_cset_text_pane_t

0x42b0,	// (0x0004d51b) main_cam4_burst_pane

0x42b0,	// (0x0004d51b) main_cam5_pane

0xd061,	// (0x000562cc) bg_button_pane_cp019

0xa3b6,	// (0x00053621) bg_button_pane_cp020

0x1305,	// (0x0004a570) main_cset_slider_pane_g7_ParamLimits

0x1305,	// (0x0004a570) main_cset_slider_pane_g7

0x1311,	// (0x0004a57c) main_cset_slider_pane_g8_ParamLimits

0x1311,	// (0x0004a57c) main_cset_slider_pane_g8

0xa501,	// (0x0005376c) main_cset_slider_pane_g9_ParamLimits

0xa501,	// (0x0005376c) main_cset_slider_pane_g9

0xa50d,	// (0x00053778) main_cset_slider_pane_g10_ParamLimits

0xa50d,	// (0x00053778) main_cset_slider_pane_g10

0xa519,	// (0x00053784) main_cset_slider_pane_g11_ParamLimits

0xa519,	// (0x00053784) main_cset_slider_pane_g11

0xa525,	// (0x00053790) main_cset_slider_pane_g12_ParamLimits

0xa525,	// (0x00053790) main_cset_slider_pane_g12

0xa531,	// (0x0005379c) main_cset_slider_pane_g13_ParamLimits

0xa531,	// (0x0005379c) main_cset_slider_pane_g13

0xa53f,	// (0x000537aa) main_cset_slider_pane_g14_ParamLimits

0xa53f,	// (0x000537aa) main_cset_slider_pane_g14

0xa54d,	// (0x000537b8) main_cset_slider_pane_g15_ParamLimits

0xa54d,	// (0x000537b8) main_cset_slider_pane_g15

0x1357,	// (0x0004a5c2) main_cset_slider_pane_t14_ParamLimits

0x1357,	// (0x0004a5c2) main_cset_slider_pane_t14

0x1390,	// (0x0004a5fb) main_cset_slider_pane_t15_ParamLimits

0x1390,	// (0x0004a5fb) main_cset_slider_pane_t15

0xab3c,	// (0x00053da7) aid_cam4_burst_size_cell_ParamLimits

0xab3c,	// (0x00053da7) aid_cam4_burst_size_cell

0xab58,	// (0x00053dc3) grid_cam4_burst_pane_ParamLimits

0xab58,	// (0x00053dc3) grid_cam4_burst_pane

0xab88,	// (0x00053df3) linegrid_cam4_burst_pane_ParamLimits

0xab88,	// (0x00053df3) linegrid_cam4_burst_pane

0xabaa,	// (0x00053e15) scroll_pane_cp30_ParamLimits

0xabaa,	// (0x00053e15) scroll_pane_cp30

0xabb6,	// (0x00053e21) cell_cam4_burst_pane_ParamLimits

0xabb6,	// (0x00053e21) cell_cam4_burst_pane

0x14e6,	// (0x0004a751) linegrid_cam4_burst_pane_g1_ParamLimits

0x14e6,	// (0x0004a751) linegrid_cam4_burst_pane_g1

0xabf2,	// (0x00053e5d) linegrid_cam4_burst_pane_g2_ParamLimits

0xabf2,	// (0x00053e5d) linegrid_cam4_burst_pane_g2

0x14f3,	// (0x0004a75e) linegrid_cam4_burst_pane_g3_ParamLimits

0x14f3,	// (0x0004a75e) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x00058cd4) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x00058cd4) linegrid_cam4_burst_pane_g

0xac03,	// (0x00053e6e) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xac03,	// (0x00053e6e) linegrid_cam4_burst_pane_g3_copy1

0x1500,	// (0x0004a76b) linegrid_cam4_burst_pane_g4_ParamLimits

0x1500,	// (0x0004a76b) linegrid_cam4_burst_pane_g4

0xac1d,	// (0x00053e88) linegrid_cam4_burst_pane_g5_ParamLimits

0xac1d,	// (0x00053e88) linegrid_cam4_burst_pane_g5

0xac2e,	// (0x00053e99) linegrid_cam4_burst_pane_g6_ParamLimits

0xac2e,	// (0x00053e99) linegrid_cam4_burst_pane_g6

0x150d,	// (0x0004a778) linegrid_cam4_burst_pane_g7_ParamLimits

0x150d,	// (0x0004a778) linegrid_cam4_burst_pane_g7

0xac3f,	// (0x00053eaa) cell_cam4_burst_pane_g1

0x1526,	// (0x0004a791) main_cam5_pane_t1_ParamLimits

0x1526,	// (0x0004a791) main_cam5_pane_t1

0x1538,	// (0x0004a7a3) main_cam5_pane_t2_ParamLimits

0x1538,	// (0x0004a7a3) main_cam5_pane_t2

0x154a,	// (0x0004a7b5) main_cam5_pane_t3_ParamLimits

0x154a,	// (0x0004a7b5) main_cam5_pane_t3

0x155c,	// (0x0004a7c7) main_cam5_pane_t4_ParamLimits

0x155c,	// (0x0004a7c7) main_cam5_pane_t4

0x1572,	// (0x0004a7dd) main_cam5_pane_t5_ParamLimits

0x1572,	// (0x0004a7dd) main_cam5_pane_t5

0x1584,	// (0x0004a7ef) main_cam5_pane_t6_ParamLimits

0x1584,	// (0x0004a7ef) main_cam5_pane_t6

0x1598,	// (0x0004a803) main_cam5_pane_t7_ParamLimits

0x1598,	// (0x0004a803) main_cam5_pane_t7

0x15aa,	// (0x0004a815) main_cam5_pane_t8_ParamLimits

0x15aa,	// (0x0004a815) main_cam5_pane_t8

0x15c6,	// (0x0004a831) main_cam5_pane_t9_ParamLimits

0x15c6,	// (0x0004a831) main_cam5_pane_t9

0x15d8,	// (0x0004a843) main_cam5_pane_t10_ParamLimits

0x15d8,	// (0x0004a843) main_cam5_pane_t10

0x15ea,	// (0x0004a855) main_cam5_pane_t11_ParamLimits

0x15ea,	// (0x0004a855) main_cam5_pane_t11

0x15fc,	// (0x0004a867) main_cam5_pane_t12_ParamLimits

0x15fc,	// (0x0004a867) main_cam5_pane_t12

0x1611,	// (0x0004a87c) main_cam5_pane_t13_ParamLimits

0x1611,	// (0x0004a87c) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x00058ce0) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x00058ce0) main_cam5_pane_t

0x452e,	// (0x0004d799) popup_scut_keymap_window_ParamLimits

0x452e,	// (0x0004d799) popup_scut_keymap_window

0xac52,	// (0x00053ebd) aid_size_cell_brow_shortcut

0xd5e0,	// (0x0005684b) bg_popup_window_pane_cp010

0xac5e,	// (0x00053ec9) grid_scut_pane

0xac6a,	// (0x00053ed5) cell_scut_pane_ParamLimits

0xac6a,	// (0x00053ed5) cell_scut_pane

0xac81,	// (0x00053eec) cell_scut_pane_g1

0x162e,	// (0x0004a899) cell_scut_pane_t1

0x163d,	// (0x0004a8a8) cell_scut_pane_t2

0xac8a,	// (0x00053ef5) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x00058cfb) cell_scut_pane_t

0x8bbd,	// (0x00051e28) main_mup3_pane_g8_ParamLimits

0x8bbd,	// (0x00051e28) main_mup3_pane_g8

0x9fb9,	// (0x00053224) area_vitu2_query_pane_ParamLimits

0x9fb9,	// (0x00053224) area_vitu2_query_pane

0xaa86,	// (0x00053cf1) input_focus_pane_cp08

0x164c,	// (0x0004a8b7) area_vitu2_query_pane_g1

0xac98,	// (0x00053f03) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x00058d02) area_vitu2_query_pane_g

0xaca9,	// (0x00053f14) area_vitu2_query_pane_t1_ParamLimits

0xaca9,	// (0x00053f14) area_vitu2_query_pane_t1

0xacbd,	// (0x00053f28) area_vitu2_query_pane_t2_ParamLimits

0xacbd,	// (0x00053f28) area_vitu2_query_pane_t2

0xacd1,	// (0x00053f3c) area_vitu2_query_pane_t3_ParamLimits

0xacd1,	// (0x00053f3c) area_vitu2_query_pane_t3

0x1658,	// (0x0004a8c3) area_vitu2_query_pane_t4_ParamLimits

0x1658,	// (0x0004a8c3) area_vitu2_query_pane_t4

0x1680,	// (0x0004a8eb) area_vitu2_query_pane_t5_ParamLimits

0x1680,	// (0x0004a8eb) area_vitu2_query_pane_t5

0x16a8,	// (0x0004a913) area_vitu2_query_pane_t6_ParamLimits

0x16a8,	// (0x0004a913) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x00058d07) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x00058d07) area_vitu2_query_pane_t

0xacf9,	// (0x00053f64) bg_button_pane_cp018

0xad07,	// (0x00053f72) bg_button_pane_cp021

0xad13,	// (0x00053f7e) bg_button_pane_cp022

0xad24,	// (0x00053f8f) input_focus_pane_cp09

0x7020,	// (0x0005028b) aid_size_touch_mv_arrow_left

0x704b,	// (0x000502b6) aid_size_touch_mv_arrow_right

0xa565,	// (0x000537d0) main_cset_slider_pane_g16_ParamLimits

0xa565,	// (0x000537d0) main_cset_slider_pane_g16

0xa573,	// (0x000537de) main_cset_slider_pane_g17_ParamLimits

0xa573,	// (0x000537de) main_cset_slider_pane_g17

0xac3f,	// (0x00053eaa) cell_cam4_burst_pane_g1_ParamLimits

0x42b0,	// (0x0004d51b) compa_mode_pane

0xa7c3,	// (0x00053a2e) popup_vtel_slider_window_g3_ParamLimits

0xa7c3,	// (0x00053a2e) popup_vtel_slider_window_g3

0xa7d7,	// (0x00053a42) popup_vtel_slider_window_g4_ParamLimits

0xa7d7,	// (0x00053a42) popup_vtel_slider_window_g4

0xa7eb,	// (0x00053a56) popup_vtel_slider_window_t1_ParamLimits

0xa7eb,	// (0x00053a56) popup_vtel_slider_window_t1

0x42b0,	// (0x0004d51b) main_cl_pane

0xea15,	// (0x00057c80) popup_imed_adjust2_window_ParamLimits

0xe9df,	// (0x00057c4a) bg_tb_trans_pane_cp05_ParamLimits

0x0c0a,	// (0x00049e75) popup_imed_adjust2_window_g1_ParamLimits

0x0c19,	// (0x00049e84) popup_imed_adjust2_window_g2_ParamLimits

0x0c19,	// (0x00049e84) popup_imed_adjust2_window_g2

0x0c25,	// (0x00049e90) popup_imed_adjust2_window_g3_ParamLimits

0x0c25,	// (0x00049e90) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x00058a78) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x00058a78) popup_imed_adjust2_window_g

0x0c31,	// (0x00049e9c) popup_imed_adjust2_window_t1_ParamLimits

0x0c49,	// (0x00049eb4) slider_imed_adjust_pane_ParamLimits

0x0c5d,	// (0x00049ec8) slider_imed_adjust_pane_g1_ParamLimits

0x0c6d,	// (0x00049ed8) slider_imed_adjust_pane_g2_ParamLimits

0x0c7d,	// (0x00049ee8) slider_imed_adjust_pane_g3_ParamLimits

0x0c8e,	// (0x00049ef9) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x00058a7f) slider_imed_adjust_pane_g_ParamLimits

0x9d13,	// (0x00052f7e) aid_touch_area_cam4_ParamLimits

0x9d13,	// (0x00052f7e) aid_touch_area_cam4

0x9d23,	// (0x00052f8e) battery_pane_cp01

0x9d9e,	// (0x00053009) main_camera4_pane_g6_ParamLimits

0x9d9e,	// (0x00053009) main_camera4_pane_g6

0x9dbc,	// (0x00053027) main_camera4_pane_t2_ParamLimits

0x9dbc,	// (0x00053027) main_camera4_pane_t2

0x0001,

0xf917,	// (0x00058b82) main_camera4_pane_t_ParamLimits

0xf917,	// (0x00058b82) main_camera4_pane_t

0x9e48,	// (0x000530b3) aid_touch_area_vid4_ParamLimits

0x9e48,	// (0x000530b3) aid_touch_area_vid4

0x9e88,	// (0x000530f3) main_video4_pane_g5_ParamLimits

0x9e88,	// (0x000530f3) main_video4_pane_g5

0x9eaa,	// (0x00053115) vid4_progress_pane_ParamLimits

0x9eaa,	// (0x00053115) vid4_progress_pane

0x131d,	// (0x0004a588) main_cset_slider_pane_g18_ParamLimits

0x131d,	// (0x0004a588) main_cset_slider_pane_g18

0x151a,	// (0x0004a785) cell_cam4_burst_pane_g2_ParamLimits

0x151a,	// (0x0004a785) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x00058cdb) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x00058cdb) cell_cam4_burst_pane_g

0xad35,	// (0x00053fa0) bg_cl_pane_ParamLimits

0xad35,	// (0x00053fa0) bg_cl_pane

0xad41,	// (0x00053fac) cl_header_pane_ParamLimits

0xad41,	// (0x00053fac) cl_header_pane

0xad4d,	// (0x00053fb8) cl_listscroll_pane_ParamLimits

0xad4d,	// (0x00053fb8) cl_listscroll_pane

0x16f4,	// (0x0004a95f) bg_cl_pane_g1

0x16fc,	// (0x0004a967) bg_cl_pane_g2

0x1704,	// (0x0004a96f) bg_cl_pane_g3

0x170c,	// (0x0004a977) bg_cl_pane_g4

0x1714,	// (0x0004a97f) bg_cl_pane_g5

0x171c,	// (0x0004a987) bg_cl_pane_g6

0x1724,	// (0x0004a98f) bg_cl_pane_g7

0x172c,	// (0x0004a997) bg_cl_pane_g8

0x1734,	// (0x0004a99f) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x00058d16) bg_cl_pane_g

0xad59,	// (0x00053fc4) aid_height_cl_leading_ParamLimits

0xad59,	// (0x00053fc4) aid_height_cl_leading

0xad65,	// (0x00053fd0) aid_height_cl_text_ParamLimits

0xad65,	// (0x00053fd0) aid_height_cl_text

0x1128,	// (0x0004a393) bg_cl_header_pane_ParamLimits

0x1128,	// (0x0004a393) bg_cl_header_pane

0xad7d,	// (0x00053fe8) cl_header_pane_g1_ParamLimits

0xad7d,	// (0x00053fe8) cl_header_pane_g1

0xad8a,	// (0x00053ff5) cl_header_pane_t1_ParamLimits

0xad8a,	// (0x00053ff5) cl_header_pane_t1

0x173c,	// (0x0004a9a7) cl_list_pane

0x12f0,	// (0x0004a55b) hc_scroll_pane_cp01

0x61ba,	// (0x0004f425) bg_cl_header_pane_g1

0x11d6,	// (0x0004a441) bg_cl_header_pane_g2

0x61da,	// (0x0004f445) bg_cl_header_pane_g3

0x11e6,	// (0x0004a451) bg_cl_header_pane_g4

0x11de,	// (0x0004a449) bg_cl_header_pane_g5

0x141b,	// (0x0004a686) bg_cl_header_pane_g6

0x11fe,	// (0x0004a469) bg_cl_header_pane_g7

0x1206,	// (0x0004a471) bg_cl_header_pane_g8

0x11f6,	// (0x0004a461) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x00058d29) bg_cl_header_pane_g

0xad9c,	// (0x00054007) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xad9c,	// (0x00054007) hc_cl_list_double_graphic_heading_pane

0xadb3,	// (0x0005401e) hc_cl_list_single_graphic_pane_ParamLimits

0xadb3,	// (0x0005401e) hc_cl_list_single_graphic_pane

0xadd3,	// (0x0005403e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xadd3,	// (0x0005403e) hc_cl_list_single_graphic_pane_g1

0xaddf,	// (0x0005404a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xaddf,	// (0x0005404a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x00058d3c) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x00058d3c) hc_cl_list_single_graphic_pane_g

0xadf3,	// (0x0005405e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xadf3,	// (0x0005405e) hc_cl_list_single_graphic_pane_t1

0xadd3,	// (0x0005403e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xadd3,	// (0x0005403e) hc_cl_list_double_graphic_heading_pane_g1

0xae08,	// (0x00054073) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xae08,	// (0x00054073) hc_cl_list_double_graphic_heading_pane_g2

0xae1c,	// (0x00054087) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xae1c,	// (0x00054087) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x00058d41) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x00058d41) hc_cl_list_double_graphic_heading_pane_g

0xae30,	// (0x0005409b) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xae30,	// (0x0005409b) hc_cl_list_double_graphic_heading_pane_t1

0xae45,	// (0x000540b0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xae45,	// (0x000540b0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x00058d48) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x00058d48) hc_cl_list_double_graphic_heading_pane_t

0xae62,	// (0x000540cd) vid4_progress_pane_g1

0xae72,	// (0x000540dd) vid4_progress_pane_g2

0xd189,	// (0x000563f4) vid4_progress_pane_g3

0x9e10,	// (0x0005307b) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x00058d4d) vid4_progress_pane_g

0xae82,	// (0x000540ed) vid4_progress_pane_t1

0xae97,	// (0x00054102) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x00058d58) vid4_progress_pane_t

0xaec2,	// (0x0005412d) wait_bar_pane_cp07

0xec27,	// (0x00057e92) blid_firmament_pane_ParamLimits

0xec6a,	// (0x00057ed5) popup_blid_sat_info2_window_g1

0xec8e,	// (0x00057ef9) popup_blid_sat_info2_window_t3

0xec9c,	// (0x00057f07) popup_blid_sat_info2_window_t4

0xecaa,	// (0x00057f15) popup_blid_sat_info2_window_t5

0xecb8,	// (0x00057f23) popup_blid_sat_info2_window_t6

0xecc8,	// (0x00057f33) popup_blid_sat_info2_window_t7

0xecd6,	// (0x00057f41) popup_blid_sat_info2_window_t8

0xece4,	// (0x00057f4f) popup_blid_sat_info2_window_t9

0xecf2,	// (0x00057f5d) popup_blid_sat_info2_window_t10

0xedb6,	// (0x00058021) aid_firma_cardinal_ParamLimits

0xedca,	// (0x00058035) blid_firmament_pane_t1_ParamLimits

0xede1,	// (0x0005804c) blid_firmament_pane_t2_ParamLimits

0xedf8,	// (0x00058063) blid_firmament_pane_t3_ParamLimits

0xee0f,	// (0x0005807a) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x00058971) blid_firmament_pane_t_ParamLimits

0xee26,	// (0x00058091) blid_sat_info_pane_ParamLimits

0xe9ed,	// (0x00057c58) main_cam_set_pane_ParamLimits

0x9356,	// (0x000525c1) aid_size_cell_colour_35_ParamLimits

0x9370,	// (0x000525db) aid_size_cell_colour_112_ParamLimits

0x9387,	// (0x000525f2) aid_size_cell_effect_ParamLimits

0xe9ed,	// (0x00057c58) bg_tb_trans_pane_cp02_ParamLimits

0xf0c4,	// (0x0005832f) heading_imed_pane_ParamLimits

0x93a1,	// (0x0005260c) listscroll_imed_pane_ParamLimits

0xe011,	// (0x0005727c) popup_call2_audio_first_window_g5_ParamLimits

0xe011,	// (0x0005727c) popup_call2_audio_first_window_g5

0x9ac2,	// (0x00052d2d) aid_size_touch_image3_arrow_left_ParamLimits

0x9ac2,	// (0x00052d2d) aid_size_touch_image3_arrow_left

0x9ad8,	// (0x00052d43) aid_size_touch_image3_arrow_right_ParamLimits

0x9ad8,	// (0x00052d43) aid_size_touch_image3_arrow_right

0xaead,	// (0x00054118) vid4_progress_pane_t3

0x9647,	// (0x000528b2) main_hwr_training_symbol_option_pane_ParamLimits

0x9647,	// (0x000528b2) main_hwr_training_symbol_option_pane

0x0ef7,	// (0x0004a162) popup_hwr_training_preview_window_ParamLimits

0x0ef7,	// (0x0004a162) popup_hwr_training_preview_window

0x96a8,	// (0x00052913) hwr_training_navi_pane_g5_ParamLimits

0x96a8,	// (0x00052913) hwr_training_navi_pane_g5

0x11c4,	// (0x0004a42f) popup_char_count_window

0xa8e1,	// (0x00053b4c) bg_popup_sub_pane_cp20_ParamLimits

0xa8ef,	// (0x00053b5a) list_vitu2_match_list_pane_ParamLimits

0xa8fb,	// (0x00053b66) vitu2_page_scroll_pane_ParamLimits

0xa8fb,	// (0x00053b66) vitu2_page_scroll_pane

0x179f,	// (0x0004aa0a) list_single_hwr_training_symbol_option_pane_ParamLimits

0x179f,	// (0x0004aa0a) list_single_hwr_training_symbol_option_pane

0x17b2,	// (0x0004aa1d) list_single_hwr_training_symbol_option_pane_g1

0x17ba,	// (0x0004aa25) list_single_hwr_training_symbol_option_pane_t1

0x17c8,	// (0x0004aa33) bg_button_pane_cp023

0x17d1,	// (0x0004aa3c) bg_button_pane_cp024

0xaed2,	// (0x0005413d) vitu2_page_scroll_pane_g1

0xaeda,	// (0x00054145) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x00058d5f) vitu2_page_scroll_pane_g

0xaee2,	// (0x0005414d) vitu2_page_scroll_pane_t1

0xeb87,	// (0x00057df2) popup_char_count_window_g1

0x1804,	// (0x0004aa6f) popup_char_count_window_g2

0x180d,	// (0x0004aa78) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x00058d64) popup_char_count_window_g

0x1816,	// (0x0004aa81) popup_char_count_window_t1

0x42b0,	// (0x0004d51b) main_vded2_pane

0x0bf6,	// (0x00049e61) aid_size_cell_imed_line

0x0c00,	// (0x00049e6b) grid_imed_line_width_pane

0x9f0e,	// (0x00053179) vid4_indicators_pane_g4

0x1824,	// (0x0004aa8f) cell_imed_line_width_pane_ParamLimits

0x1824,	// (0x0004aa8f) cell_imed_line_width_pane

0x1838,	// (0x0004aaa3) cell_imed_line_width_pane_g1

0xf0f3,	// (0x0005835e) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x00058d6b) cell_imed_line_width_pane_g

0xaef1,	// (0x0005415c) main_vded2_pane_g1_ParamLimits

0xaef1,	// (0x0005415c) main_vded2_pane_g1

0xaefe,	// (0x00054169) main_vded2_pane_g2_ParamLimits

0xaefe,	// (0x00054169) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x00058d70) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x00058d70) main_vded2_pane_g

0xaf0c,	// (0x00054177) vded2_slider_pane_ParamLimits

0xaf0c,	// (0x00054177) vded2_slider_pane

0xaf19,	// (0x00054184) aid_size_touch_vded2_end

0xaf23,	// (0x0005418e) aid_size_touch_vded2_playhead

0x1841,	// (0x0004aaac) aid_size_touch_vded2_start

0x1849,	// (0x0004aab4) vded2_slider_bg_pane

0x1852,	// (0x0004aabd) vded2_slider_pane_g1

0x185b,	// (0x0004aac6) vded2_slider_pane_g2

0xaf2b,	// (0x00054196) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x00058d75) vded2_slider_pane_g

0x1863,	// (0x0004aace) vded2_slider_bg_pane_g1

0x186c,	// (0x0004aad7) vded2_slider_bg_pane_g2

0x1875,	// (0x0004aae0) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x00058d7c) vded2_slider_bg_pane_g

0x7778,	// (0x000509e3) aid_postcard_touch_down_pane_ParamLimits

0x7778,	// (0x000509e3) aid_postcard_touch_down_pane

0x7788,	// (0x000509f3) aid_postcard_touch_up_pane_ParamLimits

0x7788,	// (0x000509f3) aid_postcard_touch_up_pane

0x42b0,	// (0x0004d51b) main_blid2_pane

0xe9fb,	// (0x00057c66) popup_blid2_search_window

0x42b0,	// (0x0004d51b) blid2_gps_pane

0x42b0,	// (0x0004d51b) blid2_navig_pane

0x42b0,	// (0x0004d51b) blid2_search_pane

0x42b0,	// (0x0004d51b) blid2_tripm_pane

0xaf34,	// (0x0005419f) blid2_search_pane_g1_ParamLimits

0xaf34,	// (0x0005419f) blid2_search_pane_g1

0xaf44,	// (0x000541af) blid2_search_pane_t1_ParamLimits

0xaf44,	// (0x000541af) blid2_search_pane_t1

0xaf56,	// (0x000541c1) aid_size_cell_blid2_gps_ParamLimits

0xaf56,	// (0x000541c1) aid_size_cell_blid2_gps

0xaf66,	// (0x000541d1) blid2_gps_pane_g1_ParamLimits

0xaf66,	// (0x000541d1) blid2_gps_pane_g1

0xaf72,	// (0x000541dd) grid_blid2_satellite_pane_ParamLimits

0xaf72,	// (0x000541dd) grid_blid2_satellite_pane

0xaf82,	// (0x000541ed) blid2_navig_pane_g1_ParamLimits

0xaf82,	// (0x000541ed) blid2_navig_pane_g1

0xaf8e,	// (0x000541f9) blid2_navig_pane_t1_ParamLimits

0xaf8e,	// (0x000541f9) blid2_navig_pane_t1

0xafa0,	// (0x0005420b) blid2_navig_pane_t2_ParamLimits

0xafa0,	// (0x0005420b) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x00058d83) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x00058d83) blid2_navig_pane_t

0xafb2,	// (0x0005421d) blid2_navig_ring_pane_ParamLimits

0xafb2,	// (0x0005421d) blid2_navig_ring_pane

0xafc2,	// (0x0005422d) blid2_speed_pane_ParamLimits

0xafc2,	// (0x0005422d) blid2_speed_pane

0xafce,	// (0x00054239) blid2_tripm_pane_g1_ParamLimits

0xafce,	// (0x00054239) blid2_tripm_pane_g1

0xafde,	// (0x00054249) blid2_tripm_pane_g2_ParamLimits

0xafde,	// (0x00054249) blid2_tripm_pane_g2

0xafea,	// (0x00054255) blid2_tripm_pane_g3_ParamLimits

0xafea,	// (0x00054255) blid2_tripm_pane_g3

0xaff6,	// (0x00054261) blid2_tripm_pane_g4_ParamLimits

0xaff6,	// (0x00054261) blid2_tripm_pane_g4

0xb002,	// (0x0005426d) blid2_tripm_pane_g5_ParamLimits

0xb002,	// (0x0005426d) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x00058d88) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x00058d88) blid2_tripm_pane_g

0xb01e,	// (0x00054289) blid2_tripm_pane_t1_ParamLimits

0xb01e,	// (0x00054289) blid2_tripm_pane_t1

0xb032,	// (0x0005429d) blid2_tripm_pane_t2_ParamLimits

0xb032,	// (0x0005429d) blid2_tripm_pane_t2

0xb046,	// (0x000542b1) blid2_tripm_pane_t3_ParamLimits

0xb046,	// (0x000542b1) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x00058d95) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x00058d95) blid2_tripm_pane_t

0xb078,	// (0x000542e3) cell_blid2_satellite_pane_ParamLimits

0xb078,	// (0x000542e3) cell_blid2_satellite_pane

0xb092,	// (0x000542fd) cell_blid2_satellite_pane_g1

0x187e,	// (0x0004aae9) cell_blid2_satellite_pane_t1

0xee36,	// (0x000580a1) blid2_speed_pane_g1

0x188c,	// (0x0004aaf7) blid2_speed_pane_t1

0x189a,	// (0x0004ab05) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x00058d9e) blid2_speed_pane_t

0xee36,	// (0x000580a1) blid2_navig_ring_pane_g1

0xb09b,	// (0x00054306) blid2_navig_ring_pane_g2

0xb0a3,	// (0x0005430e) blid2_navig_ring_pane_g3

0xb0ab,	// (0x00054316) blid2_navig_ring_pane_g4

0xb0b3,	// (0x0005431e) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x00058da3) blid2_navig_ring_pane_g

0x42b0,	// (0x0004d51b) bg_popup_window_pane_cp011

0x18a8,	// (0x0004ab13) popup_blid2_search_window_g1

0x18b0,	// (0x0004ab1b) popup_blid2_search_window_t1

0x18be,	// (0x0004ab29) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x00058dae) popup_blid2_search_window_t

0x6016,	// (0x0004f281) main_browser_pane_g1

0x5039,	// (0x0004e2a4) main_browser_pane_ParamLimits

0x9ed6,	// (0x00053141) bg_button_pane_cp011_ParamLimits

0xa185,	// (0x000533f0) cell_vitu2_function_pane_g1_ParamLimits

0xe9ed,	// (0x00057c58) bg_popup_sub_pane_cp22_ParamLimits

0xaa86,	// (0x00053cf1) input_focus_pane_cp08_ParamLimits

0xaa93,	// (0x00053cfe) popup_vitu2_query_button_pane_ParamLimits

0xaa93,	// (0x00053cfe) popup_vitu2_query_button_pane

0xaa68,	// (0x00053cd3) popup_vitu2_query_input_button_pane

0x1470,	// (0x0004a6db) popup_vitu2_query_window_g1_ParamLimits

0xaaa4,	// (0x00053d0f) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x00058cb5) popup_vitu2_query_window_g_ParamLimits

0x42b0,	// (0x0004d51b) bg_button_pane_cp026

0xb0bb,	// (0x00054326) popup_vitu2_query_input_button_pane_g1

0x42b0,	// (0x0004d51b) bg_button_pane_cp025

0x18cc,	// (0x0004ab37) popup_vitu2_query_button_pane_t1

0x88da,	// (0x00051b45) main_mp3_pane_t6

0x88ea,	// (0x00051b55) popup_slider_window_cp01

0x9df7,	// (0x00053062) cam4_battery_pane

0x9ee4,	// (0x0005314f) cam4_battery_pane_cp02

0xae5a,	// (0x000540c5) cam4_battery_pane_cp01

0xae5a,	// (0x000540c5) cam4_battery_pane_cp03

0x18da,	// (0x0004ab45) cam4_battery_pane_g1

0xee36,	// (0x000580a1) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x00058db3) cam4_battery_pane_g

0xed00,	// (0x00057f6b) popup_blid_sat_info2_window_t11

0x7020,	// (0x0005028b) aid_size_touch_mv_arrow_left_ParamLimits

0x704b,	// (0x000502b6) aid_size_touch_mv_arrow_right_ParamLimits

0xd540,	// (0x000567ab) navi_pane_g1_ParamLimits

0x7074,	// (0x000502df) navi_pane_g2_ParamLimits

0x70a2,	// (0x0005030d) navi_pane_g3_ParamLimits

0xf418,	// (0x00058683) navi_pane_g_ParamLimits

0x70fc,	// (0x00050367) navi_pane_mv_t1_ParamLimits

0x93ad,	// (0x00052618) grid_imed_effect_pane_ParamLimits

0x5be0,	// (0x0004ee4b) aid_placing_vt_slider_lsc

0x5be8,	// (0x0004ee53) aid_placing_vt_slider_prt

0xe9ed,	// (0x00057c58) bg_tb_trans_pane_cp01_ParamLimits

0xefbd,	// (0x00058228) popup_image_details_window_g1_ParamLimits

0xefd0,	// (0x0005823b) popup_image_details_window_g2_ParamLimits

0xefe5,	// (0x00058250) popup_image_details_window_g3_ParamLimits

0xefe5,	// (0x00058250) popup_image_details_window_g3

0xf74b,	// (0x000589b6) popup_image_details_window_g_ParamLimits

0xeff9,	// (0x00058264) popup_image_details_window_t1_ParamLimits

0xf00b,	// (0x00058276) popup_image_details_window_t2_ParamLimits

0xf024,	// (0x0005828f) popup_image_details_window_t3_ParamLimits

0xf038,	// (0x000582a3) popup_image_details_window_t4_ParamLimits

0xf053,	// (0x000582be) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x000589bd) popup_image_details_window_t_ParamLimits

0xad71,	// (0x00053fdc) cl_header_name_pane_ParamLimits

0xad71,	// (0x00053fdc) cl_header_name_pane

0xb0c3,	// (0x0005432e) cl_header_name_pane_t1_ParamLimits

0xb0c3,	// (0x0005432e) cl_header_name_pane_t1

0xb0da,	// (0x00054345) cl_header_name_pane_t2_ParamLimits

0xb0da,	// (0x00054345) cl_header_name_pane_t2

0xb104,	// (0x0005436f) cl_header_name_pane_t3_ParamLimits

0xb104,	// (0x0005436f) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x00058db8) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x00058db8) cl_header_name_pane_t

0x70cd,	// (0x00050338) navi_pane_mv_g2_ParamLimits

0x114f,	// (0x0004a3ba) field_vitu2_entry_pane_g1_ParamLimits

0x115b,	// (0x0004a3c6) field_vitu2_entry_pane_g2_ParamLimits

0x1167,	// (0x0004a3d2) field_vitu2_entry_pane_g3_ParamLimits

0x1167,	// (0x0004a3d2) field_vitu2_entry_pane_g3

0xf949,	// (0x00058bb4) field_vitu2_entry_pane_g_ParamLimits

0xa115,	// (0x00053380) cell_vitu2_itu_pane_g1_ParamLimits

0xa125,	// (0x00053390) cell_vitu2_itu_pane_g2_ParamLimits

0xa125,	// (0x00053390) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x00058bc0) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x00058bc0) cell_vitu2_itu_pane_g

0x9ed6,	// (0x00053141) bg_vkb2_func_pane_cp05_ParamLimits

0x9ed6,	// (0x00053141) bg_vkb2_func_pane_cp05

0x9ed6,	// (0x00053141) bg_vkb2_func_pane_cp03

0x9ed6,	// (0x00053141) bg_vkb2_func_pane_cp04

0x9ed6,	// (0x00053141) bg_vkb2_func_pane_cp10_ParamLimits

0x9ed6,	// (0x00053141) bg_vkb2_func_pane_cp10

0xad13,	// (0x00053f7e) bg_vkb2_func_pane_cp08

0xacf9,	// (0x00053f64) bg_vkb2_func_pane_cp06

0xad07,	// (0x00053f72) bg_vkb2_func_pane_cp07

0x17da,	// (0x0004aa45) bg_vkb2_func_pane_cp11_ParamLimits

0x17da,	// (0x0004aa45) bg_vkb2_func_pane_cp11

0x17ef,	// (0x0004aa5a) bg_vkb2_func_pane_cp12_ParamLimits

0x17ef,	// (0x0004aa5a) bg_vkb2_func_pane_cp12

0x42b0,	// (0x0004d51b) bg_vkb2_func_pane_cp09

0x11d6,	// (0x0004a441) bg_vkb2_func_pane_g1

0x61da,	// (0x0004f445) bg_vkb2_func_pane_g2

0x11de,	// (0x0004a449) bg_vkb2_func_pane_g3

0x11e6,	// (0x0004a451) bg_vkb2_func_pane_g4

0x141b,	// (0x0004a686) bg_vkb2_func_pane_g5

0x11fe,	// (0x0004a469) bg_vkb2_func_pane_g6

0x1206,	// (0x0004a471) bg_vkb2_func_pane_g7

0x11f6,	// (0x0004a461) bg_vkb2_func_pane_g8

0x61ba,	// (0x0004f425) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x00058dbf) bg_vkb2_func_pane_g

0xb010,	// (0x0005427b) blid2_tripm_pane_g6_ParamLimits

0xb010,	// (0x0005427b) blid2_tripm_pane_g6

0x0fe3,	// (0x0004a24e) mp4_progress_pane_g1

0xb06c,	// (0x000542d7) blid2_tripm_values_pane_ParamLimits

0xb06c,	// (0x000542d7) blid2_tripm_values_pane

0xb129,	// (0x00054394) blid2_tripm_values_pane_t1

0xb137,	// (0x000543a2) blid2_tripm_values_pane_t2

0xb145,	// (0x000543b0) blid2_tripm_values_pane_t3

0xb153,	// (0x000543be) blid2_tripm_values_pane_t4

0xb161,	// (0x000543cc) blid2_tripm_values_pane_t5

0xb16f,	// (0x000543da) blid2_tripm_values_pane_t6

0xb17d,	// (0x000543e8) blid2_tripm_values_pane_t7

0xb18b,	// (0x000543f6) blid2_tripm_values_pane_t8

0xb199,	// (0x00054404) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x00058dd2) blid2_tripm_values_pane_t

0x5c0e,	// (0x0004ee79) call_video_pane_t1_ParamLimits

0x5c27,	// (0x0004ee92) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x0005850c) call_video_pane_t_ParamLimits

0x7639,	// (0x000508a4) msg_header_pane_g1_ParamLimits

0xd75b,	// (0x000569c6) msg_header_pane_g2_ParamLimits

0xd75b,	// (0x000569c6) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x00058726) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x00058726) msg_header_pane_g

0x5039,	// (0x0004e2a4) main_clock2_pane_ParamLimits

0x9132,	// (0x0005239d) grid_clock2_toolbar_pane_ParamLimits

0x9132,	// (0x0005239d) grid_clock2_toolbar_pane

0x9132,	// (0x0005239d) listscroll_clock2_pane_ParamLimits

0x9132,	// (0x0005239d) listscroll_clock2_pane

0x91e0,	// (0x0005244b) main_clock2_pane_t3_ParamLimits

0x91e0,	// (0x0005244b) main_clock2_pane_t3

0x91f2,	// (0x0005245d) main_clock2_pane_t4_ParamLimits

0x91f2,	// (0x0005245d) main_clock2_pane_t4

0x18e4,	// (0x0004ab4f) cell_clock2_toolbar_pane

0x18ec,	// (0x0004ab57) cell_clock2_toolbar_pane_cp01

0x18ec,	// (0x0004ab57) cell_clock2_toolbar_pane_cp02

0x18f4,	// (0x0004ab5f) cell_clock2_toolbar_pane_cp03

0x18fc,	// (0x0004ab67) list_clock2_pane

0xd493,	// (0x000566fe) scroll_pane_cp10

0x1904,	// (0x0004ab6f) list_single_clock2_pane_ParamLimits

0x1904,	// (0x0004ab6f) list_single_clock2_pane

0xd5e0,	// (0x0005684b) list_highlight_pane_cp08

0x1911,	// (0x0004ab7c) list_single_clock2_pane_t1

0x191f,	// (0x0004ab8a) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x00058de5) list_single_clock2_pane_t

0x42b0,	// (0x0004d51b) bg_button_pane_cp10

0x192d,	// (0x0004ab98) cell_clock2_toolbar_pane_g1

0x76da,	// (0x00050945) aid_main_viewer_pane_g1_ParamLimits

0x76da,	// (0x00050945) aid_main_viewer_pane_g1

0x76e6,	// (0x00050951) aid_main_viewer_pane_g2_ParamLimits

0x76e6,	// (0x00050951) aid_main_viewer_pane_g2

0x76f2,	// (0x0005095d) aid_main_viewer_pane_g3_ParamLimits

0x76f2,	// (0x0005095d) aid_main_viewer_pane_g3

0x7703,	// (0x0005096e) aid_main_viewer_pane_g4_ParamLimits

0x7703,	// (0x0005096e) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x00058737) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x00058737) aid_main_viewer_pane_g

0x7e9b,	// (0x00051106) main_calc_pane_ParamLimits

0x7ea8,	// (0x00051113) main_dialer2_pane_ParamLimits

0x42b0,	// (0x0004d51b) main_cam6_pane

0x42b0,	// (0x0004d51b) main_vid6_pane

0x913e,	// (0x000523a9) listscroll_gen_pane_cp06_ParamLimits

0x913e,	// (0x000523a9) listscroll_gen_pane_cp06

0x9204,	// (0x0005246f) main_clock2_pane_t5_ParamLimits

0x9204,	// (0x0005246f) main_clock2_pane_t5

0x9253,	// (0x000524be) aid_call2_pane_cp10_ParamLimits

0x9265,	// (0x000524d0) aid_call_pane_cp10_ParamLimits

0xd515,	// (0x00056780) popup_clock_analogue_window_cp10_g1_ParamLimits

0xd515,	// (0x00056780) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9277,	// (0x000524e2) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9277,	// (0x000524e2) popup_clock_analogue_window_cp10_g4_ParamLimits

0xd515,	// (0x00056780) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x00058a6d) popup_clock_analogue_window_cp10_g_ParamLimits

0x928d,	// (0x000524f8) popup_clock_analogue_window_cp10_t1_ParamLimits

0x9a6f,	// (0x00052cda) cell_dialer2_keypad_pane_g2_ParamLimits

0x9a6f,	// (0x00052cda) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x00058b53) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x00058b53) cell_dialer2_keypad_pane_g

0x9a8b,	// (0x00052cf6) cell_dialer2_keypad_pane_t1

0xa44b,	// (0x000536b6) main_cset_text2_pane_ParamLimits

0xa44b,	// (0x000536b6) main_cset_text2_pane

0x164c,	// (0x0004a8b7) area_vitu2_query_pane_g1_ParamLimits

0xac98,	// (0x00053f03) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x00058d02) area_vitu2_query_pane_g_ParamLimits

0x16d0,	// (0x0004a93b) area_vitu2_query_pane_t7_ParamLimits

0x16d0,	// (0x0004a93b) area_vitu2_query_pane_t7

0xacf9,	// (0x00053f64) bg_button_pane_cp018_ParamLimits

0xad07,	// (0x00053f72) bg_button_pane_cp021_ParamLimits

0xad13,	// (0x00053f7e) bg_button_pane_cp022_ParamLimits

0xad13,	// (0x00053f7e) bg_vkb2_func_pane_cp08_ParamLimits

0xacf9,	// (0x00053f64) bg_vkb2_func_pane_cp06_ParamLimits

0xad07,	// (0x00053f72) bg_vkb2_func_pane_cp07_ParamLimits

0xad24,	// (0x00053f8f) input_focus_pane_cp09_ParamLimits

0xb1a7,	// (0x00054412) cam6_autofocus_pane_ParamLimits

0xb1a7,	// (0x00054412) cam6_autofocus_pane

0xb1c9,	// (0x00054434) cam6_image_uncrop_pane_ParamLimits

0xb1c9,	// (0x00054434) cam6_image_uncrop_pane

0xb1f6,	// (0x00054461) cam6_indi_pane_ParamLimits

0xb1f6,	// (0x00054461) cam6_indi_pane

0xb210,	// (0x0005447b) cam6_mode_pane_ParamLimits

0xb210,	// (0x0005447b) cam6_mode_pane

0xb224,	// (0x0005448f) cam6_timer_pane_ParamLimits

0xb224,	// (0x0005448f) cam6_timer_pane

0xb230,	// (0x0005449b) cam6_zoom_pane_ParamLimits

0xb230,	// (0x0005449b) cam6_zoom_pane

0xb248,	// (0x000544b3) cam6_mode_pane_g1_ParamLimits

0xb248,	// (0x000544b3) cam6_mode_pane_g1

0xb254,	// (0x000544bf) cam6_mode_pane_g2_ParamLimits

0xb254,	// (0x000544bf) cam6_mode_pane_g2

0xb260,	// (0x000544cb) cam6_mode_pane_g3_ParamLimits

0xb260,	// (0x000544cb) cam6_mode_pane_g3

0xb26c,	// (0x000544d7) cam6_mode_pane_g4_ParamLimits

0xb26c,	// (0x000544d7) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x00058dea) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x00058dea) cam6_mode_pane_g

0x1935,	// (0x0004aba0) bg_tb_trans_pane_cp08_ParamLimits

0x1935,	// (0x0004aba0) bg_tb_trans_pane_cp08

0x1943,	// (0x0004abae) cam6_battery_pane_ParamLimits

0x1943,	// (0x0004abae) cam6_battery_pane

0x1959,	// (0x0004abc4) cam6_indi_pane_g1_ParamLimits

0x1959,	// (0x0004abc4) cam6_indi_pane_g1

0x196b,	// (0x0004abd6) cam6_indi_pane_g2_ParamLimits

0x196b,	// (0x0004abd6) cam6_indi_pane_g2

0x197d,	// (0x0004abe8) cam6_indi_pane_g3_ParamLimits

0x197d,	// (0x0004abe8) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x00058df3) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x00058df3) cam6_indi_pane_g

0x198f,	// (0x0004abfa) cam6_indi_pane_t1_ParamLimits

0x198f,	// (0x0004abfa) cam6_indi_pane_t1

0x9f4b,	// (0x000531b6) cam6_autofocus_pane_g1

0x9f43,	// (0x000531ae) cam6_autofocus_pane_g2

0x9f5b,	// (0x000531c6) cam6_autofocus_pane_g3

0x9f53,	// (0x000531be) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x00058dfa) cam6_autofocus_pane_g

0x19b5,	// (0x0004ac20) cam6_timer_pane_g1

0x19bd,	// (0x0004ac28) cam6_timer_pane_t1

0x19cb,	// (0x0004ac36) cam6_zoom_cont_pane

0x19d3,	// (0x0004ac3e) cam6_zoom_pane_g1

0x19db,	// (0x0004ac46) cam6_zoom_pane_g2

0xb278,	// (0x000544e3) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x00058e03) cam6_zoom_pane_g

0xee36,	// (0x000580a1) cam6_battery_pane_g1

0xee36,	// (0x000580a1) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x0005897a) cam6_battery_pane_g

0x19e3,	// (0x0004ac4e) cam6_zoom_cont_pane_g1

0x19ec,	// (0x0004ac57) cam6_zoom_cont_pane_g2

0x19f5,	// (0x0004ac60) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x00058e0a) cam6_zoom_cont_pane_g

0xb292,	// (0x000544fd) cam6_mode_pane_cp_ParamLimits

0xb292,	// (0x000544fd) cam6_mode_pane_cp

0xb2a6,	// (0x00054511) cam6_zoom_pane_cp_ParamLimits

0xb2a6,	// (0x00054511) cam6_zoom_pane_cp

0xb2be,	// (0x00054529) vid6_image_uncrop_cif_pane_ParamLimits

0xb2be,	// (0x00054529) vid6_image_uncrop_cif_pane

0xb2ea,	// (0x00054555) vid6_image_uncrop_nhd_pane_ParamLimits

0xb2ea,	// (0x00054555) vid6_image_uncrop_nhd_pane

0xb307,	// (0x00054572) vid6_image_uncrop_vga_pane_ParamLimits

0xb307,	// (0x00054572) vid6_image_uncrop_vga_pane

0xb326,	// (0x00054591) vid6_image_uncrop_wvga_pane_ParamLimits

0xb326,	// (0x00054591) vid6_image_uncrop_wvga_pane

0xb343,	// (0x000545ae) vid6_indi_pane_ParamLimits

0xb343,	// (0x000545ae) vid6_indi_pane

0x1935,	// (0x0004aba0) bg_tb_trans_pane_cp09_ParamLimits

0x1935,	// (0x0004aba0) bg_tb_trans_pane_cp09

0x1a0d,	// (0x0004ac78) cam6_battery_pane_cp_ParamLimits

0x1a0d,	// (0x0004ac78) cam6_battery_pane_cp

0x1a19,	// (0x0004ac84) vid6_indi_pane_g1_ParamLimits

0x1a19,	// (0x0004ac84) vid6_indi_pane_g1

0x1a2b,	// (0x0004ac96) vid6_indi_pane_g2_ParamLimits

0x1a2b,	// (0x0004ac96) vid6_indi_pane_g2

0x1a3d,	// (0x0004aca8) vid6_indi_pane_g3_ParamLimits

0x1a3d,	// (0x0004aca8) vid6_indi_pane_g3

0x1a52,	// (0x0004acbd) vid6_indi_pane_g4_ParamLimits

0x1a52,	// (0x0004acbd) vid6_indi_pane_g4

0x1a67,	// (0x0004acd2) vid6_indi_pane_g5_ParamLimits

0x1a67,	// (0x0004acd2) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x00058e11) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x00058e11) vid6_indi_pane_g

0x1a81,	// (0x0004acec) vid6_indi_pane_t1_ParamLimits

0x1a81,	// (0x0004acec) vid6_indi_pane_t1

0x1a97,	// (0x0004ad02) vid6_indi_pane_t2_ParamLimits

0x1a97,	// (0x0004ad02) vid6_indi_pane_t2

0x1abf,	// (0x0004ad2a) vid6_indi_pane_t3_ParamLimits

0x1abf,	// (0x0004ad2a) vid6_indi_pane_t3

0x1ae7,	// (0x0004ad52) vid6_indi_pane_t4_ParamLimits

0x1ae7,	// (0x0004ad52) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x00058e1c) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x00058e1c) vid6_indi_pane_t

0x1b0b,	// (0x0004ad76) wait_bar_pane_cp08

0xb366,	// (0x000545d1) main_cset_text2_pane_t1_ParamLimits

0xb366,	// (0x000545d1) main_cset_text2_pane_t1

0xb280,	// (0x000544eb) listscroll_gen_pane_cp06_t1_ParamLimits

0xb280,	// (0x000544eb) listscroll_gen_pane_cp06_t1

0x42b0,	// (0x0004d51b) main_cam6_set_pane

0x9de9,	// (0x00053054) bg_tb_trans_pane_cp06_ParamLimits

0x9dff,	// (0x0005306a) cam4_indicators_pane_g1_ParamLimits

0x9e10,	// (0x0005307b) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x00058b90) cam4_indicators_pane_g_ParamLimits

0x9e2e,	// (0x00053099) cam4_indicators_pane_t1_ParamLimits

0x9ed6,	// (0x00053141) bg_tb_trans_pane_cp07_ParamLimits

0x9dff,	// (0x0005306a) vid4_indicators_pane_g1_ParamLimits

0x9eec,	// (0x00053157) vid4_indicators_pane_g2_ParamLimits

0x9efd,	// (0x00053168) vid4_indicators_pane_g3_ParamLimits

0x9f0e,	// (0x00053179) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x00058ba2) vid4_indicators_pane_g_ParamLimits

0x9f2a,	// (0x00053195) vid4_indicators_pane_t1_ParamLimits

0xae62,	// (0x000540cd) vid4_progress_pane_g1_ParamLimits

0xae72,	// (0x000540dd) vid4_progress_pane_g2_ParamLimits

0xd189,	// (0x000563f4) vid4_progress_pane_g3_ParamLimits

0x9e10,	// (0x0005307b) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x00058d4d) vid4_progress_pane_g_ParamLimits

0xae82,	// (0x000540ed) vid4_progress_pane_t1_ParamLimits

0xae97,	// (0x00054102) vid4_progress_pane_t2_ParamLimits

0xaead,	// (0x00054118) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x00058d58) vid4_progress_pane_t_ParamLimits

0xaec2,	// (0x0005412d) wait_bar_pane_cp07_ParamLimits

0xb3a4,	// (0x0005460f) main_cam6_set_pane_g2_ParamLimits

0xb3a4,	// (0x0005460f) main_cam6_set_pane_g2

0xb3b0,	// (0x0005461b) main_cset6_listscroll_pane_ParamLimits

0xb3b0,	// (0x0005461b) main_cset6_listscroll_pane

0xb3db,	// (0x00054646) main_cset6_slider_pane_ParamLimits

0xb3db,	// (0x00054646) main_cset6_slider_pane

0xb3e7,	// (0x00054652) main_cset6_text2_pane_ParamLimits

0xb3e7,	// (0x00054652) main_cset6_text2_pane

0x1b1a,	// (0x0004ad85) main_cset6_text_pane

0x1b22,	// (0x0004ad8d) main_cset_list_pane_copy1_ParamLimits

0x1b22,	// (0x0004ad8d) main_cset_list_pane_copy1

0x1b32,	// (0x0004ad9d) scroll_pane_cp028_copy1

0xb3fa,	// (0x00054665) cset_list_set_pane_copy1

0xb414,	// (0x0005467f) aid_position_infowindow_above_copy1

0xb41c,	// (0x00054687) aid_position_infowindow_below_copy1

0xb424,	// (0x0005468f) cset_list_set_pane_g1_copy1

0x1b3b,	// (0x0004ada6) cset_list_set_pane_g3_copy1_ParamLimits

0x1b3b,	// (0x0004ada6) cset_list_set_pane_g3_copy1

0xa753,	// (0x000539be) cset_list_set_pane_t1_copy1_ParamLimits

0xa753,	// (0x000539be) cset_list_set_pane_t1_copy1

0xe9ed,	// (0x00057c58) list_highlight_pane_cp021_copy1_ParamLimits

0xe9ed,	// (0x00057c58) list_highlight_pane_cp021_copy1

0x1b4a,	// (0x0004adb5) cset6_slider_pane_ParamLimits

0x1b4a,	// (0x0004adb5) cset6_slider_pane

0x1b76,	// (0x0004ade1) main_cset6_slider_pane_g1_ParamLimits

0x1b76,	// (0x0004ade1) main_cset6_slider_pane_g1

0xb42c,	// (0x00054697) main_cset6_slider_pane_g2_ParamLimits

0xb42c,	// (0x00054697) main_cset6_slider_pane_g2

0x1305,	// (0x0004a570) main_cset6_slider_pane_g3_ParamLimits

0x1305,	// (0x0004a570) main_cset6_slider_pane_g3

0xb454,	// (0x000546bf) main_cset6_slider_pane_g4_ParamLimits

0xb454,	// (0x000546bf) main_cset6_slider_pane_g4

0xb460,	// (0x000546cb) main_cset6_slider_pane_g5_ParamLimits

0xb460,	// (0x000546cb) main_cset6_slider_pane_g5

0x1305,	// (0x0004a570) main_cset6_slider_pane_g7_ParamLimits

0x1305,	// (0x0004a570) main_cset6_slider_pane_g7

0x1311,	// (0x0004a57c) main_cset6_slider_pane_g8_ParamLimits

0x1311,	// (0x0004a57c) main_cset6_slider_pane_g8

0xb46e,	// (0x000546d9) main_cset6_slider_pane_g9_ParamLimits

0xb46e,	// (0x000546d9) main_cset6_slider_pane_g9

0xb47a,	// (0x000546e5) main_cset6_slider_pane_g10_ParamLimits

0xb47a,	// (0x000546e5) main_cset6_slider_pane_g10

0xb454,	// (0x000546bf) main_cset6_slider_pane_g11_ParamLimits

0xb454,	// (0x000546bf) main_cset6_slider_pane_g11

0xb486,	// (0x000546f1) main_cset6_slider_pane_g12_ParamLimits

0xb486,	// (0x000546f1) main_cset6_slider_pane_g12

0xb492,	// (0x000546fd) main_cset6_slider_pane_g13_ParamLimits

0xb492,	// (0x000546fd) main_cset6_slider_pane_g13

0xb4a0,	// (0x0005470b) main_cset6_slider_pane_g14_ParamLimits

0xb4a0,	// (0x0005470b) main_cset6_slider_pane_g14

0xb4ae,	// (0x00054719) main_cset6_slider_pane_g15_ParamLimits

0xb4ae,	// (0x00054719) main_cset6_slider_pane_g15

0xb460,	// (0x000546cb) main_cset6_slider_pane_g16_ParamLimits

0xb460,	// (0x000546cb) main_cset6_slider_pane_g16

0xb4c6,	// (0x00054731) main_cset6_slider_pane_g17_ParamLimits

0xb4c6,	// (0x00054731) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x00058e25) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x00058e25) main_cset6_slider_pane_g

0x1b9e,	// (0x0004ae09) main_cset6_slider_pane_t1_ParamLimits

0x1b9e,	// (0x0004ae09) main_cset6_slider_pane_t1

0xb4d4,	// (0x0005473f) main_cset6_slider_pane_t2_ParamLimits

0xb4d4,	// (0x0005473f) main_cset6_slider_pane_t2

0xb4ff,	// (0x0005476a) main_cset6_slider_pane_t3_ParamLimits

0xb4ff,	// (0x0005476a) main_cset6_slider_pane_t3

0xb52a,	// (0x00054795) main_cset6_slider_pane_t4_ParamLimits

0xb52a,	// (0x00054795) main_cset6_slider_pane_t4

0xb557,	// (0x000547c2) main_cset6_slider_pane_t5_ParamLimits

0xb557,	// (0x000547c2) main_cset6_slider_pane_t5

0x1bdf,	// (0x0004ae4a) main_cset6_slider_pane_t7_ParamLimits

0x1bdf,	// (0x0004ae4a) main_cset6_slider_pane_t7

0xb584,	// (0x000547ef) main_cset6_slider_pane_t8_ParamLimits

0xb584,	// (0x000547ef) main_cset6_slider_pane_t8

0xb5a8,	// (0x00054813) main_cset6_slider_pane_t9_ParamLimits

0xb5a8,	// (0x00054813) main_cset6_slider_pane_t9

0xb5cc,	// (0x00054837) main_cset6_slider_pane_t10_ParamLimits

0xb5cc,	// (0x00054837) main_cset6_slider_pane_t10

0xb5f0,	// (0x0005485b) main_cset6_slider_pane_t11_ParamLimits

0xb5f0,	// (0x0005485b) main_cset6_slider_pane_t11

0x1c15,	// (0x0004ae80) main_cset6_slider_pane_t14_ParamLimits

0x1c15,	// (0x0004ae80) main_cset6_slider_pane_t14

0x1c4e,	// (0x0004aeb9) main_cset6_slider_pane_t15_ParamLimits

0x1c4e,	// (0x0004aeb9) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x00058e4a) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x00058e4a) main_cset6_slider_pane_t

0x13c9,	// (0x0004a634) cset_slider_pane_g1_copy1

0x13d2,	// (0x0004a63d) cset_slider_pane_g2_copy1

0x13db,	// (0x0004a646) cset_slider_pane_g3_copy1

0x42b0,	// (0x0004d51b) bg_popup_sub_pane_cp011_copy1

0x147c,	// (0x0004a6e7) main_cset_text_pane_g1_copy1

0x1484,	// (0x0004a6ef) main_cset_text_pane_t1_copy1

0x1492,	// (0x0004a6fd) main_cset_text_pane_t2_copy1

0x14a0,	// (0x0004a70b) main_cset_text_pane_t3_copy1

0x14ae,	// (0x0004a719) main_cset_text_pane_t4_copy1

0x14bc,	// (0x0004a727) main_cset_text_pane_t5_copy1

0x14ca,	// (0x0004a735) main_cset_text_pane_t6_copy1

0x14d8,	// (0x0004a743) main_cset_text_pane_t7_copy1

0xb616,	// (0x00054881) main_cset_text2_pane_t1_copy1

0x42b0,	// (0x0004d51b) main_ncimui_pane

0x7ee7,	// (0x00051152) popup_query_ncimui_window_ParamLimits

0x7ee7,	// (0x00051152) popup_query_ncimui_window

0x09e1,	// (0x00049c4c) field_cale_ev2_pane_g4_ParamLimits

0x09e1,	// (0x00049c4c) field_cale_ev2_pane_g4

0x978d,	// (0x000529f8) cell_video_dialer_keypad_pane_g2_ParamLimits

0x978d,	// (0x000529f8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x00058b2e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x00058b2e) cell_video_dialer_keypad_pane_g

0x97a5,	// (0x00052a10) cell_video_dialer_keypad_pane_t1

0x42b0,	// (0x0004d51b) bg_popup_window_pane_cp012

0xd363,	// (0x000565ce) heading_pane_cp06

0x1d76,	// (0x0004afe1) ncim_query_content_pane

0x42b0,	// (0x0004d51b) bg_popup_heading_pane_cp01

0x1d7e,	// (0x0004afe9) ncim_heading_pane_t1

0x1d8c,	// (0x0004aff7) ncim_indicator_popup_pane

0x1d9e,	// (0x0004b009) ncim_query_button_pane

0x1db2,	// (0x0004b01d) ncim_query_content_pane_t1

0x1dc4,	// (0x0004b02f) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x00058e89) ncim_query_content_pane_t

0x1dfe,	// (0x0004b069) ncim_query_list_pane

0x1e10,	// (0x0004b07b) ncim_query_popup_pane

0x1d8c,	// (0x0004aff7) ncim_indicator_popup_pane_ParamLimits

0xb711,	// (0x0005497c) ncim_query_content_pane_g1_ParamLimits

0xb711,	// (0x0005497c) ncim_query_content_pane_g1

0x1db2,	// (0x0004b01d) ncim_query_content_pane_t1_ParamLimits

0x1dc4,	// (0x0004b02f) ncim_query_content_pane_t2_ParamLimits

0xb71d,	// (0x00054988) ncim_query_content_pane_t3_ParamLimits

0xb71d,	// (0x00054988) ncim_query_content_pane_t3

0xb73a,	// (0x000549a5) ncim_query_content_pane_t4_ParamLimits

0xb73a,	// (0x000549a5) ncim_query_content_pane_t4

0xb757,	// (0x000549c2) ncim_query_content_pane_t5_ParamLimits

0xb757,	// (0x000549c2) ncim_query_content_pane_t5

0x1dd6,	// (0x0004b041) ncim_query_content_pane_t6_ParamLimits

0x1dd6,	// (0x0004b041) ncim_query_content_pane_t6

0xfc1e,	// (0x00058e89) ncim_query_content_pane_t_ParamLimits

0x1dfe,	// (0x0004b069) ncim_query_list_pane_ParamLimits

0x1e10,	// (0x0004b07b) ncim_query_popup_pane_ParamLimits

0x1e24,	// (0x0004b08f) wait_bar_pane_cp04

0x42b0,	// (0x0004d51b) input_focus_pane_cp011

0x1e2c,	// (0x0004b097) ncim_query_popup_pane_t1

0x1e3a,	// (0x0004b0a5) ncim_list_query_list_pane_ParamLimits

0x1e3a,	// (0x0004b0a5) ncim_list_query_list_pane

0x42b0,	// (0x0004d51b) bg_button_pane_cp027

0x1e4d,	// (0x0004b0b8) ncim_query_button_pane_g1

0x42b0,	// (0x0004d51b) list_highlight_pane_cp012

0x1e57,	// (0x0004b0c2) ncim_list_query_list_pane_g1

0x1e5f,	// (0x0004b0ca) ncim_list_query_list_pane_t1

0x9e1f,	// (0x0005308a) cam4_indicators_pane_g3_ParamLimits

0x9e1f,	// (0x0005308a) cam4_indicators_pane_g3

0x9f1a,	// (0x00053185) vid4_indicators_pane_g5_ParamLimits

0x9f1a,	// (0x00053185) vid4_indicators_pane_g5

0x9e1f,	// (0x0005308a) vid4_progress_pane_g5_ParamLimits

0x9e1f,	// (0x0005308a) vid4_progress_pane_g5

0xb659,	// (0x000548c4) main_ncimui_pane_g1

0xb69f,	// (0x0005490a) ncimui_group_query_pane_ParamLimits

0xb69f,	// (0x0005490a) ncimui_group_query_pane

0xb6d3,	// (0x0005493e) ncimui_list_pane_ParamLimits

0xb6d3,	// (0x0005493e) ncimui_list_pane

0xb6ed,	// (0x00054958) ncimui_text_pane_ParamLimits

0xb6ed,	// (0x00054958) ncimui_text_pane

0xb774,	// (0x000549df) ncimui_text_pane_t1_ParamLimits

0xb774,	// (0x000549df) ncimui_text_pane_t1

0x1e6d,	// (0x0004b0d8) ncimui_list_single_graphic_pane_ParamLimits

0x1e6d,	// (0x0004b0d8) ncimui_list_single_graphic_pane

0xb793,	// (0x000549fe) ncimui_query_pane_ParamLimits

0xb793,	// (0x000549fe) ncimui_query_pane

0x42b0,	// (0x0004d51b) list_highlight_pane_cp013

0x1e7d,	// (0x0004b0e8) ncim_list_query_list_pane_t1_copy1

0x1e57,	// (0x0004b0c2) ncim_list_single_graphic_pane_g1

0x1e8b,	// (0x0004b0f6) ncim_query_button_pane_cp01

0x1e93,	// (0x0004b0fe) ncim_query_entry_pane_ParamLimits

0x1e93,	// (0x0004b0fe) ncim_query_entry_pane

0x1ea3,	// (0x0004b10e) ncimui_query_pane_g1

0x1eab,	// (0x0004b116) ncimui_query_pane_t1_ParamLimits

0x1eab,	// (0x0004b116) ncimui_query_pane_t1

0x42b0,	// (0x0004d51b) input_focus_pane_cp012

0x1e2c,	// (0x0004b097) ncim_query_entry_pane_t1

0x5039,	// (0x0004e2a4) main_im_pane_ParamLimits

0xe9ed,	// (0x00057c58) main_mobtv_pane_ParamLimits

0xe9ed,	// (0x00057c58) main_mobtv_pane

0xb46e,	// (0x000546d9) main_cset6_slider_pane_g18_ParamLimits

0xb46e,	// (0x000546d9) main_cset6_slider_pane_g18

0xb492,	// (0x000546fd) main_cset6_slider_pane_g19_ParamLimits

0xb492,	// (0x000546fd) main_cset6_slider_pane_g19

0x1167,	// (0x0004a3d2) bg_main_mobtv_pane_ParamLimits

0x1167,	// (0x0004a3d2) bg_main_mobtv_pane

0xb7a3,	// (0x00054a0e) main_mobtv_info_pane

0xb7ae,	// (0x00054a19) main_mobtv_loading_pane_ParamLimits

0xb7ae,	// (0x00054a19) main_mobtv_loading_pane

0x1ecf,	// (0x0004b13a) main_mobtv_pg_channel_list_pane

0x1ed9,	// (0x0004b144) main_mobtv_pg_hdr_pane

0xb7bb,	// (0x00054a26) main_mobtv_programe_curr_pane_ParamLimits

0xb7bb,	// (0x00054a26) main_mobtv_programe_curr_pane

0xb7c8,	// (0x00054a33) main_mobtv_programe_next_pane_ParamLimits

0xb7c8,	// (0x00054a33) main_mobtv_programe_next_pane

0x1ee2,	// (0x0004b14d) popup_mobtv_noti_window

0xee36,	// (0x000580a1) main_tv_pg_hdr_pane_g1

0x1eea,	// (0x0004b155) main_tv_pg_hdr_pane_g2

0x1ef2,	// (0x0004b15d) main_tv_pg_hdr_pane_g3

0x1efa,	// (0x0004b165) main_tv_pg_hdr_pane_g4

0x1f02,	// (0x0004b16d) main_tv_pg_hdr_pane_g5

0x1f0c,	// (0x0004b177) main_tv_pg_hdr_pane_g6

0x1f16,	// (0x0004b181) main_tv_pg_hdr_pane_g7

0x1f20,	// (0x0004b18b) main_tv_pg_hdr_pane_g8

0x1f2a,	// (0x0004b195) main_tv_pg_hdr_pane_g9

0x1f34,	// (0x0004b19f) main_tv_pg_hdr_pane_g10

0x1f3e,	// (0x0004b1a9) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x00058e96) main_tv_pg_hdr_pane_g

0x1f48,	// (0x0004b1b3) main_tv_pg_hdr_pane_t1

0x1f56,	// (0x0004b1c1) main_tv_pg_hdr_pane_t2

0x1f64,	// (0x0004b1cf) main_tv_pg_hdr_pane_t3

0x1f74,	// (0x0004b1df) main_tv_pg_hdr_pane_t4

0x1f84,	// (0x0004b1ef) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x00058ead) main_tv_pg_hdr_pane_t

0x1f94,	// (0x0004b1ff) single_mobtv_pg_channel_pane_ParamLimits

0x1f94,	// (0x0004b1ff) single_mobtv_pg_channel_pane

0x1fa6,	// (0x0004b211) single_mobtv_pg_channel_table_pane

0x1faf,	// (0x0004b21a) single_mobtv_pg_channel_thumb_pane

0x1fb8,	// (0x0004b223) single_tv_pg_channel_pane_g1

0x1fc1,	// (0x0004b22c) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x00058eb8) single_tv_pg_channel_pane_g

0xf09d,	// (0x00058308) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xf09d,	// (0x00058308) bg_single_mobtv_pg_channel_thumb_pane

0x1fca,	// (0x0004b235) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x1fca,	// (0x0004b235) single_mobtv_pg_channel_thumb_pane_g1

0x1fd8,	// (0x0004b243) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x1fd8,	// (0x0004b243) single_mobtv_pg_channel_thumb_pane_g2

0x1fe4,	// (0x0004b24f) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1fe4,	// (0x0004b24f) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x00058ebd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x00058ebd) single_mobtv_pg_channel_thumb_pane_g

0x1ff0,	// (0x0004b25b) single_mobtv_pg_channel_thumb_pane_t1

0x1ffe,	// (0x0004b269) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x00058ec4) single_mobtv_pg_channel_thumb_pane_t

0xee36,	// (0x000580a1) bg_single_mobtv_pg_channel_table_pane_g1

0xee36,	// (0x000580a1) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x0005897a) bg_single_mobtv_pg_channel_table_pane_g

0x200c,	// (0x0004b277) single_mobtv_pg_channel_table_pane_t1

0x201a,	// (0x0004b285) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x00058ec9) single_mobtv_pg_channel_table_pane_t

0xb7dd,	// (0x00054a48) main_mobtv_info_pane_g1_ParamLimits

0xb7dd,	// (0x00054a48) main_mobtv_info_pane_g1

0xb7f9,	// (0x00054a64) main_mobtv_info_pane_t1_ParamLimits

0xb7f9,	// (0x00054a64) main_mobtv_info_pane_t1

0xb871,	// (0x00054adc) main_mobtv_info_pane_t2_ParamLimits

0xb871,	// (0x00054adc) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x00058ed3) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x00058ed3) main_mobtv_info_pane_t

0xb900,	// (0x00054b6b) wait_bar_pane_cp05

0xb912,	// (0x00054b7d) main_mobtv_loading_pane_g1_ParamLimits

0xb912,	// (0x00054b7d) main_mobtv_loading_pane_g1

0xb920,	// (0x00054b8b) main_mobtv_loading_pane_g2_ParamLimits

0xb920,	// (0x00054b8b) main_mobtv_loading_pane_g2

0xb92c,	// (0x00054b97) main_mobtv_loading_pane_g3_ParamLimits

0xb92c,	// (0x00054b97) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x00058eda) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x00058eda) main_mobtv_loading_pane_g

0x2028,	// (0x0004b293) main_mobtv_loading_pane_t1_ParamLimits

0x2028,	// (0x0004b293) main_mobtv_loading_pane_t1

0x2040,	// (0x0004b2ab) main_mobtv_loading_pane_t2_ParamLimits

0x2040,	// (0x0004b2ab) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x00058ee1) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x00058ee1) main_mobtv_loading_pane_t

0xb93a,	// (0x00054ba5) wait_bar_pane_cp06_ParamLimits

0xb93a,	// (0x00054ba5) wait_bar_pane_cp06

0x2064,	// (0x0004b2cf) main_mobtv_programe_curr_pane_t1

0x2072,	// (0x0004b2dd) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x00058ee6) main_mobtv_programe_curr_pane_t

0x2080,	// (0x0004b2eb) main_mobtv_programe_next_pane_t1

0x208e,	// (0x0004b2f9) main_mobtv_programe_next_pane_t2

0x209c,	// (0x0004b307) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x00058eeb) main_mobtv_programe_next_pane_t

0x42b0,	// (0x0004d51b) bg_popup_mobtv_noti_window_pane

0x20aa,	// (0x0004b315) popup_mobtv_noti_window_g1

0x20b2,	// (0x0004b31d) popup_mobtv_noti_window_t1

0x20c0,	// (0x0004b32b) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x00058ef2) popup_mobtv_noti_window_t

0xee36,	// (0x000580a1) bg_popup_mobtv_noti_window_pane_g1

0x42b0,	// (0x0004d51b) sc_clock_pane

0x42b0,	// (0x0004d51b) main_fs_bigclock_pane

0xb05a,	// (0x000542c5) blid2_tripm_pane_t4_ParamLimits

0xb05a,	// (0x000542c5) blid2_tripm_pane_t4

0xb946,	// (0x00054bb1) sc_clock_pane_g1_ParamLimits

0xb946,	// (0x00054bb1) sc_clock_pane_g1

0xb954,	// (0x00054bbf) sc_clock_pane_t1_ParamLimits

0xb954,	// (0x00054bbf) sc_clock_pane_t1

0xb967,	// (0x00054bd2) sc_clock_pane_t2_ParamLimits

0xb967,	// (0x00054bd2) sc_clock_pane_t2

0xb979,	// (0x00054be4) sc_clock_pane_t3_ParamLimits

0xb979,	// (0x00054be4) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x00058ef7) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x00058ef7) sc_clock_pane_t

0xc6b0,	// (0x0005591b) main_fs_bigclock_indicator_pane_ParamLimits

0xc6b0,	// (0x0005591b) main_fs_bigclock_indicator_pane

0xba01,	// (0x00054c6c) main_fs_bigclock_pane_g1_ParamLimits

0xba01,	// (0x00054c6c) main_fs_bigclock_pane_g1

0xc6bc,	// (0x00055927) main_fs_bigclock_pane_t1_ParamLimits

0xc6bc,	// (0x00055927) main_fs_bigclock_pane_t1

0xc6ce,	// (0x00055939) main_fs_bigclock_pane_t2_ParamLimits

0xc6ce,	// (0x00055939) main_fs_bigclock_pane_t2

0xc6e0,	// (0x0005594b) main_fs_bigclock_pane_t3_ParamLimits

0xc6e0,	// (0x0005594b) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x000590f6) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x000590f6) main_fs_bigclock_pane_t

0x2cb2,	// (0x0004bf1d) main_fs_bigclock_indicator_pane_g1

0x1da6,	// (0x0004b011) ncim_query_content_pane_g2_ParamLimits

0x1da6,	// (0x0004b011) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x00058e84) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x00058e84) ncim_query_content_pane_g

0xb98d,	// (0x00054bf8) sc_clock_pane_t4_ParamLimits

0xb98d,	// (0x00054bf8) sc_clock_pane_t4

0xe9ed,	// (0x00057c58) main_radioblah_pane

0x10ca,	// (0x0004a335) cell_call4_button_pane_t1_copy1_ParamLimits

0x10ca,	// (0x0004a335) cell_call4_button_pane_t1_copy1

0xb661,	// (0x000548cc) main_ncimui_pane_t1_ParamLimits

0xb661,	// (0x000548cc) main_ncimui_pane_t1

0xb673,	// (0x000548de) main_ncimui_pane_t2_ParamLimits

0xb673,	// (0x000548de) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x00058e7d) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x00058e7d) main_ncimui_pane_t

0x21f0,	// (0x0004b45b) main_radioblah_anim_pane_ParamLimits

0x21f0,	// (0x0004b45b) main_radioblah_anim_pane

0x2201,	// (0x0004b46c) main_radioblah_info_pane_ParamLimits

0x2201,	// (0x0004b46c) main_radioblah_info_pane

0x2215,	// (0x0004b480) main_radioblah_pane_t1_ParamLimits

0x2215,	// (0x0004b480) main_radioblah_pane_t1

0x2231,	// (0x0004b49c) main_radioblah_pane_t2_ParamLimits

0x2231,	// (0x0004b49c) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x00058f18) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x00058f18) main_radioblah_pane_t

0xba53,	// (0x00054cbe) main_radioblah_rocker_ctrl_pane_ParamLimits

0xba53,	// (0x00054cbe) main_radioblah_rocker_ctrl_pane

0x2279,	// (0x0004b4e4) main_radioblah_info_pane_t1_ParamLimits

0x2279,	// (0x0004b4e4) main_radioblah_info_pane_t1

0xba98,	// (0x00054d03) main_radioblah_info_pane_t2_ParamLimits

0xba98,	// (0x00054d03) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x00058f21) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x00058f21) main_radioblah_info_pane_t

0xee36,	// (0x000580a1) main_radioblah_rocker_ctrl_pane_g1

0xbb48,	// (0x00054db3) main_radioblah_rocker_ctrl_pane_g2

0xbb50,	// (0x00054dbb) main_radioblah_rocker_ctrl_pane_g3

0xbb58,	// (0x00054dc3) main_radioblah_rocker_ctrl_pane_g4

0xbb60,	// (0x00054dcb) main_radioblah_rocker_ctrl_pane_g5

0xbb68,	// (0x00054dd3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x00058f2a) main_radioblah_rocker_ctrl_pane_g

0xb616,	// (0x00054881) main_cset_text2_pane_t1_copy1_ParamLimits

0x9d48,	// (0x00052fb3) cam4_image_uncrop_qvga_pane

0x9e94,	// (0x000530ff) vid4_image_uncrop_qcif_pane

0xb1e8,	// (0x00054453) cam6_image_uncrop_qvga_pane_ParamLimits

0xb1e8,	// (0x00054453) cam6_image_uncrop_qvga_pane

0x19fd,	// (0x0004ac68) vid6_image_uncrop_qcif_pane_ParamLimits

0x19fd,	// (0x0004ac68) vid6_image_uncrop_qcif_pane

0x42b0,	// (0x0004d51b) bg_popup_preview_window_pane_cp03

0x1d58,	// (0x0004afc3) list_cset_text2_pane

0x1d60,	// (0x0004afcb) main_cset6_text2_pane_g1

0x1d68,	// (0x0004afd3) main_cset6_text2_pane_t1

0xbb70,	// (0x00054ddb) list_cset_text2_pane_t1_ParamLimits

0xbb70,	// (0x00054ddb) list_cset_text2_pane_t1

0xe9ed,	// (0x00057c58) main_radioblah_pane_ParamLimits

0xb8ec,	// (0x00054b57) main_mobtv_info_pane_t3_ParamLimits

0xb8ec,	// (0x00054b57) main_mobtv_info_pane_t3

0xba41,	// (0x00054cac) main_radioblah_pane_g1

0xba6c,	// (0x00054cd7) main_radioblah_info_pane_g1

0xbaed,	// (0x00054d58) main_radioblah_info_pane_t3_ParamLimits

0xbaed,	// (0x00054d58) main_radioblah_info_pane_t3

0x6a87,	// (0x0004fcf2) highlight_cell_cale_month_pane_ParamLimits

0x6a87,	// (0x0004fcf2) highlight_cell_cale_month_pane

0x42b0,	// (0x0004d51b) main_phob_fisheye_pane

0x0a6a,	// (0x00049cd5) scroll_pane_cp0031_ParamLimits

0x0a6a,	// (0x00049cd5) scroll_pane_cp0031

0x1b0b,	// (0x0004ad76) wait_bar_pane_cp08_ParamLimits

0xb3fa,	// (0x00054665) cset_list_set_pane_copy1_ParamLimits

0x22b3,	// (0x0004b51e) highlight_cell_cale_month_pane_g1

0xbb9b,	// (0x00054e06) highlight_cell_cale_month_pane_t1

0x173c,	// (0x0004a9a7) list_gen_pane_cp01

0x12f0,	// (0x0004a55b) scroll_pane_01

0xbba9,	// (0x00054e14) list_single_double_fisheye_pane

0xbbb2,	// (0x00054e1d) list_double_fisheye_pane_g1_ParamLimits

0xbbb2,	// (0x00054e1d) list_double_fisheye_pane_g1

0xbbbe,	// (0x00054e29) list_double_fisheye_pane_g2_ParamLimits

0xbbbe,	// (0x00054e29) list_double_fisheye_pane_g2

0xbbd2,	// (0x00054e3d) list_double_fisheye_pane_g3_ParamLimits

0xbbd2,	// (0x00054e3d) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x00058f37) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x00058f37) list_double_fisheye_pane_g

0xbbfb,	// (0x00054e66) list_double_fisheye_pane_t1_ParamLimits

0xbbfb,	// (0x00054e66) list_double_fisheye_pane_t1

0xbc16,	// (0x00054e81) list_double_fisheye_pane_t2_ParamLimits

0xbc16,	// (0x00054e81) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x00058f42) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x00058f42) list_double_fisheye_pane_t

0x42b0,	// (0x0004d51b) main_call5_pane

0xb9b3,	// (0x00054c1e) sc_swipe_pane_ParamLimits

0xb9b3,	// (0x00054c1e) sc_swipe_pane

0xbc44,	// (0x00054eaf) call5_image_pane_ParamLimits

0xbc44,	// (0x00054eaf) call5_image_pane

0xbc54,	// (0x00054ebf) call5_swipe_1_pane_ParamLimits

0xbc54,	// (0x00054ebf) call5_swipe_1_pane

0xbc60,	// (0x00054ecb) call5_swipe_2_pane_ParamLimits

0xbc60,	// (0x00054ecb) call5_swipe_2_pane

0xbc7a,	// (0x00054ee5) popup_call5_audio_first_window_ParamLimits

0xbc7a,	// (0x00054ee5) popup_call5_audio_first_window

0xf09d,	// (0x00058308) call5_swipe_1_pane_g1_ParamLimits

0xf09d,	// (0x00058308) call5_swipe_1_pane_g1

0x22c4,	// (0x0004b52f) call5_swipe_1_pane_g2_ParamLimits

0x22c4,	// (0x0004b52f) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x00058f47) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x00058f47) call5_swipe_1_pane_g

0x22d0,	// (0x0004b53b) call5_swipe_1_pane_t1_ParamLimits

0x22d0,	// (0x0004b53b) call5_swipe_1_pane_t1

0xf09d,	// (0x00058308) call5_swipe_2_pane_g1_ParamLimits

0xf09d,	// (0x00058308) call5_swipe_2_pane_g1

0x22e5,	// (0x0004b550) call5_swipe_2_pane_g2_ParamLimits

0x22e5,	// (0x0004b550) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x00058f4c) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x00058f4c) call5_swipe_2_pane_g

0x22f1,	// (0x0004b55c) call5_swipe_2_pane_t1_ParamLimits

0x22f1,	// (0x0004b55c) call5_swipe_2_pane_t1

0x2306,	// (0x0004b571) sc_swipe_pane_g1_ParamLimits

0x2306,	// (0x0004b571) sc_swipe_pane_g1

0x2313,	// (0x0004b57e) sc_swipe_pane_g2_ParamLimits

0x2313,	// (0x0004b57e) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x00058f51) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x00058f51) sc_swipe_pane_g

0x231f,	// (0x0004b58a) sc_swipe_pane_t1_ParamLimits

0x231f,	// (0x0004b58a) sc_swipe_pane_t1

0x42b0,	// (0x0004d51b) main_cmail_launcher_pane

0xbc88,	// (0x00054ef3) aid_size_cell_cmail_l_ParamLimits

0xbc88,	// (0x00054ef3) aid_size_cell_cmail_l

0xbc98,	// (0x00054f03) grid_cmail_l_pane_ParamLimits

0xbc98,	// (0x00054f03) grid_cmail_l_pane

0xbca8,	// (0x00054f13) cell_cmail_l_pane_ParamLimits

0xbca8,	// (0x00054f13) cell_cmail_l_pane

0xbcbc,	// (0x00054f27) cell_cmail_l_pane_g1_ParamLimits

0xbcbc,	// (0x00054f27) cell_cmail_l_pane_g1

0xbcc8,	// (0x00054f33) cell_cmail_l_pane_t1_ParamLimits

0xbcc8,	// (0x00054f33) cell_cmail_l_pane_t1

0x2334,	// (0x0004b59f) cell_cmail_l_pane_t2_ParamLimits

0x2334,	// (0x0004b59f) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x00058f56) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x00058f56) cell_cmail_l_pane_t

0xe9ed,	// (0x00057c58) grid_highlight_pane_cp018_ParamLimits

0xe9ed,	// (0x00057c58) grid_highlight_pane_cp018

0x43db,	// (0x0004d646) main2_pane_ParamLimits

0x43db,	// (0x0004d646) main2_pane

0x5294,	// (0x0004e4ff) popup_sp_fs_action_menu_bg_pane_g1

0x529c,	// (0x0004e507) popup_sp_fs_action_menu_bg_pane_g2

0x52a4,	// (0x0004e50f) popup_sp_fs_action_menu_bg_pane_g3

0x52ac,	// (0x0004e517) popup_sp_fs_action_menu_bg_pane_g4

0x52b4,	// (0x0004e51f) popup_sp_fs_action_menu_bg_pane_g5

0x52bc,	// (0x0004e527) popup_sp_fs_action_menu_bg_pane_g6

0x52c4,	// (0x0004e52f) popup_sp_fs_action_menu_bg_pane_g7

0x52cc,	// (0x0004e537) popup_sp_fs_action_menu_bg_pane_g8

0x52d4,	// (0x0004e53f) popup_sp_fs_action_menu_bg_pane_g9

0x52dc,	// (0x0004e547) popup_sp_fs_action_menu_bg_pane_g10

0x52dc,	// (0x0004e547) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x00058426) popup_sp_fs_action_menu_bg_pane_g

0x0678,	// (0x000498e3) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0678,	// (0x000498e3) list_medium_line_x2_t3_g3_g1

0x0684,	// (0x000498ef) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0684,	// (0x000498ef) list_medium_line_x2_t3_g3_g2

0x0690,	// (0x000498fb) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0690,	// (0x000498fb) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x000584d6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x000584d6) list_medium_line_x2_t3_g3_g

0x069c,	// (0x00049907) list_medium_line_x2_t3_g3_t1_ParamLimits

0x069c,	// (0x00049907) list_medium_line_x2_t3_g3_t1

0x5b00,	// (0x0004ed6b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x5b00,	// (0x0004ed6b) list_medium_line_x2_t3_g3_t2

0x06b1,	// (0x0004991c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x06b1,	// (0x0004991c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x000584dd) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x000584dd) list_medium_line_x2_t3_g3_t

0x0678,	// (0x000498e3) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0678,	// (0x000498e3) list_medium_line_x2_t3_g2_g1

0x0690,	// (0x000498fb) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0690,	// (0x000498fb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x000584e4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x000584e4) list_medium_line_x2_t3_g2_g

0x06c6,	// (0x00049931) list_medium_line_x2_t3_g2_t1_ParamLimits

0x06c6,	// (0x00049931) list_medium_line_x2_t3_g2_t1

0x06dc,	// (0x00049947) list_medium_line_x2_t3_g2_t2_ParamLimits

0x06dc,	// (0x00049947) list_medium_line_x2_t3_g2_t2

0x06b1,	// (0x0004991c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x06b1,	// (0x0004991c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x000584e9) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x000584e9) list_medium_line_x2_t3_g2_t

0x0678,	// (0x000498e3) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0678,	// (0x000498e3) list_medium_line_x2_t4_g4_g1

0x06ee,	// (0x00049959) list_medium_line_x2_t4_g4_g2_ParamLimits

0x06ee,	// (0x00049959) list_medium_line_x2_t4_g4_g2

0x0684,	// (0x000498ef) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0684,	// (0x000498ef) list_medium_line_x2_t4_g4_g3

0x06fa,	// (0x00049965) list_medium_line_x2_t4_g4_g4_ParamLimits

0x06fa,	// (0x00049965) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x000584f0) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x000584f0) list_medium_line_x2_t4_g4_g

0x5b14,	// (0x0004ed7f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x5b14,	// (0x0004ed7f) list_medium_line_x2_t4_g4_t1

0x5b2b,	// (0x0004ed96) list_medium_line_x2_t4_g4_t2_ParamLimits

0x5b2b,	// (0x0004ed96) list_medium_line_x2_t4_g4_t2

0x5b40,	// (0x0004edab) list_medium_line_x2_t4_g4_t3_ParamLimits

0x5b40,	// (0x0004edab) list_medium_line_x2_t4_g4_t3

0x0706,	// (0x00049971) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0706,	// (0x00049971) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x000584f9) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x000584f9) list_medium_line_x2_t4_g4_t

0x0678,	// (0x000498e3) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0678,	// (0x000498e3) list_medium_line_x2_t2_g4_g1

0x06ee,	// (0x00049959) list_medium_line_x2_t2_g4_g2_ParamLimits

0x06ee,	// (0x00049959) list_medium_line_x2_t2_g4_g2

0x0684,	// (0x000498ef) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0684,	// (0x000498ef) list_medium_line_x2_t2_g4_g3

0x0690,	// (0x000498fb) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0690,	// (0x000498fb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x00058560) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x00058560) list_medium_line_x2_t2_g4_g

0x0718,	// (0x00049983) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0718,	// (0x00049983) list_medium_line_x2_t2_g4_t1

0x06b1,	// (0x0004991c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x06b1,	// (0x0004991c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x00058569) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x00058569) list_medium_line_x2_t2_g4_t

0x0678,	// (0x000498e3) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0678,	// (0x000498e3) list_medium_line_x2_t2_g3_g1

0x0684,	// (0x000498ef) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0684,	// (0x000498ef) list_medium_line_x2_t2_g3_g2

0x0690,	// (0x000498fb) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0690,	// (0x000498fb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x000584d6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x000584d6) list_medium_line_x2_t2_g3_g

0x072d,	// (0x00049998) list_medium_line_x2_t2_g3_t1_ParamLimits

0x072d,	// (0x00049998) list_medium_line_x2_t2_g3_t1

0x06b1,	// (0x0004991c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x06b1,	// (0x0004991c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x0005856e) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x0005856e) list_medium_line_x2_t2_g3_t

0x6d03,	// (0x0004ff6e) main_sp_fs_list_pane_ParamLimits

0x6d03,	// (0x0004ff6e) main_sp_fs_list_pane

0x6d0f,	// (0x0004ff7a) sp_fs_scroll_pane_ParamLimits

0x6d0f,	// (0x0004ff7a) sp_fs_scroll_pane

0x6d1b,	// (0x0004ff86) list_medium_line_x2_t3_t1

0x6d2b,	// (0x0004ff96) list_medium_line_x2_t3_t2

0x0770,	// (0x000499db) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x000585b9) list_medium_line_x2_t3_t

0x6d39,	// (0x0004ffa4) list_medium_line_x3_t4_t1

0x6d49,	// (0x0004ffb4) list_medium_line_x3_t4_t2

0x077e,	// (0x000499e9) list_medium_line_x3_t4_t3

0x0770,	// (0x000499db) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x000585c0) list_medium_line_x3_t4_t

0x6d57,	// (0x0004ffc2) list_medium_line_x4_t5_t1

0x6d67,	// (0x0004ffd2) list_medium_line_x4_t5_t2

0x077e,	// (0x000499e9) list_medium_line_x4_t5_t3

0x078c,	// (0x000499f7) list_medium_line_x4_t5_t4

0x0770,	// (0x000499db) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x000585c9) list_medium_line_x4_t5_t

0x0678,	// (0x000498e3) list_medium_line_t4_g4_g1_ParamLimits

0x0678,	// (0x000498e3) list_medium_line_t4_g4_g1

0x06fa,	// (0x00049965) list_medium_line_t4_g4_g2_ParamLimits

0x06fa,	// (0x00049965) list_medium_line_t4_g4_g2

0x079a,	// (0x00049a05) list_medium_line_t4_g4_g3_ParamLimits

0x079a,	// (0x00049a05) list_medium_line_t4_g4_g3

0x0690,	// (0x000498fb) list_medium_line_t4_g4_g4_ParamLimits

0x0690,	// (0x000498fb) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x000585d4) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x000585d4) list_medium_line_t4_g4_g

0x07a6,	// (0x00049a11) list_medium_line_t4_g4_t1_ParamLimits

0x07a6,	// (0x00049a11) list_medium_line_t4_g4_t1

0x07bb,	// (0x00049a26) list_medium_line_t4_g4_t2_ParamLimits

0x07bb,	// (0x00049a26) list_medium_line_t4_g4_t2

0x07d0,	// (0x00049a3b) list_medium_line_t4_g4_t3_ParamLimits

0x07d0,	// (0x00049a3b) list_medium_line_t4_g4_t3

0x06b1,	// (0x0004991c) list_medium_line_t4_g4_t4_ParamLimits

0x06b1,	// (0x0004991c) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x000585dd) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x000585dd) list_medium_line_t4_g4_t

0x6e5c,	// (0x000500c7) chi_dic_find_pane_g1

0x7eb6,	// (0x00051121) main_tport_pane

0x140d,	// (0x0004a678) list_medium_line_plain_t1

0x1423,	// (0x0004a68e) list_medium_line_t2_g2_g1_ParamLimits

0x1423,	// (0x0004a68e) list_medium_line_t2_g2_g1

0x142f,	// (0x0004a69a) list_medium_line_t2_g2_g2_ParamLimits

0x142f,	// (0x0004a69a) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x00058c99) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x00058c99) list_medium_line_t2_g2_g

0xa927,	// (0x00053b92) list_medium_line_t2_g2_t1_ParamLimits

0xa927,	// (0x00053b92) list_medium_line_t2_g2_t1

0xa941,	// (0x00053bac) list_medium_line_t2_g2_t2_ParamLimits

0xa941,	// (0x00053bac) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x00058c9e) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x00058c9e) list_medium_line_t2_g2_t

0x1745,	// (0x0004a9b0) aid_sp_fs_list_icon_a_sm

0x174d,	// (0x0004a9b8) aid_sp_fs_list_icon_d

0x1755,	// (0x0004a9c0) aid_sp_fs_text_primary

0x175e,	// (0x0004a9c9) aid_sp_fs_text_secondary

0x1767,	// (0x0004a9d2) list_medium_line

0x1767,	// (0x0004a9d2) list_medium_line_g2

0x1767,	// (0x0004a9d2) list_medium_line_g3

0x1767,	// (0x0004a9d2) list_medium_line_plain

0x1767,	// (0x0004a9d2) list_medium_line_plain_t2

0x1767,	// (0x0004a9d2) list_medium_line_plain_t3

0x1767,	// (0x0004a9d2) list_medium_line_right_icon

0x1767,	// (0x0004a9d2) list_medium_line_right_iconx2

0x1767,	// (0x0004a9d2) list_medium_line_t2

0x1767,	// (0x0004a9d2) list_medium_line_t2_g2

0x1767,	// (0x0004a9d2) list_medium_line_t2_g3

0x1767,	// (0x0004a9d2) list_medium_line_t2_right_icon

0x1767,	// (0x0004a9d2) list_medium_line_t2_right_iconx2

0x1767,	// (0x0004a9d2) list_medium_line_t3

0x1767,	// (0x0004a9d2) list_medium_line_t3_g2

0x1767,	// (0x0004a9d2) list_medium_line_t3_g3

0x1767,	// (0x0004a9d2) list_medium_line_t3_right_iconx2

0x1770,	// (0x0004a9db) list_medium_line_t4_g4

0x1779,	// (0x0004a9e4) list_medium_line_x2

0x1779,	// (0x0004a9e4) list_medium_line_x2_t2_g2

0x1779,	// (0x0004a9e4) list_medium_line_x2_t2_g3

0x1779,	// (0x0004a9e4) list_medium_line_x2_t2_g4

0x1779,	// (0x0004a9e4) list_medium_line_x2_t3

0x1779,	// (0x0004a9e4) list_medium_line_x2_t3_g2

0x1779,	// (0x0004a9e4) list_medium_line_x2_t3_g3

0x1779,	// (0x0004a9e4) list_medium_line_x2_t3_g4

0x1779,	// (0x0004a9e4) list_medium_line_x2_t4_g2

0x1779,	// (0x0004a9e4) list_medium_line_x2_t4_g4

0x1782,	// (0x0004a9ed) list_medium_line_x3

0x1782,	// (0x0004a9ed) list_medium_line_x3_t4

0x1782,	// (0x0004a9ed) list_medium_line_x3_t4_g4

0x1770,	// (0x0004a9db) list_medium_line_x4_t4

0x1770,	// (0x0004a9db) list_medium_line_x4_t4_g7

0x1770,	// (0x0004a9db) list_medium_line_x4_t5

0x178b,	// (0x0004a9f6) list_single_fs_dyc_pane_ParamLimits

0x178b,	// (0x0004a9f6) list_single_fs_dyc_pane

0x0678,	// (0x000498e3) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0678,	// (0x000498e3) list_medium_line_x4_t4_g7_g1

0x1c87,	// (0x0004aef2) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1c87,	// (0x0004aef2) list_medium_line_x4_t4_g7_g2

0x1c93,	// (0x0004aefe) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1c93,	// (0x0004aefe) list_medium_line_x4_t4_g7_g3

0x1ca2,	// (0x0004af0d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1ca2,	// (0x0004af0d) list_medium_line_x4_t4_g7_g4

0x1cae,	// (0x0004af19) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1cae,	// (0x0004af19) list_medium_line_x4_t4_g7_g5

0x1cbd,	// (0x0004af28) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1cbd,	// (0x0004af28) list_medium_line_x4_t4_g7_g6

0x1ccc,	// (0x0004af37) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1ccc,	// (0x0004af37) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x00058e63) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x00058e63) list_medium_line_x4_t4_g7_g

0x1cd8,	// (0x0004af43) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1cd8,	// (0x0004af43) list_medium_line_x4_t4_g7_t1

0x1ced,	// (0x0004af58) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1ced,	// (0x0004af58) list_medium_line_x4_t4_g7_t2

0x1d02,	// (0x0004af6d) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1d02,	// (0x0004af6d) list_medium_line_x4_t4_g7_t3

0x1d17,	// (0x0004af82) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1d17,	// (0x0004af82) list_medium_line_x4_t4_g7_t4

0x1d29,	// (0x0004af94) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1d29,	// (0x0004af94) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x00058e72) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x00058e72) list_medium_line_x4_t4_g7_t

0x1d3b,	// (0x0004afa6) list_single_dyc_row_pane_ParamLimits

0x1d3b,	// (0x0004afa6) list_single_dyc_row_pane

0xbc38,	// (0x00054ea3) call5_gesture_pane_ParamLimits

0xbc38,	// (0x00054ea3) call5_gesture_pane

0xbc6c,	// (0x00054ed7) call5_windows_pane_ParamLimits

0xbc6c,	// (0x00054ed7) call5_windows_pane

0xbcde,	// (0x00054f49) call5_swipe_1_pane_cp_ParamLimits

0xbcde,	// (0x00054f49) call5_swipe_1_pane_cp

0xbcea,	// (0x00054f55) call5_swipe_2_pane_cp_ParamLimits

0xbcea,	// (0x00054f55) call5_swipe_2_pane_cp

0xd5e0,	// (0x0005684b) call5_image_pane_cp

0xbcf6,	// (0x00054f61) popup_call5_audio_first_window_cp_ParamLimits

0xbcf6,	// (0x00054f61) popup_call5_audio_first_window_cp

0x2306,	// (0x0004b571) call5_swipe_1_pane_g1_cp_ParamLimits

0x2306,	// (0x0004b571) call5_swipe_1_pane_g1_cp

0x2346,	// (0x0004b5b1) call5_swipe_1_pane_g2_cp

0x231f,	// (0x0004b58a) call5_swipe_1_pane_t1_cp_ParamLimits

0x231f,	// (0x0004b58a) call5_swipe_1_pane_t1_cp

0x2306,	// (0x0004b571) call5_swipe_2_pane_g1_cp_ParamLimits

0x2306,	// (0x0004b571) call5_swipe_2_pane_g1_cp

0x234e,	// (0x0004b5b9) call5_swipe_2_pane_g2_cp

0x2356,	// (0x0004b5c1) call5_swipe_2_pane_t1_cp_ParamLimits

0x2356,	// (0x0004b5c1) call5_swipe_2_pane_t1_cp

0xe9ed,	// (0x00057c58) main_sp_fs_email_pane

0x236b,	// (0x0004b5d6) main_sp_fs_listscroll_pane_te

0x2374,	// (0x0004b5df) popup_sp_fs_action_menu_pane_ParamLimits

0x2374,	// (0x0004b5df) popup_sp_fs_action_menu_pane

0xee36,	// (0x000580a1) bg_sp_fs_ctrlbar_pane_g1

0x23b4,	// (0x0004b61f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x23bd,	// (0x0004b628) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x23c6,	// (0x0004b631) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xee36,	// (0x000580a1) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x00058f5b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xec19,	// (0x00057e84) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xec19,	// (0x00057e84) bg_sp_fs_ctrlbar_ddmenu_pane

0x23cf,	// (0x0004b63a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x23cf,	// (0x0004b63a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x23db,	// (0x0004b646) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x23db,	// (0x0004b646) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x00058f64) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x00058f64) main_sp_fs_ctrlbar_ddmenu_pane_g

0x23e7,	// (0x0004b652) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x23e7,	// (0x0004b652) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x2401,	// (0x0004b66c) list_medium_line_t2_right_icon_g1

0xbd02,	// (0x00054f6d) list_medium_line_t2_right_icon_t1

0xbd12,	// (0x00054f7d) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x00058f69) list_medium_line_t2_right_icon_t

0xe9df,	// (0x00057c4a) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe9df,	// (0x00057c4a) bg_sp_fs_ctrlbar_pane

0xbd77,	// (0x00054fe2) main_sp_fs_ctrlbar_button_pane_cp01

0xbd7f,	// (0x00054fea) main_sp_fs_ctrlbar_ddmenu_pane

0xf0e7,	// (0x00058352) main_sp_fs_ctrlbar_pane_g1

0x2441,	// (0x0004b6ac) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x00058f6e) main_sp_fs_ctrlbar_pane_g

0x244d,	// (0x0004b6b8) main_sp_fs_ctrlbar_pane_t1

0xbd89,	// (0x00054ff4) main_sp_fs_ctrlbar_pane

0xbda5,	// (0x00055010) main_sp_fs_listscroll_pane_te_cp01

0xbdb6,	// (0x00055021) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xbdb6,	// (0x00055021) popup_sp_fs_action_menu_pane_cp01

0xe9ed,	// (0x00057c58) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe9ed,	// (0x00057c58) bg_sp_fs_highlight_list_pane_cp01

0x2462,	// (0x0004b6cd) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2462,	// (0x0004b6cd) sp_fs_action_menu_list_gene_pane_g1

0x2471,	// (0x0004b6dc) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2471,	// (0x0004b6dc) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x00058f73) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x00058f73) sp_fs_action_menu_list_gene_pane_g

0x247e,	// (0x0004b6e9) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x247e,	// (0x0004b6e9) sp_fs_action_menu_list_gene_pane_t1

0x2496,	// (0x0004b701) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2496,	// (0x0004b701) sp_fs_action_menu_list_gene_pane

0x24b3,	// (0x0004b71e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x24b3,	// (0x0004b71e) popup_sp_fs_action_menu_bg_pane

0x24c1,	// (0x0004b72c) sp_fs_action_menu_list_pane_ParamLimits

0x24c1,	// (0x0004b72c) sp_fs_action_menu_list_pane

0x24df,	// (0x0004b74a) sp_fs_scroll_pane_cp01_ParamLimits

0x24df,	// (0x0004b74a) sp_fs_scroll_pane_cp01

0xbdce,	// (0x00055039) list_medium_line_plain_t2_t1

0xbdde,	// (0x00055049) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x00058f78) list_medium_line_plain_t2_t

0xbdec,	// (0x00055057) list_medium_line_plain_t3_t1

0xbdfc,	// (0x00055067) list_medium_line_plain_t3_t2

0xbe0a,	// (0x00055075) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x00058f7d) list_medium_line_plain_t3_t

0x0678,	// (0x000498e3) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0678,	// (0x000498e3) list_medium_line_x2_t2_g2_g1

0x0690,	// (0x000498fb) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0690,	// (0x000498fb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x000584e4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x000584e4) list_medium_line_x2_t2_g2_g

0x07a6,	// (0x00049a11) list_medium_line_x2_t2_g2_t1_ParamLimits

0x07a6,	// (0x00049a11) list_medium_line_x2_t2_g2_t1

0x06b1,	// (0x0004991c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x06b1,	// (0x0004991c) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x00058f84) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x00058f84) list_medium_line_x2_t2_g2_t

0x0678,	// (0x000498e3) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0678,	// (0x000498e3) list_medium_line_x2_t4_g2_g1

0x2505,	// (0x0004b770) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2505,	// (0x0004b770) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x00058f89) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x00058f89) list_medium_line_x2_t4_g2_g

0xbe18,	// (0x00055083) list_medium_line_x2_t4_g2_t1_ParamLimits

0xbe18,	// (0x00055083) list_medium_line_x2_t4_g2_t1

0xbe32,	// (0x0005509d) list_medium_line_x2_t4_g2_t2_ParamLimits

0xbe32,	// (0x0005509d) list_medium_line_x2_t4_g2_t2

0xbe47,	// (0x000550b2) list_medium_line_x2_t4_g2_t3_ParamLimits

0xbe47,	// (0x000550b2) list_medium_line_x2_t4_g2_t3

0x06b1,	// (0x0004991c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x06b1,	// (0x0004991c) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x00058f8e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x00058f8e) list_medium_line_x2_t4_g2_t

0x2517,	// (0x0004b782) list_medium_line_t3_right_iconx2_g1

0x2401,	// (0x0004b66c) list_medium_line_t3_right_iconx2_g2

0xbe5c,	// (0x000550c7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x00058f97) list_medium_line_t3_right_iconx2_g

0xbe64,	// (0x000550cf) list_medium_line_t3_right_iconx2_t1

0xbe74,	// (0x000550df) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x00058f9e) list_medium_line_t3_right_iconx2_t

0x0678,	// (0x000498e3) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0678,	// (0x000498e3) list_medium_line_x3_t4_g4_g1

0x0684,	// (0x000498ef) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0684,	// (0x000498ef) list_medium_line_x3_t4_g4_g2

0x06fa,	// (0x00049965) list_medium_line_x3_t4_g4_g3_ParamLimits

0x06fa,	// (0x00049965) list_medium_line_x3_t4_g4_g3

0x251f,	// (0x0004b78a) list_medium_line_x3_t4_g4_g4_ParamLimits

0x251f,	// (0x0004b78a) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x00058fa3) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x00058fa3) list_medium_line_x3_t4_g4_g

0xbe82,	// (0x000550ed) list_medium_line_x3_t4_g4_t1_ParamLimits

0xbe82,	// (0x000550ed) list_medium_line_x3_t4_g4_t1

0xbe99,	// (0x00055104) list_medium_line_x3_t4_g4_t2_ParamLimits

0xbe99,	// (0x00055104) list_medium_line_x3_t4_g4_t2

0x07bb,	// (0x00049a26) list_medium_line_x3_t4_g4_t3_ParamLimits

0x07bb,	// (0x00049a26) list_medium_line_x3_t4_g4_t3

0x252b,	// (0x0004b796) list_medium_line_x3_t4_g4_t4_ParamLimits

0x252b,	// (0x0004b796) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x00058fac) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x00058fac) list_medium_line_x3_t4_g4_t

0xbeae,	// (0x00055119) list_single_dyc_row_text_pane_t1_ParamLimits

0xbeae,	// (0x00055119) list_single_dyc_row_text_pane_t1

0xbee5,	// (0x00055150) list_single_dyc_row_text_pane_t2_ParamLimits

0xbee5,	// (0x00055150) list_single_dyc_row_text_pane_t2

0x2548,	// (0x0004b7b3) list_single_dyc_row_text_pane_t3_ParamLimits

0x2548,	// (0x0004b7b3) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x00058fb5) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x00058fb5) list_single_dyc_row_text_pane_t

0x255a,	// (0x0004b7c5) list_single_dyc_row_pane_g1_ParamLimits

0x255a,	// (0x0004b7c5) list_single_dyc_row_pane_g1

0x2566,	// (0x0004b7d1) list_single_dyc_row_pane_g2_ParamLimits

0x2566,	// (0x0004b7d1) list_single_dyc_row_pane_g2

0x2572,	// (0x0004b7dd) list_single_dyc_row_pane_g3_ParamLimits

0x2572,	// (0x0004b7dd) list_single_dyc_row_pane_g3

0x257e,	// (0x0004b7e9) list_single_dyc_row_pane_g4_ParamLimits

0x257e,	// (0x0004b7e9) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x00058fbc) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x00058fbc) list_single_dyc_row_pane_g

0x258a,	// (0x0004b7f5) list_single_dyc_row_text_pane_ParamLimits

0x258a,	// (0x0004b7f5) list_single_dyc_row_text_pane

0x42b0,	// (0x0004d51b) bg_sp_fs_scroll_pane

0x25a9,	// (0x0004b814) thumb_sp_fs_scroll_pane

0x1423,	// (0x0004a68e) list_medium_line_g1_ParamLimits

0x1423,	// (0x0004a68e) list_medium_line_g1

0x25b2,	// (0x0004b81d) list_medium_line_t1_ParamLimits

0x25b2,	// (0x0004b81d) list_medium_line_t1

0x0678,	// (0x000498e3) list_medium_line_x2_g1_ParamLimits

0x0678,	// (0x000498e3) list_medium_line_x2_g1

0x0684,	// (0x000498ef) list_medium_line_x2_g2_ParamLimits

0x0684,	// (0x000498ef) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x00058fc5) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x00058fc5) list_medium_line_x2_g

0x25c7,	// (0x0004b832) list_medium_line_x2_t1_ParamLimits

0x25c7,	// (0x0004b832) list_medium_line_x2_t1

0x0678,	// (0x000498e3) list_medium_line_x3_g1_ParamLimits

0x0678,	// (0x000498e3) list_medium_line_x3_g1

0x0684,	// (0x000498ef) list_medium_line_x3_g2_ParamLimits

0x0684,	// (0x000498ef) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x00058fc5) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x00058fc5) list_medium_line_x3_g

0x25c7,	// (0x0004b832) list_medium_line_x3_t1_ParamLimits

0x25c7,	// (0x0004b832) list_medium_line_x3_t1

0x25dd,	// (0x0004b848) thumb_sp_fs_scroll_pane_g1

0x25e6,	// (0x0004b851) thumb_sp_fs_scroll_pane_g2

0x25ef,	// (0x0004b85a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x00058fca) thumb_sp_fs_scroll_pane_g

0x25dd,	// (0x0004b848) bg_sp_fs_scroll_pane_g1

0x25e6,	// (0x0004b851) bg_sp_fs_scroll_pane_g2

0x25ef,	// (0x0004b85a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x00058fca) bg_sp_fs_scroll_pane_g

0x0678,	// (0x000498e3) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0678,	// (0x000498e3) list_medium_line_x2_t3_g4_g1

0x06ee,	// (0x00049959) list_medium_line_x2_t3_g4_g2_ParamLimits

0x06ee,	// (0x00049959) list_medium_line_x2_t3_g4_g2

0x0684,	// (0x000498ef) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0684,	// (0x000498ef) list_medium_line_x2_t3_g4_g3

0x0690,	// (0x000498fb) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0690,	// (0x000498fb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x00058560) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x00058560) list_medium_line_x2_t3_g4_g

0xbf3f,	// (0x000551aa) list_medium_line_x2_t3_g4_t1_ParamLimits

0xbf3f,	// (0x000551aa) list_medium_line_x2_t3_g4_t1

0xbf55,	// (0x000551c0) list_medium_line_x2_t3_g4_t2_ParamLimits

0xbf55,	// (0x000551c0) list_medium_line_x2_t3_g4_t2

0x06b1,	// (0x0004991c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x06b1,	// (0x0004991c) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x00058fd1) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x00058fd1) list_medium_line_x2_t3_g4_t

0x1423,	// (0x0004a68e) list_medium_line_g2_g1_ParamLimits

0x1423,	// (0x0004a68e) list_medium_line_g2_g1

0x142f,	// (0x0004a69a) list_medium_line_g2_g2_ParamLimits

0x142f,	// (0x0004a69a) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x00058c99) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x00058c99) list_medium_line_g2_g

0x25f8,	// (0x0004b863) list_medium_line_g2_t1_ParamLimits

0x25f8,	// (0x0004b863) list_medium_line_g2_t1

0x1423,	// (0x0004a68e) list_medium_line_t3_g2_g1_ParamLimits

0x1423,	// (0x0004a68e) list_medium_line_t3_g2_g1

0x142f,	// (0x0004a69a) list_medium_line_t3_g2_g2_ParamLimits

0x142f,	// (0x0004a69a) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x00058c99) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x00058c99) list_medium_line_t3_g2_g

0xbf6e,	// (0x000551d9) list_medium_line_t3_g2_t1_ParamLimits

0xbf6e,	// (0x000551d9) list_medium_line_t3_g2_t1

0xbf88,	// (0x000551f3) list_medium_line_t3_g2_t2_ParamLimits

0xbf88,	// (0x000551f3) list_medium_line_t3_g2_t2

0xbf9d,	// (0x00055208) list_medium_line_t3_g2_t3_ParamLimits

0xbf9d,	// (0x00055208) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x00058fd8) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x00058fd8) list_medium_line_t3_g2_t

0x2401,	// (0x0004b66c) list_medium_line_right_icon_g1

0x260d,	// (0x0004b878) list_medium_line_right_icon_t1

0x1423,	// (0x0004a68e) list_medium_line_t2_g1_ParamLimits

0x1423,	// (0x0004a68e) list_medium_line_t2_g1

0xbfb3,	// (0x0005521e) list_medium_line_t2_t1_ParamLimits

0xbfb3,	// (0x0005521e) list_medium_line_t2_t1

0xbfca,	// (0x00055235) list_medium_line_t2_t2_ParamLimits

0xbfca,	// (0x00055235) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x00058fdf) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x00058fdf) list_medium_line_t2_t

0x1423,	// (0x0004a68e) list_medium_line_t3_g1_ParamLimits

0x1423,	// (0x0004a68e) list_medium_line_t3_g1

0xbfdc,	// (0x00055247) list_medium_line_t3_t1_ParamLimits

0xbfdc,	// (0x00055247) list_medium_line_t3_t1

0xbff3,	// (0x0005525e) list_medium_line_t3_t2_ParamLimits

0xbff3,	// (0x0005525e) list_medium_line_t3_t2

0xc008,	// (0x00055273) list_medium_line_t3_t3_ParamLimits

0xc008,	// (0x00055273) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x00058fe4) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x00058fe4) list_medium_line_t3_t

0x1423,	// (0x0004a68e) list_medium_line_g3_g1_ParamLimits

0x1423,	// (0x0004a68e) list_medium_line_g3_g1

0x261b,	// (0x0004b886) list_medium_line_g3_g2_ParamLimits

0x261b,	// (0x0004b886) list_medium_line_g3_g2

0x142f,	// (0x0004a69a) list_medium_line_g3_g3_ParamLimits

0x142f,	// (0x0004a69a) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x00058feb) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x00058feb) list_medium_line_g3_g

0x2627,	// (0x0004b892) list_medium_line_g3_t1_ParamLimits

0x2627,	// (0x0004b892) list_medium_line_g3_t1

0x1423,	// (0x0004a68e) list_medium_line_t2_g3_g1_ParamLimits

0x1423,	// (0x0004a68e) list_medium_line_t2_g3_g1

0x261b,	// (0x0004b886) list_medium_line_t2_g3_g2_ParamLimits

0x261b,	// (0x0004b886) list_medium_line_t2_g3_g2

0x142f,	// (0x0004a69a) list_medium_line_t2_g3_g3_ParamLimits

0x142f,	// (0x0004a69a) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x00058feb) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x00058feb) list_medium_line_t2_g3_g

0xc01a,	// (0x00055285) list_medium_line_t2_g3_t1_ParamLimits

0xc01a,	// (0x00055285) list_medium_line_t2_g3_t1

0xc034,	// (0x0005529f) list_medium_line_t2_g3_t2_ParamLimits

0xc034,	// (0x0005529f) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x00058ff2) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x00058ff2) list_medium_line_t2_g3_t

0x1423,	// (0x0004a68e) list_medium_line_t3_g3_g1_ParamLimits

0x1423,	// (0x0004a68e) list_medium_line_t3_g3_g1

0x261b,	// (0x0004b886) list_medium_line_t3_g3_g2_ParamLimits

0x261b,	// (0x0004b886) list_medium_line_t3_g3_g2

0x142f,	// (0x0004a69a) list_medium_line_t3_g3_g3_ParamLimits

0x142f,	// (0x0004a69a) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x00058feb) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x00058feb) list_medium_line_t3_g3_g

0xc049,	// (0x000552b4) list_medium_line_t3_g3_t1_ParamLimits

0xc049,	// (0x000552b4) list_medium_line_t3_g3_t1

0xc062,	// (0x000552cd) list_medium_line_t3_g3_t2_ParamLimits

0xc062,	// (0x000552cd) list_medium_line_t3_g3_t2

0xc078,	// (0x000552e3) list_medium_line_t3_g3_t3_ParamLimits

0xc078,	// (0x000552e3) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x00058ff7) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x00058ff7) list_medium_line_t3_g3_t

0x2517,	// (0x0004b782) list_medium_line_right_iconx2_g1

0x2401,	// (0x0004b66c) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x00058ffe) list_medium_line_right_iconx2_g

0x263c,	// (0x0004b8a7) list_medium_line_right_iconx2_t1

0x2517,	// (0x0004b782) list_medium_line_t2_right_iconx2_g1

0x2401,	// (0x0004b66c) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x00058ffe) list_medium_line_t2_right_iconx2_g

0xc08e,	// (0x000552f9) list_medium_line_t2_right_iconx2_t1

0xc09e,	// (0x00055309) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x00059003) list_medium_line_t2_right_iconx2_t

0x264a,	// (0x0004b8b5) list_medium_line_x4_t4_t1

0xc0ac,	// (0x00055317) list_medium_line_x4_t4_t2

0xc0bc,	// (0x00055327) list_medium_line_x4_t4_t3

0xc0cc,	// (0x00055337) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x00059008) list_medium_line_x4_t4_t

0xc105,	// (0x00055370) tport_appsw_pane_ParamLimits

0xc105,	// (0x00055370) tport_appsw_pane

0xc111,	// (0x0005537c) tport_contact_pane_ParamLimits

0xc111,	// (0x0005537c) tport_contact_pane

0xc121,	// (0x0005538c) tport_listscroll_pane_ParamLimits

0xc121,	// (0x0005538c) tport_listscroll_pane

0xc131,	// (0x0005539c) cell_tport_appsw_pane_ParamLimits

0xc131,	// (0x0005539c) cell_tport_appsw_pane

0x09ed,	// (0x00049c58) tport_appsw_pane_g1_ParamLimits

0x09ed,	// (0x00049c58) tport_appsw_pane_g1

0x2658,	// (0x0004b8c3) tport_contact_pane_g1

0x2661,	// (0x0004b8cc) tport_contact_pane_t1

0x266f,	// (0x0004b8da) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x00059011) tport_contact_pane_t

0x267d,	// (0x0004b8e8) list_tport_pane

0x2686,	// (0x0004b8f1) scroll_pane_cp_030

0x2697,	// (0x0004b902) cell_tport_appsw_pane_g1

0x26a7,	// (0x0004b912) cell_tport_appsw_pane_t1

0x42b0,	// (0x0004d51b) grid_highlight_pane_cp019

0xc15c,	// (0x000553c7) list_tport_double_graphic_pane_ParamLimits

0xc15c,	// (0x000553c7) list_tport_double_graphic_pane

0xe9ed,	// (0x00057c58) list_highlight_pane_cp023_ParamLimits

0xe9ed,	// (0x00057c58) list_highlight_pane_cp023

0xc16f,	// (0x000553da) list_tport_double_graphic_pane_g1_ParamLimits

0xc16f,	// (0x000553da) list_tport_double_graphic_pane_g1

0xc17c,	// (0x000553e7) list_tport_double_graphic_pane_t1_ParamLimits

0xc17c,	// (0x000553e7) list_tport_double_graphic_pane_t1

0xc191,	// (0x000553fc) list_tport_double_graphic_pane_t2_ParamLimits

0xc191,	// (0x000553fc) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x0005901d) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x0005901d) list_tport_double_graphic_pane_t

0x42b0,	// (0x0004d51b) main_cale_note_pane

0xa0ed,	// (0x00053358) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa0ed,	// (0x00053358) cell_vitu2_function_top_wide_pane_cp01

0xb900,	// (0x00054b6b) wait_bar_pane_cp05_ParamLimits

0x42b0,	// (0x0004d51b) listscroll_cmail_pane

0x26bd,	// (0x0004b928) list_cmail_pane

0xc1ad,	// (0x00055418) list_cmail_body_pane

0xc1d1,	// (0x0005543c) list_single_cmail_header_caption_pane

0xc1ff,	// (0x0005546a) list_single_cmail_header_detail_pane_ParamLimits

0xc1ff,	// (0x0005546a) list_single_cmail_header_detail_pane

0xc237,	// (0x000554a2) list_single_cmail_header_caption_pane_t1

0xc247,	// (0x000554b2) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc247,	// (0x000554b2) list_single_cmail_header_detail_pane_g1

0x26dd,	// (0x0004b948) list_single_cmail_header_detail_pane_g2_ParamLimits

0x26dd,	// (0x0004b948) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x00059022) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x00059022) list_single_cmail_header_detail_pane_g

0x26f6,	// (0x0004b961) list_single_cmail_header_detail_pane_t1_ParamLimits

0x26f6,	// (0x0004b961) list_single_cmail_header_detail_pane_t1

0x2728,	// (0x0004b993) list_single_cmail_header_editor_pane_bg_ParamLimits

0x2728,	// (0x0004b993) list_single_cmail_header_editor_pane_bg

0x273a,	// (0x0004b9a5) list_cmail_body_pane_g1

0x2743,	// (0x0004b9ae) list_cmail_body_pane_t1

0x11d6,	// (0x0004a441) list_single_cmail_header_editor_pane_bg_g1

0x61da,	// (0x0004f445) list_single_cmail_header_editor_pane_bg_g1_copy1

0x11e6,	// (0x0004a451) list_single_cmail_header_editor_pane_bg_g1_copy2

0x11de,	// (0x0004a449) list_single_cmail_header_editor_pane_bg_g1_copy3

0x141b,	// (0x0004a686) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1206,	// (0x0004a471) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x11f6,	// (0x0004a461) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x11fe,	// (0x0004a469) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x61ba,	// (0x0004f425) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc285,	// (0x000554f0) calenote_gesture_pane_ParamLimits

0xc285,	// (0x000554f0) calenote_gesture_pane

0xc29f,	// (0x0005550a) calenote_window_pane_ParamLimits

0xc29f,	// (0x0005550a) calenote_window_pane

0x2751,	// (0x0004b9bc) popup_note_window_cp01

0xc2b7,	// (0x00055522) calenote_swipe_1_pane_ParamLimits

0xc2b7,	// (0x00055522) calenote_swipe_1_pane

0xbcea,	// (0x00054f55) calenote_swipe_2_pane_ParamLimits

0xbcea,	// (0x00054f55) calenote_swipe_2_pane

0x2306,	// (0x0004b571) calenote_swipe_1_pane_g1_ParamLimits

0x2306,	// (0x0004b571) calenote_swipe_1_pane_g1

0x2313,	// (0x0004b57e) calenote_swipe_1_pane_g2_ParamLimits

0x2313,	// (0x0004b57e) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x00058f51) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x00058f51) calenote_swipe_1_pane_g

0x2763,	// (0x0004b9ce) calenote_swipe_1_pane_t1_ParamLimits

0x2763,	// (0x0004b9ce) calenote_swipe_1_pane_t1

0x2306,	// (0x0004b571) calenote_swipe_2_pane_g1_ParamLimits

0x2306,	// (0x0004b571) calenote_swipe_2_pane_g1

0x2782,	// (0x0004b9ed) calenote_swipe_2_pane_g2_ParamLimits

0x2782,	// (0x0004b9ed) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x0005902e) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x0005902e) calenote_swipe_2_pane_g

0x278e,	// (0x0004b9f9) calenote_swipe_2_pane_t1_ParamLimits

0x278e,	// (0x0004b9f9) calenote_swipe_2_pane_t1

0x42b0,	// (0x0004d51b) main_mup_navstr_pane

0x8e65,	// (0x000520d0) main_mup3_pane_t7_ParamLimits

0x8e65,	// (0x000520d0) main_mup3_pane_t7

0x986c,	// (0x00052ad7) main_mp4_pane_g6_ParamLimits

0x986c,	// (0x00052ad7) main_mp4_pane_g6

0x9bee,	// (0x00052e59) main_image3_pane_t4_ParamLimits

0x9bee,	// (0x00052e59) main_image3_pane_t4

0xc2ca,	// (0x00055535) popup_navstr_preview_pane_ParamLimits

0xc2ca,	// (0x00055535) popup_navstr_preview_pane

0xc2d6,	// (0x00055541) scroll_navstr_pane_ParamLimits

0xc2d6,	// (0x00055541) scroll_navstr_pane

0x42b0,	// (0x0004d51b) bg_popup_preview_window_pane_cp04

0x27b5,	// (0x0004ba20) popup_navstr_preview_pane_t1

0xc2e2,	// (0x0005554d) scroll_navstr_pane_g1_ParamLimits

0xc2e2,	// (0x0005554d) scroll_navstr_pane_g1

0xc2ef,	// (0x0005555a) scroll_navstr_pane_t1_ParamLimits

0xc2ef,	// (0x0005555a) scroll_navstr_pane_t1

0x275a,	// (0x0004b9c5) bg_button_pane_cp014

0x275a,	// (0x0004b9c5) bg_button_pane_cp030

0xbbde,	// (0x00054e49) list_double_fisheye_pane_g4_ParamLimits

0xbbde,	// (0x00054e49) list_double_fisheye_pane_g4

0xbbea,	// (0x00054e55) list_double_fisheye_pane_g5_ParamLimits

0xbbea,	// (0x00054e55) list_double_fisheye_pane_g5

0x26c5,	// (0x0004b930) sp_fs_scroll_pane_cp03

0xf0e7,	// (0x00058352) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2441,	// (0x0004b6ac) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x00058f6e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x244d,	// (0x0004b6b8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc1a3,	// (0x0005540e) sp_fs_scroll_pane_cp02

0x53c3,	// (0x0004e62e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x53c3,	// (0x0004e62e) popup_sp_fs_calendar_preview_list_single_pane

0x42b0,	// (0x0004d51b) main_cam6_pano_pane

0xe9ed,	// (0x00057c58) main_mup3_pane_ParamLimits

0x42b0,	// (0x0004d51b) main_phacti_pane

0xb7d5,	// (0x00054a40) bg_button_pane_cp11

0xb7ed,	// (0x00054a58) main_mobtv_info_pane_g2_ParamLimits

0xb7ed,	// (0x00054a58) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x00058ece) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x00058ece) main_mobtv_info_pane_g

0xb99f,	// (0x00054c0a) sc_clock_pane_t5_ParamLimits

0xb99f,	// (0x00054c0a) sc_clock_pane_t5

0xba41,	// (0x00054cac) main_radioblah_pane_g1_ParamLimits

0x2249,	// (0x0004b4b4) main_radioblah_pane_t3_ParamLimits

0x2249,	// (0x0004b4b4) main_radioblah_pane_t3

0x2261,	// (0x0004b4cc) main_radioblah_pane_t4_ParamLimits

0x2261,	// (0x0004b4cc) main_radioblah_pane_t4

0xba5f,	// (0x00054cca) main_radioblah_text_pane_ParamLimits

0xba5f,	// (0x00054cca) main_radioblah_text_pane

0xba6c,	// (0x00054cd7) main_radioblah_info_pane_g1_ParamLimits

0xbb01,	// (0x00054d6c) main_radioblah_info_pane_t4_ParamLimits

0xbb01,	// (0x00054d6c) main_radioblah_info_pane_t4

0xe9ed,	// (0x00057c58) main_sp_fs_calendar_pane

0xc301,	// (0x0005556c) main_phacti_pane_g1

0xc309,	// (0x00055574) phacti_note_pane_ParamLimits

0xc309,	// (0x00055574) phacti_note_pane

0x27cc,	// (0x0004ba37) phacti_term_pane_ParamLimits

0x27cc,	// (0x0004ba37) phacti_term_pane

0x27e1,	// (0x0004ba4c) phacti_note_pane_t1_ParamLimits

0x27e1,	// (0x0004ba4c) phacti_note_pane_t1

0x27f8,	// (0x0004ba63) phacti_term_pane_g1

0x2800,	// (0x0004ba6b) phacti_term_pane_t1_ParamLimits

0x2800,	// (0x0004ba6b) phacti_term_pane_t1

0x282a,	// (0x0004ba95) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2832,	// (0x0004ba9d) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x00059038) popup_sp_fs_calendar_preview_list_single_pane_g

0x283a,	// (0x0004baa5) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x283a,	// (0x0004baa5) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2850,	// (0x0004babb) aid_popup_sp_fs_bg_corner_pane

0xee36,	// (0x000580a1) popup_sp_fs_calendar_preview_bg_pane_g1

0x42b0,	// (0x0004d51b) popup_sp_fs_calendar_preview_bg_pane

0x2858,	// (0x0004bac3) popup_sp_fs_calendar_preview_list_pane

0xe9ed,	// (0x00057c58) bg_main_sp_fs_cale_pane_ParamLimits

0xe9ed,	// (0x00057c58) bg_main_sp_fs_cale_pane

0x2860,	// (0x0004bacb) listscroll_cale_mrui_pane_ParamLimits

0x2860,	// (0x0004bacb) listscroll_cale_mrui_pane

0x2874,	// (0x0004badf) listscroll_sp_fs_schedule_track_pane

0x287d,	// (0x0004bae8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x287d,	// (0x0004bae8) main_sp_fs_ctrlbar_pane_cp01

0x288e,	// (0x0004baf9) main_sp_fs_ribbon_pane

0x2896,	// (0x0004bb01) popup_sp_fs_cale_preview_window

0xc34c,	// (0x000555b7) list_single_sp_fs_schedule_track_pane_ParamLimits

0xc34c,	// (0x000555b7) list_single_sp_fs_schedule_track_pane

0x1128,	// (0x0004a393) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1128,	// (0x0004a393) bg_sp_fs_highlight_list_pane_cp03

0xc36e,	// (0x000555d9) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xc36e,	// (0x000555d9) list_single_sp_fs_schedule_track_pane_g1

0xc37a,	// (0x000555e5) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xc37a,	// (0x000555e5) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x0005903d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x0005903d) list_single_sp_fs_schedule_track_pane_g

0xc386,	// (0x000555f1) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xc386,	// (0x000555f1) list_single_sp_fs_schedule_track_pane_t1

0xc39e,	// (0x00055609) sp_fs_schedule_track_pane_ParamLimits

0xc39e,	// (0x00055609) sp_fs_schedule_track_pane

0x28a8,	// (0x0004bb13) sp_fs_schedule_track_pane_g1

0x28b0,	// (0x0004bb1b) sp_fs_schedule_track_pane_g2

0x28b8,	// (0x0004bb23) sp_fs_schedule_track_pane_g3

0x28c0,	// (0x0004bb2b) sp_fs_schedule_track_pane_g4

0x28c8,	// (0x0004bb33) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x00059042) sp_fs_schedule_track_pane_g

0x11d6,	// (0x0004a441) bg_sp_fs_schedule_viewer_highlight_g1

0x61da,	// (0x0004f445) bg_sp_fs_schedule_viewer_highlight_g2

0x11de,	// (0x0004a449) bg_sp_fs_schedule_viewer_highlight_g3

0x11e6,	// (0x0004a451) bg_sp_fs_schedule_viewer_highlight_g4

0x141b,	// (0x0004a686) bg_sp_fs_schedule_viewer_highlight_g5

0x11f6,	// (0x0004a461) bg_sp_fs_schedule_viewer_highlight_g6

0x11fe,	// (0x0004a469) bg_sp_fs_schedule_viewer_highlight_g7

0x1206,	// (0x0004a471) bg_sp_fs_schedule_viewer_highlight_g8

0x61ba,	// (0x0004f425) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x0005904d) bg_sp_fs_schedule_viewer_highlight_g

0x42b0,	// (0x0004d51b) bg_main_sp_fs_ribbon_pane

0xc3ae,	// (0x00055619) main_sp_fs_ribbon_pane_g1

0x28d0,	// (0x0004bb3b) main_sp_fs_ribbon_pane_t1

0xc3b7,	// (0x00055622) main_sp_fs_ribbon_pane_t2

0x28df,	// (0x0004bb4a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x00059060) main_sp_fs_ribbon_pane_t

0x28ee,	// (0x0004bb59) main_sp_fs_ribbon_scheduler_pane

0x28f6,	// (0x0004bb61) bg_main_sp_fs_ribbon_pane_g1

0x28ff,	// (0x0004bb6a) bg_main_sp_fs_ribbon_pane_g2

0x2908,	// (0x0004bb73) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x00059067) bg_main_sp_fs_ribbon_pane_g

0x2910,	// (0x0004bb7b) main_sp_fs_ribbon_scheduler_pane_g1

0x2919,	// (0x0004bb84) main_sp_fs_ribbon_scheduler_pane_g2

0x2922,	// (0x0004bb8d) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x0005906e) main_sp_fs_ribbon_scheduler_pane_g

0x292b,	// (0x0004bb96) list_cale_mrui_pane

0xc3c6,	// (0x00055631) sp_fs_scroll_pane_cp07_ParamLimits

0xc3c6,	// (0x00055631) sp_fs_scroll_pane_cp07

0xc3dc,	// (0x00055647) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xc3dc,	// (0x00055647) bg_sp_fs_schedule_viewer_highlight

0x2934,	// (0x0004bb9f) list_single_sp_fs_schedule_track_pane_cp01

0x293c,	// (0x0004bba7) list_sp_fs_schedule_track_pane

0x2944,	// (0x0004bbaf) sp_fs_scroll_pane_cp06_ParamLimits

0x2944,	// (0x0004bbaf) sp_fs_scroll_pane_cp06

0xee36,	// (0x000580a1) bgmain_sp_fs_calendar_pane_g1

0xc3e9,	// (0x00055654) list_single_cale_mrui_pane_ParamLimits

0xc3e9,	// (0x00055654) list_single_cale_mrui_pane

0x2956,	// (0x0004bbc1) list_single_cale_mrui_row_pane_ParamLimits

0x2956,	// (0x0004bbc1) list_single_cale_mrui_row_pane

0x2963,	// (0x0004bbce) list_single_cale_mrui_row_pane_g1_ParamLimits

0x2963,	// (0x0004bbce) list_single_cale_mrui_row_pane_g1

0x299b,	// (0x0004bc06) list_single_cale_mrui_row_pane_t1_ParamLimits

0x299b,	// (0x0004bc06) list_single_cale_mrui_row_pane_t1

0xc418,	// (0x00055683) list_single_cale_mrui_row_pane_t2_ParamLimits

0xc418,	// (0x00055683) list_single_cale_mrui_row_pane_t2

0x29ad,	// (0x0004bc18) list_single_cale_mrui_row_pane_t3_ParamLimits

0x29ad,	// (0x0004bc18) list_single_cale_mrui_row_pane_t3

0x29dc,	// (0x0004bc47) list_single_cale_mrui_row_pane_t4_ParamLimits

0x29dc,	// (0x0004bc47) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x0005907a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x0005907a) list_single_cale_mrui_row_pane_t

0xc47e,	// (0x000556e9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xc47e,	// (0x000556e9) list_single_cmail_header_editor_pane_bg_cp01

0xc4a0,	// (0x0005570b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xc4a0,	// (0x0005570b) list_single_cmail_header_editor_pane_bg_cp02

0xc4bc,	// (0x00055727) main_radioblah_text_pane_t1_ParamLimits

0xc4bc,	// (0x00055727) main_radioblah_text_pane_t1

0x2a0b,	// (0x0004bc76) cam6_indi_pane_cp01

0x2a13,	// (0x0004bc7e) cam6_mode_pane_cp01

0x2a1b,	// (0x0004bc86) cam6_pano_pane

0x2a24,	// (0x0004bc8f) cam6_zoom_pane_cp01

0x2a2c,	// (0x0004bc97) cam6_pano_image_pane

0x2a37,	// (0x0004bca2) cam6_pano_pane_g1

0x1fc1,	// (0x0004b22c) cam6_pano_pane_g2

0x2a40,	// (0x0004bcab) cam6_pano_pane_g3

0x2a49,	// (0x0004bcb4) cam6_pano_pane_g4

0x0ca7,	// (0x00049f12) cam6_pano_pane_g5

0x2a52,	// (0x0004bcbd) cam6_pano_pane_g6

0x2a5c,	// (0x0004bcc7) cam6_pano_pane_g7

0x2a64,	// (0x0004bccf) cam6_pano_pane_g8

0x2a6d,	// (0x0004bcd8) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x00059083) cam6_pano_pane_g

0x42b0,	// (0x0004d51b) main_browser_tag_pane

0x27ad,	// (0x0004ba18) grid_navstr_albumart_pane

0x2a78,	// (0x0004bce3) cell_navstr_albumart_pane_ParamLimits

0x2a78,	// (0x0004bce3) cell_navstr_albumart_pane

0xd741,	// (0x000569ac) cell_navstr_albumart_pane_g1

0xe7fc,	// (0x00057a67) cell_navstr_albumart_pane_g2

0xe80c,	// (0x00057a77) cell_navstr_albumart_pane_g3

0xe804,	// (0x00057a6f) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x00059096) cell_navstr_albumart_pane_g

0xc4d9,	// (0x00055744) bt_list_pane_ParamLimits

0xc4d9,	// (0x00055744) bt_list_pane

0xc500,	// (0x0005576b) bt_list_pane_t1

0xc50f,	// (0x0005577a) bt_list_pane_t2

0x0001,

0xfe34,	// (0x0005909f) bt_list_pane_t

0x42b0,	// (0x0004d51b) main_cale_prevew_pane

0xc51e,	// (0x00055789) popup_cale_preview_window_ParamLimits

0xc51e,	// (0x00055789) popup_cale_preview_window

0xe9ed,	// (0x00057c58) bg_popup_preview_window_pane_cp05_ParamLimits

0xe9ed,	// (0x00057c58) bg_popup_preview_window_pane_cp05

0x2a9a,	// (0x0004bd05) list_cale_preview_pane_ParamLimits

0x2a9a,	// (0x0004bd05) list_cale_preview_pane

0xc535,	// (0x000557a0) list_double_cale_preview_pane_ParamLimits

0xc535,	// (0x000557a0) list_double_cale_preview_pane

0xc547,	// (0x000557b2) list_single_cale_preview_pane_ParamLimits

0xc547,	// (0x000557b2) list_single_cale_preview_pane

0xc55b,	// (0x000557c6) list_single_cale_preview_pane_g1

0xc563,	// (0x000557ce) list_single_cale_preview_pane_t1_ParamLimits

0xc563,	// (0x000557ce) list_single_cale_preview_pane_t1

0xc578,	// (0x000557e3) list_double_cale_preview_pane_g1

0xc580,	// (0x000557eb) list_double_cale_preview_pane_t1_ParamLimits

0xc580,	// (0x000557eb) list_double_cale_preview_pane_t1

0xc595,	// (0x00055800) list_double_cale_preview_pane_t2_ParamLimits

0xc595,	// (0x00055800) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x000590a4) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x000590a4) list_double_cale_preview_pane_t

0x42b0,	// (0x0004d51b) main_ezdial_pane

0xe9ed,	// (0x00057c58) main_sp_fs_email_pane_ParamLimits

0xbd20,	// (0x00054f8b) cmail_ddmenu_btn01_pane_ParamLimits

0xbd20,	// (0x00054f8b) cmail_ddmenu_btn01_pane

0xbd3d,	// (0x00054fa8) cmail_ddmenu_btn02_pane_ParamLimits

0xbd3d,	// (0x00054fa8) cmail_ddmenu_btn02_pane

0xbd5b,	// (0x00054fc6) cmail_ddmenu_btn03_pane_ParamLimits

0xbd5b,	// (0x00054fc6) cmail_ddmenu_btn03_pane

0xbd89,	// (0x00054ff4) main_sp_fs_ctrlbar_pane_ParamLimits

0xbda5,	// (0x00055010) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc1ad,	// (0x00055418) list_cmail_body_pane_ParamLimits

0x26d4,	// (0x0004b93f) bg_button_pane_cp12

0x26e9,	// (0x0004b954) list_single_cmail_header_detail_pane_g3_ParamLimits

0x26e9,	// (0x0004b954) list_single_cmail_header_detail_pane_g3

0xc25f,	// (0x000554ca) list_single_cmail_header_detail_pane_t2_ParamLimits

0xc25f,	// (0x000554ca) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x00059029) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x00059029) list_single_cmail_header_detail_pane_t

0x2815,	// (0x0004ba80) phacti_term_pane_t2_ParamLimits

0x2815,	// (0x0004ba80) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x00059033) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x00059033) phacti_term_pane_t

0x2aa6,	// (0x0004bd11) aid_size_list_single_double

0xc5ad,	// (0x00055818) popup_ezdial_listscroll_window

0xc5ce,	// (0x00055839) popup_number_entry_window_cp01

0xd5e0,	// (0x0005684b) bg_popup_call_pane_cp09

0x2ab2,	// (0x0004bd1d) ezdial_list_pane

0x2aba,	// (0x0004bd25) scroll_pane_cp23

0xec19,	// (0x00057e84) bg_button_pane_cp028_ParamLimits

0xec19,	// (0x00057e84) bg_button_pane_cp028

0xc5dc,	// (0x00055847) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xc5dc,	// (0x00055847) cmail_ddmenu_btn01_pane_g1

0xc5ee,	// (0x00055859) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xc5ee,	// (0x00055859) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x000590a9) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x000590a9) cmail_ddmenu_btn01_pane_g

0x2ac2,	// (0x0004bd2d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2ac2,	// (0x0004bd2d) cmail_ddmenu_btn01_pane_t1

0xe9df,	// (0x00057c4a) bg_button_pane_cp029_ParamLimits

0xe9df,	// (0x00057c4a) bg_button_pane_cp029

0xc5ee,	// (0x00055859) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xc5ee,	// (0x00055859) cmail_ddmenu_btn02_pane_g1

0xc606,	// (0x00055871) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xc606,	// (0x00055871) cmail_ddmenu_btn02_pane_t1

0x1128,	// (0x0004a393) bg_button_pane_cp031_ParamLimits

0x1128,	// (0x0004a393) bg_button_pane_cp031

0xc5ee,	// (0x00055859) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xc5ee,	// (0x00055859) cmail_ddmenu_btn03_pane_g1

0xc606,	// (0x00055871) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xc606,	// (0x00055871) cmail_ddmenu_btn03_pane_t1

0x9a8b,	// (0x00052cf6) cell_dialer2_keypad_pane_t1_ParamLimits

0x9aa5,	// (0x00052d10) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x9aa5,	// (0x00052d10) cell_dialer2_keypad_pane_t1_copy1

0xb697,	// (0x00054902) ncimui_group_button_pane

0xe9ed,	// (0x00057c58) main_sp_fs_calendar_pane_ParamLimits

0xc1d1,	// (0x0005543c) list_single_cmail_header_caption_pane_ParamLimits

0x175e,	// (0x0004a9c9) aid_recal_txt_sm_pane

0x42b0,	// (0x0004d51b) mian_recal_day_pane

0x2896,	// (0x0004bb01) popup_sp_fs_cale_preview_window_ParamLimits

0x42b0,	// (0x0004d51b) list_recal_day_pane

0x2af0,	// (0x0004bd5b) list_single_recal_day_pane_ParamLimits

0x2af0,	// (0x0004bd5b) list_single_recal_day_pane

0x2b02,	// (0x0004bd6d) list_single_recal_day_pane_g1_ParamLimits

0x2b02,	// (0x0004bd6d) list_single_recal_day_pane_g1

0x2b0e,	// (0x0004bd79) list_single_recal_day_pane_g2_ParamLimits

0x2b0e,	// (0x0004bd79) list_single_recal_day_pane_g2

0x2b1d,	// (0x0004bd88) list_single_recal_day_pane_g3_ParamLimits

0x2b1d,	// (0x0004bd88) list_single_recal_day_pane_g3

0xc62a,	// (0x00055895) list_single_recal_day_pane_g4_ParamLimits

0xc62a,	// (0x00055895) list_single_recal_day_pane_g4

0x2b29,	// (0x0004bd94) list_single_recal_day_pane_g5_ParamLimits

0x2b29,	// (0x0004bd94) list_single_recal_day_pane_g5

0x2b38,	// (0x0004bda3) list_single_recal_day_pane_g6_ParamLimits

0x2b38,	// (0x0004bda3) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x000590b8) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x000590b8) list_single_recal_day_pane_g

0x2b44,	// (0x0004bdaf) list_single_recal_day_pane_t1

0x2b52,	// (0x0004bdbd) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x000590c5) list_single_recal_day_pane_t

0xc63d,	// (0x000558a8) ncimui_query_button_pane_ParamLimits

0xc63d,	// (0x000558a8) ncimui_query_button_pane

0xc64d,	// (0x000558b8) ncimui_query_button_pane_t1_ParamLimits

0xc64d,	// (0x000558b8) ncimui_query_button_pane_t1

0x2b60,	// (0x0004bdcb) ncimui_query_button_pane_t2_ParamLimits

0x2b60,	// (0x0004bdcb) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x000590ca) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x000590ca) ncimui_query_button_pane_t

0xc660,	// (0x000558cb) query_button_pane_ParamLimits

0xc660,	// (0x000558cb) query_button_pane

0x42b0,	// (0x0004d51b) bg_button_pane_cp0028

0x2b73,	// (0x0004bdde) query_button_pane_t1

0x7eb6,	// (0x00051121) main_tport_pane_ParamLimits

0xc0dc,	// (0x00055347) bg_popup_window_pane_cp01_ParamLimits

0xc0dc,	// (0x00055347) bg_popup_window_pane_cp01

0xc0e9,	// (0x00055354) heading_pane_cp08_ParamLimits

0xc0e9,	// (0x00055354) heading_pane_cp08

0xc0f7,	// (0x00055362) heading_pane_cp07_ParamLimits

0xc0f7,	// (0x00055362) heading_pane_cp07

0x2697,	// (0x0004b902) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x00059016) cell_tport_appsw_pane_g

0x759a,	// (0x00050805) input_candi_list_open_g1

0xd103,	// (0x0005636e) list_cale_time_pane_g6_ParamLimits

0xd103,	// (0x0005636e) list_cale_time_pane_g6

0x88f4,	// (0x00051b5f) aid_size_touch_calib_1_ParamLimits

0x88f4,	// (0x00051b5f) aid_size_touch_calib_1

0x8900,	// (0x00051b6b) aid_size_touch_calib_2_ParamLimits

0x8900,	// (0x00051b6b) aid_size_touch_calib_2

0x890e,	// (0x00051b79) aid_size_touch_calib_3_ParamLimits

0x890e,	// (0x00051b79) aid_size_touch_calib_3

0x891e,	// (0x00051b89) aid_size_touch_calib_4_ParamLimits

0x891e,	// (0x00051b89) aid_size_touch_calib_4

0x892c,	// (0x00051b97) main_touch_calib_button_group_pane_ParamLimits

0x892c,	// (0x00051b97) main_touch_calib_button_group_pane

0x893a,	// (0x00051ba5) main_touch_calib_pane_g1_ParamLimits

0x8946,	// (0x00051bb1) main_touch_calib_pane_g2_ParamLimits

0x8952,	// (0x00051bbd) main_touch_calib_pane_g3_ParamLimits

0x895e,	// (0x00051bc9) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x000589ef) main_touch_calib_pane_g_ParamLimits

0x896a,	// (0x00051bd5) main_touch_calib_pane_t1_ParamLimits

0x8981,	// (0x00051bec) main_touch_calib_pane_t2_ParamLimits

0x8998,	// (0x00051c03) main_touch_calib_pane_t3_ParamLimits

0x89ac,	// (0x00051c17) main_touch_calib_pane_t4_ParamLimits

0x89c0,	// (0x00051c2b) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x000589f8) main_touch_calib_pane_t_ParamLimits

0x0a8e,	// (0x00049cf9) list_single_fp_cale_pane_g3_ParamLimits

0x0a8e,	// (0x00049cf9) list_single_fp_cale_pane_g3

0x9ed6,	// (0x00053141) bg_button_pane_cp012_ParamLimits

0x9ed6,	// (0x00053141) bg_vkb2_func_pane_cp03_ParamLimits

0xa89e,	// (0x00053b09) cell_vitu2_function_top_pane_g1_ParamLimits

0x9ed6,	// (0x00053141) bg_vkb2_func_pane_cp04_ParamLimits

0xb648,	// (0x000548b3) main_ncimui_button_group_pane_ParamLimits

0xb648,	// (0x000548b3) main_ncimui_button_group_pane

0xb685,	// (0x000548f0) main_ncimui_pane_t3_ParamLimits

0xb685,	// (0x000548f0) main_ncimui_pane_t3

0x27c3,	// (0x0004ba2e) phacti_button_group_pane

0x2aa6,	// (0x0004bd11) aid_size_list_single_double_ParamLimits

0xc5ad,	// (0x00055818) popup_ezdial_listscroll_window_ParamLimits

0xc5ce,	// (0x00055839) popup_number_entry_window_cp01_ParamLimits

0xc66d,	// (0x000558d8) phacti_button_pane_ParamLimits

0xc66d,	// (0x000558d8) phacti_button_pane

0x42b0,	// (0x0004d51b) bg_button_pane_cp14

0x2b81,	// (0x0004bdec) phacti_button_pane_t1

0xc67e,	// (0x000558e9) main_touch_calib_button_pane_ParamLimits

0xc67e,	// (0x000558e9) main_touch_calib_button_pane

0x5039,	// (0x0004e2a4) bg_button_pane_cp18_ParamLimits

0x5039,	// (0x0004e2a4) bg_button_pane_cp18

0x2b8f,	// (0x0004bdfa) main_touch_calib_button_pane_t1_ParamLimits

0x2b8f,	// (0x0004bdfa) main_touch_calib_button_pane_t1

0x2ba5,	// (0x0004be10) main_touch_calib_button_pane_t2_ParamLimits

0x2ba5,	// (0x0004be10) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x000590cf) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x000590cf) main_touch_calib_button_pane_t

0x42b0,	// (0x0004d51b) cell_ncimui_button_pane

0x42b0,	// (0x0004d51b) bg_button_pane_cp032

0x2bc3,	// (0x0004be2e) cell_ncimui_button_pane_t1

0x9b01,	// (0x00052d6c) image3_infobar_pane_ParamLimits

0x9b01,	// (0x00052d6c) image3_infobar_pane

0xb9c1,	// (0x00054c2c) fs_bigclock_status_pane_ParamLimits

0xb9c1,	// (0x00054c2c) fs_bigclock_status_pane

0xb9ce,	// (0x00054c39) main_fs_bigclock_clock_pane_ParamLimits

0xb9ce,	// (0x00054c39) main_fs_bigclock_clock_pane

0xb9e2,	// (0x00054c4d) main_fs_bigclock_indi_pane_ParamLimits

0xb9e2,	// (0x00054c4d) main_fs_bigclock_indi_pane

0xba0f,	// (0x00054c7a) main_fs_bigclock_swipe_pane_ParamLimits

0xba0f,	// (0x00054c7a) main_fs_bigclock_swipe_pane

0x42b0,	// (0x0004d51b) main_fs_clock_dumped_data

0x20ce,	// (0x0004b339) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x20ce,	// (0x0004b339) list_single_fs_bigclock_indicator_pane_g1

0x20ec,	// (0x0004b357) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x20ec,	// (0x0004b357) list_single_fs_bigclock_indicator_pane_g2

0x2106,	// (0x0004b371) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2106,	// (0x0004b371) list_single_fs_bigclock_indicator_pane_g3

0x2120,	// (0x0004b38b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2120,	// (0x0004b38b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x00058f02) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x00058f02) list_single_fs_bigclock_indicator_pane_g

0x2146,	// (0x0004b3b1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2146,	// (0x0004b3b1) list_single_fs_bigclock_indicator_pane_t1

0x216e,	// (0x0004b3d9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x216e,	// (0x0004b3d9) list_single_fs_bigclock_indicator_pane_t2

0x2196,	// (0x0004b401) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x2196,	// (0x0004b401) list_single_fs_bigclock_indicator_pane_t3

0x21be,	// (0x0004b429) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x21be,	// (0x0004b429) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x00058f0d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x00058f0d) list_single_fs_bigclock_indicator_pane_t

0x2bd1,	// (0x0004be3c) image3_infobar_fav_pane_ParamLimits

0x2bd1,	// (0x0004be3c) image3_infobar_fav_pane

0x2be1,	// (0x0004be4c) image3_infobar_loc_pane_ParamLimits

0x2be1,	// (0x0004be4c) image3_infobar_loc_pane

0x2bf5,	// (0x0004be60) image3_infobar_time_pane_ParamLimits

0x2bf5,	// (0x0004be60) image3_infobar_time_pane

0xee36,	// (0x000580a1) image3_infobar_time_pane_g1

0x2c05,	// (0x0004be70) image3_infobar_time_pane_t1

0xee36,	// (0x000580a1) image3_infobar_loc_pane_g1

0x2c13,	// (0x0004be7e) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x000590d4) image3_infobar_loc_pane_g

0x2c1b,	// (0x0004be86) image3_infobar_loc_pane_t1

0xee36,	// (0x000580a1) image3_infobar_fav_pane_g1

0x2c29,	// (0x0004be94) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x000590d9) image3_infobar_fav_pane_g

0x2c31,	// (0x0004be9c) fs_bigclock_status_battery_pane

0x2c3a,	// (0x0004bea5) fs_bigclock_status_signal_pane

0x2c43,	// (0x0004beae) fs_bigclock_status_title_pane

0x2c4c,	// (0x0004beb7) fs_bigclock_status_signal_pane_g1

0x2c55,	// (0x0004bec0) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x000590de) fs_bigclock_status_signal_pane_g

0x2c5d,	// (0x0004bec8) fs_bigclock_status_battery_pane_g1

0x2c66,	// (0x0004bed1) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x000590e3) fs_bigclock_status_battery_pane_g

0x2c6e,	// (0x0004bed9) fs_bigclock_status_title_pane_t1

0xee36,	// (0x000580a1) main_fs_bigclock_clock_pane_g1

0x2c7c,	// (0x0004bee7) main_fs_bigclock_clock_pane_g2

0x2c7c,	// (0x0004bee7) main_fs_bigclock_clock_pane_g3

0x2c7c,	// (0x0004bee7) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x000590e8) main_fs_bigclock_clock_pane_g

0x2c84,	// (0x0004beef) main_fs_bigclock_clock_pane_t1

0x2c92,	// (0x0004befd) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x000590f1) main_fs_bigclock_clock_pane_t

0x2ca1,	// (0x0004bf0c) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2ca1,	// (0x0004bf0c) list_single_fs_bigclock_indicator_pane

0xc68e,	// (0x000558f9) list_single_fs_bigclock_pane_ParamLimits

0xc68e,	// (0x000558f9) list_single_fs_bigclock_pane

0x2cbb,	// (0x0004bf26) main_fs_bigclock_indicator_pane_t1

0x2cca,	// (0x0004bf35) list_single_fs_bigclock_pane_g1

0x2cd2,	// (0x0004bf3d) list_single_fs_bigclock_pane_t1

0xee36,	// (0x000580a1) main_fs_bigclock_swipe_pane_g1

0x2d10,	// (0x0004bf7b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x00059102) main_fs_bigclock_swipe_pane_g

0x2d18,	// (0x0004bf83) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x2d18,	// (0x0004bf83) main_fs_bigclock_swipe_pane_t1

0x6d75,	// (0x0004ffe0) call_type_pane_ParamLimits

0x42b0,	// (0x0004d51b) main_btmg_pane

0x298f,	// (0x0004bbfa) list_single_cale_mrui_row_pane_g2_ParamLimits

0x298f,	// (0x0004bbfa) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x00059075) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x00059075) list_single_cale_mrui_row_pane_g

0x2ae0,	// (0x0004bd4b) list_recal_vselct_arw_lo_pane

0x2ae8,	// (0x0004bd53) list_recal_vselct_arw_up_pane

0x1755,	// (0x0004a9c0) list_recal_vselct_pane

0x2d35,	// (0x0004bfa0) btmg_button_pane

0xc6f2,	// (0x0005595d) main_btmg_pane_g1

0x42b0,	// (0x0004d51b) bg_button_pane_cp044

0x2d3f,	// (0x0004bfaa) btmg_button_pane_t1

0xe9d7,	// (0x00057c42) aid_listscroll_gen

0xe9ed,	// (0x00057c58) main_cntbar_detail_pane

0x26b5,	// (0x0004b920) list_cmail_folder_pane

0x26c5,	// (0x0004b930) sp_fs_scroll_pane_cp03_ParamLimits

0xc6fa,	// (0x00055965) list_single_fs_dyc_pane_cp01_ParamLimits

0xc6fa,	// (0x00055965) list_single_fs_dyc_pane_cp01

0x2d4d,	// (0x0004bfb8) aid_size_cmail_indent

0x2d56,	// (0x0004bfc1) list_single_dyc_row_pane_cp01

0xc74b,	// (0x000559b6) cntbar_detail_list_pane_ParamLimits

0xc74b,	// (0x000559b6) cntbar_detail_list_pane

0xc785,	// (0x000559f0) main_cntbar_detail_cont_pane_ParamLimits

0xc785,	// (0x000559f0) main_cntbar_detail_cont_pane

0x6d0f,	// (0x0004ff7a) scroll_pane_cp032_ParamLimits

0x6d0f,	// (0x0004ff7a) scroll_pane_cp032

0xc791,	// (0x000559fc) cntbar_detail_list_event_pane_ParamLimits

0xc791,	// (0x000559fc) cntbar_detail_list_event_pane

0xc757,	// (0x000559c2) cntbar_detail_list_shct_pane

0x6232,	// (0x0004f49d) aid_list_gen

0x2d5f,	// (0x0004bfca) aid_scroll

0x2d68,	// (0x0004bfd3) aid_size_touch_scroll_bar

0xc7a5,	// (0x00055a10) aid_list_double

0x2d71,	// (0x0004bfdc) aid_list_single

0xc7ae,	// (0x00055a19) aid_list_single_lg

0x2d83,	// (0x0004bfee) aid_list_z_g_a_sm

0x2d8b,	// (0x0004bff6) aid_list_z_g_d

0x2d93,	// (0x0004bffe) aid_txt_z_prm

0xc7b7,	// (0x00055a22) aid_txt_z_prm_cp01

0xc7c5,	// (0x00055a30) aid_txt_z_sec

0xc7d3,	// (0x00055a3e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xc7d3,	// (0x00055a3e) main_cntbar_detail_cont_pane_g1

0xc7e0,	// (0x00055a4b) main_cntbar_detail_cont_pane_g2_ParamLimits

0xc7e0,	// (0x00055a4b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x00059107) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x00059107) main_cntbar_detail_cont_pane_g

0x2da1,	// (0x0004c00c) main_cntbar_detail_cont_pane_t1

0x2daf,	// (0x0004c01a) main_cntbar_detail_cont_pane_t2

0x2dbd,	// (0x0004c028) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x0005910c) main_cntbar_detail_cont_pane_t

0xc7ec,	// (0x00055a57) cell_cntbar_detail_list_shct_pane_ParamLimits

0xc7ec,	// (0x00055a57) cell_cntbar_detail_list_shct_pane

0x2dcb,	// (0x0004c036) cntbar_detail_list_shct_pane_g1

0x2dd4,	// (0x0004c03f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x00059113) cntbar_detail_list_shct_pane_g

0xc800,	// (0x00055a6b) cntbar_detail_list_event_pane_g1_ParamLimits

0xc800,	// (0x00055a6b) cntbar_detail_list_event_pane_g1

0xc80c,	// (0x00055a77) cntbar_detail_list_event_pane_g2_ParamLimits

0xc80c,	// (0x00055a77) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x00059118) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x00059118) cntbar_detail_list_event_pane_g

0xc878,	// (0x00055ae3) cntbar_detail_list_event_pane_t1_ParamLimits

0xc878,	// (0x00055ae3) cntbar_detail_list_event_pane_t1

0xc88d,	// (0x00055af8) cntbar_detail_list_event_pane_t2_ParamLimits

0xc88d,	// (0x00055af8) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x00059125) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x00059125) cntbar_detail_list_event_pane_t

0xee36,	// (0x000580a1) cell_cntbar_detail_list_shct_pane_g1

0x70ec,	// (0x00050357) navi_pane_mv_g3

0xe9ed,	// (0x00057c58) main_cntbar_detail_pane_ParamLimits

0x42b0,	// (0x0004d51b) main_notif_wgt_pane

0x97b3,	// (0x00052a1e) aid_tch_main_mp4_pane_g4

0x99e8,	// (0x00052c53) popup_slider_window_cp02

0x2ad7,	// (0x0004bd42) list_recal_day_event_pane

0xc72b,	// (0x00055996) cntbar_detail_btn_pane_ParamLimits

0xc72b,	// (0x00055996) cntbar_detail_btn_pane

0xc73b,	// (0x000559a6) cntbar_detail_btn_pane_cp01_ParamLimits

0xc73b,	// (0x000559a6) cntbar_detail_btn_pane_cp01

0xc757,	// (0x000559c2) cntbar_detail_list_shct_pane_ParamLimits

0xc763,	// (0x000559ce) cntbar_detail_pane_g1_ParamLimits

0xc763,	// (0x000559ce) cntbar_detail_pane_g1

0xc76f,	// (0x000559da) cntbar_detail_pane_t1_ParamLimits

0xc76f,	// (0x000559da) cntbar_detail_pane_t1

0xc818,	// (0x00055a83) cntbar_detail_list_event_pane_g3_ParamLimits

0xc818,	// (0x00055a83) cntbar_detail_list_event_pane_g3

0xc830,	// (0x00055a9b) cntbar_detail_list_event_pane_g4_ParamLimits

0xc830,	// (0x00055a9b) cntbar_detail_list_event_pane_g4

0xc848,	// (0x00055ab3) cntbar_detail_list_event_pane_g5_ParamLimits

0xc848,	// (0x00055ab3) cntbar_detail_list_event_pane_g5

0xc860,	// (0x00055acb) cntbar_detail_list_event_pane_g6_ParamLimits

0xc860,	// (0x00055acb) cntbar_detail_list_event_pane_g6

0xc8a2,	// (0x00055b0d) cntbar_detail_list_event_pane_t3_ParamLimits

0xc8a2,	// (0x00055b0d) cntbar_detail_list_event_pane_t3

0xc8b4,	// (0x00055b1f) popup_notif_wgt_window_ParamLimits

0xc8b4,	// (0x00055b1f) popup_notif_wgt_window

0xc8c4,	// (0x00055b2f) popup_submenu_window_cp01_ParamLimits

0xc8c4,	// (0x00055b2f) popup_submenu_window_cp01

0xd5e0,	// (0x0005684b) bg_popup_window_pane_cp10

0x2ddd,	// (0x0004c048) listscroll_notif_wgt_pane

0x2de7,	// (0x0004c052) list_notif_wgt_window

0x2df0,	// (0x0004c05b) scroll_pane_cp033

0x2df9,	// (0x0004c064) list_notif_wgt_row_pane_ParamLimits

0x2df9,	// (0x0004c064) list_notif_wgt_row_pane

0x2e0d,	// (0x0004c078) aid_size_list_notif_wgt_del

0x2e16,	// (0x0004c081) list_notif_wgt_row_pane_g1

0x2e1e,	// (0x0004c089) list_notif_wgt_row_pane_g2

0x2e26,	// (0x0004c091) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x0005912c) list_notif_wgt_row_pane_g

0x2e2f,	// (0x0004c09a) list_notif_wgt_row_pane_t1

0x2e3d,	// (0x0004c0a8) list_notif_wgt_row_pane_t2

0x2e4b,	// (0x0004c0b6) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x00059133) list_notif_wgt_row_pane_t

0x143b,	// (0x0004a6a6) list_recal_day_event_pane_g1

0x2e59,	// (0x0004c0c4) list_recal_day_event_pane_t1

0x42b0,	// (0x0004d51b) bg_button_pane_cp045

0x2e68,	// (0x0004c0d3) cntbar_detail_btn_pane_t1

0xe9df,	// (0x00057c4a) main_callh_pane_ParamLimits

0xe9df,	// (0x00057c4a) main_callh_pane

0x42b0,	// (0x0004d51b) main_coverflow0_pane

0x42b0,	// (0x0004d51b) main_wgtman_pane

0xba27,	// (0x00054c92) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xba27,	// (0x00054c92) main_fs_bigclock_unlock_btn_pane

0x268f,	// (0x0004b8fa) bg_button_pane_cp16

0x269f,	// (0x0004b90a) cell_tport_appsw_pane_g3

0xc8d2,	// (0x00055b3d) cf0_flow_pane_ParamLimits

0xc8d2,	// (0x00055b3d) cf0_flow_pane

0x2e76,	// (0x0004c0e1) listscroll_cf0_pane

0x2e7f,	// (0x0004c0ea) main_cf0_pane_g1

0xc8e1,	// (0x00055b4c) main_cf0_pane_t1_ParamLimits

0xc8e1,	// (0x00055b4c) main_cf0_pane_t1

0xc8f5,	// (0x00055b60) main_cf0_pane_t2_ParamLimits

0xc8f5,	// (0x00055b60) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0005913a) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0005913a) main_cf0_pane_t

0x2e89,	// (0x0004c0f4) scroll_pane_cp11

0xc909,	// (0x00055b74) cf0_flow_pane_g1

0xc911,	// (0x00055b7c) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x0005913f) cf0_flow_pane_g

0xc919,	// (0x00055b84) cf0_flow_pane_t1

0x42b0,	// (0x0004d51b) main_call6_pane

0x42b0,	// (0x0004d51b) main_calllock_pane

0xc927,	// (0x00055b92) call6_btn_grp_pane_ParamLimits

0xc927,	// (0x00055b92) call6_btn_grp_pane

0xc936,	// (0x00055ba1) call6_pane_g1_ParamLimits

0xc936,	// (0x00055ba1) call6_pane_g1

0xc945,	// (0x00055bb0) popup_call6_1st_window_ParamLimits

0xc945,	// (0x00055bb0) popup_call6_1st_window

0xc953,	// (0x00055bbe) popup_call6_2nd_window_ParamLimits

0xc953,	// (0x00055bbe) popup_call6_2nd_window

0xc961,	// (0x00055bcc) cell_call6_btn_pane_ParamLimits

0xc961,	// (0x00055bcc) cell_call6_btn_pane

0xd5e0,	// (0x0005684b) bg_popup_call2_in_pane_cp03

0x2e94,	// (0x0004c0ff) popup_call6_1st_window_g1

0x2e9c,	// (0x0004c107) popup_call6_1st_window_g2

0x2ea4,	// (0x0004c10f) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00059144) popup_call6_1st_window_g

0x2eac,	// (0x0004c117) popup_call6_1st_window_t1

0x2ebb,	// (0x0004c126) popup_call6_1st_window_t2

0x2ecb,	// (0x0004c136) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0005914b) popup_call6_1st_window_t

0xd5e0,	// (0x0005684b) bg_popup_call2_in_pane_cp04

0x2e94,	// (0x0004c0ff) popup_call6_2nd_window_g1

0x2e9c,	// (0x0004c107) popup_call6_2nd_window_g2

0x2ea4,	// (0x0004c10f) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00059144) popup_call6_2nd_window_g

0x2eac,	// (0x0004c117) popup_call6_2nd_window_t1

0x42b0,	// (0x0004d51b) bg_button_pane_cp15

0x2edb,	// (0x0004c146) cell_call6_btn_pane_g1

0x2ee4,	// (0x0004c14f) cell_call6_btn_pane_t1

0xc970,	// (0x00055bdb) listscroll_wgtman_pane_ParamLimits

0xc970,	// (0x00055bdb) listscroll_wgtman_pane

0xc98e,	// (0x00055bf9) wgtman_btn_pane_ParamLimits

0xc98e,	// (0x00055bf9) wgtman_btn_pane

0xd493,	// (0x000566fe) aid_scroll_copy1

0x2ef3,	// (0x0004c15e) list_wgtman_pane

0xc9c3,	// (0x00055c2e) wgtman_btn_pane_g1_ParamLimits

0xc9c3,	// (0x00055c2e) wgtman_btn_pane_g1

0xc9eb,	// (0x00055c56) wgtman_btn_pane_t1_ParamLimits

0xc9eb,	// (0x00055c56) wgtman_btn_pane_t1

0x2efd,	// (0x0004c168) wgtman_btn_pane_t2_ParamLimits

0x2efd,	// (0x0004c168) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x00059152) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x00059152) wgtman_btn_pane_t

0xca22,	// (0x00055c8d) listrow_wgtman_pane_ParamLimits

0xca22,	// (0x00055c8d) listrow_wgtman_pane

0xca3e,	// (0x00055ca9) listrow_wgtman_pane_g1

0xca47,	// (0x00055cb2) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x00059157) listrow_wgtman_pane_g

0xca51,	// (0x00055cbc) listrow_wgtman_pane_t1

0xca5f,	// (0x00055cca) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x0005915c) listrow_wgtman_pane_t

0xca6d,	// (0x00055cd8) wait_bar_pane_cp09

0x2f14,	// (0x0004c17f) main_calllock_btn_pane

0x2f1e,	// (0x0004c189) main_calllock_pane_g1

0x42b0,	// (0x0004d51b) bg_button_pane_cp17

0x2f29,	// (0x0004c194) main_calllock_btn_pane_g1

0x2f32,	// (0x0004c19d) main_calllock_btn_pane_t1

0x42b0,	// (0x0004d51b) main_dialer3_pane

0x42b0,	// (0x0004d51b) main_fmrd2_pane

0xee36,	// (0x000580a1) main_fs_bigclock_unlock_btn_pane_g1

0x2f49,	// (0x0004c1b4) main_fs_bigclock_unlock_btn_pane_t1

0xca75,	// (0x00055ce0) area_fmrd2_info_pane_ParamLimits

0xca75,	// (0x00055ce0) area_fmrd2_info_pane

0xca83,	// (0x00055cee) area_fmrd2_visual_pane_ParamLimits

0xca83,	// (0x00055cee) area_fmrd2_visual_pane

0xca91,	// (0x00055cfc) fmrd2_indi_pane_ParamLimits

0xca91,	// (0x00055cfc) fmrd2_indi_pane

0xca9e,	// (0x00055d09) area_fmrd2_visual_pane_g1

0xcaa6,	// (0x00055d11) area_fmrd2_visual_pane_t1

0xcab6,	// (0x00055d21) area_fmrd2_visual_pane_t2

0xcac6,	// (0x00055d31) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x00059166) area_fmrd2_visual_pane_t

0xcad6,	// (0x00055d41) area_fmrd2_info_pane_g1

0xcade,	// (0x00055d49) area_fmrd2_info_pane_t1

0xcaee,	// (0x00055d59) area_fmrd2_info_pane_t2

0xcafe,	// (0x00055d69) area_fmrd2_info_pane_t3

0xcb0e,	// (0x00055d79) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x0005916d) area_fmrd2_info_pane_t

0xcb1c,	// (0x00055d87) fmrd2_indi_pane_t1

0xcb2c,	// (0x00055d97) fmrd2_indi_pane_t2

0xcb3c,	// (0x00055da7) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x00059176) fmrd2_indi_pane_t

0x212f,	// (0x0004b39a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x212f,	// (0x0004b39a) list_single_fs_bigclock_indicator_pane_g5

0x21d3,	// (0x0004b43e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x21d3,	// (0x0004b43e) list_single_fs_bigclock_indicator_pane_t5

0xc31f,	// (0x0005558a) aid_cell_bcale_month_pane_ParamLimits

0xc31f,	// (0x0005558a) aid_cell_bcale_month_pane

0xc32b,	// (0x00055596) bcale_month_pane_ParamLimits

0xc32b,	// (0x00055596) bcale_month_pane

0xc33b,	// (0x000555a6) bcale_preview_pane_ParamLimits

0xc33b,	// (0x000555a6) bcale_preview_pane

0x2cd2,	// (0x0004bf3d) list_single_fs_bigclock_pane_t1_ParamLimits

0x2cec,	// (0x0004bf57) list_single_fs_bigclock_pane_t2_ParamLimits

0x2cec,	// (0x0004bf57) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x000590fd) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x000590fd) list_single_fs_bigclock_pane_t

0x2f41,	// (0x0004c1ac) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x00059161) main_fs_bigclock_unlock_btn_pane_g

0xcb4c,	// (0x00055db7) aid_dia3_key_size_ParamLimits

0xcb4c,	// (0x00055db7) aid_dia3_key_size

0xcb58,	// (0x00055dc3) aid_dia3_listrow_size_ParamLimits

0xcb58,	// (0x00055dc3) aid_dia3_listrow_size

0xcb68,	// (0x00055dd3) dia3_keypad_fun_pane_ParamLimits

0xcb68,	// (0x00055dd3) dia3_keypad_fun_pane

0xcb7a,	// (0x00055de5) dia3_keypad_num_pane_ParamLimits

0xcb7a,	// (0x00055de5) dia3_keypad_num_pane

0xcb8c,	// (0x00055df7) dia3_listscroll_pane_ParamLimits

0xcb8c,	// (0x00055df7) dia3_listscroll_pane

0xcb9a,	// (0x00055e05) dia3_numentry_pane_ParamLimits

0xcb9a,	// (0x00055e05) dia3_numentry_pane

0x2f57,	// (0x0004c1c2) dia3_list_pane

0x2f62,	// (0x0004c1cd) scroll_pane_cp12

0x42b0,	// (0x0004d51b) bg_dia3_numentry_pane

0xcba8,	// (0x00055e13) dia3_numentry_pane_t1

0xcbb7,	// (0x00055e22) cell_dia3_key_num_pane

0xcbbf,	// (0x00055e2a) cell_dia3_key0_fun_pane_ParamLimits

0xcbbf,	// (0x00055e2a) cell_dia3_key0_fun_pane

0xcbcc,	// (0x00055e37) cell_dia3_key1_fun_pane_ParamLimits

0xcbcc,	// (0x00055e37) cell_dia3_key1_fun_pane

0xcbd9,	// (0x00055e44) dia3_listrow_pane

0x1e4d,	// (0x0004b0b8) bg_dia3_numentry_pane_g1

0x42b0,	// (0x0004d51b) bg_button_pane_cp21

0x2f6d,	// (0x0004c1d8) cell_dia3_key_num_pane_t1

0x2f7b,	// (0x0004c1e6) cell_dia3_key_num_pane_t2

0x2f8a,	// (0x0004c1f5) cell_dia3_key_num_pane_t3

0x2f99,	// (0x0004c204) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x0005917d) cell_dia3_key_num_pane_t

0x42b0,	// (0x0004d51b) bg_button_pane_cp19

0xcbe6,	// (0x00055e51) cell_dia3_key0_fun_pane_g1

0x42b0,	// (0x0004d51b) bg_button_pane_cp20

0xcbee,	// (0x00055e59) cell_dia3_key1_fun_pane_g1

0xcbf6,	// (0x00055e61) area_left_week_number_pane

0xcbff,	// (0x00055e6a) area_top_day_name_pane

0xcc08,	// (0x00055e73) frame_month_view_pane

0xcc12,	// (0x00055e7d) grid_month_view_pane

0xcc1c,	// (0x00055e87) cell_top_day_name_pane_ParamLimits

0xcc1c,	// (0x00055e87) cell_top_day_name_pane

0xcc36,	// (0x00055ea1) cell_area_left_week_number_pane_ParamLimits

0xcc36,	// (0x00055ea1) cell_area_left_week_number_pane

0xcc4a,	// (0x00055eb5) cell_month_view_pane_ParamLimits

0xcc4a,	// (0x00055eb5) cell_month_view_pane

0x2fa8,	// (0x0004c213) frm_month_g1

0xcc67,	// (0x00055ed2) frm_month_g2

0xcc71,	// (0x00055edc) frm_month_g3

0xcc7b,	// (0x00055ee6) frm_month_g4

0xcc85,	// (0x00055ef0) frm_month_g5

0xcc8f,	// (0x00055efa) frm_month_g6

0xcc99,	// (0x00055f04) frm_month_g7

0x2fb1,	// (0x0004c21c) frm_month_g8

0xcca3,	// (0x00055f0e) frm_month_g9

0xccac,	// (0x00055f17) frm_month_g10

0xccb5,	// (0x00055f20) frm_month_g11

0xccbe,	// (0x00055f29) frm_month_g12

0xccc7,	// (0x00055f32) frm_month_g13

0xccd0,	// (0x00055f3b) frm_month_g14

0xccd9,	// (0x00055f44) frm_month_g15

0xcce4,	// (0x00055f4f) frm_month_g16

0x000f,

0xff1b,	// (0x00059186) frm_month_g

0xccef,	// (0x00055f5a) cell_top_day_name_pane_t1

0xccfe,	// (0x00055f69) cell_area_left_week_number_pane_g1

0xccef,	// (0x00055f5a) cell_area_left_week_number_pane_t1

0xee36,	// (0x000580a1) cell_month_view_pane_g1

0xcd06,	// (0x00055f71) cell_month_view_pane_t1

0x42b0,	// (0x0004d51b) main_fps_pane

0x2409,	// (0x0004b674) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2409,	// (0x0004b674) cmail_ddmenu_btn02_pane_cp1

0x2425,	// (0x0004b690) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2425,	// (0x0004b690) cmail_ddmenu_btn02_pane_cp2

0xc5fa,	// (0x00055865) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xc5fa,	// (0x00055865) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x000590ae) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x000590ae) cmail_ddmenu_btn02_pane_g

0xc618,	// (0x00055883) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xc618,	// (0x00055883) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x000590b3) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x000590b3) cmail_ddmenu_btn02_pane_t

0xcd15,	// (0x00055f80) fps_text_pane_ParamLimits

0xcd15,	// (0x00055f80) fps_text_pane

0xcd22,	// (0x00055f8d) main_fps_pane_g1_ParamLimits

0xcd22,	// (0x00055f8d) main_fps_pane_g1

0xcd30,	// (0x00055f9b) wait_bar_pane_cp010_ParamLimits

0xcd30,	// (0x00055f9b) wait_bar_pane_cp010

0xcd3c,	// (0x00055fa7) fps_text_pane_t1_ParamLimits

0xcd3c,	// (0x00055fa7) fps_text_pane_t1

0x9dce,	// (0x00053039) cam4_image_uncrop_pane_g1

0x9dd7,	// (0x00053042) cam4_image_uncrop_pane_g2

0x9de0,	// (0x0005304b) cam4_image_uncrop_pane_g3

0x2fba,	// (0x0004c225) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x00058b87) cam4_image_uncrop_pane_g

0xcbd9,	// (0x00055e44) dia3_listrow_pane_ParamLimits

0x42b0,	// (0x0004d51b) main_phob2_pane

0xc13e,	// (0x000553a9) cell_tport_appsw_pane_cp02_ParamLimits

0xc13e,	// (0x000553a9) cell_tport_appsw_pane_cp02

0xc14d,	// (0x000553b8) cell_tport_appsw_pane_cp03_ParamLimits

0xc14d,	// (0x000553b8) cell_tport_appsw_pane_cp03

0x42b0,	// (0x0004d51b) phob2_contact_card_pane

0x42b0,	// (0x0004d51b) phob2_listscroll_pane

0xcd55,	// (0x00055fc0) phob2_list_pane

0xcd5d,	// (0x00055fc8) scroll_pane_cp034

0xcd65,	// (0x00055fd0) phob2_cc_data_pane_ParamLimits

0xcd65,	// (0x00055fd0) phob2_cc_data_pane

0xcd7f,	// (0x00055fea) phob2_cc_listscroll_pane_ParamLimits

0xcd7f,	// (0x00055fea) phob2_cc_listscroll_pane

0xcd99,	// (0x00056004) list_double_large_graphic_phob2_pane_ParamLimits

0xcd99,	// (0x00056004) list_double_large_graphic_phob2_pane

0xcdbc,	// (0x00056027) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xcdbc,	// (0x00056027) list_double_large_graphic_phob2_pane_g1

0xcdc9,	// (0x00056034) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xcdc9,	// (0x00056034) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x000591a7) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x000591a7) list_double_large_graphic_phob2_pane_g

0xcdd5,	// (0x00056040) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xcdd5,	// (0x00056040) list_double_large_graphic_phob2_pane_t1

0xcdea,	// (0x00056055) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xcdea,	// (0x00056055) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x000591ac) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x000591ac) list_double_large_graphic_phob2_pane_t

0x42b0,	// (0x0004d51b) list_highlight_pane_cp024

0xcdfc,	// (0x00056067) phob2_cc_button_pane

0xce04,	// (0x0005606f) phob2_cc_data_pane_g1_ParamLimits

0xce04,	// (0x0005606f) phob2_cc_data_pane_g1

0xce10,	// (0x0005607b) phob2_cc_data_pane_g2_ParamLimits

0xce10,	// (0x0005607b) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x000591b1) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x000591b1) phob2_cc_data_pane_g

0xce1c,	// (0x00056087) phob2_cc_data_pane_t1_ParamLimits

0xce1c,	// (0x00056087) phob2_cc_data_pane_t1

0xce2e,	// (0x00056099) phob2_cc_data_pane_t2_ParamLimits

0xce2e,	// (0x00056099) phob2_cc_data_pane_t2

0xce40,	// (0x000560ab) phob2_cc_data_pane_t3_ParamLimits

0xce40,	// (0x000560ab) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x000591b6) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x000591b6) phob2_cc_data_pane_t

0xce52,	// (0x000560bd) phob2_cc_list_pane_ParamLimits

0xce52,	// (0x000560bd) phob2_cc_list_pane

0xce5e,	// (0x000560c9) scroll_pane_cp035_ParamLimits

0xce5e,	// (0x000560c9) scroll_pane_cp035

0xe9ed,	// (0x00057c58) bg_button_pane_cp033

0xce6a,	// (0x000560d5) phob2_cc_button_pane_g1

0xce76,	// (0x000560e1) phob2_cc_button_pane_t1

0xce8b,	// (0x000560f6) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x000591bd) phob2_cc_button_pane_t

0xce9d,	// (0x00056108) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xce9d,	// (0x00056108) list_double_large_graphic_phob2_cc_pane

0xcecd,	// (0x00056138) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xcecd,	// (0x00056138) list_double_large_graphic_phob2_cc_pane_g1

0xcede,	// (0x00056149) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xcede,	// (0x00056149) list_double_large_graphic_phob2_cc_pane_g2

0xceed,	// (0x00056158) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xceed,	// (0x00056158) list_double_large_graphic_phob2_cc_pane_g3

0xcefc,	// (0x00056167) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xcefc,	// (0x00056167) list_double_large_graphic_phob2_cc_pane_g4

0xcf0d,	// (0x00056178) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xcf0d,	// (0x00056178) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x000591c2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x000591c2) list_double_large_graphic_phob2_cc_pane_g

0xcf1c,	// (0x00056187) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xcf1c,	// (0x00056187) list_double_large_graphic_phob2_cc_pane_t1

0xcf45,	// (0x000561b0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xcf45,	// (0x000561b0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x000591cd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x000591cd) list_double_large_graphic_phob2_cc_pane_t

0xcf6e,	// (0x000561d9) list_highlight_pane_cp025_ParamLimits

0xcf6e,	// (0x000561d9) list_highlight_pane_cp025

0xe9ed,	// (0x00057c58) bg_button_pane_cp033_ParamLimits

0xce6a,	// (0x000560d5) phob2_cc_button_pane_g1_ParamLimits

0xce76,	// (0x000560e1) phob2_cc_button_pane_t1_ParamLimits

0xce8b,	// (0x000560f6) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x000591bd) phob2_cc_button_pane_t_ParamLimits

0x4565,	// (0x0004d7d0) popup_wgtman_window

0x12f0,	// (0x0004a55b) scroll_pane_cp038

0xc9ab,	// (0x00055c16) wgtman_btn_pane_cp_01_ParamLimits

0xc9ab,	// (0x00055c16) wgtman_btn_pane_cp_01

0xcf7c,	// (0x000561e7) wgtman_content_pane

0xcf85,	// (0x000561f0) wgtman_heading_pane

0x42b0,	// (0x0004d51b) bg_heading_pane_cp02

0xcf8e,	// (0x000561f9) wgtman_heading_pane_g1

0xcf96,	// (0x00056201) wgtman_heading_pane_t1

0xcfa4,	// (0x0005620f) scroll_pane_cp036

0xcfac,	// (0x00056217) wgtman_list_pane

0xcfb4,	// (0x0005621f) wgtman_list_pane_t1_ParamLimits

0xcfb4,	// (0x0005621f) wgtman_list_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
