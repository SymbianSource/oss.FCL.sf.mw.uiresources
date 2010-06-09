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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0002dbc1 };

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
0x1c1a,	// (0x0002f7db) Screen

0x1c26,	// (0x0002f7e7) application_window

0x1c56,	// (0x0002f817) area_bottom_pane_ParamLimits

0x1c56,	// (0x0002f817) area_bottom_pane

0x0391,	// (0x0002df52) area_top_pane_ParamLimits

0x0391,	// (0x0002df52) area_top_pane

0x1cb3,	// (0x0002f874) call_video_uplink_pane_ParamLimits

0x1cb3,	// (0x0002f874) call_video_uplink_pane

0x041f,	// (0x0002dfe0) main_pane_ParamLimits

0x041f,	// (0x0002dfe0) main_pane

0xc3cf,	// (0x00039f90) context_pane

0x4b99,	// (0x0003275a) navi_pane

0x4bcb,	// (0x0003278c) popup_cale_events_window_ParamLimits

0x4bcb,	// (0x0003278c) popup_cale_events_window

0xc3e2,	// (0x00039fa3) popup_mup_playback_window

0x4be3,	// (0x000327a4) signal_pane

0xa324,	// (0x00037ee5) main_browser_pane

0xa509,	// (0x000380ca) main_burst_pane

0x0817,	// (0x0002e3d8) main_calc_pane

0xc3b5,	// (0x00039f76) main_cale_day_pane

0x082b,	// (0x0002e3ec) main_cale_month_pane

0xc3b5,	// (0x00039f76) main_cale_week_pane

0xa509,	// (0x000380ca) main_call_pane

0x9ff8,	// (0x00037bb9) main_call_poc_pane

0xa509,	// (0x000380ca) main_camera_pane

0xa509,	// (0x000380ca) main_chi_dic_pane

0xad18,	// (0x000388d9) main_clock_pane

0x9ff8,	// (0x00037bb9) main_fmradio_pane

0xa509,	// (0x000380ca) main_graph_messa_pane

0x9ff8,	// (0x00037bb9) main_help_pane

0xa324,	// (0x00037ee5) main_im_pane

0xa253,	// (0x00037e14) main_image_pane_ParamLimits

0xa253,	// (0x00037e14) main_image_pane

0x9ff8,	// (0x00037bb9) main_location2_pane

0xa509,	// (0x000380ca) main_location_pane

0xa253,	// (0x00037e14) main_messa_pane

0x9ff8,	// (0x00037bb9) main_mp2_pane

0xa509,	// (0x000380ca) main_mp_pane

0x9ff8,	// (0x00037bb9) main_msg_pane

0x9ff8,	// (0x00037bb9) main_mup_eq_pane

0x9ff8,	// (0x00037bb9) main_mup_pane

0xa324,	// (0x00037ee5) main_notes_pane

0x9ff8,	// (0x00037bb9) main_pec_pane

0x9ff8,	// (0x00037bb9) main_phob_pane

0x9ff8,	// (0x00037bb9) main_pinb_pane

0x9ff8,	// (0x00037bb9) main_postcard_pane

0x9ff8,	// (0x00037bb9) main_qdial_pane

0xa509,	// (0x000380ca) main_skin_pane

0x9ff8,	// (0x00037bb9) main_smil2_pane

0xa509,	// (0x000380ca) main_smil_pane

0xa509,	// (0x000380ca) main_video_pane

0xa509,	// (0x000380ca) main_video_tele_pane

0xa253,	// (0x00037e14) main_viewer_pane_ParamLimits

0xa253,	// (0x00037e14) main_viewer_pane

0xa509,	// (0x000380ca) main_vorec_pane

0x087d,	// (0x0002e43e) popup_blid_sat_info_window_ParamLimits

0x087d,	// (0x0002e43e) popup_blid_sat_info_window

0x08d5,	// (0x0002e496) popup_dyc_status_message_window_ParamLimits

0x08d5,	// (0x0002e496) popup_dyc_status_message_window

0x08ed,	// (0x0002e4ae) popup_grid_large_graphic_window_ParamLimits

0x08ed,	// (0x0002e4ae) popup_grid_large_graphic_window

0x099d,	// (0x0002e55e) popup_loc_request_window_ParamLimits

0x099d,	// (0x0002e55e) popup_loc_request_window

0x0a99,	// (0x0002e65a) popup_wml_address_window_ParamLimits

0x0a99,	// (0x0002e65a) popup_wml_address_window

0x4989,	// (0x0003254a) call_muted_g1

0x463d,	// (0x000321fe) popup_call_audio_conf_window_ParamLimits

0x463d,	// (0x000321fe) popup_call_audio_conf_window

0x499d,	// (0x0003255e) popup_call_audio_first_window_ParamLimits

0x499d,	// (0x0003255e) popup_call_audio_first_window

0x4a13,	// (0x000325d4) popup_call_audio_in_window_ParamLimits

0x4a13,	// (0x000325d4) popup_call_audio_in_window

0x4a4f,	// (0x00032610) popup_call_audio_out_window_ParamLimits

0x4a4f,	// (0x00032610) popup_call_audio_out_window

0x4a89,	// (0x0003264a) popup_call_audio_second_window_ParamLimits

0x4a89,	// (0x0003264a) popup_call_audio_second_window

0x4adf,	// (0x000326a0) popup_call_audio_wait_window_ParamLimits

0x4adf,	// (0x000326a0) popup_call_audio_wait_window

0x4b14,	// (0x000326d5) popup_number_entry_window_ParamLimits

0x4b14,	// (0x000326d5) popup_number_entry_window

0x9be5,	// (0x000377a6) bg_popup_call_pane_cp05_ParamLimits

0x9be5,	// (0x000377a6) bg_popup_call_pane_cp05

0x9c05,	// (0x000377c6) popup_number_entry_window_t1

0x9c18,	// (0x000377d9) popup_number_entry_window_t2

0x9c2a,	// (0x000377eb) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0003cc8b) popup_number_entry_window_t

0x9c3c,	// (0x000377fd) text_title_cp2

0x9c4f,	// (0x00037810) bg_popup_call_pane_cp_ParamLimits

0x9c4f,	// (0x00037810) bg_popup_call_pane_cp

0x9c5d,	// (0x0003781e) call_thumbnail_pane

0x9c65,	// (0x00037826) popup_call_audio_in_window_g1_ParamLimits

0x9c65,	// (0x00037826) popup_call_audio_in_window_g1

0x9c71,	// (0x00037832) popup_call_audio_in_window_g2_ParamLimits

0x9c71,	// (0x00037832) popup_call_audio_in_window_g2

0x9c7d,	// (0x0003783e) popup_call_audio_in_window_g3_ParamLimits

0x9c7d,	// (0x0003783e) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0003cc94) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0003cc94) popup_call_audio_in_window_g

0x9c89,	// (0x0003784a) popup_call_audio_in_window_t1_ParamLimits

0x9c89,	// (0x0003784a) popup_call_audio_in_window_t1

0x9ca5,	// (0x00037866) popup_call_audio_in_window_t2_ParamLimits

0x9ca5,	// (0x00037866) popup_call_audio_in_window_t2

0x9cc1,	// (0x00037882) popup_call_audio_in_window_t3_ParamLimits

0x9cc1,	// (0x00037882) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0003cc9b) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0003cc9b) popup_call_audio_in_window_t

0x9c4f,	// (0x00037810) bg_popup_call_pane_cp01_ParamLimits

0x9c4f,	// (0x00037810) bg_popup_call_pane_cp01

0x9c5d,	// (0x0003781e) call_thumbnail_pane_cp02

0x9cd4,	// (0x00037895) call_type_pane_cp022

0x9cdc,	// (0x0003789d) popup_call_audio_out_window_g1_ParamLimits

0x9cdc,	// (0x0003789d) popup_call_audio_out_window_g1

0x9cee,	// (0x000378af) popup_call_audio_out_window_g2_ParamLimits

0x9cee,	// (0x000378af) popup_call_audio_out_window_g2

0x9cfa,	// (0x000378bb) popup_call_audio_out_window_g3_ParamLimits

0x9cfa,	// (0x000378bb) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0003cca2) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0003cca2) popup_call_audio_out_window_g

0x9d0c,	// (0x000378cd) popup_call_audio_out_window_t1_ParamLimits

0x9d0c,	// (0x000378cd) popup_call_audio_out_window_t1

0x9d24,	// (0x000378e5) popup_call_audio_out_window_t2_ParamLimits

0x9d24,	// (0x000378e5) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0003cca9) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0003cca9) popup_call_audio_out_window_t

0x9d39,	// (0x000378fa) bg_popup_call_pane_ParamLimits

0x9d39,	// (0x000378fa) bg_popup_call_pane

0x1d2a,	// (0x0002f8eb) call_thumbnail_pane_cp_ParamLimits

0x1d2a,	// (0x0002f8eb) call_thumbnail_pane_cp

0x9dbd,	// (0x0003797e) call_type_pane_cp01_ParamLimits

0x9dbd,	// (0x0003797e) call_type_pane_cp01

0x9e01,	// (0x000379c2) popup_call_audio_first_window_g1_ParamLimits

0x9e01,	// (0x000379c2) popup_call_audio_first_window_g1

0x9e4d,	// (0x00037a0e) popup_call_audio_first_window_g2_ParamLimits

0x9e4d,	// (0x00037a0e) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0003ccae) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0003ccae) popup_call_audio_first_window_g

0x9e91,	// (0x00037a52) popup_call_audio_first_window_t1_ParamLimits

0x9e91,	// (0x00037a52) popup_call_audio_first_window_t1

0x9f3d,	// (0x00037afe) popup_call_audio_first_window_t4_ParamLimits

0x9f3d,	// (0x00037afe) popup_call_audio_first_window_t4

0x9fc9,	// (0x00037b8a) popup_call_audio_first_window_t5_ParamLimits

0x9fc9,	// (0x00037b8a) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0003ccb3) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0003ccb3) popup_call_audio_first_window_t

0x9ff8,	// (0x00037bb9) bg_popup_call_pane_cp02

0xa002,	// (0x00037bc3) call_type_pane_cp023

0xa00a,	// (0x00037bcb) popup_call_audio_wait_window_g1

0xa012,	// (0x00037bd3) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003ccba) popup_call_audio_wait_window_g

0xa01a,	// (0x00037bdb) popup_call_audio_wait_window_t3

0xa028,	// (0x00037be9) bg_popup_call_pane_cp03_ParamLimits

0xa028,	// (0x00037be9) bg_popup_call_pane_cp03

0xa088,	// (0x00037c49) call_thumbnail_pane_cp011_ParamLimits

0xa088,	// (0x00037c49) call_thumbnail_pane_cp011

0xa094,	// (0x00037c55) call_type_pane_cp034_ParamLimits

0xa094,	// (0x00037c55) call_type_pane_cp034

0xa0d0,	// (0x00037c91) popup_call_audio_second_window_g1_ParamLimits

0xa0d0,	// (0x00037c91) popup_call_audio_second_window_g1

0xa10c,	// (0x00037ccd) popup_call_audio_second_window_g2_ParamLimits

0xa10c,	// (0x00037ccd) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0003ccbf) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0003ccbf) popup_call_audio_second_window_g

0xa148,	// (0x00037d09) popup_call_audio_second_window_t1_ParamLimits

0xa148,	// (0x00037d09) popup_call_audio_second_window_t1

0xa1c9,	// (0x00037d8a) popup_call_audio_second_window_t2_ParamLimits

0xa1c9,	// (0x00037d8a) popup_call_audio_second_window_t2

0xa1ff,	// (0x00037dc0) popup_call_audio_second_window_t3_ParamLimits

0xa1ff,	// (0x00037dc0) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0003ccc4) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0003ccc4) popup_call_audio_second_window_t

0x9ff8,	// (0x00037bb9) bg_popup_call_pane_cp04

0xa235,	// (0x00037df6) list_conf_pane

0xa23d,	// (0x00037dfe) popup_call_audio_conf_window_t1

0xa24b,	// (0x00037e0c) call_thumbnail_pane_g1

0xa253,	// (0x00037e14) bg_pinb_pane_ParamLimits

0xa253,	// (0x00037e14) bg_pinb_pane

0xa261,	// (0x00037e22) find_pinb_pane

0xa26a,	// (0x00037e2b) listscroll_pinb_pane_ParamLimits

0xa26a,	// (0x00037e2b) listscroll_pinb_pane

0xa279,	// (0x00037e3a) pinb_bg_pane_g1

0x1d4e,	// (0x0002f90f) pinb_bg_pane_g2

0x1d5a,	// (0x0002f91b) pinb_bg_pane_g3

0x1d66,	// (0x0002f927) pinb_bg_pane_g4

0x1d72,	// (0x0002f933) pinb_bg_pane_g5

0x1d7e,	// (0x0002f93f) pinb_bg_pane_g6

0x1d89,	// (0x0002f94a) pinb_bg_pane_g7

0x1d94,	// (0x0002f955) pinb_bg_pane_g8

0x1d9f,	// (0x0002f960) pinb_bg_pane_g9

0x1da9,	// (0x0002f96a) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0003cccb) pinb_bg_pane_g

0x1dc6,	// (0x0002f987) grid_pinb_pane

0x1dcf,	// (0x0002f990) list_pinb_pane

0x1dd8,	// (0x0002f999) scroll_pane_cp01_ParamLimits

0x1dd8,	// (0x0002f999) scroll_pane_cp01

0xa283,	// (0x00037e44) find_pinb_pane_g1_ParamLimits

0xa283,	// (0x00037e44) find_pinb_pane_g1

0xa29b,	// (0x00037e5c) find_pinb_pane_t1

0xa2ad,	// (0x00037e6e) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0003cce5) find_pinb_pane_t

0xa2c2,	// (0x00037e83) input_focus_pane_cp01_ParamLimits

0xa2c2,	// (0x00037e83) input_focus_pane_cp01

0x1dea,	// (0x0002f9ab) cell_pinb_pane_ParamLimits

0x1dea,	// (0x0002f9ab) cell_pinb_pane

0x1e15,	// (0x0002f9d6) cell_pinb_pane_g1_ParamLimits

0x1e15,	// (0x0002f9d6) cell_pinb_pane_g1

0xa2ce,	// (0x00037e8f) cell_pinb_pane_g2_ParamLimits

0xa2ce,	// (0x00037e8f) cell_pinb_pane_g2

0xa2da,	// (0x00037e9b) cell_pinb_pane_g3_ParamLimits

0xa2da,	// (0x00037e9b) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0003ccea) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0003ccea) cell_pinb_pane_g

0x9ff8,	// (0x00037bb9) grid_highlight_pane_cp01

0x1e28,	// (0x0002f9e9) list_pinb_item_pane_ParamLimits

0x1e28,	// (0x0002f9e9) list_pinb_item_pane

0x9ff8,	// (0x00037bb9) list_highlight_pane_cp02

0x1e3b,	// (0x0002f9fc) list_pinb_item_pane_g1_ParamLimits

0x1e3b,	// (0x0002f9fc) list_pinb_item_pane_g1

0x1e48,	// (0x0002fa09) list_pinb_item_pane_g2_ParamLimits

0x1e48,	// (0x0002fa09) list_pinb_item_pane_g2

0x1e54,	// (0x0002fa15) list_pinb_item_pane_g3_ParamLimits

0x1e54,	// (0x0002fa15) list_pinb_item_pane_g3

0x1e65,	// (0x0002fa26) list_pinb_item_pane_g4_ParamLimits

0x1e65,	// (0x0002fa26) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0003ccf1) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0003ccf1) list_pinb_item_pane_g

0x1e71,	// (0x0002fa32) list_pinb_item_pane_t1_ParamLimits

0x1e71,	// (0x0002fa32) list_pinb_item_pane_t1

0x05b9,	// (0x0002e17a) calc_display_pane

0x05e1,	// (0x0002e1a2) calc_paper_pane

0x0604,	// (0x0002e1c5) grid_calc_pane

0x9ff8,	// (0x00037bb9) bg_list_pane_cp01

0x1e90,	// (0x0002fa51) clock_g1

0x1e98,	// (0x0002fa59) clock_g2

0x0001,

0xf139,	// (0x0003ccfa) clock_g

0x1ea0,	// (0x0002fa61) clock_t1_ParamLimits

0x1ea0,	// (0x0002fa61) clock_t1

0x1eb5,	// (0x0002fa76) clock_t2_ParamLimits

0x1eb5,	// (0x0002fa76) clock_t2

0x1ec7,	// (0x0002fa88) clock_t3_ParamLimits

0x1ec7,	// (0x0002fa88) clock_t3

0x1ed9,	// (0x0002fa9a) clock_t4_ParamLimits

0x1ed9,	// (0x0002fa9a) clock_t4

0x1eeb,	// (0x0002faac) clock_t5_ParamLimits

0x1eeb,	// (0x0002faac) clock_t5

0x1f00,	// (0x0002fac1) clock_t6_ParamLimits

0x1f00,	// (0x0002fac1) clock_t6

0x1f12,	// (0x0002fad3) clock_t7_ParamLimits

0x1f12,	// (0x0002fad3) clock_t7

0x1f24,	// (0x0002fae5) clock_t8_ParamLimits

0x1f24,	// (0x0002fae5) clock_t8

0x1f38,	// (0x0002faf9) clock_t9_ParamLimits

0x1f38,	// (0x0002faf9) clock_t9

0x0008,

0xf13e,	// (0x0003ccff) clock_t_ParamLimits

0xf13e,	// (0x0003ccff) clock_t

0xa2e6,	// (0x00037ea7) popup_clock_analogue_window_cp02

0xa2e6,	// (0x00037ea7) popup_clock_digital_window_cp01

0xa2ee,	// (0x00037eaf) listscroll_help_pane

0x9ff8,	// (0x00037bb9) phob_pre_status_pane

0xa2f8,	// (0x00037eb9) grid_qdial_pane

0xa253,	// (0x00037e14) listscroll_mce_pane

0xa253,	// (0x00037e14) bg_notes_pane

0xa302,	// (0x00037ec3) list_notes_pane

0x1f4c,	// (0x0002fb0d) scroll_pane_cp06

0xa310,	// (0x00037ed1) bg_calc_paper_pane

0x1f60,	// (0x0002fb21) list_calc_pane

0xa324,	// (0x00037ee5) bg_calc_display_pane

0x0632,	// (0x0002e1f3) calc_display_pane_t1

0x0644,	// (0x0002e205) calc_display_pane_t2

0x1f7a,	// (0x0002fb3b) calc_display_pane_t3

0x0002,

0xf151,	// (0x0003cd12) calc_display_pane_t

0x0656,	// (0x0002e217) cell_calc_pane_ParamLimits

0x0656,	// (0x0002e217) cell_calc_pane

0xa330,	// (0x00037ef1) bg_calc_paper_pane_g1

0xa33c,	// (0x00037efd) bg_calc_paper_pane_g2

0xa348,	// (0x00037f09) bg_calc_paper_pane_g3

0xa354,	// (0x00037f15) bg_calc_paper_pane_g4

0xa360,	// (0x00037f21) bg_calc_paper_pane_g5

0x1f8c,	// (0x0002fb4d) bg_calc_paper_pane_g6

0x1f9b,	// (0x0002fb5c) bg_calc_paper_pane_g7

0x1faa,	// (0x0002fb6b) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0003cd19) bg_calc_paper_pane_g

0x1fbd,	// (0x0002fb7e) calc_bg_paper_pane_g9

0x1fd0,	// (0x0002fb91) list_calc_item_pane_ParamLimits

0x1fd0,	// (0x0002fb91) list_calc_item_pane

0xa36c,	// (0x00037f2d) list_calc_item_pane_g1

0x1fe9,	// (0x0002fbaa) list_calc_item_pane_t1_ParamLimits

0x1fe9,	// (0x0002fbaa) list_calc_item_pane_t1

0x068d,	// (0x0002e24e) list_calc_item_pane_t2_ParamLimits

0x068d,	// (0x0002e24e) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0003cd2a) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0003cd2a) list_calc_item_pane_t

0xa379,	// (0x00037f3a) cell_calc_pane_g1

0xa383,	// (0x00037f44) grid_highlight_pane_cp02

0xa3a5,	// (0x00037f66) bg_calc_display_pane_g1

0x1ffb,	// (0x0002fbbc) bg_calc_display_pane_g2

0xa3ae,	// (0x00037f6f) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0003cd34) bg_calc_display_pane_g

0x06bf,	// (0x0002e280) cell_qdial_pane_ParamLimits

0x06bf,	// (0x0002e280) cell_qdial_pane

0x2005,	// (0x0002fbc6) cell_qdial_pane_g1_ParamLimits

0x2005,	// (0x0002fbc6) cell_qdial_pane_g1

0x201b,	// (0x0002fbdc) cell_qdial_pane_g2_ParamLimits

0x201b,	// (0x0002fbdc) cell_qdial_pane_g2

0xa3b7,	// (0x00037f78) cell_qdial_pane_g3_ParamLimits

0xa3b7,	// (0x00037f78) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0003cd3b) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0003cd3b) cell_qdial_pane_g

0x2041,	// (0x0002fc02) cell_qdial_pane_t1_ParamLimits

0x2041,	// (0x0002fc02) cell_qdial_pane_t1

0x2059,	// (0x0002fc1a) cell_qdial_pane_t2_ParamLimits

0x2059,	// (0x0002fc1a) cell_qdial_pane_t2

0x206c,	// (0x0002fc2d) cell_qdial_pane_t3_ParamLimits

0x206c,	// (0x0002fc2d) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0003cd44) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0003cd44) cell_qdial_pane_t

0x9ff8,	// (0x00037bb9) grid_highlight_pane_cp04

0xa3c3,	// (0x00037f84) thumbnail_qdial_pane_ParamLimits

0xa3c3,	// (0x00037f84) thumbnail_qdial_pane

0xa41f,	// (0x00037fe0) list_help_pane

0xa428,	// (0x00037fe9) scroll_pane_cp02

0xa71c,	// (0x000382dd) help_list_pane_t1_ParamLimits

0xa71c,	// (0x000382dd) help_list_pane_t1

0x207f,	// (0x0002fc40) bg_notes_pane_g2

0x2087,	// (0x0002fc48) bg_notes_pane_g3

0x208f,	// (0x0002fc50) notes_bg_pane_g1

0x2097,	// (0x0002fc58) notes_bg_pane_g4

0x209f,	// (0x0002fc60) notes_bg_pane_g5

0x20a7,	// (0x0002fc68) notes_bg_pane_g6

0x20af,	// (0x0002fc70) notes_bg_pane_g7

0x20b7,	// (0x0002fc78) notes_bg_pane_g8

0x20bf,	// (0x0002fc80) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0003cd62) notes_bg_pane_g

0x20c7,	// (0x0002fc88) list_notes_text_pane_ParamLimits

0x20c7,	// (0x0002fc88) list_notes_text_pane

0xa431,	// (0x00037ff2) list_notes_text_pane_g1

0xa43a,	// (0x00037ffb) list_notes_text_pane_t1

0x20dd,	// (0x0002fc9e) listscroll_cale_week_pane

0x2109,	// (0x0002fcca) bg_cale_heading_pane

0xa462,	// (0x00038023) bg_cale_pane_cp01

0x2121,	// (0x0002fce2) cale_week_corner_pane

0x2140,	// (0x0002fd01) cale_week_day_heading_pane

0x215d,	// (0x0002fd1e) cale_week_scroll_pane_g1

0x2170,	// (0x0002fd31) cale_week_scroll_pane_g2

0x2188,	// (0x0002fd49) cale_week_scroll_pane_g3

0x21a0,	// (0x0002fd61) cale_week_scroll_pane_g4

0x21b8,	// (0x0002fd79) cale_week_scroll_pane_g5

0x21d8,	// (0x0002fd99) cale_week_scroll_pane_g6

0x21f8,	// (0x0002fdb9) cale_week_scroll_pane_g7

0x2218,	// (0x0002fdd9) cale_week_scroll_pane_g8

0x223c,	// (0x0002fdfd) cale_week_scroll_pane_g9

0x2254,	// (0x0002fe15) cale_week_scroll_pane_g10

0x226c,	// (0x0002fe2d) cale_week_scroll_pane_g11

0x2284,	// (0x0002fe45) cale_week_scroll_pane_g12

0x229c,	// (0x0002fe5d) cale_week_scroll_pane_g13

0x229c,	// (0x0002fe5d) cale_week_scroll_pane_g14

0x229c,	// (0x0002fe5d) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0003cd71) cale_week_scroll_pane_g

0x22d8,	// (0x0002fe99) cale_week_time_pane

0x22fc,	// (0x0002febd) grid_cale_week_pane

0xa491,	// (0x00038052) scroll_pane_cp08

0x2322,	// (0x0002fee3) cell_cale_week_pane_ParamLimits

0x2322,	// (0x0002fee3) cell_cale_week_pane

0x23b0,	// (0x0002ff71) cale_week_day_heading_pane_t1

0x23da,	// (0x0002ff9b) cale_week_day_heading_pane_t2

0x2409,	// (0x0002ffca) cale_week_day_heading_pane_t3

0x2438,	// (0x0002fff9) cale_week_day_heading_pane_t4

0x2467,	// (0x00030028) cale_week_day_heading_pane_t5

0x249e,	// (0x0003005f) cale_week_day_heading_pane_t6

0x24d5,	// (0x00030096) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0003cd92) cale_week_day_heading_pane_t

0xa4ae,	// (0x0003806f) bg_cale_side_pane

0x06d3,	// (0x0002e294) cale_week_time_pane_t1

0x06ed,	// (0x0002e2ae) cale_week_time_pane_t2

0x0707,	// (0x0002e2c8) cale_week_time_pane_t3

0x0721,	// (0x0002e2e2) cale_week_time_pane_t4

0x073b,	// (0x0002e2fc) cale_week_time_pane_t5

0x0755,	// (0x0002e316) cale_week_time_pane_t6

0x076f,	// (0x0002e330) cale_week_time_pane_t7

0x0789,	// (0x0002e34a) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0003cda1) cale_week_time_pane_t

0x24ff,	// (0x000300c0) cell_cale_week_pane_g2

0x2523,	// (0x000300e4) cell_cale_week_pane_g3_ParamLimits

0x2523,	// (0x000300e4) cell_cale_week_pane_g3

0xa4bc,	// (0x0003807d) grid_highlight_pane_cp07

0xa4c4,	// (0x00038085) listscroll_gms_pane

0xa4ce,	// (0x0003808f) grid_gms_pane

0xa4d7,	// (0x00038098) listscroll_gms_pane_g1

0xa4df,	// (0x000380a0) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0003cdb2) listscroll_gms_pane_g

0x253b,	// (0x000300fc) scroll_pane_cp010

0x2546,	// (0x00030107) cell_gms_pane_ParamLimits

0x2546,	// (0x00030107) cell_gms_pane

0x2558,	// (0x00030119) cell_gms_pane_g1

0xa4e7,	// (0x000380a8) cell_gms_pane_g2

0xa4ef,	// (0x000380b0) cell_gms_pane_g3

0xa4f8,	// (0x000380b9) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0003cdb7) cell_gms_pane_g

0xa501,	// (0x000380c2) grid_highlight_pane_cp09

0x4933,	// (0x000324f4) phob_pre_status_pane_g1

0x493b,	// (0x000324fc) phob_pre_status_pane_g2

0x4943,	// (0x00032504) phob_pre_status_pane_g3

0x494b,	// (0x0003250c) phob_pre_status_pane_g4

0x0004,

0xf5f4,	// (0x0003d1b5) phob_pre_status_pane_g

0x495b,	// (0x0003251c) phob_pre_status_pane_t1

0x4969,	// (0x0003252a) phob_pre_status_pane_t2

0x4979,	// (0x0003253a) phob_pre_status_pane_t3

0x0002,

0xf5ff,	// (0x0003d1c0) phob_pre_status_pane_t

0xa509,	// (0x000380ca) bg_list_pane_cp05

0x2568,	// (0x00030129) grid_vorec_pane

0x2570,	// (0x00030131) vorec_t1

0x257e,	// (0x0003013f) vorec_t2

0x258c,	// (0x0003014d) vorec_t3

0x259a,	// (0x0003015b) vorec_t4

0x1bf4,	// (0x0002f7b5) vorec_t5

0x1c02,	// (0x0002f7c3) vorec_t6

0x0004,

0xf1ff,	// (0x0003cdc0) vorec_t

0x1c10,	// (0x0002f7d1) wait_bar_pane_cp01

0x25b6,	// (0x00030177) cell_vorec_pane_ParamLimits

0x25b6,	// (0x00030177) cell_vorec_pane

0x25c9,	// (0x0003018a) cell_vorec_pane_g1

0x9ff8,	// (0x00037bb9) grid_highlight_pane_cp05

0x25eb,	// (0x000301ac) cams_zoom_pane

0x25fa,	// (0x000301bb) image_vga_pane

0x2614,	// (0x000301d5) main_camera_pane_g1

0x2626,	// (0x000301e7) main_camera_pane_g2

0x2636,	// (0x000301f7) main_camera_pane_g3

0x2646,	// (0x00030207) main_camera_pane_g4

0x2656,	// (0x00030217) main_camera_pane_g5

0x2666,	// (0x00030227) main_camera_pane_g6

0x2676,	// (0x00030237) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0003cdcb) main_camera_pane_g

0x2686,	// (0x00030247) main_camera_pane_t1

0x269c,	// (0x0003025d) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0003cddc) main_camera_pane_t

0x26d6,	// (0x00030297) cams_zoom_pane_cp_ParamLimits

0x26d6,	// (0x00030297) cams_zoom_pane_cp

0x26fe,	// (0x000302bf) image_cif_pane_ParamLimits

0x26fe,	// (0x000302bf) image_cif_pane

0x2739,	// (0x000302fa) image_subqcif_pane

0x2741,	// (0x00030302) main_video_pane_g1_ParamLimits

0x2741,	// (0x00030302) main_video_pane_g1

0x2765,	// (0x00030326) main_video_pane_g2_ParamLimits

0x2765,	// (0x00030326) main_video_pane_g2

0x2799,	// (0x0003035a) main_video_pane_g3_ParamLimits

0x2799,	// (0x0003035a) main_video_pane_g3

0x27c7,	// (0x00030388) main_video_pane_g4_ParamLimits

0x27c7,	// (0x00030388) main_video_pane_g4

0x27f5,	// (0x000303b6) main_video_pane_g5_ParamLimits

0x27f5,	// (0x000303b6) main_video_pane_g5

0xa51d,	// (0x000380de) main_video_pane_g6_ParamLimits

0xa51d,	// (0x000380de) main_video_pane_g6

0x0006,

0xf220,	// (0x0003cde1) main_video_pane_g_ParamLimits

0xf220,	// (0x0003cde1) main_video_pane_g

0x281e,	// (0x000303df) main_video_pane_t1_ParamLimits

0x281e,	// (0x000303df) main_video_pane_t1

0xa537,	// (0x000380f8) cams_zoom_pane_g1

0xa540,	// (0x00038101) cams_zoom_pane_g2

0xa549,	// (0x0003810a) cams_zoom_pane_g3

0xa552,	// (0x00038113) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0003cdf0) cams_zoom_pane_g

0x287b,	// (0x0003043c) grid_cams_pane

0x2895,	// (0x00030456) linegrid_cams_pane

0x28a8,	// (0x00030469) cell_cams_pane_ParamLimits

0x28a8,	// (0x00030469) cell_cams_pane

0xa55b,	// (0x0003811c) cams_burst_image_pane

0xa563,	// (0x00038124) cell_cams_pane_g1

0x9ff8,	// (0x00037bb9) grid_highlight_pane_cp03

0xa379,	// (0x00037f3a) mp_bg_pane_g1

0x9ff8,	// (0x00037bb9) bg_list_pane_cp03

0xc2da,	// (0x00039e9b) bg_mp_pane

0xc2e2,	// (0x00039ea3) grid_mp_pane

0xc2ea,	// (0x00039eab) media_player_g1

0xc2f2,	// (0x00039eb3) media_player_t1

0xc300,	// (0x00039ec1) media_player_t2

0xc30e,	// (0x00039ecf) media_player_t3

0xc31c,	// (0x00039edd) media_player_t4

0xc32a,	// (0x00039eeb) media_player_t5

0xc338,	// (0x00039ef9) media_player_t6

0xc346,	// (0x00039f07) media_player_t7

0x0006,

0xf5de,	// (0x0003d19f) media_player_t

0xc354,	// (0x00039f15) wait_bar_pane_cp02

0xf5c3,	// (0x0003d184) main_usb_pane_t

0x492a,	// (0x000324eb) cell_mp_pane

0xa379,	// (0x00037f3a) cell_mp_pane_g1

0x9ff8,	// (0x00037bb9) grid_highlight_pane_cp06

0xa56b,	// (0x0003812c) grid_skin_colour_pane

0xa573,	// (0x00038134) list_highlight_pane_cp03

0x29df,	// (0x000305a0) skin_g1

0xa57b,	// (0x0003813c) skin_t1

0xa58a,	// (0x0003814b) skin_t2

0x0001,

0xf264,	// (0x0003ce25) skin_t

0x29e7,	// (0x000305a8) cell_skin_colour_pane_ParamLimits

0x29e7,	// (0x000305a8) cell_skin_colour_pane

0xa598,	// (0x00038159) cell_skin_colour_pane_g1

0x2a60,	// (0x00030621) call_video_g1_ParamLimits

0x2a60,	// (0x00030621) call_video_g1

0x2a7c,	// (0x0003063d) call_video_g2_ParamLimits

0x2a7c,	// (0x0003063d) call_video_g2

0x0001,

0xf269,	// (0x0003ce2a) call_video_g_ParamLimits

0xf269,	// (0x0003ce2a) call_video_g

0x2ace,	// (0x0003068f) call_video_uplink_pane_cp1_ParamLimits

0x2ace,	// (0x0003068f) call_video_uplink_pane_cp1

0xa5aa,	// (0x0003816b) call_video_uplink_pane_cp2

0x2b6d,	// (0x0003072e) video_down_crop_pane_ParamLimits

0x2b6d,	// (0x0003072e) video_down_crop_pane

0x2c56,	// (0x00030817) video_down_pane_ParamLimits

0x2c56,	// (0x00030817) video_down_pane

0xa5b2,	// (0x00038173) video_down_subqcif_pane_ParamLimits

0xa5b2,	// (0x00038173) video_down_subqcif_pane

0xa5ca,	// (0x0003818b) video_down_subqcif_pane_cp_ParamLimits

0xa5ca,	// (0x0003818b) video_down_subqcif_pane_cp

0xa5f0,	// (0x000381b1) im_reading_pane_ParamLimits

0xa5f0,	// (0x000381b1) im_reading_pane

0x2d66,	// (0x00030927) im_writing_pane_ParamLimits

0x2d66,	// (0x00030927) im_writing_pane

0x2d7c,	// (0x0003093d) im_reading_pane_t1

0xa60a,	// (0x000381cb) list_im_pane

0xa61b,	// (0x000381dc) scroll_pane_cp07

0x2db6,	// (0x00030977) im_writing_pane_t1_ParamLimits

0x2db6,	// (0x00030977) im_writing_pane_t1

0xa634,	// (0x000381f5) im_writing_pane_t2_ParamLimits

0xa634,	// (0x000381f5) im_writing_pane_t2

0x0001,

0xf273,	// (0x0003ce34) im_writing_pane_t_ParamLimits

0xf273,	// (0x0003ce34) im_writing_pane_t

0x9ff8,	// (0x00037bb9) input_focus_pane_cp04

0x9ff8,	// (0x00037bb9) input_focus_pane_cp05

0x2dcb,	// (0x0003098c) list_im_single_pane_ParamLimits

0x2dcb,	// (0x0003098c) list_im_single_pane

0x2de0,	// (0x000309a1) list_single_im_pane_t1

0x48ea,	// (0x000324ab) blid_accuracy_pane

0x48f2,	// (0x000324b3) blid_compass_pane

0x48fc,	// (0x000324bd) main_location_t1

0x490c,	// (0x000324cd) main_location_t2

0x491c,	// (0x000324dd) main_location_t3

0x0002,

0xf5ed,	// (0x0003d1ae) main_location_t

0x9ff8,	// (0x00037bb9) aid_levels_location

0xa379,	// (0x00037f3a) blid_accuracy_pane_g1

0xa379,	// (0x00037f3a) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0003ce96) blid_accuracy_pane_g

0xa67c,	// (0x0003823d) wml_content_pane

0xa6ba,	// (0x0003827b) wml_button_pane_ParamLimits

0xa6ba,	// (0x0003827b) wml_button_pane

0x2def,	// (0x000309b0) wml_list_single_large_pane_ParamLimits

0x2def,	// (0x000309b0) wml_list_single_large_pane

0x2e04,	// (0x000309c5) wml_list_single_medium_pane_ParamLimits

0x2e04,	// (0x000309c5) wml_list_single_medium_pane

0x2e1b,	// (0x000309dc) wml_list_single_small_pane_ParamLimits

0x2e1b,	// (0x000309dc) wml_list_single_small_pane

0xa6ce,	// (0x0003828f) wml_selection_box_pane_ParamLimits

0xa6ce,	// (0x0003828f) wml_selection_box_pane

0xa6e1,	// (0x000382a2) wml_list_single_pane_t1

0xa6f0,	// (0x000382b1) wml_list_single_medium_pane_t1

0xa6ff,	// (0x000382c0) wml_list_single_large_pane_t1

0xa73a,	// (0x000382fb) input_focus_pane_cp02_ParamLimits

0xa73a,	// (0x000382fb) input_focus_pane_cp02

0xa74d,	// (0x0003830e) wml_selection_box_pane_g1

0xa756,	// (0x00038317) wml_selection_box_pane_t1_ParamLimits

0xa756,	// (0x00038317) wml_selection_box_pane_t1

0xa253,	// (0x00037e14) bg_wml_button_pane_ParamLimits

0xa253,	// (0x00037e14) bg_wml_button_pane

0xa76e,	// (0x0003832f) wml_button_pane_g1

0xa776,	// (0x00038337) wml_button_pane_t1

0xa76e,	// (0x0003832f) wml_button_bg_pane_g1

0xa786,	// (0x00038347) wml_button_bg_pane_g2

0xa78e,	// (0x0003834f) wml_button_bg_pane_g3

0xa796,	// (0x00038357) wml_button_bg_pane_g4

0xa79e,	// (0x0003835f) wml_button_bg_pane_g5

0xa7a6,	// (0x00038367) wml_button_bg_pane_g6

0xa7ae,	// (0x0003836f) wml_button_bg_pane_g7

0xa7b6,	// (0x00038377) wml_button_bg_pane_g8

0xa7be,	// (0x0003837f) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0003ce39) wml_button_bg_pane_g

0x2e34,	// (0x000309f5) bg_list_pane_cp02

0xa7c6,	// (0x00038387) mce_header_pane_ParamLimits

0xa7c6,	// (0x00038387) mce_header_pane

0xa7dc,	// (0x0003839d) mce_icon_pane

0xa7dc,	// (0x0003839d) mce_image_pane

0xa7e5,	// (0x000383a6) mce_text_pane_ParamLimits

0xa7e5,	// (0x000383a6) mce_text_pane

0x2e3c,	// (0x000309fd) scroll_pane_cp03

0xa6b2,	// (0x00038273) scroll_pane_cp04

0xa7f8,	// (0x000383b9) scroll_pane_cp05_ParamLimits

0xa7f8,	// (0x000383b9) scroll_pane_cp05

0x2e46,	// (0x00030a07) mce_header_field_pane_ParamLimits

0x2e46,	// (0x00030a07) mce_header_field_pane

0x2e5d,	// (0x00030a1e) mce_header_field_pane_2_ParamLimits

0x2e5d,	// (0x00030a1e) mce_header_field_pane_2

0x2e73,	// (0x00030a34) mce_header_field_pane_3

0x2e7b,	// (0x00030a3c) list_single_mce_message_pane_ParamLimits

0x2e7b,	// (0x00030a3c) list_single_mce_message_pane

0x2e91,	// (0x00030a52) list_single_mce_smart_pane_ParamLimits

0x2e91,	// (0x00030a52) list_single_mce_smart_pane

0xa804,	// (0x000383c5) input_focus_pane_cp03

0xa80d,	// (0x000383ce) list_header_data_pane

0x2eb2,	// (0x00030a73) mce_header_field_pane_t1

0x2ec2,	// (0x00030a83) list_single_mce_header_pane_ParamLimits

0x2ec2,	// (0x00030a83) list_single_mce_header_pane

0xa815,	// (0x000383d6) list_single_mce_header_pane_t1

0xa824,	// (0x000383e5) list_single_mce_message_pane_g1

0xa82c,	// (0x000383ed) list_single_mce_message_pane_t1

0x2efc,	// (0x00030abd) bg_cale_heading_pane_cp01_ParamLimits

0x2efc,	// (0x00030abd) bg_cale_heading_pane_cp01

0xa83a,	// (0x000383fb) bg_cale_pane_cp02_ParamLimits

0xa83a,	// (0x000383fb) bg_cale_pane_cp02

0x2f36,	// (0x00030af7) cale_month_corner_pane

0x2f55,	// (0x00030b16) cale_month_day_heading_pane_ParamLimits

0x2f55,	// (0x00030b16) cale_month_day_heading_pane

0x2fa7,	// (0x00030b68) cale_month_pane_g1_ParamLimits

0x2fa7,	// (0x00030b68) cale_month_pane_g1

0x2fd6,	// (0x00030b97) cale_month_pane_g2_ParamLimits

0x2fd6,	// (0x00030b97) cale_month_pane_g2

0x3006,	// (0x00030bc7) cale_month_pane_g3_ParamLimits

0x3006,	// (0x00030bc7) cale_month_pane_g3

0x3042,	// (0x00030c03) cale_month_pane_g4_ParamLimits

0x3042,	// (0x00030c03) cale_month_pane_g4

0x307e,	// (0x00030c3f) cale_month_pane_g5_ParamLimits

0x307e,	// (0x00030c3f) cale_month_pane_g5

0x30c6,	// (0x00030c87) cale_month_pane_g6_ParamLimits

0x30c6,	// (0x00030c87) cale_month_pane_g6

0x3112,	// (0x00030cd3) cale_month_pane_g7_ParamLimits

0x3112,	// (0x00030cd3) cale_month_pane_g7

0x3162,	// (0x00030d23) cale_month_pane_g8_ParamLimits

0x3162,	// (0x00030d23) cale_month_pane_g8

0x31b6,	// (0x00030d77) cale_month_pane_g9_ParamLimits

0x31b6,	// (0x00030d77) cale_month_pane_g9

0x3208,	// (0x00030dc9) cale_month_pane_g10_ParamLimits

0x3208,	// (0x00030dc9) cale_month_pane_g10

0x325a,	// (0x00030e1b) cale_month_pane_g11_ParamLimits

0x325a,	// (0x00030e1b) cale_month_pane_g11

0x32ac,	// (0x00030e6d) cale_month_pane_g12_ParamLimits

0x32ac,	// (0x00030e6d) cale_month_pane_g12

0x32fe,	// (0x00030ebf) cale_month_pane_g13_ParamLimits

0x32fe,	// (0x00030ebf) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0003ce4c) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0003ce4c) cale_month_pane_g

0x3350,	// (0x00030f11) cale_month_week_pane

0x3374,	// (0x00030f35) grid_cale_month_pane_ParamLimits

0x3374,	// (0x00030f35) grid_cale_month_pane

0x33bd,	// (0x00030f7e) cale_month_day_heading_pane_t1

0x33ff,	// (0x00030fc0) cale_month_day_heading_pane_t2

0x3434,	// (0x00030ff5) cale_month_day_heading_pane_t3

0x3469,	// (0x0003102a) cale_month_day_heading_pane_t4

0x34a6,	// (0x00031067) cale_month_day_heading_pane_t5

0x34eb,	// (0x000310ac) cale_month_day_heading_pane_t6

0x3530,	// (0x000310f1) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0003ce67) cale_month_day_heading_pane_t

0xa4ae,	// (0x0003806f) bg_cale_side_pane_cp01

0x357d,	// (0x0003113e) cale_month_week_pane_t1

0x3596,	// (0x00031157) cale_month_week_pane_t2

0x35af,	// (0x00031170) cale_month_week_pane_t3

0x35c8,	// (0x00031189) cale_month_week_pane_t4

0x35e1,	// (0x000311a2) cale_month_week_pane_t5

0x35fa,	// (0x000311bb) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0003ce76) cale_month_week_pane_t

0x3613,	// (0x000311d4) cell_cale_month_pane_ParamLimits

0x3613,	// (0x000311d4) cell_cale_month_pane

0x376b,	// (0x0003132c) cell_cale_month_pane_g1

0x07a9,	// (0x0002e36a) cell_cale_month_pane_t1_ParamLimits

0x07a9,	// (0x0002e36a) cell_cale_month_pane_t1

0xa4bc,	// (0x0003807d) grid_highlight_pane_cp08

0xa379,	// (0x00037f3a) main_smil_g1

0x3777,	// (0x00031338) smil_status_pane

0xa879,	// (0x0003843a) smil_text_pane

0xc1ba,	// (0x00039d7b) bg_popup_call3_rect_pane_g8

0xc1c2,	// (0x00039d83) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0003d12f) bg_popup_call3_rect_pane_g

0xc449,	// (0x0003a00a) smil_status_volume_pane_g1

0xa883,	// (0x00038444) smil_status_pane_t1

0x4c7f,	// (0x00032840) volume_smil_pane

0xa89a,	// (0x0003845b) list_smil_text_pane

0x378c,	// (0x0003134d) scroll_pane_cp011

0x3797,	// (0x00031358) smil_text_list_pane_t1_ParamLimits

0x3797,	// (0x00031358) smil_text_list_pane_t1

0x37db,	// (0x0003139c) aid_volume_smil_ParamLimits

0x37db,	// (0x0003139c) aid_volume_smil

0xa379,	// (0x00037f3a) smil_volume_pane_g1

0xa379,	// (0x00037f3a) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0003ce96) smil_volume_pane_g

0x20dd,	// (0x0002fc9e) listscroll_cale_day_pane

0xa8a4,	// (0x00038465) bg_cale_pane

0xa8bc,	// (0x0003847d) list_cale_pane

0xa8df,	// (0x000384a0) scroll_pane_cp09

0xa8f0,	// (0x000384b1) cale_bg_pane_g1

0xa8f8,	// (0x000384b9) cale_bg_pane_g2

0xa900,	// (0x000384c1) cale_bg_pane_g3

0xa908,	// (0x000384c9) cale_bg_pane_g4

0xa910,	// (0x000384d1) cale_bg_pane_g5

0xa918,	// (0x000384d9) cale_bg_pane_g6

0xa920,	// (0x000384e1) cale_bg_pane_g7

0xa928,	// (0x000384e9) cale_bg_pane_g8

0xa930,	// (0x000384f1) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0003ce9b) cale_bg_pane_g

0x3805,	// (0x000313c6) list_cale_time_pane_ParamLimits

0x3805,	// (0x000313c6) list_cale_time_pane

0xa938,	// (0x000384f9) list_cale_time_pane_g1_ParamLimits

0xa938,	// (0x000384f9) list_cale_time_pane_g1

0xa944,	// (0x00038505) list_cale_time_pane_g2_ParamLimits

0xa944,	// (0x00038505) list_cale_time_pane_g2

0x381b,	// (0x000313dc) list_cale_time_pane_g3_ParamLimits

0x381b,	// (0x000313dc) list_cale_time_pane_g3

0x3829,	// (0x000313ea) list_cale_time_pane_g4_ParamLimits

0x3829,	// (0x000313ea) list_cale_time_pane_g4

0x3837,	// (0x000313f8) list_cale_time_pane_g5_ParamLimits

0x3837,	// (0x000313f8) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0003ceae) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0003ceae) list_cale_time_pane_g

0xa95e,	// (0x0003851f) list_cale_time_pane_t1_ParamLimits

0xa95e,	// (0x0003851f) list_cale_time_pane_t1

0xa986,	// (0x00038547) list_cale_time_pane_t2_ParamLimits

0xa986,	// (0x00038547) list_cale_time_pane_t2

0x3c28,	// (0x000317e9) aid_blid_cardinal_pane

0x3c66,	// (0x00031827) compass_pane_t4

0xa9ae,	// (0x0003856f) list_cale_time_pane_t4_ParamLimits

0xa9ae,	// (0x0003856f) list_cale_time_pane_t4

0x3c74,	// (0x00031835) compass_pane_t5

0x3c82,	// (0x00031843) compass_pane_t6

0x3c90,	// (0x00031851) compass_pane_t7

0xae32,	// (0x000389f3) navi_pane_cc_t1

0xb00f,	// (0x00038bd0) aid_phob_thumbnail_center_pane

0x4300,	// (0x00031ec1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0003cebb) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0003cebb) list_cale_time_pane_t

0x9c4f,	// (0x00037810) bg_popup_window_pane_cp02_ParamLimits

0x9c4f,	// (0x00037810) bg_popup_window_pane_cp02

0xa9d6,	// (0x00038597) heading_pane_cp01_ParamLimits

0xa9d6,	// (0x00038597) heading_pane_cp01

0xa9e2,	// (0x000385a3) loc_req_pane_ParamLimits

0xa9e2,	// (0x000385a3) loc_req_pane

0xa9f2,	// (0x000385b3) loc_type_pane_ParamLimits

0xa9f2,	// (0x000385b3) loc_type_pane

0xaa04,	// (0x000385c5) loc_type_pane_t1_ParamLimits

0xaa04,	// (0x000385c5) loc_type_pane_t1

0xaa16,	// (0x000385d7) loc_type_pane_t2_ParamLimits

0xaa16,	// (0x000385d7) loc_type_pane_t2

0xaa28,	// (0x000385e9) loc_type_pane_t3_ParamLimits

0xaa28,	// (0x000385e9) loc_type_pane_t3

0x0002,

0xf301,	// (0x0003cec2) loc_type_pane_t_ParamLimits

0xf301,	// (0x0003cec2) loc_type_pane_t

0xaa3a,	// (0x000385fb) list_loc_req_pane

0xaa44,	// (0x00038605) scroll_pane_cp012

0x3845,	// (0x00031406) list_single_loc_request_popup_menu_pane_ParamLimits

0x3845,	// (0x00031406) list_single_loc_request_popup_menu_pane

0xaa4f,	// (0x00038610) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa4f,	// (0x00038610) list_single_loc_request_popup_menu_pane_g1

0xaa5b,	// (0x0003861c) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa5b,	// (0x0003861c) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0003cec9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0003cec9) list_single_loc_request_popup_menu_pane_g

0xaa67,	// (0x00038628) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa67,	// (0x00038628) list_single_loc_request_popup_menu_pane_t1

0xa253,	// (0x00037e14) bg_popup_window_pane_cp03_ParamLimits

0xa253,	// (0x00037e14) bg_popup_window_pane_cp03

0xaa7d,	// (0x0003863e) heading_loc_req_pane_ParamLimits

0xaa7d,	// (0x0003863e) heading_loc_req_pane

0x3852,	// (0x00031413) popup_dyc_status_message_window_g1_ParamLimits

0x3852,	// (0x00031413) popup_dyc_status_message_window_g1

0x3866,	// (0x00031427) popup_dyc_status_message_window_t1_ParamLimits

0x3866,	// (0x00031427) popup_dyc_status_message_window_t1

0x387b,	// (0x0003143c) popup_dyc_status_message_window_t2_ParamLimits

0x387b,	// (0x0003143c) popup_dyc_status_message_window_t2

0x3890,	// (0x00031451) popup_dyc_status_message_window_t3_ParamLimits

0x3890,	// (0x00031451) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0003cece) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0003cece) popup_dyc_status_message_window_t

0x9ff8,	// (0x00037bb9) bg_heading_pane_cp01

0xaa89,	// (0x0003864a) heading_loc_req_pane_g1

0xaa91,	// (0x00038652) heading_loc_req_pane_g2

0xaa99,	// (0x0003865a) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0003ced5) heading_loc_req_pane_g

0xaaa1,	// (0x00038662) heading_loc_req_pane_t1

0xaab0,	// (0x00038671) bg_popup_sub_pane_cp01_ParamLimits

0xaab0,	// (0x00038671) bg_popup_sub_pane_cp01

0xaabe,	// (0x0003867f) popup_cale_events_window_g1_ParamLimits

0xaabe,	// (0x0003867f) popup_cale_events_window_g1

0xaade,	// (0x0003869f) popup_cale_events_window_g2_ParamLimits

0xaade,	// (0x0003869f) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0003cf09) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0003cf09) popup_cale_events_window_g

0xaafe,	// (0x000386bf) popup_cale_events_window_t1_ParamLimits

0xaafe,	// (0x000386bf) popup_cale_events_window_t1

0xab10,	// (0x000386d1) popup_cale_events_window_t2_ParamLimits

0xab10,	// (0x000386d1) popup_cale_events_window_t2

0xab4e,	// (0x0003870f) popup_cale_events_window_t3_ParamLimits

0xab4e,	// (0x0003870f) popup_cale_events_window_t3

0xab88,	// (0x00038749) popup_cale_events_window_t4_ParamLimits

0xab88,	// (0x00038749) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0003cf0e) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0003cf0e) popup_cale_events_window_t

0x3989,	// (0x0003154a) call_type_pane

0x3999,	// (0x0003155a) popup_call_status_window_g1

0x39ad,	// (0x0003156e) popup_call_status_window_g2

0x39c1,	// (0x00031582) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0003cf17) popup_call_status_window_g

0xabbe,	// (0x0003877f) call_type_pane_g1

0xabc7,	// (0x00038788) call_type_pane_g2

0x0001,

0xf35d,	// (0x0003cf1e) call_type_pane_g

0x9ff8,	// (0x00037bb9) bg_popup_sub_pane_cp02

0xabd0,	// (0x00038791) listscroll_popup_wml_pane

0xabd8,	// (0x00038799) list_wml_pane

0xabe2,	// (0x000387a3) scroll_pane_cp013

0xabed,	// (0x000387ae) list_single_graphic_popup_wml_pane_ParamLimits

0xabed,	// (0x000387ae) list_single_graphic_popup_wml_pane

0xa379,	// (0x00037f3a) list_single_graphic_popup_wml_pane_g1

0xac01,	// (0x000387c2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0003cf23) list_single_graphic_popup_wml_pane_g

0xac09,	// (0x000387ca) list_single_graphic_popup_wml_pane_t1

0xac1f,	// (0x000387e0) aid_call_pane

0xa24b,	// (0x00037e0c) popup_clock_analogue_window_g1

0xa24b,	// (0x00037e0c) popup_clock_analogue_window_g2

0x39d0,	// (0x00031591) popup_clock_analogue_window_g3

0x39d0,	// (0x00031591) popup_clock_analogue_window_g4

0xa379,	// (0x00037f3a) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0003cf28) popup_clock_analogue_window_g

0x39d8,	// (0x00031599) popup_clock_analogue_window_t1

0x39e6,	// (0x000315a7) clock_digital_number_pane_ParamLimits

0x39e6,	// (0x000315a7) clock_digital_number_pane

0x39f2,	// (0x000315b3) clock_digital_number_pane_cp02_ParamLimits

0x39f2,	// (0x000315b3) clock_digital_number_pane_cp02

0x39fe,	// (0x000315bf) clock_digital_number_pane_cp03_ParamLimits

0x39fe,	// (0x000315bf) clock_digital_number_pane_cp03

0x3a0a,	// (0x000315cb) clock_digital_number_pane_cp04_ParamLimits

0x3a0a,	// (0x000315cb) clock_digital_number_pane_cp04

0x3a16,	// (0x000315d7) clock_digital_separator_pane_ParamLimits

0x3a16,	// (0x000315d7) clock_digital_separator_pane

0x3a22,	// (0x000315e3) popup_clock_digital_window_t1

0xa379,	// (0x00037f3a) clock_digital_number_pane_g1

0xa379,	// (0x00037f3a) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0003ce96) clock_digital_number_pane_g

0xa379,	// (0x00037f3a) clock_digital_separator_pane_g1

0xa379,	// (0x00037f3a) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0003ce96) clock_digital_separator_pane_g

0x9ff8,	// (0x00037bb9) bg_popup_window_pane_cp04

0xac27,	// (0x000387e8) heading_pane_cp03

0xac2f,	// (0x000387f0) listscroll_popup_gms_pane

0xac37,	// (0x000387f8) grid_large_graphic_popup_pane

0xac41,	// (0x00038802) listscroll_popup_gms_pane_g1

0xac49,	// (0x0003880a) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0003cf33) listscroll_popup_gms_pane_g

0xa6b2,	// (0x00038273) scroll_pane_cp014

0x3a3f,	// (0x00031600) cell_large_graphic_popup_pane_ParamLimits

0x3a3f,	// (0x00031600) cell_large_graphic_popup_pane

0x3a57,	// (0x00031618) cell_large_graphic_popup_pane_g1_ParamLimits

0x3a57,	// (0x00031618) cell_large_graphic_popup_pane_g1

0xac51,	// (0x00038812) cell_large_graphic_popup_pane_g2_ParamLimits

0xac51,	// (0x00038812) cell_large_graphic_popup_pane_g2

0xac5d,	// (0x0003881e) cell_large_graphic_popup_pane_g3_ParamLimits

0xac5d,	// (0x0003881e) cell_large_graphic_popup_pane_g3

0xac6a,	// (0x0003882b) cell_large_graphic_popup_pane_g4_ParamLimits

0xac6a,	// (0x0003882b) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0003cf38) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0003cf38) cell_large_graphic_popup_pane_g

0xac7a,	// (0x0003883b) grid_highlight_pane_cp010

0xa379,	// (0x00037f3a) bg_popup_call_pane_g1

0xac84,	// (0x00038845) list_single_graphic_popup_conf_pane_ParamLimits

0xac84,	// (0x00038845) list_single_graphic_popup_conf_pane

0xac97,	// (0x00038858) list_highlight_pane_cp01

0xaca0,	// (0x00038861) list_single_graphic_popup_conf_pane_g1

0xaca8,	// (0x00038869) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0003cf41) list_single_graphic_popup_conf_pane_g

0xacb0,	// (0x00038871) list_single_graphic_popup_conf_pane_t1

0xacbe,	// (0x0003887f) linegrid_cams_pane_g1

0x3a63,	// (0x00031624) linegrid_cams_pane_g2

0xa4ef,	// (0x000380b0) linegrid_cams_pane_g3

0xacc7,	// (0x00038888) linegrid_cams_pane_g4

0x3a6c,	// (0x0003162d) linegrid_cams_pane_g5

0x3a75,	// (0x00031636) linegrid_cams_pane_g6

0xa4f8,	// (0x000380b9) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0003cf46) linegrid_cams_pane_g

0xacd0,	// (0x00038891) popup_clock_analogue_window

0xacd0,	// (0x00038891) popup_clock_digital_window

0x9ff8,	// (0x00037bb9) popup_phob_thumbnail_window

0xa379,	// (0x00037f3a) call_video_uplink_pane_g1

0xacd9,	// (0x0003889a) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0003cf55) call_video_uplink_pane_g

0xace1,	// (0x000388a2) video_uplink_pane

0xace9,	// (0x000388aa) mce_image_pane_g1

0x3a80,	// (0x00031641) mce_image_pane_g2

0x3a88,	// (0x00031649) mce_image_pane_g3

0x3a90,	// (0x00031651) mce_image_pane_g4

0x3a9a,	// (0x0003165b) mce_image_pane_g5

0x0004,

0xf399,	// (0x0003cf5a) mce_image_pane_g

0xacf3,	// (0x000388b4) control_top_pane_stacon_cp01_ParamLimits

0xacf3,	// (0x000388b4) control_top_pane_stacon_cp01

0xad07,	// (0x000388c8) uni_indicator_pane_stacon_cp01_ParamLimits

0xad07,	// (0x000388c8) uni_indicator_pane_stacon_cp01

0xad18,	// (0x000388d9) bg_popup_sub_pane_cp03

0x3aa2,	// (0x00031663) chi_dic_find_pane

0x3aaa,	// (0x0003166b) listscroll_chi_dic_pane

0x3ab3,	// (0x00031674) main_pane_chidic_g1

0x3ac6,	// (0x00031687) chi_dic_find_pane_t1

0xad22,	// (0x000388e3) find_chidic_pane

0xad2b,	// (0x000388ec) chi_dic_list_pane_ParamLimits

0xad2b,	// (0x000388ec) chi_dic_list_pane

0xad3c,	// (0x000388fd) scroll_pane_cp020

0x3ad4,	// (0x00031695) find_chidic_pane_t1

0x9ff8,	// (0x00037bb9) input_focus_pane_cp06

0x3ae3,	// (0x000316a4) list_chi_dic_pane_ParamLimits

0x3ae3,	// (0x000316a4) list_chi_dic_pane

0x3af5,	// (0x000316b6) list_chi_dic_pane_t1_ParamLimits

0x3af5,	// (0x000316b6) list_chi_dic_pane_t1

0x9ff8,	// (0x00037bb9) list_highlight_pane_cp020

0xad44,	// (0x00038905) bg_cale_heading_pane_g1

0x3b08,	// (0x000316c9) bg_cale_heading_pane_g2

0x3b10,	// (0x000316d1) bg_cale_heading_pane_g3

0x3b18,	// (0x000316d9) bg_cale_heading_pane_g4

0x3b22,	// (0x000316e3) bg_cale_heading_pane_g5

0x3b2c,	// (0x000316ed) bg_cale_heading_pane_g6

0x3b34,	// (0x000316f5) bg_cale_heading_pane_g7

0x3b3c,	// (0x000316fd) bg_cale_heading_pane_g8

0x3b46,	// (0x00031707) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0003cf65) bg_cale_heading_pane_g

0xad44,	// (0x00038905) bg_cale_side_pane_g1

0x3b50,	// (0x00031711) bg_cale_side_pane_g2

0x3b58,	// (0x00031719) bg_cale_side_pane_g3

0x3b60,	// (0x00031721) bg_cale_side_pane_g4

0x3b68,	// (0x00031729) bg_cale_side_pane_g5

0x3b70,	// (0x00031731) bg_cale_side_pane_g6

0x3b78,	// (0x00031739) bg_cale_side_pane_g7

0x3b80,	// (0x00031741) bg_cale_side_pane_g8

0x3b88,	// (0x00031749) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0003cf78) bg_cale_side_pane_g

0x3b90,	// (0x00031751) popup_call_status_window_ParamLimits

0x3b90,	// (0x00031751) popup_call_status_window

0xad4c,	// (0x0003890d) stacon_top_pane

0xad54,	// (0x00038915) status_pane_ParamLimits

0xad54,	// (0x00038915) status_pane

0xad69,	// (0x0003892a) status_small_pane

0xad71,	// (0x00038932) control_pane

0x9ff8,	// (0x00037bb9) stacon_bottom_pane

0xad79,	// (0x0003893a) list_single_mce_smart_pane_t1_ParamLimits

0xad79,	// (0x0003893a) list_single_mce_smart_pane_t1

0xad8c,	// (0x0003894d) list_single_mce_smart_pane_t2_ParamLimits

0xad8c,	// (0x0003894d) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0003cf8b) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0003cf8b) list_single_mce_smart_pane_t

0x3bd7,	// (0x00031798) compass_pane

0x3be0,	// (0x000317a1) main_location2_pane_t1

0x3bf2,	// (0x000317b3) main_location2_pane_t2

0x3c04,	// (0x000317c5) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0003cf90) main_location2_pane_t

0xadab,	// (0x0003896c) compass_pane_g1_ParamLimits

0xadab,	// (0x0003896c) compass_pane_g1

0x3c48,	// (0x00031809) compass_pane_t1

0x3c57,	// (0x00031818) compass_pane_t2

0x0005,

0xf3d8,	// (0x0003cf99) compass_pane_t

0x3c9e,	// (0x0003185f) text_secondary_cp61

0xae29,	// (0x000389ea) navi_pane_cams_g5

0xaea5,	// (0x00038a66) navi_pane_im_t1

0xaeb3,	// (0x00038a74) navi_pane_mp_g1_ParamLimits

0xaeb3,	// (0x00038a74) navi_pane_mp_g1

0xaec7,	// (0x00038a88) navi_pane_mp_g2_ParamLimits

0xaec7,	// (0x00038a88) navi_pane_mp_g2

0xaed3,	// (0x00038a94) navi_pane_mp_g3_ParamLimits

0xaed3,	// (0x00038a94) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0003cfad) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0003cfad) navi_pane_mp_g

0xaedf,	// (0x00038aa0) navi_pane_mp_t1

0xaeed,	// (0x00038aae) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0003cfb4) navi_pane_mp_t

0xaf58,	// (0x00038b19) navi_pane_vt_g1

0xaedf,	// (0x00038aa0) navi_pane_vt_t1

0xaf60,	// (0x00038b21) navi_slider_pane

0xa509,	// (0x000380ca) zooming_pane

0xaf70,	// (0x00038b31) navi_slider_pane_g1

0x3cef,	// (0x000318b0) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0003cfbb) navi_slider_pane_g

0xaf94,	// (0x00038b55) aid_levels_zoom

0xaf9c,	// (0x00038b5d) zooming_pane_g1

0xafa4,	// (0x00038b65) zooming_pane_g2

0xafa4,	// (0x00038b65) zooming_pane_g3

0x0002,

0xf409,	// (0x0003cfca) zooming_pane_g

0xafac,	// (0x00038b6d) level_10_zoom

0xafb5,	// (0x00038b76) level_11_zoom

0xafbe,	// (0x00038b7f) level_1_zoom

0xafc7,	// (0x00038b88) level_2_zoom

0xafd0,	// (0x00038b91) level_3_zoom

0xafd9,	// (0x00038b9a) level_4_zoom

0xafe2,	// (0x00038ba3) level_5_zoom

0xafeb,	// (0x00038bac) level_6_zoom

0xaff4,	// (0x00038bb5) level_7_zoom

0xaffd,	// (0x00038bbe) level_8_zoom

0xb006,	// (0x00038bc7) level_9_zoom

0xb017,	// (0x00038bd8) popup_phob_thumbnail_window_g1

0xb01f,	// (0x00038be0) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0003cfd1) popup_phob_thumbnail_window_g

0xc35c,	// (0x00039f1d) level_1_location

0xc364,	// (0x00039f25) level_2_location

0xc36c,	// (0x00039f2d) level_3_location

0xc374,	// (0x00039f35) level_4_location

0xa509,	// (0x000380ca) level_5_location

0x3d01,	// (0x000318c2) mce_icon_pane_g1

0x3d0b,	// (0x000318cc) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0003cfd6) mce_icon_pane_g

0x3d13,	// (0x000318d4) main_mup_pane_g1_ParamLimits

0x3d13,	// (0x000318d4) main_mup_pane_g1

0x3d29,	// (0x000318ea) main_mup_pane_g2_ParamLimits

0x3d29,	// (0x000318ea) main_mup_pane_g2

0x3d3b,	// (0x000318fc) main_mup_pane_g3_ParamLimits

0x3d3b,	// (0x000318fc) main_mup_pane_g3

0x3d4d,	// (0x0003190e) main_mup_pane_g4_ParamLimits

0x3d4d,	// (0x0003190e) main_mup_pane_g4

0x3d65,	// (0x00031926) main_mup_pane_g5_ParamLimits

0x3d65,	// (0x00031926) main_mup_pane_g5

0x3d81,	// (0x00031942) main_mup_pane_g6_ParamLimits

0x3d81,	// (0x00031942) main_mup_pane_g6

0x3d99,	// (0x0003195a) main_mup_pane_g7_ParamLimits

0x3d99,	// (0x0003195a) main_mup_pane_g7

0x3db1,	// (0x00031972) main_mup_pane_g8_ParamLimits

0x3db1,	// (0x00031972) main_mup_pane_g8

0x3dc9,	// (0x0003198a) main_mup_pane_g9_ParamLimits

0x3dc9,	// (0x0003198a) main_mup_pane_g9

0x3de3,	// (0x000319a4) main_mup_pane_g10_ParamLimits

0x3de3,	// (0x000319a4) main_mup_pane_g10

0x3dfd,	// (0x000319be) main_mup_pane_g11_ParamLimits

0x3dfd,	// (0x000319be) main_mup_pane_g11

0x3e11,	// (0x000319d2) main_mup_pane_g12_ParamLimits

0x3e11,	// (0x000319d2) main_mup_pane_g12

0x3e27,	// (0x000319e8) main_mup_pane_g13_ParamLimits

0x3e27,	// (0x000319e8) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0003cfdb) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0003cfdb) main_mup_pane_g

0x3e3b,	// (0x000319fc) main_mup_pane_t1_ParamLimits

0x3e3b,	// (0x000319fc) main_mup_pane_t1

0x3e55,	// (0x00031a16) main_mup_pane_t2_ParamLimits

0x3e55,	// (0x00031a16) main_mup_pane_t2

0x3e6d,	// (0x00031a2e) main_mup_pane_t3_ParamLimits

0x3e6d,	// (0x00031a2e) main_mup_pane_t3

0x3e85,	// (0x00031a46) main_mup_pane_t4_ParamLimits

0x3e85,	// (0x00031a46) main_mup_pane_t4

0x3ea3,	// (0x00031a64) main_mup_pane_t5_ParamLimits

0x3ea3,	// (0x00031a64) main_mup_pane_t5

0x3eb8,	// (0x00031a79) main_mup_pane_t6_ParamLimits

0x3eb8,	// (0x00031a79) main_mup_pane_t6

0x0005,

0xf435,	// (0x0003cff6) main_mup_pane_t_ParamLimits

0xf435,	// (0x0003cff6) main_mup_pane_t

0x3eca,	// (0x00031a8b) mup_progress_pane_ParamLimits

0x3eca,	// (0x00031a8b) mup_progress_pane

0x3ed6,	// (0x00031a97) mup_visualizer_pane_ParamLimits

0x3ed6,	// (0x00031a97) mup_visualizer_pane

0x3f0a,	// (0x00031acb) mup_volume_pane_ParamLimits

0x3f0a,	// (0x00031acb) mup_volume_pane

0xb027,	// (0x00038be8) mup_visualizer_pane_g1_ParamLimits

0xb027,	// (0x00038be8) mup_visualizer_pane_g1

0xb027,	// (0x00038be8) mup_visualizer_pane_g2_ParamLimits

0xb027,	// (0x00038be8) mup_visualizer_pane_g2

0xadab,	// (0x0003896c) mup_visualizer_pane_g3_ParamLimits

0xadab,	// (0x0003896c) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0003d003) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0003d003) mup_visualizer_pane_g

0xa379,	// (0x00037f3a) mup_volume_pane_g1

0xb03d,	// (0x00038bfe) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0003d00a) mup_volume_pane_g

0xa379,	// (0x00037f3a) mup_progress_pane_g1

0xb046,	// (0x00038c07) mup_progress_pane_g2

0xb04f,	// (0x00038c10) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0003d00f) mup_progress_pane_g

0x9ff8,	// (0x00037bb9) bg_popup_window_pane_cp05

0xb058,	// (0x00038c19) heading_pane_cp02_ParamLimits

0xb058,	// (0x00038c19) heading_pane_cp02

0xb072,	// (0x00038c33) list_popup_blid_pane

0xb07a,	// (0x00038c3b) list_blid_sat_info_pane_ParamLimits

0xb07a,	// (0x00038c3b) list_blid_sat_info_pane

0xb08d,	// (0x00038c4e) list_blid_sat_info_pane_g1

0xb095,	// (0x00038c56) list_blid_sat_info_pane_t1

0x4020,	// (0x00031be1) mup_equalizer_pane_ParamLimits

0x4020,	// (0x00031be1) mup_equalizer_pane

0x4039,	// (0x00031bfa) mup_equalizer_pane_cp1_ParamLimits

0x4039,	// (0x00031bfa) mup_equalizer_pane_cp1

0x4056,	// (0x00031c17) mup_equalizer_pane_cp2_ParamLimits

0x4056,	// (0x00031c17) mup_equalizer_pane_cp2

0x4073,	// (0x00031c34) mup_equalizer_pane_cp3_ParamLimits

0x4073,	// (0x00031c34) mup_equalizer_pane_cp3

0x4094,	// (0x00031c55) mup_equalizer_pane_cp4_ParamLimits

0x4094,	// (0x00031c55) mup_equalizer_pane_cp4

0x40b5,	// (0x00031c76) mup_equalizer_pane_cp5

0x40c9,	// (0x00031c8a) mup_equalizer_pane_cp6

0x40dd,	// (0x00031c9e) mup_equalizer_pane_cp7

0xc23a,	// (0x00039dfb) bg_popup_call_poc_act_pane_g9

0xc242,	// (0x00039e03) bg_popup_call_poc_act_pane_g10

0xc24a,	// (0x00039e0b) bg_popup_call_poc_act_pane_g11

0x000a,

0xa253,	// (0x00037e14) mup_scale_pane

0xa379,	// (0x00037f3a) mup_scale_pane_g1

0xb0a3,	// (0x00038c64) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0003d02b) mup_scale_pane_g

0xb0c7,	// (0x00038c88) msg_data_pane

0xb0cf,	// (0x00038c90) scroll_pane_cp017

0x4103,	// (0x00031cc4) bg_list_pane_cp04_ParamLimits

0x4103,	// (0x00031cc4) bg_list_pane_cp04

0xb0d7,	// (0x00038c98) msg_data_pane_g1

0x4123,	// (0x00031ce4) msg_data_pane_g2

0x412b,	// (0x00031cec) msg_data_pane_g3

0x4133,	// (0x00031cf4) msg_data_pane_g4

0x413b,	// (0x00031cfc) msg_data_pane_g5

0x4143,	// (0x00031d04) msg_data_pane_g6

0x414b,	// (0x00031d0c) msg_data_pane_g7

0x0006,

0xf479,	// (0x0003d03a) msg_data_pane_g

0x4153,	// (0x00031d14) msg_text_pane_ParamLimits

0x4153,	// (0x00031d14) msg_text_pane

0x4181,	// (0x00031d42) qrid_highlight_pane_cp011_ParamLimits

0x4181,	// (0x00031d42) qrid_highlight_pane_cp011

0x9ff8,	// (0x00037bb9) msg_body_pane

0x9ff8,	// (0x00037bb9) msg_header_pane

0xb0e8,	// (0x00038ca9) input_focus_pane_cp07

0x41a5,	// (0x00031d66) msg_header_pane_t1_ParamLimits

0x41a5,	// (0x00031d66) msg_header_pane_t1

0x41b7,	// (0x00031d78) msg_header_pane_t2_ParamLimits

0x41b7,	// (0x00031d78) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0003d04e) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0003d04e) msg_header_pane_t

0xb0fd,	// (0x00038cbe) msg_body_pane_g1

0x41c9,	// (0x00031d8a) msg_body_pane_t1_ParamLimits

0x41c9,	// (0x00031d8a) msg_body_pane_t1

0x41fa,	// (0x00031dbb) msg_body_pane_t2_ParamLimits

0x41fa,	// (0x00031dbb) msg_body_pane_t2

0x420c,	// (0x00031dcd) msg_body_pane_t3_ParamLimits

0x420c,	// (0x00031dcd) msg_body_pane_t3

0x0002,

0xf492,	// (0x0003d053) msg_body_pane_t_ParamLimits

0xf492,	// (0x0003d053) msg_body_pane_t

0x07f1,	// (0x0002e3b2) main_viewer_pane_g1_ParamLimits

0x07f1,	// (0x0002e3b2) main_viewer_pane_g1

0x07ff,	// (0x0002e3c0) main_viewer_pane_g2_ParamLimits

0x07ff,	// (0x0002e3c0) main_viewer_pane_g2

0x4254,	// (0x00031e15) main_viewer_pane_g3_ParamLimits

0x4254,	// (0x00031e15) main_viewer_pane_g3

0x4263,	// (0x00031e24) main_viewer_pane_g4_ParamLimits

0x4263,	// (0x00031e24) main_viewer_pane_g4

0x4272,	// (0x00031e33) main_viewer_pane_g5_ParamLimits

0x4272,	// (0x00031e33) main_viewer_pane_g5

0x4272,	// (0x00031e33) main_viewer_pane_g7_ParamLimits

0x4272,	// (0x00031e33) main_viewer_pane_g7

0xaa4f,	// (0x00038610) main_viewer_pane_g8_ParamLimits

0xaa4f,	// (0x00038610) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0003d063) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0003d063) main_viewer_pane_g

0xb105,	// (0x00038cc6) viewer_content_pane_ParamLimits

0xb105,	// (0x00038cc6) viewer_content_pane

0x42bd,	// (0x00031e7e) main_postcard_pane_g1_ParamLimits

0x42bd,	// (0x00031e7e) main_postcard_pane_g1

0x42d3,	// (0x00031e94) main_postcard_pane_g2_ParamLimits

0x42d3,	// (0x00031e94) main_postcard_pane_g2

0x42e9,	// (0x00031eaa) main_postcard_pane_g3_ParamLimits

0x42e9,	// (0x00031eaa) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0003d074) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0003d074) main_postcard_pane_g

0x4300,	// (0x00031ec1) main_postcard_pane_g4

0xc45c,	// (0x0003a01d) smil_status_volume_pane_g2

0x4343,	// (0x00031f04) postcard_pane_ParamLimits

0x4343,	// (0x00031f04) postcard_pane

0xb113,	// (0x00038cd4) postcard_pane_g1_ParamLimits

0xb113,	// (0x00038cd4) postcard_pane_g1

0x4385,	// (0x00031f46) postcard_pane_g2_ParamLimits

0x4385,	// (0x00031f46) postcard_pane_g2

0x4391,	// (0x00031f52) postcard_pane_g3_ParamLimits

0x4391,	// (0x00031f52) postcard_pane_g3

0xb121,	// (0x00038ce2) postcard_pane_g4_ParamLimits

0xb121,	// (0x00038ce2) postcard_pane_g4

0x439d,	// (0x00031f5e) postcard_pane_g5_ParamLimits

0x439d,	// (0x00031f5e) postcard_pane_g5

0x43b2,	// (0x00031f73) postcard_pane_g6_ParamLimits

0x43b2,	// (0x00031f73) postcard_pane_g6

0xb113,	// (0x00038cd4) postcard_pane_g7_ParamLimits

0xb113,	// (0x00038cd4) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0003d081) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0003d081) postcard_pane_g

0x43c6,	// (0x00031f87) main_mp2_pane_g1_ParamLimits

0x43c6,	// (0x00031f87) main_mp2_pane_g1

0x43d2,	// (0x00031f93) main_mp2_pane_g2_ParamLimits

0x43d2,	// (0x00031f93) main_mp2_pane_g2

0x43de,	// (0x00031f9f) main_mp2_pane_g3_ParamLimits

0x43de,	// (0x00031f9f) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0003d090) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0003d090) main_mp2_pane_g

0x43ea,	// (0x00031fab) main_mp2_pane_t1_ParamLimits

0x43ea,	// (0x00031fab) main_mp2_pane_t1

0x43ff,	// (0x00031fc0) main_mp2_pane_t2_ParamLimits

0x43ff,	// (0x00031fc0) main_mp2_pane_t2

0x4411,	// (0x00031fd2) main_mp2_pane_t3_ParamLimits

0x4411,	// (0x00031fd2) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0003d097) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0003d097) main_mp2_pane_t

0xb12f,	// (0x00038cf0) pec_content_pane_ParamLimits

0xb12f,	// (0x00038cf0) pec_content_pane

0xa6b2,	// (0x00038273) scroll_pane_cp015

0xb141,	// (0x00038d02) pec_attribute_pane_ParamLimits

0xb141,	// (0x00038d02) pec_attribute_pane

0x4423,	// (0x00031fe4) pec_content_pane_g1_ParamLimits

0x4423,	// (0x00031fe4) pec_content_pane_g1

0xb151,	// (0x00038d12) pec_content_pane_t1_ParamLimits

0xb151,	// (0x00038d12) pec_content_pane_t1

0xb163,	// (0x00038d24) pec_content_pane_t2_ParamLimits

0xb163,	// (0x00038d24) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0003d09e) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0003d09e) pec_content_pane_t

0x442f,	// (0x00031ff0) list_single_graphic_pane_cp01_ParamLimits

0x442f,	// (0x00031ff0) list_single_graphic_pane_cp01

0xa253,	// (0x00037e14) bg_popup_sub_pane_cp04

0xb175,	// (0x00038d36) popup_mup_playback_window_g1

0xb181,	// (0x00038d42) popup_mup_playback_window_t1

0xb196,	// (0x00038d57) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0003d0a3) popup_mup_playback_window_t

0xb1cd,	// (0x00038d8e) main_image_pane_g1_ParamLimits

0xb1cd,	// (0x00038d8e) main_image_pane_g1

0xb210,	// (0x00038dd1) scroll_pane_cp018_ParamLimits

0xb210,	// (0x00038dd1) scroll_pane_cp018

0xb228,	// (0x00038de9) scroll_pane_cp016_ParamLimits

0xb228,	// (0x00038de9) scroll_pane_cp016

0x44fd,	// (0x000320be) smil2_image_pane_ParamLimits

0x44fd,	// (0x000320be) smil2_image_pane

0x452d,	// (0x000320ee) smil2_root_pane_ParamLimits

0x452d,	// (0x000320ee) smil2_root_pane

0x4565,	// (0x00032126) smil2_text_pane_ParamLimits

0x4565,	// (0x00032126) smil2_text_pane

0x9ff8,	// (0x00037bb9) bg_list_pane_cp06

0xb264,	// (0x00038e25) grid_radio_pane

0x9ff8,	// (0x00037bb9) bg_popup_window_pane_cp06

0xb26c,	// (0x00038e2d) main_fmradio_pane_t1

0xac27,	// (0x000387e8) heading_pane_cp04

0xb27a,	// (0x00038e3b) main_fmradio_pane_t2

0xc292,	// (0x00039e53) popup_cale_lunar_info_window_g1

0xb288,	// (0x00038e49) main_fmradio_pane_t3

0xc29a,	// (0x00039e5b) popup_cale_lunar_info_window_g2

0xb296,	// (0x00038e57) main_fmradio_pane_t4

0x0001,

0xb2a4,	// (0x00038e65) main_fmradio_pane_t5

0x0004,

0xf5d0,	// (0x0003d191) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0003d0b8) main_fmradio_pane_t

0xb2b2,	// (0x00038e73) wait_bar_pane_cp03

0xb2ba,	// (0x00038e7b) cell_fmradio_pane_ParamLimits

0xb2ba,	// (0x00038e7b) cell_fmradio_pane

0xb113,	// (0x00038cd4) cell_fmradio_pane_g1_ParamLimits

0xb113,	// (0x00038cd4) cell_fmradio_pane_g1

0x9ff8,	// (0x00037bb9) grid_highlight_pane_cp011

0xb2cd,	// (0x00038e8e) poc_content_pane_ParamLimits

0xb2cd,	// (0x00038e8e) poc_content_pane

0xb2df,	// (0x00038ea0) scroll_pane_cp019

0x45e5,	// (0x000321a6) popup_call_poc_act_window_ParamLimits

0x45e5,	// (0x000321a6) popup_call_poc_act_window

0x4609,	// (0x000321ca) popup_call_poc_inact_window_ParamLimits

0x4609,	// (0x000321ca) popup_call_poc_inact_window

0xf594,	// (0x0003d155) bg_popup_call_poc_act_pane_g

0xc252,	// (0x00039e13) bg_popup_call_poc_inact_pane_g1

0xc25a,	// (0x00039e1b) bg_popup_call_poc_inact_pane_g2

0xb2e7,	// (0x00038ea8) popup_call_poc_act_window_g2

0xc262,	// (0x00039e23) bg_popup_call_poc_inact_pane_g3

0xc1e2,	// (0x00039da3) bg_popup_call_poc_inact_pane_g4

0xc26a,	// (0x00039e2b) bg_popup_call_poc_inact_pane_g5

0xb2ef,	// (0x00038eb0) popup_call_poc_act_window_t1_ParamLimits

0xb2ef,	// (0x00038eb0) popup_call_poc_act_window_t1

0xb317,	// (0x00038ed8) popup_call_poc_act_window_t2_ParamLimits

0xb317,	// (0x00038ed8) popup_call_poc_act_window_t2

0xb33f,	// (0x00038f00) popup_call_poc_act_window_t3_ParamLimits

0xb33f,	// (0x00038f00) popup_call_poc_act_window_t3

0xb367,	// (0x00038f28) popup_call_poc_act_window_t4_ParamLimits

0xb367,	// (0x00038f28) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0003d0c3) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0003d0c3) popup_call_poc_act_window_t

0xc272,	// (0x00039e33) bg_popup_call_poc_inact_pane_g6

0xc27a,	// (0x00039e3b) bg_popup_call_poc_inact_pane_g7

0xc282,	// (0x00039e43) bg_popup_call_poc_inact_pane_g8

0xb379,	// (0x00038f3a) popup_call_poc_inact_window_g2

0xc28a,	// (0x00039e4b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5ab,	// (0x0003d16c) bg_popup_call_poc_inact_pane_g

0xb381,	// (0x00038f42) popup_call_poc_inact_window_t1_ParamLimits

0xb381,	// (0x00038f42) popup_call_poc_inact_window_t1

0xb396,	// (0x00038f57) popup_call_poc_inact_window_t2_ParamLimits

0xb396,	// (0x00038f57) popup_call_poc_inact_window_t2

0xb3ab,	// (0x00038f6c) popup_call_poc_inact_window_t3_ParamLimits

0xb3ab,	// (0x00038f6c) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0003d0cc) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0003d0cc) popup_call_poc_inact_window_t

0xc3cf,	// (0x00039f90) context_pane_ParamLimits

0x4be3,	// (0x000327a4) signal_pane_ParamLimits

0xa509,	// (0x000380ca) main_call2_pane

0x4b72,	// (0x00032733) popup_phob_thumbnail2_window_ParamLimits

0x4b72,	// (0x00032733) popup_phob_thumbnail2_window

0x421e,	// (0x00031ddf) aid_hotspot_pointer_arrow_pane

0x4226,	// (0x00031de7) aid_hotspot_pointer_hand_pane

0x4953,	// (0x00032514) phob_pre_status_pane_g5

0x25eb,	// (0x000301ac) cams_zoom_pane_ParamLimits

0x25fa,	// (0x000301bb) image_vga_pane_ParamLimits

0x2614,	// (0x000301d5) main_camera_pane_g1_ParamLimits

0x2626,	// (0x000301e7) main_camera_pane_g2_ParamLimits

0x2636,	// (0x000301f7) main_camera_pane_g3_ParamLimits

0x2646,	// (0x00030207) main_camera_pane_g4_ParamLimits

0x2656,	// (0x00030217) main_camera_pane_g5_ParamLimits

0x2666,	// (0x00030227) main_camera_pane_g6_ParamLimits

0x2676,	// (0x00030237) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0003cdcb) main_camera_pane_g_ParamLimits

0x2686,	// (0x00030247) main_camera_pane_t1_ParamLimits

0x269c,	// (0x0003025d) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0003cddc) main_camera_pane_t_ParamLimits

0xa253,	// (0x00037e14) bg_popup_preview_window_pane_cp01_ParamLimits

0xa253,	// (0x00037e14) bg_popup_preview_window_pane_cp01

0xb3c0,	// (0x00038f81) popup_phob_thumbnail2_window_g1_ParamLimits

0xb3c0,	// (0x00038f81) popup_phob_thumbnail2_window_g1

0x9ff8,	// (0x00037bb9) call2_cli_visual_pane

0x463d,	// (0x000321fe) popup_call2_audio_conf_window_ParamLimits

0x463d,	// (0x000321fe) popup_call2_audio_conf_window

0x465d,	// (0x0003221e) popup_call2_audio_first_window_ParamLimits

0x465d,	// (0x0003221e) popup_call2_audio_first_window

0x46f3,	// (0x000322b4) popup_call2_audio_in_window_ParamLimits

0x46f3,	// (0x000322b4) popup_call2_audio_in_window

0x473b,	// (0x000322fc) popup_call2_audio_out_window_ParamLimits

0x473b,	// (0x000322fc) popup_call2_audio_out_window

0x47a5,	// (0x00032366) popup_call2_audio_second_window_ParamLimits

0x47a5,	// (0x00032366) popup_call2_audio_second_window

0x480b,	// (0x000323cc) popup_call2_audio_wait_window_ParamLimits

0x480b,	// (0x000323cc) popup_call2_audio_wait_window

0x9ff8,	// (0x00037bb9) bg_popup_call2_act_pane_cp03

0xa235,	// (0x00037df6) list_conf_pane_cp

0xb3cc,	// (0x00038f8d) popup_call2_audio_conf_window_t1

0xb3da,	// (0x00038f9b) list_single_graphic_popup_conf2_pane_ParamLimits

0xb3da,	// (0x00038f9b) list_single_graphic_popup_conf2_pane

0xac97,	// (0x00038858) list_highlight_pane_cp04

0xb3ed,	// (0x00038fae) list_single_graphic_popup_conf2_pane_g1

0xaca8,	// (0x00038869) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0003d0d3) list_single_graphic_popup_conf2_pane_g

0xb3f7,	// (0x00038fb8) list_single_graphic_popup_conf2_pane_t1

0xb405,	// (0x00038fc6) bg_popup_call2_act_pane_cp01_ParamLimits

0xb405,	// (0x00038fc6) bg_popup_call2_act_pane_cp01

0xb48f,	// (0x00039050) call_type_pane_cp05_ParamLimits

0xb48f,	// (0x00039050) call_type_pane_cp05

0xb4e3,	// (0x000390a4) popup_call2_audio_second_window_g1_ParamLimits

0xb4e3,	// (0x000390a4) popup_call2_audio_second_window_g1

0xb537,	// (0x000390f8) popup_call2_audio_second_window_g2_ParamLimits

0xb537,	// (0x000390f8) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0003d0d8) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0003d0d8) popup_call2_audio_second_window_g

0xb59c,	// (0x0003915d) popup_call2_audio_second_window_t1_ParamLimits

0xb59c,	// (0x0003915d) popup_call2_audio_second_window_t1

0xb657,	// (0x00039218) popup_call2_audio_second_window_t2_ParamLimits

0xb657,	// (0x00039218) popup_call2_audio_second_window_t2

0xb6aa,	// (0x0003926b) popup_call2_audio_second_window_t3_ParamLimits

0xb6aa,	// (0x0003926b) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0003d0df) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0003d0df) popup_call2_audio_second_window_t

0x9ff8,	// (0x00037bb9) bg_popup_call2_in_pane_cp02

0xa002,	// (0x00037bc3) call_type_pane_cp04

0xa00a,	// (0x00037bcb) popup_call2_audio_wait_window_g1

0xa012,	// (0x00037bd3) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0003ccba) popup_call2_audio_wait_window_g

0xa01a,	// (0x00037bdb) popup_call2_audio_wait_window_t3

0xb79d,	// (0x0003935e) bg_popup_call2_act_pane_ParamLimits

0xb79d,	// (0x0003935e) bg_popup_call2_act_pane

0xb85d,	// (0x0003941e) call_type_pane_cp03_ParamLimits

0xb85d,	// (0x0003941e) call_type_pane_cp03

0xb8c1,	// (0x00039482) popup_call2_audio_first_window_g1_ParamLimits

0xb8c1,	// (0x00039482) popup_call2_audio_first_window_g1

0xb931,	// (0x000394f2) popup_call2_audio_first_window_g2_ParamLimits

0xb931,	// (0x000394f2) popup_call2_audio_first_window_g2

0xb027,	// (0x00038be8) popup_call2_audio_first_window_g3_ParamLimits

0xb027,	// (0x00038be8) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0003d0e8) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0003d0e8) popup_call2_audio_first_window_g

0xba0f,	// (0x000395d0) popup_call2_audio_first_window_t1_ParamLimits

0xba0f,	// (0x000395d0) popup_call2_audio_first_window_t1

0xbb12,	// (0x000396d3) popup_call2_audio_first_window_t4_ParamLimits

0xbb12,	// (0x000396d3) popup_call2_audio_first_window_t4

0xbbf5,	// (0x000397b6) popup_call2_audio_first_window_t5_ParamLimits

0xbbf5,	// (0x000397b6) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0003d0f3) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0003d0f3) popup_call2_audio_first_window_t

0xa24b,	// (0x00037e0c) bg_popup_call2_act_pane_g1

0xc2a2,	// (0x00039e63) popup_cale_lunar_info_window_t1

0xc2b0,	// (0x00039e71) popup_cale_lunar_info_window_t2

0xc2be,	// (0x00039e7f) popup_cale_lunar_info_window_t3

0x9ff8,	// (0x00037bb9) bg_popup_call2_bubble_pane

0xbcf6,	// (0x000398b7) bg_popup_call2_in_pane_cp01_ParamLimits

0xbcf6,	// (0x000398b7) bg_popup_call2_in_pane_cp01

0x9cd4,	// (0x00037895) call_type_pane_cp02

0xbd3e,	// (0x000398ff) popup_call2_audio_out_window_g1_ParamLimits

0xbd3e,	// (0x000398ff) popup_call2_audio_out_window_g1

0xbd6a,	// (0x0003992b) popup_call2_audio_out_window_g2_ParamLimits

0xbd6a,	// (0x0003992b) popup_call2_audio_out_window_g2

0xbd92,	// (0x00039953) popup_call2_audio_out_window_g3_ParamLimits

0xbd92,	// (0x00039953) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0003d0fc) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0003d0fc) popup_call2_audio_out_window_g

0xbdcd,	// (0x0003998e) popup_call2_audio_out_window_t1_ParamLimits

0xbdcd,	// (0x0003998e) popup_call2_audio_out_window_t1

0xbe2c,	// (0x000399ed) popup_call2_audio_out_window_t2_ParamLimits

0xbe2c,	// (0x000399ed) popup_call2_audio_out_window_t2

0xbe80,	// (0x00039a41) popup_call2_audio_out_window_t3_ParamLimits

0xbe80,	// (0x00039a41) popup_call2_audio_out_window_t3

0xbe96,	// (0x00039a57) popup_call2_audio_out_window_t4_ParamLimits

0xbe96,	// (0x00039a57) popup_call2_audio_out_window_t4

0xbeac,	// (0x00039a6d) popup_call2_audio_out_window_t5_ParamLimits

0xbeac,	// (0x00039a6d) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0003d105) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0003d105) popup_call2_audio_out_window_t

0xbf10,	// (0x00039ad1) bg_popup_call2_in_pane_ParamLimits

0xbf10,	// (0x00039ad1) bg_popup_call2_in_pane

0xbf6c,	// (0x00039b2d) popup_call2_audio_in_window_g1_ParamLimits

0xbf6c,	// (0x00039b2d) popup_call2_audio_in_window_g1

0xbfa4,	// (0x00039b65) popup_call2_audio_in_window_g2_ParamLimits

0xbfa4,	// (0x00039b65) popup_call2_audio_in_window_g2

0xbfdc,	// (0x00039b9d) popup_call2_audio_in_window_g3_ParamLimits

0xbfdc,	// (0x00039b9d) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0003d112) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0003d112) popup_call2_audio_in_window_g

0xc034,	// (0x00039bf5) popup_call2_audio_in_window_t1_ParamLimits

0xc034,	// (0x00039bf5) popup_call2_audio_in_window_t1

0xc0b4,	// (0x00039c75) popup_call2_audio_in_window_t2_ParamLimits

0xc0b4,	// (0x00039c75) popup_call2_audio_in_window_t2

0xc134,	// (0x00039cf5) popup_call2_audio_in_window_t3_ParamLimits

0xc134,	// (0x00039cf5) popup_call2_audio_in_window_t3

0xc14e,	// (0x00039d0f) popup_call2_audio_in_window_t4_ParamLimits

0xc14e,	// (0x00039d0f) popup_call2_audio_in_window_t4

0xc160,	// (0x00039d21) popup_call2_audio_in_window_t5_ParamLimits

0xc160,	// (0x00039d21) popup_call2_audio_in_window_t5

0xc175,	// (0x00039d36) popup_call2_audio_in_window_t6_ParamLimits

0xc175,	// (0x00039d36) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0003d11b) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0003d11b) popup_call2_audio_in_window_t

0xa24b,	// (0x00037e0c) bg_popup_call2_in_pane_g1

0xc2cc,	// (0x00039e8d) popup_cale_lunar_info_window_t4

0x0003,

0xf5d5,	// (0x0003d196) popup_cale_lunar_info_window_t

0xa253,	// (0x00037e14) bg_popup_call2_rect_pane_ParamLimits

0xa253,	// (0x00037e14) bg_popup_call2_rect_pane

0x9ff8,	// (0x00037bb9) call2_cli_visual_graphic_pane

0x9ff8,	// (0x00037bb9) call2_cli_visual_text_pane

0x4c72,	// (0x00032833) smil_status_volume_pane_g3

0x0002,

0xa379,	// (0x00037f3a) call2_cli_visual_graphic_pane_g1

0xa379,	// (0x00037f3a) call2_cli_visual_graphic_pane_g2

0xa379,	// (0x00037f3a) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0003d128) call2_cli_visual_graphic_pane_g

0xc18a,	// (0x00039d4b) bg_popup_call2_rect_pane_g1

0xa417,	// (0x00037fd8) bg_popup_call2_rect_pane_g2

0xc192,	// (0x00039d53) bg_popup_call2_rect_pane_g3

0xc19a,	// (0x00039d5b) bg_popup_call2_rect_pane_g4

0xc1a2,	// (0x00039d63) bg_popup_call2_rect_pane_g5

0xc1aa,	// (0x00039d6b) bg_popup_call2_rect_pane_g6

0xc1b2,	// (0x00039d73) bg_popup_call2_rect_pane_g7

0xc1ba,	// (0x00039d7b) bg_popup_call2_rect_pane_g8

0xc1c2,	// (0x00039d83) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0003d12f) bg_popup_call2_rect_pane_g

0xc1ca,	// (0x00039d8b) bg_popup_call2_bubble_pane_g1

0xc1d2,	// (0x00039d93) bg_popup_call2_bubble_pane_g2

0xc1da,	// (0x00039d9b) bg_popup_call2_bubble_pane_g3

0xc1e2,	// (0x00039da3) bg_popup_call2_bubble_pane_g4

0xc1ea,	// (0x00039dab) bg_popup_call2_bubble_pane_g5

0xc1f2,	// (0x00039db3) bg_popup_call2_bubble_pane_g6

0xc1fa,	// (0x00039dbb) bg_popup_call2_bubble_pane_g7

0xc202,	// (0x00039dc3) bg_popup_call2_bubble_pane_g8

0xc20a,	// (0x00039dcb) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0003d142) bg_popup_call2_bubble_pane_g

0x20ef,	// (0x0002fcb0) aid_cale_week_size_cell_pane

0x26b2,	// (0x00030273) aid_cams_cif_uncrop_pane_ParamLimits

0x26b2,	// (0x00030273) aid_cams_cif_uncrop_pane

0x2867,	// (0x00030428) aid_cams_size_cell_ParamLimits

0x2867,	// (0x00030428) aid_cams_size_cell

0x287b,	// (0x0003043c) grid_cams_pane_ParamLimits

0x2895,	// (0x00030456) linegrid_cams_pane_ParamLimits

0x2a92,	// (0x00030653) call_video_pane_t1

0x2ab0,	// (0x00030671) call_video_pane_t2

0x0001,

0xf26e,	// (0x0003ce2f) call_video_pane_t

0x2ed6,	// (0x00030a97) aid_cale_month_size_cell_pane_ParamLimits

0x2ed6,	// (0x00030a97) aid_cale_month_size_cell_pane

0xf61e,	// (0x0003d1df) smil_status_volume_pane_g

0x4c7f,	// (0x00032840) volume_smil_pane_ParamLimits

0x1c3a,	// (0x0002f7fb) aid_popup2_width_pane

0x202b,	// (0x0002fbec) cell_qdial_pane_g4_ParamLimits

0x202b,	// (0x0002fbec) cell_qdial_pane_g4

0x3c28,	// (0x000317e9) aid_blid_cardinal_pane_ParamLimits

0x3c34,	// (0x000317f5) aid_blid_destination_pane_ParamLimits

0x3c34,	// (0x000317f5) aid_blid_destination_pane

0xa253,	// (0x00037e14) bg_popup_call_poc_act_pane_ParamLimits

0xa253,	// (0x00037e14) bg_popup_call_poc_act_pane

0xa253,	// (0x00037e14) bg_popup_call_poc_inact_pane_ParamLimits

0xa253,	// (0x00037e14) bg_popup_call_poc_inact_pane

0xc212,	// (0x00039dd3) bg_popup_call_poc_act_pane_g1

0xc21a,	// (0x00039ddb) bg_popup_call_poc_act_pane_g2

0xc222,	// (0x00039de3) bg_popup_call_poc_act_pane_g3

0xc1e2,	// (0x00039da3) bg_popup_call_poc_act_pane_g4

0xc1ea,	// (0x00039dab) bg_popup_call_poc_act_pane_g5

0xc22a,	// (0x00039deb) bg_popup_call_poc_act_pane_g6

0xc1fa,	// (0x00039dbb) bg_popup_call_poc_act_pane_g7

0xc232,	// (0x00039df3) bg_popup_call_poc_act_pane_g8

0x9ff8,	// (0x00037bb9) main_usb_pane

0x4b4d,	// (0x0003270e) popup_cale_lunar_info_window

0x2d7c,	// (0x0003093d) im_reading_pane_t1_ParamLimits

0xa60a,	// (0x000381cb) list_im_pane_ParamLimits

0xa61b,	// (0x000381dc) scroll_pane_cp07_ParamLimits

0x9ff8,	// (0x00037bb9) grid_highlight_pane_cp012

0xa253,	// (0x00037e14) mup_scale_pane_ParamLimits

0xb113,	// (0x00038cd4) main_usb_pane_g1_ParamLimits

0xb113,	// (0x00038cd4) main_usb_pane_g1

0x4868,	// (0x00032429) main_usb_pane_g2_ParamLimits

0x4868,	// (0x00032429) main_usb_pane_g2

0x0001,

0xf5be,	// (0x0003d17f) main_usb_pane_g_ParamLimits

0xf5be,	// (0x0003d17f) main_usb_pane_g

0x487e,	// (0x0003243f) main_usb_pane_t1_ParamLimits

0x487e,	// (0x0003243f) main_usb_pane_t1

0x4890,	// (0x00032451) main_usb_pane_t2_ParamLimits

0x4890,	// (0x00032451) main_usb_pane_t2

0x48a2,	// (0x00032463) main_usb_pane_t3_ParamLimits

0x48a2,	// (0x00032463) main_usb_pane_t3

0x48b4,	// (0x00032475) main_usb_pane_t4_ParamLimits

0x48b4,	// (0x00032475) main_usb_pane_t4

0x48c6,	// (0x00032487) main_usb_pane_t5_ParamLimits

0x48c6,	// (0x00032487) main_usb_pane_t5

0x48d8,	// (0x00032499) main_usb_pane_t6_ParamLimits

0x48d8,	// (0x00032499) main_usb_pane_t6

0x0005,

0xf5c3,	// (0x0003d184) main_usb_pane_t_ParamLimits

0x3bd7,	// (0x00031798) aid_text_placing

0x3be0,	// (0x000317a1) main_location2_pane_t1_ParamLimits

0x3bf2,	// (0x000317b3) main_location2_pane_t2_ParamLimits

0x3c04,	// (0x000317c5) main_location2_pane_t3_ParamLimits

0x3c16,	// (0x000317d7) main_location2_pane_t4_ParamLimits

0x3c16,	// (0x000317d7) main_location2_pane_t4

0xf3cf,	// (0x0003cf90) main_location2_pane_t_ParamLimits

0xa28f,	// (0x00037e50) find_pinb_pane_g2_ParamLimits

0xa28f,	// (0x00037e50) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0003cce0) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0003cce0) find_pinb_pane_g

0xa29b,	// (0x00037e5c) find_pinb_pane_t1_ParamLimits

0xa2ad,	// (0x00037e6e) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0003cce5) find_pinb_pane_t_ParamLimits

0x9ff8,	// (0x00037bb9) main_call3_pane

0x33bd,	// (0x00030f7e) cale_month_day_heading_pane_t1_ParamLimits

0x33ff,	// (0x00030fc0) cale_month_day_heading_pane_t2_ParamLimits

0x3434,	// (0x00030ff5) cale_month_day_heading_pane_t3_ParamLimits

0x3469,	// (0x0003102a) cale_month_day_heading_pane_t4_ParamLimits

0x34a6,	// (0x00031067) cale_month_day_heading_pane_t5_ParamLimits

0x34eb,	// (0x000310ac) cale_month_day_heading_pane_t6_ParamLimits

0x3530,	// (0x000310f1) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0003ce67) cale_month_day_heading_pane_t_ParamLimits

0xa891,	// (0x00038452) smil_status_volume_pane

0x4361,	// (0x00031f22) postcard_address_pane_ParamLimits

0x4361,	// (0x00031f22) postcard_address_pane

0x4373,	// (0x00031f34) postcard_message_pane_ParamLimits

0x4373,	// (0x00031f34) postcard_message_pane

0x4845,	// (0x00032406) call2_cli_visual_pane_t1_ParamLimits

0x4845,	// (0x00032406) call2_cli_visual_pane_t1

0x4e34,	// (0x000329f5) postcard_message_pane_t1_ParamLimits

0x4e34,	// (0x000329f5) postcard_message_pane_t1

0x4e1d,	// (0x000329de) postcard_address_pane_t1_ParamLimits

0x4e1d,	// (0x000329de) postcard_address_pane_t1

0x4e09,	// (0x000329ca) popup_call3_audio_in_window_ParamLimits

0x4e09,	// (0x000329ca) popup_call3_audio_in_window

0x4c94,	// (0x00032855) bg_popup_call3_in_pane_ParamLimits

0x4c94,	// (0x00032855) bg_popup_call3_in_pane

0x4d0a,	// (0x000328cb) popup_call3_audio_in_window_g1_ParamLimits

0x4d0a,	// (0x000328cb) popup_call3_audio_in_window_g1

0x4d2a,	// (0x000328eb) popup_call3_audio_in_window_g2_ParamLimits

0x4d2a,	// (0x000328eb) popup_call3_audio_in_window_g2

0x4d4a,	// (0x0003290b) popup_call3_audio_in_window_g3_ParamLimits

0x4d4a,	// (0x0003290b) popup_call3_audio_in_window_g3

0x0003,

0xf625,	// (0x0003d1e6) popup_call3_audio_in_window_g_ParamLimits

0xf625,	// (0x0003d1e6) popup_call3_audio_in_window_g

0x4d7b,	// (0x0003293c) popup_call3_audio_in_window_t1_ParamLimits

0x4d7b,	// (0x0003293c) popup_call3_audio_in_window_t1

0x4db9,	// (0x0003297a) popup_call3_audio_in_window_t2_ParamLimits

0x4db9,	// (0x0003297a) popup_call3_audio_in_window_t2

0x4df7,	// (0x000329b8) popup_call3_audio_in_window_t3_ParamLimits

0x4df7,	// (0x000329b8) popup_call3_audio_in_window_t3

0x0002,

0xf62e,	// (0x0003d1ef) popup_call3_audio_in_window_t_ParamLimits

0xf62e,	// (0x0003d1ef) popup_call3_audio_in_window_t

0xa509,	// (0x000380ca) bg_popup_call3_rect_pane

0xc18a,	// (0x00039d4b) bg_popup_call3_rect_pane_g1

0xa417,	// (0x00037fd8) bg_popup_call3_rect_pane_g2

0xc192,	// (0x00039d53) bg_popup_call3_rect_pane_g3

0xc19a,	// (0x00039d5b) bg_popup_call3_rect_pane_g4

0xc1a2,	// (0x00039d63) bg_popup_call3_rect_pane_g5

0xc1aa,	// (0x00039d6b) bg_popup_call3_rect_pane_g6

0xc1b2,	// (0x00039d73) bg_popup_call3_rect_pane_g7

0x3f20,	// (0x00031ae1) mup_visualizer_osc_pane

0xb035,	// (0x00038bf6) mup_visualizer_spec_pane

0x4cc4,	// (0x00032885) call3_video_qcif_pane_ParamLimits

0x4cc4,	// (0x00032885) call3_video_qcif_pane

0x4cd7,	// (0x00032898) call3_video_qcif_uncrop_pane_ParamLimits

0x4cd7,	// (0x00032898) call3_video_qcif_uncrop_pane

0x4ce5,	// (0x000328a6) call3_video_subqcif_pane_ParamLimits

0x4ce5,	// (0x000328a6) call3_video_subqcif_pane

0x4cf9,	// (0x000328ba) call3_video_subqcif_uncrop_pane_ParamLimits

0x4cf9,	// (0x000328ba) call3_video_subqcif_uncrop_pane

0x4d6a,	// (0x0003292b) popup_call3_audio_in_window_g4_ParamLimits

0x4d6a,	// (0x0003292b) popup_call3_audio_in_window_g4

0x4c61,	// (0x00032822) mup_spec_half_pane

0x4c6a,	// (0x0003282b) mup_spec_half_pane_cp

0xc42f,	// (0x00039ff0) mup_osc_middle_pane

0xc438,	// (0x00039ff9) mup_visualizer_osc_pane_g1

0x4c41,	// (0x00032802) mup_spec_bar_pane_ParamLimits

0x4c41,	// (0x00032802) mup_spec_bar_pane

0xc41c,	// (0x00039fdd) mup_spec_bar_pane_g1

0xc426,	// (0x00039fe7) mup_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0003d1da) mup_spec_bar_pane_g

0x20ef,	// (0x0002fcb0) aid_cale_week_size_cell_pane_ParamLimits

0x2109,	// (0x0002fcca) bg_cale_heading_pane_ParamLimits

0xa462,	// (0x00038023) bg_cale_pane_cp01_ParamLimits

0x2121,	// (0x0002fce2) cale_week_corner_pane_ParamLimits

0x2140,	// (0x0002fd01) cale_week_day_heading_pane_ParamLimits

0x215d,	// (0x0002fd1e) cale_week_scroll_pane_g1_ParamLimits

0x2170,	// (0x0002fd31) cale_week_scroll_pane_g2_ParamLimits

0x2188,	// (0x0002fd49) cale_week_scroll_pane_g3_ParamLimits

0x21a0,	// (0x0002fd61) cale_week_scroll_pane_g4_ParamLimits

0x21b8,	// (0x0002fd79) cale_week_scroll_pane_g5_ParamLimits

0x21d8,	// (0x0002fd99) cale_week_scroll_pane_g6_ParamLimits

0x21f8,	// (0x0002fdb9) cale_week_scroll_pane_g7_ParamLimits

0x2218,	// (0x0002fdd9) cale_week_scroll_pane_g8_ParamLimits

0x223c,	// (0x0002fdfd) cale_week_scroll_pane_g9_ParamLimits

0x2254,	// (0x0002fe15) cale_week_scroll_pane_g10_ParamLimits

0x226c,	// (0x0002fe2d) cale_week_scroll_pane_g11_ParamLimits

0x2284,	// (0x0002fe45) cale_week_scroll_pane_g12_ParamLimits

0x229c,	// (0x0002fe5d) cale_week_scroll_pane_g13_ParamLimits

0x229c,	// (0x0002fe5d) cale_week_scroll_pane_g14_ParamLimits

0x229c,	// (0x0002fe5d) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0003cd71) cale_week_scroll_pane_g_ParamLimits

0x22d8,	// (0x0002fe99) cale_week_time_pane_ParamLimits

0x22fc,	// (0x0002febd) grid_cale_week_pane_ParamLimits

0xa47f,	// (0x00038040) listscroll_cale_week_pane_t1

0xa491,	// (0x00038052) scroll_pane_cp08_ParamLimits

0x2f36,	// (0x00030af7) cale_month_corner_pane_ParamLimits

0xa867,	// (0x00038428) cale_month_pane_t1

0x3350,	// (0x00030f11) cale_month_week_pane_ParamLimits

0x3999,	// (0x0003155a) popup_call_status_window_g1_ParamLimits

0x39ad,	// (0x0003156e) popup_call_status_window_g2_ParamLimits

0x39c1,	// (0x00031582) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0003cf17) popup_call_status_window_g_ParamLimits

0xac17,	// (0x000387d8) aid_call2_pane

0x4197,	// (0x00031d58) msg_header_pane_g1

0x4361,	// (0x00031f22) postcard_address2_pane_ParamLimits

0x4361,	// (0x00031f22) postcard_address2_pane

0x4373,	// (0x00031f34) postcard_message2_pane_ParamLimits

0x4373,	// (0x00031f34) postcard_message2_pane

0x4bf1,	// (0x000327b2) message2_row_pane_ParamLimits

0x4bf1,	// (0x000327b2) message2_row_pane

0x4c0e,	// (0x000327cf) address2_row_pane_ParamLimits

0x4c0e,	// (0x000327cf) address2_row_pane

0xc3ea,	// (0x00039fab) postcard_message2_row_pane_g1

0xc3f2,	// (0x00039fb3) postcard_message2_row_pane_t1

0xc3ea,	// (0x00039fab) address2_row_pane_g1

0xc3f2,	// (0x00039fb3) address2_row_pane_t1

0x2560,	// (0x00030121) aid_size_cell_vorec

0x9ff8,	// (0x00037bb9) main_rss_pane

0x4c21,	// (0x000327e2) rss_list_single_pane_ParamLimits

0x4c21,	// (0x000327e2) rss_list_single_pane

0xc400,	// (0x00039fc1) rss_list_single_pane_t1

0xc40e,	// (0x00039fcf) rss_list_single_pane_t2

0x0001,

0xf614,	// (0x0003d1d5) rss_list_single_pane_t

0x9ff8,	// (0x00037bb9) main_camera2_pane

0x9ff8,	// (0x00037bb9) main_video2_pane

0x0b1f,	// (0x0002e6e0) cams_zoom_pane_cp2_ParamLimits

0x0b1f,	// (0x0002e6e0) cams_zoom_pane_cp2

0x0b3f,	// (0x0002e700) image2_vga_pane_ParamLimits

0x0b3f,	// (0x0002e700) image2_vga_pane

0x0b90,	// (0x0002e751) main_camera2_pane_g1_ParamLimits

0x0b90,	// (0x0002e751) main_camera2_pane_g1

0x0bb0,	// (0x0002e771) main_camera2_pane_g2_ParamLimits

0x0bb0,	// (0x0002e771) main_camera2_pane_g2

0x0bd0,	// (0x0002e791) main_camera2_pane_g3_ParamLimits

0x0bd0,	// (0x0002e791) main_camera2_pane_g3

0x0bf0,	// (0x0002e7b1) main_camera2_pane_g4_ParamLimits

0x0bf0,	// (0x0002e7b1) main_camera2_pane_g4

0x0c10,	// (0x0002e7d1) main_camera2_pane_g5_ParamLimits

0x0c10,	// (0x0002e7d1) main_camera2_pane_g5

0x0c30,	// (0x0002e7f1) main_camera2_pane_g6_ParamLimits

0x0c30,	// (0x0002e7f1) main_camera2_pane_g6

0x0c50,	// (0x0002e811) main_camera2_pane_g7_ParamLimits

0x0c50,	// (0x0002e811) main_camera2_pane_g7

0x0c70,	// (0x0002e831) main_camera2_pane_g8_ParamLimits

0x0c70,	// (0x0002e831) main_camera2_pane_g8

0x0008,

0xf635,	// (0x0003d1f6) main_camera2_pane_g_ParamLimits

0xf635,	// (0x0003d1f6) main_camera2_pane_g

0x0cb0,	// (0x0002e871) main_camera2_pane_t1_ParamLimits

0x0cb0,	// (0x0002e871) main_camera2_pane_t1

0x0ce5,	// (0x0002e8a6) main_camera2_pane_t2_ParamLimits

0x0ce5,	// (0x0002e8a6) main_camera2_pane_t2

0x0d0b,	// (0x0002e8cc) main_camera2_pane_t3_ParamLimits

0x0d0b,	// (0x0002e8cc) main_camera2_pane_t3

0x0d69,	// (0x0002e92a) main_camera2_pane_t4_ParamLimits

0x0d69,	// (0x0002e92a) main_camera2_pane_t4

0x0006,

0xf648,	// (0x0003d209) main_camera2_pane_t_ParamLimits

0xf648,	// (0x0003d209) main_camera2_pane_t

0x0dfb,	// (0x0002e9bc) cams_zoom_pane_cp4_ParamLimits

0x0dfb,	// (0x0002e9bc) cams_zoom_pane_cp4

0x0e11,	// (0x0002e9d2) image2_cif_pane_ParamLimits

0x0e11,	// (0x0002e9d2) image2_cif_pane

0x0e3c,	// (0x0002e9fd) image2_subqcif_pane_ParamLimits

0x0e3c,	// (0x0002e9fd) image2_subqcif_pane

0x0e56,	// (0x0002ea17) main_video2_pane_g1_ParamLimits

0x0e56,	// (0x0002ea17) main_video2_pane_g1

0x0e70,	// (0x0002ea31) main_video2_pane_g2_ParamLimits

0x0e70,	// (0x0002ea31) main_video2_pane_g2

0x0e86,	// (0x0002ea47) main_video2_pane_g3_ParamLimits

0x0e86,	// (0x0002ea47) main_video2_pane_g3

0x0e9c,	// (0x0002ea5d) main_video2_pane_g4_ParamLimits

0x0e9c,	// (0x0002ea5d) main_video2_pane_g4

0x0eb2,	// (0x0002ea73) main_video2_pane_g5_ParamLimits

0x0eb2,	// (0x0002ea73) main_video2_pane_g5

0x0ec8,	// (0x0002ea89) main_video2_pane_g6_ParamLimits

0x0ec8,	// (0x0002ea89) main_video2_pane_g6

0x0005,

0xf657,	// (0x0003d218) main_video2_pane_g_ParamLimits

0xf657,	// (0x0003d218) main_video2_pane_g

0x0ee2,	// (0x0002eaa3) main_video2_pane_t1_ParamLimits

0x0ee2,	// (0x0002eaa3) main_video2_pane_t1

0x0f06,	// (0x0002eac7) main_video2_pane_t2_ParamLimits

0x0f06,	// (0x0002eac7) main_video2_pane_t2

0x0f54,	// (0x0002eb15) main_video2_pane_t3_ParamLimits

0x0f54,	// (0x0002eb15) main_video2_pane_t3

0x0002,

0xf664,	// (0x0003d225) main_video2_pane_t_ParamLimits

0xf664,	// (0x0003d225) main_video2_pane_t

0x4993,	// (0x00032554) call_muted_g2

0x0001,

0xf606,	// (0x0003d1c7) call_muted_g

0x9ff8,	// (0x00037bb9) main_mup2_pane

0x4e7f,	// (0x00032a40) main_mup2_pane_g1_ParamLimits

0x4e7f,	// (0x00032a40) main_mup2_pane_g1

0x4e8b,	// (0x00032a4c) main_mup2_pane_g2_ParamLimits

0x4e8b,	// (0x00032a4c) main_mup2_pane_g2

0x50fa,	// (0x00032cbb) main_mup_pane_g13_cp1

0x5102,	// (0x00032cc3) mup_volume_pane_cp1

0x4ea7,	// (0x00032a68) main_mup2_pane_g4_ParamLimits

0x4ea7,	// (0x00032a68) main_mup2_pane_g4

0x4eb9,	// (0x00032a7a) main_mup2_pane_g5_ParamLimits

0x4eb9,	// (0x00032a7a) main_mup2_pane_g5

0x4ecb,	// (0x00032a8c) main_mup2_pane_g6_ParamLimits

0x4ecb,	// (0x00032a8c) main_mup2_pane_g6

0x4edd,	// (0x00032a9e) main_mup2_pane_g7_ParamLimits

0x4edd,	// (0x00032a9e) main_mup2_pane_g7

0x0006,

0xf66b,	// (0x0003d22c) main_mup2_pane_g_ParamLimits

0xf66b,	// (0x0003d22c) main_mup2_pane_g

0x4ef5,	// (0x00032ab6) main_mup2_pane_t1_ParamLimits

0x4ef5,	// (0x00032ab6) main_mup2_pane_t1

0x4f0b,	// (0x00032acc) main_mup2_pane_t2_ParamLimits

0x4f0b,	// (0x00032acc) main_mup2_pane_t2

0x4f21,	// (0x00032ae2) main_mup2_pane_t3_ParamLimits

0x4f21,	// (0x00032ae2) main_mup2_pane_t3

0x4f37,	// (0x00032af8) main_mup2_pane_t4_ParamLimits

0x4f37,	// (0x00032af8) main_mup2_pane_t4

0x4f4f,	// (0x00032b10) main_mup2_pane_t5_ParamLimits

0x4f4f,	// (0x00032b10) main_mup2_pane_t5

0x4f67,	// (0x00032b28) main_mup2_pane_t6_ParamLimits

0x4f67,	// (0x00032b28) main_mup2_pane_t6

0x0005,

0xf67a,	// (0x0003d23b) main_mup2_pane_t_ParamLimits

0xf67a,	// (0x0003d23b) main_mup2_pane_t

0x4f97,	// (0x00032b58) mup2_visualizer_pane_ParamLimits

0x4f97,	// (0x00032b58) mup2_visualizer_pane

0x4fc5,	// (0x00032b86) mup_progress_pane_cp_ParamLimits

0x4fc5,	// (0x00032b86) mup_progress_pane_cp

0x50e5,	// (0x00032ca6) mup_volume_pane_cp_ParamLimits

0x50e5,	// (0x00032ca6) mup_volume_pane_cp

0x4fd9,	// (0x00032b9a) mup2_visualizer_pane_g1_ParamLimits

0x4fd9,	// (0x00032b9a) mup2_visualizer_pane_g1

0xc46f,	// (0x0003a030) mup2_visualizer_pane_g2_ParamLimits

0xc46f,	// (0x0003a030) mup2_visualizer_pane_g2

0x4ff0,	// (0x00032bb1) mup2_visualizer_pane_g3_ParamLimits

0x4ff0,	// (0x00032bb1) mup2_visualizer_pane_g3

0x0002,

0xf687,	// (0x0003d248) mup2_visualizer_pane_g_ParamLimits

0xf687,	// (0x0003d248) mup2_visualizer_pane_g

0xb25c,	// (0x00038e1d) aid_size_cell_fmradio

0x080d,	// (0x0002e3ce) aid_height_parent_landcape

0xa699,	// (0x0003825a) wml_content_pane_cp

0xa6a1,	// (0x00038262) wml_tabs_pane

0xa6aa,	// (0x0003826b) popup_wml_miniature_window

0xa6b2,	// (0x00038273) scroll_pane_cp021

0xa6c6,	// (0x00038287) wml_content_pane_comp8

0x9ff8,	// (0x00037bb9) bg_popup_sub_pane_cp05

0xc48d,	// (0x0003a04e) popup_wml_miniature_window_g1

0xc495,	// (0x0003a056) wml_miniature_view_pane

0x4ffc,	// (0x00032bbd) aid_size_wml_view

0x5004,	// (0x00032bc5) wml_miniature_view_pane_g1

0x500d,	// (0x00032bce) wml_miniature_view_pane_g2

0x5016,	// (0x00032bd7) wml_miniature_view_pane_g3

0x501e,	// (0x00032bdf) wml_miniature_view_pane_g4

0x5026,	// (0x00032be7) wml_miniature_view_pane_g5

0x502e,	// (0x00032bef) wml_miniature_view_pane_g6

0x5036,	// (0x00032bf7) wml_miniature_view_pane_g7

0x503e,	// (0x00032bff) wml_miniature_view_pane_g8

0x0007,

0xf68e,	// (0x0003d24f) wml_miniature_view_pane_g

0xc49d,	// (0x0003a05e) background_graphic_ParamLimits

0xc49d,	// (0x0003a05e) background_graphic

0xc4a9,	// (0x0003a06a) wml_tabs_2_pane

0xc4b2,	// (0x0003a073) wml_tabs_3_pane_ParamLimits

0xc4b2,	// (0x0003a073) wml_tabs_3_pane

0xc4c4,	// (0x0003a085) wml_tabs_4_pane_ParamLimits

0xc4c4,	// (0x0003a085) wml_tabs_4_pane

0xc4da,	// (0x0003a09b) wml_tabs_5_pane_ParamLimits

0xc4da,	// (0x0003a09b) wml_tabs_5_pane

0xc4f4,	// (0x0003a0b5) wml_tabs_pane_g2_ParamLimits

0xc4f4,	// (0x0003a0b5) wml_tabs_pane_g2

0xc508,	// (0x0003a0c9) wml_tabs_pane_g3_ParamLimits

0xc508,	// (0x0003a0c9) wml_tabs_pane_g3

0x5046,	// (0x00032c07) wml_tabs_2_active_pane_ParamLimits

0x5046,	// (0x00032c07) wml_tabs_2_active_pane

0x505a,	// (0x00032c1b) wml_tabs_2_passive_pane_ParamLimits

0x505a,	// (0x00032c1b) wml_tabs_2_passive_pane

0x506e,	// (0x00032c2f) wml_tabs_3_active_pane_cp_ParamLimits

0x506e,	// (0x00032c2f) wml_tabs_3_active_pane_cp

0x5083,	// (0x00032c44) wml_tabs_3_passive_pane_ParamLimits

0x5083,	// (0x00032c44) wml_tabs_3_passive_pane

0x5096,	// (0x00032c57) wml_tabs_3_passive_pane_cp_ParamLimits

0x5096,	// (0x00032c57) wml_tabs_3_passive_pane_cp

0x50ad,	// (0x00032c6e) tabs_4_active_pane

0x50b5,	// (0x00032c76) tabs_4_passive_pane

0x50bf,	// (0x00032c80) tabs_4_passive_pane_cp

0x50c7,	// (0x00032c88) tabs_4_passive_pane_cp2

0x4860,	// (0x00032421) aid_height_text

0x3ef2,	// (0x00031ab3) mup_volume_cont_pane_ParamLimits

0x3ef2,	// (0x00031ab3) mup_volume_cont_pane

0x1db4,	// (0x0002f975) aid_size_cell_pinb

0x1dbe,	// (0x0002f97f) aid_size_list_pinb

0x4fb1,	// (0x00032b72) mup2_volume_cont_pane_ParamLimits

0x4fb1,	// (0x00032b72) mup2_volume_cont_pane

0x50d1,	// (0x00032c92) mup2_volume_cont_pane_g1_ParamLimits

0x50d1,	// (0x00032c92) mup2_volume_cont_pane_g1

0x0361,	// (0x0002df22) aid_size_cell_touch_ParamLimits

0x0361,	// (0x0002df22) aid_size_cell_touch

0x0549,	// (0x0002e10a) touch_pane_ParamLimits

0x0549,	// (0x0002e10a) touch_pane

0x1ceb,	// (0x0002f8ac) main_rss2_pane

0xc525,	// (0x0003a0e6) listscroll_rss2_pane

0xc52e,	// (0x0003a0ef) rss2_navigation_pane

0xc536,	// (0x0003a0f7) list_rss2_pane

0xad3c,	// (0x000388fd) scroll_pane_cp22

0xc53e,	// (0x0003a0ff) rss2_navigation_pane_g1

0xc547,	// (0x0003a108) rss2_navigation_pane_g2

0xc54f,	// (0x0003a110) rss2_navigation_pane_g3

0x0002,

0xf69f,	// (0x0003d260) rss2_navigation_pane_g

0xc557,	// (0x0003a118) rss2_navigation_pane_t1

0x510a,	// (0x00032ccb) rss2_list_single_pane_ParamLimits

0x510a,	// (0x00032ccb) rss2_list_single_pane

0xc565,	// (0x0003a126) rss2_list_single_pane_t2

0xc573,	// (0x0003a134) rss2_list_single_pane_t3_ParamLimits

0xc573,	// (0x0003a134) rss2_list_single_pane_t3

0xc590,	// (0x0003a151) rss2_list_single_pane_t4

0x3782,	// (0x00031343) smil_status_pane_g1

0x1cd1,	// (0x0002f892) main_image2_pane_ParamLimits

0x1cd1,	// (0x0002f892) main_image2_pane

0x0c90,	// (0x0002e851) main_camera2_pane_g9_ParamLimits

0x0c90,	// (0x0002e851) main_camera2_pane_g9

0x0dbe,	// (0x0002e97f) main_camera2_pane_t5_ParamLimits

0x0dbe,	// (0x0002e97f) main_camera2_pane_t5

0x4e4f,	// (0x00032a10) main_camera2_pane_t6_ParamLimits

0x4e4f,	// (0x00032a10) main_camera2_pane_t6

0x5120,	// (0x00032ce1) main_image2_pane_g1_ParamLimits

0x5120,	// (0x00032ce1) main_image2_pane_g1

0x459b,	// (0x0003215c) smil2_video_pane_ParamLimits

0x459b,	// (0x0003215c) smil2_video_pane

0x1c46,	// (0x0002f807) aid_zoom_text_primary_cp

0x1cc7,	// (0x0002f888) popup_preview_fixed_window

0xa602,	// (0x000381c3) im_reading_pane_g1

0x0b07,	// (0x0002e6c8) cams2_bc_adjust_pane_cp_ParamLimits

0x0b07,	// (0x0002e6c8) cams2_bc_adjust_pane_cp

0x0ded,	// (0x0002e9ae) cams2_bc_adjust_pane_ParamLimits

0x0ded,	// (0x0002e9ae) cams2_bc_adjust_pane

0xd454,	// (0x0003b015) cams2_bc_adjust_pane_g1

0x5136,	// (0x00032cf7) cams2_slider_pane

0x513f,	// (0x00032d00) cams2_slider_pane_g1

0x5148,	// (0x00032d09) cams2_slider_pane_g2

0x0006,

0xf6a6,	// (0x0003d267) cams2_slider_pane_g

0x05b9,	// (0x0002e17a) calc_display_pane_ParamLimits

0x05e1,	// (0x0002e1a2) calc_paper_pane_ParamLimits

0x0604,	// (0x0002e1c5) grid_calc_pane_ParamLimits

0x3a22,	// (0x000315e3) popup_clock_digital_window_t1_ParamLimits

0xb1f9,	// (0x00038dba) main_image_pane_t1

0x059b,	// (0x0002e15c) aid_size_cell_calc_ParamLimits

0x059b,	// (0x0002e15c) aid_size_cell_calc

0x0865,	// (0x0002e426) popup_blid_sat_info2_window_ParamLimits

0x0865,	// (0x0002e426) popup_blid_sat_info2_window

0xc5a6,	// (0x0003a167) aid_size_cell_blid

0xc5ae,	// (0x0003a16f) bg_popup_window_pane_cp07

0xc5d1,	// (0x0003a192) grid_popup_blid_pane

0xc5db,	// (0x0003a19c) heading_pane_cp05_ParamLimits

0xc5db,	// (0x0003a19c) heading_pane_cp05

0xc6a5,	// (0x0003a266) cell_popup_blid_pane_ParamLimits

0xc6a5,	// (0x0003a266) cell_popup_blid_pane

0xc6c9,	// (0x0003a28a) cell_popup_blid_pane_g1

0xc6d1,	// (0x0003a292) cell_popup_blid_pane_t1

0x4f81,	// (0x00032b42) mup2_indicator_pane_ParamLimits

0x4f81,	// (0x00032b42) mup2_indicator_pane

0xa509,	// (0x000380ca) mup2_visualizer_osc_pane

0xc47b,	// (0x0003a03c) mup2_visualizer_spec_pane_ParamLimits

0xc47b,	// (0x0003a03c) mup2_visualizer_spec_pane

0x5162,	// (0x00032d23) mup2_spec_half_pane

0x516b,	// (0x00032d2c) mup2_spec_half_pane_cp

0x5173,	// (0x00032d34) mup2_spec_bar_pane_ParamLimits

0x5173,	// (0x00032d34) mup2_spec_bar_pane

0xc41c,	// (0x00039fdd) mup2_spec_bar_pane_g1

0xc426,	// (0x00039fe7) mup2_spec_bar_pane_g2

0x0001,

0xf619,	// (0x0003d1da) mup2_spec_bar_pane_g

0x5193,	// (0x00032d54) mup2_osc_middle_pane

0xc438,	// (0x00039ff9) mup2_visualizer_osc_pane_g1

0x9c05,	// (0x000377c6) popup_number_entry_window_t1_ParamLimits

0x9c18,	// (0x000377d9) popup_number_entry_window_t2_ParamLimits

0x9c2a,	// (0x000377eb) popup_number_entry_window_t3_ParamLimits

0x1cf5,	// (0x0002f8b6) popup_number_entry_window_t5_ParamLimits

0x1cf5,	// (0x0002f8b6) popup_number_entry_window_t5

0xf0ca,	// (0x0003cc8b) popup_number_entry_window_t_ParamLimits

0x9c3c,	// (0x000377fd) text_title_cp2_ParamLimits

0x422e,	// (0x00031def) aid_hotspot_pointer_text2_pane

0x4284,	// (0x00031e45) main_viewer_pane_g9_ParamLimits

0x4284,	// (0x00031e45) main_viewer_pane_g9

0xa867,	// (0x00038428) cale_month_pane_t1_ParamLimits

0xa8a4,	// (0x00038465) bg_cale_pane_ParamLimits

0xa8bc,	// (0x0003847d) list_cale_pane_ParamLimits

0xa8cd,	// (0x0003848e) listscroll_cale_day_pane_t1

0xa8df,	// (0x000384a0) scroll_pane_cp09_ParamLimits

0x3f28,	// (0x00031ae9) main_mup_eq_pane_t1_ParamLimits

0x3f28,	// (0x00031ae9) main_mup_eq_pane_t1

0x3f42,	// (0x00031b03) main_mup_eq_pane_t2_ParamLimits

0x3f42,	// (0x00031b03) main_mup_eq_pane_t2

0x3f5c,	// (0x00031b1d) main_mup_eq_pane_t3_ParamLimits

0x3f5c,	// (0x00031b1d) main_mup_eq_pane_t3

0x3f78,	// (0x00031b39) main_mup_eq_pane_t4_ParamLimits

0x3f78,	// (0x00031b39) main_mup_eq_pane_t4

0x3f94,	// (0x00031b55) main_mup_eq_pane_t5_ParamLimits

0x3f94,	// (0x00031b55) main_mup_eq_pane_t5

0x3fb0,	// (0x00031b71) main_mup_eq_pane_t6_ParamLimits

0x3fb0,	// (0x00031b71) main_mup_eq_pane_t6

0x3fc4,	// (0x00031b85) main_mup_eq_pane_t7_ParamLimits

0x3fc4,	// (0x00031b85) main_mup_eq_pane_t7

0x3fd8,	// (0x00031b99) main_mup_eq_pane_t8_ParamLimits

0x3fd8,	// (0x00031b99) main_mup_eq_pane_t8

0x3fec,	// (0x00031bad) main_mup_eq_pane_t9_ParamLimits

0x3fec,	// (0x00031bad) main_mup_eq_pane_t9

0x4006,	// (0x00031bc7) main_mup_eq_pane_t10_ParamLimits

0x4006,	// (0x00031bc7) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0003d016) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0003d016) main_mup_eq_pane_t

0x40b5,	// (0x00031c76) mup_equalizer_pane_cp5_ParamLimits

0x40c9,	// (0x00031c8a) mup_equalizer_pane_cp6_ParamLimits

0x40dd,	// (0x00031c9e) mup_equalizer_pane_cp7_ParamLimits

0x1ceb,	// (0x0002f8ac) main_gallery_pane

0xc441,	// (0x0003a002) smil2_volume_pane

0xc449,	// (0x0003a00a) smil_status_volume_pane_g1_ParamLimits

0xc45c,	// (0x0003a01d) smil_status_volume_pane_g2_ParamLimits

0x4c72,	// (0x00032833) smil_status_volume_pane_g3_ParamLimits

0xf61e,	// (0x0003d1df) smil_status_volume_pane_g_ParamLimits

0xc5ae,	// (0x0003a16f) bg_popup_window_pane_cp07_ParamLimits

0xc5bc,	// (0x0003a17d) blid_firmament_pane

0x519c,	// (0x00032d5d) aid_size_cell_gallery_ParamLimits

0x519c,	// (0x00032d5d) aid_size_cell_gallery

0x51b2,	// (0x00032d73) grid_gallery_pane_ParamLimits

0x51b2,	// (0x00032d73) grid_gallery_pane

0x51cb,	// (0x00032d8c) cell_gallery_pane_ParamLimits

0x51cb,	// (0x00032d8c) cell_gallery_pane

0xc6df,	// (0x0003a2a0) bg_cell_gallery_focus_pane_ParamLimits

0xc6df,	// (0x0003a2a0) bg_cell_gallery_focus_pane

0xc6f1,	// (0x0003a2b2) cell_gallery_pane_g1_ParamLimits

0xc6f1,	// (0x0003a2b2) cell_gallery_pane_g1

0x5214,	// (0x00032dd5) cell_gallery_pane_g2_ParamLimits

0x5214,	// (0x00032dd5) cell_gallery_pane_g2

0x5221,	// (0x00032de2) cell_gallery_pane_g3_ParamLimits

0x5221,	// (0x00032de2) cell_gallery_pane_g3

0xc6fd,	// (0x0003a2be) cell_gallery_pane_g4_ParamLimits

0xc6fd,	// (0x0003a2be) cell_gallery_pane_g4

0x0003,

0xf6cc,	// (0x0003d28d) cell_gallery_pane_g_ParamLimits

0xf6cc,	// (0x0003d28d) cell_gallery_pane_g

0xc709,	// (0x0003a2ca) bg_cell_gallery_focus_pane_g1

0xc711,	// (0x0003a2d2) bg_cell_gallery_focus_pane_g2

0xc719,	// (0x0003a2da) bg_cell_gallery_focus_pane_g3

0xc721,	// (0x0003a2e2) bg_cell_gallery_focus_pane_g4

0xc729,	// (0x0003a2ea) bg_cell_gallery_focus_pane_g5

0xc731,	// (0x0003a2f2) bg_cell_gallery_focus_pane_g6

0xc739,	// (0x0003a2fa) bg_cell_gallery_focus_pane_g7

0xc741,	// (0x0003a302) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d5,	// (0x0003d296) bg_cell_gallery_focus_pane_g

0xc749,	// (0x0003a30a) aid_firma_cardinal

0xc75d,	// (0x0003a31e) blid_firmament_pane_t1

0xc774,	// (0x0003a335) blid_firmament_pane_t2

0xc78b,	// (0x0003a34c) blid_firmament_pane_t3

0xc7a2,	// (0x0003a363) blid_firmament_pane_t4

0x0003,

0xf6e6,	// (0x0003d2a7) blid_firmament_pane_t

0xc7b9,	// (0x0003a37a) blid_sat_info_pane

0xc7c9,	// (0x0003a38a) blid_sat_info_pane_g1

0xc7c9,	// (0x0003a38a) blid_sat_info_pane_g2

0x0001,

0xf6ef,	// (0x0003d2b0) blid_sat_info_pane_g

0xc7d3,	// (0x0003a394) blid_sat_info_pane_t1

0xc7e1,	// (0x0003a3a2) smil2_volume_content_pane

0xc7ea,	// (0x0003a3ab) smil2_volume_pane_g1

0xc7f2,	// (0x0003a3b3) smil2_volume_content_pane_g1

0xc7fb,	// (0x0003a3bc) smil2_volume_content_pane_g2

0xc804,	// (0x0003a3c5) smil2_volume_content_pane_g3

0xc80d,	// (0x0003a3ce) smil2_volume_content_pane_g4

0xc816,	// (0x0003a3d7) smil2_volume_content_pane_g5

0xc81f,	// (0x0003a3e0) smil2_volume_content_pane_g6

0xc828,	// (0x0003a3e9) smil2_volume_content_pane_g7

0xc831,	// (0x0003a3f2) smil2_volume_content_pane_g8

0xc83a,	// (0x0003a3fb) smil2_volume_content_pane_g9

0xc843,	// (0x0003a404) smil2_volume_content_pane_g10

0x0009,

0xf6f4,	// (0x0003d2b5) smil2_volume_content_pane_g

0x23b0,	// (0x0002ff71) cale_week_day_heading_pane_t1_ParamLimits

0x23da,	// (0x0002ff9b) cale_week_day_heading_pane_t2_ParamLimits

0x2409,	// (0x0002ffca) cale_week_day_heading_pane_t3_ParamLimits

0x2438,	// (0x0002fff9) cale_week_day_heading_pane_t4_ParamLimits

0x2467,	// (0x00030028) cale_week_day_heading_pane_t5_ParamLimits

0x249e,	// (0x0003005f) cale_week_day_heading_pane_t6_ParamLimits

0x24d5,	// (0x00030096) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0003cd92) cale_week_day_heading_pane_t_ParamLimits

0xa4ae,	// (0x0003806f) bg_cale_side_pane_ParamLimits

0x06d3,	// (0x0002e294) cale_week_time_pane_t1_ParamLimits

0x06ed,	// (0x0002e2ae) cale_week_time_pane_t2_ParamLimits

0x0707,	// (0x0002e2c8) cale_week_time_pane_t3_ParamLimits

0x0721,	// (0x0002e2e2) cale_week_time_pane_t4_ParamLimits

0x073b,	// (0x0002e2fc) cale_week_time_pane_t5_ParamLimits

0x0755,	// (0x0002e316) cale_week_time_pane_t6_ParamLimits

0x076f,	// (0x0002e330) cale_week_time_pane_t7_ParamLimits

0x0789,	// (0x0002e34a) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0003cda1) cale_week_time_pane_t_ParamLimits

0x24ff,	// (0x000300c0) cell_cale_week_pane_g2_ParamLimits

0xa4ae,	// (0x0003806f) bg_cale_side_pane_cp01_ParamLimits

0x357d,	// (0x0003113e) cale_month_week_pane_t1_ParamLimits

0x3596,	// (0x00031157) cale_month_week_pane_t2_ParamLimits

0x35af,	// (0x00031170) cale_month_week_pane_t3_ParamLimits

0x35c8,	// (0x00031189) cale_month_week_pane_t4_ParamLimits

0x35e1,	// (0x000311a2) cale_month_week_pane_t5_ParamLimits

0x35fa,	// (0x000311bb) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0003ce76) cale_month_week_pane_t_ParamLimits

0x376b,	// (0x0003132c) cell_cale_month_pane_g1_ParamLimits

0x1ceb,	// (0x0002f8ac) main_cale_event_viewer_pane

0x9bdb,	// (0x0003779c) listscroll_cale_event_viewer_pane

0xc84c,	// (0x0003a40d) list_cale_ev_pane

0xc854,	// (0x0003a415) scroll_pane_cp023

0xc860,	// (0x0003a421) field_cale_ev_pane_ParamLimits

0xc860,	// (0x0003a421) field_cale_ev_pane

0xc87e,	// (0x0003a43f) field_cale_ev_content_pane_ParamLimits

0xc87e,	// (0x0003a43f) field_cale_ev_content_pane

0xc88a,	// (0x0003a44b) field_cale_ev_pane_g1_ParamLimits

0xc88a,	// (0x0003a44b) field_cale_ev_pane_g1

0xc896,	// (0x0003a457) field_cale_ev_pane_g2_ParamLimits

0xc896,	// (0x0003a457) field_cale_ev_pane_g2

0xc8ae,	// (0x0003a46f) field_cale_ev_pane_g3_ParamLimits

0xc8ae,	// (0x0003a46f) field_cale_ev_pane_g3

0x0002,

0xf709,	// (0x0003d2ca) field_cale_ev_pane_g_ParamLimits

0xf709,	// (0x0003d2ca) field_cale_ev_pane_g

0xc8c6,	// (0x0003a487) field_cale_ev_pane_t1_ParamLimits

0xc8c6,	// (0x0003a487) field_cale_ev_pane_t1

0xa71c,	// (0x000382dd) field_cale_ev_content_pane_t1_ParamLimits

0xa71c,	// (0x000382dd) field_cale_ev_content_pane_t1

0xb0df,	// (0x00038ca0) bg_button_pane_cp01

0x20dd,	// (0x0002fc9e) listscroll_cale_week_pane_ParamLimits

0xa459,	// (0x0003801a) popup_toolbar_window_cp01

0xa47f,	// (0x00038040) listscroll_cale_week_pane_t1_ParamLimits

0x20dd,	// (0x0002fc9e) listscroll_cale_day_pane_ParamLimits

0xa459,	// (0x0003801a) popup_toolbar_window_cp02

0xa8cd,	// (0x0003848e) listscroll_cale_day_pane_t1_ParamLimits

0x082b,	// (0x0002e3ec) main_cale_month_pane_ParamLimits

0x4b84,	// (0x00032745) popup_toolbar_window_cp03_ParamLimits

0x4b84,	// (0x00032745) popup_toolbar_window_cp03

0x4463,	// (0x00032024) main_image_pane_g2_ParamLimits

0x4463,	// (0x00032024) main_image_pane_g2

0x4474,	// (0x00032035) main_image_pane_g3_ParamLimits

0x4474,	// (0x00032035) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0003d0a8) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0003d0a8) main_image_pane_g

0xb1f9,	// (0x00038dba) main_image_pane_t1_ParamLimits

0x4485,	// (0x00032046) main_image_pane_t2_ParamLimits

0x4485,	// (0x00032046) main_image_pane_t2

0x4497,	// (0x00032058) main_image_pane_t3_ParamLimits

0x4497,	// (0x00032058) main_image_pane_t3

0x44bf,	// (0x00032080) main_image_pane_t4_ParamLimits

0x44bf,	// (0x00032080) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0003d0af) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0003d0af) main_image_pane_t

0x44df,	// (0x000320a0) popup_image_details_window_cp01

0x44e9,	// (0x000320aa) popup_toobar_trans_pane_cp01_ParamLimits

0x44e9,	// (0x000320aa) popup_toobar_trans_pane_cp01

0x0936,	// (0x0002e4f7) popup_image_details_window_ParamLimits

0x0936,	// (0x0002e4f7) popup_image_details_window

0x4b57,	// (0x00032718) popup_image_focus_window

0x0ac1,	// (0x0002e682) camera2_autofocus_pane_ParamLimits

0x0ac1,	// (0x0002e682) camera2_autofocus_pane

0x9bdb,	// (0x0003779c) bg_popup_sub_pane_cp06

0xc8dd,	// (0x0003a49e) popup_image_focus_window_g1

0xc8e5,	// (0x0003a4a6) popup_image_focus_window_g2

0xc8ed,	// (0x0003a4ae) popup_image_focus_window_g3

0xc8f5,	// (0x0003a4b6) popup_image_focus_window_g4

0x0003,

0xf710,	// (0x0003d2d1) popup_image_focus_window_g

0xc909,	// (0x0003a4ca) popup_image_focus_window_t1

0xc917,	// (0x0003a4d8) popup_image_focus_window_t2

0xc927,	// (0x0003a4e8) popup_image_focus_window_t3

0x0002,

0xf719,	// (0x0003d2da) popup_image_focus_window_t

0xc935,	// (0x0003a4f6) camera2_autofocus_pane_g1

0xa70e,	// (0x000382cf) bg_tb_trans_pane_cp01

0xc943,	// (0x0003a504) popup_image_details_window_g1

0xc956,	// (0x0003a517) popup_image_details_window_g2

0x0002,

0xf72b,	// (0x0003d2ec) popup_image_details_window_g

0xc97f,	// (0x0003a540) popup_image_details_window_t1

0xc991,	// (0x0003a552) popup_image_details_window_t2

0xc9aa,	// (0x0003a56b) popup_image_details_window_t3

0xc9be,	// (0x0003a57f) popup_image_details_window_t4

0xc9d9,	// (0x0003a59a) popup_image_details_window_t5

0x0004,

0xf732,	// (0x0003d2f3) popup_image_details_window_t

0xa310,	// (0x00037ed1) bg_calc_paper_pane_ParamLimits

0x1ceb,	// (0x0002f8ac) grid_highlight_pane_cp013

0x1f60,	// (0x0002fb21) list_calc_pane_ParamLimits

0x1f72,	// (0x0002fb33) scroll_pane_cp024

0xa324,	// (0x00037ee5) bg_calc_display_pane_ParamLimits

0x0632,	// (0x0002e1f3) calc_display_pane_t1_ParamLimits

0x0644,	// (0x0002e205) calc_display_pane_t2_ParamLimits

0x1f7a,	// (0x0002fb3b) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0003cd12) calc_display_pane_t_ParamLimits

0x06a7,	// (0x0002e268) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0003cd2f) cell_calc_pane_g

0x06b0,	// (0x0002e271) cell_calc_pane_t1

0xa383,	// (0x00037f44) grid_highlight_pane_cp02_ParamLimits

0xa399,	// (0x00037f5a) toolbar_button_pane_cp01_ParamLimits

0xa399,	// (0x00037f5a) toolbar_button_pane_cp01

0xb23e,	// (0x00038dff) temp_image_control_pane_ParamLimits

0xb23e,	// (0x00038dff) temp_image_control_pane

0x1cd1,	// (0x0002f892) main_mp3_pane

0xc9f3,	// (0x0003a5b4) temp_image_control_pane_g1_ParamLimits

0xc9f3,	// (0x0003a5b4) temp_image_control_pane_g1

0xca01,	// (0x0003a5c2) temp_image_control_pane_g2_ParamLimits

0xca01,	// (0x0003a5c2) temp_image_control_pane_g2

0xca13,	// (0x0003a5d4) temp_image_control_pane_g3_ParamLimits

0xca13,	// (0x0003a5d4) temp_image_control_pane_g3

0x525e,	// (0x00032e1f) temp_image_control_pane_g4_ParamLimits

0x525e,	// (0x00032e1f) temp_image_control_pane_g4

0x0003,

0xf73d,	// (0x0003d2fe) temp_image_control_pane_g_ParamLimits

0xf73d,	// (0x0003d2fe) temp_image_control_pane_g

0xc9f3,	// (0x0003a5b4) main_mp3_pane_g1

0x5271,	// (0x00032e32) main_mp3_pane_g2

0x0007,

0xf746,	// (0x0003d307) main_mp3_pane_g

0xca56,	// (0x0003a617) main_mp3_pane_t1

0xa511,	// (0x000380d2) main_camera_pane_g8_ParamLimits

0xa511,	// (0x000380d2) main_camera_pane_g8

0x280d,	// (0x000303ce) main_video_pane_g7_ParamLimits

0x280d,	// (0x000303ce) main_video_pane_g7

0x4e6d,	// (0x00032a2e) main_camera2_pane_t7_ParamLimits

0x4e6d,	// (0x00032a2e) main_camera2_pane_t7

0xa659,	// (0x0003821a) scroll_pane_cp025_ParamLimits

0xa659,	// (0x0003821a) scroll_pane_cp025

0xa66d,	// (0x0003822e) scroll_pane_cp026_ParamLimits

0xa66d,	// (0x0003822e) scroll_pane_cp026

0xa67c,	// (0x0003823d) wml_content_pane_ParamLimits

0x1ceb,	// (0x0002f8ac) main_touch_calib_pane

0x5345,	// (0x00032f06) main_touch_calib_pane_g1

0x5357,	// (0x00032f18) main_touch_calib_pane_g2

0x5369,	// (0x00032f2a) main_touch_calib_pane_g3

0x537b,	// (0x00032f3c) main_touch_calib_pane_g4

0x0003,

0xf764,	// (0x0003d325) main_touch_calib_pane_g

0x538d,	// (0x00032f4e) main_touch_calib_pane_t1

0x53a7,	// (0x00032f68) main_touch_calib_pane_t2

0x0004,

0xf76d,	// (0x0003d32e) main_touch_calib_pane_t

0xae0b,	// (0x000389cc) mup_progress_pane_cp02

0xae40,	// (0x00038a01) navi_pane_g1

0xaefb,	// (0x00038abc) navi_pane_mp_t3

0x1cd1,	// (0x0002f892) main_mp3_pane_ParamLimits

0x4b99,	// (0x0003275a) navi_pane_ParamLimits

0xc9f3,	// (0x0003a5b4) main_mp3_pane_g1_ParamLimits

0x5271,	// (0x00032e32) main_mp3_pane_g2_ParamLimits

0x527f,	// (0x00032e40) main_mp3_pane_g3_ParamLimits

0x527f,	// (0x00032e40) main_mp3_pane_g3

0x528d,	// (0x00032e4e) main_mp3_pane_g4_ParamLimits

0x528d,	// (0x00032e4e) main_mp3_pane_g4

0xca23,	// (0x0003a5e4) main_mp3_pane_g5_ParamLimits

0xca23,	// (0x0003a5e4) main_mp3_pane_g5

0xca31,	// (0x0003a5f2) main_mp3_pane_g6_ParamLimits

0xca31,	// (0x0003a5f2) main_mp3_pane_g6

0xca3e,	// (0x0003a5ff) main_mp3_pane_g7_ParamLimits

0xca3e,	// (0x0003a5ff) main_mp3_pane_g7

0xca4a,	// (0x0003a60b) main_mp3_pane_g8_ParamLimits

0xca4a,	// (0x0003a60b) main_mp3_pane_g8

0xf746,	// (0x0003d307) main_mp3_pane_g_ParamLimits

0x5299,	// (0x00032e5a) main_mp3_pane_t2

0x52a7,	// (0x00032e68) main_mp3_pane_t3

0xca64,	// (0x0003a625) main_mp3_pane_t4

0xca72,	// (0x0003a633) main_mp3_pane_t5

0x0005,

0xf757,	// (0x0003d318) main_mp3_pane_t

0xca80,	// (0x0003a641) mup_progress_pane_cp01

0x1c46,	// (0x0002f807) aid_zoom_text_secondary2

0xc84c,	// (0x0003a40d) list_cale_ev2_pane

0xc854,	// (0x0003a415) scroll_pane_cp023_ParamLimits

0x53fd,	// (0x00032fbe) field_cale_ev2_pane_ParamLimits

0x53fd,	// (0x00032fbe) field_cale_ev2_pane

0xca88,	// (0x0003a649) field_cale_ev2_pane_g1_ParamLimits

0xca88,	// (0x0003a649) field_cale_ev2_pane_g1

0xca94,	// (0x0003a655) field_cale_ev2_pane_g2_ParamLimits

0xca94,	// (0x0003a655) field_cale_ev2_pane_g2

0xcaac,	// (0x0003a66d) field_cale_ev2_pane_g3_ParamLimits

0xcaac,	// (0x0003a66d) field_cale_ev2_pane_g3

0x0003,

0xf778,	// (0x0003d339) field_cale_ev2_pane_g_ParamLimits

0xf778,	// (0x0003d339) field_cale_ev2_pane_g

0xcad0,	// (0x0003a691) field_cale_ev2_pane_t1_ParamLimits

0xcad0,	// (0x0003a691) field_cale_ev2_pane_t1

0xcae7,	// (0x0003a6a8) field_cale_ev2_pane_t2_ParamLimits

0xcae7,	// (0x0003a6a8) field_cale_ev2_pane_t2

0x0001,

0xf781,	// (0x0003d342) field_cale_ev2_pane_t_ParamLimits

0xf781,	// (0x0003d342) field_cale_ev2_pane_t

0x4317,	// (0x00031ed8) main_postcard_pane_g5_ParamLimits

0x4317,	// (0x00031ed8) main_postcard_pane_g5

0x432d,	// (0x00031eee) main_postcard_pane_g6_ParamLimits

0x432d,	// (0x00031eee) main_postcard_pane_g6

0x25d3,	// (0x00030194) camera2_autofocus_pane_cp_ParamLimits

0x25d3,	// (0x00030194) camera2_autofocus_pane_cp

0x1cd1,	// (0x0002f892) main_mup3_pane

0x5462,	// (0x00033023) main_mup3_pane_g1_ParamLimits

0x5462,	// (0x00033023) main_mup3_pane_g1

0x5484,	// (0x00033045) main_mup3_pane_g2_ParamLimits

0x5484,	// (0x00033045) main_mup3_pane_g2

0x5504,	// (0x000330c5) main_mup3_pane_g3_ParamLimits

0x5504,	// (0x000330c5) main_mup3_pane_g3

0x554a,	// (0x0003310b) main_mup3_pane_g4_ParamLimits

0x554a,	// (0x0003310b) main_mup3_pane_g4

0x5590,	// (0x00033151) main_mup3_pane_g5_ParamLimits

0x5590,	// (0x00033151) main_mup3_pane_g5

0x55d6,	// (0x00033197) main_mup3_pane_g6_ParamLimits

0x55d6,	// (0x00033197) main_mup3_pane_g6

0xcafc,	// (0x0003a6bd) main_mup3_pane_g7_ParamLimits

0xcafc,	// (0x0003a6bd) main_mup3_pane_g7

0x0007,

0xf791,	// (0x0003d352) main_mup3_pane_g_ParamLimits

0xf791,	// (0x0003d352) main_mup3_pane_g

0x5654,	// (0x00033215) main_mup3_pane_t1_ParamLimits

0x5654,	// (0x00033215) main_mup3_pane_t1

0x56c8,	// (0x00033289) main_mup3_pane_t2_ParamLimits

0x56c8,	// (0x00033289) main_mup3_pane_t2

0x579c,	// (0x0003335d) main_mup3_pane_t4_ParamLimits

0x579c,	// (0x0003335d) main_mup3_pane_t4

0x57f2,	// (0x000333b3) main_mup3_pane_t5_ParamLimits

0x57f2,	// (0x000333b3) main_mup3_pane_t5

0x58ae,	// (0x0003346f) main_mup3_pane_t6_ParamLimits

0x58ae,	// (0x0003346f) main_mup3_pane_t6

0x0005,

0xf7a2,	// (0x0003d363) main_mup3_pane_t_ParamLimits

0xf7a2,	// (0x0003d363) main_mup3_pane_t

0x5966,	// (0x00033527) mup3_progress_pane_ParamLimits

0x5966,	// (0x00033527) mup3_progress_pane

0x59f2,	// (0x000335b3) popup_mup3_control_window_ParamLimits

0x59f2,	// (0x000335b3) popup_mup3_control_window

0xcb0a,	// (0x0003a6cb) popup_mup3_text_window

0x5a24,	// (0x000335e5) mup3_progress_pane_t1

0x5a43,	// (0x00033604) mup3_progress_pane_t2

0xcb12,	// (0x0003a6d3) mup3_progress_pane_t3

0x0002,

0xf7af,	// (0x0003d370) mup3_progress_pane_t

0xcb2f,	// (0x0003a6f0) mup_progress_pane_cp03

0x9bdb,	// (0x0003779c) bg_tb_trans_pane_cp04

0x5a62,	// (0x00033623) mup3_volume_pane

0x5a6a,	// (0x0003362b) popup_mup3_control_window_g1

0x5a73,	// (0x00033634) mup3_volume_pane_g1

0x5a7c,	// (0x0003363d) mup3_volume_pane_g2

0x5a85,	// (0x00033646) mup3_volume_pane_g3

0x0002,

0xf7b6,	// (0x0003d377) mup3_volume_pane_g

0x9bdb,	// (0x0003779c) bg_tb_trans_pane_cp03

0xcb3f,	// (0x0003a700) popup_mup3_text_window_g1

0xcb47,	// (0x0003a708) popup_mup3_text_window_t1

0xa36c,	// (0x00037f2d) list_calc_item_pane_g1_ParamLimits

0xc51c,	// (0x0003a0dd) mup_volume_pane_cp_g1

0x53c1,	// (0x00032f82) main_touch_calib_pane_t3

0x53d5,	// (0x00032f96) main_touch_calib_pane_t4

0x53e9,	// (0x00032faa) main_touch_calib_pane_t5

0x1c32,	// (0x0002f7f3) aid_cell_size_toolbar2

0x1c3a,	// (0x0002f7fb) aid_popup3_width_pane

0x1c46,	// (0x0002f807) aid_zoom_text_msg_primary

0x25a8,	// (0x00030169) vorec_t7

0xa330,	// (0x00037ef1) bg_calc_paper_pane_g1_ParamLimits

0xa33c,	// (0x00037efd) bg_calc_paper_pane_g2_ParamLimits

0xa348,	// (0x00037f09) bg_calc_paper_pane_g3_ParamLimits

0xa354,	// (0x00037f15) bg_calc_paper_pane_g4_ParamLimits

0xa360,	// (0x00037f21) bg_calc_paper_pane_g5_ParamLimits

0x1f8c,	// (0x0002fb4d) bg_calc_paper_pane_g6_ParamLimits

0x1f9b,	// (0x0002fb5c) bg_calc_paper_pane_g7_ParamLimits

0x1faa,	// (0x0002fb6b) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0003cd19) bg_calc_paper_pane_g_ParamLimits

0x1fbd,	// (0x0002fb7e) calc_bg_paper_pane_g9_ParamLimits

0x271f,	// (0x000302e0) image_qvga_pane_ParamLimits

0x271f,	// (0x000302e0) image_qvga_pane

0xa253,	// (0x00037e14) bg_popup_sub_pane_cp04_ParamLimits

0xb175,	// (0x00038d36) popup_mup_playback_window_g1_ParamLimits

0xb181,	// (0x00038d42) popup_mup_playback_window_t1_ParamLimits

0xb196,	// (0x00038d57) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0003d0a3) popup_mup_playback_window_t_ParamLimits

0x4e9b,	// (0x00032a5c) main_mup2_pane_g3_ParamLimits

0x4e9b,	// (0x00032a5c) main_mup2_pane_g3

0x2b33,	// (0x000306f4) popup_toolbar_window_cp04

0xb58b,	// (0x0003914c) popup_call2_audio_second_window_g3_ParamLimits

0xb58b,	// (0x0003914c) popup_call2_audio_second_window_g3

0xb995,	// (0x00039556) popup_call2_audio_first_window_g4_ParamLimits

0xb995,	// (0x00039556) popup_call2_audio_first_window_g4

0xc014,	// (0x00039bd5) popup_call2_audio_in_window_g4_ParamLimits

0xc014,	// (0x00039bd5) popup_call2_audio_in_window_g4

0x4445,	// (0x00032006) aid_area_sk_bg_cut_ParamLimits

0x4445,	// (0x00032006) aid_area_sk_bg_cut

0xb1ab,	// (0x00038d6c) aid_area_sk_bg_cut_2_ParamLimits

0xb1ab,	// (0x00038d6c) aid_area_sk_bg_cut_2

0x5204,	// (0x00032dc5) aid_placing_details_win

0x520c,	// (0x00032dcd) aid_placing_details_win_2

0xc935,	// (0x0003a4f6) camera2_autofocus_pane_g1_ParamLimits

0x04ee,	// (0x0002e0af) popup_fixed_preview_cale_window_ParamLimits

0x04ee,	// (0x0002e0af) popup_fixed_preview_cale_window

0xaf79,	// (0x00038b3a) navi_slider_pane_g3

0xaf82,	// (0x00038b43) navi_slider_pane_g4

0xaf8b,	// (0x00038b4c) navi_slider_pane_g5

0xaf79,	// (0x00038b3a) navi_slider_pane_g6

0x3cf8,	// (0x000318b9) navi_slider_pane_g7

0xb0ac,	// (0x00038c6d) mup_scale_pane_g3

0xb0b5,	// (0x00038c76) mup_scale_pane_g4

0xb0be,	// (0x00038c7f) mup_scale_pane_g5

0x40f1,	// (0x00031cb2) mup_scale_pane_g6

0x40fa,	// (0x00031cbb) mup_scale_pane_g7

0xaf79,	// (0x00038b3a) cams2_slider_pane_g3

0xc59e,	// (0x0003a15f) cams2_slider_pane_g4

0x5151,	// (0x00032d12) cams2_slider_pane_g5

0xaf79,	// (0x00038b3a) cams2_slider_pane_g6

0x5159,	// (0x00032d1a) cams2_slider_pane_g7

0xc7c9,	// (0x0003a38a) camera2_autofocus_pane_cp_g1

0xc3b5,	// (0x00039f76) bg_popup_preview_window_pane_cp02_ParamLimits

0xc3b5,	// (0x00039f76) bg_popup_preview_window_pane_cp02

0xcb55,	// (0x0003a716) list_fp_cale_pane_ParamLimits

0xcb55,	// (0x0003a716) list_fp_cale_pane

0xcb61,	// (0x0003a722) popup_fixed_preview_cale_window_t1_ParamLimits

0xcb61,	// (0x0003a722) popup_fixed_preview_cale_window_t1

0x5a8e,	// (0x0003364f) popup_fixed_preview_cale_window_t2_ParamLimits

0x5a8e,	// (0x0003364f) popup_fixed_preview_cale_window_t2

0x5aa3,	// (0x00033664) popup_fixed_preview_cale_window_t3_ParamLimits

0x5aa3,	// (0x00033664) popup_fixed_preview_cale_window_t3

0x0002,

0xf7bd,	// (0x0003d37e) popup_fixed_preview_cale_window_t_ParamLimits

0xf7bd,	// (0x0003d37e) popup_fixed_preview_cale_window_t

0x5ab8,	// (0x00033679) list_single_fp_cale_pane_ParamLimits

0x5ab8,	// (0x00033679) list_single_fp_cale_pane

0xcb7f,	// (0x0003a740) list_single_fp_cale_pane_g1_ParamLimits

0xcb7f,	// (0x0003a740) list_single_fp_cale_pane_g1

0xcb8b,	// (0x0003a74c) list_single_fp_cale_pane_g2_ParamLimits

0xcb8b,	// (0x0003a74c) list_single_fp_cale_pane_g2

0x0002,

0xf7c4,	// (0x0003d385) list_single_fp_cale_pane_g_ParamLimits

0xf7c4,	// (0x0003d385) list_single_fp_cale_pane_g

0xcba4,	// (0x0003a765) list_single_fp_cale_pane_t1_ParamLimits

0xcba4,	// (0x0003a765) list_single_fp_cale_pane_t1

0xcbb6,	// (0x0003a777) list_single_fp_cale_pane_t2_ParamLimits

0xcbb6,	// (0x0003a777) list_single_fp_cale_pane_t2

0x0001,

0xf7cb,	// (0x0003d38c) list_single_fp_cale_pane_t_ParamLimits

0xf7cb,	// (0x0003d38c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x1ceb,	// (0x0002f8ac) main_dialer_pane

0x5ace,	// (0x0003368f) aid_cell_size_keypad

0x5ad8,	// (0x00033699) dialer_ne_pane

0x5ae0,	// (0x000336a1) grid_dialer_command_1_pane

0x5ae8,	// (0x000336a9) grid_dialer_command_2_pane

0x5af0,	// (0x000336b1) grid_dialer_keypad_pane

0x5b02,	// (0x000336c3) bg_popup_call_pane_cp06_ParamLimits

0x5b02,	// (0x000336c3) bg_popup_call_pane_cp06

0x5b0e,	// (0x000336cf) dialer_ne_clear_pane_ParamLimits

0x5b0e,	// (0x000336cf) dialer_ne_clear_pane

0xcbe9,	// (0x0003a7aa) dialer_ne_pane_g1

0xcbf1,	// (0x0003a7b2) dialer_ne_pane_t1_ParamLimits

0xcbf1,	// (0x0003a7b2) dialer_ne_pane_t1

0x5b1a,	// (0x000336db) dialer_ne_pane_t2_ParamLimits

0x5b1a,	// (0x000336db) dialer_ne_pane_t2

0x5b44,	// (0x00033705) dialer_ne_pane_t3_ParamLimits

0x5b44,	// (0x00033705) dialer_ne_pane_t3

0x0002,

0xf7d0,	// (0x0003d391) dialer_ne_pane_t_ParamLimits

0xf7d0,	// (0x0003d391) dialer_ne_pane_t

0x5b74,	// (0x00033735) dialer_ne_pane_t3_copy1_ParamLimits

0x5b74,	// (0x00033735) dialer_ne_pane_t3_copy1

0x5ba3,	// (0x00033764) cell_dialer_keypad_pane_ParamLimits

0x5ba3,	// (0x00033764) cell_dialer_keypad_pane

0x5bba,	// (0x0003377b) cell_dialer_command_1_pane_ParamLimits

0x5bba,	// (0x0003377b) cell_dialer_command_1_pane

0x5bd0,	// (0x00033791) cell_dialer_command_2_pane_ParamLimits

0x5bd0,	// (0x00033791) cell_dialer_command_2_pane

0xcc03,	// (0x0003a7c4) bg_button_pane_cp02_ParamLimits

0xcc03,	// (0x0003a7c4) bg_button_pane_cp02

0x5bdf,	// (0x000337a0) cell_dialer_keypad_pane_g1_ParamLimits

0x5bdf,	// (0x000337a0) cell_dialer_keypad_pane_g1

0xcc03,	// (0x0003a7c4) bg_button_pane_cp03_ParamLimits

0xcc03,	// (0x0003a7c4) bg_button_pane_cp03

0x5bf3,	// (0x000337b4) cell_dialer_command_1_pane_g1_ParamLimits

0x5bf3,	// (0x000337b4) cell_dialer_command_1_pane_g1

0xcc0f,	// (0x0003a7d0) bg_button_pane_cp04

0x5c07,	// (0x000337c8) cell_dialer_command_2_pane_g1

0xa509,	// (0x000380ca) bg_button_pane_cp06

0xcc17,	// (0x0003a7d8) dialer_ne_clear_pane_g1

0xae4c,	// (0x00038a0d) navi_pane_g2

0xae7a,	// (0x00038a3b) navi_pane_g3

0x0002,

0xf3e5,	// (0x0003cfa6) navi_pane_g

0xaf09,	// (0x00038aca) navi_pane_mv_g2

0xaf30,	// (0x00038af1) navi_pane_mv_g5

0x3cad,	// (0x0003186e) navi_pane_mv_t1

0xa324,	// (0x00037ee5) main_clock2_pane

0x5c55,	// (0x00033816) main_clock2_list_pane_ParamLimits

0x5c55,	// (0x00033816) main_clock2_list_pane

0x5c8f,	// (0x00033850) main_clock2_pane_t1_ParamLimits

0x5c8f,	// (0x00033850) main_clock2_pane_t1

0x5ccd,	// (0x0003388e) main_clock2_pane_t2_ParamLimits

0x5ccd,	// (0x0003388e) main_clock2_pane_t2

0x0004,

0xf7dc,	// (0x0003d39d) main_clock2_pane_t_ParamLimits

0xf7dc,	// (0x0003d39d) main_clock2_pane_t

0x5d6b,	// (0x0003392c) popup_clock_analogue_window_cp03_ParamLimits

0x5d6b,	// (0x0003392c) popup_clock_analogue_window_cp03

0x5d90,	// (0x00033951) popup_clock_digital_window_cp02_ParamLimits

0x5d90,	// (0x00033951) popup_clock_digital_window_cp02

0x5e01,	// (0x000339c2) main_clock2_list_single_pane_ParamLimits

0x5e01,	// (0x000339c2) main_clock2_list_single_pane

0xa509,	// (0x000380ca) list_highlight_pane_cp05

0xcc51,	// (0x0003a812) main_clock2_list_single_pane_t1

0x2b33,	// (0x000306f4) popup_toolbar_window_cp04_ParamLimits

0x522e,	// (0x00032def) camera2_autofocus_pane_g2_ParamLimits

0x522e,	// (0x00032def) camera2_autofocus_pane_g2

0x523a,	// (0x00032dfb) camera2_autofocus_pane_g3_ParamLimits

0x523a,	// (0x00032dfb) camera2_autofocus_pane_g3

0x5246,	// (0x00032e07) camera2_autofocus_pane_g4_ParamLimits

0x5246,	// (0x00032e07) camera2_autofocus_pane_g4

0x5252,	// (0x00032e13) camera2_autofocus_pane_g5_ParamLimits

0x5252,	// (0x00032e13) camera2_autofocus_pane_g5

0x0004,

0xf720,	// (0x0003d2e1) camera2_autofocus_pane_g_ParamLimits

0xf720,	// (0x0003d2e1) camera2_autofocus_pane_g

0x541e,	// (0x00032fdf) camera2_autofocus_pane_cp_g2

0x5426,	// (0x00032fe7) camera2_autofocus_pane_cp_g3

0x542e,	// (0x00032fef) camera2_autofocus_pane_cp_g4

0x5436,	// (0x00032ff7) camera2_autofocus_pane_cp_g5

0x0004,

0xf786,	// (0x0003d347) camera2_autofocus_pane_cp_g

0x5afa,	// (0x000336bb) popup_dialer_spcha_window

0x9bdb,	// (0x0003779c) bg_popup_sub_pane_cp07

0xcc5f,	// (0x0003a820) list_spcha_pane

0xcc67,	// (0x0003a828) list_single_spcha_pane_ParamLimits

0xcc67,	// (0x0003a828) list_single_spcha_pane

0x9bdb,	// (0x0003779c) list_highlight_pane_cp06

0xcc78,	// (0x0003a839) list_single_spcha_pane_t1

0xbdbe,	// (0x0003997f) popup_call2_audio_out_window_g4_ParamLimits

0xbdbe,	// (0x0003997f) popup_call2_audio_out_window_g4

0x1ceb,	// (0x0002f8ac) main_imed2_pane

0x4b5f,	// (0x00032720) popup_imed_adjust2_window

0x094e,	// (0x0002e50f) popup_imed_trans_window_ParamLimits

0x094e,	// (0x0002e50f) popup_imed_trans_window

0xc607,	// (0x0003a1c8) popup_blid_sat_info2_window_t1

0xc615,	// (0x0003a1d6) popup_blid_sat_info2_window_t2

0x000a,

0xf6b5,	// (0x0003d276) popup_blid_sat_info2_window_t

0x5e13,	// (0x000339d4) aid_size_cell_colour_35

0x5e33,	// (0x000339f4) aid_size_cell_colour_112

0x5e53,	// (0x00033a14) aid_size_cell_effect

0xc3c1,	// (0x00039f82) bg_tb_trans_pane_cp02

0xa9d6,	// (0x00038597) heading_imed_pane

0x5e73,	// (0x00033a34) listscroll_imed_pane

0xcc86,	// (0x0003a847) heading_imed_pane_g1

0xcc8e,	// (0x0003a84f) heading_imed_pane_t1

0xcc9c,	// (0x0003a85d) grid_imed_colour_35_pane_ParamLimits

0xcc9c,	// (0x0003a85d) grid_imed_colour_35_pane

0x5e7f,	// (0x00033a40) grid_imed_effect_pane

0xccb4,	// (0x0003a875) list_imed_aspect_pane

0x5e95,	// (0x00033a56) scroll_pane_cp027_ParamLimits

0x5e95,	// (0x00033a56) scroll_pane_cp027

0x5ea6,	// (0x00033a67) cell_imed_effect_pane_ParamLimits

0x5ea6,	// (0x00033a67) cell_imed_effect_pane

0xccbc,	// (0x0003a87d) cell_imed_colour_pane_ParamLimits

0xccbc,	// (0x0003a87d) cell_imed_colour_pane

0xccfe,	// (0x0003a8bf) cell_imed_colour_pane_g1_ParamLimits

0xccfe,	// (0x0003a8bf) cell_imed_colour_pane_g1

0xcd0f,	// (0x0003a8d0) hgihlgiht_grid_pane_cp016_ParamLimits

0xcd0f,	// (0x0003a8d0) hgihlgiht_grid_pane_cp016

0x5ecd,	// (0x00033a8e) cell_imed_effect_pane_g1

0x5ed5,	// (0x00033a96) grid_highlight_pane_cp017

0xcd20,	// (0x0003a8e1) list_imed_single_pane_ParamLimits

0xcd20,	// (0x0003a8e1) list_imed_single_pane

0x9bdb,	// (0x0003779c) list_highlight_pane_cp07

0xcd35,	// (0x0003a8f6) list_imed_aspect_pane_comp1_t1

0xc3c1,	// (0x00039f82) bg_tb_trans_pane_cp05

0xcd57,	// (0x0003a918) popup_imed_adjust2_window_g1

0xcd7e,	// (0x0003a93f) popup_imed_adjust2_window_t1

0xcd96,	// (0x0003a957) slider_imed_adjust_pane

0xcdaa,	// (0x0003a96b) slider_imed_adjust_pane_g1

0xcdba,	// (0x0003a97b) slider_imed_adjust_pane_g2

0xcdca,	// (0x0003a98b) slider_imed_adjust_pane_g3

0xcddb,	// (0x0003a99c) slider_imed_adjust_pane_g4

0x0003,

0xf7f9,	// (0x0003d3ba) slider_imed_adjust_pane_g

0x5ede,	// (0x00033a9f) aid_size_cell_clipart2

0x5eea,	// (0x00033aab) grid_imed_clipart_pane

0xcdec,	// (0x0003a9ad) scroll_pane_cp031

0x5ef4,	// (0x00033ab5) cell_imed_clipart_pane_ParamLimits

0x5ef4,	// (0x00033ab5) cell_imed_clipart_pane

0x5f16,	// (0x00033ad7) cell_imed_clipart_pane_g1

0x9bdb,	// (0x0003779c) grid_highlight_pane_cp014

0x5c6a,	// (0x0003382b) main_clock2_pane_g1_ParamLimits

0x5c6a,	// (0x0003382b) main_clock2_pane_g1

0x5dac,	// (0x0003396d) aid_call2_pane_cp10

0x5dbe,	// (0x0003397f) aid_call_pane_cp10

0xadab,	// (0x0003896c) popup_clock_analogue_window_cp10_g1

0xadab,	// (0x0003896c) popup_clock_analogue_window_cp10_g2

0x5dd0,	// (0x00033991) popup_clock_analogue_window_cp10_g3

0x5dd0,	// (0x00033991) popup_clock_analogue_window_cp10_g4

0xadab,	// (0x0003896c) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7e7,	// (0x0003d3a8) popup_clock_analogue_window_cp10_g

0x5de2,	// (0x000339a3) popup_clock_analogue_window_cp10_t1

0x0f9c,	// (0x0002eb5d) clock_digital_number_pane_cp10_ParamLimits

0x0f9c,	// (0x0002eb5d) clock_digital_number_pane_cp10

0x0fb4,	// (0x0002eb75) clock_digital_number_pane_cp11_ParamLimits

0x0fb4,	// (0x0002eb75) clock_digital_number_pane_cp11

0x0fcc,	// (0x0002eb8d) clock_digital_number_pane_cp12_ParamLimits

0x0fcc,	// (0x0002eb8d) clock_digital_number_pane_cp12

0x0fe4,	// (0x0002eba5) clock_digital_number_pane_cp13_ParamLimits

0x0fe4,	// (0x0002eba5) clock_digital_number_pane_cp13

0x0ffc,	// (0x0002ebbd) clock_digital_separator_pane_cp10_ParamLimits

0x0ffc,	// (0x0002ebbd) clock_digital_separator_pane_cp10

0x1014,	// (0x0002ebd5) popup_clock_digital_window_cp02_t1_ParamLimits

0x1014,	// (0x0002ebd5) popup_clock_digital_window_cp02_t1

0xa24b,	// (0x00037e0c) clock_digital_number_pane_cp10_g1

0xa24b,	// (0x00037e0c) clock_digital_number_pane_cp10_g2

0x0001,

0xf802,	// (0x0003d3c3) clock_digital_number_pane_cp10_g

0xa24b,	// (0x00037e0c) clock_digital_separator_pane_cp10_g1

0xa24b,	// (0x00037e0c) clock_digital_separator_pane_g2_cp10

0xaf38,	// (0x00038af9) navi_pane_vded_g4

0xaf41,	// (0x00038b02) navi_pane_vded_g5

0xaf4a,	// (0x00038b0b) navi_pane_vded_t1

0x1ceb,	// (0x0002f8ac) main_vded_pane

0x5f1f,	// (0x00033ae0) main_vded_pane_g1

0x5f29,	// (0x00033aea) main_vded_pane_g2

0x5f33,	// (0x00033af4) main_vded_pane_g3

0x0002,

0xf807,	// (0x0003d3c8) main_vded_pane_g

0x5f3d,	// (0x00033afe) main_vded_pane_t1

0x5f4b,	// (0x00033b0c) main_vded_pane_t2

0x0001,

0xf80e,	// (0x0003d3cf) main_vded_pane_t

0x5f59,	// (0x00033b1a) vded_slider_pane

0x5f61,	// (0x00033b22) vded_video_pane

0xcdf4,	// (0x0003a9b5) vded_video_pane_g1

0x5f69,	// (0x00033b2a) vded_video_pane_g2

0xc7c9,	// (0x0003a38a) vded_video_pane_g3

0x0002,

0xf813,	// (0x0003d3d4) vded_video_pane_g

0xcdfe,	// (0x0003a9bf) vded_slider_pane_g1

0xc51c,	// (0x0003a0dd) vded_slider_pane_g2

0xce07,	// (0x0003a9c8) vded_slider_pane_g3

0xce10,	// (0x0003a9d1) vded_slider_pane_g4

0xce19,	// (0x0003a9da) vded_slider_pane_g5

0x0004,

0xf81a,	// (0x0003d3db) vded_slider_pane_g

0x59da,	// (0x0003359b) mup3_rocker_pane_ParamLimits

0x59da,	// (0x0003359b) mup3_rocker_pane

0x5f72,	// (0x00033b33) mup3_control_keys_pane_g1

0x5f7a,	// (0x00033b3b) mup3_control_keys_pane_g2

0x5f82,	// (0x00033b43) mup3_control_keys_pane_g3

0x5f8a,	// (0x00033b4b) mup3_control_keys_pane_g4

0x0003,

0xf825,	// (0x0003d3e6) mup3_control_keys_pane_g

0x0525,	// (0x0002e0e6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0525,	// (0x0002e0e6) popup_toolbar2_fixed_window_cp01

0x5a0e,	// (0x000335cf) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5a0e,	// (0x000335cf) popup_toolbar2_fixed_window_cp02

0xb6fd,	// (0x000392be) popup_call2_audio_second_window_t4_ParamLimits

0xb6fd,	// (0x000392be) popup_call2_audio_second_window_t4

0xbc2b,	// (0x000397ec) popup_call2_audio_first_window_t6_ParamLimits

0xbc2b,	// (0x000397ec) popup_call2_audio_first_window_t6

0xbec1,	// (0x00039a82) popup_call2_audio_out_window_t6_ParamLimits

0xbec1,	// (0x00039a82) popup_call2_audio_out_window_t6

0x1ceb,	// (0x0002f8ac) main_vitu_pane

0x5f9a,	// (0x00033b5b) aid_size_cell_itu_ParamLimits

0x5f9a,	// (0x00033b5b) aid_size_cell_itu

0xa70e,	// (0x000382cf) bg_popup_window_pane_cp08_ParamLimits

0xa70e,	// (0x000382cf) bg_popup_window_pane_cp08

0x5fb0,	// (0x00033b71) field_vitu_entry_pane_ParamLimits

0x5fb0,	// (0x00033b71) field_vitu_entry_pane

0x5fc8,	// (0x00033b89) grid_vitu_function_pane_ParamLimits

0x5fc8,	// (0x00033b89) grid_vitu_function_pane

0x5fe3,	// (0x00033ba4) grid_vitu_itu_pane_ParamLimits

0x5fe3,	// (0x00033ba4) grid_vitu_itu_pane

0x6001,	// (0x00033bc2) cell_vitu_itu_pane_ParamLimits

0x6001,	// (0x00033bc2) cell_vitu_itu_pane

0x6023,	// (0x00033be4) cell_vitu_function_pane_ParamLimits

0x6023,	// (0x00033be4) cell_vitu_function_pane

0xa70e,	// (0x000382cf) bg_popup_sub_pane_cp08_ParamLimits

0xa70e,	// (0x000382cf) bg_popup_sub_pane_cp08

0x603c,	// (0x00033bfd) field_vitu_entry_pane_t1_ParamLimits

0x603c,	// (0x00033bfd) field_vitu_entry_pane_t1

0xce3a,	// (0x0003a9fb) field_vitu_entry_pane_t2_ParamLimits

0xce3a,	// (0x0003a9fb) field_vitu_entry_pane_t2

0x0001,

0xf833,	// (0x0003d3f4) field_vitu_entry_pane_t_ParamLimits

0xf833,	// (0x0003d3f4) field_vitu_entry_pane_t

0xce57,	// (0x0003aa18) bg_button_pane_cp05_ParamLimits

0xce57,	// (0x0003aa18) bg_button_pane_cp05

0x605b,	// (0x00033c1c) cell_vitu_itu_pane_g1

0x6073,	// (0x00033c34) cell_vitu_itu_pane_t1_ParamLimits

0x6073,	// (0x00033c34) cell_vitu_itu_pane_t1

0x6085,	// (0x00033c46) cell_vitu_itu_pane_t2_ParamLimits

0x6085,	// (0x00033c46) cell_vitu_itu_pane_t2

0x0002,

0xf838,	// (0x0003d3f9) cell_vitu_itu_pane_t_ParamLimits

0xf838,	// (0x0003d3f9) cell_vitu_itu_pane_t

0xce65,	// (0x0003aa26) bg_button_pane_cp07

0x60ba,	// (0x00033c7b) cell_vitu_function_pane_g1

0x1e88,	// (0x0002fa49) main_calc_pane_g1

0x0385,	// (0x0002df46) aid_visual_content_pane

0x1ceb,	// (0x0002f8ac) main_vradio_pane

0x60c3,	// (0x00033c84) main_vradio_pane_g1_ParamLimits

0x60c3,	// (0x00033c84) main_vradio_pane_g1

0xce6f,	// (0x0003aa30) main_vradio_pane_g2_ParamLimits

0xce6f,	// (0x0003aa30) main_vradio_pane_g2

0x0001,

0xf83f,	// (0x0003d400) main_vradio_pane_g_ParamLimits

0xf83f,	// (0x0003d400) main_vradio_pane_g

0x60dc,	// (0x00033c9d) main_vradio_pane_t1_ParamLimits

0x60dc,	// (0x00033c9d) main_vradio_pane_t1

0x60f1,	// (0x00033cb2) main_vradio_pane_t2_ParamLimits

0x60f1,	// (0x00033cb2) main_vradio_pane_t2

0xce7c,	// (0x0003aa3d) main_vradio_pane_t3_ParamLimits

0xce7c,	// (0x0003aa3d) main_vradio_pane_t3

0x0002,

0xf844,	// (0x0003d405) main_vradio_pane_t_ParamLimits

0xf844,	// (0x0003d405) main_vradio_pane_t

0x6106,	// (0x00033cc7) vradio_rocker_control_pane_ParamLimits

0x6106,	// (0x00033cc7) vradio_rocker_control_pane

0x6118,	// (0x00033cd9) vradio_station_info_pane_ParamLimits

0x6118,	// (0x00033cd9) vradio_station_info_pane

0xce90,	// (0x0003aa51) vradio_frequency_info_pane_ParamLimits

0xce90,	// (0x0003aa51) vradio_frequency_info_pane

0xc7c9,	// (0x0003a38a) vradio_station_info_pane_g1

0xce9f,	// (0x0003aa60) vradio_station_info_pane_t1_ParamLimits

0xce9f,	// (0x0003aa60) vradio_station_info_pane_t1

0xcec1,	// (0x0003aa82) vradio_station_info_pane_t2_ParamLimits

0xcec1,	// (0x0003aa82) vradio_station_info_pane_t2

0x0001,

0xf84b,	// (0x0003d40c) vradio_station_info_pane_t_ParamLimits

0xf84b,	// (0x0003d40c) vradio_station_info_pane_t

0xced3,	// (0x0003aa94) vradio_tuning_pane

0xcedb,	// (0x0003aa9c) vradio_rocker_control_pane_g1

0xcee3,	// (0x0003aaa4) vradio_rocker_control_pane_g2

0xceeb,	// (0x0003aaac) vradio_rocker_control_pane_g3

0xcef3,	// (0x0003aab4) vradio_rocker_control_pane_g4

0xcefb,	// (0x0003aabc) vradio_rocker_control_pane_g5

0x0004,

0xf850,	// (0x0003d411) vradio_rocker_control_pane_g

0x612a,	// (0x00033ceb) vradio_frequency_info_pane_g1

0xcf03,	// (0x0003aac4) vradio_frequency_info_pane_t1_ParamLimits

0xcf03,	// (0x0003aac4) vradio_frequency_info_pane_t1

0x6134,	// (0x00033cf5) vradio_tuning_pane_g1

0x613f,	// (0x00033d00) vradio_tuning_pane_t1

0x1c8f,	// (0x0002f850) area_side_right_pane_ParamLimits

0x1c8f,	// (0x0002f850) area_side_right_pane

0xc37c,	// (0x00039f3d) status_small_pane_g1

0xc384,	// (0x00039f45) status_small_pane_g2

0xc38d,	// (0x00039f4e) status_small_pane_g3

0xc396,	// (0x00039f57) status_small_pane_g4

0x0003,

0xf60b,	// (0x0003d1cc) status_small_pane_g

0xc39f,	// (0x00039f60) status_small_pane_t1

0x1ceb,	// (0x0002f8ac) main_video3_pane

0xcf17,	// (0x0003aad8) cams_zoom_vslider_pane

0xcf1f,	// (0x0003aae0) image3_wide_pane_ParamLimits

0xcf1f,	// (0x0003aae0) image3_wide_pane

0xcf39,	// (0x0003aafa) image3_wide_small_pane

0xcf45,	// (0x0003ab06) main_video3_pane_g1_ParamLimits

0xcf45,	// (0x0003ab06) main_video3_pane_g1

0xcf61,	// (0x0003ab22) main_video3_pane_g2_ParamLimits

0xcf61,	// (0x0003ab22) main_video3_pane_g2

0x0001,

0xf85b,	// (0x0003d41c) main_video3_pane_g_ParamLimits

0xf85b,	// (0x0003d41c) main_video3_pane_g

0xcf7d,	// (0x0003ab3e) main_video3_pane_t1_ParamLimits

0xcf7d,	// (0x0003ab3e) main_video3_pane_t1

0xcfa8,	// (0x0003ab69) main_video3_pane_t2_ParamLimits

0xcfa8,	// (0x0003ab69) main_video3_pane_t2

0xcfd3,	// (0x0003ab94) main_video3_pane_t3_ParamLimits

0xcfd3,	// (0x0003ab94) main_video3_pane_t3

0x0002,

0xf860,	// (0x0003d421) main_video3_pane_t_ParamLimits

0xf860,	// (0x0003d421) main_video3_pane_t

0xd000,	// (0x0003abc1) cams_zoom_vslider_pane_g1

0xd009,	// (0x0003abca) cams_zoom_vslider_pane_g2

0x0001,

0xf867,	// (0x0003d428) cams_zoom_vslider_pane_g

0xd011,	// (0x0003abd2) small_slider_vertical_pane

0xc7c9,	// (0x0003a38a) small_slider_vertical_pane_g1

0xc7c9,	// (0x0003a38a) small_slider_vertical_pane_g2

0xd019,	// (0x0003abda) small_slider_vertical_pane_g3

0x0002,

0xf86c,	// (0x0003d42d) small_slider_vertical_pane_g

0x1ceb,	// (0x0002f8ac) main_hwr_training_pane

0xd022,	// (0x0003abe3) hwr_training_instruct_pane_ParamLimits

0xd022,	// (0x0003abe3) hwr_training_instruct_pane

0x614e,	// (0x00033d0f) hwr_training_navi_pane_ParamLimits

0x614e,	// (0x00033d0f) hwr_training_navi_pane

0x616d,	// (0x00033d2e) hwr_training_write_pane_ParamLimits

0x616d,	// (0x00033d2e) hwr_training_write_pane

0x9bdb,	// (0x0003779c) bg_frame_shadow_pane

0xd059,	// (0x0003ac1a) hwr_training_write_pane_g1

0xd061,	// (0x0003ac22) hwr_training_write_pane_g2

0xd069,	// (0x0003ac2a) hwr_training_write_pane_g3

0xd071,	// (0x0003ac32) hwr_training_write_pane_g4

0xd079,	// (0x0003ac3a) hwr_training_write_pane_g5

0xd081,	// (0x0003ac42) hwr_training_write_pane_g6

0xd089,	// (0x0003ac4a) hwr_training_write_pane_g7

0x0006,

0xf873,	// (0x0003d434) hwr_training_write_pane_g

0x61a8,	// (0x00033d69) hwr_training_navi_pane_g1_ParamLimits

0x61a8,	// (0x00033d69) hwr_training_navi_pane_g1

0x61ba,	// (0x00033d7b) hwr_training_navi_pane_g2_ParamLimits

0x61ba,	// (0x00033d7b) hwr_training_navi_pane_g2

0x61cc,	// (0x00033d8d) hwr_training_navi_pane_g3_ParamLimits

0x61cc,	// (0x00033d8d) hwr_training_navi_pane_g3

0x61dc,	// (0x00033d9d) hwr_training_navi_pane_g4_ParamLimits

0x61dc,	// (0x00033d9d) hwr_training_navi_pane_g4

0x0004,

0xf882,	// (0x0003d443) hwr_training_navi_pane_g_ParamLimits

0xf882,	// (0x0003d443) hwr_training_navi_pane_g

0x61e9,	// (0x00033daa) hwr_training_navi_pane_t1

0x61f7,	// (0x00033db8) list_single_hwr_training_instruct_pane_ParamLimits

0x61f7,	// (0x00033db8) list_single_hwr_training_instruct_pane

0xd091,	// (0x0003ac52) list_single_hwr_training_instruct_pane_t1

0xc709,	// (0x0003a2ca) bg_frame_shadow_pane_g1

0xd0a0,	// (0x0003ac61) bg_frame_shadow_pane_g2

0xd0a8,	// (0x0003ac69) bg_frame_shadow_pane_g3

0xd0b0,	// (0x0003ac71) bg_frame_shadow_pane_g4

0xd0b8,	// (0x0003ac79) bg_frame_shadow_pane_g5

0xd0c0,	// (0x0003ac81) bg_frame_shadow_pane_g6

0xd0c8,	// (0x0003ac89) bg_frame_shadow_pane_g7

0xa3ef,	// (0x00037fb0) bg_frame_shadow_pane_g8

0x0007,

0xf88d,	// (0x0003d44e) bg_frame_shadow_pane_g

0x1ceb,	// (0x0002f8ac) main_video_tele_dialer_pane

0x1042,	// (0x0002ec03) aid_size_cell_video_keypad_ParamLimits

0x1042,	// (0x0002ec03) aid_size_cell_video_keypad

0x105c,	// (0x0002ec1d) grid_video_dialer_keypad_pane_ParamLimits

0x105c,	// (0x0002ec1d) grid_video_dialer_keypad_pane

0x10aa,	// (0x0002ec6b) video_down_pane_cp_ParamLimits

0x10aa,	// (0x0002ec6b) video_down_pane_cp

0x10c0,	// (0x0002ec81) cell_video_dialer_keypad_pane_ParamLimits

0x10c0,	// (0x0002ec81) cell_video_dialer_keypad_pane

0xd0d0,	// (0x0003ac91) bg_button_pane_cp08_ParamLimits

0xd0d0,	// (0x0003ac91) bg_button_pane_cp08

0x6229,	// (0x00033dea) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6229,	// (0x00033dea) cell_video_dialer_keypad_pane_g1

0x59c4,	// (0x00033585) mup3_rocker2_pane_ParamLimits

0x59c4,	// (0x00033585) mup3_rocker2_pane

0xc7c9,	// (0x0003a38a) mup3_rocker2_pane_g1

0x083d,	// (0x0002e3fe) main_dialer2_pane

0x1ceb,	// (0x0002f8ac) main_mp4_pane

0x626b,	// (0x00033e2c) main_mp4_pane_g1_ParamLimits

0x626b,	// (0x00033e2c) main_mp4_pane_g1

0x626b,	// (0x00033e2c) main_mp4_pane_g2_ParamLimits

0x626b,	// (0x00033e2c) main_mp4_pane_g2

0x10e2,	// (0x0002eca3) main_mp4_pane_g3_ParamLimits

0x10e2,	// (0x0002eca3) main_mp4_pane_g3

0x6279,	// (0x00033e3a) main_mp4_pane_g4_ParamLimits

0x6279,	// (0x00033e3a) main_mp4_pane_g4

0x62a1,	// (0x00033e62) main_mp4_pane_g5_ParamLimits

0x62a1,	// (0x00033e62) main_mp4_pane_g5

0x0005,

0xf8ad,	// (0x0003d46e) main_mp4_pane_g_ParamLimits

0xf8ad,	// (0x0003d46e) main_mp4_pane_g

0x62f1,	// (0x00033eb2) main_mp4_pane_t1_ParamLimits

0x62f1,	// (0x00033eb2) main_mp4_pane_t1

0x634d,	// (0x00033f0e) main_mp4_pane_t2_ParamLimits

0x634d,	// (0x00033f0e) main_mp4_pane_t2

0xd0dc,	// (0x0003ac9d) main_mp4_pane_t3_ParamLimits

0xd0dc,	// (0x0003ac9d) main_mp4_pane_t3

0x639f,	// (0x00033f60) main_mp4_pane_t4_ParamLimits

0x639f,	// (0x00033f60) main_mp4_pane_t4

0x0003,

0xf8ba,	// (0x0003d47b) main_mp4_pane_t_ParamLimits

0xf8ba,	// (0x0003d47b) main_mp4_pane_t

0x63e3,	// (0x00033fa4) mp4_progress_pane_ParamLimits

0x63e3,	// (0x00033fa4) mp4_progress_pane

0x642d,	// (0x00033fee) mp4_rocker_pane_ParamLimits

0x642d,	// (0x00033fee) mp4_rocker_pane

0xd104,	// (0x0003acc5) mp4_progress_pane_t1

0xd11d,	// (0x0003acde) mp4_progress_pane_t2

0x0001,

0xf8c3,	// (0x0003d484) mp4_progress_pane_t

0xd136,	// (0x0003acf7) mup_progress_pane_cp04

0xd45c,	// (0x0003b01d) mp4_rocker_pane_g1

0x111e,	// (0x0002ecdf) aid_cell_size_keypad2_ParamLimits

0x111e,	// (0x0002ecdf) aid_cell_size_keypad2

0x1134,	// (0x0002ecf5) dialer2_ne_pane_ParamLimits

0x1134,	// (0x0002ecf5) dialer2_ne_pane

0x114e,	// (0x0002ed0f) grid_dialer2_keypad_pane_ParamLimits

0x114e,	// (0x0002ed0f) grid_dialer2_keypad_pane

0xc5ae,	// (0x0003a16f) bg_popup_call_pane_cp07_ParamLimits

0xc5ae,	// (0x0003a16f) bg_popup_call_pane_cp07

0x644d,	// (0x0003400e) dialer2_ne_pane_t1_ParamLimits

0x644d,	// (0x0003400e) dialer2_ne_pane_t1

0x116a,	// (0x0002ed2b) cell_dialer2_keypad_pane_ParamLimits

0x116a,	// (0x0002ed2b) cell_dialer2_keypad_pane

0xd154,	// (0x0003ad15) bg_button_pane_pane_cp04_ParamLimits

0xd154,	// (0x0003ad15) bg_button_pane_pane_cp04

0x6489,	// (0x0003404a) cell_dialer2_keypad_pane_g1_ParamLimits

0x6489,	// (0x0003404a) cell_dialer2_keypad_pane_g1

0x2a07,	// (0x000305c8) aid_placing_vt_set_content_ParamLimits

0x2a07,	// (0x000305c8) aid_placing_vt_set_content

0x2a2f,	// (0x000305f0) aid_placing_vt_set_title_ParamLimits

0x2a2f,	// (0x000305f0) aid_placing_vt_set_title

0x1ceb,	// (0x0002f8ac) main_image3_pane

0x11ea,	// (0x0002edab) area_side_right_pane_cp01_ParamLimits

0x11ea,	// (0x0002edab) area_side_right_pane_cp01

0x626b,	// (0x00033e2c) main_image3_pane_g1_ParamLimits

0x626b,	// (0x00033e2c) main_image3_pane_g1

0x1201,	// (0x0002edc2) main_image3_pane_g2_ParamLimits

0x1201,	// (0x0002edc2) main_image3_pane_g2

0x1229,	// (0x0002edea) main_image3_pane_g3_ParamLimits

0x1229,	// (0x0002edea) main_image3_pane_g3

0x1253,	// (0x0002ee14) main_image3_pane_g4_ParamLimits

0x1253,	// (0x0002ee14) main_image3_pane_g4

0x0003,

0xf8d2,	// (0x0003d493) main_image3_pane_g_ParamLimits

0xf8d2,	// (0x0003d493) main_image3_pane_g

0x127d,	// (0x0002ee3e) main_image3_pane_t1_ParamLimits

0x127d,	// (0x0002ee3e) main_image3_pane_t1

0x12d5,	// (0x0002ee96) main_image3_pane_t2_ParamLimits

0x12d5,	// (0x0002ee96) main_image3_pane_t2

0x1327,	// (0x0002eee8) main_image3_pane_t3_ParamLimits

0x1327,	// (0x0002eee8) main_image3_pane_t3

0x0003,

0xf8db,	// (0x0003d49c) main_image3_pane_t_ParamLimits

0xf8db,	// (0x0003d49c) main_image3_pane_t

0xa70e,	// (0x000382cf) grid_sctrl_middle_pane_cp01_ParamLimits

0xa70e,	// (0x000382cf) grid_sctrl_middle_pane_cp01

0x6523,	// (0x000340e4) cell_sctrl_middle_pane_cp01_ParamLimits

0x6523,	// (0x000340e4) cell_sctrl_middle_pane_cp01

0x6540,	// (0x00034101) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6540,	// (0x00034101) cell_sctrl_middle_pane_cp01_g1

0x1ceb,	// (0x0002f8ac) main_call4_pane

0x13af,	// (0x0002ef70) aid_size_button_call4_ParamLimits

0x13af,	// (0x0002ef70) aid_size_button_call4

0x13e0,	// (0x0002efa1) call4_windows_pane_ParamLimits

0x13e0,	// (0x0002efa1) call4_windows_pane

0x1400,	// (0x0002efc1) grid_call4_button_pane_ParamLimits

0x1400,	// (0x0002efc1) grid_call4_button_pane

0xd160,	// (0x0003ad21) call4_windows_conf_pane

0xd177,	// (0x0003ad38) popup_call4_audio_first_window_ParamLimits

0xd177,	// (0x0003ad38) popup_call4_audio_first_window

0xd1bf,	// (0x0003ad80) popup_call4_audio_second_window_ParamLimits

0xd1bf,	// (0x0003ad80) popup_call4_audio_second_window

0xd1d8,	// (0x0003ad99) popup_call4_audio_wait_window_ParamLimits

0xd1d8,	// (0x0003ad99) popup_call4_audio_wait_window

0x142d,	// (0x0002efee) cell_call4_button_pane_ParamLimits

0x142d,	// (0x0002efee) cell_call4_button_pane

0x6556,	// (0x00034117) bg_button_pane_cp09_ParamLimits

0x6556,	// (0x00034117) bg_button_pane_cp09

0x1456,	// (0x0002f017) cell_call4_button_pane_g1_ParamLimits

0x1456,	// (0x0002f017) cell_call4_button_pane_g1

0x147c,	// (0x0002f03d) cell_call4_button_pane_t1_ParamLimits

0x147c,	// (0x0002f03d) cell_call4_button_pane_t1

0xd1ee,	// (0x0003adaf) popup_call4_audio_conf_window_ParamLimits

0xd1ee,	// (0x0003adaf) popup_call4_audio_conf_window

0x5a24,	// (0x000335e5) mup3_progress_pane_t1_ParamLimits

0x5a43,	// (0x00033604) mup3_progress_pane_t2_ParamLimits

0xcb12,	// (0x0003a6d3) mup3_progress_pane_t3_ParamLimits

0xf7af,	// (0x0003d370) mup3_progress_pane_t_ParamLimits

0xcb2f,	// (0x0003a6f0) mup_progress_pane_cp03_ParamLimits

0x5f92,	// (0x00033b53) mup3_control_keys_pane_g4_copy1

0x6411,	// (0x00033fd2) mp4_rocker2_pane_ParamLimits

0x6411,	// (0x00033fd2) mp4_rocker2_pane

0xd202,	// (0x0003adc3) mp4_rocker2_pane_g1

0xd20a,	// (0x0003adcb) mp4_rocker2_pane_g2

0x6594,	// (0x00034155) mp4_rocker2_pane_g3

0x659c,	// (0x0003415d) mp4_rocker2_pane_g4

0x65a4,	// (0x00034165) mp4_rocker2_pane_g5

0x0004,

0xf8e4,	// (0x0003d4a5) mp4_rocker2_pane_g

0x1ceb,	// (0x0002f8ac) main_camera4_pane

0x1ceb,	// (0x0002f8ac) main_video4_pane

0x1078,	// (0x0002ec39) main_video_tele_dialer_pane_t1_ParamLimits

0x1078,	// (0x0002ec39) main_video_tele_dialer_pane_t1

0x1091,	// (0x0002ec52) main_video_tele_dialer_pane_t2_ParamLimits

0x1091,	// (0x0002ec52) main_video_tele_dialer_pane_t2

0x0001,

0xf89e,	// (0x0003d45f) main_video_tele_dialer_pane_t_ParamLimits

0xf89e,	// (0x0003d45f) main_video_tele_dialer_pane_t

0x14be,	// (0x0002f07f) cam4_autofocus_pane_ParamLimits

0x14be,	// (0x0002f07f) cam4_autofocus_pane

0x14d4,	// (0x0002f095) cam4_image_uncrop_pane_ParamLimits

0x14d4,	// (0x0002f095) cam4_image_uncrop_pane

0x14ee,	// (0x0002f0af) cam4_indicators_pane_ParamLimits

0x14ee,	// (0x0002f0af) cam4_indicators_pane

0x1519,	// (0x0002f0da) main_camera4_pane_g1_ParamLimits

0x1519,	// (0x0002f0da) main_camera4_pane_g1

0x152b,	// (0x0002f0ec) main_camera4_pane_g2_ParamLimits

0x152b,	// (0x0002f0ec) main_camera4_pane_g2

0x153e,	// (0x0002f0ff) main_camera4_pane_g3_ParamLimits

0x153e,	// (0x0002f0ff) main_camera4_pane_g3

0x1551,	// (0x0002f112) main_camera4_pane_g4_ParamLimits

0x1551,	// (0x0002f112) main_camera4_pane_g4

0x1564,	// (0x0002f125) main_camera4_pane_g5_ParamLimits

0x1564,	// (0x0002f125) main_camera4_pane_g5

0x0005,

0xf8ef,	// (0x0003d4b0) main_camera4_pane_g_ParamLimits

0xf8ef,	// (0x0003d4b0) main_camera4_pane_g

0x1588,	// (0x0002f149) main_camera4_pane_t1_ParamLimits

0x1588,	// (0x0002f149) main_camera4_pane_t1

0x65dc,	// (0x0003419d) bg_tb_trans_pane_cp06

0x65f2,	// (0x000341b3) cam4_indicators_pane_g1

0x6603,	// (0x000341c4) cam4_indicators_pane_g2

0x0002,

0xf90a,	// (0x0003d4cb) cam4_indicators_pane_g

0x661b,	// (0x000341dc) cam4_indicators_pane_t1

0x15d8,	// (0x0002f199) main_video4_pane_g1_ParamLimits

0x15d8,	// (0x0002f199) main_video4_pane_g1

0x15e7,	// (0x0002f1a8) main_video4_pane_g2_ParamLimits

0x15e7,	// (0x0002f1a8) main_video4_pane_g2

0x15f6,	// (0x0002f1b7) main_video4_pane_g3_ParamLimits

0x15f6,	// (0x0002f1b7) main_video4_pane_g3

0x1605,	// (0x0002f1c6) main_video4_pane_g4_ParamLimits

0x1605,	// (0x0002f1c6) main_video4_pane_g4

0x0004,

0xf911,	// (0x0003d4d2) main_video4_pane_g_ParamLimits

0xf911,	// (0x0003d4d2) main_video4_pane_g

0x1623,	// (0x0002f1e4) vid4_indicators_pane_ParamLimits

0x1623,	// (0x0002f1e4) vid4_indicators_pane

0x1651,	// (0x0002f212) video4_image_uncrop_cif_pane_ParamLimits

0x1651,	// (0x0002f212) video4_image_uncrop_cif_pane

0x166b,	// (0x0002f22c) video4_image_uncrop_nhd_pane_ParamLimits

0x166b,	// (0x0002f22c) video4_image_uncrop_nhd_pane

0x14d4,	// (0x0002f095) video4_image_uncrop_vga_pane_ParamLimits

0x14d4,	// (0x0002f095) video4_image_uncrop_vga_pane

0x1cd1,	// (0x0002f892) bg_tb_trans_pane_cp07

0x6645,	// (0x00034206) vid4_indicators_pane_g1

0x6659,	// (0x0003421a) vid4_indicators_pane_g2

0x666d,	// (0x0003422e) vid4_indicators_pane_g3

0x0004,

0xf91c,	// (0x0003d4dd) vid4_indicators_pane_g

0x669a,	// (0x0003425b) vid4_indicators_pane_t1

0x66b1,	// (0x00034272) cam4_autofocus_pane_g1

0x66b9,	// (0x0003427a) cam4_autofocus_pane_g2

0x66c1,	// (0x00034282) cam4_autofocus_pane_g3

0x0002,

0xf927,	// (0x0003d4e8) cam4_autofocus_pane_g

0x66c9,	// (0x0003428a) cam4_autofocus_pane_g3_copy1

0x620d,	// (0x00033dce) video_down_pane_cp_t1

0x621b,	// (0x00033ddc) video_down_pane_cp_t2

0x0001,

0xf8a3,	// (0x0003d464) video_down_pane_cp_t

0x1cd1,	// (0x0002f892) popup_vitu2_window_ParamLimits

0x1cd1,	// (0x0002f892) popup_vitu2_window

0x167f,	// (0x0002f240) aid_size_cell2_itu2_ParamLimits

0x167f,	// (0x0002f240) aid_size_cell2_itu2

0x16a5,	// (0x0002f266) aid_size_cell_itu2_ParamLimits

0x16a5,	// (0x0002f266) aid_size_cell_itu2

0x1701,	// (0x0002f2c2) bg_popup_window_pane_cp09_ParamLimits

0x1701,	// (0x0002f2c2) bg_popup_window_pane_cp09

0x170f,	// (0x0002f2d0) field_vitu2_entry_pane_ParamLimits

0x170f,	// (0x0002f2d0) field_vitu2_entry_pane

0x1735,	// (0x0002f2f6) grid_vitu2_function_pane_ParamLimits

0x1735,	// (0x0002f2f6) grid_vitu2_function_pane

0x1786,	// (0x0002f347) grid_vitu2_itu_pane_ParamLimits

0x1786,	// (0x0002f347) grid_vitu2_itu_pane

0x181c,	// (0x0002f3dd) cell_vitu2_itu_pane_ParamLimits

0x181c,	// (0x0002f3dd) cell_vitu2_itu_pane

0x1848,	// (0x0002f409) cell_vitu2_function_pane_ParamLimits

0x1848,	// (0x0002f409) cell_vitu2_function_pane

0xd212,	// (0x0003add3) bg_popup_call_pane_cp08_ParamLimits

0xd212,	// (0x0003add3) bg_popup_call_pane_cp08

0xd229,	// (0x0003adea) field_vitu2_entry_pane_g1

0xd235,	// (0x0003adf6) field_vitu2_entry_pane_g2

0x0002,

0xf92e,	// (0x0003d4ef) field_vitu2_entry_pane_g

0x66d1,	// (0x00034292) field_vitu2_entry_pane_t1_ParamLimits

0x66d1,	// (0x00034292) field_vitu2_entry_pane_t1

0xd24f,	// (0x0003ae10) field_vitu2_entry_pane_t2_ParamLimits

0xd24f,	// (0x0003ae10) field_vitu2_entry_pane_t2

0x0001,

0xf935,	// (0x0003d4f6) field_vitu2_entry_pane_t_ParamLimits

0xf935,	// (0x0003d4f6) field_vitu2_entry_pane_t

0x1887,	// (0x0002f448) bg_button_pane_cp010_ParamLimits

0x1887,	// (0x0002f448) bg_button_pane_cp010

0x6700,	// (0x000342c1) cell_vitu2_itu_pane_g1

0x18a3,	// (0x0002f464) cell_vitu2_itu_pane_t1_ParamLimits

0x18a3,	// (0x0002f464) cell_vitu2_itu_pane_t1

0x1901,	// (0x0002f4c2) cell_vitu2_itu_pane_t2_ParamLimits

0x1901,	// (0x0002f4c2) cell_vitu2_itu_pane_t2

0x0002,

0xf93f,	// (0x0003d500) cell_vitu2_itu_pane_t_ParamLimits

0xf93f,	// (0x0003d500) cell_vitu2_itu_pane_t

0x1cd1,	// (0x0002f892) bg_button_pane_cp011

0x19ed,	// (0x0002f5ae) cell_vitu2_function_pane_g1

0x1ceb,	// (0x0002f8ac) main_myfav_hc_pane

0x1377,	// (0x0002ef38) popup_image3_note_pane_ParamLimits

0x1377,	// (0x0002ef38) popup_image3_note_pane

0x1393,	// (0x0002ef54) popup_image3_tool_bar_pane_ParamLimits

0x1393,	// (0x0002ef54) popup_image3_tool_bar_pane

0x198f,	// (0x0002f550) cell_vitu2_itu_pane_t3_ParamLimits

0x198f,	// (0x0002f550) cell_vitu2_itu_pane_t3

0x9bdb,	// (0x0003779c) bg_popup_trans_pane

0xd274,	// (0x0003ae35) grid_image3_tool_bar_pane

0xd27e,	// (0x0003ae3f) bg_popup_trans_pane_g1

0xa78e,	// (0x0003834f) bg_popup_trans_pane_g2

0xd286,	// (0x0003ae47) bg_popup_trans_pane_g3

0xd28e,	// (0x0003ae4f) bg_popup_trans_pane_g4

0xd296,	// (0x0003ae57) bg_popup_trans_pane_g5

0xd29e,	// (0x0003ae5f) bg_popup_trans_pane_g6

0xd2a6,	// (0x0003ae67) bg_popup_trans_pane_g7

0xd2ae,	// (0x0003ae6f) bg_popup_trans_pane_g8

0xa76e,	// (0x0003832f) bg_popup_trans_pane_g9

0x0008,

0xf946,	// (0x0003d507) bg_popup_trans_pane_g

0xd2b6,	// (0x0003ae77) cell_image3_tool_bar_pane_ParamLimits

0xd2b6,	// (0x0003ae77) cell_image3_tool_bar_pane

0xc7c9,	// (0x0003a38a) cell_image3_tool_bar_pane_g1

0x9bdb,	// (0x0003779c) bg_popup_trans_pane_cp1

0xd2ca,	// (0x0003ae8b) popup_image3_note_pane_t1

0xd2d8,	// (0x0003ae99) popup_image3_note_pane_t2

0xd2e6,	// (0x0003aea7) popup_image3_note_pane_t3

0x0002,

0xf959,	// (0x0003d51a) popup_image3_note_pane_t

0xd2f4,	// (0x0003aeb5) popup_image3_note_pane_t3_copy1

0x6712,	// (0x000342d3) bg_myfav_hc_instruction_pane_ParamLimits

0x6712,	// (0x000342d3) bg_myfav_hc_instruction_pane

0x6726,	// (0x000342e7) cell_myfav_contact_pane_ParamLimits

0x6726,	// (0x000342e7) cell_myfav_contact_pane

0x6744,	// (0x00034305) cell_myfav_contact_pane_cp1_ParamLimits

0x6744,	// (0x00034305) cell_myfav_contact_pane_cp1

0x675c,	// (0x0003431d) cell_myfav_contact_pane_cp2_ParamLimits

0x675c,	// (0x0003431d) cell_myfav_contact_pane_cp2

0x6774,	// (0x00034335) cell_myfav_contact_pane_cp3_ParamLimits

0x6774,	// (0x00034335) cell_myfav_contact_pane_cp3

0x678b,	// (0x0003434c) cell_myfav_contact_pane_cp4_ParamLimits

0x678b,	// (0x0003434c) cell_myfav_contact_pane_cp4

0x67a3,	// (0x00034364) cell_myfav_contact_pane_cp5_ParamLimits

0x67a3,	// (0x00034364) cell_myfav_contact_pane_cp5

0x67b7,	// (0x00034378) cell_myfav_contact_pane_cp6_ParamLimits

0x67b7,	// (0x00034378) cell_myfav_contact_pane_cp6

0x67cd,	// (0x0003438e) cell_myfav_contact_pane_cp7_ParamLimits

0x67cd,	// (0x0003438e) cell_myfav_contact_pane_cp7

0xd302,	// (0x0003aec3) listscroll_gen_pane_cp05

0x67e7,	// (0x000343a8) main_myfav_hc_pane_g1_ParamLimits

0x67e7,	// (0x000343a8) main_myfav_hc_pane_g1

0x6801,	// (0x000343c2) main_myfav_hc_pane_g2_ParamLimits

0x6801,	// (0x000343c2) main_myfav_hc_pane_g2

0x0002,

0xf960,	// (0x0003d521) main_myfav_hc_pane_g_ParamLimits

0xf960,	// (0x0003d521) main_myfav_hc_pane_g

0x6833,	// (0x000343f4) main_myfav_hc_pane_t1_ParamLimits

0x6833,	// (0x000343f4) main_myfav_hc_pane_t1

0xd30b,	// (0x0003aecc) main_myfav_hc_pane_t2_ParamLimits

0xd30b,	// (0x0003aecc) main_myfav_hc_pane_t2

0xd31d,	// (0x0003aede) main_myfav_hc_pane_t3_ParamLimits

0xd31d,	// (0x0003aede) main_myfav_hc_pane_t3

0x684a,	// (0x0003440b) main_myfav_hc_pane_t4_ParamLimits

0x684a,	// (0x0003440b) main_myfav_hc_pane_t4

0x0004,

0xf967,	// (0x0003d528) main_myfav_hc_pane_t_ParamLimits

0xf967,	// (0x0003d528) main_myfav_hc_pane_t

0xc7c9,	// (0x0003a38a) bg_myfav_hc_instruction_pane_g1

0xd32f,	// (0x0003aef0) cell_myfav_contact_pane_g1_ParamLimits

0xd32f,	// (0x0003aef0) cell_myfav_contact_pane_g1

0xd32f,	// (0x0003aef0) cell_myfav_contact_pane_g2_ParamLimits

0xd32f,	// (0x0003aef0) cell_myfav_contact_pane_g2

0xd33b,	// (0x0003aefc) cell_myfav_contact_pane_g3_ParamLimits

0xd33b,	// (0x0003aefc) cell_myfav_contact_pane_g3

0xcafc,	// (0x0003a6bd) cell_myfav_contact_pane_g4_ParamLimits

0xcafc,	// (0x0003a6bd) cell_myfav_contact_pane_g4

0xd348,	// (0x0003af09) cell_myfav_contact_pane_g5_ParamLimits

0xd348,	// (0x0003af09) cell_myfav_contact_pane_g5

0x0004,

0xf972,	// (0x0003d533) cell_myfav_contact_pane_g_ParamLimits

0xf972,	// (0x0003d533) cell_myfav_contact_pane_g

0x681b,	// (0x000343dc) main_myfav_hc_pane_g3_ParamLimits

0x681b,	// (0x000343dc) main_myfav_hc_pane_g3

0x0487,	// (0x0002e048) popup_adpt_find_window

0x6872,	// (0x00034433) afind_page_pane_ParamLimits

0x6872,	// (0x00034433) afind_page_pane

0x6887,	// (0x00034448) aid_size_cell_afind_ParamLimits

0x6887,	// (0x00034448) aid_size_cell_afind

0x68a5,	// (0x00034466) bg_popup_sub_pane_cp09_ParamLimits

0x68a5,	// (0x00034466) bg_popup_sub_pane_cp09

0x68b2,	// (0x00034473) find_pane_cp01_ParamLimits

0x68b2,	// (0x00034473) find_pane_cp01

0xd354,	// (0x0003af15) grid_afind_control_pane_ParamLimits

0xd354,	// (0x0003af15) grid_afind_control_pane

0x68bf,	// (0x00034480) grid_afind_pane_ParamLimits

0x68bf,	// (0x00034480) grid_afind_pane

0x68de,	// (0x0003449f) cell_afind_pane_ParamLimits

0x68de,	// (0x0003449f) cell_afind_pane

0xc7c9,	// (0x0003a38a) afind_page_pane_g1

0x6945,	// (0x00034506) afind_page_pane_g2

0x694e,	// (0x0003450f) afind_page_pane_g3

0x0002,

0xf97d,	// (0x0003d53e) afind_page_pane_g

0x6957,	// (0x00034518) afind_page_pane_t1

0xd368,	// (0x0003af29) cell_afind_grid_control_pane_ParamLimits

0xd368,	// (0x0003af29) cell_afind_grid_control_pane

0xd154,	// (0x0003ad15) bg_button_pane_cp69_ParamLimits

0xd154,	// (0x0003ad15) bg_button_pane_cp69

0x6977,	// (0x00034538) cell_afind_pane_g1_ParamLimits

0x6977,	// (0x00034538) cell_afind_pane_g1

0x6984,	// (0x00034545) cell_afind_pane_t1_ParamLimits

0x6984,	// (0x00034545) cell_afind_pane_t1

0xa55b,	// (0x0003811c) bg_button_pane_cp72

0xd377,	// (0x0003af38) cell_afind_grid_control_pane_g1

0x4622,	// (0x000321e3) aid_image_placing_area_ParamLimits

0x4622,	// (0x000321e3) aid_image_placing_area

0xce22,	// (0x0003a9e3) field_vitu_entry_pane_g1_ParamLimits

0xce22,	// (0x0003a9e3) field_vitu_entry_pane_g1

0xce2e,	// (0x0003a9ef) field_vitu_entry_pane_g2_ParamLimits

0xce2e,	// (0x0003a9ef) field_vitu_entry_pane_g2

0x0001,

0xf82e,	// (0x0003d3ef) field_vitu_entry_pane_g_ParamLimits

0xf82e,	// (0x0003d3ef) field_vitu_entry_pane_g

0x605b,	// (0x00033c1c) cell_vitu_itu_pane_g1_ParamLimits

0x609d,	// (0x00033c5e) cell_vitu_itu_pane_t3_ParamLimits

0x609d,	// (0x00033c5e) cell_vitu_itu_pane_t3

0xd104,	// (0x0003acc5) mp4_progress_pane_t1_ParamLimits

0xd11d,	// (0x0003acde) mp4_progress_pane_t2_ParamLimits

0xf8c3,	// (0x0003d484) mp4_progress_pane_t_ParamLimits

0xd136,	// (0x0003acf7) mup_progress_pane_cp04_ParamLimits

0x685e,	// (0x0003441f) main_myfav_hc_pane_t5_ParamLimits

0x685e,	// (0x0003441f) main_myfav_hc_pane_t5

0x1c4e,	// (0x0002f80f) aid_zoom_text_primary

0x0487,	// (0x0002e048) popup_adpt_find_window_ParamLimits

0x1cd1,	// (0x0002f892) main_cam_set_pane

0x1505,	// (0x0002f0c6) cam4_zoom_pane_ParamLimits

0x1505,	// (0x0002f0c6) cam4_zoom_pane

0x6996,	// (0x00034557) main_cam_set_pane_g1_ParamLimits

0x6996,	// (0x00034557) main_cam_set_pane_g1

0x69a4,	// (0x00034565) main_cam_set_pane_g2_ParamLimits

0x69a4,	// (0x00034565) main_cam_set_pane_g2

0x0001,

0xf984,	// (0x0003d545) main_cam_set_pane_g_ParamLimits

0xf984,	// (0x0003d545) main_cam_set_pane_g

0x69c5,	// (0x00034586) main_cam_set_pane_t1_ParamLimits

0x69c5,	// (0x00034586) main_cam_set_pane_t1

0x69e0,	// (0x000345a1) main_cset_listscroll_pane_ParamLimits

0x69e0,	// (0x000345a1) main_cset_listscroll_pane

0x6a00,	// (0x000345c1) main_cset_slider_pane_ParamLimits

0x6a00,	// (0x000345c1) main_cset_slider_pane

0xd388,	// (0x0003af49) main_cset_list_pane_ParamLimits

0xd388,	// (0x0003af49) main_cset_list_pane

0xd398,	// (0x0003af59) scroll_pane_cp028

0x6a26,	// (0x000345e7) aid_area_touch_slider

0x6a42,	// (0x00034603) cset_slider_pane

0x6a6c,	// (0x0003462d) main_cset_slider_pane_g1

0x6a81,	// (0x00034642) main_cset_slider_pane_g2

0x0011,

0xf989,	// (0x0003d54a) main_cset_slider_pane_g

0xd3d1,	// (0x0003af92) main_cset_slider_pane_t1

0x6b25,	// (0x000346e6) main_cset_slider_pane_t2

0x6b3f,	// (0x00034700) main_cset_slider_pane_t3

0x6b59,	// (0x0003471a) main_cset_slider_pane_t4

0x6b73,	// (0x00034734) main_cset_slider_pane_t5

0x6b8d,	// (0x0003474e) main_cset_slider_pane_t6

0x6ba2,	// (0x00034763) main_cset_slider_pane_t7

0x000e,

0xf9ae,	// (0x0003d56f) main_cset_slider_pane_t

0x6ca6,	// (0x00034867) cset_list_set_pane_ParamLimits

0x6ca6,	// (0x00034867) cset_list_set_pane

0x6cb8,	// (0x00034879) aid_position_infowindow_above

0x6cc0,	// (0x00034881) aid_position_infowindow_below

0x6cc8,	// (0x00034889) cset_list_set_pane_g1_ParamLimits

0x6cc8,	// (0x00034889) cset_list_set_pane_g1

0x6cd4,	// (0x00034895) cset_list_set_pane_g3_ParamLimits

0x6cd4,	// (0x00034895) cset_list_set_pane_g3

0x0001,

0xf9cd,	// (0x0003d58e) cset_list_set_pane_g_ParamLimits

0xf9cd,	// (0x0003d58e) cset_list_set_pane_g

0x6ce3,	// (0x000348a4) cset_list_set_pane_t1_ParamLimits

0x6ce3,	// (0x000348a4) cset_list_set_pane_t1

0xa70e,	// (0x000382cf) list_highlight_pane_cp021_ParamLimits

0xa70e,	// (0x000382cf) list_highlight_pane_cp021

0xb0ac,	// (0x00038c6d) cset_slider_pane_g1

0xb0be,	// (0x00038c7f) cset_slider_pane_g2

0xb0b5,	// (0x00038c76) cset_slider_pane_g3

0x0002,

0xf9d2,	// (0x0003d593) cset_slider_pane_g

0x6cf8,	// (0x000348b9) aid_area_touch_cam4_zoom

0x6d00,	// (0x000348c1) cam4_zoom_cont_pane

0x6d08,	// (0x000348c9) cam4_zoom_pane_g1

0x6d10,	// (0x000348d1) cam4_zoom_pane_g2

0x1a01,	// (0x0002f5c2) cam4_zoom_pane_g3

0x0002,

0xf9d9,	// (0x0003d59a) cam4_zoom_pane_g

0x6d18,	// (0x000348d9) cam4_zoom_cont_pane_g1

0x6d21,	// (0x000348e2) cam4_zoom_cont_pane_g2

0x6d2a,	// (0x000348eb) cam4_zoom_cont_pane_g3

0x0002,

0xf9e0,	// (0x0003d5a1) cam4_zoom_cont_pane_g

0x13cd,	// (0x0002ef8e) call4_image_pane_ParamLimits

0x13cd,	// (0x0002ef8e) call4_image_pane

0xd160,	// (0x0003ad21) call4_windows_conf_pane_ParamLimits

0xd19d,	// (0x0003ad5e) popup_call4_audio_in_window_ParamLimits

0xd19d,	// (0x0003ad5e) popup_call4_audio_in_window

0x9bdb,	// (0x0003779c) bg_popup_call2_act_pane_cp02

0xd1e6,	// (0x0003ada7) call4_list_conf_pane

0xc7c9,	// (0x0003a38a) call4_image_pane_g1

0xc7c9,	// (0x0003a38a) call4_image_pane_g2

0x0001,

0xf6ef,	// (0x0003d2b0) call4_image_pane_g

0xd4b7,	// (0x0003b078) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4b7,	// (0x0003b078) list_single_graphic_popup_conf4_pane

0x9bdb,	// (0x0003779c) list_highlight_pane_cp022

0xd4ca,	// (0x0003b08b) list_single_graphic_popup_conf4_pane_g1

0xaca8,	// (0x00038869) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e7,	// (0x0003d5a8) list_single_graphic_popup_conf4_pane_g

0xd4d2,	// (0x0003b093) list_single_graphic_popup_conf4_pane_t1

0x2b53,	// (0x00030714) popup_vtel_slider_window_ParamLimits

0x2b53,	// (0x00030714) popup_vtel_slider_window

0xd142,	// (0x0003ad03) dialer2_ne_pane_t2_ParamLimits

0xd142,	// (0x0003ad03) dialer2_ne_pane_t2

0x0001,

0xf8c8,	// (0x0003d489) dialer2_ne_pane_t_ParamLimits

0xf8c8,	// (0x0003d489) dialer2_ne_pane_t

0xc5ae,	// (0x0003a16f) bg_popup_sub_pane_cp010_ParamLimits

0xc5ae,	// (0x0003a16f) bg_popup_sub_pane_cp010

0x6d33,	// (0x000348f4) popup_vtel_slider_window_g1_ParamLimits

0x6d33,	// (0x000348f4) popup_vtel_slider_window_g1

0x6d46,	// (0x00034907) popup_vtel_slider_window_g2_ParamLimits

0x6d46,	// (0x00034907) popup_vtel_slider_window_g2

0x0003,

0xf9ec,	// (0x0003d5ad) popup_vtel_slider_window_g_ParamLimits

0xf9ec,	// (0x0003d5ad) popup_vtel_slider_window_g

0x6d9c,	// (0x0003495d) vtel_slider_pane_ParamLimits

0x6d9c,	// (0x0003495d) vtel_slider_pane

0x6dbe,	// (0x0003497f) vtel_slider_pane_g1_ParamLimits

0x6dbe,	// (0x0003497f) vtel_slider_pane_g1

0x6dd2,	// (0x00034993) vtel_slider_pane_g2_ParamLimits

0x6dd2,	// (0x00034993) vtel_slider_pane_g2

0x6dea,	// (0x000349ab) vtel_slider_pane_g3_ParamLimits

0x6dea,	// (0x000349ab) vtel_slider_pane_g3

0x6dbe,	// (0x0003497f) vtel_slider_pane_g4_ParamLimits

0x6dbe,	// (0x0003497f) vtel_slider_pane_g4

0x6e00,	// (0x000349c1) vtel_slider_pane_g5_ParamLimits

0x6e00,	// (0x000349c1) vtel_slider_pane_g5

0x0004,

0xf9f5,	// (0x0003d5b6) vtel_slider_pane_g_ParamLimits

0xf9f5,	// (0x0003d5b6) vtel_slider_pane_g

0x1cd1,	// (0x0002f892) main_gallery2_pane

0x16d1,	// (0x0002f292) aid_size_row_itut2_dropdow_list_ParamLimits

0x16d1,	// (0x0002f292) aid_size_row_itut2_dropdow_list

0x175d,	// (0x0002f31e) grid_vitu2_function_top_pane_ParamLimits

0x175d,	// (0x0002f31e) grid_vitu2_function_top_pane

0x17c7,	// (0x0002f388) popup_vitu2_dropdown_list_window_ParamLimits

0x17c7,	// (0x0002f388) popup_vitu2_dropdown_list_window

0x17f0,	// (0x0002f3b1) popup_vitu2_match_list_window

0x1a09,	// (0x0002f5ca) cell_vitu2_function_top_pane_ParamLimits

0x1a09,	// (0x0002f5ca) cell_vitu2_function_top_pane

0x1a21,	// (0x0002f5e2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1a21,	// (0x0002f5e2) cell_vitu2_function_top_pane_cp01

0x1a3d,	// (0x0002f5fe) cell_vitu2_function_top_wide_pane_ParamLimits

0x1a3d,	// (0x0002f5fe) cell_vitu2_function_top_wide_pane

0x1cd1,	// (0x0002f892) bg_button_pane_cp012

0x1a59,	// (0x0002f61a) cell_vitu2_function_top_pane_g1

0x6e16,	// (0x000349d7) bg_button_pane_cp013_ParamLimits

0x6e16,	// (0x000349d7) bg_button_pane_cp013

0x6e32,	// (0x000349f3) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e32,	// (0x000349f3) cell_vitu2_function_top_wide_pane_g1

0x1cd1,	// (0x0002f892) bg_popup_sub_pane_cp20

0x1a6d,	// (0x0002f62e) list_vitu2_match_list_pane

0xd27e,	// (0x0003ae3f) bg_popup_sub_pane_cp20_g1

0xd286,	// (0x0003ae47) bg_popup_sub_pane_cp20_g2

0xa78e,	// (0x0003834f) bg_popup_sub_pane_cp20_g3

0xd28e,	// (0x0003ae4f) bg_popup_sub_pane_cp20_g4

0xa76e,	// (0x0003832f) bg_popup_sub_pane_cp20_g5

0xd4f6,	// (0x0003b0b7) bg_popup_sub_pane_cp20_g6

0xd29e,	// (0x0003ae5f) bg_popup_sub_pane_cp20_g7

0xd2a6,	// (0x0003ae67) bg_popup_sub_pane_cp20_g8

0xd2ae,	// (0x0003ae6f) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa00,	// (0x0003d5c1) bg_popup_sub_pane_cp20_g

0x6e4a,	// (0x00034a0b) list_vitu2_match_list_item_pane_ParamLimits

0x6e4a,	// (0x00034a0b) list_vitu2_match_list_item_pane

0x6e5c,	// (0x00034a1d) list_vitu2_match_list_item_pane_t1

0x1ceb,	// (0x0002f8ac) bg_popup_sub_pane_cp21

0x6eba,	// (0x00034a7b) grid_vitu2_dropdown_list_pane

0x1a8b,	// (0x0002f64c) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1a8b,	// (0x0002f64c) cell_vitu2_dropdown_list_char_pane

0x1aac,	// (0x0002f66d) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1aac,	// (0x0002f66d) cell_vitu2_dropdown_list_ctrl_pane

0xd4fe,	// (0x0003b0bf) cell_vitu2_dropdown_list_char_pane_g1

0xd507,	// (0x0003b0c8) cell_vitu2_dropdown_list_char_pane_g2

0xd510,	// (0x0003b0d1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1d,	// (0x0003d5de) cell_vitu2_dropdown_list_char_pane_g

0x1ad8,	// (0x0002f699) cell_vitu2_dropdown_list_char_pane_t1

0x6ec2,	// (0x00034a83) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6ec2,	// (0x00034a83) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6ecf,	// (0x00034a90) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6ecf,	// (0x00034a90) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6edc,	// (0x00034a9d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6edc,	// (0x00034a9d) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1ae6,	// (0x0002f6a7) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1ae6,	// (0x0002f6a7) cell_vitu2_dropdown_list_ctrl_pane_g4

0x65dc,	// (0x0003419d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x65dc,	// (0x0003419d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa24,	// (0x0003d5e5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa24,	// (0x0003d5e5) cell_vitu2_dropdown_list_ctrl_pane_g

0x6ee9,	// (0x00034aaa) aid_size_cell_gallery2_ParamLimits

0x6ee9,	// (0x00034aaa) aid_size_cell_gallery2

0x6f07,	// (0x00034ac8) grid_gallery2_pane_ParamLimits

0x6f07,	// (0x00034ac8) grid_gallery2_pane

0x6f21,	// (0x00034ae2) scroll_pane_cp029_ParamLimits

0x6f21,	// (0x00034ae2) scroll_pane_cp029

0x6f32,	// (0x00034af3) cell_gallery2_pane_ParamLimits

0x6f32,	// (0x00034af3) cell_gallery2_pane

0xd519,	// (0x0003b0da) cell_gallery2_pane_g2

0x6f91,	// (0x00034b52) cell_gallery2_pane_g3

0xd521,	// (0x0003b0e2) cell_gallery2_pane_g4

0xd529,	// (0x0003b0ea) cell_gallery2_pane_g5

0xa509,	// (0x000380ca) grid_highlight_pane_cp10

0x17f0,	// (0x0002f3b1) popup_vitu2_match_list_window_ParamLimits

0x1805,	// (0x0002f3c6) popup_vitu2_query_window_ParamLimits

0x1805,	// (0x0002f3c6) popup_vitu2_query_window

0x1ceb,	// (0x0002f8ac) bg_vitu2_candi_button_pane

0xd4fe,	// (0x0003b0bf) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd507,	// (0x0003b0c8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd510,	// (0x0003b0d1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6f99,	// (0x00034b5a) bg_button_pane_cp015

0x6fad,	// (0x00034b6e) bg_button_pane_cp016

0x6fc0,	// (0x00034b81) bg_button_pane_cp017

0xc3c1,	// (0x00039f82) bg_popup_sub_pane_cp22

0xd531,	// (0x0003b0f2) popup_vitu2_query_window_g1

0x7005,	// (0x00034bc6) popup_vitu2_query_window_g2

0x0002,

0xfa2f,	// (0x0003d5f0) popup_vitu2_query_window_g

0x7024,	// (0x00034be5) popup_vitu2_query_window_t1_ParamLimits

0x7024,	// (0x00034be5) popup_vitu2_query_window_t1

0x7059,	// (0x00034c1a) popup_vitu2_query_window_t2_ParamLimits

0x7059,	// (0x00034c1a) popup_vitu2_query_window_t2

0x706b,	// (0x00034c2c) popup_vitu2_query_window_t3_ParamLimits

0x706b,	// (0x00034c2c) popup_vitu2_query_window_t3

0x7093,	// (0x00034c54) popup_vitu2_query_window_t4_ParamLimits

0x7093,	// (0x00034c54) popup_vitu2_query_window_t4

0x70b4,	// (0x00034c75) popup_vitu2_query_window_t5_ParamLimits

0x70b4,	// (0x00034c75) popup_vitu2_query_window_t5

0x0006,

0xfa36,	// (0x0003d5f7) popup_vitu2_query_window_t_ParamLimits

0xfa36,	// (0x0003d5f7) popup_vitu2_query_window_t

0xd380,	// (0x0003af41) main_cset_text_pane

0x6a26,	// (0x000345e7) aid_area_touch_slider_ParamLimits

0x6a42,	// (0x00034603) cset_slider_pane_ParamLimits

0x6a6c,	// (0x0003462d) main_cset_slider_pane_g1_ParamLimits

0x6a81,	// (0x00034642) main_cset_slider_pane_g2_ParamLimits

0xd3a1,	// (0x0003af62) main_cset_slider_pane_g3_ParamLimits

0xd3a1,	// (0x0003af62) main_cset_slider_pane_g3

0x6a96,	// (0x00034657) main_cset_slider_pane_g4_ParamLimits

0x6a96,	// (0x00034657) main_cset_slider_pane_g4

0x6aa5,	// (0x00034666) main_cset_slider_pane_g5_ParamLimits

0x6aa5,	// (0x00034666) main_cset_slider_pane_g5

0x6ab1,	// (0x00034672) main_cset_slider_pane_g6_ParamLimits

0x6ab1,	// (0x00034672) main_cset_slider_pane_g6

0xf989,	// (0x0003d54a) main_cset_slider_pane_g_ParamLimits

0xd3d1,	// (0x0003af92) main_cset_slider_pane_t1_ParamLimits

0x6b25,	// (0x000346e6) main_cset_slider_pane_t2_ParamLimits

0x6b3f,	// (0x00034700) main_cset_slider_pane_t3_ParamLimits

0x6b59,	// (0x0003471a) main_cset_slider_pane_t4_ParamLimits

0x6b73,	// (0x00034734) main_cset_slider_pane_t5_ParamLimits

0x6b8d,	// (0x0003474e) main_cset_slider_pane_t6_ParamLimits

0x6ba2,	// (0x00034763) main_cset_slider_pane_t7_ParamLimits

0x6bcc,	// (0x0003478d) main_cset_slider_pane_t8_ParamLimits

0x6bcc,	// (0x0003478d) main_cset_slider_pane_t8

0x6bf4,	// (0x000347b5) main_cset_slider_pane_t9_ParamLimits

0x6bf4,	// (0x000347b5) main_cset_slider_pane_t9

0x6c1c,	// (0x000347dd) main_cset_slider_pane_t10_ParamLimits

0x6c1c,	// (0x000347dd) main_cset_slider_pane_t10

0x6c44,	// (0x00034805) main_cset_slider_pane_t11_ParamLimits

0x6c44,	// (0x00034805) main_cset_slider_pane_t11

0x6c6c,	// (0x0003482d) main_cset_slider_pane_t12_ParamLimits

0x6c6c,	// (0x0003482d) main_cset_slider_pane_t12

0x6c89,	// (0x0003484a) main_cset_slider_pane_t13_ParamLimits

0x6c89,	// (0x0003484a) main_cset_slider_pane_t13

0xf9ae,	// (0x0003d56f) main_cset_slider_pane_t_ParamLimits

0x9bdb,	// (0x0003779c) bg_popup_sub_pane_cp011

0xd53d,	// (0x0003b0fe) main_cset_text_pane_g1

0xd545,	// (0x0003b106) main_cset_text_pane_t1

0xd553,	// (0x0003b114) main_cset_text_pane_t2

0xd561,	// (0x0003b122) main_cset_text_pane_t3

0xd56f,	// (0x0003b130) main_cset_text_pane_t4

0xd57d,	// (0x0003b13e) main_cset_text_pane_t5

0xd58b,	// (0x0003b14c) main_cset_text_pane_t6

0xd599,	// (0x0003b15a) main_cset_text_pane_t7

0x0006,

0xfa45,	// (0x0003d606) main_cset_text_pane_t

0x1ceb,	// (0x0002f8ac) main_cam4_burst_pane

0x1ceb,	// (0x0002f8ac) main_cam5_pane

0x6965,	// (0x00034526) bg_button_pane_cp019

0x696e,	// (0x0003452f) bg_button_pane_cp020

0xd3ad,	// (0x0003af6e) main_cset_slider_pane_g7_ParamLimits

0xd3ad,	// (0x0003af6e) main_cset_slider_pane_g7

0xd3b9,	// (0x0003af7a) main_cset_slider_pane_g8_ParamLimits

0xd3b9,	// (0x0003af7a) main_cset_slider_pane_g8

0x6ac5,	// (0x00034686) main_cset_slider_pane_g9_ParamLimits

0x6ac5,	// (0x00034686) main_cset_slider_pane_g9

0x6ad1,	// (0x00034692) main_cset_slider_pane_g10_ParamLimits

0x6ad1,	// (0x00034692) main_cset_slider_pane_g10

0x6add,	// (0x0003469e) main_cset_slider_pane_g11_ParamLimits

0x6add,	// (0x0003469e) main_cset_slider_pane_g11

0x6ae9,	// (0x000346aa) main_cset_slider_pane_g12_ParamLimits

0x6ae9,	// (0x000346aa) main_cset_slider_pane_g12

0x6af5,	// (0x000346b6) main_cset_slider_pane_g13_ParamLimits

0x6af5,	// (0x000346b6) main_cset_slider_pane_g13

0x6b01,	// (0x000346c2) main_cset_slider_pane_g14_ParamLimits

0x6b01,	// (0x000346c2) main_cset_slider_pane_g14

0x6b0d,	// (0x000346ce) main_cset_slider_pane_g15_ParamLimits

0x6b0d,	// (0x000346ce) main_cset_slider_pane_g15

0xd3ff,	// (0x0003afc0) main_cset_slider_pane_t14_ParamLimits

0xd3ff,	// (0x0003afc0) main_cset_slider_pane_t14

0xd47e,	// (0x0003b03f) main_cset_slider_pane_t15_ParamLimits

0xd47e,	// (0x0003b03f) main_cset_slider_pane_t15

0x712b,	// (0x00034cec) aid_cam4_burst_size_cell_ParamLimits

0x712b,	// (0x00034cec) aid_cam4_burst_size_cell

0x714b,	// (0x00034d0c) grid_cam4_burst_pane_ParamLimits

0x714b,	// (0x00034d0c) grid_cam4_burst_pane

0x7183,	// (0x00034d44) linegrid_cam4_burst_pane_ParamLimits

0x7183,	// (0x00034d44) linegrid_cam4_burst_pane

0xd5a7,	// (0x0003b168) scroll_pane_cp30_ParamLimits

0xd5a7,	// (0x0003b168) scroll_pane_cp30

0x71a7,	// (0x00034d68) cell_cam4_burst_pane_ParamLimits

0x71a7,	// (0x00034d68) cell_cam4_burst_pane

0xd5b3,	// (0x0003b174) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5b3,	// (0x0003b174) linegrid_cam4_burst_pane_g1

0x71f4,	// (0x00034db5) linegrid_cam4_burst_pane_g2_ParamLimits

0x71f4,	// (0x00034db5) linegrid_cam4_burst_pane_g2

0xd5c0,	// (0x0003b181) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5c0,	// (0x0003b181) linegrid_cam4_burst_pane_g3

0x0002,

0xfa54,	// (0x0003d615) linegrid_cam4_burst_pane_g_ParamLimits

0xfa54,	// (0x0003d615) linegrid_cam4_burst_pane_g

0x7205,	// (0x00034dc6) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7205,	// (0x00034dc6) linegrid_cam4_burst_pane_g3_copy1

0xd5cd,	// (0x0003b18e) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5cd,	// (0x0003b18e) linegrid_cam4_burst_pane_g4

0x721f,	// (0x00034de0) linegrid_cam4_burst_pane_g5_ParamLimits

0x721f,	// (0x00034de0) linegrid_cam4_burst_pane_g5

0x7230,	// (0x00034df1) linegrid_cam4_burst_pane_g6_ParamLimits

0x7230,	// (0x00034df1) linegrid_cam4_burst_pane_g6

0xd5da,	// (0x0003b19b) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5da,	// (0x0003b19b) linegrid_cam4_burst_pane_g7

0x7247,	// (0x00034e08) cell_cam4_burst_pane_g1

0xd5f3,	// (0x0003b1b4) main_cam5_pane_t1_ParamLimits

0xd5f3,	// (0x0003b1b4) main_cam5_pane_t1

0xd605,	// (0x0003b1c6) main_cam5_pane_t2_ParamLimits

0xd605,	// (0x0003b1c6) main_cam5_pane_t2

0xd617,	// (0x0003b1d8) main_cam5_pane_t3_ParamLimits

0xd617,	// (0x0003b1d8) main_cam5_pane_t3

0xd629,	// (0x0003b1ea) main_cam5_pane_t4_ParamLimits

0xd629,	// (0x0003b1ea) main_cam5_pane_t4

0xd641,	// (0x0003b202) main_cam5_pane_t5_ParamLimits

0xd641,	// (0x0003b202) main_cam5_pane_t5

0xd655,	// (0x0003b216) main_cam5_pane_t6_ParamLimits

0xd655,	// (0x0003b216) main_cam5_pane_t6

0xd669,	// (0x0003b22a) main_cam5_pane_t7_ParamLimits

0xd669,	// (0x0003b22a) main_cam5_pane_t7

0xd67b,	// (0x0003b23c) main_cam5_pane_t8_ParamLimits

0xd67b,	// (0x0003b23c) main_cam5_pane_t8

0xd697,	// (0x0003b258) main_cam5_pane_t9_ParamLimits

0xd697,	// (0x0003b258) main_cam5_pane_t9

0xd6a9,	// (0x0003b26a) main_cam5_pane_t10_ParamLimits

0xd6a9,	// (0x0003b26a) main_cam5_pane_t10

0xd6bb,	// (0x0003b27c) main_cam5_pane_t11_ParamLimits

0xd6bb,	// (0x0003b27c) main_cam5_pane_t11

0xd6cd,	// (0x0003b28e) main_cam5_pane_t12_ParamLimits

0xd6cd,	// (0x0003b28e) main_cam5_pane_t12

0xd6e2,	// (0x0003b2a3) main_cam5_pane_t13_ParamLimits

0xd6e2,	// (0x0003b2a3) main_cam5_pane_t13

0x000c,

0xfa60,	// (0x0003d621) main_cam5_pane_t_ParamLimits

0xfa60,	// (0x0003d621) main_cam5_pane_t

0x0509,	// (0x0002e0ca) popup_scut_keymap_window_ParamLimits

0x0509,	// (0x0002e0ca) popup_scut_keymap_window

0x725a,	// (0x00034e1b) aid_size_cell_brow_shortcut

0xa509,	// (0x000380ca) bg_popup_window_pane_cp010

0x7266,	// (0x00034e27) grid_scut_pane

0x7272,	// (0x00034e33) cell_scut_pane_ParamLimits

0x7272,	// (0x00034e33) cell_scut_pane

0x7289,	// (0x00034e4a) cell_scut_pane_g1

0xd6ff,	// (0x0003b2c0) cell_scut_pane_t1

0xd70e,	// (0x0003b2cf) cell_scut_pane_t2

0x7292,	// (0x00034e53) cell_scut_pane_t3

0x0002,

0xfa7b,	// (0x0003d63c) cell_scut_pane_t

0x55e7,	// (0x000331a8) main_mup3_pane_g8_ParamLimits

0x55e7,	// (0x000331a8) main_mup3_pane_g8

0x16e9,	// (0x0002f2aa) area_vitu2_query_pane_ParamLimits

0x16e9,	// (0x0002f2aa) area_vitu2_query_pane

0x6fd3,	// (0x00034b94) input_focus_pane_cp08

0xd71d,	// (0x0003b2de) area_vitu2_query_pane_g1

0x72a0,	// (0x00034e61) area_vitu2_query_pane_g2

0x0001,

0xfa82,	// (0x0003d643) area_vitu2_query_pane_g

0x72b1,	// (0x00034e72) area_vitu2_query_pane_t1_ParamLimits

0x72b1,	// (0x00034e72) area_vitu2_query_pane_t1

0x72c5,	// (0x00034e86) area_vitu2_query_pane_t2_ParamLimits

0x72c5,	// (0x00034e86) area_vitu2_query_pane_t2

0x72d9,	// (0x00034e9a) area_vitu2_query_pane_t3_ParamLimits

0x72d9,	// (0x00034e9a) area_vitu2_query_pane_t3

0xd729,	// (0x0003b2ea) area_vitu2_query_pane_t4_ParamLimits

0xd729,	// (0x0003b2ea) area_vitu2_query_pane_t4

0xd751,	// (0x0003b312) area_vitu2_query_pane_t5_ParamLimits

0xd751,	// (0x0003b312) area_vitu2_query_pane_t5

0xd779,	// (0x0003b33a) area_vitu2_query_pane_t6_ParamLimits

0xd779,	// (0x0003b33a) area_vitu2_query_pane_t6

0x0006,

0xfa87,	// (0x0003d648) area_vitu2_query_pane_t_ParamLimits

0xfa87,	// (0x0003d648) area_vitu2_query_pane_t

0x7301,	// (0x00034ec2) bg_button_pane_cp018

0x730f,	// (0x00034ed0) bg_button_pane_cp021

0x731b,	// (0x00034edc) bg_button_pane_cp022

0x732c,	// (0x00034eed) input_focus_pane_cp09

0xadb7,	// (0x00038978) aid_size_touch_mv_arrow_left

0xade2,	// (0x000389a3) aid_size_touch_mv_arrow_right

0xd466,	// (0x0003b027) main_cset_slider_pane_g16_ParamLimits

0xd466,	// (0x0003b027) main_cset_slider_pane_g16

0xd472,	// (0x0003b033) main_cset_slider_pane_g17_ParamLimits

0xd472,	// (0x0003b033) main_cset_slider_pane_g17

0x7247,	// (0x00034e08) cell_cam4_burst_pane_g1_ParamLimits

0x9bdb,	// (0x0003779c) compa_mode_pane

0x6d56,	// (0x00034917) popup_vtel_slider_window_g3_ParamLimits

0x6d56,	// (0x00034917) popup_vtel_slider_window_g3

0x6d6d,	// (0x0003492e) popup_vtel_slider_window_g4_ParamLimits

0x6d6d,	// (0x0003492e) popup_vtel_slider_window_g4

0x6d84,	// (0x00034945) popup_vtel_slider_window_t1_ParamLimits

0x6d84,	// (0x00034945) popup_vtel_slider_window_t1

0x1ceb,	// (0x0002f8ac) main_cl_pane

0x4b5f,	// (0x00032720) popup_imed_adjust2_window_ParamLimits

0xc3c1,	// (0x00039f82) bg_tb_trans_pane_cp05_ParamLimits

0xcd57,	// (0x0003a918) popup_imed_adjust2_window_g1_ParamLimits

0xcd66,	// (0x0003a927) popup_imed_adjust2_window_g2_ParamLimits

0xcd66,	// (0x0003a927) popup_imed_adjust2_window_g2

0xcd72,	// (0x0003a933) popup_imed_adjust2_window_g3_ParamLimits

0xcd72,	// (0x0003a933) popup_imed_adjust2_window_g3

0x0002,

0xf7f2,	// (0x0003d3b3) popup_imed_adjust2_window_g_ParamLimits

0xf7f2,	// (0x0003d3b3) popup_imed_adjust2_window_g

0xcd7e,	// (0x0003a93f) popup_imed_adjust2_window_t1_ParamLimits

0xcd96,	// (0x0003a957) slider_imed_adjust_pane_ParamLimits

0xcdaa,	// (0x0003a96b) slider_imed_adjust_pane_g1_ParamLimits

0xcdba,	// (0x0003a97b) slider_imed_adjust_pane_g2_ParamLimits

0xcdca,	// (0x0003a98b) slider_imed_adjust_pane_g3_ParamLimits

0xcddb,	// (0x0003a99c) slider_imed_adjust_pane_g4_ParamLimits

0xf7f9,	// (0x0003d3ba) slider_imed_adjust_pane_g_ParamLimits

0x14a6,	// (0x0002f067) aid_touch_area_cam4_ParamLimits

0x14a6,	// (0x0002f067) aid_touch_area_cam4

0x65ac,	// (0x0003416d) battery_pane_cp01

0x1575,	// (0x0002f136) main_camera4_pane_g6_ParamLimits

0x1575,	// (0x0002f136) main_camera4_pane_g6

0x159f,	// (0x0002f160) main_camera4_pane_t2_ParamLimits

0x159f,	// (0x0002f160) main_camera4_pane_t2

0x0001,

0xf8fc,	// (0x0003d4bd) main_camera4_pane_t_ParamLimits

0xf8fc,	// (0x0003d4bd) main_camera4_pane_t

0x15c0,	// (0x0002f181) aid_touch_area_vid4_ParamLimits

0x15c0,	// (0x0002f181) aid_touch_area_vid4

0x1614,	// (0x0002f1d5) main_video4_pane_g5_ParamLimits

0x1614,	// (0x0002f1d5) main_video4_pane_g5

0x1639,	// (0x0002f1fa) vid4_progress_pane_ParamLimits

0x1639,	// (0x0002f1fa) vid4_progress_pane

0xd3c5,	// (0x0003af86) main_cset_slider_pane_g18_ParamLimits

0xd3c5,	// (0x0003af86) main_cset_slider_pane_g18

0xd5e7,	// (0x0003b1a8) cell_cam4_burst_pane_g2_ParamLimits

0xd5e7,	// (0x0003b1a8) cell_cam4_burst_pane_g2

0x0001,

0xfa5b,	// (0x0003d61c) cell_cam4_burst_pane_g_ParamLimits

0xfa5b,	// (0x0003d61c) cell_cam4_burst_pane_g

0xa324,	// (0x00037ee5) bg_cl_pane_ParamLimits

0xa324,	// (0x00037ee5) bg_cl_pane

0x733d,	// (0x00034efe) cl_header_pane_ParamLimits

0x733d,	// (0x00034efe) cl_header_pane

0x7351,	// (0x00034f12) cl_listscroll_pane_ParamLimits

0x7351,	// (0x00034f12) cl_listscroll_pane

0xd7c5,	// (0x0003b386) bg_cl_pane_g1

0xd7cd,	// (0x0003b38e) bg_cl_pane_g2

0xd7d5,	// (0x0003b396) bg_cl_pane_g3

0xd7dd,	// (0x0003b39e) bg_cl_pane_g4

0xd7e5,	// (0x0003b3a6) bg_cl_pane_g5

0xd7ed,	// (0x0003b3ae) bg_cl_pane_g6

0xd7f5,	// (0x0003b3b6) bg_cl_pane_g7

0xd7fd,	// (0x0003b3be) bg_cl_pane_g8

0xd805,	// (0x0003b3c6) bg_cl_pane_g9

0x0008,

0xfa96,	// (0x0003d657) bg_cl_pane_g

0x7361,	// (0x00034f22) aid_height_cl_leading_ParamLimits

0x7361,	// (0x00034f22) aid_height_cl_leading

0x736d,	// (0x00034f2e) aid_height_cl_text_ParamLimits

0x736d,	// (0x00034f2e) aid_height_cl_text

0xa70e,	// (0x000382cf) bg_cl_header_pane_ParamLimits

0xa70e,	// (0x000382cf) bg_cl_header_pane

0x738c,	// (0x00034f4d) cl_header_pane_g1_ParamLimits

0x738c,	// (0x00034f4d) cl_header_pane_g1

0x73a2,	// (0x00034f63) cl_header_pane_t1_ParamLimits

0x73a2,	// (0x00034f63) cl_header_pane_t1

0xd80d,	// (0x0003b3ce) cl_list_pane

0xd398,	// (0x0003af59) hc_scroll_pane_cp01

0xa76e,	// (0x0003832f) bg_cl_header_pane_g1

0xd27e,	// (0x0003ae3f) bg_cl_header_pane_g2

0xa78e,	// (0x0003834f) bg_cl_header_pane_g3

0xd28e,	// (0x0003ae4f) bg_cl_header_pane_g4

0xd286,	// (0x0003ae47) bg_cl_header_pane_g5

0xd4f6,	// (0x0003b0b7) bg_cl_header_pane_g6

0xd2a6,	// (0x0003ae67) bg_cl_header_pane_g7

0xd2ae,	// (0x0003ae6f) bg_cl_header_pane_g8

0xd29e,	// (0x0003ae5f) bg_cl_header_pane_g9

0x0008,

0xfaa9,	// (0x0003d66a) bg_cl_header_pane_g

0x73bb,	// (0x00034f7c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x73bb,	// (0x00034f7c) hc_cl_list_double_graphic_heading_pane

0x73cc,	// (0x00034f8d) hc_cl_list_single_graphic_pane_ParamLimits

0x73cc,	// (0x00034f8d) hc_cl_list_single_graphic_pane

0x73e5,	// (0x00034fa6) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x73e5,	// (0x00034fa6) hc_cl_list_single_graphic_pane_g1

0x73f1,	// (0x00034fb2) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x73f1,	// (0x00034fb2) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabc,	// (0x0003d67d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabc,	// (0x0003d67d) hc_cl_list_single_graphic_pane_g

0x7405,	// (0x00034fc6) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7405,	// (0x00034fc6) hc_cl_list_single_graphic_pane_t1

0x73e5,	// (0x00034fa6) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x73e5,	// (0x00034fa6) hc_cl_list_double_graphic_heading_pane_g1

0x741a,	// (0x00034fdb) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x741a,	// (0x00034fdb) hc_cl_list_double_graphic_heading_pane_g2

0x742e,	// (0x00034fef) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x742e,	// (0x00034fef) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac1,	// (0x0003d682) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac1,	// (0x0003d682) hc_cl_list_double_graphic_heading_pane_g

0x7442,	// (0x00035003) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7442,	// (0x00035003) hc_cl_list_double_graphic_heading_pane_t1

0x7457,	// (0x00035018) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7457,	// (0x00035018) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac8,	// (0x0003d689) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac8,	// (0x0003d689) hc_cl_list_double_graphic_heading_pane_t

0x7474,	// (0x00035035) vid4_progress_pane_g1

0x7484,	// (0x00035045) vid4_progress_pane_g2

0x1b02,	// (0x0002f6c3) vid4_progress_pane_g3

0x7494,	// (0x00035055) vid4_progress_pane_g4

0x0004,

0xfacd,	// (0x0003d68e) vid4_progress_pane_g

0x1b14,	// (0x0002f6d5) vid4_progress_pane_t1

0x74ac,	// (0x0003506d) vid4_progress_pane_t2

0x0002,

0xfad8,	// (0x0003d699) vid4_progress_pane_t

0x1b2a,	// (0x0002f6eb) wait_bar_pane_cp07

0xc5bc,	// (0x0003a17d) blid_firmament_pane_ParamLimits

0xc5ff,	// (0x0003a1c0) popup_blid_sat_info2_window_g1

0xc623,	// (0x0003a1e4) popup_blid_sat_info2_window_t3

0xc631,	// (0x0003a1f2) popup_blid_sat_info2_window_t4

0xc63f,	// (0x0003a200) popup_blid_sat_info2_window_t5

0xc64d,	// (0x0003a20e) popup_blid_sat_info2_window_t6

0xc65d,	// (0x0003a21e) popup_blid_sat_info2_window_t7

0xc66b,	// (0x0003a22c) popup_blid_sat_info2_window_t8

0xc679,	// (0x0003a23a) popup_blid_sat_info2_window_t9

0xc687,	// (0x0003a248) popup_blid_sat_info2_window_t10

0xc749,	// (0x0003a30a) aid_firma_cardinal_ParamLimits

0xc75d,	// (0x0003a31e) blid_firmament_pane_t1_ParamLimits

0xc774,	// (0x0003a335) blid_firmament_pane_t2_ParamLimits

0xc78b,	// (0x0003a34c) blid_firmament_pane_t3_ParamLimits

0xc7a2,	// (0x0003a363) blid_firmament_pane_t4_ParamLimits

0xf6e6,	// (0x0003d2a7) blid_firmament_pane_t_ParamLimits

0xc7b9,	// (0x0003a37a) blid_sat_info_pane_ParamLimits

0x1cd1,	// (0x0002f892) main_cam_set_pane_ParamLimits

0x5e13,	// (0x000339d4) aid_size_cell_colour_35_ParamLimits

0x5e33,	// (0x000339f4) aid_size_cell_colour_112_ParamLimits

0x5e53,	// (0x00033a14) aid_size_cell_effect_ParamLimits

0xc3c1,	// (0x00039f82) bg_tb_trans_pane_cp02_ParamLimits

0xa9d6,	// (0x00038597) heading_imed_pane_ParamLimits

0x5e73,	// (0x00033a34) listscroll_imed_pane_ParamLimits

0xb9a7,	// (0x00039568) popup_call2_audio_first_window_g5_ParamLimits

0xb9a7,	// (0x00039568) popup_call2_audio_first_window_g5

0x118c,	// (0x0002ed4d) aid_size_touch_image3_arrow_left_ParamLimits

0x118c,	// (0x0002ed4d) aid_size_touch_image3_arrow_left

0x11b8,	// (0x0002ed79) aid_size_touch_image3_arrow_right_ParamLimits

0x11b8,	// (0x0002ed79) aid_size_touch_image3_arrow_right

0x74c1,	// (0x00035082) vid4_progress_pane_t3

0x6188,	// (0x00033d49) main_hwr_training_symbol_option_pane_ParamLimits

0x6188,	// (0x00033d49) main_hwr_training_symbol_option_pane

0xd044,	// (0x0003ac05) popup_hwr_training_preview_window_ParamLimits

0xd044,	// (0x0003ac05) popup_hwr_training_preview_window

0x1033,	// (0x0002ebf4) hwr_training_navi_pane_g5_ParamLimits

0x1033,	// (0x0002ebf4) hwr_training_navi_pane_g5

0xd26c,	// (0x0003ae2d) popup_char_count_window

0x1cd1,	// (0x0002f892) bg_popup_sub_pane_cp20_ParamLimits

0x1a6d,	// (0x0002f62e) list_vitu2_match_list_pane_ParamLimits

0x1a7c,	// (0x0002f63d) vitu2_page_scroll_pane_ParamLimits

0x1a7c,	// (0x0002f63d) vitu2_page_scroll_pane

0xd838,	// (0x0003b3f9) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd838,	// (0x0003b3f9) list_single_hwr_training_symbol_option_pane

0xd84b,	// (0x0003b40c) list_single_hwr_training_symbol_option_pane_g1

0xd853,	// (0x0003b414) list_single_hwr_training_symbol_option_pane_t1

0xd861,	// (0x0003b422) bg_button_pane_cp023

0xd86a,	// (0x0003b42b) bg_button_pane_cp024

0x750f,	// (0x000350d0) vitu2_page_scroll_pane_g1

0x7517,	// (0x000350d8) vitu2_page_scroll_pane_g2

0x0001,

0xfadf,	// (0x0003d6a0) vitu2_page_scroll_pane_g

0x751f,	// (0x000350e0) vitu2_page_scroll_pane_t1

0xc7f2,	// (0x0003a3b3) popup_char_count_window_g1

0xd89d,	// (0x0003b45e) popup_char_count_window_g2

0xd8a6,	// (0x0003b467) popup_char_count_window_g3

0x0002,

0xfae4,	// (0x0003d6a5) popup_char_count_window_g

0xd8af,	// (0x0003b470) popup_char_count_window_t1

0x1ceb,	// (0x0002f8ac) main_vded2_pane

0xcd43,	// (0x0003a904) aid_size_cell_imed_line

0xcd4d,	// (0x0003a90e) grid_imed_line_width_pane

0x667e,	// (0x0003423f) vid4_indicators_pane_g4

0xd8bd,	// (0x0003b47e) cell_imed_line_width_pane_ParamLimits

0xd8bd,	// (0x0003b47e) cell_imed_line_width_pane

0xd8d1,	// (0x0003b492) cell_imed_line_width_pane_g1

0xd454,	// (0x0003b015) cell_imed_line_width_pane_g2

0x0001,

0xfaeb,	// (0x0003d6ac) cell_imed_line_width_pane_g

0x752e,	// (0x000350ef) main_vded2_pane_g1_ParamLimits

0x752e,	// (0x000350ef) main_vded2_pane_g1

0x7544,	// (0x00035105) main_vded2_pane_g2_ParamLimits

0x7544,	// (0x00035105) main_vded2_pane_g2

0x0001,

0xfaf0,	// (0x0003d6b1) main_vded2_pane_g_ParamLimits

0xfaf0,	// (0x0003d6b1) main_vded2_pane_g

0x7556,	// (0x00035117) vded2_slider_pane_ParamLimits

0x7556,	// (0x00035117) vded2_slider_pane

0x7566,	// (0x00035127) aid_size_touch_vded2_end

0x7570,	// (0x00035131) aid_size_touch_vded2_playhead

0xd8da,	// (0x0003b49b) aid_size_touch_vded2_start

0xd8e2,	// (0x0003b4a3) vded2_slider_bg_pane

0xd8eb,	// (0x0003b4ac) vded2_slider_pane_g1

0xd8f4,	// (0x0003b4b5) vded2_slider_pane_g2

0x757a,	// (0x0003513b) vded2_slider_pane_g3

0x0002,

0xfaf5,	// (0x0003d6b6) vded2_slider_pane_g

0xd8fc,	// (0x0003b4bd) vded2_slider_bg_pane_g1

0xd905,	// (0x0003b4c6) vded2_slider_bg_pane_g2

0xd90e,	// (0x0003b4cf) vded2_slider_bg_pane_g3

0x0002,

0xfafc,	// (0x0003d6bd) vded2_slider_bg_pane_g

0x4290,	// (0x00031e51) aid_postcard_touch_down_pane_ParamLimits

0x4290,	// (0x00031e51) aid_postcard_touch_down_pane

0x42a6,	// (0x00031e67) aid_postcard_touch_up_pane_ParamLimits

0x42a6,	// (0x00031e67) aid_postcard_touch_up_pane

0x1ceb,	// (0x0002f8ac) main_blid2_pane

0x4b45,	// (0x00032706) popup_blid2_search_window

0x9bdb,	// (0x0003779c) blid2_gps_pane

0x9bdb,	// (0x0003779c) blid2_navig_pane

0x9bdb,	// (0x0003779c) blid2_search_pane

0x9bdb,	// (0x0003779c) blid2_tripm_pane

0x7585,	// (0x00035146) blid2_search_pane_g1_ParamLimits

0x7585,	// (0x00035146) blid2_search_pane_g1

0x759d,	// (0x0003515e) blid2_search_pane_t1_ParamLimits

0x759d,	// (0x0003515e) blid2_search_pane_t1

0x75af,	// (0x00035170) aid_size_cell_blid2_gps_ParamLimits

0x75af,	// (0x00035170) aid_size_cell_blid2_gps

0x75c7,	// (0x00035188) blid2_gps_pane_g1_ParamLimits

0x75c7,	// (0x00035188) blid2_gps_pane_g1

0x75db,	// (0x0003519c) grid_blid2_satellite_pane_ParamLimits

0x75db,	// (0x0003519c) grid_blid2_satellite_pane

0x75f5,	// (0x000351b6) blid2_navig_pane_g1_ParamLimits

0x75f5,	// (0x000351b6) blid2_navig_pane_g1

0x7601,	// (0x000351c2) blid2_navig_pane_t1_ParamLimits

0x7601,	// (0x000351c2) blid2_navig_pane_t1

0x761c,	// (0x000351dd) blid2_navig_pane_t2_ParamLimits

0x761c,	// (0x000351dd) blid2_navig_pane_t2

0x0001,

0xfb03,	// (0x0003d6c4) blid2_navig_pane_t_ParamLimits

0xfb03,	// (0x0003d6c4) blid2_navig_pane_t

0x7637,	// (0x000351f8) blid2_navig_ring_pane_ParamLimits

0x7637,	// (0x000351f8) blid2_navig_ring_pane

0x7650,	// (0x00035211) blid2_speed_pane_ParamLimits

0x7650,	// (0x00035211) blid2_speed_pane

0x765c,	// (0x0003521d) blid2_tripm_pane_g1_ParamLimits

0x765c,	// (0x0003521d) blid2_tripm_pane_g1

0x7677,	// (0x00035238) blid2_tripm_pane_g2_ParamLimits

0x7677,	// (0x00035238) blid2_tripm_pane_g2

0x768b,	// (0x0003524c) blid2_tripm_pane_g3_ParamLimits

0x768b,	// (0x0003524c) blid2_tripm_pane_g3

0x769f,	// (0x00035260) blid2_tripm_pane_g4_ParamLimits

0x769f,	// (0x00035260) blid2_tripm_pane_g4

0x76b3,	// (0x00035274) blid2_tripm_pane_g5_ParamLimits

0x76b3,	// (0x00035274) blid2_tripm_pane_g5

0x0005,

0xfb08,	// (0x0003d6c9) blid2_tripm_pane_g_ParamLimits

0xfb08,	// (0x0003d6c9) blid2_tripm_pane_g

0x76d9,	// (0x0003529a) blid2_tripm_pane_t1_ParamLimits

0x76d9,	// (0x0003529a) blid2_tripm_pane_t1

0x76f4,	// (0x000352b5) blid2_tripm_pane_t2_ParamLimits

0x76f4,	// (0x000352b5) blid2_tripm_pane_t2

0x770d,	// (0x000352ce) blid2_tripm_pane_t3_ParamLimits

0x770d,	// (0x000352ce) blid2_tripm_pane_t3

0x0003,

0xfb15,	// (0x0003d6d6) blid2_tripm_pane_t_ParamLimits

0xfb15,	// (0x0003d6d6) blid2_tripm_pane_t

0x7754,	// (0x00035315) cell_blid2_satellite_pane_ParamLimits

0x7754,	// (0x00035315) cell_blid2_satellite_pane

0x7772,	// (0x00035333) cell_blid2_satellite_pane_g1

0xd917,	// (0x0003b4d8) cell_blid2_satellite_pane_t1

0xc7c9,	// (0x0003a38a) blid2_speed_pane_g1

0xd925,	// (0x0003b4e6) blid2_speed_pane_t1

0xd933,	// (0x0003b4f4) blid2_speed_pane_t2

0x0001,

0xfb1e,	// (0x0003d6df) blid2_speed_pane_t

0xc7c9,	// (0x0003a38a) blid2_navig_ring_pane_g1

0x777b,	// (0x0003533c) blid2_navig_ring_pane_g2

0x7783,	// (0x00035344) blid2_navig_ring_pane_g3

0x778b,	// (0x0003534c) blid2_navig_ring_pane_g4

0x7793,	// (0x00035354) blid2_navig_ring_pane_g5

0x0004,

0xfb23,	// (0x0003d6e4) blid2_navig_ring_pane_g

0x9bdb,	// (0x0003779c) bg_popup_window_pane_cp011

0xd941,	// (0x0003b502) popup_blid2_search_window_g1

0xd949,	// (0x0003b50a) popup_blid2_search_window_t1

0xd957,	// (0x0003b518) popup_blid2_search_window_t2

0x0001,

0xfb2e,	// (0x0003d6ef) popup_blid2_search_window_t

0xa651,	// (0x00038212) main_browser_pane_g1

0xa324,	// (0x00037ee5) main_browser_pane_ParamLimits

0x1cd1,	// (0x0002f892) bg_button_pane_cp011_ParamLimits

0x19ed,	// (0x0002f5ae) cell_vitu2_function_pane_g1_ParamLimits

0xc3c1,	// (0x00039f82) bg_popup_sub_pane_cp22_ParamLimits

0x6fd3,	// (0x00034b94) input_focus_pane_cp08_ParamLimits

0x6fea,	// (0x00034bab) popup_vitu2_query_button_pane_ParamLimits

0x6fea,	// (0x00034bab) popup_vitu2_query_button_pane

0x6ffb,	// (0x00034bbc) popup_vitu2_query_input_button_pane

0xd531,	// (0x0003b0f2) popup_vitu2_query_window_g1_ParamLimits

0x7005,	// (0x00034bc6) popup_vitu2_query_window_g2_ParamLimits

0xfa2f,	// (0x0003d5f0) popup_vitu2_query_window_g_ParamLimits

0x9bdb,	// (0x0003779c) bg_button_pane_cp026

0x779b,	// (0x0003535c) popup_vitu2_query_input_button_pane_g1

0x9bdb,	// (0x0003779c) bg_button_pane_cp025

0xd965,	// (0x0003b526) popup_vitu2_query_button_pane_t1

0x52b5,	// (0x00032e76) main_mp3_pane_t6

0x52c3,	// (0x00032e84) popup_slider_window_cp01

0x65ea,	// (0x000341ab) cam4_battery_pane

0x663d,	// (0x000341fe) cam4_battery_pane_cp02

0x746c,	// (0x0003502d) cam4_battery_pane_cp01

0x746c,	// (0x0003502d) cam4_battery_pane_cp03

0xd45c,	// (0x0003b01d) cam4_battery_pane_g1

0xc7c9,	// (0x0003a38a) cam4_battery_pane_g2

0x0001,

0xfb33,	// (0x0003d6f4) cam4_battery_pane_g

0xc695,	// (0x0003a256) popup_blid_sat_info2_window_t11

0xadb7,	// (0x00038978) aid_size_touch_mv_arrow_left_ParamLimits

0xade2,	// (0x000389a3) aid_size_touch_mv_arrow_right_ParamLimits

0xae40,	// (0x00038a01) navi_pane_g1_ParamLimits

0xae4c,	// (0x00038a0d) navi_pane_g2_ParamLimits

0xae7a,	// (0x00038a3b) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0003cfa6) navi_pane_g_ParamLimits

0x3cad,	// (0x0003186e) navi_pane_mv_t1_ParamLimits

0x5e7f,	// (0x00033a40) grid_imed_effect_pane_ParamLimits

0x2a50,	// (0x00030611) aid_placing_vt_slider_lsc

0xa5a0,	// (0x00038161) aid_placing_vt_slider_prt

0xa70e,	// (0x000382cf) bg_tb_trans_pane_cp01_ParamLimits

0xc943,	// (0x0003a504) popup_image_details_window_g1_ParamLimits

0xc956,	// (0x0003a517) popup_image_details_window_g2_ParamLimits

0xc96b,	// (0x0003a52c) popup_image_details_window_g3_ParamLimits

0xc96b,	// (0x0003a52c) popup_image_details_window_g3

0xf72b,	// (0x0003d2ec) popup_image_details_window_g_ParamLimits

0xc97f,	// (0x0003a540) popup_image_details_window_t1_ParamLimits

0xc991,	// (0x0003a552) popup_image_details_window_t2_ParamLimits

0xc9aa,	// (0x0003a56b) popup_image_details_window_t3_ParamLimits

0xc9be,	// (0x0003a57f) popup_image_details_window_t4_ParamLimits

0xc9d9,	// (0x0003a59a) popup_image_details_window_t5_ParamLimits

0xf732,	// (0x0003d2f3) popup_image_details_window_t_ParamLimits

0x7379,	// (0x00034f3a) cl_header_name_pane_ParamLimits

0x7379,	// (0x00034f3a) cl_header_name_pane

0x77a3,	// (0x00035364) cl_header_name_pane_t1_ParamLimits

0x77a3,	// (0x00035364) cl_header_name_pane_t1

0x77c4,	// (0x00035385) cl_header_name_pane_t2_ParamLimits

0x77c4,	// (0x00035385) cl_header_name_pane_t2

0x7806,	// (0x000353c7) cl_header_name_pane_t3_ParamLimits

0x7806,	// (0x000353c7) cl_header_name_pane_t3

0x0002,

0xfb38,	// (0x0003d6f9) cl_header_name_pane_t_ParamLimits

0xfb38,	// (0x0003d6f9) cl_header_name_pane_t

0xaf09,	// (0x00038aca) navi_pane_mv_g2_ParamLimits

0xd229,	// (0x0003adea) field_vitu2_entry_pane_g1_ParamLimits

0xd235,	// (0x0003adf6) field_vitu2_entry_pane_g2_ParamLimits

0xd241,	// (0x0003ae02) field_vitu2_entry_pane_g3_ParamLimits

0xd241,	// (0x0003ae02) field_vitu2_entry_pane_g3

0xf92e,	// (0x0003d4ef) field_vitu2_entry_pane_g_ParamLimits

0x6700,	// (0x000342c1) cell_vitu2_itu_pane_g1_ParamLimits

0x1895,	// (0x0002f456) cell_vitu2_itu_pane_g2_ParamLimits

0x1895,	// (0x0002f456) cell_vitu2_itu_pane_g2

0x0001,

0xf93a,	// (0x0003d4fb) cell_vitu2_itu_pane_g_ParamLimits

0xf93a,	// (0x0003d4fb) cell_vitu2_itu_pane_g

0x1cd1,	// (0x0002f892) bg_vkb2_func_pane_cp05_ParamLimits

0x1cd1,	// (0x0002f892) bg_vkb2_func_pane_cp05

0x1cd1,	// (0x0002f892) bg_vkb2_func_pane_cp03

0x1cd1,	// (0x0002f892) bg_vkb2_func_pane_cp04

0x1cd1,	// (0x0002f892) bg_vkb2_func_pane_cp10_ParamLimits

0x1cd1,	// (0x0002f892) bg_vkb2_func_pane_cp10

0x731b,	// (0x00034edc) bg_vkb2_func_pane_cp08

0x7301,	// (0x00034ec2) bg_vkb2_func_pane_cp06

0x730f,	// (0x00034ed0) bg_vkb2_func_pane_cp07

0xd873,	// (0x0003b434) bg_vkb2_func_pane_cp11_ParamLimits

0xd873,	// (0x0003b434) bg_vkb2_func_pane_cp11

0xd888,	// (0x0003b449) bg_vkb2_func_pane_cp12_ParamLimits

0xd888,	// (0x0003b449) bg_vkb2_func_pane_cp12

0x9bdb,	// (0x0003779c) bg_vkb2_func_pane_cp09

0xd27e,	// (0x0003ae3f) bg_vkb2_func_pane_g1

0xa78e,	// (0x0003834f) bg_vkb2_func_pane_g2

0xd286,	// (0x0003ae47) bg_vkb2_func_pane_g3

0xd28e,	// (0x0003ae4f) bg_vkb2_func_pane_g4

0xd4f6,	// (0x0003b0b7) bg_vkb2_func_pane_g5

0xd2a6,	// (0x0003ae67) bg_vkb2_func_pane_g6

0xd2ae,	// (0x0003ae6f) bg_vkb2_func_pane_g7

0xd29e,	// (0x0003ae5f) bg_vkb2_func_pane_g8

0xa76e,	// (0x0003832f) bg_vkb2_func_pane_g9

0x0008,

0xfb3f,	// (0x0003d700) bg_vkb2_func_pane_g

0x76c7,	// (0x00035288) blid2_tripm_pane_g6_ParamLimits

0x76c7,	// (0x00035288) blid2_tripm_pane_g6

0xd0fc,	// (0x0003acbd) mp4_progress_pane_g1

0x7740,	// (0x00035301) blid2_tripm_values_pane_ParamLimits

0x7740,	// (0x00035301) blid2_tripm_values_pane

0x7837,	// (0x000353f8) blid2_tripm_values_pane_t1

0x7845,	// (0x00035406) blid2_tripm_values_pane_t2

0x7853,	// (0x00035414) blid2_tripm_values_pane_t3

0x7861,	// (0x00035422) blid2_tripm_values_pane_t4

0x786f,	// (0x00035430) blid2_tripm_values_pane_t5

0x787d,	// (0x0003543e) blid2_tripm_values_pane_t6

0x788b,	// (0x0003544c) blid2_tripm_values_pane_t7

0x7899,	// (0x0003545a) blid2_tripm_values_pane_t8

0x78a7,	// (0x00035468) blid2_tripm_values_pane_t9

0x0008,

0xfb52,	// (0x0003d713) blid2_tripm_values_pane_t

0x2a92,	// (0x00030653) call_video_pane_t1_ParamLimits

0x2ab0,	// (0x00030671) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0003ce2f) call_video_pane_t_ParamLimits

0x4197,	// (0x00031d58) msg_header_pane_g1_ParamLimits

0xb0f1,	// (0x00038cb2) msg_header_pane_g2_ParamLimits

0xb0f1,	// (0x00038cb2) msg_header_pane_g2

0x0001,

0xf488,	// (0x0003d049) msg_header_pane_g_ParamLimits

0xf488,	// (0x0003d049) msg_header_pane_g

0xa324,	// (0x00037ee5) main_clock2_pane_ParamLimits

0x5c0f,	// (0x000337d0) grid_clock2_toolbar_pane_ParamLimits

0x5c0f,	// (0x000337d0) grid_clock2_toolbar_pane

0x5c0f,	// (0x000337d0) listscroll_clock2_pane_ParamLimits

0x5c0f,	// (0x000337d0) listscroll_clock2_pane

0x5d0b,	// (0x000338cc) main_clock2_pane_t3_ParamLimits

0x5d0b,	// (0x000338cc) main_clock2_pane_t3

0x5d2f,	// (0x000338f0) main_clock2_pane_t4_ParamLimits

0x5d2f,	// (0x000338f0) main_clock2_pane_t4

0xd973,	// (0x0003b534) cell_clock2_toolbar_pane

0xd97b,	// (0x0003b53c) cell_clock2_toolbar_pane_cp01

0xd97b,	// (0x0003b53c) cell_clock2_toolbar_pane_cp02

0xd983,	// (0x0003b544) cell_clock2_toolbar_pane_cp03

0xd98b,	// (0x0003b54c) list_clock2_pane

0xad3c,	// (0x000388fd) scroll_pane_cp10

0xd993,	// (0x0003b554) list_single_clock2_pane_ParamLimits

0xd993,	// (0x0003b554) list_single_clock2_pane

0xa509,	// (0x000380ca) list_highlight_pane_cp08

0xd9a0,	// (0x0003b561) list_single_clock2_pane_t1

0xd9ae,	// (0x0003b56f) list_single_clock2_pane_t2

0x0001,

0xfb65,	// (0x0003d726) list_single_clock2_pane_t

0x9bdb,	// (0x0003779c) bg_button_pane_cp10

0xd9bc,	// (0x0003b57d) cell_clock2_toolbar_pane_g1

0x07d5,	// (0x0002e396) aid_main_viewer_pane_g1_ParamLimits

0x07d5,	// (0x0002e396) aid_main_viewer_pane_g1

0x07e3,	// (0x0002e3a4) aid_main_viewer_pane_g2_ParamLimits

0x07e3,	// (0x0002e3a4) aid_main_viewer_pane_g2

0x4236,	// (0x00031df7) aid_main_viewer_pane_g3_ParamLimits

0x4236,	// (0x00031df7) aid_main_viewer_pane_g3

0x4245,	// (0x00031e06) aid_main_viewer_pane_g4_ParamLimits

0x4245,	// (0x00031e06) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0003d05a) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0003d05a) aid_main_viewer_pane_g

0x0817,	// (0x0002e3d8) main_calc_pane_ParamLimits

0x083d,	// (0x0002e3fe) main_dialer2_pane_ParamLimits

0x1ceb,	// (0x0002f8ac) main_cam6_pane

0x1ceb,	// (0x0002f8ac) main_vid6_pane

0x5c1b,	// (0x000337dc) listscroll_gen_pane_cp06_ParamLimits

0x5c1b,	// (0x000337dc) listscroll_gen_pane_cp06

0x5d52,	// (0x00033913) main_clock2_pane_t5_ParamLimits

0x5d52,	// (0x00033913) main_clock2_pane_t5

0x5dac,	// (0x0003396d) aid_call2_pane_cp10_ParamLimits

0x5dbe,	// (0x0003397f) aid_call_pane_cp10_ParamLimits

0xadab,	// (0x0003896c) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadab,	// (0x0003896c) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5dd0,	// (0x00033991) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5dd0,	// (0x00033991) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadab,	// (0x0003896c) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7e7,	// (0x0003d3a8) popup_clock_analogue_window_cp10_g_ParamLimits

0x5de2,	// (0x000339a3) popup_clock_analogue_window_cp10_t1_ParamLimits

0x649e,	// (0x0003405f) cell_dialer2_keypad_pane_g2_ParamLimits

0x649e,	// (0x0003405f) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cd,	// (0x0003d48e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cd,	// (0x0003d48e) cell_dialer2_keypad_pane_g

0x64ba,	// (0x0003407b) cell_dialer2_keypad_pane_t1

0x6a18,	// (0x000345d9) main_cset_text2_pane_ParamLimits

0x6a18,	// (0x000345d9) main_cset_text2_pane

0xd71d,	// (0x0003b2de) area_vitu2_query_pane_g1_ParamLimits

0x72a0,	// (0x00034e61) area_vitu2_query_pane_g2_ParamLimits

0xfa82,	// (0x0003d643) area_vitu2_query_pane_g_ParamLimits

0xd7a1,	// (0x0003b362) area_vitu2_query_pane_t7_ParamLimits

0xd7a1,	// (0x0003b362) area_vitu2_query_pane_t7

0x7301,	// (0x00034ec2) bg_button_pane_cp018_ParamLimits

0x730f,	// (0x00034ed0) bg_button_pane_cp021_ParamLimits

0x731b,	// (0x00034edc) bg_button_pane_cp022_ParamLimits

0x731b,	// (0x00034edc) bg_vkb2_func_pane_cp08_ParamLimits

0x7301,	// (0x00034ec2) bg_vkb2_func_pane_cp06_ParamLimits

0x730f,	// (0x00034ed0) bg_vkb2_func_pane_cp07_ParamLimits

0x732c,	// (0x00034eed) input_focus_pane_cp09_ParamLimits

0x78b5,	// (0x00035476) cam6_autofocus_pane_ParamLimits

0x78b5,	// (0x00035476) cam6_autofocus_pane

0x1b3b,	// (0x0002f6fc) cam6_image_uncrop_pane_ParamLimits

0x1b3b,	// (0x0002f6fc) cam6_image_uncrop_pane

0x1b4a,	// (0x0002f70b) cam6_indi_pane_ParamLimits

0x1b4a,	// (0x0002f70b) cam6_indi_pane

0x1b60,	// (0x0002f721) cam6_mode_pane_ParamLimits

0x1b60,	// (0x0002f721) cam6_mode_pane

0x1b72,	// (0x0002f733) cam6_timer_pane_ParamLimits

0x1b72,	// (0x0002f733) cam6_timer_pane

0x1b82,	// (0x0002f743) cam6_zoom_pane_ParamLimits

0x1b82,	// (0x0002f743) cam6_zoom_pane

0x78c3,	// (0x00035484) cam6_mode_pane_g1_ParamLimits

0x78c3,	// (0x00035484) cam6_mode_pane_g1

0x78d3,	// (0x00035494) cam6_mode_pane_g2_ParamLimits

0x78d3,	// (0x00035494) cam6_mode_pane_g2

0x78e3,	// (0x000354a4) cam6_mode_pane_g3_ParamLimits

0x78e3,	// (0x000354a4) cam6_mode_pane_g3

0x78f3,	// (0x000354b4) cam6_mode_pane_g4_ParamLimits

0x78f3,	// (0x000354b4) cam6_mode_pane_g4

0x0003,

0xfb6a,	// (0x0003d72b) cam6_mode_pane_g_ParamLimits

0xfb6a,	// (0x0003d72b) cam6_mode_pane_g

0xd438,	// (0x0003aff9) bg_tb_trans_pane_cp08_ParamLimits

0xd438,	// (0x0003aff9) bg_tb_trans_pane_cp08

0xd9c4,	// (0x0003b585) cam6_battery_pane_ParamLimits

0xd9c4,	// (0x0003b585) cam6_battery_pane

0xd9da,	// (0x0003b59b) cam6_indi_pane_g1_ParamLimits

0xd9da,	// (0x0003b59b) cam6_indi_pane_g1

0xd9ec,	// (0x0003b5ad) cam6_indi_pane_g2_ParamLimits

0xd9ec,	// (0x0003b5ad) cam6_indi_pane_g2

0xd9fe,	// (0x0003b5bf) cam6_indi_pane_g3_ParamLimits

0xd9fe,	// (0x0003b5bf) cam6_indi_pane_g3

0x0002,

0xfb73,	// (0x0003d734) cam6_indi_pane_g_ParamLimits

0xfb73,	// (0x0003d734) cam6_indi_pane_g

0xda10,	// (0x0003b5d1) cam6_indi_pane_t1_ParamLimits

0xda10,	// (0x0003b5d1) cam6_indi_pane_t1

0x7903,	// (0x000354c4) cam6_autofocus_pane_g1

0x790b,	// (0x000354cc) cam6_autofocus_pane_g2

0x7913,	// (0x000354d4) cam6_autofocus_pane_g3

0x791b,	// (0x000354dc) cam6_autofocus_pane_g4

0x0003,

0xfb7a,	// (0x0003d73b) cam6_autofocus_pane_g

0xda36,	// (0x0003b5f7) cam6_timer_pane_g1

0xda3e,	// (0x0003b5ff) cam6_timer_pane_t1

0xda4c,	// (0x0003b60d) cam6_zoom_cont_pane

0xda54,	// (0x0003b615) cam6_zoom_pane_g1

0xda5c,	// (0x0003b61d) cam6_zoom_pane_g2

0x7923,	// (0x000354e4) cam6_zoom_pane_g3

0x0002,

0xfb83,	// (0x0003d744) cam6_zoom_pane_g

0xc7c9,	// (0x0003a38a) cam6_battery_pane_g1

0xc7c9,	// (0x0003a38a) cam6_battery_pane_g2

0x0001,

0xf6ef,	// (0x0003d2b0) cam6_battery_pane_g

0xda64,	// (0x0003b625) cam6_zoom_cont_pane_g1

0xda6d,	// (0x0003b62e) cam6_zoom_cont_pane_g2

0xda76,	// (0x0003b637) cam6_zoom_cont_pane_g3

0x0002,

0xfb8a,	// (0x0003d74b) cam6_zoom_cont_pane_g

0x7940,	// (0x00035501) cam6_mode_pane_cp_ParamLimits

0x7940,	// (0x00035501) cam6_mode_pane_cp

0x7952,	// (0x00035513) cam6_zoom_pane_cp_ParamLimits

0x7952,	// (0x00035513) cam6_zoom_pane_cp

0x795e,	// (0x0003551f) vid6_image_uncrop_cif_pane_ParamLimits

0x795e,	// (0x0003551f) vid6_image_uncrop_cif_pane

0x796e,	// (0x0003552f) vid6_image_uncrop_nhd_pane_ParamLimits

0x796e,	// (0x0003552f) vid6_image_uncrop_nhd_pane

0x797d,	// (0x0003553e) vid6_image_uncrop_vga_pane_ParamLimits

0x797d,	// (0x0003553e) vid6_image_uncrop_vga_pane

0x798c,	// (0x0003554d) vid6_image_uncrop_wvga_pane_ParamLimits

0x798c,	// (0x0003554d) vid6_image_uncrop_wvga_pane

0x799b,	// (0x0003555c) vid6_indi_pane_ParamLimits

0x799b,	// (0x0003555c) vid6_indi_pane

0xd438,	// (0x0003aff9) bg_tb_trans_pane_cp09_ParamLimits

0xd438,	// (0x0003aff9) bg_tb_trans_pane_cp09

0xda8e,	// (0x0003b64f) cam6_battery_pane_cp_ParamLimits

0xda8e,	// (0x0003b64f) cam6_battery_pane_cp

0xda9a,	// (0x0003b65b) vid6_indi_pane_g1_ParamLimits

0xda9a,	// (0x0003b65b) vid6_indi_pane_g1

0xdaac,	// (0x0003b66d) vid6_indi_pane_g2_ParamLimits

0xdaac,	// (0x0003b66d) vid6_indi_pane_g2

0xdabe,	// (0x0003b67f) vid6_indi_pane_g3_ParamLimits

0xdabe,	// (0x0003b67f) vid6_indi_pane_g3

0xdad3,	// (0x0003b694) vid6_indi_pane_g4_ParamLimits

0xdad3,	// (0x0003b694) vid6_indi_pane_g4

0xdae8,	// (0x0003b6a9) vid6_indi_pane_g5_ParamLimits

0xdae8,	// (0x0003b6a9) vid6_indi_pane_g5

0x0004,

0xfb91,	// (0x0003d752) vid6_indi_pane_g_ParamLimits

0xfb91,	// (0x0003d752) vid6_indi_pane_g

0xdb02,	// (0x0003b6c3) vid6_indi_pane_t1_ParamLimits

0xdb02,	// (0x0003b6c3) vid6_indi_pane_t1

0xdb18,	// (0x0003b6d9) vid6_indi_pane_t2_ParamLimits

0xdb18,	// (0x0003b6d9) vid6_indi_pane_t2

0xdb40,	// (0x0003b701) vid6_indi_pane_t3_ParamLimits

0xdb40,	// (0x0003b701) vid6_indi_pane_t3

0xdb68,	// (0x0003b729) vid6_indi_pane_t4_ParamLimits

0xdb68,	// (0x0003b729) vid6_indi_pane_t4

0x0003,

0xfb9c,	// (0x0003d75d) vid6_indi_pane_t_ParamLimits

0xfb9c,	// (0x0003d75d) vid6_indi_pane_t

0xdb8c,	// (0x0003b74d) wait_bar_pane_cp08

0x79b3,	// (0x00035574) main_cset_text2_pane_t1_ParamLimits

0x79b3,	// (0x00035574) main_cset_text2_pane_t1

0x792b,	// (0x000354ec) listscroll_gen_pane_cp06_t1_ParamLimits

0x792b,	// (0x000354ec) listscroll_gen_pane_cp06_t1

0x1ceb,	// (0x0002f8ac) main_cam6_set_pane

0x65dc,	// (0x0003419d) bg_tb_trans_pane_cp06_ParamLimits

0x65f2,	// (0x000341b3) cam4_indicators_pane_g1_ParamLimits

0x6603,	// (0x000341c4) cam4_indicators_pane_g2_ParamLimits

0xf90a,	// (0x0003d4cb) cam4_indicators_pane_g_ParamLimits

0x661b,	// (0x000341dc) cam4_indicators_pane_t1_ParamLimits

0x1cd1,	// (0x0002f892) bg_tb_trans_pane_cp07_ParamLimits

0x6645,	// (0x00034206) vid4_indicators_pane_g1_ParamLimits

0x6659,	// (0x0003421a) vid4_indicators_pane_g2_ParamLimits

0x666d,	// (0x0003422e) vid4_indicators_pane_g3_ParamLimits

0x667e,	// (0x0003423f) vid4_indicators_pane_g4_ParamLimits

0xf91c,	// (0x0003d4dd) vid4_indicators_pane_g_ParamLimits

0x669a,	// (0x0003425b) vid4_indicators_pane_t1_ParamLimits

0x7474,	// (0x00035035) vid4_progress_pane_g1_ParamLimits

0x7484,	// (0x00035045) vid4_progress_pane_g2_ParamLimits

0x1b02,	// (0x0002f6c3) vid4_progress_pane_g3_ParamLimits

0x7494,	// (0x00035055) vid4_progress_pane_g4_ParamLimits

0xfacd,	// (0x0003d68e) vid4_progress_pane_g_ParamLimits

0x1b14,	// (0x0002f6d5) vid4_progress_pane_t1_ParamLimits

0x74ac,	// (0x0003506d) vid4_progress_pane_t2_ParamLimits

0x74c1,	// (0x00035082) vid4_progress_pane_t3_ParamLimits

0xfad8,	// (0x0003d699) vid4_progress_pane_t_ParamLimits

0x1b2a,	// (0x0002f6eb) wait_bar_pane_cp07_ParamLimits

0x79d1,	// (0x00035592) main_cam6_set_pane_g2_ParamLimits

0x79d1,	// (0x00035592) main_cam6_set_pane_g2

0x79f5,	// (0x000355b6) main_cset6_listscroll_pane_ParamLimits

0x79f5,	// (0x000355b6) main_cset6_listscroll_pane

0x7a11,	// (0x000355d2) main_cset6_slider_pane_ParamLimits

0x7a11,	// (0x000355d2) main_cset6_slider_pane

0x7a27,	// (0x000355e8) main_cset6_text2_pane_ParamLimits

0x7a27,	// (0x000355e8) main_cset6_text2_pane

0xdb9b,	// (0x0003b75c) main_cset6_text_pane

0xdba3,	// (0x0003b764) main_cset_list_pane_copy1_ParamLimits

0xdba3,	// (0x0003b764) main_cset_list_pane_copy1

0xdbb3,	// (0x0003b774) scroll_pane_cp028_copy1

0x7a35,	// (0x000355f6) cset_list_set_pane_copy1

0x7a47,	// (0x00035608) aid_position_infowindow_above_copy1

0x7a4f,	// (0x00035610) aid_position_infowindow_below_copy1

0xdbbc,	// (0x0003b77d) cset_list_set_pane_g1_copy1

0xdbc4,	// (0x0003b785) cset_list_set_pane_g3_copy1_ParamLimits

0xdbc4,	// (0x0003b785) cset_list_set_pane_g3_copy1

0xdbd3,	// (0x0003b794) cset_list_set_pane_t1_copy1_ParamLimits

0xdbd3,	// (0x0003b794) cset_list_set_pane_t1_copy1

0xa70e,	// (0x000382cf) list_highlight_pane_cp021_copy1_ParamLimits

0xa70e,	// (0x000382cf) list_highlight_pane_cp021_copy1

0xdbe8,	// (0x0003b7a9) cset6_slider_pane_ParamLimits

0xdbe8,	// (0x0003b7a9) cset6_slider_pane

0xdc14,	// (0x0003b7d5) main_cset6_slider_pane_g1_ParamLimits

0xdc14,	// (0x0003b7d5) main_cset6_slider_pane_g1

0x7a57,	// (0x00035618) main_cset6_slider_pane_g2_ParamLimits

0x7a57,	// (0x00035618) main_cset6_slider_pane_g2

0xdc3c,	// (0x0003b7fd) main_cset6_slider_pane_g3_ParamLimits

0xdc3c,	// (0x0003b7fd) main_cset6_slider_pane_g3

0x7a7f,	// (0x00035640) main_cset6_slider_pane_g4_ParamLimits

0x7a7f,	// (0x00035640) main_cset6_slider_pane_g4

0xdc48,	// (0x0003b809) main_cset6_slider_pane_g5_ParamLimits

0xdc48,	// (0x0003b809) main_cset6_slider_pane_g5

0xd3ad,	// (0x0003af6e) main_cset6_slider_pane_g7_ParamLimits

0xd3ad,	// (0x0003af6e) main_cset6_slider_pane_g7

0xd3b9,	// (0x0003af7a) main_cset6_slider_pane_g8_ParamLimits

0xd3b9,	// (0x0003af7a) main_cset6_slider_pane_g8

0x6ac5,	// (0x00034686) main_cset6_slider_pane_g9_ParamLimits

0x6ac5,	// (0x00034686) main_cset6_slider_pane_g9

0x6ad1,	// (0x00034692) main_cset6_slider_pane_g10_ParamLimits

0x6ad1,	// (0x00034692) main_cset6_slider_pane_g10

0x6add,	// (0x0003469e) main_cset6_slider_pane_g11_ParamLimits

0x6add,	// (0x0003469e) main_cset6_slider_pane_g11

0x6ae9,	// (0x000346aa) main_cset6_slider_pane_g12_ParamLimits

0x6ae9,	// (0x000346aa) main_cset6_slider_pane_g12

0x6af5,	// (0x000346b6) main_cset6_slider_pane_g13_ParamLimits

0x6af5,	// (0x000346b6) main_cset6_slider_pane_g13

0x6b01,	// (0x000346c2) main_cset6_slider_pane_g14_ParamLimits

0x6b01,	// (0x000346c2) main_cset6_slider_pane_g14

0x7a8b,	// (0x0003564c) main_cset6_slider_pane_g15_ParamLimits

0x7a8b,	// (0x0003564c) main_cset6_slider_pane_g15

0xd466,	// (0x0003b027) main_cset6_slider_pane_g16_ParamLimits

0xd466,	// (0x0003b027) main_cset6_slider_pane_g16

0xd472,	// (0x0003b033) main_cset6_slider_pane_g17_ParamLimits

0xd472,	// (0x0003b033) main_cset6_slider_pane_g17

0x0011,

0xfba5,	// (0x0003d766) main_cset6_slider_pane_g_ParamLimits

0xfba5,	// (0x0003d766) main_cset6_slider_pane_g

0xdc54,	// (0x0003b815) main_cset6_slider_pane_t1_ParamLimits

0xdc54,	// (0x0003b815) main_cset6_slider_pane_t1

0x7abb,	// (0x0003567c) main_cset6_slider_pane_t2_ParamLimits

0x7abb,	// (0x0003567c) main_cset6_slider_pane_t2

0x7ae6,	// (0x000356a7) main_cset6_slider_pane_t3_ParamLimits

0x7ae6,	// (0x000356a7) main_cset6_slider_pane_t3

0x7b11,	// (0x000356d2) main_cset6_slider_pane_t4_ParamLimits

0x7b11,	// (0x000356d2) main_cset6_slider_pane_t4

0x7b3c,	// (0x000356fd) main_cset6_slider_pane_t5_ParamLimits

0x7b3c,	// (0x000356fd) main_cset6_slider_pane_t5

0xdc95,	// (0x0003b856) main_cset6_slider_pane_t7_ParamLimits

0xdc95,	// (0x0003b856) main_cset6_slider_pane_t7

0x7b67,	// (0x00035728) main_cset6_slider_pane_t8_ParamLimits

0x7b67,	// (0x00035728) main_cset6_slider_pane_t8

0x7b8b,	// (0x0003574c) main_cset6_slider_pane_t9_ParamLimits

0x7b8b,	// (0x0003574c) main_cset6_slider_pane_t9

0x7baf,	// (0x00035770) main_cset6_slider_pane_t10_ParamLimits

0x7baf,	// (0x00035770) main_cset6_slider_pane_t10

0x7bd3,	// (0x00035794) main_cset6_slider_pane_t11_ParamLimits

0x7bd3,	// (0x00035794) main_cset6_slider_pane_t11

0xdccb,	// (0x0003b88c) main_cset6_slider_pane_t14_ParamLimits

0xdccb,	// (0x0003b88c) main_cset6_slider_pane_t14

0xdd04,	// (0x0003b8c5) main_cset6_slider_pane_t15_ParamLimits

0xdd04,	// (0x0003b8c5) main_cset6_slider_pane_t15

0x000b,

0xfbca,	// (0x0003d78b) main_cset6_slider_pane_t_ParamLimits

0xfbca,	// (0x0003d78b) main_cset6_slider_pane_t

0xd019,	// (0x0003abda) cset_slider_pane_g1_copy1

0xdd3d,	// (0x0003b8fe) cset_slider_pane_g2_copy1

0xdd46,	// (0x0003b907) cset_slider_pane_g3_copy1

0x9bdb,	// (0x0003779c) bg_popup_sub_pane_cp011_copy1

0xdd4f,	// (0x0003b910) main_cset_text_pane_g1_copy1

0xd545,	// (0x0003b106) main_cset_text_pane_t1_copy1

0xd553,	// (0x0003b114) main_cset_text_pane_t2_copy1

0xd561,	// (0x0003b122) main_cset_text_pane_t3_copy1

0xd56f,	// (0x0003b130) main_cset_text_pane_t4_copy1

0xd57d,	// (0x0003b13e) main_cset_text_pane_t5_copy1

0xdd57,	// (0x0003b918) main_cset_text_pane_t6_copy1

0xdd65,	// (0x0003b926) main_cset_text_pane_t7_copy1

0x79b3,	// (0x00035574) main_cset_text2_pane_t1_copy1

0x1cd1,	// (0x0002f892) main_ncimui_pane

0x0a81,	// (0x0002e642) popup_query_ncimui_window_ParamLimits

0x0a81,	// (0x0002e642) popup_query_ncimui_window

0xcac4,	// (0x0003a685) field_cale_ev2_pane_g4_ParamLimits

0xcac4,	// (0x0003a685) field_cale_ev2_pane_g4

0x623d,	// (0x00033dfe) cell_video_dialer_keypad_pane_g2_ParamLimits

0x623d,	// (0x00033dfe) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a8,	// (0x0003d469) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a8,	// (0x0003d469) cell_video_dialer_keypad_pane_g

0x6255,	// (0x00033e16) cell_video_dialer_keypad_pane_t1

0x9bdb,	// (0x0003779c) bg_popup_window_pane_cp012

0xac27,	// (0x000387e8) heading_pane_cp06

0xdd91,	// (0x0003b952) ncim_query_content_pane

0x9bdb,	// (0x0003779c) bg_popup_heading_pane_cp01

0xdd99,	// (0x0003b95a) ncim_heading_pane_t1

0xdda7,	// (0x0003b968) ncim_indicator_popup_pane

0xddb9,	// (0x0003b97a) ncim_query_button_pane

0xddcd,	// (0x0003b98e) ncim_query_content_pane_t1

0xdddf,	// (0x0003b9a0) ncim_query_content_pane_t2

0x0005,

0xfc0e,	// (0x0003d7cf) ncim_query_content_pane_t

0xde19,	// (0x0003b9da) ncim_query_list_pane

0xde2b,	// (0x0003b9ec) ncim_query_popup_pane

0xdda7,	// (0x0003b968) ncim_indicator_popup_pane_ParamLimits

0x7df6,	// (0x000359b7) ncim_query_content_pane_g1_ParamLimits

0x7df6,	// (0x000359b7) ncim_query_content_pane_g1

0xddcd,	// (0x0003b98e) ncim_query_content_pane_t1_ParamLimits

0xdddf,	// (0x0003b9a0) ncim_query_content_pane_t2_ParamLimits

0x7e02,	// (0x000359c3) ncim_query_content_pane_t3_ParamLimits

0x7e02,	// (0x000359c3) ncim_query_content_pane_t3

0x7e2a,	// (0x000359eb) ncim_query_content_pane_t4_ParamLimits

0x7e2a,	// (0x000359eb) ncim_query_content_pane_t4

0x7e52,	// (0x00035a13) ncim_query_content_pane_t5_ParamLimits

0x7e52,	// (0x00035a13) ncim_query_content_pane_t5

0xddf1,	// (0x0003b9b2) ncim_query_content_pane_t6_ParamLimits

0xddf1,	// (0x0003b9b2) ncim_query_content_pane_t6

0xfc0e,	// (0x0003d7cf) ncim_query_content_pane_t_ParamLimits

0xde19,	// (0x0003b9da) ncim_query_list_pane_ParamLimits

0xde2b,	// (0x0003b9ec) ncim_query_popup_pane_ParamLimits

0xde3f,	// (0x0003ba00) wait_bar_pane_cp04

0x9bdb,	// (0x0003779c) input_focus_pane_cp011

0xde47,	// (0x0003ba08) ncim_query_popup_pane_t1

0xde55,	// (0x0003ba16) ncim_list_query_list_pane_ParamLimits

0xde55,	// (0x0003ba16) ncim_list_query_list_pane

0x9bdb,	// (0x0003779c) bg_button_pane_cp027

0xde62,	// (0x0003ba23) ncim_query_button_pane_g1

0x9bdb,	// (0x0003779c) list_highlight_pane_cp012

0xde6c,	// (0x0003ba2d) ncim_list_query_list_pane_g1

0xde74,	// (0x0003ba35) ncim_list_query_list_pane_t1

0x660f,	// (0x000341d0) cam4_indicators_pane_g3_ParamLimits

0x660f,	// (0x000341d0) cam4_indicators_pane_g3

0x668a,	// (0x0003424b) vid4_indicators_pane_g5_ParamLimits

0x668a,	// (0x0003424b) vid4_indicators_pane_g5

0x74a0,	// (0x00035061) vid4_progress_pane_g5_ParamLimits

0x74a0,	// (0x00035061) vid4_progress_pane_g5

0x7ce1,	// (0x000358a2) main_ncimui_pane_g1

0x7d4a,	// (0x0003590b) ncimui_group_query_pane_ParamLimits

0x7d4a,	// (0x0003590b) ncimui_group_query_pane

0x7d92,	// (0x00035953) ncimui_list_pane_ParamLimits

0x7d92,	// (0x00035953) ncimui_list_pane

0x7db9,	// (0x0003597a) ncimui_text_pane_ParamLimits

0x7db9,	// (0x0003597a) ncimui_text_pane

0x7e7a,	// (0x00035a3b) ncimui_text_pane_t1_ParamLimits

0x7e7a,	// (0x00035a3b) ncimui_text_pane_t1

0xde82,	// (0x0003ba43) ncimui_list_single_graphic_pane_ParamLimits

0xde82,	// (0x0003ba43) ncimui_list_single_graphic_pane

0x7e98,	// (0x00035a59) ncimui_query_pane_ParamLimits

0x7e98,	// (0x00035a59) ncimui_query_pane

0x9bdb,	// (0x0003779c) list_highlight_pane_cp013

0xde92,	// (0x0003ba53) ncim_list_query_list_pane_t1_copy1

0xdea0,	// (0x0003ba61) ncim_list_single_graphic_pane_g1

0x7eab,	// (0x00035a6c) ncim_query_button_pane_cp01

0x7eb7,	// (0x00035a78) ncim_query_entry_pane_ParamLimits

0x7eb7,	// (0x00035a78) ncim_query_entry_pane

0x7eca,	// (0x00035a8b) ncimui_query_pane_g1

0x7ed6,	// (0x00035a97) ncimui_query_pane_t1_ParamLimits

0x7ed6,	// (0x00035a97) ncimui_query_pane_t1

0xa70e,	// (0x000382cf) input_focus_pane_cp012

0xdea8,	// (0x0003ba69) ncim_query_entry_pane_t1

0xa324,	// (0x00037ee5) main_im_pane_ParamLimits

0x1cd1,	// (0x0002f892) main_mobtv_pane_ParamLimits

0x1cd1,	// (0x0002f892) main_mobtv_pane

0x7aa3,	// (0x00035664) main_cset6_slider_pane_g18_ParamLimits

0x7aa3,	// (0x00035664) main_cset6_slider_pane_g18

0x7aaf,	// (0x00035670) main_cset6_slider_pane_g19_ParamLimits

0x7aaf,	// (0x00035670) main_cset6_slider_pane_g19

0x7eef,	// (0x00035ab0) bg_main_mobtv_pane_ParamLimits

0x7eef,	// (0x00035ab0) bg_main_mobtv_pane

0x7efd,	// (0x00035abe) main_mobtv_info_pane

0x7f06,	// (0x00035ac7) main_mobtv_loading_pane_ParamLimits

0x7f06,	// (0x00035ac7) main_mobtv_loading_pane

0xdeba,	// (0x0003ba7b) main_mobtv_pg_channel_list_pane

0xdec4,	// (0x0003ba85) main_mobtv_pg_hdr_pane

0x7f13,	// (0x00035ad4) main_mobtv_programe_curr_pane_ParamLimits

0x7f13,	// (0x00035ad4) main_mobtv_programe_curr_pane

0x7f20,	// (0x00035ae1) main_mobtv_programe_next_pane_ParamLimits

0x7f20,	// (0x00035ae1) main_mobtv_programe_next_pane

0xdecd,	// (0x0003ba8e) popup_mobtv_noti_window

0xc7c9,	// (0x0003a38a) main_tv_pg_hdr_pane_g1

0xded5,	// (0x0003ba96) main_tv_pg_hdr_pane_g2

0xdedd,	// (0x0003ba9e) main_tv_pg_hdr_pane_g3

0xdee5,	// (0x0003baa6) main_tv_pg_hdr_pane_g4

0xdeed,	// (0x0003baae) main_tv_pg_hdr_pane_g5

0xdef7,	// (0x0003bab8) main_tv_pg_hdr_pane_g6

0xdf01,	// (0x0003bac2) main_tv_pg_hdr_pane_g7

0xdf0b,	// (0x0003bacc) main_tv_pg_hdr_pane_g8

0xdf15,	// (0x0003bad6) main_tv_pg_hdr_pane_g9

0xdf1f,	// (0x0003bae0) main_tv_pg_hdr_pane_g10

0xdf29,	// (0x0003baea) main_tv_pg_hdr_pane_g11

0x000a,

0x0015,	// (0x0002dbd6) main_tv_pg_hdr_pane_g

0xdf33,	// (0x0003baf4) main_tv_pg_hdr_pane_t1

0xdf41,	// (0x0003bb02) main_tv_pg_hdr_pane_t2

0xdf4f,	// (0x0003bb10) main_tv_pg_hdr_pane_t3

0xdf5f,	// (0x0003bb20) main_tv_pg_hdr_pane_t4

0xdf6f,	// (0x0003bb30) main_tv_pg_hdr_pane_t5

0x0004,

0x002c,	// (0x0002dbed) main_tv_pg_hdr_pane_t

0xdf7f,	// (0x0003bb40) single_mobtv_pg_channel_pane_ParamLimits

0xdf7f,	// (0x0003bb40) single_mobtv_pg_channel_pane

0xdfa3,	// (0x0003bb64) single_mobtv_pg_channel_table_pane

0xa891,	// (0x00038452) single_mobtv_pg_channel_thumb_pane

0xdfac,	// (0x0003bb6d) single_tv_pg_channel_pane_g1

0xdfb5,	// (0x0003bb76) single_tv_pg_channel_pane_g2

0x0001,

0xfc1b,	// (0x0003d7dc) single_tv_pg_channel_pane_g

0xca23,	// (0x0003a5e4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xca23,	// (0x0003a5e4) bg_single_mobtv_pg_channel_thumb_pane

0xdfbe,	// (0x0003bb7f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdfbe,	// (0x0003bb7f) single_mobtv_pg_channel_thumb_pane_g1

0xdfcc,	// (0x0003bb8d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfcc,	// (0x0003bb8d) single_mobtv_pg_channel_thumb_pane_g2

0xdfd8,	// (0x0003bb99) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfd8,	// (0x0003bb99) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc20,	// (0x0003d7e1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc20,	// (0x0003d7e1) single_mobtv_pg_channel_thumb_pane_g

0xdfe4,	// (0x0003bba5) single_mobtv_pg_channel_thumb_pane_t1

0xdff2,	// (0x0003bbb3) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc27,	// (0x0003d7e8) single_mobtv_pg_channel_thumb_pane_t

0xc7c9,	// (0x0003a38a) bg_single_mobtv_pg_channel_table_pane_g1

0xc7c9,	// (0x0003a38a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ef,	// (0x0003d2b0) bg_single_mobtv_pg_channel_table_pane_g

0xe000,	// (0x0003bbc1) single_mobtv_pg_channel_table_pane_t1

0xe00e,	// (0x0003bbcf) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc2c,	// (0x0003d7ed) single_mobtv_pg_channel_table_pane_t

0x7f35,	// (0x00035af6) main_mobtv_info_pane_g1_ParamLimits

0x7f35,	// (0x00035af6) main_mobtv_info_pane_g1

0x7f53,	// (0x00035b14) main_mobtv_info_pane_t1_ParamLimits

0x7f53,	// (0x00035b14) main_mobtv_info_pane_t1

0x7fcb,	// (0x00035b8c) main_mobtv_info_pane_t2_ParamLimits

0x7fcb,	// (0x00035b8c) main_mobtv_info_pane_t2

0x0002,

0xfc36,	// (0x0003d7f7) main_mobtv_info_pane_t_ParamLimits

0xfc36,	// (0x0003d7f7) main_mobtv_info_pane_t

0x805a,	// (0x00035c1b) wait_bar_pane_cp05

0x806c,	// (0x00035c2d) main_mobtv_loading_pane_g1_ParamLimits

0x806c,	// (0x00035c2d) main_mobtv_loading_pane_g1

0x807f,	// (0x00035c40) main_mobtv_loading_pane_g2_ParamLimits

0x807f,	// (0x00035c40) main_mobtv_loading_pane_g2

0x808b,	// (0x00035c4c) main_mobtv_loading_pane_g3_ParamLimits

0x808b,	// (0x00035c4c) main_mobtv_loading_pane_g3

0x0002,

0xfc3d,	// (0x0003d7fe) main_mobtv_loading_pane_g_ParamLimits

0xfc3d,	// (0x0003d7fe) main_mobtv_loading_pane_g

0xe01c,	// (0x0003bbdd) main_mobtv_loading_pane_t1_ParamLimits

0xe01c,	// (0x0003bbdd) main_mobtv_loading_pane_t1

0xe034,	// (0x0003bbf5) main_mobtv_loading_pane_t2_ParamLimits

0xe034,	// (0x0003bbf5) main_mobtv_loading_pane_t2

0x0001,

0xfc44,	// (0x0003d805) main_mobtv_loading_pane_t_ParamLimits

0xfc44,	// (0x0003d805) main_mobtv_loading_pane_t

0x809e,	// (0x00035c5f) wait_bar_pane_cp06_ParamLimits

0x809e,	// (0x00035c5f) wait_bar_pane_cp06

0xe058,	// (0x0003bc19) main_mobtv_programe_curr_pane_t1

0xe066,	// (0x0003bc27) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc49,	// (0x0003d80a) main_mobtv_programe_curr_pane_t

0xe074,	// (0x0003bc35) main_mobtv_programe_next_pane_t1

0xe082,	// (0x0003bc43) main_mobtv_programe_next_pane_t2

0xe090,	// (0x0003bc51) main_mobtv_programe_next_pane_t3

0x0002,

0xfc4e,	// (0x0003d80f) main_mobtv_programe_next_pane_t

0x9bdb,	// (0x0003779c) bg_popup_mobtv_noti_window_pane

0xe09e,	// (0x0003bc5f) popup_mobtv_noti_window_g1

0xe0a6,	// (0x0003bc67) popup_mobtv_noti_window_t1

0xe0b4,	// (0x0003bc75) popup_mobtv_noti_window_t2

0x0001,

0xfc55,	// (0x0003d816) popup_mobtv_noti_window_t

0xc7c9,	// (0x0003a38a) bg_popup_mobtv_noti_window_pane_g1

0x1ceb,	// (0x0002f8ac) sc_clock_pane

0x1ceb,	// (0x0002f8ac) main_fs_bigclock_pane

0x772a,	// (0x000352eb) blid2_tripm_pane_t4_ParamLimits

0x772a,	// (0x000352eb) blid2_tripm_pane_t4

0x80ad,	// (0x00035c6e) sc_clock_pane_g1_ParamLimits

0x80ad,	// (0x00035c6e) sc_clock_pane_g1

0x80bf,	// (0x00035c80) sc_clock_pane_t1_ParamLimits

0x80bf,	// (0x00035c80) sc_clock_pane_t1

0x80e1,	// (0x00035ca2) sc_clock_pane_t2_ParamLimits

0x80e1,	// (0x00035ca2) sc_clock_pane_t2

0x80f9,	// (0x00035cba) sc_clock_pane_t3_ParamLimits

0x80f9,	// (0x00035cba) sc_clock_pane_t3

0x0004,

0xfc5a,	// (0x0003d81b) sc_clock_pane_t_ParamLimits

0xfc5a,	// (0x0003d81b) sc_clock_pane_t

0x90ea,	// (0x00036cab) main_fs_bigclock_indicator_pane_ParamLimits

0x90ea,	// (0x00036cab) main_fs_bigclock_indicator_pane

0x819f,	// (0x00035d60) main_fs_bigclock_pane_g1_ParamLimits

0x819f,	// (0x00035d60) main_fs_bigclock_pane_g1

0x90f6,	// (0x00036cb7) main_fs_bigclock_pane_t1_ParamLimits

0x90f6,	// (0x00036cb7) main_fs_bigclock_pane_t1

0x9108,	// (0x00036cc9) main_fs_bigclock_pane_t2_ParamLimits

0x9108,	// (0x00036cc9) main_fs_bigclock_pane_t2

0x911c,	// (0x00036cdd) main_fs_bigclock_pane_t3_ParamLimits

0x911c,	// (0x00036cdd) main_fs_bigclock_pane_t3

0x0002,

0xfe38,	// (0x0003d9f9) main_fs_bigclock_pane_t_ParamLimits

0xfe38,	// (0x0003d9f9) main_fs_bigclock_pane_t

0xecad,	// (0x0003c86e) main_fs_bigclock_indicator_pane_g1

0xddc1,	// (0x0003b982) ncim_query_content_pane_g2_ParamLimits

0xddc1,	// (0x0003b982) ncim_query_content_pane_g2

0x0001,

0xfc09,	// (0x0003d7ca) ncim_query_content_pane_g_ParamLimits

0xfc09,	// (0x0003d7ca) ncim_query_content_pane_g

0x8112,	// (0x00035cd3) sc_clock_pane_t4_ParamLimits

0x8112,	// (0x00035cd3) sc_clock_pane_t4

0x1cd1,	// (0x0002f892) main_radioblah_pane

0x6562,	// (0x00034123) cell_call4_button_pane_t1_copy1_ParamLimits

0x6562,	// (0x00034123) cell_call4_button_pane_t1_copy1

0x7cf9,	// (0x000358ba) main_ncimui_pane_t1_ParamLimits

0x7cf9,	// (0x000358ba) main_ncimui_pane_t1

0x7d13,	// (0x000358d4) main_ncimui_pane_t2_ParamLimits

0x7d13,	// (0x000358d4) main_ncimui_pane_t2

0x0002,

0xfc02,	// (0x0003d7c3) main_ncimui_pane_t_ParamLimits

0xfc02,	// (0x0003d7c3) main_ncimui_pane_t

0xe1fa,	// (0x0003bdbb) main_radioblah_anim_pane_ParamLimits

0xe1fa,	// (0x0003bdbb) main_radioblah_anim_pane

0xe20b,	// (0x0003bdcc) main_radioblah_info_pane_ParamLimits

0xe20b,	// (0x0003bdcc) main_radioblah_info_pane

0xe21f,	// (0x0003bde0) main_radioblah_pane_t1_ParamLimits

0xe21f,	// (0x0003bde0) main_radioblah_pane_t1

0xe23b,	// (0x0003bdfc) main_radioblah_pane_t2_ParamLimits

0xe23b,	// (0x0003bdfc) main_radioblah_pane_t2

0x0003,

0xfc7b,	// (0x0003d83c) main_radioblah_pane_t_ParamLimits

0xfc7b,	// (0x0003d83c) main_radioblah_pane_t

0x81fe,	// (0x00035dbf) main_radioblah_rocker_ctrl_pane_ParamLimits

0x81fe,	// (0x00035dbf) main_radioblah_rocker_ctrl_pane

0xe283,	// (0x0003be44) main_radioblah_info_pane_t1_ParamLimits

0xe283,	// (0x0003be44) main_radioblah_info_pane_t1

0x8256,	// (0x00035e17) main_radioblah_info_pane_t2_ParamLimits

0x8256,	// (0x00035e17) main_radioblah_info_pane_t2

0x0003,

0xfc84,	// (0x0003d845) main_radioblah_info_pane_t_ParamLimits

0xfc84,	// (0x0003d845) main_radioblah_info_pane_t

0xc7c9,	// (0x0003a38a) main_radioblah_rocker_ctrl_pane_g1

0x8306,	// (0x00035ec7) main_radioblah_rocker_ctrl_pane_g2

0x830e,	// (0x00035ecf) main_radioblah_rocker_ctrl_pane_g3

0x8316,	// (0x00035ed7) main_radioblah_rocker_ctrl_pane_g4

0x831e,	// (0x00035edf) main_radioblah_rocker_ctrl_pane_g5

0x8326,	// (0x00035ee7) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc8d,	// (0x0003d84e) main_radioblah_rocker_ctrl_pane_g

0x79b3,	// (0x00035574) main_cset_text2_pane_t1_copy1_ParamLimits

0x65c0,	// (0x00034181) cam4_image_uncrop_qvga_pane

0x6635,	// (0x000341f6) vid4_image_uncrop_qcif_pane

0x78b5,	// (0x00035476) cam6_image_uncrop_qvga_pane_ParamLimits

0x78b5,	// (0x00035476) cam6_image_uncrop_qvga_pane

0xda7e,	// (0x0003b63f) vid6_image_uncrop_qcif_pane_ParamLimits

0xda7e,	// (0x0003b63f) vid6_image_uncrop_qcif_pane

0x9bdb,	// (0x0003779c) bg_popup_preview_window_pane_cp03

0xdd73,	// (0x0003b934) list_cset_text2_pane

0xdd7b,	// (0x0003b93c) main_cset6_text2_pane_g1

0xdd83,	// (0x0003b944) main_cset6_text2_pane_t1

0xeace,	// (0x0003c68f) list_cset_text2_pane_t1_ParamLimits

0xeace,	// (0x0003c68f) list_cset_text2_pane_t1

0x1cd1,	// (0x0002f892) main_radioblah_pane_ParamLimits

0x8046,	// (0x00035c07) main_mobtv_info_pane_t3_ParamLimits

0x8046,	// (0x00035c07) main_mobtv_info_pane_t3

0x81ec,	// (0x00035dad) main_radioblah_pane_g1

0x8226,	// (0x00035de7) main_radioblah_info_pane_g1

0x82ab,	// (0x00035e6c) main_radioblah_info_pane_t3_ParamLimits

0x82ab,	// (0x00035e6c) main_radioblah_info_pane_t3

0x371b,	// (0x000312dc) highlight_cell_cale_month_pane_ParamLimits

0x371b,	// (0x000312dc) highlight_cell_cale_month_pane

0x1ceb,	// (0x0002f8ac) main_phob_fisheye_pane

0xcb73,	// (0x0003a734) scroll_pane_cp0031_ParamLimits

0xcb73,	// (0x0003a734) scroll_pane_cp0031

0xdb8c,	// (0x0003b74d) wait_bar_pane_cp08_ParamLimits

0x7a35,	// (0x000355f6) cset_list_set_pane_copy1_ParamLimits

0xe2bd,	// (0x0003be7e) highlight_cell_cale_month_pane_g1

0x832e,	// (0x00035eef) highlight_cell_cale_month_pane_t1

0xd80d,	// (0x0003b3ce) list_gen_pane_cp01

0xd398,	// (0x0003af59) scroll_pane_01

0x833c,	// (0x00035efd) list_single_double_fisheye_pane

0x8345,	// (0x00035f06) list_double_fisheye_pane_g1_ParamLimits

0x8345,	// (0x00035f06) list_double_fisheye_pane_g1

0x8351,	// (0x00035f12) list_double_fisheye_pane_g2_ParamLimits

0x8351,	// (0x00035f12) list_double_fisheye_pane_g2

0x8365,	// (0x00035f26) list_double_fisheye_pane_g3_ParamLimits

0x8365,	// (0x00035f26) list_double_fisheye_pane_g3

0x0004,

0xfc9a,	// (0x0003d85b) list_double_fisheye_pane_g_ParamLimits

0xfc9a,	// (0x0003d85b) list_double_fisheye_pane_g

0x838e,	// (0x00035f4f) list_double_fisheye_pane_t1_ParamLimits

0x838e,	// (0x00035f4f) list_double_fisheye_pane_t1

0x83a9,	// (0x00035f6a) list_double_fisheye_pane_t2_ParamLimits

0x83a9,	// (0x00035f6a) list_double_fisheye_pane_t2

0x0001,

0xfca5,	// (0x0003d866) list_double_fisheye_pane_t_ParamLimits

0xfca5,	// (0x0003d866) list_double_fisheye_pane_t

0x1ceb,	// (0x0002f8ac) main_call5_pane

0x813d,	// (0x00035cfe) sc_swipe_pane_ParamLimits

0x813d,	// (0x00035cfe) sc_swipe_pane

0x83de,	// (0x00035f9f) call5_image_pane_ParamLimits

0x83de,	// (0x00035f9f) call5_image_pane

0x83fb,	// (0x00035fbc) call5_swipe_1_pane_ParamLimits

0x83fb,	// (0x00035fbc) call5_swipe_1_pane

0x840e,	// (0x00035fcf) call5_swipe_2_pane_ParamLimits

0x840e,	// (0x00035fcf) call5_swipe_2_pane

0x8439,	// (0x00035ffa) popup_call5_audio_first_window_ParamLimits

0x8439,	// (0x00035ffa) popup_call5_audio_first_window

0xca23,	// (0x0003a5e4) call5_swipe_1_pane_g1_ParamLimits

0xca23,	// (0x0003a5e4) call5_swipe_1_pane_g1

0xe2c5,	// (0x0003be86) call5_swipe_1_pane_g2_ParamLimits

0xe2c5,	// (0x0003be86) call5_swipe_1_pane_g2

0x0001,

0xfcaa,	// (0x0003d86b) call5_swipe_1_pane_g_ParamLimits

0xfcaa,	// (0x0003d86b) call5_swipe_1_pane_g

0xe2d1,	// (0x0003be92) call5_swipe_1_pane_t1_ParamLimits

0xe2d1,	// (0x0003be92) call5_swipe_1_pane_t1

0xca23,	// (0x0003a5e4) call5_swipe_2_pane_g1_ParamLimits

0xca23,	// (0x0003a5e4) call5_swipe_2_pane_g1

0xe2e6,	// (0x0003bea7) call5_swipe_2_pane_g2_ParamLimits

0xe2e6,	// (0x0003bea7) call5_swipe_2_pane_g2

0x0001,

0xfcaf,	// (0x0003d870) call5_swipe_2_pane_g_ParamLimits

0xfcaf,	// (0x0003d870) call5_swipe_2_pane_g

0xe2f2,	// (0x0003beb3) call5_swipe_2_pane_t1_ParamLimits

0xe2f2,	// (0x0003beb3) call5_swipe_2_pane_t1

0xe307,	// (0x0003bec8) sc_swipe_pane_g1_ParamLimits

0xe307,	// (0x0003bec8) sc_swipe_pane_g1

0xe314,	// (0x0003bed5) sc_swipe_pane_g2_ParamLimits

0xe314,	// (0x0003bed5) sc_swipe_pane_g2

0x0001,

0xfcb4,	// (0x0003d875) sc_swipe_pane_g_ParamLimits

0xfcb4,	// (0x0003d875) sc_swipe_pane_g

0xe320,	// (0x0003bee1) sc_swipe_pane_t1_ParamLimits

0xe320,	// (0x0003bee1) sc_swipe_pane_t1

0x1ceb,	// (0x0002f8ac) main_cmail_launcher_pane

0x844a,	// (0x0003600b) aid_size_cell_cmail_l_ParamLimits

0x844a,	// (0x0003600b) aid_size_cell_cmail_l

0x8458,	// (0x00036019) grid_cmail_l_pane_ParamLimits

0x8458,	// (0x00036019) grid_cmail_l_pane

0x8472,	// (0x00036033) cell_cmail_l_pane_ParamLimits

0x8472,	// (0x00036033) cell_cmail_l_pane

0xe335,	// (0x0003bef6) cell_cmail_l_pane_g1_ParamLimits

0xe335,	// (0x0003bef6) cell_cmail_l_pane_g1

0xe341,	// (0x0003bf02) cell_cmail_l_pane_t1_ParamLimits

0xe341,	// (0x0003bf02) cell_cmail_l_pane_t1

0xe357,	// (0x0003bf18) cell_cmail_l_pane_t2_ParamLimits

0xe357,	// (0x0003bf18) cell_cmail_l_pane_t2

0x0001,

0xfcb9,	// (0x0003d87a) cell_cmail_l_pane_t_ParamLimits

0xfcb9,	// (0x0003d87a) cell_cmail_l_pane_t

0xa70e,	// (0x000382cf) grid_highlight_pane_cp018_ParamLimits

0xa70e,	// (0x000382cf) grid_highlight_pane_cp018

0x03ee,	// (0x0002dfaf) main2_pane_ParamLimits

0x03ee,	// (0x0002dfaf) main2_pane

0xa3cf,	// (0x00037f90) popup_sp_fs_action_menu_bg_pane_g1

0xa3d7,	// (0x00037f98) popup_sp_fs_action_menu_bg_pane_g2

0xa3df,	// (0x00037fa0) popup_sp_fs_action_menu_bg_pane_g3

0xa3e7,	// (0x00037fa8) popup_sp_fs_action_menu_bg_pane_g4

0xa3ef,	// (0x00037fb0) popup_sp_fs_action_menu_bg_pane_g5

0xa3f7,	// (0x00037fb8) popup_sp_fs_action_menu_bg_pane_g6

0xa3ff,	// (0x00037fc0) popup_sp_fs_action_menu_bg_pane_g7

0xa407,	// (0x00037fc8) popup_sp_fs_action_menu_bg_pane_g8

0xa40f,	// (0x00037fd0) popup_sp_fs_action_menu_bg_pane_g9

0xa417,	// (0x00037fd8) popup_sp_fs_action_menu_bg_pane_g10

0xa417,	// (0x00037fd8) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0003cd4b) popup_sp_fs_action_menu_bg_pane_g

0x28c8,	// (0x00030489) list_medium_line_x2_t3_g3_g1_ParamLimits

0x28c8,	// (0x00030489) list_medium_line_x2_t3_g3_g1

0x28d4,	// (0x00030495) list_medium_line_x2_t3_g3_g2_ParamLimits

0x28d4,	// (0x00030495) list_medium_line_x2_t3_g3_g2

0x28e0,	// (0x000304a1) list_medium_line_x2_t3_g3_g3_ParamLimits

0x28e0,	// (0x000304a1) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0003cdf9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0003cdf9) list_medium_line_x2_t3_g3_g

0x28ec,	// (0x000304ad) list_medium_line_x2_t3_g3_t1_ParamLimits

0x28ec,	// (0x000304ad) list_medium_line_x2_t3_g3_t1

0x2901,	// (0x000304c2) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2901,	// (0x000304c2) list_medium_line_x2_t3_g3_t2

0x2915,	// (0x000304d6) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2915,	// (0x000304d6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0003ce00) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0003ce00) list_medium_line_x2_t3_g3_t

0x28c8,	// (0x00030489) list_medium_line_x2_t3_g2_g1_ParamLimits

0x28c8,	// (0x00030489) list_medium_line_x2_t3_g2_g1

0x28e0,	// (0x000304a1) list_medium_line_x2_t3_g2_g2_ParamLimits

0x28e0,	// (0x000304a1) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0003ce07) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0003ce07) list_medium_line_x2_t3_g2_g

0x292a,	// (0x000304eb) list_medium_line_x2_t3_g2_t1_ParamLimits

0x292a,	// (0x000304eb) list_medium_line_x2_t3_g2_t1

0x2940,	// (0x00030501) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2940,	// (0x00030501) list_medium_line_x2_t3_g2_t2

0x2952,	// (0x00030513) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2952,	// (0x00030513) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0003ce0c) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0003ce0c) list_medium_line_x2_t3_g2_t

0x28c8,	// (0x00030489) list_medium_line_x2_t4_g4_g1_ParamLimits

0x28c8,	// (0x00030489) list_medium_line_x2_t4_g4_g1

0x2970,	// (0x00030531) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2970,	// (0x00030531) list_medium_line_x2_t4_g4_g2

0x28d4,	// (0x00030495) list_medium_line_x2_t4_g4_g3_ParamLimits

0x28d4,	// (0x00030495) list_medium_line_x2_t4_g4_g3

0x297c,	// (0x0003053d) list_medium_line_x2_t4_g4_g4_ParamLimits

0x297c,	// (0x0003053d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0003ce13) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0003ce13) list_medium_line_x2_t4_g4_g

0x2988,	// (0x00030549) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2988,	// (0x00030549) list_medium_line_x2_t4_g4_t1

0x29a2,	// (0x00030563) list_medium_line_x2_t4_g4_t2_ParamLimits

0x29a2,	// (0x00030563) list_medium_line_x2_t4_g4_t2

0x29b8,	// (0x00030579) list_medium_line_x2_t4_g4_t3_ParamLimits

0x29b8,	// (0x00030579) list_medium_line_x2_t4_g4_t3

0x29cd,	// (0x0003058e) list_medium_line_x2_t4_g4_t4_ParamLimits

0x29cd,	// (0x0003058e) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0003ce1c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0003ce1c) list_medium_line_x2_t4_g4_t

0x28c8,	// (0x00030489) list_medium_line_x2_t2_g4_g1_ParamLimits

0x28c8,	// (0x00030489) list_medium_line_x2_t2_g4_g1

0x2970,	// (0x00030531) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2970,	// (0x00030531) list_medium_line_x2_t2_g4_g2

0x28d4,	// (0x00030495) list_medium_line_x2_t2_g4_g3_ParamLimits

0x28d4,	// (0x00030495) list_medium_line_x2_t2_g4_g3

0x28e0,	// (0x000304a1) list_medium_line_x2_t2_g4_g4_ParamLimits

0x28e0,	// (0x000304a1) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0003ce83) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0003ce83) list_medium_line_x2_t2_g4_g

0x3741,	// (0x00031302) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3741,	// (0x00031302) list_medium_line_x2_t2_g4_t1

0x2915,	// (0x000304d6) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2915,	// (0x000304d6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0003ce8c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0003ce8c) list_medium_line_x2_t2_g4_t

0x28c8,	// (0x00030489) list_medium_line_x2_t2_g3_g1_ParamLimits

0x28c8,	// (0x00030489) list_medium_line_x2_t2_g3_g1

0x28d4,	// (0x00030495) list_medium_line_x2_t2_g3_g2_ParamLimits

0x28d4,	// (0x00030495) list_medium_line_x2_t2_g3_g2

0x28e0,	// (0x000304a1) list_medium_line_x2_t2_g3_g3_ParamLimits

0x28e0,	// (0x000304a1) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0003cdf9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0003cdf9) list_medium_line_x2_t2_g3_g

0x3756,	// (0x00031317) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3756,	// (0x00031317) list_medium_line_x2_t2_g3_t1

0x2915,	// (0x000304d6) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2915,	// (0x000304d6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0003ce91) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0003ce91) list_medium_line_x2_t2_g3_t

0x38ac,	// (0x0003146d) main_sp_fs_list_pane_ParamLimits

0x38ac,	// (0x0003146d) main_sp_fs_list_pane

0xc8fd,	// (0x0003a4be) sp_fs_scroll_pane_ParamLimits

0xc8fd,	// (0x0003a4be) sp_fs_scroll_pane

0x38b8,	// (0x00031479) list_medium_line_x2_t3_t1

0x38c8,	// (0x00031489) list_medium_line_x2_t3_t2

0x38d6,	// (0x00031497) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0003cedc) list_medium_line_x2_t3_t

0x38e4,	// (0x000314a5) list_medium_line_x3_t4_t1

0x38f4,	// (0x000314b5) list_medium_line_x3_t4_t2

0x3902,	// (0x000314c3) list_medium_line_x3_t4_t3

0x38d6,	// (0x00031497) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0003cee3) list_medium_line_x3_t4_t

0x3910,	// (0x000314d1) list_medium_line_x4_t5_t1

0x3920,	// (0x000314e1) list_medium_line_x4_t5_t2

0x3902,	// (0x000314c3) list_medium_line_x4_t5_t3

0x392e,	// (0x000314ef) list_medium_line_x4_t5_t4

0x38d6,	// (0x00031497) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0003ceec) list_medium_line_x4_t5_t

0x28c8,	// (0x00030489) list_medium_line_t4_g4_g1_ParamLimits

0x28c8,	// (0x00030489) list_medium_line_t4_g4_g1

0x297c,	// (0x0003053d) list_medium_line_t4_g4_g2_ParamLimits

0x297c,	// (0x0003053d) list_medium_line_t4_g4_g2

0x393c,	// (0x000314fd) list_medium_line_t4_g4_g3_ParamLimits

0x393c,	// (0x000314fd) list_medium_line_t4_g4_g3

0x28e0,	// (0x000304a1) list_medium_line_t4_g4_g4_ParamLimits

0x28e0,	// (0x000304a1) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0003cef7) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0003cef7) list_medium_line_t4_g4_g

0x3948,	// (0x00031509) list_medium_line_t4_g4_t1_ParamLimits

0x3948,	// (0x00031509) list_medium_line_t4_g4_t1

0x395d,	// (0x0003151e) list_medium_line_t4_g4_t2_ParamLimits

0x395d,	// (0x0003151e) list_medium_line_t4_g4_t2

0x3973,	// (0x00031534) list_medium_line_t4_g4_t3_ParamLimits

0x3973,	// (0x00031534) list_medium_line_t4_g4_t3

0x2915,	// (0x000304d6) list_medium_line_t4_g4_t4_ParamLimits

0x2915,	// (0x000304d6) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0003cf00) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0003cf00) list_medium_line_t4_g4_t

0x3abb,	// (0x0003167c) chi_dic_find_pane_g1

0x0851,	// (0x0002e412) main_tport_pane

0xd4e8,	// (0x0003b0a9) list_medium_line_plain_t1

0x6e6a,	// (0x00034a2b) list_medium_line_t2_g2_g1_ParamLimits

0x6e6a,	// (0x00034a2b) list_medium_line_t2_g2_g1

0x6e76,	// (0x00034a37) list_medium_line_t2_g2_g2_ParamLimits

0x6e76,	// (0x00034a37) list_medium_line_t2_g2_g2

0x0001,

0xfa13,	// (0x0003d5d4) list_medium_line_t2_g2_g_ParamLimits

0xfa13,	// (0x0003d5d4) list_medium_line_t2_g2_g

0x6e82,	// (0x00034a43) list_medium_line_t2_g2_t1_ParamLimits

0x6e82,	// (0x00034a43) list_medium_line_t2_g2_t1

0x6e9c,	// (0x00034a5d) list_medium_line_t2_g2_t2_ParamLimits

0x6e9c,	// (0x00034a5d) list_medium_line_t2_g2_t2

0x0001,

0xfa18,	// (0x0003d5d9) list_medium_line_t2_g2_t_ParamLimits

0xfa18,	// (0x0003d5d9) list_medium_line_t2_g2_t

0xd816,	// (0x0003b3d7) aid_sp_fs_list_icon_a_sm

0xd81e,	// (0x0003b3df) aid_sp_fs_list_icon_d

0xd826,	// (0x0003b3e7) aid_sp_fs_text_primary

0xd82f,	// (0x0003b3f0) aid_sp_fs_text_secondary

0x74d7,	// (0x00035098) list_medium_line

0x74d7,	// (0x00035098) list_medium_line_g2

0x74d7,	// (0x00035098) list_medium_line_g3

0x74d7,	// (0x00035098) list_medium_line_plain

0x74d7,	// (0x00035098) list_medium_line_plain_t2

0x74d7,	// (0x00035098) list_medium_line_plain_t3

0x74d7,	// (0x00035098) list_medium_line_right_icon

0x74d7,	// (0x00035098) list_medium_line_right_iconx2

0x74d7,	// (0x00035098) list_medium_line_t2

0x74d7,	// (0x00035098) list_medium_line_t2_g2

0x74d7,	// (0x00035098) list_medium_line_t2_g3

0x74d7,	// (0x00035098) list_medium_line_t2_right_icon

0x74d7,	// (0x00035098) list_medium_line_t2_right_iconx2

0x74d7,	// (0x00035098) list_medium_line_t3

0x74d7,	// (0x00035098) list_medium_line_t3_g2

0x74d7,	// (0x00035098) list_medium_line_t3_g3

0x74d7,	// (0x00035098) list_medium_line_t3_right_iconx2

0x74e0,	// (0x000350a1) list_medium_line_t4_g4

0x74e9,	// (0x000350aa) list_medium_line_x2

0x74e9,	// (0x000350aa) list_medium_line_x2_t2_g2

0x74e9,	// (0x000350aa) list_medium_line_x2_t2_g3

0x74e9,	// (0x000350aa) list_medium_line_x2_t2_g4

0x74e9,	// (0x000350aa) list_medium_line_x2_t3

0x74e9,	// (0x000350aa) list_medium_line_x2_t3_g2

0x74e9,	// (0x000350aa) list_medium_line_x2_t3_g3

0x74e9,	// (0x000350aa) list_medium_line_x2_t3_g4

0x74e9,	// (0x000350aa) list_medium_line_x2_t4_g2

0x74e9,	// (0x000350aa) list_medium_line_x2_t4_g4

0x74f2,	// (0x000350b3) list_medium_line_x3

0x74f2,	// (0x000350b3) list_medium_line_x3_t4

0x74f2,	// (0x000350b3) list_medium_line_x3_t4_g4

0x74e0,	// (0x000350a1) list_medium_line_x4_t4

0x74e0,	// (0x000350a1) list_medium_line_x4_t4_g7

0x74e0,	// (0x000350a1) list_medium_line_x4_t5

0x74fb,	// (0x000350bc) list_single_fs_dyc_pane_ParamLimits

0x74fb,	// (0x000350bc) list_single_fs_dyc_pane

0x28c8,	// (0x00030489) list_medium_line_x4_t4_g7_g1_ParamLimits

0x28c8,	// (0x00030489) list_medium_line_x4_t4_g7_g1

0x7bf7,	// (0x000357b8) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7bf7,	// (0x000357b8) list_medium_line_x4_t4_g7_g2

0x7c03,	// (0x000357c4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7c03,	// (0x000357c4) list_medium_line_x4_t4_g7_g3

0x7c12,	// (0x000357d3) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7c12,	// (0x000357d3) list_medium_line_x4_t4_g7_g4

0x7c1e,	// (0x000357df) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7c1e,	// (0x000357df) list_medium_line_x4_t4_g7_g5

0x7c2d,	// (0x000357ee) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7c2d,	// (0x000357ee) list_medium_line_x4_t4_g7_g6

0x7c3c,	// (0x000357fd) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7c3c,	// (0x000357fd) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe3,	// (0x0003d7a4) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe3,	// (0x0003d7a4) list_medium_line_x4_t4_g7_g

0x7c48,	// (0x00035809) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7c48,	// (0x00035809) list_medium_line_x4_t4_g7_t1

0x7c5d,	// (0x0003581e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7c5d,	// (0x0003581e) list_medium_line_x4_t4_g7_t2

0x7c72,	// (0x00035833) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7c72,	// (0x00035833) list_medium_line_x4_t4_g7_t3

0x7c87,	// (0x00035848) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7c87,	// (0x00035848) list_medium_line_x4_t4_g7_t4

0x7c99,	// (0x0003585a) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7c99,	// (0x0003585a) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf2,	// (0x0003d7b3) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf2,	// (0x0003d7b3) list_medium_line_x4_t4_g7_t

0x7cab,	// (0x0003586c) list_single_dyc_row_pane_ParamLimits

0x7cab,	// (0x0003586c) list_single_dyc_row_pane

0x83cb,	// (0x00035f8c) call5_gesture_pane_ParamLimits

0x83cb,	// (0x00035f8c) call5_gesture_pane

0x8421,	// (0x00035fe2) call5_windows_pane_ParamLimits

0x8421,	// (0x00035fe2) call5_windows_pane

0x848c,	// (0x0003604d) call5_swipe_1_pane_cp_ParamLimits

0x848c,	// (0x0003604d) call5_swipe_1_pane_cp

0x8498,	// (0x00036059) call5_swipe_2_pane_cp_ParamLimits

0x8498,	// (0x00036059) call5_swipe_2_pane_cp

0xa509,	// (0x000380ca) call5_image_pane_cp

0x84a4,	// (0x00036065) popup_call5_audio_first_window_cp_ParamLimits

0x84a4,	// (0x00036065) popup_call5_audio_first_window_cp

0xe307,	// (0x0003bec8) call5_swipe_1_pane_g1_cp_ParamLimits

0xe307,	// (0x0003bec8) call5_swipe_1_pane_g1_cp

0xe374,	// (0x0003bf35) call5_swipe_1_pane_g2_cp

0xe320,	// (0x0003bee1) call5_swipe_1_pane_t1_cp_ParamLimits

0xe320,	// (0x0003bee1) call5_swipe_1_pane_t1_cp

0xe307,	// (0x0003bec8) call5_swipe_2_pane_g1_cp_ParamLimits

0xe307,	// (0x0003bec8) call5_swipe_2_pane_g1_cp

0xe37c,	// (0x0003bf3d) call5_swipe_2_pane_g2_cp

0xe384,	// (0x0003bf45) call5_swipe_2_pane_t1_cp_ParamLimits

0xe384,	// (0x0003bf45) call5_swipe_2_pane_t1_cp

0xa70e,	// (0x000382cf) main_sp_fs_email_pane

0xe399,	// (0x0003bf5a) main_sp_fs_listscroll_pane_te

0x84b2,	// (0x00036073) popup_sp_fs_action_menu_pane_ParamLimits

0x84b2,	// (0x00036073) popup_sp_fs_action_menu_pane

0xc7c9,	// (0x0003a38a) bg_sp_fs_ctrlbar_pane_g1

0xe3a2,	// (0x0003bf63) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3ab,	// (0x0003bf6c) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe3b4,	// (0x0003bf75) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc7c9,	// (0x0003a38a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcbe,	// (0x0003d87f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc5ae,	// (0x0003a16f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc5ae,	// (0x0003a16f) bg_sp_fs_ctrlbar_ddmenu_pane

0xe3bd,	// (0x0003bf7e) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe3bd,	// (0x0003bf7e) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe3c9,	// (0x0003bf8a) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe3c9,	// (0x0003bf8a) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcc7,	// (0x0003d888) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcc7,	// (0x0003d888) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3d5,	// (0x0003bf96) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3d5,	// (0x0003bf96) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x84f6,	// (0x000360b7) list_medium_line_t2_right_icon_g1

0x84fe,	// (0x000360bf) list_medium_line_t2_right_icon_t1

0x850e,	// (0x000360cf) list_medium_line_t2_right_icon_t2

0x0001,

0xfccc,	// (0x0003d88d) list_medium_line_t2_right_icon_t

0xc3c1,	// (0x00039f82) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc3c1,	// (0x00039f82) bg_sp_fs_ctrlbar_pane

0x8568,	// (0x00036129) main_sp_fs_ctrlbar_button_pane_cp01

0x8572,	// (0x00036133) main_sp_fs_ctrlbar_ddmenu_pane

0xe427,	// (0x0003bfe8) main_sp_fs_ctrlbar_pane_g1

0xe433,	// (0x0003bff4) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd1,	// (0x0003d892) main_sp_fs_ctrlbar_pane_g

0xe43f,	// (0x0003c000) main_sp_fs_ctrlbar_pane_t1

0x857c,	// (0x0003613d) main_sp_fs_ctrlbar_pane

0x85a0,	// (0x00036161) main_sp_fs_listscroll_pane_te_cp01

0x85c0,	// (0x00036181) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x85c0,	// (0x00036181) popup_sp_fs_action_menu_pane_cp01

0xa70e,	// (0x000382cf) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa70e,	// (0x000382cf) bg_sp_fs_highlight_list_pane_cp01

0xe46f,	// (0x0003c030) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe46f,	// (0x0003c030) sp_fs_action_menu_list_gene_pane_g1

0xe47e,	// (0x0003c03f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe47e,	// (0x0003c03f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcdb,	// (0x0003d89c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcdb,	// (0x0003d89c) sp_fs_action_menu_list_gene_pane_g

0xe48b,	// (0x0003c04c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe48b,	// (0x0003c04c) sp_fs_action_menu_list_gene_pane_t1

0xe4a3,	// (0x0003c064) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe4a3,	// (0x0003c064) sp_fs_action_menu_list_gene_pane

0xe4c2,	// (0x0003c083) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe4c2,	// (0x0003c083) popup_sp_fs_action_menu_bg_pane

0xe4d0,	// (0x0003c091) sp_fs_action_menu_list_pane_ParamLimits

0xe4d0,	// (0x0003c091) sp_fs_action_menu_list_pane

0x85f0,	// (0x000361b1) sp_fs_scroll_pane_cp01_ParamLimits

0x85f0,	// (0x000361b1) sp_fs_scroll_pane_cp01

0x8616,	// (0x000361d7) list_medium_line_plain_t2_t1

0x8626,	// (0x000361e7) list_medium_line_plain_t2_t2

0x0001,

0xfce0,	// (0x0003d8a1) list_medium_line_plain_t2_t

0x8636,	// (0x000361f7) list_medium_line_plain_t3_t1

0x8646,	// (0x00036207) list_medium_line_plain_t3_t2

0x8654,	// (0x00036215) list_medium_line_plain_t3_t3

0x0002,

0xfce5,	// (0x0003d8a6) list_medium_line_plain_t3_t

0x28c8,	// (0x00030489) list_medium_line_x2_t2_g2_g1_ParamLimits

0x28c8,	// (0x00030489) list_medium_line_x2_t2_g2_g1

0x28e0,	// (0x000304a1) list_medium_line_x2_t2_g2_g2_ParamLimits

0x28e0,	// (0x000304a1) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0003ce07) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0003ce07) list_medium_line_x2_t2_g2_g

0x3948,	// (0x00031509) list_medium_line_x2_t2_g2_t1_ParamLimits

0x3948,	// (0x00031509) list_medium_line_x2_t2_g2_t1

0x2915,	// (0x000304d6) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2915,	// (0x000304d6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcec,	// (0x0003d8ad) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcec,	// (0x0003d8ad) list_medium_line_x2_t2_g2_t

0x28c8,	// (0x00030489) list_medium_line_x2_t4_g2_g1_ParamLimits

0x28c8,	// (0x00030489) list_medium_line_x2_t4_g2_g1

0x28e0,	// (0x000304a1) list_medium_line_x2_t4_g2_g2_ParamLimits

0x28e0,	// (0x000304a1) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0003ce07) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0003ce07) list_medium_line_x2_t4_g2_g

0x8662,	// (0x00036223) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8662,	// (0x00036223) list_medium_line_x2_t4_g2_t1

0x867c,	// (0x0003623d) list_medium_line_x2_t4_g2_t2_ParamLimits

0x867c,	// (0x0003623d) list_medium_line_x2_t4_g2_t2

0x8692,	// (0x00036253) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8692,	// (0x00036253) list_medium_line_x2_t4_g2_t3

0x2915,	// (0x000304d6) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2915,	// (0x000304d6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf1,	// (0x0003d8b2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf1,	// (0x0003d8b2) list_medium_line_x2_t4_g2_t

0x86a7,	// (0x00036268) list_medium_line_t3_right_iconx2_g1

0x84f6,	// (0x000360b7) list_medium_line_t3_right_iconx2_g2

0x86af,	// (0x00036270) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfcfa,	// (0x0003d8bb) list_medium_line_t3_right_iconx2_g

0x86b9,	// (0x0003627a) list_medium_line_t3_right_iconx2_t1

0x86c9,	// (0x0003628a) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd01,	// (0x0003d8c2) list_medium_line_t3_right_iconx2_t

0x28c8,	// (0x00030489) list_medium_line_x3_t4_g4_g1_ParamLimits

0x28c8,	// (0x00030489) list_medium_line_x3_t4_g4_g1

0x28d4,	// (0x00030495) list_medium_line_x3_t4_g4_g2_ParamLimits

0x28d4,	// (0x00030495) list_medium_line_x3_t4_g4_g2

0x297c,	// (0x0003053d) list_medium_line_x3_t4_g4_g3_ParamLimits

0x297c,	// (0x0003053d) list_medium_line_x3_t4_g4_g3

0x86d7,	// (0x00036298) list_medium_line_x3_t4_g4_g4_ParamLimits

0x86d7,	// (0x00036298) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd06,	// (0x0003d8c7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd06,	// (0x0003d8c7) list_medium_line_x3_t4_g4_g

0x86e3,	// (0x000362a4) list_medium_line_x3_t4_g4_t1_ParamLimits

0x86e3,	// (0x000362a4) list_medium_line_x3_t4_g4_t1

0x86fa,	// (0x000362bb) list_medium_line_x3_t4_g4_t2_ParamLimits

0x86fa,	// (0x000362bb) list_medium_line_x3_t4_g4_t2

0x8715,	// (0x000362d6) list_medium_line_x3_t4_g4_t3_ParamLimits

0x8715,	// (0x000362d6) list_medium_line_x3_t4_g4_t3

0x872a,	// (0x000362eb) list_medium_line_x3_t4_g4_t4_ParamLimits

0x872a,	// (0x000362eb) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd0f,	// (0x0003d8d0) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd0f,	// (0x0003d8d0) list_medium_line_x3_t4_g4_t

0x8747,	// (0x00036308) list_single_dyc_row_text_pane_t1_ParamLimits

0x8747,	// (0x00036308) list_single_dyc_row_text_pane_t1

0x8790,	// (0x00036351) list_single_dyc_row_text_pane_t2_ParamLimits

0x8790,	// (0x00036351) list_single_dyc_row_text_pane_t2

0xe4f0,	// (0x0003c0b1) list_single_dyc_row_text_pane_t3_ParamLimits

0xe4f0,	// (0x0003c0b1) list_single_dyc_row_text_pane_t3

0x0005,

0xfd18,	// (0x0003d8d9) list_single_dyc_row_text_pane_t_ParamLimits

0xfd18,	// (0x0003d8d9) list_single_dyc_row_text_pane_t

0xe514,	// (0x0003c0d5) list_single_dyc_row_pane_g1_ParamLimits

0xe514,	// (0x0003c0d5) list_single_dyc_row_pane_g1

0xe520,	// (0x0003c0e1) list_single_dyc_row_pane_g2_ParamLimits

0xe520,	// (0x0003c0e1) list_single_dyc_row_pane_g2

0xe52c,	// (0x0003c0ed) list_single_dyc_row_pane_g3_ParamLimits

0xe52c,	// (0x0003c0ed) list_single_dyc_row_pane_g3

0xe538,	// (0x0003c0f9) list_single_dyc_row_pane_g4_ParamLimits

0xe538,	// (0x0003c0f9) list_single_dyc_row_pane_g4

0x0003,

0xfd25,	// (0x0003d8e6) list_single_dyc_row_pane_g_ParamLimits

0xfd25,	// (0x0003d8e6) list_single_dyc_row_pane_g

0xe544,	// (0x0003c105) list_single_dyc_row_text_pane_ParamLimits

0xe544,	// (0x0003c105) list_single_dyc_row_text_pane

0x9bdb,	// (0x0003779c) bg_sp_fs_scroll_pane

0xe563,	// (0x0003c124) thumb_sp_fs_scroll_pane

0x6e6a,	// (0x00034a2b) list_medium_line_g1_ParamLimits

0x6e6a,	// (0x00034a2b) list_medium_line_g1

0xe56c,	// (0x0003c12d) list_medium_line_t1_ParamLimits

0xe56c,	// (0x0003c12d) list_medium_line_t1

0x28c8,	// (0x00030489) list_medium_line_x2_g1_ParamLimits

0x28c8,	// (0x00030489) list_medium_line_x2_g1

0x28d4,	// (0x00030495) list_medium_line_x2_g2_ParamLimits

0x28d4,	// (0x00030495) list_medium_line_x2_g2

0x0001,

0xfd2e,	// (0x0003d8ef) list_medium_line_x2_g_ParamLimits

0xfd2e,	// (0x0003d8ef) list_medium_line_x2_g

0xe581,	// (0x0003c142) list_medium_line_x2_t1_ParamLimits

0xe581,	// (0x0003c142) list_medium_line_x2_t1

0x28c8,	// (0x00030489) list_medium_line_x3_g1_ParamLimits

0x28c8,	// (0x00030489) list_medium_line_x3_g1

0x28d4,	// (0x00030495) list_medium_line_x3_g2_ParamLimits

0x28d4,	// (0x00030495) list_medium_line_x3_g2

0x0001,

0xfd2e,	// (0x0003d8ef) list_medium_line_x3_g_ParamLimits

0xfd2e,	// (0x0003d8ef) list_medium_line_x3_g

0xe581,	// (0x0003c142) list_medium_line_x3_t1_ParamLimits

0xe581,	// (0x0003c142) list_medium_line_x3_t1

0xe597,	// (0x0003c158) thumb_sp_fs_scroll_pane_g1

0xe5a0,	// (0x0003c161) thumb_sp_fs_scroll_pane_g2

0xe5a9,	// (0x0003c16a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd33,	// (0x0003d8f4) thumb_sp_fs_scroll_pane_g

0xe597,	// (0x0003c158) bg_sp_fs_scroll_pane_g1

0xe5a0,	// (0x0003c161) bg_sp_fs_scroll_pane_g2

0xe5a9,	// (0x0003c16a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd33,	// (0x0003d8f4) bg_sp_fs_scroll_pane_g

0x28c8,	// (0x00030489) list_medium_line_x2_t3_g4_g1_ParamLimits

0x28c8,	// (0x00030489) list_medium_line_x2_t3_g4_g1

0x2970,	// (0x00030531) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2970,	// (0x00030531) list_medium_line_x2_t3_g4_g2

0x28d4,	// (0x00030495) list_medium_line_x2_t3_g4_g3_ParamLimits

0x28d4,	// (0x00030495) list_medium_line_x2_t3_g4_g3

0x28e0,	// (0x000304a1) list_medium_line_x2_t3_g4_g4_ParamLimits

0x28e0,	// (0x000304a1) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0003ce83) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0003ce83) list_medium_line_x2_t3_g4_g

0x88c5,	// (0x00036486) list_medium_line_x2_t3_g4_t1_ParamLimits

0x88c5,	// (0x00036486) list_medium_line_x2_t3_g4_t1

0x88df,	// (0x000364a0) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88df,	// (0x000364a0) list_medium_line_x2_t3_g4_t2

0x2915,	// (0x000304d6) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2915,	// (0x000304d6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd3a,	// (0x0003d8fb) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd3a,	// (0x0003d8fb) list_medium_line_x2_t3_g4_t

0x6e6a,	// (0x00034a2b) list_medium_line_g2_g1_ParamLimits

0x6e6a,	// (0x00034a2b) list_medium_line_g2_g1

0x6e76,	// (0x00034a37) list_medium_line_g2_g2_ParamLimits

0x6e76,	// (0x00034a37) list_medium_line_g2_g2

0x0001,

0xfa13,	// (0x0003d5d4) list_medium_line_g2_g_ParamLimits

0xfa13,	// (0x0003d5d4) list_medium_line_g2_g

0xe5b2,	// (0x0003c173) list_medium_line_g2_t1_ParamLimits

0xe5b2,	// (0x0003c173) list_medium_line_g2_t1

0x6e6a,	// (0x00034a2b) list_medium_line_t3_g2_g1_ParamLimits

0x6e6a,	// (0x00034a2b) list_medium_line_t3_g2_g1

0x6e76,	// (0x00034a37) list_medium_line_t3_g2_g2_ParamLimits

0x6e76,	// (0x00034a37) list_medium_line_t3_g2_g2

0x0001,

0xfa13,	// (0x0003d5d4) list_medium_line_t3_g2_g_ParamLimits

0xfa13,	// (0x0003d5d4) list_medium_line_t3_g2_g

0x88f9,	// (0x000364ba) list_medium_line_t3_g2_t1_ParamLimits

0x88f9,	// (0x000364ba) list_medium_line_t3_g2_t1

0x8913,	// (0x000364d4) list_medium_line_t3_g2_t2_ParamLimits

0x8913,	// (0x000364d4) list_medium_line_t3_g2_t2

0x8929,	// (0x000364ea) list_medium_line_t3_g2_t3_ParamLimits

0x8929,	// (0x000364ea) list_medium_line_t3_g2_t3

0x0002,

0xfd41,	// (0x0003d902) list_medium_line_t3_g2_t_ParamLimits

0xfd41,	// (0x0003d902) list_medium_line_t3_g2_t

0x84f6,	// (0x000360b7) list_medium_line_right_icon_g1

0xe5c7,	// (0x0003c188) list_medium_line_right_icon_t1

0x6e6a,	// (0x00034a2b) list_medium_line_t2_g1_ParamLimits

0x6e6a,	// (0x00034a2b) list_medium_line_t2_g1

0x8943,	// (0x00036504) list_medium_line_t2_t1_ParamLimits

0x8943,	// (0x00036504) list_medium_line_t2_t1

0x895d,	// (0x0003651e) list_medium_line_t2_t2_ParamLimits

0x895d,	// (0x0003651e) list_medium_line_t2_t2

0x0001,

0xfd48,	// (0x0003d909) list_medium_line_t2_t_ParamLimits

0xfd48,	// (0x0003d909) list_medium_line_t2_t

0x6e6a,	// (0x00034a2b) list_medium_line_t3_g1_ParamLimits

0x6e6a,	// (0x00034a2b) list_medium_line_t3_g1

0x8976,	// (0x00036537) list_medium_line_t3_t1_ParamLimits

0x8976,	// (0x00036537) list_medium_line_t3_t1

0x8990,	// (0x00036551) list_medium_line_t3_t2_ParamLimits

0x8990,	// (0x00036551) list_medium_line_t3_t2

0x89a6,	// (0x00036567) list_medium_line_t3_t3_ParamLimits

0x89a6,	// (0x00036567) list_medium_line_t3_t3

0x0002,

0xfd4d,	// (0x0003d90e) list_medium_line_t3_t_ParamLimits

0xfd4d,	// (0x0003d90e) list_medium_line_t3_t

0x6e6a,	// (0x00034a2b) list_medium_line_g3_g1_ParamLimits

0x6e6a,	// (0x00034a2b) list_medium_line_g3_g1

0x89bb,	// (0x0003657c) list_medium_line_g3_g2_ParamLimits

0x89bb,	// (0x0003657c) list_medium_line_g3_g2

0x6e76,	// (0x00034a37) list_medium_line_g3_g3_ParamLimits

0x6e76,	// (0x00034a37) list_medium_line_g3_g3

0x0002,

0xfd54,	// (0x0003d915) list_medium_line_g3_g_ParamLimits

0xfd54,	// (0x0003d915) list_medium_line_g3_g

0xe5d5,	// (0x0003c196) list_medium_line_g3_t1_ParamLimits

0xe5d5,	// (0x0003c196) list_medium_line_g3_t1

0x6e6a,	// (0x00034a2b) list_medium_line_t2_g3_g1_ParamLimits

0x6e6a,	// (0x00034a2b) list_medium_line_t2_g3_g1

0x89bb,	// (0x0003657c) list_medium_line_t2_g3_g2_ParamLimits

0x89bb,	// (0x0003657c) list_medium_line_t2_g3_g2

0x6e76,	// (0x00034a37) list_medium_line_t2_g3_g3_ParamLimits

0x6e76,	// (0x00034a37) list_medium_line_t2_g3_g3

0x0002,

0xfd54,	// (0x0003d915) list_medium_line_t2_g3_g_ParamLimits

0xfd54,	// (0x0003d915) list_medium_line_t2_g3_g

0x89c7,	// (0x00036588) list_medium_line_t2_g3_t1_ParamLimits

0x89c7,	// (0x00036588) list_medium_line_t2_g3_t1

0x89e1,	// (0x000365a2) list_medium_line_t2_g3_t2_ParamLimits

0x89e1,	// (0x000365a2) list_medium_line_t2_g3_t2

0x0001,

0xfd5b,	// (0x0003d91c) list_medium_line_t2_g3_t_ParamLimits

0xfd5b,	// (0x0003d91c) list_medium_line_t2_g3_t

0x6e6a,	// (0x00034a2b) list_medium_line_t3_g3_g1_ParamLimits

0x6e6a,	// (0x00034a2b) list_medium_line_t3_g3_g1

0x89bb,	// (0x0003657c) list_medium_line_t3_g3_g2_ParamLimits

0x89bb,	// (0x0003657c) list_medium_line_t3_g3_g2

0x6e76,	// (0x00034a37) list_medium_line_t3_g3_g3_ParamLimits

0x6e76,	// (0x00034a37) list_medium_line_t3_g3_g3

0x0002,

0xfd54,	// (0x0003d915) list_medium_line_t3_g3_g_ParamLimits

0xfd54,	// (0x0003d915) list_medium_line_t3_g3_g

0x89ff,	// (0x000365c0) list_medium_line_t3_g3_t1_ParamLimits

0x89ff,	// (0x000365c0) list_medium_line_t3_g3_t1

0x8a18,	// (0x000365d9) list_medium_line_t3_g3_t2_ParamLimits

0x8a18,	// (0x000365d9) list_medium_line_t3_g3_t2

0x8a2e,	// (0x000365ef) list_medium_line_t3_g3_t3_ParamLimits

0x8a2e,	// (0x000365ef) list_medium_line_t3_g3_t3

0x0002,

0xfd60,	// (0x0003d921) list_medium_line_t3_g3_t_ParamLimits

0xfd60,	// (0x0003d921) list_medium_line_t3_g3_t

0x86a7,	// (0x00036268) list_medium_line_right_iconx2_g1

0x84f6,	// (0x000360b7) list_medium_line_right_iconx2_g2

0x0001,

0xfd67,	// (0x0003d928) list_medium_line_right_iconx2_g

0xe5ea,	// (0x0003c1ab) list_medium_line_right_iconx2_t1

0x86a7,	// (0x00036268) list_medium_line_t2_right_iconx2_g1

0x84f6,	// (0x000360b7) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd67,	// (0x0003d928) list_medium_line_t2_right_iconx2_g

0x8a48,	// (0x00036609) list_medium_line_t2_right_iconx2_t1

0x8a58,	// (0x00036619) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd6c,	// (0x0003d92d) list_medium_line_t2_right_iconx2_t

0x8a6a,	// (0x0003662b) list_medium_line_x4_t4_t1

0x8a78,	// (0x00036639) list_medium_line_x4_t4_t2

0x8a88,	// (0x00036649) list_medium_line_x4_t4_t3

0x8a98,	// (0x00036659) list_medium_line_x4_t4_t4

0x0003,

0xfd71,	// (0x0003d932) list_medium_line_x4_t4_t

0x8aeb,	// (0x000366ac) tport_appsw_pane_ParamLimits

0x8aeb,	// (0x000366ac) tport_appsw_pane

0x8b03,	// (0x000366c4) tport_contact_pane_ParamLimits

0x8b03,	// (0x000366c4) tport_contact_pane

0x8b1b,	// (0x000366dc) tport_listscroll_pane_ParamLimits

0x8b1b,	// (0x000366dc) tport_listscroll_pane

0x8b35,	// (0x000366f6) cell_tport_appsw_pane_ParamLimits

0x8b35,	// (0x000366f6) cell_tport_appsw_pane

0xd241,	// (0x0003ae02) tport_appsw_pane_g1_ParamLimits

0xd241,	// (0x0003ae02) tport_appsw_pane_g1

0xe5f8,	// (0x0003c1b9) tport_contact_pane_g1

0xe601,	// (0x0003c1c2) tport_contact_pane_t1

0xe60f,	// (0x0003c1d0) tport_contact_pane_t2

0x0001,

0xfd7a,	// (0x0003d93b) tport_contact_pane_t

0xe61d,	// (0x0003c1de) list_tport_pane

0xe626,	// (0x0003c1e7) scroll_pane_cp_030

0x8b7d,	// (0x0003673e) cell_tport_appsw_pane_g1

0x8b8d,	// (0x0003674e) cell_tport_appsw_pane_t1

0x8b9b,	// (0x0003675c) grid_highlight_pane_cp019

0x8ba3,	// (0x00036764) list_tport_double_graphic_pane_ParamLimits

0x8ba3,	// (0x00036764) list_tport_double_graphic_pane

0xa70e,	// (0x000382cf) list_highlight_pane_cp023_ParamLimits

0xa70e,	// (0x000382cf) list_highlight_pane_cp023

0x8bb0,	// (0x00036771) list_tport_double_graphic_pane_g1_ParamLimits

0x8bb0,	// (0x00036771) list_tport_double_graphic_pane_g1

0x8bbd,	// (0x0003677e) list_tport_double_graphic_pane_t1_ParamLimits

0x8bbd,	// (0x0003677e) list_tport_double_graphic_pane_t1

0x8bd2,	// (0x00036793) list_tport_double_graphic_pane_t2_ParamLimits

0x8bd2,	// (0x00036793) list_tport_double_graphic_pane_t2

0x0001,

0xfd86,	// (0x0003d947) list_tport_double_graphic_pane_t_ParamLimits

0xfd86,	// (0x0003d947) list_tport_double_graphic_pane_t

0x9bdb,	// (0x0003779c) main_cale_note_pane

0x186d,	// (0x0002f42e) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x186d,	// (0x0002f42e) cell_vitu2_function_top_wide_pane_cp01

0x805a,	// (0x00035c1b) wait_bar_pane_cp05_ParamLimits

0xa70e,	// (0x000382cf) listscroll_cmail_pane

0xe62f,	// (0x0003c1f0) list_cmail_pane

0x8be4,	// (0x000367a5) list_cmail_body_pane

0x8bf9,	// (0x000367ba) list_single_cmail_header_caption_pane

0x8c10,	// (0x000367d1) list_single_cmail_header_detail_pane_ParamLimits

0x8c10,	// (0x000367d1) list_single_cmail_header_detail_pane

0xe63f,	// (0x0003c200) list_single_cmail_header_caption_pane_t1

0x8c3a,	// (0x000367fb) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c3a,	// (0x000367fb) list_single_cmail_header_detail_pane_g1

0xe656,	// (0x0003c217) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe656,	// (0x0003c217) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd8b,	// (0x0003d94c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd8b,	// (0x0003d94c) list_single_cmail_header_detail_pane_g

0xe66f,	// (0x0003c230) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe66f,	// (0x0003c230) list_single_cmail_header_detail_pane_t1

0xe6cf,	// (0x0003c290) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6cf,	// (0x0003c290) list_single_cmail_header_editor_pane_bg

0xdfb5,	// (0x0003bb76) list_cmail_body_pane_g1

0xe6e6,	// (0x0003c2a7) list_cmail_body_pane_t1

0xd27e,	// (0x0003ae3f) list_single_cmail_header_editor_pane_bg_g1

0xa78e,	// (0x0003834f) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd28e,	// (0x0003ae4f) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd286,	// (0x0003ae47) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd4f6,	// (0x0003b0b7) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2ae,	// (0x0003ae6f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd29e,	// (0x0003ae5f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2a6,	// (0x0003ae67) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa76e,	// (0x0003832f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c52,	// (0x00036813) calenote_gesture_pane_ParamLimits

0x8c52,	// (0x00036813) calenote_gesture_pane

0x8c72,	// (0x00036833) calenote_window_pane_ParamLimits

0x8c72,	// (0x00036833) calenote_window_pane

0xe6f4,	// (0x0003c2b5) popup_note_window_cp01

0x8c8e,	// (0x0003684f) calenote_swipe_1_pane_ParamLimits

0x8c8e,	// (0x0003684f) calenote_swipe_1_pane

0x8498,	// (0x00036059) calenote_swipe_2_pane_ParamLimits

0x8498,	// (0x00036059) calenote_swipe_2_pane

0xe307,	// (0x0003bec8) calenote_swipe_1_pane_g1_ParamLimits

0xe307,	// (0x0003bec8) calenote_swipe_1_pane_g1

0xe314,	// (0x0003bed5) calenote_swipe_1_pane_g2_ParamLimits

0xe314,	// (0x0003bed5) calenote_swipe_1_pane_g2

0x0001,

0xfcb4,	// (0x0003d875) calenote_swipe_1_pane_g_ParamLimits

0xfcb4,	// (0x0003d875) calenote_swipe_1_pane_g

0xe706,	// (0x0003c2c7) calenote_swipe_1_pane_t1_ParamLimits

0xe706,	// (0x0003c2c7) calenote_swipe_1_pane_t1

0xe307,	// (0x0003bec8) calenote_swipe_2_pane_g1_ParamLimits

0xe307,	// (0x0003bec8) calenote_swipe_2_pane_g1

0xe725,	// (0x0003c2e6) calenote_swipe_2_pane_g2_ParamLimits

0xe725,	// (0x0003c2e6) calenote_swipe_2_pane_g2

0x0001,

0xfd97,	// (0x0003d958) calenote_swipe_2_pane_g_ParamLimits

0xfd97,	// (0x0003d958) calenote_swipe_2_pane_g

0xe731,	// (0x0003c2f2) calenote_swipe_2_pane_t1_ParamLimits

0xe731,	// (0x0003c2f2) calenote_swipe_2_pane_t1

0x9bdb,	// (0x0003779c) main_mup_navstr_pane

0x58c0,	// (0x00033481) main_mup3_pane_t7_ParamLimits

0x58c0,	// (0x00033481) main_mup3_pane_t7

0x62c9,	// (0x00033e8a) main_mp4_pane_g6_ParamLimits

0x62c9,	// (0x00033e8a) main_mp4_pane_g6

0x6511,	// (0x000340d2) main_image3_pane_t4_ParamLimits

0x6511,	// (0x000340d2) main_image3_pane_t4

0x8ca3,	// (0x00036864) popup_navstr_preview_pane_ParamLimits

0x8ca3,	// (0x00036864) popup_navstr_preview_pane

0x8cb7,	// (0x00036878) scroll_navstr_pane_ParamLimits

0x8cb7,	// (0x00036878) scroll_navstr_pane

0x9bdb,	// (0x0003779c) bg_popup_preview_window_pane_cp04

0xe758,	// (0x0003c319) popup_navstr_preview_pane_t1

0x8ccb,	// (0x0003688c) scroll_navstr_pane_g1_ParamLimits

0x8ccb,	// (0x0003688c) scroll_navstr_pane_g1

0x8cdf,	// (0x000368a0) scroll_navstr_pane_t1_ParamLimits

0x8cdf,	// (0x000368a0) scroll_navstr_pane_t1

0xe6fd,	// (0x0003c2be) bg_button_pane_cp014

0xe6fd,	// (0x0003c2be) bg_button_pane_cp030

0x8371,	// (0x00035f32) list_double_fisheye_pane_g4_ParamLimits

0x8371,	// (0x00035f32) list_double_fisheye_pane_g4

0x837d,	// (0x00035f3e) list_double_fisheye_pane_g5_ParamLimits

0x837d,	// (0x00035f3e) list_double_fisheye_pane_g5

0xc8fd,	// (0x0003a4be) sp_fs_scroll_pane_cp03

0xe427,	// (0x0003bfe8) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe433,	// (0x0003bff4) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd1,	// (0x0003d892) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe43f,	// (0x0003c000) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe637,	// (0x0003c1f8) sp_fs_scroll_pane_cp02

0xa448,	// (0x00038009) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa448,	// (0x00038009) popup_sp_fs_calendar_preview_list_single_pane

0x9bdb,	// (0x0003779c) main_cam6_pano_pane

0x1cd1,	// (0x0002f892) main_mup3_pane_ParamLimits

0x9bdb,	// (0x0003779c) main_phacti_pane

0x7f2d,	// (0x00035aee) bg_button_pane_cp11

0x7f47,	// (0x00035b08) main_mobtv_info_pane_g2_ParamLimits

0x7f47,	// (0x00035b08) main_mobtv_info_pane_g2

0x0001,

0xfc31,	// (0x0003d7f2) main_mobtv_info_pane_g_ParamLimits

0xfc31,	// (0x0003d7f2) main_mobtv_info_pane_g

0x8124,	// (0x00035ce5) sc_clock_pane_t5_ParamLimits

0x8124,	// (0x00035ce5) sc_clock_pane_t5

0x81ec,	// (0x00035dad) main_radioblah_pane_g1_ParamLimits

0xe253,	// (0x0003be14) main_radioblah_pane_t3_ParamLimits

0xe253,	// (0x0003be14) main_radioblah_pane_t3

0xe26b,	// (0x0003be2c) main_radioblah_pane_t4_ParamLimits

0xe26b,	// (0x0003be2c) main_radioblah_pane_t4

0x8214,	// (0x00035dd5) main_radioblah_text_pane_ParamLimits

0x8214,	// (0x00035dd5) main_radioblah_text_pane

0x8226,	// (0x00035de7) main_radioblah_info_pane_g1_ParamLimits

0x82bf,	// (0x00035e80) main_radioblah_info_pane_t4_ParamLimits

0x82bf,	// (0x00035e80) main_radioblah_info_pane_t4

0xa70e,	// (0x000382cf) main_sp_fs_calendar_pane

0x8cf6,	// (0x000368b7) main_phacti_pane_g1

0x8cfe,	// (0x000368bf) phacti_note_pane_ParamLimits

0x8cfe,	// (0x000368bf) phacti_note_pane

0xe76f,	// (0x0003c330) phacti_term_pane_ParamLimits

0xe76f,	// (0x0003c330) phacti_term_pane

0xe784,	// (0x0003c345) phacti_note_pane_t1_ParamLimits

0xe784,	// (0x0003c345) phacti_note_pane_t1

0xe79b,	// (0x0003c35c) phacti_term_pane_g1

0xe7a3,	// (0x0003c364) phacti_term_pane_t1_ParamLimits

0xe7a3,	// (0x0003c364) phacti_term_pane_t1

0xe7cd,	// (0x0003c38e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7d5,	// (0x0003c396) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda1,	// (0x0003d962) popup_sp_fs_calendar_preview_list_single_pane_g

0xe7dd,	// (0x0003c39e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe7dd,	// (0x0003c39e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe7f3,	// (0x0003c3b4) aid_popup_sp_fs_bg_corner_pane

0xc7c9,	// (0x0003a38a) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bdb,	// (0x0003779c) popup_sp_fs_calendar_preview_bg_pane

0x2751,	// (0x00030312) popup_sp_fs_calendar_preview_list_pane

0xc3c1,	// (0x00039f82) bg_main_sp_fs_cale_pane_ParamLimits

0xc3c1,	// (0x00039f82) bg_main_sp_fs_cale_pane

0xe804,	// (0x0003c3c5) listscroll_cale_mrui_pane_ParamLimits

0xe804,	// (0x0003c3c5) listscroll_cale_mrui_pane

0xd302,	// (0x0003aec3) listscroll_sp_fs_schedule_track_pane

0xe819,	// (0x0003c3da) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe819,	// (0x0003c3da) main_sp_fs_ctrlbar_pane_cp01

0xe82c,	// (0x0003c3ed) main_sp_fs_ribbon_pane

0xe834,	// (0x0003c3f5) popup_sp_fs_cale_preview_window

0x8d73,	// (0x00036934) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d73,	// (0x00036934) list_single_sp_fs_schedule_track_pane

0xa70e,	// (0x000382cf) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa70e,	// (0x000382cf) bg_sp_fs_highlight_list_pane_cp03

0x8d87,	// (0x00036948) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d87,	// (0x00036948) list_single_sp_fs_schedule_track_pane_g1

0x8d93,	// (0x00036954) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d93,	// (0x00036954) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfda6,	// (0x0003d967) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfda6,	// (0x0003d967) list_single_sp_fs_schedule_track_pane_g

0x8d9f,	// (0x00036960) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d9f,	// (0x00036960) list_single_sp_fs_schedule_track_pane_t1

0x8db9,	// (0x0003697a) sp_fs_schedule_track_pane_ParamLimits

0x8db9,	// (0x0003697a) sp_fs_schedule_track_pane

0xe846,	// (0x0003c407) sp_fs_schedule_track_pane_g1

0xe84e,	// (0x0003c40f) sp_fs_schedule_track_pane_g2

0xe856,	// (0x0003c417) sp_fs_schedule_track_pane_g3

0xe85e,	// (0x0003c41f) sp_fs_schedule_track_pane_g4

0xe866,	// (0x0003c427) sp_fs_schedule_track_pane_g5

0x0004,

0xfdab,	// (0x0003d96c) sp_fs_schedule_track_pane_g

0xd27e,	// (0x0003ae3f) bg_sp_fs_schedule_viewer_highlight_g1

0xa78e,	// (0x0003834f) bg_sp_fs_schedule_viewer_highlight_g2

0xd286,	// (0x0003ae47) bg_sp_fs_schedule_viewer_highlight_g3

0xd28e,	// (0x0003ae4f) bg_sp_fs_schedule_viewer_highlight_g4

0xd4f6,	// (0x0003b0b7) bg_sp_fs_schedule_viewer_highlight_g5

0xd29e,	// (0x0003ae5f) bg_sp_fs_schedule_viewer_highlight_g6

0xd2a6,	// (0x0003ae67) bg_sp_fs_schedule_viewer_highlight_g7

0xd2ae,	// (0x0003ae6f) bg_sp_fs_schedule_viewer_highlight_g8

0xa76e,	// (0x0003832f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdb6,	// (0x0003d977) bg_sp_fs_schedule_viewer_highlight_g

0x9bdb,	// (0x0003779c) bg_main_sp_fs_ribbon_pane

0x8dca,	// (0x0003698b) main_sp_fs_ribbon_pane_g1

0xe86e,	// (0x0003c42f) main_sp_fs_ribbon_pane_t1

0x8dd3,	// (0x00036994) main_sp_fs_ribbon_pane_t2

0xe87d,	// (0x0003c43e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdc9,	// (0x0003d98a) main_sp_fs_ribbon_pane_t

0xe88c,	// (0x0003c44d) main_sp_fs_ribbon_scheduler_pane

0xe894,	// (0x0003c455) bg_main_sp_fs_ribbon_pane_g1

0xe89d,	// (0x0003c45e) bg_main_sp_fs_ribbon_pane_g2

0xe8a6,	// (0x0003c467) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd0,	// (0x0003d991) bg_main_sp_fs_ribbon_pane_g

0xe8ae,	// (0x0003c46f) main_sp_fs_ribbon_scheduler_pane_g1

0xe8b7,	// (0x0003c478) main_sp_fs_ribbon_scheduler_pane_g2

0xe8c0,	// (0x0003c481) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdd7,	// (0x0003d998) main_sp_fs_ribbon_scheduler_pane_g

0xe8c9,	// (0x0003c48a) list_cale_mrui_pane

0x8de2,	// (0x000369a3) sp_fs_scroll_pane_cp07_ParamLimits

0x8de2,	// (0x000369a3) sp_fs_scroll_pane_cp07

0x8dfe,	// (0x000369bf) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8dfe,	// (0x000369bf) bg_sp_fs_schedule_viewer_highlight

0xe8d6,	// (0x0003c497) list_single_sp_fs_schedule_track_pane_cp01

0xe8de,	// (0x0003c49f) list_sp_fs_schedule_track_pane

0xe8e6,	// (0x0003c4a7) sp_fs_scroll_pane_cp06_ParamLimits

0xe8e6,	// (0x0003c4a7) sp_fs_scroll_pane_cp06

0xc7c9,	// (0x0003a38a) bgmain_sp_fs_calendar_pane_g1

0x8e0e,	// (0x000369cf) list_single_cale_mrui_pane_ParamLimits

0x8e0e,	// (0x000369cf) list_single_cale_mrui_pane

0xe8f8,	// (0x0003c4b9) list_single_cale_mrui_row_pane_ParamLimits

0xe8f8,	// (0x0003c4b9) list_single_cale_mrui_row_pane

0xe905,	// (0x0003c4c6) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe905,	// (0x0003c4c6) list_single_cale_mrui_row_pane_g1

0xe94a,	// (0x0003c50b) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe94a,	// (0x0003c50b) list_single_cale_mrui_row_pane_t1

0x8e2f,	// (0x000369f0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8e2f,	// (0x000369f0) list_single_cale_mrui_row_pane_t2

0xe95c,	// (0x0003c51d) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe95c,	// (0x0003c51d) list_single_cale_mrui_row_pane_t3

0xe98b,	// (0x0003c54c) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe98b,	// (0x0003c54c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfde5,	// (0x0003d9a6) list_single_cale_mrui_row_pane_t_ParamLimits

0xfde5,	// (0x0003d9a6) list_single_cale_mrui_row_pane_t

0x8e97,	// (0x00036a58) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e97,	// (0x00036a58) list_single_cmail_header_editor_pane_bg_cp01

0x8ebd,	// (0x00036a7e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8ebd,	// (0x00036a7e) list_single_cmail_header_editor_pane_bg_cp02

0x8edd,	// (0x00036a9e) main_radioblah_text_pane_t1_ParamLimits

0x8edd,	// (0x00036a9e) main_radioblah_text_pane_t1

0xe9ba,	// (0x0003c57b) cam6_indi_pane_cp01

0xe9c2,	// (0x0003c583) cam6_mode_pane_cp01

0xe9ca,	// (0x0003c58b) cam6_pano_pane

0xe9d3,	// (0x0003c594) cam6_zoom_pane_cp01

0xe9db,	// (0x0003c59c) cam6_pano_image_pane

0xe9e6,	// (0x0003c5a7) cam6_pano_pane_g1

0xdfb5,	// (0x0003bb76) cam6_pano_pane_g2

0xe9ef,	// (0x0003c5b0) cam6_pano_pane_g3

0xe9f8,	// (0x0003c5b9) cam6_pano_pane_g4

0xcdf4,	// (0x0003a9b5) cam6_pano_pane_g5

0xea01,	// (0x0003c5c2) cam6_pano_pane_g6

0xea0b,	// (0x0003c5cc) cam6_pano_pane_g7

0xea13,	// (0x0003c5d4) cam6_pano_pane_g8

0xea1c,	// (0x0003c5dd) cam6_pano_pane_g9

0x0008,

0xfdee,	// (0x0003d9af) cam6_pano_pane_g

0x9bdb,	// (0x0003779c) main_browser_tag_pane

0xe750,	// (0x0003c311) grid_navstr_albumart_pane

0xea27,	// (0x0003c5e8) cell_navstr_albumart_pane_ParamLimits

0xea27,	// (0x0003c5e8) cell_navstr_albumart_pane

0xea47,	// (0x0003c608) cell_navstr_albumart_pane_g1

0xc192,	// (0x00039d53) cell_navstr_albumart_pane_g2

0xc1a2,	// (0x00039d63) cell_navstr_albumart_pane_g3

0xc19a,	// (0x00039d5b) cell_navstr_albumart_pane_g4

0x0003,

0x021d,	// (0x0002ddde) cell_navstr_albumart_pane_g

0x8ef8,	// (0x00036ab9) bt_list_pane_ParamLimits

0x8ef8,	// (0x00036ab9) bt_list_pane

0x8f0c,	// (0x00036acd) bt_list_pane_t1

0x8f1b,	// (0x00036adc) bt_list_pane_t2

0x0001,

0xfe01,	// (0x0003d9c2) bt_list_pane_t

0x9bdb,	// (0x0003779c) main_cale_prevew_pane

0x8f2a,	// (0x00036aeb) popup_cale_preview_window_ParamLimits

0x8f2a,	// (0x00036aeb) popup_cale_preview_window

0xa70e,	// (0x000382cf) bg_popup_preview_window_pane_cp05_ParamLimits

0xa70e,	// (0x000382cf) bg_popup_preview_window_pane_cp05

0xea4f,	// (0x0003c610) list_cale_preview_pane_ParamLimits

0xea4f,	// (0x0003c610) list_cale_preview_pane

0x8f43,	// (0x00036b04) list_double_cale_preview_pane_ParamLimits

0x8f43,	// (0x00036b04) list_double_cale_preview_pane

0xd2b6,	// (0x0003ae77) list_single_cale_preview_pane_ParamLimits

0xd2b6,	// (0x0003ae77) list_single_cale_preview_pane

0x8f55,	// (0x00036b16) list_single_cale_preview_pane_g1

0x8f5d,	// (0x00036b1e) list_single_cale_preview_pane_t1_ParamLimits

0x8f5d,	// (0x00036b1e) list_single_cale_preview_pane_t1

0x8f72,	// (0x00036b33) list_double_cale_preview_pane_g1

0x8f7a,	// (0x00036b3b) list_double_cale_preview_pane_t1_ParamLimits

0x8f7a,	// (0x00036b3b) list_double_cale_preview_pane_t1

0x8f8f,	// (0x00036b50) list_double_cale_preview_pane_t2_ParamLimits

0x8f8f,	// (0x00036b50) list_double_cale_preview_pane_t2

0x0001,

0xfe06,	// (0x0003d9c7) list_double_cale_preview_pane_t_ParamLimits

0xfe06,	// (0x0003d9c7) list_double_cale_preview_pane_t

0x9bdb,	// (0x0003779c) main_ezdial_pane

0xa70e,	// (0x000382cf) main_sp_fs_email_pane_ParamLimits

0x8520,	// (0x000360e1) cmail_ddmenu_btn01_pane_ParamLimits

0x8520,	// (0x000360e1) cmail_ddmenu_btn01_pane

0x8533,	// (0x000360f4) cmail_ddmenu_btn02_pane_ParamLimits

0x8533,	// (0x000360f4) cmail_ddmenu_btn02_pane

0x8556,	// (0x00036117) cmail_ddmenu_btn03_pane_ParamLimits

0x8556,	// (0x00036117) cmail_ddmenu_btn03_pane

0x857c,	// (0x0003613d) main_sp_fs_ctrlbar_pane_ParamLimits

0x85a0,	// (0x00036161) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8be4,	// (0x000367a5) list_cmail_body_pane_ParamLimits

0xe64d,	// (0x0003c20e) bg_button_pane_cp12

0xe662,	// (0x0003c223) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe662,	// (0x0003c223) list_single_cmail_header_detail_pane_g3

0xe6ab,	// (0x0003c26c) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe6ab,	// (0x0003c26c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd92,	// (0x0003d953) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd92,	// (0x0003d953) list_single_cmail_header_detail_pane_t

0xe7b8,	// (0x0003c379) phacti_term_pane_t2_ParamLimits

0xe7b8,	// (0x0003c379) phacti_term_pane_t2

0x0001,

0xfd9c,	// (0x0003d95d) phacti_term_pane_t_ParamLimits

0xfd9c,	// (0x0003d95d) phacti_term_pane_t

0xea5b,	// (0x0003c61c) aid_size_list_single_double

0x8fa7,	// (0x00036b68) popup_ezdial_listscroll_window

0x8fc3,	// (0x00036b84) popup_number_entry_window_cp01

0xa509,	// (0x000380ca) bg_popup_call_pane_cp09

0xea67,	// (0x0003c628) ezdial_list_pane

0xea6f,	// (0x0003c630) scroll_pane_cp23

0xc3c1,	// (0x00039f82) bg_button_pane_cp028_ParamLimits

0xc3c1,	// (0x00039f82) bg_button_pane_cp028

0x8fd1,	// (0x00036b92) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8fd1,	// (0x00036b92) cmail_ddmenu_btn01_pane_g1

0x8fdd,	// (0x00036b9e) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8fdd,	// (0x00036b9e) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe0b,	// (0x0003d9cc) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe0b,	// (0x0003d9cc) cmail_ddmenu_btn01_pane_g

0xea77,	// (0x0003c638) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea77,	// (0x0003c638) cmail_ddmenu_btn01_pane_t1

0xc3c1,	// (0x00039f82) bg_button_pane_cp029_ParamLimits

0xc3c1,	// (0x00039f82) bg_button_pane_cp029

0x8fe9,	// (0x00036baa) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fe9,	// (0x00036baa) cmail_ddmenu_btn02_pane_g1

0x9002,	// (0x00036bc3) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9002,	// (0x00036bc3) cmail_ddmenu_btn02_pane_t1

0xa70e,	// (0x000382cf) bg_button_pane_cp031_ParamLimits

0xa70e,	// (0x000382cf) bg_button_pane_cp031

0x8fe9,	// (0x00036baa) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fe9,	// (0x00036baa) cmail_ddmenu_btn03_pane_g1

0x9002,	// (0x00036bc3) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9002,	// (0x00036bc3) cmail_ddmenu_btn03_pane_t1

0x64ba,	// (0x0003407b) cell_dialer2_keypad_pane_t1_ParamLimits

0x64d4,	// (0x00034095) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x64d4,	// (0x00034095) cell_dialer2_keypad_pane_t1_copy1

0x7d42,	// (0x00035903) ncimui_group_button_pane

0xa70e,	// (0x000382cf) main_sp_fs_calendar_pane_ParamLimits

0x8bf9,	// (0x000367ba) list_single_cmail_header_caption_pane_ParamLimits

0xe7fb,	// (0x0003c3bc) aid_recal_txt_sm_pane

0x9bdb,	// (0x0003779c) mian_recal_day_pane

0xe834,	// (0x0003c3f5) popup_sp_fs_cale_preview_window_ParamLimits

0xea8c,	// (0x0003c64d) list_recal_day_pane

0xeae9,	// (0x0003c6aa) list_single_recal_day_pane_ParamLimits

0xeae9,	// (0x0003c6aa) list_single_recal_day_pane

0xeafb,	// (0x0003c6bc) list_single_recal_day_pane_g1_ParamLimits

0xeafb,	// (0x0003c6bc) list_single_recal_day_pane_g1

0xeb07,	// (0x0003c6c8) list_single_recal_day_pane_g2_ParamLimits

0xeb07,	// (0x0003c6c8) list_single_recal_day_pane_g2

0xeb13,	// (0x0003c6d4) list_single_recal_day_pane_g3_ParamLimits

0xeb13,	// (0x0003c6d4) list_single_recal_day_pane_g3

0x9026,	// (0x00036be7) list_single_recal_day_pane_g4_ParamLimits

0x9026,	// (0x00036be7) list_single_recal_day_pane_g4

0xeb1f,	// (0x0003c6e0) list_single_recal_day_pane_g5_ParamLimits

0xeb1f,	// (0x0003c6e0) list_single_recal_day_pane_g5

0xeb2b,	// (0x0003c6ec) list_single_recal_day_pane_g6_ParamLimits

0xeb2b,	// (0x0003c6ec) list_single_recal_day_pane_g6

0x0004,

0xfe1a,	// (0x0003d9db) list_single_recal_day_pane_g_ParamLimits

0xfe1a,	// (0x0003d9db) list_single_recal_day_pane_g

0xeb3f,	// (0x0003c700) list_single_recal_day_pane_t1

0xeb51,	// (0x0003c712) list_single_recal_day_pane_t2

0x0001,

0x024a,	// (0x0002de0b) list_single_recal_day_pane_t

0x903e,	// (0x00036bff) ncimui_query_button_pane_ParamLimits

0x903e,	// (0x00036bff) ncimui_query_button_pane

0x904e,	// (0x00036c0f) ncimui_query_button_pane_t1_ParamLimits

0x904e,	// (0x00036c0f) ncimui_query_button_pane_t1

0xeb63,	// (0x0003c724) ncimui_query_button_pane_t2_ParamLimits

0xeb63,	// (0x0003c724) ncimui_query_button_pane_t2

0x0001,

0xfe25,	// (0x0003d9e6) ncimui_query_button_pane_t_ParamLimits

0xfe25,	// (0x0003d9e6) ncimui_query_button_pane_t

0x9061,	// (0x00036c22) query_button_pane_ParamLimits

0x9061,	// (0x00036c22) query_button_pane

0x9bdb,	// (0x0003779c) bg_button_pane_cp0028

0xeb76,	// (0x0003c737) query_button_pane_t1

0x0851,	// (0x0002e412) main_tport_pane_ParamLimits

0x8aa8,	// (0x00036669) bg_popup_window_pane_cp01_ParamLimits

0x8aa8,	// (0x00036669) bg_popup_window_pane_cp01

0x8ac3,	// (0x00036684) heading_pane_cp08_ParamLimits

0x8ac3,	// (0x00036684) heading_pane_cp08

0x8ad6,	// (0x00036697) heading_pane_cp07_ParamLimits

0x8ad6,	// (0x00036697) heading_pane_cp07

0x8b7d,	// (0x0003673e) cell_tport_appsw_pane_g2

0x0002,

0xfd7f,	// (0x0003d940) cell_tport_appsw_pane_g

0x411b,	// (0x00031cdc) input_candi_list_open_g1

0xa951,	// (0x00038512) list_cale_time_pane_g6_ParamLimits

0xa951,	// (0x00038512) list_cale_time_pane_g6

0x52cd,	// (0x00032e8e) aid_size_touch_calib_1_ParamLimits

0x52cd,	// (0x00032e8e) aid_size_touch_calib_1

0x52df,	// (0x00032ea0) aid_size_touch_calib_2_ParamLimits

0x52df,	// (0x00032ea0) aid_size_touch_calib_2

0x52f7,	// (0x00032eb8) aid_size_touch_calib_3_ParamLimits

0x52f7,	// (0x00032eb8) aid_size_touch_calib_3

0x5315,	// (0x00032ed6) aid_size_touch_calib_4_ParamLimits

0x5315,	// (0x00032ed6) aid_size_touch_calib_4

0x532d,	// (0x00032eee) main_touch_calib_button_group_pane_ParamLimits

0x532d,	// (0x00032eee) main_touch_calib_button_group_pane

0x5345,	// (0x00032f06) main_touch_calib_pane_g1_ParamLimits

0x5357,	// (0x00032f18) main_touch_calib_pane_g2_ParamLimits

0x5369,	// (0x00032f2a) main_touch_calib_pane_g3_ParamLimits

0x537b,	// (0x00032f3c) main_touch_calib_pane_g4_ParamLimits

0xf764,	// (0x0003d325) main_touch_calib_pane_g_ParamLimits

0x538d,	// (0x00032f4e) main_touch_calib_pane_t1_ParamLimits

0x53a7,	// (0x00032f68) main_touch_calib_pane_t2_ParamLimits

0x53c1,	// (0x00032f82) main_touch_calib_pane_t3_ParamLimits

0x53d5,	// (0x00032f96) main_touch_calib_pane_t4_ParamLimits

0x53e9,	// (0x00032faa) main_touch_calib_pane_t5_ParamLimits

0xf76d,	// (0x0003d32e) main_touch_calib_pane_t_ParamLimits

0xcb97,	// (0x0003a758) list_single_fp_cale_pane_g3_ParamLimits

0xcb97,	// (0x0003a758) list_single_fp_cale_pane_g3

0x1cd1,	// (0x0002f892) bg_button_pane_cp012_ParamLimits

0x1cd1,	// (0x0002f892) bg_vkb2_func_pane_cp03_ParamLimits

0x1a59,	// (0x0002f61a) cell_vitu2_function_top_pane_g1_ParamLimits

0x1cd1,	// (0x0002f892) bg_vkb2_func_pane_cp04_ParamLimits

0x7ccd,	// (0x0003588e) main_ncimui_button_group_pane_ParamLimits

0x7ccd,	// (0x0003588e) main_ncimui_button_group_pane

0x7d2d,	// (0x000358ee) main_ncimui_pane_t3_ParamLimits

0x7d2d,	// (0x000358ee) main_ncimui_pane_t3

0xe766,	// (0x0003c327) phacti_button_group_pane

0xea5b,	// (0x0003c61c) aid_size_list_single_double_ParamLimits

0x8fa7,	// (0x00036b68) popup_ezdial_listscroll_window_ParamLimits

0x8fc3,	// (0x00036b84) popup_number_entry_window_cp01_ParamLimits

0x9074,	// (0x00036c35) phacti_button_pane_ParamLimits

0x9074,	// (0x00036c35) phacti_button_pane

0x9bdb,	// (0x0003779c) bg_button_pane_cp14

0xeb84,	// (0x0003c745) phacti_button_pane_t1

0x9085,	// (0x00036c46) main_touch_calib_button_pane_ParamLimits

0x9085,	// (0x00036c46) main_touch_calib_button_pane

0xa324,	// (0x00037ee5) bg_button_pane_cp18_ParamLimits

0xa324,	// (0x00037ee5) bg_button_pane_cp18

0xeb92,	// (0x0003c753) main_touch_calib_button_pane_t1_ParamLimits

0xeb92,	// (0x0003c753) main_touch_calib_button_pane_t1

0xeba8,	// (0x0003c769) main_touch_calib_button_pane_t2_ParamLimits

0xeba8,	// (0x0003c769) main_touch_calib_button_pane_t2

0x0001,

0x0254,	// (0x0002de15) main_touch_calib_button_pane_t_ParamLimits

0x0254,	// (0x0002de15) main_touch_calib_button_pane_t

0x9bdb,	// (0x0003779c) cell_ncimui_button_pane

0x9bdb,	// (0x0003779c) bg_button_pane_cp032

0xebc6,	// (0x0003c787) cell_ncimui_button_pane_t1

0x64f1,	// (0x000340b2) image3_infobar_pane_ParamLimits

0x64f1,	// (0x000340b2) image3_infobar_pane

0x8150,	// (0x00035d11) fs_bigclock_status_pane_ParamLimits

0x8150,	// (0x00035d11) fs_bigclock_status_pane

0x815d,	// (0x00035d1e) main_fs_bigclock_clock_pane_ParamLimits

0x815d,	// (0x00035d1e) main_fs_bigclock_clock_pane

0x817b,	// (0x00035d3c) main_fs_bigclock_indi_pane_ParamLimits

0x817b,	// (0x00035d3c) main_fs_bigclock_indi_pane

0x81ad,	// (0x00035d6e) main_fs_bigclock_swipe_pane_ParamLimits

0x81ad,	// (0x00035d6e) main_fs_bigclock_swipe_pane

0x9bdb,	// (0x0003779c) main_fs_clock_dumped_data

0xe0c2,	// (0x0003bc83) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe0c2,	// (0x0003bc83) list_single_fs_bigclock_indicator_pane_g1

0xe0de,	// (0x0003bc9f) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe0de,	// (0x0003bc9f) list_single_fs_bigclock_indicator_pane_g2

0xe0f8,	// (0x0003bcb9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe0f8,	// (0x0003bcb9) list_single_fs_bigclock_indicator_pane_g3

0xe112,	// (0x0003bcd3) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe112,	// (0x0003bcd3) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc65,	// (0x0003d826) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc65,	// (0x0003d826) list_single_fs_bigclock_indicator_pane_g

0xe13d,	// (0x0003bcfe) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe13d,	// (0x0003bcfe) list_single_fs_bigclock_indicator_pane_t1

0xe165,	// (0x0003bd26) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe165,	// (0x0003bd26) list_single_fs_bigclock_indicator_pane_t2

0xe18d,	// (0x0003bd4e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe18d,	// (0x0003bd4e) list_single_fs_bigclock_indicator_pane_t3

0xe1b5,	// (0x0003bd76) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe1b5,	// (0x0003bd76) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc70,	// (0x0003d831) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc70,	// (0x0003d831) list_single_fs_bigclock_indicator_pane_t

0xebd4,	// (0x0003c795) image3_infobar_fav_pane_ParamLimits

0xebd4,	// (0x0003c795) image3_infobar_fav_pane

0xebe4,	// (0x0003c7a5) image3_infobar_loc_pane_ParamLimits

0xebe4,	// (0x0003c7a5) image3_infobar_loc_pane

0xebf8,	// (0x0003c7b9) image3_infobar_time_pane_ParamLimits

0xebf8,	// (0x0003c7b9) image3_infobar_time_pane

0xc7c9,	// (0x0003a38a) image3_infobar_time_pane_g1

0xec08,	// (0x0003c7c9) image3_infobar_time_pane_t1

0xc7c9,	// (0x0003a38a) image3_infobar_loc_pane_g1

0xec16,	// (0x0003c7d7) image3_infobar_loc_pane_g2

0x0001,

0x0259,	// (0x0002de1a) image3_infobar_loc_pane_g

0xec1e,	// (0x0003c7df) image3_infobar_loc_pane_t1

0xc7c9,	// (0x0003a38a) image3_infobar_fav_pane_g1

0xec2c,	// (0x0003c7ed) image3_infobar_fav_pane_g2

0x0001,

0x025e,	// (0x0002de1f) image3_infobar_fav_pane_g

0xec34,	// (0x0003c7f5) fs_bigclock_status_battery_pane

0xec3d,	// (0x0003c7fe) fs_bigclock_status_signal_pane

0xec46,	// (0x0003c807) fs_bigclock_status_title_pane

0xec4f,	// (0x0003c810) fs_bigclock_status_signal_pane_g1

0xec58,	// (0x0003c819) fs_bigclock_status_signal_pane_g2

0x0001,

0x0263,	// (0x0002de24) fs_bigclock_status_signal_pane_g

0xec60,	// (0x0003c821) fs_bigclock_status_battery_pane_g1

0xec69,	// (0x0003c82a) fs_bigclock_status_battery_pane_g2

0x0001,

0x0268,	// (0x0002de29) fs_bigclock_status_battery_pane_g

0xec71,	// (0x0003c832) fs_bigclock_status_title_pane_t1

0x909a,	// (0x00036c5b) main_fs_bigclock_clock_pane_g1

0x909a,	// (0x00036c5b) main_fs_bigclock_clock_pane_g2

0x90ab,	// (0x00036c6c) main_fs_bigclock_clock_pane_g3

0x90ab,	// (0x00036c6c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe2a,	// (0x0003d9eb) main_fs_bigclock_clock_pane_g

0x90be,	// (0x00036c7f) main_fs_bigclock_clock_pane_t1

0x90d4,	// (0x00036c95) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe33,	// (0x0003d9f4) main_fs_bigclock_clock_pane_t

0xec7f,	// (0x0003c840) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec7f,	// (0x0003c840) list_single_fs_bigclock_indicator_pane

0xec90,	// (0x0003c851) list_single_fs_bigclock_pane_ParamLimits

0xec90,	// (0x0003c851) list_single_fs_bigclock_pane

0xecb6,	// (0x0003c877) main_fs_bigclock_indicator_pane_t1

0xecc5,	// (0x0003c886) list_single_fs_bigclock_pane_g1

0xeccd,	// (0x0003c88e) list_single_fs_bigclock_pane_t1

0xc7c9,	// (0x0003a38a) main_fs_bigclock_swipe_pane_g1

0xed10,	// (0x0003c8d1) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0287,	// (0x0002de48) main_fs_bigclock_swipe_pane_g

0xed18,	// (0x0003c8d9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed18,	// (0x0003c8d9) main_fs_bigclock_swipe_pane_t1

0x3989,	// (0x0003154a) call_type_pane_ParamLimits

0x9bdb,	// (0x0003779c) main_btmg_pane

0xe931,	// (0x0003c4f2) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe931,	// (0x0003c4f2) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdde,	// (0x0003d99f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdde,	// (0x0003d99f) list_single_cale_mrui_row_pane_g

0xeab5,	// (0x0003c676) list_recal_vselct_arw_lo_pane

0xeabd,	// (0x0003c67e) list_recal_vselct_arw_up_pane

0xeac5,	// (0x0003c686) list_recal_vselct_pane

0x912e,	// (0x00036cef) btmg_button_pane

0x9138,	// (0x00036cf9) main_btmg_pane_g1

0x9bdb,	// (0x0003779c) bg_button_pane_cp044

0xed35,	// (0x0003c8f6) btmg_button_pane_t1

0xc3ad,	// (0x00039f6e) aid_listscroll_gen

0xa70e,	// (0x000382cf) main_cntbar_detail_pane

0xe62f,	// (0x0003c1f0) list_cmail_folder_pane

0xc8fd,	// (0x0003a4be) sp_fs_scroll_pane_cp03_ParamLimits

0x9142,	// (0x00036d03) list_single_fs_dyc_pane_cp01_ParamLimits

0x9142,	// (0x00036d03) list_single_fs_dyc_pane_cp01

0xed43,	// (0x0003c904) aid_size_cmail_indent

0xed4c,	// (0x0003c90d) list_single_dyc_row_pane_cp01

0x918b,	// (0x00036d4c) cntbar_detail_list_pane_ParamLimits

0x918b,	// (0x00036d4c) cntbar_detail_list_pane

0x91d7,	// (0x00036d98) main_cntbar_detail_cont_pane_ParamLimits

0x91d7,	// (0x00036d98) main_cntbar_detail_cont_pane

0xc8fd,	// (0x0003a4be) scroll_pane_cp032_ParamLimits

0xc8fd,	// (0x0003a4be) scroll_pane_cp032

0x91eb,	// (0x00036dac) cntbar_detail_list_event_pane_ParamLimits

0x91eb,	// (0x00036dac) cntbar_detail_list_event_pane

0x919b,	// (0x00036d5c) cntbar_detail_list_shct_pane

0xa7dc,	// (0x0003839d) aid_list_gen

0xed55,	// (0x0003c916) aid_scroll

0xed5e,	// (0x0003c91f) aid_size_touch_scroll_bar

0x74e9,	// (0x000350aa) aid_list_double

0x74d7,	// (0x00035098) aid_list_single

0x74d7,	// (0x00035098) aid_list_single_lg

0x91fb,	// (0x00036dbc) aid_list_z_g_a_sm

0x9203,	// (0x00036dc4) aid_list_z_g_d

0x920b,	// (0x00036dcc) aid_txt_z_prm

0x9219,	// (0x00036dda) aid_txt_z_prm_cp01

0x9227,	// (0x00036de8) aid_txt_z_sec

0x9235,	// (0x00036df6) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9235,	// (0x00036df6) main_cntbar_detail_cont_pane_g1

0x9249,	// (0x00036e0a) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9249,	// (0x00036e0a) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe3f,	// (0x0003da00) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe3f,	// (0x0003da00) main_cntbar_detail_cont_pane_g

0xed67,	// (0x0003c928) main_cntbar_detail_cont_pane_t1

0xed75,	// (0x0003c936) main_cntbar_detail_cont_pane_t2

0xed83,	// (0x0003c944) main_cntbar_detail_cont_pane_t3

0x0002,

0x0291,	// (0x0002de52) main_cntbar_detail_cont_pane_t

0x9259,	// (0x00036e1a) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9259,	// (0x00036e1a) cell_cntbar_detail_list_shct_pane

0xed91,	// (0x0003c952) cntbar_detail_list_shct_pane_g1

0xed9a,	// (0x0003c95b) cntbar_detail_list_shct_pane_g2

0x0001,

0x0298,	// (0x0002de59) cntbar_detail_list_shct_pane_g

0x926d,	// (0x00036e2e) cntbar_detail_list_event_pane_g1_ParamLimits

0x926d,	// (0x00036e2e) cntbar_detail_list_event_pane_g1

0x9279,	// (0x00036e3a) cntbar_detail_list_event_pane_g2_ParamLimits

0x9279,	// (0x00036e3a) cntbar_detail_list_event_pane_g2

0x0005,

0xfe44,	// (0x0003da05) cntbar_detail_list_event_pane_g_ParamLimits

0xfe44,	// (0x0003da05) cntbar_detail_list_event_pane_g

0x92e5,	// (0x00036ea6) cntbar_detail_list_event_pane_t1_ParamLimits

0x92e5,	// (0x00036ea6) cntbar_detail_list_event_pane_t1

0x92fa,	// (0x00036ebb) cntbar_detail_list_event_pane_t2_ParamLimits

0x92fa,	// (0x00036ebb) cntbar_detail_list_event_pane_t2

0x0002,

0xfe51,	// (0x0003da12) cntbar_detail_list_event_pane_t_ParamLimits

0xfe51,	// (0x0003da12) cntbar_detail_list_event_pane_t

0xc7c9,	// (0x0003a38a) cell_cntbar_detail_list_shct_pane_g1

0xaf28,	// (0x00038ae9) navi_pane_mv_g3

0xa70e,	// (0x000382cf) main_cntbar_detail_pane_ParamLimits

0x9bdb,	// (0x0003779c) main_notif_wgt_pane

0x6263,	// (0x00033e24) aid_tch_main_mp4_pane_g4

0x6445,	// (0x00034006) popup_slider_window_cp02

0xeaab,	// (0x0003c66c) list_recal_day_event_pane

0x9159,	// (0x00036d1a) cntbar_detail_btn_pane_ParamLimits

0x9159,	// (0x00036d1a) cntbar_detail_btn_pane

0x9172,	// (0x00036d33) cntbar_detail_btn_pane_cp01_ParamLimits

0x9172,	// (0x00036d33) cntbar_detail_btn_pane_cp01

0x919b,	// (0x00036d5c) cntbar_detail_list_shct_pane_ParamLimits

0x91ab,	// (0x00036d6c) cntbar_detail_pane_g1_ParamLimits

0x91ab,	// (0x00036d6c) cntbar_detail_pane_g1

0x91bb,	// (0x00036d7c) cntbar_detail_pane_t1_ParamLimits

0x91bb,	// (0x00036d7c) cntbar_detail_pane_t1

0x9285,	// (0x00036e46) cntbar_detail_list_event_pane_g3_ParamLimits

0x9285,	// (0x00036e46) cntbar_detail_list_event_pane_g3

0x929d,	// (0x00036e5e) cntbar_detail_list_event_pane_g4_ParamLimits

0x929d,	// (0x00036e5e) cntbar_detail_list_event_pane_g4

0x92b5,	// (0x00036e76) cntbar_detail_list_event_pane_g5_ParamLimits

0x92b5,	// (0x00036e76) cntbar_detail_list_event_pane_g5

0x92cd,	// (0x00036e8e) cntbar_detail_list_event_pane_g6_ParamLimits

0x92cd,	// (0x00036e8e) cntbar_detail_list_event_pane_g6

0x930f,	// (0x00036ed0) cntbar_detail_list_event_pane_t3_ParamLimits

0x930f,	// (0x00036ed0) cntbar_detail_list_event_pane_t3

0x9321,	// (0x00036ee2) popup_notif_wgt_window_ParamLimits

0x9321,	// (0x00036ee2) popup_notif_wgt_window

0x933a,	// (0x00036efb) popup_submenu_window_cp01_ParamLimits

0x933a,	// (0x00036efb) popup_submenu_window_cp01

0xa509,	// (0x000380ca) bg_popup_window_pane_cp10

0xeda3,	// (0x0003c964) listscroll_notif_wgt_pane

0xedb5,	// (0x0003c976) list_notif_wgt_window

0xedbe,	// (0x0003c97f) scroll_pane_cp033

0x934c,	// (0x00036f0d) list_notif_wgt_row_pane_ParamLimits

0x934c,	// (0x00036f0d) list_notif_wgt_row_pane

0xedc7,	// (0x0003c988) aid_size_list_notif_wgt_del

0xedd4,	// (0x0003c995) list_notif_wgt_row_pane_g1

0xede0,	// (0x0003c9a1) list_notif_wgt_row_pane_g2

0xedef,	// (0x0003c9b0) list_notif_wgt_row_pane_g3

0x0002,

0x02b1,	// (0x0002de72) list_notif_wgt_row_pane_g

0xedfc,	// (0x0003c9bd) list_notif_wgt_row_pane_t1

0xee12,	// (0x0003c9d3) list_notif_wgt_row_pane_t2

0xee24,	// (0x0003c9e5) list_notif_wgt_row_pane_t3

0x0002,

0x02b8,	// (0x0002de79) list_notif_wgt_row_pane_t

0xd510,	// (0x0003b0d1) list_recal_day_event_pane_g1

0xee36,	// (0x0003c9f7) list_recal_day_event_pane_t1

0x9bdb,	// (0x0003779c) bg_button_pane_cp045

0x935c,	// (0x00036f1d) cntbar_detail_btn_pane_t1

0xc3c1,	// (0x00039f82) main_callh_pane_ParamLimits

0xc3c1,	// (0x00039f82) main_callh_pane

0x9bdb,	// (0x0003779c) main_coverflow0_pane

0x9bdb,	// (0x0003779c) main_wgtman_pane

0x81c5,	// (0x00035d86) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x81c5,	// (0x00035d86) main_fs_bigclock_unlock_btn_pane

0x8b75,	// (0x00036736) bg_button_pane_cp16

0x8b85,	// (0x00036746) cell_tport_appsw_pane_g3

0x936a,	// (0x00036f2b) cf0_flow_pane_ParamLimits

0x936a,	// (0x00036f2b) cf0_flow_pane

0xee45,	// (0x0003ca06) listscroll_cf0_pane

0xee50,	// (0x0003ca11) main_cf0_pane_g1

0x937f,	// (0x00036f40) main_cf0_pane_t1_ParamLimits

0x937f,	// (0x00036f40) main_cf0_pane_t1

0x9396,	// (0x00036f57) main_cf0_pane_t2_ParamLimits

0x9396,	// (0x00036f57) main_cf0_pane_t2

0x0001,

0xfe58,	// (0x0003da19) main_cf0_pane_t_ParamLimits

0xfe58,	// (0x0003da19) main_cf0_pane_t

0xee62,	// (0x0003ca23) scroll_pane_cp11

0x93ad,	// (0x00036f6e) cf0_flow_pane_g1

0x93b5,	// (0x00036f76) cf0_flow_pane_g2

0x0001,

0xfe5d,	// (0x0003da1e) cf0_flow_pane_g

0x93bd,	// (0x00036f7e) cf0_flow_pane_t1

0x9bdb,	// (0x0003779c) main_call6_pane

0x9bdb,	// (0x0003779c) main_calllock_pane

0x1b8e,	// (0x0002f74f) call6_btn_grp_pane_ParamLimits

0x1b8e,	// (0x0002f74f) call6_btn_grp_pane

0x1ba8,	// (0x0002f769) call6_pane_g1_ParamLimits

0x1ba8,	// (0x0002f769) call6_pane_g1

0x1bbe,	// (0x0002f77f) popup_call6_1st_window_ParamLimits

0x1bbe,	// (0x0002f77f) popup_call6_1st_window

0x1bcf,	// (0x0002f790) popup_call6_2nd_window_ParamLimits

0x1bcf,	// (0x0002f790) popup_call6_2nd_window

0x1be0,	// (0x0002f7a1) cell_call6_btn_pane_ParamLimits

0x1be0,	// (0x0002f7a1) cell_call6_btn_pane

0xa509,	// (0x000380ca) bg_popup_call2_in_pane_cp03

0xee6d,	// (0x0003ca2e) popup_call6_1st_window_g1

0xee75,	// (0x0003ca36) popup_call6_1st_window_g2

0xee7d,	// (0x0003ca3e) popup_call6_1st_window_g3

0x0002,

0x02ce,	// (0x0002de8f) popup_call6_1st_window_g

0xee85,	// (0x0003ca46) popup_call6_1st_window_t1

0xee94,	// (0x0003ca55) popup_call6_1st_window_t2

0xeea2,	// (0x0003ca63) popup_call6_1st_window_t3

0x0002,

0x02d5,	// (0x0002de96) popup_call6_1st_window_t

0xa509,	// (0x000380ca) bg_popup_call2_in_pane_cp04

0xee6d,	// (0x0003ca2e) popup_call6_2nd_window_g1

0xee75,	// (0x0003ca36) popup_call6_2nd_window_g2

0xee7d,	// (0x0003ca3e) popup_call6_2nd_window_g3

0x0002,

0x02ce,	// (0x0002de8f) popup_call6_2nd_window_g

0xee85,	// (0x0003ca46) popup_call6_2nd_window_t1

0x1ceb,	// (0x0002f8ac) bg_button_pane_cp15

0x93cb,	// (0x00036f8c) cell_call6_btn_pane_g1

0x93d4,	// (0x00036f95) cell_call6_btn_pane_t1

0x93e3,	// (0x00036fa4) listscroll_wgtman_pane_ParamLimits

0x93e3,	// (0x00036fa4) listscroll_wgtman_pane

0x9404,	// (0x00036fc5) wgtman_btn_pane_ParamLimits

0x9404,	// (0x00036fc5) wgtman_btn_pane

0xad3c,	// (0x000388fd) aid_scroll_copy1

0xeeb0,	// (0x0003ca71) list_wgtman_pane

0x9447,	// (0x00037008) wgtman_btn_pane_g1_ParamLimits

0x9447,	// (0x00037008) wgtman_btn_pane_g1

0x9473,	// (0x00037034) wgtman_btn_pane_t1_ParamLimits

0x9473,	// (0x00037034) wgtman_btn_pane_t1

0xeeba,	// (0x0003ca7b) wgtman_btn_pane_t2_ParamLimits

0xeeba,	// (0x0003ca7b) wgtman_btn_pane_t2

0x0001,

0xfe62,	// (0x0003da23) wgtman_btn_pane_t_ParamLimits

0xfe62,	// (0x0003da23) wgtman_btn_pane_t

0x94b0,	// (0x00037071) listrow_wgtman_pane_ParamLimits

0x94b0,	// (0x00037071) listrow_wgtman_pane

0x94c2,	// (0x00037083) listrow_wgtman_pane_g1

0x94cf,	// (0x00037090) listrow_wgtman_pane_g2

0x0001,

0xfe67,	// (0x0003da28) listrow_wgtman_pane_g

0x94ed,	// (0x000370ae) listrow_wgtman_pane_t1

0x9505,	// (0x000370c6) listrow_wgtman_pane_t2

0x0001,

0xfe6c,	// (0x0003da2d) listrow_wgtman_pane_t

0x952b,	// (0x000370ec) wait_bar_pane_cp09

0xeed1,	// (0x0003ca92) main_calllock_btn_pane

0xeedb,	// (0x0003ca9c) main_calllock_pane_g1

0x9bdb,	// (0x0003779c) bg_button_pane_cp17

0xeee7,	// (0x0003caa8) main_calllock_btn_pane_g1

0xeef0,	// (0x0003cab1) main_calllock_btn_pane_t1

0x9bdb,	// (0x0003779c) main_dialer3_pane

0x9bdb,	// (0x0003779c) main_fmrd2_pane

0xc7c9,	// (0x0003a38a) main_fs_bigclock_unlock_btn_pane_g1

0x9545,	// (0x00037106) main_fs_bigclock_unlock_btn_pane_t1

0x9553,	// (0x00037114) area_fmrd2_info_pane_ParamLimits

0x9553,	// (0x00037114) area_fmrd2_info_pane

0x9564,	// (0x00037125) area_fmrd2_visual_pane_ParamLimits

0x9564,	// (0x00037125) area_fmrd2_visual_pane

0x9572,	// (0x00037133) fmrd2_indi_pane_ParamLimits

0x9572,	// (0x00037133) fmrd2_indi_pane

0x957f,	// (0x00037140) area_fmrd2_visual_pane_g1

0x9587,	// (0x00037148) area_fmrd2_visual_pane_t1

0x9597,	// (0x00037158) area_fmrd2_visual_pane_t2

0x95a7,	// (0x00037168) area_fmrd2_visual_pane_t3

0x0002,

0xfe76,	// (0x0003da37) area_fmrd2_visual_pane_t

0x95b7,	// (0x00037178) area_fmrd2_info_pane_g1

0x95bf,	// (0x00037180) area_fmrd2_info_pane_t1

0x95cf,	// (0x00037190) area_fmrd2_info_pane_t2

0x95df,	// (0x000371a0) area_fmrd2_info_pane_t3

0x95ef,	// (0x000371b0) area_fmrd2_info_pane_t4

0x0003,

0xfe7d,	// (0x0003da3e) area_fmrd2_info_pane_t

0x95fd,	// (0x000371be) fmrd2_indi_pane_t1

0x960d,	// (0x000371ce) fmrd2_indi_pane_t2

0x961d,	// (0x000371de) fmrd2_indi_pane_t3

0x0002,

0xfe86,	// (0x0003da47) fmrd2_indi_pane_t

0xe121,	// (0x0003bce2) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe121,	// (0x0003bce2) list_single_fs_bigclock_indicator_pane_g5

0xe1d2,	// (0x0003bd93) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe1d2,	// (0x0003bd93) list_single_fs_bigclock_indicator_pane_t5

0x8d12,	// (0x000368d3) aid_cell_bcale_month_pane_ParamLimits

0x8d12,	// (0x000368d3) aid_cell_bcale_month_pane

0x8d30,	// (0x000368f1) bcale_month_pane_ParamLimits

0x8d30,	// (0x000368f1) bcale_month_pane

0x8d54,	// (0x00036915) bcale_preview_pane_ParamLimits

0x8d54,	// (0x00036915) bcale_preview_pane

0xeccd,	// (0x0003c88e) list_single_fs_bigclock_pane_t1_ParamLimits

0xecec,	// (0x0003c8ad) list_single_fs_bigclock_pane_t2_ParamLimits

0xecec,	// (0x0003c8ad) list_single_fs_bigclock_pane_t2

0x0001,

0x0282,	// (0x0002de43) list_single_fs_bigclock_pane_t_ParamLimits

0x0282,	// (0x0002de43) list_single_fs_bigclock_pane_t

0x953d,	// (0x000370fe) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe71,	// (0x0003da32) main_fs_bigclock_unlock_btn_pane_g

0x962d,	// (0x000371ee) aid_dia3_key_size_ParamLimits

0x962d,	// (0x000371ee) aid_dia3_key_size

0x963c,	// (0x000371fd) aid_dia3_listrow_size_ParamLimits

0x963c,	// (0x000371fd) aid_dia3_listrow_size

0x9651,	// (0x00037212) dia3_keypad_fun_pane_ParamLimits

0x9651,	// (0x00037212) dia3_keypad_fun_pane

0x966d,	// (0x0003722e) dia3_keypad_num_pane_ParamLimits

0x966d,	// (0x0003722e) dia3_keypad_num_pane

0x9688,	// (0x00037249) dia3_listscroll_pane_ParamLimits

0x9688,	// (0x00037249) dia3_listscroll_pane

0x969b,	// (0x0003725c) dia3_numentry_pane_ParamLimits

0x969b,	// (0x0003725c) dia3_numentry_pane

0xeeff,	// (0x0003cac0) dia3_list_pane

0xef0a,	// (0x0003cacb) scroll_pane_cp12

0x9bdb,	// (0x0003779c) bg_dia3_numentry_pane

0x96af,	// (0x00037270) dia3_numentry_pane_t1

0x96be,	// (0x0003727f) cell_dia3_key_num_pane

0x96c6,	// (0x00037287) cell_dia3_key0_fun_pane_ParamLimits

0x96c6,	// (0x00037287) cell_dia3_key0_fun_pane

0x96da,	// (0x0003729b) cell_dia3_key1_fun_pane_ParamLimits

0x96da,	// (0x0003729b) cell_dia3_key1_fun_pane

0x96f2,	// (0x000372b3) dia3_listrow_pane

0xde62,	// (0x0003ba23) bg_dia3_numentry_pane_g1

0x9bdb,	// (0x0003779c) bg_button_pane_cp21

0xef15,	// (0x0003cad6) cell_dia3_key_num_pane_t1

0xef23,	// (0x0003cae4) cell_dia3_key_num_pane_t2

0xef32,	// (0x0003caf3) cell_dia3_key_num_pane_t3

0xef41,	// (0x0003cb02) cell_dia3_key_num_pane_t4

0x0003,

0xfe8d,	// (0x0003da4e) cell_dia3_key_num_pane_t

0x9bdb,	// (0x0003779c) bg_button_pane_cp19

0x9704,	// (0x000372c5) cell_dia3_key0_fun_pane_g1

0x9bdb,	// (0x0003779c) bg_button_pane_cp20

0x970c,	// (0x000372cd) cell_dia3_key1_fun_pane_g1

0x9714,	// (0x000372d5) area_left_week_number_pane

0x9720,	// (0x000372e1) area_top_day_name_pane

0x9733,	// (0x000372f4) frame_month_view_pane

0xef50,	// (0x0003cb11) grid_month_view_pane

0x9746,	// (0x00037307) cell_top_day_name_pane_ParamLimits

0x9746,	// (0x00037307) cell_top_day_name_pane

0x9773,	// (0x00037334) cell_area_left_week_number_pane_ParamLimits

0x9773,	// (0x00037334) cell_area_left_week_number_pane

0x9787,	// (0x00037348) cell_month_view_pane_ParamLimits

0x9787,	// (0x00037348) cell_month_view_pane

0xef5e,	// (0x0003cb1f) frm_month_g1

0x97b4,	// (0x00037375) frm_month_g2

0x97c7,	// (0x00037388) frm_month_g3

0x97da,	// (0x0003739b) frm_month_g4

0x97ed,	// (0x000373ae) frm_month_g5

0x9800,	// (0x000373c1) frm_month_g6

0x9813,	// (0x000373d4) frm_month_g7

0xef6b,	// (0x0003cb2c) frm_month_g8

0x9826,	// (0x000373e7) frm_month_g9

0x9836,	// (0x000373f7) frm_month_g10

0x9846,	// (0x00037407) frm_month_g11

0x9856,	// (0x00037417) frm_month_g12

0x9868,	// (0x00037429) frm_month_g13

0x987a,	// (0x0003743b) frm_month_g14

0x988e,	// (0x0003744f) frm_month_g15

0x98a2,	// (0x00037463) frm_month_g16

0x000f,

0xfe96,	// (0x0003da57) frm_month_g

0xef78,	// (0x0003cb39) cell_top_day_name_pane_t1

0x98b6,	// (0x00037477) cell_area_left_week_number_pane_g1

0x98c2,	// (0x00037483) cell_area_left_week_number_pane_t1

0xca23,	// (0x0003a5e4) cell_month_view_pane_g1

0x98d5,	// (0x00037496) cell_month_view_pane_t1

0x9bdb,	// (0x0003779c) main_fps_pane

0xe3ef,	// (0x0003bfb0) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3ef,	// (0x0003bfb0) cmail_ddmenu_btn02_pane_cp1

0xe40b,	// (0x0003bfcc) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe40b,	// (0x0003bfcc) cmail_ddmenu_btn02_pane_cp2

0x8ff5,	// (0x00036bb6) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8ff5,	// (0x00036bb6) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe10,	// (0x0003d9d1) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe10,	// (0x0003d9d1) cmail_ddmenu_btn02_pane_g

0x9014,	// (0x00036bd5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9014,	// (0x00036bd5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe15,	// (0x0003d9d6) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe15,	// (0x0003d9d6) cmail_ddmenu_btn02_pane_t

0x98e8,	// (0x000374a9) fps_text_pane_ParamLimits

0x98e8,	// (0x000374a9) fps_text_pane

0x98ff,	// (0x000374c0) main_fps_pane_g1_ParamLimits

0x98ff,	// (0x000374c0) main_fps_pane_g1

0x9919,	// (0x000374da) wait_bar_pane_cp010_ParamLimits

0x9919,	// (0x000374da) wait_bar_pane_cp010

0x992a,	// (0x000374eb) fps_text_pane_t1_ParamLimits

0x992a,	// (0x000374eb) fps_text_pane_t1

0xdf91,	// (0x0003bb52) cam4_image_uncrop_pane_g1

0xdf9a,	// (0x0003bb5b) cam4_image_uncrop_pane_g2

0x65c8,	// (0x00034189) cam4_image_uncrop_pane_g3

0x65d1,	// (0x00034192) cam4_image_uncrop_pane_g4

0x0003,

0xf901,	// (0x0003d4c2) cam4_image_uncrop_pane_g

0x96f2,	// (0x000372b3) dia3_listrow_pane_ParamLimits

0x9bdb,	// (0x0003779c) main_phob2_pane

0x8b46,	// (0x00036707) cell_tport_appsw_pane_cp02_ParamLimits

0x8b46,	// (0x00036707) cell_tport_appsw_pane_cp02

0x8b5a,	// (0x0003671b) cell_tport_appsw_pane_cp03_ParamLimits

0x8b5a,	// (0x0003671b) cell_tport_appsw_pane_cp03

0x9bdb,	// (0x0003779c) phob2_contact_card_pane

0x9bdb,	// (0x0003779c) phob2_listscroll_pane

0xef8b,	// (0x0003cb4c) phob2_list_pane

0xef93,	// (0x0003cb54) scroll_pane_cp034

0x9942,	// (0x00037503) phob2_cc_data_pane_ParamLimits

0x9942,	// (0x00037503) phob2_cc_data_pane

0x9961,	// (0x00037522) phob2_cc_listscroll_pane_ParamLimits

0x9961,	// (0x00037522) phob2_cc_listscroll_pane

0x94b0,	// (0x00037071) list_double_large_graphic_phob2_pane_ParamLimits

0x94b0,	// (0x00037071) list_double_large_graphic_phob2_pane

0x997f,	// (0x00037540) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x997f,	// (0x00037540) list_double_large_graphic_phob2_pane_g1

0x9995,	// (0x00037556) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9995,	// (0x00037556) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfeb7,	// (0x0003da78) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfeb7,	// (0x0003da78) list_double_large_graphic_phob2_pane_g

0x99a1,	// (0x00037562) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99a1,	// (0x00037562) list_double_large_graphic_phob2_pane_t1

0x99b7,	// (0x00037578) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99b7,	// (0x00037578) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfebc,	// (0x0003da7d) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfebc,	// (0x0003da7d) list_double_large_graphic_phob2_pane_t

0x9bdb,	// (0x0003779c) list_highlight_pane_cp024

0x99cc,	// (0x0003758d) phob2_cc_button_pane

0x99d4,	// (0x00037595) phob2_cc_data_pane_g1_ParamLimits

0x99d4,	// (0x00037595) phob2_cc_data_pane_g1

0x99e9,	// (0x000375aa) phob2_cc_data_pane_g2_ParamLimits

0x99e9,	// (0x000375aa) phob2_cc_data_pane_g2

0x0001,

0xfec1,	// (0x0003da82) phob2_cc_data_pane_g_ParamLimits

0xfec1,	// (0x0003da82) phob2_cc_data_pane_g

0x99f9,	// (0x000375ba) phob2_cc_data_pane_t1_ParamLimits

0x99f9,	// (0x000375ba) phob2_cc_data_pane_t1

0x9a11,	// (0x000375d2) phob2_cc_data_pane_t2_ParamLimits

0x9a11,	// (0x000375d2) phob2_cc_data_pane_t2

0x9a29,	// (0x000375ea) phob2_cc_data_pane_t3_ParamLimits

0x9a29,	// (0x000375ea) phob2_cc_data_pane_t3

0x0002,

0xfec6,	// (0x0003da87) phob2_cc_data_pane_t_ParamLimits

0xfec6,	// (0x0003da87) phob2_cc_data_pane_t

0xef9b,	// (0x0003cb5c) phob2_cc_list_pane_ParamLimits

0xef9b,	// (0x0003cb5c) phob2_cc_list_pane

0xd5a7,	// (0x0003b168) scroll_pane_cp035_ParamLimits

0xd5a7,	// (0x0003b168) scroll_pane_cp035

0xa70e,	// (0x000382cf) bg_button_pane_cp033

0xefa7,	// (0x0003cb68) phob2_cc_button_pane_g1

0xefb3,	// (0x0003cb74) phob2_cc_button_pane_t1

0xefc8,	// (0x0003cb89) phob2_cc_button_pane_t2

0x0001,

0xfecd,	// (0x0003da8e) phob2_cc_button_pane_t

0x9a41,	// (0x00037602) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a41,	// (0x00037602) list_double_large_graphic_phob2_cc_pane

0x9a54,	// (0x00037615) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a54,	// (0x00037615) list_double_large_graphic_phob2_cc_pane_g1

0xefda,	// (0x0003cb9b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xefda,	// (0x0003cb9b) list_double_large_graphic_phob2_cc_pane_g2

0x9a60,	// (0x00037621) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a60,	// (0x00037621) list_double_large_graphic_phob2_cc_pane_g3

0x9a6c,	// (0x0003762d) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a6c,	// (0x0003762d) list_double_large_graphic_phob2_cc_pane_g4

0x9a78,	// (0x00037639) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a78,	// (0x00037639) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfed2,	// (0x0003da93) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfed2,	// (0x0003da93) list_double_large_graphic_phob2_cc_pane_g

0x9a84,	// (0x00037645) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9a84,	// (0x00037645) list_double_large_graphic_phob2_cc_pane_t1

0x9aad,	// (0x0003766e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9aad,	// (0x0003766e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfedd,	// (0x0003da9e) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfedd,	// (0x0003da9e) list_double_large_graphic_phob2_cc_pane_t

0xefe6,	// (0x0003cba7) list_highlight_pane_cp025_ParamLimits

0xefe6,	// (0x0003cba7) list_highlight_pane_cp025

0xa70e,	// (0x000382cf) bg_button_pane_cp033_ParamLimits

0xefa7,	// (0x0003cb68) phob2_cc_button_pane_g1_ParamLimits

0xefb3,	// (0x0003cb74) phob2_cc_button_pane_t1_ParamLimits

0xefc8,	// (0x0003cb89) phob2_cc_button_pane_t2_ParamLimits

0xfecd,	// (0x0003da8e) phob2_cc_button_pane_t_ParamLimits

0x1cdf,	// (0x0002f8a0) popup_wgtman_window

0xd398,	// (0x0003af59) scroll_pane_cp038

0x9429,	// (0x00036fea) wgtman_btn_pane_cp_01_ParamLimits

0x9429,	// (0x00036fea) wgtman_btn_pane_cp_01

0xeff4,	// (0x0003cbb5) wgtman_content_pane

0xeffd,	// (0x0003cbbe) wgtman_heading_pane

0x9bdb,	// (0x0003779c) bg_heading_pane_cp02

0xf006,	// (0x0003cbc7) wgtman_heading_pane_g1

0xf00e,	// (0x0003cbcf) wgtman_heading_pane_t1

0xf01c,	// (0x0003cbdd) scroll_pane_cp036

0xf024,	// (0x0003cbe5) wgtman_list_pane

0xeace,	// (0x0003c68f) wgtman_list_pane_t1_ParamLimits

0xeace,	// (0x0003c68f) wgtman_list_pane_t1

0x65b4,	// (0x00034175) cam4_grid_pane

0x6f99,	// (0x00034b5a) bg_button_pane_cp015_ParamLimits

0x6fad,	// (0x00034b6e) bg_button_pane_cp016_ParamLimits

0x6fc0,	// (0x00034b81) bg_button_pane_cp017_ParamLimits

0x7018,	// (0x00034bd9) popup_vitu2_query_window_g3_ParamLimits

0x7018,	// (0x00034bd9) popup_vitu2_query_window_g3

0x70d5,	// (0x00034c96) popup_vitu2_query_window_t6_ParamLimits

0x70d5,	// (0x00034c96) popup_vitu2_query_window_t6

0x7100,	// (0x00034cc1) popup_vitu2_query_window_t7_ParamLimits

0x7100,	// (0x00034cc1) popup_vitu2_query_window_t7

0xdf91,	// (0x0003bb52) cam4_grid_pane_g1

0xdf9a,	// (0x0003bb5b) cam4_grid_pane_g2

0xf02c,	// (0x0003cbed) cam4_grid_pane_g3

0xf035,	// (0x0003cbf6) cam4_grid_pane_g4

0x0003,

0xfee2,	// (0x0003daa3) cam4_grid_pane_g

0x2a50,	// (0x00030611) aid_placing_vt_slider_lsc_ParamLimits

0x2d4d,	// (0x0003090e) vidtel_button_pane_ParamLimits

0x2d4d,	// (0x0003090e) vidtel_button_pane

0x9bdb,	// (0x0003779c) bg_button_pane_cp034

0xf040,	// (0x0003cc01) vidtel_button_pane_g1

0xf048,	// (0x0003cc09) vidtel_button_pane_t1

0xd4e0,	// (0x0003b0a1) aid_size_vtel_slider_touch

0xd5a7,	// (0x0003b168) scroll_pane_cp039

0x7eab,	// (0x00035a6c) ncim_query_button_pane_cp01_ParamLimits

0x7eca,	// (0x00035a8b) ncimui_query_pane_g1_ParamLimits

0xa70e,	// (0x000382cf) input_focus_pane_cp012_ParamLimits

0xdea8,	// (0x0003ba69) ncim_query_entry_pane_t1_ParamLimits

0xd5a7,	// (0x0003b168) scroll_pane_cp039_ParamLimits

0xae13,	// (0x000389d4) navi_pane_bcale_mc_g1

0xae1b,	// (0x000389dc) navi_pane_bcale_mc_t1

0xe454,	// (0x0003c015) main_sp_fs_email_pane_g1

0xe460,	// (0x0003c021) main_sp_fs_email_pane_g2

0x0001,

0xfcd6,	// (0x0003d897) main_sp_fs_email_pane_g

0xe93d,	// (0x0003c4fe) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe93d,	// (0x0003c4fe) list_single_cale_mrui_row_pane_g3

0x9034,	// (0x00036bf5) list_single_recal_day_pane_g5_event_pane

0xeb37,	// (0x0003c6f8) list_single_recal_day_pane_g7

0xf05e,	// (0x0003cc1f) list_recal_day_event_pane_cp01

0xf067,	// (0x0003cc28) list_recal_vselct_arw_lo_pane_cp01

0xf06f,	// (0x0003cc30) list_recal_vselct_arw_up_pane_cp01

0xf077,	// (0x0003cc38) list_recal_vselct_pane_cp01

0xd510,	// (0x0003b0d1) list_recal_day_event_pane_cp01_g1

0xf081,	// (0x0003cc42) list_recal_day_event_pane_cp01_t1

0xeb3f,	// (0x0003c700) list_single_recal_day_pane_t1_ParamLimits

0xeb51,	// (0x0003c712) list_single_recal_day_pane_t2_ParamLimits

0x024a,	// (0x0002de0b) list_single_recal_day_pane_t_ParamLimits

0xa253,	// (0x00037e14) bg_notes_pane_ParamLimits

0xa302,	// (0x00037ec3) list_notes_pane_ParamLimits

0x1f4c,	// (0x0002fb0d) scroll_pane_cp06_ParamLimits

0xa324,	// (0x00037ee5) main_notes_pane_ParamLimits

0x9bdb,	// (0x0003779c) main_welc_pane

0x9ad6,	// (0x00037697) main_welc_body_pane_ParamLimits

0x9ad6,	// (0x00037697) main_welc_body_pane

0x9af3,	// (0x000376b4) main_welc_opti_pane_ParamLimits

0x9af3,	// (0x000376b4) main_welc_opti_pane

0x9b38,	// (0x000376f9) main_welc_pane_t1_ParamLimits

0x9b38,	// (0x000376f9) main_welc_pane_t1

0x9b56,	// (0x00037717) main_welc_body_row_pane_ParamLimits

0x9b56,	// (0x00037717) main_welc_body_row_pane

0xd446,	// (0x0003b007) main_welc_opti_row_pane_ParamLimits

0xd446,	// (0x0003b007) main_welc_opti_row_pane

0xf08f,	// (0x0003cc50) main_welc_opti_row_pane_g1

0x9b6b,	// (0x0003772c) main_welc_opti_row_pane_t1

0xf097,	// (0x0003cc58) main_welc_body_row_pane_t1

0xedad,	// (0x0003c96e) popup_notif_wgt_heading_pane

0xedc7,	// (0x0003c988) aid_size_list_notif_wgt_del_ParamLimits

0xedd4,	// (0x0003c995) list_notif_wgt_row_pane_g1_ParamLimits

0xede0,	// (0x0003c9a1) list_notif_wgt_row_pane_g2_ParamLimits

0xedef,	// (0x0003c9b0) list_notif_wgt_row_pane_g3_ParamLimits

0x02b1,	// (0x0002de72) list_notif_wgt_row_pane_g_ParamLimits

0xedfc,	// (0x0003c9bd) list_notif_wgt_row_pane_t1_ParamLimits

0xee12,	// (0x0003c9d3) list_notif_wgt_row_pane_t2_ParamLimits

0xee24,	// (0x0003c9e5) list_notif_wgt_row_pane_t3_ParamLimits

0x02b8,	// (0x0002de79) list_notif_wgt_row_pane_t_ParamLimits

0x94c2,	// (0x00037083) listrow_wgtman_pane_g1_ParamLimits

0x94cf,	// (0x00037090) listrow_wgtman_pane_g2_ParamLimits

0xfe67,	// (0x0003da28) listrow_wgtman_pane_g_ParamLimits

0x94ed,	// (0x000370ae) listrow_wgtman_pane_t1_ParamLimits

0x9505,	// (0x000370c6) listrow_wgtman_pane_t2_ParamLimits

0xfe6c,	// (0x0003da2d) listrow_wgtman_pane_t_ParamLimits

0x952b,	// (0x000370ec) wait_bar_pane_cp09_ParamLimits

0x9bdb,	// (0x0003779c) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0003cc67) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0003cc6f) popup_notif_wgt_heading_pane_t1

0x9bdb,	// (0x0003779c) main_vids_pane

0x9bdb,	// (0x0003779c) vids_listscroll_pane

0x9b7a,	// (0x0003773b) scroll_pane_cp040

0x9bdb,	// (0x0003779c) vids_list_pane

0x9b85,	// (0x00037746) vids_list_double_pane_ParamLimits

0x9b85,	// (0x00037746) vids_list_double_pane

0x9b96,	// (0x00037757) vids_list_double_pane_g1

0x9b9f,	// (0x00037760) vids_list_double_pane_t1

0x9baf,	// (0x00037770) vids_list_double_pane_t2

0x0001,

0xfef0,	// (0x0003dab1) vids_list_double_pane_t

0x1cd1,	// (0x0002f892) main_ncimui_pane_ParamLimits

0x7ce1,	// (0x000358a2) main_ncimui_pane_g1_ParamLimits

0x7ced,	// (0x000358ae) main_ncimui_pane_g2_ParamLimits

0x7ced,	// (0x000358ae) main_ncimui_pane_g2

0x0001,

0xfbfd,	// (0x0003d7be) main_ncimui_pane_g_ParamLimits

0xfbfd,	// (0x0003d7be) main_ncimui_pane_g

0x9b0e,	// (0x000376cf) main_welc_pane_g1_ParamLimits

0x9b0e,	// (0x000376cf) main_welc_pane_g1

0x9b23,	// (0x000376e4) main_welc_pane_g2_ParamLimits

0x9b23,	// (0x000376e4) main_welc_pane_g2

0x0001,

0xfeeb,	// (0x0003daac) main_welc_pane_g_ParamLimits

0xfeeb,	// (0x0003daac) main_welc_pane_g

0xa253,	// (0x00037e14) listscroll_mce_pane_ParamLimits

0xaf68,	// (0x00038b29) wait_bar_pane_cp10

0xc3b5,	// (0x00039f76) main_cale_day_pane_ParamLimits

0xc3b5,	// (0x00039f76) main_cale_week_pane_ParamLimits

0xa253,	// (0x00037e14) main_messa_pane_ParamLimits

0x5c43,	// (0x00033804) main_clock2_btn_pane_ParamLimits

0x5c43,	// (0x00033804) main_clock2_btn_pane

0xcc1f,	// (0x0003a7e0) main_clock2_btn_pane_cp01_ParamLimits

0xcc1f,	// (0x0003a7e0) main_clock2_btn_pane_cp01

0xe8c9,	// (0x0003c48a) list_cale_mrui_pane_ParamLimits

0xee5a,	// (0x0003ca1b) main_cf0_pane_g2

0x0001,

0x02bf,	// (0x0002de80) main_cf0_pane_g

0x9714,	// (0x000372d5) area_left_week_number_pane_ParamLimits

0x9720,	// (0x000372e1) area_top_day_name_pane_ParamLimits

0x9733,	// (0x000372f4) frame_month_view_pane_ParamLimits

0xef50,	// (0x0003cb11) grid_month_view_pane_ParamLimits

0xef5e,	// (0x0003cb1f) frm_month_g1_ParamLimits

0x97b4,	// (0x00037375) frm_month_g2_ParamLimits

0x97c7,	// (0x00037388) frm_month_g3_ParamLimits

0x97da,	// (0x0003739b) frm_month_g4_ParamLimits

0x97ed,	// (0x000373ae) frm_month_g5_ParamLimits

0x9800,	// (0x000373c1) frm_month_g6_ParamLimits

0x9813,	// (0x000373d4) frm_month_g7_ParamLimits

0xef6b,	// (0x0003cb2c) frm_month_g8_ParamLimits

0x9826,	// (0x000373e7) frm_month_g9_ParamLimits

0x9836,	// (0x000373f7) frm_month_g10_ParamLimits

0x9846,	// (0x00037407) frm_month_g11_ParamLimits

0x9856,	// (0x00037417) frm_month_g12_ParamLimits

0x9868,	// (0x00037429) frm_month_g13_ParamLimits

0x987a,	// (0x0003743b) frm_month_g14_ParamLimits

0x988e,	// (0x0003744f) frm_month_g15_ParamLimits

0x98a2,	// (0x00037463) frm_month_g16_ParamLimits

0xfe96,	// (0x0003da57) frm_month_g_ParamLimits

0xef78,	// (0x0003cb39) cell_top_day_name_pane_t1_ParamLimits

0x98b6,	// (0x00037477) cell_area_left_week_number_pane_g1_ParamLimits

0x98c2,	// (0x00037483) cell_area_left_week_number_pane_t1_ParamLimits

0xca23,	// (0x0003a5e4) cell_month_view_pane_g1_ParamLimits

0x98d5,	// (0x00037496) cell_month_view_pane_t1_ParamLimits

0xa24b,	// (0x00037e0c) main_clock2_btn_pane_g1

0xf0bc,	// (0x0003cc7d) main_clock2_btn_pane_t1

0xa70e,	// (0x000382cf) listscroll_cmail_pane_ParamLimits

0xe454,	// (0x0003c015) main_sp_fs_email_pane_g1_ParamLimits

0xe460,	// (0x0003c021) main_sp_fs_email_pane_g2_ParamLimits

0xfcd6,	// (0x0003d897) main_sp_fs_email_pane_g_ParamLimits

0xea8c,	// (0x0003c64d) list_recal_day_pane_ParamLimits

0xea9d,	// (0x0003c65e) mian_recal_day_pane_t1

0x8806,	// (0x000363c7) list_single_dyc_row_text_pane_t4_ParamLimits

0x8806,	// (0x000363c7) list_single_dyc_row_text_pane_t4

0x884f,	// (0x00036410) list_single_dyc_row_text_pane_t5_ParamLimits

0x884f,	// (0x00036410) list_single_dyc_row_text_pane_t5

0xe502,	// (0x0003c0c3) list_single_dyc_row_text_pane_t6_ParamLimits

0xe502,	// (0x0003c0c3) list_single_dyc_row_text_pane_t6

0x37fd,	// (0x000313be) aid_mgn_list_cale_time_pane

0x1cd1,	// (0x0002f892) main_gallery2_pane_ParamLimits

0xcc35,	// (0x0003a7f6) main_clock2_pane_cp01_t1

0xcc43,	// (0x0003a804) main_clock2_pane_cp01_t3

0x0001,

0xf7d7,	// (0x0003d398) main_clock2_pane_cp01_t

0x22b4,	// (0x0002fe75) cale_week_scroll_pane_g16_ParamLimits

0x22b4,	// (0x0002fe75) cale_week_scroll_pane_g16

0xa509,	// (0x000380ca) vorec_slider_pane

0xf048,	// (0x0003cc09) vidtel_button_pane_t1_ParamLimits

0x909a,	// (0x00036c5b) main_fs_bigclock_clock_pane_g1_ParamLimits

0x909a,	// (0x00036c5b) main_fs_bigclock_clock_pane_g2_ParamLimits

0x90ab,	// (0x00036c6c) main_fs_bigclock_clock_pane_g3_ParamLimits

0x90ab,	// (0x00036c6c) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfe2a,	// (0x0003d9eb) main_fs_bigclock_clock_pane_g_ParamLimits

0x90be,	// (0x00036c7f) main_fs_bigclock_clock_pane_t1_ParamLimits

0x90d4,	// (0x00036c95) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfe33,	// (0x0003d9f4) main_fs_bigclock_clock_pane_t_ParamLimits

0x543e,	// (0x00032fff) main_mup3_lyrics_pane_ParamLimits

0x543e,	// (0x00032fff) main_mup3_lyrics_pane

0x9bbf,	// (0x00037780) main_mup3_lyrics_pane_t1_ParamLimits

0x9bbf,	// (0x00037780) main_mup3_lyrics_pane_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Normal
