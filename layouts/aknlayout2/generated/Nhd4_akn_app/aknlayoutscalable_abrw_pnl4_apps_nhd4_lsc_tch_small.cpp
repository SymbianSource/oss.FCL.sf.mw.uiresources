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

#include "aknlayoutscalable_abrw_pnl4_apps_nhd4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x000610d2 };

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
0x0a34,	// (0x00061b06) Screen

0x0a40,	// (0x00061b12) application_window

0x0a7c,	// (0x00061b4e) area_bottom_pane_ParamLimits

0x0a7c,	// (0x00061b4e) area_bottom_pane

0x0ab5,	// (0x00061b87) area_top_pane_ParamLimits

0x0ab5,	// (0x00061b87) area_top_pane

0x9e28,	// (0x0006aefa) call_video_uplink_pane_ParamLimits

0x9e28,	// (0x0006aefa) call_video_uplink_pane

0x0b43,	// (0x00061c15) main_pane_ParamLimits

0x0b43,	// (0x00061c15) main_pane

0xe490,	// (0x0006f562) context_pane

0x35e4,	// (0x000646b6) navi_pane

0x3616,	// (0x000646e8) popup_cale_events_window_ParamLimits

0x3616,	// (0x000646e8) popup_cale_events_window

0xe4a3,	// (0x0006f575) popup_mup_playback_window

0x362e,	// (0x00064700) signal_pane

0xc10e,	// (0x0006d1e0) main_browser_pane

0xc2c0,	// (0x0006d392) main_burst_pane

0x333a,	// (0x0006440c) main_calc_pane

0xe484,	// (0x0006f556) main_cale_day_pane

0x334e,	// (0x00064420) main_cale_month_pane

0xe484,	// (0x0006f556) main_cale_week_pane

0xc2c0,	// (0x0006d392) main_call_pane

0xbd80,	// (0x0006ce52) main_call_poc_pane

0xc2c0,	// (0x0006d392) main_camera_pane

0xc2c0,	// (0x0006d392) main_chi_dic_pane

0xcc0c,	// (0x0006dcde) main_clock_pane

0xbd80,	// (0x0006ce52) main_fmradio_pane

0xc2c0,	// (0x0006d392) main_graph_messa_pane

0xbd80,	// (0x0006ce52) main_help_pane

0xc10e,	// (0x0006d1e0) main_im_pane

0xbfe9,	// (0x0006d0bb) main_image_pane_ParamLimits

0xbfe9,	// (0x0006d0bb) main_image_pane

0xbd80,	// (0x0006ce52) main_location2_pane

0xc2c0,	// (0x0006d392) main_location_pane

0xbfe9,	// (0x0006d0bb) main_messa_pane

0xbd80,	// (0x0006ce52) main_mp2_pane

0xc2c0,	// (0x0006d392) main_mp_pane

0xbd80,	// (0x0006ce52) main_msg_pane

0xbd80,	// (0x0006ce52) main_mup_eq_pane

0xbd80,	// (0x0006ce52) main_mup_pane

0xc10e,	// (0x0006d1e0) main_notes_pane

0xbd80,	// (0x0006ce52) main_pec_pane

0xbd80,	// (0x0006ce52) main_phob_pane

0xbd80,	// (0x0006ce52) main_pinb_pane

0xbd80,	// (0x0006ce52) main_postcard_pane

0xbd80,	// (0x0006ce52) main_qdial_pane

0xc2c0,	// (0x0006d392) main_skin_pane

0xbd80,	// (0x0006ce52) main_smil2_pane

0xc2c0,	// (0x0006d392) main_smil_pane

0xc2c0,	// (0x0006d392) main_video_pane

0xc2c0,	// (0x0006d392) main_video_tele_pane

0xbfe9,	// (0x0006d0bb) main_viewer_pane_ParamLimits

0xbfe9,	// (0x0006d0bb) main_viewer_pane

0xc2c0,	// (0x0006d392) main_vorec_pane

0x33a0,	// (0x00064472) popup_blid_sat_info_window_ParamLimits

0x33a0,	// (0x00064472) popup_blid_sat_info_window

0x33f8,	// (0x000644ca) popup_dyc_status_message_window_ParamLimits

0x33f8,	// (0x000644ca) popup_dyc_status_message_window

0x3410,	// (0x000644e2) popup_grid_large_graphic_window_ParamLimits

0x3410,	// (0x000644e2) popup_grid_large_graphic_window

0x34c0,	// (0x00064592) popup_loc_request_window_ParamLimits

0x34c0,	// (0x00064592) popup_loc_request_window

0x35bc,	// (0x0006468e) popup_wml_address_window_ParamLimits

0x35bc,	// (0x0006468e) popup_wml_address_window

0x3174,	// (0x00064246) call_muted_g1

0x2e69,	// (0x00063f3b) popup_call_audio_conf_window_ParamLimits

0x2e69,	// (0x00063f3b) popup_call_audio_conf_window

0x3188,	// (0x0006425a) popup_call_audio_first_window_ParamLimits

0x3188,	// (0x0006425a) popup_call_audio_first_window

0x31fe,	// (0x000642d0) popup_call_audio_in_window_ParamLimits

0x31fe,	// (0x000642d0) popup_call_audio_in_window

0x323a,	// (0x0006430c) popup_call_audio_out_window_ParamLimits

0x323a,	// (0x0006430c) popup_call_audio_out_window

0x3274,	// (0x00064346) popup_call_audio_second_window_ParamLimits

0x3274,	// (0x00064346) popup_call_audio_second_window

0x32ca,	// (0x0006439c) popup_call_audio_wait_window_ParamLimits

0x32ca,	// (0x0006439c) popup_call_audio_wait_window

0x32ff,	// (0x000643d1) popup_number_entry_window_ParamLimits

0x32ff,	// (0x000643d1) popup_number_entry_window

0xb96d,	// (0x0006ca3f) bg_popup_call_pane_cp05_ParamLimits

0xb96d,	// (0x0006ca3f) bg_popup_call_pane_cp05

0xb98d,	// (0x0006ca5f) popup_number_entry_window_t1

0xb9a0,	// (0x0006ca72) popup_number_entry_window_t2

0xb9b2,	// (0x0006ca84) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x00070112) popup_number_entry_window_t

0xb9c4,	// (0x0006ca96) text_title_cp2

0xb9d7,	// (0x0006caa9) bg_popup_call_pane_cp_ParamLimits

0xb9d7,	// (0x0006caa9) bg_popup_call_pane_cp

0xb9e5,	// (0x0006cab7) call_thumbnail_pane

0xb9ed,	// (0x0006cabf) popup_call_audio_in_window_g1_ParamLimits

0xb9ed,	// (0x0006cabf) popup_call_audio_in_window_g1

0xb9f9,	// (0x0006cacb) popup_call_audio_in_window_g2_ParamLimits

0xb9f9,	// (0x0006cacb) popup_call_audio_in_window_g2

0xba05,	// (0x0006cad7) popup_call_audio_in_window_g3_ParamLimits

0xba05,	// (0x0006cad7) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x0007011b) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x0007011b) popup_call_audio_in_window_g

0xba11,	// (0x0006cae3) popup_call_audio_in_window_t1_ParamLimits

0xba11,	// (0x0006cae3) popup_call_audio_in_window_t1

0xba2d,	// (0x0006caff) popup_call_audio_in_window_t2_ParamLimits

0xba2d,	// (0x0006caff) popup_call_audio_in_window_t2

0xba49,	// (0x0006cb1b) popup_call_audio_in_window_t3_ParamLimits

0xba49,	// (0x0006cb1b) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x00070122) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x00070122) popup_call_audio_in_window_t

0xb9d7,	// (0x0006caa9) bg_popup_call_pane_cp01_ParamLimits

0xb9d7,	// (0x0006caa9) bg_popup_call_pane_cp01

0xb9e5,	// (0x0006cab7) call_thumbnail_pane_cp02

0xba5c,	// (0x0006cb2e) call_type_pane_cp022

0xba64,	// (0x0006cb36) popup_call_audio_out_window_g1_ParamLimits

0xba64,	// (0x0006cb36) popup_call_audio_out_window_g1

0xba76,	// (0x0006cb48) popup_call_audio_out_window_g2_ParamLimits

0xba76,	// (0x0006cb48) popup_call_audio_out_window_g2

0xba82,	// (0x0006cb54) popup_call_audio_out_window_g3_ParamLimits

0xba82,	// (0x0006cb54) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x00070129) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x00070129) popup_call_audio_out_window_g

0xba94,	// (0x0006cb66) popup_call_audio_out_window_t1_ParamLimits

0xba94,	// (0x0006cb66) popup_call_audio_out_window_t1

0xbaac,	// (0x0006cb7e) popup_call_audio_out_window_t2_ParamLimits

0xbaac,	// (0x0006cb7e) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x00070130) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x00070130) popup_call_audio_out_window_t

0xbac1,	// (0x0006cb93) bg_popup_call_pane_ParamLimits

0xbac1,	// (0x0006cb93) bg_popup_call_pane

0x0c99,	// (0x00061d6b) call_thumbnail_pane_cp_ParamLimits

0x0c99,	// (0x00061d6b) call_thumbnail_pane_cp

0xbb45,	// (0x0006cc17) call_type_pane_cp01_ParamLimits

0xbb45,	// (0x0006cc17) call_type_pane_cp01

0xbb89,	// (0x0006cc5b) popup_call_audio_first_window_g1_ParamLimits

0xbb89,	// (0x0006cc5b) popup_call_audio_first_window_g1

0xbbd5,	// (0x0006cca7) popup_call_audio_first_window_g2_ParamLimits

0xbbd5,	// (0x0006cca7) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x00070135) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x00070135) popup_call_audio_first_window_g

0xbc19,	// (0x0006cceb) popup_call_audio_first_window_t1_ParamLimits

0xbc19,	// (0x0006cceb) popup_call_audio_first_window_t1

0xbcc5,	// (0x0006cd97) popup_call_audio_first_window_t4_ParamLimits

0xbcc5,	// (0x0006cd97) popup_call_audio_first_window_t4

0xbd51,	// (0x0006ce23) popup_call_audio_first_window_t5_ParamLimits

0xbd51,	// (0x0006ce23) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x0007013a) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x0007013a) popup_call_audio_first_window_t

0xbd80,	// (0x0006ce52) bg_popup_call_pane_cp02

0xbd8a,	// (0x0006ce5c) call_type_pane_cp023

0xbd92,	// (0x0006ce64) popup_call_audio_wait_window_g1

0xbd9a,	// (0x0006ce6c) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x00070141) popup_call_audio_wait_window_g

0xbda2,	// (0x0006ce74) popup_call_audio_wait_window_t3

0xbdb0,	// (0x0006ce82) bg_popup_call_pane_cp03_ParamLimits

0xbdb0,	// (0x0006ce82) bg_popup_call_pane_cp03

0xbe10,	// (0x0006cee2) call_thumbnail_pane_cp011_ParamLimits

0xbe10,	// (0x0006cee2) call_thumbnail_pane_cp011

0xbe1c,	// (0x0006ceee) call_type_pane_cp034_ParamLimits

0xbe1c,	// (0x0006ceee) call_type_pane_cp034

0xbe58,	// (0x0006cf2a) popup_call_audio_second_window_g1_ParamLimits

0xbe58,	// (0x0006cf2a) popup_call_audio_second_window_g1

0xbe94,	// (0x0006cf66) popup_call_audio_second_window_g2_ParamLimits

0xbe94,	// (0x0006cf66) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x00070146) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x00070146) popup_call_audio_second_window_g

0xbed0,	// (0x0006cfa2) popup_call_audio_second_window_t1_ParamLimits

0xbed0,	// (0x0006cfa2) popup_call_audio_second_window_t1

0xbf5f,	// (0x0006d031) popup_call_audio_second_window_t2_ParamLimits

0xbf5f,	// (0x0006d031) popup_call_audio_second_window_t2

0xbf95,	// (0x0006d067) popup_call_audio_second_window_t3_ParamLimits

0xbf95,	// (0x0006d067) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x0007014b) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x0007014b) popup_call_audio_second_window_t

0xbd80,	// (0x0006ce52) bg_popup_call_pane_cp04

0xbfcb,	// (0x0006d09d) list_conf_pane

0xbfd3,	// (0x0006d0a5) popup_call_audio_conf_window_t1

0xbfe1,	// (0x0006d0b3) call_thumbnail_pane_g1

0xbfe9,	// (0x0006d0bb) bg_pinb_pane_ParamLimits

0xbfe9,	// (0x0006d0bb) bg_pinb_pane

0xbff7,	// (0x0006d0c9) find_pinb_pane

0xbfe9,	// (0x0006d0bb) listscroll_pinb_pane_ParamLimits

0xbfe9,	// (0x0006d0bb) listscroll_pinb_pane

0xc001,	// (0x0006d0d3) pinb_bg_pane_g1

0xc001,	// (0x0006d0d3) pinb_bg_pane_g2

0xc001,	// (0x0006d0d3) pinb_bg_pane_g3

0xc001,	// (0x0006d0d3) pinb_bg_pane_g4

0xc001,	// (0x0006d0d3) pinb_bg_pane_g5

0xc001,	// (0x0006d0d3) pinb_bg_pane_g6

0xc001,	// (0x0006d0d3) pinb_bg_pane_g7

0xc001,	// (0x0006d0d3) pinb_bg_pane_g8

0xc001,	// (0x0006d0d3) pinb_bg_pane_g9

0xc001,	// (0x0006d0d3) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x00070152) pinb_bg_pane_g

0xb963,	// (0x0006ca35) grid_pinb_pane

0xb963,	// (0x0006ca35) list_pinb_pane

0xc00b,	// (0x0006d0dd) scroll_pane_cp01_ParamLimits

0xc00b,	// (0x0006d0dd) scroll_pane_cp01

0xc019,	// (0x0006d0eb) find_pinb_pane_g1_ParamLimits

0xc019,	// (0x0006d0eb) find_pinb_pane_g1

0xc031,	// (0x0006d103) find_pinb_pane_t1

0xc043,	// (0x0006d115) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x0007016c) find_pinb_pane_t

0xc058,	// (0x0006d12a) input_focus_pane_cp01_ParamLimits

0xc058,	// (0x0006d12a) input_focus_pane_cp01

0xc064,	// (0x0006d136) cell_pinb_pane_ParamLimits

0xc064,	// (0x0006d136) cell_pinb_pane

0xc072,	// (0x0006d144) cell_pinb_pane_g1_ParamLimits

0xc072,	// (0x0006d144) cell_pinb_pane_g1

0xc080,	// (0x0006d152) cell_pinb_pane_g2_ParamLimits

0xc080,	// (0x0006d152) cell_pinb_pane_g2

0xc080,	// (0x0006d152) cell_pinb_pane_g3_ParamLimits

0xc080,	// (0x0006d152) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00070171) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00070171) cell_pinb_pane_g

0xbd80,	// (0x0006ce52) grid_highlight_pane_cp01

0xc064,	// (0x0006d136) list_pinb_item_pane_ParamLimits

0xc064,	// (0x0006d136) list_pinb_item_pane

0xb963,	// (0x0006ca35) list_highlight_pane_cp02

0xc08e,	// (0x0006d160) list_pinb_item_pane_g1_ParamLimits

0xc08e,	// (0x0006d160) list_pinb_item_pane_g1

0xc080,	// (0x0006d152) list_pinb_item_pane_g2_ParamLimits

0xc080,	// (0x0006d152) list_pinb_item_pane_g2

0xc072,	// (0x0006d144) list_pinb_item_pane_g3_ParamLimits

0xc072,	// (0x0006d144) list_pinb_item_pane_g3

0xc080,	// (0x0006d152) list_pinb_item_pane_g4_ParamLimits

0xc080,	// (0x0006d152) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00070178) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00070178) list_pinb_item_pane_g

0xc09c,	// (0x0006d16e) list_pinb_item_pane_t1_ParamLimits

0xc09c,	// (0x0006d16e) list_pinb_item_pane_t1

0x0cdb,	// (0x00061dad) calc_display_pane

0x0d00,	// (0x00061dd2) calc_paper_pane

0x0d23,	// (0x00061df5) grid_calc_pane

0xb963,	// (0x0006ca35) bg_list_pane_cp01

0xc0b0,	// (0x0006d182) clock_g1

0xc0b0,	// (0x0006d182) clock_g2

0x0001,

0xf0af,	// (0x00070181) clock_g

0xc0ba,	// (0x0006d18c) clock_t1_ParamLimits

0xc0ba,	// (0x0006d18c) clock_t1

0xc0ce,	// (0x0006d1a0) clock_t2_ParamLimits

0xc0ce,	// (0x0006d1a0) clock_t2

0xc0ce,	// (0x0006d1a0) clock_t3_ParamLimits

0xc0ce,	// (0x0006d1a0) clock_t3

0xc0ce,	// (0x0006d1a0) clock_t4_ParamLimits

0xc0ce,	// (0x0006d1a0) clock_t4

0xc0ba,	// (0x0006d18c) clock_t5_ParamLimits

0xc0ba,	// (0x0006d18c) clock_t5

0xc0ce,	// (0x0006d1a0) clock_t6_ParamLimits

0xc0ce,	// (0x0006d1a0) clock_t6

0xc0ce,	// (0x0006d1a0) clock_t7_ParamLimits

0xc0ce,	// (0x0006d1a0) clock_t7

0xc0ce,	// (0x0006d1a0) clock_t8_ParamLimits

0xc0ce,	// (0x0006d1a0) clock_t8

0xc0ce,	// (0x0006d1a0) clock_t9_ParamLimits

0xc0ce,	// (0x0006d1a0) clock_t9

0x0008,

0xf0b4,	// (0x00070186) clock_t_ParamLimits

0xf0b4,	// (0x00070186) clock_t

0xb963,	// (0x0006ca35) popup_clock_analogue_window_cp02

0xb963,	// (0x0006ca35) popup_clock_digital_window_cp01

0xbd80,	// (0x0006ce52) listscroll_help_pane

0xbd80,	// (0x0006ce52) phob_pre_status_pane

0xc0e2,	// (0x0006d1b4) grid_qdial_pane

0xbfe9,	// (0x0006d0bb) listscroll_mce_pane

0xbfe9,	// (0x0006d0bb) bg_notes_pane

0xc0ec,	// (0x0006d1be) list_notes_pane

0x0d51,	// (0x00061e23) scroll_pane_cp06

0xc0fa,	// (0x0006d1cc) bg_calc_paper_pane

0x9e66,	// (0x0006af38) list_calc_pane

0xc10e,	// (0x0006d1e0) bg_calc_display_pane

0x0d65,	// (0x00061e37) calc_display_pane_t1

0x0d77,	// (0x00061e49) calc_display_pane_t2

0x9e80,	// (0x0006af52) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x00070199) calc_display_pane_t

0x0d89,	// (0x00061e5b) cell_calc_pane_ParamLimits

0x0d89,	// (0x00061e5b) cell_calc_pane

0xc11a,	// (0x0006d1ec) bg_calc_paper_pane_g1

0xc126,	// (0x0006d1f8) bg_calc_paper_pane_g2

0xc132,	// (0x0006d204) bg_calc_paper_pane_g3

0xc13e,	// (0x0006d210) bg_calc_paper_pane_g4

0xc14a,	// (0x0006d21c) bg_calc_paper_pane_g5

0x0dbe,	// (0x00061e90) bg_calc_paper_pane_g6

0x0dcd,	// (0x00061e9f) bg_calc_paper_pane_g7

0x0ddc,	// (0x00061eae) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x000701a0) bg_calc_paper_pane_g

0x0def,	// (0x00061ec1) calc_bg_paper_pane_g9

0x0e02,	// (0x00061ed4) list_calc_item_pane_ParamLimits

0x0e02,	// (0x00061ed4) list_calc_item_pane

0xc156,	// (0x0006d228) list_calc_item_pane_g1

0x9e92,	// (0x0006af64) list_calc_item_pane_t1_ParamLimits

0x9e92,	// (0x0006af64) list_calc_item_pane_t1

0x0e17,	// (0x00061ee9) list_calc_item_pane_t2_ParamLimits

0x0e17,	// (0x00061ee9) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x000701b1) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x000701b1) list_calc_item_pane_t

0xc001,	// (0x0006d0d3) cell_calc_pane_g1

0xc163,	// (0x0006d235) grid_highlight_pane_cp02

0x0e49,	// (0x00061f1b) bg_calc_display_pane_g1

0x0e52,	// (0x00061f24) bg_calc_display_pane_g2

0xc4f1,	// (0x0006d5c3) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x000701bb) bg_calc_display_pane_g

0x0e5c,	// (0x00061f2e) cell_qdial_pane_ParamLimits

0x0e5c,	// (0x00061f2e) cell_qdial_pane

0x0e70,	// (0x00061f42) cell_qdial_pane_g1_ParamLimits

0x0e70,	// (0x00061f42) cell_qdial_pane_g1

0x0e86,	// (0x00061f58) cell_qdial_pane_g2_ParamLimits

0x0e86,	// (0x00061f58) cell_qdial_pane_g2

0xc185,	// (0x0006d257) cell_qdial_pane_g3_ParamLimits

0xc185,	// (0x0006d257) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x000701c2) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x000701c2) cell_qdial_pane_g

0x0eac,	// (0x00061f7e) cell_qdial_pane_t1_ParamLimits

0x0eac,	// (0x00061f7e) cell_qdial_pane_t1

0x0ec4,	// (0x00061f96) cell_qdial_pane_t2_ParamLimits

0x0ec4,	// (0x00061f96) cell_qdial_pane_t2

0x0ed7,	// (0x00061fa9) cell_qdial_pane_t3_ParamLimits

0x0ed7,	// (0x00061fa9) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x000701cb) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x000701cb) cell_qdial_pane_t

0xbd80,	// (0x0006ce52) grid_highlight_pane_cp04

0xc191,	// (0x0006d263) thumbnail_qdial_pane_ParamLimits

0xc191,	// (0x0006d263) thumbnail_qdial_pane

0xc1ed,	// (0x0006d2bf) list_help_pane

0xc1f6,	// (0x0006d2c8) scroll_pane_cp02

0x0eea,	// (0x00061fbc) help_list_pane_t1_ParamLimits

0x0eea,	// (0x00061fbc) help_list_pane_t1

0x9ea4,	// (0x0006af76) bg_notes_pane_g2

0x9eac,	// (0x0006af7e) bg_notes_pane_g3

0x9eb4,	// (0x0006af86) notes_bg_pane_g1

0x9ebc,	// (0x0006af8e) notes_bg_pane_g4

0x9ec4,	// (0x0006af96) notes_bg_pane_g5

0x9ecc,	// (0x0006af9e) notes_bg_pane_g6

0x9ed4,	// (0x0006afa6) notes_bg_pane_g7

0x9edc,	// (0x0006afae) notes_bg_pane_g8

0x9ee4,	// (0x0006afb6) notes_bg_pane_g9

0x0006,

0xf117,	// (0x000701e9) notes_bg_pane_g

0x0f09,	// (0x00061fdb) list_notes_text_pane_ParamLimits

0x0f09,	// (0x00061fdb) list_notes_text_pane

0xc1ff,	// (0x0006d2d1) list_notes_text_pane_g1

0x0f1f,	// (0x00061ff1) list_notes_text_pane_t1

0x0f2d,	// (0x00061fff) listscroll_cale_week_pane

0x0f59,	// (0x0006202b) bg_cale_heading_pane

0xc222,	// (0x0006d2f4) bg_cale_pane_cp01

0x0f71,	// (0x00062043) cale_week_corner_pane

0x0f90,	// (0x00062062) cale_week_day_heading_pane

0x0fad,	// (0x0006207f) cale_week_scroll_pane_g1

0x0fc0,	// (0x00062092) cale_week_scroll_pane_g2

0x0fd8,	// (0x000620aa) cale_week_scroll_pane_g3

0x0ff0,	// (0x000620c2) cale_week_scroll_pane_g4

0x1008,	// (0x000620da) cale_week_scroll_pane_g5

0x1028,	// (0x000620fa) cale_week_scroll_pane_g6

0x1048,	// (0x0006211a) cale_week_scroll_pane_g7

0x1068,	// (0x0006213a) cale_week_scroll_pane_g8

0x108c,	// (0x0006215e) cale_week_scroll_pane_g9

0x10a4,	// (0x00062176) cale_week_scroll_pane_g10

0x10bc,	// (0x0006218e) cale_week_scroll_pane_g11

0x10d4,	// (0x000621a6) cale_week_scroll_pane_g12

0x10ec,	// (0x000621be) cale_week_scroll_pane_g13

0x10ec,	// (0x000621be) cale_week_scroll_pane_g14

0x10ec,	// (0x000621be) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x000701f8) cale_week_scroll_pane_g

0x1128,	// (0x000621fa) cale_week_time_pane

0x114c,	// (0x0006221e) grid_cale_week_pane

0xc251,	// (0x0006d323) scroll_pane_cp08

0x1172,	// (0x00062244) cell_cale_week_pane_ParamLimits

0x1172,	// (0x00062244) cell_cale_week_pane

0x1200,	// (0x000622d2) cale_week_day_heading_pane_t1

0x122a,	// (0x000622fc) cale_week_day_heading_pane_t2

0x1259,	// (0x0006232b) cale_week_day_heading_pane_t3

0x1288,	// (0x0006235a) cale_week_day_heading_pane_t4

0x12b7,	// (0x00062389) cale_week_day_heading_pane_t5

0x12ee,	// (0x000623c0) cale_week_day_heading_pane_t6

0x1325,	// (0x000623f7) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x00070219) cale_week_day_heading_pane_t

0xc26e,	// (0x0006d340) bg_cale_side_pane

0x134f,	// (0x00062421) cale_week_time_pane_t1

0x1369,	// (0x0006243b) cale_week_time_pane_t2

0x1383,	// (0x00062455) cale_week_time_pane_t3

0x139d,	// (0x0006246f) cale_week_time_pane_t4

0x13b7,	// (0x00062489) cale_week_time_pane_t5

0x13d1,	// (0x000624a3) cale_week_time_pane_t6

0x13eb,	// (0x000624bd) cale_week_time_pane_t7

0x1405,	// (0x000624d7) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00070228) cale_week_time_pane_t

0x1425,	// (0x000624f7) cell_cale_week_pane_g2

0x1449,	// (0x0006251b) cell_cale_week_pane_g3_ParamLimits

0x1449,	// (0x0006251b) cell_cale_week_pane_g3

0xc27c,	// (0x0006d34e) grid_highlight_pane_cp07

0xc284,	// (0x0006d356) listscroll_gms_pane

0xc28e,	// (0x0006d360) grid_gms_pane

0xc297,	// (0x0006d369) listscroll_gms_pane_g1

0xc29f,	// (0x0006d371) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00070239) listscroll_gms_pane_g

0x1461,	// (0x00062533) scroll_pane_cp010

0x146c,	// (0x0006253e) cell_gms_pane_ParamLimits

0x146c,	// (0x0006253e) cell_gms_pane

0x147e,	// (0x00062550) cell_gms_pane_g1

0xc2a7,	// (0x0006d379) cell_gms_pane_g2

0xc1ff,	// (0x0006d2d1) cell_gms_pane_g3

0xc2af,	// (0x0006d381) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x0007023e) cell_gms_pane_g

0xc2b8,	// (0x0006d38a) grid_highlight_pane_cp09

0x30fc,	// (0x000641ce) phob_pre_status_pane_g1

0x3104,	// (0x000641d6) phob_pre_status_pane_g2

0x310c,	// (0x000641de) phob_pre_status_pane_g3

0x3114,	// (0x000641e6) phob_pre_status_pane_g4

0x0004,

0xf52e,	// (0x00070600) phob_pre_status_pane_g

0x3124,	// (0x000641f6) phob_pre_status_pane_t1

0x3132,	// (0x00064204) phob_pre_status_pane_t2

0x3142,	// (0x00064214) phob_pre_status_pane_t3

0x0002,

0xf539,	// (0x0007060b) phob_pre_status_pane_t

0xc2c0,	// (0x0006d392) bg_list_pane_cp05

0x148e,	// (0x00062560) grid_vorec_pane

0x1496,	// (0x00062568) vorec_t1

0x14a4,	// (0x00062576) vorec_t2

0x14b2,	// (0x00062584) vorec_t3

0x14c0,	// (0x00062592) vorec_t4

0xbf51,	// (0x0006d023) vorec_t5

0x8f98,	// (0x0006a06a) vorec_t6

0x0004,

0xf175,	// (0x00070247) vorec_t

0x8fa6,	// (0x0006a078) wait_bar_pane_cp01

0x14dc,	// (0x000625ae) cell_vorec_pane_ParamLimits

0x14dc,	// (0x000625ae) cell_vorec_pane

0x9eec,	// (0x0006afbe) cell_vorec_pane_g1

0xbd80,	// (0x0006ce52) grid_highlight_pane_cp05

0xc00b,	// (0x0006d0dd) cams_zoom_pane

0xc00b,	// (0x0006d0dd) image_vga_pane

0xc072,	// (0x0006d144) main_camera_pane_g1

0xc072,	// (0x0006d144) main_camera_pane_g2

0xc072,	// (0x0006d144) main_camera_pane_g3

0xc072,	// (0x0006d144) main_camera_pane_g4

0xc072,	// (0x0006d144) main_camera_pane_g5

0xc072,	// (0x0006d144) main_camera_pane_g6

0xc072,	// (0x0006d144) main_camera_pane_g7

0x0007,

0xf180,	// (0x00070252) main_camera_pane_g

0xc0ba,	// (0x0006d18c) main_camera_pane_t1

0xc0ba,	// (0x0006d18c) main_camera_pane_t2

0x0001,

0xf191,	// (0x00070263) main_camera_pane_t

0x1503,	// (0x000625d5) cams_zoom_pane_cp_ParamLimits

0x1503,	// (0x000625d5) cams_zoom_pane_cp

0x1537,	// (0x00062609) image_cif_pane_ParamLimits

0x1537,	// (0x00062609) image_cif_pane

0xb963,	// (0x0006ca35) image_subqcif_pane

0x1549,	// (0x0006261b) main_video_pane_g1_ParamLimits

0x1549,	// (0x0006261b) main_video_pane_g1

0x1577,	// (0x00062649) main_video_pane_g2_ParamLimits

0x1577,	// (0x00062649) main_video_pane_g2

0x15b1,	// (0x00062683) main_video_pane_g3_ParamLimits

0x15b1,	// (0x00062683) main_video_pane_g3

0x15b1,	// (0x00062683) main_video_pane_g4_ParamLimits

0x15b1,	// (0x00062683) main_video_pane_g4

0x15e5,	// (0x000626b7) main_video_pane_g5_ParamLimits

0x15e5,	// (0x000626b7) main_video_pane_g5

0xc2c8,	// (0x0006d39a) main_video_pane_g6_ParamLimits

0xc2c8,	// (0x0006d39a) main_video_pane_g6

0x0006,

0xf196,	// (0x00070268) main_video_pane_g_ParamLimits

0xf196,	// (0x00070268) main_video_pane_g

0x1601,	// (0x000626d3) main_video_pane_t1_ParamLimits

0x1601,	// (0x000626d3) main_video_pane_t1

0xc0b0,	// (0x0006d182) cams_zoom_pane_g1

0xc0b0,	// (0x0006d182) cams_zoom_pane_g2

0xc0b0,	// (0x0006d182) cams_zoom_pane_g3

0xc0b0,	// (0x0006d182) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00070277) cams_zoom_pane_g

0xc00b,	// (0x0006d0dd) grid_cams_pane

0xc00b,	// (0x0006d0dd) linegrid_cams_pane

0x1645,	// (0x00062717) cell_cams_pane_ParamLimits

0x1645,	// (0x00062717) cell_cams_pane

0xb963,	// (0x0006ca35) cams_burst_image_pane

0xc0b0,	// (0x0006d182) cell_cams_pane_g1

0xb963,	// (0x0006ca35) grid_highlight_pane_cp03

0xc001,	// (0x0006d0d3) mp_bg_pane_g1

0xb963,	// (0x0006ca35) bg_list_pane_cp03

0xb963,	// (0x0006ca35) bg_mp_pane

0xb963,	// (0x0006ca35) grid_mp_pane

0xc0b0,	// (0x0006d182) media_player_g1

0xc804,	// (0x0006d8d6) media_player_t1

0xc804,	// (0x0006d8d6) media_player_t2

0xc804,	// (0x0006d8d6) media_player_t3

0xc804,	// (0x0006d8d6) media_player_t4

0xc804,	// (0x0006d8d6) media_player_t5

0xc804,	// (0x0006d8d6) media_player_t6

0xc804,	// (0x0006d8d6) media_player_t7

0x0006,

0xf518,	// (0x000705ea) media_player_t

0xb963,	// (0x0006ca35) wait_bar_pane_cp02

0xf4fd,	// (0x000705cf) main_usb_pane_t

0xcc0c,	// (0x0006dcde) cell_mp_pane

0xc001,	// (0x0006d0d3) cell_mp_pane_g1

0xbd80,	// (0x0006ce52) grid_highlight_pane_cp06

0xc2e2,	// (0x0006d3b4) grid_skin_colour_pane

0xc2ea,	// (0x0006d3bc) list_highlight_pane_cp03

0x165a,	// (0x0006272c) skin_g1

0xc2f2,	// (0x0006d3c4) skin_t1

0xc301,	// (0x0006d3d3) skin_t2

0x0001,

0xf1d3,	// (0x000702a5) skin_t

0x1662,	// (0x00062734) cell_skin_colour_pane_ParamLimits

0x1662,	// (0x00062734) cell_skin_colour_pane

0xc30f,	// (0x0006d3e1) cell_skin_colour_pane_g1

0x16db,	// (0x000627ad) call_video_g1_ParamLimits

0x16db,	// (0x000627ad) call_video_g1

0x16f7,	// (0x000627c9) call_video_g2_ParamLimits

0x16f7,	// (0x000627c9) call_video_g2

0x0001,

0xf1d8,	// (0x000702aa) call_video_g_ParamLimits

0xf1d8,	// (0x000702aa) call_video_g

0x1749,	// (0x0006281b) call_video_uplink_pane_cp1_ParamLimits

0x1749,	// (0x0006281b) call_video_uplink_pane_cp1

0xc321,	// (0x0006d3f3) call_video_uplink_pane_cp2

0x17e8,	// (0x000628ba) video_down_crop_pane_ParamLimits

0x17e8,	// (0x000628ba) video_down_crop_pane

0x18d1,	// (0x000629a3) video_down_pane_ParamLimits

0x18d1,	// (0x000629a3) video_down_pane

0xc329,	// (0x0006d3fb) video_down_subqcif_pane_ParamLimits

0xc329,	// (0x0006d3fb) video_down_subqcif_pane

0xc341,	// (0x0006d413) video_down_subqcif_pane_cp_ParamLimits

0xc341,	// (0x0006d413) video_down_subqcif_pane_cp

0xc367,	// (0x0006d439) im_reading_pane_ParamLimits

0xc367,	// (0x0006d439) im_reading_pane

0x19e1,	// (0x00062ab3) im_writing_pane_ParamLimits

0x19e1,	// (0x00062ab3) im_writing_pane

0x19f7,	// (0x00062ac9) im_reading_pane_t1

0xc381,	// (0x0006d453) list_im_pane

0xc392,	// (0x0006d464) scroll_pane_cp07

0x1a31,	// (0x00062b03) im_writing_pane_t1_ParamLimits

0x1a31,	// (0x00062b03) im_writing_pane_t1

0xc3ab,	// (0x0006d47d) im_writing_pane_t2_ParamLimits

0xc3ab,	// (0x0006d47d) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x000702b4) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x000702b4) im_writing_pane_t

0xbd80,	// (0x0006ce52) input_focus_pane_cp04

0xbd80,	// (0x0006ce52) input_focus_pane_cp05

0x1a46,	// (0x00062b18) list_im_single_pane_ParamLimits

0x1a46,	// (0x00062b18) list_im_single_pane

0x1a5b,	// (0x00062b2d) list_single_im_pane_t1

0xc2c0,	// (0x0006d392) blid_accuracy_pane

0xc2c0,	// (0x0006d392) blid_compass_pane

0xe43c,	// (0x0006f50e) main_location_t1

0xe43c,	// (0x0006f50e) main_location_t2

0xe43c,	// (0x0006f50e) main_location_t3

0x0002,

0xf527,	// (0x000705f9) main_location_t

0xbd80,	// (0x0006ce52) aid_levels_location

0xc001,	// (0x0006d0d3) blid_accuracy_pane_g1

0xc001,	// (0x0006d0d3) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x00070303) blid_accuracy_pane_g

0xc3f3,	// (0x0006d4c5) wml_content_pane

0xc431,	// (0x0006d503) wml_button_pane_ParamLimits

0xc431,	// (0x0006d503) wml_button_pane

0x1a6a,	// (0x00062b3c) wml_list_single_large_pane_ParamLimits

0x1a6a,	// (0x00062b3c) wml_list_single_large_pane

0x1a7f,	// (0x00062b51) wml_list_single_medium_pane_ParamLimits

0x1a7f,	// (0x00062b51) wml_list_single_medium_pane

0x1a96,	// (0x00062b68) wml_list_single_small_pane_ParamLimits

0x1a96,	// (0x00062b68) wml_list_single_small_pane

0xc445,	// (0x0006d517) wml_selection_box_pane_ParamLimits

0xc445,	// (0x0006d517) wml_selection_box_pane

0xc458,	// (0x0006d52a) wml_list_single_pane_t1

0xc467,	// (0x0006d539) wml_list_single_medium_pane_t1

0xc476,	// (0x0006d548) wml_list_single_large_pane_t1

0xc485,	// (0x0006d557) input_focus_pane_cp02_ParamLimits

0xc485,	// (0x0006d557) input_focus_pane_cp02

0xc498,	// (0x0006d56a) wml_selection_box_pane_g1

0xc4a1,	// (0x0006d573) wml_selection_box_pane_t1_ParamLimits

0xc4a1,	// (0x0006d573) wml_selection_box_pane_t1

0xbfe9,	// (0x0006d0bb) bg_wml_button_pane_ParamLimits

0xbfe9,	// (0x0006d0bb) bg_wml_button_pane

0xc4b9,	// (0x0006d58b) wml_button_pane_g1

0xc4c1,	// (0x0006d593) wml_button_pane_t1

0xc4b9,	// (0x0006d58b) wml_button_bg_pane_g1

0xc4d1,	// (0x0006d5a3) wml_button_bg_pane_g2

0xc4d9,	// (0x0006d5ab) wml_button_bg_pane_g3

0xc4e1,	// (0x0006d5b3) wml_button_bg_pane_g4

0xc4e9,	// (0x0006d5bb) wml_button_bg_pane_g5

0xc4fa,	// (0x0006d5cc) wml_button_bg_pane_g6

0xc502,	// (0x0006d5d4) wml_button_bg_pane_g7

0xc50a,	// (0x0006d5dc) wml_button_bg_pane_g8

0xc512,	// (0x0006d5e4) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x000702b9) wml_button_bg_pane_g

0x1aaf,	// (0x00062b81) bg_list_pane_cp02

0xc51a,	// (0x0006d5ec) mce_header_pane_ParamLimits

0xc51a,	// (0x0006d5ec) mce_header_pane

0xc530,	// (0x0006d602) mce_icon_pane

0xc530,	// (0x0006d602) mce_image_pane

0xc539,	// (0x0006d60b) mce_text_pane_ParamLimits

0xc539,	// (0x0006d60b) mce_text_pane

0x1ab7,	// (0x00062b89) scroll_pane_cp03

0xc429,	// (0x0006d4fb) scroll_pane_cp04

0xc54c,	// (0x0006d61e) scroll_pane_cp05_ParamLimits

0xc54c,	// (0x0006d61e) scroll_pane_cp05

0x1ac1,	// (0x00062b93) mce_header_field_pane_ParamLimits

0x1ac1,	// (0x00062b93) mce_header_field_pane

0x1ad8,	// (0x00062baa) mce_header_field_pane_2_ParamLimits

0x1ad8,	// (0x00062baa) mce_header_field_pane_2

0x1aee,	// (0x00062bc0) mce_header_field_pane_3

0x1af6,	// (0x00062bc8) list_single_mce_message_pane_ParamLimits

0x1af6,	// (0x00062bc8) list_single_mce_message_pane

0x1b0c,	// (0x00062bde) list_single_mce_smart_pane_ParamLimits

0x1b0c,	// (0x00062bde) list_single_mce_smart_pane

0xc558,	// (0x0006d62a) input_focus_pane_cp03

0xc561,	// (0x0006d633) list_header_data_pane

0x1b2d,	// (0x00062bff) mce_header_field_pane_t1

0x1b3d,	// (0x00062c0f) list_single_mce_header_pane_ParamLimits

0x1b3d,	// (0x00062c0f) list_single_mce_header_pane

0xc569,	// (0x0006d63b) list_single_mce_header_pane_t1

0xc578,	// (0x0006d64a) list_single_mce_message_pane_g1

0xc580,	// (0x0006d652) list_single_mce_message_pane_t1

0x1b77,	// (0x00062c49) bg_cale_heading_pane_cp01_ParamLimits

0x1b77,	// (0x00062c49) bg_cale_heading_pane_cp01

0xc58e,	// (0x0006d660) bg_cale_pane_cp02_ParamLimits

0xc58e,	// (0x0006d660) bg_cale_pane_cp02

0x1bb1,	// (0x00062c83) cale_month_corner_pane

0x1bd0,	// (0x00062ca2) cale_month_day_heading_pane_ParamLimits

0x1bd0,	// (0x00062ca2) cale_month_day_heading_pane

0x1c22,	// (0x00062cf4) cale_month_pane_g1_ParamLimits

0x1c22,	// (0x00062cf4) cale_month_pane_g1

0x1c51,	// (0x00062d23) cale_month_pane_g2_ParamLimits

0x1c51,	// (0x00062d23) cale_month_pane_g2

0x1c81,	// (0x00062d53) cale_month_pane_g3_ParamLimits

0x1c81,	// (0x00062d53) cale_month_pane_g3

0x1cbd,	// (0x00062d8f) cale_month_pane_g4_ParamLimits

0x1cbd,	// (0x00062d8f) cale_month_pane_g4

0x1cf9,	// (0x00062dcb) cale_month_pane_g5_ParamLimits

0x1cf9,	// (0x00062dcb) cale_month_pane_g5

0x1d41,	// (0x00062e13) cale_month_pane_g6_ParamLimits

0x1d41,	// (0x00062e13) cale_month_pane_g6

0x1d8d,	// (0x00062e5f) cale_month_pane_g7_ParamLimits

0x1d8d,	// (0x00062e5f) cale_month_pane_g7

0x1ddd,	// (0x00062eaf) cale_month_pane_g8_ParamLimits

0x1ddd,	// (0x00062eaf) cale_month_pane_g8

0x1e31,	// (0x00062f03) cale_month_pane_g9_ParamLimits

0x1e31,	// (0x00062f03) cale_month_pane_g9

0x1e83,	// (0x00062f55) cale_month_pane_g10_ParamLimits

0x1e83,	// (0x00062f55) cale_month_pane_g10

0x1ed5,	// (0x00062fa7) cale_month_pane_g11_ParamLimits

0x1ed5,	// (0x00062fa7) cale_month_pane_g11

0x1f27,	// (0x00062ff9) cale_month_pane_g12_ParamLimits

0x1f27,	// (0x00062ff9) cale_month_pane_g12

0x1f79,	// (0x0006304b) cale_month_pane_g13_ParamLimits

0x1f79,	// (0x0006304b) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x000702cc) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x000702cc) cale_month_pane_g

0x1fcb,	// (0x0006309d) cale_month_week_pane

0x1fef,	// (0x000630c1) grid_cale_month_pane_ParamLimits

0x1fef,	// (0x000630c1) grid_cale_month_pane

0x2038,	// (0x0006310a) cale_month_day_heading_pane_t1

0x207a,	// (0x0006314c) cale_month_day_heading_pane_t2

0x20af,	// (0x00063181) cale_month_day_heading_pane_t3

0x20e4,	// (0x000631b6) cale_month_day_heading_pane_t4

0x2121,	// (0x000631f3) cale_month_day_heading_pane_t5

0x2166,	// (0x00063238) cale_month_day_heading_pane_t6

0x21ab,	// (0x0006327d) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x000702e7) cale_month_day_heading_pane_t

0xc26e,	// (0x0006d340) bg_cale_side_pane_cp01

0x21f8,	// (0x000632ca) cale_month_week_pane_t1

0x2211,	// (0x000632e3) cale_month_week_pane_t2

0x222a,	// (0x000632fc) cale_month_week_pane_t3

0x2243,	// (0x00063315) cale_month_week_pane_t4

0x225c,	// (0x0006332e) cale_month_week_pane_t5

0x2275,	// (0x00063347) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x000702f6) cale_month_week_pane_t

0x228e,	// (0x00063360) cell_cale_month_pane_ParamLimits

0x228e,	// (0x00063360) cell_cale_month_pane

0x9ef6,	// (0x0006afc8) cell_cale_month_pane_g1

0x23bc,	// (0x0006348e) cell_cale_month_pane_t1_ParamLimits

0x23bc,	// (0x0006348e) cell_cale_month_pane_t1

0xc27c,	// (0x0006d34e) grid_highlight_pane_cp08

0xc001,	// (0x0006d0d3) main_smil_g1

0x23e8,	// (0x000634ba) smil_status_pane

0xc5cd,	// (0x0006d69f) smil_text_pane

0xe314,	// (0x0006f3e6) bg_popup_call3_rect_pane_g8

0xe31c,	// (0x0006f3ee) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x0007057f) bg_popup_call3_rect_pane_g

0xe505,	// (0x0006f5d7) smil_status_volume_pane_g1

0xc5d7,	// (0x0006d6a9) smil_status_pane_t1

0xa048,	// (0x0006b11a) volume_smil_pane

0xc5ee,	// (0x0006d6c0) list_smil_text_pane

0x23fd,	// (0x000634cf) scroll_pane_cp011

0x2408,	// (0x000634da) smil_text_list_pane_t1_ParamLimits

0x2408,	// (0x000634da) smil_text_list_pane_t1

0x9f02,	// (0x0006afd4) aid_volume_smil_ParamLimits

0x9f02,	// (0x0006afd4) aid_volume_smil

0xc001,	// (0x0006d0d3) smil_volume_pane_g1

0xc001,	// (0x0006d0d3) smil_volume_pane_g2

0x0001,

0xf231,	// (0x00070303) smil_volume_pane_g

0x0f2d,	// (0x00061fff) listscroll_cale_day_pane

0xc5f8,	// (0x0006d6ca) bg_cale_pane

0xc610,	// (0x0006d6e2) list_cale_pane

0xc633,	// (0x0006d705) scroll_pane_cp09

0xc644,	// (0x0006d716) cale_bg_pane_g1

0xc64c,	// (0x0006d71e) cale_bg_pane_g2

0xc654,	// (0x0006d726) cale_bg_pane_g3

0xc65c,	// (0x0006d72e) cale_bg_pane_g4

0xc664,	// (0x0006d736) cale_bg_pane_g5

0xc66c,	// (0x0006d73e) cale_bg_pane_g6

0xc674,	// (0x0006d746) cale_bg_pane_g7

0xc67c,	// (0x0006d74e) cale_bg_pane_g8

0xc684,	// (0x0006d756) cale_bg_pane_g9

0x0008,

0xf236,	// (0x00070308) cale_bg_pane_g

0x2454,	// (0x00063526) list_cale_time_pane_ParamLimits

0x2454,	// (0x00063526) list_cale_time_pane

0xc68c,	// (0x0006d75e) list_cale_time_pane_g1_ParamLimits

0xc68c,	// (0x0006d75e) list_cale_time_pane_g1

0xc698,	// (0x0006d76a) list_cale_time_pane_g2_ParamLimits

0xc698,	// (0x0006d76a) list_cale_time_pane_g2

0x246a,	// (0x0006353c) list_cale_time_pane_g3_ParamLimits

0x246a,	// (0x0006353c) list_cale_time_pane_g3

0x2478,	// (0x0006354a) list_cale_time_pane_g4_ParamLimits

0x2478,	// (0x0006354a) list_cale_time_pane_g4

0x2486,	// (0x00063558) list_cale_time_pane_g5_ParamLimits

0x2486,	// (0x00063558) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x0007031b) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x0007031b) list_cale_time_pane_g

0xc6b2,	// (0x0006d784) list_cale_time_pane_t1_ParamLimits

0xc6b2,	// (0x0006d784) list_cale_time_pane_t1

0xc6da,	// (0x0006d7ac) list_cale_time_pane_t2_ParamLimits

0xc6da,	// (0x0006d7ac) list_cale_time_pane_t2

0x2713,	// (0x000637e5) aid_blid_cardinal_pane

0x2751,	// (0x00063823) compass_pane_t4

0xc702,	// (0x0006d7d4) list_cale_time_pane_t4_ParamLimits

0xc702,	// (0x0006d7d4) list_cale_time_pane_t4

0x275f,	// (0x00063831) compass_pane_t5

0x276d,	// (0x0006383f) compass_pane_t6

0x277b,	// (0x0006384d) compass_pane_t7

0xcd26,	// (0x0006ddf8) navi_pane_cc_t1

0xd18b,	// (0x0006e25d) aid_phob_thumbnail_center_pane

0x2b4e,	// (0x00063c20) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x00070328) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x00070328) list_cale_time_pane_t

0xb9d7,	// (0x0006caa9) bg_popup_window_pane_cp02_ParamLimits

0xb9d7,	// (0x0006caa9) bg_popup_window_pane_cp02

0xc72a,	// (0x0006d7fc) heading_pane_cp01_ParamLimits

0xc72a,	// (0x0006d7fc) heading_pane_cp01

0xc736,	// (0x0006d808) loc_req_pane_ParamLimits

0xc736,	// (0x0006d808) loc_req_pane

0xc746,	// (0x0006d818) loc_type_pane_ParamLimits

0xc746,	// (0x0006d818) loc_type_pane

0xc758,	// (0x0006d82a) loc_type_pane_t1_ParamLimits

0xc758,	// (0x0006d82a) loc_type_pane_t1

0xc76a,	// (0x0006d83c) loc_type_pane_t2_ParamLimits

0xc76a,	// (0x0006d83c) loc_type_pane_t2

0xc77c,	// (0x0006d84e) loc_type_pane_t3_ParamLimits

0xc77c,	// (0x0006d84e) loc_type_pane_t3

0x0002,

0xf25d,	// (0x0007032f) loc_type_pane_t_ParamLimits

0xf25d,	// (0x0007032f) loc_type_pane_t

0xc78e,	// (0x0006d860) list_loc_req_pane

0xc798,	// (0x0006d86a) scroll_pane_cp012

0x2494,	// (0x00063566) list_single_loc_request_popup_menu_pane_ParamLimits

0x2494,	// (0x00063566) list_single_loc_request_popup_menu_pane

0xc7a3,	// (0x0006d875) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xc7a3,	// (0x0006d875) list_single_loc_request_popup_menu_pane_g1

0xc7af,	// (0x0006d881) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xc7af,	// (0x0006d881) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x00070336) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x00070336) list_single_loc_request_popup_menu_pane_g

0xc7bb,	// (0x0006d88d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xc7bb,	// (0x0006d88d) list_single_loc_request_popup_menu_pane_t1

0xbfe9,	// (0x0006d0bb) bg_popup_window_pane_cp03_ParamLimits

0xbfe9,	// (0x0006d0bb) bg_popup_window_pane_cp03

0xc7d1,	// (0x0006d8a3) heading_loc_req_pane_ParamLimits

0xc7d1,	// (0x0006d8a3) heading_loc_req_pane

0x24a1,	// (0x00063573) popup_dyc_status_message_window_g1_ParamLimits

0x24a1,	// (0x00063573) popup_dyc_status_message_window_g1

0x24b5,	// (0x00063587) popup_dyc_status_message_window_t1_ParamLimits

0x24b5,	// (0x00063587) popup_dyc_status_message_window_t1

0x24ca,	// (0x0006359c) popup_dyc_status_message_window_t2_ParamLimits

0x24ca,	// (0x0006359c) popup_dyc_status_message_window_t2

0x24df,	// (0x000635b1) popup_dyc_status_message_window_t3_ParamLimits

0x24df,	// (0x000635b1) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x0007033b) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x0007033b) popup_dyc_status_message_window_t

0xbd80,	// (0x0006ce52) bg_heading_pane_cp01

0xc7dd,	// (0x0006d8af) heading_loc_req_pane_g1

0xc7e5,	// (0x0006d8b7) heading_loc_req_pane_g2

0xc7ed,	// (0x0006d8bf) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x00070342) heading_loc_req_pane_g

0xc7f5,	// (0x0006d8c7) heading_loc_req_pane_t1

0xc814,	// (0x0006d8e6) bg_popup_sub_pane_cp01_ParamLimits

0xc814,	// (0x0006d8e6) bg_popup_sub_pane_cp01

0xc822,	// (0x0006d8f4) popup_cale_events_window_g1_ParamLimits

0xc822,	// (0x0006d8f4) popup_cale_events_window_g1

0xc842,	// (0x0006d914) popup_cale_events_window_g2_ParamLimits

0xc842,	// (0x0006d914) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x00070364) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x00070364) popup_cale_events_window_g

0xc862,	// (0x0006d934) popup_cale_events_window_t1_ParamLimits

0xc862,	// (0x0006d934) popup_cale_events_window_t1

0xc874,	// (0x0006d946) popup_cale_events_window_t2_ParamLimits

0xc874,	// (0x0006d946) popup_cale_events_window_t2

0xc8b2,	// (0x0006d984) popup_cale_events_window_t3_ParamLimits

0xc8b2,	// (0x0006d984) popup_cale_events_window_t3

0xca88,	// (0x0006db5a) popup_cale_events_window_t4_ParamLimits

0xca88,	// (0x0006db5a) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x00070369) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x00070369) popup_cale_events_window_t

0x2507,	// (0x000635d9) call_type_pane

0x2517,	// (0x000635e9) popup_call_status_window_g1

0x252b,	// (0x000635fd) popup_call_status_window_g2

0x253f,	// (0x00063611) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x00070372) popup_call_status_window_g

0xcabe,	// (0x0006db90) call_type_pane_g1

0xcac7,	// (0x0006db99) call_type_pane_g2

0x0001,

0xf2a7,	// (0x00070379) call_type_pane_g

0xbd80,	// (0x0006ce52) bg_popup_sub_pane_cp02

0xcad0,	// (0x0006dba2) listscroll_popup_wml_pane

0xcad8,	// (0x0006dbaa) list_wml_pane

0xcae2,	// (0x0006dbb4) scroll_pane_cp013

0xcaed,	// (0x0006dbbf) list_single_graphic_popup_wml_pane_ParamLimits

0xcaed,	// (0x0006dbbf) list_single_graphic_popup_wml_pane

0xc001,	// (0x0006d0d3) list_single_graphic_popup_wml_pane_g1

0xcb01,	// (0x0006dbd3) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x0007037e) list_single_graphic_popup_wml_pane_g

0xcb09,	// (0x0006dbdb) list_single_graphic_popup_wml_pane_t1

0xcb1f,	// (0x0006dbf1) aid_call_pane

0xbfe1,	// (0x0006d0b3) popup_clock_analogue_window_g1

0xbfe1,	// (0x0006d0b3) popup_clock_analogue_window_g2

0x9f30,	// (0x0006b002) popup_clock_analogue_window_g3

0x9f30,	// (0x0006b002) popup_clock_analogue_window_g4

0xc001,	// (0x0006d0d3) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x00070383) popup_clock_analogue_window_g

0x9f38,	// (0x0006b00a) popup_clock_analogue_window_t1

0x9f46,	// (0x0006b018) clock_digital_number_pane_ParamLimits

0x9f46,	// (0x0006b018) clock_digital_number_pane

0x9f52,	// (0x0006b024) clock_digital_number_pane_cp02_ParamLimits

0x9f52,	// (0x0006b024) clock_digital_number_pane_cp02

0x9f5e,	// (0x0006b030) clock_digital_number_pane_cp03_ParamLimits

0x9f5e,	// (0x0006b030) clock_digital_number_pane_cp03

0x9f6a,	// (0x0006b03c) clock_digital_number_pane_cp04_ParamLimits

0x9f6a,	// (0x0006b03c) clock_digital_number_pane_cp04

0x9f76,	// (0x0006b048) clock_digital_separator_pane_ParamLimits

0x9f76,	// (0x0006b048) clock_digital_separator_pane

0x9f82,	// (0x0006b054) popup_clock_digital_window_t1

0xc001,	// (0x0006d0d3) clock_digital_number_pane_g1

0xc001,	// (0x0006d0d3) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x00070303) clock_digital_number_pane_g

0xc001,	// (0x0006d0d3) clock_digital_separator_pane_g1

0xc001,	// (0x0006d0d3) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x00070303) clock_digital_separator_pane_g

0xbd80,	// (0x0006ce52) bg_popup_window_pane_cp04

0xcb27,	// (0x0006dbf9) heading_pane_cp03

0xc2c0,	// (0x0006d392) listscroll_popup_gms_pane

0xbd80,	// (0x0006ce52) grid_large_graphic_popup_pane

0xcb30,	// (0x0006dc02) listscroll_popup_gms_pane_g1

0xcb39,	// (0x0006dc0b) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x0007038e) listscroll_popup_gms_pane_g

0xcb42,	// (0x0006dc14) scroll_pane_cp014

0xc064,	// (0x0006d136) cell_large_graphic_popup_pane_ParamLimits

0xc064,	// (0x0006d136) cell_large_graphic_popup_pane

0xc072,	// (0x0006d144) cell_large_graphic_popup_pane_g1_ParamLimits

0xc072,	// (0x0006d144) cell_large_graphic_popup_pane_g1

0xcb4b,	// (0x0006dc1d) cell_large_graphic_popup_pane_g2_ParamLimits

0xcb4b,	// (0x0006dc1d) cell_large_graphic_popup_pane_g2

0xcb59,	// (0x0006dc2b) cell_large_graphic_popup_pane_g3_ParamLimits

0xcb59,	// (0x0006dc2b) cell_large_graphic_popup_pane_g3

0xcb67,	// (0x0006dc39) cell_large_graphic_popup_pane_g4_ParamLimits

0xcb67,	// (0x0006dc39) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x00070393) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x00070393) cell_large_graphic_popup_pane_g

0xbd80,	// (0x0006ce52) grid_highlight_pane_cp010

0xc001,	// (0x0006d0d3) bg_popup_call_pane_g1

0xcb78,	// (0x0006dc4a) list_single_graphic_popup_conf_pane_ParamLimits

0xcb78,	// (0x0006dc4a) list_single_graphic_popup_conf_pane

0xcb8b,	// (0x0006dc5d) list_highlight_pane_cp01

0xcb94,	// (0x0006dc66) list_single_graphic_popup_conf_pane_g1

0xcb9c,	// (0x0006dc6e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x0007039c) list_single_graphic_popup_conf_pane_g

0xcba4,	// (0x0006dc76) list_single_graphic_popup_conf_pane_t1

0xcbb2,	// (0x0006dc84) linegrid_cams_pane_g1

0x254e,	// (0x00063620) linegrid_cams_pane_g2

0xc1ff,	// (0x0006d2d1) linegrid_cams_pane_g3

0xcbbb,	// (0x0006dc8d) linegrid_cams_pane_g4

0x2557,	// (0x00063629) linegrid_cams_pane_g5

0x2560,	// (0x00063632) linegrid_cams_pane_g6

0xc2af,	// (0x0006d381) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x000703a1) linegrid_cams_pane_g

0xcbc4,	// (0x0006dc96) popup_clock_analogue_window

0xcbc4,	// (0x0006dc96) popup_clock_digital_window

0xbd80,	// (0x0006ce52) popup_phob_thumbnail_window

0xc001,	// (0x0006d0d3) call_video_uplink_pane_g1

0xcbcd,	// (0x0006dc9f) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x000703b0) call_video_uplink_pane_g

0xcbd5,	// (0x0006dca7) video_uplink_pane

0xcbdd,	// (0x0006dcaf) mce_image_pane_g1

0x256b,	// (0x0006363d) mce_image_pane_g2

0x2573,	// (0x00063645) mce_image_pane_g3

0x257b,	// (0x0006364d) mce_image_pane_g4

0x2585,	// (0x00063657) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x000703b5) mce_image_pane_g

0xcbe7,	// (0x0006dcb9) control_top_pane_stacon_cp01_ParamLimits

0xcbe7,	// (0x0006dcb9) control_top_pane_stacon_cp01

0xcbfb,	// (0x0006dccd) uni_indicator_pane_stacon_cp01_ParamLimits

0xcbfb,	// (0x0006dccd) uni_indicator_pane_stacon_cp01

0xcc0c,	// (0x0006dcde) bg_popup_sub_pane_cp03

0x258d,	// (0x0006365f) chi_dic_find_pane

0x2595,	// (0x00063667) listscroll_chi_dic_pane

0x259e,	// (0x00063670) main_pane_chidic_g1

0x25b1,	// (0x00063683) chi_dic_find_pane_t1

0xcc16,	// (0x0006dce8) find_chidic_pane

0xcc1f,	// (0x0006dcf1) chi_dic_list_pane_ParamLimits

0xcc1f,	// (0x0006dcf1) chi_dic_list_pane

0xcc30,	// (0x0006dd02) scroll_pane_cp020

0x25bf,	// (0x00063691) find_chidic_pane_t1

0xbd80,	// (0x0006ce52) input_focus_pane_cp06

0x25ce,	// (0x000636a0) list_chi_dic_pane_ParamLimits

0x25ce,	// (0x000636a0) list_chi_dic_pane

0x25e0,	// (0x000636b2) list_chi_dic_pane_t1_ParamLimits

0x25e0,	// (0x000636b2) list_chi_dic_pane_t1

0xbd80,	// (0x0006ce52) list_highlight_pane_cp020

0xcc38,	// (0x0006dd0a) bg_cale_heading_pane_g1

0x25f3,	// (0x000636c5) bg_cale_heading_pane_g2

0x25fb,	// (0x000636cd) bg_cale_heading_pane_g3

0x2603,	// (0x000636d5) bg_cale_heading_pane_g4

0x260d,	// (0x000636df) bg_cale_heading_pane_g5

0x2617,	// (0x000636e9) bg_cale_heading_pane_g6

0x261f,	// (0x000636f1) bg_cale_heading_pane_g7

0x2627,	// (0x000636f9) bg_cale_heading_pane_g8

0x2631,	// (0x00063703) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x000703c0) bg_cale_heading_pane_g

0xcc38,	// (0x0006dd0a) bg_cale_side_pane_g1

0x263b,	// (0x0006370d) bg_cale_side_pane_g2

0x2643,	// (0x00063715) bg_cale_side_pane_g3

0x264b,	// (0x0006371d) bg_cale_side_pane_g4

0x2653,	// (0x00063725) bg_cale_side_pane_g5

0x265b,	// (0x0006372d) bg_cale_side_pane_g6

0x2663,	// (0x00063735) bg_cale_side_pane_g7

0x266b,	// (0x0006373d) bg_cale_side_pane_g8

0x2673,	// (0x00063745) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x000703d3) bg_cale_side_pane_g

0x267b,	// (0x0006374d) popup_call_status_window_ParamLimits

0x267b,	// (0x0006374d) popup_call_status_window

0xcc40,	// (0x0006dd12) stacon_top_pane

0xcc48,	// (0x0006dd1a) status_pane_ParamLimits

0xcc48,	// (0x0006dd1a) status_pane

0xcc5d,	// (0x0006dd2f) status_small_pane

0xcc65,	// (0x0006dd37) control_pane

0xbd80,	// (0x0006ce52) stacon_bottom_pane

0xcc6d,	// (0x0006dd3f) list_single_mce_smart_pane_t1_ParamLimits

0xcc6d,	// (0x0006dd3f) list_single_mce_smart_pane_t1

0xcc80,	// (0x0006dd52) list_single_mce_smart_pane_t2_ParamLimits

0xcc80,	// (0x0006dd52) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x000703e6) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x000703e6) list_single_mce_smart_pane_t

0x26c2,	// (0x00063794) compass_pane

0x26cb,	// (0x0006379d) main_location2_pane_t1

0x26dd,	// (0x000637af) main_location2_pane_t2

0x26ef,	// (0x000637c1) main_location2_pane_t3

0x0003,

0xf319,	// (0x000703eb) main_location2_pane_t

0xcc9f,	// (0x0006dd71) compass_pane_g1_ParamLimits

0xcc9f,	// (0x0006dd71) compass_pane_g1

0x2733,	// (0x00063805) compass_pane_t1

0x2742,	// (0x00063814) compass_pane_t2

0x0005,

0xf322,	// (0x000703f4) compass_pane_t

0x2789,	// (0x0006385b) text_secondary_cp61

0xcd1d,	// (0x0006ddef) navi_pane_cams_g5

0xd021,	// (0x0006e0f3) navi_pane_im_t1

0xd02f,	// (0x0006e101) navi_pane_mp_g1_ParamLimits

0xd02f,	// (0x0006e101) navi_pane_mp_g1

0xd043,	// (0x0006e115) navi_pane_mp_g2_ParamLimits

0xd043,	// (0x0006e115) navi_pane_mp_g2

0xd04f,	// (0x0006e121) navi_pane_mp_g3_ParamLimits

0xd04f,	// (0x0006e121) navi_pane_mp_g3

0x0002,

0xf336,	// (0x00070408) navi_pane_mp_g_ParamLimits

0xf336,	// (0x00070408) navi_pane_mp_g

0xd05b,	// (0x0006e12d) navi_pane_mp_t1

0xd069,	// (0x0006e13b) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x0007040f) navi_pane_mp_t

0xd0d4,	// (0x0006e1a6) navi_pane_vt_g1

0xd05b,	// (0x0006e12d) navi_pane_vt_t1

0xd0dc,	// (0x0006e1ae) navi_slider_pane

0xc2c0,	// (0x0006d392) zooming_pane

0xd0ec,	// (0x0006e1be) navi_slider_pane_g1

0x9f9f,	// (0x0006b071) navi_slider_pane_g2

0x0006,

0xf344,	// (0x00070416) navi_slider_pane_g

0xd110,	// (0x0006e1e2) aid_levels_zoom

0xd118,	// (0x0006e1ea) zooming_pane_g1

0xd120,	// (0x0006e1f2) zooming_pane_g2

0xd120,	// (0x0006e1f2) zooming_pane_g3

0x0002,

0xf353,	// (0x00070425) zooming_pane_g

0xd128,	// (0x0006e1fa) level_10_zoom

0xd131,	// (0x0006e203) level_11_zoom

0xd13a,	// (0x0006e20c) level_1_zoom

0xd143,	// (0x0006e215) level_2_zoom

0xd14c,	// (0x0006e21e) level_3_zoom

0xd155,	// (0x0006e227) level_4_zoom

0xd15e,	// (0x0006e230) level_5_zoom

0xd167,	// (0x0006e239) level_6_zoom

0xd170,	// (0x0006e242) level_7_zoom

0xd179,	// (0x0006e24b) level_8_zoom

0xd182,	// (0x0006e254) level_9_zoom

0xd193,	// (0x0006e265) popup_phob_thumbnail_window_g1

0xd19b,	// (0x0006e26d) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x0007042c) popup_phob_thumbnail_window_g

0x3152,	// (0x00064224) level_1_location

0x315a,	// (0x0006422c) level_2_location

0x3162,	// (0x00064234) level_3_location

0x316a,	// (0x0006423c) level_4_location

0xc2c0,	// (0x0006d392) level_5_location

0x27da,	// (0x000638ac) mce_icon_pane_g1

0x27e4,	// (0x000638b6) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x00070431) mce_icon_pane_g

0xd1a3,	// (0x0006e275) main_mup_pane_g1_ParamLimits

0xd1a3,	// (0x0006e275) main_mup_pane_g1

0xd1a3,	// (0x0006e275) main_mup_pane_g2_ParamLimits

0xd1a3,	// (0x0006e275) main_mup_pane_g2

0xd1a3,	// (0x0006e275) main_mup_pane_g3_ParamLimits

0xd1a3,	// (0x0006e275) main_mup_pane_g3

0xd1a3,	// (0x0006e275) main_mup_pane_g4_ParamLimits

0xd1a3,	// (0x0006e275) main_mup_pane_g4

0xd1a3,	// (0x0006e275) main_mup_pane_g5_ParamLimits

0xd1a3,	// (0x0006e275) main_mup_pane_g5

0xd1a3,	// (0x0006e275) main_mup_pane_g6_ParamLimits

0xd1a3,	// (0x0006e275) main_mup_pane_g6

0xd1a3,	// (0x0006e275) main_mup_pane_g7_ParamLimits

0xd1a3,	// (0x0006e275) main_mup_pane_g7

0xd1a3,	// (0x0006e275) main_mup_pane_g8_ParamLimits

0xd1a3,	// (0x0006e275) main_mup_pane_g8

0xd1a3,	// (0x0006e275) main_mup_pane_g9_ParamLimits

0xd1a3,	// (0x0006e275) main_mup_pane_g9

0xd1a3,	// (0x0006e275) main_mup_pane_g10_ParamLimits

0xd1a3,	// (0x0006e275) main_mup_pane_g10

0xd1a3,	// (0x0006e275) main_mup_pane_g11_ParamLimits

0xd1a3,	// (0x0006e275) main_mup_pane_g11

0xc072,	// (0x0006d144) main_mup_pane_g12_ParamLimits

0xc072,	// (0x0006d144) main_mup_pane_g12

0xd1a3,	// (0x0006e275) main_mup_pane_g13_ParamLimits

0xd1a3,	// (0x0006e275) main_mup_pane_g13

0x000c,

0xf364,	// (0x00070436) main_mup_pane_g_ParamLimits

0xf364,	// (0x00070436) main_mup_pane_g

0xd1b1,	// (0x0006e283) main_mup_pane_t1_ParamLimits

0xd1b1,	// (0x0006e283) main_mup_pane_t1

0xd1b1,	// (0x0006e283) main_mup_pane_t2_ParamLimits

0xd1b1,	// (0x0006e283) main_mup_pane_t2

0xd1b1,	// (0x0006e283) main_mup_pane_t3_ParamLimits

0xd1b1,	// (0x0006e283) main_mup_pane_t3

0xc0ba,	// (0x0006d18c) main_mup_pane_t4_ParamLimits

0xc0ba,	// (0x0006d18c) main_mup_pane_t4

0xc0ba,	// (0x0006d18c) main_mup_pane_t5_ParamLimits

0xc0ba,	// (0x0006d18c) main_mup_pane_t5

0xc0ce,	// (0x0006d1a0) main_mup_pane_t6_ParamLimits

0xc0ce,	// (0x0006d1a0) main_mup_pane_t6

0x0005,

0xf37f,	// (0x00070451) main_mup_pane_t_ParamLimits

0xf37f,	// (0x00070451) main_mup_pane_t

0xc064,	// (0x0006d136) mup_progress_pane_ParamLimits

0xc064,	// (0x0006d136) mup_progress_pane

0xd1c5,	// (0x0006e297) mup_visualizer_pane_ParamLimits

0xd1c5,	// (0x0006e297) mup_visualizer_pane

0xd1c5,	// (0x0006e297) mup_volume_pane_ParamLimits

0xd1c5,	// (0x0006e297) mup_volume_pane

0xc080,	// (0x0006d152) mup_visualizer_pane_g1_ParamLimits

0xc080,	// (0x0006d152) mup_visualizer_pane_g1

0xd1d3,	// (0x0006e2a5) mup_visualizer_pane_g2_ParamLimits

0xd1d3,	// (0x0006e2a5) mup_visualizer_pane_g2

0xc072,	// (0x0006d144) mup_visualizer_pane_g3_ParamLimits

0xc072,	// (0x0006d144) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x0007045e) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x0007045e) mup_visualizer_pane_g

0xc0b0,	// (0x0006d182) mup_volume_pane_g1

0xc0b0,	// (0x0006d182) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00070181) mup_volume_pane_g

0xc0b0,	// (0x0006d182) mup_progress_pane_g1

0xc0b0,	// (0x0006d182) mup_progress_pane_g2

0xc0b0,	// (0x0006d182) mup_progress_pane_g3

0x0002,

0xf393,	// (0x00070465) mup_progress_pane_g

0xbd80,	// (0x0006ce52) bg_popup_window_pane_cp05

0xd1e1,	// (0x0006e2b3) heading_pane_cp02_ParamLimits

0xd1e1,	// (0x0006e2b3) heading_pane_cp02

0xd1fb,	// (0x0006e2cd) list_popup_blid_pane

0xd203,	// (0x0006e2d5) list_blid_sat_info_pane_ParamLimits

0xd203,	// (0x0006e2d5) list_blid_sat_info_pane

0xd216,	// (0x0006e2e8) list_blid_sat_info_pane_g1

0xd21e,	// (0x0006e2f0) list_blid_sat_info_pane_t1

0x28e4,	// (0x000639b6) mup_equalizer_pane_ParamLimits

0x28e4,	// (0x000639b6) mup_equalizer_pane

0x28fd,	// (0x000639cf) mup_equalizer_pane_cp1_ParamLimits

0x28fd,	// (0x000639cf) mup_equalizer_pane_cp1

0x291a,	// (0x000639ec) mup_equalizer_pane_cp2_ParamLimits

0x291a,	// (0x000639ec) mup_equalizer_pane_cp2

0x2937,	// (0x00063a09) mup_equalizer_pane_cp3_ParamLimits

0x2937,	// (0x00063a09) mup_equalizer_pane_cp3

0x2958,	// (0x00063a2a) mup_equalizer_pane_cp4_ParamLimits

0x2958,	// (0x00063a2a) mup_equalizer_pane_cp4

0x2979,	// (0x00063a4b) mup_equalizer_pane_cp5

0x298d,	// (0x00063a5f) mup_equalizer_pane_cp6

0x29a1,	// (0x00063a73) mup_equalizer_pane_cp7

0xe394,	// (0x0006f466) bg_popup_call_poc_act_pane_g9

0xe39c,	// (0x0006f46e) bg_popup_call_poc_act_pane_g10

0xe3a4,	// (0x0006f476) bg_popup_call_poc_act_pane_g11

0x000a,

0xbfe9,	// (0x0006d0bb) mup_scale_pane

0xc001,	// (0x0006d0d3) mup_scale_pane_g1

0xd22c,	// (0x0006e2fe) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x00070481) mup_scale_pane_g

0xd250,	// (0x0006e322) msg_data_pane

0xd258,	// (0x0006e32a) scroll_pane_cp017

0x29c7,	// (0x00063a99) bg_list_pane_cp04_ParamLimits

0x29c7,	// (0x00063a99) bg_list_pane_cp04

0xd268,	// (0x0006e33a) msg_data_pane_g1

0x29df,	// (0x00063ab1) msg_data_pane_g2

0x29e7,	// (0x00063ab9) msg_data_pane_g3

0x29ef,	// (0x00063ac1) msg_data_pane_g4

0x29f7,	// (0x00063ac9) msg_data_pane_g5

0x29ff,	// (0x00063ad1) msg_data_pane_g6

0x2a07,	// (0x00063ad9) msg_data_pane_g7

0x0006,

0xf3be,	// (0x00070490) msg_data_pane_g

0x2a0f,	// (0x00063ae1) msg_text_pane_ParamLimits

0x2a0f,	// (0x00063ae1) msg_text_pane

0x2a46,	// (0x00063b18) qrid_highlight_pane_cp011_ParamLimits

0x2a46,	// (0x00063b18) qrid_highlight_pane_cp011

0xbd80,	// (0x0006ce52) msg_body_pane

0xbfe9,	// (0x0006d0bb) msg_header_pane

0xd284,	// (0x0006e356) input_focus_pane_cp07

0xd2a5,	// (0x0006e377) msg_header_pane_t1_ParamLimits

0xd2a5,	// (0x0006e377) msg_header_pane_t1

0xd2c1,	// (0x0006e393) msg_header_pane_t2_ParamLimits

0xd2c1,	// (0x0006e393) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x000704a4) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x000704a4) msg_header_pane_t

0xd2e1,	// (0x0006e3b3) msg_body_pane_g1

0xd2e9,	// (0x0006e3bb) msg_body_pane_t1_ParamLimits

0xd2e9,	// (0x0006e3bb) msg_body_pane_t1

0xd31a,	// (0x0006e3ec) msg_body_pane_t2_ParamLimits

0xd31a,	// (0x0006e3ec) msg_body_pane_t2

0xd32c,	// (0x0006e3fe) msg_body_pane_t3_ParamLimits

0xd32c,	// (0x0006e3fe) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x000704a9) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x000704a9) msg_body_pane_t

0x2aa4,	// (0x00063b76) main_viewer_pane_g1_ParamLimits

0x2aa4,	// (0x00063b76) main_viewer_pane_g1

0x2ab2,	// (0x00063b84) main_viewer_pane_g2_ParamLimits

0x2ab2,	// (0x00063b84) main_viewer_pane_g2

0x2ac0,	// (0x00063b92) main_viewer_pane_g3_ParamLimits

0x2ac0,	// (0x00063b92) main_viewer_pane_g3

0x2acf,	// (0x00063ba1) main_viewer_pane_g4_ParamLimits

0x2acf,	// (0x00063ba1) main_viewer_pane_g4

0x9fc9,	// (0x0006b09b) main_viewer_pane_g5_ParamLimits

0x9fc9,	// (0x0006b09b) main_viewer_pane_g5

0x9fc9,	// (0x0006b09b) main_viewer_pane_g7_ParamLimits

0x9fc9,	// (0x0006b09b) main_viewer_pane_g7

0xc7a3,	// (0x0006d875) main_viewer_pane_g8_ParamLimits

0xc7a3,	// (0x0006d875) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x000704b9) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x000704b9) main_viewer_pane_g

0xd33e,	// (0x0006e410) viewer_content_pane_ParamLimits

0xd33e,	// (0x0006e410) viewer_content_pane

0x2b0b,	// (0x00063bdd) main_postcard_pane_g1_ParamLimits

0x2b0b,	// (0x00063bdd) main_postcard_pane_g1

0x2b21,	// (0x00063bf3) main_postcard_pane_g2_ParamLimits

0x2b21,	// (0x00063bf3) main_postcard_pane_g2

0x2b37,	// (0x00063c09) main_postcard_pane_g3_ParamLimits

0x2b37,	// (0x00063c09) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x000704ca) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x000704ca) main_postcard_pane_g

0x2b4e,	// (0x00063c20) main_postcard_pane_g4

0xe518,	// (0x0006f5ea) smil_status_volume_pane_g2

0x2b91,	// (0x00063c63) postcard_pane_ParamLimits

0x2b91,	// (0x00063c63) postcard_pane

0xd34c,	// (0x0006e41e) postcard_pane_g1_ParamLimits

0xd34c,	// (0x0006e41e) postcard_pane_g1

0x2bd3,	// (0x00063ca5) postcard_pane_g2_ParamLimits

0x2bd3,	// (0x00063ca5) postcard_pane_g2

0x2bdf,	// (0x00063cb1) postcard_pane_g3_ParamLimits

0x2bdf,	// (0x00063cb1) postcard_pane_g3

0xd35a,	// (0x0006e42c) postcard_pane_g4_ParamLimits

0xd35a,	// (0x0006e42c) postcard_pane_g4

0x2beb,	// (0x00063cbd) postcard_pane_g5_ParamLimits

0x2beb,	// (0x00063cbd) postcard_pane_g5

0x2c00,	// (0x00063cd2) postcard_pane_g6_ParamLimits

0x2c00,	// (0x00063cd2) postcard_pane_g6

0xd34c,	// (0x0006e41e) postcard_pane_g7_ParamLimits

0xd34c,	// (0x0006e41e) postcard_pane_g7

0x0006,

0xf405,	// (0x000704d7) postcard_pane_g_ParamLimits

0xf405,	// (0x000704d7) postcard_pane_g

0x2c14,	// (0x00063ce6) main_mp2_pane_g1_ParamLimits

0x2c14,	// (0x00063ce6) main_mp2_pane_g1

0x2c20,	// (0x00063cf2) main_mp2_pane_g2_ParamLimits

0x2c20,	// (0x00063cf2) main_mp2_pane_g2

0x2c2c,	// (0x00063cfe) main_mp2_pane_g3_ParamLimits

0x2c2c,	// (0x00063cfe) main_mp2_pane_g3

0x0002,

0xf414,	// (0x000704e6) main_mp2_pane_g_ParamLimits

0xf414,	// (0x000704e6) main_mp2_pane_g

0x2c38,	// (0x00063d0a) main_mp2_pane_t1_ParamLimits

0x2c38,	// (0x00063d0a) main_mp2_pane_t1

0x2c4d,	// (0x00063d1f) main_mp2_pane_t2_ParamLimits

0x2c4d,	// (0x00063d1f) main_mp2_pane_t2

0x2c5f,	// (0x00063d31) main_mp2_pane_t3_ParamLimits

0x2c5f,	// (0x00063d31) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x000704ed) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x000704ed) main_mp2_pane_t

0xc00b,	// (0x0006d0dd) pec_content_pane_ParamLimits

0xc00b,	// (0x0006d0dd) pec_content_pane

0xb963,	// (0x0006ca35) scroll_pane_cp015

0xd1c5,	// (0x0006e297) pec_attribute_pane_ParamLimits

0xd1c5,	// (0x0006e297) pec_attribute_pane

0xc072,	// (0x0006d144) pec_content_pane_g1_ParamLimits

0xc072,	// (0x0006d144) pec_content_pane_g1

0xd368,	// (0x0006e43a) pec_content_pane_t1_ParamLimits

0xd368,	// (0x0006e43a) pec_content_pane_t1

0xd37c,	// (0x0006e44e) pec_content_pane_t2_ParamLimits

0xd37c,	// (0x0006e44e) pec_content_pane_t2

0x0001,

0xf422,	// (0x000704f4) pec_content_pane_t_ParamLimits

0xf422,	// (0x000704f4) pec_content_pane_t

0xc064,	// (0x0006d136) list_single_graphic_pane_cp01_ParamLimits

0xc064,	// (0x0006d136) list_single_graphic_pane_cp01

0xbfe9,	// (0x0006d0bb) bg_popup_sub_pane_cp04

0xd390,	// (0x0006e462) popup_mup_playback_window_g1

0xd39c,	// (0x0006e46e) popup_mup_playback_window_t1

0xd3b1,	// (0x0006e483) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x000704f9) popup_mup_playback_window_t

0xd3e8,	// (0x0006e4ba) main_image_pane_g1_ParamLimits

0xd3e8,	// (0x0006e4ba) main_image_pane_g1

0xd42b,	// (0x0006e4fd) scroll_pane_cp018_ParamLimits

0xd42b,	// (0x0006e4fd) scroll_pane_cp018

0xd443,	// (0x0006e515) scroll_pane_cp016_ParamLimits

0xd443,	// (0x0006e515) scroll_pane_cp016

0x2d29,	// (0x00063dfb) smil2_image_pane_ParamLimits

0x2d29,	// (0x00063dfb) smil2_image_pane

0x2d59,	// (0x00063e2b) smil2_root_pane_ParamLimits

0x2d59,	// (0x00063e2b) smil2_root_pane

0x2d91,	// (0x00063e63) smil2_text_pane_ParamLimits

0x2d91,	// (0x00063e63) smil2_text_pane

0xb963,	// (0x0006ca35) bg_list_pane_cp06

0xb963,	// (0x0006ca35) grid_radio_pane

0xbd80,	// (0x0006ce52) bg_popup_window_pane_cp06

0xc804,	// (0x0006d8d6) main_fmradio_pane_t1

0xe3ec,	// (0x0006f4be) heading_pane_cp04

0xc804,	// (0x0006d8d6) main_fmradio_pane_t2

0xe3f4,	// (0x0006f4c6) popup_cale_lunar_info_window_g1

0xc804,	// (0x0006d8d6) main_fmradio_pane_t3

0xe3fc,	// (0x0006f4ce) popup_cale_lunar_info_window_g2

0xc804,	// (0x0006d8d6) main_fmradio_pane_t4

0x0001,

0xc804,	// (0x0006d8d6) main_fmradio_pane_t5

0x0004,

0xf50a,	// (0x000705dc) popup_cale_lunar_info_window_g

0xf287,	// (0x00070359) main_fmradio_pane_t

0xb963,	// (0x0006ca35) wait_bar_pane_cp03

0xc064,	// (0x0006d136) cell_fmradio_pane_ParamLimits

0xc064,	// (0x0006d136) cell_fmradio_pane

0xc072,	// (0x0006d144) cell_fmradio_pane_g1_ParamLimits

0xc072,	// (0x0006d144) cell_fmradio_pane_g1

0xb963,	// (0x0006ca35) grid_highlight_pane_cp011

0xd477,	// (0x0006e549) poc_content_pane_ParamLimits

0xd477,	// (0x0006e549) poc_content_pane

0xd489,	// (0x0006e55b) scroll_pane_cp019

0x2e11,	// (0x00063ee3) popup_call_poc_act_window_ParamLimits

0x2e11,	// (0x00063ee3) popup_call_poc_act_window

0x2e35,	// (0x00063f07) popup_call_poc_inact_window_ParamLimits

0x2e35,	// (0x00063f07) popup_call_poc_inact_window

0xf4d3,	// (0x000705a5) bg_popup_call_poc_act_pane_g

0xe3ac,	// (0x0006f47e) bg_popup_call_poc_inact_pane_g1

0xe3b4,	// (0x0006f486) bg_popup_call_poc_inact_pane_g2

0xd491,	// (0x0006e563) popup_call_poc_act_window_g2

0xe3bc,	// (0x0006f48e) bg_popup_call_poc_inact_pane_g3

0xe33c,	// (0x0006f40e) bg_popup_call_poc_inact_pane_g4

0xe3c4,	// (0x0006f496) bg_popup_call_poc_inact_pane_g5

0xd499,	// (0x0006e56b) popup_call_poc_act_window_t1_ParamLimits

0xd499,	// (0x0006e56b) popup_call_poc_act_window_t1

0xd4c1,	// (0x0006e593) popup_call_poc_act_window_t2_ParamLimits

0xd4c1,	// (0x0006e593) popup_call_poc_act_window_t2

0xd4e9,	// (0x0006e5bb) popup_call_poc_act_window_t3_ParamLimits

0xd4e9,	// (0x0006e5bb) popup_call_poc_act_window_t3

0xd511,	// (0x0006e5e3) popup_call_poc_act_window_t4_ParamLimits

0xd511,	// (0x0006e5e3) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x0007050e) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x0007050e) popup_call_poc_act_window_t

0xe3cc,	// (0x0006f49e) bg_popup_call_poc_inact_pane_g6

0xe3d4,	// (0x0006f4a6) bg_popup_call_poc_inact_pane_g7

0xe3dc,	// (0x0006f4ae) bg_popup_call_poc_inact_pane_g8

0xd523,	// (0x0006e5f5) popup_call_poc_inact_window_g2

0xe3e4,	// (0x0006f4b6) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4ea,	// (0x000705bc) bg_popup_call_poc_inact_pane_g

0xd52b,	// (0x0006e5fd) popup_call_poc_inact_window_t1_ParamLimits

0xd52b,	// (0x0006e5fd) popup_call_poc_inact_window_t1

0xd540,	// (0x0006e612) popup_call_poc_inact_window_t2_ParamLimits

0xd540,	// (0x0006e612) popup_call_poc_inact_window_t2

0xd555,	// (0x0006e627) popup_call_poc_inact_window_t3_ParamLimits

0xd555,	// (0x0006e627) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x00070517) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x00070517) popup_call_poc_inact_window_t

0xe490,	// (0x0006f562) context_pane_ParamLimits

0x362e,	// (0x00064700) signal_pane_ParamLimits

0xc2c0,	// (0x0006d392) main_call2_pane

0xa014,	// (0x0006b0e6) popup_phob_thumbnail2_window_ParamLimits

0xa014,	// (0x0006b0e6) popup_phob_thumbnail2_window

0x9fb1,	// (0x0006b083) aid_hotspot_pointer_arrow_pane

0x9fb9,	// (0x0006b08b) aid_hotspot_pointer_hand_pane

0x311c,	// (0x000641ee) phob_pre_status_pane_g5

0xc00b,	// (0x0006d0dd) cams_zoom_pane_ParamLimits

0xc00b,	// (0x0006d0dd) image_vga_pane_ParamLimits

0xc072,	// (0x0006d144) main_camera_pane_g1_ParamLimits

0xc072,	// (0x0006d144) main_camera_pane_g2_ParamLimits

0xc072,	// (0x0006d144) main_camera_pane_g3_ParamLimits

0xc072,	// (0x0006d144) main_camera_pane_g4_ParamLimits

0xc072,	// (0x0006d144) main_camera_pane_g5_ParamLimits

0xc072,	// (0x0006d144) main_camera_pane_g6_ParamLimits

0xc072,	// (0x0006d144) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00070252) main_camera_pane_g_ParamLimits

0xc0ba,	// (0x0006d18c) main_camera_pane_t1_ParamLimits

0xc0ba,	// (0x0006d18c) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00070263) main_camera_pane_t_ParamLimits

0xbfe9,	// (0x0006d0bb) bg_popup_preview_window_pane_cp01_ParamLimits

0xbfe9,	// (0x0006d0bb) bg_popup_preview_window_pane_cp01

0xd56a,	// (0x0006e63c) popup_phob_thumbnail2_window_g1_ParamLimits

0xd56a,	// (0x0006e63c) popup_phob_thumbnail2_window_g1

0xbd80,	// (0x0006ce52) call2_cli_visual_pane

0x2e69,	// (0x00063f3b) popup_call2_audio_conf_window_ParamLimits

0x2e69,	// (0x00063f3b) popup_call2_audio_conf_window

0x2e89,	// (0x00063f5b) popup_call2_audio_first_window_ParamLimits

0x2e89,	// (0x00063f5b) popup_call2_audio_first_window

0x2f1f,	// (0x00063ff1) popup_call2_audio_in_window_ParamLimits

0x2f1f,	// (0x00063ff1) popup_call2_audio_in_window

0x2f67,	// (0x00064039) popup_call2_audio_out_window_ParamLimits

0x2f67,	// (0x00064039) popup_call2_audio_out_window

0x2fd1,	// (0x000640a3) popup_call2_audio_second_window_ParamLimits

0x2fd1,	// (0x000640a3) popup_call2_audio_second_window

0x3037,	// (0x00064109) popup_call2_audio_wait_window_ParamLimits

0x3037,	// (0x00064109) popup_call2_audio_wait_window

0xbd80,	// (0x0006ce52) bg_popup_call2_act_pane_cp03

0xbfcb,	// (0x0006d09d) list_conf_pane_cp

0xd576,	// (0x0006e648) popup_call2_audio_conf_window_t1

0xd584,	// (0x0006e656) list_single_graphic_popup_conf2_pane_ParamLimits

0xd584,	// (0x0006e656) list_single_graphic_popup_conf2_pane

0xcb8b,	// (0x0006dc5d) list_highlight_pane_cp04

0xd597,	// (0x0006e669) list_single_graphic_popup_conf2_pane_g1

0xcb9c,	// (0x0006dc6e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x0007051e) list_single_graphic_popup_conf2_pane_g

0xd5a1,	// (0x0006e673) list_single_graphic_popup_conf2_pane_t1

0xd5af,	// (0x0006e681) bg_popup_call2_act_pane_cp01_ParamLimits

0xd5af,	// (0x0006e681) bg_popup_call2_act_pane_cp01

0xd639,	// (0x0006e70b) call_type_pane_cp05_ParamLimits

0xd639,	// (0x0006e70b) call_type_pane_cp05

0xd68d,	// (0x0006e75f) popup_call2_audio_second_window_g1_ParamLimits

0xd68d,	// (0x0006e75f) popup_call2_audio_second_window_g1

0xd6e1,	// (0x0006e7b3) popup_call2_audio_second_window_g2_ParamLimits

0xd6e1,	// (0x0006e7b3) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x00070523) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x00070523) popup_call2_audio_second_window_g

0xd746,	// (0x0006e818) popup_call2_audio_second_window_t1_ParamLimits

0xd746,	// (0x0006e818) popup_call2_audio_second_window_t1

0xd801,	// (0x0006e8d3) popup_call2_audio_second_window_t2_ParamLimits

0xd801,	// (0x0006e8d3) popup_call2_audio_second_window_t2

0xd854,	// (0x0006e926) popup_call2_audio_second_window_t3_ParamLimits

0xd854,	// (0x0006e926) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x0007052a) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x0007052a) popup_call2_audio_second_window_t

0xbd80,	// (0x0006ce52) bg_popup_call2_in_pane_cp02

0xbd8a,	// (0x0006ce5c) call_type_pane_cp04

0x3071,	// (0x00064143) popup_call2_audio_wait_window_g1

0x3079,	// (0x0006414b) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x00070533) popup_call2_audio_wait_window_g

0xbda2,	// (0x0006ce74) popup_call2_audio_wait_window_t3

0xd947,	// (0x0006ea19) bg_popup_call2_act_pane_ParamLimits

0xd947,	// (0x0006ea19) bg_popup_call2_act_pane

0xda07,	// (0x0006ead9) call_type_pane_cp03_ParamLimits

0xda07,	// (0x0006ead9) call_type_pane_cp03

0xda6b,	// (0x0006eb3d) popup_call2_audio_first_window_g1_ParamLimits

0xda6b,	// (0x0006eb3d) popup_call2_audio_first_window_g1

0xdadb,	// (0x0006ebad) popup_call2_audio_first_window_g2_ParamLimits

0xdadb,	// (0x0006ebad) popup_call2_audio_first_window_g2

0xdb3f,	// (0x0006ec11) popup_call2_audio_first_window_g3_ParamLimits

0xdb3f,	// (0x0006ec11) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x00070538) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x00070538) popup_call2_audio_first_window_g

0xdbc7,	// (0x0006ec99) popup_call2_audio_first_window_t1_ParamLimits

0xdbc7,	// (0x0006ec99) popup_call2_audio_first_window_t1

0xdcca,	// (0x0006ed9c) popup_call2_audio_first_window_t4_ParamLimits

0xdcca,	// (0x0006ed9c) popup_call2_audio_first_window_t4

0xddad,	// (0x0006ee7f) popup_call2_audio_first_window_t5_ParamLimits

0xddad,	// (0x0006ee7f) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x00070543) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x00070543) popup_call2_audio_first_window_t

0xbfe1,	// (0x0006d0b3) bg_popup_call2_act_pane_g1

0xe404,	// (0x0006f4d6) popup_cale_lunar_info_window_t1

0xe412,	// (0x0006f4e4) popup_cale_lunar_info_window_t2

0xe420,	// (0x0006f4f2) popup_cale_lunar_info_window_t3

0xbd80,	// (0x0006ce52) bg_popup_call2_bubble_pane

0xdeae,	// (0x0006ef80) bg_popup_call2_in_pane_cp01_ParamLimits

0xdeae,	// (0x0006ef80) bg_popup_call2_in_pane_cp01

0xba5c,	// (0x0006cb2e) call_type_pane_cp02

0x3081,	// (0x00064153) popup_call2_audio_out_window_g1_ParamLimits

0x3081,	// (0x00064153) popup_call2_audio_out_window_g1

0xdef6,	// (0x0006efc8) popup_call2_audio_out_window_g2_ParamLimits

0xdef6,	// (0x0006efc8) popup_call2_audio_out_window_g2

0x30ad,	// (0x0006417f) popup_call2_audio_out_window_g3_ParamLimits

0x30ad,	// (0x0006417f) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x0007054c) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x0007054c) popup_call2_audio_out_window_g

0xdf2d,	// (0x0006efff) popup_call2_audio_out_window_t1_ParamLimits

0xdf2d,	// (0x0006efff) popup_call2_audio_out_window_t1

0xdf8c,	// (0x0006f05e) popup_call2_audio_out_window_t2_ParamLimits

0xdf8c,	// (0x0006f05e) popup_call2_audio_out_window_t2

0xdfe0,	// (0x0006f0b2) popup_call2_audio_out_window_t3_ParamLimits

0xdfe0,	// (0x0006f0b2) popup_call2_audio_out_window_t3

0xdff6,	// (0x0006f0c8) popup_call2_audio_out_window_t4_ParamLimits

0xdff6,	// (0x0006f0c8) popup_call2_audio_out_window_t4

0xe00c,	// (0x0006f0de) popup_call2_audio_out_window_t5_ParamLimits

0xe00c,	// (0x0006f0de) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x00070555) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x00070555) popup_call2_audio_out_window_t

0xe070,	// (0x0006f142) bg_popup_call2_in_pane_ParamLimits

0xe070,	// (0x0006f142) bg_popup_call2_in_pane

0xe0cc,	// (0x0006f19e) popup_call2_audio_in_window_g1_ParamLimits

0xe0cc,	// (0x0006f19e) popup_call2_audio_in_window_g1

0xe104,	// (0x0006f1d6) popup_call2_audio_in_window_g2_ParamLimits

0xe104,	// (0x0006f1d6) popup_call2_audio_in_window_g2

0xe13c,	// (0x0006f20e) popup_call2_audio_in_window_g3_ParamLimits

0xe13c,	// (0x0006f20e) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x00070562) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x00070562) popup_call2_audio_in_window_g

0xe194,	// (0x0006f266) popup_call2_audio_in_window_t1_ParamLimits

0xe194,	// (0x0006f266) popup_call2_audio_in_window_t1

0xe214,	// (0x0006f2e6) popup_call2_audio_in_window_t2_ParamLimits

0xe214,	// (0x0006f2e6) popup_call2_audio_in_window_t2

0xe294,	// (0x0006f366) popup_call2_audio_in_window_t3_ParamLimits

0xe294,	// (0x0006f366) popup_call2_audio_in_window_t3

0xe2ae,	// (0x0006f380) popup_call2_audio_in_window_t4_ParamLimits

0xe2ae,	// (0x0006f380) popup_call2_audio_in_window_t4

0xe2c0,	// (0x0006f392) popup_call2_audio_in_window_t5_ParamLimits

0xe2c0,	// (0x0006f392) popup_call2_audio_in_window_t5

0xe2d2,	// (0x0006f3a4) popup_call2_audio_in_window_t6_ParamLimits

0xe2d2,	// (0x0006f3a4) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x0007056b) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x0007056b) popup_call2_audio_in_window_t

0xbfe1,	// (0x0006d0b3) bg_popup_call2_in_pane_g1

0xe42e,	// (0x0006f500) popup_cale_lunar_info_window_t4

0x0003,

0xf50f,	// (0x000705e1) popup_cale_lunar_info_window_t

0xbfe9,	// (0x0006d0bb) bg_popup_call2_rect_pane_ParamLimits

0xbfe9,	// (0x0006d0bb) bg_popup_call2_rect_pane

0xbd80,	// (0x0006ce52) call2_cli_visual_graphic_pane

0xbd80,	// (0x0006ce52) call2_cli_visual_text_pane

0xa03b,	// (0x0006b10d) smil_status_volume_pane_g3

0x0002,

0xc001,	// (0x0006d0d3) call2_cli_visual_graphic_pane_g1

0xc001,	// (0x0006d0d3) call2_cli_visual_graphic_pane_g2

0xc001,	// (0x0006d0d3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x00070578) call2_cli_visual_graphic_pane_g

0xe2e4,	// (0x0006f3b6) bg_popup_call2_rect_pane_g1

0xc1e5,	// (0x0006d2b7) bg_popup_call2_rect_pane_g2

0xe2ec,	// (0x0006f3be) bg_popup_call2_rect_pane_g3

0xe2f4,	// (0x0006f3c6) bg_popup_call2_rect_pane_g4

0xe2fc,	// (0x0006f3ce) bg_popup_call2_rect_pane_g5

0xe304,	// (0x0006f3d6) bg_popup_call2_rect_pane_g6

0xe30c,	// (0x0006f3de) bg_popup_call2_rect_pane_g7

0xe314,	// (0x0006f3e6) bg_popup_call2_rect_pane_g8

0xe31c,	// (0x0006f3ee) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x0007057f) bg_popup_call2_rect_pane_g

0xe324,	// (0x0006f3f6) bg_popup_call2_bubble_pane_g1

0xe32c,	// (0x0006f3fe) bg_popup_call2_bubble_pane_g2

0xe334,	// (0x0006f406) bg_popup_call2_bubble_pane_g3

0xe33c,	// (0x0006f40e) bg_popup_call2_bubble_pane_g4

0xe344,	// (0x0006f416) bg_popup_call2_bubble_pane_g5

0xe34c,	// (0x0006f41e) bg_popup_call2_bubble_pane_g6

0xe354,	// (0x0006f426) bg_popup_call2_bubble_pane_g7

0xe35c,	// (0x0006f42e) bg_popup_call2_bubble_pane_g8

0xe364,	// (0x0006f436) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x00070592) bg_popup_call2_bubble_pane_g

0x0f3f,	// (0x00062011) aid_cale_week_size_cell_pane

0x14ef,	// (0x000625c1) aid_cams_cif_uncrop_pane_ParamLimits

0x14ef,	// (0x000625c1) aid_cams_cif_uncrop_pane

0xc00b,	// (0x0006d0dd) aid_cams_size_cell_ParamLimits

0xc00b,	// (0x0006d0dd) aid_cams_size_cell

0xc00b,	// (0x0006d0dd) grid_cams_pane_ParamLimits

0xc00b,	// (0x0006d0dd) linegrid_cams_pane_ParamLimits

0x170d,	// (0x000627df) call_video_pane_t1

0x172b,	// (0x000627fd) call_video_pane_t2

0x0001,

0xf1dd,	// (0x000702af) call_video_pane_t

0x1b51,	// (0x00062c23) aid_cale_month_size_cell_pane_ParamLimits

0x1b51,	// (0x00062c23) aid_cale_month_size_cell_pane

0xf553,	// (0x00070625) smil_status_volume_pane_g

0xa048,	// (0x0006b11a) volume_smil_pane_ParamLimits

0x9de1,	// (0x0006aeb3) aid_popup2_width_pane

0x0e96,	// (0x00061f68) cell_qdial_pane_g4_ParamLimits

0x0e96,	// (0x00061f68) cell_qdial_pane_g4

0x2713,	// (0x000637e5) aid_blid_cardinal_pane_ParamLimits

0x271f,	// (0x000637f1) aid_blid_destination_pane_ParamLimits

0x271f,	// (0x000637f1) aid_blid_destination_pane

0xbfe9,	// (0x0006d0bb) bg_popup_call_poc_act_pane_ParamLimits

0xbfe9,	// (0x0006d0bb) bg_popup_call_poc_act_pane

0xbfe9,	// (0x0006d0bb) bg_popup_call_poc_inact_pane_ParamLimits

0xbfe9,	// (0x0006d0bb) bg_popup_call_poc_inact_pane

0xe36c,	// (0x0006f43e) bg_popup_call_poc_act_pane_g1

0xe374,	// (0x0006f446) bg_popup_call_poc_act_pane_g2

0xe37c,	// (0x0006f44e) bg_popup_call_poc_act_pane_g3

0xe33c,	// (0x0006f40e) bg_popup_call_poc_act_pane_g4

0xe344,	// (0x0006f416) bg_popup_call_poc_act_pane_g5

0xe384,	// (0x0006f456) bg_popup_call_poc_act_pane_g6

0xe354,	// (0x0006f426) bg_popup_call_poc_act_pane_g7

0xe38c,	// (0x0006f45e) bg_popup_call_poc_act_pane_g8

0xbd80,	// (0x0006ce52) main_usb_pane

0x9fef,	// (0x0006b0c1) popup_cale_lunar_info_window

0x19f7,	// (0x00062ac9) im_reading_pane_t1_ParamLimits

0xc381,	// (0x0006d453) list_im_pane_ParamLimits

0xc392,	// (0x0006d464) scroll_pane_cp07_ParamLimits

0xbd80,	// (0x0006ce52) grid_highlight_pane_cp012

0xbfe9,	// (0x0006d0bb) mup_scale_pane_ParamLimits

0xc072,	// (0x0006d144) main_usb_pane_g1_ParamLimits

0xc072,	// (0x0006d144) main_usb_pane_g1

0xc072,	// (0x0006d144) main_usb_pane_g2_ParamLimits

0xc072,	// (0x0006d144) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x0007028e) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x0007028e) main_usb_pane_g

0xc0ba,	// (0x0006d18c) main_usb_pane_t1_ParamLimits

0xc0ba,	// (0x0006d18c) main_usb_pane_t1

0xc0ba,	// (0x0006d18c) main_usb_pane_t2_ParamLimits

0xc0ba,	// (0x0006d18c) main_usb_pane_t2

0xc0ba,	// (0x0006d18c) main_usb_pane_t3_ParamLimits

0xc0ba,	// (0x0006d18c) main_usb_pane_t3

0xc0ba,	// (0x0006d18c) main_usb_pane_t4_ParamLimits

0xc0ba,	// (0x0006d18c) main_usb_pane_t4

0xc0ba,	// (0x0006d18c) main_usb_pane_t5_ParamLimits

0xc0ba,	// (0x0006d18c) main_usb_pane_t5

0xc0ba,	// (0x0006d18c) main_usb_pane_t6_ParamLimits

0xc0ba,	// (0x0006d18c) main_usb_pane_t6

0x0005,

0xf4fd,	// (0x000705cf) main_usb_pane_t_ParamLimits

0x26c2,	// (0x00063794) aid_text_placing

0x26cb,	// (0x0006379d) main_location2_pane_t1_ParamLimits

0x26dd,	// (0x000637af) main_location2_pane_t2_ParamLimits

0x26ef,	// (0x000637c1) main_location2_pane_t3_ParamLimits

0x2701,	// (0x000637d3) main_location2_pane_t4_ParamLimits

0x2701,	// (0x000637d3) main_location2_pane_t4

0xf319,	// (0x000703eb) main_location2_pane_t_ParamLimits

0xc025,	// (0x0006d0f7) find_pinb_pane_g2_ParamLimits

0xc025,	// (0x0006d0f7) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00070167) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00070167) find_pinb_pane_g

0xc031,	// (0x0006d103) find_pinb_pane_t1_ParamLimits

0xc043,	// (0x0006d115) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x0007016c) find_pinb_pane_t_ParamLimits

0xbd80,	// (0x0006ce52) main_call3_pane

0x2038,	// (0x0006310a) cale_month_day_heading_pane_t1_ParamLimits

0x207a,	// (0x0006314c) cale_month_day_heading_pane_t2_ParamLimits

0x20af,	// (0x00063181) cale_month_day_heading_pane_t3_ParamLimits

0x20e4,	// (0x000631b6) cale_month_day_heading_pane_t4_ParamLimits

0x2121,	// (0x000631f3) cale_month_day_heading_pane_t5_ParamLimits

0x2166,	// (0x00063238) cale_month_day_heading_pane_t6_ParamLimits

0x21ab,	// (0x0006327d) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x000702e7) cale_month_day_heading_pane_t_ParamLimits

0xc5e5,	// (0x0006d6b7) smil_status_volume_pane

0x2baf,	// (0x00063c81) postcard_address_pane_ParamLimits

0x2baf,	// (0x00063c81) postcard_address_pane

0x2bc1,	// (0x00063c93) postcard_message_pane_ParamLimits

0x2bc1,	// (0x00063c93) postcard_message_pane

0x30d9,	// (0x000641ab) call2_cli_visual_pane_t1_ParamLimits

0x30d9,	// (0x000641ab) call2_cli_visual_pane_t1

0xe543,	// (0x0006f615) postcard_message_pane_t1_ParamLimits

0xe543,	// (0x0006f615) postcard_message_pane_t1

0xe52b,	// (0x0006f5fd) postcard_address_pane_t1_ParamLimits

0xe52b,	// (0x0006f5fd) postcard_address_pane_t1

0x37e1,	// (0x000648b3) popup_call3_audio_in_window_ParamLimits

0x37e1,	// (0x000648b3) popup_call3_audio_in_window

0x366c,	// (0x0006473e) bg_popup_call3_in_pane_ParamLimits

0x366c,	// (0x0006473e) bg_popup_call3_in_pane

0x36e2,	// (0x000647b4) popup_call3_audio_in_window_g1_ParamLimits

0x36e2,	// (0x000647b4) popup_call3_audio_in_window_g1

0x3702,	// (0x000647d4) popup_call3_audio_in_window_g2_ParamLimits

0x3702,	// (0x000647d4) popup_call3_audio_in_window_g2

0x3722,	// (0x000647f4) popup_call3_audio_in_window_g3_ParamLimits

0x3722,	// (0x000647f4) popup_call3_audio_in_window_g3

0x0003,

0xf55a,	// (0x0007062c) popup_call3_audio_in_window_g_ParamLimits

0xf55a,	// (0x0007062c) popup_call3_audio_in_window_g

0x3753,	// (0x00064825) popup_call3_audio_in_window_t1_ParamLimits

0x3753,	// (0x00064825) popup_call3_audio_in_window_t1

0x3791,	// (0x00064863) popup_call3_audio_in_window_t2_ParamLimits

0x3791,	// (0x00064863) popup_call3_audio_in_window_t2

0x37cf,	// (0x000648a1) popup_call3_audio_in_window_t3_ParamLimits

0x37cf,	// (0x000648a1) popup_call3_audio_in_window_t3

0x0002,

0xf563,	// (0x00070635) popup_call3_audio_in_window_t_ParamLimits

0xf563,	// (0x00070635) popup_call3_audio_in_window_t

0xc2c0,	// (0x0006d392) bg_popup_call3_rect_pane

0xe2e4,	// (0x0006f3b6) bg_popup_call3_rect_pane_g1

0xc1e5,	// (0x0006d2b7) bg_popup_call3_rect_pane_g2

0xe2ec,	// (0x0006f3be) bg_popup_call3_rect_pane_g3

0xe2f4,	// (0x0006f3c6) bg_popup_call3_rect_pane_g4

0xe2fc,	// (0x0006f3ce) bg_popup_call3_rect_pane_g5

0xe304,	// (0x0006f3d6) bg_popup_call3_rect_pane_g6

0xe30c,	// (0x0006f3de) bg_popup_call3_rect_pane_g7

0xb963,	// (0x0006ca35) mup_visualizer_osc_pane

0xb963,	// (0x0006ca35) mup_visualizer_spec_pane

0x369c,	// (0x0006476e) call3_video_qcif_pane_ParamLimits

0x369c,	// (0x0006476e) call3_video_qcif_pane

0x36af,	// (0x00064781) call3_video_qcif_uncrop_pane_ParamLimits

0x36af,	// (0x00064781) call3_video_qcif_uncrop_pane

0x36bd,	// (0x0006478f) call3_video_subqcif_pane_ParamLimits

0x36bd,	// (0x0006478f) call3_video_subqcif_pane

0x36d1,	// (0x000647a3) call3_video_subqcif_uncrop_pane_ParamLimits

0x36d1,	// (0x000647a3) call3_video_subqcif_uncrop_pane

0x3742,	// (0x00064814) popup_call3_audio_in_window_g4_ParamLimits

0x3742,	// (0x00064814) popup_call3_audio_in_window_g4

0xb963,	// (0x0006ca35) mup_spec_half_pane

0xb963,	// (0x0006ca35) mup_spec_half_pane_cp

0xb963,	// (0x0006ca35) mup_osc_middle_pane

0xc0b0,	// (0x0006d182) mup_visualizer_osc_pane_g1

0xe4de,	// (0x0006f5b0) mup_spec_bar_pane_ParamLimits

0xe4de,	// (0x0006f5b0) mup_spec_bar_pane

0xc0b0,	// (0x0006d182) mup_spec_bar_pane_g1

0xc0b0,	// (0x0006d182) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00070181) mup_spec_bar_pane_g

0x0f3f,	// (0x00062011) aid_cale_week_size_cell_pane_ParamLimits

0x0f59,	// (0x0006202b) bg_cale_heading_pane_ParamLimits

0xc222,	// (0x0006d2f4) bg_cale_pane_cp01_ParamLimits

0x0f71,	// (0x00062043) cale_week_corner_pane_ParamLimits

0x0f90,	// (0x00062062) cale_week_day_heading_pane_ParamLimits

0x0fad,	// (0x0006207f) cale_week_scroll_pane_g1_ParamLimits

0x0fc0,	// (0x00062092) cale_week_scroll_pane_g2_ParamLimits

0x0fd8,	// (0x000620aa) cale_week_scroll_pane_g3_ParamLimits

0x0ff0,	// (0x000620c2) cale_week_scroll_pane_g4_ParamLimits

0x1008,	// (0x000620da) cale_week_scroll_pane_g5_ParamLimits

0x1028,	// (0x000620fa) cale_week_scroll_pane_g6_ParamLimits

0x1048,	// (0x0006211a) cale_week_scroll_pane_g7_ParamLimits

0x1068,	// (0x0006213a) cale_week_scroll_pane_g8_ParamLimits

0x108c,	// (0x0006215e) cale_week_scroll_pane_g9_ParamLimits

0x10a4,	// (0x00062176) cale_week_scroll_pane_g10_ParamLimits

0x10bc,	// (0x0006218e) cale_week_scroll_pane_g11_ParamLimits

0x10d4,	// (0x000621a6) cale_week_scroll_pane_g12_ParamLimits

0x10ec,	// (0x000621be) cale_week_scroll_pane_g13_ParamLimits

0x10ec,	// (0x000621be) cale_week_scroll_pane_g14_ParamLimits

0x10ec,	// (0x000621be) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x000701f8) cale_week_scroll_pane_g_ParamLimits

0x1128,	// (0x000621fa) cale_week_time_pane_ParamLimits

0x114c,	// (0x0006221e) grid_cale_week_pane_ParamLimits

0xc23f,	// (0x0006d311) listscroll_cale_week_pane_t1

0xc251,	// (0x0006d323) scroll_pane_cp08_ParamLimits

0x1bb1,	// (0x00062c83) cale_month_corner_pane_ParamLimits

0xc5bb,	// (0x0006d68d) cale_month_pane_t1

0x1fcb,	// (0x0006309d) cale_month_week_pane_ParamLimits

0x2517,	// (0x000635e9) popup_call_status_window_g1_ParamLimits

0x252b,	// (0x000635fd) popup_call_status_window_g2_ParamLimits

0x253f,	// (0x00063611) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x00070372) popup_call_status_window_g_ParamLimits

0xcb17,	// (0x0006dbe9) aid_call2_pane

0x2a5c,	// (0x00063b2e) msg_header_pane_g1

0x2baf,	// (0x00063c81) postcard_address2_pane_ParamLimits

0x2baf,	// (0x00063c81) postcard_address2_pane

0x2bc1,	// (0x00063c93) postcard_message2_pane_ParamLimits

0x2bc1,	// (0x00063c93) postcard_message2_pane

0x363c,	// (0x0006470e) message2_row_pane_ParamLimits

0x363c,	// (0x0006470e) message2_row_pane

0x3659,	// (0x0006472b) address2_row_pane_ParamLimits

0x3659,	// (0x0006472b) address2_row_pane

0xe4ab,	// (0x0006f57d) postcard_message2_row_pane_g1

0xe4b3,	// (0x0006f585) postcard_message2_row_pane_t1

0xe4ab,	// (0x0006f57d) address2_row_pane_g1

0xe4b3,	// (0x0006f585) address2_row_pane_t1

0x1486,	// (0x00062558) aid_size_cell_vorec

0xbd80,	// (0x0006ce52) main_rss_pane

0xe4c1,	// (0x0006f593) rss_list_single_pane_ParamLimits

0xe4c1,	// (0x0006f593) rss_list_single_pane

0xe4cf,	// (0x0006f5a1) rss_list_single_pane_t1

0xe4cf,	// (0x0006f5a1) rss_list_single_pane_t2

0x0001,

0xf54e,	// (0x00070620) rss_list_single_pane_t

0xbd80,	// (0x0006ce52) main_camera2_pane

0xbd80,	// (0x0006ce52) main_video2_pane

0xa05d,	// (0x0006b12f) cams_zoom_pane_cp2_ParamLimits

0xa05d,	// (0x0006b12f) cams_zoom_pane_cp2

0xa05d,	// (0x0006b12f) image2_vga_pane_ParamLimits

0xa05d,	// (0x0006b12f) image2_vga_pane

0xa06b,	// (0x0006b13d) main_camera2_pane_g1_ParamLimits

0xa06b,	// (0x0006b13d) main_camera2_pane_g1

0xa06b,	// (0x0006b13d) main_camera2_pane_g2_ParamLimits

0xa06b,	// (0x0006b13d) main_camera2_pane_g2

0xa06b,	// (0x0006b13d) main_camera2_pane_g3_ParamLimits

0xa06b,	// (0x0006b13d) main_camera2_pane_g3

0xa06b,	// (0x0006b13d) main_camera2_pane_g4_ParamLimits

0xa06b,	// (0x0006b13d) main_camera2_pane_g4

0xa06b,	// (0x0006b13d) main_camera2_pane_g5_ParamLimits

0xa06b,	// (0x0006b13d) main_camera2_pane_g5

0xa06b,	// (0x0006b13d) main_camera2_pane_g6_ParamLimits

0xa06b,	// (0x0006b13d) main_camera2_pane_g6

0xa06b,	// (0x0006b13d) main_camera2_pane_g7_ParamLimits

0xa06b,	// (0x0006b13d) main_camera2_pane_g7

0xa06b,	// (0x0006b13d) main_camera2_pane_g8_ParamLimits

0xa06b,	// (0x0006b13d) main_camera2_pane_g8

0x0008,

0xf56a,	// (0x0007063c) main_camera2_pane_g_ParamLimits

0xf56a,	// (0x0007063c) main_camera2_pane_g

0x3803,	// (0x000648d5) main_camera2_pane_t1_ParamLimits

0x3803,	// (0x000648d5) main_camera2_pane_t1

0x3803,	// (0x000648d5) main_camera2_pane_t2_ParamLimits

0x3803,	// (0x000648d5) main_camera2_pane_t2

0x3803,	// (0x000648d5) main_camera2_pane_t3_ParamLimits

0x3803,	// (0x000648d5) main_camera2_pane_t3

0x3803,	// (0x000648d5) main_camera2_pane_t4_ParamLimits

0x3803,	// (0x000648d5) main_camera2_pane_t4

0x0006,

0xf57d,	// (0x0007064f) main_camera2_pane_t_ParamLimits

0xf57d,	// (0x0007064f) main_camera2_pane_t

0xa0af,	// (0x0006b181) cams_zoom_pane_cp4_ParamLimits

0xa0af,	// (0x0006b181) cams_zoom_pane_cp4

0x3817,	// (0x000648e9) image2_cif_pane_ParamLimits

0x3817,	// (0x000648e9) image2_cif_pane

0x9e46,	// (0x0006af18) image2_subqcif_pane_ParamLimits

0x9e46,	// (0x0006af18) image2_subqcif_pane

0x3825,	// (0x000648f7) main_video2_pane_g1_ParamLimits

0x3825,	// (0x000648f7) main_video2_pane_g1

0x3825,	// (0x000648f7) main_video2_pane_g2_ParamLimits

0x3825,	// (0x000648f7) main_video2_pane_g2

0x3825,	// (0x000648f7) main_video2_pane_g3_ParamLimits

0x3825,	// (0x000648f7) main_video2_pane_g3

0x3825,	// (0x000648f7) main_video2_pane_g4_ParamLimits

0x3825,	// (0x000648f7) main_video2_pane_g4

0x3825,	// (0x000648f7) main_video2_pane_g5_ParamLimits

0x3825,	// (0x000648f7) main_video2_pane_g5

0x3825,	// (0x000648f7) main_video2_pane_g6_ParamLimits

0x3825,	// (0x000648f7) main_video2_pane_g6

0x0005,

0xf58c,	// (0x0007065e) main_video2_pane_g_ParamLimits

0xf58c,	// (0x0007065e) main_video2_pane_g

0x3833,	// (0x00064905) main_video2_pane_t1_ParamLimits

0x3833,	// (0x00064905) main_video2_pane_t1

0x3833,	// (0x00064905) main_video2_pane_t2_ParamLimits

0x3833,	// (0x00064905) main_video2_pane_t2

0x3833,	// (0x00064905) main_video2_pane_t3_ParamLimits

0x3833,	// (0x00064905) main_video2_pane_t3

0x0002,

0xf599,	// (0x0007066b) main_video2_pane_t_ParamLimits

0xf599,	// (0x0007066b) main_video2_pane_t

0x317e,	// (0x00064250) call_muted_g2

0x0001,

0xf540,	// (0x00070612) call_muted_g

0xbd80,	// (0x0006ce52) main_mup2_pane

0xd1a3,	// (0x0006e275) main_mup2_pane_g1_ParamLimits

0xd1a3,	// (0x0006e275) main_mup2_pane_g1

0xd1a3,	// (0x0006e275) main_mup2_pane_g2_ParamLimits

0xd1a3,	// (0x0006e275) main_mup2_pane_g2

0x38f4,	// (0x000649c6) main_mup_pane_g13_cp1

0x9e54,	// (0x0006af26) mup_volume_pane_cp1

0xd1a3,	// (0x0006e275) main_mup2_pane_g4_ParamLimits

0xd1a3,	// (0x0006e275) main_mup2_pane_g4

0xd1a3,	// (0x0006e275) main_mup2_pane_g5_ParamLimits

0xd1a3,	// (0x0006e275) main_mup2_pane_g5

0xd1a3,	// (0x0006e275) main_mup2_pane_g6_ParamLimits

0xd1a3,	// (0x0006e275) main_mup2_pane_g6

0xd1a3,	// (0x0006e275) main_mup2_pane_g7_ParamLimits

0xd1a3,	// (0x0006e275) main_mup2_pane_g7

0x0006,

0xf5a0,	// (0x00070672) main_mup2_pane_g_ParamLimits

0xf5a0,	// (0x00070672) main_mup2_pane_g

0xd1b1,	// (0x0006e283) main_mup2_pane_t1_ParamLimits

0xd1b1,	// (0x0006e283) main_mup2_pane_t1

0xd1b1,	// (0x0006e283) main_mup2_pane_t2_ParamLimits

0xd1b1,	// (0x0006e283) main_mup2_pane_t2

0xd1b1,	// (0x0006e283) main_mup2_pane_t3_ParamLimits

0xd1b1,	// (0x0006e283) main_mup2_pane_t3

0xd1b1,	// (0x0006e283) main_mup2_pane_t4_ParamLimits

0xd1b1,	// (0x0006e283) main_mup2_pane_t4

0xd1b1,	// (0x0006e283) main_mup2_pane_t5_ParamLimits

0xd1b1,	// (0x0006e283) main_mup2_pane_t5

0xd1b1,	// (0x0006e283) main_mup2_pane_t6_ParamLimits

0xd1b1,	// (0x0006e283) main_mup2_pane_t6

0x0005,

0xf5af,	// (0x00070681) main_mup2_pane_t_ParamLimits

0xf5af,	// (0x00070681) main_mup2_pane_t

0xd1c5,	// (0x0006e297) mup2_visualizer_pane_ParamLimits

0xd1c5,	// (0x0006e297) mup2_visualizer_pane

0xd1c5,	// (0x0006e297) mup_progress_pane_cp_ParamLimits

0xd1c5,	// (0x0006e297) mup_progress_pane_cp

0xa0d3,	// (0x0006b1a5) mup_volume_pane_cp_ParamLimits

0xa0d3,	// (0x0006b1a5) mup_volume_pane_cp

0xc072,	// (0x0006d144) mup2_visualizer_pane_g1_ParamLimits

0xc072,	// (0x0006d144) mup2_visualizer_pane_g1

0xc080,	// (0x0006d152) mup2_visualizer_pane_g2_ParamLimits

0xc080,	// (0x0006d152) mup2_visualizer_pane_g2

0xc080,	// (0x0006d152) mup2_visualizer_pane_g3_ParamLimits

0xc080,	// (0x0006d152) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00070171) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00070171) mup2_visualizer_pane_g

0xb963,	// (0x0006ca35) aid_size_cell_fmradio

0x3330,	// (0x00064402) aid_height_parent_landcape

0xc410,	// (0x0006d4e2) wml_content_pane_cp

0xc418,	// (0x0006d4ea) wml_tabs_pane

0xc421,	// (0x0006d4f3) popup_wml_miniature_window

0xc429,	// (0x0006d4fb) scroll_pane_cp021

0xc43d,	// (0x0006d50f) wml_content_pane_comp8

0xbd80,	// (0x0006ce52) bg_popup_sub_pane_cp05

0xe575,	// (0x0006f647) popup_wml_miniature_window_g1

0xe57d,	// (0x0006f64f) wml_miniature_view_pane

0x3847,	// (0x00064919) aid_size_wml_view

0x384f,	// (0x00064921) wml_miniature_view_pane_g1

0x3858,	// (0x0006492a) wml_miniature_view_pane_g2

0x3861,	// (0x00064933) wml_miniature_view_pane_g3

0x3869,	// (0x0006493b) wml_miniature_view_pane_g4

0x3871,	// (0x00064943) wml_miniature_view_pane_g5

0x3879,	// (0x0006494b) wml_miniature_view_pane_g6

0x3881,	// (0x00064953) wml_miniature_view_pane_g7

0x3889,	// (0x0006495b) wml_miniature_view_pane_g8

0x0007,

0xf5bc,	// (0x0007068e) wml_miniature_view_pane_g

0xe585,	// (0x0006f657) background_graphic_ParamLimits

0xe585,	// (0x0006f657) background_graphic

0xe591,	// (0x0006f663) wml_tabs_2_pane

0xe59a,	// (0x0006f66c) wml_tabs_3_pane_ParamLimits

0xe59a,	// (0x0006f66c) wml_tabs_3_pane

0xe5ac,	// (0x0006f67e) wml_tabs_4_pane_ParamLimits

0xe5ac,	// (0x0006f67e) wml_tabs_4_pane

0xe5c2,	// (0x0006f694) wml_tabs_5_pane_ParamLimits

0xe5c2,	// (0x0006f694) wml_tabs_5_pane

0xe5dc,	// (0x0006f6ae) wml_tabs_pane_g2_ParamLimits

0xe5dc,	// (0x0006f6ae) wml_tabs_pane_g2

0xe5f1,	// (0x0006f6c3) wml_tabs_pane_g3_ParamLimits

0xe5f1,	// (0x0006f6c3) wml_tabs_pane_g3

0xe606,	// (0x0006f6d8) wml_tabs_2_active_pane_ParamLimits

0xe606,	// (0x0006f6d8) wml_tabs_2_active_pane

0xe606,	// (0x0006f6d8) wml_tabs_2_passive_pane_ParamLimits

0xe606,	// (0x0006f6d8) wml_tabs_2_passive_pane

0x3891,	// (0x00064963) wml_tabs_3_active_pane_cp_ParamLimits

0x3891,	// (0x00064963) wml_tabs_3_active_pane_cp

0x38a6,	// (0x00064978) wml_tabs_3_passive_pane_ParamLimits

0x38a6,	// (0x00064978) wml_tabs_3_passive_pane

0x38b9,	// (0x0006498b) wml_tabs_3_passive_pane_cp_ParamLimits

0x38b9,	// (0x0006498b) wml_tabs_3_passive_pane_cp

0x38d0,	// (0x000649a2) tabs_4_active_pane

0x38d8,	// (0x000649aa) tabs_4_passive_pane

0x38e2,	// (0x000649b4) tabs_4_passive_pane_cp

0x38ea,	// (0x000649bc) tabs_4_passive_pane_cp2

0x30f4,	// (0x000641c6) aid_height_text

0xd1c5,	// (0x0006e297) mup_volume_cont_pane_ParamLimits

0xd1c5,	// (0x0006e297) mup_volume_cont_pane

0xb963,	// (0x0006ca35) aid_size_cell_pinb

0xb963,	// (0x0006ca35) aid_size_list_pinb

0xd1c5,	// (0x0006e297) mup2_volume_cont_pane_ParamLimits

0xd1c5,	// (0x0006e297) mup2_volume_cont_pane

0xa0bd,	// (0x0006b18f) mup2_volume_cont_pane_g1_ParamLimits

0xa0bd,	// (0x0006b18f) mup2_volume_cont_pane_g1

0x0a4c,	// (0x00061b1e) aid_size_cell_touch_ParamLimits

0x0a4c,	// (0x00061b1e) aid_size_cell_touch

0x0c12,	// (0x00061ce4) touch_pane_ParamLimits

0x0c12,	// (0x00061ce4) touch_pane

0x9e54,	// (0x0006af26) main_rss2_pane

0xe61d,	// (0x0006f6ef) listscroll_rss2_pane

0xe626,	// (0x0006f6f8) rss2_navigation_pane

0xe62e,	// (0x0006f700) list_rss2_pane

0xcc30,	// (0x0006dd02) scroll_pane_cp22

0xe636,	// (0x0006f708) rss2_navigation_pane_g1

0xe63f,	// (0x0006f711) rss2_navigation_pane_g2

0xe647,	// (0x0006f719) rss2_navigation_pane_g3

0x0002,

0xf5cd,	// (0x0007069f) rss2_navigation_pane_g

0xe64f,	// (0x0006f721) rss2_navigation_pane_t1

0x38fe,	// (0x000649d0) rss2_list_single_pane_ParamLimits

0x38fe,	// (0x000649d0) rss2_list_single_pane

0xe65d,	// (0x0006f72f) rss2_list_single_pane_t2

0xe66b,	// (0x0006f73d) rss2_list_single_pane_t3_ParamLimits

0xe66b,	// (0x0006f73d) rss2_list_single_pane_t3

0xe688,	// (0x0006f75a) rss2_list_single_pane_t4

0x23f3,	// (0x000634c5) smil_status_pane_g1

0x9e46,	// (0x0006af18) main_image2_pane_ParamLimits

0x9e46,	// (0x0006af18) main_image2_pane

0xa06b,	// (0x0006b13d) main_camera2_pane_g9_ParamLimits

0xa06b,	// (0x0006b13d) main_camera2_pane_g9

0x3803,	// (0x000648d5) main_camera2_pane_t5_ParamLimits

0x3803,	// (0x000648d5) main_camera2_pane_t5

0xa079,	// (0x0006b14b) main_camera2_pane_t6_ParamLimits

0xa079,	// (0x0006b14b) main_camera2_pane_t6

0x3914,	// (0x000649e6) main_image2_pane_g1_ParamLimits

0x3914,	// (0x000649e6) main_image2_pane_g1

0x2dc7,	// (0x00063e99) smil2_video_pane_ParamLimits

0x2dc7,	// (0x00063e99) smil2_video_pane

0x9dfd,	// (0x0006aecf) aid_zoom_text_primary_cp

0x9e3c,	// (0x0006af0e) popup_preview_fixed_window

0xc379,	// (0x0006d44b) im_reading_pane_g1

0x37f5,	// (0x000648c7) cams2_bc_adjust_pane_cp_ParamLimits

0x37f5,	// (0x000648c7) cams2_bc_adjust_pane_cp

0xa0a1,	// (0x0006b173) cams2_bc_adjust_pane_ParamLimits

0xa0a1,	// (0x0006b173) cams2_bc_adjust_pane

0x38f4,	// (0x000649c6) cams2_bc_adjust_pane_g1

0x9e54,	// (0x0006af26) cams2_slider_pane

0x38f4,	// (0x000649c6) cams2_slider_pane_g1

0x38f4,	// (0x000649c6) cams2_slider_pane_g2

0x0006,

0xf5d4,	// (0x000706a6) cams2_slider_pane_g

0x0cdb,	// (0x00061dad) calc_display_pane_ParamLimits

0x0d00,	// (0x00061dd2) calc_paper_pane_ParamLimits

0x0d23,	// (0x00061df5) grid_calc_pane_ParamLimits

0x9f82,	// (0x0006b054) popup_clock_digital_window_t1_ParamLimits

0xd414,	// (0x0006e4e6) main_image_pane_t1

0x0cbd,	// (0x00061d8f) aid_size_cell_calc_ParamLimits

0x0cbd,	// (0x00061d8f) aid_size_cell_calc

0x3388,	// (0x0006445a) popup_blid_sat_info2_window_ParamLimits

0x3388,	// (0x0006445a) popup_blid_sat_info2_window

0xe696,	// (0x0006f768) aid_size_cell_blid

0xe69e,	// (0x0006f770) bg_popup_window_pane_cp07

0xe6c1,	// (0x0006f793) grid_popup_blid_pane

0xe6cb,	// (0x0006f79d) heading_pane_cp05_ParamLimits

0xe6cb,	// (0x0006f79d) heading_pane_cp05

0xe795,	// (0x0006f867) cell_popup_blid_pane_ParamLimits

0xe795,	// (0x0006f867) cell_popup_blid_pane

0xe7b9,	// (0x0006f88b) cell_popup_blid_pane_g1

0xe7c1,	// (0x0006f893) cell_popup_blid_pane_t1

0xd1c5,	// (0x0006e297) mup2_indicator_pane_ParamLimits

0xd1c5,	// (0x0006e297) mup2_indicator_pane

0xb963,	// (0x0006ca35) mup2_visualizer_osc_pane

0xe55f,	// (0x0006f631) mup2_visualizer_spec_pane_ParamLimits

0xe55f,	// (0x0006f631) mup2_visualizer_spec_pane

0xb963,	// (0x0006ca35) mup2_spec_half_pane

0xb963,	// (0x0006ca35) mup2_spec_half_pane_cp

0xe7cf,	// (0x0006f8a1) mup2_spec_bar_pane_ParamLimits

0xe7cf,	// (0x0006f8a1) mup2_spec_bar_pane

0xc0b0,	// (0x0006d182) mup2_spec_bar_pane_g1

0xe7ee,	// (0x0006f8c0) mup2_spec_bar_pane_g2

0x0001,

0xf5fa,	// (0x000706cc) mup2_spec_bar_pane_g

0xb963,	// (0x0006ca35) mup2_osc_middle_pane

0xc0b0,	// (0x0006d182) mup2_visualizer_osc_pane_g1

0xb98d,	// (0x0006ca5f) popup_number_entry_window_t1_ParamLimits

0xb9a0,	// (0x0006ca72) popup_number_entry_window_t2_ParamLimits

0xb9b2,	// (0x0006ca84) popup_number_entry_window_t3_ParamLimits

0x0c64,	// (0x00061d36) popup_number_entry_window_t5_ParamLimits

0x0c64,	// (0x00061d36) popup_number_entry_window_t5

0xf040,	// (0x00070112) popup_number_entry_window_t_ParamLimits

0xb9c4,	// (0x0006ca96) text_title_cp2_ParamLimits

0x9fc1,	// (0x0006b093) aid_hotspot_pointer_text2_pane

0x9fdb,	// (0x0006b0ad) main_viewer_pane_g9_ParamLimits

0x9fdb,	// (0x0006b0ad) main_viewer_pane_g9

0xc5bb,	// (0x0006d68d) cale_month_pane_t1_ParamLimits

0xc5f8,	// (0x0006d6ca) bg_cale_pane_ParamLimits

0xc610,	// (0x0006d6e2) list_cale_pane_ParamLimits

0xc621,	// (0x0006d6f3) listscroll_cale_day_pane_t1

0xc633,	// (0x0006d705) scroll_pane_cp09_ParamLimits

0x27ec,	// (0x000638be) main_mup_eq_pane_t1_ParamLimits

0x27ec,	// (0x000638be) main_mup_eq_pane_t1

0x2806,	// (0x000638d8) main_mup_eq_pane_t2_ParamLimits

0x2806,	// (0x000638d8) main_mup_eq_pane_t2

0x2820,	// (0x000638f2) main_mup_eq_pane_t3_ParamLimits

0x2820,	// (0x000638f2) main_mup_eq_pane_t3

0x283c,	// (0x0006390e) main_mup_eq_pane_t4_ParamLimits

0x283c,	// (0x0006390e) main_mup_eq_pane_t4

0x2858,	// (0x0006392a) main_mup_eq_pane_t5_ParamLimits

0x2858,	// (0x0006392a) main_mup_eq_pane_t5

0x2874,	// (0x00063946) main_mup_eq_pane_t6_ParamLimits

0x2874,	// (0x00063946) main_mup_eq_pane_t6

0x2888,	// (0x0006395a) main_mup_eq_pane_t7_ParamLimits

0x2888,	// (0x0006395a) main_mup_eq_pane_t7

0x289c,	// (0x0006396e) main_mup_eq_pane_t8_ParamLimits

0x289c,	// (0x0006396e) main_mup_eq_pane_t8

0x28b0,	// (0x00063982) main_mup_eq_pane_t9_ParamLimits

0x28b0,	// (0x00063982) main_mup_eq_pane_t9

0x28ca,	// (0x0006399c) main_mup_eq_pane_t10_ParamLimits

0x28ca,	// (0x0006399c) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x0007046c) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x0007046c) main_mup_eq_pane_t

0x2979,	// (0x00063a4b) mup_equalizer_pane_cp5_ParamLimits

0x298d,	// (0x00063a5f) mup_equalizer_pane_cp6_ParamLimits

0x29a1,	// (0x00063a73) mup_equalizer_pane_cp7_ParamLimits

0x9e54,	// (0x0006af26) main_gallery_pane

0xe4fd,	// (0x0006f5cf) smil2_volume_pane

0xe505,	// (0x0006f5d7) smil_status_volume_pane_g1_ParamLimits

0xe518,	// (0x0006f5ea) smil_status_volume_pane_g2_ParamLimits

0xa03b,	// (0x0006b10d) smil_status_volume_pane_g3_ParamLimits

0xf553,	// (0x00070625) smil_status_volume_pane_g_ParamLimits

0xe69e,	// (0x0006f770) bg_popup_window_pane_cp07_ParamLimits

0xe6ac,	// (0x0006f77e) blid_firmament_pane

0xc00b,	// (0x0006d0dd) aid_size_cell_gallery_ParamLimits

0xc00b,	// (0x0006d0dd) aid_size_cell_gallery

0xc00b,	// (0x0006d0dd) grid_gallery_pane_ParamLimits

0xc00b,	// (0x0006d0dd) grid_gallery_pane

0xe69e,	// (0x0006f770) cell_gallery_pane_ParamLimits

0xe69e,	// (0x0006f770) cell_gallery_pane

0xc00b,	// (0x0006d0dd) bg_cell_gallery_focus_pane_ParamLimits

0xc00b,	// (0x0006d0dd) bg_cell_gallery_focus_pane

0xc072,	// (0x0006d144) cell_gallery_pane_g1_ParamLimits

0xc072,	// (0x0006d144) cell_gallery_pane_g1

0xc072,	// (0x0006d144) cell_gallery_pane_g2_ParamLimits

0xc072,	// (0x0006d144) cell_gallery_pane_g2

0xc072,	// (0x0006d144) cell_gallery_pane_g3_ParamLimits

0xc072,	// (0x0006d144) cell_gallery_pane_g3

0xc080,	// (0x0006d152) cell_gallery_pane_g4_ParamLimits

0xc080,	// (0x0006d152) cell_gallery_pane_g4

0x0003,

0x0039,	// (0x0006110b) cell_gallery_pane_g_ParamLimits

0x0039,	// (0x0006110b) cell_gallery_pane_g

0xe7f8,	// (0x0006f8ca) bg_cell_gallery_focus_pane_g1

0xe800,	// (0x0006f8d2) bg_cell_gallery_focus_pane_g2

0xe82a,	// (0x0006f8fc) bg_cell_gallery_focus_pane_g3

0xe832,	// (0x0006f904) bg_cell_gallery_focus_pane_g4

0xe83a,	// (0x0006f90c) bg_cell_gallery_focus_pane_g5

0xe842,	// (0x0006f914) bg_cell_gallery_focus_pane_g6

0xe84a,	// (0x0006f91c) bg_cell_gallery_focus_pane_g7

0xe852,	// (0x0006f924) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5ff,	// (0x000706d1) bg_cell_gallery_focus_pane_g

0xe85a,	// (0x0006f92c) aid_firma_cardinal

0xe86e,	// (0x0006f940) blid_firmament_pane_t1

0xe885,	// (0x0006f957) blid_firmament_pane_t2

0xe89c,	// (0x0006f96e) blid_firmament_pane_t3

0xe8b3,	// (0x0006f985) blid_firmament_pane_t4

0x0003,

0x0053,	// (0x00061125) blid_firmament_pane_t

0xe8ca,	// (0x0006f99c) blid_sat_info_pane

0xc0b0,	// (0x0006d182) blid_sat_info_pane_g1

0xc0b0,	// (0x0006d182) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00070181) blid_sat_info_pane_g

0xe8da,	// (0x0006f9ac) blid_sat_info_pane_t1

0xe8e8,	// (0x0006f9ba) smil2_volume_content_pane

0xe8f1,	// (0x0006f9c3) smil2_volume_pane_g1

0xc4f1,	// (0x0006d5c3) smil2_volume_content_pane_g1

0xe8f9,	// (0x0006f9cb) smil2_volume_content_pane_g2

0xe902,	// (0x0006f9d4) smil2_volume_content_pane_g3

0xe90b,	// (0x0006f9dd) smil2_volume_content_pane_g4

0xe914,	// (0x0006f9e6) smil2_volume_content_pane_g5

0xe91d,	// (0x0006f9ef) smil2_volume_content_pane_g6

0xe926,	// (0x0006f9f8) smil2_volume_content_pane_g7

0xe92f,	// (0x0006fa01) smil2_volume_content_pane_g8

0xe938,	// (0x0006fa0a) smil2_volume_content_pane_g9

0xe941,	// (0x0006fa13) smil2_volume_content_pane_g10

0x0009,

0xf610,	// (0x000706e2) smil2_volume_content_pane_g

0x1200,	// (0x000622d2) cale_week_day_heading_pane_t1_ParamLimits

0x122a,	// (0x000622fc) cale_week_day_heading_pane_t2_ParamLimits

0x1259,	// (0x0006232b) cale_week_day_heading_pane_t3_ParamLimits

0x1288,	// (0x0006235a) cale_week_day_heading_pane_t4_ParamLimits

0x12b7,	// (0x00062389) cale_week_day_heading_pane_t5_ParamLimits

0x12ee,	// (0x000623c0) cale_week_day_heading_pane_t6_ParamLimits

0x1325,	// (0x000623f7) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x00070219) cale_week_day_heading_pane_t_ParamLimits

0xc26e,	// (0x0006d340) bg_cale_side_pane_ParamLimits

0x134f,	// (0x00062421) cale_week_time_pane_t1_ParamLimits

0x1369,	// (0x0006243b) cale_week_time_pane_t2_ParamLimits

0x1383,	// (0x00062455) cale_week_time_pane_t3_ParamLimits

0x139d,	// (0x0006246f) cale_week_time_pane_t4_ParamLimits

0x13b7,	// (0x00062489) cale_week_time_pane_t5_ParamLimits

0x13d1,	// (0x000624a3) cale_week_time_pane_t6_ParamLimits

0x13eb,	// (0x000624bd) cale_week_time_pane_t7_ParamLimits

0x1405,	// (0x000624d7) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00070228) cale_week_time_pane_t_ParamLimits

0x1425,	// (0x000624f7) cell_cale_week_pane_g2_ParamLimits

0xc26e,	// (0x0006d340) bg_cale_side_pane_cp01_ParamLimits

0x21f8,	// (0x000632ca) cale_month_week_pane_t1_ParamLimits

0x2211,	// (0x000632e3) cale_month_week_pane_t2_ParamLimits

0x222a,	// (0x000632fc) cale_month_week_pane_t3_ParamLimits

0x2243,	// (0x00063315) cale_month_week_pane_t4_ParamLimits

0x225c,	// (0x0006332e) cale_month_week_pane_t5_ParamLimits

0x2275,	// (0x00063347) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x000702f6) cale_month_week_pane_t_ParamLimits

0x9ef6,	// (0x0006afc8) cell_cale_month_pane_g1_ParamLimits

0x9e54,	// (0x0006af26) main_cale_event_viewer_pane

0xb963,	// (0x0006ca35) listscroll_cale_event_viewer_pane

0xe94a,	// (0x0006fa1c) list_cale_ev_pane

0xe952,	// (0x0006fa24) scroll_pane_cp023

0xe95e,	// (0x0006fa30) field_cale_ev_pane_ParamLimits

0xe95e,	// (0x0006fa30) field_cale_ev_pane

0xe97c,	// (0x0006fa4e) field_cale_ev_content_pane_ParamLimits

0xe97c,	// (0x0006fa4e) field_cale_ev_content_pane

0xe988,	// (0x0006fa5a) field_cale_ev_pane_g1_ParamLimits

0xe988,	// (0x0006fa5a) field_cale_ev_pane_g1

0xe994,	// (0x0006fa66) field_cale_ev_pane_g2_ParamLimits

0xe994,	// (0x0006fa66) field_cale_ev_pane_g2

0xe9ac,	// (0x0006fa7e) field_cale_ev_pane_g3_ParamLimits

0xe9ac,	// (0x0006fa7e) field_cale_ev_pane_g3

0x0002,

0x0071,	// (0x00061143) field_cale_ev_pane_g_ParamLimits

0x0071,	// (0x00061143) field_cale_ev_pane_g

0xe9c4,	// (0x0006fa96) field_cale_ev_pane_t1_ParamLimits

0xe9c4,	// (0x0006fa96) field_cale_ev_pane_t1

0xe9db,	// (0x0006faad) field_cale_ev_content_pane_t1_ParamLimits

0xe9db,	// (0x0006faad) field_cale_ev_content_pane_t1

0xd270,	// (0x0006e342) bg_button_pane_cp01

0x0f2d,	// (0x00061fff) listscroll_cale_week_pane_ParamLimits

0xc219,	// (0x0006d2eb) popup_toolbar_window_cp01

0xc23f,	// (0x0006d311) listscroll_cale_week_pane_t1_ParamLimits

0x0f2d,	// (0x00061fff) listscroll_cale_day_pane_ParamLimits

0xc219,	// (0x0006d2eb) popup_toolbar_window_cp02

0xc621,	// (0x0006d6f3) listscroll_cale_day_pane_t1_ParamLimits

0x334e,	// (0x00064420) main_cale_month_pane_ParamLimits

0xa026,	// (0x0006b0f8) popup_toolbar_window_cp03_ParamLimits

0xa026,	// (0x0006b0f8) popup_toolbar_window_cp03

0x2c8f,	// (0x00063d61) main_image_pane_g2_ParamLimits

0x2c8f,	// (0x00063d61) main_image_pane_g2

0x2ca0,	// (0x00063d72) main_image_pane_g3_ParamLimits

0x2ca0,	// (0x00063d72) main_image_pane_g3

0x0002,

0xf42c,	// (0x000704fe) main_image_pane_g_ParamLimits

0xf42c,	// (0x000704fe) main_image_pane_g

0xd414,	// (0x0006e4e6) main_image_pane_t1_ParamLimits

0x2cb1,	// (0x00063d83) main_image_pane_t2_ParamLimits

0x2cb1,	// (0x00063d83) main_image_pane_t2

0x2cc3,	// (0x00063d95) main_image_pane_t3_ParamLimits

0x2cc3,	// (0x00063d95) main_image_pane_t3

0x2ceb,	// (0x00063dbd) main_image_pane_t4_ParamLimits

0x2ceb,	// (0x00063dbd) main_image_pane_t4

0x0003,

0xf433,	// (0x00070505) main_image_pane_t_ParamLimits

0xf433,	// (0x00070505) main_image_pane_t

0x2d0b,	// (0x00063ddd) popup_image_details_window_cp01

0x2d15,	// (0x00063de7) popup_toobar_trans_pane_cp01_ParamLimits

0x2d15,	// (0x00063de7) popup_toobar_trans_pane_cp01

0x3459,	// (0x0006452b) popup_image_details_window_ParamLimits

0x3459,	// (0x0006452b) popup_image_details_window

0x9ff9,	// (0x0006b0cb) popup_image_focus_window

0xa05d,	// (0x0006b12f) camera2_autofocus_pane_ParamLimits

0xa05d,	// (0x0006b12f) camera2_autofocus_pane

0xb963,	// (0x0006ca35) bg_popup_sub_pane_cp06

0xe9f9,	// (0x0006facb) popup_image_focus_window_g1

0xea01,	// (0x0006fad3) popup_image_focus_window_g2

0xea09,	// (0x0006fadb) popup_image_focus_window_g3

0xea11,	// (0x0006fae3) popup_image_focus_window_g4

0x0003,

0x0078,	// (0x0006114a) popup_image_focus_window_g

0xea19,	// (0x0006faeb) popup_image_focus_window_t1

0xea27,	// (0x0006faf9) popup_image_focus_window_t2

0xea37,	// (0x0006fb09) popup_image_focus_window_t3

0x0002,

0x0081,	// (0x00061153) popup_image_focus_window_t

0xc072,	// (0x0006d144) camera2_autofocus_pane_g1

0xc00b,	// (0x0006d0dd) bg_tb_trans_pane_cp01

0xea45,	// (0x0006fb17) popup_image_details_window_g1

0xea58,	// (0x0006fb2a) popup_image_details_window_g2

0x0002,

0x0093,	// (0x00061165) popup_image_details_window_g

0xea81,	// (0x0006fb53) popup_image_details_window_t1

0xea93,	// (0x0006fb65) popup_image_details_window_t2

0xeaac,	// (0x0006fb7e) popup_image_details_window_t3

0xeac0,	// (0x0006fb92) popup_image_details_window_t4

0xeadb,	// (0x0006fbad) popup_image_details_window_t5

0x0004,

0x009a,	// (0x0006116c) popup_image_details_window_t

0xc0fa,	// (0x0006d1cc) bg_calc_paper_pane_ParamLimits

0x9e54,	// (0x0006af26) grid_highlight_pane_cp013

0x9e66,	// (0x0006af38) list_calc_pane_ParamLimits

0x9e78,	// (0x0006af4a) scroll_pane_cp024

0xc10e,	// (0x0006d1e0) bg_calc_display_pane_ParamLimits

0x0d65,	// (0x00061e37) calc_display_pane_t1_ParamLimits

0x0d77,	// (0x00061e49) calc_display_pane_t2_ParamLimits

0x9e80,	// (0x0006af52) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x00070199) calc_display_pane_t_ParamLimits

0x0e31,	// (0x00061f03) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x000701b6) cell_calc_pane_g

0x0e3a,	// (0x00061f0c) cell_calc_pane_t1

0xc163,	// (0x0006d235) grid_highlight_pane_cp02_ParamLimits

0xc179,	// (0x0006d24b) toolbar_button_pane_cp01_ParamLimits

0xc179,	// (0x0006d24b) toolbar_button_pane_cp01

0xd459,	// (0x0006e52b) temp_image_control_pane_ParamLimits

0xd459,	// (0x0006e52b) temp_image_control_pane

0x9e46,	// (0x0006af18) main_mp3_pane

0xeaf5,	// (0x0006fbc7) temp_image_control_pane_g1_ParamLimits

0xeaf5,	// (0x0006fbc7) temp_image_control_pane_g1

0xeb03,	// (0x0006fbd5) temp_image_control_pane_g2_ParamLimits

0xeb03,	// (0x0006fbd5) temp_image_control_pane_g2

0xeb15,	// (0x0006fbe7) temp_image_control_pane_g3_ParamLimits

0xeb15,	// (0x0006fbe7) temp_image_control_pane_g3

0x392a,	// (0x000649fc) temp_image_control_pane_g4_ParamLimits

0x392a,	// (0x000649fc) temp_image_control_pane_g4

0x0003,

0xf625,	// (0x000706f7) temp_image_control_pane_g_ParamLimits

0xf625,	// (0x000706f7) temp_image_control_pane_g

0xeaf5,	// (0x0006fbc7) main_mp3_pane_g1

0x393d,	// (0x00064a0f) main_mp3_pane_g2

0x0007,

0xf62e,	// (0x00070700) main_mp3_pane_g

0xeb4a,	// (0x0006fc1c) main_mp3_pane_t1

0xc080,	// (0x0006d152) main_camera_pane_g8_ParamLimits

0xc080,	// (0x0006d152) main_camera_pane_g8

0x15f3,	// (0x000626c5) main_video_pane_g7_ParamLimits

0x15f3,	// (0x000626c5) main_video_pane_g7

0xa08d,	// (0x0006b15f) main_camera2_pane_t7_ParamLimits

0xa08d,	// (0x0006b15f) main_camera2_pane_t7

0xc3d0,	// (0x0006d4a2) scroll_pane_cp025_ParamLimits

0xc3d0,	// (0x0006d4a2) scroll_pane_cp025

0xc3e4,	// (0x0006d4b6) scroll_pane_cp026_ParamLimits

0xc3e4,	// (0x0006d4b6) scroll_pane_cp026

0xc3f3,	// (0x0006d4c5) wml_content_pane_ParamLimits

0x9e54,	// (0x0006af26) main_touch_calib_pane

0x3a11,	// (0x00064ae3) main_touch_calib_pane_g1

0x3a23,	// (0x00064af5) main_touch_calib_pane_g2

0x3a35,	// (0x00064b07) main_touch_calib_pane_g3

0x3a47,	// (0x00064b19) main_touch_calib_pane_g4

0x0003,

0xf64c,	// (0x0007071e) main_touch_calib_pane_g

0x3a59,	// (0x00064b2b) main_touch_calib_pane_t1

0x3a73,	// (0x00064b45) main_touch_calib_pane_t2

0x0004,

0xf655,	// (0x00070727) main_touch_calib_pane_t

0xccff,	// (0x0006ddd1) mup_progress_pane_cp02

0xcd34,	// (0x0006de06) navi_pane_g1

0xd077,	// (0x0006e149) navi_pane_mp_t3

0x9e46,	// (0x0006af18) main_mp3_pane_ParamLimits

0x35e4,	// (0x000646b6) navi_pane_ParamLimits

0xeaf5,	// (0x0006fbc7) main_mp3_pane_g1_ParamLimits

0x393d,	// (0x00064a0f) main_mp3_pane_g2_ParamLimits

0x394b,	// (0x00064a1d) main_mp3_pane_g3_ParamLimits

0x394b,	// (0x00064a1d) main_mp3_pane_g3

0x3959,	// (0x00064a2b) main_mp3_pane_g4_ParamLimits

0x3959,	// (0x00064a2b) main_mp3_pane_g4

0xc072,	// (0x0006d144) main_mp3_pane_g5_ParamLimits

0xc072,	// (0x0006d144) main_mp3_pane_g5

0xeb25,	// (0x0006fbf7) main_mp3_pane_g6_ParamLimits

0xeb25,	// (0x0006fbf7) main_mp3_pane_g6

0xeb32,	// (0x0006fc04) main_mp3_pane_g7_ParamLimits

0xeb32,	// (0x0006fc04) main_mp3_pane_g7

0xeb3e,	// (0x0006fc10) main_mp3_pane_g8_ParamLimits

0xeb3e,	// (0x0006fc10) main_mp3_pane_g8

0xf62e,	// (0x00070700) main_mp3_pane_g_ParamLimits

0x3965,	// (0x00064a37) main_mp3_pane_t2

0x3973,	// (0x00064a45) main_mp3_pane_t3

0xeb58,	// (0x0006fc2a) main_mp3_pane_t4

0xeb66,	// (0x0006fc38) main_mp3_pane_t5

0x0005,

0xf63f,	// (0x00070711) main_mp3_pane_t

0xeb74,	// (0x0006fc46) mup_progress_pane_cp01

0x9dfd,	// (0x0006aecf) aid_zoom_text_secondary2

0xe94a,	// (0x0006fa1c) list_cale_ev2_pane

0xe952,	// (0x0006fa24) scroll_pane_cp023_ParamLimits

0x3ac9,	// (0x00064b9b) field_cale_ev2_pane_ParamLimits

0x3ac9,	// (0x00064b9b) field_cale_ev2_pane

0xeb7c,	// (0x0006fc4e) field_cale_ev2_pane_g1_ParamLimits

0xeb7c,	// (0x0006fc4e) field_cale_ev2_pane_g1

0xeb88,	// (0x0006fc5a) field_cale_ev2_pane_g2_ParamLimits

0xeb88,	// (0x0006fc5a) field_cale_ev2_pane_g2

0xeba0,	// (0x0006fc72) field_cale_ev2_pane_g3_ParamLimits

0xeba0,	// (0x0006fc72) field_cale_ev2_pane_g3

0x0003,

0x00e0,	// (0x000611b2) field_cale_ev2_pane_g_ParamLimits

0x00e0,	// (0x000611b2) field_cale_ev2_pane_g

0xebc4,	// (0x0006fc96) field_cale_ev2_pane_t1_ParamLimits

0xebc4,	// (0x0006fc96) field_cale_ev2_pane_t1

0xebdb,	// (0x0006fcad) field_cale_ev2_pane_t2_ParamLimits

0xebdb,	// (0x0006fcad) field_cale_ev2_pane_t2

0x0001,

0x00e9,	// (0x000611bb) field_cale_ev2_pane_t_ParamLimits

0x00e9,	// (0x000611bb) field_cale_ev2_pane_t

0x2b65,	// (0x00063c37) main_postcard_pane_g5_ParamLimits

0x2b65,	// (0x00063c37) main_postcard_pane_g5

0x2b7b,	// (0x00063c4d) main_postcard_pane_g6_ParamLimits

0x2b7b,	// (0x00063c4d) main_postcard_pane_g6

0xc00b,	// (0x0006d0dd) camera2_autofocus_pane_cp_ParamLimits

0xc00b,	// (0x0006d0dd) camera2_autofocus_pane_cp

0x9e46,	// (0x0006af18) main_mup3_pane

0x3b2e,	// (0x00064c00) main_mup3_pane_g1_ParamLimits

0x3b2e,	// (0x00064c00) main_mup3_pane_g1

0x3b50,	// (0x00064c22) main_mup3_pane_g2_ParamLimits

0x3b50,	// (0x00064c22) main_mup3_pane_g2

0x3bd0,	// (0x00064ca2) main_mup3_pane_g3_ParamLimits

0x3bd0,	// (0x00064ca2) main_mup3_pane_g3

0x3c16,	// (0x00064ce8) main_mup3_pane_g4_ParamLimits

0x3c16,	// (0x00064ce8) main_mup3_pane_g4

0x3c5c,	// (0x00064d2e) main_mup3_pane_g5_ParamLimits

0x3c5c,	// (0x00064d2e) main_mup3_pane_g5

0x3ca2,	// (0x00064d74) main_mup3_pane_g6_ParamLimits

0x3ca2,	// (0x00064d74) main_mup3_pane_g6

0xc080,	// (0x0006d152) main_mup3_pane_g7_ParamLimits

0xc080,	// (0x0006d152) main_mup3_pane_g7

0x0007,

0xf66b,	// (0x0007073d) main_mup3_pane_g_ParamLimits

0xf66b,	// (0x0007073d) main_mup3_pane_g

0x3d20,	// (0x00064df2) main_mup3_pane_t1_ParamLimits

0x3d20,	// (0x00064df2) main_mup3_pane_t1

0x3d94,	// (0x00064e66) main_mup3_pane_t2_ParamLimits

0x3d94,	// (0x00064e66) main_mup3_pane_t2

0x3e68,	// (0x00064f3a) main_mup3_pane_t4_ParamLimits

0x3e68,	// (0x00064f3a) main_mup3_pane_t4

0x3ebe,	// (0x00064f90) main_mup3_pane_t5_ParamLimits

0x3ebe,	// (0x00064f90) main_mup3_pane_t5

0x3f7a,	// (0x0006504c) main_mup3_pane_t6_ParamLimits

0x3f7a,	// (0x0006504c) main_mup3_pane_t6

0x0005,

0xf67c,	// (0x0007074e) main_mup3_pane_t_ParamLimits

0xf67c,	// (0x0007074e) main_mup3_pane_t

0x4032,	// (0x00065104) mup3_progress_pane_ParamLimits

0x4032,	// (0x00065104) mup3_progress_pane

0x40be,	// (0x00065190) popup_mup3_control_window_ParamLimits

0x40be,	// (0x00065190) popup_mup3_control_window

0xebf0,	// (0x0006fcc2) popup_mup3_text_window

0x40f0,	// (0x000651c2) mup3_progress_pane_t1

0x410f,	// (0x000651e1) mup3_progress_pane_t2

0xebf8,	// (0x0006fcca) mup3_progress_pane_t3

0x0002,

0xf689,	// (0x0007075b) mup3_progress_pane_t

0xec15,	// (0x0006fce7) mup_progress_pane_cp03

0xb963,	// (0x0006ca35) bg_tb_trans_pane_cp04

0x412e,	// (0x00065200) mup3_volume_pane

0x4136,	// (0x00065208) popup_mup3_control_window_g1

0x413f,	// (0x00065211) mup3_volume_pane_g1

0x4148,	// (0x0006521a) mup3_volume_pane_g2

0x4151,	// (0x00065223) mup3_volume_pane_g3

0x0002,

0xf690,	// (0x00070762) mup3_volume_pane_g

0xb963,	// (0x0006ca35) bg_tb_trans_pane_cp03

0xec25,	// (0x0006fcf7) popup_mup3_text_window_g1

0xec2d,	// (0x0006fcff) popup_mup3_text_window_t1

0xc156,	// (0x0006d228) list_calc_item_pane_g1_ParamLimits

0xe614,	// (0x0006f6e6) mup_volume_pane_cp_g1

0x3a8d,	// (0x00064b5f) main_touch_calib_pane_t3

0x3aa1,	// (0x00064b73) main_touch_calib_pane_t4

0x3ab5,	// (0x00064b87) main_touch_calib_pane_t5

0x9dd9,	// (0x0006aeab) aid_cell_size_toolbar2

0x9de1,	// (0x0006aeb3) aid_popup3_width_pane

0x9ded,	// (0x0006aebf) aid_zoom_text_msg_primary

0x14ce,	// (0x000625a0) vorec_t7

0xc11a,	// (0x0006d1ec) bg_calc_paper_pane_g1_ParamLimits

0xc126,	// (0x0006d1f8) bg_calc_paper_pane_g2_ParamLimits

0xc132,	// (0x0006d204) bg_calc_paper_pane_g3_ParamLimits

0xc13e,	// (0x0006d210) bg_calc_paper_pane_g4_ParamLimits

0xc14a,	// (0x0006d21c) bg_calc_paper_pane_g5_ParamLimits

0x0dbe,	// (0x00061e90) bg_calc_paper_pane_g6_ParamLimits

0x0dcd,	// (0x00061e9f) bg_calc_paper_pane_g7_ParamLimits

0x0ddc,	// (0x00061eae) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x000701a0) bg_calc_paper_pane_g_ParamLimits

0x0def,	// (0x00061ec1) calc_bg_paper_pane_g9_ParamLimits

0xc00b,	// (0x0006d0dd) image_qvga_pane_ParamLimits

0xc00b,	// (0x0006d0dd) image_qvga_pane

0xbfe9,	// (0x0006d0bb) bg_popup_sub_pane_cp04_ParamLimits

0xd390,	// (0x0006e462) popup_mup_playback_window_g1_ParamLimits

0xd39c,	// (0x0006e46e) popup_mup_playback_window_t1_ParamLimits

0xd3b1,	// (0x0006e483) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x000704f9) popup_mup_playback_window_t_ParamLimits

0xc080,	// (0x0006d152) main_mup2_pane_g3_ParamLimits

0xc080,	// (0x0006d152) main_mup2_pane_g3

0x17ae,	// (0x00062880) popup_toolbar_window_cp04

0xd735,	// (0x0006e807) popup_call2_audio_second_window_g3_ParamLimits

0xd735,	// (0x0006e807) popup_call2_audio_second_window_g3

0xdb4d,	// (0x0006ec1f) popup_call2_audio_first_window_g4_ParamLimits

0xdb4d,	// (0x0006ec1f) popup_call2_audio_first_window_g4

0xe174,	// (0x0006f246) popup_call2_audio_in_window_g4_ParamLimits

0xe174,	// (0x0006f246) popup_call2_audio_in_window_g4

0x2c71,	// (0x00063d43) aid_area_sk_bg_cut_ParamLimits

0x2c71,	// (0x00063d43) aid_area_sk_bg_cut

0xd3c6,	// (0x0006e498) aid_area_sk_bg_cut_2_ParamLimits

0xd3c6,	// (0x0006e498) aid_area_sk_bg_cut_2

0xb963,	// (0x0006ca35) aid_placing_details_win

0xb963,	// (0x0006ca35) aid_placing_details_win_2

0xc072,	// (0x0006d144) camera2_autofocus_pane_g1_ParamLimits

0x0bab,	// (0x00061c7d) popup_fixed_preview_cale_window_ParamLimits

0x0bab,	// (0x00061c7d) popup_fixed_preview_cale_window

0xd0f5,	// (0x0006e1c7) navi_slider_pane_g3

0xd0fe,	// (0x0006e1d0) navi_slider_pane_g4

0xd107,	// (0x0006e1d9) navi_slider_pane_g5

0xd0f5,	// (0x0006e1c7) navi_slider_pane_g6

0x9fa8,	// (0x0006b07a) navi_slider_pane_g7

0xd235,	// (0x0006e307) mup_scale_pane_g3

0xd23e,	// (0x0006e310) mup_scale_pane_g4

0xd247,	// (0x0006e319) mup_scale_pane_g5

0x29b5,	// (0x00063a87) mup_scale_pane_g6

0x29be,	// (0x00063a90) mup_scale_pane_g7

0x38f4,	// (0x000649c6) cams2_slider_pane_g3

0x38f4,	// (0x000649c6) cams2_slider_pane_g4

0x38f4,	// (0x000649c6) cams2_slider_pane_g5

0x38f4,	// (0x000649c6) cams2_slider_pane_g6

0x38f4,	// (0x000649c6) cams2_slider_pane_g7

0xc0b0,	// (0x0006d182) camera2_autofocus_pane_cp_g1

0xe484,	// (0x0006f556) bg_popup_preview_window_pane_cp02_ParamLimits

0xe484,	// (0x0006f556) bg_popup_preview_window_pane_cp02

0xec3b,	// (0x0006fd0d) list_fp_cale_pane_ParamLimits

0xec3b,	// (0x0006fd0d) list_fp_cale_pane

0xec47,	// (0x0006fd19) popup_fixed_preview_cale_window_t1_ParamLimits

0xec47,	// (0x0006fd19) popup_fixed_preview_cale_window_t1

0x415a,	// (0x0006522c) popup_fixed_preview_cale_window_t2_ParamLimits

0x415a,	// (0x0006522c) popup_fixed_preview_cale_window_t2

0x416f,	// (0x00065241) popup_fixed_preview_cale_window_t3_ParamLimits

0x416f,	// (0x00065241) popup_fixed_preview_cale_window_t3

0x0002,

0xf697,	// (0x00070769) popup_fixed_preview_cale_window_t_ParamLimits

0xf697,	// (0x00070769) popup_fixed_preview_cale_window_t

0x4184,	// (0x00065256) list_single_fp_cale_pane_ParamLimits

0x4184,	// (0x00065256) list_single_fp_cale_pane

0xec65,	// (0x0006fd37) list_single_fp_cale_pane_g1_ParamLimits

0xec65,	// (0x0006fd37) list_single_fp_cale_pane_g1

0xec71,	// (0x0006fd43) list_single_fp_cale_pane_g2_ParamLimits

0xec71,	// (0x0006fd43) list_single_fp_cale_pane_g2

0x0002,

0x012c,	// (0x000611fe) list_single_fp_cale_pane_g_ParamLimits

0x012c,	// (0x000611fe) list_single_fp_cale_pane_g

0xec8a,	// (0x0006fd5c) list_single_fp_cale_pane_t1_ParamLimits

0xec8a,	// (0x0006fd5c) list_single_fp_cale_pane_t1

0xec9c,	// (0x0006fd6e) list_single_fp_cale_pane_t2_ParamLimits

0xec9c,	// (0x0006fd6e) list_single_fp_cale_pane_t2

0x0001,

0x0133,	// (0x00061205) list_single_fp_cale_pane_t_ParamLimits

0x0133,	// (0x00061205) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9e54,	// (0x0006af26) main_dialer_pane

0xb963,	// (0x0006ca35) aid_cell_size_keypad

0xb963,	// (0x0006ca35) dialer_ne_pane

0xb963,	// (0x0006ca35) grid_dialer_command_1_pane

0xb963,	// (0x0006ca35) grid_dialer_command_2_pane

0xb963,	// (0x0006ca35) grid_dialer_keypad_pane

0x419a,	// (0x0006526c) bg_popup_call_pane_cp06_ParamLimits

0x419a,	// (0x0006526c) bg_popup_call_pane_cp06

0x419a,	// (0x0006526c) dialer_ne_clear_pane_ParamLimits

0x419a,	// (0x0006526c) dialer_ne_clear_pane

0xc0b0,	// (0x0006d182) dialer_ne_pane_g1

0xc0ce,	// (0x0006d1a0) dialer_ne_pane_t1_ParamLimits

0xc0ce,	// (0x0006d1a0) dialer_ne_pane_t1

0x41a8,	// (0x0006527a) dialer_ne_pane_t2_ParamLimits

0x41a8,	// (0x0006527a) dialer_ne_pane_t2

0x41d0,	// (0x000652a2) dialer_ne_pane_t3_ParamLimits

0x41d0,	// (0x000652a2) dialer_ne_pane_t3

0x0002,

0xf69e,	// (0x00070770) dialer_ne_pane_t_ParamLimits

0xf69e,	// (0x00070770) dialer_ne_pane_t

0x41d0,	// (0x000652a2) dialer_ne_pane_t3_copy1_ParamLimits

0x41d0,	// (0x000652a2) dialer_ne_pane_t3_copy1

0xeccf,	// (0x0006fda1) cell_dialer_keypad_pane_ParamLimits

0xeccf,	// (0x0006fda1) cell_dialer_keypad_pane

0xc00b,	// (0x0006d0dd) cell_dialer_command_1_pane_ParamLimits

0xc00b,	// (0x0006d0dd) cell_dialer_command_1_pane

0xece6,	// (0x0006fdb8) cell_dialer_command_2_pane_ParamLimits

0xece6,	// (0x0006fdb8) cell_dialer_command_2_pane

0xc00b,	// (0x0006d0dd) bg_button_pane_cp02_ParamLimits

0xc00b,	// (0x0006d0dd) bg_button_pane_cp02

0xc072,	// (0x0006d144) cell_dialer_keypad_pane_g1_ParamLimits

0xc072,	// (0x0006d144) cell_dialer_keypad_pane_g1

0xc00b,	// (0x0006d0dd) bg_button_pane_cp03_ParamLimits

0xc00b,	// (0x0006d0dd) bg_button_pane_cp03

0xc072,	// (0x0006d144) cell_dialer_command_1_pane_g1_ParamLimits

0xc072,	// (0x0006d144) cell_dialer_command_1_pane_g1

0xb963,	// (0x0006ca35) bg_button_pane_cp04

0xc0b0,	// (0x0006d182) cell_dialer_command_2_pane_g1

0xb963,	// (0x0006ca35) bg_button_pane_cp06

0xc0b0,	// (0x0006d182) dialer_ne_clear_pane_g1

0xcd40,	// (0x0006de12) navi_pane_g2

0xcd6e,	// (0x0006de40) navi_pane_g3

0x0002,

0xf32f,	// (0x00070401) navi_pane_g

0xd085,	// (0x0006e157) navi_pane_mv_g2

0xd0ac,	// (0x0006e17e) navi_pane_mv_g5

0x2798,	// (0x0006386a) navi_pane_mv_t1

0xc10e,	// (0x0006d1e0) main_clock2_pane

0xc00b,	// (0x0006d0dd) main_clock2_list_pane_ParamLimits

0xc00b,	// (0x0006d0dd) main_clock2_list_pane

0x4266,	// (0x00065338) main_clock2_pane_t1_ParamLimits

0x4266,	// (0x00065338) main_clock2_pane_t1

0x42a1,	// (0x00065373) main_clock2_pane_t2_ParamLimits

0x42a1,	// (0x00065373) main_clock2_pane_t2

0x0004,

0xf6a5,	// (0x00070777) main_clock2_pane_t_ParamLimits

0xf6a5,	// (0x00070777) main_clock2_pane_t

0x4341,	// (0x00065413) popup_clock_analogue_window_cp03_ParamLimits

0x4341,	// (0x00065413) popup_clock_analogue_window_cp03

0x4366,	// (0x00065438) popup_clock_digital_window_cp02_ParamLimits

0x4366,	// (0x00065438) popup_clock_digital_window_cp02

0x43df,	// (0x000654b1) main_clock2_list_single_pane_ParamLimits

0x43df,	// (0x000654b1) main_clock2_list_single_pane

0xc2c0,	// (0x0006d392) list_highlight_pane_cp05

0xed29,	// (0x0006fdfb) main_clock2_list_single_pane_t1

0x17ae,	// (0x00062880) popup_toolbar_window_cp04_ParamLimits

0xc080,	// (0x0006d152) camera2_autofocus_pane_g2_ParamLimits

0xc080,	// (0x0006d152) camera2_autofocus_pane_g2

0xc080,	// (0x0006d152) camera2_autofocus_pane_g3_ParamLimits

0xc080,	// (0x0006d152) camera2_autofocus_pane_g3

0xc080,	// (0x0006d152) camera2_autofocus_pane_g4_ParamLimits

0xc080,	// (0x0006d152) camera2_autofocus_pane_g4

0xc080,	// (0x0006d152) camera2_autofocus_pane_g5_ParamLimits

0xc080,	// (0x0006d152) camera2_autofocus_pane_g5

0x0004,

0x0088,	// (0x0006115a) camera2_autofocus_pane_g_ParamLimits

0x0088,	// (0x0006115a) camera2_autofocus_pane_g

0x3aea,	// (0x00064bbc) camera2_autofocus_pane_cp_g2

0x3af2,	// (0x00064bc4) camera2_autofocus_pane_cp_g3

0x3afa,	// (0x00064bcc) camera2_autofocus_pane_cp_g4

0x3b02,	// (0x00064bd4) camera2_autofocus_pane_cp_g5

0x0004,

0xf660,	// (0x00070732) camera2_autofocus_pane_cp_g

0xb963,	// (0x0006ca35) popup_dialer_spcha_window

0xb963,	// (0x0006ca35) bg_popup_sub_pane_cp07

0xb963,	// (0x0006ca35) list_spcha_pane

0xed37,	// (0x0006fe09) list_single_spcha_pane_ParamLimits

0xed37,	// (0x0006fe09) list_single_spcha_pane

0xb963,	// (0x0006ca35) list_highlight_pane_cp06

0xc804,	// (0x0006d8d6) list_single_spcha_pane_t1

0xdf1e,	// (0x0006eff0) popup_call2_audio_out_window_g4_ParamLimits

0xdf1e,	// (0x0006eff0) popup_call2_audio_out_window_g4

0x9e54,	// (0x0006af26) main_imed2_pane

0xa001,	// (0x0006b0d3) popup_imed_adjust2_window

0x3471,	// (0x00064543) popup_imed_trans_window_ParamLimits

0x3471,	// (0x00064543) popup_imed_trans_window

0xe6f7,	// (0x0006f7c9) popup_blid_sat_info2_window_t1

0xe705,	// (0x0006f7d7) popup_blid_sat_info2_window_t2

0x000a,

0xf5e3,	// (0x000706b5) popup_blid_sat_info2_window_t

0x4490,	// (0x00065562) aid_size_cell_colour_35

0x44b0,	// (0x00065582) aid_size_cell_colour_112

0x44d0,	// (0x000655a2) aid_size_cell_effect

0xd1c5,	// (0x0006e297) bg_tb_trans_pane_cp02

0xc72a,	// (0x0006d7fc) heading_imed_pane

0x44f0,	// (0x000655c2) listscroll_imed_pane

0xed49,	// (0x0006fe1b) heading_imed_pane_g1

0xed51,	// (0x0006fe23) heading_imed_pane_t1

0xed5f,	// (0x0006fe31) grid_imed_colour_35_pane_ParamLimits

0xed5f,	// (0x0006fe31) grid_imed_colour_35_pane

0x44fc,	// (0x000655ce) grid_imed_effect_pane

0xed77,	// (0x0006fe49) list_imed_aspect_pane

0x4512,	// (0x000655e4) scroll_pane_cp027_ParamLimits

0x4512,	// (0x000655e4) scroll_pane_cp027

0x4523,	// (0x000655f5) cell_imed_effect_pane_ParamLimits

0x4523,	// (0x000655f5) cell_imed_effect_pane

0xed7f,	// (0x0006fe51) cell_imed_colour_pane_ParamLimits

0xed7f,	// (0x0006fe51) cell_imed_colour_pane

0xedc1,	// (0x0006fe93) cell_imed_colour_pane_g1_ParamLimits

0xedc1,	// (0x0006fe93) cell_imed_colour_pane_g1

0xedd2,	// (0x0006fea4) hgihlgiht_grid_pane_cp016_ParamLimits

0xedd2,	// (0x0006fea4) hgihlgiht_grid_pane_cp016

0x454a,	// (0x0006561c) cell_imed_effect_pane_g1

0x4552,	// (0x00065624) grid_highlight_pane_cp017

0xede3,	// (0x0006feb5) list_imed_single_pane_ParamLimits

0xede3,	// (0x0006feb5) list_imed_single_pane

0xb963,	// (0x0006ca35) list_highlight_pane_cp07

0xedf8,	// (0x0006feca) list_imed_aspect_pane_comp1_t1

0xd1c5,	// (0x0006e297) bg_tb_trans_pane_cp05

0xee1a,	// (0x0006feec) popup_imed_adjust2_window_g1

0xee41,	// (0x0006ff13) popup_imed_adjust2_window_t1

0xee59,	// (0x0006ff2b) slider_imed_adjust_pane

0xee6d,	// (0x0006ff3f) slider_imed_adjust_pane_g1

0xee7d,	// (0x0006ff4f) slider_imed_adjust_pane_g2

0xee8d,	// (0x0006ff5f) slider_imed_adjust_pane_g3

0xee9e,	// (0x0006ff70) slider_imed_adjust_pane_g4

0x0003,

0xf6c2,	// (0x00070794) slider_imed_adjust_pane_g

0x455b,	// (0x0006562d) aid_size_cell_clipart2

0x4567,	// (0x00065639) grid_imed_clipart_pane

0xd258,	// (0x0006e32a) scroll_pane_cp031

0x4571,	// (0x00065643) cell_imed_clipart_pane_ParamLimits

0x4571,	// (0x00065643) cell_imed_clipart_pane

0x4593,	// (0x00065665) cell_imed_clipart_pane_g1

0xb963,	// (0x0006ca35) grid_highlight_pane_cp014

0x4242,	// (0x00065314) main_clock2_pane_g1_ParamLimits

0x4242,	// (0x00065314) main_clock2_pane_g1

0x4386,	// (0x00065458) aid_call2_pane_cp10

0x4398,	// (0x0006546a) aid_call_pane_cp10

0xcc9f,	// (0x0006dd71) popup_clock_analogue_window_cp10_g1

0xcc9f,	// (0x0006dd71) popup_clock_analogue_window_cp10_g2

0x43aa,	// (0x0006547c) popup_clock_analogue_window_cp10_g3

0x43aa,	// (0x0006547c) popup_clock_analogue_window_cp10_g4

0xcc9f,	// (0x0006dd71) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6b0,	// (0x00070782) popup_clock_analogue_window_cp10_g

0x43c0,	// (0x00065492) popup_clock_analogue_window_cp10_t1

0x43f1,	// (0x000654c3) clock_digital_number_pane_cp10_ParamLimits

0x43f1,	// (0x000654c3) clock_digital_number_pane_cp10

0x4409,	// (0x000654db) clock_digital_number_pane_cp11_ParamLimits

0x4409,	// (0x000654db) clock_digital_number_pane_cp11

0x4421,	// (0x000654f3) clock_digital_number_pane_cp12_ParamLimits

0x4421,	// (0x000654f3) clock_digital_number_pane_cp12

0x443b,	// (0x0006550d) clock_digital_number_pane_cp13_ParamLimits

0x443b,	// (0x0006550d) clock_digital_number_pane_cp13

0x4455,	// (0x00065527) clock_digital_separator_pane_cp10_ParamLimits

0x4455,	// (0x00065527) clock_digital_separator_pane_cp10

0x446f,	// (0x00065541) popup_clock_digital_window_cp02_t1_ParamLimits

0x446f,	// (0x00065541) popup_clock_digital_window_cp02_t1

0xbfe1,	// (0x0006d0b3) clock_digital_number_pane_cp10_g1

0xbfe1,	// (0x0006d0b3) clock_digital_number_pane_cp10_g2

0x0001,

0x016a,	// (0x0006123c) clock_digital_number_pane_cp10_g

0xbfe1,	// (0x0006d0b3) clock_digital_separator_pane_cp10_g1

0xbfe1,	// (0x0006d0b3) clock_digital_separator_pane_g2_cp10

0xd0b4,	// (0x0006e186) navi_pane_vded_g4

0xd0bd,	// (0x0006e18f) navi_pane_vded_g5

0xd0c6,	// (0x0006e198) navi_pane_vded_t1

0x9e54,	// (0x0006af26) main_vded_pane

0x459c,	// (0x0006566e) main_vded_pane_g1

0x45a6,	// (0x00065678) main_vded_pane_g2

0x45b0,	// (0x00065682) main_vded_pane_g3

0x0002,

0xf6cb,	// (0x0007079d) main_vded_pane_g

0x45ba,	// (0x0006568c) main_vded_pane_t1

0x45c8,	// (0x0006569a) main_vded_pane_t2

0x0001,

0xf6d2,	// (0x000707a4) main_vded_pane_t

0x45d6,	// (0x000656a8) vded_slider_pane

0x45de,	// (0x000656b0) vded_video_pane

0xeeaf,	// (0x0006ff81) vded_video_pane_g1

0x45e6,	// (0x000656b8) vded_video_pane_g2

0xc0b0,	// (0x0006d182) vded_video_pane_g3

0x0002,

0xf6d7,	// (0x000707a9) vded_video_pane_g

0xeeb9,	// (0x0006ff8b) vded_slider_pane_g1

0xe614,	// (0x0006f6e6) vded_slider_pane_g2

0xeec2,	// (0x0006ff94) vded_slider_pane_g3

0xeecb,	// (0x0006ff9d) vded_slider_pane_g4

0xeed4,	// (0x0006ffa6) vded_slider_pane_g5

0x0004,

0xf6de,	// (0x000707b0) vded_slider_pane_g

0x40a6,	// (0x00065178) mup3_rocker_pane_ParamLimits

0x40a6,	// (0x00065178) mup3_rocker_pane

0x45ef,	// (0x000656c1) mup3_control_keys_pane_g1

0x45f7,	// (0x000656c9) mup3_control_keys_pane_g2

0x45ff,	// (0x000656d1) mup3_control_keys_pane_g3

0x4607,	// (0x000656d9) mup3_control_keys_pane_g4

0x0003,

0xf6e9,	// (0x000707bb) mup3_control_keys_pane_g

0x0be2,	// (0x00061cb4) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0be2,	// (0x00061cb4) popup_toolbar2_fixed_window_cp01

0x40da,	// (0x000651ac) popup_toolbar2_fixed_window_cp02_ParamLimits

0x40da,	// (0x000651ac) popup_toolbar2_fixed_window_cp02

0xd8a7,	// (0x0006e979) popup_call2_audio_second_window_t4_ParamLimits

0xd8a7,	// (0x0006e979) popup_call2_audio_second_window_t4

0xdde3,	// (0x0006eeb5) popup_call2_audio_first_window_t6_ParamLimits

0xdde3,	// (0x0006eeb5) popup_call2_audio_first_window_t6

0xe021,	// (0x0006f0f3) popup_call2_audio_out_window_t6_ParamLimits

0xe021,	// (0x0006f0f3) popup_call2_audio_out_window_t6

0x9e54,	// (0x0006af26) main_vitu_pane

0xc00b,	// (0x0006d0dd) aid_size_cell_itu_ParamLimits

0xc00b,	// (0x0006d0dd) aid_size_cell_itu

0xc00b,	// (0x0006d0dd) bg_popup_window_pane_cp08_ParamLimits

0xc00b,	// (0x0006d0dd) bg_popup_window_pane_cp08

0xc00b,	// (0x0006d0dd) field_vitu_entry_pane_ParamLimits

0xc00b,	// (0x0006d0dd) field_vitu_entry_pane

0xc00b,	// (0x0006d0dd) grid_vitu_function_pane_ParamLimits

0xc00b,	// (0x0006d0dd) grid_vitu_function_pane

0xc00b,	// (0x0006d0dd) grid_vitu_itu_pane_ParamLimits

0xc00b,	// (0x0006d0dd) grid_vitu_itu_pane

0xc00b,	// (0x0006d0dd) cell_vitu_itu_pane_ParamLimits

0xc00b,	// (0x0006d0dd) cell_vitu_itu_pane

0xc00b,	// (0x0006d0dd) cell_vitu_function_pane_ParamLimits

0xc00b,	// (0x0006d0dd) cell_vitu_function_pane

0xc00b,	// (0x0006d0dd) bg_popup_sub_pane_cp08_ParamLimits

0xc00b,	// (0x0006d0dd) bg_popup_sub_pane_cp08

0xc0ba,	// (0x0006d18c) field_vitu_entry_pane_t1_ParamLimits

0xc0ba,	// (0x0006d18c) field_vitu_entry_pane_t1

0xeedd,	// (0x0006ffaf) field_vitu_entry_pane_t2_ParamLimits

0xeedd,	// (0x0006ffaf) field_vitu_entry_pane_t2

0x0001,

0xf6f2,	// (0x000707c4) field_vitu_entry_pane_t_ParamLimits

0xf6f2,	// (0x000707c4) field_vitu_entry_pane_t

0xe69e,	// (0x0006f770) bg_button_pane_cp05_ParamLimits

0xe69e,	// (0x0006f770) bg_button_pane_cp05

0xeefa,	// (0x0006ffcc) cell_vitu_itu_pane_g1

0xd1b1,	// (0x0006e283) cell_vitu_itu_pane_t1_ParamLimits

0xd1b1,	// (0x0006e283) cell_vitu_itu_pane_t1

0xd1b1,	// (0x0006e283) cell_vitu_itu_pane_t2_ParamLimits

0xd1b1,	// (0x0006e283) cell_vitu_itu_pane_t2

0x0002,

0xf6f7,	// (0x000707c9) cell_vitu_itu_pane_t_ParamLimits

0xf6f7,	// (0x000707c9) cell_vitu_itu_pane_t

0xb963,	// (0x0006ca35) bg_button_pane_cp07

0xc0b0,	// (0x0006d182) cell_vitu_function_pane_g1

0x9e5e,	// (0x0006af30) main_calc_pane_g1

0x0a70,	// (0x00061b42) aid_visual_content_pane

0x9e54,	// (0x0006af26) main_vradio_pane

0xc072,	// (0x0006d144) main_vradio_pane_g1_ParamLimits

0xc072,	// (0x0006d144) main_vradio_pane_g1

0xc080,	// (0x0006d152) main_vradio_pane_g2_ParamLimits

0xc080,	// (0x0006d152) main_vradio_pane_g2

0x0001,

0x0629,	// (0x000616fb) main_vradio_pane_g_ParamLimits

0x0629,	// (0x000616fb) main_vradio_pane_g

0xc0ba,	// (0x0006d18c) main_vradio_pane_t1_ParamLimits

0xc0ba,	// (0x0006d18c) main_vradio_pane_t1

0xc0ba,	// (0x0006d18c) main_vradio_pane_t2_ParamLimits

0xc0ba,	// (0x0006d18c) main_vradio_pane_t2

0xc0ce,	// (0x0006d1a0) main_vradio_pane_t3_ParamLimits

0xc0ce,	// (0x0006d1a0) main_vradio_pane_t3

0x0002,

0xf6fe,	// (0x000707d0) main_vradio_pane_t_ParamLimits

0xf6fe,	// (0x000707d0) main_vradio_pane_t

0xc00b,	// (0x0006d0dd) vradio_rocker_control_pane_ParamLimits

0xc00b,	// (0x0006d0dd) vradio_rocker_control_pane

0xc00b,	// (0x0006d0dd) vradio_station_info_pane_ParamLimits

0xc00b,	// (0x0006d0dd) vradio_station_info_pane

0xc00b,	// (0x0006d0dd) vradio_frequency_info_pane_ParamLimits

0xc00b,	// (0x0006d0dd) vradio_frequency_info_pane

0xc0b0,	// (0x0006d182) vradio_station_info_pane_g1

0xd1b1,	// (0x0006e283) vradio_station_info_pane_t1_ParamLimits

0xd1b1,	// (0x0006e283) vradio_station_info_pane_t1

0xc0ce,	// (0x0006d1a0) vradio_station_info_pane_t2_ParamLimits

0xc0ce,	// (0x0006d1a0) vradio_station_info_pane_t2

0x0001,

0xf705,	// (0x000707d7) vradio_station_info_pane_t_ParamLimits

0xf705,	// (0x000707d7) vradio_station_info_pane_t

0xb963,	// (0x0006ca35) vradio_tuning_pane

0x4617,	// (0x000656e9) vradio_rocker_control_pane_g1

0xef16,	// (0x0006ffe8) vradio_rocker_control_pane_g2

0x4621,	// (0x000656f3) vradio_rocker_control_pane_g3

0x462b,	// (0x000656fd) vradio_rocker_control_pane_g4

0x4635,	// (0x00065707) vradio_rocker_control_pane_g5

0x0004,

0xf70a,	// (0x000707dc) vradio_rocker_control_pane_g

0xc0b0,	// (0x0006d182) vradio_frequency_info_pane_g1

0xc0ba,	// (0x0006d18c) vradio_frequency_info_pane_t1_ParamLimits

0xc0ba,	// (0x0006d18c) vradio_frequency_info_pane_t1

0x463f,	// (0x00065711) vradio_tuning_pane_g1

0x464a,	// (0x0006571c) vradio_tuning_pane_t1

0x9e05,	// (0x0006aed7) area_side_right_pane_ParamLimits

0x9e05,	// (0x0006aed7) area_side_right_pane

0xe44b,	// (0x0006f51d) status_small_pane_g1

0xe453,	// (0x0006f525) status_small_pane_g2

0xe45c,	// (0x0006f52e) status_small_pane_g3

0xe465,	// (0x0006f537) status_small_pane_g4

0x0003,

0xf545,	// (0x00070617) status_small_pane_g

0xe46e,	// (0x0006f540) status_small_pane_t1

0x9e54,	// (0x0006af26) main_video3_pane

0xb963,	// (0x0006ca35) cams_zoom_vslider_pane

0xef1e,	// (0x0006fff0) image3_wide_pane_ParamLimits

0xef1e,	// (0x0006fff0) image3_wide_pane

0xb963,	// (0x0006ca35) image3_wide_small_pane

0xef38,	// (0x0007000a) main_video3_pane_g1_ParamLimits

0xef38,	// (0x0007000a) main_video3_pane_g1

0xef38,	// (0x0007000a) main_video3_pane_g2_ParamLimits

0xef38,	// (0x0007000a) main_video3_pane_g2

0x0001,

0x01b9,	// (0x0006128b) main_video3_pane_g_ParamLimits

0x01b9,	// (0x0006128b) main_video3_pane_g

0xef56,	// (0x00070028) main_video3_pane_t1_ParamLimits

0xef56,	// (0x00070028) main_video3_pane_t1

0xef56,	// (0x00070028) main_video3_pane_t2_ParamLimits

0xef56,	// (0x00070028) main_video3_pane_t2

0xef56,	// (0x00070028) main_video3_pane_t3_ParamLimits

0xef56,	// (0x00070028) main_video3_pane_t3

0x0002,

0x01be,	// (0x00061290) main_video3_pane_t_ParamLimits

0x01be,	// (0x00061290) main_video3_pane_t

0xc0b0,	// (0x0006d182) cams_zoom_vslider_pane_g1

0xc0b0,	// (0x0006d182) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00070181) cams_zoom_vslider_pane_g

0xb963,	// (0x0006ca35) small_slider_vertical_pane

0xc0b0,	// (0x0006d182) small_slider_vertical_pane_g1

0xc0b0,	// (0x0006d182) small_slider_vertical_pane_g2

0xef7d,	// (0x0007004f) small_slider_vertical_pane_g3

0x0002,

0x01c5,	// (0x00061297) small_slider_vertical_pane_g

0x9e54,	// (0x0006af26) main_hwr_training_pane

0xef86,	// (0x00070058) hwr_training_instruct_pane_ParamLimits

0xef86,	// (0x00070058) hwr_training_instruct_pane

0x4659,	// (0x0006572b) hwr_training_navi_pane_ParamLimits

0x4659,	// (0x0006572b) hwr_training_navi_pane

0x4678,	// (0x0006574a) hwr_training_write_pane_ParamLimits

0x4678,	// (0x0006574a) hwr_training_write_pane

0xb963,	// (0x0006ca35) bg_frame_shadow_pane

0xefbd,	// (0x0007008f) hwr_training_write_pane_g1

0xefc5,	// (0x00070097) hwr_training_write_pane_g2

0xefcd,	// (0x0007009f) hwr_training_write_pane_g3

0xefd5,	// (0x000700a7) hwr_training_write_pane_g4

0xefdd,	// (0x000700af) hwr_training_write_pane_g5

0xefe5,	// (0x000700b7) hwr_training_write_pane_g6

0xefed,	// (0x000700bf) hwr_training_write_pane_g7

0x0006,

0x01cc,	// (0x0006129e) hwr_training_write_pane_g

0xa0e9,	// (0x0006b1bb) hwr_training_navi_pane_g1_ParamLimits

0xa0e9,	// (0x0006b1bb) hwr_training_navi_pane_g1

0xa0fb,	// (0x0006b1cd) hwr_training_navi_pane_g2_ParamLimits

0xa0fb,	// (0x0006b1cd) hwr_training_navi_pane_g2

0xa10d,	// (0x0006b1df) hwr_training_navi_pane_g3_ParamLimits

0xa10d,	// (0x0006b1df) hwr_training_navi_pane_g3

0xa11d,	// (0x0006b1ef) hwr_training_navi_pane_g4_ParamLimits

0xa11d,	// (0x0006b1ef) hwr_training_navi_pane_g4

0x0004,

0xf715,	// (0x000707e7) hwr_training_navi_pane_g_ParamLimits

0xf715,	// (0x000707e7) hwr_training_navi_pane_g

0xa12a,	// (0x0006b1fc) hwr_training_navi_pane_t1

0x46c2,	// (0x00065794) list_single_hwr_training_instruct_pane_ParamLimits

0x46c2,	// (0x00065794) list_single_hwr_training_instruct_pane

0xeff5,	// (0x000700c7) list_single_hwr_training_instruct_pane_t1

0xe7f8,	// (0x0006f8ca) bg_frame_shadow_pane_g1

0xf004,	// (0x000700d6) bg_frame_shadow_pane_g2

0xf00c,	// (0x000700de) bg_frame_shadow_pane_g3

0xf014,	// (0x000700e6) bg_frame_shadow_pane_g4

0xf01c,	// (0x000700ee) bg_frame_shadow_pane_g5

0xf024,	// (0x000700f6) bg_frame_shadow_pane_g6

0xf02c,	// (0x000700fe) bg_frame_shadow_pane_g7

0xc1bd,	// (0x0006d28f) bg_frame_shadow_pane_g8

0x0007,

0xf720,	// (0x000707f2) bg_frame_shadow_pane_g

0x9e54,	// (0x0006af26) main_video_tele_dialer_pane

0x46d8,	// (0x000657aa) aid_size_cell_video_keypad_ParamLimits

0x46d8,	// (0x000657aa) aid_size_cell_video_keypad

0x46f2,	// (0x000657c4) grid_video_dialer_keypad_pane_ParamLimits

0x46f2,	// (0x000657c4) grid_video_dialer_keypad_pane

0x4740,	// (0x00065812) video_down_pane_cp_ParamLimits

0x4740,	// (0x00065812) video_down_pane_cp

0x4772,	// (0x00065844) cell_video_dialer_keypad_pane_ParamLimits

0x4772,	// (0x00065844) cell_video_dialer_keypad_pane

0xf034,	// (0x00070106) bg_button_pane_cp08_ParamLimits

0xf034,	// (0x00070106) bg_button_pane_cp08

0x4794,	// (0x00065866) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4794,	// (0x00065866) cell_video_dialer_keypad_pane_g1

0x4090,	// (0x00065162) mup3_rocker2_pane_ParamLimits

0x4090,	// (0x00065162) mup3_rocker2_pane

0xc0b0,	// (0x0006d182) mup3_rocker2_pane_g1

0x3360,	// (0x00064432) main_dialer2_pane

0x9e54,	// (0x0006af26) main_mp4_pane

0xa156,	// (0x0006b228) main_mp4_pane_g1_ParamLimits

0xa156,	// (0x0006b228) main_mp4_pane_g1

0xa156,	// (0x0006b228) main_mp4_pane_g2_ParamLimits

0xa156,	// (0x0006b228) main_mp4_pane_g2

0x47ce,	// (0x000658a0) main_mp4_pane_g3_ParamLimits

0x47ce,	// (0x000658a0) main_mp4_pane_g3

0xa174,	// (0x0006b246) main_mp4_pane_g4_ParamLimits

0xa174,	// (0x0006b246) main_mp4_pane_g4

0xa19c,	// (0x0006b26e) main_mp4_pane_g5_ParamLimits

0xa19c,	// (0x0006b26e) main_mp4_pane_g5

0x0007,

0xf740,	// (0x00070812) main_mp4_pane_g_ParamLimits

0xf740,	// (0x00070812) main_mp4_pane_g

0xa204,	// (0x0006b2d6) main_mp4_pane_t1_ParamLimits

0xa204,	// (0x0006b2d6) main_mp4_pane_t1

0xa266,	// (0x0006b338) main_mp4_pane_t2_ParamLimits

0xa266,	// (0x0006b338) main_mp4_pane_t2

0xa2ca,	// (0x0006b39c) main_mp4_pane_t3_ParamLimits

0xa2ca,	// (0x0006b39c) main_mp4_pane_t3

0xa328,	// (0x0006b3fa) main_mp4_pane_t4_ParamLimits

0xa328,	// (0x0006b3fa) main_mp4_pane_t4

0x0003,

0xf751,	// (0x00070823) main_mp4_pane_t_ParamLimits

0xf751,	// (0x00070823) main_mp4_pane_t

0xa386,	// (0x0006b458) mp4_progress_pane_ParamLimits

0xa386,	// (0x0006b458) mp4_progress_pane

0xa3ba,	// (0x0006b48c) mp4_rocker_pane_ParamLimits

0xa3ba,	// (0x0006b48c) mp4_rocker_pane

0x4806,	// (0x000658d8) mp4_progress_pane_t1

0x4828,	// (0x000658fa) mp4_progress_pane_t2

0x0001,

0xf75a,	// (0x0007082c) mp4_progress_pane_t

0x484a,	// (0x0006591c) mup_progress_pane_cp04

0x38f4,	// (0x000649c6) mp4_rocker_pane_g1

0x9e46,	// (0x0006af18) aid_cell_size_keypad2_ParamLimits

0x9e46,	// (0x0006af18) aid_cell_size_keypad2

0x9e46,	// (0x0006af18) dialer2_ne_pane_ParamLimits

0x9e46,	// (0x0006af18) dialer2_ne_pane

0x9e46,	// (0x0006af18) grid_dialer2_keypad_pane_ParamLimits

0x9e46,	// (0x0006af18) grid_dialer2_keypad_pane

0xe69e,	// (0x0006f770) bg_popup_call_pane_cp07_ParamLimits

0xe69e,	// (0x0006f770) bg_popup_call_pane_cp07

0x485d,	// (0x0006592f) dialer2_ne_pane_t1_ParamLimits

0x485d,	// (0x0006592f) dialer2_ne_pane_t1

0x48ae,	// (0x00065980) cell_dialer2_keypad_pane_ParamLimits

0x48ae,	// (0x00065980) cell_dialer2_keypad_pane

0xe69e,	// (0x0006f770) bg_button_pane_pane_cp04_ParamLimits

0xe69e,	// (0x0006f770) bg_button_pane_pane_cp04

0xc072,	// (0x0006d144) cell_dialer2_keypad_pane_g1_ParamLimits

0xc072,	// (0x0006d144) cell_dialer2_keypad_pane_g1

0x1682,	// (0x00062754) aid_placing_vt_set_content_ParamLimits

0x1682,	// (0x00062754) aid_placing_vt_set_content

0x16aa,	// (0x0006277c) aid_placing_vt_set_title_ParamLimits

0x16aa,	// (0x0006277c) aid_placing_vt_set_title

0x9e54,	// (0x0006af26) main_image3_pane

0x493f,	// (0x00065a11) area_side_right_pane_cp01_ParamLimits

0x493f,	// (0x00065a11) area_side_right_pane_cp01

0x4956,	// (0x00065a28) main_image3_pane_g1_ParamLimits

0x4956,	// (0x00065a28) main_image3_pane_g1

0x4964,	// (0x00065a36) main_image3_pane_g2_ParamLimits

0x4964,	// (0x00065a36) main_image3_pane_g2

0x498c,	// (0x00065a5e) main_image3_pane_g3_ParamLimits

0x498c,	// (0x00065a5e) main_image3_pane_g3

0x49b6,	// (0x00065a88) main_image3_pane_g4_ParamLimits

0x49b6,	// (0x00065a88) main_image3_pane_g4

0x0003,

0xf769,	// (0x0007083b) main_image3_pane_g_ParamLimits

0xf769,	// (0x0007083b) main_image3_pane_g

0x49e0,	// (0x00065ab2) main_image3_pane_t1_ParamLimits

0x49e0,	// (0x00065ab2) main_image3_pane_t1

0x4a38,	// (0x00065b0a) main_image3_pane_t2_ParamLimits

0x4a38,	// (0x00065b0a) main_image3_pane_t2

0x4a8a,	// (0x00065b5c) main_image3_pane_t3_ParamLimits

0x4a8a,	// (0x00065b5c) main_image3_pane_t3

0x0003,

0xf772,	// (0x00070844) main_image3_pane_t_ParamLimits

0xf772,	// (0x00070844) main_image3_pane_t

0xc00b,	// (0x0006d0dd) grid_sctrl_middle_pane_cp01_ParamLimits

0xc00b,	// (0x0006d0dd) grid_sctrl_middle_pane_cp01

0x4b12,	// (0x00065be4) cell_sctrl_middle_pane_cp01_ParamLimits

0x4b12,	// (0x00065be4) cell_sctrl_middle_pane_cp01

0x4b2f,	// (0x00065c01) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4b2f,	// (0x00065c01) cell_sctrl_middle_pane_cp01_g1

0x9e54,	// (0x0006af26) main_call4_pane

0x4b45,	// (0x00065c17) aid_size_button_call4_ParamLimits

0x4b45,	// (0x00065c17) aid_size_button_call4

0x4b78,	// (0x00065c4a) call4_windows_pane_ParamLimits

0x4b78,	// (0x00065c4a) call4_windows_pane

0x4b97,	// (0x00065c69) grid_call4_button_pane_ParamLimits

0x4b97,	// (0x00065c69) grid_call4_button_pane

0x4bca,	// (0x00065c9c) call4_windows_conf_pane

0x4bdf,	// (0x00065cb1) popup_call4_audio_first_window_ParamLimits

0x4bdf,	// (0x00065cb1) popup_call4_audio_first_window

0x4c2f,	// (0x00065d01) popup_call4_audio_second_window_ParamLimits

0x4c2f,	// (0x00065d01) popup_call4_audio_second_window

0x4c46,	// (0x00065d18) popup_call4_audio_wait_window_ParamLimits

0x4c46,	// (0x00065d18) popup_call4_audio_wait_window

0x4c54,	// (0x00065d26) cell_call4_button_pane_ParamLimits

0x4c54,	// (0x00065d26) cell_call4_button_pane

0x4c79,	// (0x00065d4b) bg_button_pane_cp09_ParamLimits

0x4c79,	// (0x00065d4b) bg_button_pane_cp09

0x4c85,	// (0x00065d57) cell_call4_button_pane_g1_ParamLimits

0x4c85,	// (0x00065d57) cell_call4_button_pane_g1

0x4cab,	// (0x00065d7d) cell_call4_button_pane_t1_ParamLimits

0x4cab,	// (0x00065d7d) cell_call4_button_pane_t1

0x4cdd,	// (0x00065daf) popup_call4_audio_conf_window_ParamLimits

0x4cdd,	// (0x00065daf) popup_call4_audio_conf_window

0x40f0,	// (0x000651c2) mup3_progress_pane_t1_ParamLimits

0x410f,	// (0x000651e1) mup3_progress_pane_t2_ParamLimits

0xebf8,	// (0x0006fcca) mup3_progress_pane_t3_ParamLimits

0xf689,	// (0x0007075b) mup3_progress_pane_t_ParamLimits

0xec15,	// (0x0006fce7) mup_progress_pane_cp03_ParamLimits

0x460f,	// (0x000656e1) mup3_control_keys_pane_g4_copy1

0xa3ba,	// (0x0006b48c) mp4_rocker2_pane_ParamLimits

0xa3ba,	// (0x0006b48c) mp4_rocker2_pane

0xa432,	// (0x0006b504) mp4_rocker2_pane_g1

0xa432,	// (0x0006b504) mp4_rocker2_pane_g2

0xa432,	// (0x0006b504) mp4_rocker2_pane_g3

0xa432,	// (0x0006b504) mp4_rocker2_pane_g4

0xa432,	// (0x0006b504) mp4_rocker2_pane_g5

0x0004,

0xf77b,	// (0x0007084d) mp4_rocker2_pane_g

0x9e54,	// (0x0006af26) main_camera4_pane

0x9e54,	// (0x0006af26) main_video4_pane

0x470e,	// (0x000657e0) main_video_tele_dialer_pane_t1_ParamLimits

0x470e,	// (0x000657e0) main_video_tele_dialer_pane_t1

0x4727,	// (0x000657f9) main_video_tele_dialer_pane_t2_ParamLimits

0x4727,	// (0x000657f9) main_video_tele_dialer_pane_t2

0x0001,

0xf731,	// (0x00070803) main_video_tele_dialer_pane_t_ParamLimits

0xf731,	// (0x00070803) main_video_tele_dialer_pane_t

0x4d09,	// (0x00065ddb) cam4_autofocus_pane_ParamLimits

0x4d09,	// (0x00065ddb) cam4_autofocus_pane

0x4d1f,	// (0x00065df1) cam4_image_uncrop_pane_ParamLimits

0x4d1f,	// (0x00065df1) cam4_image_uncrop_pane

0x4d39,	// (0x00065e0b) cam4_indicators_pane_ParamLimits

0x4d39,	// (0x00065e0b) cam4_indicators_pane

0x4d64,	// (0x00065e36) main_camera4_pane_g1_ParamLimits

0x4d64,	// (0x00065e36) main_camera4_pane_g1

0x4d76,	// (0x00065e48) main_camera4_pane_g2_ParamLimits

0x4d76,	// (0x00065e48) main_camera4_pane_g2

0x4d89,	// (0x00065e5b) main_camera4_pane_g3_ParamLimits

0x4d89,	// (0x00065e5b) main_camera4_pane_g3

0x4d9c,	// (0x00065e6e) main_camera4_pane_g4_ParamLimits

0x4d9c,	// (0x00065e6e) main_camera4_pane_g4

0x4daf,	// (0x00065e81) main_camera4_pane_g5_ParamLimits

0x4daf,	// (0x00065e81) main_camera4_pane_g5

0x0005,

0xf786,	// (0x00070858) main_camera4_pane_g_ParamLimits

0xf786,	// (0x00070858) main_camera4_pane_g

0x4dd3,	// (0x00065ea5) main_camera4_pane_t1_ParamLimits

0x4dd3,	// (0x00065ea5) main_camera4_pane_t1

0xa468,	// (0x0006b53a) bg_tb_trans_pane_cp06

0xa47e,	// (0x0006b550) cam4_indicators_pane_g1

0xa48f,	// (0x0006b561) cam4_indicators_pane_g2

0x0002,

0xf7a1,	// (0x00070873) cam4_indicators_pane_g

0xa4a7,	// (0x0006b579) cam4_indicators_pane_t1

0x4e37,	// (0x00065f09) main_video4_pane_g1_ParamLimits

0x4e37,	// (0x00065f09) main_video4_pane_g1

0x4e46,	// (0x00065f18) main_video4_pane_g2_ParamLimits

0x4e46,	// (0x00065f18) main_video4_pane_g2

0x4e55,	// (0x00065f27) main_video4_pane_g3_ParamLimits

0x4e55,	// (0x00065f27) main_video4_pane_g3

0x4e64,	// (0x00065f36) main_video4_pane_g4_ParamLimits

0x4e64,	// (0x00065f36) main_video4_pane_g4

0x0004,

0xf7a8,	// (0x0007087a) main_video4_pane_g_ParamLimits

0xf7a8,	// (0x0007087a) main_video4_pane_g

0x4e82,	// (0x00065f54) vid4_indicators_pane_ParamLimits

0x4e82,	// (0x00065f54) vid4_indicators_pane

0x4eb0,	// (0x00065f82) video4_image_uncrop_cif_pane_ParamLimits

0x4eb0,	// (0x00065f82) video4_image_uncrop_cif_pane

0x4eca,	// (0x00065f9c) video4_image_uncrop_nhd_pane_ParamLimits

0x4eca,	// (0x00065f9c) video4_image_uncrop_nhd_pane

0x4d1f,	// (0x00065df1) video4_image_uncrop_vga_pane_ParamLimits

0x4d1f,	// (0x00065df1) video4_image_uncrop_vga_pane

0x9e46,	// (0x0006af18) bg_tb_trans_pane_cp07

0xa4d1,	// (0x0006b5a3) vid4_indicators_pane_g1

0xa4e5,	// (0x0006b5b7) vid4_indicators_pane_g2

0xa4f9,	// (0x0006b5cb) vid4_indicators_pane_g3

0x0004,

0xf7b3,	// (0x00070885) vid4_indicators_pane_g

0xa526,	// (0x0006b5f8) vid4_indicators_pane_t1

0x4ede,	// (0x00065fb0) cam4_autofocus_pane_g1

0x4ee6,	// (0x00065fb8) cam4_autofocus_pane_g2

0x4eee,	// (0x00065fc0) cam4_autofocus_pane_g3

0x0002,

0xf7be,	// (0x00070890) cam4_autofocus_pane_g

0x4ef6,	// (0x00065fc8) cam4_autofocus_pane_g3_copy1

0x4756,	// (0x00065828) video_down_pane_cp_t1

0x4764,	// (0x00065836) video_down_pane_cp_t2

0x0001,

0xf736,	// (0x00070808) video_down_pane_cp_t

0x9e46,	// (0x0006af18) popup_vitu2_window_ParamLimits

0x9e46,	// (0x0006af18) popup_vitu2_window

0x4efe,	// (0x00065fd0) aid_size_cell2_itu2_ParamLimits

0x4efe,	// (0x00065fd0) aid_size_cell2_itu2

0x4f24,	// (0x00065ff6) aid_size_cell_itu2_ParamLimits

0x4f24,	// (0x00065ff6) aid_size_cell_itu2

0x4f80,	// (0x00066052) bg_popup_window_pane_cp09_ParamLimits

0x4f80,	// (0x00066052) bg_popup_window_pane_cp09

0x4f8e,	// (0x00066060) field_vitu2_entry_pane_ParamLimits

0x4f8e,	// (0x00066060) field_vitu2_entry_pane

0x4fb4,	// (0x00066086) grid_vitu2_function_pane_ParamLimits

0x4fb4,	// (0x00066086) grid_vitu2_function_pane

0x5001,	// (0x000660d3) grid_vitu2_itu_pane_ParamLimits

0x5001,	// (0x000660d3) grid_vitu2_itu_pane

0x5093,	// (0x00066165) cell_vitu2_itu_pane_ParamLimits

0x5093,	// (0x00066165) cell_vitu2_itu_pane

0x50bf,	// (0x00066191) cell_vitu2_function_pane_ParamLimits

0x50bf,	// (0x00066191) cell_vitu2_function_pane

0x50fe,	// (0x000661d0) bg_popup_call_pane_cp08_ParamLimits

0x50fe,	// (0x000661d0) bg_popup_call_pane_cp08

0x5115,	// (0x000661e7) field_vitu2_entry_pane_g1

0x5121,	// (0x000661f3) field_vitu2_entry_pane_g2

0x0002,

0xf7c5,	// (0x00070897) field_vitu2_entry_pane_g

0x512d,	// (0x000661ff) field_vitu2_entry_pane_t1_ParamLimits

0x512d,	// (0x000661ff) field_vitu2_entry_pane_t1

0x515f,	// (0x00066231) field_vitu2_entry_pane_t2_ParamLimits

0x515f,	// (0x00066231) field_vitu2_entry_pane_t2

0x0001,

0xf7cc,	// (0x0007089e) field_vitu2_entry_pane_t_ParamLimits

0xf7cc,	// (0x0007089e) field_vitu2_entry_pane_t

0x5184,	// (0x00066256) bg_button_pane_cp010_ParamLimits

0x5184,	// (0x00066256) bg_button_pane_cp010

0x5192,	// (0x00066264) cell_vitu2_itu_pane_g1

0x51b8,	// (0x0006628a) cell_vitu2_itu_pane_t1_ParamLimits

0x51b8,	// (0x0006628a) cell_vitu2_itu_pane_t1

0x0948,	// (0x00061a1a) cell_vitu2_itu_pane_t2_ParamLimits

0x0948,	// (0x00061a1a) cell_vitu2_itu_pane_t2

0x0002,

0xf7d6,	// (0x000708a8) cell_vitu2_itu_pane_t_ParamLimits

0xf7d6,	// (0x000708a8) cell_vitu2_itu_pane_t

0x9e46,	// (0x0006af18) bg_button_pane_cp011

0x5216,	// (0x000662e8) cell_vitu2_function_pane_g1

0x9e54,	// (0x0006af26) main_myfav_hc_pane

0x4ada,	// (0x00065bac) popup_image3_note_pane_ParamLimits

0x4ada,	// (0x00065bac) popup_image3_note_pane

0x4af6,	// (0x00065bc8) popup_image3_tool_bar_pane_ParamLimits

0x4af6,	// (0x00065bc8) popup_image3_tool_bar_pane

0x09d6,	// (0x00061aa8) cell_vitu2_itu_pane_t3_ParamLimits

0x09d6,	// (0x00061aa8) cell_vitu2_itu_pane_t3

0xb963,	// (0x0006ca35) bg_popup_trans_pane

0x5229,	// (0x000662fb) grid_image3_tool_bar_pane

0x5233,	// (0x00066305) bg_popup_trans_pane_g1

0xc4d9,	// (0x0006d5ab) bg_popup_trans_pane_g2

0x523b,	// (0x0006630d) bg_popup_trans_pane_g3

0x5243,	// (0x00066315) bg_popup_trans_pane_g4

0x524b,	// (0x0006631d) bg_popup_trans_pane_g5

0x5253,	// (0x00066325) bg_popup_trans_pane_g6

0x525b,	// (0x0006632d) bg_popup_trans_pane_g7

0x5263,	// (0x00066335) bg_popup_trans_pane_g8

0xc4b9,	// (0x0006d58b) bg_popup_trans_pane_g9

0x0008,

0xf7dd,	// (0x000708af) bg_popup_trans_pane_g

0x526b,	// (0x0006633d) cell_image3_tool_bar_pane_ParamLimits

0x526b,	// (0x0006633d) cell_image3_tool_bar_pane

0xc0b0,	// (0x0006d182) cell_image3_tool_bar_pane_g1

0xb963,	// (0x0006ca35) bg_popup_trans_pane_cp1

0x527f,	// (0x00066351) popup_image3_note_pane_t1

0x528d,	// (0x0006635f) popup_image3_note_pane_t2

0x529b,	// (0x0006636d) popup_image3_note_pane_t3

0x0002,

0xf7f0,	// (0x000708c2) popup_image3_note_pane_t

0x52a9,	// (0x0006637b) popup_image3_note_pane_t3_copy1

0x52b7,	// (0x00066389) bg_myfav_hc_instruction_pane_ParamLimits

0x52b7,	// (0x00066389) bg_myfav_hc_instruction_pane

0x52cb,	// (0x0006639d) cell_myfav_contact_pane_ParamLimits

0x52cb,	// (0x0006639d) cell_myfav_contact_pane

0x52e9,	// (0x000663bb) cell_myfav_contact_pane_cp1_ParamLimits

0x52e9,	// (0x000663bb) cell_myfav_contact_pane_cp1

0x5301,	// (0x000663d3) cell_myfav_contact_pane_cp2_ParamLimits

0x5301,	// (0x000663d3) cell_myfav_contact_pane_cp2

0x5319,	// (0x000663eb) cell_myfav_contact_pane_cp3_ParamLimits

0x5319,	// (0x000663eb) cell_myfav_contact_pane_cp3

0x5330,	// (0x00066402) cell_myfav_contact_pane_cp4_ParamLimits

0x5330,	// (0x00066402) cell_myfav_contact_pane_cp4

0x5348,	// (0x0006641a) cell_myfav_contact_pane_cp5_ParamLimits

0x5348,	// (0x0006641a) cell_myfav_contact_pane_cp5

0x535c,	// (0x0006642e) cell_myfav_contact_pane_cp6_ParamLimits

0x535c,	// (0x0006642e) cell_myfav_contact_pane_cp6

0x5372,	// (0x00066444) cell_myfav_contact_pane_cp7_ParamLimits

0x5372,	// (0x00066444) cell_myfav_contact_pane_cp7

0x538c,	// (0x0006645e) listscroll_gen_pane_cp05

0x5395,	// (0x00066467) main_myfav_hc_pane_g1_ParamLimits

0x5395,	// (0x00066467) main_myfav_hc_pane_g1

0x53af,	// (0x00066481) main_myfav_hc_pane_g2_ParamLimits

0x53af,	// (0x00066481) main_myfav_hc_pane_g2

0x0002,

0xf7f7,	// (0x000708c9) main_myfav_hc_pane_g_ParamLimits

0xf7f7,	// (0x000708c9) main_myfav_hc_pane_g

0x53e1,	// (0x000664b3) main_myfav_hc_pane_t1_ParamLimits

0x53e1,	// (0x000664b3) main_myfav_hc_pane_t1

0x53f8,	// (0x000664ca) main_myfav_hc_pane_t2_ParamLimits

0x53f8,	// (0x000664ca) main_myfav_hc_pane_t2

0x540a,	// (0x000664dc) main_myfav_hc_pane_t3_ParamLimits

0x540a,	// (0x000664dc) main_myfav_hc_pane_t3

0x541c,	// (0x000664ee) main_myfav_hc_pane_t4_ParamLimits

0x541c,	// (0x000664ee) main_myfav_hc_pane_t4

0x0004,

0xf7fe,	// (0x000708d0) main_myfav_hc_pane_t_ParamLimits

0xf7fe,	// (0x000708d0) main_myfav_hc_pane_t

0xc0b0,	// (0x0006d182) bg_myfav_hc_instruction_pane_g1

0x5444,	// (0x00066516) cell_myfav_contact_pane_g1_ParamLimits

0x5444,	// (0x00066516) cell_myfav_contact_pane_g1

0x5444,	// (0x00066516) cell_myfav_contact_pane_g2_ParamLimits

0x5444,	// (0x00066516) cell_myfav_contact_pane_g2

0x5450,	// (0x00066522) cell_myfav_contact_pane_g3_ParamLimits

0x5450,	// (0x00066522) cell_myfav_contact_pane_g3

0xc080,	// (0x0006d152) cell_myfav_contact_pane_g4_ParamLimits

0xc080,	// (0x0006d152) cell_myfav_contact_pane_g4

0x545d,	// (0x0006652f) cell_myfav_contact_pane_g5_ParamLimits

0x545d,	// (0x0006652f) cell_myfav_contact_pane_g5

0x0004,

0xf809,	// (0x000708db) cell_myfav_contact_pane_g_ParamLimits

0xf809,	// (0x000708db) cell_myfav_contact_pane_g

0x53c9,	// (0x0006649b) main_myfav_hc_pane_g3_ParamLimits

0x53c9,	// (0x0006649b) main_myfav_hc_pane_g3

0x08e2,	// (0x000619b4) popup_adpt_find_window

0x5469,	// (0x0006653b) afind_page_pane_ParamLimits

0x5469,	// (0x0006653b) afind_page_pane

0x547f,	// (0x00066551) aid_size_cell_afind_ParamLimits

0x547f,	// (0x00066551) aid_size_cell_afind

0x549d,	// (0x0006656f) bg_popup_sub_pane_cp09_ParamLimits

0x549d,	// (0x0006656f) bg_popup_sub_pane_cp09

0x54af,	// (0x00066581) find_pane_cp01_ParamLimits

0x54af,	// (0x00066581) find_pane_cp01

0x54c3,	// (0x00066595) grid_afind_control_pane_ParamLimits

0x54c3,	// (0x00066595) grid_afind_control_pane

0x54d7,	// (0x000665a9) grid_afind_pane_ParamLimits

0x54d7,	// (0x000665a9) grid_afind_pane

0x54f9,	// (0x000665cb) cell_afind_pane_ParamLimits

0x54f9,	// (0x000665cb) cell_afind_pane

0xc0b0,	// (0x0006d182) afind_page_pane_g1

0x5560,	// (0x00066632) afind_page_pane_g2

0x5568,	// (0x0006663a) afind_page_pane_g3

0x0002,

0xf814,	// (0x000708e6) afind_page_pane_g

0x5570,	// (0x00066642) afind_page_pane_t1

0x5590,	// (0x00066662) cell_afind_grid_control_pane_ParamLimits

0x5590,	// (0x00066662) cell_afind_grid_control_pane

0x559f,	// (0x00066671) bg_button_pane_cp69_ParamLimits

0x559f,	// (0x00066671) bg_button_pane_cp69

0x55ab,	// (0x0006667d) cell_afind_pane_g1_ParamLimits

0x55ab,	// (0x0006667d) cell_afind_pane_g1

0x55b8,	// (0x0006668a) cell_afind_pane_t1_ParamLimits

0x55b8,	// (0x0006668a) cell_afind_pane_t1

0x55ca,	// (0x0006669c) bg_button_pane_cp72

0x55d2,	// (0x000666a4) cell_afind_grid_control_pane_g1

0x2e4e,	// (0x00063f20) aid_image_placing_area_ParamLimits

0x2e4e,	// (0x00063f20) aid_image_placing_area

0xc072,	// (0x0006d144) field_vitu_entry_pane_g1_ParamLimits

0xc072,	// (0x0006d144) field_vitu_entry_pane_g1

0xc072,	// (0x0006d144) field_vitu_entry_pane_g2_ParamLimits

0xc072,	// (0x0006d144) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x0007028e) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x0007028e) field_vitu_entry_pane_g

0xeefa,	// (0x0006ffcc) cell_vitu_itu_pane_g1_ParamLimits

0xeedd,	// (0x0006ffaf) cell_vitu_itu_pane_t3_ParamLimits

0xeedd,	// (0x0006ffaf) cell_vitu_itu_pane_t3

0x4806,	// (0x000658d8) mp4_progress_pane_t1_ParamLimits

0x4828,	// (0x000658fa) mp4_progress_pane_t2_ParamLimits

0xf75a,	// (0x0007082c) mp4_progress_pane_t_ParamLimits

0x484a,	// (0x0006591c) mup_progress_pane_cp04_ParamLimits

0x5430,	// (0x00066502) main_myfav_hc_pane_t5_ParamLimits

0x5430,	// (0x00066502) main_myfav_hc_pane_t5

0x9df5,	// (0x0006aec7) aid_zoom_text_primary

0x08e2,	// (0x000619b4) popup_adpt_find_window_ParamLimits

0x9e46,	// (0x0006af18) main_cam_set_pane

0x4d50,	// (0x00065e22) cam4_zoom_pane_ParamLimits

0x4d50,	// (0x00065e22) cam4_zoom_pane

0x55db,	// (0x000666ad) main_cam_set_pane_g1_ParamLimits

0x55db,	// (0x000666ad) main_cam_set_pane_g1

0x55e9,	// (0x000666bb) main_cam_set_pane_g2_ParamLimits

0x55e9,	// (0x000666bb) main_cam_set_pane_g2

0x0001,

0xf81b,	// (0x000708ed) main_cam_set_pane_g_ParamLimits

0xf81b,	// (0x000708ed) main_cam_set_pane_g

0x560a,	// (0x000666dc) main_cam_set_pane_t1_ParamLimits

0x560a,	// (0x000666dc) main_cam_set_pane_t1

0x5625,	// (0x000666f7) main_cset_listscroll_pane_ParamLimits

0x5625,	// (0x000666f7) main_cset_listscroll_pane

0x564b,	// (0x0006671d) main_cset_slider_pane_ParamLimits

0x564b,	// (0x0006671d) main_cset_slider_pane

0x5679,	// (0x0006674b) main_cset_list_pane_ParamLimits

0x5679,	// (0x0006674b) main_cset_list_pane

0x5689,	// (0x0006675b) scroll_pane_cp028

0x5692,	// (0x00066764) aid_area_touch_slider

0x56ae,	// (0x00066780) cset_slider_pane

0x56d1,	// (0x000667a3) main_cset_slider_pane_g1

0x56e6,	// (0x000667b8) main_cset_slider_pane_g2

0x0011,

0xf820,	// (0x000708f2) main_cset_slider_pane_g

0x57ba,	// (0x0006688c) main_cset_slider_pane_t1

0x57e2,	// (0x000668b4) main_cset_slider_pane_t2

0x57fc,	// (0x000668ce) main_cset_slider_pane_t3

0x5816,	// (0x000668e8) main_cset_slider_pane_t4

0x5830,	// (0x00066902) main_cset_slider_pane_t5

0x584a,	// (0x0006691c) main_cset_slider_pane_t6

0x585f,	// (0x00066931) main_cset_slider_pane_t7

0x000e,

0xf845,	// (0x00070917) main_cset_slider_pane_t

0x59d5,	// (0x00066aa7) cset_list_set_pane_ParamLimits

0x59d5,	// (0x00066aa7) cset_list_set_pane

0x59e7,	// (0x00066ab9) aid_position_infowindow_above

0x59ef,	// (0x00066ac1) aid_position_infowindow_below

0x59f7,	// (0x00066ac9) cset_list_set_pane_g1_ParamLimits

0x59f7,	// (0x00066ac9) cset_list_set_pane_g1

0x5a03,	// (0x00066ad5) cset_list_set_pane_g3_ParamLimits

0x5a03,	// (0x00066ad5) cset_list_set_pane_g3

0x0001,

0xf864,	// (0x00070936) cset_list_set_pane_g_ParamLimits

0xf864,	// (0x00070936) cset_list_set_pane_g

0x5a12,	// (0x00066ae4) cset_list_set_pane_t1_ParamLimits

0x5a12,	// (0x00066ae4) cset_list_set_pane_t1

0xc00b,	// (0x0006d0dd) list_highlight_pane_cp021_ParamLimits

0xc00b,	// (0x0006d0dd) list_highlight_pane_cp021

0xd235,	// (0x0006e307) cset_slider_pane_g1

0xd247,	// (0x0006e319) cset_slider_pane_g2

0xd23e,	// (0x0006e310) cset_slider_pane_g3

0x0002,

0xf869,	// (0x0007093b) cset_slider_pane_g

0xa555,	// (0x0006b627) aid_area_touch_cam4_zoom

0xa55d,	// (0x0006b62f) cam4_zoom_cont_pane

0xa565,	// (0x0006b637) cam4_zoom_pane_g1

0xa56d,	// (0x0006b63f) cam4_zoom_pane_g2

0x5a27,	// (0x00066af9) cam4_zoom_pane_g3

0x0002,

0xf870,	// (0x00070942) cam4_zoom_pane_g

0xa575,	// (0x0006b647) cam4_zoom_cont_pane_g1

0xa57e,	// (0x0006b650) cam4_zoom_cont_pane_g2

0xa587,	// (0x0006b659) cam4_zoom_cont_pane_g3

0x0002,

0xf877,	// (0x00070949) cam4_zoom_cont_pane_g

0x4b63,	// (0x00065c35) call4_image_pane_ParamLimits

0x4b63,	// (0x00065c35) call4_image_pane

0x4bca,	// (0x00065c9c) call4_windows_conf_pane_ParamLimits

0x4c0d,	// (0x00065cdf) popup_call4_audio_in_window_ParamLimits

0x4c0d,	// (0x00065cdf) popup_call4_audio_in_window

0xb963,	// (0x0006ca35) bg_popup_call2_act_pane_cp02

0x4cd5,	// (0x00065da7) call4_list_conf_pane

0xc0b0,	// (0x0006d182) call4_image_pane_g1

0xc0b0,	// (0x0006d182) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00070181) call4_image_pane_g

0x5a2f,	// (0x00066b01) list_single_graphic_popup_conf4_pane_ParamLimits

0x5a2f,	// (0x00066b01) list_single_graphic_popup_conf4_pane

0xb963,	// (0x0006ca35) list_highlight_pane_cp022

0x5a42,	// (0x00066b14) list_single_graphic_popup_conf4_pane_g1

0xcb9c,	// (0x0006dc6e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf87e,	// (0x00070950) list_single_graphic_popup_conf4_pane_g

0x5a4a,	// (0x00066b1c) list_single_graphic_popup_conf4_pane_t1

0x17ce,	// (0x000628a0) popup_vtel_slider_window_ParamLimits

0x17ce,	// (0x000628a0) popup_vtel_slider_window

0x489c,	// (0x0006596e) dialer2_ne_pane_t2_ParamLimits

0x489c,	// (0x0006596e) dialer2_ne_pane_t2

0x0001,

0xf75f,	// (0x00070831) dialer2_ne_pane_t_ParamLimits

0xf75f,	// (0x00070831) dialer2_ne_pane_t

0xe69e,	// (0x0006f770) bg_popup_sub_pane_cp010_ParamLimits

0xe69e,	// (0x0006f770) bg_popup_sub_pane_cp010

0x5a60,	// (0x00066b32) popup_vtel_slider_window_g1_ParamLimits

0x5a60,	// (0x00066b32) popup_vtel_slider_window_g1

0x5a73,	// (0x00066b45) popup_vtel_slider_window_g2_ParamLimits

0x5a73,	// (0x00066b45) popup_vtel_slider_window_g2

0x0003,

0xf883,	// (0x00070955) popup_vtel_slider_window_g_ParamLimits

0xf883,	// (0x00070955) popup_vtel_slider_window_g

0x5ac9,	// (0x00066b9b) vtel_slider_pane_ParamLimits

0x5ac9,	// (0x00066b9b) vtel_slider_pane

0x5aeb,	// (0x00066bbd) vtel_slider_pane_g1_ParamLimits

0x5aeb,	// (0x00066bbd) vtel_slider_pane_g1

0x5aff,	// (0x00066bd1) vtel_slider_pane_g2_ParamLimits

0x5aff,	// (0x00066bd1) vtel_slider_pane_g2

0x5b17,	// (0x00066be9) vtel_slider_pane_g3_ParamLimits

0x5b17,	// (0x00066be9) vtel_slider_pane_g3

0x5aeb,	// (0x00066bbd) vtel_slider_pane_g4_ParamLimits

0x5aeb,	// (0x00066bbd) vtel_slider_pane_g4

0x5b2d,	// (0x00066bff) vtel_slider_pane_g5_ParamLimits

0x5b2d,	// (0x00066bff) vtel_slider_pane_g5

0x0004,

0xf88c,	// (0x0007095e) vtel_slider_pane_g_ParamLimits

0xf88c,	// (0x0007095e) vtel_slider_pane_g

0x9e46,	// (0x0006af18) main_gallery2_pane

0x4f50,	// (0x00066022) aid_size_row_itut2_dropdow_list_ParamLimits

0x4f50,	// (0x00066022) aid_size_row_itut2_dropdow_list

0x4fd8,	// (0x000660aa) grid_vitu2_function_top_pane_ParamLimits

0x4fd8,	// (0x000660aa) grid_vitu2_function_top_pane

0x503c,	// (0x0006610e) popup_vitu2_dropdown_list_window_ParamLimits

0x503c,	// (0x0006610e) popup_vitu2_dropdown_list_window

0x5067,	// (0x00066139) popup_vitu2_match_list_window

0x5b43,	// (0x00066c15) cell_vitu2_function_top_pane_ParamLimits

0x5b43,	// (0x00066c15) cell_vitu2_function_top_pane

0x5b5b,	// (0x00066c2d) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5b5b,	// (0x00066c2d) cell_vitu2_function_top_pane_cp01

0x5b77,	// (0x00066c49) cell_vitu2_function_top_wide_pane_ParamLimits

0x5b77,	// (0x00066c49) cell_vitu2_function_top_wide_pane

0x9e46,	// (0x0006af18) bg_button_pane_cp012

0x5b95,	// (0x00066c67) cell_vitu2_function_top_pane_g1

0xa590,	// (0x0006b662) bg_button_pane_cp013_ParamLimits

0xa590,	// (0x0006b662) bg_button_pane_cp013

0x5ba9,	// (0x00066c7b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x5ba9,	// (0x00066c7b) cell_vitu2_function_top_wide_pane_g1

0x9e46,	// (0x0006af18) bg_popup_sub_pane_cp20

0x5bc1,	// (0x00066c93) list_vitu2_match_list_pane

0x5233,	// (0x00066305) bg_popup_sub_pane_cp20_g1

0x523b,	// (0x0006630d) bg_popup_sub_pane_cp20_g2

0xc4d9,	// (0x0006d5ab) bg_popup_sub_pane_cp20_g3

0x5243,	// (0x00066315) bg_popup_sub_pane_cp20_g4

0xc4b9,	// (0x0006d58b) bg_popup_sub_pane_cp20_g5

0x5bd9,	// (0x00066cab) bg_popup_sub_pane_cp20_g6

0x5253,	// (0x00066325) bg_popup_sub_pane_cp20_g7

0x525b,	// (0x0006632d) bg_popup_sub_pane_cp20_g8

0x5263,	// (0x00066335) bg_popup_sub_pane_cp20_g9

0x0008,

0xf897,	// (0x00070969) bg_popup_sub_pane_cp20_g

0xa5ac,	// (0x0006b67e) list_vitu2_match_list_item_pane_ParamLimits

0xa5ac,	// (0x0006b67e) list_vitu2_match_list_item_pane

0xa5be,	// (0x0006b690) list_vitu2_match_list_item_pane_t1

0x9e54,	// (0x0006af26) bg_popup_sub_pane_cp21

0xc2c0,	// (0x0006d392) grid_vitu2_dropdown_list_pane

0x5be1,	// (0x00066cb3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x5be1,	// (0x00066cb3) cell_vitu2_dropdown_list_char_pane

0x5c01,	// (0x00066cd3) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5c01,	// (0x00066cd3) cell_vitu2_dropdown_list_ctrl_pane

0x5c29,	// (0x00066cfb) cell_vitu2_dropdown_list_char_pane_g1

0x5c32,	// (0x00066d04) cell_vitu2_dropdown_list_char_pane_g2

0x5c3b,	// (0x00066d0d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8aa,	// (0x0007097c) cell_vitu2_dropdown_list_char_pane_g

0x5c44,	// (0x00066d16) cell_vitu2_dropdown_list_char_pane_t1

0x5c52,	// (0x00066d24) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x5c52,	// (0x00066d24) cell_vitu2_dropdown_list_ctrl_pane_g1

0x5c5f,	// (0x00066d31) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x5c5f,	// (0x00066d31) cell_vitu2_dropdown_list_ctrl_pane_g2

0x5c6c,	// (0x00066d3e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x5c6c,	// (0x00066d3e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x5c79,	// (0x00066d4b) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x5c79,	// (0x00066d4b) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa468,	// (0x0006b53a) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa468,	// (0x0006b53a) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8b1,	// (0x00070983) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8b1,	// (0x00070983) cell_vitu2_dropdown_list_ctrl_pane_g

0x5c95,	// (0x00066d67) aid_size_cell_gallery2_ParamLimits

0x5c95,	// (0x00066d67) aid_size_cell_gallery2

0x5cb3,	// (0x00066d85) grid_gallery2_pane_ParamLimits

0x5cb3,	// (0x00066d85) grid_gallery2_pane

0x5ccd,	// (0x00066d9f) scroll_pane_cp029_ParamLimits

0x5ccd,	// (0x00066d9f) scroll_pane_cp029

0x5cde,	// (0x00066db0) cell_gallery2_pane_ParamLimits

0x5cde,	// (0x00066db0) cell_gallery2_pane

0x5d3d,	// (0x00066e0f) cell_gallery2_pane_g2

0x5d45,	// (0x00066e17) cell_gallery2_pane_g3

0x5d4d,	// (0x00066e1f) cell_gallery2_pane_g4

0x5d55,	// (0x00066e27) cell_gallery2_pane_g5

0xc2c0,	// (0x0006d392) grid_highlight_pane_cp10

0x5067,	// (0x00066139) popup_vitu2_match_list_window_ParamLimits

0x507c,	// (0x0006614e) popup_vitu2_query_window_ParamLimits

0x507c,	// (0x0006614e) popup_vitu2_query_window

0x9e54,	// (0x0006af26) bg_vitu2_candi_button_pane

0x5c29,	// (0x00066cfb) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x5c32,	// (0x00066d04) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x5c3b,	// (0x00066d0d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5d5d,	// (0x00066e2f) bg_button_pane_cp015

0x5d6e,	// (0x00066e40) bg_button_pane_cp016

0x5d7a,	// (0x00066e4c) bg_button_pane_cp017

0xd1c5,	// (0x0006e297) bg_popup_sub_pane_cp22

0x5db8,	// (0x00066e8a) popup_vitu2_query_window_g1

0x5dc4,	// (0x00066e96) popup_vitu2_query_window_g2

0x0002,

0xf8bc,	// (0x0007098e) popup_vitu2_query_window_g

0x5de6,	// (0x00066eb8) popup_vitu2_query_window_t1_ParamLimits

0x5de6,	// (0x00066eb8) popup_vitu2_query_window_t1

0x5e19,	// (0x00066eeb) popup_vitu2_query_window_t2_ParamLimits

0x5e19,	// (0x00066eeb) popup_vitu2_query_window_t2

0x5e2b,	// (0x00066efd) popup_vitu2_query_window_t3_ParamLimits

0x5e2b,	// (0x00066efd) popup_vitu2_query_window_t3

0x5e53,	// (0x00066f25) popup_vitu2_query_window_t4_ParamLimits

0x5e53,	// (0x00066f25) popup_vitu2_query_window_t4

0x5e67,	// (0x00066f39) popup_vitu2_query_window_t5_ParamLimits

0x5e67,	// (0x00066f39) popup_vitu2_query_window_t5

0x0006,

0xf8c3,	// (0x00070995) popup_vitu2_query_window_t_ParamLimits

0xf8c3,	// (0x00070995) popup_vitu2_query_window_t

0x5671,	// (0x00066743) main_cset_text_pane

0x5692,	// (0x00066764) aid_area_touch_slider_ParamLimits

0x56ae,	// (0x00066780) cset_slider_pane_ParamLimits

0x56d1,	// (0x000667a3) main_cset_slider_pane_g1_ParamLimits

0x56e6,	// (0x000667b8) main_cset_slider_pane_g2_ParamLimits

0x56fb,	// (0x000667cd) main_cset_slider_pane_g3_ParamLimits

0x56fb,	// (0x000667cd) main_cset_slider_pane_g3

0x5707,	// (0x000667d9) main_cset_slider_pane_g4_ParamLimits

0x5707,	// (0x000667d9) main_cset_slider_pane_g4

0x5716,	// (0x000667e8) main_cset_slider_pane_g5_ParamLimits

0x5716,	// (0x000667e8) main_cset_slider_pane_g5

0x5722,	// (0x000667f4) main_cset_slider_pane_g6_ParamLimits

0x5722,	// (0x000667f4) main_cset_slider_pane_g6

0xf820,	// (0x000708f2) main_cset_slider_pane_g_ParamLimits

0x57ba,	// (0x0006688c) main_cset_slider_pane_t1_ParamLimits

0x57e2,	// (0x000668b4) main_cset_slider_pane_t2_ParamLimits

0x57fc,	// (0x000668ce) main_cset_slider_pane_t3_ParamLimits

0x5816,	// (0x000668e8) main_cset_slider_pane_t4_ParamLimits

0x5830,	// (0x00066902) main_cset_slider_pane_t5_ParamLimits

0x584a,	// (0x0006691c) main_cset_slider_pane_t6_ParamLimits

0x585f,	// (0x00066931) main_cset_slider_pane_t7_ParamLimits

0x5889,	// (0x0006695b) main_cset_slider_pane_t8_ParamLimits

0x5889,	// (0x0006695b) main_cset_slider_pane_t8

0x58b1,	// (0x00066983) main_cset_slider_pane_t9_ParamLimits

0x58b1,	// (0x00066983) main_cset_slider_pane_t9

0x58d9,	// (0x000669ab) main_cset_slider_pane_t10_ParamLimits

0x58d9,	// (0x000669ab) main_cset_slider_pane_t10

0x5901,	// (0x000669d3) main_cset_slider_pane_t11_ParamLimits

0x5901,	// (0x000669d3) main_cset_slider_pane_t11

0x5929,	// (0x000669fb) main_cset_slider_pane_t12_ParamLimits

0x5929,	// (0x000669fb) main_cset_slider_pane_t12

0x5946,	// (0x00066a18) main_cset_slider_pane_t13_ParamLimits

0x5946,	// (0x00066a18) main_cset_slider_pane_t13

0xf845,	// (0x00070917) main_cset_slider_pane_t_ParamLimits

0xb963,	// (0x0006ca35) bg_popup_sub_pane_cp011

0x5ed1,	// (0x00066fa3) main_cset_text_pane_g1

0x5ed9,	// (0x00066fab) main_cset_text_pane_t1

0x5ee7,	// (0x00066fb9) main_cset_text_pane_t2

0x5ef5,	// (0x00066fc7) main_cset_text_pane_t3

0x5f03,	// (0x00066fd5) main_cset_text_pane_t4

0x5f11,	// (0x00066fe3) main_cset_text_pane_t5

0x5f1f,	// (0x00066ff1) main_cset_text_pane_t6

0x5f2d,	// (0x00066fff) main_cset_text_pane_t7

0x0006,

0xf8d2,	// (0x000709a4) main_cset_text_pane_t

0x9e54,	// (0x0006af26) main_cam4_burst_pane

0x9e54,	// (0x0006af26) main_cam5_pane

0x557e,	// (0x00066650) bg_button_pane_cp019

0x5587,	// (0x00066659) bg_button_pane_cp020

0x5736,	// (0x00066808) main_cset_slider_pane_g7_ParamLimits

0x5736,	// (0x00066808) main_cset_slider_pane_g7

0x5742,	// (0x00066814) main_cset_slider_pane_g8_ParamLimits

0x5742,	// (0x00066814) main_cset_slider_pane_g8

0x574e,	// (0x00066820) main_cset_slider_pane_g9_ParamLimits

0x574e,	// (0x00066820) main_cset_slider_pane_g9

0x575a,	// (0x0006682c) main_cset_slider_pane_g10_ParamLimits

0x575a,	// (0x0006682c) main_cset_slider_pane_g10

0x5766,	// (0x00066838) main_cset_slider_pane_g11_ParamLimits

0x5766,	// (0x00066838) main_cset_slider_pane_g11

0x5772,	// (0x00066844) main_cset_slider_pane_g12_ParamLimits

0x5772,	// (0x00066844) main_cset_slider_pane_g12

0x577e,	// (0x00066850) main_cset_slider_pane_g13_ParamLimits

0x577e,	// (0x00066850) main_cset_slider_pane_g13

0x578a,	// (0x0006685c) main_cset_slider_pane_g14_ParamLimits

0x578a,	// (0x0006685c) main_cset_slider_pane_g14

0x5796,	// (0x00066868) main_cset_slider_pane_g15_ParamLimits

0x5796,	// (0x00066868) main_cset_slider_pane_g15

0x5963,	// (0x00066a35) main_cset_slider_pane_t14_ParamLimits

0x5963,	// (0x00066a35) main_cset_slider_pane_t14

0x599c,	// (0x00066a6e) main_cset_slider_pane_t15_ParamLimits

0x599c,	// (0x00066a6e) main_cset_slider_pane_t15

0x5f3b,	// (0x0006700d) aid_cam4_burst_size_cell_ParamLimits

0x5f3b,	// (0x0006700d) aid_cam4_burst_size_cell

0x5f5b,	// (0x0006702d) grid_cam4_burst_pane_ParamLimits

0x5f5b,	// (0x0006702d) grid_cam4_burst_pane

0x5f93,	// (0x00067065) linegrid_cam4_burst_pane_ParamLimits

0x5f93,	// (0x00067065) linegrid_cam4_burst_pane

0xa5cc,	// (0x0006b69e) scroll_pane_cp30_ParamLimits

0xa5cc,	// (0x0006b69e) scroll_pane_cp30

0x5fb7,	// (0x00067089) cell_cam4_burst_pane_ParamLimits

0x5fb7,	// (0x00067089) cell_cam4_burst_pane

0x6004,	// (0x000670d6) linegrid_cam4_burst_pane_g1_ParamLimits

0x6004,	// (0x000670d6) linegrid_cam4_burst_pane_g1

0x6011,	// (0x000670e3) linegrid_cam4_burst_pane_g2_ParamLimits

0x6011,	// (0x000670e3) linegrid_cam4_burst_pane_g2

0x6022,	// (0x000670f4) linegrid_cam4_burst_pane_g3_ParamLimits

0x6022,	// (0x000670f4) linegrid_cam4_burst_pane_g3

0x0002,

0xf8e1,	// (0x000709b3) linegrid_cam4_burst_pane_g_ParamLimits

0xf8e1,	// (0x000709b3) linegrid_cam4_burst_pane_g

0x602f,	// (0x00067101) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x602f,	// (0x00067101) linegrid_cam4_burst_pane_g3_copy1

0x6049,	// (0x0006711b) linegrid_cam4_burst_pane_g4_ParamLimits

0x6049,	// (0x0006711b) linegrid_cam4_burst_pane_g4

0x6056,	// (0x00067128) linegrid_cam4_burst_pane_g5_ParamLimits

0x6056,	// (0x00067128) linegrid_cam4_burst_pane_g5

0x6067,	// (0x00067139) linegrid_cam4_burst_pane_g6_ParamLimits

0x6067,	// (0x00067139) linegrid_cam4_burst_pane_g6

0x607e,	// (0x00067150) linegrid_cam4_burst_pane_g7_ParamLimits

0x607e,	// (0x00067150) linegrid_cam4_burst_pane_g7

0x608b,	// (0x0006715d) cell_cam4_burst_pane_g1

0x60aa,	// (0x0006717c) main_cam5_pane_t1_ParamLimits

0x60aa,	// (0x0006717c) main_cam5_pane_t1

0x60bc,	// (0x0006718e) main_cam5_pane_t2_ParamLimits

0x60bc,	// (0x0006718e) main_cam5_pane_t2

0x60ce,	// (0x000671a0) main_cam5_pane_t3_ParamLimits

0x60ce,	// (0x000671a0) main_cam5_pane_t3

0x60e0,	// (0x000671b2) main_cam5_pane_t4_ParamLimits

0x60e0,	// (0x000671b2) main_cam5_pane_t4

0x60f8,	// (0x000671ca) main_cam5_pane_t5_ParamLimits

0x60f8,	// (0x000671ca) main_cam5_pane_t5

0x610c,	// (0x000671de) main_cam5_pane_t6_ParamLimits

0x610c,	// (0x000671de) main_cam5_pane_t6

0x6120,	// (0x000671f2) main_cam5_pane_t7_ParamLimits

0x6120,	// (0x000671f2) main_cam5_pane_t7

0x6132,	// (0x00067204) main_cam5_pane_t8_ParamLimits

0x6132,	// (0x00067204) main_cam5_pane_t8

0x614e,	// (0x00067220) main_cam5_pane_t9_ParamLimits

0x614e,	// (0x00067220) main_cam5_pane_t9

0x6160,	// (0x00067232) main_cam5_pane_t10_ParamLimits

0x6160,	// (0x00067232) main_cam5_pane_t10

0x6172,	// (0x00067244) main_cam5_pane_t11_ParamLimits

0x6172,	// (0x00067244) main_cam5_pane_t11

0x6184,	// (0x00067256) main_cam5_pane_t12_ParamLimits

0x6184,	// (0x00067256) main_cam5_pane_t12

0x6199,	// (0x0006726b) main_cam5_pane_t13_ParamLimits

0x6199,	// (0x0006726b) main_cam5_pane_t13

0x000c,

0xf8ed,	// (0x000709bf) main_cam5_pane_t_ParamLimits

0xf8ed,	// (0x000709bf) main_cam5_pane_t

0x0bc6,	// (0x00061c98) popup_scut_keymap_window_ParamLimits

0x0bc6,	// (0x00061c98) popup_scut_keymap_window

0x61b6,	// (0x00067288) aid_size_cell_brow_shortcut

0xc2c0,	// (0x0006d392) bg_popup_window_pane_cp010

0x61c2,	// (0x00067294) grid_scut_pane

0x61ce,	// (0x000672a0) cell_scut_pane_ParamLimits

0x61ce,	// (0x000672a0) cell_scut_pane

0x61e5,	// (0x000672b7) cell_scut_pane_g1

0x61ee,	// (0x000672c0) cell_scut_pane_t1

0x61fd,	// (0x000672cf) cell_scut_pane_t2

0x620c,	// (0x000672de) cell_scut_pane_t3

0x0002,

0xf908,	// (0x000709da) cell_scut_pane_t

0x3cb3,	// (0x00064d85) main_mup3_pane_g8_ParamLimits

0x3cb3,	// (0x00064d85) main_mup3_pane_g8

0x4f6a,	// (0x0006603c) area_vitu2_query_pane_ParamLimits

0x4f6a,	// (0x0006603c) area_vitu2_query_pane

0x5d86,	// (0x00066e58) input_focus_pane_cp08

0x621a,	// (0x000672ec) area_vitu2_query_pane_g1

0x6226,	// (0x000672f8) area_vitu2_query_pane_g2

0x0001,

0xf90f,	// (0x000709e1) area_vitu2_query_pane_g

0x6235,	// (0x00067307) area_vitu2_query_pane_t1_ParamLimits

0x6235,	// (0x00067307) area_vitu2_query_pane_t1

0x6249,	// (0x0006731b) area_vitu2_query_pane_t2_ParamLimits

0x6249,	// (0x0006731b) area_vitu2_query_pane_t2

0x625d,	// (0x0006732f) area_vitu2_query_pane_t3_ParamLimits

0x625d,	// (0x0006732f) area_vitu2_query_pane_t3

0x6285,	// (0x00067357) area_vitu2_query_pane_t4_ParamLimits

0x6285,	// (0x00067357) area_vitu2_query_pane_t4

0x62ad,	// (0x0006737f) area_vitu2_query_pane_t5_ParamLimits

0x62ad,	// (0x0006737f) area_vitu2_query_pane_t5

0x62d5,	// (0x000673a7) area_vitu2_query_pane_t6_ParamLimits

0x62d5,	// (0x000673a7) area_vitu2_query_pane_t6

0x0006,

0xf914,	// (0x000709e6) area_vitu2_query_pane_t_ParamLimits

0xf914,	// (0x000709e6) area_vitu2_query_pane_t

0x6321,	// (0x000673f3) bg_button_pane_cp018

0x632d,	// (0x000673ff) bg_button_pane_cp021

0x6339,	// (0x0006740b) bg_button_pane_cp022

0x6358,	// (0x0006742a) input_focus_pane_cp09

0xccab,	// (0x0006dd7d) aid_size_touch_mv_arrow_left

0xccd6,	// (0x0006dda8) aid_size_touch_mv_arrow_right

0xa53d,	// (0x0006b60f) main_cset_slider_pane_g16_ParamLimits

0xa53d,	// (0x0006b60f) main_cset_slider_pane_g16

0xa549,	// (0x0006b61b) main_cset_slider_pane_g17_ParamLimits

0xa549,	// (0x0006b61b) main_cset_slider_pane_g17

0x608b,	// (0x0006715d) cell_cam4_burst_pane_g1_ParamLimits

0xb963,	// (0x0006ca35) compa_mode_pane

0x5a83,	// (0x00066b55) popup_vtel_slider_window_g3_ParamLimits

0x5a83,	// (0x00066b55) popup_vtel_slider_window_g3

0x5a9a,	// (0x00066b6c) popup_vtel_slider_window_g4_ParamLimits

0x5a9a,	// (0x00066b6c) popup_vtel_slider_window_g4

0x5ab1,	// (0x00066b83) popup_vtel_slider_window_t1_ParamLimits

0x5ab1,	// (0x00066b83) popup_vtel_slider_window_t1

0x9e54,	// (0x0006af26) main_cl_pane

0xa001,	// (0x0006b0d3) popup_imed_adjust2_window_ParamLimits

0xd1c5,	// (0x0006e297) bg_tb_trans_pane_cp05_ParamLimits

0xee1a,	// (0x0006feec) popup_imed_adjust2_window_g1_ParamLimits

0xee29,	// (0x0006fefb) popup_imed_adjust2_window_g2_ParamLimits

0xee29,	// (0x0006fefb) popup_imed_adjust2_window_g2

0xee35,	// (0x0006ff07) popup_imed_adjust2_window_g3_ParamLimits

0xee35,	// (0x0006ff07) popup_imed_adjust2_window_g3

0x0002,

0xf6bb,	// (0x0007078d) popup_imed_adjust2_window_g_ParamLimits

0xf6bb,	// (0x0007078d) popup_imed_adjust2_window_g

0xee41,	// (0x0006ff13) popup_imed_adjust2_window_t1_ParamLimits

0xee59,	// (0x0006ff2b) slider_imed_adjust_pane_ParamLimits

0xee6d,	// (0x0006ff3f) slider_imed_adjust_pane_g1_ParamLimits

0xee7d,	// (0x0006ff4f) slider_imed_adjust_pane_g2_ParamLimits

0xee8d,	// (0x0006ff5f) slider_imed_adjust_pane_g3_ParamLimits

0xee9e,	// (0x0006ff70) slider_imed_adjust_pane_g4_ParamLimits

0xf6c2,	// (0x00070794) slider_imed_adjust_pane_g_ParamLimits

0x4cf1,	// (0x00065dc3) aid_touch_area_cam4_ParamLimits

0x4cf1,	// (0x00065dc3) aid_touch_area_cam4

0xa43a,	// (0x0006b50c) battery_pane_cp01

0x4dc0,	// (0x00065e92) main_camera4_pane_g6_ParamLimits

0x4dc0,	// (0x00065e92) main_camera4_pane_g6

0x4dea,	// (0x00065ebc) main_camera4_pane_t2_ParamLimits

0x4dea,	// (0x00065ebc) main_camera4_pane_t2

0x0001,

0xf793,	// (0x00070865) main_camera4_pane_t_ParamLimits

0xf793,	// (0x00070865) main_camera4_pane_t

0x4e1f,	// (0x00065ef1) aid_touch_area_vid4_ParamLimits

0x4e1f,	// (0x00065ef1) aid_touch_area_vid4

0x4e73,	// (0x00065f45) main_video4_pane_g5_ParamLimits

0x4e73,	// (0x00065f45) main_video4_pane_g5

0x4e98,	// (0x00065f6a) vid4_progress_pane_ParamLimits

0x4e98,	// (0x00065f6a) vid4_progress_pane

0x57ae,	// (0x00066880) main_cset_slider_pane_g18_ParamLimits

0x57ae,	// (0x00066880) main_cset_slider_pane_g18

0x609e,	// (0x00067170) cell_cam4_burst_pane_g2_ParamLimits

0x609e,	// (0x00067170) cell_cam4_burst_pane_g2

0x0001,

0xf8e8,	// (0x000709ba) cell_cam4_burst_pane_g_ParamLimits

0xf8e8,	// (0x000709ba) cell_cam4_burst_pane_g

0xc10e,	// (0x0006d1e0) bg_cl_pane_ParamLimits

0xc10e,	// (0x0006d1e0) bg_cl_pane

0x6368,	// (0x0006743a) cl_header_pane_ParamLimits

0x6368,	// (0x0006743a) cl_header_pane

0x637c,	// (0x0006744e) cl_listscroll_pane_ParamLimits

0x637c,	// (0x0006744e) cl_listscroll_pane

0x638c,	// (0x0006745e) bg_cl_pane_g1

0x6394,	// (0x00067466) bg_cl_pane_g2

0x639c,	// (0x0006746e) bg_cl_pane_g3

0x63a4,	// (0x00067476) bg_cl_pane_g4

0x63ac,	// (0x0006747e) bg_cl_pane_g5

0x63b4,	// (0x00067486) bg_cl_pane_g6

0x63bc,	// (0x0006748e) bg_cl_pane_g7

0x63c4,	// (0x00067496) bg_cl_pane_g8

0x63cc,	// (0x0006749e) bg_cl_pane_g9

0x0008,

0xf923,	// (0x000709f5) bg_cl_pane_g

0x63d4,	// (0x000674a6) aid_height_cl_leading_ParamLimits

0x63d4,	// (0x000674a6) aid_height_cl_leading

0x63e0,	// (0x000674b2) aid_height_cl_text_ParamLimits

0x63e0,	// (0x000674b2) aid_height_cl_text

0xc00b,	// (0x0006d0dd) bg_cl_header_pane_ParamLimits

0xc00b,	// (0x0006d0dd) bg_cl_header_pane

0x63ff,	// (0x000674d1) cl_header_pane_g1_ParamLimits

0x63ff,	// (0x000674d1) cl_header_pane_g1

0x6415,	// (0x000674e7) cl_header_pane_t1_ParamLimits

0x6415,	// (0x000674e7) cl_header_pane_t1

0x642e,	// (0x00067500) cl_list_pane

0x5689,	// (0x0006675b) hc_scroll_pane_cp01

0xc4b9,	// (0x0006d58b) bg_cl_header_pane_g1

0x5233,	// (0x00066305) bg_cl_header_pane_g2

0xc4d9,	// (0x0006d5ab) bg_cl_header_pane_g3

0x5243,	// (0x00066315) bg_cl_header_pane_g4

0x523b,	// (0x0006630d) bg_cl_header_pane_g5

0x5bd9,	// (0x00066cab) bg_cl_header_pane_g6

0x525b,	// (0x0006632d) bg_cl_header_pane_g7

0x5263,	// (0x00066335) bg_cl_header_pane_g8

0x5253,	// (0x00066325) bg_cl_header_pane_g9

0x0008,

0xf936,	// (0x00070a08) bg_cl_header_pane_g

0x6437,	// (0x00067509) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6437,	// (0x00067509) hc_cl_list_double_graphic_heading_pane

0x6448,	// (0x0006751a) hc_cl_list_single_graphic_pane_ParamLimits

0x6448,	// (0x0006751a) hc_cl_list_single_graphic_pane

0x6461,	// (0x00067533) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6461,	// (0x00067533) hc_cl_list_single_graphic_pane_g1

0x646d,	// (0x0006753f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x646d,	// (0x0006753f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf949,	// (0x00070a1b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf949,	// (0x00070a1b) hc_cl_list_single_graphic_pane_g

0x6481,	// (0x00067553) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6481,	// (0x00067553) hc_cl_list_single_graphic_pane_t1

0x6461,	// (0x00067533) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6461,	// (0x00067533) hc_cl_list_double_graphic_heading_pane_g1

0x6496,	// (0x00067568) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6496,	// (0x00067568) hc_cl_list_double_graphic_heading_pane_g2

0x64aa,	// (0x0006757c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x64aa,	// (0x0006757c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf94e,	// (0x00070a20) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf94e,	// (0x00070a20) hc_cl_list_double_graphic_heading_pane_g

0x64be,	// (0x00067590) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x64be,	// (0x00067590) hc_cl_list_double_graphic_heading_pane_t1

0x64d3,	// (0x000675a5) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x64d3,	// (0x000675a5) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf955,	// (0x00070a27) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf955,	// (0x00070a27) hc_cl_list_double_graphic_heading_pane_t

0xa5e0,	// (0x0006b6b2) vid4_progress_pane_g1

0xa5f0,	// (0x0006b6c2) vid4_progress_pane_g2

0x64e8,	// (0x000675ba) vid4_progress_pane_g3

0xa600,	// (0x0006b6d2) vid4_progress_pane_g4

0x0004,

0xf95a,	// (0x00070a2c) vid4_progress_pane_g

0x64fa,	// (0x000675cc) vid4_progress_pane_t1

0xa618,	// (0x0006b6ea) vid4_progress_pane_t2

0x0002,

0xf965,	// (0x00070a37) vid4_progress_pane_t

0x6510,	// (0x000675e2) wait_bar_pane_cp07

0xe6ac,	// (0x0006f77e) blid_firmament_pane_ParamLimits

0xe6ef,	// (0x0006f7c1) popup_blid_sat_info2_window_g1

0xe713,	// (0x0006f7e5) popup_blid_sat_info2_window_t3

0xe721,	// (0x0006f7f3) popup_blid_sat_info2_window_t4

0xe72f,	// (0x0006f801) popup_blid_sat_info2_window_t5

0xe73d,	// (0x0006f80f) popup_blid_sat_info2_window_t6

0xe74d,	// (0x0006f81f) popup_blid_sat_info2_window_t7

0xe75b,	// (0x0006f82d) popup_blid_sat_info2_window_t8

0xe769,	// (0x0006f83b) popup_blid_sat_info2_window_t9

0xe777,	// (0x0006f849) popup_blid_sat_info2_window_t10

0xe85a,	// (0x0006f92c) aid_firma_cardinal_ParamLimits

0xe86e,	// (0x0006f940) blid_firmament_pane_t1_ParamLimits

0xe885,	// (0x0006f957) blid_firmament_pane_t2_ParamLimits

0xe89c,	// (0x0006f96e) blid_firmament_pane_t3_ParamLimits

0xe8b3,	// (0x0006f985) blid_firmament_pane_t4_ParamLimits

0x0053,	// (0x00061125) blid_firmament_pane_t_ParamLimits

0xe8ca,	// (0x0006f99c) blid_sat_info_pane_ParamLimits

0x9e46,	// (0x0006af18) main_cam_set_pane_ParamLimits

0x4490,	// (0x00065562) aid_size_cell_colour_35_ParamLimits

0x44b0,	// (0x00065582) aid_size_cell_colour_112_ParamLimits

0x44d0,	// (0x000655a2) aid_size_cell_effect_ParamLimits

0xd1c5,	// (0x0006e297) bg_tb_trans_pane_cp02_ParamLimits

0xc72a,	// (0x0006d7fc) heading_imed_pane_ParamLimits

0x44f0,	// (0x000655c2) listscroll_imed_pane_ParamLimits

0xdb5f,	// (0x0006ec31) popup_call2_audio_first_window_g5_ParamLimits

0xdb5f,	// (0x0006ec31) popup_call2_audio_first_window_g5

0x48e1,	// (0x000659b3) aid_size_touch_image3_arrow_left_ParamLimits

0x48e1,	// (0x000659b3) aid_size_touch_image3_arrow_left

0x490d,	// (0x000659df) aid_size_touch_image3_arrow_right_ParamLimits

0x490d,	// (0x000659df) aid_size_touch_image3_arrow_right

0xa62d,	// (0x0006b6ff) vid4_progress_pane_t3

0x4693,	// (0x00065765) main_hwr_training_symbol_option_pane_ParamLimits

0x4693,	// (0x00065765) main_hwr_training_symbol_option_pane

0xefa8,	// (0x0007007a) popup_hwr_training_preview_window_ParamLimits

0xefa8,	// (0x0007007a) popup_hwr_training_preview_window

0x46b3,	// (0x00065785) hwr_training_navi_pane_g5_ParamLimits

0x46b3,	// (0x00065785) hwr_training_navi_pane_g5

0x517c,	// (0x0006624e) popup_char_count_window

0x9e46,	// (0x0006af18) bg_popup_sub_pane_cp20_ParamLimits

0x5bc1,	// (0x00066c93) list_vitu2_match_list_pane_ParamLimits

0x5bcd,	// (0x00066c9f) vitu2_page_scroll_pane_ParamLimits

0x5bcd,	// (0x00066c9f) vitu2_page_scroll_pane

0x6557,	// (0x00067629) list_single_hwr_training_symbol_option_pane_ParamLimits

0x6557,	// (0x00067629) list_single_hwr_training_symbol_option_pane

0x656a,	// (0x0006763c) list_single_hwr_training_symbol_option_pane_g1

0x6572,	// (0x00067644) list_single_hwr_training_symbol_option_pane_t1

0x6580,	// (0x00067652) bg_button_pane_cp023

0x6589,	// (0x0006765b) bg_button_pane_cp024

0x65bc,	// (0x0006768e) vitu2_page_scroll_pane_g1

0x65c4,	// (0x00067696) vitu2_page_scroll_pane_g2

0x0001,

0xf96c,	// (0x00070a3e) vitu2_page_scroll_pane_g

0x65cc,	// (0x0006769e) vitu2_page_scroll_pane_t1

0xc4f1,	// (0x0006d5c3) popup_char_count_window_g1

0x65db,	// (0x000676ad) popup_char_count_window_g2

0x0e49,	// (0x00061f1b) popup_char_count_window_g3

0x0002,

0xf971,	// (0x00070a43) popup_char_count_window_g

0x65e4,	// (0x000676b6) popup_char_count_window_t1

0x9e54,	// (0x0006af26) main_vded2_pane

0xee06,	// (0x0006fed8) aid_size_cell_imed_line

0xee10,	// (0x0006fee2) grid_imed_line_width_pane

0xa50a,	// (0x0006b5dc) vid4_indicators_pane_g4

0x65f2,	// (0x000676c4) cell_imed_line_width_pane_ParamLimits

0x65f2,	// (0x000676c4) cell_imed_line_width_pane

0x6606,	// (0x000676d8) cell_imed_line_width_pane_g1

0x660f,	// (0x000676e1) cell_imed_line_width_pane_g2

0x0001,

0xf978,	// (0x00070a4a) cell_imed_line_width_pane_g

0x6617,	// (0x000676e9) main_vded2_pane_g1_ParamLimits

0x6617,	// (0x000676e9) main_vded2_pane_g1

0x662d,	// (0x000676ff) main_vded2_pane_g2_ParamLimits

0x662d,	// (0x000676ff) main_vded2_pane_g2

0x0001,

0xf97d,	// (0x00070a4f) main_vded2_pane_g_ParamLimits

0xf97d,	// (0x00070a4f) main_vded2_pane_g

0x663f,	// (0x00067711) vded2_slider_pane_ParamLimits

0x663f,	// (0x00067711) vded2_slider_pane

0x664f,	// (0x00067721) aid_size_touch_vded2_end

0x6659,	// (0x0006772b) aid_size_touch_vded2_playhead

0x6663,	// (0x00067735) aid_size_touch_vded2_start

0x666b,	// (0x0006773d) vded2_slider_bg_pane

0x6674,	// (0x00067746) vded2_slider_pane_g1

0x667d,	// (0x0006774f) vded2_slider_pane_g2

0x6685,	// (0x00067757) vded2_slider_pane_g3

0x0002,

0xf982,	// (0x00070a54) vded2_slider_pane_g

0x6690,	// (0x00067762) vded2_slider_bg_pane_g1

0x6699,	// (0x0006776b) vded2_slider_bg_pane_g2

0x66a2,	// (0x00067774) vded2_slider_bg_pane_g3

0x0002,

0xf989,	// (0x00070a5b) vded2_slider_bg_pane_g

0x2ade,	// (0x00063bb0) aid_postcard_touch_down_pane_ParamLimits

0x2ade,	// (0x00063bb0) aid_postcard_touch_down_pane

0x2af4,	// (0x00063bc6) aid_postcard_touch_up_pane_ParamLimits

0x2af4,	// (0x00063bc6) aid_postcard_touch_up_pane

0x9e54,	// (0x0006af26) main_blid2_pane

0x9fe7,	// (0x0006b0b9) popup_blid2_search_window

0xb963,	// (0x0006ca35) blid2_gps_pane

0xb963,	// (0x0006ca35) blid2_navig_pane

0xb963,	// (0x0006ca35) blid2_search_pane

0xb963,	// (0x0006ca35) blid2_tripm_pane

0x66ab,	// (0x0006777d) blid2_search_pane_g1_ParamLimits

0x66ab,	// (0x0006777d) blid2_search_pane_g1

0x66c3,	// (0x00067795) blid2_search_pane_t1_ParamLimits

0x66c3,	// (0x00067795) blid2_search_pane_t1

0x66d5,	// (0x000677a7) aid_size_cell_blid2_gps_ParamLimits

0x66d5,	// (0x000677a7) aid_size_cell_blid2_gps

0x66ed,	// (0x000677bf) blid2_gps_pane_g1_ParamLimits

0x66ed,	// (0x000677bf) blid2_gps_pane_g1

0x6701,	// (0x000677d3) grid_blid2_satellite_pane_ParamLimits

0x6701,	// (0x000677d3) grid_blid2_satellite_pane

0x671b,	// (0x000677ed) blid2_navig_pane_g1_ParamLimits

0x671b,	// (0x000677ed) blid2_navig_pane_g1

0x6727,	// (0x000677f9) blid2_navig_pane_t1_ParamLimits

0x6727,	// (0x000677f9) blid2_navig_pane_t1

0x6742,	// (0x00067814) blid2_navig_pane_t2_ParamLimits

0x6742,	// (0x00067814) blid2_navig_pane_t2

0x0001,

0xf990,	// (0x00070a62) blid2_navig_pane_t_ParamLimits

0xf990,	// (0x00070a62) blid2_navig_pane_t

0x675d,	// (0x0006782f) blid2_navig_ring_pane_ParamLimits

0x675d,	// (0x0006782f) blid2_navig_ring_pane

0x6776,	// (0x00067848) blid2_speed_pane_ParamLimits

0x6776,	// (0x00067848) blid2_speed_pane

0x6782,	// (0x00067854) blid2_tripm_pane_g1_ParamLimits

0x6782,	// (0x00067854) blid2_tripm_pane_g1

0x679d,	// (0x0006786f) blid2_tripm_pane_g2_ParamLimits

0x679d,	// (0x0006786f) blid2_tripm_pane_g2

0x67b1,	// (0x00067883) blid2_tripm_pane_g3_ParamLimits

0x67b1,	// (0x00067883) blid2_tripm_pane_g3

0x67c5,	// (0x00067897) blid2_tripm_pane_g4_ParamLimits

0x67c5,	// (0x00067897) blid2_tripm_pane_g4

0x67d9,	// (0x000678ab) blid2_tripm_pane_g5_ParamLimits

0x67d9,	// (0x000678ab) blid2_tripm_pane_g5

0x0005,

0xf995,	// (0x00070a67) blid2_tripm_pane_g_ParamLimits

0xf995,	// (0x00070a67) blid2_tripm_pane_g

0x67ff,	// (0x000678d1) blid2_tripm_pane_t1_ParamLimits

0x67ff,	// (0x000678d1) blid2_tripm_pane_t1

0x681a,	// (0x000678ec) blid2_tripm_pane_t2_ParamLimits

0x681a,	// (0x000678ec) blid2_tripm_pane_t2

0x6833,	// (0x00067905) blid2_tripm_pane_t3_ParamLimits

0x6833,	// (0x00067905) blid2_tripm_pane_t3

0x0003,

0xf9a2,	// (0x00070a74) blid2_tripm_pane_t_ParamLimits

0xf9a2,	// (0x00070a74) blid2_tripm_pane_t

0x687a,	// (0x0006794c) cell_blid2_satellite_pane_ParamLimits

0x687a,	// (0x0006794c) cell_blid2_satellite_pane

0x6898,	// (0x0006796a) cell_blid2_satellite_pane_g1

0x68a1,	// (0x00067973) cell_blid2_satellite_pane_t1

0xc0b0,	// (0x0006d182) blid2_speed_pane_g1

0x68af,	// (0x00067981) blid2_speed_pane_t1

0x68bd,	// (0x0006798f) blid2_speed_pane_t2

0x0001,

0xf9ab,	// (0x00070a7d) blid2_speed_pane_t

0xc0b0,	// (0x0006d182) blid2_navig_ring_pane_g1

0x68cb,	// (0x0006799d) blid2_navig_ring_pane_g2

0x68d3,	// (0x000679a5) blid2_navig_ring_pane_g3

0x68db,	// (0x000679ad) blid2_navig_ring_pane_g4

0x68e3,	// (0x000679b5) blid2_navig_ring_pane_g5

0x0004,

0xf9b0,	// (0x00070a82) blid2_navig_ring_pane_g

0xb963,	// (0x0006ca35) bg_popup_window_pane_cp011

0x68eb,	// (0x000679bd) popup_blid2_search_window_g1

0x68f3,	// (0x000679c5) popup_blid2_search_window_t1

0x6901,	// (0x000679d3) popup_blid2_search_window_t2

0x0001,

0xf9bb,	// (0x00070a8d) popup_blid2_search_window_t

0xc3c8,	// (0x0006d49a) main_browser_pane_g1

0xc10e,	// (0x0006d1e0) main_browser_pane_ParamLimits

0x9e46,	// (0x0006af18) bg_button_pane_cp011_ParamLimits

0x5216,	// (0x000662e8) cell_vitu2_function_pane_g1_ParamLimits

0xd1c5,	// (0x0006e297) bg_popup_sub_pane_cp22_ParamLimits

0x5d86,	// (0x00066e58) input_focus_pane_cp08_ParamLimits

0x5da1,	// (0x00066e73) popup_vitu2_query_button_pane_ParamLimits

0x5da1,	// (0x00066e73) popup_vitu2_query_button_pane

0x5db0,	// (0x00066e82) popup_vitu2_query_input_button_pane

0x5db8,	// (0x00066e8a) popup_vitu2_query_window_g1_ParamLimits

0x5dc4,	// (0x00066e96) popup_vitu2_query_window_g2_ParamLimits

0xf8bc,	// (0x0007098e) popup_vitu2_query_window_g_ParamLimits

0xb963,	// (0x0006ca35) bg_button_pane_cp026

0x690f,	// (0x000679e1) popup_vitu2_query_input_button_pane_g1

0xb963,	// (0x0006ca35) bg_button_pane_cp025

0x6917,	// (0x000679e9) popup_vitu2_query_button_pane_t1

0x3981,	// (0x00064a53) main_mp3_pane_t6

0x398f,	// (0x00064a61) popup_slider_window_cp01

0xa476,	// (0x0006b548) cam4_battery_pane

0xa4c9,	// (0x0006b59b) cam4_battery_pane_cp02

0xa5d8,	// (0x0006b6aa) cam4_battery_pane_cp01

0xa5d8,	// (0x0006b6aa) cam4_battery_pane_cp03

0x38f4,	// (0x000649c6) cam4_battery_pane_g1

0xc0b0,	// (0x0006d182) cam4_battery_pane_g2

0x0001,

0xf9c0,	// (0x00070a92) cam4_battery_pane_g

0xe785,	// (0x0006f857) popup_blid_sat_info2_window_t11

0xccab,	// (0x0006dd7d) aid_size_touch_mv_arrow_left_ParamLimits

0xccd6,	// (0x0006dda8) aid_size_touch_mv_arrow_right_ParamLimits

0xcd34,	// (0x0006de06) navi_pane_g1_ParamLimits

0xcd40,	// (0x0006de12) navi_pane_g2_ParamLimits

0xcd6e,	// (0x0006de40) navi_pane_g3_ParamLimits

0xf32f,	// (0x00070401) navi_pane_g_ParamLimits

0x2798,	// (0x0006386a) navi_pane_mv_t1_ParamLimits

0x44fc,	// (0x000655ce) grid_imed_effect_pane_ParamLimits

0x16cb,	// (0x0006279d) aid_placing_vt_slider_lsc

0xc317,	// (0x0006d3e9) aid_placing_vt_slider_prt

0xc00b,	// (0x0006d0dd) bg_tb_trans_pane_cp01_ParamLimits

0xea45,	// (0x0006fb17) popup_image_details_window_g1_ParamLimits

0xea58,	// (0x0006fb2a) popup_image_details_window_g2_ParamLimits

0xea6d,	// (0x0006fb3f) popup_image_details_window_g3_ParamLimits

0xea6d,	// (0x0006fb3f) popup_image_details_window_g3

0x0093,	// (0x00061165) popup_image_details_window_g_ParamLimits

0xea81,	// (0x0006fb53) popup_image_details_window_t1_ParamLimits

0xea93,	// (0x0006fb65) popup_image_details_window_t2_ParamLimits

0xeaac,	// (0x0006fb7e) popup_image_details_window_t3_ParamLimits

0xeac0,	// (0x0006fb92) popup_image_details_window_t4_ParamLimits

0xeadb,	// (0x0006fbad) popup_image_details_window_t5_ParamLimits

0x009a,	// (0x0006116c) popup_image_details_window_t_ParamLimits

0x63ec,	// (0x000674be) cl_header_name_pane_ParamLimits

0x63ec,	// (0x000674be) cl_header_name_pane

0x6925,	// (0x000679f7) cl_header_name_pane_t1_ParamLimits

0x6925,	// (0x000679f7) cl_header_name_pane_t1

0x6946,	// (0x00067a18) cl_header_name_pane_t2_ParamLimits

0x6946,	// (0x00067a18) cl_header_name_pane_t2

0x6988,	// (0x00067a5a) cl_header_name_pane_t3_ParamLimits

0x6988,	// (0x00067a5a) cl_header_name_pane_t3

0x0002,

0xf9c5,	// (0x00070a97) cl_header_name_pane_t_ParamLimits

0xf9c5,	// (0x00070a97) cl_header_name_pane_t

0xd085,	// (0x0006e157) navi_pane_mv_g2_ParamLimits

0x5115,	// (0x000661e7) field_vitu2_entry_pane_g1_ParamLimits

0x5121,	// (0x000661f3) field_vitu2_entry_pane_g2_ParamLimits

0xd1a3,	// (0x0006e275) field_vitu2_entry_pane_g3_ParamLimits

0xd1a3,	// (0x0006e275) field_vitu2_entry_pane_g3

0xf7c5,	// (0x00070897) field_vitu2_entry_pane_g_ParamLimits

0x5192,	// (0x00066264) cell_vitu2_itu_pane_g1_ParamLimits

0x51aa,	// (0x0006627c) cell_vitu2_itu_pane_g2_ParamLimits

0x51aa,	// (0x0006627c) cell_vitu2_itu_pane_g2

0x0001,

0xf7d1,	// (0x000708a3) cell_vitu2_itu_pane_g_ParamLimits

0xf7d1,	// (0x000708a3) cell_vitu2_itu_pane_g

0x9e46,	// (0x0006af18) bg_vkb2_func_pane_cp05_ParamLimits

0x9e46,	// (0x0006af18) bg_vkb2_func_pane_cp05

0x9e46,	// (0x0006af18) bg_vkb2_func_pane_cp03

0x9e46,	// (0x0006af18) bg_vkb2_func_pane_cp04

0x9e46,	// (0x0006af18) bg_vkb2_func_pane_cp10_ParamLimits

0x9e46,	// (0x0006af18) bg_vkb2_func_pane_cp10

0x6348,	// (0x0006741a) bg_vkb2_func_pane_cp08

0x6321,	// (0x000673f3) bg_vkb2_func_pane_cp06

0x632d,	// (0x000673ff) bg_vkb2_func_pane_cp07

0x6592,	// (0x00067664) bg_vkb2_func_pane_cp11_ParamLimits

0x6592,	// (0x00067664) bg_vkb2_func_pane_cp11

0x65a7,	// (0x00067679) bg_vkb2_func_pane_cp12_ParamLimits

0x65a7,	// (0x00067679) bg_vkb2_func_pane_cp12

0xb963,	// (0x0006ca35) bg_vkb2_func_pane_cp09

0x5233,	// (0x00066305) bg_vkb2_func_pane_g1

0xc4d9,	// (0x0006d5ab) bg_vkb2_func_pane_g2

0x523b,	// (0x0006630d) bg_vkb2_func_pane_g3

0x5243,	// (0x00066315) bg_vkb2_func_pane_g4

0x5bd9,	// (0x00066cab) bg_vkb2_func_pane_g5

0x525b,	// (0x0006632d) bg_vkb2_func_pane_g6

0x5263,	// (0x00066335) bg_vkb2_func_pane_g7

0x5253,	// (0x00066325) bg_vkb2_func_pane_g8

0xc4b9,	// (0x0006d58b) bg_vkb2_func_pane_g9

0x0008,

0xf9cc,	// (0x00070a9e) bg_vkb2_func_pane_g

0x67ed,	// (0x000678bf) blid2_tripm_pane_g6_ParamLimits

0x67ed,	// (0x000678bf) blid2_tripm_pane_g6

0x47fe,	// (0x000658d0) mp4_progress_pane_g1

0x6866,	// (0x00067938) blid2_tripm_values_pane_ParamLimits

0x6866,	// (0x00067938) blid2_tripm_values_pane

0x69b9,	// (0x00067a8b) blid2_tripm_values_pane_t1

0x69c7,	// (0x00067a99) blid2_tripm_values_pane_t2

0x69d5,	// (0x00067aa7) blid2_tripm_values_pane_t3

0x69e3,	// (0x00067ab5) blid2_tripm_values_pane_t4

0x69f1,	// (0x00067ac3) blid2_tripm_values_pane_t5

0x69ff,	// (0x00067ad1) blid2_tripm_values_pane_t6

0x6a0d,	// (0x00067adf) blid2_tripm_values_pane_t7

0x6a1b,	// (0x00067aed) blid2_tripm_values_pane_t8

0x6a29,	// (0x00067afb) blid2_tripm_values_pane_t9

0x0008,

0xf9df,	// (0x00070ab1) blid2_tripm_values_pane_t

0x170d,	// (0x000627df) call_video_pane_t1_ParamLimits

0x172b,	// (0x000627fd) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x000702af) call_video_pane_t_ParamLimits

0x2a5c,	// (0x00063b2e) msg_header_pane_g1_ParamLimits

0xd299,	// (0x0006e36b) msg_header_pane_g2_ParamLimits

0xd299,	// (0x0006e36b) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x0007049f) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x0007049f) msg_header_pane_g

0xc10e,	// (0x0006d1e0) main_clock2_pane_ParamLimits

0x41fd,	// (0x000652cf) grid_clock2_toolbar_pane_ParamLimits

0x41fd,	// (0x000652cf) grid_clock2_toolbar_pane

0x41fd,	// (0x000652cf) listscroll_clock2_pane_ParamLimits

0x41fd,	// (0x000652cf) listscroll_clock2_pane

0x42e1,	// (0x000653b3) main_clock2_pane_t3_ParamLimits

0x42e1,	// (0x000653b3) main_clock2_pane_t3

0x4305,	// (0x000653d7) main_clock2_pane_t4_ParamLimits

0x4305,	// (0x000653d7) main_clock2_pane_t4

0x6a37,	// (0x00067b09) cell_clock2_toolbar_pane

0x6a3f,	// (0x00067b11) cell_clock2_toolbar_pane_cp01

0x6a3f,	// (0x00067b11) cell_clock2_toolbar_pane_cp02

0x6a47,	// (0x00067b19) cell_clock2_toolbar_pane_cp03

0x6a4f,	// (0x00067b21) list_clock2_pane

0xcc30,	// (0x0006dd02) scroll_pane_cp10

0x6a57,	// (0x00067b29) list_single_clock2_pane_ParamLimits

0x6a57,	// (0x00067b29) list_single_clock2_pane

0xc2c0,	// (0x0006d392) list_highlight_pane_cp08

0x6a64,	// (0x00067b36) list_single_clock2_pane_t1

0x6a72,	// (0x00067b44) list_single_clock2_pane_t2

0x0001,

0xf9f2,	// (0x00070ac4) list_single_clock2_pane_t

0xb963,	// (0x0006ca35) bg_button_pane_cp10

0x6a80,	// (0x00067b52) cell_clock2_toolbar_pane_g1

0x2a6a,	// (0x00063b3c) aid_main_viewer_pane_g1_ParamLimits

0x2a6a,	// (0x00063b3c) aid_main_viewer_pane_g1

0x2a78,	// (0x00063b4a) aid_main_viewer_pane_g2_ParamLimits

0x2a78,	// (0x00063b4a) aid_main_viewer_pane_g2

0x2a86,	// (0x00063b58) aid_main_viewer_pane_g3_ParamLimits

0x2a86,	// (0x00063b58) aid_main_viewer_pane_g3

0x2a95,	// (0x00063b67) aid_main_viewer_pane_g4_ParamLimits

0x2a95,	// (0x00063b67) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x000704b0) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x000704b0) aid_main_viewer_pane_g

0x333a,	// (0x0006440c) main_calc_pane_ParamLimits

0x3360,	// (0x00064432) main_dialer2_pane_ParamLimits

0x9e54,	// (0x0006af26) main_cam6_pane

0x9e54,	// (0x0006af26) main_vid6_pane

0x4209,	// (0x000652db) listscroll_gen_pane_cp06_ParamLimits

0x4209,	// (0x000652db) listscroll_gen_pane_cp06

0x4328,	// (0x000653fa) main_clock2_pane_t5_ParamLimits

0x4328,	// (0x000653fa) main_clock2_pane_t5

0x4386,	// (0x00065458) aid_call2_pane_cp10_ParamLimits

0x4398,	// (0x0006546a) aid_call_pane_cp10_ParamLimits

0xcc9f,	// (0x0006dd71) popup_clock_analogue_window_cp10_g1_ParamLimits

0xcc9f,	// (0x0006dd71) popup_clock_analogue_window_cp10_g2_ParamLimits

0x43aa,	// (0x0006547c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x43aa,	// (0x0006547c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xcc9f,	// (0x0006dd71) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6b0,	// (0x00070782) popup_clock_analogue_window_cp10_g_ParamLimits

0x43c0,	// (0x00065492) popup_clock_analogue_window_cp10_t1_ParamLimits

0x48c5,	// (0x00065997) cell_dialer2_keypad_pane_g2_ParamLimits

0x48c5,	// (0x00065997) cell_dialer2_keypad_pane_g2

0x0001,

0xf764,	// (0x00070836) cell_dialer2_keypad_pane_g_ParamLimits

0xf764,	// (0x00070836) cell_dialer2_keypad_pane_g

0xc0ba,	// (0x0006d18c) cell_dialer2_keypad_pane_t1

0x5663,	// (0x00066735) main_cset_text2_pane_ParamLimits

0x5663,	// (0x00066735) main_cset_text2_pane

0x621a,	// (0x000672ec) area_vitu2_query_pane_g1_ParamLimits

0x6226,	// (0x000672f8) area_vitu2_query_pane_g2_ParamLimits

0xf90f,	// (0x000709e1) area_vitu2_query_pane_g_ParamLimits

0x62fd,	// (0x000673cf) area_vitu2_query_pane_t7_ParamLimits

0x62fd,	// (0x000673cf) area_vitu2_query_pane_t7

0x6321,	// (0x000673f3) bg_button_pane_cp018_ParamLimits

0x632d,	// (0x000673ff) bg_button_pane_cp021_ParamLimits

0x6339,	// (0x0006740b) bg_button_pane_cp022_ParamLimits

0x6348,	// (0x0006741a) bg_vkb2_func_pane_cp08_ParamLimits

0x6321,	// (0x000673f3) bg_vkb2_func_pane_cp06_ParamLimits

0x632d,	// (0x000673ff) bg_vkb2_func_pane_cp07_ParamLimits

0x6358,	// (0x0006742a) input_focus_pane_cp09_ParamLimits

0x6a88,	// (0x00067b5a) cam6_autofocus_pane_ParamLimits

0x6a88,	// (0x00067b5a) cam6_autofocus_pane

0x6a94,	// (0x00067b66) cam6_image_uncrop_pane_ParamLimits

0x6a94,	// (0x00067b66) cam6_image_uncrop_pane

0x6aa4,	// (0x00067b76) cam6_indi_pane_ParamLimits

0x6aa4,	// (0x00067b76) cam6_indi_pane

0x6aba,	// (0x00067b8c) cam6_mode_pane_ParamLimits

0x6aba,	// (0x00067b8c) cam6_mode_pane

0x6acc,	// (0x00067b9e) cam6_timer_pane_ParamLimits

0x6acc,	// (0x00067b9e) cam6_timer_pane

0x6ad8,	// (0x00067baa) cam6_zoom_pane_ParamLimits

0x6ad8,	// (0x00067baa) cam6_zoom_pane

0x6ae5,	// (0x00067bb7) cam6_mode_pane_g1_ParamLimits

0x6ae5,	// (0x00067bb7) cam6_mode_pane_g1

0x6af5,	// (0x00067bc7) cam6_mode_pane_g2_ParamLimits

0x6af5,	// (0x00067bc7) cam6_mode_pane_g2

0x6b05,	// (0x00067bd7) cam6_mode_pane_g3_ParamLimits

0x6b05,	// (0x00067bd7) cam6_mode_pane_g3

0x6b15,	// (0x00067be7) cam6_mode_pane_g4_ParamLimits

0x6b15,	// (0x00067be7) cam6_mode_pane_g4

0x0003,

0xf9f7,	// (0x00070ac9) cam6_mode_pane_g_ParamLimits

0xf9f7,	// (0x00070ac9) cam6_mode_pane_g

0xe808,	// (0x0006f8da) bg_tb_trans_pane_cp08_ParamLimits

0xe808,	// (0x0006f8da) bg_tb_trans_pane_cp08

0x6b25,	// (0x00067bf7) cam6_battery_pane_ParamLimits

0x6b25,	// (0x00067bf7) cam6_battery_pane

0x6b3b,	// (0x00067c0d) cam6_indi_pane_g1_ParamLimits

0x6b3b,	// (0x00067c0d) cam6_indi_pane_g1

0x6b4d,	// (0x00067c1f) cam6_indi_pane_g2_ParamLimits

0x6b4d,	// (0x00067c1f) cam6_indi_pane_g2

0x6b5f,	// (0x00067c31) cam6_indi_pane_g3_ParamLimits

0x6b5f,	// (0x00067c31) cam6_indi_pane_g3

0x0002,

0xfa00,	// (0x00070ad2) cam6_indi_pane_g_ParamLimits

0xfa00,	// (0x00070ad2) cam6_indi_pane_g

0x6b71,	// (0x00067c43) cam6_indi_pane_t1_ParamLimits

0x6b71,	// (0x00067c43) cam6_indi_pane_t1

0x4ee6,	// (0x00065fb8) cam6_autofocus_pane_g1

0x4ede,	// (0x00065fb0) cam6_autofocus_pane_g2

0x4ef6,	// (0x00065fc8) cam6_autofocus_pane_g3

0x4eee,	// (0x00065fc0) cam6_autofocus_pane_g4

0x0003,

0xfa07,	// (0x00070ad9) cam6_autofocus_pane_g

0x6b97,	// (0x00067c69) cam6_timer_pane_g1

0x6b9f,	// (0x00067c71) cam6_timer_pane_t1

0x6bad,	// (0x00067c7f) cam6_zoom_cont_pane

0x6bb5,	// (0x00067c87) cam6_zoom_pane_g1

0x6bbe,	// (0x00067c90) cam6_zoom_pane_g2

0x6bc7,	// (0x00067c99) cam6_zoom_pane_g3

0x0002,

0xfa10,	// (0x00070ae2) cam6_zoom_pane_g

0xc0b0,	// (0x0006d182) cam6_battery_pane_g1

0xc0b0,	// (0x0006d182) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00070181) cam6_battery_pane_g

0x6bb5,	// (0x00067c87) cam6_zoom_cont_pane_g1

0x6bbe,	// (0x00067c90) cam6_zoom_cont_pane_g2

0x6bd0,	// (0x00067ca2) cam6_zoom_cont_pane_g3

0x0002,

0xfa17,	// (0x00070ae9) cam6_zoom_cont_pane_g

0x6bed,	// (0x00067cbf) cam6_mode_pane_cp_ParamLimits

0x6bed,	// (0x00067cbf) cam6_mode_pane_cp

0x6bff,	// (0x00067cd1) cam6_zoom_pane_cp_ParamLimits

0x6bff,	// (0x00067cd1) cam6_zoom_pane_cp

0x6c0b,	// (0x00067cdd) vid6_image_uncrop_cif_pane_ParamLimits

0x6c0b,	// (0x00067cdd) vid6_image_uncrop_cif_pane

0x6c1b,	// (0x00067ced) vid6_image_uncrop_nhd_pane_ParamLimits

0x6c1b,	// (0x00067ced) vid6_image_uncrop_nhd_pane

0x6c3a,	// (0x00067d0c) vid6_image_uncrop_vga_pane_ParamLimits

0x6c3a,	// (0x00067d0c) vid6_image_uncrop_vga_pane

0x6c49,	// (0x00067d1b) vid6_image_uncrop_wvga_pane_ParamLimits

0x6c49,	// (0x00067d1b) vid6_image_uncrop_wvga_pane

0x6c58,	// (0x00067d2a) vid6_indi_pane_ParamLimits

0x6c58,	// (0x00067d2a) vid6_indi_pane

0xe808,	// (0x0006f8da) bg_tb_trans_pane_cp09_ParamLimits

0xe808,	// (0x0006f8da) bg_tb_trans_pane_cp09

0x6c70,	// (0x00067d42) cam6_battery_pane_cp_ParamLimits

0x6c70,	// (0x00067d42) cam6_battery_pane_cp

0x6c7c,	// (0x00067d4e) vid6_indi_pane_g1_ParamLimits

0x6c7c,	// (0x00067d4e) vid6_indi_pane_g1

0x6c8e,	// (0x00067d60) vid6_indi_pane_g2_ParamLimits

0x6c8e,	// (0x00067d60) vid6_indi_pane_g2

0x6ca0,	// (0x00067d72) vid6_indi_pane_g3_ParamLimits

0x6ca0,	// (0x00067d72) vid6_indi_pane_g3

0x6cb5,	// (0x00067d87) vid6_indi_pane_g4_ParamLimits

0x6cb5,	// (0x00067d87) vid6_indi_pane_g4

0x6cca,	// (0x00067d9c) vid6_indi_pane_g5_ParamLimits

0x6cca,	// (0x00067d9c) vid6_indi_pane_g5

0x0004,

0xfa1e,	// (0x00070af0) vid6_indi_pane_g_ParamLimits

0xfa1e,	// (0x00070af0) vid6_indi_pane_g

0x6ce4,	// (0x00067db6) vid6_indi_pane_t1_ParamLimits

0x6ce4,	// (0x00067db6) vid6_indi_pane_t1

0xa651,	// (0x0006b723) vid6_indi_pane_t2_ParamLimits

0xa651,	// (0x0006b723) vid6_indi_pane_t2

0xa679,	// (0x0006b74b) vid6_indi_pane_t3_ParamLimits

0xa679,	// (0x0006b74b) vid6_indi_pane_t3

0xa6a1,	// (0x0006b773) vid6_indi_pane_t4_ParamLimits

0xa6a1,	// (0x0006b773) vid6_indi_pane_t4

0x0003,

0xfa29,	// (0x00070afb) vid6_indi_pane_t_ParamLimits

0xfa29,	// (0x00070afb) vid6_indi_pane_t

0xa6c5,	// (0x0006b797) wait_bar_pane_cp08

0x6cfa,	// (0x00067dcc) main_cset_text2_pane_t1_ParamLimits

0x6cfa,	// (0x00067dcc) main_cset_text2_pane_t1

0x6bd8,	// (0x00067caa) listscroll_gen_pane_cp06_t1_ParamLimits

0x6bd8,	// (0x00067caa) listscroll_gen_pane_cp06_t1

0x9e54,	// (0x0006af26) main_cam6_set_pane

0xa468,	// (0x0006b53a) bg_tb_trans_pane_cp06_ParamLimits

0xa47e,	// (0x0006b550) cam4_indicators_pane_g1_ParamLimits

0xa48f,	// (0x0006b561) cam4_indicators_pane_g2_ParamLimits

0xf7a1,	// (0x00070873) cam4_indicators_pane_g_ParamLimits

0xa4a7,	// (0x0006b579) cam4_indicators_pane_t1_ParamLimits

0x9e46,	// (0x0006af18) bg_tb_trans_pane_cp07_ParamLimits

0xa4d1,	// (0x0006b5a3) vid4_indicators_pane_g1_ParamLimits

0xa4e5,	// (0x0006b5b7) vid4_indicators_pane_g2_ParamLimits

0xa4f9,	// (0x0006b5cb) vid4_indicators_pane_g3_ParamLimits

0xa50a,	// (0x0006b5dc) vid4_indicators_pane_g4_ParamLimits

0xf7b3,	// (0x00070885) vid4_indicators_pane_g_ParamLimits

0xa526,	// (0x0006b5f8) vid4_indicators_pane_t1_ParamLimits

0xa5e0,	// (0x0006b6b2) vid4_progress_pane_g1_ParamLimits

0xa5f0,	// (0x0006b6c2) vid4_progress_pane_g2_ParamLimits

0x64e8,	// (0x000675ba) vid4_progress_pane_g3_ParamLimits

0xa600,	// (0x0006b6d2) vid4_progress_pane_g4_ParamLimits

0xf95a,	// (0x00070a2c) vid4_progress_pane_g_ParamLimits

0x64fa,	// (0x000675cc) vid4_progress_pane_t1_ParamLimits

0xa618,	// (0x0006b6ea) vid4_progress_pane_t2_ParamLimits

0xa62d,	// (0x0006b6ff) vid4_progress_pane_t3_ParamLimits

0xf965,	// (0x00070a37) vid4_progress_pane_t_ParamLimits

0x6510,	// (0x000675e2) wait_bar_pane_cp07_ParamLimits

0x6d18,	// (0x00067dea) main_cam6_set_pane_g2_ParamLimits

0x6d18,	// (0x00067dea) main_cam6_set_pane_g2

0x6d3c,	// (0x00067e0e) main_cset6_listscroll_pane_ParamLimits

0x6d3c,	// (0x00067e0e) main_cset6_listscroll_pane

0x6d58,	// (0x00067e2a) main_cset6_slider_pane_ParamLimits

0x6d58,	// (0x00067e2a) main_cset6_slider_pane

0x6d6e,	// (0x00067e40) main_cset6_text2_pane_ParamLimits

0x6d6e,	// (0x00067e40) main_cset6_text2_pane

0xa6d4,	// (0x0006b7a6) main_cset6_text_pane

0xa6dc,	// (0x0006b7ae) main_cset_list_pane_copy1_ParamLimits

0xa6dc,	// (0x0006b7ae) main_cset_list_pane_copy1

0xa6ec,	// (0x0006b7be) scroll_pane_cp028_copy1

0x6d7c,	// (0x00067e4e) cset_list_set_pane_copy1

0x6d8e,	// (0x00067e60) aid_position_infowindow_above_copy1

0x6d96,	// (0x00067e68) aid_position_infowindow_below_copy1

0x6d9e,	// (0x00067e70) cset_list_set_pane_g1_copy1

0x6da6,	// (0x00067e78) cset_list_set_pane_g3_copy1_ParamLimits

0x6da6,	// (0x00067e78) cset_list_set_pane_g3_copy1

0x6db5,	// (0x00067e87) cset_list_set_pane_t1_copy1_ParamLimits

0x6db5,	// (0x00067e87) cset_list_set_pane_t1_copy1

0xc00b,	// (0x0006d0dd) list_highlight_pane_cp021_copy1_ParamLimits

0xc00b,	// (0x0006d0dd) list_highlight_pane_cp021_copy1

0xa6f5,	// (0x0006b7c7) cset6_slider_pane_ParamLimits

0xa6f5,	// (0x0006b7c7) cset6_slider_pane

0xa721,	// (0x0006b7f3) main_cset6_slider_pane_g1_ParamLimits

0xa721,	// (0x0006b7f3) main_cset6_slider_pane_g1

0x6dca,	// (0x00067e9c) main_cset6_slider_pane_g2_ParamLimits

0x6dca,	// (0x00067e9c) main_cset6_slider_pane_g2

0xa749,	// (0x0006b81b) main_cset6_slider_pane_g3_ParamLimits

0xa749,	// (0x0006b81b) main_cset6_slider_pane_g3

0x6df2,	// (0x00067ec4) main_cset6_slider_pane_g4_ParamLimits

0x6df2,	// (0x00067ec4) main_cset6_slider_pane_g4

0xa755,	// (0x0006b827) main_cset6_slider_pane_g5_ParamLimits

0xa755,	// (0x0006b827) main_cset6_slider_pane_g5

0x5736,	// (0x00066808) main_cset6_slider_pane_g7_ParamLimits

0x5736,	// (0x00066808) main_cset6_slider_pane_g7

0x5742,	// (0x00066814) main_cset6_slider_pane_g8_ParamLimits

0x5742,	// (0x00066814) main_cset6_slider_pane_g8

0x574e,	// (0x00066820) main_cset6_slider_pane_g9_ParamLimits

0x574e,	// (0x00066820) main_cset6_slider_pane_g9

0x575a,	// (0x0006682c) main_cset6_slider_pane_g10_ParamLimits

0x575a,	// (0x0006682c) main_cset6_slider_pane_g10

0x5766,	// (0x00066838) main_cset6_slider_pane_g11_ParamLimits

0x5766,	// (0x00066838) main_cset6_slider_pane_g11

0x5772,	// (0x00066844) main_cset6_slider_pane_g12_ParamLimits

0x5772,	// (0x00066844) main_cset6_slider_pane_g12

0x577e,	// (0x00066850) main_cset6_slider_pane_g13_ParamLimits

0x577e,	// (0x00066850) main_cset6_slider_pane_g13

0x578a,	// (0x0006685c) main_cset6_slider_pane_g14_ParamLimits

0x578a,	// (0x0006685c) main_cset6_slider_pane_g14

0x6dfe,	// (0x00067ed0) main_cset6_slider_pane_g15_ParamLimits

0x6dfe,	// (0x00067ed0) main_cset6_slider_pane_g15

0xa53d,	// (0x0006b60f) main_cset6_slider_pane_g16_ParamLimits

0xa53d,	// (0x0006b60f) main_cset6_slider_pane_g16

0xa549,	// (0x0006b61b) main_cset6_slider_pane_g17_ParamLimits

0xa549,	// (0x0006b61b) main_cset6_slider_pane_g17

0x0011,

0xfa32,	// (0x00070b04) main_cset6_slider_pane_g_ParamLimits

0xfa32,	// (0x00070b04) main_cset6_slider_pane_g

0xa761,	// (0x0006b833) main_cset6_slider_pane_t1_ParamLimits

0xa761,	// (0x0006b833) main_cset6_slider_pane_t1

0x6e2e,	// (0x00067f00) main_cset6_slider_pane_t2_ParamLimits

0x6e2e,	// (0x00067f00) main_cset6_slider_pane_t2

0x6e59,	// (0x00067f2b) main_cset6_slider_pane_t3_ParamLimits

0x6e59,	// (0x00067f2b) main_cset6_slider_pane_t3

0x6e84,	// (0x00067f56) main_cset6_slider_pane_t4_ParamLimits

0x6e84,	// (0x00067f56) main_cset6_slider_pane_t4

0x6eaf,	// (0x00067f81) main_cset6_slider_pane_t5_ParamLimits

0x6eaf,	// (0x00067f81) main_cset6_slider_pane_t5

0xa7a2,	// (0x0006b874) main_cset6_slider_pane_t7_ParamLimits

0xa7a2,	// (0x0006b874) main_cset6_slider_pane_t7

0x6eda,	// (0x00067fac) main_cset6_slider_pane_t8_ParamLimits

0x6eda,	// (0x00067fac) main_cset6_slider_pane_t8

0x6efe,	// (0x00067fd0) main_cset6_slider_pane_t9_ParamLimits

0x6efe,	// (0x00067fd0) main_cset6_slider_pane_t9

0x6f22,	// (0x00067ff4) main_cset6_slider_pane_t10_ParamLimits

0x6f22,	// (0x00067ff4) main_cset6_slider_pane_t10

0x6f46,	// (0x00068018) main_cset6_slider_pane_t11_ParamLimits

0x6f46,	// (0x00068018) main_cset6_slider_pane_t11

0xa7d8,	// (0x0006b8aa) main_cset6_slider_pane_t14_ParamLimits

0xa7d8,	// (0x0006b8aa) main_cset6_slider_pane_t14

0xa811,	// (0x0006b8e3) main_cset6_slider_pane_t15_ParamLimits

0xa811,	// (0x0006b8e3) main_cset6_slider_pane_t15

0x000b,

0xfa57,	// (0x00070b29) main_cset6_slider_pane_t_ParamLimits

0xfa57,	// (0x00070b29) main_cset6_slider_pane_t

0x6f6a,	// (0x0006803c) cset_slider_pane_g1_copy1

0x6f73,	// (0x00068045) cset_slider_pane_g2_copy1

0x6f7c,	// (0x0006804e) cset_slider_pane_g3_copy1

0xb963,	// (0x0006ca35) bg_popup_sub_pane_cp011_copy1

0xa853,	// (0x0006b925) main_cset_text_pane_g1_copy1

0x5ed9,	// (0x00066fab) main_cset_text_pane_t1_copy1

0x5ee7,	// (0x00066fb9) main_cset_text_pane_t2_copy1

0x5ef5,	// (0x00066fc7) main_cset_text_pane_t3_copy1

0x5f03,	// (0x00066fd5) main_cset_text_pane_t4_copy1

0x5f11,	// (0x00066fe3) main_cset_text_pane_t5_copy1

0xa85b,	// (0x0006b92d) main_cset_text_pane_t6_copy1

0xa869,	// (0x0006b93b) main_cset_text_pane_t7_copy1

0x6cfa,	// (0x00067dcc) main_cset_text2_pane_t1_copy1

0x9e46,	// (0x0006af18) main_ncimui_pane

0x35a4,	// (0x00064676) popup_query_ncimui_window_ParamLimits

0x35a4,	// (0x00064676) popup_query_ncimui_window

0xebb8,	// (0x0006fc8a) field_cale_ev2_pane_g4_ParamLimits

0xebb8,	// (0x0006fc8a) field_cale_ev2_pane_g4

0x47a8,	// (0x0006587a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x47a8,	// (0x0006587a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf73b,	// (0x0007080d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf73b,	// (0x0007080d) cell_video_dialer_keypad_pane_g

0x47c0,	// (0x00065892) cell_video_dialer_keypad_pane_t1

0xb963,	// (0x0006ca35) bg_popup_window_pane_cp012

0xe3ec,	// (0x0006f4be) heading_pane_cp06

0xa895,	// (0x0006b967) ncim_query_content_pane

0xb963,	// (0x0006ca35) bg_popup_heading_pane_cp01

0xa89d,	// (0x0006b96f) ncim_heading_pane_t1

0xa8ab,	// (0x0006b97d) ncim_indicator_popup_pane

0xa8bd,	// (0x0006b98f) ncim_query_button_pane

0xa8d1,	// (0x0006b9a3) ncim_query_content_pane_t1

0xa8e3,	// (0x0006b9b5) ncim_query_content_pane_t2

0x0005,

0xfa81,	// (0x00070b53) ncim_query_content_pane_t

0xa91d,	// (0x0006b9ef) ncim_query_list_pane

0xa92f,	// (0x0006ba01) ncim_query_popup_pane

0xa8ab,	// (0x0006b97d) ncim_indicator_popup_pane_ParamLimits

0x70cb,	// (0x0006819d) ncim_query_content_pane_g1_ParamLimits

0x70cb,	// (0x0006819d) ncim_query_content_pane_g1

0xa8d1,	// (0x0006b9a3) ncim_query_content_pane_t1_ParamLimits

0xa8e3,	// (0x0006b9b5) ncim_query_content_pane_t2_ParamLimits

0x70d7,	// (0x000681a9) ncim_query_content_pane_t3_ParamLimits

0x70d7,	// (0x000681a9) ncim_query_content_pane_t3

0x70ff,	// (0x000681d1) ncim_query_content_pane_t4_ParamLimits

0x70ff,	// (0x000681d1) ncim_query_content_pane_t4

0x7127,	// (0x000681f9) ncim_query_content_pane_t5_ParamLimits

0x7127,	// (0x000681f9) ncim_query_content_pane_t5

0xa8f5,	// (0x0006b9c7) ncim_query_content_pane_t6_ParamLimits

0xa8f5,	// (0x0006b9c7) ncim_query_content_pane_t6

0xfa81,	// (0x00070b53) ncim_query_content_pane_t_ParamLimits

0xa91d,	// (0x0006b9ef) ncim_query_list_pane_ParamLimits

0xa92f,	// (0x0006ba01) ncim_query_popup_pane_ParamLimits

0xa943,	// (0x0006ba15) wait_bar_pane_cp04

0xb963,	// (0x0006ca35) input_focus_pane_cp011

0xa94b,	// (0x0006ba1d) ncim_query_popup_pane_t1

0xa959,	// (0x0006ba2b) ncim_list_query_list_pane_ParamLimits

0xa959,	// (0x0006ba2b) ncim_list_query_list_pane

0xb963,	// (0x0006ca35) bg_button_pane_cp027

0xa966,	// (0x0006ba38) ncim_query_button_pane_g1

0xb963,	// (0x0006ca35) list_highlight_pane_cp012

0xa970,	// (0x0006ba42) ncim_list_query_list_pane_g1

0xa978,	// (0x0006ba4a) ncim_list_query_list_pane_t1

0xa49b,	// (0x0006b56d) cam4_indicators_pane_g3_ParamLimits

0xa49b,	// (0x0006b56d) cam4_indicators_pane_g3

0xa516,	// (0x0006b5e8) vid4_indicators_pane_g5_ParamLimits

0xa516,	// (0x0006b5e8) vid4_indicators_pane_g5

0xa60c,	// (0x0006b6de) vid4_progress_pane_g5_ParamLimits

0xa60c,	// (0x0006b6de) vid4_progress_pane_g5

0x6fb6,	// (0x00068088) main_ncimui_pane_g1

0x701f,	// (0x000680f1) ncimui_group_query_pane_ParamLimits

0x701f,	// (0x000680f1) ncimui_group_query_pane

0x7067,	// (0x00068139) ncimui_list_pane_ParamLimits

0x7067,	// (0x00068139) ncimui_list_pane

0x708e,	// (0x00068160) ncimui_text_pane_ParamLimits

0x708e,	// (0x00068160) ncimui_text_pane

0x714f,	// (0x00068221) ncimui_text_pane_t1_ParamLimits

0x714f,	// (0x00068221) ncimui_text_pane_t1

0xa986,	// (0x0006ba58) ncimui_list_single_graphic_pane_ParamLimits

0xa986,	// (0x0006ba58) ncimui_list_single_graphic_pane

0x716d,	// (0x0006823f) ncimui_query_pane_ParamLimits

0x716d,	// (0x0006823f) ncimui_query_pane

0xb963,	// (0x0006ca35) list_highlight_pane_cp013

0xa996,	// (0x0006ba68) ncim_list_query_list_pane_t1_copy1

0xa9a4,	// (0x0006ba76) ncim_list_single_graphic_pane_g1

0x7180,	// (0x00068252) ncim_query_button_pane_cp01

0x718c,	// (0x0006825e) ncim_query_entry_pane_ParamLimits

0x718c,	// (0x0006825e) ncim_query_entry_pane

0x719f,	// (0x00068271) ncimui_query_pane_g1

0x71ab,	// (0x0006827d) ncimui_query_pane_t1_ParamLimits

0x71ab,	// (0x0006827d) ncimui_query_pane_t1

0xc00b,	// (0x0006d0dd) input_focus_pane_cp012

0xa9ac,	// (0x0006ba7e) ncim_query_entry_pane_t1

0xc10e,	// (0x0006d1e0) main_im_pane_ParamLimits

0x9e46,	// (0x0006af18) main_mobtv_pane_ParamLimits

0x9e46,	// (0x0006af18) main_mobtv_pane

0x6e16,	// (0x00067ee8) main_cset6_slider_pane_g18_ParamLimits

0x6e16,	// (0x00067ee8) main_cset6_slider_pane_g18

0x6e22,	// (0x00067ef4) main_cset6_slider_pane_g19_ParamLimits

0x6e22,	// (0x00067ef4) main_cset6_slider_pane_g19

0xc08e,	// (0x0006d160) bg_main_mobtv_pane_ParamLimits

0xc08e,	// (0x0006d160) bg_main_mobtv_pane

0x71c4,	// (0x00068296) main_mobtv_info_pane

0x71cd,	// (0x0006829f) main_mobtv_loading_pane_ParamLimits

0x71cd,	// (0x0006829f) main_mobtv_loading_pane

0xa9be,	// (0x0006ba90) main_mobtv_pg_channel_list_pane

0xa9c8,	// (0x0006ba9a) main_mobtv_pg_hdr_pane

0x71da,	// (0x000682ac) main_mobtv_programe_curr_pane_ParamLimits

0x71da,	// (0x000682ac) main_mobtv_programe_curr_pane

0x71e7,	// (0x000682b9) main_mobtv_programe_next_pane_ParamLimits

0x71e7,	// (0x000682b9) main_mobtv_programe_next_pane

0xa9d1,	// (0x0006baa3) popup_mobtv_noti_window

0xc0b0,	// (0x0006d182) main_tv_pg_hdr_pane_g1

0xa9d9,	// (0x0006baab) main_tv_pg_hdr_pane_g2

0xa9e1,	// (0x0006bab3) main_tv_pg_hdr_pane_g3

0xa9e9,	// (0x0006babb) main_tv_pg_hdr_pane_g4

0xa9f1,	// (0x0006bac3) main_tv_pg_hdr_pane_g5

0xa9fb,	// (0x0006bacd) main_tv_pg_hdr_pane_g6

0xaa05,	// (0x0006bad7) main_tv_pg_hdr_pane_g7

0xaa0f,	// (0x0006bae1) main_tv_pg_hdr_pane_g8

0xaa19,	// (0x0006baeb) main_tv_pg_hdr_pane_g9

0xaa23,	// (0x0006baf5) main_tv_pg_hdr_pane_g10

0xaa2d,	// (0x0006baff) main_tv_pg_hdr_pane_g11

0x000a,

0xfa8e,	// (0x00070b60) main_tv_pg_hdr_pane_g

0xaa37,	// (0x0006bb09) main_tv_pg_hdr_pane_t1

0xaa45,	// (0x0006bb17) main_tv_pg_hdr_pane_t2

0xaa53,	// (0x0006bb25) main_tv_pg_hdr_pane_t3

0xaa63,	// (0x0006bb35) main_tv_pg_hdr_pane_t4

0xaa73,	// (0x0006bb45) main_tv_pg_hdr_pane_t5

0x0004,

0xfaa5,	// (0x00070b77) main_tv_pg_hdr_pane_t

0xaa83,	// (0x0006bb55) single_mobtv_pg_channel_pane_ParamLimits

0xaa83,	// (0x0006bb55) single_mobtv_pg_channel_pane

0xaa95,	// (0x0006bb67) single_mobtv_pg_channel_table_pane

0xc5e5,	// (0x0006d6b7) single_mobtv_pg_channel_thumb_pane

0xaa9e,	// (0x0006bb70) single_tv_pg_channel_pane_g1

0xaaa7,	// (0x0006bb79) single_tv_pg_channel_pane_g2

0x0001,

0xfab0,	// (0x00070b82) single_tv_pg_channel_pane_g

0xc072,	// (0x0006d144) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc072,	// (0x0006d144) bg_single_mobtv_pg_channel_thumb_pane

0xaab0,	// (0x0006bb82) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xaab0,	// (0x0006bb82) single_mobtv_pg_channel_thumb_pane_g1

0xaabe,	// (0x0006bb90) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xaabe,	// (0x0006bb90) single_mobtv_pg_channel_thumb_pane_g2

0xaaca,	// (0x0006bb9c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xaaca,	// (0x0006bb9c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfab5,	// (0x00070b87) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfab5,	// (0x00070b87) single_mobtv_pg_channel_thumb_pane_g

0xaad6,	// (0x0006bba8) single_mobtv_pg_channel_thumb_pane_t1

0xaae4,	// (0x0006bbb6) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfabc,	// (0x00070b8e) single_mobtv_pg_channel_thumb_pane_t

0xc0b0,	// (0x0006d182) bg_single_mobtv_pg_channel_table_pane_g1

0xc0b0,	// (0x0006d182) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00070181) bg_single_mobtv_pg_channel_table_pane_g

0xaaf2,	// (0x0006bbc4) single_mobtv_pg_channel_table_pane_t1

0xab00,	// (0x0006bbd2) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfac1,	// (0x00070b93) single_mobtv_pg_channel_table_pane_t

0x71fc,	// (0x000682ce) main_mobtv_info_pane_g1_ParamLimits

0x71fc,	// (0x000682ce) main_mobtv_info_pane_g1

0x721a,	// (0x000682ec) main_mobtv_info_pane_t1_ParamLimits

0x721a,	// (0x000682ec) main_mobtv_info_pane_t1

0x7292,	// (0x00068364) main_mobtv_info_pane_t2_ParamLimits

0x7292,	// (0x00068364) main_mobtv_info_pane_t2

0x0002,

0xfacb,	// (0x00070b9d) main_mobtv_info_pane_t_ParamLimits

0xfacb,	// (0x00070b9d) main_mobtv_info_pane_t

0x7321,	// (0x000683f3) wait_bar_pane_cp05

0x7333,	// (0x00068405) main_mobtv_loading_pane_g1_ParamLimits

0x7333,	// (0x00068405) main_mobtv_loading_pane_g1

0x7346,	// (0x00068418) main_mobtv_loading_pane_g2_ParamLimits

0x7346,	// (0x00068418) main_mobtv_loading_pane_g2

0x7352,	// (0x00068424) main_mobtv_loading_pane_g3_ParamLimits

0x7352,	// (0x00068424) main_mobtv_loading_pane_g3

0x0002,

0xfad2,	// (0x00070ba4) main_mobtv_loading_pane_g_ParamLimits

0xfad2,	// (0x00070ba4) main_mobtv_loading_pane_g

0xab0e,	// (0x0006bbe0) main_mobtv_loading_pane_t1_ParamLimits

0xab0e,	// (0x0006bbe0) main_mobtv_loading_pane_t1

0xab26,	// (0x0006bbf8) main_mobtv_loading_pane_t2_ParamLimits

0xab26,	// (0x0006bbf8) main_mobtv_loading_pane_t2

0x0001,

0xfad9,	// (0x00070bab) main_mobtv_loading_pane_t_ParamLimits

0xfad9,	// (0x00070bab) main_mobtv_loading_pane_t

0x7365,	// (0x00068437) wait_bar_pane_cp06_ParamLimits

0x7365,	// (0x00068437) wait_bar_pane_cp06

0xab4a,	// (0x0006bc1c) main_mobtv_programe_curr_pane_t1

0xab58,	// (0x0006bc2a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfade,	// (0x00070bb0) main_mobtv_programe_curr_pane_t

0xab66,	// (0x0006bc38) main_mobtv_programe_next_pane_t1

0xab74,	// (0x0006bc46) main_mobtv_programe_next_pane_t2

0xab82,	// (0x0006bc54) main_mobtv_programe_next_pane_t3

0x0002,

0xfae3,	// (0x00070bb5) main_mobtv_programe_next_pane_t

0xb963,	// (0x0006ca35) bg_popup_mobtv_noti_window_pane

0xab90,	// (0x0006bc62) popup_mobtv_noti_window_g1

0xab98,	// (0x0006bc6a) popup_mobtv_noti_window_t1

0xaba6,	// (0x0006bc78) popup_mobtv_noti_window_t2

0x0001,

0xfaea,	// (0x00070bbc) popup_mobtv_noti_window_t

0xc0b0,	// (0x0006d182) bg_popup_mobtv_noti_window_pane_g1

0x9e54,	// (0x0006af26) sc_clock_pane

0x9e54,	// (0x0006af26) main_fs_bigclock_pane

0x6850,	// (0x00067922) blid2_tripm_pane_t4_ParamLimits

0x6850,	// (0x00067922) blid2_tripm_pane_t4

0xc072,	// (0x0006d144) sc_clock_pane_g1_ParamLimits

0xc072,	// (0x0006d144) sc_clock_pane_g1

0xc0ba,	// (0x0006d18c) sc_clock_pane_t1_ParamLimits

0xc0ba,	// (0x0006d18c) sc_clock_pane_t1

0xc0ba,	// (0x0006d18c) sc_clock_pane_t2_ParamLimits

0xc0ba,	// (0x0006d18c) sc_clock_pane_t2

0xc0ba,	// (0x0006d18c) sc_clock_pane_t3_ParamLimits

0xc0ba,	// (0x0006d18c) sc_clock_pane_t3

0x0004,

0xfaef,	// (0x00070bc1) sc_clock_pane_t_ParamLimits

0xfaef,	// (0x00070bc1) sc_clock_pane_t

0x81f8,	// (0x000692ca) main_fs_bigclock_indicator_pane_ParamLimits

0x81f8,	// (0x000692ca) main_fs_bigclock_indicator_pane

0x73c3,	// (0x00068495) main_fs_bigclock_pane_g1_ParamLimits

0x73c3,	// (0x00068495) main_fs_bigclock_pane_g1

0x8204,	// (0x000692d6) main_fs_bigclock_pane_t1_ParamLimits

0x8204,	// (0x000692d6) main_fs_bigclock_pane_t1

0x8216,	// (0x000692e8) main_fs_bigclock_pane_t2_ParamLimits

0x8216,	// (0x000692e8) main_fs_bigclock_pane_t2

0x822a,	// (0x000692fc) main_fs_bigclock_pane_t3_ParamLimits

0x822a,	// (0x000692fc) main_fs_bigclock_pane_t3

0x0002,

0xfc73,	// (0x00070d45) main_fs_bigclock_pane_t_ParamLimits

0xfc73,	// (0x00070d45) main_fs_bigclock_pane_t

0xb40f,	// (0x0006c4e1) main_fs_bigclock_indicator_pane_g1

0xa8c5,	// (0x0006b997) ncim_query_content_pane_g2_ParamLimits

0xa8c5,	// (0x0006b997) ncim_query_content_pane_g2

0x0001,

0xfa7c,	// (0x00070b4e) ncim_query_content_pane_g_ParamLimits

0xfa7c,	// (0x00070b4e) ncim_query_content_pane_g

0xc0ba,	// (0x0006d18c) sc_clock_pane_t4_ParamLimits

0xc0ba,	// (0x0006d18c) sc_clock_pane_t4

0x9e46,	// (0x0006af18) main_radioblah_pane

0xa400,	// (0x0006b4d2) cell_call4_button_pane_t1_copy1_ParamLimits

0xa400,	// (0x0006b4d2) cell_call4_button_pane_t1_copy1

0x6fce,	// (0x000680a0) main_ncimui_pane_t1_ParamLimits

0x6fce,	// (0x000680a0) main_ncimui_pane_t1

0x6fe8,	// (0x000680ba) main_ncimui_pane_t2_ParamLimits

0x6fe8,	// (0x000680ba) main_ncimui_pane_t2

0x0002,

0xfa75,	// (0x00070b47) main_ncimui_pane_t_ParamLimits

0xfa75,	// (0x00070b47) main_ncimui_pane_t

0xd1c5,	// (0x0006e297) main_radioblah_anim_pane_ParamLimits

0xd1c5,	// (0x0006e297) main_radioblah_anim_pane

0xd1c5,	// (0x0006e297) main_radioblah_info_pane_ParamLimits

0xd1c5,	// (0x0006e297) main_radioblah_info_pane

0xd1b1,	// (0x0006e283) main_radioblah_pane_t1_ParamLimits

0xd1b1,	// (0x0006e283) main_radioblah_pane_t1

0xd1b1,	// (0x0006e283) main_radioblah_pane_t2_ParamLimits

0xd1b1,	// (0x0006e283) main_radioblah_pane_t2

0x0003,

0xfb10,	// (0x00070be2) main_radioblah_pane_t_ParamLimits

0xfb10,	// (0x00070be2) main_radioblah_pane_t

0xc00b,	// (0x0006d0dd) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc00b,	// (0x0006d0dd) main_radioblah_rocker_ctrl_pane

0xe816,	// (0x0006f8e8) main_radioblah_info_pane_t1_ParamLimits

0xe816,	// (0x0006f8e8) main_radioblah_info_pane_t1

0xad1c,	// (0x0006bdee) main_radioblah_info_pane_t2_ParamLimits

0xad1c,	// (0x0006bdee) main_radioblah_info_pane_t2

0x0003,

0xfb19,	// (0x00070beb) main_radioblah_info_pane_t_ParamLimits

0xfb19,	// (0x00070beb) main_radioblah_info_pane_t

0xc0b0,	// (0x0006d182) main_radioblah_rocker_ctrl_pane_g1

0xc0b0,	// (0x0006d182) main_radioblah_rocker_ctrl_pane_g2

0xc0b0,	// (0x0006d182) main_radioblah_rocker_ctrl_pane_g3

0xc0b0,	// (0x0006d182) main_radioblah_rocker_ctrl_pane_g4

0xc0b0,	// (0x0006d182) main_radioblah_rocker_ctrl_pane_g5

0xc0b0,	// (0x0006d182) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0x0602,	// (0x000616d4) main_radioblah_rocker_ctrl_pane_g

0x6cfa,	// (0x00067dcc) main_cset_text2_pane_t1_copy1_ParamLimits

0xa44e,	// (0x0006b520) cam4_image_uncrop_qvga_pane

0xa4c1,	// (0x0006b593) vid4_image_uncrop_qcif_pane

0xa643,	// (0x0006b715) cam6_image_uncrop_qvga_pane_ParamLimits

0xa643,	// (0x0006b715) cam6_image_uncrop_qvga_pane

0x6c2a,	// (0x00067cfc) vid6_image_uncrop_qcif_pane_ParamLimits

0x6c2a,	// (0x00067cfc) vid6_image_uncrop_qcif_pane

0xb963,	// (0x0006ca35) bg_popup_preview_window_pane_cp03

0xa877,	// (0x0006b949) list_cset_text2_pane

0xa87f,	// (0x0006b951) main_cset6_text2_pane_g1

0xa887,	// (0x0006b959) main_cset6_text2_pane_t1

0xad6b,	// (0x0006be3d) list_cset_text2_pane_t1_ParamLimits

0xad6b,	// (0x0006be3d) list_cset_text2_pane_t1

0x9e46,	// (0x0006af18) main_radioblah_pane_ParamLimits

0x730d,	// (0x000683df) main_mobtv_info_pane_t3_ParamLimits

0x730d,	// (0x000683df) main_mobtv_info_pane_t3

0xd1a3,	// (0x0006e275) main_radioblah_pane_g1

0xacec,	// (0x0006bdbe) main_radioblah_info_pane_g1

0xc0ce,	// (0x0006d1a0) main_radioblah_info_pane_t3_ParamLimits

0xc0ce,	// (0x0006d1a0) main_radioblah_info_pane_t3

0x2396,	// (0x00063468) highlight_cell_cale_month_pane_ParamLimits

0x2396,	// (0x00063468) highlight_cell_cale_month_pane

0x9e54,	// (0x0006af26) main_phob_fisheye_pane

0xec59,	// (0x0006fd2b) scroll_pane_cp0031_ParamLimits

0xec59,	// (0x0006fd2b) scroll_pane_cp0031

0xa6c5,	// (0x0006b797) wait_bar_pane_cp08_ParamLimits

0x6d7c,	// (0x00067e4e) cset_list_set_pane_copy1_ParamLimits

0xad86,	// (0x0006be58) highlight_cell_cale_month_pane_g1

0x7410,	// (0x000684e2) highlight_cell_cale_month_pane_t1

0x642e,	// (0x00067500) list_gen_pane_cp01

0x5689,	// (0x0006675b) scroll_pane_01

0x741e,	// (0x000684f0) list_single_double_fisheye_pane

0x7427,	// (0x000684f9) list_double_fisheye_pane_g1_ParamLimits

0x7427,	// (0x000684f9) list_double_fisheye_pane_g1

0x7433,	// (0x00068505) list_double_fisheye_pane_g2_ParamLimits

0x7433,	// (0x00068505) list_double_fisheye_pane_g2

0x7447,	// (0x00068519) list_double_fisheye_pane_g3_ParamLimits

0x7447,	// (0x00068519) list_double_fisheye_pane_g3

0x0004,

0xfb22,	// (0x00070bf4) list_double_fisheye_pane_g_ParamLimits

0xfb22,	// (0x00070bf4) list_double_fisheye_pane_g

0x7470,	// (0x00068542) list_double_fisheye_pane_t1_ParamLimits

0x7470,	// (0x00068542) list_double_fisheye_pane_t1

0x748b,	// (0x0006855d) list_double_fisheye_pane_t2_ParamLimits

0x748b,	// (0x0006855d) list_double_fisheye_pane_t2

0x0001,

0xfb2d,	// (0x00070bff) list_double_fisheye_pane_t_ParamLimits

0xfb2d,	// (0x00070bff) list_double_fisheye_pane_t

0x9e54,	// (0x0006af26) main_call5_pane

0xc00b,	// (0x0006d0dd) sc_swipe_pane_ParamLimits

0xc00b,	// (0x0006d0dd) sc_swipe_pane

0x74c0,	// (0x00068592) call5_image_pane_ParamLimits

0x74c0,	// (0x00068592) call5_image_pane

0x74dd,	// (0x000685af) call5_swipe_1_pane_ParamLimits

0x74dd,	// (0x000685af) call5_swipe_1_pane

0x74f0,	// (0x000685c2) call5_swipe_2_pane_ParamLimits

0x74f0,	// (0x000685c2) call5_swipe_2_pane

0x751b,	// (0x000685ed) popup_call5_audio_first_window_ParamLimits

0x751b,	// (0x000685ed) popup_call5_audio_first_window

0xc072,	// (0x0006d144) call5_swipe_1_pane_g1_ParamLimits

0xc072,	// (0x0006d144) call5_swipe_1_pane_g1

0xad8e,	// (0x0006be60) call5_swipe_1_pane_g2_ParamLimits

0xad8e,	// (0x0006be60) call5_swipe_1_pane_g2

0x0001,

0xfb32,	// (0x00070c04) call5_swipe_1_pane_g_ParamLimits

0xfb32,	// (0x00070c04) call5_swipe_1_pane_g

0xad9a,	// (0x0006be6c) call5_swipe_1_pane_t1_ParamLimits

0xad9a,	// (0x0006be6c) call5_swipe_1_pane_t1

0xc072,	// (0x0006d144) call5_swipe_2_pane_g1_ParamLimits

0xc072,	// (0x0006d144) call5_swipe_2_pane_g1

0xadaf,	// (0x0006be81) call5_swipe_2_pane_g2_ParamLimits

0xadaf,	// (0x0006be81) call5_swipe_2_pane_g2

0x0001,

0xfb37,	// (0x00070c09) call5_swipe_2_pane_g_ParamLimits

0xfb37,	// (0x00070c09) call5_swipe_2_pane_g

0xadbb,	// (0x0006be8d) call5_swipe_2_pane_t1_ParamLimits

0xadbb,	// (0x0006be8d) call5_swipe_2_pane_t1

0xc072,	// (0x0006d144) sc_swipe_pane_g1_ParamLimits

0xc072,	// (0x0006d144) sc_swipe_pane_g1

0xc080,	// (0x0006d152) sc_swipe_pane_g2_ParamLimits

0xc080,	// (0x0006d152) sc_swipe_pane_g2

0x0001,

0x0629,	// (0x000616fb) sc_swipe_pane_g_ParamLimits

0x0629,	// (0x000616fb) sc_swipe_pane_g

0xc0ba,	// (0x0006d18c) sc_swipe_pane_t1_ParamLimits

0xc0ba,	// (0x0006d18c) sc_swipe_pane_t1

0x9e54,	// (0x0006af26) main_cmail_launcher_pane

0x752c,	// (0x000685fe) aid_size_cell_cmail_l_ParamLimits

0x752c,	// (0x000685fe) aid_size_cell_cmail_l

0x753a,	// (0x0006860c) grid_cmail_l_pane_ParamLimits

0x753a,	// (0x0006860c) grid_cmail_l_pane

0x7554,	// (0x00068626) cell_cmail_l_pane_ParamLimits

0x7554,	// (0x00068626) cell_cmail_l_pane

0xadd0,	// (0x0006bea2) cell_cmail_l_pane_g1_ParamLimits

0xadd0,	// (0x0006bea2) cell_cmail_l_pane_g1

0xaddc,	// (0x0006beae) cell_cmail_l_pane_t1_ParamLimits

0xaddc,	// (0x0006beae) cell_cmail_l_pane_t1

0xadf2,	// (0x0006bec4) cell_cmail_l_pane_t2_ParamLimits

0xadf2,	// (0x0006bec4) cell_cmail_l_pane_t2

0x0001,

0xfb3c,	// (0x00070c0e) cell_cmail_l_pane_t_ParamLimits

0xfb3c,	// (0x00070c0e) cell_cmail_l_pane_t

0xc00b,	// (0x0006d0dd) grid_highlight_pane_cp018_ParamLimits

0xc00b,	// (0x0006d0dd) grid_highlight_pane_cp018

0x0b12,	// (0x00061be4) main2_pane_ParamLimits

0x0b12,	// (0x00061be4) main2_pane

0xc19d,	// (0x0006d26f) popup_sp_fs_action_menu_bg_pane_g1

0xc1a5,	// (0x0006d277) popup_sp_fs_action_menu_bg_pane_g2

0xc1ad,	// (0x0006d27f) popup_sp_fs_action_menu_bg_pane_g3

0xc1b5,	// (0x0006d287) popup_sp_fs_action_menu_bg_pane_g4

0xc1bd,	// (0x0006d28f) popup_sp_fs_action_menu_bg_pane_g5

0xc1c5,	// (0x0006d297) popup_sp_fs_action_menu_bg_pane_g6

0xc1cd,	// (0x0006d29f) popup_sp_fs_action_menu_bg_pane_g7

0xc1d5,	// (0x0006d2a7) popup_sp_fs_action_menu_bg_pane_g8

0xc1dd,	// (0x0006d2af) popup_sp_fs_action_menu_bg_pane_g9

0xc1e5,	// (0x0006d2b7) popup_sp_fs_action_menu_bg_pane_g10

0xc1e5,	// (0x0006d2b7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x000701d2) popup_sp_fs_action_menu_bg_pane_g

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g3_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g3_g1

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g3_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g3_g2

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g3_g3_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00070280) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00070280) list_medium_line_x2_t3_g3_g

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g3_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g3_t1

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g3_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g3_t2

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g3_t3_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00070287) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00070287) list_medium_line_x2_t3_g3_t

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g2_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g2_g1

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g2_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x0007028e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x0007028e) list_medium_line_x2_t3_g2_g

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g2_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g2_t1

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g2_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g2_t2

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g2_t3_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00070287) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00070287) list_medium_line_x2_t3_g2_t

0xc072,	// (0x0006d144) list_medium_line_x2_t4_g4_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t4_g4_g1

0xc072,	// (0x0006d144) list_medium_line_x2_t4_g4_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t4_g4_g2

0xc072,	// (0x0006d144) list_medium_line_x2_t4_g4_g3_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t4_g4_g3

0xc072,	// (0x0006d144) list_medium_line_x2_t4_g4_g4_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00070293) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00070293) list_medium_line_x2_t4_g4_g

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g4_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g4_t1

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g4_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g4_t2

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g4_t3_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g4_t3

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g4_t4_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x0007029c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x0007029c) list_medium_line_x2_t4_g4_t

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g4_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g4_g1

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g4_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g4_g2

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g4_g3_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g4_g3

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g4_g4_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00070293) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00070293) list_medium_line_x2_t2_g4_g

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t2_g4_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t2_g4_t1

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t2_g4_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x00070263) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x00070263) list_medium_line_x2_t2_g4_t

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g3_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g3_g1

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g3_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g3_g2

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g3_g3_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00070280) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00070280) list_medium_line_x2_t2_g3_g

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t2_g3_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t2_g3_t1

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t2_g3_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x00070263) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x00070263) list_medium_line_x2_t2_g3_t

0x24fb,	// (0x000635cd) main_sp_fs_list_pane_ParamLimits

0x24fb,	// (0x000635cd) main_sp_fs_list_pane

0x9f24,	// (0x0006aff6) sp_fs_scroll_pane_ParamLimits

0x9f24,	// (0x0006aff6) sp_fs_scroll_pane

0xc804,	// (0x0006d8d6) list_medium_line_x2_t3_t1

0xc804,	// (0x0006d8d6) list_medium_line_x2_t3_t2

0xc804,	// (0x0006d8d6) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x00070349) list_medium_line_x2_t3_t

0xc804,	// (0x0006d8d6) list_medium_line_x3_t4_t1

0xc804,	// (0x0006d8d6) list_medium_line_x3_t4_t2

0xc804,	// (0x0006d8d6) list_medium_line_x3_t4_t3

0xc804,	// (0x0006d8d6) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x00070350) list_medium_line_x3_t4_t

0xc804,	// (0x0006d8d6) list_medium_line_x4_t5_t1

0xc804,	// (0x0006d8d6) list_medium_line_x4_t5_t2

0xc804,	// (0x0006d8d6) list_medium_line_x4_t5_t3

0xc804,	// (0x0006d8d6) list_medium_line_x4_t5_t4

0xc804,	// (0x0006d8d6) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x00070359) list_medium_line_x4_t5_t

0xc072,	// (0x0006d144) list_medium_line_t4_g4_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t4_g4_g1

0xc072,	// (0x0006d144) list_medium_line_t4_g4_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t4_g4_g2

0xc072,	// (0x0006d144) list_medium_line_t4_g4_g3_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t4_g4_g3

0xc072,	// (0x0006d144) list_medium_line_t4_g4_g4_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00070293) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00070293) list_medium_line_t4_g4_g

0xc0ba,	// (0x0006d18c) list_medium_line_t4_g4_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t4_g4_t1

0xc0ba,	// (0x0006d18c) list_medium_line_t4_g4_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t4_g4_t2

0xc0ba,	// (0x0006d18c) list_medium_line_t4_g4_t3_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t4_g4_t3

0xc0ba,	// (0x0006d18c) list_medium_line_t4_g4_t4_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x0007029c) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x0007029c) list_medium_line_t4_g4_t

0x25a6,	// (0x00063678) chi_dic_find_pane_g1

0x3374,	// (0x00064446) main_tport_pane

0xc804,	// (0x0006d8d6) list_medium_line_plain_t1

0xc072,	// (0x0006d144) list_medium_line_t2_g2_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t2_g2_g1

0xc072,	// (0x0006d144) list_medium_line_t2_g2_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x0007028e) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x0007028e) list_medium_line_t2_g2_g

0xc0ba,	// (0x0006d18c) list_medium_line_t2_g2_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t2_g2_t1

0xc0ba,	// (0x0006d18c) list_medium_line_t2_g2_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x00070263) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x00070263) list_medium_line_t2_g2_t

0x6521,	// (0x000675f3) aid_sp_fs_list_icon_a_sm

0x6529,	// (0x000675fb) aid_sp_fs_list_icon_d

0x6531,	// (0x00067603) aid_sp_fs_text_primary

0x653a,	// (0x0006760c) aid_sp_fs_text_secondary

0xb963,	// (0x0006ca35) list_medium_line

0xb963,	// (0x0006ca35) list_medium_line_g2

0xb963,	// (0x0006ca35) list_medium_line_g3

0xb963,	// (0x0006ca35) list_medium_line_plain

0xb963,	// (0x0006ca35) list_medium_line_plain_t2

0xb963,	// (0x0006ca35) list_medium_line_plain_t3

0xb963,	// (0x0006ca35) list_medium_line_right_icon

0xb963,	// (0x0006ca35) list_medium_line_right_iconx2

0xb963,	// (0x0006ca35) list_medium_line_t2

0xb963,	// (0x0006ca35) list_medium_line_t2_g2

0xb963,	// (0x0006ca35) list_medium_line_t2_g3

0xb963,	// (0x0006ca35) list_medium_line_t2_right_icon

0xb963,	// (0x0006ca35) list_medium_line_t2_right_iconx2

0xb963,	// (0x0006ca35) list_medium_line_t3

0xb963,	// (0x0006ca35) list_medium_line_t3_g2

0xb963,	// (0x0006ca35) list_medium_line_t3_g3

0xb963,	// (0x0006ca35) list_medium_line_t3_right_iconx2

0xb963,	// (0x0006ca35) list_medium_line_t4_g4

0xb963,	// (0x0006ca35) list_medium_line_x2

0xb963,	// (0x0006ca35) list_medium_line_x2_t2_g2

0xb963,	// (0x0006ca35) list_medium_line_x2_t2_g3

0xb963,	// (0x0006ca35) list_medium_line_x2_t2_g4

0xb963,	// (0x0006ca35) list_medium_line_x2_t3

0xb963,	// (0x0006ca35) list_medium_line_x2_t3_g2

0xb963,	// (0x0006ca35) list_medium_line_x2_t3_g3

0xb963,	// (0x0006ca35) list_medium_line_x2_t3_g4

0xb963,	// (0x0006ca35) list_medium_line_x2_t4_g2

0xb963,	// (0x0006ca35) list_medium_line_x2_t4_g4

0xb963,	// (0x0006ca35) list_medium_line_x3

0xb963,	// (0x0006ca35) list_medium_line_x3_t4

0xb963,	// (0x0006ca35) list_medium_line_x3_t4_g4

0xb963,	// (0x0006ca35) list_medium_line_x4_t4

0xb963,	// (0x0006ca35) list_medium_line_x4_t4_g7

0xb963,	// (0x0006ca35) list_medium_line_x4_t5

0x6543,	// (0x00067615) list_single_fs_dyc_pane_ParamLimits

0x6543,	// (0x00067615) list_single_fs_dyc_pane

0xc072,	// (0x0006d144) list_medium_line_x4_t4_g7_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x4_t4_g7_g1

0xc072,	// (0x0006d144) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x4_t4_g7_g2

0xc072,	// (0x0006d144) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x4_t4_g7_g3

0xc072,	// (0x0006d144) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x4_t4_g7_g4

0xc072,	// (0x0006d144) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x4_t4_g7_g5

0xc072,	// (0x0006d144) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x4_t4_g7_g6

0xc080,	// (0x0006d152) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc080,	// (0x0006d152) list_medium_line_x4_t4_g7_g7

0x0006,

0x0536,	// (0x00061608) list_medium_line_x4_t4_g7_g_ParamLimits

0x0536,	// (0x00061608) list_medium_line_x4_t4_g7_g

0xc0ba,	// (0x0006d18c) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x4_t4_g7_t1

0xc0ba,	// (0x0006d18c) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x4_t4_g7_t2

0xc0ba,	// (0x0006d18c) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x4_t4_g7_t3

0xc0ce,	// (0x0006d1a0) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc0ce,	// (0x0006d1a0) list_medium_line_x4_t4_g7_t4

0xc0ce,	// (0x0006d1a0) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc0ce,	// (0x0006d1a0) list_medium_line_x4_t4_g7_t5

0x0004,

0x0545,	// (0x00061617) list_medium_line_x4_t4_g7_t_ParamLimits

0x0545,	// (0x00061617) list_medium_line_x4_t4_g7_t

0x6f85,	// (0x00068057) list_single_dyc_row_pane_ParamLimits

0x6f85,	// (0x00068057) list_single_dyc_row_pane

0x74ad,	// (0x0006857f) call5_gesture_pane_ParamLimits

0x74ad,	// (0x0006857f) call5_gesture_pane

0x7503,	// (0x000685d5) call5_windows_pane_ParamLimits

0x7503,	// (0x000685d5) call5_windows_pane

0x756e,	// (0x00068640) call5_swipe_1_pane_cp_ParamLimits

0x756e,	// (0x00068640) call5_swipe_1_pane_cp

0x757a,	// (0x0006864c) call5_swipe_2_pane_cp_ParamLimits

0x757a,	// (0x0006864c) call5_swipe_2_pane_cp

0xc2c0,	// (0x0006d392) call5_image_pane_cp

0x7586,	// (0x00068658) popup_call5_audio_first_window_cp_ParamLimits

0x7586,	// (0x00068658) popup_call5_audio_first_window_cp

0xae0f,	// (0x0006bee1) call5_swipe_1_pane_g1_cp_ParamLimits

0xae0f,	// (0x0006bee1) call5_swipe_1_pane_g1_cp

0xae1c,	// (0x0006beee) call5_swipe_1_pane_g2_cp

0xae24,	// (0x0006bef6) call5_swipe_1_pane_t1_cp_ParamLimits

0xae24,	// (0x0006bef6) call5_swipe_1_pane_t1_cp

0xae0f,	// (0x0006bee1) call5_swipe_2_pane_g1_cp_ParamLimits

0xae0f,	// (0x0006bee1) call5_swipe_2_pane_g1_cp

0xae39,	// (0x0006bf0b) call5_swipe_2_pane_g2_cp

0xae41,	// (0x0006bf13) call5_swipe_2_pane_t1_cp_ParamLimits

0xae41,	// (0x0006bf13) call5_swipe_2_pane_t1_cp

0xc00b,	// (0x0006d0dd) main_sp_fs_email_pane

0xae56,	// (0x0006bf28) main_sp_fs_listscroll_pane_te

0x7594,	// (0x00068666) popup_sp_fs_action_menu_pane_ParamLimits

0x7594,	// (0x00068666) popup_sp_fs_action_menu_pane

0xc0b0,	// (0x0006d182) bg_sp_fs_ctrlbar_pane_g1

0xae5f,	// (0x0006bf31) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xae68,	// (0x0006bf3a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe465,	// (0x0006f537) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc0b0,	// (0x0006d182) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb41,	// (0x00070c13) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe69e,	// (0x0006f770) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe69e,	// (0x0006f770) bg_sp_fs_ctrlbar_ddmenu_pane

0xae71,	// (0x0006bf43) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xae71,	// (0x0006bf43) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xae7d,	// (0x0006bf4f) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xae7d,	// (0x0006bf4f) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb4a,	// (0x00070c1c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb4a,	// (0x00070c1c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xae89,	// (0x0006bf5b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xae89,	// (0x0006bf5b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc0b0,	// (0x0006d182) list_medium_line_t2_right_icon_g1

0xc804,	// (0x0006d8d6) list_medium_line_t2_right_icon_t1

0xc804,	// (0x0006d8d6) list_medium_line_t2_right_icon_t2

0x0001,

0xfb4f,	// (0x00070c21) list_medium_line_t2_right_icon_t

0xd1c5,	// (0x0006e297) bg_sp_fs_ctrlbar_pane_ParamLimits

0xd1c5,	// (0x0006e297) bg_sp_fs_ctrlbar_pane

0x761e,	// (0x000686f0) main_sp_fs_ctrlbar_button_pane_cp01

0x7628,	// (0x000686fa) main_sp_fs_ctrlbar_ddmenu_pane

0xaedb,	// (0x0006bfad) main_sp_fs_ctrlbar_pane_g1

0xaee7,	// (0x0006bfb9) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb54,	// (0x00070c26) main_sp_fs_ctrlbar_pane_g

0x7666,	// (0x00068738) main_sp_fs_ctrlbar_pane_t1

0x76a5,	// (0x00068777) main_sp_fs_ctrlbar_pane

0x76c9,	// (0x0006879b) main_sp_fs_listscroll_pane_te_cp01

0x76f3,	// (0x000687c5) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x76f3,	// (0x000687c5) popup_sp_fs_action_menu_pane_cp01

0xc00b,	// (0x0006d0dd) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xc00b,	// (0x0006d0dd) bg_sp_fs_highlight_list_pane_cp01

0x7718,	// (0x000687ea) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x7718,	// (0x000687ea) sp_fs_action_menu_list_gene_pane_g1

0xaf0e,	// (0x0006bfe0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xaf0e,	// (0x0006bfe0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb62,	// (0x00070c34) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb62,	// (0x00070c34) sp_fs_action_menu_list_gene_pane_g

0x7727,	// (0x000687f9) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7727,	// (0x000687f9) sp_fs_action_menu_list_gene_pane_t1

0x773f,	// (0x00068811) sp_fs_action_menu_list_gene_pane_ParamLimits

0x773f,	// (0x00068811) sp_fs_action_menu_list_gene_pane

0xaf1b,	// (0x0006bfed) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xaf1b,	// (0x0006bfed) popup_sp_fs_action_menu_bg_pane

0x775e,	// (0x00068830) sp_fs_action_menu_list_pane_ParamLimits

0x775e,	// (0x00068830) sp_fs_action_menu_list_pane

0x777e,	// (0x00068850) sp_fs_scroll_pane_cp01_ParamLimits

0x777e,	// (0x00068850) sp_fs_scroll_pane_cp01

0xc804,	// (0x0006d8d6) list_medium_line_plain_t2_t1

0xc804,	// (0x0006d8d6) list_medium_line_plain_t2_t2

0x0001,

0xfb4f,	// (0x00070c21) list_medium_line_plain_t2_t

0xc804,	// (0x0006d8d6) list_medium_line_plain_t3_t1

0xc804,	// (0x0006d8d6) list_medium_line_plain_t3_t2

0xc804,	// (0x0006d8d6) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x00070349) list_medium_line_plain_t3_t

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g2_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g2_g1

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g2_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x0007028e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x0007028e) list_medium_line_x2_t2_g2_g

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t2_g2_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t2_g2_t1

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t2_g2_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x00070263) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x00070263) list_medium_line_x2_t2_g2_t

0xc072,	// (0x0006d144) list_medium_line_x2_t4_g2_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t4_g2_g1

0xc072,	// (0x0006d144) list_medium_line_x2_t4_g2_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x0007028e) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x0007028e) list_medium_line_x2_t4_g2_g

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g2_t1

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g2_t2

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g2_t3

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g2_t4_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x0007029c) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x0007029c) list_medium_line_x2_t4_g2_t

0xc0b0,	// (0x0006d182) list_medium_line_t3_right_iconx2_g1

0xc0b0,	// (0x0006d182) list_medium_line_t3_right_iconx2_g2

0xc0b0,	// (0x0006d182) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x00070465) list_medium_line_t3_right_iconx2_g

0xc804,	// (0x0006d8d6) list_medium_line_t3_right_iconx2_t1

0xc804,	// (0x0006d8d6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb4f,	// (0x00070c21) list_medium_line_t3_right_iconx2_t

0xc072,	// (0x0006d144) list_medium_line_x3_t4_g4_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x3_t4_g4_g1

0xc072,	// (0x0006d144) list_medium_line_x3_t4_g4_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x3_t4_g4_g2

0xc072,	// (0x0006d144) list_medium_line_x3_t4_g4_g3_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x3_t4_g4_g3

0xc072,	// (0x0006d144) list_medium_line_x3_t4_g4_g4_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00070293) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00070293) list_medium_line_x3_t4_g4_g

0xc0ba,	// (0x0006d18c) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x3_t4_g4_t1

0xc0ba,	// (0x0006d18c) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x3_t4_g4_t2

0xc0ba,	// (0x0006d18c) list_medium_line_x3_t4_g4_t3_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x3_t4_g4_t3

0xc0ba,	// (0x0006d18c) list_medium_line_x3_t4_g4_t4_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x0007029c) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x0007029c) list_medium_line_x3_t4_g4_t

0x77a4,	// (0x00068876) list_single_dyc_row_text_pane_t1_ParamLimits

0x77a4,	// (0x00068876) list_single_dyc_row_text_pane_t1

0x77ed,	// (0x000688bf) list_single_dyc_row_text_pane_t2_ParamLimits

0x77ed,	// (0x000688bf) list_single_dyc_row_text_pane_t2

0x7863,	// (0x00068935) list_single_dyc_row_text_pane_t3_ParamLimits

0x7863,	// (0x00068935) list_single_dyc_row_text_pane_t3

0x0005,

0xfb67,	// (0x00070c39) list_single_dyc_row_text_pane_t_ParamLimits

0xfb67,	// (0x00070c39) list_single_dyc_row_text_pane_t

0x7946,	// (0x00068a18) list_single_dyc_row_pane_g1_ParamLimits

0x7946,	// (0x00068a18) list_single_dyc_row_pane_g1

0x7952,	// (0x00068a24) list_single_dyc_row_pane_g2_ParamLimits

0x7952,	// (0x00068a24) list_single_dyc_row_pane_g2

0x795e,	// (0x00068a30) list_single_dyc_row_pane_g3_ParamLimits

0x795e,	// (0x00068a30) list_single_dyc_row_pane_g3

0x796a,	// (0x00068a3c) list_single_dyc_row_pane_g4_ParamLimits

0x796a,	// (0x00068a3c) list_single_dyc_row_pane_g4

0x0003,

0xfb74,	// (0x00070c46) list_single_dyc_row_pane_g_ParamLimits

0xfb74,	// (0x00070c46) list_single_dyc_row_pane_g

0x7976,	// (0x00068a48) list_single_dyc_row_text_pane_ParamLimits

0x7976,	// (0x00068a48) list_single_dyc_row_text_pane

0xb963,	// (0x0006ca35) bg_sp_fs_scroll_pane

0xaf29,	// (0x0006bffb) thumb_sp_fs_scroll_pane

0xc072,	// (0x0006d144) list_medium_line_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_g1

0xc0ba,	// (0x0006d18c) list_medium_line_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t1

0xc072,	// (0x0006d144) list_medium_line_x2_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_g1

0xc072,	// (0x0006d144) list_medium_line_x2_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x0007028e) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x0007028e) list_medium_line_x2_g

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t1

0xc072,	// (0x0006d144) list_medium_line_x3_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x3_g1

0xa468,	// (0x0006b53a) list_medium_line_x3_g2_ParamLimits

0xa468,	// (0x0006b53a) list_medium_line_x3_g2

0x0001,

0xfb7d,	// (0x00070c4f) list_medium_line_x3_g_ParamLimits

0xfb7d,	// (0x00070c4f) list_medium_line_x3_g

0xaf32,	// (0x0006c004) list_medium_line_x3_t1_ParamLimits

0xaf32,	// (0x0006c004) list_medium_line_x3_t1

0xaf46,	// (0x0006c018) thumb_sp_fs_scroll_pane_g1

0xaf4f,	// (0x0006c021) thumb_sp_fs_scroll_pane_g2

0xaf58,	// (0x0006c02a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfb82,	// (0x00070c54) thumb_sp_fs_scroll_pane_g

0xaf46,	// (0x0006c018) bg_sp_fs_scroll_pane_g1

0xaf4f,	// (0x0006c021) bg_sp_fs_scroll_pane_g2

0xaf58,	// (0x0006c02a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfb82,	// (0x00070c54) bg_sp_fs_scroll_pane_g

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g4_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g4_g1

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g4_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g4_g2

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g4_g3_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g4_g3

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g4_g4_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00070293) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00070293) list_medium_line_x2_t3_g4_g

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g4_t1

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g4_t2

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g4_t3_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00070287) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00070287) list_medium_line_x2_t3_g4_t

0xc072,	// (0x0006d144) list_medium_line_g2_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_g2_g1

0xc072,	// (0x0006d144) list_medium_line_g2_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x0007028e) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x0007028e) list_medium_line_g2_g

0xc0ba,	// (0x0006d18c) list_medium_line_g2_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_g2_t1

0xc072,	// (0x0006d144) list_medium_line_t3_g2_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t3_g2_g1

0xc072,	// (0x0006d144) list_medium_line_t3_g2_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x0007028e) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x0007028e) list_medium_line_t3_g2_g

0xc0ba,	// (0x0006d18c) list_medium_line_t3_g2_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t3_g2_t1

0xc0ba,	// (0x0006d18c) list_medium_line_t3_g2_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t3_g2_t2

0xc0ba,	// (0x0006d18c) list_medium_line_t3_g2_t3_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00070287) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00070287) list_medium_line_t3_g2_t

0xc0b0,	// (0x0006d182) list_medium_line_right_icon_g1

0xc804,	// (0x0006d8d6) list_medium_line_right_icon_t1

0xc072,	// (0x0006d144) list_medium_line_t2_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t2_g1

0xc0ba,	// (0x0006d18c) list_medium_line_t2_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t2_t1

0xc0ba,	// (0x0006d18c) list_medium_line_t2_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x00070263) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x00070263) list_medium_line_t2_t

0xc072,	// (0x0006d144) list_medium_line_t3_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t3_g1

0xc0ba,	// (0x0006d18c) list_medium_line_t3_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t3_t1

0xc0ba,	// (0x0006d18c) list_medium_line_t3_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t3_t2

0xc0ba,	// (0x0006d18c) list_medium_line_t3_t3_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00070287) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00070287) list_medium_line_t3_t

0xc072,	// (0x0006d144) list_medium_line_g3_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_g3_g1

0xc072,	// (0x0006d144) list_medium_line_g3_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_g3_g2

0xc072,	// (0x0006d144) list_medium_line_g3_g3_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00070280) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00070280) list_medium_line_g3_g

0xc0ba,	// (0x0006d18c) list_medium_line_g3_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_g3_t1

0xc072,	// (0x0006d144) list_medium_line_t2_g3_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t2_g3_g1

0xc072,	// (0x0006d144) list_medium_line_t2_g3_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t2_g3_g2

0xc072,	// (0x0006d144) list_medium_line_t2_g3_g3_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00070280) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00070280) list_medium_line_t2_g3_g

0xc0ba,	// (0x0006d18c) list_medium_line_t2_g3_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t2_g3_t1

0xc0ba,	// (0x0006d18c) list_medium_line_t2_g3_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x00070263) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x00070263) list_medium_line_t2_g3_t

0xc072,	// (0x0006d144) list_medium_line_t3_g3_g1_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t3_g3_g1

0xc072,	// (0x0006d144) list_medium_line_t3_g3_g2_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t3_g3_g2

0xc072,	// (0x0006d144) list_medium_line_t3_g3_g3_ParamLimits

0xc072,	// (0x0006d144) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00070280) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00070280) list_medium_line_t3_g3_g

0xc0ba,	// (0x0006d18c) list_medium_line_t3_g3_t1_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t3_g3_t1

0xc0ba,	// (0x0006d18c) list_medium_line_t3_g3_t2_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t3_g3_t2

0xc0ba,	// (0x0006d18c) list_medium_line_t3_g3_t3_ParamLimits

0xc0ba,	// (0x0006d18c) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00070287) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00070287) list_medium_line_t3_g3_t

0xc0b0,	// (0x0006d182) list_medium_line_right_iconx2_g1

0xc0b0,	// (0x0006d182) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00070181) list_medium_line_right_iconx2_g

0xc804,	// (0x0006d8d6) list_medium_line_right_iconx2_t1

0xc0b0,	// (0x0006d182) list_medium_line_t2_right_iconx2_g1

0xc0b0,	// (0x0006d182) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00070181) list_medium_line_t2_right_iconx2_g

0xc804,	// (0x0006d8d6) list_medium_line_t2_right_iconx2_t1

0xc804,	// (0x0006d8d6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb4f,	// (0x00070c21) list_medium_line_t2_right_iconx2_t

0xc804,	// (0x0006d8d6) list_medium_line_x4_t4_t1

0xc804,	// (0x0006d8d6) list_medium_line_x4_t4_t2

0xc804,	// (0x0006d8d6) list_medium_line_x4_t4_t3

0xc804,	// (0x0006d8d6) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x00070350) list_medium_line_x4_t4_t

0x79d8,	// (0x00068aaa) tport_appsw_pane_ParamLimits

0x79d8,	// (0x00068aaa) tport_appsw_pane

0x79f0,	// (0x00068ac2) tport_contact_pane_ParamLimits

0x79f0,	// (0x00068ac2) tport_contact_pane

0x7a08,	// (0x00068ada) tport_listscroll_pane_ParamLimits

0x7a08,	// (0x00068ada) tport_listscroll_pane

0x7a22,	// (0x00068af4) cell_tport_appsw_pane_ParamLimits

0x7a22,	// (0x00068af4) cell_tport_appsw_pane

0xd1a3,	// (0x0006e275) tport_appsw_pane_g1_ParamLimits

0xd1a3,	// (0x0006e275) tport_appsw_pane_g1

0xaf61,	// (0x0006c033) tport_contact_pane_g1

0xaf6a,	// (0x0006c03c) tport_contact_pane_t1

0xaf78,	// (0x0006c04a) tport_contact_pane_t2

0x0001,

0xfb89,	// (0x00070c5b) tport_contact_pane_t

0xaf86,	// (0x0006c058) list_tport_pane

0xaf8f,	// (0x0006c061) scroll_pane_cp_030

0x7a6a,	// (0x00068b3c) cell_tport_appsw_pane_g1

0x7a7a,	// (0x00068b4c) cell_tport_appsw_pane_t1

0x7a88,	// (0x00068b5a) grid_highlight_pane_cp019

0x7a90,	// (0x00068b62) list_tport_double_graphic_pane_ParamLimits

0x7a90,	// (0x00068b62) list_tport_double_graphic_pane

0xc00b,	// (0x0006d0dd) list_highlight_pane_cp023_ParamLimits

0xc00b,	// (0x0006d0dd) list_highlight_pane_cp023

0x7a9d,	// (0x00068b6f) list_tport_double_graphic_pane_g1_ParamLimits

0x7a9d,	// (0x00068b6f) list_tport_double_graphic_pane_g1

0x7aaa,	// (0x00068b7c) list_tport_double_graphic_pane_t1_ParamLimits

0x7aaa,	// (0x00068b7c) list_tport_double_graphic_pane_t1

0x7abf,	// (0x00068b91) list_tport_double_graphic_pane_t2_ParamLimits

0x7abf,	// (0x00068b91) list_tport_double_graphic_pane_t2

0x0001,

0xfb95,	// (0x00070c67) list_tport_double_graphic_pane_t_ParamLimits

0xfb95,	// (0x00070c67) list_tport_double_graphic_pane_t

0xb963,	// (0x0006ca35) main_cale_note_pane

0x50e4,	// (0x000661b6) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x50e4,	// (0x000661b6) cell_vitu2_function_top_wide_pane_cp01

0x7321,	// (0x000683f3) wait_bar_pane_cp05_ParamLimits

0xc00b,	// (0x0006d0dd) listscroll_cmail_pane

0xafa0,	// (0x0006c072) list_cmail_pane

0x7ad1,	// (0x00068ba3) list_cmail_body_pane

0x7ae7,	// (0x00068bb9) list_single_cmail_header_caption_pane

0x7afe,	// (0x00068bd0) list_single_cmail_header_detail_pane_ParamLimits

0x7afe,	// (0x00068bd0) list_single_cmail_header_detail_pane

0xafb7,	// (0x0006c089) list_single_cmail_header_caption_pane_t1

0x7b2c,	// (0x00068bfe) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7b2c,	// (0x00068bfe) list_single_cmail_header_detail_pane_g1

0x7b44,	// (0x00068c16) list_single_cmail_header_detail_pane_g2_ParamLimits

0x7b44,	// (0x00068c16) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb9a,	// (0x00070c6c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb9a,	// (0x00070c6c) list_single_cmail_header_detail_pane_g

0x7b50,	// (0x00068c22) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7b50,	// (0x00068c22) list_single_cmail_header_detail_pane_t1

0x7bb2,	// (0x00068c84) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7bb2,	// (0x00068c84) list_single_cmail_header_editor_pane_bg

0xaaa7,	// (0x0006bb79) list_cmail_body_pane_g1

0xafdb,	// (0x0006c0ad) list_cmail_body_pane_t1

0x5233,	// (0x00066305) list_single_cmail_header_editor_pane_bg_g1

0xc4d9,	// (0x0006d5ab) list_single_cmail_header_editor_pane_bg_g1_copy1

0x5243,	// (0x00066315) list_single_cmail_header_editor_pane_bg_g1_copy2

0x523b,	// (0x0006630d) list_single_cmail_header_editor_pane_bg_g1_copy3

0x5bd9,	// (0x00066cab) list_single_cmail_header_editor_pane_bg_g1_copy4

0x5263,	// (0x00066335) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x5253,	// (0x00066325) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x525b,	// (0x0006632d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xc4b9,	// (0x0006d58b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7bcb,	// (0x00068c9d) calenote_gesture_pane_ParamLimits

0x7bcb,	// (0x00068c9d) calenote_gesture_pane

0x7beb,	// (0x00068cbd) calenote_window_pane_ParamLimits

0x7beb,	// (0x00068cbd) calenote_window_pane

0xafe9,	// (0x0006c0bb) popup_note_window_cp01

0x7c07,	// (0x00068cd9) calenote_swipe_1_pane_ParamLimits

0x7c07,	// (0x00068cd9) calenote_swipe_1_pane

0x757a,	// (0x0006864c) calenote_swipe_2_pane_ParamLimits

0x757a,	// (0x0006864c) calenote_swipe_2_pane

0xae0f,	// (0x0006bee1) calenote_swipe_1_pane_g1_ParamLimits

0xae0f,	// (0x0006bee1) calenote_swipe_1_pane_g1

0xaffb,	// (0x0006c0cd) calenote_swipe_1_pane_g2_ParamLimits

0xaffb,	// (0x0006c0cd) calenote_swipe_1_pane_g2

0x0001,

0xfba6,	// (0x00070c78) calenote_swipe_1_pane_g_ParamLimits

0xfba6,	// (0x00070c78) calenote_swipe_1_pane_g

0xb007,	// (0x0006c0d9) calenote_swipe_1_pane_t1_ParamLimits

0xb007,	// (0x0006c0d9) calenote_swipe_1_pane_t1

0xae0f,	// (0x0006bee1) calenote_swipe_2_pane_g1_ParamLimits

0xae0f,	// (0x0006bee1) calenote_swipe_2_pane_g1

0xb026,	// (0x0006c0f8) calenote_swipe_2_pane_g2_ParamLimits

0xb026,	// (0x0006c0f8) calenote_swipe_2_pane_g2

0x0001,

0xfbab,	// (0x00070c7d) calenote_swipe_2_pane_g_ParamLimits

0xfbab,	// (0x00070c7d) calenote_swipe_2_pane_g

0xb032,	// (0x0006c104) calenote_swipe_2_pane_t1_ParamLimits

0xb032,	// (0x0006c104) calenote_swipe_2_pane_t1

0xb963,	// (0x0006ca35) main_mup_navstr_pane

0x3f8c,	// (0x0006505e) main_mup3_pane_t7_ParamLimits

0x3f8c,	// (0x0006505e) main_mup3_pane_t7

0xa1c4,	// (0x0006b296) main_mp4_pane_g6_ParamLimits

0xa1c4,	// (0x0006b296) main_mp4_pane_g6

0xa3ee,	// (0x0006b4c0) main_image3_pane_t4_ParamLimits

0xa3ee,	// (0x0006b4c0) main_image3_pane_t4

0x7c1c,	// (0x00068cee) popup_navstr_preview_pane_ParamLimits

0x7c1c,	// (0x00068cee) popup_navstr_preview_pane

0x7c30,	// (0x00068d02) scroll_navstr_pane_ParamLimits

0x7c30,	// (0x00068d02) scroll_navstr_pane

0xb963,	// (0x0006ca35) bg_popup_preview_window_pane_cp04

0xb059,	// (0x0006c12b) popup_navstr_preview_pane_t1

0x7c44,	// (0x00068d16) scroll_navstr_pane_g1_ParamLimits

0x7c44,	// (0x00068d16) scroll_navstr_pane_g1

0x7c58,	// (0x00068d2a) scroll_navstr_pane_t1_ParamLimits

0x7c58,	// (0x00068d2a) scroll_navstr_pane_t1

0xaff2,	// (0x0006c0c4) bg_button_pane_cp014

0xaff2,	// (0x0006c0c4) bg_button_pane_cp030

0x7453,	// (0x00068525) list_double_fisheye_pane_g4_ParamLimits

0x7453,	// (0x00068525) list_double_fisheye_pane_g4

0x745f,	// (0x00068531) list_double_fisheye_pane_g5_ParamLimits

0x745f,	// (0x00068531) list_double_fisheye_pane_g5

0x9f24,	// (0x0006aff6) sp_fs_scroll_pane_cp03

0xaedb,	// (0x0006bfad) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xaee7,	// (0x0006bfb9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb54,	// (0x00070c26) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7666,	// (0x00068738) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xafaf,	// (0x0006c081) sp_fs_scroll_pane_cp02

0xc208,	// (0x0006d2da) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xc208,	// (0x0006d2da) popup_sp_fs_calendar_preview_list_single_pane

0xb963,	// (0x0006ca35) main_cam6_pano_pane

0x9e46,	// (0x0006af18) main_mup3_pane_ParamLimits

0xb963,	// (0x0006ca35) main_phacti_pane

0x71f4,	// (0x000682c6) bg_button_pane_cp11

0x720e,	// (0x000682e0) main_mobtv_info_pane_g2_ParamLimits

0x720e,	// (0x000682e0) main_mobtv_info_pane_g2

0x0001,

0xfac6,	// (0x00070b98) main_mobtv_info_pane_g_ParamLimits

0xfac6,	// (0x00070b98) main_mobtv_info_pane_g

0xc0ba,	// (0x0006d18c) sc_clock_pane_t5_ParamLimits

0xc0ba,	// (0x0006d18c) sc_clock_pane_t5

0xd1a3,	// (0x0006e275) main_radioblah_pane_g1_ParamLimits

0xd1b1,	// (0x0006e283) main_radioblah_pane_t3_ParamLimits

0xd1b1,	// (0x0006e283) main_radioblah_pane_t3

0xd1b1,	// (0x0006e283) main_radioblah_pane_t4_ParamLimits

0xd1b1,	// (0x0006e283) main_radioblah_pane_t4

0xc00b,	// (0x0006d0dd) main_radioblah_text_pane_ParamLimits

0xc00b,	// (0x0006d0dd) main_radioblah_text_pane

0xacec,	// (0x0006bdbe) main_radioblah_info_pane_g1_ParamLimits

0xad30,	// (0x0006be02) main_radioblah_info_pane_t4_ParamLimits

0xad30,	// (0x0006be02) main_radioblah_info_pane_t4

0xc00b,	// (0x0006d0dd) main_sp_fs_calendar_pane

0x7c6f,	// (0x00068d41) main_phacti_pane_g1

0x7c77,	// (0x00068d49) phacti_note_pane_ParamLimits

0x7c77,	// (0x00068d49) phacti_note_pane

0xb070,	// (0x0006c142) phacti_term_pane_ParamLimits

0xb070,	// (0x0006c142) phacti_term_pane

0xb085,	// (0x0006c157) phacti_note_pane_t1_ParamLimits

0xb085,	// (0x0006c157) phacti_note_pane_t1

0x7c8b,	// (0x00068d5d) phacti_term_pane_g1

0x7c93,	// (0x00068d65) phacti_term_pane_t1_ParamLimits

0x7c93,	// (0x00068d65) phacti_term_pane_t1

0xb09c,	// (0x0006c16e) popup_sp_fs_calendar_preview_list_single_pane_g1

0xb0a4,	// (0x0006c176) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfbb5,	// (0x00070c87) popup_sp_fs_calendar_preview_list_single_pane_g

0xb0ac,	// (0x0006c17e) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xb0ac,	// (0x0006c17e) popup_sp_fs_calendar_preview_list_single_pane_t1

0xb0c2,	// (0x0006c194) aid_popup_sp_fs_bg_corner_pane

0xc0b0,	// (0x0006d182) popup_sp_fs_calendar_preview_bg_pane_g1

0xb963,	// (0x0006ca35) popup_sp_fs_calendar_preview_bg_pane

0xb0ca,	// (0x0006c19c) popup_sp_fs_calendar_preview_list_pane

0xd1c5,	// (0x0006e297) bg_main_sp_fs_cale_pane_ParamLimits

0xd1c5,	// (0x0006e297) bg_main_sp_fs_cale_pane

0x7d27,	// (0x00068df9) listscroll_cale_mrui_pane_ParamLimits

0x7d27,	// (0x00068df9) listscroll_cale_mrui_pane

0x7d3c,	// (0x00068e0e) listscroll_sp_fs_schedule_track_pane

0x7d45,	// (0x00068e17) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x7d45,	// (0x00068e17) main_sp_fs_ctrlbar_pane_cp01

0xb0d2,	// (0x0006c1a4) main_sp_fs_ribbon_pane

0x7d58,	// (0x00068e2a) popup_sp_fs_cale_preview_window

0x7d6a,	// (0x00068e3c) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7d6a,	// (0x00068e3c) list_single_sp_fs_schedule_track_pane

0xc00b,	// (0x0006d0dd) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xc00b,	// (0x0006d0dd) bg_sp_fs_highlight_list_pane_cp03

0x7d7e,	// (0x00068e50) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7d7e,	// (0x00068e50) list_single_sp_fs_schedule_track_pane_g1

0x7d8a,	// (0x00068e5c) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7d8a,	// (0x00068e5c) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfbba,	// (0x00070c8c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfbba,	// (0x00070c8c) list_single_sp_fs_schedule_track_pane_g

0x7d96,	// (0x00068e68) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7d96,	// (0x00068e68) list_single_sp_fs_schedule_track_pane_t1

0x7db0,	// (0x00068e82) sp_fs_schedule_track_pane_ParamLimits

0x7db0,	// (0x00068e82) sp_fs_schedule_track_pane

0xb0da,	// (0x0006c1ac) sp_fs_schedule_track_pane_g1

0xb0e2,	// (0x0006c1b4) sp_fs_schedule_track_pane_g2

0xb0ea,	// (0x0006c1bc) sp_fs_schedule_track_pane_g3

0xb0f2,	// (0x0006c1c4) sp_fs_schedule_track_pane_g4

0xb0fa,	// (0x0006c1cc) sp_fs_schedule_track_pane_g5

0x0004,

0xfbbf,	// (0x00070c91) sp_fs_schedule_track_pane_g

0x5233,	// (0x00066305) bg_sp_fs_schedule_viewer_highlight_g1

0xc4d9,	// (0x0006d5ab) bg_sp_fs_schedule_viewer_highlight_g2

0x523b,	// (0x0006630d) bg_sp_fs_schedule_viewer_highlight_g3

0x5243,	// (0x00066315) bg_sp_fs_schedule_viewer_highlight_g4

0x5bd9,	// (0x00066cab) bg_sp_fs_schedule_viewer_highlight_g5

0x5253,	// (0x00066325) bg_sp_fs_schedule_viewer_highlight_g6

0x525b,	// (0x0006632d) bg_sp_fs_schedule_viewer_highlight_g7

0x5263,	// (0x00066335) bg_sp_fs_schedule_viewer_highlight_g8

0xc4b9,	// (0x0006d58b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfbca,	// (0x00070c9c) bg_sp_fs_schedule_viewer_highlight_g

0xb963,	// (0x0006ca35) bg_main_sp_fs_ribbon_pane

0x7dc1,	// (0x00068e93) main_sp_fs_ribbon_pane_g1

0xb102,	// (0x0006c1d4) main_sp_fs_ribbon_pane_t1

0x7dca,	// (0x00068e9c) main_sp_fs_ribbon_pane_t2

0xb111,	// (0x0006c1e3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfbdd,	// (0x00070caf) main_sp_fs_ribbon_pane_t

0xb120,	// (0x0006c1f2) main_sp_fs_ribbon_scheduler_pane

0xb128,	// (0x0006c1fa) bg_main_sp_fs_ribbon_pane_g1

0xb131,	// (0x0006c203) bg_main_sp_fs_ribbon_pane_g2

0xb13a,	// (0x0006c20c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfbe4,	// (0x00070cb6) bg_main_sp_fs_ribbon_pane_g

0xb142,	// (0x0006c214) main_sp_fs_ribbon_scheduler_pane_g1

0xb14b,	// (0x0006c21d) main_sp_fs_ribbon_scheduler_pane_g2

0xb154,	// (0x0006c226) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfbeb,	// (0x00070cbd) main_sp_fs_ribbon_scheduler_pane_g

0xb15d,	// (0x0006c22f) list_cale_mrui_pane

0x7dd9,	// (0x00068eab) sp_fs_scroll_pane_cp07_ParamLimits

0x7dd9,	// (0x00068eab) sp_fs_scroll_pane_cp07

0x7df5,	// (0x00068ec7) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7df5,	// (0x00068ec7) bg_sp_fs_schedule_viewer_highlight

0xb16a,	// (0x0006c23c) list_single_sp_fs_schedule_track_pane_cp01

0xb172,	// (0x0006c244) list_sp_fs_schedule_track_pane

0xb17a,	// (0x0006c24c) sp_fs_scroll_pane_cp06_ParamLimits

0xb17a,	// (0x0006c24c) sp_fs_scroll_pane_cp06

0xc0b0,	// (0x0006d182) bgmain_sp_fs_calendar_pane_g1

0x7e05,	// (0x00068ed7) list_single_cale_mrui_pane_ParamLimits

0x7e05,	// (0x00068ed7) list_single_cale_mrui_pane

0x7e26,	// (0x00068ef8) list_single_cale_mrui_row_pane_ParamLimits

0x7e26,	// (0x00068ef8) list_single_cale_mrui_row_pane

0x7e33,	// (0x00068f05) list_single_cale_mrui_row_pane_g1_ParamLimits

0x7e33,	// (0x00068f05) list_single_cale_mrui_row_pane_g1

0x7e6b,	// (0x00068f3d) list_single_cale_mrui_row_pane_t1_ParamLimits

0x7e6b,	// (0x00068f3d) list_single_cale_mrui_row_pane_t1

0x7e7d,	// (0x00068f4f) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7e7d,	// (0x00068f4f) list_single_cale_mrui_row_pane_t2

0x7ee5,	// (0x00068fb7) list_single_cale_mrui_row_pane_t3_ParamLimits

0x7ee5,	// (0x00068fb7) list_single_cale_mrui_row_pane_t3

0x7f14,	// (0x00068fe6) list_single_cale_mrui_row_pane_t4_ParamLimits

0x7f14,	// (0x00068fe6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfbf9,	// (0x00070ccb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfbf9,	// (0x00070ccb) list_single_cale_mrui_row_pane_t

0x7f43,	// (0x00069015) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7f43,	// (0x00069015) list_single_cmail_header_editor_pane_bg_cp01

0x7f71,	// (0x00069043) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7f71,	// (0x00069043) list_single_cmail_header_editor_pane_bg_cp02

0xb199,	// (0x0006c26b) main_radioblah_text_pane_t1_ParamLimits

0xb199,	// (0x0006c26b) main_radioblah_text_pane_t1

0xb1b3,	// (0x0006c285) cam6_indi_pane_cp01

0xb1bb,	// (0x0006c28d) cam6_mode_pane_cp01

0xb1c3,	// (0x0006c295) cam6_pano_pane

0xb1cc,	// (0x0006c29e) cam6_zoom_pane_cp01

0xb1d4,	// (0x0006c2a6) cam6_pano_image_pane

0xb1df,	// (0x0006c2b1) cam6_pano_pane_g1

0xaaa7,	// (0x0006bb79) cam6_pano_pane_g2

0xb1e8,	// (0x0006c2ba) cam6_pano_pane_g3

0xb1f1,	// (0x0006c2c3) cam6_pano_pane_g4

0xeeaf,	// (0x0006ff81) cam6_pano_pane_g5

0xb1fa,	// (0x0006c2cc) cam6_pano_pane_g6

0xb204,	// (0x0006c2d6) cam6_pano_pane_g7

0xb20c,	// (0x0006c2de) cam6_pano_pane_g8

0xb215,	// (0x0006c2e7) cam6_pano_pane_g9

0x0008,

0xfc02,	// (0x00070cd4) cam6_pano_pane_g

0xb963,	// (0x0006ca35) main_browser_tag_pane

0xb051,	// (0x0006c123) grid_navstr_albumart_pane

0xb220,	// (0x0006c2f2) cell_navstr_albumart_pane_ParamLimits

0xb220,	// (0x0006c2f2) cell_navstr_albumart_pane

0xb240,	// (0x0006c312) cell_navstr_albumart_pane_g1

0xe2ec,	// (0x0006f3be) cell_navstr_albumart_pane_g2

0xe2fc,	// (0x0006f3ce) cell_navstr_albumart_pane_g3

0xe2f4,	// (0x0006f3c6) cell_navstr_albumart_pane_g4

0x0003,

0xfc15,	// (0x00070ce7) cell_navstr_albumart_pane_g

0x7f91,	// (0x00069063) bt_list_pane_ParamLimits

0x7f91,	// (0x00069063) bt_list_pane

0x7fa5,	// (0x00069077) bt_list_pane_t1

0x7fb4,	// (0x00069086) bt_list_pane_t2

0x0001,

0xfc1e,	// (0x00070cf0) bt_list_pane_t

0xb963,	// (0x0006ca35) main_cale_prevew_pane

0x7fc3,	// (0x00069095) popup_cale_preview_window_ParamLimits

0x7fc3,	// (0x00069095) popup_cale_preview_window

0xc00b,	// (0x0006d0dd) bg_popup_preview_window_pane_cp05_ParamLimits

0xc00b,	// (0x0006d0dd) bg_popup_preview_window_pane_cp05

0xb248,	// (0x0006c31a) list_cale_preview_pane_ParamLimits

0xb248,	// (0x0006c31a) list_cale_preview_pane

0x7fdc,	// (0x000690ae) list_double_cale_preview_pane_ParamLimits

0x7fdc,	// (0x000690ae) list_double_cale_preview_pane

0x526b,	// (0x0006633d) list_single_cale_preview_pane_ParamLimits

0x526b,	// (0x0006633d) list_single_cale_preview_pane

0x7fee,	// (0x000690c0) list_single_cale_preview_pane_g1

0x7ff6,	// (0x000690c8) list_single_cale_preview_pane_t1_ParamLimits

0x7ff6,	// (0x000690c8) list_single_cale_preview_pane_t1

0x800b,	// (0x000690dd) list_double_cale_preview_pane_g1

0x8013,	// (0x000690e5) list_double_cale_preview_pane_t1_ParamLimits

0x8013,	// (0x000690e5) list_double_cale_preview_pane_t1

0x8028,	// (0x000690fa) list_double_cale_preview_pane_t2_ParamLimits

0x8028,	// (0x000690fa) list_double_cale_preview_pane_t2

0x0001,

0xfc23,	// (0x00070cf5) list_double_cale_preview_pane_t_ParamLimits

0xfc23,	// (0x00070cf5) list_double_cale_preview_pane_t

0xb963,	// (0x0006ca35) main_ezdial_pane

0xc00b,	// (0x0006d0dd) main_sp_fs_email_pane_ParamLimits

0x75d6,	// (0x000686a8) cmail_ddmenu_btn01_pane_ParamLimits

0x75d6,	// (0x000686a8) cmail_ddmenu_btn01_pane

0x75e9,	// (0x000686bb) cmail_ddmenu_btn02_pane_ParamLimits

0x75e9,	// (0x000686bb) cmail_ddmenu_btn02_pane

0x760c,	// (0x000686de) cmail_ddmenu_btn03_pane_ParamLimits

0x760c,	// (0x000686de) cmail_ddmenu_btn03_pane

0x76a5,	// (0x00068777) main_sp_fs_ctrlbar_pane_ParamLimits

0x76c9,	// (0x0006879b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7ad1,	// (0x00068ba3) list_cmail_body_pane_ParamLimits

0xafc5,	// (0x0006c097) bg_button_pane_cp12

0xafce,	// (0x0006c0a0) list_single_cmail_header_detail_pane_g3_ParamLimits

0xafce,	// (0x0006c0a0) list_single_cmail_header_detail_pane_g3

0x7b8e,	// (0x00068c60) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7b8e,	// (0x00068c60) list_single_cmail_header_detail_pane_t2

0x0001,

0xfba1,	// (0x00070c73) list_single_cmail_header_detail_pane_t_ParamLimits

0xfba1,	// (0x00070c73) list_single_cmail_header_detail_pane_t

0x7ca8,	// (0x00068d7a) phacti_term_pane_t2_ParamLimits

0x7ca8,	// (0x00068d7a) phacti_term_pane_t2

0x0001,

0xfbb0,	// (0x00070c82) phacti_term_pane_t_ParamLimits

0xfbb0,	// (0x00070c82) phacti_term_pane_t

0xb254,	// (0x0006c326) aid_size_list_single_double

0x8040,	// (0x00069112) popup_ezdial_listscroll_window

0xb260,	// (0x0006c332) popup_number_entry_window_cp01

0xc2c0,	// (0x0006d392) bg_popup_call_pane_cp09

0xb26d,	// (0x0006c33f) ezdial_list_pane

0xb275,	// (0x0006c347) scroll_pane_cp23

0xd1c5,	// (0x0006e297) bg_button_pane_cp028_ParamLimits

0xd1c5,	// (0x0006e297) bg_button_pane_cp028

0x8057,	// (0x00069129) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8057,	// (0x00069129) cmail_ddmenu_btn01_pane_g1

0x8063,	// (0x00069135) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8063,	// (0x00069135) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc28,	// (0x00070cfa) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc28,	// (0x00070cfa) cmail_ddmenu_btn01_pane_g

0xb27d,	// (0x0006c34f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xb27d,	// (0x0006c34f) cmail_ddmenu_btn01_pane_t1

0xd1c5,	// (0x0006e297) bg_button_pane_cp029_ParamLimits

0xd1c5,	// (0x0006e297) bg_button_pane_cp029

0x806f,	// (0x00069141) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x806f,	// (0x00069141) cmail_ddmenu_btn02_pane_g1

0x8087,	// (0x00069159) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8087,	// (0x00069159) cmail_ddmenu_btn02_pane_t1

0xc00b,	// (0x0006d0dd) bg_button_pane_cp031_ParamLimits

0xc00b,	// (0x0006d0dd) bg_button_pane_cp031

0x806f,	// (0x00069141) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x806f,	// (0x00069141) cmail_ddmenu_btn03_pane_g1

0x8087,	// (0x00069159) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8087,	// (0x00069159) cmail_ddmenu_btn03_pane_t1

0xc0ba,	// (0x0006d18c) cell_dialer2_keypad_pane_t1_ParamLimits

0xeedd,	// (0x0006ffaf) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xeedd,	// (0x0006ffaf) cell_dialer2_keypad_pane_t1_copy1

0x7017,	// (0x000680e9) ncimui_group_button_pane

0xc00b,	// (0x0006d0dd) main_sp_fs_calendar_pane_ParamLimits

0x7ae7,	// (0x00068bb9) list_single_cmail_header_caption_pane_ParamLimits

0x7cdb,	// (0x00068dad) aid_recal_txt_sm_pane

0xb963,	// (0x0006ca35) mian_recal_day_pane

0x7d58,	// (0x00068e2a) popup_sp_fs_cale_preview_window_ParamLimits

0xb292,	// (0x0006c364) list_recal_day_pane

0x80c6,	// (0x00069198) list_single_recal_day_pane_ParamLimits

0x80c6,	// (0x00069198) list_single_recal_day_pane

0xb2b9,	// (0x0006c38b) list_single_recal_day_pane_g1_ParamLimits

0xb2b9,	// (0x0006c38b) list_single_recal_day_pane_g1

0x80d8,	// (0x000691aa) list_single_recal_day_pane_g2_ParamLimits

0x80d8,	// (0x000691aa) list_single_recal_day_pane_g2

0x80e4,	// (0x000691b6) list_single_recal_day_pane_g3_ParamLimits

0x80e4,	// (0x000691b6) list_single_recal_day_pane_g3

0x80f0,	// (0x000691c2) list_single_recal_day_pane_g4_ParamLimits

0x80f0,	// (0x000691c2) list_single_recal_day_pane_g4

0x80fe,	// (0x000691d0) list_single_recal_day_pane_g5_ParamLimits

0x80fe,	// (0x000691d0) list_single_recal_day_pane_g5

0x8114,	// (0x000691e6) list_single_recal_day_pane_g6_ParamLimits

0x8114,	// (0x000691e6) list_single_recal_day_pane_g6

0x0004,

0xfc37,	// (0x00070d09) list_single_recal_day_pane_g_ParamLimits

0xfc37,	// (0x00070d09) list_single_recal_day_pane_g

0x8128,	// (0x000691fa) list_single_recal_day_pane_t1

0x813a,	// (0x0006920c) list_single_recal_day_pane_t2

0x0001,

0xfc42,	// (0x00070d14) list_single_recal_day_pane_t

0x814c,	// (0x0006921e) ncimui_query_button_pane_ParamLimits

0x814c,	// (0x0006921e) ncimui_query_button_pane

0x815c,	// (0x0006922e) ncimui_query_button_pane_t1_ParamLimits

0x815c,	// (0x0006922e) ncimui_query_button_pane_t1

0xb2c5,	// (0x0006c397) ncimui_query_button_pane_t2_ParamLimits

0xb2c5,	// (0x0006c397) ncimui_query_button_pane_t2

0x0001,

0xfc47,	// (0x00070d19) ncimui_query_button_pane_t_ParamLimits

0xfc47,	// (0x00070d19) ncimui_query_button_pane_t

0x816f,	// (0x00069241) query_button_pane_ParamLimits

0x816f,	// (0x00069241) query_button_pane

0xb963,	// (0x0006ca35) bg_button_pane_cp0028

0xb2d8,	// (0x0006c3aa) query_button_pane_t1

0x3374,	// (0x00064446) main_tport_pane_ParamLimits

0x7995,	// (0x00068a67) bg_popup_window_pane_cp01_ParamLimits

0x7995,	// (0x00068a67) bg_popup_window_pane_cp01

0x79b0,	// (0x00068a82) heading_pane_cp08_ParamLimits

0x79b0,	// (0x00068a82) heading_pane_cp08

0x79c3,	// (0x00068a95) heading_pane_cp07_ParamLimits

0x79c3,	// (0x00068a95) heading_pane_cp07

0x7a6a,	// (0x00068b3c) cell_tport_appsw_pane_g2

0x0002,

0xfb8e,	// (0x00070c60) cell_tport_appsw_pane_g

0xd260,	// (0x0006e332) input_candi_list_open_g1

0xc6a5,	// (0x0006d777) list_cale_time_pane_g6_ParamLimits

0xc6a5,	// (0x0006d777) list_cale_time_pane_g6

0x3999,	// (0x00064a6b) aid_size_touch_calib_1_ParamLimits

0x3999,	// (0x00064a6b) aid_size_touch_calib_1

0x39ab,	// (0x00064a7d) aid_size_touch_calib_2_ParamLimits

0x39ab,	// (0x00064a7d) aid_size_touch_calib_2

0x39c3,	// (0x00064a95) aid_size_touch_calib_3_ParamLimits

0x39c3,	// (0x00064a95) aid_size_touch_calib_3

0x39e1,	// (0x00064ab3) aid_size_touch_calib_4_ParamLimits

0x39e1,	// (0x00064ab3) aid_size_touch_calib_4

0x39f9,	// (0x00064acb) main_touch_calib_button_group_pane_ParamLimits

0x39f9,	// (0x00064acb) main_touch_calib_button_group_pane

0x3a11,	// (0x00064ae3) main_touch_calib_pane_g1_ParamLimits

0x3a23,	// (0x00064af5) main_touch_calib_pane_g2_ParamLimits

0x3a35,	// (0x00064b07) main_touch_calib_pane_g3_ParamLimits

0x3a47,	// (0x00064b19) main_touch_calib_pane_g4_ParamLimits

0xf64c,	// (0x0007071e) main_touch_calib_pane_g_ParamLimits

0x3a59,	// (0x00064b2b) main_touch_calib_pane_t1_ParamLimits

0x3a73,	// (0x00064b45) main_touch_calib_pane_t2_ParamLimits

0x3a8d,	// (0x00064b5f) main_touch_calib_pane_t3_ParamLimits

0x3aa1,	// (0x00064b73) main_touch_calib_pane_t4_ParamLimits

0x3ab5,	// (0x00064b87) main_touch_calib_pane_t5_ParamLimits

0xf655,	// (0x00070727) main_touch_calib_pane_t_ParamLimits

0xec7d,	// (0x0006fd4f) list_single_fp_cale_pane_g3_ParamLimits

0xec7d,	// (0x0006fd4f) list_single_fp_cale_pane_g3

0x9e46,	// (0x0006af18) bg_button_pane_cp012_ParamLimits

0x9e46,	// (0x0006af18) bg_vkb2_func_pane_cp03_ParamLimits

0x5b95,	// (0x00066c67) cell_vitu2_function_top_pane_g1_ParamLimits

0x9e46,	// (0x0006af18) bg_vkb2_func_pane_cp04_ParamLimits

0x6fa2,	// (0x00068074) main_ncimui_button_group_pane_ParamLimits

0x6fa2,	// (0x00068074) main_ncimui_button_group_pane

0x7002,	// (0x000680d4) main_ncimui_pane_t3_ParamLimits

0x7002,	// (0x000680d4) main_ncimui_pane_t3

0xb067,	// (0x0006c139) phacti_button_group_pane

0xb254,	// (0x0006c326) aid_size_list_single_double_ParamLimits

0x8040,	// (0x00069112) popup_ezdial_listscroll_window_ParamLimits

0xb260,	// (0x0006c332) popup_number_entry_window_cp01_ParamLimits

0x8182,	// (0x00069254) phacti_button_pane_ParamLimits

0x8182,	// (0x00069254) phacti_button_pane

0xb963,	// (0x0006ca35) bg_button_pane_cp14

0xb2e6,	// (0x0006c3b8) phacti_button_pane_t1

0x8193,	// (0x00069265) main_touch_calib_button_pane_ParamLimits

0x8193,	// (0x00069265) main_touch_calib_button_pane

0xc10e,	// (0x0006d1e0) bg_button_pane_cp18_ParamLimits

0xc10e,	// (0x0006d1e0) bg_button_pane_cp18

0xb2f4,	// (0x0006c3c6) main_touch_calib_button_pane_t1_ParamLimits

0xb2f4,	// (0x0006c3c6) main_touch_calib_button_pane_t1

0xb30a,	// (0x0006c3dc) main_touch_calib_button_pane_t2_ParamLimits

0xb30a,	// (0x0006c3dc) main_touch_calib_button_pane_t2

0x0001,

0xfc4c,	// (0x00070d1e) main_touch_calib_button_pane_t_ParamLimits

0xfc4c,	// (0x00070d1e) main_touch_calib_button_pane_t

0xb963,	// (0x0006ca35) cell_ncimui_button_pane

0xb963,	// (0x0006ca35) bg_button_pane_cp032

0xb328,	// (0x0006c3fa) cell_ncimui_button_pane_t1

0xa3ce,	// (0x0006b4a0) image3_infobar_pane_ParamLimits

0xa3ce,	// (0x0006b4a0) image3_infobar_pane

0x7374,	// (0x00068446) fs_bigclock_status_pane_ParamLimits

0x7374,	// (0x00068446) fs_bigclock_status_pane

0x7381,	// (0x00068453) main_fs_bigclock_clock_pane_ParamLimits

0x7381,	// (0x00068453) main_fs_bigclock_clock_pane

0x739f,	// (0x00068471) main_fs_bigclock_indi_pane_ParamLimits

0x739f,	// (0x00068471) main_fs_bigclock_indi_pane

0x73d1,	// (0x000684a3) main_fs_bigclock_swipe_pane_ParamLimits

0x73d1,	// (0x000684a3) main_fs_bigclock_swipe_pane

0xb963,	// (0x0006ca35) main_fs_clock_dumped_data

0xabb4,	// (0x0006bc86) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xabb4,	// (0x0006bc86) list_single_fs_bigclock_indicator_pane_g1

0xabd0,	// (0x0006bca2) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xabd0,	// (0x0006bca2) list_single_fs_bigclock_indicator_pane_g2

0xabea,	// (0x0006bcbc) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xabea,	// (0x0006bcbc) list_single_fs_bigclock_indicator_pane_g3

0xac04,	// (0x0006bcd6) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xac04,	// (0x0006bcd6) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfafa,	// (0x00070bcc) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfafa,	// (0x00070bcc) list_single_fs_bigclock_indicator_pane_g

0xac2f,	// (0x0006bd01) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xac2f,	// (0x0006bd01) list_single_fs_bigclock_indicator_pane_t1

0xac57,	// (0x0006bd29) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xac57,	// (0x0006bd29) list_single_fs_bigclock_indicator_pane_t2

0xac7f,	// (0x0006bd51) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xac7f,	// (0x0006bd51) list_single_fs_bigclock_indicator_pane_t3

0xaca7,	// (0x0006bd79) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xaca7,	// (0x0006bd79) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb05,	// (0x00070bd7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb05,	// (0x00070bd7) list_single_fs_bigclock_indicator_pane_t

0xb336,	// (0x0006c408) image3_infobar_fav_pane_ParamLimits

0xb336,	// (0x0006c408) image3_infobar_fav_pane

0xb346,	// (0x0006c418) image3_infobar_loc_pane_ParamLimits

0xb346,	// (0x0006c418) image3_infobar_loc_pane

0xb35a,	// (0x0006c42c) image3_infobar_time_pane_ParamLimits

0xb35a,	// (0x0006c42c) image3_infobar_time_pane

0xc0b0,	// (0x0006d182) image3_infobar_time_pane_g1

0xb36a,	// (0x0006c43c) image3_infobar_time_pane_t1

0xc0b0,	// (0x0006d182) image3_infobar_loc_pane_g1

0xb378,	// (0x0006c44a) image3_infobar_loc_pane_g2

0x0001,

0xfc51,	// (0x00070d23) image3_infobar_loc_pane_g

0xb380,	// (0x0006c452) image3_infobar_loc_pane_t1

0xc0b0,	// (0x0006d182) image3_infobar_fav_pane_g1

0xb38e,	// (0x0006c460) image3_infobar_fav_pane_g2

0x0001,

0xfc56,	// (0x00070d28) image3_infobar_fav_pane_g

0xb396,	// (0x0006c468) fs_bigclock_status_battery_pane

0xb39f,	// (0x0006c471) fs_bigclock_status_signal_pane

0xb3a8,	// (0x0006c47a) fs_bigclock_status_title_pane

0xb3b1,	// (0x0006c483) fs_bigclock_status_signal_pane_g1

0xb3ba,	// (0x0006c48c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfc5b,	// (0x00070d2d) fs_bigclock_status_signal_pane_g

0xb3c2,	// (0x0006c494) fs_bigclock_status_battery_pane_g1

0xb3cb,	// (0x0006c49d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfc60,	// (0x00070d32) fs_bigclock_status_battery_pane_g

0xb3d3,	// (0x0006c4a5) fs_bigclock_status_title_pane_t1

0x81a8,	// (0x0006927a) main_fs_bigclock_clock_pane_g1

0x81a8,	// (0x0006927a) main_fs_bigclock_clock_pane_g2

0x81b9,	// (0x0006928b) main_fs_bigclock_clock_pane_g3

0x81b9,	// (0x0006928b) main_fs_bigclock_clock_pane_g4

0x0003,

0xfc65,	// (0x00070d37) main_fs_bigclock_clock_pane_g

0x81cc,	// (0x0006929e) main_fs_bigclock_clock_pane_t1

0x81e2,	// (0x000692b4) main_fs_bigclock_clock_pane_t2

0x0001,

0xfc6e,	// (0x00070d40) main_fs_bigclock_clock_pane_t

0xb3e1,	// (0x0006c4b3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xb3e1,	// (0x0006c4b3) list_single_fs_bigclock_indicator_pane

0xb3f2,	// (0x0006c4c4) list_single_fs_bigclock_pane_ParamLimits

0xb3f2,	// (0x0006c4c4) list_single_fs_bigclock_pane

0xb418,	// (0x0006c4ea) main_fs_bigclock_indicator_pane_t1

0xb427,	// (0x0006c4f9) list_single_fs_bigclock_pane_g1

0xb42f,	// (0x0006c501) list_single_fs_bigclock_pane_t1

0xc0b0,	// (0x0006d182) main_fs_bigclock_swipe_pane_g1

0xb472,	// (0x0006c544) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfc7f,	// (0x00070d51) main_fs_bigclock_swipe_pane_g

0xb47a,	// (0x0006c54c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xb47a,	// (0x0006c54c) main_fs_bigclock_swipe_pane_t1

0x2507,	// (0x000635d9) call_type_pane_ParamLimits

0xb963,	// (0x0006ca35) main_btmg_pane

0x7e5f,	// (0x00068f31) list_single_cale_mrui_row_pane_g2_ParamLimits

0x7e5f,	// (0x00068f31) list_single_cale_mrui_row_pane_g2

0x0002,

0xfbf2,	// (0x00070cc4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfbf2,	// (0x00070cc4) list_single_cale_mrui_row_pane_g

0x80b5,	// (0x00069187) list_recal_vselct_arw_lo_pane

0xb2b1,	// (0x0006c383) list_recal_vselct_arw_up_pane

0x80bd,	// (0x0006918f) list_recal_vselct_pane

0x823c,	// (0x0006930e) btmg_button_pane

0x8246,	// (0x00069318) main_btmg_pane_g1

0xb963,	// (0x0006ca35) bg_button_pane_cp044

0xb497,	// (0x0006c569) btmg_button_pane_t1

0xe47c,	// (0x0006f54e) aid_listscroll_gen

0xc00b,	// (0x0006d0dd) main_cntbar_detail_pane

0xaf98,	// (0x0006c06a) list_cmail_folder_pane

0x9f24,	// (0x0006aff6) sp_fs_scroll_pane_cp03_ParamLimits

0x7ae7,	// (0x00068bb9) list_single_fs_dyc_pane_cp01_ParamLimits

0x7ae7,	// (0x00068bb9) list_single_fs_dyc_pane_cp01

0xb4a5,	// (0x0006c577) aid_size_cmail_indent

0x8250,	// (0x00069322) list_single_dyc_row_pane_cp01

0x828b,	// (0x0006935d) cntbar_detail_list_pane_ParamLimits

0x828b,	// (0x0006935d) cntbar_detail_list_pane

0x82d7,	// (0x000693a9) main_cntbar_detail_cont_pane_ParamLimits

0x82d7,	// (0x000693a9) main_cntbar_detail_cont_pane

0x9f24,	// (0x0006aff6) scroll_pane_cp032_ParamLimits

0x9f24,	// (0x0006aff6) scroll_pane_cp032

0x82eb,	// (0x000693bd) cntbar_detail_list_event_pane_ParamLimits

0x82eb,	// (0x000693bd) cntbar_detail_list_event_pane

0x829b,	// (0x0006936d) cntbar_detail_list_shct_pane

0xc530,	// (0x0006d602) aid_list_gen

0xb4ae,	// (0x0006c580) aid_scroll

0xb4b7,	// (0x0006c589) aid_size_touch_scroll_bar

0xb4c0,	// (0x0006c592) aid_list_double

0x82fb,	// (0x000693cd) aid_list_single

0x82fb,	// (0x000693cd) aid_list_single_lg

0x8304,	// (0x000693d6) aid_list_z_g_a_sm

0x830c,	// (0x000693de) aid_list_z_g_d

0x8314,	// (0x000693e6) aid_txt_z_prm

0x8322,	// (0x000693f4) aid_txt_z_prm_cp01

0x8330,	// (0x00069402) aid_txt_z_sec

0x833e,	// (0x00069410) main_cntbar_detail_cont_pane_g1_ParamLimits

0x833e,	// (0x00069410) main_cntbar_detail_cont_pane_g1

0x8352,	// (0x00069424) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8352,	// (0x00069424) main_cntbar_detail_cont_pane_g2

0x0001,

0xfc84,	// (0x00070d56) main_cntbar_detail_cont_pane_g_ParamLimits

0xfc84,	// (0x00070d56) main_cntbar_detail_cont_pane_g

0xb4c9,	// (0x0006c59b) main_cntbar_detail_cont_pane_t1

0xb4d7,	// (0x0006c5a9) main_cntbar_detail_cont_pane_t2

0xb4e5,	// (0x0006c5b7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfc89,	// (0x00070d5b) main_cntbar_detail_cont_pane_t

0x8362,	// (0x00069434) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8362,	// (0x00069434) cell_cntbar_detail_list_shct_pane

0xb4f3,	// (0x0006c5c5) cntbar_detail_list_shct_pane_g1

0xb4fc,	// (0x0006c5ce) cntbar_detail_list_shct_pane_g2

0x0001,

0xfc90,	// (0x00070d62) cntbar_detail_list_shct_pane_g

0x8376,	// (0x00069448) cntbar_detail_list_event_pane_g1_ParamLimits

0x8376,	// (0x00069448) cntbar_detail_list_event_pane_g1

0x8382,	// (0x00069454) cntbar_detail_list_event_pane_g2_ParamLimits

0x8382,	// (0x00069454) cntbar_detail_list_event_pane_g2

0x0005,

0xfc95,	// (0x00070d67) cntbar_detail_list_event_pane_g_ParamLimits

0xfc95,	// (0x00070d67) cntbar_detail_list_event_pane_g

0x83ee,	// (0x000694c0) cntbar_detail_list_event_pane_t1_ParamLimits

0x83ee,	// (0x000694c0) cntbar_detail_list_event_pane_t1

0x8403,	// (0x000694d5) cntbar_detail_list_event_pane_t2_ParamLimits

0x8403,	// (0x000694d5) cntbar_detail_list_event_pane_t2

0x0002,

0xfca2,	// (0x00070d74) cntbar_detail_list_event_pane_t_ParamLimits

0xfca2,	// (0x00070d74) cntbar_detail_list_event_pane_t

0xc0b0,	// (0x0006d182) cell_cntbar_detail_list_shct_pane_g1

0xd0a4,	// (0x0006e176) navi_pane_mv_g3

0xc00b,	// (0x0006d0dd) main_cntbar_detail_pane_ParamLimits

0xb963,	// (0x0006ca35) main_notif_wgt_pane

0xa14e,	// (0x0006b220) aid_tch_main_mp4_pane_g4

0xa3c6,	// (0x0006b498) popup_slider_window_cp02

0x80ab,	// (0x0006917d) list_recal_day_event_pane

0x8259,	// (0x0006932b) cntbar_detail_btn_pane_ParamLimits

0x8259,	// (0x0006932b) cntbar_detail_btn_pane

0x8272,	// (0x00069344) cntbar_detail_btn_pane_cp01_ParamLimits

0x8272,	// (0x00069344) cntbar_detail_btn_pane_cp01

0x829b,	// (0x0006936d) cntbar_detail_list_shct_pane_ParamLimits

0x82ab,	// (0x0006937d) cntbar_detail_pane_g1_ParamLimits

0x82ab,	// (0x0006937d) cntbar_detail_pane_g1

0x82bb,	// (0x0006938d) cntbar_detail_pane_t1_ParamLimits

0x82bb,	// (0x0006938d) cntbar_detail_pane_t1

0x838e,	// (0x00069460) cntbar_detail_list_event_pane_g3_ParamLimits

0x838e,	// (0x00069460) cntbar_detail_list_event_pane_g3

0x83a6,	// (0x00069478) cntbar_detail_list_event_pane_g4_ParamLimits

0x83a6,	// (0x00069478) cntbar_detail_list_event_pane_g4

0x83be,	// (0x00069490) cntbar_detail_list_event_pane_g5_ParamLimits

0x83be,	// (0x00069490) cntbar_detail_list_event_pane_g5

0x83d6,	// (0x000694a8) cntbar_detail_list_event_pane_g6_ParamLimits

0x83d6,	// (0x000694a8) cntbar_detail_list_event_pane_g6

0x8418,	// (0x000694ea) cntbar_detail_list_event_pane_t3_ParamLimits

0x8418,	// (0x000694ea) cntbar_detail_list_event_pane_t3

0x842a,	// (0x000694fc) popup_notif_wgt_window_ParamLimits

0x842a,	// (0x000694fc) popup_notif_wgt_window

0x8443,	// (0x00069515) popup_submenu_window_cp01_ParamLimits

0x8443,	// (0x00069515) popup_submenu_window_cp01

0xc2c0,	// (0x0006d392) bg_popup_window_pane_cp10

0xb505,	// (0x0006c5d7) listscroll_notif_wgt_pane

0xb517,	// (0x0006c5e9) list_notif_wgt_window

0xb520,	// (0x0006c5f2) scroll_pane_cp033

0x8455,	// (0x00069527) list_notif_wgt_row_pane_ParamLimits

0x8455,	// (0x00069527) list_notif_wgt_row_pane

0xb529,	// (0x0006c5fb) aid_size_list_notif_wgt_del

0xb536,	// (0x0006c608) list_notif_wgt_row_pane_g1

0xb542,	// (0x0006c614) list_notif_wgt_row_pane_g2

0xb551,	// (0x0006c623) list_notif_wgt_row_pane_g3

0x0002,

0xfca9,	// (0x00070d7b) list_notif_wgt_row_pane_g

0xb55e,	// (0x0006c630) list_notif_wgt_row_pane_t1

0xb574,	// (0x0006c646) list_notif_wgt_row_pane_t2

0xb586,	// (0x0006c658) list_notif_wgt_row_pane_t3

0x0002,

0xfcb0,	// (0x00070d82) list_notif_wgt_row_pane_t

0x5c3b,	// (0x00066d0d) list_recal_day_event_pane_g1

0xb598,	// (0x0006c66a) list_recal_day_event_pane_t1

0xb963,	// (0x0006ca35) bg_button_pane_cp045

0x8465,	// (0x00069537) cntbar_detail_btn_pane_t1

0xd1c5,	// (0x0006e297) main_callh_pane_ParamLimits

0xd1c5,	// (0x0006e297) main_callh_pane

0xb963,	// (0x0006ca35) main_coverflow0_pane

0xb963,	// (0x0006ca35) main_wgtman_pane

0x73e9,	// (0x000684bb) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x73e9,	// (0x000684bb) main_fs_bigclock_unlock_btn_pane

0x7a62,	// (0x00068b34) bg_button_pane_cp16

0x7a72,	// (0x00068b44) cell_tport_appsw_pane_g3

0x8473,	// (0x00069545) cf0_flow_pane_ParamLimits

0x8473,	// (0x00069545) cf0_flow_pane

0xb5a7,	// (0x0006c679) listscroll_cf0_pane

0xb5b2,	// (0x0006c684) main_cf0_pane_g1

0x8488,	// (0x0006955a) main_cf0_pane_t1_ParamLimits

0x8488,	// (0x0006955a) main_cf0_pane_t1

0x849f,	// (0x00069571) main_cf0_pane_t2_ParamLimits

0x849f,	// (0x00069571) main_cf0_pane_t2

0x0001,

0xfcbc,	// (0x00070d8e) main_cf0_pane_t_ParamLimits

0xfcbc,	// (0x00070d8e) main_cf0_pane_t

0xb5c4,	// (0x0006c696) scroll_pane_cp11

0x84b6,	// (0x00069588) cf0_flow_pane_g1

0x84be,	// (0x00069590) cf0_flow_pane_g2

0x0001,

0xfcc1,	// (0x00070d93) cf0_flow_pane_g

0x84c6,	// (0x00069598) cf0_flow_pane_t1

0xb963,	// (0x0006ca35) main_call6_pane

0xb963,	// (0x0006ca35) main_calllock_pane

0x84d4,	// (0x000695a6) call6_btn_grp_pane_ParamLimits

0x84d4,	// (0x000695a6) call6_btn_grp_pane

0x84ee,	// (0x000695c0) call6_pane_g1_ParamLimits

0x84ee,	// (0x000695c0) call6_pane_g1

0x8504,	// (0x000695d6) popup_call6_1st_window_ParamLimits

0x8504,	// (0x000695d6) popup_call6_1st_window

0x8515,	// (0x000695e7) popup_call6_2nd_window_ParamLimits

0x8515,	// (0x000695e7) popup_call6_2nd_window

0x8526,	// (0x000695f8) cell_call6_btn_pane_ParamLimits

0x8526,	// (0x000695f8) cell_call6_btn_pane

0xc2c0,	// (0x0006d392) bg_popup_call2_in_pane_cp03

0xb5cf,	// (0x0006c6a1) popup_call6_1st_window_g1

0xb5d7,	// (0x0006c6a9) popup_call6_1st_window_g2

0xb5df,	// (0x0006c6b1) popup_call6_1st_window_g3

0x0002,

0xfcc6,	// (0x00070d98) popup_call6_1st_window_g

0xb5e7,	// (0x0006c6b9) popup_call6_1st_window_t1

0xb5f6,	// (0x0006c6c8) popup_call6_1st_window_t2

0xb604,	// (0x0006c6d6) popup_call6_1st_window_t3

0x0002,

0xfccd,	// (0x00070d9f) popup_call6_1st_window_t

0xc2c0,	// (0x0006d392) bg_popup_call2_in_pane_cp04

0xb612,	// (0x0006c6e4) popup_call6_2nd_window_g1

0xb61a,	// (0x0006c6ec) popup_call6_2nd_window_g2

0xb622,	// (0x0006c6f4) popup_call6_2nd_window_g3

0x0002,

0xfcd4,	// (0x00070da6) popup_call6_2nd_window_g

0xb62a,	// (0x0006c6fc) popup_call6_2nd_window_t1

0x9e54,	// (0x0006af26) bg_button_pane_cp15

0xb639,	// (0x0006c70b) cell_call6_btn_pane_g1

0xb642,	// (0x0006c714) cell_call6_btn_pane_t1

0x853a,	// (0x0006960c) listscroll_wgtman_pane_ParamLimits

0x853a,	// (0x0006960c) listscroll_wgtman_pane

0x855b,	// (0x0006962d) wgtman_btn_pane_ParamLimits

0x855b,	// (0x0006962d) wgtman_btn_pane

0xcc30,	// (0x0006dd02) aid_scroll_copy1

0xb651,	// (0x0006c723) list_wgtman_pane

0x859e,	// (0x00069670) wgtman_btn_pane_g1_ParamLimits

0x859e,	// (0x00069670) wgtman_btn_pane_g1

0x85ca,	// (0x0006969c) wgtman_btn_pane_t1_ParamLimits

0x85ca,	// (0x0006969c) wgtman_btn_pane_t1

0xb65b,	// (0x0006c72d) wgtman_btn_pane_t2_ParamLimits

0xb65b,	// (0x0006c72d) wgtman_btn_pane_t2

0x0001,

0xfcdb,	// (0x00070dad) wgtman_btn_pane_t_ParamLimits

0xfcdb,	// (0x00070dad) wgtman_btn_pane_t

0x8607,	// (0x000696d9) listrow_wgtman_pane_ParamLimits

0x8607,	// (0x000696d9) listrow_wgtman_pane

0x861a,	// (0x000696ec) listrow_wgtman_pane_g1

0x8627,	// (0x000696f9) listrow_wgtman_pane_g2

0x0001,

0xfce0,	// (0x00070db2) listrow_wgtman_pane_g

0x8645,	// (0x00069717) listrow_wgtman_pane_t1

0x865d,	// (0x0006972f) listrow_wgtman_pane_t2

0x0001,

0xfce5,	// (0x00070db7) listrow_wgtman_pane_t

0x8683,	// (0x00069755) wait_bar_pane_cp09

0xb672,	// (0x0006c744) main_calllock_btn_pane

0xb67c,	// (0x0006c74e) main_calllock_pane_g1

0xb963,	// (0x0006ca35) bg_button_pane_cp17

0xb684,	// (0x0006c756) main_calllock_btn_pane_g1

0xb68d,	// (0x0006c75f) main_calllock_btn_pane_t1

0xb963,	// (0x0006ca35) main_dialer3_pane

0xb963,	// (0x0006ca35) main_fmrd2_pane

0xc0b0,	// (0x0006d182) main_fs_bigclock_unlock_btn_pane_g1

0x869d,	// (0x0006976f) main_fs_bigclock_unlock_btn_pane_t1

0x86ab,	// (0x0006977d) area_fmrd2_info_pane_ParamLimits

0x86ab,	// (0x0006977d) area_fmrd2_info_pane

0x86bc,	// (0x0006978e) area_fmrd2_visual_pane_ParamLimits

0x86bc,	// (0x0006978e) area_fmrd2_visual_pane

0x86ca,	// (0x0006979c) fmrd2_indi_pane_ParamLimits

0x86ca,	// (0x0006979c) fmrd2_indi_pane

0x86d7,	// (0x000697a9) area_fmrd2_visual_pane_g1

0x86df,	// (0x000697b1) area_fmrd2_visual_pane_t1

0x86ef,	// (0x000697c1) area_fmrd2_visual_pane_t2

0x86ff,	// (0x000697d1) area_fmrd2_visual_pane_t3

0x0002,

0xfcef,	// (0x00070dc1) area_fmrd2_visual_pane_t

0x870f,	// (0x000697e1) area_fmrd2_info_pane_g1

0x8717,	// (0x000697e9) area_fmrd2_info_pane_t1

0x8727,	// (0x000697f9) area_fmrd2_info_pane_t2

0x8737,	// (0x00069809) area_fmrd2_info_pane_t3

0x8747,	// (0x00069819) area_fmrd2_info_pane_t4

0x0003,

0xfcf6,	// (0x00070dc8) area_fmrd2_info_pane_t

0x8755,	// (0x00069827) fmrd2_indi_pane_t1

0x8765,	// (0x00069837) fmrd2_indi_pane_t2

0x8775,	// (0x00069847) fmrd2_indi_pane_t3

0x0002,

0xfcff,	// (0x00070dd1) fmrd2_indi_pane_t

0xac13,	// (0x0006bce5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xac13,	// (0x0006bce5) list_single_fs_bigclock_indicator_pane_g5

0xacc4,	// (0x0006bd96) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xacc4,	// (0x0006bd96) list_single_fs_bigclock_indicator_pane_t5

0x7cbd,	// (0x00068d8f) aid_cell_bcale_month_pane_ParamLimits

0x7cbd,	// (0x00068d8f) aid_cell_bcale_month_pane

0x7ce4,	// (0x00068db6) bcale_month_pane_ParamLimits

0x7ce4,	// (0x00068db6) bcale_month_pane

0x7d08,	// (0x00068dda) bcale_preview_pane_ParamLimits

0x7d08,	// (0x00068dda) bcale_preview_pane

0xb42f,	// (0x0006c501) list_single_fs_bigclock_pane_t1_ParamLimits

0xb44e,	// (0x0006c520) list_single_fs_bigclock_pane_t2_ParamLimits

0xb44e,	// (0x0006c520) list_single_fs_bigclock_pane_t2

0x0001,

0xfc7a,	// (0x00070d4c) list_single_fs_bigclock_pane_t_ParamLimits

0xfc7a,	// (0x00070d4c) list_single_fs_bigclock_pane_t

0x8695,	// (0x00069767) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfcea,	// (0x00070dbc) main_fs_bigclock_unlock_btn_pane_g

0x8785,	// (0x00069857) aid_dia3_key_size_ParamLimits

0x8785,	// (0x00069857) aid_dia3_key_size

0x8794,	// (0x00069866) aid_dia3_listrow_size_ParamLimits

0x8794,	// (0x00069866) aid_dia3_listrow_size

0x87a9,	// (0x0006987b) dia3_keypad_fun_pane_ParamLimits

0x87a9,	// (0x0006987b) dia3_keypad_fun_pane

0x87c5,	// (0x00069897) dia3_keypad_num_pane_ParamLimits

0x87c5,	// (0x00069897) dia3_keypad_num_pane

0x87e0,	// (0x000698b2) dia3_listscroll_pane_ParamLimits

0x87e0,	// (0x000698b2) dia3_listscroll_pane

0x87f3,	// (0x000698c5) dia3_numentry_pane_ParamLimits

0x87f3,	// (0x000698c5) dia3_numentry_pane

0xb69c,	// (0x0006c76e) dia3_list_pane

0xb6a7,	// (0x0006c779) scroll_pane_cp12

0xb963,	// (0x0006ca35) bg_dia3_numentry_pane

0x880b,	// (0x000698dd) dia3_numentry_pane_t1

0x881a,	// (0x000698ec) cell_dia3_key_num_pane

0x8822,	// (0x000698f4) cell_dia3_key0_fun_pane_ParamLimits

0x8822,	// (0x000698f4) cell_dia3_key0_fun_pane

0x8836,	// (0x00069908) cell_dia3_key1_fun_pane_ParamLimits

0x8836,	// (0x00069908) cell_dia3_key1_fun_pane

0x884e,	// (0x00069920) dia3_listrow_pane

0xa966,	// (0x0006ba38) bg_dia3_numentry_pane_g1

0xb963,	// (0x0006ca35) bg_button_pane_cp21

0xb6b2,	// (0x0006c784) cell_dia3_key_num_pane_t1

0xb6c0,	// (0x0006c792) cell_dia3_key_num_pane_t2

0xb6cf,	// (0x0006c7a1) cell_dia3_key_num_pane_t3

0xb6de,	// (0x0006c7b0) cell_dia3_key_num_pane_t4

0x0003,

0xfd06,	// (0x00070dd8) cell_dia3_key_num_pane_t

0xb963,	// (0x0006ca35) bg_button_pane_cp19

0x8860,	// (0x00069932) cell_dia3_key0_fun_pane_g1

0xb963,	// (0x0006ca35) bg_button_pane_cp20

0x8868,	// (0x0006993a) cell_dia3_key1_fun_pane_g1

0x8870,	// (0x00069942) area_left_week_number_pane

0x887c,	// (0x0006994e) area_top_day_name_pane

0x888f,	// (0x00069961) frame_month_view_pane

0xb6ed,	// (0x0006c7bf) grid_month_view_pane

0x88a2,	// (0x00069974) cell_top_day_name_pane_ParamLimits

0x88a2,	// (0x00069974) cell_top_day_name_pane

0x88cf,	// (0x000699a1) cell_area_left_week_number_pane_ParamLimits

0x88cf,	// (0x000699a1) cell_area_left_week_number_pane

0x88e3,	// (0x000699b5) cell_month_view_pane_ParamLimits

0x88e3,	// (0x000699b5) cell_month_view_pane

0xb6fb,	// (0x0006c7cd) frm_month_g1

0x8910,	// (0x000699e2) frm_month_g2

0x8923,	// (0x000699f5) frm_month_g3

0x8936,	// (0x00069a08) frm_month_g4

0x8949,	// (0x00069a1b) frm_month_g5

0x895c,	// (0x00069a2e) frm_month_g6

0x896f,	// (0x00069a41) frm_month_g7

0xb708,	// (0x0006c7da) frm_month_g8

0x8982,	// (0x00069a54) frm_month_g9

0x8992,	// (0x00069a64) frm_month_g10

0x89a2,	// (0x00069a74) frm_month_g11

0x89b2,	// (0x00069a84) frm_month_g12

0x89c4,	// (0x00069a96) frm_month_g13

0x89d6,	// (0x00069aa8) frm_month_g14

0x89ea,	// (0x00069abc) frm_month_g15

0x89fe,	// (0x00069ad0) frm_month_g16

0x000f,

0xfd0f,	// (0x00070de1) frm_month_g

0xb715,	// (0x0006c7e7) cell_top_day_name_pane_t1

0x8a12,	// (0x00069ae4) cell_area_left_week_number_pane_g1

0x8a1e,	// (0x00069af0) cell_area_left_week_number_pane_t1

0xc072,	// (0x0006d144) cell_month_view_pane_g1

0x8a31,	// (0x00069b03) cell_month_view_pane_t1

0xb963,	// (0x0006ca35) main_fps_pane

0xaea3,	// (0x0006bf75) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xaea3,	// (0x0006bf75) cmail_ddmenu_btn02_pane_cp1

0xaebf,	// (0x0006bf91) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xaebf,	// (0x0006bf91) cmail_ddmenu_btn02_pane_cp2

0x807b,	// (0x0006914d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x807b,	// (0x0006914d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc2d,	// (0x00070cff) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc2d,	// (0x00070cff) cmail_ddmenu_btn02_pane_g

0x8099,	// (0x0006916b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8099,	// (0x0006916b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc32,	// (0x00070d04) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc32,	// (0x00070d04) cmail_ddmenu_btn02_pane_t

0x8a44,	// (0x00069b16) fps_text_pane_ParamLimits

0x8a44,	// (0x00069b16) fps_text_pane

0x8a5b,	// (0x00069b2d) main_fps_pane_g1_ParamLimits

0x8a5b,	// (0x00069b2d) main_fps_pane_g1

0x8a75,	// (0x00069b47) wait_bar_pane_cp010_ParamLimits

0x8a75,	// (0x00069b47) wait_bar_pane_cp010

0x8a86,	// (0x00069b58) fps_text_pane_t1_ParamLimits

0x8a86,	// (0x00069b58) fps_text_pane_t1

0xa456,	// (0x0006b528) cam4_image_uncrop_pane_g1

0xa45f,	// (0x0006b531) cam4_image_uncrop_pane_g2

0x4e0b,	// (0x00065edd) cam4_image_uncrop_pane_g3

0x4e14,	// (0x00065ee6) cam4_image_uncrop_pane_g4

0x0003,

0xf798,	// (0x0007086a) cam4_image_uncrop_pane_g

0x884e,	// (0x00069920) dia3_listrow_pane_ParamLimits

0xb963,	// (0x0006ca35) main_phob2_pane

0x7a33,	// (0x00068b05) cell_tport_appsw_pane_cp02_ParamLimits

0x7a33,	// (0x00068b05) cell_tport_appsw_pane_cp02

0x7a47,	// (0x00068b19) cell_tport_appsw_pane_cp03_ParamLimits

0x7a47,	// (0x00068b19) cell_tport_appsw_pane_cp03

0xb963,	// (0x0006ca35) phob2_contact_card_pane

0xb963,	// (0x0006ca35) phob2_listscroll_pane

0xb728,	// (0x0006c7fa) phob2_list_pane

0xb275,	// (0x0006c347) scroll_pane_cp034

0x8a9e,	// (0x00069b70) phob2_cc_data_pane_ParamLimits

0x8a9e,	// (0x00069b70) phob2_cc_data_pane

0x8abd,	// (0x00069b8f) phob2_cc_listscroll_pane_ParamLimits

0x8abd,	// (0x00069b8f) phob2_cc_listscroll_pane

0x8607,	// (0x000696d9) list_double_large_graphic_phob2_pane_ParamLimits

0x8607,	// (0x000696d9) list_double_large_graphic_phob2_pane

0x8adb,	// (0x00069bad) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8adb,	// (0x00069bad) list_double_large_graphic_phob2_pane_g1

0x8ae8,	// (0x00069bba) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8ae8,	// (0x00069bba) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd30,	// (0x00070e02) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd30,	// (0x00070e02) list_double_large_graphic_phob2_pane_g

0x8b0e,	// (0x00069be0) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8b0e,	// (0x00069be0) list_double_large_graphic_phob2_pane_t1

0x8b23,	// (0x00069bf5) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8b23,	// (0x00069bf5) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd39,	// (0x00070e0b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd39,	// (0x00070e0b) list_double_large_graphic_phob2_pane_t

0xb963,	// (0x0006ca35) list_highlight_pane_cp024

0xb730,	// (0x0006c802) phob2_cc_button_pane

0x8b38,	// (0x00069c0a) phob2_cc_data_pane_g1_ParamLimits

0x8b38,	// (0x00069c0a) phob2_cc_data_pane_g1

0x8b4f,	// (0x00069c21) phob2_cc_data_pane_g2_ParamLimits

0x8b4f,	// (0x00069c21) phob2_cc_data_pane_g2

0x0001,

0xfd3e,	// (0x00070e10) phob2_cc_data_pane_g_ParamLimits

0xfd3e,	// (0x00070e10) phob2_cc_data_pane_g

0x8b61,	// (0x00069c33) phob2_cc_data_pane_t1_ParamLimits

0x8b61,	// (0x00069c33) phob2_cc_data_pane_t1

0x8b79,	// (0x00069c4b) phob2_cc_data_pane_t2_ParamLimits

0x8b79,	// (0x00069c4b) phob2_cc_data_pane_t2

0x8b91,	// (0x00069c63) phob2_cc_data_pane_t3_ParamLimits

0x8b91,	// (0x00069c63) phob2_cc_data_pane_t3

0x0002,

0xfd43,	// (0x00070e15) phob2_cc_data_pane_t_ParamLimits

0xfd43,	// (0x00070e15) phob2_cc_data_pane_t

0xb738,	// (0x0006c80a) phob2_cc_list_pane_ParamLimits

0xb738,	// (0x0006c80a) phob2_cc_list_pane

0xa5cc,	// (0x0006b69e) scroll_pane_cp035_ParamLimits

0xa5cc,	// (0x0006b69e) scroll_pane_cp035

0xc00b,	// (0x0006d0dd) bg_button_pane_cp033

0xb744,	// (0x0006c816) phob2_cc_button_pane_g1

0xb750,	// (0x0006c822) phob2_cc_button_pane_t1

0xb765,	// (0x0006c837) phob2_cc_button_pane_t2

0x0001,

0xfd4a,	// (0x00070e1c) phob2_cc_button_pane_t

0x8ba9,	// (0x00069c7b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8ba9,	// (0x00069c7b) list_double_large_graphic_phob2_cc_pane

0x8bdb,	// (0x00069cad) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8bdb,	// (0x00069cad) list_double_large_graphic_phob2_cc_pane_g1

0x8be7,	// (0x00069cb9) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8be7,	// (0x00069cb9) list_double_large_graphic_phob2_cc_pane_g2

0x8bf3,	// (0x00069cc5) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8bf3,	// (0x00069cc5) list_double_large_graphic_phob2_cc_pane_g3

0x8bff,	// (0x00069cd1) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8bff,	// (0x00069cd1) list_double_large_graphic_phob2_cc_pane_g4

0x8c0b,	// (0x00069cdd) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8c0b,	// (0x00069cdd) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd4f,	// (0x00070e21) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd4f,	// (0x00070e21) list_double_large_graphic_phob2_cc_pane_g

0x8c17,	// (0x00069ce9) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8c17,	// (0x00069ce9) list_double_large_graphic_phob2_cc_pane_t1

0x8c40,	// (0x00069d12) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8c40,	// (0x00069d12) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfd5a,	// (0x00070e2c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfd5a,	// (0x00070e2c) list_double_large_graphic_phob2_cc_pane_t

0xb777,	// (0x0006c849) list_highlight_pane_cp025_ParamLimits

0xb777,	// (0x0006c849) list_highlight_pane_cp025

0xc00b,	// (0x0006d0dd) bg_button_pane_cp033_ParamLimits

0xb744,	// (0x0006c816) phob2_cc_button_pane_g1_ParamLimits

0xb750,	// (0x0006c822) phob2_cc_button_pane_t1_ParamLimits

0xb765,	// (0x0006c837) phob2_cc_button_pane_t2_ParamLimits

0xfd4a,	// (0x00070e1c) phob2_cc_button_pane_t_ParamLimits

0x0c06,	// (0x00061cd8) popup_wgtman_window

0x5689,	// (0x0006675b) scroll_pane_cp038

0x8580,	// (0x00069652) wgtman_btn_pane_cp_01_ParamLimits

0x8580,	// (0x00069652) wgtman_btn_pane_cp_01

0xb785,	// (0x0006c857) wgtman_content_pane

0xb78e,	// (0x0006c860) wgtman_heading_pane

0xb963,	// (0x0006ca35) bg_heading_pane_cp02

0xb797,	// (0x0006c869) wgtman_heading_pane_g1

0xb79f,	// (0x0006c871) wgtman_heading_pane_t1

0xb7ad,	// (0x0006c87f) scroll_pane_cp036

0xb7b5,	// (0x0006c887) wgtman_list_pane

0xad6b,	// (0x0006be3d) wgtman_list_pane_t1_ParamLimits

0xad6b,	// (0x0006be3d) wgtman_list_pane_t1

0xa442,	// (0x0006b514) cam4_grid_pane

0x5d5d,	// (0x00066e2f) bg_button_pane_cp015_ParamLimits

0x5d6e,	// (0x00066e40) bg_button_pane_cp016_ParamLimits

0x5d7a,	// (0x00066e4c) bg_button_pane_cp017_ParamLimits

0x5dda,	// (0x00066eac) popup_vitu2_query_window_g3_ParamLimits

0x5dda,	// (0x00066eac) popup_vitu2_query_window_g3

0x5e7b,	// (0x00066f4d) popup_vitu2_query_window_t6_ParamLimits

0x5e7b,	// (0x00066f4d) popup_vitu2_query_window_t6

0x5ea6,	// (0x00066f78) popup_vitu2_query_window_t7_ParamLimits

0x5ea6,	// (0x00066f78) popup_vitu2_query_window_t7

0xa456,	// (0x0006b528) cam4_grid_pane_g1

0xa45f,	// (0x0006b531) cam4_grid_pane_g2

0xb7bd,	// (0x0006c88f) cam4_grid_pane_g3

0xb7c6,	// (0x0006c898) cam4_grid_pane_g4

0x0003,

0xfd5f,	// (0x00070e31) cam4_grid_pane_g

0x16cb,	// (0x0006279d) aid_placing_vt_slider_lsc_ParamLimits

0x19c8,	// (0x00062a9a) vidtel_button_pane_ParamLimits

0x19c8,	// (0x00062a9a) vidtel_button_pane

0xb963,	// (0x0006ca35) bg_button_pane_cp034

0xb7d1,	// (0x0006c8a3) vidtel_button_pane_g1

0xb7d9,	// (0x0006c8ab) vidtel_button_pane_t1

0x5a58,	// (0x00066b2a) aid_size_vtel_slider_touch

0xa5cc,	// (0x0006b69e) scroll_pane_cp039

0x7180,	// (0x00068252) ncim_query_button_pane_cp01_ParamLimits

0x719f,	// (0x00068271) ncimui_query_pane_g1_ParamLimits

0xc00b,	// (0x0006d0dd) input_focus_pane_cp012_ParamLimits

0xa9ac,	// (0x0006ba7e) ncim_query_entry_pane_t1_ParamLimits

0xa5cc,	// (0x0006b69e) scroll_pane_cp039_ParamLimits

0xcd07,	// (0x0006ddd9) navi_pane_bcale_mc_g1

0xcd0f,	// (0x0006dde1) navi_pane_bcale_mc_t1

0xaef3,	// (0x0006bfc5) main_sp_fs_email_pane_g1

0xaeff,	// (0x0006bfd1) main_sp_fs_email_pane_g2

0x0001,

0xfb5d,	// (0x00070c2f) main_sp_fs_email_pane_g

0xb18c,	// (0x0006c25e) list_single_cale_mrui_row_pane_g3_ParamLimits

0xb18c,	// (0x0006c25e) list_single_cale_mrui_row_pane_g3

0x810a,	// (0x000691dc) list_single_recal_day_pane_g5_event_pane

0x8120,	// (0x000691f2) list_single_recal_day_pane_g7

0xb7ef,	// (0x0006c8c1) list_recal_day_event_pane_cp01

0xb7f8,	// (0x0006c8ca) list_recal_vselct_arw_lo_pane_cp01

0xb800,	// (0x0006c8d2) list_recal_vselct_arw_up_pane_cp01

0xb808,	// (0x0006c8da) list_recal_vselct_pane_cp01

0x5c3b,	// (0x00066d0d) list_recal_day_event_pane_cp01_g1

0x8c69,	// (0x00069d3b) list_recal_day_event_pane_cp01_t1

0x8128,	// (0x000691fa) list_single_recal_day_pane_t1_ParamLimits

0x813a,	// (0x0006920c) list_single_recal_day_pane_t2_ParamLimits

0xfc42,	// (0x00070d14) list_single_recal_day_pane_t_ParamLimits

0xbfe9,	// (0x0006d0bb) bg_notes_pane_ParamLimits

0xc0ec,	// (0x0006d1be) list_notes_pane_ParamLimits

0x0d51,	// (0x00061e23) scroll_pane_cp06_ParamLimits

0xc10e,	// (0x0006d1e0) main_notes_pane_ParamLimits

0xc00b,	// (0x0006d0dd) main_welc_pane

0x8ca4,	// (0x00069d76) main_welc_body_pane_ParamLimits

0x8ca4,	// (0x00069d76) main_welc_body_pane

0x8cc1,	// (0x00069d93) main_welc_opti_pane_ParamLimits

0x8cc1,	// (0x00069d93) main_welc_opti_pane

0x8d38,	// (0x00069e0a) main_welc_pane_t1_ParamLimits

0x8d38,	// (0x00069e0a) main_welc_pane_t1

0x8f30,	// (0x0006a002) main_welc_body_row_pane_ParamLimits

0x8f30,	// (0x0006a002) main_welc_body_row_pane

0xc064,	// (0x0006d136) main_welc_opti_row_pane_ParamLimits

0xc064,	// (0x0006d136) main_welc_opti_row_pane

0xb822,	// (0x0006c8f4) main_welc_opti_row_pane_g1

0x8f45,	// (0x0006a017) main_welc_opti_row_pane_t1

0xb82a,	// (0x0006c8fc) main_welc_body_row_pane_t1

0xb50f,	// (0x0006c5e1) popup_notif_wgt_heading_pane

0xb529,	// (0x0006c5fb) aid_size_list_notif_wgt_del_ParamLimits

0xb536,	// (0x0006c608) list_notif_wgt_row_pane_g1_ParamLimits

0xb542,	// (0x0006c614) list_notif_wgt_row_pane_g2_ParamLimits

0xb551,	// (0x0006c623) list_notif_wgt_row_pane_g3_ParamLimits

0xfca9,	// (0x00070d7b) list_notif_wgt_row_pane_g_ParamLimits

0xb55e,	// (0x0006c630) list_notif_wgt_row_pane_t1_ParamLimits

0xb574,	// (0x0006c646) list_notif_wgt_row_pane_t2_ParamLimits

0xb586,	// (0x0006c658) list_notif_wgt_row_pane_t3_ParamLimits

0xfcb0,	// (0x00070d82) list_notif_wgt_row_pane_t_ParamLimits

0x861a,	// (0x000696ec) listrow_wgtman_pane_g1_ParamLimits

0x8627,	// (0x000696f9) listrow_wgtman_pane_g2_ParamLimits

0xfce0,	// (0x00070db2) listrow_wgtman_pane_g_ParamLimits

0x8645,	// (0x00069717) listrow_wgtman_pane_t1_ParamLimits

0x865d,	// (0x0006972f) listrow_wgtman_pane_t2_ParamLimits

0xfce5,	// (0x00070db7) listrow_wgtman_pane_t_ParamLimits

0x8683,	// (0x00069755) wait_bar_pane_cp09_ParamLimits

0xb963,	// (0x0006ca35) bg_popup_heading_pane_cp02

0xb839,	// (0x0006c90b) popup_notif_wgt_heading_pane_g1

0xb841,	// (0x0006c913) popup_notif_wgt_heading_pane_t1

0xb963,	// (0x0006ca35) main_vids_pane

0xb963,	// (0x0006ca35) vids_listscroll_pane

0x8f54,	// (0x0006a026) scroll_pane_cp040

0xb963,	// (0x0006ca35) vids_list_pane

0x8f5f,	// (0x0006a031) vids_list_double_pane_ParamLimits

0x8f5f,	// (0x0006a031) vids_list_double_pane

0x8f70,	// (0x0006a042) vids_list_double_pane_g1

0x8f79,	// (0x0006a04b) vids_list_double_pane_t1

0x8f88,	// (0x0006a05a) vids_list_double_pane_t2

0x0001,

0xfd7e,	// (0x00070e50) vids_list_double_pane_t

0x9e46,	// (0x0006af18) main_ncimui_pane_ParamLimits

0x6fb6,	// (0x00068088) main_ncimui_pane_g1_ParamLimits

0x6fc2,	// (0x00068094) main_ncimui_pane_g2_ParamLimits

0x6fc2,	// (0x00068094) main_ncimui_pane_g2

0x0001,

0xfa70,	// (0x00070b42) main_ncimui_pane_g_ParamLimits

0xfa70,	// (0x00070b42) main_ncimui_pane_g

0x8cdc,	// (0x00069dae) main_welc_pane_g1_ParamLimits

0x8cdc,	// (0x00069dae) main_welc_pane_g1

0x8cf1,	// (0x00069dc3) main_welc_pane_g2_ParamLimits

0x8cf1,	// (0x00069dc3) main_welc_pane_g2

0x0003,

0xfd68,	// (0x00070e3a) main_welc_pane_g_ParamLimits

0xfd68,	// (0x00070e3a) main_welc_pane_g

0xbfe9,	// (0x0006d0bb) listscroll_mce_pane_ParamLimits

0xd0e4,	// (0x0006e1b6) wait_bar_pane_cp10

0xe484,	// (0x0006f556) main_cale_day_pane_ParamLimits

0xe484,	// (0x0006f556) main_cale_week_pane_ParamLimits

0xbfe9,	// (0x0006d0bb) main_messa_pane_ParamLimits

0x422e,	// (0x00065300) main_clock2_btn_pane_ParamLimits

0x422e,	// (0x00065300) main_clock2_btn_pane

0xecf7,	// (0x0006fdc9) main_clock2_btn_pane_cp01_ParamLimits

0xecf7,	// (0x0006fdc9) main_clock2_btn_pane_cp01

0xb15d,	// (0x0006c22f) list_cale_mrui_pane_ParamLimits

0xb5bc,	// (0x0006c68e) main_cf0_pane_g2

0x0001,

0xfcb7,	// (0x00070d89) main_cf0_pane_g

0x8870,	// (0x00069942) area_left_week_number_pane_ParamLimits

0x887c,	// (0x0006994e) area_top_day_name_pane_ParamLimits

0x888f,	// (0x00069961) frame_month_view_pane_ParamLimits

0xb6ed,	// (0x0006c7bf) grid_month_view_pane_ParamLimits

0xb6fb,	// (0x0006c7cd) frm_month_g1_ParamLimits

0x8910,	// (0x000699e2) frm_month_g2_ParamLimits

0x8923,	// (0x000699f5) frm_month_g3_ParamLimits

0x8936,	// (0x00069a08) frm_month_g4_ParamLimits

0x8949,	// (0x00069a1b) frm_month_g5_ParamLimits

0x895c,	// (0x00069a2e) frm_month_g6_ParamLimits

0x896f,	// (0x00069a41) frm_month_g7_ParamLimits

0xb708,	// (0x0006c7da) frm_month_g8_ParamLimits

0x8982,	// (0x00069a54) frm_month_g9_ParamLimits

0x8992,	// (0x00069a64) frm_month_g10_ParamLimits

0x89a2,	// (0x00069a74) frm_month_g11_ParamLimits

0x89b2,	// (0x00069a84) frm_month_g12_ParamLimits

0x89c4,	// (0x00069a96) frm_month_g13_ParamLimits

0x89d6,	// (0x00069aa8) frm_month_g14_ParamLimits

0x89ea,	// (0x00069abc) frm_month_g15_ParamLimits

0x89fe,	// (0x00069ad0) frm_month_g16_ParamLimits

0xfd0f,	// (0x00070de1) frm_month_g_ParamLimits

0xb715,	// (0x0006c7e7) cell_top_day_name_pane_t1_ParamLimits

0x8a12,	// (0x00069ae4) cell_area_left_week_number_pane_g1_ParamLimits

0x8a1e,	// (0x00069af0) cell_area_left_week_number_pane_t1_ParamLimits

0xc072,	// (0x0006d144) cell_month_view_pane_g1_ParamLimits

0x8a31,	// (0x00069b03) cell_month_view_pane_t1_ParamLimits

0xbfe1,	// (0x0006d0b3) main_clock2_btn_pane_g1

0xb84f,	// (0x0006c921) main_clock2_btn_pane_t1

0xc00b,	// (0x0006d0dd) listscroll_cmail_pane_ParamLimits

0xaef3,	// (0x0006bfc5) main_sp_fs_email_pane_g1_ParamLimits

0xaeff,	// (0x0006bfd1) main_sp_fs_email_pane_g2_ParamLimits

0xfb5d,	// (0x00070c2f) main_sp_fs_email_pane_g_ParamLimits

0xb292,	// (0x0006c364) list_recal_day_pane_ParamLimits

0xb2a3,	// (0x0006c375) mian_recal_day_pane_t1

0x7875,	// (0x00068947) list_single_dyc_row_text_pane_t4_ParamLimits

0x7875,	// (0x00068947) list_single_dyc_row_text_pane_t4

0x78be,	// (0x00068990) list_single_dyc_row_text_pane_t5_ParamLimits

0x78be,	// (0x00068990) list_single_dyc_row_text_pane_t5

0x7934,	// (0x00068a06) list_single_dyc_row_text_pane_t6_ParamLimits

0x7934,	// (0x00068a06) list_single_dyc_row_text_pane_t6

0x244c,	// (0x0006351e) aid_mgn_list_cale_time_pane

0x9e46,	// (0x0006af18) main_gallery2_pane_ParamLimits

0xed0d,	// (0x0006fddf) main_clock2_pane_cp01_t1

0xed1b,	// (0x0006fded) main_clock2_pane_cp01_t3

0x0001,

0x013f,	// (0x00061211) main_clock2_pane_cp01_t

0x1104,	// (0x000621d6) cale_week_scroll_pane_g16_ParamLimits

0x1104,	// (0x000621d6) cale_week_scroll_pane_g16

0xc2c0,	// (0x0006d392) vorec_slider_pane

0xb7d9,	// (0x0006c8ab) vidtel_button_pane_t1_ParamLimits

0x81a8,	// (0x0006927a) main_fs_bigclock_clock_pane_g1_ParamLimits

0x81a8,	// (0x0006927a) main_fs_bigclock_clock_pane_g2_ParamLimits

0x81b9,	// (0x0006928b) main_fs_bigclock_clock_pane_g3_ParamLimits

0x81b9,	// (0x0006928b) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfc65,	// (0x00070d37) main_fs_bigclock_clock_pane_g_ParamLimits

0x81cc,	// (0x0006929e) main_fs_bigclock_clock_pane_t1_ParamLimits

0x81e2,	// (0x000692b4) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfc6e,	// (0x00070d40) main_fs_bigclock_clock_pane_t_ParamLimits

0x3b0a,	// (0x00064bdc) main_mup3_lyrics_pane_ParamLimits

0x3b0a,	// (0x00064bdc) main_mup3_lyrics_pane

0x8fb0,	// (0x0006a082) main_mup3_lyrics_pane_t1_ParamLimits

0x8fb0,	// (0x0006a082) main_mup3_lyrics_pane_t1

0xa138,	// (0x0006b20a) aid_main_mp4_pane_t1_area

0xa142,	// (0x0006b214) aid_main_mp4_pane_t2_area

0xa1ec,	// (0x0006b2be) main_mp4_pane_g7_ParamLimits

0xa1ec,	// (0x0006b2be) main_mp4_pane_g7

0xa1f8,	// (0x0006b2ca) main_mp4_pane_g8_ParamLimits

0xa1f8,	// (0x0006b2ca) main_mp4_pane_g8

0x4bc0,	// (0x00065c92) aid_call6_pane_g1_size

0x8bc4,	// (0x00069c96) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8bc4,	// (0x00069c96) list_double_large_graphic_phob2_other_pane

0xcc38,	// (0x0006dd0a) list_double_large_graphic_phob2_other_pane_g1

0xb963,	// (0x0006ca35) list_highlight_pane_cp026

0xc00b,	// (0x0006d0dd) main_welc_pane_ParamLimits

0x7632,	// (0x00068704) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7632,	// (0x00068704) main_sp_fs_ctrlbar_pane_g3

0x764c,	// (0x0006871e) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x764c,	// (0x0006871e) main_sp_fs_ctrlbar_pane_g4

0x7680,	// (0x00068752) toolbar2_fixed_button_pane_cp01

0x768b,	// (0x0006875d) toolbar2_fixed_button_pane_cp02

0x7698,	// (0x0006876a) toolbar2_fixed_button_pane_cp03

0x8c8a,	// (0x00069d5c) list_welc_entry_pane_ParamLimits

0x8c8a,	// (0x00069d5c) list_welc_entry_pane

0x8d06,	// (0x00069dd8) main_welc_pane_g3_ParamLimits

0x8d06,	// (0x00069dd8) main_welc_pane_g3

0x8d56,	// (0x00069e28) main_welc_pane_t2_ParamLimits

0x8d56,	// (0x00069e28) main_welc_pane_t2

0x8d71,	// (0x00069e43) main_welc_pane_t3_ParamLimits

0x8d71,	// (0x00069e43) main_welc_pane_t3

0x0005,

0xfd71,	// (0x00070e43) main_welc_pane_t_ParamLimits

0xfd71,	// (0x00070e43) main_welc_pane_t

0x8ea1,	// (0x00069f73) welc_button_pane_ParamLimits

0x8ea1,	// (0x00069f73) welc_button_pane

0x8f1b,	// (0x00069fed) welc_service_logo_pane_ParamLimits

0x8f1b,	// (0x00069fed) welc_service_logo_pane

0x8fcc,	// (0x0006a09e) list_single_welc_entry_pane_ParamLimits

0x8fcc,	// (0x0006a09e) list_single_welc_entry_pane

0x8fdd,	// (0x0006a0af) list_single_welc_entry_pane_g1

0x8fe5,	// (0x0006a0b7) list_single_welc_entry_pane_t1

0x8ff3,	// (0x0006a0c5) list_single_welc_entry_pane_t2

0x0001,

0xfd83,	// (0x00070e55) list_single_welc_entry_pane_t

0xb963,	// (0x0006ca35) bg_button_pane_cp035

0x9001,	// (0x0006a0d3) welc_button_pane_t1

0xb85d,	// (0x0006c92f) welc_service_logo_pane_g1

0xb866,	// (0x0006c938) welc_service_logo_pane_g2

0x0001,

0xfd88,	// (0x00070e5a) welc_service_logo_pane_g

0x9e54,	// (0x0006af26) main_int_radio_pane

0xa84a,	// (0x0006b91c) list_single_fs_dyc_pane_g1

0x8af4,	// (0x00069bc6) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8af4,	// (0x00069bc6) list_double_large_graphic_phob2_pane_g3

0x8b00,	// (0x00069bd2) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8b00,	// (0x00069bd2) list_double_large_graphic_phob2_pane_g4

0x900f,	// (0x0006a0e1) main_int_radio1_pane_ParamLimits

0x900f,	// (0x0006a0e1) main_int_radio1_pane

0xb86f,	// (0x0006c941) find_pane_cp02

0x902c,	// (0x0006a0fe) input_focus_pane_cp12_ParamLimits

0x902c,	// (0x0006a0fe) input_focus_pane_cp12

0x903c,	// (0x0006a10e) input_focus_pane_cp13_ParamLimits

0x903c,	// (0x0006a10e) input_focus_pane_cp13

0x9050,	// (0x0006a122) input_focus_pane_cp14_ParamLimits

0x9050,	// (0x0006a122) input_focus_pane_cp14

0xb878,	// (0x0006c94a) int_radio1_listscroll_pane

0x9064,	// (0x0006a136) main_int_radio1_pane_g1_ParamLimits

0x9064,	// (0x0006a136) main_int_radio1_pane_g1

0x907c,	// (0x0006a14e) main_int_radio1_pane_t1_ParamLimits

0x907c,	// (0x0006a14e) main_int_radio1_pane_t1

0x9097,	// (0x0006a169) main_int_radio1_pane_t2_ParamLimits

0x9097,	// (0x0006a169) main_int_radio1_pane_t2

0x90b2,	// (0x0006a184) main_int_radio1_pane_t3_ParamLimits

0x90b2,	// (0x0006a184) main_int_radio1_pane_t3

0x90cd,	// (0x0006a19f) main_int_radio1_pane_t4_ParamLimits

0x90cd,	// (0x0006a19f) main_int_radio1_pane_t4

0xb882,	// (0x0006c954) main_int_radio1_pane_t5_ParamLimits

0xb882,	// (0x0006c954) main_int_radio1_pane_t5

0x90df,	// (0x0006a1b1) main_int_radio1_pane_t6_ParamLimits

0x90df,	// (0x0006a1b1) main_int_radio1_pane_t6

0x90f4,	// (0x0006a1c6) main_int_radio1_pane_t7_ParamLimits

0x90f4,	// (0x0006a1c6) main_int_radio1_pane_t7

0x9109,	// (0x0006a1db) main_int_radio1_pane_t8_ParamLimits

0x9109,	// (0x0006a1db) main_int_radio1_pane_t8

0x9128,	// (0x0006a1fa) main_int_radio1_pane_t9_ParamLimits

0x9128,	// (0x0006a1fa) main_int_radio1_pane_t9

0x913a,	// (0x0006a20c) main_int_radio1_pane_t10_ParamLimits

0x913a,	// (0x0006a20c) main_int_radio1_pane_t10

0x9160,	// (0x0006a232) main_int_radio1_pane_t11_ParamLimits

0x9160,	// (0x0006a232) main_int_radio1_pane_t11

0x9186,	// (0x0006a258) main_int_radio1_pane_t12_ParamLimits

0x9186,	// (0x0006a258) main_int_radio1_pane_t12

0x000b,

0xfd8d,	// (0x00070e5f) main_int_radio1_pane_t_ParamLimits

0xfd8d,	// (0x00070e5f) main_int_radio1_pane_t

0xb894,	// (0x0006c966) int_radio_list_pane

0xb275,	// (0x0006c347) scroll_pane_cp037

0xb89c,	// (0x0006c96e) list_double_large_graphic_int_radio_pane_ParamLimits

0xb89c,	// (0x0006c96e) list_double_large_graphic_int_radio_pane

0xb8b5,	// (0x0006c987) list_double_large_graphic_int_radio_pane_g1

0x9198,	// (0x0006a26a) list_double_large_graphic_int_radio_pane_t1

0x91a6,	// (0x0006a278) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfda6,	// (0x00070e78) list_double_large_graphic_int_radio_pane_t

0xb963,	// (0x0006ca35) list_highlight_pane_cp027

0xb812,	// (0x0006c8e4) main_button_pane_4

0x8d19,	// (0x00069deb) main_welc_pane_g4_ParamLimits

0x8d19,	// (0x00069deb) main_welc_pane_g4

0x8d8a,	// (0x00069e5c) main_welc_pane_t4_ParamLimits

0x8d8a,	// (0x00069e5c) main_welc_pane_t4

0x8da1,	// (0x00069e73) main_welc_pane_t5_ParamLimits

0x8da1,	// (0x00069e73) main_welc_pane_t5

0x8dde,	// (0x00069eb0) main_welc_pane_t6_ParamLimits

0x8dde,	// (0x00069eb0) main_welc_pane_t6

0x8eb8,	// (0x00069f8a) welc_button_pane_2_ParamLimits

0x8eb8,	// (0x00069f8a) welc_button_pane_2

0x8ed4,	// (0x00069fa6) welc_button_pane_3_ParamLimits

0x8ed4,	// (0x00069fa6) welc_button_pane_3

0xb81a,	// (0x0006c8ec) welc_button_pane_4

0x8ef3,	// (0x00069fc5) welc_button_pane_5_ParamLimits

0x8ef3,	// (0x00069fc5) welc_button_pane_5

0x0a70,	// (0x00061b42) main_popup_welc_pane

0xb8d6,	// (0x0006c9a8) main_welc_sk_g3

0xb8e0,	// (0x0006c9b2) main_welc_sk_g4

0xb8ea,	// (0x0006c9bc) main_welc_sk_t3

0xb8fa,	// (0x0006c9cc) main_welc_sk_t4

0xb90a,	// (0x0006c9dc) popup_welc_pane_t4

0xb918,	// (0x0006c9ea) popup_welc_pane_t5

0xb926,	// (0x0006c9f8) popup_welc_pane_t6

0x9e54,	// (0x0006af26) main_acti_pane

0xb963,	// (0x0006ca35) main_sso_pane

0x91b4,	// (0x0006a286) sso_body_pane_ParamLimits

0x91b4,	// (0x0006a286) sso_body_pane

0x91c8,	// (0x0006a29a) sso_logo_pane_ParamLimits

0x91c8,	// (0x0006a29a) sso_logo_pane

0x9201,	// (0x0006a2d3) sso_sk_pane_ParamLimits

0x9201,	// (0x0006a2d3) sso_sk_pane

0xc8fc,	// (0x0006d9ce) main_sso_logo_pane_g1

0x9213,	// (0x0006a2e5) sso_sk_pane_t1_ParamLimits

0x9213,	// (0x0006a2e5) sso_sk_pane_t1

0x922d,	// (0x0006a2ff) sso_sk_pane_t2_ParamLimits

0x922d,	// (0x0006a2ff) sso_sk_pane_t2

0x0001,

0xfdab,	// (0x00070e7d) sso_sk_pane_t_ParamLimits

0xfdab,	// (0x00070e7d) sso_sk_pane_t

0xc907,	// (0x0006d9d9) aid_sso_gap

0xc910,	// (0x0006d9e2) aid_sso_txt1

0xc91a,	// (0x0006d9ec) aid_sso_txt2

0xc924,	// (0x0006d9f6) aid_sso_txt3

0x0002,

0x08a2,	// (0x00061974) aid_sso_txt

0xc92e,	// (0x0006da00) aid_sso_widget

0x9297,	// (0x0006a369) sso_btn_pane_ParamLimits

0x9297,	// (0x0006a369) sso_btn_pane

0x931b,	// (0x0006a3ed) sso_option_pane_ParamLimits

0x931b,	// (0x0006a3ed) sso_option_pane

0x93d1,	// (0x0006a4a3) sso_query_pane_ParamLimits

0x93d1,	// (0x0006a4a3) sso_query_pane

0x9427,	// (0x0006a4f9) sso_query_pane_cp01_ParamLimits

0x9427,	// (0x0006a4f9) sso_query_pane_cp01

0x9481,	// (0x0006a553) sso_t_hdr_pane_ParamLimits

0x9481,	// (0x0006a553) sso_t_hdr_pane

0x94ab,	// (0x0006a57d) sso_t_nml_pane_ParamLimits

0x94ab,	// (0x0006a57d) sso_t_nml_pane

0xc938,	// (0x0006da0a) sso_t_sub_pane

0x91d5,	// (0x0006a2a7) sso_popup_window_ParamLimits

0x91d5,	// (0x0006a2a7) sso_popup_window

0x9243,	// (0x0006a315) sso_apps_pane_ParamLimits

0x9243,	// (0x0006a315) sso_apps_pane

0x926d,	// (0x0006a33f) sso_body_pane_g1

0x9277,	// (0x0006a349) sso_body_pane_t1

0x9287,	// (0x0006a359) sso_body_pane_t2

0x0001,

0xfdb0,	// (0x00070e82) sso_body_pane_t

0x92e3,	// (0x0006a3b5) sso_btn_pane_cp01_ParamLimits

0x92e3,	// (0x0006a3b5) sso_btn_pane_cp01

0x93a5,	// (0x0006a477) sso_prog_pane_ParamLimits

0x93a5,	// (0x0006a477) sso_prog_pane

0x9501,	// (0x0006a5d3) sso_t_hdr_pane_t1_ParamLimits

0x9501,	// (0x0006a5d3) sso_t_hdr_pane_t1

0xc94d,	// (0x0006da1f) input_focus_pane_cp10_ParamLimits

0xc94d,	// (0x0006da1f) input_focus_pane_cp10

0xc961,	// (0x0006da33) sso_query_pane_t1_ParamLimits

0xc961,	// (0x0006da33) sso_query_pane_t1

0xc974,	// (0x0006da46) sso_query_pane_t2_ParamLimits

0xc974,	// (0x0006da46) sso_query_pane_t2

0xc98d,	// (0x0006da5f) sso_query_pane_t3_ParamLimits

0xc98d,	// (0x0006da5f) sso_query_pane_t3

0xc9b7,	// (0x0006da89) sso_query_pane_t4_ParamLimits

0xc9b7,	// (0x0006da89) sso_query_pane_t4

0x0003,

0x08ae,	// (0x00061980) sso_query_pane_t_ParamLimits

0x08ae,	// (0x00061980) sso_query_pane_t

0xb8cd,	// (0x0006c99f) bg_button_pane_cp22

0xb8be,	// (0x0006c990) sso_btn_pane_t1

0x9514,	// (0x0006a5e6) sso_t_nml_pane_t1_ParamLimits

0x9514,	// (0x0006a5e6) sso_t_nml_pane_t1

0xc9db,	// (0x0006daad) sso_option_row_pane_ParamLimits

0xc9db,	// (0x0006daad) sso_option_row_pane

0xc9e8,	// (0x0006daba) sso_t_sub_pane_t1_ParamLimits

0xc9e8,	// (0x0006daba) sso_t_sub_pane_t1

0xc00b,	// (0x0006d0dd) bg_popup_window_pane_cp11_ParamLimits

0xc00b,	// (0x0006d0dd) bg_popup_window_pane_cp11

0xca05,	// (0x0006dad7) popup_sk_window_cp01_ParamLimits

0xca05,	// (0x0006dad7) popup_sk_window_cp01

0xca12,	// (0x0006dae4) sso_popup_body_pane_ParamLimits

0xca12,	// (0x0006dae4) sso_popup_body_pane

0xca1f,	// (0x0006daf1) scroll_pane_cp21_ParamLimits

0xca1f,	// (0x0006daf1) scroll_pane_cp21

0xca2c,	// (0x0006dafe) sso_popup_body_t_pane_ParamLimits

0xca2c,	// (0x0006dafe) sso_popup_body_t_pane

0xca39,	// (0x0006db0b) sso_popup_body_t_hdr_pane_ParamLimits

0xca39,	// (0x0006db0b) sso_popup_body_t_hdr_pane

0x952f,	// (0x0006a601) sso_popup_body_t_nml_pane_ParamLimits

0x952f,	// (0x0006a601) sso_popup_body_t_nml_pane

0x9556,	// (0x0006a628) sso_popup_body_t_sub_pane_ParamLimits

0x9556,	// (0x0006a628) sso_popup_body_t_sub_pane

0xca4b,	// (0x0006db1d) sso_popup_body_t_hdr_pane_t1

0x9579,	// (0x0006a64b) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9579,	// (0x0006a64b) sso_popup_body_t_nml_pane_t1

0xca5b,	// (0x0006db2d) sso_popup_body_t_sub_pane_t1_ParamLimits

0xca5b,	// (0x0006db2d) sso_popup_body_t_sub_pane_t1

0xc0b0,	// (0x0006d182) sso_prog_pane_g1

0x95b2,	// (0x0006a684) sso_apps_pane_comp1_ParamLimits

0x95b2,	// (0x0006a684) sso_apps_pane_comp1

0xca80,	// (0x0006db52) sso_apps_pane_comp1_g1

0xcd99,	// (0x0006de6b) sso_apps_pane_comp1_t1

0xcdb5,	// (0x0006de87) sso_option_row_pane_g1

0xcdbd,	// (0x0006de8f) sso_option_row_pane_t1

0xafa0,	// (0x0006c072) list_cmail_pane_ParamLimits

0xb963,	// (0x0006ca35) main_call7_pane

0x8c77,	// (0x00069d49) bg_welc_area_ParamLimits

0x8c77,	// (0x00069d49) bg_welc_area

0x8e1c,	// (0x00069eee) sso_t_hdr_pane_a_t1_ParamLimits

0x8e1c,	// (0x00069eee) sso_t_hdr_pane_a_t1

0x8e37,	// (0x00069f09) sso_t_nml_pane_a_t1_ParamLimits

0x8e37,	// (0x00069f09) sso_t_nml_pane_a_t1

0x8e66,	// (0x00069f38) sso_t_sub_pane_a_t1_ParamLimits

0x8e66,	// (0x00069f38) sso_t_sub_pane_a_t1

0x8f09,	// (0x00069fdb) welc_button_pane_cp01_ParamLimits

0x8f09,	// (0x00069fdb) welc_button_pane_cp01

0xb8be,	// (0x0006c990) sso_btn_pane_t1_copy1

0xb8cd,	// (0x0006c99f) welc_button_pane_2_comp1

0xb934,	// (0x0006ca06) sso_t_hdr_pane_p_t1

0xb944,	// (0x0006ca16) sso_t_nml_pane_p_t1

0xc8ec,	// (0x0006d9be) sso_t_sub_pane_p_t1

0xb963,	// (0x0006ca35) main_att_pane

0xb963,	// (0x0006ca35) main_vod_pane

0xc938,	// (0x0006da0a) sso_t_sub_pane_ParamLimits

0xcda7,	// (0x0006de79) input_focus_pane_cp10_t1

0xcdbd,	// (0x0006de8f) sso_option_row_pane_t1_ParamLimits

0x95cc,	// (0x0006a69e) main_att_body_pane_ParamLimits

0x95cc,	// (0x0006a69e) main_att_body_pane

0x95e2,	// (0x0006a6b4) att_btn_emg_pane_ParamLimits

0x95e2,	// (0x0006a6b4) att_btn_emg_pane

0x9601,	// (0x0006a6d3) att_btn_pane_ParamLimits

0x9601,	// (0x0006a6d3) att_btn_pane

0x9672,	// (0x0006a744) att_btn_pane_cp01_ParamLimits

0x9672,	// (0x0006a744) att_btn_pane_cp01

0x9692,	// (0x0006a764) att_li_srv_pane_ParamLimits

0x9692,	// (0x0006a764) att_li_srv_pane

0x96af,	// (0x0006a781) att_opt_pane_ParamLimits

0x96af,	// (0x0006a781) att_opt_pane

0x96f9,	// (0x0006a7cb) att_query_pane_ParamLimits

0x96f9,	// (0x0006a7cb) att_query_pane

0x9772,	// (0x0006a844) att_query_pane_cp01_ParamLimits

0x9772,	// (0x0006a844) att_query_pane_cp01

0x97be,	// (0x0006a890) att_t_hdr_pane_ParamLimits

0x97be,	// (0x0006a890) att_t_hdr_pane

0x982a,	// (0x0006a8fc) att_t_nml_pane_ParamLimits

0x982a,	// (0x0006a8fc) att_t_nml_pane

0x989a,	// (0x0006a96c) att_t_nml_pane_cp01_ParamLimits

0x989a,	// (0x0006a96c) att_t_nml_pane_cp01

0x98c6,	// (0x0006a998) att_t_nmlb_pane_ParamLimits

0x98c6,	// (0x0006a998) att_t_nmlb_pane

0x9933,	// (0x0006aa05) att_term_pane_ParamLimits

0x9933,	// (0x0006aa05) att_term_pane

0x997d,	// (0x0006aa4f) main_att_body_pane_g1_ParamLimits

0x997d,	// (0x0006aa4f) main_att_body_pane_g1

0xcdd6,	// (0x0006dea8) att_t_hdr_pane_t1_ParamLimits

0xcdd6,	// (0x0006dea8) att_t_hdr_pane_t1

0xcdef,	// (0x0006dec1) att_t_nml_pane_t1_ParamLimits

0xcdef,	// (0x0006dec1) att_t_nml_pane_t1

0xce14,	// (0x0006dee6) att_btn_pane_t1

0xb8cd,	// (0x0006c99f) bg_button_pane_cp23

0x99a9,	// (0x0006aa7b) att_li_srv_row_pane_ParamLimits

0x99a9,	// (0x0006aa7b) att_li_srv_row_pane

0xce24,	// (0x0006def6) att_t_nmlb_pane_t1_ParamLimits

0xce24,	// (0x0006def6) att_t_nmlb_pane_t1

0xce42,	// (0x0006df14) att_query_pane_t1

0xce51,	// (0x0006df23) att_query_pane_t2

0xce60,	// (0x0006df32) att_query_pane_t3

0x0002,

0xfdb5,	// (0x00070e87) att_query_pane_t

0xce6f,	// (0x0006df41) input_focus_pane_cp11

0xce78,	// (0x0006df4a) att_term_pane_t1_ParamLimits

0xce78,	// (0x0006df4a) att_term_pane_t1

0xb963,	// (0x0006ca35) att_opt_row_pane

0xcdb5,	// (0x0006de87) att_opt_row_pane_g1

0xce95,	// (0x0006df67) att_opt_row_pane_t1_ParamLimits

0xce95,	// (0x0006df67) att_opt_row_pane_t1

0x99b9,	// (0x0006aa8b) att_li_srv_row_pane_g1

0x99c1,	// (0x0006aa93) att_li_srv_row_pane_t1_ParamLimits

0x99c1,	// (0x0006aa93) att_li_srv_row_pane_t1

0x99d6,	// (0x0006aaa8) att_li_srv_row_pane_t2_ParamLimits

0x99d6,	// (0x0006aaa8) att_li_srv_row_pane_t2

0x0001,

0xfdbc,	// (0x00070e8e) att_li_srv_row_pane_t_ParamLimits

0xfdbc,	// (0x00070e8e) att_li_srv_row_pane_t

0xceae,	// (0x0006df80) att_btn_close_pane_g1

0xb963,	// (0x0006ca35) bg_button_pane_cp24

0x99eb,	// (0x0006aabd) main_vod_body_pane_ParamLimits

0x99eb,	// (0x0006aabd) main_vod_body_pane

0x99ff,	// (0x0006aad1) main_vod_body_pane_g1_ParamLimits

0x99ff,	// (0x0006aad1) main_vod_body_pane_g1

0x9a33,	// (0x0006ab05) scroll_pane_cp24_ParamLimits

0x9a33,	// (0x0006ab05) scroll_pane_cp24

0x9a81,	// (0x0006ab53) vod_btn_pane_ParamLimits

0x9a81,	// (0x0006ab53) vod_btn_pane

0x9ac3,	// (0x0006ab95) vod_det_pane_ParamLimits

0x9ac3,	// (0x0006ab95) vod_det_pane

0x9af3,	// (0x0006abc5) vod_logo_g1_ParamLimits

0x9af3,	// (0x0006abc5) vod_logo_g1

0x9b31,	// (0x0006ac03) vod_opt_pane_ParamLimits

0x9b31,	// (0x0006ac03) vod_opt_pane

0x9b64,	// (0x0006ac36) vod_opt_pane_cp01_ParamLimits

0x9b64,	// (0x0006ac36) vod_opt_pane_cp01

0x9b90,	// (0x0006ac62) vod_query_pane_ParamLimits

0x9b90,	// (0x0006ac62) vod_query_pane

0x9bbb,	// (0x0006ac8d) vod_query_pane_cp01_ParamLimits

0x9bbb,	// (0x0006ac8d) vod_query_pane_cp01

0x9bc7,	// (0x0006ac99) vod_t_nml_pane_ParamLimits

0x9bc7,	// (0x0006ac99) vod_t_nml_pane

0x9c70,	// (0x0006ad42) vod_t_nml_pane_cp01_ParamLimits

0x9c70,	// (0x0006ad42) vod_t_nml_pane_cp01

0x9cac,	// (0x0006ad7e) vod_t_sub_pane_ParamLimits

0x9cac,	// (0x0006ad7e) vod_t_sub_pane

0x9cdd,	// (0x0006adaf) vod_t_sub_pane_cp01_ParamLimits

0x9cdd,	// (0x0006adaf) vod_t_sub_pane_cp01

0xce6f,	// (0x0006df41) vod_query_field_pane

0xceb6,	// (0x0006df88) vod_query_pane_t1

0xb8cd,	// (0x0006c99f) bg_button_pane_cp25

0xb8be,	// (0x0006c990) sso_btn_pane_t1_copy2

0x9d09,	// (0x0006addb) vod_t_nml_pane_t1_ParamLimits

0x9d09,	// (0x0006addb) vod_t_nml_pane_t1

0xcec5,	// (0x0006df97) vod_opt_row_pane_ParamLimits

0xcec5,	// (0x0006df97) vod_opt_row_pane

0xced7,	// (0x0006dfa9) vod_t_sub_pane_t1_ParamLimits

0xced7,	// (0x0006dfa9) vod_t_sub_pane_t1

0xcef0,	// (0x0006dfc2) vod_det_cell_pane_ParamLimits

0xcef0,	// (0x0006dfc2) vod_det_cell_pane

0xb963,	// (0x0006ca35) input_focus_pane_cp15

0xcf01,	// (0x0006dfd3) vod_query_field_pane_t1

0xcf0f,	// (0x0006dfe1) vod_opt_row_pane_g1_ParamLimits

0xcf0f,	// (0x0006dfe1) vod_opt_row_pane_g1

0xcf1b,	// (0x0006dfed) vod_opt_row_pane_t1_ParamLimits

0xcf1b,	// (0x0006dfed) vod_opt_row_pane_t1

0xcf3a,	// (0x0006e00c) vod_det_cell_field_pane

0xcf43,	// (0x0006e015) vod_det_cell_pane_g1

0xcf4b,	// (0x0006e01d) vod_det_cell_pane_t1

0xb963,	// (0x0006ca35) input_focus_pane_cp16

0xcf5a,	// (0x0006e02c) vod_det_cell_field_pane_t1

0x9d38,	// (0x0006ae0a) call7_btn_grp_pane_ParamLimits

0x9d38,	// (0x0006ae0a) call7_btn_grp_pane

0x9d52,	// (0x0006ae24) call7_bubble_pane_ParamLimits

0x9d52,	// (0x0006ae24) call7_bubble_pane

0x9d69,	// (0x0006ae3b) cell_call7_btn_pane_ParamLimits

0x9d69,	// (0x0006ae3b) cell_call7_btn_pane

0x9d7d,	// (0x0006ae4f) call7_pane_g1_ParamLimits

0x9d7d,	// (0x0006ae4f) call7_pane_g1

0x9d8c,	// (0x0006ae5e) call7_windows_conf_pane_ParamLimits

0x9d8c,	// (0x0006ae5e) call7_windows_conf_pane

0x9da6,	// (0x0006ae78) popup_call7_1st_window_ParamLimits

0x9da6,	// (0x0006ae78) popup_call7_1st_window

0x9db7,	// (0x0006ae89) popup_call7_2nd_window_ParamLimits

0x9db7,	// (0x0006ae89) popup_call7_2nd_window

0x9dc8,	// (0x0006ae9a) popup_call7_3rd_window_ParamLimits

0x9dc8,	// (0x0006ae9a) popup_call7_3rd_window

0xb963,	// (0x0006ca35) bg_button_pane_cp26

0xb684,	// (0x0006c756) cell_call7_btn_pane_g1

0xb954,	// (0x0006ca26) cell_call7_btn_pane_t1

0xb963,	// (0x0006ca35) bg_popup_window_pane_cp12

0xcf68,	// (0x0006e03a) popup_call7_1st_window_g1

0xcf70,	// (0x0006e042) popup_call7_1st_window_g2

0xcf78,	// (0x0006e04a) popup_call7_1st_window_g3

0x0002,

0xfdc1,	// (0x00070e93) popup_call7_1st_window_g

0xcf80,	// (0x0006e052) popup_call7_1st_window_t1

0xcf8f,	// (0x0006e061) popup_call7_1st_window_t2

0xcf9d,	// (0x0006e06f) popup_call7_1st_window_t3

0x0002,

0xfdc8,	// (0x00070e9a) popup_call7_1st_window_t

0xb963,	// (0x0006ca35) bg_popup_window_pane_cp13

0xcfab,	// (0x0006e07d) popup_call7_2nd_window_g1

0xcfb3,	// (0x0006e085) popup_call7_2nd_window_g2

0xcfbb,	// (0x0006e08d) popup_call7_2nd_window_g3

0x0002,

0xfdcf,	// (0x00070ea1) popup_call7_2nd_window_g

0xcfc3,	// (0x0006e095) popup_call7_2nd_window_t1

0xb963,	// (0x0006ca35) bg_popup_window_pane_cp14

0xcfd2,	// (0x0006e0a4) call7_list_conf_pane

0xcfda,	// (0x0006e0ac) call7_list_conf_row_pane_ParamLimits

0xcfda,	// (0x0006e0ac) call7_list_conf_row_pane

0xcfed,	// (0x0006e0bf) call7_list_conf_row_pane_g1

0xcff5,	// (0x0006e0c7) call7_list_conf_row_pane_g2

0x0001,

0xfdd6,	// (0x00070ea8) call7_list_conf_row_pane_g

0xcffd,	// (0x0006e0cf) call7_list_conf_row_pane_t1

0xb963,	// (0x0006ca35) list_highlight_pane_cp22

0x9371,	// (0x0006a443) sso_option_pane_cp01_ParamLimits

0x9371,	// (0x0006a443) sso_option_pane_cp01

0xbfe9,	// (0x0006d0bb) msg_header_pane_ParamLimits

0xd270,	// (0x0006e342) bg_button_pane_cp01_ParamLimits

0xd284,	// (0x0006e356) input_focus_pane_cp07_ParamLimits

0x76e9,	// (0x000687bb) popup_email_progress_window

0xc0b0,	// (0x0006d182) popup_email_progress_window_g1

0xd00b,	// (0x0006e0dd) popup_email_progress_window_g2

0x0001,

0xfddb,	// (0x00070ead) popup_email_progress_window_g

0xd013,	// (0x0006e0e5) popup_email_progress_window_t1
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

} // end of namespace AknLayoutScalable_Abrw_pnl4_apps_nhd4_lsc_tch_Small
