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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0004efdb };

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
0x480c,	// (0x000537e7) Screen

0x4818,	// (0x000537f3) application_window

0x4874,	// (0x0005384f) area_bottom_pane_ParamLimits

0x4874,	// (0x0005384f) area_bottom_pane

0x48cc,	// (0x000538a7) area_top_pane_ParamLimits

0x48cc,	// (0x000538a7) area_top_pane

0x4930,	// (0x0005390b) call_video_uplink_pane_ParamLimits

0x4930,	// (0x0005390b) call_video_uplink_pane

0x496f,	// (0x0005394a) main_pane_ParamLimits

0x496f,	// (0x0005394a) main_pane

0x1308,	// (0x000502e3) context_pane

0x75c5,	// (0x000565a0) navi_pane

0x75eb,	// (0x000565c6) popup_cale_events_window_ParamLimits

0x75eb,	// (0x000565c6) popup_cale_events_window

0x131b,	// (0x000502f6) popup_mup_playback_window

0x7603,	// (0x000565de) signal_pane

0xe3ed,	// (0x0005d3c8) main_browser_pane

0xe60e,	// (0x0005d5e9) main_burst_pane

0x7443,	// (0x0005641e) main_calc_pane

0x12a8,	// (0x00050283) main_cale_day_pane

0x4ddb,	// (0x00053db6) main_cale_month_pane

0x12a8,	// (0x00050283) main_cale_week_pane

0xe60e,	// (0x0005d5e9) main_call_pane

0xe07b,	// (0x0005d056) main_call_poc_pane

0xe60e,	// (0x0005d5e9) main_camera_pane

0xe60e,	// (0x0005d5e9) main_chi_dic_pane

0xed76,	// (0x0005dd51) main_clock_pane

0xe07b,	// (0x0005d056) main_fmradio_pane

0xe60e,	// (0x0005d5e9) main_graph_messa_pane

0xe07b,	// (0x0005d056) main_help_pane

0xe3ed,	// (0x0005d3c8) main_im_pane

0xe2d6,	// (0x0005d2b1) main_image_pane_ParamLimits

0xe2d6,	// (0x0005d2b1) main_image_pane

0xe07b,	// (0x0005d056) main_location2_pane

0xe60e,	// (0x0005d5e9) main_location_pane

0xe2d6,	// (0x0005d2b1) main_messa_pane

0xe07b,	// (0x0005d056) main_mp2_pane

0xe60e,	// (0x0005d5e9) main_mp_pane

0xe07b,	// (0x0005d056) main_msg_pane

0xe07b,	// (0x0005d056) main_mup_eq_pane

0xe07b,	// (0x0005d056) main_mup_pane

0xe3ed,	// (0x0005d3c8) main_notes_pane

0xe07b,	// (0x0005d056) main_pec_pane

0xe07b,	// (0x0005d056) main_phob_pane

0xe07b,	// (0x0005d056) main_pinb_pane

0xe07b,	// (0x0005d056) main_postcard_pane

0xe07b,	// (0x0005d056) main_qdial_pane

0xe60e,	// (0x0005d5e9) main_skin_pane

0xe07b,	// (0x0005d056) main_smil2_pane

0xe60e,	// (0x0005d5e9) main_smil_pane

0xe60e,	// (0x0005d5e9) main_video_pane

0xe60e,	// (0x0005d5e9) main_video_tele_pane

0xe2d6,	// (0x0005d2b1) main_viewer_pane_ParamLimits

0xe2d6,	// (0x0005d2b1) main_viewer_pane

0xe60e,	// (0x0005d5e9) main_vorec_pane

0x748f,	// (0x0005646a) popup_blid_sat_info_window_ParamLimits

0x748f,	// (0x0005646a) popup_blid_sat_info_window

0x74af,	// (0x0005648a) popup_dyc_status_message_window_ParamLimits

0x74af,	// (0x0005648a) popup_dyc_status_message_window

0x74bf,	// (0x0005649a) popup_grid_large_graphic_window_ParamLimits

0x74bf,	// (0x0005649a) popup_grid_large_graphic_window

0x7550,	// (0x0005652b) popup_loc_request_window_ParamLimits

0x7550,	// (0x0005652b) popup_loc_request_window

0x759d,	// (0x00056578) popup_wml_address_window_ParamLimits

0x759d,	// (0x00056578) popup_wml_address_window

0x731b,	// (0x000562f6) call_muted_g1

0x700e,	// (0x00055fe9) popup_call_audio_conf_window_ParamLimits

0x700e,	// (0x00055fe9) popup_call_audio_conf_window

0x732b,	// (0x00056306) popup_call_audio_first_window_ParamLimits

0x732b,	// (0x00056306) popup_call_audio_first_window

0x736b,	// (0x00056346) popup_call_audio_in_window_ParamLimits

0x736b,	// (0x00056346) popup_call_audio_in_window

0x738f,	// (0x0005636a) popup_call_audio_out_window_ParamLimits

0x738f,	// (0x0005636a) popup_call_audio_out_window

0x73b1,	// (0x0005638c) popup_call_audio_second_window_ParamLimits

0x73b1,	// (0x0005638c) popup_call_audio_second_window

0x73e1,	// (0x000563bc) popup_call_audio_wait_window_ParamLimits

0x73e1,	// (0x000563bc) popup_call_audio_wait_window

0x7402,	// (0x000563dd) popup_number_entry_window_ParamLimits

0x7402,	// (0x000563dd) popup_number_entry_window

0xdba3,	// (0x0005cb7e) bg_popup_call_pane_cp05_ParamLimits

0xdba3,	// (0x0005cb7e) bg_popup_call_pane_cp05

0xdbc3,	// (0x0005cb9e) popup_number_entry_window_t1

0xdc9b,	// (0x0005cc76) popup_number_entry_window_t2

0xdcad,	// (0x0005cc88) popup_number_entry_window_t3

0x0003,

0xf01d,	// (0x0005dff8) popup_number_entry_window_t

0xdcbf,	// (0x0005cc9a) text_title_cp2

0xdcd2,	// (0x0005ccad) bg_popup_call_pane_cp_ParamLimits

0xdcd2,	// (0x0005ccad) bg_popup_call_pane_cp

0xdce0,	// (0x0005ccbb) call_thumbnail_pane

0xdce8,	// (0x0005ccc3) popup_call_audio_in_window_g1_ParamLimits

0xdce8,	// (0x0005ccc3) popup_call_audio_in_window_g1

0xdcf4,	// (0x0005cccf) popup_call_audio_in_window_g2_ParamLimits

0xdcf4,	// (0x0005cccf) popup_call_audio_in_window_g2

0xdd00,	// (0x0005ccdb) popup_call_audio_in_window_g3_ParamLimits

0xdd00,	// (0x0005ccdb) popup_call_audio_in_window_g3

0x0002,

0xf026,	// (0x0005e001) popup_call_audio_in_window_g_ParamLimits

0xf026,	// (0x0005e001) popup_call_audio_in_window_g

0xdd0c,	// (0x0005cce7) popup_call_audio_in_window_t1_ParamLimits

0xdd0c,	// (0x0005cce7) popup_call_audio_in_window_t1

0xdd28,	// (0x0005cd03) popup_call_audio_in_window_t2_ParamLimits

0xdd28,	// (0x0005cd03) popup_call_audio_in_window_t2

0xdd44,	// (0x0005cd1f) popup_call_audio_in_window_t3_ParamLimits

0xdd44,	// (0x0005cd1f) popup_call_audio_in_window_t3

0x0002,

0xf02d,	// (0x0005e008) popup_call_audio_in_window_t_ParamLimits

0xf02d,	// (0x0005e008) popup_call_audio_in_window_t

0xdcd2,	// (0x0005ccad) bg_popup_call_pane_cp01_ParamLimits

0xdcd2,	// (0x0005ccad) bg_popup_call_pane_cp01

0xdce0,	// (0x0005ccbb) call_thumbnail_pane_cp02

0xdd57,	// (0x0005cd32) call_type_pane_cp022

0xdd5f,	// (0x0005cd3a) popup_call_audio_out_window_g1_ParamLimits

0xdd5f,	// (0x0005cd3a) popup_call_audio_out_window_g1

0xdd71,	// (0x0005cd4c) popup_call_audio_out_window_g2_ParamLimits

0xdd71,	// (0x0005cd4c) popup_call_audio_out_window_g2

0xdd7d,	// (0x0005cd58) popup_call_audio_out_window_g3_ParamLimits

0xdd7d,	// (0x0005cd58) popup_call_audio_out_window_g3

0x0002,

0xf034,	// (0x0005e00f) popup_call_audio_out_window_g_ParamLimits

0xf034,	// (0x0005e00f) popup_call_audio_out_window_g

0xdd8f,	// (0x0005cd6a) popup_call_audio_out_window_t1_ParamLimits

0xdd8f,	// (0x0005cd6a) popup_call_audio_out_window_t1

0xdda7,	// (0x0005cd82) popup_call_audio_out_window_t2_ParamLimits

0xdda7,	// (0x0005cd82) popup_call_audio_out_window_t2

0x0001,

0xf03b,	// (0x0005e016) popup_call_audio_out_window_t_ParamLimits

0xf03b,	// (0x0005e016) popup_call_audio_out_window_t

0xddbc,	// (0x0005cd97) bg_popup_call_pane_ParamLimits

0xddbc,	// (0x0005cd97) bg_popup_call_pane

0x4aeb,	// (0x00053ac6) call_thumbnail_pane_cp_ParamLimits

0x4aeb,	// (0x00053ac6) call_thumbnail_pane_cp

0xde40,	// (0x0005ce1b) call_type_pane_cp01_ParamLimits

0xde40,	// (0x0005ce1b) call_type_pane_cp01

0xde84,	// (0x0005ce5f) popup_call_audio_first_window_g1_ParamLimits

0xde84,	// (0x0005ce5f) popup_call_audio_first_window_g1

0xded0,	// (0x0005ceab) popup_call_audio_first_window_g2_ParamLimits

0xded0,	// (0x0005ceab) popup_call_audio_first_window_g2

0x0001,

0xf040,	// (0x0005e01b) popup_call_audio_first_window_g_ParamLimits

0xf040,	// (0x0005e01b) popup_call_audio_first_window_g

0xdf14,	// (0x0005ceef) popup_call_audio_first_window_t1_ParamLimits

0xdf14,	// (0x0005ceef) popup_call_audio_first_window_t1

0xdfc0,	// (0x0005cf9b) popup_call_audio_first_window_t4_ParamLimits

0xdfc0,	// (0x0005cf9b) popup_call_audio_first_window_t4

0xe04c,	// (0x0005d027) popup_call_audio_first_window_t5_ParamLimits

0xe04c,	// (0x0005d027) popup_call_audio_first_window_t5

0x0002,

0xf045,	// (0x0005e020) popup_call_audio_first_window_t_ParamLimits

0xf045,	// (0x0005e020) popup_call_audio_first_window_t

0xe07b,	// (0x0005d056) bg_popup_call_pane_cp02

0xe085,	// (0x0005d060) call_type_pane_cp023

0xe08d,	// (0x0005d068) popup_call_audio_wait_window_g1

0xe095,	// (0x0005d070) popup_call_audio_wait_window_g2

0x0001,

0xf04c,	// (0x0005e027) popup_call_audio_wait_window_g

0xe09d,	// (0x0005d078) popup_call_audio_wait_window_t3

0xe0ab,	// (0x0005d086) bg_popup_call_pane_cp03_ParamLimits

0xe0ab,	// (0x0005d086) bg_popup_call_pane_cp03

0xe10b,	// (0x0005d0e6) call_thumbnail_pane_cp011_ParamLimits

0xe10b,	// (0x0005d0e6) call_thumbnail_pane_cp011

0xe117,	// (0x0005d0f2) call_type_pane_cp034_ParamLimits

0xe117,	// (0x0005d0f2) call_type_pane_cp034

0xe153,	// (0x0005d12e) popup_call_audio_second_window_g1_ParamLimits

0xe153,	// (0x0005d12e) popup_call_audio_second_window_g1

0xe18f,	// (0x0005d16a) popup_call_audio_second_window_g2_ParamLimits

0xe18f,	// (0x0005d16a) popup_call_audio_second_window_g2

0x0001,

0xf051,	// (0x0005e02c) popup_call_audio_second_window_g_ParamLimits

0xf051,	// (0x0005e02c) popup_call_audio_second_window_g

0xe1cb,	// (0x0005d1a6) popup_call_audio_second_window_t1_ParamLimits

0xe1cb,	// (0x0005d1a6) popup_call_audio_second_window_t1

0xe24c,	// (0x0005d227) popup_call_audio_second_window_t2_ParamLimits

0xe24c,	// (0x0005d227) popup_call_audio_second_window_t2

0xe282,	// (0x0005d25d) popup_call_audio_second_window_t3_ParamLimits

0xe282,	// (0x0005d25d) popup_call_audio_second_window_t3

0x0002,

0xf056,	// (0x0005e031) popup_call_audio_second_window_t_ParamLimits

0xf056,	// (0x0005e031) popup_call_audio_second_window_t

0xe07b,	// (0x0005d056) bg_popup_call_pane_cp04

0xe2b8,	// (0x0005d293) list_conf_pane

0xe2c0,	// (0x0005d29b) popup_call_audio_conf_window_t1

0xe2ce,	// (0x0005d2a9) call_thumbnail_pane_g1

0xe2d6,	// (0x0005d2b1) bg_pinb_pane_ParamLimits

0xe2d6,	// (0x0005d2b1) bg_pinb_pane

0xe2e4,	// (0x0005d2bf) find_pinb_pane

0xe2d6,	// (0x0005d2b1) listscroll_pinb_pane_ParamLimits

0xe2d6,	// (0x0005d2b1) listscroll_pinb_pane

0xe2ee,	// (0x0005d2c9) pinb_bg_pane_g1

0xe2ee,	// (0x0005d2c9) pinb_bg_pane_g2

0xe2ee,	// (0x0005d2c9) pinb_bg_pane_g3

0xe2ee,	// (0x0005d2c9) pinb_bg_pane_g4

0xe2ee,	// (0x0005d2c9) pinb_bg_pane_g5

0xe2ee,	// (0x0005d2c9) pinb_bg_pane_g6

0xe2ee,	// (0x0005d2c9) pinb_bg_pane_g7

0xe2ee,	// (0x0005d2c9) pinb_bg_pane_g8

0xe2ee,	// (0x0005d2c9) pinb_bg_pane_g9

0xe2ee,	// (0x0005d2c9) pinb_bg_pane_g10

0x0009,

0xf05d,	// (0x0005e038) pinb_bg_pane_g

0xdb99,	// (0x0005cb74) grid_pinb_pane

0xdb99,	// (0x0005cb74) list_pinb_pane

0xdbd6,	// (0x0005cbb1) scroll_pane_cp01_ParamLimits

0xdbd6,	// (0x0005cbb1) scroll_pane_cp01

0xe2f8,	// (0x0005d2d3) find_pinb_pane_g1_ParamLimits

0xe2f8,	// (0x0005d2d3) find_pinb_pane_g1

0xe310,	// (0x0005d2eb) find_pinb_pane_t1

0xe322,	// (0x0005d2fd) find_pinb_pane_t2

0x0001,

0xf077,	// (0x0005e052) find_pinb_pane_t

0xe337,	// (0x0005d312) input_focus_pane_cp01_ParamLimits

0xe337,	// (0x0005d312) input_focus_pane_cp01

0xe343,	// (0x0005d31e) cell_pinb_pane_ParamLimits

0xe343,	// (0x0005d31e) cell_pinb_pane

0xe351,	// (0x0005d32c) cell_pinb_pane_g1_ParamLimits

0xe351,	// (0x0005d32c) cell_pinb_pane_g1

0xe35f,	// (0x0005d33a) cell_pinb_pane_g2_ParamLimits

0xe35f,	// (0x0005d33a) cell_pinb_pane_g2

0xe35f,	// (0x0005d33a) cell_pinb_pane_g3_ParamLimits

0xe35f,	// (0x0005d33a) cell_pinb_pane_g3

0x0002,

0xf07c,	// (0x0005e057) cell_pinb_pane_g_ParamLimits

0xf07c,	// (0x0005e057) cell_pinb_pane_g

0xe07b,	// (0x0005d056) grid_highlight_pane_cp01

0xe343,	// (0x0005d31e) list_pinb_item_pane_ParamLimits

0xe343,	// (0x0005d31e) list_pinb_item_pane

0xdb99,	// (0x0005cb74) list_highlight_pane_cp02

0xe36d,	// (0x0005d348) list_pinb_item_pane_g1_ParamLimits

0xe36d,	// (0x0005d348) list_pinb_item_pane_g1

0xe35f,	// (0x0005d33a) list_pinb_item_pane_g2_ParamLimits

0xe35f,	// (0x0005d33a) list_pinb_item_pane_g2

0xe351,	// (0x0005d32c) list_pinb_item_pane_g3_ParamLimits

0xe351,	// (0x0005d32c) list_pinb_item_pane_g3

0xe35f,	// (0x0005d33a) list_pinb_item_pane_g4_ParamLimits

0xe35f,	// (0x0005d33a) list_pinb_item_pane_g4

0x0003,

0xf083,	// (0x0005e05e) list_pinb_item_pane_g_ParamLimits

0xf083,	// (0x0005e05e) list_pinb_item_pane_g

0xe37b,	// (0x0005d356) list_pinb_item_pane_t1_ParamLimits

0xe37b,	// (0x0005d356) list_pinb_item_pane_t1

0x4b29,	// (0x00053b04) calc_display_pane

0x4b47,	// (0x00053b22) calc_paper_pane

0x4b63,	// (0x00053b3e) grid_calc_pane

0xdb99,	// (0x0005cb74) bg_list_pane_cp01

0xe38f,	// (0x0005d36a) clock_g1

0xe38f,	// (0x0005d36a) clock_g2

0x0001,

0xf08c,	// (0x0005e067) clock_g

0xe399,	// (0x0005d374) clock_t1_ParamLimits

0xe399,	// (0x0005d374) clock_t1

0xe3ad,	// (0x0005d388) clock_t2_ParamLimits

0xe3ad,	// (0x0005d388) clock_t2

0xe3ad,	// (0x0005d388) clock_t3_ParamLimits

0xe3ad,	// (0x0005d388) clock_t3

0xe3ad,	// (0x0005d388) clock_t4_ParamLimits

0xe3ad,	// (0x0005d388) clock_t4

0xe399,	// (0x0005d374) clock_t5_ParamLimits

0xe399,	// (0x0005d374) clock_t5

0xe3ad,	// (0x0005d388) clock_t6_ParamLimits

0xe3ad,	// (0x0005d388) clock_t6

0xe3ad,	// (0x0005d388) clock_t7_ParamLimits

0xe3ad,	// (0x0005d388) clock_t7

0xe3ad,	// (0x0005d388) clock_t8_ParamLimits

0xe3ad,	// (0x0005d388) clock_t8

0xe3ad,	// (0x0005d388) clock_t9_ParamLimits

0xe3ad,	// (0x0005d388) clock_t9

0x0008,

0xf091,	// (0x0005e06c) clock_t_ParamLimits

0xf091,	// (0x0005e06c) clock_t

0xdb99,	// (0x0005cb74) popup_clock_analogue_window_cp02

0xdb99,	// (0x0005cb74) popup_clock_digital_window_cp01

0xe07b,	// (0x0005d056) listscroll_help_pane

0xe07b,	// (0x0005d056) phob_pre_status_pane

0xe3c1,	// (0x0005d39c) grid_qdial_pane

0xe2d6,	// (0x0005d2b1) listscroll_mce_pane

0xe2d6,	// (0x0005d2b1) bg_notes_pane

0xe3cb,	// (0x0005d3a6) list_notes_pane

0x4b8f,	// (0x00053b6a) scroll_pane_cp06

0xe3d9,	// (0x0005d3b4) bg_calc_paper_pane

0x4b9e,	// (0x00053b79) list_calc_pane

0xe3ed,	// (0x0005d3c8) bg_calc_display_pane

0x4bb8,	// (0x00053b93) calc_display_pane_t1

0x4bcd,	// (0x00053ba8) calc_display_pane_t2

0x4be2,	// (0x00053bbd) calc_display_pane_t3

0x0002,

0xf0a4,	// (0x0005e07f) calc_display_pane_t

0x4bf4,	// (0x00053bcf) cell_calc_pane_ParamLimits

0x4bf4,	// (0x00053bcf) cell_calc_pane

0xe3f9,	// (0x0005d3d4) bg_calc_paper_pane_g1

0xe405,	// (0x0005d3e0) bg_calc_paper_pane_g2

0xe411,	// (0x0005d3ec) bg_calc_paper_pane_g3

0xe41d,	// (0x0005d3f8) bg_calc_paper_pane_g4

0xe429,	// (0x0005d404) bg_calc_paper_pane_g5

0x4c21,	// (0x00053bfc) bg_calc_paper_pane_g6

0x4c32,	// (0x00053c0d) bg_calc_paper_pane_g7

0x4c43,	// (0x00053c1e) bg_calc_paper_pane_g8

0x0007,

0xf0ab,	// (0x0005e086) bg_calc_paper_pane_g

0x4c54,	// (0x00053c2f) calc_bg_paper_pane_g9

0x4c65,	// (0x00053c40) list_calc_item_pane_ParamLimits

0x4c65,	// (0x00053c40) list_calc_item_pane

0xe435,	// (0x0005d410) list_calc_item_pane_g1

0x4c91,	// (0x00053c6c) list_calc_item_pane_t1_ParamLimits

0x4c91,	// (0x00053c6c) list_calc_item_pane_t1

0x4ca3,	// (0x00053c7e) list_calc_item_pane_t2_ParamLimits

0x4ca3,	// (0x00053c7e) list_calc_item_pane_t2

0x0001,

0xf0bc,	// (0x0005e097) list_calc_item_pane_t_ParamLimits

0xf0bc,	// (0x0005e097) list_calc_item_pane_t

0xe2ee,	// (0x0005d2c9) cell_calc_pane_g1

0xe442,	// (0x0005d41d) grid_highlight_pane_cp02

0x4cd3,	// (0x00053cae) bg_calc_display_pane_g1

0x4cdc,	// (0x00053cb7) bg_calc_display_pane_g2

0x4ce6,	// (0x00053cc1) bg_calc_display_pane_g3

0x0002,

0xf0c6,	// (0x0005e0a1) bg_calc_display_pane_g

0x4cef,	// (0x00053cca) cell_qdial_pane_ParamLimits

0x4cef,	// (0x00053cca) cell_qdial_pane

0x4d03,	// (0x00053cde) cell_qdial_pane_g1_ParamLimits

0x4d03,	// (0x00053cde) cell_qdial_pane_g1

0x4d10,	// (0x00053ceb) cell_qdial_pane_g2_ParamLimits

0x4d10,	// (0x00053ceb) cell_qdial_pane_g2

0xe464,	// (0x0005d43f) cell_qdial_pane_g3_ParamLimits

0xe464,	// (0x0005d43f) cell_qdial_pane_g3

0x0003,

0xf0cd,	// (0x0005e0a8) cell_qdial_pane_g_ParamLimits

0xf0cd,	// (0x0005e0a8) cell_qdial_pane_g

0x4d2e,	// (0x00053d09) cell_qdial_pane_t1_ParamLimits

0x4d2e,	// (0x00053d09) cell_qdial_pane_t1

0x4d46,	// (0x00053d21) cell_qdial_pane_t2_ParamLimits

0x4d46,	// (0x00053d21) cell_qdial_pane_t2

0x4d59,	// (0x00053d34) cell_qdial_pane_t3_ParamLimits

0x4d59,	// (0x00053d34) cell_qdial_pane_t3

0x0002,

0xf0d6,	// (0x0005e0b1) cell_qdial_pane_t_ParamLimits

0xf0d6,	// (0x0005e0b1) cell_qdial_pane_t

0xe07b,	// (0x0005d056) grid_highlight_pane_cp04

0xe470,	// (0x0005d44b) thumbnail_qdial_pane_ParamLimits

0xe470,	// (0x0005d44b) thumbnail_qdial_pane

0xe4cc,	// (0x0005d4a7) list_help_pane

0xe4d5,	// (0x0005d4b0) scroll_pane_cp02

0x4d6c,	// (0x00053d47) help_list_pane_t1_ParamLimits

0x4d6c,	// (0x00053d47) help_list_pane_t1

0xe4de,	// (0x0005d4b9) bg_notes_pane_g2

0xe4e6,	// (0x0005d4c1) bg_notes_pane_g3

0xe515,	// (0x0005d4f0) notes_bg_pane_g1

0xe51d,	// (0x0005d4f8) notes_bg_pane_g4

0xe525,	// (0x0005d500) notes_bg_pane_g5

0xe52d,	// (0x0005d508) notes_bg_pane_g6

0xe535,	// (0x0005d510) notes_bg_pane_g7

0xe53d,	// (0x0005d518) notes_bg_pane_g8

0xe545,	// (0x0005d520) notes_bg_pane_g9

0x0006,

0xf0f4,	// (0x0005e0cf) notes_bg_pane_g

0x4da2,	// (0x00053d7d) list_notes_text_pane_ParamLimits

0x4da2,	// (0x00053d7d) list_notes_text_pane

0xe54d,	// (0x0005d528) list_notes_text_pane_g1

0x4dcd,	// (0x00053da8) list_notes_text_pane_t1

0x4ddb,	// (0x00053db6) listscroll_cale_week_pane

0x4e09,	// (0x00053de4) bg_cale_heading_pane

0xe567,	// (0x0005d542) bg_cale_pane_cp01

0x4e29,	// (0x00053e04) cale_week_corner_pane

0x4e43,	// (0x00053e1e) cale_week_day_heading_pane

0x4e63,	// (0x00053e3e) cale_week_scroll_pane_g1

0x4e7e,	// (0x00053e59) cale_week_scroll_pane_g2

0x4e91,	// (0x00053e6c) cale_week_scroll_pane_g3

0x4ea4,	// (0x00053e7f) cale_week_scroll_pane_g4

0x4eb7,	// (0x00053e92) cale_week_scroll_pane_g5

0x4eca,	// (0x00053ea5) cale_week_scroll_pane_g6

0x4edd,	// (0x00053eb8) cale_week_scroll_pane_g7

0x4ef2,	// (0x00053ecd) cale_week_scroll_pane_g8

0x4f07,	// (0x00053ee2) cale_week_scroll_pane_g9

0x4f1a,	// (0x00053ef5) cale_week_scroll_pane_g10

0x4f2d,	// (0x00053f08) cale_week_scroll_pane_g11

0x4f40,	// (0x00053f1b) cale_week_scroll_pane_g12

0x4f57,	// (0x00053f32) cale_week_scroll_pane_g13

0x4f72,	// (0x00053f4d) cale_week_scroll_pane_g14

0x4f8d,	// (0x00053f68) cale_week_scroll_pane_g15

0x000f,

0xf103,	// (0x0005e0de) cale_week_scroll_pane_g

0x4fbd,	// (0x00053f98) cale_week_time_pane

0x4fd2,	// (0x00053fad) grid_cale_week_pane

0xe596,	// (0x0005d571) scroll_pane_cp08

0x4ff1,	// (0x00053fcc) cell_cale_week_pane_ParamLimits

0x4ff1,	// (0x00053fcc) cell_cale_week_pane

0x5053,	// (0x0005402e) cale_week_day_heading_pane_t1

0x506e,	// (0x00054049) cale_week_day_heading_pane_t2

0x5089,	// (0x00054064) cale_week_day_heading_pane_t3

0x50a4,	// (0x0005407f) cale_week_day_heading_pane_t4

0x50bf,	// (0x0005409a) cale_week_day_heading_pane_t5

0x50da,	// (0x000540b5) cale_week_day_heading_pane_t6

0x50f5,	// (0x000540d0) cale_week_day_heading_pane_t7

0x0006,

0xf124,	// (0x0005e0ff) cale_week_day_heading_pane_t

0xe5b3,	// (0x0005d58e) bg_cale_side_pane

0x5110,	// (0x000540eb) cale_week_time_pane_t1

0x512a,	// (0x00054105) cale_week_time_pane_t2

0x5144,	// (0x0005411f) cale_week_time_pane_t3

0x515e,	// (0x00054139) cale_week_time_pane_t4

0x5178,	// (0x00054153) cale_week_time_pane_t5

0x5192,	// (0x0005416d) cale_week_time_pane_t6

0x51b0,	// (0x0005418b) cale_week_time_pane_t7

0x51d2,	// (0x000541ad) cale_week_time_pane_t8

0x0007,

0xf133,	// (0x0005e10e) cale_week_time_pane_t

0x51f6,	// (0x000541d1) cell_cale_week_pane_g2

0x521a,	// (0x000541f5) cell_cale_week_pane_g3_ParamLimits

0x521a,	// (0x000541f5) cell_cale_week_pane_g3

0xe5c1,	// (0x0005d59c) grid_highlight_pane_cp07

0xe5d2,	// (0x0005d5ad) listscroll_gms_pane

0xe5dc,	// (0x0005d5b7) grid_gms_pane

0xe5e5,	// (0x0005d5c0) listscroll_gms_pane_g1

0xe5ed,	// (0x0005d5c8) listscroll_gms_pane_g2

0x0001,

0xf144,	// (0x0005e11f) listscroll_gms_pane_g

0x5232,	// (0x0005420d) scroll_pane_cp010

0x523d,	// (0x00054218) cell_gms_pane_ParamLimits

0x523d,	// (0x00054218) cell_gms_pane

0x5250,	// (0x0005422b) cell_gms_pane_g1

0xe5f5,	// (0x0005d5d0) cell_gms_pane_g2

0xe54d,	// (0x0005d528) cell_gms_pane_g3

0xe5fd,	// (0x0005d5d8) cell_gms_pane_g4

0x0003,

0xf149,	// (0x0005e124) cell_gms_pane_g

0xe606,	// (0x0005d5e1) grid_highlight_pane_cp09

0x729f,	// (0x0005627a) phob_pre_status_pane_g1

0x72a7,	// (0x00056282) phob_pre_status_pane_g2

0x72af,	// (0x0005628a) phob_pre_status_pane_g3

0x72b7,	// (0x00056292) phob_pre_status_pane_g4

0x0004,

0xf4ef,	// (0x0005e4ca) phob_pre_status_pane_g

0x72c7,	// (0x000562a2) phob_pre_status_pane_t1

0x72d7,	// (0x000562b2) phob_pre_status_pane_t2

0x72e7,	// (0x000562c2) phob_pre_status_pane_t3

0x0002,

0xf4fa,	// (0x0005e4d5) phob_pre_status_pane_t

0xe60e,	// (0x0005d5e9) bg_list_pane_cp05

0x5260,	// (0x0005423b) grid_vorec_pane

0x526a,	// (0x00054245) vorec_t1

0x5278,	// (0x00054253) vorec_t2

0x5286,	// (0x00054261) vorec_t3

0x5294,	// (0x0005426f) vorec_t4

0xc01e,	// (0x0005aff9) vorec_t5

0xc02c,	// (0x0005b007) vorec_t6

0x0004,

0xf152,	// (0x0005e12d) vorec_t

0xc03a,	// (0x0005b015) wait_bar_pane_cp01

0x52b0,	// (0x0005428b) cell_vorec_pane_ParamLimits

0x52b0,	// (0x0005428b) cell_vorec_pane

0x52c3,	// (0x0005429e) cell_vorec_pane_g1

0xe07b,	// (0x0005d056) grid_highlight_pane_cp05

0xe343,	// (0x0005d31e) cams_zoom_pane

0xe343,	// (0x0005d31e) image_vga_pane

0xe35f,	// (0x0005d33a) main_camera_pane_g1

0xe35f,	// (0x0005d33a) main_camera_pane_g2

0xe35f,	// (0x0005d33a) main_camera_pane_g3

0xe35f,	// (0x0005d33a) main_camera_pane_g4

0xe35f,	// (0x0005d33a) main_camera_pane_g5

0xe35f,	// (0x0005d33a) main_camera_pane_g6

0xe35f,	// (0x0005d33a) main_camera_pane_g7

0x0007,

0xf15d,	// (0x0005e138) main_camera_pane_g

0xe3ad,	// (0x0005d388) main_camera_pane_t1

0xe3ad,	// (0x0005d388) main_camera_pane_t2

0x0001,

0xf16e,	// (0x0005e149) main_camera_pane_t

0x52cd,	// (0x000542a8) cams_zoom_pane_cp_ParamLimits

0x52cd,	// (0x000542a8) cams_zoom_pane_cp

0x52fb,	// (0x000542d6) image_cif_pane_ParamLimits

0x52fb,	// (0x000542d6) image_cif_pane

0xdb99,	// (0x0005cb74) image_subqcif_pane

0x5309,	// (0x000542e4) main_video_pane_g1_ParamLimits

0x5309,	// (0x000542e4) main_video_pane_g1

0x5331,	// (0x0005430c) main_video_pane_g2_ParamLimits

0x5331,	// (0x0005430c) main_video_pane_g2

0x5364,	// (0x0005433f) main_video_pane_g3_ParamLimits

0x5364,	// (0x0005433f) main_video_pane_g3

0x5364,	// (0x0005433f) main_video_pane_g4_ParamLimits

0x5364,	// (0x0005433f) main_video_pane_g4

0x5392,	// (0x0005436d) main_video_pane_g5_ParamLimits

0x5392,	// (0x0005436d) main_video_pane_g5

0xe616,	// (0x0005d5f1) main_video_pane_g6_ParamLimits

0xe616,	// (0x0005d5f1) main_video_pane_g6

0x0006,

0xf173,	// (0x0005e14e) main_video_pane_g_ParamLimits

0xf173,	// (0x0005e14e) main_video_pane_g

0x53ae,	// (0x00054389) main_video_pane_t1_ParamLimits

0x53ae,	// (0x00054389) main_video_pane_t1

0xe38f,	// (0x0005d36a) cams_zoom_pane_g1

0xe38f,	// (0x0005d36a) cams_zoom_pane_g2

0xe38f,	// (0x0005d36a) cams_zoom_pane_g3

0xe38f,	// (0x0005d36a) cams_zoom_pane_g4

0x0003,

0xf182,	// (0x0005e15d) cams_zoom_pane_g

0xe343,	// (0x0005d31e) grid_cams_pane

0xe343,	// (0x0005d31e) linegrid_cams_pane

0x53e8,	// (0x000543c3) cell_cams_pane_ParamLimits

0x53e8,	// (0x000543c3) cell_cams_pane

0xdb99,	// (0x0005cb74) cams_burst_image_pane

0xe38f,	// (0x0005d36a) cell_cams_pane_g1

0xdb99,	// (0x0005cb74) grid_highlight_pane_cp03

0xe2ee,	// (0x0005d2c9) mp_bg_pane_g1

0xdb99,	// (0x0005cb74) bg_list_pane_cp03

0xdb99,	// (0x0005cb74) bg_mp_pane

0xdb99,	// (0x0005cb74) grid_mp_pane

0xe38f,	// (0x0005d36a) media_player_g1

0xeb0b,	// (0x0005dae6) media_player_t1

0xeb0b,	// (0x0005dae6) media_player_t2

0xeb0b,	// (0x0005dae6) media_player_t3

0xeb0b,	// (0x0005dae6) media_player_t4

0xeb0b,	// (0x0005dae6) media_player_t5

0xeb0b,	// (0x0005dae6) media_player_t6

0xeb0b,	// (0x0005dae6) media_player_t7

0x0006,

0xf4d9,	// (0x0005e4b4) media_player_t

0xdb99,	// (0x0005cb74) wait_bar_pane_cp02

0xf4be,	// (0x0005e499) main_usb_pane_t

0xed76,	// (0x0005dd51) cell_mp_pane

0xe2ee,	// (0x0005d2c9) cell_mp_pane_g1

0xe07b,	// (0x0005d056) grid_highlight_pane_cp06

0xe630,	// (0x0005d60b) grid_skin_colour_pane

0xe638,	// (0x0005d613) list_highlight_pane_cp03

0x53fd,	// (0x000543d8) skin_g1

0xe640,	// (0x0005d61b) skin_t1

0xe64f,	// (0x0005d62a) skin_t2

0x0001,

0xf1b0,	// (0x0005e18b) skin_t

0x5407,	// (0x000543e2) cell_skin_colour_pane_ParamLimits

0x5407,	// (0x000543e2) cell_skin_colour_pane

0xe65d,	// (0x0005d638) cell_skin_colour_pane_g1

0x548b,	// (0x00054466) call_video_g1_ParamLimits

0x548b,	// (0x00054466) call_video_g1

0x549b,	// (0x00054476) call_video_g2_ParamLimits

0x549b,	// (0x00054476) call_video_g2

0x0001,

0xf1b5,	// (0x0005e190) call_video_g_ParamLimits

0xf1b5,	// (0x0005e190) call_video_g

0x54f5,	// (0x000544d0) call_video_uplink_pane_cp1_ParamLimits

0x54f5,	// (0x000544d0) call_video_uplink_pane_cp1

0xe66f,	// (0x0005d64a) call_video_uplink_pane_cp2

0x55c1,	// (0x0005459c) video_down_crop_pane_ParamLimits

0x55c1,	// (0x0005459c) video_down_crop_pane

0x56bf,	// (0x0005469a) video_down_pane_ParamLimits

0x56bf,	// (0x0005469a) video_down_pane

0xe677,	// (0x0005d652) video_down_subqcif_pane_ParamLimits

0xe677,	// (0x0005d652) video_down_subqcif_pane

0xe68f,	// (0x0005d66a) video_down_subqcif_pane_cp_ParamLimits

0xe68f,	// (0x0005d66a) video_down_subqcif_pane_cp

0xe6b5,	// (0x0005d690) im_reading_pane_ParamLimits

0xe6b5,	// (0x0005d690) im_reading_pane

0x57df,	// (0x000547ba) im_writing_pane_ParamLimits

0x57df,	// (0x000547ba) im_writing_pane

0x57fd,	// (0x000547d8) im_reading_pane_t1

0xe6cf,	// (0x0005d6aa) list_im_pane

0xe6e0,	// (0x0005d6bb) scroll_pane_cp07

0x5851,	// (0x0005482c) im_writing_pane_t1_ParamLimits

0x5851,	// (0x0005482c) im_writing_pane_t1

0xe6f9,	// (0x0005d6d4) im_writing_pane_t2_ParamLimits

0xe6f9,	// (0x0005d6d4) im_writing_pane_t2

0x0001,

0xf1bf,	// (0x0005e19a) im_writing_pane_t_ParamLimits

0xf1bf,	// (0x0005e19a) im_writing_pane_t

0xe07b,	// (0x0005d056) input_focus_pane_cp04

0xe07b,	// (0x0005d056) input_focus_pane_cp05

0x5866,	// (0x00054841) list_im_single_pane_ParamLimits

0x5866,	// (0x00054841) list_im_single_pane

0x588a,	// (0x00054865) list_single_im_pane_t1

0xe60e,	// (0x0005d5e9) blid_accuracy_pane

0xe60e,	// (0x0005d5e9) blid_compass_pane

0x1260,	// (0x0005023b) main_location_t1

0x1260,	// (0x0005023b) main_location_t2

0x1260,	// (0x0005023b) main_location_t3

0x0002,

0xf4e8,	// (0x0005e4c3) main_location_t

0xe07b,	// (0x0005d056) aid_levels_location

0xe2ee,	// (0x0005d2c9) blid_accuracy_pane_g1

0xe2ee,	// (0x0005d2c9) blid_accuracy_pane_g2

0x0001,

0xf213,	// (0x0005e1ee) blid_accuracy_pane_g

0xe741,	// (0x0005d71c) wml_content_pane

0xe77f,	// (0x0005d75a) wml_button_pane_ParamLimits

0xe77f,	// (0x0005d75a) wml_button_pane

0x5899,	// (0x00054874) wml_list_single_large_pane_ParamLimits

0x5899,	// (0x00054874) wml_list_single_large_pane

0x58c3,	// (0x0005489e) wml_list_single_medium_pane_ParamLimits

0x58c3,	// (0x0005489e) wml_list_single_medium_pane

0x58f4,	// (0x000548cf) wml_list_single_small_pane_ParamLimits

0x58f4,	// (0x000548cf) wml_list_single_small_pane

0xe793,	// (0x0005d76e) wml_selection_box_pane_ParamLimits

0xe793,	// (0x0005d76e) wml_selection_box_pane

0xe7a6,	// (0x0005d781) wml_list_single_pane_t1

0xe7b5,	// (0x0005d790) wml_list_single_medium_pane_t1

0xe7c4,	// (0x0005d79f) wml_list_single_large_pane_t1

0xe7d3,	// (0x0005d7ae) input_focus_pane_cp02_ParamLimits

0xe7d3,	// (0x0005d7ae) input_focus_pane_cp02

0xe7e6,	// (0x0005d7c1) wml_selection_box_pane_g1

0xe7ef,	// (0x0005d7ca) wml_selection_box_pane_t1_ParamLimits

0xe7ef,	// (0x0005d7ca) wml_selection_box_pane_t1

0xe2d6,	// (0x0005d2b1) bg_wml_button_pane_ParamLimits

0xe2d6,	// (0x0005d2b1) bg_wml_button_pane

0xe807,	// (0x0005d7e2) wml_button_pane_g1

0xe80f,	// (0x0005d7ea) wml_button_pane_t1

0xe807,	// (0x0005d7e2) wml_button_bg_pane_g1

0xe81f,	// (0x0005d7fa) wml_button_bg_pane_g2

0xe827,	// (0x0005d802) wml_button_bg_pane_g3

0xe82f,	// (0x0005d80a) wml_button_bg_pane_g4

0xe837,	// (0x0005d812) wml_button_bg_pane_g5

0xe83f,	// (0x0005d81a) wml_button_bg_pane_g6

0xe847,	// (0x0005d822) wml_button_bg_pane_g7

0xe84f,	// (0x0005d82a) wml_button_bg_pane_g8

0xe857,	// (0x0005d832) wml_button_bg_pane_g9

0x0008,

0xf1c4,	// (0x0005e19f) wml_button_bg_pane_g

0x592e,	// (0x00054909) bg_list_pane_cp02

0xe85f,	// (0x0005d83a) mce_header_pane_ParamLimits

0xe85f,	// (0x0005d83a) mce_header_pane

0xe875,	// (0x0005d850) mce_icon_pane

0xe875,	// (0x0005d850) mce_image_pane

0xe87e,	// (0x0005d859) mce_text_pane_ParamLimits

0xe87e,	// (0x0005d859) mce_text_pane

0x5938,	// (0x00054913) scroll_pane_cp03

0xe777,	// (0x0005d752) scroll_pane_cp04

0xe891,	// (0x0005d86c) scroll_pane_cp05_ParamLimits

0xe891,	// (0x0005d86c) scroll_pane_cp05

0x5942,	// (0x0005491d) mce_header_field_pane_ParamLimits

0x5942,	// (0x0005491d) mce_header_field_pane

0x5962,	// (0x0005493d) mce_header_field_pane_2_ParamLimits

0x5962,	// (0x0005493d) mce_header_field_pane_2

0x5978,	// (0x00054953) mce_header_field_pane_3

0x5980,	// (0x0005495b) list_single_mce_message_pane_ParamLimits

0x5980,	// (0x0005495b) list_single_mce_message_pane

0x59ab,	// (0x00054986) list_single_mce_smart_pane_ParamLimits

0x59ab,	// (0x00054986) list_single_mce_smart_pane

0xe89d,	// (0x0005d878) input_focus_pane_cp03

0xe8a6,	// (0x0005d881) list_header_data_pane

0x59e1,	// (0x000549bc) mce_header_field_pane_t1

0x59ef,	// (0x000549ca) list_single_mce_header_pane_ParamLimits

0x59ef,	// (0x000549ca) list_single_mce_header_pane

0xe8ae,	// (0x0005d889) list_single_mce_header_pane_t1

0xe8bd,	// (0x0005d898) list_single_mce_message_pane_g1

0xe8c5,	// (0x0005d8a0) list_single_mce_message_pane_t1

0x5a41,	// (0x00054a1c) bg_cale_heading_pane_cp01_ParamLimits

0x5a41,	// (0x00054a1c) bg_cale_heading_pane_cp01

0xe8d3,	// (0x0005d8ae) bg_cale_pane_cp02_ParamLimits

0xe8d3,	// (0x0005d8ae) bg_cale_pane_cp02

0x5a8f,	// (0x00054a6a) cale_month_corner_pane

0x5aae,	// (0x00054a89) cale_month_day_heading_pane_ParamLimits

0x5aae,	// (0x00054a89) cale_month_day_heading_pane

0x5b14,	// (0x00054aef) cale_month_pane_g1_ParamLimits

0x5b14,	// (0x00054aef) cale_month_pane_g1

0x5b57,	// (0x00054b32) cale_month_pane_g2_ParamLimits

0x5b57,	// (0x00054b32) cale_month_pane_g2

0x5b8f,	// (0x00054b6a) cale_month_pane_g3_ParamLimits

0x5b8f,	// (0x00054b6a) cale_month_pane_g3

0x5bdb,	// (0x00054bb6) cale_month_pane_g4_ParamLimits

0x5bdb,	// (0x00054bb6) cale_month_pane_g4

0x5c27,	// (0x00054c02) cale_month_pane_g5_ParamLimits

0x5c27,	// (0x00054c02) cale_month_pane_g5

0x5c73,	// (0x00054c4e) cale_month_pane_g6_ParamLimits

0x5c73,	// (0x00054c4e) cale_month_pane_g6

0x5cbf,	// (0x00054c9a) cale_month_pane_g7_ParamLimits

0x5cbf,	// (0x00054c9a) cale_month_pane_g7

0x5d23,	// (0x00054cfe) cale_month_pane_g8_ParamLimits

0x5d23,	// (0x00054cfe) cale_month_pane_g8

0x5d87,	// (0x00054d62) cale_month_pane_g9_ParamLimits

0x5d87,	// (0x00054d62) cale_month_pane_g9

0x5de5,	// (0x00054dc0) cale_month_pane_g10_ParamLimits

0x5de5,	// (0x00054dc0) cale_month_pane_g10

0x5e41,	// (0x00054e1c) cale_month_pane_g11_ParamLimits

0x5e41,	// (0x00054e1c) cale_month_pane_g11

0x5e95,	// (0x00054e70) cale_month_pane_g12_ParamLimits

0x5e95,	// (0x00054e70) cale_month_pane_g12

0x5eeb,	// (0x00054ec6) cale_month_pane_g13_ParamLimits

0x5eeb,	// (0x00054ec6) cale_month_pane_g13

0x000c,

0xf1d7,	// (0x0005e1b2) cale_month_pane_g_ParamLimits

0xf1d7,	// (0x0005e1b2) cale_month_pane_g

0x5f41,	// (0x00054f1c) cale_month_week_pane

0x5f65,	// (0x00054f40) grid_cale_month_pane_ParamLimits

0x5f65,	// (0x00054f40) grid_cale_month_pane

0x5fbe,	// (0x00054f99) cale_month_day_heading_pane_t1

0x6044,	// (0x0005501f) cale_month_day_heading_pane_t2

0x60bd,	// (0x00055098) cale_month_day_heading_pane_t3

0x6136,	// (0x00055111) cale_month_day_heading_pane_t4

0x61af,	// (0x0005518a) cale_month_day_heading_pane_t5

0x6228,	// (0x00055203) cale_month_day_heading_pane_t6

0x62a1,	// (0x0005527c) cale_month_day_heading_pane_t7

0x0006,

0xf1f2,	// (0x0005e1cd) cale_month_day_heading_pane_t

0xe5b3,	// (0x0005d58e) bg_cale_side_pane_cp01

0x6332,	// (0x0005530d) cale_month_week_pane_t1

0x634b,	// (0x00055326) cale_month_week_pane_t2

0x6364,	// (0x0005533f) cale_month_week_pane_t3

0x637d,	// (0x00055358) cale_month_week_pane_t4

0x6396,	// (0x00055371) cale_month_week_pane_t5

0x63b7,	// (0x00055392) cale_month_week_pane_t6

0x0005,

0xf201,	// (0x0005e1dc) cale_month_week_pane_t

0x63d8,	// (0x000553b3) cell_cale_month_pane_ParamLimits

0x63d8,	// (0x000553b3) cell_cale_month_pane

0x64fa,	// (0x000554d5) cell_cale_month_pane_g1

0x6506,	// (0x000554e1) cell_cale_month_pane_t1_ParamLimits

0x6506,	// (0x000554e1) cell_cale_month_pane_t1

0xe5c1,	// (0x0005d59c) grid_highlight_pane_cp08

0xe2ee,	// (0x0005d2c9) main_smil_g1

0x6532,	// (0x0005550d) smil_status_pane

0xe912,	// (0x0005d8ed) smil_text_pane

0xe545,	// (0x0005d520) bg_popup_call3_rect_pane_g8

0xe53d,	// (0x0005d518) bg_popup_call3_rect_pane_g9

0x0008,

0xf218,	// (0x0005e1f3) bg_popup_call3_rect_pane_g

0x1390,	// (0x0005036b) smil_status_volume_pane_g1

0xe91c,	// (0x0005d8f7) smil_status_pane_t1

0x764c,	// (0x00056627) volume_smil_pane

0xe933,	// (0x0005d90e) list_smil_text_pane

0x6545,	// (0x00055520) scroll_pane_cp011

0x6550,	// (0x0005552b) smil_text_list_pane_t1_ParamLimits

0x6550,	// (0x0005552b) smil_text_list_pane_t1

0x65c8,	// (0x000555a3) aid_volume_smil_ParamLimits

0x65c8,	// (0x000555a3) aid_volume_smil

0xe2ee,	// (0x0005d2c9) smil_volume_pane_g1

0xe2ee,	// (0x0005d2c9) smil_volume_pane_g2

0x0001,

0xf213,	// (0x0005e1ee) smil_volume_pane_g

0x4ddb,	// (0x00053db6) listscroll_cale_day_pane

0xe93d,	// (0x0005d918) bg_cale_pane

0xe955,	// (0x0005d930) list_cale_pane

0xe978,	// (0x0005d953) scroll_pane_cp09

0xe515,	// (0x0005d4f0) cale_bg_pane_g1

0xe4e6,	// (0x0005d4c1) cale_bg_pane_g2

0xe4de,	// (0x0005d4b9) cale_bg_pane_g3

0xe525,	// (0x0005d500) cale_bg_pane_g4

0xe51d,	// (0x0005d4f8) cale_bg_pane_g5

0xe52d,	// (0x0005d508) cale_bg_pane_g6

0xe535,	// (0x0005d510) cale_bg_pane_g7

0xe545,	// (0x0005d520) cale_bg_pane_g8

0xe53d,	// (0x0005d518) cale_bg_pane_g9

0x0008,

0xf218,	// (0x0005e1f3) cale_bg_pane_g

0x65ea,	// (0x000555c5) list_cale_time_pane_ParamLimits

0x65ea,	// (0x000555c5) list_cale_time_pane

0xe991,	// (0x0005d96c) list_cale_time_pane_g1_ParamLimits

0xe991,	// (0x0005d96c) list_cale_time_pane_g1

0xe99d,	// (0x0005d978) list_cale_time_pane_g2_ParamLimits

0xe99d,	// (0x0005d978) list_cale_time_pane_g2

0x660c,	// (0x000555e7) list_cale_time_pane_g3_ParamLimits

0x660c,	// (0x000555e7) list_cale_time_pane_g3

0x661a,	// (0x000555f5) list_cale_time_pane_g4_ParamLimits

0x661a,	// (0x000555f5) list_cale_time_pane_g4

0x6628,	// (0x00055603) list_cale_time_pane_g5_ParamLimits

0x6628,	// (0x00055603) list_cale_time_pane_g5

0x0005,

0xf22b,	// (0x0005e206) list_cale_time_pane_g_ParamLimits

0xf22b,	// (0x0005e206) list_cale_time_pane_g

0xe9b7,	// (0x0005d992) list_cale_time_pane_t1_ParamLimits

0xe9b7,	// (0x0005d992) list_cale_time_pane_t1

0xe9df,	// (0x0005d9ba) list_cale_time_pane_t2_ParamLimits

0xe9df,	// (0x0005d9ba) list_cale_time_pane_t2

0x68cb,	// (0x000558a6) aid_blid_cardinal_pane

0x690d,	// (0x000558e8) compass_pane_t4

0xea07,	// (0x0005d9e2) list_cale_time_pane_t4_ParamLimits

0xea07,	// (0x0005d9e2) list_cale_time_pane_t4

0x691b,	// (0x000558f6) compass_pane_t5

0x692b,	// (0x00055906) compass_pane_t6

0x6939,	// (0x00055914) compass_pane_t7

0xeebb,	// (0x0005de96) navi_pane_cc_t1

0x007f,	// (0x0004f05a) aid_phob_thumbnail_center_pane

0x6de9,	// (0x00055dc4) main_postcard_pane_g4_ParamLimits

0x0002,

0xf238,	// (0x0005e213) list_cale_time_pane_t_ParamLimits

0xf238,	// (0x0005e213) list_cale_time_pane_t

0xdcd2,	// (0x0005ccad) bg_popup_window_pane_cp02_ParamLimits

0xdcd2,	// (0x0005ccad) bg_popup_window_pane_cp02

0xea2f,	// (0x0005da0a) heading_pane_cp01_ParamLimits

0xea2f,	// (0x0005da0a) heading_pane_cp01

0xea3b,	// (0x0005da16) loc_req_pane_ParamLimits

0xea3b,	// (0x0005da16) loc_req_pane

0xea4d,	// (0x0005da28) loc_type_pane_ParamLimits

0xea4d,	// (0x0005da28) loc_type_pane

0xea5f,	// (0x0005da3a) loc_type_pane_t1_ParamLimits

0xea5f,	// (0x0005da3a) loc_type_pane_t1

0xea71,	// (0x0005da4c) loc_type_pane_t2_ParamLimits

0xea71,	// (0x0005da4c) loc_type_pane_t2

0xea83,	// (0x0005da5e) loc_type_pane_t3_ParamLimits

0xea83,	// (0x0005da5e) loc_type_pane_t3

0x0002,

0xf23f,	// (0x0005e21a) loc_type_pane_t_ParamLimits

0xf23f,	// (0x0005e21a) loc_type_pane_t

0xea95,	// (0x0005da70) list_loc_req_pane

0xea9f,	// (0x0005da7a) scroll_pane_cp012

0x6636,	// (0x00055611) list_single_loc_request_popup_menu_pane_ParamLimits

0x6636,	// (0x00055611) list_single_loc_request_popup_menu_pane

0xeaaa,	// (0x0005da85) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xeaaa,	// (0x0005da85) list_single_loc_request_popup_menu_pane_g1

0xeab6,	// (0x0005da91) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xeab6,	// (0x0005da91) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf246,	// (0x0005e221) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf246,	// (0x0005e221) list_single_loc_request_popup_menu_pane_g

0xeac2,	// (0x0005da9d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xeac2,	// (0x0005da9d) list_single_loc_request_popup_menu_pane_t1

0x6648,	// (0x00055623) bg_popup_window_pane_cp03_ParamLimits

0x6648,	// (0x00055623) bg_popup_window_pane_cp03

0x6656,	// (0x00055631) heading_loc_req_pane_ParamLimits

0x6656,	// (0x00055631) heading_loc_req_pane

0x6662,	// (0x0005563d) popup_dyc_status_message_window_g1_ParamLimits

0x6662,	// (0x0005563d) popup_dyc_status_message_window_g1

0x666e,	// (0x00055649) popup_dyc_status_message_window_t1_ParamLimits

0x666e,	// (0x00055649) popup_dyc_status_message_window_t1

0x6680,	// (0x0005565b) popup_dyc_status_message_window_t2_ParamLimits

0x6680,	// (0x0005565b) popup_dyc_status_message_window_t2

0x6692,	// (0x0005566d) popup_dyc_status_message_window_t3_ParamLimits

0x6692,	// (0x0005566d) popup_dyc_status_message_window_t3

0x0002,

0xf24b,	// (0x0005e226) popup_dyc_status_message_window_t_ParamLimits

0xf24b,	// (0x0005e226) popup_dyc_status_message_window_t

0xe07b,	// (0x0005d056) bg_heading_pane_cp01

0xead8,	// (0x0005dab3) heading_loc_req_pane_g1

0xeae0,	// (0x0005dabb) heading_loc_req_pane_g2

0xeaf4,	// (0x0005dacf) heading_loc_req_pane_g3

0x0002,

0xf252,	// (0x0005e22d) heading_loc_req_pane_g

0xeafc,	// (0x0005dad7) heading_loc_req_pane_t1

0xeb1b,	// (0x0005daf6) bg_popup_sub_pane_cp01_ParamLimits

0xeb1b,	// (0x0005daf6) bg_popup_sub_pane_cp01

0xeb29,	// (0x0005db04) popup_cale_events_window_g1_ParamLimits

0xeb29,	// (0x0005db04) popup_cale_events_window_g1

0xeb49,	// (0x0005db24) popup_cale_events_window_g2_ParamLimits

0xeb49,	// (0x0005db24) popup_cale_events_window_g2

0x0001,

0xf274,	// (0x0005e24f) popup_cale_events_window_g_ParamLimits

0xf274,	// (0x0005e24f) popup_cale_events_window_g

0xeb69,	// (0x0005db44) popup_cale_events_window_t1_ParamLimits

0xeb69,	// (0x0005db44) popup_cale_events_window_t1

0xeb7b,	// (0x0005db56) popup_cale_events_window_t2_ParamLimits

0xeb7b,	// (0x0005db56) popup_cale_events_window_t2

0xebb9,	// (0x0005db94) popup_cale_events_window_t3_ParamLimits

0xebb9,	// (0x0005db94) popup_cale_events_window_t3

0xebf3,	// (0x0005dbce) popup_cale_events_window_t4_ParamLimits

0xebf3,	// (0x0005dbce) popup_cale_events_window_t4

0x0003,

0xf279,	// (0x0005e254) popup_cale_events_window_t_ParamLimits

0xf279,	// (0x0005e254) popup_cale_events_window_t

0x66bc,	// (0x00055697) call_type_pane

0x09e5,	// (0x0004f9c0) popup_call_status_window_g1

0x66c8,	// (0x000556a3) popup_call_status_window_g2

0x66d4,	// (0x000556af) popup_call_status_window_g3

0x0002,

0xf282,	// (0x0005e25d) popup_call_status_window_g

0xec29,	// (0x0005dc04) call_type_pane_g1

0xec32,	// (0x0005dc0d) call_type_pane_g2

0x0001,

0xf289,	// (0x0005e264) call_type_pane_g

0xe07b,	// (0x0005d056) bg_popup_sub_pane_cp02

0xec3b,	// (0x0005dc16) listscroll_popup_wml_pane

0xec43,	// (0x0005dc1e) list_wml_pane

0xec4d,	// (0x0005dc28) scroll_pane_cp013

0xec58,	// (0x0005dc33) list_single_graphic_popup_wml_pane_ParamLimits

0xec58,	// (0x0005dc33) list_single_graphic_popup_wml_pane

0xe2ee,	// (0x0005d2c9) list_single_graphic_popup_wml_pane_g1

0xec6c,	// (0x0005dc47) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf28e,	// (0x0005e269) list_single_graphic_popup_wml_pane_g

0xec74,	// (0x0005dc4f) list_single_graphic_popup_wml_pane_t1

0xec8a,	// (0x0005dc65) aid_call_pane

0xe2ce,	// (0x0005d2a9) popup_clock_analogue_window_g1

0xe2ce,	// (0x0005d2a9) popup_clock_analogue_window_g2

0x66e0,	// (0x000556bb) popup_clock_analogue_window_g3

0x66e0,	// (0x000556bb) popup_clock_analogue_window_g4

0xe2ee,	// (0x0005d2c9) popup_clock_analogue_window_g5

0x0004,

0xf293,	// (0x0005e26e) popup_clock_analogue_window_g

0x66e8,	// (0x000556c3) popup_clock_analogue_window_t1

0x66f6,	// (0x000556d1) clock_digital_number_pane_ParamLimits

0x66f6,	// (0x000556d1) clock_digital_number_pane

0x6702,	// (0x000556dd) clock_digital_number_pane_cp02_ParamLimits

0x6702,	// (0x000556dd) clock_digital_number_pane_cp02

0x670e,	// (0x000556e9) clock_digital_number_pane_cp03_ParamLimits

0x670e,	// (0x000556e9) clock_digital_number_pane_cp03

0x671a,	// (0x000556f5) clock_digital_number_pane_cp04_ParamLimits

0x671a,	// (0x000556f5) clock_digital_number_pane_cp04

0x672a,	// (0x00055705) clock_digital_separator_pane_ParamLimits

0x672a,	// (0x00055705) clock_digital_separator_pane

0x6736,	// (0x00055711) popup_clock_digital_window_t1

0xe2ee,	// (0x0005d2c9) clock_digital_number_pane_g1

0xe2ee,	// (0x0005d2c9) clock_digital_number_pane_g2

0x0001,

0xf213,	// (0x0005e1ee) clock_digital_number_pane_g

0xe2ee,	// (0x0005d2c9) clock_digital_separator_pane_g1

0xe2ee,	// (0x0005d2c9) clock_digital_separator_pane_g2

0x0001,

0xf213,	// (0x0005e1ee) clock_digital_separator_pane_g

0xe07b,	// (0x0005d056) bg_popup_window_pane_cp04

0xec92,	// (0x0005dc6d) heading_pane_cp03

0xe60e,	// (0x0005d5e9) listscroll_popup_gms_pane

0xe07b,	// (0x0005d056) grid_large_graphic_popup_pane

0xec9a,	// (0x0005dc75) listscroll_popup_gms_pane_g1

0xeca3,	// (0x0005dc7e) listscroll_popup_gms_pane_g2

0x0001,

0xf29e,	// (0x0005e279) listscroll_popup_gms_pane_g

0xecac,	// (0x0005dc87) scroll_pane_cp014

0xe343,	// (0x0005d31e) cell_large_graphic_popup_pane_ParamLimits

0xe343,	// (0x0005d31e) cell_large_graphic_popup_pane

0xe351,	// (0x0005d32c) cell_large_graphic_popup_pane_g1_ParamLimits

0xe351,	// (0x0005d32c) cell_large_graphic_popup_pane_g1

0xecb5,	// (0x0005dc90) cell_large_graphic_popup_pane_g2_ParamLimits

0xecb5,	// (0x0005dc90) cell_large_graphic_popup_pane_g2

0xecc3,	// (0x0005dc9e) cell_large_graphic_popup_pane_g3_ParamLimits

0xecc3,	// (0x0005dc9e) cell_large_graphic_popup_pane_g3

0xecd1,	// (0x0005dcac) cell_large_graphic_popup_pane_g4_ParamLimits

0xecd1,	// (0x0005dcac) cell_large_graphic_popup_pane_g4

0x0003,

0xf2a3,	// (0x0005e27e) cell_large_graphic_popup_pane_g_ParamLimits

0xf2a3,	// (0x0005e27e) cell_large_graphic_popup_pane_g

0xe07b,	// (0x0005d056) grid_highlight_pane_cp010

0xe2ee,	// (0x0005d2c9) bg_popup_call_pane_g1

0xece2,	// (0x0005dcbd) list_single_graphic_popup_conf_pane_ParamLimits

0xece2,	// (0x0005dcbd) list_single_graphic_popup_conf_pane

0xecf5,	// (0x0005dcd0) list_highlight_pane_cp01

0xecfe,	// (0x0005dcd9) list_single_graphic_popup_conf_pane_g1

0xed06,	// (0x0005dce1) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ac,	// (0x0005e287) list_single_graphic_popup_conf_pane_g

0xed0e,	// (0x0005dce9) list_single_graphic_popup_conf_pane_t1

0xed1c,	// (0x0005dcf7) linegrid_cams_pane_g1

0x6753,	// (0x0005572e) linegrid_cams_pane_g2

0xe54d,	// (0x0005d528) linegrid_cams_pane_g3

0xed25,	// (0x0005dd00) linegrid_cams_pane_g4

0x675c,	// (0x00055737) linegrid_cams_pane_g5

0x6765,	// (0x00055740) linegrid_cams_pane_g6

0xe5fd,	// (0x0005d5d8) linegrid_cams_pane_g7

0x0006,

0xf2b1,	// (0x0005e28c) linegrid_cams_pane_g

0xed2e,	// (0x0005dd09) popup_clock_analogue_window

0xed2e,	// (0x0005dd09) popup_clock_digital_window

0xe07b,	// (0x0005d056) popup_phob_thumbnail_window

0xe2ee,	// (0x0005d2c9) call_video_uplink_pane_g1

0xed37,	// (0x0005dd12) call_video_uplink_pane_g2

0x0001,

0xf2c0,	// (0x0005e29b) call_video_uplink_pane_g

0xed3f,	// (0x0005dd1a) video_uplink_pane

0xed47,	// (0x0005dd22) mce_image_pane_g1

0x676e,	// (0x00055749) mce_image_pane_g2

0x6778,	// (0x00055753) mce_image_pane_g3

0x6780,	// (0x0005575b) mce_image_pane_g4

0x6788,	// (0x00055763) mce_image_pane_g5

0x0004,

0xf2c5,	// (0x0005e2a0) mce_image_pane_g

0xed51,	// (0x0005dd2c) control_top_pane_stacon_cp01_ParamLimits

0xed51,	// (0x0005dd2c) control_top_pane_stacon_cp01

0xed65,	// (0x0005dd40) uni_indicator_pane_stacon_cp01_ParamLimits

0xed65,	// (0x0005dd40) uni_indicator_pane_stacon_cp01

0xed76,	// (0x0005dd51) bg_popup_sub_pane_cp03

0xed80,	// (0x0005dd5b) chi_dic_find_pane

0x6790,	// (0x0005576b) listscroll_chi_dic_pane

0xed88,	// (0x0005dd63) main_pane_chidic_g1

0xed90,	// (0x0005dd6b) chi_dic_find_pane_t1

0xed9e,	// (0x0005dd79) find_chidic_pane

0xeda7,	// (0x0005dd82) chi_dic_list_pane_ParamLimits

0xeda7,	// (0x0005dd82) chi_dic_list_pane

0xedb8,	// (0x0005dd93) scroll_pane_cp020

0xedc0,	// (0x0005dd9b) find_chidic_pane_t1

0xe07b,	// (0x0005d056) input_focus_pane_cp06

0x67a4,	// (0x0005577f) list_chi_dic_pane_ParamLimits

0x67a4,	// (0x0005577f) list_chi_dic_pane

0x67be,	// (0x00055799) list_chi_dic_pane_t1_ParamLimits

0x67be,	// (0x00055799) list_chi_dic_pane_t1

0xe07b,	// (0x0005d056) list_highlight_pane_cp020

0xedcf,	// (0x0005ddaa) bg_cale_heading_pane_g1

0x67d1,	// (0x000557ac) bg_cale_heading_pane_g2

0x67d9,	// (0x000557b4) bg_cale_heading_pane_g3

0x67e1,	// (0x000557bc) bg_cale_heading_pane_g4

0x67eb,	// (0x000557c6) bg_cale_heading_pane_g5

0x67f5,	// (0x000557d0) bg_cale_heading_pane_g6

0x67fd,	// (0x000557d8) bg_cale_heading_pane_g7

0x6805,	// (0x000557e0) bg_cale_heading_pane_g8

0x680f,	// (0x000557ea) bg_cale_heading_pane_g9

0x0008,

0xf2d0,	// (0x0005e2ab) bg_cale_heading_pane_g

0xedcf,	// (0x0005ddaa) bg_cale_side_pane_g1

0x6819,	// (0x000557f4) bg_cale_side_pane_g2

0x6823,	// (0x000557fe) bg_cale_side_pane_g3

0x682d,	// (0x00055808) bg_cale_side_pane_g4

0x6837,	// (0x00055812) bg_cale_side_pane_g5

0x6841,	// (0x0005581c) bg_cale_side_pane_g6

0x684b,	// (0x00055826) bg_cale_side_pane_g7

0x6855,	// (0x00055830) bg_cale_side_pane_g8

0x685d,	// (0x00055838) bg_cale_side_pane_g9

0x0008,

0xf2e3,	// (0x0005e2be) bg_cale_side_pane_g

0x6865,	// (0x00055840) popup_call_status_window_ParamLimits

0x6865,	// (0x00055840) popup_call_status_window

0xedd7,	// (0x0005ddb2) stacon_top_pane

0xeddf,	// (0x0005ddba) status_pane_ParamLimits

0xeddf,	// (0x0005ddba) status_pane

0xedf4,	// (0x0005ddcf) status_small_pane

0xedfc,	// (0x0005ddd7) control_pane

0xe07b,	// (0x0005d056) stacon_bottom_pane

0xee04,	// (0x0005dddf) list_single_mce_smart_pane_t1_ParamLimits

0xee04,	// (0x0005dddf) list_single_mce_smart_pane_t1

0xee17,	// (0x0005ddf2) list_single_mce_smart_pane_t2_ParamLimits

0xee17,	// (0x0005ddf2) list_single_mce_smart_pane_t2

0x0001,

0xf2f6,	// (0x0005e2d1) list_single_mce_smart_pane_t_ParamLimits

0xf2f6,	// (0x0005e2d1) list_single_mce_smart_pane_t

0x6871,	// (0x0005584c) compass_pane

0x687d,	// (0x00055858) main_location2_pane_t1

0x6891,	// (0x0005586c) main_location2_pane_t2

0x68a5,	// (0x00055880) main_location2_pane_t3

0x0003,

0xf2fb,	// (0x0005e2d6) main_location2_pane_t

0xee36,	// (0x0005de11) compass_pane_g1_ParamLimits

0xee36,	// (0x0005de11) compass_pane_g1

0x68ef,	// (0x000558ca) compass_pane_t1

0x68fe,	// (0x000558d9) compass_pane_t2

0x0005,

0xf304,	// (0x0005e2df) compass_pane_t

0x6949,	// (0x00055924) text_secondary_cp61

0xeeb2,	// (0x0005de8d) navi_pane_cams_g5

0xef2e,	// (0x0005df09) navi_pane_im_t1

0xef3c,	// (0x0005df17) navi_pane_mp_g1_ParamLimits

0xef3c,	// (0x0005df17) navi_pane_mp_g1

0xef50,	// (0x0005df2b) navi_pane_mp_g2_ParamLimits

0xef50,	// (0x0005df2b) navi_pane_mp_g2

0xef5c,	// (0x0005df37) navi_pane_mp_g3_ParamLimits

0xef5c,	// (0x0005df37) navi_pane_mp_g3

0x0002,

0xf318,	// (0x0005e2f3) navi_pane_mp_g_ParamLimits

0xf318,	// (0x0005e2f3) navi_pane_mp_g

0xef68,	// (0x0005df43) navi_pane_mp_t1

0xef76,	// (0x0005df51) navi_pane_mp_t2

0x0002,

0xf31f,	// (0x0005e2fa) navi_pane_mp_t

0xefe1,	// (0x0005dfbc) navi_pane_vt_g1

0xef68,	// (0x0005df43) navi_pane_vt_t1

0xefe9,	// (0x0005dfc4) navi_slider_pane

0xe60e,	// (0x0005d5e9) zooming_pane

0xeff9,	// (0x0005dfd4) navi_slider_pane_g1

0x6984,	// (0x0005595f) navi_slider_pane_g2

0x0006,

0xf326,	// (0x0005e301) navi_slider_pane_g

0x0004,	// (0x0004efdf) aid_levels_zoom

0x000c,	// (0x0004efe7) zooming_pane_g1

0x0014,	// (0x0004efef) zooming_pane_g2

0x0014,	// (0x0004efef) zooming_pane_g3

0x0002,

0xf335,	// (0x0005e310) zooming_pane_g

0x001c,	// (0x0004eff7) level_10_zoom

0x0025,	// (0x0004f000) level_11_zoom

0x002e,	// (0x0004f009) level_1_zoom

0x0037,	// (0x0004f012) level_2_zoom

0x0040,	// (0x0004f01b) level_3_zoom

0x0049,	// (0x0004f024) level_4_zoom

0x0052,	// (0x0004f02d) level_5_zoom

0x005b,	// (0x0004f036) level_6_zoom

0x0064,	// (0x0004f03f) level_7_zoom

0x006d,	// (0x0004f048) level_8_zoom

0x0076,	// (0x0004f051) level_9_zoom

0x0087,	// (0x0004f062) popup_phob_thumbnail_window_g1

0x008f,	// (0x0004f06a) popup_phob_thumbnail_window_g2

0x0001,

0xf33c,	// (0x0005e317) popup_phob_thumbnail_window_g

0x72f7,	// (0x000562d2) level_1_location

0x72ff,	// (0x000562da) level_2_location

0x7307,	// (0x000562e2) level_3_location

0x7311,	// (0x000562ec) level_4_location

0xe60e,	// (0x0005d5e9) level_5_location

0x6996,	// (0x00055971) mce_icon_pane_g1

0x699e,	// (0x00055979) mce_icon_pane_g2

0x0001,

0xf341,	// (0x0005e31c) mce_icon_pane_g

0x69a6,	// (0x00055981) main_mup_pane_g1_ParamLimits

0x69a6,	// (0x00055981) main_mup_pane_g1

0xe36d,	// (0x0005d348) main_mup_pane_g2_ParamLimits

0xe36d,	// (0x0005d348) main_mup_pane_g2

0xe36d,	// (0x0005d348) main_mup_pane_g3_ParamLimits

0xe36d,	// (0x0005d348) main_mup_pane_g3

0xe36d,	// (0x0005d348) main_mup_pane_g4_ParamLimits

0xe36d,	// (0x0005d348) main_mup_pane_g4

0xe36d,	// (0x0005d348) main_mup_pane_g5_ParamLimits

0xe36d,	// (0x0005d348) main_mup_pane_g5

0xe36d,	// (0x0005d348) main_mup_pane_g6_ParamLimits

0xe36d,	// (0x0005d348) main_mup_pane_g6

0xe36d,	// (0x0005d348) main_mup_pane_g7_ParamLimits

0xe36d,	// (0x0005d348) main_mup_pane_g7

0xe36d,	// (0x0005d348) main_mup_pane_g8_ParamLimits

0xe36d,	// (0x0005d348) main_mup_pane_g8

0xe36d,	// (0x0005d348) main_mup_pane_g9_ParamLimits

0xe36d,	// (0x0005d348) main_mup_pane_g9

0xe36d,	// (0x0005d348) main_mup_pane_g10_ParamLimits

0xe36d,	// (0x0005d348) main_mup_pane_g10

0xe36d,	// (0x0005d348) main_mup_pane_g11_ParamLimits

0xe36d,	// (0x0005d348) main_mup_pane_g11

0xe35f,	// (0x0005d33a) main_mup_pane_g12_ParamLimits

0xe35f,	// (0x0005d33a) main_mup_pane_g12

0xe36d,	// (0x0005d348) main_mup_pane_g13_ParamLimits

0xe36d,	// (0x0005d348) main_mup_pane_g13

0x000c,

0xf346,	// (0x0005e321) main_mup_pane_g_ParamLimits

0xf346,	// (0x0005e321) main_mup_pane_g

0xe37b,	// (0x0005d356) main_mup_pane_t1_ParamLimits

0xe37b,	// (0x0005d356) main_mup_pane_t1

0xe37b,	// (0x0005d356) main_mup_pane_t2_ParamLimits

0xe37b,	// (0x0005d356) main_mup_pane_t2

0xe37b,	// (0x0005d356) main_mup_pane_t3_ParamLimits

0xe37b,	// (0x0005d356) main_mup_pane_t3

0xe3ad,	// (0x0005d388) main_mup_pane_t4_ParamLimits

0xe3ad,	// (0x0005d388) main_mup_pane_t4

0xe3ad,	// (0x0005d388) main_mup_pane_t5_ParamLimits

0xe3ad,	// (0x0005d388) main_mup_pane_t5

0xe399,	// (0x0005d374) main_mup_pane_t6_ParamLimits

0xe399,	// (0x0005d374) main_mup_pane_t6

0x0005,

0xf361,	// (0x0005e33c) main_mup_pane_t_ParamLimits

0xf361,	// (0x0005e33c) main_mup_pane_t

0xdbd6,	// (0x0005cbb1) mup_progress_pane_ParamLimits

0xdbd6,	// (0x0005cbb1) mup_progress_pane

0x1ca4,	// (0x00050c7f) mup_visualizer_pane_ParamLimits

0x1ca4,	// (0x00050c7f) mup_visualizer_pane

0x1ca4,	// (0x00050c7f) mup_volume_pane_ParamLimits

0x1ca4,	// (0x00050c7f) mup_volume_pane

0xe35f,	// (0x0005d33a) mup_visualizer_pane_g1_ParamLimits

0xe35f,	// (0x0005d33a) mup_visualizer_pane_g1

0x00c7,	// (0x0004f0a2) mup_visualizer_pane_g2_ParamLimits

0x00c7,	// (0x0004f0a2) mup_visualizer_pane_g2

0xe351,	// (0x0005d32c) mup_visualizer_pane_g3_ParamLimits

0xe351,	// (0x0005d32c) mup_visualizer_pane_g3

0x0002,

0xf36e,	// (0x0005e349) mup_visualizer_pane_g_ParamLimits

0xf36e,	// (0x0005e349) mup_visualizer_pane_g

0xe38f,	// (0x0005d36a) mup_volume_pane_g1

0xe38f,	// (0x0005d36a) mup_volume_pane_g2

0x0001,

0xf08c,	// (0x0005e067) mup_volume_pane_g

0xe38f,	// (0x0005d36a) mup_progress_pane_g1

0xe38f,	// (0x0005d36a) mup_progress_pane_g2

0xe38f,	// (0x0005d36a) mup_progress_pane_g3

0x0002,

0xf375,	// (0x0005e350) mup_progress_pane_g

0xe07b,	// (0x0005d056) bg_popup_window_pane_cp05

0x00d5,	// (0x0004f0b0) heading_pane_cp02_ParamLimits

0x00d5,	// (0x0004f0b0) heading_pane_cp02

0x00ef,	// (0x0004f0ca) list_popup_blid_pane

0x00f7,	// (0x0004f0d2) list_blid_sat_info_pane_ParamLimits

0x00f7,	// (0x0004f0d2) list_blid_sat_info_pane

0x010a,	// (0x0004f0e5) list_blid_sat_info_pane_g1

0x0112,	// (0x0004f0ed) list_blid_sat_info_pane_t1

0x6aa3,	// (0x00055a7e) mup_equalizer_pane_ParamLimits

0x6aa3,	// (0x00055a7e) mup_equalizer_pane

0x6ac4,	// (0x00055a9f) mup_equalizer_pane_cp1_ParamLimits

0x6ac4,	// (0x00055a9f) mup_equalizer_pane_cp1

0x6ae5,	// (0x00055ac0) mup_equalizer_pane_cp2_ParamLimits

0x6ae5,	// (0x00055ac0) mup_equalizer_pane_cp2

0x6b06,	// (0x00055ae1) mup_equalizer_pane_cp3_ParamLimits

0x6b06,	// (0x00055ae1) mup_equalizer_pane_cp3

0x6b27,	// (0x00055b02) mup_equalizer_pane_cp4_ParamLimits

0x6b27,	// (0x00055b02) mup_equalizer_pane_cp4

0x6b48,	// (0x00055b23) mup_equalizer_pane_cp5

0x6b5e,	// (0x00055b39) mup_equalizer_pane_cp6

0x6b76,	// (0x00055b51) mup_equalizer_pane_cp7

0x1200,	// (0x000501db) bg_popup_call_poc_act_pane_g9

0x1208,	// (0x000501e3) bg_popup_call_poc_act_pane_g10

0x1210,	// (0x000501eb) bg_popup_call_poc_act_pane_g11

0x000a,

0xe2d6,	// (0x0005d2b1) mup_scale_pane

0xe2ee,	// (0x0005d2c9) mup_scale_pane_g1

0x0120,	// (0x0004f0fb) mup_scale_pane_g2

0x0006,

0xf391,	// (0x0005e36c) mup_scale_pane_g

0x0144,	// (0x0004f11f) msg_data_pane

0x014c,	// (0x0004f127) scroll_pane_cp017

0x6ba0,	// (0x00055b7b) bg_list_pane_cp04_ParamLimits

0x6ba0,	// (0x00055b7b) bg_list_pane_cp04

0x0154,	// (0x0004f12f) msg_data_pane_g1

0x6bc4,	// (0x00055b9f) msg_data_pane_g2

0x6bce,	// (0x00055ba9) msg_data_pane_g3

0x6bd6,	// (0x00055bb1) msg_data_pane_g4

0x6bde,	// (0x00055bb9) msg_data_pane_g5

0x6be6,	// (0x00055bc1) msg_data_pane_g6

0x6bee,	// (0x00055bc9) msg_data_pane_g7

0x0006,

0xf3a0,	// (0x0005e37b) msg_data_pane_g

0x6bf6,	// (0x00055bd1) msg_text_pane_ParamLimits

0x6bf6,	// (0x00055bd1) msg_text_pane

0x6c56,	// (0x00055c31) qrid_highlight_pane_cp011_ParamLimits

0x6c56,	// (0x00055c31) qrid_highlight_pane_cp011

0xe07b,	// (0x0005d056) msg_body_pane

0xe2d6,	// (0x0005d2b1) msg_header_pane

0x0170,	// (0x0004f14b) input_focus_pane_cp07

0x0191,	// (0x0004f16c) msg_header_pane_t1_ParamLimits

0x0191,	// (0x0004f16c) msg_header_pane_t1

0x6c7e,	// (0x00055c59) msg_header_pane_t2_ParamLimits

0x6c7e,	// (0x00055c59) msg_header_pane_t2

0x0001,

0xf3b4,	// (0x0005e38f) msg_header_pane_t_ParamLimits

0xf3b4,	// (0x0005e38f) msg_header_pane_t

0x01ad,	// (0x0004f188) msg_body_pane_g1

0x6c9e,	// (0x00055c79) msg_body_pane_t1_ParamLimits

0x6c9e,	// (0x00055c79) msg_body_pane_t1

0x6ccf,	// (0x00055caa) msg_body_pane_t2_ParamLimits

0x6ccf,	// (0x00055caa) msg_body_pane_t2

0x6ce1,	// (0x00055cbc) msg_body_pane_t3_ParamLimits

0x6ce1,	// (0x00055cbc) msg_body_pane_t3

0x0002,

0xf3b9,	// (0x0005e394) msg_body_pane_t_ParamLimits

0xf3b9,	// (0x0005e394) msg_body_pane_t

0x6d45,	// (0x00055d20) main_viewer_pane_g1_ParamLimits

0x6d45,	// (0x00055d20) main_viewer_pane_g1

0x6d51,	// (0x00055d2c) main_viewer_pane_g2_ParamLimits

0x6d51,	// (0x00055d2c) main_viewer_pane_g2

0x6d5d,	// (0x00055d38) main_viewer_pane_g3_ParamLimits

0x6d5d,	// (0x00055d38) main_viewer_pane_g3

0x6d6e,	// (0x00055d49) main_viewer_pane_g4_ParamLimits

0x6d6e,	// (0x00055d49) main_viewer_pane_g4

0x6d7f,	// (0x00055d5a) main_viewer_pane_g5_ParamLimits

0x6d7f,	// (0x00055d5a) main_viewer_pane_g5

0x6d7f,	// (0x00055d5a) main_viewer_pane_g7_ParamLimits

0x6d7f,	// (0x00055d5a) main_viewer_pane_g7

0xeaaa,	// (0x0005da85) main_viewer_pane_g8_ParamLimits

0xeaaa,	// (0x0005da85) main_viewer_pane_g8

0x0007,

0xf3c9,	// (0x0005e3a4) main_viewer_pane_g_ParamLimits

0xf3c9,	// (0x0005e3a4) main_viewer_pane_g

0x01f7,	// (0x0004f1d2) viewer_content_pane_ParamLimits

0x01f7,	// (0x0004f1d2) viewer_content_pane

0x6dbd,	// (0x00055d98) main_postcard_pane_g1_ParamLimits

0x6dbd,	// (0x00055d98) main_postcard_pane_g1

0x6dcb,	// (0x00055da6) main_postcard_pane_g2_ParamLimits

0x6dcb,	// (0x00055da6) main_postcard_pane_g2

0x6dd9,	// (0x00055db4) main_postcard_pane_g3_ParamLimits

0x6dd9,	// (0x00055db4) main_postcard_pane_g3

0x0005,

0xf3da,	// (0x0005e3b5) main_postcard_pane_g_ParamLimits

0xf3da,	// (0x0005e3b5) main_postcard_pane_g

0x6de9,	// (0x00055dc4) main_postcard_pane_g4

0x137d,	// (0x00050358) smil_status_volume_pane_g2

0x6e15,	// (0x00055df0) postcard_pane_ParamLimits

0x6e15,	// (0x00055df0) postcard_pane

0x09e5,	// (0x0004f9c0) postcard_pane_g1_ParamLimits

0x09e5,	// (0x0004f9c0) postcard_pane_g1

0x6e47,	// (0x00055e22) postcard_pane_g2_ParamLimits

0x6e47,	// (0x00055e22) postcard_pane_g2

0x6e53,	// (0x00055e2e) postcard_pane_g3_ParamLimits

0x6e53,	// (0x00055e2e) postcard_pane_g3

0x0213,	// (0x0004f1ee) postcard_pane_g4_ParamLimits

0x0213,	// (0x0004f1ee) postcard_pane_g4

0x6e5f,	// (0x00055e3a) postcard_pane_g5_ParamLimits

0x6e5f,	// (0x00055e3a) postcard_pane_g5

0x6e6b,	// (0x00055e46) postcard_pane_g6_ParamLimits

0x6e6b,	// (0x00055e46) postcard_pane_g6

0x0205,	// (0x0004f1e0) postcard_pane_g7_ParamLimits

0x0205,	// (0x0004f1e0) postcard_pane_g7

0x0006,

0xf3e7,	// (0x0005e3c2) postcard_pane_g_ParamLimits

0xf3e7,	// (0x0005e3c2) postcard_pane_g

0x6e77,	// (0x00055e52) main_mp2_pane_g1_ParamLimits

0x6e77,	// (0x00055e52) main_mp2_pane_g1

0x6e83,	// (0x00055e5e) main_mp2_pane_g2_ParamLimits

0x6e83,	// (0x00055e5e) main_mp2_pane_g2

0x6e8f,	// (0x00055e6a) main_mp2_pane_g3_ParamLimits

0x6e8f,	// (0x00055e6a) main_mp2_pane_g3

0x0002,

0xf3f6,	// (0x0005e3d1) main_mp2_pane_g_ParamLimits

0xf3f6,	// (0x0005e3d1) main_mp2_pane_g

0x6e9b,	// (0x00055e76) main_mp2_pane_t1_ParamLimits

0x6e9b,	// (0x00055e76) main_mp2_pane_t1

0x6eb2,	// (0x00055e8d) main_mp2_pane_t2_ParamLimits

0x6eb2,	// (0x00055e8d) main_mp2_pane_t2

0x6ec6,	// (0x00055ea1) main_mp2_pane_t3_ParamLimits

0x6ec6,	// (0x00055ea1) main_mp2_pane_t3

0x0002,

0xf3fd,	// (0x0005e3d8) main_mp2_pane_t_ParamLimits

0xf3fd,	// (0x0005e3d8) main_mp2_pane_t

0xdbd6,	// (0x0005cbb1) pec_content_pane_ParamLimits

0xdbd6,	// (0x0005cbb1) pec_content_pane

0xdb99,	// (0x0005cb74) scroll_pane_cp015

0x00b9,	// (0x0004f094) pec_attribute_pane_ParamLimits

0x00b9,	// (0x0004f094) pec_attribute_pane

0xe351,	// (0x0005d32c) pec_content_pane_g1_ParamLimits

0xe351,	// (0x0005d32c) pec_content_pane_g1

0x0221,	// (0x0004f1fc) pec_content_pane_t1_ParamLimits

0x0221,	// (0x0004f1fc) pec_content_pane_t1

0x0235,	// (0x0004f210) pec_content_pane_t2_ParamLimits

0x0235,	// (0x0004f210) pec_content_pane_t2

0x0001,

0xf404,	// (0x0005e3df) pec_content_pane_t_ParamLimits

0xf404,	// (0x0005e3df) pec_content_pane_t

0xe343,	// (0x0005d31e) list_single_graphic_pane_cp01_ParamLimits

0xe343,	// (0x0005d31e) list_single_graphic_pane_cp01

0xe2d6,	// (0x0005d2b1) bg_popup_sub_pane_cp04

0x0249,	// (0x0004f224) popup_mup_playback_window_g1

0x0255,	// (0x0004f230) popup_mup_playback_window_t1

0x026a,	// (0x0004f245) popup_mup_playback_window_t2

0x0001,

0xf409,	// (0x0005e3e4) popup_mup_playback_window_t

0x02a1,	// (0x0004f27c) main_image_pane_g1_ParamLimits

0x02a1,	// (0x0004f27c) main_image_pane_g1

0x02e4,	// (0x0004f2bf) scroll_pane_cp018_ParamLimits

0x02e4,	// (0x0004f2bf) scroll_pane_cp018

0x02fc,	// (0x0004f2d7) scroll_pane_cp016_ParamLimits

0x02fc,	// (0x0004f2d7) scroll_pane_cp016

0x6f49,	// (0x00055f24) smil2_image_pane_ParamLimits

0x6f49,	// (0x00055f24) smil2_image_pane

0x6f79,	// (0x00055f54) smil2_root_pane_ParamLimits

0x6f79,	// (0x00055f54) smil2_root_pane

0x6fa5,	// (0x00055f80) smil2_text_pane_ParamLimits

0x6fa5,	// (0x00055f80) smil2_text_pane

0xdb99,	// (0x0005cb74) bg_list_pane_cp06

0xdb99,	// (0x0005cb74) grid_radio_pane

0xe07b,	// (0x0005d056) bg_popup_window_pane_cp06

0xeb0b,	// (0x0005dae6) main_fmradio_pane_t1

0xec92,	// (0x0005dc6d) heading_pane_cp04

0xeb0b,	// (0x0005dae6) main_fmradio_pane_t2

0x1218,	// (0x000501f3) popup_cale_lunar_info_window_g1

0xeb0b,	// (0x0005dae6) main_fmradio_pane_t3

0x1220,	// (0x000501fb) popup_cale_lunar_info_window_g2

0xeb0b,	// (0x0005dae6) main_fmradio_pane_t4

0x0001,

0xeb0b,	// (0x0005dae6) main_fmradio_pane_t5

0x0004,

0xf4cb,	// (0x0005e4a6) popup_cale_lunar_info_window_g

0xf269,	// (0x0005e244) main_fmradio_pane_t

0xdb99,	// (0x0005cb74) wait_bar_pane_cp03

0xe343,	// (0x0005d31e) cell_fmradio_pane_ParamLimits

0xe343,	// (0x0005d31e) cell_fmradio_pane

0xe351,	// (0x0005d32c) cell_fmradio_pane_g1_ParamLimits

0xe351,	// (0x0005d32c) cell_fmradio_pane_g1

0xdb99,	// (0x0005cb74) grid_highlight_pane_cp011

0x0330,	// (0x0004f30b) poc_content_pane_ParamLimits

0x0330,	// (0x0004f30b) poc_content_pane

0x0342,	// (0x0004f31d) scroll_pane_cp019

0x6fe5,	// (0x00055fc0) popup_call_poc_act_window_ParamLimits

0x6fe5,	// (0x00055fc0) popup_call_poc_act_window

0x6ff2,	// (0x00055fcd) popup_call_poc_inact_window_ParamLimits

0x6ff2,	// (0x00055fcd) popup_call_poc_inact_window

0xf4a2,	// (0x0005e47d) bg_popup_call_poc_act_pane_g

0x1190,	// (0x0005016b) bg_popup_call_poc_inact_pane_g1

0x1198,	// (0x00050173) bg_popup_call_poc_inact_pane_g2

0x034a,	// (0x0004f325) popup_call_poc_act_window_g2

0x11a0,	// (0x0005017b) bg_popup_call_poc_inact_pane_g3

0x11a8,	// (0x00050183) bg_popup_call_poc_inact_pane_g4

0x11b0,	// (0x0005018b) bg_popup_call_poc_inact_pane_g5

0x0352,	// (0x0004f32d) popup_call_poc_act_window_t1_ParamLimits

0x0352,	// (0x0004f32d) popup_call_poc_act_window_t1

0x037a,	// (0x0004f355) popup_call_poc_act_window_t2_ParamLimits

0x037a,	// (0x0004f355) popup_call_poc_act_window_t2

0x03a2,	// (0x0004f37d) popup_call_poc_act_window_t3_ParamLimits

0x03a2,	// (0x0004f37d) popup_call_poc_act_window_t3

0x03ca,	// (0x0004f3a5) popup_call_poc_act_window_t4_ParamLimits

0x03ca,	// (0x0004f3a5) popup_call_poc_act_window_t4

0x0003,

0xf41e,	// (0x0005e3f9) popup_call_poc_act_window_t_ParamLimits

0xf41e,	// (0x0005e3f9) popup_call_poc_act_window_t

0x11b8,	// (0x00050193) bg_popup_call_poc_inact_pane_g6

0x11c0,	// (0x0005019b) bg_popup_call_poc_inact_pane_g7

0x11c8,	// (0x000501a3) bg_popup_call_poc_inact_pane_g8

0x03dc,	// (0x0004f3b7) popup_call_poc_inact_window_g2

0x11d0,	// (0x000501ab) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf48f,	// (0x0005e46a) bg_popup_call_poc_inact_pane_g

0x03e4,	// (0x0004f3bf) popup_call_poc_inact_window_t1_ParamLimits

0x03e4,	// (0x0004f3bf) popup_call_poc_inact_window_t1

0x03f9,	// (0x0004f3d4) popup_call_poc_inact_window_t2_ParamLimits

0x03f9,	// (0x0004f3d4) popup_call_poc_inact_window_t2

0x040e,	// (0x0004f3e9) popup_call_poc_inact_window_t3_ParamLimits

0x040e,	// (0x0004f3e9) popup_call_poc_inact_window_t3

0x0002,

0xf427,	// (0x0005e402) popup_call_poc_inact_window_t_ParamLimits

0xf427,	// (0x0005e402) popup_call_poc_inact_window_t

0x1308,	// (0x000502e3) context_pane_ParamLimits

0x7603,	// (0x000565de) signal_pane_ParamLimits

0xe60e,	// (0x0005d5e9) main_call2_pane

0x7576,	// (0x00056551) popup_phob_thumbnail2_window_ParamLimits

0x7576,	// (0x00056551) popup_phob_thumbnail2_window

0x6cf3,	// (0x00055cce) aid_hotspot_pointer_arrow_pane

0x6cfb,	// (0x00055cd6) aid_hotspot_pointer_hand_pane

0x72bf,	// (0x0005629a) phob_pre_status_pane_g5

0xe343,	// (0x0005d31e) cams_zoom_pane_ParamLimits

0xe343,	// (0x0005d31e) image_vga_pane_ParamLimits

0xe35f,	// (0x0005d33a) main_camera_pane_g1_ParamLimits

0xe35f,	// (0x0005d33a) main_camera_pane_g2_ParamLimits

0xe35f,	// (0x0005d33a) main_camera_pane_g3_ParamLimits

0xe35f,	// (0x0005d33a) main_camera_pane_g4_ParamLimits

0xe35f,	// (0x0005d33a) main_camera_pane_g5_ParamLimits

0xe35f,	// (0x0005d33a) main_camera_pane_g6_ParamLimits

0xe35f,	// (0x0005d33a) main_camera_pane_g7_ParamLimits

0xf15d,	// (0x0005e138) main_camera_pane_g_ParamLimits

0xe3ad,	// (0x0005d388) main_camera_pane_t1_ParamLimits

0xe3ad,	// (0x0005d388) main_camera_pane_t2_ParamLimits

0xf16e,	// (0x0005e149) main_camera_pane_t_ParamLimits

0xe2d6,	// (0x0005d2b1) bg_popup_preview_window_pane_cp01_ParamLimits

0xe2d6,	// (0x0005d2b1) bg_popup_preview_window_pane_cp01

0x0423,	// (0x0004f3fe) popup_phob_thumbnail2_window_g1_ParamLimits

0x0423,	// (0x0004f3fe) popup_phob_thumbnail2_window_g1

0xe07b,	// (0x0005d056) call2_cli_visual_pane

0x700e,	// (0x00055fe9) popup_call2_audio_conf_window_ParamLimits

0x700e,	// (0x00055fe9) popup_call2_audio_conf_window

0x7023,	// (0x00055ffe) popup_call2_audio_first_window_ParamLimits

0x7023,	// (0x00055ffe) popup_call2_audio_first_window

0x70c1,	// (0x0005609c) popup_call2_audio_in_window_ParamLimits

0x70c1,	// (0x0005609c) popup_call2_audio_in_window

0x7103,	// (0x000560de) popup_call2_audio_out_window_ParamLimits

0x7103,	// (0x000560de) popup_call2_audio_out_window

0x7165,	// (0x00056140) popup_call2_audio_second_window_ParamLimits

0x7165,	// (0x00056140) popup_call2_audio_second_window

0x71c3,	// (0x0005619e) popup_call2_audio_wait_window_ParamLimits

0x71c3,	// (0x0005619e) popup_call2_audio_wait_window

0xe07b,	// (0x0005d056) bg_popup_call2_act_pane_cp03

0xe2b8,	// (0x0005d293) list_conf_pane_cp

0x042f,	// (0x0004f40a) popup_call2_audio_conf_window_t1

0xece2,	// (0x0005dcbd) list_single_graphic_popup_conf2_pane_ParamLimits

0xece2,	// (0x0005dcbd) list_single_graphic_popup_conf2_pane

0xecf5,	// (0x0005dcd0) list_highlight_pane_cp04

0x043d,	// (0x0004f418) list_single_graphic_popup_conf2_pane_g1

0xed06,	// (0x0005dce1) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf42e,	// (0x0005e409) list_single_graphic_popup_conf2_pane_g

0x0447,	// (0x0004f422) list_single_graphic_popup_conf2_pane_t1

0x0455,	// (0x0004f430) bg_popup_call2_act_pane_cp01_ParamLimits

0x0455,	// (0x0004f430) bg_popup_call2_act_pane_cp01

0x04df,	// (0x0004f4ba) call_type_pane_cp05_ParamLimits

0x04df,	// (0x0004f4ba) call_type_pane_cp05

0x0533,	// (0x0004f50e) popup_call2_audio_second_window_g1_ParamLimits

0x0533,	// (0x0004f50e) popup_call2_audio_second_window_g1

0x0587,	// (0x0004f562) popup_call2_audio_second_window_g2_ParamLimits

0x0587,	// (0x0004f562) popup_call2_audio_second_window_g2

0x0002,

0xf433,	// (0x0005e40e) popup_call2_audio_second_window_g_ParamLimits

0xf433,	// (0x0005e40e) popup_call2_audio_second_window_g

0x05ec,	// (0x0004f5c7) popup_call2_audio_second_window_t1_ParamLimits

0x05ec,	// (0x0004f5c7) popup_call2_audio_second_window_t1

0x06a7,	// (0x0004f682) popup_call2_audio_second_window_t2_ParamLimits

0x06a7,	// (0x0004f682) popup_call2_audio_second_window_t2

0x06fa,	// (0x0004f6d5) popup_call2_audio_second_window_t3_ParamLimits

0x06fa,	// (0x0004f6d5) popup_call2_audio_second_window_t3

0x0003,

0xf43a,	// (0x0005e415) popup_call2_audio_second_window_t_ParamLimits

0xf43a,	// (0x0005e415) popup_call2_audio_second_window_t

0xe07b,	// (0x0005d056) bg_popup_call2_in_pane_cp02

0xe085,	// (0x0005d060) call_type_pane_cp04

0x7202,	// (0x000561dd) popup_call2_audio_wait_window_g1

0x720a,	// (0x000561e5) popup_call2_audio_wait_window_g2

0x0001,

0xf443,	// (0x0005e41e) popup_call2_audio_wait_window_g

0xe09d,	// (0x0005d078) popup_call2_audio_wait_window_t3

0x07ed,	// (0x0004f7c8) bg_popup_call2_act_pane_ParamLimits

0x07ed,	// (0x0004f7c8) bg_popup_call2_act_pane

0x08ad,	// (0x0004f888) call_type_pane_cp03_ParamLimits

0x08ad,	// (0x0004f888) call_type_pane_cp03

0x0911,	// (0x0004f8ec) popup_call2_audio_first_window_g1_ParamLimits

0x0911,	// (0x0004f8ec) popup_call2_audio_first_window_g1

0x0981,	// (0x0004f95c) popup_call2_audio_first_window_g2_ParamLimits

0x0981,	// (0x0004f95c) popup_call2_audio_first_window_g2

0x09e5,	// (0x0004f9c0) popup_call2_audio_first_window_g3_ParamLimits

0x09e5,	// (0x0004f9c0) popup_call2_audio_first_window_g3

0x0004,

0xf448,	// (0x0005e423) popup_call2_audio_first_window_g_ParamLimits

0xf448,	// (0x0005e423) popup_call2_audio_first_window_g

0x0a6d,	// (0x0004fa48) popup_call2_audio_first_window_t1_ParamLimits

0x0a6d,	// (0x0004fa48) popup_call2_audio_first_window_t1

0x0b70,	// (0x0004fb4b) popup_call2_audio_first_window_t4_ParamLimits

0x0b70,	// (0x0004fb4b) popup_call2_audio_first_window_t4

0x0c53,	// (0x0004fc2e) popup_call2_audio_first_window_t5_ParamLimits

0x0c53,	// (0x0004fc2e) popup_call2_audio_first_window_t5

0x0003,

0xf453,	// (0x0005e42e) popup_call2_audio_first_window_t_ParamLimits

0xf453,	// (0x0005e42e) popup_call2_audio_first_window_t

0xe2ce,	// (0x0005d2a9) bg_popup_call2_act_pane_g1

0x1228,	// (0x00050203) popup_cale_lunar_info_window_t1

0x1236,	// (0x00050211) popup_cale_lunar_info_window_t2

0x1244,	// (0x0005021f) popup_cale_lunar_info_window_t3

0xe07b,	// (0x0005d056) bg_popup_call2_bubble_pane

0x0d54,	// (0x0004fd2f) bg_popup_call2_in_pane_cp01_ParamLimits

0x0d54,	// (0x0004fd2f) bg_popup_call2_in_pane_cp01

0xdd57,	// (0x0005cd32) call_type_pane_cp02

0x7212,	// (0x000561ed) popup_call2_audio_out_window_g1_ParamLimits

0x7212,	// (0x000561ed) popup_call2_audio_out_window_g1

0x0d9c,	// (0x0004fd77) popup_call2_audio_out_window_g2_ParamLimits

0x0d9c,	// (0x0004fd77) popup_call2_audio_out_window_g2

0x723e,	// (0x00056219) popup_call2_audio_out_window_g3_ParamLimits

0x723e,	// (0x00056219) popup_call2_audio_out_window_g3

0x0003,

0xf45c,	// (0x0005e437) popup_call2_audio_out_window_g_ParamLimits

0xf45c,	// (0x0005e437) popup_call2_audio_out_window_g

0x0dd3,	// (0x0004fdae) popup_call2_audio_out_window_t1_ParamLimits

0x0dd3,	// (0x0004fdae) popup_call2_audio_out_window_t1

0x0e32,	// (0x0004fe0d) popup_call2_audio_out_window_t2_ParamLimits

0x0e32,	// (0x0004fe0d) popup_call2_audio_out_window_t2

0x0e86,	// (0x0004fe61) popup_call2_audio_out_window_t3_ParamLimits

0x0e86,	// (0x0004fe61) popup_call2_audio_out_window_t3

0x0e9c,	// (0x0004fe77) popup_call2_audio_out_window_t4_ParamLimits

0x0e9c,	// (0x0004fe77) popup_call2_audio_out_window_t4

0x0eb2,	// (0x0004fe8d) popup_call2_audio_out_window_t5_ParamLimits

0x0eb2,	// (0x0004fe8d) popup_call2_audio_out_window_t5

0x0005,

0xf465,	// (0x0005e440) popup_call2_audio_out_window_t_ParamLimits

0xf465,	// (0x0005e440) popup_call2_audio_out_window_t

0x0f16,	// (0x0004fef1) bg_popup_call2_in_pane_ParamLimits

0x0f16,	// (0x0004fef1) bg_popup_call2_in_pane

0x0f72,	// (0x0004ff4d) popup_call2_audio_in_window_g1_ParamLimits

0x0f72,	// (0x0004ff4d) popup_call2_audio_in_window_g1

0x0faa,	// (0x0004ff85) popup_call2_audio_in_window_g2_ParamLimits

0x0faa,	// (0x0004ff85) popup_call2_audio_in_window_g2

0x0fe2,	// (0x0004ffbd) popup_call2_audio_in_window_g3_ParamLimits

0x0fe2,	// (0x0004ffbd) popup_call2_audio_in_window_g3

0x0003,

0xf472,	// (0x0005e44d) popup_call2_audio_in_window_g_ParamLimits

0xf472,	// (0x0005e44d) popup_call2_audio_in_window_g

0x103a,	// (0x00050015) popup_call2_audio_in_window_t1_ParamLimits

0x103a,	// (0x00050015) popup_call2_audio_in_window_t1

0x10ba,	// (0x00050095) popup_call2_audio_in_window_t2_ParamLimits

0x10ba,	// (0x00050095) popup_call2_audio_in_window_t2

0x113a,	// (0x00050115) popup_call2_audio_in_window_t3_ParamLimits

0x113a,	// (0x00050115) popup_call2_audio_in_window_t3

0x1154,	// (0x0005012f) popup_call2_audio_in_window_t4_ParamLimits

0x1154,	// (0x0005012f) popup_call2_audio_in_window_t4

0x1166,	// (0x00050141) popup_call2_audio_in_window_t5_ParamLimits

0x1166,	// (0x00050141) popup_call2_audio_in_window_t5

0x117b,	// (0x00050156) popup_call2_audio_in_window_t6_ParamLimits

0x117b,	// (0x00050156) popup_call2_audio_in_window_t6

0x0005,

0xf47b,	// (0x0005e456) popup_call2_audio_in_window_t_ParamLimits

0xf47b,	// (0x0005e456) popup_call2_audio_in_window_t

0xe2ce,	// (0x0005d2a9) bg_popup_call2_in_pane_g1

0x1252,	// (0x0005022d) popup_cale_lunar_info_window_t4

0x0003,

0xf4d0,	// (0x0005e4ab) popup_cale_lunar_info_window_t

0xe2d6,	// (0x0005d2b1) bg_popup_call2_rect_pane_ParamLimits

0xe2d6,	// (0x0005d2b1) bg_popup_call2_rect_pane

0xe07b,	// (0x0005d056) call2_cli_visual_graphic_pane

0xe07b,	// (0x0005d056) call2_cli_visual_text_pane

0x763f,	// (0x0005661a) smil_status_volume_pane_g3

0x0002,

0xe2ee,	// (0x0005d2c9) call2_cli_visual_graphic_pane_g1

0xe2ee,	// (0x0005d2c9) call2_cli_visual_graphic_pane_g2

0xe2ee,	// (0x0005d2c9) call2_cli_visual_graphic_pane_g3

0x0002,

0xf488,	// (0x0005e463) call2_cli_visual_graphic_pane_g

0xe515,	// (0x0005d4f0) bg_popup_call2_rect_pane_g1

0xe4e6,	// (0x0005d4c1) bg_popup_call2_rect_pane_g2

0xe4de,	// (0x0005d4b9) bg_popup_call2_rect_pane_g3

0xe525,	// (0x0005d500) bg_popup_call2_rect_pane_g4

0xe51d,	// (0x0005d4f8) bg_popup_call2_rect_pane_g5

0xe52d,	// (0x0005d508) bg_popup_call2_rect_pane_g6

0xe535,	// (0x0005d510) bg_popup_call2_rect_pane_g7

0xe545,	// (0x0005d520) bg_popup_call2_rect_pane_g8

0xe53d,	// (0x0005d518) bg_popup_call2_rect_pane_g9

0x0008,

0xf218,	// (0x0005e1f3) bg_popup_call2_rect_pane_g

0x1190,	// (0x0005016b) bg_popup_call2_bubble_pane_g1

0x1198,	// (0x00050173) bg_popup_call2_bubble_pane_g2

0x11a0,	// (0x0005017b) bg_popup_call2_bubble_pane_g3

0x11a8,	// (0x00050183) bg_popup_call2_bubble_pane_g4

0x11b0,	// (0x0005018b) bg_popup_call2_bubble_pane_g5

0x11b8,	// (0x00050193) bg_popup_call2_bubble_pane_g6

0x11c0,	// (0x0005019b) bg_popup_call2_bubble_pane_g7

0x11c8,	// (0x000501a3) bg_popup_call2_bubble_pane_g8

0x11d0,	// (0x000501ab) bg_popup_call2_bubble_pane_g9

0x0008,

0xf48f,	// (0x0005e46a) bg_popup_call2_bubble_pane_g

0x4df4,	// (0x00053dcf) aid_cale_week_size_cell_pane

0xe2d6,	// (0x0005d2b1) aid_cams_cif_uncrop_pane_ParamLimits

0xe2d6,	// (0x0005d2b1) aid_cams_cif_uncrop_pane

0xe343,	// (0x0005d31e) aid_cams_size_cell_ParamLimits

0xe343,	// (0x0005d31e) aid_cams_size_cell

0xe343,	// (0x0005d31e) grid_cams_pane_ParamLimits

0xe343,	// (0x0005d31e) linegrid_cams_pane_ParamLimits

0x54b3,	// (0x0005448e) call_video_pane_t1

0x54d4,	// (0x000544af) call_video_pane_t2

0x0001,

0xf1ba,	// (0x0005e195) call_video_pane_t

0x5a1b,	// (0x000549f6) aid_cale_month_size_cell_pane_ParamLimits

0x5a1b,	// (0x000549f6) aid_cale_month_size_cell_pane

0xf514,	// (0x0005e4ef) smil_status_volume_pane_g

0x764c,	// (0x00056627) volume_smil_pane_ParamLimits

0x482c,	// (0x00053807) aid_popup2_width_pane

0x4d21,	// (0x00053cfc) cell_qdial_pane_g4_ParamLimits

0x4d21,	// (0x00053cfc) cell_qdial_pane_g4

0x68cb,	// (0x000558a6) aid_blid_cardinal_pane_ParamLimits

0x68db,	// (0x000558b6) aid_blid_destination_pane_ParamLimits

0x68db,	// (0x000558b6) aid_blid_destination_pane

0xe2d6,	// (0x0005d2b1) bg_popup_call_poc_act_pane_ParamLimits

0xe2d6,	// (0x0005d2b1) bg_popup_call_poc_act_pane

0xe2d6,	// (0x0005d2b1) bg_popup_call_poc_inact_pane_ParamLimits

0xe2d6,	// (0x0005d2b1) bg_popup_call_poc_inact_pane

0x11d8,	// (0x000501b3) bg_popup_call_poc_act_pane_g1

0x11e0,	// (0x000501bb) bg_popup_call_poc_act_pane_g2

0x11e8,	// (0x000501c3) bg_popup_call_poc_act_pane_g3

0x11a8,	// (0x00050183) bg_popup_call_poc_act_pane_g4

0x11b0,	// (0x0005018b) bg_popup_call_poc_act_pane_g5

0x11f0,	// (0x000501cb) bg_popup_call_poc_act_pane_g6

0x11c0,	// (0x0005019b) bg_popup_call_poc_act_pane_g7

0x11f8,	// (0x000501d3) bg_popup_call_poc_act_pane_g8

0xe07b,	// (0x0005d056) main_usb_pane

0x74a5,	// (0x00056480) popup_cale_lunar_info_window

0x57fd,	// (0x000547d8) im_reading_pane_t1_ParamLimits

0xe6cf,	// (0x0005d6aa) list_im_pane_ParamLimits

0xe6e0,	// (0x0005d6bb) scroll_pane_cp07_ParamLimits

0xe07b,	// (0x0005d056) grid_highlight_pane_cp012

0xe2d6,	// (0x0005d2b1) mup_scale_pane_ParamLimits

0xe35f,	// (0x0005d33a) main_usb_pane_g1_ParamLimits

0xe35f,	// (0x0005d33a) main_usb_pane_g1

0xe35f,	// (0x0005d33a) main_usb_pane_g2_ParamLimits

0xe35f,	// (0x0005d33a) main_usb_pane_g2

0x0001,

0xf4b9,	// (0x0005e494) main_usb_pane_g_ParamLimits

0xf4b9,	// (0x0005e494) main_usb_pane_g

0xe3ad,	// (0x0005d388) main_usb_pane_t1_ParamLimits

0xe3ad,	// (0x0005d388) main_usb_pane_t1

0xe3ad,	// (0x0005d388) main_usb_pane_t2_ParamLimits

0xe3ad,	// (0x0005d388) main_usb_pane_t2

0xe3ad,	// (0x0005d388) main_usb_pane_t3_ParamLimits

0xe3ad,	// (0x0005d388) main_usb_pane_t3

0xe3ad,	// (0x0005d388) main_usb_pane_t4_ParamLimits

0xe3ad,	// (0x0005d388) main_usb_pane_t4

0xe3ad,	// (0x0005d388) main_usb_pane_t5_ParamLimits

0xe3ad,	// (0x0005d388) main_usb_pane_t5

0xe3ad,	// (0x0005d388) main_usb_pane_t6_ParamLimits

0xe3ad,	// (0x0005d388) main_usb_pane_t6

0x0005,

0xf4be,	// (0x0005e499) main_usb_pane_t_ParamLimits

0x6871,	// (0x0005584c) aid_text_placing

0x687d,	// (0x00055858) main_location2_pane_t1_ParamLimits

0x6891,	// (0x0005586c) main_location2_pane_t2_ParamLimits

0x68a5,	// (0x00055880) main_location2_pane_t3_ParamLimits

0x68b9,	// (0x00055894) main_location2_pane_t4_ParamLimits

0x68b9,	// (0x00055894) main_location2_pane_t4

0xf2fb,	// (0x0005e2d6) main_location2_pane_t_ParamLimits

0xe304,	// (0x0005d2df) find_pinb_pane_g2_ParamLimits

0xe304,	// (0x0005d2df) find_pinb_pane_g2

0x0001,

0xf072,	// (0x0005e04d) find_pinb_pane_g_ParamLimits

0xf072,	// (0x0005e04d) find_pinb_pane_g

0xe310,	// (0x0005d2eb) find_pinb_pane_t1_ParamLimits

0xe322,	// (0x0005d2fd) find_pinb_pane_t2_ParamLimits

0xf077,	// (0x0005e052) find_pinb_pane_t_ParamLimits

0xe07b,	// (0x0005d056) main_call3_pane

0x5fbe,	// (0x00054f99) cale_month_day_heading_pane_t1_ParamLimits

0x6044,	// (0x0005501f) cale_month_day_heading_pane_t2_ParamLimits

0x60bd,	// (0x00055098) cale_month_day_heading_pane_t3_ParamLimits

0x6136,	// (0x00055111) cale_month_day_heading_pane_t4_ParamLimits

0x61af,	// (0x0005518a) cale_month_day_heading_pane_t5_ParamLimits

0x6228,	// (0x00055203) cale_month_day_heading_pane_t6_ParamLimits

0x62a1,	// (0x0005527c) cale_month_day_heading_pane_t7_ParamLimits

0xf1f2,	// (0x0005e1cd) cale_month_day_heading_pane_t_ParamLimits

0xe92a,	// (0x0005d905) smil_status_volume_pane

0x6e2f,	// (0x00055e0a) postcard_address_pane_ParamLimits

0x6e2f,	// (0x00055e0a) postcard_address_pane

0x6e3b,	// (0x00055e16) postcard_message_pane_ParamLimits

0x6e3b,	// (0x00055e16) postcard_message_pane

0x726a,	// (0x00056245) call2_cli_visual_pane_t1_ParamLimits

0x726a,	// (0x00056245) call2_cli_visual_pane_t1

0x1c74,	// (0x00050c4f) postcard_message_pane_t1_ParamLimits

0x1c74,	// (0x00050c4f) postcard_message_pane_t1

0x1c5c,	// (0x00050c37) postcard_address_pane_t1_ParamLimits

0x1c5c,	// (0x00050c37) postcard_address_pane_t1

0x777d,	// (0x00056758) popup_call3_audio_in_window_ParamLimits

0x777d,	// (0x00056758) popup_call3_audio_in_window

0x7661,	// (0x0005663c) bg_popup_call3_in_pane_ParamLimits

0x7661,	// (0x0005663c) bg_popup_call3_in_pane

0x76c3,	// (0x0005669e) popup_call3_audio_in_window_g1_ParamLimits

0x76c3,	// (0x0005669e) popup_call3_audio_in_window_g1

0x76db,	// (0x000566b6) popup_call3_audio_in_window_g2_ParamLimits

0x76db,	// (0x000566b6) popup_call3_audio_in_window_g2

0x76f3,	// (0x000566ce) popup_call3_audio_in_window_g3_ParamLimits

0x76f3,	// (0x000566ce) popup_call3_audio_in_window_g3

0x0003,

0xf51b,	// (0x0005e4f6) popup_call3_audio_in_window_g_ParamLimits

0xf51b,	// (0x0005e4f6) popup_call3_audio_in_window_g

0x771b,	// (0x000566f6) popup_call3_audio_in_window_t1_ParamLimits

0x771b,	// (0x000566f6) popup_call3_audio_in_window_t1

0x7743,	// (0x0005671e) popup_call3_audio_in_window_t2_ParamLimits

0x7743,	// (0x0005671e) popup_call3_audio_in_window_t2

0x776b,	// (0x00056746) popup_call3_audio_in_window_t3_ParamLimits

0x776b,	// (0x00056746) popup_call3_audio_in_window_t3

0x0002,

0xf524,	// (0x0005e4ff) popup_call3_audio_in_window_t_ParamLimits

0xf524,	// (0x0005e4ff) popup_call3_audio_in_window_t

0xe60e,	// (0x0005d5e9) bg_popup_call3_rect_pane

0xe515,	// (0x0005d4f0) bg_popup_call3_rect_pane_g1

0xe4e6,	// (0x0005d4c1) bg_popup_call3_rect_pane_g2

0xe4de,	// (0x0005d4b9) bg_popup_call3_rect_pane_g3

0xe525,	// (0x0005d500) bg_popup_call3_rect_pane_g4

0xe51d,	// (0x0005d4f8) bg_popup_call3_rect_pane_g5

0xe52d,	// (0x0005d508) bg_popup_call3_rect_pane_g6

0xe535,	// (0x0005d510) bg_popup_call3_rect_pane_g7

0xdb99,	// (0x0005cb74) mup_visualizer_osc_pane

0xdb99,	// (0x0005cb74) mup_visualizer_spec_pane

0x7681,	// (0x0005665c) call3_video_qcif_pane_ParamLimits

0x7681,	// (0x0005665c) call3_video_qcif_pane

0x7693,	// (0x0005666e) call3_video_qcif_uncrop_pane_ParamLimits

0x7693,	// (0x0005666e) call3_video_qcif_uncrop_pane

0x76a1,	// (0x0005667c) call3_video_subqcif_pane_ParamLimits

0x76a1,	// (0x0005667c) call3_video_subqcif_pane

0x76b3,	// (0x0005668e) call3_video_subqcif_uncrop_pane_ParamLimits

0x76b3,	// (0x0005668e) call3_video_subqcif_uncrop_pane

0x770b,	// (0x000566e6) popup_call3_audio_in_window_g4_ParamLimits

0x770b,	// (0x000566e6) popup_call3_audio_in_window_g4

0xdb99,	// (0x0005cb74) mup_spec_half_pane

0xdb99,	// (0x0005cb74) mup_spec_half_pane_cp

0xdb99,	// (0x0005cb74) mup_osc_middle_pane

0xe38f,	// (0x0005d36a) mup_visualizer_osc_pane_g1

0x1356,	// (0x00050331) mup_spec_bar_pane_ParamLimits

0x1356,	// (0x00050331) mup_spec_bar_pane

0xe38f,	// (0x0005d36a) mup_spec_bar_pane_g1

0xe38f,	// (0x0005d36a) mup_spec_bar_pane_g2

0x0001,

0xf08c,	// (0x0005e067) mup_spec_bar_pane_g

0x4df4,	// (0x00053dcf) aid_cale_week_size_cell_pane_ParamLimits

0x4e09,	// (0x00053de4) bg_cale_heading_pane_ParamLimits

0xe567,	// (0x0005d542) bg_cale_pane_cp01_ParamLimits

0x4e29,	// (0x00053e04) cale_week_corner_pane_ParamLimits

0x4e43,	// (0x00053e1e) cale_week_day_heading_pane_ParamLimits

0x4e63,	// (0x00053e3e) cale_week_scroll_pane_g1_ParamLimits

0x4e7e,	// (0x00053e59) cale_week_scroll_pane_g2_ParamLimits

0x4e91,	// (0x00053e6c) cale_week_scroll_pane_g3_ParamLimits

0x4ea4,	// (0x00053e7f) cale_week_scroll_pane_g4_ParamLimits

0x4eb7,	// (0x00053e92) cale_week_scroll_pane_g5_ParamLimits

0x4eca,	// (0x00053ea5) cale_week_scroll_pane_g6_ParamLimits

0x4edd,	// (0x00053eb8) cale_week_scroll_pane_g7_ParamLimits

0x4ef2,	// (0x00053ecd) cale_week_scroll_pane_g8_ParamLimits

0x4f07,	// (0x00053ee2) cale_week_scroll_pane_g9_ParamLimits

0x4f1a,	// (0x00053ef5) cale_week_scroll_pane_g10_ParamLimits

0x4f2d,	// (0x00053f08) cale_week_scroll_pane_g11_ParamLimits

0x4f40,	// (0x00053f1b) cale_week_scroll_pane_g12_ParamLimits

0x4f57,	// (0x00053f32) cale_week_scroll_pane_g13_ParamLimits

0x4f72,	// (0x00053f4d) cale_week_scroll_pane_g14_ParamLimits

0x4f8d,	// (0x00053f68) cale_week_scroll_pane_g15_ParamLimits

0xf103,	// (0x0005e0de) cale_week_scroll_pane_g_ParamLimits

0x4fbd,	// (0x00053f98) cale_week_time_pane_ParamLimits

0x4fd2,	// (0x00053fad) grid_cale_week_pane_ParamLimits

0xe584,	// (0x0005d55f) listscroll_cale_week_pane_t1

0xe596,	// (0x0005d571) scroll_pane_cp08_ParamLimits

0x5a8f,	// (0x00054a6a) cale_month_corner_pane_ParamLimits

0xe900,	// (0x0005d8db) cale_month_pane_t1

0x5f41,	// (0x00054f1c) cale_month_week_pane_ParamLimits

0x09e5,	// (0x0004f9c0) popup_call_status_window_g1_ParamLimits

0x66c8,	// (0x000556a3) popup_call_status_window_g2_ParamLimits

0x66d4,	// (0x000556af) popup_call_status_window_g3_ParamLimits

0xf282,	// (0x0005e25d) popup_call_status_window_g_ParamLimits

0xec82,	// (0x0005dc5d) aid_call2_pane

0x6c72,	// (0x00055c4d) msg_header_pane_g1

0x6e2f,	// (0x00055e0a) postcard_address2_pane_ParamLimits

0x6e2f,	// (0x00055e0a) postcard_address2_pane

0x6e3b,	// (0x00055e16) postcard_message2_pane_ParamLimits

0x6e3b,	// (0x00055e16) postcard_message2_pane

0x7611,	// (0x000565ec) message2_row_pane_ParamLimits

0x7611,	// (0x000565ec) message2_row_pane

0x762c,	// (0x00056607) address2_row_pane_ParamLimits

0x762c,	// (0x00056607) address2_row_pane

0x1323,	// (0x000502fe) postcard_message2_row_pane_g1

0x132b,	// (0x00050306) postcard_message2_row_pane_t1

0x1323,	// (0x000502fe) address2_row_pane_g1

0x132b,	// (0x00050306) address2_row_pane_t1

0x5258,	// (0x00054233) aid_size_cell_vorec

0xe07b,	// (0x0005d056) main_rss_pane

0x1339,	// (0x00050314) rss_list_single_pane_ParamLimits

0x1339,	// (0x00050314) rss_list_single_pane

0x1347,	// (0x00050322) rss_list_single_pane_t1

0x1347,	// (0x00050322) rss_list_single_pane_t2

0x0001,

0xf50f,	// (0x0005e4ea) rss_list_single_pane_t

0xe07b,	// (0x0005d056) main_camera2_pane

0xe07b,	// (0x0005d056) main_video2_pane

0x4a37,	// (0x00053a12) cams_zoom_pane_cp2_ParamLimits

0x4a37,	// (0x00053a12) cams_zoom_pane_cp2

0x4a37,	// (0x00053a12) image2_vga_pane_ParamLimits

0x4a37,	// (0x00053a12) image2_vga_pane

0xecb5,	// (0x0005dc90) main_camera2_pane_g1_ParamLimits

0xecb5,	// (0x0005dc90) main_camera2_pane_g1

0xecb5,	// (0x0005dc90) main_camera2_pane_g2_ParamLimits

0xecb5,	// (0x0005dc90) main_camera2_pane_g2

0xecb5,	// (0x0005dc90) main_camera2_pane_g3_ParamLimits

0xecb5,	// (0x0005dc90) main_camera2_pane_g3

0xecb5,	// (0x0005dc90) main_camera2_pane_g4_ParamLimits

0xecb5,	// (0x0005dc90) main_camera2_pane_g4

0xecb5,	// (0x0005dc90) main_camera2_pane_g5_ParamLimits

0xecb5,	// (0x0005dc90) main_camera2_pane_g5

0xecb5,	// (0x0005dc90) main_camera2_pane_g6_ParamLimits

0xecb5,	// (0x0005dc90) main_camera2_pane_g6

0xecb5,	// (0x0005dc90) main_camera2_pane_g7_ParamLimits

0xecb5,	// (0x0005dc90) main_camera2_pane_g7

0xecb5,	// (0x0005dc90) main_camera2_pane_g8_ParamLimits

0xecb5,	// (0x0005dc90) main_camera2_pane_g8

0x0008,

0xf52b,	// (0x0005e506) main_camera2_pane_g_ParamLimits

0xf52b,	// (0x0005e506) main_camera2_pane_g

0x779a,	// (0x00056775) main_camera2_pane_t1_ParamLimits

0x779a,	// (0x00056775) main_camera2_pane_t1

0x779a,	// (0x00056775) main_camera2_pane_t2_ParamLimits

0x779a,	// (0x00056775) main_camera2_pane_t2

0x779a,	// (0x00056775) main_camera2_pane_t3_ParamLimits

0x779a,	// (0x00056775) main_camera2_pane_t3

0x779a,	// (0x00056775) main_camera2_pane_t4_ParamLimits

0x779a,	// (0x00056775) main_camera2_pane_t4

0x0006,

0xf53e,	// (0x0005e519) main_camera2_pane_t_ParamLimits

0xf53e,	// (0x0005e519) main_camera2_pane_t

0x77c2,	// (0x0005679d) cams_zoom_pane_cp4_ParamLimits

0x77c2,	// (0x0005679d) cams_zoom_pane_cp4

0x7450,	// (0x0005642b) image2_cif_pane_ParamLimits

0x7450,	// (0x0005642b) image2_cif_pane

0x4a37,	// (0x00053a12) image2_subqcif_pane_ParamLimits

0x4a37,	// (0x00053a12) image2_subqcif_pane

0x77d0,	// (0x000567ab) main_video2_pane_g1_ParamLimits

0x77d0,	// (0x000567ab) main_video2_pane_g1

0x77d0,	// (0x000567ab) main_video2_pane_g2_ParamLimits

0x77d0,	// (0x000567ab) main_video2_pane_g2

0x77d0,	// (0x000567ab) main_video2_pane_g3_ParamLimits

0x77d0,	// (0x000567ab) main_video2_pane_g3

0x77d0,	// (0x000567ab) main_video2_pane_g4_ParamLimits

0x77d0,	// (0x000567ab) main_video2_pane_g4

0x77d0,	// (0x000567ab) main_video2_pane_g5_ParamLimits

0x77d0,	// (0x000567ab) main_video2_pane_g5

0x77d0,	// (0x000567ab) main_video2_pane_g6_ParamLimits

0x77d0,	// (0x000567ab) main_video2_pane_g6

0x0005,

0xf54d,	// (0x0005e528) main_video2_pane_g_ParamLimits

0xf54d,	// (0x0005e528) main_video2_pane_g

0x77de,	// (0x000567b9) main_video2_pane_t1_ParamLimits

0x77de,	// (0x000567b9) main_video2_pane_t1

0x77de,	// (0x000567b9) main_video2_pane_t2_ParamLimits

0x77de,	// (0x000567b9) main_video2_pane_t2

0x77de,	// (0x000567b9) main_video2_pane_t3_ParamLimits

0x77de,	// (0x000567b9) main_video2_pane_t3

0x0002,

0xf55a,	// (0x0005e535) main_video2_pane_t_ParamLimits

0xf55a,	// (0x0005e535) main_video2_pane_t

0x7323,	// (0x000562fe) call_muted_g2

0x0001,

0xf501,	// (0x0005e4dc) call_muted_g

0xe07b,	// (0x0005d056) main_mup2_pane

0xe36d,	// (0x0005d348) main_mup2_pane_g1_ParamLimits

0xe36d,	// (0x0005d348) main_mup2_pane_g1

0xe36d,	// (0x0005d348) main_mup2_pane_g2_ParamLimits

0xe36d,	// (0x0005d348) main_mup2_pane_g2

0x2f8d,	// (0x00051f68) main_mup_pane_g13_cp1

0x4a51,	// (0x00053a2c) mup_volume_pane_cp1

0xe36d,	// (0x0005d348) main_mup2_pane_g4_ParamLimits

0xe36d,	// (0x0005d348) main_mup2_pane_g4

0xe36d,	// (0x0005d348) main_mup2_pane_g5_ParamLimits

0xe36d,	// (0x0005d348) main_mup2_pane_g5

0xe36d,	// (0x0005d348) main_mup2_pane_g6_ParamLimits

0xe36d,	// (0x0005d348) main_mup2_pane_g6

0xe36d,	// (0x0005d348) main_mup2_pane_g7_ParamLimits

0xe36d,	// (0x0005d348) main_mup2_pane_g7

0x0006,

0xf561,	// (0x0005e53c) main_mup2_pane_g_ParamLimits

0xf561,	// (0x0005e53c) main_mup2_pane_g

0xe37b,	// (0x0005d356) main_mup2_pane_t1_ParamLimits

0xe37b,	// (0x0005d356) main_mup2_pane_t1

0xe37b,	// (0x0005d356) main_mup2_pane_t2_ParamLimits

0xe37b,	// (0x0005d356) main_mup2_pane_t2

0xe37b,	// (0x0005d356) main_mup2_pane_t3_ParamLimits

0xe37b,	// (0x0005d356) main_mup2_pane_t3

0xe37b,	// (0x0005d356) main_mup2_pane_t4_ParamLimits

0xe37b,	// (0x0005d356) main_mup2_pane_t4

0xe37b,	// (0x0005d356) main_mup2_pane_t5_ParamLimits

0xe37b,	// (0x0005d356) main_mup2_pane_t5

0xe37b,	// (0x0005d356) main_mup2_pane_t6_ParamLimits

0xe37b,	// (0x0005d356) main_mup2_pane_t6

0x0005,

0xf570,	// (0x0005e54b) main_mup2_pane_t_ParamLimits

0xf570,	// (0x0005e54b) main_mup2_pane_t

0x1ca4,	// (0x00050c7f) mup2_visualizer_pane_ParamLimits

0x1ca4,	// (0x00050c7f) mup2_visualizer_pane

0x1ca4,	// (0x00050c7f) mup_progress_pane_cp_ParamLimits

0x1ca4,	// (0x00050c7f) mup_progress_pane_cp

0x78a5,	// (0x00056880) mup_volume_pane_cp_ParamLimits

0x78a5,	// (0x00056880) mup_volume_pane_cp

0xe351,	// (0x0005d32c) mup2_visualizer_pane_g1_ParamLimits

0xe351,	// (0x0005d32c) mup2_visualizer_pane_g1

0xe35f,	// (0x0005d33a) mup2_visualizer_pane_g2_ParamLimits

0xe35f,	// (0x0005d33a) mup2_visualizer_pane_g2

0xe35f,	// (0x0005d33a) mup2_visualizer_pane_g3_ParamLimits

0xe35f,	// (0x0005d33a) mup2_visualizer_pane_g3

0x0002,

0xf07c,	// (0x0005e057) mup2_visualizer_pane_g_ParamLimits

0xf07c,	// (0x0005e057) mup2_visualizer_pane_g

0xdb99,	// (0x0005cb74) aid_size_cell_fmradio

0x7439,	// (0x00056414) aid_height_parent_landcape

0xe75e,	// (0x0005d739) wml_content_pane_cp

0xe766,	// (0x0005d741) wml_tabs_pane

0xe76f,	// (0x0005d74a) popup_wml_miniature_window

0xe777,	// (0x0005d752) scroll_pane_cp021

0xe78b,	// (0x0005d766) wml_content_pane_comp8

0xe07b,	// (0x0005d056) bg_popup_sub_pane_cp05

0x1cc8,	// (0x00050ca3) popup_wml_miniature_window_g1

0x1cd0,	// (0x00050cab) wml_miniature_view_pane

0x77f2,	// (0x000567cd) aid_size_wml_view

0x77fa,	// (0x000567d5) wml_miniature_view_pane_g1

0x7803,	// (0x000567de) wml_miniature_view_pane_g2

0x780c,	// (0x000567e7) wml_miniature_view_pane_g3

0x7814,	// (0x000567ef) wml_miniature_view_pane_g4

0x781c,	// (0x000567f7) wml_miniature_view_pane_g5

0x7824,	// (0x000567ff) wml_miniature_view_pane_g6

0x782c,	// (0x00056807) wml_miniature_view_pane_g7

0x7834,	// (0x0005680f) wml_miniature_view_pane_g8

0x0007,

0xf57d,	// (0x0005e558) wml_miniature_view_pane_g

0x1cd8,	// (0x00050cb3) background_graphic_ParamLimits

0x1cd8,	// (0x00050cb3) background_graphic

0x1ce4,	// (0x00050cbf) wml_tabs_2_pane

0x1ced,	// (0x00050cc8) wml_tabs_3_pane_ParamLimits

0x1ced,	// (0x00050cc8) wml_tabs_3_pane

0x1cff,	// (0x00050cda) wml_tabs_4_pane_ParamLimits

0x1cff,	// (0x00050cda) wml_tabs_4_pane

0x1d15,	// (0x00050cf0) wml_tabs_5_pane_ParamLimits

0x1d15,	// (0x00050cf0) wml_tabs_5_pane

0x1d2f,	// (0x00050d0a) wml_tabs_pane_g2_ParamLimits

0x1d2f,	// (0x00050d0a) wml_tabs_pane_g2

0x1d44,	// (0x00050d1f) wml_tabs_pane_g3_ParamLimits

0x1d44,	// (0x00050d1f) wml_tabs_pane_g3

0x1d59,	// (0x00050d34) wml_tabs_2_active_pane_ParamLimits

0x1d59,	// (0x00050d34) wml_tabs_2_active_pane

0x1d59,	// (0x00050d34) wml_tabs_2_passive_pane_ParamLimits

0x1d59,	// (0x00050d34) wml_tabs_2_passive_pane

0x783c,	// (0x00056817) wml_tabs_3_active_pane_cp_ParamLimits

0x783c,	// (0x00056817) wml_tabs_3_active_pane_cp

0x784d,	// (0x00056828) wml_tabs_3_passive_pane_ParamLimits

0x784d,	// (0x00056828) wml_tabs_3_passive_pane

0x785e,	// (0x00056839) wml_tabs_3_passive_pane_cp_ParamLimits

0x785e,	// (0x00056839) wml_tabs_3_passive_pane_cp

0x786f,	// (0x0005684a) tabs_4_active_pane

0x7877,	// (0x00056852) tabs_4_passive_pane

0x787f,	// (0x0005685a) tabs_4_passive_pane_cp

0x7887,	// (0x00056862) tabs_4_passive_pane_cp2

0x7297,	// (0x00056272) aid_height_text

0x1ca4,	// (0x00050c7f) mup_volume_cont_pane_ParamLimits

0x1ca4,	// (0x00050c7f) mup_volume_cont_pane

0xdb99,	// (0x0005cb74) aid_size_cell_pinb

0xdb99,	// (0x0005cb74) aid_size_list_pinb

0x1ca4,	// (0x00050c7f) mup2_volume_cont_pane_ParamLimits

0x1ca4,	// (0x00050c7f) mup2_volume_cont_pane

0x788f,	// (0x0005686a) mup2_volume_cont_pane_g1_ParamLimits

0x788f,	// (0x0005686a) mup2_volume_cont_pane_g1

0x4838,	// (0x00053813) aid_size_cell_touch_ParamLimits

0x4838,	// (0x00053813) aid_size_cell_touch

0x4a5b,	// (0x00053a36) touch_pane_ParamLimits

0x4a5b,	// (0x00053a36) touch_pane

0x4a51,	// (0x00053a2c) main_rss2_pane

0x1d70,	// (0x00050d4b) listscroll_rss2_pane

0x1d79,	// (0x00050d54) rss2_navigation_pane

0x1d81,	// (0x00050d5c) list_rss2_pane

0xedb8,	// (0x0005dd93) scroll_pane_cp22

0x1d89,	// (0x00050d64) rss2_navigation_pane_g1

0x1d92,	// (0x00050d6d) rss2_navigation_pane_g2

0x1d9a,	// (0x00050d75) rss2_navigation_pane_g3

0x0002,

0xf58e,	// (0x0005e569) rss2_navigation_pane_g

0x1da2,	// (0x00050d7d) rss2_navigation_pane_t1

0x78bb,	// (0x00056896) rss2_list_single_pane_ParamLimits

0x78bb,	// (0x00056896) rss2_list_single_pane

0x1db0,	// (0x00050d8b) rss2_list_single_pane_t2

0x1dbe,	// (0x00050d99) rss2_list_single_pane_t3_ParamLimits

0x1dbe,	// (0x00050d99) rss2_list_single_pane_t3

0x1ddb,	// (0x00050db6) rss2_list_single_pane_t4

0x653d,	// (0x00055518) smil_status_pane_g1

0x7450,	// (0x0005642b) main_image2_pane_ParamLimits

0x7450,	// (0x0005642b) main_image2_pane

0xecb5,	// (0x0005dc90) main_camera2_pane_g9_ParamLimits

0xecb5,	// (0x0005dc90) main_camera2_pane_g9

0x779a,	// (0x00056775) main_camera2_pane_t5_ParamLimits

0x779a,	// (0x00056775) main_camera2_pane_t5

0x77ae,	// (0x00056789) main_camera2_pane_t6_ParamLimits

0x77ae,	// (0x00056789) main_camera2_pane_t6

0x78ec,	// (0x000568c7) main_image2_pane_g1_ParamLimits

0x78ec,	// (0x000568c7) main_image2_pane_g1

0x6fcf,	// (0x00055faa) smil2_video_pane_ParamLimits

0x6fcf,	// (0x00055faa) smil2_video_pane

0x4768,	// (0x00053743) aid_zoom_text_primary_cp

0x49ec,	// (0x000539c7) popup_preview_fixed_window

0xe6c7,	// (0x0005d6a2) im_reading_pane_g1

0x778c,	// (0x00056767) cams2_bc_adjust_pane_cp_ParamLimits

0x778c,	// (0x00056767) cams2_bc_adjust_pane_cp

0x4a37,	// (0x00053a12) cams2_bc_adjust_pane_ParamLimits

0x4a37,	// (0x00053a12) cams2_bc_adjust_pane

0x2f8d,	// (0x00051f68) cams2_bc_adjust_pane_g1

0x4a51,	// (0x00053a2c) cams2_slider_pane

0x2f8d,	// (0x00051f68) cams2_slider_pane_g1

0x2f8d,	// (0x00051f68) cams2_slider_pane_g2

0x0006,

0xf595,	// (0x0005e570) cams2_slider_pane_g

0x4b29,	// (0x00053b04) calc_display_pane_ParamLimits

0x4b47,	// (0x00053b22) calc_paper_pane_ParamLimits

0x4b63,	// (0x00053b3e) grid_calc_pane_ParamLimits

0x6736,	// (0x00055711) popup_clock_digital_window_t1_ParamLimits

0x02cd,	// (0x0004f2a8) main_image_pane_t1

0x4b0f,	// (0x00053aea) aid_size_cell_calc_ParamLimits

0x4b0f,	// (0x00053aea) aid_size_cell_calc

0x7481,	// (0x0005645c) popup_blid_sat_info2_window_ParamLimits

0x7481,	// (0x0005645c) popup_blid_sat_info2_window

0x1de9,	// (0x00050dc4) aid_size_cell_blid

0x1ca4,	// (0x00050c7f) bg_popup_window_pane_cp07

0x1e06,	// (0x00050de1) grid_popup_blid_pane

0x1e10,	// (0x00050deb) heading_pane_cp05_ParamLimits

0x1e10,	// (0x00050deb) heading_pane_cp05

0x1eda,	// (0x00050eb5) cell_popup_blid_pane_ParamLimits

0x1eda,	// (0x00050eb5) cell_popup_blid_pane

0x1efe,	// (0x00050ed9) cell_popup_blid_pane_g1

0x1f06,	// (0x00050ee1) cell_popup_blid_pane_t1

0x1ca4,	// (0x00050c7f) mup2_indicator_pane_ParamLimits

0x1ca4,	// (0x00050c7f) mup2_indicator_pane

0xdb99,	// (0x0005cb74) mup2_visualizer_osc_pane

0x1cb2,	// (0x00050c8d) mup2_visualizer_spec_pane_ParamLimits

0x1cb2,	// (0x00050c8d) mup2_visualizer_spec_pane

0xdb99,	// (0x0005cb74) mup2_spec_half_pane

0xdb99,	// (0x0005cb74) mup2_spec_half_pane_cp

0x1f14,	// (0x00050eef) mup2_spec_bar_pane_ParamLimits

0x1f14,	// (0x00050eef) mup2_spec_bar_pane

0xe38f,	// (0x0005d36a) mup2_spec_bar_pane_g1

0x1f33,	// (0x00050f0e) mup2_spec_bar_pane_g2

0x0001,

0xf5bb,	// (0x0005e596) mup2_spec_bar_pane_g

0xdb99,	// (0x0005cb74) mup2_osc_middle_pane

0xe38f,	// (0x0005d36a) mup2_visualizer_osc_pane_g1

0xdbc3,	// (0x0005cb9e) popup_number_entry_window_t1_ParamLimits

0xdc9b,	// (0x0005cc76) popup_number_entry_window_t2_ParamLimits

0xdcad,	// (0x0005cc88) popup_number_entry_window_t3_ParamLimits

0x4ab2,	// (0x00053a8d) popup_number_entry_window_t5_ParamLimits

0x4ab2,	// (0x00053a8d) popup_number_entry_window_t5

0xf01d,	// (0x0005dff8) popup_number_entry_window_t_ParamLimits

0xdcbf,	// (0x0005cc9a) text_title_cp2_ParamLimits

0x6d03,	// (0x00055cde) aid_hotspot_pointer_text2_pane

0x6d91,	// (0x00055d6c) main_viewer_pane_g9_ParamLimits

0x6d91,	// (0x00055d6c) main_viewer_pane_g9

0xe900,	// (0x0005d8db) cale_month_pane_t1_ParamLimits

0xe93d,	// (0x0005d918) bg_cale_pane_ParamLimits

0xe955,	// (0x0005d930) list_cale_pane_ParamLimits

0xe966,	// (0x0005d941) listscroll_cale_day_pane_t1

0xe978,	// (0x0005d953) scroll_pane_cp09_ParamLimits

0x69b9,	// (0x00055994) main_mup_eq_pane_t1_ParamLimits

0x69b9,	// (0x00055994) main_mup_eq_pane_t1

0x69d3,	// (0x000559ae) main_mup_eq_pane_t2_ParamLimits

0x69d3,	// (0x000559ae) main_mup_eq_pane_t2

0x69ed,	// (0x000559c8) main_mup_eq_pane_t3_ParamLimits

0x69ed,	// (0x000559c8) main_mup_eq_pane_t3

0x6a05,	// (0x000559e0) main_mup_eq_pane_t4_ParamLimits

0x6a05,	// (0x000559e0) main_mup_eq_pane_t4

0x6a1d,	// (0x000559f8) main_mup_eq_pane_t5_ParamLimits

0x6a1d,	// (0x000559f8) main_mup_eq_pane_t5

0x6a35,	// (0x00055a10) main_mup_eq_pane_t6_ParamLimits

0x6a35,	// (0x00055a10) main_mup_eq_pane_t6

0x6a49,	// (0x00055a24) main_mup_eq_pane_t7_ParamLimits

0x6a49,	// (0x00055a24) main_mup_eq_pane_t7

0x6a5d,	// (0x00055a38) main_mup_eq_pane_t8_ParamLimits

0x6a5d,	// (0x00055a38) main_mup_eq_pane_t8

0x6a73,	// (0x00055a4e) main_mup_eq_pane_t9_ParamLimits

0x6a73,	// (0x00055a4e) main_mup_eq_pane_t9

0x6a8b,	// (0x00055a66) main_mup_eq_pane_t10_ParamLimits

0x6a8b,	// (0x00055a66) main_mup_eq_pane_t10

0x0009,

0xf37c,	// (0x0005e357) main_mup_eq_pane_t_ParamLimits

0xf37c,	// (0x0005e357) main_mup_eq_pane_t

0x6b48,	// (0x00055b23) mup_equalizer_pane_cp5_ParamLimits

0x6b5e,	// (0x00055b39) mup_equalizer_pane_cp6_ParamLimits

0x6b76,	// (0x00055b51) mup_equalizer_pane_cp7_ParamLimits

0x4a51,	// (0x00053a2c) main_gallery_pane

0x1375,	// (0x00050350) smil2_volume_pane

0x1390,	// (0x0005036b) smil_status_volume_pane_g1_ParamLimits

0x137d,	// (0x00050358) smil_status_volume_pane_g2_ParamLimits

0x763f,	// (0x0005661a) smil_status_volume_pane_g3_ParamLimits

0xf514,	// (0x0005e4ef) smil_status_volume_pane_g_ParamLimits

0x1ca4,	// (0x00050c7f) bg_popup_window_pane_cp07_ParamLimits

0x1df1,	// (0x00050dcc) blid_firmament_pane

0xe343,	// (0x0005d31e) aid_size_cell_gallery_ParamLimits

0xe343,	// (0x0005d31e) aid_size_cell_gallery

0xe343,	// (0x0005d31e) grid_gallery_pane_ParamLimits

0xe343,	// (0x0005d31e) grid_gallery_pane

0x00b9,	// (0x0004f094) cell_gallery_pane_ParamLimits

0x00b9,	// (0x0004f094) cell_gallery_pane

0xdbd6,	// (0x0005cbb1) bg_cell_gallery_focus_pane_ParamLimits

0xdbd6,	// (0x0005cbb1) bg_cell_gallery_focus_pane

0xe351,	// (0x0005d32c) cell_gallery_pane_g1_ParamLimits

0xe351,	// (0x0005d32c) cell_gallery_pane_g1

0xe351,	// (0x0005d32c) cell_gallery_pane_g2_ParamLimits

0xe351,	// (0x0005d32c) cell_gallery_pane_g2

0xe351,	// (0x0005d32c) cell_gallery_pane_g3_ParamLimits

0xe351,	// (0x0005d32c) cell_gallery_pane_g3

0xe35f,	// (0x0005d33a) cell_gallery_pane_g4_ParamLimits

0xe35f,	// (0x0005d33a) cell_gallery_pane_g4

0x0003,

0xf5c0,	// (0x0005e59b) cell_gallery_pane_g_ParamLimits

0xf5c0,	// (0x0005e59b) cell_gallery_pane_g

0x1f3d,	// (0x00050f18) bg_cell_gallery_focus_pane_g1

0x1f45,	// (0x00050f20) bg_cell_gallery_focus_pane_g2

0x1f4d,	// (0x00050f28) bg_cell_gallery_focus_pane_g3

0x1f55,	// (0x00050f30) bg_cell_gallery_focus_pane_g4

0x1f5d,	// (0x00050f38) bg_cell_gallery_focus_pane_g5

0x1f65,	// (0x00050f40) bg_cell_gallery_focus_pane_g6

0x1f6d,	// (0x00050f48) bg_cell_gallery_focus_pane_g7

0x1f75,	// (0x00050f50) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5c9,	// (0x0005e5a4) bg_cell_gallery_focus_pane_g

0x1f7d,	// (0x00050f58) aid_firma_cardinal

0x1f91,	// (0x00050f6c) blid_firmament_pane_t1

0x1fa8,	// (0x00050f83) blid_firmament_pane_t2

0x1fbf,	// (0x00050f9a) blid_firmament_pane_t3

0x1fd6,	// (0x00050fb1) blid_firmament_pane_t4

0x0003,

0xf5da,	// (0x0005e5b5) blid_firmament_pane_t

0x1fed,	// (0x00050fc8) blid_sat_info_pane

0xe38f,	// (0x0005d36a) blid_sat_info_pane_g1

0xe38f,	// (0x0005d36a) blid_sat_info_pane_g2

0x0001,

0xf08c,	// (0x0005e067) blid_sat_info_pane_g

0x1ffd,	// (0x00050fd8) blid_sat_info_pane_t1

0x200b,	// (0x00050fe6) smil2_volume_content_pane

0x2014,	// (0x00050fef) smil2_volume_pane_g1

0xe4ee,	// (0x0005d4c9) smil2_volume_content_pane_g1

0x201c,	// (0x00050ff7) smil2_volume_content_pane_g2

0x2025,	// (0x00051000) smil2_volume_content_pane_g3

0x202e,	// (0x00051009) smil2_volume_content_pane_g4

0x2037,	// (0x00051012) smil2_volume_content_pane_g5

0x2040,	// (0x0005101b) smil2_volume_content_pane_g6

0x2049,	// (0x00051024) smil2_volume_content_pane_g7

0x2052,	// (0x0005102d) smil2_volume_content_pane_g8

0x205b,	// (0x00051036) smil2_volume_content_pane_g9

0x2064,	// (0x0005103f) smil2_volume_content_pane_g10

0x0009,

0xf5e3,	// (0x0005e5be) smil2_volume_content_pane_g

0x5053,	// (0x0005402e) cale_week_day_heading_pane_t1_ParamLimits

0x506e,	// (0x00054049) cale_week_day_heading_pane_t2_ParamLimits

0x5089,	// (0x00054064) cale_week_day_heading_pane_t3_ParamLimits

0x50a4,	// (0x0005407f) cale_week_day_heading_pane_t4_ParamLimits

0x50bf,	// (0x0005409a) cale_week_day_heading_pane_t5_ParamLimits

0x50da,	// (0x000540b5) cale_week_day_heading_pane_t6_ParamLimits

0x50f5,	// (0x000540d0) cale_week_day_heading_pane_t7_ParamLimits

0xf124,	// (0x0005e0ff) cale_week_day_heading_pane_t_ParamLimits

0xe5b3,	// (0x0005d58e) bg_cale_side_pane_ParamLimits

0x5110,	// (0x000540eb) cale_week_time_pane_t1_ParamLimits

0x512a,	// (0x00054105) cale_week_time_pane_t2_ParamLimits

0x5144,	// (0x0005411f) cale_week_time_pane_t3_ParamLimits

0x515e,	// (0x00054139) cale_week_time_pane_t4_ParamLimits

0x5178,	// (0x00054153) cale_week_time_pane_t5_ParamLimits

0x5192,	// (0x0005416d) cale_week_time_pane_t6_ParamLimits

0x51b0,	// (0x0005418b) cale_week_time_pane_t7_ParamLimits

0x51d2,	// (0x000541ad) cale_week_time_pane_t8_ParamLimits

0xf133,	// (0x0005e10e) cale_week_time_pane_t_ParamLimits

0x51f6,	// (0x000541d1) cell_cale_week_pane_g2_ParamLimits

0xe5b3,	// (0x0005d58e) bg_cale_side_pane_cp01_ParamLimits

0x6332,	// (0x0005530d) cale_month_week_pane_t1_ParamLimits

0x634b,	// (0x00055326) cale_month_week_pane_t2_ParamLimits

0x6364,	// (0x0005533f) cale_month_week_pane_t3_ParamLimits

0x637d,	// (0x00055358) cale_month_week_pane_t4_ParamLimits

0x6396,	// (0x00055371) cale_month_week_pane_t5_ParamLimits

0x63b7,	// (0x00055392) cale_month_week_pane_t6_ParamLimits

0xf201,	// (0x0005e1dc) cale_month_week_pane_t_ParamLimits

0x64fa,	// (0x000554d5) cell_cale_month_pane_g1_ParamLimits

0x4a51,	// (0x00053a2c) main_cale_event_viewer_pane

0xdb99,	// (0x0005cb74) listscroll_cale_event_viewer_pane

0x206d,	// (0x00051048) list_cale_ev_pane

0x2075,	// (0x00051050) scroll_pane_cp023

0x2081,	// (0x0005105c) field_cale_ev_pane_ParamLimits

0x2081,	// (0x0005105c) field_cale_ev_pane

0x209f,	// (0x0005107a) field_cale_ev_content_pane_ParamLimits

0x209f,	// (0x0005107a) field_cale_ev_content_pane

0x20ab,	// (0x00051086) field_cale_ev_pane_g1_ParamLimits

0x20ab,	// (0x00051086) field_cale_ev_pane_g1

0x213d,	// (0x00051118) field_cale_ev_pane_g2_ParamLimits

0x213d,	// (0x00051118) field_cale_ev_pane_g2

0x2155,	// (0x00051130) field_cale_ev_pane_g3_ParamLimits

0x2155,	// (0x00051130) field_cale_ev_pane_g3

0x0002,

0xf5f8,	// (0x0005e5d3) field_cale_ev_pane_g_ParamLimits

0xf5f8,	// (0x0005e5d3) field_cale_ev_pane_g

0x216d,	// (0x00051148) field_cale_ev_pane_t1_ParamLimits

0x216d,	// (0x00051148) field_cale_ev_pane_t1

0xe4f7,	// (0x0005d4d2) field_cale_ev_content_pane_t1_ParamLimits

0xe4f7,	// (0x0005d4d2) field_cale_ev_content_pane_t1

0x015c,	// (0x0004f137) bg_button_pane_cp01

0x4ddb,	// (0x00053db6) listscroll_cale_week_pane_ParamLimits

0x4deb,	// (0x00053dc6) popup_toolbar_window_cp01

0xe584,	// (0x0005d55f) listscroll_cale_week_pane_t1_ParamLimits

0x4ddb,	// (0x00053db6) listscroll_cale_day_pane_ParamLimits

0xe5c9,	// (0x0005d5a4) popup_toolbar_window_cp02

0xe966,	// (0x0005d941) listscroll_cale_day_pane_t1_ParamLimits

0x4ddb,	// (0x00053db6) main_cale_month_pane_ParamLimits

0x7588,	// (0x00056563) popup_toolbar_window_cp03_ParamLimits

0x7588,	// (0x00056563) popup_toolbar_window_cp03

0x6ee5,	// (0x00055ec0) main_image_pane_g2_ParamLimits

0x6ee5,	// (0x00055ec0) main_image_pane_g2

0x6ef1,	// (0x00055ecc) main_image_pane_g3_ParamLimits

0x6ef1,	// (0x00055ecc) main_image_pane_g3

0x0002,

0xf40e,	// (0x0005e3e9) main_image_pane_g_ParamLimits

0xf40e,	// (0x0005e3e9) main_image_pane_g

0x02cd,	// (0x0004f2a8) main_image_pane_t1_ParamLimits

0x6efd,	// (0x00055ed8) main_image_pane_t2_ParamLimits

0x6efd,	// (0x00055ed8) main_image_pane_t2

0x6f0f,	// (0x00055eea) main_image_pane_t3_ParamLimits

0x6f0f,	// (0x00055eea) main_image_pane_t3

0x6f21,	// (0x00055efc) main_image_pane_t4_ParamLimits

0x6f21,	// (0x00055efc) main_image_pane_t4

0x0003,

0xf415,	// (0x0005e3f0) main_image_pane_t_ParamLimits

0xf415,	// (0x0005e3f0) main_image_pane_t

0x6f33,	// (0x00055f0e) popup_image_details_window_cp01

0x6f3d,	// (0x00055f18) popup_toobar_trans_pane_cp01_ParamLimits

0x6f3d,	// (0x00055f18) popup_toobar_trans_pane_cp01

0x74d8,	// (0x000564b3) popup_image_details_window_ParamLimits

0x74d8,	// (0x000564b3) popup_image_details_window

0x74e6,	// (0x000564c1) popup_image_focus_window

0x4a37,	// (0x00053a12) camera2_autofocus_pane_ParamLimits

0x4a37,	// (0x00053a12) camera2_autofocus_pane

0xdb99,	// (0x0005cb74) bg_popup_sub_pane_cp06

0x2184,	// (0x0005115f) popup_image_focus_window_g1

0x218c,	// (0x00051167) popup_image_focus_window_g2

0x2194,	// (0x0005116f) popup_image_focus_window_g3

0x219c,	// (0x00051177) popup_image_focus_window_g4

0x0003,

0xf5ff,	// (0x0005e5da) popup_image_focus_window_g

0x21a4,	// (0x0005117f) popup_image_focus_window_t1

0x21b2,	// (0x0005118d) popup_image_focus_window_t2

0x21c2,	// (0x0005119d) popup_image_focus_window_t3

0x0002,

0xf608,	// (0x0005e5e3) popup_image_focus_window_t

0xe351,	// (0x0005d32c) camera2_autofocus_pane_g1

0xdbd6,	// (0x0005cbb1) bg_tb_trans_pane_cp01

0x21d0,	// (0x000511ab) popup_image_details_window_g1

0x21e3,	// (0x000511be) popup_image_details_window_g2

0x0002,

0xf61a,	// (0x0005e5f5) popup_image_details_window_g

0x220c,	// (0x000511e7) popup_image_details_window_t1

0x221e,	// (0x000511f9) popup_image_details_window_t2

0x2237,	// (0x00051212) popup_image_details_window_t3

0x224b,	// (0x00051226) popup_image_details_window_t4

0x2266,	// (0x00051241) popup_image_details_window_t5

0x0004,

0xf621,	// (0x0005e5fc) popup_image_details_window_t

0xe3d9,	// (0x0005d3b4) bg_calc_paper_pane_ParamLimits

0x4a51,	// (0x00053a2c) grid_highlight_pane_cp013

0x4b9e,	// (0x00053b79) list_calc_pane_ParamLimits

0x4bb0,	// (0x00053b8b) scroll_pane_cp024

0xe3ed,	// (0x0005d3c8) bg_calc_display_pane_ParamLimits

0x4bb8,	// (0x00053b93) calc_display_pane_t1_ParamLimits

0x4bcd,	// (0x00053ba8) calc_display_pane_t2_ParamLimits

0x4be2,	// (0x00053bbd) calc_display_pane_t3_ParamLimits

0xf0a4,	// (0x0005e07f) calc_display_pane_t_ParamLimits

0x4cbb,	// (0x00053c96) cell_calc_pane_g2

0x0001,

0xf0c1,	// (0x0005e09c) cell_calc_pane_g

0x4cc4,	// (0x00053c9f) cell_calc_pane_t1

0xe442,	// (0x0005d41d) grid_highlight_pane_cp02_ParamLimits

0xe458,	// (0x0005d433) toolbar_button_pane_cp01_ParamLimits

0xe458,	// (0x0005d433) toolbar_button_pane_cp01

0x0312,	// (0x0004f2ed) temp_image_control_pane_ParamLimits

0x0312,	// (0x0004f2ed) temp_image_control_pane

0x7450,	// (0x0005642b) main_mp3_pane

0x2280,	// (0x0005125b) temp_image_control_pane_g1_ParamLimits

0x2280,	// (0x0005125b) temp_image_control_pane_g1

0x228e,	// (0x00051269) temp_image_control_pane_g2_ParamLimits

0x228e,	// (0x00051269) temp_image_control_pane_g2

0x22a0,	// (0x0005127b) temp_image_control_pane_g3_ParamLimits

0x22a0,	// (0x0005127b) temp_image_control_pane_g3

0x78f8,	// (0x000568d3) temp_image_control_pane_g4_ParamLimits

0x78f8,	// (0x000568d3) temp_image_control_pane_g4

0x0003,

0xf62c,	// (0x0005e607) temp_image_control_pane_g_ParamLimits

0xf62c,	// (0x0005e607) temp_image_control_pane_g

0x2280,	// (0x0005125b) main_mp3_pane_g1

0x7909,	// (0x000568e4) main_mp3_pane_g2

0x0007,

0xf635,	// (0x0005e610) main_mp3_pane_g

0x22d5,	// (0x000512b0) main_mp3_pane_t1

0xe35f,	// (0x0005d33a) main_camera_pane_g8_ParamLimits

0xe35f,	// (0x0005d33a) main_camera_pane_g8

0x53a0,	// (0x0005437b) main_video_pane_g7_ParamLimits

0x53a0,	// (0x0005437b) main_video_pane_g7

0x779a,	// (0x00056775) main_camera2_pane_t7_ParamLimits

0x779a,	// (0x00056775) main_camera2_pane_t7

0xe71e,	// (0x0005d6f9) scroll_pane_cp025_ParamLimits

0xe71e,	// (0x0005d6f9) scroll_pane_cp025

0xe732,	// (0x0005d70d) scroll_pane_cp026_ParamLimits

0xe732,	// (0x0005d70d) scroll_pane_cp026

0xe741,	// (0x0005d71c) wml_content_pane_ParamLimits

0x4a51,	// (0x00053a2c) main_touch_calib_pane

0x79ad,	// (0x00056988) main_touch_calib_pane_g1

0x79b9,	// (0x00056994) main_touch_calib_pane_g2

0x79c5,	// (0x000569a0) main_touch_calib_pane_g3

0x79d1,	// (0x000569ac) main_touch_calib_pane_g4

0x0003,

0xf653,	// (0x0005e62e) main_touch_calib_pane_g

0x79dd,	// (0x000569b8) main_touch_calib_pane_t1

0x79f6,	// (0x000569d1) main_touch_calib_pane_t2

0x0004,

0xf65c,	// (0x0005e637) main_touch_calib_pane_t

0xee94,	// (0x0005de6f) mup_progress_pane_cp02

0xeec9,	// (0x0005dea4) navi_pane_g1

0xef84,	// (0x0005df5f) navi_pane_mp_t3

0x7450,	// (0x0005642b) main_mp3_pane_ParamLimits

0x75c5,	// (0x000565a0) navi_pane_ParamLimits

0x2280,	// (0x0005125b) main_mp3_pane_g1_ParamLimits

0x7909,	// (0x000568e4) main_mp3_pane_g2_ParamLimits

0x7915,	// (0x000568f0) main_mp3_pane_g3_ParamLimits

0x7915,	// (0x000568f0) main_mp3_pane_g3

0x7921,	// (0x000568fc) main_mp3_pane_g4_ParamLimits

0x7921,	// (0x000568fc) main_mp3_pane_g4

0xe351,	// (0x0005d32c) main_mp3_pane_g5_ParamLimits

0xe351,	// (0x0005d32c) main_mp3_pane_g5

0x22b0,	// (0x0005128b) main_mp3_pane_g6_ParamLimits

0x22b0,	// (0x0005128b) main_mp3_pane_g6

0x22bd,	// (0x00051298) main_mp3_pane_g7_ParamLimits

0x22bd,	// (0x00051298) main_mp3_pane_g7

0x22c9,	// (0x000512a4) main_mp3_pane_g8_ParamLimits

0x22c9,	// (0x000512a4) main_mp3_pane_g8

0xf635,	// (0x0005e610) main_mp3_pane_g_ParamLimits

0x792d,	// (0x00056908) main_mp3_pane_t2

0x793d,	// (0x00056918) main_mp3_pane_t3

0x22e3,	// (0x000512be) main_mp3_pane_t4

0x22f1,	// (0x000512cc) main_mp3_pane_t5

0x0005,

0xf646,	// (0x0005e621) main_mp3_pane_t

0x22ff,	// (0x000512da) mup_progress_pane_cp01

0x486c,	// (0x00053847) aid_zoom_text_secondary2

0x206d,	// (0x00051048) list_cale_ev2_pane

0x2075,	// (0x00051050) scroll_pane_cp023_ParamLimits

0x7a51,	// (0x00056a2c) field_cale_ev2_pane_ParamLimits

0x7a51,	// (0x00056a2c) field_cale_ev2_pane

0x13f7,	// (0x000503d2) field_cale_ev2_pane_g1_ParamLimits

0x13f7,	// (0x000503d2) field_cale_ev2_pane_g1

0x1403,	// (0x000503de) field_cale_ev2_pane_g2_ParamLimits

0x1403,	// (0x000503de) field_cale_ev2_pane_g2

0x141b,	// (0x000503f6) field_cale_ev2_pane_g3_ParamLimits

0x141b,	// (0x000503f6) field_cale_ev2_pane_g3

0x0003,

0xf667,	// (0x0005e642) field_cale_ev2_pane_g_ParamLimits

0xf667,	// (0x0005e642) field_cale_ev2_pane_g

0x7a7a,	// (0x00056a55) field_cale_ev2_pane_t1_ParamLimits

0x7a7a,	// (0x00056a55) field_cale_ev2_pane_t1

0x7a91,	// (0x00056a6c) field_cale_ev2_pane_t2_ParamLimits

0x7a91,	// (0x00056a6c) field_cale_ev2_pane_t2

0x0001,

0xf670,	// (0x0005e64b) field_cale_ev2_pane_t_ParamLimits

0xf670,	// (0x0005e64b) field_cale_ev2_pane_t

0x6df9,	// (0x00055dd4) main_postcard_pane_g5_ParamLimits

0x6df9,	// (0x00055dd4) main_postcard_pane_g5

0x6e07,	// (0x00055de2) main_postcard_pane_g6_ParamLimits

0x6e07,	// (0x00055de2) main_postcard_pane_g6

0xe343,	// (0x0005d31e) camera2_autofocus_pane_cp_ParamLimits

0xe343,	// (0x0005d31e) camera2_autofocus_pane_cp

0x7450,	// (0x0005642b) main_mup3_pane

0x7ae5,	// (0x00056ac0) main_mup3_pane_g1_ParamLimits

0x7ae5,	// (0x00056ac0) main_mup3_pane_g1

0x7b34,	// (0x00056b0f) main_mup3_pane_g2_ParamLimits

0x7b34,	// (0x00056b0f) main_mup3_pane_g2

0x7b97,	// (0x00056b72) main_mup3_pane_g3_ParamLimits

0x7b97,	// (0x00056b72) main_mup3_pane_g3

0x7bf6,	// (0x00056bd1) main_mup3_pane_g4_ParamLimits

0x7bf6,	// (0x00056bd1) main_mup3_pane_g4

0x7c55,	// (0x00056c30) main_mup3_pane_g5_ParamLimits

0x7c55,	// (0x00056c30) main_mup3_pane_g5

0x7cb4,	// (0x00056c8f) main_mup3_pane_g6_ParamLimits

0x7cb4,	// (0x00056c8f) main_mup3_pane_g6

0xe35f,	// (0x0005d33a) main_mup3_pane_g7_ParamLimits

0xe35f,	// (0x0005d33a) main_mup3_pane_g7

0x0007,

0xf680,	// (0x0005e65b) main_mup3_pane_g_ParamLimits

0xf680,	// (0x0005e65b) main_mup3_pane_g

0x7d24,	// (0x00056cff) main_mup3_pane_t1_ParamLimits

0x7d24,	// (0x00056cff) main_mup3_pane_t1

0x7e05,	// (0x00056de0) main_mup3_pane_t2_ParamLimits

0x7e05,	// (0x00056de0) main_mup3_pane_t2

0x7ee6,	// (0x00056ec1) main_mup3_pane_t4_ParamLimits

0x7ee6,	// (0x00056ec1) main_mup3_pane_t4

0x7ef8,	// (0x00056ed3) main_mup3_pane_t5_ParamLimits

0x7ef8,	// (0x00056ed3) main_mup3_pane_t5

0x7fbe,	// (0x00056f99) main_mup3_pane_t6_ParamLimits

0x7fbe,	// (0x00056f99) main_mup3_pane_t6

0x0005,

0xf691,	// (0x0005e66c) main_mup3_pane_t_ParamLimits

0xf691,	// (0x0005e66c) main_mup3_pane_t

0x805b,	// (0x00057036) mup3_progress_pane_ParamLimits

0x805b,	// (0x00057036) mup3_progress_pane

0x2610,	// (0x000515eb) popup_mup3_control_window_ParamLimits

0x2610,	// (0x000515eb) popup_mup3_control_window

0x2307,	// (0x000512e2) popup_mup3_text_window

0x80be,	// (0x00057099) mup3_progress_pane_t1

0x80dd,	// (0x000570b8) mup3_progress_pane_t2

0x230f,	// (0x000512ea) mup3_progress_pane_t3

0x0002,

0xf69e,	// (0x0005e679) mup3_progress_pane_t

0x232c,	// (0x00051307) mup_progress_pane_cp03

0x233c,	// (0x00051317) bg_tb_trans_pane_cp04

0x233c,	// (0x00051317) mup3_volume_pane

0x2344,	// (0x0005131f) popup_mup3_control_window_g1

0x2344,	// (0x0005131f) mup3_volume_pane_g1

0x2344,	// (0x0005131f) mup3_volume_pane_g2

0x2344,	// (0x0005131f) mup3_volume_pane_g3

0x0002,

0xf6a5,	// (0x0005e680) mup3_volume_pane_g

0xdb99,	// (0x0005cb74) bg_tb_trans_pane_cp03

0x234c,	// (0x00051327) popup_mup3_text_window_g1

0x2354,	// (0x0005132f) popup_mup3_text_window_t1

0xe435,	// (0x0005d410) list_calc_item_pane_g1_ParamLimits

0x1d67,	// (0x00050d42) mup_volume_pane_cp_g1

0x7a0f,	// (0x000569ea) main_touch_calib_pane_t3

0x7a25,	// (0x00056a00) main_touch_calib_pane_t4

0x7a3b,	// (0x00056a16) main_touch_calib_pane_t5

0x4824,	// (0x000537ff) aid_cell_size_toolbar2

0x482c,	// (0x00053807) aid_popup3_width_pane

0x4760,	// (0x0005373b) aid_zoom_text_msg_primary

0x52a2,	// (0x0005427d) vorec_t7

0xe3f9,	// (0x0005d3d4) bg_calc_paper_pane_g1_ParamLimits

0xe405,	// (0x0005d3e0) bg_calc_paper_pane_g2_ParamLimits

0xe411,	// (0x0005d3ec) bg_calc_paper_pane_g3_ParamLimits

0xe41d,	// (0x0005d3f8) bg_calc_paper_pane_g4_ParamLimits

0xe429,	// (0x0005d404) bg_calc_paper_pane_g5_ParamLimits

0x4c21,	// (0x00053bfc) bg_calc_paper_pane_g6_ParamLimits

0x4c32,	// (0x00053c0d) bg_calc_paper_pane_g7_ParamLimits

0x4c43,	// (0x00053c1e) bg_calc_paper_pane_g8_ParamLimits

0xf0ab,	// (0x0005e086) bg_calc_paper_pane_g_ParamLimits

0x4c54,	// (0x00053c2f) calc_bg_paper_pane_g9_ParamLimits

0xe343,	// (0x0005d31e) image_qvga_pane_ParamLimits

0xe343,	// (0x0005d31e) image_qvga_pane

0xe2d6,	// (0x0005d2b1) bg_popup_sub_pane_cp04_ParamLimits

0x0249,	// (0x0004f224) popup_mup_playback_window_g1_ParamLimits

0x0255,	// (0x0004f230) popup_mup_playback_window_t1_ParamLimits

0x026a,	// (0x0004f245) popup_mup_playback_window_t2_ParamLimits

0xf409,	// (0x0005e3e4) popup_mup_playback_window_t_ParamLimits

0xe351,	// (0x0005d32c) main_mup2_pane_g3_ParamLimits

0xe351,	// (0x0005d32c) main_mup2_pane_g3

0x5561,	// (0x0005453c) popup_toolbar_window_cp04

0x05db,	// (0x0004f5b6) popup_call2_audio_second_window_g3_ParamLimits

0x05db,	// (0x0004f5b6) popup_call2_audio_second_window_g3

0x09f3,	// (0x0004f9ce) popup_call2_audio_first_window_g4_ParamLimits

0x09f3,	// (0x0004f9ce) popup_call2_audio_first_window_g4

0x101a,	// (0x0004fff5) popup_call2_audio_in_window_g4_ParamLimits

0x101a,	// (0x0004fff5) popup_call2_audio_in_window_g4

0x6ed8,	// (0x00055eb3) aid_area_sk_bg_cut_ParamLimits

0x6ed8,	// (0x00055eb3) aid_area_sk_bg_cut

0x027f,	// (0x0004f25a) aid_area_sk_bg_cut_2_ParamLimits

0x027f,	// (0x0004f25a) aid_area_sk_bg_cut_2

0xdb99,	// (0x0005cb74) aid_placing_details_win

0xdb99,	// (0x0005cb74) aid_placing_details_win_2

0xe351,	// (0x0005d32c) camera2_autofocus_pane_g1_ParamLimits

0x49dd,	// (0x000539b8) popup_fixed_preview_cale_window_ParamLimits

0x49dd,	// (0x000539b8) popup_fixed_preview_cale_window

0xf014,	// (0x0005dfef) navi_slider_pane_g3

0xf00b,	// (0x0005dfe6) navi_slider_pane_g4

0xf002,	// (0x0005dfdd) navi_slider_pane_g5

0xf014,	// (0x0005dfef) navi_slider_pane_g6

0x698d,	// (0x00055968) navi_slider_pane_g7

0x0129,	// (0x0004f104) mup_scale_pane_g3

0x0132,	// (0x0004f10d) mup_scale_pane_g4

0x013b,	// (0x0004f116) mup_scale_pane_g5

0x6b8e,	// (0x00055b69) mup_scale_pane_g6

0x6b97,	// (0x00055b72) mup_scale_pane_g7

0x2f8d,	// (0x00051f68) cams2_slider_pane_g3

0x2f8d,	// (0x00051f68) cams2_slider_pane_g4

0x2f8d,	// (0x00051f68) cams2_slider_pane_g5

0x2f8d,	// (0x00051f68) cams2_slider_pane_g6

0x2f8d,	// (0x00051f68) cams2_slider_pane_g7

0xe38f,	// (0x0005d36a) camera2_autofocus_pane_cp_g1

0x12a8,	// (0x00050283) bg_popup_preview_window_pane_cp02_ParamLimits

0x12a8,	// (0x00050283) bg_popup_preview_window_pane_cp02

0x2362,	// (0x0005133d) list_fp_cale_pane_ParamLimits

0x2362,	// (0x0005133d) list_fp_cale_pane

0x236e,	// (0x00051349) popup_fixed_preview_cale_window_t1_ParamLimits

0x236e,	// (0x00051349) popup_fixed_preview_cale_window_t1

0x80fc,	// (0x000570d7) popup_fixed_preview_cale_window_t2_ParamLimits

0x80fc,	// (0x000570d7) popup_fixed_preview_cale_window_t2

0x8111,	// (0x000570ec) popup_fixed_preview_cale_window_t3_ParamLimits

0x8111,	// (0x000570ec) popup_fixed_preview_cale_window_t3

0x0002,

0xf6ac,	// (0x0005e687) popup_fixed_preview_cale_window_t_ParamLimits

0xf6ac,	// (0x0005e687) popup_fixed_preview_cale_window_t

0x8126,	// (0x00057101) list_single_fp_cale_pane_ParamLimits

0x8126,	// (0x00057101) list_single_fp_cale_pane

0x238c,	// (0x00051367) list_single_fp_cale_pane_g1_ParamLimits

0x238c,	// (0x00051367) list_single_fp_cale_pane_g1

0x2398,	// (0x00051373) list_single_fp_cale_pane_g2_ParamLimits

0x2398,	// (0x00051373) list_single_fp_cale_pane_g2

0x0002,

0xf6b3,	// (0x0005e68e) list_single_fp_cale_pane_g_ParamLimits

0xf6b3,	// (0x0005e68e) list_single_fp_cale_pane_g

0x23b1,	// (0x0005138c) list_single_fp_cale_pane_t1_ParamLimits

0x23b1,	// (0x0005138c) list_single_fp_cale_pane_t1

0x23c3,	// (0x0005139e) list_single_fp_cale_pane_t2_ParamLimits

0x23c3,	// (0x0005139e) list_single_fp_cale_pane_t2

0x0001,

0xf6ba,	// (0x0005e695) list_single_fp_cale_pane_t_ParamLimits

0xf6ba,	// (0x0005e695) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x4a51,	// (0x00053a2c) main_dialer_pane

0xdb99,	// (0x0005cb74) aid_cell_size_keypad

0xdb99,	// (0x0005cb74) dialer_ne_pane

0xdb99,	// (0x0005cb74) grid_dialer_command_1_pane

0xdb99,	// (0x0005cb74) grid_dialer_command_2_pane

0xdb99,	// (0x0005cb74) grid_dialer_keypad_pane

0x1ca4,	// (0x00050c7f) bg_popup_call_pane_cp06_ParamLimits

0x1ca4,	// (0x00050c7f) bg_popup_call_pane_cp06

0x1ca4,	// (0x00050c7f) dialer_ne_clear_pane_ParamLimits

0x1ca4,	// (0x00050c7f) dialer_ne_clear_pane

0xe38f,	// (0x0005d36a) dialer_ne_pane_g1

0xe3ad,	// (0x0005d388) dialer_ne_pane_t1_ParamLimits

0xe3ad,	// (0x0005d388) dialer_ne_pane_t1

0x25f3,	// (0x000515ce) dialer_ne_pane_t2_ParamLimits

0x25f3,	// (0x000515ce) dialer_ne_pane_t2

0x8139,	// (0x00057114) dialer_ne_pane_t3_ParamLimits

0x8139,	// (0x00057114) dialer_ne_pane_t3

0x0002,

0xf6bf,	// (0x0005e69a) dialer_ne_pane_t_ParamLimits

0xf6bf,	// (0x0005e69a) dialer_ne_pane_t

0x8139,	// (0x00057114) dialer_ne_pane_t3_copy1_ParamLimits

0x8139,	// (0x00057114) dialer_ne_pane_t3_copy1

0x23f6,	// (0x000513d1) cell_dialer_keypad_pane_ParamLimits

0x23f6,	// (0x000513d1) cell_dialer_keypad_pane

0xdbd6,	// (0x0005cbb1) cell_dialer_command_1_pane_ParamLimits

0xdbd6,	// (0x0005cbb1) cell_dialer_command_1_pane

0x240d,	// (0x000513e8) cell_dialer_command_2_pane_ParamLimits

0x240d,	// (0x000513e8) cell_dialer_command_2_pane

0xdbd6,	// (0x0005cbb1) bg_button_pane_cp02_ParamLimits

0xdbd6,	// (0x0005cbb1) bg_button_pane_cp02

0xe351,	// (0x0005d32c) cell_dialer_keypad_pane_g1_ParamLimits

0xe351,	// (0x0005d32c) cell_dialer_keypad_pane_g1

0xdbd6,	// (0x0005cbb1) bg_button_pane_cp03_ParamLimits

0xdbd6,	// (0x0005cbb1) bg_button_pane_cp03

0xe351,	// (0x0005d32c) cell_dialer_command_1_pane_g1_ParamLimits

0xe351,	// (0x0005d32c) cell_dialer_command_1_pane_g1

0xdb99,	// (0x0005cb74) bg_button_pane_cp04

0xe38f,	// (0x0005d36a) cell_dialer_command_2_pane_g1

0xdb99,	// (0x0005cb74) bg_button_pane_cp06

0xe38f,	// (0x0005d36a) dialer_ne_clear_pane_g1

0xeed5,	// (0x0005deb0) navi_pane_g2

0xef03,	// (0x0005dede) navi_pane_g3

0x0002,

0xf311,	// (0x0005e2ec) navi_pane_g

0xef92,	// (0x0005df6d) navi_pane_mv_g2

0xefb9,	// (0x0005df94) navi_pane_mv_g5

0x6958,	// (0x00055933) navi_pane_mv_t1

0xe3ed,	// (0x0005d3c8) main_clock2_pane

0xe343,	// (0x0005d31e) main_clock2_list_pane_ParamLimits

0xe343,	// (0x0005d31e) main_clock2_list_pane

0x81af,	// (0x0005718a) main_clock2_pane_t1_ParamLimits

0x81af,	// (0x0005718a) main_clock2_pane_t1

0x81dd,	// (0x000571b8) main_clock2_pane_t2_ParamLimits

0x81dd,	// (0x000571b8) main_clock2_pane_t2

0x0004,

0xf6cb,	// (0x0005e6a6) main_clock2_pane_t_ParamLimits

0xf6cb,	// (0x0005e6a6) main_clock2_pane_t

0x8242,	// (0x0005721d) popup_clock_analogue_window_cp03_ParamLimits

0x8242,	// (0x0005721d) popup_clock_analogue_window_cp03

0x8260,	// (0x0005723b) popup_clock_digital_window_cp02_ParamLimits

0x8260,	// (0x0005723b) popup_clock_digital_window_cp02

0x82d5,	// (0x000572b0) main_clock2_list_single_pane_ParamLimits

0x82d5,	// (0x000572b0) main_clock2_list_single_pane

0xe60e,	// (0x0005d5e9) list_highlight_pane_cp05

0x2452,	// (0x0005142d) main_clock2_list_single_pane_t1

0x5561,	// (0x0005453c) popup_toolbar_window_cp04_ParamLimits

0xe35f,	// (0x0005d33a) camera2_autofocus_pane_g2_ParamLimits

0xe35f,	// (0x0005d33a) camera2_autofocus_pane_g2

0xe35f,	// (0x0005d33a) camera2_autofocus_pane_g3_ParamLimits

0xe35f,	// (0x0005d33a) camera2_autofocus_pane_g3

0xe35f,	// (0x0005d33a) camera2_autofocus_pane_g4_ParamLimits

0xe35f,	// (0x0005d33a) camera2_autofocus_pane_g4

0xe35f,	// (0x0005d33a) camera2_autofocus_pane_g5_ParamLimits

0xe35f,	// (0x0005d33a) camera2_autofocus_pane_g5

0x0004,

0xf60f,	// (0x0005e5ea) camera2_autofocus_pane_g_ParamLimits

0xf60f,	// (0x0005e5ea) camera2_autofocus_pane_g

0x7aa6,	// (0x00056a81) camera2_autofocus_pane_cp_g2

0x7aae,	// (0x00056a89) camera2_autofocus_pane_cp_g3

0x7ab6,	// (0x00056a91) camera2_autofocus_pane_cp_g4

0x7abe,	// (0x00056a99) camera2_autofocus_pane_cp_g5

0x0004,

0xf675,	// (0x0005e650) camera2_autofocus_pane_cp_g

0xdb99,	// (0x0005cb74) popup_dialer_spcha_window

0xdb99,	// (0x0005cb74) bg_popup_sub_pane_cp07

0xdb99,	// (0x0005cb74) list_spcha_pane

0x2460,	// (0x0005143b) list_single_spcha_pane_ParamLimits

0x2460,	// (0x0005143b) list_single_spcha_pane

0xdb99,	// (0x0005cb74) list_highlight_pane_cp06

0xeb0b,	// (0x0005dae6) list_single_spcha_pane_t1

0x0dc4,	// (0x0004fd9f) popup_call2_audio_out_window_g4_ParamLimits

0x0dc4,	// (0x0004fd9f) popup_call2_audio_out_window_g4

0x4a51,	// (0x00053a2c) main_imed2_pane

0x74ee,	// (0x000564c9) popup_imed_adjust2_window

0x7501,	// (0x000564dc) popup_imed_trans_window_ParamLimits

0x7501,	// (0x000564dc) popup_imed_trans_window

0x1e3c,	// (0x00050e17) popup_blid_sat_info2_window_t1

0x1e4a,	// (0x00050e25) popup_blid_sat_info2_window_t2

0x000a,

0xf5a4,	// (0x0005e57f) popup_blid_sat_info2_window_t

0x838a,	// (0x00057365) aid_size_cell_colour_35

0x83a4,	// (0x0005737f) aid_size_cell_colour_112

0x83bb,	// (0x00057396) aid_size_cell_effect

0xdbd6,	// (0x0005cbb1) bg_tb_trans_pane_cp02

0xeae8,	// (0x0005dac3) heading_imed_pane

0x83d5,	// (0x000573b0) listscroll_imed_pane

0x2472,	// (0x0005144d) heading_imed_pane_g1

0x247a,	// (0x00051455) heading_imed_pane_t1

0x2488,	// (0x00051463) grid_imed_colour_35_pane_ParamLimits

0x2488,	// (0x00051463) grid_imed_colour_35_pane

0x83e1,	// (0x000573bc) grid_imed_effect_pane

0x249f,	// (0x0005147a) list_imed_aspect_pane

0x83f1,	// (0x000573cc) scroll_pane_cp027_ParamLimits

0x83f1,	// (0x000573cc) scroll_pane_cp027

0x83fd,	// (0x000573d8) cell_imed_effect_pane_ParamLimits

0x83fd,	// (0x000573d8) cell_imed_effect_pane

0x24a7,	// (0x00051482) cell_imed_colour_pane_ParamLimits

0x24a7,	// (0x00051482) cell_imed_colour_pane

0x24e9,	// (0x000514c4) cell_imed_colour_pane_g1_ParamLimits

0x24e9,	// (0x000514c4) cell_imed_colour_pane_g1

0x24fa,	// (0x000514d5) hgihlgiht_grid_pane_cp016_ParamLimits

0x24fa,	// (0x000514d5) hgihlgiht_grid_pane_cp016

0x8415,	// (0x000573f0) cell_imed_effect_pane_g1

0x841d,	// (0x000573f8) grid_highlight_pane_cp017

0x250b,	// (0x000514e6) list_imed_single_pane_ParamLimits

0x250b,	// (0x000514e6) list_imed_single_pane

0xdb99,	// (0x0005cb74) list_highlight_pane_cp07

0x2520,	// (0x000514fb) list_imed_aspect_pane_comp1_t1

0x00b9,	// (0x0004f094) bg_tb_trans_pane_cp05

0x2542,	// (0x0005151d) popup_imed_adjust2_window_g1

0x2569,	// (0x00051544) popup_imed_adjust2_window_t1

0x2581,	// (0x0005155c) slider_imed_adjust_pane

0x2595,	// (0x00051570) slider_imed_adjust_pane_g1

0x25a5,	// (0x00051580) slider_imed_adjust_pane_g2

0x25b5,	// (0x00051590) slider_imed_adjust_pane_g3

0x25c6,	// (0x000515a1) slider_imed_adjust_pane_g4

0x0003,

0xf6e8,	// (0x0005e6c3) slider_imed_adjust_pane_g

0x8426,	// (0x00057401) aid_size_cell_clipart2

0x8432,	// (0x0005740d) grid_imed_clipart_pane

0x014c,	// (0x0004f127) scroll_pane_cp031

0x843c,	// (0x00057417) cell_imed_clipart_pane_ParamLimits

0x843c,	// (0x00057417) cell_imed_clipart_pane

0x845e,	// (0x00057439) cell_imed_clipart_pane_g1

0xdb99,	// (0x0005cb74) grid_highlight_pane_cp014

0x8191,	// (0x0005716c) main_clock2_pane_g1_ParamLimits

0x8191,	// (0x0005716c) main_clock2_pane_g1

0x827c,	// (0x00057257) aid_call2_pane_cp10

0x828e,	// (0x00057269) aid_call_pane_cp10

0xee36,	// (0x0005de11) popup_clock_analogue_window_cp10_g1

0xee36,	// (0x0005de11) popup_clock_analogue_window_cp10_g2

0x82a0,	// (0x0005727b) popup_clock_analogue_window_cp10_g3

0x82a0,	// (0x0005727b) popup_clock_analogue_window_cp10_g4

0xee36,	// (0x0005de11) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6d6,	// (0x0005e6b1) popup_clock_analogue_window_cp10_g

0x82b6,	// (0x00057291) popup_clock_analogue_window_cp10_t1

0x82e7,	// (0x000572c2) clock_digital_number_pane_cp10_ParamLimits

0x82e7,	// (0x000572c2) clock_digital_number_pane_cp10

0x8301,	// (0x000572dc) clock_digital_number_pane_cp11_ParamLimits

0x8301,	// (0x000572dc) clock_digital_number_pane_cp11

0x831b,	// (0x000572f6) clock_digital_number_pane_cp12_ParamLimits

0x831b,	// (0x000572f6) clock_digital_number_pane_cp12

0x8335,	// (0x00057310) clock_digital_number_pane_cp13_ParamLimits

0x8335,	// (0x00057310) clock_digital_number_pane_cp13

0x834f,	// (0x0005732a) clock_digital_separator_pane_cp10_ParamLimits

0x834f,	// (0x0005732a) clock_digital_separator_pane_cp10

0x8369,	// (0x00057344) popup_clock_digital_window_cp02_t1_ParamLimits

0x8369,	// (0x00057344) popup_clock_digital_window_cp02_t1

0xe2ce,	// (0x0005d2a9) clock_digital_number_pane_cp10_g1

0xe2ce,	// (0x0005d2a9) clock_digital_number_pane_cp10_g2

0x0001,

0xf6f1,	// (0x0005e6cc) clock_digital_number_pane_cp10_g

0xe2ce,	// (0x0005d2a9) clock_digital_separator_pane_cp10_g1

0xe2ce,	// (0x0005d2a9) clock_digital_separator_pane_g2_cp10

0xefc1,	// (0x0005df9c) navi_pane_vded_g4

0xefca,	// (0x0005dfa5) navi_pane_vded_g5

0xefd3,	// (0x0005dfae) navi_pane_vded_t1

0x4a51,	// (0x00053a2c) main_vded_pane

0x8467,	// (0x00057442) main_vded_pane_g1

0x8473,	// (0x0005744e) main_vded_pane_g2

0x847d,	// (0x00057458) main_vded_pane_g3

0x0002,

0xf6f6,	// (0x0005e6d1) main_vded_pane_g

0x8487,	// (0x00057462) main_vded_pane_t1

0x8495,	// (0x00057470) main_vded_pane_t2

0x0001,

0xf6fd,	// (0x0005e6d8) main_vded_pane_t

0x84a3,	// (0x0005747e) vded_slider_pane

0x84ad,	// (0x00057488) vded_video_pane

0x25d7,	// (0x000515b2) vded_video_pane_g1

0x84b7,	// (0x00057492) vded_video_pane_g2

0xe38f,	// (0x0005d36a) vded_video_pane_g3

0x0002,

0xf702,	// (0x0005e6dd) vded_video_pane_g

0x25e1,	// (0x000515bc) vded_slider_pane_g1

0x1d67,	// (0x00050d42) vded_slider_pane_g2

0x25ea,	// (0x000515c5) vded_slider_pane_g3

0x262a,	// (0x00051605) vded_slider_pane_g4

0x2633,	// (0x0005160e) vded_slider_pane_g5

0x0004,

0xf709,	// (0x0005e6e4) vded_slider_pane_g

0x2610,	// (0x000515eb) mup3_rocker_pane_ParamLimits

0x2610,	// (0x000515eb) mup3_rocker_pane

0x2344,	// (0x0005131f) mup3_control_keys_pane_g1

0x263c,	// (0x00051617) mup3_control_keys_pane_g2

0x2344,	// (0x0005131f) mup3_control_keys_pane_g3

0x2644,	// (0x0005161f) mup3_control_keys_pane_g4

0x0003,

0xf714,	// (0x0005e6ef) mup3_control_keys_pane_g

0x4a05,	// (0x000539e0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x4a05,	// (0x000539e0) popup_toolbar2_fixed_window_cp01

0x2610,	// (0x000515eb) popup_toolbar2_fixed_window_cp02_ParamLimits

0x2610,	// (0x000515eb) popup_toolbar2_fixed_window_cp02

0x074d,	// (0x0004f728) popup_call2_audio_second_window_t4_ParamLimits

0x074d,	// (0x0004f728) popup_call2_audio_second_window_t4

0x0c89,	// (0x0004fc64) popup_call2_audio_first_window_t6_ParamLimits

0x0c89,	// (0x0004fc64) popup_call2_audio_first_window_t6

0x0ec7,	// (0x0004fea2) popup_call2_audio_out_window_t6_ParamLimits

0x0ec7,	// (0x0004fea2) popup_call2_audio_out_window_t6

0x4a51,	// (0x00053a2c) main_vitu_pane

0xe343,	// (0x0005d31e) aid_size_cell_itu_ParamLimits

0xe343,	// (0x0005d31e) aid_size_cell_itu

0xe343,	// (0x0005d31e) bg_popup_window_pane_cp08_ParamLimits

0xe343,	// (0x0005d31e) bg_popup_window_pane_cp08

0xe343,	// (0x0005d31e) field_vitu_entry_pane_ParamLimits

0xe343,	// (0x0005d31e) field_vitu_entry_pane

0xe343,	// (0x0005d31e) grid_vitu_function_pane_ParamLimits

0xe343,	// (0x0005d31e) grid_vitu_function_pane

0xe343,	// (0x0005d31e) grid_vitu_itu_pane_ParamLimits

0xe343,	// (0x0005d31e) grid_vitu_itu_pane

0xe343,	// (0x0005d31e) cell_vitu_itu_pane_ParamLimits

0xe343,	// (0x0005d31e) cell_vitu_itu_pane

0xe343,	// (0x0005d31e) cell_vitu_function_pane_ParamLimits

0xe343,	// (0x0005d31e) cell_vitu_function_pane

0xdbd6,	// (0x0005cbb1) bg_popup_sub_pane_cp08_ParamLimits

0xdbd6,	// (0x0005cbb1) bg_popup_sub_pane_cp08

0xe399,	// (0x0005d374) field_vitu_entry_pane_t1_ParamLimits

0xe399,	// (0x0005d374) field_vitu_entry_pane_t1

0x25f3,	// (0x000515ce) field_vitu_entry_pane_t2_ParamLimits

0x25f3,	// (0x000515ce) field_vitu_entry_pane_t2

0x0001,

0xf71d,	// (0x0005e6f8) field_vitu_entry_pane_t_ParamLimits

0xf71d,	// (0x0005e6f8) field_vitu_entry_pane_t

0x1ca4,	// (0x00050c7f) bg_button_pane_cp05_ParamLimits

0x1ca4,	// (0x00050c7f) bg_button_pane_cp05

0x264c,	// (0x00051627) cell_vitu_itu_pane_g1

0x00a5,	// (0x0004f080) cell_vitu_itu_pane_t1_ParamLimits

0x00a5,	// (0x0004f080) cell_vitu_itu_pane_t1

0x00a5,	// (0x0004f080) cell_vitu_itu_pane_t2_ParamLimits

0x00a5,	// (0x0004f080) cell_vitu_itu_pane_t2

0x0002,

0xf722,	// (0x0005e6fd) cell_vitu_itu_pane_t_ParamLimits

0xf722,	// (0x0005e6fd) cell_vitu_itu_pane_t

0xdb99,	// (0x0005cb74) bg_button_pane_cp07

0xe38f,	// (0x0005d36a) cell_vitu_function_pane_g1

0x4b87,	// (0x00053b62) main_calc_pane_g1

0x4860,	// (0x0005383b) aid_visual_content_pane

0x4a51,	// (0x00053a2c) main_vradio_pane

0xe35f,	// (0x0005d33a) main_vradio_pane_g1_ParamLimits

0xe35f,	// (0x0005d33a) main_vradio_pane_g1

0xe35f,	// (0x0005d33a) main_vradio_pane_g2_ParamLimits

0xe35f,	// (0x0005d33a) main_vradio_pane_g2

0x0001,

0xf4b9,	// (0x0005e494) main_vradio_pane_g_ParamLimits

0xf4b9,	// (0x0005e494) main_vradio_pane_g

0xe3ad,	// (0x0005d388) main_vradio_pane_t1_ParamLimits

0xe3ad,	// (0x0005d388) main_vradio_pane_t1

0xe3ad,	// (0x0005d388) main_vradio_pane_t2_ParamLimits

0xe3ad,	// (0x0005d388) main_vradio_pane_t2

0xe3ad,	// (0x0005d388) main_vradio_pane_t3_ParamLimits

0xe3ad,	// (0x0005d388) main_vradio_pane_t3

0x0002,

0xf729,	// (0x0005e704) main_vradio_pane_t_ParamLimits

0xf729,	// (0x0005e704) main_vradio_pane_t

0xe343,	// (0x0005d31e) vradio_rocker_control_pane_ParamLimits

0xe343,	// (0x0005d31e) vradio_rocker_control_pane

0xe343,	// (0x0005d31e) vradio_station_info_pane_ParamLimits

0xe343,	// (0x0005d31e) vradio_station_info_pane

0xdbd6,	// (0x0005cbb1) vradio_frequency_info_pane_ParamLimits

0xdbd6,	// (0x0005cbb1) vradio_frequency_info_pane

0xe38f,	// (0x0005d36a) vradio_station_info_pane_g1

0x00a5,	// (0x0004f080) vradio_station_info_pane_t1_ParamLimits

0x00a5,	// (0x0004f080) vradio_station_info_pane_t1

0xe3ad,	// (0x0005d388) vradio_station_info_pane_t2_ParamLimits

0xe3ad,	// (0x0005d388) vradio_station_info_pane_t2

0x0001,

0xf730,	// (0x0005e70b) vradio_station_info_pane_t_ParamLimits

0xf730,	// (0x0005e70b) vradio_station_info_pane_t

0xdb99,	// (0x0005cb74) vradio_tuning_pane

0x84c0,	// (0x0005749b) vradio_rocker_control_pane_g1

0x2668,	// (0x00051643) vradio_rocker_control_pane_g2

0x84c8,	// (0x000574a3) vradio_rocker_control_pane_g3

0x84d0,	// (0x000574ab) vradio_rocker_control_pane_g4

0x84d8,	// (0x000574b3) vradio_rocker_control_pane_g5

0x0004,

0xf735,	// (0x0005e710) vradio_rocker_control_pane_g

0xe38f,	// (0x0005d36a) vradio_frequency_info_pane_g1

0xe399,	// (0x0005d374) vradio_frequency_info_pane_t1_ParamLimits

0xe399,	// (0x0005d374) vradio_frequency_info_pane_t1

0x84e0,	// (0x000574bb) vradio_tuning_pane_g1

0x84ed,	// (0x000574c8) vradio_tuning_pane_t1

0x48a9,	// (0x00053884) area_side_right_pane_ParamLimits

0x48a9,	// (0x00053884) area_side_right_pane

0x126f,	// (0x0005024a) status_small_pane_g1

0x1277,	// (0x00050252) status_small_pane_g2

0x1280,	// (0x0005025b) status_small_pane_g3

0x1289,	// (0x00050264) status_small_pane_g4

0x0003,

0xf506,	// (0x0005e4e1) status_small_pane_g

0x1292,	// (0x0005026d) status_small_pane_t1

0x4a51,	// (0x00053a2c) main_video3_pane

0xdb99,	// (0x0005cb74) cams_zoom_vslider_pane

0x2670,	// (0x0005164b) image3_wide_pane_ParamLimits

0x2670,	// (0x0005164b) image3_wide_pane

0xdb99,	// (0x0005cb74) image3_wide_small_pane

0x268a,	// (0x00051665) main_video3_pane_g1_ParamLimits

0x268a,	// (0x00051665) main_video3_pane_g1

0x268a,	// (0x00051665) main_video3_pane_g2_ParamLimits

0x268a,	// (0x00051665) main_video3_pane_g2

0x0001,

0xf740,	// (0x0005e71b) main_video3_pane_g_ParamLimits

0xf740,	// (0x0005e71b) main_video3_pane_g

0x26a8,	// (0x00051683) main_video3_pane_t1_ParamLimits

0x26a8,	// (0x00051683) main_video3_pane_t1

0x26a8,	// (0x00051683) main_video3_pane_t2_ParamLimits

0x26a8,	// (0x00051683) main_video3_pane_t2

0x26a8,	// (0x00051683) main_video3_pane_t3_ParamLimits

0x26a8,	// (0x00051683) main_video3_pane_t3

0x0002,

0xf745,	// (0x0005e720) main_video3_pane_t_ParamLimits

0xf745,	// (0x0005e720) main_video3_pane_t

0xe38f,	// (0x0005d36a) cams_zoom_vslider_pane_g1

0xe38f,	// (0x0005d36a) cams_zoom_vslider_pane_g2

0x0001,

0xf08c,	// (0x0005e067) cams_zoom_vslider_pane_g

0xdb99,	// (0x0005cb74) small_slider_vertical_pane

0xe38f,	// (0x0005d36a) small_slider_vertical_pane_g1

0xe38f,	// (0x0005d36a) small_slider_vertical_pane_g2

0x26cf,	// (0x000516aa) small_slider_vertical_pane_g3

0x0002,

0xf74c,	// (0x0005e727) small_slider_vertical_pane_g

0x4a51,	// (0x00053a2c) main_hwr_training_pane

0x26d8,	// (0x000516b3) hwr_training_instruct_pane_ParamLimits

0x26d8,	// (0x000516b3) hwr_training_instruct_pane

0x84fc,	// (0x000574d7) hwr_training_navi_pane_ParamLimits

0x84fc,	// (0x000574d7) hwr_training_navi_pane

0x8516,	// (0x000574f1) hwr_training_write_pane_ParamLimits

0x8516,	// (0x000574f1) hwr_training_write_pane

0xdb99,	// (0x0005cb74) bg_frame_shadow_pane

0x270f,	// (0x000516ea) hwr_training_write_pane_g1

0x2717,	// (0x000516f2) hwr_training_write_pane_g2

0x271f,	// (0x000516fa) hwr_training_write_pane_g3

0x2727,	// (0x00051702) hwr_training_write_pane_g4

0x272f,	// (0x0005170a) hwr_training_write_pane_g5

0x2737,	// (0x00051712) hwr_training_write_pane_g6

0x273f,	// (0x0005171a) hwr_training_write_pane_g7

0x0006,

0xf753,	// (0x0005e72e) hwr_training_write_pane_g

0x854e,	// (0x00057529) hwr_training_navi_pane_g1_ParamLimits

0x854e,	// (0x00057529) hwr_training_navi_pane_g1

0x8560,	// (0x0005753b) hwr_training_navi_pane_g2_ParamLimits

0x8560,	// (0x0005753b) hwr_training_navi_pane_g2

0x8572,	// (0x0005754d) hwr_training_navi_pane_g3_ParamLimits

0x8572,	// (0x0005754d) hwr_training_navi_pane_g3

0x8582,	// (0x0005755d) hwr_training_navi_pane_g4_ParamLimits

0x8582,	// (0x0005755d) hwr_training_navi_pane_g4

0x0004,

0xf762,	// (0x0005e73d) hwr_training_navi_pane_g_ParamLimits

0xf762,	// (0x0005e73d) hwr_training_navi_pane_g

0x859c,	// (0x00057577) hwr_training_navi_pane_t1

0x85aa,	// (0x00057585) list_single_hwr_training_instruct_pane_ParamLimits

0x85aa,	// (0x00057585) list_single_hwr_training_instruct_pane

0x2747,	// (0x00051722) list_single_hwr_training_instruct_pane_t1

0x1f3d,	// (0x00050f18) bg_frame_shadow_pane_g1

0x2756,	// (0x00051731) bg_frame_shadow_pane_g2

0x275e,	// (0x00051739) bg_frame_shadow_pane_g3

0x2766,	// (0x00051741) bg_frame_shadow_pane_g4

0x276e,	// (0x00051749) bg_frame_shadow_pane_g5

0x2776,	// (0x00051751) bg_frame_shadow_pane_g6

0x277e,	// (0x00051759) bg_frame_shadow_pane_g7

0xe49c,	// (0x0005d477) bg_frame_shadow_pane_g8

0x0007,

0xf76d,	// (0x0005e748) bg_frame_shadow_pane_g

0x4a51,	// (0x00053a2c) main_video_tele_dialer_pane

0x85cf,	// (0x000575aa) aid_size_cell_video_keypad_ParamLimits

0x85cf,	// (0x000575aa) aid_size_cell_video_keypad

0x85df,	// (0x000575ba) grid_video_dialer_keypad_pane_ParamLimits

0x85df,	// (0x000575ba) grid_video_dialer_keypad_pane

0x8613,	// (0x000575ee) video_down_pane_cp_ParamLimits

0x8613,	// (0x000575ee) video_down_pane_cp

0x863d,	// (0x00057618) cell_video_dialer_keypad_pane_ParamLimits

0x863d,	// (0x00057618) cell_video_dialer_keypad_pane

0x2786,	// (0x00051761) bg_button_pane_cp08_ParamLimits

0x2786,	// (0x00051761) bg_button_pane_cp08

0x8652,	// (0x0005762d) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8652,	// (0x0005762d) cell_video_dialer_keypad_pane_g1

0x2610,	// (0x000515eb) mup3_rocker2_pane_ParamLimits

0x2610,	// (0x000515eb) mup3_rocker2_pane

0xe38f,	// (0x0005d36a) mup3_rocker2_pane_g1

0x745e,	// (0x00056439) main_dialer2_pane

0x4a51,	// (0x00053a2c) main_mp4_pane

0x86a7,	// (0x00057682) main_mp4_pane_g1_ParamLimits

0x86a7,	// (0x00057682) main_mp4_pane_g1

0x86c9,	// (0x000576a4) main_mp4_pane_g2_ParamLimits

0x86c9,	// (0x000576a4) main_mp4_pane_g2

0x86e7,	// (0x000576c2) main_mp4_pane_g3_ParamLimits

0x86e7,	// (0x000576c2) main_mp4_pane_g3

0x8720,	// (0x000576fb) main_mp4_pane_g4_ParamLimits

0x8720,	// (0x000576fb) main_mp4_pane_g4

0x8748,	// (0x00057723) main_mp4_pane_g5_ParamLimits

0x8748,	// (0x00057723) main_mp4_pane_g5

0x0007,

0xf78d,	// (0x0005e768) main_mp4_pane_g_ParamLimits

0xf78d,	// (0x0005e768) main_mp4_pane_g

0x87b0,	// (0x0005778b) main_mp4_pane_t1_ParamLimits

0x87b0,	// (0x0005778b) main_mp4_pane_t1

0x8812,	// (0x000577ed) main_mp4_pane_t2_ParamLimits

0x8812,	// (0x000577ed) main_mp4_pane_t2

0x8876,	// (0x00057851) main_mp4_pane_t3_ParamLimits

0x8876,	// (0x00057851) main_mp4_pane_t3

0x88d4,	// (0x000578af) main_mp4_pane_t4_ParamLimits

0x88d4,	// (0x000578af) main_mp4_pane_t4

0x0003,

0xf79e,	// (0x0005e779) main_mp4_pane_t_ParamLimits

0xf79e,	// (0x0005e779) main_mp4_pane_t

0x8932,	// (0x0005790d) mp4_progress_pane_ParamLimits

0x8932,	// (0x0005790d) mp4_progress_pane

0x8966,	// (0x00057941) mp4_rocker_pane_ParamLimits

0x8966,	// (0x00057941) mp4_rocker_pane

0x27a6,	// (0x00051781) mp4_progress_pane_t1

0x27c5,	// (0x000517a0) mp4_progress_pane_t2

0x0001,

0xf7a7,	// (0x0005e782) mp4_progress_pane_t

0x27e4,	// (0x000517bf) mup_progress_pane_cp04

0x2f8d,	// (0x00051f68) mp4_rocker_pane_g1

0x4a37,	// (0x00053a12) aid_cell_size_keypad2_ParamLimits

0x4a37,	// (0x00053a12) aid_cell_size_keypad2

0x4a37,	// (0x00053a12) dialer2_ne_pane_ParamLimits

0x4a37,	// (0x00053a12) dialer2_ne_pane

0x4a37,	// (0x00053a12) grid_dialer2_keypad_pane_ParamLimits

0x4a37,	// (0x00053a12) grid_dialer2_keypad_pane

0x261c,	// (0x000515f7) bg_popup_call_pane_cp07_ParamLimits

0x261c,	// (0x000515f7) bg_popup_call_pane_cp07

0x897a,	// (0x00057955) dialer2_ne_pane_t1_ParamLimits

0x897a,	// (0x00057955) dialer2_ne_pane_t1

0x89a1,	// (0x0005797c) cell_dialer2_keypad_pane_ParamLimits

0x89a1,	// (0x0005797c) cell_dialer2_keypad_pane

0x1ca4,	// (0x00050c7f) bg_button_pane_pane_cp04_ParamLimits

0x1ca4,	// (0x00050c7f) bg_button_pane_pane_cp04

0xe351,	// (0x0005d32c) cell_dialer2_keypad_pane_g1_ParamLimits

0xe351,	// (0x0005d32c) cell_dialer2_keypad_pane_g1

0x5423,	// (0x000543fe) aid_placing_vt_set_content_ParamLimits

0x5423,	// (0x000543fe) aid_placing_vt_set_content

0x544f,	// (0x0005442a) aid_placing_vt_set_title_ParamLimits

0x544f,	// (0x0005442a) aid_placing_vt_set_title

0x4a51,	// (0x00053a2c) main_image3_pane

0x89ea,	// (0x000579c5) area_side_right_pane_cp01_ParamLimits

0x89ea,	// (0x000579c5) area_side_right_pane_cp01

0x8a17,	// (0x000579f2) main_image3_pane_g1_ParamLimits

0x8a17,	// (0x000579f2) main_image3_pane_g1

0x8a25,	// (0x00057a00) main_image3_pane_g2_ParamLimits

0x8a25,	// (0x00057a00) main_image3_pane_g2

0x8a3e,	// (0x00057a19) main_image3_pane_g3_ParamLimits

0x8a3e,	// (0x00057a19) main_image3_pane_g3

0x8a57,	// (0x00057a32) main_image3_pane_g4_ParamLimits

0x8a57,	// (0x00057a32) main_image3_pane_g4

0x0003,

0xf7b6,	// (0x0005e791) main_image3_pane_g_ParamLimits

0xf7b6,	// (0x0005e791) main_image3_pane_g

0x8a70,	// (0x00057a4b) main_image3_pane_t1_ParamLimits

0x8a70,	// (0x00057a4b) main_image3_pane_t1

0x8a95,	// (0x00057a70) main_image3_pane_t2_ParamLimits

0x8a95,	// (0x00057a70) main_image3_pane_t2

0x8ab4,	// (0x00057a8f) main_image3_pane_t3_ParamLimits

0x8ab4,	// (0x00057a8f) main_image3_pane_t3

0x0003,

0xf7bf,	// (0x0005e79a) main_image3_pane_t_ParamLimits

0xf7bf,	// (0x0005e79a) main_image3_pane_t

0xe343,	// (0x0005d31e) grid_sctrl_middle_pane_cp01_ParamLimits

0xe343,	// (0x0005d31e) grid_sctrl_middle_pane_cp01

0x8b15,	// (0x00057af0) cell_sctrl_middle_pane_cp01_ParamLimits

0x8b15,	// (0x00057af0) cell_sctrl_middle_pane_cp01

0x8b26,	// (0x00057b01) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x8b26,	// (0x00057b01) cell_sctrl_middle_pane_cp01_g1

0x4a51,	// (0x00053a2c) main_call4_pane

0x8b33,	// (0x00057b0e) aid_size_button_call4_ParamLimits

0x8b33,	// (0x00057b0e) aid_size_button_call4

0x8b69,	// (0x00057b44) call4_windows_pane_ParamLimits

0x8b69,	// (0x00057b44) call4_windows_pane

0x8b7e,	// (0x00057b59) grid_call4_button_pane_ParamLimits

0x8b7e,	// (0x00057b59) grid_call4_button_pane

0x8bac,	// (0x00057b87) call4_windows_conf_pane

0x8bc3,	// (0x00057b9e) popup_call4_audio_first_window_ParamLimits

0x8bc3,	// (0x00057b9e) popup_call4_audio_first_window

0x8c13,	// (0x00057bee) popup_call4_audio_second_window_ParamLimits

0x8c13,	// (0x00057bee) popup_call4_audio_second_window

0x8c2c,	// (0x00057c07) popup_call4_audio_wait_window_ParamLimits

0x8c2c,	// (0x00057c07) popup_call4_audio_wait_window

0x8c3a,	// (0x00057c15) cell_call4_button_pane_ParamLimits

0x8c3a,	// (0x00057c15) cell_call4_button_pane

0x8c5d,	// (0x00057c38) bg_button_pane_cp09_ParamLimits

0x8c5d,	// (0x00057c38) bg_button_pane_cp09

0x8c69,	// (0x00057c44) cell_call4_button_pane_g1_ParamLimits

0x8c69,	// (0x00057c44) cell_call4_button_pane_g1

0x8c76,	// (0x00057c51) cell_call4_button_pane_t1_ParamLimits

0x8c76,	// (0x00057c51) cell_call4_button_pane_t1

0x282d,	// (0x00051808) popup_call4_audio_conf_window_ParamLimits

0x282d,	// (0x00051808) popup_call4_audio_conf_window

0x80be,	// (0x00057099) mup3_progress_pane_t1_ParamLimits

0x80dd,	// (0x000570b8) mup3_progress_pane_t2_ParamLimits

0x230f,	// (0x000512ea) mup3_progress_pane_t3_ParamLimits

0xf69e,	// (0x0005e679) mup3_progress_pane_t_ParamLimits

0x232c,	// (0x00051307) mup_progress_pane_cp03_ParamLimits

0x2344,	// (0x0005131f) mup3_control_keys_pane_g4_copy1

0x8966,	// (0x00057941) mp4_rocker2_pane_ParamLimits

0x8966,	// (0x00057941) mp4_rocker2_pane

0x263c,	// (0x00051617) mp4_rocker2_pane_g1

0x263c,	// (0x00051617) mp4_rocker2_pane_g2

0x263c,	// (0x00051617) mp4_rocker2_pane_g3

0x263c,	// (0x00051617) mp4_rocker2_pane_g4

0x263c,	// (0x00051617) mp4_rocker2_pane_g5

0x0004,

0xf7c8,	// (0x0005e7a3) mp4_rocker2_pane_g

0x4a51,	// (0x00053a2c) main_camera4_pane

0x4a51,	// (0x00053a2c) main_video4_pane

0x85ef,	// (0x000575ca) main_video_tele_dialer_pane_t1_ParamLimits

0x85ef,	// (0x000575ca) main_video_tele_dialer_pane_t1

0x8601,	// (0x000575dc) main_video_tele_dialer_pane_t2_ParamLimits

0x8601,	// (0x000575dc) main_video_tele_dialer_pane_t2

0x0001,

0xf77e,	// (0x0005e759) main_video_tele_dialer_pane_t_ParamLimits

0xf77e,	// (0x0005e759) main_video_tele_dialer_pane_t

0x8cd2,	// (0x00057cad) cam4_autofocus_pane_ParamLimits

0x8cd2,	// (0x00057cad) cam4_autofocus_pane

0x8cec,	// (0x00057cc7) cam4_image_uncrop_pane_ParamLimits

0x8cec,	// (0x00057cc7) cam4_image_uncrop_pane

0x8d03,	// (0x00057cde) cam4_indicators_pane_ParamLimits

0x8d03,	// (0x00057cde) cam4_indicators_pane

0x8d1f,	// (0x00057cfa) main_camera4_pane_g1_ParamLimits

0x8d1f,	// (0x00057cfa) main_camera4_pane_g1

0x8d2b,	// (0x00057d06) main_camera4_pane_g2_ParamLimits

0x8d2b,	// (0x00057d06) main_camera4_pane_g2

0x8d2b,	// (0x00057d06) main_camera4_pane_g3_ParamLimits

0x8d2b,	// (0x00057d06) main_camera4_pane_g3

0x8d37,	// (0x00057d12) main_camera4_pane_g4_ParamLimits

0x8d37,	// (0x00057d12) main_camera4_pane_g4

0x8d43,	// (0x00057d1e) main_camera4_pane_g5_ParamLimits

0x8d43,	// (0x00057d1e) main_camera4_pane_g5

0x0005,

0xf7d3,	// (0x0005e7ae) main_camera4_pane_g_ParamLimits

0xf7d3,	// (0x0005e7ae) main_camera4_pane_g

0x8d5d,	// (0x00057d38) main_camera4_pane_t1_ParamLimits

0x8d5d,	// (0x00057d38) main_camera4_pane_t1

0xcd7c,	// (0x0005bd57) bg_tb_trans_pane_cp06

0x8dad,	// (0x00057d88) cam4_indicators_pane_g1

0x8dbe,	// (0x00057d99) cam4_indicators_pane_g2

0x0002,

0xf7ee,	// (0x0005e7c9) cam4_indicators_pane_g

0x8ddc,	// (0x00057db7) cam4_indicators_pane_t1

0x8e06,	// (0x00057de1) main_video4_pane_g1_ParamLimits

0x8e06,	// (0x00057de1) main_video4_pane_g1

0x8e12,	// (0x00057ded) main_video4_pane_g2_ParamLimits

0x8e12,	// (0x00057ded) main_video4_pane_g2

0x8e1e,	// (0x00057df9) main_video4_pane_g3_ParamLimits

0x8e1e,	// (0x00057df9) main_video4_pane_g3

0x8e2a,	// (0x00057e05) main_video4_pane_g4_ParamLimits

0x8e2a,	// (0x00057e05) main_video4_pane_g4

0x0004,

0xf7f5,	// (0x0005e7d0) main_video4_pane_g_ParamLimits

0xf7f5,	// (0x0005e7d0) main_video4_pane_g

0x8e4a,	// (0x00057e25) vid4_indicators_pane_ParamLimits

0x8e4a,	// (0x00057e25) vid4_indicators_pane

0x8e69,	// (0x00057e44) video4_image_uncrop_cif_pane_ParamLimits

0x8e69,	// (0x00057e44) video4_image_uncrop_cif_pane

0x8e78,	// (0x00057e53) video4_image_uncrop_nhd_pane_ParamLimits

0x8e78,	// (0x00057e53) video4_image_uncrop_nhd_pane

0x8cec,	// (0x00057cc7) video4_image_uncrop_vga_pane_ParamLimits

0x8cec,	// (0x00057cc7) video4_image_uncrop_vga_pane

0x7450,	// (0x0005642b) bg_tb_trans_pane_cp07

0x8e8f,	// (0x00057e6a) vid4_indicators_pane_g1

0x8ea3,	// (0x00057e7e) vid4_indicators_pane_g2

0x8eb7,	// (0x00057e92) vid4_indicators_pane_g3

0x0004,

0xf800,	// (0x0005e7db) vid4_indicators_pane_g

0x8ee6,	// (0x00057ec1) vid4_indicators_pane_t1

0x8efd,	// (0x00057ed8) cam4_autofocus_pane_g1

0x8f05,	// (0x00057ee0) cam4_autofocus_pane_g2

0x8f0d,	// (0x00057ee8) cam4_autofocus_pane_g3

0x0002,

0xf80b,	// (0x0005e7e6) cam4_autofocus_pane_g

0x8f15,	// (0x00057ef0) cam4_autofocus_pane_g3_copy1

0x8621,	// (0x000575fc) video_down_pane_cp_t1

0x862f,	// (0x0005760a) video_down_pane_cp_t2

0x0001,

0xf783,	// (0x0005e75e) video_down_pane_cp_t

0x4a37,	// (0x00053a12) popup_vitu2_window_ParamLimits

0x4a37,	// (0x00053a12) popup_vitu2_window

0x8f1d,	// (0x00057ef8) aid_size_cell2_itu2_ParamLimits

0x8f1d,	// (0x00057ef8) aid_size_cell2_itu2

0x8f3f,	// (0x00057f1a) aid_size_cell_itu2_ParamLimits

0x8f3f,	// (0x00057f1a) aid_size_cell_itu2

0x8f83,	// (0x00057f5e) bg_popup_window_pane_cp09_ParamLimits

0x8f83,	// (0x00057f5e) bg_popup_window_pane_cp09

0x8f91,	// (0x00057f6c) field_vitu2_entry_pane_ParamLimits

0x8f91,	// (0x00057f6c) field_vitu2_entry_pane

0x8fb1,	// (0x00057f8c) grid_vitu2_function_pane_ParamLimits

0x8fb1,	// (0x00057f8c) grid_vitu2_function_pane

0x8ff5,	// (0x00057fd0) grid_vitu2_itu_pane_ParamLimits

0x8ff5,	// (0x00057fd0) grid_vitu2_itu_pane

0x906d,	// (0x00058048) cell_vitu2_itu_pane_ParamLimits

0x906d,	// (0x00058048) cell_vitu2_itu_pane

0x9086,	// (0x00058061) cell_vitu2_function_pane_ParamLimits

0x9086,	// (0x00058061) cell_vitu2_function_pane

0x2841,	// (0x0005181c) bg_popup_call_pane_cp08_ParamLimits

0x2841,	// (0x0005181c) bg_popup_call_pane_cp08

0x2858,	// (0x00051833) field_vitu2_entry_pane_g1

0x2864,	// (0x0005183f) field_vitu2_entry_pane_g2

0x0002,

0xf812,	// (0x0005e7ed) field_vitu2_entry_pane_g

0x90c7,	// (0x000580a2) field_vitu2_entry_pane_t1_ParamLimits

0x90c7,	// (0x000580a2) field_vitu2_entry_pane_t1

0x2870,	// (0x0005184b) field_vitu2_entry_pane_t2_ParamLimits

0x2870,	// (0x0005184b) field_vitu2_entry_pane_t2

0x0001,

0xf819,	// (0x0005e7f4) field_vitu2_entry_pane_t_ParamLimits

0xf819,	// (0x0005e7f4) field_vitu2_entry_pane_t

0x778c,	// (0x00056767) bg_button_pane_cp010_ParamLimits

0x778c,	// (0x00056767) bg_button_pane_cp010

0x90fa,	// (0x000580d5) cell_vitu2_itu_pane_g1

0x9120,	// (0x000580fb) cell_vitu2_itu_pane_t1_ParamLimits

0x9120,	// (0x000580fb) cell_vitu2_itu_pane_t1

0x916c,	// (0x00058147) cell_vitu2_itu_pane_t2_ParamLimits

0x916c,	// (0x00058147) cell_vitu2_itu_pane_t2

0x0002,

0xf823,	// (0x0005e7fe) cell_vitu2_itu_pane_t_ParamLimits

0xf823,	// (0x0005e7fe) cell_vitu2_itu_pane_t

0x7450,	// (0x0005642b) bg_button_pane_cp011

0x9234,	// (0x0005820f) cell_vitu2_function_pane_g1

0x4a51,	// (0x00053a2c) main_myfav_hc_pane

0x8af6,	// (0x00057ad1) popup_image3_note_pane_ParamLimits

0x8af6,	// (0x00057ad1) popup_image3_note_pane

0x8b04,	// (0x00057adf) popup_image3_tool_bar_pane_ParamLimits

0x8b04,	// (0x00057adf) popup_image3_tool_bar_pane

0x91e2,	// (0x000581bd) cell_vitu2_itu_pane_t3_ParamLimits

0x91e2,	// (0x000581bd) cell_vitu2_itu_pane_t3

0xdb99,	// (0x0005cb74) bg_popup_trans_pane

0x2895,	// (0x00051870) grid_image3_tool_bar_pane

0x289f,	// (0x0005187a) bg_popup_trans_pane_g1

0xe827,	// (0x0005d802) bg_popup_trans_pane_g2

0x28a7,	// (0x00051882) bg_popup_trans_pane_g3

0x28af,	// (0x0005188a) bg_popup_trans_pane_g4

0x28b7,	// (0x00051892) bg_popup_trans_pane_g5

0x28bf,	// (0x0005189a) bg_popup_trans_pane_g6

0x28c7,	// (0x000518a2) bg_popup_trans_pane_g7

0x28cf,	// (0x000518aa) bg_popup_trans_pane_g8

0xe807,	// (0x0005d7e2) bg_popup_trans_pane_g9

0x0008,

0xf82a,	// (0x0005e805) bg_popup_trans_pane_g

0x28d7,	// (0x000518b2) cell_image3_tool_bar_pane_ParamLimits

0x28d7,	// (0x000518b2) cell_image3_tool_bar_pane

0xe38f,	// (0x0005d36a) cell_image3_tool_bar_pane_g1

0xdb99,	// (0x0005cb74) bg_popup_trans_pane_cp1

0x28eb,	// (0x000518c6) popup_image3_note_pane_t1

0x28f9,	// (0x000518d4) popup_image3_note_pane_t2

0x2907,	// (0x000518e2) popup_image3_note_pane_t3

0x0002,

0xf83d,	// (0x0005e818) popup_image3_note_pane_t

0x2915,	// (0x000518f0) popup_image3_note_pane_t3_copy1

0x9248,	// (0x00058223) bg_myfav_hc_instruction_pane_ParamLimits

0x9248,	// (0x00058223) bg_myfav_hc_instruction_pane

0x9260,	// (0x0005823b) cell_myfav_contact_pane_ParamLimits

0x9260,	// (0x0005823b) cell_myfav_contact_pane

0x927a,	// (0x00058255) cell_myfav_contact_pane_cp1_ParamLimits

0x927a,	// (0x00058255) cell_myfav_contact_pane_cp1

0x9292,	// (0x0005826d) cell_myfav_contact_pane_cp2_ParamLimits

0x9292,	// (0x0005826d) cell_myfav_contact_pane_cp2

0x92aa,	// (0x00058285) cell_myfav_contact_pane_cp3_ParamLimits

0x92aa,	// (0x00058285) cell_myfav_contact_pane_cp3

0x92c1,	// (0x0005829c) cell_myfav_contact_pane_cp4_ParamLimits

0x92c1,	// (0x0005829c) cell_myfav_contact_pane_cp4

0x92d7,	// (0x000582b2) cell_myfav_contact_pane_cp5_ParamLimits

0x92d7,	// (0x000582b2) cell_myfav_contact_pane_cp5

0x92eb,	// (0x000582c6) cell_myfav_contact_pane_cp6_ParamLimits

0x92eb,	// (0x000582c6) cell_myfav_contact_pane_cp6

0x92ff,	// (0x000582da) cell_myfav_contact_pane_cp7_ParamLimits

0x92ff,	// (0x000582da) cell_myfav_contact_pane_cp7

0x2923,	// (0x000518fe) listscroll_gen_pane_cp05

0x9317,	// (0x000582f2) main_myfav_hc_pane_g1_ParamLimits

0x9317,	// (0x000582f2) main_myfav_hc_pane_g1

0x932d,	// (0x00058308) main_myfav_hc_pane_g2_ParamLimits

0x932d,	// (0x00058308) main_myfav_hc_pane_g2

0x0002,

0xf844,	// (0x0005e81f) main_myfav_hc_pane_g_ParamLimits

0xf844,	// (0x0005e81f) main_myfav_hc_pane_g

0x935b,	// (0x00058336) main_myfav_hc_pane_t1_ParamLimits

0x935b,	// (0x00058336) main_myfav_hc_pane_t1

0x292c,	// (0x00051907) main_myfav_hc_pane_t2_ParamLimits

0x292c,	// (0x00051907) main_myfav_hc_pane_t2

0x293e,	// (0x00051919) main_myfav_hc_pane_t3_ParamLimits

0x293e,	// (0x00051919) main_myfav_hc_pane_t3

0x9372,	// (0x0005834d) main_myfav_hc_pane_t4_ParamLimits

0x9372,	// (0x0005834d) main_myfav_hc_pane_t4

0x0004,

0xf84b,	// (0x0005e826) main_myfav_hc_pane_t_ParamLimits

0xf84b,	// (0x0005e826) main_myfav_hc_pane_t

0xe38f,	// (0x0005d36a) bg_myfav_hc_instruction_pane_g1

0x2950,	// (0x0005192b) cell_myfav_contact_pane_g1_ParamLimits

0x2950,	// (0x0005192b) cell_myfav_contact_pane_g1

0x2950,	// (0x0005192b) cell_myfav_contact_pane_g2_ParamLimits

0x2950,	// (0x0005192b) cell_myfav_contact_pane_g2

0x295c,	// (0x00051937) cell_myfav_contact_pane_g3_ParamLimits

0x295c,	// (0x00051937) cell_myfav_contact_pane_g3

0xe35f,	// (0x0005d33a) cell_myfav_contact_pane_g4_ParamLimits

0xe35f,	// (0x0005d33a) cell_myfav_contact_pane_g4

0x2969,	// (0x00051944) cell_myfav_contact_pane_g5_ParamLimits

0x2969,	// (0x00051944) cell_myfav_contact_pane_g5

0x0004,

0xf856,	// (0x0005e831) cell_myfav_contact_pane_g_ParamLimits

0xf856,	// (0x0005e831) cell_myfav_contact_pane_g

0x9343,	// (0x0005831e) main_myfav_hc_pane_g3_ParamLimits

0x9343,	// (0x0005831e) main_myfav_hc_pane_g3

0x4770,	// (0x0005374b) popup_adpt_find_window

0x939c,	// (0x00058377) afind_page_pane_ParamLimits

0x939c,	// (0x00058377) afind_page_pane

0x93a9,	// (0x00058384) aid_size_cell_afind_ParamLimits

0x93a9,	// (0x00058384) aid_size_cell_afind

0x93c3,	// (0x0005839e) bg_popup_sub_pane_cp09_ParamLimits

0x93c3,	// (0x0005839e) bg_popup_sub_pane_cp09

0x93d0,	// (0x000583ab) find_pane_cp01_ParamLimits

0x93d0,	// (0x000583ab) find_pane_cp01

0x2975,	// (0x00051950) grid_afind_control_pane_ParamLimits

0x2975,	// (0x00051950) grid_afind_control_pane

0x93dd,	// (0x000583b8) grid_afind_pane_ParamLimits

0x93dd,	// (0x000583b8) grid_afind_pane

0x93f9,	// (0x000583d4) cell_afind_pane_ParamLimits

0x93f9,	// (0x000583d4) cell_afind_pane

0xe38f,	// (0x0005d36a) afind_page_pane_g1

0x9441,	// (0x0005841c) afind_page_pane_g2

0x9449,	// (0x00058424) afind_page_pane_g3

0x0002,

0xf861,	// (0x0005e83c) afind_page_pane_g

0x9451,	// (0x0005842c) afind_page_pane_t1

0x299b,	// (0x00051976) cell_afind_grid_control_pane_ParamLimits

0x299b,	// (0x00051976) cell_afind_grid_control_pane

0x29aa,	// (0x00051985) bg_button_pane_cp69_ParamLimits

0x29aa,	// (0x00051985) bg_button_pane_cp69

0x945f,	// (0x0005843a) cell_afind_pane_g1_ParamLimits

0x945f,	// (0x0005843a) cell_afind_pane_g1

0x946c,	// (0x00058447) cell_afind_pane_t1_ParamLimits

0x946c,	// (0x00058447) cell_afind_pane_t1

0x29b6,	// (0x00051991) bg_button_pane_cp72

0x29be,	// (0x00051999) cell_afind_grid_control_pane_g1

0x6fff,	// (0x00055fda) aid_image_placing_area_ParamLimits

0x6fff,	// (0x00055fda) aid_image_placing_area

0xe351,	// (0x0005d32c) field_vitu_entry_pane_g1_ParamLimits

0xe351,	// (0x0005d32c) field_vitu_entry_pane_g1

0xe351,	// (0x0005d32c) field_vitu_entry_pane_g2_ParamLimits

0xe351,	// (0x0005d32c) field_vitu_entry_pane_g2

0x0001,

0xf199,	// (0x0005e174) field_vitu_entry_pane_g_ParamLimits

0xf199,	// (0x0005e174) field_vitu_entry_pane_g

0x264c,	// (0x00051627) cell_vitu_itu_pane_g1_ParamLimits

0x25f3,	// (0x000515ce) cell_vitu_itu_pane_t3_ParamLimits

0x25f3,	// (0x000515ce) cell_vitu_itu_pane_t3

0x27a6,	// (0x00051781) mp4_progress_pane_t1_ParamLimits

0x27c5,	// (0x000517a0) mp4_progress_pane_t2_ParamLimits

0xf7a7,	// (0x0005e782) mp4_progress_pane_t_ParamLimits

0x27e4,	// (0x000517bf) mup_progress_pane_cp04_ParamLimits

0x9386,	// (0x00058361) main_myfav_hc_pane_t5_ParamLimits

0x9386,	// (0x00058361) main_myfav_hc_pane_t5

0x486c,	// (0x00053847) aid_zoom_text_primary

0x4770,	// (0x0005374b) popup_adpt_find_window_ParamLimits

0x7450,	// (0x0005642b) main_cam_set_pane

0x8d11,	// (0x00057cec) cam4_zoom_pane_ParamLimits

0x8d11,	// (0x00057cec) cam4_zoom_pane

0x947e,	// (0x00058459) main_cam_set_pane_g1_ParamLimits

0x947e,	// (0x00058459) main_cam_set_pane_g1

0x948c,	// (0x00058467) main_cam_set_pane_g2_ParamLimits

0x948c,	// (0x00058467) main_cam_set_pane_g2

0x0001,

0xf868,	// (0x0005e843) main_cam_set_pane_g_ParamLimits

0xf868,	// (0x0005e843) main_cam_set_pane_g

0x9498,	// (0x00058473) main_cam_set_pane_t1_ParamLimits

0x9498,	// (0x00058473) main_cam_set_pane_t1

0x94b4,	// (0x0005848f) main_cset_listscroll_pane_ParamLimits

0x94b4,	// (0x0005848f) main_cset_listscroll_pane

0x94e6,	// (0x000584c1) main_cset_slider_pane_ParamLimits

0x94e6,	// (0x000584c1) main_cset_slider_pane

0x29cf,	// (0x000519aa) main_cset_list_pane_ParamLimits

0x29cf,	// (0x000519aa) main_cset_list_pane

0x29df,	// (0x000519ba) scroll_pane_cp028

0x9505,	// (0x000584e0) aid_area_touch_slider

0x9521,	// (0x000584fc) cset_slider_pane

0x9544,	// (0x0005851f) main_cset_slider_pane_g1

0x9559,	// (0x00058534) main_cset_slider_pane_g2

0x0011,

0xf86d,	// (0x0005e848) main_cset_slider_pane_g

0x2a18,	// (0x000519f3) main_cset_slider_pane_t1

0x961b,	// (0x000585f6) main_cset_slider_pane_t2

0x9635,	// (0x00058610) main_cset_slider_pane_t3

0x964f,	// (0x0005862a) main_cset_slider_pane_t4

0x9669,	// (0x00058644) main_cset_slider_pane_t5

0x9687,	// (0x00058662) main_cset_slider_pane_t6

0x969e,	// (0x00058679) main_cset_slider_pane_t7

0x000e,

0xf892,	// (0x0005e86d) main_cset_slider_pane_t

0x97aa,	// (0x00058785) cset_list_set_pane_ParamLimits

0x97aa,	// (0x00058785) cset_list_set_pane

0x2ab2,	// (0x00051a8d) aid_position_infowindow_above

0x2aba,	// (0x00051a95) aid_position_infowindow_below

0x1869,	// (0x00050844) cset_list_set_pane_g1_ParamLimits

0x1869,	// (0x00050844) cset_list_set_pane_g1

0x1875,	// (0x00050850) cset_list_set_pane_g3_ParamLimits

0x1875,	// (0x00050850) cset_list_set_pane_g3

0x0001,

0xf8b1,	// (0x0005e88c) cset_list_set_pane_g_ParamLimits

0xf8b1,	// (0x0005e88c) cset_list_set_pane_g

0x1884,	// (0x0005085f) cset_list_set_pane_t1_ParamLimits

0x1884,	// (0x0005085f) cset_list_set_pane_t1

0xdbd6,	// (0x0005cbb1) list_highlight_pane_cp021_ParamLimits

0xdbd6,	// (0x0005cbb1) list_highlight_pane_cp021

0x0129,	// (0x0004f104) cset_slider_pane_g1

0x013b,	// (0x0004f116) cset_slider_pane_g2

0x0132,	// (0x0004f10d) cset_slider_pane_g3

0x0002,

0xf8b6,	// (0x0005e891) cset_slider_pane_g

0x97c0,	// (0x0005879b) aid_area_touch_cam4_zoom

0x97c8,	// (0x000587a3) cam4_zoom_cont_pane

0x97d0,	// (0x000587ab) cam4_zoom_pane_g1

0x97d8,	// (0x000587b3) cam4_zoom_pane_g2

0x97e0,	// (0x000587bb) cam4_zoom_pane_g3

0x0002,

0xf8bd,	// (0x0005e898) cam4_zoom_pane_g

0x97e8,	// (0x000587c3) cam4_zoom_cont_pane_g1

0x97f1,	// (0x000587cc) cam4_zoom_cont_pane_g2

0x97fa,	// (0x000587d5) cam4_zoom_cont_pane_g3

0x0002,

0xf8c4,	// (0x0005e89f) cam4_zoom_cont_pane_g

0x8b4d,	// (0x00057b28) call4_image_pane_ParamLimits

0x8b4d,	// (0x00057b28) call4_image_pane

0x8bac,	// (0x00057b87) call4_windows_conf_pane_ParamLimits

0x8bf1,	// (0x00057bcc) popup_call4_audio_in_window_ParamLimits

0x8bf1,	// (0x00057bcc) popup_call4_audio_in_window

0xdb99,	// (0x0005cb74) bg_popup_call2_act_pane_cp02

0x2825,	// (0x00051800) call4_list_conf_pane

0xe38f,	// (0x0005d36a) call4_image_pane_g1

0xe38f,	// (0x0005d36a) call4_image_pane_g2

0x0001,

0xf08c,	// (0x0005e067) call4_image_pane_g

0x2add,	// (0x00051ab8) list_single_graphic_popup_conf4_pane_ParamLimits

0x2add,	// (0x00051ab8) list_single_graphic_popup_conf4_pane

0xdb99,	// (0x0005cb74) list_highlight_pane_cp022

0x2af0,	// (0x00051acb) list_single_graphic_popup_conf4_pane_g1

0xed06,	// (0x0005dce1) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8cb,	// (0x0005e8a6) list_single_graphic_popup_conf4_pane_g

0x2af8,	// (0x00051ad3) list_single_graphic_popup_conf4_pane_t1

0x55b3,	// (0x0005458e) popup_vtel_slider_window_ParamLimits

0x55b3,	// (0x0005458e) popup_vtel_slider_window

0x27f7,	// (0x000517d2) dialer2_ne_pane_t2_ParamLimits

0x27f7,	// (0x000517d2) dialer2_ne_pane_t2

0x0001,

0xf7ac,	// (0x0005e787) dialer2_ne_pane_t_ParamLimits

0xf7ac,	// (0x0005e787) dialer2_ne_pane_t

0xdbd6,	// (0x0005cbb1) bg_popup_sub_pane_cp010_ParamLimits

0xdbd6,	// (0x0005cbb1) bg_popup_sub_pane_cp010

0x9803,	// (0x000587de) popup_vtel_slider_window_g1_ParamLimits

0x9803,	// (0x000587de) popup_vtel_slider_window_g1

0x980f,	// (0x000587ea) popup_vtel_slider_window_g2_ParamLimits

0x980f,	// (0x000587ea) popup_vtel_slider_window_g2

0x0003,

0xf8d0,	// (0x0005e8ab) popup_vtel_slider_window_g_ParamLimits

0xf8d0,	// (0x0005e8ab) popup_vtel_slider_window_g

0x9857,	// (0x00058832) vtel_slider_pane_ParamLimits

0x9857,	// (0x00058832) vtel_slider_pane

0x9866,	// (0x00058841) vtel_slider_pane_g1_ParamLimits

0x9866,	// (0x00058841) vtel_slider_pane_g1

0x9873,	// (0x0005884e) vtel_slider_pane_g2_ParamLimits

0x9873,	// (0x0005884e) vtel_slider_pane_g2

0x9880,	// (0x0005885b) vtel_slider_pane_g3_ParamLimits

0x9880,	// (0x0005885b) vtel_slider_pane_g3

0x9866,	// (0x00058841) vtel_slider_pane_g4_ParamLimits

0x9866,	// (0x00058841) vtel_slider_pane_g4

0x988d,	// (0x00058868) vtel_slider_pane_g5_ParamLimits

0x988d,	// (0x00058868) vtel_slider_pane_g5

0x0004,

0xf8d9,	// (0x0005e8b4) vtel_slider_pane_g_ParamLimits

0xf8d9,	// (0x0005e8b4) vtel_slider_pane_g

0x7450,	// (0x0005642b) main_gallery2_pane

0x8f65,	// (0x00057f40) aid_size_row_itut2_dropdow_list_ParamLimits

0x8f65,	// (0x00057f40) aid_size_row_itut2_dropdow_list

0x8fd3,	// (0x00057fae) grid_vitu2_function_top_pane_ParamLimits

0x8fd3,	// (0x00057fae) grid_vitu2_function_top_pane

0x902d,	// (0x00058008) popup_vitu2_dropdown_list_window_ParamLimits

0x902d,	// (0x00058008) popup_vitu2_dropdown_list_window

0x904b,	// (0x00058026) popup_vitu2_match_list_window

0x989a,	// (0x00058875) cell_vitu2_function_top_pane_ParamLimits

0x989a,	// (0x00058875) cell_vitu2_function_top_pane

0x98b4,	// (0x0005888f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x98b4,	// (0x0005888f) cell_vitu2_function_top_pane_cp01

0x98d0,	// (0x000588ab) cell_vitu2_function_top_wide_pane_ParamLimits

0x98d0,	// (0x000588ab) cell_vitu2_function_top_wide_pane

0x7450,	// (0x0005642b) bg_button_pane_cp012

0x98ee,	// (0x000588c9) cell_vitu2_function_top_pane_g1

0x9902,	// (0x000588dd) bg_button_pane_cp013_ParamLimits

0x9902,	// (0x000588dd) bg_button_pane_cp013

0x991e,	// (0x000588f9) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x991e,	// (0x000588f9) cell_vitu2_function_top_wide_pane_g1

0x4a37,	// (0x00053a12) bg_popup_sub_pane_cp20

0x9936,	// (0x00058911) list_vitu2_match_list_pane

0x289f,	// (0x0005187a) bg_popup_sub_pane_cp20_g1

0x28a7,	// (0x00051882) bg_popup_sub_pane_cp20_g2

0xe827,	// (0x0005d802) bg_popup_sub_pane_cp20_g3

0x28af,	// (0x0005188a) bg_popup_sub_pane_cp20_g4

0xe807,	// (0x0005d7e2) bg_popup_sub_pane_cp20_g5

0x2b0e,	// (0x00051ae9) bg_popup_sub_pane_cp20_g6

0x28bf,	// (0x0005189a) bg_popup_sub_pane_cp20_g7

0x28c7,	// (0x000518a2) bg_popup_sub_pane_cp20_g8

0x28cf,	// (0x000518aa) bg_popup_sub_pane_cp20_g9

0x0008,

0xf8e4,	// (0x0005e8bf) bg_popup_sub_pane_cp20_g

0x994e,	// (0x00058929) list_vitu2_match_list_item_pane_ParamLimits

0x994e,	// (0x00058929) list_vitu2_match_list_item_pane

0x9960,	// (0x0005893b) list_vitu2_match_list_item_pane_t1

0x4a51,	// (0x00053a2c) bg_popup_sub_pane_cp21

0xe60e,	// (0x0005d5e9) grid_vitu2_dropdown_list_pane

0x996e,	// (0x00058949) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x996e,	// (0x00058949) cell_vitu2_dropdown_list_char_pane

0x9990,	// (0x0005896b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x9990,	// (0x0005896b) cell_vitu2_dropdown_list_ctrl_pane

0x2b28,	// (0x00051b03) cell_vitu2_dropdown_list_char_pane_g1

0x2b1f,	// (0x00051afa) cell_vitu2_dropdown_list_char_pane_g2

0x2b16,	// (0x00051af1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf8f7,	// (0x0005e8d2) cell_vitu2_dropdown_list_char_pane_g

0x99b8,	// (0x00058993) cell_vitu2_dropdown_list_char_pane_t1

0x99c6,	// (0x000589a1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x99c6,	// (0x000589a1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x99d3,	// (0x000589ae) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x99d3,	// (0x000589ae) cell_vitu2_dropdown_list_ctrl_pane_g2

0x99e0,	// (0x000589bb) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x99e0,	// (0x000589bb) cell_vitu2_dropdown_list_ctrl_pane_g3

0x99ed,	// (0x000589c8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x99ed,	// (0x000589c8) cell_vitu2_dropdown_list_ctrl_pane_g4

0xcd7c,	// (0x0005bd57) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xcd7c,	// (0x0005bd57) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf8fe,	// (0x0005e8d9) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf8fe,	// (0x0005e8d9) cell_vitu2_dropdown_list_ctrl_pane_g

0x9a09,	// (0x000589e4) aid_size_cell_gallery2_ParamLimits

0x9a09,	// (0x000589e4) aid_size_cell_gallery2

0x9a23,	// (0x000589fe) grid_gallery2_pane_ParamLimits

0x9a23,	// (0x000589fe) grid_gallery2_pane

0x9a3a,	// (0x00058a15) scroll_pane_cp029_ParamLimits

0x9a3a,	// (0x00058a15) scroll_pane_cp029

0x9a4a,	// (0x00058a25) cell_gallery2_pane_ParamLimits

0x9a4a,	// (0x00058a25) cell_gallery2_pane

0x2b31,	// (0x00051b0c) cell_gallery2_pane_g2

0xcd8a,	// (0x0005bd65) cell_gallery2_pane_g3

0x2b39,	// (0x00051b14) cell_gallery2_pane_g4

0x2b41,	// (0x00051b1c) cell_gallery2_pane_g5

0xe60e,	// (0x0005d5e9) grid_highlight_pane_cp10

0x904b,	// (0x00058026) popup_vitu2_match_list_window_ParamLimits

0x905d,	// (0x00058038) popup_vitu2_query_window_ParamLimits

0x905d,	// (0x00058038) popup_vitu2_query_window

0x4a51,	// (0x00053a2c) bg_vitu2_candi_button_pane

0x2b28,	// (0x00051b03) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2b1f,	// (0x00051afa) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2b16,	// (0x00051af1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x9a9f,	// (0x00058a7a) bg_button_pane_cp015

0x9ab4,	// (0x00058a8f) bg_button_pane_cp016

0x9ac0,	// (0x00058a9b) bg_button_pane_cp017

0x00b9,	// (0x0004f094) bg_popup_sub_pane_cp22

0x2b49,	// (0x00051b24) popup_vitu2_query_window_g1

0x9b00,	// (0x00058adb) popup_vitu2_query_window_g2

0x0002,

0xf909,	// (0x0005e8e4) popup_vitu2_query_window_g

0x9b24,	// (0x00058aff) popup_vitu2_query_window_t1_ParamLimits

0x9b24,	// (0x00058aff) popup_vitu2_query_window_t1

0x9b57,	// (0x00058b32) popup_vitu2_query_window_t2_ParamLimits

0x9b57,	// (0x00058b32) popup_vitu2_query_window_t2

0x9b69,	// (0x00058b44) popup_vitu2_query_window_t3_ParamLimits

0x9b69,	// (0x00058b44) popup_vitu2_query_window_t3

0x9b91,	// (0x00058b6c) popup_vitu2_query_window_t4_ParamLimits

0x9b91,	// (0x00058b6c) popup_vitu2_query_window_t4

0x9ba5,	// (0x00058b80) popup_vitu2_query_window_t5_ParamLimits

0x9ba5,	// (0x00058b80) popup_vitu2_query_window_t5

0x0006,

0xf910,	// (0x0005e8eb) popup_vitu2_query_window_t_ParamLimits

0xf910,	// (0x0005e8eb) popup_vitu2_query_window_t

0x29c7,	// (0x000519a2) main_cset_text_pane

0x9505,	// (0x000584e0) aid_area_touch_slider_ParamLimits

0x9521,	// (0x000584fc) cset_slider_pane_ParamLimits

0x9544,	// (0x0005851f) main_cset_slider_pane_g1_ParamLimits

0x9559,	// (0x00058534) main_cset_slider_pane_g2_ParamLimits

0x29e8,	// (0x000519c3) main_cset_slider_pane_g3_ParamLimits

0x29e8,	// (0x000519c3) main_cset_slider_pane_g3

0x956e,	// (0x00058549) main_cset_slider_pane_g4_ParamLimits

0x956e,	// (0x00058549) main_cset_slider_pane_g4

0x957d,	// (0x00058558) main_cset_slider_pane_g5_ParamLimits

0x957d,	// (0x00058558) main_cset_slider_pane_g5

0x958b,	// (0x00058566) main_cset_slider_pane_g6_ParamLimits

0x958b,	// (0x00058566) main_cset_slider_pane_g6

0xf86d,	// (0x0005e848) main_cset_slider_pane_g_ParamLimits

0x2a18,	// (0x000519f3) main_cset_slider_pane_t1_ParamLimits

0x961b,	// (0x000585f6) main_cset_slider_pane_t2_ParamLimits

0x9635,	// (0x00058610) main_cset_slider_pane_t3_ParamLimits

0x964f,	// (0x0005862a) main_cset_slider_pane_t4_ParamLimits

0x9669,	// (0x00058644) main_cset_slider_pane_t5_ParamLimits

0x9687,	// (0x00058662) main_cset_slider_pane_t6_ParamLimits

0x969e,	// (0x00058679) main_cset_slider_pane_t7_ParamLimits

0x96cc,	// (0x000586a7) main_cset_slider_pane_t8_ParamLimits

0x96cc,	// (0x000586a7) main_cset_slider_pane_t8

0x96f4,	// (0x000586cf) main_cset_slider_pane_t9_ParamLimits

0x96f4,	// (0x000586cf) main_cset_slider_pane_t9

0x971c,	// (0x000586f7) main_cset_slider_pane_t10_ParamLimits

0x971c,	// (0x000586f7) main_cset_slider_pane_t10

0x9744,	// (0x0005871f) main_cset_slider_pane_t11_ParamLimits

0x9744,	// (0x0005871f) main_cset_slider_pane_t11

0x976e,	// (0x00058749) main_cset_slider_pane_t12_ParamLimits

0x976e,	// (0x00058749) main_cset_slider_pane_t12

0x978b,	// (0x00058766) main_cset_slider_pane_t13_ParamLimits

0x978b,	// (0x00058766) main_cset_slider_pane_t13

0xf892,	// (0x0005e86d) main_cset_slider_pane_t_ParamLimits

0xdb99,	// (0x0005cb74) bg_popup_sub_pane_cp011

0x2b55,	// (0x00051b30) main_cset_text_pane_g1

0x2b5d,	// (0x00051b38) main_cset_text_pane_t1

0x2b6b,	// (0x00051b46) main_cset_text_pane_t2

0x2b79,	// (0x00051b54) main_cset_text_pane_t3

0x2b87,	// (0x00051b62) main_cset_text_pane_t4

0x2b95,	// (0x00051b70) main_cset_text_pane_t5

0x2ba3,	// (0x00051b7e) main_cset_text_pane_t6

0x2bb1,	// (0x00051b8c) main_cset_text_pane_t7

0x0006,

0xf91f,	// (0x0005e8fa) main_cset_text_pane_t

0x4a51,	// (0x00053a2c) main_cam4_burst_pane

0x4a51,	// (0x00053a2c) main_cam5_pane

0x2989,	// (0x00051964) bg_button_pane_cp019

0x2992,	// (0x0005196d) bg_button_pane_cp020

0x29f4,	// (0x000519cf) main_cset_slider_pane_g7_ParamLimits

0x29f4,	// (0x000519cf) main_cset_slider_pane_g7

0x2a00,	// (0x000519db) main_cset_slider_pane_g8_ParamLimits

0x2a00,	// (0x000519db) main_cset_slider_pane_g8

0x959f,	// (0x0005857a) main_cset_slider_pane_g9_ParamLimits

0x959f,	// (0x0005857a) main_cset_slider_pane_g9

0x95ab,	// (0x00058586) main_cset_slider_pane_g10_ParamLimits

0x95ab,	// (0x00058586) main_cset_slider_pane_g10

0x95b7,	// (0x00058592) main_cset_slider_pane_g11_ParamLimits

0x95b7,	// (0x00058592) main_cset_slider_pane_g11

0x95c3,	// (0x0005859e) main_cset_slider_pane_g12_ParamLimits

0x95c3,	// (0x0005859e) main_cset_slider_pane_g12

0x95cf,	// (0x000585aa) main_cset_slider_pane_g13_ParamLimits

0x95cf,	// (0x000585aa) main_cset_slider_pane_g13

0x95db,	// (0x000585b6) main_cset_slider_pane_g14_ParamLimits

0x95db,	// (0x000585b6) main_cset_slider_pane_g14

0x95e7,	// (0x000585c2) main_cset_slider_pane_g15_ParamLimits

0x95e7,	// (0x000585c2) main_cset_slider_pane_g15

0x2a40,	// (0x00051a1b) main_cset_slider_pane_t14_ParamLimits

0x2a40,	// (0x00051a1b) main_cset_slider_pane_t14

0x2a79,	// (0x00051a54) main_cset_slider_pane_t15_ParamLimits

0x2a79,	// (0x00051a54) main_cset_slider_pane_t15

0x9c0f,	// (0x00058bea) aid_cam4_burst_size_cell_ParamLimits

0x9c0f,	// (0x00058bea) aid_cam4_burst_size_cell

0x9c2b,	// (0x00058c06) grid_cam4_burst_pane_ParamLimits

0x9c2b,	// (0x00058c06) grid_cam4_burst_pane

0x9c5b,	// (0x00058c36) linegrid_cam4_burst_pane_ParamLimits

0x9c5b,	// (0x00058c36) linegrid_cam4_burst_pane

0x9c7b,	// (0x00058c56) scroll_pane_cp30_ParamLimits

0x9c7b,	// (0x00058c56) scroll_pane_cp30

0x9c87,	// (0x00058c62) cell_cam4_burst_pane_ParamLimits

0x9c87,	// (0x00058c62) cell_cam4_burst_pane

0x2bbf,	// (0x00051b9a) linegrid_cam4_burst_pane_g1_ParamLimits

0x2bbf,	// (0x00051b9a) linegrid_cam4_burst_pane_g1

0x9cc3,	// (0x00058c9e) linegrid_cam4_burst_pane_g2_ParamLimits

0x9cc3,	// (0x00058c9e) linegrid_cam4_burst_pane_g2

0x2bcc,	// (0x00051ba7) linegrid_cam4_burst_pane_g3_ParamLimits

0x2bcc,	// (0x00051ba7) linegrid_cam4_burst_pane_g3

0x0002,

0xf92e,	// (0x0005e909) linegrid_cam4_burst_pane_g_ParamLimits

0xf92e,	// (0x0005e909) linegrid_cam4_burst_pane_g

0x9cd4,	// (0x00058caf) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9cd4,	// (0x00058caf) linegrid_cam4_burst_pane_g3_copy1

0x2bd9,	// (0x00051bb4) linegrid_cam4_burst_pane_g4_ParamLimits

0x2bd9,	// (0x00051bb4) linegrid_cam4_burst_pane_g4

0x9cee,	// (0x00058cc9) linegrid_cam4_burst_pane_g5_ParamLimits

0x9cee,	// (0x00058cc9) linegrid_cam4_burst_pane_g5

0x9cff,	// (0x00058cda) linegrid_cam4_burst_pane_g6_ParamLimits

0x9cff,	// (0x00058cda) linegrid_cam4_burst_pane_g6

0x2be6,	// (0x00051bc1) linegrid_cam4_burst_pane_g7_ParamLimits

0x2be6,	// (0x00051bc1) linegrid_cam4_burst_pane_g7

0x9d10,	// (0x00058ceb) cell_cam4_burst_pane_g1

0x2bff,	// (0x00051bda) main_cam5_pane_t1_ParamLimits

0x2bff,	// (0x00051bda) main_cam5_pane_t1

0x2c11,	// (0x00051bec) main_cam5_pane_t2_ParamLimits

0x2c11,	// (0x00051bec) main_cam5_pane_t2

0x2c23,	// (0x00051bfe) main_cam5_pane_t3_ParamLimits

0x2c23,	// (0x00051bfe) main_cam5_pane_t3

0x2c35,	// (0x00051c10) main_cam5_pane_t4_ParamLimits

0x2c35,	// (0x00051c10) main_cam5_pane_t4

0x2c4d,	// (0x00051c28) main_cam5_pane_t5_ParamLimits

0x2c4d,	// (0x00051c28) main_cam5_pane_t5

0x2c61,	// (0x00051c3c) main_cam5_pane_t6_ParamLimits

0x2c61,	// (0x00051c3c) main_cam5_pane_t6

0x2c75,	// (0x00051c50) main_cam5_pane_t7_ParamLimits

0x2c75,	// (0x00051c50) main_cam5_pane_t7

0x2c87,	// (0x00051c62) main_cam5_pane_t8_ParamLimits

0x2c87,	// (0x00051c62) main_cam5_pane_t8

0x2ca3,	// (0x00051c7e) main_cam5_pane_t9_ParamLimits

0x2ca3,	// (0x00051c7e) main_cam5_pane_t9

0x2cb5,	// (0x00051c90) main_cam5_pane_t10_ParamLimits

0x2cb5,	// (0x00051c90) main_cam5_pane_t10

0x2cc7,	// (0x00051ca2) main_cam5_pane_t11_ParamLimits

0x2cc7,	// (0x00051ca2) main_cam5_pane_t11

0x2cd9,	// (0x00051cb4) main_cam5_pane_t12_ParamLimits

0x2cd9,	// (0x00051cb4) main_cam5_pane_t12

0x2cee,	// (0x00051cc9) main_cam5_pane_t13_ParamLimits

0x2cee,	// (0x00051cc9) main_cam5_pane_t13

0x000c,

0xf93a,	// (0x0005e915) main_cam5_pane_t_ParamLimits

0xf93a,	// (0x0005e915) main_cam5_pane_t

0x49f6,	// (0x000539d1) popup_scut_keymap_window_ParamLimits

0x49f6,	// (0x000539d1) popup_scut_keymap_window

0x9d23,	// (0x00058cfe) aid_size_cell_brow_shortcut

0xe60e,	// (0x0005d5e9) bg_popup_window_pane_cp010

0x9d2f,	// (0x00058d0a) grid_scut_pane

0x9d3b,	// (0x00058d16) cell_scut_pane_ParamLimits

0x9d3b,	// (0x00058d16) cell_scut_pane

0x9d52,	// (0x00058d2d) cell_scut_pane_g1

0x2d0b,	// (0x00051ce6) cell_scut_pane_t1

0x2d1a,	// (0x00051cf5) cell_scut_pane_t2

0x9d5b,	// (0x00058d36) cell_scut_pane_t3

0x0002,

0xf955,	// (0x0005e930) cell_scut_pane_t

0x7cc0,	// (0x00056c9b) main_mup3_pane_g8_ParamLimits

0x7cc0,	// (0x00056c9b) main_mup3_pane_g8

0x8f73,	// (0x00057f4e) area_vitu2_query_pane_ParamLimits

0x8f73,	// (0x00057f4e) area_vitu2_query_pane

0x9acc,	// (0x00058aa7) input_focus_pane_cp08

0x2d29,	// (0x00051d04) area_vitu2_query_pane_g1

0x9d69,	// (0x00058d44) area_vitu2_query_pane_g2

0x0001,

0xf95c,	// (0x0005e937) area_vitu2_query_pane_g

0x9d7a,	// (0x00058d55) area_vitu2_query_pane_t1_ParamLimits

0x9d7a,	// (0x00058d55) area_vitu2_query_pane_t1

0x9d8e,	// (0x00058d69) area_vitu2_query_pane_t2_ParamLimits

0x9d8e,	// (0x00058d69) area_vitu2_query_pane_t2

0x9da2,	// (0x00058d7d) area_vitu2_query_pane_t3_ParamLimits

0x9da2,	// (0x00058d7d) area_vitu2_query_pane_t3

0x2d35,	// (0x00051d10) area_vitu2_query_pane_t4_ParamLimits

0x2d35,	// (0x00051d10) area_vitu2_query_pane_t4

0x2d5d,	// (0x00051d38) area_vitu2_query_pane_t5_ParamLimits

0x2d5d,	// (0x00051d38) area_vitu2_query_pane_t5

0x2d85,	// (0x00051d60) area_vitu2_query_pane_t6_ParamLimits

0x2d85,	// (0x00051d60) area_vitu2_query_pane_t6

0x0006,

0xf961,	// (0x0005e93c) area_vitu2_query_pane_t_ParamLimits

0xf961,	// (0x0005e93c) area_vitu2_query_pane_t

0x9ab4,	// (0x00058a8f) bg_button_pane_cp018

0x9dca,	// (0x00058da5) bg_button_pane_cp021

0x9dd6,	// (0x00058db1) bg_button_pane_cp022

0x9df9,	// (0x00058dd4) input_focus_pane_cp09

0xee42,	// (0x0005de1d) aid_size_touch_mv_arrow_left

0xee6b,	// (0x0005de46) aid_size_touch_mv_arrow_right

0x95ff,	// (0x000585da) main_cset_slider_pane_g16_ParamLimits

0x95ff,	// (0x000585da) main_cset_slider_pane_g16

0x960d,	// (0x000585e8) main_cset_slider_pane_g17_ParamLimits

0x960d,	// (0x000585e8) main_cset_slider_pane_g17

0x9d10,	// (0x00058ceb) cell_cam4_burst_pane_g1_ParamLimits

0xdb99,	// (0x0005cb74) compa_mode_pane

0x981b,	// (0x000587f6) popup_vtel_slider_window_g3_ParamLimits

0x981b,	// (0x000587f6) popup_vtel_slider_window_g3

0x982f,	// (0x0005880a) popup_vtel_slider_window_g4_ParamLimits

0x982f,	// (0x0005880a) popup_vtel_slider_window_g4

0x9843,	// (0x0005881e) popup_vtel_slider_window_t1_ParamLimits

0x9843,	// (0x0005881e) popup_vtel_slider_window_t1

0x4a51,	// (0x00053a2c) main_cl_pane

0x74ee,	// (0x000564c9) popup_imed_adjust2_window_ParamLimits

0x00b9,	// (0x0004f094) bg_tb_trans_pane_cp05_ParamLimits

0x2542,	// (0x0005151d) popup_imed_adjust2_window_g1_ParamLimits

0x2551,	// (0x0005152c) popup_imed_adjust2_window_g2_ParamLimits

0x2551,	// (0x0005152c) popup_imed_adjust2_window_g2

0x255d,	// (0x00051538) popup_imed_adjust2_window_g3_ParamLimits

0x255d,	// (0x00051538) popup_imed_adjust2_window_g3

0x0002,

0xf6e1,	// (0x0005e6bc) popup_imed_adjust2_window_g_ParamLimits

0xf6e1,	// (0x0005e6bc) popup_imed_adjust2_window_g

0x2569,	// (0x00051544) popup_imed_adjust2_window_t1_ParamLimits

0x2581,	// (0x0005155c) slider_imed_adjust_pane_ParamLimits

0x2595,	// (0x00051570) slider_imed_adjust_pane_g1_ParamLimits

0x25a5,	// (0x00051580) slider_imed_adjust_pane_g2_ParamLimits

0x25b5,	// (0x00051590) slider_imed_adjust_pane_g3_ParamLimits

0x25c6,	// (0x000515a1) slider_imed_adjust_pane_g4_ParamLimits

0xf6e8,	// (0x0005e6c3) slider_imed_adjust_pane_g_ParamLimits

0x8cba,	// (0x00057c95) aid_touch_area_cam4_ParamLimits

0x8cba,	// (0x00057c95) aid_touch_area_cam4

0x8cca,	// (0x00057ca5) battery_pane_cp01

0x8d51,	// (0x00057d2c) main_camera4_pane_g6_ParamLimits

0x8d51,	// (0x00057d2c) main_camera4_pane_g6

0x8d6f,	// (0x00057d4a) main_camera4_pane_t2_ParamLimits

0x8d6f,	// (0x00057d4a) main_camera4_pane_t2

0x0001,

0xf7e0,	// (0x0005e7bb) main_camera4_pane_t_ParamLimits

0xf7e0,	// (0x0005e7bb) main_camera4_pane_t

0x8df6,	// (0x00057dd1) aid_touch_area_vid4_ParamLimits

0x8df6,	// (0x00057dd1) aid_touch_area_vid4

0x8e36,	// (0x00057e11) main_video4_pane_g5_ParamLimits

0x8e36,	// (0x00057e11) main_video4_pane_g5

0x8e5a,	// (0x00057e35) vid4_progress_pane_ParamLimits

0x8e5a,	// (0x00057e35) vid4_progress_pane

0x2a0c,	// (0x000519e7) main_cset_slider_pane_g18_ParamLimits

0x2a0c,	// (0x000519e7) main_cset_slider_pane_g18

0x2bf3,	// (0x00051bce) cell_cam4_burst_pane_g2_ParamLimits

0x2bf3,	// (0x00051bce) cell_cam4_burst_pane_g2

0x0001,

0xf935,	// (0x0005e910) cell_cam4_burst_pane_g_ParamLimits

0xf935,	// (0x0005e910) cell_cam4_burst_pane_g

0x9e09,	// (0x00058de4) bg_cl_pane_ParamLimits

0x9e09,	// (0x00058de4) bg_cl_pane

0x9e15,	// (0x00058df0) cl_header_pane_ParamLimits

0x9e15,	// (0x00058df0) cl_header_pane

0x9e21,	// (0x00058dfc) cl_listscroll_pane_ParamLimits

0x9e21,	// (0x00058dfc) cl_listscroll_pane

0x2dd1,	// (0x00051dac) bg_cl_pane_g1

0x2dd9,	// (0x00051db4) bg_cl_pane_g2

0x2de1,	// (0x00051dbc) bg_cl_pane_g3

0x2de9,	// (0x00051dc4) bg_cl_pane_g4

0x2df1,	// (0x00051dcc) bg_cl_pane_g5

0x2df9,	// (0x00051dd4) bg_cl_pane_g6

0x2e01,	// (0x00051ddc) bg_cl_pane_g7

0x2e09,	// (0x00051de4) bg_cl_pane_g8

0x2e11,	// (0x00051dec) bg_cl_pane_g9

0x0008,

0xf970,	// (0x0005e94b) bg_cl_pane_g

0x9e2d,	// (0x00058e08) aid_height_cl_leading_ParamLimits

0x9e2d,	// (0x00058e08) aid_height_cl_leading

0x9e39,	// (0x00058e14) aid_height_cl_text_ParamLimits

0x9e39,	// (0x00058e14) aid_height_cl_text

0xe343,	// (0x0005d31e) bg_cl_header_pane_ParamLimits

0xe343,	// (0x0005d31e) bg_cl_header_pane

0x9e51,	// (0x00058e2c) cl_header_pane_g1_ParamLimits

0x9e51,	// (0x00058e2c) cl_header_pane_g1

0x9e5e,	// (0x00058e39) cl_header_pane_t1_ParamLimits

0x9e5e,	// (0x00058e39) cl_header_pane_t1

0x2e19,	// (0x00051df4) cl_list_pane

0x29df,	// (0x000519ba) hc_scroll_pane_cp01

0xe807,	// (0x0005d7e2) bg_cl_header_pane_g1

0x289f,	// (0x0005187a) bg_cl_header_pane_g2

0xe827,	// (0x0005d802) bg_cl_header_pane_g3

0x28af,	// (0x0005188a) bg_cl_header_pane_g4

0x28a7,	// (0x00051882) bg_cl_header_pane_g5

0x2b0e,	// (0x00051ae9) bg_cl_header_pane_g6

0x28c7,	// (0x000518a2) bg_cl_header_pane_g7

0x28cf,	// (0x000518aa) bg_cl_header_pane_g8

0x28bf,	// (0x0005189a) bg_cl_header_pane_g9

0x0008,

0xf983,	// (0x0005e95e) bg_cl_header_pane_g

0x9e70,	// (0x00058e4b) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x9e70,	// (0x00058e4b) hc_cl_list_double_graphic_heading_pane

0x9e81,	// (0x00058e5c) hc_cl_list_single_graphic_pane_ParamLimits

0x9e81,	// (0x00058e5c) hc_cl_list_single_graphic_pane

0x9e9a,	// (0x00058e75) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x9e9a,	// (0x00058e75) hc_cl_list_single_graphic_pane_g1

0x9ea6,	// (0x00058e81) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x9ea6,	// (0x00058e81) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf996,	// (0x0005e971) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf996,	// (0x0005e971) hc_cl_list_single_graphic_pane_g

0x9eba,	// (0x00058e95) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x9eba,	// (0x00058e95) hc_cl_list_single_graphic_pane_t1

0x9e9a,	// (0x00058e75) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x9e9a,	// (0x00058e75) hc_cl_list_double_graphic_heading_pane_g1

0x9ecf,	// (0x00058eaa) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9ecf,	// (0x00058eaa) hc_cl_list_double_graphic_heading_pane_g2

0x9ee3,	// (0x00058ebe) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9ee3,	// (0x00058ebe) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf99b,	// (0x0005e976) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf99b,	// (0x0005e976) hc_cl_list_double_graphic_heading_pane_g

0x9ef7,	// (0x00058ed2) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x9ef7,	// (0x00058ed2) hc_cl_list_double_graphic_heading_pane_t1

0x9f0c,	// (0x00058ee7) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x9f0c,	// (0x00058ee7) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9a2,	// (0x0005e97d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9a2,	// (0x0005e97d) hc_cl_list_double_graphic_heading_pane_t

0x9f29,	// (0x00058f04) vid4_progress_pane_g1

0x9f39,	// (0x00058f14) vid4_progress_pane_g2

0x9f49,	// (0x00058f24) vid4_progress_pane_g3

0x9f5b,	// (0x00058f36) vid4_progress_pane_g4

0x0004,

0xf9a7,	// (0x0005e982) vid4_progress_pane_g

0x9f73,	// (0x00058f4e) vid4_progress_pane_t1

0x9f89,	// (0x00058f64) vid4_progress_pane_t2

0x0002,

0xf9b2,	// (0x0005e98d) vid4_progress_pane_t

0x9fb3,	// (0x00058f8e) wait_bar_pane_cp07

0x1df1,	// (0x00050dcc) blid_firmament_pane_ParamLimits

0x1e34,	// (0x00050e0f) popup_blid_sat_info2_window_g1

0x1e58,	// (0x00050e33) popup_blid_sat_info2_window_t3

0x1e66,	// (0x00050e41) popup_blid_sat_info2_window_t4

0x1e74,	// (0x00050e4f) popup_blid_sat_info2_window_t5

0x1e82,	// (0x00050e5d) popup_blid_sat_info2_window_t6

0x1e92,	// (0x00050e6d) popup_blid_sat_info2_window_t7

0x1ea0,	// (0x00050e7b) popup_blid_sat_info2_window_t8

0x1eae,	// (0x00050e89) popup_blid_sat_info2_window_t9

0x1ebc,	// (0x00050e97) popup_blid_sat_info2_window_t10

0x1f7d,	// (0x00050f58) aid_firma_cardinal_ParamLimits

0x1f91,	// (0x00050f6c) blid_firmament_pane_t1_ParamLimits

0x1fa8,	// (0x00050f83) blid_firmament_pane_t2_ParamLimits

0x1fbf,	// (0x00050f9a) blid_firmament_pane_t3_ParamLimits

0x1fd6,	// (0x00050fb1) blid_firmament_pane_t4_ParamLimits

0xf5da,	// (0x0005e5b5) blid_firmament_pane_t_ParamLimits

0x1fed,	// (0x00050fc8) blid_sat_info_pane_ParamLimits

0x7450,	// (0x0005642b) main_cam_set_pane_ParamLimits

0x838a,	// (0x00057365) aid_size_cell_colour_35_ParamLimits

0x83a4,	// (0x0005737f) aid_size_cell_colour_112_ParamLimits

0x83bb,	// (0x00057396) aid_size_cell_effect_ParamLimits

0xdbd6,	// (0x0005cbb1) bg_tb_trans_pane_cp02_ParamLimits

0xeae8,	// (0x0005dac3) heading_imed_pane_ParamLimits

0x83d5,	// (0x000573b0) listscroll_imed_pane_ParamLimits

0x0a05,	// (0x0004f9e0) popup_call2_audio_first_window_g5_ParamLimits

0x0a05,	// (0x0004f9e0) popup_call2_audio_first_window_g5

0x89b8,	// (0x00057993) aid_size_touch_image3_arrow_left_ParamLimits

0x89b8,	// (0x00057993) aid_size_touch_image3_arrow_left

0x89ce,	// (0x000579a9) aid_size_touch_image3_arrow_right_ParamLimits

0x89ce,	// (0x000579a9) aid_size_touch_image3_arrow_right

0x9f9e,	// (0x00058f79) vid4_progress_pane_t3

0x852e,	// (0x00057509) main_hwr_training_symbol_option_pane_ParamLimits

0x852e,	// (0x00057509) main_hwr_training_symbol_option_pane

0x26fa,	// (0x000516d5) popup_hwr_training_preview_window_ParamLimits

0x26fa,	// (0x000516d5) popup_hwr_training_preview_window

0x858f,	// (0x0005756a) hwr_training_navi_pane_g5_ParamLimits

0x858f,	// (0x0005756a) hwr_training_navi_pane_g5

0x288d,	// (0x00051868) popup_char_count_window

0x4a37,	// (0x00053a12) bg_popup_sub_pane_cp20_ParamLimits

0x9936,	// (0x00058911) list_vitu2_match_list_pane_ParamLimits

0x9942,	// (0x0005891d) vitu2_page_scroll_pane_ParamLimits

0x9942,	// (0x0005891d) vitu2_page_scroll_pane

0x2e2b,	// (0x00051e06) list_single_hwr_training_symbol_option_pane_ParamLimits

0x2e2b,	// (0x00051e06) list_single_hwr_training_symbol_option_pane

0x2e3e,	// (0x00051e19) list_single_hwr_training_symbol_option_pane_g1

0x2e46,	// (0x00051e21) list_single_hwr_training_symbol_option_pane_t1

0x2e54,	// (0x00051e2f) bg_button_pane_cp023

0x2e5d,	// (0x00051e38) bg_button_pane_cp024

0x2e90,	// (0x00051e6b) vitu2_page_scroll_pane_g1

0x2e98,	// (0x00051e73) vitu2_page_scroll_pane_g2

0x0001,

0xf9b9,	// (0x0005e994) vitu2_page_scroll_pane_g

0x2ea0,	// (0x00051e7b) vitu2_page_scroll_pane_t1

0x1d67,	// (0x00050d42) popup_char_count_window_g1

0x2eaf,	// (0x00051e8a) popup_char_count_window_g2

0x2eb8,	// (0x00051e93) popup_char_count_window_g3

0x0002,

0xf9be,	// (0x0005e999) popup_char_count_window_g

0x2ec1,	// (0x00051e9c) popup_char_count_window_t1

0x4a51,	// (0x00053a2c) main_vded2_pane

0x252e,	// (0x00051509) aid_size_cell_imed_line

0x2538,	// (0x00051513) grid_imed_line_width_pane

0x8ec8,	// (0x00057ea3) vid4_indicators_pane_g4

0x2ecf,	// (0x00051eaa) cell_imed_line_width_pane_ParamLimits

0x2ecf,	// (0x00051eaa) cell_imed_line_width_pane

0x2ee3,	// (0x00051ebe) cell_imed_line_width_pane_g1

0x2eec,	// (0x00051ec7) cell_imed_line_width_pane_g2

0x0001,

0xf9c5,	// (0x0005e9a0) cell_imed_line_width_pane_g

0x9fda,	// (0x00058fb5) main_vded2_pane_g1_ParamLimits

0x9fda,	// (0x00058fb5) main_vded2_pane_g1

0x9fe7,	// (0x00058fc2) main_vded2_pane_g2_ParamLimits

0x9fe7,	// (0x00058fc2) main_vded2_pane_g2

0x0001,

0xf9ca,	// (0x0005e9a5) main_vded2_pane_g_ParamLimits

0xf9ca,	// (0x0005e9a5) main_vded2_pane_g

0x9ff5,	// (0x00058fd0) vded2_slider_pane_ParamLimits

0x9ff5,	// (0x00058fd0) vded2_slider_pane

0xa002,	// (0x00058fdd) aid_size_touch_vded2_end

0xa00c,	// (0x00058fe7) aid_size_touch_vded2_playhead

0x2ef4,	// (0x00051ecf) aid_size_touch_vded2_start

0x2efc,	// (0x00051ed7) vded2_slider_bg_pane

0x2f05,	// (0x00051ee0) vded2_slider_pane_g1

0x2f0e,	// (0x00051ee9) vded2_slider_pane_g2

0xa014,	// (0x00058fef) vded2_slider_pane_g3

0x0002,

0xf9cf,	// (0x0005e9aa) vded2_slider_pane_g

0x2f16,	// (0x00051ef1) vded2_slider_bg_pane_g1

0x2f1f,	// (0x00051efa) vded2_slider_bg_pane_g2

0x2f28,	// (0x00051f03) vded2_slider_bg_pane_g3

0x0002,

0xf9d6,	// (0x0005e9b1) vded2_slider_bg_pane_g

0x6d9d,	// (0x00055d78) aid_postcard_touch_down_pane_ParamLimits

0x6d9d,	// (0x00055d78) aid_postcard_touch_down_pane

0x6dad,	// (0x00055d88) aid_postcard_touch_up_pane_ParamLimits

0x6dad,	// (0x00055d88) aid_postcard_touch_up_pane

0x4a51,	// (0x00053a2c) main_blid2_pane

0x7479,	// (0x00056454) popup_blid2_search_window

0xdb99,	// (0x0005cb74) blid2_gps_pane

0xdb99,	// (0x0005cb74) blid2_navig_pane

0xdb99,	// (0x0005cb74) blid2_search_pane

0xdb99,	// (0x0005cb74) blid2_tripm_pane

0xa01d,	// (0x00058ff8) blid2_search_pane_g1_ParamLimits

0xa01d,	// (0x00058ff8) blid2_search_pane_g1

0xa02d,	// (0x00059008) blid2_search_pane_t1_ParamLimits

0xa02d,	// (0x00059008) blid2_search_pane_t1

0xa03f,	// (0x0005901a) aid_size_cell_blid2_gps_ParamLimits

0xa03f,	// (0x0005901a) aid_size_cell_blid2_gps

0xa04f,	// (0x0005902a) blid2_gps_pane_g1_ParamLimits

0xa04f,	// (0x0005902a) blid2_gps_pane_g1

0xa05b,	// (0x00059036) grid_blid2_satellite_pane_ParamLimits

0xa05b,	// (0x00059036) grid_blid2_satellite_pane

0xa06b,	// (0x00059046) blid2_navig_pane_g1_ParamLimits

0xa06b,	// (0x00059046) blid2_navig_pane_g1

0xa077,	// (0x00059052) blid2_navig_pane_t1_ParamLimits

0xa077,	// (0x00059052) blid2_navig_pane_t1

0xa089,	// (0x00059064) blid2_navig_pane_t2_ParamLimits

0xa089,	// (0x00059064) blid2_navig_pane_t2

0x0001,

0xf9dd,	// (0x0005e9b8) blid2_navig_pane_t_ParamLimits

0xf9dd,	// (0x0005e9b8) blid2_navig_pane_t

0xa09b,	// (0x00059076) blid2_navig_ring_pane_ParamLimits

0xa09b,	// (0x00059076) blid2_navig_ring_pane

0xa0ab,	// (0x00059086) blid2_speed_pane_ParamLimits

0xa0ab,	// (0x00059086) blid2_speed_pane

0xa0b7,	// (0x00059092) blid2_tripm_pane_g1_ParamLimits

0xa0b7,	// (0x00059092) blid2_tripm_pane_g1

0xa0c7,	// (0x000590a2) blid2_tripm_pane_g2_ParamLimits

0xa0c7,	// (0x000590a2) blid2_tripm_pane_g2

0xa0d3,	// (0x000590ae) blid2_tripm_pane_g3_ParamLimits

0xa0d3,	// (0x000590ae) blid2_tripm_pane_g3

0xa0df,	// (0x000590ba) blid2_tripm_pane_g4_ParamLimits

0xa0df,	// (0x000590ba) blid2_tripm_pane_g4

0xa0eb,	// (0x000590c6) blid2_tripm_pane_g5_ParamLimits

0xa0eb,	// (0x000590c6) blid2_tripm_pane_g5

0x0005,

0xf9e2,	// (0x0005e9bd) blid2_tripm_pane_g_ParamLimits

0xf9e2,	// (0x0005e9bd) blid2_tripm_pane_g

0xa107,	// (0x000590e2) blid2_tripm_pane_t1_ParamLimits

0xa107,	// (0x000590e2) blid2_tripm_pane_t1

0xa11b,	// (0x000590f6) blid2_tripm_pane_t2_ParamLimits

0xa11b,	// (0x000590f6) blid2_tripm_pane_t2

0xa12d,	// (0x00059108) blid2_tripm_pane_t3_ParamLimits

0xa12d,	// (0x00059108) blid2_tripm_pane_t3

0x0003,

0xf9ef,	// (0x0005e9ca) blid2_tripm_pane_t_ParamLimits

0xf9ef,	// (0x0005e9ca) blid2_tripm_pane_t

0xa15f,	// (0x0005913a) cell_blid2_satellite_pane_ParamLimits

0xa15f,	// (0x0005913a) cell_blid2_satellite_pane

0xa179,	// (0x00059154) cell_blid2_satellite_pane_g1

0x2f31,	// (0x00051f0c) cell_blid2_satellite_pane_t1

0xe38f,	// (0x0005d36a) blid2_speed_pane_g1

0x2f3f,	// (0x00051f1a) blid2_speed_pane_t1

0x2f4d,	// (0x00051f28) blid2_speed_pane_t2

0x0001,

0xf9f8,	// (0x0005e9d3) blid2_speed_pane_t

0xe38f,	// (0x0005d36a) blid2_navig_ring_pane_g1

0xa182,	// (0x0005915d) blid2_navig_ring_pane_g2

0xa18a,	// (0x00059165) blid2_navig_ring_pane_g3

0xa192,	// (0x0005916d) blid2_navig_ring_pane_g4

0xa19a,	// (0x00059175) blid2_navig_ring_pane_g5

0x0004,

0xf9fd,	// (0x0005e9d8) blid2_navig_ring_pane_g

0xdb99,	// (0x0005cb74) bg_popup_window_pane_cp011

0x2f5b,	// (0x00051f36) popup_blid2_search_window_g1

0x2f63,	// (0x00051f3e) popup_blid2_search_window_t1

0x2f71,	// (0x00051f4c) popup_blid2_search_window_t2

0x0001,

0xfa08,	// (0x0005e9e3) popup_blid2_search_window_t

0xe716,	// (0x0005d6f1) main_browser_pane_g1

0xe3ed,	// (0x0005d3c8) main_browser_pane_ParamLimits

0x7450,	// (0x0005642b) bg_button_pane_cp011_ParamLimits

0x9234,	// (0x0005820f) cell_vitu2_function_pane_g1_ParamLimits

0x00b9,	// (0x0004f094) bg_popup_sub_pane_cp22_ParamLimits

0x9acc,	// (0x00058aa7) input_focus_pane_cp08_ParamLimits

0x9ae7,	// (0x00058ac2) popup_vitu2_query_button_pane_ParamLimits

0x9ae7,	// (0x00058ac2) popup_vitu2_query_button_pane

0x9af6,	// (0x00058ad1) popup_vitu2_query_input_button_pane

0x2b49,	// (0x00051b24) popup_vitu2_query_window_g1_ParamLimits

0x9b00,	// (0x00058adb) popup_vitu2_query_window_g2_ParamLimits

0xf909,	// (0x0005e8e4) popup_vitu2_query_window_g_ParamLimits

0xdb99,	// (0x0005cb74) bg_button_pane_cp026

0xa1a2,	// (0x0005917d) popup_vitu2_query_input_button_pane_g1

0xdb99,	// (0x0005cb74) bg_button_pane_cp025

0x2f7f,	// (0x00051f5a) popup_vitu2_query_button_pane_t1

0x794d,	// (0x00056928) main_mp3_pane_t6

0x795d,	// (0x00056938) popup_slider_window_cp01

0x8da5,	// (0x00057d80) cam4_battery_pane

0x8e85,	// (0x00057e60) cam4_battery_pane_cp02

0x9f21,	// (0x00058efc) cam4_battery_pane_cp01

0x9f21,	// (0x00058efc) cam4_battery_pane_cp03

0x2f8d,	// (0x00051f68) cam4_battery_pane_g1

0xe38f,	// (0x0005d36a) cam4_battery_pane_g2

0x0001,

0xfa0d,	// (0x0005e9e8) cam4_battery_pane_g

0x1eca,	// (0x00050ea5) popup_blid_sat_info2_window_t11

0xee42,	// (0x0005de1d) aid_size_touch_mv_arrow_left_ParamLimits

0xee6b,	// (0x0005de46) aid_size_touch_mv_arrow_right_ParamLimits

0xeec9,	// (0x0005dea4) navi_pane_g1_ParamLimits

0xeed5,	// (0x0005deb0) navi_pane_g2_ParamLimits

0xef03,	// (0x0005dede) navi_pane_g3_ParamLimits

0xf311,	// (0x0005e2ec) navi_pane_g_ParamLimits

0x6958,	// (0x00055933) navi_pane_mv_t1_ParamLimits

0x83e1,	// (0x000573bc) grid_imed_effect_pane_ParamLimits

0x5473,	// (0x0005444e) aid_placing_vt_slider_lsc

0xe665,	// (0x0005d640) aid_placing_vt_slider_prt

0xdbd6,	// (0x0005cbb1) bg_tb_trans_pane_cp01_ParamLimits

0x21d0,	// (0x000511ab) popup_image_details_window_g1_ParamLimits

0x21e3,	// (0x000511be) popup_image_details_window_g2_ParamLimits

0x21f8,	// (0x000511d3) popup_image_details_window_g3_ParamLimits

0x21f8,	// (0x000511d3) popup_image_details_window_g3

0xf61a,	// (0x0005e5f5) popup_image_details_window_g_ParamLimits

0x220c,	// (0x000511e7) popup_image_details_window_t1_ParamLimits

0x221e,	// (0x000511f9) popup_image_details_window_t2_ParamLimits

0x2237,	// (0x00051212) popup_image_details_window_t3_ParamLimits

0x224b,	// (0x00051226) popup_image_details_window_t4_ParamLimits

0x2266,	// (0x00051241) popup_image_details_window_t5_ParamLimits

0xf621,	// (0x0005e5fc) popup_image_details_window_t_ParamLimits

0x9e45,	// (0x00058e20) cl_header_name_pane_ParamLimits

0x9e45,	// (0x00058e20) cl_header_name_pane

0xa1aa,	// (0x00059185) cl_header_name_pane_t1_ParamLimits

0xa1aa,	// (0x00059185) cl_header_name_pane_t1

0xa1c1,	// (0x0005919c) cl_header_name_pane_t2_ParamLimits

0xa1c1,	// (0x0005919c) cl_header_name_pane_t2

0xa1eb,	// (0x000591c6) cl_header_name_pane_t3_ParamLimits

0xa1eb,	// (0x000591c6) cl_header_name_pane_t3

0x0002,

0xfa12,	// (0x0005e9ed) cl_header_name_pane_t_ParamLimits

0xfa12,	// (0x0005e9ed) cl_header_name_pane_t

0xef92,	// (0x0005df6d) navi_pane_mv_g2_ParamLimits

0x2858,	// (0x00051833) field_vitu2_entry_pane_g1_ParamLimits

0x2864,	// (0x0005183f) field_vitu2_entry_pane_g2_ParamLimits

0x0097,	// (0x0004f072) field_vitu2_entry_pane_g3_ParamLimits

0x0097,	// (0x0004f072) field_vitu2_entry_pane_g3

0xf812,	// (0x0005e7ed) field_vitu2_entry_pane_g_ParamLimits

0x90fa,	// (0x000580d5) cell_vitu2_itu_pane_g1_ParamLimits

0x9112,	// (0x000580ed) cell_vitu2_itu_pane_g2_ParamLimits

0x9112,	// (0x000580ed) cell_vitu2_itu_pane_g2

0x0001,

0xf81e,	// (0x0005e7f9) cell_vitu2_itu_pane_g_ParamLimits

0xf81e,	// (0x0005e7f9) cell_vitu2_itu_pane_g

0x7450,	// (0x0005642b) bg_vkb2_func_pane_cp05_ParamLimits

0x7450,	// (0x0005642b) bg_vkb2_func_pane_cp05

0x7450,	// (0x0005642b) bg_vkb2_func_pane_cp03

0x7450,	// (0x0005642b) bg_vkb2_func_pane_cp04

0x7450,	// (0x0005642b) bg_vkb2_func_pane_cp10_ParamLimits

0x7450,	// (0x0005642b) bg_vkb2_func_pane_cp10

0x9de7,	// (0x00058dc2) bg_vkb2_func_pane_cp08

0x9ab4,	// (0x00058a8f) bg_vkb2_func_pane_cp06

0x9dca,	// (0x00058da5) bg_vkb2_func_pane_cp07

0x2e66,	// (0x00051e41) bg_vkb2_func_pane_cp11_ParamLimits

0x2e66,	// (0x00051e41) bg_vkb2_func_pane_cp11

0x2e7b,	// (0x00051e56) bg_vkb2_func_pane_cp12_ParamLimits

0x2e7b,	// (0x00051e56) bg_vkb2_func_pane_cp12

0xdb99,	// (0x0005cb74) bg_vkb2_func_pane_cp09

0x289f,	// (0x0005187a) bg_vkb2_func_pane_g1

0xe827,	// (0x0005d802) bg_vkb2_func_pane_g2

0x28a7,	// (0x00051882) bg_vkb2_func_pane_g3

0x28af,	// (0x0005188a) bg_vkb2_func_pane_g4

0x2b0e,	// (0x00051ae9) bg_vkb2_func_pane_g5

0x28c7,	// (0x000518a2) bg_vkb2_func_pane_g6

0x28cf,	// (0x000518aa) bg_vkb2_func_pane_g7

0x28bf,	// (0x0005189a) bg_vkb2_func_pane_g8

0xe807,	// (0x0005d7e2) bg_vkb2_func_pane_g9

0x0008,

0xfa19,	// (0x0005e9f4) bg_vkb2_func_pane_g

0xa0f9,	// (0x000590d4) blid2_tripm_pane_g6_ParamLimits

0xa0f9,	// (0x000590d4) blid2_tripm_pane_g6

0x279e,	// (0x00051779) mp4_progress_pane_g1

0xa153,	// (0x0005912e) blid2_tripm_values_pane_ParamLimits

0xa153,	// (0x0005912e) blid2_tripm_values_pane

0xa210,	// (0x000591eb) blid2_tripm_values_pane_t1

0xa21e,	// (0x000591f9) blid2_tripm_values_pane_t2

0xa22c,	// (0x00059207) blid2_tripm_values_pane_t3

0xa23a,	// (0x00059215) blid2_tripm_values_pane_t4

0xa248,	// (0x00059223) blid2_tripm_values_pane_t5

0xa256,	// (0x00059231) blid2_tripm_values_pane_t6

0xa264,	// (0x0005923f) blid2_tripm_values_pane_t7

0xa272,	// (0x0005924d) blid2_tripm_values_pane_t8

0xa280,	// (0x0005925b) blid2_tripm_values_pane_t9

0x0008,

0xfa2c,	// (0x0005ea07) blid2_tripm_values_pane_t

0x54b3,	// (0x0005448e) call_video_pane_t1_ParamLimits

0x54d4,	// (0x000544af) call_video_pane_t2_ParamLimits

0xf1ba,	// (0x0005e195) call_video_pane_t_ParamLimits

0x6c72,	// (0x00055c4d) msg_header_pane_g1_ParamLimits

0x0185,	// (0x0004f160) msg_header_pane_g2_ParamLimits

0x0185,	// (0x0004f160) msg_header_pane_g2

0x0001,

0xf3af,	// (0x0005e38a) msg_header_pane_g_ParamLimits

0xf3af,	// (0x0005e38a) msg_header_pane_g

0xe3ed,	// (0x0005d3c8) main_clock2_pane_ParamLimits

0x815b,	// (0x00057136) grid_clock2_toolbar_pane_ParamLimits

0x815b,	// (0x00057136) grid_clock2_toolbar_pane

0x815b,	// (0x00057136) listscroll_clock2_pane_ParamLimits

0x815b,	// (0x00057136) listscroll_clock2_pane

0x820b,	// (0x000571e6) main_clock2_pane_t3_ParamLimits

0x820b,	// (0x000571e6) main_clock2_pane_t3

0x821d,	// (0x000571f8) main_clock2_pane_t4_ParamLimits

0x821d,	// (0x000571f8) main_clock2_pane_t4

0x2f97,	// (0x00051f72) cell_clock2_toolbar_pane

0x2f9f,	// (0x00051f7a) cell_clock2_toolbar_pane_cp01

0x2f9f,	// (0x00051f7a) cell_clock2_toolbar_pane_cp02

0x2fa7,	// (0x00051f82) cell_clock2_toolbar_pane_cp03

0x2faf,	// (0x00051f8a) list_clock2_pane

0xedb8,	// (0x0005dd93) scroll_pane_cp10

0x2fb7,	// (0x00051f92) list_single_clock2_pane_ParamLimits

0x2fb7,	// (0x00051f92) list_single_clock2_pane

0xe60e,	// (0x0005d5e9) list_highlight_pane_cp08

0x2fc4,	// (0x00051f9f) list_single_clock2_pane_t1

0x2fd2,	// (0x00051fad) list_single_clock2_pane_t2

0x0001,

0xfa3f,	// (0x0005ea1a) list_single_clock2_pane_t

0xdb99,	// (0x0005cb74) bg_button_pane_cp10

0x2fec,	// (0x00051fc7) cell_clock2_toolbar_pane_g1

0x6d0b,	// (0x00055ce6) aid_main_viewer_pane_g1_ParamLimits

0x6d0b,	// (0x00055ce6) aid_main_viewer_pane_g1

0x6d17,	// (0x00055cf2) aid_main_viewer_pane_g2_ParamLimits

0x6d17,	// (0x00055cf2) aid_main_viewer_pane_g2

0x6d23,	// (0x00055cfe) aid_main_viewer_pane_g3_ParamLimits

0x6d23,	// (0x00055cfe) aid_main_viewer_pane_g3

0x6d34,	// (0x00055d0f) aid_main_viewer_pane_g4_ParamLimits

0x6d34,	// (0x00055d0f) aid_main_viewer_pane_g4

0x0003,

0xf3c0,	// (0x0005e39b) aid_main_viewer_pane_g_ParamLimits

0xf3c0,	// (0x0005e39b) aid_main_viewer_pane_g

0x7443,	// (0x0005641e) main_calc_pane_ParamLimits

0x745e,	// (0x00056439) main_dialer2_pane_ParamLimits

0x4a51,	// (0x00053a2c) main_cam6_pane

0x4a51,	// (0x00053a2c) main_vid6_pane

0x8167,	// (0x00057142) listscroll_gen_pane_cp06_ParamLimits

0x8167,	// (0x00057142) listscroll_gen_pane_cp06

0x822f,	// (0x0005720a) main_clock2_pane_t5_ParamLimits

0x822f,	// (0x0005720a) main_clock2_pane_t5

0x827c,	// (0x00057257) aid_call2_pane_cp10_ParamLimits

0x828e,	// (0x00057269) aid_call_pane_cp10_ParamLimits

0xee36,	// (0x0005de11) popup_clock_analogue_window_cp10_g1_ParamLimits

0xee36,	// (0x0005de11) popup_clock_analogue_window_cp10_g2_ParamLimits

0x82a0,	// (0x0005727b) popup_clock_analogue_window_cp10_g3_ParamLimits

0x82a0,	// (0x0005727b) popup_clock_analogue_window_cp10_g4_ParamLimits

0xee36,	// (0x0005de11) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6d6,	// (0x0005e6b1) popup_clock_analogue_window_cp10_g_ParamLimits

0x82b6,	// (0x00057291) popup_clock_analogue_window_cp10_t1_ParamLimits

0x2809,	// (0x000517e4) cell_dialer2_keypad_pane_g2_ParamLimits

0x2809,	// (0x000517e4) cell_dialer2_keypad_pane_g2

0x0001,

0xf7b1,	// (0x0005e78c) cell_dialer2_keypad_pane_g_ParamLimits

0xf7b1,	// (0x0005e78c) cell_dialer2_keypad_pane_g

0xe399,	// (0x0005d374) cell_dialer2_keypad_pane_t1

0x94f2,	// (0x000584cd) main_cset_text2_pane_ParamLimits

0x94f2,	// (0x000584cd) main_cset_text2_pane

0x2d29,	// (0x00051d04) area_vitu2_query_pane_g1_ParamLimits

0x9d69,	// (0x00058d44) area_vitu2_query_pane_g2_ParamLimits

0xf95c,	// (0x0005e937) area_vitu2_query_pane_g_ParamLimits

0x2dad,	// (0x00051d88) area_vitu2_query_pane_t7_ParamLimits

0x2dad,	// (0x00051d88) area_vitu2_query_pane_t7

0x9ab4,	// (0x00058a8f) bg_button_pane_cp018_ParamLimits

0x9dca,	// (0x00058da5) bg_button_pane_cp021_ParamLimits

0x9dd6,	// (0x00058db1) bg_button_pane_cp022_ParamLimits

0x9de7,	// (0x00058dc2) bg_vkb2_func_pane_cp08_ParamLimits

0x9ab4,	// (0x00058a8f) bg_vkb2_func_pane_cp06_ParamLimits

0x9dca,	// (0x00058da5) bg_vkb2_func_pane_cp07_ParamLimits

0x9df9,	// (0x00058dd4) input_focus_pane_cp09_ParamLimits

0xa28e,	// (0x00059269) cam6_autofocus_pane_ParamLimits

0xa28e,	// (0x00059269) cam6_autofocus_pane

0xa2aa,	// (0x00059285) cam6_image_uncrop_pane_ParamLimits

0xa2aa,	// (0x00059285) cam6_image_uncrop_pane

0xa2e3,	// (0x000592be) cam6_indi_pane_ParamLimits

0xa2e3,	// (0x000592be) cam6_indi_pane

0xa2fd,	// (0x000592d8) cam6_mode_pane_ParamLimits

0xa2fd,	// (0x000592d8) cam6_mode_pane

0xa311,	// (0x000592ec) cam6_timer_pane_ParamLimits

0xa311,	// (0x000592ec) cam6_timer_pane

0xa325,	// (0x00059300) cam6_zoom_pane_ParamLimits

0xa325,	// (0x00059300) cam6_zoom_pane

0xa340,	// (0x0005931b) cam6_mode_pane_g1_ParamLimits

0xa340,	// (0x0005931b) cam6_mode_pane_g1

0xa34c,	// (0x00059327) cam6_mode_pane_g2_ParamLimits

0xa34c,	// (0x00059327) cam6_mode_pane_g2

0xa358,	// (0x00059333) cam6_mode_pane_g3_ParamLimits

0xa358,	// (0x00059333) cam6_mode_pane_g3

0xa364,	// (0x0005933f) cam6_mode_pane_g4_ParamLimits

0xa364,	// (0x0005933f) cam6_mode_pane_g4

0x0003,

0xfa44,	// (0x0005ea1f) cam6_mode_pane_g_ParamLimits

0xfa44,	// (0x0005ea1f) cam6_mode_pane_g

0x261c,	// (0x000515f7) bg_tb_trans_pane_cp08_ParamLimits

0x261c,	// (0x000515f7) bg_tb_trans_pane_cp08

0x2ff4,	// (0x00051fcf) cam6_battery_pane_ParamLimits

0x2ff4,	// (0x00051fcf) cam6_battery_pane

0x300a,	// (0x00051fe5) cam6_indi_pane_g1_ParamLimits

0x300a,	// (0x00051fe5) cam6_indi_pane_g1

0x301c,	// (0x00051ff7) cam6_indi_pane_g2_ParamLimits

0x301c,	// (0x00051ff7) cam6_indi_pane_g2

0x302e,	// (0x00052009) cam6_indi_pane_g3_ParamLimits

0x302e,	// (0x00052009) cam6_indi_pane_g3

0x0002,

0xfa4d,	// (0x0005ea28) cam6_indi_pane_g_ParamLimits

0xfa4d,	// (0x0005ea28) cam6_indi_pane_g

0x3040,	// (0x0005201b) cam6_indi_pane_t1_ParamLimits

0x3040,	// (0x0005201b) cam6_indi_pane_t1

0x8f05,	// (0x00057ee0) cam6_autofocus_pane_g1

0x8efd,	// (0x00057ed8) cam6_autofocus_pane_g2

0x8f15,	// (0x00057ef0) cam6_autofocus_pane_g3

0x8f0d,	// (0x00057ee8) cam6_autofocus_pane_g4

0x0003,

0xfa54,	// (0x0005ea2f) cam6_autofocus_pane_g

0x3066,	// (0x00052041) cam6_timer_pane_g1

0x306e,	// (0x00052049) cam6_timer_pane_t1

0x307c,	// (0x00052057) cam6_zoom_cont_pane

0x3084,	// (0x0005205f) cam6_zoom_pane_g1

0x308d,	// (0x00052068) cam6_zoom_pane_g2

0xa370,	// (0x0005934b) cam6_zoom_pane_g3

0x0002,

0xfa5d,	// (0x0005ea38) cam6_zoom_pane_g

0xe38f,	// (0x0005d36a) cam6_battery_pane_g1

0xe38f,	// (0x0005d36a) cam6_battery_pane_g2

0x0001,

0xf08c,	// (0x0005e067) cam6_battery_pane_g

0x3084,	// (0x0005205f) cam6_zoom_cont_pane_g1

0x308d,	// (0x00052068) cam6_zoom_cont_pane_g2

0x3096,	// (0x00052071) cam6_zoom_cont_pane_g3

0x0002,

0xfa64,	// (0x0005ea3f) cam6_zoom_cont_pane_g

0xa38e,	// (0x00059369) cam6_mode_pane_cp_ParamLimits

0xa38e,	// (0x00059369) cam6_mode_pane_cp

0xa3a2,	// (0x0005937d) cam6_zoom_pane_cp_ParamLimits

0xa3a2,	// (0x0005937d) cam6_zoom_pane_cp

0xa3ba,	// (0x00059395) vid6_image_uncrop_cif_pane_ParamLimits

0xa3ba,	// (0x00059395) vid6_image_uncrop_cif_pane

0xa3e6,	// (0x000593c1) vid6_image_uncrop_nhd_pane_ParamLimits

0xa3e6,	// (0x000593c1) vid6_image_uncrop_nhd_pane

0xa403,	// (0x000593de) vid6_image_uncrop_vga_pane_ParamLimits

0xa403,	// (0x000593de) vid6_image_uncrop_vga_pane

0xa422,	// (0x000593fd) vid6_image_uncrop_wvga_pane_ParamLimits

0xa422,	// (0x000593fd) vid6_image_uncrop_wvga_pane

0xa43f,	// (0x0005941a) vid6_indi_pane_ParamLimits

0xa43f,	// (0x0005941a) vid6_indi_pane

0x261c,	// (0x000515f7) bg_tb_trans_pane_cp09_ParamLimits

0x261c,	// (0x000515f7) bg_tb_trans_pane_cp09

0x30ae,	// (0x00052089) cam6_battery_pane_cp_ParamLimits

0x30ae,	// (0x00052089) cam6_battery_pane_cp

0x30ba,	// (0x00052095) vid6_indi_pane_g1_ParamLimits

0x30ba,	// (0x00052095) vid6_indi_pane_g1

0x30cc,	// (0x000520a7) vid6_indi_pane_g2_ParamLimits

0x30cc,	// (0x000520a7) vid6_indi_pane_g2

0x30de,	// (0x000520b9) vid6_indi_pane_g3_ParamLimits

0x30de,	// (0x000520b9) vid6_indi_pane_g3

0x30f3,	// (0x000520ce) vid6_indi_pane_g4_ParamLimits

0x30f3,	// (0x000520ce) vid6_indi_pane_g4

0x3108,	// (0x000520e3) vid6_indi_pane_g5_ParamLimits

0x3108,	// (0x000520e3) vid6_indi_pane_g5

0x0004,

0xfa6b,	// (0x0005ea46) vid6_indi_pane_g_ParamLimits

0xfa6b,	// (0x0005ea46) vid6_indi_pane_g

0x3122,	// (0x000520fd) vid6_indi_pane_t1_ParamLimits

0x3122,	// (0x000520fd) vid6_indi_pane_t1

0x3138,	// (0x00052113) vid6_indi_pane_t2_ParamLimits

0x3138,	// (0x00052113) vid6_indi_pane_t2

0x3160,	// (0x0005213b) vid6_indi_pane_t3_ParamLimits

0x3160,	// (0x0005213b) vid6_indi_pane_t3

0x3188,	// (0x00052163) vid6_indi_pane_t4_ParamLimits

0x3188,	// (0x00052163) vid6_indi_pane_t4

0x0003,

0xfa76,	// (0x0005ea51) vid6_indi_pane_t_ParamLimits

0xfa76,	// (0x0005ea51) vid6_indi_pane_t

0x31ac,	// (0x00052187) wait_bar_pane_cp08

0xa464,	// (0x0005943f) main_cset_text2_pane_t1_ParamLimits

0xa464,	// (0x0005943f) main_cset_text2_pane_t1

0xa379,	// (0x00059354) listscroll_gen_pane_cp06_t1_ParamLimits

0xa379,	// (0x00059354) listscroll_gen_pane_cp06_t1

0x4a51,	// (0x00053a2c) main_cam6_set_pane

0xcd7c,	// (0x0005bd57) bg_tb_trans_pane_cp06_ParamLimits

0x8dad,	// (0x00057d88) cam4_indicators_pane_g1_ParamLimits

0x8dbe,	// (0x00057d99) cam4_indicators_pane_g2_ParamLimits

0xf7ee,	// (0x0005e7c9) cam4_indicators_pane_g_ParamLimits

0x8ddc,	// (0x00057db7) cam4_indicators_pane_t1_ParamLimits

0x7450,	// (0x0005642b) bg_tb_trans_pane_cp07_ParamLimits

0x8e8f,	// (0x00057e6a) vid4_indicators_pane_g1_ParamLimits

0x8ea3,	// (0x00057e7e) vid4_indicators_pane_g2_ParamLimits

0x8eb7,	// (0x00057e92) vid4_indicators_pane_g3_ParamLimits

0x8ec8,	// (0x00057ea3) vid4_indicators_pane_g4_ParamLimits

0xf800,	// (0x0005e7db) vid4_indicators_pane_g_ParamLimits

0x8ee6,	// (0x00057ec1) vid4_indicators_pane_t1_ParamLimits

0x9f29,	// (0x00058f04) vid4_progress_pane_g1_ParamLimits

0x9f39,	// (0x00058f14) vid4_progress_pane_g2_ParamLimits

0x9f49,	// (0x00058f24) vid4_progress_pane_g3_ParamLimits

0x9f5b,	// (0x00058f36) vid4_progress_pane_g4_ParamLimits

0xf9a7,	// (0x0005e982) vid4_progress_pane_g_ParamLimits

0x9f73,	// (0x00058f4e) vid4_progress_pane_t1_ParamLimits

0x9f89,	// (0x00058f64) vid4_progress_pane_t2_ParamLimits

0x9f9e,	// (0x00058f79) vid4_progress_pane_t3_ParamLimits

0xf9b2,	// (0x0005e98d) vid4_progress_pane_t_ParamLimits

0x9fb3,	// (0x00058f8e) wait_bar_pane_cp07_ParamLimits

0xa497,	// (0x00059472) main_cam6_set_pane_g2_ParamLimits

0xa497,	// (0x00059472) main_cam6_set_pane_g2

0xa4a3,	// (0x0005947e) main_cset6_listscroll_pane_ParamLimits

0xa4a3,	// (0x0005947e) main_cset6_listscroll_pane

0xa4ce,	// (0x000594a9) main_cset6_slider_pane_ParamLimits

0xa4ce,	// (0x000594a9) main_cset6_slider_pane

0xa4da,	// (0x000594b5) main_cset6_text2_pane_ParamLimits

0xa4da,	// (0x000594b5) main_cset6_text2_pane

0x31bb,	// (0x00052196) main_cset6_text_pane

0x31c3,	// (0x0005219e) main_cset_list_pane_copy1_ParamLimits

0x31c3,	// (0x0005219e) main_cset_list_pane_copy1

0x31d3,	// (0x000521ae) scroll_pane_cp028_copy1

0xa4ed,	// (0x000594c8) cset_list_set_pane_copy1

0xa500,	// (0x000594db) aid_position_infowindow_above_copy1

0xa508,	// (0x000594e3) aid_position_infowindow_below_copy1

0xa510,	// (0x000594eb) cset_list_set_pane_g1_copy1

0x1875,	// (0x00050850) cset_list_set_pane_g3_copy1_ParamLimits

0x1875,	// (0x00050850) cset_list_set_pane_g3_copy1

0x1884,	// (0x0005085f) cset_list_set_pane_t1_copy1_ParamLimits

0x1884,	// (0x0005085f) cset_list_set_pane_t1_copy1

0xdbd6,	// (0x0005cbb1) list_highlight_pane_cp021_copy1_ParamLimits

0xdbd6,	// (0x0005cbb1) list_highlight_pane_cp021_copy1

0x31dc,	// (0x000521b7) cset6_slider_pane_ParamLimits

0x31dc,	// (0x000521b7) cset6_slider_pane

0x3208,	// (0x000521e3) main_cset6_slider_pane_g1_ParamLimits

0x3208,	// (0x000521e3) main_cset6_slider_pane_g1

0xa518,	// (0x000594f3) main_cset6_slider_pane_g2_ParamLimits

0xa518,	// (0x000594f3) main_cset6_slider_pane_g2

0x3230,	// (0x0005220b) main_cset6_slider_pane_g3_ParamLimits

0x3230,	// (0x0005220b) main_cset6_slider_pane_g3

0xa540,	// (0x0005951b) main_cset6_slider_pane_g4_ParamLimits

0xa540,	// (0x0005951b) main_cset6_slider_pane_g4

0xa54c,	// (0x00059527) main_cset6_slider_pane_g5_ParamLimits

0xa54c,	// (0x00059527) main_cset6_slider_pane_g5

0x29f4,	// (0x000519cf) main_cset6_slider_pane_g7_ParamLimits

0x29f4,	// (0x000519cf) main_cset6_slider_pane_g7

0x2a00,	// (0x000519db) main_cset6_slider_pane_g8_ParamLimits

0x2a00,	// (0x000519db) main_cset6_slider_pane_g8

0xa55a,	// (0x00059535) main_cset6_slider_pane_g9_ParamLimits

0xa55a,	// (0x00059535) main_cset6_slider_pane_g9

0xa566,	// (0x00059541) main_cset6_slider_pane_g10_ParamLimits

0xa566,	// (0x00059541) main_cset6_slider_pane_g10

0xa572,	// (0x0005954d) main_cset6_slider_pane_g11_ParamLimits

0xa572,	// (0x0005954d) main_cset6_slider_pane_g11

0xa57e,	// (0x00059559) main_cset6_slider_pane_g12_ParamLimits

0xa57e,	// (0x00059559) main_cset6_slider_pane_g12

0xa58a,	// (0x00059565) main_cset6_slider_pane_g13_ParamLimits

0xa58a,	// (0x00059565) main_cset6_slider_pane_g13

0xa596,	// (0x00059571) main_cset6_slider_pane_g14_ParamLimits

0xa596,	// (0x00059571) main_cset6_slider_pane_g14

0xa5a2,	// (0x0005957d) main_cset6_slider_pane_g15_ParamLimits

0xa5a2,	// (0x0005957d) main_cset6_slider_pane_g15

0xa5ba,	// (0x00059595) main_cset6_slider_pane_g16_ParamLimits

0xa5ba,	// (0x00059595) main_cset6_slider_pane_g16

0xa5c8,	// (0x000595a3) main_cset6_slider_pane_g17_ParamLimits

0xa5c8,	// (0x000595a3) main_cset6_slider_pane_g17

0x0011,

0xfa7f,	// (0x0005ea5a) main_cset6_slider_pane_g_ParamLimits

0xfa7f,	// (0x0005ea5a) main_cset6_slider_pane_g

0x323c,	// (0x00052217) main_cset6_slider_pane_t1_ParamLimits

0x323c,	// (0x00052217) main_cset6_slider_pane_t1

0xa5ee,	// (0x000595c9) main_cset6_slider_pane_t2_ParamLimits

0xa5ee,	// (0x000595c9) main_cset6_slider_pane_t2

0xa619,	// (0x000595f4) main_cset6_slider_pane_t3_ParamLimits

0xa619,	// (0x000595f4) main_cset6_slider_pane_t3

0xa644,	// (0x0005961f) main_cset6_slider_pane_t4_ParamLimits

0xa644,	// (0x0005961f) main_cset6_slider_pane_t4

0xa66f,	// (0x0005964a) main_cset6_slider_pane_t5_ParamLimits

0xa66f,	// (0x0005964a) main_cset6_slider_pane_t5

0x327d,	// (0x00052258) main_cset6_slider_pane_t7_ParamLimits

0x327d,	// (0x00052258) main_cset6_slider_pane_t7

0xa69c,	// (0x00059677) main_cset6_slider_pane_t8_ParamLimits

0xa69c,	// (0x00059677) main_cset6_slider_pane_t8

0xa6c0,	// (0x0005969b) main_cset6_slider_pane_t9_ParamLimits

0xa6c0,	// (0x0005969b) main_cset6_slider_pane_t9

0xa6e4,	// (0x000596bf) main_cset6_slider_pane_t10_ParamLimits

0xa6e4,	// (0x000596bf) main_cset6_slider_pane_t10

0xa708,	// (0x000596e3) main_cset6_slider_pane_t11_ParamLimits

0xa708,	// (0x000596e3) main_cset6_slider_pane_t11

0x32b3,	// (0x0005228e) main_cset6_slider_pane_t14_ParamLimits

0x32b3,	// (0x0005228e) main_cset6_slider_pane_t14

0x32ec,	// (0x000522c7) main_cset6_slider_pane_t15_ParamLimits

0x32ec,	// (0x000522c7) main_cset6_slider_pane_t15

0x000b,

0xfaa4,	// (0x0005ea7f) main_cset6_slider_pane_t_ParamLimits

0xfaa4,	// (0x0005ea7f) main_cset6_slider_pane_t

0x2ac2,	// (0x00051a9d) cset_slider_pane_g1_copy1

0x2acb,	// (0x00051aa6) cset_slider_pane_g2_copy1

0x2ad4,	// (0x00051aaf) cset_slider_pane_g3_copy1

0xdb99,	// (0x0005cb74) bg_popup_sub_pane_cp011_copy1

0x3325,	// (0x00052300) main_cset_text_pane_g1_copy1

0x2b5d,	// (0x00051b38) main_cset_text_pane_t1_copy1

0x2b6b,	// (0x00051b46) main_cset_text_pane_t2_copy1

0x2b79,	// (0x00051b54) main_cset_text_pane_t3_copy1

0x2b87,	// (0x00051b62) main_cset_text_pane_t4_copy1

0x2b95,	// (0x00051b70) main_cset_text_pane_t5_copy1

0x332d,	// (0x00052308) main_cset_text_pane_t6_copy1

0x333b,	// (0x00052316) main_cset_text_pane_t7_copy1

0xa749,	// (0x00059724) main_cset_text2_pane_t1_copy1

0x7450,	// (0x0005642b) main_ncimui_pane

0x74af,	// (0x0005648a) popup_query_ncimui_window_ParamLimits

0x74af,	// (0x0005648a) popup_query_ncimui_window

0x1433,	// (0x0005040e) field_cale_ev2_pane_g4_ParamLimits

0x1433,	// (0x0005040e) field_cale_ev2_pane_g4

0x8663,	// (0x0005763e) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8663,	// (0x0005763e) cell_video_dialer_keypad_pane_g2

0x0001,

0xf788,	// (0x0005e763) cell_video_dialer_keypad_pane_g_ParamLimits

0xf788,	// (0x0005e763) cell_video_dialer_keypad_pane_g

0x867b,	// (0x00057656) cell_video_dialer_keypad_pane_t1

0xdb99,	// (0x0005cb74) bg_popup_window_pane_cp012

0xec92,	// (0x0005dc6d) heading_pane_cp06

0x3367,	// (0x00052342) ncim_query_content_pane

0xdb99,	// (0x0005cb74) bg_popup_heading_pane_cp01

0x336f,	// (0x0005234a) ncim_heading_pane_t1

0x337d,	// (0x00052358) ncim_indicator_popup_pane

0x338f,	// (0x0005236a) ncim_query_button_pane

0x33a3,	// (0x0005237e) ncim_query_content_pane_t1

0x33b5,	// (0x00052390) ncim_query_content_pane_t2

0x0005,

0xfae8,	// (0x0005eac3) ncim_query_content_pane_t

0x33ef,	// (0x000523ca) ncim_query_list_pane

0x3401,	// (0x000523dc) ncim_query_popup_pane

0x337d,	// (0x00052358) ncim_indicator_popup_pane_ParamLimits

0xa89c,	// (0x00059877) ncim_query_content_pane_g1_ParamLimits

0xa89c,	// (0x00059877) ncim_query_content_pane_g1

0x33a3,	// (0x0005237e) ncim_query_content_pane_t1_ParamLimits

0x33b5,	// (0x00052390) ncim_query_content_pane_t2_ParamLimits

0xa8a8,	// (0x00059883) ncim_query_content_pane_t3_ParamLimits

0xa8a8,	// (0x00059883) ncim_query_content_pane_t3

0xa8c5,	// (0x000598a0) ncim_query_content_pane_t4_ParamLimits

0xa8c5,	// (0x000598a0) ncim_query_content_pane_t4

0xa8e2,	// (0x000598bd) ncim_query_content_pane_t5_ParamLimits

0xa8e2,	// (0x000598bd) ncim_query_content_pane_t5

0x33c7,	// (0x000523a2) ncim_query_content_pane_t6_ParamLimits

0x33c7,	// (0x000523a2) ncim_query_content_pane_t6

0xfae8,	// (0x0005eac3) ncim_query_content_pane_t_ParamLimits

0x33ef,	// (0x000523ca) ncim_query_list_pane_ParamLimits

0x3401,	// (0x000523dc) ncim_query_popup_pane_ParamLimits

0x3415,	// (0x000523f0) wait_bar_pane_cp04

0xdb99,	// (0x0005cb74) input_focus_pane_cp011

0x341d,	// (0x000523f8) ncim_query_popup_pane_t1

0x342b,	// (0x00052406) ncim_list_query_list_pane_ParamLimits

0x342b,	// (0x00052406) ncim_list_query_list_pane

0xdb99,	// (0x0005cb74) bg_button_pane_cp027

0x3438,	// (0x00052413) ncim_query_button_pane_g1

0xdb99,	// (0x0005cb74) list_highlight_pane_cp012

0x3442,	// (0x0005241d) ncim_list_query_list_pane_g1

0x344a,	// (0x00052425) ncim_list_query_list_pane_t1

0x8dcd,	// (0x00057da8) cam4_indicators_pane_g3_ParamLimits

0x8dcd,	// (0x00057da8) cam4_indicators_pane_g3

0x8ed4,	// (0x00057eaf) vid4_indicators_pane_g5_ParamLimits

0x8ed4,	// (0x00057eaf) vid4_indicators_pane_g5

0x9f67,	// (0x00058f42) vid4_progress_pane_g5_ParamLimits

0x9f67,	// (0x00058f42) vid4_progress_pane_g5

0xa788,	// (0x00059763) main_ncimui_pane_g1

0xa7f0,	// (0x000597cb) ncimui_group_query_pane_ParamLimits

0xa7f0,	// (0x000597cb) ncimui_group_query_pane

0xa838,	// (0x00059813) ncimui_list_pane_ParamLimits

0xa838,	// (0x00059813) ncimui_list_pane

0xa85f,	// (0x0005983a) ncimui_text_pane_ParamLimits

0xa85f,	// (0x0005983a) ncimui_text_pane

0xa8ff,	// (0x000598da) ncimui_text_pane_t1_ParamLimits

0xa8ff,	// (0x000598da) ncimui_text_pane_t1

0x3458,	// (0x00052433) ncimui_list_single_graphic_pane_ParamLimits

0x3458,	// (0x00052433) ncimui_list_single_graphic_pane

0xa91e,	// (0x000598f9) ncimui_query_pane_ParamLimits

0xa91e,	// (0x000598f9) ncimui_query_pane

0xdb99,	// (0x0005cb74) list_highlight_pane_cp013

0x3468,	// (0x00052443) ncim_list_query_list_pane_t1_copy1

0x3442,	// (0x0005241d) ncim_list_single_graphic_pane_g1

0xa931,	// (0x0005990c) ncim_query_button_pane_cp01

0xa93d,	// (0x00059918) ncim_query_entry_pane_ParamLimits

0xa93d,	// (0x00059918) ncim_query_entry_pane

0xa950,	// (0x0005992b) ncimui_query_pane_g1

0xa95c,	// (0x00059937) ncimui_query_pane_t1_ParamLimits

0xa95c,	// (0x00059937) ncimui_query_pane_t1

0xdbd6,	// (0x0005cbb1) input_focus_pane_cp012

0x3476,	// (0x00052451) ncim_query_entry_pane_t1

0xe3ed,	// (0x0005d3c8) main_im_pane_ParamLimits

0x7450,	// (0x0005642b) main_mobtv_pane_ParamLimits

0x7450,	// (0x0005642b) main_mobtv_pane

0xa5d6,	// (0x000595b1) main_cset6_slider_pane_g18_ParamLimits

0xa5d6,	// (0x000595b1) main_cset6_slider_pane_g18

0xa5e2,	// (0x000595bd) main_cset6_slider_pane_g19_ParamLimits

0xa5e2,	// (0x000595bd) main_cset6_slider_pane_g19

0x0097,	// (0x0004f072) bg_main_mobtv_pane_ParamLimits

0x0097,	// (0x0004f072) bg_main_mobtv_pane

0xa975,	// (0x00059950) main_mobtv_info_pane

0xa980,	// (0x0005995b) main_mobtv_loading_pane_ParamLimits

0xa980,	// (0x0005995b) main_mobtv_loading_pane

0x3488,	// (0x00052463) main_mobtv_pg_channel_list_pane

0x3492,	// (0x0005246d) main_mobtv_pg_hdr_pane

0xa98d,	// (0x00059968) main_mobtv_programe_curr_pane_ParamLimits

0xa98d,	// (0x00059968) main_mobtv_programe_curr_pane

0xa99a,	// (0x00059975) main_mobtv_programe_next_pane_ParamLimits

0xa99a,	// (0x00059975) main_mobtv_programe_next_pane

0x349b,	// (0x00052476) popup_mobtv_noti_window

0xe38f,	// (0x0005d36a) main_tv_pg_hdr_pane_g1

0x34a3,	// (0x0005247e) main_tv_pg_hdr_pane_g2

0x34ab,	// (0x00052486) main_tv_pg_hdr_pane_g3

0x34b3,	// (0x0005248e) main_tv_pg_hdr_pane_g4

0x34bb,	// (0x00052496) main_tv_pg_hdr_pane_g5

0x34c5,	// (0x000524a0) main_tv_pg_hdr_pane_g6

0x34cf,	// (0x000524aa) main_tv_pg_hdr_pane_g7

0x34d9,	// (0x000524b4) main_tv_pg_hdr_pane_g8

0x34e3,	// (0x000524be) main_tv_pg_hdr_pane_g9

0x34ed,	// (0x000524c8) main_tv_pg_hdr_pane_g10

0x34f7,	// (0x000524d2) main_tv_pg_hdr_pane_g11

0x000a,

0xfaf5,	// (0x0005ead0) main_tv_pg_hdr_pane_g

0x3501,	// (0x000524dc) main_tv_pg_hdr_pane_t1

0x350f,	// (0x000524ea) main_tv_pg_hdr_pane_t2

0x351d,	// (0x000524f8) main_tv_pg_hdr_pane_t3

0x352d,	// (0x00052508) main_tv_pg_hdr_pane_t4

0x353d,	// (0x00052518) main_tv_pg_hdr_pane_t5

0x0004,

0xfb0c,	// (0x0005eae7) main_tv_pg_hdr_pane_t

0x354d,	// (0x00052528) single_mobtv_pg_channel_pane_ParamLimits

0x354d,	// (0x00052528) single_mobtv_pg_channel_pane

0x355f,	// (0x0005253a) single_mobtv_pg_channel_table_pane

0x3568,	// (0x00052543) single_mobtv_pg_channel_thumb_pane

0x3571,	// (0x0005254c) single_tv_pg_channel_pane_g1

0x357a,	// (0x00052555) single_tv_pg_channel_pane_g2

0x0001,

0xfb17,	// (0x0005eaf2) single_tv_pg_channel_pane_g

0xe351,	// (0x0005d32c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xe351,	// (0x0005d32c) bg_single_mobtv_pg_channel_thumb_pane

0x3583,	// (0x0005255e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x3583,	// (0x0005255e) single_mobtv_pg_channel_thumb_pane_g1

0x3591,	// (0x0005256c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x3591,	// (0x0005256c) single_mobtv_pg_channel_thumb_pane_g2

0x359d,	// (0x00052578) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x359d,	// (0x00052578) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb1c,	// (0x0005eaf7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb1c,	// (0x0005eaf7) single_mobtv_pg_channel_thumb_pane_g

0x35a9,	// (0x00052584) single_mobtv_pg_channel_thumb_pane_t1

0x35b7,	// (0x00052592) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb23,	// (0x0005eafe) single_mobtv_pg_channel_thumb_pane_t

0xe38f,	// (0x0005d36a) bg_single_mobtv_pg_channel_table_pane_g1

0xe38f,	// (0x0005d36a) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf08c,	// (0x0005e067) bg_single_mobtv_pg_channel_table_pane_g

0x35c5,	// (0x000525a0) single_mobtv_pg_channel_table_pane_t1

0x35d3,	// (0x000525ae) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb28,	// (0x0005eb03) single_mobtv_pg_channel_table_pane_t

0xa9af,	// (0x0005998a) main_mobtv_info_pane_g1_ParamLimits

0xa9af,	// (0x0005998a) main_mobtv_info_pane_g1

0xa9cb,	// (0x000599a6) main_mobtv_info_pane_t1_ParamLimits

0xa9cb,	// (0x000599a6) main_mobtv_info_pane_t1

0xaa43,	// (0x00059a1e) main_mobtv_info_pane_t2_ParamLimits

0xaa43,	// (0x00059a1e) main_mobtv_info_pane_t2

0x0002,

0xfb32,	// (0x0005eb0d) main_mobtv_info_pane_t_ParamLimits

0xfb32,	// (0x0005eb0d) main_mobtv_info_pane_t

0xaad2,	// (0x00059aad) wait_bar_pane_cp05

0xaae4,	// (0x00059abf) main_mobtv_loading_pane_g1_ParamLimits

0xaae4,	// (0x00059abf) main_mobtv_loading_pane_g1

0xaaf2,	// (0x00059acd) main_mobtv_loading_pane_g2_ParamLimits

0xaaf2,	// (0x00059acd) main_mobtv_loading_pane_g2

0xaafe,	// (0x00059ad9) main_mobtv_loading_pane_g3_ParamLimits

0xaafe,	// (0x00059ad9) main_mobtv_loading_pane_g3

0x0002,

0xfb39,	// (0x0005eb14) main_mobtv_loading_pane_g_ParamLimits

0xfb39,	// (0x0005eb14) main_mobtv_loading_pane_g

0x35e1,	// (0x000525bc) main_mobtv_loading_pane_t1_ParamLimits

0x35e1,	// (0x000525bc) main_mobtv_loading_pane_t1

0x35f9,	// (0x000525d4) main_mobtv_loading_pane_t2_ParamLimits

0x35f9,	// (0x000525d4) main_mobtv_loading_pane_t2

0x0001,

0xfb40,	// (0x0005eb1b) main_mobtv_loading_pane_t_ParamLimits

0xfb40,	// (0x0005eb1b) main_mobtv_loading_pane_t

0xab0c,	// (0x00059ae7) wait_bar_pane_cp06_ParamLimits

0xab0c,	// (0x00059ae7) wait_bar_pane_cp06

0x361d,	// (0x000525f8) main_mobtv_programe_curr_pane_t1

0x362b,	// (0x00052606) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb45,	// (0x0005eb20) main_mobtv_programe_curr_pane_t

0x3639,	// (0x00052614) main_mobtv_programe_next_pane_t1

0x3647,	// (0x00052622) main_mobtv_programe_next_pane_t2

0x3655,	// (0x00052630) main_mobtv_programe_next_pane_t3

0x0002,

0xfb4a,	// (0x0005eb25) main_mobtv_programe_next_pane_t

0xdb99,	// (0x0005cb74) bg_popup_mobtv_noti_window_pane

0x3663,	// (0x0005263e) popup_mobtv_noti_window_g1

0x366b,	// (0x00052646) popup_mobtv_noti_window_t1

0x3679,	// (0x00052654) popup_mobtv_noti_window_t2

0x0001,

0xfb51,	// (0x0005eb2c) popup_mobtv_noti_window_t

0xe38f,	// (0x0005d36a) bg_popup_mobtv_noti_window_pane_g1

0x4a51,	// (0x00053a2c) sc_clock_pane

0x4a51,	// (0x00053a2c) main_fs_bigclock_pane

0xa141,	// (0x0005911c) blid2_tripm_pane_t4_ParamLimits

0xa141,	// (0x0005911c) blid2_tripm_pane_t4

0xe35f,	// (0x0005d33a) sc_clock_pane_g1_ParamLimits

0xe35f,	// (0x0005d33a) sc_clock_pane_g1

0xe3ad,	// (0x0005d388) sc_clock_pane_t1_ParamLimits

0xe3ad,	// (0x0005d388) sc_clock_pane_t1

0xe3ad,	// (0x0005d388) sc_clock_pane_t2_ParamLimits

0xe3ad,	// (0x0005d388) sc_clock_pane_t2

0xe3ad,	// (0x0005d388) sc_clock_pane_t3_ParamLimits

0xe3ad,	// (0x0005d388) sc_clock_pane_t3

0x0004,

0xfb56,	// (0x0005eb31) sc_clock_pane_t_ParamLimits

0xfb56,	// (0x0005eb31) sc_clock_pane_t

0xb550,	// (0x0005a52b) main_fs_bigclock_indicator_pane_ParamLimits

0xb550,	// (0x0005a52b) main_fs_bigclock_indicator_pane

0xab53,	// (0x00059b2e) main_fs_bigclock_pane_g1_ParamLimits

0xab53,	// (0x00059b2e) main_fs_bigclock_pane_g1

0xb55c,	// (0x0005a537) main_fs_bigclock_pane_t1_ParamLimits

0xb55c,	// (0x0005a537) main_fs_bigclock_pane_t1

0xb56e,	// (0x0005a549) main_fs_bigclock_pane_t2_ParamLimits

0xb56e,	// (0x0005a549) main_fs_bigclock_pane_t2

0xb582,	// (0x0005a55d) main_fs_bigclock_pane_t3_ParamLimits

0xb582,	// (0x0005a55d) main_fs_bigclock_pane_t3

0x0002,

0xfce4,	// (0x0005ecbf) main_fs_bigclock_pane_t_ParamLimits

0xfce4,	// (0x0005ecbf) main_fs_bigclock_pane_t

0xd226,	// (0x0005c201) main_fs_bigclock_indicator_pane_g1

0x3397,	// (0x00052372) ncim_query_content_pane_g2_ParamLimits

0x3397,	// (0x00052372) ncim_query_content_pane_g2

0x0001,

0xfae3,	// (0x0005eabe) ncim_query_content_pane_g_ParamLimits

0xfae3,	// (0x0005eabe) ncim_query_content_pane_g

0xe3ad,	// (0x0005d388) sc_clock_pane_t4_ParamLimits

0xe3ad,	// (0x0005d388) sc_clock_pane_t4

0x7450,	// (0x0005642b) main_radioblah_pane

0x8c88,	// (0x00057c63) cell_call4_button_pane_t1_copy1_ParamLimits

0x8c88,	// (0x00057c63) cell_call4_button_pane_t1_copy1

0xa7a2,	// (0x0005977d) main_ncimui_pane_t1_ParamLimits

0xa7a2,	// (0x0005977d) main_ncimui_pane_t1

0xa7bc,	// (0x00059797) main_ncimui_pane_t2_ParamLimits

0xa7bc,	// (0x00059797) main_ncimui_pane_t2

0x0002,

0xfadc,	// (0x0005eab7) main_ncimui_pane_t_ParamLimits

0xfadc,	// (0x0005eab7) main_ncimui_pane_t

0x00b9,	// (0x0004f094) main_radioblah_anim_pane_ParamLimits

0x00b9,	// (0x0004f094) main_radioblah_anim_pane

0x00b9,	// (0x0004f094) main_radioblah_info_pane_ParamLimits

0x00b9,	// (0x0004f094) main_radioblah_info_pane

0x00a5,	// (0x0004f080) main_radioblah_pane_t1_ParamLimits

0x00a5,	// (0x0004f080) main_radioblah_pane_t1

0x00a5,	// (0x0004f080) main_radioblah_pane_t2_ParamLimits

0x00a5,	// (0x0004f080) main_radioblah_pane_t2

0x0003,

0xfb77,	// (0x0005eb52) main_radioblah_pane_t_ParamLimits

0xfb77,	// (0x0005eb52) main_radioblah_pane_t

0xe343,	// (0x0005d31e) main_radioblah_rocker_ctrl_pane_ParamLimits

0xe343,	// (0x0005d31e) main_radioblah_rocker_ctrl_pane

0x1c90,	// (0x00050c6b) main_radioblah_info_pane_t1_ParamLimits

0x1c90,	// (0x00050c6b) main_radioblah_info_pane_t1

0x37ee,	// (0x000527c9) main_radioblah_info_pane_t2_ParamLimits

0x37ee,	// (0x000527c9) main_radioblah_info_pane_t2

0x0003,

0xfb80,	// (0x0005eb5b) main_radioblah_info_pane_t_ParamLimits

0xfb80,	// (0x0005eb5b) main_radioblah_info_pane_t

0xe38f,	// (0x0005d36a) main_radioblah_rocker_ctrl_pane_g1

0xe38f,	// (0x0005d36a) main_radioblah_rocker_ctrl_pane_g2

0xe38f,	// (0x0005d36a) main_radioblah_rocker_ctrl_pane_g3

0xe38f,	// (0x0005d36a) main_radioblah_rocker_ctrl_pane_g4

0xe38f,	// (0x0005d36a) main_radioblah_rocker_ctrl_pane_g5

0xe38f,	// (0x0005d36a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfb89,	// (0x0005eb64) main_radioblah_rocker_ctrl_pane_g

0xa749,	// (0x00059724) main_cset_text2_pane_t1_copy1_ParamLimits

0x8cfb,	// (0x00057cd6) cam4_image_uncrop_qvga_pane

0x8e42,	// (0x00057e1d) vid4_image_uncrop_qcif_pane

0xa2d5,	// (0x000592b0) cam6_image_uncrop_qvga_pane_ParamLimits

0xa2d5,	// (0x000592b0) cam6_image_uncrop_qvga_pane

0x309e,	// (0x00052079) vid6_image_uncrop_qcif_pane_ParamLimits

0x309e,	// (0x00052079) vid6_image_uncrop_qcif_pane

0xdb99,	// (0x0005cb74) bg_popup_preview_window_pane_cp03

0x3349,	// (0x00052324) list_cset_text2_pane

0x3351,	// (0x0005232c) main_cset6_text2_pane_g1

0x3359,	// (0x00052334) main_cset6_text2_pane_t1

0xab97,	// (0x00059b72) list_cset_text2_pane_t1_ParamLimits

0xab97,	// (0x00059b72) list_cset_text2_pane_t1

0x7450,	// (0x0005642b) main_radioblah_pane_ParamLimits

0xaabe,	// (0x00059a99) main_mobtv_info_pane_t3_ParamLimits

0xaabe,	// (0x00059a99) main_mobtv_info_pane_t3

0x0097,	// (0x0004f072) main_radioblah_pane_g1

0x37be,	// (0x00052799) main_radioblah_info_pane_g1

0xe3ad,	// (0x0005d388) main_radioblah_info_pane_t3_ParamLimits

0xe3ad,	// (0x0005d388) main_radioblah_info_pane_t3

0x64d4,	// (0x000554af) highlight_cell_cale_month_pane_ParamLimits

0x64d4,	// (0x000554af) highlight_cell_cale_month_pane

0x4a51,	// (0x00053a2c) main_phob_fisheye_pane

0x2380,	// (0x0005135b) scroll_pane_cp0031_ParamLimits

0x2380,	// (0x0005135b) scroll_pane_cp0031

0x31ac,	// (0x00052187) wait_bar_pane_cp08_ParamLimits

0xa4ed,	// (0x000594c8) cset_list_set_pane_copy1_ParamLimits

0x383d,	// (0x00052818) highlight_cell_cale_month_pane_g1

0xabb4,	// (0x00059b8f) highlight_cell_cale_month_pane_t1

0x2e19,	// (0x00051df4) list_gen_pane_cp01

0x29df,	// (0x000519ba) scroll_pane_01

0xabc2,	// (0x00059b9d) list_single_double_fisheye_pane

0xabcb,	// (0x00059ba6) list_double_fisheye_pane_g1_ParamLimits

0xabcb,	// (0x00059ba6) list_double_fisheye_pane_g1

0xabd7,	// (0x00059bb2) list_double_fisheye_pane_g2_ParamLimits

0xabd7,	// (0x00059bb2) list_double_fisheye_pane_g2

0xabeb,	// (0x00059bc6) list_double_fisheye_pane_g3_ParamLimits

0xabeb,	// (0x00059bc6) list_double_fisheye_pane_g3

0x0004,

0xfb96,	// (0x0005eb71) list_double_fisheye_pane_g_ParamLimits

0xfb96,	// (0x0005eb71) list_double_fisheye_pane_g

0xac14,	// (0x00059bef) list_double_fisheye_pane_t1_ParamLimits

0xac14,	// (0x00059bef) list_double_fisheye_pane_t1

0xac2f,	// (0x00059c0a) list_double_fisheye_pane_t2_ParamLimits

0xac2f,	// (0x00059c0a) list_double_fisheye_pane_t2

0x0001,

0xfba1,	// (0x0005eb7c) list_double_fisheye_pane_t_ParamLimits

0xfba1,	// (0x0005eb7c) list_double_fisheye_pane_t

0x4a51,	// (0x00053a2c) main_call5_pane

0xe343,	// (0x0005d31e) sc_swipe_pane_ParamLimits

0xe343,	// (0x0005d31e) sc_swipe_pane

0xac5d,	// (0x00059c38) call5_image_pane_ParamLimits

0xac5d,	// (0x00059c38) call5_image_pane

0xac6d,	// (0x00059c48) call5_swipe_1_pane_ParamLimits

0xac6d,	// (0x00059c48) call5_swipe_1_pane

0xac79,	// (0x00059c54) call5_swipe_2_pane_ParamLimits

0xac79,	// (0x00059c54) call5_swipe_2_pane

0xac93,	// (0x00059c6e) popup_call5_audio_first_window_ParamLimits

0xac93,	// (0x00059c6e) popup_call5_audio_first_window

0xe351,	// (0x0005d32c) call5_swipe_1_pane_g1_ParamLimits

0xe351,	// (0x0005d32c) call5_swipe_1_pane_g1

0x3845,	// (0x00052820) call5_swipe_1_pane_g2_ParamLimits

0x3845,	// (0x00052820) call5_swipe_1_pane_g2

0x0001,

0xfba6,	// (0x0005eb81) call5_swipe_1_pane_g_ParamLimits

0xfba6,	// (0x0005eb81) call5_swipe_1_pane_g

0x3851,	// (0x0005282c) call5_swipe_1_pane_t1_ParamLimits

0x3851,	// (0x0005282c) call5_swipe_1_pane_t1

0xe351,	// (0x0005d32c) call5_swipe_2_pane_g1_ParamLimits

0xe351,	// (0x0005d32c) call5_swipe_2_pane_g1

0x3866,	// (0x00052841) call5_swipe_2_pane_g2_ParamLimits

0x3866,	// (0x00052841) call5_swipe_2_pane_g2

0x0001,

0xfbab,	// (0x0005eb86) call5_swipe_2_pane_g_ParamLimits

0xfbab,	// (0x0005eb86) call5_swipe_2_pane_g

0x3872,	// (0x0005284d) call5_swipe_2_pane_t1_ParamLimits

0x3872,	// (0x0005284d) call5_swipe_2_pane_t1

0xe351,	// (0x0005d32c) sc_swipe_pane_g1_ParamLimits

0xe351,	// (0x0005d32c) sc_swipe_pane_g1

0xe35f,	// (0x0005d33a) sc_swipe_pane_g2_ParamLimits

0xe35f,	// (0x0005d33a) sc_swipe_pane_g2

0x0001,

0xfbb0,	// (0x0005eb8b) sc_swipe_pane_g_ParamLimits

0xfbb0,	// (0x0005eb8b) sc_swipe_pane_g

0xe399,	// (0x0005d374) sc_swipe_pane_t1_ParamLimits

0xe399,	// (0x0005d374) sc_swipe_pane_t1

0x4a51,	// (0x00053a2c) main_cmail_launcher_pane

0xaca1,	// (0x00059c7c) aid_size_cell_cmail_l_ParamLimits

0xaca1,	// (0x00059c7c) aid_size_cell_cmail_l

0xacaf,	// (0x00059c8a) grid_cmail_l_pane_ParamLimits

0xacaf,	// (0x00059c8a) grid_cmail_l_pane

0xacbf,	// (0x00059c9a) cell_cmail_l_pane_ParamLimits

0xacbf,	// (0x00059c9a) cell_cmail_l_pane

0x3887,	// (0x00052862) cell_cmail_l_pane_g1_ParamLimits

0x3887,	// (0x00052862) cell_cmail_l_pane_g1

0x3893,	// (0x0005286e) cell_cmail_l_pane_t1_ParamLimits

0x3893,	// (0x0005286e) cell_cmail_l_pane_t1

0x38a9,	// (0x00052884) cell_cmail_l_pane_t2_ParamLimits

0x38a9,	// (0x00052884) cell_cmail_l_pane_t2

0x0001,

0xfbb5,	// (0x0005eb90) cell_cmail_l_pane_t_ParamLimits

0xfbb5,	// (0x0005eb90) cell_cmail_l_pane_t

0xdbd6,	// (0x0005cbb1) grid_highlight_pane_cp018_ParamLimits

0xdbd6,	// (0x0005cbb1) grid_highlight_pane_cp018

0x4944,	// (0x0005391f) main2_pane_ParamLimits

0x4944,	// (0x0005391f) main2_pane

0xe47c,	// (0x0005d457) popup_sp_fs_action_menu_bg_pane_g1

0xe484,	// (0x0005d45f) popup_sp_fs_action_menu_bg_pane_g2

0xe48c,	// (0x0005d467) popup_sp_fs_action_menu_bg_pane_g3

0xe494,	// (0x0005d46f) popup_sp_fs_action_menu_bg_pane_g4

0xe49c,	// (0x0005d477) popup_sp_fs_action_menu_bg_pane_g5

0xe4a4,	// (0x0005d47f) popup_sp_fs_action_menu_bg_pane_g6

0xe4ac,	// (0x0005d487) popup_sp_fs_action_menu_bg_pane_g7

0xe4b4,	// (0x0005d48f) popup_sp_fs_action_menu_bg_pane_g8

0xe4bc,	// (0x0005d497) popup_sp_fs_action_menu_bg_pane_g9

0xe4c4,	// (0x0005d49f) popup_sp_fs_action_menu_bg_pane_g10

0xe4c4,	// (0x0005d49f) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf0dd,	// (0x0005e0b8) popup_sp_fs_action_menu_bg_pane_g

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g3_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g3_g1

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g3_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g3_g2

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g3_g3_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf18b,	// (0x0005e166) list_medium_line_x2_t3_g3_g_ParamLimits

0xf18b,	// (0x0005e166) list_medium_line_x2_t3_g3_g

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g3_t1

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g3_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g3_t2

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g3_t3

0x0002,

0xf192,	// (0x0005e16d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf192,	// (0x0005e16d) list_medium_line_x2_t3_g3_t

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g2_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g2_g1

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g2_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf199,	// (0x0005e174) list_medium_line_x2_t3_g2_g_ParamLimits

0xf199,	// (0x0005e174) list_medium_line_x2_t3_g2_g

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g2_t1

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g2_t2

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g2_t3

0x0002,

0xf192,	// (0x0005e16d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf192,	// (0x0005e16d) list_medium_line_x2_t3_g2_t

0xe351,	// (0x0005d32c) list_medium_line_x2_t4_g4_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t4_g4_g1

0xe351,	// (0x0005d32c) list_medium_line_x2_t4_g4_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t4_g4_g2

0xe351,	// (0x0005d32c) list_medium_line_x2_t4_g4_g3_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t4_g4_g3

0xe351,	// (0x0005d32c) list_medium_line_x2_t4_g4_g4_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf19e,	// (0x0005e179) list_medium_line_x2_t4_g4_g_ParamLimits

0xf19e,	// (0x0005e179) list_medium_line_x2_t4_g4_g

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g4_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g4_t1

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g4_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g4_t2

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g4_t3_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g4_t3

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g4_t4_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1a7,	// (0x0005e182) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1a7,	// (0x0005e182) list_medium_line_x2_t4_g4_t

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g4_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g4_g1

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g4_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g4_g2

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g4_g3_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g4_g3

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g4_g4_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf19e,	// (0x0005e179) list_medium_line_x2_t2_g4_g_ParamLimits

0xf19e,	// (0x0005e179) list_medium_line_x2_t2_g4_g

0xe399,	// (0x0005d374) list_medium_line_x2_t2_g4_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t2_g4_t1

0xe399,	// (0x0005d374) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t2_g4_t2

0x0001,

0xf20e,	// (0x0005e1e9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf20e,	// (0x0005e1e9) list_medium_line_x2_t2_g4_t

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g3_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g3_g1

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g3_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g3_g2

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g3_g3_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf18b,	// (0x0005e166) list_medium_line_x2_t2_g3_g_ParamLimits

0xf18b,	// (0x0005e166) list_medium_line_x2_t2_g3_g

0xe399,	// (0x0005d374) list_medium_line_x2_t2_g3_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t2_g3_t1

0xe399,	// (0x0005d374) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t2_g3_t2

0x0001,

0xf20e,	// (0x0005e1e9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf20e,	// (0x0005e1e9) list_medium_line_x2_t2_g3_t

0x66a4,	// (0x0005567f) main_sp_fs_list_pane_ParamLimits

0x66a4,	// (0x0005567f) main_sp_fs_list_pane

0x66b0,	// (0x0005568b) sp_fs_scroll_pane_ParamLimits

0x66b0,	// (0x0005568b) sp_fs_scroll_pane

0xeb0b,	// (0x0005dae6) list_medium_line_x2_t3_t1

0xeb0b,	// (0x0005dae6) list_medium_line_x2_t3_t2

0xeb0b,	// (0x0005dae6) list_medium_line_x2_t3_t3

0x0002,

0xf259,	// (0x0005e234) list_medium_line_x2_t3_t

0xeb0b,	// (0x0005dae6) list_medium_line_x3_t4_t1

0xeb0b,	// (0x0005dae6) list_medium_line_x3_t4_t2

0xeb0b,	// (0x0005dae6) list_medium_line_x3_t4_t3

0xeb0b,	// (0x0005dae6) list_medium_line_x3_t4_t4

0x0003,

0xf260,	// (0x0005e23b) list_medium_line_x3_t4_t

0xeb0b,	// (0x0005dae6) list_medium_line_x4_t5_t1

0xeb0b,	// (0x0005dae6) list_medium_line_x4_t5_t2

0xeb0b,	// (0x0005dae6) list_medium_line_x4_t5_t3

0xeb0b,	// (0x0005dae6) list_medium_line_x4_t5_t4

0xeb0b,	// (0x0005dae6) list_medium_line_x4_t5_t5

0x0004,

0xf269,	// (0x0005e244) list_medium_line_x4_t5_t

0xe351,	// (0x0005d32c) list_medium_line_t4_g4_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t4_g4_g1

0xe351,	// (0x0005d32c) list_medium_line_t4_g4_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t4_g4_g2

0xe351,	// (0x0005d32c) list_medium_line_t4_g4_g3_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t4_g4_g3

0xe351,	// (0x0005d32c) list_medium_line_t4_g4_g4_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t4_g4_g4

0x0003,

0xf19e,	// (0x0005e179) list_medium_line_t4_g4_g_ParamLimits

0xf19e,	// (0x0005e179) list_medium_line_t4_g4_g

0xe399,	// (0x0005d374) list_medium_line_t4_g4_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t4_g4_t1

0xe399,	// (0x0005d374) list_medium_line_t4_g4_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t4_g4_t2

0xe399,	// (0x0005d374) list_medium_line_t4_g4_t3_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t4_g4_t3

0xe399,	// (0x0005d374) list_medium_line_t4_g4_t4_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t4_g4_t4

0x0003,

0xf1a7,	// (0x0005e182) list_medium_line_t4_g4_t_ParamLimits

0xf1a7,	// (0x0005e182) list_medium_line_t4_g4_t

0x6799,	// (0x00055774) chi_dic_find_pane_g1

0x746c,	// (0x00056447) main_tport_pane

0xeb0b,	// (0x0005dae6) list_medium_line_plain_t1

0xe351,	// (0x0005d32c) list_medium_line_t2_g2_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t2_g2_g1

0xe351,	// (0x0005d32c) list_medium_line_t2_g2_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t2_g2_g2

0x0001,

0xf199,	// (0x0005e174) list_medium_line_t2_g2_g_ParamLimits

0xf199,	// (0x0005e174) list_medium_line_t2_g2_g

0xe399,	// (0x0005d374) list_medium_line_t2_g2_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t2_g2_t1

0xe399,	// (0x0005d374) list_medium_line_t2_g2_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t2_g2_t2

0x0001,

0xf20e,	// (0x0005e1e9) list_medium_line_t2_g2_t_ParamLimits

0xf20e,	// (0x0005e1e9) list_medium_line_t2_g2_t

0x18f5,	// (0x000508d0) aid_sp_fs_list_icon_a_sm

0x18fd,	// (0x000508d8) aid_sp_fs_list_icon_d

0x2e22,	// (0x00051dfd) aid_sp_fs_text_primary

0x1905,	// (0x000508e0) aid_sp_fs_text_secondary

0xdb99,	// (0x0005cb74) list_medium_line

0xdb99,	// (0x0005cb74) list_medium_line_g2

0xdb99,	// (0x0005cb74) list_medium_line_g3

0xdb99,	// (0x0005cb74) list_medium_line_plain

0xdb99,	// (0x0005cb74) list_medium_line_plain_t2

0xdb99,	// (0x0005cb74) list_medium_line_plain_t3

0xdb99,	// (0x0005cb74) list_medium_line_right_icon

0xdb99,	// (0x0005cb74) list_medium_line_right_iconx2

0xdb99,	// (0x0005cb74) list_medium_line_t2

0xdb99,	// (0x0005cb74) list_medium_line_t2_g2

0xdb99,	// (0x0005cb74) list_medium_line_t2_g3

0xdb99,	// (0x0005cb74) list_medium_line_t2_right_icon

0xdb99,	// (0x0005cb74) list_medium_line_t2_right_iconx2

0xdb99,	// (0x0005cb74) list_medium_line_t3

0xdb99,	// (0x0005cb74) list_medium_line_t3_g2

0xdb99,	// (0x0005cb74) list_medium_line_t3_g3

0xdb99,	// (0x0005cb74) list_medium_line_t3_right_iconx2

0xdb99,	// (0x0005cb74) list_medium_line_t4_g4

0xdb99,	// (0x0005cb74) list_medium_line_x2

0xdb99,	// (0x0005cb74) list_medium_line_x2_t2_g2

0xdb99,	// (0x0005cb74) list_medium_line_x2_t2_g3

0xdb99,	// (0x0005cb74) list_medium_line_x2_t2_g4

0xdb99,	// (0x0005cb74) list_medium_line_x2_t3

0xdb99,	// (0x0005cb74) list_medium_line_x2_t3_g2

0xdb99,	// (0x0005cb74) list_medium_line_x2_t3_g3

0xdb99,	// (0x0005cb74) list_medium_line_x2_t3_g4

0xdb99,	// (0x0005cb74) list_medium_line_x2_t4_g2

0xdb99,	// (0x0005cb74) list_medium_line_x2_t4_g4

0xdb99,	// (0x0005cb74) list_medium_line_x3

0xdb99,	// (0x0005cb74) list_medium_line_x3_t4

0xdb99,	// (0x0005cb74) list_medium_line_x3_t4_g4

0xdb99,	// (0x0005cb74) list_medium_line_x4_t4

0xdb99,	// (0x0005cb74) list_medium_line_x4_t4_g7

0xdb99,	// (0x0005cb74) list_medium_line_x4_t5

0x9fc6,	// (0x00058fa1) list_single_fs_dyc_pane_ParamLimits

0x9fc6,	// (0x00058fa1) list_single_fs_dyc_pane

0xe351,	// (0x0005d32c) list_medium_line_x4_t4_g7_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x4_t4_g7_g1

0xe351,	// (0x0005d32c) list_medium_line_x4_t4_g7_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x4_t4_g7_g2

0xe351,	// (0x0005d32c) list_medium_line_x4_t4_g7_g3_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x4_t4_g7_g3

0xe351,	// (0x0005d32c) list_medium_line_x4_t4_g7_g4_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x4_t4_g7_g4

0xe351,	// (0x0005d32c) list_medium_line_x4_t4_g7_g5_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x4_t4_g7_g5

0xe351,	// (0x0005d32c) list_medium_line_x4_t4_g7_g6_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x4_t4_g7_g6

0xe35f,	// (0x0005d33a) list_medium_line_x4_t4_g7_g7_ParamLimits

0xe35f,	// (0x0005d33a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfabd,	// (0x0005ea98) list_medium_line_x4_t4_g7_g_ParamLimits

0xfabd,	// (0x0005ea98) list_medium_line_x4_t4_g7_g

0xe399,	// (0x0005d374) list_medium_line_x4_t4_g7_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x4_t4_g7_t1

0xe399,	// (0x0005d374) list_medium_line_x4_t4_g7_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x4_t4_g7_t2

0xe399,	// (0x0005d374) list_medium_line_x4_t4_g7_t3_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x4_t4_g7_t3

0xe3ad,	// (0x0005d388) list_medium_line_x4_t4_g7_t4_ParamLimits

0xe3ad,	// (0x0005d388) list_medium_line_x4_t4_g7_t4

0xe3ad,	// (0x0005d388) list_medium_line_x4_t4_g7_t5_ParamLimits

0xe3ad,	// (0x0005d388) list_medium_line_x4_t4_g7_t5

0x0004,

0xfacc,	// (0x0005eaa7) list_medium_line_x4_t4_g7_t_ParamLimits

0xfacc,	// (0x0005eaa7) list_medium_line_x4_t4_g7_t

0xa72c,	// (0x00059707) list_single_dyc_row_pane_ParamLimits

0xa72c,	// (0x00059707) list_single_dyc_row_pane

0xac51,	// (0x00059c2c) call5_gesture_pane_ParamLimits

0xac51,	// (0x00059c2c) call5_gesture_pane

0xac85,	// (0x00059c60) call5_windows_pane_ParamLimits

0xac85,	// (0x00059c60) call5_windows_pane

0xacd8,	// (0x00059cb3) call5_swipe_1_pane_cp_ParamLimits

0xacd8,	// (0x00059cb3) call5_swipe_1_pane_cp

0xace4,	// (0x00059cbf) call5_swipe_2_pane_cp_ParamLimits

0xace4,	// (0x00059cbf) call5_swipe_2_pane_cp

0xe60e,	// (0x0005d5e9) call5_image_pane_cp

0xacf0,	// (0x00059ccb) popup_call5_audio_first_window_cp_ParamLimits

0xacf0,	// (0x00059ccb) popup_call5_audio_first_window_cp

0x38c6,	// (0x000528a1) call5_swipe_1_pane_g1_cp_ParamLimits

0x38c6,	// (0x000528a1) call5_swipe_1_pane_g1_cp

0x38d3,	// (0x000528ae) call5_swipe_1_pane_g2_cp

0x38db,	// (0x000528b6) call5_swipe_1_pane_t1_cp_ParamLimits

0x38db,	// (0x000528b6) call5_swipe_1_pane_t1_cp

0x38c6,	// (0x000528a1) call5_swipe_2_pane_g1_cp_ParamLimits

0x38c6,	// (0x000528a1) call5_swipe_2_pane_g1_cp

0x38f0,	// (0x000528cb) call5_swipe_2_pane_g2_cp

0x38f8,	// (0x000528d3) call5_swipe_2_pane_t1_cp_ParamLimits

0x38f8,	// (0x000528d3) call5_swipe_2_pane_t1_cp

0xdbd6,	// (0x0005cbb1) main_sp_fs_email_pane

0x390d,	// (0x000528e8) main_sp_fs_listscroll_pane_te

0xacfe,	// (0x00059cd9) popup_sp_fs_action_menu_pane_ParamLimits

0xacfe,	// (0x00059cd9) popup_sp_fs_action_menu_pane

0xe38f,	// (0x0005d36a) bg_sp_fs_ctrlbar_pane_g1

0x3916,	// (0x000528f1) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x391f,	// (0x000528fa) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x3928,	// (0x00052903) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe38f,	// (0x0005d36a) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbba,	// (0x0005eb95) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x1ca4,	// (0x00050c7f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x1ca4,	// (0x00050c7f) bg_sp_fs_ctrlbar_ddmenu_pane

0x3931,	// (0x0005290c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x3931,	// (0x0005290c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x393d,	// (0x00052918) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x393d,	// (0x00052918) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbc3,	// (0x0005eb9e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbc3,	// (0x0005eb9e) main_sp_fs_ctrlbar_ddmenu_pane_g

0x3949,	// (0x00052924) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x3949,	// (0x00052924) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe38f,	// (0x0005d36a) list_medium_line_t2_right_icon_g1

0xeb0b,	// (0x0005dae6) list_medium_line_t2_right_icon_t1

0xeb0b,	// (0x0005dae6) list_medium_line_t2_right_icon_t2

0x0001,

0xfbc8,	// (0x0005eba3) list_medium_line_t2_right_icon_t

0x00b9,	// (0x0004f094) bg_sp_fs_ctrlbar_pane_ParamLimits

0x00b9,	// (0x0004f094) bg_sp_fs_ctrlbar_pane

0xad99,	// (0x00059d74) main_sp_fs_ctrlbar_button_pane_cp01

0xada1,	// (0x00059d7c) main_sp_fs_ctrlbar_ddmenu_pane

0x39bf,	// (0x0005299a) main_sp_fs_ctrlbar_pane_g1

0x39cb,	// (0x000529a6) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbcd,	// (0x0005eba8) main_sp_fs_ctrlbar_pane_g

0xaddd,	// (0x00059db8) main_sp_fs_ctrlbar_pane_t1

0xae18,	// (0x00059df3) main_sp_fs_ctrlbar_pane

0xae2e,	// (0x00059e09) main_sp_fs_listscroll_pane_te_cp01

0xae49,	// (0x00059e24) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xae49,	// (0x00059e24) popup_sp_fs_action_menu_pane_cp01

0xdbd6,	// (0x0005cbb1) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xdbd6,	// (0x0005cbb1) bg_sp_fs_highlight_list_pane_cp01

0x190e,	// (0x000508e9) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x190e,	// (0x000508e9) sp_fs_action_menu_list_gene_pane_g1

0x39f2,	// (0x000529cd) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x39f2,	// (0x000529cd) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbdb,	// (0x0005ebb6) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbdb,	// (0x0005ebb6) sp_fs_action_menu_list_gene_pane_g

0x191d,	// (0x000508f8) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x191d,	// (0x000508f8) sp_fs_action_menu_list_gene_pane_t1

0x1935,	// (0x00050910) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1935,	// (0x00050910) sp_fs_action_menu_list_gene_pane

0xcd92,	// (0x0005bd6d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcd92,	// (0x0005bd6d) popup_sp_fs_action_menu_bg_pane

0x1954,	// (0x0005092f) sp_fs_action_menu_list_pane_ParamLimits

0x1954,	// (0x0005092f) sp_fs_action_menu_list_pane

0xae69,	// (0x00059e44) sp_fs_scroll_pane_cp01_ParamLimits

0xae69,	// (0x00059e44) sp_fs_scroll_pane_cp01

0xeb0b,	// (0x0005dae6) list_medium_line_plain_t2_t1

0xeb0b,	// (0x0005dae6) list_medium_line_plain_t2_t2

0x0001,

0xfbc8,	// (0x0005eba3) list_medium_line_plain_t2_t

0xeb0b,	// (0x0005dae6) list_medium_line_plain_t3_t1

0xeb0b,	// (0x0005dae6) list_medium_line_plain_t3_t2

0xeb0b,	// (0x0005dae6) list_medium_line_plain_t3_t3

0x0002,

0xf259,	// (0x0005e234) list_medium_line_plain_t3_t

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g2_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g2_g1

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g2_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf199,	// (0x0005e174) list_medium_line_x2_t2_g2_g_ParamLimits

0xf199,	// (0x0005e174) list_medium_line_x2_t2_g2_g

0xe399,	// (0x0005d374) list_medium_line_x2_t2_g2_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t2_g2_t1

0xe399,	// (0x0005d374) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t2_g2_t2

0x0001,

0xf20e,	// (0x0005e1e9) list_medium_line_x2_t2_g2_t_ParamLimits

0xf20e,	// (0x0005e1e9) list_medium_line_x2_t2_g2_t

0xe351,	// (0x0005d32c) list_medium_line_x2_t4_g2_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t4_g2_g1

0xe351,	// (0x0005d32c) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t4_g2_g2

0x0001,

0xf199,	// (0x0005e174) list_medium_line_x2_t4_g2_g_ParamLimits

0xf199,	// (0x0005e174) list_medium_line_x2_t4_g2_g

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g2_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g2_t1

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g2_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g2_t2

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g2_t3_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g2_t3

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1a7,	// (0x0005e182) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1a7,	// (0x0005e182) list_medium_line_x2_t4_g2_t

0xe38f,	// (0x0005d36a) list_medium_line_t3_right_iconx2_g1

0xe38f,	// (0x0005d36a) list_medium_line_t3_right_iconx2_g2

0xe38f,	// (0x0005d36a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf375,	// (0x0005e350) list_medium_line_t3_right_iconx2_g

0xeb0b,	// (0x0005dae6) list_medium_line_t3_right_iconx2_t1

0xeb0b,	// (0x0005dae6) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbc8,	// (0x0005eba3) list_medium_line_t3_right_iconx2_t

0xe351,	// (0x0005d32c) list_medium_line_x3_t4_g4_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x3_t4_g4_g1

0xe351,	// (0x0005d32c) list_medium_line_x3_t4_g4_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x3_t4_g4_g2

0xe351,	// (0x0005d32c) list_medium_line_x3_t4_g4_g3_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x3_t4_g4_g3

0xe351,	// (0x0005d32c) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x3_t4_g4_g4

0x0003,

0xf19e,	// (0x0005e179) list_medium_line_x3_t4_g4_g_ParamLimits

0xf19e,	// (0x0005e179) list_medium_line_x3_t4_g4_g

0xe399,	// (0x0005d374) list_medium_line_x3_t4_g4_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x3_t4_g4_t1

0xe399,	// (0x0005d374) list_medium_line_x3_t4_g4_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x3_t4_g4_t2

0xe399,	// (0x0005d374) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x3_t4_g4_t3

0xe399,	// (0x0005d374) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1a7,	// (0x0005e182) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1a7,	// (0x0005e182) list_medium_line_x3_t4_g4_t

0xae8f,	// (0x00059e6a) list_single_dyc_row_text_pane_t1_ParamLimits

0xae8f,	// (0x00059e6a) list_single_dyc_row_text_pane_t1

0xaec6,	// (0x00059ea1) list_single_dyc_row_text_pane_t2_ParamLimits

0xaec6,	// (0x00059ea1) list_single_dyc_row_text_pane_t2

0x1974,	// (0x0005094f) list_single_dyc_row_text_pane_t3_ParamLimits

0x1974,	// (0x0005094f) list_single_dyc_row_text_pane_t3

0x0005,

0xfbe0,	// (0x0005ebbb) list_single_dyc_row_text_pane_t_ParamLimits

0xfbe0,	// (0x0005ebbb) list_single_dyc_row_text_pane_t

0x1998,	// (0x00050973) list_single_dyc_row_pane_g1_ParamLimits

0x1998,	// (0x00050973) list_single_dyc_row_pane_g1

0x19a4,	// (0x0005097f) list_single_dyc_row_pane_g2_ParamLimits

0x19a4,	// (0x0005097f) list_single_dyc_row_pane_g2

0x19b0,	// (0x0005098b) list_single_dyc_row_pane_g3_ParamLimits

0x19b0,	// (0x0005098b) list_single_dyc_row_pane_g3

0x19c3,	// (0x0005099e) list_single_dyc_row_pane_g4_ParamLimits

0x19c3,	// (0x0005099e) list_single_dyc_row_pane_g4

0x0006,

0xfbed,	// (0x0005ebc8) list_single_dyc_row_pane_g_ParamLimits

0xfbed,	// (0x0005ebc8) list_single_dyc_row_pane_g

0x1a15,	// (0x000509f0) list_single_dyc_row_text_pane_ParamLimits

0x1a15,	// (0x000509f0) list_single_dyc_row_text_pane

0xdb99,	// (0x0005cb74) bg_sp_fs_scroll_pane

0xcda0,	// (0x0005bd7b) thumb_sp_fs_scroll_pane

0xe351,	// (0x0005d32c) list_medium_line_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_g1

0xe399,	// (0x0005d374) list_medium_line_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t1

0xe351,	// (0x0005d32c) list_medium_line_x2_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_g1

0xe351,	// (0x0005d32c) list_medium_line_x2_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_g2

0x0001,

0xf199,	// (0x0005e174) list_medium_line_x2_g_ParamLimits

0xf199,	// (0x0005e174) list_medium_line_x2_g

0xe399,	// (0x0005d374) list_medium_line_x2_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t1

0xe351,	// (0x0005d32c) list_medium_line_x3_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x3_g1

0xcd7c,	// (0x0005bd57) list_medium_line_x3_g2_ParamLimits

0xcd7c,	// (0x0005bd57) list_medium_line_x3_g2

0x0001,

0xfbfc,	// (0x0005ebd7) list_medium_line_x3_g_ParamLimits

0xfbfc,	// (0x0005ebd7) list_medium_line_x3_g

0xcda9,	// (0x0005bd84) list_medium_line_x3_t1_ParamLimits

0xcda9,	// (0x0005bd84) list_medium_line_x3_t1

0xcdbd,	// (0x0005bd98) thumb_sp_fs_scroll_pane_g1

0xcdc6,	// (0x0005bda1) thumb_sp_fs_scroll_pane_g2

0xcdcf,	// (0x0005bdaa) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x0005ebdc) thumb_sp_fs_scroll_pane_g

0xcdbd,	// (0x0005bd98) bg_sp_fs_scroll_pane_g1

0xcdc6,	// (0x0005bda1) bg_sp_fs_scroll_pane_g2

0xcdcf,	// (0x0005bdaa) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc01,	// (0x0005ebdc) bg_sp_fs_scroll_pane_g

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g4_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g4_g1

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g4_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g4_g2

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g4_g3_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g4_g3

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g4_g4_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf19e,	// (0x0005e179) list_medium_line_x2_t3_g4_g_ParamLimits

0xf19e,	// (0x0005e179) list_medium_line_x2_t3_g4_g

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g4_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g4_t1

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g4_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g4_t2

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_x2_t3_g4_t3

0x0002,

0xf192,	// (0x0005e16d) list_medium_line_x2_t3_g4_t_ParamLimits

0xf192,	// (0x0005e16d) list_medium_line_x2_t3_g4_t

0xe351,	// (0x0005d32c) list_medium_line_g2_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_g2_g1

0xe351,	// (0x0005d32c) list_medium_line_g2_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_g2_g2

0x0001,

0xf199,	// (0x0005e174) list_medium_line_g2_g_ParamLimits

0xf199,	// (0x0005e174) list_medium_line_g2_g

0xe399,	// (0x0005d374) list_medium_line_g2_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_g2_t1

0xe351,	// (0x0005d32c) list_medium_line_t3_g2_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t3_g2_g1

0xe351,	// (0x0005d32c) list_medium_line_t3_g2_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t3_g2_g2

0x0001,

0xf199,	// (0x0005e174) list_medium_line_t3_g2_g_ParamLimits

0xf199,	// (0x0005e174) list_medium_line_t3_g2_g

0xe399,	// (0x0005d374) list_medium_line_t3_g2_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t3_g2_t1

0xe399,	// (0x0005d374) list_medium_line_t3_g2_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t3_g2_t2

0xe399,	// (0x0005d374) list_medium_line_t3_g2_t3_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t3_g2_t3

0x0002,

0xf192,	// (0x0005e16d) list_medium_line_t3_g2_t_ParamLimits

0xf192,	// (0x0005e16d) list_medium_line_t3_g2_t

0xe38f,	// (0x0005d36a) list_medium_line_right_icon_g1

0xeb0b,	// (0x0005dae6) list_medium_line_right_icon_t1

0xe351,	// (0x0005d32c) list_medium_line_t2_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t2_g1

0xe399,	// (0x0005d374) list_medium_line_t2_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t2_t1

0xe399,	// (0x0005d374) list_medium_line_t2_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t2_t2

0x0001,

0xf20e,	// (0x0005e1e9) list_medium_line_t2_t_ParamLimits

0xf20e,	// (0x0005e1e9) list_medium_line_t2_t

0xe351,	// (0x0005d32c) list_medium_line_t3_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t3_g1

0xe399,	// (0x0005d374) list_medium_line_t3_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t3_t1

0xe399,	// (0x0005d374) list_medium_line_t3_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t3_t2

0xe399,	// (0x0005d374) list_medium_line_t3_t3_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t3_t3

0x0002,

0xf192,	// (0x0005e16d) list_medium_line_t3_t_ParamLimits

0xf192,	// (0x0005e16d) list_medium_line_t3_t

0xe351,	// (0x0005d32c) list_medium_line_g3_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_g3_g1

0xe351,	// (0x0005d32c) list_medium_line_g3_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_g3_g2

0xe351,	// (0x0005d32c) list_medium_line_g3_g3_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_g3_g3

0x0002,

0xf18b,	// (0x0005e166) list_medium_line_g3_g_ParamLimits

0xf18b,	// (0x0005e166) list_medium_line_g3_g

0xe399,	// (0x0005d374) list_medium_line_g3_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_g3_t1

0xe351,	// (0x0005d32c) list_medium_line_t2_g3_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t2_g3_g1

0xe351,	// (0x0005d32c) list_medium_line_t2_g3_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t2_g3_g2

0xe351,	// (0x0005d32c) list_medium_line_t2_g3_g3_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t2_g3_g3

0x0002,

0xf18b,	// (0x0005e166) list_medium_line_t2_g3_g_ParamLimits

0xf18b,	// (0x0005e166) list_medium_line_t2_g3_g

0xe399,	// (0x0005d374) list_medium_line_t2_g3_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t2_g3_t1

0xe399,	// (0x0005d374) list_medium_line_t2_g3_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t2_g3_t2

0x0001,

0xf20e,	// (0x0005e1e9) list_medium_line_t2_g3_t_ParamLimits

0xf20e,	// (0x0005e1e9) list_medium_line_t2_g3_t

0xe351,	// (0x0005d32c) list_medium_line_t3_g3_g1_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t3_g3_g1

0xe351,	// (0x0005d32c) list_medium_line_t3_g3_g2_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t3_g3_g2

0xe351,	// (0x0005d32c) list_medium_line_t3_g3_g3_ParamLimits

0xe351,	// (0x0005d32c) list_medium_line_t3_g3_g3

0x0002,

0xf18b,	// (0x0005e166) list_medium_line_t3_g3_g_ParamLimits

0xf18b,	// (0x0005e166) list_medium_line_t3_g3_g

0xe399,	// (0x0005d374) list_medium_line_t3_g3_t1_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t3_g3_t1

0xe399,	// (0x0005d374) list_medium_line_t3_g3_t2_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t3_g3_t2

0xe399,	// (0x0005d374) list_medium_line_t3_g3_t3_ParamLimits

0xe399,	// (0x0005d374) list_medium_line_t3_g3_t3

0x0002,

0xf192,	// (0x0005e16d) list_medium_line_t3_g3_t_ParamLimits

0xf192,	// (0x0005e16d) list_medium_line_t3_g3_t

0xe38f,	// (0x0005d36a) list_medium_line_right_iconx2_g1

0xe38f,	// (0x0005d36a) list_medium_line_right_iconx2_g2

0x0001,

0xf08c,	// (0x0005e067) list_medium_line_right_iconx2_g

0xeb0b,	// (0x0005dae6) list_medium_line_right_iconx2_t1

0xe38f,	// (0x0005d36a) list_medium_line_t2_right_iconx2_g1

0xe38f,	// (0x0005d36a) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf08c,	// (0x0005e067) list_medium_line_t2_right_iconx2_g

0xeb0b,	// (0x0005dae6) list_medium_line_t2_right_iconx2_t1

0xeb0b,	// (0x0005dae6) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbc8,	// (0x0005eba3) list_medium_line_t2_right_iconx2_t

0xeb0b,	// (0x0005dae6) list_medium_line_x4_t4_t1

0xeb0b,	// (0x0005dae6) list_medium_line_x4_t4_t2

0xeb0b,	// (0x0005dae6) list_medium_line_x4_t4_t3

0xeb0b,	// (0x0005dae6) list_medium_line_x4_t4_t4

0x0003,

0xf260,	// (0x0005e23b) list_medium_line_x4_t4_t

0xb013,	// (0x00059fee) tport_appsw_pane_ParamLimits

0xb013,	// (0x00059fee) tport_appsw_pane

0xb021,	// (0x00059ffc) tport_contact_pane_ParamLimits

0xb021,	// (0x00059ffc) tport_contact_pane

0xb031,	// (0x0005a00c) tport_listscroll_pane_ParamLimits

0xb031,	// (0x0005a00c) tport_listscroll_pane

0xb041,	// (0x0005a01c) cell_tport_appsw_pane_ParamLimits

0xb041,	// (0x0005a01c) cell_tport_appsw_pane

0xe35f,	// (0x0005d33a) tport_appsw_pane_g1_ParamLimits

0xe35f,	// (0x0005d33a) tport_appsw_pane_g1

0xcdd8,	// (0x0005bdb3) tport_contact_pane_g1

0x341d,	// (0x000523f8) tport_contact_pane_t1

0xcde1,	// (0x0005bdbc) tport_contact_pane_t2

0x0001,

0xfc08,	// (0x0005ebe3) tport_contact_pane_t

0xcdef,	// (0x0005bdca) list_tport_pane

0xcdf8,	// (0x0005bdd3) scroll_pane_cp_030

0xb074,	// (0x0005a04f) cell_tport_appsw_pane_g1

0xb084,	// (0x0005a05f) cell_tport_appsw_pane_t1

0xb092,	// (0x0005a06d) grid_highlight_pane_cp019

0xb09a,	// (0x0005a075) list_tport_double_graphic_pane_ParamLimits

0xb09a,	// (0x0005a075) list_tport_double_graphic_pane

0xdbd6,	// (0x0005cbb1) list_highlight_pane_cp023_ParamLimits

0xdbd6,	// (0x0005cbb1) list_highlight_pane_cp023

0xb0ab,	// (0x0005a086) list_tport_double_graphic_pane_g1_ParamLimits

0xb0ab,	// (0x0005a086) list_tport_double_graphic_pane_g1

0xb0b8,	// (0x0005a093) list_tport_double_graphic_pane_t1_ParamLimits

0xb0b8,	// (0x0005a093) list_tport_double_graphic_pane_t1

0xb0cd,	// (0x0005a0a8) list_tport_double_graphic_pane_t2_ParamLimits

0xb0cd,	// (0x0005a0a8) list_tport_double_graphic_pane_t2

0x0001,

0xfc14,	// (0x0005ebef) list_tport_double_graphic_pane_t_ParamLimits

0xfc14,	// (0x0005ebef) list_tport_double_graphic_pane_t

0xdb99,	// (0x0005cb74) main_cale_note_pane

0x90ad,	// (0x00058088) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x90ad,	// (0x00058088) cell_vitu2_function_top_wide_pane_cp01

0xaad2,	// (0x00059aad) wait_bar_pane_cp05_ParamLimits

0xdbd6,	// (0x0005cbb1) listscroll_cmail_pane

0xce09,	// (0x0005bde4) list_cmail_pane

0xb0df,	// (0x0005a0ba) list_cmail_body_pane

0xb106,	// (0x0005a0e1) list_single_cmail_header_caption_pane

0xb12f,	// (0x0005a10a) list_single_cmail_header_detail_pane_ParamLimits

0xb12f,	// (0x0005a10a) list_single_cmail_header_detail_pane

0xce20,	// (0x0005bdfb) list_single_cmail_header_caption_pane_t1

0xb169,	// (0x0005a144) list_single_cmail_header_detail_pane_g1_ParamLimits

0xb169,	// (0x0005a144) list_single_cmail_header_detail_pane_g1

0x1a3a,	// (0x00050a15) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1a3a,	// (0x00050a15) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc19,	// (0x0005ebf4) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc19,	// (0x0005ebf4) list_single_cmail_header_detail_pane_g

0xb17f,	// (0x0005a15a) list_single_cmail_header_detail_pane_t1_ParamLimits

0xb17f,	// (0x0005a15a) list_single_cmail_header_detail_pane_t1

0xb1bb,	// (0x0005a196) list_single_cmail_header_editor_pane_bg_ParamLimits

0xb1bb,	// (0x0005a196) list_single_cmail_header_editor_pane_bg

0x357a,	// (0x00052555) list_cmail_body_pane_g1

0xce44,	// (0x0005be1f) list_cmail_body_pane_t1

0x289f,	// (0x0005187a) list_single_cmail_header_editor_pane_bg_g1

0xe827,	// (0x0005d802) list_single_cmail_header_editor_pane_bg_g1_copy1

0x28af,	// (0x0005188a) list_single_cmail_header_editor_pane_bg_g1_copy2

0x28a7,	// (0x00051882) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2b0e,	// (0x00051ae9) list_single_cmail_header_editor_pane_bg_g1_copy4

0x28cf,	// (0x000518aa) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x28bf,	// (0x0005189a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x28c7,	// (0x000518a2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe807,	// (0x0005d7e2) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb1d2,	// (0x0005a1ad) calenote_gesture_pane_ParamLimits

0xb1d2,	// (0x0005a1ad) calenote_gesture_pane

0xb1ec,	// (0x0005a1c7) calenote_window_pane_ParamLimits

0xb1ec,	// (0x0005a1c7) calenote_window_pane

0xce52,	// (0x0005be2d) popup_note_window_cp01

0xb204,	// (0x0005a1df) calenote_swipe_1_pane_ParamLimits

0xb204,	// (0x0005a1df) calenote_swipe_1_pane

0xace4,	// (0x00059cbf) calenote_swipe_2_pane_ParamLimits

0xace4,	// (0x00059cbf) calenote_swipe_2_pane

0x38c6,	// (0x000528a1) calenote_swipe_1_pane_g1_ParamLimits

0x38c6,	// (0x000528a1) calenote_swipe_1_pane_g1

0xce64,	// (0x0005be3f) calenote_swipe_1_pane_g2_ParamLimits

0xce64,	// (0x0005be3f) calenote_swipe_1_pane_g2

0x0001,

0xfc25,	// (0x0005ec00) calenote_swipe_1_pane_g_ParamLimits

0xfc25,	// (0x0005ec00) calenote_swipe_1_pane_g

0xce70,	// (0x0005be4b) calenote_swipe_1_pane_t1_ParamLimits

0xce70,	// (0x0005be4b) calenote_swipe_1_pane_t1

0x38c6,	// (0x000528a1) calenote_swipe_2_pane_g1_ParamLimits

0x38c6,	// (0x000528a1) calenote_swipe_2_pane_g1

0xce8f,	// (0x0005be6a) calenote_swipe_2_pane_g2_ParamLimits

0xce8f,	// (0x0005be6a) calenote_swipe_2_pane_g2

0x0001,

0xfc2a,	// (0x0005ec05) calenote_swipe_2_pane_g_ParamLimits

0xfc2a,	// (0x0005ec05) calenote_swipe_2_pane_g

0xce9b,	// (0x0005be76) calenote_swipe_2_pane_t1_ParamLimits

0xce9b,	// (0x0005be76) calenote_swipe_2_pane_t1

0xdb99,	// (0x0005cb74) main_mup_navstr_pane

0x7fd0,	// (0x00056fab) main_mup3_pane_t7_ParamLimits

0x7fd0,	// (0x00056fab) main_mup3_pane_t7

0x8770,	// (0x0005774b) main_mp4_pane_g6_ParamLimits

0x8770,	// (0x0005774b) main_mp4_pane_g6

0x8ae4,	// (0x00057abf) main_image3_pane_t4_ParamLimits

0x8ae4,	// (0x00057abf) main_image3_pane_t4

0xb217,	// (0x0005a1f2) popup_navstr_preview_pane_ParamLimits

0xb217,	// (0x0005a1f2) popup_navstr_preview_pane

0xb223,	// (0x0005a1fe) scroll_navstr_pane_ParamLimits

0xb223,	// (0x0005a1fe) scroll_navstr_pane

0xdb99,	// (0x0005cb74) bg_popup_preview_window_pane_cp04

0xcec2,	// (0x0005be9d) popup_navstr_preview_pane_t1

0xb22f,	// (0x0005a20a) scroll_navstr_pane_g1_ParamLimits

0xb22f,	// (0x0005a20a) scroll_navstr_pane_g1

0xb23c,	// (0x0005a217) scroll_navstr_pane_t1_ParamLimits

0xb23c,	// (0x0005a217) scroll_navstr_pane_t1

0xce5b,	// (0x0005be36) bg_button_pane_cp014

0xce5b,	// (0x0005be36) bg_button_pane_cp030

0xabf7,	// (0x00059bd2) list_double_fisheye_pane_g4_ParamLimits

0xabf7,	// (0x00059bd2) list_double_fisheye_pane_g4

0xac03,	// (0x00059bde) list_double_fisheye_pane_g5_ParamLimits

0xac03,	// (0x00059bde) list_double_fisheye_pane_g5

0x399b,	// (0x00052976) sp_fs_scroll_pane_cp03

0x39bf,	// (0x0005299a) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x39cb,	// (0x000529a6) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbcd,	// (0x0005eba8) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xaddd,	// (0x00059db8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xce18,	// (0x0005bdf3) sp_fs_scroll_pane_cp02

0xe556,	// (0x0005d531) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe556,	// (0x0005d531) popup_sp_fs_calendar_preview_list_single_pane

0xdb99,	// (0x0005cb74) main_cam6_pano_pane

0x7450,	// (0x0005642b) main_mup3_pane_ParamLimits

0xdb99,	// (0x0005cb74) main_phacti_pane

0xa9a7,	// (0x00059982) bg_button_pane_cp11

0xa9bf,	// (0x0005999a) main_mobtv_info_pane_g2_ParamLimits

0xa9bf,	// (0x0005999a) main_mobtv_info_pane_g2

0x0001,

0xfb2d,	// (0x0005eb08) main_mobtv_info_pane_g_ParamLimits

0xfb2d,	// (0x0005eb08) main_mobtv_info_pane_g

0xe3ad,	// (0x0005d388) sc_clock_pane_t5_ParamLimits

0xe3ad,	// (0x0005d388) sc_clock_pane_t5

0x0097,	// (0x0004f072) main_radioblah_pane_g1_ParamLimits

0x00a5,	// (0x0004f080) main_radioblah_pane_t3_ParamLimits

0x00a5,	// (0x0004f080) main_radioblah_pane_t3

0x00a5,	// (0x0004f080) main_radioblah_pane_t4_ParamLimits

0x00a5,	// (0x0004f080) main_radioblah_pane_t4

0xe343,	// (0x0005d31e) main_radioblah_text_pane_ParamLimits

0xe343,	// (0x0005d31e) main_radioblah_text_pane

0x37be,	// (0x00052799) main_radioblah_info_pane_g1_ParamLimits

0x3802,	// (0x000527dd) main_radioblah_info_pane_t4_ParamLimits

0x3802,	// (0x000527dd) main_radioblah_info_pane_t4

0xdbd6,	// (0x0005cbb1) main_sp_fs_calendar_pane

0xb24e,	// (0x0005a229) main_phacti_pane_g1

0xb256,	// (0x0005a231) phacti_note_pane_ParamLimits

0xb256,	// (0x0005a231) phacti_note_pane

0xced9,	// (0x0005beb4) phacti_term_pane_ParamLimits

0xced9,	// (0x0005beb4) phacti_term_pane

0xceee,	// (0x0005bec9) phacti_note_pane_t1_ParamLimits

0xceee,	// (0x0005bec9) phacti_note_pane_t1

0x1a6a,	// (0x00050a45) phacti_term_pane_g1

0x1a72,	// (0x00050a4d) phacti_term_pane_t1_ParamLimits

0x1a72,	// (0x00050a4d) phacti_term_pane_t1

0xcf05,	// (0x0005bee0) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe5f5,	// (0x0005d5d0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc34,	// (0x0005ec0f) popup_sp_fs_calendar_preview_list_single_pane_g

0xcf0d,	// (0x0005bee8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcf0d,	// (0x0005bee8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcf23,	// (0x0005befe) aid_popup_sp_fs_bg_corner_pane

0xe38f,	// (0x0005d36a) popup_sp_fs_calendar_preview_bg_pane_g1

0xdb99,	// (0x0005cb74) popup_sp_fs_calendar_preview_bg_pane

0xcf2b,	// (0x0005bf06) popup_sp_fs_calendar_preview_list_pane

0xcf33,	// (0x0005bf0e) bg_main_sp_fs_cale_pane_ParamLimits

0xcf33,	// (0x0005bf0e) bg_main_sp_fs_cale_pane

0xcf4b,	// (0x0005bf26) listscroll_cale_mrui_pane_ParamLimits

0xcf4b,	// (0x0005bf26) listscroll_cale_mrui_pane

0x233c,	// (0x00051317) listscroll_sp_fs_schedule_track_pane

0x1aa5,	// (0x00050a80) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1aa5,	// (0x00050a80) main_sp_fs_ctrlbar_pane_cp01

0x233c,	// (0x00051317) main_sp_fs_ribbon_pane

0x1abb,	// (0x00050a96) popup_sp_fs_cale_preview_window

0x2610,	// (0x000515eb) list_single_sp_fs_schedule_track_pane_ParamLimits

0x2610,	// (0x000515eb) list_single_sp_fs_schedule_track_pane

0x2610,	// (0x000515eb) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2610,	// (0x000515eb) bg_sp_fs_highlight_list_pane_cp03

0x7cb4,	// (0x00056c8f) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7cb4,	// (0x00056c8f) list_single_sp_fs_schedule_track_pane_g1

0x7cb4,	// (0x00056c8f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7cb4,	// (0x00056c8f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc39,	// (0x0005ec14) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc39,	// (0x0005ec14) list_single_sp_fs_schedule_track_pane_g

0xb26c,	// (0x0005a247) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb26c,	// (0x0005a247) list_single_sp_fs_schedule_track_pane_t1

0x2792,	// (0x0005176d) sp_fs_schedule_track_pane_ParamLimits

0x2792,	// (0x0005176d) sp_fs_schedule_track_pane

0x2344,	// (0x0005131f) sp_fs_schedule_track_pane_g1

0x2344,	// (0x0005131f) sp_fs_schedule_track_pane_g2

0x2344,	// (0x0005131f) sp_fs_schedule_track_pane_g3

0x2344,	// (0x0005131f) sp_fs_schedule_track_pane_g4

0x2344,	// (0x0005131f) sp_fs_schedule_track_pane_g5

0x0004,

0xfc3e,	// (0x0005ec19) sp_fs_schedule_track_pane_g

0x2344,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g1

0x2344,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g2

0x2344,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g3

0x2344,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g4

0x2344,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g5

0x2344,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g6

0x2344,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g7

0x2344,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g8

0x2344,	// (0x0005131f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc49,	// (0x0005ec24) bg_sp_fs_schedule_viewer_highlight_g

0x233c,	// (0x00051317) bg_main_sp_fs_ribbon_pane

0x2344,	// (0x0005131f) main_sp_fs_ribbon_pane_g1

0xcf63,	// (0x0005bf3e) main_sp_fs_ribbon_pane_t1

0xcf63,	// (0x0005bf3e) main_sp_fs_ribbon_pane_t2

0xcf63,	// (0x0005bf3e) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc5c,	// (0x0005ec37) main_sp_fs_ribbon_pane_t

0x233c,	// (0x00051317) main_sp_fs_ribbon_scheduler_pane

0x2344,	// (0x0005131f) bg_main_sp_fs_ribbon_pane_g1

0x2344,	// (0x0005131f) bg_main_sp_fs_ribbon_pane_g2

0x2344,	// (0x0005131f) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xf6a5,	// (0x0005e680) bg_main_sp_fs_ribbon_pane_g

0x2344,	// (0x0005131f) main_sp_fs_ribbon_scheduler_pane_g1

0x2344,	// (0x0005131f) main_sp_fs_ribbon_scheduler_pane_g2

0x2344,	// (0x0005131f) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xf6a5,	// (0x0005e680) main_sp_fs_ribbon_scheduler_pane_g

0xcf71,	// (0x0005bf4c) list_cale_mrui_pane

0xb27e,	// (0x0005a259) sp_fs_scroll_pane_cp07_ParamLimits

0xb27e,	// (0x0005a259) sp_fs_scroll_pane_cp07

0x2610,	// (0x000515eb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x2610,	// (0x000515eb) bg_sp_fs_schedule_viewer_highlight

0x233c,	// (0x00051317) list_single_sp_fs_schedule_track_pane_cp01

0x233c,	// (0x00051317) list_sp_fs_schedule_track_pane

0xcf7e,	// (0x0005bf59) sp_fs_scroll_pane_cp06_ParamLimits

0xcf7e,	// (0x0005bf59) sp_fs_scroll_pane_cp06

0xe38f,	// (0x0005d36a) bgmain_sp_fs_calendar_pane_g1

0xb29a,	// (0x0005a275) list_single_cale_mrui_pane_ParamLimits

0xb29a,	// (0x0005a275) list_single_cale_mrui_pane

0x1acd,	// (0x00050aa8) list_single_cale_mrui_row_pane_ParamLimits

0x1acd,	// (0x00050aa8) list_single_cale_mrui_row_pane

0x1ada,	// (0x00050ab5) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1ada,	// (0x00050ab5) list_single_cale_mrui_row_pane_g1

0x1b12,	// (0x00050aed) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1b12,	// (0x00050aed) list_single_cale_mrui_row_pane_t1

0xb2c8,	// (0x0005a2a3) list_single_cale_mrui_row_pane_t2_ParamLimits

0xb2c8,	// (0x0005a2a3) list_single_cale_mrui_row_pane_t2

0x1b24,	// (0x00050aff) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1b24,	// (0x00050aff) list_single_cale_mrui_row_pane_t3

0x1b53,	// (0x00050b2e) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1b53,	// (0x00050b2e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc6a,	// (0x0005ec45) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc6a,	// (0x0005ec45) list_single_cale_mrui_row_pane_t

0xb32e,	// (0x0005a309) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xb32e,	// (0x0005a309) list_single_cmail_header_editor_pane_bg_cp01

0xb356,	// (0x0005a331) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xb356,	// (0x0005a331) list_single_cmail_header_editor_pane_bg_cp02

0xcf9f,	// (0x0005bf7a) main_radioblah_text_pane_t1_ParamLimits

0xcf9f,	// (0x0005bf7a) main_radioblah_text_pane_t1

0xcfb9,	// (0x0005bf94) cam6_indi_pane_cp01

0xcfc1,	// (0x0005bf9c) cam6_mode_pane_cp01

0xcfc9,	// (0x0005bfa4) cam6_pano_pane

0xcfd2,	// (0x0005bfad) cam6_zoom_pane_cp01

0xcfda,	// (0x0005bfb5) cam6_pano_image_pane

0xcfe5,	// (0x0005bfc0) cam6_pano_pane_g1

0x357a,	// (0x00052555) cam6_pano_pane_g2

0xcfee,	// (0x0005bfc9) cam6_pano_pane_g3

0xcff7,	// (0x0005bfd2) cam6_pano_pane_g4

0x25d7,	// (0x000515b2) cam6_pano_pane_g5

0xd000,	// (0x0005bfdb) cam6_pano_pane_g6

0xcd8a,	// (0x0005bd65) cam6_pano_pane_g7

0xd00a,	// (0x0005bfe5) cam6_pano_pane_g8

0xd013,	// (0x0005bfee) cam6_pano_pane_g9

0x0008,

0xfc73,	// (0x0005ec4e) cam6_pano_pane_g

0xdb99,	// (0x0005cb74) main_browser_tag_pane

0xceba,	// (0x0005be95) grid_navstr_albumart_pane

0xd01e,	// (0x0005bff9) cell_navstr_albumart_pane_ParamLimits

0xd01e,	// (0x0005bff9) cell_navstr_albumart_pane

0xd03e,	// (0x0005c019) cell_navstr_albumart_pane_g1

0xd046,	// (0x0005c021) cell_navstr_albumart_pane_g2

0xd04e,	// (0x0005c029) cell_navstr_albumart_pane_g3

0xd056,	// (0x0005c031) cell_navstr_albumart_pane_g4

0x0003,

0xfc86,	// (0x0005ec61) cell_navstr_albumart_pane_g

0xb372,	// (0x0005a34d) bt_list_pane_ParamLimits

0xb372,	// (0x0005a34d) bt_list_pane

0xb392,	// (0x0005a36d) bt_list_pane_t1

0xb3a1,	// (0x0005a37c) bt_list_pane_t2

0x0001,

0xfc8f,	// (0x0005ec6a) bt_list_pane_t

0xdb99,	// (0x0005cb74) main_cale_prevew_pane

0xb3b0,	// (0x0005a38b) popup_cale_preview_window_ParamLimits

0xb3b0,	// (0x0005a38b) popup_cale_preview_window

0xdbd6,	// (0x0005cbb1) bg_popup_preview_window_pane_cp05_ParamLimits

0xdbd6,	// (0x0005cbb1) bg_popup_preview_window_pane_cp05

0xd05e,	// (0x0005c039) list_cale_preview_pane_ParamLimits

0xd05e,	// (0x0005c039) list_cale_preview_pane

0xb3c9,	// (0x0005a3a4) list_double_cale_preview_pane_ParamLimits

0xb3c9,	// (0x0005a3a4) list_double_cale_preview_pane

0xb3db,	// (0x0005a3b6) list_single_cale_preview_pane_ParamLimits

0xb3db,	// (0x0005a3b6) list_single_cale_preview_pane

0xb3f1,	// (0x0005a3cc) list_single_cale_preview_pane_g1

0xb3f9,	// (0x0005a3d4) list_single_cale_preview_pane_t1_ParamLimits

0xb3f9,	// (0x0005a3d4) list_single_cale_preview_pane_t1

0xb40e,	// (0x0005a3e9) list_double_cale_preview_pane_g1

0xb416,	// (0x0005a3f1) list_double_cale_preview_pane_t1_ParamLimits

0xb416,	// (0x0005a3f1) list_double_cale_preview_pane_t1

0xb42b,	// (0x0005a406) list_double_cale_preview_pane_t2_ParamLimits

0xb42b,	// (0x0005a406) list_double_cale_preview_pane_t2

0x0001,

0xfc94,	// (0x0005ec6f) list_double_cale_preview_pane_t_ParamLimits

0xfc94,	// (0x0005ec6f) list_double_cale_preview_pane_t

0xdb99,	// (0x0005cb74) main_ezdial_pane

0xdbd6,	// (0x0005cbb1) main_sp_fs_email_pane_ParamLimits

0xad42,	// (0x00059d1d) cmail_ddmenu_btn01_pane_ParamLimits

0xad42,	// (0x00059d1d) cmail_ddmenu_btn01_pane

0xad5f,	// (0x00059d3a) cmail_ddmenu_btn02_pane_ParamLimits

0xad5f,	// (0x00059d3a) cmail_ddmenu_btn02_pane

0xad7d,	// (0x00059d58) cmail_ddmenu_btn03_pane_ParamLimits

0xad7d,	// (0x00059d58) cmail_ddmenu_btn03_pane

0xae18,	// (0x00059df3) main_sp_fs_ctrlbar_pane_ParamLimits

0xae2e,	// (0x00059e09) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb0df,	// (0x0005a0ba) list_cmail_body_pane_ParamLimits

0xce2e,	// (0x0005be09) bg_button_pane_cp12

0xce37,	// (0x0005be12) list_single_cmail_header_detail_pane_g3_ParamLimits

0xce37,	// (0x0005be12) list_single_cmail_header_detail_pane_g3

0x1a46,	// (0x00050a21) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1a46,	// (0x00050a21) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc20,	// (0x0005ebfb) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc20,	// (0x0005ebfb) list_single_cmail_header_detail_pane_t

0x1a87,	// (0x00050a62) phacti_term_pane_t2_ParamLimits

0x1a87,	// (0x00050a62) phacti_term_pane_t2

0x0001,

0xfc2f,	// (0x0005ec0a) phacti_term_pane_t_ParamLimits

0xfc2f,	// (0x0005ec0a) phacti_term_pane_t

0xd06a,	// (0x0005c045) aid_size_list_single_double

0xb443,	// (0x0005a41e) popup_ezdial_listscroll_window

0xd076,	// (0x0005c051) popup_number_entry_window_cp01

0xe60e,	// (0x0005d5e9) bg_popup_call_pane_cp09

0xd083,	// (0x0005c05e) ezdial_list_pane

0xd08b,	// (0x0005c066) scroll_pane_cp23

0x1ca4,	// (0x00050c7f) bg_button_pane_cp028_ParamLimits

0x1ca4,	// (0x00050c7f) bg_button_pane_cp028

0xb45c,	// (0x0005a437) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb45c,	// (0x0005a437) cmail_ddmenu_btn01_pane_g1

0xb46c,	// (0x0005a447) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb46c,	// (0x0005a447) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfc99,	// (0x0005ec74) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfc99,	// (0x0005ec74) cmail_ddmenu_btn01_pane_g

0xd093,	// (0x0005c06e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd093,	// (0x0005c06e) cmail_ddmenu_btn01_pane_t1

0x00b9,	// (0x0004f094) bg_button_pane_cp029_ParamLimits

0x00b9,	// (0x0004f094) bg_button_pane_cp029

0xb478,	// (0x0005a453) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb478,	// (0x0005a453) cmail_ddmenu_btn02_pane_g1

0xb490,	// (0x0005a46b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb490,	// (0x0005a46b) cmail_ddmenu_btn02_pane_t1

0xe343,	// (0x0005d31e) bg_button_pane_cp031_ParamLimits

0xe343,	// (0x0005d31e) bg_button_pane_cp031

0xb478,	// (0x0005a453) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb478,	// (0x0005a453) cmail_ddmenu_btn03_pane_g1

0xb490,	// (0x0005a46b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb490,	// (0x0005a46b) cmail_ddmenu_btn03_pane_t1

0xe399,	// (0x0005d374) cell_dialer2_keypad_pane_t1_ParamLimits

0x25f3,	// (0x000515ce) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x25f3,	// (0x000515ce) cell_dialer2_keypad_pane_t1_copy1

0xa7e8,	// (0x000597c3) ncimui_group_button_pane

0xdbd6,	// (0x0005cbb1) main_sp_fs_calendar_pane_ParamLimits

0xb106,	// (0x0005a0e1) list_single_cmail_header_caption_pane_ParamLimits

0x1a9c,	// (0x00050a77) aid_recal_txt_sm_pane

0xdb99,	// (0x0005cb74) mian_recal_day_pane

0x1abb,	// (0x00050a96) popup_sp_fs_cale_preview_window_ParamLimits

0xd0a9,	// (0x0005c084) list_recal_day_pane

0x1b9d,	// (0x00050b78) list_single_recal_day_pane_ParamLimits

0x1b9d,	// (0x00050b78) list_single_recal_day_pane

0xd0d0,	// (0x0005c0ab) list_single_recal_day_pane_g1_ParamLimits

0xd0d0,	// (0x0005c0ab) list_single_recal_day_pane_g1

0x1baf,	// (0x00050b8a) list_single_recal_day_pane_g2_ParamLimits

0x1baf,	// (0x00050b8a) list_single_recal_day_pane_g2

0x1bbb,	// (0x00050b96) list_single_recal_day_pane_g3_ParamLimits

0x1bbb,	// (0x00050b96) list_single_recal_day_pane_g3

0xb4b4,	// (0x0005a48f) list_single_recal_day_pane_g4_ParamLimits

0xb4b4,	// (0x0005a48f) list_single_recal_day_pane_g4

0x1bc7,	// (0x00050ba2) list_single_recal_day_pane_g5_ParamLimits

0x1bc7,	// (0x00050ba2) list_single_recal_day_pane_g5

0x1bd3,	// (0x00050bae) list_single_recal_day_pane_g6_ParamLimits

0x1bd3,	// (0x00050bae) list_single_recal_day_pane_g6

0x0004,

0xfca8,	// (0x0005ec83) list_single_recal_day_pane_g_ParamLimits

0xfca8,	// (0x0005ec83) list_single_recal_day_pane_g

0x1be7,	// (0x00050bc2) list_single_recal_day_pane_t1

0x1bf9,	// (0x00050bd4) list_single_recal_day_pane_t2

0x0001,

0xfcb3,	// (0x0005ec8e) list_single_recal_day_pane_t

0xb4cc,	// (0x0005a4a7) ncimui_query_button_pane_ParamLimits

0xb4cc,	// (0x0005a4a7) ncimui_query_button_pane

0xb4dc,	// (0x0005a4b7) ncimui_query_button_pane_t1_ParamLimits

0xb4dc,	// (0x0005a4b7) ncimui_query_button_pane_t1

0xd0dc,	// (0x0005c0b7) ncimui_query_button_pane_t2_ParamLimits

0xd0dc,	// (0x0005c0b7) ncimui_query_button_pane_t2

0x0001,

0xfcb8,	// (0x0005ec93) ncimui_query_button_pane_t_ParamLimits

0xfcb8,	// (0x0005ec93) ncimui_query_button_pane_t

0xb4ef,	// (0x0005a4ca) query_button_pane_ParamLimits

0xb4ef,	// (0x0005a4ca) query_button_pane

0xdb99,	// (0x0005cb74) bg_button_pane_cp0028

0xd0ef,	// (0x0005c0ca) query_button_pane_t1

0x746c,	// (0x00056447) main_tport_pane_ParamLimits

0xafe9,	// (0x00059fc4) bg_popup_window_pane_cp01_ParamLimits

0xafe9,	// (0x00059fc4) bg_popup_window_pane_cp01

0xaff7,	// (0x00059fd2) heading_pane_cp08_ParamLimits

0xaff7,	// (0x00059fd2) heading_pane_cp08

0xb005,	// (0x00059fe0) heading_pane_cp07_ParamLimits

0xb005,	// (0x00059fe0) heading_pane_cp07

0xb074,	// (0x0005a04f) cell_tport_appsw_pane_g2

0x0002,

0xfc0d,	// (0x0005ebe8) cell_tport_appsw_pane_g

0x6bbc,	// (0x00055b97) input_candi_list_open_g1

0xe9aa,	// (0x0005d985) list_cale_time_pane_g6_ParamLimits

0xe9aa,	// (0x0005d985) list_cale_time_pane_g6

0x7967,	// (0x00056942) aid_size_touch_calib_1_ParamLimits

0x7967,	// (0x00056942) aid_size_touch_calib_1

0x7973,	// (0x0005694e) aid_size_touch_calib_2_ParamLimits

0x7973,	// (0x0005694e) aid_size_touch_calib_2

0x7981,	// (0x0005695c) aid_size_touch_calib_3_ParamLimits

0x7981,	// (0x0005695c) aid_size_touch_calib_3

0x7991,	// (0x0005696c) aid_size_touch_calib_4_ParamLimits

0x7991,	// (0x0005696c) aid_size_touch_calib_4

0x799f,	// (0x0005697a) main_touch_calib_button_group_pane_ParamLimits

0x799f,	// (0x0005697a) main_touch_calib_button_group_pane

0x79ad,	// (0x00056988) main_touch_calib_pane_g1_ParamLimits

0x79b9,	// (0x00056994) main_touch_calib_pane_g2_ParamLimits

0x79c5,	// (0x000569a0) main_touch_calib_pane_g3_ParamLimits

0x79d1,	// (0x000569ac) main_touch_calib_pane_g4_ParamLimits

0xf653,	// (0x0005e62e) main_touch_calib_pane_g_ParamLimits

0x79dd,	// (0x000569b8) main_touch_calib_pane_t1_ParamLimits

0x79f6,	// (0x000569d1) main_touch_calib_pane_t2_ParamLimits

0x7a0f,	// (0x000569ea) main_touch_calib_pane_t3_ParamLimits

0x7a25,	// (0x00056a00) main_touch_calib_pane_t4_ParamLimits

0x7a3b,	// (0x00056a16) main_touch_calib_pane_t5_ParamLimits

0xf65c,	// (0x0005e637) main_touch_calib_pane_t_ParamLimits

0x23a4,	// (0x0005137f) list_single_fp_cale_pane_g3_ParamLimits

0x23a4,	// (0x0005137f) list_single_fp_cale_pane_g3

0x7450,	// (0x0005642b) bg_button_pane_cp012_ParamLimits

0x7450,	// (0x0005642b) bg_vkb2_func_pane_cp03_ParamLimits

0x98ee,	// (0x000588c9) cell_vitu2_function_top_pane_g1_ParamLimits

0x7450,	// (0x0005642b) bg_vkb2_func_pane_cp04_ParamLimits

0xa770,	// (0x0005974b) main_ncimui_button_group_pane_ParamLimits

0xa770,	// (0x0005974b) main_ncimui_button_group_pane

0xa7d6,	// (0x000597b1) main_ncimui_pane_t3_ParamLimits

0xa7d6,	// (0x000597b1) main_ncimui_pane_t3

0xced0,	// (0x0005beab) phacti_button_group_pane

0xd06a,	// (0x0005c045) aid_size_list_single_double_ParamLimits

0xb443,	// (0x0005a41e) popup_ezdial_listscroll_window_ParamLimits

0xd076,	// (0x0005c051) popup_number_entry_window_cp01_ParamLimits

0xb4fc,	// (0x0005a4d7) phacti_button_pane_ParamLimits

0xb4fc,	// (0x0005a4d7) phacti_button_pane

0xdb99,	// (0x0005cb74) bg_button_pane_cp14

0xd0fd,	// (0x0005c0d8) phacti_button_pane_t1

0xb50d,	// (0x0005a4e8) main_touch_calib_button_pane_ParamLimits

0xb50d,	// (0x0005a4e8) main_touch_calib_button_pane

0xe3ed,	// (0x0005d3c8) bg_button_pane_cp18_ParamLimits

0xe3ed,	// (0x0005d3c8) bg_button_pane_cp18

0xd10b,	// (0x0005c0e6) main_touch_calib_button_pane_t1_ParamLimits

0xd10b,	// (0x0005c0e6) main_touch_calib_button_pane_t1

0xd121,	// (0x0005c0fc) main_touch_calib_button_pane_t2_ParamLimits

0xd121,	// (0x0005c0fc) main_touch_calib_button_pane_t2

0x0001,

0xfcbd,	// (0x0005ec98) main_touch_calib_button_pane_t_ParamLimits

0xfcbd,	// (0x0005ec98) main_touch_calib_button_pane_t

0xdb99,	// (0x0005cb74) cell_ncimui_button_pane

0xdb99,	// (0x0005cb74) bg_button_pane_cp032

0xd13f,	// (0x0005c11a) cell_ncimui_button_pane_t1

0x89f7,	// (0x000579d2) image3_infobar_pane_ParamLimits

0x89f7,	// (0x000579d2) image3_infobar_pane

0xab18,	// (0x00059af3) fs_bigclock_status_pane_ParamLimits

0xab18,	// (0x00059af3) fs_bigclock_status_pane

0xab25,	// (0x00059b00) main_fs_bigclock_clock_pane_ParamLimits

0xab25,	// (0x00059b00) main_fs_bigclock_clock_pane

0xab39,	// (0x00059b14) main_fs_bigclock_indi_pane_ParamLimits

0xab39,	// (0x00059b14) main_fs_bigclock_indi_pane

0xab61,	// (0x00059b3c) main_fs_bigclock_swipe_pane_ParamLimits

0xab61,	// (0x00059b3c) main_fs_bigclock_swipe_pane

0xdb99,	// (0x0005cb74) main_fs_clock_dumped_data

0x3687,	// (0x00052662) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x3687,	// (0x00052662) list_single_fs_bigclock_indicator_pane_g1

0x36a2,	// (0x0005267d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x36a2,	// (0x0005267d) list_single_fs_bigclock_indicator_pane_g2

0x36bc,	// (0x00052697) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x36bc,	// (0x00052697) list_single_fs_bigclock_indicator_pane_g3

0x36d6,	// (0x000526b1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x36d6,	// (0x000526b1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb61,	// (0x0005eb3c) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb61,	// (0x0005eb3c) list_single_fs_bigclock_indicator_pane_g

0x3701,	// (0x000526dc) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x3701,	// (0x000526dc) list_single_fs_bigclock_indicator_pane_t1

0x3729,	// (0x00052704) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x3729,	// (0x00052704) list_single_fs_bigclock_indicator_pane_t2

0x3751,	// (0x0005272c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x3751,	// (0x0005272c) list_single_fs_bigclock_indicator_pane_t3

0x3779,	// (0x00052754) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x3779,	// (0x00052754) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb6c,	// (0x0005eb47) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb6c,	// (0x0005eb47) list_single_fs_bigclock_indicator_pane_t

0xd14d,	// (0x0005c128) image3_infobar_fav_pane_ParamLimits

0xd14d,	// (0x0005c128) image3_infobar_fav_pane

0xd15d,	// (0x0005c138) image3_infobar_loc_pane_ParamLimits

0xd15d,	// (0x0005c138) image3_infobar_loc_pane

0xd171,	// (0x0005c14c) image3_infobar_time_pane_ParamLimits

0xd171,	// (0x0005c14c) image3_infobar_time_pane

0xe38f,	// (0x0005d36a) image3_infobar_time_pane_g1

0xd181,	// (0x0005c15c) image3_infobar_time_pane_t1

0xe38f,	// (0x0005d36a) image3_infobar_loc_pane_g1

0xd18f,	// (0x0005c16a) image3_infobar_loc_pane_g2

0x0001,

0xfcc2,	// (0x0005ec9d) image3_infobar_loc_pane_g

0xd197,	// (0x0005c172) image3_infobar_loc_pane_t1

0xe38f,	// (0x0005d36a) image3_infobar_fav_pane_g1

0xd1a5,	// (0x0005c180) image3_infobar_fav_pane_g2

0x0001,

0xfcc7,	// (0x0005eca2) image3_infobar_fav_pane_g

0xd1ad,	// (0x0005c188) fs_bigclock_status_battery_pane

0xd1b6,	// (0x0005c191) fs_bigclock_status_signal_pane

0xd1bf,	// (0x0005c19a) fs_bigclock_status_title_pane

0xd1c8,	// (0x0005c1a3) fs_bigclock_status_signal_pane_g1

0xd1d1,	// (0x0005c1ac) fs_bigclock_status_signal_pane_g2

0x0001,

0xfccc,	// (0x0005eca7) fs_bigclock_status_signal_pane_g

0xd1d9,	// (0x0005c1b4) fs_bigclock_status_battery_pane_g1

0xd1e2,	// (0x0005c1bd) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcd1,	// (0x0005ecac) fs_bigclock_status_battery_pane_g

0xd1ea,	// (0x0005c1c5) fs_bigclock_status_title_pane_t1

0xb51d,	// (0x0005a4f8) main_fs_bigclock_clock_pane_g1

0xb51d,	// (0x0005a4f8) main_fs_bigclock_clock_pane_g2

0xb51d,	// (0x0005a4f8) main_fs_bigclock_clock_pane_g3

0xb51d,	// (0x0005a4f8) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcd6,	// (0x0005ecb1) main_fs_bigclock_clock_pane_g

0xb529,	// (0x0005a504) main_fs_bigclock_clock_pane_t1

0xb53d,	// (0x0005a518) main_fs_bigclock_clock_pane_t2

0x0001,

0xfcdf,	// (0x0005ecba) main_fs_bigclock_clock_pane_t

0xd1f8,	// (0x0005c1d3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd1f8,	// (0x0005c1d3) list_single_fs_bigclock_indicator_pane

0xd209,	// (0x0005c1e4) list_single_fs_bigclock_pane_ParamLimits

0xd209,	// (0x0005c1e4) list_single_fs_bigclock_pane

0xd22f,	// (0x0005c20a) main_fs_bigclock_indicator_pane_t1

0xd23e,	// (0x0005c219) list_single_fs_bigclock_pane_g1

0xd246,	// (0x0005c221) list_single_fs_bigclock_pane_t1

0xe38f,	// (0x0005d36a) main_fs_bigclock_swipe_pane_g1

0xd289,	// (0x0005c264) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfcf0,	// (0x0005eccb) main_fs_bigclock_swipe_pane_g

0xd291,	// (0x0005c26c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd291,	// (0x0005c26c) main_fs_bigclock_swipe_pane_t1

0x66bc,	// (0x00055697) call_type_pane_ParamLimits

0xdb99,	// (0x0005cb74) main_btmg_pane

0x1b06,	// (0x00050ae1) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1b06,	// (0x00050ae1) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc63,	// (0x0005ec3e) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc63,	// (0x0005ec3e) list_single_cale_mrui_row_pane_g

0x1b8c,	// (0x00050b67) list_recal_vselct_arw_lo_pane

0xd0c8,	// (0x0005c0a3) list_recal_vselct_arw_up_pane

0x1b94,	// (0x00050b6f) list_recal_vselct_pane

0xb594,	// (0x0005a56f) btmg_button_pane

0xb5a0,	// (0x0005a57b) main_btmg_pane_g1

0xdb99,	// (0x0005cb74) bg_button_pane_cp044

0xd2ae,	// (0x0005c289) btmg_button_pane_t1

0x12a0,	// (0x0005027b) aid_listscroll_gen

0xdbd6,	// (0x0005cbb1) main_cntbar_detail_pane

0xce01,	// (0x0005bddc) list_cmail_folder_pane

0x399b,	// (0x00052976) sp_fs_scroll_pane_cp03_ParamLimits

0xb5a8,	// (0x0005a583) list_single_fs_dyc_pane_cp01_ParamLimits

0xb5a8,	// (0x0005a583) list_single_fs_dyc_pane_cp01

0xd2bc,	// (0x0005c297) aid_size_cmail_indent

0x1c0b,	// (0x00050be6) list_single_dyc_row_pane_cp01

0xb5f4,	// (0x0005a5cf) cntbar_detail_list_pane_ParamLimits

0xb5f4,	// (0x0005a5cf) cntbar_detail_list_pane

0xb62e,	// (0x0005a609) main_cntbar_detail_cont_pane_ParamLimits

0xb62e,	// (0x0005a609) main_cntbar_detail_cont_pane

0x66b0,	// (0x0005568b) scroll_pane_cp032_ParamLimits

0x66b0,	// (0x0005568b) scroll_pane_cp032

0xb63a,	// (0x0005a615) cntbar_detail_list_event_pane_ParamLimits

0xb63a,	// (0x0005a615) cntbar_detail_list_event_pane

0xb600,	// (0x0005a5db) cntbar_detail_list_shct_pane

0xe875,	// (0x0005d850) aid_list_gen

0xd2c5,	// (0x0005c2a0) aid_scroll

0xd2ce,	// (0x0005c2a9) aid_size_touch_scroll_bar

0xb64e,	// (0x0005a629) aid_list_double

0xb657,	// (0x0005a632) aid_list_single

0xd2d7,	// (0x0005c2b2) aid_list_single_lg

0xb660,	// (0x0005a63b) aid_list_z_g_a_sm

0xb668,	// (0x0005a643) aid_list_z_g_d

0xb670,	// (0x0005a64b) aid_txt_z_prm

0xb67e,	// (0x0005a659) aid_txt_z_prm_cp01

0xb68c,	// (0x0005a667) aid_txt_z_sec

0xb69a,	// (0x0005a675) main_cntbar_detail_cont_pane_g1_ParamLimits

0xb69a,	// (0x0005a675) main_cntbar_detail_cont_pane_g1

0xb6a7,	// (0x0005a682) main_cntbar_detail_cont_pane_g2_ParamLimits

0xb6a7,	// (0x0005a682) main_cntbar_detail_cont_pane_g2

0x0001,

0xfcf5,	// (0x0005ecd0) main_cntbar_detail_cont_pane_g_ParamLimits

0xfcf5,	// (0x0005ecd0) main_cntbar_detail_cont_pane_g

0xd2e0,	// (0x0005c2bb) main_cntbar_detail_cont_pane_t1

0xd2ee,	// (0x0005c2c9) main_cntbar_detail_cont_pane_t2

0xd2fc,	// (0x0005c2d7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfcfa,	// (0x0005ecd5) main_cntbar_detail_cont_pane_t

0xb6b3,	// (0x0005a68e) cell_cntbar_detail_list_shct_pane_ParamLimits

0xb6b3,	// (0x0005a68e) cell_cntbar_detail_list_shct_pane

0xd30a,	// (0x0005c2e5) cntbar_detail_list_shct_pane_g1

0xd313,	// (0x0005c2ee) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd01,	// (0x0005ecdc) cntbar_detail_list_shct_pane_g

0xb6c7,	// (0x0005a6a2) cntbar_detail_list_event_pane_g1_ParamLimits

0xb6c7,	// (0x0005a6a2) cntbar_detail_list_event_pane_g1

0xb6d3,	// (0x0005a6ae) cntbar_detail_list_event_pane_g2_ParamLimits

0xb6d3,	// (0x0005a6ae) cntbar_detail_list_event_pane_g2

0x0005,

0xfd06,	// (0x0005ece1) cntbar_detail_list_event_pane_g_ParamLimits

0xfd06,	// (0x0005ece1) cntbar_detail_list_event_pane_g

0xb73f,	// (0x0005a71a) cntbar_detail_list_event_pane_t1_ParamLimits

0xb73f,	// (0x0005a71a) cntbar_detail_list_event_pane_t1

0xb754,	// (0x0005a72f) cntbar_detail_list_event_pane_t2_ParamLimits

0xb754,	// (0x0005a72f) cntbar_detail_list_event_pane_t2

0x0002,

0xfd13,	// (0x0005ecee) cntbar_detail_list_event_pane_t_ParamLimits

0xfd13,	// (0x0005ecee) cntbar_detail_list_event_pane_t

0xe38f,	// (0x0005d36a) cell_cntbar_detail_list_shct_pane_g1

0xefb1,	// (0x0005df8c) navi_pane_mv_g3

0xdbd6,	// (0x0005cbb1) main_cntbar_detail_pane_ParamLimits

0xdb99,	// (0x0005cb74) main_notif_wgt_pane

0x869f,	// (0x0005767a) aid_tch_main_mp4_pane_g4

0x8972,	// (0x0005794d) popup_slider_window_cp02

0x1b82,	// (0x00050b5d) list_recal_day_event_pane

0xb5d4,	// (0x0005a5af) cntbar_detail_btn_pane_ParamLimits

0xb5d4,	// (0x0005a5af) cntbar_detail_btn_pane

0xb5e4,	// (0x0005a5bf) cntbar_detail_btn_pane_cp01_ParamLimits

0xb5e4,	// (0x0005a5bf) cntbar_detail_btn_pane_cp01

0xb600,	// (0x0005a5db) cntbar_detail_list_shct_pane_ParamLimits

0xb60c,	// (0x0005a5e7) cntbar_detail_pane_g1_ParamLimits

0xb60c,	// (0x0005a5e7) cntbar_detail_pane_g1

0xb618,	// (0x0005a5f3) cntbar_detail_pane_t1_ParamLimits

0xb618,	// (0x0005a5f3) cntbar_detail_pane_t1

0xb6df,	// (0x0005a6ba) cntbar_detail_list_event_pane_g3_ParamLimits

0xb6df,	// (0x0005a6ba) cntbar_detail_list_event_pane_g3

0xb6f7,	// (0x0005a6d2) cntbar_detail_list_event_pane_g4_ParamLimits

0xb6f7,	// (0x0005a6d2) cntbar_detail_list_event_pane_g4

0xb70f,	// (0x0005a6ea) cntbar_detail_list_event_pane_g5_ParamLimits

0xb70f,	// (0x0005a6ea) cntbar_detail_list_event_pane_g5

0xb727,	// (0x0005a702) cntbar_detail_list_event_pane_g6_ParamLimits

0xb727,	// (0x0005a702) cntbar_detail_list_event_pane_g6

0xb769,	// (0x0005a744) cntbar_detail_list_event_pane_t3_ParamLimits

0xb769,	// (0x0005a744) cntbar_detail_list_event_pane_t3

0xb77b,	// (0x0005a756) popup_notif_wgt_window_ParamLimits

0xb77b,	// (0x0005a756) popup_notif_wgt_window

0xb78b,	// (0x0005a766) popup_submenu_window_cp01_ParamLimits

0xb78b,	// (0x0005a766) popup_submenu_window_cp01

0xe60e,	// (0x0005d5e9) bg_popup_window_pane_cp10

0xd31c,	// (0x0005c2f7) listscroll_notif_wgt_pane

0xd32e,	// (0x0005c309) list_notif_wgt_window

0xd337,	// (0x0005c312) scroll_pane_cp033

0xb79d,	// (0x0005a778) list_notif_wgt_row_pane_ParamLimits

0xb79d,	// (0x0005a778) list_notif_wgt_row_pane

0xd340,	// (0x0005c31b) aid_size_list_notif_wgt_del

0xd34d,	// (0x0005c328) list_notif_wgt_row_pane_g1

0xd359,	// (0x0005c334) list_notif_wgt_row_pane_g2

0xd368,	// (0x0005c343) list_notif_wgt_row_pane_g3

0x0002,

0xfd1a,	// (0x0005ecf5) list_notif_wgt_row_pane_g

0xd375,	// (0x0005c350) list_notif_wgt_row_pane_t1

0xd38b,	// (0x0005c366) list_notif_wgt_row_pane_t2

0xd39d,	// (0x0005c378) list_notif_wgt_row_pane_t3

0x0002,

0xfd21,	// (0x0005ecfc) list_notif_wgt_row_pane_t

0x2b16,	// (0x00051af1) list_recal_day_event_pane_g1

0xd3af,	// (0x0005c38a) list_recal_day_event_pane_t1

0xdb99,	// (0x0005cb74) bg_button_pane_cp045

0xd3be,	// (0x0005c399) cntbar_detail_btn_pane_t1

0x00b9,	// (0x0004f094) main_callh_pane_ParamLimits

0x00b9,	// (0x0004f094) main_callh_pane

0xdb99,	// (0x0005cb74) main_coverflow0_pane

0xdb99,	// (0x0005cb74) main_wgtman_pane

0xab79,	// (0x00059b54) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xab79,	// (0x00059b54) main_fs_bigclock_unlock_btn_pane

0xb06c,	// (0x0005a047) bg_button_pane_cp16

0xb07c,	// (0x0005a057) cell_tport_appsw_pane_g3

0xb7af,	// (0x0005a78a) cf0_flow_pane_ParamLimits

0xb7af,	// (0x0005a78a) cf0_flow_pane

0xd3cc,	// (0x0005c3a7) listscroll_cf0_pane

0xd3d7,	// (0x0005c3b2) main_cf0_pane_g1

0xb7be,	// (0x0005a799) main_cf0_pane_t1_ParamLimits

0xb7be,	// (0x0005a799) main_cf0_pane_t1

0xb7d2,	// (0x0005a7ad) main_cf0_pane_t2_ParamLimits

0xb7d2,	// (0x0005a7ad) main_cf0_pane_t2

0x0001,

0xfd2d,	// (0x0005ed08) main_cf0_pane_t_ParamLimits

0xfd2d,	// (0x0005ed08) main_cf0_pane_t

0xd3e9,	// (0x0005c3c4) scroll_pane_cp11

0xb7e6,	// (0x0005a7c1) cf0_flow_pane_g1

0xb7ee,	// (0x0005a7c9) cf0_flow_pane_g2

0x0001,

0xfd32,	// (0x0005ed0d) cf0_flow_pane_g

0xb7f6,	// (0x0005a7d1) cf0_flow_pane_t1

0xdb99,	// (0x0005cb74) main_call6_pane

0xdb99,	// (0x0005cb74) main_calllock_pane

0xb804,	// (0x0005a7df) call6_btn_grp_pane_ParamLimits

0xb804,	// (0x0005a7df) call6_btn_grp_pane

0xb813,	// (0x0005a7ee) call6_pane_g1_ParamLimits

0xb813,	// (0x0005a7ee) call6_pane_g1

0xb823,	// (0x0005a7fe) popup_call6_1st_window_ParamLimits

0xb823,	// (0x0005a7fe) popup_call6_1st_window

0xb831,	// (0x0005a80c) popup_call6_2nd_window_ParamLimits

0xb831,	// (0x0005a80c) popup_call6_2nd_window

0xb83f,	// (0x0005a81a) cell_call6_btn_pane_ParamLimits

0xb83f,	// (0x0005a81a) cell_call6_btn_pane

0xe60e,	// (0x0005d5e9) bg_popup_call2_in_pane_cp03

0xd3f4,	// (0x0005c3cf) popup_call6_1st_window_g1

0xd3fc,	// (0x0005c3d7) popup_call6_1st_window_g2

0xd404,	// (0x0005c3df) popup_call6_1st_window_g3

0x0002,

0xfd37,	// (0x0005ed12) popup_call6_1st_window_g

0xd40c,	// (0x0005c3e7) popup_call6_1st_window_t1

0xd41b,	// (0x0005c3f6) popup_call6_1st_window_t2

0xd429,	// (0x0005c404) popup_call6_1st_window_t3

0x0002,

0xfd3e,	// (0x0005ed19) popup_call6_1st_window_t

0xe60e,	// (0x0005d5e9) bg_popup_call2_in_pane_cp04

0xd437,	// (0x0005c412) popup_call6_2nd_window_g1

0xd43f,	// (0x0005c41a) popup_call6_2nd_window_g2

0xd447,	// (0x0005c422) popup_call6_2nd_window_g3

0x0002,

0xfd45,	// (0x0005ed20) popup_call6_2nd_window_g

0xd44f,	// (0x0005c42a) popup_call6_2nd_window_t1

0x4a51,	// (0x00053a2c) bg_button_pane_cp15

0xb84e,	// (0x0005a829) cell_call6_btn_pane_g1

0xb857,	// (0x0005a832) cell_call6_btn_pane_t1

0xb866,	// (0x0005a841) listscroll_wgtman_pane_ParamLimits

0xb866,	// (0x0005a841) listscroll_wgtman_pane

0xb882,	// (0x0005a85d) wgtman_btn_pane_ParamLimits

0xb882,	// (0x0005a85d) wgtman_btn_pane

0xedb8,	// (0x0005dd93) aid_scroll_copy1

0xd45e,	// (0x0005c439) list_wgtman_pane

0xb8b7,	// (0x0005a892) wgtman_btn_pane_g1_ParamLimits

0xb8b7,	// (0x0005a892) wgtman_btn_pane_g1

0xb8df,	// (0x0005a8ba) wgtman_btn_pane_t1_ParamLimits

0xb8df,	// (0x0005a8ba) wgtman_btn_pane_t1

0xd468,	// (0x0005c443) wgtman_btn_pane_t2_ParamLimits

0xd468,	// (0x0005c443) wgtman_btn_pane_t2

0x0001,

0xfd4c,	// (0x0005ed27) wgtman_btn_pane_t_ParamLimits

0xfd4c,	// (0x0005ed27) wgtman_btn_pane_t

0xb916,	// (0x0005a8f1) listrow_wgtman_pane_ParamLimits

0xb916,	// (0x0005a8f1) listrow_wgtman_pane

0xb931,	// (0x0005a90c) listrow_wgtman_pane_g1

0xb93e,	// (0x0005a919) listrow_wgtman_pane_g2

0x0001,

0xfd51,	// (0x0005ed2c) listrow_wgtman_pane_g

0xb95c,	// (0x0005a937) listrow_wgtman_pane_t1

0xb974,	// (0x0005a94f) listrow_wgtman_pane_t2

0x0001,

0xfd56,	// (0x0005ed31) listrow_wgtman_pane_t

0xb99a,	// (0x0005a975) wait_bar_pane_cp09

0xd47f,	// (0x0005c45a) main_calllock_btn_pane

0xd489,	// (0x0005c464) main_calllock_pane_g1

0xdb99,	// (0x0005cb74) bg_button_pane_cp17

0xd491,	// (0x0005c46c) main_calllock_btn_pane_g1

0xd49a,	// (0x0005c475) main_calllock_btn_pane_t1

0xdb99,	// (0x0005cb74) main_dialer3_pane

0xdb99,	// (0x0005cb74) main_fmrd2_pane

0xe38f,	// (0x0005d36a) main_fs_bigclock_unlock_btn_pane_g1

0xb9b4,	// (0x0005a98f) main_fs_bigclock_unlock_btn_pane_t1

0xb9c2,	// (0x0005a99d) area_fmrd2_info_pane_ParamLimits

0xb9c2,	// (0x0005a99d) area_fmrd2_info_pane

0xb9d0,	// (0x0005a9ab) area_fmrd2_visual_pane_ParamLimits

0xb9d0,	// (0x0005a9ab) area_fmrd2_visual_pane

0xb9de,	// (0x0005a9b9) fmrd2_indi_pane_ParamLimits

0xb9de,	// (0x0005a9b9) fmrd2_indi_pane

0xb9eb,	// (0x0005a9c6) area_fmrd2_visual_pane_g1

0xb9f3,	// (0x0005a9ce) area_fmrd2_visual_pane_t1

0xba03,	// (0x0005a9de) area_fmrd2_visual_pane_t2

0xba13,	// (0x0005a9ee) area_fmrd2_visual_pane_t3

0x0002,

0xfd60,	// (0x0005ed3b) area_fmrd2_visual_pane_t

0xba23,	// (0x0005a9fe) area_fmrd2_info_pane_g1

0xba2b,	// (0x0005aa06) area_fmrd2_info_pane_t1

0xba3b,	// (0x0005aa16) area_fmrd2_info_pane_t2

0xba4b,	// (0x0005aa26) area_fmrd2_info_pane_t3

0xba5b,	// (0x0005aa36) area_fmrd2_info_pane_t4

0x0003,

0xfd67,	// (0x0005ed42) area_fmrd2_info_pane_t

0xba69,	// (0x0005aa44) fmrd2_indi_pane_t1

0xba79,	// (0x0005aa54) fmrd2_indi_pane_t2

0xba89,	// (0x0005aa64) fmrd2_indi_pane_t3

0x0002,

0xfd70,	// (0x0005ed4b) fmrd2_indi_pane_t

0x36e5,	// (0x000526c0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x36e5,	// (0x000526c0) list_single_fs_bigclock_indicator_pane_g5

0x3796,	// (0x00052771) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x3796,	// (0x00052771) list_single_fs_bigclock_indicator_pane_t5

0x2792,	// (0x0005176d) aid_cell_bcale_month_pane_ParamLimits

0x2792,	// (0x0005176d) aid_cell_bcale_month_pane

0x2792,	// (0x0005176d) bcale_month_pane_ParamLimits

0x2792,	// (0x0005176d) bcale_month_pane

0x2610,	// (0x000515eb) bcale_preview_pane_ParamLimits

0x2610,	// (0x000515eb) bcale_preview_pane

0xd246,	// (0x0005c221) list_single_fs_bigclock_pane_t1_ParamLimits

0xd265,	// (0x0005c240) list_single_fs_bigclock_pane_t2_ParamLimits

0xd265,	// (0x0005c240) list_single_fs_bigclock_pane_t2

0x0001,

0xfceb,	// (0x0005ecc6) list_single_fs_bigclock_pane_t_ParamLimits

0xfceb,	// (0x0005ecc6) list_single_fs_bigclock_pane_t

0xb9ac,	// (0x0005a987) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd5b,	// (0x0005ed36) main_fs_bigclock_unlock_btn_pane_g

0xba97,	// (0x0005aa72) aid_dia3_key_size_ParamLimits

0xba97,	// (0x0005aa72) aid_dia3_key_size

0xbaa3,	// (0x0005aa7e) aid_dia3_listrow_size_ParamLimits

0xbaa3,	// (0x0005aa7e) aid_dia3_listrow_size

0xbab3,	// (0x0005aa8e) dia3_keypad_fun_pane_ParamLimits

0xbab3,	// (0x0005aa8e) dia3_keypad_fun_pane

0xbac5,	// (0x0005aaa0) dia3_keypad_num_pane_ParamLimits

0xbac5,	// (0x0005aaa0) dia3_keypad_num_pane

0xbad7,	// (0x0005aab2) dia3_listscroll_pane_ParamLimits

0xbad7,	// (0x0005aab2) dia3_listscroll_pane

0xbae5,	// (0x0005aac0) dia3_numentry_pane_ParamLimits

0xbae5,	// (0x0005aac0) dia3_numentry_pane

0xd4a9,	// (0x0005c484) dia3_list_pane

0xd4b4,	// (0x0005c48f) scroll_pane_cp12

0xdb99,	// (0x0005cb74) bg_dia3_numentry_pane

0xbaf3,	// (0x0005aace) dia3_numentry_pane_t1

0xbb02,	// (0x0005aadd) cell_dia3_key_num_pane

0xbb0a,	// (0x0005aae5) cell_dia3_key0_fun_pane_ParamLimits

0xbb0a,	// (0x0005aae5) cell_dia3_key0_fun_pane

0xbb17,	// (0x0005aaf2) cell_dia3_key1_fun_pane_ParamLimits

0xbb17,	// (0x0005aaf2) cell_dia3_key1_fun_pane

0xbb24,	// (0x0005aaff) dia3_listrow_pane

0x3438,	// (0x00052413) bg_dia3_numentry_pane_g1

0xdb99,	// (0x0005cb74) bg_button_pane_cp21

0xd4bf,	// (0x0005c49a) cell_dia3_key_num_pane_t1

0xd4cd,	// (0x0005c4a8) cell_dia3_key_num_pane_t2

0xd4dc,	// (0x0005c4b7) cell_dia3_key_num_pane_t3

0xd4eb,	// (0x0005c4c6) cell_dia3_key_num_pane_t4

0x0003,

0xfd77,	// (0x0005ed52) cell_dia3_key_num_pane_t

0xdb99,	// (0x0005cb74) bg_button_pane_cp19

0xbb31,	// (0x0005ab0c) cell_dia3_key0_fun_pane_g1

0xdb99,	// (0x0005cb74) bg_button_pane_cp20

0xbb39,	// (0x0005ab14) cell_dia3_key1_fun_pane_g1

0x39b3,	// (0x0005298e) area_left_week_number_pane

0x39b3,	// (0x0005298e) area_top_day_name_pane

0x39b3,	// (0x0005298e) frame_month_view_pane

0x39b3,	// (0x0005298e) grid_month_view_pane

0x39b3,	// (0x0005298e) cell_top_day_name_pane_ParamLimits

0x39b3,	// (0x0005298e) cell_top_day_name_pane

0x39b3,	// (0x0005298e) cell_area_left_week_number_pane_ParamLimits

0x39b3,	// (0x0005298e) cell_area_left_week_number_pane

0x39b3,	// (0x0005298e) cell_month_view_pane_ParamLimits

0x39b3,	// (0x0005298e) cell_month_view_pane

0x39a7,	// (0x00052982) frm_month_g1

0x39a7,	// (0x00052982) frm_month_g2

0x39a7,	// (0x00052982) frm_month_g3

0x39a7,	// (0x00052982) frm_month_g4

0x39a7,	// (0x00052982) frm_month_g5

0x39a7,	// (0x00052982) frm_month_g6

0x39a7,	// (0x00052982) frm_month_g7

0x39a7,	// (0x00052982) frm_month_g8

0x39a7,	// (0x00052982) frm_month_g9

0x39a7,	// (0x00052982) frm_month_g10

0x39a7,	// (0x00052982) frm_month_g11

0x39a7,	// (0x00052982) frm_month_g12

0x39a7,	// (0x00052982) frm_month_g13

0x39a7,	// (0x00052982) frm_month_g14

0x39a7,	// (0x00052982) frm_month_g15

0x39a7,	// (0x00052982) frm_month_g16

0x000f,

0xfd80,	// (0x0005ed5b) frm_month_g

0xd4fa,	// (0x0005c4d5) cell_top_day_name_pane_t1

0x39a7,	// (0x00052982) cell_area_left_week_number_pane_g1

0xd4fa,	// (0x0005c4d5) cell_area_left_week_number_pane_t1

0x39a7,	// (0x00052982) cell_month_view_pane_g1

0xd4fa,	// (0x0005c4d5) cell_month_view_pane_t1

0xdb99,	// (0x0005cb74) main_fps_pane

0x3963,	// (0x0005293e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x3963,	// (0x0005293e) cmail_ddmenu_btn02_pane_cp1

0x397f,	// (0x0005295a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x397f,	// (0x0005295a) cmail_ddmenu_btn02_pane_cp2

0xb484,	// (0x0005a45f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb484,	// (0x0005a45f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfc9e,	// (0x0005ec79) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfc9e,	// (0x0005ec79) cmail_ddmenu_btn02_pane_g

0xb4a2,	// (0x0005a47d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb4a2,	// (0x0005a47d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfca3,	// (0x0005ec7e) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfca3,	// (0x0005ec7e) cmail_ddmenu_btn02_pane_t

0xbb41,	// (0x0005ab1c) fps_text_pane_ParamLimits

0xbb41,	// (0x0005ab1c) fps_text_pane

0xbb4e,	// (0x0005ab29) main_fps_pane_g1_ParamLimits

0xbb4e,	// (0x0005ab29) main_fps_pane_g1

0xbb5c,	// (0x0005ab37) wait_bar_pane_cp010_ParamLimits

0xbb5c,	// (0x0005ab37) wait_bar_pane_cp010

0xbb68,	// (0x0005ab43) fps_text_pane_t1_ParamLimits

0xbb68,	// (0x0005ab43) fps_text_pane_t1

0x8d81,	// (0x00057d5c) cam4_image_uncrop_pane_g1

0x8d8a,	// (0x00057d65) cam4_image_uncrop_pane_g2

0x8d93,	// (0x00057d6e) cam4_image_uncrop_pane_g3

0x8d9c,	// (0x00057d77) cam4_image_uncrop_pane_g4

0x0003,

0xf7e5,	// (0x0005e7c0) cam4_image_uncrop_pane_g

0xbb24,	// (0x0005aaff) dia3_listrow_pane_ParamLimits

0xdb99,	// (0x0005cb74) main_phob2_pane

0xb04e,	// (0x0005a029) cell_tport_appsw_pane_cp02_ParamLimits

0xb04e,	// (0x0005a029) cell_tport_appsw_pane_cp02

0xb05d,	// (0x0005a038) cell_tport_appsw_pane_cp03_ParamLimits

0xb05d,	// (0x0005a038) cell_tport_appsw_pane_cp03

0xdb99,	// (0x0005cb74) phob2_contact_card_pane

0xdb99,	// (0x0005cb74) phob2_listscroll_pane

0xd50c,	// (0x0005c4e7) phob2_list_pane

0xd08b,	// (0x0005c066) scroll_pane_cp034

0xbb81,	// (0x0005ab5c) phob2_cc_data_pane_ParamLimits

0xbb81,	// (0x0005ab5c) phob2_cc_data_pane

0xbb9b,	// (0x0005ab76) phob2_cc_listscroll_pane_ParamLimits

0xbb9b,	// (0x0005ab76) phob2_cc_listscroll_pane

0xb916,	// (0x0005a8f1) list_double_large_graphic_phob2_pane_ParamLimits

0xb916,	// (0x0005a8f1) list_double_large_graphic_phob2_pane

0xbbb5,	// (0x0005ab90) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xbbb5,	// (0x0005ab90) list_double_large_graphic_phob2_pane_g1

0xbbc2,	// (0x0005ab9d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xbbc2,	// (0x0005ab9d) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfda1,	// (0x0005ed7c) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfda1,	// (0x0005ed7c) list_double_large_graphic_phob2_pane_g

0xbbe8,	// (0x0005abc3) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xbbe8,	// (0x0005abc3) list_double_large_graphic_phob2_pane_t1

0xbbfd,	// (0x0005abd8) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xbbfd,	// (0x0005abd8) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdaa,	// (0x0005ed85) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdaa,	// (0x0005ed85) list_double_large_graphic_phob2_pane_t

0xe343,	// (0x0005d31e) list_highlight_pane_cp024

0xd514,	// (0x0005c4ef) phob2_cc_button_pane

0xbc12,	// (0x0005abed) phob2_cc_data_pane_g1_ParamLimits

0xbc12,	// (0x0005abed) phob2_cc_data_pane_g1

0xbc21,	// (0x0005abfc) phob2_cc_data_pane_g2_ParamLimits

0xbc21,	// (0x0005abfc) phob2_cc_data_pane_g2

0x0001,

0xfdaf,	// (0x0005ed8a) phob2_cc_data_pane_g_ParamLimits

0xfdaf,	// (0x0005ed8a) phob2_cc_data_pane_g

0xbc30,	// (0x0005ac0b) phob2_cc_data_pane_t1_ParamLimits

0xbc30,	// (0x0005ac0b) phob2_cc_data_pane_t1

0xbc45,	// (0x0005ac20) phob2_cc_data_pane_t2_ParamLimits

0xbc45,	// (0x0005ac20) phob2_cc_data_pane_t2

0xbc5a,	// (0x0005ac35) phob2_cc_data_pane_t3_ParamLimits

0xbc5a,	// (0x0005ac35) phob2_cc_data_pane_t3

0x0002,

0xfdb4,	// (0x0005ed8f) phob2_cc_data_pane_t_ParamLimits

0xfdb4,	// (0x0005ed8f) phob2_cc_data_pane_t

0xd51c,	// (0x0005c4f7) phob2_cc_list_pane_ParamLimits

0xd51c,	// (0x0005c4f7) phob2_cc_list_pane

0x2fe0,	// (0x00051fbb) scroll_pane_cp035_ParamLimits

0x2fe0,	// (0x00051fbb) scroll_pane_cp035

0xdbd6,	// (0x0005cbb1) bg_button_pane_cp033

0xd528,	// (0x0005c503) phob2_cc_button_pane_g1

0xd534,	// (0x0005c50f) phob2_cc_button_pane_t1

0xd549,	// (0x0005c524) phob2_cc_button_pane_t2

0x0001,

0xfdbb,	// (0x0005ed96) phob2_cc_button_pane_t

0xbc6f,	// (0x0005ac4a) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xbc6f,	// (0x0005ac4a) list_double_large_graphic_phob2_cc_pane

0xbcdd,	// (0x0005acb8) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xbcdd,	// (0x0005acb8) list_double_large_graphic_phob2_cc_pane_g1

0x1c14,	// (0x00050bef) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1c14,	// (0x00050bef) list_double_large_graphic_phob2_cc_pane_g2

0xbcee,	// (0x0005acc9) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xbcee,	// (0x0005acc9) list_double_large_graphic_phob2_cc_pane_g3

0xbcfa,	// (0x0005acd5) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xbcfa,	// (0x0005acd5) list_double_large_graphic_phob2_cc_pane_g4

0xbd06,	// (0x0005ace1) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xbd06,	// (0x0005ace1) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdc0,	// (0x0005ed9b) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdc0,	// (0x0005ed9b) list_double_large_graphic_phob2_cc_pane_g

0xbd12,	// (0x0005aced) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xbd12,	// (0x0005aced) list_double_large_graphic_phob2_cc_pane_t1

0xbd3b,	// (0x0005ad16) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xbd3b,	// (0x0005ad16) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdcb,	// (0x0005eda6) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdcb,	// (0x0005eda6) list_double_large_graphic_phob2_cc_pane_t

0xd55b,	// (0x0005c536) list_highlight_pane_cp025_ParamLimits

0xd55b,	// (0x0005c536) list_highlight_pane_cp025

0xdbd6,	// (0x0005cbb1) bg_button_pane_cp033_ParamLimits

0xd528,	// (0x0005c503) phob2_cc_button_pane_g1_ParamLimits

0xd534,	// (0x0005c50f) phob2_cc_button_pane_t1_ParamLimits

0xd549,	// (0x0005c524) phob2_cc_button_pane_t2_ParamLimits

0xfdbb,	// (0x0005ed96) phob2_cc_button_pane_t_ParamLimits

0x4a45,	// (0x00053a20) popup_wgtman_window

0x29df,	// (0x000519ba) scroll_pane_cp038

0xb89f,	// (0x0005a87a) wgtman_btn_pane_cp_01_ParamLimits

0xb89f,	// (0x0005a87a) wgtman_btn_pane_cp_01

0xd569,	// (0x0005c544) wgtman_content_pane

0xd572,	// (0x0005c54d) wgtman_heading_pane

0xdb99,	// (0x0005cb74) bg_heading_pane_cp02

0xd57b,	// (0x0005c556) wgtman_heading_pane_g1

0xd583,	// (0x0005c55e) wgtman_heading_pane_t1

0xd591,	// (0x0005c56c) scroll_pane_cp036

0xd599,	// (0x0005c574) wgtman_list_pane

0xd5a1,	// (0x0005c57c) wgtman_list_pane_t1_ParamLimits

0xd5a1,	// (0x0005c57c) wgtman_list_pane_t1

0x8ce0,	// (0x00057cbb) cam4_grid_pane

0x9a9f,	// (0x00058a7a) bg_button_pane_cp015_ParamLimits

0x9ab4,	// (0x00058a8f) bg_button_pane_cp016_ParamLimits

0x9ac0,	// (0x00058a9b) bg_button_pane_cp017_ParamLimits

0x9b18,	// (0x00058af3) popup_vitu2_query_window_g3_ParamLimits

0x9b18,	// (0x00058af3) popup_vitu2_query_window_g3

0x9bb9,	// (0x00058b94) popup_vitu2_query_window_t6_ParamLimits

0x9bb9,	// (0x00058b94) popup_vitu2_query_window_t6

0x9be4,	// (0x00058bbf) popup_vitu2_query_window_t7_ParamLimits

0x9be4,	// (0x00058bbf) popup_vitu2_query_window_t7

0xd5bb,	// (0x0005c596) cam4_grid_pane_g1

0xd5c4,	// (0x0005c59f) cam4_grid_pane_g2

0xd5cd,	// (0x0005c5a8) cam4_grid_pane_g3

0xd5d6,	// (0x0005c5b1) cam4_grid_pane_g4

0x0003,

0xfdd0,	// (0x0005edab) cam4_grid_pane_g

0x5473,	// (0x0005444e) aid_placing_vt_slider_lsc_ParamLimits

0x57bf,	// (0x0005479a) vidtel_button_pane_ParamLimits

0x57bf,	// (0x0005479a) vidtel_button_pane

0xdb99,	// (0x0005cb74) bg_button_pane_cp034

0xd5e1,	// (0x0005c5bc) vidtel_button_pane_g1

0xd5e9,	// (0x0005c5c4) vidtel_button_pane_t1

0x2b06,	// (0x00051ae1) aid_size_vtel_slider_touch

0x2fe0,	// (0x00051fbb) scroll_pane_cp039

0xa931,	// (0x0005990c) ncim_query_button_pane_cp01_ParamLimits

0xa950,	// (0x0005992b) ncimui_query_pane_g1_ParamLimits

0xdbd6,	// (0x0005cbb1) input_focus_pane_cp012_ParamLimits

0x3476,	// (0x00052451) ncim_query_entry_pane_t1_ParamLimits

0x2fe0,	// (0x00051fbb) scroll_pane_cp039_ParamLimits

0xee9c,	// (0x0005de77) navi_pane_bcale_mc_g1

0xeea4,	// (0x0005de7f) navi_pane_bcale_mc_t1

0x39d7,	// (0x000529b2) main_sp_fs_email_pane_g1

0x39e3,	// (0x000529be) main_sp_fs_email_pane_g2

0x0001,

0xfbd6,	// (0x0005ebb1) main_sp_fs_email_pane_g

0xcf92,	// (0x0005bf6d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xcf92,	// (0x0005bf6d) list_single_cale_mrui_row_pane_g3

0xb4c2,	// (0x0005a49d) list_single_recal_day_pane_g5_event_pane

0x1bdf,	// (0x00050bba) list_single_recal_day_pane_g7

0xd5ff,	// (0x0005c5da) list_recal_day_event_pane_cp01

0xd608,	// (0x0005c5e3) list_recal_vselct_arw_lo_pane_cp01

0xd610,	// (0x0005c5eb) list_recal_vselct_arw_up_pane_cp01

0xd618,	// (0x0005c5f3) list_recal_vselct_pane_cp01

0x2b16,	// (0x00051af1) list_recal_day_event_pane_cp01_g1

0x1c20,	// (0x00050bfb) list_recal_day_event_pane_cp01_t1

0x1be7,	// (0x00050bc2) list_single_recal_day_pane_t1_ParamLimits

0x1bf9,	// (0x00050bd4) list_single_recal_day_pane_t2_ParamLimits

0xfcb3,	// (0x0005ec8e) list_single_recal_day_pane_t_ParamLimits

0xe2d6,	// (0x0005d2b1) bg_notes_pane_ParamLimits

0xe3cb,	// (0x0005d3a6) list_notes_pane_ParamLimits

0x4b8f,	// (0x00053b6a) scroll_pane_cp06_ParamLimits

0xe3ed,	// (0x0005d3c8) main_notes_pane_ParamLimits

0xdbd6,	// (0x0005cbb1) main_welc_pane

0xbd92,	// (0x0005ad6d) main_welc_body_pane_ParamLimits

0xbd92,	// (0x0005ad6d) main_welc_body_pane

0xbdac,	// (0x0005ad87) main_welc_opti_pane_ParamLimits

0xbdac,	// (0x0005ad87) main_welc_opti_pane

0xbe01,	// (0x0005addc) main_welc_pane_t1_ParamLimits

0xbe01,	// (0x0005addc) main_welc_pane_t1

0xbfa1,	// (0x0005af7c) main_welc_body_row_pane_ParamLimits

0xbfa1,	// (0x0005af7c) main_welc_body_row_pane

0xe343,	// (0x0005d31e) main_welc_opti_row_pane_ParamLimits

0xe343,	// (0x0005d31e) main_welc_opti_row_pane

0xd62a,	// (0x0005c605) main_welc_opti_row_pane_g1

0xbfc6,	// (0x0005afa1) main_welc_opti_row_pane_t1

0xd632,	// (0x0005c60d) main_welc_body_row_pane_t1

0xd326,	// (0x0005c301) popup_notif_wgt_heading_pane

0xd340,	// (0x0005c31b) aid_size_list_notif_wgt_del_ParamLimits

0xd34d,	// (0x0005c328) list_notif_wgt_row_pane_g1_ParamLimits

0xd359,	// (0x0005c334) list_notif_wgt_row_pane_g2_ParamLimits

0xd368,	// (0x0005c343) list_notif_wgt_row_pane_g3_ParamLimits

0xfd1a,	// (0x0005ecf5) list_notif_wgt_row_pane_g_ParamLimits

0xd375,	// (0x0005c350) list_notif_wgt_row_pane_t1_ParamLimits

0xd38b,	// (0x0005c366) list_notif_wgt_row_pane_t2_ParamLimits

0xd39d,	// (0x0005c378) list_notif_wgt_row_pane_t3_ParamLimits

0xfd21,	// (0x0005ecfc) list_notif_wgt_row_pane_t_ParamLimits

0xb931,	// (0x0005a90c) listrow_wgtman_pane_g1_ParamLimits

0xb93e,	// (0x0005a919) listrow_wgtman_pane_g2_ParamLimits

0xfd51,	// (0x0005ed2c) listrow_wgtman_pane_g_ParamLimits

0xb95c,	// (0x0005a937) listrow_wgtman_pane_t1_ParamLimits

0xb974,	// (0x0005a94f) listrow_wgtman_pane_t2_ParamLimits

0xfd56,	// (0x0005ed31) listrow_wgtman_pane_t_ParamLimits

0xb99a,	// (0x0005a975) wait_bar_pane_cp09_ParamLimits

0xdb99,	// (0x0005cb74) bg_popup_heading_pane_cp02

0xd641,	// (0x0005c61c) popup_notif_wgt_heading_pane_g1

0xd649,	// (0x0005c624) popup_notif_wgt_heading_pane_t1

0xdb99,	// (0x0005cb74) main_vids_pane

0xdb99,	// (0x0005cb74) vids_listscroll_pane

0xbfd5,	// (0x0005afb0) scroll_pane_cp040

0xdb99,	// (0x0005cb74) vids_list_pane

0xbfe0,	// (0x0005afbb) vids_list_double_pane_ParamLimits

0xbfe0,	// (0x0005afbb) vids_list_double_pane

0xbff7,	// (0x0005afd2) vids_list_double_pane_g1

0xc000,	// (0x0005afdb) vids_list_double_pane_t1

0xc010,	// (0x0005afeb) vids_list_double_pane_t2

0x0001,

0xfdef,	// (0x0005edca) vids_list_double_pane_t

0x7450,	// (0x0005642b) main_ncimui_pane_ParamLimits

0xa788,	// (0x00059763) main_ncimui_pane_g1_ParamLimits

0xa794,	// (0x0005976f) main_ncimui_pane_g2_ParamLimits

0xa794,	// (0x0005976f) main_ncimui_pane_g2

0x0001,

0xfad7,	// (0x0005eab2) main_ncimui_pane_g_ParamLimits

0xfad7,	// (0x0005eab2) main_ncimui_pane_g

0xbdc5,	// (0x0005ada0) main_welc_pane_g1_ParamLimits

0xbdc5,	// (0x0005ada0) main_welc_pane_g1

0xbdd1,	// (0x0005adac) main_welc_pane_g2_ParamLimits

0xbdd1,	// (0x0005adac) main_welc_pane_g2

0x0003,

0xfdd9,	// (0x0005edb4) main_welc_pane_g_ParamLimits

0xfdd9,	// (0x0005edb4) main_welc_pane_g

0xe2d6,	// (0x0005d2b1) listscroll_mce_pane_ParamLimits

0xeff1,	// (0x0005dfcc) wait_bar_pane_cp10

0x12a8,	// (0x00050283) main_cale_day_pane_ParamLimits

0x12a8,	// (0x00050283) main_cale_week_pane_ParamLimits

0xe2d6,	// (0x0005d2b1) main_messa_pane_ParamLimits

0x8185,	// (0x00057160) main_clock2_btn_pane_ParamLimits

0x8185,	// (0x00057160) main_clock2_btn_pane

0x241e,	// (0x000513f9) main_clock2_btn_pane_cp01_ParamLimits

0x241e,	// (0x000513f9) main_clock2_btn_pane_cp01

0xcf71,	// (0x0005bf4c) list_cale_mrui_pane_ParamLimits

0xd3e1,	// (0x0005c3bc) main_cf0_pane_g2

0x0001,

0xfd28,	// (0x0005ed03) main_cf0_pane_g

0x39b3,	// (0x0005298e) area_left_week_number_pane_ParamLimits

0x39b3,	// (0x0005298e) area_top_day_name_pane_ParamLimits

0x39b3,	// (0x0005298e) frame_month_view_pane_ParamLimits

0x39b3,	// (0x0005298e) grid_month_view_pane_ParamLimits

0x39a7,	// (0x00052982) frm_month_g1_ParamLimits

0x39a7,	// (0x00052982) frm_month_g2_ParamLimits

0x39a7,	// (0x00052982) frm_month_g3_ParamLimits

0x39a7,	// (0x00052982) frm_month_g4_ParamLimits

0x39a7,	// (0x00052982) frm_month_g5_ParamLimits

0x39a7,	// (0x00052982) frm_month_g6_ParamLimits

0x39a7,	// (0x00052982) frm_month_g7_ParamLimits

0x39a7,	// (0x00052982) frm_month_g8_ParamLimits

0x39a7,	// (0x00052982) frm_month_g9_ParamLimits

0x39a7,	// (0x00052982) frm_month_g10_ParamLimits

0x39a7,	// (0x00052982) frm_month_g11_ParamLimits

0x39a7,	// (0x00052982) frm_month_g12_ParamLimits

0x39a7,	// (0x00052982) frm_month_g13_ParamLimits

0x39a7,	// (0x00052982) frm_month_g14_ParamLimits

0x39a7,	// (0x00052982) frm_month_g15_ParamLimits

0x39a7,	// (0x00052982) frm_month_g16_ParamLimits

0xfd80,	// (0x0005ed5b) frm_month_g_ParamLimits

0xd4fa,	// (0x0005c4d5) cell_top_day_name_pane_t1_ParamLimits

0x39a7,	// (0x00052982) cell_area_left_week_number_pane_g1_ParamLimits

0xd4fa,	// (0x0005c4d5) cell_area_left_week_number_pane_t1_ParamLimits

0x39a7,	// (0x00052982) cell_month_view_pane_g1_ParamLimits

0xd4fa,	// (0x0005c4d5) cell_month_view_pane_t1_ParamLimits

0xe2ce,	// (0x0005d2a9) main_clock2_btn_pane_g1

0xd657,	// (0x0005c632) main_clock2_btn_pane_t1

0xdbd6,	// (0x0005cbb1) listscroll_cmail_pane_ParamLimits

0x39d7,	// (0x000529b2) main_sp_fs_email_pane_g1_ParamLimits

0x39e3,	// (0x000529be) main_sp_fs_email_pane_g2_ParamLimits

0xfbd6,	// (0x0005ebb1) main_sp_fs_email_pane_g_ParamLimits

0xd0a9,	// (0x0005c084) list_recal_day_pane_ParamLimits

0xd0ba,	// (0x0005c095) mian_recal_day_pane_t1

0xaf3c,	// (0x00059f17) list_single_dyc_row_text_pane_t4_ParamLimits

0xaf3c,	// (0x00059f17) list_single_dyc_row_text_pane_t4

0xaf73,	// (0x00059f4e) list_single_dyc_row_text_pane_t5_ParamLimits

0xaf73,	// (0x00059f4e) list_single_dyc_row_text_pane_t5

0x1986,	// (0x00050961) list_single_dyc_row_text_pane_t6_ParamLimits

0x1986,	// (0x00050961) list_single_dyc_row_text_pane_t6

0xe989,	// (0x0005d964) aid_mgn_list_cale_time_pane

0x7450,	// (0x0005642b) main_gallery2_pane_ParamLimits

0x2434,	// (0x0005140f) main_clock2_pane_cp01_t1

0x2444,	// (0x0005141f) main_clock2_pane_cp01_t3

0x0001,

0xf6c6,	// (0x0005e6a1) main_clock2_pane_cp01_t

0x4fa8,	// (0x00053f83) cale_week_scroll_pane_g16_ParamLimits

0x4fa8,	// (0x00053f83) cale_week_scroll_pane_g16

0xe60e,	// (0x0005d5e9) vorec_slider_pane

0xd5e9,	// (0x0005c5c4) vidtel_button_pane_t1_ParamLimits

0xb51d,	// (0x0005a4f8) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb51d,	// (0x0005a4f8) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb51d,	// (0x0005a4f8) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb51d,	// (0x0005a4f8) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcd6,	// (0x0005ecb1) main_fs_bigclock_clock_pane_g_ParamLimits

0xb529,	// (0x0005a504) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb53d,	// (0x0005a518) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfcdf,	// (0x0005ecba) main_fs_bigclock_clock_pane_t_ParamLimits

0x7ac6,	// (0x00056aa1) main_mup3_lyrics_pane_ParamLimits

0x7ac6,	// (0x00056aa1) main_mup3_lyrics_pane

0xc043,	// (0x0005b01e) main_mup3_lyrics_pane_t1_ParamLimits

0xc043,	// (0x0005b01e) main_mup3_lyrics_pane_t1

0x8689,	// (0x00057664) aid_main_mp4_pane_t1_area

0x8693,	// (0x0005766e) aid_main_mp4_pane_t2_area

0x8798,	// (0x00057773) main_mp4_pane_g7_ParamLimits

0x8798,	// (0x00057773) main_mp4_pane_g7

0x87a4,	// (0x0005777f) main_mp4_pane_g8_ParamLimits

0x87a4,	// (0x0005777f) main_mp4_pane_g8

0x8ba0,	// (0x00057b7b) aid_call6_pane_g1_size

0xbcb1,	// (0x0005ac8c) list_double_large_graphic_phob2_other_pane_ParamLimits

0xbcb1,	// (0x0005ac8c) list_double_large_graphic_phob2_other_pane

0xe515,	// (0x0005d4f0) list_double_large_graphic_phob2_other_pane_g1

0xdb99,	// (0x0005cb74) list_highlight_pane_cp026

0xdbd6,	// (0x0005cbb1) main_welc_pane_ParamLimits

0xadab,	// (0x00059d86) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xadab,	// (0x00059d86) main_sp_fs_ctrlbar_pane_g3

0xadc3,	// (0x00059d9e) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xadc3,	// (0x00059d9e) main_sp_fs_ctrlbar_pane_g4

0xadf5,	// (0x00059dd0) toolbar2_fixed_button_pane_cp01

0xae00,	// (0x00059ddb) toolbar2_fixed_button_pane_cp02

0xae0b,	// (0x00059de6) toolbar2_fixed_button_pane_cp03

0xbd76,	// (0x0005ad51) list_welc_entry_pane_ParamLimits

0xbd76,	// (0x0005ad51) list_welc_entry_pane

0xbddf,	// (0x0005adba) main_welc_pane_g3_ParamLimits

0xbddf,	// (0x0005adba) main_welc_pane_g3

0xbe1b,	// (0x0005adf6) main_welc_pane_t2_ParamLimits

0xbe1b,	// (0x0005adf6) main_welc_pane_t2

0xbe2f,	// (0x0005ae0a) main_welc_pane_t3_ParamLimits

0xbe2f,	// (0x0005ae0a) main_welc_pane_t3

0x0005,

0xfde2,	// (0x0005edbd) main_welc_pane_t_ParamLimits

0xfde2,	// (0x0005edbd) main_welc_pane_t

0xbf35,	// (0x0005af10) welc_button_pane_ParamLimits

0xbf35,	// (0x0005af10) welc_button_pane

0xbf93,	// (0x0005af6e) welc_service_logo_pane_ParamLimits

0xbf93,	// (0x0005af6e) welc_service_logo_pane

0xc075,	// (0x0005b050) list_single_welc_entry_pane_ParamLimits

0xc075,	// (0x0005b050) list_single_welc_entry_pane

0xc086,	// (0x0005b061) list_single_welc_entry_pane_g1

0xc08e,	// (0x0005b069) list_single_welc_entry_pane_t1

0xc09c,	// (0x0005b077) list_single_welc_entry_pane_t2

0x0001,

0xfdf4,	// (0x0005edcf) list_single_welc_entry_pane_t

0xdb99,	// (0x0005cb74) bg_button_pane_cp035

0xc0aa,	// (0x0005b085) welc_button_pane_t1

0xd665,	// (0x0005c640) welc_service_logo_pane_g1

0xd66e,	// (0x0005c649) welc_service_logo_pane_g2

0x0001,

0xfdf9,	// (0x0005edd4) welc_service_logo_pane_g

0x4a51,	// (0x00053a2c) main_int_radio_pane

0xe4ee,	// (0x0005d4c9) list_single_fs_dyc_pane_g1

0xbbce,	// (0x0005aba9) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xbbce,	// (0x0005aba9) list_double_large_graphic_phob2_pane_g3

0xbbda,	// (0x0005abb5) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xbbda,	// (0x0005abb5) list_double_large_graphic_phob2_pane_g4

0xc0b8,	// (0x0005b093) main_int_radio1_pane_ParamLimits

0xc0b8,	// (0x0005b093) main_int_radio1_pane

0xd677,	// (0x0005c652) find_pane_cp02

0xc0ca,	// (0x0005b0a5) input_focus_pane_cp12_ParamLimits

0xc0ca,	// (0x0005b0a5) input_focus_pane_cp12

0xc0d6,	// (0x0005b0b1) input_focus_pane_cp13_ParamLimits

0xc0d6,	// (0x0005b0b1) input_focus_pane_cp13

0xc0ee,	// (0x0005b0c9) input_focus_pane_cp14_ParamLimits

0xc0ee,	// (0x0005b0c9) input_focus_pane_cp14

0xd680,	// (0x0005c65b) int_radio1_listscroll_pane

0xc106,	// (0x0005b0e1) main_int_radio1_pane_g1_ParamLimits

0xc106,	// (0x0005b0e1) main_int_radio1_pane_g1

0xc116,	// (0x0005b0f1) main_int_radio1_pane_t1_ParamLimits

0xc116,	// (0x0005b0f1) main_int_radio1_pane_t1

0xc12a,	// (0x0005b105) main_int_radio1_pane_t2_ParamLimits

0xc12a,	// (0x0005b105) main_int_radio1_pane_t2

0xc13e,	// (0x0005b119) main_int_radio1_pane_t3_ParamLimits

0xc13e,	// (0x0005b119) main_int_radio1_pane_t3

0xc152,	// (0x0005b12d) main_int_radio1_pane_t4_ParamLimits

0xc152,	// (0x0005b12d) main_int_radio1_pane_t4

0xd68a,	// (0x0005c665) main_int_radio1_pane_t5_ParamLimits

0xd68a,	// (0x0005c665) main_int_radio1_pane_t5

0xc169,	// (0x0005b144) main_int_radio1_pane_t6_ParamLimits

0xc169,	// (0x0005b144) main_int_radio1_pane_t6

0xc17b,	// (0x0005b156) main_int_radio1_pane_t7_ParamLimits

0xc17b,	// (0x0005b156) main_int_radio1_pane_t7

0xc18d,	// (0x0005b168) main_int_radio1_pane_t8_ParamLimits

0xc18d,	// (0x0005b168) main_int_radio1_pane_t8

0xc1a1,	// (0x0005b17c) main_int_radio1_pane_t9_ParamLimits

0xc1a1,	// (0x0005b17c) main_int_radio1_pane_t9

0xc1b3,	// (0x0005b18e) main_int_radio1_pane_t10_ParamLimits

0xc1b3,	// (0x0005b18e) main_int_radio1_pane_t10

0xc1e4,	// (0x0005b1bf) main_int_radio1_pane_t11_ParamLimits

0xc1e4,	// (0x0005b1bf) main_int_radio1_pane_t11

0xc215,	// (0x0005b1f0) main_int_radio1_pane_t12_ParamLimits

0xc215,	// (0x0005b1f0) main_int_radio1_pane_t12

0x000b,

0xfdfe,	// (0x0005edd9) main_int_radio1_pane_t_ParamLimits

0xfdfe,	// (0x0005edd9) main_int_radio1_pane_t

0xd69c,	// (0x0005c677) int_radio_list_pane

0xd08b,	// (0x0005c066) scroll_pane_cp037

0xd6a4,	// (0x0005c67f) list_double_large_graphic_int_radio_pane_ParamLimits

0xd6a4,	// (0x0005c67f) list_double_large_graphic_int_radio_pane

0xd6bc,	// (0x0005c697) list_double_large_graphic_int_radio_pane_g1

0x1c2e,	// (0x00050c09) list_double_large_graphic_int_radio_pane_t1

0x1c3c,	// (0x00050c17) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe17,	// (0x0005edf2) list_double_large_graphic_int_radio_pane_t

0xdb99,	// (0x0005cb74) list_highlight_pane_cp027

0xd622,	// (0x0005c5fd) main_button_pane_4

0xbdeb,	// (0x0005adc6) main_welc_pane_g4_ParamLimits

0xbdeb,	// (0x0005adc6) main_welc_pane_g4

0xbe41,	// (0x0005ae1c) main_welc_pane_t4_ParamLimits

0xbe41,	// (0x0005ae1c) main_welc_pane_t4

0xbe55,	// (0x0005ae30) main_welc_pane_t5_ParamLimits

0xbe55,	// (0x0005ae30) main_welc_pane_t5

0xbe8d,	// (0x0005ae68) main_welc_pane_t6_ParamLimits

0xbe8d,	// (0x0005ae68) main_welc_pane_t6

0xbf43,	// (0x0005af1e) welc_button_pane_2_ParamLimits

0xbf43,	// (0x0005af1e) welc_button_pane_2

0xbf5b,	// (0x0005af36) welc_button_pane_3_ParamLimits

0xbf5b,	// (0x0005af36) welc_button_pane_3

0xd622,	// (0x0005c5fd) welc_button_pane_4

0xbf75,	// (0x0005af50) welc_button_pane_5_ParamLimits

0xbf75,	// (0x0005af50) welc_button_pane_5

0x4860,	// (0x0005383b) main_popup_welc_pane

0xd6dd,	// (0x0005c6b8) main_welc_sk_g3

0xd6e7,	// (0x0005c6c2) main_welc_sk_g4

0xd6f1,	// (0x0005c6cc) main_welc_sk_t3

0xd701,	// (0x0005c6dc) main_welc_sk_t4

0xd711,	// (0x0005c6ec) popup_welc_pane_t4

0xd71f,	// (0x0005c6fa) popup_welc_pane_t5

0xd72d,	// (0x0005c708) popup_welc_pane_t6

0x4a51,	// (0x00053a2c) main_acti_pane

0xdb99,	// (0x0005cb74) main_sso_pane

0xc22c,	// (0x0005b207) sso_body_pane_ParamLimits

0xc22c,	// (0x0005b207) sso_body_pane

0xc246,	// (0x0005b221) sso_logo_pane_ParamLimits

0xc246,	// (0x0005b221) sso_logo_pane

0xc277,	// (0x0005b252) sso_sk_pane_ParamLimits

0xc277,	// (0x0005b252) sso_sk_pane

0xd76b,	// (0x0005c746) main_sso_logo_pane_g1

0xc284,	// (0x0005b25f) sso_sk_pane_t1_ParamLimits

0xc284,	// (0x0005b25f) sso_sk_pane_t1

0xc298,	// (0x0005b273) sso_sk_pane_t2_ParamLimits

0xc298,	// (0x0005b273) sso_sk_pane_t2

0x0001,

0xfe1c,	// (0x0005edf7) sso_sk_pane_t_ParamLimits

0xfe1c,	// (0x0005edf7) sso_sk_pane_t

0xd774,	// (0x0005c74f) aid_sso_gap

0xd77d,	// (0x0005c758) aid_sso_txt1

0xd787,	// (0x0005c762) aid_sso_txt2

0xd791,	// (0x0005c76c) aid_sso_txt3

0x0002,

0xfe21,	// (0x0005edfc) aid_sso_txt

0xd79b,	// (0x0005c776) aid_sso_widget

0xc2f5,	// (0x0005b2d0) sso_btn_pane_ParamLimits

0xc2f5,	// (0x0005b2d0) sso_btn_pane

0xc37b,	// (0x0005b356) sso_option_pane_ParamLimits

0xc37b,	// (0x0005b356) sso_option_pane

0xc425,	// (0x0005b400) sso_query_pane_ParamLimits

0xc425,	// (0x0005b400) sso_query_pane

0xc475,	// (0x0005b450) sso_query_pane_cp01_ParamLimits

0xc475,	// (0x0005b450) sso_query_pane_cp01

0xc4c5,	// (0x0005b4a0) sso_t_hdr_pane_ParamLimits

0xc4c5,	// (0x0005b4a0) sso_t_hdr_pane

0xc4e9,	// (0x0005b4c4) sso_t_nml_pane_ParamLimits

0xc4e9,	// (0x0005b4c4) sso_t_nml_pane

0xc539,	// (0x0005b514) sso_t_sub_pane

0xc253,	// (0x0005b22e) sso_popup_window_ParamLimits

0xc253,	// (0x0005b22e) sso_popup_window

0xc2aa,	// (0x0005b285) sso_apps_pane_ParamLimits

0xc2aa,	// (0x0005b285) sso_apps_pane

0xc2cd,	// (0x0005b2a8) sso_body_pane_g1

0xc2d5,	// (0x0005b2b0) sso_body_pane_t1

0xc2e5,	// (0x0005b2c0) sso_body_pane_t2

0x0001,

0xfe28,	// (0x0005ee03) sso_body_pane_t

0xc33b,	// (0x0005b316) sso_btn_pane_cp01_ParamLimits

0xc33b,	// (0x0005b316) sso_btn_pane_cp01

0xc3f7,	// (0x0005b3d2) sso_prog_pane_ParamLimits

0xc3f7,	// (0x0005b3d2) sso_prog_pane

0xc55e,	// (0x0005b539) sso_t_hdr_pane_t1_ParamLimits

0xc55e,	// (0x0005b539) sso_t_hdr_pane_t1

0xd7b4,	// (0x0005c78f) input_focus_pane_cp10_ParamLimits

0xd7b4,	// (0x0005c78f) input_focus_pane_cp10

0xd7c8,	// (0x0005c7a3) sso_query_pane_t1_ParamLimits

0xd7c8,	// (0x0005c7a3) sso_query_pane_t1

0xd7db,	// (0x0005c7b6) sso_query_pane_t2_ParamLimits

0xd7db,	// (0x0005c7b6) sso_query_pane_t2

0xd7f4,	// (0x0005c7cf) sso_query_pane_t3_ParamLimits

0xd7f4,	// (0x0005c7cf) sso_query_pane_t3

0xd81e,	// (0x0005c7f9) sso_query_pane_t4_ParamLimits

0xd81e,	// (0x0005c7f9) sso_query_pane_t4

0x0003,

0xfe2d,	// (0x0005ee08) sso_query_pane_t_ParamLimits

0xfe2d,	// (0x0005ee08) sso_query_pane_t

0xd2d7,	// (0x0005c2b2) bg_button_pane_cp22

0xd6c5,	// (0x0005c6a0) sso_btn_pane_t1

0xc577,	// (0x0005b552) sso_t_nml_pane_t1_ParamLimits

0xc577,	// (0x0005b552) sso_t_nml_pane_t1

0xd842,	// (0x0005c81d) sso_option_row_pane_ParamLimits

0xd842,	// (0x0005c81d) sso_option_row_pane

0xd84f,	// (0x0005c82a) sso_t_sub_pane_t1_ParamLimits

0xd84f,	// (0x0005c82a) sso_t_sub_pane_t1

0xdbd6,	// (0x0005cbb1) bg_popup_window_pane_cp11_ParamLimits

0xdbd6,	// (0x0005cbb1) bg_popup_window_pane_cp11

0xd86c,	// (0x0005c847) popup_sk_window_cp01_ParamLimits

0xd86c,	// (0x0005c847) popup_sk_window_cp01

0xd879,	// (0x0005c854) sso_popup_body_pane_ParamLimits

0xd879,	// (0x0005c854) sso_popup_body_pane

0xd886,	// (0x0005c861) scroll_pane_cp21_ParamLimits

0xd886,	// (0x0005c861) scroll_pane_cp21

0xd893,	// (0x0005c86e) sso_popup_body_t_pane_ParamLimits

0xd893,	// (0x0005c86e) sso_popup_body_t_pane

0xd8a0,	// (0x0005c87b) sso_popup_body_t_hdr_pane_ParamLimits

0xd8a0,	// (0x0005c87b) sso_popup_body_t_hdr_pane

0xc594,	// (0x0005b56f) sso_popup_body_t_nml_pane_ParamLimits

0xc594,	// (0x0005b56f) sso_popup_body_t_nml_pane

0xc5b2,	// (0x0005b58d) sso_popup_body_t_sub_pane_ParamLimits

0xc5b2,	// (0x0005b58d) sso_popup_body_t_sub_pane

0xd8b2,	// (0x0005c88d) sso_popup_body_t_hdr_pane_t1

0xc5d5,	// (0x0005b5b0) sso_popup_body_t_nml_pane_t1_ParamLimits

0xc5d5,	// (0x0005b5b0) sso_popup_body_t_nml_pane_t1

0xd8c2,	// (0x0005c89d) sso_popup_body_t_sub_pane_t1_ParamLimits

0xd8c2,	// (0x0005c89d) sso_popup_body_t_sub_pane_t1

0xe38f,	// (0x0005d36a) sso_prog_pane_g1

0xc619,	// (0x0005b5f4) sso_apps_pane_comp1_ParamLimits

0xc619,	// (0x0005b5f4) sso_apps_pane_comp1

0xd8e7,	// (0x0005c8c2) sso_apps_pane_comp1_g1

0xd8ef,	// (0x0005c8ca) sso_apps_pane_comp1_t1

0xd90b,	// (0x0005c8e6) sso_option_row_pane_g1

0xd923,	// (0x0005c8fe) sso_option_row_pane_t1

0xce09,	// (0x0005bde4) list_cmail_pane_ParamLimits

0xdb99,	// (0x0005cb74) main_call7_pane

0xbd64,	// (0x0005ad3f) bg_welc_area_ParamLimits

0xbd64,	// (0x0005ad3f) bg_welc_area

0xbec3,	// (0x0005ae9e) sso_t_hdr_pane_a_t1_ParamLimits

0xbec3,	// (0x0005ae9e) sso_t_hdr_pane_a_t1

0xbed7,	// (0x0005aeb2) sso_t_nml_pane_a_t1_ParamLimits

0xbed7,	// (0x0005aeb2) sso_t_nml_pane_a_t1

0xbf01,	// (0x0005aedc) sso_t_sub_pane_a_t1_ParamLimits

0xbf01,	// (0x0005aedc) sso_t_sub_pane_a_t1

0xbf85,	// (0x0005af60) welc_button_pane_cp01_ParamLimits

0xbf85,	// (0x0005af60) welc_button_pane_cp01

0xd6c5,	// (0x0005c6a0) sso_btn_pane_t1_copy1

0xd6d4,	// (0x0005c6af) welc_button_pane_2_comp1

0xd73b,	// (0x0005c716) sso_t_hdr_pane_p_t1

0xd74b,	// (0x0005c726) sso_t_nml_pane_p_t1

0xd75b,	// (0x0005c736) sso_t_sub_pane_p_t1

0xdb99,	// (0x0005cb74) main_att_pane

0xdb99,	// (0x0005cb74) main_vod_pane

0xc539,	// (0x0005b514) sso_t_sub_pane_ParamLimits

0xd8fd,	// (0x0005c8d8) input_focus_pane_cp10_t1

0xd923,	// (0x0005c8fe) sso_option_row_pane_t1_ParamLimits

0xc633,	// (0x0005b60e) main_att_body_pane_ParamLimits

0xc633,	// (0x0005b60e) main_att_body_pane

0xc647,	// (0x0005b622) att_btn_emg_pane_ParamLimits

0xc647,	// (0x0005b622) att_btn_emg_pane

0xc65f,	// (0x0005b63a) att_btn_pane_ParamLimits

0xc65f,	// (0x0005b63a) att_btn_pane

0xc6c5,	// (0x0005b6a0) att_btn_pane_cp01_ParamLimits

0xc6c5,	// (0x0005b6a0) att_btn_pane_cp01

0xc6f7,	// (0x0005b6d2) att_li_srv_pane_ParamLimits

0xc6f7,	// (0x0005b6d2) att_li_srv_pane

0xc709,	// (0x0005b6e4) att_opt_pane_ParamLimits

0xc709,	// (0x0005b6e4) att_opt_pane

0xc74d,	// (0x0005b728) att_query_pane_ParamLimits

0xc74d,	// (0x0005b728) att_query_pane

0xc7bd,	// (0x0005b798) att_query_pane_cp01_ParamLimits

0xc7bd,	// (0x0005b798) att_query_pane_cp01

0xc801,	// (0x0005b7dc) att_t_hdr_pane_ParamLimits

0xc801,	// (0x0005b7dc) att_t_hdr_pane

0xc867,	// (0x0005b842) att_t_nml_pane_ParamLimits

0xc867,	// (0x0005b842) att_t_nml_pane

0xc8cf,	// (0x0005b8aa) att_t_nml_pane_cp01_ParamLimits

0xc8cf,	// (0x0005b8aa) att_t_nml_pane_cp01

0xc8f3,	// (0x0005b8ce) att_t_nmlb_pane_ParamLimits

0xc8f3,	// (0x0005b8ce) att_t_nmlb_pane

0xc957,	// (0x0005b932) att_term_pane_ParamLimits

0xc957,	// (0x0005b932) att_term_pane

0xc999,	// (0x0005b974) main_att_body_pane_g1_ParamLimits

0xc999,	// (0x0005b974) main_att_body_pane_g1

0xd93f,	// (0x0005c91a) att_t_hdr_pane_t1_ParamLimits

0xd93f,	// (0x0005c91a) att_t_hdr_pane_t1

0xd958,	// (0x0005c933) att_t_nml_pane_t1_ParamLimits

0xd958,	// (0x0005c933) att_t_nml_pane_t1

0xd97d,	// (0x0005c958) att_btn_pane_t1

0xd2d7,	// (0x0005c2b2) bg_button_pane_cp23

0xb4cc,	// (0x0005a4a7) att_li_srv_row_pane_ParamLimits

0xb4cc,	// (0x0005a4a7) att_li_srv_row_pane

0xd98c,	// (0x0005c967) att_t_nmlb_pane_t1_ParamLimits

0xd98c,	// (0x0005c967) att_t_nmlb_pane_t1

0xd9a8,	// (0x0005c983) att_query_pane_t1

0xd9b7,	// (0x0005c992) att_query_pane_t2

0xd9c6,	// (0x0005c9a1) att_query_pane_t3

0x0002,

0xfe3b,	// (0x0005ee16) att_query_pane_t

0xd9d5,	// (0x0005c9b0) input_focus_pane_cp11

0xd9de,	// (0x0005c9b9) att_term_pane_t1_ParamLimits

0xd9de,	// (0x0005c9b9) att_term_pane_t1

0xdb99,	// (0x0005cb74) att_opt_row_pane

0xd9fb,	// (0x0005c9d6) att_opt_row_pane_g1

0xda03,	// (0x0005c9de) att_opt_row_pane_t1_ParamLimits

0xda03,	// (0x0005c9de) att_opt_row_pane_t1

0xc9c3,	// (0x0005b99e) att_li_srv_row_pane_g1

0xc9cb,	// (0x0005b9a6) att_li_srv_row_pane_t1_ParamLimits

0xc9cb,	// (0x0005b9a6) att_li_srv_row_pane_t1

0xc9cb,	// (0x0005b9a6) att_li_srv_row_pane_t2_ParamLimits

0xc9cb,	// (0x0005b9a6) att_li_srv_row_pane_t2

0x0001,

0xfe42,	// (0x0005ee1d) att_li_srv_row_pane_t_ParamLimits

0xfe42,	// (0x0005ee1d) att_li_srv_row_pane_t

0xda1c,	// (0x0005c9f7) att_btn_close_pane_g1

0xdb99,	// (0x0005cb74) bg_button_pane_cp24

0xc9e0,	// (0x0005b9bb) main_vod_body_pane_ParamLimits

0xc9e0,	// (0x0005b9bb) main_vod_body_pane

0xc9ee,	// (0x0005b9c9) main_vod_body_pane_g1_ParamLimits

0xc9ee,	// (0x0005b9c9) main_vod_body_pane_g1

0xca1e,	// (0x0005b9f9) scroll_pane_cp24_ParamLimits

0xca1e,	// (0x0005b9f9) scroll_pane_cp24

0xca66,	// (0x0005ba41) vod_btn_pane_ParamLimits

0xca66,	// (0x0005ba41) vod_btn_pane

0xcaa4,	// (0x0005ba7f) vod_det_pane_ParamLimits

0xcaa4,	// (0x0005ba7f) vod_det_pane

0xcace,	// (0x0005baa9) vod_logo_g1_ParamLimits

0xcace,	// (0x0005baa9) vod_logo_g1

0xcb08,	// (0x0005bae3) vod_opt_pane_ParamLimits

0xcb08,	// (0x0005bae3) vod_opt_pane

0xcb38,	// (0x0005bb13) vod_opt_pane_cp01_ParamLimits

0xcb38,	// (0x0005bb13) vod_opt_pane_cp01

0xcb60,	// (0x0005bb3b) vod_query_pane_ParamLimits

0xcb60,	// (0x0005bb3b) vod_query_pane

0xcb88,	// (0x0005bb63) vod_query_pane_cp01_ParamLimits

0xcb88,	// (0x0005bb63) vod_query_pane_cp01

0xcb94,	// (0x0005bb6f) vod_t_nml_pane_ParamLimits

0xcb94,	// (0x0005bb6f) vod_t_nml_pane

0xcc3a,	// (0x0005bc15) vod_t_nml_pane_cp01_ParamLimits

0xcc3a,	// (0x0005bc15) vod_t_nml_pane_cp01

0xcc72,	// (0x0005bc4d) vod_t_sub_pane_ParamLimits

0xcc72,	// (0x0005bc4d) vod_t_sub_pane

0xcc9e,	// (0x0005bc79) vod_t_sub_pane_cp01_ParamLimits

0xcc9e,	// (0x0005bc79) vod_t_sub_pane_cp01

0xd9d5,	// (0x0005c9b0) vod_query_field_pane

0xda24,	// (0x0005c9ff) vod_query_pane_t1

0xda33,	// (0x0005ca0e) bg_button_pane_cp25

0xd6c5,	// (0x0005c6a0) sso_btn_pane_t1_copy2

0xccc6,	// (0x0005bca1) vod_t_nml_pane_t1_ParamLimits

0xccc6,	// (0x0005bca1) vod_t_nml_pane_t1

0xda3c,	// (0x0005ca17) vod_opt_row_pane_ParamLimits

0xda3c,	// (0x0005ca17) vod_opt_row_pane

0xda4e,	// (0x0005ca29) vod_t_sub_pane_t1_ParamLimits

0xda4e,	// (0x0005ca29) vod_t_sub_pane_t1

0xda67,	// (0x0005ca42) vod_det_cell_pane_ParamLimits

0xda67,	// (0x0005ca42) vod_det_cell_pane

0xdb99,	// (0x0005cb74) input_focus_pane_cp15

0xda78,	// (0x0005ca53) vod_query_field_pane_t1

0xda86,	// (0x0005ca61) vod_opt_row_pane_g1_ParamLimits

0xda86,	// (0x0005ca61) vod_opt_row_pane_g1

0xda92,	// (0x0005ca6d) vod_opt_row_pane_t1_ParamLimits

0xda92,	// (0x0005ca6d) vod_opt_row_pane_t1

0xdab2,	// (0x0005ca8d) vod_det_cell_field_pane

0xdabb,	// (0x0005ca96) vod_det_cell_pane_g1

0xdac3,	// (0x0005ca9e) vod_det_cell_pane_t1

0xdb99,	// (0x0005cb74) input_focus_pane_cp16

0xdad2,	// (0x0005caad) vod_det_cell_field_pane_t1

0xccfd,	// (0x0005bcd8) call7_btn_grp_pane_ParamLimits

0xccfd,	// (0x0005bcd8) call7_btn_grp_pane

0xcd0c,	// (0x0005bce7) call7_bubble_pane_ParamLimits

0xcd0c,	// (0x0005bce7) call7_bubble_pane

0xcd1a,	// (0x0005bcf5) cell_call7_btn_pane_ParamLimits

0xcd1a,	// (0x0005bcf5) cell_call7_btn_pane

0xcd29,	// (0x0005bd04) call7_pane_g1_ParamLimits

0xcd29,	// (0x0005bd04) call7_pane_g1

0xcd38,	// (0x0005bd13) call7_windows_conf_pane_ParamLimits

0xcd38,	// (0x0005bd13) call7_windows_conf_pane

0xcd52,	// (0x0005bd2d) popup_call7_1st_window_ParamLimits

0xcd52,	// (0x0005bd2d) popup_call7_1st_window

0xcd60,	// (0x0005bd3b) popup_call7_2nd_window_ParamLimits

0xcd60,	// (0x0005bd3b) popup_call7_2nd_window

0xcd6e,	// (0x0005bd49) popup_call7_3rd_window_ParamLimits

0xcd6e,	// (0x0005bd49) popup_call7_3rd_window

0xdb99,	// (0x0005cb74) bg_button_pane_cp26

0xd491,	// (0x0005c46c) cell_call7_btn_pane_g1

0xd7a5,	// (0x0005c780) cell_call7_btn_pane_t1

0xdb99,	// (0x0005cb74) bg_popup_window_pane_cp12

0xdae0,	// (0x0005cabb) popup_call7_1st_window_g1

0xdae8,	// (0x0005cac3) popup_call7_1st_window_g2

0xdaf0,	// (0x0005cacb) popup_call7_1st_window_g3

0x0002,

0xfe47,	// (0x0005ee22) popup_call7_1st_window_g

0xdaf8,	// (0x0005cad3) popup_call7_1st_window_t1

0xdb07,	// (0x0005cae2) popup_call7_1st_window_t2

0xdb15,	// (0x0005caf0) popup_call7_1st_window_t3

0x0002,

0xfe4e,	// (0x0005ee29) popup_call7_1st_window_t

0xdb99,	// (0x0005cb74) bg_popup_window_pane_cp13

0xdb23,	// (0x0005cafe) popup_call7_2nd_window_g1

0xdb2b,	// (0x0005cb06) popup_call7_2nd_window_g2

0xdb33,	// (0x0005cb0e) popup_call7_2nd_window_g3

0x0002,

0xfe55,	// (0x0005ee30) popup_call7_2nd_window_g

0xdb3b,	// (0x0005cb16) popup_call7_2nd_window_t1

0xdb99,	// (0x0005cb74) bg_popup_window_pane_cp14

0xdb4a,	// (0x0005cb25) call7_list_conf_pane

0xdb52,	// (0x0005cb2d) call7_list_conf_row_pane_ParamLimits

0xdb52,	// (0x0005cb2d) call7_list_conf_row_pane

0xdb65,	// (0x0005cb40) call7_list_conf_row_pane_g1

0xdb6d,	// (0x0005cb48) call7_list_conf_row_pane_g2

0x0001,

0xfe5c,	// (0x0005ee37) call7_list_conf_row_pane_g

0xdb75,	// (0x0005cb50) call7_list_conf_row_pane_t1

0xdb99,	// (0x0005cb74) list_highlight_pane_cp22

0xc3c9,	// (0x0005b3a4) sso_option_pane_cp01_ParamLimits

0xc3c9,	// (0x0005b3a4) sso_option_pane_cp01

0xe2d6,	// (0x0005d2b1) msg_header_pane_ParamLimits

0x015c,	// (0x0004f137) bg_button_pane_cp01_ParamLimits

0x0170,	// (0x0004f14b) input_focus_pane_cp07_ParamLimits

0xae3f,	// (0x00059e1a) popup_email_progress_window

0xe38f,	// (0x0005d36a) popup_email_progress_window_g1

0xdb83,	// (0x0005cb5e) popup_email_progress_window_g2

0x0001,

0xfe61,	// (0x0005ee3c) popup_email_progress_window_g

0xdb8b,	// (0x0005cb66) popup_email_progress_window_t1

0xdb99,	// (0x0005cb74) cmail_conv_pane

0x19d9,	// (0x000509b4) list_single_dyc_row_pane_g5_ParamLimits

0x19d9,	// (0x000509b4) list_single_dyc_row_pane_g5

0x19e5,	// (0x000509c0) list_single_dyc_row_pane_g6_ParamLimits

0x19e5,	// (0x000509c0) list_single_dyc_row_pane_g6

0x19fd,	// (0x000509d8) list_single_dyc_row_pane_g7_ParamLimits

0x19fd,	// (0x000509d8) list_single_dyc_row_pane_g7

0xbd86,	// (0x0005ad61) main_button_pane_5_ParamLimits

0xbd86,	// (0x0005ad61) main_button_pane_5

0xc23a,	// (0x0005b215) sso_emg_call_btn_pane_ParamLimits

0xc23a,	// (0x0005b215) sso_emg_call_btn_pane

0xc54e,	// (0x0005b529) sso_t_sub_pane_cp01_ParamLimits

0xc54e,	// (0x0005b529) sso_t_sub_pane_cp01

0xd90b,	// (0x0005c8e6) sso_option_row_pane_g1_ParamLimits

0xd917,	// (0x0005c8f2) sso_option_row_pane_g2_ParamLimits

0xd917,	// (0x0005c8f2) sso_option_row_pane_g2

0x0001,

0xfe36,	// (0x0005ee11) sso_option_row_pane_g_ParamLimits

0xfe36,	// (0x0005ee11) sso_option_row_pane_g

0xc6dd,	// (0x0005b6b8) att_btn_pane_cp02_ParamLimits

0xc6dd,	// (0x0005b6b8) att_btn_pane_cp02

0xdbe4,	// (0x0005cbbf) cmail_conv_hdr_pane

0xdbed,	// (0x0005cbc8) list_cmail_conv_pane

0xdbf7,	// (0x0005cbd2) scroll_pane_cp31

0xdbff,	// (0x0005cbda) cmail_conv_hdr_pane_t1

0xdc0d,	// (0x0005cbe8) cmail_conv_hdr_pane_t2

0x0001,

0xfe66,	// (0x0005ee41) cmail_conv_hdr_pane_t

0xdc1b,	// (0x0005cbf6) bubble_cmail_conv_pane_ParamLimits

0xdc1b,	// (0x0005cbf6) bubble_cmail_conv_pane

0xdc33,	// (0x0005cc0e) aid_size_colorization_pane

0xe60e,	// (0x0005d5e9) bg_bubble_cmail_conv_pane

0xdc3b,	// (0x0005cc16) body_bubble_cmail_conv_pane

0xdc43,	// (0x0005cc1e) bubble_cmail_conv_pane_g1

0xdc4b,	// (0x0005cc26) bubble_cmail_conv_pane_g2

0xdc53,	// (0x0005cc2e) bubble_cmail_conv_pane_g3

0x0002,

0xfe6b,	// (0x0005ee46) bubble_cmail_conv_pane_g

0xdc5b,	// (0x0005cc36) bubble_cmail_conv_pane_t1

0xdc69,	// (0x0005cc44) bg_bubble_cmail_conv_pane_g1

0xdc72,	// (0x0005cc4d) bg_bubble_cmail_conv_pane_g2

0xdc7b,	// (0x0005cc56) bg_bubble_cmail_conv_pane_g3

0x0002,

0xfe72,	// (0x0005ee4d) bg_bubble_cmail_conv_pane_g

0xdc84,	// (0x0005cc5f) body_bubble_cmail_conv_pane_t1_ParamLimits

0xdc84,	// (0x0005cc5f) body_bubble_cmail_conv_pane_t1

0x1c4a,	// (0x00050c25) body_bubble_cmail_conv_pane_t2_ParamLimits

0x1c4a,	// (0x00050c25) body_bubble_cmail_conv_pane_t2

0x0001,

0xfe79,	// (0x0005ee54) body_bubble_cmail_conv_pane_t_ParamLimits

0xfe79,	// (0x0005ee54) body_bubble_cmail_conv_pane_t

0xe343,	// (0x0005d31e) list_highlight_pane_cp024_ParamLimits
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&WindowLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&WindowTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&ParameterLimitsV,
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small
