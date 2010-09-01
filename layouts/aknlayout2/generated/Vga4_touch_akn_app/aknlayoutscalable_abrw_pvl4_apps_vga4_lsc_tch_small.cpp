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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005931f };

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
0x0e4e,	// (0x0005a16d) Screen

0x0e5a,	// (0x0005a179) application_window

0x0e96,	// (0x0005a1b5) area_bottom_pane_ParamLimits

0x0e96,	// (0x0005a1b5) area_bottom_pane

0x0ecf,	// (0x0005a1ee) area_top_pane_ParamLimits

0x0ecf,	// (0x0005a1ee) area_top_pane

0x9b8b,	// (0x00062eaa) call_video_uplink_pane_ParamLimits

0x9b8b,	// (0x00062eaa) call_video_uplink_pane

0x0f5d,	// (0x0005a27c) main_pane_ParamLimits

0x0f5d,	// (0x0005a27c) main_pane

0xe750,	// (0x00067a6f) context_pane

0x426a,	// (0x0005d589) navi_pane

0x42a1,	// (0x0005d5c0) popup_cale_events_window_ParamLimits

0x42a1,	// (0x0005d5c0) popup_cale_events_window

0xe763,	// (0x00067a82) popup_mup_playback_window

0x42b9,	// (0x0005d5d8) signal_pane

0xa381,	// (0x000636a0) main_browser_pane

0xa594,	// (0x000638b3) main_burst_pane

0x3f66,	// (0x0005d285) main_calc_pane

0xe744,	// (0x00067a63) main_cale_day_pane

0x3f7a,	// (0x0005d299) main_cale_month_pane

0xe744,	// (0x00067a63) main_cale_week_pane

0xa594,	// (0x000638b3) main_call_pane

0xa009,	// (0x00063328) main_call_poc_pane

0xa594,	// (0x000638b3) main_camera_pane

0xa594,	// (0x000638b3) main_chi_dic_pane

0xae29,	// (0x00064148) main_clock_pane

0xa009,	// (0x00063328) main_fmradio_pane

0xa594,	// (0x000638b3) main_graph_messa_pane

0xa009,	// (0x00063328) main_help_pane

0xa381,	// (0x000636a0) main_im_pane

0xa264,	// (0x00063583) main_image_pane_ParamLimits

0xa264,	// (0x00063583) main_image_pane

0xa009,	// (0x00063328) main_location2_pane

0xa594,	// (0x000638b3) main_location_pane

0xa264,	// (0x00063583) main_messa_pane

0xa009,	// (0x00063328) main_mp2_pane

0xa594,	// (0x000638b3) main_mp_pane

0xa009,	// (0x00063328) main_msg_pane

0xa009,	// (0x00063328) main_mup_eq_pane

0xa009,	// (0x00063328) main_mup_pane

0xa381,	// (0x000636a0) main_notes_pane

0xa009,	// (0x00063328) main_pec_pane

0xa009,	// (0x00063328) main_phob_pane

0xa009,	// (0x00063328) main_pinb_pane

0xa009,	// (0x00063328) main_postcard_pane

0xa009,	// (0x00063328) main_qdial_pane

0xa594,	// (0x000638b3) main_skin_pane

0xa009,	// (0x00063328) main_smil2_pane

0xa594,	// (0x000638b3) main_smil_pane

0xa594,	// (0x000638b3) main_video_pane

0xa594,	// (0x000638b3) main_video_tele_pane

0xa264,	// (0x00063583) main_viewer_pane_ParamLimits

0xa264,	// (0x00063583) main_viewer_pane

0xa594,	// (0x000638b3) main_vorec_pane

0x3fd8,	// (0x0005d2f7) popup_blid_sat_info_window_ParamLimits

0x3fd8,	// (0x0005d2f7) popup_blid_sat_info_window

0x403c,	// (0x0005d35b) popup_dyc_status_message_window_ParamLimits

0x403c,	// (0x0005d35b) popup_dyc_status_message_window

0x4056,	// (0x0005d375) popup_grid_large_graphic_window_ParamLimits

0x4056,	// (0x0005d375) popup_grid_large_graphic_window

0x4118,	// (0x0005d437) popup_loc_request_window_ParamLimits

0x4118,	// (0x0005d437) popup_loc_request_window

0x423e,	// (0x0005d55d) popup_wml_address_window_ParamLimits

0x423e,	// (0x0005d55d) popup_wml_address_window

0x3da4,	// (0x0005d0c3) call_muted_g1

0x39f2,	// (0x0005cd11) popup_call_audio_conf_window_ParamLimits

0x39f2,	// (0x0005cd11) popup_call_audio_conf_window

0x3db4,	// (0x0005d0d3) popup_call_audio_first_window_ParamLimits

0x3db4,	// (0x0005d0d3) popup_call_audio_first_window

0x3e2a,	// (0x0005d149) popup_call_audio_in_window_ParamLimits

0x3e2a,	// (0x0005d149) popup_call_audio_in_window

0x3e66,	// (0x0005d185) popup_call_audio_out_window_ParamLimits

0x3e66,	// (0x0005d185) popup_call_audio_out_window

0x3ea0,	// (0x0005d1bf) popup_call_audio_second_window_ParamLimits

0x3ea0,	// (0x0005d1bf) popup_call_audio_second_window

0x3ef6,	// (0x0005d215) popup_call_audio_wait_window_ParamLimits

0x3ef6,	// (0x0005d215) popup_call_audio_wait_window

0x3f2b,	// (0x0005d24a) popup_number_entry_window_ParamLimits

0x3f2b,	// (0x0005d24a) popup_number_entry_window

0x9bc1,	// (0x00062ee0) bg_popup_call_pane_cp05_ParamLimits

0x9bc1,	// (0x00062ee0) bg_popup_call_pane_cp05

0x9be1,	// (0x00062f00) popup_number_entry_window_t1

0x9bf4,	// (0x00062f13) popup_number_entry_window_t2

0x9c06,	// (0x00062f25) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x000683a4) popup_number_entry_window_t

0x9c4d,	// (0x00062f6c) text_title_cp2

0x9c60,	// (0x00062f7f) bg_popup_call_pane_cp_ParamLimits

0x9c60,	// (0x00062f7f) bg_popup_call_pane_cp

0x9c6e,	// (0x00062f8d) call_thumbnail_pane

0x9c76,	// (0x00062f95) popup_call_audio_in_window_g1_ParamLimits

0x9c76,	// (0x00062f95) popup_call_audio_in_window_g1

0x9c82,	// (0x00062fa1) popup_call_audio_in_window_g2_ParamLimits

0x9c82,	// (0x00062fa1) popup_call_audio_in_window_g2

0x9c8e,	// (0x00062fad) popup_call_audio_in_window_g3_ParamLimits

0x9c8e,	// (0x00062fad) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x000683ad) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x000683ad) popup_call_audio_in_window_g

0x9c9a,	// (0x00062fb9) popup_call_audio_in_window_t1_ParamLimits

0x9c9a,	// (0x00062fb9) popup_call_audio_in_window_t1

0x9cb6,	// (0x00062fd5) popup_call_audio_in_window_t2_ParamLimits

0x9cb6,	// (0x00062fd5) popup_call_audio_in_window_t2

0x9cd2,	// (0x00062ff1) popup_call_audio_in_window_t3_ParamLimits

0x9cd2,	// (0x00062ff1) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x000683b4) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x000683b4) popup_call_audio_in_window_t

0x9c60,	// (0x00062f7f) bg_popup_call_pane_cp01_ParamLimits

0x9c60,	// (0x00062f7f) bg_popup_call_pane_cp01

0x9c6e,	// (0x00062f8d) call_thumbnail_pane_cp02

0x9ce5,	// (0x00063004) call_type_pane_cp022

0x9ced,	// (0x0006300c) popup_call_audio_out_window_g1_ParamLimits

0x9ced,	// (0x0006300c) popup_call_audio_out_window_g1

0x9cff,	// (0x0006301e) popup_call_audio_out_window_g2_ParamLimits

0x9cff,	// (0x0006301e) popup_call_audio_out_window_g2

0x9d0b,	// (0x0006302a) popup_call_audio_out_window_g3_ParamLimits

0x9d0b,	// (0x0006302a) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x000683bb) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x000683bb) popup_call_audio_out_window_g

0x9d1d,	// (0x0006303c) popup_call_audio_out_window_t1_ParamLimits

0x9d1d,	// (0x0006303c) popup_call_audio_out_window_t1

0x9d35,	// (0x00063054) popup_call_audio_out_window_t2_ParamLimits

0x9d35,	// (0x00063054) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x000683c2) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x000683c2) popup_call_audio_out_window_t

0x9d4a,	// (0x00063069) bg_popup_call_pane_ParamLimits

0x9d4a,	// (0x00063069) bg_popup_call_pane

0x10e4,	// (0x0005a403) call_thumbnail_pane_cp_ParamLimits

0x10e4,	// (0x0005a403) call_thumbnail_pane_cp

0x9dce,	// (0x000630ed) call_type_pane_cp01_ParamLimits

0x9dce,	// (0x000630ed) call_type_pane_cp01

0x9e12,	// (0x00063131) popup_call_audio_first_window_g1_ParamLimits

0x9e12,	// (0x00063131) popup_call_audio_first_window_g1

0x9e5e,	// (0x0006317d) popup_call_audio_first_window_g2_ParamLimits

0x9e5e,	// (0x0006317d) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x000683c7) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x000683c7) popup_call_audio_first_window_g

0x9ea2,	// (0x000631c1) popup_call_audio_first_window_t1_ParamLimits

0x9ea2,	// (0x000631c1) popup_call_audio_first_window_t1

0x9f4e,	// (0x0006326d) popup_call_audio_first_window_t4_ParamLimits

0x9f4e,	// (0x0006326d) popup_call_audio_first_window_t4

0x9fda,	// (0x000632f9) popup_call_audio_first_window_t5_ParamLimits

0x9fda,	// (0x000632f9) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x000683cc) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x000683cc) popup_call_audio_first_window_t

0xa009,	// (0x00063328) bg_popup_call_pane_cp02

0xa013,	// (0x00063332) call_type_pane_cp023

0xa01b,	// (0x0006333a) popup_call_audio_wait_window_g1

0xa023,	// (0x00063342) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x000683d3) popup_call_audio_wait_window_g

0xa02b,	// (0x0006334a) popup_call_audio_wait_window_t3

0xa039,	// (0x00063358) bg_popup_call_pane_cp03_ParamLimits

0xa039,	// (0x00063358) bg_popup_call_pane_cp03

0xa099,	// (0x000633b8) call_thumbnail_pane_cp011_ParamLimits

0xa099,	// (0x000633b8) call_thumbnail_pane_cp011

0xa0a5,	// (0x000633c4) call_type_pane_cp034_ParamLimits

0xa0a5,	// (0x000633c4) call_type_pane_cp034

0xa0e1,	// (0x00063400) popup_call_audio_second_window_g1_ParamLimits

0xa0e1,	// (0x00063400) popup_call_audio_second_window_g1

0xa11d,	// (0x0006343c) popup_call_audio_second_window_g2_ParamLimits

0xa11d,	// (0x0006343c) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x000683d8) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x000683d8) popup_call_audio_second_window_g

0xa159,	// (0x00063478) popup_call_audio_second_window_t1_ParamLimits

0xa159,	// (0x00063478) popup_call_audio_second_window_t1

0xa1da,	// (0x000634f9) popup_call_audio_second_window_t2_ParamLimits

0xa1da,	// (0x000634f9) popup_call_audio_second_window_t2

0xa210,	// (0x0006352f) popup_call_audio_second_window_t3_ParamLimits

0xa210,	// (0x0006352f) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x000683dd) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x000683dd) popup_call_audio_second_window_t

0xa009,	// (0x00063328) bg_popup_call_pane_cp04

0xa246,	// (0x00063565) list_conf_pane

0xa24e,	// (0x0006356d) popup_call_audio_conf_window_t1

0xa25c,	// (0x0006357b) call_thumbnail_pane_g1

0xa264,	// (0x00063583) bg_pinb_pane_ParamLimits

0xa264,	// (0x00063583) bg_pinb_pane

0xa272,	// (0x00063591) find_pinb_pane

0xa264,	// (0x00063583) listscroll_pinb_pane_ParamLimits

0xa264,	// (0x00063583) listscroll_pinb_pane

0xa27c,	// (0x0006359b) pinb_bg_pane_g1

0xa27c,	// (0x0006359b) pinb_bg_pane_g2

0xa27c,	// (0x0006359b) pinb_bg_pane_g3

0xa27c,	// (0x0006359b) pinb_bg_pane_g4

0xa27c,	// (0x0006359b) pinb_bg_pane_g5

0xa27c,	// (0x0006359b) pinb_bg_pane_g6

0xa27c,	// (0x0006359b) pinb_bg_pane_g7

0xa27c,	// (0x0006359b) pinb_bg_pane_g8

0xa27c,	// (0x0006359b) pinb_bg_pane_g9

0xa27c,	// (0x0006359b) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x000683e4) pinb_bg_pane_g

0x9b2c,	// (0x00062e4b) grid_pinb_pane

0x9b2c,	// (0x00062e4b) list_pinb_pane

0xa286,	// (0x000635a5) scroll_pane_cp01_ParamLimits

0xa286,	// (0x000635a5) scroll_pane_cp01

0xa294,	// (0x000635b3) find_pinb_pane_g1_ParamLimits

0xa294,	// (0x000635b3) find_pinb_pane_g1

0xa2ac,	// (0x000635cb) find_pinb_pane_t1

0xa2be,	// (0x000635dd) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x000683fe) find_pinb_pane_t

0xa2d3,	// (0x000635f2) input_focus_pane_cp01_ParamLimits

0xa2d3,	// (0x000635f2) input_focus_pane_cp01

0xa2df,	// (0x000635fe) cell_pinb_pane_ParamLimits

0xa2df,	// (0x000635fe) cell_pinb_pane

0xa2ed,	// (0x0006360c) cell_pinb_pane_g1_ParamLimits

0xa2ed,	// (0x0006360c) cell_pinb_pane_g1

0xa2fb,	// (0x0006361a) cell_pinb_pane_g2_ParamLimits

0xa2fb,	// (0x0006361a) cell_pinb_pane_g2

0xa2fb,	// (0x0006361a) cell_pinb_pane_g3_ParamLimits

0xa2fb,	// (0x0006361a) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x00068403) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x00068403) cell_pinb_pane_g

0xa009,	// (0x00063328) grid_highlight_pane_cp01

0xa2df,	// (0x000635fe) list_pinb_item_pane_ParamLimits

0xa2df,	// (0x000635fe) list_pinb_item_pane

0x9b2c,	// (0x00062e4b) list_highlight_pane_cp02

0xa309,	// (0x00063628) list_pinb_item_pane_g1_ParamLimits

0xa309,	// (0x00063628) list_pinb_item_pane_g1

0xa2fb,	// (0x0006361a) list_pinb_item_pane_g2_ParamLimits

0xa2fb,	// (0x0006361a) list_pinb_item_pane_g2

0xa2ed,	// (0x0006360c) list_pinb_item_pane_g3_ParamLimits

0xa2ed,	// (0x0006360c) list_pinb_item_pane_g3

0xa2fb,	// (0x0006361a) list_pinb_item_pane_g4_ParamLimits

0xa2fb,	// (0x0006361a) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x0006840a) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x0006840a) list_pinb_item_pane_g

0xa317,	// (0x00063636) list_pinb_item_pane_t1_ParamLimits

0xa317,	// (0x00063636) list_pinb_item_pane_t1

0x1128,	// (0x0005a447) calc_display_pane

0x114d,	// (0x0005a46c) calc_paper_pane

0x1170,	// (0x0005a48f) grid_calc_pane

0xa009,	// (0x00063328) bg_list_pane_cp01

0x119e,	// (0x0005a4bd) clock_g1

0x11a6,	// (0x0005a4c5) clock_g2

0x0001,

0xf0f4,	// (0x00068413) clock_g

0x11ae,	// (0x0005a4cd) clock_t1_ParamLimits

0x11ae,	// (0x0005a4cd) clock_t1

0x11c3,	// (0x0005a4e2) clock_t2_ParamLimits

0x11c3,	// (0x0005a4e2) clock_t2

0x11d5,	// (0x0005a4f4) clock_t3_ParamLimits

0x11d5,	// (0x0005a4f4) clock_t3

0x11e7,	// (0x0005a506) clock_t4_ParamLimits

0x11e7,	// (0x0005a506) clock_t4

0x11f9,	// (0x0005a518) clock_t5_ParamLimits

0x11f9,	// (0x0005a518) clock_t5

0x120e,	// (0x0005a52d) clock_t6_ParamLimits

0x120e,	// (0x0005a52d) clock_t6

0x1220,	// (0x0005a53f) clock_t7_ParamLimits

0x1220,	// (0x0005a53f) clock_t7

0x1232,	// (0x0005a551) clock_t8_ParamLimits

0x1232,	// (0x0005a551) clock_t8

0x1246,	// (0x0005a565) clock_t9_ParamLimits

0x1246,	// (0x0005a565) clock_t9

0x0008,

0xf0f9,	// (0x00068418) clock_t_ParamLimits

0xf0f9,	// (0x00068418) clock_t

0xa333,	// (0x00063652) popup_clock_analogue_window_cp02

0xa333,	// (0x00063652) popup_clock_digital_window_cp01

0xa009,	// (0x00063328) listscroll_help_pane

0xa009,	// (0x00063328) phob_pre_status_pane

0xa33b,	// (0x0006365a) grid_qdial_pane

0xa264,	// (0x00063583) listscroll_mce_pane

0xa264,	// (0x00063583) bg_notes_pane

0xa345,	// (0x00063664) list_notes_pane

0x125c,	// (0x0005a57b) scroll_pane_cp06

0xa353,	// (0x00063672) bg_calc_paper_pane

0xa367,	// (0x00063686) list_calc_pane

0xa381,	// (0x000636a0) bg_calc_display_pane

0x1270,	// (0x0005a58f) calc_display_pane_t1

0x1282,	// (0x0005a5a1) calc_display_pane_t2

0xa38d,	// (0x000636ac) calc_display_pane_t3

0x0002,

0xf10c,	// (0x0006842b) calc_display_pane_t

0x1294,	// (0x0005a5b3) cell_calc_pane_ParamLimits

0x1294,	// (0x0005a5b3) cell_calc_pane

0xa39f,	// (0x000636be) bg_calc_paper_pane_g1

0xa3ab,	// (0x000636ca) bg_calc_paper_pane_g2

0xa3b7,	// (0x000636d6) bg_calc_paper_pane_g3

0xa3c3,	// (0x000636e2) bg_calc_paper_pane_g4

0xa3cf,	// (0x000636ee) bg_calc_paper_pane_g5

0x12cf,	// (0x0005a5ee) bg_calc_paper_pane_g6

0x12dd,	// (0x0005a5fc) bg_calc_paper_pane_g7

0x12eb,	// (0x0005a60a) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x00068432) bg_calc_paper_pane_g

0x12fe,	// (0x0005a61d) calc_bg_paper_pane_g9

0x1311,	// (0x0005a630) list_calc_item_pane_ParamLimits

0x1311,	// (0x0005a630) list_calc_item_pane

0xa3db,	// (0x000636fa) list_calc_item_pane_g1

0xa3e8,	// (0x00063707) list_calc_item_pane_t1_ParamLimits

0xa3e8,	// (0x00063707) list_calc_item_pane_t1

0x1329,	// (0x0005a648) list_calc_item_pane_t2_ParamLimits

0x1329,	// (0x0005a648) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x00068443) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x00068443) list_calc_item_pane_t

0xa27c,	// (0x0006359b) cell_calc_pane_g1

0xa3fa,	// (0x00063719) grid_highlight_pane_cp02

0x135b,	// (0x0005a67a) bg_calc_display_pane_g1

0x1364,	// (0x0005a683) bg_calc_display_pane_g2

0xa41c,	// (0x0006373b) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x0006844d) bg_calc_display_pane_g

0x136e,	// (0x0005a68d) cell_qdial_pane_ParamLimits

0x136e,	// (0x0005a68d) cell_qdial_pane

0x1382,	// (0x0005a6a1) cell_qdial_pane_g1_ParamLimits

0x1382,	// (0x0005a6a1) cell_qdial_pane_g1

0x1398,	// (0x0005a6b7) cell_qdial_pane_g2_ParamLimits

0x1398,	// (0x0005a6b7) cell_qdial_pane_g2

0xa425,	// (0x00063744) cell_qdial_pane_g3_ParamLimits

0xa425,	// (0x00063744) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00068454) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00068454) cell_qdial_pane_g

0x13bf,	// (0x0005a6de) cell_qdial_pane_t1_ParamLimits

0x13bf,	// (0x0005a6de) cell_qdial_pane_t1

0x13d7,	// (0x0005a6f6) cell_qdial_pane_t2_ParamLimits

0x13d7,	// (0x0005a6f6) cell_qdial_pane_t2

0x13ea,	// (0x0005a709) cell_qdial_pane_t3_ParamLimits

0x13ea,	// (0x0005a709) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x0006845d) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x0006845d) cell_qdial_pane_t

0xa009,	// (0x00063328) grid_highlight_pane_cp04

0xa431,	// (0x00063750) thumbnail_qdial_pane_ParamLimits

0xa431,	// (0x00063750) thumbnail_qdial_pane

0xa48d,	// (0x000637ac) list_help_pane

0xa496,	// (0x000637b5) scroll_pane_cp02

0x13fd,	// (0x0005a71c) help_list_pane_t1_ParamLimits

0x13fd,	// (0x0005a71c) help_list_pane_t1

0xa49f,	// (0x000637be) bg_notes_pane_g2

0xa4a7,	// (0x000637c6) bg_notes_pane_g3

0xa4af,	// (0x000637ce) notes_bg_pane_g1

0xa4b7,	// (0x000637d6) notes_bg_pane_g4

0xa4bf,	// (0x000637de) notes_bg_pane_g5

0xa4c7,	// (0x000637e6) notes_bg_pane_g6

0xa4cf,	// (0x000637ee) notes_bg_pane_g7

0xa4d7,	// (0x000637f6) notes_bg_pane_g8

0xa4df,	// (0x000637fe) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x0006847b) notes_bg_pane_g

0x1421,	// (0x0005a740) list_notes_text_pane_ParamLimits

0x1421,	// (0x0005a740) list_notes_text_pane

0xa4e7,	// (0x00063806) list_notes_text_pane_g1

0x1438,	// (0x0005a757) list_notes_text_pane_t1

0x1446,	// (0x0005a765) listscroll_cale_week_pane

0x1470,	// (0x0005a78f) bg_cale_heading_pane

0x1494,	// (0x0005a7b3) bg_cale_pane_cp01

0x14b1,	// (0x0005a7d0) cale_week_corner_pane

0x14d0,	// (0x0005a7ef) cale_week_day_heading_pane

0x14f9,	// (0x0005a818) cale_week_scroll_pane_g1

0x1518,	// (0x0005a837) cale_week_scroll_pane_g2

0x1530,	// (0x0005a84f) cale_week_scroll_pane_g3

0x1548,	// (0x0005a867) cale_week_scroll_pane_g4

0x1560,	// (0x0005a87f) cale_week_scroll_pane_g5

0x1580,	// (0x0005a89f) cale_week_scroll_pane_g6

0x15a0,	// (0x0005a8bf) cale_week_scroll_pane_g7

0x15c4,	// (0x0005a8e3) cale_week_scroll_pane_g8

0x15e8,	// (0x0005a907) cale_week_scroll_pane_g9

0x1600,	// (0x0005a91f) cale_week_scroll_pane_g10

0x1618,	// (0x0005a937) cale_week_scroll_pane_g11

0x1630,	// (0x0005a94f) cale_week_scroll_pane_g12

0x1654,	// (0x0005a973) cale_week_scroll_pane_g13

0x1654,	// (0x0005a973) cale_week_scroll_pane_g14

0x1654,	// (0x0005a973) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0006848a) cale_week_scroll_pane_g

0x169c,	// (0x0005a9bb) cale_week_time_pane

0x16c0,	// (0x0005a9df) grid_cale_week_pane

0xa51c,	// (0x0006383b) scroll_pane_cp08

0x16f2,	// (0x0005aa11) cell_cale_week_pane_ParamLimits

0x16f2,	// (0x0005aa11) cell_cale_week_pane

0x178e,	// (0x0005aaad) cale_week_day_heading_pane_t1

0x17b8,	// (0x0005aad7) cale_week_day_heading_pane_t2

0x17e7,	// (0x0005ab06) cale_week_day_heading_pane_t3

0x1816,	// (0x0005ab35) cale_week_day_heading_pane_t4

0x1845,	// (0x0005ab64) cale_week_day_heading_pane_t5

0x1878,	// (0x0005ab97) cale_week_day_heading_pane_t6

0x18af,	// (0x0005abce) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x000684ab) cale_week_day_heading_pane_t

0xa539,	// (0x00063858) bg_cale_side_pane

0x18d9,	// (0x0005abf8) cale_week_time_pane_t1

0x18f3,	// (0x0005ac12) cale_week_time_pane_t2

0x190d,	// (0x0005ac2c) cale_week_time_pane_t3

0x1927,	// (0x0005ac46) cale_week_time_pane_t4

0x1941,	// (0x0005ac60) cale_week_time_pane_t5

0x195b,	// (0x0005ac7a) cale_week_time_pane_t6

0x197b,	// (0x0005ac9a) cale_week_time_pane_t7

0x19a1,	// (0x0005acc0) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x000684ba) cale_week_time_pane_t

0x19c7,	// (0x0005ace6) cell_cale_week_pane_g2

0x19eb,	// (0x0005ad0a) cell_cale_week_pane_g3_ParamLimits

0x19eb,	// (0x0005ad0a) cell_cale_week_pane_g3

0xa547,	// (0x00063866) grid_highlight_pane_cp07

0xa54f,	// (0x0006386e) listscroll_gms_pane

0xa559,	// (0x00063878) grid_gms_pane

0xa562,	// (0x00063881) listscroll_gms_pane_g1

0xa56a,	// (0x00063889) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x000684cb) listscroll_gms_pane_g

0x1a03,	// (0x0005ad22) scroll_pane_cp010

0x1a0e,	// (0x0005ad2d) cell_gms_pane_ParamLimits

0x1a0e,	// (0x0005ad2d) cell_gms_pane

0x1a25,	// (0x0005ad44) cell_gms_pane_g1

0xa572,	// (0x00063891) cell_gms_pane_g2

0xa57a,	// (0x00063899) cell_gms_pane_g3

0xa583,	// (0x000638a2) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x000684d0) cell_gms_pane_g

0xa58c,	// (0x000638ab) grid_highlight_pane_cp09

0x3d28,	// (0x0005d047) phob_pre_status_pane_g1

0x3d30,	// (0x0005d04f) phob_pre_status_pane_g2

0x3d38,	// (0x0005d057) phob_pre_status_pane_g3

0x3d40,	// (0x0005d05f) phob_pre_status_pane_g4

0x0004,

0xf50a,	// (0x00068829) phob_pre_status_pane_g

0x3d50,	// (0x0005d06f) phob_pre_status_pane_t1

0x3d60,	// (0x0005d07f) phob_pre_status_pane_t2

0x3d70,	// (0x0005d08f) phob_pre_status_pane_t3

0x0002,

0xf515,	// (0x00068834) phob_pre_status_pane_t

0xa594,	// (0x000638b3) bg_list_pane_cp05

0x1a35,	// (0x0005ad54) grid_vorec_pane

0x1a3f,	// (0x0005ad5e) vorec_t1

0x1a4d,	// (0x0005ad6c) vorec_t2

0x1a5b,	// (0x0005ad7a) vorec_t3

0x1a69,	// (0x0005ad88) vorec_t4

0x9929,	// (0x00062c48) vorec_t5

0x9937,	// (0x00062c56) vorec_t6

0x0004,

0xf1ba,	// (0x000684d9) vorec_t

0x9945,	// (0x00062c64) wait_bar_pane_cp01

0xa59c,	// (0x000638bb) cell_vorec_pane_ParamLimits

0xa59c,	// (0x000638bb) cell_vorec_pane

0xa5b1,	// (0x000638d0) cell_vorec_pane_g1

0xa009,	// (0x00063328) grid_highlight_pane_cp05

0xa286,	// (0x000635a5) cams_zoom_pane

0xa286,	// (0x000635a5) image_vga_pane

0xa2ed,	// (0x0006360c) main_camera_pane_g1

0xa2ed,	// (0x0006360c) main_camera_pane_g2

0xa2ed,	// (0x0006360c) main_camera_pane_g3

0xa2ed,	// (0x0006360c) main_camera_pane_g4

0xa2ed,	// (0x0006360c) main_camera_pane_g5

0xa2ed,	// (0x0006360c) main_camera_pane_g6

0xa2ed,	// (0x0006360c) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x000684e4) main_camera_pane_g

0xa5bb,	// (0x000638da) main_camera_pane_t1

0xa5bb,	// (0x000638da) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x000684f5) main_camera_pane_t

0x1a99,	// (0x0005adb8) cams_zoom_pane_cp_ParamLimits

0x1a99,	// (0x0005adb8) cams_zoom_pane_cp

0x1acd,	// (0x0005adec) image_cif_pane_ParamLimits

0x1acd,	// (0x0005adec) image_cif_pane

0x9b2c,	// (0x00062e4b) image_subqcif_pane

0x1adf,	// (0x0005adfe) main_video_pane_g1_ParamLimits

0x1adf,	// (0x0005adfe) main_video_pane_g1

0x1b0d,	// (0x0005ae2c) main_video_pane_g2_ParamLimits

0x1b0d,	// (0x0005ae2c) main_video_pane_g2

0x1b47,	// (0x0005ae66) main_video_pane_g3_ParamLimits

0x1b47,	// (0x0005ae66) main_video_pane_g3

0x1b47,	// (0x0005ae66) main_video_pane_g4_ParamLimits

0x1b47,	// (0x0005ae66) main_video_pane_g4

0x1b7b,	// (0x0005ae9a) main_video_pane_g5_ParamLimits

0x1b7b,	// (0x0005ae9a) main_video_pane_g5

0xa5cf,	// (0x000638ee) main_video_pane_g6_ParamLimits

0xa5cf,	// (0x000638ee) main_video_pane_g6

0x0006,

0xf1db,	// (0x000684fa) main_video_pane_g_ParamLimits

0xf1db,	// (0x000684fa) main_video_pane_g

0x1b97,	// (0x0005aeb6) main_video_pane_t1_ParamLimits

0x1b97,	// (0x0005aeb6) main_video_pane_t1

0xa5e9,	// (0x00063908) cams_zoom_pane_g1

0xa5e9,	// (0x00063908) cams_zoom_pane_g2

0xa5e9,	// (0x00063908) cams_zoom_pane_g3

0xa5e9,	// (0x00063908) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x00068509) cams_zoom_pane_g

0x1bef,	// (0x0005af0e) grid_cams_pane

0x1c09,	// (0x0005af28) linegrid_cams_pane

0x1c1b,	// (0x0005af3a) cell_cams_pane_ParamLimits

0x1c1b,	// (0x0005af3a) cell_cams_pane

0xa5f3,	// (0x00063912) cams_burst_image_pane

0xa5fb,	// (0x0006391a) cell_cams_pane_g1

0xa009,	// (0x00063328) grid_highlight_pane_cp03

0xa27c,	// (0x0006359b) mp_bg_pane_g1

0x9b2c,	// (0x00062e4b) bg_list_pane_cp03

0x9b2c,	// (0x00062e4b) bg_mp_pane

0x9b2c,	// (0x00062e4b) grid_mp_pane

0xa5e9,	// (0x00063908) media_player_g1

0xab4f,	// (0x00063e6e) media_player_t1

0xab4f,	// (0x00063e6e) media_player_t2

0xab4f,	// (0x00063e6e) media_player_t3

0xab4f,	// (0x00063e6e) media_player_t4

0xab4f,	// (0x00063e6e) media_player_t5

0xab4f,	// (0x00063e6e) media_player_t6

0xab4f,	// (0x00063e6e) media_player_t7

0x0006,

0xf4fb,	// (0x0006881a) media_player_t

0x9b2c,	// (0x00062e4b) wait_bar_pane_cp02

0xf4ee,	// (0x0006880d) main_usb_pane_t

0xae29,	// (0x00064148) cell_mp_pane

0xa27c,	// (0x0006359b) cell_mp_pane_g1

0xa009,	// (0x00063328) grid_highlight_pane_cp06

0xa603,	// (0x00063922) grid_skin_colour_pane

0xa60b,	// (0x0006392a) list_highlight_pane_cp03

0x1c3d,	// (0x0005af5c) skin_g1

0xa613,	// (0x00063932) skin_t1

0xa622,	// (0x00063941) skin_t2

0x0001,

0xf218,	// (0x00068537) skin_t

0x1c47,	// (0x0005af66) cell_skin_colour_pane_ParamLimits

0x1c47,	// (0x0005af66) cell_skin_colour_pane

0xa630,	// (0x0006394f) cell_skin_colour_pane_g1

0x1cba,	// (0x0005afd9) call_video_g1_ParamLimits

0x1cba,	// (0x0005afd9) call_video_g1

0x1cd6,	// (0x0005aff5) call_video_g2_ParamLimits

0x1cd6,	// (0x0005aff5) call_video_g2

0x0001,

0xf21d,	// (0x0006853c) call_video_g_ParamLimits

0xf21d,	// (0x0006853c) call_video_g

0x1d1b,	// (0x0005b03a) call_video_uplink_pane_cp1_ParamLimits

0x1d1b,	// (0x0005b03a) call_video_uplink_pane_cp1

0xa642,	// (0x00063961) call_video_uplink_pane_cp2

0x1dbc,	// (0x0005b0db) video_down_crop_pane_ParamLimits

0x1dbc,	// (0x0005b0db) video_down_crop_pane

0x1ea5,	// (0x0005b1c4) video_down_pane_ParamLimits

0x1ea5,	// (0x0005b1c4) video_down_pane

0xa64a,	// (0x00063969) video_down_subqcif_pane_ParamLimits

0xa64a,	// (0x00063969) video_down_subqcif_pane

0xa664,	// (0x00063983) video_down_subqcif_pane_cp_ParamLimits

0xa664,	// (0x00063983) video_down_subqcif_pane_cp

0xa68c,	// (0x000639ab) im_reading_pane_ParamLimits

0xa68c,	// (0x000639ab) im_reading_pane

0x1fb0,	// (0x0005b2cf) im_writing_pane_ParamLimits

0x1fb0,	// (0x0005b2cf) im_writing_pane

0x1fce,	// (0x0005b2ed) im_reading_pane_t1

0xa6a6,	// (0x000639c5) list_im_pane

0xa6b7,	// (0x000639d6) scroll_pane_cp07

0x200d,	// (0x0005b32c) im_writing_pane_t1_ParamLimits

0x200d,	// (0x0005b32c) im_writing_pane_t1

0xa6d0,	// (0x000639ef) im_writing_pane_t2_ParamLimits

0xa6d0,	// (0x000639ef) im_writing_pane_t2

0x0001,

0xf227,	// (0x00068546) im_writing_pane_t_ParamLimits

0xf227,	// (0x00068546) im_writing_pane_t

0xa009,	// (0x00063328) input_focus_pane_cp04

0xa009,	// (0x00063328) input_focus_pane_cp05

0x2022,	// (0x0005b341) list_im_single_pane_ParamLimits

0x2022,	// (0x0005b341) list_im_single_pane

0x203b,	// (0x0005b35a) list_single_im_pane_t1

0xa594,	// (0x000638b3) blid_accuracy_pane

0xa594,	// (0x000638b3) blid_compass_pane

0xe6fc,	// (0x00067a1b) main_location_t1

0xe6fc,	// (0x00067a1b) main_location_t2

0xe6fc,	// (0x00067a1b) main_location_t3

0x0002,

0x0428,	// (0x00059747) main_location_t

0xa009,	// (0x00063328) aid_levels_location

0xa27c,	// (0x0006359b) blid_accuracy_pane_g1

0xa27c,	// (0x0006359b) blid_accuracy_pane_g2

0x0001,

0xf276,	// (0x00068595) blid_accuracy_pane_g

0xa718,	// (0x00063a37) wml_content_pane

0xa756,	// (0x00063a75) wml_button_pane_ParamLimits

0xa756,	// (0x00063a75) wml_button_pane

0x204a,	// (0x0005b369) wml_list_single_large_pane_ParamLimits

0x204a,	// (0x0005b369) wml_list_single_large_pane

0x2063,	// (0x0005b382) wml_list_single_medium_pane_ParamLimits

0x2063,	// (0x0005b382) wml_list_single_medium_pane

0x207d,	// (0x0005b39c) wml_list_single_small_pane_ParamLimits

0x207d,	// (0x0005b39c) wml_list_single_small_pane

0xa76a,	// (0x00063a89) wml_selection_box_pane_ParamLimits

0xa76a,	// (0x00063a89) wml_selection_box_pane

0xa77d,	// (0x00063a9c) wml_list_single_pane_t1

0xa78c,	// (0x00063aab) wml_list_single_medium_pane_t1

0xa79b,	// (0x00063aba) wml_list_single_large_pane_t1

0xa7aa,	// (0x00063ac9) input_focus_pane_cp02_ParamLimits

0xa7aa,	// (0x00063ac9) input_focus_pane_cp02

0xa7bd,	// (0x00063adc) wml_selection_box_pane_g1

0xa7c6,	// (0x00063ae5) wml_selection_box_pane_t1_ParamLimits

0xa7c6,	// (0x00063ae5) wml_selection_box_pane_t1

0xa264,	// (0x00063583) bg_wml_button_pane_ParamLimits

0xa264,	// (0x00063583) bg_wml_button_pane

0xa7de,	// (0x00063afd) wml_button_pane_g1

0xa7e6,	// (0x00063b05) wml_button_pane_t1

0xa7de,	// (0x00063afd) wml_button_bg_pane_g1

0xa7f6,	// (0x00063b15) wml_button_bg_pane_g2

0xa7fe,	// (0x00063b1d) wml_button_bg_pane_g3

0xa806,	// (0x00063b25) wml_button_bg_pane_g4

0xa80e,	// (0x00063b2d) wml_button_bg_pane_g5

0xa816,	// (0x00063b35) wml_button_bg_pane_g6

0xa81e,	// (0x00063b3d) wml_button_bg_pane_g7

0xa826,	// (0x00063b45) wml_button_bg_pane_g8

0xa82e,	// (0x00063b4d) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x0006854b) wml_button_bg_pane_g

0x209c,	// (0x0005b3bb) bg_list_pane_cp02

0xa836,	// (0x00063b55) mce_header_pane_ParamLimits

0xa836,	// (0x00063b55) mce_header_pane

0xa84c,	// (0x00063b6b) mce_icon_pane

0xa84c,	// (0x00063b6b) mce_image_pane

0xa855,	// (0x00063b74) mce_text_pane_ParamLimits

0xa855,	// (0x00063b74) mce_text_pane

0x20a6,	// (0x0005b3c5) scroll_pane_cp03

0xa74e,	// (0x00063a6d) scroll_pane_cp04

0xa868,	// (0x00063b87) scroll_pane_cp05_ParamLimits

0xa868,	// (0x00063b87) scroll_pane_cp05

0x20b0,	// (0x0005b3cf) mce_header_field_pane_ParamLimits

0x20b0,	// (0x0005b3cf) mce_header_field_pane

0x20c9,	// (0x0005b3e8) mce_header_field_pane_2_ParamLimits

0x20c9,	// (0x0005b3e8) mce_header_field_pane_2

0x20df,	// (0x0005b3fe) mce_header_field_pane_3

0x20e7,	// (0x0005b406) list_single_mce_message_pane_ParamLimits

0x20e7,	// (0x0005b406) list_single_mce_message_pane

0x2103,	// (0x0005b422) list_single_mce_smart_pane_ParamLimits

0x2103,	// (0x0005b422) list_single_mce_smart_pane

0xa874,	// (0x00063b93) input_focus_pane_cp03

0xa87d,	// (0x00063b9c) list_header_data_pane

0x212a,	// (0x0005b449) mce_header_field_pane_t1

0x213a,	// (0x0005b459) list_single_mce_header_pane_ParamLimits

0x213a,	// (0x0005b459) list_single_mce_header_pane

0xa885,	// (0x00063ba4) list_single_mce_header_pane_t1

0xa894,	// (0x00063bb3) list_single_mce_message_pane_g1

0xa89c,	// (0x00063bbb) list_single_mce_message_pane_t1

0x2174,	// (0x0005b493) bg_cale_heading_pane_cp01_ParamLimits

0x2174,	// (0x0005b493) bg_cale_heading_pane_cp01

0xa8aa,	// (0x00063bc9) bg_cale_pane_cp02_ParamLimits

0xa8aa,	// (0x00063bc9) bg_cale_pane_cp02

0x21c6,	// (0x0005b4e5) cale_month_corner_pane

0x21e5,	// (0x0005b504) cale_month_day_heading_pane_ParamLimits

0x21e5,	// (0x0005b504) cale_month_day_heading_pane

0x224f,	// (0x0005b56e) cale_month_pane_g1_ParamLimits

0x224f,	// (0x0005b56e) cale_month_pane_g1

0x2296,	// (0x0005b5b5) cale_month_pane_g2_ParamLimits

0x2296,	// (0x0005b5b5) cale_month_pane_g2

0x22d2,	// (0x0005b5f1) cale_month_pane_g3_ParamLimits

0x22d2,	// (0x0005b5f1) cale_month_pane_g3

0x2326,	// (0x0005b645) cale_month_pane_g4_ParamLimits

0x2326,	// (0x0005b645) cale_month_pane_g4

0x237a,	// (0x0005b699) cale_month_pane_g5_ParamLimits

0x237a,	// (0x0005b699) cale_month_pane_g5

0x23d6,	// (0x0005b6f5) cale_month_pane_g6_ParamLimits

0x23d6,	// (0x0005b6f5) cale_month_pane_g6

0x243e,	// (0x0005b75d) cale_month_pane_g7_ParamLimits

0x243e,	// (0x0005b75d) cale_month_pane_g7

0x24aa,	// (0x0005b7c9) cale_month_pane_g8_ParamLimits

0x24aa,	// (0x0005b7c9) cale_month_pane_g8

0x2516,	// (0x0005b835) cale_month_pane_g9_ParamLimits

0x2516,	// (0x0005b835) cale_month_pane_g9

0x257a,	// (0x0005b899) cale_month_pane_g10_ParamLimits

0x257a,	// (0x0005b899) cale_month_pane_g10

0x25cc,	// (0x0005b8eb) cale_month_pane_g11_ParamLimits

0x25cc,	// (0x0005b8eb) cale_month_pane_g11

0x261e,	// (0x0005b93d) cale_month_pane_g12_ParamLimits

0x261e,	// (0x0005b93d) cale_month_pane_g12

0x2676,	// (0x0005b995) cale_month_pane_g13_ParamLimits

0x2676,	// (0x0005b995) cale_month_pane_g13

0x000c,

0xf23f,	// (0x0006855e) cale_month_pane_g_ParamLimits

0xf23f,	// (0x0006855e) cale_month_pane_g

0x26ce,	// (0x0005b9ed) cale_month_week_pane

0x26f2,	// (0x0005ba11) grid_cale_month_pane_ParamLimits

0x26f2,	// (0x0005ba11) grid_cale_month_pane

0x2753,	// (0x0005ba72) cale_month_day_heading_pane_t1

0x27d9,	// (0x0005baf8) cale_month_day_heading_pane_t2

0x2852,	// (0x0005bb71) cale_month_day_heading_pane_t3

0x28cb,	// (0x0005bbea) cale_month_day_heading_pane_t4

0x294c,	// (0x0005bc6b) cale_month_day_heading_pane_t5

0x29d5,	// (0x0005bcf4) cale_month_day_heading_pane_t6

0x2a66,	// (0x0005bd85) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x00068579) cale_month_day_heading_pane_t

0xa539,	// (0x00063858) bg_cale_side_pane_cp01

0x2af7,	// (0x0005be16) cale_month_week_pane_t1

0x2b10,	// (0x0005be2f) cale_month_week_pane_t2

0x2b29,	// (0x0005be48) cale_month_week_pane_t3

0x2b42,	// (0x0005be61) cale_month_week_pane_t4

0x2b5b,	// (0x0005be7a) cale_month_week_pane_t5

0x2b74,	// (0x0005be93) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x00068588) cale_month_week_pane_t

0x2b99,	// (0x0005beb8) cell_cale_month_pane_ParamLimits

0x2b99,	// (0x0005beb8) cell_cale_month_pane

0xa8e9,	// (0x00063c08) cell_cale_month_pane_g1

0x2ce3,	// (0x0005c002) cell_cale_month_pane_t1_ParamLimits

0x2ce3,	// (0x0005c002) cell_cale_month_pane_t1

0xa547,	// (0x00063866) grid_highlight_pane_cp08

0xa27c,	// (0x0006359b) main_smil_g1

0x2d0f,	// (0x0005c02e) smil_status_pane

0xa8f5,	// (0x00063c14) smil_text_pane

0xe612,	// (0x00067931) bg_popup_call3_rect_pane_g8

0xe61a,	// (0x00067939) bg_popup_call3_rect_pane_g9

0x0008,

0xf4d6,	// (0x000687f5) bg_popup_call3_rect_pane_g

0xe7d8,	// (0x00067af7) smil_status_volume_pane_g1

0xa8ff,	// (0x00063c1e) smil_status_pane_t1

0xb9ba,	// (0x00064cd9) volume_smil_pane

0xa916,	// (0x00063c35) list_smil_text_pane

0x2d24,	// (0x0005c043) scroll_pane_cp011

0x2d2f,	// (0x0005c04e) smil_text_list_pane_t1_ParamLimits

0x2d2f,	// (0x0005c04e) smil_text_list_pane_t1

0xa920,	// (0x00063c3f) aid_volume_smil_ParamLimits

0xa920,	// (0x00063c3f) aid_volume_smil

0xa27c,	// (0x0006359b) smil_volume_pane_g1

0xa27c,	// (0x0006359b) smil_volume_pane_g2

0x0001,

0xf276,	// (0x00068595) smil_volume_pane_g

0x1446,	// (0x0005a765) listscroll_cale_day_pane

0xa942,	// (0x00063c61) bg_cale_pane

0xa95a,	// (0x00063c79) list_cale_pane

0xa97d,	// (0x00063c9c) scroll_pane_cp09

0xa98e,	// (0x00063cad) cale_bg_pane_g1

0xa996,	// (0x00063cb5) cale_bg_pane_g2

0xa99e,	// (0x00063cbd) cale_bg_pane_g3

0xa9a6,	// (0x00063cc5) cale_bg_pane_g4

0xa9ae,	// (0x00063ccd) cale_bg_pane_g5

0xa9b6,	// (0x00063cd5) cale_bg_pane_g6

0xa9be,	// (0x00063cdd) cale_bg_pane_g7

0xa9c6,	// (0x00063ce5) cale_bg_pane_g8

0xa9ce,	// (0x00063ced) cale_bg_pane_g9

0x0008,

0xf27b,	// (0x0006859a) cale_bg_pane_g

0x2d82,	// (0x0005c0a1) list_cale_time_pane_ParamLimits

0x2d82,	// (0x0005c0a1) list_cale_time_pane

0xa9d6,	// (0x00063cf5) list_cale_time_pane_g1_ParamLimits

0xa9d6,	// (0x00063cf5) list_cale_time_pane_g1

0xa9e2,	// (0x00063d01) list_cale_time_pane_g2_ParamLimits

0xa9e2,	// (0x00063d01) list_cale_time_pane_g2

0x2d9c,	// (0x0005c0bb) list_cale_time_pane_g3_ParamLimits

0x2d9c,	// (0x0005c0bb) list_cale_time_pane_g3

0x2daa,	// (0x0005c0c9) list_cale_time_pane_g4_ParamLimits

0x2daa,	// (0x0005c0c9) list_cale_time_pane_g4

0x2db8,	// (0x0005c0d7) list_cale_time_pane_g5_ParamLimits

0x2db8,	// (0x0005c0d7) list_cale_time_pane_g5

0x0005,

0xf28e,	// (0x000685ad) list_cale_time_pane_g_ParamLimits

0xf28e,	// (0x000685ad) list_cale_time_pane_g

0xa9fc,	// (0x00063d1b) list_cale_time_pane_t1_ParamLimits

0xa9fc,	// (0x00063d1b) list_cale_time_pane_t1

0xaa24,	// (0x00063d43) list_cale_time_pane_t2_ParamLimits

0xaa24,	// (0x00063d43) list_cale_time_pane_t2

0x306a,	// (0x0005c389) aid_blid_cardinal_pane

0x30ac,	// (0x0005c3cb) compass_pane_t4

0xaa4c,	// (0x00063d6b) list_cale_time_pane_t4_ParamLimits

0xaa4c,	// (0x00063d6b) list_cale_time_pane_t4

0x30ba,	// (0x0005c3d9) compass_pane_t5

0x30ca,	// (0x0005c3e9) compass_pane_t6

0x30d8,	// (0x0005c3f7) compass_pane_t7

0xaed9,	// (0x000641f8) navi_pane_cc_t1

0xb038,	// (0x00064357) aid_phob_thumbnail_center_pane

0x3683,	// (0x0005c9a2) main_postcard_pane_g4_ParamLimits

0x0002,

0xf29b,	// (0x000685ba) list_cale_time_pane_t_ParamLimits

0xf29b,	// (0x000685ba) list_cale_time_pane_t

0x9c60,	// (0x00062f7f) bg_popup_window_pane_cp02_ParamLimits

0x9c60,	// (0x00062f7f) bg_popup_window_pane_cp02

0xaa74,	// (0x00063d93) heading_pane_cp01_ParamLimits

0xaa74,	// (0x00063d93) heading_pane_cp01

0xaa80,	// (0x00063d9f) loc_req_pane_ParamLimits

0xaa80,	// (0x00063d9f) loc_req_pane

0xaa90,	// (0x00063daf) loc_type_pane_ParamLimits

0xaa90,	// (0x00063daf) loc_type_pane

0xaaa2,	// (0x00063dc1) loc_type_pane_t1_ParamLimits

0xaaa2,	// (0x00063dc1) loc_type_pane_t1

0xaab4,	// (0x00063dd3) loc_type_pane_t2_ParamLimits

0xaab4,	// (0x00063dd3) loc_type_pane_t2

0xaac6,	// (0x00063de5) loc_type_pane_t3_ParamLimits

0xaac6,	// (0x00063de5) loc_type_pane_t3

0x0002,

0xf2a2,	// (0x000685c1) loc_type_pane_t_ParamLimits

0xf2a2,	// (0x000685c1) loc_type_pane_t

0xaad8,	// (0x00063df7) list_loc_req_pane

0xaae2,	// (0x00063e01) scroll_pane_cp012

0x2dc6,	// (0x0005c0e5) list_single_loc_request_popup_menu_pane_ParamLimits

0x2dc6,	// (0x0005c0e5) list_single_loc_request_popup_menu_pane

0xaaed,	// (0x00063e0c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaaed,	// (0x00063e0c) list_single_loc_request_popup_menu_pane_g1

0xaaf9,	// (0x00063e18) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaaf9,	// (0x00063e18) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2a9,	// (0x000685c8) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2a9,	// (0x000685c8) list_single_loc_request_popup_menu_pane_g

0xab05,	// (0x00063e24) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xab05,	// (0x00063e24) list_single_loc_request_popup_menu_pane_t1

0xa264,	// (0x00063583) bg_popup_window_pane_cp03_ParamLimits

0xa264,	// (0x00063583) bg_popup_window_pane_cp03

0xab1b,	// (0x00063e3a) heading_loc_req_pane_ParamLimits

0xab1b,	// (0x00063e3a) heading_loc_req_pane

0x2dd3,	// (0x0005c0f2) popup_dyc_status_message_window_g1_ParamLimits

0x2dd3,	// (0x0005c0f2) popup_dyc_status_message_window_g1

0x2de7,	// (0x0005c106) popup_dyc_status_message_window_t1_ParamLimits

0x2de7,	// (0x0005c106) popup_dyc_status_message_window_t1

0x2dfc,	// (0x0005c11b) popup_dyc_status_message_window_t2_ParamLimits

0x2dfc,	// (0x0005c11b) popup_dyc_status_message_window_t2

0x2e11,	// (0x0005c130) popup_dyc_status_message_window_t3_ParamLimits

0x2e11,	// (0x0005c130) popup_dyc_status_message_window_t3

0x0002,

0xf2ae,	// (0x000685cd) popup_dyc_status_message_window_t_ParamLimits

0xf2ae,	// (0x000685cd) popup_dyc_status_message_window_t

0xa009,	// (0x00063328) bg_heading_pane_cp01

0xab27,	// (0x00063e46) heading_loc_req_pane_g1

0xab2f,	// (0x00063e4e) heading_loc_req_pane_g2

0xab37,	// (0x00063e56) heading_loc_req_pane_g3

0x0002,

0xf2b5,	// (0x000685d4) heading_loc_req_pane_g

0xab3f,	// (0x00063e5e) heading_loc_req_pane_t1

0xab5f,	// (0x00063e7e) bg_popup_sub_pane_cp01_ParamLimits

0xab5f,	// (0x00063e7e) bg_popup_sub_pane_cp01

0xab6d,	// (0x00063e8c) popup_cale_events_window_g1_ParamLimits

0xab6d,	// (0x00063e8c) popup_cale_events_window_g1

0xab8d,	// (0x00063eac) popup_cale_events_window_g2_ParamLimits

0xab8d,	// (0x00063eac) popup_cale_events_window_g2

0x0001,

0xf2d7,	// (0x000685f6) popup_cale_events_window_g_ParamLimits

0xf2d7,	// (0x000685f6) popup_cale_events_window_g

0xabad,	// (0x00063ecc) popup_cale_events_window_t1_ParamLimits

0xabad,	// (0x00063ecc) popup_cale_events_window_t1

0xabbf,	// (0x00063ede) popup_cale_events_window_t2_ParamLimits

0xabbf,	// (0x00063ede) popup_cale_events_window_t2

0xabfd,	// (0x00063f1c) popup_cale_events_window_t3_ParamLimits

0xabfd,	// (0x00063f1c) popup_cale_events_window_t3

0xac37,	// (0x00063f56) popup_cale_events_window_t4_ParamLimits

0xac37,	// (0x00063f56) popup_cale_events_window_t4

0x0003,

0xf2dc,	// (0x000685fb) popup_cale_events_window_t_ParamLimits

0xf2dc,	// (0x000685fb) popup_cale_events_window_t

0x2e39,	// (0x0005c158) call_type_pane

0x2e49,	// (0x0005c168) popup_call_status_window_g1

0x2e5d,	// (0x0005c17c) popup_call_status_window_g2

0x2e71,	// (0x0005c190) popup_call_status_window_g3

0x0002,

0xf2e5,	// (0x00068604) popup_call_status_window_g

0xac6d,	// (0x00063f8c) call_type_pane_g1

0xac76,	// (0x00063f95) call_type_pane_g2

0x0001,

0xf2ec,	// (0x0006860b) call_type_pane_g

0xa009,	// (0x00063328) bg_popup_sub_pane_cp02

0xac7f,	// (0x00063f9e) listscroll_popup_wml_pane

0xac87,	// (0x00063fa6) list_wml_pane

0xac91,	// (0x00063fb0) scroll_pane_cp013

0xac9c,	// (0x00063fbb) list_single_graphic_popup_wml_pane_ParamLimits

0xac9c,	// (0x00063fbb) list_single_graphic_popup_wml_pane

0xa27c,	// (0x0006359b) list_single_graphic_popup_wml_pane_g1

0xacb0,	// (0x00063fcf) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f1,	// (0x00068610) list_single_graphic_popup_wml_pane_g

0xacb8,	// (0x00063fd7) list_single_graphic_popup_wml_pane_t1

0xacce,	// (0x00063fed) aid_call_pane

0xa25c,	// (0x0006357b) popup_clock_analogue_window_g1

0xa25c,	// (0x0006357b) popup_clock_analogue_window_g2

0xacd6,	// (0x00063ff5) popup_clock_analogue_window_g3

0xacd6,	// (0x00063ff5) popup_clock_analogue_window_g4

0xa27c,	// (0x0006359b) popup_clock_analogue_window_g5

0x0004,

0xf2f6,	// (0x00068615) popup_clock_analogue_window_g

0xacde,	// (0x00063ffd) popup_clock_analogue_window_t1

0xacec,	// (0x0006400b) clock_digital_number_pane_ParamLimits

0xacec,	// (0x0006400b) clock_digital_number_pane

0xacf8,	// (0x00064017) clock_digital_number_pane_cp02_ParamLimits

0xacf8,	// (0x00064017) clock_digital_number_pane_cp02

0xad04,	// (0x00064023) clock_digital_number_pane_cp03_ParamLimits

0xad04,	// (0x00064023) clock_digital_number_pane_cp03

0xad10,	// (0x0006402f) clock_digital_number_pane_cp04_ParamLimits

0xad10,	// (0x0006402f) clock_digital_number_pane_cp04

0xad1c,	// (0x0006403b) clock_digital_separator_pane_ParamLimits

0xad1c,	// (0x0006403b) clock_digital_separator_pane

0xad28,	// (0x00064047) popup_clock_digital_window_t1

0xa27c,	// (0x0006359b) clock_digital_number_pane_g1

0xa27c,	// (0x0006359b) clock_digital_number_pane_g2

0x0001,

0xf276,	// (0x00068595) clock_digital_number_pane_g

0xa27c,	// (0x0006359b) clock_digital_separator_pane_g1

0xa27c,	// (0x0006359b) clock_digital_separator_pane_g2

0x0001,

0xf276,	// (0x00068595) clock_digital_separator_pane_g

0xa009,	// (0x00063328) bg_popup_window_pane_cp04

0xad45,	// (0x00064064) heading_pane_cp03

0xa594,	// (0x000638b3) listscroll_popup_gms_pane

0xa009,	// (0x00063328) grid_large_graphic_popup_pane

0xad4e,	// (0x0006406d) listscroll_popup_gms_pane_g1

0xad57,	// (0x00064076) listscroll_popup_gms_pane_g2

0x0001,

0xf301,	// (0x00068620) listscroll_popup_gms_pane_g

0xad60,	// (0x0006407f) scroll_pane_cp014

0xa2df,	// (0x000635fe) cell_large_graphic_popup_pane_ParamLimits

0xa2df,	// (0x000635fe) cell_large_graphic_popup_pane

0xa2ed,	// (0x0006360c) cell_large_graphic_popup_pane_g1_ParamLimits

0xa2ed,	// (0x0006360c) cell_large_graphic_popup_pane_g1

0xad69,	// (0x00064088) cell_large_graphic_popup_pane_g2_ParamLimits

0xad69,	// (0x00064088) cell_large_graphic_popup_pane_g2

0xad77,	// (0x00064096) cell_large_graphic_popup_pane_g3_ParamLimits

0xad77,	// (0x00064096) cell_large_graphic_popup_pane_g3

0xad85,	// (0x000640a4) cell_large_graphic_popup_pane_g4_ParamLimits

0xad85,	// (0x000640a4) cell_large_graphic_popup_pane_g4

0x0003,

0xf306,	// (0x00068625) cell_large_graphic_popup_pane_g_ParamLimits

0xf306,	// (0x00068625) cell_large_graphic_popup_pane_g

0xa009,	// (0x00063328) grid_highlight_pane_cp010

0xa27c,	// (0x0006359b) bg_popup_call_pane_g1

0xad96,	// (0x000640b5) list_single_graphic_popup_conf_pane_ParamLimits

0xad96,	// (0x000640b5) list_single_graphic_popup_conf_pane

0xada8,	// (0x000640c7) list_highlight_pane_cp01

0xadb1,	// (0x000640d0) list_single_graphic_popup_conf_pane_g1

0xadb9,	// (0x000640d8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf30f,	// (0x0006862e) list_single_graphic_popup_conf_pane_g

0xadc1,	// (0x000640e0) list_single_graphic_popup_conf_pane_t1

0xadcf,	// (0x000640ee) linegrid_cams_pane_g1

0x2e81,	// (0x0005c1a0) linegrid_cams_pane_g2

0xa57a,	// (0x00063899) linegrid_cams_pane_g3

0xadd8,	// (0x000640f7) linegrid_cams_pane_g4

0x2e8a,	// (0x0005c1a9) linegrid_cams_pane_g5

0x2e93,	// (0x0005c1b2) linegrid_cams_pane_g6

0xa583,	// (0x000638a2) linegrid_cams_pane_g7

0x0006,

0xf314,	// (0x00068633) linegrid_cams_pane_g

0xade1,	// (0x00064100) popup_clock_analogue_window

0xade1,	// (0x00064100) popup_clock_digital_window

0xa009,	// (0x00063328) popup_phob_thumbnail_window

0xa27c,	// (0x0006359b) call_video_uplink_pane_g1

0xadea,	// (0x00064109) call_video_uplink_pane_g2

0x0001,

0xf323,	// (0x00068642) call_video_uplink_pane_g

0xadf2,	// (0x00064111) video_uplink_pane

0xadfa,	// (0x00064119) mce_image_pane_g1

0x2e9e,	// (0x0005c1bd) mce_image_pane_g2

0x2ea8,	// (0x0005c1c7) mce_image_pane_g3

0x2eb2,	// (0x0005c1d1) mce_image_pane_g4

0x2eba,	// (0x0005c1d9) mce_image_pane_g5

0x0004,

0xf328,	// (0x00068647) mce_image_pane_g

0xae04,	// (0x00064123) control_top_pane_stacon_cp01_ParamLimits

0xae04,	// (0x00064123) control_top_pane_stacon_cp01

0xae18,	// (0x00064137) uni_indicator_pane_stacon_cp01_ParamLimits

0xae18,	// (0x00064137) uni_indicator_pane_stacon_cp01

0xae29,	// (0x00064148) bg_popup_sub_pane_cp03

0x2ec2,	// (0x0005c1e1) chi_dic_find_pane

0x2eca,	// (0x0005c1e9) listscroll_chi_dic_pane

0x2ed3,	// (0x0005c1f2) main_pane_chidic_g1

0x2ee6,	// (0x0005c205) chi_dic_find_pane_t1

0xae33,	// (0x00064152) find_chidic_pane

0xae3c,	// (0x0006415b) chi_dic_list_pane_ParamLimits

0xae3c,	// (0x0006415b) chi_dic_list_pane

0xae4d,	// (0x0006416c) scroll_pane_cp020

0x2ef4,	// (0x0005c213) find_chidic_pane_t1

0xa009,	// (0x00063328) input_focus_pane_cp06

0x2f03,	// (0x0005c222) list_chi_dic_pane_ParamLimits

0x2f03,	// (0x0005c222) list_chi_dic_pane

0x2f15,	// (0x0005c234) list_chi_dic_pane_t1_ParamLimits

0x2f15,	// (0x0005c234) list_chi_dic_pane_t1

0xa009,	// (0x00063328) list_highlight_pane_cp020

0xae55,	// (0x00064174) bg_cale_heading_pane_g1

0x2f28,	// (0x0005c247) bg_cale_heading_pane_g2

0x2f30,	// (0x0005c24f) bg_cale_heading_pane_g3

0x2f38,	// (0x0005c257) bg_cale_heading_pane_g4

0x2f42,	// (0x0005c261) bg_cale_heading_pane_g5

0x2f4c,	// (0x0005c26b) bg_cale_heading_pane_g6

0x2f54,	// (0x0005c273) bg_cale_heading_pane_g7

0x2f5c,	// (0x0005c27b) bg_cale_heading_pane_g8

0x2f66,	// (0x0005c285) bg_cale_heading_pane_g9

0x0008,

0xf333,	// (0x00068652) bg_cale_heading_pane_g

0xae55,	// (0x00064174) bg_cale_side_pane_g1

0x2f70,	// (0x0005c28f) bg_cale_side_pane_g2

0x2f7a,	// (0x0005c299) bg_cale_side_pane_g3

0x2f84,	// (0x0005c2a3) bg_cale_side_pane_g4

0x2f8e,	// (0x0005c2ad) bg_cale_side_pane_g5

0x2f98,	// (0x0005c2b7) bg_cale_side_pane_g6

0x2fa2,	// (0x0005c2c1) bg_cale_side_pane_g7

0x2fac,	// (0x0005c2cb) bg_cale_side_pane_g8

0x2fb4,	// (0x0005c2d3) bg_cale_side_pane_g9

0x0008,

0xf346,	// (0x00068665) bg_cale_side_pane_g

0x2fbc,	// (0x0005c2db) popup_call_status_window_ParamLimits

0x2fbc,	// (0x0005c2db) popup_call_status_window

0xae5d,	// (0x0006417c) stacon_top_pane

0xae65,	// (0x00064184) status_pane_ParamLimits

0xae65,	// (0x00064184) status_pane

0xae7a,	// (0x00064199) status_small_pane

0xae82,	// (0x000641a1) control_pane

0xa009,	// (0x00063328) stacon_bottom_pane

0xae8a,	// (0x000641a9) list_single_mce_smart_pane_t1_ParamLimits

0xae8a,	// (0x000641a9) list_single_mce_smart_pane_t1

0xae9d,	// (0x000641bc) list_single_mce_smart_pane_t2_ParamLimits

0xae9d,	// (0x000641bc) list_single_mce_smart_pane_t2

0x0001,

0xf359,	// (0x00068678) list_single_mce_smart_pane_t_ParamLimits

0xf359,	// (0x00068678) list_single_mce_smart_pane_t

0x3009,	// (0x0005c328) compass_pane

0x3014,	// (0x0005c333) main_location2_pane_t1

0x302a,	// (0x0005c349) main_location2_pane_t2

0x3040,	// (0x0005c35f) main_location2_pane_t3

0x0003,

0xf35e,	// (0x0006867d) main_location2_pane_t

0xaebc,	// (0x000641db) compass_pane_g1_ParamLimits

0xaebc,	// (0x000641db) compass_pane_g1

0x308e,	// (0x0005c3ad) compass_pane_t1

0x309d,	// (0x0005c3bc) compass_pane_t2

0x0005,

0xf367,	// (0x00068686) compass_pane_t

0x30e8,	// (0x0005c407) text_secondary_cp61

0xaed0,	// (0x000641ef) navi_pane_cams_g5

0xaef3,	// (0x00064212) navi_pane_im_t1

0xaf01,	// (0x00064220) navi_pane_mp_g1_ParamLimits

0xaf01,	// (0x00064220) navi_pane_mp_g1

0xaf15,	// (0x00064234) navi_pane_mp_g2_ParamLimits

0xaf15,	// (0x00064234) navi_pane_mp_g2

0xaf21,	// (0x00064240) navi_pane_mp_g3_ParamLimits

0xaf21,	// (0x00064240) navi_pane_mp_g3

0x0002,

0xf37b,	// (0x0006869a) navi_pane_mp_g_ParamLimits

0xf37b,	// (0x0006869a) navi_pane_mp_g

0xaf2d,	// (0x0006424c) navi_pane_mp_t1

0xaf3b,	// (0x0006425a) navi_pane_mp_t2

0x0002,

0xf382,	// (0x000686a1) navi_pane_mp_t

0xaf77,	// (0x00064296) navi_pane_vt_g1

0xaf2d,	// (0x0006424c) navi_pane_vt_t1

0xaf7f,	// (0x0006429e) navi_slider_pane

0xa594,	// (0x000638b3) zooming_pane

0xaf87,	// (0x000642a6) navi_slider_pane_g1

0xaf90,	// (0x000642af) navi_slider_pane_g2

0x0006,

0xf389,	// (0x000686a8) navi_slider_pane_g

0xafbd,	// (0x000642dc) aid_levels_zoom

0xafc5,	// (0x000642e4) zooming_pane_g1

0xafcd,	// (0x000642ec) zooming_pane_g2

0xafcd,	// (0x000642ec) zooming_pane_g3

0x0002,

0xf398,	// (0x000686b7) zooming_pane_g

0xafd5,	// (0x000642f4) level_10_zoom

0xafde,	// (0x000642fd) level_11_zoom

0xafe7,	// (0x00064306) level_1_zoom

0xaff0,	// (0x0006430f) level_2_zoom

0xaff9,	// (0x00064318) level_3_zoom

0xb002,	// (0x00064321) level_4_zoom

0xb00b,	// (0x0006432a) level_5_zoom

0xb014,	// (0x00064333) level_6_zoom

0xb01d,	// (0x0006433c) level_7_zoom

0xb026,	// (0x00064345) level_8_zoom

0xb02f,	// (0x0006434e) level_9_zoom

0xb040,	// (0x0006435f) popup_phob_thumbnail_window_g1

0xb048,	// (0x00064367) popup_phob_thumbnail_window_g2

0x0001,

0xf39f,	// (0x000686be) popup_phob_thumbnail_window_g

0x3d80,	// (0x0005d09f) level_1_location

0x3d88,	// (0x0005d0a7) level_2_location

0x3d90,	// (0x0005d0af) level_3_location

0x3d9a,	// (0x0005d0b9) level_4_location

0xa594,	// (0x000638b3) level_5_location

0x3231,	// (0x0005c550) mce_icon_pane_g1

0x323b,	// (0x0005c55a) mce_icon_pane_g2

0x0001,

0xf3a4,	// (0x000686c3) mce_icon_pane_g

0xb050,	// (0x0006436f) main_mup_pane_g1_ParamLimits

0xb050,	// (0x0006436f) main_mup_pane_g1

0xb050,	// (0x0006436f) main_mup_pane_g2_ParamLimits

0xb050,	// (0x0006436f) main_mup_pane_g2

0xb050,	// (0x0006436f) main_mup_pane_g3_ParamLimits

0xb050,	// (0x0006436f) main_mup_pane_g3

0xb050,	// (0x0006436f) main_mup_pane_g4_ParamLimits

0xb050,	// (0x0006436f) main_mup_pane_g4

0xb050,	// (0x0006436f) main_mup_pane_g5_ParamLimits

0xb050,	// (0x0006436f) main_mup_pane_g5

0xb050,	// (0x0006436f) main_mup_pane_g6_ParamLimits

0xb050,	// (0x0006436f) main_mup_pane_g6

0xb050,	// (0x0006436f) main_mup_pane_g7_ParamLimits

0xb050,	// (0x0006436f) main_mup_pane_g7

0xb050,	// (0x0006436f) main_mup_pane_g8_ParamLimits

0xb050,	// (0x0006436f) main_mup_pane_g8

0xb050,	// (0x0006436f) main_mup_pane_g9_ParamLimits

0xb050,	// (0x0006436f) main_mup_pane_g9

0xb050,	// (0x0006436f) main_mup_pane_g10_ParamLimits

0xb050,	// (0x0006436f) main_mup_pane_g10

0xb050,	// (0x0006436f) main_mup_pane_g11_ParamLimits

0xb050,	// (0x0006436f) main_mup_pane_g11

0xa2ed,	// (0x0006360c) main_mup_pane_g12_ParamLimits

0xa2ed,	// (0x0006360c) main_mup_pane_g12

0xb050,	// (0x0006436f) main_mup_pane_g13_ParamLimits

0xb050,	// (0x0006436f) main_mup_pane_g13

0x000c,

0xf3a9,	// (0x000686c8) main_mup_pane_g_ParamLimits

0xf3a9,	// (0x000686c8) main_mup_pane_g

0xb05e,	// (0x0006437d) main_mup_pane_t1_ParamLimits

0xb05e,	// (0x0006437d) main_mup_pane_t1

0xb05e,	// (0x0006437d) main_mup_pane_t2_ParamLimits

0xb05e,	// (0x0006437d) main_mup_pane_t2

0xb05e,	// (0x0006437d) main_mup_pane_t3_ParamLimits

0xb05e,	// (0x0006437d) main_mup_pane_t3

0xa5bb,	// (0x000638da) main_mup_pane_t4_ParamLimits

0xa5bb,	// (0x000638da) main_mup_pane_t4

0xa5bb,	// (0x000638da) main_mup_pane_t5_ParamLimits

0xa5bb,	// (0x000638da) main_mup_pane_t5

0xb072,	// (0x00064391) main_mup_pane_t6_ParamLimits

0xb072,	// (0x00064391) main_mup_pane_t6

0x0005,

0xf3c4,	// (0x000686e3) main_mup_pane_t_ParamLimits

0xf3c4,	// (0x000686e3) main_mup_pane_t

0xa2df,	// (0x000635fe) mup_progress_pane_ParamLimits

0xa2df,	// (0x000635fe) mup_progress_pane

0xb086,	// (0x000643a5) mup_visualizer_pane_ParamLimits

0xb086,	// (0x000643a5) mup_visualizer_pane

0xb086,	// (0x000643a5) mup_volume_pane_ParamLimits

0xb086,	// (0x000643a5) mup_volume_pane

0xa2fb,	// (0x0006361a) mup_visualizer_pane_g1_ParamLimits

0xa2fb,	// (0x0006361a) mup_visualizer_pane_g1

0xb094,	// (0x000643b3) mup_visualizer_pane_g2_ParamLimits

0xb094,	// (0x000643b3) mup_visualizer_pane_g2

0xa2ed,	// (0x0006360c) mup_visualizer_pane_g3_ParamLimits

0xa2ed,	// (0x0006360c) mup_visualizer_pane_g3

0x0002,

0xf3d1,	// (0x000686f0) mup_visualizer_pane_g_ParamLimits

0xf3d1,	// (0x000686f0) mup_visualizer_pane_g

0xa5e9,	// (0x00063908) mup_volume_pane_g1

0xa5e9,	// (0x00063908) mup_volume_pane_g2

0x0001,

0xf3d8,	// (0x000686f7) mup_volume_pane_g

0xa5e9,	// (0x00063908) mup_progress_pane_g1

0xa5e9,	// (0x00063908) mup_progress_pane_g2

0xa5e9,	// (0x00063908) mup_progress_pane_g3

0x0002,

0xf3dd,	// (0x000686fc) mup_progress_pane_g

0xa009,	// (0x00063328) bg_popup_window_pane_cp05

0xb0a2,	// (0x000643c1) heading_pane_cp02_ParamLimits

0xb0a2,	// (0x000643c1) heading_pane_cp02

0xb0be,	// (0x000643dd) list_popup_blid_pane

0xb0c6,	// (0x000643e5) list_blid_sat_info_pane_ParamLimits

0xb0c6,	// (0x000643e5) list_blid_sat_info_pane

0xb0d9,	// (0x000643f8) list_blid_sat_info_pane_g1

0xb0e1,	// (0x00064400) list_blid_sat_info_pane_t1

0x334f,	// (0x0005c66e) mup_equalizer_pane_ParamLimits

0x334f,	// (0x0005c66e) mup_equalizer_pane

0x3370,	// (0x0005c68f) mup_equalizer_pane_cp1_ParamLimits

0x3370,	// (0x0005c68f) mup_equalizer_pane_cp1

0x3391,	// (0x0005c6b0) mup_equalizer_pane_cp2_ParamLimits

0x3391,	// (0x0005c6b0) mup_equalizer_pane_cp2

0x33b6,	// (0x0005c6d5) mup_equalizer_pane_cp3_ParamLimits

0x33b6,	// (0x0005c6d5) mup_equalizer_pane_cp3

0x33df,	// (0x0005c6fe) mup_equalizer_pane_cp4_ParamLimits

0x33df,	// (0x0005c6fe) mup_equalizer_pane_cp4

0x3408,	// (0x0005c727) mup_equalizer_pane_cp5

0x3420,	// (0x0005c73f) mup_equalizer_pane_cp6

0x3438,	// (0x0005c757) mup_equalizer_pane_cp7

0xe692,	// (0x000679b1) bg_popup_call_poc_act_pane_g9

0xe69a,	// (0x000679b9) bg_popup_call_poc_act_pane_g10

0xe6a2,	// (0x000679c1) bg_popup_call_poc_act_pane_g11

0x000a,

0xa264,	// (0x00063583) mup_scale_pane

0xa27c,	// (0x0006359b) mup_scale_pane_g1

0xb0ef,	// (0x0006440e) mup_scale_pane_g2

0x0006,

0xf3f9,	// (0x00068718) mup_scale_pane_g

0xb113,	// (0x00064432) msg_data_pane

0xb11b,	// (0x0006443a) scroll_pane_cp017

0x3462,	// (0x0005c781) bg_list_pane_cp04_ParamLimits

0x3462,	// (0x0005c781) bg_list_pane_cp04

0xb123,	// (0x00064442) msg_data_pane_g1

0x3488,	// (0x0005c7a7) msg_data_pane_g2

0x3492,	// (0x0005c7b1) msg_data_pane_g3

0x349c,	// (0x0005c7bb) msg_data_pane_g4

0x34a4,	// (0x0005c7c3) msg_data_pane_g5

0x34ac,	// (0x0005c7cb) msg_data_pane_g6

0x34b4,	// (0x0005c7d3) msg_data_pane_g7

0x0006,

0xf408,	// (0x00068727) msg_data_pane_g

0x34bc,	// (0x0005c7db) msg_text_pane_ParamLimits

0x34bc,	// (0x0005c7db) msg_text_pane

0x34f7,	// (0x0005c816) qrid_highlight_pane_cp011_ParamLimits

0x34f7,	// (0x0005c816) qrid_highlight_pane_cp011

0xa009,	// (0x00063328) msg_body_pane

0xa009,	// (0x00063328) msg_header_pane

0xb134,	// (0x00064453) input_focus_pane_cp07

0x351b,	// (0x0005c83a) msg_header_pane_t1_ParamLimits

0x351b,	// (0x0005c83a) msg_header_pane_t1

0x3531,	// (0x0005c850) msg_header_pane_t2_ParamLimits

0x3531,	// (0x0005c850) msg_header_pane_t2

0x0001,

0xf41c,	// (0x0006873b) msg_header_pane_t_ParamLimits

0xf41c,	// (0x0006873b) msg_header_pane_t

0xb149,	// (0x00064468) msg_body_pane_g1

0x3548,	// (0x0005c867) msg_body_pane_t1_ParamLimits

0x3548,	// (0x0005c867) msg_body_pane_t1

0x3579,	// (0x0005c898) msg_body_pane_t2_ParamLimits

0x3579,	// (0x0005c898) msg_body_pane_t2

0x358b,	// (0x0005c8aa) msg_body_pane_t3_ParamLimits

0x358b,	// (0x0005c8aa) msg_body_pane_t3

0x0002,

0xf421,	// (0x00068740) msg_body_pane_t_ParamLimits

0xf421,	// (0x00068740) msg_body_pane_t

0x35d7,	// (0x0005c8f6) main_viewer_pane_g1_ParamLimits

0x35d7,	// (0x0005c8f6) main_viewer_pane_g1

0x35e5,	// (0x0005c904) main_viewer_pane_g2_ParamLimits

0x35e5,	// (0x0005c904) main_viewer_pane_g2

0x35f3,	// (0x0005c912) main_viewer_pane_g3_ParamLimits

0x35f3,	// (0x0005c912) main_viewer_pane_g3

0x3602,	// (0x0005c921) main_viewer_pane_g4_ParamLimits

0x3602,	// (0x0005c921) main_viewer_pane_g4

0xb169,	// (0x00064488) main_viewer_pane_g5_ParamLimits

0xb169,	// (0x00064488) main_viewer_pane_g5

0xb169,	// (0x00064488) main_viewer_pane_g7_ParamLimits

0xb169,	// (0x00064488) main_viewer_pane_g7

0xb17b,	// (0x0006449a) main_viewer_pane_g8_ParamLimits

0xb17b,	// (0x0006449a) main_viewer_pane_g8

0x0007,

0xf431,	// (0x00068750) main_viewer_pane_g_ParamLimits

0xf431,	// (0x00068750) main_viewer_pane_g

0xb193,	// (0x000644b2) viewer_content_pane_ParamLimits

0xb193,	// (0x000644b2) viewer_content_pane

0x3640,	// (0x0005c95f) main_postcard_pane_g1_ParamLimits

0x3640,	// (0x0005c95f) main_postcard_pane_g1

0x3656,	// (0x0005c975) main_postcard_pane_g2_ParamLimits

0x3656,	// (0x0005c975) main_postcard_pane_g2

0x366c,	// (0x0005c98b) main_postcard_pane_g3_ParamLimits

0x366c,	// (0x0005c98b) main_postcard_pane_g3

0x0005,

0xf442,	// (0x00068761) main_postcard_pane_g_ParamLimits

0xf442,	// (0x00068761) main_postcard_pane_g

0x3683,	// (0x0005c9a2) main_postcard_pane_g4

0xe7eb,	// (0x00067b0a) smil_status_volume_pane_g2

0x36c6,	// (0x0005c9e5) postcard_pane_ParamLimits

0x36c6,	// (0x0005c9e5) postcard_pane

0xb1a1,	// (0x000644c0) postcard_pane_g1_ParamLimits

0xb1a1,	// (0x000644c0) postcard_pane_g1

0x3716,	// (0x0005ca35) postcard_pane_g2_ParamLimits

0x3716,	// (0x0005ca35) postcard_pane_g2

0x3722,	// (0x0005ca41) postcard_pane_g3_ParamLimits

0x3722,	// (0x0005ca41) postcard_pane_g3

0xb1af,	// (0x000644ce) postcard_pane_g4_ParamLimits

0xb1af,	// (0x000644ce) postcard_pane_g4

0x372e,	// (0x0005ca4d) postcard_pane_g5_ParamLimits

0x372e,	// (0x0005ca4d) postcard_pane_g5

0x3743,	// (0x0005ca62) postcard_pane_g6_ParamLimits

0x3743,	// (0x0005ca62) postcard_pane_g6

0xb1a1,	// (0x000644c0) postcard_pane_g7_ParamLimits

0xb1a1,	// (0x000644c0) postcard_pane_g7

0x0006,

0xf44f,	// (0x0006876e) postcard_pane_g_ParamLimits

0xf44f,	// (0x0006876e) postcard_pane_g

0x375b,	// (0x0005ca7a) main_mp2_pane_g1_ParamLimits

0x375b,	// (0x0005ca7a) main_mp2_pane_g1

0x3769,	// (0x0005ca88) main_mp2_pane_g2_ParamLimits

0x3769,	// (0x0005ca88) main_mp2_pane_g2

0x3775,	// (0x0005ca94) main_mp2_pane_g3_ParamLimits

0x3775,	// (0x0005ca94) main_mp2_pane_g3

0x0002,

0xf45e,	// (0x0006877d) main_mp2_pane_g_ParamLimits

0xf45e,	// (0x0006877d) main_mp2_pane_g

0x3781,	// (0x0005caa0) main_mp2_pane_t1_ParamLimits

0x3781,	// (0x0005caa0) main_mp2_pane_t1

0x3798,	// (0x0005cab7) main_mp2_pane_t2_ParamLimits

0x3798,	// (0x0005cab7) main_mp2_pane_t2

0x37ac,	// (0x0005cacb) main_mp2_pane_t3_ParamLimits

0x37ac,	// (0x0005cacb) main_mp2_pane_t3

0x0002,

0xf465,	// (0x00068784) main_mp2_pane_t_ParamLimits

0xf465,	// (0x00068784) main_mp2_pane_t

0xb1bd,	// (0x000644dc) pec_content_pane_ParamLimits

0xb1bd,	// (0x000644dc) pec_content_pane

0xa74e,	// (0x00063a6d) scroll_pane_cp015

0xb1cf,	// (0x000644ee) pec_attribute_pane_ParamLimits

0xb1cf,	// (0x000644ee) pec_attribute_pane

0x37be,	// (0x0005cadd) pec_content_pane_g1_ParamLimits

0x37be,	// (0x0005cadd) pec_content_pane_g1

0xb1df,	// (0x000644fe) pec_content_pane_t1_ParamLimits

0xb1df,	// (0x000644fe) pec_content_pane_t1

0xb1f1,	// (0x00064510) pec_content_pane_t2_ParamLimits

0xb1f1,	// (0x00064510) pec_content_pane_t2

0x0001,

0xf46c,	// (0x0006878b) pec_content_pane_t_ParamLimits

0xf46c,	// (0x0006878b) pec_content_pane_t

0x37ca,	// (0x0005cae9) list_single_graphic_pane_cp01_ParamLimits

0x37ca,	// (0x0005cae9) list_single_graphic_pane_cp01

0xa264,	// (0x00063583) bg_popup_sub_pane_cp04

0xb203,	// (0x00064522) popup_mup_playback_window_g1

0xb20f,	// (0x0006452e) popup_mup_playback_window_t1

0xb224,	// (0x00064543) popup_mup_playback_window_t2

0x0001,

0xf471,	// (0x00068790) popup_mup_playback_window_t

0xb25b,	// (0x0006457a) main_image_pane_g1_ParamLimits

0xb25b,	// (0x0006457a) main_image_pane_g1

0xb29e,	// (0x000645bd) scroll_pane_cp018_ParamLimits

0xb29e,	// (0x000645bd) scroll_pane_cp018

0xb2b6,	// (0x000645d5) scroll_pane_cp016_ParamLimits

0xb2b6,	// (0x000645d5) scroll_pane_cp016

0x389c,	// (0x0005cbbb) smil2_image_pane_ParamLimits

0x389c,	// (0x0005cbbb) smil2_image_pane

0x38d2,	// (0x0005cbf1) smil2_root_pane_ParamLimits

0x38d2,	// (0x0005cbf1) smil2_root_pane

0x390a,	// (0x0005cc29) smil2_text_pane_ParamLimits

0x390a,	// (0x0005cc29) smil2_text_pane

0xa009,	// (0x00063328) bg_list_pane_cp06

0xb2f2,	// (0x00064611) grid_radio_pane

0xa009,	// (0x00063328) bg_popup_window_pane_cp06

0xb2fc,	// (0x0006461b) main_fmradio_pane_t1

0xe6aa,	// (0x000679c9) heading_pane_cp04

0xb30a,	// (0x00064629) main_fmradio_pane_t2

0xe6b2,	// (0x000679d1) popup_cale_lunar_info_window_g1

0xb318,	// (0x00064637) main_fmradio_pane_t3

0xe6ba,	// (0x000679d9) popup_cale_lunar_info_window_g2

0xb328,	// (0x00064647) main_fmradio_pane_t4

0x0001,

0xb336,	// (0x00064655) main_fmradio_pane_t5

0x0004,

0x040b,	// (0x0005972a) popup_cale_lunar_info_window_g

0xf486,	// (0x000687a5) main_fmradio_pane_t

0xb344,	// (0x00064663) wait_bar_pane_cp03

0xb34c,	// (0x0006466b) cell_fmradio_pane_ParamLimits

0xb34c,	// (0x0006466b) cell_fmradio_pane

0xb1a1,	// (0x000644c0) cell_fmradio_pane_g1_ParamLimits

0xb1a1,	// (0x000644c0) cell_fmradio_pane_g1

0xa009,	// (0x00063328) grid_highlight_pane_cp011

0xb361,	// (0x00064680) poc_content_pane_ParamLimits

0xb361,	// (0x00064680) poc_content_pane

0xb373,	// (0x00064692) scroll_pane_cp019

0x399a,	// (0x0005ccb9) popup_call_poc_act_window_ParamLimits

0x399a,	// (0x0005ccb9) popup_call_poc_act_window

0x39be,	// (0x0005ccdd) popup_call_poc_inact_window_ParamLimits

0x39be,	// (0x0005ccdd) popup_call_poc_inact_window

0x03e2,	// (0x00059701) bg_popup_call_poc_act_pane_g

0xe622,	// (0x00067941) bg_popup_call_poc_inact_pane_g1

0xe62a,	// (0x00067949) bg_popup_call_poc_inact_pane_g2

0xb37b,	// (0x0006469a) popup_call_poc_act_window_g2

0xe632,	// (0x00067951) bg_popup_call_poc_inact_pane_g3

0xe63a,	// (0x00067959) bg_popup_call_poc_inact_pane_g4

0xe642,	// (0x00067961) bg_popup_call_poc_inact_pane_g5

0xb383,	// (0x000646a2) popup_call_poc_act_window_t1_ParamLimits

0xb383,	// (0x000646a2) popup_call_poc_act_window_t1

0xb3ab,	// (0x000646ca) popup_call_poc_act_window_t2_ParamLimits

0xb3ab,	// (0x000646ca) popup_call_poc_act_window_t2

0xb3d3,	// (0x000646f2) popup_call_poc_act_window_t3_ParamLimits

0xb3d3,	// (0x000646f2) popup_call_poc_act_window_t3

0xb3fb,	// (0x0006471a) popup_call_poc_act_window_t4_ParamLimits

0xb3fb,	// (0x0006471a) popup_call_poc_act_window_t4

0x0003,

0xf491,	// (0x000687b0) popup_call_poc_act_window_t_ParamLimits

0xf491,	// (0x000687b0) popup_call_poc_act_window_t

0xe64a,	// (0x00067969) bg_popup_call_poc_inact_pane_g6

0xe652,	// (0x00067971) bg_popup_call_poc_inact_pane_g7

0xe65a,	// (0x00067979) bg_popup_call_poc_inact_pane_g8

0xb40d,	// (0x0006472c) popup_call_poc_inact_window_g2

0xe662,	// (0x00067981) bg_popup_call_poc_inact_pane_g9

0x0008,

0x03cf,	// (0x000596ee) bg_popup_call_poc_inact_pane_g

0xb415,	// (0x00064734) popup_call_poc_inact_window_t1_ParamLimits

0xb415,	// (0x00064734) popup_call_poc_inact_window_t1

0xb42a,	// (0x00064749) popup_call_poc_inact_window_t2_ParamLimits

0xb42a,	// (0x00064749) popup_call_poc_inact_window_t2

0xb43f,	// (0x0006475e) popup_call_poc_inact_window_t3_ParamLimits

0xb43f,	// (0x0006475e) popup_call_poc_inact_window_t3

0x0002,

0xf49a,	// (0x000687b9) popup_call_poc_inact_window_t_ParamLimits

0xf49a,	// (0x000687b9) popup_call_poc_inact_window_t

0xe750,	// (0x00067a6f) context_pane_ParamLimits

0x42b9,	// (0x0005d5d8) signal_pane_ParamLimits

0xa594,	// (0x000638b3) main_call2_pane

0xb986,	// (0x00064ca5) popup_phob_thumbnail2_window_ParamLimits

0xb986,	// (0x00064ca5) popup_phob_thumbnail2_window

0xb151,	// (0x00064470) aid_hotspot_pointer_arrow_pane

0xb159,	// (0x00064478) aid_hotspot_pointer_hand_pane

0x3d48,	// (0x0005d067) phob_pre_status_pane_g5

0xa286,	// (0x000635a5) cams_zoom_pane_ParamLimits

0xa286,	// (0x000635a5) image_vga_pane_ParamLimits

0xa2ed,	// (0x0006360c) main_camera_pane_g1_ParamLimits

0xa2ed,	// (0x0006360c) main_camera_pane_g2_ParamLimits

0xa2ed,	// (0x0006360c) main_camera_pane_g3_ParamLimits

0xa2ed,	// (0x0006360c) main_camera_pane_g4_ParamLimits

0xa2ed,	// (0x0006360c) main_camera_pane_g5_ParamLimits

0xa2ed,	// (0x0006360c) main_camera_pane_g6_ParamLimits

0xa2ed,	// (0x0006360c) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x000684e4) main_camera_pane_g_ParamLimits

0xa5bb,	// (0x000638da) main_camera_pane_t1_ParamLimits

0xa5bb,	// (0x000638da) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x000684f5) main_camera_pane_t_ParamLimits

0xa264,	// (0x00063583) bg_popup_preview_window_pane_cp01_ParamLimits

0xa264,	// (0x00063583) bg_popup_preview_window_pane_cp01

0xb454,	// (0x00064773) popup_phob_thumbnail2_window_g1_ParamLimits

0xb454,	// (0x00064773) popup_phob_thumbnail2_window_g1

0xa009,	// (0x00063328) call2_cli_visual_pane

0x39f2,	// (0x0005cd11) popup_call2_audio_conf_window_ParamLimits

0x39f2,	// (0x0005cd11) popup_call2_audio_conf_window

0x3a1a,	// (0x0005cd39) popup_call2_audio_first_window_ParamLimits

0x3a1a,	// (0x0005cd39) popup_call2_audio_first_window

0x3ab0,	// (0x0005cdcf) popup_call2_audio_in_window_ParamLimits

0x3ab0,	// (0x0005cdcf) popup_call2_audio_in_window

0x3afc,	// (0x0005ce1b) popup_call2_audio_out_window_ParamLimits

0x3afc,	// (0x0005ce1b) popup_call2_audio_out_window

0x3b6e,	// (0x0005ce8d) popup_call2_audio_second_window_ParamLimits

0x3b6e,	// (0x0005ce8d) popup_call2_audio_second_window

0x3bd4,	// (0x0005cef3) popup_call2_audio_wait_window_ParamLimits

0x3bd4,	// (0x0005cef3) popup_call2_audio_wait_window

0xa009,	// (0x00063328) bg_popup_call2_act_pane_cp03

0xa246,	// (0x00063565) list_conf_pane_cp

0xb460,	// (0x0006477f) popup_call2_audio_conf_window_t1

0xb46e,	// (0x0006478d) list_single_graphic_popup_conf2_pane_ParamLimits

0xb46e,	// (0x0006478d) list_single_graphic_popup_conf2_pane

0xada8,	// (0x000640c7) list_highlight_pane_cp04

0xb481,	// (0x000647a0) list_single_graphic_popup_conf2_pane_g1

0xadb9,	// (0x000640d8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a1,	// (0x000687c0) list_single_graphic_popup_conf2_pane_g

0xb48b,	// (0x000647aa) list_single_graphic_popup_conf2_pane_t1

0xb499,	// (0x000647b8) bg_popup_call2_act_pane_cp01_ParamLimits

0xb499,	// (0x000647b8) bg_popup_call2_act_pane_cp01

0xb523,	// (0x00064842) call_type_pane_cp05_ParamLimits

0xb523,	// (0x00064842) call_type_pane_cp05

0xb577,	// (0x00064896) popup_call2_audio_second_window_g1_ParamLimits

0xb577,	// (0x00064896) popup_call2_audio_second_window_g1

0xb5cb,	// (0x000648ea) popup_call2_audio_second_window_g2_ParamLimits

0xb5cb,	// (0x000648ea) popup_call2_audio_second_window_g2

0x0002,

0xf4a6,	// (0x000687c5) popup_call2_audio_second_window_g_ParamLimits

0xf4a6,	// (0x000687c5) popup_call2_audio_second_window_g

0xb630,	// (0x0006494f) popup_call2_audio_second_window_t1_ParamLimits

0xb630,	// (0x0006494f) popup_call2_audio_second_window_t1

0xb6eb,	// (0x00064a0a) popup_call2_audio_second_window_t2_ParamLimits

0xb6eb,	// (0x00064a0a) popup_call2_audio_second_window_t2

0xb73e,	// (0x00064a5d) popup_call2_audio_second_window_t3_ParamLimits

0xb73e,	// (0x00064a5d) popup_call2_audio_second_window_t3

0x0003,

0xf4ad,	// (0x000687cc) popup_call2_audio_second_window_t_ParamLimits

0xf4ad,	// (0x000687cc) popup_call2_audio_second_window_t

0xa009,	// (0x00063328) bg_popup_call2_in_pane_cp02

0xa013,	// (0x00063332) call_type_pane_cp04

0x3c0e,	// (0x0005cf2d) popup_call2_audio_wait_window_g1

0x3c16,	// (0x0005cf35) popup_call2_audio_wait_window_g2

0x0001,

0xf4b6,	// (0x000687d5) popup_call2_audio_wait_window_g

0xa02b,	// (0x0006334a) popup_call2_audio_wait_window_t3

0xb831,	// (0x00064b50) bg_popup_call2_act_pane_ParamLimits

0xb831,	// (0x00064b50) bg_popup_call2_act_pane

0xb8f1,	// (0x00064c10) call_type_pane_cp03_ParamLimits

0xb8f1,	// (0x00064c10) call_type_pane_cp03

0xdd55,	// (0x00067074) popup_call2_audio_first_window_g1_ParamLimits

0xdd55,	// (0x00067074) popup_call2_audio_first_window_g1

0xddc5,	// (0x000670e4) popup_call2_audio_first_window_g2_ParamLimits

0xddc5,	// (0x000670e4) popup_call2_audio_first_window_g2

0xde29,	// (0x00067148) popup_call2_audio_first_window_g3_ParamLimits

0xde29,	// (0x00067148) popup_call2_audio_first_window_g3

0x0004,

0xf4bb,	// (0x000687da) popup_call2_audio_first_window_g_ParamLimits

0xf4bb,	// (0x000687da) popup_call2_audio_first_window_g

0xdebf,	// (0x000671de) popup_call2_audio_first_window_t1_ParamLimits

0xdebf,	// (0x000671de) popup_call2_audio_first_window_t1

0xdfc2,	// (0x000672e1) popup_call2_audio_first_window_t4_ParamLimits

0xdfc2,	// (0x000672e1) popup_call2_audio_first_window_t4

0xe0a5,	// (0x000673c4) popup_call2_audio_first_window_t5_ParamLimits

0xe0a5,	// (0x000673c4) popup_call2_audio_first_window_t5

0x0003,

0x0380,	// (0x0005969f) popup_call2_audio_first_window_t_ParamLimits

0x0380,	// (0x0005969f) popup_call2_audio_first_window_t

0xa25c,	// (0x0006357b) bg_popup_call2_act_pane_g1

0xe6c4,	// (0x000679e3) popup_cale_lunar_info_window_t1

0xe6d2,	// (0x000679f1) popup_cale_lunar_info_window_t2

0xe6e0,	// (0x000679ff) popup_cale_lunar_info_window_t3

0xa009,	// (0x00063328) bg_popup_call2_bubble_pane

0xe1a6,	// (0x000674c5) bg_popup_call2_in_pane_cp01_ParamLimits

0xe1a6,	// (0x000674c5) bg_popup_call2_in_pane_cp01

0x9ce5,	// (0x00063004) call_type_pane_cp02

0x3c1e,	// (0x0005cf3d) popup_call2_audio_out_window_g1_ParamLimits

0x3c1e,	// (0x0005cf3d) popup_call2_audio_out_window_g1

0xe1ee,	// (0x0006750d) popup_call2_audio_out_window_g2_ParamLimits

0xe1ee,	// (0x0006750d) popup_call2_audio_out_window_g2

0x3c4a,	// (0x0005cf69) popup_call2_audio_out_window_g3_ParamLimits

0x3c4a,	// (0x0005cf69) popup_call2_audio_out_window_g3

0x0003,

0xf4c6,	// (0x000687e5) popup_call2_audio_out_window_g_ParamLimits

0xf4c6,	// (0x000687e5) popup_call2_audio_out_window_g

0xe225,	// (0x00067544) popup_call2_audio_out_window_t1_ParamLimits

0xe225,	// (0x00067544) popup_call2_audio_out_window_t1

0xe284,	// (0x000675a3) popup_call2_audio_out_window_t2_ParamLimits

0xe284,	// (0x000675a3) popup_call2_audio_out_window_t2

0xe2d8,	// (0x000675f7) popup_call2_audio_out_window_t3_ParamLimits

0xe2d8,	// (0x000675f7) popup_call2_audio_out_window_t3

0xe2ee,	// (0x0006760d) popup_call2_audio_out_window_t4_ParamLimits

0xe2ee,	// (0x0006760d) popup_call2_audio_out_window_t4

0xe304,	// (0x00067623) popup_call2_audio_out_window_t5_ParamLimits

0xe304,	// (0x00067623) popup_call2_audio_out_window_t5

0x0005,

0x0392,	// (0x000596b1) popup_call2_audio_out_window_t_ParamLimits

0x0392,	// (0x000596b1) popup_call2_audio_out_window_t

0xe368,	// (0x00067687) bg_popup_call2_in_pane_ParamLimits

0xe368,	// (0x00067687) bg_popup_call2_in_pane

0xe3c4,	// (0x000676e3) popup_call2_audio_in_window_g1_ParamLimits

0xe3c4,	// (0x000676e3) popup_call2_audio_in_window_g1

0xe3fc,	// (0x0006771b) popup_call2_audio_in_window_g2_ParamLimits

0xe3fc,	// (0x0006771b) popup_call2_audio_in_window_g2

0xe434,	// (0x00067753) popup_call2_audio_in_window_g3_ParamLimits

0xe434,	// (0x00067753) popup_call2_audio_in_window_g3

0x0003,

0x039f,	// (0x000596be) popup_call2_audio_in_window_g_ParamLimits

0x039f,	// (0x000596be) popup_call2_audio_in_window_g

0xe48c,	// (0x000677ab) popup_call2_audio_in_window_t1_ParamLimits

0xe48c,	// (0x000677ab) popup_call2_audio_in_window_t1

0xe50c,	// (0x0006782b) popup_call2_audio_in_window_t2_ParamLimits

0xe50c,	// (0x0006782b) popup_call2_audio_in_window_t2

0xe58c,	// (0x000678ab) popup_call2_audio_in_window_t3_ParamLimits

0xe58c,	// (0x000678ab) popup_call2_audio_in_window_t3

0xe5a6,	// (0x000678c5) popup_call2_audio_in_window_t4_ParamLimits

0xe5a6,	// (0x000678c5) popup_call2_audio_in_window_t4

0xe5b8,	// (0x000678d7) popup_call2_audio_in_window_t5_ParamLimits

0xe5b8,	// (0x000678d7) popup_call2_audio_in_window_t5

0xe5cd,	// (0x000678ec) popup_call2_audio_in_window_t6_ParamLimits

0xe5cd,	// (0x000678ec) popup_call2_audio_in_window_t6

0x0005,

0x03a8,	// (0x000596c7) popup_call2_audio_in_window_t_ParamLimits

0x03a8,	// (0x000596c7) popup_call2_audio_in_window_t

0xa25c,	// (0x0006357b) bg_popup_call2_in_pane_g1

0xe6ee,	// (0x00067a0d) popup_cale_lunar_info_window_t4

0x0003,

0x0410,	// (0x0005972f) popup_cale_lunar_info_window_t

0xa264,	// (0x00063583) bg_popup_call2_rect_pane_ParamLimits

0xa264,	// (0x00063583) bg_popup_call2_rect_pane

0xa009,	// (0x00063328) call2_cli_visual_graphic_pane

0xa009,	// (0x00063328) call2_cli_visual_text_pane

0xb9ad,	// (0x00064ccc) smil_status_volume_pane_g3

0x0002,

0xa27c,	// (0x0006359b) call2_cli_visual_graphic_pane_g1

0xa27c,	// (0x0006359b) call2_cli_visual_graphic_pane_g2

0xa27c,	// (0x0006359b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4cf,	// (0x000687ee) call2_cli_visual_graphic_pane_g

0xe5e2,	// (0x00067901) bg_popup_call2_rect_pane_g1

0xa485,	// (0x000637a4) bg_popup_call2_rect_pane_g2

0xe5ea,	// (0x00067909) bg_popup_call2_rect_pane_g3

0xe5f2,	// (0x00067911) bg_popup_call2_rect_pane_g4

0xe5fa,	// (0x00067919) bg_popup_call2_rect_pane_g5

0xe602,	// (0x00067921) bg_popup_call2_rect_pane_g6

0xe60a,	// (0x00067929) bg_popup_call2_rect_pane_g7

0xe612,	// (0x00067931) bg_popup_call2_rect_pane_g8

0xe61a,	// (0x00067939) bg_popup_call2_rect_pane_g9

0x0008,

0xf4d6,	// (0x000687f5) bg_popup_call2_rect_pane_g

0xe622,	// (0x00067941) bg_popup_call2_bubble_pane_g1

0xe62a,	// (0x00067949) bg_popup_call2_bubble_pane_g2

0xe632,	// (0x00067951) bg_popup_call2_bubble_pane_g3

0xe63a,	// (0x00067959) bg_popup_call2_bubble_pane_g4

0xe642,	// (0x00067961) bg_popup_call2_bubble_pane_g5

0xe64a,	// (0x00067969) bg_popup_call2_bubble_pane_g6

0xe652,	// (0x00067971) bg_popup_call2_bubble_pane_g7

0xe65a,	// (0x00067979) bg_popup_call2_bubble_pane_g8

0xe662,	// (0x00067981) bg_popup_call2_bubble_pane_g9

0x0008,

0x03cf,	// (0x000596ee) bg_popup_call2_bubble_pane_g

0x1456,	// (0x0005a775) aid_cale_week_size_cell_pane

0x1a85,	// (0x0005ada4) aid_cams_cif_uncrop_pane_ParamLimits

0x1a85,	// (0x0005ada4) aid_cams_cif_uncrop_pane

0x1bdb,	// (0x0005aefa) aid_cams_size_cell_ParamLimits

0x1bdb,	// (0x0005aefa) aid_cams_size_cell

0x1bef,	// (0x0005af0e) grid_cams_pane_ParamLimits

0x1c09,	// (0x0005af28) linegrid_cams_pane_ParamLimits

0x1ce7,	// (0x0005b006) call_video_pane_t1

0x1d01,	// (0x0005b020) call_video_pane_t2

0x0001,

0xf222,	// (0x00068541) call_video_pane_t

0x214e,	// (0x0005b46d) aid_cale_month_size_cell_pane_ParamLimits

0x214e,	// (0x0005b46d) aid_cale_month_size_cell_pane

0xf521,	// (0x00068840) smil_status_volume_pane_g

0xb9ba,	// (0x00064cd9) volume_smil_pane_ParamLimits

0x9b3e,	// (0x00062e5d) aid_popup2_width_pane

0x13a9,	// (0x0005a6c8) cell_qdial_pane_g4_ParamLimits

0x13a9,	// (0x0005a6c8) cell_qdial_pane_g4

0x306a,	// (0x0005c389) aid_blid_cardinal_pane_ParamLimits

0x307a,	// (0x0005c399) aid_blid_destination_pane_ParamLimits

0x307a,	// (0x0005c399) aid_blid_destination_pane

0xa264,	// (0x00063583) bg_popup_call_poc_act_pane_ParamLimits

0xa264,	// (0x00063583) bg_popup_call_poc_act_pane

0xa264,	// (0x00063583) bg_popup_call_poc_inact_pane_ParamLimits

0xa264,	// (0x00063583) bg_popup_call_poc_inact_pane

0xe66a,	// (0x00067989) bg_popup_call_poc_act_pane_g1

0xe672,	// (0x00067991) bg_popup_call_poc_act_pane_g2

0xe67a,	// (0x00067999) bg_popup_call_poc_act_pane_g3

0xe63a,	// (0x00067959) bg_popup_call_poc_act_pane_g4

0xe642,	// (0x00067961) bg_popup_call_poc_act_pane_g5

0xe682,	// (0x000679a1) bg_popup_call_poc_act_pane_g6

0xe652,	// (0x00067971) bg_popup_call_poc_act_pane_g7

0xe68a,	// (0x000679a9) bg_popup_call_poc_act_pane_g8

0xa009,	// (0x00063328) main_usb_pane

0xb95d,	// (0x00064c7c) popup_cale_lunar_info_window

0x1fce,	// (0x0005b2ed) im_reading_pane_t1_ParamLimits

0xa6a6,	// (0x000639c5) list_im_pane_ParamLimits

0xa6b7,	// (0x000639d6) scroll_pane_cp07_ParamLimits

0xa009,	// (0x00063328) grid_highlight_pane_cp012

0xa264,	// (0x00063583) mup_scale_pane_ParamLimits

0xb1a1,	// (0x000644c0) main_usb_pane_g1_ParamLimits

0xb1a1,	// (0x000644c0) main_usb_pane_g1

0x3c9d,	// (0x0005cfbc) main_usb_pane_g2_ParamLimits

0x3c9d,	// (0x0005cfbc) main_usb_pane_g2

0x0001,

0xf4e9,	// (0x00068808) main_usb_pane_g_ParamLimits

0xf4e9,	// (0x00068808) main_usb_pane_g

0x3cb3,	// (0x0005cfd2) main_usb_pane_t1_ParamLimits

0x3cb3,	// (0x0005cfd2) main_usb_pane_t1

0x3cc5,	// (0x0005cfe4) main_usb_pane_t2_ParamLimits

0x3cc5,	// (0x0005cfe4) main_usb_pane_t2

0x3cd7,	// (0x0005cff6) main_usb_pane_t3_ParamLimits

0x3cd7,	// (0x0005cff6) main_usb_pane_t3

0x3ce9,	// (0x0005d008) main_usb_pane_t4_ParamLimits

0x3ce9,	// (0x0005d008) main_usb_pane_t4

0x3cfe,	// (0x0005d01d) main_usb_pane_t5_ParamLimits

0x3cfe,	// (0x0005d01d) main_usb_pane_t5

0x3d13,	// (0x0005d032) main_usb_pane_t6_ParamLimits

0x3d13,	// (0x0005d032) main_usb_pane_t6

0x0005,

0xf4ee,	// (0x0006880d) main_usb_pane_t_ParamLimits

0x3009,	// (0x0005c328) aid_text_placing

0x3014,	// (0x0005c333) main_location2_pane_t1_ParamLimits

0x302a,	// (0x0005c349) main_location2_pane_t2_ParamLimits

0x3040,	// (0x0005c35f) main_location2_pane_t3_ParamLimits

0x3056,	// (0x0005c375) main_location2_pane_t4_ParamLimits

0x3056,	// (0x0005c375) main_location2_pane_t4

0xf35e,	// (0x0006867d) main_location2_pane_t_ParamLimits

0xa2a0,	// (0x000635bf) find_pinb_pane_g2_ParamLimits

0xa2a0,	// (0x000635bf) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x000683f9) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x000683f9) find_pinb_pane_g

0xa2ac,	// (0x000635cb) find_pinb_pane_t1_ParamLimits

0xa2be,	// (0x000635dd) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x000683fe) find_pinb_pane_t_ParamLimits

0xa009,	// (0x00063328) main_call3_pane

0x2753,	// (0x0005ba72) cale_month_day_heading_pane_t1_ParamLimits

0x27d9,	// (0x0005baf8) cale_month_day_heading_pane_t2_ParamLimits

0x2852,	// (0x0005bb71) cale_month_day_heading_pane_t3_ParamLimits

0x28cb,	// (0x0005bbea) cale_month_day_heading_pane_t4_ParamLimits

0x294c,	// (0x0005bc6b) cale_month_day_heading_pane_t5_ParamLimits

0x29d5,	// (0x0005bcf4) cale_month_day_heading_pane_t6_ParamLimits

0x2a66,	// (0x0005bd85) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x00068579) cale_month_day_heading_pane_t_ParamLimits

0xa90d,	// (0x00063c2c) smil_status_volume_pane

0x36ea,	// (0x0005ca09) postcard_address_pane_ParamLimits

0x36ea,	// (0x0005ca09) postcard_address_pane

0x3700,	// (0x0005ca1f) postcard_message_pane_ParamLimits

0x3700,	// (0x0005ca1f) postcard_message_pane

0x3c76,	// (0x0005cf95) call2_cli_visual_pane_t1_ParamLimits

0x3c76,	// (0x0005cf95) call2_cli_visual_pane_t1

0xe816,	// (0x00067b35) postcard_message_pane_t1_ParamLimits

0xe816,	// (0x00067b35) postcard_message_pane_t1

0xe7fe,	// (0x00067b1d) postcard_address_pane_t1_ParamLimits

0xe7fe,	// (0x00067b1d) postcard_address_pane_t1

0x4465,	// (0x0005d784) popup_call3_audio_in_window_ParamLimits

0x4465,	// (0x0005d784) popup_call3_audio_in_window

0x42ea,	// (0x0005d609) bg_popup_call3_in_pane_ParamLimits

0x42ea,	// (0x0005d609) bg_popup_call3_in_pane

0x4366,	// (0x0005d685) popup_call3_audio_in_window_g1_ParamLimits

0x4366,	// (0x0005d685) popup_call3_audio_in_window_g1

0x4386,	// (0x0005d6a5) popup_call3_audio_in_window_g2_ParamLimits

0x4386,	// (0x0005d6a5) popup_call3_audio_in_window_g2

0x43a6,	// (0x0005d6c5) popup_call3_audio_in_window_g3_ParamLimits

0x43a6,	// (0x0005d6c5) popup_call3_audio_in_window_g3

0x0003,

0xf528,	// (0x00068847) popup_call3_audio_in_window_g_ParamLimits

0xf528,	// (0x00068847) popup_call3_audio_in_window_g

0x43d7,	// (0x0005d6f6) popup_call3_audio_in_window_t1_ParamLimits

0x43d7,	// (0x0005d6f6) popup_call3_audio_in_window_t1

0x4415,	// (0x0005d734) popup_call3_audio_in_window_t2_ParamLimits

0x4415,	// (0x0005d734) popup_call3_audio_in_window_t2

0x4453,	// (0x0005d772) popup_call3_audio_in_window_t3_ParamLimits

0x4453,	// (0x0005d772) popup_call3_audio_in_window_t3

0x0002,

0xf531,	// (0x00068850) popup_call3_audio_in_window_t_ParamLimits

0xf531,	// (0x00068850) popup_call3_audio_in_window_t

0xa594,	// (0x000638b3) bg_popup_call3_rect_pane

0xe5e2,	// (0x00067901) bg_popup_call3_rect_pane_g1

0xa485,	// (0x000637a4) bg_popup_call3_rect_pane_g2

0xe5ea,	// (0x00067909) bg_popup_call3_rect_pane_g3

0xe5f2,	// (0x00067911) bg_popup_call3_rect_pane_g4

0xe5fa,	// (0x00067919) bg_popup_call3_rect_pane_g5

0xe602,	// (0x00067921) bg_popup_call3_rect_pane_g6

0xe60a,	// (0x00067929) bg_popup_call3_rect_pane_g7

0x9b2c,	// (0x00062e4b) mup_visualizer_osc_pane

0x9b2c,	// (0x00062e4b) mup_visualizer_spec_pane

0x431a,	// (0x0005d639) call3_video_qcif_pane_ParamLimits

0x431a,	// (0x0005d639) call3_video_qcif_pane

0x432d,	// (0x0005d64c) call3_video_qcif_uncrop_pane_ParamLimits

0x432d,	// (0x0005d64c) call3_video_qcif_uncrop_pane

0x433d,	// (0x0005d65c) call3_video_subqcif_pane_ParamLimits

0x433d,	// (0x0005d65c) call3_video_subqcif_pane

0x4353,	// (0x0005d672) call3_video_subqcif_uncrop_pane_ParamLimits

0x4353,	// (0x0005d672) call3_video_subqcif_uncrop_pane

0x43c6,	// (0x0005d6e5) popup_call3_audio_in_window_g4_ParamLimits

0x43c6,	// (0x0005d6e5) popup_call3_audio_in_window_g4

0x9b2c,	// (0x00062e4b) mup_spec_half_pane

0x9b2c,	// (0x00062e4b) mup_spec_half_pane_cp

0x9b2c,	// (0x00062e4b) mup_osc_middle_pane

0xa5e9,	// (0x00063908) mup_visualizer_osc_pane_g1

0xe7b1,	// (0x00067ad0) mup_spec_bar_pane_ParamLimits

0xe7b1,	// (0x00067ad0) mup_spec_bar_pane

0xa5e9,	// (0x00063908) mup_spec_bar_pane_g1

0xa5e9,	// (0x00063908) mup_spec_bar_pane_g2

0x0001,

0xf3d8,	// (0x000686f7) mup_spec_bar_pane_g

0x1456,	// (0x0005a775) aid_cale_week_size_cell_pane_ParamLimits

0x1470,	// (0x0005a78f) bg_cale_heading_pane_ParamLimits

0x1494,	// (0x0005a7b3) bg_cale_pane_cp01_ParamLimits

0x14b1,	// (0x0005a7d0) cale_week_corner_pane_ParamLimits

0x14d0,	// (0x0005a7ef) cale_week_day_heading_pane_ParamLimits

0x14f9,	// (0x0005a818) cale_week_scroll_pane_g1_ParamLimits

0x1518,	// (0x0005a837) cale_week_scroll_pane_g2_ParamLimits

0x1530,	// (0x0005a84f) cale_week_scroll_pane_g3_ParamLimits

0x1548,	// (0x0005a867) cale_week_scroll_pane_g4_ParamLimits

0x1560,	// (0x0005a87f) cale_week_scroll_pane_g5_ParamLimits

0x1580,	// (0x0005a89f) cale_week_scroll_pane_g6_ParamLimits

0x15a0,	// (0x0005a8bf) cale_week_scroll_pane_g7_ParamLimits

0x15c4,	// (0x0005a8e3) cale_week_scroll_pane_g8_ParamLimits

0x15e8,	// (0x0005a907) cale_week_scroll_pane_g9_ParamLimits

0x1600,	// (0x0005a91f) cale_week_scroll_pane_g10_ParamLimits

0x1618,	// (0x0005a937) cale_week_scroll_pane_g11_ParamLimits

0x1630,	// (0x0005a94f) cale_week_scroll_pane_g12_ParamLimits

0x1654,	// (0x0005a973) cale_week_scroll_pane_g13_ParamLimits

0x1654,	// (0x0005a973) cale_week_scroll_pane_g14_ParamLimits

0x1654,	// (0x0005a973) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0006848a) cale_week_scroll_pane_g_ParamLimits

0x169c,	// (0x0005a9bb) cale_week_time_pane_ParamLimits

0x16c0,	// (0x0005a9df) grid_cale_week_pane_ParamLimits

0xa50a,	// (0x00063829) listscroll_cale_week_pane_t1

0xa51c,	// (0x0006383b) scroll_pane_cp08_ParamLimits

0x21c6,	// (0x0005b4e5) cale_month_corner_pane_ParamLimits

0xa8d7,	// (0x00063bf6) cale_month_pane_t1

0x26ce,	// (0x0005b9ed) cale_month_week_pane_ParamLimits

0x2e49,	// (0x0005c168) popup_call_status_window_g1_ParamLimits

0x2e5d,	// (0x0005c17c) popup_call_status_window_g2_ParamLimits

0x2e71,	// (0x0005c190) popup_call_status_window_g3_ParamLimits

0xf2e5,	// (0x00068604) popup_call_status_window_g_ParamLimits

0xacc6,	// (0x00063fe5) aid_call2_pane

0x350d,	// (0x0005c82c) msg_header_pane_g1

0x36ea,	// (0x0005ca09) postcard_address2_pane_ParamLimits

0x36ea,	// (0x0005ca09) postcard_address2_pane

0x3700,	// (0x0005ca1f) postcard_message2_pane_ParamLimits

0x3700,	// (0x0005ca1f) postcard_message2_pane

0x42c7,	// (0x0005d5e6) message2_row_pane_ParamLimits

0x42c7,	// (0x0005d5e6) message2_row_pane

0xe76b,	// (0x00067a8a) address2_row_pane_ParamLimits

0xe76b,	// (0x00067a8a) address2_row_pane

0xe77e,	// (0x00067a9d) postcard_message2_row_pane_g1

0xe786,	// (0x00067aa5) postcard_message2_row_pane_t1

0xe77e,	// (0x00067a9d) address2_row_pane_g1

0xe786,	// (0x00067aa5) address2_row_pane_t1

0x1a2d,	// (0x0005ad4c) aid_size_cell_vorec

0xa009,	// (0x00063328) main_rss_pane

0xe794,	// (0x00067ab3) rss_list_single_pane_ParamLimits

0xe794,	// (0x00067ab3) rss_list_single_pane

0xe7a2,	// (0x00067ac1) rss_list_single_pane_t1

0xe7a2,	// (0x00067ac1) rss_list_single_pane_t2

0x0001,

0x044f,	// (0x0005976e) rss_list_single_pane_t

0xa009,	// (0x00063328) main_camera2_pane

0xa009,	// (0x00063328) main_video2_pane

0xb9cf,	// (0x00064cee) cams_zoom_pane_cp2_ParamLimits

0xb9cf,	// (0x00064cee) cams_zoom_pane_cp2

0xb9cf,	// (0x00064cee) image2_vga_pane_ParamLimits

0xb9cf,	// (0x00064cee) image2_vga_pane

0xd850,	// (0x00066b6f) main_camera2_pane_g1_ParamLimits

0xd850,	// (0x00066b6f) main_camera2_pane_g1

0xd850,	// (0x00066b6f) main_camera2_pane_g2_ParamLimits

0xd850,	// (0x00066b6f) main_camera2_pane_g2

0xd850,	// (0x00066b6f) main_camera2_pane_g3_ParamLimits

0xd850,	// (0x00066b6f) main_camera2_pane_g3

0xd850,	// (0x00066b6f) main_camera2_pane_g4_ParamLimits

0xd850,	// (0x00066b6f) main_camera2_pane_g4

0xd850,	// (0x00066b6f) main_camera2_pane_g5_ParamLimits

0xd850,	// (0x00066b6f) main_camera2_pane_g5

0xd850,	// (0x00066b6f) main_camera2_pane_g6_ParamLimits

0xd850,	// (0x00066b6f) main_camera2_pane_g6

0xd850,	// (0x00066b6f) main_camera2_pane_g7_ParamLimits

0xd850,	// (0x00066b6f) main_camera2_pane_g7

0xd850,	// (0x00066b6f) main_camera2_pane_g8_ParamLimits

0xd850,	// (0x00066b6f) main_camera2_pane_g8

0x0008,

0xf538,	// (0x00068857) main_camera2_pane_g_ParamLimits

0xf538,	// (0x00068857) main_camera2_pane_g

0x4487,	// (0x0005d7a6) main_camera2_pane_t1_ParamLimits

0x4487,	// (0x0005d7a6) main_camera2_pane_t1

0x4487,	// (0x0005d7a6) main_camera2_pane_t2_ParamLimits

0x4487,	// (0x0005d7a6) main_camera2_pane_t2

0x4487,	// (0x0005d7a6) main_camera2_pane_t3_ParamLimits

0x4487,	// (0x0005d7a6) main_camera2_pane_t3

0x4487,	// (0x0005d7a6) main_camera2_pane_t4_ParamLimits

0x4487,	// (0x0005d7a6) main_camera2_pane_t4

0x0006,

0xf54b,	// (0x0006886a) main_camera2_pane_t_ParamLimits

0xf54b,	// (0x0006886a) main_camera2_pane_t

0xd85e,	// (0x00066b7d) cams_zoom_pane_cp4_ParamLimits

0xd85e,	// (0x00066b7d) cams_zoom_pane_cp4

0x449b,	// (0x0005d7ba) image2_cif_pane_ParamLimits

0x449b,	// (0x0005d7ba) image2_cif_pane

0x9ba9,	// (0x00062ec8) image2_subqcif_pane_ParamLimits

0x9ba9,	// (0x00062ec8) image2_subqcif_pane

0x44a9,	// (0x0005d7c8) main_video2_pane_g1_ParamLimits

0x44a9,	// (0x0005d7c8) main_video2_pane_g1

0x44a9,	// (0x0005d7c8) main_video2_pane_g2_ParamLimits

0x44a9,	// (0x0005d7c8) main_video2_pane_g2

0x44a9,	// (0x0005d7c8) main_video2_pane_g3_ParamLimits

0x44a9,	// (0x0005d7c8) main_video2_pane_g3

0x44a9,	// (0x0005d7c8) main_video2_pane_g4_ParamLimits

0x44a9,	// (0x0005d7c8) main_video2_pane_g4

0x44a9,	// (0x0005d7c8) main_video2_pane_g5_ParamLimits

0x44a9,	// (0x0005d7c8) main_video2_pane_g5

0x44a9,	// (0x0005d7c8) main_video2_pane_g6_ParamLimits

0x44a9,	// (0x0005d7c8) main_video2_pane_g6

0x0005,

0xf55a,	// (0x00068879) main_video2_pane_g_ParamLimits

0xf55a,	// (0x00068879) main_video2_pane_g

0x44b7,	// (0x0005d7d6) main_video2_pane_t1_ParamLimits

0x44b7,	// (0x0005d7d6) main_video2_pane_t1

0x44b7,	// (0x0005d7d6) main_video2_pane_t2_ParamLimits

0x44b7,	// (0x0005d7d6) main_video2_pane_t2

0x44b7,	// (0x0005d7d6) main_video2_pane_t3_ParamLimits

0x44b7,	// (0x0005d7d6) main_video2_pane_t3

0x0002,

0xf567,	// (0x00068886) main_video2_pane_t_ParamLimits

0xf567,	// (0x00068886) main_video2_pane_t

0x3dac,	// (0x0005d0cb) call_muted_g2

0x0001,

0xf51c,	// (0x0006883b) call_muted_g

0xa009,	// (0x00063328) main_mup2_pane

0xb050,	// (0x0006436f) main_mup2_pane_g1_ParamLimits

0xb050,	// (0x0006436f) main_mup2_pane_g1

0xb050,	// (0x0006436f) main_mup2_pane_g2_ParamLimits

0xb050,	// (0x0006436f) main_mup2_pane_g2

0xe8f0,	// (0x00067c0f) main_mup_pane_g13_cp1

0x9bb7,	// (0x00062ed6) mup_volume_pane_cp1

0xb050,	// (0x0006436f) main_mup2_pane_g4_ParamLimits

0xb050,	// (0x0006436f) main_mup2_pane_g4

0xb050,	// (0x0006436f) main_mup2_pane_g5_ParamLimits

0xb050,	// (0x0006436f) main_mup2_pane_g5

0xb050,	// (0x0006436f) main_mup2_pane_g6_ParamLimits

0xb050,	// (0x0006436f) main_mup2_pane_g6

0xb050,	// (0x0006436f) main_mup2_pane_g7_ParamLimits

0xb050,	// (0x0006436f) main_mup2_pane_g7

0x0006,

0xf56e,	// (0x0006888d) main_mup2_pane_g_ParamLimits

0xf56e,	// (0x0006888d) main_mup2_pane_g

0xb05e,	// (0x0006437d) main_mup2_pane_t1_ParamLimits

0xb05e,	// (0x0006437d) main_mup2_pane_t1

0xb05e,	// (0x0006437d) main_mup2_pane_t2_ParamLimits

0xb05e,	// (0x0006437d) main_mup2_pane_t2

0xb05e,	// (0x0006437d) main_mup2_pane_t3_ParamLimits

0xb05e,	// (0x0006437d) main_mup2_pane_t3

0xb05e,	// (0x0006437d) main_mup2_pane_t4_ParamLimits

0xb05e,	// (0x0006437d) main_mup2_pane_t4

0xb05e,	// (0x0006437d) main_mup2_pane_t5_ParamLimits

0xb05e,	// (0x0006437d) main_mup2_pane_t5

0xb05e,	// (0x0006437d) main_mup2_pane_t6_ParamLimits

0xb05e,	// (0x0006437d) main_mup2_pane_t6

0x0005,

0xf57d,	// (0x0006889c) main_mup2_pane_t_ParamLimits

0xf57d,	// (0x0006889c) main_mup2_pane_t

0xb086,	// (0x000643a5) mup2_visualizer_pane_ParamLimits

0xb086,	// (0x000643a5) mup2_visualizer_pane

0xb086,	// (0x000643a5) mup_progress_pane_cp_ParamLimits

0xb086,	// (0x000643a5) mup_progress_pane_cp

0xba29,	// (0x00064d48) mup_volume_pane_cp_ParamLimits

0xba29,	// (0x00064d48) mup_volume_pane_cp

0xa2ed,	// (0x0006360c) mup2_visualizer_pane_g1_ParamLimits

0xa2ed,	// (0x0006360c) mup2_visualizer_pane_g1

0xa2fb,	// (0x0006361a) mup2_visualizer_pane_g2_ParamLimits

0xa2fb,	// (0x0006361a) mup2_visualizer_pane_g2

0xa2fb,	// (0x0006361a) mup2_visualizer_pane_g3_ParamLimits

0xa2fb,	// (0x0006361a) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x00068403) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x00068403) mup2_visualizer_pane_g

0xb2ea,	// (0x00064609) aid_size_cell_fmradio

0x3f5c,	// (0x0005d27b) aid_height_parent_landcape

0xa735,	// (0x00063a54) wml_content_pane_cp

0xa73d,	// (0x00063a5c) wml_tabs_pane

0xa746,	// (0x00063a65) popup_wml_miniature_window

0xa74e,	// (0x00063a6d) scroll_pane_cp021

0xa762,	// (0x00063a81) wml_content_pane_comp8

0xa009,	// (0x00063328) bg_popup_sub_pane_cp05

0xe848,	// (0x00067b67) popup_wml_miniature_window_g1

0xe850,	// (0x00067b6f) wml_miniature_view_pane

0x44cb,	// (0x0005d7ea) aid_size_wml_view

0x44d3,	// (0x0005d7f2) wml_miniature_view_pane_g1

0x44dc,	// (0x0005d7fb) wml_miniature_view_pane_g2

0x44e5,	// (0x0005d804) wml_miniature_view_pane_g3

0x44ed,	// (0x0005d80c) wml_miniature_view_pane_g4

0x44f5,	// (0x0005d814) wml_miniature_view_pane_g5

0x44fd,	// (0x0005d81c) wml_miniature_view_pane_g6

0x4505,	// (0x0005d824) wml_miniature_view_pane_g7

0x450d,	// (0x0005d82c) wml_miniature_view_pane_g8

0x0007,

0xf58a,	// (0x000688a9) wml_miniature_view_pane_g

0xe858,	// (0x00067b77) background_graphic_ParamLimits

0xe858,	// (0x00067b77) background_graphic

0xe864,	// (0x00067b83) wml_tabs_2_pane

0xe86d,	// (0x00067b8c) wml_tabs_3_pane_ParamLimits

0xe86d,	// (0x00067b8c) wml_tabs_3_pane

0xe87f,	// (0x00067b9e) wml_tabs_4_pane_ParamLimits

0xe87f,	// (0x00067b9e) wml_tabs_4_pane

0xe895,	// (0x00067bb4) wml_tabs_5_pane_ParamLimits

0xe895,	// (0x00067bb4) wml_tabs_5_pane

0xe8af,	// (0x00067bce) wml_tabs_pane_g2_ParamLimits

0xe8af,	// (0x00067bce) wml_tabs_pane_g2

0xe8c4,	// (0x00067be3) wml_tabs_pane_g3_ParamLimits

0xe8c4,	// (0x00067be3) wml_tabs_pane_g3

0xe8d9,	// (0x00067bf8) wml_tabs_2_active_pane_ParamLimits

0xe8d9,	// (0x00067bf8) wml_tabs_2_active_pane

0xe8d9,	// (0x00067bf8) wml_tabs_2_passive_pane_ParamLimits

0xe8d9,	// (0x00067bf8) wml_tabs_2_passive_pane

0x4515,	// (0x0005d834) wml_tabs_3_active_pane_cp_ParamLimits

0x4515,	// (0x0005d834) wml_tabs_3_active_pane_cp

0x452a,	// (0x0005d849) wml_tabs_3_passive_pane_ParamLimits

0x452a,	// (0x0005d849) wml_tabs_3_passive_pane

0x453d,	// (0x0005d85c) wml_tabs_3_passive_pane_cp_ParamLimits

0x453d,	// (0x0005d85c) wml_tabs_3_passive_pane_cp

0x4554,	// (0x0005d873) tabs_4_active_pane

0x455c,	// (0x0005d87b) tabs_4_passive_pane

0x4566,	// (0x0005d885) tabs_4_passive_pane_cp

0x456e,	// (0x0005d88d) tabs_4_passive_pane_cp2

0x3c95,	// (0x0005cfb4) aid_height_text

0xb086,	// (0x000643a5) mup_volume_cont_pane_ParamLimits

0xb086,	// (0x000643a5) mup_volume_cont_pane

0x9b2c,	// (0x00062e4b) aid_size_cell_pinb

0x9b2c,	// (0x00062e4b) aid_size_list_pinb

0xb086,	// (0x000643a5) mup2_volume_cont_pane_ParamLimits

0xb086,	// (0x000643a5) mup2_volume_cont_pane

0xba13,	// (0x00064d32) mup2_volume_cont_pane_g1_ParamLimits

0xba13,	// (0x00064d32) mup2_volume_cont_pane_g1

0x0e66,	// (0x0005a185) aid_size_cell_touch_ParamLimits

0x0e66,	// (0x0005a185) aid_size_cell_touch

0x1092,	// (0x0005a3b1) touch_pane_ParamLimits

0x1092,	// (0x0005a3b1) touch_pane

0x9bb7,	// (0x00062ed6) main_rss2_pane

0xe8fa,	// (0x00067c19) listscroll_rss2_pane

0xe903,	// (0x00067c22) rss2_navigation_pane

0xe90b,	// (0x00067c2a) list_rss2_pane

0xae4d,	// (0x0006416c) scroll_pane_cp22

0xe913,	// (0x00067c32) rss2_navigation_pane_g1

0xe91c,	// (0x00067c3b) rss2_navigation_pane_g2

0xe924,	// (0x00067c43) rss2_navigation_pane_g3

0x0002,

0x04ce,	// (0x000597ed) rss2_navigation_pane_g

0xe92c,	// (0x00067c4b) rss2_navigation_pane_t1

0x4578,	// (0x0005d897) rss2_list_single_pane_ParamLimits

0x4578,	// (0x0005d897) rss2_list_single_pane

0xe93a,	// (0x00067c59) rss2_list_single_pane_t2

0xe948,	// (0x00067c67) rss2_list_single_pane_t3_ParamLimits

0xe948,	// (0x00067c67) rss2_list_single_pane_t3

0xe965,	// (0x00067c84) rss2_list_single_pane_t4

0x2d1a,	// (0x0005c039) smil_status_pane_g1

0x9ba9,	// (0x00062ec8) main_image2_pane_ParamLimits

0x9ba9,	// (0x00062ec8) main_image2_pane

0xd850,	// (0x00066b6f) main_camera2_pane_g9_ParamLimits

0xd850,	// (0x00066b6f) main_camera2_pane_g9

0x4487,	// (0x0005d7a6) main_camera2_pane_t5_ParamLimits

0x4487,	// (0x0005d7a6) main_camera2_pane_t5

0xb9dd,	// (0x00064cfc) main_camera2_pane_t6_ParamLimits

0xb9dd,	// (0x00064cfc) main_camera2_pane_t6

0x4592,	// (0x0005d8b1) main_image2_pane_g1_ParamLimits

0x4592,	// (0x0005d8b1) main_image2_pane_g1

0x3944,	// (0x0005cc63) smil2_video_pane_ParamLimits

0x3944,	// (0x0005cc63) smil2_video_pane

0x9b5a,	// (0x00062e79) aid_zoom_text_primary_cp

0x9b9f,	// (0x00062ebe) popup_preview_fixed_window

0xa69e,	// (0x000639bd) im_reading_pane_g1

0x4479,	// (0x0005d798) cams2_bc_adjust_pane_cp_ParamLimits

0x4479,	// (0x0005d798) cams2_bc_adjust_pane_cp

0xba05,	// (0x00064d24) cams2_bc_adjust_pane_ParamLimits

0xba05,	// (0x00064d24) cams2_bc_adjust_pane

0xe8f0,	// (0x00067c0f) cams2_bc_adjust_pane_g1

0x9bb7,	// (0x00062ed6) cams2_slider_pane

0xe8f0,	// (0x00067c0f) cams2_slider_pane_g1

0xe8f0,	// (0x00067c0f) cams2_slider_pane_g2

0x0006,

0x04d5,	// (0x000597f4) cams2_slider_pane_g

0x1128,	// (0x0005a447) calc_display_pane_ParamLimits

0x114d,	// (0x0005a46c) calc_paper_pane_ParamLimits

0x1170,	// (0x0005a48f) grid_calc_pane_ParamLimits

0xad28,	// (0x00064047) popup_clock_digital_window_t1_ParamLimits

0xb287,	// (0x000645a6) main_image_pane_t1

0x1108,	// (0x0005a427) aid_size_cell_calc_ParamLimits

0x1108,	// (0x0005a427) aid_size_cell_calc

0x3fbe,	// (0x0005d2dd) popup_blid_sat_info2_window_ParamLimits

0x3fbe,	// (0x0005d2dd) popup_blid_sat_info2_window

0xe973,	// (0x00067c92) aid_size_cell_blid

0xde37,	// (0x00067156) bg_popup_window_pane_cp07

0xe990,	// (0x00067caf) grid_popup_blid_pane

0xe99a,	// (0x00067cb9) heading_pane_cp05_ParamLimits

0xe99a,	// (0x00067cb9) heading_pane_cp05

0xea64,	// (0x00067d83) cell_popup_blid_pane_ParamLimits

0xea64,	// (0x00067d83) cell_popup_blid_pane

0xea8e,	// (0x00067dad) cell_popup_blid_pane_g1

0xea96,	// (0x00067db5) cell_popup_blid_pane_t1

0xb086,	// (0x000643a5) mup2_indicator_pane_ParamLimits

0xb086,	// (0x000643a5) mup2_indicator_pane

0x9b2c,	// (0x00062e4b) mup2_visualizer_osc_pane

0xe832,	// (0x00067b51) mup2_visualizer_spec_pane_ParamLimits

0xe832,	// (0x00067b51) mup2_visualizer_spec_pane

0x9b2c,	// (0x00062e4b) mup2_spec_half_pane

0x9b2c,	// (0x00062e4b) mup2_spec_half_pane_cp

0xeaa4,	// (0x00067dc3) mup2_spec_bar_pane_ParamLimits

0xeaa4,	// (0x00067dc3) mup2_spec_bar_pane

0xa5e9,	// (0x00063908) mup2_spec_bar_pane_g1

0xeac3,	// (0x00067de2) mup2_spec_bar_pane_g2

0x0001,

0xf59b,	// (0x000688ba) mup2_spec_bar_pane_g

0x9b2c,	// (0x00062e4b) mup2_osc_middle_pane

0xa5e9,	// (0x00063908) mup2_visualizer_osc_pane_g1

0x9be1,	// (0x00062f00) popup_number_entry_window_t1_ParamLimits

0x9bf4,	// (0x00062f13) popup_number_entry_window_t2_ParamLimits

0x9c06,	// (0x00062f25) popup_number_entry_window_t3_ParamLimits

0x9c18,	// (0x00062f37) popup_number_entry_window_t5_ParamLimits

0x9c18,	// (0x00062f37) popup_number_entry_window_t5

0xf085,	// (0x000683a4) popup_number_entry_window_t_ParamLimits

0x9c4d,	// (0x00062f6c) text_title_cp2_ParamLimits

0xb161,	// (0x00064480) aid_hotspot_pointer_text2_pane

0xb187,	// (0x000644a6) main_viewer_pane_g9_ParamLimits

0xb187,	// (0x000644a6) main_viewer_pane_g9

0xa8d7,	// (0x00063bf6) cale_month_pane_t1_ParamLimits

0xa942,	// (0x00063c61) bg_cale_pane_ParamLimits

0xa95a,	// (0x00063c79) list_cale_pane_ParamLimits

0xa96b,	// (0x00063c8a) listscroll_cale_day_pane_t1

0xa97d,	// (0x00063c9c) scroll_pane_cp09_ParamLimits

0x3243,	// (0x0005c562) main_mup_eq_pane_t1_ParamLimits

0x3243,	// (0x0005c562) main_mup_eq_pane_t1

0x325f,	// (0x0005c57e) main_mup_eq_pane_t2_ParamLimits

0x325f,	// (0x0005c57e) main_mup_eq_pane_t2

0x327b,	// (0x0005c59a) main_mup_eq_pane_t3_ParamLimits

0x327b,	// (0x0005c59a) main_mup_eq_pane_t3

0x3299,	// (0x0005c5b8) main_mup_eq_pane_t4_ParamLimits

0x3299,	// (0x0005c5b8) main_mup_eq_pane_t4

0x32b7,	// (0x0005c5d6) main_mup_eq_pane_t5_ParamLimits

0x32b7,	// (0x0005c5d6) main_mup_eq_pane_t5

0x32d5,	// (0x0005c5f4) main_mup_eq_pane_t6_ParamLimits

0x32d5,	// (0x0005c5f4) main_mup_eq_pane_t6

0x32eb,	// (0x0005c60a) main_mup_eq_pane_t7_ParamLimits

0x32eb,	// (0x0005c60a) main_mup_eq_pane_t7

0x3301,	// (0x0005c620) main_mup_eq_pane_t8_ParamLimits

0x3301,	// (0x0005c620) main_mup_eq_pane_t8

0x3317,	// (0x0005c636) main_mup_eq_pane_t9_ParamLimits

0x3317,	// (0x0005c636) main_mup_eq_pane_t9

0x3333,	// (0x0005c652) main_mup_eq_pane_t10_ParamLimits

0x3333,	// (0x0005c652) main_mup_eq_pane_t10

0x0009,

0xf3e4,	// (0x00068703) main_mup_eq_pane_t_ParamLimits

0xf3e4,	// (0x00068703) main_mup_eq_pane_t

0x3408,	// (0x0005c727) mup_equalizer_pane_cp5_ParamLimits

0x3420,	// (0x0005c73f) mup_equalizer_pane_cp6_ParamLimits

0x3438,	// (0x0005c757) mup_equalizer_pane_cp7_ParamLimits

0x9bb7,	// (0x00062ed6) main_gallery_pane

0xe7d0,	// (0x00067aef) smil2_volume_pane

0xe7d8,	// (0x00067af7) smil_status_volume_pane_g1_ParamLimits

0xe7eb,	// (0x00067b0a) smil_status_volume_pane_g2_ParamLimits

0xb9ad,	// (0x00064ccc) smil_status_volume_pane_g3_ParamLimits

0xf521,	// (0x00068840) smil_status_volume_pane_g_ParamLimits

0xde37,	// (0x00067156) bg_popup_window_pane_cp07_ParamLimits

0xe97b,	// (0x00067c9a) blid_firmament_pane

0xa286,	// (0x000635a5) aid_size_cell_gallery_ParamLimits

0xa286,	// (0x000635a5) aid_size_cell_gallery

0xa286,	// (0x000635a5) grid_gallery_pane_ParamLimits

0xa286,	// (0x000635a5) grid_gallery_pane

0xde37,	// (0x00067156) cell_gallery_pane_ParamLimits

0xde37,	// (0x00067156) cell_gallery_pane

0xa286,	// (0x000635a5) bg_cell_gallery_focus_pane_ParamLimits

0xa286,	// (0x000635a5) bg_cell_gallery_focus_pane

0xa2ed,	// (0x0006360c) cell_gallery_pane_g1_ParamLimits

0xa2ed,	// (0x0006360c) cell_gallery_pane_g1

0xa2ed,	// (0x0006360c) cell_gallery_pane_g2_ParamLimits

0xa2ed,	// (0x0006360c) cell_gallery_pane_g2

0xa2ed,	// (0x0006360c) cell_gallery_pane_g3_ParamLimits

0xa2ed,	// (0x0006360c) cell_gallery_pane_g3

0xa2fb,	// (0x0006361a) cell_gallery_pane_g4_ParamLimits

0xa2fb,	// (0x0006361a) cell_gallery_pane_g4

0x0003,

0xf5a0,	// (0x000688bf) cell_gallery_pane_g_ParamLimits

0xf5a0,	// (0x000688bf) cell_gallery_pane_g

0xeacd,	// (0x00067dec) bg_cell_gallery_focus_pane_g1

0xead5,	// (0x00067df4) bg_cell_gallery_focus_pane_g2

0xeadd,	// (0x00067dfc) bg_cell_gallery_focus_pane_g3

0xeae5,	// (0x00067e04) bg_cell_gallery_focus_pane_g4

0xeaed,	// (0x00067e0c) bg_cell_gallery_focus_pane_g5

0xeaf5,	// (0x00067e14) bg_cell_gallery_focus_pane_g6

0xeafd,	// (0x00067e1c) bg_cell_gallery_focus_pane_g7

0xeb05,	// (0x00067e24) bg_cell_gallery_focus_pane_g8

0x0007,

0x0509,	// (0x00059828) bg_cell_gallery_focus_pane_g

0xeb0d,	// (0x00067e2c) aid_firma_cardinal

0xeb21,	// (0x00067e40) blid_firmament_pane_t1

0xeb38,	// (0x00067e57) blid_firmament_pane_t2

0xeb4f,	// (0x00067e6e) blid_firmament_pane_t3

0xeb66,	// (0x00067e85) blid_firmament_pane_t4

0x0003,

0x051a,	// (0x00059839) blid_firmament_pane_t

0xeb7d,	// (0x00067e9c) blid_sat_info_pane

0xa5e9,	// (0x00063908) blid_sat_info_pane_g1

0xa5e9,	// (0x00063908) blid_sat_info_pane_g2

0x0001,

0xf3d8,	// (0x000686f7) blid_sat_info_pane_g

0xeb8d,	// (0x00067eac) blid_sat_info_pane_t1

0xeb9b,	// (0x00067eba) smil2_volume_content_pane

0xeba4,	// (0x00067ec3) smil2_volume_pane_g1

0xa41c,	// (0x0006373b) smil2_volume_content_pane_g1

0xebac,	// (0x00067ecb) smil2_volume_content_pane_g2

0xebb5,	// (0x00067ed4) smil2_volume_content_pane_g3

0xebbe,	// (0x00067edd) smil2_volume_content_pane_g4

0xebc7,	// (0x00067ee6) smil2_volume_content_pane_g5

0xebd0,	// (0x00067eef) smil2_volume_content_pane_g6

0xebd9,	// (0x00067ef8) smil2_volume_content_pane_g7

0xebe2,	// (0x00067f01) smil2_volume_content_pane_g8

0xebeb,	// (0x00067f0a) smil2_volume_content_pane_g9

0xebf4,	// (0x00067f13) smil2_volume_content_pane_g10

0x0009,

0xf5a9,	// (0x000688c8) smil2_volume_content_pane_g

0x178e,	// (0x0005aaad) cale_week_day_heading_pane_t1_ParamLimits

0x17b8,	// (0x0005aad7) cale_week_day_heading_pane_t2_ParamLimits

0x17e7,	// (0x0005ab06) cale_week_day_heading_pane_t3_ParamLimits

0x1816,	// (0x0005ab35) cale_week_day_heading_pane_t4_ParamLimits

0x1845,	// (0x0005ab64) cale_week_day_heading_pane_t5_ParamLimits

0x1878,	// (0x0005ab97) cale_week_day_heading_pane_t6_ParamLimits

0x18af,	// (0x0005abce) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x000684ab) cale_week_day_heading_pane_t_ParamLimits

0xa539,	// (0x00063858) bg_cale_side_pane_ParamLimits

0x18d9,	// (0x0005abf8) cale_week_time_pane_t1_ParamLimits

0x18f3,	// (0x0005ac12) cale_week_time_pane_t2_ParamLimits

0x190d,	// (0x0005ac2c) cale_week_time_pane_t3_ParamLimits

0x1927,	// (0x0005ac46) cale_week_time_pane_t4_ParamLimits

0x1941,	// (0x0005ac60) cale_week_time_pane_t5_ParamLimits

0x195b,	// (0x0005ac7a) cale_week_time_pane_t6_ParamLimits

0x197b,	// (0x0005ac9a) cale_week_time_pane_t7_ParamLimits

0x19a1,	// (0x0005acc0) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x000684ba) cale_week_time_pane_t_ParamLimits

0x19c7,	// (0x0005ace6) cell_cale_week_pane_g2_ParamLimits

0xa539,	// (0x00063858) bg_cale_side_pane_cp01_ParamLimits

0x2af7,	// (0x0005be16) cale_month_week_pane_t1_ParamLimits

0x2b10,	// (0x0005be2f) cale_month_week_pane_t2_ParamLimits

0x2b29,	// (0x0005be48) cale_month_week_pane_t3_ParamLimits

0x2b42,	// (0x0005be61) cale_month_week_pane_t4_ParamLimits

0x2b5b,	// (0x0005be7a) cale_month_week_pane_t5_ParamLimits

0x2b74,	// (0x0005be93) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x00068588) cale_month_week_pane_t_ParamLimits

0xa8e9,	// (0x00063c08) cell_cale_month_pane_g1_ParamLimits

0x9bb7,	// (0x00062ed6) main_cale_event_viewer_pane

0x9b2c,	// (0x00062e4b) listscroll_cale_event_viewer_pane

0xebfd,	// (0x00067f1c) list_cale_ev_pane

0xec05,	// (0x00067f24) scroll_pane_cp023

0x45a8,	// (0x0005d8c7) field_cale_ev_pane_ParamLimits

0x45a8,	// (0x0005d8c7) field_cale_ev_pane

0xec11,	// (0x00067f30) field_cale_ev_content_pane_ParamLimits

0xec11,	// (0x00067f30) field_cale_ev_content_pane

0xec1d,	// (0x00067f3c) field_cale_ev_pane_g1_ParamLimits

0xec1d,	// (0x00067f3c) field_cale_ev_pane_g1

0xec29,	// (0x00067f48) field_cale_ev_pane_g2_ParamLimits

0xec29,	// (0x00067f48) field_cale_ev_pane_g2

0xec41,	// (0x00067f60) field_cale_ev_pane_g3_ParamLimits

0xec41,	// (0x00067f60) field_cale_ev_pane_g3

0x0002,

0x0538,	// (0x00059857) field_cale_ev_pane_g_ParamLimits

0x0538,	// (0x00059857) field_cale_ev_pane_g

0xec59,	// (0x00067f78) field_cale_ev_pane_t1_ParamLimits

0xec59,	// (0x00067f78) field_cale_ev_pane_t1

0x45cc,	// (0x0005d8eb) field_cale_ev_content_pane_t1_ParamLimits

0x45cc,	// (0x0005d8eb) field_cale_ev_content_pane_t1

0xb12b,	// (0x0006444a) bg_button_pane_cp01

0x1446,	// (0x0005a765) listscroll_cale_week_pane_ParamLimits

0xa501,	// (0x00063820) popup_toolbar_window_cp01

0xa50a,	// (0x00063829) listscroll_cale_week_pane_t1_ParamLimits

0x1446,	// (0x0005a765) listscroll_cale_day_pane_ParamLimits

0xa501,	// (0x00063820) popup_toolbar_window_cp02

0xa96b,	// (0x00063c8a) listscroll_cale_day_pane_t1_ParamLimits

0x3f7a,	// (0x0005d299) main_cale_month_pane_ParamLimits

0xb998,	// (0x00064cb7) popup_toolbar_window_cp03_ParamLimits

0xb998,	// (0x00064cb7) popup_toolbar_window_cp03

0x3802,	// (0x0005cb21) main_image_pane_g2_ParamLimits

0x3802,	// (0x0005cb21) main_image_pane_g2

0x3813,	// (0x0005cb32) main_image_pane_g3_ParamLimits

0x3813,	// (0x0005cb32) main_image_pane_g3

0x0002,

0xf476,	// (0x00068795) main_image_pane_g_ParamLimits

0xf476,	// (0x00068795) main_image_pane_g

0xb287,	// (0x000645a6) main_image_pane_t1_ParamLimits

0x3824,	// (0x0005cb43) main_image_pane_t2_ParamLimits

0x3824,	// (0x0005cb43) main_image_pane_t2

0x3836,	// (0x0005cb55) main_image_pane_t3_ParamLimits

0x3836,	// (0x0005cb55) main_image_pane_t3

0x385e,	// (0x0005cb7d) main_image_pane_t4_ParamLimits

0x385e,	// (0x0005cb7d) main_image_pane_t4

0x0003,

0xf47d,	// (0x0006879c) main_image_pane_t_ParamLimits

0xf47d,	// (0x0006879c) main_image_pane_t

0x387e,	// (0x0005cb9d) popup_image_details_window_cp01

0x3888,	// (0x0005cba7) popup_toobar_trans_pane_cp01_ParamLimits

0x3888,	// (0x0005cba7) popup_toobar_trans_pane_cp01

0x40b1,	// (0x0005d3d0) popup_image_details_window_ParamLimits

0x40b1,	// (0x0005d3d0) popup_image_details_window

0xb969,	// (0x00064c88) popup_image_focus_window

0xb9cf,	// (0x00064cee) camera2_autofocus_pane_ParamLimits

0xb9cf,	// (0x00064cee) camera2_autofocus_pane

0x9b2c,	// (0x00062e4b) bg_popup_sub_pane_cp06

0xec70,	// (0x00067f8f) popup_image_focus_window_g1

0xec78,	// (0x00067f97) popup_image_focus_window_g2

0xec80,	// (0x00067f9f) popup_image_focus_window_g3

0xec88,	// (0x00067fa7) popup_image_focus_window_g4

0x0003,

0x053f,	// (0x0005985e) popup_image_focus_window_g

0xec90,	// (0x00067faf) popup_image_focus_window_t1

0xec9e,	// (0x00067fbd) popup_image_focus_window_t2

0xecae,	// (0x00067fcd) popup_image_focus_window_t3

0x0002,

0x0548,	// (0x00059867) popup_image_focus_window_t

0xa2ed,	// (0x0006360c) camera2_autofocus_pane_g1

0xa286,	// (0x000635a5) bg_tb_trans_pane_cp01

0xecbc,	// (0x00067fdb) popup_image_details_window_g1

0xeccf,	// (0x00067fee) popup_image_details_window_g2

0x0002,

0x055a,	// (0x00059879) popup_image_details_window_g

0xecf8,	// (0x00068017) popup_image_details_window_t1

0xed0a,	// (0x00068029) popup_image_details_window_t2

0xed23,	// (0x00068042) popup_image_details_window_t3

0xed37,	// (0x00068056) popup_image_details_window_t4

0xed52,	// (0x00068071) popup_image_details_window_t5

0x0004,

0x0561,	// (0x00059880) popup_image_details_window_t

0xa353,	// (0x00063672) bg_calc_paper_pane_ParamLimits

0x9bb7,	// (0x00062ed6) grid_highlight_pane_cp013

0xa367,	// (0x00063686) list_calc_pane_ParamLimits

0xa379,	// (0x00063698) scroll_pane_cp024

0xa381,	// (0x000636a0) bg_calc_display_pane_ParamLimits

0x1270,	// (0x0005a58f) calc_display_pane_t1_ParamLimits

0x1282,	// (0x0005a5a1) calc_display_pane_t2_ParamLimits

0xa38d,	// (0x000636ac) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x0006842b) calc_display_pane_t_ParamLimits

0x1343,	// (0x0005a662) cell_calc_pane_g2

0x0001,

0xf129,	// (0x00068448) cell_calc_pane_g

0x134c,	// (0x0005a66b) cell_calc_pane_t1

0xa3fa,	// (0x00063719) grid_highlight_pane_cp02_ParamLimits

0xa410,	// (0x0006372f) toolbar_button_pane_cp01_ParamLimits

0xa410,	// (0x0006372f) toolbar_button_pane_cp01

0xb2cc,	// (0x000645eb) temp_image_control_pane_ParamLimits

0xb2cc,	// (0x000645eb) temp_image_control_pane

0x9ba9,	// (0x00062ec8) main_mp3_pane

0xed6c,	// (0x0006808b) temp_image_control_pane_g1_ParamLimits

0xed6c,	// (0x0006808b) temp_image_control_pane_g1

0xed7a,	// (0x00068099) temp_image_control_pane_g2_ParamLimits

0xed7a,	// (0x00068099) temp_image_control_pane_g2

0xed8c,	// (0x000680ab) temp_image_control_pane_g3_ParamLimits

0xed8c,	// (0x000680ab) temp_image_control_pane_g3

0x45ed,	// (0x0005d90c) temp_image_control_pane_g4_ParamLimits

0x45ed,	// (0x0005d90c) temp_image_control_pane_g4

0x0003,

0xf5c9,	// (0x000688e8) temp_image_control_pane_g_ParamLimits

0xf5c9,	// (0x000688e8) temp_image_control_pane_g

0xed6c,	// (0x0006808b) main_mp3_pane_g1

0x4600,	// (0x0005d91f) main_mp3_pane_g2

0x0007,

0xf5d2,	// (0x000688f1) main_mp3_pane_g

0xedc1,	// (0x000680e0) main_mp3_pane_t1

0xa2fb,	// (0x0006361a) main_camera_pane_g8_ParamLimits

0xa2fb,	// (0x0006361a) main_camera_pane_g8

0x1b89,	// (0x0005aea8) main_video_pane_g7_ParamLimits

0x1b89,	// (0x0005aea8) main_video_pane_g7

0xb9f1,	// (0x00064d10) main_camera2_pane_t7_ParamLimits

0xb9f1,	// (0x00064d10) main_camera2_pane_t7

0xa6f5,	// (0x00063a14) scroll_pane_cp025_ParamLimits

0xa6f5,	// (0x00063a14) scroll_pane_cp025

0xa709,	// (0x00063a28) scroll_pane_cp026_ParamLimits

0xa709,	// (0x00063a28) scroll_pane_cp026

0xa718,	// (0x00063a37) wml_content_pane_ParamLimits

0x9bb7,	// (0x00062ed6) main_touch_calib_pane

0x46d2,	// (0x0005d9f1) main_touch_calib_pane_g1

0x46e4,	// (0x0005da03) main_touch_calib_pane_g2

0x46f6,	// (0x0005da15) main_touch_calib_pane_g3

0x4708,	// (0x0005da27) main_touch_calib_pane_g4

0x0003,

0xf5f0,	// (0x0006890f) main_touch_calib_pane_g

0x471a,	// (0x0005da39) main_touch_calib_pane_t1

0x4734,	// (0x0005da53) main_touch_calib_pane_t2

0x0004,

0xf5f9,	// (0x00068918) main_touch_calib_pane_t

0xaec8,	// (0x000641e7) mup_progress_pane_cp02

0xaee7,	// (0x00064206) navi_pane_g1

0xaf49,	// (0x00064268) navi_pane_mp_t3

0x9ba9,	// (0x00062ec8) main_mp3_pane_ParamLimits

0x426a,	// (0x0005d589) navi_pane_ParamLimits

0xed6c,	// (0x0006808b) main_mp3_pane_g1_ParamLimits

0x4600,	// (0x0005d91f) main_mp3_pane_g2_ParamLimits

0x460c,	// (0x0005d92b) main_mp3_pane_g3_ParamLimits

0x460c,	// (0x0005d92b) main_mp3_pane_g3

0x461a,	// (0x0005d939) main_mp3_pane_g4_ParamLimits

0x461a,	// (0x0005d939) main_mp3_pane_g4

0xa2ed,	// (0x0006360c) main_mp3_pane_g5_ParamLimits

0xa2ed,	// (0x0006360c) main_mp3_pane_g5

0xed9c,	// (0x000680bb) main_mp3_pane_g6_ParamLimits

0xed9c,	// (0x000680bb) main_mp3_pane_g6

0xeda9,	// (0x000680c8) main_mp3_pane_g7_ParamLimits

0xeda9,	// (0x000680c8) main_mp3_pane_g7

0xedb5,	// (0x000680d4) main_mp3_pane_g8_ParamLimits

0xedb5,	// (0x000680d4) main_mp3_pane_g8

0xf5d2,	// (0x000688f1) main_mp3_pane_g_ParamLimits

0x4626,	// (0x0005d945) main_mp3_pane_t2

0x4634,	// (0x0005d953) main_mp3_pane_t3

0xedcf,	// (0x000680ee) main_mp3_pane_t4

0xeddd,	// (0x000680fc) main_mp3_pane_t5

0x0005,

0xf5e3,	// (0x00068902) main_mp3_pane_t

0xedeb,	// (0x0006810a) mup_progress_pane_cp01

0x9b5a,	// (0x00062e79) aid_zoom_text_secondary2

0xebfd,	// (0x00067f1c) list_cale_ev2_pane

0xec05,	// (0x00067f24) scroll_pane_cp023_ParamLimits

0x478e,	// (0x0005daad) field_cale_ev2_pane_ParamLimits

0x478e,	// (0x0005daad) field_cale_ev2_pane

0x47b2,	// (0x0005dad1) field_cale_ev2_pane_g1_ParamLimits

0x47b2,	// (0x0005dad1) field_cale_ev2_pane_g1

0x47be,	// (0x0005dadd) field_cale_ev2_pane_g2_ParamLimits

0x47be,	// (0x0005dadd) field_cale_ev2_pane_g2

0x47d6,	// (0x0005daf5) field_cale_ev2_pane_g3_ParamLimits

0x47d6,	// (0x0005daf5) field_cale_ev2_pane_g3

0x0003,

0xf604,	// (0x00068923) field_cale_ev2_pane_g_ParamLimits

0xf604,	// (0x00068923) field_cale_ev2_pane_g

0x47fa,	// (0x0005db19) field_cale_ev2_pane_t1_ParamLimits

0x47fa,	// (0x0005db19) field_cale_ev2_pane_t1

0x4811,	// (0x0005db30) field_cale_ev2_pane_t2_ParamLimits

0x4811,	// (0x0005db30) field_cale_ev2_pane_t2

0x0001,

0xf60d,	// (0x0006892c) field_cale_ev2_pane_t_ParamLimits

0xf60d,	// (0x0006892c) field_cale_ev2_pane_t

0x369a,	// (0x0005c9b9) main_postcard_pane_g5_ParamLimits

0x369a,	// (0x0005c9b9) main_postcard_pane_g5

0x36b0,	// (0x0005c9cf) main_postcard_pane_g6_ParamLimits

0x36b0,	// (0x0005c9cf) main_postcard_pane_g6

0xa286,	// (0x000635a5) camera2_autofocus_pane_cp_ParamLimits

0xa286,	// (0x000635a5) camera2_autofocus_pane_cp

0x9ba9,	// (0x00062ec8) main_mup3_pane

0x4870,	// (0x0005db8f) main_mup3_pane_g1_ParamLimits

0x4870,	// (0x0005db8f) main_mup3_pane_g1

0x4892,	// (0x0005dbb1) main_mup3_pane_g2_ParamLimits

0x4892,	// (0x0005dbb1) main_mup3_pane_g2

0x490d,	// (0x0005dc2c) main_mup3_pane_g3_ParamLimits

0x490d,	// (0x0005dc2c) main_mup3_pane_g3

0x4977,	// (0x0005dc96) main_mup3_pane_g4_ParamLimits

0x4977,	// (0x0005dc96) main_mup3_pane_g4

0x49e1,	// (0x0005dd00) main_mup3_pane_g5_ParamLimits

0x49e1,	// (0x0005dd00) main_mup3_pane_g5

0x4a4b,	// (0x0005dd6a) main_mup3_pane_g6_ParamLimits

0x4a4b,	// (0x0005dd6a) main_mup3_pane_g6

0xa2fb,	// (0x0006361a) main_mup3_pane_g7_ParamLimits

0xa2fb,	// (0x0006361a) main_mup3_pane_g7

0x0007,

0xf61d,	// (0x0006893c) main_mup3_pane_g_ParamLimits

0xf61d,	// (0x0006893c) main_mup3_pane_g

0x4acf,	// (0x0005ddee) main_mup3_pane_t1_ParamLimits

0x4acf,	// (0x0005ddee) main_mup3_pane_t1

0x4b41,	// (0x0005de60) main_mup3_pane_t2_ParamLimits

0x4b41,	// (0x0005de60) main_mup3_pane_t2

0x4c17,	// (0x0005df36) main_mup3_pane_t4_ParamLimits

0x4c17,	// (0x0005df36) main_mup3_pane_t4

0x4c75,	// (0x0005df94) main_mup3_pane_t5_ParamLimits

0x4c75,	// (0x0005df94) main_mup3_pane_t5

0x4d39,	// (0x0005e058) main_mup3_pane_t6_ParamLimits

0x4d39,	// (0x0005e058) main_mup3_pane_t6

0x0005,

0xf62e,	// (0x0006894d) main_mup3_pane_t_ParamLimits

0xf62e,	// (0x0006894d) main_mup3_pane_t

0x4df1,	// (0x0005e110) mup3_progress_pane_ParamLimits

0x4df1,	// (0x0005e110) mup3_progress_pane

0x4e89,	// (0x0005e1a8) popup_mup3_control_window_ParamLimits

0x4e89,	// (0x0005e1a8) popup_mup3_control_window

0xedf3,	// (0x00068112) popup_mup3_text_window

0x4ebf,	// (0x0005e1de) mup3_progress_pane_t1

0x4ede,	// (0x0005e1fd) mup3_progress_pane_t2

0xedfb,	// (0x0006811a) mup3_progress_pane_t3

0x0002,

0xf63b,	// (0x0006895a) mup3_progress_pane_t

0xee18,	// (0x00068137) mup_progress_pane_cp03

0x9b2c,	// (0x00062e4b) bg_tb_trans_pane_cp04

0x4efd,	// (0x0005e21c) mup3_volume_pane

0x4f05,	// (0x0005e224) popup_mup3_control_window_g1

0x4f0e,	// (0x0005e22d) mup3_volume_pane_g1

0x4f17,	// (0x0005e236) mup3_volume_pane_g2

0x4f20,	// (0x0005e23f) mup3_volume_pane_g3

0x0002,

0xf642,	// (0x00068961) mup3_volume_pane_g

0x9b2c,	// (0x00062e4b) bg_tb_trans_pane_cp03

0xee28,	// (0x00068147) popup_mup3_text_window_g1

0xee30,	// (0x0006814f) popup_mup3_text_window_t1

0xa3db,	// (0x000636fa) list_calc_item_pane_g1_ParamLimits

0xe8e7,	// (0x00067c06) mup_volume_pane_cp_g1

0x474e,	// (0x0005da6d) main_touch_calib_pane_t3

0x4762,	// (0x0005da81) main_touch_calib_pane_t4

0x4778,	// (0x0005da97) main_touch_calib_pane_t5

0x9b36,	// (0x00062e55) aid_cell_size_toolbar2

0x9b3e,	// (0x00062e5d) aid_popup3_width_pane

0x9b4a,	// (0x00062e69) aid_zoom_text_msg_primary

0x1a77,	// (0x0005ad96) vorec_t7

0xa39f,	// (0x000636be) bg_calc_paper_pane_g1_ParamLimits

0xa3ab,	// (0x000636ca) bg_calc_paper_pane_g2_ParamLimits

0xa3b7,	// (0x000636d6) bg_calc_paper_pane_g3_ParamLimits

0xa3c3,	// (0x000636e2) bg_calc_paper_pane_g4_ParamLimits

0xa3cf,	// (0x000636ee) bg_calc_paper_pane_g5_ParamLimits

0x12cf,	// (0x0005a5ee) bg_calc_paper_pane_g6_ParamLimits

0x12dd,	// (0x0005a5fc) bg_calc_paper_pane_g7_ParamLimits

0x12eb,	// (0x0005a60a) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x00068432) bg_calc_paper_pane_g_ParamLimits

0x12fe,	// (0x0005a61d) calc_bg_paper_pane_g9_ParamLimits

0xa286,	// (0x000635a5) image_qvga_pane_ParamLimits

0xa286,	// (0x000635a5) image_qvga_pane

0xa264,	// (0x00063583) bg_popup_sub_pane_cp04_ParamLimits

0xb203,	// (0x00064522) popup_mup_playback_window_g1_ParamLimits

0xb20f,	// (0x0006452e) popup_mup_playback_window_t1_ParamLimits

0xb224,	// (0x00064543) popup_mup_playback_window_t2_ParamLimits

0xf471,	// (0x00068790) popup_mup_playback_window_t_ParamLimits

0xa2fb,	// (0x0006361a) main_mup2_pane_g3_ParamLimits

0xa2fb,	// (0x0006361a) main_mup2_pane_g3

0x1d80,	// (0x0005b09f) popup_toolbar_window_cp04

0xb61f,	// (0x0006493e) popup_call2_audio_second_window_g3_ParamLimits

0xb61f,	// (0x0006493e) popup_call2_audio_second_window_g3

0xde45,	// (0x00067164) popup_call2_audio_first_window_g4_ParamLimits

0xde45,	// (0x00067164) popup_call2_audio_first_window_g4

0xe46c,	// (0x0006778b) popup_call2_audio_in_window_g4_ParamLimits

0xe46c,	// (0x0006778b) popup_call2_audio_in_window_g4

0x37e4,	// (0x0005cb03) aid_area_sk_bg_cut_ParamLimits

0x37e4,	// (0x0005cb03) aid_area_sk_bg_cut

0xb239,	// (0x00064558) aid_area_sk_bg_cut_2_ParamLimits

0xb239,	// (0x00064558) aid_area_sk_bg_cut_2

0x9b2c,	// (0x00062e4b) aid_placing_details_win

0x9b2c,	// (0x00062e4b) aid_placing_details_win_2

0xa2ed,	// (0x0006360c) camera2_autofocus_pane_g1_ParamLimits

0x102d,	// (0x0005a34c) popup_fixed_preview_cale_window_ParamLimits

0x102d,	// (0x0005a34c) popup_fixed_preview_cale_window

0xaf99,	// (0x000642b8) navi_slider_pane_g3

0xafa2,	// (0x000642c1) navi_slider_pane_g4

0xafab,	// (0x000642ca) navi_slider_pane_g5

0xaf99,	// (0x000642b8) navi_slider_pane_g6

0xafb4,	// (0x000642d3) navi_slider_pane_g7

0xb0f8,	// (0x00064417) mup_scale_pane_g3

0xb101,	// (0x00064420) mup_scale_pane_g4

0xb10a,	// (0x00064429) mup_scale_pane_g5

0x3450,	// (0x0005c76f) mup_scale_pane_g6

0x3459,	// (0x0005c778) mup_scale_pane_g7

0xe8f0,	// (0x00067c0f) cams2_slider_pane_g3

0xe8f0,	// (0x00067c0f) cams2_slider_pane_g4

0xe8f0,	// (0x00067c0f) cams2_slider_pane_g5

0xe8f0,	// (0x00067c0f) cams2_slider_pane_g6

0xe8f0,	// (0x00067c0f) cams2_slider_pane_g7

0xa5e9,	// (0x00063908) camera2_autofocus_pane_cp_g1

0xe744,	// (0x00067a63) bg_popup_preview_window_pane_cp02_ParamLimits

0xe744,	// (0x00067a63) bg_popup_preview_window_pane_cp02

0xee3e,	// (0x0006815d) list_fp_cale_pane_ParamLimits

0xee3e,	// (0x0006815d) list_fp_cale_pane

0xee4a,	// (0x00068169) popup_fixed_preview_cale_window_t1_ParamLimits

0xee4a,	// (0x00068169) popup_fixed_preview_cale_window_t1

0x4f29,	// (0x0005e248) popup_fixed_preview_cale_window_t2_ParamLimits

0x4f29,	// (0x0005e248) popup_fixed_preview_cale_window_t2

0x4f3e,	// (0x0005e25d) popup_fixed_preview_cale_window_t3_ParamLimits

0x4f3e,	// (0x0005e25d) popup_fixed_preview_cale_window_t3

0x0002,

0xf649,	// (0x00068968) popup_fixed_preview_cale_window_t_ParamLimits

0xf649,	// (0x00068968) popup_fixed_preview_cale_window_t

0x4f55,	// (0x0005e274) list_single_fp_cale_pane_ParamLimits

0x4f55,	// (0x0005e274) list_single_fp_cale_pane

0xee68,	// (0x00068187) list_single_fp_cale_pane_g1_ParamLimits

0xee68,	// (0x00068187) list_single_fp_cale_pane_g1

0xee74,	// (0x00068193) list_single_fp_cale_pane_g2_ParamLimits

0xee74,	// (0x00068193) list_single_fp_cale_pane_g2

0x0002,

0x05f3,	// (0x00059912) list_single_fp_cale_pane_g_ParamLimits

0x05f3,	// (0x00059912) list_single_fp_cale_pane_g

0xee8d,	// (0x000681ac) list_single_fp_cale_pane_t1_ParamLimits

0xee8d,	// (0x000681ac) list_single_fp_cale_pane_t1

0xee9f,	// (0x000681be) list_single_fp_cale_pane_t2_ParamLimits

0xee9f,	// (0x000681be) list_single_fp_cale_pane_t2

0x0001,

0x05fa,	// (0x00059919) list_single_fp_cale_pane_t_ParamLimits

0x05fa,	// (0x00059919) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9bb7,	// (0x00062ed6) main_dialer_pane

0x9b2c,	// (0x00062e4b) aid_cell_size_keypad

0x9b2c,	// (0x00062e4b) dialer_ne_pane

0x9b2c,	// (0x00062e4b) grid_dialer_command_1_pane

0x9b2c,	// (0x00062e4b) grid_dialer_command_2_pane

0x9b2c,	// (0x00062e4b) grid_dialer_keypad_pane

0x4f6d,	// (0x0005e28c) bg_popup_call_pane_cp06_ParamLimits

0x4f6d,	// (0x0005e28c) bg_popup_call_pane_cp06

0x4f6d,	// (0x0005e28c) dialer_ne_clear_pane_ParamLimits

0x4f6d,	// (0x0005e28c) dialer_ne_clear_pane

0xa5e9,	// (0x00063908) dialer_ne_pane_g1

0xb072,	// (0x00064391) dialer_ne_pane_t1_ParamLimits

0xb072,	// (0x00064391) dialer_ne_pane_t1

0x4f7b,	// (0x0005e29a) dialer_ne_pane_t2_ParamLimits

0x4f7b,	// (0x0005e29a) dialer_ne_pane_t2

0x4fa3,	// (0x0005e2c2) dialer_ne_pane_t3_ParamLimits

0x4fa3,	// (0x0005e2c2) dialer_ne_pane_t3

0x0002,

0xf650,	// (0x0006896f) dialer_ne_pane_t_ParamLimits

0xf650,	// (0x0006896f) dialer_ne_pane_t

0x4fa3,	// (0x0005e2c2) dialer_ne_pane_t3_copy1_ParamLimits

0x4fa3,	// (0x0005e2c2) dialer_ne_pane_t3_copy1

0xeed2,	// (0x000681f1) cell_dialer_keypad_pane_ParamLimits

0xeed2,	// (0x000681f1) cell_dialer_keypad_pane

0xa286,	// (0x000635a5) cell_dialer_command_1_pane_ParamLimits

0xa286,	// (0x000635a5) cell_dialer_command_1_pane

0xeee9,	// (0x00068208) cell_dialer_command_2_pane_ParamLimits

0xeee9,	// (0x00068208) cell_dialer_command_2_pane

0xa286,	// (0x000635a5) bg_button_pane_cp02_ParamLimits

0xa286,	// (0x000635a5) bg_button_pane_cp02

0xa2ed,	// (0x0006360c) cell_dialer_keypad_pane_g1_ParamLimits

0xa2ed,	// (0x0006360c) cell_dialer_keypad_pane_g1

0xa286,	// (0x000635a5) bg_button_pane_cp03_ParamLimits

0xa286,	// (0x000635a5) bg_button_pane_cp03

0xa2ed,	// (0x0006360c) cell_dialer_command_1_pane_g1_ParamLimits

0xa2ed,	// (0x0006360c) cell_dialer_command_1_pane_g1

0x9b2c,	// (0x00062e4b) bg_button_pane_cp04

0xa5e9,	// (0x00063908) cell_dialer_command_2_pane_g1

0x9b2c,	// (0x00062e4b) bg_button_pane_cp06

0xa5e9,	// (0x00063908) dialer_ne_clear_pane_g1

0x315f,	// (0x0005c47e) navi_pane_g2

0x318d,	// (0x0005c4ac) navi_pane_g3

0x0002,

0xf374,	// (0x00068693) navi_pane_g

0x31b8,	// (0x0005c4d7) navi_pane_mv_g2

0x31df,	// (0x0005c4fe) navi_pane_mv_g5

0x31e7,	// (0x0005c506) navi_pane_mv_t1

0xa381,	// (0x000636a0) main_clock2_pane

0xa286,	// (0x000635a5) main_clock2_list_pane_ParamLimits

0xa286,	// (0x000635a5) main_clock2_list_pane

0x5034,	// (0x0005e353) main_clock2_pane_t1_ParamLimits

0x5034,	// (0x0005e353) main_clock2_pane_t1

0x506f,	// (0x0005e38e) main_clock2_pane_t2_ParamLimits

0x506f,	// (0x0005e38e) main_clock2_pane_t2

0x0004,

0xf657,	// (0x00068976) main_clock2_pane_t_ParamLimits

0xf657,	// (0x00068976) main_clock2_pane_t

0x510e,	// (0x0005e42d) popup_clock_analogue_window_cp03_ParamLimits

0x510e,	// (0x0005e42d) popup_clock_analogue_window_cp03

0x5133,	// (0x0005e452) popup_clock_digital_window_cp02_ParamLimits

0x5133,	// (0x0005e452) popup_clock_digital_window_cp02

0x51ac,	// (0x0005e4cb) main_clock2_list_single_pane_ParamLimits

0x51ac,	// (0x0005e4cb) main_clock2_list_single_pane

0xa594,	// (0x000638b3) list_highlight_pane_cp05

0xef2a,	// (0x00068249) main_clock2_list_single_pane_t1

0x1d80,	// (0x0005b09f) popup_toolbar_window_cp04_ParamLimits

0xa2fb,	// (0x0006361a) camera2_autofocus_pane_g2_ParamLimits

0xa2fb,	// (0x0006361a) camera2_autofocus_pane_g2

0xa2fb,	// (0x0006361a) camera2_autofocus_pane_g3_ParamLimits

0xa2fb,	// (0x0006361a) camera2_autofocus_pane_g3

0xa2fb,	// (0x0006361a) camera2_autofocus_pane_g4_ParamLimits

0xa2fb,	// (0x0006361a) camera2_autofocus_pane_g4

0xa2fb,	// (0x0006361a) camera2_autofocus_pane_g5_ParamLimits

0xa2fb,	// (0x0006361a) camera2_autofocus_pane_g5

0x0004,

0xf5be,	// (0x000688dd) camera2_autofocus_pane_g_ParamLimits

0xf5be,	// (0x000688dd) camera2_autofocus_pane_g

0x4826,	// (0x0005db45) camera2_autofocus_pane_cp_g2

0x482e,	// (0x0005db4d) camera2_autofocus_pane_cp_g3

0x4836,	// (0x0005db55) camera2_autofocus_pane_cp_g4

0x483e,	// (0x0005db5d) camera2_autofocus_pane_cp_g5

0x0004,

0xf612,	// (0x00068931) camera2_autofocus_pane_cp_g

0x9b2c,	// (0x00062e4b) popup_dialer_spcha_window

0x9b2c,	// (0x00062e4b) bg_popup_sub_pane_cp07

0x9b2c,	// (0x00062e4b) list_spcha_pane

0xef38,	// (0x00068257) list_single_spcha_pane_ParamLimits

0xef38,	// (0x00068257) list_single_spcha_pane

0x9b2c,	// (0x00062e4b) list_highlight_pane_cp06

0xab4f,	// (0x00063e6e) list_single_spcha_pane_t1

0xe216,	// (0x00067535) popup_call2_audio_out_window_g4_ParamLimits

0xe216,	// (0x00067535) popup_call2_audio_out_window_g4

0x9bb7,	// (0x00062ed6) main_imed2_pane

0xb973,	// (0x00064c92) popup_imed_adjust2_window

0x40c9,	// (0x0005d3e8) popup_imed_trans_window_ParamLimits

0x40c9,	// (0x0005d3e8) popup_imed_trans_window

0xe9c6,	// (0x00067ce5) popup_blid_sat_info2_window_t1

0xe9d4,	// (0x00067cf3) popup_blid_sat_info2_window_t2

0x000a,

0x04e4,	// (0x00059803) popup_blid_sat_info2_window_t

0x5267,	// (0x0005e586) aid_size_cell_colour_35

0x5287,	// (0x0005e5a6) aid_size_cell_colour_112

0x52a7,	// (0x0005e5c6) aid_size_cell_effect

0xb086,	// (0x000643a5) bg_tb_trans_pane_cp02

0xaa74,	// (0x00063d93) heading_imed_pane

0x52c7,	// (0x0005e5e6) listscroll_imed_pane

0xef4a,	// (0x00068269) heading_imed_pane_g1

0xef52,	// (0x00068271) heading_imed_pane_t1

0xef60,	// (0x0006827f) grid_imed_colour_35_pane_ParamLimits

0xef60,	// (0x0006827f) grid_imed_colour_35_pane

0x52d3,	// (0x0005e5f2) grid_imed_effect_pane

0xef7c,	// (0x0006829b) list_imed_aspect_pane

0x52ea,	// (0x0005e609) scroll_pane_cp027_ParamLimits

0x52ea,	// (0x0005e609) scroll_pane_cp027

0x52fb,	// (0x0005e61a) cell_imed_effect_pane_ParamLimits

0x52fb,	// (0x0005e61a) cell_imed_effect_pane

0xef84,	// (0x000682a3) cell_imed_colour_pane_ParamLimits

0xef84,	// (0x000682a3) cell_imed_colour_pane

0xefda,	// (0x000682f9) cell_imed_colour_pane_g1_ParamLimits

0xefda,	// (0x000682f9) cell_imed_colour_pane_g1

0xefeb,	// (0x0006830a) hgihlgiht_grid_pane_cp016_ParamLimits

0xefeb,	// (0x0006830a) hgihlgiht_grid_pane_cp016

0x5326,	// (0x0005e645) cell_imed_effect_pane_g1

0x532e,	// (0x0005e64d) grid_highlight_pane_cp017

0xeffc,	// (0x0006831b) list_imed_single_pane_ParamLimits

0xeffc,	// (0x0006831b) list_imed_single_pane

0x9b2c,	// (0x00062e4b) list_highlight_pane_cp07

0xf010,	// (0x0006832f) list_imed_aspect_pane_comp1_t1

0xb086,	// (0x000643a5) bg_tb_trans_pane_cp05

0xf032,	// (0x00068351) popup_imed_adjust2_window_g1

0xf059,	// (0x00068378) popup_imed_adjust2_window_t1

0xf071,	// (0x00068390) slider_imed_adjust_pane

0x5337,	// (0x0005e656) slider_imed_adjust_pane_g1

0x5347,	// (0x0005e666) slider_imed_adjust_pane_g2

0x5357,	// (0x0005e676) slider_imed_adjust_pane_g3

0x5368,	// (0x0005e687) slider_imed_adjust_pane_g4

0x0003,

0xf674,	// (0x00068993) slider_imed_adjust_pane_g

0x5379,	// (0x0005e698) aid_size_cell_clipart2

0x5385,	// (0x0005e6a4) grid_imed_clipart_pane

0x538f,	// (0x0005e6ae) scroll_pane_cp031

0x5397,	// (0x0005e6b6) cell_imed_clipart_pane_ParamLimits

0x5397,	// (0x0005e6b6) cell_imed_clipart_pane

0x53b4,	// (0x0005e6d3) cell_imed_clipart_pane_g1

0x9b2c,	// (0x00062e4b) grid_highlight_pane_cp014

0x5012,	// (0x0005e331) main_clock2_pane_g1_ParamLimits

0x5012,	// (0x0005e331) main_clock2_pane_g1

0x5153,	// (0x0005e472) aid_call2_pane_cp10

0x5165,	// (0x0005e484) aid_call_pane_cp10

0xaebc,	// (0x000641db) popup_clock_analogue_window_cp10_g1

0xaebc,	// (0x000641db) popup_clock_analogue_window_cp10_g2

0x5177,	// (0x0005e496) popup_clock_analogue_window_cp10_g3

0x5177,	// (0x0005e496) popup_clock_analogue_window_cp10_g4

0xaebc,	// (0x000641db) popup_clock_analogue_window_cp10_g5

0x0004,

0xf662,	// (0x00068981) popup_clock_analogue_window_cp10_g

0x518d,	// (0x0005e4ac) popup_clock_analogue_window_cp10_t1

0x51be,	// (0x0005e4dd) clock_digital_number_pane_cp10_ParamLimits

0x51be,	// (0x0005e4dd) clock_digital_number_pane_cp10

0x51d8,	// (0x0005e4f7) clock_digital_number_pane_cp11_ParamLimits

0x51d8,	// (0x0005e4f7) clock_digital_number_pane_cp11

0x51f2,	// (0x0005e511) clock_digital_number_pane_cp12_ParamLimits

0x51f2,	// (0x0005e511) clock_digital_number_pane_cp12

0x520e,	// (0x0005e52d) clock_digital_number_pane_cp13_ParamLimits

0x520e,	// (0x0005e52d) clock_digital_number_pane_cp13

0x522a,	// (0x0005e549) clock_digital_separator_pane_cp10_ParamLimits

0x522a,	// (0x0005e549) clock_digital_separator_pane_cp10

0x5246,	// (0x0005e565) popup_clock_digital_window_cp02_t1_ParamLimits

0x5246,	// (0x0005e565) popup_clock_digital_window_cp02_t1

0xa25c,	// (0x0006357b) clock_digital_number_pane_cp10_g1

0xa25c,	// (0x0006357b) clock_digital_number_pane_cp10_g2

0x0001,

0xf67d,	// (0x0006899c) clock_digital_number_pane_cp10_g

0xa25c,	// (0x0006357b) clock_digital_separator_pane_cp10_g1

0xa25c,	// (0x0006357b) clock_digital_separator_pane_g2_cp10

0xaf57,	// (0x00064276) navi_pane_vded_g4

0xaf60,	// (0x0006427f) navi_pane_vded_g5

0xaf69,	// (0x00064288) navi_pane_vded_t1

0x9bb7,	// (0x00062ed6) main_vded_pane

0x53bd,	// (0x0005e6dc) main_vded_pane_g1

0x53c9,	// (0x0005e6e8) main_vded_pane_g2

0x53d5,	// (0x0005e6f4) main_vded_pane_g3

0x0002,

0xf682,	// (0x000689a1) main_vded_pane_g

0x53e1,	// (0x0005e700) main_vded_pane_t1

0x53ef,	// (0x0005e70e) main_vded_pane_t2

0x0001,

0xf689,	// (0x000689a8) main_vded_pane_t

0x53fd,	// (0x0005e71c) vded_slider_pane

0x5407,	// (0x0005e726) vded_video_pane

0x5413,	// (0x0005e732) vded_video_pane_g1

0x541d,	// (0x0005e73c) vded_video_pane_g2

0xa5e9,	// (0x00063908) vded_video_pane_g3

0x0002,

0xf68e,	// (0x000689ad) vded_video_pane_g

0x5426,	// (0x0005e745) vded_slider_pane_g1

0xe8e7,	// (0x00067c06) vded_slider_pane_g2

0x542f,	// (0x0005e74e) vded_slider_pane_g3

0x5438,	// (0x0005e757) vded_slider_pane_g4

0x5441,	// (0x0005e760) vded_slider_pane_g5

0x0004,

0xf695,	// (0x000689b4) vded_slider_pane_g

0x4e73,	// (0x0005e192) mup3_rocker_pane_ParamLimits

0x4e73,	// (0x0005e192) mup3_rocker_pane

0x544a,	// (0x0005e769) mup3_control_keys_pane_g1

0x5452,	// (0x0005e771) mup3_control_keys_pane_g2

0x545a,	// (0x0005e779) mup3_control_keys_pane_g3

0x5462,	// (0x0005e781) mup3_control_keys_pane_g4

0x0003,

0xf6a0,	// (0x000689bf) mup3_control_keys_pane_g

0x1062,	// (0x0005a381) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1062,	// (0x0005a381) popup_toolbar2_fixed_window_cp01

0x4ea9,	// (0x0005e1c8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x4ea9,	// (0x0005e1c8) popup_toolbar2_fixed_window_cp02

0xb791,	// (0x00064ab0) popup_call2_audio_second_window_t4_ParamLimits

0xb791,	// (0x00064ab0) popup_call2_audio_second_window_t4

0xe0db,	// (0x000673fa) popup_call2_audio_first_window_t6_ParamLimits

0xe0db,	// (0x000673fa) popup_call2_audio_first_window_t6

0xe319,	// (0x00067638) popup_call2_audio_out_window_t6_ParamLimits

0xe319,	// (0x00067638) popup_call2_audio_out_window_t6

0x9bb7,	// (0x00062ed6) main_vitu_pane

0xa286,	// (0x000635a5) aid_size_cell_itu_ParamLimits

0xa286,	// (0x000635a5) aid_size_cell_itu

0xa286,	// (0x000635a5) bg_popup_window_pane_cp08_ParamLimits

0xa286,	// (0x000635a5) bg_popup_window_pane_cp08

0xa286,	// (0x000635a5) field_vitu_entry_pane_ParamLimits

0xa286,	// (0x000635a5) field_vitu_entry_pane

0xa286,	// (0x000635a5) grid_vitu_function_pane_ParamLimits

0xa286,	// (0x000635a5) grid_vitu_function_pane

0xa286,	// (0x000635a5) grid_vitu_itu_pane_ParamLimits

0xa286,	// (0x000635a5) grid_vitu_itu_pane

0xa286,	// (0x000635a5) cell_vitu_itu_pane_ParamLimits

0xa286,	// (0x000635a5) cell_vitu_itu_pane

0xa286,	// (0x000635a5) cell_vitu_function_pane_ParamLimits

0xa286,	// (0x000635a5) cell_vitu_function_pane

0xa286,	// (0x000635a5) bg_popup_sub_pane_cp08_ParamLimits

0xa286,	// (0x000635a5) bg_popup_sub_pane_cp08

0xa5bb,	// (0x000638da) field_vitu_entry_pane_t1_ParamLimits

0xa5bb,	// (0x000638da) field_vitu_entry_pane_t1

0x5472,	// (0x0005e791) field_vitu_entry_pane_t2_ParamLimits

0x5472,	// (0x0005e791) field_vitu_entry_pane_t2

0x0001,

0xf6a9,	// (0x000689c8) field_vitu_entry_pane_t_ParamLimits

0xf6a9,	// (0x000689c8) field_vitu_entry_pane_t

0xde37,	// (0x00067156) bg_button_pane_cp05_ParamLimits

0xde37,	// (0x00067156) bg_button_pane_cp05

0x548f,	// (0x0005e7ae) cell_vitu_itu_pane_g1

0xb05e,	// (0x0006437d) cell_vitu_itu_pane_t1_ParamLimits

0xb05e,	// (0x0006437d) cell_vitu_itu_pane_t1

0xb05e,	// (0x0006437d) cell_vitu_itu_pane_t2_ParamLimits

0xb05e,	// (0x0006437d) cell_vitu_itu_pane_t2

0x0002,

0xf6ae,	// (0x000689cd) cell_vitu_itu_pane_t_ParamLimits

0xf6ae,	// (0x000689cd) cell_vitu_itu_pane_t

0x9b2c,	// (0x00062e4b) bg_button_pane_cp07

0xa5e9,	// (0x00063908) cell_vitu_function_pane_g1

0xa32b,	// (0x0006364a) main_calc_pane_g1

0x0e8a,	// (0x0005a1a9) aid_visual_content_pane

0x9bb7,	// (0x00062ed6) main_vradio_pane

0xa2ed,	// (0x0006360c) main_vradio_pane_g1_ParamLimits

0xa2ed,	// (0x0006360c) main_vradio_pane_g1

0xa2fb,	// (0x0006361a) main_vradio_pane_g2_ParamLimits

0xa2fb,	// (0x0006361a) main_vradio_pane_g2

0x0001,

0xf6b5,	// (0x000689d4) main_vradio_pane_g_ParamLimits

0xf6b5,	// (0x000689d4) main_vradio_pane_g

0xa5bb,	// (0x000638da) main_vradio_pane_t1_ParamLimits

0xa5bb,	// (0x000638da) main_vradio_pane_t1

0xa5bb,	// (0x000638da) main_vradio_pane_t2_ParamLimits

0xa5bb,	// (0x000638da) main_vradio_pane_t2

0xb072,	// (0x00064391) main_vradio_pane_t3_ParamLimits

0xb072,	// (0x00064391) main_vradio_pane_t3

0x0002,

0xf6ba,	// (0x000689d9) main_vradio_pane_t_ParamLimits

0xf6ba,	// (0x000689d9) main_vradio_pane_t

0xa286,	// (0x000635a5) vradio_rocker_control_pane_ParamLimits

0xa286,	// (0x000635a5) vradio_rocker_control_pane

0xa286,	// (0x000635a5) vradio_station_info_pane_ParamLimits

0xa286,	// (0x000635a5) vradio_station_info_pane

0xa286,	// (0x000635a5) vradio_frequency_info_pane_ParamLimits

0xa286,	// (0x000635a5) vradio_frequency_info_pane

0xa5e9,	// (0x00063908) vradio_station_info_pane_g1

0xb05e,	// (0x0006437d) vradio_station_info_pane_t1_ParamLimits

0xb05e,	// (0x0006437d) vradio_station_info_pane_t1

0xb072,	// (0x00064391) vradio_station_info_pane_t2_ParamLimits

0xb072,	// (0x00064391) vradio_station_info_pane_t2

0x0001,

0xf6c1,	// (0x000689e0) vradio_station_info_pane_t_ParamLimits

0xf6c1,	// (0x000689e0) vradio_station_info_pane_t

0x9b2c,	// (0x00062e4b) vradio_tuning_pane

0x54ab,	// (0x0005e7ca) vradio_rocker_control_pane_g1

0x54b5,	// (0x0005e7d4) vradio_rocker_control_pane_g2

0x54bd,	// (0x0005e7dc) vradio_rocker_control_pane_g3

0x54c7,	// (0x0005e7e6) vradio_rocker_control_pane_g4

0x54d1,	// (0x0005e7f0) vradio_rocker_control_pane_g5

0x0004,

0xf6c6,	// (0x000689e5) vradio_rocker_control_pane_g

0xa5e9,	// (0x00063908) vradio_frequency_info_pane_g1

0xa5bb,	// (0x000638da) vradio_frequency_info_pane_t1_ParamLimits

0xa5bb,	// (0x000638da) vradio_frequency_info_pane_t1

0x54db,	// (0x0005e7fa) vradio_tuning_pane_g1

0x54e6,	// (0x0005e805) vradio_tuning_pane_t1

0x9b62,	// (0x00062e81) area_side_right_pane_ParamLimits

0x9b62,	// (0x00062e81) area_side_right_pane

0xe70b,	// (0x00067a2a) status_small_pane_g1

0xe713,	// (0x00067a32) status_small_pane_g2

0xe71c,	// (0x00067a3b) status_small_pane_g3

0xe725,	// (0x00067a44) status_small_pane_g4

0x0003,

0x0446,	// (0x00059765) status_small_pane_g

0xe72e,	// (0x00067a4d) status_small_pane_t1

0x9bb7,	// (0x00062ed6) main_video3_pane

0x54f5,	// (0x0005e814) cams_zoom_vslider_pane

0x54fd,	// (0x0005e81c) image3_wide_pane_ParamLimits

0x54fd,	// (0x0005e81c) image3_wide_pane

0x5517,	// (0x0005e836) image3_wide_small_pane

0x5523,	// (0x0005e842) main_video3_pane_g1_ParamLimits

0x5523,	// (0x0005e842) main_video3_pane_g1

0x553f,	// (0x0005e85e) main_video3_pane_g2_ParamLimits

0x553f,	// (0x0005e85e) main_video3_pane_g2

0x0001,

0xf6d1,	// (0x000689f0) main_video3_pane_g_ParamLimits

0xf6d1,	// (0x000689f0) main_video3_pane_g

0x555b,	// (0x0005e87a) main_video3_pane_t1_ParamLimits

0x555b,	// (0x0005e87a) main_video3_pane_t1

0x5586,	// (0x0005e8a5) main_video3_pane_t2_ParamLimits

0x5586,	// (0x0005e8a5) main_video3_pane_t2

0x55b3,	// (0x0005e8d2) main_video3_pane_t3_ParamLimits

0x55b3,	// (0x0005e8d2) main_video3_pane_t3

0x0002,

0xf6d6,	// (0x000689f5) main_video3_pane_t_ParamLimits

0xf6d6,	// (0x000689f5) main_video3_pane_t

0x55e0,	// (0x0005e8ff) cams_zoom_vslider_pane_g1

0x55e9,	// (0x0005e908) cams_zoom_vslider_pane_g2

0x0001,

0xf6dd,	// (0x000689fc) cams_zoom_vslider_pane_g

0x55f1,	// (0x0005e910) small_slider_vertical_pane

0xa5e9,	// (0x00063908) small_slider_vertical_pane_g1

0xa5e9,	// (0x00063908) small_slider_vertical_pane_g2

0x55f9,	// (0x0005e918) small_slider_vertical_pane_g3

0x0002,

0xf6e2,	// (0x00068a01) small_slider_vertical_pane_g

0x9bb7,	// (0x00062ed6) main_hwr_training_pane

0x5602,	// (0x0005e921) hwr_training_instruct_pane_ParamLimits

0x5602,	// (0x0005e921) hwr_training_instruct_pane

0x5624,	// (0x0005e943) hwr_training_navi_pane_ParamLimits

0x5624,	// (0x0005e943) hwr_training_navi_pane

0x5643,	// (0x0005e962) hwr_training_write_pane_ParamLimits

0x5643,	// (0x0005e962) hwr_training_write_pane

0x9b2c,	// (0x00062e4b) bg_frame_shadow_pane

0x5693,	// (0x0005e9b2) hwr_training_write_pane_g1

0x569b,	// (0x0005e9ba) hwr_training_write_pane_g2

0x56a3,	// (0x0005e9c2) hwr_training_write_pane_g3

0x56ab,	// (0x0005e9ca) hwr_training_write_pane_g4

0x56b3,	// (0x0005e9d2) hwr_training_write_pane_g5

0x56bb,	// (0x0005e9da) hwr_training_write_pane_g6

0x56c3,	// (0x0005e9e2) hwr_training_write_pane_g7

0x0006,

0xf6e9,	// (0x00068a08) hwr_training_write_pane_g

0xba3f,	// (0x00064d5e) hwr_training_navi_pane_g1_ParamLimits

0xba3f,	// (0x00064d5e) hwr_training_navi_pane_g1

0xd86c,	// (0x00066b8b) hwr_training_navi_pane_g2_ParamLimits

0xd86c,	// (0x00066b8b) hwr_training_navi_pane_g2

0xd87e,	// (0x00066b9d) hwr_training_navi_pane_g3_ParamLimits

0xd87e,	// (0x00066b9d) hwr_training_navi_pane_g3

0xd88e,	// (0x00066bad) hwr_training_navi_pane_g4_ParamLimits

0xd88e,	// (0x00066bad) hwr_training_navi_pane_g4

0x0004,

0xf6f8,	// (0x00068a17) hwr_training_navi_pane_g_ParamLimits

0xf6f8,	// (0x00068a17) hwr_training_navi_pane_g

0xd89b,	// (0x00066bba) hwr_training_navi_pane_t1

0x56d8,	// (0x0005e9f7) list_single_hwr_training_instruct_pane_ParamLimits

0x56d8,	// (0x0005e9f7) list_single_hwr_training_instruct_pane

0x56f4,	// (0x0005ea13) list_single_hwr_training_instruct_pane_t1

0xeacd,	// (0x00067dec) bg_frame_shadow_pane_g1

0x5703,	// (0x0005ea22) bg_frame_shadow_pane_g2

0x570b,	// (0x0005ea2a) bg_frame_shadow_pane_g3

0x5713,	// (0x0005ea32) bg_frame_shadow_pane_g4

0x571b,	// (0x0005ea3a) bg_frame_shadow_pane_g5

0x5723,	// (0x0005ea42) bg_frame_shadow_pane_g6

0x572b,	// (0x0005ea4a) bg_frame_shadow_pane_g7

0xa45d,	// (0x0006377c) bg_frame_shadow_pane_g8

0x0007,

0xf703,	// (0x00068a22) bg_frame_shadow_pane_g

0x9bb7,	// (0x00062ed6) main_video_tele_dialer_pane

0x5733,	// (0x0005ea52) aid_size_cell_video_keypad_ParamLimits

0x5733,	// (0x0005ea52) aid_size_cell_video_keypad

0x574d,	// (0x0005ea6c) grid_video_dialer_keypad_pane_ParamLimits

0x574d,	// (0x0005ea6c) grid_video_dialer_keypad_pane

0x5799,	// (0x0005eab8) video_down_pane_cp_ParamLimits

0x5799,	// (0x0005eab8) video_down_pane_cp

0x57cb,	// (0x0005eaea) cell_video_dialer_keypad_pane_ParamLimits

0x57cb,	// (0x0005eaea) cell_video_dialer_keypad_pane

0x57f1,	// (0x0005eb10) bg_button_pane_cp08_ParamLimits

0x57f1,	// (0x0005eb10) bg_button_pane_cp08

0x57fd,	// (0x0005eb1c) cell_video_dialer_keypad_pane_g1_ParamLimits

0x57fd,	// (0x0005eb1c) cell_video_dialer_keypad_pane_g1

0x4e5d,	// (0x0005e17c) mup3_rocker2_pane_ParamLimits

0x4e5d,	// (0x0005e17c) mup3_rocker2_pane

0xa5e9,	// (0x00063908) mup3_rocker2_pane_g1

0x3f8a,	// (0x0005d2a9) main_dialer2_pane

0x9bb7,	// (0x00062ed6) main_mp4_pane

0xd8c7,	// (0x00066be6) main_mp4_pane_g1_ParamLimits

0xd8c7,	// (0x00066be6) main_mp4_pane_g1

0xd8c7,	// (0x00066be6) main_mp4_pane_g2_ParamLimits

0xd8c7,	// (0x00066be6) main_mp4_pane_g2

0x5838,	// (0x0005eb57) main_mp4_pane_g3_ParamLimits

0x5838,	// (0x0005eb57) main_mp4_pane_g3

0xd8d5,	// (0x00066bf4) main_mp4_pane_g4_ParamLimits

0xd8d5,	// (0x00066bf4) main_mp4_pane_g4

0xd903,	// (0x00066c22) main_mp4_pane_g5_ParamLimits

0xd903,	// (0x00066c22) main_mp4_pane_g5

0x0007,

0xf723,	// (0x00068a42) main_mp4_pane_g_ParamLimits

0xf723,	// (0x00068a42) main_mp4_pane_g

0xd977,	// (0x00066c96) main_mp4_pane_t1_ParamLimits

0xd977,	// (0x00066c96) main_mp4_pane_t1

0xd9d3,	// (0x00066cf2) main_mp4_pane_t2_ParamLimits

0xd9d3,	// (0x00066cf2) main_mp4_pane_t2

0x5882,	// (0x0005eba1) main_mp4_pane_t3_ParamLimits

0x5882,	// (0x0005eba1) main_mp4_pane_t3

0xda25,	// (0x00066d44) main_mp4_pane_t4_ParamLimits

0xda25,	// (0x00066d44) main_mp4_pane_t4

0x0003,

0xf734,	// (0x00068a53) main_mp4_pane_t_ParamLimits

0xf734,	// (0x00068a53) main_mp4_pane_t

0xda65,	// (0x00066d84) mp4_progress_pane_ParamLimits

0xda65,	// (0x00066d84) mp4_progress_pane

0xdaaf,	// (0x00066dce) mp4_rocker_pane_ParamLimits

0xdaaf,	// (0x00066dce) mp4_rocker_pane

0x58b0,	// (0x0005ebcf) mp4_progress_pane_t1

0x58c9,	// (0x0005ebe8) mp4_progress_pane_t2

0x0001,

0xf73d,	// (0x00068a5c) mp4_progress_pane_t

0x58e2,	// (0x0005ec01) mup_progress_pane_cp04

0xe8f0,	// (0x00067c0f) mp4_rocker_pane_g1

0x58f5,	// (0x0005ec14) aid_cell_size_keypad2_ParamLimits

0x58f5,	// (0x0005ec14) aid_cell_size_keypad2

0x590b,	// (0x0005ec2a) dialer2_ne_pane_ParamLimits

0x590b,	// (0x0005ec2a) dialer2_ne_pane

0x5923,	// (0x0005ec42) grid_dialer2_keypad_pane_ParamLimits

0x5923,	// (0x0005ec42) grid_dialer2_keypad_pane

0xde37,	// (0x00067156) bg_popup_call_pane_cp07_ParamLimits

0xde37,	// (0x00067156) bg_popup_call_pane_cp07

0x593f,	// (0x0005ec5e) dialer2_ne_pane_t1_ParamLimits

0x593f,	// (0x0005ec5e) dialer2_ne_pane_t1

0x5991,	// (0x0005ecb0) cell_dialer2_keypad_pane_ParamLimits

0x5991,	// (0x0005ecb0) cell_dialer2_keypad_pane

0x59b7,	// (0x0005ecd6) bg_button_pane_pane_cp04_ParamLimits

0x59b7,	// (0x0005ecd6) bg_button_pane_pane_cp04

0x59c3,	// (0x0005ece2) cell_dialer2_keypad_pane_g1_ParamLimits

0x59c3,	// (0x0005ece2) cell_dialer2_keypad_pane_g1

0x1c67,	// (0x0005af86) aid_placing_vt_set_content_ParamLimits

0x1c67,	// (0x0005af86) aid_placing_vt_set_content

0x1c8b,	// (0x0005afaa) aid_placing_vt_set_title_ParamLimits

0x1c8b,	// (0x0005afaa) aid_placing_vt_set_title

0x9bb7,	// (0x00062ed6) main_image3_pane

0x5a89,	// (0x0005eda8) area_side_right_pane_cp01_ParamLimits

0x5a89,	// (0x0005eda8) area_side_right_pane_cp01

0xd8c7,	// (0x00066be6) main_image3_pane_g1_ParamLimits

0xd8c7,	// (0x00066be6) main_image3_pane_g1

0x5aa2,	// (0x0005edc1) main_image3_pane_g2_ParamLimits

0x5aa2,	// (0x0005edc1) main_image3_pane_g2

0x5aca,	// (0x0005ede9) main_image3_pane_g3_ParamLimits

0x5aca,	// (0x0005ede9) main_image3_pane_g3

0x5af4,	// (0x0005ee13) main_image3_pane_g4_ParamLimits

0x5af4,	// (0x0005ee13) main_image3_pane_g4

0x0003,

0xf74c,	// (0x00068a6b) main_image3_pane_g_ParamLimits

0xf74c,	// (0x00068a6b) main_image3_pane_g

0x5b1e,	// (0x0005ee3d) main_image3_pane_t1_ParamLimits

0x5b1e,	// (0x0005ee3d) main_image3_pane_t1

0x5b76,	// (0x0005ee95) main_image3_pane_t2_ParamLimits

0x5b76,	// (0x0005ee95) main_image3_pane_t2

0x5bc8,	// (0x0005eee7) main_image3_pane_t3_ParamLimits

0x5bc8,	// (0x0005eee7) main_image3_pane_t3

0x0003,

0xf755,	// (0x00068a74) main_image3_pane_t_ParamLimits

0xf755,	// (0x00068a74) main_image3_pane_t

0xa286,	// (0x000635a5) grid_sctrl_middle_pane_cp01_ParamLimits

0xa286,	// (0x000635a5) grid_sctrl_middle_pane_cp01

0x5c50,	// (0x0005ef6f) cell_sctrl_middle_pane_cp01_ParamLimits

0x5c50,	// (0x0005ef6f) cell_sctrl_middle_pane_cp01

0x5c6d,	// (0x0005ef8c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5c6d,	// (0x0005ef8c) cell_sctrl_middle_pane_cp01_g1

0x9bb7,	// (0x00062ed6) main_call4_pane

0x5c82,	// (0x0005efa1) aid_size_button_call4_ParamLimits

0x5c82,	// (0x0005efa1) aid_size_button_call4

0x5cb5,	// (0x0005efd4) call4_windows_pane_ParamLimits

0x5cb5,	// (0x0005efd4) call4_windows_pane

0x5cd4,	// (0x0005eff3) grid_call4_button_pane_ParamLimits

0x5cd4,	// (0x0005eff3) grid_call4_button_pane

0x5d0b,	// (0x0005f02a) call4_windows_conf_pane

0x5d24,	// (0x0005f043) popup_call4_audio_first_window_ParamLimits

0x5d24,	// (0x0005f043) popup_call4_audio_first_window

0x5d74,	// (0x0005f093) popup_call4_audio_second_window_ParamLimits

0x5d74,	// (0x0005f093) popup_call4_audio_second_window

0x5d8d,	// (0x0005f0ac) popup_call4_audio_wait_window_ParamLimits

0x5d8d,	// (0x0005f0ac) popup_call4_audio_wait_window

0x5d9b,	// (0x0005f0ba) cell_call4_button_pane_ParamLimits

0x5d9b,	// (0x0005f0ba) cell_call4_button_pane

0x5dc2,	// (0x0005f0e1) bg_button_pane_cp09_ParamLimits

0x5dc2,	// (0x0005f0e1) bg_button_pane_cp09

0x5dce,	// (0x0005f0ed) cell_call4_button_pane_g1_ParamLimits

0x5dce,	// (0x0005f0ed) cell_call4_button_pane_g1

0x5df4,	// (0x0005f113) cell_call4_button_pane_t1_ParamLimits

0x5df4,	// (0x0005f113) cell_call4_button_pane_t1

0x5e22,	// (0x0005f141) popup_call4_audio_conf_window_ParamLimits

0x5e22,	// (0x0005f141) popup_call4_audio_conf_window

0x4ebf,	// (0x0005e1de) mup3_progress_pane_t1_ParamLimits

0x4ede,	// (0x0005e1fd) mup3_progress_pane_t2_ParamLimits

0xedfb,	// (0x0006811a) mup3_progress_pane_t3_ParamLimits

0xf63b,	// (0x0006895a) mup3_progress_pane_t_ParamLimits

0xee18,	// (0x00068137) mup_progress_pane_cp03_ParamLimits

0x546a,	// (0x0005e789) mup3_control_keys_pane_g4_copy1

0xda93,	// (0x00066db2) mp4_rocker2_pane_ParamLimits

0xda93,	// (0x00066db2) mp4_rocker2_pane

0x5e3c,	// (0x0005f15b) mp4_rocker2_pane_g1

0x5e44,	// (0x0005f163) mp4_rocker2_pane_g2

0xdb35,	// (0x00066e54) mp4_rocker2_pane_g3

0xdb3d,	// (0x00066e5c) mp4_rocker2_pane_g4

0xdb45,	// (0x00066e64) mp4_rocker2_pane_g5

0x0004,

0xf75e,	// (0x00068a7d) mp4_rocker2_pane_g

0x9bb7,	// (0x00062ed6) main_camera4_pane

0x9bb7,	// (0x00062ed6) main_video4_pane

0x5767,	// (0x0005ea86) main_video_tele_dialer_pane_t1_ParamLimits

0x5767,	// (0x0005ea86) main_video_tele_dialer_pane_t1

0x5780,	// (0x0005ea9f) main_video_tele_dialer_pane_t2_ParamLimits

0x5780,	// (0x0005ea9f) main_video_tele_dialer_pane_t2

0x0001,

0xf714,	// (0x00068a33) main_video_tele_dialer_pane_t_ParamLimits

0xf714,	// (0x00068a33) main_video_tele_dialer_pane_t

0x5e64,	// (0x0005f183) cam4_autofocus_pane_ParamLimits

0x5e64,	// (0x0005f183) cam4_autofocus_pane

0x5e7a,	// (0x0005f199) cam4_image_uncrop_pane_ParamLimits

0x5e7a,	// (0x0005f199) cam4_image_uncrop_pane

0x5e93,	// (0x0005f1b2) cam4_indicators_pane_ParamLimits

0x5e93,	// (0x0005f1b2) cam4_indicators_pane

0x5ec3,	// (0x0005f1e2) main_camera4_pane_g1_ParamLimits

0x5ec3,	// (0x0005f1e2) main_camera4_pane_g1

0x5ed5,	// (0x0005f1f4) main_camera4_pane_g2_ParamLimits

0x5ed5,	// (0x0005f1f4) main_camera4_pane_g2

0x5ee8,	// (0x0005f207) main_camera4_pane_g3_ParamLimits

0x5ee8,	// (0x0005f207) main_camera4_pane_g3

0x5efb,	// (0x0005f21a) main_camera4_pane_g4_ParamLimits

0x5efb,	// (0x0005f21a) main_camera4_pane_g4

0x5f0e,	// (0x0005f22d) main_camera4_pane_g5_ParamLimits

0x5f0e,	// (0x0005f22d) main_camera4_pane_g5

0x0005,

0xf769,	// (0x00068a88) main_camera4_pane_g_ParamLimits

0xf769,	// (0x00068a88) main_camera4_pane_g

0x5f32,	// (0x0005f251) main_camera4_pane_t1_ParamLimits

0x5f32,	// (0x0005f251) main_camera4_pane_t1

0xba51,	// (0x00064d70) bg_tb_trans_pane_cp06

0xdb73,	// (0x00066e92) cam4_indicators_pane_g1

0xdb84,	// (0x00066ea3) cam4_indicators_pane_g2

0x0002,

0xf784,	// (0x00068aa3) cam4_indicators_pane_g

0xdb9c,	// (0x00066ebb) cam4_indicators_pane_t1

0x5faa,	// (0x0005f2c9) main_video4_pane_g1_ParamLimits

0x5faa,	// (0x0005f2c9) main_video4_pane_g1

0x5fb9,	// (0x0005f2d8) main_video4_pane_g2_ParamLimits

0x5fb9,	// (0x0005f2d8) main_video4_pane_g2

0x5fc9,	// (0x0005f2e8) main_video4_pane_g3_ParamLimits

0x5fc9,	// (0x0005f2e8) main_video4_pane_g3

0x5fd9,	// (0x0005f2f8) main_video4_pane_g4_ParamLimits

0x5fd9,	// (0x0005f2f8) main_video4_pane_g4

0x0004,

0xf78b,	// (0x00068aaa) main_video4_pane_g_ParamLimits

0xf78b,	// (0x00068aaa) main_video4_pane_g

0x5ff9,	// (0x0005f318) vid4_indicators_pane_ParamLimits

0x5ff9,	// (0x0005f318) vid4_indicators_pane

0x6023,	// (0x0005f342) video4_image_uncrop_cif_pane_ParamLimits

0x6023,	// (0x0005f342) video4_image_uncrop_cif_pane

0x603d,	// (0x0005f35c) video4_image_uncrop_nhd_pane_ParamLimits

0x603d,	// (0x0005f35c) video4_image_uncrop_nhd_pane

0x5e7a,	// (0x0005f199) video4_image_uncrop_vga_pane_ParamLimits

0x5e7a,	// (0x0005f199) video4_image_uncrop_vga_pane

0x9ba9,	// (0x00062ec8) bg_tb_trans_pane_cp07

0xdbca,	// (0x00066ee9) vid4_indicators_pane_g1

0xdbe0,	// (0x00066eff) vid4_indicators_pane_g2

0xdbf4,	// (0x00066f13) vid4_indicators_pane_g3

0x0004,

0xf796,	// (0x00068ab5) vid4_indicators_pane_g

0xdc25,	// (0x00066f44) vid4_indicators_pane_t1

0x6054,	// (0x0005f373) cam4_autofocus_pane_g1

0x605c,	// (0x0005f37b) cam4_autofocus_pane_g2

0x6064,	// (0x0005f383) cam4_autofocus_pane_g3

0x0002,

0xf7a1,	// (0x00068ac0) cam4_autofocus_pane_g

0x606c,	// (0x0005f38b) cam4_autofocus_pane_g3_copy1

0x57af,	// (0x0005eace) video_down_pane_cp_t1

0x57bd,	// (0x0005eadc) video_down_pane_cp_t2

0x0001,

0xf719,	// (0x00068a38) video_down_pane_cp_t

0x9ba9,	// (0x00062ec8) popup_vitu2_window_ParamLimits

0x9ba9,	// (0x00062ec8) popup_vitu2_window

0x6074,	// (0x0005f393) aid_size_cell2_itu2_ParamLimits

0x6074,	// (0x0005f393) aid_size_cell2_itu2

0x6094,	// (0x0005f3b3) aid_size_cell_itu2_ParamLimits

0x6094,	// (0x0005f3b3) aid_size_cell_itu2

0x60e3,	// (0x0005f402) bg_popup_window_pane_cp09_ParamLimits

0x60e3,	// (0x0005f402) bg_popup_window_pane_cp09

0x60f1,	// (0x0005f410) field_vitu2_entry_pane_ParamLimits

0x60f1,	// (0x0005f410) field_vitu2_entry_pane

0x6116,	// (0x0005f435) grid_vitu2_function_pane_ParamLimits

0x6116,	// (0x0005f435) grid_vitu2_function_pane

0x6161,	// (0x0005f480) grid_vitu2_itu_pane_ParamLimits

0x6161,	// (0x0005f480) grid_vitu2_itu_pane

0x61e9,	// (0x0005f508) cell_vitu2_itu_pane_ParamLimits

0x61e9,	// (0x0005f508) cell_vitu2_itu_pane

0x6217,	// (0x0005f536) cell_vitu2_function_pane_ParamLimits

0x6217,	// (0x0005f536) cell_vitu2_function_pane

0xba5f,	// (0x00064d7e) bg_popup_call_pane_cp08_ParamLimits

0xba5f,	// (0x00064d7e) bg_popup_call_pane_cp08

0xba76,	// (0x00064d95) field_vitu2_entry_pane_g1

0xba82,	// (0x00064da1) field_vitu2_entry_pane_g2

0x0002,

0xf7a8,	// (0x00068ac7) field_vitu2_entry_pane_g

0x625b,	// (0x0005f57a) field_vitu2_entry_pane_t1_ParamLimits

0x625b,	// (0x0005f57a) field_vitu2_entry_pane_t1

0xba8e,	// (0x00064dad) field_vitu2_entry_pane_t2_ParamLimits

0xba8e,	// (0x00064dad) field_vitu2_entry_pane_t2

0x0001,

0xf7af,	// (0x00068ace) field_vitu2_entry_pane_t_ParamLimits

0xf7af,	// (0x00068ace) field_vitu2_entry_pane_t

0x628b,	// (0x0005f5aa) bg_button_pane_cp010_ParamLimits

0x628b,	// (0x0005f5aa) bg_button_pane_cp010

0x6299,	// (0x0005f5b8) cell_vitu2_itu_pane_g1

0x62bf,	// (0x0005f5de) cell_vitu2_itu_pane_t1_ParamLimits

0x62bf,	// (0x0005f5de) cell_vitu2_itu_pane_t1

0x0d62,	// (0x0005a081) cell_vitu2_itu_pane_t2_ParamLimits

0x0d62,	// (0x0005a081) cell_vitu2_itu_pane_t2

0x0002,

0xf7b9,	// (0x00068ad8) cell_vitu2_itu_pane_t_ParamLimits

0xf7b9,	// (0x00068ad8) cell_vitu2_itu_pane_t

0x9ba9,	// (0x00062ec8) bg_button_pane_cp011

0x631d,	// (0x0005f63c) cell_vitu2_function_pane_g1

0x9bb7,	// (0x00062ed6) main_myfav_hc_pane

0x5c18,	// (0x0005ef37) popup_image3_note_pane_ParamLimits

0x5c18,	// (0x0005ef37) popup_image3_note_pane

0x5c34,	// (0x0005ef53) popup_image3_tool_bar_pane_ParamLimits

0x5c34,	// (0x0005ef53) popup_image3_tool_bar_pane

0x0df0,	// (0x0005a10f) cell_vitu2_itu_pane_t3_ParamLimits

0x0df0,	// (0x0005a10f) cell_vitu2_itu_pane_t3

0x9b2c,	// (0x00062e4b) bg_popup_trans_pane

0xbab3,	// (0x00064dd2) grid_image3_tool_bar_pane

0xbabd,	// (0x00064ddc) bg_popup_trans_pane_g1

0xa7fe,	// (0x00063b1d) bg_popup_trans_pane_g2

0xbac5,	// (0x00064de4) bg_popup_trans_pane_g3

0xbacd,	// (0x00064dec) bg_popup_trans_pane_g4

0xbad5,	// (0x00064df4) bg_popup_trans_pane_g5

0xbadd,	// (0x00064dfc) bg_popup_trans_pane_g6

0xbae5,	// (0x00064e04) bg_popup_trans_pane_g7

0xbaed,	// (0x00064e0c) bg_popup_trans_pane_g8

0xa7de,	// (0x00063afd) bg_popup_trans_pane_g9

0x0008,

0xf7c0,	// (0x00068adf) bg_popup_trans_pane_g

0xbaf5,	// (0x00064e14) cell_image3_tool_bar_pane_ParamLimits

0xbaf5,	// (0x00064e14) cell_image3_tool_bar_pane

0xa5e9,	// (0x00063908) cell_image3_tool_bar_pane_g1

0x9b2c,	// (0x00062e4b) bg_popup_trans_pane_cp1

0xbb0b,	// (0x00064e2a) popup_image3_note_pane_t1

0xbb19,	// (0x00064e38) popup_image3_note_pane_t2

0xbb27,	// (0x00064e46) popup_image3_note_pane_t3

0x0002,

0xf7d3,	// (0x00068af2) popup_image3_note_pane_t

0xbb37,	// (0x00064e56) popup_image3_note_pane_t3_copy1

0x6331,	// (0x0005f650) bg_myfav_hc_instruction_pane_ParamLimits

0x6331,	// (0x0005f650) bg_myfav_hc_instruction_pane

0x6349,	// (0x0005f668) cell_myfav_contact_pane_ParamLimits

0x6349,	// (0x0005f668) cell_myfav_contact_pane

0x6365,	// (0x0005f684) cell_myfav_contact_pane_cp1_ParamLimits

0x6365,	// (0x0005f684) cell_myfav_contact_pane_cp1

0x637d,	// (0x0005f69c) cell_myfav_contact_pane_cp2_ParamLimits

0x637d,	// (0x0005f69c) cell_myfav_contact_pane_cp2

0x6395,	// (0x0005f6b4) cell_myfav_contact_pane_cp3_ParamLimits

0x6395,	// (0x0005f6b4) cell_myfav_contact_pane_cp3

0x63ac,	// (0x0005f6cb) cell_myfav_contact_pane_cp4_ParamLimits

0x63ac,	// (0x0005f6cb) cell_myfav_contact_pane_cp4

0x63c4,	// (0x0005f6e3) cell_myfav_contact_pane_cp5_ParamLimits

0x63c4,	// (0x0005f6e3) cell_myfav_contact_pane_cp5

0x63d8,	// (0x0005f6f7) cell_myfav_contact_pane_cp6_ParamLimits

0x63d8,	// (0x0005f6f7) cell_myfav_contact_pane_cp6

0x63ee,	// (0x0005f70d) cell_myfav_contact_pane_cp7_ParamLimits

0x63ee,	// (0x0005f70d) cell_myfav_contact_pane_cp7

0xbb45,	// (0x00064e64) listscroll_gen_pane_cp05

0x6406,	// (0x0005f725) main_myfav_hc_pane_g1_ParamLimits

0x6406,	// (0x0005f725) main_myfav_hc_pane_g1

0x6420,	// (0x0005f73f) main_myfav_hc_pane_g2_ParamLimits

0x6420,	// (0x0005f73f) main_myfav_hc_pane_g2

0x0002,

0xf7da,	// (0x00068af9) main_myfav_hc_pane_g_ParamLimits

0xf7da,	// (0x00068af9) main_myfav_hc_pane_g

0x6454,	// (0x0005f773) main_myfav_hc_pane_t1_ParamLimits

0x6454,	// (0x0005f773) main_myfav_hc_pane_t1

0xbb4e,	// (0x00064e6d) main_myfav_hc_pane_t2_ParamLimits

0xbb4e,	// (0x00064e6d) main_myfav_hc_pane_t2

0xbb60,	// (0x00064e7f) main_myfav_hc_pane_t3_ParamLimits

0xbb60,	// (0x00064e7f) main_myfav_hc_pane_t3

0x646b,	// (0x0005f78a) main_myfav_hc_pane_t4_ParamLimits

0x646b,	// (0x0005f78a) main_myfav_hc_pane_t4

0x0004,

0xf7e1,	// (0x00068b00) main_myfav_hc_pane_t_ParamLimits

0xf7e1,	// (0x00068b00) main_myfav_hc_pane_t

0xa5e9,	// (0x00063908) bg_myfav_hc_instruction_pane_g1

0xbb72,	// (0x00064e91) cell_myfav_contact_pane_g1_ParamLimits

0xbb72,	// (0x00064e91) cell_myfav_contact_pane_g1

0xbb72,	// (0x00064e91) cell_myfav_contact_pane_g2_ParamLimits

0xbb72,	// (0x00064e91) cell_myfav_contact_pane_g2

0xbb7e,	// (0x00064e9d) cell_myfav_contact_pane_g3_ParamLimits

0xbb7e,	// (0x00064e9d) cell_myfav_contact_pane_g3

0xa2fb,	// (0x0006361a) cell_myfav_contact_pane_g4_ParamLimits

0xa2fb,	// (0x0006361a) cell_myfav_contact_pane_g4

0xbb8b,	// (0x00064eaa) cell_myfav_contact_pane_g5_ParamLimits

0xbb8b,	// (0x00064eaa) cell_myfav_contact_pane_g5

0x0004,

0xf7ec,	// (0x00068b0b) cell_myfav_contact_pane_g_ParamLimits

0xf7ec,	// (0x00068b0b) cell_myfav_contact_pane_g

0x643a,	// (0x0005f759) main_myfav_hc_pane_g3_ParamLimits

0x643a,	// (0x0005f759) main_myfav_hc_pane_g3

0x0fc5,	// (0x0005a2e4) popup_adpt_find_window

0x6495,	// (0x0005f7b4) afind_page_pane_ParamLimits

0x6495,	// (0x0005f7b4) afind_page_pane

0x64aa,	// (0x0005f7c9) aid_size_cell_afind_ParamLimits

0x64aa,	// (0x0005f7c9) aid_size_cell_afind

0x64c8,	// (0x0005f7e7) bg_popup_sub_pane_cp09_ParamLimits

0x64c8,	// (0x0005f7e7) bg_popup_sub_pane_cp09

0x64d5,	// (0x0005f7f4) find_pane_cp01_ParamLimits

0x64d5,	// (0x0005f7f4) find_pane_cp01

0xbb97,	// (0x00064eb6) grid_afind_control_pane_ParamLimits

0xbb97,	// (0x00064eb6) grid_afind_control_pane

0x64e2,	// (0x0005f801) grid_afind_pane_ParamLimits

0x64e2,	// (0x0005f801) grid_afind_pane

0x6504,	// (0x0005f823) cell_afind_pane_ParamLimits

0x6504,	// (0x0005f823) cell_afind_pane

0xa5e9,	// (0x00063908) afind_page_pane_g1

0x6571,	// (0x0005f890) afind_page_pane_g2

0x657a,	// (0x0005f899) afind_page_pane_g3

0x0002,

0xf7f7,	// (0x00068b16) afind_page_pane_g

0x6583,	// (0x0005f8a2) afind_page_pane_t1

0xbbab,	// (0x00064eca) cell_afind_grid_control_pane_ParamLimits

0xbbab,	// (0x00064eca) cell_afind_grid_control_pane

0x59b7,	// (0x0005ecd6) bg_button_pane_cp69_ParamLimits

0x59b7,	// (0x0005ecd6) bg_button_pane_cp69

0x65a3,	// (0x0005f8c2) cell_afind_pane_g1_ParamLimits

0x65a3,	// (0x0005f8c2) cell_afind_pane_g1

0x65b0,	// (0x0005f8cf) cell_afind_pane_t1_ParamLimits

0x65b0,	// (0x0005f8cf) cell_afind_pane_t1

0xa5f3,	// (0x00063912) bg_button_pane_cp72

0xbbba,	// (0x00064ed9) cell_afind_grid_control_pane_g1

0x39d7,	// (0x0005ccf6) aid_image_placing_area_ParamLimits

0x39d7,	// (0x0005ccf6) aid_image_placing_area

0xa2ed,	// (0x0006360c) field_vitu_entry_pane_g1_ParamLimits

0xa2ed,	// (0x0006360c) field_vitu_entry_pane_g1

0xa2ed,	// (0x0006360c) field_vitu_entry_pane_g2_ParamLimits

0xa2ed,	// (0x0006360c) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x00068520) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x00068520) field_vitu_entry_pane_g

0x548f,	// (0x0005e7ae) cell_vitu_itu_pane_g1_ParamLimits

0x5472,	// (0x0005e791) cell_vitu_itu_pane_t3_ParamLimits

0x5472,	// (0x0005e791) cell_vitu_itu_pane_t3

0x58b0,	// (0x0005ebcf) mp4_progress_pane_t1_ParamLimits

0x58c9,	// (0x0005ebe8) mp4_progress_pane_t2_ParamLimits

0xf73d,	// (0x00068a5c) mp4_progress_pane_t_ParamLimits

0x58e2,	// (0x0005ec01) mup_progress_pane_cp04_ParamLimits

0x647f,	// (0x0005f79e) main_myfav_hc_pane_t5_ParamLimits

0x647f,	// (0x0005f79e) main_myfav_hc_pane_t5

0x9b52,	// (0x00062e71) aid_zoom_text_primary

0x0fc5,	// (0x0005a2e4) popup_adpt_find_window_ParamLimits

0x9ba9,	// (0x00062ec8) main_cam_set_pane

0x5eac,	// (0x0005f1cb) cam4_zoom_pane_ParamLimits

0x5eac,	// (0x0005f1cb) cam4_zoom_pane

0x65c2,	// (0x0005f8e1) main_cam_set_pane_g1_ParamLimits

0x65c2,	// (0x0005f8e1) main_cam_set_pane_g1

0x65d0,	// (0x0005f8ef) main_cam_set_pane_g2_ParamLimits

0x65d0,	// (0x0005f8ef) main_cam_set_pane_g2

0x0001,

0xf7fe,	// (0x00068b1d) main_cam_set_pane_g_ParamLimits

0xf7fe,	// (0x00068b1d) main_cam_set_pane_g

0x65f1,	// (0x0005f910) main_cam_set_pane_t1_ParamLimits

0x65f1,	// (0x0005f910) main_cam_set_pane_t1

0x660c,	// (0x0005f92b) main_cset_listscroll_pane_ParamLimits

0x660c,	// (0x0005f92b) main_cset_listscroll_pane

0x6634,	// (0x0005f953) main_cset_slider_pane_ParamLimits

0x6634,	// (0x0005f953) main_cset_slider_pane

0xbbcb,	// (0x00064eea) main_cset_list_pane_ParamLimits

0xbbcb,	// (0x00064eea) main_cset_list_pane

0xbbdb,	// (0x00064efa) scroll_pane_cp028

0x665e,	// (0x0005f97d) aid_area_touch_slider

0x667a,	// (0x0005f999) cset_slider_pane

0x669d,	// (0x0005f9bc) main_cset_slider_pane_g1

0x66b2,	// (0x0005f9d1) main_cset_slider_pane_g2

0x0011,

0xf803,	// (0x00068b22) main_cset_slider_pane_g

0xbc14,	// (0x00064f33) main_cset_slider_pane_t1

0x6774,	// (0x0005fa93) main_cset_slider_pane_t2

0x678e,	// (0x0005faad) main_cset_slider_pane_t3

0x67a8,	// (0x0005fac7) main_cset_slider_pane_t4

0x67c2,	// (0x0005fae1) main_cset_slider_pane_t5

0x67e0,	// (0x0005faff) main_cset_slider_pane_t6

0x67f7,	// (0x0005fb16) main_cset_slider_pane_t7

0x000e,

0xf828,	// (0x00068b47) main_cset_slider_pane_t

0x6903,	// (0x0005fc22) cset_list_set_pane_ParamLimits

0x6903,	// (0x0005fc22) cset_list_set_pane

0xbcae,	// (0x00064fcd) aid_position_infowindow_above

0xbcb6,	// (0x00064fd5) aid_position_infowindow_below

0x6917,	// (0x0005fc36) cset_list_set_pane_g1_ParamLimits

0x6917,	// (0x0005fc36) cset_list_set_pane_g1

0x6923,	// (0x0005fc42) cset_list_set_pane_g3_ParamLimits

0x6923,	// (0x0005fc42) cset_list_set_pane_g3

0x0001,

0xf847,	// (0x00068b66) cset_list_set_pane_g_ParamLimits

0xf847,	// (0x00068b66) cset_list_set_pane_g

0x6932,	// (0x0005fc51) cset_list_set_pane_t1_ParamLimits

0x6932,	// (0x0005fc51) cset_list_set_pane_t1

0xa286,	// (0x000635a5) list_highlight_pane_cp021_ParamLimits

0xa286,	// (0x000635a5) list_highlight_pane_cp021

0xb0f8,	// (0x00064417) cset_slider_pane_g1

0xb10a,	// (0x00064429) cset_slider_pane_g2

0xb101,	// (0x00064420) cset_slider_pane_g3

0x0002,

0xf84c,	// (0x00068b6b) cset_slider_pane_g

0xad60,	// (0x0006407f) aid_area_touch_cam4_zoom

0x6947,	// (0x0005fc66) cam4_zoom_cont_pane

0x694f,	// (0x0005fc6e) cam4_zoom_pane_g1

0x6957,	// (0x0005fc76) cam4_zoom_pane_g2

0x695f,	// (0x0005fc7e) cam4_zoom_pane_g3

0x0002,

0xf853,	// (0x00068b72) cam4_zoom_pane_g

0xdc3c,	// (0x00066f5b) cam4_zoom_cont_pane_g1

0xdc45,	// (0x00066f64) cam4_zoom_cont_pane_g2

0xdc4e,	// (0x00066f6d) cam4_zoom_cont_pane_g3

0x0002,

0xf85a,	// (0x00068b79) cam4_zoom_cont_pane_g

0x5ca0,	// (0x0005efbf) call4_image_pane_ParamLimits

0x5ca0,	// (0x0005efbf) call4_image_pane

0x5d0b,	// (0x0005f02a) call4_windows_conf_pane_ParamLimits

0x5d52,	// (0x0005f071) popup_call4_audio_in_window_ParamLimits

0x5d52,	// (0x0005f071) popup_call4_audio_in_window

0x9b2c,	// (0x00062e4b) bg_popup_call2_act_pane_cp02

0x5e1a,	// (0x0005f139) call4_list_conf_pane

0xa5e9,	// (0x00063908) call4_image_pane_g1

0xa5e9,	// (0x00063908) call4_image_pane_g2

0x0001,

0xf3d8,	// (0x000686f7) call4_image_pane_g

0xbcbe,	// (0x00064fdd) list_single_graphic_popup_conf4_pane_ParamLimits

0xbcbe,	// (0x00064fdd) list_single_graphic_popup_conf4_pane

0x9b2c,	// (0x00062e4b) list_highlight_pane_cp022

0xbcd3,	// (0x00064ff2) list_single_graphic_popup_conf4_pane_g1

0xadb9,	// (0x000640d8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf861,	// (0x00068b80) list_single_graphic_popup_conf4_pane_g

0xbcdb,	// (0x00064ffa) list_single_graphic_popup_conf4_pane_t1

0x1da2,	// (0x0005b0c1) popup_vtel_slider_window_ParamLimits

0x1da2,	// (0x0005b0c1) popup_vtel_slider_window

0x597f,	// (0x0005ec9e) dialer2_ne_pane_t2_ParamLimits

0x597f,	// (0x0005ec9e) dialer2_ne_pane_t2

0x0001,

0xf742,	// (0x00068a61) dialer2_ne_pane_t_ParamLimits

0xf742,	// (0x00068a61) dialer2_ne_pane_t

0xde37,	// (0x00067156) bg_popup_sub_pane_cp010_ParamLimits

0xde37,	// (0x00067156) bg_popup_sub_pane_cp010

0x6967,	// (0x0005fc86) popup_vtel_slider_window_g1_ParamLimits

0x6967,	// (0x0005fc86) popup_vtel_slider_window_g1

0x697a,	// (0x0005fc99) popup_vtel_slider_window_g2_ParamLimits

0x697a,	// (0x0005fc99) popup_vtel_slider_window_g2

0x0003,

0xf866,	// (0x00068b85) popup_vtel_slider_window_g_ParamLimits

0xf866,	// (0x00068b85) popup_vtel_slider_window_g

0x69d0,	// (0x0005fcef) vtel_slider_pane_ParamLimits

0x69d0,	// (0x0005fcef) vtel_slider_pane

0x69f2,	// (0x0005fd11) vtel_slider_pane_g1_ParamLimits

0x69f2,	// (0x0005fd11) vtel_slider_pane_g1

0x6a06,	// (0x0005fd25) vtel_slider_pane_g2_ParamLimits

0x6a06,	// (0x0005fd25) vtel_slider_pane_g2

0x6a1e,	// (0x0005fd3d) vtel_slider_pane_g3_ParamLimits

0x6a1e,	// (0x0005fd3d) vtel_slider_pane_g3

0x69f2,	// (0x0005fd11) vtel_slider_pane_g4_ParamLimits

0x69f2,	// (0x0005fd11) vtel_slider_pane_g4

0x6a34,	// (0x0005fd53) vtel_slider_pane_g5_ParamLimits

0x6a34,	// (0x0005fd53) vtel_slider_pane_g5

0x0004,

0xf86f,	// (0x00068b8e) vtel_slider_pane_g_ParamLimits

0xf86f,	// (0x00068b8e) vtel_slider_pane_g

0x9ba9,	// (0x00062ec8) main_gallery2_pane

0x60b4,	// (0x0005f3d3) aid_size_row_itut2_dropdow_list_ParamLimits

0x60b4,	// (0x0005f3d3) aid_size_row_itut2_dropdow_list

0x613b,	// (0x0005f45a) grid_vitu2_function_top_pane_ParamLimits

0x613b,	// (0x0005f45a) grid_vitu2_function_top_pane

0x6197,	// (0x0005f4b6) popup_vitu2_dropdown_list_window_ParamLimits

0x6197,	// (0x0005f4b6) popup_vitu2_dropdown_list_window

0x61bd,	// (0x0005f4dc) popup_vitu2_match_list_window

0x6a4a,	// (0x0005fd69) cell_vitu2_function_top_pane_ParamLimits

0x6a4a,	// (0x0005fd69) cell_vitu2_function_top_pane

0x6a64,	// (0x0005fd83) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6a64,	// (0x0005fd83) cell_vitu2_function_top_pane_cp01

0x6a80,	// (0x0005fd9f) cell_vitu2_function_top_wide_pane_ParamLimits

0x6a80,	// (0x0005fd9f) cell_vitu2_function_top_wide_pane

0x9ba9,	// (0x00062ec8) bg_button_pane_cp012

0x6a9e,	// (0x0005fdbd) cell_vitu2_function_top_pane_g1

0xdc57,	// (0x00066f76) bg_button_pane_cp013_ParamLimits

0xdc57,	// (0x00066f76) bg_button_pane_cp013

0x6ab2,	// (0x0005fdd1) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6ab2,	// (0x0005fdd1) cell_vitu2_function_top_wide_pane_g1

0x9ba9,	// (0x00062ec8) bg_popup_sub_pane_cp20

0x6aca,	// (0x0005fde9) list_vitu2_match_list_pane

0xbabd,	// (0x00064ddc) bg_popup_sub_pane_cp20_g1

0xbac5,	// (0x00064de4) bg_popup_sub_pane_cp20_g2

0xa7fe,	// (0x00063b1d) bg_popup_sub_pane_cp20_g3

0xbacd,	// (0x00064dec) bg_popup_sub_pane_cp20_g4

0xa7de,	// (0x00063afd) bg_popup_sub_pane_cp20_g5

0xbcf1,	// (0x00065010) bg_popup_sub_pane_cp20_g6

0xbadd,	// (0x00064dfc) bg_popup_sub_pane_cp20_g7

0xbae5,	// (0x00064e04) bg_popup_sub_pane_cp20_g8

0xbaed,	// (0x00064e0c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf87a,	// (0x00068b99) bg_popup_sub_pane_cp20_g

0xdc73,	// (0x00066f92) list_vitu2_match_list_item_pane_ParamLimits

0xdc73,	// (0x00066f92) list_vitu2_match_list_item_pane

0xdc85,	// (0x00066fa4) list_vitu2_match_list_item_pane_t1

0x9bb7,	// (0x00062ed6) bg_popup_sub_pane_cp21

0xa594,	// (0x000638b3) grid_vitu2_dropdown_list_pane

0x6ae2,	// (0x0005fe01) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6ae2,	// (0x0005fe01) cell_vitu2_dropdown_list_char_pane

0x6b05,	// (0x0005fe24) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6b05,	// (0x0005fe24) cell_vitu2_dropdown_list_ctrl_pane

0xbcf9,	// (0x00065018) cell_vitu2_dropdown_list_char_pane_g1

0xbd02,	// (0x00065021) cell_vitu2_dropdown_list_char_pane_g2

0xbd0b,	// (0x0006502a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf88d,	// (0x00068bac) cell_vitu2_dropdown_list_char_pane_g

0x6b31,	// (0x0005fe50) cell_vitu2_dropdown_list_char_pane_t1

0x6b3f,	// (0x0005fe5e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6b3f,	// (0x0005fe5e) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6b4f,	// (0x0005fe6e) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6b4f,	// (0x0005fe6e) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6b60,	// (0x0005fe7f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6b60,	// (0x0005fe7f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6b70,	// (0x0005fe8f) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6b70,	// (0x0005fe8f) cell_vitu2_dropdown_list_ctrl_pane_g4

0xba51,	// (0x00064d70) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xba51,	// (0x00064d70) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf894,	// (0x00068bb3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf894,	// (0x00068bb3) cell_vitu2_dropdown_list_ctrl_pane_g

0x6b8c,	// (0x0005feab) aid_size_cell_gallery2_ParamLimits

0x6b8c,	// (0x0005feab) aid_size_cell_gallery2

0x6baa,	// (0x0005fec9) grid_gallery2_pane_ParamLimits

0x6baa,	// (0x0005fec9) grid_gallery2_pane

0x6bc4,	// (0x0005fee3) scroll_pane_cp029_ParamLimits

0x6bc4,	// (0x0005fee3) scroll_pane_cp029

0x6bd5,	// (0x0005fef4) cell_gallery2_pane_ParamLimits

0x6bd5,	// (0x0005fef4) cell_gallery2_pane

0xbd14,	// (0x00065033) cell_gallery2_pane_g2

0x6c39,	// (0x0005ff58) cell_gallery2_pane_g3

0xbd1c,	// (0x0006503b) cell_gallery2_pane_g4

0xbd24,	// (0x00065043) cell_gallery2_pane_g5

0xa594,	// (0x000638b3) grid_highlight_pane_cp10

0x61bd,	// (0x0005f4dc) popup_vitu2_match_list_window_ParamLimits

0x61d4,	// (0x0005f4f3) popup_vitu2_query_window_ParamLimits

0x61d4,	// (0x0005f4f3) popup_vitu2_query_window

0x9bb7,	// (0x00062ed6) bg_vitu2_candi_button_pane

0xbcf9,	// (0x00065018) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xbd02,	// (0x00065021) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xbd0b,	// (0x0006502a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6c41,	// (0x0005ff60) bg_button_pane_cp015

0x6c55,	// (0x0005ff74) bg_button_pane_cp016

0x6c68,	// (0x0005ff87) bg_button_pane_cp017

0xb086,	// (0x000643a5) bg_popup_sub_pane_cp22

0xbd2c,	// (0x0006504b) popup_vitu2_query_window_g1

0x6cad,	// (0x0005ffcc) popup_vitu2_query_window_g2

0x0002,

0xf89f,	// (0x00068bbe) popup_vitu2_query_window_g

0x6ccc,	// (0x0005ffeb) popup_vitu2_query_window_t1_ParamLimits

0x6ccc,	// (0x0005ffeb) popup_vitu2_query_window_t1

0x6d01,	// (0x00060020) popup_vitu2_query_window_t2_ParamLimits

0x6d01,	// (0x00060020) popup_vitu2_query_window_t2

0x6d13,	// (0x00060032) popup_vitu2_query_window_t3_ParamLimits

0x6d13,	// (0x00060032) popup_vitu2_query_window_t3

0x6d3b,	// (0x0006005a) popup_vitu2_query_window_t4_ParamLimits

0x6d3b,	// (0x0006005a) popup_vitu2_query_window_t4

0x6d5c,	// (0x0006007b) popup_vitu2_query_window_t5_ParamLimits

0x6d5c,	// (0x0006007b) popup_vitu2_query_window_t5

0x0006,

0xf8a6,	// (0x00068bc5) popup_vitu2_query_window_t_ParamLimits

0xf8a6,	// (0x00068bc5) popup_vitu2_query_window_t

0xbbc3,	// (0x00064ee2) main_cset_text_pane

0x665e,	// (0x0005f97d) aid_area_touch_slider_ParamLimits

0x667a,	// (0x0005f999) cset_slider_pane_ParamLimits

0x669d,	// (0x0005f9bc) main_cset_slider_pane_g1_ParamLimits

0x66b2,	// (0x0005f9d1) main_cset_slider_pane_g2_ParamLimits

0xbbe4,	// (0x00064f03) main_cset_slider_pane_g3_ParamLimits

0xbbe4,	// (0x00064f03) main_cset_slider_pane_g3

0x66c7,	// (0x0005f9e6) main_cset_slider_pane_g4_ParamLimits

0x66c7,	// (0x0005f9e6) main_cset_slider_pane_g4

0x66d6,	// (0x0005f9f5) main_cset_slider_pane_g5_ParamLimits

0x66d6,	// (0x0005f9f5) main_cset_slider_pane_g5

0x66e4,	// (0x0005fa03) main_cset_slider_pane_g6_ParamLimits

0x66e4,	// (0x0005fa03) main_cset_slider_pane_g6

0xf803,	// (0x00068b22) main_cset_slider_pane_g_ParamLimits

0xbc14,	// (0x00064f33) main_cset_slider_pane_t1_ParamLimits

0x6774,	// (0x0005fa93) main_cset_slider_pane_t2_ParamLimits

0x678e,	// (0x0005faad) main_cset_slider_pane_t3_ParamLimits

0x67a8,	// (0x0005fac7) main_cset_slider_pane_t4_ParamLimits

0x67c2,	// (0x0005fae1) main_cset_slider_pane_t5_ParamLimits

0x67e0,	// (0x0005faff) main_cset_slider_pane_t6_ParamLimits

0x67f7,	// (0x0005fb16) main_cset_slider_pane_t7_ParamLimits

0x6825,	// (0x0005fb44) main_cset_slider_pane_t8_ParamLimits

0x6825,	// (0x0005fb44) main_cset_slider_pane_t8

0x684d,	// (0x0005fb6c) main_cset_slider_pane_t9_ParamLimits

0x684d,	// (0x0005fb6c) main_cset_slider_pane_t9

0x6875,	// (0x0005fb94) main_cset_slider_pane_t10_ParamLimits

0x6875,	// (0x0005fb94) main_cset_slider_pane_t10

0x689d,	// (0x0005fbbc) main_cset_slider_pane_t11_ParamLimits

0x689d,	// (0x0005fbbc) main_cset_slider_pane_t11

0x68c7,	// (0x0005fbe6) main_cset_slider_pane_t12_ParamLimits

0x68c7,	// (0x0005fbe6) main_cset_slider_pane_t12

0x68e4,	// (0x0005fc03) main_cset_slider_pane_t13_ParamLimits

0x68e4,	// (0x0005fc03) main_cset_slider_pane_t13

0xf828,	// (0x00068b47) main_cset_slider_pane_t_ParamLimits

0x9b2c,	// (0x00062e4b) bg_popup_sub_pane_cp011

0xbd38,	// (0x00065057) main_cset_text_pane_g1

0xbd40,	// (0x0006505f) main_cset_text_pane_t1

0xbd4e,	// (0x0006506d) main_cset_text_pane_t2

0xbd5c,	// (0x0006507b) main_cset_text_pane_t3

0xbd6a,	// (0x00065089) main_cset_text_pane_t4

0xbd78,	// (0x00065097) main_cset_text_pane_t5

0xbd86,	// (0x000650a5) main_cset_text_pane_t6

0xbd94,	// (0x000650b3) main_cset_text_pane_t7

0x0006,

0xf8b5,	// (0x00068bd4) main_cset_text_pane_t

0x9bb7,	// (0x00062ed6) main_cam4_burst_pane

0x9bb7,	// (0x00062ed6) main_cam5_pane

0x6591,	// (0x0005f8b0) bg_button_pane_cp019

0x659a,	// (0x0005f8b9) bg_button_pane_cp020

0xbbf0,	// (0x00064f0f) main_cset_slider_pane_g7_ParamLimits

0xbbf0,	// (0x00064f0f) main_cset_slider_pane_g7

0xbbfc,	// (0x00064f1b) main_cset_slider_pane_g8_ParamLimits

0xbbfc,	// (0x00064f1b) main_cset_slider_pane_g8

0x66f8,	// (0x0005fa17) main_cset_slider_pane_g9_ParamLimits

0x66f8,	// (0x0005fa17) main_cset_slider_pane_g9

0x6704,	// (0x0005fa23) main_cset_slider_pane_g10_ParamLimits

0x6704,	// (0x0005fa23) main_cset_slider_pane_g10

0x6710,	// (0x0005fa2f) main_cset_slider_pane_g11_ParamLimits

0x6710,	// (0x0005fa2f) main_cset_slider_pane_g11

0x671c,	// (0x0005fa3b) main_cset_slider_pane_g12_ParamLimits

0x671c,	// (0x0005fa3b) main_cset_slider_pane_g12

0x6728,	// (0x0005fa47) main_cset_slider_pane_g13_ParamLimits

0x6728,	// (0x0005fa47) main_cset_slider_pane_g13

0x6734,	// (0x0005fa53) main_cset_slider_pane_g14_ParamLimits

0x6734,	// (0x0005fa53) main_cset_slider_pane_g14

0x6740,	// (0x0005fa5f) main_cset_slider_pane_g15_ParamLimits

0x6740,	// (0x0005fa5f) main_cset_slider_pane_g15

0xbc3c,	// (0x00064f5b) main_cset_slider_pane_t14_ParamLimits

0xbc3c,	// (0x00064f5b) main_cset_slider_pane_t14

0xbc75,	// (0x00064f94) main_cset_slider_pane_t15_ParamLimits

0xbc75,	// (0x00064f94) main_cset_slider_pane_t15

0x6dd3,	// (0x000600f2) aid_cam4_burst_size_cell_ParamLimits

0x6dd3,	// (0x000600f2) aid_cam4_burst_size_cell

0x6df3,	// (0x00060112) grid_cam4_burst_pane_ParamLimits

0x6df3,	// (0x00060112) grid_cam4_burst_pane

0x6e2d,	// (0x0006014c) linegrid_cam4_burst_pane_ParamLimits

0x6e2d,	// (0x0006014c) linegrid_cam4_burst_pane

0xbda2,	// (0x000650c1) scroll_pane_cp30_ParamLimits

0xbda2,	// (0x000650c1) scroll_pane_cp30

0x6e4f,	// (0x0006016e) cell_cam4_burst_pane_ParamLimits

0x6e4f,	// (0x0006016e) cell_cam4_burst_pane

0xbdae,	// (0x000650cd) linegrid_cam4_burst_pane_g1_ParamLimits

0xbdae,	// (0x000650cd) linegrid_cam4_burst_pane_g1

0x6ea4,	// (0x000601c3) linegrid_cam4_burst_pane_g2_ParamLimits

0x6ea4,	// (0x000601c3) linegrid_cam4_burst_pane_g2

0xbdbb,	// (0x000650da) linegrid_cam4_burst_pane_g3_ParamLimits

0xbdbb,	// (0x000650da) linegrid_cam4_burst_pane_g3

0x0002,

0xf8c4,	// (0x00068be3) linegrid_cam4_burst_pane_g_ParamLimits

0xf8c4,	// (0x00068be3) linegrid_cam4_burst_pane_g

0x6eb5,	// (0x000601d4) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6eb5,	// (0x000601d4) linegrid_cam4_burst_pane_g3_copy1

0xbdc8,	// (0x000650e7) linegrid_cam4_burst_pane_g4_ParamLimits

0xbdc8,	// (0x000650e7) linegrid_cam4_burst_pane_g4

0x6ed3,	// (0x000601f2) linegrid_cam4_burst_pane_g5_ParamLimits

0x6ed3,	// (0x000601f2) linegrid_cam4_burst_pane_g5

0x6ee4,	// (0x00060203) linegrid_cam4_burst_pane_g6_ParamLimits

0x6ee4,	// (0x00060203) linegrid_cam4_burst_pane_g6

0xbdd5,	// (0x000650f4) linegrid_cam4_burst_pane_g7_ParamLimits

0xbdd5,	// (0x000650f4) linegrid_cam4_burst_pane_g7

0x6efb,	// (0x0006021a) cell_cam4_burst_pane_g1

0xbdee,	// (0x0006510d) main_cam5_pane_t1_ParamLimits

0xbdee,	// (0x0006510d) main_cam5_pane_t1

0xbe00,	// (0x0006511f) main_cam5_pane_t2_ParamLimits

0xbe00,	// (0x0006511f) main_cam5_pane_t2

0xbe12,	// (0x00065131) main_cam5_pane_t3_ParamLimits

0xbe12,	// (0x00065131) main_cam5_pane_t3

0xbe24,	// (0x00065143) main_cam5_pane_t4_ParamLimits

0xbe24,	// (0x00065143) main_cam5_pane_t4

0xbe3c,	// (0x0006515b) main_cam5_pane_t5_ParamLimits

0xbe3c,	// (0x0006515b) main_cam5_pane_t5

0xbe50,	// (0x0006516f) main_cam5_pane_t6_ParamLimits

0xbe50,	// (0x0006516f) main_cam5_pane_t6

0xbe64,	// (0x00065183) main_cam5_pane_t7_ParamLimits

0xbe64,	// (0x00065183) main_cam5_pane_t7

0xbe76,	// (0x00065195) main_cam5_pane_t8_ParamLimits

0xbe76,	// (0x00065195) main_cam5_pane_t8

0xbe94,	// (0x000651b3) main_cam5_pane_t9_ParamLimits

0xbe94,	// (0x000651b3) main_cam5_pane_t9

0xbea6,	// (0x000651c5) main_cam5_pane_t10_ParamLimits

0xbea6,	// (0x000651c5) main_cam5_pane_t10

0xbeb8,	// (0x000651d7) main_cam5_pane_t11_ParamLimits

0xbeb8,	// (0x000651d7) main_cam5_pane_t11

0xbecc,	// (0x000651eb) main_cam5_pane_t12_ParamLimits

0xbecc,	// (0x000651eb) main_cam5_pane_t12

0xbee3,	// (0x00065202) main_cam5_pane_t13_ParamLimits

0xbee3,	// (0x00065202) main_cam5_pane_t13

0x000c,

0xf8d0,	// (0x00068bef) main_cam5_pane_t_ParamLimits

0xf8d0,	// (0x00068bef) main_cam5_pane_t

0x1046,	// (0x0005a365) popup_scut_keymap_window_ParamLimits

0x1046,	// (0x0005a365) popup_scut_keymap_window

0x6f0e,	// (0x0006022d) aid_size_cell_brow_shortcut

0xa594,	// (0x000638b3) bg_popup_window_pane_cp010

0x6f1a,	// (0x00060239) grid_scut_pane

0x6f26,	// (0x00060245) cell_scut_pane_ParamLimits

0x6f26,	// (0x00060245) cell_scut_pane

0x6f3f,	// (0x0006025e) cell_scut_pane_g1

0xbf06,	// (0x00065225) cell_scut_pane_t1

0xbf15,	// (0x00065234) cell_scut_pane_t2

0x6f48,	// (0x00060267) cell_scut_pane_t3

0x0002,

0xf8eb,	// (0x00068c0a) cell_scut_pane_t

0x4a5e,	// (0x0005dd7d) main_mup3_pane_g8_ParamLimits

0x4a5e,	// (0x0005dd7d) main_mup3_pane_g8

0x60cd,	// (0x0005f3ec) area_vitu2_query_pane_ParamLimits

0x60cd,	// (0x0005f3ec) area_vitu2_query_pane

0x6c7b,	// (0x0005ff9a) input_focus_pane_cp08

0xbf24,	// (0x00065243) area_vitu2_query_pane_g1

0x6f56,	// (0x00060275) area_vitu2_query_pane_g2

0x0001,

0xf8f2,	// (0x00068c11) area_vitu2_query_pane_g

0x6f6b,	// (0x0006028a) area_vitu2_query_pane_t1_ParamLimits

0x6f6b,	// (0x0006028a) area_vitu2_query_pane_t1

0x6f7f,	// (0x0006029e) area_vitu2_query_pane_t2_ParamLimits

0x6f7f,	// (0x0006029e) area_vitu2_query_pane_t2

0x6f93,	// (0x000602b2) area_vitu2_query_pane_t3_ParamLimits

0x6f93,	// (0x000602b2) area_vitu2_query_pane_t3

0xbf30,	// (0x0006524f) area_vitu2_query_pane_t4_ParamLimits

0xbf30,	// (0x0006524f) area_vitu2_query_pane_t4

0xbf58,	// (0x00065277) area_vitu2_query_pane_t5_ParamLimits

0xbf58,	// (0x00065277) area_vitu2_query_pane_t5

0xbf80,	// (0x0006529f) area_vitu2_query_pane_t6_ParamLimits

0xbf80,	// (0x0006529f) area_vitu2_query_pane_t6

0x0006,

0xf8f7,	// (0x00068c16) area_vitu2_query_pane_t_ParamLimits

0xf8f7,	// (0x00068c16) area_vitu2_query_pane_t

0x6fbf,	// (0x000602de) bg_button_pane_cp018

0x6fcd,	// (0x000602ec) bg_button_pane_cp021

0x6fd9,	// (0x000602f8) bg_button_pane_cp022

0x6fea,	// (0x00060309) input_focus_pane_cp09

0x30f7,	// (0x0005c416) aid_size_touch_mv_arrow_left

0x3120,	// (0x0005c43f) aid_size_touch_mv_arrow_right

0x6758,	// (0x0005fa77) main_cset_slider_pane_g16_ParamLimits

0x6758,	// (0x0005fa77) main_cset_slider_pane_g16

0x6766,	// (0x0005fa85) main_cset_slider_pane_g17_ParamLimits

0x6766,	// (0x0005fa85) main_cset_slider_pane_g17

0x6efb,	// (0x0006021a) cell_cam4_burst_pane_g1_ParamLimits

0x9b2c,	// (0x00062e4b) compa_mode_pane

0x698a,	// (0x0005fca9) popup_vtel_slider_window_g3_ParamLimits

0x698a,	// (0x0005fca9) popup_vtel_slider_window_g3

0x69a1,	// (0x0005fcc0) popup_vtel_slider_window_g4_ParamLimits

0x69a1,	// (0x0005fcc0) popup_vtel_slider_window_g4

0x69b8,	// (0x0005fcd7) popup_vtel_slider_window_t1_ParamLimits

0x69b8,	// (0x0005fcd7) popup_vtel_slider_window_t1

0x9bb7,	// (0x00062ed6) main_cl_pane

0xb973,	// (0x00064c92) popup_imed_adjust2_window_ParamLimits

0xb086,	// (0x000643a5) bg_tb_trans_pane_cp05_ParamLimits

0xf032,	// (0x00068351) popup_imed_adjust2_window_g1_ParamLimits

0xf041,	// (0x00068360) popup_imed_adjust2_window_g2_ParamLimits

0xf041,	// (0x00068360) popup_imed_adjust2_window_g2

0xf04d,	// (0x0006836c) popup_imed_adjust2_window_g3_ParamLimits

0xf04d,	// (0x0006836c) popup_imed_adjust2_window_g3

0x0002,

0xf66d,	// (0x0006898c) popup_imed_adjust2_window_g_ParamLimits

0xf66d,	// (0x0006898c) popup_imed_adjust2_window_g

0xf059,	// (0x00068378) popup_imed_adjust2_window_t1_ParamLimits

0xf071,	// (0x00068390) slider_imed_adjust_pane_ParamLimits

0x5337,	// (0x0005e656) slider_imed_adjust_pane_g1_ParamLimits

0x5347,	// (0x0005e666) slider_imed_adjust_pane_g2_ParamLimits

0x5357,	// (0x0005e676) slider_imed_adjust_pane_g3_ParamLimits

0x5368,	// (0x0005e687) slider_imed_adjust_pane_g4_ParamLimits

0xf674,	// (0x00068993) slider_imed_adjust_pane_g_ParamLimits

0x5e4c,	// (0x0005f16b) aid_touch_area_cam4_ParamLimits

0x5e4c,	// (0x0005f16b) aid_touch_area_cam4

0xdb4d,	// (0x00066e6c) battery_pane_cp01

0x5f1f,	// (0x0005f23e) main_camera4_pane_g6_ParamLimits

0x5f1f,	// (0x0005f23e) main_camera4_pane_g6

0x5f49,	// (0x0005f268) main_camera4_pane_t2_ParamLimits

0x5f49,	// (0x0005f268) main_camera4_pane_t2

0x0001,

0xf776,	// (0x00068a95) main_camera4_pane_t_ParamLimits

0xf776,	// (0x00068a95) main_camera4_pane_t

0x5f92,	// (0x0005f2b1) aid_touch_area_vid4_ParamLimits

0x5f92,	// (0x0005f2b1) aid_touch_area_vid4

0x5fe9,	// (0x0005f308) main_video4_pane_g5_ParamLimits

0x5fe9,	// (0x0005f308) main_video4_pane_g5

0x600f,	// (0x0005f32e) vid4_progress_pane_ParamLimits

0x600f,	// (0x0005f32e) vid4_progress_pane

0xbc08,	// (0x00064f27) main_cset_slider_pane_g18_ParamLimits

0xbc08,	// (0x00064f27) main_cset_slider_pane_g18

0xbde2,	// (0x00065101) cell_cam4_burst_pane_g2_ParamLimits

0xbde2,	// (0x00065101) cell_cam4_burst_pane_g2

0x0001,

0xf8cb,	// (0x00068bea) cell_cam4_burst_pane_g_ParamLimits

0xf8cb,	// (0x00068bea) cell_cam4_burst_pane_g

0xa381,	// (0x000636a0) bg_cl_pane_ParamLimits

0xa381,	// (0x000636a0) bg_cl_pane

0x6ffb,	// (0x0006031a) cl_header_pane_ParamLimits

0x6ffb,	// (0x0006031a) cl_header_pane

0x700f,	// (0x0006032e) cl_listscroll_pane_ParamLimits

0x700f,	// (0x0006032e) cl_listscroll_pane

0xbfcc,	// (0x000652eb) bg_cl_pane_g1

0xbfd4,	// (0x000652f3) bg_cl_pane_g2

0xbfdc,	// (0x000652fb) bg_cl_pane_g3

0xbfe4,	// (0x00065303) bg_cl_pane_g4

0xbfec,	// (0x0006530b) bg_cl_pane_g5

0xbff4,	// (0x00065313) bg_cl_pane_g6

0xbffc,	// (0x0006531b) bg_cl_pane_g7

0xc004,	// (0x00065323) bg_cl_pane_g8

0xc00c,	// (0x0006532b) bg_cl_pane_g9

0x0008,

0xf906,	// (0x00068c25) bg_cl_pane_g

0x701f,	// (0x0006033e) aid_height_cl_leading_ParamLimits

0x701f,	// (0x0006033e) aid_height_cl_leading

0x702b,	// (0x0006034a) aid_height_cl_text_ParamLimits

0x702b,	// (0x0006034a) aid_height_cl_text

0xa286,	// (0x000635a5) bg_cl_header_pane_ParamLimits

0xa286,	// (0x000635a5) bg_cl_header_pane

0x704a,	// (0x00060369) cl_header_pane_g1_ParamLimits

0x704a,	// (0x00060369) cl_header_pane_g1

0x7060,	// (0x0006037f) cl_header_pane_t1_ParamLimits

0x7060,	// (0x0006037f) cl_header_pane_t1

0xc014,	// (0x00065333) cl_list_pane

0xbbdb,	// (0x00064efa) hc_scroll_pane_cp01

0xa7de,	// (0x00063afd) bg_cl_header_pane_g1

0xbabd,	// (0x00064ddc) bg_cl_header_pane_g2

0xa7fe,	// (0x00063b1d) bg_cl_header_pane_g3

0xbacd,	// (0x00064dec) bg_cl_header_pane_g4

0xbac5,	// (0x00064de4) bg_cl_header_pane_g5

0xbcf1,	// (0x00065010) bg_cl_header_pane_g6

0xbae5,	// (0x00064e04) bg_cl_header_pane_g7

0xbaed,	// (0x00064e0c) bg_cl_header_pane_g8

0xbadd,	// (0x00064dfc) bg_cl_header_pane_g9

0x0008,

0xf919,	// (0x00068c38) bg_cl_header_pane_g

0x7079,	// (0x00060398) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7079,	// (0x00060398) hc_cl_list_double_graphic_heading_pane

0x708c,	// (0x000603ab) hc_cl_list_single_graphic_pane_ParamLimits

0x708c,	// (0x000603ab) hc_cl_list_single_graphic_pane

0x70a4,	// (0x000603c3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x70a4,	// (0x000603c3) hc_cl_list_single_graphic_pane_g1

0x70b0,	// (0x000603cf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x70b0,	// (0x000603cf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf92c,	// (0x00068c4b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf92c,	// (0x00068c4b) hc_cl_list_single_graphic_pane_g

0x70c4,	// (0x000603e3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x70c4,	// (0x000603e3) hc_cl_list_single_graphic_pane_t1

0x70a4,	// (0x000603c3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x70a4,	// (0x000603c3) hc_cl_list_double_graphic_heading_pane_g1

0x70d9,	// (0x000603f8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x70d9,	// (0x000603f8) hc_cl_list_double_graphic_heading_pane_g2

0x70ed,	// (0x0006040c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x70ed,	// (0x0006040c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf931,	// (0x00068c50) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf931,	// (0x00068c50) hc_cl_list_double_graphic_heading_pane_g

0x7101,	// (0x00060420) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7101,	// (0x00060420) hc_cl_list_double_graphic_heading_pane_t1

0x7116,	// (0x00060435) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7116,	// (0x00060435) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf938,	// (0x00068c57) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf938,	// (0x00068c57) hc_cl_list_double_graphic_heading_pane_t

0xdc9b,	// (0x00066fba) vid4_progress_pane_g1

0xdcab,	// (0x00066fca) vid4_progress_pane_g2

0xdcbb,	// (0x00066fda) vid4_progress_pane_g3

0xdccd,	// (0x00066fec) vid4_progress_pane_g4

0x0004,

0xf93d,	// (0x00068c5c) vid4_progress_pane_g

0xdceb,	// (0x0006700a) vid4_progress_pane_t1

0xdd05,	// (0x00067024) vid4_progress_pane_t2

0x0002,

0xf948,	// (0x00068c67) vid4_progress_pane_t

0x712b,	// (0x0006044a) wait_bar_pane_cp07

0xe97b,	// (0x00067c9a) blid_firmament_pane_ParamLimits

0xe9be,	// (0x00067cdd) popup_blid_sat_info2_window_g1

0xe9e2,	// (0x00067d01) popup_blid_sat_info2_window_t3

0xe9f0,	// (0x00067d0f) popup_blid_sat_info2_window_t4

0xe9fe,	// (0x00067d1d) popup_blid_sat_info2_window_t5

0xea0c,	// (0x00067d2b) popup_blid_sat_info2_window_t6

0xea1c,	// (0x00067d3b) popup_blid_sat_info2_window_t7

0xea2a,	// (0x00067d49) popup_blid_sat_info2_window_t8

0xea38,	// (0x00067d57) popup_blid_sat_info2_window_t9

0xea46,	// (0x00067d65) popup_blid_sat_info2_window_t10

0xeb0d,	// (0x00067e2c) aid_firma_cardinal_ParamLimits

0xeb21,	// (0x00067e40) blid_firmament_pane_t1_ParamLimits

0xeb38,	// (0x00067e57) blid_firmament_pane_t2_ParamLimits

0xeb4f,	// (0x00067e6e) blid_firmament_pane_t3_ParamLimits

0xeb66,	// (0x00067e85) blid_firmament_pane_t4_ParamLimits

0x051a,	// (0x00059839) blid_firmament_pane_t_ParamLimits

0xeb7d,	// (0x00067e9c) blid_sat_info_pane_ParamLimits

0x9ba9,	// (0x00062ec8) main_cam_set_pane_ParamLimits

0x5267,	// (0x0005e586) aid_size_cell_colour_35_ParamLimits

0x5287,	// (0x0005e5a6) aid_size_cell_colour_112_ParamLimits

0x52a7,	// (0x0005e5c6) aid_size_cell_effect_ParamLimits

0xb086,	// (0x000643a5) bg_tb_trans_pane_cp02_ParamLimits

0xaa74,	// (0x00063d93) heading_imed_pane_ParamLimits

0x52c7,	// (0x0005e5e6) listscroll_imed_pane_ParamLimits

0xde57,	// (0x00067176) popup_call2_audio_first_window_g5_ParamLimits

0xde57,	// (0x00067176) popup_call2_audio_first_window_g5

0x5a2b,	// (0x0005ed4a) aid_size_touch_image3_arrow_left_ParamLimits

0x5a2b,	// (0x0005ed4a) aid_size_touch_image3_arrow_left

0x5a57,	// (0x0005ed76) aid_size_touch_image3_arrow_right_ParamLimits

0x5a57,	// (0x0005ed76) aid_size_touch_image3_arrow_right

0xdd1a,	// (0x00067039) vid4_progress_pane_t3

0x565e,	// (0x0005e97d) main_hwr_training_symbol_option_pane_ParamLimits

0x565e,	// (0x0005e97d) main_hwr_training_symbol_option_pane

0x567e,	// (0x0005e99d) popup_hwr_training_preview_window_ParamLimits

0x567e,	// (0x0005e99d) popup_hwr_training_preview_window

0x56cb,	// (0x0005e9ea) hwr_training_navi_pane_g5_ParamLimits

0x56cb,	// (0x0005e9ea) hwr_training_navi_pane_g5

0xbaab,	// (0x00064dca) popup_char_count_window

0x9ba9,	// (0x00062ec8) bg_popup_sub_pane_cp20_ParamLimits

0x6aca,	// (0x0005fde9) list_vitu2_match_list_pane_ParamLimits

0x6ad6,	// (0x0005fdf5) vitu2_page_scroll_pane_ParamLimits

0x6ad6,	// (0x0005fdf5) vitu2_page_scroll_pane

0xc03f,	// (0x0006535e) list_single_hwr_training_symbol_option_pane_ParamLimits

0xc03f,	// (0x0006535e) list_single_hwr_training_symbol_option_pane

0xc052,	// (0x00065371) list_single_hwr_training_symbol_option_pane_g1

0xc05a,	// (0x00065379) list_single_hwr_training_symbol_option_pane_t1

0xc068,	// (0x00065387) bg_button_pane_cp023

0xc071,	// (0x00065390) bg_button_pane_cp024

0xc0a4,	// (0x000653c3) vitu2_page_scroll_pane_g1

0xc0ac,	// (0x000653cb) vitu2_page_scroll_pane_g2

0x0001,

0xf94f,	// (0x00068c6e) vitu2_page_scroll_pane_g

0xc0b4,	// (0x000653d3) vitu2_page_scroll_pane_t1

0xc0c3,	// (0x000653e2) popup_char_count_window_g1

0xc0cc,	// (0x000653eb) popup_char_count_window_g2

0xc0d5,	// (0x000653f4) popup_char_count_window_g3

0x0002,

0xf954,	// (0x00068c73) popup_char_count_window_g

0xc0de,	// (0x000653fd) popup_char_count_window_t1

0x9bb7,	// (0x00062ed6) main_vded2_pane

0xf01e,	// (0x0006833d) aid_size_cell_imed_line

0xf028,	// (0x00068347) grid_imed_line_width_pane

0xdc07,	// (0x00066f26) vid4_indicators_pane_g4

0xc0ec,	// (0x0006540b) cell_imed_line_width_pane_ParamLimits

0xc0ec,	// (0x0006540b) cell_imed_line_width_pane

0xc102,	// (0x00065421) cell_imed_line_width_pane_g1

0xc10b,	// (0x0006542a) cell_imed_line_width_pane_g2

0x0001,

0xf95b,	// (0x00068c7a) cell_imed_line_width_pane_g

0x7152,	// (0x00060471) main_vded2_pane_g1_ParamLimits

0x7152,	// (0x00060471) main_vded2_pane_g1

0x716d,	// (0x0006048c) main_vded2_pane_g2_ParamLimits

0x716d,	// (0x0006048c) main_vded2_pane_g2

0x0001,

0xf960,	// (0x00068c7f) main_vded2_pane_g_ParamLimits

0xf960,	// (0x00068c7f) main_vded2_pane_g

0x717f,	// (0x0006049e) vded2_slider_pane_ParamLimits

0x717f,	// (0x0006049e) vded2_slider_pane

0x718f,	// (0x000604ae) aid_size_touch_vded2_end

0x7199,	// (0x000604b8) aid_size_touch_vded2_playhead

0xc113,	// (0x00065432) aid_size_touch_vded2_start

0xc11b,	// (0x0006543a) vded2_slider_bg_pane

0xc124,	// (0x00065443) vded2_slider_pane_g1

0xc12d,	// (0x0006544c) vded2_slider_pane_g2

0x71a3,	// (0x000604c2) vded2_slider_pane_g3

0x0002,

0xf965,	// (0x00068c84) vded2_slider_pane_g

0xc135,	// (0x00065454) vded2_slider_bg_pane_g1

0xc13e,	// (0x0006545d) vded2_slider_bg_pane_g2

0xc147,	// (0x00065466) vded2_slider_bg_pane_g3

0x0002,

0xf96c,	// (0x00068c8b) vded2_slider_bg_pane_g

0x3611,	// (0x0005c930) aid_postcard_touch_down_pane_ParamLimits

0x3611,	// (0x0005c930) aid_postcard_touch_down_pane

0x3629,	// (0x0005c948) aid_postcard_touch_up_pane_ParamLimits

0x3629,	// (0x0005c948) aid_postcard_touch_up_pane

0x9bb7,	// (0x00062ed6) main_blid2_pane

0xb955,	// (0x00064c74) popup_blid2_search_window

0x9b2c,	// (0x00062e4b) blid2_gps_pane

0x9b2c,	// (0x00062e4b) blid2_navig_pane

0x9b2c,	// (0x00062e4b) blid2_search_pane

0x9b2c,	// (0x00062e4b) blid2_tripm_pane

0x71ae,	// (0x000604cd) blid2_search_pane_g1_ParamLimits

0x71ae,	// (0x000604cd) blid2_search_pane_g1

0x71c1,	// (0x000604e0) blid2_search_pane_t1_ParamLimits

0x71c1,	// (0x000604e0) blid2_search_pane_t1

0x71d3,	// (0x000604f2) aid_size_cell_blid2_gps_ParamLimits

0x71d3,	// (0x000604f2) aid_size_cell_blid2_gps

0x71eb,	// (0x0006050a) blid2_gps_pane_g1_ParamLimits

0x71eb,	// (0x0006050a) blid2_gps_pane_g1

0x71ff,	// (0x0006051e) grid_blid2_satellite_pane_ParamLimits

0x71ff,	// (0x0006051e) grid_blid2_satellite_pane

0x7217,	// (0x00060536) blid2_navig_pane_g1_ParamLimits

0x7217,	// (0x00060536) blid2_navig_pane_g1

0x7223,	// (0x00060542) blid2_navig_pane_t1_ParamLimits

0x7223,	// (0x00060542) blid2_navig_pane_t1

0x723e,	// (0x0006055d) blid2_navig_pane_t2_ParamLimits

0x723e,	// (0x0006055d) blid2_navig_pane_t2

0x0001,

0xf973,	// (0x00068c92) blid2_navig_pane_t_ParamLimits

0xf973,	// (0x00068c92) blid2_navig_pane_t

0x7259,	// (0x00060578) blid2_navig_ring_pane_ParamLimits

0x7259,	// (0x00060578) blid2_navig_ring_pane

0x7274,	// (0x00060593) blid2_speed_pane_ParamLimits

0x7274,	// (0x00060593) blid2_speed_pane

0x7280,	// (0x0006059f) blid2_tripm_pane_g1_ParamLimits

0x7280,	// (0x0006059f) blid2_tripm_pane_g1

0x729b,	// (0x000605ba) blid2_tripm_pane_g2_ParamLimits

0x729b,	// (0x000605ba) blid2_tripm_pane_g2

0x72af,	// (0x000605ce) blid2_tripm_pane_g3_ParamLimits

0x72af,	// (0x000605ce) blid2_tripm_pane_g3

0x72c3,	// (0x000605e2) blid2_tripm_pane_g4_ParamLimits

0x72c3,	// (0x000605e2) blid2_tripm_pane_g4

0x72d7,	// (0x000605f6) blid2_tripm_pane_g5_ParamLimits

0x72d7,	// (0x000605f6) blid2_tripm_pane_g5

0x0005,

0xf978,	// (0x00068c97) blid2_tripm_pane_g_ParamLimits

0xf978,	// (0x00068c97) blid2_tripm_pane_g

0x72fd,	// (0x0006061c) blid2_tripm_pane_t1_ParamLimits

0x72fd,	// (0x0006061c) blid2_tripm_pane_t1

0x7316,	// (0x00060635) blid2_tripm_pane_t2_ParamLimits

0x7316,	// (0x00060635) blid2_tripm_pane_t2

0x732f,	// (0x0006064e) blid2_tripm_pane_t3_ParamLimits

0x732f,	// (0x0006064e) blid2_tripm_pane_t3

0x0003,

0xf985,	// (0x00068ca4) blid2_tripm_pane_t_ParamLimits

0xf985,	// (0x00068ca4) blid2_tripm_pane_t

0x7376,	// (0x00060695) cell_blid2_satellite_pane_ParamLimits

0x7376,	// (0x00060695) cell_blid2_satellite_pane

0x7392,	// (0x000606b1) cell_blid2_satellite_pane_g1

0xc150,	// (0x0006546f) cell_blid2_satellite_pane_t1

0xa5e9,	// (0x00063908) blid2_speed_pane_g1

0xc15e,	// (0x0006547d) blid2_speed_pane_t1

0xc16c,	// (0x0006548b) blid2_speed_pane_t2

0x0001,

0xf98e,	// (0x00068cad) blid2_speed_pane_t

0xa5e9,	// (0x00063908) blid2_navig_ring_pane_g1

0x739b,	// (0x000606ba) blid2_navig_ring_pane_g2

0x73a3,	// (0x000606c2) blid2_navig_ring_pane_g3

0x73ab,	// (0x000606ca) blid2_navig_ring_pane_g4

0x73b3,	// (0x000606d2) blid2_navig_ring_pane_g5

0x0004,

0xf993,	// (0x00068cb2) blid2_navig_ring_pane_g

0x9b2c,	// (0x00062e4b) bg_popup_window_pane_cp011

0xc17a,	// (0x00065499) popup_blid2_search_window_g1

0xc182,	// (0x000654a1) popup_blid2_search_window_t1

0xc190,	// (0x000654af) popup_blid2_search_window_t2

0x0001,

0xf99e,	// (0x00068cbd) popup_blid2_search_window_t

0xa6ed,	// (0x00063a0c) main_browser_pane_g1

0xa381,	// (0x000636a0) main_browser_pane_ParamLimits

0x9ba9,	// (0x00062ec8) bg_button_pane_cp011_ParamLimits

0x631d,	// (0x0005f63c) cell_vitu2_function_pane_g1_ParamLimits

0xb086,	// (0x000643a5) bg_popup_sub_pane_cp22_ParamLimits

0x6c7b,	// (0x0005ff9a) input_focus_pane_cp08_ParamLimits

0x6c92,	// (0x0005ffb1) popup_vitu2_query_button_pane_ParamLimits

0x6c92,	// (0x0005ffb1) popup_vitu2_query_button_pane

0x6ca3,	// (0x0005ffc2) popup_vitu2_query_input_button_pane

0xbd2c,	// (0x0006504b) popup_vitu2_query_window_g1_ParamLimits

0x6cad,	// (0x0005ffcc) popup_vitu2_query_window_g2_ParamLimits

0xf89f,	// (0x00068bbe) popup_vitu2_query_window_g_ParamLimits

0x9b2c,	// (0x00062e4b) bg_button_pane_cp026

0x73bb,	// (0x000606da) popup_vitu2_query_input_button_pane_g1

0x9b2c,	// (0x00062e4b) bg_button_pane_cp025

0xc19e,	// (0x000654bd) popup_vitu2_query_button_pane_t1

0x4642,	// (0x0005d961) main_mp3_pane_t6

0x4650,	// (0x0005d96f) popup_slider_window_cp01

0xdb6b,	// (0x00066e8a) cam4_battery_pane

0xdbc0,	// (0x00066edf) cam4_battery_pane_cp02

0xdc93,	// (0x00066fb2) cam4_battery_pane_cp01

0xdc93,	// (0x00066fb2) cam4_battery_pane_cp03

0xe8f0,	// (0x00067c0f) cam4_battery_pane_g1

0xa5e9,	// (0x00063908) cam4_battery_pane_g2

0x0001,

0xf9a3,	// (0x00068cc2) cam4_battery_pane_g

0xea54,	// (0x00067d73) popup_blid_sat_info2_window_t11

0x30f7,	// (0x0005c416) aid_size_touch_mv_arrow_left_ParamLimits

0x3120,	// (0x0005c43f) aid_size_touch_mv_arrow_right_ParamLimits

0xaee7,	// (0x00064206) navi_pane_g1_ParamLimits

0x315f,	// (0x0005c47e) navi_pane_g2_ParamLimits

0x318d,	// (0x0005c4ac) navi_pane_g3_ParamLimits

0xf374,	// (0x00068693) navi_pane_g_ParamLimits

0x31e7,	// (0x0005c506) navi_pane_mv_t1_ParamLimits

0x52d3,	// (0x0005e5f2) grid_imed_effect_pane_ParamLimits

0x1caa,	// (0x0005afc9) aid_placing_vt_slider_lsc

0xa638,	// (0x00063957) aid_placing_vt_slider_prt

0xa286,	// (0x000635a5) bg_tb_trans_pane_cp01_ParamLimits

0xecbc,	// (0x00067fdb) popup_image_details_window_g1_ParamLimits

0xeccf,	// (0x00067fee) popup_image_details_window_g2_ParamLimits

0xece4,	// (0x00068003) popup_image_details_window_g3_ParamLimits

0xece4,	// (0x00068003) popup_image_details_window_g3

0x055a,	// (0x00059879) popup_image_details_window_g_ParamLimits

0xecf8,	// (0x00068017) popup_image_details_window_t1_ParamLimits

0xed0a,	// (0x00068029) popup_image_details_window_t2_ParamLimits

0xed23,	// (0x00068042) popup_image_details_window_t3_ParamLimits

0xed37,	// (0x00068056) popup_image_details_window_t4_ParamLimits

0xed52,	// (0x00068071) popup_image_details_window_t5_ParamLimits

0x0561,	// (0x00059880) popup_image_details_window_t_ParamLimits

0x7037,	// (0x00060356) cl_header_name_pane_ParamLimits

0x7037,	// (0x00060356) cl_header_name_pane

0x73c3,	// (0x000606e2) cl_header_name_pane_t1_ParamLimits

0x73c3,	// (0x000606e2) cl_header_name_pane_t1

0x73e4,	// (0x00060703) cl_header_name_pane_t2_ParamLimits

0x73e4,	// (0x00060703) cl_header_name_pane_t2

0x7426,	// (0x00060745) cl_header_name_pane_t3_ParamLimits

0x7426,	// (0x00060745) cl_header_name_pane_t3

0x0002,

0xf9a8,	// (0x00068cc7) cl_header_name_pane_t_ParamLimits

0xf9a8,	// (0x00068cc7) cl_header_name_pane_t

0x31b8,	// (0x0005c4d7) navi_pane_mv_g2_ParamLimits

0xba76,	// (0x00064d95) field_vitu2_entry_pane_g1_ParamLimits

0xba82,	// (0x00064da1) field_vitu2_entry_pane_g2_ParamLimits

0xb050,	// (0x0006436f) field_vitu2_entry_pane_g3_ParamLimits

0xb050,	// (0x0006436f) field_vitu2_entry_pane_g3

0xf7a8,	// (0x00068ac7) field_vitu2_entry_pane_g_ParamLimits

0x6299,	// (0x0005f5b8) cell_vitu2_itu_pane_g1_ParamLimits

0x62b1,	// (0x0005f5d0) cell_vitu2_itu_pane_g2_ParamLimits

0x62b1,	// (0x0005f5d0) cell_vitu2_itu_pane_g2

0x0001,

0xf7b4,	// (0x00068ad3) cell_vitu2_itu_pane_g_ParamLimits

0xf7b4,	// (0x00068ad3) cell_vitu2_itu_pane_g

0x9ba9,	// (0x00062ec8) bg_vkb2_func_pane_cp05_ParamLimits

0x9ba9,	// (0x00062ec8) bg_vkb2_func_pane_cp05

0x9ba9,	// (0x00062ec8) bg_vkb2_func_pane_cp03

0x9ba9,	// (0x00062ec8) bg_vkb2_func_pane_cp04

0x9ba9,	// (0x00062ec8) bg_vkb2_func_pane_cp10_ParamLimits

0x9ba9,	// (0x00062ec8) bg_vkb2_func_pane_cp10

0x6fd9,	// (0x000602f8) bg_vkb2_func_pane_cp08

0x6fbf,	// (0x000602de) bg_vkb2_func_pane_cp06

0x6fcd,	// (0x000602ec) bg_vkb2_func_pane_cp07

0xc07a,	// (0x00065399) bg_vkb2_func_pane_cp11_ParamLimits

0xc07a,	// (0x00065399) bg_vkb2_func_pane_cp11

0xc08f,	// (0x000653ae) bg_vkb2_func_pane_cp12_ParamLimits

0xc08f,	// (0x000653ae) bg_vkb2_func_pane_cp12

0x9b2c,	// (0x00062e4b) bg_vkb2_func_pane_cp09

0xbabd,	// (0x00064ddc) bg_vkb2_func_pane_g1

0xa7fe,	// (0x00063b1d) bg_vkb2_func_pane_g2

0xbac5,	// (0x00064de4) bg_vkb2_func_pane_g3

0xbacd,	// (0x00064dec) bg_vkb2_func_pane_g4

0xbcf1,	// (0x00065010) bg_vkb2_func_pane_g5

0xbae5,	// (0x00064e04) bg_vkb2_func_pane_g6

0xbaed,	// (0x00064e0c) bg_vkb2_func_pane_g7

0xbadd,	// (0x00064dfc) bg_vkb2_func_pane_g8

0xa7de,	// (0x00063afd) bg_vkb2_func_pane_g9

0x0008,

0xf9af,	// (0x00068cce) bg_vkb2_func_pane_g

0x72eb,	// (0x0006060a) blid2_tripm_pane_g6_ParamLimits

0x72eb,	// (0x0006060a) blid2_tripm_pane_g6

0x58a8,	// (0x0005ebc7) mp4_progress_pane_g1

0x7362,	// (0x00060681) blid2_tripm_values_pane_ParamLimits

0x7362,	// (0x00060681) blid2_tripm_values_pane

0x7457,	// (0x00060776) blid2_tripm_values_pane_t1

0x7465,	// (0x00060784) blid2_tripm_values_pane_t2

0x7473,	// (0x00060792) blid2_tripm_values_pane_t3

0x7481,	// (0x000607a0) blid2_tripm_values_pane_t4

0x748f,	// (0x000607ae) blid2_tripm_values_pane_t5

0x749d,	// (0x000607bc) blid2_tripm_values_pane_t6

0x74ab,	// (0x000607ca) blid2_tripm_values_pane_t7

0x74b9,	// (0x000607d8) blid2_tripm_values_pane_t8

0x74c7,	// (0x000607e6) blid2_tripm_values_pane_t9

0x0008,

0xf9c2,	// (0x00068ce1) blid2_tripm_values_pane_t

0x1ce7,	// (0x0005b006) call_video_pane_t1_ParamLimits

0x1d01,	// (0x0005b020) call_video_pane_t2_ParamLimits

0xf222,	// (0x00068541) call_video_pane_t_ParamLimits

0x350d,	// (0x0005c82c) msg_header_pane_g1_ParamLimits

0xb13d,	// (0x0006445c) msg_header_pane_g2_ParamLimits

0xb13d,	// (0x0006445c) msg_header_pane_g2

0x0001,

0xf417,	// (0x00068736) msg_header_pane_g_ParamLimits

0xf417,	// (0x00068736) msg_header_pane_g

0xa381,	// (0x000636a0) main_clock2_pane_ParamLimits

0x4fd0,	// (0x0005e2ef) grid_clock2_toolbar_pane_ParamLimits

0x4fd0,	// (0x0005e2ef) grid_clock2_toolbar_pane

0x4fd0,	// (0x0005e2ef) listscroll_clock2_pane_ParamLimits

0x4fd0,	// (0x0005e2ef) listscroll_clock2_pane

0x50af,	// (0x0005e3ce) main_clock2_pane_t3_ParamLimits

0x50af,	// (0x0005e3ce) main_clock2_pane_t3

0x50d2,	// (0x0005e3f1) main_clock2_pane_t4_ParamLimits

0x50d2,	// (0x0005e3f1) main_clock2_pane_t4

0xc1ac,	// (0x000654cb) cell_clock2_toolbar_pane

0xc1b4,	// (0x000654d3) cell_clock2_toolbar_pane_cp01

0xc1b4,	// (0x000654d3) cell_clock2_toolbar_pane_cp02

0xc1bc,	// (0x000654db) cell_clock2_toolbar_pane_cp03

0xc1c4,	// (0x000654e3) list_clock2_pane

0xae4d,	// (0x0006416c) scroll_pane_cp10

0xc1cc,	// (0x000654eb) list_single_clock2_pane_ParamLimits

0xc1cc,	// (0x000654eb) list_single_clock2_pane

0xa594,	// (0x000638b3) list_highlight_pane_cp08

0xc1d9,	// (0x000654f8) list_single_clock2_pane_t1

0xc1e7,	// (0x00065506) list_single_clock2_pane_t2

0x0001,

0xf9d5,	// (0x00068cf4) list_single_clock2_pane_t

0x9b2c,	// (0x00062e4b) bg_button_pane_cp10

0xc1f5,	// (0x00065514) cell_clock2_toolbar_pane_g1

0x359d,	// (0x0005c8bc) aid_main_viewer_pane_g1_ParamLimits

0x359d,	// (0x0005c8bc) aid_main_viewer_pane_g1

0x35ab,	// (0x0005c8ca) aid_main_viewer_pane_g2_ParamLimits

0x35ab,	// (0x0005c8ca) aid_main_viewer_pane_g2

0x35b9,	// (0x0005c8d8) aid_main_viewer_pane_g3_ParamLimits

0x35b9,	// (0x0005c8d8) aid_main_viewer_pane_g3

0x35c8,	// (0x0005c8e7) aid_main_viewer_pane_g4_ParamLimits

0x35c8,	// (0x0005c8e7) aid_main_viewer_pane_g4

0x0003,

0xf428,	// (0x00068747) aid_main_viewer_pane_g_ParamLimits

0xf428,	// (0x00068747) aid_main_viewer_pane_g

0x3f66,	// (0x0005d285) main_calc_pane_ParamLimits

0x3f8a,	// (0x0005d2a9) main_dialer2_pane_ParamLimits

0x9bb7,	// (0x00062ed6) main_cam6_pane

0x9bb7,	// (0x00062ed6) main_vid6_pane

0x4fdc,	// (0x0005e2fb) listscroll_gen_pane_cp06_ParamLimits

0x4fdc,	// (0x0005e2fb) listscroll_gen_pane_cp06

0x50f5,	// (0x0005e414) main_clock2_pane_t5_ParamLimits

0x50f5,	// (0x0005e414) main_clock2_pane_t5

0x5153,	// (0x0005e472) aid_call2_pane_cp10_ParamLimits

0x5165,	// (0x0005e484) aid_call_pane_cp10_ParamLimits

0xaebc,	// (0x000641db) popup_clock_analogue_window_cp10_g1_ParamLimits

0xaebc,	// (0x000641db) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5177,	// (0x0005e496) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5177,	// (0x0005e496) popup_clock_analogue_window_cp10_g4_ParamLimits

0xaebc,	// (0x000641db) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf662,	// (0x00068981) popup_clock_analogue_window_cp10_g_ParamLimits

0x518d,	// (0x0005e4ac) popup_clock_analogue_window_cp10_t1_ParamLimits

0x59d8,	// (0x0005ecf7) cell_dialer2_keypad_pane_g2_ParamLimits

0x59d8,	// (0x0005ecf7) cell_dialer2_keypad_pane_g2

0x0001,

0xf747,	// (0x00068a66) cell_dialer2_keypad_pane_g_ParamLimits

0xf747,	// (0x00068a66) cell_dialer2_keypad_pane_g

0x59f4,	// (0x0005ed13) cell_dialer2_keypad_pane_t1

0x6650,	// (0x0005f96f) main_cset_text2_pane_ParamLimits

0x6650,	// (0x0005f96f) main_cset_text2_pane

0xbf24,	// (0x00065243) area_vitu2_query_pane_g1_ParamLimits

0x6f56,	// (0x00060275) area_vitu2_query_pane_g2_ParamLimits

0xf8f2,	// (0x00068c11) area_vitu2_query_pane_g_ParamLimits

0xbfa8,	// (0x000652c7) area_vitu2_query_pane_t7_ParamLimits

0xbfa8,	// (0x000652c7) area_vitu2_query_pane_t7

0x6fbf,	// (0x000602de) bg_button_pane_cp018_ParamLimits

0x6fcd,	// (0x000602ec) bg_button_pane_cp021_ParamLimits

0x6fd9,	// (0x000602f8) bg_button_pane_cp022_ParamLimits

0x6fd9,	// (0x000602f8) bg_vkb2_func_pane_cp08_ParamLimits

0x6fbf,	// (0x000602de) bg_vkb2_func_pane_cp06_ParamLimits

0x6fcd,	// (0x000602ec) bg_vkb2_func_pane_cp07_ParamLimits

0x6fea,	// (0x00060309) input_focus_pane_cp09_ParamLimits

0xdd2f,	// (0x0006704e) cam6_autofocus_pane_ParamLimits

0xdd2f,	// (0x0006704e) cam6_autofocus_pane

0x74d5,	// (0x000607f4) cam6_image_uncrop_pane_ParamLimits

0x74d5,	// (0x000607f4) cam6_image_uncrop_pane

0x74e4,	// (0x00060803) cam6_indi_pane_ParamLimits

0x74e4,	// (0x00060803) cam6_indi_pane

0x74fa,	// (0x00060819) cam6_mode_pane_ParamLimits

0x74fa,	// (0x00060819) cam6_mode_pane

0x750c,	// (0x0006082b) cam6_timer_pane_ParamLimits

0x750c,	// (0x0006082b) cam6_timer_pane

0x7518,	// (0x00060837) cam6_zoom_pane_ParamLimits

0x7518,	// (0x00060837) cam6_zoom_pane

0x7526,	// (0x00060845) cam6_mode_pane_g1_ParamLimits

0x7526,	// (0x00060845) cam6_mode_pane_g1

0x7536,	// (0x00060855) cam6_mode_pane_g2_ParamLimits

0x7536,	// (0x00060855) cam6_mode_pane_g2

0x7546,	// (0x00060865) cam6_mode_pane_g3_ParamLimits

0x7546,	// (0x00060865) cam6_mode_pane_g3

0x7556,	// (0x00060875) cam6_mode_pane_g4_ParamLimits

0x7556,	// (0x00060875) cam6_mode_pane_g4

0x0003,

0xf9da,	// (0x00068cf9) cam6_mode_pane_g_ParamLimits

0xf9da,	// (0x00068cf9) cam6_mode_pane_g

0x7566,	// (0x00060885) bg_tb_trans_pane_cp08_ParamLimits

0x7566,	// (0x00060885) bg_tb_trans_pane_cp08

0xc1fd,	// (0x0006551c) cam6_battery_pane_ParamLimits

0xc1fd,	// (0x0006551c) cam6_battery_pane

0xc213,	// (0x00065532) cam6_indi_pane_g1_ParamLimits

0xc213,	// (0x00065532) cam6_indi_pane_g1

0xc225,	// (0x00065544) cam6_indi_pane_g2_ParamLimits

0xc225,	// (0x00065544) cam6_indi_pane_g2

0xc237,	// (0x00065556) cam6_indi_pane_g3_ParamLimits

0xc237,	// (0x00065556) cam6_indi_pane_g3

0x0002,

0xf9e3,	// (0x00068d02) cam6_indi_pane_g_ParamLimits

0xf9e3,	// (0x00068d02) cam6_indi_pane_g

0xc249,	// (0x00065568) cam6_indi_pane_t1_ParamLimits

0xc249,	// (0x00065568) cam6_indi_pane_t1

0x605c,	// (0x0005f37b) cam6_autofocus_pane_g1

0x6054,	// (0x0005f373) cam6_autofocus_pane_g2

0x606c,	// (0x0005f38b) cam6_autofocus_pane_g3

0x6064,	// (0x0005f383) cam6_autofocus_pane_g4

0x0003,

0xf9ea,	// (0x00068d09) cam6_autofocus_pane_g

0xc26f,	// (0x0006558e) cam6_timer_pane_g1

0xc277,	// (0x00065596) cam6_timer_pane_t1

0xc285,	// (0x000655a4) cam6_zoom_cont_pane

0xc28d,	// (0x000655ac) cam6_zoom_pane_g1

0xc295,	// (0x000655b4) cam6_zoom_pane_g2

0x7574,	// (0x00060893) cam6_zoom_pane_g3

0x0002,

0xf9f3,	// (0x00068d12) cam6_zoom_pane_g

0xa5e9,	// (0x00063908) cam6_battery_pane_g1

0xa5e9,	// (0x00063908) cam6_battery_pane_g2

0x0001,

0xf3d8,	// (0x000686f7) cam6_battery_pane_g

0xc29d,	// (0x000655bc) cam6_zoom_cont_pane_g1

0xc2a6,	// (0x000655c5) cam6_zoom_cont_pane_g2

0xc2af,	// (0x000655ce) cam6_zoom_cont_pane_g3

0x0002,

0xf9fa,	// (0x00068d19) cam6_zoom_cont_pane_g

0x7591,	// (0x000608b0) cam6_mode_pane_cp_ParamLimits

0x7591,	// (0x000608b0) cam6_mode_pane_cp

0x75a3,	// (0x000608c2) cam6_zoom_pane_cp_ParamLimits

0x75a3,	// (0x000608c2) cam6_zoom_pane_cp

0x75b1,	// (0x000608d0) vid6_image_uncrop_cif_pane_ParamLimits

0x75b1,	// (0x000608d0) vid6_image_uncrop_cif_pane

0x75c1,	// (0x000608e0) vid6_image_uncrop_nhd_pane_ParamLimits

0x75c1,	// (0x000608e0) vid6_image_uncrop_nhd_pane

0x75d0,	// (0x000608ef) vid6_image_uncrop_vga_pane_ParamLimits

0x75d0,	// (0x000608ef) vid6_image_uncrop_vga_pane

0x75df,	// (0x000608fe) vid6_image_uncrop_wvga_pane_ParamLimits

0x75df,	// (0x000608fe) vid6_image_uncrop_wvga_pane

0x75ee,	// (0x0006090d) vid6_indi_pane_ParamLimits

0x75ee,	// (0x0006090d) vid6_indi_pane

0x7566,	// (0x00060885) bg_tb_trans_pane_cp09_ParamLimits

0x7566,	// (0x00060885) bg_tb_trans_pane_cp09

0xc2c7,	// (0x000655e6) cam6_battery_pane_cp_ParamLimits

0xc2c7,	// (0x000655e6) cam6_battery_pane_cp

0xc2d3,	// (0x000655f2) vid6_indi_pane_g1_ParamLimits

0xc2d3,	// (0x000655f2) vid6_indi_pane_g1

0xc2e5,	// (0x00065604) vid6_indi_pane_g2_ParamLimits

0xc2e5,	// (0x00065604) vid6_indi_pane_g2

0xc2f7,	// (0x00065616) vid6_indi_pane_g3_ParamLimits

0xc2f7,	// (0x00065616) vid6_indi_pane_g3

0xc30e,	// (0x0006562d) vid6_indi_pane_g4_ParamLimits

0xc30e,	// (0x0006562d) vid6_indi_pane_g4

0xc325,	// (0x00065644) vid6_indi_pane_g5_ParamLimits

0xc325,	// (0x00065644) vid6_indi_pane_g5

0x0004,

0xfa01,	// (0x00068d20) vid6_indi_pane_g_ParamLimits

0xfa01,	// (0x00068d20) vid6_indi_pane_g

0xc33f,	// (0x0006565e) vid6_indi_pane_t1_ParamLimits

0xc33f,	// (0x0006565e) vid6_indi_pane_t1

0xc355,	// (0x00065674) vid6_indi_pane_t2_ParamLimits

0xc355,	// (0x00065674) vid6_indi_pane_t2

0xc37d,	// (0x0006569c) vid6_indi_pane_t3_ParamLimits

0xc37d,	// (0x0006569c) vid6_indi_pane_t3

0xc3a5,	// (0x000656c4) vid6_indi_pane_t4_ParamLimits

0xc3a5,	// (0x000656c4) vid6_indi_pane_t4

0x0003,

0xfa0c,	// (0x00068d2b) vid6_indi_pane_t_ParamLimits

0xfa0c,	// (0x00068d2b) vid6_indi_pane_t

0xc3c9,	// (0x000656e8) wait_bar_pane_cp08

0x7606,	// (0x00060925) main_cset_text2_pane_t1_ParamLimits

0x7606,	// (0x00060925) main_cset_text2_pane_t1

0x757c,	// (0x0006089b) listscroll_gen_pane_cp06_t1_ParamLimits

0x757c,	// (0x0006089b) listscroll_gen_pane_cp06_t1

0x9bb7,	// (0x00062ed6) main_cam6_set_pane

0xba51,	// (0x00064d70) bg_tb_trans_pane_cp06_ParamLimits

0xdb73,	// (0x00066e92) cam4_indicators_pane_g1_ParamLimits

0xdb84,	// (0x00066ea3) cam4_indicators_pane_g2_ParamLimits

0xf784,	// (0x00068aa3) cam4_indicators_pane_g_ParamLimits

0xdb9c,	// (0x00066ebb) cam4_indicators_pane_t1_ParamLimits

0x9ba9,	// (0x00062ec8) bg_tb_trans_pane_cp07_ParamLimits

0xdbca,	// (0x00066ee9) vid4_indicators_pane_g1_ParamLimits

0xdbe0,	// (0x00066eff) vid4_indicators_pane_g2_ParamLimits

0xdbf4,	// (0x00066f13) vid4_indicators_pane_g3_ParamLimits

0xdc07,	// (0x00066f26) vid4_indicators_pane_g4_ParamLimits

0xf796,	// (0x00068ab5) vid4_indicators_pane_g_ParamLimits

0xdc25,	// (0x00066f44) vid4_indicators_pane_t1_ParamLimits

0xdc9b,	// (0x00066fba) vid4_progress_pane_g1_ParamLimits

0xdcab,	// (0x00066fca) vid4_progress_pane_g2_ParamLimits

0xdcbb,	// (0x00066fda) vid4_progress_pane_g3_ParamLimits

0xdccd,	// (0x00066fec) vid4_progress_pane_g4_ParamLimits

0xf93d,	// (0x00068c5c) vid4_progress_pane_g_ParamLimits

0xdceb,	// (0x0006700a) vid4_progress_pane_t1_ParamLimits

0xdd05,	// (0x00067024) vid4_progress_pane_t2_ParamLimits

0xdd1a,	// (0x00067039) vid4_progress_pane_t3_ParamLimits

0xf948,	// (0x00068c67) vid4_progress_pane_t_ParamLimits

0x712b,	// (0x0006044a) wait_bar_pane_cp07_ParamLimits

0x7627,	// (0x00060946) main_cam6_set_pane_g2_ParamLimits

0x7627,	// (0x00060946) main_cam6_set_pane_g2

0x764d,	// (0x0006096c) main_cset6_listscroll_pane_ParamLimits

0x764d,	// (0x0006096c) main_cset6_listscroll_pane

0x766b,	// (0x0006098a) main_cset6_slider_pane_ParamLimits

0x766b,	// (0x0006098a) main_cset6_slider_pane

0x7681,	// (0x000609a0) main_cset6_text2_pane_ParamLimits

0x7681,	// (0x000609a0) main_cset6_text2_pane

0xc3d8,	// (0x000656f7) main_cset6_text_pane

0xc3e0,	// (0x000656ff) main_cset_list_pane_copy1_ParamLimits

0xc3e0,	// (0x000656ff) main_cset_list_pane_copy1

0xc3f0,	// (0x0006570f) scroll_pane_cp028_copy1

0x768f,	// (0x000609ae) cset_list_set_pane_copy1

0x76a3,	// (0x000609c2) aid_position_infowindow_above_copy1

0x76ab,	// (0x000609ca) aid_position_infowindow_below_copy1

0x76b3,	// (0x000609d2) cset_list_set_pane_g1_copy1

0x76bb,	// (0x000609da) cset_list_set_pane_g3_copy1_ParamLimits

0x76bb,	// (0x000609da) cset_list_set_pane_g3_copy1

0x76ca,	// (0x000609e9) cset_list_set_pane_t1_copy1_ParamLimits

0x76ca,	// (0x000609e9) cset_list_set_pane_t1_copy1

0xa286,	// (0x000635a5) list_highlight_pane_cp021_copy1_ParamLimits

0xa286,	// (0x000635a5) list_highlight_pane_cp021_copy1

0xc3f9,	// (0x00065718) cset6_slider_pane_ParamLimits

0xc3f9,	// (0x00065718) cset6_slider_pane

0xc425,	// (0x00065744) main_cset6_slider_pane_g1_ParamLimits

0xc425,	// (0x00065744) main_cset6_slider_pane_g1

0x76df,	// (0x000609fe) main_cset6_slider_pane_g2_ParamLimits

0x76df,	// (0x000609fe) main_cset6_slider_pane_g2

0xc44d,	// (0x0006576c) main_cset6_slider_pane_g3_ParamLimits

0xc44d,	// (0x0006576c) main_cset6_slider_pane_g3

0x7707,	// (0x00060a26) main_cset6_slider_pane_g4_ParamLimits

0x7707,	// (0x00060a26) main_cset6_slider_pane_g4

0x7713,	// (0x00060a32) main_cset6_slider_pane_g5_ParamLimits

0x7713,	// (0x00060a32) main_cset6_slider_pane_g5

0xbbf0,	// (0x00064f0f) main_cset6_slider_pane_g7_ParamLimits

0xbbf0,	// (0x00064f0f) main_cset6_slider_pane_g7

0xbbfc,	// (0x00064f1b) main_cset6_slider_pane_g8_ParamLimits

0xbbfc,	// (0x00064f1b) main_cset6_slider_pane_g8

0x66f8,	// (0x0005fa17) main_cset6_slider_pane_g9_ParamLimits

0x66f8,	// (0x0005fa17) main_cset6_slider_pane_g9

0x6704,	// (0x0005fa23) main_cset6_slider_pane_g10_ParamLimits

0x6704,	// (0x0005fa23) main_cset6_slider_pane_g10

0x6710,	// (0x0005fa2f) main_cset6_slider_pane_g11_ParamLimits

0x6710,	// (0x0005fa2f) main_cset6_slider_pane_g11

0x671c,	// (0x0005fa3b) main_cset6_slider_pane_g12_ParamLimits

0x671c,	// (0x0005fa3b) main_cset6_slider_pane_g12

0x6728,	// (0x0005fa47) main_cset6_slider_pane_g13_ParamLimits

0x6728,	// (0x0005fa47) main_cset6_slider_pane_g13

0x6734,	// (0x0005fa53) main_cset6_slider_pane_g14_ParamLimits

0x6734,	// (0x0005fa53) main_cset6_slider_pane_g14

0x7721,	// (0x00060a40) main_cset6_slider_pane_g15_ParamLimits

0x7721,	// (0x00060a40) main_cset6_slider_pane_g15

0x6758,	// (0x0005fa77) main_cset6_slider_pane_g16_ParamLimits

0x6758,	// (0x0005fa77) main_cset6_slider_pane_g16

0x6766,	// (0x0005fa85) main_cset6_slider_pane_g17_ParamLimits

0x6766,	// (0x0005fa85) main_cset6_slider_pane_g17

0x0011,

0xfa15,	// (0x00068d34) main_cset6_slider_pane_g_ParamLimits

0xfa15,	// (0x00068d34) main_cset6_slider_pane_g

0xc459,	// (0x00065778) main_cset6_slider_pane_t1_ParamLimits

0xc459,	// (0x00065778) main_cset6_slider_pane_t1

0x7751,	// (0x00060a70) main_cset6_slider_pane_t2_ParamLimits

0x7751,	// (0x00060a70) main_cset6_slider_pane_t2

0x777c,	// (0x00060a9b) main_cset6_slider_pane_t3_ParamLimits

0x777c,	// (0x00060a9b) main_cset6_slider_pane_t3

0x77a7,	// (0x00060ac6) main_cset6_slider_pane_t4_ParamLimits

0x77a7,	// (0x00060ac6) main_cset6_slider_pane_t4

0x77d4,	// (0x00060af3) main_cset6_slider_pane_t5_ParamLimits

0x77d4,	// (0x00060af3) main_cset6_slider_pane_t5

0xc49a,	// (0x000657b9) main_cset6_slider_pane_t7_ParamLimits

0xc49a,	// (0x000657b9) main_cset6_slider_pane_t7

0x7801,	// (0x00060b20) main_cset6_slider_pane_t8_ParamLimits

0x7801,	// (0x00060b20) main_cset6_slider_pane_t8

0x7825,	// (0x00060b44) main_cset6_slider_pane_t9_ParamLimits

0x7825,	// (0x00060b44) main_cset6_slider_pane_t9

0x7849,	// (0x00060b68) main_cset6_slider_pane_t10_ParamLimits

0x7849,	// (0x00060b68) main_cset6_slider_pane_t10

0x786d,	// (0x00060b8c) main_cset6_slider_pane_t11_ParamLimits

0x786d,	// (0x00060b8c) main_cset6_slider_pane_t11

0xc4d0,	// (0x000657ef) main_cset6_slider_pane_t14_ParamLimits

0xc4d0,	// (0x000657ef) main_cset6_slider_pane_t14

0xc509,	// (0x00065828) main_cset6_slider_pane_t15_ParamLimits

0xc509,	// (0x00065828) main_cset6_slider_pane_t15

0x000b,

0xfa3a,	// (0x00068d59) main_cset6_slider_pane_t_ParamLimits

0xfa3a,	// (0x00068d59) main_cset6_slider_pane_t

0xc542,	// (0x00065861) cset_slider_pane_g1_copy1

0xc54b,	// (0x0006586a) cset_slider_pane_g2_copy1

0xc554,	// (0x00065873) cset_slider_pane_g3_copy1

0x9b2c,	// (0x00062e4b) bg_popup_sub_pane_cp011_copy1

0xc566,	// (0x00065885) main_cset_text_pane_g1_copy1

0xbd40,	// (0x0006505f) main_cset_text_pane_t1_copy1

0xbd4e,	// (0x0006506d) main_cset_text_pane_t2_copy1

0xbd5c,	// (0x0006507b) main_cset_text_pane_t3_copy1

0xbd6a,	// (0x00065089) main_cset_text_pane_t4_copy1

0xbd78,	// (0x00065097) main_cset_text_pane_t5_copy1

0xc56e,	// (0x0006588d) main_cset_text_pane_t6_copy1

0xc57c,	// (0x0006589b) main_cset_text_pane_t7_copy1

0x7606,	// (0x00060925) main_cset_text2_pane_t1_copy1

0x9ba9,	// (0x00062ec8) main_ncimui_pane

0x4224,	// (0x0005d543) popup_query_ncimui_window_ParamLimits

0x4224,	// (0x0005d543) popup_query_ncimui_window

0x47ee,	// (0x0005db0d) field_cale_ev2_pane_g4_ParamLimits

0x47ee,	// (0x0005db0d) field_cale_ev2_pane_g4

0x5812,	// (0x0005eb31) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5812,	// (0x0005eb31) cell_video_dialer_keypad_pane_g2

0x0001,

0xf71e,	// (0x00068a3d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf71e,	// (0x00068a3d) cell_video_dialer_keypad_pane_g

0x582a,	// (0x0005eb49) cell_video_dialer_keypad_pane_t1

0x9b2c,	// (0x00062e4b) bg_popup_window_pane_cp012

0xe6aa,	// (0x000679c9) heading_pane_cp06

0xc5a8,	// (0x000658c7) ncim_query_content_pane

0x9b2c,	// (0x00062e4b) bg_popup_heading_pane_cp01

0xc5b0,	// (0x000658cf) ncim_heading_pane_t1

0xc5be,	// (0x000658dd) ncim_indicator_popup_pane

0xc5d0,	// (0x000658ef) ncim_query_button_pane

0xc5e6,	// (0x00065905) ncim_query_content_pane_t1

0xc5f8,	// (0x00065917) ncim_query_content_pane_t2

0x0005,

0xfa7e,	// (0x00068d9d) ncim_query_content_pane_t

0xc632,	// (0x00065951) ncim_query_list_pane

0xc644,	// (0x00065963) ncim_query_popup_pane

0xc5be,	// (0x000658dd) ncim_indicator_popup_pane_ParamLimits

0x79d9,	// (0x00060cf8) ncim_query_content_pane_g1_ParamLimits

0x79d9,	// (0x00060cf8) ncim_query_content_pane_g1

0xc5e6,	// (0x00065905) ncim_query_content_pane_t1_ParamLimits

0xc5f8,	// (0x00065917) ncim_query_content_pane_t2_ParamLimits

0x79e5,	// (0x00060d04) ncim_query_content_pane_t3_ParamLimits

0x79e5,	// (0x00060d04) ncim_query_content_pane_t3

0x7a0d,	// (0x00060d2c) ncim_query_content_pane_t4_ParamLimits

0x7a0d,	// (0x00060d2c) ncim_query_content_pane_t4

0x7a35,	// (0x00060d54) ncim_query_content_pane_t5_ParamLimits

0x7a35,	// (0x00060d54) ncim_query_content_pane_t5

0xc60a,	// (0x00065929) ncim_query_content_pane_t6_ParamLimits

0xc60a,	// (0x00065929) ncim_query_content_pane_t6

0xfa7e,	// (0x00068d9d) ncim_query_content_pane_t_ParamLimits

0xc632,	// (0x00065951) ncim_query_list_pane_ParamLimits

0xc644,	// (0x00065963) ncim_query_popup_pane_ParamLimits

0xc658,	// (0x00065977) wait_bar_pane_cp04

0x9b2c,	// (0x00062e4b) input_focus_pane_cp011

0xc660,	// (0x0006597f) ncim_query_popup_pane_t1

0xc66e,	// (0x0006598d) ncim_list_query_list_pane_ParamLimits

0xc66e,	// (0x0006598d) ncim_list_query_list_pane

0x9b2c,	// (0x00062e4b) bg_button_pane_cp027

0xc681,	// (0x000659a0) ncim_query_button_pane_g1

0x9b2c,	// (0x00062e4b) list_highlight_pane_cp012

0xc68b,	// (0x000659aa) ncim_list_query_list_pane_g1

0xc693,	// (0x000659b2) ncim_list_query_list_pane_t1

0xdb90,	// (0x00066eaf) cam4_indicators_pane_g3_ParamLimits

0xdb90,	// (0x00066eaf) cam4_indicators_pane_g3

0xdc13,	// (0x00066f32) vid4_indicators_pane_g5_ParamLimits

0xdc13,	// (0x00066f32) vid4_indicators_pane_g5

0xdcdc,	// (0x00066ffb) vid4_progress_pane_g5_ParamLimits

0xdcdc,	// (0x00066ffb) vid4_progress_pane_g5

0x78c4,	// (0x00060be3) main_ncimui_pane_g1

0x792d,	// (0x00060c4c) ncimui_group_query_pane_ParamLimits

0x792d,	// (0x00060c4c) ncimui_group_query_pane

0x7975,	// (0x00060c94) ncimui_list_pane_ParamLimits

0x7975,	// (0x00060c94) ncimui_list_pane

0x799c,	// (0x00060cbb) ncimui_text_pane_ParamLimits

0x799c,	// (0x00060cbb) ncimui_text_pane

0x7a5d,	// (0x00060d7c) ncimui_text_pane_t1_ParamLimits

0x7a5d,	// (0x00060d7c) ncimui_text_pane_t1

0xc6a1,	// (0x000659c0) ncimui_list_single_graphic_pane_ParamLimits

0xc6a1,	// (0x000659c0) ncimui_list_single_graphic_pane

0x7a7b,	// (0x00060d9a) ncimui_query_pane_ParamLimits

0x7a7b,	// (0x00060d9a) ncimui_query_pane

0x9b2c,	// (0x00062e4b) list_highlight_pane_cp013

0xc6b1,	// (0x000659d0) ncim_list_query_list_pane_t1_copy1

0xc68b,	// (0x000659aa) ncim_list_single_graphic_pane_g1

0x7a8e,	// (0x00060dad) ncim_query_button_pane_cp01

0x7a9a,	// (0x00060db9) ncim_query_entry_pane_ParamLimits

0x7a9a,	// (0x00060db9) ncim_query_entry_pane

0x7aad,	// (0x00060dcc) ncimui_query_pane_g1

0x7ab9,	// (0x00060dd8) ncimui_query_pane_t1_ParamLimits

0x7ab9,	// (0x00060dd8) ncimui_query_pane_t1

0xa286,	// (0x000635a5) input_focus_pane_cp012

0xc6bf,	// (0x000659de) ncim_query_entry_pane_t1

0xa381,	// (0x000636a0) main_im_pane_ParamLimits

0x9ba9,	// (0x00062ec8) main_mobtv_pane_ParamLimits

0x9ba9,	// (0x00062ec8) main_mobtv_pane

0x7739,	// (0x00060a58) main_cset6_slider_pane_g18_ParamLimits

0x7739,	// (0x00060a58) main_cset6_slider_pane_g18

0x7745,	// (0x00060a64) main_cset6_slider_pane_g19_ParamLimits

0x7745,	// (0x00060a64) main_cset6_slider_pane_g19

0xa309,	// (0x00063628) bg_main_mobtv_pane_ParamLimits

0xa309,	// (0x00063628) bg_main_mobtv_pane

0x7ad2,	// (0x00060df1) main_mobtv_info_pane

0x7add,	// (0x00060dfc) main_mobtv_loading_pane_ParamLimits

0x7add,	// (0x00060dfc) main_mobtv_loading_pane

0xc6d1,	// (0x000659f0) main_mobtv_pg_channel_list_pane

0xc6db,	// (0x000659fa) main_mobtv_pg_hdr_pane

0x7aea,	// (0x00060e09) main_mobtv_programe_curr_pane_ParamLimits

0x7aea,	// (0x00060e09) main_mobtv_programe_curr_pane

0x7af7,	// (0x00060e16) main_mobtv_programe_next_pane_ParamLimits

0x7af7,	// (0x00060e16) main_mobtv_programe_next_pane

0xc6e4,	// (0x00065a03) popup_mobtv_noti_window

0xa5e9,	// (0x00063908) main_tv_pg_hdr_pane_g1

0xc6ee,	// (0x00065a0d) main_tv_pg_hdr_pane_g2

0xc6f6,	// (0x00065a15) main_tv_pg_hdr_pane_g3

0xc6fe,	// (0x00065a1d) main_tv_pg_hdr_pane_g4

0xc706,	// (0x00065a25) main_tv_pg_hdr_pane_g5

0xc710,	// (0x00065a2f) main_tv_pg_hdr_pane_g6

0xc71a,	// (0x00065a39) main_tv_pg_hdr_pane_g7

0xc724,	// (0x00065a43) main_tv_pg_hdr_pane_g8

0xc72e,	// (0x00065a4d) main_tv_pg_hdr_pane_g9

0xc738,	// (0x00065a57) main_tv_pg_hdr_pane_g10

0xc742,	// (0x00065a61) main_tv_pg_hdr_pane_g11

0x000a,

0xfa8b,	// (0x00068daa) main_tv_pg_hdr_pane_g

0xc74c,	// (0x00065a6b) main_tv_pg_hdr_pane_t1

0xc75a,	// (0x00065a79) main_tv_pg_hdr_pane_t2

0xc768,	// (0x00065a87) main_tv_pg_hdr_pane_t3

0xc778,	// (0x00065a97) main_tv_pg_hdr_pane_t4

0xc788,	// (0x00065aa7) main_tv_pg_hdr_pane_t5

0x0004,

0xfaa2,	// (0x00068dc1) main_tv_pg_hdr_pane_t

0xc798,	// (0x00065ab7) single_mobtv_pg_channel_pane_ParamLimits

0xc798,	// (0x00065ab7) single_mobtv_pg_channel_pane

0xc7aa,	// (0x00065ac9) single_mobtv_pg_channel_table_pane

0xc7b3,	// (0x00065ad2) single_mobtv_pg_channel_thumb_pane

0xc7bc,	// (0x00065adb) single_tv_pg_channel_pane_g1

0xc7c5,	// (0x00065ae4) single_tv_pg_channel_pane_g2

0x0001,

0xfaad,	// (0x00068dcc) single_tv_pg_channel_pane_g

0xa2ed,	// (0x0006360c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa2ed,	// (0x0006360c) bg_single_mobtv_pg_channel_thumb_pane

0xc7ce,	// (0x00065aed) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc7ce,	// (0x00065aed) single_mobtv_pg_channel_thumb_pane_g1

0xc7dc,	// (0x00065afb) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc7dc,	// (0x00065afb) single_mobtv_pg_channel_thumb_pane_g2

0xc7e8,	// (0x00065b07) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc7e8,	// (0x00065b07) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfab2,	// (0x00068dd1) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfab2,	// (0x00068dd1) single_mobtv_pg_channel_thumb_pane_g

0xc7f4,	// (0x00065b13) single_mobtv_pg_channel_thumb_pane_t1

0xc802,	// (0x00065b21) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfab9,	// (0x00068dd8) single_mobtv_pg_channel_thumb_pane_t

0xa5e9,	// (0x00063908) bg_single_mobtv_pg_channel_table_pane_g1

0xa5e9,	// (0x00063908) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3d8,	// (0x000686f7) bg_single_mobtv_pg_channel_table_pane_g

0xc810,	// (0x00065b2f) single_mobtv_pg_channel_table_pane_t1

0xc81e,	// (0x00065b3d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfabe,	// (0x00068ddd) single_mobtv_pg_channel_table_pane_t

0x7b0c,	// (0x00060e2b) main_mobtv_info_pane_g1_ParamLimits

0x7b0c,	// (0x00060e2b) main_mobtv_info_pane_g1

0x7b2a,	// (0x00060e49) main_mobtv_info_pane_t1_ParamLimits

0x7b2a,	// (0x00060e49) main_mobtv_info_pane_t1

0x7ba2,	// (0x00060ec1) main_mobtv_info_pane_t2_ParamLimits

0x7ba2,	// (0x00060ec1) main_mobtv_info_pane_t2

0x0002,

0xfac8,	// (0x00068de7) main_mobtv_info_pane_t_ParamLimits

0xfac8,	// (0x00068de7) main_mobtv_info_pane_t

0x7c33,	// (0x00060f52) wait_bar_pane_cp05

0x7c45,	// (0x00060f64) main_mobtv_loading_pane_g1_ParamLimits

0x7c45,	// (0x00060f64) main_mobtv_loading_pane_g1

0x7c56,	// (0x00060f75) main_mobtv_loading_pane_g2_ParamLimits

0x7c56,	// (0x00060f75) main_mobtv_loading_pane_g2

0x7c62,	// (0x00060f81) main_mobtv_loading_pane_g3_ParamLimits

0x7c62,	// (0x00060f81) main_mobtv_loading_pane_g3

0x0002,

0xfacf,	// (0x00068dee) main_mobtv_loading_pane_g_ParamLimits

0xfacf,	// (0x00068dee) main_mobtv_loading_pane_g

0xc82c,	// (0x00065b4b) main_mobtv_loading_pane_t1_ParamLimits

0xc82c,	// (0x00065b4b) main_mobtv_loading_pane_t1

0xc844,	// (0x00065b63) main_mobtv_loading_pane_t2_ParamLimits

0xc844,	// (0x00065b63) main_mobtv_loading_pane_t2

0x0001,

0xfad6,	// (0x00068df5) main_mobtv_loading_pane_t_ParamLimits

0xfad6,	// (0x00068df5) main_mobtv_loading_pane_t

0x7c75,	// (0x00060f94) wait_bar_pane_cp06_ParamLimits

0x7c75,	// (0x00060f94) wait_bar_pane_cp06

0xc868,	// (0x00065b87) main_mobtv_programe_curr_pane_t1

0xc876,	// (0x00065b95) main_mobtv_programe_curr_pane_t2

0x0001,

0xfadb,	// (0x00068dfa) main_mobtv_programe_curr_pane_t

0xc884,	// (0x00065ba3) main_mobtv_programe_next_pane_t1

0xc892,	// (0x00065bb1) main_mobtv_programe_next_pane_t2

0xc8a0,	// (0x00065bbf) main_mobtv_programe_next_pane_t3

0x0002,

0xfae0,	// (0x00068dff) main_mobtv_programe_next_pane_t

0x9b2c,	// (0x00062e4b) bg_popup_mobtv_noti_window_pane

0xc8ae,	// (0x00065bcd) popup_mobtv_noti_window_g1

0xc8b6,	// (0x00065bd5) popup_mobtv_noti_window_t1

0xc8c4,	// (0x00065be3) popup_mobtv_noti_window_t2

0x0001,

0xfae7,	// (0x00068e06) popup_mobtv_noti_window_t

0xa5e9,	// (0x00063908) bg_popup_mobtv_noti_window_pane_g1

0x9bb7,	// (0x00062ed6) sc_clock_pane

0x9bb7,	// (0x00062ed6) main_fs_bigclock_pane

0x734c,	// (0x0006066b) blid2_tripm_pane_t4_ParamLimits

0x734c,	// (0x0006066b) blid2_tripm_pane_t4

0x7c84,	// (0x00060fa3) sc_clock_pane_g1_ParamLimits

0x7c84,	// (0x00060fa3) sc_clock_pane_g1

0x7c96,	// (0x00060fb5) sc_clock_pane_t1_ParamLimits

0x7c96,	// (0x00060fb5) sc_clock_pane_t1

0x7cba,	// (0x00060fd9) sc_clock_pane_t2_ParamLimits

0x7cba,	// (0x00060fd9) sc_clock_pane_t2

0x7cd2,	// (0x00060ff1) sc_clock_pane_t3_ParamLimits

0x7cd2,	// (0x00060ff1) sc_clock_pane_t3

0x0004,

0xfaec,	// (0x00068e0b) sc_clock_pane_t_ParamLimits

0xfaec,	// (0x00068e0b) sc_clock_pane_t

0x8b80,	// (0x00061e9f) main_fs_bigclock_indicator_pane_ParamLimits

0x8b80,	// (0x00061e9f) main_fs_bigclock_indicator_pane

0x7d98,	// (0x000610b7) main_fs_bigclock_pane_g1_ParamLimits

0x7d98,	// (0x000610b7) main_fs_bigclock_pane_g1

0x8b8c,	// (0x00061eab) main_fs_bigclock_pane_t1_ParamLimits

0x8b8c,	// (0x00061eab) main_fs_bigclock_pane_t1

0x8b9e,	// (0x00061ebd) main_fs_bigclock_pane_t2_ParamLimits

0x8b9e,	// (0x00061ebd) main_fs_bigclock_pane_t2

0x8bb2,	// (0x00061ed1) main_fs_bigclock_pane_t3_ParamLimits

0x8bb2,	// (0x00061ed1) main_fs_bigclock_pane_t3

0x0002,

0xfc7d,	// (0x00068f9c) main_fs_bigclock_pane_t_ParamLimits

0xfc7d,	// (0x00068f9c) main_fs_bigclock_pane_t

0xd35d,	// (0x0006667c) main_fs_bigclock_indicator_pane_g1

0xc5d8,	// (0x000658f7) ncim_query_content_pane_g2_ParamLimits

0xc5d8,	// (0x000658f7) ncim_query_content_pane_g2

0x0001,

0xfa79,	// (0x00068d98) ncim_query_content_pane_g_ParamLimits

0xfa79,	// (0x00068d98) ncim_query_content_pane_g

0x7ce9,	// (0x00061008) sc_clock_pane_t4_ParamLimits

0x7ce9,	// (0x00061008) sc_clock_pane_t4

0x9ba9,	// (0x00062ec8) main_radioblah_pane

0xdb03,	// (0x00066e22) cell_call4_button_pane_t1_copy1_ParamLimits

0xdb03,	// (0x00066e22) cell_call4_button_pane_t1_copy1

0x78dc,	// (0x00060bfb) main_ncimui_pane_t1_ParamLimits

0x78dc,	// (0x00060bfb) main_ncimui_pane_t1

0x78f6,	// (0x00060c15) main_ncimui_pane_t2_ParamLimits

0x78f6,	// (0x00060c15) main_ncimui_pane_t2

0x0002,

0xfa72,	// (0x00068d91) main_ncimui_pane_t_ParamLimits

0xfa72,	// (0x00068d91) main_ncimui_pane_t

0xc8d2,	// (0x00065bf1) main_radioblah_anim_pane_ParamLimits

0xc8d2,	// (0x00065bf1) main_radioblah_anim_pane

0xc8e3,	// (0x00065c02) main_radioblah_info_pane_ParamLimits

0xc8e3,	// (0x00065c02) main_radioblah_info_pane

0xc8f7,	// (0x00065c16) main_radioblah_pane_t1_ParamLimits

0xc8f7,	// (0x00065c16) main_radioblah_pane_t1

0xc913,	// (0x00065c32) main_radioblah_pane_t2_ParamLimits

0xc913,	// (0x00065c32) main_radioblah_pane_t2

0x0003,

0xfb0d,	// (0x00068e2c) main_radioblah_pane_t_ParamLimits

0xfb0d,	// (0x00068e2c) main_radioblah_pane_t

0x7f41,	// (0x00061260) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7f41,	// (0x00061260) main_radioblah_rocker_ctrl_pane

0xc95b,	// (0x00065c7a) main_radioblah_info_pane_t1_ParamLimits

0xc95b,	// (0x00065c7a) main_radioblah_info_pane_t1

0x7f99,	// (0x000612b8) main_radioblah_info_pane_t2_ParamLimits

0x7f99,	// (0x000612b8) main_radioblah_info_pane_t2

0x0003,

0xfb16,	// (0x00068e35) main_radioblah_info_pane_t_ParamLimits

0xfb16,	// (0x00068e35) main_radioblah_info_pane_t

0xa5e9,	// (0x00063908) main_radioblah_rocker_ctrl_pane_g1

0x8049,	// (0x00061368) main_radioblah_rocker_ctrl_pane_g2

0x8051,	// (0x00061370) main_radioblah_rocker_ctrl_pane_g3

0x8059,	// (0x00061378) main_radioblah_rocker_ctrl_pane_g4

0x8061,	// (0x00061380) main_radioblah_rocker_ctrl_pane_g5

0x8069,	// (0x00061388) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb1f,	// (0x00068e3e) main_radioblah_rocker_ctrl_pane_g

0x7606,	// (0x00060925) main_cset_text2_pane_t1_copy1_ParamLimits

0xdb61,	// (0x00066e80) cam4_image_uncrop_qvga_pane

0xdbb6,	// (0x00066ed5) vid4_image_uncrop_qcif_pane

0xdd2f,	// (0x0006704e) cam6_image_uncrop_qvga_pane_ParamLimits

0xdd2f,	// (0x0006704e) cam6_image_uncrop_qvga_pane

0xc2b7,	// (0x000655d6) vid6_image_uncrop_qcif_pane_ParamLimits

0xc2b7,	// (0x000655d6) vid6_image_uncrop_qcif_pane

0x9b2c,	// (0x00062e4b) bg_popup_preview_window_pane_cp03

0xc58a,	// (0x000658a9) list_cset_text2_pane

0xc592,	// (0x000658b1) main_cset6_text2_pane_g1

0xc59a,	// (0x000658b9) main_cset6_text2_pane_t1

0xc995,	// (0x00065cb4) list_cset_text2_pane_t1_ParamLimits

0xc995,	// (0x00065cb4) list_cset_text2_pane_t1

0x9ba9,	// (0x00062ec8) main_radioblah_pane_ParamLimits

0x7c1f,	// (0x00060f3e) main_mobtv_info_pane_t3_ParamLimits

0x7c1f,	// (0x00060f3e) main_mobtv_info_pane_t3

0x7f2f,	// (0x0006124e) main_radioblah_pane_g1

0x7f69,	// (0x00061288) main_radioblah_info_pane_g1

0x7fee,	// (0x0006130d) main_radioblah_info_pane_t3_ParamLimits

0x7fee,	// (0x0006130d) main_radioblah_info_pane_t3

0x2cbd,	// (0x0005bfdc) highlight_cell_cale_month_pane_ParamLimits

0x2cbd,	// (0x0005bfdc) highlight_cell_cale_month_pane

0x9bb7,	// (0x00062ed6) main_phob_fisheye_pane

0xee5c,	// (0x0006817b) scroll_pane_cp0031_ParamLimits

0xee5c,	// (0x0006817b) scroll_pane_cp0031

0xc3c9,	// (0x000656e8) wait_bar_pane_cp08_ParamLimits

0x768f,	// (0x000609ae) cset_list_set_pane_copy1_ParamLimits

0xc9af,	// (0x00065cce) highlight_cell_cale_month_pane_g1

0x8071,	// (0x00061390) highlight_cell_cale_month_pane_t1

0xc014,	// (0x00065333) list_gen_pane_cp01

0xbbdb,	// (0x00064efa) scroll_pane_01

0x807f,	// (0x0006139e) list_single_double_fisheye_pane

0x8088,	// (0x000613a7) list_double_fisheye_pane_g1_ParamLimits

0x8088,	// (0x000613a7) list_double_fisheye_pane_g1

0x8094,	// (0x000613b3) list_double_fisheye_pane_g2_ParamLimits

0x8094,	// (0x000613b3) list_double_fisheye_pane_g2

0x80a8,	// (0x000613c7) list_double_fisheye_pane_g3_ParamLimits

0x80a8,	// (0x000613c7) list_double_fisheye_pane_g3

0x0004,

0xfb2c,	// (0x00068e4b) list_double_fisheye_pane_g_ParamLimits

0xfb2c,	// (0x00068e4b) list_double_fisheye_pane_g

0x80d1,	// (0x000613f0) list_double_fisheye_pane_t1_ParamLimits

0x80d1,	// (0x000613f0) list_double_fisheye_pane_t1

0x80ec,	// (0x0006140b) list_double_fisheye_pane_t2_ParamLimits

0x80ec,	// (0x0006140b) list_double_fisheye_pane_t2

0x0001,

0xfb37,	// (0x00068e56) list_double_fisheye_pane_t_ParamLimits

0xfb37,	// (0x00068e56) list_double_fisheye_pane_t

0x9bb7,	// (0x00062ed6) main_call5_pane

0x7d14,	// (0x00061033) sc_swipe_pane_ParamLimits

0x7d14,	// (0x00061033) sc_swipe_pane

0x8121,	// (0x00061440) call5_image_pane_ParamLimits

0x8121,	// (0x00061440) call5_image_pane

0x813e,	// (0x0006145d) call5_swipe_1_pane_ParamLimits

0x813e,	// (0x0006145d) call5_swipe_1_pane

0x8151,	// (0x00061470) call5_swipe_2_pane_ParamLimits

0x8151,	// (0x00061470) call5_swipe_2_pane

0x817c,	// (0x0006149b) popup_call5_audio_first_window_ParamLimits

0x817c,	// (0x0006149b) popup_call5_audio_first_window

0xa2ed,	// (0x0006360c) call5_swipe_1_pane_g1_ParamLimits

0xa2ed,	// (0x0006360c) call5_swipe_1_pane_g1

0xc9b7,	// (0x00065cd6) call5_swipe_1_pane_g2_ParamLimits

0xc9b7,	// (0x00065cd6) call5_swipe_1_pane_g2

0x0001,

0xfb3c,	// (0x00068e5b) call5_swipe_1_pane_g_ParamLimits

0xfb3c,	// (0x00068e5b) call5_swipe_1_pane_g

0xc9c3,	// (0x00065ce2) call5_swipe_1_pane_t1_ParamLimits

0xc9c3,	// (0x00065ce2) call5_swipe_1_pane_t1

0xa2ed,	// (0x0006360c) call5_swipe_2_pane_g1_ParamLimits

0xa2ed,	// (0x0006360c) call5_swipe_2_pane_g1

0xc9d8,	// (0x00065cf7) call5_swipe_2_pane_g2_ParamLimits

0xc9d8,	// (0x00065cf7) call5_swipe_2_pane_g2

0x0001,

0xfb41,	// (0x00068e60) call5_swipe_2_pane_g_ParamLimits

0xfb41,	// (0x00068e60) call5_swipe_2_pane_g

0xc9e4,	// (0x00065d03) call5_swipe_2_pane_t1_ParamLimits

0xc9e4,	// (0x00065d03) call5_swipe_2_pane_t1

0xc9f9,	// (0x00065d18) sc_swipe_pane_g1_ParamLimits

0xc9f9,	// (0x00065d18) sc_swipe_pane_g1

0xca06,	// (0x00065d25) sc_swipe_pane_g2_ParamLimits

0xca06,	// (0x00065d25) sc_swipe_pane_g2

0x0001,

0xfb46,	// (0x00068e65) sc_swipe_pane_g_ParamLimits

0xfb46,	// (0x00068e65) sc_swipe_pane_g

0xca12,	// (0x00065d31) sc_swipe_pane_t1_ParamLimits

0xca12,	// (0x00065d31) sc_swipe_pane_t1

0x9bb7,	// (0x00062ed6) main_cmail_launcher_pane

0x8191,	// (0x000614b0) aid_size_cell_cmail_l_ParamLimits

0x8191,	// (0x000614b0) aid_size_cell_cmail_l

0x819f,	// (0x000614be) grid_cmail_l_pane_ParamLimits

0x819f,	// (0x000614be) grid_cmail_l_pane

0x81b8,	// (0x000614d7) cell_cmail_l_pane_ParamLimits

0x81b8,	// (0x000614d7) cell_cmail_l_pane

0xca27,	// (0x00065d46) cell_cmail_l_pane_g1_ParamLimits

0xca27,	// (0x00065d46) cell_cmail_l_pane_g1

0xca33,	// (0x00065d52) cell_cmail_l_pane_t1_ParamLimits

0xca33,	// (0x00065d52) cell_cmail_l_pane_t1

0xca49,	// (0x00065d68) cell_cmail_l_pane_t2_ParamLimits

0xca49,	// (0x00065d68) cell_cmail_l_pane_t2

0x0001,

0xfb4b,	// (0x00068e6a) cell_cmail_l_pane_t_ParamLimits

0xfb4b,	// (0x00068e6a) cell_cmail_l_pane_t

0xa286,	// (0x000635a5) grid_highlight_pane_cp018_ParamLimits

0xa286,	// (0x000635a5) grid_highlight_pane_cp018

0x0f2c,	// (0x0005a24b) main2_pane_ParamLimits

0x0f2c,	// (0x0005a24b) main2_pane

0xa43d,	// (0x0006375c) popup_sp_fs_action_menu_bg_pane_g1

0xa445,	// (0x00063764) popup_sp_fs_action_menu_bg_pane_g2

0xa44d,	// (0x0006376c) popup_sp_fs_action_menu_bg_pane_g3

0xa455,	// (0x00063774) popup_sp_fs_action_menu_bg_pane_g4

0xa45d,	// (0x0006377c) popup_sp_fs_action_menu_bg_pane_g5

0xa465,	// (0x00063784) popup_sp_fs_action_menu_bg_pane_g6

0xa46d,	// (0x0006378c) popup_sp_fs_action_menu_bg_pane_g7

0xa475,	// (0x00063794) popup_sp_fs_action_menu_bg_pane_g8

0xa47d,	// (0x0006379c) popup_sp_fs_action_menu_bg_pane_g9

0xa485,	// (0x000637a4) popup_sp_fs_action_menu_bg_pane_g10

0xa485,	// (0x000637a4) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00068464) popup_sp_fs_action_menu_bg_pane_g

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g3_g1

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g3_g2

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x00068512) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x00068512) list_medium_line_x2_t3_g3_g

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g3_t1

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g3_t2

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x00068519) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x00068519) list_medium_line_x2_t3_g3_t

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g2_g1

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x00068520) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x00068520) list_medium_line_x2_t3_g2_g

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g2_t1

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g2_t2

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x00068519) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x00068519) list_medium_line_x2_t3_g2_t

0xa2ed,	// (0x0006360c) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t4_g4_g1

0xa2ed,	// (0x0006360c) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t4_g4_g2

0xa2ed,	// (0x0006360c) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t4_g4_g3

0xa2ed,	// (0x0006360c) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x00068525) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x00068525) list_medium_line_x2_t4_g4_g

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g4_t1

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g4_t2

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g4_t3

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x0006852e) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x0006852e) list_medium_line_x2_t4_g4_t

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g4_g1

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g4_g2

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g4_g3

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x00068525) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x00068525) list_medium_line_x2_t2_g4_g

0xa5bb,	// (0x000638da) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t2_g4_t1

0xa5bb,	// (0x000638da) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t2_g4_t2

0x0001,

0xf1d6,	// (0x000684f5) list_medium_line_x2_t2_g4_t_ParamLimits

0xf1d6,	// (0x000684f5) list_medium_line_x2_t2_g4_t

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g3_g1

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g3_g2

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x00068512) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x00068512) list_medium_line_x2_t2_g3_g

0xa5bb,	// (0x000638da) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t2_g3_t1

0xa5bb,	// (0x000638da) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t2_g3_t2

0x0001,

0xf1d6,	// (0x000684f5) list_medium_line_x2_t2_g3_t_ParamLimits

0xf1d6,	// (0x000684f5) list_medium_line_x2_t2_g3_t

0x2e2d,	// (0x0005c14c) main_sp_fs_list_pane_ParamLimits

0x2e2d,	// (0x0005c14c) main_sp_fs_list_pane

0xefce,	// (0x000682ed) sp_fs_scroll_pane_ParamLimits

0xefce,	// (0x000682ed) sp_fs_scroll_pane

0xab4f,	// (0x00063e6e) list_medium_line_x2_t3_t1

0xab4f,	// (0x00063e6e) list_medium_line_x2_t3_t2

0xab4f,	// (0x00063e6e) list_medium_line_x2_t3_t3

0x0002,

0xf2bc,	// (0x000685db) list_medium_line_x2_t3_t

0xab4f,	// (0x00063e6e) list_medium_line_x3_t4_t1

0xab4f,	// (0x00063e6e) list_medium_line_x3_t4_t2

0xab4f,	// (0x00063e6e) list_medium_line_x3_t4_t3

0xab4f,	// (0x00063e6e) list_medium_line_x3_t4_t4

0x0003,

0xf2c3,	// (0x000685e2) list_medium_line_x3_t4_t

0xab4f,	// (0x00063e6e) list_medium_line_x4_t5_t1

0xab4f,	// (0x00063e6e) list_medium_line_x4_t5_t2

0xab4f,	// (0x00063e6e) list_medium_line_x4_t5_t3

0xab4f,	// (0x00063e6e) list_medium_line_x4_t5_t4

0xab4f,	// (0x00063e6e) list_medium_line_x4_t5_t5

0x0004,

0xf2cc,	// (0x000685eb) list_medium_line_x4_t5_t

0xa2ed,	// (0x0006360c) list_medium_line_t4_g4_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t4_g4_g1

0xa2ed,	// (0x0006360c) list_medium_line_t4_g4_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t4_g4_g2

0xa2ed,	// (0x0006360c) list_medium_line_t4_g4_g3_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t4_g4_g3

0xa2ed,	// (0x0006360c) list_medium_line_t4_g4_g4_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x00068525) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x00068525) list_medium_line_t4_g4_g

0xa5bb,	// (0x000638da) list_medium_line_t4_g4_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t4_g4_t1

0xa5bb,	// (0x000638da) list_medium_line_t4_g4_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t4_g4_t2

0xa5bb,	// (0x000638da) list_medium_line_t4_g4_t3_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t4_g4_t3

0xa5bb,	// (0x000638da) list_medium_line_t4_g4_t4_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x0006852e) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x0006852e) list_medium_line_t4_g4_t

0x2edb,	// (0x0005c1fa) chi_dic_find_pane_g1

0x3faa,	// (0x0005d2c9) main_tport_pane

0xab4f,	// (0x00063e6e) list_medium_line_plain_t1

0xa2ed,	// (0x0006360c) list_medium_line_t2_g2_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t2_g2_g1

0xa2ed,	// (0x0006360c) list_medium_line_t2_g2_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x00068520) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x00068520) list_medium_line_t2_g2_g

0xa5bb,	// (0x000638da) list_medium_line_t2_g2_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t2_g2_t1

0xa5bb,	// (0x000638da) list_medium_line_t2_g2_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t2_g2_t2

0x0001,

0xf1d6,	// (0x000684f5) list_medium_line_t2_g2_t_ParamLimits

0xf1d6,	// (0x000684f5) list_medium_line_t2_g2_t

0xc01d,	// (0x0006533c) aid_sp_fs_list_icon_a_sm

0xc025,	// (0x00065344) aid_sp_fs_list_icon_d

0xc02d,	// (0x0006534c) aid_sp_fs_text_primary

0xc036,	// (0x00065355) aid_sp_fs_text_secondary

0x9b2c,	// (0x00062e4b) list_medium_line

0x9b2c,	// (0x00062e4b) list_medium_line_g2

0x9b2c,	// (0x00062e4b) list_medium_line_g3

0x9b2c,	// (0x00062e4b) list_medium_line_plain

0x9b2c,	// (0x00062e4b) list_medium_line_plain_t2

0x9b2c,	// (0x00062e4b) list_medium_line_plain_t3

0x9b2c,	// (0x00062e4b) list_medium_line_right_icon

0x9b2c,	// (0x00062e4b) list_medium_line_right_iconx2

0x9b2c,	// (0x00062e4b) list_medium_line_t2

0x9b2c,	// (0x00062e4b) list_medium_line_t2_g2

0x9b2c,	// (0x00062e4b) list_medium_line_t2_g3

0x9b2c,	// (0x00062e4b) list_medium_line_t2_right_icon

0x9b2c,	// (0x00062e4b) list_medium_line_t2_right_iconx2

0x9b2c,	// (0x00062e4b) list_medium_line_t3

0x9b2c,	// (0x00062e4b) list_medium_line_t3_g2

0x9b2c,	// (0x00062e4b) list_medium_line_t3_g3

0x9b2c,	// (0x00062e4b) list_medium_line_t3_right_iconx2

0x9b2c,	// (0x00062e4b) list_medium_line_t4_g4

0x9b2c,	// (0x00062e4b) list_medium_line_x2

0x9b2c,	// (0x00062e4b) list_medium_line_x2_t2_g2

0x9b2c,	// (0x00062e4b) list_medium_line_x2_t2_g3

0x9b2c,	// (0x00062e4b) list_medium_line_x2_t2_g4

0x9b2c,	// (0x00062e4b) list_medium_line_x2_t3

0x9b2c,	// (0x00062e4b) list_medium_line_x2_t3_g2

0x9b2c,	// (0x00062e4b) list_medium_line_x2_t3_g3

0x9b2c,	// (0x00062e4b) list_medium_line_x2_t3_g4

0x9b2c,	// (0x00062e4b) list_medium_line_x2_t4_g2

0x9b2c,	// (0x00062e4b) list_medium_line_x2_t4_g4

0x9b2c,	// (0x00062e4b) list_medium_line_x3

0x9b2c,	// (0x00062e4b) list_medium_line_x3_t4

0x9b2c,	// (0x00062e4b) list_medium_line_x3_t4_g4

0x9b2c,	// (0x00062e4b) list_medium_line_x4_t4

0x9b2c,	// (0x00062e4b) list_medium_line_x4_t4_g7

0x9b2c,	// (0x00062e4b) list_medium_line_x4_t5

0x713e,	// (0x0006045d) list_single_fs_dyc_pane_ParamLimits

0x713e,	// (0x0006045d) list_single_fs_dyc_pane

0xa2ed,	// (0x0006360c) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x4_t4_g7_g1

0xa2ed,	// (0x0006360c) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x4_t4_g7_g2

0xa2ed,	// (0x0006360c) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x4_t4_g7_g3

0xa2ed,	// (0x0006360c) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x4_t4_g7_g4

0xa2ed,	// (0x0006360c) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x4_t4_g7_g5

0xa2ed,	// (0x0006360c) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x4_t4_g7_g6

0xa2fb,	// (0x0006361a) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa2fb,	// (0x0006361a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfa53,	// (0x00068d72) list_medium_line_x4_t4_g7_g_ParamLimits

0xfa53,	// (0x00068d72) list_medium_line_x4_t4_g7_g

0xa5bb,	// (0x000638da) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x4_t4_g7_t1

0xa5bb,	// (0x000638da) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x4_t4_g7_t2

0xa5bb,	// (0x000638da) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x4_t4_g7_t3

0xb072,	// (0x00064391) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb072,	// (0x00064391) list_medium_line_x4_t4_g7_t4

0xb072,	// (0x00064391) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb072,	// (0x00064391) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa62,	// (0x00068d81) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa62,	// (0x00068d81) list_medium_line_x4_t4_g7_t

0x7893,	// (0x00060bb2) list_single_dyc_row_pane_ParamLimits

0x7893,	// (0x00060bb2) list_single_dyc_row_pane

0x810e,	// (0x0006142d) call5_gesture_pane_ParamLimits

0x810e,	// (0x0006142d) call5_gesture_pane

0x8164,	// (0x00061483) call5_windows_pane_ParamLimits

0x8164,	// (0x00061483) call5_windows_pane

0x81ca,	// (0x000614e9) call5_swipe_1_pane_cp_ParamLimits

0x81ca,	// (0x000614e9) call5_swipe_1_pane_cp

0x81d6,	// (0x000614f5) call5_swipe_2_pane_cp_ParamLimits

0x81d6,	// (0x000614f5) call5_swipe_2_pane_cp

0xa594,	// (0x000638b3) call5_image_pane_cp

0x81e2,	// (0x00061501) popup_call5_audio_first_window_cp_ParamLimits

0x81e2,	// (0x00061501) popup_call5_audio_first_window_cp

0xc9f9,	// (0x00065d18) call5_swipe_1_pane_g1_cp_ParamLimits

0xc9f9,	// (0x00065d18) call5_swipe_1_pane_g1_cp

0xca66,	// (0x00065d85) call5_swipe_1_pane_g2_cp

0xca12,	// (0x00065d31) call5_swipe_1_pane_t1_cp_ParamLimits

0xca12,	// (0x00065d31) call5_swipe_1_pane_t1_cp

0xc9f9,	// (0x00065d18) call5_swipe_2_pane_g1_cp_ParamLimits

0xc9f9,	// (0x00065d18) call5_swipe_2_pane_g1_cp

0xca6e,	// (0x00065d8d) call5_swipe_2_pane_g2_cp

0xca76,	// (0x00065d95) call5_swipe_2_pane_t1_cp_ParamLimits

0xca76,	// (0x00065d95) call5_swipe_2_pane_t1_cp

0xa286,	// (0x000635a5) main_sp_fs_email_pane

0xca8b,	// (0x00065daa) main_sp_fs_listscroll_pane_te

0x81f0,	// (0x0006150f) popup_sp_fs_action_menu_pane_ParamLimits

0x81f0,	// (0x0006150f) popup_sp_fs_action_menu_pane

0xa5e9,	// (0x00063908) bg_sp_fs_ctrlbar_pane_g1

0xca94,	// (0x00065db3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xca9d,	// (0x00065dbc) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcaa6,	// (0x00065dc5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa5e9,	// (0x00063908) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfb50,	// (0x00068e6f) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xde37,	// (0x00067156) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xde37,	// (0x00067156) bg_sp_fs_ctrlbar_ddmenu_pane

0xcaaf,	// (0x00065dce) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xcaaf,	// (0x00065dce) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xcabb,	// (0x00065dda) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xcabb,	// (0x00065dda) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfb59,	// (0x00068e78) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfb59,	// (0x00068e78) main_sp_fs_ctrlbar_ddmenu_pane_g

0xcac7,	// (0x00065de6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xcac7,	// (0x00065de6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa5e9,	// (0x00063908) list_medium_line_t2_right_icon_g1

0xab4f,	// (0x00063e6e) list_medium_line_t2_right_icon_t1

0xab4f,	// (0x00063e6e) list_medium_line_t2_right_icon_t2

0x0001,

0xfb5e,	// (0x00068e7d) list_medium_line_t2_right_icon_t

0xb086,	// (0x000643a5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb086,	// (0x000643a5) bg_sp_fs_ctrlbar_pane

0x8283,	// (0x000615a2) main_sp_fs_ctrlbar_button_pane_cp01

0x828d,	// (0x000615ac) main_sp_fs_ctrlbar_ddmenu_pane

0xcb1b,	// (0x00065e3a) main_sp_fs_ctrlbar_pane_g1

0xcb27,	// (0x00065e46) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfb63,	// (0x00068e82) main_sp_fs_ctrlbar_pane_g

0x82cb,	// (0x000615ea) main_sp_fs_ctrlbar_pane_t1

0x830a,	// (0x00061629) main_sp_fs_ctrlbar_pane

0x832e,	// (0x0006164d) main_sp_fs_listscroll_pane_te_cp01

0x834e,	// (0x0006166d) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x834e,	// (0x0006166d) popup_sp_fs_action_menu_pane_cp01

0xa286,	// (0x000635a5) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa286,	// (0x000635a5) bg_sp_fs_highlight_list_pane_cp01

0xcb4e,	// (0x00065e6d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcb4e,	// (0x00065e6d) sp_fs_action_menu_list_gene_pane_g1

0xcb5d,	// (0x00065e7c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xcb5d,	// (0x00065e7c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfb71,	// (0x00068e90) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfb71,	// (0x00068e90) sp_fs_action_menu_list_gene_pane_g

0xcb6a,	// (0x00065e89) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcb6a,	// (0x00065e89) sp_fs_action_menu_list_gene_pane_t1

0xcb82,	// (0x00065ea1) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcb82,	// (0x00065ea1) sp_fs_action_menu_list_gene_pane

0xcba5,	// (0x00065ec4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcba5,	// (0x00065ec4) popup_sp_fs_action_menu_bg_pane

0xcbb3,	// (0x00065ed2) sp_fs_action_menu_list_pane_ParamLimits

0xcbb3,	// (0x00065ed2) sp_fs_action_menu_list_pane

0x8373,	// (0x00061692) sp_fs_scroll_pane_cp01_ParamLimits

0x8373,	// (0x00061692) sp_fs_scroll_pane_cp01

0xab4f,	// (0x00063e6e) list_medium_line_plain_t2_t1

0xab4f,	// (0x00063e6e) list_medium_line_plain_t2_t2

0x0001,

0xfb5e,	// (0x00068e7d) list_medium_line_plain_t2_t

0xab4f,	// (0x00063e6e) list_medium_line_plain_t3_t1

0xab4f,	// (0x00063e6e) list_medium_line_plain_t3_t2

0xab4f,	// (0x00063e6e) list_medium_line_plain_t3_t3

0x0002,

0xf2bc,	// (0x000685db) list_medium_line_plain_t3_t

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g2_g1

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x00068520) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x00068520) list_medium_line_x2_t2_g2_g

0xa5bb,	// (0x000638da) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t2_g2_t1

0xa5bb,	// (0x000638da) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t2_g2_t2

0x0001,

0xf1d6,	// (0x000684f5) list_medium_line_x2_t2_g2_t_ParamLimits

0xf1d6,	// (0x000684f5) list_medium_line_x2_t2_g2_t

0xa2ed,	// (0x0006360c) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t4_g2_g1

0xa2ed,	// (0x0006360c) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x00068520) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x00068520) list_medium_line_x2_t4_g2_g

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g2_t1

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g2_t2

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g2_t3

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x0006852e) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x0006852e) list_medium_line_x2_t4_g2_t

0xa5e9,	// (0x00063908) list_medium_line_t3_right_iconx2_g1

0xa5e9,	// (0x00063908) list_medium_line_t3_right_iconx2_g2

0xa5e9,	// (0x00063908) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3dd,	// (0x000686fc) list_medium_line_t3_right_iconx2_g

0xab4f,	// (0x00063e6e) list_medium_line_t3_right_iconx2_t1

0xab4f,	// (0x00063e6e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfb5e,	// (0x00068e7d) list_medium_line_t3_right_iconx2_t

0xa2ed,	// (0x0006360c) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x3_t4_g4_g1

0xa2ed,	// (0x0006360c) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x3_t4_g4_g2

0xa2ed,	// (0x0006360c) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x3_t4_g4_g3

0xa2ed,	// (0x0006360c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x00068525) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x00068525) list_medium_line_x3_t4_g4_g

0xa5bb,	// (0x000638da) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x3_t4_g4_t1

0xa5bb,	// (0x000638da) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x3_t4_g4_t2

0xa5bb,	// (0x000638da) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x3_t4_g4_t3

0xa5bb,	// (0x000638da) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x0006852e) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x0006852e) list_medium_line_x3_t4_g4_t

0x8399,	// (0x000616b8) list_single_dyc_row_text_pane_t1_ParamLimits

0x8399,	// (0x000616b8) list_single_dyc_row_text_pane_t1

0x83e2,	// (0x00061701) list_single_dyc_row_text_pane_t2_ParamLimits

0x83e2,	// (0x00061701) list_single_dyc_row_text_pane_t2

0xcbd7,	// (0x00065ef6) list_single_dyc_row_text_pane_t3_ParamLimits

0xcbd7,	// (0x00065ef6) list_single_dyc_row_text_pane_t3

0x0005,

0xfb76,	// (0x00068e95) list_single_dyc_row_text_pane_t_ParamLimits

0xfb76,	// (0x00068e95) list_single_dyc_row_text_pane_t

0xcbfb,	// (0x00065f1a) list_single_dyc_row_pane_g1_ParamLimits

0xcbfb,	// (0x00065f1a) list_single_dyc_row_pane_g1

0xcc07,	// (0x00065f26) list_single_dyc_row_pane_g2_ParamLimits

0xcc07,	// (0x00065f26) list_single_dyc_row_pane_g2

0xcc13,	// (0x00065f32) list_single_dyc_row_pane_g3_ParamLimits

0xcc13,	// (0x00065f32) list_single_dyc_row_pane_g3

0xcc1f,	// (0x00065f3e) list_single_dyc_row_pane_g4_ParamLimits

0xcc1f,	// (0x00065f3e) list_single_dyc_row_pane_g4

0x0003,

0xfb83,	// (0x00068ea2) list_single_dyc_row_pane_g_ParamLimits

0xfb83,	// (0x00068ea2) list_single_dyc_row_pane_g

0xcc2b,	// (0x00065f4a) list_single_dyc_row_text_pane_ParamLimits

0xcc2b,	// (0x00065f4a) list_single_dyc_row_text_pane

0x9b2c,	// (0x00062e4b) bg_sp_fs_scroll_pane

0xcc4a,	// (0x00065f69) thumb_sp_fs_scroll_pane

0xa2ed,	// (0x0006360c) list_medium_line_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_g1

0xa5bb,	// (0x000638da) list_medium_line_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t1

0xa2ed,	// (0x0006360c) list_medium_line_x2_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_g1

0xa2ed,	// (0x0006360c) list_medium_line_x2_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x00068520) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x00068520) list_medium_line_x2_g

0xa5bb,	// (0x000638da) list_medium_line_x2_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t1

0xa2ed,	// (0x0006360c) list_medium_line_x3_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x3_g1

0xba51,	// (0x00064d70) list_medium_line_x3_g2_ParamLimits

0xba51,	// (0x00064d70) list_medium_line_x3_g2

0x0001,

0xfb8c,	// (0x00068eab) list_medium_line_x3_g_ParamLimits

0xfb8c,	// (0x00068eab) list_medium_line_x3_g

0xcc53,	// (0x00065f72) list_medium_line_x3_t1_ParamLimits

0xcc53,	// (0x00065f72) list_medium_line_x3_t1

0xcc67,	// (0x00065f86) thumb_sp_fs_scroll_pane_g1

0xcc70,	// (0x00065f8f) thumb_sp_fs_scroll_pane_g2

0xcc79,	// (0x00065f98) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfb91,	// (0x00068eb0) thumb_sp_fs_scroll_pane_g

0xcc67,	// (0x00065f86) bg_sp_fs_scroll_pane_g1

0xcc70,	// (0x00065f8f) bg_sp_fs_scroll_pane_g2

0xcc79,	// (0x00065f98) bg_sp_fs_scroll_pane_g3

0x0002,

0xfb91,	// (0x00068eb0) bg_sp_fs_scroll_pane_g

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g4_g1

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g4_g2

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g4_g3

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x00068525) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x00068525) list_medium_line_x2_t3_g4_g

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g4_t1

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g4_t2

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x00068519) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x00068519) list_medium_line_x2_t3_g4_t

0xa2ed,	// (0x0006360c) list_medium_line_g2_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_g2_g1

0xa2ed,	// (0x0006360c) list_medium_line_g2_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x00068520) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x00068520) list_medium_line_g2_g

0xa5bb,	// (0x000638da) list_medium_line_g2_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_g2_t1

0xa2ed,	// (0x0006360c) list_medium_line_t3_g2_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t3_g2_g1

0xa2ed,	// (0x0006360c) list_medium_line_t3_g2_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x00068520) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x00068520) list_medium_line_t3_g2_g

0xa5bb,	// (0x000638da) list_medium_line_t3_g2_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t3_g2_t1

0xa5bb,	// (0x000638da) list_medium_line_t3_g2_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t3_g2_t2

0xa5bb,	// (0x000638da) list_medium_line_t3_g2_t3_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x00068519) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x00068519) list_medium_line_t3_g2_t

0xa5e9,	// (0x00063908) list_medium_line_right_icon_g1

0xab4f,	// (0x00063e6e) list_medium_line_right_icon_t1

0xa2ed,	// (0x0006360c) list_medium_line_t2_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t2_g1

0xa5bb,	// (0x000638da) list_medium_line_t2_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t2_t1

0xa5bb,	// (0x000638da) list_medium_line_t2_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t2_t2

0x0001,

0xf1d6,	// (0x000684f5) list_medium_line_t2_t_ParamLimits

0xf1d6,	// (0x000684f5) list_medium_line_t2_t

0xa2ed,	// (0x0006360c) list_medium_line_t3_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t3_g1

0xa5bb,	// (0x000638da) list_medium_line_t3_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t3_t1

0xa5bb,	// (0x000638da) list_medium_line_t3_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t3_t2

0xa5bb,	// (0x000638da) list_medium_line_t3_t3_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x00068519) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x00068519) list_medium_line_t3_t

0xa2ed,	// (0x0006360c) list_medium_line_g3_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_g3_g1

0xa2ed,	// (0x0006360c) list_medium_line_g3_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_g3_g2

0xa2ed,	// (0x0006360c) list_medium_line_g3_g3_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x00068512) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x00068512) list_medium_line_g3_g

0xa5bb,	// (0x000638da) list_medium_line_g3_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_g3_t1

0xa2ed,	// (0x0006360c) list_medium_line_t2_g3_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t2_g3_g1

0xa2ed,	// (0x0006360c) list_medium_line_t2_g3_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t2_g3_g2

0xa2ed,	// (0x0006360c) list_medium_line_t2_g3_g3_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x00068512) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x00068512) list_medium_line_t2_g3_g

0xa5bb,	// (0x000638da) list_medium_line_t2_g3_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t2_g3_t1

0xa5bb,	// (0x000638da) list_medium_line_t2_g3_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t2_g3_t2

0x0001,

0xf1d6,	// (0x000684f5) list_medium_line_t2_g3_t_ParamLimits

0xf1d6,	// (0x000684f5) list_medium_line_t2_g3_t

0xa2ed,	// (0x0006360c) list_medium_line_t3_g3_g1_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t3_g3_g1

0xa2ed,	// (0x0006360c) list_medium_line_t3_g3_g2_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t3_g3_g2

0xa2ed,	// (0x0006360c) list_medium_line_t3_g3_g3_ParamLimits

0xa2ed,	// (0x0006360c) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x00068512) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x00068512) list_medium_line_t3_g3_g

0xa5bb,	// (0x000638da) list_medium_line_t3_g3_t1_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t3_g3_t1

0xa5bb,	// (0x000638da) list_medium_line_t3_g3_t2_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t3_g3_t2

0xa5bb,	// (0x000638da) list_medium_line_t3_g3_t3_ParamLimits

0xa5bb,	// (0x000638da) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x00068519) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x00068519) list_medium_line_t3_g3_t

0xa5e9,	// (0x00063908) list_medium_line_right_iconx2_g1

0xa5e9,	// (0x00063908) list_medium_line_right_iconx2_g2

0x0001,

0xf3d8,	// (0x000686f7) list_medium_line_right_iconx2_g

0xab4f,	// (0x00063e6e) list_medium_line_right_iconx2_t1

0xa5e9,	// (0x00063908) list_medium_line_t2_right_iconx2_g1

0xa5e9,	// (0x00063908) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3d8,	// (0x000686f7) list_medium_line_t2_right_iconx2_g

0xab4f,	// (0x00063e6e) list_medium_line_t2_right_iconx2_t1

0xab4f,	// (0x00063e6e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb5e,	// (0x00068e7d) list_medium_line_t2_right_iconx2_t

0xab4f,	// (0x00063e6e) list_medium_line_x4_t4_t1

0xab4f,	// (0x00063e6e) list_medium_line_x4_t4_t2

0xab4f,	// (0x00063e6e) list_medium_line_x4_t4_t3

0xab4f,	// (0x00063e6e) list_medium_line_x4_t4_t4

0x0003,

0xf2c3,	// (0x000685e2) list_medium_line_x4_t4_t

0x8558,	// (0x00061877) tport_appsw_pane_ParamLimits

0x8558,	// (0x00061877) tport_appsw_pane

0x856f,	// (0x0006188e) tport_contact_pane_ParamLimits

0x856f,	// (0x0006188e) tport_contact_pane

0x8587,	// (0x000618a6) tport_listscroll_pane_ParamLimits

0x8587,	// (0x000618a6) tport_listscroll_pane

0x859b,	// (0x000618ba) cell_tport_appsw_pane_ParamLimits

0x859b,	// (0x000618ba) cell_tport_appsw_pane

0xb050,	// (0x0006436f) tport_appsw_pane_g1_ParamLimits

0xb050,	// (0x0006436f) tport_appsw_pane_g1

0xcc82,	// (0x00065fa1) tport_contact_pane_g1

0xcc8b,	// (0x00065faa) tport_contact_pane_t1

0xcc99,	// (0x00065fb8) tport_contact_pane_t2

0x0001,

0xfb98,	// (0x00068eb7) tport_contact_pane_t

0xcca7,	// (0x00065fc6) list_tport_pane

0xccb0,	// (0x00065fcf) scroll_pane_cp_030

0x85e5,	// (0x00061904) cell_tport_appsw_pane_g1

0x85f5,	// (0x00061914) cell_tport_appsw_pane_t1

0x8603,	// (0x00061922) grid_highlight_pane_cp019

0x860b,	// (0x0006192a) list_tport_double_graphic_pane_ParamLimits

0x860b,	// (0x0006192a) list_tport_double_graphic_pane

0xa286,	// (0x000635a5) list_highlight_pane_cp023_ParamLimits

0xa286,	// (0x000635a5) list_highlight_pane_cp023

0x8622,	// (0x00061941) list_tport_double_graphic_pane_g1_ParamLimits

0x8622,	// (0x00061941) list_tport_double_graphic_pane_g1

0x862f,	// (0x0006194e) list_tport_double_graphic_pane_t1_ParamLimits

0x862f,	// (0x0006194e) list_tport_double_graphic_pane_t1

0x8644,	// (0x00061963) list_tport_double_graphic_pane_t2_ParamLimits

0x8644,	// (0x00061963) list_tport_double_graphic_pane_t2

0x0001,

0xfba4,	// (0x00068ec3) list_tport_double_graphic_pane_t_ParamLimits

0xfba4,	// (0x00068ec3) list_tport_double_graphic_pane_t

0x9b2c,	// (0x00062e4b) main_cale_note_pane

0x6240,	// (0x0005f55f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6240,	// (0x0005f55f) cell_vitu2_function_top_wide_pane_cp01

0x7c33,	// (0x00060f52) wait_bar_pane_cp05_ParamLimits

0xa286,	// (0x000635a5) listscroll_cmail_pane

0xccb9,	// (0x00065fd8) list_cmail_pane

0x8656,	// (0x00061975) list_cmail_body_pane

0x866d,	// (0x0006198c) list_single_cmail_header_caption_pane

0xccc9,	// (0x00065fe8) list_single_cmail_header_detail_pane_ParamLimits

0xccc9,	// (0x00065fe8) list_single_cmail_header_detail_pane

0xccfb,	// (0x0006601a) list_single_cmail_header_caption_pane_t1

0x868a,	// (0x000619a9) list_single_cmail_header_detail_pane_g1_ParamLimits

0x868a,	// (0x000619a9) list_single_cmail_header_detail_pane_g1

0xcd12,	// (0x00066031) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcd12,	// (0x00066031) list_single_cmail_header_detail_pane_g2

0x0002,

0xfba9,	// (0x00068ec8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfba9,	// (0x00068ec8) list_single_cmail_header_detail_pane_g

0xcd2b,	// (0x0006604a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcd2b,	// (0x0006604a) list_single_cmail_header_detail_pane_t1

0xcd8b,	// (0x000660aa) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcd8b,	// (0x000660aa) list_single_cmail_header_editor_pane_bg

0xc7c5,	// (0x00065ae4) list_cmail_body_pane_g1

0xcda2,	// (0x000660c1) list_cmail_body_pane_t1

0xbabd,	// (0x00064ddc) list_single_cmail_header_editor_pane_bg_g1

0xa7fe,	// (0x00063b1d) list_single_cmail_header_editor_pane_bg_g1_copy1

0xbacd,	// (0x00064dec) list_single_cmail_header_editor_pane_bg_g1_copy2

0xbac5,	// (0x00064de4) list_single_cmail_header_editor_pane_bg_g1_copy3

0xbcf1,	// (0x00065010) list_single_cmail_header_editor_pane_bg_g1_copy4

0xbaed,	// (0x00064e0c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xbadd,	// (0x00064dfc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xbae5,	// (0x00064e04) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa7de,	// (0x00063afd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x86a2,	// (0x000619c1) calenote_gesture_pane_ParamLimits

0x86a2,	// (0x000619c1) calenote_gesture_pane

0x86c2,	// (0x000619e1) calenote_window_pane_ParamLimits

0x86c2,	// (0x000619e1) calenote_window_pane

0xcdb0,	// (0x000660cf) popup_note_window_cp01

0x86de,	// (0x000619fd) calenote_swipe_1_pane_ParamLimits

0x86de,	// (0x000619fd) calenote_swipe_1_pane

0x81d6,	// (0x000614f5) calenote_swipe_2_pane_ParamLimits

0x81d6,	// (0x000614f5) calenote_swipe_2_pane

0xc9f9,	// (0x00065d18) calenote_swipe_1_pane_g1_ParamLimits

0xc9f9,	// (0x00065d18) calenote_swipe_1_pane_g1

0xca06,	// (0x00065d25) calenote_swipe_1_pane_g2_ParamLimits

0xca06,	// (0x00065d25) calenote_swipe_1_pane_g2

0x0001,

0xfb46,	// (0x00068e65) calenote_swipe_1_pane_g_ParamLimits

0xfb46,	// (0x00068e65) calenote_swipe_1_pane_g

0xcdc2,	// (0x000660e1) calenote_swipe_1_pane_t1_ParamLimits

0xcdc2,	// (0x000660e1) calenote_swipe_1_pane_t1

0xc9f9,	// (0x00065d18) calenote_swipe_2_pane_g1_ParamLimits

0xc9f9,	// (0x00065d18) calenote_swipe_2_pane_g1

0xcde1,	// (0x00066100) calenote_swipe_2_pane_g2_ParamLimits

0xcde1,	// (0x00066100) calenote_swipe_2_pane_g2

0x0001,

0xfbb5,	// (0x00068ed4) calenote_swipe_2_pane_g_ParamLimits

0xfbb5,	// (0x00068ed4) calenote_swipe_2_pane_g

0xcded,	// (0x0006610c) calenote_swipe_2_pane_t1_ParamLimits

0xcded,	// (0x0006610c) calenote_swipe_2_pane_t1

0x9b2c,	// (0x00062e4b) main_mup_navstr_pane

0x4d4b,	// (0x0005e06a) main_mup3_pane_t7_ParamLimits

0x4d4b,	// (0x0005e06a) main_mup3_pane_t7

0xd931,	// (0x00066c50) main_mp4_pane_g6_ParamLimits

0xd931,	// (0x00066c50) main_mp4_pane_g6

0xdaf1,	// (0x00066e10) main_image3_pane_t4_ParamLimits

0xdaf1,	// (0x00066e10) main_image3_pane_t4

0x86f3,	// (0x00061a12) popup_navstr_preview_pane_ParamLimits

0x86f3,	// (0x00061a12) popup_navstr_preview_pane

0x8703,	// (0x00061a22) scroll_navstr_pane_ParamLimits

0x8703,	// (0x00061a22) scroll_navstr_pane

0x9b2c,	// (0x00062e4b) bg_popup_preview_window_pane_cp04

0xce14,	// (0x00066133) popup_navstr_preview_pane_t1

0x8717,	// (0x00061a36) scroll_navstr_pane_g1_ParamLimits

0x8717,	// (0x00061a36) scroll_navstr_pane_g1

0x872b,	// (0x00061a4a) scroll_navstr_pane_t1_ParamLimits

0x872b,	// (0x00061a4a) scroll_navstr_pane_t1

0xcdb9,	// (0x000660d8) bg_button_pane_cp014

0xcdb9,	// (0x000660d8) bg_button_pane_cp030

0x80b4,	// (0x000613d3) list_double_fisheye_pane_g4_ParamLimits

0x80b4,	// (0x000613d3) list_double_fisheye_pane_g4

0x80c0,	// (0x000613df) list_double_fisheye_pane_g5_ParamLimits

0x80c0,	// (0x000613df) list_double_fisheye_pane_g5

0xefce,	// (0x000682ed) sp_fs_scroll_pane_cp03

0xcb1b,	// (0x00065e3a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xcb27,	// (0x00065e46) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfb63,	// (0x00068e82) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x82cb,	// (0x000615ea) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xccc1,	// (0x00065fe0) sp_fs_scroll_pane_cp02

0xa4f0,	// (0x0006380f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa4f0,	// (0x0006380f) popup_sp_fs_calendar_preview_list_single_pane

0x9b2c,	// (0x00062e4b) main_cam6_pano_pane

0x9ba9,	// (0x00062ec8) main_mup3_pane_ParamLimits

0x9b2c,	// (0x00062e4b) main_phacti_pane

0x7b04,	// (0x00060e23) bg_button_pane_cp11

0x7b1e,	// (0x00060e3d) main_mobtv_info_pane_g2_ParamLimits

0x7b1e,	// (0x00060e3d) main_mobtv_info_pane_g2

0x0001,

0xfac3,	// (0x00068de2) main_mobtv_info_pane_g_ParamLimits

0xfac3,	// (0x00068de2) main_mobtv_info_pane_g

0x7cfb,	// (0x0006101a) sc_clock_pane_t5_ParamLimits

0x7cfb,	// (0x0006101a) sc_clock_pane_t5

0x7f2f,	// (0x0006124e) main_radioblah_pane_g1_ParamLimits

0xc92b,	// (0x00065c4a) main_radioblah_pane_t3_ParamLimits

0xc92b,	// (0x00065c4a) main_radioblah_pane_t3

0xc943,	// (0x00065c62) main_radioblah_pane_t4_ParamLimits

0xc943,	// (0x00065c62) main_radioblah_pane_t4

0x7f57,	// (0x00061276) main_radioblah_text_pane_ParamLimits

0x7f57,	// (0x00061276) main_radioblah_text_pane

0x7f69,	// (0x00061288) main_radioblah_info_pane_g1_ParamLimits

0x8002,	// (0x00061321) main_radioblah_info_pane_t4_ParamLimits

0x8002,	// (0x00061321) main_radioblah_info_pane_t4

0xa286,	// (0x000635a5) main_sp_fs_calendar_pane

0x8742,	// (0x00061a61) main_phacti_pane_g1

0x874a,	// (0x00061a69) phacti_note_pane_ParamLimits

0x874a,	// (0x00061a69) phacti_note_pane

0xce2b,	// (0x0006614a) phacti_term_pane_ParamLimits

0xce2b,	// (0x0006614a) phacti_term_pane

0xce40,	// (0x0006615f) phacti_note_pane_t1_ParamLimits

0xce40,	// (0x0006615f) phacti_note_pane_t1

0xce57,	// (0x00066176) phacti_term_pane_g1

0xce5f,	// (0x0006617e) phacti_term_pane_t1_ParamLimits

0xce5f,	// (0x0006617e) phacti_term_pane_t1

0xce89,	// (0x000661a8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xce91,	// (0x000661b0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfbbf,	// (0x00068ede) popup_sp_fs_calendar_preview_list_single_pane_g

0xce99,	// (0x000661b8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xce99,	// (0x000661b8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xceaf,	// (0x000661ce) aid_popup_sp_fs_bg_corner_pane

0xa5e9,	// (0x00063908) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b2c,	// (0x00062e4b) popup_sp_fs_calendar_preview_bg_pane

0xceb7,	// (0x000661d6) popup_sp_fs_calendar_preview_list_pane

0xb086,	// (0x000643a5) bg_main_sp_fs_cale_pane_ParamLimits

0xb086,	// (0x000643a5) bg_main_sp_fs_cale_pane

0xcec8,	// (0x000661e7) listscroll_cale_mrui_pane_ParamLimits

0xcec8,	// (0x000661e7) listscroll_cale_mrui_pane

0xcedd,	// (0x000661fc) listscroll_sp_fs_schedule_track_pane

0xcee6,	// (0x00066205) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcee6,	// (0x00066205) main_sp_fs_ctrlbar_pane_cp01

0xcef9,	// (0x00066218) main_sp_fs_ribbon_pane

0xcf01,	// (0x00066220) popup_sp_fs_cale_preview_window

0x87bf,	// (0x00061ade) list_single_sp_fs_schedule_track_pane_ParamLimits

0x87bf,	// (0x00061ade) list_single_sp_fs_schedule_track_pane

0xa286,	// (0x000635a5) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa286,	// (0x000635a5) bg_sp_fs_highlight_list_pane_cp03

0x87d3,	// (0x00061af2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x87d3,	// (0x00061af2) list_single_sp_fs_schedule_track_pane_g1

0x87df,	// (0x00061afe) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x87df,	// (0x00061afe) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfbc4,	// (0x00068ee3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfbc4,	// (0x00068ee3) list_single_sp_fs_schedule_track_pane_g

0x87eb,	// (0x00061b0a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x87eb,	// (0x00061b0a) list_single_sp_fs_schedule_track_pane_t1

0x880d,	// (0x00061b2c) sp_fs_schedule_track_pane_ParamLimits

0x880d,	// (0x00061b2c) sp_fs_schedule_track_pane

0xcf13,	// (0x00066232) sp_fs_schedule_track_pane_g1

0xcf1b,	// (0x0006623a) sp_fs_schedule_track_pane_g2

0xcf23,	// (0x00066242) sp_fs_schedule_track_pane_g3

0xcf2b,	// (0x0006624a) sp_fs_schedule_track_pane_g4

0xcf33,	// (0x00066252) sp_fs_schedule_track_pane_g5

0x0004,

0xfbc9,	// (0x00068ee8) sp_fs_schedule_track_pane_g

0xbabd,	// (0x00064ddc) bg_sp_fs_schedule_viewer_highlight_g1

0xa7fe,	// (0x00063b1d) bg_sp_fs_schedule_viewer_highlight_g2

0xbac5,	// (0x00064de4) bg_sp_fs_schedule_viewer_highlight_g3

0xbacd,	// (0x00064dec) bg_sp_fs_schedule_viewer_highlight_g4

0xbcf1,	// (0x00065010) bg_sp_fs_schedule_viewer_highlight_g5

0xbadd,	// (0x00064dfc) bg_sp_fs_schedule_viewer_highlight_g6

0xbae5,	// (0x00064e04) bg_sp_fs_schedule_viewer_highlight_g7

0xbaed,	// (0x00064e0c) bg_sp_fs_schedule_viewer_highlight_g8

0xa7de,	// (0x00063afd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfbd4,	// (0x00068ef3) bg_sp_fs_schedule_viewer_highlight_g

0x9b2c,	// (0x00062e4b) bg_main_sp_fs_ribbon_pane

0x8822,	// (0x00061b41) main_sp_fs_ribbon_pane_g1

0xcf3b,	// (0x0006625a) main_sp_fs_ribbon_pane_t1

0x882b,	// (0x00061b4a) main_sp_fs_ribbon_pane_t2

0xcf4a,	// (0x00066269) main_sp_fs_ribbon_pane_t3

0x0002,

0xfbe7,	// (0x00068f06) main_sp_fs_ribbon_pane_t

0xcf59,	// (0x00066278) main_sp_fs_ribbon_scheduler_pane

0xcf61,	// (0x00066280) bg_main_sp_fs_ribbon_pane_g1

0xcf6a,	// (0x00066289) bg_main_sp_fs_ribbon_pane_g2

0xcf73,	// (0x00066292) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfbee,	// (0x00068f0d) bg_main_sp_fs_ribbon_pane_g

0xcf7b,	// (0x0006629a) main_sp_fs_ribbon_scheduler_pane_g1

0xcf84,	// (0x000662a3) main_sp_fs_ribbon_scheduler_pane_g2

0xcf8d,	// (0x000662ac) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfbf5,	// (0x00068f14) main_sp_fs_ribbon_scheduler_pane_g

0xcf96,	// (0x000662b5) list_cale_mrui_pane

0x883a,	// (0x00061b59) sp_fs_scroll_pane_cp07_ParamLimits

0x883a,	// (0x00061b59) sp_fs_scroll_pane_cp07

0x8856,	// (0x00061b75) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8856,	// (0x00061b75) bg_sp_fs_schedule_viewer_highlight

0xcfa3,	// (0x000662c2) list_single_sp_fs_schedule_track_pane_cp01

0xcfab,	// (0x000662ca) list_sp_fs_schedule_track_pane

0xcfb3,	// (0x000662d2) sp_fs_scroll_pane_cp06_ParamLimits

0xcfb3,	// (0x000662d2) sp_fs_scroll_pane_cp06

0xa5e9,	// (0x00063908) bgmain_sp_fs_calendar_pane_g1

0x8868,	// (0x00061b87) list_single_cale_mrui_pane_ParamLimits

0x8868,	// (0x00061b87) list_single_cale_mrui_pane

0xcfc5,	// (0x000662e4) list_single_cale_mrui_row_pane_ParamLimits

0xcfc5,	// (0x000662e4) list_single_cale_mrui_row_pane

0xcfd2,	// (0x000662f1) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcfd2,	// (0x000662f1) list_single_cale_mrui_row_pane_g1

0xd017,	// (0x00066336) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd017,	// (0x00066336) list_single_cale_mrui_row_pane_t1

0x888b,	// (0x00061baa) list_single_cale_mrui_row_pane_t2_ParamLimits

0x888b,	// (0x00061baa) list_single_cale_mrui_row_pane_t2

0xd029,	// (0x00066348) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd029,	// (0x00066348) list_single_cale_mrui_row_pane_t3

0xd058,	// (0x00066377) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd058,	// (0x00066377) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc03,	// (0x00068f22) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc03,	// (0x00068f22) list_single_cale_mrui_row_pane_t

0x88f1,	// (0x00061c10) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x88f1,	// (0x00061c10) list_single_cmail_header_editor_pane_bg_cp01

0x8915,	// (0x00061c34) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8915,	// (0x00061c34) list_single_cmail_header_editor_pane_bg_cp02

0x8933,	// (0x00061c52) main_radioblah_text_pane_t1_ParamLimits

0x8933,	// (0x00061c52) main_radioblah_text_pane_t1

0xd087,	// (0x000663a6) cam6_indi_pane_cp01

0xd08f,	// (0x000663ae) cam6_mode_pane_cp01

0xd097,	// (0x000663b6) cam6_pano_pane

0xd0a0,	// (0x000663bf) cam6_zoom_pane_cp01

0xd0aa,	// (0x000663c9) cam6_pano_image_pane

0xd0b3,	// (0x000663d2) cam6_pano_pane_g1

0xc7c5,	// (0x00065ae4) cam6_pano_pane_g2

0xd0bc,	// (0x000663db) cam6_pano_pane_g3

0xd0c5,	// (0x000663e4) cam6_pano_pane_g4

0x5413,	// (0x0005e732) cam6_pano_pane_g5

0xd0ce,	// (0x000663ed) cam6_pano_pane_g6

0xd0d6,	// (0x000663f5) cam6_pano_pane_g7

0xd0de,	// (0x000663fd) cam6_pano_pane_g8

0xd0e7,	// (0x00066406) cam6_pano_pane_g9

0x0008,

0xfc0c,	// (0x00068f2b) cam6_pano_pane_g

0x9b2c,	// (0x00062e4b) main_browser_tag_pane

0xce0c,	// (0x0006612b) grid_navstr_albumart_pane

0xd0f2,	// (0x00066411) cell_navstr_albumart_pane_ParamLimits

0xd0f2,	// (0x00066411) cell_navstr_albumart_pane

0xd10e,	// (0x0006642d) cell_navstr_albumart_pane_g1

0xe5ea,	// (0x00067909) cell_navstr_albumart_pane_g2

0xe5fa,	// (0x00067919) cell_navstr_albumart_pane_g3

0xe5f2,	// (0x00067911) cell_navstr_albumart_pane_g4

0x0003,

0xfc1f,	// (0x00068f3e) cell_navstr_albumart_pane_g

0x894e,	// (0x00061c6d) bt_list_pane_ParamLimits

0x894e,	// (0x00061c6d) bt_list_pane

0x8964,	// (0x00061c83) bt_list_pane_t1

0x8973,	// (0x00061c92) bt_list_pane_t2

0x0001,

0xfc28,	// (0x00068f47) bt_list_pane_t

0x9b2c,	// (0x00062e4b) main_cale_prevew_pane

0x8982,	// (0x00061ca1) popup_cale_preview_window_ParamLimits

0x8982,	// (0x00061ca1) popup_cale_preview_window

0xa286,	// (0x000635a5) bg_popup_preview_window_pane_cp05_ParamLimits

0xa286,	// (0x000635a5) bg_popup_preview_window_pane_cp05

0xd116,	// (0x00066435) list_cale_preview_pane_ParamLimits

0xd116,	// (0x00066435) list_cale_preview_pane

0x899f,	// (0x00061cbe) list_double_cale_preview_pane_ParamLimits

0x899f,	// (0x00061cbe) list_double_cale_preview_pane

0x89b3,	// (0x00061cd2) list_single_cale_preview_pane_ParamLimits

0x89b3,	// (0x00061cd2) list_single_cale_preview_pane

0x89cb,	// (0x00061cea) list_single_cale_preview_pane_g1

0x89d3,	// (0x00061cf2) list_single_cale_preview_pane_t1_ParamLimits

0x89d3,	// (0x00061cf2) list_single_cale_preview_pane_t1

0x89e8,	// (0x00061d07) list_double_cale_preview_pane_g1

0x89f0,	// (0x00061d0f) list_double_cale_preview_pane_t1_ParamLimits

0x89f0,	// (0x00061d0f) list_double_cale_preview_pane_t1

0x8a05,	// (0x00061d24) list_double_cale_preview_pane_t2_ParamLimits

0x8a05,	// (0x00061d24) list_double_cale_preview_pane_t2

0x0001,

0xfc2d,	// (0x00068f4c) list_double_cale_preview_pane_t_ParamLimits

0xfc2d,	// (0x00068f4c) list_double_cale_preview_pane_t

0x9b2c,	// (0x00062e4b) main_ezdial_pane

0xa286,	// (0x000635a5) main_sp_fs_email_pane_ParamLimits

0x8236,	// (0x00061555) cmail_ddmenu_btn01_pane_ParamLimits

0x8236,	// (0x00061555) cmail_ddmenu_btn01_pane

0x8249,	// (0x00061568) cmail_ddmenu_btn02_pane_ParamLimits

0x8249,	// (0x00061568) cmail_ddmenu_btn02_pane

0x826c,	// (0x0006158b) cmail_ddmenu_btn03_pane_ParamLimits

0x826c,	// (0x0006158b) cmail_ddmenu_btn03_pane

0x830a,	// (0x00061629) main_sp_fs_ctrlbar_pane_ParamLimits

0x832e,	// (0x0006164d) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8656,	// (0x00061975) list_cmail_body_pane_ParamLimits

0xcd09,	// (0x00066028) bg_button_pane_cp12

0xcd1e,	// (0x0006603d) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcd1e,	// (0x0006603d) list_single_cmail_header_detail_pane_g3

0xcd67,	// (0x00066086) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcd67,	// (0x00066086) list_single_cmail_header_detail_pane_t2

0x0001,

0xfbb0,	// (0x00068ecf) list_single_cmail_header_detail_pane_t_ParamLimits

0xfbb0,	// (0x00068ecf) list_single_cmail_header_detail_pane_t

0xce74,	// (0x00066193) phacti_term_pane_t2_ParamLimits

0xce74,	// (0x00066193) phacti_term_pane_t2

0x0001,

0xfbba,	// (0x00068ed9) phacti_term_pane_t_ParamLimits

0xfbba,	// (0x00068ed9) phacti_term_pane_t

0xd122,	// (0x00066441) aid_size_list_single_double

0x8a1d,	// (0x00061d3c) popup_ezdial_listscroll_window

0x8a39,	// (0x00061d58) popup_number_entry_window_cp01

0xa594,	// (0x000638b3) bg_popup_call_pane_cp09

0xd12e,	// (0x0006644d) ezdial_list_pane

0xd136,	// (0x00066455) scroll_pane_cp23

0xb086,	// (0x000643a5) bg_button_pane_cp028_ParamLimits

0xb086,	// (0x000643a5) bg_button_pane_cp028

0x8a47,	// (0x00061d66) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8a47,	// (0x00061d66) cmail_ddmenu_btn01_pane_g1

0x8a56,	// (0x00061d75) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8a56,	// (0x00061d75) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc32,	// (0x00068f51) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc32,	// (0x00068f51) cmail_ddmenu_btn01_pane_g

0xd13e,	// (0x0006645d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd13e,	// (0x0006645d) cmail_ddmenu_btn01_pane_t1

0xb086,	// (0x000643a5) bg_button_pane_cp029_ParamLimits

0xb086,	// (0x000643a5) bg_button_pane_cp029

0x8a6c,	// (0x00061d8b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8a6c,	// (0x00061d8b) cmail_ddmenu_btn02_pane_g1

0x8a87,	// (0x00061da6) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8a87,	// (0x00061da6) cmail_ddmenu_btn02_pane_t1

0xa286,	// (0x000635a5) bg_button_pane_cp031_ParamLimits

0xa286,	// (0x000635a5) bg_button_pane_cp031

0x8a6c,	// (0x00061d8b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8a6c,	// (0x00061d8b) cmail_ddmenu_btn03_pane_g1

0x8a87,	// (0x00061da6) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8a87,	// (0x00061da6) cmail_ddmenu_btn03_pane_t1

0x59f4,	// (0x0005ed13) cell_dialer2_keypad_pane_t1_ParamLimits

0x5a0e,	// (0x0005ed2d) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5a0e,	// (0x0005ed2d) cell_dialer2_keypad_pane_t1_copy1

0x7925,	// (0x00060c44) ncimui_group_button_pane

0xa286,	// (0x000635a5) main_sp_fs_calendar_pane_ParamLimits

0x866d,	// (0x0006198c) list_single_cmail_header_caption_pane_ParamLimits

0xcebf,	// (0x000661de) aid_recal_txt_sm_pane

0x9b2c,	// (0x00062e4b) mian_recal_day_pane

0xcf01,	// (0x00066220) popup_sp_fs_cale_preview_window_ParamLimits

0xd154,	// (0x00066473) list_recal_day_pane

0xd197,	// (0x000664b6) list_single_recal_day_pane_ParamLimits

0xd197,	// (0x000664b6) list_single_recal_day_pane

0xd1a9,	// (0x000664c8) list_single_recal_day_pane_g1_ParamLimits

0xd1a9,	// (0x000664c8) list_single_recal_day_pane_g1

0xd1b5,	// (0x000664d4) list_single_recal_day_pane_g2_ParamLimits

0xd1b5,	// (0x000664d4) list_single_recal_day_pane_g2

0xd1c1,	// (0x000664e0) list_single_recal_day_pane_g3_ParamLimits

0xd1c1,	// (0x000664e0) list_single_recal_day_pane_g3

0x8aae,	// (0x00061dcd) list_single_recal_day_pane_g4_ParamLimits

0x8aae,	// (0x00061dcd) list_single_recal_day_pane_g4

0xd1cd,	// (0x000664ec) list_single_recal_day_pane_g5_ParamLimits

0xd1cd,	// (0x000664ec) list_single_recal_day_pane_g5

0xd1d9,	// (0x000664f8) list_single_recal_day_pane_g6_ParamLimits

0xd1d9,	// (0x000664f8) list_single_recal_day_pane_g6

0x0004,

0xfc41,	// (0x00068f60) list_single_recal_day_pane_g_ParamLimits

0xfc41,	// (0x00068f60) list_single_recal_day_pane_g

0xd1ed,	// (0x0006650c) list_single_recal_day_pane_t1

0xd1ff,	// (0x0006651e) list_single_recal_day_pane_t2

0x0001,

0xfc4c,	// (0x00068f6b) list_single_recal_day_pane_t

0x8ac6,	// (0x00061de5) ncimui_query_button_pane_ParamLimits

0x8ac6,	// (0x00061de5) ncimui_query_button_pane

0x8ad6,	// (0x00061df5) ncimui_query_button_pane_t1_ParamLimits

0x8ad6,	// (0x00061df5) ncimui_query_button_pane_t1

0xd211,	// (0x00066530) ncimui_query_button_pane_t2_ParamLimits

0xd211,	// (0x00066530) ncimui_query_button_pane_t2

0x0001,

0xfc51,	// (0x00068f70) ncimui_query_button_pane_t_ParamLimits

0xfc51,	// (0x00068f70) ncimui_query_button_pane_t

0x8ae9,	// (0x00061e08) query_button_pane_ParamLimits

0x8ae9,	// (0x00061e08) query_button_pane

0x9b2c,	// (0x00062e4b) bg_button_pane_cp0028

0xd224,	// (0x00066543) query_button_pane_t1

0x3faa,	// (0x0005d2c9) main_tport_pane_ParamLimits

0x8517,	// (0x00061836) bg_popup_window_pane_cp01_ParamLimits

0x8517,	// (0x00061836) bg_popup_window_pane_cp01

0x8530,	// (0x0006184f) heading_pane_cp08_ParamLimits

0x8530,	// (0x0006184f) heading_pane_cp08

0x8543,	// (0x00061862) heading_pane_cp07_ParamLimits

0x8543,	// (0x00061862) heading_pane_cp07

0x85e5,	// (0x00061904) cell_tport_appsw_pane_g2

0x0002,

0xfb9d,	// (0x00068ebc) cell_tport_appsw_pane_g

0x3480,	// (0x0005c79f) input_candi_list_open_g1

0xa9ef,	// (0x00063d0e) list_cale_time_pane_g6_ParamLimits

0xa9ef,	// (0x00063d0e) list_cale_time_pane_g6

0x465a,	// (0x0005d979) aid_size_touch_calib_1_ParamLimits

0x465a,	// (0x0005d979) aid_size_touch_calib_1

0x466c,	// (0x0005d98b) aid_size_touch_calib_2_ParamLimits

0x466c,	// (0x0005d98b) aid_size_touch_calib_2

0x4684,	// (0x0005d9a3) aid_size_touch_calib_3_ParamLimits

0x4684,	// (0x0005d9a3) aid_size_touch_calib_3

0x46a2,	// (0x0005d9c1) aid_size_touch_calib_4_ParamLimits

0x46a2,	// (0x0005d9c1) aid_size_touch_calib_4

0x46ba,	// (0x0005d9d9) main_touch_calib_button_group_pane_ParamLimits

0x46ba,	// (0x0005d9d9) main_touch_calib_button_group_pane

0x46d2,	// (0x0005d9f1) main_touch_calib_pane_g1_ParamLimits

0x46e4,	// (0x0005da03) main_touch_calib_pane_g2_ParamLimits

0x46f6,	// (0x0005da15) main_touch_calib_pane_g3_ParamLimits

0x4708,	// (0x0005da27) main_touch_calib_pane_g4_ParamLimits

0xf5f0,	// (0x0006890f) main_touch_calib_pane_g_ParamLimits

0x471a,	// (0x0005da39) main_touch_calib_pane_t1_ParamLimits

0x4734,	// (0x0005da53) main_touch_calib_pane_t2_ParamLimits

0x474e,	// (0x0005da6d) main_touch_calib_pane_t3_ParamLimits

0x4762,	// (0x0005da81) main_touch_calib_pane_t4_ParamLimits

0x4778,	// (0x0005da97) main_touch_calib_pane_t5_ParamLimits

0xf5f9,	// (0x00068918) main_touch_calib_pane_t_ParamLimits

0xee80,	// (0x0006819f) list_single_fp_cale_pane_g3_ParamLimits

0xee80,	// (0x0006819f) list_single_fp_cale_pane_g3

0x9ba9,	// (0x00062ec8) bg_button_pane_cp012_ParamLimits

0x9ba9,	// (0x00062ec8) bg_vkb2_func_pane_cp03_ParamLimits

0x6a9e,	// (0x0005fdbd) cell_vitu2_function_top_pane_g1_ParamLimits

0x9ba9,	// (0x00062ec8) bg_vkb2_func_pane_cp04_ParamLimits

0x78b0,	// (0x00060bcf) main_ncimui_button_group_pane_ParamLimits

0x78b0,	// (0x00060bcf) main_ncimui_button_group_pane

0x7910,	// (0x00060c2f) main_ncimui_pane_t3_ParamLimits

0x7910,	// (0x00060c2f) main_ncimui_pane_t3

0xce22,	// (0x00066141) phacti_button_group_pane

0xd122,	// (0x00066441) aid_size_list_single_double_ParamLimits

0x8a1d,	// (0x00061d3c) popup_ezdial_listscroll_window_ParamLimits

0x8a39,	// (0x00061d58) popup_number_entry_window_cp01_ParamLimits

0x8afc,	// (0x00061e1b) phacti_button_pane_ParamLimits

0x8afc,	// (0x00061e1b) phacti_button_pane

0x9b2c,	// (0x00062e4b) bg_button_pane_cp14

0xd232,	// (0x00066551) phacti_button_pane_t1

0x8b0d,	// (0x00061e2c) main_touch_calib_button_pane_ParamLimits

0x8b0d,	// (0x00061e2c) main_touch_calib_button_pane

0xa381,	// (0x000636a0) bg_button_pane_cp18_ParamLimits

0xa381,	// (0x000636a0) bg_button_pane_cp18

0xd240,	// (0x0006655f) main_touch_calib_button_pane_t1_ParamLimits

0xd240,	// (0x0006655f) main_touch_calib_button_pane_t1

0xd256,	// (0x00066575) main_touch_calib_button_pane_t2_ParamLimits

0xd256,	// (0x00066575) main_touch_calib_button_pane_t2

0x0001,

0xfc56,	// (0x00068f75) main_touch_calib_button_pane_t_ParamLimits

0xfc56,	// (0x00068f75) main_touch_calib_button_pane_t

0x9b2c,	// (0x00062e4b) cell_ncimui_button_pane

0x9b2c,	// (0x00062e4b) bg_button_pane_cp032

0xd274,	// (0x00066593) cell_ncimui_button_pane_t1

0xdacf,	// (0x00066dee) image3_infobar_pane_ParamLimits

0xdacf,	// (0x00066dee) image3_infobar_pane

0x7d27,	// (0x00061046) fs_bigclock_status_pane_ParamLimits

0x7d27,	// (0x00061046) fs_bigclock_status_pane

0x7d34,	// (0x00061053) main_fs_bigclock_clock_pane_ParamLimits

0x7d34,	// (0x00061053) main_fs_bigclock_clock_pane

0x7d66,	// (0x00061085) main_fs_bigclock_indi_pane_ParamLimits

0x7d66,	// (0x00061085) main_fs_bigclock_indi_pane

0x7da6,	// (0x000610c5) main_fs_bigclock_swipe_pane_ParamLimits

0x7da6,	// (0x000610c5) main_fs_bigclock_swipe_pane

0x9b2c,	// (0x00062e4b) main_fs_clock_dumped_data

0x7df2,	// (0x00061111) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7df2,	// (0x00061111) list_single_fs_bigclock_indicator_pane_g1

0x7e0b,	// (0x0006112a) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7e0b,	// (0x0006112a) list_single_fs_bigclock_indicator_pane_g2

0x7e25,	// (0x00061144) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7e25,	// (0x00061144) list_single_fs_bigclock_indicator_pane_g3

0x7e3f,	// (0x0006115e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7e3f,	// (0x0006115e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfaf7,	// (0x00068e16) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfaf7,	// (0x00068e16) list_single_fs_bigclock_indicator_pane_g

0x7e6e,	// (0x0006118d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7e6e,	// (0x0006118d) list_single_fs_bigclock_indicator_pane_t1

0x7e96,	// (0x000611b5) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7e96,	// (0x000611b5) list_single_fs_bigclock_indicator_pane_t2

0x7ebe,	// (0x000611dd) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7ebe,	// (0x000611dd) list_single_fs_bigclock_indicator_pane_t3

0x7ee6,	// (0x00061205) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7ee6,	// (0x00061205) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb02,	// (0x00068e21) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb02,	// (0x00068e21) list_single_fs_bigclock_indicator_pane_t

0xd282,	// (0x000665a1) image3_infobar_fav_pane_ParamLimits

0xd282,	// (0x000665a1) image3_infobar_fav_pane

0xd292,	// (0x000665b1) image3_infobar_loc_pane_ParamLimits

0xd292,	// (0x000665b1) image3_infobar_loc_pane

0xd2a8,	// (0x000665c7) image3_infobar_time_pane_ParamLimits

0xd2a8,	// (0x000665c7) image3_infobar_time_pane

0xa5e9,	// (0x00063908) image3_infobar_time_pane_g1

0xd2b8,	// (0x000665d7) image3_infobar_time_pane_t1

0xa5e9,	// (0x00063908) image3_infobar_loc_pane_g1

0xd2c6,	// (0x000665e5) image3_infobar_loc_pane_g2

0x0001,

0xfc5b,	// (0x00068f7a) image3_infobar_loc_pane_g

0xd2ce,	// (0x000665ed) image3_infobar_loc_pane_t1

0xa5e9,	// (0x00063908) image3_infobar_fav_pane_g1

0xd2dc,	// (0x000665fb) image3_infobar_fav_pane_g2

0x0001,

0xfc60,	// (0x00068f7f) image3_infobar_fav_pane_g

0xd2e4,	// (0x00066603) fs_bigclock_status_battery_pane

0xd2ed,	// (0x0006660c) fs_bigclock_status_signal_pane

0xd2f6,	// (0x00066615) fs_bigclock_status_title_pane

0xd2ff,	// (0x0006661e) fs_bigclock_status_signal_pane_g1

0xd308,	// (0x00066627) fs_bigclock_status_signal_pane_g2

0x0001,

0xfc65,	// (0x00068f84) fs_bigclock_status_signal_pane_g

0xd310,	// (0x0006662f) fs_bigclock_status_battery_pane_g1

0xd319,	// (0x00066638) fs_bigclock_status_battery_pane_g2

0x0001,

0xfc6a,	// (0x00068f89) fs_bigclock_status_battery_pane_g

0xd321,	// (0x00066640) fs_bigclock_status_title_pane_t1

0x8b22,	// (0x00061e41) main_fs_bigclock_clock_pane_g1

0x8b22,	// (0x00061e41) main_fs_bigclock_clock_pane_g2

0x8b35,	// (0x00061e54) main_fs_bigclock_clock_pane_g3

0x8b35,	// (0x00061e54) main_fs_bigclock_clock_pane_g4

0x0003,

0xfc6f,	// (0x00068f8e) main_fs_bigclock_clock_pane_g

0x8b4c,	// (0x00061e6b) main_fs_bigclock_clock_pane_t1

0x8b62,	// (0x00061e81) main_fs_bigclock_clock_pane_t2

0x0001,

0xfc78,	// (0x00068f97) main_fs_bigclock_clock_pane_t

0xd32f,	// (0x0006664e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd32f,	// (0x0006664e) list_single_fs_bigclock_indicator_pane

0xd340,	// (0x0006665f) list_single_fs_bigclock_pane_ParamLimits

0xd340,	// (0x0006665f) list_single_fs_bigclock_pane

0xd366,	// (0x00066685) main_fs_bigclock_indicator_pane_t1

0xd375,	// (0x00066694) list_single_fs_bigclock_pane_g1

0xd37d,	// (0x0006669c) list_single_fs_bigclock_pane_t1

0xa5e9,	// (0x00063908) main_fs_bigclock_swipe_pane_g1

0xd3c0,	// (0x000666df) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfc89,	// (0x00068fa8) main_fs_bigclock_swipe_pane_g

0xd3c8,	// (0x000666e7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd3c8,	// (0x000666e7) main_fs_bigclock_swipe_pane_t1

0x2e39,	// (0x0005c158) call_type_pane_ParamLimits

0x9b2c,	// (0x00062e4b) main_btmg_pane

0xcffe,	// (0x0006631d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xcffe,	// (0x0006631d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfbfc,	// (0x00068f1b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfbfc,	// (0x00068f1b) list_single_cale_mrui_row_pane_g

0xd17d,	// (0x0006649c) list_recal_vselct_arw_lo_pane

0xd185,	// (0x000664a4) list_recal_vselct_arw_up_pane

0xd18d,	// (0x000664ac) list_recal_vselct_pane

0x8bc4,	// (0x00061ee3) btmg_button_pane

0x8bce,	// (0x00061eed) main_btmg_pane_g1

0x9b2c,	// (0x00062e4b) bg_button_pane_cp044

0xd3e5,	// (0x00066704) btmg_button_pane_t1

0xe73c,	// (0x00067a5b) aid_listscroll_gen

0xa286,	// (0x000635a5) main_cntbar_detail_pane

0xccb9,	// (0x00065fd8) list_cmail_folder_pane

0xefce,	// (0x000682ed) sp_fs_scroll_pane_cp03_ParamLimits

0x8bd8,	// (0x00061ef7) list_single_fs_dyc_pane_cp01_ParamLimits

0x8bd8,	// (0x00061ef7) list_single_fs_dyc_pane_cp01

0xd3f3,	// (0x00066712) aid_size_cmail_indent

0xd3fc,	// (0x0006671b) list_single_dyc_row_pane_cp01

0x8c27,	// (0x00061f46) cntbar_detail_list_pane_ParamLimits

0x8c27,	// (0x00061f46) cntbar_detail_list_pane

0x8c79,	// (0x00061f98) main_cntbar_detail_cont_pane_ParamLimits

0x8c79,	// (0x00061f98) main_cntbar_detail_cont_pane

0xefce,	// (0x000682ed) scroll_pane_cp032_ParamLimits

0xefce,	// (0x000682ed) scroll_pane_cp032

0x8c8d,	// (0x00061fac) cntbar_detail_list_event_pane_ParamLimits

0x8c8d,	// (0x00061fac) cntbar_detail_list_event_pane

0x8c39,	// (0x00061f58) cntbar_detail_list_shct_pane

0xa84c,	// (0x00063b6b) aid_list_gen

0xd405,	// (0x00066724) aid_scroll

0xd40e,	// (0x0006672d) aid_size_touch_scroll_bar

0x8c9d,	// (0x00061fbc) aid_list_double

0x8ca6,	// (0x00061fc5) aid_list_single

0x8ca6,	// (0x00061fc5) aid_list_single_lg

0x8caf,	// (0x00061fce) aid_list_z_g_a_sm

0x8cb7,	// (0x00061fd6) aid_list_z_g_d

0x8cbf,	// (0x00061fde) aid_txt_z_prm

0x8ccd,	// (0x00061fec) aid_txt_z_prm_cp01

0x8cdb,	// (0x00061ffa) aid_txt_z_sec

0x8ce9,	// (0x00062008) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8ce9,	// (0x00062008) main_cntbar_detail_cont_pane_g1

0x8cfd,	// (0x0006201c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8cfd,	// (0x0006201c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfc8e,	// (0x00068fad) main_cntbar_detail_cont_pane_g_ParamLimits

0xfc8e,	// (0x00068fad) main_cntbar_detail_cont_pane_g

0xd417,	// (0x00066736) main_cntbar_detail_cont_pane_t1

0xd425,	// (0x00066744) main_cntbar_detail_cont_pane_t2

0xd433,	// (0x00066752) main_cntbar_detail_cont_pane_t3

0x0002,

0xfc93,	// (0x00068fb2) main_cntbar_detail_cont_pane_t

0x8d0d,	// (0x0006202c) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8d0d,	// (0x0006202c) cell_cntbar_detail_list_shct_pane

0xd441,	// (0x00066760) cntbar_detail_list_shct_pane_g1

0xd44a,	// (0x00066769) cntbar_detail_list_shct_pane_g2

0x0001,

0xfc9a,	// (0x00068fb9) cntbar_detail_list_shct_pane_g

0x8d1f,	// (0x0006203e) cntbar_detail_list_event_pane_g1_ParamLimits

0x8d1f,	// (0x0006203e) cntbar_detail_list_event_pane_g1

0x8d2b,	// (0x0006204a) cntbar_detail_list_event_pane_g2_ParamLimits

0x8d2b,	// (0x0006204a) cntbar_detail_list_event_pane_g2

0x0005,

0xfc9f,	// (0x00068fbe) cntbar_detail_list_event_pane_g_ParamLimits

0xfc9f,	// (0x00068fbe) cntbar_detail_list_event_pane_g

0x8d99,	// (0x000620b8) cntbar_detail_list_event_pane_t1_ParamLimits

0x8d99,	// (0x000620b8) cntbar_detail_list_event_pane_t1

0x8dae,	// (0x000620cd) cntbar_detail_list_event_pane_t2_ParamLimits

0x8dae,	// (0x000620cd) cntbar_detail_list_event_pane_t2

0x0002,

0xfcac,	// (0x00068fcb) cntbar_detail_list_event_pane_t_ParamLimits

0xfcac,	// (0x00068fcb) cntbar_detail_list_event_pane_t

0xa5e9,	// (0x00063908) cell_cntbar_detail_list_shct_pane_g1

0x31d7,	// (0x0005c4f6) navi_pane_mv_g3

0xa286,	// (0x000635a5) main_cntbar_detail_pane_ParamLimits

0x9b2c,	// (0x00062e4b) main_notif_wgt_pane

0xd8bf,	// (0x00066bde) aid_tch_main_mp4_pane_g4

0xdac7,	// (0x00066de6) popup_slider_window_cp02

0xd173,	// (0x00066492) list_recal_day_event_pane

0x8bf3,	// (0x00061f12) cntbar_detail_btn_pane_ParamLimits

0x8bf3,	// (0x00061f12) cntbar_detail_btn_pane

0x8c0c,	// (0x00061f2b) cntbar_detail_btn_pane_cp01_ParamLimits

0x8c0c,	// (0x00061f2b) cntbar_detail_btn_pane_cp01

0x8c39,	// (0x00061f58) cntbar_detail_list_shct_pane_ParamLimits

0x8c49,	// (0x00061f68) cntbar_detail_pane_g1_ParamLimits

0x8c49,	// (0x00061f68) cntbar_detail_pane_g1

0x8c5d,	// (0x00061f7c) cntbar_detail_pane_t1_ParamLimits

0x8c5d,	// (0x00061f7c) cntbar_detail_pane_t1

0x8d37,	// (0x00062056) cntbar_detail_list_event_pane_g3_ParamLimits

0x8d37,	// (0x00062056) cntbar_detail_list_event_pane_g3

0x8d4f,	// (0x0006206e) cntbar_detail_list_event_pane_g4_ParamLimits

0x8d4f,	// (0x0006206e) cntbar_detail_list_event_pane_g4

0x8d67,	// (0x00062086) cntbar_detail_list_event_pane_g5_ParamLimits

0x8d67,	// (0x00062086) cntbar_detail_list_event_pane_g5

0x8d7f,	// (0x0006209e) cntbar_detail_list_event_pane_g6_ParamLimits

0x8d7f,	// (0x0006209e) cntbar_detail_list_event_pane_g6

0x8dc3,	// (0x000620e2) cntbar_detail_list_event_pane_t3_ParamLimits

0x8dc3,	// (0x000620e2) cntbar_detail_list_event_pane_t3

0x8dd5,	// (0x000620f4) popup_notif_wgt_window_ParamLimits

0x8dd5,	// (0x000620f4) popup_notif_wgt_window

0x8dee,	// (0x0006210d) popup_submenu_window_cp01_ParamLimits

0x8dee,	// (0x0006210d) popup_submenu_window_cp01

0xa594,	// (0x000638b3) bg_popup_window_pane_cp10

0xd453,	// (0x00066772) listscroll_notif_wgt_pane

0xd465,	// (0x00066784) list_notif_wgt_window

0xd46e,	// (0x0006678d) scroll_pane_cp033

0x8e02,	// (0x00062121) list_notif_wgt_row_pane_ParamLimits

0x8e02,	// (0x00062121) list_notif_wgt_row_pane

0xd477,	// (0x00066796) aid_size_list_notif_wgt_del

0xd484,	// (0x000667a3) list_notif_wgt_row_pane_g1

0xd490,	// (0x000667af) list_notif_wgt_row_pane_g2

0xd49f,	// (0x000667be) list_notif_wgt_row_pane_g3

0x0002,

0xfcb3,	// (0x00068fd2) list_notif_wgt_row_pane_g

0xd4ac,	// (0x000667cb) list_notif_wgt_row_pane_t1

0xd4c2,	// (0x000667e1) list_notif_wgt_row_pane_t2

0xd4d4,	// (0x000667f3) list_notif_wgt_row_pane_t3

0x0002,

0xfcba,	// (0x00068fd9) list_notif_wgt_row_pane_t

0xbd0b,	// (0x0006502a) list_recal_day_event_pane_g1

0xd4e6,	// (0x00066805) list_recal_day_event_pane_t1

0x9b2c,	// (0x00062e4b) bg_button_pane_cp045

0x8e12,	// (0x00062131) cntbar_detail_btn_pane_t1

0xb086,	// (0x000643a5) main_callh_pane_ParamLimits

0xb086,	// (0x000643a5) main_callh_pane

0x9b2c,	// (0x00062e4b) main_coverflow0_pane

0x9b2c,	// (0x00062e4b) main_wgtman_pane

0x7dc7,	// (0x000610e6) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7dc7,	// (0x000610e6) main_fs_bigclock_unlock_btn_pane

0x85dd,	// (0x000618fc) bg_button_pane_cp16

0x85ed,	// (0x0006190c) cell_tport_appsw_pane_g3

0x8e20,	// (0x0006213f) cf0_flow_pane_ParamLimits

0x8e20,	// (0x0006213f) cf0_flow_pane

0xd4f5,	// (0x00066814) listscroll_cf0_pane

0xd500,	// (0x0006681f) main_cf0_pane_g1

0x8e35,	// (0x00062154) main_cf0_pane_t1_ParamLimits

0x8e35,	// (0x00062154) main_cf0_pane_t1

0x8e4c,	// (0x0006216b) main_cf0_pane_t2_ParamLimits

0x8e4c,	// (0x0006216b) main_cf0_pane_t2

0x0001,

0xfcc6,	// (0x00068fe5) main_cf0_pane_t_ParamLimits

0xfcc6,	// (0x00068fe5) main_cf0_pane_t

0xd512,	// (0x00066831) scroll_pane_cp11

0x8e63,	// (0x00062182) cf0_flow_pane_g1

0x8e6f,	// (0x0006218e) cf0_flow_pane_g2

0x0001,

0xfccb,	// (0x00068fea) cf0_flow_pane_g

0x8e7b,	// (0x0006219a) cf0_flow_pane_t1

0x9b2c,	// (0x00062e4b) main_call6_pane

0x9b2c,	// (0x00062e4b) main_calllock_pane

0x8e8d,	// (0x000621ac) call6_btn_grp_pane_ParamLimits

0x8e8d,	// (0x000621ac) call6_btn_grp_pane

0x8ea7,	// (0x000621c6) call6_pane_g1_ParamLimits

0x8ea7,	// (0x000621c6) call6_pane_g1

0x8ec0,	// (0x000621df) popup_call6_1st_window_ParamLimits

0x8ec0,	// (0x000621df) popup_call6_1st_window

0x8ed4,	// (0x000621f3) popup_call6_2nd_window_ParamLimits

0x8ed4,	// (0x000621f3) popup_call6_2nd_window

0x8ee8,	// (0x00062207) cell_call6_btn_pane_ParamLimits

0x8ee8,	// (0x00062207) cell_call6_btn_pane

0xa594,	// (0x000638b3) bg_popup_call2_in_pane_cp03

0xd51d,	// (0x0006683c) popup_call6_1st_window_g1

0xd525,	// (0x00066844) popup_call6_1st_window_g2

0xd52d,	// (0x0006684c) popup_call6_1st_window_g3

0x0002,

0xfcd0,	// (0x00068fef) popup_call6_1st_window_g

0xd535,	// (0x00066854) popup_call6_1st_window_t1

0xd544,	// (0x00066863) popup_call6_1st_window_t2

0xd554,	// (0x00066873) popup_call6_1st_window_t3

0x0002,

0xfcd7,	// (0x00068ff6) popup_call6_1st_window_t

0xa594,	// (0x000638b3) bg_popup_call2_in_pane_cp04

0xd564,	// (0x00066883) popup_call6_2nd_window_g1

0xd56c,	// (0x0006688b) popup_call6_2nd_window_g2

0xd574,	// (0x00066893) popup_call6_2nd_window_g3

0x0002,

0xfcde,	// (0x00068ffd) popup_call6_2nd_window_g

0xd57c,	// (0x0006689b) popup_call6_2nd_window_t1

0x9bb7,	// (0x00062ed6) bg_button_pane_cp15

0xdd3d,	// (0x0006705c) cell_call6_btn_pane_g1

0xdd46,	// (0x00067065) cell_call6_btn_pane_t1

0x8efc,	// (0x0006221b) listscroll_wgtman_pane_ParamLimits

0x8efc,	// (0x0006221b) listscroll_wgtman_pane

0x8f1d,	// (0x0006223c) wgtman_btn_pane_ParamLimits

0x8f1d,	// (0x0006223c) wgtman_btn_pane

0xae4d,	// (0x0006416c) aid_scroll_copy1

0xd58b,	// (0x000668aa) list_wgtman_pane

0x8f60,	// (0x0006227f) wgtman_btn_pane_g1_ParamLimits

0x8f60,	// (0x0006227f) wgtman_btn_pane_g1

0x8f8c,	// (0x000622ab) wgtman_btn_pane_t1_ParamLimits

0x8f8c,	// (0x000622ab) wgtman_btn_pane_t1

0xd595,	// (0x000668b4) wgtman_btn_pane_t2_ParamLimits

0xd595,	// (0x000668b4) wgtman_btn_pane_t2

0x0001,

0xfce5,	// (0x00069004) wgtman_btn_pane_t_ParamLimits

0xfce5,	// (0x00069004) wgtman_btn_pane_t

0x8fc9,	// (0x000622e8) listrow_wgtman_pane_ParamLimits

0x8fc9,	// (0x000622e8) listrow_wgtman_pane

0x8fdd,	// (0x000622fc) listrow_wgtman_pane_g1

0x8fea,	// (0x00062309) listrow_wgtman_pane_g2

0x0001,

0xfcea,	// (0x00069009) listrow_wgtman_pane_g

0x9008,	// (0x00062327) listrow_wgtman_pane_t1

0x9020,	// (0x0006233f) listrow_wgtman_pane_t2

0x0001,

0xfcef,	// (0x0006900e) listrow_wgtman_pane_t

0x9046,	// (0x00062365) wait_bar_pane_cp09

0xd5ac,	// (0x000668cb) main_calllock_btn_pane

0xd5b6,	// (0x000668d5) main_calllock_pane_g1

0x9b2c,	// (0x00062e4b) bg_button_pane_cp17

0xd5c2,	// (0x000668e1) main_calllock_btn_pane_g1

0xd5cb,	// (0x000668ea) main_calllock_btn_pane_t1

0x9b2c,	// (0x00062e4b) main_dialer3_pane

0x9b2c,	// (0x00062e4b) main_fmrd2_pane

0xa5e9,	// (0x00063908) main_fs_bigclock_unlock_btn_pane_g1

0x9060,	// (0x0006237f) main_fs_bigclock_unlock_btn_pane_t1

0x906e,	// (0x0006238d) area_fmrd2_info_pane_ParamLimits

0x906e,	// (0x0006238d) area_fmrd2_info_pane

0x907f,	// (0x0006239e) area_fmrd2_visual_pane_ParamLimits

0x907f,	// (0x0006239e) area_fmrd2_visual_pane

0x908d,	// (0x000623ac) fmrd2_indi_pane_ParamLimits

0x908d,	// (0x000623ac) fmrd2_indi_pane

0x909a,	// (0x000623b9) area_fmrd2_visual_pane_g1

0x90a2,	// (0x000623c1) area_fmrd2_visual_pane_t1

0x90b2,	// (0x000623d1) area_fmrd2_visual_pane_t2

0x90c2,	// (0x000623e1) area_fmrd2_visual_pane_t3

0x0002,

0xfcf9,	// (0x00069018) area_fmrd2_visual_pane_t

0x90d2,	// (0x000623f1) area_fmrd2_info_pane_g1

0x90da,	// (0x000623f9) area_fmrd2_info_pane_t1

0x90ea,	// (0x00062409) area_fmrd2_info_pane_t2

0x90fa,	// (0x00062419) area_fmrd2_info_pane_t3

0x910a,	// (0x00062429) area_fmrd2_info_pane_t4

0x0003,

0xfd00,	// (0x0006901f) area_fmrd2_info_pane_t

0x911a,	// (0x00062439) fmrd2_indi_pane_t1

0x912a,	// (0x00062449) fmrd2_indi_pane_t2

0x913a,	// (0x00062459) fmrd2_indi_pane_t3

0x0002,

0xfd09,	// (0x00069028) fmrd2_indi_pane_t

0x7e50,	// (0x0006116f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7e50,	// (0x0006116f) list_single_fs_bigclock_indicator_pane_g5

0x7f05,	// (0x00061224) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7f05,	// (0x00061224) list_single_fs_bigclock_indicator_pane_t5

0x875e,	// (0x00061a7d) aid_cell_bcale_month_pane_ParamLimits

0x875e,	// (0x00061a7d) aid_cell_bcale_month_pane

0x877c,	// (0x00061a9b) bcale_month_pane_ParamLimits

0x877c,	// (0x00061a9b) bcale_month_pane

0x87a0,	// (0x00061abf) bcale_preview_pane_ParamLimits

0x87a0,	// (0x00061abf) bcale_preview_pane

0xd37d,	// (0x0006669c) list_single_fs_bigclock_pane_t1_ParamLimits

0xd39c,	// (0x000666bb) list_single_fs_bigclock_pane_t2_ParamLimits

0xd39c,	// (0x000666bb) list_single_fs_bigclock_pane_t2

0x0001,

0xfc84,	// (0x00068fa3) list_single_fs_bigclock_pane_t_ParamLimits

0xfc84,	// (0x00068fa3) list_single_fs_bigclock_pane_t

0x9058,	// (0x00062377) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfcf4,	// (0x00069013) main_fs_bigclock_unlock_btn_pane_g

0x914a,	// (0x00062469) aid_dia3_key_size_ParamLimits

0x914a,	// (0x00062469) aid_dia3_key_size

0x915e,	// (0x0006247d) aid_dia3_listrow_size_ParamLimits

0x915e,	// (0x0006247d) aid_dia3_listrow_size

0x9178,	// (0x00062497) dia3_keypad_fun_pane_ParamLimits

0x9178,	// (0x00062497) dia3_keypad_fun_pane

0x9192,	// (0x000624b1) dia3_keypad_num_pane_ParamLimits

0x9192,	// (0x000624b1) dia3_keypad_num_pane

0x91ac,	// (0x000624cb) dia3_listscroll_pane_ParamLimits

0x91ac,	// (0x000624cb) dia3_listscroll_pane

0x91c2,	// (0x000624e1) dia3_numentry_pane_ParamLimits

0x91c2,	// (0x000624e1) dia3_numentry_pane

0xd5da,	// (0x000668f9) dia3_list_pane

0x91dc,	// (0x000624fb) scroll_pane_cp12

0x9b2c,	// (0x00062e4b) bg_dia3_numentry_pane

0x91e7,	// (0x00062506) dia3_numentry_pane_t1

0x91f6,	// (0x00062515) cell_dia3_key_num_pane

0x91fe,	// (0x0006251d) cell_dia3_key0_fun_pane_ParamLimits

0x91fe,	// (0x0006251d) cell_dia3_key0_fun_pane

0x9212,	// (0x00062531) cell_dia3_key1_fun_pane_ParamLimits

0x9212,	// (0x00062531) cell_dia3_key1_fun_pane

0x9227,	// (0x00062546) dia3_listrow_pane

0xc681,	// (0x000659a0) bg_dia3_numentry_pane_g1

0x9b2c,	// (0x00062e4b) bg_button_pane_cp21

0x9239,	// (0x00062558) cell_dia3_key_num_pane_t1

0x9247,	// (0x00062566) cell_dia3_key_num_pane_t2

0x9247,	// (0x00062566) cell_dia3_key_num_pane_t3

0x9247,	// (0x00062566) cell_dia3_key_num_pane_t4

0x0003,

0xfd10,	// (0x0006902f) cell_dia3_key_num_pane_t

0x9b2c,	// (0x00062e4b) bg_button_pane_cp19

0x9256,	// (0x00062575) cell_dia3_key0_fun_pane_g1

0x9b2c,	// (0x00062e4b) bg_button_pane_cp20

0x925e,	// (0x0006257d) cell_dia3_key1_fun_pane_g1

0x9266,	// (0x00062585) area_left_week_number_pane

0x9274,	// (0x00062593) area_top_day_name_pane

0x9287,	// (0x000625a6) frame_month_view_pane

0xd5e5,	// (0x00066904) grid_month_view_pane

0x929c,	// (0x000625bb) cell_top_day_name_pane_ParamLimits

0x929c,	// (0x000625bb) cell_top_day_name_pane

0x92cb,	// (0x000625ea) cell_area_left_week_number_pane_ParamLimits

0x92cb,	// (0x000625ea) cell_area_left_week_number_pane

0x92e1,	// (0x00062600) cell_month_view_pane_ParamLimits

0x92e1,	// (0x00062600) cell_month_view_pane

0xd5f3,	// (0x00066912) frm_month_g1

0x9312,	// (0x00062631) frm_month_g2

0x9325,	// (0x00062644) frm_month_g3

0x9338,	// (0x00062657) frm_month_g4

0x934b,	// (0x0006266a) frm_month_g5

0x935e,	// (0x0006267d) frm_month_g6

0x9373,	// (0x00062692) frm_month_g7

0xd600,	// (0x0006691f) frm_month_g8

0x9388,	// (0x000626a7) frm_month_g9

0x9398,	// (0x000626b7) frm_month_g10

0x93a8,	// (0x000626c7) frm_month_g11

0x93b8,	// (0x000626d7) frm_month_g12

0x93ca,	// (0x000626e9) frm_month_g13

0x93de,	// (0x000626fd) frm_month_g14

0x93f2,	// (0x00062711) frm_month_g15

0x9406,	// (0x00062725) frm_month_g16

0x000f,

0xfd19,	// (0x00069038) frm_month_g

0xd60d,	// (0x0006692c) cell_top_day_name_pane_t1

0x941a,	// (0x00062739) cell_area_left_week_number_pane_g1

0x9426,	// (0x00062745) cell_area_left_week_number_pane_t1

0xa2ed,	// (0x0006360c) cell_month_view_pane_g1

0x9439,	// (0x00062758) cell_month_view_pane_t1

0x9b2c,	// (0x00062e4b) main_fps_pane

0xcae1,	// (0x00065e00) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xcae1,	// (0x00065e00) cmail_ddmenu_btn02_pane_cp1

0xcafd,	// (0x00065e1c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xcafd,	// (0x00065e1c) cmail_ddmenu_btn02_pane_cp2

0x8a7b,	// (0x00061d9a) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8a7b,	// (0x00061d9a) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc37,	// (0x00068f56) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc37,	// (0x00068f56) cmail_ddmenu_btn02_pane_g

0x8a9c,	// (0x00061dbb) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8a9c,	// (0x00061dbb) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfc3c,	// (0x00068f5b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfc3c,	// (0x00068f5b) cmail_ddmenu_btn02_pane_t

0x944c,	// (0x0006276b) fps_text_pane_ParamLimits

0x944c,	// (0x0006276b) fps_text_pane

0x9463,	// (0x00062782) main_fps_pane_g1_ParamLimits

0x9463,	// (0x00062782) main_fps_pane_g1

0x947b,	// (0x0006279a) wait_bar_pane_cp010_ParamLimits

0x947b,	// (0x0006279a) wait_bar_pane_cp010

0x948e,	// (0x000627ad) fps_text_pane_t1_ParamLimits

0x948e,	// (0x000627ad) fps_text_pane_t1

0x5f6a,	// (0x0005f289) cam4_image_uncrop_pane_g1

0x5f73,	// (0x0005f292) cam4_image_uncrop_pane_g2

0x5f7e,	// (0x0005f29d) cam4_image_uncrop_pane_g3

0x5f87,	// (0x0005f2a6) cam4_image_uncrop_pane_g4

0x0003,

0xf77b,	// (0x00068a9a) cam4_image_uncrop_pane_g

0x9227,	// (0x00062546) dia3_listrow_pane_ParamLimits

0x9b2c,	// (0x00062e4b) main_phob2_pane

0x85b0,	// (0x000618cf) cell_tport_appsw_pane_cp02_ParamLimits

0x85b0,	// (0x000618cf) cell_tport_appsw_pane_cp02

0x85c4,	// (0x000618e3) cell_tport_appsw_pane_cp03_ParamLimits

0x85c4,	// (0x000618e3) cell_tport_appsw_pane_cp03

0x9b2c,	// (0x00062e4b) phob2_contact_card_pane

0x9b2c,	// (0x00062e4b) phob2_listscroll_pane

0xd620,	// (0x0006693f) phob2_list_pane

0xd628,	// (0x00066947) scroll_pane_cp034

0x94a6,	// (0x000627c5) phob2_cc_data_pane_ParamLimits

0x94a6,	// (0x000627c5) phob2_cc_data_pane

0x94bf,	// (0x000627de) phob2_cc_listscroll_pane_ParamLimits

0x94bf,	// (0x000627de) phob2_cc_listscroll_pane

0x8fc9,	// (0x000622e8) list_double_large_graphic_phob2_pane_ParamLimits

0x8fc9,	// (0x000622e8) list_double_large_graphic_phob2_pane

0x94e1,	// (0x00062800) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x94e1,	// (0x00062800) list_double_large_graphic_phob2_pane_g1

0x94ee,	// (0x0006280d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x94ee,	// (0x0006280d) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfd3a,	// (0x00069059) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfd3a,	// (0x00069059) list_double_large_graphic_phob2_pane_g

0x9514,	// (0x00062833) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9514,	// (0x00062833) list_double_large_graphic_phob2_pane_t1

0x9529,	// (0x00062848) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9529,	// (0x00062848) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfd43,	// (0x00069062) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfd43,	// (0x00069062) list_double_large_graphic_phob2_pane_t

0x9b2c,	// (0x00062e4b) list_highlight_pane_cp024

0x953e,	// (0x0006285d) phob2_cc_button_pane

0x9548,	// (0x00062867) phob2_cc_data_pane_g1_ParamLimits

0x9548,	// (0x00062867) phob2_cc_data_pane_g1

0x9562,	// (0x00062881) phob2_cc_data_pane_g2_ParamLimits

0x9562,	// (0x00062881) phob2_cc_data_pane_g2

0x0001,

0xfd48,	// (0x00069067) phob2_cc_data_pane_g_ParamLimits

0xfd48,	// (0x00069067) phob2_cc_data_pane_g

0x9574,	// (0x00062893) phob2_cc_data_pane_t1_ParamLimits

0x9574,	// (0x00062893) phob2_cc_data_pane_t1

0x9594,	// (0x000628b3) phob2_cc_data_pane_t2_ParamLimits

0x9594,	// (0x000628b3) phob2_cc_data_pane_t2

0x95b4,	// (0x000628d3) phob2_cc_data_pane_t3_ParamLimits

0x95b4,	// (0x000628d3) phob2_cc_data_pane_t3

0x0002,

0xfd4d,	// (0x0006906c) phob2_cc_data_pane_t_ParamLimits

0xfd4d,	// (0x0006906c) phob2_cc_data_pane_t

0xd630,	// (0x0006694f) phob2_cc_list_pane_ParamLimits

0xd630,	// (0x0006694f) phob2_cc_list_pane

0xbda2,	// (0x000650c1) scroll_pane_cp035_ParamLimits

0xbda2,	// (0x000650c1) scroll_pane_cp035

0xa286,	// (0x000635a5) bg_button_pane_cp033

0xd63c,	// (0x0006695b) phob2_cc_button_pane_g1

0xd648,	// (0x00066967) phob2_cc_button_pane_t1

0xd65d,	// (0x0006697c) phob2_cc_button_pane_t2

0x0001,

0xfd54,	// (0x00069073) phob2_cc_button_pane_t

0x95d4,	// (0x000628f3) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x95d4,	// (0x000628f3) list_double_large_graphic_phob2_cc_pane

0x9612,	// (0x00062931) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9612,	// (0x00062931) list_double_large_graphic_phob2_cc_pane_g1

0x961e,	// (0x0006293d) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x961e,	// (0x0006293d) list_double_large_graphic_phob2_cc_pane_g2

0x962a,	// (0x00062949) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x962a,	// (0x00062949) list_double_large_graphic_phob2_cc_pane_g3

0x9636,	// (0x00062955) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9636,	// (0x00062955) list_double_large_graphic_phob2_cc_pane_g4

0x9642,	// (0x00062961) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9642,	// (0x00062961) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfd59,	// (0x00069078) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfd59,	// (0x00069078) list_double_large_graphic_phob2_cc_pane_g

0x964e,	// (0x0006296d) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x964e,	// (0x0006296d) list_double_large_graphic_phob2_cc_pane_t1

0x9677,	// (0x00062996) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9677,	// (0x00062996) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfd64,	// (0x00069083) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfd64,	// (0x00069083) list_double_large_graphic_phob2_cc_pane_t

0xd66f,	// (0x0006698e) list_highlight_pane_cp025_ParamLimits

0xd66f,	// (0x0006698e) list_highlight_pane_cp025

0xa286,	// (0x000635a5) bg_button_pane_cp033_ParamLimits

0xd63c,	// (0x0006695b) phob2_cc_button_pane_g1_ParamLimits

0xd648,	// (0x00066967) phob2_cc_button_pane_t1_ParamLimits

0xd65d,	// (0x0006697c) phob2_cc_button_pane_t2_ParamLimits

0xfd54,	// (0x00069073) phob2_cc_button_pane_t_ParamLimits

0x1086,	// (0x0005a3a5) popup_wgtman_window

0xbbdb,	// (0x00064efa) scroll_pane_cp038

0x8f42,	// (0x00062261) wgtman_btn_pane_cp_01_ParamLimits

0x8f42,	// (0x00062261) wgtman_btn_pane_cp_01

0xd67d,	// (0x0006699c) wgtman_content_pane

0xd686,	// (0x000669a5) wgtman_heading_pane

0x9b2c,	// (0x00062e4b) bg_heading_pane_cp02

0xd68f,	// (0x000669ae) wgtman_heading_pane_g1

0xd697,	// (0x000669b6) wgtman_heading_pane_t1

0xd6a5,	// (0x000669c4) scroll_pane_cp036

0xd6ad,	// (0x000669cc) wgtman_list_pane

0xc995,	// (0x00065cb4) wgtman_list_pane_t1_ParamLimits

0xc995,	// (0x00065cb4) wgtman_list_pane_t1

0xdb55,	// (0x00066e74) cam4_grid_pane

0x6c41,	// (0x0005ff60) bg_button_pane_cp015_ParamLimits

0x6c55,	// (0x0005ff74) bg_button_pane_cp016_ParamLimits

0x6c68,	// (0x0005ff87) bg_button_pane_cp017_ParamLimits

0x6cc0,	// (0x0005ffdf) popup_vitu2_query_window_g3_ParamLimits

0x6cc0,	// (0x0005ffdf) popup_vitu2_query_window_g3

0x6d7d,	// (0x0006009c) popup_vitu2_query_window_t6_ParamLimits

0x6d7d,	// (0x0006009c) popup_vitu2_query_window_t6

0x6da8,	// (0x000600c7) popup_vitu2_query_window_t7_ParamLimits

0x6da8,	// (0x000600c7) popup_vitu2_query_window_t7

0x5f6a,	// (0x0005f289) cam4_grid_pane_g1

0x5f73,	// (0x0005f292) cam4_grid_pane_g2

0xd6b5,	// (0x000669d4) cam4_grid_pane_g3

0xd6be,	// (0x000669dd) cam4_grid_pane_g4

0x0003,

0xfd69,	// (0x00069088) cam4_grid_pane_g

0x1caa,	// (0x0005afc9) aid_placing_vt_slider_lsc_ParamLimits

0x1f97,	// (0x0005b2b6) vidtel_button_pane_ParamLimits

0x1f97,	// (0x0005b2b6) vidtel_button_pane

0x9b2c,	// (0x00062e4b) bg_button_pane_cp034

0xd6c9,	// (0x000669e8) vidtel_button_pane_g1

0xd6d1,	// (0x000669f0) vidtel_button_pane_t1

0xbce9,	// (0x00065008) aid_size_vtel_slider_touch

0xbda2,	// (0x000650c1) scroll_pane_cp039

0x7a8e,	// (0x00060dad) ncim_query_button_pane_cp01_ParamLimits

0x7aad,	// (0x00060dcc) ncimui_query_pane_g1_ParamLimits

0xa286,	// (0x000635a5) input_focus_pane_cp012_ParamLimits

0xc6bf,	// (0x000659de) ncim_query_entry_pane_t1_ParamLimits

0xbda2,	// (0x000650c1) scroll_pane_cp039_ParamLimits

0x3149,	// (0x0005c468) navi_pane_bcale_mc_g1

0x3151,	// (0x0005c470) navi_pane_bcale_mc_t1

0xcb33,	// (0x00065e52) main_sp_fs_email_pane_g1

0xcb3f,	// (0x00065e5e) main_sp_fs_email_pane_g2

0x0001,

0xfb6c,	// (0x00068e8b) main_sp_fs_email_pane_g

0xd00a,	// (0x00066329) list_single_cale_mrui_row_pane_g3_ParamLimits

0xd00a,	// (0x00066329) list_single_cale_mrui_row_pane_g3

0x8abc,	// (0x00061ddb) list_single_recal_day_pane_g5_event_pane

0xd1e5,	// (0x00066504) list_single_recal_day_pane_g7

0xd6e7,	// (0x00066a06) list_recal_day_event_pane_cp01

0xd6f0,	// (0x00066a0f) list_recal_vselct_arw_lo_pane_cp01

0xd6f8,	// (0x00066a17) list_recal_vselct_arw_up_pane_cp01

0xd700,	// (0x00066a1f) list_recal_vselct_pane_cp01

0xbd0b,	// (0x0006502a) list_recal_day_event_pane_cp01_g1

0xd70a,	// (0x00066a29) list_recal_day_event_pane_cp01_t1

0xd1ed,	// (0x0006650c) list_single_recal_day_pane_t1_ParamLimits

0xd1ff,	// (0x0006651e) list_single_recal_day_pane_t2_ParamLimits

0xfc4c,	// (0x00068f6b) list_single_recal_day_pane_t_ParamLimits

0xa264,	// (0x00063583) bg_notes_pane_ParamLimits

0xa345,	// (0x00063664) list_notes_pane_ParamLimits

0x125c,	// (0x0005a57b) scroll_pane_cp06_ParamLimits

0xa381,	// (0x000636a0) main_notes_pane_ParamLimits

0xa286,	// (0x000635a5) main_welc_pane

0x96bc,	// (0x000629db) main_welc_body_pane_ParamLimits

0x96bc,	// (0x000629db) main_welc_body_pane

0x96db,	// (0x000629fa) main_welc_opti_pane_ParamLimits

0x96db,	// (0x000629fa) main_welc_opti_pane

0x9757,	// (0x00062a76) main_welc_pane_t1_ParamLimits

0x9757,	// (0x00062a76) main_welc_pane_t1

0xd720,	// (0x00066a3f) main_welc_body_row_pane_ParamLimits

0xd720,	// (0x00066a3f) main_welc_body_row_pane

0xa2df,	// (0x000635fe) main_welc_opti_row_pane_ParamLimits

0xa2df,	// (0x000635fe) main_welc_opti_row_pane

0xd737,	// (0x00066a56) main_welc_opti_row_pane_g1

0x98d3,	// (0x00062bf2) main_welc_opti_row_pane_t1

0xd73f,	// (0x00066a5e) main_welc_body_row_pane_t1

0xd45d,	// (0x0006677c) popup_notif_wgt_heading_pane

0xd477,	// (0x00066796) aid_size_list_notif_wgt_del_ParamLimits

0xd484,	// (0x000667a3) list_notif_wgt_row_pane_g1_ParamLimits

0xd490,	// (0x000667af) list_notif_wgt_row_pane_g2_ParamLimits

0xd49f,	// (0x000667be) list_notif_wgt_row_pane_g3_ParamLimits

0xfcb3,	// (0x00068fd2) list_notif_wgt_row_pane_g_ParamLimits

0xd4ac,	// (0x000667cb) list_notif_wgt_row_pane_t1_ParamLimits

0xd4c2,	// (0x000667e1) list_notif_wgt_row_pane_t2_ParamLimits

0xd4d4,	// (0x000667f3) list_notif_wgt_row_pane_t3_ParamLimits

0xfcba,	// (0x00068fd9) list_notif_wgt_row_pane_t_ParamLimits

0x8fdd,	// (0x000622fc) listrow_wgtman_pane_g1_ParamLimits

0x8fea,	// (0x00062309) listrow_wgtman_pane_g2_ParamLimits

0xfcea,	// (0x00069009) listrow_wgtman_pane_g_ParamLimits

0x9008,	// (0x00062327) listrow_wgtman_pane_t1_ParamLimits

0x9020,	// (0x0006233f) listrow_wgtman_pane_t2_ParamLimits

0xfcef,	// (0x0006900e) listrow_wgtman_pane_t_ParamLimits

0x9046,	// (0x00062365) wait_bar_pane_cp09_ParamLimits

0x9b2c,	// (0x00062e4b) bg_popup_heading_pane_cp02

0xd74e,	// (0x00066a6d) popup_notif_wgt_heading_pane_g1

0xd756,	// (0x00066a75) popup_notif_wgt_heading_pane_t1

0x9b2c,	// (0x00062e4b) main_vids_pane

0x9b2c,	// (0x00062e4b) vids_listscroll_pane

0x98e2,	// (0x00062c01) scroll_pane_cp040

0x9b2c,	// (0x00062e4b) vids_list_pane

0x98ed,	// (0x00062c0c) vids_list_double_pane_ParamLimits

0x98ed,	// (0x00062c0c) vids_list_double_pane

0x9900,	// (0x00062c1f) vids_list_double_pane_g1

0x9909,	// (0x00062c28) vids_list_double_pane_t1

0x9919,	// (0x00062c38) vids_list_double_pane_t2

0x0001,

0xfd88,	// (0x000690a7) vids_list_double_pane_t

0x9ba9,	// (0x00062ec8) main_ncimui_pane_ParamLimits

0x78c4,	// (0x00060be3) main_ncimui_pane_g1_ParamLimits

0x78d0,	// (0x00060bef) main_ncimui_pane_g2_ParamLimits

0x78d0,	// (0x00060bef) main_ncimui_pane_g2

0x0001,

0xfa6d,	// (0x00068d8c) main_ncimui_pane_g_ParamLimits

0xfa6d,	// (0x00068d8c) main_ncimui_pane_g

0x96fa,	// (0x00062a19) main_welc_pane_g1_ParamLimits

0x96fa,	// (0x00062a19) main_welc_pane_g1

0x970f,	// (0x00062a2e) main_welc_pane_g2_ParamLimits

0x970f,	// (0x00062a2e) main_welc_pane_g2

0x0003,

0xfd72,	// (0x00069091) main_welc_pane_g_ParamLimits

0xfd72,	// (0x00069091) main_welc_pane_g

0xa264,	// (0x00063583) listscroll_mce_pane_ParamLimits

0x3229,	// (0x0005c548) wait_bar_pane_cp10

0xe744,	// (0x00067a63) main_cale_day_pane_ParamLimits

0xe744,	// (0x00067a63) main_cale_week_pane_ParamLimits

0xa264,	// (0x00063583) main_messa_pane_ParamLimits

0x5000,	// (0x0005e31f) main_clock2_btn_pane_ParamLimits

0x5000,	// (0x0005e31f) main_clock2_btn_pane

0xeefa,	// (0x00068219) main_clock2_btn_pane_cp01_ParamLimits

0xeefa,	// (0x00068219) main_clock2_btn_pane_cp01

0xcf96,	// (0x000662b5) list_cale_mrui_pane_ParamLimits

0xd50a,	// (0x00066829) main_cf0_pane_g2

0x0001,

0xfcc1,	// (0x00068fe0) main_cf0_pane_g

0x9266,	// (0x00062585) area_left_week_number_pane_ParamLimits

0x9274,	// (0x00062593) area_top_day_name_pane_ParamLimits

0x9287,	// (0x000625a6) frame_month_view_pane_ParamLimits

0xd5e5,	// (0x00066904) grid_month_view_pane_ParamLimits

0xd5f3,	// (0x00066912) frm_month_g1_ParamLimits

0x9312,	// (0x00062631) frm_month_g2_ParamLimits

0x9325,	// (0x00062644) frm_month_g3_ParamLimits

0x9338,	// (0x00062657) frm_month_g4_ParamLimits

0x934b,	// (0x0006266a) frm_month_g5_ParamLimits

0x935e,	// (0x0006267d) frm_month_g6_ParamLimits

0x9373,	// (0x00062692) frm_month_g7_ParamLimits

0xd600,	// (0x0006691f) frm_month_g8_ParamLimits

0x9388,	// (0x000626a7) frm_month_g9_ParamLimits

0x9398,	// (0x000626b7) frm_month_g10_ParamLimits

0x93a8,	// (0x000626c7) frm_month_g11_ParamLimits

0x93b8,	// (0x000626d7) frm_month_g12_ParamLimits

0x93ca,	// (0x000626e9) frm_month_g13_ParamLimits

0x93de,	// (0x000626fd) frm_month_g14_ParamLimits

0x93f2,	// (0x00062711) frm_month_g15_ParamLimits

0x9406,	// (0x00062725) frm_month_g16_ParamLimits

0xfd19,	// (0x00069038) frm_month_g_ParamLimits

0xd60d,	// (0x0006692c) cell_top_day_name_pane_t1_ParamLimits

0x941a,	// (0x00062739) cell_area_left_week_number_pane_g1_ParamLimits

0x9426,	// (0x00062745) cell_area_left_week_number_pane_t1_ParamLimits

0xa2ed,	// (0x0006360c) cell_month_view_pane_g1_ParamLimits

0x9439,	// (0x00062758) cell_month_view_pane_t1_ParamLimits

0xa25c,	// (0x0006357b) main_clock2_btn_pane_g1

0xd764,	// (0x00066a83) main_clock2_btn_pane_t1

0xa286,	// (0x000635a5) listscroll_cmail_pane_ParamLimits

0xcb33,	// (0x00065e52) main_sp_fs_email_pane_g1_ParamLimits

0xcb3f,	// (0x00065e5e) main_sp_fs_email_pane_g2_ParamLimits

0xfb6c,	// (0x00068e8b) main_sp_fs_email_pane_g_ParamLimits

0xd154,	// (0x00066473) list_recal_day_pane_ParamLimits

0xd165,	// (0x00066484) mian_recal_day_pane_t1

0x8458,	// (0x00061777) list_single_dyc_row_text_pane_t4_ParamLimits

0x8458,	// (0x00061777) list_single_dyc_row_text_pane_t4

0x84a1,	// (0x000617c0) list_single_dyc_row_text_pane_t5_ParamLimits

0x84a1,	// (0x000617c0) list_single_dyc_row_text_pane_t5

0xcbe9,	// (0x00065f08) list_single_dyc_row_text_pane_t6_ParamLimits

0xcbe9,	// (0x00065f08) list_single_dyc_row_text_pane_t6

0x2d7a,	// (0x0005c099) aid_mgn_list_cale_time_pane

0x9ba9,	// (0x00062ec8) main_gallery2_pane_ParamLimits

0xef0e,	// (0x0006822d) main_clock2_pane_cp01_t1

0xef1c,	// (0x0006823b) main_clock2_pane_cp01_t3

0x0001,

0x0606,	// (0x00059925) main_clock2_pane_cp01_t

0x1678,	// (0x0005a997) cale_week_scroll_pane_g16_ParamLimits

0x1678,	// (0x0005a997) cale_week_scroll_pane_g16

0xa594,	// (0x000638b3) vorec_slider_pane

0xd6d1,	// (0x000669f0) vidtel_button_pane_t1_ParamLimits

0x8b22,	// (0x00061e41) main_fs_bigclock_clock_pane_g1_ParamLimits

0x8b22,	// (0x00061e41) main_fs_bigclock_clock_pane_g2_ParamLimits

0x8b35,	// (0x00061e54) main_fs_bigclock_clock_pane_g3_ParamLimits

0x8b35,	// (0x00061e54) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfc6f,	// (0x00068f8e) main_fs_bigclock_clock_pane_g_ParamLimits

0x8b4c,	// (0x00061e6b) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8b62,	// (0x00061e81) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfc78,	// (0x00068f97) main_fs_bigclock_clock_pane_t_ParamLimits

0x4846,	// (0x0005db65) main_mup3_lyrics_pane_ParamLimits

0x4846,	// (0x0005db65) main_mup3_lyrics_pane

0x994f,	// (0x00062c6e) main_mup3_lyrics_pane_t1_ParamLimits

0x994f,	// (0x00062c6e) main_mup3_lyrics_pane_t1

0xd8a9,	// (0x00066bc8) aid_main_mp4_pane_t1_area

0xd8b3,	// (0x00066bd2) aid_main_mp4_pane_t2_area

0xd95f,	// (0x00066c7e) main_mp4_pane_g7_ParamLimits

0xd95f,	// (0x00066c7e) main_mp4_pane_g7

0xd96b,	// (0x00066c8a) main_mp4_pane_g8_ParamLimits

0xd96b,	// (0x00066c8a) main_mp4_pane_g8

0x5cff,	// (0x0005f01e) aid_call6_pane_g1_size

0x9602,	// (0x00062921) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9602,	// (0x00062921) list_double_large_graphic_phob2_other_pane

0x996a,	// (0x00062c89) list_double_large_graphic_phob2_other_pane_g1

0x9b2c,	// (0x00062e4b) list_highlight_pane_cp026

0xa286,	// (0x000635a5) main_welc_pane_ParamLimits

0x8297,	// (0x000615b6) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8297,	// (0x000615b6) main_sp_fs_ctrlbar_pane_g3

0x82b1,	// (0x000615d0) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x82b1,	// (0x000615d0) main_sp_fs_ctrlbar_pane_g4

0x82e5,	// (0x00061604) toolbar2_fixed_button_pane_cp01

0x82f0,	// (0x0006160f) toolbar2_fixed_button_pane_cp02

0x82fd,	// (0x0006161c) toolbar2_fixed_button_pane_cp03

0x96a0,	// (0x000629bf) list_welc_entry_pane_ParamLimits

0x96a0,	// (0x000629bf) list_welc_entry_pane

0x9724,	// (0x00062a43) main_welc_pane_g3_ParamLimits

0x9724,	// (0x00062a43) main_welc_pane_g3

0x9779,	// (0x00062a98) main_welc_pane_t2_ParamLimits

0x9779,	// (0x00062a98) main_welc_pane_t2

0x9794,	// (0x00062ab3) main_welc_pane_t3_ParamLimits

0x9794,	// (0x00062ab3) main_welc_pane_t3

0x0005,

0xfd7b,	// (0x0006909a) main_welc_pane_t_ParamLimits

0xfd7b,	// (0x0006909a) main_welc_pane_t

0x9851,	// (0x00062b70) welc_button_pane_ParamLimits

0x9851,	// (0x00062b70) welc_button_pane

0x98bf,	// (0x00062bde) welc_service_logo_pane_ParamLimits

0x98bf,	// (0x00062bde) welc_service_logo_pane

0x9972,	// (0x00062c91) list_single_welc_entry_pane_ParamLimits

0x9972,	// (0x00062c91) list_single_welc_entry_pane

0x9985,	// (0x00062ca4) list_single_welc_entry_pane_g1

0x998d,	// (0x00062cac) list_single_welc_entry_pane_t1

0x999b,	// (0x00062cba) list_single_welc_entry_pane_t2

0x0001,

0xfd8d,	// (0x000690ac) list_single_welc_entry_pane_t

0x9b2c,	// (0x00062e4b) bg_button_pane_cp035

0xd772,	// (0x00066a91) welc_button_pane_t1

0xd780,	// (0x00066a9f) welc_service_logo_pane_g1

0xd789,	// (0x00066aa8) welc_service_logo_pane_g2

0x0001,

0xfd92,	// (0x000690b1) welc_service_logo_pane_g

0x9bb7,	// (0x00062ed6) main_int_radio_pane

0xc55d,	// (0x0006587c) list_single_fs_dyc_pane_g1

0x94fa,	// (0x00062819) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x94fa,	// (0x00062819) list_double_large_graphic_phob2_pane_g3

0x9506,	// (0x00062825) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x9506,	// (0x00062825) list_double_large_graphic_phob2_pane_g4

0x99a9,	// (0x00062cc8) main_int_radio1_pane_ParamLimits

0x99a9,	// (0x00062cc8) main_int_radio1_pane

0xd792,	// (0x00066ab1) find_pane_cp02

0x99c6,	// (0x00062ce5) input_focus_pane_cp12_ParamLimits

0x99c6,	// (0x00062ce5) input_focus_pane_cp12

0x99d6,	// (0x00062cf5) input_focus_pane_cp13_ParamLimits

0x99d6,	// (0x00062cf5) input_focus_pane_cp13

0x99ea,	// (0x00062d09) input_focus_pane_cp14_ParamLimits

0x99ea,	// (0x00062d09) input_focus_pane_cp14

0xd79b,	// (0x00066aba) int_radio1_listscroll_pane

0x99fe,	// (0x00062d1d) main_int_radio1_pane_g1_ParamLimits

0x99fe,	// (0x00062d1d) main_int_radio1_pane_g1

0x9a14,	// (0x00062d33) main_int_radio1_pane_t1_ParamLimits

0x9a14,	// (0x00062d33) main_int_radio1_pane_t1

0x9a2d,	// (0x00062d4c) main_int_radio1_pane_t2_ParamLimits

0x9a2d,	// (0x00062d4c) main_int_radio1_pane_t2

0x9a48,	// (0x00062d67) main_int_radio1_pane_t3_ParamLimits

0x9a48,	// (0x00062d67) main_int_radio1_pane_t3

0x9a63,	// (0x00062d82) main_int_radio1_pane_t4_ParamLimits

0x9a63,	// (0x00062d82) main_int_radio1_pane_t4

0xd7a5,	// (0x00066ac4) main_int_radio1_pane_t5_ParamLimits

0xd7a5,	// (0x00066ac4) main_int_radio1_pane_t5

0x9a75,	// (0x00062d94) main_int_radio1_pane_t6_ParamLimits

0x9a75,	// (0x00062d94) main_int_radio1_pane_t6

0x9a8a,	// (0x00062da9) main_int_radio1_pane_t7_ParamLimits

0x9a8a,	// (0x00062da9) main_int_radio1_pane_t7

0x9a9f,	// (0x00062dbe) main_int_radio1_pane_t8_ParamLimits

0x9a9f,	// (0x00062dbe) main_int_radio1_pane_t8

0x9abc,	// (0x00062ddb) main_int_radio1_pane_t9_ParamLimits

0x9abc,	// (0x00062ddb) main_int_radio1_pane_t9

0x9ace,	// (0x00062ded) main_int_radio1_pane_t10_ParamLimits

0x9ace,	// (0x00062ded) main_int_radio1_pane_t10

0x9af4,	// (0x00062e13) main_int_radio1_pane_t11_ParamLimits

0x9af4,	// (0x00062e13) main_int_radio1_pane_t11

0x9b1a,	// (0x00062e39) main_int_radio1_pane_t12_ParamLimits

0x9b1a,	// (0x00062e39) main_int_radio1_pane_t12

0x000b,

0xfd97,	// (0x000690b6) main_int_radio1_pane_t_ParamLimits

0xfd97,	// (0x000690b6) main_int_radio1_pane_t

0xd620,	// (0x0006693f) int_radio_list_pane

0xd628,	// (0x00066947) scroll_pane_cp037

0xd7b7,	// (0x00066ad6) list_double_large_graphic_int_radio_pane_ParamLimits

0xd7b7,	// (0x00066ad6) list_double_large_graphic_int_radio_pane

0xd7cb,	// (0x00066aea) list_double_large_graphic_int_radio_pane_g1

0xd7d4,	// (0x00066af3) list_double_large_graphic_int_radio_pane_t1

0xd7e2,	// (0x00066b01) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfdb0,	// (0x000690cf) list_double_large_graphic_int_radio_pane_t

0x9b2c,	// (0x00062e4b) list_highlight_pane_cp027

0xd718,	// (0x00066a37) main_button_pane_4

0x9738,	// (0x00062a57) main_welc_pane_g4_ParamLimits

0x9738,	// (0x00062a57) main_welc_pane_g4

0x97b1,	// (0x00062ad0) main_welc_pane_t4_ParamLimits

0x97b1,	// (0x00062ad0) main_welc_pane_t4

0x97c6,	// (0x00062ae5) main_welc_pane_t5_ParamLimits

0x97c6,	// (0x00062ae5) main_welc_pane_t5

0x9816,	// (0x00062b35) main_welc_pane_t6_ParamLimits

0x9816,	// (0x00062b35) main_welc_pane_t6

0x9868,	// (0x00062b87) welc_button_pane_2_ParamLimits

0x9868,	// (0x00062b87) welc_button_pane_2

0x9886,	// (0x00062ba5) welc_button_pane_3_ParamLimits

0x9886,	// (0x00062ba5) welc_button_pane_3

0xd718,	// (0x00066a37) welc_button_pane_4

0x98a7,	// (0x00062bc6) welc_button_pane_5_ParamLimits

0x98a7,	// (0x00062bc6) welc_button_pane_5

0x3f9e,	// (0x0005d2bd) main_popup_welc_pane

0xd7f0,	// (0x00066b0f) main_welc_sk_g3

0xd7fa,	// (0x00066b19) main_welc_sk_g4

0xd804,	// (0x00066b23) main_welc_sk_t3

0xd814,	// (0x00066b33) main_welc_sk_t4

0xd824,	// (0x00066b43) popup_welc_pane_t4

0xd832,	// (0x00066b51) popup_welc_pane_t5

0xd840,	// (0x00066b5f) popup_welc_pane_t6
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
