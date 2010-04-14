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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0006e113 };

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
0xfc31,	// (0x0006dd44) Screen

0xfc3d,	// (0x0006dd50) application_window

0xfc89,	// (0x0006dd9c) area_bottom_pane_ParamLimits

0xfc89,	// (0x0006dd9c) area_bottom_pane

0xfcc2,	// (0x0006ddd5) area_top_pane_ParamLimits

0xfcc2,	// (0x0006ddd5) area_top_pane

0x95a9,	// (0x000776bc) call_video_uplink_pane_ParamLimits

0x95a9,	// (0x000776bc) call_video_uplink_pane

0xfd50,	// (0x0006de63) main_pane_ParamLimits

0xfd50,	// (0x0006de63) main_pane

0xc86b,	// (0x0007a97e) context_pane

0x38e1,	// (0x000719f4) navi_pane

0x3911,	// (0x00071a24) popup_cale_events_window_ParamLimits

0x3911,	// (0x00071a24) popup_cale_events_window

0xc87e,	// (0x0007a991) popup_mup_playback_window

0x3929,	// (0x00071a3c) signal_pane

0xa8ac,	// (0x000789bf) main_browser_pane

0xb3ae,	// (0x000794c1) main_burst_pane

0x35e3,	// (0x000716f6) main_calc_pane

0xc80e,	// (0x0007a921) main_cale_day_pane

0x03a0,	// (0x0006e4b3) main_cale_month_pane

0xc80e,	// (0x0007a921) main_cale_week_pane

0xb3ae,	// (0x000794c1) main_call_pane

0x99e8,	// (0x00077afb) main_call_poc_pane

0xb3ae,	// (0x000794c1) main_camera_pane

0xb3ae,	// (0x000794c1) main_chi_dic_pane

0xb250,	// (0x00079363) main_clock_pane

0x99e8,	// (0x00077afb) main_fmradio_pane

0xb3ae,	// (0x000794c1) main_graph_messa_pane

0x99e8,	// (0x00077afb) main_help_pane

0xa8ac,	// (0x000789bf) main_im_pane

0x9c43,	// (0x00077d56) main_image_pane_ParamLimits

0x9c43,	// (0x00077d56) main_image_pane

0x99e8,	// (0x00077afb) main_location2_pane

0xb3ae,	// (0x000794c1) main_location_pane

0x9c43,	// (0x00077d56) main_messa_pane

0x99e8,	// (0x00077afb) main_mp2_pane

0xb3ae,	// (0x000794c1) main_mp_pane

0x99e8,	// (0x00077afb) main_msg_pane

0x99e8,	// (0x00077afb) main_mup_eq_pane

0x99e8,	// (0x00077afb) main_mup_pane

0xa8ac,	// (0x000789bf) main_notes_pane

0x99e8,	// (0x00077afb) main_pec_pane

0x99e8,	// (0x00077afb) main_phob_pane

0x99e8,	// (0x00077afb) main_pinb_pane

0x99e8,	// (0x00077afb) main_postcard_pane

0x99e8,	// (0x00077afb) main_qdial_pane

0xb3ae,	// (0x000794c1) main_skin_pane

0x99e8,	// (0x00077afb) main_smil2_pane

0xb3ae,	// (0x000794c1) main_smil_pane

0xb3ae,	// (0x000794c1) main_video_pane

0xb3ae,	// (0x000794c1) main_video_tele_pane

0x9c43,	// (0x00077d56) main_viewer_pane_ParamLimits

0x9c43,	// (0x00077d56) main_viewer_pane

0xb3ae,	// (0x000794c1) main_vorec_pane

0x3639,	// (0x0007174c) popup_blid_sat_info_window_ParamLimits

0x3639,	// (0x0007174c) popup_blid_sat_info_window

0x369d,	// (0x000717b0) popup_dyc_status_message_window_ParamLimits

0x369d,	// (0x000717b0) popup_dyc_status_message_window

0x36b7,	// (0x000717ca) popup_grid_large_graphic_window_ParamLimits

0x36b7,	// (0x000717ca) popup_grid_large_graphic_window

0x3779,	// (0x0007188c) popup_loc_request_window_ParamLimits

0x3779,	// (0x0007188c) popup_loc_request_window

0x38b5,	// (0x000719c8) popup_wml_address_window_ParamLimits

0x38b5,	// (0x000719c8) popup_wml_address_window

0x3421,	// (0x00071534) call_muted_g1

0x30b5,	// (0x000711c8) popup_call_audio_conf_window_ParamLimits

0x30b5,	// (0x000711c8) popup_call_audio_conf_window

0x3431,	// (0x00071544) popup_call_audio_first_window_ParamLimits

0x3431,	// (0x00071544) popup_call_audio_first_window

0x34a7,	// (0x000715ba) popup_call_audio_in_window_ParamLimits

0x34a7,	// (0x000715ba) popup_call_audio_in_window

0x34e3,	// (0x000715f6) popup_call_audio_out_window_ParamLimits

0x34e3,	// (0x000715f6) popup_call_audio_out_window

0x351d,	// (0x00071630) popup_call_audio_second_window_ParamLimits

0x351d,	// (0x00071630) popup_call_audio_second_window

0x3573,	// (0x00071686) popup_call_audio_wait_window_ParamLimits

0x3573,	// (0x00071686) popup_call_audio_wait_window

0x35a8,	// (0x000716bb) popup_number_entry_window_ParamLimits

0x35a8,	// (0x000716bb) popup_number_entry_window

0x95d5,	// (0x000776e8) bg_popup_call_pane_cp05_ParamLimits

0x95d5,	// (0x000776e8) bg_popup_call_pane_cp05

0x95f5,	// (0x00077708) popup_number_entry_window_t1

0x9608,	// (0x0007771b) popup_number_entry_window_t2

0x961a,	// (0x0007772d) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0007d1d9) popup_number_entry_window_t

0x962c,	// (0x0007773f) text_title_cp2

0x963f,	// (0x00077752) bg_popup_call_pane_cp_ParamLimits

0x963f,	// (0x00077752) bg_popup_call_pane_cp

0x964d,	// (0x00077760) call_thumbnail_pane

0x9655,	// (0x00077768) popup_call_audio_in_window_g1_ParamLimits

0x9655,	// (0x00077768) popup_call_audio_in_window_g1

0x9661,	// (0x00077774) popup_call_audio_in_window_g2_ParamLimits

0x9661,	// (0x00077774) popup_call_audio_in_window_g2

0x966d,	// (0x00077780) popup_call_audio_in_window_g3_ParamLimits

0x966d,	// (0x00077780) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0007d1e2) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0007d1e2) popup_call_audio_in_window_g

0x9679,	// (0x0007778c) popup_call_audio_in_window_t1_ParamLimits

0x9679,	// (0x0007778c) popup_call_audio_in_window_t1

0x9695,	// (0x000777a8) popup_call_audio_in_window_t2_ParamLimits

0x9695,	// (0x000777a8) popup_call_audio_in_window_t2

0x96b1,	// (0x000777c4) popup_call_audio_in_window_t3_ParamLimits

0x96b1,	// (0x000777c4) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0007d1e9) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0007d1e9) popup_call_audio_in_window_t

0x963f,	// (0x00077752) bg_popup_call_pane_cp01_ParamLimits

0x963f,	// (0x00077752) bg_popup_call_pane_cp01

0x964d,	// (0x00077760) call_thumbnail_pane_cp02

0x96c4,	// (0x000777d7) call_type_pane_cp022

0x96cc,	// (0x000777df) popup_call_audio_out_window_g1_ParamLimits

0x96cc,	// (0x000777df) popup_call_audio_out_window_g1

0x96de,	// (0x000777f1) popup_call_audio_out_window_g2_ParamLimits

0x96de,	// (0x000777f1) popup_call_audio_out_window_g2

0x96ea,	// (0x000777fd) popup_call_audio_out_window_g3_ParamLimits

0x96ea,	// (0x000777fd) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0007d1f0) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0007d1f0) popup_call_audio_out_window_g

0x96fc,	// (0x0007780f) popup_call_audio_out_window_t1_ParamLimits

0x96fc,	// (0x0007780f) popup_call_audio_out_window_t1

0x9714,	// (0x00077827) popup_call_audio_out_window_t2_ParamLimits

0x9714,	// (0x00077827) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0007d1f7) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0007d1f7) popup_call_audio_out_window_t

0x9729,	// (0x0007783c) bg_popup_call_pane_ParamLimits

0x9729,	// (0x0007783c) bg_popup_call_pane

0xff0f,	// (0x0006e022) call_thumbnail_pane_cp_ParamLimits

0xff0f,	// (0x0006e022) call_thumbnail_pane_cp

0x97ad,	// (0x000778c0) call_type_pane_cp01_ParamLimits

0x97ad,	// (0x000778c0) call_type_pane_cp01

0x97f1,	// (0x00077904) popup_call_audio_first_window_g1_ParamLimits

0x97f1,	// (0x00077904) popup_call_audio_first_window_g1

0x983d,	// (0x00077950) popup_call_audio_first_window_g2_ParamLimits

0x983d,	// (0x00077950) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0007d1fc) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0007d1fc) popup_call_audio_first_window_g

0x9881,	// (0x00077994) popup_call_audio_first_window_t1_ParamLimits

0x9881,	// (0x00077994) popup_call_audio_first_window_t1

0x992d,	// (0x00077a40) popup_call_audio_first_window_t4_ParamLimits

0x992d,	// (0x00077a40) popup_call_audio_first_window_t4

0x99b9,	// (0x00077acc) popup_call_audio_first_window_t5_ParamLimits

0x99b9,	// (0x00077acc) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0007d201) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0007d201) popup_call_audio_first_window_t

0x99e8,	// (0x00077afb) bg_popup_call_pane_cp02

0x99f2,	// (0x00077b05) call_type_pane_cp023

0x99fa,	// (0x00077b0d) popup_call_audio_wait_window_g1

0x9a02,	// (0x00077b15) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0007d208) popup_call_audio_wait_window_g

0x9a0a,	// (0x00077b1d) popup_call_audio_wait_window_t3

0x9a18,	// (0x00077b2b) bg_popup_call_pane_cp03_ParamLimits

0x9a18,	// (0x00077b2b) bg_popup_call_pane_cp03

0x9a78,	// (0x00077b8b) call_thumbnail_pane_cp011_ParamLimits

0x9a78,	// (0x00077b8b) call_thumbnail_pane_cp011

0x9a84,	// (0x00077b97) call_type_pane_cp034_ParamLimits

0x9a84,	// (0x00077b97) call_type_pane_cp034

0x9ac0,	// (0x00077bd3) popup_call_audio_second_window_g1_ParamLimits

0x9ac0,	// (0x00077bd3) popup_call_audio_second_window_g1

0x9afc,	// (0x00077c0f) popup_call_audio_second_window_g2_ParamLimits

0x9afc,	// (0x00077c0f) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0007d20d) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0007d20d) popup_call_audio_second_window_g

0x9b38,	// (0x00077c4b) popup_call_audio_second_window_t1_ParamLimits

0x9b38,	// (0x00077c4b) popup_call_audio_second_window_t1

0x9bb9,	// (0x00077ccc) popup_call_audio_second_window_t2_ParamLimits

0x9bb9,	// (0x00077ccc) popup_call_audio_second_window_t2

0x9bef,	// (0x00077d02) popup_call_audio_second_window_t3_ParamLimits

0x9bef,	// (0x00077d02) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0007d212) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0007d212) popup_call_audio_second_window_t

0x99e8,	// (0x00077afb) bg_popup_call_pane_cp04

0x9c25,	// (0x00077d38) list_conf_pane

0x9c2d,	// (0x00077d40) popup_call_audio_conf_window_t1

0x9c3b,	// (0x00077d4e) call_thumbnail_pane_g1

0x9c43,	// (0x00077d56) bg_pinb_pane_ParamLimits

0x9c43,	// (0x00077d56) bg_pinb_pane

0x9c51,	// (0x00077d64) find_pinb_pane

0x9c5a,	// (0x00077d6d) listscroll_pinb_pane_ParamLimits

0x9c5a,	// (0x00077d6d) listscroll_pinb_pane

0x9c69,	// (0x00077d7c) pinb_bg_pane_g1

0xff33,	// (0x0006e046) pinb_bg_pane_g2

0xff3f,	// (0x0006e052) pinb_bg_pane_g3

0xff4b,	// (0x0006e05e) pinb_bg_pane_g4

0xff57,	// (0x0006e06a) pinb_bg_pane_g5

0xff63,	// (0x0006e076) pinb_bg_pane_g6

0xff6e,	// (0x0006e081) pinb_bg_pane_g7

0xff79,	// (0x0006e08c) pinb_bg_pane_g8

0xff84,	// (0x0006e097) pinb_bg_pane_g9

0xff8e,	// (0x0006e0a1) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0007d219) pinb_bg_pane_g

0xffab,	// (0x0006e0be) grid_pinb_pane

0xffb6,	// (0x0006e0c9) list_pinb_pane

0xffc1,	// (0x0006e0d4) scroll_pane_cp01_ParamLimits

0xffc1,	// (0x0006e0d4) scroll_pane_cp01

0x9c73,	// (0x00077d86) find_pinb_pane_g1_ParamLimits

0x9c73,	// (0x00077d86) find_pinb_pane_g1

0x9c8b,	// (0x00077d9e) find_pinb_pane_t1

0x9c9d,	// (0x00077db0) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0007d233) find_pinb_pane_t

0x9cb2,	// (0x00077dc5) input_focus_pane_cp01_ParamLimits

0x9cb2,	// (0x00077dc5) input_focus_pane_cp01

0xffd3,	// (0x0006e0e6) cell_pinb_pane_ParamLimits

0xffd3,	// (0x0006e0e6) cell_pinb_pane

0xfff5,	// (0x0006e108) cell_pinb_pane_g1_ParamLimits

0xfff5,	// (0x0006e108) cell_pinb_pane_g1

0x000a,	// (0x0006e11d) cell_pinb_pane_g2_ParamLimits

0x000a,	// (0x0006e11d) cell_pinb_pane_g2

0x9cbe,	// (0x00077dd1) cell_pinb_pane_g3_ParamLimits

0x9cbe,	// (0x00077dd1) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0007d238) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0007d238) cell_pinb_pane_g

0x99e8,	// (0x00077afb) grid_highlight_pane_cp01

0x0016,	// (0x0006e129) list_pinb_item_pane_ParamLimits

0x0016,	// (0x0006e129) list_pinb_item_pane

0x99e8,	// (0x00077afb) list_highlight_pane_cp02

0x0028,	// (0x0006e13b) list_pinb_item_pane_g1_ParamLimits

0x0028,	// (0x0006e13b) list_pinb_item_pane_g1

0x0035,	// (0x0006e148) list_pinb_item_pane_g2_ParamLimits

0x0035,	// (0x0006e148) list_pinb_item_pane_g2

0x0041,	// (0x0006e154) list_pinb_item_pane_g3_ParamLimits

0x0041,	// (0x0006e154) list_pinb_item_pane_g3

0x0052,	// (0x0006e165) list_pinb_item_pane_g4_ParamLimits

0x0052,	// (0x0006e165) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0007d23f) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0007d23f) list_pinb_item_pane_g

0x005e,	// (0x0006e171) list_pinb_item_pane_t1_ParamLimits

0x005e,	// (0x0006e171) list_pinb_item_pane_t1

0x0093,	// (0x0006e1a6) calc_display_pane

0x00bb,	// (0x0006e1ce) calc_paper_pane

0x00de,	// (0x0006e1f1) grid_calc_pane

0x99e8,	// (0x00077afb) bg_list_pane_cp01

0x010c,	// (0x0006e21f) clock_g1

0x0114,	// (0x0006e227) clock_g2

0x0001,

0xf135,	// (0x0007d248) clock_g

0x011c,	// (0x0006e22f) clock_t1_ParamLimits

0x011c,	// (0x0006e22f) clock_t1

0x0131,	// (0x0006e244) clock_t2_ParamLimits

0x0131,	// (0x0006e244) clock_t2

0x0143,	// (0x0006e256) clock_t3_ParamLimits

0x0143,	// (0x0006e256) clock_t3

0x0155,	// (0x0006e268) clock_t4_ParamLimits

0x0155,	// (0x0006e268) clock_t4

0x0167,	// (0x0006e27a) clock_t5_ParamLimits

0x0167,	// (0x0006e27a) clock_t5

0x017c,	// (0x0006e28f) clock_t6_ParamLimits

0x017c,	// (0x0006e28f) clock_t6

0x018e,	// (0x0006e2a1) clock_t7_ParamLimits

0x018e,	// (0x0006e2a1) clock_t7

0x01a0,	// (0x0006e2b3) clock_t8_ParamLimits

0x01a0,	// (0x0006e2b3) clock_t8

0x01b4,	// (0x0006e2c7) clock_t9_ParamLimits

0x01b4,	// (0x0006e2c7) clock_t9

0x0008,

0xf13a,	// (0x0007d24d) clock_t_ParamLimits

0xf13a,	// (0x0007d24d) clock_t

0x9cd2,	// (0x00077de5) popup_clock_analogue_window_cp02

0x9cd2,	// (0x00077de5) popup_clock_digital_window_cp01

0x9cda,	// (0x00077ded) listscroll_help_pane

0x99e8,	// (0x00077afb) phob_pre_status_pane

0x9ce4,	// (0x00077df7) grid_qdial_pane

0x9c43,	// (0x00077d56) listscroll_mce_pane

0x9c43,	// (0x00077d56) bg_notes_pane

0x9cee,	// (0x00077e01) list_notes_pane

0x01ca,	// (0x0006e2dd) scroll_pane_cp06

0x9cfc,	// (0x00077e0f) bg_calc_paper_pane

0x9d1a,	// (0x00077e2d) list_calc_pane

0xa8ac,	// (0x000789bf) bg_calc_display_pane

0x01de,	// (0x0006e2f1) calc_display_pane_t1

0x01f0,	// (0x0006e303) calc_display_pane_t2

0x9d34,	// (0x00077e47) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0007d260) calc_display_pane_t

0x0202,	// (0x0006e315) cell_calc_pane_ParamLimits

0x0202,	// (0x0006e315) cell_calc_pane

0xa8b8,	// (0x000789cb) bg_calc_paper_pane_g1

0xa8c4,	// (0x000789d7) bg_calc_paper_pane_g2

0xa8d0,	// (0x000789e3) bg_calc_paper_pane_g3

0xa8dc,	// (0x000789ef) bg_calc_paper_pane_g4

0xa8e8,	// (0x000789fb) bg_calc_paper_pane_g5

0x023f,	// (0x0006e352) bg_calc_paper_pane_g6

0x0252,	// (0x0006e365) bg_calc_paper_pane_g7

0x0265,	// (0x0006e378) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0007d267) bg_calc_paper_pane_g

0x0276,	// (0x0006e389) calc_bg_paper_pane_g9

0x0287,	// (0x0006e39a) list_calc_item_pane_ParamLimits

0x0287,	// (0x0006e39a) list_calc_item_pane

0xa8f4,	// (0x00078a07) list_calc_item_pane_g1

0x9d46,	// (0x00077e59) list_calc_item_pane_t1_ParamLimits

0x9d46,	// (0x00077e59) list_calc_item_pane_t1

0x029f,	// (0x0006e3b2) list_calc_item_pane_t2_ParamLimits

0x029f,	// (0x0006e3b2) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0007d278) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0007d278) list_calc_item_pane_t

0xa901,	// (0x00078a14) cell_calc_pane_g1

0xa90b,	// (0x00078a1e) grid_highlight_pane_cp02

0xa92d,	// (0x00078a40) bg_calc_display_pane_g1

0x9d58,	// (0x00077e6b) bg_calc_display_pane_g2

0xa936,	// (0x00078a49) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0007d282) bg_calc_display_pane_g

0x02d1,	// (0x0006e3e4) cell_qdial_pane_ParamLimits

0x02d1,	// (0x0006e3e4) cell_qdial_pane

0x02e5,	// (0x0006e3f8) cell_qdial_pane_g1_ParamLimits

0x02e5,	// (0x0006e3f8) cell_qdial_pane_g1

0x02fb,	// (0x0006e40e) cell_qdial_pane_g2_ParamLimits

0x02fb,	// (0x0006e40e) cell_qdial_pane_g2

0xa93f,	// (0x00078a52) cell_qdial_pane_g3_ParamLimits

0xa93f,	// (0x00078a52) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0007d289) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0007d289) cell_qdial_pane_g

0x0322,	// (0x0006e435) cell_qdial_pane_t1_ParamLimits

0x0322,	// (0x0006e435) cell_qdial_pane_t1

0x033a,	// (0x0006e44d) cell_qdial_pane_t2_ParamLimits

0x033a,	// (0x0006e44d) cell_qdial_pane_t2

0x034d,	// (0x0006e460) cell_qdial_pane_t3_ParamLimits

0x034d,	// (0x0006e460) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0007d292) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0007d292) cell_qdial_pane_t

0x99e8,	// (0x00077afb) grid_highlight_pane_cp04

0xa94b,	// (0x00078a5e) thumbnail_qdial_pane_ParamLimits

0xa94b,	// (0x00078a5e) thumbnail_qdial_pane

0xa9a7,	// (0x00078aba) list_help_pane

0xa9b0,	// (0x00078ac3) scroll_pane_cp02

0x0360,	// (0x0006e473) help_list_pane_t1_ParamLimits

0x0360,	// (0x0006e473) help_list_pane_t1

0x9d62,	// (0x00077e75) bg_notes_pane_g2

0x9d6a,	// (0x00077e7d) bg_notes_pane_g3

0x9d72,	// (0x00077e85) notes_bg_pane_g1

0x9d7a,	// (0x00077e8d) notes_bg_pane_g4

0x9d82,	// (0x00077e95) notes_bg_pane_g5

0x9d8a,	// (0x00077e9d) notes_bg_pane_g6

0x9d92,	// (0x00077ea5) notes_bg_pane_g7

0x9d9a,	// (0x00077ead) notes_bg_pane_g8

0x9da2,	// (0x00077eb5) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0007d2b0) notes_bg_pane_g

0x037e,	// (0x0006e491) list_notes_text_pane_ParamLimits

0x037e,	// (0x0006e491) list_notes_text_pane

0xa9b9,	// (0x00078acc) list_notes_text_pane_g1

0x0392,	// (0x0006e4a5) list_notes_text_pane_t1

0x03a0,	// (0x0006e4b3) listscroll_cale_week_pane

0x03d6,	// (0x0006e4e9) bg_cale_heading_pane

0xa9d3,	// (0x00078ae6) bg_cale_pane_cp01

0x03ff,	// (0x0006e512) cale_week_corner_pane

0x041e,	// (0x0006e531) cale_week_day_heading_pane

0x044c,	// (0x0006e55f) cale_week_scroll_pane_g1

0x0470,	// (0x0006e583) cale_week_scroll_pane_g2

0x0488,	// (0x0006e59b) cale_week_scroll_pane_g3

0x04a0,	// (0x0006e5b3) cale_week_scroll_pane_g4

0x04bc,	// (0x0006e5cf) cale_week_scroll_pane_g5

0x04dc,	// (0x0006e5ef) cale_week_scroll_pane_g6

0x04fc,	// (0x0006e60f) cale_week_scroll_pane_g7

0x0520,	// (0x0006e633) cale_week_scroll_pane_g8

0x0544,	// (0x0006e657) cale_week_scroll_pane_g9

0x0561,	// (0x0006e674) cale_week_scroll_pane_g10

0x057e,	// (0x0006e691) cale_week_scroll_pane_g11

0x059b,	// (0x0006e6ae) cale_week_scroll_pane_g12

0x05b8,	// (0x0006e6cb) cale_week_scroll_pane_g13

0x05d5,	// (0x0006e6e8) cale_week_scroll_pane_g14

0x05fe,	// (0x0006e711) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0007d2bf) cale_week_scroll_pane_g

0x064b,	// (0x0006e75e) cale_week_time_pane

0x066f,	// (0x0006e782) grid_cale_week_pane

0xaa03,	// (0x00078b16) scroll_pane_cp08

0x06a6,	// (0x0006e7b9) cell_cale_week_pane_ParamLimits

0x06a6,	// (0x0006e7b9) cell_cale_week_pane

0x0736,	// (0x0006e849) cale_week_day_heading_pane_t1

0x0780,	// (0x0006e893) cale_week_day_heading_pane_t2

0x07cf,	// (0x0006e8e2) cale_week_day_heading_pane_t3

0x081e,	// (0x0006e931) cale_week_day_heading_pane_t4

0x086d,	// (0x0006e980) cale_week_day_heading_pane_t5

0x08c0,	// (0x0006e9d3) cale_week_day_heading_pane_t6

0x0917,	// (0x0006ea2a) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0007d2e0) cale_week_day_heading_pane_t

0xaa25,	// (0x00078b38) bg_cale_side_pane

0x0961,	// (0x0006ea74) cale_week_time_pane_t1

0x099b,	// (0x0006eaae) cale_week_time_pane_t2

0x09d5,	// (0x0006eae8) cale_week_time_pane_t3

0x0a0f,	// (0x0006eb22) cale_week_time_pane_t4

0x0a49,	// (0x0006eb5c) cale_week_time_pane_t5

0x0a83,	// (0x0006eb96) cale_week_time_pane_t6

0x0abd,	// (0x0006ebd0) cale_week_time_pane_t7

0x0af7,	// (0x0006ec0a) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0007d2ef) cale_week_time_pane_t

0x0b37,	// (0x0006ec4a) cell_cale_week_pane_g2

0x0b56,	// (0x0006ec69) cell_cale_week_pane_g3_ParamLimits

0x0b56,	// (0x0006ec69) cell_cale_week_pane_g3

0xaa33,	// (0x00078b46) grid_highlight_pane_cp07

0xaa3b,	// (0x00078b4e) listscroll_gms_pane

0xaa45,	// (0x00078b58) grid_gms_pane

0xaa4e,	// (0x00078b61) listscroll_gms_pane_g1

0xaa56,	// (0x00078b69) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0007d300) listscroll_gms_pane_g

0x0b6e,	// (0x0006ec81) scroll_pane_cp010

0x0b79,	// (0x0006ec8c) cell_gms_pane_ParamLimits

0x0b79,	// (0x0006ec8c) cell_gms_pane

0x0b93,	// (0x0006eca6) cell_gms_pane_g1

0xaa5e,	// (0x00078b71) cell_gms_pane_g2

0xaa66,	// (0x00078b79) cell_gms_pane_g3

0xaa6f,	// (0x00078b82) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0007d305) cell_gms_pane_g

0xaa78,	// (0x00078b8b) grid_highlight_pane_cp09

0x33c9,	// (0x000714dc) phob_pre_status_pane_g1

0x33d1,	// (0x000714e4) phob_pre_status_pane_g2

0x33d9,	// (0x000714ec) phob_pre_status_pane_g3

0x33e1,	// (0x000714f4) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0007d6f4) phob_pre_status_pane_g

0x33f1,	// (0x00071504) phob_pre_status_pane_t1

0x3401,	// (0x00071514) phob_pre_status_pane_t2

0x3411,	// (0x00071524) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0007d6ff) phob_pre_status_pane_t

0x99e8,	// (0x00077afb) bg_list_pane_cp05

0x0ba3,	// (0x0006ecb6) grid_vorec_pane

0x0baf,	// (0x0006ecc2) vorec_t1

0x0bbd,	// (0x0006ecd0) vorec_t2

0x0bcb,	// (0x0006ecde) vorec_t3

0x0bd9,	// (0x0006ecec) vorec_t4

0x0be7,	// (0x0006ecfa) vorec_t5

0x9daa,	// (0x00077ebd) vorec_t6

0x0006,

0xf1fb,	// (0x0007d30e) vorec_t

0x0c03,	// (0x0006ed16) wait_bar_pane_cp01

0x0c0b,	// (0x0006ed1e) cell_vorec_pane_ParamLimits

0x0c0b,	// (0x0006ed1e) cell_vorec_pane

0x9db8,	// (0x00077ecb) cell_vorec_pane_g1

0x99e8,	// (0x00077afb) grid_highlight_pane_cp05

0x0c36,	// (0x0006ed49) cams_zoom_pane

0x0c45,	// (0x0006ed58) image_vga_pane

0x0c5f,	// (0x0006ed72) main_camera_pane_g1

0x0c71,	// (0x0006ed84) main_camera_pane_g2

0x0c81,	// (0x0006ed94) main_camera_pane_g3

0x0c95,	// (0x0006eda8) main_camera_pane_g4

0x0ca9,	// (0x0006edbc) main_camera_pane_g5

0x0cbd,	// (0x0006edd0) main_camera_pane_g6

0x0cd1,	// (0x0006ede4) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0007d31d) main_camera_pane_g

0x0ce5,	// (0x0006edf8) main_camera_pane_t1

0x0cfb,	// (0x0006ee0e) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0007d32e) main_camera_pane_t

0x0d39,	// (0x0006ee4c) cams_zoom_pane_cp_ParamLimits

0x0d39,	// (0x0006ee4c) cams_zoom_pane_cp

0x0d61,	// (0x0006ee74) image_cif_pane_ParamLimits

0x0d61,	// (0x0006ee74) image_cif_pane

0x0d9c,	// (0x0006eeaf) image_subqcif_pane

0x0da6,	// (0x0006eeb9) main_video_pane_g1_ParamLimits

0x0da6,	// (0x0006eeb9) main_video_pane_g1

0x0dca,	// (0x0006eedd) main_video_pane_g2_ParamLimits

0x0dca,	// (0x0006eedd) main_video_pane_g2

0x0e00,	// (0x0006ef13) main_video_pane_g3_ParamLimits

0x0e00,	// (0x0006ef13) main_video_pane_g3

0x0e2e,	// (0x0006ef41) main_video_pane_g4_ParamLimits

0x0e2e,	// (0x0006ef41) main_video_pane_g4

0x0e5c,	// (0x0006ef6f) main_video_pane_g5_ParamLimits

0x0e5c,	// (0x0006ef6f) main_video_pane_g5

0xaa8c,	// (0x00078b9f) main_video_pane_g6_ParamLimits

0xaa8c,	// (0x00078b9f) main_video_pane_g6

0x0006,

0xf220,	// (0x0007d333) main_video_pane_g_ParamLimits

0xf220,	// (0x0007d333) main_video_pane_g

0x0e85,	// (0x0006ef98) main_video_pane_t1_ParamLimits

0x0e85,	// (0x0006ef98) main_video_pane_t1

0xaaa6,	// (0x00078bb9) cams_zoom_pane_g1

0xaaaf,	// (0x00078bc2) cams_zoom_pane_g2

0xaab8,	// (0x00078bcb) cams_zoom_pane_g3

0xaac1,	// (0x00078bd4) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0007d342) cams_zoom_pane_g

0x0ee2,	// (0x0006eff5) grid_cams_pane

0x0efc,	// (0x0006f00f) linegrid_cams_pane

0x0f0e,	// (0x0006f021) cell_cams_pane_ParamLimits

0x0f0e,	// (0x0006f021) cell_cams_pane

0xaaca,	// (0x00078bdd) cams_burst_image_pane

0xaad2,	// (0x00078be5) cell_cams_pane_g1

0x99e8,	// (0x00077afb) grid_highlight_pane_cp03

0xa901,	// (0x00078a14) mp_bg_pane_g1

0x99e8,	// (0x00077afb) bg_list_pane_cp03

0xc731,	// (0x0007a844) bg_mp_pane

0xc739,	// (0x0007a84c) grid_mp_pane

0xc741,	// (0x0007a854) media_player_g1

0xc74b,	// (0x0007a85e) media_player_t1

0xc759,	// (0x0007a86c) media_player_t2

0xc767,	// (0x0007a87a) media_player_t3

0xc775,	// (0x0007a888) media_player_t4

0xc783,	// (0x0007a896) media_player_t5

0xc791,	// (0x0007a8a4) media_player_t6

0xc79f,	// (0x0007a8b2) media_player_t7

0x0006,

0xf5cb,	// (0x0007d6de) media_player_t

0xc7ad,	// (0x0007a8c0) wait_bar_pane_cp02

0xf5b0,	// (0x0007d6c3) main_usb_pane_t

0x33c0,	// (0x000714d3) cell_mp_pane

0xa901,	// (0x00078a14) cell_mp_pane_g1

0x99e8,	// (0x00077afb) grid_highlight_pane_cp06

0xaada,	// (0x00078bed) grid_skin_colour_pane

0xaae2,	// (0x00078bf5) list_highlight_pane_cp03

0x1023,	// (0x0006f136) skin_g1

0xaaea,	// (0x00078bfd) skin_t1

0xaaf9,	// (0x00078c0c) skin_t2

0x0001,

0xf264,	// (0x0007d377) skin_t

0x102b,	// (0x0006f13e) cell_skin_colour_pane_ParamLimits

0x102b,	// (0x0006f13e) cell_skin_colour_pane

0xab07,	// (0x00078c1a) cell_skin_colour_pane_g1

0x109e,	// (0x0006f1b1) call_video_g1_ParamLimits

0x109e,	// (0x0006f1b1) call_video_g1

0x10ba,	// (0x0006f1cd) call_video_g2_ParamLimits

0x10ba,	// (0x0006f1cd) call_video_g2

0x0001,

0xf269,	// (0x0007d37c) call_video_g_ParamLimits

0xf269,	// (0x0007d37c) call_video_g

0x10ff,	// (0x0006f212) call_video_uplink_pane_cp1_ParamLimits

0x10ff,	// (0x0006f212) call_video_uplink_pane_cp1

0xab19,	// (0x00078c2c) call_video_uplink_pane_cp2

0x11a0,	// (0x0006f2b3) video_down_crop_pane_ParamLimits

0x11a0,	// (0x0006f2b3) video_down_crop_pane

0x1289,	// (0x0006f39c) video_down_pane_ParamLimits

0x1289,	// (0x0006f39c) video_down_pane

0xab21,	// (0x00078c34) video_down_subqcif_pane_ParamLimits

0xab21,	// (0x00078c34) video_down_subqcif_pane

0xab3b,	// (0x00078c4e) video_down_subqcif_pane_cp_ParamLimits

0xab3b,	// (0x00078c4e) video_down_subqcif_pane_cp

0xab63,	// (0x00078c76) im_reading_pane_ParamLimits

0xab63,	// (0x00078c76) im_reading_pane

0x1392,	// (0x0006f4a5) im_writing_pane_ParamLimits

0x1392,	// (0x0006f4a5) im_writing_pane

0x13ae,	// (0x0006f4c1) im_reading_pane_t1

0xab7d,	// (0x00078c90) list_im_pane

0xab8e,	// (0x00078ca1) scroll_pane_cp07

0x13ea,	// (0x0006f4fd) im_writing_pane_t1_ParamLimits

0x13ea,	// (0x0006f4fd) im_writing_pane_t1

0xaba7,	// (0x00078cba) im_writing_pane_t2_ParamLimits

0xaba7,	// (0x00078cba) im_writing_pane_t2

0x0001,

0xf273,	// (0x0007d386) im_writing_pane_t_ParamLimits

0xf273,	// (0x0007d386) im_writing_pane_t

0x99e8,	// (0x00077afb) input_focus_pane_cp04

0x99e8,	// (0x00077afb) input_focus_pane_cp05

0x13ff,	// (0x0006f512) list_im_single_pane_ParamLimits

0x13ff,	// (0x0006f512) list_im_single_pane

0x1415,	// (0x0006f528) list_single_im_pane_t1

0x3380,	// (0x00071493) blid_accuracy_pane

0x3388,	// (0x0007149b) blid_compass_pane

0x3392,	// (0x000714a5) main_location_t1

0x33a2,	// (0x000714b5) main_location_t2

0x33b2,	// (0x000714c5) main_location_t3

0x0002,

0xf5da,	// (0x0007d6ed) main_location_t

0x99e8,	// (0x00077afb) aid_levels_location

0xa901,	// (0x00078a14) blid_accuracy_pane_g1

0xa901,	// (0x00078a14) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0007d3e8) blid_accuracy_pane_g

0xabef,	// (0x00078d02) wml_content_pane

0xac2d,	// (0x00078d40) wml_button_pane_ParamLimits

0xac2d,	// (0x00078d40) wml_button_pane

0x1424,	// (0x0006f537) wml_list_single_large_pane_ParamLimits

0x1424,	// (0x0006f537) wml_list_single_large_pane

0x143a,	// (0x0006f54d) wml_list_single_medium_pane_ParamLimits

0x143a,	// (0x0006f54d) wml_list_single_medium_pane

0x1451,	// (0x0006f564) wml_list_single_small_pane_ParamLimits

0x1451,	// (0x0006f564) wml_list_single_small_pane

0xac41,	// (0x00078d54) wml_selection_box_pane_ParamLimits

0xac41,	// (0x00078d54) wml_selection_box_pane

0xac54,	// (0x00078d67) wml_list_single_pane_t1

0xac63,	// (0x00078d76) wml_list_single_medium_pane_t1

0xac72,	// (0x00078d85) wml_list_single_large_pane_t1

0xac81,	// (0x00078d94) input_focus_pane_cp02_ParamLimits

0xac81,	// (0x00078d94) input_focus_pane_cp02

0xac94,	// (0x00078da7) wml_selection_box_pane_g1

0xac9d,	// (0x00078db0) wml_selection_box_pane_t1_ParamLimits

0xac9d,	// (0x00078db0) wml_selection_box_pane_t1

0x9c43,	// (0x00077d56) bg_wml_button_pane_ParamLimits

0x9c43,	// (0x00077d56) bg_wml_button_pane

0xacb5,	// (0x00078dc8) wml_button_pane_g1

0xacbd,	// (0x00078dd0) wml_button_pane_t1

0xacb5,	// (0x00078dc8) wml_button_bg_pane_g1

0xaccd,	// (0x00078de0) wml_button_bg_pane_g2

0xacd5,	// (0x00078de8) wml_button_bg_pane_g3

0xacdd,	// (0x00078df0) wml_button_bg_pane_g4

0xace5,	// (0x00078df8) wml_button_bg_pane_g5

0xaced,	// (0x00078e00) wml_button_bg_pane_g6

0xacf5,	// (0x00078e08) wml_button_bg_pane_g7

0xacfd,	// (0x00078e10) wml_button_bg_pane_g8

0xad05,	// (0x00078e18) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0007d38b) wml_button_bg_pane_g

0x146d,	// (0x0006f580) bg_list_pane_cp02

0xad0d,	// (0x00078e20) mce_header_pane_ParamLimits

0xad0d,	// (0x00078e20) mce_header_pane

0xad23,	// (0x00078e36) mce_icon_pane

0xad23,	// (0x00078e36) mce_image_pane

0xad2c,	// (0x00078e3f) mce_text_pane_ParamLimits

0xad2c,	// (0x00078e3f) mce_text_pane

0x1477,	// (0x0006f58a) scroll_pane_cp03

0xac25,	// (0x00078d38) scroll_pane_cp04

0xad3f,	// (0x00078e52) scroll_pane_cp05_ParamLimits

0xad3f,	// (0x00078e52) scroll_pane_cp05

0x1481,	// (0x0006f594) mce_header_field_pane_ParamLimits

0x1481,	// (0x0006f594) mce_header_field_pane

0x149a,	// (0x0006f5ad) mce_header_field_pane_2_ParamLimits

0x149a,	// (0x0006f5ad) mce_header_field_pane_2

0x14b0,	// (0x0006f5c3) mce_header_field_pane_3

0x14b8,	// (0x0006f5cb) list_single_mce_message_pane_ParamLimits

0x14b8,	// (0x0006f5cb) list_single_mce_message_pane

0x14d1,	// (0x0006f5e4) list_single_mce_smart_pane_ParamLimits

0x14d1,	// (0x0006f5e4) list_single_mce_smart_pane

0xad4b,	// (0x00078e5e) input_focus_pane_cp03

0xad54,	// (0x00078e67) list_header_data_pane

0x14f5,	// (0x0006f608) mce_header_field_pane_t1

0x1505,	// (0x0006f618) list_single_mce_header_pane_ParamLimits

0x1505,	// (0x0006f618) list_single_mce_header_pane

0xad5c,	// (0x00078e6f) list_single_mce_header_pane_t1

0xad6b,	// (0x00078e7e) list_single_mce_message_pane_g1

0xad73,	// (0x00078e86) list_single_mce_message_pane_t1

0x153f,	// (0x0006f652) bg_cale_heading_pane_cp01_ParamLimits

0x153f,	// (0x0006f652) bg_cale_heading_pane_cp01

0xad81,	// (0x00078e94) bg_cale_pane_cp02_ParamLimits

0xad81,	// (0x00078e94) bg_cale_pane_cp02

0x1586,	// (0x0006f699) cale_month_corner_pane

0x15a5,	// (0x0006f6b8) cale_month_day_heading_pane_ParamLimits

0x15a5,	// (0x0006f6b8) cale_month_day_heading_pane

0x1604,	// (0x0006f717) cale_month_pane_g1_ParamLimits

0x1604,	// (0x0006f717) cale_month_pane_g1

0x1640,	// (0x0006f753) cale_month_pane_g2_ParamLimits

0x1640,	// (0x0006f753) cale_month_pane_g2

0x167c,	// (0x0006f78f) cale_month_pane_g3_ParamLimits

0x167c,	// (0x0006f78f) cale_month_pane_g3

0x16d0,	// (0x0006f7e3) cale_month_pane_g4_ParamLimits

0x16d0,	// (0x0006f7e3) cale_month_pane_g4

0x1724,	// (0x0006f837) cale_month_pane_g5_ParamLimits

0x1724,	// (0x0006f837) cale_month_pane_g5

0x1780,	// (0x0006f893) cale_month_pane_g6_ParamLimits

0x1780,	// (0x0006f893) cale_month_pane_g6

0x17e4,	// (0x0006f8f7) cale_month_pane_g7_ParamLimits

0x17e4,	// (0x0006f8f7) cale_month_pane_g7

0x1850,	// (0x0006f963) cale_month_pane_g8_ParamLimits

0x1850,	// (0x0006f963) cale_month_pane_g8

0x18bc,	// (0x0006f9cf) cale_month_pane_g9_ParamLimits

0x18bc,	// (0x0006f9cf) cale_month_pane_g9

0x191a,	// (0x0006fa2d) cale_month_pane_g10_ParamLimits

0x191a,	// (0x0006fa2d) cale_month_pane_g10

0x196c,	// (0x0006fa7f) cale_month_pane_g11_ParamLimits

0x196c,	// (0x0006fa7f) cale_month_pane_g11

0x19be,	// (0x0006fad1) cale_month_pane_g12_ParamLimits

0x19be,	// (0x0006fad1) cale_month_pane_g12

0x1a16,	// (0x0006fb29) cale_month_pane_g13_ParamLimits

0x1a16,	// (0x0006fb29) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0007d39e) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0007d39e) cale_month_pane_g

0x1a6e,	// (0x0006fb81) cale_month_week_pane

0x1a92,	// (0x0006fba5) grid_cale_month_pane_ParamLimits

0x1a92,	// (0x0006fba5) grid_cale_month_pane

0x1ae8,	// (0x0006fbfb) cale_month_day_heading_pane_t1

0x1b6e,	// (0x0006fc81) cale_month_day_heading_pane_t2

0x1bff,	// (0x0006fd12) cale_month_day_heading_pane_t3

0x1c90,	// (0x0006fda3) cale_month_day_heading_pane_t4

0x1d21,	// (0x0006fe34) cale_month_day_heading_pane_t5

0x1dc2,	// (0x0006fed5) cale_month_day_heading_pane_t6

0x1e67,	// (0x0006ff7a) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0007d3b9) cale_month_day_heading_pane_t

0xaa25,	// (0x00078b38) bg_cale_side_pane_cp01

0x1f10,	// (0x00070023) cale_month_week_pane_t1

0x1f29,	// (0x0007003c) cale_month_week_pane_t2

0x1f42,	// (0x00070055) cale_month_week_pane_t3

0x1f5b,	// (0x0007006e) cale_month_week_pane_t4

0x1f74,	// (0x00070087) cale_month_week_pane_t5

0x1f8d,	// (0x000700a0) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0007d3c8) cale_month_week_pane_t

0x1fac,	// (0x000700bf) cell_cale_month_pane_ParamLimits

0x1fac,	// (0x000700bf) cell_cale_month_pane

0x9de6,	// (0x00077ef9) cell_cale_month_pane_g1

0x2100,	// (0x00070213) cell_cale_month_pane_t1_ParamLimits

0x2100,	// (0x00070213) cell_cale_month_pane_t1

0xaa33,	// (0x00078b46) grid_highlight_pane_cp08

0xa901,	// (0x00078a14) main_smil_g1

0x2120,	// (0x00070233) smil_status_pane

0xadc0,	// (0x00078ed3) smil_text_pane

0xc64f,	// (0x0007a762) bg_popup_call3_rect_pane_g8

0xc657,	// (0x0007a76a) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0007d681) bg_popup_call3_rect_pane_g

0xc8e5,	// (0x0007a9f8) smil_status_volume_pane_g1

0x2133,	// (0x00070246) smil_status_pane_t1

0x9f1a,	// (0x0007802d) volume_smil_pane

0xadca,	// (0x00078edd) list_smil_text_pane

0x214c,	// (0x0007025f) scroll_pane_cp011

0x2157,	// (0x0007026a) smil_text_list_pane_t1_ParamLimits

0x2157,	// (0x0007026a) smil_text_list_pane_t1

0x9df2,	// (0x00077f05) aid_volume_smil_ParamLimits

0x9df2,	// (0x00077f05) aid_volume_smil

0xa901,	// (0x00078a14) smil_volume_pane_g1

0xa901,	// (0x00078a14) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0007d3e8) smil_volume_pane_g

0x03a0,	// (0x0006e4b3) listscroll_cale_day_pane

0xadd4,	// (0x00078ee7) bg_cale_pane

0xadec,	// (0x00078eff) list_cale_pane

0xae0f,	// (0x00078f22) scroll_pane_cp09

0xae20,	// (0x00078f33) cale_bg_pane_g1

0xae28,	// (0x00078f3b) cale_bg_pane_g2

0xae30,	// (0x00078f43) cale_bg_pane_g3

0xae38,	// (0x00078f4b) cale_bg_pane_g4

0xae40,	// (0x00078f53) cale_bg_pane_g5

0xae48,	// (0x00078f5b) cale_bg_pane_g6

0xae50,	// (0x00078f63) cale_bg_pane_g7

0xae58,	// (0x00078f6b) cale_bg_pane_g8

0xae60,	// (0x00078f73) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0007d3ed) cale_bg_pane_g

0x2190,	// (0x000702a3) list_cale_time_pane_ParamLimits

0x2190,	// (0x000702a3) list_cale_time_pane

0xae70,	// (0x00078f83) list_cale_time_pane_g1_ParamLimits

0xae70,	// (0x00078f83) list_cale_time_pane_g1

0xae7c,	// (0x00078f8f) list_cale_time_pane_g2_ParamLimits

0xae7c,	// (0x00078f8f) list_cale_time_pane_g2

0x21a4,	// (0x000702b7) list_cale_time_pane_g3_ParamLimits

0x21a4,	// (0x000702b7) list_cale_time_pane_g3

0x21b2,	// (0x000702c5) list_cale_time_pane_g4_ParamLimits

0x21b2,	// (0x000702c5) list_cale_time_pane_g4

0x21c0,	// (0x000702d3) list_cale_time_pane_g5_ParamLimits

0x21c0,	// (0x000702d3) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0007d400) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0007d400) list_cale_time_pane_g

0xae96,	// (0x00078fa9) list_cale_time_pane_t1_ParamLimits

0xae96,	// (0x00078fa9) list_cale_time_pane_t1

0xaebe,	// (0x00078fd1) list_cale_time_pane_t2_ParamLimits

0xaebe,	// (0x00078fd1) list_cale_time_pane_t2

0x255f,	// (0x00070672) aid_blid_cardinal_pane

0x259d,	// (0x000706b0) compass_pane_t4

0xaee6,	// (0x00078ff9) list_cale_time_pane_t4_ParamLimits

0xaee6,	// (0x00078ff9) list_cale_time_pane_t4

0x25ab,	// (0x000706be) compass_pane_t5

0x25b9,	// (0x000706cc) compass_pane_t6

0x25c7,	// (0x000706da) compass_pane_t7

0xb300,	// (0x00079413) navi_pane_cc_t1

0xb455,	// (0x00079568) aid_phob_thumbnail_center_pane

0x2d4b,	// (0x00070e5e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0007d40d) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0007d40d) list_cale_time_pane_t

0x963f,	// (0x00077752) bg_popup_window_pane_cp02_ParamLimits

0x963f,	// (0x00077752) bg_popup_window_pane_cp02

0xaf0e,	// (0x00079021) heading_pane_cp01_ParamLimits

0xaf0e,	// (0x00079021) heading_pane_cp01

0xaf1a,	// (0x0007902d) loc_req_pane_ParamLimits

0xaf1a,	// (0x0007902d) loc_req_pane

0xaf2a,	// (0x0007903d) loc_type_pane_ParamLimits

0xaf2a,	// (0x0007903d) loc_type_pane

0xaf3c,	// (0x0007904f) loc_type_pane_t1_ParamLimits

0xaf3c,	// (0x0007904f) loc_type_pane_t1

0xaf4e,	// (0x00079061) loc_type_pane_t2_ParamLimits

0xaf4e,	// (0x00079061) loc_type_pane_t2

0xaf60,	// (0x00079073) loc_type_pane_t3_ParamLimits

0xaf60,	// (0x00079073) loc_type_pane_t3

0x0002,

0xf301,	// (0x0007d414) loc_type_pane_t_ParamLimits

0xf301,	// (0x0007d414) loc_type_pane_t

0xaf72,	// (0x00079085) list_loc_req_pane

0xaf7c,	// (0x0007908f) scroll_pane_cp012

0x21ce,	// (0x000702e1) list_single_loc_request_popup_menu_pane_ParamLimits

0x21ce,	// (0x000702e1) list_single_loc_request_popup_menu_pane

0xaf87,	// (0x0007909a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf87,	// (0x0007909a) list_single_loc_request_popup_menu_pane_g1

0xaf93,	// (0x000790a6) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf93,	// (0x000790a6) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0007d41b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0007d41b) list_single_loc_request_popup_menu_pane_g

0xaf9f,	// (0x000790b2) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf9f,	// (0x000790b2) list_single_loc_request_popup_menu_pane_t1

0x9c43,	// (0x00077d56) bg_popup_window_pane_cp03_ParamLimits

0x9c43,	// (0x00077d56) bg_popup_window_pane_cp03

0xafb5,	// (0x000790c8) heading_loc_req_pane_ParamLimits

0xafb5,	// (0x000790c8) heading_loc_req_pane

0x21db,	// (0x000702ee) popup_dyc_status_message_window_g1_ParamLimits

0x21db,	// (0x000702ee) popup_dyc_status_message_window_g1

0x21ef,	// (0x00070302) popup_dyc_status_message_window_t1_ParamLimits

0x21ef,	// (0x00070302) popup_dyc_status_message_window_t1

0x2204,	// (0x00070317) popup_dyc_status_message_window_t2_ParamLimits

0x2204,	// (0x00070317) popup_dyc_status_message_window_t2

0x2219,	// (0x0007032c) popup_dyc_status_message_window_t3_ParamLimits

0x2219,	// (0x0007032c) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0007d420) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0007d420) popup_dyc_status_message_window_t

0x99e8,	// (0x00077afb) bg_heading_pane_cp01

0xafc1,	// (0x000790d4) heading_loc_req_pane_g1

0xafc9,	// (0x000790dc) heading_loc_req_pane_g2

0xafd1,	// (0x000790e4) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0007d427) heading_loc_req_pane_g

0xafd9,	// (0x000790ec) heading_loc_req_pane_t1

0xafe9,	// (0x000790fc) bg_popup_sub_pane_cp01_ParamLimits

0xafe9,	// (0x000790fc) bg_popup_sub_pane_cp01

0xaff7,	// (0x0007910a) popup_cale_events_window_g1_ParamLimits

0xaff7,	// (0x0007910a) popup_cale_events_window_g1

0xb017,	// (0x0007912a) popup_cale_events_window_g2_ParamLimits

0xb017,	// (0x0007912a) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0007d45b) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0007d45b) popup_cale_events_window_g

0xb037,	// (0x0007914a) popup_cale_events_window_t1_ParamLimits

0xb037,	// (0x0007914a) popup_cale_events_window_t1

0xb049,	// (0x0007915c) popup_cale_events_window_t2_ParamLimits

0xb049,	// (0x0007915c) popup_cale_events_window_t2

0xb087,	// (0x0007919a) popup_cale_events_window_t3_ParamLimits

0xb087,	// (0x0007919a) popup_cale_events_window_t3

0xb0c1,	// (0x000791d4) popup_cale_events_window_t4_ParamLimits

0xb0c1,	// (0x000791d4) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0007d460) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0007d460) popup_cale_events_window_t

0x231e,	// (0x00070431) call_type_pane

0x232e,	// (0x00070441) popup_call_status_window_g1

0x2342,	// (0x00070455) popup_call_status_window_g2

0x2356,	// (0x00070469) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0007d469) popup_call_status_window_g

0xb0f7,	// (0x0007920a) call_type_pane_g1

0xb100,	// (0x00079213) call_type_pane_g2

0x0001,

0xf35d,	// (0x0007d470) call_type_pane_g

0x99e8,	// (0x00077afb) bg_popup_sub_pane_cp02

0xb109,	// (0x0007921c) listscroll_popup_wml_pane

0xb111,	// (0x00079224) list_wml_pane

0xb11b,	// (0x0007922e) scroll_pane_cp013

0xb126,	// (0x00079239) list_single_graphic_popup_wml_pane_ParamLimits

0xb126,	// (0x00079239) list_single_graphic_popup_wml_pane

0xa901,	// (0x00078a14) list_single_graphic_popup_wml_pane_g1

0xb13a,	// (0x0007924d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0007d475) list_single_graphic_popup_wml_pane_g

0xb142,	// (0x00079255) list_single_graphic_popup_wml_pane_t1

0xb158,	// (0x0007926b) aid_call_pane

0x9c3b,	// (0x00077d4e) popup_clock_analogue_window_g1

0x9c3b,	// (0x00077d4e) popup_clock_analogue_window_g2

0x9e14,	// (0x00077f27) popup_clock_analogue_window_g3

0x9e14,	// (0x00077f27) popup_clock_analogue_window_g4

0xa901,	// (0x00078a14) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0007d47a) popup_clock_analogue_window_g

0x9e1c,	// (0x00077f2f) popup_clock_analogue_window_t1

0x9e2a,	// (0x00077f3d) clock_digital_number_pane_ParamLimits

0x9e2a,	// (0x00077f3d) clock_digital_number_pane

0x9e36,	// (0x00077f49) clock_digital_number_pane_cp02_ParamLimits

0x9e36,	// (0x00077f49) clock_digital_number_pane_cp02

0x9e42,	// (0x00077f55) clock_digital_number_pane_cp03_ParamLimits

0x9e42,	// (0x00077f55) clock_digital_number_pane_cp03

0x9e4e,	// (0x00077f61) clock_digital_number_pane_cp04_ParamLimits

0x9e4e,	// (0x00077f61) clock_digital_number_pane_cp04

0x9e5a,	// (0x00077f6d) clock_digital_separator_pane_ParamLimits

0x9e5a,	// (0x00077f6d) clock_digital_separator_pane

0x9e66,	// (0x00077f79) popup_clock_digital_window_t1

0xa901,	// (0x00078a14) clock_digital_number_pane_g1

0xa901,	// (0x00078a14) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0007d3e8) clock_digital_number_pane_g

0xa901,	// (0x00078a14) clock_digital_separator_pane_g1

0xa901,	// (0x00078a14) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0007d3e8) clock_digital_separator_pane_g

0x99e8,	// (0x00077afb) bg_popup_window_pane_cp04

0xb160,	// (0x00079273) heading_pane_cp03

0xb168,	// (0x0007927b) listscroll_popup_gms_pane

0xb170,	// (0x00079283) grid_large_graphic_popup_pane

0xb17a,	// (0x0007928d) listscroll_popup_gms_pane_g1

0xb182,	// (0x00079295) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0007d485) listscroll_popup_gms_pane_g

0xac25,	// (0x00078d38) scroll_pane_cp014

0x2366,	// (0x00070479) cell_large_graphic_popup_pane_ParamLimits

0x2366,	// (0x00070479) cell_large_graphic_popup_pane

0x237e,	// (0x00070491) cell_large_graphic_popup_pane_g1_ParamLimits

0x237e,	// (0x00070491) cell_large_graphic_popup_pane_g1

0xb18a,	// (0x0007929d) cell_large_graphic_popup_pane_g2_ParamLimits

0xb18a,	// (0x0007929d) cell_large_graphic_popup_pane_g2

0xb196,	// (0x000792a9) cell_large_graphic_popup_pane_g3_ParamLimits

0xb196,	// (0x000792a9) cell_large_graphic_popup_pane_g3

0xb1a3,	// (0x000792b6) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1a3,	// (0x000792b6) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0007d48a) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0007d48a) cell_large_graphic_popup_pane_g

0xb1b3,	// (0x000792c6) grid_highlight_pane_cp010

0xa901,	// (0x00078a14) bg_popup_call_pane_g1

0xb1bd,	// (0x000792d0) list_single_graphic_popup_conf_pane_ParamLimits

0xb1bd,	// (0x000792d0) list_single_graphic_popup_conf_pane

0xb1cf,	// (0x000792e2) list_highlight_pane_cp01

0xb1d8,	// (0x000792eb) list_single_graphic_popup_conf_pane_g1

0xb1e0,	// (0x000792f3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0007d493) list_single_graphic_popup_conf_pane_g

0xb1e8,	// (0x000792fb) list_single_graphic_popup_conf_pane_t1

0xb1f6,	// (0x00079309) linegrid_cams_pane_g1

0x238a,	// (0x0007049d) linegrid_cams_pane_g2

0xaa66,	// (0x00078b79) linegrid_cams_pane_g3

0xb1ff,	// (0x00079312) linegrid_cams_pane_g4

0x2393,	// (0x000704a6) linegrid_cams_pane_g5

0x239c,	// (0x000704af) linegrid_cams_pane_g6

0xaa6f,	// (0x00078b82) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0007d498) linegrid_cams_pane_g

0xb208,	// (0x0007931b) popup_clock_analogue_window

0xb208,	// (0x0007931b) popup_clock_digital_window

0x99e8,	// (0x00077afb) popup_phob_thumbnail_window

0xa901,	// (0x00078a14) call_video_uplink_pane_g1

0xb211,	// (0x00079324) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0007d4a7) call_video_uplink_pane_g

0xb219,	// (0x0007932c) video_uplink_pane

0xb221,	// (0x00079334) mce_image_pane_g1

0x23a7,	// (0x000704ba) mce_image_pane_g2

0x23b1,	// (0x000704c4) mce_image_pane_g3

0x23bb,	// (0x000704ce) mce_image_pane_g4

0x23c3,	// (0x000704d6) mce_image_pane_g5

0x0004,

0xf399,	// (0x0007d4ac) mce_image_pane_g

0xb22b,	// (0x0007933e) control_top_pane_stacon_cp01_ParamLimits

0xb22b,	// (0x0007933e) control_top_pane_stacon_cp01

0xb23f,	// (0x00079352) uni_indicator_pane_stacon_cp01_ParamLimits

0xb23f,	// (0x00079352) uni_indicator_pane_stacon_cp01

0xb250,	// (0x00079363) bg_popup_sub_pane_cp03

0x23cb,	// (0x000704de) chi_dic_find_pane

0x23d3,	// (0x000704e6) listscroll_chi_dic_pane

0x23dc,	// (0x000704ef) main_pane_chidic_g1

0x23ef,	// (0x00070502) chi_dic_find_pane_t1

0xb25a,	// (0x0007936d) find_chidic_pane

0xb263,	// (0x00079376) chi_dic_list_pane_ParamLimits

0xb263,	// (0x00079376) chi_dic_list_pane

0xb274,	// (0x00079387) scroll_pane_cp020

0x23fd,	// (0x00070510) find_chidic_pane_t1

0x99e8,	// (0x00077afb) input_focus_pane_cp06

0x0016,	// (0x0006e129) list_chi_dic_pane_ParamLimits

0x0016,	// (0x0006e129) list_chi_dic_pane

0x240c,	// (0x0007051f) list_chi_dic_pane_t1_ParamLimits

0x240c,	// (0x0007051f) list_chi_dic_pane_t1

0x99e8,	// (0x00077afb) list_highlight_pane_cp020

0xb27c,	// (0x0007938f) bg_cale_heading_pane_g1

0x241f,	// (0x00070532) bg_cale_heading_pane_g2

0x2427,	// (0x0007053a) bg_cale_heading_pane_g3

0x242f,	// (0x00070542) bg_cale_heading_pane_g4

0x2439,	// (0x0007054c) bg_cale_heading_pane_g5

0x2443,	// (0x00070556) bg_cale_heading_pane_g6

0x244b,	// (0x0007055e) bg_cale_heading_pane_g7

0x2453,	// (0x00070566) bg_cale_heading_pane_g8

0x245d,	// (0x00070570) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0007d4b7) bg_cale_heading_pane_g

0xb27c,	// (0x0007938f) bg_cale_side_pane_g1

0x2467,	// (0x0007057a) bg_cale_side_pane_g2

0x2471,	// (0x00070584) bg_cale_side_pane_g3

0x247b,	// (0x0007058e) bg_cale_side_pane_g4

0x2485,	// (0x00070598) bg_cale_side_pane_g5

0x248f,	// (0x000705a2) bg_cale_side_pane_g6

0x2499,	// (0x000705ac) bg_cale_side_pane_g7

0x24a3,	// (0x000705b6) bg_cale_side_pane_g8

0x24ab,	// (0x000705be) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0007d4ca) bg_cale_side_pane_g

0x24b3,	// (0x000705c6) popup_call_status_window_ParamLimits

0x24b3,	// (0x000705c6) popup_call_status_window

0xb284,	// (0x00079397) stacon_top_pane

0xb28c,	// (0x0007939f) status_pane_ParamLimits

0xb28c,	// (0x0007939f) status_pane

0xb2a1,	// (0x000793b4) status_small_pane

0xb2a9,	// (0x000793bc) control_pane

0x99e8,	// (0x00077afb) stacon_bottom_pane

0xb2b1,	// (0x000793c4) list_single_mce_smart_pane_t1_ParamLimits

0xb2b1,	// (0x000793c4) list_single_mce_smart_pane_t1

0xb2c4,	// (0x000793d7) list_single_mce_smart_pane_t2_ParamLimits

0xb2c4,	// (0x000793d7) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0007d4dd) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0007d4dd) list_single_mce_smart_pane_t

0x2500,	// (0x00070613) compass_pane

0x250b,	// (0x0007061e) main_location2_pane_t1

0x251f,	// (0x00070632) main_location2_pane_t2

0x2535,	// (0x00070648) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0007d4e2) main_location2_pane_t

0xb2e3,	// (0x000793f6) compass_pane_g1_ParamLimits

0xb2e3,	// (0x000793f6) compass_pane_g1

0x257f,	// (0x00070692) compass_pane_t1

0x258e,	// (0x000706a1) compass_pane_t2

0x0005,

0xf3d8,	// (0x0007d4eb) compass_pane_t

0x25d5,	// (0x000706e8) text_secondary_cp61

0xb2f7,	// (0x0007940a) navi_pane_cams_g5

0xb31a,	// (0x0007942d) navi_pane_im_t1

0xb328,	// (0x0007943b) navi_pane_mp_g1_ParamLimits

0xb328,	// (0x0007943b) navi_pane_mp_g1

0xb33c,	// (0x0007944f) navi_pane_mp_g2_ParamLimits

0xb33c,	// (0x0007944f) navi_pane_mp_g2

0xb348,	// (0x0007945b) navi_pane_mp_g3_ParamLimits

0xb348,	// (0x0007945b) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0007d4ff) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0007d4ff) navi_pane_mp_g

0xb354,	// (0x00079467) navi_pane_mp_t1

0xb362,	// (0x00079475) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0007d506) navi_pane_mp_t

0xb39e,	// (0x000794b1) navi_pane_vt_g1

0xb354,	// (0x00079467) navi_pane_vt_t1

0xb3a6,	// (0x000794b9) navi_slider_pane

0xb3ae,	// (0x000794c1) zooming_pane

0xb3b6,	// (0x000794c9) navi_slider_pane_g1

0x9e83,	// (0x00077f96) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0007d50d) navi_slider_pane_g

0xb3da,	// (0x000794ed) aid_levels_zoom

0xb3e2,	// (0x000794f5) zooming_pane_g1

0xb3ea,	// (0x000794fd) zooming_pane_g2

0xb3ea,	// (0x000794fd) zooming_pane_g3

0x0002,

0xf409,	// (0x0007d51c) zooming_pane_g

0xb3f2,	// (0x00079505) level_10_zoom

0xb3fb,	// (0x0007950e) level_11_zoom

0xb404,	// (0x00079517) level_1_zoom

0xb40d,	// (0x00079520) level_2_zoom

0xb416,	// (0x00079529) level_3_zoom

0xb41f,	// (0x00079532) level_4_zoom

0xb428,	// (0x0007953b) level_5_zoom

0xb431,	// (0x00079544) level_6_zoom

0xb43a,	// (0x0007954d) level_7_zoom

0xb443,	// (0x00079556) level_8_zoom

0xb44c,	// (0x0007955f) level_9_zoom

0xb45d,	// (0x00079570) popup_phob_thumbnail_window_g1

0xb465,	// (0x00079578) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0007d523) popup_phob_thumbnail_window_g

0xc7b5,	// (0x0007a8c8) level_1_location

0xc7bd,	// (0x0007a8d0) level_2_location

0xc7c5,	// (0x0007a8d8) level_3_location

0xc7cd,	// (0x0007a8e0) level_4_location

0xb3ae,	// (0x000794c1) level_5_location

0x271e,	// (0x00070831) mce_icon_pane_g1

0x2728,	// (0x0007083b) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0007d528) mce_icon_pane_g

0x2730,	// (0x00070843) main_mup_pane_g1_ParamLimits

0x2730,	// (0x00070843) main_mup_pane_g1

0x2746,	// (0x00070859) main_mup_pane_g2_ParamLimits

0x2746,	// (0x00070859) main_mup_pane_g2

0x275e,	// (0x00070871) main_mup_pane_g3_ParamLimits

0x275e,	// (0x00070871) main_mup_pane_g3

0x2776,	// (0x00070889) main_mup_pane_g4_ParamLimits

0x2776,	// (0x00070889) main_mup_pane_g4

0x278e,	// (0x000708a1) main_mup_pane_g5_ParamLimits

0x278e,	// (0x000708a1) main_mup_pane_g5

0x27aa,	// (0x000708bd) main_mup_pane_g6_ParamLimits

0x27aa,	// (0x000708bd) main_mup_pane_g6

0x27c4,	// (0x000708d7) main_mup_pane_g7_ParamLimits

0x27c4,	// (0x000708d7) main_mup_pane_g7

0x27e2,	// (0x000708f5) main_mup_pane_g8_ParamLimits

0x27e2,	// (0x000708f5) main_mup_pane_g8

0x2800,	// (0x00070913) main_mup_pane_g9_ParamLimits

0x2800,	// (0x00070913) main_mup_pane_g9

0x281c,	// (0x0007092f) main_mup_pane_g10_ParamLimits

0x281c,	// (0x0007092f) main_mup_pane_g10

0x283a,	// (0x0007094d) main_mup_pane_g11_ParamLimits

0x283a,	// (0x0007094d) main_mup_pane_g11

0x2854,	// (0x00070967) main_mup_pane_g12_ParamLimits

0x2854,	// (0x00070967) main_mup_pane_g12

0x286a,	// (0x0007097d) main_mup_pane_g13_ParamLimits

0x286a,	// (0x0007097d) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0007d52d) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0007d52d) main_mup_pane_g

0x287e,	// (0x00070991) main_mup_pane_t1_ParamLimits

0x287e,	// (0x00070991) main_mup_pane_t1

0x289a,	// (0x000709ad) main_mup_pane_t2_ParamLimits

0x289a,	// (0x000709ad) main_mup_pane_t2

0x28b2,	// (0x000709c5) main_mup_pane_t3_ParamLimits

0x28b2,	// (0x000709c5) main_mup_pane_t3

0x28ca,	// (0x000709dd) main_mup_pane_t4_ParamLimits

0x28ca,	// (0x000709dd) main_mup_pane_t4

0x28e8,	// (0x000709fb) main_mup_pane_t5_ParamLimits

0x28e8,	// (0x000709fb) main_mup_pane_t5

0x28fd,	// (0x00070a10) main_mup_pane_t6_ParamLimits

0x28fd,	// (0x00070a10) main_mup_pane_t6

0x0005,

0xf435,	// (0x0007d548) main_mup_pane_t_ParamLimits

0xf435,	// (0x0007d548) main_mup_pane_t

0x290f,	// (0x00070a22) mup_progress_pane_ParamLimits

0x290f,	// (0x00070a22) mup_progress_pane

0x291b,	// (0x00070a2e) mup_visualizer_pane_ParamLimits

0x291b,	// (0x00070a2e) mup_visualizer_pane

0x294f,	// (0x00070a62) mup_volume_pane_ParamLimits

0x294f,	// (0x00070a62) mup_volume_pane

0xb46d,	// (0x00079580) mup_visualizer_pane_g1_ParamLimits

0xb46d,	// (0x00079580) mup_visualizer_pane_g1

0xb46d,	// (0x00079580) mup_visualizer_pane_g2_ParamLimits

0xb46d,	// (0x00079580) mup_visualizer_pane_g2

0xb2e3,	// (0x000793f6) mup_visualizer_pane_g3_ParamLimits

0xb2e3,	// (0x000793f6) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0007d555) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0007d555) mup_visualizer_pane_g

0xa901,	// (0x00078a14) mup_volume_pane_g1

0xb483,	// (0x00079596) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0007d55c) mup_volume_pane_g

0xa901,	// (0x00078a14) mup_progress_pane_g1

0xb48c,	// (0x0007959f) mup_progress_pane_g2

0xb495,	// (0x000795a8) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0007d561) mup_progress_pane_g

0x99e8,	// (0x00077afb) bg_popup_window_pane_cp05

0xb49e,	// (0x000795b1) heading_pane_cp02_ParamLimits

0xb49e,	// (0x000795b1) heading_pane_cp02

0xb4ba,	// (0x000795cd) list_popup_blid_pane

0xb4c2,	// (0x000795d5) list_blid_sat_info_pane_ParamLimits

0xb4c2,	// (0x000795d5) list_blid_sat_info_pane

0xb4d5,	// (0x000795e8) list_blid_sat_info_pane_g1

0xb4dd,	// (0x000795f0) list_blid_sat_info_pane_t1

0x2a79,	// (0x00070b8c) mup_equalizer_pane_ParamLimits

0x2a79,	// (0x00070b8c) mup_equalizer_pane

0x2a9a,	// (0x00070bad) mup_equalizer_pane_cp1_ParamLimits

0x2a9a,	// (0x00070bad) mup_equalizer_pane_cp1

0x2abb,	// (0x00070bce) mup_equalizer_pane_cp2_ParamLimits

0x2abb,	// (0x00070bce) mup_equalizer_pane_cp2

0x2ae0,	// (0x00070bf3) mup_equalizer_pane_cp3_ParamLimits

0x2ae0,	// (0x00070bf3) mup_equalizer_pane_cp3

0x2b09,	// (0x00070c1c) mup_equalizer_pane_cp4_ParamLimits

0x2b09,	// (0x00070c1c) mup_equalizer_pane_cp4

0x2b32,	// (0x00070c45) mup_equalizer_pane_cp5

0x2b4a,	// (0x00070c5d) mup_equalizer_pane_cp6

0x2b62,	// (0x00070c75) mup_equalizer_pane_cp7

0xc6cf,	// (0x0007a7e2) bg_popup_call_poc_act_pane_g9

0xc6d7,	// (0x0007a7ea) bg_popup_call_poc_act_pane_g10

0xc6df,	// (0x0007a7f2) bg_popup_call_poc_act_pane_g11

0x000a,

0x9c43,	// (0x00077d56) mup_scale_pane

0xa901,	// (0x00078a14) mup_scale_pane_g1

0xb4eb,	// (0x000795fe) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0007d57d) mup_scale_pane_g

0xb50f,	// (0x00079622) msg_data_pane

0xb517,	// (0x0007962a) scroll_pane_cp017

0x2b8c,	// (0x00070c9f) bg_list_pane_cp04_ParamLimits

0x2b8c,	// (0x00070c9f) bg_list_pane_cp04

0xb51f,	// (0x00079632) msg_data_pane_g1

0x2bb4,	// (0x00070cc7) msg_data_pane_g2

0x2bbe,	// (0x00070cd1) msg_data_pane_g3

0x2bc8,	// (0x00070cdb) msg_data_pane_g4

0x2bd0,	// (0x00070ce3) msg_data_pane_g5

0x2bd8,	// (0x00070ceb) msg_data_pane_g6

0x2be0,	// (0x00070cf3) msg_data_pane_g7

0x0006,

0xf479,	// (0x0007d58c) msg_data_pane_g

0x2be8,	// (0x00070cfb) msg_text_pane_ParamLimits

0x2be8,	// (0x00070cfb) msg_text_pane

0x2c10,	// (0x00070d23) qrid_highlight_pane_cp011_ParamLimits

0x2c10,	// (0x00070d23) qrid_highlight_pane_cp011

0x99e8,	// (0x00077afb) msg_body_pane

0x99e8,	// (0x00077afb) msg_header_pane

0xb530,	// (0x00079643) input_focus_pane_cp07

0xb545,	// (0x00079658) msg_header_pane_t1_ParamLimits

0xb545,	// (0x00079658) msg_header_pane_t1

0x9e95,	// (0x00077fa8) msg_header_pane_t2_ParamLimits

0x9e95,	// (0x00077fa8) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0007d5a0) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0007d5a0) msg_header_pane_t

0xb557,	// (0x0007966a) msg_body_pane_g1

0x2c34,	// (0x00070d47) msg_body_pane_t1_ParamLimits

0x2c34,	// (0x00070d47) msg_body_pane_t1

0x9ea7,	// (0x00077fba) msg_body_pane_t2_ParamLimits

0x9ea7,	// (0x00077fba) msg_body_pane_t2

0x9eb9,	// (0x00077fcc) msg_body_pane_t3_ParamLimits

0x9eb9,	// (0x00077fcc) msg_body_pane_t3

0x0002,

0xf492,	// (0x0007d5a5) msg_body_pane_t_ParamLimits

0xf492,	// (0x0007d5a5) msg_body_pane_t

0x2c9f,	// (0x00070db2) main_viewer_pane_g1_ParamLimits

0x2c9f,	// (0x00070db2) main_viewer_pane_g1

0x2cad,	// (0x00070dc0) main_viewer_pane_g2_ParamLimits

0x2cad,	// (0x00070dc0) main_viewer_pane_g2

0x2cbb,	// (0x00070dce) main_viewer_pane_g3_ParamLimits

0x2cbb,	// (0x00070dce) main_viewer_pane_g3

0x2cca,	// (0x00070ddd) main_viewer_pane_g4_ParamLimits

0x2cca,	// (0x00070ddd) main_viewer_pane_g4

0x9ee3,	// (0x00077ff6) main_viewer_pane_g5_ParamLimits

0x9ee3,	// (0x00077ff6) main_viewer_pane_g5

0x9ee3,	// (0x00077ff6) main_viewer_pane_g7_ParamLimits

0x9ee3,	// (0x00077ff6) main_viewer_pane_g7

0x9ef5,	// (0x00078008) main_viewer_pane_g8_ParamLimits

0x9ef5,	// (0x00078008) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0007d5b5) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0007d5b5) main_viewer_pane_g

0xb55f,	// (0x00079672) viewer_content_pane_ParamLimits

0xb55f,	// (0x00079672) viewer_content_pane

0x2d08,	// (0x00070e1b) main_postcard_pane_g1_ParamLimits

0x2d08,	// (0x00070e1b) main_postcard_pane_g1

0x2d1e,	// (0x00070e31) main_postcard_pane_g2_ParamLimits

0x2d1e,	// (0x00070e31) main_postcard_pane_g2

0x2d34,	// (0x00070e47) main_postcard_pane_g3_ParamLimits

0x2d34,	// (0x00070e47) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0007d5c6) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0007d5c6) main_postcard_pane_g

0x2d4b,	// (0x00070e5e) main_postcard_pane_g4

0xc8f8,	// (0x0007aa0b) smil_status_volume_pane_g2

0x2d8e,	// (0x00070ea1) postcard_pane_ParamLimits

0x2d8e,	// (0x00070ea1) postcard_pane

0xb56d,	// (0x00079680) postcard_pane_g1_ParamLimits

0xb56d,	// (0x00079680) postcard_pane_g1

0x2dde,	// (0x00070ef1) postcard_pane_g2_ParamLimits

0x2dde,	// (0x00070ef1) postcard_pane_g2

0x2dea,	// (0x00070efd) postcard_pane_g3_ParamLimits

0x2dea,	// (0x00070efd) postcard_pane_g3

0xb57b,	// (0x0007968e) postcard_pane_g4_ParamLimits

0xb57b,	// (0x0007968e) postcard_pane_g4

0x2df6,	// (0x00070f09) postcard_pane_g5_ParamLimits

0x2df6,	// (0x00070f09) postcard_pane_g5

0x2e0b,	// (0x00070f1e) postcard_pane_g6_ParamLimits

0x2e0b,	// (0x00070f1e) postcard_pane_g6

0xb56d,	// (0x00079680) postcard_pane_g7_ParamLimits

0xb56d,	// (0x00079680) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0007d5d3) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0007d5d3) postcard_pane_g

0x2e23,	// (0x00070f36) main_mp2_pane_g1_ParamLimits

0x2e23,	// (0x00070f36) main_mp2_pane_g1

0x2e31,	// (0x00070f44) main_mp2_pane_g2_ParamLimits

0x2e31,	// (0x00070f44) main_mp2_pane_g2

0x2e3d,	// (0x00070f50) main_mp2_pane_g3_ParamLimits

0x2e3d,	// (0x00070f50) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0007d5e2) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0007d5e2) main_mp2_pane_g

0x2e49,	// (0x00070f5c) main_mp2_pane_t1_ParamLimits

0x2e49,	// (0x00070f5c) main_mp2_pane_t1

0x2e60,	// (0x00070f73) main_mp2_pane_t2_ParamLimits

0x2e60,	// (0x00070f73) main_mp2_pane_t2

0x2e72,	// (0x00070f85) main_mp2_pane_t3_ParamLimits

0x2e72,	// (0x00070f85) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0007d5e9) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0007d5e9) main_mp2_pane_t

0xb589,	// (0x0007969c) pec_content_pane_ParamLimits

0xb589,	// (0x0007969c) pec_content_pane

0xac25,	// (0x00078d38) scroll_pane_cp015

0xb59b,	// (0x000796ae) pec_attribute_pane_ParamLimits

0xb59b,	// (0x000796ae) pec_attribute_pane

0x2e84,	// (0x00070f97) pec_content_pane_g1_ParamLimits

0x2e84,	// (0x00070f97) pec_content_pane_g1

0xb5ab,	// (0x000796be) pec_content_pane_t1_ParamLimits

0xb5ab,	// (0x000796be) pec_content_pane_t1

0xb5bd,	// (0x000796d0) pec_content_pane_t2_ParamLimits

0xb5bd,	// (0x000796d0) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0007d5f0) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0007d5f0) pec_content_pane_t

0x2e90,	// (0x00070fa3) list_single_graphic_pane_cp01_ParamLimits

0x2e90,	// (0x00070fa3) list_single_graphic_pane_cp01

0x9c43,	// (0x00077d56) bg_popup_sub_pane_cp04

0xb5cf,	// (0x000796e2) popup_mup_playback_window_g1

0xb5db,	// (0x000796ee) popup_mup_playback_window_t1

0xb5f0,	// (0x00079703) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0007d5f5) popup_mup_playback_window_t

0xb627,	// (0x0007973a) main_image_pane_g1_ParamLimits

0xb627,	// (0x0007973a) main_image_pane_g1

0xb66a,	// (0x0007977d) scroll_pane_cp018_ParamLimits

0xb66a,	// (0x0007977d) scroll_pane_cp018

0xb682,	// (0x00079795) scroll_pane_cp016_ParamLimits

0xb682,	// (0x00079795) scroll_pane_cp016

0x2f5f,	// (0x00071072) smil2_image_pane_ParamLimits

0x2f5f,	// (0x00071072) smil2_image_pane

0x2f95,	// (0x000710a8) smil2_root_pane_ParamLimits

0x2f95,	// (0x000710a8) smil2_root_pane

0x2fcd,	// (0x000710e0) smil2_text_pane_ParamLimits

0x2fcd,	// (0x000710e0) smil2_text_pane

0x99e8,	// (0x00077afb) bg_list_pane_cp06

0xb6be,	// (0x000797d1) grid_radio_pane

0x99e8,	// (0x00077afb) bg_popup_window_pane_cp06

0xb6c8,	// (0x000797db) main_fmradio_pane_t1

0xb160,	// (0x00079273) heading_pane_cp04

0xb6d6,	// (0x000797e9) main_fmradio_pane_t2

0xc6e7,	// (0x0007a7fa) popup_cale_lunar_info_window_g1

0xb6e4,	// (0x000797f7) main_fmradio_pane_t3

0xc6ef,	// (0x0007a802) popup_cale_lunar_info_window_g2

0xb6f4,	// (0x00079807) main_fmradio_pane_t4

0x0001,

0xb702,	// (0x00079815) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0007d6d0) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0007d60a) main_fmradio_pane_t

0xb710,	// (0x00079823) wait_bar_pane_cp03

0xb718,	// (0x0007982b) cell_fmradio_pane_ParamLimits

0xb718,	// (0x0007982b) cell_fmradio_pane

0xb56d,	// (0x00079680) cell_fmradio_pane_g1_ParamLimits

0xb56d,	// (0x00079680) cell_fmradio_pane_g1

0x99e8,	// (0x00077afb) grid_highlight_pane_cp011

0xb72d,	// (0x00079840) poc_content_pane_ParamLimits

0xb72d,	// (0x00079840) poc_content_pane

0xb73f,	// (0x00079852) scroll_pane_cp019

0x305d,	// (0x00071170) popup_call_poc_act_window_ParamLimits

0x305d,	// (0x00071170) popup_call_poc_act_window

0x3081,	// (0x00071194) popup_call_poc_inact_window_ParamLimits

0x3081,	// (0x00071194) popup_call_poc_inact_window

0xf594,	// (0x0007d6a7) bg_popup_call_poc_act_pane_g

0xc65f,	// (0x0007a772) bg_popup_call_poc_inact_pane_g1

0xc667,	// (0x0007a77a) bg_popup_call_poc_inact_pane_g2

0xb747,	// (0x0007985a) popup_call_poc_act_window_g2

0xc66f,	// (0x0007a782) bg_popup_call_poc_inact_pane_g3

0xc677,	// (0x0007a78a) bg_popup_call_poc_inact_pane_g4

0xc67f,	// (0x0007a792) bg_popup_call_poc_inact_pane_g5

0xb74f,	// (0x00079862) popup_call_poc_act_window_t1_ParamLimits

0xb74f,	// (0x00079862) popup_call_poc_act_window_t1

0xb777,	// (0x0007988a) popup_call_poc_act_window_t2_ParamLimits

0xb777,	// (0x0007988a) popup_call_poc_act_window_t2

0xb79f,	// (0x000798b2) popup_call_poc_act_window_t3_ParamLimits

0xb79f,	// (0x000798b2) popup_call_poc_act_window_t3

0xb7c7,	// (0x000798da) popup_call_poc_act_window_t4_ParamLimits

0xb7c7,	// (0x000798da) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0007d615) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0007d615) popup_call_poc_act_window_t

0xc687,	// (0x0007a79a) bg_popup_call_poc_inact_pane_g6

0xc68f,	// (0x0007a7a2) bg_popup_call_poc_inact_pane_g7

0xc697,	// (0x0007a7aa) bg_popup_call_poc_inact_pane_g8

0xb7d9,	// (0x000798ec) popup_call_poc_inact_window_g2

0xc69f,	// (0x0007a7b2) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0007d694) bg_popup_call_poc_inact_pane_g

0xb7e1,	// (0x000798f4) popup_call_poc_inact_window_t1_ParamLimits

0xb7e1,	// (0x000798f4) popup_call_poc_inact_window_t1

0xb7f6,	// (0x00079909) popup_call_poc_inact_window_t2_ParamLimits

0xb7f6,	// (0x00079909) popup_call_poc_inact_window_t2

0xb80b,	// (0x0007991e) popup_call_poc_inact_window_t3_ParamLimits

0xb80b,	// (0x0007991e) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0007d61e) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0007d61e) popup_call_poc_inact_window_t

0xc86b,	// (0x0007a97e) context_pane_ParamLimits

0x3929,	// (0x00071a3c) signal_pane_ParamLimits

0xb3ae,	// (0x000794c1) main_call2_pane

0xc859,	// (0x0007a96c) popup_phob_thumbnail2_window_ParamLimits

0xc859,	// (0x0007a96c) popup_phob_thumbnail2_window

0x9ecb,	// (0x00077fde) aid_hotspot_pointer_arrow_pane

0x9ed3,	// (0x00077fe6) aid_hotspot_pointer_hand_pane

0x33e9,	// (0x000714fc) phob_pre_status_pane_g5

0x0c36,	// (0x0006ed49) cams_zoom_pane_ParamLimits

0x0c45,	// (0x0006ed58) image_vga_pane_ParamLimits

0x0c5f,	// (0x0006ed72) main_camera_pane_g1_ParamLimits

0x0c71,	// (0x0006ed84) main_camera_pane_g2_ParamLimits

0x0c81,	// (0x0006ed94) main_camera_pane_g3_ParamLimits

0x0c95,	// (0x0006eda8) main_camera_pane_g4_ParamLimits

0x0ca9,	// (0x0006edbc) main_camera_pane_g5_ParamLimits

0x0cbd,	// (0x0006edd0) main_camera_pane_g6_ParamLimits

0x0cd1,	// (0x0006ede4) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0007d31d) main_camera_pane_g_ParamLimits

0x0ce5,	// (0x0006edf8) main_camera_pane_t1_ParamLimits

0x0cfb,	// (0x0006ee0e) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0007d32e) main_camera_pane_t_ParamLimits

0x9c43,	// (0x00077d56) bg_popup_preview_window_pane_cp01_ParamLimits

0x9c43,	// (0x00077d56) bg_popup_preview_window_pane_cp01

0xb820,	// (0x00079933) popup_phob_thumbnail2_window_g1_ParamLimits

0xb820,	// (0x00079933) popup_phob_thumbnail2_window_g1

0x99e8,	// (0x00077afb) call2_cli_visual_pane

0x30b5,	// (0x000711c8) popup_call2_audio_conf_window_ParamLimits

0x30b5,	// (0x000711c8) popup_call2_audio_conf_window

0x30dd,	// (0x000711f0) popup_call2_audio_first_window_ParamLimits

0x30dd,	// (0x000711f0) popup_call2_audio_first_window

0x3173,	// (0x00071286) popup_call2_audio_in_window_ParamLimits

0x3173,	// (0x00071286) popup_call2_audio_in_window

0x31bf,	// (0x000712d2) popup_call2_audio_out_window_ParamLimits

0x31bf,	// (0x000712d2) popup_call2_audio_out_window

0x3231,	// (0x00071344) popup_call2_audio_second_window_ParamLimits

0x3231,	// (0x00071344) popup_call2_audio_second_window

0x3297,	// (0x000713aa) popup_call2_audio_wait_window_ParamLimits

0x3297,	// (0x000713aa) popup_call2_audio_wait_window

0x99e8,	// (0x00077afb) bg_popup_call2_act_pane_cp03

0x9c25,	// (0x00077d38) list_conf_pane_cp

0xb82c,	// (0x0007993f) popup_call2_audio_conf_window_t1

0xb83a,	// (0x0007994d) list_single_graphic_popup_conf2_pane_ParamLimits

0xb83a,	// (0x0007994d) list_single_graphic_popup_conf2_pane

0xb1cf,	// (0x000792e2) list_highlight_pane_cp04

0xb84d,	// (0x00079960) list_single_graphic_popup_conf2_pane_g1

0xb1e0,	// (0x000792f3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0007d625) list_single_graphic_popup_conf2_pane_g

0xb857,	// (0x0007996a) list_single_graphic_popup_conf2_pane_t1

0xb865,	// (0x00079978) bg_popup_call2_act_pane_cp01_ParamLimits

0xb865,	// (0x00079978) bg_popup_call2_act_pane_cp01

0xb8ef,	// (0x00079a02) call_type_pane_cp05_ParamLimits

0xb8ef,	// (0x00079a02) call_type_pane_cp05

0xb943,	// (0x00079a56) popup_call2_audio_second_window_g1_ParamLimits

0xb943,	// (0x00079a56) popup_call2_audio_second_window_g1

0xb997,	// (0x00079aaa) popup_call2_audio_second_window_g2_ParamLimits

0xb997,	// (0x00079aaa) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0007d62a) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0007d62a) popup_call2_audio_second_window_g

0xb9fc,	// (0x00079b0f) popup_call2_audio_second_window_t1_ParamLimits

0xb9fc,	// (0x00079b0f) popup_call2_audio_second_window_t1

0xbab7,	// (0x00079bca) popup_call2_audio_second_window_t2_ParamLimits

0xbab7,	// (0x00079bca) popup_call2_audio_second_window_t2

0xbb0a,	// (0x00079c1d) popup_call2_audio_second_window_t3_ParamLimits

0xbb0a,	// (0x00079c1d) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0007d631) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0007d631) popup_call2_audio_second_window_t

0x99e8,	// (0x00077afb) bg_popup_call2_in_pane_cp02

0x99f2,	// (0x00077b05) call_type_pane_cp04

0x99fa,	// (0x00077b0d) popup_call2_audio_wait_window_g1

0x9a02,	// (0x00077b15) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0007d208) popup_call2_audio_wait_window_g

0x9a0a,	// (0x00077b1d) popup_call2_audio_wait_window_t3

0xbc32,	// (0x00079d45) bg_popup_call2_act_pane_ParamLimits

0xbc32,	// (0x00079d45) bg_popup_call2_act_pane

0xbcf2,	// (0x00079e05) call_type_pane_cp03_ParamLimits

0xbcf2,	// (0x00079e05) call_type_pane_cp03

0xbd56,	// (0x00079e69) popup_call2_audio_first_window_g1_ParamLimits

0xbd56,	// (0x00079e69) popup_call2_audio_first_window_g1

0xbdc6,	// (0x00079ed9) popup_call2_audio_first_window_g2_ParamLimits

0xbdc6,	// (0x00079ed9) popup_call2_audio_first_window_g2

0xb46d,	// (0x00079580) popup_call2_audio_first_window_g3_ParamLimits

0xb46d,	// (0x00079580) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0007d63a) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0007d63a) popup_call2_audio_first_window_g

0xbea4,	// (0x00079fb7) popup_call2_audio_first_window_t1_ParamLimits

0xbea4,	// (0x00079fb7) popup_call2_audio_first_window_t1

0xbfa7,	// (0x0007a0ba) popup_call2_audio_first_window_t4_ParamLimits

0xbfa7,	// (0x0007a0ba) popup_call2_audio_first_window_t4

0xc08a,	// (0x0007a19d) popup_call2_audio_first_window_t5_ParamLimits

0xc08a,	// (0x0007a19d) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0007d645) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0007d645) popup_call2_audio_first_window_t

0x9c3b,	// (0x00077d4e) bg_popup_call2_act_pane_g1

0xc6f9,	// (0x0007a80c) popup_cale_lunar_info_window_t1

0xc707,	// (0x0007a81a) popup_cale_lunar_info_window_t2

0xc715,	// (0x0007a828) popup_cale_lunar_info_window_t3

0x99e8,	// (0x00077afb) bg_popup_call2_bubble_pane

0xc18b,	// (0x0007a29e) bg_popup_call2_in_pane_cp01_ParamLimits

0xc18b,	// (0x0007a29e) bg_popup_call2_in_pane_cp01

0x96c4,	// (0x000777d7) call_type_pane_cp02

0xc1d3,	// (0x0007a2e6) popup_call2_audio_out_window_g1_ParamLimits

0xc1d3,	// (0x0007a2e6) popup_call2_audio_out_window_g1

0xc1ff,	// (0x0007a312) popup_call2_audio_out_window_g2_ParamLimits

0xc1ff,	// (0x0007a312) popup_call2_audio_out_window_g2

0xc227,	// (0x0007a33a) popup_call2_audio_out_window_g3_ParamLimits

0xc227,	// (0x0007a33a) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0007d64e) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0007d64e) popup_call2_audio_out_window_g

0xc262,	// (0x0007a375) popup_call2_audio_out_window_t1_ParamLimits

0xc262,	// (0x0007a375) popup_call2_audio_out_window_t1

0xc2c1,	// (0x0007a3d4) popup_call2_audio_out_window_t2_ParamLimits

0xc2c1,	// (0x0007a3d4) popup_call2_audio_out_window_t2

0xc315,	// (0x0007a428) popup_call2_audio_out_window_t3_ParamLimits

0xc315,	// (0x0007a428) popup_call2_audio_out_window_t3

0xc32b,	// (0x0007a43e) popup_call2_audio_out_window_t4_ParamLimits

0xc32b,	// (0x0007a43e) popup_call2_audio_out_window_t4

0xc341,	// (0x0007a454) popup_call2_audio_out_window_t5_ParamLimits

0xc341,	// (0x0007a454) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0007d657) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0007d657) popup_call2_audio_out_window_t

0xc3a5,	// (0x0007a4b8) bg_popup_call2_in_pane_ParamLimits

0xc3a5,	// (0x0007a4b8) bg_popup_call2_in_pane

0xc401,	// (0x0007a514) popup_call2_audio_in_window_g1_ParamLimits

0xc401,	// (0x0007a514) popup_call2_audio_in_window_g1

0xc439,	// (0x0007a54c) popup_call2_audio_in_window_g2_ParamLimits

0xc439,	// (0x0007a54c) popup_call2_audio_in_window_g2

0xc471,	// (0x0007a584) popup_call2_audio_in_window_g3_ParamLimits

0xc471,	// (0x0007a584) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0007d664) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0007d664) popup_call2_audio_in_window_g

0xc4c9,	// (0x0007a5dc) popup_call2_audio_in_window_t1_ParamLimits

0xc4c9,	// (0x0007a5dc) popup_call2_audio_in_window_t1

0xc549,	// (0x0007a65c) popup_call2_audio_in_window_t2_ParamLimits

0xc549,	// (0x0007a65c) popup_call2_audio_in_window_t2

0xc5c9,	// (0x0007a6dc) popup_call2_audio_in_window_t3_ParamLimits

0xc5c9,	// (0x0007a6dc) popup_call2_audio_in_window_t3

0xc5e3,	// (0x0007a6f6) popup_call2_audio_in_window_t4_ParamLimits

0xc5e3,	// (0x0007a6f6) popup_call2_audio_in_window_t4

0xc5f5,	// (0x0007a708) popup_call2_audio_in_window_t5_ParamLimits

0xc5f5,	// (0x0007a708) popup_call2_audio_in_window_t5

0xc60a,	// (0x0007a71d) popup_call2_audio_in_window_t6_ParamLimits

0xc60a,	// (0x0007a71d) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0007d66d) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0007d66d) popup_call2_audio_in_window_t

0x9c3b,	// (0x00077d4e) bg_popup_call2_in_pane_g1

0xc723,	// (0x0007a836) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0007d6d5) popup_cale_lunar_info_window_t

0x9c43,	// (0x00077d56) bg_popup_call2_rect_pane_ParamLimits

0x9c43,	// (0x00077d56) bg_popup_call2_rect_pane

0x99e8,	// (0x00077afb) call2_cli_visual_graphic_pane

0x99e8,	// (0x00077afb) call2_cli_visual_text_pane

0x9f0d,	// (0x00078020) smil_status_volume_pane_g3

0x0002,

0xa901,	// (0x00078a14) call2_cli_visual_graphic_pane_g1

0xa901,	// (0x00078a14) call2_cli_visual_graphic_pane_g2

0xa901,	// (0x00078a14) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0007d67a) call2_cli_visual_graphic_pane_g

0xc61f,	// (0x0007a732) bg_popup_call2_rect_pane_g1

0xa99f,	// (0x00078ab2) bg_popup_call2_rect_pane_g2

0xc627,	// (0x0007a73a) bg_popup_call2_rect_pane_g3

0xc62f,	// (0x0007a742) bg_popup_call2_rect_pane_g4

0xc637,	// (0x0007a74a) bg_popup_call2_rect_pane_g5

0xc63f,	// (0x0007a752) bg_popup_call2_rect_pane_g6

0xc647,	// (0x0007a75a) bg_popup_call2_rect_pane_g7

0xc64f,	// (0x0007a762) bg_popup_call2_rect_pane_g8

0xc657,	// (0x0007a76a) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0007d681) bg_popup_call2_rect_pane_g

0xc65f,	// (0x0007a772) bg_popup_call2_bubble_pane_g1

0xc667,	// (0x0007a77a) bg_popup_call2_bubble_pane_g2

0xc66f,	// (0x0007a782) bg_popup_call2_bubble_pane_g3

0xc677,	// (0x0007a78a) bg_popup_call2_bubble_pane_g4

0xc67f,	// (0x0007a792) bg_popup_call2_bubble_pane_g5

0xc687,	// (0x0007a79a) bg_popup_call2_bubble_pane_g6

0xc68f,	// (0x0007a7a2) bg_popup_call2_bubble_pane_g7

0xc697,	// (0x0007a7aa) bg_popup_call2_bubble_pane_g8

0xc69f,	// (0x0007a7b2) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0007d694) bg_popup_call2_bubble_pane_g

0x03bc,	// (0x0006e4cf) aid_cale_week_size_cell_pane

0x0d15,	// (0x0006ee28) aid_cams_cif_uncrop_pane_ParamLimits

0x0d15,	// (0x0006ee28) aid_cams_cif_uncrop_pane

0x0ece,	// (0x0006efe1) aid_cams_size_cell_ParamLimits

0x0ece,	// (0x0006efe1) aid_cams_size_cell

0x0ee2,	// (0x0006eff5) grid_cams_pane_ParamLimits

0x0efc,	// (0x0006f00f) linegrid_cams_pane_ParamLimits

0x10cb,	// (0x0006f1de) call_video_pane_t1

0x10e5,	// (0x0006f1f8) call_video_pane_t2

0x0001,

0xf26e,	// (0x0007d381) call_video_pane_t

0x1519,	// (0x0006f62c) aid_cale_month_size_cell_pane_ParamLimits

0x1519,	// (0x0006f62c) aid_cale_month_size_cell_pane

0xf60b,	// (0x0007d71e) smil_status_volume_pane_g

0x9f1a,	// (0x0007802d) volume_smil_pane_ParamLimits

0x9580,	// (0x00077693) aid_popup2_width_pane

0x030c,	// (0x0006e41f) cell_qdial_pane_g4_ParamLimits

0x030c,	// (0x0006e41f) cell_qdial_pane_g4

0x255f,	// (0x00070672) aid_blid_cardinal_pane_ParamLimits

0x256b,	// (0x0007067e) aid_blid_destination_pane_ParamLimits

0x256b,	// (0x0007067e) aid_blid_destination_pane

0x9c43,	// (0x00077d56) bg_popup_call_poc_act_pane_ParamLimits

0x9c43,	// (0x00077d56) bg_popup_call_poc_act_pane

0x9c43,	// (0x00077d56) bg_popup_call_poc_inact_pane_ParamLimits

0x9c43,	// (0x00077d56) bg_popup_call_poc_inact_pane

0xc6a7,	// (0x0007a7ba) bg_popup_call_poc_act_pane_g1

0xc6af,	// (0x0007a7c2) bg_popup_call_poc_act_pane_g2

0xc6b7,	// (0x0007a7ca) bg_popup_call_poc_act_pane_g3

0xc677,	// (0x0007a78a) bg_popup_call_poc_act_pane_g4

0xc67f,	// (0x0007a792) bg_popup_call_poc_act_pane_g5

0xc6bf,	// (0x0007a7d2) bg_popup_call_poc_act_pane_g6

0xc68f,	// (0x0007a7a2) bg_popup_call_poc_act_pane_g7

0xc6c7,	// (0x0007a7da) bg_popup_call_poc_act_pane_g8

0x99e8,	// (0x00077afb) main_usb_pane

0xc830,	// (0x0007a943) popup_cale_lunar_info_window

0x13ae,	// (0x0006f4c1) im_reading_pane_t1_ParamLimits

0xab7d,	// (0x00078c90) list_im_pane_ParamLimits

0xab8e,	// (0x00078ca1) scroll_pane_cp07_ParamLimits

0x99e8,	// (0x00077afb) grid_highlight_pane_cp012

0x9c43,	// (0x00077d56) mup_scale_pane_ParamLimits

0xb56d,	// (0x00079680) main_usb_pane_g1_ParamLimits

0xb56d,	// (0x00079680) main_usb_pane_g1

0x32f5,	// (0x00071408) main_usb_pane_g2_ParamLimits

0x32f5,	// (0x00071408) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0007d6be) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0007d6be) main_usb_pane_g

0x330b,	// (0x0007141e) main_usb_pane_t1_ParamLimits

0x330b,	// (0x0007141e) main_usb_pane_t1

0x331d,	// (0x00071430) main_usb_pane_t2_ParamLimits

0x331d,	// (0x00071430) main_usb_pane_t2

0x332f,	// (0x00071442) main_usb_pane_t3_ParamLimits

0x332f,	// (0x00071442) main_usb_pane_t3

0x3341,	// (0x00071454) main_usb_pane_t4_ParamLimits

0x3341,	// (0x00071454) main_usb_pane_t4

0x3356,	// (0x00071469) main_usb_pane_t5_ParamLimits

0x3356,	// (0x00071469) main_usb_pane_t5

0x336b,	// (0x0007147e) main_usb_pane_t6_ParamLimits

0x336b,	// (0x0007147e) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0007d6c3) main_usb_pane_t_ParamLimits

0x2500,	// (0x00070613) aid_text_placing

0x250b,	// (0x0007061e) main_location2_pane_t1_ParamLimits

0x251f,	// (0x00070632) main_location2_pane_t2_ParamLimits

0x2535,	// (0x00070648) main_location2_pane_t3_ParamLimits

0x254b,	// (0x0007065e) main_location2_pane_t4_ParamLimits

0x254b,	// (0x0007065e) main_location2_pane_t4

0xf3cf,	// (0x0007d4e2) main_location2_pane_t_ParamLimits

0x9c7f,	// (0x00077d92) find_pinb_pane_g2_ParamLimits

0x9c7f,	// (0x00077d92) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0007d22e) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0007d22e) find_pinb_pane_g

0x9c8b,	// (0x00077d9e) find_pinb_pane_t1_ParamLimits

0x9c9d,	// (0x00077db0) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0007d233) find_pinb_pane_t_ParamLimits

0x99e8,	// (0x00077afb) main_call3_pane

0x1ae8,	// (0x0006fbfb) cale_month_day_heading_pane_t1_ParamLimits

0x1b6e,	// (0x0006fc81) cale_month_day_heading_pane_t2_ParamLimits

0x1bff,	// (0x0006fd12) cale_month_day_heading_pane_t3_ParamLimits

0x1c90,	// (0x0006fda3) cale_month_day_heading_pane_t4_ParamLimits

0x1d21,	// (0x0006fe34) cale_month_day_heading_pane_t5_ParamLimits

0x1dc2,	// (0x0006fed5) cale_month_day_heading_pane_t6_ParamLimits

0x1e67,	// (0x0006ff7a) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0007d3b9) cale_month_day_heading_pane_t_ParamLimits

0x2143,	// (0x00070256) smil_status_volume_pane

0x2db2,	// (0x00070ec5) postcard_address_pane_ParamLimits

0x2db2,	// (0x00070ec5) postcard_address_pane

0x2dc8,	// (0x00070edb) postcard_message_pane_ParamLimits

0x2dc8,	// (0x00070edb) postcard_message_pane

0x32d1,	// (0x000713e4) call2_cli_visual_pane_t1_ParamLimits

0x32d1,	// (0x000713e4) call2_cli_visual_pane_t1

0x3b5e,	// (0x00071c71) postcard_message_pane_t1_ParamLimits

0x3b5e,	// (0x00071c71) postcard_message_pane_t1

0x3b47,	// (0x00071c5a) postcard_address_pane_t1_ParamLimits

0x3b47,	// (0x00071c5a) postcard_address_pane_t1

0x3b33,	// (0x00071c46) popup_call3_audio_in_window_ParamLimits

0x3b33,	// (0x00071c46) popup_call3_audio_in_window

0x39b8,	// (0x00071acb) bg_popup_call3_in_pane_ParamLimits

0x39b8,	// (0x00071acb) bg_popup_call3_in_pane

0x3a34,	// (0x00071b47) popup_call3_audio_in_window_g1_ParamLimits

0x3a34,	// (0x00071b47) popup_call3_audio_in_window_g1

0x3a54,	// (0x00071b67) popup_call3_audio_in_window_g2_ParamLimits

0x3a54,	// (0x00071b67) popup_call3_audio_in_window_g2

0x3a74,	// (0x00071b87) popup_call3_audio_in_window_g3_ParamLimits

0x3a74,	// (0x00071b87) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0007d725) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0007d725) popup_call3_audio_in_window_g

0x3aa5,	// (0x00071bb8) popup_call3_audio_in_window_t1_ParamLimits

0x3aa5,	// (0x00071bb8) popup_call3_audio_in_window_t1

0x3ae3,	// (0x00071bf6) popup_call3_audio_in_window_t2_ParamLimits

0x3ae3,	// (0x00071bf6) popup_call3_audio_in_window_t2

0x3b21,	// (0x00071c34) popup_call3_audio_in_window_t3_ParamLimits

0x3b21,	// (0x00071c34) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0007d72e) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0007d72e) popup_call3_audio_in_window_t

0xb3ae,	// (0x000794c1) bg_popup_call3_rect_pane

0xc61f,	// (0x0007a732) bg_popup_call3_rect_pane_g1

0xa99f,	// (0x00078ab2) bg_popup_call3_rect_pane_g2

0xc627,	// (0x0007a73a) bg_popup_call3_rect_pane_g3

0xc62f,	// (0x0007a742) bg_popup_call3_rect_pane_g4

0xc637,	// (0x0007a74a) bg_popup_call3_rect_pane_g5

0xc63f,	// (0x0007a752) bg_popup_call3_rect_pane_g6

0xc647,	// (0x0007a75a) bg_popup_call3_rect_pane_g7

0x2965,	// (0x00070a78) mup_visualizer_osc_pane

0xb47b,	// (0x0007958e) mup_visualizer_spec_pane

0x39e8,	// (0x00071afb) call3_video_qcif_pane_ParamLimits

0x39e8,	// (0x00071afb) call3_video_qcif_pane

0x39fb,	// (0x00071b0e) call3_video_qcif_uncrop_pane_ParamLimits

0x39fb,	// (0x00071b0e) call3_video_qcif_uncrop_pane

0x3a0b,	// (0x00071b1e) call3_video_subqcif_pane_ParamLimits

0x3a0b,	// (0x00071b1e) call3_video_subqcif_pane

0x3a21,	// (0x00071b34) call3_video_subqcif_uncrop_pane_ParamLimits

0x3a21,	// (0x00071b34) call3_video_subqcif_uncrop_pane

0x3a94,	// (0x00071ba7) popup_call3_audio_in_window_g4_ParamLimits

0x3a94,	// (0x00071ba7) popup_call3_audio_in_window_g4

0x39a7,	// (0x00071aba) mup_spec_half_pane

0x39b0,	// (0x00071ac3) mup_spec_half_pane_cp

0xc8cb,	// (0x0007a9de) mup_osc_middle_pane

0xc8d4,	// (0x0007a9e7) mup_visualizer_osc_pane_g1

0x3987,	// (0x00071a9a) mup_spec_bar_pane_ParamLimits

0x3987,	// (0x00071a9a) mup_spec_bar_pane

0xc8b8,	// (0x0007a9cb) mup_spec_bar_pane_g1

0xc8c2,	// (0x0007a9d5) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007d719) mup_spec_bar_pane_g

0x03bc,	// (0x0006e4cf) aid_cale_week_size_cell_pane_ParamLimits

0x03d6,	// (0x0006e4e9) bg_cale_heading_pane_ParamLimits

0xa9d3,	// (0x00078ae6) bg_cale_pane_cp01_ParamLimits

0x03ff,	// (0x0006e512) cale_week_corner_pane_ParamLimits

0x041e,	// (0x0006e531) cale_week_day_heading_pane_ParamLimits

0x044c,	// (0x0006e55f) cale_week_scroll_pane_g1_ParamLimits

0x0470,	// (0x0006e583) cale_week_scroll_pane_g2_ParamLimits

0x0488,	// (0x0006e59b) cale_week_scroll_pane_g3_ParamLimits

0x04a0,	// (0x0006e5b3) cale_week_scroll_pane_g4_ParamLimits

0x04bc,	// (0x0006e5cf) cale_week_scroll_pane_g5_ParamLimits

0x04dc,	// (0x0006e5ef) cale_week_scroll_pane_g6_ParamLimits

0x04fc,	// (0x0006e60f) cale_week_scroll_pane_g7_ParamLimits

0x0520,	// (0x0006e633) cale_week_scroll_pane_g8_ParamLimits

0x0544,	// (0x0006e657) cale_week_scroll_pane_g9_ParamLimits

0x0561,	// (0x0006e674) cale_week_scroll_pane_g10_ParamLimits

0x057e,	// (0x0006e691) cale_week_scroll_pane_g11_ParamLimits

0x059b,	// (0x0006e6ae) cale_week_scroll_pane_g12_ParamLimits

0x05b8,	// (0x0006e6cb) cale_week_scroll_pane_g13_ParamLimits

0x05d5,	// (0x0006e6e8) cale_week_scroll_pane_g14_ParamLimits

0x05fe,	// (0x0006e711) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0007d2bf) cale_week_scroll_pane_g_ParamLimits

0x064b,	// (0x0006e75e) cale_week_time_pane_ParamLimits

0x066f,	// (0x0006e782) grid_cale_week_pane_ParamLimits

0xa9f1,	// (0x00078b04) listscroll_cale_week_pane_t1

0xaa03,	// (0x00078b16) scroll_pane_cp08_ParamLimits

0x1586,	// (0x0006f699) cale_month_corner_pane_ParamLimits

0xadae,	// (0x00078ec1) cale_month_pane_t1

0x1a6e,	// (0x0006fb81) cale_month_week_pane_ParamLimits

0x232e,	// (0x00070441) popup_call_status_window_g1_ParamLimits

0x2342,	// (0x00070455) popup_call_status_window_g2_ParamLimits

0x2356,	// (0x00070469) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0007d469) popup_call_status_window_g_ParamLimits

0xb150,	// (0x00079263) aid_call2_pane

0x2c26,	// (0x00070d39) msg_header_pane_g1

0x2db2,	// (0x00070ec5) postcard_address2_pane_ParamLimits

0x2db2,	// (0x00070ec5) postcard_address2_pane

0x2dc8,	// (0x00070edb) postcard_message2_pane_ParamLimits

0x2dc8,	// (0x00070edb) postcard_message2_pane

0x3937,	// (0x00071a4a) message2_row_pane_ParamLimits

0x3937,	// (0x00071a4a) message2_row_pane

0x3954,	// (0x00071a67) address2_row_pane_ParamLimits

0x3954,	// (0x00071a67) address2_row_pane

0xc886,	// (0x0007a999) postcard_message2_row_pane_g1

0xc88e,	// (0x0007a9a1) postcard_message2_row_pane_t1

0xc886,	// (0x0007a999) address2_row_pane_g1

0xc88e,	// (0x0007a9a1) address2_row_pane_t1

0x0b9b,	// (0x0006ecae) aid_size_cell_vorec

0x99e8,	// (0x00077afb) main_rss_pane

0x3967,	// (0x00071a7a) rss_list_single_pane_ParamLimits

0x3967,	// (0x00071a7a) rss_list_single_pane

0xc89c,	// (0x0007a9af) rss_list_single_pane_t1

0xc8aa,	// (0x0007a9bd) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0007d714) rss_list_single_pane_t

0x99e8,	// (0x00077afb) main_camera2_pane

0x99e8,	// (0x00077afb) main_video2_pane

0x3bcd,	// (0x00071ce0) cams_zoom_pane_cp2_ParamLimits

0x3bcd,	// (0x00071ce0) cams_zoom_pane_cp2

0x3be4,	// (0x00071cf7) image2_vga_pane_ParamLimits

0x3be4,	// (0x00071cf7) image2_vga_pane

0x3c2c,	// (0x00071d3f) main_camera2_pane_g1_ParamLimits

0x3c2c,	// (0x00071d3f) main_camera2_pane_g1

0x3c4c,	// (0x00071d5f) main_camera2_pane_g2_ParamLimits

0x3c4c,	// (0x00071d5f) main_camera2_pane_g2

0x3c63,	// (0x00071d76) main_camera2_pane_g3_ParamLimits

0x3c63,	// (0x00071d76) main_camera2_pane_g3

0x3c7a,	// (0x00071d8d) main_camera2_pane_g4_ParamLimits

0x3c7a,	// (0x00071d8d) main_camera2_pane_g4

0x3c91,	// (0x00071da4) main_camera2_pane_g5_ParamLimits

0x3c91,	// (0x00071da4) main_camera2_pane_g5

0x3ca8,	// (0x00071dbb) main_camera2_pane_g6_ParamLimits

0x3ca8,	// (0x00071dbb) main_camera2_pane_g6

0x3cbf,	// (0x00071dd2) main_camera2_pane_g7_ParamLimits

0x3cbf,	// (0x00071dd2) main_camera2_pane_g7

0x3cd6,	// (0x00071de9) main_camera2_pane_g8_ParamLimits

0x3cd6,	// (0x00071de9) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0007d735) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0007d735) main_camera2_pane_g

0x3d04,	// (0x00071e17) main_camera2_pane_t1_ParamLimits

0x3d04,	// (0x00071e17) main_camera2_pane_t1

0x3d39,	// (0x00071e4c) main_camera2_pane_t2_ParamLimits

0x3d39,	// (0x00071e4c) main_camera2_pane_t2

0x3d56,	// (0x00071e69) main_camera2_pane_t3_ParamLimits

0x3d56,	// (0x00071e69) main_camera2_pane_t3

0x3db4,	// (0x00071ec7) main_camera2_pane_t4_ParamLimits

0x3db4,	// (0x00071ec7) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0007d748) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0007d748) main_camera2_pane_t

0x3e3d,	// (0x00071f50) cams_zoom_pane_cp4_ParamLimits

0x3e3d,	// (0x00071f50) cams_zoom_pane_cp4

0x3e53,	// (0x00071f66) image2_cif_pane_ParamLimits

0x3e53,	// (0x00071f66) image2_cif_pane

0x3e7e,	// (0x00071f91) image2_subqcif_pane_ParamLimits

0x3e7e,	// (0x00071f91) image2_subqcif_pane

0x3e99,	// (0x00071fac) main_video2_pane_g1_ParamLimits

0x3e99,	// (0x00071fac) main_video2_pane_g1

0x3eb3,	// (0x00071fc6) main_video2_pane_g2_ParamLimits

0x3eb3,	// (0x00071fc6) main_video2_pane_g2

0x3ec9,	// (0x00071fdc) main_video2_pane_g3_ParamLimits

0x3ec9,	// (0x00071fdc) main_video2_pane_g3

0x3edf,	// (0x00071ff2) main_video2_pane_g4_ParamLimits

0x3edf,	// (0x00071ff2) main_video2_pane_g4

0x3ef5,	// (0x00072008) main_video2_pane_g5_ParamLimits

0x3ef5,	// (0x00072008) main_video2_pane_g5

0x3f0b,	// (0x0007201e) main_video2_pane_g6_ParamLimits

0x3f0b,	// (0x0007201e) main_video2_pane_g6

0x0005,

0xf644,	// (0x0007d757) main_video2_pane_g_ParamLimits

0xf644,	// (0x0007d757) main_video2_pane_g

0x3f25,	// (0x00072038) main_video2_pane_t1_ParamLimits

0x3f25,	// (0x00072038) main_video2_pane_t1

0x3f49,	// (0x0007205c) main_video2_pane_t2_ParamLimits

0x3f49,	// (0x0007205c) main_video2_pane_t2

0x3f99,	// (0x000720ac) main_video2_pane_t3_ParamLimits

0x3f99,	// (0x000720ac) main_video2_pane_t3

0x0002,

0xf651,	// (0x0007d764) main_video2_pane_t_ParamLimits

0xf651,	// (0x0007d764) main_video2_pane_t

0x3429,	// (0x0007153c) call_muted_g2

0x0001,

0xf5f3,	// (0x0007d706) call_muted_g

0x99e8,	// (0x00077afb) main_mup2_pane

0x3fe1,	// (0x000720f4) main_mup2_pane_g1_ParamLimits

0x3fe1,	// (0x000720f4) main_mup2_pane_g1

0x3fed,	// (0x00072100) main_mup2_pane_g2_ParamLimits

0x3fed,	// (0x00072100) main_mup2_pane_g2

0x9f85,	// (0x00078098) main_mup_pane_g13_cp1

0x9f8d,	// (0x000780a0) mup_volume_pane_cp1

0x400b,	// (0x0007211e) main_mup2_pane_g4_ParamLimits

0x400b,	// (0x0007211e) main_mup2_pane_g4

0x401d,	// (0x00072130) main_mup2_pane_g5_ParamLimits

0x401d,	// (0x00072130) main_mup2_pane_g5

0x402f,	// (0x00072142) main_mup2_pane_g6_ParamLimits

0x402f,	// (0x00072142) main_mup2_pane_g6

0x4041,	// (0x00072154) main_mup2_pane_g7_ParamLimits

0x4041,	// (0x00072154) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0007d76b) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0007d76b) main_mup2_pane_g

0x4059,	// (0x0007216c) main_mup2_pane_t1_ParamLimits

0x4059,	// (0x0007216c) main_mup2_pane_t1

0x406f,	// (0x00072182) main_mup2_pane_t2_ParamLimits

0x406f,	// (0x00072182) main_mup2_pane_t2

0x4085,	// (0x00072198) main_mup2_pane_t3_ParamLimits

0x4085,	// (0x00072198) main_mup2_pane_t3

0x409b,	// (0x000721ae) main_mup2_pane_t4_ParamLimits

0x409b,	// (0x000721ae) main_mup2_pane_t4

0x40b3,	// (0x000721c6) main_mup2_pane_t5_ParamLimits

0x40b3,	// (0x000721c6) main_mup2_pane_t5

0x40cb,	// (0x000721de) main_mup2_pane_t6_ParamLimits

0x40cb,	// (0x000721de) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0007d77a) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0007d77a) main_mup2_pane_t

0x40fb,	// (0x0007220e) mup2_visualizer_pane_ParamLimits

0x40fb,	// (0x0007220e) mup2_visualizer_pane

0x4129,	// (0x0007223c) mup_progress_pane_cp_ParamLimits

0x4129,	// (0x0007223c) mup_progress_pane_cp

0x9f70,	// (0x00078083) mup_volume_pane_cp_ParamLimits

0x9f70,	// (0x00078083) mup_volume_pane_cp

0x413f,	// (0x00072252) mup2_visualizer_pane_g1_ParamLimits

0x413f,	// (0x00072252) mup2_visualizer_pane_g1

0xc90b,	// (0x0007aa1e) mup2_visualizer_pane_g2_ParamLimits

0xc90b,	// (0x0007aa1e) mup2_visualizer_pane_g2

0x4156,	// (0x00072269) mup2_visualizer_pane_g3_ParamLimits

0x4156,	// (0x00072269) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0007d787) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0007d787) mup2_visualizer_pane_g

0xb6b6,	// (0x000797c9) aid_size_cell_fmradio

0x35d9,	// (0x000716ec) aid_height_parent_landcape

0xac0c,	// (0x00078d1f) wml_content_pane_cp

0xac14,	// (0x00078d27) wml_tabs_pane

0xac1d,	// (0x00078d30) popup_wml_miniature_window

0xac25,	// (0x00078d38) scroll_pane_cp021

0xac39,	// (0x00078d4c) wml_content_pane_comp8

0x99e8,	// (0x00077afb) bg_popup_sub_pane_cp05

0xc929,	// (0x0007aa3c) popup_wml_miniature_window_g1

0xc931,	// (0x0007aa44) wml_miniature_view_pane

0x4162,	// (0x00072275) aid_size_wml_view

0x416a,	// (0x0007227d) wml_miniature_view_pane_g1

0x4173,	// (0x00072286) wml_miniature_view_pane_g2

0x417c,	// (0x0007228f) wml_miniature_view_pane_g3

0x4184,	// (0x00072297) wml_miniature_view_pane_g4

0x418c,	// (0x0007229f) wml_miniature_view_pane_g5

0x4194,	// (0x000722a7) wml_miniature_view_pane_g6

0x419c,	// (0x000722af) wml_miniature_view_pane_g7

0x41a4,	// (0x000722b7) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0007d78e) wml_miniature_view_pane_g

0xc939,	// (0x0007aa4c) background_graphic_ParamLimits

0xc939,	// (0x0007aa4c) background_graphic

0xc945,	// (0x0007aa58) wml_tabs_2_pane

0xc94e,	// (0x0007aa61) wml_tabs_3_pane_ParamLimits

0xc94e,	// (0x0007aa61) wml_tabs_3_pane

0xc960,	// (0x0007aa73) wml_tabs_4_pane_ParamLimits

0xc960,	// (0x0007aa73) wml_tabs_4_pane

0xc976,	// (0x0007aa89) wml_tabs_5_pane_ParamLimits

0xc976,	// (0x0007aa89) wml_tabs_5_pane

0xc990,	// (0x0007aaa3) wml_tabs_pane_g2_ParamLimits

0xc990,	// (0x0007aaa3) wml_tabs_pane_g2

0xc9a4,	// (0x0007aab7) wml_tabs_pane_g3_ParamLimits

0xc9a4,	// (0x0007aab7) wml_tabs_pane_g3

0x41ac,	// (0x000722bf) wml_tabs_2_active_pane_ParamLimits

0x41ac,	// (0x000722bf) wml_tabs_2_active_pane

0x41c0,	// (0x000722d3) wml_tabs_2_passive_pane_ParamLimits

0x41c0,	// (0x000722d3) wml_tabs_2_passive_pane

0x41d4,	// (0x000722e7) wml_tabs_3_active_pane_cp_ParamLimits

0x41d4,	// (0x000722e7) wml_tabs_3_active_pane_cp

0x41e9,	// (0x000722fc) wml_tabs_3_passive_pane_ParamLimits

0x41e9,	// (0x000722fc) wml_tabs_3_passive_pane

0x41fc,	// (0x0007230f) wml_tabs_3_passive_pane_cp_ParamLimits

0x41fc,	// (0x0007230f) wml_tabs_3_passive_pane_cp

0x4213,	// (0x00072326) tabs_4_active_pane

0x421b,	// (0x0007232e) tabs_4_passive_pane

0x4225,	// (0x00072338) tabs_4_passive_pane_cp

0x422d,	// (0x00072340) tabs_4_passive_pane_cp2

0x32ed,	// (0x00071400) aid_height_text

0x2937,	// (0x00070a4a) mup_volume_cont_pane_ParamLimits

0x2937,	// (0x00070a4a) mup_volume_cont_pane

0xff99,	// (0x0006e0ac) aid_size_cell_pinb

0xffa3,	// (0x0006e0b6) aid_size_list_pinb

0x4115,	// (0x00072228) mup2_volume_cont_pane_ParamLimits

0x4115,	// (0x00072228) mup2_volume_cont_pane

0x9f5c,	// (0x0007806f) mup2_volume_cont_pane_g1_ParamLimits

0x9f5c,	// (0x0007806f) mup2_volume_cont_pane_g1

0xfc49,	// (0x0006dd5c) aid_size_cell_touch_ParamLimits

0xfc49,	// (0x0006dd5c) aid_size_cell_touch

0xfe89,	// (0x0006df9c) touch_pane_ParamLimits

0xfe89,	// (0x0006df9c) touch_pane

0x956e,	// (0x00077681) main_rss2_pane

0xc9c1,	// (0x0007aad4) listscroll_rss2_pane

0xc9ca,	// (0x0007aadd) rss2_navigation_pane

0xc9d2,	// (0x0007aae5) list_rss2_pane

0xb274,	// (0x00079387) scroll_pane_cp22

0xc9da,	// (0x0007aaed) rss2_navigation_pane_g1

0xc9e3,	// (0x0007aaf6) rss2_navigation_pane_g2

0xc9eb,	// (0x0007aafe) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0007d79f) rss2_navigation_pane_g

0xc9f3,	// (0x0007ab06) rss2_navigation_pane_t1

0x4237,	// (0x0007234a) rss2_list_single_pane_ParamLimits

0x4237,	// (0x0007234a) rss2_list_single_pane

0xca01,	// (0x0007ab14) rss2_list_single_pane_t2

0xca0f,	// (0x0007ab22) rss2_list_single_pane_t3_ParamLimits

0xca0f,	// (0x0007ab22) rss2_list_single_pane_t3

0xca2c,	// (0x0007ab3f) rss2_list_single_pane_t4

0x212b,	// (0x0007023e) smil_status_pane_g1

0x95c7,	// (0x000776da) main_image2_pane_ParamLimits

0x95c7,	// (0x000776da) main_image2_pane

0x3ced,	// (0x00071e00) main_camera2_pane_g9_ParamLimits

0x3ced,	// (0x00071e00) main_camera2_pane_g9

0x3e09,	// (0x00071f1c) main_camera2_pane_t5_ParamLimits

0x3e09,	// (0x00071f1c) main_camera2_pane_t5

0x9f31,	// (0x00078044) main_camera2_pane_t6_ParamLimits

0x9f31,	// (0x00078044) main_camera2_pane_t6

0x424d,	// (0x00072360) main_image2_pane_g1_ParamLimits

0x424d,	// (0x00072360) main_image2_pane_g1

0x3007,	// (0x0007111a) smil2_video_pane_ParamLimits

0x3007,	// (0x0007111a) smil2_video_pane

0xfc81,	// (0x0006dd94) aid_zoom_text_primary_cp

0x95bd,	// (0x000776d0) popup_preview_fixed_window

0xab75,	// (0x00078c88) im_reading_pane_g1

0x3bbf,	// (0x00071cd2) cams2_bc_adjust_pane_cp_ParamLimits

0x3bbf,	// (0x00071cd2) cams2_bc_adjust_pane_cp

0x3e2f,	// (0x00071f42) cams2_bc_adjust_pane_ParamLimits

0x3e2f,	// (0x00071f42) cams2_bc_adjust_pane

0xcf77,	// (0x0007b08a) cams2_bc_adjust_pane_g1

0x9f95,	// (0x000780a8) cams2_slider_pane

0x9f9e,	// (0x000780b1) cams2_slider_pane_g1

0x9fa7,	// (0x000780ba) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0007d7a6) cams2_slider_pane_g

0x0093,	// (0x0006e1a6) calc_display_pane_ParamLimits

0x00bb,	// (0x0006e1ce) calc_paper_pane_ParamLimits

0x00de,	// (0x0006e1f1) grid_calc_pane_ParamLimits

0x9e66,	// (0x00077f79) popup_clock_digital_window_t1_ParamLimits

0xb653,	// (0x00079766) main_image_pane_t1

0x0075,	// (0x0006e188) aid_size_cell_calc_ParamLimits

0x0075,	// (0x0006e188) aid_size_cell_calc

0x361f,	// (0x00071732) popup_blid_sat_info2_window_ParamLimits

0x361f,	// (0x00071732) popup_blid_sat_info2_window

0xca42,	// (0x0007ab55) aid_size_cell_blid

0xca4a,	// (0x0007ab5d) bg_popup_window_pane_cp07

0xca6d,	// (0x0007ab80) grid_popup_blid_pane

0xca77,	// (0x0007ab8a) heading_pane_cp05_ParamLimits

0xca77,	// (0x0007ab8a) heading_pane_cp05

0xcb41,	// (0x0007ac54) cell_popup_blid_pane_ParamLimits

0xcb41,	// (0x0007ac54) cell_popup_blid_pane

0xcb6b,	// (0x0007ac7e) cell_popup_blid_pane_g1

0xcb73,	// (0x0007ac86) cell_popup_blid_pane_t1

0x40e5,	// (0x000721f8) mup2_indicator_pane_ParamLimits

0x40e5,	// (0x000721f8) mup2_indicator_pane

0xb3ae,	// (0x000794c1) mup2_visualizer_osc_pane

0xc917,	// (0x0007aa2a) mup2_visualizer_spec_pane_ParamLimits

0xc917,	// (0x0007aa2a) mup2_visualizer_spec_pane

0x4263,	// (0x00072376) mup2_spec_half_pane

0x426c,	// (0x0007237f) mup2_spec_half_pane_cp

0x4274,	// (0x00072387) mup2_spec_bar_pane_ParamLimits

0x4274,	// (0x00072387) mup2_spec_bar_pane

0xc8b8,	// (0x0007a9cb) mup2_spec_bar_pane_g1

0xc8c2,	// (0x0007a9d5) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0007d719) mup2_spec_bar_pane_g

0x4294,	// (0x000723a7) mup2_osc_middle_pane

0xc8d4,	// (0x0007a9e7) mup2_visualizer_osc_pane_g1

0x95f5,	// (0x00077708) popup_number_entry_window_t1_ParamLimits

0x9608,	// (0x0007771b) popup_number_entry_window_t2_ParamLimits

0x961a,	// (0x0007772d) popup_number_entry_window_t3_ParamLimits

0xfedb,	// (0x0006dfee) popup_number_entry_window_t5_ParamLimits

0xfedb,	// (0x0006dfee) popup_number_entry_window_t5

0xf0c6,	// (0x0007d1d9) popup_number_entry_window_t_ParamLimits

0x962c,	// (0x0007773f) text_title_cp2_ParamLimits

0x9edb,	// (0x00077fee) aid_hotspot_pointer_text2_pane

0x9f01,	// (0x00078014) main_viewer_pane_g9_ParamLimits

0x9f01,	// (0x00078014) main_viewer_pane_g9

0xadae,	// (0x00078ec1) cale_month_pane_t1_ParamLimits

0xadd4,	// (0x00078ee7) bg_cale_pane_ParamLimits

0xadec,	// (0x00078eff) list_cale_pane_ParamLimits

0xadfd,	// (0x00078f10) listscroll_cale_day_pane_t1

0xae0f,	// (0x00078f22) scroll_pane_cp09_ParamLimits

0x296d,	// (0x00070a80) main_mup_eq_pane_t1_ParamLimits

0x296d,	// (0x00070a80) main_mup_eq_pane_t1

0x2989,	// (0x00070a9c) main_mup_eq_pane_t2_ParamLimits

0x2989,	// (0x00070a9c) main_mup_eq_pane_t2

0x29a5,	// (0x00070ab8) main_mup_eq_pane_t3_ParamLimits

0x29a5,	// (0x00070ab8) main_mup_eq_pane_t3

0x29c3,	// (0x00070ad6) main_mup_eq_pane_t4_ParamLimits

0x29c3,	// (0x00070ad6) main_mup_eq_pane_t4

0x29e1,	// (0x00070af4) main_mup_eq_pane_t5_ParamLimits

0x29e1,	// (0x00070af4) main_mup_eq_pane_t5

0x29ff,	// (0x00070b12) main_mup_eq_pane_t6_ParamLimits

0x29ff,	// (0x00070b12) main_mup_eq_pane_t6

0x2a15,	// (0x00070b28) main_mup_eq_pane_t7_ParamLimits

0x2a15,	// (0x00070b28) main_mup_eq_pane_t7

0x2a2b,	// (0x00070b3e) main_mup_eq_pane_t8_ParamLimits

0x2a2b,	// (0x00070b3e) main_mup_eq_pane_t8

0x2a41,	// (0x00070b54) main_mup_eq_pane_t9_ParamLimits

0x2a41,	// (0x00070b54) main_mup_eq_pane_t9

0x2a5d,	// (0x00070b70) main_mup_eq_pane_t10_ParamLimits

0x2a5d,	// (0x00070b70) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0007d568) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0007d568) main_mup_eq_pane_t

0x2b32,	// (0x00070c45) mup_equalizer_pane_cp5_ParamLimits

0x2b4a,	// (0x00070c5d) mup_equalizer_pane_cp6_ParamLimits

0x2b62,	// (0x00070c75) mup_equalizer_pane_cp7_ParamLimits

0x956e,	// (0x00077681) main_gallery_pane

0xc8dd,	// (0x0007a9f0) smil2_volume_pane

0xc8e5,	// (0x0007a9f8) smil_status_volume_pane_g1_ParamLimits

0xc8f8,	// (0x0007aa0b) smil_status_volume_pane_g2_ParamLimits

0x9f0d,	// (0x00078020) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0007d71e) smil_status_volume_pane_g_ParamLimits

0xca4a,	// (0x0007ab5d) bg_popup_window_pane_cp07_ParamLimits

0xca58,	// (0x0007ab6b) blid_firmament_pane

0x429d,	// (0x000723b0) aid_size_cell_gallery_ParamLimits

0x429d,	// (0x000723b0) aid_size_cell_gallery

0x42b3,	// (0x000723c6) grid_gallery_pane_ParamLimits

0x42b3,	// (0x000723c6) grid_gallery_pane

0x42ce,	// (0x000723e1) cell_gallery_pane_ParamLimits

0x42ce,	// (0x000723e1) cell_gallery_pane

0xcb81,	// (0x0007ac94) bg_cell_gallery_focus_pane_ParamLimits

0xcb81,	// (0x0007ac94) bg_cell_gallery_focus_pane

0xcb93,	// (0x0007aca6) cell_gallery_pane_g1_ParamLimits

0xcb93,	// (0x0007aca6) cell_gallery_pane_g1

0x4319,	// (0x0007242c) cell_gallery_pane_g2_ParamLimits

0x4319,	// (0x0007242c) cell_gallery_pane_g2

0x4326,	// (0x00072439) cell_gallery_pane_g3_ParamLimits

0x4326,	// (0x00072439) cell_gallery_pane_g3

0xcb9f,	// (0x0007acb2) cell_gallery_pane_g4_ParamLimits

0xcb9f,	// (0x0007acb2) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0007d7cc) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0007d7cc) cell_gallery_pane_g

0xcbab,	// (0x0007acbe) bg_cell_gallery_focus_pane_g1

0xcbb3,	// (0x0007acc6) bg_cell_gallery_focus_pane_g2

0xcbbb,	// (0x0007acce) bg_cell_gallery_focus_pane_g3

0xcbc3,	// (0x0007acd6) bg_cell_gallery_focus_pane_g4

0xcbcb,	// (0x0007acde) bg_cell_gallery_focus_pane_g5

0xcbd3,	// (0x0007ace6) bg_cell_gallery_focus_pane_g6

0xcbdb,	// (0x0007acee) bg_cell_gallery_focus_pane_g7

0xcbe3,	// (0x0007acf6) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0007d7d5) bg_cell_gallery_focus_pane_g

0xcbeb,	// (0x0007acfe) aid_firma_cardinal

0xcbff,	// (0x0007ad12) blid_firmament_pane_t1

0xcc16,	// (0x0007ad29) blid_firmament_pane_t2

0xcc2d,	// (0x0007ad40) blid_firmament_pane_t3

0xcc44,	// (0x0007ad57) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0007d7e6) blid_firmament_pane_t

0xcc5b,	// (0x0007ad6e) blid_sat_info_pane

0xcc6b,	// (0x0007ad7e) blid_sat_info_pane_g1

0xcc6b,	// (0x0007ad7e) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0007d7ef) blid_sat_info_pane_g

0xcc75,	// (0x0007ad88) blid_sat_info_pane_t1

0xcc83,	// (0x0007ad96) smil2_volume_content_pane

0xcc8c,	// (0x0007ad9f) smil2_volume_pane_g1

0xcc94,	// (0x0007ada7) smil2_volume_content_pane_g1

0xcc9d,	// (0x0007adb0) smil2_volume_content_pane_g2

0xcca6,	// (0x0007adb9) smil2_volume_content_pane_g3

0xccaf,	// (0x0007adc2) smil2_volume_content_pane_g4

0xccb8,	// (0x0007adcb) smil2_volume_content_pane_g5

0xccc1,	// (0x0007add4) smil2_volume_content_pane_g6

0xccca,	// (0x0007addd) smil2_volume_content_pane_g7

0xccd3,	// (0x0007ade6) smil2_volume_content_pane_g8

0xccdc,	// (0x0007adef) smil2_volume_content_pane_g9

0xcce5,	// (0x0007adf8) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0007d7f4) smil2_volume_content_pane_g

0x0736,	// (0x0006e849) cale_week_day_heading_pane_t1_ParamLimits

0x0780,	// (0x0006e893) cale_week_day_heading_pane_t2_ParamLimits

0x07cf,	// (0x0006e8e2) cale_week_day_heading_pane_t3_ParamLimits

0x081e,	// (0x0006e931) cale_week_day_heading_pane_t4_ParamLimits

0x086d,	// (0x0006e980) cale_week_day_heading_pane_t5_ParamLimits

0x08c0,	// (0x0006e9d3) cale_week_day_heading_pane_t6_ParamLimits

0x0917,	// (0x0006ea2a) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0007d2e0) cale_week_day_heading_pane_t_ParamLimits

0xaa25,	// (0x00078b38) bg_cale_side_pane_ParamLimits

0x0961,	// (0x0006ea74) cale_week_time_pane_t1_ParamLimits

0x099b,	// (0x0006eaae) cale_week_time_pane_t2_ParamLimits

0x09d5,	// (0x0006eae8) cale_week_time_pane_t3_ParamLimits

0x0a0f,	// (0x0006eb22) cale_week_time_pane_t4_ParamLimits

0x0a49,	// (0x0006eb5c) cale_week_time_pane_t5_ParamLimits

0x0a83,	// (0x0006eb96) cale_week_time_pane_t6_ParamLimits

0x0abd,	// (0x0006ebd0) cale_week_time_pane_t7_ParamLimits

0x0af7,	// (0x0006ec0a) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0007d2ef) cale_week_time_pane_t_ParamLimits

0x0b37,	// (0x0006ec4a) cell_cale_week_pane_g2_ParamLimits

0xaa25,	// (0x00078b38) bg_cale_side_pane_cp01_ParamLimits

0x1f10,	// (0x00070023) cale_month_week_pane_t1_ParamLimits

0x1f29,	// (0x0007003c) cale_month_week_pane_t2_ParamLimits

0x1f42,	// (0x00070055) cale_month_week_pane_t3_ParamLimits

0x1f5b,	// (0x0007006e) cale_month_week_pane_t4_ParamLimits

0x1f74,	// (0x00070087) cale_month_week_pane_t5_ParamLimits

0x1f8d,	// (0x000700a0) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0007d3c8) cale_month_week_pane_t_ParamLimits

0x9de6,	// (0x00077ef9) cell_cale_month_pane_g1_ParamLimits

0x956e,	// (0x00077681) main_cale_event_viewer_pane

0x956e,	// (0x00077681) listscroll_cale_event_viewer_pane

0xccee,	// (0x0007ae01) list_cale_ev_pane

0xccf6,	// (0x0007ae09) scroll_pane_cp023

0x4333,	// (0x00072446) field_cale_ev_pane_ParamLimits

0x4333,	// (0x00072446) field_cale_ev_pane

0xcd02,	// (0x0007ae15) field_cale_ev_content_pane_ParamLimits

0xcd02,	// (0x0007ae15) field_cale_ev_content_pane

0xcd0e,	// (0x0007ae21) field_cale_ev_pane_g1_ParamLimits

0xcd0e,	// (0x0007ae21) field_cale_ev_pane_g1

0xcd1a,	// (0x0007ae2d) field_cale_ev_pane_g2_ParamLimits

0xcd1a,	// (0x0007ae2d) field_cale_ev_pane_g2

0xcd32,	// (0x0007ae45) field_cale_ev_pane_g3_ParamLimits

0xcd32,	// (0x0007ae45) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0007d809) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0007d809) field_cale_ev_pane_g

0xcd4a,	// (0x0007ae5d) field_cale_ev_pane_t1_ParamLimits

0xcd4a,	// (0x0007ae5d) field_cale_ev_pane_t1

0x4357,	// (0x0007246a) field_cale_ev_content_pane_t1_ParamLimits

0x4357,	// (0x0007246a) field_cale_ev_content_pane_t1

0xb527,	// (0x0007963a) bg_button_pane_cp01

0x03a0,	// (0x0006e4b3) listscroll_cale_week_pane_ParamLimits

0x03b2,	// (0x0006e4c5) popup_toolbar_window_cp01

0xa9f1,	// (0x00078b04) listscroll_cale_week_pane_t1_ParamLimits

0x03a0,	// (0x0006e4b3) listscroll_cale_day_pane_ParamLimits

0x03b2,	// (0x0006e4c5) popup_toolbar_window_cp02

0xadfd,	// (0x00078f10) listscroll_cale_day_pane_t1_ParamLimits

0x03a0,	// (0x0006e4b3) main_cale_month_pane_ParamLimits

0x389f,	// (0x000719b2) popup_toolbar_window_cp03_ParamLimits

0x389f,	// (0x000719b2) popup_toolbar_window_cp03

0x2ec5,	// (0x00070fd8) main_image_pane_g2_ParamLimits

0x2ec5,	// (0x00070fd8) main_image_pane_g2

0x2ed6,	// (0x00070fe9) main_image_pane_g3_ParamLimits

0x2ed6,	// (0x00070fe9) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0007d5fa) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0007d5fa) main_image_pane_g

0xb653,	// (0x00079766) main_image_pane_t1_ParamLimits

0x2ee7,	// (0x00070ffa) main_image_pane_t2_ParamLimits

0x2ee7,	// (0x00070ffa) main_image_pane_t2

0x2ef9,	// (0x0007100c) main_image_pane_t3_ParamLimits

0x2ef9,	// (0x0007100c) main_image_pane_t3

0x2f21,	// (0x00071034) main_image_pane_t4_ParamLimits

0x2f21,	// (0x00071034) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0007d601) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0007d601) main_image_pane_t

0x2f41,	// (0x00071054) popup_image_details_window_cp01

0x2f4b,	// (0x0007105e) popup_toobar_trans_pane_cp01_ParamLimits

0x2f4b,	// (0x0007105e) popup_toobar_trans_pane_cp01

0x3712,	// (0x00071825) popup_image_details_window_ParamLimits

0x3712,	// (0x00071825) popup_image_details_window

0xc83c,	// (0x0007a94f) popup_image_focus_window

0x3b79,	// (0x00071c8c) camera2_autofocus_pane_ParamLimits

0x3b79,	// (0x00071c8c) camera2_autofocus_pane

0x956e,	// (0x00077681) bg_popup_sub_pane_cp06

0xcd61,	// (0x0007ae74) popup_image_focus_window_g1

0xcd69,	// (0x0007ae7c) popup_image_focus_window_g2

0xcd71,	// (0x0007ae84) popup_image_focus_window_g3

0xcd79,	// (0x0007ae8c) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0007d810) popup_image_focus_window_g

0xcd81,	// (0x0007ae94) popup_image_focus_window_t1

0xcd8f,	// (0x0007aea2) popup_image_focus_window_t2

0xcd9f,	// (0x0007aeb2) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0007d819) popup_image_focus_window_t

0xcdad,	// (0x0007aec0) camera2_autofocus_pane_g1

0x95c7,	// (0x000776da) bg_tb_trans_pane_cp01

0xcdbb,	// (0x0007aece) popup_image_details_window_g1

0xcdce,	// (0x0007aee1) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0007d82b) popup_image_details_window_g

0xcdf7,	// (0x0007af0a) popup_image_details_window_t1

0xce09,	// (0x0007af1c) popup_image_details_window_t2

0xce22,	// (0x0007af35) popup_image_details_window_t3

0xce36,	// (0x0007af49) popup_image_details_window_t4

0xce51,	// (0x0007af64) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0007d832) popup_image_details_window_t

0x9cfc,	// (0x00077e0f) bg_calc_paper_pane_ParamLimits

0x9d10,	// (0x00077e23) grid_highlight_pane_cp013

0x9d1a,	// (0x00077e2d) list_calc_pane_ParamLimits

0x9d2c,	// (0x00077e3f) scroll_pane_cp024

0xa8ac,	// (0x000789bf) bg_calc_display_pane_ParamLimits

0x01de,	// (0x0006e2f1) calc_display_pane_t1_ParamLimits

0x01f0,	// (0x0006e303) calc_display_pane_t2_ParamLimits

0x9d34,	// (0x00077e47) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0007d260) calc_display_pane_t_ParamLimits

0x02b9,	// (0x0006e3cc) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0007d27d) cell_calc_pane_g

0x02c2,	// (0x0006e3d5) cell_calc_pane_t1

0xa90b,	// (0x00078a1e) grid_highlight_pane_cp02_ParamLimits

0xa921,	// (0x00078a34) toolbar_button_pane_cp01_ParamLimits

0xa921,	// (0x00078a34) toolbar_button_pane_cp01

0xb698,	// (0x000797ab) temp_image_control_pane_ParamLimits

0xb698,	// (0x000797ab) temp_image_control_pane

0x95c7,	// (0x000776da) main_mp3_pane

0xce6b,	// (0x0007af7e) temp_image_control_pane_g1_ParamLimits

0xce6b,	// (0x0007af7e) temp_image_control_pane_g1

0xce79,	// (0x0007af8c) temp_image_control_pane_g2_ParamLimits

0xce79,	// (0x0007af8c) temp_image_control_pane_g2

0xce8b,	// (0x0007af9e) temp_image_control_pane_g3_ParamLimits

0xce8b,	// (0x0007af9e) temp_image_control_pane_g3

0x43a8,	// (0x000724bb) temp_image_control_pane_g4_ParamLimits

0x43a8,	// (0x000724bb) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0007d83d) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0007d83d) temp_image_control_pane_g

0xce6b,	// (0x0007af7e) main_mp3_pane_g1

0x43bb,	// (0x000724ce) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0007d846) main_mp3_pane_g

0xcece,	// (0x0007afe1) main_mp3_pane_t1

0xaa80,	// (0x00078b93) main_camera_pane_g8_ParamLimits

0xaa80,	// (0x00078b93) main_camera_pane_g8

0x0e74,	// (0x0006ef87) main_video_pane_g7_ParamLimits

0x0e74,	// (0x0006ef87) main_video_pane_g7

0x9f4a,	// (0x0007805d) main_camera2_pane_t7_ParamLimits

0x9f4a,	// (0x0007805d) main_camera2_pane_t7

0xabcc,	// (0x00078cdf) scroll_pane_cp025_ParamLimits

0xabcc,	// (0x00078cdf) scroll_pane_cp025

0xabe0,	// (0x00078cf3) scroll_pane_cp026_ParamLimits

0xabe0,	// (0x00078cf3) scroll_pane_cp026

0xabef,	// (0x00078d02) wml_content_pane_ParamLimits

0x956e,	// (0x00077681) main_touch_calib_pane

0x448d,	// (0x000725a0) main_touch_calib_pane_g1

0x449f,	// (0x000725b2) main_touch_calib_pane_g2

0x44b1,	// (0x000725c4) main_touch_calib_pane_g3

0x44c3,	// (0x000725d6) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0007d864) main_touch_calib_pane_g

0x44d5,	// (0x000725e8) main_touch_calib_pane_t1

0x44ef,	// (0x00072602) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0007d86d) main_touch_calib_pane_t

0xb2ef,	// (0x00079402) mup_progress_pane_cp02

0xb30e,	// (0x00079421) navi_pane_g1

0xb370,	// (0x00079483) navi_pane_mp_t3

0x95c7,	// (0x000776da) main_mp3_pane_ParamLimits

0x38e1,	// (0x000719f4) navi_pane_ParamLimits

0xce6b,	// (0x0007af7e) main_mp3_pane_g1_ParamLimits

0x43bb,	// (0x000724ce) main_mp3_pane_g2_ParamLimits

0x43c7,	// (0x000724da) main_mp3_pane_g3_ParamLimits

0x43c7,	// (0x000724da) main_mp3_pane_g3

0x43d5,	// (0x000724e8) main_mp3_pane_g4_ParamLimits

0x43d5,	// (0x000724e8) main_mp3_pane_g4

0xce9b,	// (0x0007afae) main_mp3_pane_g5_ParamLimits

0xce9b,	// (0x0007afae) main_mp3_pane_g5

0xcea9,	// (0x0007afbc) main_mp3_pane_g6_ParamLimits

0xcea9,	// (0x0007afbc) main_mp3_pane_g6

0xceb6,	// (0x0007afc9) main_mp3_pane_g7_ParamLimits

0xceb6,	// (0x0007afc9) main_mp3_pane_g7

0xcec2,	// (0x0007afd5) main_mp3_pane_g8_ParamLimits

0xcec2,	// (0x0007afd5) main_mp3_pane_g8

0xf733,	// (0x0007d846) main_mp3_pane_g_ParamLimits

0x43e1,	// (0x000724f4) main_mp3_pane_t2

0x43ef,	// (0x00072502) main_mp3_pane_t3

0xcedc,	// (0x0007afef) main_mp3_pane_t4

0xceea,	// (0x0007affd) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0007d857) main_mp3_pane_t

0xcef8,	// (0x0007b00b) mup_progress_pane_cp01

0xf0be,	// (0x0007d1d1) aid_zoom_text_secondary2

0xccee,	// (0x0007ae01) list_cale_ev2_pane

0xccf6,	// (0x0007ae09) scroll_pane_cp023_ParamLimits

0x4549,	// (0x0007265c) field_cale_ev2_pane_ParamLimits

0x4549,	// (0x0007265c) field_cale_ev2_pane

0x456d,	// (0x00072680) field_cale_ev2_pane_g1_ParamLimits

0x456d,	// (0x00072680) field_cale_ev2_pane_g1

0x4579,	// (0x0007268c) field_cale_ev2_pane_g2_ParamLimits

0x4579,	// (0x0007268c) field_cale_ev2_pane_g2

0x4591,	// (0x000726a4) field_cale_ev2_pane_g3_ParamLimits

0x4591,	// (0x000726a4) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0007d878) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0007d878) field_cale_ev2_pane_g

0x45a9,	// (0x000726bc) field_cale_ev2_pane_t1_ParamLimits

0x45a9,	// (0x000726bc) field_cale_ev2_pane_t1

0x45c0,	// (0x000726d3) field_cale_ev2_pane_t2_ParamLimits

0x45c0,	// (0x000726d3) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0007d881) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0007d881) field_cale_ev2_pane_t

0x2d62,	// (0x00070e75) main_postcard_pane_g5_ParamLimits

0x2d62,	// (0x00070e75) main_postcard_pane_g5

0x2d78,	// (0x00070e8b) main_postcard_pane_g6_ParamLimits

0x2d78,	// (0x00070e8b) main_postcard_pane_g6

0x0c20,	// (0x0006ed33) camera2_autofocus_pane_cp_ParamLimits

0x0c20,	// (0x0006ed33) camera2_autofocus_pane_cp

0x95c7,	// (0x000776da) main_mup3_pane

0x45f5,	// (0x00072708) main_mup3_pane_g1_ParamLimits

0x45f5,	// (0x00072708) main_mup3_pane_g1

0x4617,	// (0x0007272a) main_mup3_pane_g2_ParamLimits

0x4617,	// (0x0007272a) main_mup3_pane_g2

0x469a,	// (0x000727ad) main_mup3_pane_g3_ParamLimits

0x469a,	// (0x000727ad) main_mup3_pane_g3

0x46e2,	// (0x000727f5) main_mup3_pane_g4_ParamLimits

0x46e2,	// (0x000727f5) main_mup3_pane_g4

0x4728,	// (0x0007283b) main_mup3_pane_g5_ParamLimits

0x4728,	// (0x0007283b) main_mup3_pane_g5

0x4770,	// (0x00072883) main_mup3_pane_g6_ParamLimits

0x4770,	// (0x00072883) main_mup3_pane_g6

0xcf00,	// (0x0007b013) main_mup3_pane_g7_ParamLimits

0xcf00,	// (0x0007b013) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0007d891) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0007d891) main_mup3_pane_g

0x47f0,	// (0x00072903) main_mup3_pane_t1_ParamLimits

0x47f0,	// (0x00072903) main_mup3_pane_t1

0x485e,	// (0x00072971) main_mup3_pane_t2_ParamLimits

0x485e,	// (0x00072971) main_mup3_pane_t2

0x4934,	// (0x00072a47) main_mup3_pane_t4_ParamLimits

0x4934,	// (0x00072a47) main_mup3_pane_t4

0x4992,	// (0x00072aa5) main_mup3_pane_t5_ParamLimits

0x4992,	// (0x00072aa5) main_mup3_pane_t5

0x4a4c,	// (0x00072b5f) main_mup3_pane_t6_ParamLimits

0x4a4c,	// (0x00072b5f) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0007d8a2) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0007d8a2) main_mup3_pane_t

0x4b04,	// (0x00072c17) mup3_progress_pane_ParamLimits

0x4b04,	// (0x00072c17) mup3_progress_pane

0x4b96,	// (0x00072ca9) popup_mup3_control_window_ParamLimits

0x4b96,	// (0x00072ca9) popup_mup3_control_window

0xcf0e,	// (0x0007b021) popup_mup3_text_window

0x4bcc,	// (0x00072cdf) mup3_progress_pane_t1

0x4bea,	// (0x00072cfd) mup3_progress_pane_t2

0xcf16,	// (0x0007b029) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0007d8af) mup3_progress_pane_t

0xcf33,	// (0x0007b046) mup_progress_pane_cp03

0x956e,	// (0x00077681) bg_tb_trans_pane_cp04

0x4c08,	// (0x00072d1b) mup3_volume_pane

0x4c10,	// (0x00072d23) popup_mup3_control_window_g1

0x4c19,	// (0x00072d2c) mup3_volume_pane_g1

0x4c22,	// (0x00072d35) mup3_volume_pane_g2

0x4c2b,	// (0x00072d3e) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0007d8b6) mup3_volume_pane_g

0x956e,	// (0x00077681) bg_tb_trans_pane_cp03

0xcf43,	// (0x0007b056) popup_mup3_text_window_g1

0xcf4b,	// (0x0007b05e) popup_mup3_text_window_t1

0xa8f4,	// (0x00078a07) list_calc_item_pane_g1_ParamLimits

0xc9b8,	// (0x0007aacb) mup_volume_pane_cp_g1

0x4509,	// (0x0007261c) main_touch_calib_pane_t3

0x451d,	// (0x00072630) main_touch_calib_pane_t4

0x4533,	// (0x00072646) main_touch_calib_pane_t5

0x9578,	// (0x0007768b) aid_cell_size_toolbar2

0x9580,	// (0x00077693) aid_popup3_width_pane

0xfc79,	// (0x0006dd8c) aid_zoom_text_msg_primary

0x0bf5,	// (0x0006ed08) vorec_t7

0xa8b8,	// (0x000789cb) bg_calc_paper_pane_g1_ParamLimits

0xa8c4,	// (0x000789d7) bg_calc_paper_pane_g2_ParamLimits

0xa8d0,	// (0x000789e3) bg_calc_paper_pane_g3_ParamLimits

0xa8dc,	// (0x000789ef) bg_calc_paper_pane_g4_ParamLimits

0xa8e8,	// (0x000789fb) bg_calc_paper_pane_g5_ParamLimits

0x023f,	// (0x0006e352) bg_calc_paper_pane_g6_ParamLimits

0x0252,	// (0x0006e365) bg_calc_paper_pane_g7_ParamLimits

0x0265,	// (0x0006e378) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0007d267) bg_calc_paper_pane_g_ParamLimits

0x0276,	// (0x0006e389) calc_bg_paper_pane_g9_ParamLimits

0x0d82,	// (0x0006ee95) image_qvga_pane_ParamLimits

0x0d82,	// (0x0006ee95) image_qvga_pane

0x9c43,	// (0x00077d56) bg_popup_sub_pane_cp04_ParamLimits

0xb5cf,	// (0x000796e2) popup_mup_playback_window_g1_ParamLimits

0xb5db,	// (0x000796ee) popup_mup_playback_window_t1_ParamLimits

0xb5f0,	// (0x00079703) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0007d5f5) popup_mup_playback_window_t_ParamLimits

0x3ffd,	// (0x00072110) main_mup2_pane_g3_ParamLimits

0x3ffd,	// (0x00072110) main_mup2_pane_g3

0x1164,	// (0x0006f277) popup_toolbar_window_cp04

0xb9eb,	// (0x00079afe) popup_call2_audio_second_window_g3_ParamLimits

0xb9eb,	// (0x00079afe) popup_call2_audio_second_window_g3

0xbe2a,	// (0x00079f3d) popup_call2_audio_first_window_g4_ParamLimits

0xbe2a,	// (0x00079f3d) popup_call2_audio_first_window_g4

0xc4a9,	// (0x0007a5bc) popup_call2_audio_in_window_g4_ParamLimits

0xc4a9,	// (0x0007a5bc) popup_call2_audio_in_window_g4

0x2ea7,	// (0x00070fba) aid_area_sk_bg_cut_ParamLimits

0x2ea7,	// (0x00070fba) aid_area_sk_bg_cut

0xb605,	// (0x00079718) aid_area_sk_bg_cut_2_ParamLimits

0xb605,	// (0x00079718) aid_area_sk_bg_cut_2

0x4309,	// (0x0007241c) aid_placing_details_win

0x4311,	// (0x00072424) aid_placing_details_win_2

0xcdad,	// (0x0007aec0) camera2_autofocus_pane_g1_ParamLimits

0xfe22,	// (0x0006df35) popup_fixed_preview_cale_window_ParamLimits

0xfe22,	// (0x0006df35) popup_fixed_preview_cale_window

0xb3bf,	// (0x000794d2) navi_slider_pane_g3

0xb3c8,	// (0x000794db) navi_slider_pane_g4

0xb3d1,	// (0x000794e4) navi_slider_pane_g5

0xb3bf,	// (0x000794d2) navi_slider_pane_g6

0x9e8c,	// (0x00077f9f) navi_slider_pane_g7

0xb4f4,	// (0x00079607) mup_scale_pane_g3

0xb4fd,	// (0x00079610) mup_scale_pane_g4

0xb506,	// (0x00079619) mup_scale_pane_g5

0x2b7a,	// (0x00070c8d) mup_scale_pane_g6

0x2b83,	// (0x00070c96) mup_scale_pane_g7

0xb3bf,	// (0x000794d2) cams2_slider_pane_g3

0xca3a,	// (0x0007ab4d) cams2_slider_pane_g4

0x9fb0,	// (0x000780c3) cams2_slider_pane_g5

0xb3bf,	// (0x000794d2) cams2_slider_pane_g6

0x9fb8,	// (0x000780cb) cams2_slider_pane_g7

0xcc6b,	// (0x0007ad7e) camera2_autofocus_pane_cp_g1

0xc80e,	// (0x0007a921) bg_popup_preview_window_pane_cp02_ParamLimits

0xc80e,	// (0x0007a921) bg_popup_preview_window_pane_cp02

0xcf59,	// (0x0007b06c) list_fp_cale_pane_ParamLimits

0xcf59,	// (0x0007b06c) list_fp_cale_pane

0xcf65,	// (0x0007b078) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf65,	// (0x0007b078) popup_fixed_preview_cale_window_t1

0x4c34,	// (0x00072d47) popup_fixed_preview_cale_window_t2_ParamLimits

0x4c34,	// (0x00072d47) popup_fixed_preview_cale_window_t2

0x4c49,	// (0x00072d5c) popup_fixed_preview_cale_window_t3_ParamLimits

0x4c49,	// (0x00072d5c) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0007d8bd) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0007d8bd) popup_fixed_preview_cale_window_t

0x4c5e,	// (0x00072d71) list_single_fp_cale_pane_ParamLimits

0x4c5e,	// (0x00072d71) list_single_fp_cale_pane

0xcf8b,	// (0x0007b09e) list_single_fp_cale_pane_g1_ParamLimits

0xcf8b,	// (0x0007b09e) list_single_fp_cale_pane_g1

0xcf97,	// (0x0007b0aa) list_single_fp_cale_pane_g2_ParamLimits

0xcf97,	// (0x0007b0aa) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0007d8c4) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0007d8c4) list_single_fp_cale_pane_g

0xcfb0,	// (0x0007b0c3) list_single_fp_cale_pane_t1_ParamLimits

0xcfb0,	// (0x0007b0c3) list_single_fp_cale_pane_t1

0xcfc2,	// (0x0007b0d5) list_single_fp_cale_pane_t2_ParamLimits

0xcfc2,	// (0x0007b0d5) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0007d8cb) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0007d8cb) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x956e,	// (0x00077681) main_dialer_pane

0x4c73,	// (0x00072d86) aid_cell_size_keypad

0x4c7d,	// (0x00072d90) dialer_ne_pane

0x4c87,	// (0x00072d9a) grid_dialer_command_1_pane

0x4c8f,	// (0x00072da2) grid_dialer_command_2_pane

0x4c97,	// (0x00072daa) grid_dialer_keypad_pane

0x4ca9,	// (0x00072dbc) bg_popup_call_pane_cp06_ParamLimits

0x4ca9,	// (0x00072dbc) bg_popup_call_pane_cp06

0x4cb5,	// (0x00072dc8) dialer_ne_clear_pane_ParamLimits

0x4cb5,	// (0x00072dc8) dialer_ne_clear_pane

0xcff5,	// (0x0007b108) dialer_ne_pane_g1

0xcffd,	// (0x0007b110) dialer_ne_pane_t1_ParamLimits

0xcffd,	// (0x0007b110) dialer_ne_pane_t1

0x4cc1,	// (0x00072dd4) dialer_ne_pane_t2_ParamLimits

0x4cc1,	// (0x00072dd4) dialer_ne_pane_t2

0x4ceb,	// (0x00072dfe) dialer_ne_pane_t3_ParamLimits

0x4ceb,	// (0x00072dfe) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0007d8d0) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0007d8d0) dialer_ne_pane_t

0x4d1b,	// (0x00072e2e) dialer_ne_pane_t3_copy1_ParamLimits

0x4d1b,	// (0x00072e2e) dialer_ne_pane_t3_copy1

0x4d4a,	// (0x00072e5d) cell_dialer_keypad_pane_ParamLimits

0x4d4a,	// (0x00072e5d) cell_dialer_keypad_pane

0x4d61,	// (0x00072e74) cell_dialer_command_1_pane_ParamLimits

0x4d61,	// (0x00072e74) cell_dialer_command_1_pane

0x4d77,	// (0x00072e8a) cell_dialer_command_2_pane_ParamLimits

0x4d77,	// (0x00072e8a) cell_dialer_command_2_pane

0xd00f,	// (0x0007b122) bg_button_pane_cp02_ParamLimits

0xd00f,	// (0x0007b122) bg_button_pane_cp02

0x4d86,	// (0x00072e99) cell_dialer_keypad_pane_g1_ParamLimits

0x4d86,	// (0x00072e99) cell_dialer_keypad_pane_g1

0xd00f,	// (0x0007b122) bg_button_pane_cp03_ParamLimits

0xd00f,	// (0x0007b122) bg_button_pane_cp03

0x4d9b,	// (0x00072eae) cell_dialer_command_1_pane_g1_ParamLimits

0x4d9b,	// (0x00072eae) cell_dialer_command_1_pane_g1

0xd01b,	// (0x0007b12e) bg_button_pane_cp04

0x4daf,	// (0x00072ec2) cell_dialer_command_2_pane_g1

0xb3ae,	// (0x000794c1) bg_button_pane_cp06

0xd023,	// (0x0007b136) dialer_ne_clear_pane_g1

0x264c,	// (0x0007075f) navi_pane_g2

0x267a,	// (0x0007078d) navi_pane_g3

0x0002,

0xf3e5,	// (0x0007d4f8) navi_pane_g

0x26a5,	// (0x000707b8) navi_pane_mv_g2

0x26cc,	// (0x000707df) navi_pane_mv_g5

0x26d4,	// (0x000707e7) navi_pane_mv_t1

0xa8ac,	// (0x000789bf) main_clock2_pane

0x4dfa,	// (0x00072f0d) main_clock2_list_pane_ParamLimits

0x4dfa,	// (0x00072f0d) main_clock2_list_pane

0x4e32,	// (0x00072f45) main_clock2_pane_t1_ParamLimits

0x4e32,	// (0x00072f45) main_clock2_pane_t1

0x4e6e,	// (0x00072f81) main_clock2_pane_t2_ParamLimits

0x4e6e,	// (0x00072f81) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0007d8dc) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0007d8dc) main_clock2_pane_t

0x4f0e,	// (0x00073021) popup_clock_analogue_window_cp03_ParamLimits

0x4f0e,	// (0x00073021) popup_clock_analogue_window_cp03

0x4f35,	// (0x00073048) popup_clock_digital_window_cp02_ParamLimits

0x4f35,	// (0x00073048) popup_clock_digital_window_cp02

0x4fae,	// (0x000730c1) main_clock2_list_single_pane_ParamLimits

0x4fae,	// (0x000730c1) main_clock2_list_single_pane

0xb3ae,	// (0x000794c1) list_highlight_pane_cp05

0xd05f,	// (0x0007b172) main_clock2_list_single_pane_t1

0x1164,	// (0x0006f277) popup_toolbar_window_cp04_ParamLimits

0x4378,	// (0x0007248b) camera2_autofocus_pane_g2_ParamLimits

0x4378,	// (0x0007248b) camera2_autofocus_pane_g2

0x4384,	// (0x00072497) camera2_autofocus_pane_g3_ParamLimits

0x4384,	// (0x00072497) camera2_autofocus_pane_g3

0x4390,	// (0x000724a3) camera2_autofocus_pane_g4_ParamLimits

0x4390,	// (0x000724a3) camera2_autofocus_pane_g4

0x439c,	// (0x000724af) camera2_autofocus_pane_g5_ParamLimits

0x439c,	// (0x000724af) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0007d820) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0007d820) camera2_autofocus_pane_g

0x45d5,	// (0x000726e8) camera2_autofocus_pane_cp_g2

0x45dd,	// (0x000726f0) camera2_autofocus_pane_cp_g3

0x45e5,	// (0x000726f8) camera2_autofocus_pane_cp_g4

0x45ed,	// (0x00072700) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0007d886) camera2_autofocus_pane_cp_g

0x4ca1,	// (0x00072db4) popup_dialer_spcha_window

0x956e,	// (0x00077681) bg_popup_sub_pane_cp07

0xd06d,	// (0x0007b180) list_spcha_pane

0xd075,	// (0x0007b188) list_single_spcha_pane_ParamLimits

0xd075,	// (0x0007b188) list_single_spcha_pane

0x956e,	// (0x00077681) list_highlight_pane_cp06

0xd086,	// (0x0007b199) list_single_spcha_pane_t1

0xc253,	// (0x0007a366) popup_call2_audio_out_window_g4_ParamLimits

0xc253,	// (0x0007a366) popup_call2_audio_out_window_g4

0x956e,	// (0x00077681) main_imed2_pane

0xc846,	// (0x0007a959) popup_imed_adjust2_window

0x372a,	// (0x0007183d) popup_imed_trans_window_ParamLimits

0x372a,	// (0x0007183d) popup_imed_trans_window

0xcaa3,	// (0x0007abb6) popup_blid_sat_info2_window_t1

0xcab1,	// (0x0007abc4) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0007d7b5) popup_blid_sat_info2_window_t

0x5064,	// (0x00073177) aid_size_cell_colour_35

0x5084,	// (0x00073197) aid_size_cell_colour_112

0x50a4,	// (0x000731b7) aid_size_cell_effect

0xc81a,	// (0x0007a92d) bg_tb_trans_pane_cp02

0xaf0e,	// (0x00079021) heading_imed_pane

0x50c4,	// (0x000731d7) listscroll_imed_pane

0xd094,	// (0x0007b1a7) heading_imed_pane_g1

0xd09c,	// (0x0007b1af) heading_imed_pane_t1

0xd0aa,	// (0x0007b1bd) grid_imed_colour_35_pane_ParamLimits

0xd0aa,	// (0x0007b1bd) grid_imed_colour_35_pane

0x50d0,	// (0x000731e3) grid_imed_effect_pane

0xd0c6,	// (0x0007b1d9) list_imed_aspect_pane

0x50e5,	// (0x000731f8) scroll_pane_cp027_ParamLimits

0x50e5,	// (0x000731f8) scroll_pane_cp027

0x50f6,	// (0x00073209) cell_imed_effect_pane_ParamLimits

0x50f6,	// (0x00073209) cell_imed_effect_pane

0xd0ce,	// (0x0007b1e1) cell_imed_colour_pane_ParamLimits

0xd0ce,	// (0x0007b1e1) cell_imed_colour_pane

0xd118,	// (0x0007b22b) cell_imed_colour_pane_g1_ParamLimits

0xd118,	// (0x0007b22b) cell_imed_colour_pane_g1

0xd129,	// (0x0007b23c) hgihlgiht_grid_pane_cp016_ParamLimits

0xd129,	// (0x0007b23c) hgihlgiht_grid_pane_cp016

0x5121,	// (0x00073234) cell_imed_effect_pane_g1

0x5129,	// (0x0007323c) grid_highlight_pane_cp017

0xd13a,	// (0x0007b24d) list_imed_single_pane_ParamLimits

0xd13a,	// (0x0007b24d) list_imed_single_pane

0x956e,	// (0x00077681) list_highlight_pane_cp07

0xd14e,	// (0x0007b261) list_imed_aspect_pane_comp1_t1

0xc81a,	// (0x0007a92d) bg_tb_trans_pane_cp05

0xd170,	// (0x0007b283) popup_imed_adjust2_window_g1

0xd197,	// (0x0007b2aa) popup_imed_adjust2_window_t1

0xd1af,	// (0x0007b2c2) slider_imed_adjust_pane

0xd1c3,	// (0x0007b2d6) slider_imed_adjust_pane_g1

0xd1d3,	// (0x0007b2e6) slider_imed_adjust_pane_g2

0xd1e3,	// (0x0007b2f6) slider_imed_adjust_pane_g3

0xd1f4,	// (0x0007b307) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0007d8f9) slider_imed_adjust_pane_g

0x5132,	// (0x00073245) aid_size_cell_clipart2

0x513e,	// (0x00073251) grid_imed_clipart_pane

0xd205,	// (0x0007b318) scroll_pane_cp031

0x5148,	// (0x0007325b) cell_imed_clipart_pane_ParamLimits

0x5148,	// (0x0007325b) cell_imed_clipart_pane

0x5165,	// (0x00073278) cell_imed_clipart_pane_g1

0x956e,	// (0x00077681) grid_highlight_pane_cp014

0x4e0f,	// (0x00072f22) main_clock2_pane_g1_ParamLimits

0x4e0f,	// (0x00072f22) main_clock2_pane_g1

0x4f55,	// (0x00073068) aid_call2_pane_cp10

0x4f67,	// (0x0007307a) aid_call_pane_cp10

0xb2e3,	// (0x000793f6) popup_clock_analogue_window_cp10_g1

0xb2e3,	// (0x000793f6) popup_clock_analogue_window_cp10_g2

0x4f79,	// (0x0007308c) popup_clock_analogue_window_cp10_g3

0x4f79,	// (0x0007308c) popup_clock_analogue_window_cp10_g4

0xb2e3,	// (0x000793f6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0007d8e7) popup_clock_analogue_window_cp10_g

0x4f8f,	// (0x000730a2) popup_clock_analogue_window_cp10_t1

0x4fc0,	// (0x000730d3) clock_digital_number_pane_cp10_ParamLimits

0x4fc0,	// (0x000730d3) clock_digital_number_pane_cp10

0x4fda,	// (0x000730ed) clock_digital_number_pane_cp11_ParamLimits

0x4fda,	// (0x000730ed) clock_digital_number_pane_cp11

0x4ff4,	// (0x00073107) clock_digital_number_pane_cp12_ParamLimits

0x4ff4,	// (0x00073107) clock_digital_number_pane_cp12

0x500e,	// (0x00073121) clock_digital_number_pane_cp13_ParamLimits

0x500e,	// (0x00073121) clock_digital_number_pane_cp13

0x5028,	// (0x0007313b) clock_digital_separator_pane_cp10_ParamLimits

0x5028,	// (0x0007313b) clock_digital_separator_pane_cp10

0x5042,	// (0x00073155) popup_clock_digital_window_cp02_t1_ParamLimits

0x5042,	// (0x00073155) popup_clock_digital_window_cp02_t1

0x9c3b,	// (0x00077d4e) clock_digital_number_pane_cp10_g1

0x9c3b,	// (0x00077d4e) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0007d902) clock_digital_number_pane_cp10_g

0x9c3b,	// (0x00077d4e) clock_digital_separator_pane_cp10_g1

0x9c3b,	// (0x00077d4e) clock_digital_separator_pane_g2_cp10

0xb37e,	// (0x00079491) navi_pane_vded_g4

0xb387,	// (0x0007949a) navi_pane_vded_g5

0xb390,	// (0x000794a3) navi_pane_vded_t1

0x956e,	// (0x00077681) main_vded_pane

0x516e,	// (0x00073281) main_vded_pane_g1

0x517a,	// (0x0007328d) main_vded_pane_g2

0x5186,	// (0x00073299) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0007d907) main_vded_pane_g

0x5192,	// (0x000732a5) main_vded_pane_t1

0x51a0,	// (0x000732b3) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0007d90e) main_vded_pane_t

0x51ae,	// (0x000732c1) vded_slider_pane

0x51b8,	// (0x000732cb) vded_video_pane

0xd20d,	// (0x0007b320) vded_video_pane_g1

0x51c2,	// (0x000732d5) vded_video_pane_g2

0xcc6b,	// (0x0007ad7e) vded_video_pane_g3

0x0002,

0xf800,	// (0x0007d913) vded_video_pane_g

0xd217,	// (0x0007b32a) vded_slider_pane_g1

0xc9b8,	// (0x0007aacb) vded_slider_pane_g2

0xd220,	// (0x0007b333) vded_slider_pane_g3

0xd229,	// (0x0007b33c) vded_slider_pane_g4

0xd232,	// (0x0007b345) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0007d91a) vded_slider_pane_g

0x4b80,	// (0x00072c93) mup3_rocker_pane_ParamLimits

0x4b80,	// (0x00072c93) mup3_rocker_pane

0x51cb,	// (0x000732de) mup3_control_keys_pane_g1

0x51d3,	// (0x000732e6) mup3_control_keys_pane_g2

0x51db,	// (0x000732ee) mup3_control_keys_pane_g3

0x51e3,	// (0x000732f6) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0007d925) mup3_control_keys_pane_g

0xfe59,	// (0x0006df6c) popup_toolbar2_fixed_window_cp01_ParamLimits

0xfe59,	// (0x0006df6c) popup_toolbar2_fixed_window_cp01

0x4bb6,	// (0x00072cc9) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4bb6,	// (0x00072cc9) popup_toolbar2_fixed_window_cp02

0xbb5d,	// (0x00079c70) popup_call2_audio_second_window_t4_ParamLimits

0xbb5d,	// (0x00079c70) popup_call2_audio_second_window_t4

0xc0c0,	// (0x0007a1d3) popup_call2_audio_first_window_t6_ParamLimits

0xc0c0,	// (0x0007a1d3) popup_call2_audio_first_window_t6

0xc356,	// (0x0007a469) popup_call2_audio_out_window_t6_ParamLimits

0xc356,	// (0x0007a469) popup_call2_audio_out_window_t6

0x956e,	// (0x00077681) main_vitu_pane

0x51f3,	// (0x00073306) aid_size_cell_itu_ParamLimits

0x51f3,	// (0x00073306) aid_size_cell_itu

0x95c7,	// (0x000776da) bg_popup_window_pane_cp08_ParamLimits

0x95c7,	// (0x000776da) bg_popup_window_pane_cp08

0x5209,	// (0x0007331c) field_vitu_entry_pane_ParamLimits

0x5209,	// (0x0007331c) field_vitu_entry_pane

0x5220,	// (0x00073333) grid_vitu_function_pane_ParamLimits

0x5220,	// (0x00073333) grid_vitu_function_pane

0x523b,	// (0x0007334e) grid_vitu_itu_pane_ParamLimits

0x523b,	// (0x0007334e) grid_vitu_itu_pane

0x5259,	// (0x0007336c) cell_vitu_itu_pane_ParamLimits

0x5259,	// (0x0007336c) cell_vitu_itu_pane

0x527f,	// (0x00073392) cell_vitu_function_pane_ParamLimits

0x527f,	// (0x00073392) cell_vitu_function_pane

0x95c7,	// (0x000776da) bg_popup_sub_pane_cp08_ParamLimits

0x95c7,	// (0x000776da) bg_popup_sub_pane_cp08

0x529a,	// (0x000733ad) field_vitu_entry_pane_t1_ParamLimits

0x529a,	// (0x000733ad) field_vitu_entry_pane_t1

0xd253,	// (0x0007b366) field_vitu_entry_pane_t2_ParamLimits

0xd253,	// (0x0007b366) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0007d933) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0007d933) field_vitu_entry_pane_t

0xd270,	// (0x0007b383) bg_button_pane_cp05_ParamLimits

0xd270,	// (0x0007b383) bg_button_pane_cp05

0x52ba,	// (0x000733cd) cell_vitu_itu_pane_g1

0x52d2,	// (0x000733e5) cell_vitu_itu_pane_t1_ParamLimits

0x52d2,	// (0x000733e5) cell_vitu_itu_pane_t1

0x52e4,	// (0x000733f7) cell_vitu_itu_pane_t2_ParamLimits

0x52e4,	// (0x000733f7) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0007d938) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0007d938) cell_vitu_itu_pane_t

0xd27e,	// (0x0007b391) bg_button_pane_cp07

0x5319,	// (0x0007342c) cell_vitu_function_pane_g1

0x9cca,	// (0x00077ddd) main_calc_pane_g1

0xfc6d,	// (0x0006dd80) aid_visual_content_pane

0x956e,	// (0x00077681) main_vradio_pane

0x5322,	// (0x00073435) main_vradio_pane_g1_ParamLimits

0x5322,	// (0x00073435) main_vradio_pane_g1

0xd288,	// (0x0007b39b) main_vradio_pane_g2_ParamLimits

0xd288,	// (0x0007b39b) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0007d93f) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0007d93f) main_vradio_pane_g

0x5339,	// (0x0007344c) main_vradio_pane_t1_ParamLimits

0x5339,	// (0x0007344c) main_vradio_pane_t1

0x534e,	// (0x00073461) main_vradio_pane_t2_ParamLimits

0x534e,	// (0x00073461) main_vradio_pane_t2

0xd295,	// (0x0007b3a8) main_vradio_pane_t3_ParamLimits

0xd295,	// (0x0007b3a8) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0007d944) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0007d944) main_vradio_pane_t

0x5363,	// (0x00073476) vradio_rocker_control_pane_ParamLimits

0x5363,	// (0x00073476) vradio_rocker_control_pane

0x5375,	// (0x00073488) vradio_station_info_pane_ParamLimits

0x5375,	// (0x00073488) vradio_station_info_pane

0xd2a9,	// (0x0007b3bc) vradio_frequency_info_pane_ParamLimits

0xd2a9,	// (0x0007b3bc) vradio_frequency_info_pane

0xcc6b,	// (0x0007ad7e) vradio_station_info_pane_g1

0xd2b8,	// (0x0007b3cb) vradio_station_info_pane_t1_ParamLimits

0xd2b8,	// (0x0007b3cb) vradio_station_info_pane_t1

0xd2da,	// (0x0007b3ed) vradio_station_info_pane_t2_ParamLimits

0xd2da,	// (0x0007b3ed) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0007d94b) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0007d94b) vradio_station_info_pane_t

0xd2ec,	// (0x0007b3ff) vradio_tuning_pane

0xd2f4,	// (0x0007b407) vradio_rocker_control_pane_g1

0xd2fc,	// (0x0007b40f) vradio_rocker_control_pane_g2

0xd304,	// (0x0007b417) vradio_rocker_control_pane_g3

0xd30c,	// (0x0007b41f) vradio_rocker_control_pane_g4

0xd314,	// (0x0007b427) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0007d950) vradio_rocker_control_pane_g

0x5385,	// (0x00073498) vradio_frequency_info_pane_g1

0xd31c,	// (0x0007b42f) vradio_frequency_info_pane_t1_ParamLimits

0xd31c,	// (0x0007b42f) vradio_frequency_info_pane_t1

0x538f,	// (0x000734a2) vradio_tuning_pane_g1

0x539a,	// (0x000734ad) vradio_tuning_pane_t1

0x9594,	// (0x000776a7) area_side_right_pane_ParamLimits

0x9594,	// (0x000776a7) area_side_right_pane

0xc7d5,	// (0x0007a8e8) status_small_pane_g1

0xc7dd,	// (0x0007a8f0) status_small_pane_g2

0xc7e6,	// (0x0007a8f9) status_small_pane_g3

0xc7ef,	// (0x0007a902) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0007d70b) status_small_pane_g

0xc7f8,	// (0x0007a90b) status_small_pane_t1

0x956e,	// (0x00077681) main_video3_pane

0xd330,	// (0x0007b443) cams_zoom_vslider_pane

0xd338,	// (0x0007b44b) image3_wide_pane_ParamLimits

0xd338,	// (0x0007b44b) image3_wide_pane

0xd352,	// (0x0007b465) image3_wide_small_pane

0xd35e,	// (0x0007b471) main_video3_pane_g1_ParamLimits

0xd35e,	// (0x0007b471) main_video3_pane_g1

0xd37a,	// (0x0007b48d) main_video3_pane_g2_ParamLimits

0xd37a,	// (0x0007b48d) main_video3_pane_g2

0x0001,

0xf848,	// (0x0007d95b) main_video3_pane_g_ParamLimits

0xf848,	// (0x0007d95b) main_video3_pane_g

0xd396,	// (0x0007b4a9) main_video3_pane_t1_ParamLimits

0xd396,	// (0x0007b4a9) main_video3_pane_t1

0xd3c1,	// (0x0007b4d4) main_video3_pane_t2_ParamLimits

0xd3c1,	// (0x0007b4d4) main_video3_pane_t2

0xd3ee,	// (0x0007b501) main_video3_pane_t3_ParamLimits

0xd3ee,	// (0x0007b501) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0007d960) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0007d960) main_video3_pane_t

0xd41b,	// (0x0007b52e) cams_zoom_vslider_pane_g1

0xd424,	// (0x0007b537) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0007d967) cams_zoom_vslider_pane_g

0xd42c,	// (0x0007b53f) small_slider_vertical_pane

0xcc6b,	// (0x0007ad7e) small_slider_vertical_pane_g1

0xcc6b,	// (0x0007ad7e) small_slider_vertical_pane_g2

0xd434,	// (0x0007b547) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0007d96c) small_slider_vertical_pane_g

0x956e,	// (0x00077681) main_hwr_training_pane

0xd43d,	// (0x0007b550) hwr_training_instruct_pane_ParamLimits

0xd43d,	// (0x0007b550) hwr_training_instruct_pane

0x53a9,	// (0x000734bc) hwr_training_navi_pane_ParamLimits

0x53a9,	// (0x000734bc) hwr_training_navi_pane

0x53c8,	// (0x000734db) hwr_training_write_pane_ParamLimits

0x53c8,	// (0x000734db) hwr_training_write_pane

0x956e,	// (0x00077681) bg_frame_shadow_pane

0xd474,	// (0x0007b587) hwr_training_write_pane_g1

0xd47c,	// (0x0007b58f) hwr_training_write_pane_g2

0xd484,	// (0x0007b597) hwr_training_write_pane_g3

0xd48c,	// (0x0007b59f) hwr_training_write_pane_g4

0xd494,	// (0x0007b5a7) hwr_training_write_pane_g5

0xd49c,	// (0x0007b5af) hwr_training_write_pane_g6

0xd4a4,	// (0x0007b5b7) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0007d973) hwr_training_write_pane_g

0x9fcd,	// (0x000780e0) hwr_training_navi_pane_g1_ParamLimits

0x9fcd,	// (0x000780e0) hwr_training_navi_pane_g1

0x9fdf,	// (0x000780f2) hwr_training_navi_pane_g2_ParamLimits

0x9fdf,	// (0x000780f2) hwr_training_navi_pane_g2

0x9ff1,	// (0x00078104) hwr_training_navi_pane_g3_ParamLimits

0x9ff1,	// (0x00078104) hwr_training_navi_pane_g3

0xa001,	// (0x00078114) hwr_training_navi_pane_g4_ParamLimits

0xa001,	// (0x00078114) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0007d982) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0007d982) hwr_training_navi_pane_g

0xa00e,	// (0x00078121) hwr_training_navi_pane_t1

0x5410,	// (0x00073523) list_single_hwr_training_instruct_pane_ParamLimits

0x5410,	// (0x00073523) list_single_hwr_training_instruct_pane

0xd4ac,	// (0x0007b5bf) list_single_hwr_training_instruct_pane_t1

0xcbab,	// (0x0007acbe) bg_frame_shadow_pane_g1

0xd4bb,	// (0x0007b5ce) bg_frame_shadow_pane_g2

0xd4c3,	// (0x0007b5d6) bg_frame_shadow_pane_g3

0xd4cb,	// (0x0007b5de) bg_frame_shadow_pane_g4

0xd4d3,	// (0x0007b5e6) bg_frame_shadow_pane_g5

0xd4db,	// (0x0007b5ee) bg_frame_shadow_pane_g6

0xd4e3,	// (0x0007b5f6) bg_frame_shadow_pane_g7

0xa977,	// (0x00078a8a) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0007d98d) bg_frame_shadow_pane_g

0x956e,	// (0x00077681) main_video_tele_dialer_pane

0x5425,	// (0x00073538) aid_size_cell_video_keypad_ParamLimits

0x5425,	// (0x00073538) aid_size_cell_video_keypad

0x543f,	// (0x00073552) grid_video_dialer_keypad_pane_ParamLimits

0x543f,	// (0x00073552) grid_video_dialer_keypad_pane

0x548b,	// (0x0007359e) video_down_pane_cp_ParamLimits

0x548b,	// (0x0007359e) video_down_pane_cp

0x54bb,	// (0x000735ce) cell_video_dialer_keypad_pane_ParamLimits

0x54bb,	// (0x000735ce) cell_video_dialer_keypad_pane

0xd4eb,	// (0x0007b5fe) bg_button_pane_cp08_ParamLimits

0xd4eb,	// (0x0007b5fe) bg_button_pane_cp08

0x54df,	// (0x000735f2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x54df,	// (0x000735f2) cell_video_dialer_keypad_pane_g1

0x4b6a,	// (0x00072c7d) mup3_rocker2_pane_ParamLimits

0x4b6a,	// (0x00072c7d) mup3_rocker2_pane

0xcc6b,	// (0x0007ad7e) mup3_rocker2_pane_g1

0x35f7,	// (0x0007170a) main_dialer2_pane

0x956e,	// (0x00077681) main_mp4_pane

0xa024,	// (0x00078137) main_mp4_pane_g1_ParamLimits

0xa024,	// (0x00078137) main_mp4_pane_g1

0xa024,	// (0x00078137) main_mp4_pane_g2_ParamLimits

0xa024,	// (0x00078137) main_mp4_pane_g2

0x551a,	// (0x0007362d) main_mp4_pane_g3_ParamLimits

0x551a,	// (0x0007362d) main_mp4_pane_g3

0xa032,	// (0x00078145) main_mp4_pane_g4_ParamLimits

0xa032,	// (0x00078145) main_mp4_pane_g4

0xa05a,	// (0x0007816d) main_mp4_pane_g5_ParamLimits

0xa05a,	// (0x0007816d) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0007d9ad) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0007d9ad) main_mp4_pane_g

0xa0aa,	// (0x000781bd) main_mp4_pane_t1_ParamLimits

0xa0aa,	// (0x000781bd) main_mp4_pane_t1

0xa106,	// (0x00078219) main_mp4_pane_t2_ParamLimits

0xa106,	// (0x00078219) main_mp4_pane_t2

0xd4f7,	// (0x0007b60a) main_mp4_pane_t3_ParamLimits

0xd4f7,	// (0x0007b60a) main_mp4_pane_t3

0xa158,	// (0x0007826b) main_mp4_pane_t4_ParamLimits

0xa158,	// (0x0007826b) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0007d9ba) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0007d9ba) main_mp4_pane_t

0xa198,	// (0x000782ab) mp4_progress_pane_ParamLimits

0xa198,	// (0x000782ab) mp4_progress_pane

0xa1e2,	// (0x000782f5) mp4_rocker_pane_ParamLimits

0xa1e2,	// (0x000782f5) mp4_rocker_pane

0xd51f,	// (0x0007b632) mp4_progress_pane_t1

0xd538,	// (0x0007b64b) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0007d9c3) mp4_progress_pane_t

0xd551,	// (0x0007b664) mup_progress_pane_cp04

0xd55d,	// (0x0007b670) mp4_rocker_pane_g1

0x5564,	// (0x00073677) aid_cell_size_keypad2_ParamLimits

0x5564,	// (0x00073677) aid_cell_size_keypad2

0x557a,	// (0x0007368d) dialer2_ne_pane_ParamLimits

0x557a,	// (0x0007368d) dialer2_ne_pane

0x5592,	// (0x000736a5) grid_dialer2_keypad_pane_ParamLimits

0x5592,	// (0x000736a5) grid_dialer2_keypad_pane

0xca4a,	// (0x0007ab5d) bg_popup_call_pane_cp07_ParamLimits

0xca4a,	// (0x0007ab5d) bg_popup_call_pane_cp07

0x55ae,	// (0x000736c1) dialer2_ne_pane_t1_ParamLimits

0x55ae,	// (0x000736c1) dialer2_ne_pane_t1

0x55e9,	// (0x000736fc) cell_dialer2_keypad_pane_ParamLimits

0x55e9,	// (0x000736fc) cell_dialer2_keypad_pane

0xd579,	// (0x0007b68c) bg_button_pane_pane_cp04_ParamLimits

0xd579,	// (0x0007b68c) bg_button_pane_pane_cp04

0x560d,	// (0x00073720) cell_dialer2_keypad_pane_g1_ParamLimits

0x560d,	// (0x00073720) cell_dialer2_keypad_pane_g1

0x104b,	// (0x0006f15e) aid_placing_vt_set_content_ParamLimits

0x104b,	// (0x0006f15e) aid_placing_vt_set_content

0x106f,	// (0x0006f182) aid_placing_vt_set_title_ParamLimits

0x106f,	// (0x0006f182) aid_placing_vt_set_title

0x956e,	// (0x00077681) main_image3_pane

0x56d3,	// (0x000737e6) area_side_right_pane_cp01_ParamLimits

0x56d3,	// (0x000737e6) area_side_right_pane_cp01

0xa024,	// (0x00078137) main_image3_pane_g1_ParamLimits

0xa024,	// (0x00078137) main_image3_pane_g1

0x56ec,	// (0x000737ff) main_image3_pane_g2_ParamLimits

0x56ec,	// (0x000737ff) main_image3_pane_g2

0x5714,	// (0x00073827) main_image3_pane_g3_ParamLimits

0x5714,	// (0x00073827) main_image3_pane_g3

0x573e,	// (0x00073851) main_image3_pane_g4_ParamLimits

0x573e,	// (0x00073851) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0007d9d2) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0007d9d2) main_image3_pane_g

0x5768,	// (0x0007387b) main_image3_pane_t1_ParamLimits

0x5768,	// (0x0007387b) main_image3_pane_t1

0x57c0,	// (0x000738d3) main_image3_pane_t2_ParamLimits

0x57c0,	// (0x000738d3) main_image3_pane_t2

0x5812,	// (0x00073925) main_image3_pane_t3_ParamLimits

0x5812,	// (0x00073925) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0007d9db) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0007d9db) main_image3_pane_t

0x95c7,	// (0x000776da) grid_sctrl_middle_pane_cp01_ParamLimits

0x95c7,	// (0x000776da) grid_sctrl_middle_pane_cp01

0x589a,	// (0x000739ad) cell_sctrl_middle_pane_cp01_ParamLimits

0x589a,	// (0x000739ad) cell_sctrl_middle_pane_cp01

0x58b7,	// (0x000739ca) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x58b7,	// (0x000739ca) cell_sctrl_middle_pane_cp01_g1

0x956e,	// (0x00077681) main_call4_pane

0x58cc,	// (0x000739df) aid_size_button_call4_ParamLimits

0x58cc,	// (0x000739df) aid_size_button_call4

0x58ff,	// (0x00073a12) call4_windows_pane_ParamLimits

0x58ff,	// (0x00073a12) call4_windows_pane

0x5921,	// (0x00073a34) grid_call4_button_pane_ParamLimits

0x5921,	// (0x00073a34) grid_call4_button_pane

0xd585,	// (0x0007b698) call4_windows_conf_pane

0x594c,	// (0x00073a5f) popup_call4_audio_first_window_ParamLimits

0x594c,	// (0x00073a5f) popup_call4_audio_first_window

0x5978,	// (0x00073a8b) popup_call4_audio_second_window_ParamLimits

0x5978,	// (0x00073a8b) popup_call4_audio_second_window

0xd5c2,	// (0x0007b6d5) popup_call4_audio_wait_window_ParamLimits

0xd5c2,	// (0x0007b6d5) popup_call4_audio_wait_window

0x598e,	// (0x00073aa1) cell_call4_button_pane_ParamLimits

0x598e,	// (0x00073aa1) cell_call4_button_pane

0x59b5,	// (0x00073ac8) bg_button_pane_cp09_ParamLimits

0x59b5,	// (0x00073ac8) bg_button_pane_cp09

0x59c1,	// (0x00073ad4) cell_call4_button_pane_g1_ParamLimits

0x59c1,	// (0x00073ad4) cell_call4_button_pane_g1

0x59e7,	// (0x00073afa) cell_call4_button_pane_t1_ParamLimits

0x59e7,	// (0x00073afa) cell_call4_button_pane_t1

0xd60a,	// (0x0007b71d) popup_call4_audio_conf_window_ParamLimits

0xd60a,	// (0x0007b71d) popup_call4_audio_conf_window

0x4bcc,	// (0x00072cdf) mup3_progress_pane_t1_ParamLimits

0x4bea,	// (0x00072cfd) mup3_progress_pane_t2_ParamLimits

0xcf16,	// (0x0007b029) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0007d8af) mup3_progress_pane_t_ParamLimits

0xcf33,	// (0x0007b046) mup_progress_pane_cp03_ParamLimits

0x51eb,	// (0x000732fe) mup3_control_keys_pane_g4_copy1

0xa1c6,	// (0x000782d9) mp4_rocker2_pane_ParamLimits

0xa1c6,	// (0x000782d9) mp4_rocker2_pane

0xd624,	// (0x0007b737) mp4_rocker2_pane_g1

0xd62c,	// (0x0007b73f) mp4_rocker2_pane_g2

0xa238,	// (0x0007834b) mp4_rocker2_pane_g3

0xa240,	// (0x00078353) mp4_rocker2_pane_g4

0xa248,	// (0x0007835b) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0007d9e4) mp4_rocker2_pane_g

0x956e,	// (0x00077681) main_camera4_pane

0x956e,	// (0x00077681) main_video4_pane

0x5459,	// (0x0007356c) main_video_tele_dialer_pane_t1_ParamLimits

0x5459,	// (0x0007356c) main_video_tele_dialer_pane_t1

0x5472,	// (0x00073585) main_video_tele_dialer_pane_t2_ParamLimits

0x5472,	// (0x00073585) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0007d99e) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0007d99e) main_video_tele_dialer_pane_t

0x5a25,	// (0x00073b38) cam4_autofocus_pane_ParamLimits

0x5a25,	// (0x00073b38) cam4_autofocus_pane

0x5a3b,	// (0x00073b4e) cam4_image_uncrop_pane_ParamLimits

0x5a3b,	// (0x00073b4e) cam4_image_uncrop_pane

0x5a54,	// (0x00073b67) cam4_indicators_pane_ParamLimits

0x5a54,	// (0x00073b67) cam4_indicators_pane

0x5a83,	// (0x00073b96) main_camera4_pane_g1_ParamLimits

0x5a83,	// (0x00073b96) main_camera4_pane_g1

0x5a95,	// (0x00073ba8) main_camera4_pane_g2_ParamLimits

0x5a95,	// (0x00073ba8) main_camera4_pane_g2

0x5aa8,	// (0x00073bbb) main_camera4_pane_g3_ParamLimits

0x5aa8,	// (0x00073bbb) main_camera4_pane_g3

0x5abb,	// (0x00073bce) main_camera4_pane_g4_ParamLimits

0x5abb,	// (0x00073bce) main_camera4_pane_g4

0x5ace,	// (0x00073be1) main_camera4_pane_g5_ParamLimits

0x5ace,	// (0x00073be1) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0007d9ef) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0007d9ef) main_camera4_pane_g

0x5af2,	// (0x00073c05) main_camera4_pane_t1_ParamLimits

0x5af2,	// (0x00073c05) main_camera4_pane_t1

0xa26e,	// (0x00078381) bg_tb_trans_pane_cp06

0xa284,	// (0x00078397) cam4_indicators_pane_g1

0xa295,	// (0x000783a8) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0007da0a) cam4_indicators_pane_g

0xa2ad,	// (0x000783c0) cam4_indicators_pane_t1

0x5b56,	// (0x00073c69) main_video4_pane_g1_ParamLimits

0x5b56,	// (0x00073c69) main_video4_pane_g1

0x5b65,	// (0x00073c78) main_video4_pane_g2_ParamLimits

0x5b65,	// (0x00073c78) main_video4_pane_g2

0x5b74,	// (0x00073c87) main_video4_pane_g3_ParamLimits

0x5b74,	// (0x00073c87) main_video4_pane_g3

0x5b83,	// (0x00073c96) main_video4_pane_g4_ParamLimits

0x5b83,	// (0x00073c96) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0007da11) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0007da11) main_video4_pane_g

0x5ba1,	// (0x00073cb4) vid4_indicators_pane_ParamLimits

0x5ba1,	// (0x00073cb4) vid4_indicators_pane

0x5bcf,	// (0x00073ce2) video4_image_uncrop_cif_pane_ParamLimits

0x5bcf,	// (0x00073ce2) video4_image_uncrop_cif_pane

0x5be9,	// (0x00073cfc) video4_image_uncrop_nhd_pane_ParamLimits

0x5be9,	// (0x00073cfc) video4_image_uncrop_nhd_pane

0x5a3b,	// (0x00073b4e) video4_image_uncrop_vga_pane_ParamLimits

0x5a3b,	// (0x00073b4e) video4_image_uncrop_vga_pane

0xa2d1,	// (0x000783e4) bg_tb_trans_pane_cp07

0xa2e9,	// (0x000783fc) vid4_indicators_pane_g1

0xa2ff,	// (0x00078412) vid4_indicators_pane_g2

0xa313,	// (0x00078426) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0007da1c) vid4_indicators_pane_g

0xa344,	// (0x00078457) vid4_indicators_pane_t1

0x5bff,	// (0x00073d12) cam4_autofocus_pane_g1

0x5c07,	// (0x00073d1a) cam4_autofocus_pane_g2

0x5c0f,	// (0x00073d22) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0007da27) cam4_autofocus_pane_g

0x5c17,	// (0x00073d2a) cam4_autofocus_pane_g3_copy1

0x549f,	// (0x000735b2) video_down_pane_cp_t1

0x54ad,	// (0x000735c0) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0007d9a3) video_down_pane_cp_t

0x95c7,	// (0x000776da) popup_vitu2_window_ParamLimits

0x95c7,	// (0x000776da) popup_vitu2_window

0x5c1f,	// (0x00073d32) aid_size_cell2_itu2_ParamLimits

0x5c1f,	// (0x00073d32) aid_size_cell2_itu2

0x5c45,	// (0x00073d58) aid_size_cell_itu2_ParamLimits

0x5c45,	// (0x00073d58) aid_size_cell_itu2

0x5ca5,	// (0x00073db8) bg_popup_window_pane_cp09_ParamLimits

0x5ca5,	// (0x00073db8) bg_popup_window_pane_cp09

0x5cb3,	// (0x00073dc6) field_vitu2_entry_pane_ParamLimits

0x5cb3,	// (0x00073dc6) field_vitu2_entry_pane

0x5cdb,	// (0x00073dee) grid_vitu2_function_pane_ParamLimits

0x5cdb,	// (0x00073dee) grid_vitu2_function_pane

0x5d2c,	// (0x00073e3f) grid_vitu2_itu_pane_ParamLimits

0x5d2c,	// (0x00073e3f) grid_vitu2_itu_pane

0x5db7,	// (0x00073eca) cell_vitu2_itu_pane_ParamLimits

0x5db7,	// (0x00073eca) cell_vitu2_itu_pane

0x5ddd,	// (0x00073ef0) cell_vitu2_function_pane_ParamLimits

0x5ddd,	// (0x00073ef0) cell_vitu2_function_pane

0xd634,	// (0x0007b747) bg_popup_call_pane_cp08_ParamLimits

0xd634,	// (0x0007b747) bg_popup_call_pane_cp08

0xd64b,	// (0x0007b75e) field_vitu2_entry_pane_g1

0xd657,	// (0x0007b76a) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0007da2e) field_vitu2_entry_pane_g

0x5e21,	// (0x00073f34) field_vitu2_entry_pane_t1_ParamLimits

0x5e21,	// (0x00073f34) field_vitu2_entry_pane_t1

0xa35b,	// (0x0007846e) field_vitu2_entry_pane_t2_ParamLimits

0xa35b,	// (0x0007846e) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0007da35) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0007da35) field_vitu2_entry_pane_t

0x5e4d,	// (0x00073f60) bg_button_pane_cp010_ParamLimits

0x5e4d,	// (0x00073f60) bg_button_pane_cp010

0x5e5b,	// (0x00073f6e) cell_vitu2_itu_pane_g1

0x5e86,	// (0x00073f99) cell_vitu2_itu_pane_t1_ParamLimits

0x5e86,	// (0x00073f99) cell_vitu2_itu_pane_t1

0xfb55,	// (0x0006dc68) cell_vitu2_itu_pane_t2_ParamLimits

0xfb55,	// (0x0006dc68) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0007da3f) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0007da3f) cell_vitu2_itu_pane_t

0xa2d1,	// (0x000783e4) bg_button_pane_cp011

0x5ee4,	// (0x00073ff7) cell_vitu2_function_pane_g1

0x956e,	// (0x00077681) main_myfav_hc_pane

0x5862,	// (0x00073975) popup_image3_note_pane_ParamLimits

0x5862,	// (0x00073975) popup_image3_note_pane

0x587e,	// (0x00073991) popup_image3_tool_bar_pane_ParamLimits

0x587e,	// (0x00073991) popup_image3_tool_bar_pane

0xfbd9,	// (0x0006dcec) cell_vitu2_itu_pane_t3_ParamLimits

0xfbd9,	// (0x0006dcec) cell_vitu2_itu_pane_t3

0x956e,	// (0x00077681) bg_popup_trans_pane

0xd679,	// (0x0007b78c) grid_image3_tool_bar_pane

0xd683,	// (0x0007b796) bg_popup_trans_pane_g1

0xacd5,	// (0x00078de8) bg_popup_trans_pane_g2

0xd68b,	// (0x0007b79e) bg_popup_trans_pane_g3

0xd693,	// (0x0007b7a6) bg_popup_trans_pane_g4

0xd69b,	// (0x0007b7ae) bg_popup_trans_pane_g5

0xd6a3,	// (0x0007b7b6) bg_popup_trans_pane_g6

0xd6ab,	// (0x0007b7be) bg_popup_trans_pane_g7

0xd6b3,	// (0x0007b7c6) bg_popup_trans_pane_g8

0xacb5,	// (0x00078dc8) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0007da46) bg_popup_trans_pane_g

0xd6bb,	// (0x0007b7ce) cell_image3_tool_bar_pane_ParamLimits

0xd6bb,	// (0x0007b7ce) cell_image3_tool_bar_pane

0xcc6b,	// (0x0007ad7e) cell_image3_tool_bar_pane_g1

0x956e,	// (0x00077681) bg_popup_trans_pane_cp1

0xd6d1,	// (0x0007b7e4) popup_image3_note_pane_t1

0xd6df,	// (0x0007b7f2) popup_image3_note_pane_t2

0xd6ed,	// (0x0007b800) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0007da59) popup_image3_note_pane_t

0xd6fd,	// (0x0007b810) popup_image3_note_pane_t3_copy1

0x5ef8,	// (0x0007400b) bg_myfav_hc_instruction_pane_ParamLimits

0x5ef8,	// (0x0007400b) bg_myfav_hc_instruction_pane

0x5f10,	// (0x00074023) cell_myfav_contact_pane_ParamLimits

0x5f10,	// (0x00074023) cell_myfav_contact_pane

0x5f2c,	// (0x0007403f) cell_myfav_contact_pane_cp1_ParamLimits

0x5f2c,	// (0x0007403f) cell_myfav_contact_pane_cp1

0x5f44,	// (0x00074057) cell_myfav_contact_pane_cp2_ParamLimits

0x5f44,	// (0x00074057) cell_myfav_contact_pane_cp2

0x5f5c,	// (0x0007406f) cell_myfav_contact_pane_cp3_ParamLimits

0x5f5c,	// (0x0007406f) cell_myfav_contact_pane_cp3

0x5f73,	// (0x00074086) cell_myfav_contact_pane_cp4_ParamLimits

0x5f73,	// (0x00074086) cell_myfav_contact_pane_cp4

0x5f8b,	// (0x0007409e) cell_myfav_contact_pane_cp5_ParamLimits

0x5f8b,	// (0x0007409e) cell_myfav_contact_pane_cp5

0x5f9f,	// (0x000740b2) cell_myfav_contact_pane_cp6_ParamLimits

0x5f9f,	// (0x000740b2) cell_myfav_contact_pane_cp6

0x5fb5,	// (0x000740c8) cell_myfav_contact_pane_cp7_ParamLimits

0x5fb5,	// (0x000740c8) cell_myfav_contact_pane_cp7

0xd70b,	// (0x0007b81e) listscroll_gen_pane_cp05

0x5fcd,	// (0x000740e0) main_myfav_hc_pane_g1_ParamLimits

0x5fcd,	// (0x000740e0) main_myfav_hc_pane_g1

0x5fe7,	// (0x000740fa) main_myfav_hc_pane_g2_ParamLimits

0x5fe7,	// (0x000740fa) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0007da60) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0007da60) main_myfav_hc_pane_g

0x601b,	// (0x0007412e) main_myfav_hc_pane_t1_ParamLimits

0x601b,	// (0x0007412e) main_myfav_hc_pane_t1

0xd714,	// (0x0007b827) main_myfav_hc_pane_t2_ParamLimits

0xd714,	// (0x0007b827) main_myfav_hc_pane_t2

0xd726,	// (0x0007b839) main_myfav_hc_pane_t3_ParamLimits

0xd726,	// (0x0007b839) main_myfav_hc_pane_t3

0x6032,	// (0x00074145) main_myfav_hc_pane_t4_ParamLimits

0x6032,	// (0x00074145) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0007da67) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0007da67) main_myfav_hc_pane_t

0xcc6b,	// (0x0007ad7e) bg_myfav_hc_instruction_pane_g1

0xd738,	// (0x0007b84b) cell_myfav_contact_pane_g1_ParamLimits

0xd738,	// (0x0007b84b) cell_myfav_contact_pane_g1

0xd738,	// (0x0007b84b) cell_myfav_contact_pane_g2_ParamLimits

0xd738,	// (0x0007b84b) cell_myfav_contact_pane_g2

0xd744,	// (0x0007b857) cell_myfav_contact_pane_g3_ParamLimits

0xd744,	// (0x0007b857) cell_myfav_contact_pane_g3

0xcf00,	// (0x0007b013) cell_myfav_contact_pane_g4_ParamLimits

0xcf00,	// (0x0007b013) cell_myfav_contact_pane_g4

0xd751,	// (0x0007b864) cell_myfav_contact_pane_g5_ParamLimits

0xd751,	// (0x0007b864) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0007da72) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0007da72) cell_myfav_contact_pane_g

0x6001,	// (0x00074114) main_myfav_hc_pane_g3_ParamLimits

0x6001,	// (0x00074114) main_myfav_hc_pane_g3

0xfdba,	// (0x0006decd) popup_adpt_find_window

0x605c,	// (0x0007416f) afind_page_pane_ParamLimits

0x605c,	// (0x0007416f) afind_page_pane

0x6071,	// (0x00074184) aid_size_cell_afind_ParamLimits

0x6071,	// (0x00074184) aid_size_cell_afind

0x608f,	// (0x000741a2) bg_popup_sub_pane_cp09_ParamLimits

0x608f,	// (0x000741a2) bg_popup_sub_pane_cp09

0x609c,	// (0x000741af) find_pane_cp01_ParamLimits

0x609c,	// (0x000741af) find_pane_cp01

0xd75d,	// (0x0007b870) grid_afind_control_pane_ParamLimits

0xd75d,	// (0x0007b870) grid_afind_control_pane

0x60a9,	// (0x000741bc) grid_afind_pane_ParamLimits

0x60a9,	// (0x000741bc) grid_afind_pane

0x60cb,	// (0x000741de) cell_afind_pane_ParamLimits

0x60cb,	// (0x000741de) cell_afind_pane

0xcc6b,	// (0x0007ad7e) afind_page_pane_g1

0x6132,	// (0x00074245) afind_page_pane_g2

0x613b,	// (0x0007424e) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0007da7d) afind_page_pane_g

0x6144,	// (0x00074257) afind_page_pane_t1

0xd771,	// (0x0007b884) cell_afind_grid_control_pane_ParamLimits

0xd771,	// (0x0007b884) cell_afind_grid_control_pane

0xd579,	// (0x0007b68c) bg_button_pane_cp69_ParamLimits

0xd579,	// (0x0007b68c) bg_button_pane_cp69

0x6164,	// (0x00074277) cell_afind_pane_g1_ParamLimits

0x6164,	// (0x00074277) cell_afind_pane_g1

0x6171,	// (0x00074284) cell_afind_pane_t1_ParamLimits

0x6171,	// (0x00074284) cell_afind_pane_t1

0xaaca,	// (0x00078bdd) bg_button_pane_cp72

0xd780,	// (0x0007b893) cell_afind_grid_control_pane_g1

0x309a,	// (0x000711ad) aid_image_placing_area_ParamLimits

0x309a,	// (0x000711ad) aid_image_placing_area

0xd23b,	// (0x0007b34e) field_vitu_entry_pane_g1_ParamLimits

0xd23b,	// (0x0007b34e) field_vitu_entry_pane_g1

0xd247,	// (0x0007b35a) field_vitu_entry_pane_g2_ParamLimits

0xd247,	// (0x0007b35a) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0007d92e) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0007d92e) field_vitu_entry_pane_g

0x52ba,	// (0x000733cd) cell_vitu_itu_pane_g1_ParamLimits

0x52fc,	// (0x0007340f) cell_vitu_itu_pane_t3_ParamLimits

0x52fc,	// (0x0007340f) cell_vitu_itu_pane_t3

0xd51f,	// (0x0007b632) mp4_progress_pane_t1_ParamLimits

0xd538,	// (0x0007b64b) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0007d9c3) mp4_progress_pane_t_ParamLimits

0xd551,	// (0x0007b664) mup_progress_pane_cp04_ParamLimits

0x6046,	// (0x00074159) main_myfav_hc_pane_t5_ParamLimits

0x6046,	// (0x00074159) main_myfav_hc_pane_t5

0x958c,	// (0x0007769f) aid_zoom_text_primary

0xfdba,	// (0x0006decd) popup_adpt_find_window_ParamLimits

0x95c7,	// (0x000776da) main_cam_set_pane

0x5a6d,	// (0x00073b80) cam4_zoom_pane_ParamLimits

0x5a6d,	// (0x00073b80) cam4_zoom_pane

0x6183,	// (0x00074296) main_cam_set_pane_g1_ParamLimits

0x6183,	// (0x00074296) main_cam_set_pane_g1

0x6191,	// (0x000742a4) main_cam_set_pane_g2_ParamLimits

0x6191,	// (0x000742a4) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0007da84) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0007da84) main_cam_set_pane_g

0x61b2,	// (0x000742c5) main_cam_set_pane_t1_ParamLimits

0x61b2,	// (0x000742c5) main_cam_set_pane_t1

0x61cd,	// (0x000742e0) main_cset_listscroll_pane_ParamLimits

0x61cd,	// (0x000742e0) main_cset_listscroll_pane

0x61f1,	// (0x00074304) main_cset_slider_pane_ParamLimits

0x61f1,	// (0x00074304) main_cset_slider_pane

0xd791,	// (0x0007b8a4) main_cset_list_pane_ParamLimits

0xd791,	// (0x0007b8a4) main_cset_list_pane

0xd7a1,	// (0x0007b8b4) scroll_pane_cp028

0x621b,	// (0x0007432e) aid_area_touch_slider

0x6237,	// (0x0007434a) cset_slider_pane

0x6261,	// (0x00074374) main_cset_slider_pane_g1

0x6276,	// (0x00074389) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0007da89) main_cset_slider_pane_g

0xd7da,	// (0x0007b8ed) main_cset_slider_pane_t1

0x6338,	// (0x0007444b) main_cset_slider_pane_t2

0x6352,	// (0x00074465) main_cset_slider_pane_t3

0x636c,	// (0x0007447f) main_cset_slider_pane_t4

0x6386,	// (0x00074499) main_cset_slider_pane_t5

0x63a4,	// (0x000744b7) main_cset_slider_pane_t6

0x63b9,	// (0x000744cc) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0007daae) main_cset_slider_pane_t

0x64c5,	// (0x000745d8) cset_list_set_pane_ParamLimits

0x64c5,	// (0x000745d8) cset_list_set_pane

0x64d9,	// (0x000745ec) aid_position_infowindow_above

0x64e1,	// (0x000745f4) aid_position_infowindow_below

0x64e9,	// (0x000745fc) cset_list_set_pane_g1_ParamLimits

0x64e9,	// (0x000745fc) cset_list_set_pane_g1

0x64f5,	// (0x00074608) cset_list_set_pane_g3_ParamLimits

0x64f5,	// (0x00074608) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0007dacd) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0007dacd) cset_list_set_pane_g

0x6504,	// (0x00074617) cset_list_set_pane_t1_ParamLimits

0x6504,	// (0x00074617) cset_list_set_pane_t1

0x95c7,	// (0x000776da) list_highlight_pane_cp021_ParamLimits

0x95c7,	// (0x000776da) list_highlight_pane_cp021

0xb4f4,	// (0x00079607) cset_slider_pane_g1

0xb506,	// (0x00079619) cset_slider_pane_g2

0xb4fd,	// (0x00079610) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0007dad2) cset_slider_pane_g

0xa378,	// (0x0007848b) aid_area_touch_cam4_zoom

0xa380,	// (0x00078493) cam4_zoom_cont_pane

0xa388,	// (0x0007849b) cam4_zoom_pane_g1

0xa390,	// (0x000784a3) cam4_zoom_pane_g2

0x6519,	// (0x0007462c) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0007dad9) cam4_zoom_pane_g

0xa398,	// (0x000784ab) cam4_zoom_cont_pane_g1

0xa3a1,	// (0x000784b4) cam4_zoom_cont_pane_g2

0xa3aa,	// (0x000784bd) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0007dae0) cam4_zoom_cont_pane_g

0x58ea,	// (0x000739fd) call4_image_pane_ParamLimits

0x58ea,	// (0x000739fd) call4_image_pane

0xd585,	// (0x0007b698) call4_windows_conf_pane_ParamLimits

0xd5a0,	// (0x0007b6b3) popup_call4_audio_in_window_ParamLimits

0xd5a0,	// (0x0007b6b3) popup_call4_audio_in_window

0x956e,	// (0x00077681) bg_popup_call2_act_pane_cp02

0xd602,	// (0x0007b715) call4_list_conf_pane

0xcc6b,	// (0x0007ad7e) call4_image_pane_g1

0xcc6b,	// (0x0007ad7e) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0007d7ef) call4_image_pane_g

0xd87a,	// (0x0007b98d) list_single_graphic_popup_conf4_pane_ParamLimits

0xd87a,	// (0x0007b98d) list_single_graphic_popup_conf4_pane

0x956e,	// (0x00077681) list_highlight_pane_cp022

0xd88f,	// (0x0007b9a2) list_single_graphic_popup_conf4_pane_g1

0xb1e0,	// (0x000792f3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0007dae7) list_single_graphic_popup_conf4_pane_g

0xd897,	// (0x0007b9aa) list_single_graphic_popup_conf4_pane_t1

0x1186,	// (0x0006f299) popup_vtel_slider_window_ParamLimits

0x1186,	// (0x0006f299) popup_vtel_slider_window

0xd567,	// (0x0007b67a) dialer2_ne_pane_t2_ParamLimits

0xd567,	// (0x0007b67a) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0007d9c8) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0007d9c8) dialer2_ne_pane_t

0xca4a,	// (0x0007ab5d) bg_popup_sub_pane_cp010_ParamLimits

0xca4a,	// (0x0007ab5d) bg_popup_sub_pane_cp010

0x6521,	// (0x00074634) popup_vtel_slider_window_g1_ParamLimits

0x6521,	// (0x00074634) popup_vtel_slider_window_g1

0x6534,	// (0x00074647) popup_vtel_slider_window_g2_ParamLimits

0x6534,	// (0x00074647) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0007daec) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0007daec) popup_vtel_slider_window_g

0x658a,	// (0x0007469d) vtel_slider_pane_ParamLimits

0x658a,	// (0x0007469d) vtel_slider_pane

0x65ac,	// (0x000746bf) vtel_slider_pane_g1_ParamLimits

0x65ac,	// (0x000746bf) vtel_slider_pane_g1

0x65c0,	// (0x000746d3) vtel_slider_pane_g2_ParamLimits

0x65c0,	// (0x000746d3) vtel_slider_pane_g2

0x65d8,	// (0x000746eb) vtel_slider_pane_g3_ParamLimits

0x65d8,	// (0x000746eb) vtel_slider_pane_g3

0x65ac,	// (0x000746bf) vtel_slider_pane_g4_ParamLimits

0x65ac,	// (0x000746bf) vtel_slider_pane_g4

0x65ee,	// (0x00074701) vtel_slider_pane_g5_ParamLimits

0x65ee,	// (0x00074701) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0007daf5) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0007daf5) vtel_slider_pane_g

0x95c7,	// (0x000776da) main_gallery2_pane

0x5c71,	// (0x00073d84) aid_size_row_itut2_dropdow_list_ParamLimits

0x5c71,	// (0x00073d84) aid_size_row_itut2_dropdow_list

0x5d03,	// (0x00073e16) grid_vitu2_function_top_pane_ParamLimits

0x5d03,	// (0x00073e16) grid_vitu2_function_top_pane

0x5d62,	// (0x00073e75) popup_vitu2_dropdown_list_window_ParamLimits

0x5d62,	// (0x00073e75) popup_vitu2_dropdown_list_window

0x5d8b,	// (0x00073e9e) popup_vitu2_match_list_window

0x6612,	// (0x00074725) cell_vitu2_function_top_pane_ParamLimits

0x6612,	// (0x00074725) cell_vitu2_function_top_pane

0x6632,	// (0x00074745) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6632,	// (0x00074745) cell_vitu2_function_top_pane_cp01

0x6650,	// (0x00074763) cell_vitu2_function_top_wide_pane_ParamLimits

0x6650,	// (0x00074763) cell_vitu2_function_top_wide_pane

0xa2d1,	// (0x000783e4) bg_button_pane_cp012

0x666e,	// (0x00074781) cell_vitu2_function_top_pane_g1

0xa3b3,	// (0x000784c6) bg_button_pane_cp013_ParamLimits

0xa3b3,	// (0x000784c6) bg_button_pane_cp013

0x6682,	// (0x00074795) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6682,	// (0x00074795) cell_vitu2_function_top_wide_pane_g1

0xa2d1,	// (0x000783e4) bg_popup_sub_pane_cp20

0x669a,	// (0x000747ad) list_vitu2_match_list_pane

0xd683,	// (0x0007b796) bg_popup_sub_pane_cp20_g1

0xd68b,	// (0x0007b79e) bg_popup_sub_pane_cp20_g2

0xacd5,	// (0x00078de8) bg_popup_sub_pane_cp20_g3

0xd693,	// (0x0007b7a6) bg_popup_sub_pane_cp20_g4

0xacb5,	// (0x00078dc8) bg_popup_sub_pane_cp20_g5

0xd8ad,	// (0x0007b9c0) bg_popup_sub_pane_cp20_g6

0xd6a3,	// (0x0007b7b6) bg_popup_sub_pane_cp20_g7

0xd6ab,	// (0x0007b7be) bg_popup_sub_pane_cp20_g8

0xd6b3,	// (0x0007b7c6) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0007db00) bg_popup_sub_pane_cp20_g

0xa3cf,	// (0x000784e2) list_vitu2_match_list_item_pane_ParamLimits

0xa3cf,	// (0x000784e2) list_vitu2_match_list_item_pane

0xa3e1,	// (0x000784f4) list_vitu2_match_list_item_pane_t1

0x9d10,	// (0x00077e23) bg_popup_sub_pane_cp21

0xa3ef,	// (0x00078502) grid_vitu2_dropdown_list_pane

0x6702,	// (0x00074815) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6702,	// (0x00074815) cell_vitu2_dropdown_list_char_pane

0x6725,	// (0x00074838) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6725,	// (0x00074838) cell_vitu2_dropdown_list_ctrl_pane

0xd8b5,	// (0x0007b9c8) cell_vitu2_dropdown_list_char_pane_g1

0xd8be,	// (0x0007b9d1) cell_vitu2_dropdown_list_char_pane_g2

0xd8c7,	// (0x0007b9da) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0007db1d) cell_vitu2_dropdown_list_char_pane_g

0x6753,	// (0x00074866) cell_vitu2_dropdown_list_char_pane_t1

0x6761,	// (0x00074874) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6761,	// (0x00074874) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6771,	// (0x00074884) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6771,	// (0x00074884) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6782,	// (0x00074895) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6782,	// (0x00074895) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6792,	// (0x000748a5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6792,	// (0x000748a5) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa26e,	// (0x00078381) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa26e,	// (0x00078381) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0007db24) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0007db24) cell_vitu2_dropdown_list_ctrl_pane_g

0x67ae,	// (0x000748c1) aid_size_cell_gallery2_ParamLimits

0x67ae,	// (0x000748c1) aid_size_cell_gallery2

0x67cc,	// (0x000748df) grid_gallery2_pane_ParamLimits

0x67cc,	// (0x000748df) grid_gallery2_pane

0x67e6,	// (0x000748f9) scroll_pane_cp029_ParamLimits

0x67e6,	// (0x000748f9) scroll_pane_cp029

0x67f2,	// (0x00074905) cell_gallery2_pane_ParamLimits

0x67f2,	// (0x00074905) cell_gallery2_pane

0xd8d0,	// (0x0007b9e3) cell_gallery2_pane_g2

0x6853,	// (0x00074966) cell_gallery2_pane_g3

0xd8d8,	// (0x0007b9eb) cell_gallery2_pane_g4

0xd8e0,	// (0x0007b9f3) cell_gallery2_pane_g5

0xb3ae,	// (0x000794c1) grid_highlight_pane_cp10

0x5d8b,	// (0x00073e9e) popup_vitu2_match_list_window_ParamLimits

0x5da2,	// (0x00073eb5) popup_vitu2_query_window_ParamLimits

0x5da2,	// (0x00073eb5) popup_vitu2_query_window

0x9d10,	// (0x00077e23) bg_vitu2_candi_button_pane

0xd8b5,	// (0x0007b9c8) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd8be,	// (0x0007b9d1) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8c7,	// (0x0007b9da) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x685b,	// (0x0007496e) bg_button_pane_cp015

0x686f,	// (0x00074982) bg_button_pane_cp016

0x6882,	// (0x00074995) bg_button_pane_cp017

0xc81a,	// (0x0007a92d) bg_popup_sub_pane_cp22

0xd8e8,	// (0x0007b9fb) popup_vitu2_query_window_g1

0x68c7,	// (0x000749da) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0007db2f) popup_vitu2_query_window_g

0x68e6,	// (0x000749f9) popup_vitu2_query_window_t1_ParamLimits

0x68e6,	// (0x000749f9) popup_vitu2_query_window_t1

0x691b,	// (0x00074a2e) popup_vitu2_query_window_t2_ParamLimits

0x691b,	// (0x00074a2e) popup_vitu2_query_window_t2

0x692d,	// (0x00074a40) popup_vitu2_query_window_t3_ParamLimits

0x692d,	// (0x00074a40) popup_vitu2_query_window_t3

0x6955,	// (0x00074a68) popup_vitu2_query_window_t4_ParamLimits

0x6955,	// (0x00074a68) popup_vitu2_query_window_t4

0x6976,	// (0x00074a89) popup_vitu2_query_window_t5_ParamLimits

0x6976,	// (0x00074a89) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0007db36) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0007db36) popup_vitu2_query_window_t

0xd789,	// (0x0007b89c) main_cset_text_pane

0x621b,	// (0x0007432e) aid_area_touch_slider_ParamLimits

0x6237,	// (0x0007434a) cset_slider_pane_ParamLimits

0x6261,	// (0x00074374) main_cset_slider_pane_g1_ParamLimits

0x6276,	// (0x00074389) main_cset_slider_pane_g2_ParamLimits

0xd7aa,	// (0x0007b8bd) main_cset_slider_pane_g3_ParamLimits

0xd7aa,	// (0x0007b8bd) main_cset_slider_pane_g3

0x628b,	// (0x0007439e) main_cset_slider_pane_g4_ParamLimits

0x628b,	// (0x0007439e) main_cset_slider_pane_g4

0x629a,	// (0x000743ad) main_cset_slider_pane_g5_ParamLimits

0x629a,	// (0x000743ad) main_cset_slider_pane_g5

0x62a8,	// (0x000743bb) main_cset_slider_pane_g6_ParamLimits

0x62a8,	// (0x000743bb) main_cset_slider_pane_g6

0xf976,	// (0x0007da89) main_cset_slider_pane_g_ParamLimits

0xd7da,	// (0x0007b8ed) main_cset_slider_pane_t1_ParamLimits

0x6338,	// (0x0007444b) main_cset_slider_pane_t2_ParamLimits

0x6352,	// (0x00074465) main_cset_slider_pane_t3_ParamLimits

0x636c,	// (0x0007447f) main_cset_slider_pane_t4_ParamLimits

0x6386,	// (0x00074499) main_cset_slider_pane_t5_ParamLimits

0x63a4,	// (0x000744b7) main_cset_slider_pane_t6_ParamLimits

0x63b9,	// (0x000744cc) main_cset_slider_pane_t7_ParamLimits

0x63e7,	// (0x000744fa) main_cset_slider_pane_t8_ParamLimits

0x63e7,	// (0x000744fa) main_cset_slider_pane_t8

0x640f,	// (0x00074522) main_cset_slider_pane_t9_ParamLimits

0x640f,	// (0x00074522) main_cset_slider_pane_t9

0x6437,	// (0x0007454a) main_cset_slider_pane_t10_ParamLimits

0x6437,	// (0x0007454a) main_cset_slider_pane_t10

0x645f,	// (0x00074572) main_cset_slider_pane_t11_ParamLimits

0x645f,	// (0x00074572) main_cset_slider_pane_t11

0x6489,	// (0x0007459c) main_cset_slider_pane_t12_ParamLimits

0x6489,	// (0x0007459c) main_cset_slider_pane_t12

0x64a6,	// (0x000745b9) main_cset_slider_pane_t13_ParamLimits

0x64a6,	// (0x000745b9) main_cset_slider_pane_t13

0xf99b,	// (0x0007daae) main_cset_slider_pane_t_ParamLimits

0x956e,	// (0x00077681) bg_popup_sub_pane_cp011

0xd8f4,	// (0x0007ba07) main_cset_text_pane_g1

0xd8fc,	// (0x0007ba0f) main_cset_text_pane_t1

0xd90a,	// (0x0007ba1d) main_cset_text_pane_t2

0xd918,	// (0x0007ba2b) main_cset_text_pane_t3

0xd926,	// (0x0007ba39) main_cset_text_pane_t4

0xd934,	// (0x0007ba47) main_cset_text_pane_t5

0xd942,	// (0x0007ba55) main_cset_text_pane_t6

0xd950,	// (0x0007ba63) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0007db45) main_cset_text_pane_t

0x956e,	// (0x00077681) main_cam4_burst_pane

0x956e,	// (0x00077681) main_cam5_pane

0x6152,	// (0x00074265) bg_button_pane_cp019

0x615b,	// (0x0007426e) bg_button_pane_cp020

0xd7b6,	// (0x0007b8c9) main_cset_slider_pane_g7_ParamLimits

0xd7b6,	// (0x0007b8c9) main_cset_slider_pane_g7

0xd7c2,	// (0x0007b8d5) main_cset_slider_pane_g8_ParamLimits

0xd7c2,	// (0x0007b8d5) main_cset_slider_pane_g8

0x62bc,	// (0x000743cf) main_cset_slider_pane_g9_ParamLimits

0x62bc,	// (0x000743cf) main_cset_slider_pane_g9

0x62c8,	// (0x000743db) main_cset_slider_pane_g10_ParamLimits

0x62c8,	// (0x000743db) main_cset_slider_pane_g10

0x62d4,	// (0x000743e7) main_cset_slider_pane_g11_ParamLimits

0x62d4,	// (0x000743e7) main_cset_slider_pane_g11

0x62e0,	// (0x000743f3) main_cset_slider_pane_g12_ParamLimits

0x62e0,	// (0x000743f3) main_cset_slider_pane_g12

0x62ec,	// (0x000743ff) main_cset_slider_pane_g13_ParamLimits

0x62ec,	// (0x000743ff) main_cset_slider_pane_g13

0x62f8,	// (0x0007440b) main_cset_slider_pane_g14_ParamLimits

0x62f8,	// (0x0007440b) main_cset_slider_pane_g14

0x6304,	// (0x00074417) main_cset_slider_pane_g15_ParamLimits

0x6304,	// (0x00074417) main_cset_slider_pane_g15

0xd808,	// (0x0007b91b) main_cset_slider_pane_t14_ParamLimits

0xd808,	// (0x0007b91b) main_cset_slider_pane_t14

0xd841,	// (0x0007b954) main_cset_slider_pane_t15_ParamLimits

0xd841,	// (0x0007b954) main_cset_slider_pane_t15

0x69ed,	// (0x00074b00) aid_cam4_burst_size_cell_ParamLimits

0x69ed,	// (0x00074b00) aid_cam4_burst_size_cell

0x6a0d,	// (0x00074b20) grid_cam4_burst_pane_ParamLimits

0x6a0d,	// (0x00074b20) grid_cam4_burst_pane

0x6a47,	// (0x00074b5a) linegrid_cam4_burst_pane_ParamLimits

0x6a47,	// (0x00074b5a) linegrid_cam4_burst_pane

0xd95e,	// (0x0007ba71) scroll_pane_cp30_ParamLimits

0xd95e,	// (0x0007ba71) scroll_pane_cp30

0x6a69,	// (0x00074b7c) cell_cam4_burst_pane_ParamLimits

0x6a69,	// (0x00074b7c) cell_cam4_burst_pane

0xd96a,	// (0x0007ba7d) linegrid_cam4_burst_pane_g1_ParamLimits

0xd96a,	// (0x0007ba7d) linegrid_cam4_burst_pane_g1

0x6abe,	// (0x00074bd1) linegrid_cam4_burst_pane_g2_ParamLimits

0x6abe,	// (0x00074bd1) linegrid_cam4_burst_pane_g2

0xd977,	// (0x0007ba8a) linegrid_cam4_burst_pane_g3_ParamLimits

0xd977,	// (0x0007ba8a) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0007db54) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0007db54) linegrid_cam4_burst_pane_g

0x6acf,	// (0x00074be2) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6acf,	// (0x00074be2) linegrid_cam4_burst_pane_g3_copy1

0xd984,	// (0x0007ba97) linegrid_cam4_burst_pane_g4_ParamLimits

0xd984,	// (0x0007ba97) linegrid_cam4_burst_pane_g4

0x6aed,	// (0x00074c00) linegrid_cam4_burst_pane_g5_ParamLimits

0x6aed,	// (0x00074c00) linegrid_cam4_burst_pane_g5

0x6afe,	// (0x00074c11) linegrid_cam4_burst_pane_g6_ParamLimits

0x6afe,	// (0x00074c11) linegrid_cam4_burst_pane_g6

0xd991,	// (0x0007baa4) linegrid_cam4_burst_pane_g7_ParamLimits

0xd991,	// (0x0007baa4) linegrid_cam4_burst_pane_g7

0x6b15,	// (0x00074c28) cell_cam4_burst_pane_g1

0xd9aa,	// (0x0007babd) main_cam5_pane_t1_ParamLimits

0xd9aa,	// (0x0007babd) main_cam5_pane_t1

0xd9bc,	// (0x0007bacf) main_cam5_pane_t2_ParamLimits

0xd9bc,	// (0x0007bacf) main_cam5_pane_t2

0xd9ce,	// (0x0007bae1) main_cam5_pane_t3_ParamLimits

0xd9ce,	// (0x0007bae1) main_cam5_pane_t3

0xd9e0,	// (0x0007baf3) main_cam5_pane_t4_ParamLimits

0xd9e0,	// (0x0007baf3) main_cam5_pane_t4

0xd9f8,	// (0x0007bb0b) main_cam5_pane_t5_ParamLimits

0xd9f8,	// (0x0007bb0b) main_cam5_pane_t5

0xda0c,	// (0x0007bb1f) main_cam5_pane_t6_ParamLimits

0xda0c,	// (0x0007bb1f) main_cam5_pane_t6

0xda20,	// (0x0007bb33) main_cam5_pane_t7_ParamLimits

0xda20,	// (0x0007bb33) main_cam5_pane_t7

0xda32,	// (0x0007bb45) main_cam5_pane_t8_ParamLimits

0xda32,	// (0x0007bb45) main_cam5_pane_t8

0xda50,	// (0x0007bb63) main_cam5_pane_t9_ParamLimits

0xda50,	// (0x0007bb63) main_cam5_pane_t9

0xda62,	// (0x0007bb75) main_cam5_pane_t10_ParamLimits

0xda62,	// (0x0007bb75) main_cam5_pane_t10

0xda74,	// (0x0007bb87) main_cam5_pane_t11_ParamLimits

0xda74,	// (0x0007bb87) main_cam5_pane_t11

0xda88,	// (0x0007bb9b) main_cam5_pane_t12_ParamLimits

0xda88,	// (0x0007bb9b) main_cam5_pane_t12

0xda9f,	// (0x0007bbb2) main_cam5_pane_t13_ParamLimits

0xda9f,	// (0x0007bbb2) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0007db60) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0007db60) main_cam5_pane_t

0xfe3d,	// (0x0006df50) popup_scut_keymap_window_ParamLimits

0xfe3d,	// (0x0006df50) popup_scut_keymap_window

0x6b28,	// (0x00074c3b) aid_size_cell_brow_shortcut

0xb3ae,	// (0x000794c1) bg_popup_window_pane_cp010

0x6b34,	// (0x00074c47) grid_scut_pane

0x6b40,	// (0x00074c53) cell_scut_pane_ParamLimits

0x6b40,	// (0x00074c53) cell_scut_pane

0x6b59,	// (0x00074c6c) cell_scut_pane_g1

0xdac2,	// (0x0007bbd5) cell_scut_pane_t1

0xdad1,	// (0x0007bbe4) cell_scut_pane_t2

0x6b62,	// (0x00074c75) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0007db7b) cell_scut_pane_t

0x4783,	// (0x00072896) main_mup3_pane_g8_ParamLimits

0x4783,	// (0x00072896) main_mup3_pane_g8

0x5c8d,	// (0x00073da0) area_vitu2_query_pane_ParamLimits

0x5c8d,	// (0x00073da0) area_vitu2_query_pane

0x6895,	// (0x000749a8) input_focus_pane_cp08

0xdae0,	// (0x0007bbf3) area_vitu2_query_pane_g1

0x6b70,	// (0x00074c83) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0007db82) area_vitu2_query_pane_g

0x6b81,	// (0x00074c94) area_vitu2_query_pane_t1_ParamLimits

0x6b81,	// (0x00074c94) area_vitu2_query_pane_t1

0x6b95,	// (0x00074ca8) area_vitu2_query_pane_t2_ParamLimits

0x6b95,	// (0x00074ca8) area_vitu2_query_pane_t2

0x6ba9,	// (0x00074cbc) area_vitu2_query_pane_t3_ParamLimits

0x6ba9,	// (0x00074cbc) area_vitu2_query_pane_t3

0xa3f7,	// (0x0007850a) area_vitu2_query_pane_t4_ParamLimits

0xa3f7,	// (0x0007850a) area_vitu2_query_pane_t4

0xa41f,	// (0x00078532) area_vitu2_query_pane_t5_ParamLimits

0xa41f,	// (0x00078532) area_vitu2_query_pane_t5

0xa447,	// (0x0007855a) area_vitu2_query_pane_t6_ParamLimits

0xa447,	// (0x0007855a) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0007db87) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0007db87) area_vitu2_query_pane_t

0x6bd1,	// (0x00074ce4) bg_button_pane_cp018

0x6bdf,	// (0x00074cf2) bg_button_pane_cp021

0x6beb,	// (0x00074cfe) bg_button_pane_cp022

0x6bfc,	// (0x00074d0f) input_focus_pane_cp09

0x25e4,	// (0x000706f7) aid_size_touch_mv_arrow_left

0x260d,	// (0x00070720) aid_size_touch_mv_arrow_right

0x631c,	// (0x0007442f) main_cset_slider_pane_g16_ParamLimits

0x631c,	// (0x0007442f) main_cset_slider_pane_g16

0x632a,	// (0x0007443d) main_cset_slider_pane_g17_ParamLimits

0x632a,	// (0x0007443d) main_cset_slider_pane_g17

0x6b15,	// (0x00074c28) cell_cam4_burst_pane_g1_ParamLimits

0x956e,	// (0x00077681) compa_mode_pane

0x6544,	// (0x00074657) popup_vtel_slider_window_g3_ParamLimits

0x6544,	// (0x00074657) popup_vtel_slider_window_g3

0x655b,	// (0x0007466e) popup_vtel_slider_window_g4_ParamLimits

0x655b,	// (0x0007466e) popup_vtel_slider_window_g4

0x6572,	// (0x00074685) popup_vtel_slider_window_t1_ParamLimits

0x6572,	// (0x00074685) popup_vtel_slider_window_t1

0x956e,	// (0x00077681) main_cl_pane

0xc846,	// (0x0007a959) popup_imed_adjust2_window_ParamLimits

0xc81a,	// (0x0007a92d) bg_tb_trans_pane_cp05_ParamLimits

0xd170,	// (0x0007b283) popup_imed_adjust2_window_g1_ParamLimits

0xd17f,	// (0x0007b292) popup_imed_adjust2_window_g2_ParamLimits

0xd17f,	// (0x0007b292) popup_imed_adjust2_window_g2

0xd18b,	// (0x0007b29e) popup_imed_adjust2_window_g3_ParamLimits

0xd18b,	// (0x0007b29e) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0007d8f2) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0007d8f2) popup_imed_adjust2_window_g

0xd197,	// (0x0007b2aa) popup_imed_adjust2_window_t1_ParamLimits

0xd1af,	// (0x0007b2c2) slider_imed_adjust_pane_ParamLimits

0xd1c3,	// (0x0007b2d6) slider_imed_adjust_pane_g1_ParamLimits

0xd1d3,	// (0x0007b2e6) slider_imed_adjust_pane_g2_ParamLimits

0xd1e3,	// (0x0007b2f6) slider_imed_adjust_pane_g3_ParamLimits

0xd1f4,	// (0x0007b307) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0007d8f9) slider_imed_adjust_pane_g_ParamLimits

0x5a0d,	// (0x00073b20) aid_touch_area_cam4_ParamLimits

0x5a0d,	// (0x00073b20) aid_touch_area_cam4

0xa250,	// (0x00078363) battery_pane_cp01

0x5adf,	// (0x00073bf2) main_camera4_pane_g6_ParamLimits

0x5adf,	// (0x00073bf2) main_camera4_pane_g6

0x5b09,	// (0x00073c1c) main_camera4_pane_t2_ParamLimits

0x5b09,	// (0x00073c1c) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0007d9fc) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0007d9fc) main_camera4_pane_t

0x5b3e,	// (0x00073c51) aid_touch_area_vid4_ParamLimits

0x5b3e,	// (0x00073c51) aid_touch_area_vid4

0x5b92,	// (0x00073ca5) main_video4_pane_g5_ParamLimits

0x5b92,	// (0x00073ca5) main_video4_pane_g5

0x5bb7,	// (0x00073cca) vid4_progress_pane_ParamLimits

0x5bb7,	// (0x00073cca) vid4_progress_pane

0xd7ce,	// (0x0007b8e1) main_cset_slider_pane_g18_ParamLimits

0xd7ce,	// (0x0007b8e1) main_cset_slider_pane_g18

0xd99e,	// (0x0007bab1) cell_cam4_burst_pane_g2_ParamLimits

0xd99e,	// (0x0007bab1) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0007db5b) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0007db5b) cell_cam4_burst_pane_g

0xa8ac,	// (0x000789bf) bg_cl_pane_ParamLimits

0xa8ac,	// (0x000789bf) bg_cl_pane

0x6c0d,	// (0x00074d20) cl_header_pane_ParamLimits

0x6c0d,	// (0x00074d20) cl_header_pane

0x6c21,	// (0x00074d34) cl_listscroll_pane_ParamLimits

0x6c21,	// (0x00074d34) cl_listscroll_pane

0xdaec,	// (0x0007bbff) bg_cl_pane_g1

0xdaf4,	// (0x0007bc07) bg_cl_pane_g2

0xdafc,	// (0x0007bc0f) bg_cl_pane_g3

0xdb04,	// (0x0007bc17) bg_cl_pane_g4

0xdb0c,	// (0x0007bc1f) bg_cl_pane_g5

0xdb14,	// (0x0007bc27) bg_cl_pane_g6

0xdb1c,	// (0x0007bc2f) bg_cl_pane_g7

0xdb24,	// (0x0007bc37) bg_cl_pane_g8

0xdb2c,	// (0x0007bc3f) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0007db96) bg_cl_pane_g

0x6c31,	// (0x00074d44) aid_height_cl_leading_ParamLimits

0x6c31,	// (0x00074d44) aid_height_cl_leading

0x6c3d,	// (0x00074d50) aid_height_cl_text_ParamLimits

0x6c3d,	// (0x00074d50) aid_height_cl_text

0x95c7,	// (0x000776da) bg_cl_header_pane_ParamLimits

0x95c7,	// (0x000776da) bg_cl_header_pane

0x6c5c,	// (0x00074d6f) cl_header_pane_g1_ParamLimits

0x6c5c,	// (0x00074d6f) cl_header_pane_g1

0x6c72,	// (0x00074d85) cl_header_pane_t1_ParamLimits

0x6c72,	// (0x00074d85) cl_header_pane_t1

0xdb34,	// (0x0007bc47) cl_list_pane

0xd7a1,	// (0x0007b8b4) hc_scroll_pane_cp01

0xacb5,	// (0x00078dc8) bg_cl_header_pane_g1

0xd683,	// (0x0007b796) bg_cl_header_pane_g2

0xacd5,	// (0x00078de8) bg_cl_header_pane_g3

0xd693,	// (0x0007b7a6) bg_cl_header_pane_g4

0xd68b,	// (0x0007b79e) bg_cl_header_pane_g5

0xd8ad,	// (0x0007b9c0) bg_cl_header_pane_g6

0xd6ab,	// (0x0007b7be) bg_cl_header_pane_g7

0xd6b3,	// (0x0007b7c6) bg_cl_header_pane_g8

0xd6a3,	// (0x0007b7b6) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0007dba9) bg_cl_header_pane_g

0x6c8b,	// (0x00074d9e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x6c8b,	// (0x00074d9e) hc_cl_list_double_graphic_heading_pane

0x6c9e,	// (0x00074db1) hc_cl_list_single_graphic_pane_ParamLimits

0x6c9e,	// (0x00074db1) hc_cl_list_single_graphic_pane

0x6cb6,	// (0x00074dc9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6cb6,	// (0x00074dc9) hc_cl_list_single_graphic_pane_g1

0x6cc2,	// (0x00074dd5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x6cc2,	// (0x00074dd5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0007dbbc) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0007dbbc) hc_cl_list_single_graphic_pane_g

0x6cd6,	// (0x00074de9) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6cd6,	// (0x00074de9) hc_cl_list_single_graphic_pane_t1

0x6cb6,	// (0x00074dc9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6cb6,	// (0x00074dc9) hc_cl_list_double_graphic_heading_pane_g1

0x6ceb,	// (0x00074dfe) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6ceb,	// (0x00074dfe) hc_cl_list_double_graphic_heading_pane_g2

0x6cff,	// (0x00074e12) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x6cff,	// (0x00074e12) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0007dbc1) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0007dbc1) hc_cl_list_double_graphic_heading_pane_g

0x6d13,	// (0x00074e26) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x6d13,	// (0x00074e26) hc_cl_list_double_graphic_heading_pane_t1

0x6d28,	// (0x00074e3b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x6d28,	// (0x00074e3b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0007dbc8) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0007dbc8) hc_cl_list_double_graphic_heading_pane_t

0x6d3d,	// (0x00074e50) vid4_progress_pane_g1

0x6d4f,	// (0x00074e62) vid4_progress_pane_g2

0x9ef5,	// (0x00078008) vid4_progress_pane_g3

0xa49b,	// (0x000785ae) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0007dbcd) vid4_progress_pane_g

0xa4b9,	// (0x000785cc) vid4_progress_pane_t1

0xa4ce,	// (0x000785e1) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0007dbd8) vid4_progress_pane_t

0xa4f9,	// (0x0007860c) wait_bar_pane_cp07

0xca58,	// (0x0007ab6b) blid_firmament_pane_ParamLimits

0xca9b,	// (0x0007abae) popup_blid_sat_info2_window_g1

0xcabf,	// (0x0007abd2) popup_blid_sat_info2_window_t3

0xcacd,	// (0x0007abe0) popup_blid_sat_info2_window_t4

0xcadb,	// (0x0007abee) popup_blid_sat_info2_window_t5

0xcae9,	// (0x0007abfc) popup_blid_sat_info2_window_t6

0xcaf9,	// (0x0007ac0c) popup_blid_sat_info2_window_t7

0xcb07,	// (0x0007ac1a) popup_blid_sat_info2_window_t8

0xcb15,	// (0x0007ac28) popup_blid_sat_info2_window_t9

0xcb23,	// (0x0007ac36) popup_blid_sat_info2_window_t10

0xcbeb,	// (0x0007acfe) aid_firma_cardinal_ParamLimits

0xcbff,	// (0x0007ad12) blid_firmament_pane_t1_ParamLimits

0xcc16,	// (0x0007ad29) blid_firmament_pane_t2_ParamLimits

0xcc2d,	// (0x0007ad40) blid_firmament_pane_t3_ParamLimits

0xcc44,	// (0x0007ad57) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0007d7e6) blid_firmament_pane_t_ParamLimits

0xcc5b,	// (0x0007ad6e) blid_sat_info_pane_ParamLimits

0x95c7,	// (0x000776da) main_cam_set_pane_ParamLimits

0x5064,	// (0x00073177) aid_size_cell_colour_35_ParamLimits

0x5084,	// (0x00073197) aid_size_cell_colour_112_ParamLimits

0x50a4,	// (0x000731b7) aid_size_cell_effect_ParamLimits

0xc81a,	// (0x0007a92d) bg_tb_trans_pane_cp02_ParamLimits

0xaf0e,	// (0x00079021) heading_imed_pane_ParamLimits

0x50c4,	// (0x000731d7) listscroll_imed_pane_ParamLimits

0xbe3c,	// (0x00079f4f) popup_call2_audio_first_window_g5_ParamLimits

0xbe3c,	// (0x00079f4f) popup_call2_audio_first_window_g5

0x5675,	// (0x00073788) aid_size_touch_image3_arrow_left_ParamLimits

0x5675,	// (0x00073788) aid_size_touch_image3_arrow_left

0x56a1,	// (0x000737b4) aid_size_touch_image3_arrow_right_ParamLimits

0x56a1,	// (0x000737b4) aid_size_touch_image3_arrow_right

0xa4e4,	// (0x000785f7) vid4_progress_pane_t3

0x53e3,	// (0x000734f6) main_hwr_training_symbol_option_pane_ParamLimits

0x53e3,	// (0x000734f6) main_hwr_training_symbol_option_pane

0xd45f,	// (0x0007b572) popup_hwr_training_preview_window_ParamLimits

0xd45f,	// (0x0007b572) popup_hwr_training_preview_window

0x5403,	// (0x00073516) hwr_training_navi_pane_g5_ParamLimits

0x5403,	// (0x00073516) hwr_training_navi_pane_g5

0xd671,	// (0x0007b784) popup_char_count_window

0xa2d1,	// (0x000783e4) bg_popup_sub_pane_cp20_ParamLimits

0x669a,	// (0x000747ad) list_vitu2_match_list_pane_ParamLimits

0x66a9,	// (0x000747bc) vitu2_page_scroll_pane_ParamLimits

0x66a9,	// (0x000747bc) vitu2_page_scroll_pane

0xdb3d,	// (0x0007bc50) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb3d,	// (0x0007bc50) list_single_hwr_training_symbol_option_pane

0xdb50,	// (0x0007bc63) list_single_hwr_training_symbol_option_pane_g1

0xdb58,	// (0x0007bc6b) list_single_hwr_training_symbol_option_pane_t1

0xdb66,	// (0x0007bc79) bg_button_pane_cp023

0xdb6f,	// (0x0007bc82) bg_button_pane_cp024

0x6d99,	// (0x00074eac) vitu2_page_scroll_pane_g1

0x6da1,	// (0x00074eb4) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0007dbdf) vitu2_page_scroll_pane_g

0x6dab,	// (0x00074ebe) vitu2_page_scroll_pane_t1

0xc9b8,	// (0x0007aacb) popup_char_count_window_g1

0xdba2,	// (0x0007bcb5) popup_char_count_window_g2

0xdbab,	// (0x0007bcbe) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0007dbe4) popup_char_count_window_g

0xdbb4,	// (0x0007bcc7) popup_char_count_window_t1

0x956e,	// (0x00077681) main_vded2_pane

0xd15c,	// (0x0007b26f) aid_size_cell_imed_line

0xd166,	// (0x0007b279) grid_imed_line_width_pane

0xa326,	// (0x00078439) vid4_indicators_pane_g4

0xdbc2,	// (0x0007bcd5) cell_imed_line_width_pane_ParamLimits

0xdbc2,	// (0x0007bcd5) cell_imed_line_width_pane

0xdbd8,	// (0x0007bceb) cell_imed_line_width_pane_g1

0xcf77,	// (0x0007b08a) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0007dbeb) cell_imed_line_width_pane_g

0x6dba,	// (0x00074ecd) main_vded2_pane_g1_ParamLimits

0x6dba,	// (0x00074ecd) main_vded2_pane_g1

0x6dd5,	// (0x00074ee8) main_vded2_pane_g2_ParamLimits

0x6dd5,	// (0x00074ee8) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0007dbf0) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0007dbf0) main_vded2_pane_g

0x6de7,	// (0x00074efa) vded2_slider_pane_ParamLimits

0x6de7,	// (0x00074efa) vded2_slider_pane

0x6df7,	// (0x00074f0a) aid_size_touch_vded2_end

0x6e01,	// (0x00074f14) aid_size_touch_vded2_playhead

0xdbe1,	// (0x0007bcf4) aid_size_touch_vded2_start

0xdbe9,	// (0x0007bcfc) vded2_slider_bg_pane

0xdbf2,	// (0x0007bd05) vded2_slider_pane_g1

0xdbfb,	// (0x0007bd0e) vded2_slider_pane_g2

0x6e0b,	// (0x00074f1e) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0007dbf5) vded2_slider_pane_g

0xdc03,	// (0x0007bd16) vded2_slider_bg_pane_g1

0xdc0c,	// (0x0007bd1f) vded2_slider_bg_pane_g2

0xdc15,	// (0x0007bd28) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x0007dbfc) vded2_slider_bg_pane_g

0x2cd9,	// (0x00070dec) aid_postcard_touch_down_pane_ParamLimits

0x2cd9,	// (0x00070dec) aid_postcard_touch_down_pane

0x2cf1,	// (0x00070e04) aid_postcard_touch_up_pane_ParamLimits

0x2cf1,	// (0x00070e04) aid_postcard_touch_up_pane

0x956e,	// (0x00077681) main_blid2_pane

0xc828,	// (0x0007a93b) popup_blid2_search_window

0x956e,	// (0x00077681) blid2_gps_pane

0x956e,	// (0x00077681) blid2_navig_pane

0x956e,	// (0x00077681) blid2_search_pane

0x956e,	// (0x00077681) blid2_tripm_pane

0x6e16,	// (0x00074f29) blid2_search_pane_g1_ParamLimits

0x6e16,	// (0x00074f29) blid2_search_pane_g1

0x6e29,	// (0x00074f3c) blid2_search_pane_t1_ParamLimits

0x6e29,	// (0x00074f3c) blid2_search_pane_t1

0x6e3b,	// (0x00074f4e) aid_size_cell_blid2_gps_ParamLimits

0x6e3b,	// (0x00074f4e) aid_size_cell_blid2_gps

0x6e53,	// (0x00074f66) blid2_gps_pane_g1_ParamLimits

0x6e53,	// (0x00074f66) blid2_gps_pane_g1

0x6e67,	// (0x00074f7a) grid_blid2_satellite_pane_ParamLimits

0x6e67,	// (0x00074f7a) grid_blid2_satellite_pane

0x6e7f,	// (0x00074f92) blid2_navig_pane_g1_ParamLimits

0x6e7f,	// (0x00074f92) blid2_navig_pane_g1

0x6e8b,	// (0x00074f9e) blid2_navig_pane_t1_ParamLimits

0x6e8b,	// (0x00074f9e) blid2_navig_pane_t1

0x6ea6,	// (0x00074fb9) blid2_navig_pane_t2_ParamLimits

0x6ea6,	// (0x00074fb9) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x0007dc03) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x0007dc03) blid2_navig_pane_t

0x6ec1,	// (0x00074fd4) blid2_navig_ring_pane_ParamLimits

0x6ec1,	// (0x00074fd4) blid2_navig_ring_pane

0x6edc,	// (0x00074fef) blid2_speed_pane_ParamLimits

0x6edc,	// (0x00074fef) blid2_speed_pane

0x6ee8,	// (0x00074ffb) blid2_tripm_pane_g1_ParamLimits

0x6ee8,	// (0x00074ffb) blid2_tripm_pane_g1

0x6f03,	// (0x00075016) blid2_tripm_pane_g2_ParamLimits

0x6f03,	// (0x00075016) blid2_tripm_pane_g2

0x6f17,	// (0x0007502a) blid2_tripm_pane_g3_ParamLimits

0x6f17,	// (0x0007502a) blid2_tripm_pane_g3

0x6f2b,	// (0x0007503e) blid2_tripm_pane_g4_ParamLimits

0x6f2b,	// (0x0007503e) blid2_tripm_pane_g4

0x6f3f,	// (0x00075052) blid2_tripm_pane_g5_ParamLimits

0x6f3f,	// (0x00075052) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x0007dc08) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x0007dc08) blid2_tripm_pane_g

0x6f65,	// (0x00075078) blid2_tripm_pane_t1_ParamLimits

0x6f65,	// (0x00075078) blid2_tripm_pane_t1

0x6f7e,	// (0x00075091) blid2_tripm_pane_t2_ParamLimits

0x6f7e,	// (0x00075091) blid2_tripm_pane_t2

0x6f97,	// (0x000750aa) blid2_tripm_pane_t3_ParamLimits

0x6f97,	// (0x000750aa) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x0007dc15) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x0007dc15) blid2_tripm_pane_t

0x6fde,	// (0x000750f1) cell_blid2_satellite_pane_ParamLimits

0x6fde,	// (0x000750f1) cell_blid2_satellite_pane

0x6ffc,	// (0x0007510f) cell_blid2_satellite_pane_g1

0xdc1e,	// (0x0007bd31) cell_blid2_satellite_pane_t1

0xcc6b,	// (0x0007ad7e) blid2_speed_pane_g1

0xdc2c,	// (0x0007bd3f) blid2_speed_pane_t1

0xdc3a,	// (0x0007bd4d) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x0007dc1e) blid2_speed_pane_t

0xcc6b,	// (0x0007ad7e) blid2_navig_ring_pane_g1

0x7005,	// (0x00075118) blid2_navig_ring_pane_g2

0x700d,	// (0x00075120) blid2_navig_ring_pane_g3

0x7015,	// (0x00075128) blid2_navig_ring_pane_g4

0x701d,	// (0x00075130) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x0007dc23) blid2_navig_ring_pane_g

0x956e,	// (0x00077681) bg_popup_window_pane_cp011

0xdc48,	// (0x0007bd5b) popup_blid2_search_window_g1

0xdc50,	// (0x0007bd63) popup_blid2_search_window_t1

0xdc5e,	// (0x0007bd71) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x0007dc2e) popup_blid2_search_window_t

0xabc4,	// (0x00078cd7) main_browser_pane_g1

0xa8ac,	// (0x000789bf) main_browser_pane_ParamLimits

0xa2d1,	// (0x000783e4) bg_button_pane_cp011_ParamLimits

0x5ee4,	// (0x00073ff7) cell_vitu2_function_pane_g1_ParamLimits

0xc81a,	// (0x0007a92d) bg_popup_sub_pane_cp22_ParamLimits

0x6895,	// (0x000749a8) input_focus_pane_cp08_ParamLimits

0x68ac,	// (0x000749bf) popup_vitu2_query_button_pane_ParamLimits

0x68ac,	// (0x000749bf) popup_vitu2_query_button_pane

0x68bd,	// (0x000749d0) popup_vitu2_query_input_button_pane

0xd8e8,	// (0x0007b9fb) popup_vitu2_query_window_g1_ParamLimits

0x68c7,	// (0x000749da) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0007db2f) popup_vitu2_query_window_g_ParamLimits

0x956e,	// (0x00077681) bg_button_pane_cp026

0x7025,	// (0x00075138) popup_vitu2_query_input_button_pane_g1

0x956e,	// (0x00077681) bg_button_pane_cp025

0xdc6c,	// (0x0007bd7f) popup_vitu2_query_button_pane_t1

0x43fd,	// (0x00072510) main_mp3_pane_t6

0x440b,	// (0x0007251e) popup_slider_window_cp01

0xa27c,	// (0x0007838f) cam4_battery_pane

0xa2df,	// (0x000783f2) cam4_battery_pane_cp02

0xa493,	// (0x000785a6) cam4_battery_pane_cp01

0xa493,	// (0x000785a6) cam4_battery_pane_cp03

0xd55d,	// (0x0007b670) cam4_battery_pane_g1

0xcc6b,	// (0x0007ad7e) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x0007dc33) cam4_battery_pane_g

0xcb31,	// (0x0007ac44) popup_blid_sat_info2_window_t11

0x25e4,	// (0x000706f7) aid_size_touch_mv_arrow_left_ParamLimits

0x260d,	// (0x00070720) aid_size_touch_mv_arrow_right_ParamLimits

0xb30e,	// (0x00079421) navi_pane_g1_ParamLimits

0x264c,	// (0x0007075f) navi_pane_g2_ParamLimits

0x267a,	// (0x0007078d) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0007d4f8) navi_pane_g_ParamLimits

0x26d4,	// (0x000707e7) navi_pane_mv_t1_ParamLimits

0x50d0,	// (0x000731e3) grid_imed_effect_pane_ParamLimits

0x108e,	// (0x0006f1a1) aid_placing_vt_slider_lsc

0xab0f,	// (0x00078c22) aid_placing_vt_slider_prt

0x95c7,	// (0x000776da) bg_tb_trans_pane_cp01_ParamLimits

0xcdbb,	// (0x0007aece) popup_image_details_window_g1_ParamLimits

0xcdce,	// (0x0007aee1) popup_image_details_window_g2_ParamLimits

0xcde3,	// (0x0007aef6) popup_image_details_window_g3_ParamLimits

0xcde3,	// (0x0007aef6) popup_image_details_window_g3

0xf718,	// (0x0007d82b) popup_image_details_window_g_ParamLimits

0xcdf7,	// (0x0007af0a) popup_image_details_window_t1_ParamLimits

0xce09,	// (0x0007af1c) popup_image_details_window_t2_ParamLimits

0xce22,	// (0x0007af35) popup_image_details_window_t3_ParamLimits

0xce36,	// (0x0007af49) popup_image_details_window_t4_ParamLimits

0xce51,	// (0x0007af64) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0007d832) popup_image_details_window_t_ParamLimits

0x6c49,	// (0x00074d5c) cl_header_name_pane_ParamLimits

0x6c49,	// (0x00074d5c) cl_header_name_pane

0x702d,	// (0x00075140) cl_header_name_pane_t1_ParamLimits

0x702d,	// (0x00075140) cl_header_name_pane_t1

0x704e,	// (0x00075161) cl_header_name_pane_t2_ParamLimits

0x704e,	// (0x00075161) cl_header_name_pane_t2

0x7090,	// (0x000751a3) cl_header_name_pane_t3_ParamLimits

0x7090,	// (0x000751a3) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x0007dc38) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x0007dc38) cl_header_name_pane_t

0x26a5,	// (0x000707b8) navi_pane_mv_g2_ParamLimits

0xd64b,	// (0x0007b75e) field_vitu2_entry_pane_g1_ParamLimits

0xd657,	// (0x0007b76a) field_vitu2_entry_pane_g2_ParamLimits

0xd663,	// (0x0007b776) field_vitu2_entry_pane_g3_ParamLimits

0xd663,	// (0x0007b776) field_vitu2_entry_pane_g3

0xf91b,	// (0x0007da2e) field_vitu2_entry_pane_g_ParamLimits

0x5e5b,	// (0x00073f6e) cell_vitu2_itu_pane_g1_ParamLimits

0x5e6b,	// (0x00073f7e) cell_vitu2_itu_pane_g2_ParamLimits

0x5e6b,	// (0x00073f7e) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0007da3a) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0007da3a) cell_vitu2_itu_pane_g

0xa2d1,	// (0x000783e4) bg_vkb2_func_pane_cp05_ParamLimits

0xa2d1,	// (0x000783e4) bg_vkb2_func_pane_cp05

0xa2d1,	// (0x000783e4) bg_vkb2_func_pane_cp03

0xa2d1,	// (0x000783e4) bg_vkb2_func_pane_cp04

0xa2d1,	// (0x000783e4) bg_vkb2_func_pane_cp10_ParamLimits

0xa2d1,	// (0x000783e4) bg_vkb2_func_pane_cp10

0x6beb,	// (0x00074cfe) bg_vkb2_func_pane_cp08

0x6bd1,	// (0x00074ce4) bg_vkb2_func_pane_cp06

0x6bdf,	// (0x00074cf2) bg_vkb2_func_pane_cp07

0xdb78,	// (0x0007bc8b) bg_vkb2_func_pane_cp11_ParamLimits

0xdb78,	// (0x0007bc8b) bg_vkb2_func_pane_cp11

0xdb8d,	// (0x0007bca0) bg_vkb2_func_pane_cp12_ParamLimits

0xdb8d,	// (0x0007bca0) bg_vkb2_func_pane_cp12

0x956e,	// (0x00077681) bg_vkb2_func_pane_cp09

0xd683,	// (0x0007b796) bg_vkb2_func_pane_g1

0xacd5,	// (0x00078de8) bg_vkb2_func_pane_g2

0xd68b,	// (0x0007b79e) bg_vkb2_func_pane_g3

0xd693,	// (0x0007b7a6) bg_vkb2_func_pane_g4

0xd8ad,	// (0x0007b9c0) bg_vkb2_func_pane_g5

0xd6ab,	// (0x0007b7be) bg_vkb2_func_pane_g6

0xd6b3,	// (0x0007b7c6) bg_vkb2_func_pane_g7

0xd6a3,	// (0x0007b7b6) bg_vkb2_func_pane_g8

0xacb5,	// (0x00078dc8) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x0007dc3f) bg_vkb2_func_pane_g

0x6f53,	// (0x00075066) blid2_tripm_pane_g6_ParamLimits

0x6f53,	// (0x00075066) blid2_tripm_pane_g6

0xd517,	// (0x0007b62a) mp4_progress_pane_g1

0x6fca,	// (0x000750dd) blid2_tripm_values_pane_ParamLimits

0x6fca,	// (0x000750dd) blid2_tripm_values_pane

0x70c1,	// (0x000751d4) blid2_tripm_values_pane_t1

0x70cf,	// (0x000751e2) blid2_tripm_values_pane_t2

0x70dd,	// (0x000751f0) blid2_tripm_values_pane_t3

0x70eb,	// (0x000751fe) blid2_tripm_values_pane_t4

0x70f9,	// (0x0007520c) blid2_tripm_values_pane_t5

0x7107,	// (0x0007521a) blid2_tripm_values_pane_t6

0x7115,	// (0x00075228) blid2_tripm_values_pane_t7

0x7123,	// (0x00075236) blid2_tripm_values_pane_t8

0x7131,	// (0x00075244) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x0007dc52) blid2_tripm_values_pane_t

0x10cb,	// (0x0006f1de) call_video_pane_t1_ParamLimits

0x10e5,	// (0x0006f1f8) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0007d381) call_video_pane_t_ParamLimits

0x2c26,	// (0x00070d39) msg_header_pane_g1_ParamLimits

0xb539,	// (0x0007964c) msg_header_pane_g2_ParamLimits

0xb539,	// (0x0007964c) msg_header_pane_g2

0x0001,

0xf488,	// (0x0007d59b) msg_header_pane_g_ParamLimits

0xf488,	// (0x0007d59b) msg_header_pane_g

0xa8ac,	// (0x000789bf) main_clock2_pane_ParamLimits

0x4db7,	// (0x00072eca) grid_clock2_toolbar_pane_ParamLimits

0x4db7,	// (0x00072eca) grid_clock2_toolbar_pane

0x4db7,	// (0x00072eca) listscroll_clock2_pane_ParamLimits

0x4db7,	// (0x00072eca) listscroll_clock2_pane

0x4eae,	// (0x00072fc1) main_clock2_pane_t3_ParamLimits

0x4eae,	// (0x00072fc1) main_clock2_pane_t3

0x4ed2,	// (0x00072fe5) main_clock2_pane_t4_ParamLimits

0x4ed2,	// (0x00072fe5) main_clock2_pane_t4

0xdc7a,	// (0x0007bd8d) cell_clock2_toolbar_pane

0xdc82,	// (0x0007bd95) cell_clock2_toolbar_pane_cp01

0xdc82,	// (0x0007bd95) cell_clock2_toolbar_pane_cp02

0xdc8a,	// (0x0007bd9d) cell_clock2_toolbar_pane_cp03

0xdc92,	// (0x0007bda5) list_clock2_pane

0xb274,	// (0x00079387) scroll_pane_cp10

0xdc9a,	// (0x0007bdad) list_single_clock2_pane_ParamLimits

0xdc9a,	// (0x0007bdad) list_single_clock2_pane

0xb3ae,	// (0x000794c1) list_highlight_pane_cp08

0xdca7,	// (0x0007bdba) list_single_clock2_pane_t1

0xdcb5,	// (0x0007bdc8) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x0007dc65) list_single_clock2_pane_t

0x956e,	// (0x00077681) bg_button_pane_cp10

0xdcc3,	// (0x0007bdd6) cell_clock2_toolbar_pane_g1

0x2c65,	// (0x00070d78) aid_main_viewer_pane_g1_ParamLimits

0x2c65,	// (0x00070d78) aid_main_viewer_pane_g1

0x2c73,	// (0x00070d86) aid_main_viewer_pane_g2_ParamLimits

0x2c73,	// (0x00070d86) aid_main_viewer_pane_g2

0x2c81,	// (0x00070d94) aid_main_viewer_pane_g3_ParamLimits

0x2c81,	// (0x00070d94) aid_main_viewer_pane_g3

0x2c90,	// (0x00070da3) aid_main_viewer_pane_g4_ParamLimits

0x2c90,	// (0x00070da3) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0007d5ac) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0007d5ac) aid_main_viewer_pane_g

0x35e3,	// (0x000716f6) main_calc_pane_ParamLimits

0x35f7,	// (0x0007170a) main_dialer2_pane_ParamLimits

0x956e,	// (0x00077681) main_cam6_pane

0x956e,	// (0x00077681) main_vid6_pane

0x4dc3,	// (0x00072ed6) listscroll_gen_pane_cp06_ParamLimits

0x4dc3,	// (0x00072ed6) listscroll_gen_pane_cp06

0x4ef5,	// (0x00073008) main_clock2_pane_t5_ParamLimits

0x4ef5,	// (0x00073008) main_clock2_pane_t5

0x4f55,	// (0x00073068) aid_call2_pane_cp10_ParamLimits

0x4f67,	// (0x0007307a) aid_call_pane_cp10_ParamLimits

0xb2e3,	// (0x000793f6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2e3,	// (0x000793f6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4f79,	// (0x0007308c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4f79,	// (0x0007308c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2e3,	// (0x000793f6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0007d8e7) popup_clock_analogue_window_cp10_g_ParamLimits

0x4f8f,	// (0x000730a2) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5622,	// (0x00073735) cell_dialer2_keypad_pane_g2_ParamLimits

0x5622,	// (0x00073735) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0007d9cd) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0007d9cd) cell_dialer2_keypad_pane_g

0x563e,	// (0x00073751) cell_dialer2_keypad_pane_t1

0x620d,	// (0x00074320) main_cset_text2_pane_ParamLimits

0x620d,	// (0x00074320) main_cset_text2_pane

0xdae0,	// (0x0007bbf3) area_vitu2_query_pane_g1_ParamLimits

0x6b70,	// (0x00074c83) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0007db82) area_vitu2_query_pane_g_ParamLimits

0xa46f,	// (0x00078582) area_vitu2_query_pane_t7_ParamLimits

0xa46f,	// (0x00078582) area_vitu2_query_pane_t7

0x6bd1,	// (0x00074ce4) bg_button_pane_cp018_ParamLimits

0x6bdf,	// (0x00074cf2) bg_button_pane_cp021_ParamLimits

0x6beb,	// (0x00074cfe) bg_button_pane_cp022_ParamLimits

0x6beb,	// (0x00074cfe) bg_vkb2_func_pane_cp08_ParamLimits

0x6bd1,	// (0x00074ce4) bg_vkb2_func_pane_cp06_ParamLimits

0x6bdf,	// (0x00074cf2) bg_vkb2_func_pane_cp07_ParamLimits

0x6bfc,	// (0x00074d0f) input_focus_pane_cp09_ParamLimits

0xa52f,	// (0x00078642) cam6_autofocus_pane_ParamLimits

0xa52f,	// (0x00078642) cam6_autofocus_pane

0x713f,	// (0x00075252) cam6_image_uncrop_pane_ParamLimits

0x713f,	// (0x00075252) cam6_image_uncrop_pane

0x714e,	// (0x00075261) cam6_indi_pane_ParamLimits

0x714e,	// (0x00075261) cam6_indi_pane

0x7164,	// (0x00075277) cam6_mode_pane_ParamLimits

0x7164,	// (0x00075277) cam6_mode_pane

0x7176,	// (0x00075289) cam6_timer_pane_ParamLimits

0x7176,	// (0x00075289) cam6_timer_pane

0x7182,	// (0x00075295) cam6_zoom_pane_ParamLimits

0x7182,	// (0x00075295) cam6_zoom_pane

0x7190,	// (0x000752a3) cam6_mode_pane_g1_ParamLimits

0x7190,	// (0x000752a3) cam6_mode_pane_g1

0x71a0,	// (0x000752b3) cam6_mode_pane_g2_ParamLimits

0x71a0,	// (0x000752b3) cam6_mode_pane_g2

0x71b0,	// (0x000752c3) cam6_mode_pane_g3_ParamLimits

0x71b0,	// (0x000752c3) cam6_mode_pane_g3

0x71c0,	// (0x000752d3) cam6_mode_pane_g4_ParamLimits

0x71c0,	// (0x000752d3) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x0007dc6a) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x0007dc6a) cam6_mode_pane_g

0xdccb,	// (0x0007bdde) bg_tb_trans_pane_cp08_ParamLimits

0xdccb,	// (0x0007bdde) bg_tb_trans_pane_cp08

0xdcd9,	// (0x0007bdec) cam6_battery_pane_ParamLimits

0xdcd9,	// (0x0007bdec) cam6_battery_pane

0xdcef,	// (0x0007be02) cam6_indi_pane_g1_ParamLimits

0xdcef,	// (0x0007be02) cam6_indi_pane_g1

0xdd01,	// (0x0007be14) cam6_indi_pane_g2_ParamLimits

0xdd01,	// (0x0007be14) cam6_indi_pane_g2

0xdd13,	// (0x0007be26) cam6_indi_pane_g3_ParamLimits

0xdd13,	// (0x0007be26) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x0007dc73) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x0007dc73) cam6_indi_pane_g

0xdd25,	// (0x0007be38) cam6_indi_pane_t1_ParamLimits

0xdd25,	// (0x0007be38) cam6_indi_pane_t1

0x5c07,	// (0x00073d1a) cam6_autofocus_pane_g1

0x5bff,	// (0x00073d12) cam6_autofocus_pane_g2

0x5c17,	// (0x00073d2a) cam6_autofocus_pane_g3

0x5c0f,	// (0x00073d22) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x0007dc7a) cam6_autofocus_pane_g

0xdd4b,	// (0x0007be5e) cam6_timer_pane_g1

0xdd53,	// (0x0007be66) cam6_timer_pane_t1

0xdd61,	// (0x0007be74) cam6_zoom_cont_pane

0xdd69,	// (0x0007be7c) cam6_zoom_pane_g1

0xdd71,	// (0x0007be84) cam6_zoom_pane_g2

0x71d0,	// (0x000752e3) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x0007dc83) cam6_zoom_pane_g

0xcc6b,	// (0x0007ad7e) cam6_battery_pane_g1

0xcc6b,	// (0x0007ad7e) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0007d7ef) cam6_battery_pane_g

0xdd79,	// (0x0007be8c) cam6_zoom_cont_pane_g1

0xdd82,	// (0x0007be95) cam6_zoom_cont_pane_g2

0xdd8b,	// (0x0007be9e) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x0007dc8a) cam6_zoom_cont_pane_g

0x71ed,	// (0x00075300) cam6_mode_pane_cp_ParamLimits

0x71ed,	// (0x00075300) cam6_mode_pane_cp

0x71ff,	// (0x00075312) cam6_zoom_pane_cp_ParamLimits

0x71ff,	// (0x00075312) cam6_zoom_pane_cp

0x720d,	// (0x00075320) vid6_image_uncrop_cif_pane_ParamLimits

0x720d,	// (0x00075320) vid6_image_uncrop_cif_pane

0x721d,	// (0x00075330) vid6_image_uncrop_nhd_pane_ParamLimits

0x721d,	// (0x00075330) vid6_image_uncrop_nhd_pane

0x722c,	// (0x0007533f) vid6_image_uncrop_vga_pane_ParamLimits

0x722c,	// (0x0007533f) vid6_image_uncrop_vga_pane

0x723b,	// (0x0007534e) vid6_image_uncrop_wvga_pane_ParamLimits

0x723b,	// (0x0007534e) vid6_image_uncrop_wvga_pane

0x724a,	// (0x0007535d) vid6_indi_pane_ParamLimits

0x724a,	// (0x0007535d) vid6_indi_pane

0xdccb,	// (0x0007bdde) bg_tb_trans_pane_cp09_ParamLimits

0xdccb,	// (0x0007bdde) bg_tb_trans_pane_cp09

0xdda3,	// (0x0007beb6) cam6_battery_pane_cp_ParamLimits

0xdda3,	// (0x0007beb6) cam6_battery_pane_cp

0xddaf,	// (0x0007bec2) vid6_indi_pane_g1_ParamLimits

0xddaf,	// (0x0007bec2) vid6_indi_pane_g1

0xddc1,	// (0x0007bed4) vid6_indi_pane_g2_ParamLimits

0xddc1,	// (0x0007bed4) vid6_indi_pane_g2

0xddd3,	// (0x0007bee6) vid6_indi_pane_g3_ParamLimits

0xddd3,	// (0x0007bee6) vid6_indi_pane_g3

0xddea,	// (0x0007befd) vid6_indi_pane_g4_ParamLimits

0xddea,	// (0x0007befd) vid6_indi_pane_g4

0xde01,	// (0x0007bf14) vid6_indi_pane_g5_ParamLimits

0xde01,	// (0x0007bf14) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x0007dc91) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x0007dc91) vid6_indi_pane_g

0xde1b,	// (0x0007bf2e) vid6_indi_pane_t1_ParamLimits

0xde1b,	// (0x0007bf2e) vid6_indi_pane_t1

0xde31,	// (0x0007bf44) vid6_indi_pane_t2_ParamLimits

0xde31,	// (0x0007bf44) vid6_indi_pane_t2

0xde59,	// (0x0007bf6c) vid6_indi_pane_t3_ParamLimits

0xde59,	// (0x0007bf6c) vid6_indi_pane_t3

0xde81,	// (0x0007bf94) vid6_indi_pane_t4_ParamLimits

0xde81,	// (0x0007bf94) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x0007dc9c) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x0007dc9c) vid6_indi_pane_t

0xdea5,	// (0x0007bfb8) wait_bar_pane_cp08

0x7262,	// (0x00075375) main_cset_text2_pane_t1_ParamLimits

0x7262,	// (0x00075375) main_cset_text2_pane_t1

0x71d8,	// (0x000752eb) listscroll_gen_pane_cp06_t1_ParamLimits

0x71d8,	// (0x000752eb) listscroll_gen_pane_cp06_t1

0x956e,	// (0x00077681) main_cam6_set_pane

0xa26e,	// (0x00078381) bg_tb_trans_pane_cp06_ParamLimits

0xa284,	// (0x00078397) cam4_indicators_pane_g1_ParamLimits

0xa295,	// (0x000783a8) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0007da0a) cam4_indicators_pane_g_ParamLimits

0xa2ad,	// (0x000783c0) cam4_indicators_pane_t1_ParamLimits

0xa2d1,	// (0x000783e4) bg_tb_trans_pane_cp07_ParamLimits

0xa2e9,	// (0x000783fc) vid4_indicators_pane_g1_ParamLimits

0xa2ff,	// (0x00078412) vid4_indicators_pane_g2_ParamLimits

0xa313,	// (0x00078426) vid4_indicators_pane_g3_ParamLimits

0xa326,	// (0x00078439) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0007da1c) vid4_indicators_pane_g_ParamLimits

0xa344,	// (0x00078457) vid4_indicators_pane_t1_ParamLimits

0x6d3d,	// (0x00074e50) vid4_progress_pane_g1_ParamLimits

0x6d4f,	// (0x00074e62) vid4_progress_pane_g2_ParamLimits

0x9ef5,	// (0x00078008) vid4_progress_pane_g3_ParamLimits

0xa49b,	// (0x000785ae) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0007dbcd) vid4_progress_pane_g_ParamLimits

0xa4b9,	// (0x000785cc) vid4_progress_pane_t1_ParamLimits

0xa4ce,	// (0x000785e1) vid4_progress_pane_t2_ParamLimits

0xa4e4,	// (0x000785f7) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0007dbd8) vid4_progress_pane_t_ParamLimits

0xa4f9,	// (0x0007860c) wait_bar_pane_cp07_ParamLimits

0x7280,	// (0x00075393) main_cam6_set_pane_g2_ParamLimits

0x7280,	// (0x00075393) main_cam6_set_pane_g2

0x72a6,	// (0x000753b9) main_cset6_listscroll_pane_ParamLimits

0x72a6,	// (0x000753b9) main_cset6_listscroll_pane

0x72c4,	// (0x000753d7) main_cset6_slider_pane_ParamLimits

0x72c4,	// (0x000753d7) main_cset6_slider_pane

0x72da,	// (0x000753ed) main_cset6_text2_pane_ParamLimits

0x72da,	// (0x000753ed) main_cset6_text2_pane

0xdeb4,	// (0x0007bfc7) main_cset6_text_pane

0xdebc,	// (0x0007bfcf) main_cset_list_pane_copy1_ParamLimits

0xdebc,	// (0x0007bfcf) main_cset_list_pane_copy1

0xdecc,	// (0x0007bfdf) scroll_pane_cp028_copy1

0x2190,	// (0x000702a3) cset_list_set_pane_copy1

0x72e8,	// (0x000753fb) aid_position_infowindow_above_copy1

0x72f0,	// (0x00075403) aid_position_infowindow_below_copy1

0x72f8,	// (0x0007540b) cset_list_set_pane_g1_copy1

0x7300,	// (0x00075413) cset_list_set_pane_g3_copy1_ParamLimits

0x7300,	// (0x00075413) cset_list_set_pane_g3_copy1

0x730f,	// (0x00075422) cset_list_set_pane_t1_copy1_ParamLimits

0x730f,	// (0x00075422) cset_list_set_pane_t1_copy1

0x95c7,	// (0x000776da) list_highlight_pane_cp021_copy1_ParamLimits

0x95c7,	// (0x000776da) list_highlight_pane_cp021_copy1

0xded5,	// (0x0007bfe8) cset6_slider_pane_ParamLimits

0xded5,	// (0x0007bfe8) cset6_slider_pane

0xdf01,	// (0x0007c014) main_cset6_slider_pane_g1_ParamLimits

0xdf01,	// (0x0007c014) main_cset6_slider_pane_g1

0x7324,	// (0x00075437) main_cset6_slider_pane_g2_ParamLimits

0x7324,	// (0x00075437) main_cset6_slider_pane_g2

0xdf29,	// (0x0007c03c) main_cset6_slider_pane_g3_ParamLimits

0xdf29,	// (0x0007c03c) main_cset6_slider_pane_g3

0x734c,	// (0x0007545f) main_cset6_slider_pane_g4_ParamLimits

0x734c,	// (0x0007545f) main_cset6_slider_pane_g4

0x7358,	// (0x0007546b) main_cset6_slider_pane_g5_ParamLimits

0x7358,	// (0x0007546b) main_cset6_slider_pane_g5

0xd7b6,	// (0x0007b8c9) main_cset6_slider_pane_g7_ParamLimits

0xd7b6,	// (0x0007b8c9) main_cset6_slider_pane_g7

0xd7c2,	// (0x0007b8d5) main_cset6_slider_pane_g8_ParamLimits

0xd7c2,	// (0x0007b8d5) main_cset6_slider_pane_g8

0x62bc,	// (0x000743cf) main_cset6_slider_pane_g9_ParamLimits

0x62bc,	// (0x000743cf) main_cset6_slider_pane_g9

0x62c8,	// (0x000743db) main_cset6_slider_pane_g10_ParamLimits

0x62c8,	// (0x000743db) main_cset6_slider_pane_g10

0x62d4,	// (0x000743e7) main_cset6_slider_pane_g11_ParamLimits

0x62d4,	// (0x000743e7) main_cset6_slider_pane_g11

0x62e0,	// (0x000743f3) main_cset6_slider_pane_g12_ParamLimits

0x62e0,	// (0x000743f3) main_cset6_slider_pane_g12

0x62ec,	// (0x000743ff) main_cset6_slider_pane_g13_ParamLimits

0x62ec,	// (0x000743ff) main_cset6_slider_pane_g13

0x62f8,	// (0x0007440b) main_cset6_slider_pane_g14_ParamLimits

0x62f8,	// (0x0007440b) main_cset6_slider_pane_g14

0x7366,	// (0x00075479) main_cset6_slider_pane_g15_ParamLimits

0x7366,	// (0x00075479) main_cset6_slider_pane_g15

0x631c,	// (0x0007442f) main_cset6_slider_pane_g16_ParamLimits

0x631c,	// (0x0007442f) main_cset6_slider_pane_g16

0x632a,	// (0x0007443d) main_cset6_slider_pane_g17_ParamLimits

0x632a,	// (0x0007443d) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x0007dca5) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x0007dca5) main_cset6_slider_pane_g

0xdf35,	// (0x0007c048) main_cset6_slider_pane_t1_ParamLimits

0xdf35,	// (0x0007c048) main_cset6_slider_pane_t1

0x7396,	// (0x000754a9) main_cset6_slider_pane_t2_ParamLimits

0x7396,	// (0x000754a9) main_cset6_slider_pane_t2

0x73c1,	// (0x000754d4) main_cset6_slider_pane_t3_ParamLimits

0x73c1,	// (0x000754d4) main_cset6_slider_pane_t3

0x73ec,	// (0x000754ff) main_cset6_slider_pane_t4_ParamLimits

0x73ec,	// (0x000754ff) main_cset6_slider_pane_t4

0x7417,	// (0x0007552a) main_cset6_slider_pane_t5_ParamLimits

0x7417,	// (0x0007552a) main_cset6_slider_pane_t5

0xdf76,	// (0x0007c089) main_cset6_slider_pane_t7_ParamLimits

0xdf76,	// (0x0007c089) main_cset6_slider_pane_t7

0x7444,	// (0x00075557) main_cset6_slider_pane_t8_ParamLimits

0x7444,	// (0x00075557) main_cset6_slider_pane_t8

0x7468,	// (0x0007557b) main_cset6_slider_pane_t9_ParamLimits

0x7468,	// (0x0007557b) main_cset6_slider_pane_t9

0x748c,	// (0x0007559f) main_cset6_slider_pane_t10_ParamLimits

0x748c,	// (0x0007559f) main_cset6_slider_pane_t10

0x74b0,	// (0x000755c3) main_cset6_slider_pane_t11_ParamLimits

0x74b0,	// (0x000755c3) main_cset6_slider_pane_t11

0xdfac,	// (0x0007c0bf) main_cset6_slider_pane_t14_ParamLimits

0xdfac,	// (0x0007c0bf) main_cset6_slider_pane_t14

0xdfe5,	// (0x0007c0f8) main_cset6_slider_pane_t15_ParamLimits

0xdfe5,	// (0x0007c0f8) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x0007dcca) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x0007dcca) main_cset6_slider_pane_t

0xe01e,	// (0x0007c131) cset_slider_pane_g1_copy1

0xe027,	// (0x0007c13a) cset_slider_pane_g2_copy1

0xe030,	// (0x0007c143) cset_slider_pane_g3_copy1

0x956e,	// (0x00077681) bg_popup_sub_pane_cp011_copy1

0xe039,	// (0x0007c14c) main_cset_text_pane_g1_copy1

0xd8fc,	// (0x0007ba0f) main_cset_text_pane_t1_copy1

0xd90a,	// (0x0007ba1d) main_cset_text_pane_t2_copy1

0xd918,	// (0x0007ba2b) main_cset_text_pane_t3_copy1

0xd926,	// (0x0007ba39) main_cset_text_pane_t4_copy1

0xd934,	// (0x0007ba47) main_cset_text_pane_t5_copy1

0xe041,	// (0x0007c154) main_cset_text_pane_t6_copy1

0xe04f,	// (0x0007c162) main_cset_text_pane_t7_copy1

0x7262,	// (0x00075375) main_cset_text2_pane_t1_copy1

0x95c7,	// (0x000776da) main_ncimui_pane

0x3885,	// (0x00071998) popup_query_ncimui_window_ParamLimits

0x3885,	// (0x00071998) popup_query_ncimui_window

0x9fc1,	// (0x000780d4) field_cale_ev2_pane_g4_ParamLimits

0x9fc1,	// (0x000780d4) field_cale_ev2_pane_g4

0x54f4,	// (0x00073607) cell_video_dialer_keypad_pane_g2_ParamLimits

0x54f4,	// (0x00073607) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0007d9a8) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0007d9a8) cell_video_dialer_keypad_pane_g

0x550c,	// (0x0007361f) cell_video_dialer_keypad_pane_t1

0x956e,	// (0x00077681) bg_popup_window_pane_cp012

0xb160,	// (0x00079273) heading_pane_cp06

0xe07b,	// (0x0007c18e) ncim_query_content_pane

0x956e,	// (0x00077681) bg_popup_heading_pane_cp01

0xe083,	// (0x0007c196) ncim_heading_pane_t1

0xe091,	// (0x0007c1a4) ncim_indicator_popup_pane

0xe0a3,	// (0x0007c1b6) ncim_query_button_pane

0xe0b9,	// (0x0007c1cc) ncim_query_content_pane_t1

0xe0cb,	// (0x0007c1de) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x0007dd0e) ncim_query_content_pane_t

0xe105,	// (0x0007c218) ncim_query_list_pane

0xe117,	// (0x0007c22a) ncim_query_popup_pane

0xe091,	// (0x0007c1a4) ncim_indicator_popup_pane_ParamLimits

0x76a1,	// (0x000757b4) ncim_query_content_pane_g1_ParamLimits

0x76a1,	// (0x000757b4) ncim_query_content_pane_g1

0xe0b9,	// (0x0007c1cc) ncim_query_content_pane_t1_ParamLimits

0xe0cb,	// (0x0007c1de) ncim_query_content_pane_t2_ParamLimits

0x76ad,	// (0x000757c0) ncim_query_content_pane_t3_ParamLimits

0x76ad,	// (0x000757c0) ncim_query_content_pane_t3

0x76d5,	// (0x000757e8) ncim_query_content_pane_t4_ParamLimits

0x76d5,	// (0x000757e8) ncim_query_content_pane_t4

0x76fd,	// (0x00075810) ncim_query_content_pane_t5_ParamLimits

0x76fd,	// (0x00075810) ncim_query_content_pane_t5

0xe0dd,	// (0x0007c1f0) ncim_query_content_pane_t6_ParamLimits

0xe0dd,	// (0x0007c1f0) ncim_query_content_pane_t6

0xfbfb,	// (0x0007dd0e) ncim_query_content_pane_t_ParamLimits

0xe105,	// (0x0007c218) ncim_query_list_pane_ParamLimits

0xe117,	// (0x0007c22a) ncim_query_popup_pane_ParamLimits

0xe12b,	// (0x0007c23e) wait_bar_pane_cp04

0x956e,	// (0x00077681) input_focus_pane_cp011

0xe133,	// (0x0007c246) ncim_query_popup_pane_t1

0xe141,	// (0x0007c254) ncim_list_query_list_pane_ParamLimits

0xe141,	// (0x0007c254) ncim_list_query_list_pane

0x956e,	// (0x00077681) bg_button_pane_cp027

0xe154,	// (0x0007c267) ncim_query_button_pane_g1

0x956e,	// (0x00077681) list_highlight_pane_cp012

0xe15e,	// (0x0007c271) ncim_list_query_list_pane_g1

0xe166,	// (0x0007c279) ncim_list_query_list_pane_t1

0xa2a1,	// (0x000783b4) cam4_indicators_pane_g3_ParamLimits

0xa2a1,	// (0x000783b4) cam4_indicators_pane_g3

0xa332,	// (0x00078445) vid4_indicators_pane_g5_ParamLimits

0xa332,	// (0x00078445) vid4_indicators_pane_g5

0xa4aa,	// (0x000785bd) vid4_progress_pane_g5_ParamLimits

0xa4aa,	// (0x000785bd) vid4_progress_pane_g5

0x758f,	// (0x000756a2) main_ncimui_pane_g1

0x75f5,	// (0x00075708) ncimui_group_query_pane_ParamLimits

0x75f5,	// (0x00075708) ncimui_group_query_pane

0x763d,	// (0x00075750) ncimui_list_pane_ParamLimits

0x763d,	// (0x00075750) ncimui_list_pane

0x7664,	// (0x00075777) ncimui_text_pane_ParamLimits

0x7664,	// (0x00075777) ncimui_text_pane

0x7725,	// (0x00075838) ncimui_text_pane_t1_ParamLimits

0x7725,	// (0x00075838) ncimui_text_pane_t1

0xe174,	// (0x0007c287) ncimui_list_single_graphic_pane_ParamLimits

0xe174,	// (0x0007c287) ncimui_list_single_graphic_pane

0x7743,	// (0x00075856) ncimui_query_pane_ParamLimits

0x7743,	// (0x00075856) ncimui_query_pane

0x956e,	// (0x00077681) list_highlight_pane_cp013

0xe184,	// (0x0007c297) ncim_list_query_list_pane_t1_copy1

0xe15e,	// (0x0007c271) ncim_list_single_graphic_pane_g1

0xe192,	// (0x0007c2a5) ncim_query_button_pane_cp01

0xe19e,	// (0x0007c2b1) ncim_query_entry_pane_ParamLimits

0xe19e,	// (0x0007c2b1) ncim_query_entry_pane

0xe1b1,	// (0x0007c2c4) ncimui_query_pane_g1

0xe1bd,	// (0x0007c2d0) ncimui_query_pane_t1_ParamLimits

0xe1bd,	// (0x0007c2d0) ncimui_query_pane_t1

0x95c7,	// (0x000776da) input_focus_pane_cp012

0xe1d6,	// (0x0007c2e9) ncim_query_entry_pane_t1

0xa8ac,	// (0x000789bf) main_im_pane_ParamLimits

0x95c7,	// (0x000776da) main_mobtv_pane_ParamLimits

0x95c7,	// (0x000776da) main_mobtv_pane

0x737e,	// (0x00075491) main_cset6_slider_pane_g18_ParamLimits

0x737e,	// (0x00075491) main_cset6_slider_pane_g18

0x738a,	// (0x0007549d) main_cset6_slider_pane_g19_ParamLimits

0x738a,	// (0x0007549d) main_cset6_slider_pane_g19

0x7756,	// (0x00075869) bg_main_mobtv_pane_ParamLimits

0x7756,	// (0x00075869) bg_main_mobtv_pane

0x7764,	// (0x00075877) main_mobtv_info_pane

0x776f,	// (0x00075882) main_mobtv_loading_pane_ParamLimits

0x776f,	// (0x00075882) main_mobtv_loading_pane

0xe1e8,	// (0x0007c2fb) main_mobtv_pg_channel_list_pane

0xe1f2,	// (0x0007c305) main_mobtv_pg_hdr_pane

0x777c,	// (0x0007588f) main_mobtv_programe_curr_pane_ParamLimits

0x777c,	// (0x0007588f) main_mobtv_programe_curr_pane

0x7789,	// (0x0007589c) main_mobtv_programe_next_pane_ParamLimits

0x7789,	// (0x0007589c) main_mobtv_programe_next_pane

0xe1fb,	// (0x0007c30e) popup_mobtv_noti_window

0xcc6b,	// (0x0007ad7e) main_tv_pg_hdr_pane_g1

0xe205,	// (0x0007c318) main_tv_pg_hdr_pane_g2

0xe20d,	// (0x0007c320) main_tv_pg_hdr_pane_g3

0xe215,	// (0x0007c328) main_tv_pg_hdr_pane_g4

0xe21d,	// (0x0007c330) main_tv_pg_hdr_pane_g5

0xe227,	// (0x0007c33a) main_tv_pg_hdr_pane_g6

0xe231,	// (0x0007c344) main_tv_pg_hdr_pane_g7

0xe23b,	// (0x0007c34e) main_tv_pg_hdr_pane_g8

0xe245,	// (0x0007c358) main_tv_pg_hdr_pane_g9

0xe24f,	// (0x0007c362) main_tv_pg_hdr_pane_g10

0xe259,	// (0x0007c36c) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x0007dd1b) main_tv_pg_hdr_pane_g

0xe263,	// (0x0007c376) main_tv_pg_hdr_pane_t1

0xe271,	// (0x0007c384) main_tv_pg_hdr_pane_t2

0xe27f,	// (0x0007c392) main_tv_pg_hdr_pane_t3

0xe28f,	// (0x0007c3a2) main_tv_pg_hdr_pane_t4

0xe29f,	// (0x0007c3b2) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x0007dd32) main_tv_pg_hdr_pane_t

0xe2cf,	// (0x0007c3e2) single_mobtv_pg_channel_pane_ParamLimits

0xe2cf,	// (0x0007c3e2) single_mobtv_pg_channel_pane

0xe2e1,	// (0x0007c3f4) single_mobtv_pg_channel_table_pane

0xe2ea,	// (0x0007c3fd) single_mobtv_pg_channel_thumb_pane

0xe2f3,	// (0x0007c406) single_tv_pg_channel_pane_g1

0xe2fc,	// (0x0007c40f) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x0007dd3d) single_tv_pg_channel_pane_g

0xce9b,	// (0x0007afae) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce9b,	// (0x0007afae) bg_single_mobtv_pg_channel_thumb_pane

0xe305,	// (0x0007c418) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe305,	// (0x0007c418) single_mobtv_pg_channel_thumb_pane_g1

0xe313,	// (0x0007c426) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe313,	// (0x0007c426) single_mobtv_pg_channel_thumb_pane_g2

0xe31f,	// (0x0007c432) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe31f,	// (0x0007c432) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x0007dd42) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x0007dd42) single_mobtv_pg_channel_thumb_pane_g

0xe32b,	// (0x0007c43e) single_mobtv_pg_channel_thumb_pane_t1

0xe339,	// (0x0007c44c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x0007dd49) single_mobtv_pg_channel_thumb_pane_t

0xcc6b,	// (0x0007ad7e) bg_single_mobtv_pg_channel_table_pane_g1

0xcc6b,	// (0x0007ad7e) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0007d7ef) bg_single_mobtv_pg_channel_table_pane_g

0xe347,	// (0x0007c45a) single_mobtv_pg_channel_table_pane_t1

0xe355,	// (0x0007c468) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x0007dd4e) single_mobtv_pg_channel_table_pane_t

0x779e,	// (0x000758b1) main_mobtv_info_pane_g1_ParamLimits

0x779e,	// (0x000758b1) main_mobtv_info_pane_g1

0x77bc,	// (0x000758cf) main_mobtv_info_pane_t1_ParamLimits

0x77bc,	// (0x000758cf) main_mobtv_info_pane_t1

0x7834,	// (0x00075947) main_mobtv_info_pane_t2_ParamLimits

0x7834,	// (0x00075947) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x0007dd58) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x0007dd58) main_mobtv_info_pane_t

0x78c3,	// (0x000759d6) wait_bar_pane_cp05

0x78d5,	// (0x000759e8) main_mobtv_loading_pane_g1_ParamLimits

0x78d5,	// (0x000759e8) main_mobtv_loading_pane_g1

0x78e6,	// (0x000759f9) main_mobtv_loading_pane_g2_ParamLimits

0x78e6,	// (0x000759f9) main_mobtv_loading_pane_g2

0x78f2,	// (0x00075a05) main_mobtv_loading_pane_g3_ParamLimits

0x78f2,	// (0x00075a05) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x0007dd5f) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x0007dd5f) main_mobtv_loading_pane_g

0xe363,	// (0x0007c476) main_mobtv_loading_pane_t1_ParamLimits

0xe363,	// (0x0007c476) main_mobtv_loading_pane_t1

0xe37b,	// (0x0007c48e) main_mobtv_loading_pane_t2_ParamLimits

0xe37b,	// (0x0007c48e) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x0007dd66) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x0007dd66) main_mobtv_loading_pane_t

0x7905,	// (0x00075a18) wait_bar_pane_cp06_ParamLimits

0x7905,	// (0x00075a18) wait_bar_pane_cp06

0xe39f,	// (0x0007c4b2) main_mobtv_programe_curr_pane_t1

0xe3ad,	// (0x0007c4c0) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x0007dd6b) main_mobtv_programe_curr_pane_t

0xe3bb,	// (0x0007c4ce) main_mobtv_programe_next_pane_t1

0xe3c9,	// (0x0007c4dc) main_mobtv_programe_next_pane_t2

0xe3d7,	// (0x0007c4ea) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x0007dd70) main_mobtv_programe_next_pane_t

0x956e,	// (0x00077681) bg_popup_mobtv_noti_window_pane

0xe3e5,	// (0x0007c4f8) popup_mobtv_noti_window_g1

0xe3ed,	// (0x0007c500) popup_mobtv_noti_window_t1

0xe3fb,	// (0x0007c50e) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x0007dd77) popup_mobtv_noti_window_t

0xcc6b,	// (0x0007ad7e) bg_popup_mobtv_noti_window_pane_g1

0x956e,	// (0x00077681) sc_clock_pane

0x956e,	// (0x00077681) main_fs_bigclock_pane

0x6fb4,	// (0x000750c7) blid2_tripm_pane_t4_ParamLimits

0x6fb4,	// (0x000750c7) blid2_tripm_pane_t4

0x7914,	// (0x00075a27) sc_clock_pane_g1_ParamLimits

0x7914,	// (0x00075a27) sc_clock_pane_g1

0x7926,	// (0x00075a39) sc_clock_pane_t1_ParamLimits

0x7926,	// (0x00075a39) sc_clock_pane_t1

0x794a,	// (0x00075a5d) sc_clock_pane_t2_ParamLimits

0x794a,	// (0x00075a5d) sc_clock_pane_t2

0x7962,	// (0x00075a75) sc_clock_pane_t3_ParamLimits

0x7962,	// (0x00075a75) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x0007dd7c) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x0007dd7c) sc_clock_pane_t

0x8a33,	// (0x00076b46) main_fs_bigclock_indicator_pane_ParamLimits

0x8a33,	// (0x00076b46) main_fs_bigclock_indicator_pane

0x7a1e,	// (0x00075b31) main_fs_bigclock_pane_g1_ParamLimits

0x7a1e,	// (0x00075b31) main_fs_bigclock_pane_g1

0x8a3f,	// (0x00076b52) main_fs_bigclock_pane_t1_ParamLimits

0x8a3f,	// (0x00076b52) main_fs_bigclock_pane_t1

0x8a51,	// (0x00076b64) main_fs_bigclock_pane_t2_ParamLimits

0x8a51,	// (0x00076b64) main_fs_bigclock_pane_t2

0x8a65,	// (0x00076b78) main_fs_bigclock_pane_t3_ParamLimits

0x8a65,	// (0x00076b78) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x0007df86) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x0007df86) main_fs_bigclock_pane_t

0xec53,	// (0x0007cd66) main_fs_bigclock_indicator_pane_g1

0xe0ab,	// (0x0007c1be) ncim_query_content_pane_g2_ParamLimits

0xe0ab,	// (0x0007c1be) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x0007dd09) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x0007dd09) ncim_query_content_pane_g

0x7979,	// (0x00075a8c) sc_clock_pane_t4_ParamLimits

0x7979,	// (0x00075a8c) sc_clock_pane_t4

0x95c7,	// (0x000776da) main_radioblah_pane

0xd5d0,	// (0x0007b6e3) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5d0,	// (0x0007b6e3) cell_call4_button_pane_t1_copy1

0x75a7,	// (0x000756ba) main_ncimui_pane_t1_ParamLimits

0x75a7,	// (0x000756ba) main_ncimui_pane_t1

0x75c1,	// (0x000756d4) main_ncimui_pane_t2_ParamLimits

0x75c1,	// (0x000756d4) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x0007dd02) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x0007dd02) main_ncimui_pane_t

0xe54e,	// (0x0007c661) main_radioblah_anim_pane_ParamLimits

0xe54e,	// (0x0007c661) main_radioblah_anim_pane

0xe55f,	// (0x0007c672) main_radioblah_info_pane_ParamLimits

0xe55f,	// (0x0007c672) main_radioblah_info_pane

0xe573,	// (0x0007c686) main_radioblah_pane_t1_ParamLimits

0xe573,	// (0x0007c686) main_radioblah_pane_t1

0xe58f,	// (0x0007c6a2) main_radioblah_pane_t2_ParamLimits

0xe58f,	// (0x0007c6a2) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x0007dd9d) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x0007dd9d) main_radioblah_pane_t

0x7a7b,	// (0x00075b8e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7a7b,	// (0x00075b8e) main_radioblah_rocker_ctrl_pane

0xe5d7,	// (0x0007c6ea) main_radioblah_info_pane_t1_ParamLimits

0xe5d7,	// (0x0007c6ea) main_radioblah_info_pane_t1

0x7ad3,	// (0x00075be6) main_radioblah_info_pane_t2_ParamLimits

0x7ad3,	// (0x00075be6) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x0007dda6) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x0007dda6) main_radioblah_info_pane_t

0xcc6b,	// (0x0007ad7e) main_radioblah_rocker_ctrl_pane_g1

0x7b83,	// (0x00075c96) main_radioblah_rocker_ctrl_pane_g2

0x7b8b,	// (0x00075c9e) main_radioblah_rocker_ctrl_pane_g3

0x7b93,	// (0x00075ca6) main_radioblah_rocker_ctrl_pane_g4

0x7b9b,	// (0x00075cae) main_radioblah_rocker_ctrl_pane_g5

0x7ba3,	// (0x00075cb6) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x0007ddaf) main_radioblah_rocker_ctrl_pane_g

0x7262,	// (0x00075375) main_cset_text2_pane_t1_copy1_ParamLimits

0xa264,	// (0x00078377) cam4_image_uncrop_qvga_pane

0xa2c7,	// (0x000783da) vid4_image_uncrop_qcif_pane

0xa52f,	// (0x00078642) cam6_image_uncrop_qvga_pane_ParamLimits

0xa52f,	// (0x00078642) cam6_image_uncrop_qvga_pane

0xdd93,	// (0x0007bea6) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd93,	// (0x0007bea6) vid6_image_uncrop_qcif_pane

0x956e,	// (0x00077681) bg_popup_preview_window_pane_cp03

0xe05d,	// (0x0007c170) list_cset_text2_pane

0xe065,	// (0x0007c178) main_cset6_text2_pane_g1

0xe06d,	// (0x0007c180) main_cset6_text2_pane_t1

0x7bab,	// (0x00075cbe) list_cset_text2_pane_t1_ParamLimits

0x7bab,	// (0x00075cbe) list_cset_text2_pane_t1

0x95c7,	// (0x000776da) main_radioblah_pane_ParamLimits

0x78af,	// (0x000759c2) main_mobtv_info_pane_t3_ParamLimits

0x78af,	// (0x000759c2) main_mobtv_info_pane_t3

0x7a69,	// (0x00075b7c) main_radioblah_pane_g1

0x7aa3,	// (0x00075bb6) main_radioblah_info_pane_g1

0x7b28,	// (0x00075c3b) main_radioblah_info_pane_t3_ParamLimits

0x7b28,	// (0x00075c3b) main_radioblah_info_pane_t3

0x20b0,	// (0x000701c3) highlight_cell_cale_month_pane_ParamLimits

0x20b0,	// (0x000701c3) highlight_cell_cale_month_pane

0x956e,	// (0x00077681) main_phob_fisheye_pane

0xcf7f,	// (0x0007b092) scroll_pane_cp0031_ParamLimits

0xcf7f,	// (0x0007b092) scroll_pane_cp0031

0xdea5,	// (0x0007bfb8) wait_bar_pane_cp08_ParamLimits

0x2190,	// (0x000702a3) cset_list_set_pane_copy1_ParamLimits

0xe611,	// (0x0007c724) highlight_cell_cale_month_pane_g1

0x7bc4,	// (0x00075cd7) highlight_cell_cale_month_pane_t1

0xdb34,	// (0x0007bc47) list_gen_pane_cp01

0xd7a1,	// (0x0007b8b4) scroll_pane_01

0x7bd2,	// (0x00075ce5) list_single_double_fisheye_pane

0x7bdb,	// (0x00075cee) list_double_fisheye_pane_g1_ParamLimits

0x7bdb,	// (0x00075cee) list_double_fisheye_pane_g1

0x7be7,	// (0x00075cfa) list_double_fisheye_pane_g2_ParamLimits

0x7be7,	// (0x00075cfa) list_double_fisheye_pane_g2

0x7bfb,	// (0x00075d0e) list_double_fisheye_pane_g3_ParamLimits

0x7bfb,	// (0x00075d0e) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x0007ddbc) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x0007ddbc) list_double_fisheye_pane_g

0x7c24,	// (0x00075d37) list_double_fisheye_pane_t1_ParamLimits

0x7c24,	// (0x00075d37) list_double_fisheye_pane_t1

0x7c3f,	// (0x00075d52) list_double_fisheye_pane_t2_ParamLimits

0x7c3f,	// (0x00075d52) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x0007ddc7) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x0007ddc7) list_double_fisheye_pane_t

0x956e,	// (0x00077681) main_call5_pane

0x79a4,	// (0x00075ab7) sc_swipe_pane_ParamLimits

0x79a4,	// (0x00075ab7) sc_swipe_pane

0x7c74,	// (0x00075d87) call5_image_pane_ParamLimits

0x7c74,	// (0x00075d87) call5_image_pane

0x7c91,	// (0x00075da4) call5_swipe_1_pane_ParamLimits

0x7c91,	// (0x00075da4) call5_swipe_1_pane

0x7ca4,	// (0x00075db7) call5_swipe_2_pane_ParamLimits

0x7ca4,	// (0x00075db7) call5_swipe_2_pane

0x7cd1,	// (0x00075de4) popup_call5_audio_first_window_ParamLimits

0x7cd1,	// (0x00075de4) popup_call5_audio_first_window

0xce9b,	// (0x0007afae) call5_swipe_1_pane_g1_ParamLimits

0xce9b,	// (0x0007afae) call5_swipe_1_pane_g1

0xe619,	// (0x0007c72c) call5_swipe_1_pane_g2_ParamLimits

0xe619,	// (0x0007c72c) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x0007ddcc) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x0007ddcc) call5_swipe_1_pane_g

0xe625,	// (0x0007c738) call5_swipe_1_pane_t1_ParamLimits

0xe625,	// (0x0007c738) call5_swipe_1_pane_t1

0xce9b,	// (0x0007afae) call5_swipe_2_pane_g1_ParamLimits

0xce9b,	// (0x0007afae) call5_swipe_2_pane_g1

0xe63a,	// (0x0007c74d) call5_swipe_2_pane_g2_ParamLimits

0xe63a,	// (0x0007c74d) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x0007ddd1) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x0007ddd1) call5_swipe_2_pane_g

0xe646,	// (0x0007c759) call5_swipe_2_pane_t1_ParamLimits

0xe646,	// (0x0007c759) call5_swipe_2_pane_t1

0xe65b,	// (0x0007c76e) sc_swipe_pane_g1_ParamLimits

0xe65b,	// (0x0007c76e) sc_swipe_pane_g1

0xe668,	// (0x0007c77b) sc_swipe_pane_g2_ParamLimits

0xe668,	// (0x0007c77b) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x0007ddd6) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x0007ddd6) sc_swipe_pane_g

0xe674,	// (0x0007c787) sc_swipe_pane_t1_ParamLimits

0xe674,	// (0x0007c787) sc_swipe_pane_t1

0x956e,	// (0x00077681) main_cmail_launcher_pane

0x7ce6,	// (0x00075df9) aid_size_cell_cmail_l_ParamLimits

0x7ce6,	// (0x00075df9) aid_size_cell_cmail_l

0x7d00,	// (0x00075e13) grid_cmail_l_pane_ParamLimits

0x7d00,	// (0x00075e13) grid_cmail_l_pane

0x7d1b,	// (0x00075e2e) cell_cmail_l_pane_ParamLimits

0x7d1b,	// (0x00075e2e) cell_cmail_l_pane

0x7d43,	// (0x00075e56) cell_cmail_l_pane_g1_ParamLimits

0x7d43,	// (0x00075e56) cell_cmail_l_pane_g1

0x7d4f,	// (0x00075e62) cell_cmail_l_pane_t1_ParamLimits

0x7d4f,	// (0x00075e62) cell_cmail_l_pane_t1

0xe689,	// (0x0007c79c) cell_cmail_l_pane_t2_ParamLimits

0xe689,	// (0x0007c79c) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x0007dddb) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x0007dddb) cell_cmail_l_pane_t

0x95c7,	// (0x000776da) grid_highlight_pane_cp018_ParamLimits

0x95c7,	// (0x000776da) grid_highlight_pane_cp018

0xfd1f,	// (0x0006de32) main2_pane_ParamLimits

0xfd1f,	// (0x0006de32) main2_pane

0xa957,	// (0x00078a6a) popup_sp_fs_action_menu_bg_pane_g1

0xa95f,	// (0x00078a72) popup_sp_fs_action_menu_bg_pane_g2

0xa967,	// (0x00078a7a) popup_sp_fs_action_menu_bg_pane_g3

0xa96f,	// (0x00078a82) popup_sp_fs_action_menu_bg_pane_g4

0xa977,	// (0x00078a8a) popup_sp_fs_action_menu_bg_pane_g5

0xa97f,	// (0x00078a92) popup_sp_fs_action_menu_bg_pane_g6

0xa987,	// (0x00078a9a) popup_sp_fs_action_menu_bg_pane_g7

0xa98f,	// (0x00078aa2) popup_sp_fs_action_menu_bg_pane_g8

0xa997,	// (0x00078aaa) popup_sp_fs_action_menu_bg_pane_g9

0xa99f,	// (0x00078ab2) popup_sp_fs_action_menu_bg_pane_g10

0xa99f,	// (0x00078ab2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0007d299) popup_sp_fs_action_menu_bg_pane_g

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t3_g3_g1

0x0f30,	// (0x0006f043) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0f30,	// (0x0006f043) list_medium_line_x2_t3_g3_g2

0x9dce,	// (0x00077ee1) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9dce,	// (0x00077ee1) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0007d34b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0007d34b) list_medium_line_x2_t3_g3_g

0x0f3c,	// (0x0006f04f) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0f3c,	// (0x0006f04f) list_medium_line_x2_t3_g3_t1

0x0f51,	// (0x0006f064) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0f51,	// (0x0006f064) list_medium_line_x2_t3_g3_t2

0x0f65,	// (0x0006f078) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0f65,	// (0x0006f078) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0007d352) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0007d352) list_medium_line_x2_t3_g3_t

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t3_g2_g1

0x9dce,	// (0x00077ee1) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9dce,	// (0x00077ee1) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0007d359) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0007d359) list_medium_line_x2_t3_g2_g

0x0f7a,	// (0x0006f08d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0f7a,	// (0x0006f08d) list_medium_line_x2_t3_g2_t1

0x0f90,	// (0x0006f0a3) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0f90,	// (0x0006f0a3) list_medium_line_x2_t3_g2_t2

0x0fa2,	// (0x0006f0b5) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0fa2,	// (0x0006f0b5) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0007d35e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0007d35e) list_medium_line_x2_t3_g2_t

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t4_g4_g1

0x0fc0,	// (0x0006f0d3) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0fc0,	// (0x0006f0d3) list_medium_line_x2_t4_g4_g2

0x0f30,	// (0x0006f043) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0f30,	// (0x0006f043) list_medium_line_x2_t4_g4_g3

0x9dda,	// (0x00077eed) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9dda,	// (0x00077eed) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0007d365) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0007d365) list_medium_line_x2_t4_g4_g

0x0fcc,	// (0x0006f0df) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0fcc,	// (0x0006f0df) list_medium_line_x2_t4_g4_t1

0x0fe6,	// (0x0006f0f9) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0fe6,	// (0x0006f0f9) list_medium_line_x2_t4_g4_t2

0x0ffc,	// (0x0006f10f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0ffc,	// (0x0006f10f) list_medium_line_x2_t4_g4_t3

0x1011,	// (0x0006f124) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1011,	// (0x0006f124) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0007d36e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0007d36e) list_medium_line_x2_t4_g4_t

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t2_g4_g1

0x0fc0,	// (0x0006f0d3) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0fc0,	// (0x0006f0d3) list_medium_line_x2_t2_g4_g2

0x0f30,	// (0x0006f043) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0f30,	// (0x0006f043) list_medium_line_x2_t2_g4_g3

0x9dce,	// (0x00077ee1) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9dce,	// (0x00077ee1) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0007d3d5) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0007d3d5) list_medium_line_x2_t2_g4_g

0x20d6,	// (0x000701e9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x20d6,	// (0x000701e9) list_medium_line_x2_t2_g4_t1

0x0f65,	// (0x0006f078) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0f65,	// (0x0006f078) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0007d3de) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0007d3de) list_medium_line_x2_t2_g4_t

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t2_g3_g1

0x0f30,	// (0x0006f043) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0f30,	// (0x0006f043) list_medium_line_x2_t2_g3_g2

0x9dce,	// (0x00077ee1) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9dce,	// (0x00077ee1) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0007d34b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0007d34b) list_medium_line_x2_t2_g3_g

0x20eb,	// (0x000701fe) list_medium_line_x2_t2_g3_t1_ParamLimits

0x20eb,	// (0x000701fe) list_medium_line_x2_t2_g3_t1

0x0f65,	// (0x0006f078) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0f65,	// (0x0006f078) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0007d3e3) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0007d3e3) list_medium_line_x2_t2_g3_t

0x2235,	// (0x00070348) main_sp_fs_list_pane_ParamLimits

0x2235,	// (0x00070348) main_sp_fs_list_pane

0x2241,	// (0x00070354) sp_fs_scroll_pane_ParamLimits

0x2241,	// (0x00070354) sp_fs_scroll_pane

0x224d,	// (0x00070360) list_medium_line_x2_t3_t1

0x225d,	// (0x00070370) list_medium_line_x2_t3_t2

0x226b,	// (0x0007037e) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0007d42e) list_medium_line_x2_t3_t

0x2279,	// (0x0007038c) list_medium_line_x3_t4_t1

0x2289,	// (0x0007039c) list_medium_line_x3_t4_t2

0x2297,	// (0x000703aa) list_medium_line_x3_t4_t3

0x226b,	// (0x0007037e) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0007d435) list_medium_line_x3_t4_t

0x22a5,	// (0x000703b8) list_medium_line_x4_t5_t1

0x22b5,	// (0x000703c8) list_medium_line_x4_t5_t2

0x2297,	// (0x000703aa) list_medium_line_x4_t5_t3

0x22c3,	// (0x000703d6) list_medium_line_x4_t5_t4

0x226b,	// (0x0007037e) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0007d43e) list_medium_line_x4_t5_t

0x9dc2,	// (0x00077ed5) list_medium_line_t4_g4_g1_ParamLimits

0x9dc2,	// (0x00077ed5) list_medium_line_t4_g4_g1

0x9dda,	// (0x00077eed) list_medium_line_t4_g4_g2_ParamLimits

0x9dda,	// (0x00077eed) list_medium_line_t4_g4_g2

0x22d1,	// (0x000703e4) list_medium_line_t4_g4_g3_ParamLimits

0x22d1,	// (0x000703e4) list_medium_line_t4_g4_g3

0x9dce,	// (0x00077ee1) list_medium_line_t4_g4_g4_ParamLimits

0x9dce,	// (0x00077ee1) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0007d449) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0007d449) list_medium_line_t4_g4_g

0x22dd,	// (0x000703f0) list_medium_line_t4_g4_t1_ParamLimits

0x22dd,	// (0x000703f0) list_medium_line_t4_g4_t1

0x22f2,	// (0x00070405) list_medium_line_t4_g4_t2_ParamLimits

0x22f2,	// (0x00070405) list_medium_line_t4_g4_t2

0x2308,	// (0x0007041b) list_medium_line_t4_g4_t3_ParamLimits

0x2308,	// (0x0007041b) list_medium_line_t4_g4_t3

0x0f65,	// (0x0006f078) list_medium_line_t4_g4_t4_ParamLimits

0x0f65,	// (0x0006f078) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0007d452) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0007d452) list_medium_line_t4_g4_t

0x23e4,	// (0x000704f7) chi_dic_find_pane_g1

0x360b,	// (0x0007171e) main_tport_pane

0x6604,	// (0x00074717) list_medium_line_plain_t1

0x66b8,	// (0x000747cb) list_medium_line_t2_g2_g1_ParamLimits

0x66b8,	// (0x000747cb) list_medium_line_t2_g2_g1

0x66c4,	// (0x000747d7) list_medium_line_t2_g2_g2_ParamLimits

0x66c4,	// (0x000747d7) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0007db13) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0007db13) list_medium_line_t2_g2_g

0x66d0,	// (0x000747e3) list_medium_line_t2_g2_t1_ParamLimits

0x66d0,	// (0x000747e3) list_medium_line_t2_g2_t1

0x66e7,	// (0x000747fa) list_medium_line_t2_g2_t2_ParamLimits

0x66e7,	// (0x000747fa) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0007db18) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0007db18) list_medium_line_t2_g2_t

0xa50d,	// (0x00078620) aid_sp_fs_list_icon_a_sm

0xa515,	// (0x00078628) aid_sp_fs_list_icon_d

0xa51d,	// (0x00078630) aid_sp_fs_text_primary

0xa526,	// (0x00078639) aid_sp_fs_text_secondary

0x6d61,	// (0x00074e74) list_medium_line

0x6d61,	// (0x00074e74) list_medium_line_g2

0x6d61,	// (0x00074e74) list_medium_line_g3

0x6d61,	// (0x00074e74) list_medium_line_plain

0x6d61,	// (0x00074e74) list_medium_line_plain_t2

0x6d61,	// (0x00074e74) list_medium_line_plain_t3

0x6d61,	// (0x00074e74) list_medium_line_right_icon

0x6d61,	// (0x00074e74) list_medium_line_right_iconx2

0x6d61,	// (0x00074e74) list_medium_line_t2

0x6d61,	// (0x00074e74) list_medium_line_t2_g2

0x6d61,	// (0x00074e74) list_medium_line_t2_g3

0x6d61,	// (0x00074e74) list_medium_line_t2_right_icon

0x6d61,	// (0x00074e74) list_medium_line_t2_right_iconx2

0x6d61,	// (0x00074e74) list_medium_line_t3

0x6d61,	// (0x00074e74) list_medium_line_t3_g2

0x6d61,	// (0x00074e74) list_medium_line_t3_g3

0x6d61,	// (0x00074e74) list_medium_line_t3_right_iconx2

0x6d6a,	// (0x00074e7d) list_medium_line_t4_g4

0x6d73,	// (0x00074e86) list_medium_line_x2

0x6d73,	// (0x00074e86) list_medium_line_x2_t2_g2

0x6d73,	// (0x00074e86) list_medium_line_x2_t2_g3

0x6d73,	// (0x00074e86) list_medium_line_x2_t2_g4

0x6d73,	// (0x00074e86) list_medium_line_x2_t3

0x6d73,	// (0x00074e86) list_medium_line_x2_t3_g2

0x6d73,	// (0x00074e86) list_medium_line_x2_t3_g3

0x6d73,	// (0x00074e86) list_medium_line_x2_t3_g4

0x6d73,	// (0x00074e86) list_medium_line_x2_t4_g2

0x6d73,	// (0x00074e86) list_medium_line_x2_t4_g4

0x6d7c,	// (0x00074e8f) list_medium_line_x3

0x6d7c,	// (0x00074e8f) list_medium_line_x3_t4

0x6d7c,	// (0x00074e8f) list_medium_line_x3_t4_g4

0x6d6a,	// (0x00074e7d) list_medium_line_x4_t4

0x6d6a,	// (0x00074e7d) list_medium_line_x4_t4_g7

0x6d6a,	// (0x00074e7d) list_medium_line_x4_t5

0x6d85,	// (0x00074e98) list_single_fs_dyc_pane_ParamLimits

0x6d85,	// (0x00074e98) list_single_fs_dyc_pane

0x9dc2,	// (0x00077ed5) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9dc2,	// (0x00077ed5) list_medium_line_x4_t4_g7_g1

0xa53d,	// (0x00078650) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa53d,	// (0x00078650) list_medium_line_x4_t4_g7_g2

0x74d6,	// (0x000755e9) list_medium_line_x4_t4_g7_g3_ParamLimits

0x74d6,	// (0x000755e9) list_medium_line_x4_t4_g7_g3

0x74e5,	// (0x000755f8) list_medium_line_x4_t4_g7_g4_ParamLimits

0x74e5,	// (0x000755f8) list_medium_line_x4_t4_g7_g4

0x74f1,	// (0x00075604) list_medium_line_x4_t4_g7_g5_ParamLimits

0x74f1,	// (0x00075604) list_medium_line_x4_t4_g7_g5

0x7500,	// (0x00075613) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7500,	// (0x00075613) list_medium_line_x4_t4_g7_g6

0xa549,	// (0x0007865c) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa549,	// (0x0007865c) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x0007dce3) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x0007dce3) list_medium_line_x4_t4_g7_g

0x750f,	// (0x00075622) list_medium_line_x4_t4_g7_t1_ParamLimits

0x750f,	// (0x00075622) list_medium_line_x4_t4_g7_t1

0x7524,	// (0x00075637) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7524,	// (0x00075637) list_medium_line_x4_t4_g7_t2

0x7539,	// (0x0007564c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7539,	// (0x0007564c) list_medium_line_x4_t4_g7_t3

0x754e,	// (0x00075661) list_medium_line_x4_t4_g7_t4_ParamLimits

0x754e,	// (0x00075661) list_medium_line_x4_t4_g7_t4

0xa555,	// (0x00078668) list_medium_line_x4_t4_g7_t5_ParamLimits

0xa555,	// (0x00078668) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x0007dcf2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x0007dcf2) list_medium_line_x4_t4_g7_t

0x7560,	// (0x00075673) list_single_dyc_row_pane_ParamLimits

0x7560,	// (0x00075673) list_single_dyc_row_pane

0x7c61,	// (0x00075d74) call5_gesture_pane_ParamLimits

0x7c61,	// (0x00075d74) call5_gesture_pane

0x7cb7,	// (0x00075dca) call5_windows_pane_ParamLimits

0x7cb7,	// (0x00075dca) call5_windows_pane

0x7d65,	// (0x00075e78) call5_swipe_1_pane_cp_ParamLimits

0x7d65,	// (0x00075e78) call5_swipe_1_pane_cp

0x7d71,	// (0x00075e84) call5_swipe_2_pane_cp_ParamLimits

0x7d71,	// (0x00075e84) call5_swipe_2_pane_cp

0xb3ae,	// (0x000794c1) call5_image_pane_cp

0x7d7d,	// (0x00075e90) popup_call5_audio_first_window_cp_ParamLimits

0x7d7d,	// (0x00075e90) popup_call5_audio_first_window_cp

0xe65b,	// (0x0007c76e) call5_swipe_1_pane_g1_cp_ParamLimits

0xe65b,	// (0x0007c76e) call5_swipe_1_pane_g1_cp

0xe69b,	// (0x0007c7ae) call5_swipe_1_pane_g2_cp

0xe674,	// (0x0007c787) call5_swipe_1_pane_t1_cp_ParamLimits

0xe674,	// (0x0007c787) call5_swipe_1_pane_t1_cp

0xe65b,	// (0x0007c76e) call5_swipe_2_pane_g1_cp_ParamLimits

0xe65b,	// (0x0007c76e) call5_swipe_2_pane_g1_cp

0xe6a3,	// (0x0007c7b6) call5_swipe_2_pane_g2_cp

0xe6ab,	// (0x0007c7be) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6ab,	// (0x0007c7be) call5_swipe_2_pane_t1_cp

0x95c7,	// (0x000776da) main_sp_fs_email_pane

0xe6c0,	// (0x0007c7d3) main_sp_fs_listscroll_pane_te

0xa567,	// (0x0007867a) popup_sp_fs_action_menu_pane_ParamLimits

0xa567,	// (0x0007867a) popup_sp_fs_action_menu_pane

0xcc6b,	// (0x0007ad7e) bg_sp_fs_ctrlbar_pane_g1

0xd220,	// (0x0007b333) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd232,	// (0x0007b345) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd229,	// (0x0007b33c) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc6b,	// (0x0007ad7e) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x0007dde0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xca4a,	// (0x0007ab5d) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xca4a,	// (0x0007ab5d) bg_sp_fs_ctrlbar_ddmenu_pane

0xe6c9,	// (0x0007c7dc) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe6c9,	// (0x0007c7dc) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6d5,	// (0x0007c7e8) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6d5,	// (0x0007c7e8) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x0007dde9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x0007dde9) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6e1,	// (0x0007c7f4) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6e1,	// (0x0007c7f4) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x7d8b,	// (0x00075e9e) list_medium_line_t2_right_icon_g1

0x7d93,	// (0x00075ea6) list_medium_line_t2_right_icon_t1

0x7da3,	// (0x00075eb6) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x0007ddee) list_medium_line_t2_right_icon_t

0xc81a,	// (0x0007a92d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc81a,	// (0x0007a92d) bg_sp_fs_ctrlbar_pane

0x7e02,	// (0x00075f15) main_sp_fs_ctrlbar_button_pane_cp01

0x7e0c,	// (0x00075f1f) main_sp_fs_ctrlbar_ddmenu_pane

0xe2af,	// (0x0007c3c2) main_sp_fs_ctrlbar_pane_g1

0xe733,	// (0x0007c846) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x0007ddf3) main_sp_fs_ctrlbar_pane_g

0xe73f,	// (0x0007c852) main_sp_fs_ctrlbar_pane_t1

0x7e16,	// (0x00075f29) main_sp_fs_ctrlbar_pane

0x7e3a,	// (0x00075f4d) main_sp_fs_listscroll_pane_te_cp01

0x7e5a,	// (0x00075f6d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7e5a,	// (0x00075f6d) popup_sp_fs_action_menu_pane_cp01

0x95c7,	// (0x000776da) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x95c7,	// (0x000776da) bg_sp_fs_highlight_list_pane_cp01

0xa5ad,	// (0x000786c0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa5ad,	// (0x000786c0) sp_fs_action_menu_list_gene_pane_g1

0xe76f,	// (0x0007c882) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe76f,	// (0x0007c882) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x0007ddfd) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x0007ddfd) sp_fs_action_menu_list_gene_pane_g

0xa5bc,	// (0x000786cf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa5bc,	// (0x000786cf) sp_fs_action_menu_list_gene_pane_t1

0xa5d4,	// (0x000786e7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa5d4,	// (0x000786e7) sp_fs_action_menu_list_gene_pane

0xe77c,	// (0x0007c88f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe77c,	// (0x0007c88f) popup_sp_fs_action_menu_bg_pane

0xa5f7,	// (0x0007870a) sp_fs_action_menu_list_pane_ParamLimits

0xa5f7,	// (0x0007870a) sp_fs_action_menu_list_pane

0xe78a,	// (0x0007c89d) sp_fs_scroll_pane_cp01_ParamLimits

0xe78a,	// (0x0007c89d) sp_fs_scroll_pane_cp01

0x7e8a,	// (0x00075f9d) list_medium_line_plain_t2_t1

0x7e9a,	// (0x00075fad) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x0007de02) list_medium_line_plain_t2_t

0x7eaa,	// (0x00075fbd) list_medium_line_plain_t3_t1

0x7eba,	// (0x00075fcd) list_medium_line_plain_t3_t2

0x7ec8,	// (0x00075fdb) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x0007de07) list_medium_line_plain_t3_t

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t2_g2_g1

0x9dce,	// (0x00077ee1) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9dce,	// (0x00077ee1) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0007d359) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0007d359) list_medium_line_x2_t2_g2_g

0x22dd,	// (0x000703f0) list_medium_line_x2_t2_g2_t1_ParamLimits

0x22dd,	// (0x000703f0) list_medium_line_x2_t2_g2_t1

0x0f65,	// (0x0006f078) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0f65,	// (0x0006f078) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x0007de0e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x0007de0e) list_medium_line_x2_t2_g2_t

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t4_g2_g1

0xa61b,	// (0x0007872e) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa61b,	// (0x0007872e) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x0007de13) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x0007de13) list_medium_line_x2_t4_g2_g

0x7ed6,	// (0x00075fe9) list_medium_line_x2_t4_g2_t1_ParamLimits

0x7ed6,	// (0x00075fe9) list_medium_line_x2_t4_g2_t1

0x7ef0,	// (0x00076003) list_medium_line_x2_t4_g2_t2_ParamLimits

0x7ef0,	// (0x00076003) list_medium_line_x2_t4_g2_t2

0x7f06,	// (0x00076019) list_medium_line_x2_t4_g2_t3_ParamLimits

0x7f06,	// (0x00076019) list_medium_line_x2_t4_g2_t3

0x0f65,	// (0x0006f078) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0f65,	// (0x0006f078) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x0007de18) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x0007de18) list_medium_line_x2_t4_g2_t

0x7f1b,	// (0x0007602e) list_medium_line_t3_right_iconx2_g1

0x7d8b,	// (0x00075e9e) list_medium_line_t3_right_iconx2_g2

0x7f23,	// (0x00076036) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x0007de21) list_medium_line_t3_right_iconx2_g

0x7f2d,	// (0x00076040) list_medium_line_t3_right_iconx2_t1

0x7f3d,	// (0x00076050) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x0007de28) list_medium_line_t3_right_iconx2_t

0x9dc2,	// (0x00077ed5) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9dc2,	// (0x00077ed5) list_medium_line_x3_t4_g4_g1

0x0f30,	// (0x0006f043) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0f30,	// (0x0006f043) list_medium_line_x3_t4_g4_g2

0x9dda,	// (0x00077eed) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9dda,	// (0x00077eed) list_medium_line_x3_t4_g4_g3

0x7f4b,	// (0x0007605e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x7f4b,	// (0x0007605e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x0007de2d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x0007de2d) list_medium_line_x3_t4_g4_g

0x7f57,	// (0x0007606a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x7f57,	// (0x0007606a) list_medium_line_x3_t4_g4_t1

0x7f6e,	// (0x00076081) list_medium_line_x3_t4_g4_t2_ParamLimits

0x7f6e,	// (0x00076081) list_medium_line_x3_t4_g4_t2

0x7f89,	// (0x0007609c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x7f89,	// (0x0007609c) list_medium_line_x3_t4_g4_t3

0x7f9e,	// (0x000760b1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x7f9e,	// (0x000760b1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x0007de36) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x0007de36) list_medium_line_x3_t4_g4_t

0x7fbb,	// (0x000760ce) list_single_dyc_row_text_pane_t1_ParamLimits

0x7fbb,	// (0x000760ce) list_single_dyc_row_text_pane_t1

0x8004,	// (0x00076117) list_single_dyc_row_text_pane_t2_ParamLimits

0x8004,	// (0x00076117) list_single_dyc_row_text_pane_t2

0xa62d,	// (0x00078740) list_single_dyc_row_text_pane_t3_ParamLimits

0xa62d,	// (0x00078740) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x0007de3f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x0007de3f) list_single_dyc_row_text_pane_t

0xa651,	// (0x00078764) list_single_dyc_row_pane_g1_ParamLimits

0xa651,	// (0x00078764) list_single_dyc_row_pane_g1

0xa65d,	// (0x00078770) list_single_dyc_row_pane_g2_ParamLimits

0xa65d,	// (0x00078770) list_single_dyc_row_pane_g2

0xa669,	// (0x0007877c) list_single_dyc_row_pane_g3_ParamLimits

0xa669,	// (0x0007877c) list_single_dyc_row_pane_g3

0xa675,	// (0x00078788) list_single_dyc_row_pane_g4_ParamLimits

0xa675,	// (0x00078788) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x0007de4c) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x0007de4c) list_single_dyc_row_pane_g

0xa681,	// (0x00078794) list_single_dyc_row_text_pane_ParamLimits

0xa681,	// (0x00078794) list_single_dyc_row_text_pane

0x956e,	// (0x00077681) bg_sp_fs_scroll_pane

0xe7b0,	// (0x0007c8c3) thumb_sp_fs_scroll_pane

0x66b8,	// (0x000747cb) list_medium_line_g1_ParamLimits

0x66b8,	// (0x000747cb) list_medium_line_g1

0x8139,	// (0x0007624c) list_medium_line_t1_ParamLimits

0x8139,	// (0x0007624c) list_medium_line_t1

0x9dc2,	// (0x00077ed5) list_medium_line_x2_g1_ParamLimits

0x9dc2,	// (0x00077ed5) list_medium_line_x2_g1

0x0f30,	// (0x0006f043) list_medium_line_x2_g2_ParamLimits

0x0f30,	// (0x0006f043) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x0007de55) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x0007de55) list_medium_line_x2_g

0xa6a0,	// (0x000787b3) list_medium_line_x2_t1_ParamLimits

0xa6a0,	// (0x000787b3) list_medium_line_x2_t1

0x9dc2,	// (0x00077ed5) list_medium_line_x3_g1_ParamLimits

0x9dc2,	// (0x00077ed5) list_medium_line_x3_g1

0x0f30,	// (0x0006f043) list_medium_line_x3_g2_ParamLimits

0x0f30,	// (0x0006f043) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x0007de55) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x0007de55) list_medium_line_x3_g

0xa6a0,	// (0x000787b3) list_medium_line_x3_t1_ParamLimits

0xa6a0,	// (0x000787b3) list_medium_line_x3_t1

0xe7b9,	// (0x0007c8cc) thumb_sp_fs_scroll_pane_g1

0xe7c2,	// (0x0007c8d5) thumb_sp_fs_scroll_pane_g2

0xe7cb,	// (0x0007c8de) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007de5a) thumb_sp_fs_scroll_pane_g

0xe7b9,	// (0x0007c8cc) bg_sp_fs_scroll_pane_g1

0xe7c2,	// (0x0007c8d5) bg_sp_fs_scroll_pane_g2

0xe7cb,	// (0x0007c8de) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x0007de5a) bg_sp_fs_scroll_pane_g

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9dc2,	// (0x00077ed5) list_medium_line_x2_t3_g4_g1

0x0fc0,	// (0x0006f0d3) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0fc0,	// (0x0006f0d3) list_medium_line_x2_t3_g4_g2

0x0f30,	// (0x0006f043) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0f30,	// (0x0006f043) list_medium_line_x2_t3_g4_g3

0x9dce,	// (0x00077ee1) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9dce,	// (0x00077ee1) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0007d3d5) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0007d3d5) list_medium_line_x2_t3_g4_g

0x814e,	// (0x00076261) list_medium_line_x2_t3_g4_t1_ParamLimits

0x814e,	// (0x00076261) list_medium_line_x2_t3_g4_t1

0x8164,	// (0x00076277) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8164,	// (0x00076277) list_medium_line_x2_t3_g4_t2

0x0f65,	// (0x0006f078) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0f65,	// (0x0006f078) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x0007de61) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x0007de61) list_medium_line_x2_t3_g4_t

0x66b8,	// (0x000747cb) list_medium_line_g2_g1_ParamLimits

0x66b8,	// (0x000747cb) list_medium_line_g2_g1

0x66c4,	// (0x000747d7) list_medium_line_g2_g2_ParamLimits

0x66c4,	// (0x000747d7) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0007db13) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0007db13) list_medium_line_g2_g

0x817d,	// (0x00076290) list_medium_line_g2_t1_ParamLimits

0x817d,	// (0x00076290) list_medium_line_g2_t1

0x66b8,	// (0x000747cb) list_medium_line_t3_g2_g1_ParamLimits

0x66b8,	// (0x000747cb) list_medium_line_t3_g2_g1

0x66c4,	// (0x000747d7) list_medium_line_t3_g2_g2_ParamLimits

0x66c4,	// (0x000747d7) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0007db13) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0007db13) list_medium_line_t3_g2_g

0x8192,	// (0x000762a5) list_medium_line_t3_g2_t1_ParamLimits

0x8192,	// (0x000762a5) list_medium_line_t3_g2_t1

0x81ac,	// (0x000762bf) list_medium_line_t3_g2_t2_ParamLimits

0x81ac,	// (0x000762bf) list_medium_line_t3_g2_t2

0x81c2,	// (0x000762d5) list_medium_line_t3_g2_t3_ParamLimits

0x81c2,	// (0x000762d5) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x0007de68) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x0007de68) list_medium_line_t3_g2_t

0x7d8b,	// (0x00075e9e) list_medium_line_right_icon_g1

0x81d9,	// (0x000762ec) list_medium_line_right_icon_t1

0x66b8,	// (0x000747cb) list_medium_line_t2_g1_ParamLimits

0x66b8,	// (0x000747cb) list_medium_line_t2_g1

0x81e7,	// (0x000762fa) list_medium_line_t2_t1_ParamLimits

0x81e7,	// (0x000762fa) list_medium_line_t2_t1

0x8201,	// (0x00076314) list_medium_line_t2_t2_ParamLimits

0x8201,	// (0x00076314) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x0007de6f) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x0007de6f) list_medium_line_t2_t

0x66b8,	// (0x000747cb) list_medium_line_t3_g1_ParamLimits

0x66b8,	// (0x000747cb) list_medium_line_t3_g1

0x821a,	// (0x0007632d) list_medium_line_t3_t1_ParamLimits

0x821a,	// (0x0007632d) list_medium_line_t3_t1

0x8234,	// (0x00076347) list_medium_line_t3_t2_ParamLimits

0x8234,	// (0x00076347) list_medium_line_t3_t2

0x824a,	// (0x0007635d) list_medium_line_t3_t3_ParamLimits

0x824a,	// (0x0007635d) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x0007de74) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x0007de74) list_medium_line_t3_t

0x66b8,	// (0x000747cb) list_medium_line_g3_g1_ParamLimits

0x66b8,	// (0x000747cb) list_medium_line_g3_g1

0x825f,	// (0x00076372) list_medium_line_g3_g2_ParamLimits

0x825f,	// (0x00076372) list_medium_line_g3_g2

0x66c4,	// (0x000747d7) list_medium_line_g3_g3_ParamLimits

0x66c4,	// (0x000747d7) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x0007de7b) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x0007de7b) list_medium_line_g3_g

0x826b,	// (0x0007637e) list_medium_line_g3_t1_ParamLimits

0x826b,	// (0x0007637e) list_medium_line_g3_t1

0x66b8,	// (0x000747cb) list_medium_line_t2_g3_g1_ParamLimits

0x66b8,	// (0x000747cb) list_medium_line_t2_g3_g1

0x825f,	// (0x00076372) list_medium_line_t2_g3_g2_ParamLimits

0x825f,	// (0x00076372) list_medium_line_t2_g3_g2

0x66c4,	// (0x000747d7) list_medium_line_t2_g3_g3_ParamLimits

0x66c4,	// (0x000747d7) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x0007de7b) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x0007de7b) list_medium_line_t2_g3_g

0x8280,	// (0x00076393) list_medium_line_t2_g3_t1_ParamLimits

0x8280,	// (0x00076393) list_medium_line_t2_g3_t1

0x8297,	// (0x000763aa) list_medium_line_t2_g3_t2_ParamLimits

0x8297,	// (0x000763aa) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x0007de82) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x0007de82) list_medium_line_t2_g3_t

0x66b8,	// (0x000747cb) list_medium_line_t3_g3_g1_ParamLimits

0x66b8,	// (0x000747cb) list_medium_line_t3_g3_g1

0x825f,	// (0x00076372) list_medium_line_t3_g3_g2_ParamLimits

0x825f,	// (0x00076372) list_medium_line_t3_g3_g2

0x66c4,	// (0x000747d7) list_medium_line_t3_g3_g3_ParamLimits

0x66c4,	// (0x000747d7) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x0007de7b) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x0007de7b) list_medium_line_t3_g3_g

0x82b0,	// (0x000763c3) list_medium_line_t3_g3_t1_ParamLimits

0x82b0,	// (0x000763c3) list_medium_line_t3_g3_t1

0x82c9,	// (0x000763dc) list_medium_line_t3_g3_t2_ParamLimits

0x82c9,	// (0x000763dc) list_medium_line_t3_g3_t2

0x82df,	// (0x000763f2) list_medium_line_t3_g3_t3_ParamLimits

0x82df,	// (0x000763f2) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x0007de87) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x0007de87) list_medium_line_t3_g3_t

0x7f1b,	// (0x0007602e) list_medium_line_right_iconx2_g1

0x7d8b,	// (0x00075e9e) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007de8e) list_medium_line_right_iconx2_g

0x82f9,	// (0x0007640c) list_medium_line_right_iconx2_t1

0x7f1b,	// (0x0007602e) list_medium_line_t2_right_iconx2_g1

0x7d8b,	// (0x00075e9e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x0007de8e) list_medium_line_t2_right_iconx2_g

0x8307,	// (0x0007641a) list_medium_line_t2_right_iconx2_t1

0x8317,	// (0x0007642a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x0007de93) list_medium_line_t2_right_iconx2_t

0x8329,	// (0x0007643c) list_medium_line_x4_t4_t1

0x8337,	// (0x0007644a) list_medium_line_x4_t4_t2

0x8347,	// (0x0007645a) list_medium_line_x4_t4_t3

0x8357,	// (0x0007646a) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x0007de98) list_medium_line_x4_t4_t

0x83aa,	// (0x000764bd) tport_appsw_pane_ParamLimits

0x83aa,	// (0x000764bd) tport_appsw_pane

0x83c2,	// (0x000764d5) tport_contact_pane_ParamLimits

0x83c2,	// (0x000764d5) tport_contact_pane

0x83da,	// (0x000764ed) tport_listscroll_pane_ParamLimits

0x83da,	// (0x000764ed) tport_listscroll_pane

0x83f4,	// (0x00076507) cell_tport_appsw_pane_ParamLimits

0x83f4,	// (0x00076507) cell_tport_appsw_pane

0xd663,	// (0x0007b776) tport_appsw_pane_g1_ParamLimits

0xd663,	// (0x0007b776) tport_appsw_pane_g1

0xe7d4,	// (0x0007c8e7) tport_contact_pane_g1

0xe7dd,	// (0x0007c8f0) tport_contact_pane_t1

0xe7eb,	// (0x0007c8fe) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x0007dea1) tport_contact_pane_t

0xe7f9,	// (0x0007c90c) list_tport_pane

0xe802,	// (0x0007c915) scroll_pane_cp_030

0x8446,	// (0x00076559) cell_tport_appsw_pane_g1

0x8456,	// (0x00076569) cell_tport_appsw_pane_t1

0x8464,	// (0x00076577) grid_highlight_pane_cp019

0x846c,	// (0x0007657f) list_tport_double_graphic_pane_ParamLimits

0x846c,	// (0x0007657f) list_tport_double_graphic_pane

0x95c7,	// (0x000776da) list_highlight_pane_cp023_ParamLimits

0x95c7,	// (0x000776da) list_highlight_pane_cp023

0x8479,	// (0x0007658c) list_tport_double_graphic_pane_g1_ParamLimits

0x8479,	// (0x0007658c) list_tport_double_graphic_pane_g1

0x8486,	// (0x00076599) list_tport_double_graphic_pane_t1_ParamLimits

0x8486,	// (0x00076599) list_tport_double_graphic_pane_t1

0x849b,	// (0x000765ae) list_tport_double_graphic_pane_t2_ParamLimits

0x849b,	// (0x000765ae) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x0007dead) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x0007dead) list_tport_double_graphic_pane_t

0x956e,	// (0x00077681) main_cale_note_pane

0x5e06,	// (0x00073f19) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x5e06,	// (0x00073f19) cell_vitu2_function_top_wide_pane_cp01

0x78c3,	// (0x000759d6) wait_bar_pane_cp05_ParamLimits

0x95c7,	// (0x000776da) listscroll_cmail_pane

0xe813,	// (0x0007c926) list_cmail_pane

0x84b7,	// (0x000765ca) list_cmail_body_pane

0xe82a,	// (0x0007c93d) list_single_cmail_header_caption_pane

0x84ca,	// (0x000765dd) list_single_cmail_header_detail_pane_ParamLimits

0x84ca,	// (0x000765dd) list_single_cmail_header_detail_pane

0x84f5,	// (0x00076608) list_single_cmail_header_caption_pane_t1

0x8505,	// (0x00076618) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8505,	// (0x00076618) list_single_cmail_header_detail_pane_g1

0xa6b6,	// (0x000787c9) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa6b6,	// (0x000787c9) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x0007deb2) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x0007deb2) list_single_cmail_header_detail_pane_g

0x851d,	// (0x00076630) list_single_cmail_header_detail_pane_t1_ParamLimits

0x851d,	// (0x00076630) list_single_cmail_header_detail_pane_t1

0x8567,	// (0x0007667a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8567,	// (0x0007667a) list_single_cmail_header_editor_pane_bg

0xe2fc,	// (0x0007c40f) list_cmail_body_pane_g1

0xe85b,	// (0x0007c96e) list_cmail_body_pane_t1

0xd683,	// (0x0007b796) list_single_cmail_header_editor_pane_bg_g1

0xacd5,	// (0x00078de8) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd693,	// (0x0007b7a6) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd68b,	// (0x0007b79e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd8ad,	// (0x0007b9c0) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd6b3,	// (0x0007b7c6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd6a3,	// (0x0007b7b6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd6ab,	// (0x0007b7be) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacb5,	// (0x00078dc8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8580,	// (0x00076693) calenote_gesture_pane_ParamLimits

0x8580,	// (0x00076693) calenote_gesture_pane

0x85a0,	// (0x000766b3) calenote_window_pane_ParamLimits

0x85a0,	// (0x000766b3) calenote_window_pane

0xe869,	// (0x0007c97c) popup_note_window_cp01

0x85bc,	// (0x000766cf) calenote_swipe_1_pane_ParamLimits

0x85bc,	// (0x000766cf) calenote_swipe_1_pane

0x7d71,	// (0x00075e84) calenote_swipe_2_pane_ParamLimits

0x7d71,	// (0x00075e84) calenote_swipe_2_pane

0xe65b,	// (0x0007c76e) calenote_swipe_1_pane_g1_ParamLimits

0xe65b,	// (0x0007c76e) calenote_swipe_1_pane_g1

0xe668,	// (0x0007c77b) calenote_swipe_1_pane_g2_ParamLimits

0xe668,	// (0x0007c77b) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x0007ddd6) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x0007ddd6) calenote_swipe_1_pane_g

0xe87b,	// (0x0007c98e) calenote_swipe_1_pane_t1_ParamLimits

0xe87b,	// (0x0007c98e) calenote_swipe_1_pane_t1

0xe65b,	// (0x0007c76e) calenote_swipe_2_pane_g1_ParamLimits

0xe65b,	// (0x0007c76e) calenote_swipe_2_pane_g1

0xe89a,	// (0x0007c9ad) calenote_swipe_2_pane_g2_ParamLimits

0xe89a,	// (0x0007c9ad) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x0007debe) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x0007debe) calenote_swipe_2_pane_g

0xe8a6,	// (0x0007c9b9) calenote_swipe_2_pane_t1_ParamLimits

0xe8a6,	// (0x0007c9b9) calenote_swipe_2_pane_t1

0x956e,	// (0x00077681) main_mup_navstr_pane

0x4a5e,	// (0x00072b71) main_mup3_pane_t7_ParamLimits

0x4a5e,	// (0x00072b71) main_mup3_pane_t7

0xa082,	// (0x00078195) main_mp4_pane_g6_ParamLimits

0xa082,	// (0x00078195) main_mp4_pane_g6

0xa226,	// (0x00078339) main_image3_pane_t4_ParamLimits

0xa226,	// (0x00078339) main_image3_pane_t4

0x85d1,	// (0x000766e4) popup_navstr_preview_pane_ParamLimits

0x85d1,	// (0x000766e4) popup_navstr_preview_pane

0x85e1,	// (0x000766f4) scroll_navstr_pane_ParamLimits

0x85e1,	// (0x000766f4) scroll_navstr_pane

0x956e,	// (0x00077681) bg_popup_preview_window_pane_cp04

0xe8cd,	// (0x0007c9e0) popup_navstr_preview_pane_t1

0x85f5,	// (0x00076708) scroll_navstr_pane_g1_ParamLimits

0x85f5,	// (0x00076708) scroll_navstr_pane_g1

0x8609,	// (0x0007671c) scroll_navstr_pane_t1_ParamLimits

0x8609,	// (0x0007671c) scroll_navstr_pane_t1

0xe872,	// (0x0007c985) bg_button_pane_cp014

0xe872,	// (0x0007c985) bg_button_pane_cp030

0x7c07,	// (0x00075d1a) list_double_fisheye_pane_g4_ParamLimits

0x7c07,	// (0x00075d1a) list_double_fisheye_pane_g4

0x7c13,	// (0x00075d26) list_double_fisheye_pane_g5_ParamLimits

0x7c13,	// (0x00075d26) list_double_fisheye_pane_g5

0xe81b,	// (0x0007c92e) sp_fs_scroll_pane_cp03

0xe2af,	// (0x0007c3c2) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe733,	// (0x0007c846) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x0007ddf3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe73f,	// (0x0007c852) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x84ad,	// (0x000765c0) sp_fs_scroll_pane_cp02

0xa9c2,	// (0x00078ad5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9c2,	// (0x00078ad5) popup_sp_fs_calendar_preview_list_single_pane

0x956e,	// (0x00077681) main_cam6_pano_pane

0x95c7,	// (0x000776da) main_mup3_pane_ParamLimits

0x956e,	// (0x00077681) main_phacti_pane

0x7796,	// (0x000758a9) bg_button_pane_cp11

0x77b0,	// (0x000758c3) main_mobtv_info_pane_g2_ParamLimits

0x77b0,	// (0x000758c3) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x0007dd53) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x0007dd53) main_mobtv_info_pane_g

0x798b,	// (0x00075a9e) sc_clock_pane_t5_ParamLimits

0x798b,	// (0x00075a9e) sc_clock_pane_t5

0x7a69,	// (0x00075b7c) main_radioblah_pane_g1_ParamLimits

0xe5a7,	// (0x0007c6ba) main_radioblah_pane_t3_ParamLimits

0xe5a7,	// (0x0007c6ba) main_radioblah_pane_t3

0xe5bf,	// (0x0007c6d2) main_radioblah_pane_t4_ParamLimits

0xe5bf,	// (0x0007c6d2) main_radioblah_pane_t4

0x7a91,	// (0x00075ba4) main_radioblah_text_pane_ParamLimits

0x7a91,	// (0x00075ba4) main_radioblah_text_pane

0x7aa3,	// (0x00075bb6) main_radioblah_info_pane_g1_ParamLimits

0x7b3c,	// (0x00075c4f) main_radioblah_info_pane_t4_ParamLimits

0x7b3c,	// (0x00075c4f) main_radioblah_info_pane_t4

0x95c7,	// (0x000776da) main_sp_fs_calendar_pane

0x8620,	// (0x00076733) main_phacti_pane_g1

0x8628,	// (0x0007673b) phacti_note_pane_ParamLimits

0x8628,	// (0x0007673b) phacti_note_pane

0xe8e4,	// (0x0007c9f7) phacti_term_pane_ParamLimits

0xe8e4,	// (0x0007c9f7) phacti_term_pane

0xe8f9,	// (0x0007ca0c) phacti_note_pane_t1_ParamLimits

0xe8f9,	// (0x0007ca0c) phacti_note_pane_t1

0xa6e6,	// (0x000787f9) phacti_term_pane_g1

0xa6ee,	// (0x00078801) phacti_term_pane_t1_ParamLimits

0xa6ee,	// (0x00078801) phacti_term_pane_t1

0xe910,	// (0x0007ca23) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe918,	// (0x0007ca2b) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x0007dec8) popup_sp_fs_calendar_preview_list_single_pane_g

0xe920,	// (0x0007ca33) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe920,	// (0x0007ca33) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe936,	// (0x0007ca49) aid_popup_sp_fs_bg_corner_pane

0xcc6b,	// (0x0007ad7e) popup_sp_fs_calendar_preview_bg_pane_g1

0x956e,	// (0x00077681) popup_sp_fs_calendar_preview_bg_pane

0xe93e,	// (0x0007ca51) popup_sp_fs_calendar_preview_list_pane

0xc81a,	// (0x0007a92d) bg_main_sp_fs_cale_pane_ParamLimits

0xc81a,	// (0x0007a92d) bg_main_sp_fs_cale_pane

0xa721,	// (0x00078834) listscroll_cale_mrui_pane_ParamLimits

0xa721,	// (0x00078834) listscroll_cale_mrui_pane

0xa736,	// (0x00078849) listscroll_sp_fs_schedule_track_pane

0xa73f,	// (0x00078852) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa73f,	// (0x00078852) main_sp_fs_ctrlbar_pane_cp01

0xe946,	// (0x0007ca59) main_sp_fs_ribbon_pane

0xa752,	// (0x00078865) popup_sp_fs_cale_preview_window

0x8699,	// (0x000767ac) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8699,	// (0x000767ac) list_single_sp_fs_schedule_track_pane

0x95c7,	// (0x000776da) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x95c7,	// (0x000776da) bg_sp_fs_highlight_list_pane_cp03

0x86ad,	// (0x000767c0) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x86ad,	// (0x000767c0) list_single_sp_fs_schedule_track_pane_g1

0x86b9,	// (0x000767cc) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x86b9,	// (0x000767cc) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x0007decd) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x0007decd) list_single_sp_fs_schedule_track_pane_g

0x86c5,	// (0x000767d8) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x86c5,	// (0x000767d8) list_single_sp_fs_schedule_track_pane_t1

0x86e7,	// (0x000767fa) sp_fs_schedule_track_pane_ParamLimits

0x86e7,	// (0x000767fa) sp_fs_schedule_track_pane

0xe94e,	// (0x0007ca61) sp_fs_schedule_track_pane_g1

0xe956,	// (0x0007ca69) sp_fs_schedule_track_pane_g2

0xe95e,	// (0x0007ca71) sp_fs_schedule_track_pane_g3

0xe966,	// (0x0007ca79) sp_fs_schedule_track_pane_g4

0xe96e,	// (0x0007ca81) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x0007ded2) sp_fs_schedule_track_pane_g

0xd683,	// (0x0007b796) bg_sp_fs_schedule_viewer_highlight_g1

0xacd5,	// (0x00078de8) bg_sp_fs_schedule_viewer_highlight_g2

0xd68b,	// (0x0007b79e) bg_sp_fs_schedule_viewer_highlight_g3

0xd693,	// (0x0007b7a6) bg_sp_fs_schedule_viewer_highlight_g4

0xd8ad,	// (0x0007b9c0) bg_sp_fs_schedule_viewer_highlight_g5

0xd6a3,	// (0x0007b7b6) bg_sp_fs_schedule_viewer_highlight_g6

0xd6ab,	// (0x0007b7be) bg_sp_fs_schedule_viewer_highlight_g7

0xd6b3,	// (0x0007b7c6) bg_sp_fs_schedule_viewer_highlight_g8

0xacb5,	// (0x00078dc8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x0007dedd) bg_sp_fs_schedule_viewer_highlight_g

0x956e,	// (0x00077681) bg_main_sp_fs_ribbon_pane

0x86fc,	// (0x0007680f) main_sp_fs_ribbon_pane_g1

0xe976,	// (0x0007ca89) main_sp_fs_ribbon_pane_t1

0x8705,	// (0x00076818) main_sp_fs_ribbon_pane_t2

0xe985,	// (0x0007ca98) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x0007def0) main_sp_fs_ribbon_pane_t

0xe994,	// (0x0007caa7) main_sp_fs_ribbon_scheduler_pane

0xe99c,	// (0x0007caaf) bg_main_sp_fs_ribbon_pane_g1

0xe9a5,	// (0x0007cab8) bg_main_sp_fs_ribbon_pane_g2

0xe9ae,	// (0x0007cac1) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x0007def7) bg_main_sp_fs_ribbon_pane_g

0xe9b6,	// (0x0007cac9) main_sp_fs_ribbon_scheduler_pane_g1

0xe9bf,	// (0x0007cad2) main_sp_fs_ribbon_scheduler_pane_g2

0xe9c8,	// (0x0007cadb) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x0007defe) main_sp_fs_ribbon_scheduler_pane_g

0xe9d1,	// (0x0007cae4) list_cale_mrui_pane

0x8714,	// (0x00076827) sp_fs_scroll_pane_cp07_ParamLimits

0x8714,	// (0x00076827) sp_fs_scroll_pane_cp07

0x8730,	// (0x00076843) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8730,	// (0x00076843) bg_sp_fs_schedule_viewer_highlight

0xe9de,	// (0x0007caf1) list_single_sp_fs_schedule_track_pane_cp01

0xe9e6,	// (0x0007caf9) list_sp_fs_schedule_track_pane

0xe9ee,	// (0x0007cb01) sp_fs_scroll_pane_cp06_ParamLimits

0xe9ee,	// (0x0007cb01) sp_fs_scroll_pane_cp06

0xcc6b,	// (0x0007ad7e) bgmain_sp_fs_calendar_pane_g1

0x8742,	// (0x00076855) list_single_cale_mrui_pane_ParamLimits

0x8742,	// (0x00076855) list_single_cale_mrui_pane

0xa764,	// (0x00078877) list_single_cale_mrui_row_pane_ParamLimits

0xa764,	// (0x00078877) list_single_cale_mrui_row_pane

0xa77a,	// (0x0007888d) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa77a,	// (0x0007888d) list_single_cale_mrui_row_pane_g1

0xa7b2,	// (0x000788c5) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa7b2,	// (0x000788c5) list_single_cale_mrui_row_pane_t1

0x8757,	// (0x0007686a) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8757,	// (0x0007686a) list_single_cale_mrui_row_pane_t2

0xa7c4,	// (0x000788d7) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa7c4,	// (0x000788d7) list_single_cale_mrui_row_pane_t3

0xa7f3,	// (0x00078906) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa7f3,	// (0x00078906) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x0007df0c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x0007df0c) list_single_cale_mrui_row_pane_t

0x87bf,	// (0x000768d2) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x87bf,	// (0x000768d2) list_single_cmail_header_editor_pane_bg_cp01

0x87e5,	// (0x000768f8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x87e5,	// (0x000768f8) list_single_cmail_header_editor_pane_bg_cp02

0x8805,	// (0x00076918) main_radioblah_text_pane_t1_ParamLimits

0x8805,	// (0x00076918) main_radioblah_text_pane_t1

0xea0d,	// (0x0007cb20) cam6_indi_pane_cp01

0xea15,	// (0x0007cb28) cam6_mode_pane_cp01

0xea1d,	// (0x0007cb30) cam6_pano_pane

0xea26,	// (0x0007cb39) cam6_zoom_pane_cp01

0xea30,	// (0x0007cb43) cam6_pano_image_pane

0xea39,	// (0x0007cb4c) cam6_pano_pane_g1

0xe2fc,	// (0x0007c40f) cam6_pano_pane_g2

0xea42,	// (0x0007cb55) cam6_pano_pane_g3

0xea4b,	// (0x0007cb5e) cam6_pano_pane_g4

0xd20d,	// (0x0007b320) cam6_pano_pane_g5

0xea54,	// (0x0007cb67) cam6_pano_pane_g6

0xea5c,	// (0x0007cb6f) cam6_pano_pane_g7

0xea64,	// (0x0007cb77) cam6_pano_pane_g8

0xea6d,	// (0x0007cb80) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x0007df15) cam6_pano_pane_g

0x956e,	// (0x00077681) main_browser_tag_pane

0xe8c5,	// (0x0007c9d8) grid_navstr_albumart_pane

0xea78,	// (0x0007cb8b) cell_navstr_albumart_pane_ParamLimits

0xea78,	// (0x0007cb8b) cell_navstr_albumart_pane

0xea97,	// (0x0007cbaa) cell_navstr_albumart_pane_g1

0xc627,	// (0x0007a73a) cell_navstr_albumart_pane_g2

0xc637,	// (0x0007a74a) cell_navstr_albumart_pane_g3

0xc62f,	// (0x0007a742) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x0007df28) cell_navstr_albumart_pane_g

0x8820,	// (0x00076933) bt_list_pane_ParamLimits

0x8820,	// (0x00076933) bt_list_pane

0x8836,	// (0x00076949) bt_list_pane_t1

0x8845,	// (0x00076958) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x0007df31) bt_list_pane_t

0x956e,	// (0x00077681) main_cale_prevew_pane

0x8854,	// (0x00076967) popup_cale_preview_window_ParamLimits

0x8854,	// (0x00076967) popup_cale_preview_window

0x95c7,	// (0x000776da) bg_popup_preview_window_pane_cp05_ParamLimits

0x95c7,	// (0x000776da) bg_popup_preview_window_pane_cp05

0xea9f,	// (0x0007cbb2) list_cale_preview_pane_ParamLimits

0xea9f,	// (0x0007cbb2) list_cale_preview_pane

0x8871,	// (0x00076984) list_double_cale_preview_pane_ParamLimits

0x8871,	// (0x00076984) list_double_cale_preview_pane

0x8885,	// (0x00076998) list_single_cale_preview_pane_ParamLimits

0x8885,	// (0x00076998) list_single_cale_preview_pane

0x889d,	// (0x000769b0) list_single_cale_preview_pane_g1

0x88a5,	// (0x000769b8) list_single_cale_preview_pane_t1_ParamLimits

0x88a5,	// (0x000769b8) list_single_cale_preview_pane_t1

0x88ba,	// (0x000769cd) list_double_cale_preview_pane_g1

0x88c2,	// (0x000769d5) list_double_cale_preview_pane_t1_ParamLimits

0x88c2,	// (0x000769d5) list_double_cale_preview_pane_t1

0x88d7,	// (0x000769ea) list_double_cale_preview_pane_t2_ParamLimits

0x88d7,	// (0x000769ea) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x0007df36) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x0007df36) list_double_cale_preview_pane_t

0x956e,	// (0x00077681) main_ezdial_pane

0x95c7,	// (0x000776da) main_sp_fs_email_pane_ParamLimits

0x7db5,	// (0x00075ec8) cmail_ddmenu_btn01_pane_ParamLimits

0x7db5,	// (0x00075ec8) cmail_ddmenu_btn01_pane

0x7dc8,	// (0x00075edb) cmail_ddmenu_btn02_pane_ParamLimits

0x7dc8,	// (0x00075edb) cmail_ddmenu_btn02_pane

0x7deb,	// (0x00075efe) cmail_ddmenu_btn03_pane_ParamLimits

0x7deb,	// (0x00075efe) cmail_ddmenu_btn03_pane

0x7e16,	// (0x00075f29) main_sp_fs_ctrlbar_pane_ParamLimits

0x7e3a,	// (0x00075f4d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x84b7,	// (0x000765ca) list_cmail_body_pane_ParamLimits

0xe845,	// (0x0007c958) bg_button_pane_cp12

0xe84e,	// (0x0007c961) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe84e,	// (0x0007c961) list_single_cmail_header_detail_pane_g3

0xa6c2,	// (0x000787d5) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa6c2,	// (0x000787d5) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x0007deb9) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x0007deb9) list_single_cmail_header_detail_pane_t

0xa703,	// (0x00078816) phacti_term_pane_t2_ParamLimits

0xa703,	// (0x00078816) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x0007dec3) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x0007dec3) phacti_term_pane_t

0xeaab,	// (0x0007cbbe) aid_size_list_single_double

0x88ef,	// (0x00076a02) popup_ezdial_listscroll_window

0x890b,	// (0x00076a1e) popup_number_entry_window_cp01

0xb3ae,	// (0x000794c1) bg_popup_call_pane_cp09

0xeab7,	// (0x0007cbca) ezdial_list_pane

0xeabf,	// (0x0007cbd2) scroll_pane_cp23

0xc81a,	// (0x0007a92d) bg_button_pane_cp028_ParamLimits

0xc81a,	// (0x0007a92d) bg_button_pane_cp028

0x8919,	// (0x00076a2c) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8919,	// (0x00076a2c) cmail_ddmenu_btn01_pane_g1

0x8928,	// (0x00076a3b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8928,	// (0x00076a3b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x0007df3b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x0007df3b) cmail_ddmenu_btn01_pane_g

0xeac7,	// (0x0007cbda) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeac7,	// (0x0007cbda) cmail_ddmenu_btn01_pane_t1

0xc81a,	// (0x0007a92d) bg_button_pane_cp029_ParamLimits

0xc81a,	// (0x0007a92d) bg_button_pane_cp029

0x893e,	// (0x00076a51) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x893e,	// (0x00076a51) cmail_ddmenu_btn02_pane_g1

0x8959,	// (0x00076a6c) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8959,	// (0x00076a6c) cmail_ddmenu_btn02_pane_t1

0x95c7,	// (0x000776da) bg_button_pane_cp031_ParamLimits

0x95c7,	// (0x000776da) bg_button_pane_cp031

0x893e,	// (0x00076a51) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x893e,	// (0x00076a51) cmail_ddmenu_btn03_pane_g1

0x8959,	// (0x00076a6c) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8959,	// (0x00076a6c) cmail_ddmenu_btn03_pane_t1

0x563e,	// (0x00073751) cell_dialer2_keypad_pane_t1_ParamLimits

0x5658,	// (0x0007376b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5658,	// (0x0007376b) cell_dialer2_keypad_pane_t1_copy1

0x75ed,	// (0x00075700) ncimui_group_button_pane

0x95c7,	// (0x000776da) main_sp_fs_calendar_pane_ParamLimits

0xe82a,	// (0x0007c93d) list_single_cmail_header_caption_pane_ParamLimits

0xa718,	// (0x0007882b) aid_recal_txt_sm_pane

0x956e,	// (0x00077681) mian_recal_day_pane

0xa752,	// (0x00078865) popup_sp_fs_cale_preview_window_ParamLimits

0xeadd,	// (0x0007cbf0) list_recal_day_pane

0xa83e,	// (0x00078951) list_single_recal_day_pane_ParamLimits

0xa83e,	// (0x00078951) list_single_recal_day_pane

0xeb04,	// (0x0007cc17) list_single_recal_day_pane_g1_ParamLimits

0xeb04,	// (0x0007cc17) list_single_recal_day_pane_g1

0xa850,	// (0x00078963) list_single_recal_day_pane_g2_ParamLimits

0xa850,	// (0x00078963) list_single_recal_day_pane_g2

0xa85c,	// (0x0007896f) list_single_recal_day_pane_g3_ParamLimits

0xa85c,	// (0x0007896f) list_single_recal_day_pane_g3

0x8980,	// (0x00076a93) list_single_recal_day_pane_g4_ParamLimits

0x8980,	// (0x00076a93) list_single_recal_day_pane_g4

0xa868,	// (0x0007897b) list_single_recal_day_pane_g5_ParamLimits

0xa868,	// (0x0007897b) list_single_recal_day_pane_g5

0xa874,	// (0x00078987) list_single_recal_day_pane_g6_ParamLimits

0xa874,	// (0x00078987) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x0007df4a) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x0007df4a) list_single_recal_day_pane_g

0xa888,	// (0x0007899b) list_single_recal_day_pane_t1

0xa89a,	// (0x000789ad) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x0007df55) list_single_recal_day_pane_t

0x8998,	// (0x00076aab) ncimui_query_button_pane_ParamLimits

0x8998,	// (0x00076aab) ncimui_query_button_pane

0x89a8,	// (0x00076abb) ncimui_query_button_pane_t1_ParamLimits

0x89a8,	// (0x00076abb) ncimui_query_button_pane_t1

0xeb10,	// (0x0007cc23) ncimui_query_button_pane_t2_ParamLimits

0xeb10,	// (0x0007cc23) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x0007df5a) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x0007df5a) ncimui_query_button_pane_t

0x89bb,	// (0x00076ace) query_button_pane_ParamLimits

0x89bb,	// (0x00076ace) query_button_pane

0x956e,	// (0x00077681) bg_button_pane_cp0028

0xeb23,	// (0x0007cc36) query_button_pane_t1

0x360b,	// (0x0007171e) main_tport_pane_ParamLimits

0x8367,	// (0x0007647a) bg_popup_window_pane_cp01_ParamLimits

0x8367,	// (0x0007647a) bg_popup_window_pane_cp01

0x8382,	// (0x00076495) heading_pane_cp08_ParamLimits

0x8382,	// (0x00076495) heading_pane_cp08

0x8395,	// (0x000764a8) heading_pane_cp07_ParamLimits

0x8395,	// (0x000764a8) heading_pane_cp07

0x8446,	// (0x00076559) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x0007dea6) cell_tport_appsw_pane_g

0x2bac,	// (0x00070cbf) input_candi_list_open_g1

0xae89,	// (0x00078f9c) list_cale_time_pane_g6_ParamLimits

0xae89,	// (0x00078f9c) list_cale_time_pane_g6

0x4415,	// (0x00072528) aid_size_touch_calib_1_ParamLimits

0x4415,	// (0x00072528) aid_size_touch_calib_1

0x4427,	// (0x0007253a) aid_size_touch_calib_2_ParamLimits

0x4427,	// (0x0007253a) aid_size_touch_calib_2

0x443f,	// (0x00072552) aid_size_touch_calib_3_ParamLimits

0x443f,	// (0x00072552) aid_size_touch_calib_3

0x445d,	// (0x00072570) aid_size_touch_calib_4_ParamLimits

0x445d,	// (0x00072570) aid_size_touch_calib_4

0x4475,	// (0x00072588) main_touch_calib_button_group_pane_ParamLimits

0x4475,	// (0x00072588) main_touch_calib_button_group_pane

0x448d,	// (0x000725a0) main_touch_calib_pane_g1_ParamLimits

0x449f,	// (0x000725b2) main_touch_calib_pane_g2_ParamLimits

0x44b1,	// (0x000725c4) main_touch_calib_pane_g3_ParamLimits

0x44c3,	// (0x000725d6) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0007d864) main_touch_calib_pane_g_ParamLimits

0x44d5,	// (0x000725e8) main_touch_calib_pane_t1_ParamLimits

0x44ef,	// (0x00072602) main_touch_calib_pane_t2_ParamLimits

0x4509,	// (0x0007261c) main_touch_calib_pane_t3_ParamLimits

0x451d,	// (0x00072630) main_touch_calib_pane_t4_ParamLimits

0x4533,	// (0x00072646) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0007d86d) main_touch_calib_pane_t_ParamLimits

0xcfa3,	// (0x0007b0b6) list_single_fp_cale_pane_g3_ParamLimits

0xcfa3,	// (0x0007b0b6) list_single_fp_cale_pane_g3

0xa2d1,	// (0x000783e4) bg_button_pane_cp012_ParamLimits

0xa2d1,	// (0x000783e4) bg_vkb2_func_pane_cp03_ParamLimits

0x666e,	// (0x00074781) cell_vitu2_function_top_pane_g1_ParamLimits

0xa2d1,	// (0x000783e4) bg_vkb2_func_pane_cp04_ParamLimits

0x757b,	// (0x0007568e) main_ncimui_button_group_pane_ParamLimits

0x757b,	// (0x0007568e) main_ncimui_button_group_pane

0x75db,	// (0x000756ee) main_ncimui_pane_t3_ParamLimits

0x75db,	// (0x000756ee) main_ncimui_pane_t3

0xe8db,	// (0x0007c9ee) phacti_button_group_pane

0xeaab,	// (0x0007cbbe) aid_size_list_single_double_ParamLimits

0x88ef,	// (0x00076a02) popup_ezdial_listscroll_window_ParamLimits

0x890b,	// (0x00076a1e) popup_number_entry_window_cp01_ParamLimits

0x89ce,	// (0x00076ae1) phacti_button_pane_ParamLimits

0x89ce,	// (0x00076ae1) phacti_button_pane

0x956e,	// (0x00077681) bg_button_pane_cp14

0xeb31,	// (0x0007cc44) phacti_button_pane_t1

0x89df,	// (0x00076af2) main_touch_calib_button_pane_ParamLimits

0x89df,	// (0x00076af2) main_touch_calib_button_pane

0xa8ac,	// (0x000789bf) bg_button_pane_cp18_ParamLimits

0xa8ac,	// (0x000789bf) bg_button_pane_cp18

0xeb3f,	// (0x0007cc52) main_touch_calib_button_pane_t1_ParamLimits

0xeb3f,	// (0x0007cc52) main_touch_calib_button_pane_t1

0xeb55,	// (0x0007cc68) main_touch_calib_button_pane_t2_ParamLimits

0xeb55,	// (0x0007cc68) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x0007df5f) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x0007df5f) main_touch_calib_button_pane_t

0x956e,	// (0x00077681) cell_ncimui_button_pane

0x956e,	// (0x00077681) bg_button_pane_cp032

0xeb73,	// (0x0007cc86) cell_ncimui_button_pane_t1

0xa204,	// (0x00078317) image3_infobar_pane_ParamLimits

0xa204,	// (0x00078317) image3_infobar_pane

0x79b7,	// (0x00075aca) fs_bigclock_status_pane_ParamLimits

0x79b7,	// (0x00075aca) fs_bigclock_status_pane

0x79c4,	// (0x00075ad7) main_fs_bigclock_clock_pane_ParamLimits

0x79c4,	// (0x00075ad7) main_fs_bigclock_clock_pane

0x79ee,	// (0x00075b01) main_fs_bigclock_indi_pane_ParamLimits

0x79ee,	// (0x00075b01) main_fs_bigclock_indi_pane

0x7a2c,	// (0x00075b3f) main_fs_bigclock_swipe_pane_ParamLimits

0x7a2c,	// (0x00075b3f) main_fs_bigclock_swipe_pane

0x956e,	// (0x00077681) main_fs_clock_dumped_data

0xe409,	// (0x0007c51c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe409,	// (0x0007c51c) list_single_fs_bigclock_indicator_pane_g1

0xe433,	// (0x0007c546) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe433,	// (0x0007c546) list_single_fs_bigclock_indicator_pane_g2

0xe44d,	// (0x0007c560) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe44d,	// (0x0007c560) list_single_fs_bigclock_indicator_pane_g3

0xe467,	// (0x0007c57a) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe467,	// (0x0007c57a) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x0007dd87) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x0007dd87) list_single_fs_bigclock_indicator_pane_g

0xe492,	// (0x0007c5a5) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe492,	// (0x0007c5a5) list_single_fs_bigclock_indicator_pane_t1

0xe4ba,	// (0x0007c5cd) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ba,	// (0x0007c5cd) list_single_fs_bigclock_indicator_pane_t2

0xe4e2,	// (0x0007c5f5) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4e2,	// (0x0007c5f5) list_single_fs_bigclock_indicator_pane_t3

0xe50a,	// (0x0007c61d) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe50a,	// (0x0007c61d) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x0007dd92) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x0007dd92) list_single_fs_bigclock_indicator_pane_t

0xeb81,	// (0x0007cc94) image3_infobar_fav_pane_ParamLimits

0xeb81,	// (0x0007cc94) image3_infobar_fav_pane

0xeb91,	// (0x0007cca4) image3_infobar_loc_pane_ParamLimits

0xeb91,	// (0x0007cca4) image3_infobar_loc_pane

0xeba7,	// (0x0007ccba) image3_infobar_time_pane_ParamLimits

0xeba7,	// (0x0007ccba) image3_infobar_time_pane

0xcc6b,	// (0x0007ad7e) image3_infobar_time_pane_g1

0xebb7,	// (0x0007ccca) image3_infobar_time_pane_t1

0xcc6b,	// (0x0007ad7e) image3_infobar_loc_pane_g1

0xebc5,	// (0x0007ccd8) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x0007df64) image3_infobar_loc_pane_g

0xebcd,	// (0x0007cce0) image3_infobar_loc_pane_t1

0xcc6b,	// (0x0007ad7e) image3_infobar_fav_pane_g1

0xebdb,	// (0x0007ccee) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x0007df69) image3_infobar_fav_pane_g

0xebe3,	// (0x0007ccf6) fs_bigclock_status_battery_pane

0xebec,	// (0x0007ccff) fs_bigclock_status_signal_pane

0xebf5,	// (0x0007cd08) fs_bigclock_status_title_pane

0xebfe,	// (0x0007cd11) fs_bigclock_status_signal_pane_g1

0xec07,	// (0x0007cd1a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x0007df6e) fs_bigclock_status_signal_pane_g

0xec0f,	// (0x0007cd22) fs_bigclock_status_battery_pane_g1

0xec18,	// (0x0007cd2b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x0007df73) fs_bigclock_status_battery_pane_g

0xec20,	// (0x0007cd33) fs_bigclock_status_title_pane_t1

0xcc6b,	// (0x0007ad7e) main_fs_bigclock_clock_pane_g1

0xec2e,	// (0x0007cd41) main_fs_bigclock_clock_pane_g2

0xec39,	// (0x0007cd4c) main_fs_bigclock_clock_pane_g3

0xec39,	// (0x0007cd4c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x0007df78) main_fs_bigclock_clock_pane_g

0xec45,	// (0x0007cd58) main_fs_bigclock_clock_pane_t1

0x89f4,	// (0x00076b07) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x0007df81) main_fs_bigclock_clock_pane_t

0x8a03,	// (0x00076b16) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8a03,	// (0x00076b16) list_single_fs_bigclock_indicator_pane

0x8a14,	// (0x00076b27) list_single_fs_bigclock_pane_ParamLimits

0x8a14,	// (0x00076b27) list_single_fs_bigclock_pane

0xec5c,	// (0x0007cd6f) main_fs_bigclock_indicator_pane_t1

0xec6b,	// (0x0007cd7e) list_single_fs_bigclock_pane_g1

0xec73,	// (0x0007cd86) list_single_fs_bigclock_pane_t1

0xcc6b,	// (0x0007ad7e) main_fs_bigclock_swipe_pane_g1

0xecb6,	// (0x0007cdc9) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x0007df92) main_fs_bigclock_swipe_pane_g

0xecbe,	// (0x0007cdd1) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecbe,	// (0x0007cdd1) main_fs_bigclock_swipe_pane_t1

0x231e,	// (0x00070431) call_type_pane_ParamLimits

0x956e,	// (0x00077681) main_btmg_pane

0xa7a6,	// (0x000788b9) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa7a6,	// (0x000788b9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x0007df05) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x0007df05) list_single_cale_mrui_row_pane_g

0xa82c,	// (0x0007893f) list_recal_vselct_arw_lo_pane

0xeafc,	// (0x0007cc0f) list_recal_vselct_arw_up_pane

0xa834,	// (0x00078947) list_recal_vselct_pane

0x8a77,	// (0x00076b8a) btmg_button_pane

0x8a81,	// (0x00076b94) main_btmg_pane_g1

0x956e,	// (0x00077681) bg_button_pane_cp044

0xecdb,	// (0x0007cdee) btmg_button_pane_t1

0xc806,	// (0x0007a919) aid_listscroll_gen

0x95c7,	// (0x000776da) main_cntbar_detail_pane

0xe80b,	// (0x0007c91e) list_cmail_folder_pane

0xe81b,	// (0x0007c92e) sp_fs_scroll_pane_cp03_ParamLimits

0x8a8b,	// (0x00076b9e) list_single_fs_dyc_pane_cp01_ParamLimits

0x8a8b,	// (0x00076b9e) list_single_fs_dyc_pane_cp01

0xece9,	// (0x0007cdfc) aid_size_cmail_indent

0xbbfd,	// (0x00079d10) list_single_dyc_row_pane_cp01

0x8ad6,	// (0x00076be9) cntbar_detail_list_pane_ParamLimits

0x8ad6,	// (0x00076be9) cntbar_detail_list_pane

0x8b28,	// (0x00076c3b) main_cntbar_detail_cont_pane_ParamLimits

0x8b28,	// (0x00076c3b) main_cntbar_detail_cont_pane

0x2241,	// (0x00070354) scroll_pane_cp032_ParamLimits

0x2241,	// (0x00070354) scroll_pane_cp032

0x8b3c,	// (0x00076c4f) cntbar_detail_list_event_pane_ParamLimits

0x8b3c,	// (0x00076c4f) cntbar_detail_list_event_pane

0x8ae8,	// (0x00076bfb) cntbar_detail_list_shct_pane

0xad23,	// (0x00078e36) aid_list_gen

0xecf2,	// (0x0007ce05) aid_scroll

0xecfb,	// (0x0007ce0e) aid_size_touch_scroll_bar

0x6d73,	// (0x00074e86) aid_list_double

0xed04,	// (0x0007ce17) aid_list_single

0x6d61,	// (0x00074e74) aid_list_single_lg

0xbc06,	// (0x00079d19) aid_list_z_g_a_sm

0xbc0e,	// (0x00079d21) aid_list_z_g_d

0xbc16,	// (0x00079d29) aid_txt_z_prm

0x8b4c,	// (0x00076c5f) aid_txt_z_prm_cp01

0x8b5a,	// (0x00076c6d) aid_txt_z_sec

0x8b68,	// (0x00076c7b) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8b68,	// (0x00076c7b) main_cntbar_detail_cont_pane_g1

0x8b7c,	// (0x00076c8f) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8b7c,	// (0x00076c8f) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x0007df97) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x0007df97) main_cntbar_detail_cont_pane_g

0xed0d,	// (0x0007ce20) main_cntbar_detail_cont_pane_t1

0xed1b,	// (0x0007ce2e) main_cntbar_detail_cont_pane_t2

0xed29,	// (0x0007ce3c) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x0007df9c) main_cntbar_detail_cont_pane_t

0x8b8c,	// (0x00076c9f) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8b8c,	// (0x00076c9f) cell_cntbar_detail_list_shct_pane

0xed37,	// (0x0007ce4a) cntbar_detail_list_shct_pane_g1

0xed40,	// (0x0007ce53) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x0007dfa3) cntbar_detail_list_shct_pane_g

0x8b9e,	// (0x00076cb1) cntbar_detail_list_event_pane_g1_ParamLimits

0x8b9e,	// (0x00076cb1) cntbar_detail_list_event_pane_g1

0x8baa,	// (0x00076cbd) cntbar_detail_list_event_pane_g2_ParamLimits

0x8baa,	// (0x00076cbd) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x0007dfa8) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x0007dfa8) cntbar_detail_list_event_pane_g

0x8c18,	// (0x00076d2b) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c18,	// (0x00076d2b) cntbar_detail_list_event_pane_t1

0x8c2d,	// (0x00076d40) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c2d,	// (0x00076d40) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x0007dfb5) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x0007dfb5) cntbar_detail_list_event_pane_t

0xcc6b,	// (0x0007ad7e) cell_cntbar_detail_list_shct_pane_g1

0x26c4,	// (0x000707d7) navi_pane_mv_g3

0x95c7,	// (0x000776da) main_cntbar_detail_pane_ParamLimits

0x956e,	// (0x00077681) main_notif_wgt_pane

0xa01c,	// (0x0007812f) aid_tch_main_mp4_pane_g4

0xa1fa,	// (0x0007830d) popup_slider_window_cp02

0xa822,	// (0x00078935) list_recal_day_event_pane

0x8aa6,	// (0x00076bb9) cntbar_detail_btn_pane_ParamLimits

0x8aa6,	// (0x00076bb9) cntbar_detail_btn_pane

0x8abe,	// (0x00076bd1) cntbar_detail_btn_pane_cp01_ParamLimits

0x8abe,	// (0x00076bd1) cntbar_detail_btn_pane_cp01

0x8ae8,	// (0x00076bfb) cntbar_detail_list_shct_pane_ParamLimits

0x8af8,	// (0x00076c0b) cntbar_detail_pane_g1_ParamLimits

0x8af8,	// (0x00076c0b) cntbar_detail_pane_g1

0x8b0c,	// (0x00076c1f) cntbar_detail_pane_t1_ParamLimits

0x8b0c,	// (0x00076c1f) cntbar_detail_pane_t1

0x8bb6,	// (0x00076cc9) cntbar_detail_list_event_pane_g3_ParamLimits

0x8bb6,	// (0x00076cc9) cntbar_detail_list_event_pane_g3

0x8bce,	// (0x00076ce1) cntbar_detail_list_event_pane_g4_ParamLimits

0x8bce,	// (0x00076ce1) cntbar_detail_list_event_pane_g4

0x8be6,	// (0x00076cf9) cntbar_detail_list_event_pane_g5_ParamLimits

0x8be6,	// (0x00076cf9) cntbar_detail_list_event_pane_g5

0x8bfe,	// (0x00076d11) cntbar_detail_list_event_pane_g6_ParamLimits

0x8bfe,	// (0x00076d11) cntbar_detail_list_event_pane_g6

0x8c42,	// (0x00076d55) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c42,	// (0x00076d55) cntbar_detail_list_event_pane_t3

0x8c54,	// (0x00076d67) popup_notif_wgt_window_ParamLimits

0x8c54,	// (0x00076d67) popup_notif_wgt_window

0x8c6d,	// (0x00076d80) popup_submenu_window_cp01_ParamLimits

0x8c6d,	// (0x00076d80) popup_submenu_window_cp01

0xb3ae,	// (0x000794c1) bg_popup_window_pane_cp10

0xed49,	// (0x0007ce5c) listscroll_notif_wgt_pane

0xed5b,	// (0x0007ce6e) list_notif_wgt_window

0xed64,	// (0x0007ce77) scroll_pane_cp033

0x8c81,	// (0x00076d94) list_notif_wgt_row_pane_ParamLimits

0x8c81,	// (0x00076d94) list_notif_wgt_row_pane

0xed6d,	// (0x0007ce80) aid_size_list_notif_wgt_del

0xed7a,	// (0x0007ce8d) list_notif_wgt_row_pane_g1

0xed86,	// (0x0007ce99) list_notif_wgt_row_pane_g2

0xed9a,	// (0x0007cead) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x0007dfbc) list_notif_wgt_row_pane_g

0xeda7,	// (0x0007ceba) list_notif_wgt_row_pane_t1

0xedbd,	// (0x0007ced0) list_notif_wgt_row_pane_t2

0xedcf,	// (0x0007cee2) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x0007dfc3) list_notif_wgt_row_pane_t

0xd8c7,	// (0x0007b9da) list_recal_day_event_pane_g1

0xede1,	// (0x0007cef4) list_recal_day_event_pane_t1

0x956e,	// (0x00077681) bg_button_pane_cp045

0xedf0,	// (0x0007cf03) cntbar_detail_btn_pane_t1

0xc81a,	// (0x0007a92d) main_callh_pane_ParamLimits

0xc81a,	// (0x0007a92d) main_callh_pane

0x956e,	// (0x00077681) main_coverflow0_pane

0x956e,	// (0x00077681) main_wgtman_pane

0x7a44,	// (0x00075b57) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7a44,	// (0x00075b57) main_fs_bigclock_unlock_btn_pane

0x843e,	// (0x00076551) bg_button_pane_cp16

0x844e,	// (0x00076561) cell_tport_appsw_pane_g3

0x8c91,	// (0x00076da4) cf0_flow_pane_ParamLimits

0x8c91,	// (0x00076da4) cf0_flow_pane

0xedfe,	// (0x0007cf11) listscroll_cf0_pane

0xee09,	// (0x0007cf1c) main_cf0_pane_g1

0x8ca6,	// (0x00076db9) main_cf0_pane_t1_ParamLimits

0x8ca6,	// (0x00076db9) main_cf0_pane_t1

0x8cbd,	// (0x00076dd0) main_cf0_pane_t2_ParamLimits

0x8cbd,	// (0x00076dd0) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x0007dfcf) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x0007dfcf) main_cf0_pane_t

0xee1b,	// (0x0007cf2e) scroll_pane_cp11

0x8cd4,	// (0x00076de7) cf0_flow_pane_g1

0x8ce0,	// (0x00076df3) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x0007dfd4) cf0_flow_pane_g

0x8cec,	// (0x00076dff) cf0_flow_pane_t1

0x956e,	// (0x00077681) main_call6_pane

0x956e,	// (0x00077681) main_calllock_pane

0x8cfe,	// (0x00076e11) call6_btn_grp_pane_ParamLimits

0x8cfe,	// (0x00076e11) call6_btn_grp_pane

0x8d18,	// (0x00076e2b) call6_pane_g1_ParamLimits

0x8d18,	// (0x00076e2b) call6_pane_g1

0x8d2e,	// (0x00076e41) popup_call6_1st_window_ParamLimits

0x8d2e,	// (0x00076e41) popup_call6_1st_window

0x8d3f,	// (0x00076e52) popup_call6_2nd_window_ParamLimits

0x8d3f,	// (0x00076e52) popup_call6_2nd_window

0x8d50,	// (0x00076e63) cell_call6_btn_pane_ParamLimits

0x8d50,	// (0x00076e63) cell_call6_btn_pane

0xb3ae,	// (0x000794c1) bg_popup_call2_in_pane_cp03

0xee26,	// (0x0007cf39) popup_call6_1st_window_g1

0xee2e,	// (0x0007cf41) popup_call6_1st_window_g2

0xee36,	// (0x0007cf49) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x0007dfd9) popup_call6_1st_window_g

0xee3e,	// (0x0007cf51) popup_call6_1st_window_t1

0xee4d,	// (0x0007cf60) popup_call6_1st_window_t2

0xee5d,	// (0x0007cf70) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x0007dfe0) popup_call6_1st_window_t

0xb3ae,	// (0x000794c1) bg_popup_call2_in_pane_cp04

0xee26,	// (0x0007cf39) popup_call6_2nd_window_g1

0xee2e,	// (0x0007cf41) popup_call6_2nd_window_g2

0xee36,	// (0x0007cf49) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x0007dfd9) popup_call6_2nd_window_g

0xee3e,	// (0x0007cf51) popup_call6_2nd_window_t1

0x956e,	// (0x00077681) bg_button_pane_cp15

0xee6d,	// (0x0007cf80) cell_call6_btn_pane_g1

0xee76,	// (0x0007cf89) cell_call6_btn_pane_t1

0x8d64,	// (0x00076e77) listscroll_wgtman_pane_ParamLimits

0x8d64,	// (0x00076e77) listscroll_wgtman_pane

0x8d85,	// (0x00076e98) wgtman_btn_pane_ParamLimits

0x8d85,	// (0x00076e98) wgtman_btn_pane

0xb274,	// (0x00079387) aid_scroll_copy1

0xee85,	// (0x0007cf98) list_wgtman_pane

0x8dc8,	// (0x00076edb) wgtman_btn_pane_g1_ParamLimits

0x8dc8,	// (0x00076edb) wgtman_btn_pane_g1

0x8df4,	// (0x00076f07) wgtman_btn_pane_t1_ParamLimits

0x8df4,	// (0x00076f07) wgtman_btn_pane_t1

0xee8f,	// (0x0007cfa2) wgtman_btn_pane_t2_ParamLimits

0xee8f,	// (0x0007cfa2) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x0007dfe7) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x0007dfe7) wgtman_btn_pane_t

0x8e31,	// (0x00076f44) listrow_wgtman_pane_ParamLimits

0x8e31,	// (0x00076f44) listrow_wgtman_pane

0x8e43,	// (0x00076f56) listrow_wgtman_pane_g1

0x8e50,	// (0x00076f63) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x0007dfec) listrow_wgtman_pane_g

0x8e6e,	// (0x00076f81) listrow_wgtman_pane_t1

0x8e86,	// (0x00076f99) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x0007dff1) listrow_wgtman_pane_t

0x8eac,	// (0x00076fbf) wait_bar_pane_cp09

0xeea6,	// (0x0007cfb9) main_calllock_btn_pane

0xeeb0,	// (0x0007cfc3) main_calllock_pane_g1

0x956e,	// (0x00077681) bg_button_pane_cp17

0xeebc,	// (0x0007cfcf) main_calllock_btn_pane_g1

0xeec5,	// (0x0007cfd8) main_calllock_btn_pane_t1

0x956e,	// (0x00077681) main_dialer3_pane

0x956e,	// (0x00077681) main_fmrd2_pane

0xcc6b,	// (0x0007ad7e) main_fs_bigclock_unlock_btn_pane_g1

0xeedc,	// (0x0007cfef) main_fs_bigclock_unlock_btn_pane_t1

0x8ebe,	// (0x00076fd1) area_fmrd2_info_pane_ParamLimits

0x8ebe,	// (0x00076fd1) area_fmrd2_info_pane

0x8ecd,	// (0x00076fe0) area_fmrd2_visual_pane_ParamLimits

0x8ecd,	// (0x00076fe0) area_fmrd2_visual_pane

0x8edb,	// (0x00076fee) fmrd2_indi_pane_ParamLimits

0x8edb,	// (0x00076fee) fmrd2_indi_pane

0x8ee8,	// (0x00076ffb) area_fmrd2_visual_pane_g1

0x8ef0,	// (0x00077003) area_fmrd2_visual_pane_t1

0x8f00,	// (0x00077013) area_fmrd2_visual_pane_t2

0x8f10,	// (0x00077023) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x0007dffb) area_fmrd2_visual_pane_t

0x8f20,	// (0x00077033) area_fmrd2_info_pane_g1

0x8f28,	// (0x0007703b) area_fmrd2_info_pane_t1

0x8f38,	// (0x0007704b) area_fmrd2_info_pane_t2

0x8f48,	// (0x0007705b) area_fmrd2_info_pane_t3

0x8f58,	// (0x0007706b) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x0007e002) area_fmrd2_info_pane_t

0x8f68,	// (0x0007707b) fmrd2_indi_pane_t1

0x8f78,	// (0x0007708b) fmrd2_indi_pane_t2

0x8f88,	// (0x0007709b) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x0007e00b) fmrd2_indi_pane_t

0xe476,	// (0x0007c589) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe476,	// (0x0007c589) list_single_fs_bigclock_indicator_pane_g5

0xe526,	// (0x0007c639) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe526,	// (0x0007c639) list_single_fs_bigclock_indicator_pane_t5

0x863c,	// (0x0007674f) aid_cell_bcale_month_pane_ParamLimits

0x863c,	// (0x0007674f) aid_cell_bcale_month_pane

0x865a,	// (0x0007676d) bcale_month_pane_ParamLimits

0x865a,	// (0x0007676d) bcale_month_pane

0x867c,	// (0x0007678f) bcale_preview_pane_ParamLimits

0x867c,	// (0x0007678f) bcale_preview_pane

0xec73,	// (0x0007cd86) list_single_fs_bigclock_pane_t1_ParamLimits

0xec92,	// (0x0007cda5) list_single_fs_bigclock_pane_t2_ParamLimits

0xec92,	// (0x0007cda5) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x0007df8d) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0007df8d) list_single_fs_bigclock_pane_t

0xeed4,	// (0x0007cfe7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x0007dff6) main_fs_bigclock_unlock_btn_pane_g

0x8f98,	// (0x000770ab) aid_dia3_key_size_ParamLimits

0x8f98,	// (0x000770ab) aid_dia3_key_size

0x8fa7,	// (0x000770ba) aid_dia3_listrow_size_ParamLimits

0x8fa7,	// (0x000770ba) aid_dia3_listrow_size

0x8fbc,	// (0x000770cf) dia3_keypad_fun_pane_ParamLimits

0x8fbc,	// (0x000770cf) dia3_keypad_fun_pane

0x8fd8,	// (0x000770eb) dia3_keypad_num_pane_ParamLimits

0x8fd8,	// (0x000770eb) dia3_keypad_num_pane

0x8ff1,	// (0x00077104) dia3_listscroll_pane_ParamLimits

0x8ff1,	// (0x00077104) dia3_listscroll_pane

0x9004,	// (0x00077117) dia3_numentry_pane_ParamLimits

0x9004,	// (0x00077117) dia3_numentry_pane

0xeeea,	// (0x0007cffd) dia3_list_pane

0xeef5,	// (0x0007d008) scroll_pane_cp12

0x956e,	// (0x00077681) bg_dia3_numentry_pane

0x9018,	// (0x0007712b) dia3_numentry_pane_t1

0x9027,	// (0x0007713a) cell_dia3_key_num_pane

0x902f,	// (0x00077142) cell_dia3_key0_fun_pane_ParamLimits

0x902f,	// (0x00077142) cell_dia3_key0_fun_pane

0x9043,	// (0x00077156) cell_dia3_key1_fun_pane_ParamLimits

0x9043,	// (0x00077156) cell_dia3_key1_fun_pane

0x905b,	// (0x0007716e) dia3_listrow_pane

0xe154,	// (0x0007c267) bg_dia3_numentry_pane_g1

0x956e,	// (0x00077681) bg_button_pane_cp21

0xef00,	// (0x0007d013) cell_dia3_key_num_pane_t1

0xef0e,	// (0x0007d021) cell_dia3_key_num_pane_t2

0xef1d,	// (0x0007d030) cell_dia3_key_num_pane_t3

0xef2c,	// (0x0007d03f) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x0007e012) cell_dia3_key_num_pane_t

0x956e,	// (0x00077681) bg_button_pane_cp19

0x906d,	// (0x00077180) cell_dia3_key0_fun_pane_g1

0x956e,	// (0x00077681) bg_button_pane_cp20

0x9075,	// (0x00077188) cell_dia3_key1_fun_pane_g1

0x907d,	// (0x00077190) area_left_week_number_pane

0x908b,	// (0x0007719e) area_top_day_name_pane

0x909e,	// (0x000771b1) frame_month_view_pane

0xef3b,	// (0x0007d04e) grid_month_view_pane

0x90b3,	// (0x000771c6) cell_top_day_name_pane_ParamLimits

0x90b3,	// (0x000771c6) cell_top_day_name_pane

0x90e2,	// (0x000771f5) cell_area_left_week_number_pane_ParamLimits

0x90e2,	// (0x000771f5) cell_area_left_week_number_pane

0x90f6,	// (0x00077209) cell_month_view_pane_ParamLimits

0x90f6,	// (0x00077209) cell_month_view_pane

0xef49,	// (0x0007d05c) frm_month_g1

0x9125,	// (0x00077238) frm_month_g2

0x9138,	// (0x0007724b) frm_month_g3

0x914b,	// (0x0007725e) frm_month_g4

0x915e,	// (0x00077271) frm_month_g5

0x9171,	// (0x00077284) frm_month_g6

0x9184,	// (0x00077297) frm_month_g7

0xef56,	// (0x0007d069) frm_month_g8

0x9199,	// (0x000772ac) frm_month_g9

0x91a9,	// (0x000772bc) frm_month_g10

0x91b9,	// (0x000772cc) frm_month_g11

0x91c9,	// (0x000772dc) frm_month_g12

0x91db,	// (0x000772ee) frm_month_g13

0x91ef,	// (0x00077302) frm_month_g14

0x9203,	// (0x00077316) frm_month_g15

0x9217,	// (0x0007732a) frm_month_g16

0x000f,

0xff08,	// (0x0007e01b) frm_month_g

0xef63,	// (0x0007d076) cell_top_day_name_pane_t1

0x922b,	// (0x0007733e) cell_area_left_week_number_pane_g1

0x9237,	// (0x0007734a) cell_area_left_week_number_pane_t1

0xce9b,	// (0x0007afae) cell_month_view_pane_g1

0x924a,	// (0x0007735d) cell_month_view_pane_t1

0x956e,	// (0x00077681) main_fps_pane

0xe6fb,	// (0x0007c80e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6fb,	// (0x0007c80e) cmail_ddmenu_btn02_pane_cp1

0xe717,	// (0x0007c82a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe717,	// (0x0007c82a) cmail_ddmenu_btn02_pane_cp2

0x894d,	// (0x00076a60) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x894d,	// (0x00076a60) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x0007df40) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x0007df40) cmail_ddmenu_btn02_pane_g

0x896e,	// (0x00076a81) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x896e,	// (0x00076a81) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x0007df45) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x0007df45) cmail_ddmenu_btn02_pane_t

0x925d,	// (0x00077370) fps_text_pane_ParamLimits

0x925d,	// (0x00077370) fps_text_pane

0x9274,	// (0x00077387) main_fps_pane_g1_ParamLimits

0x9274,	// (0x00077387) main_fps_pane_g1

0x928c,	// (0x0007739f) wait_bar_pane_cp010_ParamLimits

0x928c,	// (0x0007739f) wait_bar_pane_cp010

0x929f,	// (0x000773b2) fps_text_pane_t1_ParamLimits

0x929f,	// (0x000773b2) fps_text_pane_t1

0xe2bb,	// (0x0007c3ce) cam4_image_uncrop_pane_g1

0xe2c4,	// (0x0007c3d7) cam4_image_uncrop_pane_g2

0x5b2a,	// (0x00073c3d) cam4_image_uncrop_pane_g3

0x5b33,	// (0x00073c46) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0007da01) cam4_image_uncrop_pane_g

0x905b,	// (0x0007716e) dia3_listrow_pane_ParamLimits

0x956e,	// (0x00077681) main_phob2_pane

0x840d,	// (0x00076520) cell_tport_appsw_pane_cp02_ParamLimits

0x840d,	// (0x00076520) cell_tport_appsw_pane_cp02

0x8421,	// (0x00076534) cell_tport_appsw_pane_cp03_ParamLimits

0x8421,	// (0x00076534) cell_tport_appsw_pane_cp03

0x956e,	// (0x00077681) phob2_contact_card_pane

0x956e,	// (0x00077681) phob2_listscroll_pane

0xef76,	// (0x0007d089) phob2_list_pane

0xef7e,	// (0x0007d091) scroll_pane_cp034

0x92b7,	// (0x000773ca) phob2_cc_data_pane_ParamLimits

0x92b7,	// (0x000773ca) phob2_cc_data_pane

0x92d8,	// (0x000773eb) phob2_cc_listscroll_pane_ParamLimits

0x92d8,	// (0x000773eb) phob2_cc_listscroll_pane

0x92fa,	// (0x0007740d) list_double_large_graphic_phob2_pane_ParamLimits

0x92fa,	// (0x0007740d) list_double_large_graphic_phob2_pane

0x930e,	// (0x00077421) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x930e,	// (0x00077421) list_double_large_graphic_phob2_pane_g1

0x9324,	// (0x00077437) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9324,	// (0x00077437) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x0007e03c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x0007e03c) list_double_large_graphic_phob2_pane_g

0x9330,	// (0x00077443) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9330,	// (0x00077443) list_double_large_graphic_phob2_pane_t1

0x9345,	// (0x00077458) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9345,	// (0x00077458) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x0007e041) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x0007e041) list_double_large_graphic_phob2_pane_t

0x956e,	// (0x00077681) list_highlight_pane_cp024

0x9357,	// (0x0007746a) phob2_cc_button_pane

0x935f,	// (0x00077472) phob2_cc_data_pane_g1_ParamLimits

0x935f,	// (0x00077472) phob2_cc_data_pane_g1

0x9375,	// (0x00077488) phob2_cc_data_pane_g2_ParamLimits

0x9375,	// (0x00077488) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x0007e046) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x0007e046) phob2_cc_data_pane_g

0x9385,	// (0x00077498) phob2_cc_data_pane_t1_ParamLimits

0x9385,	// (0x00077498) phob2_cc_data_pane_t1

0x939d,	// (0x000774b0) phob2_cc_data_pane_t2_ParamLimits

0x939d,	// (0x000774b0) phob2_cc_data_pane_t2

0x93b7,	// (0x000774ca) phob2_cc_data_pane_t3_ParamLimits

0x93b7,	// (0x000774ca) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x0007e04b) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x0007e04b) phob2_cc_data_pane_t

0xef86,	// (0x0007d099) phob2_cc_list_pane_ParamLimits

0xef86,	// (0x0007d099) phob2_cc_list_pane

0xd95e,	// (0x0007ba71) scroll_pane_cp035_ParamLimits

0xd95e,	// (0x0007ba71) scroll_pane_cp035

0x95c7,	// (0x000776da) bg_button_pane_cp033

0xef92,	// (0x0007d0a5) phob2_cc_button_pane_g1

0xef9e,	// (0x0007d0b1) phob2_cc_button_pane_t1

0xefb3,	// (0x0007d0c6) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x0007e052) phob2_cc_button_pane_t

0x93d1,	// (0x000774e4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x93d1,	// (0x000774e4) list_double_large_graphic_phob2_cc_pane

0x93e5,	// (0x000774f8) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x93e5,	// (0x000774f8) list_double_large_graphic_phob2_cc_pane_g1

0x93f1,	// (0x00077504) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x93f1,	// (0x00077504) list_double_large_graphic_phob2_cc_pane_g2

0x93fd,	// (0x00077510) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x93fd,	// (0x00077510) list_double_large_graphic_phob2_cc_pane_g3

0x9409,	// (0x0007751c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9409,	// (0x0007751c) list_double_large_graphic_phob2_cc_pane_g4

0x9415,	// (0x00077528) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9415,	// (0x00077528) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x0007e057) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x0007e057) list_double_large_graphic_phob2_cc_pane_g

0x9421,	// (0x00077534) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9421,	// (0x00077534) list_double_large_graphic_phob2_cc_pane_t1

0x944a,	// (0x0007755d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x944a,	// (0x0007755d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x0007e062) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x0007e062) list_double_large_graphic_phob2_cc_pane_t

0xefc5,	// (0x0007d0d8) list_highlight_pane_cp025_ParamLimits

0xefc5,	// (0x0007d0d8) list_highlight_pane_cp025

0x95c7,	// (0x000776da) bg_button_pane_cp033_ParamLimits

0xef92,	// (0x0007d0a5) phob2_cc_button_pane_g1_ParamLimits

0xef9e,	// (0x0007d0b1) phob2_cc_button_pane_t1_ParamLimits

0xefb3,	// (0x0007d0c6) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x0007e052) phob2_cc_button_pane_t_ParamLimits

0xfe7d,	// (0x0006df90) popup_wgtman_window

0xd7a1,	// (0x0007b8b4) scroll_pane_cp038

0x8daa,	// (0x00076ebd) wgtman_btn_pane_cp_01_ParamLimits

0x8daa,	// (0x00076ebd) wgtman_btn_pane_cp_01

0xefd3,	// (0x0007d0e6) wgtman_content_pane

0xefdc,	// (0x0007d0ef) wgtman_heading_pane

0x956e,	// (0x00077681) bg_heading_pane_cp02

0xefe5,	// (0x0007d0f8) wgtman_heading_pane_g1

0xefed,	// (0x0007d100) wgtman_heading_pane_t1

0xeffb,	// (0x0007d10e) scroll_pane_cp036

0xf003,	// (0x0007d116) wgtman_list_pane

0xf00b,	// (0x0007d11e) wgtman_list_pane_t1_ParamLimits

0xf00b,	// (0x0007d11e) wgtman_list_pane_t1

0xa258,	// (0x0007836b) cam4_grid_pane

0x685b,	// (0x0007496e) bg_button_pane_cp015_ParamLimits

0x686f,	// (0x00074982) bg_button_pane_cp016_ParamLimits

0x6882,	// (0x00074995) bg_button_pane_cp017_ParamLimits

0x68da,	// (0x000749ed) popup_vitu2_query_window_g3_ParamLimits

0x68da,	// (0x000749ed) popup_vitu2_query_window_g3

0x6997,	// (0x00074aaa) popup_vitu2_query_window_t6_ParamLimits

0x6997,	// (0x00074aaa) popup_vitu2_query_window_t6

0x69c2,	// (0x00074ad5) popup_vitu2_query_window_t7_ParamLimits

0x69c2,	// (0x00074ad5) popup_vitu2_query_window_t7

0xe2bb,	// (0x0007c3ce) cam4_grid_pane_g1

0xe2c4,	// (0x0007c3d7) cam4_grid_pane_g2

0xf025,	// (0x0007d138) cam4_grid_pane_g3

0xf02e,	// (0x0007d141) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x0007e067) cam4_grid_pane_g

0x108e,	// (0x0006f1a1) aid_placing_vt_slider_lsc_ParamLimits

0x137b,	// (0x0006f48e) vidtel_button_pane_ParamLimits

0x137b,	// (0x0006f48e) vidtel_button_pane

0xf039,	// (0x0007d14c) bg_button_pane_cp034

0x9473,	// (0x00077586) vidtel_button_pane_g1

0xf043,	// (0x0007d156) vidtel_button_pane_t1

0xd8a5,	// (0x0007b9b8) aid_size_vtel_slider_touch

0xd95e,	// (0x0007ba71) scroll_pane_cp039

0xe192,	// (0x0007c2a5) ncim_query_button_pane_cp01_ParamLimits

0xe1b1,	// (0x0007c2c4) ncimui_query_pane_g1_ParamLimits

0x95c7,	// (0x000776da) input_focus_pane_cp012_ParamLimits

0xe1d6,	// (0x0007c2e9) ncim_query_entry_pane_t1_ParamLimits

0xd95e,	// (0x0007ba71) scroll_pane_cp039_ParamLimits

0x2636,	// (0x00070749) navi_pane_bcale_mc_g1

0x263e,	// (0x00070751) navi_pane_bcale_mc_t1

0xe754,	// (0x0007c867) main_sp_fs_email_pane_g1

0xe760,	// (0x0007c873) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x0007ddf8) main_sp_fs_email_pane_g

0xea00,	// (0x0007cb13) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea00,	// (0x0007cb13) list_single_cale_mrui_row_pane_g3

0x898e,	// (0x00076aa1) list_single_recal_day_pane_g5_event_pane

0xa880,	// (0x00078993) list_single_recal_day_pane_g7

0xf051,	// (0x0007d164) list_recal_day_event_pane_cp01

0xf05a,	// (0x0007d16d) list_recal_vselct_arw_lo_pane_cp01

0xf062,	// (0x0007d175) list_recal_vselct_arw_up_pane_cp01

0xf06a,	// (0x0007d17d) list_recal_vselct_pane_cp01

0xd8c7,	// (0x0007b9da) list_recal_day_event_pane_cp01_g1

0xbc24,	// (0x00079d37) list_recal_day_event_pane_cp01_t1

0xa888,	// (0x0007899b) list_single_recal_day_pane_t1_ParamLimits

0xa89a,	// (0x000789ad) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x0007df55) list_single_recal_day_pane_t_ParamLimits

0x9c43,	// (0x00077d56) bg_notes_pane_ParamLimits

0x9cee,	// (0x00077e01) list_notes_pane_ParamLimits

0x01ca,	// (0x0006e2dd) scroll_pane_cp06_ParamLimits

0xa8ac,	// (0x000789bf) main_notes_pane_ParamLimits

0x956e,	// (0x00077681) main_welc_pane

0x947b,	// (0x0007758e) main_welc_body_pane_ParamLimits

0x947b,	// (0x0007758e) main_welc_body_pane

0x949a,	// (0x000775ad) main_welc_opti_pane_ParamLimits

0x949a,	// (0x000775ad) main_welc_opti_pane

0x94e3,	// (0x000775f6) main_welc_pane_t1_ParamLimits

0x94e3,	// (0x000775f6) main_welc_pane_t1

0x9505,	// (0x00077618) main_welc_body_row_pane_ParamLimits

0x9505,	// (0x00077618) main_welc_body_row_pane

0x9519,	// (0x0007762c) main_welc_opti_row_pane_ParamLimits

0x9519,	// (0x0007762c) main_welc_opti_row_pane

0xf074,	// (0x0007d187) main_welc_opti_row_pane_g1

0xf07c,	// (0x0007d18f) main_welc_opti_row_pane_t1

0xf08b,	// (0x0007d19e) main_welc_body_row_pane_t1

0xed53,	// (0x0007ce66) popup_notif_wgt_heading_pane

0xed6d,	// (0x0007ce80) aid_size_list_notif_wgt_del_ParamLimits

0xed7a,	// (0x0007ce8d) list_notif_wgt_row_pane_g1_ParamLimits

0xed86,	// (0x0007ce99) list_notif_wgt_row_pane_g2_ParamLimits

0xed9a,	// (0x0007cead) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x0007dfbc) list_notif_wgt_row_pane_g_ParamLimits

0xeda7,	// (0x0007ceba) list_notif_wgt_row_pane_t1_ParamLimits

0xedbd,	// (0x0007ced0) list_notif_wgt_row_pane_t2_ParamLimits

0xedcf,	// (0x0007cee2) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x0007dfc3) list_notif_wgt_row_pane_t_ParamLimits

0x8e43,	// (0x00076f56) listrow_wgtman_pane_g1_ParamLimits

0x8e50,	// (0x00076f63) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x0007dfec) listrow_wgtman_pane_g_ParamLimits

0x8e6e,	// (0x00076f81) listrow_wgtman_pane_t1_ParamLimits

0x8e86,	// (0x00076f99) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x0007dff1) listrow_wgtman_pane_t_ParamLimits

0x8eac,	// (0x00076fbf) wait_bar_pane_cp09_ParamLimits

0x956e,	// (0x00077681) bg_popup_heading_pane_cp02

0xf09a,	// (0x0007d1ad) popup_notif_wgt_heading_pane_g1

0xf0a2,	// (0x0007d1b5) popup_notif_wgt_heading_pane_t1

0x956e,	// (0x00077681) main_vids_pane

0x956e,	// (0x00077681) vids_listscroll_pane

0x9529,	// (0x0007763c) scroll_pane_cp040

0x956e,	// (0x00077681) vids_list_pane

0x9534,	// (0x00077647) vids_list_double_pane_ParamLimits

0x9534,	// (0x00077647) vids_list_double_pane

0x9545,	// (0x00077658) vids_list_double_pane_g1

0x954e,	// (0x00077661) vids_list_double_pane_t1

0x955e,	// (0x00077671) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x0007e075) vids_list_double_pane_t

0x95c7,	// (0x000776da) main_ncimui_pane_ParamLimits

0x758f,	// (0x000756a2) main_ncimui_pane_g1_ParamLimits

0x759b,	// (0x000756ae) main_ncimui_pane_g2_ParamLimits

0x759b,	// (0x000756ae) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x0007dcfd) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x0007dcfd) main_ncimui_pane_g

0x94b9,	// (0x000775cc) main_welc_pane_g1_ParamLimits

0x94b9,	// (0x000775cc) main_welc_pane_g1

0x94ce,	// (0x000775e1) main_welc_pane_g2_ParamLimits

0x94ce,	// (0x000775e1) main_welc_pane_g2

0x0001,

0xff5d,	// (0x0007e070) main_welc_pane_g_ParamLimits

0xff5d,	// (0x0007e070) main_welc_pane_g

0x9c43,	// (0x00077d56) listscroll_mce_pane_ParamLimits

0x2716,	// (0x00070829) wait_bar_pane_cp10

0xc80e,	// (0x0007a921) main_cale_day_pane_ParamLimits

0xc80e,	// (0x0007a921) main_cale_week_pane_ParamLimits

0x9c43,	// (0x00077d56) main_messa_pane_ParamLimits

0x4de8,	// (0x00072efb) main_clock2_btn_pane_ParamLimits

0x4de8,	// (0x00072efb) main_clock2_btn_pane

0xd02b,	// (0x0007b13e) main_clock2_btn_pane_cp01_ParamLimits

0xd02b,	// (0x0007b13e) main_clock2_btn_pane_cp01

0xe9d1,	// (0x0007cae4) list_cale_mrui_pane_ParamLimits

0xee13,	// (0x0007cf26) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x0007dfca) main_cf0_pane_g

0x907d,	// (0x00077190) area_left_week_number_pane_ParamLimits

0x908b,	// (0x0007719e) area_top_day_name_pane_ParamLimits

0x909e,	// (0x000771b1) frame_month_view_pane_ParamLimits

0xef3b,	// (0x0007d04e) grid_month_view_pane_ParamLimits

0xef49,	// (0x0007d05c) frm_month_g1_ParamLimits

0x9125,	// (0x00077238) frm_month_g2_ParamLimits

0x9138,	// (0x0007724b) frm_month_g3_ParamLimits

0x914b,	// (0x0007725e) frm_month_g4_ParamLimits

0x915e,	// (0x00077271) frm_month_g5_ParamLimits

0x9171,	// (0x00077284) frm_month_g6_ParamLimits

0x9184,	// (0x00077297) frm_month_g7_ParamLimits

0xef56,	// (0x0007d069) frm_month_g8_ParamLimits

0x9199,	// (0x000772ac) frm_month_g9_ParamLimits

0x91a9,	// (0x000772bc) frm_month_g10_ParamLimits

0x91b9,	// (0x000772cc) frm_month_g11_ParamLimits

0x91c9,	// (0x000772dc) frm_month_g12_ParamLimits

0x91db,	// (0x000772ee) frm_month_g13_ParamLimits

0x91ef,	// (0x00077302) frm_month_g14_ParamLimits

0x9203,	// (0x00077316) frm_month_g15_ParamLimits

0x9217,	// (0x0007732a) frm_month_g16_ParamLimits

0xff08,	// (0x0007e01b) frm_month_g_ParamLimits

0xef63,	// (0x0007d076) cell_top_day_name_pane_t1_ParamLimits

0x922b,	// (0x0007733e) cell_area_left_week_number_pane_g1_ParamLimits

0x9237,	// (0x0007734a) cell_area_left_week_number_pane_t1_ParamLimits

0xce9b,	// (0x0007afae) cell_month_view_pane_g1_ParamLimits

0x924a,	// (0x0007735d) cell_month_view_pane_t1_ParamLimits

0x9c3b,	// (0x00077d4e) main_clock2_btn_pane_g1

0xf0b0,	// (0x0007d1c3) main_clock2_btn_pane_t1

0x95c7,	// (0x000776da) listscroll_cmail_pane_ParamLimits

0xe754,	// (0x0007c867) main_sp_fs_email_pane_g1_ParamLimits

0xe760,	// (0x0007c873) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x0007ddf8) main_sp_fs_email_pane_g_ParamLimits

0xeadd,	// (0x0007cbf0) list_recal_day_pane_ParamLimits

0xeaee,	// (0x0007cc01) mian_recal_day_pane_t1

0x807a,	// (0x0007618d) list_single_dyc_row_text_pane_t4_ParamLimits

0x807a,	// (0x0007618d) list_single_dyc_row_text_pane_t4

0x80c3,	// (0x000761d6) list_single_dyc_row_text_pane_t5_ParamLimits

0x80c3,	// (0x000761d6) list_single_dyc_row_text_pane_t5

0xa63f,	// (0x00078752) list_single_dyc_row_text_pane_t6_ParamLimits

0xa63f,	// (0x00078752) list_single_dyc_row_text_pane_t6

0xae68,	// (0x00078f7b) aid_mgn_list_cale_time_pane

0x95c7,	// (0x000776da) main_gallery2_pane_ParamLimits

0xd03f,	// (0x0007b152) main_clock2_pane_cp01_t1

0xd04f,	// (0x0007b162) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0007d8d7) main_clock2_pane_cp01_t

0x0627,	// (0x0006e73a) cale_week_scroll_pane_g16_ParamLimits

0x0627,	// (0x0006e73a) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
