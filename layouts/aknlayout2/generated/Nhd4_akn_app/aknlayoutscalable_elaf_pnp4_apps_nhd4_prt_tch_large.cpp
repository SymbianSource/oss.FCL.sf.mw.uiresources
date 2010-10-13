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

#include "aknlayoutscalable_elaf_pnp4_apps_nhd4_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0006b3f8 };

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
0x67cd,	// (0x00071bc5) Screen

0x67d9,	// (0x00071bd1) application_window

0x6835,	// (0x00071c2d) area_bottom_pane_ParamLimits

0x6835,	// (0x00071c2d) area_bottom_pane

0x688d,	// (0x00071c85) area_top_pane_ParamLimits

0x688d,	// (0x00071c85) area_top_pane

0x68f1,	// (0x00071ce9) call_video_uplink_pane_ParamLimits

0x68f1,	// (0x00071ce9) call_video_uplink_pane

0x6930,	// (0x00071d28) main_pane_ParamLimits

0x6930,	// (0x00071d28) main_pane

0x416a,	// (0x0006f562) context_pane

0x95a5,	// (0x0007499d) navi_pane

0x95cb,	// (0x000749c3) popup_cale_events_window_ParamLimits

0x95cb,	// (0x000749c3) popup_cale_events_window

0x417d,	// (0x0006f575) popup_mup_playback_window

0x95e3,	// (0x000749db) signal_pane

0x1de8,	// (0x0006d1e0) main_browser_pane

0x1f9a,	// (0x0006d392) main_burst_pane

0x9435,	// (0x0007482d) main_calc_pane

0x415e,	// (0x0006f556) main_cale_day_pane

0x6e62,	// (0x0007225a) main_cale_month_pane

0x415e,	// (0x0006f556) main_cale_week_pane

0x1f9a,	// (0x0006d392) main_call_pane

0x1a5a,	// (0x0006ce52) main_call_poc_pane

0x1f9a,	// (0x0006d392) main_camera_pane

0x1f9a,	// (0x0006d392) main_chi_dic_pane

0x28e6,	// (0x0006dcde) main_clock_pane

0x1a5a,	// (0x0006ce52) main_fmradio_pane

0x1f9a,	// (0x0006d392) main_graph_messa_pane

0x1a5a,	// (0x0006ce52) main_help_pane

0x1de8,	// (0x0006d1e0) main_im_pane

0x1cc3,	// (0x0006d0bb) main_image_pane_ParamLimits

0x1cc3,	// (0x0006d0bb) main_image_pane

0x1a5a,	// (0x0006ce52) main_location2_pane

0x1f9a,	// (0x0006d392) main_location_pane

0x1cc3,	// (0x0006d0bb) main_messa_pane

0x1a5a,	// (0x0006ce52) main_mp2_pane

0x1f9a,	// (0x0006d392) main_mp_pane

0x1a5a,	// (0x0006ce52) main_msg_pane

0x1a5a,	// (0x0006ce52) main_mup_eq_pane

0x1a5a,	// (0x0006ce52) main_mup_pane

0x1de8,	// (0x0006d1e0) main_notes_pane

0x1a5a,	// (0x0006ce52) main_pec_pane

0x1a5a,	// (0x0006ce52) main_phob_pane

0x1a5a,	// (0x0006ce52) main_pinb_pane

0x1a5a,	// (0x0006ce52) main_postcard_pane

0x1a5a,	// (0x0006ce52) main_qdial_pane

0x1f9a,	// (0x0006d392) main_skin_pane

0x1a5a,	// (0x0006ce52) main_smil2_pane

0x1f9a,	// (0x0006d392) main_smil_pane

0x1f9a,	// (0x0006d392) main_video_pane

0x1f9a,	// (0x0006d392) main_video_tele_pane

0x1cc3,	// (0x0006d0bb) main_viewer_pane_ParamLimits

0x1cc3,	// (0x0006d0bb) main_viewer_pane

0x1f9a,	// (0x0006d392) main_vorec_pane

0x9473,	// (0x0007486b) popup_blid_sat_info_window_ParamLimits

0x9473,	// (0x0007486b) popup_blid_sat_info_window

0x9493,	// (0x0007488b) popup_dyc_status_message_window_ParamLimits

0x9493,	// (0x0007488b) popup_dyc_status_message_window

0x94a1,	// (0x00074899) popup_grid_large_graphic_window_ParamLimits

0x94a1,	// (0x00074899) popup_grid_large_graphic_window

0x9530,	// (0x00074928) popup_loc_request_window_ParamLimits

0x9530,	// (0x00074928) popup_loc_request_window

0x957d,	// (0x00074975) popup_wml_address_window_ParamLimits

0x957d,	// (0x00074975) popup_wml_address_window

0x930d,	// (0x00074705) call_muted_g1

0x8ffa,	// (0x000743f2) popup_call_audio_conf_window_ParamLimits

0x8ffa,	// (0x000743f2) popup_call_audio_conf_window

0x931d,	// (0x00074715) popup_call_audio_first_window_ParamLimits

0x931d,	// (0x00074715) popup_call_audio_first_window

0x935d,	// (0x00074755) popup_call_audio_in_window_ParamLimits

0x935d,	// (0x00074755) popup_call_audio_in_window

0x9381,	// (0x00074779) popup_call_audio_out_window_ParamLimits

0x9381,	// (0x00074779) popup_call_audio_out_window

0x93a3,	// (0x0007479b) popup_call_audio_second_window_ParamLimits

0x93a3,	// (0x0007479b) popup_call_audio_second_window

0x93d3,	// (0x000747cb) popup_call_audio_wait_window_ParamLimits

0x93d3,	// (0x000747cb) popup_call_audio_wait_window

0x93f4,	// (0x000747ec) popup_number_entry_window_ParamLimits

0x93f4,	// (0x000747ec) popup_number_entry_window

0x1647,	// (0x0006ca3f) bg_popup_call_pane_cp05_ParamLimits

0x1647,	// (0x0006ca3f) bg_popup_call_pane_cp05

0x1667,	// (0x0006ca5f) popup_number_entry_window_t1

0x167a,	// (0x0006ca72) popup_number_entry_window_t2

0x168c,	// (0x0006ca84) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x0007a438) popup_number_entry_window_t

0x169e,	// (0x0006ca96) text_title_cp2

0x16b1,	// (0x0006caa9) bg_popup_call_pane_cp_ParamLimits

0x16b1,	// (0x0006caa9) bg_popup_call_pane_cp

0x16bf,	// (0x0006cab7) call_thumbnail_pane

0x16c7,	// (0x0006cabf) popup_call_audio_in_window_g1_ParamLimits

0x16c7,	// (0x0006cabf) popup_call_audio_in_window_g1

0x16d3,	// (0x0006cacb) popup_call_audio_in_window_g2_ParamLimits

0x16d3,	// (0x0006cacb) popup_call_audio_in_window_g2

0x16df,	// (0x0006cad7) popup_call_audio_in_window_g3_ParamLimits

0x16df,	// (0x0006cad7) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x0007a441) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x0007a441) popup_call_audio_in_window_g

0x16eb,	// (0x0006cae3) popup_call_audio_in_window_t1_ParamLimits

0x16eb,	// (0x0006cae3) popup_call_audio_in_window_t1

0x1707,	// (0x0006caff) popup_call_audio_in_window_t2_ParamLimits

0x1707,	// (0x0006caff) popup_call_audio_in_window_t2

0x1723,	// (0x0006cb1b) popup_call_audio_in_window_t3_ParamLimits

0x1723,	// (0x0006cb1b) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x0007a448) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x0007a448) popup_call_audio_in_window_t

0x16b1,	// (0x0006caa9) bg_popup_call_pane_cp01_ParamLimits

0x16b1,	// (0x0006caa9) bg_popup_call_pane_cp01

0x16bf,	// (0x0006cab7) call_thumbnail_pane_cp02

0x1736,	// (0x0006cb2e) call_type_pane_cp022

0x173e,	// (0x0006cb36) popup_call_audio_out_window_g1_ParamLimits

0x173e,	// (0x0006cb36) popup_call_audio_out_window_g1

0x1750,	// (0x0006cb48) popup_call_audio_out_window_g2_ParamLimits

0x1750,	// (0x0006cb48) popup_call_audio_out_window_g2

0x175c,	// (0x0006cb54) popup_call_audio_out_window_g3_ParamLimits

0x175c,	// (0x0006cb54) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x0007a44f) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x0007a44f) popup_call_audio_out_window_g

0x176e,	// (0x0006cb66) popup_call_audio_out_window_t1_ParamLimits

0x176e,	// (0x0006cb66) popup_call_audio_out_window_t1

0x1786,	// (0x0006cb7e) popup_call_audio_out_window_t2_ParamLimits

0x1786,	// (0x0006cb7e) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x0007a456) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x0007a456) popup_call_audio_out_window_t

0x179b,	// (0x0006cb93) bg_popup_call_pane_ParamLimits

0x179b,	// (0x0006cb93) bg_popup_call_pane

0x6b33,	// (0x00071f2b) call_thumbnail_pane_cp_ParamLimits

0x6b33,	// (0x00071f2b) call_thumbnail_pane_cp

0x181f,	// (0x0006cc17) call_type_pane_cp01_ParamLimits

0x181f,	// (0x0006cc17) call_type_pane_cp01

0x1863,	// (0x0006cc5b) popup_call_audio_first_window_g1_ParamLimits

0x1863,	// (0x0006cc5b) popup_call_audio_first_window_g1

0x18af,	// (0x0006cca7) popup_call_audio_first_window_g2_ParamLimits

0x18af,	// (0x0006cca7) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x0007a45b) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x0007a45b) popup_call_audio_first_window_g

0x18f3,	// (0x0006cceb) popup_call_audio_first_window_t1_ParamLimits

0x18f3,	// (0x0006cceb) popup_call_audio_first_window_t1

0x199f,	// (0x0006cd97) popup_call_audio_first_window_t4_ParamLimits

0x199f,	// (0x0006cd97) popup_call_audio_first_window_t4

0x1a2b,	// (0x0006ce23) popup_call_audio_first_window_t5_ParamLimits

0x1a2b,	// (0x0006ce23) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x0007a460) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x0007a460) popup_call_audio_first_window_t

0x1a5a,	// (0x0006ce52) bg_popup_call_pane_cp02

0x1a64,	// (0x0006ce5c) call_type_pane_cp023

0x1a6c,	// (0x0006ce64) popup_call_audio_wait_window_g1

0x1a74,	// (0x0006ce6c) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x0007a467) popup_call_audio_wait_window_g

0x1a7c,	// (0x0006ce74) popup_call_audio_wait_window_t3

0x1a8a,	// (0x0006ce82) bg_popup_call_pane_cp03_ParamLimits

0x1a8a,	// (0x0006ce82) bg_popup_call_pane_cp03

0x1aea,	// (0x0006cee2) call_thumbnail_pane_cp011_ParamLimits

0x1aea,	// (0x0006cee2) call_thumbnail_pane_cp011

0x1af6,	// (0x0006ceee) call_type_pane_cp034_ParamLimits

0x1af6,	// (0x0006ceee) call_type_pane_cp034

0x1b32,	// (0x0006cf2a) popup_call_audio_second_window_g1_ParamLimits

0x1b32,	// (0x0006cf2a) popup_call_audio_second_window_g1

0x1b6e,	// (0x0006cf66) popup_call_audio_second_window_g2_ParamLimits

0x1b6e,	// (0x0006cf66) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x0007a46c) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x0007a46c) popup_call_audio_second_window_g

0x1baa,	// (0x0006cfa2) popup_call_audio_second_window_t1_ParamLimits

0x1baa,	// (0x0006cfa2) popup_call_audio_second_window_t1

0x1c39,	// (0x0006d031) popup_call_audio_second_window_t2_ParamLimits

0x1c39,	// (0x0006d031) popup_call_audio_second_window_t2

0x1c6f,	// (0x0006d067) popup_call_audio_second_window_t3_ParamLimits

0x1c6f,	// (0x0006d067) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x0007a471) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x0007a471) popup_call_audio_second_window_t

0x1a5a,	// (0x0006ce52) bg_popup_call_pane_cp04

0x1ca5,	// (0x0006d09d) list_conf_pane

0x1cad,	// (0x0006d0a5) popup_call_audio_conf_window_t1

0x1cbb,	// (0x0006d0b3) call_thumbnail_pane_g1

0x1cc3,	// (0x0006d0bb) bg_pinb_pane_ParamLimits

0x1cc3,	// (0x0006d0bb) bg_pinb_pane

0x1cd1,	// (0x0006d0c9) find_pinb_pane

0x1cc3,	// (0x0006d0bb) listscroll_pinb_pane_ParamLimits

0x1cc3,	// (0x0006d0bb) listscroll_pinb_pane

0x1cdb,	// (0x0006d0d3) pinb_bg_pane_g1

0x1cdb,	// (0x0006d0d3) pinb_bg_pane_g2

0x1cdb,	// (0x0006d0d3) pinb_bg_pane_g3

0x1cdb,	// (0x0006d0d3) pinb_bg_pane_g4

0x1cdb,	// (0x0006d0d3) pinb_bg_pane_g5

0x1cdb,	// (0x0006d0d3) pinb_bg_pane_g6

0x1cdb,	// (0x0006d0d3) pinb_bg_pane_g7

0x1cdb,	// (0x0006d0d3) pinb_bg_pane_g8

0x1cdb,	// (0x0006d0d3) pinb_bg_pane_g9

0x1cdb,	// (0x0006d0d3) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x0007a478) pinb_bg_pane_g

0x163d,	// (0x0006ca35) grid_pinb_pane

0x163d,	// (0x0006ca35) list_pinb_pane

0x1ce5,	// (0x0006d0dd) scroll_pane_cp01_ParamLimits

0x1ce5,	// (0x0006d0dd) scroll_pane_cp01

0x1cf3,	// (0x0006d0eb) find_pinb_pane_g1_ParamLimits

0x1cf3,	// (0x0006d0eb) find_pinb_pane_g1

0x1d0b,	// (0x0006d103) find_pinb_pane_t1

0x1d1d,	// (0x0006d115) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x0007a492) find_pinb_pane_t

0x1d32,	// (0x0006d12a) input_focus_pane_cp01_ParamLimits

0x1d32,	// (0x0006d12a) input_focus_pane_cp01

0x1d3e,	// (0x0006d136) cell_pinb_pane_ParamLimits

0x1d3e,	// (0x0006d136) cell_pinb_pane

0x1d4c,	// (0x0006d144) cell_pinb_pane_g1_ParamLimits

0x1d4c,	// (0x0006d144) cell_pinb_pane_g1

0x1d5a,	// (0x0006d152) cell_pinb_pane_g2_ParamLimits

0x1d5a,	// (0x0006d152) cell_pinb_pane_g2

0x1d5a,	// (0x0006d152) cell_pinb_pane_g3_ParamLimits

0x1d5a,	// (0x0006d152) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x0007a497) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x0007a497) cell_pinb_pane_g

0x1a5a,	// (0x0006ce52) grid_highlight_pane_cp01

0x1d3e,	// (0x0006d136) list_pinb_item_pane_ParamLimits

0x1d3e,	// (0x0006d136) list_pinb_item_pane

0x163d,	// (0x0006ca35) list_highlight_pane_cp02

0x1d68,	// (0x0006d160) list_pinb_item_pane_g1_ParamLimits

0x1d68,	// (0x0006d160) list_pinb_item_pane_g1

0x1d5a,	// (0x0006d152) list_pinb_item_pane_g2_ParamLimits

0x1d5a,	// (0x0006d152) list_pinb_item_pane_g2

0x1d4c,	// (0x0006d144) list_pinb_item_pane_g3_ParamLimits

0x1d4c,	// (0x0006d144) list_pinb_item_pane_g3

0x1d5a,	// (0x0006d152) list_pinb_item_pane_g4_ParamLimits

0x1d5a,	// (0x0006d152) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x0007a49e) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x0007a49e) list_pinb_item_pane_g

0x1d76,	// (0x0006d16e) list_pinb_item_pane_t1_ParamLimits

0x1d76,	// (0x0006d16e) list_pinb_item_pane_t1

0x6b71,	// (0x00071f69) calc_display_pane

0x6b8f,	// (0x00071f87) calc_paper_pane

0x6bab,	// (0x00071fa3) grid_calc_pane

0x163d,	// (0x0006ca35) bg_list_pane_cp01

0x1d8a,	// (0x0006d182) clock_g1

0x1d8a,	// (0x0006d182) clock_g2

0x0001,

0xf0af,	// (0x0007a4a7) clock_g

0x1d94,	// (0x0006d18c) clock_t1_ParamLimits

0x1d94,	// (0x0006d18c) clock_t1

0x1da8,	// (0x0006d1a0) clock_t2_ParamLimits

0x1da8,	// (0x0006d1a0) clock_t2

0x1da8,	// (0x0006d1a0) clock_t3_ParamLimits

0x1da8,	// (0x0006d1a0) clock_t3

0x1da8,	// (0x0006d1a0) clock_t4_ParamLimits

0x1da8,	// (0x0006d1a0) clock_t4

0x1d94,	// (0x0006d18c) clock_t5_ParamLimits

0x1d94,	// (0x0006d18c) clock_t5

0x1da8,	// (0x0006d1a0) clock_t6_ParamLimits

0x1da8,	// (0x0006d1a0) clock_t6

0x1da8,	// (0x0006d1a0) clock_t7_ParamLimits

0x1da8,	// (0x0006d1a0) clock_t7

0x1da8,	// (0x0006d1a0) clock_t8_ParamLimits

0x1da8,	// (0x0006d1a0) clock_t8

0x1da8,	// (0x0006d1a0) clock_t9_ParamLimits

0x1da8,	// (0x0006d1a0) clock_t9

0x0008,

0xf0b4,	// (0x0007a4ac) clock_t_ParamLimits

0xf0b4,	// (0x0007a4ac) clock_t

0x163d,	// (0x0006ca35) popup_clock_analogue_window_cp02

0x163d,	// (0x0006ca35) popup_clock_digital_window_cp01

0x1a5a,	// (0x0006ce52) listscroll_help_pane

0x1a5a,	// (0x0006ce52) phob_pre_status_pane

0x1dbc,	// (0x0006d1b4) grid_qdial_pane

0x1cc3,	// (0x0006d0bb) listscroll_mce_pane

0x1cc3,	// (0x0006d0bb) bg_notes_pane

0x1dc6,	// (0x0006d1be) list_notes_pane

0x6bd7,	// (0x00071fcf) scroll_pane_cp06

0x1dd4,	// (0x0006d1cc) bg_calc_paper_pane

0x6be6,	// (0x00071fde) list_calc_pane

0x1de8,	// (0x0006d1e0) bg_calc_display_pane

0x6c00,	// (0x00071ff8) calc_display_pane_t1

0x6c15,	// (0x0007200d) calc_display_pane_t2

0x6c2a,	// (0x00072022) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x0007a4bf) calc_display_pane_t

0x6c3c,	// (0x00072034) cell_calc_pane_ParamLimits

0x6c3c,	// (0x00072034) cell_calc_pane

0x1df4,	// (0x0006d1ec) bg_calc_paper_pane_g1

0x1e0c,	// (0x0006d204) bg_calc_paper_pane_g2

0x1e00,	// (0x0006d1f8) bg_calc_paper_pane_g3

0x1e24,	// (0x0006d21c) bg_calc_paper_pane_g4

0x1e18,	// (0x0006d210) bg_calc_paper_pane_g5

0x6c69,	// (0x00072061) bg_calc_paper_pane_g6

0x6c7a,	// (0x00072072) bg_calc_paper_pane_g7

0x6c8b,	// (0x00072083) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x0007a4c6) bg_calc_paper_pane_g

0x6c9c,	// (0x00072094) calc_bg_paper_pane_g9

0x6cad,	// (0x000720a5) list_calc_item_pane_ParamLimits

0x6cad,	// (0x000720a5) list_calc_item_pane

0x1e30,	// (0x0006d228) list_calc_item_pane_g1

0x6cda,	// (0x000720d2) list_calc_item_pane_t1_ParamLimits

0x6cda,	// (0x000720d2) list_calc_item_pane_t1

0x6cec,	// (0x000720e4) list_calc_item_pane_t2_ParamLimits

0x6cec,	// (0x000720e4) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x0007a4d7) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x0007a4d7) list_calc_item_pane_t

0x1cdb,	// (0x0006d0d3) cell_calc_pane_g1

0x1e3d,	// (0x0006d235) grid_highlight_pane_cp02

0x6d1c,	// (0x00072114) bg_calc_display_pane_g1

0x6d25,	// (0x0007211d) bg_calc_display_pane_g2

0x6d2f,	// (0x00072127) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x0007a4e1) bg_calc_display_pane_g

0x6d38,	// (0x00072130) cell_qdial_pane_ParamLimits

0x6d38,	// (0x00072130) cell_qdial_pane

0x6d4c,	// (0x00072144) cell_qdial_pane_g1_ParamLimits

0x6d4c,	// (0x00072144) cell_qdial_pane_g1

0x6d59,	// (0x00072151) cell_qdial_pane_g2_ParamLimits

0x6d59,	// (0x00072151) cell_qdial_pane_g2

0x1e5f,	// (0x0006d257) cell_qdial_pane_g3_ParamLimits

0x1e5f,	// (0x0006d257) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x0007a4e8) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x0007a4e8) cell_qdial_pane_g

0x6d76,	// (0x0007216e) cell_qdial_pane_t1_ParamLimits

0x6d76,	// (0x0007216e) cell_qdial_pane_t1

0x6d8e,	// (0x00072186) cell_qdial_pane_t2_ParamLimits

0x6d8e,	// (0x00072186) cell_qdial_pane_t2

0x6da1,	// (0x00072199) cell_qdial_pane_t3_ParamLimits

0x6da1,	// (0x00072199) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x0007a4f1) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x0007a4f1) cell_qdial_pane_t

0x1a5a,	// (0x0006ce52) grid_highlight_pane_cp04

0x1e6b,	// (0x0006d263) thumbnail_qdial_pane_ParamLimits

0x1e6b,	// (0x0006d263) thumbnail_qdial_pane

0x1ec7,	// (0x0006d2bf) list_help_pane

0x1ed0,	// (0x0006d2c8) scroll_pane_cp02

0x6db4,	// (0x000721ac) help_list_pane_t1_ParamLimits

0x6db4,	// (0x000721ac) help_list_pane_t1

0x6dee,	// (0x000721e6) bg_notes_pane_g2

0x6df6,	// (0x000721ee) bg_notes_pane_g3

0x6dfe,	// (0x000721f6) notes_bg_pane_g1

0x6e06,	// (0x000721fe) notes_bg_pane_g4

0x6e0e,	// (0x00072206) notes_bg_pane_g5

0x6e16,	// (0x0007220e) notes_bg_pane_g6

0x6e1e,	// (0x00072216) notes_bg_pane_g7

0x6e26,	// (0x0007221e) notes_bg_pane_g8

0x6e2e,	// (0x00072226) notes_bg_pane_g9

0x0006,

0xf117,	// (0x0007a50f) notes_bg_pane_g

0x6e36,	// (0x0007222e) list_notes_text_pane_ParamLimits

0x6e36,	// (0x0007222e) list_notes_text_pane

0x1ed9,	// (0x0006d2d1) list_notes_text_pane_g1

0x5aca,	// (0x00070ec2) list_notes_text_pane_t1

0x6e62,	// (0x0007225a) listscroll_cale_week_pane

0x6e87,	// (0x0007227f) bg_cale_heading_pane

0x1efc,	// (0x0006d2f4) bg_cale_pane_cp01

0x6ea9,	// (0x000722a1) cale_week_corner_pane

0x6ec3,	// (0x000722bb) cale_week_day_heading_pane

0x6ee5,	// (0x000722dd) cale_week_scroll_pane_g1

0x6f02,	// (0x000722fa) cale_week_scroll_pane_g2

0x6f15,	// (0x0007230d) cale_week_scroll_pane_g3

0x6f28,	// (0x00072320) cale_week_scroll_pane_g4

0x6f3b,	// (0x00072333) cale_week_scroll_pane_g5

0x6f4e,	// (0x00072346) cale_week_scroll_pane_g6

0x6f61,	// (0x00072359) cale_week_scroll_pane_g7

0x6f76,	// (0x0007236e) cale_week_scroll_pane_g8

0x6f8b,	// (0x00072383) cale_week_scroll_pane_g9

0x6f9e,	// (0x00072396) cale_week_scroll_pane_g10

0x6fb1,	// (0x000723a9) cale_week_scroll_pane_g11

0x6fc4,	// (0x000723bc) cale_week_scroll_pane_g12

0x6fdb,	// (0x000723d3) cale_week_scroll_pane_g13

0x6ff6,	// (0x000723ee) cale_week_scroll_pane_g14

0x7011,	// (0x00072409) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x0007a51e) cale_week_scroll_pane_g

0x7041,	// (0x00072439) cale_week_time_pane

0x7056,	// (0x0007244e) grid_cale_week_pane

0x1f2b,	// (0x0006d323) scroll_pane_cp08

0x7075,	// (0x0007246d) cell_cale_week_pane_ParamLimits

0x7075,	// (0x0007246d) cell_cale_week_pane

0x70d7,	// (0x000724cf) cale_week_day_heading_pane_t1

0x70f2,	// (0x000724ea) cale_week_day_heading_pane_t2

0x710d,	// (0x00072505) cale_week_day_heading_pane_t3

0x7128,	// (0x00072520) cale_week_day_heading_pane_t4

0x7143,	// (0x0007253b) cale_week_day_heading_pane_t5

0x715e,	// (0x00072556) cale_week_day_heading_pane_t6

0x7179,	// (0x00072571) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x0007a53f) cale_week_day_heading_pane_t

0x1f48,	// (0x0006d340) bg_cale_side_pane

0x7194,	// (0x0007258c) cale_week_time_pane_t1

0x71ae,	// (0x000725a6) cale_week_time_pane_t2

0x71c8,	// (0x000725c0) cale_week_time_pane_t3

0x71e2,	// (0x000725da) cale_week_time_pane_t4

0x71fc,	// (0x000725f4) cale_week_time_pane_t5

0x7216,	// (0x0007260e) cale_week_time_pane_t6

0x7236,	// (0x0007262e) cale_week_time_pane_t7

0x7258,	// (0x00072650) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x0007a54e) cale_week_time_pane_t

0x727c,	// (0x00072674) cell_cale_week_pane_g2

0x72a0,	// (0x00072698) cell_cale_week_pane_g3_ParamLimits

0x72a0,	// (0x00072698) cell_cale_week_pane_g3

0x1f56,	// (0x0006d34e) grid_highlight_pane_cp07

0x1f5e,	// (0x0006d356) listscroll_gms_pane

0x1f68,	// (0x0006d360) grid_gms_pane

0x1f71,	// (0x0006d369) listscroll_gms_pane_g1

0x1f79,	// (0x0006d371) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x0007a55f) listscroll_gms_pane_g

0x72b8,	// (0x000726b0) scroll_pane_cp010

0x72c3,	// (0x000726bb) cell_gms_pane_ParamLimits

0x72c3,	// (0x000726bb) cell_gms_pane

0x72d3,	// (0x000726cb) cell_gms_pane_g1

0x1f81,	// (0x0006d379) cell_gms_pane_g2

0x1ed9,	// (0x0006d2d1) cell_gms_pane_g3

0x1f89,	// (0x0006d381) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x0007a564) cell_gms_pane_g

0x1f92,	// (0x0006d38a) grid_highlight_pane_cp09

0x9291,	// (0x00074689) phob_pre_status_pane_g1

0x9299,	// (0x00074691) phob_pre_status_pane_g2

0x92a1,	// (0x00074699) phob_pre_status_pane_g3

0x92a9,	// (0x000746a1) phob_pre_status_pane_g4

0x0004,

0xf538,	// (0x0007a930) phob_pre_status_pane_g

0x92b9,	// (0x000746b1) phob_pre_status_pane_t1

0x92c9,	// (0x000746c1) phob_pre_status_pane_t2

0x92d9,	// (0x000746d1) phob_pre_status_pane_t3

0x0002,

0xf543,	// (0x0007a93b) phob_pre_status_pane_t

0x1f9a,	// (0x0006d392) bg_list_pane_cp05

0x72e3,	// (0x000726db) grid_vorec_pane

0x72ed,	// (0x000726e5) vorec_t1

0x72fb,	// (0x000726f3) vorec_t2

0x7309,	// (0x00072701) vorec_t3

0x7317,	// (0x0007270f) vorec_t4

0xda5d,	// (0x00078e55) vorec_t5

0xda6b,	// (0x00078e63) vorec_t6

0x0004,

0xf175,	// (0x0007a56d) vorec_t

0xda79,	// (0x00078e71) wait_bar_pane_cp01

0x7333,	// (0x0007272b) cell_vorec_pane_ParamLimits

0x7333,	// (0x0007272b) cell_vorec_pane

0x7346,	// (0x0007273e) cell_vorec_pane_g1

0x1a5a,	// (0x0006ce52) grid_highlight_pane_cp05

0x1d3e,	// (0x0006d136) cams_zoom_pane

0x1d3e,	// (0x0006d136) image_vga_pane

0x1d5a,	// (0x0006d152) main_camera_pane_g1

0x1d5a,	// (0x0006d152) main_camera_pane_g2

0x1d5a,	// (0x0006d152) main_camera_pane_g3

0x1d5a,	// (0x0006d152) main_camera_pane_g4

0x1d5a,	// (0x0006d152) main_camera_pane_g5

0x1d5a,	// (0x0006d152) main_camera_pane_g6

0x1d5a,	// (0x0006d152) main_camera_pane_g7

0x0007,

0xf180,	// (0x0007a578) main_camera_pane_g

0x1da8,	// (0x0006d1a0) main_camera_pane_t1

0x1da8,	// (0x0006d1a0) main_camera_pane_t2

0x0001,

0xf191,	// (0x0007a589) main_camera_pane_t

0x7350,	// (0x00072748) cams_zoom_pane_cp_ParamLimits

0x7350,	// (0x00072748) cams_zoom_pane_cp

0x737e,	// (0x00072776) image_cif_pane_ParamLimits

0x737e,	// (0x00072776) image_cif_pane

0x163d,	// (0x0006ca35) image_subqcif_pane

0x738c,	// (0x00072784) main_video_pane_g1_ParamLimits

0x738c,	// (0x00072784) main_video_pane_g1

0x73b4,	// (0x000727ac) main_video_pane_g2_ParamLimits

0x73b4,	// (0x000727ac) main_video_pane_g2

0x73e7,	// (0x000727df) main_video_pane_g3_ParamLimits

0x73e7,	// (0x000727df) main_video_pane_g3

0x73e7,	// (0x000727df) main_video_pane_g4_ParamLimits

0x73e7,	// (0x000727df) main_video_pane_g4

0x7415,	// (0x0007280d) main_video_pane_g5_ParamLimits

0x7415,	// (0x0007280d) main_video_pane_g5

0x1fa2,	// (0x0006d39a) main_video_pane_g6_ParamLimits

0x1fa2,	// (0x0006d39a) main_video_pane_g6

0x0006,

0xf196,	// (0x0007a58e) main_video_pane_g_ParamLimits

0xf196,	// (0x0007a58e) main_video_pane_g

0x7431,	// (0x00072829) main_video_pane_t1_ParamLimits

0x7431,	// (0x00072829) main_video_pane_t1

0x1d8a,	// (0x0006d182) cams_zoom_pane_g1

0x1d8a,	// (0x0006d182) cams_zoom_pane_g2

0x1d8a,	// (0x0006d182) cams_zoom_pane_g3

0x1d8a,	// (0x0006d182) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x0007a59d) cams_zoom_pane_g

0x1d3e,	// (0x0006d136) grid_cams_pane

0x1d3e,	// (0x0006d136) linegrid_cams_pane

0x746b,	// (0x00072863) cell_cams_pane_ParamLimits

0x746b,	// (0x00072863) cell_cams_pane

0x163d,	// (0x0006ca35) cams_burst_image_pane

0x1d8a,	// (0x0006d182) cell_cams_pane_g1

0x163d,	// (0x0006ca35) grid_highlight_pane_cp03

0x1cdb,	// (0x0006d0d3) mp_bg_pane_g1

0x163d,	// (0x0006ca35) bg_list_pane_cp03

0x163d,	// (0x0006ca35) bg_mp_pane

0x163d,	// (0x0006ca35) grid_mp_pane

0x1d8a,	// (0x0006d182) media_player_g1

0x24de,	// (0x0006d8d6) media_player_t1

0x24de,	// (0x0006d8d6) media_player_t2

0x24de,	// (0x0006d8d6) media_player_t3

0x24de,	// (0x0006d8d6) media_player_t4

0x24de,	// (0x0006d8d6) media_player_t5

0x24de,	// (0x0006d8d6) media_player_t6

0x24de,	// (0x0006d8d6) media_player_t7

0x0006,

0xf522,	// (0x0007a91a) media_player_t

0x163d,	// (0x0006ca35) wait_bar_pane_cp02

0xf507,	// (0x0007a8ff) main_usb_pane_t

0x28e6,	// (0x0006dcde) cell_mp_pane

0x1cdb,	// (0x0006d0d3) cell_mp_pane_g1

0x1a5a,	// (0x0006ce52) grid_highlight_pane_cp06

0x1fbc,	// (0x0006d3b4) grid_skin_colour_pane

0x1fc4,	// (0x0006d3bc) list_highlight_pane_cp03

0x7480,	// (0x00072878) skin_g1

0x1fcc,	// (0x0006d3c4) skin_t1

0x1fdb,	// (0x0006d3d3) skin_t2

0x0001,

0xf1d3,	// (0x0007a5cb) skin_t

0x748a,	// (0x00072882) cell_skin_colour_pane_ParamLimits

0x748a,	// (0x00072882) cell_skin_colour_pane

0x1fe9,	// (0x0006d3e1) cell_skin_colour_pane_g1

0x750e,	// (0x00072906) call_video_g1_ParamLimits

0x750e,	// (0x00072906) call_video_g1

0x751e,	// (0x00072916) call_video_g2_ParamLimits

0x751e,	// (0x00072916) call_video_g2

0x0001,

0xf1d8,	// (0x0007a5d0) call_video_g_ParamLimits

0xf1d8,	// (0x0007a5d0) call_video_g

0x7578,	// (0x00072970) call_video_uplink_pane_cp1_ParamLimits

0x7578,	// (0x00072970) call_video_uplink_pane_cp1

0x1ffb,	// (0x0006d3f3) call_video_uplink_pane_cp2

0x7644,	// (0x00072a3c) video_down_crop_pane_ParamLimits

0x7644,	// (0x00072a3c) video_down_crop_pane

0x7736,	// (0x00072b2e) video_down_pane_ParamLimits

0x7736,	// (0x00072b2e) video_down_pane

0x2003,	// (0x0006d3fb) video_down_subqcif_pane_ParamLimits

0x2003,	// (0x0006d3fb) video_down_subqcif_pane

0x201b,	// (0x0006d413) video_down_subqcif_pane_cp_ParamLimits

0x201b,	// (0x0006d413) video_down_subqcif_pane_cp

0x2041,	// (0x0006d439) im_reading_pane_ParamLimits

0x2041,	// (0x0006d439) im_reading_pane

0x7856,	// (0x00072c4e) im_writing_pane_ParamLimits

0x7856,	// (0x00072c4e) im_writing_pane

0x7874,	// (0x00072c6c) im_reading_pane_t1

0x205b,	// (0x0006d453) list_im_pane

0x206c,	// (0x0006d464) scroll_pane_cp07

0x78cc,	// (0x00072cc4) im_writing_pane_t1_ParamLimits

0x78cc,	// (0x00072cc4) im_writing_pane_t1

0x2085,	// (0x0006d47d) im_writing_pane_t2_ParamLimits

0x2085,	// (0x0006d47d) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x0007a5da) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x0007a5da) im_writing_pane_t

0x1a5a,	// (0x0006ce52) input_focus_pane_cp04

0x1a5a,	// (0x0006ce52) input_focus_pane_cp05

0x78de,	// (0x00072cd6) list_im_single_pane_ParamLimits

0x78de,	// (0x00072cd6) list_im_single_pane

0x7905,	// (0x00072cfd) list_single_im_pane_t1

0x1f9a,	// (0x0006d392) blid_accuracy_pane

0x1f9a,	// (0x0006d392) blid_compass_pane

0x4116,	// (0x0006f50e) main_location_t1

0x4116,	// (0x0006f50e) main_location_t2

0x4116,	// (0x0006f50e) main_location_t3

0x0002,

0xf531,	// (0x0007a929) main_location_t

0x1a5a,	// (0x0006ce52) aid_levels_location

0x1cdb,	// (0x0006d0d3) blid_accuracy_pane_g1

0x1cdb,	// (0x0006d0d3) blid_accuracy_pane_g2

0x0001,

0xf236,	// (0x0007a62e) blid_accuracy_pane_g

0x20cd,	// (0x0006d4c5) wml_content_pane

0x210b,	// (0x0006d503) wml_button_pane_ParamLimits

0x210b,	// (0x0006d503) wml_button_pane

0x7914,	// (0x00072d0c) wml_list_single_large_pane_ParamLimits

0x7914,	// (0x00072d0c) wml_list_single_large_pane

0x793f,	// (0x00072d37) wml_list_single_medium_pane_ParamLimits

0x793f,	// (0x00072d37) wml_list_single_medium_pane

0x7971,	// (0x00072d69) wml_list_single_small_pane_ParamLimits

0x7971,	// (0x00072d69) wml_list_single_small_pane

0x211f,	// (0x0006d517) wml_selection_box_pane_ParamLimits

0x211f,	// (0x0006d517) wml_selection_box_pane

0x2132,	// (0x0006d52a) wml_list_single_pane_t1

0x2141,	// (0x0006d539) wml_list_single_medium_pane_t1

0x2150,	// (0x0006d548) wml_list_single_large_pane_t1

0x215f,	// (0x0006d557) input_focus_pane_cp02_ParamLimits

0x215f,	// (0x0006d557) input_focus_pane_cp02

0x2172,	// (0x0006d56a) wml_selection_box_pane_g1

0x217b,	// (0x0006d573) wml_selection_box_pane_t1_ParamLimits

0x217b,	// (0x0006d573) wml_selection_box_pane_t1

0x1cc3,	// (0x0006d0bb) bg_wml_button_pane_ParamLimits

0x1cc3,	// (0x0006d0bb) bg_wml_button_pane

0x2193,	// (0x0006d58b) wml_button_pane_g1

0x219b,	// (0x0006d593) wml_button_pane_t1

0x2193,	// (0x0006d58b) wml_button_bg_pane_g1

0x21ab,	// (0x0006d5a3) wml_button_bg_pane_g2

0x21b3,	// (0x0006d5ab) wml_button_bg_pane_g3

0x21bb,	// (0x0006d5b3) wml_button_bg_pane_g4

0x21c3,	// (0x0006d5bb) wml_button_bg_pane_g5

0x21d4,	// (0x0006d5cc) wml_button_bg_pane_g6

0x21dc,	// (0x0006d5d4) wml_button_bg_pane_g7

0x21e4,	// (0x0006d5dc) wml_button_bg_pane_g8

0x21ec,	// (0x0006d5e4) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x0007a5df) wml_button_bg_pane_g

0x79ae,	// (0x00072da6) bg_list_pane_cp02

0x21f4,	// (0x0006d5ec) mce_header_pane_ParamLimits

0x21f4,	// (0x0006d5ec) mce_header_pane

0x220a,	// (0x0006d602) mce_icon_pane

0x220a,	// (0x0006d602) mce_image_pane

0x2213,	// (0x0006d60b) mce_text_pane_ParamLimits

0x2213,	// (0x0006d60b) mce_text_pane

0x79b8,	// (0x00072db0) scroll_pane_cp03

0x2103,	// (0x0006d4fb) scroll_pane_cp04

0x2226,	// (0x0006d61e) scroll_pane_cp05_ParamLimits

0x2226,	// (0x0006d61e) scroll_pane_cp05

0x79c2,	// (0x00072dba) mce_header_field_pane_ParamLimits

0x79c2,	// (0x00072dba) mce_header_field_pane

0x79e2,	// (0x00072dda) mce_header_field_pane_2_ParamLimits

0x79e2,	// (0x00072dda) mce_header_field_pane_2

0x79f8,	// (0x00072df0) mce_header_field_pane_3

0x7a00,	// (0x00072df8) list_single_mce_message_pane_ParamLimits

0x7a00,	// (0x00072df8) list_single_mce_message_pane

0x7a2e,	// (0x00072e26) list_single_mce_smart_pane_ParamLimits

0x7a2e,	// (0x00072e26) list_single_mce_smart_pane

0x2232,	// (0x0006d62a) input_focus_pane_cp03

0x223b,	// (0x0006d633) list_header_data_pane

0x7a67,	// (0x00072e5f) mce_header_field_pane_t1

0x7a75,	// (0x00072e6d) list_single_mce_header_pane_ParamLimits

0x7a75,	// (0x00072e6d) list_single_mce_header_pane

0x2243,	// (0x0006d63b) list_single_mce_header_pane_t1

0x2252,	// (0x0006d64a) list_single_mce_message_pane_g1

0x225a,	// (0x0006d652) list_single_mce_message_pane_t1

0x7acb,	// (0x00072ec3) bg_cale_heading_pane_cp01_ParamLimits

0x7acb,	// (0x00072ec3) bg_cale_heading_pane_cp01

0x2268,	// (0x0006d660) bg_cale_pane_cp02_ParamLimits

0x2268,	// (0x0006d660) bg_cale_pane_cp02

0x7b19,	// (0x00072f11) cale_month_corner_pane

0x7b38,	// (0x00072f30) cale_month_day_heading_pane_ParamLimits

0x7b38,	// (0x00072f30) cale_month_day_heading_pane

0x7b9e,	// (0x00072f96) cale_month_pane_g1_ParamLimits

0x7b9e,	// (0x00072f96) cale_month_pane_g1

0x7be1,	// (0x00072fd9) cale_month_pane_g2_ParamLimits

0x7be1,	// (0x00072fd9) cale_month_pane_g2

0x7c1b,	// (0x00073013) cale_month_pane_g3_ParamLimits

0x7c1b,	// (0x00073013) cale_month_pane_g3

0x7c6b,	// (0x00073063) cale_month_pane_g4_ParamLimits

0x7c6b,	// (0x00073063) cale_month_pane_g4

0x7cbb,	// (0x000730b3) cale_month_pane_g5_ParamLimits

0x7cbb,	// (0x000730b3) cale_month_pane_g5

0x7d0b,	// (0x00073103) cale_month_pane_g6_ParamLimits

0x7d0b,	// (0x00073103) cale_month_pane_g6

0x7d5b,	// (0x00073153) cale_month_pane_g7_ParamLimits

0x7d5b,	// (0x00073153) cale_month_pane_g7

0x7dc3,	// (0x000731bb) cale_month_pane_g8_ParamLimits

0x7dc3,	// (0x000731bb) cale_month_pane_g8

0x7e2b,	// (0x00073223) cale_month_pane_g9_ParamLimits

0x7e2b,	// (0x00073223) cale_month_pane_g9

0x7e89,	// (0x00073281) cale_month_pane_g10_ParamLimits

0x7e89,	// (0x00073281) cale_month_pane_g10

0x7ee7,	// (0x000732df) cale_month_pane_g11_ParamLimits

0x7ee7,	// (0x000732df) cale_month_pane_g11

0x7f3b,	// (0x00073333) cale_month_pane_g12_ParamLimits

0x7f3b,	// (0x00073333) cale_month_pane_g12

0x7f91,	// (0x00073389) cale_month_pane_g13_ParamLimits

0x7f91,	// (0x00073389) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x0007a5f2) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x0007a5f2) cale_month_pane_g

0x7fe7,	// (0x000733df) cale_month_week_pane

0x800b,	// (0x00073403) grid_cale_month_pane_ParamLimits

0x800b,	// (0x00073403) grid_cale_month_pane

0x8068,	// (0x00073460) cale_month_day_heading_pane_t1

0x80ee,	// (0x000734e6) cale_month_day_heading_pane_t2

0x8167,	// (0x0007355f) cale_month_day_heading_pane_t3

0x81e0,	// (0x000735d8) cale_month_day_heading_pane_t4

0x8259,	// (0x00073651) cale_month_day_heading_pane_t5

0x82d2,	// (0x000736ca) cale_month_day_heading_pane_t6

0x834b,	// (0x00073743) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x0007a60d) cale_month_day_heading_pane_t

0x1f48,	// (0x0006d340) bg_cale_side_pane_cp01

0x83dc,	// (0x000737d4) cale_month_week_pane_t1

0x83f5,	// (0x000737ed) cale_month_week_pane_t2

0x840e,	// (0x00073806) cale_month_week_pane_t3

0x8427,	// (0x0007381f) cale_month_week_pane_t4

0x8442,	// (0x0007383a) cale_month_week_pane_t5

0x8463,	// (0x0007385b) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x0007a61c) cale_month_week_pane_t

0x8484,	// (0x0007387c) cell_cale_month_pane_ParamLimits

0x8484,	// (0x0007387c) cell_cale_month_pane

0x85aa,	// (0x000739a2) cell_cale_month_pane_g1

0x85b6,	// (0x000739ae) cell_cale_month_pane_t1_ParamLimits

0x85b6,	// (0x000739ae) cell_cale_month_pane_t1

0x1f56,	// (0x0006d34e) grid_highlight_pane_cp08

0x1cdb,	// (0x0006d0d3) main_smil_g1

0x85e2,	// (0x000739da) smil_status_pane

0x22a7,	// (0x0006d69f) smil_text_pane

0x3fee,	// (0x0006f3e6) bg_popup_call3_rect_pane_g8

0x3ff6,	// (0x0006f3ee) bg_popup_call3_rect_pane_g9

0x0008,

0xf4b2,	// (0x0007a8aa) bg_popup_call3_rect_pane_g

0x41f2,	// (0x0006f5ea) smil_status_volume_pane_g1

0x22b1,	// (0x0006d6a9) smil_status_pane_t1

0x962c,	// (0x00074a24) volume_smil_pane

0x22c8,	// (0x0006d6c0) list_smil_text_pane

0x85f5,	// (0x000739ed) scroll_pane_cp011

0x8600,	// (0x000739f8) smil_text_list_pane_t1_ParamLimits

0x8600,	// (0x000739f8) smil_text_list_pane_t1

0x868d,	// (0x00073a85) aid_volume_smil_ParamLimits

0x868d,	// (0x00073a85) aid_volume_smil

0x1cdb,	// (0x0006d0d3) smil_volume_pane_g1

0x1cdb,	// (0x0006d0d3) smil_volume_pane_g2

0x0001,

0xf236,	// (0x0007a62e) smil_volume_pane_g

0x6e62,	// (0x0007225a) listscroll_cale_day_pane

0x22d2,	// (0x0006d6ca) bg_cale_pane

0x22ea,	// (0x0006d6e2) list_cale_pane

0x230d,	// (0x0006d705) scroll_pane_cp09

0x231e,	// (0x0006d716) cale_bg_pane_g1

0x2326,	// (0x0006d71e) cale_bg_pane_g2

0x232e,	// (0x0006d726) cale_bg_pane_g3

0x2336,	// (0x0006d72e) cale_bg_pane_g4

0x233e,	// (0x0006d736) cale_bg_pane_g5

0x2346,	// (0x0006d73e) cale_bg_pane_g6

0x234e,	// (0x0006d746) cale_bg_pane_g7

0x2356,	// (0x0006d74e) cale_bg_pane_g8

0x235e,	// (0x0006d756) cale_bg_pane_g9

0x0008,

0xf23b,	// (0x0007a633) cale_bg_pane_g

0x86b7,	// (0x00073aaf) list_cale_time_pane_ParamLimits

0x86b7,	// (0x00073aaf) list_cale_time_pane

0x2366,	// (0x0006d75e) list_cale_time_pane_g1_ParamLimits

0x2366,	// (0x0006d75e) list_cale_time_pane_g1

0x2372,	// (0x0006d76a) list_cale_time_pane_g2_ParamLimits

0x2372,	// (0x0006d76a) list_cale_time_pane_g2

0x86df,	// (0x00073ad7) list_cale_time_pane_g3_ParamLimits

0x86df,	// (0x00073ad7) list_cale_time_pane_g3

0x86ed,	// (0x00073ae5) list_cale_time_pane_g4_ParamLimits

0x86ed,	// (0x00073ae5) list_cale_time_pane_g4

0x86fb,	// (0x00073af3) list_cale_time_pane_g5_ParamLimits

0x86fb,	// (0x00073af3) list_cale_time_pane_g5

0x0005,

0xf24e,	// (0x0007a646) list_cale_time_pane_g_ParamLimits

0xf24e,	// (0x0007a646) list_cale_time_pane_g

0x238c,	// (0x0006d784) list_cale_time_pane_t1_ParamLimits

0x238c,	// (0x0006d784) list_cale_time_pane_t1

0x23b4,	// (0x0006d7ac) list_cale_time_pane_t2_ParamLimits

0x23b4,	// (0x0006d7ac) list_cale_time_pane_t2

0x89b6,	// (0x00073dae) aid_blid_cardinal_pane

0x89f8,	// (0x00073df0) compass_pane_t4

0x23dc,	// (0x0006d7d4) list_cale_time_pane_t4_ParamLimits

0x23dc,	// (0x0006d7d4) list_cale_time_pane_t4

0x8a06,	// (0x00073dfe) compass_pane_t5

0x8a16,	// (0x00073e0e) compass_pane_t6

0x8a24,	// (0x00073e1c) compass_pane_t7

0x2a00,	// (0x0006ddf8) navi_pane_cc_t1

0x2e65,	// (0x0006e25d) aid_phob_thumbnail_center_pane

0x8dd7,	// (0x000741cf) main_postcard_pane_g4_ParamLimits

0x0002,

0xf25b,	// (0x0007a653) list_cale_time_pane_t_ParamLimits

0xf25b,	// (0x0007a653) list_cale_time_pane_t

0x16b1,	// (0x0006caa9) bg_popup_window_pane_cp02_ParamLimits

0x16b1,	// (0x0006caa9) bg_popup_window_pane_cp02

0x2404,	// (0x0006d7fc) heading_pane_cp01_ParamLimits

0x2404,	// (0x0006d7fc) heading_pane_cp01

0x2410,	// (0x0006d808) loc_req_pane_ParamLimits

0x2410,	// (0x0006d808) loc_req_pane

0x2420,	// (0x0006d818) loc_type_pane_ParamLimits

0x2420,	// (0x0006d818) loc_type_pane

0x2432,	// (0x0006d82a) loc_type_pane_t1_ParamLimits

0x2432,	// (0x0006d82a) loc_type_pane_t1

0x2444,	// (0x0006d83c) loc_type_pane_t2_ParamLimits

0x2444,	// (0x0006d83c) loc_type_pane_t2

0x2456,	// (0x0006d84e) loc_type_pane_t3_ParamLimits

0x2456,	// (0x0006d84e) loc_type_pane_t3

0x0002,

0xf262,	// (0x0007a65a) loc_type_pane_t_ParamLimits

0xf262,	// (0x0007a65a) loc_type_pane_t

0x2468,	// (0x0006d860) list_loc_req_pane

0x2472,	// (0x0006d86a) scroll_pane_cp012

0x5ad8,	// (0x00070ed0) list_single_loc_request_popup_menu_pane_ParamLimits

0x5ad8,	// (0x00070ed0) list_single_loc_request_popup_menu_pane

0x247d,	// (0x0006d875) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x247d,	// (0x0006d875) list_single_loc_request_popup_menu_pane_g1

0x2489,	// (0x0006d881) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x2489,	// (0x0006d881) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf269,	// (0x0007a661) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf269,	// (0x0007a661) list_single_loc_request_popup_menu_pane_g

0x2495,	// (0x0006d88d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x2495,	// (0x0006d88d) list_single_loc_request_popup_menu_pane_t1

0x8709,	// (0x00073b01) bg_popup_window_pane_cp03_ParamLimits

0x8709,	// (0x00073b01) bg_popup_window_pane_cp03

0x8717,	// (0x00073b0f) heading_loc_req_pane_ParamLimits

0x8717,	// (0x00073b0f) heading_loc_req_pane

0x8723,	// (0x00073b1b) popup_dyc_status_message_window_g1_ParamLimits

0x8723,	// (0x00073b1b) popup_dyc_status_message_window_g1

0x872f,	// (0x00073b27) popup_dyc_status_message_window_t1_ParamLimits

0x872f,	// (0x00073b27) popup_dyc_status_message_window_t1

0x8741,	// (0x00073b39) popup_dyc_status_message_window_t2_ParamLimits

0x8741,	// (0x00073b39) popup_dyc_status_message_window_t2

0x8753,	// (0x00073b4b) popup_dyc_status_message_window_t3_ParamLimits

0x8753,	// (0x00073b4b) popup_dyc_status_message_window_t3

0x0002,

0xf26e,	// (0x0007a666) popup_dyc_status_message_window_t_ParamLimits

0xf26e,	// (0x0007a666) popup_dyc_status_message_window_t

0x1a5a,	// (0x0006ce52) bg_heading_pane_cp01

0x24b7,	// (0x0006d8af) heading_loc_req_pane_g1

0x24bf,	// (0x0006d8b7) heading_loc_req_pane_g2

0x24c7,	// (0x0006d8bf) heading_loc_req_pane_g3

0x0002,

0xf275,	// (0x0007a66d) heading_loc_req_pane_g

0x24cf,	// (0x0006d8c7) heading_loc_req_pane_t1

0x24ee,	// (0x0006d8e6) bg_popup_sub_pane_cp01_ParamLimits

0x24ee,	// (0x0006d8e6) bg_popup_sub_pane_cp01

0x24fc,	// (0x0006d8f4) popup_cale_events_window_g1_ParamLimits

0x24fc,	// (0x0006d8f4) popup_cale_events_window_g1

0x251c,	// (0x0006d914) popup_cale_events_window_g2_ParamLimits

0x251c,	// (0x0006d914) popup_cale_events_window_g2

0x0001,

0xf297,	// (0x0007a68f) popup_cale_events_window_g_ParamLimits

0xf297,	// (0x0007a68f) popup_cale_events_window_g

0x253c,	// (0x0006d934) popup_cale_events_window_t1_ParamLimits

0x253c,	// (0x0006d934) popup_cale_events_window_t1

0x254e,	// (0x0006d946) popup_cale_events_window_t2_ParamLimits

0x254e,	// (0x0006d946) popup_cale_events_window_t2

0x258c,	// (0x0006d984) popup_cale_events_window_t3_ParamLimits

0x258c,	// (0x0006d984) popup_cale_events_window_t3

0x2762,	// (0x0006db5a) popup_cale_events_window_t4_ParamLimits

0x2762,	// (0x0006db5a) popup_cale_events_window_t4

0x0003,

0xf29c,	// (0x0007a694) popup_cale_events_window_t_ParamLimits

0xf29c,	// (0x0007a694) popup_cale_events_window_t

0x877d,	// (0x00073b75) call_type_pane

0x3819,	// (0x0006ec11) popup_call_status_window_g1

0x8789,	// (0x00073b81) popup_call_status_window_g2

0x8795,	// (0x00073b8d) popup_call_status_window_g3

0x0002,

0xf2a5,	// (0x0007a69d) popup_call_status_window_g

0x2798,	// (0x0006db90) call_type_pane_g1

0x27a1,	// (0x0006db99) call_type_pane_g2

0x0001,

0xf2ac,	// (0x0007a6a4) call_type_pane_g

0x1a5a,	// (0x0006ce52) bg_popup_sub_pane_cp02

0x27aa,	// (0x0006dba2) listscroll_popup_wml_pane

0x27b2,	// (0x0006dbaa) list_wml_pane

0x27bc,	// (0x0006dbb4) scroll_pane_cp013

0x27c7,	// (0x0006dbbf) list_single_graphic_popup_wml_pane_ParamLimits

0x27c7,	// (0x0006dbbf) list_single_graphic_popup_wml_pane

0x1cdb,	// (0x0006d0d3) list_single_graphic_popup_wml_pane_g1

0x27db,	// (0x0006dbd3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b1,	// (0x0007a6a9) list_single_graphic_popup_wml_pane_g

0x27e3,	// (0x0006dbdb) list_single_graphic_popup_wml_pane_t1

0x27f1,	// (0x0006dbe9) aid_call_pane

0x1cbb,	// (0x0006d0b3) popup_clock_analogue_window_g1

0x1cbb,	// (0x0006d0b3) popup_clock_analogue_window_g2

0x87a1,	// (0x00073b99) popup_clock_analogue_window_g3

0x87a1,	// (0x00073b99) popup_clock_analogue_window_g4

0x1cdb,	// (0x0006d0d3) popup_clock_analogue_window_g5

0x0004,

0xf2b6,	// (0x0007a6ae) popup_clock_analogue_window_g

0x87a9,	// (0x00073ba1) popup_clock_analogue_window_t1

0x87b7,	// (0x00073baf) clock_digital_number_pane_ParamLimits

0x87b7,	// (0x00073baf) clock_digital_number_pane

0x87c3,	// (0x00073bbb) clock_digital_number_pane_cp02_ParamLimits

0x87c3,	// (0x00073bbb) clock_digital_number_pane_cp02

0x87cf,	// (0x00073bc7) clock_digital_number_pane_cp03_ParamLimits

0x87cf,	// (0x00073bc7) clock_digital_number_pane_cp03

0x87db,	// (0x00073bd3) clock_digital_number_pane_cp04_ParamLimits

0x87db,	// (0x00073bd3) clock_digital_number_pane_cp04

0x87e7,	// (0x00073bdf) clock_digital_separator_pane_ParamLimits

0x87e7,	// (0x00073bdf) clock_digital_separator_pane

0x87f3,	// (0x00073beb) popup_clock_digital_window_t1

0x1cdb,	// (0x0006d0d3) clock_digital_number_pane_g1

0x1cdb,	// (0x0006d0d3) clock_digital_number_pane_g2

0x0001,

0xf236,	// (0x0007a62e) clock_digital_number_pane_g

0x1cdb,	// (0x0006d0d3) clock_digital_separator_pane_g1

0x1cdb,	// (0x0006d0d3) clock_digital_separator_pane_g2

0x0001,

0xf236,	// (0x0007a62e) clock_digital_separator_pane_g

0x1a5a,	// (0x0006ce52) bg_popup_window_pane_cp04

0x2801,	// (0x0006dbf9) heading_pane_cp03

0x1f9a,	// (0x0006d392) listscroll_popup_gms_pane

0x1a5a,	// (0x0006ce52) grid_large_graphic_popup_pane

0x280a,	// (0x0006dc02) listscroll_popup_gms_pane_g1

0x2813,	// (0x0006dc0b) listscroll_popup_gms_pane_g2

0x0001,

0xf2c1,	// (0x0007a6b9) listscroll_popup_gms_pane_g

0x281c,	// (0x0006dc14) scroll_pane_cp014

0x1d3e,	// (0x0006d136) cell_large_graphic_popup_pane_ParamLimits

0x1d3e,	// (0x0006d136) cell_large_graphic_popup_pane

0x1d4c,	// (0x0006d144) cell_large_graphic_popup_pane_g1_ParamLimits

0x1d4c,	// (0x0006d144) cell_large_graphic_popup_pane_g1

0x2825,	// (0x0006dc1d) cell_large_graphic_popup_pane_g2_ParamLimits

0x2825,	// (0x0006dc1d) cell_large_graphic_popup_pane_g2

0x2833,	// (0x0006dc2b) cell_large_graphic_popup_pane_g3_ParamLimits

0x2833,	// (0x0006dc2b) cell_large_graphic_popup_pane_g3

0x2841,	// (0x0006dc39) cell_large_graphic_popup_pane_g4_ParamLimits

0x2841,	// (0x0006dc39) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c6,	// (0x0007a6be) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c6,	// (0x0007a6be) cell_large_graphic_popup_pane_g

0x1a5a,	// (0x0006ce52) grid_highlight_pane_cp010

0x1cdb,	// (0x0006d0d3) bg_popup_call_pane_g1

0x2852,	// (0x0006dc4a) list_single_graphic_popup_conf_pane_ParamLimits

0x2852,	// (0x0006dc4a) list_single_graphic_popup_conf_pane

0x2865,	// (0x0006dc5d) list_highlight_pane_cp01

0x286e,	// (0x0006dc66) list_single_graphic_popup_conf_pane_g1

0x2876,	// (0x0006dc6e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2cf,	// (0x0007a6c7) list_single_graphic_popup_conf_pane_g

0x287e,	// (0x0006dc76) list_single_graphic_popup_conf_pane_t1

0x288c,	// (0x0006dc84) linegrid_cams_pane_g1

0x8810,	// (0x00073c08) linegrid_cams_pane_g2

0x1ed9,	// (0x0006d2d1) linegrid_cams_pane_g3

0x2895,	// (0x0006dc8d) linegrid_cams_pane_g4

0x8819,	// (0x00073c11) linegrid_cams_pane_g5

0x8822,	// (0x00073c1a) linegrid_cams_pane_g6

0x1f89,	// (0x0006d381) linegrid_cams_pane_g7

0x0006,

0xf2d4,	// (0x0007a6cc) linegrid_cams_pane_g

0x289e,	// (0x0006dc96) popup_clock_analogue_window

0x289e,	// (0x0006dc96) popup_clock_digital_window

0x1a5a,	// (0x0006ce52) popup_phob_thumbnail_window

0x1cdb,	// (0x0006d0d3) call_video_uplink_pane_g1

0x28a7,	// (0x0006dc9f) call_video_uplink_pane_g2

0x0001,

0xf2e3,	// (0x0007a6db) call_video_uplink_pane_g

0x28af,	// (0x0006dca7) video_uplink_pane

0x28b7,	// (0x0006dcaf) mce_image_pane_g1

0x882b,	// (0x00073c23) mce_image_pane_g2

0x8833,	// (0x00073c2b) mce_image_pane_g3

0x883b,	// (0x00073c33) mce_image_pane_g4

0x8843,	// (0x00073c3b) mce_image_pane_g5

0x0004,

0xf2e8,	// (0x0007a6e0) mce_image_pane_g

0x28c1,	// (0x0006dcb9) control_top_pane_stacon_cp01_ParamLimits

0x28c1,	// (0x0006dcb9) control_top_pane_stacon_cp01

0x28d5,	// (0x0006dccd) uni_indicator_pane_stacon_cp01_ParamLimits

0x28d5,	// (0x0006dccd) uni_indicator_pane_stacon_cp01

0x28e6,	// (0x0006dcde) bg_popup_sub_pane_cp03

0x884b,	// (0x00073c43) chi_dic_find_pane

0x8853,	// (0x00073c4b) listscroll_chi_dic_pane

0x885c,	// (0x00073c54) main_pane_chidic_g1

0x886f,	// (0x00073c67) chi_dic_find_pane_t1

0x28f0,	// (0x0006dce8) find_chidic_pane

0x28f9,	// (0x0006dcf1) chi_dic_list_pane_ParamLimits

0x28f9,	// (0x0006dcf1) chi_dic_list_pane

0x290a,	// (0x0006dd02) scroll_pane_cp020

0x887d,	// (0x00073c75) find_chidic_pane_t1

0x1a5a,	// (0x0006ce52) input_focus_pane_cp06

0x888c,	// (0x00073c84) list_chi_dic_pane_ParamLimits

0x888c,	// (0x00073c84) list_chi_dic_pane

0x88a9,	// (0x00073ca1) list_chi_dic_pane_t1_ParamLimits

0x88a9,	// (0x00073ca1) list_chi_dic_pane_t1

0x1a5a,	// (0x0006ce52) list_highlight_pane_cp020

0x2912,	// (0x0006dd0a) bg_cale_heading_pane_g1

0x88bc,	// (0x00073cb4) bg_cale_heading_pane_g2

0x88c4,	// (0x00073cbc) bg_cale_heading_pane_g3

0x88cc,	// (0x00073cc4) bg_cale_heading_pane_g4

0x88d6,	// (0x00073cce) bg_cale_heading_pane_g5

0x88e0,	// (0x00073cd8) bg_cale_heading_pane_g6

0x88e8,	// (0x00073ce0) bg_cale_heading_pane_g7

0x88f0,	// (0x00073ce8) bg_cale_heading_pane_g8

0x88fa,	// (0x00073cf2) bg_cale_heading_pane_g9

0x0008,

0xf2f3,	// (0x0007a6eb) bg_cale_heading_pane_g

0x2912,	// (0x0006dd0a) bg_cale_side_pane_g1

0x8904,	// (0x00073cfc) bg_cale_side_pane_g2

0x890e,	// (0x00073d06) bg_cale_side_pane_g3

0x8918,	// (0x00073d10) bg_cale_side_pane_g4

0x8922,	// (0x00073d1a) bg_cale_side_pane_g5

0x892c,	// (0x00073d24) bg_cale_side_pane_g6

0x8936,	// (0x00073d2e) bg_cale_side_pane_g7

0x8940,	// (0x00073d38) bg_cale_side_pane_g8

0x8948,	// (0x00073d40) bg_cale_side_pane_g9

0x0008,

0xf306,	// (0x0007a6fe) bg_cale_side_pane_g

0x8950,	// (0x00073d48) popup_call_status_window_ParamLimits

0x8950,	// (0x00073d48) popup_call_status_window

0x291a,	// (0x0006dd12) stacon_top_pane

0x2922,	// (0x0006dd1a) status_pane_ParamLimits

0x2922,	// (0x0006dd1a) status_pane

0x2937,	// (0x0006dd2f) status_small_pane

0x293f,	// (0x0006dd37) control_pane

0x1a5a,	// (0x0006ce52) stacon_bottom_pane

0x2947,	// (0x0006dd3f) list_single_mce_smart_pane_t1_ParamLimits

0x2947,	// (0x0006dd3f) list_single_mce_smart_pane_t1

0x295a,	// (0x0006dd52) list_single_mce_smart_pane_t2_ParamLimits

0x295a,	// (0x0006dd52) list_single_mce_smart_pane_t2

0x0001,

0xf319,	// (0x0007a711) list_single_mce_smart_pane_t_ParamLimits

0xf319,	// (0x0007a711) list_single_mce_smart_pane_t

0x895c,	// (0x00073d54) compass_pane

0x8968,	// (0x00073d60) main_location2_pane_t1

0x897c,	// (0x00073d74) main_location2_pane_t2

0x8990,	// (0x00073d88) main_location2_pane_t3

0x0003,

0xf31e,	// (0x0007a716) main_location2_pane_t

0x2979,	// (0x0006dd71) compass_pane_g1_ParamLimits

0x2979,	// (0x0006dd71) compass_pane_g1

0x89da,	// (0x00073dd2) compass_pane_t1

0x89e9,	// (0x00073de1) compass_pane_t2

0x0005,

0xf327,	// (0x0007a71f) compass_pane_t

0x8a34,	// (0x00073e2c) text_secondary_cp61

0x29f7,	// (0x0006ddef) navi_pane_cams_g5

0x2cfb,	// (0x0006e0f3) navi_pane_im_t1

0x2d09,	// (0x0006e101) navi_pane_mp_g1_ParamLimits

0x2d09,	// (0x0006e101) navi_pane_mp_g1

0x2d1d,	// (0x0006e115) navi_pane_mp_g2_ParamLimits

0x2d1d,	// (0x0006e115) navi_pane_mp_g2

0x2d29,	// (0x0006e121) navi_pane_mp_g3_ParamLimits

0x2d29,	// (0x0006e121) navi_pane_mp_g3

0x0002,

0xf33b,	// (0x0007a733) navi_pane_mp_g_ParamLimits

0xf33b,	// (0x0007a733) navi_pane_mp_g

0x2d35,	// (0x0006e12d) navi_pane_mp_t1

0x2d43,	// (0x0006e13b) navi_pane_mp_t2

0x0002,

0xf342,	// (0x0007a73a) navi_pane_mp_t

0x2dae,	// (0x0006e1a6) navi_pane_vt_g1

0x2d35,	// (0x0006e12d) navi_pane_vt_t1

0x2db6,	// (0x0006e1ae) navi_slider_pane

0x1f9a,	// (0x0006d392) zooming_pane

0x2dc6,	// (0x0006e1be) navi_slider_pane_g1

0x8a6f,	// (0x00073e67) navi_slider_pane_g2

0x0006,

0xf349,	// (0x0007a741) navi_slider_pane_g

0x2dea,	// (0x0006e1e2) aid_levels_zoom

0x2df2,	// (0x0006e1ea) zooming_pane_g1

0x2dfa,	// (0x0006e1f2) zooming_pane_g2

0x2dfa,	// (0x0006e1f2) zooming_pane_g3

0x0002,

0xf358,	// (0x0007a750) zooming_pane_g

0x2e02,	// (0x0006e1fa) level_10_zoom

0x2e0b,	// (0x0006e203) level_11_zoom

0x2e14,	// (0x0006e20c) level_1_zoom

0x2e1d,	// (0x0006e215) level_2_zoom

0x2e26,	// (0x0006e21e) level_3_zoom

0x2e2f,	// (0x0006e227) level_4_zoom

0x2e38,	// (0x0006e230) level_5_zoom

0x2e41,	// (0x0006e239) level_6_zoom

0x2e4a,	// (0x0006e242) level_7_zoom

0x2e53,	// (0x0006e24b) level_8_zoom

0x2e5c,	// (0x0006e254) level_9_zoom

0x2e6d,	// (0x0006e265) popup_phob_thumbnail_window_g1

0x2e75,	// (0x0006e26d) popup_phob_thumbnail_window_g2

0x0001,

0xf35f,	// (0x0007a757) popup_phob_thumbnail_window_g

0x92e9,	// (0x000746e1) level_1_location

0x92f1,	// (0x000746e9) level_2_location

0x92f9,	// (0x000746f1) level_3_location

0x9303,	// (0x000746fb) level_4_location

0x1f9a,	// (0x0006d392) level_5_location

0x8a81,	// (0x00073e79) mce_icon_pane_g1

0x8a89,	// (0x00073e81) mce_icon_pane_g2

0x0001,

0xf364,	// (0x0007a75c) mce_icon_pane_g

0x8a91,	// (0x00073e89) main_mup_pane_g1_ParamLimits

0x8a91,	// (0x00073e89) main_mup_pane_g1

0x1d68,	// (0x0006d160) main_mup_pane_g2_ParamLimits

0x1d68,	// (0x0006d160) main_mup_pane_g2

0x1d68,	// (0x0006d160) main_mup_pane_g3_ParamLimits

0x1d68,	// (0x0006d160) main_mup_pane_g3

0x1d68,	// (0x0006d160) main_mup_pane_g4_ParamLimits

0x1d68,	// (0x0006d160) main_mup_pane_g4

0x1d68,	// (0x0006d160) main_mup_pane_g5_ParamLimits

0x1d68,	// (0x0006d160) main_mup_pane_g5

0x1d68,	// (0x0006d160) main_mup_pane_g6_ParamLimits

0x1d68,	// (0x0006d160) main_mup_pane_g6

0x1d68,	// (0x0006d160) main_mup_pane_g7_ParamLimits

0x1d68,	// (0x0006d160) main_mup_pane_g7

0x1d68,	// (0x0006d160) main_mup_pane_g8_ParamLimits

0x1d68,	// (0x0006d160) main_mup_pane_g8

0x1d68,	// (0x0006d160) main_mup_pane_g9_ParamLimits

0x1d68,	// (0x0006d160) main_mup_pane_g9

0x1d68,	// (0x0006d160) main_mup_pane_g10_ParamLimits

0x1d68,	// (0x0006d160) main_mup_pane_g10

0x1d68,	// (0x0006d160) main_mup_pane_g11_ParamLimits

0x1d68,	// (0x0006d160) main_mup_pane_g11

0x1d5a,	// (0x0006d152) main_mup_pane_g12_ParamLimits

0x1d5a,	// (0x0006d152) main_mup_pane_g12

0x1d68,	// (0x0006d160) main_mup_pane_g13_ParamLimits

0x1d68,	// (0x0006d160) main_mup_pane_g13

0x000c,

0xf369,	// (0x0007a761) main_mup_pane_g_ParamLimits

0xf369,	// (0x0007a761) main_mup_pane_g

0x1d76,	// (0x0006d16e) main_mup_pane_t1_ParamLimits

0x1d76,	// (0x0006d16e) main_mup_pane_t1

0x1d76,	// (0x0006d16e) main_mup_pane_t2_ParamLimits

0x1d76,	// (0x0006d16e) main_mup_pane_t2

0x1d76,	// (0x0006d16e) main_mup_pane_t3_ParamLimits

0x1d76,	// (0x0006d16e) main_mup_pane_t3

0x1da8,	// (0x0006d1a0) main_mup_pane_t4_ParamLimits

0x1da8,	// (0x0006d1a0) main_mup_pane_t4

0x1da8,	// (0x0006d1a0) main_mup_pane_t5_ParamLimits

0x1da8,	// (0x0006d1a0) main_mup_pane_t5

0x1d94,	// (0x0006d18c) main_mup_pane_t6_ParamLimits

0x1d94,	// (0x0006d18c) main_mup_pane_t6

0x0005,

0xf384,	// (0x0007a77c) main_mup_pane_t_ParamLimits

0xf384,	// (0x0007a77c) main_mup_pane_t

0x1ce5,	// (0x0006d0dd) mup_progress_pane_ParamLimits

0x1ce5,	// (0x0006d0dd) mup_progress_pane

0x4378,	// (0x0006f770) mup_visualizer_pane_ParamLimits

0x4378,	// (0x0006f770) mup_visualizer_pane

0x4378,	// (0x0006f770) mup_volume_pane_ParamLimits

0x4378,	// (0x0006f770) mup_volume_pane

0x1d5a,	// (0x0006d152) mup_visualizer_pane_g1_ParamLimits

0x1d5a,	// (0x0006d152) mup_visualizer_pane_g1

0x2ead,	// (0x0006e2a5) mup_visualizer_pane_g2_ParamLimits

0x2ead,	// (0x0006e2a5) mup_visualizer_pane_g2

0x1d4c,	// (0x0006d144) mup_visualizer_pane_g3_ParamLimits

0x1d4c,	// (0x0006d144) mup_visualizer_pane_g3

0x0002,

0xf391,	// (0x0007a789) mup_visualizer_pane_g_ParamLimits

0xf391,	// (0x0007a789) mup_visualizer_pane_g

0x1d8a,	// (0x0006d182) mup_volume_pane_g1

0x1d8a,	// (0x0006d182) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x0007a4a7) mup_volume_pane_g

0x1d8a,	// (0x0006d182) mup_progress_pane_g1

0x1d8a,	// (0x0006d182) mup_progress_pane_g2

0x1d8a,	// (0x0006d182) mup_progress_pane_g3

0x0002,

0xf398,	// (0x0007a790) mup_progress_pane_g

0x1a5a,	// (0x0006ce52) bg_popup_window_pane_cp05

0x2ebb,	// (0x0006e2b3) heading_pane_cp02_ParamLimits

0x2ebb,	// (0x0006e2b3) heading_pane_cp02

0x2ed5,	// (0x0006e2cd) list_popup_blid_pane

0x2edd,	// (0x0006e2d5) list_blid_sat_info_pane_ParamLimits

0x2edd,	// (0x0006e2d5) list_blid_sat_info_pane

0x2ef0,	// (0x0006e2e8) list_blid_sat_info_pane_g1

0x2ef8,	// (0x0006e2f0) list_blid_sat_info_pane_t1

0x8b8c,	// (0x00073f84) mup_equalizer_pane_ParamLimits

0x8b8c,	// (0x00073f84) mup_equalizer_pane

0x8bad,	// (0x00073fa5) mup_equalizer_pane_cp1_ParamLimits

0x8bad,	// (0x00073fa5) mup_equalizer_pane_cp1

0x8bce,	// (0x00073fc6) mup_equalizer_pane_cp2_ParamLimits

0x8bce,	// (0x00073fc6) mup_equalizer_pane_cp2

0x8bef,	// (0x00073fe7) mup_equalizer_pane_cp3_ParamLimits

0x8bef,	// (0x00073fe7) mup_equalizer_pane_cp3

0x8c10,	// (0x00074008) mup_equalizer_pane_cp4_ParamLimits

0x8c10,	// (0x00074008) mup_equalizer_pane_cp4

0x8c31,	// (0x00074029) mup_equalizer_pane_cp5

0x8c47,	// (0x0007403f) mup_equalizer_pane_cp6

0x8c5f,	// (0x00074057) mup_equalizer_pane_cp7

0x406e,	// (0x0006f466) bg_popup_call_poc_act_pane_g9

0x4076,	// (0x0006f46e) bg_popup_call_poc_act_pane_g10

0x407e,	// (0x0006f476) bg_popup_call_poc_act_pane_g11

0x000a,

0x1cc3,	// (0x0006d0bb) mup_scale_pane

0x1cdb,	// (0x0006d0d3) mup_scale_pane_g1

0x2f06,	// (0x0006e2fe) mup_scale_pane_g2

0x0006,

0xf3b4,	// (0x0007a7ac) mup_scale_pane_g

0x2f2a,	// (0x0006e322) msg_data_pane

0x2f32,	// (0x0006e32a) scroll_pane_cp017

0x5af2,	// (0x00070eea) bg_list_pane_cp04_ParamLimits

0x5af2,	// (0x00070eea) bg_list_pane_cp04

0x2f42,	// (0x0006e33a) msg_data_pane_g1

0x8c89,	// (0x00074081) msg_data_pane_g2

0x8c91,	// (0x00074089) msg_data_pane_g3

0x8c99,	// (0x00074091) msg_data_pane_g4

0x8ca1,	// (0x00074099) msg_data_pane_g5

0x8ca9,	// (0x000740a1) msg_data_pane_g6

0x8cb1,	// (0x000740a9) msg_data_pane_g7

0x0006,

0xf3c3,	// (0x0007a7bb) msg_data_pane_g

0x5b16,	// (0x00070f0e) msg_text_pane_ParamLimits

0x5b16,	// (0x00070f0e) msg_text_pane

0x8cb9,	// (0x000740b1) qrid_highlight_pane_cp011_ParamLimits

0x8cb9,	// (0x000740b1) qrid_highlight_pane_cp011

0x1a5a,	// (0x0006ce52) msg_body_pane

0x1cc3,	// (0x0006d0bb) msg_header_pane

0x5b77,	// (0x00070f6f) input_focus_pane_cp07

0x5b98,	// (0x00070f90) msg_header_pane_t1_ParamLimits

0x5b98,	// (0x00070f90) msg_header_pane_t1

0x5bb4,	// (0x00070fac) msg_header_pane_t2_ParamLimits

0x5bb4,	// (0x00070fac) msg_header_pane_t2

0x0001,

0xf3d7,	// (0x0007a7cf) msg_header_pane_t_ParamLimits

0xf3d7,	// (0x0007a7cf) msg_header_pane_t

0x2fbb,	// (0x0006e3b3) msg_body_pane_g1

0x5bd4,	// (0x00070fcc) msg_body_pane_t1_ParamLimits

0x5bd4,	// (0x00070fcc) msg_body_pane_t1

0x5c05,	// (0x00070ffd) msg_body_pane_t2_ParamLimits

0x5c05,	// (0x00070ffd) msg_body_pane_t2

0x5c17,	// (0x0007100f) msg_body_pane_t3_ParamLimits

0x5c17,	// (0x0007100f) msg_body_pane_t3

0x0002,

0xf3dc,	// (0x0007a7d4) msg_body_pane_t_ParamLimits

0xf3dc,	// (0x0007a7d4) msg_body_pane_t

0x8d27,	// (0x0007411f) main_viewer_pane_g1_ParamLimits

0x8d27,	// (0x0007411f) main_viewer_pane_g1

0x8d33,	// (0x0007412b) main_viewer_pane_g2_ParamLimits

0x8d33,	// (0x0007412b) main_viewer_pane_g2

0x8d3f,	// (0x00074137) main_viewer_pane_g3_ParamLimits

0x8d3f,	// (0x00074137) main_viewer_pane_g3

0x8d50,	// (0x00074148) main_viewer_pane_g4_ParamLimits

0x8d50,	// (0x00074148) main_viewer_pane_g4

0x8d61,	// (0x00074159) main_viewer_pane_g5_ParamLimits

0x8d61,	// (0x00074159) main_viewer_pane_g5

0x8d61,	// (0x00074159) main_viewer_pane_g7_ParamLimits

0x8d61,	// (0x00074159) main_viewer_pane_g7

0x8d73,	// (0x0007416b) main_viewer_pane_g8_ParamLimits

0x8d73,	// (0x0007416b) main_viewer_pane_g8

0x0007,

0xf3ec,	// (0x0007a7e4) main_viewer_pane_g_ParamLimits

0xf3ec,	// (0x0007a7e4) main_viewer_pane_g

0x3018,	// (0x0006e410) viewer_content_pane_ParamLimits

0x3018,	// (0x0006e410) viewer_content_pane

0x8dab,	// (0x000741a3) main_postcard_pane_g1_ParamLimits

0x8dab,	// (0x000741a3) main_postcard_pane_g1

0x8db9,	// (0x000741b1) main_postcard_pane_g2_ParamLimits

0x8db9,	// (0x000741b1) main_postcard_pane_g2

0x8dc7,	// (0x000741bf) main_postcard_pane_g3_ParamLimits

0x8dc7,	// (0x000741bf) main_postcard_pane_g3

0x0005,

0xf3fd,	// (0x0007a7f5) main_postcard_pane_g_ParamLimits

0xf3fd,	// (0x0007a7f5) main_postcard_pane_g

0x8dd7,	// (0x000741cf) main_postcard_pane_g4

0x41df,	// (0x0006f5d7) smil_status_volume_pane_g2

0x8e03,	// (0x000741fb) postcard_pane_ParamLimits

0x8e03,	// (0x000741fb) postcard_pane

0x3819,	// (0x0006ec11) postcard_pane_g1_ParamLimits

0x3819,	// (0x0006ec11) postcard_pane_g1

0x8e35,	// (0x0007422d) postcard_pane_g2_ParamLimits

0x8e35,	// (0x0007422d) postcard_pane_g2

0x8e41,	// (0x00074239) postcard_pane_g3_ParamLimits

0x8e41,	// (0x00074239) postcard_pane_g3

0x3034,	// (0x0006e42c) postcard_pane_g4_ParamLimits

0x3034,	// (0x0006e42c) postcard_pane_g4

0x8e4d,	// (0x00074245) postcard_pane_g5_ParamLimits

0x8e4d,	// (0x00074245) postcard_pane_g5

0x8e59,	// (0x00074251) postcard_pane_g6_ParamLimits

0x8e59,	// (0x00074251) postcard_pane_g6

0x3026,	// (0x0006e41e) postcard_pane_g7_ParamLimits

0x3026,	// (0x0006e41e) postcard_pane_g7

0x0006,

0xf40a,	// (0x0007a802) postcard_pane_g_ParamLimits

0xf40a,	// (0x0007a802) postcard_pane_g

0x8e65,	// (0x0007425d) main_mp2_pane_g1_ParamLimits

0x8e65,	// (0x0007425d) main_mp2_pane_g1

0x8e71,	// (0x00074269) main_mp2_pane_g2_ParamLimits

0x8e71,	// (0x00074269) main_mp2_pane_g2

0x8e7d,	// (0x00074275) main_mp2_pane_g3_ParamLimits

0x8e7d,	// (0x00074275) main_mp2_pane_g3

0x0002,

0xf419,	// (0x0007a811) main_mp2_pane_g_ParamLimits

0xf419,	// (0x0007a811) main_mp2_pane_g

0x8e89,	// (0x00074281) main_mp2_pane_t1_ParamLimits

0x8e89,	// (0x00074281) main_mp2_pane_t1

0x8ea0,	// (0x00074298) main_mp2_pane_t2_ParamLimits

0x8ea0,	// (0x00074298) main_mp2_pane_t2

0x8eb2,	// (0x000742aa) main_mp2_pane_t3_ParamLimits

0x8eb2,	// (0x000742aa) main_mp2_pane_t3

0x0002,

0xf420,	// (0x0007a818) main_mp2_pane_t_ParamLimits

0xf420,	// (0x0007a818) main_mp2_pane_t

0x1ce5,	// (0x0006d0dd) pec_content_pane_ParamLimits

0x1ce5,	// (0x0006d0dd) pec_content_pane

0x163d,	// (0x0006ca35) scroll_pane_cp015

0x2e9f,	// (0x0006e297) pec_attribute_pane_ParamLimits

0x2e9f,	// (0x0006e297) pec_attribute_pane

0x1d4c,	// (0x0006d144) pec_content_pane_g1_ParamLimits

0x1d4c,	// (0x0006d144) pec_content_pane_g1

0x3042,	// (0x0006e43a) pec_content_pane_t1_ParamLimits

0x3042,	// (0x0006e43a) pec_content_pane_t1

0x3056,	// (0x0006e44e) pec_content_pane_t2_ParamLimits

0x3056,	// (0x0006e44e) pec_content_pane_t2

0x0001,

0xf427,	// (0x0007a81f) pec_content_pane_t_ParamLimits

0xf427,	// (0x0007a81f) pec_content_pane_t

0x1d3e,	// (0x0006d136) list_single_graphic_pane_cp01_ParamLimits

0x1d3e,	// (0x0006d136) list_single_graphic_pane_cp01

0x1cc3,	// (0x0006d0bb) bg_popup_sub_pane_cp04

0x306a,	// (0x0006e462) popup_mup_playback_window_g1

0x3076,	// (0x0006e46e) popup_mup_playback_window_t1

0x308b,	// (0x0006e483) popup_mup_playback_window_t2

0x0001,

0xf42c,	// (0x0007a824) popup_mup_playback_window_t

0x30c2,	// (0x0006e4ba) main_image_pane_g1_ParamLimits

0x30c2,	// (0x0006e4ba) main_image_pane_g1

0x3105,	// (0x0006e4fd) scroll_pane_cp018_ParamLimits

0x3105,	// (0x0006e4fd) scroll_pane_cp018

0x311d,	// (0x0006e515) scroll_pane_cp016_ParamLimits

0x311d,	// (0x0006e515) scroll_pane_cp016

0x8f35,	// (0x0007432d) smil2_image_pane_ParamLimits

0x8f35,	// (0x0007432d) smil2_image_pane

0x8f65,	// (0x0007435d) smil2_root_pane_ParamLimits

0x8f65,	// (0x0007435d) smil2_root_pane

0x8f91,	// (0x00074389) smil2_text_pane_ParamLimits

0x8f91,	// (0x00074389) smil2_text_pane

0x163d,	// (0x0006ca35) bg_list_pane_cp06

0x163d,	// (0x0006ca35) grid_radio_pane

0x1a5a,	// (0x0006ce52) bg_popup_window_pane_cp06

0x24de,	// (0x0006d8d6) main_fmradio_pane_t1

0x40c6,	// (0x0006f4be) heading_pane_cp04

0x24de,	// (0x0006d8d6) main_fmradio_pane_t2

0x40ce,	// (0x0006f4c6) popup_cale_lunar_info_window_g1

0x24de,	// (0x0006d8d6) main_fmradio_pane_t3

0x40d6,	// (0x0006f4ce) popup_cale_lunar_info_window_g2

0x24de,	// (0x0006d8d6) main_fmradio_pane_t4

0x0001,

0x24de,	// (0x0006d8d6) main_fmradio_pane_t5

0x0004,

0xf514,	// (0x0007a90c) popup_cale_lunar_info_window_g

0xf28c,	// (0x0007a684) main_fmradio_pane_t

0x163d,	// (0x0006ca35) wait_bar_pane_cp03

0x1d3e,	// (0x0006d136) cell_fmradio_pane_ParamLimits

0x1d3e,	// (0x0006d136) cell_fmradio_pane

0x1d4c,	// (0x0006d144) cell_fmradio_pane_g1_ParamLimits

0x1d4c,	// (0x0006d144) cell_fmradio_pane_g1

0x163d,	// (0x0006ca35) grid_highlight_pane_cp011

0x3151,	// (0x0006e549) poc_content_pane_ParamLimits

0x3151,	// (0x0006e549) poc_content_pane

0x3163,	// (0x0006e55b) scroll_pane_cp019

0x8fd1,	// (0x000743c9) popup_call_poc_act_window_ParamLimits

0x8fd1,	// (0x000743c9) popup_call_poc_act_window

0x8fde,	// (0x000743d6) popup_call_poc_inact_window_ParamLimits

0x8fde,	// (0x000743d6) popup_call_poc_inact_window

0xf4d8,	// (0x0007a8d0) bg_popup_call_poc_act_pane_g

0x4086,	// (0x0006f47e) bg_popup_call_poc_inact_pane_g1

0x408e,	// (0x0006f486) bg_popup_call_poc_inact_pane_g2

0x316b,	// (0x0006e563) popup_call_poc_act_window_g2

0x4096,	// (0x0006f48e) bg_popup_call_poc_inact_pane_g3

0x4016,	// (0x0006f40e) bg_popup_call_poc_inact_pane_g4

0x409e,	// (0x0006f496) bg_popup_call_poc_inact_pane_g5

0x3173,	// (0x0006e56b) popup_call_poc_act_window_t1_ParamLimits

0x3173,	// (0x0006e56b) popup_call_poc_act_window_t1

0x319b,	// (0x0006e593) popup_call_poc_act_window_t2_ParamLimits

0x319b,	// (0x0006e593) popup_call_poc_act_window_t2

0x31c3,	// (0x0006e5bb) popup_call_poc_act_window_t3_ParamLimits

0x31c3,	// (0x0006e5bb) popup_call_poc_act_window_t3

0x31eb,	// (0x0006e5e3) popup_call_poc_act_window_t4_ParamLimits

0x31eb,	// (0x0006e5e3) popup_call_poc_act_window_t4

0x0003,

0xf441,	// (0x0007a839) popup_call_poc_act_window_t_ParamLimits

0xf441,	// (0x0007a839) popup_call_poc_act_window_t

0x40a6,	// (0x0006f49e) bg_popup_call_poc_inact_pane_g6

0x40ae,	// (0x0006f4a6) bg_popup_call_poc_inact_pane_g7

0x40b6,	// (0x0006f4ae) bg_popup_call_poc_inact_pane_g8

0x31fd,	// (0x0006e5f5) popup_call_poc_inact_window_g2

0x40be,	// (0x0006f4b6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ef,	// (0x0007a8e7) bg_popup_call_poc_inact_pane_g

0x3205,	// (0x0006e5fd) popup_call_poc_inact_window_t1_ParamLimits

0x3205,	// (0x0006e5fd) popup_call_poc_inact_window_t1

0x321a,	// (0x0006e612) popup_call_poc_inact_window_t2_ParamLimits

0x321a,	// (0x0006e612) popup_call_poc_inact_window_t2

0x322f,	// (0x0006e627) popup_call_poc_inact_window_t3_ParamLimits

0x322f,	// (0x0006e627) popup_call_poc_inact_window_t3

0x0002,

0xf44a,	// (0x0007a842) popup_call_poc_inact_window_t_ParamLimits

0xf44a,	// (0x0007a842) popup_call_poc_inact_window_t

0x416a,	// (0x0006f562) context_pane_ParamLimits

0x95e3,	// (0x000749db) signal_pane_ParamLimits

0x1f9a,	// (0x0006d392) main_call2_pane

0x9556,	// (0x0007494e) popup_phob_thumbnail2_window_ParamLimits

0x9556,	// (0x0007494e) popup_phob_thumbnail2_window

0x8cd5,	// (0x000740cd) aid_hotspot_pointer_arrow_pane

0x8cdd,	// (0x000740d5) aid_hotspot_pointer_hand_pane

0x92b1,	// (0x000746a9) phob_pre_status_pane_g5

0x1d3e,	// (0x0006d136) cams_zoom_pane_ParamLimits

0x1d3e,	// (0x0006d136) image_vga_pane_ParamLimits

0x1d5a,	// (0x0006d152) main_camera_pane_g1_ParamLimits

0x1d5a,	// (0x0006d152) main_camera_pane_g2_ParamLimits

0x1d5a,	// (0x0006d152) main_camera_pane_g3_ParamLimits

0x1d5a,	// (0x0006d152) main_camera_pane_g4_ParamLimits

0x1d5a,	// (0x0006d152) main_camera_pane_g5_ParamLimits

0x1d5a,	// (0x0006d152) main_camera_pane_g6_ParamLimits

0x1d5a,	// (0x0006d152) main_camera_pane_g7_ParamLimits

0xf180,	// (0x0007a578) main_camera_pane_g_ParamLimits

0x1da8,	// (0x0006d1a0) main_camera_pane_t1_ParamLimits

0x1da8,	// (0x0006d1a0) main_camera_pane_t2_ParamLimits

0xf191,	// (0x0007a589) main_camera_pane_t_ParamLimits

0x1cc3,	// (0x0006d0bb) bg_popup_preview_window_pane_cp01_ParamLimits

0x1cc3,	// (0x0006d0bb) bg_popup_preview_window_pane_cp01

0x3244,	// (0x0006e63c) popup_phob_thumbnail2_window_g1_ParamLimits

0x3244,	// (0x0006e63c) popup_phob_thumbnail2_window_g1

0x1a5a,	// (0x0006ce52) call2_cli_visual_pane

0x8ffa,	// (0x000743f2) popup_call2_audio_conf_window_ParamLimits

0x8ffa,	// (0x000743f2) popup_call2_audio_conf_window

0x900f,	// (0x00074407) popup_call2_audio_first_window_ParamLimits

0x900f,	// (0x00074407) popup_call2_audio_first_window

0x90ad,	// (0x000744a5) popup_call2_audio_in_window_ParamLimits

0x90ad,	// (0x000744a5) popup_call2_audio_in_window

0x90ef,	// (0x000744e7) popup_call2_audio_out_window_ParamLimits

0x90ef,	// (0x000744e7) popup_call2_audio_out_window

0x9151,	// (0x00074549) popup_call2_audio_second_window_ParamLimits

0x9151,	// (0x00074549) popup_call2_audio_second_window

0x91af,	// (0x000745a7) popup_call2_audio_wait_window_ParamLimits

0x91af,	// (0x000745a7) popup_call2_audio_wait_window

0x1a5a,	// (0x0006ce52) bg_popup_call2_act_pane_cp03

0x1ca5,	// (0x0006d09d) list_conf_pane_cp

0x3250,	// (0x0006e648) popup_call2_audio_conf_window_t1

0x325e,	// (0x0006e656) list_single_graphic_popup_conf2_pane_ParamLimits

0x325e,	// (0x0006e656) list_single_graphic_popup_conf2_pane

0x2865,	// (0x0006dc5d) list_highlight_pane_cp04

0x3271,	// (0x0006e669) list_single_graphic_popup_conf2_pane_g1

0x2876,	// (0x0006dc6e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf451,	// (0x0007a849) list_single_graphic_popup_conf2_pane_g

0x327b,	// (0x0006e673) list_single_graphic_popup_conf2_pane_t1

0x3289,	// (0x0006e681) bg_popup_call2_act_pane_cp01_ParamLimits

0x3289,	// (0x0006e681) bg_popup_call2_act_pane_cp01

0x3313,	// (0x0006e70b) call_type_pane_cp05_ParamLimits

0x3313,	// (0x0006e70b) call_type_pane_cp05

0x3367,	// (0x0006e75f) popup_call2_audio_second_window_g1_ParamLimits

0x3367,	// (0x0006e75f) popup_call2_audio_second_window_g1

0x33bb,	// (0x0006e7b3) popup_call2_audio_second_window_g2_ParamLimits

0x33bb,	// (0x0006e7b3) popup_call2_audio_second_window_g2

0x0002,

0xf456,	// (0x0007a84e) popup_call2_audio_second_window_g_ParamLimits

0xf456,	// (0x0007a84e) popup_call2_audio_second_window_g

0x3420,	// (0x0006e818) popup_call2_audio_second_window_t1_ParamLimits

0x3420,	// (0x0006e818) popup_call2_audio_second_window_t1

0x34db,	// (0x0006e8d3) popup_call2_audio_second_window_t2_ParamLimits

0x34db,	// (0x0006e8d3) popup_call2_audio_second_window_t2

0x352e,	// (0x0006e926) popup_call2_audio_second_window_t3_ParamLimits

0x352e,	// (0x0006e926) popup_call2_audio_second_window_t3

0x0003,

0xf45d,	// (0x0007a855) popup_call2_audio_second_window_t_ParamLimits

0xf45d,	// (0x0007a855) popup_call2_audio_second_window_t

0x1a5a,	// (0x0006ce52) bg_popup_call2_in_pane_cp02

0x1a64,	// (0x0006ce5c) call_type_pane_cp04

0x91ee,	// (0x000745e6) popup_call2_audio_wait_window_g1

0x91f6,	// (0x000745ee) popup_call2_audio_wait_window_g2

0x0001,

0xf466,	// (0x0007a85e) popup_call2_audio_wait_window_g

0x1a7c,	// (0x0006ce74) popup_call2_audio_wait_window_t3

0x3621,	// (0x0006ea19) bg_popup_call2_act_pane_ParamLimits

0x3621,	// (0x0006ea19) bg_popup_call2_act_pane

0x36e1,	// (0x0006ead9) call_type_pane_cp03_ParamLimits

0x36e1,	// (0x0006ead9) call_type_pane_cp03

0x3745,	// (0x0006eb3d) popup_call2_audio_first_window_g1_ParamLimits

0x3745,	// (0x0006eb3d) popup_call2_audio_first_window_g1

0x37b5,	// (0x0006ebad) popup_call2_audio_first_window_g2_ParamLimits

0x37b5,	// (0x0006ebad) popup_call2_audio_first_window_g2

0x3819,	// (0x0006ec11) popup_call2_audio_first_window_g3_ParamLimits

0x3819,	// (0x0006ec11) popup_call2_audio_first_window_g3

0x0004,

0xf46b,	// (0x0007a863) popup_call2_audio_first_window_g_ParamLimits

0xf46b,	// (0x0007a863) popup_call2_audio_first_window_g

0x38a1,	// (0x0006ec99) popup_call2_audio_first_window_t1_ParamLimits

0x38a1,	// (0x0006ec99) popup_call2_audio_first_window_t1

0x39a4,	// (0x0006ed9c) popup_call2_audio_first_window_t4_ParamLimits

0x39a4,	// (0x0006ed9c) popup_call2_audio_first_window_t4

0x3a87,	// (0x0006ee7f) popup_call2_audio_first_window_t5_ParamLimits

0x3a87,	// (0x0006ee7f) popup_call2_audio_first_window_t5

0x0003,

0xf476,	// (0x0007a86e) popup_call2_audio_first_window_t_ParamLimits

0xf476,	// (0x0007a86e) popup_call2_audio_first_window_t

0x1cbb,	// (0x0006d0b3) bg_popup_call2_act_pane_g1

0x40de,	// (0x0006f4d6) popup_cale_lunar_info_window_t1

0x40ec,	// (0x0006f4e4) popup_cale_lunar_info_window_t2

0x40fa,	// (0x0006f4f2) popup_cale_lunar_info_window_t3

0x1a5a,	// (0x0006ce52) bg_popup_call2_bubble_pane

0x3b88,	// (0x0006ef80) bg_popup_call2_in_pane_cp01_ParamLimits

0x3b88,	// (0x0006ef80) bg_popup_call2_in_pane_cp01

0x1736,	// (0x0006cb2e) call_type_pane_cp02

0x91fe,	// (0x000745f6) popup_call2_audio_out_window_g1_ParamLimits

0x91fe,	// (0x000745f6) popup_call2_audio_out_window_g1

0x3bd0,	// (0x0006efc8) popup_call2_audio_out_window_g2_ParamLimits

0x3bd0,	// (0x0006efc8) popup_call2_audio_out_window_g2

0x922a,	// (0x00074622) popup_call2_audio_out_window_g3_ParamLimits

0x922a,	// (0x00074622) popup_call2_audio_out_window_g3

0x0003,

0xf47f,	// (0x0007a877) popup_call2_audio_out_window_g_ParamLimits

0xf47f,	// (0x0007a877) popup_call2_audio_out_window_g

0x3c07,	// (0x0006efff) popup_call2_audio_out_window_t1_ParamLimits

0x3c07,	// (0x0006efff) popup_call2_audio_out_window_t1

0x3c66,	// (0x0006f05e) popup_call2_audio_out_window_t2_ParamLimits

0x3c66,	// (0x0006f05e) popup_call2_audio_out_window_t2

0x3cba,	// (0x0006f0b2) popup_call2_audio_out_window_t3_ParamLimits

0x3cba,	// (0x0006f0b2) popup_call2_audio_out_window_t3

0x3cd0,	// (0x0006f0c8) popup_call2_audio_out_window_t4_ParamLimits

0x3cd0,	// (0x0006f0c8) popup_call2_audio_out_window_t4

0x3ce6,	// (0x0006f0de) popup_call2_audio_out_window_t5_ParamLimits

0x3ce6,	// (0x0006f0de) popup_call2_audio_out_window_t5

0x0005,

0xf488,	// (0x0007a880) popup_call2_audio_out_window_t_ParamLimits

0xf488,	// (0x0007a880) popup_call2_audio_out_window_t

0x3d4a,	// (0x0006f142) bg_popup_call2_in_pane_ParamLimits

0x3d4a,	// (0x0006f142) bg_popup_call2_in_pane

0x3da6,	// (0x0006f19e) popup_call2_audio_in_window_g1_ParamLimits

0x3da6,	// (0x0006f19e) popup_call2_audio_in_window_g1

0x3dde,	// (0x0006f1d6) popup_call2_audio_in_window_g2_ParamLimits

0x3dde,	// (0x0006f1d6) popup_call2_audio_in_window_g2

0x3e16,	// (0x0006f20e) popup_call2_audio_in_window_g3_ParamLimits

0x3e16,	// (0x0006f20e) popup_call2_audio_in_window_g3

0x0003,

0xf495,	// (0x0007a88d) popup_call2_audio_in_window_g_ParamLimits

0xf495,	// (0x0007a88d) popup_call2_audio_in_window_g

0x3e6e,	// (0x0006f266) popup_call2_audio_in_window_t1_ParamLimits

0x3e6e,	// (0x0006f266) popup_call2_audio_in_window_t1

0x3eee,	// (0x0006f2e6) popup_call2_audio_in_window_t2_ParamLimits

0x3eee,	// (0x0006f2e6) popup_call2_audio_in_window_t2

0x3f6e,	// (0x0006f366) popup_call2_audio_in_window_t3_ParamLimits

0x3f6e,	// (0x0006f366) popup_call2_audio_in_window_t3

0x3f88,	// (0x0006f380) popup_call2_audio_in_window_t4_ParamLimits

0x3f88,	// (0x0006f380) popup_call2_audio_in_window_t4

0x3f9a,	// (0x0006f392) popup_call2_audio_in_window_t5_ParamLimits

0x3f9a,	// (0x0006f392) popup_call2_audio_in_window_t5

0x3fac,	// (0x0006f3a4) popup_call2_audio_in_window_t6_ParamLimits

0x3fac,	// (0x0006f3a4) popup_call2_audio_in_window_t6

0x0005,

0xf49e,	// (0x0007a896) popup_call2_audio_in_window_t_ParamLimits

0xf49e,	// (0x0007a896) popup_call2_audio_in_window_t

0x1cbb,	// (0x0006d0b3) bg_popup_call2_in_pane_g1

0x4108,	// (0x0006f500) popup_cale_lunar_info_window_t4

0x0003,

0xf519,	// (0x0007a911) popup_cale_lunar_info_window_t

0x1cc3,	// (0x0006d0bb) bg_popup_call2_rect_pane_ParamLimits

0x1cc3,	// (0x0006d0bb) bg_popup_call2_rect_pane

0x1a5a,	// (0x0006ce52) call2_cli_visual_graphic_pane

0x1a5a,	// (0x0006ce52) call2_cli_visual_text_pane

0x961f,	// (0x00074a17) smil_status_volume_pane_g3

0x0002,

0x1cdb,	// (0x0006d0d3) call2_cli_visual_graphic_pane_g1

0x1cdb,	// (0x0006d0d3) call2_cli_visual_graphic_pane_g2

0x1cdb,	// (0x0006d0d3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4ab,	// (0x0007a8a3) call2_cli_visual_graphic_pane_g

0x3fbe,	// (0x0006f3b6) bg_popup_call2_rect_pane_g1

0x1ebf,	// (0x0006d2b7) bg_popup_call2_rect_pane_g2

0x3fc6,	// (0x0006f3be) bg_popup_call2_rect_pane_g3

0x3fce,	// (0x0006f3c6) bg_popup_call2_rect_pane_g4

0x3fd6,	// (0x0006f3ce) bg_popup_call2_rect_pane_g5

0x3fde,	// (0x0006f3d6) bg_popup_call2_rect_pane_g6

0x3fe6,	// (0x0006f3de) bg_popup_call2_rect_pane_g7

0x3fee,	// (0x0006f3e6) bg_popup_call2_rect_pane_g8

0x3ff6,	// (0x0006f3ee) bg_popup_call2_rect_pane_g9

0x0008,

0xf4b2,	// (0x0007a8aa) bg_popup_call2_rect_pane_g

0x3ffe,	// (0x0006f3f6) bg_popup_call2_bubble_pane_g1

0x4006,	// (0x0006f3fe) bg_popup_call2_bubble_pane_g2

0x400e,	// (0x0006f406) bg_popup_call2_bubble_pane_g3

0x4016,	// (0x0006f40e) bg_popup_call2_bubble_pane_g4

0x401e,	// (0x0006f416) bg_popup_call2_bubble_pane_g5

0x4026,	// (0x0006f41e) bg_popup_call2_bubble_pane_g6

0x402e,	// (0x0006f426) bg_popup_call2_bubble_pane_g7

0x4036,	// (0x0006f42e) bg_popup_call2_bubble_pane_g8

0x403e,	// (0x0006f436) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c5,	// (0x0007a8bd) bg_popup_call2_bubble_pane_g

0x6e72,	// (0x0007226a) aid_cale_week_size_cell_pane

0x1cc3,	// (0x0006d0bb) aid_cams_cif_uncrop_pane_ParamLimits

0x1cc3,	// (0x0006d0bb) aid_cams_cif_uncrop_pane

0x1d3e,	// (0x0006d136) aid_cams_size_cell_ParamLimits

0x1d3e,	// (0x0006d136) aid_cams_size_cell

0x1d3e,	// (0x0006d136) grid_cams_pane_ParamLimits

0x1d3e,	// (0x0006d136) linegrid_cams_pane_ParamLimits

0x7536,	// (0x0007292e) call_video_pane_t1

0x7557,	// (0x0007294f) call_video_pane_t2

0x0001,

0xf1dd,	// (0x0007a5d5) call_video_pane_t

0x7aa5,	// (0x00072e9d) aid_cale_month_size_cell_pane_ParamLimits

0x7aa5,	// (0x00072e9d) aid_cale_month_size_cell_pane

0xf55d,	// (0x0007a955) smil_status_volume_pane_g

0x962c,	// (0x00074a24) volume_smil_pane_ParamLimits

0x67ed,	// (0x00071be5) aid_popup2_width_pane

0x6d69,	// (0x00072161) cell_qdial_pane_g4_ParamLimits

0x6d69,	// (0x00072161) cell_qdial_pane_g4

0x89b6,	// (0x00073dae) aid_blid_cardinal_pane_ParamLimits

0x89c6,	// (0x00073dbe) aid_blid_destination_pane_ParamLimits

0x89c6,	// (0x00073dbe) aid_blid_destination_pane

0x1cc3,	// (0x0006d0bb) bg_popup_call_poc_act_pane_ParamLimits

0x1cc3,	// (0x0006d0bb) bg_popup_call_poc_act_pane

0x1cc3,	// (0x0006d0bb) bg_popup_call_poc_inact_pane_ParamLimits

0x1cc3,	// (0x0006d0bb) bg_popup_call_poc_inact_pane

0x4046,	// (0x0006f43e) bg_popup_call_poc_act_pane_g1

0x404e,	// (0x0006f446) bg_popup_call_poc_act_pane_g2

0x4056,	// (0x0006f44e) bg_popup_call_poc_act_pane_g3

0x4016,	// (0x0006f40e) bg_popup_call_poc_act_pane_g4

0x401e,	// (0x0006f416) bg_popup_call_poc_act_pane_g5

0x405e,	// (0x0006f456) bg_popup_call_poc_act_pane_g6

0x402e,	// (0x0006f426) bg_popup_call_poc_act_pane_g7

0x4066,	// (0x0006f45e) bg_popup_call_poc_act_pane_g8

0x1a5a,	// (0x0006ce52) main_usb_pane

0x9489,	// (0x00074881) popup_cale_lunar_info_window

0x7874,	// (0x00072c6c) im_reading_pane_t1_ParamLimits

0x205b,	// (0x0006d453) list_im_pane_ParamLimits

0x206c,	// (0x0006d464) scroll_pane_cp07_ParamLimits

0x1a5a,	// (0x0006ce52) grid_highlight_pane_cp012

0x1cc3,	// (0x0006d0bb) mup_scale_pane_ParamLimits

0x1d5a,	// (0x0006d152) main_usb_pane_g1_ParamLimits

0x1d5a,	// (0x0006d152) main_usb_pane_g1

0x1d5a,	// (0x0006d152) main_usb_pane_g2_ParamLimits

0x1d5a,	// (0x0006d152) main_usb_pane_g2

0x0001,

0xf502,	// (0x0007a8fa) main_usb_pane_g_ParamLimits

0xf502,	// (0x0007a8fa) main_usb_pane_g

0x1da8,	// (0x0006d1a0) main_usb_pane_t1_ParamLimits

0x1da8,	// (0x0006d1a0) main_usb_pane_t1

0x1da8,	// (0x0006d1a0) main_usb_pane_t2_ParamLimits

0x1da8,	// (0x0006d1a0) main_usb_pane_t2

0x1da8,	// (0x0006d1a0) main_usb_pane_t3_ParamLimits

0x1da8,	// (0x0006d1a0) main_usb_pane_t3

0x1da8,	// (0x0006d1a0) main_usb_pane_t4_ParamLimits

0x1da8,	// (0x0006d1a0) main_usb_pane_t4

0x1da8,	// (0x0006d1a0) main_usb_pane_t5_ParamLimits

0x1da8,	// (0x0006d1a0) main_usb_pane_t5

0x1da8,	// (0x0006d1a0) main_usb_pane_t6_ParamLimits

0x1da8,	// (0x0006d1a0) main_usb_pane_t6

0x0005,

0xf507,	// (0x0007a8ff) main_usb_pane_t_ParamLimits

0x895c,	// (0x00073d54) aid_text_placing

0x8968,	// (0x00073d60) main_location2_pane_t1_ParamLimits

0x897c,	// (0x00073d74) main_location2_pane_t2_ParamLimits

0x8990,	// (0x00073d88) main_location2_pane_t3_ParamLimits

0x89a4,	// (0x00073d9c) main_location2_pane_t4_ParamLimits

0x89a4,	// (0x00073d9c) main_location2_pane_t4

0xf31e,	// (0x0007a716) main_location2_pane_t_ParamLimits

0x1cff,	// (0x0006d0f7) find_pinb_pane_g2_ParamLimits

0x1cff,	// (0x0006d0f7) find_pinb_pane_g2

0x0001,

0xf095,	// (0x0007a48d) find_pinb_pane_g_ParamLimits

0xf095,	// (0x0007a48d) find_pinb_pane_g

0x1d0b,	// (0x0006d103) find_pinb_pane_t1_ParamLimits

0x1d1d,	// (0x0006d115) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x0007a492) find_pinb_pane_t_ParamLimits

0x1a5a,	// (0x0006ce52) main_call3_pane

0x8068,	// (0x00073460) cale_month_day_heading_pane_t1_ParamLimits

0x80ee,	// (0x000734e6) cale_month_day_heading_pane_t2_ParamLimits

0x8167,	// (0x0007355f) cale_month_day_heading_pane_t3_ParamLimits

0x81e0,	// (0x000735d8) cale_month_day_heading_pane_t4_ParamLimits

0x8259,	// (0x00073651) cale_month_day_heading_pane_t5_ParamLimits

0x82d2,	// (0x000736ca) cale_month_day_heading_pane_t6_ParamLimits

0x834b,	// (0x00073743) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x0007a60d) cale_month_day_heading_pane_t_ParamLimits

0x22bf,	// (0x0006d6b7) smil_status_volume_pane

0x8e1d,	// (0x00074215) postcard_address_pane_ParamLimits

0x8e1d,	// (0x00074215) postcard_address_pane

0x8e29,	// (0x00074221) postcard_message_pane_ParamLimits

0x8e29,	// (0x00074221) postcard_message_pane

0x9256,	// (0x0007464e) call2_cli_visual_pane_t1_ParamLimits

0x9256,	// (0x0007464e) call2_cli_visual_pane_t1

0x421d,	// (0x0006f615) postcard_message_pane_t1_ParamLimits

0x421d,	// (0x0006f615) postcard_message_pane_t1

0x4205,	// (0x0006f5fd) postcard_address_pane_t1_ParamLimits

0x4205,	// (0x0006f5fd) postcard_address_pane_t1

0x975d,	// (0x00074b55) popup_call3_audio_in_window_ParamLimits

0x975d,	// (0x00074b55) popup_call3_audio_in_window

0x9641,	// (0x00074a39) bg_popup_call3_in_pane_ParamLimits

0x9641,	// (0x00074a39) bg_popup_call3_in_pane

0x96a3,	// (0x00074a9b) popup_call3_audio_in_window_g1_ParamLimits

0x96a3,	// (0x00074a9b) popup_call3_audio_in_window_g1

0x96bb,	// (0x00074ab3) popup_call3_audio_in_window_g2_ParamLimits

0x96bb,	// (0x00074ab3) popup_call3_audio_in_window_g2

0x96d3,	// (0x00074acb) popup_call3_audio_in_window_g3_ParamLimits

0x96d3,	// (0x00074acb) popup_call3_audio_in_window_g3

0x0003,

0xf564,	// (0x0007a95c) popup_call3_audio_in_window_g_ParamLimits

0xf564,	// (0x0007a95c) popup_call3_audio_in_window_g

0x96fb,	// (0x00074af3) popup_call3_audio_in_window_t1_ParamLimits

0x96fb,	// (0x00074af3) popup_call3_audio_in_window_t1

0x9723,	// (0x00074b1b) popup_call3_audio_in_window_t2_ParamLimits

0x9723,	// (0x00074b1b) popup_call3_audio_in_window_t2

0x974b,	// (0x00074b43) popup_call3_audio_in_window_t3_ParamLimits

0x974b,	// (0x00074b43) popup_call3_audio_in_window_t3

0x0002,

0xf56d,	// (0x0007a965) popup_call3_audio_in_window_t_ParamLimits

0xf56d,	// (0x0007a965) popup_call3_audio_in_window_t

0x1f9a,	// (0x0006d392) bg_popup_call3_rect_pane

0x3fbe,	// (0x0006f3b6) bg_popup_call3_rect_pane_g1

0x1ebf,	// (0x0006d2b7) bg_popup_call3_rect_pane_g2

0x3fc6,	// (0x0006f3be) bg_popup_call3_rect_pane_g3

0x3fce,	// (0x0006f3c6) bg_popup_call3_rect_pane_g4

0x3fd6,	// (0x0006f3ce) bg_popup_call3_rect_pane_g5

0x3fde,	// (0x0006f3d6) bg_popup_call3_rect_pane_g6

0x3fe6,	// (0x0006f3de) bg_popup_call3_rect_pane_g7

0x163d,	// (0x0006ca35) mup_visualizer_osc_pane

0x163d,	// (0x0006ca35) mup_visualizer_spec_pane

0x9661,	// (0x00074a59) call3_video_qcif_pane_ParamLimits

0x9661,	// (0x00074a59) call3_video_qcif_pane

0x9673,	// (0x00074a6b) call3_video_qcif_uncrop_pane_ParamLimits

0x9673,	// (0x00074a6b) call3_video_qcif_uncrop_pane

0x9681,	// (0x00074a79) call3_video_subqcif_pane_ParamLimits

0x9681,	// (0x00074a79) call3_video_subqcif_pane

0x9693,	// (0x00074a8b) call3_video_subqcif_uncrop_pane_ParamLimits

0x9693,	// (0x00074a8b) call3_video_subqcif_uncrop_pane

0x96eb,	// (0x00074ae3) popup_call3_audio_in_window_g4_ParamLimits

0x96eb,	// (0x00074ae3) popup_call3_audio_in_window_g4

0x163d,	// (0x0006ca35) mup_spec_half_pane

0x163d,	// (0x0006ca35) mup_spec_half_pane_cp

0x163d,	// (0x0006ca35) mup_osc_middle_pane

0x1d8a,	// (0x0006d182) mup_visualizer_osc_pane_g1

0x41b8,	// (0x0006f5b0) mup_spec_bar_pane_ParamLimits

0x41b8,	// (0x0006f5b0) mup_spec_bar_pane

0x1d8a,	// (0x0006d182) mup_spec_bar_pane_g1

0x1d8a,	// (0x0006d182) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x0007a4a7) mup_spec_bar_pane_g

0x6e72,	// (0x0007226a) aid_cale_week_size_cell_pane_ParamLimits

0x6e87,	// (0x0007227f) bg_cale_heading_pane_ParamLimits

0x1efc,	// (0x0006d2f4) bg_cale_pane_cp01_ParamLimits

0x6ea9,	// (0x000722a1) cale_week_corner_pane_ParamLimits

0x6ec3,	// (0x000722bb) cale_week_day_heading_pane_ParamLimits

0x6ee5,	// (0x000722dd) cale_week_scroll_pane_g1_ParamLimits

0x6f02,	// (0x000722fa) cale_week_scroll_pane_g2_ParamLimits

0x6f15,	// (0x0007230d) cale_week_scroll_pane_g3_ParamLimits

0x6f28,	// (0x00072320) cale_week_scroll_pane_g4_ParamLimits

0x6f3b,	// (0x00072333) cale_week_scroll_pane_g5_ParamLimits

0x6f4e,	// (0x00072346) cale_week_scroll_pane_g6_ParamLimits

0x6f61,	// (0x00072359) cale_week_scroll_pane_g7_ParamLimits

0x6f76,	// (0x0007236e) cale_week_scroll_pane_g8_ParamLimits

0x6f8b,	// (0x00072383) cale_week_scroll_pane_g9_ParamLimits

0x6f9e,	// (0x00072396) cale_week_scroll_pane_g10_ParamLimits

0x6fb1,	// (0x000723a9) cale_week_scroll_pane_g11_ParamLimits

0x6fc4,	// (0x000723bc) cale_week_scroll_pane_g12_ParamLimits

0x6fdb,	// (0x000723d3) cale_week_scroll_pane_g13_ParamLimits

0x6ff6,	// (0x000723ee) cale_week_scroll_pane_g14_ParamLimits

0x7011,	// (0x00072409) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x0007a51e) cale_week_scroll_pane_g_ParamLimits

0x7041,	// (0x00072439) cale_week_time_pane_ParamLimits

0x7056,	// (0x0007244e) grid_cale_week_pane_ParamLimits

0x1f19,	// (0x0006d311) listscroll_cale_week_pane_t1

0x1f2b,	// (0x0006d323) scroll_pane_cp08_ParamLimits

0x7b19,	// (0x00072f11) cale_month_corner_pane_ParamLimits

0x2295,	// (0x0006d68d) cale_month_pane_t1

0x7fe7,	// (0x000733df) cale_month_week_pane_ParamLimits

0x3819,	// (0x0006ec11) popup_call_status_window_g1_ParamLimits

0x8789,	// (0x00073b81) popup_call_status_window_g2_ParamLimits

0x8795,	// (0x00073b8d) popup_call_status_window_g3_ParamLimits

0xf2a5,	// (0x0007a69d) popup_call_status_window_g_ParamLimits

0x27f9,	// (0x0006dbf1) aid_call2_pane

0x5b8c,	// (0x00070f84) msg_header_pane_g1

0x8e1d,	// (0x00074215) postcard_address2_pane_ParamLimits

0x8e1d,	// (0x00074215) postcard_address2_pane

0x8e29,	// (0x00074221) postcard_message2_pane_ParamLimits

0x8e29,	// (0x00074221) postcard_message2_pane

0x95f1,	// (0x000749e9) message2_row_pane_ParamLimits

0x95f1,	// (0x000749e9) message2_row_pane

0x960c,	// (0x00074a04) address2_row_pane_ParamLimits

0x960c,	// (0x00074a04) address2_row_pane

0x4185,	// (0x0006f57d) postcard_message2_row_pane_g1

0x418d,	// (0x0006f585) postcard_message2_row_pane_t1

0x4185,	// (0x0006f57d) address2_row_pane_g1

0x418d,	// (0x0006f585) address2_row_pane_t1

0x72db,	// (0x000726d3) aid_size_cell_vorec

0x1a5a,	// (0x0006ce52) main_rss_pane

0x419b,	// (0x0006f593) rss_list_single_pane_ParamLimits

0x419b,	// (0x0006f593) rss_list_single_pane

0x41a9,	// (0x0006f5a1) rss_list_single_pane_t1

0x41a9,	// (0x0006f5a1) rss_list_single_pane_t2

0x0001,

0xf558,	// (0x0007a950) rss_list_single_pane_t

0x1a5a,	// (0x0006ce52) main_camera2_pane

0x1a5a,	// (0x0006ce52) main_video2_pane

0x1d3e,	// (0x0006d136) cams_zoom_pane_cp2_ParamLimits

0x1d3e,	// (0x0006d136) cams_zoom_pane_cp2

0x1d3e,	// (0x0006d136) image2_vga_pane_ParamLimits

0x1d3e,	// (0x0006d136) image2_vga_pane

0x1d5a,	// (0x0006d152) main_camera2_pane_g1_ParamLimits

0x1d5a,	// (0x0006d152) main_camera2_pane_g1

0x1d5a,	// (0x0006d152) main_camera2_pane_g2_ParamLimits

0x1d5a,	// (0x0006d152) main_camera2_pane_g2

0x1d5a,	// (0x0006d152) main_camera2_pane_g3_ParamLimits

0x1d5a,	// (0x0006d152) main_camera2_pane_g3

0x1d5a,	// (0x0006d152) main_camera2_pane_g4_ParamLimits

0x1d5a,	// (0x0006d152) main_camera2_pane_g4

0x1d5a,	// (0x0006d152) main_camera2_pane_g5_ParamLimits

0x1d5a,	// (0x0006d152) main_camera2_pane_g5

0x1d5a,	// (0x0006d152) main_camera2_pane_g6_ParamLimits

0x1d5a,	// (0x0006d152) main_camera2_pane_g6

0x1d5a,	// (0x0006d152) main_camera2_pane_g7_ParamLimits

0x1d5a,	// (0x0006d152) main_camera2_pane_g7

0x1d5a,	// (0x0006d152) main_camera2_pane_g8_ParamLimits

0x1d5a,	// (0x0006d152) main_camera2_pane_g8

0x0008,

0xf574,	// (0x0007a96c) main_camera2_pane_g_ParamLimits

0xf574,	// (0x0007a96c) main_camera2_pane_g

0x1da8,	// (0x0006d1a0) main_camera2_pane_t1_ParamLimits

0x1da8,	// (0x0006d1a0) main_camera2_pane_t1

0x1da8,	// (0x0006d1a0) main_camera2_pane_t2_ParamLimits

0x1da8,	// (0x0006d1a0) main_camera2_pane_t2

0x1da8,	// (0x0006d1a0) main_camera2_pane_t3_ParamLimits

0x1da8,	// (0x0006d1a0) main_camera2_pane_t3

0x1da8,	// (0x0006d1a0) main_camera2_pane_t4_ParamLimits

0x1da8,	// (0x0006d1a0) main_camera2_pane_t4

0x0006,

0xf587,	// (0x0007a97f) main_camera2_pane_t_ParamLimits

0xf587,	// (0x0007a97f) main_camera2_pane_t

0x2e9f,	// (0x0006e297) cams_zoom_pane_cp4_ParamLimits

0x2e9f,	// (0x0006e297) cams_zoom_pane_cp4

0x1ce5,	// (0x0006d0dd) image2_cif_pane_ParamLimits

0x1ce5,	// (0x0006d0dd) image2_cif_pane

0x1d3e,	// (0x0006d136) image2_subqcif_pane_ParamLimits

0x1d3e,	// (0x0006d136) image2_subqcif_pane

0x2e7d,	// (0x0006e275) main_video2_pane_g1_ParamLimits

0x2e7d,	// (0x0006e275) main_video2_pane_g1

0x2e7d,	// (0x0006e275) main_video2_pane_g2_ParamLimits

0x2e7d,	// (0x0006e275) main_video2_pane_g2

0x2e7d,	// (0x0006e275) main_video2_pane_g3_ParamLimits

0x2e7d,	// (0x0006e275) main_video2_pane_g3

0x2e7d,	// (0x0006e275) main_video2_pane_g4_ParamLimits

0x2e7d,	// (0x0006e275) main_video2_pane_g4

0x2e7d,	// (0x0006e275) main_video2_pane_g5_ParamLimits

0x2e7d,	// (0x0006e275) main_video2_pane_g5

0x2e7d,	// (0x0006e275) main_video2_pane_g6_ParamLimits

0x2e7d,	// (0x0006e275) main_video2_pane_g6

0x0005,

0xf596,	// (0x0007a98e) main_video2_pane_g_ParamLimits

0xf596,	// (0x0007a98e) main_video2_pane_g

0x2e8b,	// (0x0006e283) main_video2_pane_t1_ParamLimits

0x2e8b,	// (0x0006e283) main_video2_pane_t1

0x2e8b,	// (0x0006e283) main_video2_pane_t2_ParamLimits

0x2e8b,	// (0x0006e283) main_video2_pane_t2

0x2e8b,	// (0x0006e283) main_video2_pane_t3_ParamLimits

0x2e8b,	// (0x0006e283) main_video2_pane_t3

0x0002,

0xf5a3,	// (0x0007a99b) main_video2_pane_t_ParamLimits

0xf5a3,	// (0x0007a99b) main_video2_pane_t

0x9315,	// (0x0007470d) call_muted_g2

0x0001,

0xf54a,	// (0x0007a942) call_muted_g

0x1a5a,	// (0x0006ce52) main_mup2_pane

0x1d68,	// (0x0006d160) main_mup2_pane_g1_ParamLimits

0x1d68,	// (0x0006d160) main_mup2_pane_g1

0x1d68,	// (0x0006d160) main_mup2_pane_g2_ParamLimits

0x1d68,	// (0x0006d160) main_mup2_pane_g2

0x1d8a,	// (0x0006d182) main_mup_pane_g13_cp1

0x163d,	// (0x0006ca35) mup_volume_pane_cp1

0x1d68,	// (0x0006d160) main_mup2_pane_g4_ParamLimits

0x1d68,	// (0x0006d160) main_mup2_pane_g4

0x1d68,	// (0x0006d160) main_mup2_pane_g5_ParamLimits

0x1d68,	// (0x0006d160) main_mup2_pane_g5

0x1d68,	// (0x0006d160) main_mup2_pane_g6_ParamLimits

0x1d68,	// (0x0006d160) main_mup2_pane_g6

0x1d68,	// (0x0006d160) main_mup2_pane_g7_ParamLimits

0x1d68,	// (0x0006d160) main_mup2_pane_g7

0x0006,

0xf5aa,	// (0x0007a9a2) main_mup2_pane_g_ParamLimits

0xf5aa,	// (0x0007a9a2) main_mup2_pane_g

0x1d76,	// (0x0006d16e) main_mup2_pane_t1_ParamLimits

0x1d76,	// (0x0006d16e) main_mup2_pane_t1

0x1d76,	// (0x0006d16e) main_mup2_pane_t2_ParamLimits

0x1d76,	// (0x0006d16e) main_mup2_pane_t2

0x1d76,	// (0x0006d16e) main_mup2_pane_t3_ParamLimits

0x1d76,	// (0x0006d16e) main_mup2_pane_t3

0x1d76,	// (0x0006d16e) main_mup2_pane_t4_ParamLimits

0x1d76,	// (0x0006d16e) main_mup2_pane_t4

0x1d76,	// (0x0006d16e) main_mup2_pane_t5_ParamLimits

0x1d76,	// (0x0006d16e) main_mup2_pane_t5

0x1d76,	// (0x0006d16e) main_mup2_pane_t6_ParamLimits

0x1d76,	// (0x0006d16e) main_mup2_pane_t6

0x0005,

0xf5b9,	// (0x0007a9b1) main_mup2_pane_t_ParamLimits

0xf5b9,	// (0x0007a9b1) main_mup2_pane_t

0x4378,	// (0x0006f770) mup2_visualizer_pane_ParamLimits

0x4378,	// (0x0006f770) mup2_visualizer_pane

0x4378,	// (0x0006f770) mup_progress_pane_cp_ParamLimits

0x4378,	// (0x0006f770) mup_progress_pane_cp

0x4239,	// (0x0006f631) mup_volume_pane_cp_ParamLimits

0x4239,	// (0x0006f631) mup_volume_pane_cp

0x1d4c,	// (0x0006d144) mup2_visualizer_pane_g1_ParamLimits

0x1d4c,	// (0x0006d144) mup2_visualizer_pane_g1

0x1d5a,	// (0x0006d152) mup2_visualizer_pane_g2_ParamLimits

0x1d5a,	// (0x0006d152) mup2_visualizer_pane_g2

0x1d5a,	// (0x0006d152) mup2_visualizer_pane_g3_ParamLimits

0x1d5a,	// (0x0006d152) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x0007a497) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x0007a497) mup2_visualizer_pane_g

0x163d,	// (0x0006ca35) aid_size_cell_fmradio

0x942b,	// (0x00074823) aid_height_parent_landcape

0x20ea,	// (0x0006d4e2) wml_content_pane_cp

0x20f2,	// (0x0006d4ea) wml_tabs_pane

0x20fb,	// (0x0006d4f3) popup_wml_miniature_window

0x2103,	// (0x0006d4fb) scroll_pane_cp021

0x2117,	// (0x0006d50f) wml_content_pane_comp8

0x1a5a,	// (0x0006ce52) bg_popup_sub_pane_cp05

0x424f,	// (0x0006f647) popup_wml_miniature_window_g1

0x4257,	// (0x0006f64f) wml_miniature_view_pane

0x977a,	// (0x00074b72) aid_size_wml_view

0x9782,	// (0x00074b7a) wml_miniature_view_pane_g1

0x978b,	// (0x00074b83) wml_miniature_view_pane_g2

0x9794,	// (0x00074b8c) wml_miniature_view_pane_g3

0x979c,	// (0x00074b94) wml_miniature_view_pane_g4

0x97a4,	// (0x00074b9c) wml_miniature_view_pane_g5

0x97ac,	// (0x00074ba4) wml_miniature_view_pane_g6

0x97b4,	// (0x00074bac) wml_miniature_view_pane_g7

0x97bc,	// (0x00074bb4) wml_miniature_view_pane_g8

0x0007,

0xf5c6,	// (0x0007a9be) wml_miniature_view_pane_g

0x425f,	// (0x0006f657) background_graphic_ParamLimits

0x425f,	// (0x0006f657) background_graphic

0x426b,	// (0x0006f663) wml_tabs_2_pane

0x4274,	// (0x0006f66c) wml_tabs_3_pane_ParamLimits

0x4274,	// (0x0006f66c) wml_tabs_3_pane

0x4286,	// (0x0006f67e) wml_tabs_4_pane_ParamLimits

0x4286,	// (0x0006f67e) wml_tabs_4_pane

0x429c,	// (0x0006f694) wml_tabs_5_pane_ParamLimits

0x429c,	// (0x0006f694) wml_tabs_5_pane

0x42b6,	// (0x0006f6ae) wml_tabs_pane_g2_ParamLimits

0x42b6,	// (0x0006f6ae) wml_tabs_pane_g2

0x42cb,	// (0x0006f6c3) wml_tabs_pane_g3_ParamLimits

0x42cb,	// (0x0006f6c3) wml_tabs_pane_g3

0x42e0,	// (0x0006f6d8) wml_tabs_2_active_pane_ParamLimits

0x42e0,	// (0x0006f6d8) wml_tabs_2_active_pane

0x42e0,	// (0x0006f6d8) wml_tabs_2_passive_pane_ParamLimits

0x42e0,	// (0x0006f6d8) wml_tabs_2_passive_pane

0x97c4,	// (0x00074bbc) wml_tabs_3_active_pane_cp_ParamLimits

0x97c4,	// (0x00074bbc) wml_tabs_3_active_pane_cp

0x97d5,	// (0x00074bcd) wml_tabs_3_passive_pane_ParamLimits

0x97d5,	// (0x00074bcd) wml_tabs_3_passive_pane

0x97e6,	// (0x00074bde) wml_tabs_3_passive_pane_cp_ParamLimits

0x97e6,	// (0x00074bde) wml_tabs_3_passive_pane_cp

0x97f7,	// (0x00074bef) tabs_4_active_pane

0x97ff,	// (0x00074bf7) tabs_4_passive_pane

0x9807,	// (0x00074bff) tabs_4_passive_pane_cp

0x980f,	// (0x00074c07) tabs_4_passive_pane_cp2

0x9289,	// (0x00074681) aid_height_text

0x4378,	// (0x0006f770) mup_volume_cont_pane_ParamLimits

0x4378,	// (0x0006f770) mup_volume_cont_pane

0x163d,	// (0x0006ca35) aid_size_cell_pinb

0x163d,	// (0x0006ca35) aid_size_list_pinb

0x4378,	// (0x0006f770) mup2_volume_cont_pane_ParamLimits

0x4378,	// (0x0006f770) mup2_volume_cont_pane

0x9817,	// (0x00074c0f) mup2_volume_cont_pane_g1_ParamLimits

0x9817,	// (0x00074c0f) mup2_volume_cont_pane_g1

0x67f9,	// (0x00071bf1) aid_size_cell_touch_ParamLimits

0x67f9,	// (0x00071bf1) aid_size_cell_touch

0x6aa0,	// (0x00071e98) touch_pane_ParamLimits

0x6aa0,	// (0x00071e98) touch_pane

0x163d,	// (0x0006ca35) main_rss2_pane

0x42f7,	// (0x0006f6ef) listscroll_rss2_pane

0x4300,	// (0x0006f6f8) rss2_navigation_pane

0x4308,	// (0x0006f700) list_rss2_pane

0x290a,	// (0x0006dd02) scroll_pane_cp22

0x4310,	// (0x0006f708) rss2_navigation_pane_g1

0x4319,	// (0x0006f711) rss2_navigation_pane_g2

0x4321,	// (0x0006f719) rss2_navigation_pane_g3

0x0002,

0xf5d7,	// (0x0007a9cf) rss2_navigation_pane_g

0x4329,	// (0x0006f721) rss2_navigation_pane_t1

0x982d,	// (0x00074c25) rss2_list_single_pane_ParamLimits

0x982d,	// (0x00074c25) rss2_list_single_pane

0x4337,	// (0x0006f72f) rss2_list_single_pane_t2

0x4345,	// (0x0006f73d) rss2_list_single_pane_t3_ParamLimits

0x4345,	// (0x0006f73d) rss2_list_single_pane_t3

0x4362,	// (0x0006f75a) rss2_list_single_pane_t4

0x85ed,	// (0x000739e5) smil_status_pane_g1

0x1ce5,	// (0x0006d0dd) main_image2_pane_ParamLimits

0x1ce5,	// (0x0006d0dd) main_image2_pane

0x1d5a,	// (0x0006d152) main_camera2_pane_g9_ParamLimits

0x1d5a,	// (0x0006d152) main_camera2_pane_g9

0x1da8,	// (0x0006d1a0) main_camera2_pane_t5_ParamLimits

0x1da8,	// (0x0006d1a0) main_camera2_pane_t5

0x44f0,	// (0x0006f8e8) main_camera2_pane_t6_ParamLimits

0x44f0,	// (0x0006f8e8) main_camera2_pane_t6

0x9861,	// (0x00074c59) main_image2_pane_g1_ParamLimits

0x9861,	// (0x00074c59) main_image2_pane_g1

0x8fbb,	// (0x000743b3) smil2_video_pane_ParamLimits

0x8fbb,	// (0x000743b3) smil2_video_pane

0x682d,	// (0x00071c25) aid_zoom_text_primary_cp

0x6a49,	// (0x00071e41) popup_preview_fixed_window

0x2053,	// (0x0006d44b) im_reading_pane_g1

0x976c,	// (0x00074b64) cams2_bc_adjust_pane_cp_ParamLimits

0x976c,	// (0x00074b64) cams2_bc_adjust_pane_cp

0x1d3e,	// (0x0006d136) cams2_bc_adjust_pane_ParamLimits

0x1d3e,	// (0x0006d136) cams2_bc_adjust_pane

0x1d8a,	// (0x0006d182) cams2_bc_adjust_pane_g1

0x163d,	// (0x0006ca35) cams2_slider_pane

0x1d8a,	// (0x0006d182) cams2_slider_pane_g1

0x1d8a,	// (0x0006d182) cams2_slider_pane_g2

0x0006,

0xf5de,	// (0x0007a9d6) cams2_slider_pane_g

0x6b71,	// (0x00071f69) calc_display_pane_ParamLimits

0x6b8f,	// (0x00071f87) calc_paper_pane_ParamLimits

0x6bab,	// (0x00071fa3) grid_calc_pane_ParamLimits

0x87f3,	// (0x00073beb) popup_clock_digital_window_t1_ParamLimits

0x30ee,	// (0x0006e4e6) main_image_pane_t1

0x6b57,	// (0x00071f4f) aid_size_cell_calc_ParamLimits

0x6b57,	// (0x00071f4f) aid_size_cell_calc

0x9465,	// (0x0007485d) popup_blid_sat_info2_window_ParamLimits

0x9465,	// (0x0007485d) popup_blid_sat_info2_window

0x4370,	// (0x0006f768) aid_size_cell_blid

0x4378,	// (0x0006f770) bg_popup_window_pane_cp07

0x439b,	// (0x0006f793) grid_popup_blid_pane

0x43a5,	// (0x0006f79d) heading_pane_cp05_ParamLimits

0x43a5,	// (0x0006f79d) heading_pane_cp05

0x446f,	// (0x0006f867) cell_popup_blid_pane_ParamLimits

0x446f,	// (0x0006f867) cell_popup_blid_pane

0x4493,	// (0x0006f88b) cell_popup_blid_pane_g1

0x449b,	// (0x0006f893) cell_popup_blid_pane_t1

0x4378,	// (0x0006f770) mup2_indicator_pane_ParamLimits

0x4378,	// (0x0006f770) mup2_indicator_pane

0x163d,	// (0x0006ca35) mup2_visualizer_osc_pane

0x4239,	// (0x0006f631) mup2_visualizer_spec_pane_ParamLimits

0x4239,	// (0x0006f631) mup2_visualizer_spec_pane

0x163d,	// (0x0006ca35) mup2_spec_half_pane

0x163d,	// (0x0006ca35) mup2_spec_half_pane_cp

0x44a9,	// (0x0006f8a1) mup2_spec_bar_pane_ParamLimits

0x44a9,	// (0x0006f8a1) mup2_spec_bar_pane

0x1d8a,	// (0x0006d182) mup2_spec_bar_pane_g1

0x44c8,	// (0x0006f8c0) mup2_spec_bar_pane_g2

0x0001,

0xf604,	// (0x0007a9fc) mup2_spec_bar_pane_g

0x163d,	// (0x0006ca35) mup2_osc_middle_pane

0x1d8a,	// (0x0006d182) mup2_visualizer_osc_pane_g1

0x1667,	// (0x0006ca5f) popup_number_entry_window_t1_ParamLimits

0x167a,	// (0x0006ca72) popup_number_entry_window_t2_ParamLimits

0x168c,	// (0x0006ca84) popup_number_entry_window_t3_ParamLimits

0x6af7,	// (0x00071eef) popup_number_entry_window_t5_ParamLimits

0x6af7,	// (0x00071eef) popup_number_entry_window_t5

0xf040,	// (0x0007a438) popup_number_entry_window_t_ParamLimits

0x169e,	// (0x0006ca96) text_title_cp2_ParamLimits

0x8ce5,	// (0x000740dd) aid_hotspot_pointer_text2_pane

0x8d7f,	// (0x00074177) main_viewer_pane_g9_ParamLimits

0x8d7f,	// (0x00074177) main_viewer_pane_g9

0x2295,	// (0x0006d68d) cale_month_pane_t1_ParamLimits

0x22d2,	// (0x0006d6ca) bg_cale_pane_ParamLimits

0x22ea,	// (0x0006d6e2) list_cale_pane_ParamLimits

0x22fb,	// (0x0006d6f3) listscroll_cale_day_pane_t1

0x230d,	// (0x0006d705) scroll_pane_cp09_ParamLimits

0x8aa4,	// (0x00073e9c) main_mup_eq_pane_t1_ParamLimits

0x8aa4,	// (0x00073e9c) main_mup_eq_pane_t1

0x8abe,	// (0x00073eb6) main_mup_eq_pane_t2_ParamLimits

0x8abe,	// (0x00073eb6) main_mup_eq_pane_t2

0x8ad6,	// (0x00073ece) main_mup_eq_pane_t3_ParamLimits

0x8ad6,	// (0x00073ece) main_mup_eq_pane_t3

0x8aee,	// (0x00073ee6) main_mup_eq_pane_t4_ParamLimits

0x8aee,	// (0x00073ee6) main_mup_eq_pane_t4

0x8b06,	// (0x00073efe) main_mup_eq_pane_t5_ParamLimits

0x8b06,	// (0x00073efe) main_mup_eq_pane_t5

0x8b1e,	// (0x00073f16) main_mup_eq_pane_t6_ParamLimits

0x8b1e,	// (0x00073f16) main_mup_eq_pane_t6

0x8b32,	// (0x00073f2a) main_mup_eq_pane_t7_ParamLimits

0x8b32,	// (0x00073f2a) main_mup_eq_pane_t7

0x8b46,	// (0x00073f3e) main_mup_eq_pane_t8_ParamLimits

0x8b46,	// (0x00073f3e) main_mup_eq_pane_t8

0x8b5c,	// (0x00073f54) main_mup_eq_pane_t9_ParamLimits

0x8b5c,	// (0x00073f54) main_mup_eq_pane_t9

0x8b74,	// (0x00073f6c) main_mup_eq_pane_t10_ParamLimits

0x8b74,	// (0x00073f6c) main_mup_eq_pane_t10

0x0009,

0xf39f,	// (0x0007a797) main_mup_eq_pane_t_ParamLimits

0xf39f,	// (0x0007a797) main_mup_eq_pane_t

0x8c31,	// (0x00074029) mup_equalizer_pane_cp5_ParamLimits

0x8c47,	// (0x0007403f) mup_equalizer_pane_cp6_ParamLimits

0x8c5f,	// (0x00074057) mup_equalizer_pane_cp7_ParamLimits

0x163d,	// (0x0006ca35) main_gallery_pane

0x41d7,	// (0x0006f5cf) smil2_volume_pane

0x41f2,	// (0x0006f5ea) smil_status_volume_pane_g1_ParamLimits

0x41df,	// (0x0006f5d7) smil_status_volume_pane_g2_ParamLimits

0x961f,	// (0x00074a17) smil_status_volume_pane_g3_ParamLimits

0xf55d,	// (0x0007a955) smil_status_volume_pane_g_ParamLimits

0x4378,	// (0x0006f770) bg_popup_window_pane_cp07_ParamLimits

0x4386,	// (0x0006f77e) blid_firmament_pane

0x1d3e,	// (0x0006d136) aid_size_cell_gallery_ParamLimits

0x1d3e,	// (0x0006d136) aid_size_cell_gallery

0x1d3e,	// (0x0006d136) grid_gallery_pane_ParamLimits

0x1d3e,	// (0x0006d136) grid_gallery_pane

0x2e9f,	// (0x0006e297) cell_gallery_pane_ParamLimits

0x2e9f,	// (0x0006e297) cell_gallery_pane

0x1ce5,	// (0x0006d0dd) bg_cell_gallery_focus_pane_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_cell_gallery_focus_pane

0x1d4c,	// (0x0006d144) cell_gallery_pane_g1_ParamLimits

0x1d4c,	// (0x0006d144) cell_gallery_pane_g1

0x1d4c,	// (0x0006d144) cell_gallery_pane_g2_ParamLimits

0x1d4c,	// (0x0006d144) cell_gallery_pane_g2

0x1d4c,	// (0x0006d144) cell_gallery_pane_g3_ParamLimits

0x1d4c,	// (0x0006d144) cell_gallery_pane_g3

0x1d5a,	// (0x0006d152) cell_gallery_pane_g4_ParamLimits

0x1d5a,	// (0x0006d152) cell_gallery_pane_g4

0x0003,

0xf609,	// (0x0007aa01) cell_gallery_pane_g_ParamLimits

0xf609,	// (0x0007aa01) cell_gallery_pane_g

0x44d2,	// (0x0006f8ca) bg_cell_gallery_focus_pane_g1

0x44da,	// (0x0006f8d2) bg_cell_gallery_focus_pane_g2

0x4504,	// (0x0006f8fc) bg_cell_gallery_focus_pane_g3

0x450c,	// (0x0006f904) bg_cell_gallery_focus_pane_g4

0x4514,	// (0x0006f90c) bg_cell_gallery_focus_pane_g5

0x451c,	// (0x0006f914) bg_cell_gallery_focus_pane_g6

0x4524,	// (0x0006f91c) bg_cell_gallery_focus_pane_g7

0x452c,	// (0x0006f924) bg_cell_gallery_focus_pane_g8

0x0007,

0xf612,	// (0x0007aa0a) bg_cell_gallery_focus_pane_g

0x4534,	// (0x0006f92c) aid_firma_cardinal

0x4548,	// (0x0006f940) blid_firmament_pane_t1

0x455f,	// (0x0006f957) blid_firmament_pane_t2

0x4576,	// (0x0006f96e) blid_firmament_pane_t3

0x458d,	// (0x0006f985) blid_firmament_pane_t4

0x0003,

0xf623,	// (0x0007aa1b) blid_firmament_pane_t

0x45a4,	// (0x0006f99c) blid_sat_info_pane

0x1d8a,	// (0x0006d182) blid_sat_info_pane_g1

0x1d8a,	// (0x0006d182) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x0007a4a7) blid_sat_info_pane_g

0x45b4,	// (0x0006f9ac) blid_sat_info_pane_t1

0x45c2,	// (0x0006f9ba) smil2_volume_content_pane

0x45cb,	// (0x0006f9c3) smil2_volume_pane_g1

0x21cb,	// (0x0006d5c3) smil2_volume_content_pane_g1

0x45d3,	// (0x0006f9cb) smil2_volume_content_pane_g2

0x45dc,	// (0x0006f9d4) smil2_volume_content_pane_g3

0x45e5,	// (0x0006f9dd) smil2_volume_content_pane_g4

0x45ee,	// (0x0006f9e6) smil2_volume_content_pane_g5

0x45f7,	// (0x0006f9ef) smil2_volume_content_pane_g6

0x4600,	// (0x0006f9f8) smil2_volume_content_pane_g7

0x4609,	// (0x0006fa01) smil2_volume_content_pane_g8

0x4612,	// (0x0006fa0a) smil2_volume_content_pane_g9

0x461b,	// (0x0006fa13) smil2_volume_content_pane_g10

0x0009,

0xf62c,	// (0x0007aa24) smil2_volume_content_pane_g

0x70d7,	// (0x000724cf) cale_week_day_heading_pane_t1_ParamLimits

0x70f2,	// (0x000724ea) cale_week_day_heading_pane_t2_ParamLimits

0x710d,	// (0x00072505) cale_week_day_heading_pane_t3_ParamLimits

0x7128,	// (0x00072520) cale_week_day_heading_pane_t4_ParamLimits

0x7143,	// (0x0007253b) cale_week_day_heading_pane_t5_ParamLimits

0x715e,	// (0x00072556) cale_week_day_heading_pane_t6_ParamLimits

0x7179,	// (0x00072571) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x0007a53f) cale_week_day_heading_pane_t_ParamLimits

0x1f48,	// (0x0006d340) bg_cale_side_pane_ParamLimits

0x7194,	// (0x0007258c) cale_week_time_pane_t1_ParamLimits

0x71ae,	// (0x000725a6) cale_week_time_pane_t2_ParamLimits

0x71c8,	// (0x000725c0) cale_week_time_pane_t3_ParamLimits

0x71e2,	// (0x000725da) cale_week_time_pane_t4_ParamLimits

0x71fc,	// (0x000725f4) cale_week_time_pane_t5_ParamLimits

0x7216,	// (0x0007260e) cale_week_time_pane_t6_ParamLimits

0x7236,	// (0x0007262e) cale_week_time_pane_t7_ParamLimits

0x7258,	// (0x00072650) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x0007a54e) cale_week_time_pane_t_ParamLimits

0x727c,	// (0x00072674) cell_cale_week_pane_g2_ParamLimits

0x1f48,	// (0x0006d340) bg_cale_side_pane_cp01_ParamLimits

0x83dc,	// (0x000737d4) cale_month_week_pane_t1_ParamLimits

0x83f5,	// (0x000737ed) cale_month_week_pane_t2_ParamLimits

0x840e,	// (0x00073806) cale_month_week_pane_t3_ParamLimits

0x8427,	// (0x0007381f) cale_month_week_pane_t4_ParamLimits

0x8442,	// (0x0007383a) cale_month_week_pane_t5_ParamLimits

0x8463,	// (0x0007385b) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x0007a61c) cale_month_week_pane_t_ParamLimits

0x85aa,	// (0x000739a2) cell_cale_month_pane_g1_ParamLimits

0x163d,	// (0x0006ca35) main_cale_event_viewer_pane

0x163d,	// (0x0006ca35) listscroll_cale_event_viewer_pane

0x4624,	// (0x0006fa1c) list_cale_ev_pane

0x462c,	// (0x0006fa24) scroll_pane_cp023

0x4638,	// (0x0006fa30) field_cale_ev_pane_ParamLimits

0x4638,	// (0x0006fa30) field_cale_ev_pane

0x4656,	// (0x0006fa4e) field_cale_ev_content_pane_ParamLimits

0x4656,	// (0x0006fa4e) field_cale_ev_content_pane

0x4662,	// (0x0006fa5a) field_cale_ev_pane_g1_ParamLimits

0x4662,	// (0x0006fa5a) field_cale_ev_pane_g1

0x466e,	// (0x0006fa66) field_cale_ev_pane_g2_ParamLimits

0x466e,	// (0x0006fa66) field_cale_ev_pane_g2

0x4686,	// (0x0006fa7e) field_cale_ev_pane_g3_ParamLimits

0x4686,	// (0x0006fa7e) field_cale_ev_pane_g3

0x0002,

0xf641,	// (0x0007aa39) field_cale_ev_pane_g_ParamLimits

0xf641,	// (0x0007aa39) field_cale_ev_pane_g

0x469e,	// (0x0006fa96) field_cale_ev_pane_t1_ParamLimits

0x469e,	// (0x0006fa96) field_cale_ev_pane_t1

0x46b5,	// (0x0006faad) field_cale_ev_content_pane_t1_ParamLimits

0x46b5,	// (0x0006faad) field_cale_ev_content_pane_t1

0x2f4a,	// (0x0006e342) bg_button_pane_cp01

0x6e62,	// (0x0007225a) listscroll_cale_week_pane_ParamLimits

0x1ef3,	// (0x0006d2eb) popup_toolbar_window_cp01

0x1f19,	// (0x0006d311) listscroll_cale_week_pane_t1_ParamLimits

0x6e62,	// (0x0007225a) listscroll_cale_day_pane_ParamLimits

0x1ef3,	// (0x0006d2eb) popup_toolbar_window_cp02

0x22fb,	// (0x0006d6f3) listscroll_cale_day_pane_t1_ParamLimits

0x6e62,	// (0x0007225a) main_cale_month_pane_ParamLimits

0x9568,	// (0x00074960) popup_toolbar_window_cp03_ParamLimits

0x9568,	// (0x00074960) popup_toolbar_window_cp03

0x8ed1,	// (0x000742c9) main_image_pane_g2_ParamLimits

0x8ed1,	// (0x000742c9) main_image_pane_g2

0x8edd,	// (0x000742d5) main_image_pane_g3_ParamLimits

0x8edd,	// (0x000742d5) main_image_pane_g3

0x0002,

0xf431,	// (0x0007a829) main_image_pane_g_ParamLimits

0xf431,	// (0x0007a829) main_image_pane_g

0x30ee,	// (0x0006e4e6) main_image_pane_t1_ParamLimits

0x8ee9,	// (0x000742e1) main_image_pane_t2_ParamLimits

0x8ee9,	// (0x000742e1) main_image_pane_t2

0x8efb,	// (0x000742f3) main_image_pane_t3_ParamLimits

0x8efb,	// (0x000742f3) main_image_pane_t3

0x8f0d,	// (0x00074305) main_image_pane_t4_ParamLimits

0x8f0d,	// (0x00074305) main_image_pane_t4

0x0003,

0xf438,	// (0x0007a830) main_image_pane_t_ParamLimits

0xf438,	// (0x0007a830) main_image_pane_t

0x8f1f,	// (0x00074317) popup_image_details_window_cp01

0x8f29,	// (0x00074321) popup_toobar_trans_pane_cp01_ParamLimits

0x8f29,	// (0x00074321) popup_toobar_trans_pane_cp01

0x94b8,	// (0x000748b0) popup_image_details_window_ParamLimits

0x94b8,	// (0x000748b0) popup_image_details_window

0x94c6,	// (0x000748be) popup_image_focus_window

0x1d3e,	// (0x0006d136) camera2_autofocus_pane_ParamLimits

0x1d3e,	// (0x0006d136) camera2_autofocus_pane

0x163d,	// (0x0006ca35) bg_popup_sub_pane_cp06

0x46d3,	// (0x0006facb) popup_image_focus_window_g1

0x46db,	// (0x0006fad3) popup_image_focus_window_g2

0x46e3,	// (0x0006fadb) popup_image_focus_window_g3

0x46eb,	// (0x0006fae3) popup_image_focus_window_g4

0x0003,

0xf648,	// (0x0007aa40) popup_image_focus_window_g

0x46f3,	// (0x0006faeb) popup_image_focus_window_t1

0x4701,	// (0x0006faf9) popup_image_focus_window_t2

0x4711,	// (0x0006fb09) popup_image_focus_window_t3

0x0002,

0xf651,	// (0x0007aa49) popup_image_focus_window_t

0x1d4c,	// (0x0006d144) camera2_autofocus_pane_g1

0x1ce5,	// (0x0006d0dd) bg_tb_trans_pane_cp01

0x471f,	// (0x0006fb17) popup_image_details_window_g1

0x4732,	// (0x0006fb2a) popup_image_details_window_g2

0x0002,

0xf663,	// (0x0007aa5b) popup_image_details_window_g

0x475b,	// (0x0006fb53) popup_image_details_window_t1

0x476d,	// (0x0006fb65) popup_image_details_window_t2

0x4786,	// (0x0006fb7e) popup_image_details_window_t3

0x479a,	// (0x0006fb92) popup_image_details_window_t4

0x47b5,	// (0x0006fbad) popup_image_details_window_t5

0x0004,

0xf66a,	// (0x0007aa62) popup_image_details_window_t

0x1dd4,	// (0x0006d1cc) bg_calc_paper_pane_ParamLimits

0x163d,	// (0x0006ca35) grid_highlight_pane_cp013

0x6be6,	// (0x00071fde) list_calc_pane_ParamLimits

0x6bf8,	// (0x00071ff0) scroll_pane_cp024

0x1de8,	// (0x0006d1e0) bg_calc_display_pane_ParamLimits

0x6c00,	// (0x00071ff8) calc_display_pane_t1_ParamLimits

0x6c15,	// (0x0007200d) calc_display_pane_t2_ParamLimits

0x6c2a,	// (0x00072022) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x0007a4bf) calc_display_pane_t_ParamLimits

0x6d04,	// (0x000720fc) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x0007a4dc) cell_calc_pane_g

0x6d0d,	// (0x00072105) cell_calc_pane_t1

0x1e3d,	// (0x0006d235) grid_highlight_pane_cp02_ParamLimits

0x1e53,	// (0x0006d24b) toolbar_button_pane_cp01_ParamLimits

0x1e53,	// (0x0006d24b) toolbar_button_pane_cp01

0x3133,	// (0x0006e52b) temp_image_control_pane_ParamLimits

0x3133,	// (0x0006e52b) temp_image_control_pane

0x1ce5,	// (0x0006d0dd) main_mp3_pane

0x47cf,	// (0x0006fbc7) temp_image_control_pane_g1_ParamLimits

0x47cf,	// (0x0006fbc7) temp_image_control_pane_g1

0x47dd,	// (0x0006fbd5) temp_image_control_pane_g2_ParamLimits

0x47dd,	// (0x0006fbd5) temp_image_control_pane_g2

0x47ef,	// (0x0006fbe7) temp_image_control_pane_g3_ParamLimits

0x47ef,	// (0x0006fbe7) temp_image_control_pane_g3

0x986d,	// (0x00074c65) temp_image_control_pane_g4_ParamLimits

0x986d,	// (0x00074c65) temp_image_control_pane_g4

0x0003,

0xf675,	// (0x0007aa6d) temp_image_control_pane_g_ParamLimits

0xf675,	// (0x0007aa6d) temp_image_control_pane_g

0x47cf,	// (0x0006fbc7) main_mp3_pane_g1

0x987e,	// (0x00074c76) main_mp3_pane_g2

0x0007,

0xf67e,	// (0x0007aa76) main_mp3_pane_g

0x4824,	// (0x0006fc1c) main_mp3_pane_t1

0x1d5a,	// (0x0006d152) main_camera_pane_g8_ParamLimits

0x1d5a,	// (0x0006d152) main_camera_pane_g8

0x7423,	// (0x0007281b) main_video_pane_g7_ParamLimits

0x7423,	// (0x0007281b) main_video_pane_g7

0x1da8,	// (0x0006d1a0) main_camera2_pane_t7_ParamLimits

0x1da8,	// (0x0006d1a0) main_camera2_pane_t7

0x20aa,	// (0x0006d4a2) scroll_pane_cp025_ParamLimits

0x20aa,	// (0x0006d4a2) scroll_pane_cp025

0x20be,	// (0x0006d4b6) scroll_pane_cp026_ParamLimits

0x20be,	// (0x0006d4b6) scroll_pane_cp026

0x20cd,	// (0x0006d4c5) wml_content_pane_ParamLimits

0x163d,	// (0x0006ca35) main_touch_calib_pane

0x9922,	// (0x00074d1a) main_touch_calib_pane_g1

0x992e,	// (0x00074d26) main_touch_calib_pane_g2

0x993a,	// (0x00074d32) main_touch_calib_pane_g3

0x9946,	// (0x00074d3e) main_touch_calib_pane_g4

0x0003,

0xf69c,	// (0x0007aa94) main_touch_calib_pane_g

0x9952,	// (0x00074d4a) main_touch_calib_pane_t1

0x996b,	// (0x00074d63) main_touch_calib_pane_t2

0x0004,

0xf6a5,	// (0x0007aa9d) main_touch_calib_pane_t

0x29d9,	// (0x0006ddd1) mup_progress_pane_cp02

0x2a0e,	// (0x0006de06) navi_pane_g1

0x2d51,	// (0x0006e149) navi_pane_mp_t3

0x1ce5,	// (0x0006d0dd) main_mp3_pane_ParamLimits

0x95a5,	// (0x0007499d) navi_pane_ParamLimits

0x47cf,	// (0x0006fbc7) main_mp3_pane_g1_ParamLimits

0x987e,	// (0x00074c76) main_mp3_pane_g2_ParamLimits

0x988a,	// (0x00074c82) main_mp3_pane_g3_ParamLimits

0x988a,	// (0x00074c82) main_mp3_pane_g3

0x9896,	// (0x00074c8e) main_mp3_pane_g4_ParamLimits

0x9896,	// (0x00074c8e) main_mp3_pane_g4

0x1d4c,	// (0x0006d144) main_mp3_pane_g5_ParamLimits

0x1d4c,	// (0x0006d144) main_mp3_pane_g5

0x47ff,	// (0x0006fbf7) main_mp3_pane_g6_ParamLimits

0x47ff,	// (0x0006fbf7) main_mp3_pane_g6

0x480c,	// (0x0006fc04) main_mp3_pane_g7_ParamLimits

0x480c,	// (0x0006fc04) main_mp3_pane_g7

0x4818,	// (0x0006fc10) main_mp3_pane_g8_ParamLimits

0x4818,	// (0x0006fc10) main_mp3_pane_g8

0xf67e,	// (0x0007aa76) main_mp3_pane_g_ParamLimits

0x98a2,	// (0x00074c9a) main_mp3_pane_t2

0x98b2,	// (0x00074caa) main_mp3_pane_t3

0x4832,	// (0x0006fc2a) main_mp3_pane_t4

0x4840,	// (0x0006fc38) main_mp3_pane_t5

0x0005,

0xf68f,	// (0x0007aa87) main_mp3_pane_t

0x484e,	// (0x0006fc46) mup_progress_pane_cp01

0x682d,	// (0x00071c25) aid_zoom_text_secondary2

0x4624,	// (0x0006fa1c) list_cale_ev2_pane

0x462c,	// (0x0006fa24) scroll_pane_cp023_ParamLimits

0x99c6,	// (0x00074dbe) field_cale_ev2_pane_ParamLimits

0x99c6,	// (0x00074dbe) field_cale_ev2_pane

0x99f0,	// (0x00074de8) field_cale_ev2_pane_g1_ParamLimits

0x99f0,	// (0x00074de8) field_cale_ev2_pane_g1

0x99fc,	// (0x00074df4) field_cale_ev2_pane_g2_ParamLimits

0x99fc,	// (0x00074df4) field_cale_ev2_pane_g2

0x9a14,	// (0x00074e0c) field_cale_ev2_pane_g3_ParamLimits

0x9a14,	// (0x00074e0c) field_cale_ev2_pane_g3

0x0003,

0xf6b0,	// (0x0007aaa8) field_cale_ev2_pane_g_ParamLimits

0xf6b0,	// (0x0007aaa8) field_cale_ev2_pane_g

0x5c29,	// (0x00071021) field_cale_ev2_pane_t1_ParamLimits

0x5c29,	// (0x00071021) field_cale_ev2_pane_t1

0x5c40,	// (0x00071038) field_cale_ev2_pane_t2_ParamLimits

0x5c40,	// (0x00071038) field_cale_ev2_pane_t2

0x0001,

0xf6b9,	// (0x0007aab1) field_cale_ev2_pane_t_ParamLimits

0xf6b9,	// (0x0007aab1) field_cale_ev2_pane_t

0x8de7,	// (0x000741df) main_postcard_pane_g5_ParamLimits

0x8de7,	// (0x000741df) main_postcard_pane_g5

0x8df5,	// (0x000741ed) main_postcard_pane_g6_ParamLimits

0x8df5,	// (0x000741ed) main_postcard_pane_g6

0x1d3e,	// (0x0006d136) camera2_autofocus_pane_cp_ParamLimits

0x1d3e,	// (0x0006d136) camera2_autofocus_pane_cp

0x1ce5,	// (0x0006d0dd) main_mup3_pane

0x9a77,	// (0x00074e6f) main_mup3_pane_g1_ParamLimits

0x9a77,	// (0x00074e6f) main_mup3_pane_g1

0x9a98,	// (0x00074e90) main_mup3_pane_g2_ParamLimits

0x9a98,	// (0x00074e90) main_mup3_pane_g2

0x9b12,	// (0x00074f0a) main_mup3_pane_g3_ParamLimits

0x9b12,	// (0x00074f0a) main_mup3_pane_g3

0x9b55,	// (0x00074f4d) main_mup3_pane_g4_ParamLimits

0x9b55,	// (0x00074f4d) main_mup3_pane_g4

0x9b98,	// (0x00074f90) main_mup3_pane_g5_ParamLimits

0x9b98,	// (0x00074f90) main_mup3_pane_g5

0x9bdb,	// (0x00074fd3) main_mup3_pane_g6_ParamLimits

0x9bdb,	// (0x00074fd3) main_mup3_pane_g6

0x1d5a,	// (0x0006d152) main_mup3_pane_g7_ParamLimits

0x1d5a,	// (0x0006d152) main_mup3_pane_g7

0x0007,

0xf6c9,	// (0x0007aac1) main_mup3_pane_g_ParamLimits

0xf6c9,	// (0x0007aac1) main_mup3_pane_g

0x9c51,	// (0x00075049) main_mup3_pane_t1_ParamLimits

0x9c51,	// (0x00075049) main_mup3_pane_t1

0x9cc0,	// (0x000750b8) main_mup3_pane_t2_ParamLimits

0x9cc0,	// (0x000750b8) main_mup3_pane_t2

0x9d89,	// (0x00075181) main_mup3_pane_t4_ParamLimits

0x9d89,	// (0x00075181) main_mup3_pane_t4

0x9dd7,	// (0x000751cf) main_mup3_pane_t5_ParamLimits

0x9dd7,	// (0x000751cf) main_mup3_pane_t5

0x9e87,	// (0x0007527f) main_mup3_pane_t6_ParamLimits

0x9e87,	// (0x0007527f) main_mup3_pane_t6

0x0005,

0xf6da,	// (0x0007aad2) main_mup3_pane_t_ParamLimits

0xf6da,	// (0x0007aad2) main_mup3_pane_t

0x9f33,	// (0x0007532b) mup3_progress_pane_ParamLimits

0x9f33,	// (0x0007532b) mup3_progress_pane

0x9fa7,	// (0x0007539f) popup_mup3_control_window_ParamLimits

0x9fa7,	// (0x0007539f) popup_mup3_control_window

0x48ca,	// (0x0006fcc2) popup_mup3_text_window

0x9fc0,	// (0x000753b8) mup3_progress_pane_t1

0x9fdf,	// (0x000753d7) mup3_progress_pane_t2

0x48d2,	// (0x0006fcca) mup3_progress_pane_t3

0x0002,

0xf6e7,	// (0x0007aadf) mup3_progress_pane_t

0x48ef,	// (0x0006fce7) mup_progress_pane_cp03

0x163d,	// (0x0006ca35) bg_tb_trans_pane_cp04

0x9ffe,	// (0x000753f6) mup3_volume_pane

0xa006,	// (0x000753fe) popup_mup3_control_window_g1

0xa00f,	// (0x00075407) mup3_volume_pane_g1

0xa018,	// (0x00075410) mup3_volume_pane_g2

0xa021,	// (0x00075419) mup3_volume_pane_g3

0x0002,

0xf6ee,	// (0x0007aae6) mup3_volume_pane_g

0x163d,	// (0x0006ca35) bg_tb_trans_pane_cp03

0x48ff,	// (0x0006fcf7) popup_mup3_text_window_g1

0x4907,	// (0x0006fcff) popup_mup3_text_window_t1

0x1e30,	// (0x0006d228) list_calc_item_pane_g1_ParamLimits

0x42ee,	// (0x0006f6e6) mup_volume_pane_cp_g1

0x9984,	// (0x00074d7c) main_touch_calib_pane_t3

0x999a,	// (0x00074d92) main_touch_calib_pane_t4

0x99b0,	// (0x00074da8) main_touch_calib_pane_t5

0x67e5,	// (0x00071bdd) aid_cell_size_toolbar2

0x67ed,	// (0x00071be5) aid_popup3_width_pane

0x5aba,	// (0x00070eb2) aid_zoom_text_msg_primary

0x7325,	// (0x0007271d) vorec_t7

0x1df4,	// (0x0006d1ec) bg_calc_paper_pane_g1_ParamLimits

0x1e0c,	// (0x0006d204) bg_calc_paper_pane_g2_ParamLimits

0x1e00,	// (0x0006d1f8) bg_calc_paper_pane_g3_ParamLimits

0x1e24,	// (0x0006d21c) bg_calc_paper_pane_g4_ParamLimits

0x1e18,	// (0x0006d210) bg_calc_paper_pane_g5_ParamLimits

0x6c69,	// (0x00072061) bg_calc_paper_pane_g6_ParamLimits

0x6c7a,	// (0x00072072) bg_calc_paper_pane_g7_ParamLimits

0x6c8b,	// (0x00072083) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x0007a4c6) bg_calc_paper_pane_g_ParamLimits

0x6c9c,	// (0x00072094) calc_bg_paper_pane_g9_ParamLimits

0x1d3e,	// (0x0006d136) image_qvga_pane_ParamLimits

0x1d3e,	// (0x0006d136) image_qvga_pane

0x1cc3,	// (0x0006d0bb) bg_popup_sub_pane_cp04_ParamLimits

0x306a,	// (0x0006e462) popup_mup_playback_window_g1_ParamLimits

0x3076,	// (0x0006e46e) popup_mup_playback_window_t1_ParamLimits

0x308b,	// (0x0006e483) popup_mup_playback_window_t2_ParamLimits

0xf42c,	// (0x0007a824) popup_mup_playback_window_t_ParamLimits

0x1d4c,	// (0x0006d144) main_mup2_pane_g3_ParamLimits

0x1d4c,	// (0x0006d144) main_mup2_pane_g3

0x75e4,	// (0x000729dc) popup_toolbar_window_cp04

0x340f,	// (0x0006e807) popup_call2_audio_second_window_g3_ParamLimits

0x340f,	// (0x0006e807) popup_call2_audio_second_window_g3

0x3827,	// (0x0006ec1f) popup_call2_audio_first_window_g4_ParamLimits

0x3827,	// (0x0006ec1f) popup_call2_audio_first_window_g4

0x3e4e,	// (0x0006f246) popup_call2_audio_in_window_g4_ParamLimits

0x3e4e,	// (0x0006f246) popup_call2_audio_in_window_g4

0x8ec4,	// (0x000742bc) aid_area_sk_bg_cut_ParamLimits

0x8ec4,	// (0x000742bc) aid_area_sk_bg_cut

0x30a0,	// (0x0006e498) aid_area_sk_bg_cut_2_ParamLimits

0x30a0,	// (0x0006e498) aid_area_sk_bg_cut_2

0x163d,	// (0x0006ca35) aid_placing_details_win

0x163d,	// (0x0006ca35) aid_placing_details_win_2

0x1d4c,	// (0x0006d144) camera2_autofocus_pane_g1_ParamLimits

0x6a3a,	// (0x00071e32) popup_fixed_preview_cale_window_ParamLimits

0x6a3a,	// (0x00071e32) popup_fixed_preview_cale_window

0x2de1,	// (0x0006e1d9) navi_slider_pane_g3

0x2dd8,	// (0x0006e1d0) navi_slider_pane_g4

0x2dcf,	// (0x0006e1c7) navi_slider_pane_g5

0x2de1,	// (0x0006e1d9) navi_slider_pane_g6

0x8a78,	// (0x00073e70) navi_slider_pane_g7

0x2f0f,	// (0x0006e307) mup_scale_pane_g3

0x2f18,	// (0x0006e310) mup_scale_pane_g4

0x2f21,	// (0x0006e319) mup_scale_pane_g5

0x8c77,	// (0x0007406f) mup_scale_pane_g6

0x8c80,	// (0x00074078) mup_scale_pane_g7

0x1d8a,	// (0x0006d182) cams2_slider_pane_g3

0x1d8a,	// (0x0006d182) cams2_slider_pane_g4

0x1d8a,	// (0x0006d182) cams2_slider_pane_g5

0x1d8a,	// (0x0006d182) cams2_slider_pane_g6

0x1d8a,	// (0x0006d182) cams2_slider_pane_g7

0x1d8a,	// (0x0006d182) camera2_autofocus_pane_cp_g1

0x415e,	// (0x0006f556) bg_popup_preview_window_pane_cp02_ParamLimits

0x415e,	// (0x0006f556) bg_popup_preview_window_pane_cp02

0x4915,	// (0x0006fd0d) list_fp_cale_pane_ParamLimits

0x4915,	// (0x0006fd0d) list_fp_cale_pane

0x4921,	// (0x0006fd19) popup_fixed_preview_cale_window_t1_ParamLimits

0x4921,	// (0x0006fd19) popup_fixed_preview_cale_window_t1

0xa02a,	// (0x00075422) popup_fixed_preview_cale_window_t2_ParamLimits

0xa02a,	// (0x00075422) popup_fixed_preview_cale_window_t2

0xa03f,	// (0x00075437) popup_fixed_preview_cale_window_t3_ParamLimits

0xa03f,	// (0x00075437) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f5,	// (0x0007aaed) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f5,	// (0x0007aaed) popup_fixed_preview_cale_window_t

0xa054,	// (0x0007544c) list_single_fp_cale_pane_ParamLimits

0xa054,	// (0x0007544c) list_single_fp_cale_pane

0x493f,	// (0x0006fd37) list_single_fp_cale_pane_g1_ParamLimits

0x493f,	// (0x0006fd37) list_single_fp_cale_pane_g1

0x494b,	// (0x0006fd43) list_single_fp_cale_pane_g2_ParamLimits

0x494b,	// (0x0006fd43) list_single_fp_cale_pane_g2

0x0002,

0xf6fc,	// (0x0007aaf4) list_single_fp_cale_pane_g_ParamLimits

0xf6fc,	// (0x0007aaf4) list_single_fp_cale_pane_g

0x4964,	// (0x0006fd5c) list_single_fp_cale_pane_t1_ParamLimits

0x4964,	// (0x0006fd5c) list_single_fp_cale_pane_t1

0x4976,	// (0x0006fd6e) list_single_fp_cale_pane_t2_ParamLimits

0x4976,	// (0x0006fd6e) list_single_fp_cale_pane_t2

0x0001,

0xf703,	// (0x0007aafb) list_single_fp_cale_pane_t_ParamLimits

0xf703,	// (0x0007aafb) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x163d,	// (0x0006ca35) main_dialer_pane

0x163d,	// (0x0006ca35) aid_cell_size_keypad

0x163d,	// (0x0006ca35) dialer_ne_pane

0x163d,	// (0x0006ca35) grid_dialer_command_1_pane

0x163d,	// (0x0006ca35) grid_dialer_command_2_pane

0x163d,	// (0x0006ca35) grid_dialer_keypad_pane

0x4378,	// (0x0006f770) bg_popup_call_pane_cp06_ParamLimits

0x4378,	// (0x0006f770) bg_popup_call_pane_cp06

0x4378,	// (0x0006f770) dialer_ne_clear_pane_ParamLimits

0x4378,	// (0x0006f770) dialer_ne_clear_pane

0x1d8a,	// (0x0006d182) dialer_ne_pane_g1

0x1da8,	// (0x0006d1a0) dialer_ne_pane_t1_ParamLimits

0x1da8,	// (0x0006d1a0) dialer_ne_pane_t1

0x4bb7,	// (0x0006ffaf) dialer_ne_pane_t2_ParamLimits

0x4bb7,	// (0x0006ffaf) dialer_ne_pane_t2

0xa067,	// (0x0007545f) dialer_ne_pane_t3_ParamLimits

0xa067,	// (0x0007545f) dialer_ne_pane_t3

0x0002,

0xf708,	// (0x0007ab00) dialer_ne_pane_t_ParamLimits

0xf708,	// (0x0007ab00) dialer_ne_pane_t

0xa067,	// (0x0007545f) dialer_ne_pane_t3_copy1_ParamLimits

0xa067,	// (0x0007545f) dialer_ne_pane_t3_copy1

0x49a9,	// (0x0006fda1) cell_dialer_keypad_pane_ParamLimits

0x49a9,	// (0x0006fda1) cell_dialer_keypad_pane

0x1ce5,	// (0x0006d0dd) cell_dialer_command_1_pane_ParamLimits

0x1ce5,	// (0x0006d0dd) cell_dialer_command_1_pane

0x49c0,	// (0x0006fdb8) cell_dialer_command_2_pane_ParamLimits

0x49c0,	// (0x0006fdb8) cell_dialer_command_2_pane

0x1ce5,	// (0x0006d0dd) bg_button_pane_cp02_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_button_pane_cp02

0x1d4c,	// (0x0006d144) cell_dialer_keypad_pane_g1_ParamLimits

0x1d4c,	// (0x0006d144) cell_dialer_keypad_pane_g1

0x1ce5,	// (0x0006d0dd) bg_button_pane_cp03_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_button_pane_cp03

0x1d4c,	// (0x0006d144) cell_dialer_command_1_pane_g1_ParamLimits

0x1d4c,	// (0x0006d144) cell_dialer_command_1_pane_g1

0x163d,	// (0x0006ca35) bg_button_pane_cp04

0x1d8a,	// (0x0006d182) cell_dialer_command_2_pane_g1

0x163d,	// (0x0006ca35) bg_button_pane_cp06

0x1d8a,	// (0x0006d182) dialer_ne_clear_pane_g1

0x2a1a,	// (0x0006de12) navi_pane_g2

0x2a48,	// (0x0006de40) navi_pane_g3

0x0002,

0xf334,	// (0x0007a72c) navi_pane_g

0x2d5f,	// (0x0006e157) navi_pane_mv_g2

0x2d86,	// (0x0006e17e) navi_pane_mv_g5

0x8a43,	// (0x00073e3b) navi_pane_mv_t1

0x1de8,	// (0x0006d1e0) main_clock2_pane

0x1d3e,	// (0x0006d136) main_clock2_list_pane_ParamLimits

0x1d3e,	// (0x0006d136) main_clock2_list_pane

0xa0dd,	// (0x000754d5) main_clock2_pane_t1_ParamLimits

0xa0dd,	// (0x000754d5) main_clock2_pane_t1

0xa10b,	// (0x00075503) main_clock2_pane_t2_ParamLimits

0xa10b,	// (0x00075503) main_clock2_pane_t2

0x0004,

0xf714,	// (0x0007ab0c) main_clock2_pane_t_ParamLimits

0xf714,	// (0x0007ab0c) main_clock2_pane_t

0xa170,	// (0x00075568) popup_clock_analogue_window_cp03_ParamLimits

0xa170,	// (0x00075568) popup_clock_analogue_window_cp03

0xa18e,	// (0x00075586) popup_clock_digital_window_cp02_ParamLimits

0xa18e,	// (0x00075586) popup_clock_digital_window_cp02

0xa203,	// (0x000755fb) main_clock2_list_single_pane_ParamLimits

0xa203,	// (0x000755fb) main_clock2_list_single_pane

0x1f9a,	// (0x0006d392) list_highlight_pane_cp05

0x4a03,	// (0x0006fdfb) main_clock2_list_single_pane_t1

0x75e4,	// (0x000729dc) popup_toolbar_window_cp04_ParamLimits

0x1d5a,	// (0x0006d152) camera2_autofocus_pane_g2_ParamLimits

0x1d5a,	// (0x0006d152) camera2_autofocus_pane_g2

0x1d5a,	// (0x0006d152) camera2_autofocus_pane_g3_ParamLimits

0x1d5a,	// (0x0006d152) camera2_autofocus_pane_g3

0x1d5a,	// (0x0006d152) camera2_autofocus_pane_g4_ParamLimits

0x1d5a,	// (0x0006d152) camera2_autofocus_pane_g4

0x1d5a,	// (0x0006d152) camera2_autofocus_pane_g5_ParamLimits

0x1d5a,	// (0x0006d152) camera2_autofocus_pane_g5

0x0004,

0xf658,	// (0x0007aa50) camera2_autofocus_pane_g_ParamLimits

0xf658,	// (0x0007aa50) camera2_autofocus_pane_g

0x9a38,	// (0x00074e30) camera2_autofocus_pane_cp_g2

0x9a40,	// (0x00074e38) camera2_autofocus_pane_cp_g3

0x9a48,	// (0x00074e40) camera2_autofocus_pane_cp_g4

0x9a50,	// (0x00074e48) camera2_autofocus_pane_cp_g5

0x0004,

0xf6be,	// (0x0007aab6) camera2_autofocus_pane_cp_g

0x163d,	// (0x0006ca35) popup_dialer_spcha_window

0x163d,	// (0x0006ca35) bg_popup_sub_pane_cp07

0x163d,	// (0x0006ca35) list_spcha_pane

0x4a11,	// (0x0006fe09) list_single_spcha_pane_ParamLimits

0x4a11,	// (0x0006fe09) list_single_spcha_pane

0x163d,	// (0x0006ca35) list_highlight_pane_cp06

0x24de,	// (0x0006d8d6) list_single_spcha_pane_t1

0x3bf8,	// (0x0006eff0) popup_call2_audio_out_window_g4_ParamLimits

0x3bf8,	// (0x0006eff0) popup_call2_audio_out_window_g4

0x163d,	// (0x0006ca35) main_imed2_pane

0x94ce,	// (0x000748c6) popup_imed_adjust2_window

0x94e1,	// (0x000748d9) popup_imed_trans_window_ParamLimits

0x94e1,	// (0x000748d9) popup_imed_trans_window

0x43d1,	// (0x0006f7c9) popup_blid_sat_info2_window_t1

0x43df,	// (0x0006f7d7) popup_blid_sat_info2_window_t2

0x000a,

0xf5ed,	// (0x0007a9e5) popup_blid_sat_info2_window_t

0xa2b8,	// (0x000756b0) aid_size_cell_colour_35

0xa2d2,	// (0x000756ca) aid_size_cell_colour_112

0xa2e9,	// (0x000756e1) aid_size_cell_effect

0x1ce5,	// (0x0006d0dd) bg_tb_trans_pane_cp02

0x24ab,	// (0x0006d8a3) heading_imed_pane

0xa303,	// (0x000756fb) listscroll_imed_pane

0x4a23,	// (0x0006fe1b) heading_imed_pane_g1

0x4a2b,	// (0x0006fe23) heading_imed_pane_t1

0x4a39,	// (0x0006fe31) grid_imed_colour_35_pane_ParamLimits

0x4a39,	// (0x0006fe31) grid_imed_colour_35_pane

0xa30f,	// (0x00075707) grid_imed_effect_pane

0x4a51,	// (0x0006fe49) list_imed_aspect_pane

0xa31f,	// (0x00075717) scroll_pane_cp027_ParamLimits

0xa31f,	// (0x00075717) scroll_pane_cp027

0xa32b,	// (0x00075723) cell_imed_effect_pane_ParamLimits

0xa32b,	// (0x00075723) cell_imed_effect_pane

0x4a59,	// (0x0006fe51) cell_imed_colour_pane_ParamLimits

0x4a59,	// (0x0006fe51) cell_imed_colour_pane

0x4a9b,	// (0x0006fe93) cell_imed_colour_pane_g1_ParamLimits

0x4a9b,	// (0x0006fe93) cell_imed_colour_pane_g1

0x4aac,	// (0x0006fea4) hgihlgiht_grid_pane_cp016_ParamLimits

0x4aac,	// (0x0006fea4) hgihlgiht_grid_pane_cp016

0xa343,	// (0x0007573b) cell_imed_effect_pane_g1

0xa34b,	// (0x00075743) grid_highlight_pane_cp017

0x4abd,	// (0x0006feb5) list_imed_single_pane_ParamLimits

0x4abd,	// (0x0006feb5) list_imed_single_pane

0x163d,	// (0x0006ca35) list_highlight_pane_cp07

0x4ad2,	// (0x0006feca) list_imed_aspect_pane_comp1_t1

0x2e9f,	// (0x0006e297) bg_tb_trans_pane_cp05

0x4af4,	// (0x0006feec) popup_imed_adjust2_window_g1

0x4b1b,	// (0x0006ff13) popup_imed_adjust2_window_t1

0x4b33,	// (0x0006ff2b) slider_imed_adjust_pane

0x4b47,	// (0x0006ff3f) slider_imed_adjust_pane_g1

0x4b57,	// (0x0006ff4f) slider_imed_adjust_pane_g2

0x4b67,	// (0x0006ff5f) slider_imed_adjust_pane_g3

0x4b78,	// (0x0006ff70) slider_imed_adjust_pane_g4

0x0003,

0xf731,	// (0x0007ab29) slider_imed_adjust_pane_g

0xa354,	// (0x0007574c) aid_size_cell_clipart2

0xa360,	// (0x00075758) grid_imed_clipart_pane

0x2f32,	// (0x0006e32a) scroll_pane_cp031

0xa36a,	// (0x00075762) cell_imed_clipart_pane_ParamLimits

0xa36a,	// (0x00075762) cell_imed_clipart_pane

0xa38d,	// (0x00075785) cell_imed_clipart_pane_g1

0x163d,	// (0x0006ca35) grid_highlight_pane_cp014

0xa0bf,	// (0x000754b7) main_clock2_pane_g1_ParamLimits

0xa0bf,	// (0x000754b7) main_clock2_pane_g1

0xa1aa,	// (0x000755a2) aid_call2_pane_cp10

0xa1bc,	// (0x000755b4) aid_call_pane_cp10

0x2979,	// (0x0006dd71) popup_clock_analogue_window_cp10_g1

0x2979,	// (0x0006dd71) popup_clock_analogue_window_cp10_g2

0xa1ce,	// (0x000755c6) popup_clock_analogue_window_cp10_g3

0xa1ce,	// (0x000755c6) popup_clock_analogue_window_cp10_g4

0x2979,	// (0x0006dd71) popup_clock_analogue_window_cp10_g5

0x0004,

0xf71f,	// (0x0007ab17) popup_clock_analogue_window_cp10_g

0xa1e4,	// (0x000755dc) popup_clock_analogue_window_cp10_t1

0xa215,	// (0x0007560d) clock_digital_number_pane_cp10_ParamLimits

0xa215,	// (0x0007560d) clock_digital_number_pane_cp10

0xa22f,	// (0x00075627) clock_digital_number_pane_cp11_ParamLimits

0xa22f,	// (0x00075627) clock_digital_number_pane_cp11

0xa249,	// (0x00075641) clock_digital_number_pane_cp12_ParamLimits

0xa249,	// (0x00075641) clock_digital_number_pane_cp12

0xa263,	// (0x0007565b) clock_digital_number_pane_cp13_ParamLimits

0xa263,	// (0x0007565b) clock_digital_number_pane_cp13

0xa27d,	// (0x00075675) clock_digital_separator_pane_cp10_ParamLimits

0xa27d,	// (0x00075675) clock_digital_separator_pane_cp10

0xa297,	// (0x0007568f) popup_clock_digital_window_cp02_t1_ParamLimits

0xa297,	// (0x0007568f) popup_clock_digital_window_cp02_t1

0x1cbb,	// (0x0006d0b3) clock_digital_number_pane_cp10_g1

0x1cbb,	// (0x0006d0b3) clock_digital_number_pane_cp10_g2

0x0001,

0xf73a,	// (0x0007ab32) clock_digital_number_pane_cp10_g

0x1cbb,	// (0x0006d0b3) clock_digital_separator_pane_cp10_g1

0x1cbb,	// (0x0006d0b3) clock_digital_separator_pane_g2_cp10

0x2d8e,	// (0x0006e186) navi_pane_vded_g4

0x2d97,	// (0x0006e18f) navi_pane_vded_g5

0x2da0,	// (0x0006e198) navi_pane_vded_t1

0x163d,	// (0x0006ca35) main_vded_pane

0xa396,	// (0x0007578e) main_vded_pane_g1

0xa3a2,	// (0x0007579a) main_vded_pane_g2

0xa3ac,	// (0x000757a4) main_vded_pane_g3

0x0002,

0xf73f,	// (0x0007ab37) main_vded_pane_g

0xa3b6,	// (0x000757ae) main_vded_pane_t1

0xa3c4,	// (0x000757bc) main_vded_pane_t2

0x0001,

0xf746,	// (0x0007ab3e) main_vded_pane_t

0xa3d2,	// (0x000757ca) vded_slider_pane

0xa3dc,	// (0x000757d4) vded_video_pane

0x4b89,	// (0x0006ff81) vded_video_pane_g1

0xa3e6,	// (0x000757de) vded_video_pane_g2

0x1d8a,	// (0x0006d182) vded_video_pane_g3

0x0002,

0xf74b,	// (0x0007ab43) vded_video_pane_g

0x4b93,	// (0x0006ff8b) vded_slider_pane_g1

0x42ee,	// (0x0006f6e6) vded_slider_pane_g2

0x4b9c,	// (0x0006ff94) vded_slider_pane_g3

0x4ba5,	// (0x0006ff9d) vded_slider_pane_g4

0x4bae,	// (0x0006ffa6) vded_slider_pane_g5

0x0004,

0xf752,	// (0x0007ab4a) vded_slider_pane_g

0x9f99,	// (0x00075391) mup3_rocker_pane_ParamLimits

0x9f99,	// (0x00075391) mup3_rocker_pane

0xa3ef,	// (0x000757e7) mup3_control_keys_pane_g1

0xa3f7,	// (0x000757ef) mup3_control_keys_pane_g2

0xa3ff,	// (0x000757f7) mup3_control_keys_pane_g3

0xa407,	// (0x000757ff) mup3_control_keys_pane_g4

0x0003,

0xf75d,	// (0x0007ab55) mup3_control_keys_pane_g

0x6a62,	// (0x00071e5a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x6a62,	// (0x00071e5a) popup_toolbar2_fixed_window_cp01

0x9fb3,	// (0x000753ab) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9fb3,	// (0x000753ab) popup_toolbar2_fixed_window_cp02

0x3581,	// (0x0006e979) popup_call2_audio_second_window_t4_ParamLimits

0x3581,	// (0x0006e979) popup_call2_audio_second_window_t4

0x3abd,	// (0x0006eeb5) popup_call2_audio_first_window_t6_ParamLimits

0x3abd,	// (0x0006eeb5) popup_call2_audio_first_window_t6

0x3cfb,	// (0x0006f0f3) popup_call2_audio_out_window_t6_ParamLimits

0x3cfb,	// (0x0006f0f3) popup_call2_audio_out_window_t6

0x163d,	// (0x0006ca35) main_vitu_pane

0x1d3e,	// (0x0006d136) aid_size_cell_itu_ParamLimits

0x1d3e,	// (0x0006d136) aid_size_cell_itu

0x1d3e,	// (0x0006d136) bg_popup_window_pane_cp08_ParamLimits

0x1d3e,	// (0x0006d136) bg_popup_window_pane_cp08

0x1d3e,	// (0x0006d136) field_vitu_entry_pane_ParamLimits

0x1d3e,	// (0x0006d136) field_vitu_entry_pane

0x1d3e,	// (0x0006d136) grid_vitu_function_pane_ParamLimits

0x1d3e,	// (0x0006d136) grid_vitu_function_pane

0x1d3e,	// (0x0006d136) grid_vitu_itu_pane_ParamLimits

0x1d3e,	// (0x0006d136) grid_vitu_itu_pane

0x1d3e,	// (0x0006d136) cell_vitu_itu_pane_ParamLimits

0x1d3e,	// (0x0006d136) cell_vitu_itu_pane

0x1d3e,	// (0x0006d136) cell_vitu_function_pane_ParamLimits

0x1d3e,	// (0x0006d136) cell_vitu_function_pane

0x1ce5,	// (0x0006d0dd) bg_popup_sub_pane_cp08_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_popup_sub_pane_cp08

0x1d94,	// (0x0006d18c) field_vitu_entry_pane_t1_ParamLimits

0x1d94,	// (0x0006d18c) field_vitu_entry_pane_t1

0x4bb7,	// (0x0006ffaf) field_vitu_entry_pane_t2_ParamLimits

0x4bb7,	// (0x0006ffaf) field_vitu_entry_pane_t2

0x0001,

0xf766,	// (0x0007ab5e) field_vitu_entry_pane_t_ParamLimits

0xf766,	// (0x0007ab5e) field_vitu_entry_pane_t

0x4378,	// (0x0006f770) bg_button_pane_cp05_ParamLimits

0x4378,	// (0x0006f770) bg_button_pane_cp05

0x4bd4,	// (0x0006ffcc) cell_vitu_itu_pane_g1

0x2e8b,	// (0x0006e283) cell_vitu_itu_pane_t1_ParamLimits

0x2e8b,	// (0x0006e283) cell_vitu_itu_pane_t1

0x2e8b,	// (0x0006e283) cell_vitu_itu_pane_t2_ParamLimits

0x2e8b,	// (0x0006e283) cell_vitu_itu_pane_t2

0x0002,

0xf76b,	// (0x0007ab63) cell_vitu_itu_pane_t_ParamLimits

0xf76b,	// (0x0007ab63) cell_vitu_itu_pane_t

0x163d,	// (0x0006ca35) bg_button_pane_cp07

0x1d8a,	// (0x0006d182) cell_vitu_function_pane_g1

0x6bcf,	// (0x00071fc7) main_calc_pane_g1

0x6821,	// (0x00071c19) aid_visual_content_pane

0x163d,	// (0x0006ca35) main_vradio_pane

0x1d5a,	// (0x0006d152) main_vradio_pane_g1_ParamLimits

0x1d5a,	// (0x0006d152) main_vradio_pane_g1

0x1d5a,	// (0x0006d152) main_vradio_pane_g2_ParamLimits

0x1d5a,	// (0x0006d152) main_vradio_pane_g2

0x0001,

0xf502,	// (0x0007a8fa) main_vradio_pane_g_ParamLimits

0xf502,	// (0x0007a8fa) main_vradio_pane_g

0x1da8,	// (0x0006d1a0) main_vradio_pane_t1_ParamLimits

0x1da8,	// (0x0006d1a0) main_vradio_pane_t1

0x1da8,	// (0x0006d1a0) main_vradio_pane_t2_ParamLimits

0x1da8,	// (0x0006d1a0) main_vradio_pane_t2

0x1da8,	// (0x0006d1a0) main_vradio_pane_t3_ParamLimits

0x1da8,	// (0x0006d1a0) main_vradio_pane_t3

0x0002,

0xf772,	// (0x0007ab6a) main_vradio_pane_t_ParamLimits

0xf772,	// (0x0007ab6a) main_vradio_pane_t

0x1d3e,	// (0x0006d136) vradio_rocker_control_pane_ParamLimits

0x1d3e,	// (0x0006d136) vradio_rocker_control_pane

0x1d3e,	// (0x0006d136) vradio_station_info_pane_ParamLimits

0x1d3e,	// (0x0006d136) vradio_station_info_pane

0x1ce5,	// (0x0006d0dd) vradio_frequency_info_pane_ParamLimits

0x1ce5,	// (0x0006d0dd) vradio_frequency_info_pane

0x1d8a,	// (0x0006d182) vradio_station_info_pane_g1

0x2e8b,	// (0x0006e283) vradio_station_info_pane_t1_ParamLimits

0x2e8b,	// (0x0006e283) vradio_station_info_pane_t1

0x1da8,	// (0x0006d1a0) vradio_station_info_pane_t2_ParamLimits

0x1da8,	// (0x0006d1a0) vradio_station_info_pane_t2

0x0001,

0xf779,	// (0x0007ab71) vradio_station_info_pane_t_ParamLimits

0xf779,	// (0x0007ab71) vradio_station_info_pane_t

0x163d,	// (0x0006ca35) vradio_tuning_pane

0xa417,	// (0x0007580f) vradio_rocker_control_pane_g1

0x4bf0,	// (0x0006ffe8) vradio_rocker_control_pane_g2

0xa41f,	// (0x00075817) vradio_rocker_control_pane_g3

0xa427,	// (0x0007581f) vradio_rocker_control_pane_g4

0xa42f,	// (0x00075827) vradio_rocker_control_pane_g5

0x0004,

0xf77e,	// (0x0007ab76) vradio_rocker_control_pane_g

0x1d8a,	// (0x0006d182) vradio_frequency_info_pane_g1

0x1d94,	// (0x0006d18c) vradio_frequency_info_pane_t1_ParamLimits

0x1d94,	// (0x0006d18c) vradio_frequency_info_pane_t1

0xa437,	// (0x0007582f) vradio_tuning_pane_g1

0xa444,	// (0x0007583c) vradio_tuning_pane_t1

0x686a,	// (0x00071c62) area_side_right_pane_ParamLimits

0x686a,	// (0x00071c62) area_side_right_pane

0x4125,	// (0x0006f51d) status_small_pane_g1

0x412d,	// (0x0006f525) status_small_pane_g2

0x4136,	// (0x0006f52e) status_small_pane_g3

0x413f,	// (0x0006f537) status_small_pane_g4

0x0003,

0xf54f,	// (0x0007a947) status_small_pane_g

0x4148,	// (0x0006f540) status_small_pane_t1

0x163d,	// (0x0006ca35) main_video3_pane

0x163d,	// (0x0006ca35) cams_zoom_vslider_pane

0x4bf8,	// (0x0006fff0) image3_wide_pane_ParamLimits

0x4bf8,	// (0x0006fff0) image3_wide_pane

0x163d,	// (0x0006ca35) image3_wide_small_pane

0x4c12,	// (0x0007000a) main_video3_pane_g1_ParamLimits

0x4c12,	// (0x0007000a) main_video3_pane_g1

0x4c12,	// (0x0007000a) main_video3_pane_g2_ParamLimits

0x4c12,	// (0x0007000a) main_video3_pane_g2

0x0001,

0xf789,	// (0x0007ab81) main_video3_pane_g_ParamLimits

0xf789,	// (0x0007ab81) main_video3_pane_g

0x4c30,	// (0x00070028) main_video3_pane_t1_ParamLimits

0x4c30,	// (0x00070028) main_video3_pane_t1

0x4c30,	// (0x00070028) main_video3_pane_t2_ParamLimits

0x4c30,	// (0x00070028) main_video3_pane_t2

0x4c30,	// (0x00070028) main_video3_pane_t3_ParamLimits

0x4c30,	// (0x00070028) main_video3_pane_t3

0x0002,

0xf78e,	// (0x0007ab86) main_video3_pane_t_ParamLimits

0xf78e,	// (0x0007ab86) main_video3_pane_t

0x1d8a,	// (0x0006d182) cams_zoom_vslider_pane_g1

0x1d8a,	// (0x0006d182) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x0007a4a7) cams_zoom_vslider_pane_g

0x163d,	// (0x0006ca35) small_slider_vertical_pane

0x1d8a,	// (0x0006d182) small_slider_vertical_pane_g1

0x1d8a,	// (0x0006d182) small_slider_vertical_pane_g2

0x4c57,	// (0x0007004f) small_slider_vertical_pane_g3

0x0002,

0xf795,	// (0x0007ab8d) small_slider_vertical_pane_g

0x163d,	// (0x0006ca35) main_hwr_training_pane

0x4c60,	// (0x00070058) hwr_training_instruct_pane_ParamLimits

0x4c60,	// (0x00070058) hwr_training_instruct_pane

0xa453,	// (0x0007584b) hwr_training_navi_pane_ParamLimits

0xa453,	// (0x0007584b) hwr_training_navi_pane

0xa46d,	// (0x00075865) hwr_training_write_pane_ParamLimits

0xa46d,	// (0x00075865) hwr_training_write_pane

0x163d,	// (0x0006ca35) bg_frame_shadow_pane

0x4c97,	// (0x0007008f) hwr_training_write_pane_g1

0x4c9f,	// (0x00070097) hwr_training_write_pane_g2

0x4ca7,	// (0x0007009f) hwr_training_write_pane_g3

0x4caf,	// (0x000700a7) hwr_training_write_pane_g4

0x4cb7,	// (0x000700af) hwr_training_write_pane_g5

0x4cbf,	// (0x000700b7) hwr_training_write_pane_g6

0x4cc7,	// (0x000700bf) hwr_training_write_pane_g7

0x0006,

0xf79c,	// (0x0007ab94) hwr_training_write_pane_g

0xa4a5,	// (0x0007589d) hwr_training_navi_pane_g1_ParamLimits

0xa4a5,	// (0x0007589d) hwr_training_navi_pane_g1

0xa4b7,	// (0x000758af) hwr_training_navi_pane_g2_ParamLimits

0xa4b7,	// (0x000758af) hwr_training_navi_pane_g2

0xa4c9,	// (0x000758c1) hwr_training_navi_pane_g3_ParamLimits

0xa4c9,	// (0x000758c1) hwr_training_navi_pane_g3

0xa4d9,	// (0x000758d1) hwr_training_navi_pane_g4_ParamLimits

0xa4d9,	// (0x000758d1) hwr_training_navi_pane_g4

0x0004,

0xf7ab,	// (0x0007aba3) hwr_training_navi_pane_g_ParamLimits

0xf7ab,	// (0x0007aba3) hwr_training_navi_pane_g

0xa4f3,	// (0x000758eb) hwr_training_navi_pane_t1

0xa501,	// (0x000758f9) list_single_hwr_training_instruct_pane_ParamLimits

0xa501,	// (0x000758f9) list_single_hwr_training_instruct_pane

0x4ccf,	// (0x000700c7) list_single_hwr_training_instruct_pane_t1

0x44d2,	// (0x0006f8ca) bg_frame_shadow_pane_g1

0x4cde,	// (0x000700d6) bg_frame_shadow_pane_g2

0x4ce6,	// (0x000700de) bg_frame_shadow_pane_g3

0x4cee,	// (0x000700e6) bg_frame_shadow_pane_g4

0x4cf6,	// (0x000700ee) bg_frame_shadow_pane_g5

0x4cfe,	// (0x000700f6) bg_frame_shadow_pane_g6

0x4d06,	// (0x000700fe) bg_frame_shadow_pane_g7

0x1e97,	// (0x0006d28f) bg_frame_shadow_pane_g8

0x0007,

0xf7b6,	// (0x0007abae) bg_frame_shadow_pane_g

0x163d,	// (0x0006ca35) main_video_tele_dialer_pane

0xa52a,	// (0x00075922) aid_size_cell_video_keypad_ParamLimits

0xa52a,	// (0x00075922) aid_size_cell_video_keypad

0xa53a,	// (0x00075932) grid_video_dialer_keypad_pane_ParamLimits

0xa53a,	// (0x00075932) grid_video_dialer_keypad_pane

0xa56e,	// (0x00075966) video_down_pane_cp_ParamLimits

0xa56e,	// (0x00075966) video_down_pane_cp

0xa598,	// (0x00075990) cell_video_dialer_keypad_pane_ParamLimits

0xa598,	// (0x00075990) cell_video_dialer_keypad_pane

0x4d0e,	// (0x00070106) bg_button_pane_cp08_ParamLimits

0x4d0e,	// (0x00070106) bg_button_pane_cp08

0xa5ad,	// (0x000759a5) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa5ad,	// (0x000759a5) cell_video_dialer_keypad_pane_g1

0x9f8d,	// (0x00075385) mup3_rocker2_pane_ParamLimits

0x9f8d,	// (0x00075385) mup3_rocker2_pane

0x1d8a,	// (0x0006d182) mup3_rocker2_pane_g1

0x9442,	// (0x0007483a) main_dialer2_pane

0x163d,	// (0x0006ca35) main_mp4_pane

0xa605,	// (0x000759fd) main_mp4_pane_g1_ParamLimits

0xa605,	// (0x000759fd) main_mp4_pane_g1

0xa627,	// (0x00075a1f) main_mp4_pane_g2_ParamLimits

0xa627,	// (0x00075a1f) main_mp4_pane_g2

0xa645,	// (0x00075a3d) main_mp4_pane_g3_ParamLimits

0xa645,	// (0x00075a3d) main_mp4_pane_g3

0xa67e,	// (0x00075a76) main_mp4_pane_g4_ParamLimits

0xa67e,	// (0x00075a76) main_mp4_pane_g4

0xa6a6,	// (0x00075a9e) main_mp4_pane_g5_ParamLimits

0xa6a6,	// (0x00075a9e) main_mp4_pane_g5

0x0007,

0xf7d6,	// (0x0007abce) main_mp4_pane_g_ParamLimits

0xf7d6,	// (0x0007abce) main_mp4_pane_g

0xa70e,	// (0x00075b06) main_mp4_pane_t1_ParamLimits

0xa70e,	// (0x00075b06) main_mp4_pane_t1

0xa770,	// (0x00075b68) main_mp4_pane_t2_ParamLimits

0xa770,	// (0x00075b68) main_mp4_pane_t2

0xa7d4,	// (0x00075bcc) main_mp4_pane_t3_ParamLimits

0xa7d4,	// (0x00075bcc) main_mp4_pane_t3

0xa832,	// (0x00075c2a) main_mp4_pane_t4_ParamLimits

0xa832,	// (0x00075c2a) main_mp4_pane_t4

0x0003,

0xf7e7,	// (0x0007abdf) main_mp4_pane_t_ParamLimits

0xf7e7,	// (0x0007abdf) main_mp4_pane_t

0xa890,	// (0x00075c88) mp4_progress_pane_ParamLimits

0xa890,	// (0x00075c88) mp4_progress_pane

0xa8c4,	// (0x00075cbc) mp4_rocker_pane_ParamLimits

0xa8c4,	// (0x00075cbc) mp4_rocker_pane

0xe76a,	// (0x00079b62) mp4_progress_pane_t1

0xe78c,	// (0x00079b84) mp4_progress_pane_t2

0x0001,

0xf7f0,	// (0x0007abe8) mp4_progress_pane_t

0xe7ae,	// (0x00079ba6) mup_progress_pane_cp04

0x1d8a,	// (0x0006d182) mp4_rocker_pane_g1

0x1d3e,	// (0x0006d136) aid_cell_size_keypad2_ParamLimits

0x1d3e,	// (0x0006d136) aid_cell_size_keypad2

0x1d3e,	// (0x0006d136) dialer2_ne_pane_ParamLimits

0x1d3e,	// (0x0006d136) dialer2_ne_pane

0x1d3e,	// (0x0006d136) grid_dialer2_keypad_pane_ParamLimits

0x1d3e,	// (0x0006d136) grid_dialer2_keypad_pane

0x44e2,	// (0x0006f8da) bg_popup_call_pane_cp07_ParamLimits

0x44e2,	// (0x0006f8da) bg_popup_call_pane_cp07

0xa8d8,	// (0x00075cd0) dialer2_ne_pane_t1_ParamLimits

0xa8d8,	// (0x00075cd0) dialer2_ne_pane_t1

0x49a9,	// (0x0006fda1) cell_dialer2_keypad_pane_ParamLimits

0x49a9,	// (0x0006fda1) cell_dialer2_keypad_pane

0x4378,	// (0x0006f770) bg_button_pane_pane_cp04_ParamLimits

0x4378,	// (0x0006f770) bg_button_pane_pane_cp04

0x1d4c,	// (0x0006d144) cell_dialer2_keypad_pane_g1_ParamLimits

0x1d4c,	// (0x0006d144) cell_dialer2_keypad_pane_g1

0x74a6,	// (0x0007289e) aid_placing_vt_set_content_ParamLimits

0x74a6,	// (0x0007289e) aid_placing_vt_set_content

0x74d2,	// (0x000728ca) aid_placing_vt_set_title_ParamLimits

0x74d2,	// (0x000728ca) aid_placing_vt_set_title

0x163d,	// (0x0006ca35) main_image3_pane

0xa931,	// (0x00075d29) area_side_right_pane_cp01_ParamLimits

0xa931,	// (0x00075d29) area_side_right_pane_cp01

0x1d68,	// (0x0006d160) main_image3_pane_g1_ParamLimits

0x1d68,	// (0x0006d160) main_image3_pane_g1

0xa95e,	// (0x00075d56) main_image3_pane_g2_ParamLimits

0xa95e,	// (0x00075d56) main_image3_pane_g2

0xa977,	// (0x00075d6f) main_image3_pane_g3_ParamLimits

0xa977,	// (0x00075d6f) main_image3_pane_g3

0xa990,	// (0x00075d88) main_image3_pane_g4_ParamLimits

0xa990,	// (0x00075d88) main_image3_pane_g4

0x0003,

0xf7ff,	// (0x0007abf7) main_image3_pane_g_ParamLimits

0xf7ff,	// (0x0007abf7) main_image3_pane_g

0xa9a9,	// (0x00075da1) main_image3_pane_t1_ParamLimits

0xa9a9,	// (0x00075da1) main_image3_pane_t1

0xa9ce,	// (0x00075dc6) main_image3_pane_t2_ParamLimits

0xa9ce,	// (0x00075dc6) main_image3_pane_t2

0xa9ed,	// (0x00075de5) main_image3_pane_t3_ParamLimits

0xa9ed,	// (0x00075de5) main_image3_pane_t3

0x0003,

0xf808,	// (0x0007ac00) main_image3_pane_t_ParamLimits

0xf808,	// (0x0007ac00) main_image3_pane_t

0x1d3e,	// (0x0006d136) grid_sctrl_middle_pane_cp01_ParamLimits

0x1d3e,	// (0x0006d136) grid_sctrl_middle_pane_cp01

0xaa4e,	// (0x00075e46) cell_sctrl_middle_pane_cp01_ParamLimits

0xaa4e,	// (0x00075e46) cell_sctrl_middle_pane_cp01

0xaa5f,	// (0x00075e57) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xaa5f,	// (0x00075e57) cell_sctrl_middle_pane_cp01_g1

0x163d,	// (0x0006ca35) main_call4_pane

0xaa6c,	// (0x00075e64) aid_size_button_call4_ParamLimits

0xaa6c,	// (0x00075e64) aid_size_button_call4

0xaaa2,	// (0x00075e9a) call4_windows_pane_ParamLimits

0xaaa2,	// (0x00075e9a) call4_windows_pane

0xaab7,	// (0x00075eaf) grid_call4_button_pane_ParamLimits

0xaab7,	// (0x00075eaf) grid_call4_button_pane

0xaae5,	// (0x00075edd) call4_windows_conf_pane

0xaafa,	// (0x00075ef2) popup_call4_audio_first_window_ParamLimits

0xaafa,	// (0x00075ef2) popup_call4_audio_first_window

0xab4a,	// (0x00075f42) popup_call4_audio_second_window_ParamLimits

0xab4a,	// (0x00075f42) popup_call4_audio_second_window

0xab63,	// (0x00075f5b) popup_call4_audio_wait_window_ParamLimits

0xab63,	// (0x00075f5b) popup_call4_audio_wait_window

0xab71,	// (0x00075f69) cell_call4_button_pane_ParamLimits

0xab71,	// (0x00075f69) cell_call4_button_pane

0xab94,	// (0x00075f8c) bg_button_pane_cp09_ParamLimits

0xab94,	// (0x00075f8c) bg_button_pane_cp09

0xaba0,	// (0x00075f98) cell_call4_button_pane_g1_ParamLimits

0xaba0,	// (0x00075f98) cell_call4_button_pane_g1

0xabad,	// (0x00075fa5) cell_call4_button_pane_t1_ParamLimits

0xabad,	// (0x00075fa5) cell_call4_button_pane_t1

0xe7f7,	// (0x00079bef) popup_call4_audio_conf_window_ParamLimits

0xe7f7,	// (0x00079bef) popup_call4_audio_conf_window

0x9fc0,	// (0x000753b8) mup3_progress_pane_t1_ParamLimits

0x9fdf,	// (0x000753d7) mup3_progress_pane_t2_ParamLimits

0x48d2,	// (0x0006fcca) mup3_progress_pane_t3_ParamLimits

0xf6e7,	// (0x0007aadf) mup3_progress_pane_t_ParamLimits

0x48ef,	// (0x0006fce7) mup_progress_pane_cp03_ParamLimits

0xa40f,	// (0x00075807) mup3_control_keys_pane_g4_copy1

0xa8c4,	// (0x00075cbc) mp4_rocker2_pane_ParamLimits

0xa8c4,	// (0x00075cbc) mp4_rocker2_pane

0xabf1,	// (0x00075fe9) mp4_rocker2_pane_g1

0xabf1,	// (0x00075fe9) mp4_rocker2_pane_g2

0xabf1,	// (0x00075fe9) mp4_rocker2_pane_g3

0xabf1,	// (0x00075fe9) mp4_rocker2_pane_g4

0xabf1,	// (0x00075fe9) mp4_rocker2_pane_g5

0x0004,

0xf811,	// (0x0007ac09) mp4_rocker2_pane_g

0x163d,	// (0x0006ca35) main_camera4_pane

0x163d,	// (0x0006ca35) main_video4_pane

0xa54a,	// (0x00075942) main_video_tele_dialer_pane_t1_ParamLimits

0xa54a,	// (0x00075942) main_video_tele_dialer_pane_t1

0xa55c,	// (0x00075954) main_video_tele_dialer_pane_t2_ParamLimits

0xa55c,	// (0x00075954) main_video_tele_dialer_pane_t2

0x0001,

0xf7c7,	// (0x0007abbf) main_video_tele_dialer_pane_t_ParamLimits

0xf7c7,	// (0x0007abbf) main_video_tele_dialer_pane_t

0xac11,	// (0x00076009) cam4_autofocus_pane_ParamLimits

0xac11,	// (0x00076009) cam4_autofocus_pane

0xac2b,	// (0x00076023) cam4_image_uncrop_pane_ParamLimits

0xac2b,	// (0x00076023) cam4_image_uncrop_pane

0xac42,	// (0x0007603a) cam4_indicators_pane_ParamLimits

0xac42,	// (0x0007603a) cam4_indicators_pane

0xac5e,	// (0x00076056) main_camera4_pane_g1_ParamLimits

0xac5e,	// (0x00076056) main_camera4_pane_g1

0xac6a,	// (0x00076062) main_camera4_pane_g2_ParamLimits

0xac6a,	// (0x00076062) main_camera4_pane_g2

0xac6a,	// (0x00076062) main_camera4_pane_g3_ParamLimits

0xac6a,	// (0x00076062) main_camera4_pane_g3

0xac76,	// (0x0007606e) main_camera4_pane_g4_ParamLimits

0xac76,	// (0x0007606e) main_camera4_pane_g4

0xac82,	// (0x0007607a) main_camera4_pane_g5_ParamLimits

0xac82,	// (0x0007607a) main_camera4_pane_g5

0x0005,

0xf81c,	// (0x0007ac14) main_camera4_pane_g_ParamLimits

0xf81c,	// (0x0007ac14) main_camera4_pane_g

0xac9c,	// (0x00076094) main_camera4_pane_t1_ParamLimits

0xac9c,	// (0x00076094) main_camera4_pane_t1

0x1d4c,	// (0x0006d144) bg_tb_trans_pane_cp06

0xacec,	// (0x000760e4) cam4_indicators_pane_g1

0xacfd,	// (0x000760f5) cam4_indicators_pane_g2

0x0002,

0xf837,	// (0x0007ac2f) cam4_indicators_pane_g

0xad15,	// (0x0007610d) cam4_indicators_pane_t1

0xad3f,	// (0x00076137) main_video4_pane_g1_ParamLimits

0xad3f,	// (0x00076137) main_video4_pane_g1

0xad4b,	// (0x00076143) main_video4_pane_g2_ParamLimits

0xad4b,	// (0x00076143) main_video4_pane_g2

0xad57,	// (0x0007614f) main_video4_pane_g3_ParamLimits

0xad57,	// (0x0007614f) main_video4_pane_g3

0xad63,	// (0x0007615b) main_video4_pane_g4_ParamLimits

0xad63,	// (0x0007615b) main_video4_pane_g4

0x0004,

0xf83e,	// (0x0007ac36) main_video4_pane_g_ParamLimits

0xf83e,	// (0x0007ac36) main_video4_pane_g

0xad83,	// (0x0007617b) vid4_indicators_pane_ParamLimits

0xad83,	// (0x0007617b) vid4_indicators_pane

0xada2,	// (0x0007619a) video4_image_uncrop_cif_pane_ParamLimits

0xada2,	// (0x0007619a) video4_image_uncrop_cif_pane

0xadb1,	// (0x000761a9) video4_image_uncrop_nhd_pane_ParamLimits

0xadb1,	// (0x000761a9) video4_image_uncrop_nhd_pane

0xac2b,	// (0x00076023) video4_image_uncrop_vga_pane_ParamLimits

0xac2b,	// (0x00076023) video4_image_uncrop_vga_pane

0x1ce5,	// (0x0006d0dd) bg_tb_trans_pane_cp07

0xadc6,	// (0x000761be) vid4_indicators_pane_g1

0xadda,	// (0x000761d2) vid4_indicators_pane_g2

0xadee,	// (0x000761e6) vid4_indicators_pane_g3

0x0004,

0xf849,	// (0x0007ac41) vid4_indicators_pane_g

0xae1b,	// (0x00076213) vid4_indicators_pane_t1

0xae32,	// (0x0007622a) cam4_autofocus_pane_g1

0xae3a,	// (0x00076232) cam4_autofocus_pane_g2

0xae42,	// (0x0007623a) cam4_autofocus_pane_g3

0x0002,

0xf854,	// (0x0007ac4c) cam4_autofocus_pane_g

0xae4a,	// (0x00076242) cam4_autofocus_pane_g3_copy1

0xa57c,	// (0x00075974) video_down_pane_cp_t1

0xa58a,	// (0x00075982) video_down_pane_cp_t2

0x0001,

0xf7cc,	// (0x0007abc4) video_down_pane_cp_t

0x1d3e,	// (0x0006d136) popup_vitu2_window_ParamLimits

0x1d3e,	// (0x0006d136) popup_vitu2_window

0xae52,	// (0x0007624a) aid_size_cell2_itu2_ParamLimits

0xae52,	// (0x0007624a) aid_size_cell2_itu2

0xae74,	// (0x0007626c) aid_size_cell_itu2_ParamLimits

0xae74,	// (0x0007626c) aid_size_cell_itu2

0x44e2,	// (0x0006f8da) bg_popup_window_pane_cp09_ParamLimits

0x44e2,	// (0x0006f8da) bg_popup_window_pane_cp09

0xaeb8,	// (0x000762b0) field_vitu2_entry_pane_ParamLimits

0xaeb8,	// (0x000762b0) field_vitu2_entry_pane

0xaed8,	// (0x000762d0) grid_vitu2_function_pane_ParamLimits

0xaed8,	// (0x000762d0) grid_vitu2_function_pane

0xaf18,	// (0x00076310) grid_vitu2_itu_pane_ParamLimits

0xaf18,	// (0x00076310) grid_vitu2_itu_pane

0xaf8c,	// (0x00076384) cell_vitu2_itu_pane_ParamLimits

0xaf8c,	// (0x00076384) cell_vitu2_itu_pane

0xafa5,	// (0x0007639d) cell_vitu2_function_pane_ParamLimits

0xafa5,	// (0x0007639d) cell_vitu2_function_pane

0xe80b,	// (0x00079c03) bg_popup_call_pane_cp08_ParamLimits

0xe80b,	// (0x00079c03) bg_popup_call_pane_cp08

0xe822,	// (0x00079c1a) field_vitu2_entry_pane_g1

0xe82e,	// (0x00079c26) field_vitu2_entry_pane_g2

0x0002,

0xf85b,	// (0x0007ac53) field_vitu2_entry_pane_g

0x5c55,	// (0x0007104d) field_vitu2_entry_pane_t1_ParamLimits

0x5c55,	// (0x0007104d) field_vitu2_entry_pane_t1

0x5c8c,	// (0x00071084) field_vitu2_entry_pane_t2_ParamLimits

0x5c8c,	// (0x00071084) field_vitu2_entry_pane_t2

0x0001,

0xf862,	// (0x0007ac5a) field_vitu2_entry_pane_t_ParamLimits

0xf862,	// (0x0007ac5a) field_vitu2_entry_pane_t

0x976c,	// (0x00074b64) bg_button_pane_cp010_ParamLimits

0x976c,	// (0x00074b64) bg_button_pane_cp010

0xafe6,	// (0x000763de) cell_vitu2_itu_pane_g1

0xb00c,	// (0x00076404) cell_vitu2_itu_pane_t1_ParamLimits

0xb00c,	// (0x00076404) cell_vitu2_itu_pane_t1

0x5ca9,	// (0x000710a1) cell_vitu2_itu_pane_t2_ParamLimits

0x5ca9,	// (0x000710a1) cell_vitu2_itu_pane_t2

0x0002,

0xf86c,	// (0x0007ac64) cell_vitu2_itu_pane_t_ParamLimits

0xf86c,	// (0x0007ac64) cell_vitu2_itu_pane_t

0x1ce5,	// (0x0006d0dd) bg_button_pane_cp011

0xb058,	// (0x00076450) cell_vitu2_function_pane_g1

0x163d,	// (0x0006ca35) main_myfav_hc_pane

0xaa2f,	// (0x00075e27) popup_image3_note_pane_ParamLimits

0xaa2f,	// (0x00075e27) popup_image3_note_pane

0xaa3d,	// (0x00075e35) popup_image3_tool_bar_pane_ParamLimits

0xaa3d,	// (0x00075e35) popup_image3_tool_bar_pane

0x5d1f,	// (0x00071117) cell_vitu2_itu_pane_t3_ParamLimits

0x5d1f,	// (0x00071117) cell_vitu2_itu_pane_t3

0x163d,	// (0x0006ca35) bg_popup_trans_pane

0xe842,	// (0x00079c3a) grid_image3_tool_bar_pane

0xe84c,	// (0x00079c44) bg_popup_trans_pane_g1

0x21b3,	// (0x0006d5ab) bg_popup_trans_pane_g2

0xe854,	// (0x00079c4c) bg_popup_trans_pane_g3

0xe85c,	// (0x00079c54) bg_popup_trans_pane_g4

0xe864,	// (0x00079c5c) bg_popup_trans_pane_g5

0xe86c,	// (0x00079c64) bg_popup_trans_pane_g6

0xe874,	// (0x00079c6c) bg_popup_trans_pane_g7

0xe87c,	// (0x00079c74) bg_popup_trans_pane_g8

0x2193,	// (0x0006d58b) bg_popup_trans_pane_g9

0x0008,

0xf873,	// (0x0007ac6b) bg_popup_trans_pane_g

0xe884,	// (0x00079c7c) cell_image3_tool_bar_pane_ParamLimits

0xe884,	// (0x00079c7c) cell_image3_tool_bar_pane

0x1d8a,	// (0x0006d182) cell_image3_tool_bar_pane_g1

0x163d,	// (0x0006ca35) bg_popup_trans_pane_cp1

0xe898,	// (0x00079c90) popup_image3_note_pane_t1

0xe8a6,	// (0x00079c9e) popup_image3_note_pane_t2

0xe8b4,	// (0x00079cac) popup_image3_note_pane_t3

0x0002,

0xf886,	// (0x0007ac7e) popup_image3_note_pane_t

0xe8c2,	// (0x00079cba) popup_image3_note_pane_t3_copy1

0xb06c,	// (0x00076464) bg_myfav_hc_instruction_pane_ParamLimits

0xb06c,	// (0x00076464) bg_myfav_hc_instruction_pane

0xb084,	// (0x0007647c) cell_myfav_contact_pane_ParamLimits

0xb084,	// (0x0007647c) cell_myfav_contact_pane

0xb09e,	// (0x00076496) cell_myfav_contact_pane_cp1_ParamLimits

0xb09e,	// (0x00076496) cell_myfav_contact_pane_cp1

0xb0b6,	// (0x000764ae) cell_myfav_contact_pane_cp2_ParamLimits

0xb0b6,	// (0x000764ae) cell_myfav_contact_pane_cp2

0xb0ce,	// (0x000764c6) cell_myfav_contact_pane_cp3_ParamLimits

0xb0ce,	// (0x000764c6) cell_myfav_contact_pane_cp3

0xb0e5,	// (0x000764dd) cell_myfav_contact_pane_cp4_ParamLimits

0xb0e5,	// (0x000764dd) cell_myfav_contact_pane_cp4

0xb0fb,	// (0x000764f3) cell_myfav_contact_pane_cp5_ParamLimits

0xb0fb,	// (0x000764f3) cell_myfav_contact_pane_cp5

0xb10f,	// (0x00076507) cell_myfav_contact_pane_cp6_ParamLimits

0xb10f,	// (0x00076507) cell_myfav_contact_pane_cp6

0xb123,	// (0x0007651b) cell_myfav_contact_pane_cp7_ParamLimits

0xb123,	// (0x0007651b) cell_myfav_contact_pane_cp7

0xe8d0,	// (0x00079cc8) listscroll_gen_pane_cp05

0xb13b,	// (0x00076533) main_myfav_hc_pane_g1_ParamLimits

0xb13b,	// (0x00076533) main_myfav_hc_pane_g1

0xb151,	// (0x00076549) main_myfav_hc_pane_g2_ParamLimits

0xb151,	// (0x00076549) main_myfav_hc_pane_g2

0x0002,

0xf88d,	// (0x0007ac85) main_myfav_hc_pane_g_ParamLimits

0xf88d,	// (0x0007ac85) main_myfav_hc_pane_g

0xb181,	// (0x00076579) main_myfav_hc_pane_t1_ParamLimits

0xb181,	// (0x00076579) main_myfav_hc_pane_t1

0xe8d9,	// (0x00079cd1) main_myfav_hc_pane_t2_ParamLimits

0xe8d9,	// (0x00079cd1) main_myfav_hc_pane_t2

0xe8eb,	// (0x00079ce3) main_myfav_hc_pane_t3_ParamLimits

0xe8eb,	// (0x00079ce3) main_myfav_hc_pane_t3

0xb198,	// (0x00076590) main_myfav_hc_pane_t4_ParamLimits

0xb198,	// (0x00076590) main_myfav_hc_pane_t4

0x0004,

0xf894,	// (0x0007ac8c) main_myfav_hc_pane_t_ParamLimits

0xf894,	// (0x0007ac8c) main_myfav_hc_pane_t

0x1d8a,	// (0x0006d182) bg_myfav_hc_instruction_pane_g1

0xe8fd,	// (0x00079cf5) cell_myfav_contact_pane_g1_ParamLimits

0xe8fd,	// (0x00079cf5) cell_myfav_contact_pane_g1

0xe8fd,	// (0x00079cf5) cell_myfav_contact_pane_g2_ParamLimits

0xe8fd,	// (0x00079cf5) cell_myfav_contact_pane_g2

0xe909,	// (0x00079d01) cell_myfav_contact_pane_g3_ParamLimits

0xe909,	// (0x00079d01) cell_myfav_contact_pane_g3

0x1d5a,	// (0x0006d152) cell_myfav_contact_pane_g4_ParamLimits

0x1d5a,	// (0x0006d152) cell_myfav_contact_pane_g4

0xe916,	// (0x00079d0e) cell_myfav_contact_pane_g5_ParamLimits

0xe916,	// (0x00079d0e) cell_myfav_contact_pane_g5

0x0004,

0xf89f,	// (0x0007ac97) cell_myfav_contact_pane_g_ParamLimits

0xf89f,	// (0x0007ac97) cell_myfav_contact_pane_g

0xb169,	// (0x00076561) main_myfav_hc_pane_g3_ParamLimits

0xb169,	// (0x00076561) main_myfav_hc_pane_g3

0x699e,	// (0x00071d96) popup_adpt_find_window

0xb1c2,	// (0x000765ba) afind_page_pane_ParamLimits

0xb1c2,	// (0x000765ba) afind_page_pane

0xb1cf,	// (0x000765c7) aid_size_cell_afind_ParamLimits

0xb1cf,	// (0x000765c7) aid_size_cell_afind

0xb1e9,	// (0x000765e1) bg_popup_sub_pane_cp09_ParamLimits

0xb1e9,	// (0x000765e1) bg_popup_sub_pane_cp09

0xb1fa,	// (0x000765f2) find_pane_cp01_ParamLimits

0xb1fa,	// (0x000765f2) find_pane_cp01

0xe922,	// (0x00079d1a) grid_afind_control_pane_ParamLimits

0xe922,	// (0x00079d1a) grid_afind_control_pane

0xb20d,	// (0x00076605) grid_afind_pane_ParamLimits

0xb20d,	// (0x00076605) grid_afind_pane

0xb229,	// (0x00076621) cell_afind_pane_ParamLimits

0xb229,	// (0x00076621) cell_afind_pane

0x1d8a,	// (0x0006d182) afind_page_pane_g1

0xb271,	// (0x00076669) afind_page_pane_g2

0xb279,	// (0x00076671) afind_page_pane_g3

0x0002,

0xf8aa,	// (0x0007aca2) afind_page_pane_g

0xb281,	// (0x00076679) afind_page_pane_t1

0xe948,	// (0x00079d40) cell_afind_grid_control_pane_ParamLimits

0xe948,	// (0x00079d40) cell_afind_grid_control_pane

0xe957,	// (0x00079d4f) bg_button_pane_cp69_ParamLimits

0xe957,	// (0x00079d4f) bg_button_pane_cp69

0xb28f,	// (0x00076687) cell_afind_pane_g1_ParamLimits

0xb28f,	// (0x00076687) cell_afind_pane_g1

0xb29c,	// (0x00076694) cell_afind_pane_t1_ParamLimits

0xb29c,	// (0x00076694) cell_afind_pane_t1

0xe963,	// (0x00079d5b) bg_button_pane_cp72

0xe96b,	// (0x00079d63) cell_afind_grid_control_pane_g1

0x8feb,	// (0x000743e3) aid_image_placing_area_ParamLimits

0x8feb,	// (0x000743e3) aid_image_placing_area

0x1d4c,	// (0x0006d144) field_vitu_entry_pane_g1_ParamLimits

0x1d4c,	// (0x0006d144) field_vitu_entry_pane_g1

0x1d4c,	// (0x0006d144) field_vitu_entry_pane_g2_ParamLimits

0x1d4c,	// (0x0006d144) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x0007a5b4) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x0007a5b4) field_vitu_entry_pane_g

0x4bd4,	// (0x0006ffcc) cell_vitu_itu_pane_g1_ParamLimits

0x4bb7,	// (0x0006ffaf) cell_vitu_itu_pane_t3_ParamLimits

0x4bb7,	// (0x0006ffaf) cell_vitu_itu_pane_t3

0xe76a,	// (0x00079b62) mp4_progress_pane_t1_ParamLimits

0xe78c,	// (0x00079b84) mp4_progress_pane_t2_ParamLimits

0xf7f0,	// (0x0007abe8) mp4_progress_pane_t_ParamLimits

0xe7ae,	// (0x00079ba6) mup_progress_pane_cp04_ParamLimits

0xb1ac,	// (0x000765a4) main_myfav_hc_pane_t5_ParamLimits

0xb1ac,	// (0x000765a4) main_myfav_hc_pane_t5

0x5ac2,	// (0x00070eba) aid_zoom_text_primary

0x699e,	// (0x00071d96) popup_adpt_find_window_ParamLimits

0x1ce5,	// (0x0006d0dd) main_cam_set_pane

0xac50,	// (0x00076048) cam4_zoom_pane_ParamLimits

0xac50,	// (0x00076048) cam4_zoom_pane

0xb2ae,	// (0x000766a6) main_cam_set_pane_g1_ParamLimits

0xb2ae,	// (0x000766a6) main_cam_set_pane_g1

0xb2bc,	// (0x000766b4) main_cam_set_pane_g2_ParamLimits

0xb2bc,	// (0x000766b4) main_cam_set_pane_g2

0x0001,

0xf8b1,	// (0x0007aca9) main_cam_set_pane_g_ParamLimits

0xf8b1,	// (0x0007aca9) main_cam_set_pane_g

0xb2c8,	// (0x000766c0) main_cam_set_pane_t1_ParamLimits

0xb2c8,	// (0x000766c0) main_cam_set_pane_t1

0xb2e4,	// (0x000766dc) main_cset_listscroll_pane_ParamLimits

0xb2e4,	// (0x000766dc) main_cset_listscroll_pane

0xb316,	// (0x0007670e) main_cset_slider_pane_ParamLimits

0xb316,	// (0x0007670e) main_cset_slider_pane

0xe97c,	// (0x00079d74) main_cset_list_pane_ParamLimits

0xe97c,	// (0x00079d74) main_cset_list_pane

0xe98c,	// (0x00079d84) scroll_pane_cp028

0xb335,	// (0x0007672d) aid_area_touch_slider

0xb351,	// (0x00076749) cset_slider_pane

0xb374,	// (0x0007676c) main_cset_slider_pane_g1

0xb389,	// (0x00076781) main_cset_slider_pane_g2

0x0011,

0xf8b6,	// (0x0007acae) main_cset_slider_pane_g

0xe9c5,	// (0x00079dbd) main_cset_slider_pane_t1

0xb44f,	// (0x00076847) main_cset_slider_pane_t2

0xb469,	// (0x00076861) main_cset_slider_pane_t3

0xb483,	// (0x0007687b) main_cset_slider_pane_t4

0xb4a1,	// (0x00076899) main_cset_slider_pane_t5

0xb4bf,	// (0x000768b7) main_cset_slider_pane_t6

0xb4d6,	// (0x000768ce) main_cset_slider_pane_t7

0x000e,

0xf8db,	// (0x0007acd3) main_cset_slider_pane_t

0xb5e4,	// (0x000769dc) cset_list_set_pane_ParamLimits

0xb5e4,	// (0x000769dc) cset_list_set_pane

0xea5f,	// (0x00079e57) aid_position_infowindow_above

0xea67,	// (0x00079e5f) aid_position_infowindow_below

0xb5fd,	// (0x000769f5) cset_list_set_pane_g1_ParamLimits

0xb5fd,	// (0x000769f5) cset_list_set_pane_g1

0x5d71,	// (0x00071169) cset_list_set_pane_g3_ParamLimits

0x5d71,	// (0x00071169) cset_list_set_pane_g3

0x0001,

0xf8fa,	// (0x0007acf2) cset_list_set_pane_g_ParamLimits

0xf8fa,	// (0x0007acf2) cset_list_set_pane_g

0x5d80,	// (0x00071178) cset_list_set_pane_t1_ParamLimits

0x5d80,	// (0x00071178) cset_list_set_pane_t1

0x1ce5,	// (0x0006d0dd) list_highlight_pane_cp021_ParamLimits

0x1ce5,	// (0x0006d0dd) list_highlight_pane_cp021

0x2f0f,	// (0x0006e307) cset_slider_pane_g1

0x2f21,	// (0x0006e319) cset_slider_pane_g2

0x2f18,	// (0x0006e310) cset_slider_pane_g3

0x0002,

0xf8ff,	// (0x0007acf7) cset_slider_pane_g

0xb609,	// (0x00076a01) aid_area_touch_cam4_zoom

0xb611,	// (0x00076a09) cam4_zoom_cont_pane

0xb619,	// (0x00076a11) cam4_zoom_pane_g1

0xb621,	// (0x00076a19) cam4_zoom_pane_g2

0xb629,	// (0x00076a21) cam4_zoom_pane_g3

0x0002,

0xf906,	// (0x0007acfe) cam4_zoom_pane_g

0xea6f,	// (0x00079e67) cam4_zoom_cont_pane_g1

0xea78,	// (0x00079e70) cam4_zoom_cont_pane_g2

0xea81,	// (0x00079e79) cam4_zoom_cont_pane_g3

0x0002,

0xf90d,	// (0x0007ad05) cam4_zoom_cont_pane_g

0xaa86,	// (0x00075e7e) call4_image_pane_ParamLimits

0xaa86,	// (0x00075e7e) call4_image_pane

0xaae5,	// (0x00075edd) call4_windows_conf_pane_ParamLimits

0xab28,	// (0x00075f20) popup_call4_audio_in_window_ParamLimits

0xab28,	// (0x00075f20) popup_call4_audio_in_window

0x163d,	// (0x0006ca35) bg_popup_call2_act_pane_cp02

0xe7ef,	// (0x00079be7) call4_list_conf_pane

0x1d8a,	// (0x0006d182) call4_image_pane_g1

0x1d8a,	// (0x0006d182) call4_image_pane_g2

0x0001,

0xf0af,	// (0x0007a4a7) call4_image_pane_g

0xea8a,	// (0x00079e82) list_single_graphic_popup_conf4_pane_ParamLimits

0xea8a,	// (0x00079e82) list_single_graphic_popup_conf4_pane

0x163d,	// (0x0006ca35) list_highlight_pane_cp022

0xea9d,	// (0x00079e95) list_single_graphic_popup_conf4_pane_g1

0x2876,	// (0x0006dc6e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf914,	// (0x0007ad0c) list_single_graphic_popup_conf4_pane_g

0xeaa5,	// (0x00079e9d) list_single_graphic_popup_conf4_pane_t1

0x7636,	// (0x00072a2e) popup_vtel_slider_window_ParamLimits

0x7636,	// (0x00072a2e) popup_vtel_slider_window

0xe7c1,	// (0x00079bb9) dialer2_ne_pane_t2_ParamLimits

0xe7c1,	// (0x00079bb9) dialer2_ne_pane_t2

0x0001,

0xf7f5,	// (0x0007abed) dialer2_ne_pane_t_ParamLimits

0xf7f5,	// (0x0007abed) dialer2_ne_pane_t

0x1ce5,	// (0x0006d0dd) bg_popup_sub_pane_cp010_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_popup_sub_pane_cp010

0xb631,	// (0x00076a29) popup_vtel_slider_window_g1_ParamLimits

0xb631,	// (0x00076a29) popup_vtel_slider_window_g1

0xb63d,	// (0x00076a35) popup_vtel_slider_window_g2_ParamLimits

0xb63d,	// (0x00076a35) popup_vtel_slider_window_g2

0x0003,

0xf919,	// (0x0007ad11) popup_vtel_slider_window_g_ParamLimits

0xf919,	// (0x0007ad11) popup_vtel_slider_window_g

0xb685,	// (0x00076a7d) vtel_slider_pane_ParamLimits

0xb685,	// (0x00076a7d) vtel_slider_pane

0xb694,	// (0x00076a8c) vtel_slider_pane_g1_ParamLimits

0xb694,	// (0x00076a8c) vtel_slider_pane_g1

0xb6a1,	// (0x00076a99) vtel_slider_pane_g2_ParamLimits

0xb6a1,	// (0x00076a99) vtel_slider_pane_g2

0xb6ae,	// (0x00076aa6) vtel_slider_pane_g3_ParamLimits

0xb6ae,	// (0x00076aa6) vtel_slider_pane_g3

0xb694,	// (0x00076a8c) vtel_slider_pane_g4_ParamLimits

0xb694,	// (0x00076a8c) vtel_slider_pane_g4

0xb6bb,	// (0x00076ab3) vtel_slider_pane_g5_ParamLimits

0xb6bb,	// (0x00076ab3) vtel_slider_pane_g5

0x0004,

0xf922,	// (0x0007ad1a) vtel_slider_pane_g_ParamLimits

0xf922,	// (0x0007ad1a) vtel_slider_pane_g

0x1ce5,	// (0x0006d0dd) main_gallery2_pane

0xae9a,	// (0x00076292) aid_size_row_itut2_dropdow_list_ParamLimits

0xae9a,	// (0x00076292) aid_size_row_itut2_dropdow_list

0xaef6,	// (0x000762ee) grid_vitu2_function_top_pane_ParamLimits

0xaef6,	// (0x000762ee) grid_vitu2_function_top_pane

0xaf4a,	// (0x00076342) popup_vitu2_dropdown_list_window_ParamLimits

0xaf4a,	// (0x00076342) popup_vitu2_dropdown_list_window

0xaf6c,	// (0x00076364) popup_vitu2_match_list_window

0xb6c8,	// (0x00076ac0) cell_vitu2_function_top_pane_ParamLimits

0xb6c8,	// (0x00076ac0) cell_vitu2_function_top_pane

0xb6e2,	// (0x00076ada) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb6e2,	// (0x00076ada) cell_vitu2_function_top_pane_cp01

0xb6fe,	// (0x00076af6) cell_vitu2_function_top_wide_pane_ParamLimits

0xb6fe,	// (0x00076af6) cell_vitu2_function_top_wide_pane

0x1ce5,	// (0x0006d0dd) bg_button_pane_cp012

0xb71c,	// (0x00076b14) cell_vitu2_function_top_pane_g1

0xb730,	// (0x00076b28) bg_button_pane_cp013_ParamLimits

0xb730,	// (0x00076b28) bg_button_pane_cp013

0xb74c,	// (0x00076b44) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb74c,	// (0x00076b44) cell_vitu2_function_top_wide_pane_g1

0x1d3e,	// (0x0006d136) bg_popup_sub_pane_cp20

0xb764,	// (0x00076b5c) list_vitu2_match_list_pane

0xe84c,	// (0x00079c44) bg_popup_sub_pane_cp20_g1

0xe854,	// (0x00079c4c) bg_popup_sub_pane_cp20_g2

0x21b3,	// (0x0006d5ab) bg_popup_sub_pane_cp20_g3

0xe85c,	// (0x00079c54) bg_popup_sub_pane_cp20_g4

0x2193,	// (0x0006d58b) bg_popup_sub_pane_cp20_g5

0xeabb,	// (0x00079eb3) bg_popup_sub_pane_cp20_g6

0xe86c,	// (0x00079c64) bg_popup_sub_pane_cp20_g7

0xe874,	// (0x00079c6c) bg_popup_sub_pane_cp20_g8

0xe87c,	// (0x00079c74) bg_popup_sub_pane_cp20_g9

0x0008,

0xf92d,	// (0x0007ad25) bg_popup_sub_pane_cp20_g

0xb77c,	// (0x00076b74) list_vitu2_match_list_item_pane_ParamLimits

0xb77c,	// (0x00076b74) list_vitu2_match_list_item_pane

0xb78e,	// (0x00076b86) list_vitu2_match_list_item_pane_t1

0x163d,	// (0x0006ca35) bg_popup_sub_pane_cp21

0x1f9a,	// (0x0006d392) grid_vitu2_dropdown_list_pane

0xb79c,	// (0x00076b94) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb79c,	// (0x00076b94) cell_vitu2_dropdown_list_char_pane

0xb7be,	// (0x00076bb6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb7be,	// (0x00076bb6) cell_vitu2_dropdown_list_ctrl_pane

0xeac3,	// (0x00079ebb) cell_vitu2_dropdown_list_char_pane_g1

0xeacc,	// (0x00079ec4) cell_vitu2_dropdown_list_char_pane_g2

0xead5,	// (0x00079ecd) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf940,	// (0x0007ad38) cell_vitu2_dropdown_list_char_pane_g

0xb7e6,	// (0x00076bde) cell_vitu2_dropdown_list_char_pane_t1

0xb7f4,	// (0x00076bec) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb7f4,	// (0x00076bec) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb804,	// (0x00076bfc) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb804,	// (0x00076bfc) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb815,	// (0x00076c0d) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb815,	// (0x00076c0d) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb825,	// (0x00076c1d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb825,	// (0x00076c1d) cell_vitu2_dropdown_list_ctrl_pane_g4

0x1d4c,	// (0x0006d144) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x1d4c,	// (0x0006d144) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf947,	// (0x0007ad3f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf947,	// (0x0007ad3f) cell_vitu2_dropdown_list_ctrl_pane_g

0xb83e,	// (0x00076c36) aid_size_cell_gallery2_ParamLimits

0xb83e,	// (0x00076c36) aid_size_cell_gallery2

0xb858,	// (0x00076c50) grid_gallery2_pane_ParamLimits

0xb858,	// (0x00076c50) grid_gallery2_pane

0xb86f,	// (0x00076c67) scroll_pane_cp029_ParamLimits

0xb86f,	// (0x00076c67) scroll_pane_cp029

0xb87f,	// (0x00076c77) cell_gallery2_pane_ParamLimits

0xb87f,	// (0x00076c77) cell_gallery2_pane

0xeade,	// (0x00079ed6) cell_gallery2_pane_g2

0xb8d4,	// (0x00076ccc) cell_gallery2_pane_g3

0xeae6,	// (0x00079ede) cell_gallery2_pane_g4

0xeaee,	// (0x00079ee6) cell_gallery2_pane_g5

0x1f9a,	// (0x0006d392) grid_highlight_pane_cp10

0xaf6c,	// (0x00076364) popup_vitu2_match_list_window_ParamLimits

0xaf7e,	// (0x00076376) popup_vitu2_query_window_ParamLimits

0xaf7e,	// (0x00076376) popup_vitu2_query_window

0x163d,	// (0x0006ca35) bg_vitu2_candi_button_pane

0xeac3,	// (0x00079ebb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xeacc,	// (0x00079ec4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xead5,	// (0x00079ecd) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5d95,	// (0x0007118d) bg_button_pane_cp015

0xb8dc,	// (0x00076cd4) bg_button_pane_cp016

0xb8e8,	// (0x00076ce0) bg_button_pane_cp017

0x2e9f,	// (0x0006e297) bg_popup_sub_pane_cp22

0xeaf6,	// (0x00079eee) popup_vitu2_query_window_g1

0xb903,	// (0x00076cfb) popup_vitu2_query_window_g2

0x0002,

0xf952,	// (0x0007ad4a) popup_vitu2_query_window_g

0x5dcf,	// (0x000711c7) popup_vitu2_query_window_t1_ParamLimits

0x5dcf,	// (0x000711c7) popup_vitu2_query_window_t1

0x5e02,	// (0x000711fa) popup_vitu2_query_window_t2_ParamLimits

0x5e02,	// (0x000711fa) popup_vitu2_query_window_t2

0x5e14,	// (0x0007120c) popup_vitu2_query_window_t3_ParamLimits

0x5e14,	// (0x0007120c) popup_vitu2_query_window_t3

0xb927,	// (0x00076d1f) popup_vitu2_query_window_t4_ParamLimits

0xb927,	// (0x00076d1f) popup_vitu2_query_window_t4

0xb93b,	// (0x00076d33) popup_vitu2_query_window_t5_ParamLimits

0xb93b,	// (0x00076d33) popup_vitu2_query_window_t5

0x0006,

0xf959,	// (0x0007ad51) popup_vitu2_query_window_t_ParamLimits

0xf959,	// (0x0007ad51) popup_vitu2_query_window_t

0xe974,	// (0x00079d6c) main_cset_text_pane

0xb335,	// (0x0007672d) aid_area_touch_slider_ParamLimits

0xb351,	// (0x00076749) cset_slider_pane_ParamLimits

0xb374,	// (0x0007676c) main_cset_slider_pane_g1_ParamLimits

0xb389,	// (0x00076781) main_cset_slider_pane_g2_ParamLimits

0xe995,	// (0x00079d8d) main_cset_slider_pane_g3_ParamLimits

0xe995,	// (0x00079d8d) main_cset_slider_pane_g3

0xb39e,	// (0x00076796) main_cset_slider_pane_g4_ParamLimits

0xb39e,	// (0x00076796) main_cset_slider_pane_g4

0xb3ad,	// (0x000767a5) main_cset_slider_pane_g5_ParamLimits

0xb3ad,	// (0x000767a5) main_cset_slider_pane_g5

0xb3bb,	// (0x000767b3) main_cset_slider_pane_g6_ParamLimits

0xb3bb,	// (0x000767b3) main_cset_slider_pane_g6

0xf8b6,	// (0x0007acae) main_cset_slider_pane_g_ParamLimits

0xe9c5,	// (0x00079dbd) main_cset_slider_pane_t1_ParamLimits

0xb44f,	// (0x00076847) main_cset_slider_pane_t2_ParamLimits

0xb469,	// (0x00076861) main_cset_slider_pane_t3_ParamLimits

0xb483,	// (0x0007687b) main_cset_slider_pane_t4_ParamLimits

0xb4a1,	// (0x00076899) main_cset_slider_pane_t5_ParamLimits

0xb4bf,	// (0x000768b7) main_cset_slider_pane_t6_ParamLimits

0xb4d6,	// (0x000768ce) main_cset_slider_pane_t7_ParamLimits

0xb504,	// (0x000768fc) main_cset_slider_pane_t8_ParamLimits

0xb504,	// (0x000768fc) main_cset_slider_pane_t8

0xb52c,	// (0x00076924) main_cset_slider_pane_t9_ParamLimits

0xb52c,	// (0x00076924) main_cset_slider_pane_t9

0xb554,	// (0x0007694c) main_cset_slider_pane_t10_ParamLimits

0xb554,	// (0x0007694c) main_cset_slider_pane_t10

0xb57c,	// (0x00076974) main_cset_slider_pane_t11_ParamLimits

0xb57c,	// (0x00076974) main_cset_slider_pane_t11

0xb5a6,	// (0x0007699e) main_cset_slider_pane_t12_ParamLimits

0xb5a6,	// (0x0007699e) main_cset_slider_pane_t12

0xb5c5,	// (0x000769bd) main_cset_slider_pane_t13_ParamLimits

0xb5c5,	// (0x000769bd) main_cset_slider_pane_t13

0xf8db,	// (0x0007acd3) main_cset_slider_pane_t_ParamLimits

0x163d,	// (0x0006ca35) bg_popup_sub_pane_cp011

0xeb02,	// (0x00079efa) main_cset_text_pane_g1

0xeb0a,	// (0x00079f02) main_cset_text_pane_t1

0xeb18,	// (0x00079f10) main_cset_text_pane_t2

0xeb26,	// (0x00079f1e) main_cset_text_pane_t3

0xeb34,	// (0x00079f2c) main_cset_text_pane_t4

0xeb42,	// (0x00079f3a) main_cset_text_pane_t5

0xeb50,	// (0x00079f48) main_cset_text_pane_t6

0xeb5e,	// (0x00079f56) main_cset_text_pane_t7

0x0006,

0xf968,	// (0x0007ad60) main_cset_text_pane_t

0x163d,	// (0x0006ca35) main_cam4_burst_pane

0x163d,	// (0x0006ca35) main_cam5_pane

0xe936,	// (0x00079d2e) bg_button_pane_cp019

0xe93f,	// (0x00079d37) bg_button_pane_cp020

0xe9a1,	// (0x00079d99) main_cset_slider_pane_g7_ParamLimits

0xe9a1,	// (0x00079d99) main_cset_slider_pane_g7

0xe9ad,	// (0x00079da5) main_cset_slider_pane_g8_ParamLimits

0xe9ad,	// (0x00079da5) main_cset_slider_pane_g8

0xb3cf,	// (0x000767c7) main_cset_slider_pane_g9_ParamLimits

0xb3cf,	// (0x000767c7) main_cset_slider_pane_g9

0xb3db,	// (0x000767d3) main_cset_slider_pane_g10_ParamLimits

0xb3db,	// (0x000767d3) main_cset_slider_pane_g10

0xb3e7,	// (0x000767df) main_cset_slider_pane_g11_ParamLimits

0xb3e7,	// (0x000767df) main_cset_slider_pane_g11

0xb3f3,	// (0x000767eb) main_cset_slider_pane_g12_ParamLimits

0xb3f3,	// (0x000767eb) main_cset_slider_pane_g12

0xb3ff,	// (0x000767f7) main_cset_slider_pane_g13_ParamLimits

0xb3ff,	// (0x000767f7) main_cset_slider_pane_g13

0xb40d,	// (0x00076805) main_cset_slider_pane_g14_ParamLimits

0xb40d,	// (0x00076805) main_cset_slider_pane_g14

0xb41b,	// (0x00076813) main_cset_slider_pane_g15_ParamLimits

0xb41b,	// (0x00076813) main_cset_slider_pane_g15

0xe9ed,	// (0x00079de5) main_cset_slider_pane_t14_ParamLimits

0xe9ed,	// (0x00079de5) main_cset_slider_pane_t14

0xea26,	// (0x00079e1e) main_cset_slider_pane_t15_ParamLimits

0xea26,	// (0x00079e1e) main_cset_slider_pane_t15

0xb94f,	// (0x00076d47) aid_cam4_burst_size_cell_ParamLimits

0xb94f,	// (0x00076d47) aid_cam4_burst_size_cell

0xb96b,	// (0x00076d63) grid_cam4_burst_pane_ParamLimits

0xb96b,	// (0x00076d63) grid_cam4_burst_pane

0xb99b,	// (0x00076d93) linegrid_cam4_burst_pane_ParamLimits

0xb99b,	// (0x00076d93) linegrid_cam4_burst_pane

0xb9bb,	// (0x00076db3) scroll_pane_cp30_ParamLimits

0xb9bb,	// (0x00076db3) scroll_pane_cp30

0xb9c7,	// (0x00076dbf) cell_cam4_burst_pane_ParamLimits

0xb9c7,	// (0x00076dbf) cell_cam4_burst_pane

0xeb6c,	// (0x00079f64) linegrid_cam4_burst_pane_g1_ParamLimits

0xeb6c,	// (0x00079f64) linegrid_cam4_burst_pane_g1

0xba03,	// (0x00076dfb) linegrid_cam4_burst_pane_g2_ParamLimits

0xba03,	// (0x00076dfb) linegrid_cam4_burst_pane_g2

0xeb79,	// (0x00079f71) linegrid_cam4_burst_pane_g3_ParamLimits

0xeb79,	// (0x00079f71) linegrid_cam4_burst_pane_g3

0x0002,

0xf977,	// (0x0007ad6f) linegrid_cam4_burst_pane_g_ParamLimits

0xf977,	// (0x0007ad6f) linegrid_cam4_burst_pane_g

0xba14,	// (0x00076e0c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xba14,	// (0x00076e0c) linegrid_cam4_burst_pane_g3_copy1

0xeb86,	// (0x00079f7e) linegrid_cam4_burst_pane_g4_ParamLimits

0xeb86,	// (0x00079f7e) linegrid_cam4_burst_pane_g4

0xba2e,	// (0x00076e26) linegrid_cam4_burst_pane_g5_ParamLimits

0xba2e,	// (0x00076e26) linegrid_cam4_burst_pane_g5

0xba3f,	// (0x00076e37) linegrid_cam4_burst_pane_g6_ParamLimits

0xba3f,	// (0x00076e37) linegrid_cam4_burst_pane_g6

0xeb93,	// (0x00079f8b) linegrid_cam4_burst_pane_g7_ParamLimits

0xeb93,	// (0x00079f8b) linegrid_cam4_burst_pane_g7

0xba50,	// (0x00076e48) cell_cam4_burst_pane_g1

0xebac,	// (0x00079fa4) main_cam5_pane_t1_ParamLimits

0xebac,	// (0x00079fa4) main_cam5_pane_t1

0xebbe,	// (0x00079fb6) main_cam5_pane_t2_ParamLimits

0xebbe,	// (0x00079fb6) main_cam5_pane_t2

0xebd0,	// (0x00079fc8) main_cam5_pane_t3_ParamLimits

0xebd0,	// (0x00079fc8) main_cam5_pane_t3

0xebe2,	// (0x00079fda) main_cam5_pane_t4_ParamLimits

0xebe2,	// (0x00079fda) main_cam5_pane_t4

0xebfa,	// (0x00079ff2) main_cam5_pane_t5_ParamLimits

0xebfa,	// (0x00079ff2) main_cam5_pane_t5

0xec0e,	// (0x0007a006) main_cam5_pane_t6_ParamLimits

0xec0e,	// (0x0007a006) main_cam5_pane_t6

0xec22,	// (0x0007a01a) main_cam5_pane_t7_ParamLimits

0xec22,	// (0x0007a01a) main_cam5_pane_t7

0xec34,	// (0x0007a02c) main_cam5_pane_t8_ParamLimits

0xec34,	// (0x0007a02c) main_cam5_pane_t8

0xec50,	// (0x0007a048) main_cam5_pane_t9_ParamLimits

0xec50,	// (0x0007a048) main_cam5_pane_t9

0xec62,	// (0x0007a05a) main_cam5_pane_t10_ParamLimits

0xec62,	// (0x0007a05a) main_cam5_pane_t10

0xec74,	// (0x0007a06c) main_cam5_pane_t11_ParamLimits

0xec74,	// (0x0007a06c) main_cam5_pane_t11

0xec86,	// (0x0007a07e) main_cam5_pane_t12_ParamLimits

0xec86,	// (0x0007a07e) main_cam5_pane_t12

0xec9b,	// (0x0007a093) main_cam5_pane_t13_ParamLimits

0xec9b,	// (0x0007a093) main_cam5_pane_t13

0x000c,

0xf983,	// (0x0007ad7b) main_cam5_pane_t_ParamLimits

0xf983,	// (0x0007ad7b) main_cam5_pane_t

0x6a53,	// (0x00071e4b) popup_scut_keymap_window_ParamLimits

0x6a53,	// (0x00071e4b) popup_scut_keymap_window

0xba63,	// (0x00076e5b) aid_size_cell_brow_shortcut

0x1f9a,	// (0x0006d392) bg_popup_window_pane_cp010

0xba6f,	// (0x00076e67) grid_scut_pane

0xba7b,	// (0x00076e73) cell_scut_pane_ParamLimits

0xba7b,	// (0x00076e73) cell_scut_pane

0xba92,	// (0x00076e8a) cell_scut_pane_g1

0xecb8,	// (0x0007a0b0) cell_scut_pane_t1

0xecc7,	// (0x0007a0bf) cell_scut_pane_t2

0xba9b,	// (0x00076e93) cell_scut_pane_t3

0x0002,

0xf99e,	// (0x0007ad96) cell_scut_pane_t

0x9be9,	// (0x00074fe1) main_mup3_pane_g8_ParamLimits

0x9be9,	// (0x00074fe1) main_mup3_pane_g8

0xaeaa,	// (0x000762a2) area_vitu2_query_pane_ParamLimits

0xaeaa,	// (0x000762a2) area_vitu2_query_pane

0x5daa,	// (0x000711a2) input_focus_pane_cp08

0xecd6,	// (0x0007a0ce) area_vitu2_query_pane_g1

0x5e92,	// (0x0007128a) area_vitu2_query_pane_g2

0x0001,

0xf9a5,	// (0x0007ad9d) area_vitu2_query_pane_g

0xbaa9,	// (0x00076ea1) area_vitu2_query_pane_t1_ParamLimits

0xbaa9,	// (0x00076ea1) area_vitu2_query_pane_t1

0xbabd,	// (0x00076eb5) area_vitu2_query_pane_t2_ParamLimits

0xbabd,	// (0x00076eb5) area_vitu2_query_pane_t2

0x5ea3,	// (0x0007129b) area_vitu2_query_pane_t3_ParamLimits

0x5ea3,	// (0x0007129b) area_vitu2_query_pane_t3

0x5ecb,	// (0x000712c3) area_vitu2_query_pane_t4_ParamLimits

0x5ecb,	// (0x000712c3) area_vitu2_query_pane_t4

0x5ef3,	// (0x000712eb) area_vitu2_query_pane_t5_ParamLimits

0x5ef3,	// (0x000712eb) area_vitu2_query_pane_t5

0x5f1b,	// (0x00071313) area_vitu2_query_pane_t6_ParamLimits

0x5f1b,	// (0x00071313) area_vitu2_query_pane_t6

0x0006,

0xf9aa,	// (0x0007ada2) area_vitu2_query_pane_t_ParamLimits

0xf9aa,	// (0x0007ada2) area_vitu2_query_pane_t

0xb8dc,	// (0x00076cd4) bg_button_pane_cp018

0xbad1,	// (0x00076ec9) bg_button_pane_cp021

0x5f67,	// (0x0007135f) bg_button_pane_cp022

0x5f8a,	// (0x00071382) input_focus_pane_cp09

0x2985,	// (0x0006dd7d) aid_size_touch_mv_arrow_left

0x29b0,	// (0x0006dda8) aid_size_touch_mv_arrow_right

0xb433,	// (0x0007682b) main_cset_slider_pane_g16_ParamLimits

0xb433,	// (0x0007682b) main_cset_slider_pane_g16

0xb441,	// (0x00076839) main_cset_slider_pane_g17_ParamLimits

0xb441,	// (0x00076839) main_cset_slider_pane_g17

0xba50,	// (0x00076e48) cell_cam4_burst_pane_g1_ParamLimits

0x163d,	// (0x0006ca35) compa_mode_pane

0xb649,	// (0x00076a41) popup_vtel_slider_window_g3_ParamLimits

0xb649,	// (0x00076a41) popup_vtel_slider_window_g3

0xb65d,	// (0x00076a55) popup_vtel_slider_window_g4_ParamLimits

0xb65d,	// (0x00076a55) popup_vtel_slider_window_g4

0xb671,	// (0x00076a69) popup_vtel_slider_window_t1_ParamLimits

0xb671,	// (0x00076a69) popup_vtel_slider_window_t1

0x163d,	// (0x0006ca35) main_cl_pane

0x94ce,	// (0x000748c6) popup_imed_adjust2_window_ParamLimits

0x2e9f,	// (0x0006e297) bg_tb_trans_pane_cp05_ParamLimits

0x4af4,	// (0x0006feec) popup_imed_adjust2_window_g1_ParamLimits

0x4b03,	// (0x0006fefb) popup_imed_adjust2_window_g2_ParamLimits

0x4b03,	// (0x0006fefb) popup_imed_adjust2_window_g2

0x4b0f,	// (0x0006ff07) popup_imed_adjust2_window_g3_ParamLimits

0x4b0f,	// (0x0006ff07) popup_imed_adjust2_window_g3

0x0002,

0xf72a,	// (0x0007ab22) popup_imed_adjust2_window_g_ParamLimits

0xf72a,	// (0x0007ab22) popup_imed_adjust2_window_g

0x4b1b,	// (0x0006ff13) popup_imed_adjust2_window_t1_ParamLimits

0x4b33,	// (0x0006ff2b) slider_imed_adjust_pane_ParamLimits

0x4b47,	// (0x0006ff3f) slider_imed_adjust_pane_g1_ParamLimits

0x4b57,	// (0x0006ff4f) slider_imed_adjust_pane_g2_ParamLimits

0x4b67,	// (0x0006ff5f) slider_imed_adjust_pane_g3_ParamLimits

0x4b78,	// (0x0006ff70) slider_imed_adjust_pane_g4_ParamLimits

0xf731,	// (0x0007ab29) slider_imed_adjust_pane_g_ParamLimits

0xabf9,	// (0x00075ff1) aid_touch_area_cam4_ParamLimits

0xabf9,	// (0x00075ff1) aid_touch_area_cam4

0xac09,	// (0x00076001) battery_pane_cp01

0xac90,	// (0x00076088) main_camera4_pane_g6_ParamLimits

0xac90,	// (0x00076088) main_camera4_pane_g6

0xacae,	// (0x000760a6) main_camera4_pane_t2_ParamLimits

0xacae,	// (0x000760a6) main_camera4_pane_t2

0x0001,

0xf829,	// (0x0007ac21) main_camera4_pane_t_ParamLimits

0xf829,	// (0x0007ac21) main_camera4_pane_t

0xad2f,	// (0x00076127) aid_touch_area_vid4_ParamLimits

0xad2f,	// (0x00076127) aid_touch_area_vid4

0xad6f,	// (0x00076167) main_video4_pane_g5_ParamLimits

0xad6f,	// (0x00076167) main_video4_pane_g5

0xad93,	// (0x0007618b) vid4_progress_pane_ParamLimits

0xad93,	// (0x0007618b) vid4_progress_pane

0xe9b9,	// (0x00079db1) main_cset_slider_pane_g18_ParamLimits

0xe9b9,	// (0x00079db1) main_cset_slider_pane_g18

0xeba0,	// (0x00079f98) cell_cam4_burst_pane_g2_ParamLimits

0xeba0,	// (0x00079f98) cell_cam4_burst_pane_g2

0x0001,

0xf97e,	// (0x0007ad76) cell_cam4_burst_pane_g_ParamLimits

0xf97e,	// (0x0007ad76) cell_cam4_burst_pane_g

0xbadd,	// (0x00076ed5) bg_cl_pane_ParamLimits

0xbadd,	// (0x00076ed5) bg_cl_pane

0xbae9,	// (0x00076ee1) cl_header_pane_ParamLimits

0xbae9,	// (0x00076ee1) cl_header_pane

0xbaf5,	// (0x00076eed) cl_listscroll_pane_ParamLimits

0xbaf5,	// (0x00076eed) cl_listscroll_pane

0xece2,	// (0x0007a0da) bg_cl_pane_g1

0xecea,	// (0x0007a0e2) bg_cl_pane_g2

0xecf2,	// (0x0007a0ea) bg_cl_pane_g3

0xecfa,	// (0x0007a0f2) bg_cl_pane_g4

0xed02,	// (0x0007a0fa) bg_cl_pane_g5

0xed0a,	// (0x0007a102) bg_cl_pane_g6

0xed12,	// (0x0007a10a) bg_cl_pane_g7

0xed1a,	// (0x0007a112) bg_cl_pane_g8

0xed22,	// (0x0007a11a) bg_cl_pane_g9

0x0008,

0xf9b9,	// (0x0007adb1) bg_cl_pane_g

0xbb01,	// (0x00076ef9) aid_height_cl_leading_ParamLimits

0xbb01,	// (0x00076ef9) aid_height_cl_leading

0xbb0d,	// (0x00076f05) aid_height_cl_text_ParamLimits

0xbb0d,	// (0x00076f05) aid_height_cl_text

0x1d3e,	// (0x0006d136) bg_cl_header_pane_ParamLimits

0x1d3e,	// (0x0006d136) bg_cl_header_pane

0xbb25,	// (0x00076f1d) cl_header_pane_g1_ParamLimits

0xbb25,	// (0x00076f1d) cl_header_pane_g1

0xbb32,	// (0x00076f2a) cl_header_pane_t1_ParamLimits

0xbb32,	// (0x00076f2a) cl_header_pane_t1

0xed2a,	// (0x0007a122) cl_list_pane

0xe98c,	// (0x00079d84) hc_scroll_pane_cp01

0x2193,	// (0x0006d58b) bg_cl_header_pane_g1

0xe84c,	// (0x00079c44) bg_cl_header_pane_g2

0x21b3,	// (0x0006d5ab) bg_cl_header_pane_g3

0xe85c,	// (0x00079c54) bg_cl_header_pane_g4

0xe854,	// (0x00079c4c) bg_cl_header_pane_g5

0xeabb,	// (0x00079eb3) bg_cl_header_pane_g6

0xe874,	// (0x00079c6c) bg_cl_header_pane_g7

0xe87c,	// (0x00079c74) bg_cl_header_pane_g8

0xe86c,	// (0x00079c64) bg_cl_header_pane_g9

0x0008,

0xf9cc,	// (0x0007adc4) bg_cl_header_pane_g

0xbb44,	// (0x00076f3c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xbb44,	// (0x00076f3c) hc_cl_list_double_graphic_heading_pane

0xbb58,	// (0x00076f50) hc_cl_list_single_graphic_pane_ParamLimits

0xbb58,	// (0x00076f50) hc_cl_list_single_graphic_pane

0xbb72,	// (0x00076f6a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xbb72,	// (0x00076f6a) hc_cl_list_single_graphic_pane_g1

0xbb7e,	// (0x00076f76) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xbb7e,	// (0x00076f76) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9df,	// (0x0007add7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9df,	// (0x0007add7) hc_cl_list_single_graphic_pane_g

0xbb92,	// (0x00076f8a) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xbb92,	// (0x00076f8a) hc_cl_list_single_graphic_pane_t1

0xbb72,	// (0x00076f6a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xbb72,	// (0x00076f6a) hc_cl_list_double_graphic_heading_pane_g1

0xbba7,	// (0x00076f9f) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xbba7,	// (0x00076f9f) hc_cl_list_double_graphic_heading_pane_g2

0xbbbb,	// (0x00076fb3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xbbbb,	// (0x00076fb3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9e4,	// (0x0007addc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9e4,	// (0x0007addc) hc_cl_list_double_graphic_heading_pane_g

0xbbcf,	// (0x00076fc7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xbbcf,	// (0x00076fc7) hc_cl_list_double_graphic_heading_pane_t1

0xbbe4,	// (0x00076fdc) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xbbe4,	// (0x00076fdc) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9eb,	// (0x0007ade3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9eb,	// (0x0007ade3) hc_cl_list_double_graphic_heading_pane_t

0xbc01,	// (0x00076ff9) vid4_progress_pane_g1

0xbc11,	// (0x00077009) vid4_progress_pane_g2

0xbc21,	// (0x00077019) vid4_progress_pane_g3

0xbc33,	// (0x0007702b) vid4_progress_pane_g4

0x0004,

0xf9f0,	// (0x0007ade8) vid4_progress_pane_g

0xbc4b,	// (0x00077043) vid4_progress_pane_t1

0xbc61,	// (0x00077059) vid4_progress_pane_t2

0x0002,

0xf9fb,	// (0x0007adf3) vid4_progress_pane_t

0xbc8c,	// (0x00077084) wait_bar_pane_cp07

0x4386,	// (0x0006f77e) blid_firmament_pane_ParamLimits

0x43c9,	// (0x0006f7c1) popup_blid_sat_info2_window_g1

0x43ed,	// (0x0006f7e5) popup_blid_sat_info2_window_t3

0x43fb,	// (0x0006f7f3) popup_blid_sat_info2_window_t4

0x4409,	// (0x0006f801) popup_blid_sat_info2_window_t5

0x4417,	// (0x0006f80f) popup_blid_sat_info2_window_t6

0x4427,	// (0x0006f81f) popup_blid_sat_info2_window_t7

0x4435,	// (0x0006f82d) popup_blid_sat_info2_window_t8

0x4443,	// (0x0006f83b) popup_blid_sat_info2_window_t9

0x4451,	// (0x0006f849) popup_blid_sat_info2_window_t10

0x4534,	// (0x0006f92c) aid_firma_cardinal_ParamLimits

0x4548,	// (0x0006f940) blid_firmament_pane_t1_ParamLimits

0x455f,	// (0x0006f957) blid_firmament_pane_t2_ParamLimits

0x4576,	// (0x0006f96e) blid_firmament_pane_t3_ParamLimits

0x458d,	// (0x0006f985) blid_firmament_pane_t4_ParamLimits

0xf623,	// (0x0007aa1b) blid_firmament_pane_t_ParamLimits

0x45a4,	// (0x0006f99c) blid_sat_info_pane_ParamLimits

0x1ce5,	// (0x0006d0dd) main_cam_set_pane_ParamLimits

0xa2b8,	// (0x000756b0) aid_size_cell_colour_35_ParamLimits

0xa2d2,	// (0x000756ca) aid_size_cell_colour_112_ParamLimits

0xa2e9,	// (0x000756e1) aid_size_cell_effect_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_tb_trans_pane_cp02_ParamLimits

0x24ab,	// (0x0006d8a3) heading_imed_pane_ParamLimits

0xa303,	// (0x000756fb) listscroll_imed_pane_ParamLimits

0x3839,	// (0x0006ec31) popup_call2_audio_first_window_g5_ParamLimits

0x3839,	// (0x0006ec31) popup_call2_audio_first_window_g5

0xa8ff,	// (0x00075cf7) aid_size_touch_image3_arrow_left_ParamLimits

0xa8ff,	// (0x00075cf7) aid_size_touch_image3_arrow_left

0xa915,	// (0x00075d0d) aid_size_touch_image3_arrow_right_ParamLimits

0xa915,	// (0x00075d0d) aid_size_touch_image3_arrow_right

0xbc76,	// (0x0007706e) vid4_progress_pane_t3

0xa485,	// (0x0007587d) main_hwr_training_symbol_option_pane_ParamLimits

0xa485,	// (0x0007587d) main_hwr_training_symbol_option_pane

0x4c82,	// (0x0007007a) popup_hwr_training_preview_window_ParamLimits

0x4c82,	// (0x0007007a) popup_hwr_training_preview_window

0xa4e6,	// (0x000758de) hwr_training_navi_pane_g5_ParamLimits

0xa4e6,	// (0x000758de) hwr_training_navi_pane_g5

0xe83a,	// (0x00079c32) popup_char_count_window

0x1d3e,	// (0x0006d136) bg_popup_sub_pane_cp20_ParamLimits

0xb764,	// (0x00076b5c) list_vitu2_match_list_pane_ParamLimits

0xb770,	// (0x00076b68) vitu2_page_scroll_pane_ParamLimits

0xb770,	// (0x00076b68) vitu2_page_scroll_pane

0xed3c,	// (0x0007a134) list_single_hwr_training_symbol_option_pane_ParamLimits

0xed3c,	// (0x0007a134) list_single_hwr_training_symbol_option_pane

0xed4f,	// (0x0007a147) list_single_hwr_training_symbol_option_pane_g1

0xed57,	// (0x0007a14f) list_single_hwr_training_symbol_option_pane_t1

0xed65,	// (0x0007a15d) bg_button_pane_cp023

0xed6e,	// (0x0007a166) bg_button_pane_cp024

0xeda1,	// (0x0007a199) vitu2_page_scroll_pane_g1

0xeda9,	// (0x0007a1a1) vitu2_page_scroll_pane_g2

0x0001,

0xfa02,	// (0x0007adfa) vitu2_page_scroll_pane_g

0xedb1,	// (0x0007a1a9) vitu2_page_scroll_pane_t1

0x21cb,	// (0x0006d5c3) popup_char_count_window_g1

0xedc0,	// (0x0007a1b8) popup_char_count_window_g2

0xbca5,	// (0x0007709d) popup_char_count_window_g3

0x0002,

0xfa07,	// (0x0007adff) popup_char_count_window_g

0xedc9,	// (0x0007a1c1) popup_char_count_window_t1

0x163d,	// (0x0006ca35) main_vded2_pane

0x4ae0,	// (0x0006fed8) aid_size_cell_imed_line

0x4aea,	// (0x0006fee2) grid_imed_line_width_pane

0xadff,	// (0x000761f7) vid4_indicators_pane_g4

0xedd7,	// (0x0007a1cf) cell_imed_line_width_pane_ParamLimits

0xedd7,	// (0x0007a1cf) cell_imed_line_width_pane

0xedeb,	// (0x0007a1e3) cell_imed_line_width_pane_g1

0xedf4,	// (0x0007a1ec) cell_imed_line_width_pane_g2

0x0001,

0xfa0e,	// (0x0007ae06) cell_imed_line_width_pane_g

0xbcae,	// (0x000770a6) main_vded2_pane_g1_ParamLimits

0xbcae,	// (0x000770a6) main_vded2_pane_g1

0xbcbb,	// (0x000770b3) main_vded2_pane_g2_ParamLimits

0xbcbb,	// (0x000770b3) main_vded2_pane_g2

0x0001,

0xfa13,	// (0x0007ae0b) main_vded2_pane_g_ParamLimits

0xfa13,	// (0x0007ae0b) main_vded2_pane_g

0xbcc9,	// (0x000770c1) vded2_slider_pane_ParamLimits

0xbcc9,	// (0x000770c1) vded2_slider_pane

0xbcd6,	// (0x000770ce) aid_size_touch_vded2_end

0xbce0,	// (0x000770d8) aid_size_touch_vded2_playhead

0xedfc,	// (0x0007a1f4) aid_size_touch_vded2_start

0xee04,	// (0x0007a1fc) vded2_slider_bg_pane

0xee0d,	// (0x0007a205) vded2_slider_pane_g1

0xee16,	// (0x0007a20e) vded2_slider_pane_g2

0xbce8,	// (0x000770e0) vded2_slider_pane_g3

0x0002,

0xfa18,	// (0x0007ae10) vded2_slider_pane_g

0xee1e,	// (0x0007a216) vded2_slider_bg_pane_g1

0xee27,	// (0x0007a21f) vded2_slider_bg_pane_g2

0xee30,	// (0x0007a228) vded2_slider_bg_pane_g3

0x0002,

0xfa1f,	// (0x0007ae17) vded2_slider_bg_pane_g

0x8d8b,	// (0x00074183) aid_postcard_touch_down_pane_ParamLimits

0x8d8b,	// (0x00074183) aid_postcard_touch_down_pane

0x8d9b,	// (0x00074193) aid_postcard_touch_up_pane_ParamLimits

0x8d9b,	// (0x00074193) aid_postcard_touch_up_pane

0x163d,	// (0x0006ca35) main_blid2_pane

0x945d,	// (0x00074855) popup_blid2_search_window

0x163d,	// (0x0006ca35) blid2_gps_pane

0x163d,	// (0x0006ca35) blid2_navig_pane

0x163d,	// (0x0006ca35) blid2_search_pane

0x163d,	// (0x0006ca35) blid2_tripm_pane

0xbcf1,	// (0x000770e9) blid2_search_pane_g1_ParamLimits

0xbcf1,	// (0x000770e9) blid2_search_pane_g1

0xbd01,	// (0x000770f9) blid2_search_pane_t1_ParamLimits

0xbd01,	// (0x000770f9) blid2_search_pane_t1

0xbd13,	// (0x0007710b) aid_size_cell_blid2_gps_ParamLimits

0xbd13,	// (0x0007710b) aid_size_cell_blid2_gps

0xbd23,	// (0x0007711b) blid2_gps_pane_g1_ParamLimits

0xbd23,	// (0x0007711b) blid2_gps_pane_g1

0xbd2f,	// (0x00077127) grid_blid2_satellite_pane_ParamLimits

0xbd2f,	// (0x00077127) grid_blid2_satellite_pane

0xbd3f,	// (0x00077137) blid2_navig_pane_g1_ParamLimits

0xbd3f,	// (0x00077137) blid2_navig_pane_g1

0xbd4b,	// (0x00077143) blid2_navig_pane_t1_ParamLimits

0xbd4b,	// (0x00077143) blid2_navig_pane_t1

0xbd5d,	// (0x00077155) blid2_navig_pane_t2_ParamLimits

0xbd5d,	// (0x00077155) blid2_navig_pane_t2

0x0001,

0xfa26,	// (0x0007ae1e) blid2_navig_pane_t_ParamLimits

0xfa26,	// (0x0007ae1e) blid2_navig_pane_t

0xbd6f,	// (0x00077167) blid2_navig_ring_pane_ParamLimits

0xbd6f,	// (0x00077167) blid2_navig_ring_pane

0xbd7f,	// (0x00077177) blid2_speed_pane_ParamLimits

0xbd7f,	// (0x00077177) blid2_speed_pane

0xbd8b,	// (0x00077183) blid2_tripm_pane_g1_ParamLimits

0xbd8b,	// (0x00077183) blid2_tripm_pane_g1

0xbd9b,	// (0x00077193) blid2_tripm_pane_g2_ParamLimits

0xbd9b,	// (0x00077193) blid2_tripm_pane_g2

0xbda7,	// (0x0007719f) blid2_tripm_pane_g3_ParamLimits

0xbda7,	// (0x0007719f) blid2_tripm_pane_g3

0xbdb3,	// (0x000771ab) blid2_tripm_pane_g4_ParamLimits

0xbdb3,	// (0x000771ab) blid2_tripm_pane_g4

0xbdbf,	// (0x000771b7) blid2_tripm_pane_g5_ParamLimits

0xbdbf,	// (0x000771b7) blid2_tripm_pane_g5

0x0005,

0xfa2b,	// (0x0007ae23) blid2_tripm_pane_g_ParamLimits

0xfa2b,	// (0x0007ae23) blid2_tripm_pane_g

0xbddb,	// (0x000771d3) blid2_tripm_pane_t1_ParamLimits

0xbddb,	// (0x000771d3) blid2_tripm_pane_t1

0xbdef,	// (0x000771e7) blid2_tripm_pane_t2_ParamLimits

0xbdef,	// (0x000771e7) blid2_tripm_pane_t2

0xbe01,	// (0x000771f9) blid2_tripm_pane_t3_ParamLimits

0xbe01,	// (0x000771f9) blid2_tripm_pane_t3

0x0003,

0xfa38,	// (0x0007ae30) blid2_tripm_pane_t_ParamLimits

0xfa38,	// (0x0007ae30) blid2_tripm_pane_t

0xbe33,	// (0x0007722b) cell_blid2_satellite_pane_ParamLimits

0xbe33,	// (0x0007722b) cell_blid2_satellite_pane

0xbe4d,	// (0x00077245) cell_blid2_satellite_pane_g1

0xee39,	// (0x0007a231) cell_blid2_satellite_pane_t1

0x1d8a,	// (0x0006d182) blid2_speed_pane_g1

0xee47,	// (0x0007a23f) blid2_speed_pane_t1

0xee55,	// (0x0007a24d) blid2_speed_pane_t2

0x0001,

0xfa41,	// (0x0007ae39) blid2_speed_pane_t

0x1d8a,	// (0x0006d182) blid2_navig_ring_pane_g1

0xbe56,	// (0x0007724e) blid2_navig_ring_pane_g2

0xbe5e,	// (0x00077256) blid2_navig_ring_pane_g3

0xbe66,	// (0x0007725e) blid2_navig_ring_pane_g4

0xbe6e,	// (0x00077266) blid2_navig_ring_pane_g5

0x0004,

0xfa46,	// (0x0007ae3e) blid2_navig_ring_pane_g

0x163d,	// (0x0006ca35) bg_popup_window_pane_cp011

0xee63,	// (0x0007a25b) popup_blid2_search_window_g1

0xee6b,	// (0x0007a263) popup_blid2_search_window_t1

0xee79,	// (0x0007a271) popup_blid2_search_window_t2

0x0001,

0xfa51,	// (0x0007ae49) popup_blid2_search_window_t

0x20a2,	// (0x0006d49a) main_browser_pane_g1

0x1de8,	// (0x0006d1e0) main_browser_pane_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_button_pane_cp011_ParamLimits

0xb058,	// (0x00076450) cell_vitu2_function_pane_g1_ParamLimits

0x2e9f,	// (0x0006e297) bg_popup_sub_pane_cp22_ParamLimits

0x5daa,	// (0x000711a2) input_focus_pane_cp08_ParamLimits

0xb8f4,	// (0x00076cec) popup_vitu2_query_button_pane_ParamLimits

0xb8f4,	// (0x00076cec) popup_vitu2_query_button_pane

0x5dc5,	// (0x000711bd) popup_vitu2_query_input_button_pane

0xeaf6,	// (0x00079eee) popup_vitu2_query_window_g1_ParamLimits

0xb903,	// (0x00076cfb) popup_vitu2_query_window_g2_ParamLimits

0xf952,	// (0x0007ad4a) popup_vitu2_query_window_g_ParamLimits

0x163d,	// (0x0006ca35) bg_button_pane_cp026

0xbe76,	// (0x0007726e) popup_vitu2_query_input_button_pane_g1

0x163d,	// (0x0006ca35) bg_button_pane_cp025

0xee87,	// (0x0007a27f) popup_vitu2_query_button_pane_t1

0x98c2,	// (0x00074cba) main_mp3_pane_t6

0x98d2,	// (0x00074cca) popup_slider_window_cp01

0xace4,	// (0x000760dc) cam4_battery_pane

0xadbe,	// (0x000761b6) cam4_battery_pane_cp02

0xbbf9,	// (0x00076ff1) cam4_battery_pane_cp01

0xbbf9,	// (0x00076ff1) cam4_battery_pane_cp03

0x1d8a,	// (0x0006d182) cam4_battery_pane_g1

0xee95,	// (0x0007a28d) cam4_battery_pane_g2

0x0001,

0xfa56,	// (0x0007ae4e) cam4_battery_pane_g

0x445f,	// (0x0006f857) popup_blid_sat_info2_window_t11

0x2985,	// (0x0006dd7d) aid_size_touch_mv_arrow_left_ParamLimits

0x29b0,	// (0x0006dda8) aid_size_touch_mv_arrow_right_ParamLimits

0x2a0e,	// (0x0006de06) navi_pane_g1_ParamLimits

0x2a1a,	// (0x0006de12) navi_pane_g2_ParamLimits

0x2a48,	// (0x0006de40) navi_pane_g3_ParamLimits

0xf334,	// (0x0007a72c) navi_pane_g_ParamLimits

0x8a43,	// (0x00073e3b) navi_pane_mv_t1_ParamLimits

0xa30f,	// (0x00075707) grid_imed_effect_pane_ParamLimits

0x74f6,	// (0x000728ee) aid_placing_vt_slider_lsc

0x1ff1,	// (0x0006d3e9) aid_placing_vt_slider_prt

0x1ce5,	// (0x0006d0dd) bg_tb_trans_pane_cp01_ParamLimits

0x471f,	// (0x0006fb17) popup_image_details_window_g1_ParamLimits

0x4732,	// (0x0006fb2a) popup_image_details_window_g2_ParamLimits

0x4747,	// (0x0006fb3f) popup_image_details_window_g3_ParamLimits

0x4747,	// (0x0006fb3f) popup_image_details_window_g3

0xf663,	// (0x0007aa5b) popup_image_details_window_g_ParamLimits

0x475b,	// (0x0006fb53) popup_image_details_window_t1_ParamLimits

0x476d,	// (0x0006fb65) popup_image_details_window_t2_ParamLimits

0x4786,	// (0x0006fb7e) popup_image_details_window_t3_ParamLimits

0x479a,	// (0x0006fb92) popup_image_details_window_t4_ParamLimits

0x47b5,	// (0x0006fbad) popup_image_details_window_t5_ParamLimits

0xf66a,	// (0x0007aa62) popup_image_details_window_t_ParamLimits

0xbb19,	// (0x00076f11) cl_header_name_pane_ParamLimits

0xbb19,	// (0x00076f11) cl_header_name_pane

0xbe7e,	// (0x00077276) cl_header_name_pane_t1_ParamLimits

0xbe7e,	// (0x00077276) cl_header_name_pane_t1

0xbe95,	// (0x0007728d) cl_header_name_pane_t2_ParamLimits

0xbe95,	// (0x0007728d) cl_header_name_pane_t2

0xbebf,	// (0x000772b7) cl_header_name_pane_t3_ParamLimits

0xbebf,	// (0x000772b7) cl_header_name_pane_t3

0x0002,

0xfa5b,	// (0x0007ae53) cl_header_name_pane_t_ParamLimits

0xfa5b,	// (0x0007ae53) cl_header_name_pane_t

0x2d5f,	// (0x0006e157) navi_pane_mv_g2_ParamLimits

0xe822,	// (0x00079c1a) field_vitu2_entry_pane_g1_ParamLimits

0xe82e,	// (0x00079c26) field_vitu2_entry_pane_g2_ParamLimits

0x2e7d,	// (0x0006e275) field_vitu2_entry_pane_g3_ParamLimits

0x2e7d,	// (0x0006e275) field_vitu2_entry_pane_g3

0xf85b,	// (0x0007ac53) field_vitu2_entry_pane_g_ParamLimits

0xafe6,	// (0x000763de) cell_vitu2_itu_pane_g1_ParamLimits

0xaffe,	// (0x000763f6) cell_vitu2_itu_pane_g2_ParamLimits

0xaffe,	// (0x000763f6) cell_vitu2_itu_pane_g2

0x0001,

0xf867,	// (0x0007ac5f) cell_vitu2_itu_pane_g_ParamLimits

0xf867,	// (0x0007ac5f) cell_vitu2_itu_pane_g

0x1ce5,	// (0x0006d0dd) bg_vkb2_func_pane_cp05_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_vkb2_func_pane_cp05

0x1ce5,	// (0x0006d0dd) bg_vkb2_func_pane_cp03

0x1ce5,	// (0x0006d0dd) bg_vkb2_func_pane_cp04

0x1ce5,	// (0x0006d0dd) bg_vkb2_func_pane_cp10_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_vkb2_func_pane_cp10

0x5f78,	// (0x00071370) bg_vkb2_func_pane_cp08

0xb8dc,	// (0x00076cd4) bg_vkb2_func_pane_cp06

0xbad1,	// (0x00076ec9) bg_vkb2_func_pane_cp07

0xed77,	// (0x0007a16f) bg_vkb2_func_pane_cp11_ParamLimits

0xed77,	// (0x0007a16f) bg_vkb2_func_pane_cp11

0xed8c,	// (0x0007a184) bg_vkb2_func_pane_cp12_ParamLimits

0xed8c,	// (0x0007a184) bg_vkb2_func_pane_cp12

0x163d,	// (0x0006ca35) bg_vkb2_func_pane_cp09

0xe84c,	// (0x00079c44) bg_vkb2_func_pane_g1

0x21b3,	// (0x0006d5ab) bg_vkb2_func_pane_g2

0xe854,	// (0x00079c4c) bg_vkb2_func_pane_g3

0xe85c,	// (0x00079c54) bg_vkb2_func_pane_g4

0xeabb,	// (0x00079eb3) bg_vkb2_func_pane_g5

0xe874,	// (0x00079c6c) bg_vkb2_func_pane_g6

0xe87c,	// (0x00079c74) bg_vkb2_func_pane_g7

0xe86c,	// (0x00079c64) bg_vkb2_func_pane_g8

0x2193,	// (0x0006d58b) bg_vkb2_func_pane_g9

0x0008,

0xfa62,	// (0x0007ae5a) bg_vkb2_func_pane_g

0xbdcd,	// (0x000771c5) blid2_tripm_pane_g6_ParamLimits

0xbdcd,	// (0x000771c5) blid2_tripm_pane_g6

0xe762,	// (0x00079b5a) mp4_progress_pane_g1

0xbe27,	// (0x0007721f) blid2_tripm_values_pane_ParamLimits

0xbe27,	// (0x0007721f) blid2_tripm_values_pane

0xbee4,	// (0x000772dc) blid2_tripm_values_pane_t1

0xbef2,	// (0x000772ea) blid2_tripm_values_pane_t2

0xbf00,	// (0x000772f8) blid2_tripm_values_pane_t3

0xbf0e,	// (0x00077306) blid2_tripm_values_pane_t4

0xbf1c,	// (0x00077314) blid2_tripm_values_pane_t5

0xbf2a,	// (0x00077322) blid2_tripm_values_pane_t6

0xbf38,	// (0x00077330) blid2_tripm_values_pane_t7

0xbf46,	// (0x0007733e) blid2_tripm_values_pane_t8

0xbf54,	// (0x0007734c) blid2_tripm_values_pane_t9

0x0008,

0xfa75,	// (0x0007ae6d) blid2_tripm_values_pane_t

0x7536,	// (0x0007292e) call_video_pane_t1_ParamLimits

0x7557,	// (0x0007294f) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x0007a5d5) call_video_pane_t_ParamLimits

0x5b8c,	// (0x00070f84) msg_header_pane_g1_ParamLimits

0x2f73,	// (0x0006e36b) msg_header_pane_g2_ParamLimits

0x2f73,	// (0x0006e36b) msg_header_pane_g2

0x0001,

0xf3d2,	// (0x0007a7ca) msg_header_pane_g_ParamLimits

0xf3d2,	// (0x0007a7ca) msg_header_pane_g

0x1de8,	// (0x0006d1e0) main_clock2_pane_ParamLimits

0xa089,	// (0x00075481) grid_clock2_toolbar_pane_ParamLimits

0xa089,	// (0x00075481) grid_clock2_toolbar_pane

0xa089,	// (0x00075481) listscroll_clock2_pane_ParamLimits

0xa089,	// (0x00075481) listscroll_clock2_pane

0xa139,	// (0x00075531) main_clock2_pane_t3_ParamLimits

0xa139,	// (0x00075531) main_clock2_pane_t3

0xa14b,	// (0x00075543) main_clock2_pane_t4_ParamLimits

0xa14b,	// (0x00075543) main_clock2_pane_t4

0xee9f,	// (0x0007a297) cell_clock2_toolbar_pane

0xeea7,	// (0x0007a29f) cell_clock2_toolbar_pane_cp01

0xeea7,	// (0x0007a29f) cell_clock2_toolbar_pane_cp02

0xeeaf,	// (0x0007a2a7) cell_clock2_toolbar_pane_cp03

0xeeb7,	// (0x0007a2af) list_clock2_pane

0x290a,	// (0x0006dd02) scroll_pane_cp10

0xeebf,	// (0x0007a2b7) list_single_clock2_pane_ParamLimits

0xeebf,	// (0x0007a2b7) list_single_clock2_pane

0x1f9a,	// (0x0006d392) list_highlight_pane_cp08

0xeecc,	// (0x0007a2c4) list_single_clock2_pane_t1

0xeeda,	// (0x0007a2d2) list_single_clock2_pane_t2

0x0001,

0xfa88,	// (0x0007ae80) list_single_clock2_pane_t

0x163d,	// (0x0006ca35) bg_button_pane_cp10

0xeee8,	// (0x0007a2e0) cell_clock2_toolbar_pane_g1

0x8ced,	// (0x000740e5) aid_main_viewer_pane_g1_ParamLimits

0x8ced,	// (0x000740e5) aid_main_viewer_pane_g1

0x8cf9,	// (0x000740f1) aid_main_viewer_pane_g2_ParamLimits

0x8cf9,	// (0x000740f1) aid_main_viewer_pane_g2

0x8d05,	// (0x000740fd) aid_main_viewer_pane_g3_ParamLimits

0x8d05,	// (0x000740fd) aid_main_viewer_pane_g3

0x8d16,	// (0x0007410e) aid_main_viewer_pane_g4_ParamLimits

0x8d16,	// (0x0007410e) aid_main_viewer_pane_g4

0x0003,

0xf3e3,	// (0x0007a7db) aid_main_viewer_pane_g_ParamLimits

0xf3e3,	// (0x0007a7db) aid_main_viewer_pane_g

0x9435,	// (0x0007482d) main_calc_pane_ParamLimits

0x9442,	// (0x0007483a) main_dialer2_pane_ParamLimits

0x163d,	// (0x0006ca35) main_cam6_pane

0x163d,	// (0x0006ca35) main_vid6_pane

0xa095,	// (0x0007548d) listscroll_gen_pane_cp06_ParamLimits

0xa095,	// (0x0007548d) listscroll_gen_pane_cp06

0xa15d,	// (0x00075555) main_clock2_pane_t5_ParamLimits

0xa15d,	// (0x00075555) main_clock2_pane_t5

0xa1aa,	// (0x000755a2) aid_call2_pane_cp10_ParamLimits

0xa1bc,	// (0x000755b4) aid_call_pane_cp10_ParamLimits

0x2979,	// (0x0006dd71) popup_clock_analogue_window_cp10_g1_ParamLimits

0x2979,	// (0x0006dd71) popup_clock_analogue_window_cp10_g2_ParamLimits

0xa1ce,	// (0x000755c6) popup_clock_analogue_window_cp10_g3_ParamLimits

0xa1ce,	// (0x000755c6) popup_clock_analogue_window_cp10_g4_ParamLimits

0x2979,	// (0x0006dd71) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf71f,	// (0x0007ab17) popup_clock_analogue_window_cp10_g_ParamLimits

0xa1e4,	// (0x000755dc) popup_clock_analogue_window_cp10_t1_ParamLimits

0xe7d3,	// (0x00079bcb) cell_dialer2_keypad_pane_g2_ParamLimits

0xe7d3,	// (0x00079bcb) cell_dialer2_keypad_pane_g2

0x0001,

0xf7fa,	// (0x0007abf2) cell_dialer2_keypad_pane_g_ParamLimits

0xf7fa,	// (0x0007abf2) cell_dialer2_keypad_pane_g

0x1d94,	// (0x0006d18c) cell_dialer2_keypad_pane_t1

0xb322,	// (0x0007671a) main_cset_text2_pane_ParamLimits

0xb322,	// (0x0007671a) main_cset_text2_pane

0xecd6,	// (0x0007a0ce) area_vitu2_query_pane_g1_ParamLimits

0x5e92,	// (0x0007128a) area_vitu2_query_pane_g2_ParamLimits

0xf9a5,	// (0x0007ad9d) area_vitu2_query_pane_g_ParamLimits

0x5f43,	// (0x0007133b) area_vitu2_query_pane_t7_ParamLimits

0x5f43,	// (0x0007133b) area_vitu2_query_pane_t7

0xb8dc,	// (0x00076cd4) bg_button_pane_cp018_ParamLimits

0xbad1,	// (0x00076ec9) bg_button_pane_cp021_ParamLimits

0x5f67,	// (0x0007135f) bg_button_pane_cp022_ParamLimits

0x5f78,	// (0x00071370) bg_vkb2_func_pane_cp08_ParamLimits

0xb8dc,	// (0x00076cd4) bg_vkb2_func_pane_cp06_ParamLimits

0xbad1,	// (0x00076ec9) bg_vkb2_func_pane_cp07_ParamLimits

0x5f8a,	// (0x00071382) input_focus_pane_cp09_ParamLimits

0xbf62,	// (0x0007735a) cam6_autofocus_pane_ParamLimits

0xbf62,	// (0x0007735a) cam6_autofocus_pane

0xbf7e,	// (0x00077376) cam6_image_uncrop_pane_ParamLimits

0xbf7e,	// (0x00077376) cam6_image_uncrop_pane

0xbfb7,	// (0x000773af) cam6_indi_pane_ParamLimits

0xbfb7,	// (0x000773af) cam6_indi_pane

0xbfd1,	// (0x000773c9) cam6_mode_pane_ParamLimits

0xbfd1,	// (0x000773c9) cam6_mode_pane

0xbfe5,	// (0x000773dd) cam6_timer_pane_ParamLimits

0xbfe5,	// (0x000773dd) cam6_timer_pane

0xbff9,	// (0x000773f1) cam6_zoom_pane_ParamLimits

0xbff9,	// (0x000773f1) cam6_zoom_pane

0xc014,	// (0x0007740c) cam6_mode_pane_g1_ParamLimits

0xc014,	// (0x0007740c) cam6_mode_pane_g1

0xc020,	// (0x00077418) cam6_mode_pane_g2_ParamLimits

0xc020,	// (0x00077418) cam6_mode_pane_g2

0xc02c,	// (0x00077424) cam6_mode_pane_g3_ParamLimits

0xc02c,	// (0x00077424) cam6_mode_pane_g3

0xc038,	// (0x00077430) cam6_mode_pane_g4_ParamLimits

0xc038,	// (0x00077430) cam6_mode_pane_g4

0x0003,

0xfa8d,	// (0x0007ae85) cam6_mode_pane_g_ParamLimits

0xfa8d,	// (0x0007ae85) cam6_mode_pane_g

0x44e2,	// (0x0006f8da) bg_tb_trans_pane_cp08_ParamLimits

0x44e2,	// (0x0006f8da) bg_tb_trans_pane_cp08

0xeef0,	// (0x0007a2e8) cam6_battery_pane_ParamLimits

0xeef0,	// (0x0007a2e8) cam6_battery_pane

0xef06,	// (0x0007a2fe) cam6_indi_pane_g1_ParamLimits

0xef06,	// (0x0007a2fe) cam6_indi_pane_g1

0xef18,	// (0x0007a310) cam6_indi_pane_g2_ParamLimits

0xef18,	// (0x0007a310) cam6_indi_pane_g2

0xef2a,	// (0x0007a322) cam6_indi_pane_g3_ParamLimits

0xef2a,	// (0x0007a322) cam6_indi_pane_g3

0x0002,

0xfa96,	// (0x0007ae8e) cam6_indi_pane_g_ParamLimits

0xfa96,	// (0x0007ae8e) cam6_indi_pane_g

0xef3c,	// (0x0007a334) cam6_indi_pane_t1_ParamLimits

0xef3c,	// (0x0007a334) cam6_indi_pane_t1

0xae32,	// (0x0007622a) cam6_autofocus_pane_g1

0xae3a,	// (0x00076232) cam6_autofocus_pane_g2

0xae42,	// (0x0007623a) cam6_autofocus_pane_g3

0xae4a,	// (0x00076242) cam6_autofocus_pane_g4

0x0003,

0xfa9d,	// (0x0007ae95) cam6_autofocus_pane_g

0xef62,	// (0x0007a35a) cam6_timer_pane_g1

0xef6a,	// (0x0007a362) cam6_timer_pane_t1

0xef78,	// (0x0007a370) cam6_zoom_cont_pane

0xef80,	// (0x0007a378) cam6_zoom_pane_g1

0xef89,	// (0x0007a381) cam6_zoom_pane_g2

0xc044,	// (0x0007743c) cam6_zoom_pane_g3

0x0002,

0xfaa6,	// (0x0007ae9e) cam6_zoom_pane_g

0x1d8a,	// (0x0006d182) cam6_battery_pane_g1

0x1d8a,	// (0x0006d182) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x0007a4a7) cam6_battery_pane_g

0xef80,	// (0x0007a378) cam6_zoom_cont_pane_g1

0xef89,	// (0x0007a381) cam6_zoom_cont_pane_g2

0xef92,	// (0x0007a38a) cam6_zoom_cont_pane_g3

0x0002,

0xfaad,	// (0x0007aea5) cam6_zoom_cont_pane_g

0xc062,	// (0x0007745a) cam6_mode_pane_cp_ParamLimits

0xc062,	// (0x0007745a) cam6_mode_pane_cp

0xc076,	// (0x0007746e) cam6_zoom_pane_cp_ParamLimits

0xc076,	// (0x0007746e) cam6_zoom_pane_cp

0xc08e,	// (0x00077486) vid6_image_uncrop_cif_pane_ParamLimits

0xc08e,	// (0x00077486) vid6_image_uncrop_cif_pane

0xc0ba,	// (0x000774b2) vid6_image_uncrop_nhd_pane_ParamLimits

0xc0ba,	// (0x000774b2) vid6_image_uncrop_nhd_pane

0xc0d7,	// (0x000774cf) vid6_image_uncrop_vga_pane_ParamLimits

0xc0d7,	// (0x000774cf) vid6_image_uncrop_vga_pane

0xc0f6,	// (0x000774ee) vid6_image_uncrop_wvga_pane_ParamLimits

0xc0f6,	// (0x000774ee) vid6_image_uncrop_wvga_pane

0xc113,	// (0x0007750b) vid6_indi_pane_ParamLimits

0xc113,	// (0x0007750b) vid6_indi_pane

0x44e2,	// (0x0006f8da) bg_tb_trans_pane_cp09_ParamLimits

0x44e2,	// (0x0006f8da) bg_tb_trans_pane_cp09

0xefaa,	// (0x0007a3a2) cam6_battery_pane_cp_ParamLimits

0xefaa,	// (0x0007a3a2) cam6_battery_pane_cp

0xefb6,	// (0x0007a3ae) vid6_indi_pane_g1_ParamLimits

0xefb6,	// (0x0007a3ae) vid6_indi_pane_g1

0xefc8,	// (0x0007a3c0) vid6_indi_pane_g2_ParamLimits

0xefc8,	// (0x0007a3c0) vid6_indi_pane_g2

0xefda,	// (0x0007a3d2) vid6_indi_pane_g3_ParamLimits

0xefda,	// (0x0007a3d2) vid6_indi_pane_g3

0xefef,	// (0x0007a3e7) vid6_indi_pane_g4_ParamLimits

0xefef,	// (0x0007a3e7) vid6_indi_pane_g4

0xf004,	// (0x0007a3fc) vid6_indi_pane_g5_ParamLimits

0xf004,	// (0x0007a3fc) vid6_indi_pane_g5

0x0004,

0xfab4,	// (0x0007aeac) vid6_indi_pane_g_ParamLimits

0xfab4,	// (0x0007aeac) vid6_indi_pane_g

0xf01e,	// (0x0007a416) vid6_indi_pane_t1_ParamLimits

0xf01e,	// (0x0007a416) vid6_indi_pane_t1

0x032b,	// (0x0006b723) vid6_indi_pane_t2_ParamLimits

0x032b,	// (0x0006b723) vid6_indi_pane_t2

0x0353,	// (0x0006b74b) vid6_indi_pane_t3_ParamLimits

0x0353,	// (0x0006b74b) vid6_indi_pane_t3

0x037b,	// (0x0006b773) vid6_indi_pane_t4_ParamLimits

0x037b,	// (0x0006b773) vid6_indi_pane_t4

0x0003,

0xfabf,	// (0x0007aeb7) vid6_indi_pane_t_ParamLimits

0xfabf,	// (0x0007aeb7) vid6_indi_pane_t

0x039f,	// (0x0006b797) wait_bar_pane_cp08

0xc136,	// (0x0007752e) main_cset_text2_pane_t1_ParamLimits

0xc136,	// (0x0007752e) main_cset_text2_pane_t1

0xc04d,	// (0x00077445) listscroll_gen_pane_cp06_t1_ParamLimits

0xc04d,	// (0x00077445) listscroll_gen_pane_cp06_t1

0x163d,	// (0x0006ca35) main_cam6_set_pane

0x1d4c,	// (0x0006d144) bg_tb_trans_pane_cp06_ParamLimits

0xacec,	// (0x000760e4) cam4_indicators_pane_g1_ParamLimits

0xacfd,	// (0x000760f5) cam4_indicators_pane_g2_ParamLimits

0xf837,	// (0x0007ac2f) cam4_indicators_pane_g_ParamLimits

0xad15,	// (0x0007610d) cam4_indicators_pane_t1_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_tb_trans_pane_cp07_ParamLimits

0xadc6,	// (0x000761be) vid4_indicators_pane_g1_ParamLimits

0xadda,	// (0x000761d2) vid4_indicators_pane_g2_ParamLimits

0xadee,	// (0x000761e6) vid4_indicators_pane_g3_ParamLimits

0xadff,	// (0x000761f7) vid4_indicators_pane_g4_ParamLimits

0xf849,	// (0x0007ac41) vid4_indicators_pane_g_ParamLimits

0xae1b,	// (0x00076213) vid4_indicators_pane_t1_ParamLimits

0xbc01,	// (0x00076ff9) vid4_progress_pane_g1_ParamLimits

0xbc11,	// (0x00077009) vid4_progress_pane_g2_ParamLimits

0xbc21,	// (0x00077019) vid4_progress_pane_g3_ParamLimits

0xbc33,	// (0x0007702b) vid4_progress_pane_g4_ParamLimits

0xf9f0,	// (0x0007ade8) vid4_progress_pane_g_ParamLimits

0xbc4b,	// (0x00077043) vid4_progress_pane_t1_ParamLimits

0xbc61,	// (0x00077059) vid4_progress_pane_t2_ParamLimits

0xbc76,	// (0x0007706e) vid4_progress_pane_t3_ParamLimits

0xf9fb,	// (0x0007adf3) vid4_progress_pane_t_ParamLimits

0xbc8c,	// (0x00077084) wait_bar_pane_cp07_ParamLimits

0xc16d,	// (0x00077565) main_cam6_set_pane_g2_ParamLimits

0xc16d,	// (0x00077565) main_cam6_set_pane_g2

0xc179,	// (0x00077571) main_cset6_listscroll_pane_ParamLimits

0xc179,	// (0x00077571) main_cset6_listscroll_pane

0xc1a4,	// (0x0007759c) main_cset6_slider_pane_ParamLimits

0xc1a4,	// (0x0007759c) main_cset6_slider_pane

0xc1b0,	// (0x000775a8) main_cset6_text2_pane_ParamLimits

0xc1b0,	// (0x000775a8) main_cset6_text2_pane

0x03ae,	// (0x0006b7a6) main_cset6_text_pane

0x03b6,	// (0x0006b7ae) main_cset_list_pane_copy1_ParamLimits

0x03b6,	// (0x0006b7ae) main_cset_list_pane_copy1

0x03c6,	// (0x0006b7be) scroll_pane_cp028_copy1

0xc1c3,	// (0x000775bb) cset_list_set_pane_copy1

0xc1d9,	// (0x000775d1) aid_position_infowindow_above_copy1

0xc1e1,	// (0x000775d9) aid_position_infowindow_below_copy1

0xc1e9,	// (0x000775e1) cset_list_set_pane_g1_copy1

0x5fbf,	// (0x000713b7) cset_list_set_pane_g3_copy1_ParamLimits

0x5fbf,	// (0x000713b7) cset_list_set_pane_g3_copy1

0x5fce,	// (0x000713c6) cset_list_set_pane_t1_copy1_ParamLimits

0x5fce,	// (0x000713c6) cset_list_set_pane_t1_copy1

0x1ce5,	// (0x0006d0dd) list_highlight_pane_cp021_copy1_ParamLimits

0x1ce5,	// (0x0006d0dd) list_highlight_pane_cp021_copy1

0x03cf,	// (0x0006b7c7) cset6_slider_pane_ParamLimits

0x03cf,	// (0x0006b7c7) cset6_slider_pane

0x03fb,	// (0x0006b7f3) main_cset6_slider_pane_g1_ParamLimits

0x03fb,	// (0x0006b7f3) main_cset6_slider_pane_g1

0xc1f1,	// (0x000775e9) main_cset6_slider_pane_g2_ParamLimits

0xc1f1,	// (0x000775e9) main_cset6_slider_pane_g2

0x0423,	// (0x0006b81b) main_cset6_slider_pane_g3_ParamLimits

0x0423,	// (0x0006b81b) main_cset6_slider_pane_g3

0xc219,	// (0x00077611) main_cset6_slider_pane_g4_ParamLimits

0xc219,	// (0x00077611) main_cset6_slider_pane_g4

0xc225,	// (0x0007761d) main_cset6_slider_pane_g5_ParamLimits

0xc225,	// (0x0007761d) main_cset6_slider_pane_g5

0xe9a1,	// (0x00079d99) main_cset6_slider_pane_g7_ParamLimits

0xe9a1,	// (0x00079d99) main_cset6_slider_pane_g7

0xe9ad,	// (0x00079da5) main_cset6_slider_pane_g8_ParamLimits

0xe9ad,	// (0x00079da5) main_cset6_slider_pane_g8

0xc233,	// (0x0007762b) main_cset6_slider_pane_g9_ParamLimits

0xc233,	// (0x0007762b) main_cset6_slider_pane_g9

0xc23f,	// (0x00077637) main_cset6_slider_pane_g10_ParamLimits

0xc23f,	// (0x00077637) main_cset6_slider_pane_g10

0xc24b,	// (0x00077643) main_cset6_slider_pane_g11_ParamLimits

0xc24b,	// (0x00077643) main_cset6_slider_pane_g11

0xc257,	// (0x0007764f) main_cset6_slider_pane_g12_ParamLimits

0xc257,	// (0x0007764f) main_cset6_slider_pane_g12

0x0217,	// (0x0006b60f) main_cset6_slider_pane_g13_ParamLimits

0x0217,	// (0x0006b60f) main_cset6_slider_pane_g13

0x0223,	// (0x0006b61b) main_cset6_slider_pane_g14_ParamLimits

0x0223,	// (0x0006b61b) main_cset6_slider_pane_g14

0xc263,	// (0x0007765b) main_cset6_slider_pane_g15_ParamLimits

0xc263,	// (0x0007765b) main_cset6_slider_pane_g15

0xc27b,	// (0x00077673) main_cset6_slider_pane_g16_ParamLimits

0xc27b,	// (0x00077673) main_cset6_slider_pane_g16

0xc289,	// (0x00077681) main_cset6_slider_pane_g17_ParamLimits

0xc289,	// (0x00077681) main_cset6_slider_pane_g17

0x0011,

0xfac8,	// (0x0007aec0) main_cset6_slider_pane_g_ParamLimits

0xfac8,	// (0x0007aec0) main_cset6_slider_pane_g

0x043b,	// (0x0006b833) main_cset6_slider_pane_t1_ParamLimits

0x043b,	// (0x0006b833) main_cset6_slider_pane_t1

0xc2a3,	// (0x0007769b) main_cset6_slider_pane_t2_ParamLimits

0xc2a3,	// (0x0007769b) main_cset6_slider_pane_t2

0xc2ce,	// (0x000776c6) main_cset6_slider_pane_t3_ParamLimits

0xc2ce,	// (0x000776c6) main_cset6_slider_pane_t3

0xc2f9,	// (0x000776f1) main_cset6_slider_pane_t4_ParamLimits

0xc2f9,	// (0x000776f1) main_cset6_slider_pane_t4

0xc324,	// (0x0007771c) main_cset6_slider_pane_t5_ParamLimits

0xc324,	// (0x0007771c) main_cset6_slider_pane_t5

0x047c,	// (0x0006b874) main_cset6_slider_pane_t7_ParamLimits

0x047c,	// (0x0006b874) main_cset6_slider_pane_t7

0xc351,	// (0x00077749) main_cset6_slider_pane_t8_ParamLimits

0xc351,	// (0x00077749) main_cset6_slider_pane_t8

0xc375,	// (0x0007776d) main_cset6_slider_pane_t9_ParamLimits

0xc375,	// (0x0007776d) main_cset6_slider_pane_t9

0xc399,	// (0x00077791) main_cset6_slider_pane_t10_ParamLimits

0xc399,	// (0x00077791) main_cset6_slider_pane_t10

0xc3bd,	// (0x000777b5) main_cset6_slider_pane_t11_ParamLimits

0xc3bd,	// (0x000777b5) main_cset6_slider_pane_t11

0x04b2,	// (0x0006b8aa) main_cset6_slider_pane_t14_ParamLimits

0x04b2,	// (0x0006b8aa) main_cset6_slider_pane_t14

0x04eb,	// (0x0006b8e3) main_cset6_slider_pane_t15_ParamLimits

0x04eb,	// (0x0006b8e3) main_cset6_slider_pane_t15

0x000b,

0xfaed,	// (0x0007aee5) main_cset6_slider_pane_t_ParamLimits

0xfaed,	// (0x0007aee5) main_cset6_slider_pane_t

0xea6f,	// (0x00079e67) cset_slider_pane_g1_copy1

0xea78,	// (0x00079e70) cset_slider_pane_g2_copy1

0xea81,	// (0x00079e79) cset_slider_pane_g3_copy1

0x163d,	// (0x0006ca35) bg_popup_sub_pane_cp011_copy1

0x052d,	// (0x0006b925) main_cset_text_pane_g1_copy1

0xeb0a,	// (0x00079f02) main_cset_text_pane_t1_copy1

0xeb18,	// (0x00079f10) main_cset_text_pane_t2_copy1

0xeb26,	// (0x00079f1e) main_cset_text_pane_t3_copy1

0xeb34,	// (0x00079f2c) main_cset_text_pane_t4_copy1

0xeb42,	// (0x00079f3a) main_cset_text_pane_t5_copy1

0x0535,	// (0x0006b92d) main_cset_text_pane_t6_copy1

0x0543,	// (0x0006b93b) main_cset_text_pane_t7_copy1

0xc3e3,	// (0x000777db) main_cset_text2_pane_t1_copy1

0x1ce5,	// (0x0006d0dd) main_ncimui_pane

0x9493,	// (0x0007488b) popup_query_ncimui_window_ParamLimits

0x9493,	// (0x0007488b) popup_query_ncimui_window

0x9a2c,	// (0x00074e24) field_cale_ev2_pane_g4_ParamLimits

0x9a2c,	// (0x00074e24) field_cale_ev2_pane_g4

0xa5c1,	// (0x000759b9) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa5c1,	// (0x000759b9) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7d1,	// (0x0007abc9) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7d1,	// (0x0007abc9) cell_video_dialer_keypad_pane_g

0xa5d9,	// (0x000759d1) cell_video_dialer_keypad_pane_t1

0x163d,	// (0x0006ca35) bg_popup_window_pane_cp012

0x40c6,	// (0x0006f4be) heading_pane_cp06

0x056f,	// (0x0006b967) ncim_query_content_pane

0x163d,	// (0x0006ca35) bg_popup_heading_pane_cp01

0x0577,	// (0x0006b96f) ncim_heading_pane_t1

0x0585,	// (0x0006b97d) ncim_indicator_popup_pane

0x0597,	// (0x0006b98f) ncim_query_button_pane

0x05ab,	// (0x0006b9a3) ncim_query_content_pane_t1

0x05bd,	// (0x0006b9b5) ncim_query_content_pane_t2

0x0005,

0xfb31,	// (0x0007af29) ncim_query_content_pane_t

0x05f7,	// (0x0006b9ef) ncim_query_list_pane

0x0609,	// (0x0006ba01) ncim_query_popup_pane

0x0585,	// (0x0006b97d) ncim_indicator_popup_pane_ParamLimits

0xc537,	// (0x0007792f) ncim_query_content_pane_g1_ParamLimits

0xc537,	// (0x0007792f) ncim_query_content_pane_g1

0x05ab,	// (0x0006b9a3) ncim_query_content_pane_t1_ParamLimits

0x05bd,	// (0x0006b9b5) ncim_query_content_pane_t2_ParamLimits

0xc543,	// (0x0007793b) ncim_query_content_pane_t3_ParamLimits

0xc543,	// (0x0007793b) ncim_query_content_pane_t3

0xc560,	// (0x00077958) ncim_query_content_pane_t4_ParamLimits

0xc560,	// (0x00077958) ncim_query_content_pane_t4

0xc57d,	// (0x00077975) ncim_query_content_pane_t5_ParamLimits

0xc57d,	// (0x00077975) ncim_query_content_pane_t5

0x05cf,	// (0x0006b9c7) ncim_query_content_pane_t6_ParamLimits

0x05cf,	// (0x0006b9c7) ncim_query_content_pane_t6

0xfb31,	// (0x0007af29) ncim_query_content_pane_t_ParamLimits

0x05f7,	// (0x0006b9ef) ncim_query_list_pane_ParamLimits

0x0609,	// (0x0006ba01) ncim_query_popup_pane_ParamLimits

0x061d,	// (0x0006ba15) wait_bar_pane_cp04

0x163d,	// (0x0006ca35) input_focus_pane_cp011

0x0625,	// (0x0006ba1d) ncim_query_popup_pane_t1

0x0633,	// (0x0006ba2b) ncim_list_query_list_pane_ParamLimits

0x0633,	// (0x0006ba2b) ncim_list_query_list_pane

0x163d,	// (0x0006ca35) bg_button_pane_cp027

0x0640,	// (0x0006ba38) ncim_query_button_pane_g1

0x163d,	// (0x0006ca35) list_highlight_pane_cp012

0x064a,	// (0x0006ba42) ncim_list_query_list_pane_g1

0x0652,	// (0x0006ba4a) ncim_list_query_list_pane_t1

0xad09,	// (0x00076101) cam4_indicators_pane_g3_ParamLimits

0xad09,	// (0x00076101) cam4_indicators_pane_g3

0xae0b,	// (0x00076203) vid4_indicators_pane_g5_ParamLimits

0xae0b,	// (0x00076203) vid4_indicators_pane_g5

0xbc3f,	// (0x00077037) vid4_progress_pane_g5_ParamLimits

0xbc3f,	// (0x00077037) vid4_progress_pane_g5

0xc423,	// (0x0007781b) main_ncimui_pane_g1

0xc48b,	// (0x00077883) ncimui_group_query_pane_ParamLimits

0xc48b,	// (0x00077883) ncimui_group_query_pane

0xc4d3,	// (0x000778cb) ncimui_list_pane_ParamLimits

0xc4d3,	// (0x000778cb) ncimui_list_pane

0xc4fa,	// (0x000778f2) ncimui_text_pane_ParamLimits

0xc4fa,	// (0x000778f2) ncimui_text_pane

0xc59a,	// (0x00077992) ncimui_text_pane_t1_ParamLimits

0xc59a,	// (0x00077992) ncimui_text_pane_t1

0x0660,	// (0x0006ba58) ncimui_list_single_graphic_pane_ParamLimits

0x0660,	// (0x0006ba58) ncimui_list_single_graphic_pane

0xc5b9,	// (0x000779b1) ncimui_query_pane_ParamLimits

0xc5b9,	// (0x000779b1) ncimui_query_pane

0x163d,	// (0x0006ca35) list_highlight_pane_cp013

0x0670,	// (0x0006ba68) ncim_list_query_list_pane_t1_copy1

0x067e,	// (0x0006ba76) ncim_list_single_graphic_pane_g1

0xc5cc,	// (0x000779c4) ncim_query_button_pane_cp01

0xc5d8,	// (0x000779d0) ncim_query_entry_pane_ParamLimits

0xc5d8,	// (0x000779d0) ncim_query_entry_pane

0xc5eb,	// (0x000779e3) ncimui_query_pane_g1

0xc5f7,	// (0x000779ef) ncimui_query_pane_t1_ParamLimits

0xc5f7,	// (0x000779ef) ncimui_query_pane_t1

0x1ce5,	// (0x0006d0dd) input_focus_pane_cp012

0x0686,	// (0x0006ba7e) ncim_query_entry_pane_t1

0x1de8,	// (0x0006d1e0) main_im_pane_ParamLimits

0x1ce5,	// (0x0006d0dd) main_mobtv_pane_ParamLimits

0x1ce5,	// (0x0006d0dd) main_mobtv_pane

0xc297,	// (0x0007768f) main_cset6_slider_pane_g18_ParamLimits

0xc297,	// (0x0007768f) main_cset6_slider_pane_g18

0x042f,	// (0x0006b827) main_cset6_slider_pane_g19_ParamLimits

0x042f,	// (0x0006b827) main_cset6_slider_pane_g19

0x2e7d,	// (0x0006e275) bg_main_mobtv_pane_ParamLimits

0x2e7d,	// (0x0006e275) bg_main_mobtv_pane

0xc610,	// (0x00077a08) main_mobtv_info_pane

0xc61b,	// (0x00077a13) main_mobtv_loading_pane_ParamLimits

0xc61b,	// (0x00077a13) main_mobtv_loading_pane

0x0698,	// (0x0006ba90) main_mobtv_pg_channel_list_pane

0x06a2,	// (0x0006ba9a) main_mobtv_pg_hdr_pane

0xc628,	// (0x00077a20) main_mobtv_programe_curr_pane_ParamLimits

0xc628,	// (0x00077a20) main_mobtv_programe_curr_pane

0xc635,	// (0x00077a2d) main_mobtv_programe_next_pane_ParamLimits

0xc635,	// (0x00077a2d) main_mobtv_programe_next_pane

0x06ab,	// (0x0006baa3) popup_mobtv_noti_window

0x1d8a,	// (0x0006d182) main_tv_pg_hdr_pane_g1

0x06b3,	// (0x0006baab) main_tv_pg_hdr_pane_g2

0x06bb,	// (0x0006bab3) main_tv_pg_hdr_pane_g3

0x06c3,	// (0x0006babb) main_tv_pg_hdr_pane_g4

0x06cb,	// (0x0006bac3) main_tv_pg_hdr_pane_g5

0x06d5,	// (0x0006bacd) main_tv_pg_hdr_pane_g6

0x06df,	// (0x0006bad7) main_tv_pg_hdr_pane_g7

0x06e9,	// (0x0006bae1) main_tv_pg_hdr_pane_g8

0x06f3,	// (0x0006baeb) main_tv_pg_hdr_pane_g9

0x06fd,	// (0x0006baf5) main_tv_pg_hdr_pane_g10

0x0707,	// (0x0006baff) main_tv_pg_hdr_pane_g11

0x000a,

0xfb3e,	// (0x0007af36) main_tv_pg_hdr_pane_g

0x0711,	// (0x0006bb09) main_tv_pg_hdr_pane_t1

0x071f,	// (0x0006bb17) main_tv_pg_hdr_pane_t2

0x072d,	// (0x0006bb25) main_tv_pg_hdr_pane_t3

0x073d,	// (0x0006bb35) main_tv_pg_hdr_pane_t4

0x074d,	// (0x0006bb45) main_tv_pg_hdr_pane_t5

0x0004,

0xfb55,	// (0x0007af4d) main_tv_pg_hdr_pane_t

0x075d,	// (0x0006bb55) single_mobtv_pg_channel_pane_ParamLimits

0x075d,	// (0x0006bb55) single_mobtv_pg_channel_pane

0x076f,	// (0x0006bb67) single_mobtv_pg_channel_table_pane

0x22bf,	// (0x0006d6b7) single_mobtv_pg_channel_thumb_pane

0x0778,	// (0x0006bb70) single_tv_pg_channel_pane_g1

0x0781,	// (0x0006bb79) single_tv_pg_channel_pane_g2

0x0001,

0xfb60,	// (0x0007af58) single_tv_pg_channel_pane_g

0x1d4c,	// (0x0006d144) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1d4c,	// (0x0006d144) bg_single_mobtv_pg_channel_thumb_pane

0x078a,	// (0x0006bb82) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x078a,	// (0x0006bb82) single_mobtv_pg_channel_thumb_pane_g1

0x0798,	// (0x0006bb90) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x0798,	// (0x0006bb90) single_mobtv_pg_channel_thumb_pane_g2

0x07a4,	// (0x0006bb9c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x07a4,	// (0x0006bb9c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb65,	// (0x0007af5d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb65,	// (0x0007af5d) single_mobtv_pg_channel_thumb_pane_g

0x07b0,	// (0x0006bba8) single_mobtv_pg_channel_thumb_pane_t1

0x07be,	// (0x0006bbb6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb6c,	// (0x0007af64) single_mobtv_pg_channel_thumb_pane_t

0x1d8a,	// (0x0006d182) bg_single_mobtv_pg_channel_table_pane_g1

0x1d8a,	// (0x0006d182) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x0007a4a7) bg_single_mobtv_pg_channel_table_pane_g

0x07cc,	// (0x0006bbc4) single_mobtv_pg_channel_table_pane_t1

0x07da,	// (0x0006bbd2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb71,	// (0x0007af69) single_mobtv_pg_channel_table_pane_t

0xc64a,	// (0x00077a42) main_mobtv_info_pane_g1_ParamLimits

0xc64a,	// (0x00077a42) main_mobtv_info_pane_g1

0xc666,	// (0x00077a5e) main_mobtv_info_pane_t1_ParamLimits

0xc666,	// (0x00077a5e) main_mobtv_info_pane_t1

0xc6de,	// (0x00077ad6) main_mobtv_info_pane_t2_ParamLimits

0xc6de,	// (0x00077ad6) main_mobtv_info_pane_t2

0x0002,

0xfb7b,	// (0x0007af73) main_mobtv_info_pane_t_ParamLimits

0xfb7b,	// (0x0007af73) main_mobtv_info_pane_t

0xc76d,	// (0x00077b65) wait_bar_pane_cp05

0xc77f,	// (0x00077b77) main_mobtv_loading_pane_g1_ParamLimits

0xc77f,	// (0x00077b77) main_mobtv_loading_pane_g1

0xc78d,	// (0x00077b85) main_mobtv_loading_pane_g2_ParamLimits

0xc78d,	// (0x00077b85) main_mobtv_loading_pane_g2

0xc799,	// (0x00077b91) main_mobtv_loading_pane_g3_ParamLimits

0xc799,	// (0x00077b91) main_mobtv_loading_pane_g3

0x0002,

0xfb82,	// (0x0007af7a) main_mobtv_loading_pane_g_ParamLimits

0xfb82,	// (0x0007af7a) main_mobtv_loading_pane_g

0x07e8,	// (0x0006bbe0) main_mobtv_loading_pane_t1_ParamLimits

0x07e8,	// (0x0006bbe0) main_mobtv_loading_pane_t1

0x0800,	// (0x0006bbf8) main_mobtv_loading_pane_t2_ParamLimits

0x0800,	// (0x0006bbf8) main_mobtv_loading_pane_t2

0x0001,

0xfb89,	// (0x0007af81) main_mobtv_loading_pane_t_ParamLimits

0xfb89,	// (0x0007af81) main_mobtv_loading_pane_t

0xc7a7,	// (0x00077b9f) wait_bar_pane_cp06_ParamLimits

0xc7a7,	// (0x00077b9f) wait_bar_pane_cp06

0x0824,	// (0x0006bc1c) main_mobtv_programe_curr_pane_t1

0x0832,	// (0x0006bc2a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb8e,	// (0x0007af86) main_mobtv_programe_curr_pane_t

0x0840,	// (0x0006bc38) main_mobtv_programe_next_pane_t1

0x084e,	// (0x0006bc46) main_mobtv_programe_next_pane_t2

0x085c,	// (0x0006bc54) main_mobtv_programe_next_pane_t3

0x0002,

0xfb93,	// (0x0007af8b) main_mobtv_programe_next_pane_t

0x163d,	// (0x0006ca35) bg_popup_mobtv_noti_window_pane

0x086a,	// (0x0006bc62) popup_mobtv_noti_window_g1

0x0872,	// (0x0006bc6a) popup_mobtv_noti_window_t1

0x0880,	// (0x0006bc78) popup_mobtv_noti_window_t2

0x0001,

0xfb9a,	// (0x0007af92) popup_mobtv_noti_window_t

0x1d8a,	// (0x0006d182) bg_popup_mobtv_noti_window_pane_g1

0x163d,	// (0x0006ca35) sc_clock_pane

0x163d,	// (0x0006ca35) main_fs_bigclock_pane

0xbe15,	// (0x0007720d) blid2_tripm_pane_t4_ParamLimits

0xbe15,	// (0x0007720d) blid2_tripm_pane_t4

0x1d5a,	// (0x0006d152) sc_clock_pane_g1_ParamLimits

0x1d5a,	// (0x0006d152) sc_clock_pane_g1

0x1da8,	// (0x0006d1a0) sc_clock_pane_t1_ParamLimits

0x1da8,	// (0x0006d1a0) sc_clock_pane_t1

0x1da8,	// (0x0006d1a0) sc_clock_pane_t2_ParamLimits

0x1da8,	// (0x0006d1a0) sc_clock_pane_t2

0x1da8,	// (0x0006d1a0) sc_clock_pane_t3_ParamLimits

0x1da8,	// (0x0006d1a0) sc_clock_pane_t3

0x0004,

0xfb9f,	// (0x0007af97) sc_clock_pane_t_ParamLimits

0xfb9f,	// (0x0007af97) sc_clock_pane_t

0xcf54,	// (0x0007834c) main_fs_bigclock_indicator_pane_ParamLimits

0xcf54,	// (0x0007834c) main_fs_bigclock_indicator_pane

0xc7ee,	// (0x00077be6) main_fs_bigclock_pane_g1_ParamLimits

0xc7ee,	// (0x00077be6) main_fs_bigclock_pane_g1

0xcf60,	// (0x00078358) main_fs_bigclock_pane_t1_ParamLimits

0xcf60,	// (0x00078358) main_fs_bigclock_pane_t1

0xcf72,	// (0x0007836a) main_fs_bigclock_pane_t2_ParamLimits

0xcf72,	// (0x0007836a) main_fs_bigclock_pane_t2

0xcf86,	// (0x0007837e) main_fs_bigclock_pane_t3_ParamLimits

0xcf86,	// (0x0007837e) main_fs_bigclock_pane_t3

0x0002,

0xfd35,	// (0x0007b12d) main_fs_bigclock_pane_t_ParamLimits

0xfd35,	// (0x0007b12d) main_fs_bigclock_pane_t

0x10e9,	// (0x0006c4e1) main_fs_bigclock_indicator_pane_g1

0x059f,	// (0x0006b997) ncim_query_content_pane_g2_ParamLimits

0x059f,	// (0x0006b997) ncim_query_content_pane_g2

0x0001,

0xfb2c,	// (0x0007af24) ncim_query_content_pane_g_ParamLimits

0xfb2c,	// (0x0007af24) ncim_query_content_pane_g

0x1da8,	// (0x0006d1a0) sc_clock_pane_t4_ParamLimits

0x1da8,	// (0x0006d1a0) sc_clock_pane_t4

0x1ce5,	// (0x0006d0dd) main_radioblah_pane

0xabbf,	// (0x00075fb7) cell_call4_button_pane_t1_copy1_ParamLimits

0xabbf,	// (0x00075fb7) cell_call4_button_pane_t1_copy1

0xc43d,	// (0x00077835) main_ncimui_pane_t1_ParamLimits

0xc43d,	// (0x00077835) main_ncimui_pane_t1

0xc457,	// (0x0007784f) main_ncimui_pane_t2_ParamLimits

0xc457,	// (0x0007784f) main_ncimui_pane_t2

0x0002,

0xfb25,	// (0x0007af1d) main_ncimui_pane_t_ParamLimits

0xfb25,	// (0x0007af1d) main_ncimui_pane_t

0x2e9f,	// (0x0006e297) main_radioblah_anim_pane_ParamLimits

0x2e9f,	// (0x0006e297) main_radioblah_anim_pane

0x2e9f,	// (0x0006e297) main_radioblah_info_pane_ParamLimits

0x2e9f,	// (0x0006e297) main_radioblah_info_pane

0x2e8b,	// (0x0006e283) main_radioblah_pane_t1_ParamLimits

0x2e8b,	// (0x0006e283) main_radioblah_pane_t1

0x2e8b,	// (0x0006e283) main_radioblah_pane_t2_ParamLimits

0x2e8b,	// (0x0006e283) main_radioblah_pane_t2

0x0003,

0xfbc0,	// (0x0007afb8) main_radioblah_pane_t_ParamLimits

0xfbc0,	// (0x0007afb8) main_radioblah_pane_t

0x1d3e,	// (0x0006d136) main_radioblah_rocker_ctrl_pane_ParamLimits

0x1d3e,	// (0x0006d136) main_radioblah_rocker_ctrl_pane

0x44f0,	// (0x0006f8e8) main_radioblah_info_pane_t1_ParamLimits

0x44f0,	// (0x0006f8e8) main_radioblah_info_pane_t1

0x09f6,	// (0x0006bdee) main_radioblah_info_pane_t2_ParamLimits

0x09f6,	// (0x0006bdee) main_radioblah_info_pane_t2

0x0003,

0xfbc9,	// (0x0007afc1) main_radioblah_info_pane_t_ParamLimits

0xfbc9,	// (0x0007afc1) main_radioblah_info_pane_t

0x1d8a,	// (0x0006d182) main_radioblah_rocker_ctrl_pane_g1

0x1d8a,	// (0x0006d182) main_radioblah_rocker_ctrl_pane_g2

0x1d8a,	// (0x0006d182) main_radioblah_rocker_ctrl_pane_g3

0x1d8a,	// (0x0006d182) main_radioblah_rocker_ctrl_pane_g4

0x1d8a,	// (0x0006d182) main_radioblah_rocker_ctrl_pane_g5

0x1d8a,	// (0x0006d182) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd2,	// (0x0007afca) main_radioblah_rocker_ctrl_pane_g

0xc3e3,	// (0x000777db) main_cset_text2_pane_t1_copy1_ParamLimits

0xac3a,	// (0x00076032) cam4_image_uncrop_qvga_pane

0xad7b,	// (0x00076173) vid4_image_uncrop_qcif_pane

0xbfa9,	// (0x000773a1) cam6_image_uncrop_qvga_pane_ParamLimits

0xbfa9,	// (0x000773a1) cam6_image_uncrop_qvga_pane

0xef9a,	// (0x0007a392) vid6_image_uncrop_qcif_pane_ParamLimits

0xef9a,	// (0x0007a392) vid6_image_uncrop_qcif_pane

0x163d,	// (0x0006ca35) bg_popup_preview_window_pane_cp03

0x0551,	// (0x0006b949) list_cset_text2_pane

0x0559,	// (0x0006b951) main_cset6_text2_pane_g1

0x0561,	// (0x0006b959) main_cset6_text2_pane_t1

0xc832,	// (0x00077c2a) list_cset_text2_pane_t1_ParamLimits

0xc832,	// (0x00077c2a) list_cset_text2_pane_t1

0x1ce5,	// (0x0006d0dd) main_radioblah_pane_ParamLimits

0xc759,	// (0x00077b51) main_mobtv_info_pane_t3_ParamLimits

0xc759,	// (0x00077b51) main_mobtv_info_pane_t3

0x2e7d,	// (0x0006e275) main_radioblah_pane_g1

0x09c6,	// (0x0006bdbe) main_radioblah_info_pane_g1

0x1da8,	// (0x0006d1a0) main_radioblah_info_pane_t3_ParamLimits

0x1da8,	// (0x0006d1a0) main_radioblah_info_pane_t3

0x8584,	// (0x0007397c) highlight_cell_cale_month_pane_ParamLimits

0x8584,	// (0x0007397c) highlight_cell_cale_month_pane

0x163d,	// (0x0006ca35) main_phob_fisheye_pane

0x4933,	// (0x0006fd2b) scroll_pane_cp0031_ParamLimits

0x4933,	// (0x0006fd2b) scroll_pane_cp0031

0x039f,	// (0x0006b797) wait_bar_pane_cp08_ParamLimits

0xc1c3,	// (0x000775bb) cset_list_set_pane_copy1_ParamLimits

0x0a60,	// (0x0006be58) highlight_cell_cale_month_pane_g1

0xc853,	// (0x00077c4b) highlight_cell_cale_month_pane_t1

0xed2a,	// (0x0007a122) list_gen_pane_cp01

0xe98c,	// (0x00079d84) scroll_pane_01

0x6000,	// (0x000713f8) list_single_double_fisheye_pane

0x6009,	// (0x00071401) list_double_fisheye_pane_g1_ParamLimits

0x6009,	// (0x00071401) list_double_fisheye_pane_g1

0x6015,	// (0x0007140d) list_double_fisheye_pane_g2_ParamLimits

0x6015,	// (0x0007140d) list_double_fisheye_pane_g2

0x6029,	// (0x00071421) list_double_fisheye_pane_g3_ParamLimits

0x6029,	// (0x00071421) list_double_fisheye_pane_g3

0x0004,

0xfbdf,	// (0x0007afd7) list_double_fisheye_pane_g_ParamLimits

0xfbdf,	// (0x0007afd7) list_double_fisheye_pane_g

0x6052,	// (0x0007144a) list_double_fisheye_pane_t1_ParamLimits

0x6052,	// (0x0007144a) list_double_fisheye_pane_t1

0x606d,	// (0x00071465) list_double_fisheye_pane_t2_ParamLimits

0x606d,	// (0x00071465) list_double_fisheye_pane_t2

0x0001,

0xfbea,	// (0x0007afe2) list_double_fisheye_pane_t_ParamLimits

0xfbea,	// (0x0007afe2) list_double_fisheye_pane_t

0x163d,	// (0x0006ca35) main_call5_pane

0x1d3e,	// (0x0006d136) sc_swipe_pane_ParamLimits

0x1d3e,	// (0x0006d136) sc_swipe_pane

0xc86d,	// (0x00077c65) call5_image_pane_ParamLimits

0xc86d,	// (0x00077c65) call5_image_pane

0xc87d,	// (0x00077c75) call5_swipe_1_pane_ParamLimits

0xc87d,	// (0x00077c75) call5_swipe_1_pane

0xc889,	// (0x00077c81) call5_swipe_2_pane_ParamLimits

0xc889,	// (0x00077c81) call5_swipe_2_pane

0xc8a3,	// (0x00077c9b) popup_call5_audio_first_window_ParamLimits

0xc8a3,	// (0x00077c9b) popup_call5_audio_first_window

0x1d4c,	// (0x0006d144) call5_swipe_1_pane_g1_ParamLimits

0x1d4c,	// (0x0006d144) call5_swipe_1_pane_g1

0x0a68,	// (0x0006be60) call5_swipe_1_pane_g2_ParamLimits

0x0a68,	// (0x0006be60) call5_swipe_1_pane_g2

0x0001,

0xfbef,	// (0x0007afe7) call5_swipe_1_pane_g_ParamLimits

0xfbef,	// (0x0007afe7) call5_swipe_1_pane_g

0x0a74,	// (0x0006be6c) call5_swipe_1_pane_t1_ParamLimits

0x0a74,	// (0x0006be6c) call5_swipe_1_pane_t1

0x1d4c,	// (0x0006d144) call5_swipe_2_pane_g1_ParamLimits

0x1d4c,	// (0x0006d144) call5_swipe_2_pane_g1

0x0a89,	// (0x0006be81) call5_swipe_2_pane_g2_ParamLimits

0x0a89,	// (0x0006be81) call5_swipe_2_pane_g2

0x0001,

0xfbf4,	// (0x0007afec) call5_swipe_2_pane_g_ParamLimits

0xfbf4,	// (0x0007afec) call5_swipe_2_pane_g

0x0a95,	// (0x0006be8d) call5_swipe_2_pane_t1_ParamLimits

0x0a95,	// (0x0006be8d) call5_swipe_2_pane_t1

0x1d4c,	// (0x0006d144) sc_swipe_pane_g1_ParamLimits

0x1d4c,	// (0x0006d144) sc_swipe_pane_g1

0x1d5a,	// (0x0006d152) sc_swipe_pane_g2_ParamLimits

0x1d5a,	// (0x0006d152) sc_swipe_pane_g2

0x0001,

0xfbf9,	// (0x0007aff1) sc_swipe_pane_g_ParamLimits

0xfbf9,	// (0x0007aff1) sc_swipe_pane_g

0x1d94,	// (0x0006d18c) sc_swipe_pane_t1_ParamLimits

0x1d94,	// (0x0006d18c) sc_swipe_pane_t1

0x163d,	// (0x0006ca35) main_cmail_launcher_pane

0xc8b1,	// (0x00077ca9) aid_size_cell_cmail_l_ParamLimits

0xc8b1,	// (0x00077ca9) aid_size_cell_cmail_l

0xc8bf,	// (0x00077cb7) grid_cmail_l_pane_ParamLimits

0xc8bf,	// (0x00077cb7) grid_cmail_l_pane

0xc8cf,	// (0x00077cc7) cell_cmail_l_pane_ParamLimits

0xc8cf,	// (0x00077cc7) cell_cmail_l_pane

0x0aaa,	// (0x0006bea2) cell_cmail_l_pane_g1_ParamLimits

0x0aaa,	// (0x0006bea2) cell_cmail_l_pane_g1

0x0ab6,	// (0x0006beae) cell_cmail_l_pane_t1_ParamLimits

0x0ab6,	// (0x0006beae) cell_cmail_l_pane_t1

0x0acc,	// (0x0006bec4) cell_cmail_l_pane_t2_ParamLimits

0x0acc,	// (0x0006bec4) cell_cmail_l_pane_t2

0x0001,

0xfbfe,	// (0x0007aff6) cell_cmail_l_pane_t_ParamLimits

0xfbfe,	// (0x0007aff6) cell_cmail_l_pane_t

0x1ce5,	// (0x0006d0dd) grid_highlight_pane_cp018_ParamLimits

0x1ce5,	// (0x0006d0dd) grid_highlight_pane_cp018

0x6905,	// (0x00071cfd) main2_pane_ParamLimits

0x6905,	// (0x00071cfd) main2_pane

0x1e77,	// (0x0006d26f) popup_sp_fs_action_menu_bg_pane_g1

0x1e7f,	// (0x0006d277) popup_sp_fs_action_menu_bg_pane_g2

0x1e87,	// (0x0006d27f) popup_sp_fs_action_menu_bg_pane_g3

0x1e8f,	// (0x0006d287) popup_sp_fs_action_menu_bg_pane_g4

0x1e97,	// (0x0006d28f) popup_sp_fs_action_menu_bg_pane_g5

0x1e9f,	// (0x0006d297) popup_sp_fs_action_menu_bg_pane_g6

0x1ea7,	// (0x0006d29f) popup_sp_fs_action_menu_bg_pane_g7

0x1eaf,	// (0x0006d2a7) popup_sp_fs_action_menu_bg_pane_g8

0x1eb7,	// (0x0006d2af) popup_sp_fs_action_menu_bg_pane_g9

0x1ebf,	// (0x0006d2b7) popup_sp_fs_action_menu_bg_pane_g10

0x1ebf,	// (0x0006d2b7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x0007a4f8) popup_sp_fs_action_menu_bg_pane_g

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g3_g1

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g3_g2

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x0007a5a6) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x0007a5a6) list_medium_line_x2_t3_g3_g

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g3_t1

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g3_t2

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x0007a5ad) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x0007a5ad) list_medium_line_x2_t3_g3_t

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g2_g1

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x0007a5b4) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x0007a5b4) list_medium_line_x2_t3_g2_g

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g2_t1

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g2_t2

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x0007a5ad) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x0007a5ad) list_medium_line_x2_t3_g2_t

0x1d4c,	// (0x0006d144) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t4_g4_g1

0x1d4c,	// (0x0006d144) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t4_g4_g2

0x1d4c,	// (0x0006d144) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t4_g4_g3

0x1d4c,	// (0x0006d144) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x0007a5b9) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x0007a5b9) list_medium_line_x2_t4_g4_g

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g4_t1

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g4_t2

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g4_t3

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x0007a5c2) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x0007a5c2) list_medium_line_x2_t4_g4_t

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g4_g1

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g4_g2

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g4_g3

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x0007a5b9) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x0007a5b9) list_medium_line_x2_t2_g4_g

0x1d94,	// (0x0006d18c) list_medium_line_x2_t2_g4_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t2_g4_t1

0x1d94,	// (0x0006d18c) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf231,	// (0x0007a629) list_medium_line_x2_t2_g4_t_ParamLimits

0xf231,	// (0x0007a629) list_medium_line_x2_t2_g4_t

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g3_g1

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g3_g2

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x0007a5a6) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x0007a5a6) list_medium_line_x2_t2_g3_g

0x1d94,	// (0x0006d18c) list_medium_line_x2_t2_g3_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t2_g3_t1

0x1d94,	// (0x0006d18c) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf231,	// (0x0007a629) list_medium_line_x2_t2_g3_t_ParamLimits

0xf231,	// (0x0007a629) list_medium_line_x2_t2_g3_t

0x8765,	// (0x00073b5d) main_sp_fs_list_pane_ParamLimits

0x8765,	// (0x00073b5d) main_sp_fs_list_pane

0x8771,	// (0x00073b69) sp_fs_scroll_pane_ParamLimits

0x8771,	// (0x00073b69) sp_fs_scroll_pane

0x24de,	// (0x0006d8d6) list_medium_line_x2_t3_t1

0x24de,	// (0x0006d8d6) list_medium_line_x2_t3_t2

0x24de,	// (0x0006d8d6) list_medium_line_x2_t3_t3

0x0002,

0xf27c,	// (0x0007a674) list_medium_line_x2_t3_t

0x24de,	// (0x0006d8d6) list_medium_line_x3_t4_t1

0x24de,	// (0x0006d8d6) list_medium_line_x3_t4_t2

0x24de,	// (0x0006d8d6) list_medium_line_x3_t4_t3

0x24de,	// (0x0006d8d6) list_medium_line_x3_t4_t4

0x0003,

0xf283,	// (0x0007a67b) list_medium_line_x3_t4_t

0x24de,	// (0x0006d8d6) list_medium_line_x4_t5_t1

0x24de,	// (0x0006d8d6) list_medium_line_x4_t5_t2

0x24de,	// (0x0006d8d6) list_medium_line_x4_t5_t3

0x24de,	// (0x0006d8d6) list_medium_line_x4_t5_t4

0x24de,	// (0x0006d8d6) list_medium_line_x4_t5_t5

0x0004,

0xf28c,	// (0x0007a684) list_medium_line_x4_t5_t

0x1d4c,	// (0x0006d144) list_medium_line_t4_g4_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t4_g4_g1

0x1d4c,	// (0x0006d144) list_medium_line_t4_g4_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t4_g4_g2

0x1d4c,	// (0x0006d144) list_medium_line_t4_g4_g3_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t4_g4_g3

0x1d4c,	// (0x0006d144) list_medium_line_t4_g4_g4_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x0007a5b9) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x0007a5b9) list_medium_line_t4_g4_g

0x1d94,	// (0x0006d18c) list_medium_line_t4_g4_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t4_g4_t1

0x1d94,	// (0x0006d18c) list_medium_line_t4_g4_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t4_g4_t2

0x1d94,	// (0x0006d18c) list_medium_line_t4_g4_t3_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t4_g4_t3

0x1d94,	// (0x0006d18c) list_medium_line_t4_g4_t4_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x0007a5c2) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x0007a5c2) list_medium_line_t4_g4_t

0x8864,	// (0x00073c5c) chi_dic_find_pane_g1

0x9450,	// (0x00074848) main_tport_pane

0x24de,	// (0x0006d8d6) list_medium_line_plain_t1

0x1d4c,	// (0x0006d144) list_medium_line_t2_g2_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t2_g2_g1

0x1d4c,	// (0x0006d144) list_medium_line_t2_g2_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x0007a5b4) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x0007a5b4) list_medium_line_t2_g2_g

0x1d94,	// (0x0006d18c) list_medium_line_t2_g2_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t2_g2_t1

0x1d94,	// (0x0006d18c) list_medium_line_t2_g2_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t2_g2_t2

0x0001,

0xf231,	// (0x0007a629) list_medium_line_t2_g2_t_ParamLimits

0xf231,	// (0x0007a629) list_medium_line_t2_g2_t

0x5f9a,	// (0x00071392) aid_sp_fs_list_icon_a_sm

0xbc9d,	// (0x00077095) aid_sp_fs_list_icon_d

0x5fa2,	// (0x0007139a) aid_sp_fs_text_primary

0xed33,	// (0x0007a12b) aid_sp_fs_text_secondary

0x163d,	// (0x0006ca35) list_medium_line

0x163d,	// (0x0006ca35) list_medium_line_g2

0x163d,	// (0x0006ca35) list_medium_line_g3

0x163d,	// (0x0006ca35) list_medium_line_plain

0x163d,	// (0x0006ca35) list_medium_line_plain_t2

0x163d,	// (0x0006ca35) list_medium_line_plain_t3

0x163d,	// (0x0006ca35) list_medium_line_right_icon

0x163d,	// (0x0006ca35) list_medium_line_right_iconx2

0x163d,	// (0x0006ca35) list_medium_line_t2

0x163d,	// (0x0006ca35) list_medium_line_t2_g2

0x163d,	// (0x0006ca35) list_medium_line_t2_g3

0x163d,	// (0x0006ca35) list_medium_line_t2_right_icon

0x163d,	// (0x0006ca35) list_medium_line_t2_right_iconx2

0x163d,	// (0x0006ca35) list_medium_line_t3

0x163d,	// (0x0006ca35) list_medium_line_t3_g2

0x163d,	// (0x0006ca35) list_medium_line_t3_g3

0x163d,	// (0x0006ca35) list_medium_line_t3_right_iconx2

0x163d,	// (0x0006ca35) list_medium_line_t4_g4

0x163d,	// (0x0006ca35) list_medium_line_x2

0x163d,	// (0x0006ca35) list_medium_line_x2_t2_g2

0x163d,	// (0x0006ca35) list_medium_line_x2_t2_g3

0x163d,	// (0x0006ca35) list_medium_line_x2_t2_g4

0x163d,	// (0x0006ca35) list_medium_line_x2_t3

0x163d,	// (0x0006ca35) list_medium_line_x2_t3_g2

0x163d,	// (0x0006ca35) list_medium_line_x2_t3_g3

0x163d,	// (0x0006ca35) list_medium_line_x2_t3_g4

0x163d,	// (0x0006ca35) list_medium_line_x2_t4_g2

0x163d,	// (0x0006ca35) list_medium_line_x2_t4_g4

0x163d,	// (0x0006ca35) list_medium_line_x3

0x163d,	// (0x0006ca35) list_medium_line_x3_t4

0x163d,	// (0x0006ca35) list_medium_line_x3_t4_g4

0x163d,	// (0x0006ca35) list_medium_line_x4_t4

0x163d,	// (0x0006ca35) list_medium_line_x4_t4_g7

0x163d,	// (0x0006ca35) list_medium_line_x4_t5

0x5fab,	// (0x000713a3) list_single_fs_dyc_pane_ParamLimits

0x5fab,	// (0x000713a3) list_single_fs_dyc_pane

0x1d4c,	// (0x0006d144) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x4_t4_g7_g1

0x1d4c,	// (0x0006d144) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x4_t4_g7_g2

0x1d4c,	// (0x0006d144) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x4_t4_g7_g3

0x1d4c,	// (0x0006d144) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x4_t4_g7_g4

0x1d4c,	// (0x0006d144) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x4_t4_g7_g5

0x1d4c,	// (0x0006d144) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x4_t4_g7_g6

0x1d5a,	// (0x0006d152) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1d5a,	// (0x0006d152) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb06,	// (0x0007aefe) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb06,	// (0x0007aefe) list_medium_line_x4_t4_g7_g

0x1d94,	// (0x0006d18c) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x4_t4_g7_t1

0x1d94,	// (0x0006d18c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x4_t4_g7_t2

0x1d94,	// (0x0006d18c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x4_t4_g7_t3

0x1da8,	// (0x0006d1a0) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1da8,	// (0x0006d1a0) list_medium_line_x4_t4_g7_t4

0x1da8,	// (0x0006d1a0) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1da8,	// (0x0006d1a0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb15,	// (0x0007af0d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb15,	// (0x0007af0d) list_medium_line_x4_t4_g7_t

0x5fe3,	// (0x000713db) list_single_dyc_row_pane_ParamLimits

0x5fe3,	// (0x000713db) list_single_dyc_row_pane

0xc861,	// (0x00077c59) call5_gesture_pane_ParamLimits

0xc861,	// (0x00077c59) call5_gesture_pane

0xc895,	// (0x00077c8d) call5_windows_pane_ParamLimits

0xc895,	// (0x00077c8d) call5_windows_pane

0xc8e8,	// (0x00077ce0) call5_swipe_1_pane_cp_ParamLimits

0xc8e8,	// (0x00077ce0) call5_swipe_1_pane_cp

0xc8f4,	// (0x00077cec) call5_swipe_2_pane_cp_ParamLimits

0xc8f4,	// (0x00077cec) call5_swipe_2_pane_cp

0x1f9a,	// (0x0006d392) call5_image_pane_cp

0xc900,	// (0x00077cf8) popup_call5_audio_first_window_cp_ParamLimits

0xc900,	// (0x00077cf8) popup_call5_audio_first_window_cp

0x0ae9,	// (0x0006bee1) call5_swipe_1_pane_g1_cp_ParamLimits

0x0ae9,	// (0x0006bee1) call5_swipe_1_pane_g1_cp

0x0af6,	// (0x0006beee) call5_swipe_1_pane_g2_cp

0x0afe,	// (0x0006bef6) call5_swipe_1_pane_t1_cp_ParamLimits

0x0afe,	// (0x0006bef6) call5_swipe_1_pane_t1_cp

0x0ae9,	// (0x0006bee1) call5_swipe_2_pane_g1_cp_ParamLimits

0x0ae9,	// (0x0006bee1) call5_swipe_2_pane_g1_cp

0x0b13,	// (0x0006bf0b) call5_swipe_2_pane_g2_cp

0x0b1b,	// (0x0006bf13) call5_swipe_2_pane_t1_cp_ParamLimits

0x0b1b,	// (0x0006bf13) call5_swipe_2_pane_t1_cp

0x1ce5,	// (0x0006d0dd) main_sp_fs_email_pane

0x0b30,	// (0x0006bf28) main_sp_fs_listscroll_pane_te

0xc90e,	// (0x00077d06) popup_sp_fs_action_menu_pane_ParamLimits

0xc90e,	// (0x00077d06) popup_sp_fs_action_menu_pane

0x1d8a,	// (0x0006d182) bg_sp_fs_ctrlbar_pane_g1

0x0b39,	// (0x0006bf31) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x0b42,	// (0x0006bf3a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x413f,	// (0x0006f537) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1d8a,	// (0x0006d182) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc03,	// (0x0007affb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x4378,	// (0x0006f770) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x4378,	// (0x0006f770) bg_sp_fs_ctrlbar_ddmenu_pane

0x0b4b,	// (0x0006bf43) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x0b4b,	// (0x0006bf43) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x0b57,	// (0x0006bf4f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x0b57,	// (0x0006bf4f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc0c,	// (0x0007b004) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc0c,	// (0x0007b004) main_sp_fs_ctrlbar_ddmenu_pane_g

0x0b63,	// (0x0006bf5b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x0b63,	// (0x0006bf5b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x1d8a,	// (0x0006d182) list_medium_line_t2_right_icon_g1

0x24de,	// (0x0006d8d6) list_medium_line_t2_right_icon_t1

0x24de,	// (0x0006d8d6) list_medium_line_t2_right_icon_t2

0x0001,

0xfc11,	// (0x0007b009) list_medium_line_t2_right_icon_t

0x2e9f,	// (0x0006e297) bg_sp_fs_ctrlbar_pane_ParamLimits

0x2e9f,	// (0x0006e297) bg_sp_fs_ctrlbar_pane

0xc995,	// (0x00077d8d) main_sp_fs_ctrlbar_button_pane_cp01

0xc99d,	// (0x00077d95) main_sp_fs_ctrlbar_ddmenu_pane

0x0bb5,	// (0x0006bfad) main_sp_fs_ctrlbar_pane_g1

0x0bc1,	// (0x0006bfb9) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc16,	// (0x0007b00e) main_sp_fs_ctrlbar_pane_g

0xc9d9,	// (0x00077dd1) main_sp_fs_ctrlbar_pane_t1

0xca14,	// (0x00077e0c) main_sp_fs_ctrlbar_pane

0xca2a,	// (0x00077e22) main_sp_fs_listscroll_pane_te_cp01

0x608f,	// (0x00071487) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x608f,	// (0x00071487) popup_sp_fs_action_menu_pane_cp01

0x1ce5,	// (0x0006d0dd) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_sp_fs_highlight_list_pane_cp01

0x60af,	// (0x000714a7) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x60af,	// (0x000714a7) sp_fs_action_menu_list_gene_pane_g1

0x0be8,	// (0x0006bfe0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x0be8,	// (0x0006bfe0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc24,	// (0x0007b01c) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc24,	// (0x0007b01c) sp_fs_action_menu_list_gene_pane_g

0x60be,	// (0x000714b6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x60be,	// (0x000714b6) sp_fs_action_menu_list_gene_pane_t1

0x60d6,	// (0x000714ce) sp_fs_action_menu_list_gene_pane_ParamLimits

0x60d6,	// (0x000714ce) sp_fs_action_menu_list_gene_pane

0x0bf5,	// (0x0006bfed) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x0bf5,	// (0x0006bfed) popup_sp_fs_action_menu_bg_pane

0x60f5,	// (0x000714ed) sp_fs_action_menu_list_pane_ParamLimits

0x60f5,	// (0x000714ed) sp_fs_action_menu_list_pane

0xca45,	// (0x00077e3d) sp_fs_scroll_pane_cp01_ParamLimits

0xca45,	// (0x00077e3d) sp_fs_scroll_pane_cp01

0x24de,	// (0x0006d8d6) list_medium_line_plain_t2_t1

0x24de,	// (0x0006d8d6) list_medium_line_plain_t2_t2

0x0001,

0xfc11,	// (0x0007b009) list_medium_line_plain_t2_t

0x24de,	// (0x0006d8d6) list_medium_line_plain_t3_t1

0x24de,	// (0x0006d8d6) list_medium_line_plain_t3_t2

0x24de,	// (0x0006d8d6) list_medium_line_plain_t3_t3

0x0002,

0xf27c,	// (0x0007a674) list_medium_line_plain_t3_t

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g2_g1

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x0007a5b4) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x0007a5b4) list_medium_line_x2_t2_g2_g

0x1d94,	// (0x0006d18c) list_medium_line_x2_t2_g2_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t2_g2_t1

0x1d94,	// (0x0006d18c) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t2_g2_t2

0x0001,

0xf231,	// (0x0007a629) list_medium_line_x2_t2_g2_t_ParamLimits

0xf231,	// (0x0007a629) list_medium_line_x2_t2_g2_t

0x1d4c,	// (0x0006d144) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t4_g2_g1

0x1d4c,	// (0x0006d144) list_medium_line_x2_t4_g2_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x0007a5b4) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x0007a5b4) list_medium_line_x2_t4_g2_g

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g2_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g2_t1

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g2_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g2_t2

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g2_t3_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g2_t3

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x0007a5c2) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x0007a5c2) list_medium_line_x2_t4_g2_t

0x1d8a,	// (0x0006d182) list_medium_line_t3_right_iconx2_g1

0x1d8a,	// (0x0006d182) list_medium_line_t3_right_iconx2_g2

0x1d8a,	// (0x0006d182) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf398,	// (0x0007a790) list_medium_line_t3_right_iconx2_g

0x24de,	// (0x0006d8d6) list_medium_line_t3_right_iconx2_t1

0x24de,	// (0x0006d8d6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc11,	// (0x0007b009) list_medium_line_t3_right_iconx2_t

0x1d4c,	// (0x0006d144) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x3_t4_g4_g1

0x1d4c,	// (0x0006d144) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x3_t4_g4_g2

0x1d4c,	// (0x0006d144) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x3_t4_g4_g3

0x1d4c,	// (0x0006d144) list_medium_line_x3_t4_g4_g4_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x0007a5b9) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x0007a5b9) list_medium_line_x3_t4_g4_g

0x1d94,	// (0x0006d18c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x3_t4_g4_t1

0x1d94,	// (0x0006d18c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x3_t4_g4_t2

0x1d94,	// (0x0006d18c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x3_t4_g4_t3

0x1d94,	// (0x0006d18c) list_medium_line_x3_t4_g4_t4_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x0007a5c2) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x0007a5c2) list_medium_line_x3_t4_g4_t

0x6115,	// (0x0007150d) list_single_dyc_row_text_pane_t1_ParamLimits

0x6115,	// (0x0007150d) list_single_dyc_row_text_pane_t1

0x614c,	// (0x00071544) list_single_dyc_row_text_pane_t2_ParamLimits

0x614c,	// (0x00071544) list_single_dyc_row_text_pane_t2

0x61c2,	// (0x000715ba) list_single_dyc_row_text_pane_t3_ParamLimits

0x61c2,	// (0x000715ba) list_single_dyc_row_text_pane_t3

0x0005,

0xfc29,	// (0x0007b021) list_single_dyc_row_text_pane_t_ParamLimits

0xfc29,	// (0x0007b021) list_single_dyc_row_text_pane_t

0x6293,	// (0x0007168b) list_single_dyc_row_pane_g1_ParamLimits

0x6293,	// (0x0007168b) list_single_dyc_row_pane_g1

0x629f,	// (0x00071697) list_single_dyc_row_pane_g2_ParamLimits

0x629f,	// (0x00071697) list_single_dyc_row_pane_g2

0x62ab,	// (0x000716a3) list_single_dyc_row_pane_g3_ParamLimits

0x62ab,	// (0x000716a3) list_single_dyc_row_pane_g3

0x62b7,	// (0x000716af) list_single_dyc_row_pane_g4_ParamLimits

0x62b7,	// (0x000716af) list_single_dyc_row_pane_g4

0x0003,

0xfc36,	// (0x0007b02e) list_single_dyc_row_pane_g_ParamLimits

0xfc36,	// (0x0007b02e) list_single_dyc_row_pane_g

0x62c3,	// (0x000716bb) list_single_dyc_row_text_pane_ParamLimits

0x62c3,	// (0x000716bb) list_single_dyc_row_text_pane

0x163d,	// (0x0006ca35) bg_sp_fs_scroll_pane

0x0c03,	// (0x0006bffb) thumb_sp_fs_scroll_pane

0x1d4c,	// (0x0006d144) list_medium_line_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_g1

0x1d94,	// (0x0006d18c) list_medium_line_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t1

0x1d4c,	// (0x0006d144) list_medium_line_x2_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_g1

0x1d4c,	// (0x0006d144) list_medium_line_x2_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x0007a5b4) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x0007a5b4) list_medium_line_x2_g

0x1d94,	// (0x0006d18c) list_medium_line_x2_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t1

0x1d4c,	// (0x0006d144) list_medium_line_x3_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x3_g1

0x0142,	// (0x0006b53a) list_medium_line_x3_g2_ParamLimits

0x0142,	// (0x0006b53a) list_medium_line_x3_g2

0x0001,

0xfc3f,	// (0x0007b037) list_medium_line_x3_g_ParamLimits

0xfc3f,	// (0x0007b037) list_medium_line_x3_g

0x0c0c,	// (0x0006c004) list_medium_line_x3_t1_ParamLimits

0x0c0c,	// (0x0006c004) list_medium_line_x3_t1

0x0c20,	// (0x0006c018) thumb_sp_fs_scroll_pane_g1

0x0c29,	// (0x0006c021) thumb_sp_fs_scroll_pane_g2

0x0c32,	// (0x0006c02a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc44,	// (0x0007b03c) thumb_sp_fs_scroll_pane_g

0x0c20,	// (0x0006c018) bg_sp_fs_scroll_pane_g1

0x0c29,	// (0x0006c021) bg_sp_fs_scroll_pane_g2

0x0c32,	// (0x0006c02a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc44,	// (0x0007b03c) bg_sp_fs_scroll_pane_g

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g4_g1

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g4_g2

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g4_g3

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x0007a5b9) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x0007a5b9) list_medium_line_x2_t3_g4_g

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g4_t1

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g4_t2

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x0007a5ad) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x0007a5ad) list_medium_line_x2_t3_g4_t

0x1d4c,	// (0x0006d144) list_medium_line_g2_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_g2_g1

0x1d4c,	// (0x0006d144) list_medium_line_g2_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x0007a5b4) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x0007a5b4) list_medium_line_g2_g

0x1d94,	// (0x0006d18c) list_medium_line_g2_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_g2_t1

0x1d4c,	// (0x0006d144) list_medium_line_t3_g2_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t3_g2_g1

0x1d4c,	// (0x0006d144) list_medium_line_t3_g2_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x0007a5b4) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x0007a5b4) list_medium_line_t3_g2_g

0x1d94,	// (0x0006d18c) list_medium_line_t3_g2_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t3_g2_t1

0x1d94,	// (0x0006d18c) list_medium_line_t3_g2_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t3_g2_t2

0x1d94,	// (0x0006d18c) list_medium_line_t3_g2_t3_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x0007a5ad) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x0007a5ad) list_medium_line_t3_g2_t

0x1d8a,	// (0x0006d182) list_medium_line_right_icon_g1

0x24de,	// (0x0006d8d6) list_medium_line_right_icon_t1

0x1d4c,	// (0x0006d144) list_medium_line_t2_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t2_g1

0x1d94,	// (0x0006d18c) list_medium_line_t2_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t2_t1

0x1d94,	// (0x0006d18c) list_medium_line_t2_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t2_t2

0x0001,

0xf231,	// (0x0007a629) list_medium_line_t2_t_ParamLimits

0xf231,	// (0x0007a629) list_medium_line_t2_t

0x1d4c,	// (0x0006d144) list_medium_line_t3_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t3_g1

0x1d94,	// (0x0006d18c) list_medium_line_t3_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t3_t1

0x1d94,	// (0x0006d18c) list_medium_line_t3_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t3_t2

0x1d94,	// (0x0006d18c) list_medium_line_t3_t3_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x0007a5ad) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x0007a5ad) list_medium_line_t3_t

0x1d4c,	// (0x0006d144) list_medium_line_g3_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_g3_g1

0x1d4c,	// (0x0006d144) list_medium_line_g3_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_g3_g2

0x1d4c,	// (0x0006d144) list_medium_line_g3_g3_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x0007a5a6) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x0007a5a6) list_medium_line_g3_g

0x1d94,	// (0x0006d18c) list_medium_line_g3_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_g3_t1

0x1d4c,	// (0x0006d144) list_medium_line_t2_g3_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t2_g3_g1

0x1d4c,	// (0x0006d144) list_medium_line_t2_g3_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t2_g3_g2

0x1d4c,	// (0x0006d144) list_medium_line_t2_g3_g3_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x0007a5a6) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x0007a5a6) list_medium_line_t2_g3_g

0x1d94,	// (0x0006d18c) list_medium_line_t2_g3_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t2_g3_t1

0x1d94,	// (0x0006d18c) list_medium_line_t2_g3_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t2_g3_t2

0x0001,

0xf231,	// (0x0007a629) list_medium_line_t2_g3_t_ParamLimits

0xf231,	// (0x0007a629) list_medium_line_t2_g3_t

0x1d4c,	// (0x0006d144) list_medium_line_t3_g3_g1_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t3_g3_g1

0x1d4c,	// (0x0006d144) list_medium_line_t3_g3_g2_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t3_g3_g2

0x1d4c,	// (0x0006d144) list_medium_line_t3_g3_g3_ParamLimits

0x1d4c,	// (0x0006d144) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x0007a5a6) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x0007a5a6) list_medium_line_t3_g3_g

0x1d94,	// (0x0006d18c) list_medium_line_t3_g3_t1_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t3_g3_t1

0x1d94,	// (0x0006d18c) list_medium_line_t3_g3_t2_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t3_g3_t2

0x1d94,	// (0x0006d18c) list_medium_line_t3_g3_t3_ParamLimits

0x1d94,	// (0x0006d18c) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x0007a5ad) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x0007a5ad) list_medium_line_t3_g3_t

0x1d8a,	// (0x0006d182) list_medium_line_right_iconx2_g1

0x1d8a,	// (0x0006d182) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x0007a4a7) list_medium_line_right_iconx2_g

0x24de,	// (0x0006d8d6) list_medium_line_right_iconx2_t1

0x1d8a,	// (0x0006d182) list_medium_line_t2_right_iconx2_g1

0x1d8a,	// (0x0006d182) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x0007a4a7) list_medium_line_t2_right_iconx2_g

0x24de,	// (0x0006d8d6) list_medium_line_t2_right_iconx2_t1

0x24de,	// (0x0006d8d6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc11,	// (0x0007b009) list_medium_line_t2_right_iconx2_t

0x24de,	// (0x0006d8d6) list_medium_line_x4_t4_t1

0x24de,	// (0x0006d8d6) list_medium_line_x4_t4_t2

0x24de,	// (0x0006d8d6) list_medium_line_x4_t4_t3

0x24de,	// (0x0006d8d6) list_medium_line_x4_t4_t4

0x0003,

0xf283,	// (0x0007a67b) list_medium_line_x4_t4_t

0xca95,	// (0x00077e8d) tport_appsw_pane_ParamLimits

0xca95,	// (0x00077e8d) tport_appsw_pane

0xcaa3,	// (0x00077e9b) tport_contact_pane_ParamLimits

0xcaa3,	// (0x00077e9b) tport_contact_pane

0xcab3,	// (0x00077eab) tport_listscroll_pane_ParamLimits

0xcab3,	// (0x00077eab) tport_listscroll_pane

0xcac3,	// (0x00077ebb) cell_tport_appsw_pane_ParamLimits

0xcac3,	// (0x00077ebb) cell_tport_appsw_pane

0x1d5a,	// (0x0006d152) tport_appsw_pane_g1_ParamLimits

0x1d5a,	// (0x0006d152) tport_appsw_pane_g1

0x0c3b,	// (0x0006c033) tport_contact_pane_g1

0x0c44,	// (0x0006c03c) tport_contact_pane_t1

0x0c52,	// (0x0006c04a) tport_contact_pane_t2

0x0001,

0xfc4b,	// (0x0007b043) tport_contact_pane_t

0x0c60,	// (0x0006c058) list_tport_pane

0x0c69,	// (0x0006c061) scroll_pane_cp_030

0xcaf6,	// (0x00077eee) cell_tport_appsw_pane_g1

0xcb06,	// (0x00077efe) cell_tport_appsw_pane_t1

0xcb14,	// (0x00077f0c) grid_highlight_pane_cp019

0xcb1c,	// (0x00077f14) list_tport_double_graphic_pane_ParamLimits

0xcb1c,	// (0x00077f14) list_tport_double_graphic_pane

0x1ce5,	// (0x0006d0dd) list_highlight_pane_cp023_ParamLimits

0x1ce5,	// (0x0006d0dd) list_highlight_pane_cp023

0xcb2d,	// (0x00077f25) list_tport_double_graphic_pane_g1_ParamLimits

0xcb2d,	// (0x00077f25) list_tport_double_graphic_pane_g1

0xcb3a,	// (0x00077f32) list_tport_double_graphic_pane_t1_ParamLimits

0xcb3a,	// (0x00077f32) list_tport_double_graphic_pane_t1

0xcb4f,	// (0x00077f47) list_tport_double_graphic_pane_t2_ParamLimits

0xcb4f,	// (0x00077f47) list_tport_double_graphic_pane_t2

0x0001,

0xfc57,	// (0x0007b04f) list_tport_double_graphic_pane_t_ParamLimits

0xfc57,	// (0x0007b04f) list_tport_double_graphic_pane_t

0x163d,	// (0x0006ca35) main_cale_note_pane

0xafcc,	// (0x000763c4) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xafcc,	// (0x000763c4) cell_vitu2_function_top_wide_pane_cp01

0xc76d,	// (0x00077b65) wait_bar_pane_cp05_ParamLimits

0x1ce5,	// (0x0006d0dd) listscroll_cmail_pane

0x0c7a,	// (0x0006c072) list_cmail_pane

0xcb61,	// (0x00077f59) list_cmail_body_pane

0xcb89,	// (0x00077f81) list_single_cmail_header_caption_pane

0xcbb8,	// (0x00077fb0) list_single_cmail_header_detail_pane_ParamLimits

0xcbb8,	// (0x00077fb0) list_single_cmail_header_detail_pane

0x0c91,	// (0x0006c089) list_single_cmail_header_caption_pane_t1

0x62e2,	// (0x000716da) list_single_cmail_header_detail_pane_g1_ParamLimits

0x62e2,	// (0x000716da) list_single_cmail_header_detail_pane_g1

0xcbf5,	// (0x00077fed) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcbf5,	// (0x00077fed) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc5c,	// (0x0007b054) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc5c,	// (0x0007b054) list_single_cmail_header_detail_pane_g

0x62f8,	// (0x000716f0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x62f8,	// (0x000716f0) list_single_cmail_header_detail_pane_t1

0x6358,	// (0x00071750) list_single_cmail_header_editor_pane_bg_ParamLimits

0x6358,	// (0x00071750) list_single_cmail_header_editor_pane_bg

0x0781,	// (0x0006bb79) list_cmail_body_pane_g1

0x0cb5,	// (0x0006c0ad) list_cmail_body_pane_t1

0xe84c,	// (0x00079c44) list_single_cmail_header_editor_pane_bg_g1

0x21b3,	// (0x0006d5ab) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe85c,	// (0x00079c54) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe854,	// (0x00079c4c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xeabb,	// (0x00079eb3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe87c,	// (0x00079c74) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe86c,	// (0x00079c64) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe874,	// (0x00079c6c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x2193,	// (0x0006d58b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcc01,	// (0x00077ff9) calenote_gesture_pane_ParamLimits

0xcc01,	// (0x00077ff9) calenote_gesture_pane

0xcc1b,	// (0x00078013) calenote_window_pane_ParamLimits

0xcc1b,	// (0x00078013) calenote_window_pane

0x0cc3,	// (0x0006c0bb) popup_note_window_cp01

0xcc33,	// (0x0007802b) calenote_swipe_1_pane_ParamLimits

0xcc33,	// (0x0007802b) calenote_swipe_1_pane

0xc8f4,	// (0x00077cec) calenote_swipe_2_pane_ParamLimits

0xc8f4,	// (0x00077cec) calenote_swipe_2_pane

0x0ae9,	// (0x0006bee1) calenote_swipe_1_pane_g1_ParamLimits

0x0ae9,	// (0x0006bee1) calenote_swipe_1_pane_g1

0x0cd5,	// (0x0006c0cd) calenote_swipe_1_pane_g2_ParamLimits

0x0cd5,	// (0x0006c0cd) calenote_swipe_1_pane_g2

0x0001,

0xfc68,	// (0x0007b060) calenote_swipe_1_pane_g_ParamLimits

0xfc68,	// (0x0007b060) calenote_swipe_1_pane_g

0x0ce1,	// (0x0006c0d9) calenote_swipe_1_pane_t1_ParamLimits

0x0ce1,	// (0x0006c0d9) calenote_swipe_1_pane_t1

0x0ae9,	// (0x0006bee1) calenote_swipe_2_pane_g1_ParamLimits

0x0ae9,	// (0x0006bee1) calenote_swipe_2_pane_g1

0x0d00,	// (0x0006c0f8) calenote_swipe_2_pane_g2_ParamLimits

0x0d00,	// (0x0006c0f8) calenote_swipe_2_pane_g2

0x0001,

0xfc6d,	// (0x0007b065) calenote_swipe_2_pane_g_ParamLimits

0xfc6d,	// (0x0007b065) calenote_swipe_2_pane_g

0x0d0c,	// (0x0006c104) calenote_swipe_2_pane_t1_ParamLimits

0x0d0c,	// (0x0006c104) calenote_swipe_2_pane_t1

0x163d,	// (0x0006ca35) main_mup_navstr_pane

0x9e99,	// (0x00075291) main_mup3_pane_t7_ParamLimits

0x9e99,	// (0x00075291) main_mup3_pane_t7

0xa6ce,	// (0x00075ac6) main_mp4_pane_g6_ParamLimits

0xa6ce,	// (0x00075ac6) main_mp4_pane_g6

0xaa1d,	// (0x00075e15) main_image3_pane_t4_ParamLimits

0xaa1d,	// (0x00075e15) main_image3_pane_t4

0xcc46,	// (0x0007803e) popup_navstr_preview_pane_ParamLimits

0xcc46,	// (0x0007803e) popup_navstr_preview_pane

0xcc52,	// (0x0007804a) scroll_navstr_pane_ParamLimits

0xcc52,	// (0x0007804a) scroll_navstr_pane

0x163d,	// (0x0006ca35) bg_popup_preview_window_pane_cp04

0x0d33,	// (0x0006c12b) popup_navstr_preview_pane_t1

0xcc5e,	// (0x00078056) scroll_navstr_pane_g1_ParamLimits

0xcc5e,	// (0x00078056) scroll_navstr_pane_g1

0xcc6b,	// (0x00078063) scroll_navstr_pane_t1_ParamLimits

0xcc6b,	// (0x00078063) scroll_navstr_pane_t1

0x0ccc,	// (0x0006c0c4) bg_button_pane_cp014

0x0ccc,	// (0x0006c0c4) bg_button_pane_cp030

0x6035,	// (0x0007142d) list_double_fisheye_pane_g4_ParamLimits

0x6035,	// (0x0007142d) list_double_fisheye_pane_g4

0x6041,	// (0x00071439) list_double_fisheye_pane_g5_ParamLimits

0x6041,	// (0x00071439) list_double_fisheye_pane_g5

0xf034,	// (0x0007a42c) sp_fs_scroll_pane_cp03

0x0bb5,	// (0x0006bfad) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x0bc1,	// (0x0006bfb9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc16,	// (0x0007b00e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc9d9,	// (0x00077dd1) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x0c89,	// (0x0006c081) sp_fs_scroll_pane_cp02

0x1ee2,	// (0x0006d2da) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1ee2,	// (0x0006d2da) popup_sp_fs_calendar_preview_list_single_pane

0x163d,	// (0x0006ca35) main_cam6_pano_pane

0x1ce5,	// (0x0006d0dd) main_mup3_pane_ParamLimits

0x163d,	// (0x0006ca35) main_phacti_pane

0xc642,	// (0x00077a3a) bg_button_pane_cp11

0xc65a,	// (0x00077a52) main_mobtv_info_pane_g2_ParamLimits

0xc65a,	// (0x00077a52) main_mobtv_info_pane_g2

0x0001,

0xfb76,	// (0x0007af6e) main_mobtv_info_pane_g_ParamLimits

0xfb76,	// (0x0007af6e) main_mobtv_info_pane_g

0x1da8,	// (0x0006d1a0) sc_clock_pane_t5_ParamLimits

0x1da8,	// (0x0006d1a0) sc_clock_pane_t5

0x2e7d,	// (0x0006e275) main_radioblah_pane_g1_ParamLimits

0x2e8b,	// (0x0006e283) main_radioblah_pane_t3_ParamLimits

0x2e8b,	// (0x0006e283) main_radioblah_pane_t3

0x2e8b,	// (0x0006e283) main_radioblah_pane_t4_ParamLimits

0x2e8b,	// (0x0006e283) main_radioblah_pane_t4

0x1d3e,	// (0x0006d136) main_radioblah_text_pane_ParamLimits

0x1d3e,	// (0x0006d136) main_radioblah_text_pane

0x09c6,	// (0x0006bdbe) main_radioblah_info_pane_g1_ParamLimits

0x0a0a,	// (0x0006be02) main_radioblah_info_pane_t4_ParamLimits

0x0a0a,	// (0x0006be02) main_radioblah_info_pane_t4

0x1ce5,	// (0x0006d0dd) main_sp_fs_calendar_pane

0xcc7d,	// (0x00078075) main_phacti_pane_g1

0xcc85,	// (0x0007807d) phacti_note_pane_ParamLimits

0xcc85,	// (0x0007807d) phacti_note_pane

0x0d4a,	// (0x0006c142) phacti_term_pane_ParamLimits

0x0d4a,	// (0x0006c142) phacti_term_pane

0x0d5f,	// (0x0006c157) phacti_note_pane_t1_ParamLimits

0x0d5f,	// (0x0006c157) phacti_note_pane_t1

0x636f,	// (0x00071767) phacti_term_pane_g1

0x6377,	// (0x0007176f) phacti_term_pane_t1_ParamLimits

0x6377,	// (0x0007176f) phacti_term_pane_t1

0x0d76,	// (0x0006c16e) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0d7e,	// (0x0006c176) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc77,	// (0x0007b06f) popup_sp_fs_calendar_preview_list_single_pane_g

0x0d86,	// (0x0006c17e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x0d86,	// (0x0006c17e) popup_sp_fs_calendar_preview_list_single_pane_t1

0x0d9c,	// (0x0006c194) aid_popup_sp_fs_bg_corner_pane

0x1d8a,	// (0x0006d182) popup_sp_fs_calendar_preview_bg_pane_g1

0x163d,	// (0x0006ca35) popup_sp_fs_calendar_preview_bg_pane

0x0da4,	// (0x0006c19c) popup_sp_fs_calendar_preview_list_pane

0x2e9f,	// (0x0006e297) bg_main_sp_fs_cale_pane_ParamLimits

0x2e9f,	// (0x0006e297) bg_main_sp_fs_cale_pane

0x63aa,	// (0x000717a2) listscroll_cale_mrui_pane_ParamLimits

0x63aa,	// (0x000717a2) listscroll_cale_mrui_pane

0x63bf,	// (0x000717b7) listscroll_sp_fs_schedule_track_pane

0x63c8,	// (0x000717c0) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x63c8,	// (0x000717c0) main_sp_fs_ctrlbar_pane_cp01

0x0dac,	// (0x0006c1a4) main_sp_fs_ribbon_pane

0x63db,	// (0x000717d3) popup_sp_fs_cale_preview_window

0xcce8,	// (0x000780e0) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcce8,	// (0x000780e0) list_single_sp_fs_schedule_track_pane

0x1d3e,	// (0x0006d136) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x1d3e,	// (0x0006d136) bg_sp_fs_highlight_list_pane_cp03

0xcd0e,	// (0x00078106) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcd0e,	// (0x00078106) list_single_sp_fs_schedule_track_pane_g1

0xcd1a,	// (0x00078112) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcd1a,	// (0x00078112) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7c,	// (0x0007b074) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7c,	// (0x0007b074) list_single_sp_fs_schedule_track_pane_g

0xcd26,	// (0x0007811e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcd26,	// (0x0007811e) list_single_sp_fs_schedule_track_pane_t1

0xcd3e,	// (0x00078136) sp_fs_schedule_track_pane_ParamLimits

0xcd3e,	// (0x00078136) sp_fs_schedule_track_pane

0x0db4,	// (0x0006c1ac) sp_fs_schedule_track_pane_g1

0x0dbc,	// (0x0006c1b4) sp_fs_schedule_track_pane_g2

0x0dc4,	// (0x0006c1bc) sp_fs_schedule_track_pane_g3

0x0dcc,	// (0x0006c1c4) sp_fs_schedule_track_pane_g4

0x0dd4,	// (0x0006c1cc) sp_fs_schedule_track_pane_g5

0x0004,

0xfc81,	// (0x0007b079) sp_fs_schedule_track_pane_g

0xe84c,	// (0x00079c44) bg_sp_fs_schedule_viewer_highlight_g1

0x21b3,	// (0x0006d5ab) bg_sp_fs_schedule_viewer_highlight_g2

0xe854,	// (0x00079c4c) bg_sp_fs_schedule_viewer_highlight_g3

0xe85c,	// (0x00079c54) bg_sp_fs_schedule_viewer_highlight_g4

0xeabb,	// (0x00079eb3) bg_sp_fs_schedule_viewer_highlight_g5

0xe86c,	// (0x00079c64) bg_sp_fs_schedule_viewer_highlight_g6

0xe874,	// (0x00079c6c) bg_sp_fs_schedule_viewer_highlight_g7

0xe87c,	// (0x00079c74) bg_sp_fs_schedule_viewer_highlight_g8

0x2193,	// (0x0006d58b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8c,	// (0x0007b084) bg_sp_fs_schedule_viewer_highlight_g

0x163d,	// (0x0006ca35) bg_main_sp_fs_ribbon_pane

0xcd4e,	// (0x00078146) main_sp_fs_ribbon_pane_g1

0x0ddc,	// (0x0006c1d4) main_sp_fs_ribbon_pane_t1

0xcd57,	// (0x0007814f) main_sp_fs_ribbon_pane_t2

0x0deb,	// (0x0006c1e3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc9f,	// (0x0007b097) main_sp_fs_ribbon_pane_t

0x0dfa,	// (0x0006c1f2) main_sp_fs_ribbon_scheduler_pane

0x0e02,	// (0x0006c1fa) bg_main_sp_fs_ribbon_pane_g1

0x0e0b,	// (0x0006c203) bg_main_sp_fs_ribbon_pane_g2

0x0e14,	// (0x0006c20c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca6,	// (0x0007b09e) bg_main_sp_fs_ribbon_pane_g

0x0e1c,	// (0x0006c214) main_sp_fs_ribbon_scheduler_pane_g1

0x0e25,	// (0x0006c21d) main_sp_fs_ribbon_scheduler_pane_g2

0x0e2e,	// (0x0006c226) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcad,	// (0x0007b0a5) main_sp_fs_ribbon_scheduler_pane_g

0x0e37,	// (0x0006c22f) list_cale_mrui_pane

0xcd66,	// (0x0007815e) sp_fs_scroll_pane_cp07_ParamLimits

0xcd66,	// (0x0007815e) sp_fs_scroll_pane_cp07

0xcd82,	// (0x0007817a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcd82,	// (0x0007817a) bg_sp_fs_schedule_viewer_highlight

0x0e44,	// (0x0006c23c) list_single_sp_fs_schedule_track_pane_cp01

0x0e4c,	// (0x0006c244) list_sp_fs_schedule_track_pane

0x0e54,	// (0x0006c24c) sp_fs_scroll_pane_cp06_ParamLimits

0x0e54,	// (0x0006c24c) sp_fs_scroll_pane_cp06

0x1d8a,	// (0x0006d182) bgmain_sp_fs_calendar_pane_g1

0x63ed,	// (0x000717e5) list_single_cale_mrui_pane_ParamLimits

0x63ed,	// (0x000717e5) list_single_cale_mrui_pane

0x641b,	// (0x00071813) list_single_cale_mrui_row_pane_ParamLimits

0x641b,	// (0x00071813) list_single_cale_mrui_row_pane

0x6428,	// (0x00071820) list_single_cale_mrui_row_pane_g1_ParamLimits

0x6428,	// (0x00071820) list_single_cale_mrui_row_pane_g1

0x6460,	// (0x00071858) list_single_cale_mrui_row_pane_t1_ParamLimits

0x6460,	// (0x00071858) list_single_cale_mrui_row_pane_t1

0x6472,	// (0x0007186a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x6472,	// (0x0007186a) list_single_cale_mrui_row_pane_t2

0x64d8,	// (0x000718d0) list_single_cale_mrui_row_pane_t3_ParamLimits

0x64d8,	// (0x000718d0) list_single_cale_mrui_row_pane_t3

0x6507,	// (0x000718ff) list_single_cale_mrui_row_pane_t4_ParamLimits

0x6507,	// (0x000718ff) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbb,	// (0x0007b0b3) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbb,	// (0x0007b0b3) list_single_cale_mrui_row_pane_t

0x6536,	// (0x0007192e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x6536,	// (0x0007192e) list_single_cmail_header_editor_pane_bg_cp01

0x655e,	// (0x00071956) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x655e,	// (0x00071956) list_single_cmail_header_editor_pane_bg_cp02

0x0e73,	// (0x0006c26b) main_radioblah_text_pane_t1_ParamLimits

0x0e73,	// (0x0006c26b) main_radioblah_text_pane_t1

0x0e8d,	// (0x0006c285) cam6_indi_pane_cp01

0x0e95,	// (0x0006c28d) cam6_mode_pane_cp01

0x0e9d,	// (0x0006c295) cam6_pano_pane

0x0ea6,	// (0x0006c29e) cam6_zoom_pane_cp01

0x0eae,	// (0x0006c2a6) cam6_pano_image_pane

0x0eb9,	// (0x0006c2b1) cam6_pano_pane_g1

0x0781,	// (0x0006bb79) cam6_pano_pane_g2

0x0ec2,	// (0x0006c2ba) cam6_pano_pane_g3

0x0ecb,	// (0x0006c2c3) cam6_pano_pane_g4

0x4b89,	// (0x0006ff81) cam6_pano_pane_g5

0x0ed4,	// (0x0006c2cc) cam6_pano_pane_g6

0x0ede,	// (0x0006c2d6) cam6_pano_pane_g7

0x0ee6,	// (0x0006c2de) cam6_pano_pane_g8

0x0eef,	// (0x0006c2e7) cam6_pano_pane_g9

0x0008,

0xfcc4,	// (0x0007b0bc) cam6_pano_pane_g

0x163d,	// (0x0006ca35) main_browser_tag_pane

0x0d2b,	// (0x0006c123) grid_navstr_albumart_pane

0x0efa,	// (0x0006c2f2) cell_navstr_albumart_pane_ParamLimits

0x0efa,	// (0x0006c2f2) cell_navstr_albumart_pane

0x0f1a,	// (0x0006c312) cell_navstr_albumart_pane_g1

0x3fc6,	// (0x0006f3be) cell_navstr_albumart_pane_g2

0x3fd6,	// (0x0006f3ce) cell_navstr_albumart_pane_g3

0x3fce,	// (0x0006f3c6) cell_navstr_albumart_pane_g4

0x0003,

0xfcd7,	// (0x0007b0cf) cell_navstr_albumart_pane_g

0xcd8f,	// (0x00078187) bt_list_pane_ParamLimits

0xcd8f,	// (0x00078187) bt_list_pane

0xcdb0,	// (0x000781a8) bt_list_pane_t1

0xcdbf,	// (0x000781b7) bt_list_pane_t2

0x0001,

0xfce0,	// (0x0007b0d8) bt_list_pane_t

0x163d,	// (0x0006ca35) main_cale_prevew_pane

0xcdce,	// (0x000781c6) popup_cale_preview_window_ParamLimits

0xcdce,	// (0x000781c6) popup_cale_preview_window

0x1ce5,	// (0x0006d0dd) bg_popup_preview_window_pane_cp05_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_popup_preview_window_pane_cp05

0x0f22,	// (0x0006c31a) list_cale_preview_pane_ParamLimits

0x0f22,	// (0x0006c31a) list_cale_preview_pane

0xcde7,	// (0x000781df) list_double_cale_preview_pane_ParamLimits

0xcde7,	// (0x000781df) list_double_cale_preview_pane

0xcdf9,	// (0x000781f1) list_single_cale_preview_pane_ParamLimits

0xcdf9,	// (0x000781f1) list_single_cale_preview_pane

0xce0d,	// (0x00078205) list_single_cale_preview_pane_g1

0xce15,	// (0x0007820d) list_single_cale_preview_pane_t1_ParamLimits

0xce15,	// (0x0007820d) list_single_cale_preview_pane_t1

0xce2a,	// (0x00078222) list_double_cale_preview_pane_g1

0xce32,	// (0x0007822a) list_double_cale_preview_pane_t1_ParamLimits

0xce32,	// (0x0007822a) list_double_cale_preview_pane_t1

0xce47,	// (0x0007823f) list_double_cale_preview_pane_t2_ParamLimits

0xce47,	// (0x0007823f) list_double_cale_preview_pane_t2

0x0001,

0xfce5,	// (0x0007b0dd) list_double_cale_preview_pane_t_ParamLimits

0xfce5,	// (0x0007b0dd) list_double_cale_preview_pane_t

0x163d,	// (0x0006ca35) main_ezdial_pane

0x1ce5,	// (0x0006d0dd) main_sp_fs_email_pane_ParamLimits

0xc952,	// (0x00077d4a) cmail_ddmenu_btn01_pane_ParamLimits

0xc952,	// (0x00077d4a) cmail_ddmenu_btn01_pane

0xc967,	// (0x00077d5f) cmail_ddmenu_btn02_pane_ParamLimits

0xc967,	// (0x00077d5f) cmail_ddmenu_btn02_pane

0xc97f,	// (0x00077d77) cmail_ddmenu_btn03_pane_ParamLimits

0xc97f,	// (0x00077d77) cmail_ddmenu_btn03_pane

0xca14,	// (0x00077e0c) main_sp_fs_ctrlbar_pane_ParamLimits

0xca2a,	// (0x00077e22) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcb61,	// (0x00077f59) list_cmail_body_pane_ParamLimits

0x0c9f,	// (0x0006c097) bg_button_pane_cp12

0x0ca8,	// (0x0006c0a0) list_single_cmail_header_detail_pane_g3_ParamLimits

0x0ca8,	// (0x0006c0a0) list_single_cmail_header_detail_pane_g3

0x6334,	// (0x0007172c) list_single_cmail_header_detail_pane_t2_ParamLimits

0x6334,	// (0x0007172c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc63,	// (0x0007b05b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc63,	// (0x0007b05b) list_single_cmail_header_detail_pane_t

0x638c,	// (0x00071784) phacti_term_pane_t2_ParamLimits

0x638c,	// (0x00071784) phacti_term_pane_t2

0x0001,

0xfc72,	// (0x0007b06a) phacti_term_pane_t_ParamLimits

0xfc72,	// (0x0007b06a) phacti_term_pane_t

0x0f2e,	// (0x0006c326) aid_size_list_single_double

0xce5f,	// (0x00078257) popup_ezdial_listscroll_window

0x0f3a,	// (0x0006c332) popup_number_entry_window_cp01

0x1f9a,	// (0x0006d392) bg_popup_call_pane_cp09

0x0f47,	// (0x0006c33f) ezdial_list_pane

0x0f4f,	// (0x0006c347) scroll_pane_cp23

0x4378,	// (0x0006f770) bg_button_pane_cp028_ParamLimits

0x4378,	// (0x0006f770) bg_button_pane_cp028

0xce78,	// (0x00078270) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xce78,	// (0x00078270) cmail_ddmenu_btn01_pane_g1

0xce88,	// (0x00078280) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xce88,	// (0x00078280) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcea,	// (0x0007b0e2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcea,	// (0x0007b0e2) cmail_ddmenu_btn01_pane_g

0x0f57,	// (0x0006c34f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x0f57,	// (0x0006c34f) cmail_ddmenu_btn01_pane_t1

0x2e9f,	// (0x0006e297) bg_button_pane_cp029_ParamLimits

0x2e9f,	// (0x0006e297) bg_button_pane_cp029

0xce88,	// (0x00078280) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xce88,	// (0x00078280) cmail_ddmenu_btn02_pane_g1

0xcea0,	// (0x00078298) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcea0,	// (0x00078298) cmail_ddmenu_btn02_pane_t1

0x1d3e,	// (0x0006d136) bg_button_pane_cp031_ParamLimits

0x1d3e,	// (0x0006d136) bg_button_pane_cp031

0xce88,	// (0x00078280) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xce88,	// (0x00078280) cmail_ddmenu_btn03_pane_g1

0xcea0,	// (0x00078298) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcea0,	// (0x00078298) cmail_ddmenu_btn03_pane_t1

0x1d94,	// (0x0006d18c) cell_dialer2_keypad_pane_t1_ParamLimits

0x4bb7,	// (0x0006ffaf) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x4bb7,	// (0x0006ffaf) cell_dialer2_keypad_pane_t1_copy1

0xc483,	// (0x0007787b) ncimui_group_button_pane

0x1ce5,	// (0x0006d0dd) main_sp_fs_calendar_pane_ParamLimits

0xcb89,	// (0x00077f81) list_single_cmail_header_caption_pane_ParamLimits

0x63a1,	// (0x00071799) aid_recal_txt_sm_pane

0x163d,	// (0x0006ca35) mian_recal_day_pane

0x63db,	// (0x000717d3) popup_sp_fs_cale_preview_window_ParamLimits

0x0f6c,	// (0x0006c364) list_recal_day_pane

0x6595,	// (0x0007198d) list_single_recal_day_pane_ParamLimits

0x6595,	// (0x0007198d) list_single_recal_day_pane

0x0f93,	// (0x0006c38b) list_single_recal_day_pane_g1_ParamLimits

0x0f93,	// (0x0006c38b) list_single_recal_day_pane_g1

0x65a7,	// (0x0007199f) list_single_recal_day_pane_g2_ParamLimits

0x65a7,	// (0x0007199f) list_single_recal_day_pane_g2

0x65b3,	// (0x000719ab) list_single_recal_day_pane_g3_ParamLimits

0x65b3,	// (0x000719ab) list_single_recal_day_pane_g3

0x65bf,	// (0x000719b7) list_single_recal_day_pane_g4_ParamLimits

0x65bf,	// (0x000719b7) list_single_recal_day_pane_g4

0x65cd,	// (0x000719c5) list_single_recal_day_pane_g5_ParamLimits

0x65cd,	// (0x000719c5) list_single_recal_day_pane_g5

0x65e3,	// (0x000719db) list_single_recal_day_pane_g6_ParamLimits

0x65e3,	// (0x000719db) list_single_recal_day_pane_g6

0x0004,

0xfcf9,	// (0x0007b0f1) list_single_recal_day_pane_g_ParamLimits

0xfcf9,	// (0x0007b0f1) list_single_recal_day_pane_g

0x65f7,	// (0x000719ef) list_single_recal_day_pane_t1

0x6609,	// (0x00071a01) list_single_recal_day_pane_t2

0x0001,

0xfd04,	// (0x0007b0fc) list_single_recal_day_pane_t

0xcec4,	// (0x000782bc) ncimui_query_button_pane_ParamLimits

0xcec4,	// (0x000782bc) ncimui_query_button_pane

0xced4,	// (0x000782cc) ncimui_query_button_pane_t1_ParamLimits

0xced4,	// (0x000782cc) ncimui_query_button_pane_t1

0x0f9f,	// (0x0006c397) ncimui_query_button_pane_t2_ParamLimits

0x0f9f,	// (0x0006c397) ncimui_query_button_pane_t2

0x0001,

0xfd09,	// (0x0007b101) ncimui_query_button_pane_t_ParamLimits

0xfd09,	// (0x0007b101) ncimui_query_button_pane_t

0xcee7,	// (0x000782df) query_button_pane_ParamLimits

0xcee7,	// (0x000782df) query_button_pane

0x163d,	// (0x0006ca35) bg_button_pane_cp0028

0x0fb2,	// (0x0006c3aa) query_button_pane_t1

0x9450,	// (0x00074848) main_tport_pane_ParamLimits

0xca6b,	// (0x00077e63) bg_popup_window_pane_cp01_ParamLimits

0xca6b,	// (0x00077e63) bg_popup_window_pane_cp01

0xca79,	// (0x00077e71) heading_pane_cp08_ParamLimits

0xca79,	// (0x00077e71) heading_pane_cp08

0xca87,	// (0x00077e7f) heading_pane_cp07_ParamLimits

0xca87,	// (0x00077e7f) heading_pane_cp07

0xcaf6,	// (0x00077eee) cell_tport_appsw_pane_g2

0x0002,

0xfc50,	// (0x0007b048) cell_tport_appsw_pane_g

0x5b0e,	// (0x00070f06) input_candi_list_open_g1

0x237f,	// (0x0006d777) list_cale_time_pane_g6_ParamLimits

0x237f,	// (0x0006d777) list_cale_time_pane_g6

0x98dc,	// (0x00074cd4) aid_size_touch_calib_1_ParamLimits

0x98dc,	// (0x00074cd4) aid_size_touch_calib_1

0x98e8,	// (0x00074ce0) aid_size_touch_calib_2_ParamLimits

0x98e8,	// (0x00074ce0) aid_size_touch_calib_2

0x98f6,	// (0x00074cee) aid_size_touch_calib_3_ParamLimits

0x98f6,	// (0x00074cee) aid_size_touch_calib_3

0x9906,	// (0x00074cfe) aid_size_touch_calib_4_ParamLimits

0x9906,	// (0x00074cfe) aid_size_touch_calib_4

0x9914,	// (0x00074d0c) main_touch_calib_button_group_pane_ParamLimits

0x9914,	// (0x00074d0c) main_touch_calib_button_group_pane

0x9922,	// (0x00074d1a) main_touch_calib_pane_g1_ParamLimits

0x992e,	// (0x00074d26) main_touch_calib_pane_g2_ParamLimits

0x993a,	// (0x00074d32) main_touch_calib_pane_g3_ParamLimits

0x9946,	// (0x00074d3e) main_touch_calib_pane_g4_ParamLimits

0xf69c,	// (0x0007aa94) main_touch_calib_pane_g_ParamLimits

0x9952,	// (0x00074d4a) main_touch_calib_pane_t1_ParamLimits

0x996b,	// (0x00074d63) main_touch_calib_pane_t2_ParamLimits

0x9984,	// (0x00074d7c) main_touch_calib_pane_t3_ParamLimits

0x999a,	// (0x00074d92) main_touch_calib_pane_t4_ParamLimits

0x99b0,	// (0x00074da8) main_touch_calib_pane_t5_ParamLimits

0xf6a5,	// (0x0007aa9d) main_touch_calib_pane_t_ParamLimits

0x4957,	// (0x0006fd4f) list_single_fp_cale_pane_g3_ParamLimits

0x4957,	// (0x0006fd4f) list_single_fp_cale_pane_g3

0x1ce5,	// (0x0006d0dd) bg_button_pane_cp012_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_vkb2_func_pane_cp03_ParamLimits

0xb71c,	// (0x00076b14) cell_vitu2_function_top_pane_g1_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_vkb2_func_pane_cp04_ParamLimits

0xc40b,	// (0x00077803) main_ncimui_button_group_pane_ParamLimits

0xc40b,	// (0x00077803) main_ncimui_button_group_pane

0xc471,	// (0x00077869) main_ncimui_pane_t3_ParamLimits

0xc471,	// (0x00077869) main_ncimui_pane_t3

0x0d41,	// (0x0006c139) phacti_button_group_pane

0x0f2e,	// (0x0006c326) aid_size_list_single_double_ParamLimits

0xce5f,	// (0x00078257) popup_ezdial_listscroll_window_ParamLimits

0x0f3a,	// (0x0006c332) popup_number_entry_window_cp01_ParamLimits

0xcef4,	// (0x000782ec) phacti_button_pane_ParamLimits

0xcef4,	// (0x000782ec) phacti_button_pane

0x163d,	// (0x0006ca35) bg_button_pane_cp14

0x0fc0,	// (0x0006c3b8) phacti_button_pane_t1

0xcf05,	// (0x000782fd) main_touch_calib_button_pane_ParamLimits

0xcf05,	// (0x000782fd) main_touch_calib_button_pane

0x1de8,	// (0x0006d1e0) bg_button_pane_cp18_ParamLimits

0x1de8,	// (0x0006d1e0) bg_button_pane_cp18

0x0fce,	// (0x0006c3c6) main_touch_calib_button_pane_t1_ParamLimits

0x0fce,	// (0x0006c3c6) main_touch_calib_button_pane_t1

0x0fe4,	// (0x0006c3dc) main_touch_calib_button_pane_t2_ParamLimits

0x0fe4,	// (0x0006c3dc) main_touch_calib_button_pane_t2

0x0001,

0xfd0e,	// (0x0007b106) main_touch_calib_button_pane_t_ParamLimits

0xfd0e,	// (0x0007b106) main_touch_calib_button_pane_t

0x163d,	// (0x0006ca35) cell_ncimui_button_pane

0x163d,	// (0x0006ca35) bg_button_pane_cp032

0x1002,	// (0x0006c3fa) cell_ncimui_button_pane_t1

0xa93e,	// (0x00075d36) image3_infobar_pane_ParamLimits

0xa93e,	// (0x00075d36) image3_infobar_pane

0xc7b3,	// (0x00077bab) fs_bigclock_status_pane_ParamLimits

0xc7b3,	// (0x00077bab) fs_bigclock_status_pane

0xc7c0,	// (0x00077bb8) main_fs_bigclock_clock_pane_ParamLimits

0xc7c0,	// (0x00077bb8) main_fs_bigclock_clock_pane

0xc7d4,	// (0x00077bcc) main_fs_bigclock_indi_pane_ParamLimits

0xc7d4,	// (0x00077bcc) main_fs_bigclock_indi_pane

0xc7fc,	// (0x00077bf4) main_fs_bigclock_swipe_pane_ParamLimits

0xc7fc,	// (0x00077bf4) main_fs_bigclock_swipe_pane

0x163d,	// (0x0006ca35) main_fs_clock_dumped_data

0x088e,	// (0x0006bc86) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x088e,	// (0x0006bc86) list_single_fs_bigclock_indicator_pane_g1

0x08aa,	// (0x0006bca2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x08aa,	// (0x0006bca2) list_single_fs_bigclock_indicator_pane_g2

0x08c4,	// (0x0006bcbc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x08c4,	// (0x0006bcbc) list_single_fs_bigclock_indicator_pane_g3

0x08de,	// (0x0006bcd6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x08de,	// (0x0006bcd6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbaa,	// (0x0007afa2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbaa,	// (0x0007afa2) list_single_fs_bigclock_indicator_pane_g

0x0909,	// (0x0006bd01) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x0909,	// (0x0006bd01) list_single_fs_bigclock_indicator_pane_t1

0x0931,	// (0x0006bd29) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x0931,	// (0x0006bd29) list_single_fs_bigclock_indicator_pane_t2

0x0959,	// (0x0006bd51) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x0959,	// (0x0006bd51) list_single_fs_bigclock_indicator_pane_t3

0x0981,	// (0x0006bd79) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x0981,	// (0x0006bd79) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbb5,	// (0x0007afad) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbb5,	// (0x0007afad) list_single_fs_bigclock_indicator_pane_t

0x1010,	// (0x0006c408) image3_infobar_fav_pane_ParamLimits

0x1010,	// (0x0006c408) image3_infobar_fav_pane

0x1020,	// (0x0006c418) image3_infobar_loc_pane_ParamLimits

0x1020,	// (0x0006c418) image3_infobar_loc_pane

0x1034,	// (0x0006c42c) image3_infobar_time_pane_ParamLimits

0x1034,	// (0x0006c42c) image3_infobar_time_pane

0x1d8a,	// (0x0006d182) image3_infobar_time_pane_g1

0x1044,	// (0x0006c43c) image3_infobar_time_pane_t1

0x1d8a,	// (0x0006d182) image3_infobar_loc_pane_g1

0x1052,	// (0x0006c44a) image3_infobar_loc_pane_g2

0x0001,

0xfd13,	// (0x0007b10b) image3_infobar_loc_pane_g

0x105a,	// (0x0006c452) image3_infobar_loc_pane_t1

0x1d8a,	// (0x0006d182) image3_infobar_fav_pane_g1

0x1068,	// (0x0006c460) image3_infobar_fav_pane_g2

0x0001,

0xfd18,	// (0x0007b110) image3_infobar_fav_pane_g

0x1070,	// (0x0006c468) fs_bigclock_status_battery_pane

0x1079,	// (0x0006c471) fs_bigclock_status_signal_pane

0x1082,	// (0x0006c47a) fs_bigclock_status_title_pane

0x108b,	// (0x0006c483) fs_bigclock_status_signal_pane_g1

0x1094,	// (0x0006c48c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1d,	// (0x0007b115) fs_bigclock_status_signal_pane_g

0x109c,	// (0x0006c494) fs_bigclock_status_battery_pane_g1

0x10a5,	// (0x0006c49d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd22,	// (0x0007b11a) fs_bigclock_status_battery_pane_g

0x10ad,	// (0x0006c4a5) fs_bigclock_status_title_pane_t1

0xcf15,	// (0x0007830d) main_fs_bigclock_clock_pane_g1

0xcf15,	// (0x0007830d) main_fs_bigclock_clock_pane_g2

0xcf22,	// (0x0007831a) main_fs_bigclock_clock_pane_g3

0xcf22,	// (0x0007831a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd27,	// (0x0007b11f) main_fs_bigclock_clock_pane_g

0xcf2e,	// (0x00078326) main_fs_bigclock_clock_pane_t1

0xcf41,	// (0x00078339) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd30,	// (0x0007b128) main_fs_bigclock_clock_pane_t

0x10bb,	// (0x0006c4b3) list_single_fs_bigclock_indicator_pane_ParamLimits

0x10bb,	// (0x0006c4b3) list_single_fs_bigclock_indicator_pane

0x10cc,	// (0x0006c4c4) list_single_fs_bigclock_pane_ParamLimits

0x10cc,	// (0x0006c4c4) list_single_fs_bigclock_pane

0x10f2,	// (0x0006c4ea) main_fs_bigclock_indicator_pane_t1

0x1101,	// (0x0006c4f9) list_single_fs_bigclock_pane_g1

0x1109,	// (0x0006c501) list_single_fs_bigclock_pane_t1

0x1d8a,	// (0x0006d182) main_fs_bigclock_swipe_pane_g1

0x114c,	// (0x0006c544) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd41,	// (0x0007b139) main_fs_bigclock_swipe_pane_g

0x1154,	// (0x0006c54c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x1154,	// (0x0006c54c) main_fs_bigclock_swipe_pane_t1

0x877d,	// (0x00073b75) call_type_pane_ParamLimits

0x163d,	// (0x0006ca35) main_btmg_pane

0x6454,	// (0x0007184c) list_single_cale_mrui_row_pane_g2_ParamLimits

0x6454,	// (0x0007184c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb4,	// (0x0007b0ac) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb4,	// (0x0007b0ac) list_single_cale_mrui_row_pane_g

0x6584,	// (0x0007197c) list_recal_vselct_arw_lo_pane

0x0f8b,	// (0x0006c383) list_recal_vselct_arw_up_pane

0x658c,	// (0x00071984) list_recal_vselct_pane

0xcf98,	// (0x00078390) btmg_button_pane

0xcfa4,	// (0x0007839c) main_btmg_pane_g1

0x163d,	// (0x0006ca35) bg_button_pane_cp044

0x1171,	// (0x0006c569) btmg_button_pane_t1

0x4156,	// (0x0006f54e) aid_listscroll_gen

0x1ce5,	// (0x0006d0dd) main_cntbar_detail_pane

0x0c72,	// (0x0006c06a) list_cmail_folder_pane

0xf034,	// (0x0007a42c) sp_fs_scroll_pane_cp03_ParamLimits

0x661b,	// (0x00071a13) list_single_fs_dyc_pane_cp01_ParamLimits

0x661b,	// (0x00071a13) list_single_fs_dyc_pane_cp01

0x117f,	// (0x0006c577) aid_size_cmail_indent

0x6646,	// (0x00071a3e) list_single_dyc_row_pane_cp01

0xcfcc,	// (0x000783c4) cntbar_detail_list_pane_ParamLimits

0xcfcc,	// (0x000783c4) cntbar_detail_list_pane

0xd006,	// (0x000783fe) main_cntbar_detail_cont_pane_ParamLimits

0xd006,	// (0x000783fe) main_cntbar_detail_cont_pane

0x8771,	// (0x00073b69) scroll_pane_cp032_ParamLimits

0x8771,	// (0x00073b69) scroll_pane_cp032

0xd012,	// (0x0007840a) cntbar_detail_list_event_pane_ParamLimits

0xd012,	// (0x0007840a) cntbar_detail_list_event_pane

0xcfd8,	// (0x000783d0) cntbar_detail_list_shct_pane

0x220a,	// (0x0006d602) aid_list_gen

0x1188,	// (0x0006c580) aid_scroll

0x1191,	// (0x0006c589) aid_size_touch_scroll_bar

0xd026,	// (0x0007841e) aid_list_double

0xd02f,	// (0x00078427) aid_list_single

0x119a,	// (0x0006c592) aid_list_single_lg

0x664f,	// (0x00071a47) aid_list_z_g_a_sm

0xd038,	// (0x00078430) aid_list_z_g_d

0x6657,	// (0x00071a4f) aid_txt_z_prm

0x6665,	// (0x00071a5d) aid_txt_z_prm_cp01

0x6673,	// (0x00071a6b) aid_txt_z_sec

0xd040,	// (0x00078438) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd040,	// (0x00078438) main_cntbar_detail_cont_pane_g1

0xd04d,	// (0x00078445) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd04d,	// (0x00078445) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd46,	// (0x0007b13e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd46,	// (0x0007b13e) main_cntbar_detail_cont_pane_g

0x11a3,	// (0x0006c59b) main_cntbar_detail_cont_pane_t1

0x11b1,	// (0x0006c5a9) main_cntbar_detail_cont_pane_t2

0x11bf,	// (0x0006c5b7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4b,	// (0x0007b143) main_cntbar_detail_cont_pane_t

0xd059,	// (0x00078451) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd059,	// (0x00078451) cell_cntbar_detail_list_shct_pane

0x11cd,	// (0x0006c5c5) cntbar_detail_list_shct_pane_g1

0x11d6,	// (0x0006c5ce) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd52,	// (0x0007b14a) cntbar_detail_list_shct_pane_g

0xd06d,	// (0x00078465) cntbar_detail_list_event_pane_g1_ParamLimits

0xd06d,	// (0x00078465) cntbar_detail_list_event_pane_g1

0xd079,	// (0x00078471) cntbar_detail_list_event_pane_g2_ParamLimits

0xd079,	// (0x00078471) cntbar_detail_list_event_pane_g2

0x0005,

0xfd57,	// (0x0007b14f) cntbar_detail_list_event_pane_g_ParamLimits

0xfd57,	// (0x0007b14f) cntbar_detail_list_event_pane_g

0xd0e5,	// (0x000784dd) cntbar_detail_list_event_pane_t1_ParamLimits

0xd0e5,	// (0x000784dd) cntbar_detail_list_event_pane_t1

0xd0fa,	// (0x000784f2) cntbar_detail_list_event_pane_t2_ParamLimits

0xd0fa,	// (0x000784f2) cntbar_detail_list_event_pane_t2

0x0002,

0xfd64,	// (0x0007b15c) cntbar_detail_list_event_pane_t_ParamLimits

0xfd64,	// (0x0007b15c) cntbar_detail_list_event_pane_t

0x1d8a,	// (0x0006d182) cell_cntbar_detail_list_shct_pane_g1

0x2d7e,	// (0x0006e176) navi_pane_mv_g3

0x1ce5,	// (0x0006d0dd) main_cntbar_detail_pane_ParamLimits

0x163d,	// (0x0006ca35) main_notif_wgt_pane

0xa5fd,	// (0x000759f5) aid_tch_main_mp4_pane_g4

0xa8d0,	// (0x00075cc8) popup_slider_window_cp02

0x657a,	// (0x00071972) list_recal_day_event_pane

0xcfac,	// (0x000783a4) cntbar_detail_btn_pane_ParamLimits

0xcfac,	// (0x000783a4) cntbar_detail_btn_pane

0xcfbc,	// (0x000783b4) cntbar_detail_btn_pane_cp01_ParamLimits

0xcfbc,	// (0x000783b4) cntbar_detail_btn_pane_cp01

0xcfd8,	// (0x000783d0) cntbar_detail_list_shct_pane_ParamLimits

0xcfe4,	// (0x000783dc) cntbar_detail_pane_g1_ParamLimits

0xcfe4,	// (0x000783dc) cntbar_detail_pane_g1

0xcff0,	// (0x000783e8) cntbar_detail_pane_t1_ParamLimits

0xcff0,	// (0x000783e8) cntbar_detail_pane_t1

0xd085,	// (0x0007847d) cntbar_detail_list_event_pane_g3_ParamLimits

0xd085,	// (0x0007847d) cntbar_detail_list_event_pane_g3

0xd09d,	// (0x00078495) cntbar_detail_list_event_pane_g4_ParamLimits

0xd09d,	// (0x00078495) cntbar_detail_list_event_pane_g4

0xd0b5,	// (0x000784ad) cntbar_detail_list_event_pane_g5_ParamLimits

0xd0b5,	// (0x000784ad) cntbar_detail_list_event_pane_g5

0xd0cd,	// (0x000784c5) cntbar_detail_list_event_pane_g6_ParamLimits

0xd0cd,	// (0x000784c5) cntbar_detail_list_event_pane_g6

0xd10f,	// (0x00078507) cntbar_detail_list_event_pane_t3_ParamLimits

0xd10f,	// (0x00078507) cntbar_detail_list_event_pane_t3

0xd121,	// (0x00078519) popup_notif_wgt_window_ParamLimits

0xd121,	// (0x00078519) popup_notif_wgt_window

0xd131,	// (0x00078529) popup_submenu_window_cp01_ParamLimits

0xd131,	// (0x00078529) popup_submenu_window_cp01

0x1f9a,	// (0x0006d392) bg_popup_window_pane_cp10

0x11df,	// (0x0006c5d7) listscroll_notif_wgt_pane

0x11f1,	// (0x0006c5e9) list_notif_wgt_window

0x11fa,	// (0x0006c5f2) scroll_pane_cp033

0xd13f,	// (0x00078537) list_notif_wgt_row_pane_ParamLimits

0xd13f,	// (0x00078537) list_notif_wgt_row_pane

0x1203,	// (0x0006c5fb) aid_size_list_notif_wgt_del

0x1210,	// (0x0006c608) list_notif_wgt_row_pane_g1

0x121c,	// (0x0006c614) list_notif_wgt_row_pane_g2

0x122b,	// (0x0006c623) list_notif_wgt_row_pane_g3

0x0002,

0xfd6b,	// (0x0007b163) list_notif_wgt_row_pane_g

0x1238,	// (0x0006c630) list_notif_wgt_row_pane_t1

0x124e,	// (0x0006c646) list_notif_wgt_row_pane_t2

0x1260,	// (0x0006c658) list_notif_wgt_row_pane_t3

0x0002,

0xfd72,	// (0x0007b16a) list_notif_wgt_row_pane_t

0xeac3,	// (0x00079ebb) list_recal_day_event_pane_g1

0x1272,	// (0x0006c66a) list_recal_day_event_pane_t1

0x163d,	// (0x0006ca35) bg_button_pane_cp045

0xd151,	// (0x00078549) cntbar_detail_btn_pane_t1

0x2e9f,	// (0x0006e297) main_callh_pane_ParamLimits

0x2e9f,	// (0x0006e297) main_callh_pane

0x163d,	// (0x0006ca35) main_coverflow0_pane

0x163d,	// (0x0006ca35) main_wgtman_pane

0xc814,	// (0x00077c0c) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc814,	// (0x00077c0c) main_fs_bigclock_unlock_btn_pane

0xcaee,	// (0x00077ee6) bg_button_pane_cp16

0xcafe,	// (0x00077ef6) cell_tport_appsw_pane_g3

0xd15f,	// (0x00078557) cf0_flow_pane_ParamLimits

0xd15f,	// (0x00078557) cf0_flow_pane

0x1281,	// (0x0006c679) listscroll_cf0_pane

0x128c,	// (0x0006c684) main_cf0_pane_g1

0xd16e,	// (0x00078566) main_cf0_pane_t1_ParamLimits

0xd16e,	// (0x00078566) main_cf0_pane_t1

0xd182,	// (0x0007857a) main_cf0_pane_t2_ParamLimits

0xd182,	// (0x0007857a) main_cf0_pane_t2

0x0001,

0xfd7e,	// (0x0007b176) main_cf0_pane_t_ParamLimits

0xfd7e,	// (0x0007b176) main_cf0_pane_t

0x129e,	// (0x0006c696) scroll_pane_cp11

0xd196,	// (0x0007858e) cf0_flow_pane_g1

0xd19e,	// (0x00078596) cf0_flow_pane_g2

0x0001,

0xfd83,	// (0x0007b17b) cf0_flow_pane_g

0xd1a6,	// (0x0007859e) cf0_flow_pane_t1

0x163d,	// (0x0006ca35) main_call6_pane

0x163d,	// (0x0006ca35) main_calllock_pane

0xd1b4,	// (0x000785ac) call6_btn_grp_pane_ParamLimits

0xd1b4,	// (0x000785ac) call6_btn_grp_pane

0xd1c3,	// (0x000785bb) call6_pane_g1_ParamLimits

0xd1c3,	// (0x000785bb) call6_pane_g1

0xd1d3,	// (0x000785cb) popup_call6_1st_window_ParamLimits

0xd1d3,	// (0x000785cb) popup_call6_1st_window

0xd1e1,	// (0x000785d9) popup_call6_2nd_window_ParamLimits

0xd1e1,	// (0x000785d9) popup_call6_2nd_window

0xd1ef,	// (0x000785e7) cell_call6_btn_pane_ParamLimits

0xd1ef,	// (0x000785e7) cell_call6_btn_pane

0x1f9a,	// (0x0006d392) bg_popup_call2_in_pane_cp03

0x12a9,	// (0x0006c6a1) popup_call6_1st_window_g1

0x12b1,	// (0x0006c6a9) popup_call6_1st_window_g2

0x12b9,	// (0x0006c6b1) popup_call6_1st_window_g3

0x0002,

0xfd88,	// (0x0007b180) popup_call6_1st_window_g

0x12c1,	// (0x0006c6b9) popup_call6_1st_window_t1

0x12d0,	// (0x0006c6c8) popup_call6_1st_window_t2

0x12de,	// (0x0006c6d6) popup_call6_1st_window_t3

0x0002,

0xfd8f,	// (0x0007b187) popup_call6_1st_window_t

0x1f9a,	// (0x0006d392) bg_popup_call2_in_pane_cp04

0x12ec,	// (0x0006c6e4) popup_call6_2nd_window_g1

0x12f4,	// (0x0006c6ec) popup_call6_2nd_window_g2

0x12fc,	// (0x0006c6f4) popup_call6_2nd_window_g3

0x0002,

0xfd96,	// (0x0007b18e) popup_call6_2nd_window_g

0x1304,	// (0x0006c6fc) popup_call6_2nd_window_t1

0x163d,	// (0x0006ca35) bg_button_pane_cp15

0x135e,	// (0x0006c756) cell_call6_btn_pane_g1

0x162e,	// (0x0006ca26) cell_call6_btn_pane_t1

0xd1fe,	// (0x000785f6) listscroll_wgtman_pane_ParamLimits

0xd1fe,	// (0x000785f6) listscroll_wgtman_pane

0xd21a,	// (0x00078612) wgtman_btn_pane_ParamLimits

0xd21a,	// (0x00078612) wgtman_btn_pane

0x290a,	// (0x0006dd02) aid_scroll_copy1

0x132b,	// (0x0006c723) list_wgtman_pane

0xd24f,	// (0x00078647) wgtman_btn_pane_g1_ParamLimits

0xd24f,	// (0x00078647) wgtman_btn_pane_g1

0xd277,	// (0x0007866f) wgtman_btn_pane_t1_ParamLimits

0xd277,	// (0x0007866f) wgtman_btn_pane_t1

0x1335,	// (0x0006c72d) wgtman_btn_pane_t2_ParamLimits

0x1335,	// (0x0006c72d) wgtman_btn_pane_t2

0x0001,

0xfd9d,	// (0x0007b195) wgtman_btn_pane_t_ParamLimits

0xfd9d,	// (0x0007b195) wgtman_btn_pane_t

0xd2ae,	// (0x000786a6) listrow_wgtman_pane_ParamLimits

0xd2ae,	// (0x000786a6) listrow_wgtman_pane

0xd2ca,	// (0x000786c2) listrow_wgtman_pane_g1

0xd2d7,	// (0x000786cf) listrow_wgtman_pane_g2

0x0001,

0xfda2,	// (0x0007b19a) listrow_wgtman_pane_g

0x6681,	// (0x00071a79) listrow_wgtman_pane_t1

0x6699,	// (0x00071a91) listrow_wgtman_pane_t2

0x0001,

0xfda7,	// (0x0007b19f) listrow_wgtman_pane_t

0x66bf,	// (0x00071ab7) wait_bar_pane_cp09

0x134c,	// (0x0006c744) main_calllock_btn_pane

0x1356,	// (0x0006c74e) main_calllock_pane_g1

0x163d,	// (0x0006ca35) bg_button_pane_cp17

0x135e,	// (0x0006c756) main_calllock_btn_pane_g1

0x1367,	// (0x0006c75f) main_calllock_btn_pane_t1

0x163d,	// (0x0006ca35) main_dialer3_pane

0x163d,	// (0x0006ca35) main_fmrd2_pane

0x1d8a,	// (0x0006d182) main_fs_bigclock_unlock_btn_pane_g1

0xd2fd,	// (0x000786f5) main_fs_bigclock_unlock_btn_pane_t1

0xd30b,	// (0x00078703) area_fmrd2_info_pane_ParamLimits

0xd30b,	// (0x00078703) area_fmrd2_info_pane

0xd319,	// (0x00078711) area_fmrd2_visual_pane_ParamLimits

0xd319,	// (0x00078711) area_fmrd2_visual_pane

0xd327,	// (0x0007871f) fmrd2_indi_pane_ParamLimits

0xd327,	// (0x0007871f) fmrd2_indi_pane

0xd334,	// (0x0007872c) area_fmrd2_visual_pane_g1

0xd33c,	// (0x00078734) area_fmrd2_visual_pane_t1

0xd34c,	// (0x00078744) area_fmrd2_visual_pane_t2

0xd35c,	// (0x00078754) area_fmrd2_visual_pane_t3

0x0002,

0xfdb1,	// (0x0007b1a9) area_fmrd2_visual_pane_t

0xd36c,	// (0x00078764) area_fmrd2_info_pane_g1

0xd374,	// (0x0007876c) area_fmrd2_info_pane_t1

0xd384,	// (0x0007877c) area_fmrd2_info_pane_t2

0xd394,	// (0x0007878c) area_fmrd2_info_pane_t3

0xd3a4,	// (0x0007879c) area_fmrd2_info_pane_t4

0x0003,

0xfdb8,	// (0x0007b1b0) area_fmrd2_info_pane_t

0xd3b2,	// (0x000787aa) fmrd2_indi_pane_t1

0xd3c2,	// (0x000787ba) fmrd2_indi_pane_t2

0xd3d2,	// (0x000787ca) fmrd2_indi_pane_t3

0x0002,

0xfdc1,	// (0x0007b1b9) fmrd2_indi_pane_t

0x08ed,	// (0x0006bce5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x08ed,	// (0x0006bce5) list_single_fs_bigclock_indicator_pane_g5

0x099e,	// (0x0006bd96) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x099e,	// (0x0006bd96) list_single_fs_bigclock_indicator_pane_t5

0xcc9b,	// (0x00078093) aid_cell_bcale_month_pane_ParamLimits

0xcc9b,	// (0x00078093) aid_cell_bcale_month_pane

0xccb9,	// (0x000780b1) bcale_month_pane_ParamLimits

0xccb9,	// (0x000780b1) bcale_month_pane

0xccd7,	// (0x000780cf) bcale_preview_pane_ParamLimits

0xccd7,	// (0x000780cf) bcale_preview_pane

0x1109,	// (0x0006c501) list_single_fs_bigclock_pane_t1_ParamLimits

0x1128,	// (0x0006c520) list_single_fs_bigclock_pane_t2_ParamLimits

0x1128,	// (0x0006c520) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3c,	// (0x0007b134) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3c,	// (0x0007b134) list_single_fs_bigclock_pane_t

0xd2f5,	// (0x000786ed) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdac,	// (0x0007b1a4) main_fs_bigclock_unlock_btn_pane_g

0xd3e0,	// (0x000787d8) aid_dia3_key_size_ParamLimits

0xd3e0,	// (0x000787d8) aid_dia3_key_size

0xd3ec,	// (0x000787e4) aid_dia3_listrow_size_ParamLimits

0xd3ec,	// (0x000787e4) aid_dia3_listrow_size

0xd3fc,	// (0x000787f4) dia3_keypad_fun_pane_ParamLimits

0xd3fc,	// (0x000787f4) dia3_keypad_fun_pane

0xd40e,	// (0x00078806) dia3_keypad_num_pane_ParamLimits

0xd40e,	// (0x00078806) dia3_keypad_num_pane

0xd420,	// (0x00078818) dia3_listscroll_pane_ParamLimits

0xd420,	// (0x00078818) dia3_listscroll_pane

0xd42e,	// (0x00078826) dia3_numentry_pane_ParamLimits

0xd42e,	// (0x00078826) dia3_numentry_pane

0x1376,	// (0x0006c76e) dia3_list_pane

0x1381,	// (0x0006c779) scroll_pane_cp12

0x163d,	// (0x0006ca35) bg_dia3_numentry_pane

0xd43c,	// (0x00078834) dia3_numentry_pane_t1

0xd44b,	// (0x00078843) cell_dia3_key_num_pane

0xd453,	// (0x0007884b) cell_dia3_key0_fun_pane_ParamLimits

0xd453,	// (0x0007884b) cell_dia3_key0_fun_pane

0xd460,	// (0x00078858) cell_dia3_key1_fun_pane_ParamLimits

0xd460,	// (0x00078858) cell_dia3_key1_fun_pane

0xd46d,	// (0x00078865) dia3_listrow_pane

0x0640,	// (0x0006ba38) bg_dia3_numentry_pane_g1

0x163d,	// (0x0006ca35) bg_button_pane_cp21

0x138c,	// (0x0006c784) cell_dia3_key_num_pane_t1

0x139a,	// (0x0006c792) cell_dia3_key_num_pane_t2

0x13a9,	// (0x0006c7a1) cell_dia3_key_num_pane_t3

0x13b8,	// (0x0006c7b0) cell_dia3_key_num_pane_t4

0x0003,

0xfdc8,	// (0x0007b1c0) cell_dia3_key_num_pane_t

0x163d,	// (0x0006ca35) bg_button_pane_cp19

0xd47a,	// (0x00078872) cell_dia3_key0_fun_pane_g1

0x163d,	// (0x0006ca35) bg_button_pane_cp20

0xd482,	// (0x0007887a) cell_dia3_key1_fun_pane_g1

0xd48a,	// (0x00078882) area_left_week_number_pane

0xd49d,	// (0x00078895) area_top_day_name_pane

0xd4ab,	// (0x000788a3) frame_month_view_pane

0x13c7,	// (0x0006c7bf) grid_month_view_pane

0xd4c0,	// (0x000788b8) cell_top_day_name_pane_ParamLimits

0xd4c0,	// (0x000788b8) cell_top_day_name_pane

0xd4da,	// (0x000788d2) cell_area_left_week_number_pane_ParamLimits

0xd4da,	// (0x000788d2) cell_area_left_week_number_pane

0xd4fd,	// (0x000788f5) cell_month_view_pane_ParamLimits

0xd4fd,	// (0x000788f5) cell_month_view_pane

0x13d5,	// (0x0006c7cd) frm_month_g1

0xd529,	// (0x00078921) frm_month_g2

0xd53a,	// (0x00078932) frm_month_g3

0xd54b,	// (0x00078943) frm_month_g4

0xd55c,	// (0x00078954) frm_month_g5

0xd56f,	// (0x00078967) frm_month_g6

0xd582,	// (0x0007897a) frm_month_g7

0x13e2,	// (0x0006c7da) frm_month_g8

0xd595,	// (0x0007898d) frm_month_g9

0xd5a2,	// (0x0007899a) frm_month_g10

0xd5af,	// (0x000789a7) frm_month_g11

0xd5bc,	// (0x000789b4) frm_month_g12

0xd5c9,	// (0x000789c1) frm_month_g13

0xd5d6,	// (0x000789ce) frm_month_g14

0xd5e5,	// (0x000789dd) frm_month_g15

0xd5f4,	// (0x000789ec) frm_month_g16

0x000f,

0xfdd1,	// (0x0007b1c9) frm_month_g

0x13ef,	// (0x0006c7e7) cell_top_day_name_pane_t1

0xd603,	// (0x000789fb) cell_area_left_week_number_pane_g1

0xd612,	// (0x00078a0a) cell_area_left_week_number_pane_t1

0x1d4c,	// (0x0006d144) cell_month_view_pane_g1

0xd628,	// (0x00078a20) cell_month_view_pane_t1

0x163d,	// (0x0006ca35) main_fps_pane

0x0b7d,	// (0x0006bf75) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x0b7d,	// (0x0006bf75) cmail_ddmenu_btn02_pane_cp1

0x0b99,	// (0x0006bf91) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x0b99,	// (0x0006bf91) cmail_ddmenu_btn02_pane_cp2

0xce94,	// (0x0007828c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xce94,	// (0x0007828c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcef,	// (0x0007b0e7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcef,	// (0x0007b0e7) cmail_ddmenu_btn02_pane_g

0xceb2,	// (0x000782aa) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xceb2,	// (0x000782aa) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf4,	// (0x0007b0ec) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf4,	// (0x0007b0ec) cmail_ddmenu_btn02_pane_t

0xd63e,	// (0x00078a36) fps_text_pane_ParamLimits

0xd63e,	// (0x00078a36) fps_text_pane

0xd64b,	// (0x00078a43) main_fps_pane_g1_ParamLimits

0xd64b,	// (0x00078a43) main_fps_pane_g1

0xd659,	// (0x00078a51) wait_bar_pane_cp010_ParamLimits

0xd659,	// (0x00078a51) wait_bar_pane_cp010

0xd665,	// (0x00078a5d) fps_text_pane_t1_ParamLimits

0xd665,	// (0x00078a5d) fps_text_pane_t1

0xacc0,	// (0x000760b8) cam4_image_uncrop_pane_g1

0xacc9,	// (0x000760c1) cam4_image_uncrop_pane_g2

0xacd2,	// (0x000760ca) cam4_image_uncrop_pane_g3

0xacdb,	// (0x000760d3) cam4_image_uncrop_pane_g4

0x0003,

0xf82e,	// (0x0007ac26) cam4_image_uncrop_pane_g

0xd46d,	// (0x00078865) dia3_listrow_pane_ParamLimits

0x163d,	// (0x0006ca35) main_phob2_pane

0xcad0,	// (0x00077ec8) cell_tport_appsw_pane_cp02_ParamLimits

0xcad0,	// (0x00077ec8) cell_tport_appsw_pane_cp02

0xcadf,	// (0x00077ed7) cell_tport_appsw_pane_cp03_ParamLimits

0xcadf,	// (0x00077ed7) cell_tport_appsw_pane_cp03

0x163d,	// (0x0006ca35) phob2_contact_card_pane

0x163d,	// (0x0006ca35) phob2_listscroll_pane

0x1402,	// (0x0006c7fa) phob2_list_pane

0x0f4f,	// (0x0006c347) scroll_pane_cp034

0xd67e,	// (0x00078a76) phob2_cc_data_pane_ParamLimits

0xd67e,	// (0x00078a76) phob2_cc_data_pane

0xd698,	// (0x00078a90) phob2_cc_listscroll_pane_ParamLimits

0xd698,	// (0x00078a90) phob2_cc_listscroll_pane

0xd2ae,	// (0x000786a6) list_double_large_graphic_phob2_pane_ParamLimits

0xd2ae,	// (0x000786a6) list_double_large_graphic_phob2_pane

0xd6b2,	// (0x00078aaa) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd6b2,	// (0x00078aaa) list_double_large_graphic_phob2_pane_g1

0x66d1,	// (0x00071ac9) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x66d1,	// (0x00071ac9) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf2,	// (0x0007b1ea) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf2,	// (0x0007b1ea) list_double_large_graphic_phob2_pane_g

0x66e9,	// (0x00071ae1) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x66e9,	// (0x00071ae1) list_double_large_graphic_phob2_pane_t1

0x66fe,	// (0x00071af6) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x66fe,	// (0x00071af6) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfb,	// (0x0007b1f3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfb,	// (0x0007b1f3) list_double_large_graphic_phob2_pane_t

0x163d,	// (0x0006ca35) list_highlight_pane_cp024

0x140a,	// (0x0006c802) phob2_cc_button_pane

0xd6cd,	// (0x00078ac5) phob2_cc_data_pane_g1_ParamLimits

0xd6cd,	// (0x00078ac5) phob2_cc_data_pane_g1

0xd6dc,	// (0x00078ad4) phob2_cc_data_pane_g2_ParamLimits

0xd6dc,	// (0x00078ad4) phob2_cc_data_pane_g2

0x0001,

0xfe00,	// (0x0007b1f8) phob2_cc_data_pane_g_ParamLimits

0xfe00,	// (0x0007b1f8) phob2_cc_data_pane_g

0xd6eb,	// (0x00078ae3) phob2_cc_data_pane_t1_ParamLimits

0xd6eb,	// (0x00078ae3) phob2_cc_data_pane_t1

0xd700,	// (0x00078af8) phob2_cc_data_pane_t2_ParamLimits

0xd700,	// (0x00078af8) phob2_cc_data_pane_t2

0xd715,	// (0x00078b0d) phob2_cc_data_pane_t3_ParamLimits

0xd715,	// (0x00078b0d) phob2_cc_data_pane_t3

0x0002,

0xfe05,	// (0x0007b1fd) phob2_cc_data_pane_t_ParamLimits

0xfe05,	// (0x0007b1fd) phob2_cc_data_pane_t

0x1412,	// (0x0006c80a) phob2_cc_list_pane_ParamLimits

0x1412,	// (0x0006c80a) phob2_cc_list_pane

0x02a6,	// (0x0006b69e) scroll_pane_cp035_ParamLimits

0x02a6,	// (0x0006b69e) scroll_pane_cp035

0x1ce5,	// (0x0006d0dd) bg_button_pane_cp033

0x141e,	// (0x0006c816) phob2_cc_button_pane_g1

0x142a,	// (0x0006c822) phob2_cc_button_pane_t1

0x143f,	// (0x0006c837) phob2_cc_button_pane_t2

0x0001,

0xfe0c,	// (0x0007b204) phob2_cc_button_pane_t

0xd72a,	// (0x00078b22) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd72a,	// (0x00078b22) list_double_large_graphic_phob2_cc_pane

0xd79e,	// (0x00078b96) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd79e,	// (0x00078b96) list_double_large_graphic_phob2_cc_pane_g1

0x6713,	// (0x00071b0b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x6713,	// (0x00071b0b) list_double_large_graphic_phob2_cc_pane_g2

0x6722,	// (0x00071b1a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x6722,	// (0x00071b1a) list_double_large_graphic_phob2_cc_pane_g3

0x6731,	// (0x00071b29) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x6731,	// (0x00071b29) list_double_large_graphic_phob2_cc_pane_g4

0x6742,	// (0x00071b3a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x6742,	// (0x00071b3a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe11,	// (0x0007b209) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe11,	// (0x0007b209) list_double_large_graphic_phob2_cc_pane_g

0x6751,	// (0x00071b49) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x6751,	// (0x00071b49) list_double_large_graphic_phob2_cc_pane_t1

0x677a,	// (0x00071b72) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x677a,	// (0x00071b72) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1c,	// (0x0007b214) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1c,	// (0x0007b214) list_double_large_graphic_phob2_cc_pane_t

0x1451,	// (0x0006c849) list_highlight_pane_cp025_ParamLimits

0x1451,	// (0x0006c849) list_highlight_pane_cp025

0x1ce5,	// (0x0006d0dd) bg_button_pane_cp033_ParamLimits

0x141e,	// (0x0006c816) phob2_cc_button_pane_g1_ParamLimits

0x142a,	// (0x0006c822) phob2_cc_button_pane_t1_ParamLimits

0x143f,	// (0x0006c837) phob2_cc_button_pane_t2_ParamLimits

0xfe0c,	// (0x0007b204) phob2_cc_button_pane_t_ParamLimits

0x6a94,	// (0x00071e8c) popup_wgtman_window

0xe98c,	// (0x00079d84) scroll_pane_cp038

0xd237,	// (0x0007862f) wgtman_btn_pane_cp_01_ParamLimits

0xd237,	// (0x0007862f) wgtman_btn_pane_cp_01

0x145f,	// (0x0006c857) wgtman_content_pane

0x1468,	// (0x0006c860) wgtman_heading_pane

0x163d,	// (0x0006ca35) bg_heading_pane_cp02

0x1471,	// (0x0006c869) wgtman_heading_pane_g1

0x1479,	// (0x0006c871) wgtman_heading_pane_t1

0x1487,	// (0x0006c87f) scroll_pane_cp036

0x148f,	// (0x0006c887) wgtman_list_pane

0x0a45,	// (0x0006be3d) wgtman_list_pane_t1_ParamLimits

0x0a45,	// (0x0006be3d) wgtman_list_pane_t1

0xac1f,	// (0x00076017) cam4_grid_pane

0x5d95,	// (0x0007118d) bg_button_pane_cp015_ParamLimits

0xb8dc,	// (0x00076cd4) bg_button_pane_cp016_ParamLimits

0xb8e8,	// (0x00076ce0) bg_button_pane_cp017_ParamLimits

0xb91b,	// (0x00076d13) popup_vitu2_query_window_g3_ParamLimits

0xb91b,	// (0x00076d13) popup_vitu2_query_window_g3

0x5e3c,	// (0x00071234) popup_vitu2_query_window_t6_ParamLimits

0x5e3c,	// (0x00071234) popup_vitu2_query_window_t6

0x5e67,	// (0x0007125f) popup_vitu2_query_window_t7_ParamLimits

0x5e67,	// (0x0007125f) popup_vitu2_query_window_t7

0x0130,	// (0x0006b528) cam4_grid_pane_g1

0x0139,	// (0x0006b531) cam4_grid_pane_g2

0x1497,	// (0x0006c88f) cam4_grid_pane_g3

0x14a0,	// (0x0006c898) cam4_grid_pane_g4

0x0003,

0xfe21,	// (0x0007b219) cam4_grid_pane_g

0x74f6,	// (0x000728ee) aid_placing_vt_slider_lsc_ParamLimits

0x7836,	// (0x00072c2e) vidtel_button_pane_ParamLimits

0x7836,	// (0x00072c2e) vidtel_button_pane

0x163d,	// (0x0006ca35) bg_button_pane_cp034

0x14ab,	// (0x0006c8a3) vidtel_button_pane_g1

0x14b3,	// (0x0006c8ab) vidtel_button_pane_t1

0xeab3,	// (0x00079eab) aid_size_vtel_slider_touch

0x02a6,	// (0x0006b69e) scroll_pane_cp039

0xc5cc,	// (0x000779c4) ncim_query_button_pane_cp01_ParamLimits

0xc5eb,	// (0x000779e3) ncimui_query_pane_g1_ParamLimits

0x1ce5,	// (0x0006d0dd) input_focus_pane_cp012_ParamLimits

0x0686,	// (0x0006ba7e) ncim_query_entry_pane_t1_ParamLimits

0x02a6,	// (0x0006b69e) scroll_pane_cp039_ParamLimits

0x29e1,	// (0x0006ddd9) navi_pane_bcale_mc_g1

0x29e9,	// (0x0006dde1) navi_pane_bcale_mc_t1

0x0bcd,	// (0x0006bfc5) main_sp_fs_email_pane_g1

0x0bd9,	// (0x0006bfd1) main_sp_fs_email_pane_g2

0x0001,

0xfc1f,	// (0x0007b017) main_sp_fs_email_pane_g

0x0e66,	// (0x0006c25e) list_single_cale_mrui_row_pane_g3_ParamLimits

0x0e66,	// (0x0006c25e) list_single_cale_mrui_row_pane_g3

0x65d9,	// (0x000719d1) list_single_recal_day_pane_g5_event_pane

0x65ef,	// (0x000719e7) list_single_recal_day_pane_g7

0x14c9,	// (0x0006c8c1) list_recal_day_event_pane_cp01

0x14d2,	// (0x0006c8ca) list_recal_vselct_arw_lo_pane_cp01

0x14da,	// (0x0006c8d2) list_recal_vselct_arw_up_pane_cp01

0x14e2,	// (0x0006c8da) list_recal_vselct_pane_cp01

0xeac3,	// (0x00079ebb) list_recal_day_event_pane_cp01_g1

0x67a3,	// (0x00071b9b) list_recal_day_event_pane_cp01_t1

0x65f7,	// (0x000719ef) list_single_recal_day_pane_t1_ParamLimits

0x6609,	// (0x00071a01) list_single_recal_day_pane_t2_ParamLimits

0xfd04,	// (0x0007b0fc) list_single_recal_day_pane_t_ParamLimits

0x1cc3,	// (0x0006d0bb) bg_notes_pane_ParamLimits

0x1dc6,	// (0x0006d1be) list_notes_pane_ParamLimits

0x6bd7,	// (0x00071fcf) scroll_pane_cp06_ParamLimits

0x1de8,	// (0x0006d1e0) main_notes_pane_ParamLimits

0x1ce5,	// (0x0006d0dd) main_welc_pane

0xd7d1,	// (0x00078bc9) main_welc_body_pane_ParamLimits

0xd7d1,	// (0x00078bc9) main_welc_body_pane

0xd7ea,	// (0x00078be2) main_welc_opti_pane_ParamLimits

0xd7ea,	// (0x00078be2) main_welc_opti_pane

0xd845,	// (0x00078c3d) main_welc_pane_t1_ParamLimits

0xd845,	// (0x00078c3d) main_welc_pane_t1

0xd9db,	// (0x00078dd3) main_welc_body_row_pane_ParamLimits

0xd9db,	// (0x00078dd3) main_welc_body_row_pane

0x1d3e,	// (0x0006d136) main_welc_opti_row_pane_ParamLimits

0x1d3e,	// (0x0006d136) main_welc_opti_row_pane

0x14fc,	// (0x0006c8f4) main_welc_opti_row_pane_g1

0xda04,	// (0x00078dfc) main_welc_opti_row_pane_t1

0x1504,	// (0x0006c8fc) main_welc_body_row_pane_t1

0x11e9,	// (0x0006c5e1) popup_notif_wgt_heading_pane

0x1203,	// (0x0006c5fb) aid_size_list_notif_wgt_del_ParamLimits

0x1210,	// (0x0006c608) list_notif_wgt_row_pane_g1_ParamLimits

0x121c,	// (0x0006c614) list_notif_wgt_row_pane_g2_ParamLimits

0x122b,	// (0x0006c623) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6b,	// (0x0007b163) list_notif_wgt_row_pane_g_ParamLimits

0x1238,	// (0x0006c630) list_notif_wgt_row_pane_t1_ParamLimits

0x124e,	// (0x0006c646) list_notif_wgt_row_pane_t2_ParamLimits

0x1260,	// (0x0006c658) list_notif_wgt_row_pane_t3_ParamLimits

0xfd72,	// (0x0007b16a) list_notif_wgt_row_pane_t_ParamLimits

0xd2ca,	// (0x000786c2) listrow_wgtman_pane_g1_ParamLimits

0xd2d7,	// (0x000786cf) listrow_wgtman_pane_g2_ParamLimits

0xfda2,	// (0x0007b19a) listrow_wgtman_pane_g_ParamLimits

0x6681,	// (0x00071a79) listrow_wgtman_pane_t1_ParamLimits

0x6699,	// (0x00071a91) listrow_wgtman_pane_t2_ParamLimits

0xfda7,	// (0x0007b19f) listrow_wgtman_pane_t_ParamLimits

0x66bf,	// (0x00071ab7) wait_bar_pane_cp09_ParamLimits

0x163d,	// (0x0006ca35) bg_popup_heading_pane_cp02

0x1513,	// (0x0006c90b) popup_notif_wgt_heading_pane_g1

0x151b,	// (0x0006c913) popup_notif_wgt_heading_pane_t1

0x163d,	// (0x0006ca35) main_vids_pane

0x163d,	// (0x0006ca35) vids_listscroll_pane

0xda13,	// (0x00078e0b) scroll_pane_cp040

0x163d,	// (0x0006ca35) vids_list_pane

0xda1e,	// (0x00078e16) vids_list_double_pane_ParamLimits

0xda1e,	// (0x00078e16) vids_list_double_pane

0xda36,	// (0x00078e2e) vids_list_double_pane_g1

0xda3f,	// (0x00078e37) vids_list_double_pane_t1

0xda4f,	// (0x00078e47) vids_list_double_pane_t2

0x0001,

0xfe40,	// (0x0007b238) vids_list_double_pane_t

0x1ce5,	// (0x0006d0dd) main_ncimui_pane_ParamLimits

0xc423,	// (0x0007781b) main_ncimui_pane_g1_ParamLimits

0xc42f,	// (0x00077827) main_ncimui_pane_g2_ParamLimits

0xc42f,	// (0x00077827) main_ncimui_pane_g2

0x0001,

0xfb20,	// (0x0007af18) main_ncimui_pane_g_ParamLimits

0xfb20,	// (0x0007af18) main_ncimui_pane_g

0xd803,	// (0x00078bfb) main_welc_pane_g1_ParamLimits

0xd803,	// (0x00078bfb) main_welc_pane_g1

0xd80f,	// (0x00078c07) main_welc_pane_g2_ParamLimits

0xd80f,	// (0x00078c07) main_welc_pane_g2

0x0003,

0xfe2a,	// (0x0007b222) main_welc_pane_g_ParamLimits

0xfe2a,	// (0x0007b222) main_welc_pane_g

0x1cc3,	// (0x0006d0bb) listscroll_mce_pane_ParamLimits

0x2dbe,	// (0x0006e1b6) wait_bar_pane_cp10

0x415e,	// (0x0006f556) main_cale_day_pane_ParamLimits

0x415e,	// (0x0006f556) main_cale_week_pane_ParamLimits

0x1cc3,	// (0x0006d0bb) main_messa_pane_ParamLimits

0xa0b3,	// (0x000754ab) main_clock2_btn_pane_ParamLimits

0xa0b3,	// (0x000754ab) main_clock2_btn_pane

0x49d1,	// (0x0006fdc9) main_clock2_btn_pane_cp01_ParamLimits

0x49d1,	// (0x0006fdc9) main_clock2_btn_pane_cp01

0x0e37,	// (0x0006c22f) list_cale_mrui_pane_ParamLimits

0x1296,	// (0x0006c68e) main_cf0_pane_g2

0x0001,

0xfd79,	// (0x0007b171) main_cf0_pane_g

0xd48a,	// (0x00078882) area_left_week_number_pane_ParamLimits

0xd49d,	// (0x00078895) area_top_day_name_pane_ParamLimits

0xd4ab,	// (0x000788a3) frame_month_view_pane_ParamLimits

0x13c7,	// (0x0006c7bf) grid_month_view_pane_ParamLimits

0x13d5,	// (0x0006c7cd) frm_month_g1_ParamLimits

0xd529,	// (0x00078921) frm_month_g2_ParamLimits

0xd53a,	// (0x00078932) frm_month_g3_ParamLimits

0xd54b,	// (0x00078943) frm_month_g4_ParamLimits

0xd55c,	// (0x00078954) frm_month_g5_ParamLimits

0xd56f,	// (0x00078967) frm_month_g6_ParamLimits

0xd582,	// (0x0007897a) frm_month_g7_ParamLimits

0x13e2,	// (0x0006c7da) frm_month_g8_ParamLimits

0xd595,	// (0x0007898d) frm_month_g9_ParamLimits

0xd5a2,	// (0x0007899a) frm_month_g10_ParamLimits

0xd5af,	// (0x000789a7) frm_month_g11_ParamLimits

0xd5bc,	// (0x000789b4) frm_month_g12_ParamLimits

0xd5c9,	// (0x000789c1) frm_month_g13_ParamLimits

0xd5d6,	// (0x000789ce) frm_month_g14_ParamLimits

0xd5e5,	// (0x000789dd) frm_month_g15_ParamLimits

0xd5f4,	// (0x000789ec) frm_month_g16_ParamLimits

0xfdd1,	// (0x0007b1c9) frm_month_g_ParamLimits

0x13ef,	// (0x0006c7e7) cell_top_day_name_pane_t1_ParamLimits

0xd603,	// (0x000789fb) cell_area_left_week_number_pane_g1_ParamLimits

0xd612,	// (0x00078a0a) cell_area_left_week_number_pane_t1_ParamLimits

0x1d4c,	// (0x0006d144) cell_month_view_pane_g1_ParamLimits

0xd628,	// (0x00078a20) cell_month_view_pane_t1_ParamLimits

0x1cbb,	// (0x0006d0b3) main_clock2_btn_pane_g1

0x1529,	// (0x0006c921) main_clock2_btn_pane_t1

0x1ce5,	// (0x0006d0dd) listscroll_cmail_pane_ParamLimits

0x0bcd,	// (0x0006bfc5) main_sp_fs_email_pane_g1_ParamLimits

0x0bd9,	// (0x0006bfd1) main_sp_fs_email_pane_g2_ParamLimits

0xfc1f,	// (0x0007b017) main_sp_fs_email_pane_g_ParamLimits

0x0f6c,	// (0x0006c364) list_recal_day_pane_ParamLimits

0x0f7d,	// (0x0006c375) mian_recal_day_pane_t1

0x61d4,	// (0x000715cc) list_single_dyc_row_text_pane_t4_ParamLimits

0x61d4,	// (0x000715cc) list_single_dyc_row_text_pane_t4

0x620b,	// (0x00071603) list_single_dyc_row_text_pane_t5_ParamLimits

0x620b,	// (0x00071603) list_single_dyc_row_text_pane_t5

0x6281,	// (0x00071679) list_single_dyc_row_text_pane_t6_ParamLimits

0x6281,	// (0x00071679) list_single_dyc_row_text_pane_t6

0x86af,	// (0x00073aa7) aid_mgn_list_cale_time_pane

0x1ce5,	// (0x0006d0dd) main_gallery2_pane_ParamLimits

0x49e7,	// (0x0006fddf) main_clock2_pane_cp01_t1

0x49f5,	// (0x0006fded) main_clock2_pane_cp01_t3

0x0001,

0xf70f,	// (0x0007ab07) main_clock2_pane_cp01_t

0x702c,	// (0x00072424) cale_week_scroll_pane_g16_ParamLimits

0x702c,	// (0x00072424) cale_week_scroll_pane_g16

0x1f9a,	// (0x0006d392) vorec_slider_pane

0x14b3,	// (0x0006c8ab) vidtel_button_pane_t1_ParamLimits

0xcf15,	// (0x0007830d) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcf15,	// (0x0007830d) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcf22,	// (0x0007831a) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcf22,	// (0x0007831a) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd27,	// (0x0007b11f) main_fs_bigclock_clock_pane_g_ParamLimits

0xcf2e,	// (0x00078326) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcf41,	// (0x00078339) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd30,	// (0x0007b128) main_fs_bigclock_clock_pane_t_ParamLimits

0x9a58,	// (0x00074e50) main_mup3_lyrics_pane_ParamLimits

0x9a58,	// (0x00074e50) main_mup3_lyrics_pane

0xda82,	// (0x00078e7a) main_mup3_lyrics_pane_t1_ParamLimits

0xda82,	// (0x00078e7a) main_mup3_lyrics_pane_t1

0xa5e7,	// (0x000759df) aid_main_mp4_pane_t1_area

0xa5f1,	// (0x000759e9) aid_main_mp4_pane_t2_area

0xa6f6,	// (0x00075aee) main_mp4_pane_g7_ParamLimits

0xa6f6,	// (0x00075aee) main_mp4_pane_g7

0xa702,	// (0x00075afa) main_mp4_pane_g8_ParamLimits

0xa702,	// (0x00075afa) main_mp4_pane_g8

0xaad9,	// (0x00075ed1) aid_call6_pane_g1_size

0xd770,	// (0x00078b68) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd770,	// (0x00078b68) list_double_large_graphic_phob2_other_pane

0x231e,	// (0x0006d716) list_double_large_graphic_phob2_other_pane_g1

0x163d,	// (0x0006ca35) list_highlight_pane_cp026

0x1ce5,	// (0x0006d0dd) main_welc_pane_ParamLimits

0xc9a7,	// (0x00077d9f) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc9a7,	// (0x00077d9f) main_sp_fs_ctrlbar_pane_g3

0xc9bf,	// (0x00077db7) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc9bf,	// (0x00077db7) main_sp_fs_ctrlbar_pane_g4

0xc9f1,	// (0x00077de9) toolbar2_fixed_button_pane_cp01

0xc9fc,	// (0x00077df4) toolbar2_fixed_button_pane_cp02

0xca07,	// (0x00077dff) toolbar2_fixed_button_pane_cp03

0xd7c1,	// (0x00078bb9) list_welc_entry_pane_ParamLimits

0xd7c1,	// (0x00078bb9) list_welc_entry_pane

0xd81d,	// (0x00078c15) main_welc_pane_g3_ParamLimits

0xd81d,	// (0x00078c15) main_welc_pane_g3

0xd85f,	// (0x00078c57) main_welc_pane_t2_ParamLimits

0xd85f,	// (0x00078c57) main_welc_pane_t2

0xd873,	// (0x00078c6b) main_welc_pane_t3_ParamLimits

0xd873,	// (0x00078c6b) main_welc_pane_t3

0x0005,

0xfe33,	// (0x0007b22b) main_welc_pane_t_ParamLimits

0xfe33,	// (0x0007b22b) main_welc_pane_t

0xd96f,	// (0x00078d67) welc_button_pane_ParamLimits

0xd96f,	// (0x00078d67) welc_button_pane

0xd9cd,	// (0x00078dc5) welc_service_logo_pane_ParamLimits

0xd9cd,	// (0x00078dc5) welc_service_logo_pane

0xdab8,	// (0x00078eb0) list_single_welc_entry_pane_ParamLimits

0xdab8,	// (0x00078eb0) list_single_welc_entry_pane

0xdac9,	// (0x00078ec1) list_single_welc_entry_pane_g1

0xdad1,	// (0x00078ec9) list_single_welc_entry_pane_t1

0xdadf,	// (0x00078ed7) list_single_welc_entry_pane_t2

0x0001,

0xfe45,	// (0x0007b23d) list_single_welc_entry_pane_t

0x163d,	// (0x0006ca35) bg_button_pane_cp035

0xdaed,	// (0x00078ee5) welc_button_pane_t1

0x1537,	// (0x0006c92f) welc_service_logo_pane_g1

0x1540,	// (0x0006c938) welc_service_logo_pane_g2

0x0001,

0xfe4a,	// (0x0007b242) welc_service_logo_pane_g

0x163d,	// (0x0006ca35) main_int_radio_pane

0x0524,	// (0x0006b91c) list_single_fs_dyc_pane_g1

0x66dd,	// (0x00071ad5) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x66dd,	// (0x00071ad5) list_double_large_graphic_phob2_pane_g3

0xd6bf,	// (0x00078ab7) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd6bf,	// (0x00078ab7) list_double_large_graphic_phob2_pane_g4

0xdafb,	// (0x00078ef3) main_int_radio1_pane_ParamLimits

0xdafb,	// (0x00078ef3) main_int_radio1_pane

0x1549,	// (0x0006c941) find_pane_cp02

0xdb0d,	// (0x00078f05) input_focus_pane_cp12_ParamLimits

0xdb0d,	// (0x00078f05) input_focus_pane_cp12

0xdb19,	// (0x00078f11) input_focus_pane_cp13_ParamLimits

0xdb19,	// (0x00078f11) input_focus_pane_cp13

0xdb31,	// (0x00078f29) input_focus_pane_cp14_ParamLimits

0xdb31,	// (0x00078f29) input_focus_pane_cp14

0x1552,	// (0x0006c94a) int_radio1_listscroll_pane

0xdb49,	// (0x00078f41) main_int_radio1_pane_g1_ParamLimits

0xdb49,	// (0x00078f41) main_int_radio1_pane_g1

0xdb59,	// (0x00078f51) main_int_radio1_pane_t1_ParamLimits

0xdb59,	// (0x00078f51) main_int_radio1_pane_t1

0xdb6d,	// (0x00078f65) main_int_radio1_pane_t2_ParamLimits

0xdb6d,	// (0x00078f65) main_int_radio1_pane_t2

0xdb81,	// (0x00078f79) main_int_radio1_pane_t3_ParamLimits

0xdb81,	// (0x00078f79) main_int_radio1_pane_t3

0xdb95,	// (0x00078f8d) main_int_radio1_pane_t4_ParamLimits

0xdb95,	// (0x00078f8d) main_int_radio1_pane_t4

0x155c,	// (0x0006c954) main_int_radio1_pane_t5_ParamLimits

0x155c,	// (0x0006c954) main_int_radio1_pane_t5

0xdbac,	// (0x00078fa4) main_int_radio1_pane_t6_ParamLimits

0xdbac,	// (0x00078fa4) main_int_radio1_pane_t6

0xdbbe,	// (0x00078fb6) main_int_radio1_pane_t7_ParamLimits

0xdbbe,	// (0x00078fb6) main_int_radio1_pane_t7

0xdbd0,	// (0x00078fc8) main_int_radio1_pane_t8_ParamLimits

0xdbd0,	// (0x00078fc8) main_int_radio1_pane_t8

0xdbe4,	// (0x00078fdc) main_int_radio1_pane_t9_ParamLimits

0xdbe4,	// (0x00078fdc) main_int_radio1_pane_t9

0xdbf6,	// (0x00078fee) main_int_radio1_pane_t10_ParamLimits

0xdbf6,	// (0x00078fee) main_int_radio1_pane_t10

0xdc27,	// (0x0007901f) main_int_radio1_pane_t11_ParamLimits

0xdc27,	// (0x0007901f) main_int_radio1_pane_t11

0xdc58,	// (0x00079050) main_int_radio1_pane_t12_ParamLimits

0xdc58,	// (0x00079050) main_int_radio1_pane_t12

0x000b,

0xfe4f,	// (0x0007b247) main_int_radio1_pane_t_ParamLimits

0xfe4f,	// (0x0007b247) main_int_radio1_pane_t

0x156e,	// (0x0006c966) int_radio_list_pane

0x0f4f,	// (0x0006c347) scroll_pane_cp037

0x1576,	// (0x0006c96e) list_double_large_graphic_int_radio_pane_ParamLimits

0x1576,	// (0x0006c96e) list_double_large_graphic_int_radio_pane

0x158f,	// (0x0006c987) list_double_large_graphic_int_radio_pane_g1

0x67b1,	// (0x00071ba9) list_double_large_graphic_int_radio_pane_t1

0x67bf,	// (0x00071bb7) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe68,	// (0x0007b260) list_double_large_graphic_int_radio_pane_t

0x163d,	// (0x0006ca35) list_highlight_pane_cp027

0x14ec,	// (0x0006c8e4) main_button_pane_4

0xd829,	// (0x00078c21) main_welc_pane_g4_ParamLimits

0xd829,	// (0x00078c21) main_welc_pane_g4

0xd885,	// (0x00078c7d) main_welc_pane_t4_ParamLimits

0xd885,	// (0x00078c7d) main_welc_pane_t4

0xd897,	// (0x00078c8f) main_welc_pane_t5_ParamLimits

0xd897,	// (0x00078c8f) main_welc_pane_t5

0xd8c7,	// (0x00078cbf) main_welc_pane_t6_ParamLimits

0xd8c7,	// (0x00078cbf) main_welc_pane_t6

0xd97d,	// (0x00078d75) welc_button_pane_2_ParamLimits

0xd97d,	// (0x00078d75) welc_button_pane_2

0xd995,	// (0x00078d8d) welc_button_pane_3_ParamLimits

0xd995,	// (0x00078d8d) welc_button_pane_3

0x14f4,	// (0x0006c8ec) welc_button_pane_4

0xd9af,	// (0x00078da7) welc_button_pane_5_ParamLimits

0xd9af,	// (0x00078da7) welc_button_pane_5

0x6821,	// (0x00071c19) main_popup_welc_pane

0x15b0,	// (0x0006c9a8) main_welc_sk_g3

0x15ba,	// (0x0006c9b2) main_welc_sk_g4

0x15c4,	// (0x0006c9bc) main_welc_sk_t3

0x15d4,	// (0x0006c9cc) main_welc_sk_t4

0x15e4,	// (0x0006c9dc) popup_welc_pane_t4

0x15f2,	// (0x0006c9ea) popup_welc_pane_t5

0x1600,	// (0x0006c9f8) popup_welc_pane_t6

0x163d,	// (0x0006ca35) main_acti_pane

0x163d,	// (0x0006ca35) main_sso_pane

0xdc6f,	// (0x00079067) sso_body_pane_ParamLimits

0xdc6f,	// (0x00079067) sso_body_pane

0xdc7d,	// (0x00079075) sso_logo_pane_ParamLimits

0xdc7d,	// (0x00079075) sso_logo_pane

0xdcae,	// (0x000790a6) sso_sk_pane_ParamLimits

0xdcae,	// (0x000790a6) sso_sk_pane

0x25d6,	// (0x0006d9ce) main_sso_logo_pane_g1

0xdcbb,	// (0x000790b3) sso_sk_pane_t1_ParamLimits

0xdcbb,	// (0x000790b3) sso_sk_pane_t1

0xdccf,	// (0x000790c7) sso_sk_pane_t2_ParamLimits

0xdccf,	// (0x000790c7) sso_sk_pane_t2

0x0001,

0xfe6d,	// (0x0007b265) sso_sk_pane_t_ParamLimits

0xfe6d,	// (0x0007b265) sso_sk_pane_t

0x25e1,	// (0x0006d9d9) aid_sso_gap

0x25ea,	// (0x0006d9e2) aid_sso_txt1

0x25f4,	// (0x0006d9ec) aid_sso_txt2

0x25fe,	// (0x0006d9f6) aid_sso_txt3

0x0002,

0xfe72,	// (0x0007b26a) aid_sso_txt

0x2608,	// (0x0006da00) aid_sso_widget

0xdd2c,	// (0x00079124) sso_btn_pane_ParamLimits

0xdd2c,	// (0x00079124) sso_btn_pane

0xdda0,	// (0x00079198) sso_option_pane_ParamLimits

0xdda0,	// (0x00079198) sso_option_pane

0xde4c,	// (0x00079244) sso_query_pane_ParamLimits

0xde4c,	// (0x00079244) sso_query_pane

0xde9c,	// (0x00079294) sso_query_pane_cp01_ParamLimits

0xde9c,	// (0x00079294) sso_query_pane_cp01

0xdeee,	// (0x000792e6) sso_t_hdr_pane_ParamLimits

0xdeee,	// (0x000792e6) sso_t_hdr_pane

0xdf12,	// (0x0007930a) sso_t_nml_pane_ParamLimits

0xdf12,	// (0x0007930a) sso_t_nml_pane

0x2612,	// (0x0006da0a) sso_t_sub_pane

0xdc8a,	// (0x00079082) sso_popup_window_ParamLimits

0xdc8a,	// (0x00079082) sso_popup_window

0xdce1,	// (0x000790d9) sso_apps_pane_ParamLimits

0xdce1,	// (0x000790d9) sso_apps_pane

0xdd04,	// (0x000790fc) sso_body_pane_g1

0xdd0c,	// (0x00079104) sso_body_pane_t1

0xdd1c,	// (0x00079114) sso_body_pane_t2

0x0001,

0xfe79,	// (0x0007b271) sso_body_pane_t

0xdd70,	// (0x00079168) sso_btn_pane_cp01_ParamLimits

0xdd70,	// (0x00079168) sso_btn_pane_cp01

0xde1e,	// (0x00079216) sso_prog_pane_ParamLimits

0xde1e,	// (0x00079216) sso_prog_pane

0xdf62,	// (0x0007935a) sso_t_hdr_pane_t1_ParamLimits

0xdf62,	// (0x0007935a) sso_t_hdr_pane_t1

0x2627,	// (0x0006da1f) input_focus_pane_cp10_ParamLimits

0x2627,	// (0x0006da1f) input_focus_pane_cp10

0x263b,	// (0x0006da33) sso_query_pane_t1_ParamLimits

0x263b,	// (0x0006da33) sso_query_pane_t1

0x264e,	// (0x0006da46) sso_query_pane_t2_ParamLimits

0x264e,	// (0x0006da46) sso_query_pane_t2

0x2667,	// (0x0006da5f) sso_query_pane_t3_ParamLimits

0x2667,	// (0x0006da5f) sso_query_pane_t3

0x2691,	// (0x0006da89) sso_query_pane_t4_ParamLimits

0x2691,	// (0x0006da89) sso_query_pane_t4

0x0003,

0xfe7e,	// (0x0007b276) sso_query_pane_t_ParamLimits

0xfe7e,	// (0x0007b276) sso_query_pane_t

0x15a7,	// (0x0006c99f) bg_button_pane_cp22

0x1598,	// (0x0006c990) sso_btn_pane_t1

0xdf7b,	// (0x00079373) sso_t_nml_pane_t1_ParamLimits

0xdf7b,	// (0x00079373) sso_t_nml_pane_t1

0x26b5,	// (0x0006daad) sso_option_row_pane_ParamLimits

0x26b5,	// (0x0006daad) sso_option_row_pane

0x26c2,	// (0x0006daba) sso_t_sub_pane_t1_ParamLimits

0x26c2,	// (0x0006daba) sso_t_sub_pane_t1

0x1ce5,	// (0x0006d0dd) bg_popup_window_pane_cp11_ParamLimits

0x1ce5,	// (0x0006d0dd) bg_popup_window_pane_cp11

0x26df,	// (0x0006dad7) popup_sk_window_cp01_ParamLimits

0x26df,	// (0x0006dad7) popup_sk_window_cp01

0x26ec,	// (0x0006dae4) sso_popup_body_pane_ParamLimits

0x26ec,	// (0x0006dae4) sso_popup_body_pane

0x26f9,	// (0x0006daf1) scroll_pane_cp21_ParamLimits

0x26f9,	// (0x0006daf1) scroll_pane_cp21

0x2706,	// (0x0006dafe) sso_popup_body_t_pane_ParamLimits

0x2706,	// (0x0006dafe) sso_popup_body_t_pane

0x2713,	// (0x0006db0b) sso_popup_body_t_hdr_pane_ParamLimits

0x2713,	// (0x0006db0b) sso_popup_body_t_hdr_pane

0xdf98,	// (0x00079390) sso_popup_body_t_nml_pane_ParamLimits

0xdf98,	// (0x00079390) sso_popup_body_t_nml_pane

0xdfb6,	// (0x000793ae) sso_popup_body_t_sub_pane_ParamLimits

0xdfb6,	// (0x000793ae) sso_popup_body_t_sub_pane

0x2725,	// (0x0006db1d) sso_popup_body_t_hdr_pane_t1

0xdfd9,	// (0x000793d1) sso_popup_body_t_nml_pane_t1_ParamLimits

0xdfd9,	// (0x000793d1) sso_popup_body_t_nml_pane_t1

0x2735,	// (0x0006db2d) sso_popup_body_t_sub_pane_t1_ParamLimits

0x2735,	// (0x0006db2d) sso_popup_body_t_sub_pane_t1

0x1d8a,	// (0x0006d182) sso_prog_pane_g1

0xe020,	// (0x00079418) sso_apps_pane_comp1_ParamLimits

0xe020,	// (0x00079418) sso_apps_pane_comp1

0x275a,	// (0x0006db52) sso_apps_pane_comp1_g1

0x2a73,	// (0x0006de6b) sso_apps_pane_comp1_t1

0x2a8f,	// (0x0006de87) sso_option_row_pane_g1

0x2a97,	// (0x0006de8f) sso_option_row_pane_t1

0x0c7a,	// (0x0006c072) list_cmail_pane_ParamLimits

0x163d,	// (0x0006ca35) main_call7_pane

0xd7af,	// (0x00078ba7) bg_welc_area_ParamLimits

0xd7af,	// (0x00078ba7) bg_welc_area

0xd8fd,	// (0x00078cf5) sso_t_hdr_pane_a_t1_ParamLimits

0xd8fd,	// (0x00078cf5) sso_t_hdr_pane_a_t1

0xd911,	// (0x00078d09) sso_t_nml_pane_a_t1_ParamLimits

0xd911,	// (0x00078d09) sso_t_nml_pane_a_t1

0xd93b,	// (0x00078d33) sso_t_sub_pane_a_t1_ParamLimits

0xd93b,	// (0x00078d33) sso_t_sub_pane_a_t1

0xd9bf,	// (0x00078db7) welc_button_pane_cp01_ParamLimits

0xd9bf,	// (0x00078db7) welc_button_pane_cp01

0x1598,	// (0x0006c990) sso_btn_pane_t1_copy1

0x15a7,	// (0x0006c99f) welc_button_pane_2_comp1

0x160e,	// (0x0006ca06) sso_t_hdr_pane_p_t1

0x161e,	// (0x0006ca16) sso_t_nml_pane_p_t1

0x25c6,	// (0x0006d9be) sso_t_sub_pane_p_t1

0x163d,	// (0x0006ca35) main_att_pane

0x163d,	// (0x0006ca35) main_vod_pane

0x2612,	// (0x0006da0a) sso_t_sub_pane_ParamLimits

0x2a81,	// (0x0006de79) input_focus_pane_cp10_t1

0x2a97,	// (0x0006de8f) sso_option_row_pane_t1_ParamLimits

0xe03a,	// (0x00079432) main_att_body_pane_ParamLimits

0xe03a,	// (0x00079432) main_att_body_pane

0xe04e,	// (0x00079446) att_btn_emg_pane_ParamLimits

0xe04e,	// (0x00079446) att_btn_emg_pane

0xe066,	// (0x0007945e) att_btn_pane_ParamLimits

0xe066,	// (0x0007945e) att_btn_pane

0xe0ce,	// (0x000794c6) att_btn_pane_cp01_ParamLimits

0xe0ce,	// (0x000794c6) att_btn_pane_cp01

0xe0e8,	// (0x000794e0) att_li_srv_pane_ParamLimits

0xe0e8,	// (0x000794e0) att_li_srv_pane

0xe0fa,	// (0x000794f2) att_opt_pane_ParamLimits

0xe0fa,	// (0x000794f2) att_opt_pane

0xe13e,	// (0x00079536) att_query_pane_ParamLimits

0xe13e,	// (0x00079536) att_query_pane

0xe1ae,	// (0x000795a6) att_query_pane_cp01_ParamLimits

0xe1ae,	// (0x000795a6) att_query_pane_cp01

0xe1f2,	// (0x000795ea) att_t_hdr_pane_ParamLimits

0xe1f2,	// (0x000795ea) att_t_hdr_pane

0xe258,	// (0x00079650) att_t_nml_pane_ParamLimits

0xe258,	// (0x00079650) att_t_nml_pane

0xe2c0,	// (0x000796b8) att_t_nml_pane_cp01_ParamLimits

0xe2c0,	// (0x000796b8) att_t_nml_pane_cp01

0xe2e4,	// (0x000796dc) att_t_nmlb_pane_ParamLimits

0xe2e4,	// (0x000796dc) att_t_nmlb_pane

0xe348,	// (0x00079740) att_term_pane_ParamLimits

0xe348,	// (0x00079740) att_term_pane

0xe38a,	// (0x00079782) main_att_body_pane_g1_ParamLimits

0xe38a,	// (0x00079782) main_att_body_pane_g1

0x2ab0,	// (0x0006dea8) att_t_hdr_pane_t1_ParamLimits

0x2ab0,	// (0x0006dea8) att_t_hdr_pane_t1

0x2ac9,	// (0x0006dec1) att_t_nml_pane_t1_ParamLimits

0x2ac9,	// (0x0006dec1) att_t_nml_pane_t1

0x2aee,	// (0x0006dee6) att_btn_pane_t1

0x15a7,	// (0x0006c99f) bg_button_pane_cp23

0xe3b4,	// (0x000797ac) att_li_srv_row_pane_ParamLimits

0xe3b4,	// (0x000797ac) att_li_srv_row_pane

0x2afe,	// (0x0006def6) att_t_nmlb_pane_t1_ParamLimits

0x2afe,	// (0x0006def6) att_t_nmlb_pane_t1

0x2b1c,	// (0x0006df14) att_query_pane_t1

0x2b2b,	// (0x0006df23) att_query_pane_t2

0x2b3a,	// (0x0006df32) att_query_pane_t3

0x0002,

0xfe87,	// (0x0007b27f) att_query_pane_t

0x2b49,	// (0x0006df41) input_focus_pane_cp11

0x2b52,	// (0x0006df4a) att_term_pane_t1_ParamLimits

0x2b52,	// (0x0006df4a) att_term_pane_t1

0x163d,	// (0x0006ca35) att_opt_row_pane

0x2a8f,	// (0x0006de87) att_opt_row_pane_g1

0x2b6f,	// (0x0006df67) att_opt_row_pane_t1_ParamLimits

0x2b6f,	// (0x0006df67) att_opt_row_pane_t1

0xe3c4,	// (0x000797bc) att_li_srv_row_pane_g1

0xe3cc,	// (0x000797c4) att_li_srv_row_pane_t1_ParamLimits

0xe3cc,	// (0x000797c4) att_li_srv_row_pane_t1

0xe3e1,	// (0x000797d9) att_li_srv_row_pane_t2_ParamLimits

0xe3e1,	// (0x000797d9) att_li_srv_row_pane_t2

0x0001,

0xfe8e,	// (0x0007b286) att_li_srv_row_pane_t_ParamLimits

0xfe8e,	// (0x0007b286) att_li_srv_row_pane_t

0x2b88,	// (0x0006df80) att_btn_close_pane_g1

0x163d,	// (0x0006ca35) bg_button_pane_cp24

0x9442,	// (0x0007483a) main_vod_body_pane_ParamLimits

0x9442,	// (0x0007483a) main_vod_body_pane

0xe3f6,	// (0x000797ee) main_vod_body_pane_g1_ParamLimits

0xe3f6,	// (0x000797ee) main_vod_body_pane_g1

0xe426,	// (0x0007981e) scroll_pane_cp24_ParamLimits

0xe426,	// (0x0007981e) scroll_pane_cp24

0xe46e,	// (0x00079866) vod_btn_pane_ParamLimits

0xe46e,	// (0x00079866) vod_btn_pane

0xe4ac,	// (0x000798a4) vod_det_pane_ParamLimits

0xe4ac,	// (0x000798a4) vod_det_pane

0xe4d6,	// (0x000798ce) vod_logo_g1_ParamLimits

0xe4d6,	// (0x000798ce) vod_logo_g1

0xe510,	// (0x00079908) vod_opt_pane_ParamLimits

0xe510,	// (0x00079908) vod_opt_pane

0xe540,	// (0x00079938) vod_opt_pane_cp01_ParamLimits

0xe540,	// (0x00079938) vod_opt_pane_cp01

0xe568,	// (0x00079960) vod_query_pane_ParamLimits

0xe568,	// (0x00079960) vod_query_pane

0xe590,	// (0x00079988) vod_query_pane_cp01_ParamLimits

0xe590,	// (0x00079988) vod_query_pane_cp01

0xe59c,	// (0x00079994) vod_t_nml_pane_ParamLimits

0xe59c,	// (0x00079994) vod_t_nml_pane

0xe63e,	// (0x00079a36) vod_t_nml_pane_cp01_ParamLimits

0xe63e,	// (0x00079a36) vod_t_nml_pane_cp01

0xe676,	// (0x00079a6e) vod_t_sub_pane_ParamLimits

0xe676,	// (0x00079a6e) vod_t_sub_pane

0xe6a2,	// (0x00079a9a) vod_t_sub_pane_cp01_ParamLimits

0xe6a2,	// (0x00079a9a) vod_t_sub_pane_cp01

0x2b49,	// (0x0006df41) vod_query_field_pane

0x2b90,	// (0x0006df88) vod_query_pane_t1

0x15a7,	// (0x0006c99f) bg_button_pane_cp25

0x1598,	// (0x0006c990) sso_btn_pane_t1_copy2

0xe6ca,	// (0x00079ac2) vod_t_nml_pane_t1_ParamLimits

0xe6ca,	// (0x00079ac2) vod_t_nml_pane_t1

0x2b9f,	// (0x0006df97) vod_opt_row_pane_ParamLimits

0x2b9f,	// (0x0006df97) vod_opt_row_pane

0x2bb1,	// (0x0006dfa9) vod_t_sub_pane_t1_ParamLimits

0x2bb1,	// (0x0006dfa9) vod_t_sub_pane_t1

0x2bca,	// (0x0006dfc2) vod_det_cell_pane_ParamLimits

0x2bca,	// (0x0006dfc2) vod_det_cell_pane

0x163d,	// (0x0006ca35) input_focus_pane_cp15

0x2bdb,	// (0x0006dfd3) vod_query_field_pane_t1

0x2be9,	// (0x0006dfe1) vod_opt_row_pane_g1_ParamLimits

0x2be9,	// (0x0006dfe1) vod_opt_row_pane_g1

0x2bf5,	// (0x0006dfed) vod_opt_row_pane_t1_ParamLimits

0x2bf5,	// (0x0006dfed) vod_opt_row_pane_t1

0x2c14,	// (0x0006e00c) vod_det_cell_field_pane

0x2c1d,	// (0x0006e015) vod_det_cell_pane_g1

0x2c25,	// (0x0006e01d) vod_det_cell_pane_t1

0x163d,	// (0x0006ca35) input_focus_pane_cp16

0x2c34,	// (0x0006e02c) vod_det_cell_field_pane_t1

0xd1b4,	// (0x000785ac) call7_btn_grp_pane_ParamLimits

0xd1b4,	// (0x000785ac) call7_btn_grp_pane

0xe6ff,	// (0x00079af7) call7_bubble_pane_ParamLimits

0xe6ff,	// (0x00079af7) call7_bubble_pane

0xd1ef,	// (0x000785e7) cell_call7_btn_pane_ParamLimits

0xd1ef,	// (0x000785e7) cell_call7_btn_pane

0xe70d,	// (0x00079b05) call7_pane_g1_ParamLimits

0xe70d,	// (0x00079b05) call7_pane_g1

0xe71c,	// (0x00079b14) call7_windows_conf_pane_ParamLimits

0xe71c,	// (0x00079b14) call7_windows_conf_pane

0xe738,	// (0x00079b30) popup_call7_1st_window_ParamLimits

0xe738,	// (0x00079b30) popup_call7_1st_window

0xe746,	// (0x00079b3e) popup_call7_2nd_window_ParamLimits

0xe746,	// (0x00079b3e) popup_call7_2nd_window

0xe754,	// (0x00079b4c) popup_call7_3rd_window_ParamLimits

0xe754,	// (0x00079b4c) popup_call7_3rd_window

0x163d,	// (0x0006ca35) bg_button_pane_cp26

0x135e,	// (0x0006c756) cell_call7_btn_pane_g1

0x162e,	// (0x0006ca26) cell_call7_btn_pane_t1

0x163d,	// (0x0006ca35) bg_popup_window_pane_cp12

0x2c42,	// (0x0006e03a) popup_call7_1st_window_g1

0x2c4a,	// (0x0006e042) popup_call7_1st_window_g2

0x2c52,	// (0x0006e04a) popup_call7_1st_window_g3

0x0002,

0xfe93,	// (0x0007b28b) popup_call7_1st_window_g

0x2c5a,	// (0x0006e052) popup_call7_1st_window_t1

0x2c69,	// (0x0006e061) popup_call7_1st_window_t2

0x2c77,	// (0x0006e06f) popup_call7_1st_window_t3

0x0002,

0xfe9a,	// (0x0007b292) popup_call7_1st_window_t

0x163d,	// (0x0006ca35) bg_popup_window_pane_cp13

0x2c85,	// (0x0006e07d) popup_call7_2nd_window_g1

0x2c8d,	// (0x0006e085) popup_call7_2nd_window_g2

0x2c95,	// (0x0006e08d) popup_call7_2nd_window_g3

0x0002,

0xfea1,	// (0x0007b299) popup_call7_2nd_window_g

0x2c9d,	// (0x0006e095) popup_call7_2nd_window_t1

0x163d,	// (0x0006ca35) bg_popup_window_pane_cp14

0x2cac,	// (0x0006e0a4) call7_list_conf_pane

0x2cb4,	// (0x0006e0ac) call7_list_conf_row_pane_ParamLimits

0x2cb4,	// (0x0006e0ac) call7_list_conf_row_pane

0x2cc7,	// (0x0006e0bf) call7_list_conf_row_pane_g1

0x2ccf,	// (0x0006e0c7) call7_list_conf_row_pane_g2

0x0001,

0xfea8,	// (0x0007b2a0) call7_list_conf_row_pane_g

0x2cd7,	// (0x0006e0cf) call7_list_conf_row_pane_t1

0x163d,	// (0x0006ca35) list_highlight_pane_cp22

0xddf0,	// (0x000791e8) sso_option_pane_cp01_ParamLimits

0xddf0,	// (0x000791e8) sso_option_pane_cp01

0x1cc3,	// (0x0006d0bb) msg_header_pane_ParamLimits

0x2f4a,	// (0x0006e342) bg_button_pane_cp01_ParamLimits

0x5b77,	// (0x00070f6f) input_focus_pane_cp07_ParamLimits

0xca3b,	// (0x00077e33) popup_email_progress_window

0x1d8a,	// (0x0006d182) popup_email_progress_window_g1

0x2ce5,	// (0x0006e0dd) popup_email_progress_window_g2

0x0001,

0xfead,	// (0x0007b2a5) popup_email_progress_window_g

0x2ced,	// (0x0006e0e5) popup_email_progress_window_t1
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch_Large
