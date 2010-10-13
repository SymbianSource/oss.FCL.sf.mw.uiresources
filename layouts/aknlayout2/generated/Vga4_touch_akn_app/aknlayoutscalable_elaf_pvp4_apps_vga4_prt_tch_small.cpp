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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00037da2 };

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
0x4ef9,	// (0x0003cc9b) Screen

0x4f05,	// (0x0003cca7) application_window

0x4f61,	// (0x0003cd03) area_bottom_pane_ParamLimits

0x4f61,	// (0x0003cd03) area_bottom_pane

0x4fbf,	// (0x0003cd61) area_top_pane_ParamLimits

0x4fbf,	// (0x0003cd61) area_top_pane

0x5023,	// (0x0003cdc5) call_video_uplink_pane_ParamLimits

0x5023,	// (0x0003cdc5) call_video_uplink_pane

0x5062,	// (0x0003ce04) main_pane_ParamLimits

0x5062,	// (0x0003ce04) main_pane

0x2057,	// (0x00039df9) context_pane

0x7e29,	// (0x0003fbcb) navi_pane

0x7e52,	// (0x0003fbf4) popup_cale_events_window_ParamLimits

0x7e52,	// (0x0003fbf4) popup_cale_events_window

0x206a,	// (0x00039e0c) popup_mup_playback_window

0x7e6a,	// (0x0003fc0c) signal_pane

0x029e,	// (0x00038040) main_browser_pane

0x0453,	// (0x000381f5) main_burst_pane

0x7c99,	// (0x0003fa3b) main_calc_pane

0x204b,	// (0x00039ded) main_cale_day_pane

0x548c,	// (0x0003d22e) main_cale_month_pane

0x204b,	// (0x00039ded) main_cale_week_pane

0x0453,	// (0x000381f5) main_call_pane

0xeef0,	// (0x00046c92) main_call_poc_pane

0x0453,	// (0x000381f5) main_camera_pane

0x0453,	// (0x000381f5) main_chi_dic_pane

0x0c24,	// (0x000389c6) main_clock_pane

0xeef0,	// (0x00046c92) main_fmradio_pane

0x0453,	// (0x000381f5) main_graph_messa_pane

0xeef0,	// (0x00046c92) main_help_pane

0x029e,	// (0x00038040) main_im_pane

0x0179,	// (0x00037f1b) main_image_pane_ParamLimits

0x0179,	// (0x00037f1b) main_image_pane

0xeef0,	// (0x00046c92) main_location2_pane

0x0453,	// (0x000381f5) main_location_pane

0x0179,	// (0x00037f1b) main_messa_pane

0xeef0,	// (0x00046c92) main_mp2_pane

0x0453,	// (0x000381f5) main_mp_pane

0xeef0,	// (0x00046c92) main_msg_pane

0xeef0,	// (0x00046c92) main_mup_eq_pane

0xeef0,	// (0x00046c92) main_mup_pane

0x029e,	// (0x00038040) main_notes_pane

0xeef0,	// (0x00046c92) main_pec_pane

0xeef0,	// (0x00046c92) main_phob_pane

0xeef0,	// (0x00046c92) main_pinb_pane

0xeef0,	// (0x00046c92) main_postcard_pane

0xeef0,	// (0x00046c92) main_qdial_pane

0x0453,	// (0x000381f5) main_skin_pane

0xeef0,	// (0x00046c92) main_smil2_pane

0x0453,	// (0x000381f5) main_smil_pane

0x0453,	// (0x000381f5) main_video_pane

0x0453,	// (0x000381f5) main_video_tele_pane

0x0179,	// (0x00037f1b) main_viewer_pane_ParamLimits

0x0179,	// (0x00037f1b) main_viewer_pane

0x0453,	// (0x000381f5) main_vorec_pane

0x7cd9,	// (0x0003fa7b) popup_blid_sat_info_window_ParamLimits

0x7cd9,	// (0x0003fa7b) popup_blid_sat_info_window

0x7cff,	// (0x0003faa1) popup_dyc_status_message_window_ParamLimits

0x7cff,	// (0x0003faa1) popup_dyc_status_message_window

0x7d0f,	// (0x0003fab1) popup_grid_large_graphic_window_ParamLimits

0x7d0f,	// (0x0003fab1) popup_grid_large_graphic_window

0x7da4,	// (0x0003fb46) popup_loc_request_window_ParamLimits

0x7da4,	// (0x0003fb46) popup_loc_request_window

0x7dfd,	// (0x0003fb9f) popup_wml_address_window_ParamLimits

0x7dfd,	// (0x0003fb9f) popup_wml_address_window

0x7b71,	// (0x0003f913) call_muted_g1

0x7861,	// (0x0003f603) popup_call_audio_conf_window_ParamLimits

0x7861,	// (0x0003f603) popup_call_audio_conf_window

0x7b81,	// (0x0003f923) popup_call_audio_first_window_ParamLimits

0x7b81,	// (0x0003f923) popup_call_audio_first_window

0x7bc1,	// (0x0003f963) popup_call_audio_in_window_ParamLimits

0x7bc1,	// (0x0003f963) popup_call_audio_in_window

0x7be5,	// (0x0003f987) popup_call_audio_out_window_ParamLimits

0x7be5,	// (0x0003f987) popup_call_audio_out_window

0x7c07,	// (0x0003f9a9) popup_call_audio_second_window_ParamLimits

0x7c07,	// (0x0003f9a9) popup_call_audio_second_window

0x7c37,	// (0x0003f9d9) popup_call_audio_wait_window_ParamLimits

0x7c37,	// (0x0003f9d9) popup_call_audio_wait_window

0x7c58,	// (0x0003f9fa) popup_number_entry_window_ParamLimits

0x7c58,	// (0x0003f9fa) popup_number_entry_window

0xe65e,	// (0x00046400) bg_popup_call_pane_cp05_ParamLimits

0xe65e,	// (0x00046400) bg_popup_call_pane_cp05

0xe67e,	// (0x00046420) popup_number_entry_window_t1

0xe691,	// (0x00046433) popup_number_entry_window_t2

0xe6a3,	// (0x00046445) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x00046de2) popup_number_entry_window_t

0xe6ea,	// (0x0004648c) text_title_cp2

0xe6fd,	// (0x0004649f) bg_popup_call_pane_cp_ParamLimits

0xe6fd,	// (0x0004649f) bg_popup_call_pane_cp

0xe70b,	// (0x000464ad) call_thumbnail_pane

0xe713,	// (0x000464b5) popup_call_audio_in_window_g1_ParamLimits

0xe713,	// (0x000464b5) popup_call_audio_in_window_g1

0xe71f,	// (0x000464c1) popup_call_audio_in_window_g2_ParamLimits

0xe71f,	// (0x000464c1) popup_call_audio_in_window_g2

0xe72b,	// (0x000464cd) popup_call_audio_in_window_g3_ParamLimits

0xe72b,	// (0x000464cd) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x00046deb) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x00046deb) popup_call_audio_in_window_g

0xe737,	// (0x000464d9) popup_call_audio_in_window_t1_ParamLimits

0xe737,	// (0x000464d9) popup_call_audio_in_window_t1

0xe753,	// (0x000464f5) popup_call_audio_in_window_t2_ParamLimits

0xe753,	// (0x000464f5) popup_call_audio_in_window_t2

0xe76f,	// (0x00046511) popup_call_audio_in_window_t3_ParamLimits

0xe76f,	// (0x00046511) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x00046df2) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x00046df2) popup_call_audio_in_window_t

0xe6fd,	// (0x0004649f) bg_popup_call_pane_cp01_ParamLimits

0xe6fd,	// (0x0004649f) bg_popup_call_pane_cp01

0xe70b,	// (0x000464ad) call_thumbnail_pane_cp02

0xe782,	// (0x00046524) call_type_pane_cp022

0xe78a,	// (0x0004652c) popup_call_audio_out_window_g1_ParamLimits

0xe78a,	// (0x0004652c) popup_call_audio_out_window_g1

0xe79c,	// (0x0004653e) popup_call_audio_out_window_g2_ParamLimits

0xe79c,	// (0x0004653e) popup_call_audio_out_window_g2

0xe7a8,	// (0x0004654a) popup_call_audio_out_window_g3_ParamLimits

0xe7a8,	// (0x0004654a) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x00046df9) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x00046df9) popup_call_audio_out_window_g

0xe7ba,	// (0x0004655c) popup_call_audio_out_window_t1_ParamLimits

0xe7ba,	// (0x0004655c) popup_call_audio_out_window_t1

0xe7d2,	// (0x00046574) popup_call_audio_out_window_t2_ParamLimits

0xe7d2,	// (0x00046574) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x00046e00) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x00046e00) popup_call_audio_out_window_t

0xe7e7,	// (0x00046589) bg_popup_call_pane_ParamLimits

0xe7e7,	// (0x00046589) bg_popup_call_pane

0x518d,	// (0x0003cf2f) call_thumbnail_pane_cp_ParamLimits

0x518d,	// (0x0003cf2f) call_thumbnail_pane_cp

0xe86b,	// (0x0004660d) call_type_pane_cp01_ParamLimits

0xe86b,	// (0x0004660d) call_type_pane_cp01

0xe8af,	// (0x00046651) popup_call_audio_first_window_g1_ParamLimits

0xe8af,	// (0x00046651) popup_call_audio_first_window_g1

0xe8fb,	// (0x0004669d) popup_call_audio_first_window_g2_ParamLimits

0xe8fb,	// (0x0004669d) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x00046e05) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x00046e05) popup_call_audio_first_window_g

0xe93f,	// (0x000466e1) popup_call_audio_first_window_t1_ParamLimits

0xe93f,	// (0x000466e1) popup_call_audio_first_window_t1

0xee35,	// (0x00046bd7) popup_call_audio_first_window_t4_ParamLimits

0xee35,	// (0x00046bd7) popup_call_audio_first_window_t4

0xeec1,	// (0x00046c63) popup_call_audio_first_window_t5_ParamLimits

0xeec1,	// (0x00046c63) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x00046e0a) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x00046e0a) popup_call_audio_first_window_t

0xeef0,	// (0x00046c92) bg_popup_call_pane_cp02

0xeefa,	// (0x00046c9c) call_type_pane_cp023

0xef02,	// (0x00046ca4) popup_call_audio_wait_window_g1

0xef0a,	// (0x00046cac) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x00046e11) popup_call_audio_wait_window_g

0xef12,	// (0x00046cb4) popup_call_audio_wait_window_t3

0xef20,	// (0x00046cc2) bg_popup_call_pane_cp03_ParamLimits

0xef20,	// (0x00046cc2) bg_popup_call_pane_cp03

0xef80,	// (0x00046d22) call_thumbnail_pane_cp011_ParamLimits

0xef80,	// (0x00046d22) call_thumbnail_pane_cp011

0xef8c,	// (0x00046d2e) call_type_pane_cp034_ParamLimits

0xef8c,	// (0x00046d2e) call_type_pane_cp034

0xefc8,	// (0x00046d6a) popup_call_audio_second_window_g1_ParamLimits

0xefc8,	// (0x00046d6a) popup_call_audio_second_window_g1

0xf004,	// (0x00046da6) popup_call_audio_second_window_g2_ParamLimits

0xf004,	// (0x00046da6) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x00046e16) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x00046e16) popup_call_audio_second_window_g

0x006e,	// (0x00037e10) popup_call_audio_second_window_t1_ParamLimits

0x006e,	// (0x00037e10) popup_call_audio_second_window_t1

0x00ef,	// (0x00037e91) popup_call_audio_second_window_t2_ParamLimits

0x00ef,	// (0x00037e91) popup_call_audio_second_window_t2

0x0125,	// (0x00037ec7) popup_call_audio_second_window_t3_ParamLimits

0x0125,	// (0x00037ec7) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x00046e1b) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x00046e1b) popup_call_audio_second_window_t

0xeef0,	// (0x00046c92) bg_popup_call_pane_cp04

0x015b,	// (0x00037efd) list_conf_pane

0x0163,	// (0x00037f05) popup_call_audio_conf_window_t1

0x0171,	// (0x00037f13) call_thumbnail_pane_g1

0x0179,	// (0x00037f1b) bg_pinb_pane_ParamLimits

0x0179,	// (0x00037f1b) bg_pinb_pane

0x0187,	// (0x00037f29) find_pinb_pane

0x0179,	// (0x00037f1b) listscroll_pinb_pane_ParamLimits

0x0179,	// (0x00037f1b) listscroll_pinb_pane

0x0191,	// (0x00037f33) pinb_bg_pane_g1

0x0191,	// (0x00037f33) pinb_bg_pane_g2

0x0191,	// (0x00037f33) pinb_bg_pane_g3

0x0191,	// (0x00037f33) pinb_bg_pane_g4

0x0191,	// (0x00037f33) pinb_bg_pane_g5

0x0191,	// (0x00037f33) pinb_bg_pane_g6

0x0191,	// (0x00037f33) pinb_bg_pane_g7

0x0191,	// (0x00037f33) pinb_bg_pane_g8

0x0191,	// (0x00037f33) pinb_bg_pane_g9

0x0191,	// (0x00037f33) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x00046e22) pinb_bg_pane_g

0xe654,	// (0x000463f6) grid_pinb_pane

0xe654,	// (0x000463f6) list_pinb_pane

0x019b,	// (0x00037f3d) scroll_pane_cp01_ParamLimits

0x019b,	// (0x00037f3d) scroll_pane_cp01

0x01a9,	// (0x00037f4b) find_pinb_pane_g1_ParamLimits

0x01a9,	// (0x00037f4b) find_pinb_pane_g1

0x01c1,	// (0x00037f63) find_pinb_pane_t1

0x01d3,	// (0x00037f75) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x00046e3c) find_pinb_pane_t

0x01e8,	// (0x00037f8a) input_focus_pane_cp01_ParamLimits

0x01e8,	// (0x00037f8a) input_focus_pane_cp01

0x01f4,	// (0x00037f96) cell_pinb_pane_ParamLimits

0x01f4,	// (0x00037f96) cell_pinb_pane

0x0202,	// (0x00037fa4) cell_pinb_pane_g1_ParamLimits

0x0202,	// (0x00037fa4) cell_pinb_pane_g1

0x0210,	// (0x00037fb2) cell_pinb_pane_g2_ParamLimits

0x0210,	// (0x00037fb2) cell_pinb_pane_g2

0x0210,	// (0x00037fb2) cell_pinb_pane_g3_ParamLimits

0x0210,	// (0x00037fb2) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00046e41) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00046e41) cell_pinb_pane_g

0xeef0,	// (0x00046c92) grid_highlight_pane_cp01

0x01f4,	// (0x00037f96) list_pinb_item_pane_ParamLimits

0x01f4,	// (0x00037f96) list_pinb_item_pane

0xe654,	// (0x000463f6) list_highlight_pane_cp02

0x021e,	// (0x00037fc0) list_pinb_item_pane_g1_ParamLimits

0x021e,	// (0x00037fc0) list_pinb_item_pane_g1

0x0210,	// (0x00037fb2) list_pinb_item_pane_g2_ParamLimits

0x0210,	// (0x00037fb2) list_pinb_item_pane_g2

0x0202,	// (0x00037fa4) list_pinb_item_pane_g3_ParamLimits

0x0202,	// (0x00037fa4) list_pinb_item_pane_g3

0x0210,	// (0x00037fb2) list_pinb_item_pane_g4_ParamLimits

0x0210,	// (0x00037fb2) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00046e48) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00046e48) list_pinb_item_pane_g

0x022c,	// (0x00037fce) list_pinb_item_pane_t1_ParamLimits

0x022c,	// (0x00037fce) list_pinb_item_pane_t1

0x51cb,	// (0x0003cf6d) calc_display_pane

0x51e9,	// (0x0003cf8b) calc_paper_pane

0x5205,	// (0x0003cfa7) grid_calc_pane

0xe654,	// (0x000463f6) bg_list_pane_cp01

0x0240,	// (0x00037fe2) clock_g1

0x0240,	// (0x00037fe2) clock_g2

0x0001,

0xf0af,	// (0x00046e51) clock_g

0x024a,	// (0x00037fec) clock_t1_ParamLimits

0x024a,	// (0x00037fec) clock_t1

0x025e,	// (0x00038000) clock_t2_ParamLimits

0x025e,	// (0x00038000) clock_t2

0x025e,	// (0x00038000) clock_t3_ParamLimits

0x025e,	// (0x00038000) clock_t3

0x025e,	// (0x00038000) clock_t4_ParamLimits

0x025e,	// (0x00038000) clock_t4

0x024a,	// (0x00037fec) clock_t5_ParamLimits

0x024a,	// (0x00037fec) clock_t5

0x025e,	// (0x00038000) clock_t6_ParamLimits

0x025e,	// (0x00038000) clock_t6

0x025e,	// (0x00038000) clock_t7_ParamLimits

0x025e,	// (0x00038000) clock_t7

0x025e,	// (0x00038000) clock_t8_ParamLimits

0x025e,	// (0x00038000) clock_t8

0x025e,	// (0x00038000) clock_t9_ParamLimits

0x025e,	// (0x00038000) clock_t9

0x0008,

0xf0b4,	// (0x00046e56) clock_t_ParamLimits

0xf0b4,	// (0x00046e56) clock_t

0xe654,	// (0x000463f6) popup_clock_analogue_window_cp02

0xe654,	// (0x000463f6) popup_clock_digital_window_cp01

0xeef0,	// (0x00046c92) listscroll_help_pane

0xeef0,	// (0x00046c92) phob_pre_status_pane

0x0272,	// (0x00038014) grid_qdial_pane

0x0179,	// (0x00037f1b) listscroll_mce_pane

0x0179,	// (0x00037f1b) bg_notes_pane

0x027c,	// (0x0003801e) list_notes_pane

0x5231,	// (0x0003cfd3) scroll_pane_cp06

0x028a,	// (0x0003802c) bg_calc_paper_pane

0x5240,	// (0x0003cfe2) list_calc_pane

0x029e,	// (0x00038040) bg_calc_display_pane

0x525a,	// (0x0003cffc) calc_display_pane_t1

0x526f,	// (0x0003d011) calc_display_pane_t2

0x5284,	// (0x0003d026) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x00046e69) calc_display_pane_t

0x5296,	// (0x0003d038) cell_calc_pane_ParamLimits

0x5296,	// (0x0003d038) cell_calc_pane

0x02aa,	// (0x0003804c) bg_calc_paper_pane_g1

0x02c2,	// (0x00038064) bg_calc_paper_pane_g2

0x02b6,	// (0x00038058) bg_calc_paper_pane_g3

0x02da,	// (0x0003807c) bg_calc_paper_pane_g4

0x02ce,	// (0x00038070) bg_calc_paper_pane_g5

0x52c5,	// (0x0003d067) bg_calc_paper_pane_g6

0x52d6,	// (0x0003d078) bg_calc_paper_pane_g7

0x52e7,	// (0x0003d089) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00046e70) bg_calc_paper_pane_g

0x52f8,	// (0x0003d09a) calc_bg_paper_pane_g9

0x5309,	// (0x0003d0ab) list_calc_item_pane_ParamLimits

0x5309,	// (0x0003d0ab) list_calc_item_pane

0x02e6,	// (0x00038088) list_calc_item_pane_g1

0x532a,	// (0x0003d0cc) list_calc_item_pane_t1_ParamLimits

0x532a,	// (0x0003d0cc) list_calc_item_pane_t1

0x533c,	// (0x0003d0de) list_calc_item_pane_t2_ParamLimits

0x533c,	// (0x0003d0de) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00046e81) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00046e81) list_calc_item_pane_t

0x0191,	// (0x00037f33) cell_calc_pane_g1

0x02f3,	// (0x00038095) grid_highlight_pane_cp02

0xd1fd,	// (0x00044f9f) bg_calc_display_pane_g1

0x536c,	// (0x0003d10e) bg_calc_display_pane_g2

0xd206,	// (0x00044fa8) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x00046e8b) bg_calc_display_pane_g

0x5376,	// (0x0003d118) cell_qdial_pane_ParamLimits

0x5376,	// (0x0003d118) cell_qdial_pane

0x538c,	// (0x0003d12e) cell_qdial_pane_g1_ParamLimits

0x538c,	// (0x0003d12e) cell_qdial_pane_g1

0x5399,	// (0x0003d13b) cell_qdial_pane_g2_ParamLimits

0x5399,	// (0x0003d13b) cell_qdial_pane_g2

0x031e,	// (0x000380c0) cell_qdial_pane_g3_ParamLimits

0x031e,	// (0x000380c0) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00046e92) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00046e92) cell_qdial_pane_g

0x53b7,	// (0x0003d159) cell_qdial_pane_t1_ParamLimits

0x53b7,	// (0x0003d159) cell_qdial_pane_t1

0x53cf,	// (0x0003d171) cell_qdial_pane_t2_ParamLimits

0x53cf,	// (0x0003d171) cell_qdial_pane_t2

0x53e2,	// (0x0003d184) cell_qdial_pane_t3_ParamLimits

0x53e2,	// (0x0003d184) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x00046e9b) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x00046e9b) cell_qdial_pane_t

0xeef0,	// (0x00046c92) grid_highlight_pane_cp04

0x032a,	// (0x000380cc) thumbnail_qdial_pane_ParamLimits

0x032a,	// (0x000380cc) thumbnail_qdial_pane

0x0386,	// (0x00038128) list_help_pane

0x038f,	// (0x00038131) scroll_pane_cp02

0x53f5,	// (0x0003d197) help_list_pane_t1_ParamLimits

0x53f5,	// (0x0003d197) help_list_pane_t1

0x541c,	// (0x0003d1be) bg_notes_pane_g2

0x5424,	// (0x0003d1c6) bg_notes_pane_g3

0x542c,	// (0x0003d1ce) notes_bg_pane_g1

0x5434,	// (0x0003d1d6) notes_bg_pane_g4

0x543c,	// (0x0003d1de) notes_bg_pane_g5

0x5444,	// (0x0003d1e6) notes_bg_pane_g6

0x544c,	// (0x0003d1ee) notes_bg_pane_g7

0x5454,	// (0x0003d1f6) notes_bg_pane_g8

0x545c,	// (0x0003d1fe) notes_bg_pane_g9

0x0006,

0xf117,	// (0x00046eb9) notes_bg_pane_g

0x5464,	// (0x0003d206) list_notes_text_pane_ParamLimits

0x5464,	// (0x0003d206) list_notes_text_pane

0x0398,	// (0x0003813a) list_notes_text_pane_g1

0x412d,	// (0x0003becf) list_notes_text_pane_t1

0x548c,	// (0x0003d22e) listscroll_cale_week_pane

0x54b8,	// (0x0003d25a) bg_cale_heading_pane

0x54e1,	// (0x0003d283) bg_cale_pane_cp01

0x5503,	// (0x0003d2a5) cale_week_corner_pane

0x5522,	// (0x0003d2c4) cale_week_day_heading_pane

0x5550,	// (0x0003d2f2) cale_week_scroll_pane_g1

0x5574,	// (0x0003d316) cale_week_scroll_pane_g2

0x558c,	// (0x0003d32e) cale_week_scroll_pane_g3

0x55a4,	// (0x0003d346) cale_week_scroll_pane_g4

0x55bc,	// (0x0003d35e) cale_week_scroll_pane_g5

0x55d4,	// (0x0003d376) cale_week_scroll_pane_g6

0x55f4,	// (0x0003d396) cale_week_scroll_pane_g7

0x5614,	// (0x0003d3b6) cale_week_scroll_pane_g8

0x5634,	// (0x0003d3d6) cale_week_scroll_pane_g9

0x5651,	// (0x0003d3f3) cale_week_scroll_pane_g10

0x566e,	// (0x0003d410) cale_week_scroll_pane_g11

0x568d,	// (0x0003d42f) cale_week_scroll_pane_g12

0x56b2,	// (0x0003d454) cale_week_scroll_pane_g13

0x56db,	// (0x0003d47d) cale_week_scroll_pane_g14

0x5704,	// (0x0003d4a6) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00046ec8) cale_week_scroll_pane_g

0x574d,	// (0x0003d4ef) cale_week_time_pane

0x576d,	// (0x0003d50f) grid_cale_week_pane

0x03db,	// (0x0003817d) scroll_pane_cp08

0x579e,	// (0x0003d540) cell_cale_week_pane_ParamLimits

0x579e,	// (0x0003d540) cell_cale_week_pane

0x582e,	// (0x0003d5d0) cale_week_day_heading_pane_t1

0x5856,	// (0x0003d5f8) cale_week_day_heading_pane_t2

0x5883,	// (0x0003d625) cale_week_day_heading_pane_t3

0x58b0,	// (0x0003d652) cale_week_day_heading_pane_t4

0x58dd,	// (0x0003d67f) cale_week_day_heading_pane_t5

0x590a,	// (0x0003d6ac) cale_week_day_heading_pane_t6

0x5937,	// (0x0003d6d9) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x00046ee9) cale_week_day_heading_pane_t

0x03f8,	// (0x0003819a) bg_cale_side_pane

0x595f,	// (0x0003d701) cale_week_time_pane_t1

0x5983,	// (0x0003d725) cale_week_time_pane_t2

0x59a7,	// (0x0003d749) cale_week_time_pane_t3

0x59cb,	// (0x0003d76d) cale_week_time_pane_t4

0x59ef,	// (0x0003d791) cale_week_time_pane_t5

0x5a15,	// (0x0003d7b7) cale_week_time_pane_t6

0x5a3d,	// (0x0003d7df) cale_week_time_pane_t7

0x5a69,	// (0x0003d80b) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00046ef8) cale_week_time_pane_t

0x5a99,	// (0x0003d83b) cell_cale_week_pane_g2

0x5abd,	// (0x0003d85f) cell_cale_week_pane_g3_ParamLimits

0x5abd,	// (0x0003d85f) cell_cale_week_pane_g3

0x0406,	// (0x000381a8) grid_highlight_pane_cp07

0x040e,	// (0x000381b0) listscroll_gms_pane

0x0418,	// (0x000381ba) grid_gms_pane

0x0421,	// (0x000381c3) listscroll_gms_pane_g1

0x0429,	// (0x000381cb) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00046f09) listscroll_gms_pane_g

0x5ad5,	// (0x0003d877) scroll_pane_cp010

0x5ae0,	// (0x0003d882) cell_gms_pane_ParamLimits

0x5ae0,	// (0x0003d882) cell_gms_pane

0x5af3,	// (0x0003d895) cell_gms_pane_g1

0x0431,	// (0x000381d3) cell_gms_pane_g2

0x0439,	// (0x000381db) cell_gms_pane_g3

0x0442,	// (0x000381e4) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x00046f0e) cell_gms_pane_g

0x044b,	// (0x000381ed) grid_highlight_pane_cp09

0x7af5,	// (0x0003f897) phob_pre_status_pane_g1

0x7afd,	// (0x0003f89f) phob_pre_status_pane_g2

0x7b05,	// (0x0003f8a7) phob_pre_status_pane_g3

0x7b0d,	// (0x0003f8af) phob_pre_status_pane_g4

0x0004,

0xf51b,	// (0x000472bd) phob_pre_status_pane_g

0x7b1d,	// (0x0003f8bf) phob_pre_status_pane_t1

0x7b2d,	// (0x0003f8cf) phob_pre_status_pane_t2

0x7b3d,	// (0x0003f8df) phob_pre_status_pane_t3

0x0002,

0xf526,	// (0x000472c8) phob_pre_status_pane_t

0x0453,	// (0x000381f5) bg_list_pane_cp05

0x5b03,	// (0x0003d8a5) grid_vorec_pane

0x5b0d,	// (0x0003d8af) vorec_t1

0x5b1b,	// (0x0003d8bd) vorec_t2

0x5b29,	// (0x0003d8cb) vorec_t3

0x5b37,	// (0x0003d8d9) vorec_t4

0xc4c6,	// (0x00044268) vorec_t5

0xc4d4,	// (0x00044276) vorec_t6

0x0004,

0xf175,	// (0x00046f17) vorec_t

0xc4e2,	// (0x00044284) wait_bar_pane_cp01

0x5b53,	// (0x0003d8f5) cell_vorec_pane_ParamLimits

0x5b53,	// (0x0003d8f5) cell_vorec_pane

0x5b68,	// (0x0003d90a) cell_vorec_pane_g1

0xeef0,	// (0x00046c92) grid_highlight_pane_cp05

0x01f4,	// (0x00037f96) cams_zoom_pane

0x01f4,	// (0x00037f96) image_vga_pane

0x0210,	// (0x00037fb2) main_camera_pane_g1

0x0210,	// (0x00037fb2) main_camera_pane_g2

0x0210,	// (0x00037fb2) main_camera_pane_g3

0x0210,	// (0x00037fb2) main_camera_pane_g4

0x0210,	// (0x00037fb2) main_camera_pane_g5

0x0210,	// (0x00037fb2) main_camera_pane_g6

0x0210,	// (0x00037fb2) main_camera_pane_g7

0x0007,

0xf180,	// (0x00046f22) main_camera_pane_g

0x025e,	// (0x00038000) main_camera_pane_t1

0x025e,	// (0x00038000) main_camera_pane_t2

0x0001,

0xf191,	// (0x00046f33) main_camera_pane_t

0x5b72,	// (0x0003d914) cams_zoom_pane_cp_ParamLimits

0x5b72,	// (0x0003d914) cams_zoom_pane_cp

0x5ba0,	// (0x0003d942) image_cif_pane_ParamLimits

0x5ba0,	// (0x0003d942) image_cif_pane

0xe654,	// (0x000463f6) image_subqcif_pane

0x5bae,	// (0x0003d950) main_video_pane_g1_ParamLimits

0x5bae,	// (0x0003d950) main_video_pane_g1

0x5bd6,	// (0x0003d978) main_video_pane_g2_ParamLimits

0x5bd6,	// (0x0003d978) main_video_pane_g2

0x5c09,	// (0x0003d9ab) main_video_pane_g3_ParamLimits

0x5c09,	// (0x0003d9ab) main_video_pane_g3

0x5c09,	// (0x0003d9ab) main_video_pane_g4_ParamLimits

0x5c09,	// (0x0003d9ab) main_video_pane_g4

0x5c37,	// (0x0003d9d9) main_video_pane_g5_ParamLimits

0x5c37,	// (0x0003d9d9) main_video_pane_g5

0x045b,	// (0x000381fd) main_video_pane_g6_ParamLimits

0x045b,	// (0x000381fd) main_video_pane_g6

0x0006,

0xf196,	// (0x00046f38) main_video_pane_g_ParamLimits

0xf196,	// (0x00046f38) main_video_pane_g

0x5c53,	// (0x0003d9f5) main_video_pane_t1_ParamLimits

0x5c53,	// (0x0003d9f5) main_video_pane_t1

0x0240,	// (0x00037fe2) cams_zoom_pane_g1

0x0240,	// (0x00037fe2) cams_zoom_pane_g2

0x0240,	// (0x00037fe2) cams_zoom_pane_g3

0x0240,	// (0x00037fe2) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00046f47) cams_zoom_pane_g

0x01f4,	// (0x00037f96) grid_cams_pane

0x01f4,	// (0x00037f96) linegrid_cams_pane

0x5c8d,	// (0x0003da2f) cell_cams_pane_ParamLimits

0x5c8d,	// (0x0003da2f) cell_cams_pane

0xe654,	// (0x000463f6) cams_burst_image_pane

0x0240,	// (0x00037fe2) cell_cams_pane_g1

0xe654,	// (0x000463f6) grid_highlight_pane_cp03

0x0191,	// (0x00037f33) mp_bg_pane_g1

0xe654,	// (0x000463f6) bg_list_pane_cp03

0xe654,	// (0x000463f6) bg_mp_pane

0xe654,	// (0x000463f6) grid_mp_pane

0x0240,	// (0x00037fe2) media_player_g1

0x09b9,	// (0x0003875b) media_player_t1

0x09b9,	// (0x0003875b) media_player_t2

0x09b9,	// (0x0003875b) media_player_t3

0x09b9,	// (0x0003875b) media_player_t4

0x09b9,	// (0x0003875b) media_player_t5

0x09b9,	// (0x0003875b) media_player_t6

0x09b9,	// (0x0003875b) media_player_t7

0x0006,

0xf505,	// (0x000472a7) media_player_t

0xe654,	// (0x000463f6) wait_bar_pane_cp02

0xf4ea,	// (0x0004728c) main_usb_pane_t

0x0c24,	// (0x000389c6) cell_mp_pane

0x0191,	// (0x00037f33) cell_mp_pane_g1

0xeef0,	// (0x00046c92) grid_highlight_pane_cp06

0x0475,	// (0x00038217) grid_skin_colour_pane

0x047d,	// (0x0003821f) list_highlight_pane_cp03

0x5ca2,	// (0x0003da44) skin_g1

0x0485,	// (0x00038227) skin_t1

0x0494,	// (0x00038236) skin_t2

0x0001,

0xf1ce,	// (0x00046f70) skin_t

0x5cac,	// (0x0003da4e) cell_skin_colour_pane_ParamLimits

0x5cac,	// (0x0003da4e) cell_skin_colour_pane

0x04a2,	// (0x00038244) cell_skin_colour_pane_g1

0x5d2c,	// (0x0003dace) call_video_g1_ParamLimits

0x5d2c,	// (0x0003dace) call_video_g1

0x5d3c,	// (0x0003dade) call_video_g2_ParamLimits

0x5d3c,	// (0x0003dade) call_video_g2

0x0001,

0xf1d3,	// (0x00046f75) call_video_g_ParamLimits

0xf1d3,	// (0x00046f75) call_video_g

0x5d8c,	// (0x0003db2e) call_video_uplink_pane_cp1_ParamLimits

0x5d8c,	// (0x0003db2e) call_video_uplink_pane_cp1

0x04b4,	// (0x00038256) call_video_uplink_pane_cp2

0x5e5a,	// (0x0003dbfc) video_down_crop_pane_ParamLimits

0x5e5a,	// (0x0003dbfc) video_down_crop_pane

0x5f4c,	// (0x0003dcee) video_down_pane_ParamLimits

0x5f4c,	// (0x0003dcee) video_down_pane

0x04bc,	// (0x0003825e) video_down_subqcif_pane_ParamLimits

0x04bc,	// (0x0003825e) video_down_subqcif_pane

0x04d6,	// (0x00038278) video_down_subqcif_pane_cp_ParamLimits

0x04d6,	// (0x00038278) video_down_subqcif_pane_cp

0x04fe,	// (0x000382a0) im_reading_pane_ParamLimits

0x04fe,	// (0x000382a0) im_reading_pane

0x6069,	// (0x0003de0b) im_writing_pane_ParamLimits

0x6069,	// (0x0003de0b) im_writing_pane

0x6087,	// (0x0003de29) im_reading_pane_t1

0x0518,	// (0x000382ba) list_im_pane

0x0529,	// (0x000382cb) scroll_pane_cp07

0x60c9,	// (0x0003de6b) im_writing_pane_t1_ParamLimits

0x60c9,	// (0x0003de6b) im_writing_pane_t1

0x0542,	// (0x000382e4) im_writing_pane_t2_ParamLimits

0x0542,	// (0x000382e4) im_writing_pane_t2

0x0001,

0xf1dd,	// (0x00046f7f) im_writing_pane_t_ParamLimits

0xf1dd,	// (0x00046f7f) im_writing_pane_t

0xeef0,	// (0x00046c92) input_focus_pane_cp04

0xeef0,	// (0x00046c92) input_focus_pane_cp05

0x60db,	// (0x0003de7d) list_im_single_pane_ParamLimits

0x60db,	// (0x0003de7d) list_im_single_pane

0x055f,	// (0x00038301) list_single_im_pane_t1

0x0453,	// (0x000381f5) blid_accuracy_pane

0x0453,	// (0x000381f5) blid_compass_pane

0x2003,	// (0x00039da5) main_location_t1

0x2003,	// (0x00039da5) main_location_t2

0x2003,	// (0x00039da5) main_location_t3

0x0002,

0xf514,	// (0x000472b6) main_location_t

0xeef0,	// (0x00046c92) aid_levels_location

0x0191,	// (0x00037f33) blid_accuracy_pane_g1

0x0191,	// (0x00037f33) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x00046fd3) blid_accuracy_pane_g

0x0599,	// (0x0003833b) wml_content_pane

0x05d7,	// (0x00038379) wml_button_pane_ParamLimits

0x05d7,	// (0x00038379) wml_button_pane

0x60f4,	// (0x0003de96) wml_list_single_large_pane_ParamLimits

0x60f4,	// (0x0003de96) wml_list_single_large_pane

0x6116,	// (0x0003deb8) wml_list_single_medium_pane_ParamLimits

0x6116,	// (0x0003deb8) wml_list_single_medium_pane

0x6139,	// (0x0003dedb) wml_list_single_small_pane_ParamLimits

0x6139,	// (0x0003dedb) wml_list_single_small_pane

0x05eb,	// (0x0003838d) wml_selection_box_pane_ParamLimits

0x05eb,	// (0x0003838d) wml_selection_box_pane

0x05fe,	// (0x000383a0) wml_list_single_pane_t1

0x060d,	// (0x000383af) wml_list_single_medium_pane_t1

0x061c,	// (0x000383be) wml_list_single_large_pane_t1

0x062b,	// (0x000383cd) input_focus_pane_cp02_ParamLimits

0x062b,	// (0x000383cd) input_focus_pane_cp02

0x063e,	// (0x000383e0) wml_selection_box_pane_g1

0x0647,	// (0x000383e9) wml_selection_box_pane_t1_ParamLimits

0x0647,	// (0x000383e9) wml_selection_box_pane_t1

0x0179,	// (0x00037f1b) bg_wml_button_pane_ParamLimits

0x0179,	// (0x00037f1b) bg_wml_button_pane

0x065f,	// (0x00038401) wml_button_pane_g1

0x0667,	// (0x00038409) wml_button_pane_t1

0x065f,	// (0x00038401) wml_button_bg_pane_g1

0x0677,	// (0x00038419) wml_button_bg_pane_g2

0x067f,	// (0x00038421) wml_button_bg_pane_g3

0x0687,	// (0x00038429) wml_button_bg_pane_g4

0x068f,	// (0x00038431) wml_button_bg_pane_g5

0x0697,	// (0x00038439) wml_button_bg_pane_g6

0x069f,	// (0x00038441) wml_button_bg_pane_g7

0x06a7,	// (0x00038449) wml_button_bg_pane_g8

0x06af,	// (0x00038451) wml_button_bg_pane_g9

0x0008,

0xf1e2,	// (0x00046f84) wml_button_bg_pane_g

0x6161,	// (0x0003df03) bg_list_pane_cp02

0x06b7,	// (0x00038459) mce_header_pane_ParamLimits

0x06b7,	// (0x00038459) mce_header_pane

0x06cd,	// (0x0003846f) mce_icon_pane

0x06cd,	// (0x0003846f) mce_image_pane

0x06d6,	// (0x00038478) mce_text_pane_ParamLimits

0x06d6,	// (0x00038478) mce_text_pane

0x616b,	// (0x0003df0d) scroll_pane_cp03

0x05cf,	// (0x00038371) scroll_pane_cp04

0x06e9,	// (0x0003848b) scroll_pane_cp05_ParamLimits

0x06e9,	// (0x0003848b) scroll_pane_cp05

0x6175,	// (0x0003df17) mce_header_field_pane_ParamLimits

0x6175,	// (0x0003df17) mce_header_field_pane

0x6197,	// (0x0003df39) mce_header_field_pane_2_ParamLimits

0x6197,	// (0x0003df39) mce_header_field_pane_2

0x61ad,	// (0x0003df4f) mce_header_field_pane_3

0x61b5,	// (0x0003df57) list_single_mce_message_pane_ParamLimits

0x61b5,	// (0x0003df57) list_single_mce_message_pane

0x61d4,	// (0x0003df76) list_single_mce_smart_pane_ParamLimits

0x61d4,	// (0x0003df76) list_single_mce_smart_pane

0x06f5,	// (0x00038497) input_focus_pane_cp03

0x06fe,	// (0x000384a0) list_header_data_pane

0x61fe,	// (0x0003dfa0) mce_header_field_pane_t1

0x620e,	// (0x0003dfb0) list_single_mce_header_pane_ParamLimits

0x620e,	// (0x0003dfb0) list_single_mce_header_pane

0x0706,	// (0x000384a8) list_single_mce_header_pane_t1

0x0715,	// (0x000384b7) list_single_mce_message_pane_g1

0x071d,	// (0x000384bf) list_single_mce_message_pane_t1

0x6252,	// (0x0003dff4) bg_cale_heading_pane_cp01_ParamLimits

0x6252,	// (0x0003dff4) bg_cale_heading_pane_cp01

0x072b,	// (0x000384cd) bg_cale_pane_cp02_ParamLimits

0x072b,	// (0x000384cd) bg_cale_pane_cp02

0x62a4,	// (0x0003e046) cale_month_corner_pane

0x62c3,	// (0x0003e065) cale_month_day_heading_pane_ParamLimits

0x62c3,	// (0x0003e065) cale_month_day_heading_pane

0x6325,	// (0x0003e0c7) cale_month_pane_g1_ParamLimits

0x6325,	// (0x0003e0c7) cale_month_pane_g1

0x636c,	// (0x0003e10e) cale_month_pane_g2_ParamLimits

0x636c,	// (0x0003e10e) cale_month_pane_g2

0x63a4,	// (0x0003e146) cale_month_pane_g3_ParamLimits

0x63a4,	// (0x0003e146) cale_month_pane_g3

0x63f8,	// (0x0003e19a) cale_month_pane_g4_ParamLimits

0x63f8,	// (0x0003e19a) cale_month_pane_g4

0x644c,	// (0x0003e1ee) cale_month_pane_g5_ParamLimits

0x644c,	// (0x0003e1ee) cale_month_pane_g5

0x64a0,	// (0x0003e242) cale_month_pane_g6_ParamLimits

0x64a0,	// (0x0003e242) cale_month_pane_g6

0x6504,	// (0x0003e2a6) cale_month_pane_g7_ParamLimits

0x6504,	// (0x0003e2a6) cale_month_pane_g7

0x6568,	// (0x0003e30a) cale_month_pane_g8_ParamLimits

0x6568,	// (0x0003e30a) cale_month_pane_g8

0x65cc,	// (0x0003e36e) cale_month_pane_g9_ParamLimits

0x65cc,	// (0x0003e36e) cale_month_pane_g9

0x6626,	// (0x0003e3c8) cale_month_pane_g10_ParamLimits

0x6626,	// (0x0003e3c8) cale_month_pane_g10

0x6678,	// (0x0003e41a) cale_month_pane_g11_ParamLimits

0x6678,	// (0x0003e41a) cale_month_pane_g11

0x66c6,	// (0x0003e468) cale_month_pane_g12_ParamLimits

0x66c6,	// (0x0003e468) cale_month_pane_g12

0x6716,	// (0x0003e4b8) cale_month_pane_g13_ParamLimits

0x6716,	// (0x0003e4b8) cale_month_pane_g13

0x000c,

0xf1f5,	// (0x00046f97) cale_month_pane_g_ParamLimits

0xf1f5,	// (0x00046f97) cale_month_pane_g

0x6766,	// (0x0003e508) cale_month_week_pane

0x6786,	// (0x0003e528) grid_cale_month_pane_ParamLimits

0x6786,	// (0x0003e528) grid_cale_month_pane

0x67df,	// (0x0003e581) cale_month_day_heading_pane_t1

0x6861,	// (0x0003e603) cale_month_day_heading_pane_t2

0x68da,	// (0x0003e67c) cale_month_day_heading_pane_t3

0x6953,	// (0x0003e6f5) cale_month_day_heading_pane_t4

0x69cc,	// (0x0003e76e) cale_month_day_heading_pane_t5

0x6a4d,	// (0x0003e7ef) cale_month_day_heading_pane_t6

0x6ad6,	// (0x0003e878) cale_month_day_heading_pane_t7

0x0006,

0xf210,	// (0x00046fb2) cale_month_day_heading_pane_t

0x03f8,	// (0x0003819a) bg_cale_side_pane_cp01

0x6b5f,	// (0x0003e901) cale_month_week_pane_t1

0x6b78,	// (0x0003e91a) cale_month_week_pane_t2

0x6b91,	// (0x0003e933) cale_month_week_pane_t3

0x6baa,	// (0x0003e94c) cale_month_week_pane_t4

0x6bc3,	// (0x0003e965) cale_month_week_pane_t5

0x6be0,	// (0x0003e982) cale_month_week_pane_t6

0x0005,

0xf21f,	// (0x00046fc1) cale_month_week_pane_t

0x6c03,	// (0x0003e9a5) cell_cale_month_pane_ParamLimits

0x6c03,	// (0x0003e9a5) cell_cale_month_pane

0x6d31,	// (0x0003ead3) cell_cale_month_pane_g1

0x6d3d,	// (0x0003eadf) cell_cale_month_pane_t1_ParamLimits

0x6d3d,	// (0x0003eadf) cell_cale_month_pane_t1

0x0406,	// (0x000381a8) grid_highlight_pane_cp08

0x0191,	// (0x00037f33) main_smil_g1

0x6d69,	// (0x0003eb0b) smil_status_pane

0x076a,	// (0x0003850c) smil_text_pane

0x1f19,	// (0x00039cbb) bg_popup_call3_rect_pane_g8

0x1f21,	// (0x00039cc3) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x0004724f) bg_popup_call3_rect_pane_g

0x20df,	// (0x00039e81) smil_status_volume_pane_g1

0x0774,	// (0x00038516) smil_status_pane_t1

0x7eb2,	// (0x0003fc54) volume_smil_pane

0x078b,	// (0x0003852d) list_smil_text_pane

0x6d7c,	// (0x0003eb1e) scroll_pane_cp011

0x6d87,	// (0x0003eb29) smil_text_list_pane_t1_ParamLimits

0x6d87,	// (0x0003eb29) smil_text_list_pane_t1

0x6ddb,	// (0x0003eb7d) aid_volume_smil_ParamLimits

0x6ddb,	// (0x0003eb7d) aid_volume_smil

0x0191,	// (0x00037f33) smil_volume_pane_g1

0x0191,	// (0x00037f33) smil_volume_pane_g2

0x0001,

0xf231,	// (0x00046fd3) smil_volume_pane_g

0x548c,	// (0x0003d22e) listscroll_cale_day_pane

0x0795,	// (0x00038537) bg_cale_pane

0x07ad,	// (0x0003854f) list_cale_pane

0x07d0,	// (0x00038572) scroll_pane_cp09

0x07e1,	// (0x00038583) cale_bg_pane_g1

0x07e9,	// (0x0003858b) cale_bg_pane_g2

0x07f1,	// (0x00038593) cale_bg_pane_g3

0x07f9,	// (0x0003859b) cale_bg_pane_g4

0x0801,	// (0x000385a3) cale_bg_pane_g5

0x0809,	// (0x000385ab) cale_bg_pane_g6

0x0811,	// (0x000385b3) cale_bg_pane_g7

0x0819,	// (0x000385bb) cale_bg_pane_g8

0x0821,	// (0x000385c3) cale_bg_pane_g9

0x0008,

0xf236,	// (0x00046fd8) cale_bg_pane_g

0x0829,	// (0x000385cb) list_cale_time_pane_ParamLimits

0x0829,	// (0x000385cb) list_cale_time_pane

0x0840,	// (0x000385e2) list_cale_time_pane_g1_ParamLimits

0x0840,	// (0x000385e2) list_cale_time_pane_g1

0x084c,	// (0x000385ee) list_cale_time_pane_g2_ParamLimits

0x084c,	// (0x000385ee) list_cale_time_pane_g2

0x6e05,	// (0x0003eba7) list_cale_time_pane_g3_ParamLimits

0x6e05,	// (0x0003eba7) list_cale_time_pane_g3

0x6e13,	// (0x0003ebb5) list_cale_time_pane_g4_ParamLimits

0x6e13,	// (0x0003ebb5) list_cale_time_pane_g4

0x6e21,	// (0x0003ebc3) list_cale_time_pane_g5_ParamLimits

0x6e21,	// (0x0003ebc3) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x00046feb) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x00046feb) list_cale_time_pane_g

0x0866,	// (0x00038608) list_cale_time_pane_t1_ParamLimits

0x0866,	// (0x00038608) list_cale_time_pane_t1

0x088e,	// (0x00038630) list_cale_time_pane_t2_ParamLimits

0x088e,	// (0x00038630) list_cale_time_pane_t2

0x70f3,	// (0x0003ee95) aid_blid_cardinal_pane

0x7135,	// (0x0003eed7) compass_pane_t4

0x08b6,	// (0x00038658) list_cale_time_pane_t4_ParamLimits

0x08b6,	// (0x00038658) list_cale_time_pane_t4

0x7143,	// (0x0003eee5) compass_pane_t5

0x7153,	// (0x0003eef5) compass_pane_t6

0x7161,	// (0x0003ef03) compass_pane_t7

0x0cd4,	// (0x00038a76) navi_pane_cc_t1

0x0e21,	// (0x00038bc3) aid_phob_thumbnail_center_pane

0x762a,	// (0x0003f3cc) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x00046ff8) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x00046ff8) list_cale_time_pane_t

0xe6fd,	// (0x0004649f) bg_popup_window_pane_cp02_ParamLimits

0xe6fd,	// (0x0004649f) bg_popup_window_pane_cp02

0x08de,	// (0x00038680) heading_pane_cp01_ParamLimits

0x08de,	// (0x00038680) heading_pane_cp01

0x08ea,	// (0x0003868c) loc_req_pane_ParamLimits

0x08ea,	// (0x0003868c) loc_req_pane

0x08fa,	// (0x0003869c) loc_type_pane_ParamLimits

0x08fa,	// (0x0003869c) loc_type_pane

0x090c,	// (0x000386ae) loc_type_pane_t1_ParamLimits

0x090c,	// (0x000386ae) loc_type_pane_t1

0x091e,	// (0x000386c0) loc_type_pane_t2_ParamLimits

0x091e,	// (0x000386c0) loc_type_pane_t2

0x0930,	// (0x000386d2) loc_type_pane_t3_ParamLimits

0x0930,	// (0x000386d2) loc_type_pane_t3

0x0002,

0xf25d,	// (0x00046fff) loc_type_pane_t_ParamLimits

0xf25d,	// (0x00046fff) loc_type_pane_t

0x0942,	// (0x000386e4) list_loc_req_pane

0x094c,	// (0x000386ee) scroll_pane_cp012

0x6e2f,	// (0x0003ebd1) list_single_loc_request_popup_menu_pane_ParamLimits

0x6e2f,	// (0x0003ebd1) list_single_loc_request_popup_menu_pane

0x0957,	// (0x000386f9) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x0957,	// (0x000386f9) list_single_loc_request_popup_menu_pane_g1

0x0963,	// (0x00038705) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x0963,	// (0x00038705) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x00047006) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x00047006) list_single_loc_request_popup_menu_pane_g

0x096f,	// (0x00038711) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x096f,	// (0x00038711) list_single_loc_request_popup_menu_pane_t1

0x6e41,	// (0x0003ebe3) bg_popup_window_pane_cp03_ParamLimits

0x6e41,	// (0x0003ebe3) bg_popup_window_pane_cp03

0x6e4f,	// (0x0003ebf1) heading_loc_req_pane_ParamLimits

0x6e4f,	// (0x0003ebf1) heading_loc_req_pane

0x6e5b,	// (0x0003ebfd) popup_dyc_status_message_window_g1_ParamLimits

0x6e5b,	// (0x0003ebfd) popup_dyc_status_message_window_g1

0x6e67,	// (0x0003ec09) popup_dyc_status_message_window_t1_ParamLimits

0x6e67,	// (0x0003ec09) popup_dyc_status_message_window_t1

0x6e79,	// (0x0003ec1b) popup_dyc_status_message_window_t2_ParamLimits

0x6e79,	// (0x0003ec1b) popup_dyc_status_message_window_t2

0x6e8b,	// (0x0003ec2d) popup_dyc_status_message_window_t3_ParamLimits

0x6e8b,	// (0x0003ec2d) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x0004700b) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x0004700b) popup_dyc_status_message_window_t

0xeef0,	// (0x00046c92) bg_heading_pane_cp01

0x0991,	// (0x00038733) heading_loc_req_pane_g1

0x0999,	// (0x0003873b) heading_loc_req_pane_g2

0x09a1,	// (0x00038743) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x00047012) heading_loc_req_pane_g

0x09a9,	// (0x0003874b) heading_loc_req_pane_t1

0x09c9,	// (0x0003876b) bg_popup_sub_pane_cp01_ParamLimits

0x09c9,	// (0x0003876b) bg_popup_sub_pane_cp01

0x09d7,	// (0x00038779) popup_cale_events_window_g1_ParamLimits

0x09d7,	// (0x00038779) popup_cale_events_window_g1

0x09f7,	// (0x00038799) popup_cale_events_window_g2_ParamLimits

0x09f7,	// (0x00038799) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x00047034) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x00047034) popup_cale_events_window_g

0x0a17,	// (0x000387b9) popup_cale_events_window_t1_ParamLimits

0x0a17,	// (0x000387b9) popup_cale_events_window_t1

0x0a29,	// (0x000387cb) popup_cale_events_window_t2_ParamLimits

0x0a29,	// (0x000387cb) popup_cale_events_window_t2

0x0a67,	// (0x00038809) popup_cale_events_window_t3_ParamLimits

0x0a67,	// (0x00038809) popup_cale_events_window_t3

0x0aa1,	// (0x00038843) popup_cale_events_window_t4_ParamLimits

0x0aa1,	// (0x00038843) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x00047039) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x00047039) popup_cale_events_window_t

0x6eb5,	// (0x0003ec57) call_type_pane

0x173e,	// (0x000394e0) popup_call_status_window_g1

0x6ec1,	// (0x0003ec63) popup_call_status_window_g2

0x6ecd,	// (0x0003ec6f) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x00047042) popup_call_status_window_g

0x0ad7,	// (0x00038879) call_type_pane_g1

0x0ae0,	// (0x00038882) call_type_pane_g2

0x0001,

0xf2a7,	// (0x00047049) call_type_pane_g

0xeef0,	// (0x00046c92) bg_popup_sub_pane_cp02

0x0ae9,	// (0x0003888b) listscroll_popup_wml_pane

0x0af1,	// (0x00038893) list_wml_pane

0x0afb,	// (0x0003889d) scroll_pane_cp013

0x0b06,	// (0x000388a8) list_single_graphic_popup_wml_pane_ParamLimits

0x0b06,	// (0x000388a8) list_single_graphic_popup_wml_pane

0x0191,	// (0x00037f33) list_single_graphic_popup_wml_pane_g1

0x0b1a,	// (0x000388bc) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x0004704e) list_single_graphic_popup_wml_pane_g

0x0b22,	// (0x000388c4) list_single_graphic_popup_wml_pane_t1

0x0b30,	// (0x000388d2) aid_call_pane

0x0171,	// (0x00037f13) popup_clock_analogue_window_g1

0x0171,	// (0x00037f13) popup_clock_analogue_window_g2

0x6ed9,	// (0x0003ec7b) popup_clock_analogue_window_g3

0x6ed9,	// (0x0003ec7b) popup_clock_analogue_window_g4

0x0191,	// (0x00037f33) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x00047053) popup_clock_analogue_window_g

0x6ee1,	// (0x0003ec83) popup_clock_analogue_window_t1

0x6eef,	// (0x0003ec91) clock_digital_number_pane_ParamLimits

0x6eef,	// (0x0003ec91) clock_digital_number_pane

0x6efb,	// (0x0003ec9d) clock_digital_number_pane_cp02_ParamLimits

0x6efb,	// (0x0003ec9d) clock_digital_number_pane_cp02

0x6f07,	// (0x0003eca9) clock_digital_number_pane_cp03_ParamLimits

0x6f07,	// (0x0003eca9) clock_digital_number_pane_cp03

0x6f13,	// (0x0003ecb5) clock_digital_number_pane_cp04_ParamLimits

0x6f13,	// (0x0003ecb5) clock_digital_number_pane_cp04

0x6f1f,	// (0x0003ecc1) clock_digital_separator_pane_ParamLimits

0x6f1f,	// (0x0003ecc1) clock_digital_separator_pane

0x6f2b,	// (0x0003eccd) popup_clock_digital_window_t1

0x0191,	// (0x00037f33) clock_digital_number_pane_g1

0x0191,	// (0x00037f33) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x00046fd3) clock_digital_number_pane_g

0x0191,	// (0x00037f33) clock_digital_separator_pane_g1

0x0191,	// (0x00037f33) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x00046fd3) clock_digital_separator_pane_g

0xeef0,	// (0x00046c92) bg_popup_window_pane_cp04

0x0b40,	// (0x000388e2) heading_pane_cp03

0x0453,	// (0x000381f5) listscroll_popup_gms_pane

0xeef0,	// (0x00046c92) grid_large_graphic_popup_pane

0x0b49,	// (0x000388eb) listscroll_popup_gms_pane_g1

0x0b52,	// (0x000388f4) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x0004705e) listscroll_popup_gms_pane_g

0x0b5b,	// (0x000388fd) scroll_pane_cp014

0x01f4,	// (0x00037f96) cell_large_graphic_popup_pane_ParamLimits

0x01f4,	// (0x00037f96) cell_large_graphic_popup_pane

0x0202,	// (0x00037fa4) cell_large_graphic_popup_pane_g1_ParamLimits

0x0202,	// (0x00037fa4) cell_large_graphic_popup_pane_g1

0x0b64,	// (0x00038906) cell_large_graphic_popup_pane_g2_ParamLimits

0x0b64,	// (0x00038906) cell_large_graphic_popup_pane_g2

0x0b72,	// (0x00038914) cell_large_graphic_popup_pane_g3_ParamLimits

0x0b72,	// (0x00038914) cell_large_graphic_popup_pane_g3

0x0b80,	// (0x00038922) cell_large_graphic_popup_pane_g4_ParamLimits

0x0b80,	// (0x00038922) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x00047063) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x00047063) cell_large_graphic_popup_pane_g

0xeef0,	// (0x00046c92) grid_highlight_pane_cp010

0x0191,	// (0x00037f33) bg_popup_call_pane_g1

0x0b91,	// (0x00038933) list_single_graphic_popup_conf_pane_ParamLimits

0x0b91,	// (0x00038933) list_single_graphic_popup_conf_pane

0x0ba3,	// (0x00038945) list_highlight_pane_cp01

0x0bac,	// (0x0003894e) list_single_graphic_popup_conf_pane_g1

0x0bb4,	// (0x00038956) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x0004706c) list_single_graphic_popup_conf_pane_g

0x0bbc,	// (0x0003895e) list_single_graphic_popup_conf_pane_t1

0x0bca,	// (0x0003896c) linegrid_cams_pane_g1

0x6f48,	// (0x0003ecea) linegrid_cams_pane_g2

0x0439,	// (0x000381db) linegrid_cams_pane_g3

0x0bd3,	// (0x00038975) linegrid_cams_pane_g4

0x6f51,	// (0x0003ecf3) linegrid_cams_pane_g5

0x6f5a,	// (0x0003ecfc) linegrid_cams_pane_g6

0x0442,	// (0x000381e4) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x00047071) linegrid_cams_pane_g

0x0bdc,	// (0x0003897e) popup_clock_analogue_window

0x0bdc,	// (0x0003897e) popup_clock_digital_window

0xeef0,	// (0x00046c92) popup_phob_thumbnail_window

0x0191,	// (0x00037f33) call_video_uplink_pane_g1

0x0be5,	// (0x00038987) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x00047080) call_video_uplink_pane_g

0x0bed,	// (0x0003898f) video_uplink_pane

0x0bf5,	// (0x00038997) mce_image_pane_g1

0x6f65,	// (0x0003ed07) mce_image_pane_g2

0x6f6f,	// (0x0003ed11) mce_image_pane_g3

0x6f79,	// (0x0003ed1b) mce_image_pane_g4

0x6f81,	// (0x0003ed23) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x00047085) mce_image_pane_g

0x0bff,	// (0x000389a1) control_top_pane_stacon_cp01_ParamLimits

0x0bff,	// (0x000389a1) control_top_pane_stacon_cp01

0x0c13,	// (0x000389b5) uni_indicator_pane_stacon_cp01_ParamLimits

0x0c13,	// (0x000389b5) uni_indicator_pane_stacon_cp01

0x0c24,	// (0x000389c6) bg_popup_sub_pane_cp03

0x6f89,	// (0x0003ed2b) chi_dic_find_pane

0x6f91,	// (0x0003ed33) listscroll_chi_dic_pane

0x6f9a,	// (0x0003ed3c) main_pane_chidic_g1

0x6fad,	// (0x0003ed4f) chi_dic_find_pane_t1

0x0c2e,	// (0x000389d0) find_chidic_pane

0x0c37,	// (0x000389d9) chi_dic_list_pane_ParamLimits

0x0c37,	// (0x000389d9) chi_dic_list_pane

0x0c48,	// (0x000389ea) scroll_pane_cp020

0x6fbb,	// (0x0003ed5d) find_chidic_pane_t1

0xeef0,	// (0x00046c92) input_focus_pane_cp06

0x6fca,	// (0x0003ed6c) list_chi_dic_pane_ParamLimits

0x6fca,	// (0x0003ed6c) list_chi_dic_pane

0x6fdf,	// (0x0003ed81) list_chi_dic_pane_t1_ParamLimits

0x6fdf,	// (0x0003ed81) list_chi_dic_pane_t1

0xeef0,	// (0x00046c92) list_highlight_pane_cp020

0x0c50,	// (0x000389f2) bg_cale_heading_pane_g1

0x6ff2,	// (0x0003ed94) bg_cale_heading_pane_g2

0x6ffa,	// (0x0003ed9c) bg_cale_heading_pane_g3

0x7002,	// (0x0003eda4) bg_cale_heading_pane_g4

0x700c,	// (0x0003edae) bg_cale_heading_pane_g5

0x7016,	// (0x0003edb8) bg_cale_heading_pane_g6

0x701e,	// (0x0003edc0) bg_cale_heading_pane_g7

0x7026,	// (0x0003edc8) bg_cale_heading_pane_g8

0x7030,	// (0x0003edd2) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x00047090) bg_cale_heading_pane_g

0x0c50,	// (0x000389f2) bg_cale_side_pane_g1

0x703a,	// (0x0003eddc) bg_cale_side_pane_g2

0x7044,	// (0x0003ede6) bg_cale_side_pane_g3

0x704e,	// (0x0003edf0) bg_cale_side_pane_g4

0x7058,	// (0x0003edfa) bg_cale_side_pane_g5

0x7062,	// (0x0003ee04) bg_cale_side_pane_g6

0x706c,	// (0x0003ee0e) bg_cale_side_pane_g7

0x7076,	// (0x0003ee18) bg_cale_side_pane_g8

0x707e,	// (0x0003ee20) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x000470a3) bg_cale_side_pane_g

0x7086,	// (0x0003ee28) popup_call_status_window_ParamLimits

0x7086,	// (0x0003ee28) popup_call_status_window

0x0c58,	// (0x000389fa) stacon_top_pane

0x0c60,	// (0x00038a02) status_pane_ParamLimits

0x0c60,	// (0x00038a02) status_pane

0x0c75,	// (0x00038a17) status_small_pane

0x0c7d,	// (0x00038a1f) control_pane

0xeef0,	// (0x00046c92) stacon_bottom_pane

0x0c85,	// (0x00038a27) list_single_mce_smart_pane_t1_ParamLimits

0x0c85,	// (0x00038a27) list_single_mce_smart_pane_t1

0x0c98,	// (0x00038a3a) list_single_mce_smart_pane_t2_ParamLimits

0x0c98,	// (0x00038a3a) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x000470b6) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x000470b6) list_single_mce_smart_pane_t

0x7092,	// (0x0003ee34) compass_pane

0x709d,	// (0x0003ee3f) main_location2_pane_t1

0x70b3,	// (0x0003ee55) main_location2_pane_t2

0x70c9,	// (0x0003ee6b) main_location2_pane_t3

0x0003,

0xf319,	// (0x000470bb) main_location2_pane_t

0x0cb7,	// (0x00038a59) compass_pane_g1_ParamLimits

0x0cb7,	// (0x00038a59) compass_pane_g1

0x7117,	// (0x0003eeb9) compass_pane_t1

0x7126,	// (0x0003eec8) compass_pane_t2

0x0005,

0xf322,	// (0x000470c4) compass_pane_t

0x7171,	// (0x0003ef13) text_secondary_cp61

0x0ccb,	// (0x00038a6d) navi_pane_cams_g5

0x0cee,	// (0x00038a90) navi_pane_im_t1

0x0cfc,	// (0x00038a9e) navi_pane_mp_g1_ParamLimits

0x0cfc,	// (0x00038a9e) navi_pane_mp_g1

0x0d10,	// (0x00038ab2) navi_pane_mp_g2_ParamLimits

0x0d10,	// (0x00038ab2) navi_pane_mp_g2

0x0d1c,	// (0x00038abe) navi_pane_mp_g3_ParamLimits

0x0d1c,	// (0x00038abe) navi_pane_mp_g3

0x0002,

0xf336,	// (0x000470d8) navi_pane_mp_g_ParamLimits

0xf336,	// (0x000470d8) navi_pane_mp_g

0x0d28,	// (0x00038aca) navi_pane_mp_t1

0x0d36,	// (0x00038ad8) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x000470df) navi_pane_mp_t

0x0d72,	// (0x00038b14) navi_pane_vt_g1

0x0d28,	// (0x00038aca) navi_pane_vt_t1

0x0d7a,	// (0x00038b1c) navi_slider_pane

0x0453,	// (0x000381f5) zooming_pane

0x0d82,	// (0x00038b24) navi_slider_pane_g1

0x72a6,	// (0x0003f048) navi_slider_pane_g2

0x0006,

0xf344,	// (0x000470e6) navi_slider_pane_g

0x0da6,	// (0x00038b48) aid_levels_zoom

0x0dae,	// (0x00038b50) zooming_pane_g1

0x0db6,	// (0x00038b58) zooming_pane_g2

0x0db6,	// (0x00038b58) zooming_pane_g3

0x0002,

0xf353,	// (0x000470f5) zooming_pane_g

0x0dbe,	// (0x00038b60) level_10_zoom

0x0dc7,	// (0x00038b69) level_11_zoom

0x0dd0,	// (0x00038b72) level_1_zoom

0x0dd9,	// (0x00038b7b) level_2_zoom

0x0de2,	// (0x00038b84) level_3_zoom

0x0deb,	// (0x00038b8d) level_4_zoom

0x0df4,	// (0x00038b96) level_5_zoom

0x0dfd,	// (0x00038b9f) level_6_zoom

0x0e06,	// (0x00038ba8) level_7_zoom

0x0e0f,	// (0x00038bb1) level_8_zoom

0x0e18,	// (0x00038bba) level_9_zoom

0x0e29,	// (0x00038bcb) popup_phob_thumbnail_window_g1

0x0e31,	// (0x00038bd3) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x000470fc) popup_phob_thumbnail_window_g

0x7b4d,	// (0x0003f8ef) level_1_location

0x7b55,	// (0x0003f8f7) level_2_location

0x7b5d,	// (0x0003f8ff) level_3_location

0x7b67,	// (0x0003f909) level_4_location

0x0453,	// (0x000381f5) level_5_location

0x72b8,	// (0x0003f05a) mce_icon_pane_g1

0x72c0,	// (0x0003f062) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x00047101) mce_icon_pane_g

0x72c8,	// (0x0003f06a) main_mup_pane_g1_ParamLimits

0x72c8,	// (0x0003f06a) main_mup_pane_g1

0x021e,	// (0x00037fc0) main_mup_pane_g2_ParamLimits

0x021e,	// (0x00037fc0) main_mup_pane_g2

0x021e,	// (0x00037fc0) main_mup_pane_g3_ParamLimits

0x021e,	// (0x00037fc0) main_mup_pane_g3

0x021e,	// (0x00037fc0) main_mup_pane_g4_ParamLimits

0x021e,	// (0x00037fc0) main_mup_pane_g4

0x021e,	// (0x00037fc0) main_mup_pane_g5_ParamLimits

0x021e,	// (0x00037fc0) main_mup_pane_g5

0x021e,	// (0x00037fc0) main_mup_pane_g6_ParamLimits

0x021e,	// (0x00037fc0) main_mup_pane_g6

0x021e,	// (0x00037fc0) main_mup_pane_g7_ParamLimits

0x021e,	// (0x00037fc0) main_mup_pane_g7

0x021e,	// (0x00037fc0) main_mup_pane_g8_ParamLimits

0x021e,	// (0x00037fc0) main_mup_pane_g8

0x021e,	// (0x00037fc0) main_mup_pane_g9_ParamLimits

0x021e,	// (0x00037fc0) main_mup_pane_g9

0x021e,	// (0x00037fc0) main_mup_pane_g10_ParamLimits

0x021e,	// (0x00037fc0) main_mup_pane_g10

0x021e,	// (0x00037fc0) main_mup_pane_g11_ParamLimits

0x021e,	// (0x00037fc0) main_mup_pane_g11

0x0210,	// (0x00037fb2) main_mup_pane_g12_ParamLimits

0x0210,	// (0x00037fb2) main_mup_pane_g12

0x021e,	// (0x00037fc0) main_mup_pane_g13_ParamLimits

0x021e,	// (0x00037fc0) main_mup_pane_g13

0x000c,

0xf364,	// (0x00047106) main_mup_pane_g_ParamLimits

0xf364,	// (0x00047106) main_mup_pane_g

0x022c,	// (0x00037fce) main_mup_pane_t1_ParamLimits

0x022c,	// (0x00037fce) main_mup_pane_t1

0x022c,	// (0x00037fce) main_mup_pane_t2_ParamLimits

0x022c,	// (0x00037fce) main_mup_pane_t2

0x022c,	// (0x00037fce) main_mup_pane_t3_ParamLimits

0x022c,	// (0x00037fce) main_mup_pane_t3

0x025e,	// (0x00038000) main_mup_pane_t4_ParamLimits

0x025e,	// (0x00038000) main_mup_pane_t4

0x025e,	// (0x00038000) main_mup_pane_t5_ParamLimits

0x025e,	// (0x00038000) main_mup_pane_t5

0x024a,	// (0x00037fec) main_mup_pane_t6_ParamLimits

0x024a,	// (0x00037fec) main_mup_pane_t6

0x0005,

0xf37f,	// (0x00047121) main_mup_pane_t_ParamLimits

0xf37f,	// (0x00047121) main_mup_pane_t

0x019b,	// (0x00037f3d) mup_progress_pane_ParamLimits

0x019b,	// (0x00037f3d) mup_progress_pane

0x2265,	// (0x0003a007) mup_visualizer_pane_ParamLimits

0x2265,	// (0x0003a007) mup_visualizer_pane

0x2265,	// (0x0003a007) mup_volume_pane_ParamLimits

0x2265,	// (0x0003a007) mup_volume_pane

0x0210,	// (0x00037fb2) mup_visualizer_pane_g1_ParamLimits

0x0210,	// (0x00037fb2) mup_visualizer_pane_g1

0x0e69,	// (0x00038c0b) mup_visualizer_pane_g2_ParamLimits

0x0e69,	// (0x00038c0b) mup_visualizer_pane_g2

0x0202,	// (0x00037fa4) mup_visualizer_pane_g3_ParamLimits

0x0202,	// (0x00037fa4) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x0004712e) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x0004712e) mup_visualizer_pane_g

0x0240,	// (0x00037fe2) mup_volume_pane_g1

0x0240,	// (0x00037fe2) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00046e51) mup_volume_pane_g

0x0240,	// (0x00037fe2) mup_progress_pane_g1

0x0240,	// (0x00037fe2) mup_progress_pane_g2

0x0240,	// (0x00037fe2) mup_progress_pane_g3

0x0002,

0xf393,	// (0x00047135) mup_progress_pane_g

0xeef0,	// (0x00046c92) bg_popup_window_pane_cp05

0x0e77,	// (0x00038c19) heading_pane_cp02_ParamLimits

0x0e77,	// (0x00038c19) heading_pane_cp02

0x0e93,	// (0x00038c35) list_popup_blid_pane

0x0e9b,	// (0x00038c3d) list_blid_sat_info_pane_ParamLimits

0x0e9b,	// (0x00038c3d) list_blid_sat_info_pane

0x0eae,	// (0x00038c50) list_blid_sat_info_pane_g1

0x0eb6,	// (0x00038c58) list_blid_sat_info_pane_t1

0x73d7,	// (0x0003f179) mup_equalizer_pane_ParamLimits

0x73d7,	// (0x0003f179) mup_equalizer_pane

0x73f8,	// (0x0003f19a) mup_equalizer_pane_cp1_ParamLimits

0x73f8,	// (0x0003f19a) mup_equalizer_pane_cp1

0x7419,	// (0x0003f1bb) mup_equalizer_pane_cp2_ParamLimits

0x7419,	// (0x0003f1bb) mup_equalizer_pane_cp2

0x743a,	// (0x0003f1dc) mup_equalizer_pane_cp3_ParamLimits

0x743a,	// (0x0003f1dc) mup_equalizer_pane_cp3

0x745f,	// (0x0003f201) mup_equalizer_pane_cp4_ParamLimits

0x745f,	// (0x0003f201) mup_equalizer_pane_cp4

0x7484,	// (0x0003f226) mup_equalizer_pane_cp5

0x749c,	// (0x0003f23e) mup_equalizer_pane_cp6

0x74b4,	// (0x0003f256) mup_equalizer_pane_cp7

0x1f99,	// (0x00039d3b) bg_popup_call_poc_act_pane_g9

0x1fa1,	// (0x00039d43) bg_popup_call_poc_act_pane_g10

0x1fa9,	// (0x00039d4b) bg_popup_call_poc_act_pane_g11

0x000a,

0x0179,	// (0x00037f1b) mup_scale_pane

0x0191,	// (0x00037f33) mup_scale_pane_g1

0x0ec4,	// (0x00038c66) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x00047151) mup_scale_pane_g

0x0ee8,	// (0x00038c8a) msg_data_pane

0x0ef0,	// (0x00038c92) scroll_pane_cp017

0x413b,	// (0x0003bedd) bg_list_pane_cp04_ParamLimits

0x413b,	// (0x0003bedd) bg_list_pane_cp04

0x0ef8,	// (0x00038c9a) msg_data_pane_g1

0x74de,	// (0x0003f280) msg_data_pane_g2

0x74e8,	// (0x0003f28a) msg_data_pane_g3

0x74f2,	// (0x0003f294) msg_data_pane_g4

0x74fa,	// (0x0003f29c) msg_data_pane_g5

0x7502,	// (0x0003f2a4) msg_data_pane_g6

0x750a,	// (0x0003f2ac) msg_data_pane_g7

0x0006,

0xf3be,	// (0x00047160) msg_data_pane_g

0x4161,	// (0x0003bf03) msg_text_pane_ParamLimits

0x4161,	// (0x0003bf03) msg_text_pane

0x7512,	// (0x0003f2b4) qrid_highlight_pane_cp011_ParamLimits

0x7512,	// (0x0003f2b4) qrid_highlight_pane_cp011

0xeef0,	// (0x00046c92) msg_body_pane

0x0179,	// (0x00037f1b) msg_header_pane

0x419a,	// (0x0003bf3c) input_focus_pane_cp07

0x41bd,	// (0x0003bf5f) msg_header_pane_t1_ParamLimits

0x41bd,	// (0x0003bf5f) msg_header_pane_t1

0x41d9,	// (0x0003bf7b) msg_header_pane_t2_ParamLimits

0x41d9,	// (0x0003bf7b) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x00047174) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x00047174) msg_header_pane_t

0x0f35,	// (0x00038cd7) msg_body_pane_g1

0x41f9,	// (0x0003bf9b) msg_body_pane_t1_ParamLimits

0x41f9,	// (0x0003bf9b) msg_body_pane_t1

0x422a,	// (0x0003bfcc) msg_body_pane_t2_ParamLimits

0x422a,	// (0x0003bfcc) msg_body_pane_t2

0x423c,	// (0x0003bfde) msg_body_pane_t3_ParamLimits

0x423c,	// (0x0003bfde) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x00047179) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x00047179) msg_body_pane_t

0x757a,	// (0x0003f31c) main_viewer_pane_g1_ParamLimits

0x757a,	// (0x0003f31c) main_viewer_pane_g1

0x7586,	// (0x0003f328) main_viewer_pane_g2_ParamLimits

0x7586,	// (0x0003f328) main_viewer_pane_g2

0x7592,	// (0x0003f334) main_viewer_pane_g3_ParamLimits

0x7592,	// (0x0003f334) main_viewer_pane_g3

0x75a3,	// (0x0003f345) main_viewer_pane_g4_ParamLimits

0x75a3,	// (0x0003f345) main_viewer_pane_g4

0x75b4,	// (0x0003f356) main_viewer_pane_g5_ParamLimits

0x75b4,	// (0x0003f356) main_viewer_pane_g5

0x75b4,	// (0x0003f356) main_viewer_pane_g7_ParamLimits

0x75b4,	// (0x0003f356) main_viewer_pane_g7

0x75c6,	// (0x0003f368) main_viewer_pane_g8_ParamLimits

0x75c6,	// (0x0003f368) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x00047189) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x00047189) main_viewer_pane_g

0x0f3d,	// (0x00038cdf) viewer_content_pane_ParamLimits

0x0f3d,	// (0x00038cdf) viewer_content_pane

0x75fe,	// (0x0003f3a0) main_postcard_pane_g1_ParamLimits

0x75fe,	// (0x0003f3a0) main_postcard_pane_g1

0x760c,	// (0x0003f3ae) main_postcard_pane_g2_ParamLimits

0x760c,	// (0x0003f3ae) main_postcard_pane_g2

0x761a,	// (0x0003f3bc) main_postcard_pane_g3_ParamLimits

0x761a,	// (0x0003f3bc) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x0004719a) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x0004719a) main_postcard_pane_g

0x762a,	// (0x0003f3cc) main_postcard_pane_g4

0x20cc,	// (0x00039e6e) smil_status_volume_pane_g2

0x7656,	// (0x0003f3f8) postcard_pane_ParamLimits

0x7656,	// (0x0003f3f8) postcard_pane

0x173e,	// (0x000394e0) postcard_pane_g1_ParamLimits

0x173e,	// (0x000394e0) postcard_pane_g1

0x7690,	// (0x0003f432) postcard_pane_g2_ParamLimits

0x7690,	// (0x0003f432) postcard_pane_g2

0x769c,	// (0x0003f43e) postcard_pane_g3_ParamLimits

0x769c,	// (0x0003f43e) postcard_pane_g3

0x0f59,	// (0x00038cfb) postcard_pane_g4_ParamLimits

0x0f59,	// (0x00038cfb) postcard_pane_g4

0x76a8,	// (0x0003f44a) postcard_pane_g5_ParamLimits

0x76a8,	// (0x0003f44a) postcard_pane_g5

0x76b4,	// (0x0003f456) postcard_pane_g6_ParamLimits

0x76b4,	// (0x0003f456) postcard_pane_g6

0x0f4b,	// (0x00038ced) postcard_pane_g7_ParamLimits

0x0f4b,	// (0x00038ced) postcard_pane_g7

0x0006,

0xf405,	// (0x000471a7) postcard_pane_g_ParamLimits

0xf405,	// (0x000471a7) postcard_pane_g

0x76c2,	// (0x0003f464) main_mp2_pane_g1_ParamLimits

0x76c2,	// (0x0003f464) main_mp2_pane_g1

0x76d0,	// (0x0003f472) main_mp2_pane_g2_ParamLimits

0x76d0,	// (0x0003f472) main_mp2_pane_g2

0x76dc,	// (0x0003f47e) main_mp2_pane_g3_ParamLimits

0x76dc,	// (0x0003f47e) main_mp2_pane_g3

0x0002,

0xf414,	// (0x000471b6) main_mp2_pane_g_ParamLimits

0xf414,	// (0x000471b6) main_mp2_pane_g

0x76e8,	// (0x0003f48a) main_mp2_pane_t1_ParamLimits

0x76e8,	// (0x0003f48a) main_mp2_pane_t1

0x76ff,	// (0x0003f4a1) main_mp2_pane_t2_ParamLimits

0x76ff,	// (0x0003f4a1) main_mp2_pane_t2

0x7713,	// (0x0003f4b5) main_mp2_pane_t3_ParamLimits

0x7713,	// (0x0003f4b5) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x000471bd) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x000471bd) main_mp2_pane_t

0x019b,	// (0x00037f3d) pec_content_pane_ParamLimits

0x019b,	// (0x00037f3d) pec_content_pane

0xe654,	// (0x000463f6) scroll_pane_cp015

0x0e5b,	// (0x00038bfd) pec_attribute_pane_ParamLimits

0x0e5b,	// (0x00038bfd) pec_attribute_pane

0x0202,	// (0x00037fa4) pec_content_pane_g1_ParamLimits

0x0202,	// (0x00037fa4) pec_content_pane_g1

0x0f67,	// (0x00038d09) pec_content_pane_t1_ParamLimits

0x0f67,	// (0x00038d09) pec_content_pane_t1

0x0f7b,	// (0x00038d1d) pec_content_pane_t2_ParamLimits

0x0f7b,	// (0x00038d1d) pec_content_pane_t2

0x0001,

0xf422,	// (0x000471c4) pec_content_pane_t_ParamLimits

0xf422,	// (0x000471c4) pec_content_pane_t

0x01f4,	// (0x00037f96) list_single_graphic_pane_cp01_ParamLimits

0x01f4,	// (0x00037f96) list_single_graphic_pane_cp01

0x0179,	// (0x00037f1b) bg_popup_sub_pane_cp04

0x0f8f,	// (0x00038d31) popup_mup_playback_window_g1

0x0f9b,	// (0x00038d3d) popup_mup_playback_window_t1

0x0fb0,	// (0x00038d52) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x000471c9) popup_mup_playback_window_t

0x0fe7,	// (0x00038d89) main_image_pane_g1_ParamLimits

0x0fe7,	// (0x00038d89) main_image_pane_g1

0x102a,	// (0x00038dcc) scroll_pane_cp018_ParamLimits

0x102a,	// (0x00038dcc) scroll_pane_cp018

0x1042,	// (0x00038de4) scroll_pane_cp016_ParamLimits

0x1042,	// (0x00038de4) scroll_pane_cp016

0x7796,	// (0x0003f538) smil2_image_pane_ParamLimits

0x7796,	// (0x0003f538) smil2_image_pane

0x77cc,	// (0x0003f56e) smil2_root_pane_ParamLimits

0x77cc,	// (0x0003f56e) smil2_root_pane

0x77f8,	// (0x0003f59a) smil2_text_pane_ParamLimits

0x77f8,	// (0x0003f59a) smil2_text_pane

0xe654,	// (0x000463f6) bg_list_pane_cp06

0xe654,	// (0x000463f6) grid_radio_pane

0xeef0,	// (0x00046c92) bg_popup_window_pane_cp06

0x09b9,	// (0x0003875b) main_fmradio_pane_t1

0x1fb1,	// (0x00039d53) heading_pane_cp04

0x09b9,	// (0x0003875b) main_fmradio_pane_t2

0x1fb9,	// (0x00039d5b) popup_cale_lunar_info_window_g1

0x09b9,	// (0x0003875b) main_fmradio_pane_t3

0x1fc1,	// (0x00039d63) popup_cale_lunar_info_window_g2

0x09b9,	// (0x0003875b) main_fmradio_pane_t4

0x0001,

0x09b9,	// (0x0003875b) main_fmradio_pane_t5

0x0004,

0xf4f7,	// (0x00047299) popup_cale_lunar_info_window_g

0xf287,	// (0x00047029) main_fmradio_pane_t

0xe654,	// (0x000463f6) wait_bar_pane_cp03

0x01f4,	// (0x00037f96) cell_fmradio_pane_ParamLimits

0x01f4,	// (0x00037f96) cell_fmradio_pane

0x0202,	// (0x00037fa4) cell_fmradio_pane_g1_ParamLimits

0x0202,	// (0x00037fa4) cell_fmradio_pane_g1

0xe654,	// (0x000463f6) grid_highlight_pane_cp011

0x1076,	// (0x00038e18) poc_content_pane_ParamLimits

0x1076,	// (0x00038e18) poc_content_pane

0x1088,	// (0x00038e2a) scroll_pane_cp019

0x7838,	// (0x0003f5da) popup_call_poc_act_window_ParamLimits

0x7838,	// (0x0003f5da) popup_call_poc_act_window

0x7845,	// (0x0003f5e7) popup_call_poc_inact_window_ParamLimits

0x7845,	// (0x0003f5e7) popup_call_poc_inact_window

0xf4d3,	// (0x00047275) bg_popup_call_poc_act_pane_g

0x1f29,	// (0x00039ccb) bg_popup_call_poc_inact_pane_g1

0x1f31,	// (0x00039cd3) bg_popup_call_poc_inact_pane_g2

0x1090,	// (0x00038e32) popup_call_poc_act_window_g2

0x1f39,	// (0x00039cdb) bg_popup_call_poc_inact_pane_g3

0x1f41,	// (0x00039ce3) bg_popup_call_poc_inact_pane_g4

0x1f49,	// (0x00039ceb) bg_popup_call_poc_inact_pane_g5

0x1098,	// (0x00038e3a) popup_call_poc_act_window_t1_ParamLimits

0x1098,	// (0x00038e3a) popup_call_poc_act_window_t1

0x10c0,	// (0x00038e62) popup_call_poc_act_window_t2_ParamLimits

0x10c0,	// (0x00038e62) popup_call_poc_act_window_t2

0x10e8,	// (0x00038e8a) popup_call_poc_act_window_t3_ParamLimits

0x10e8,	// (0x00038e8a) popup_call_poc_act_window_t3

0x1110,	// (0x00038eb2) popup_call_poc_act_window_t4_ParamLimits

0x1110,	// (0x00038eb2) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x000471de) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x000471de) popup_call_poc_act_window_t

0x1f51,	// (0x00039cf3) bg_popup_call_poc_inact_pane_g6

0x1f59,	// (0x00039cfb) bg_popup_call_poc_inact_pane_g7

0x1f61,	// (0x00039d03) bg_popup_call_poc_inact_pane_g8

0x1122,	// (0x00038ec4) popup_call_poc_inact_window_g2

0x1f69,	// (0x00039d0b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c0,	// (0x00047262) bg_popup_call_poc_inact_pane_g

0x112a,	// (0x00038ecc) popup_call_poc_inact_window_t1_ParamLimits

0x112a,	// (0x00038ecc) popup_call_poc_inact_window_t1

0x113f,	// (0x00038ee1) popup_call_poc_inact_window_t2_ParamLimits

0x113f,	// (0x00038ee1) popup_call_poc_inact_window_t2

0x1154,	// (0x00038ef6) popup_call_poc_inact_window_t3_ParamLimits

0x1154,	// (0x00038ef6) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x000471e7) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x000471e7) popup_call_poc_inact_window_t

0x2057,	// (0x00039df9) context_pane_ParamLimits

0x7e6a,	// (0x0003fc0c) signal_pane_ParamLimits

0x0453,	// (0x000381f5) main_call2_pane

0x7dd6,	// (0x0003fb78) popup_phob_thumbnail2_window_ParamLimits

0x7dd6,	// (0x0003fb78) popup_phob_thumbnail2_window

0x7528,	// (0x0003f2ca) aid_hotspot_pointer_arrow_pane

0x7530,	// (0x0003f2d2) aid_hotspot_pointer_hand_pane

0x7b15,	// (0x0003f8b7) phob_pre_status_pane_g5

0x01f4,	// (0x00037f96) cams_zoom_pane_ParamLimits

0x01f4,	// (0x00037f96) image_vga_pane_ParamLimits

0x0210,	// (0x00037fb2) main_camera_pane_g1_ParamLimits

0x0210,	// (0x00037fb2) main_camera_pane_g2_ParamLimits

0x0210,	// (0x00037fb2) main_camera_pane_g3_ParamLimits

0x0210,	// (0x00037fb2) main_camera_pane_g4_ParamLimits

0x0210,	// (0x00037fb2) main_camera_pane_g5_ParamLimits

0x0210,	// (0x00037fb2) main_camera_pane_g6_ParamLimits

0x0210,	// (0x00037fb2) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00046f22) main_camera_pane_g_ParamLimits

0x025e,	// (0x00038000) main_camera_pane_t1_ParamLimits

0x025e,	// (0x00038000) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00046f33) main_camera_pane_t_ParamLimits

0x0179,	// (0x00037f1b) bg_popup_preview_window_pane_cp01_ParamLimits

0x0179,	// (0x00037f1b) bg_popup_preview_window_pane_cp01

0x1169,	// (0x00038f0b) popup_phob_thumbnail2_window_g1_ParamLimits

0x1169,	// (0x00038f0b) popup_phob_thumbnail2_window_g1

0xeef0,	// (0x00046c92) call2_cli_visual_pane

0x7861,	// (0x0003f603) popup_call2_audio_conf_window_ParamLimits

0x7861,	// (0x0003f603) popup_call2_audio_conf_window

0x787a,	// (0x0003f61c) popup_call2_audio_first_window_ParamLimits

0x787a,	// (0x0003f61c) popup_call2_audio_first_window

0x7918,	// (0x0003f6ba) popup_call2_audio_in_window_ParamLimits

0x7918,	// (0x0003f6ba) popup_call2_audio_in_window

0x795c,	// (0x0003f6fe) popup_call2_audio_out_window_ParamLimits

0x795c,	// (0x0003f6fe) popup_call2_audio_out_window

0x79c6,	// (0x0003f768) popup_call2_audio_second_window_ParamLimits

0x79c6,	// (0x0003f768) popup_call2_audio_second_window

0x7a24,	// (0x0003f7c6) popup_call2_audio_wait_window_ParamLimits

0x7a24,	// (0x0003f7c6) popup_call2_audio_wait_window

0xeef0,	// (0x00046c92) bg_popup_call2_act_pane_cp03

0x015b,	// (0x00037efd) list_conf_pane_cp

0x1175,	// (0x00038f17) popup_call2_audio_conf_window_t1

0x1183,	// (0x00038f25) list_single_graphic_popup_conf2_pane_ParamLimits

0x1183,	// (0x00038f25) list_single_graphic_popup_conf2_pane

0x0ba3,	// (0x00038945) list_highlight_pane_cp04

0x1196,	// (0x00038f38) list_single_graphic_popup_conf2_pane_g1

0x0bb4,	// (0x00038956) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x000471ee) list_single_graphic_popup_conf2_pane_g

0x11a0,	// (0x00038f42) list_single_graphic_popup_conf2_pane_t1

0x11ae,	// (0x00038f50) bg_popup_call2_act_pane_cp01_ParamLimits

0x11ae,	// (0x00038f50) bg_popup_call2_act_pane_cp01

0x1238,	// (0x00038fda) call_type_pane_cp05_ParamLimits

0x1238,	// (0x00038fda) call_type_pane_cp05

0x128c,	// (0x0003902e) popup_call2_audio_second_window_g1_ParamLimits

0x128c,	// (0x0003902e) popup_call2_audio_second_window_g1

0x12e0,	// (0x00039082) popup_call2_audio_second_window_g2_ParamLimits

0x12e0,	// (0x00039082) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x000471f3) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x000471f3) popup_call2_audio_second_window_g

0x1345,	// (0x000390e7) popup_call2_audio_second_window_t1_ParamLimits

0x1345,	// (0x000390e7) popup_call2_audio_second_window_t1

0x1400,	// (0x000391a2) popup_call2_audio_second_window_t2_ParamLimits

0x1400,	// (0x000391a2) popup_call2_audio_second_window_t2

0x1453,	// (0x000391f5) popup_call2_audio_second_window_t3_ParamLimits

0x1453,	// (0x000391f5) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x000471fa) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x000471fa) popup_call2_audio_second_window_t

0xeef0,	// (0x00046c92) bg_popup_call2_in_pane_cp02

0xeefa,	// (0x00046c9c) call_type_pane_cp04

0x7a63,	// (0x0003f805) popup_call2_audio_wait_window_g1

0x7a6b,	// (0x0003f80d) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x00047203) popup_call2_audio_wait_window_g

0xef12,	// (0x00046cb4) popup_call2_audio_wait_window_t3

0x1546,	// (0x000392e8) bg_popup_call2_act_pane_ParamLimits

0x1546,	// (0x000392e8) bg_popup_call2_act_pane

0x1606,	// (0x000393a8) call_type_pane_cp03_ParamLimits

0x1606,	// (0x000393a8) call_type_pane_cp03

0x166a,	// (0x0003940c) popup_call2_audio_first_window_g1_ParamLimits

0x166a,	// (0x0003940c) popup_call2_audio_first_window_g1

0x16da,	// (0x0003947c) popup_call2_audio_first_window_g2_ParamLimits

0x16da,	// (0x0003947c) popup_call2_audio_first_window_g2

0x173e,	// (0x000394e0) popup_call2_audio_first_window_g3_ParamLimits

0x173e,	// (0x000394e0) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x00047208) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x00047208) popup_call2_audio_first_window_g

0x17c6,	// (0x00039568) popup_call2_audio_first_window_t1_ParamLimits

0x17c6,	// (0x00039568) popup_call2_audio_first_window_t1

0x18c9,	// (0x0003966b) popup_call2_audio_first_window_t4_ParamLimits

0x18c9,	// (0x0003966b) popup_call2_audio_first_window_t4

0x19ac,	// (0x0003974e) popup_call2_audio_first_window_t5_ParamLimits

0x19ac,	// (0x0003974e) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x00047213) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x00047213) popup_call2_audio_first_window_t

0x0171,	// (0x00037f13) bg_popup_call2_act_pane_g1

0x1fcb,	// (0x00039d6d) popup_cale_lunar_info_window_t1

0x1fd9,	// (0x00039d7b) popup_cale_lunar_info_window_t2

0x1fe7,	// (0x00039d89) popup_cale_lunar_info_window_t3

0xeef0,	// (0x00046c92) bg_popup_call2_bubble_pane

0x1aad,	// (0x0003984f) bg_popup_call2_in_pane_cp01_ParamLimits

0x1aad,	// (0x0003984f) bg_popup_call2_in_pane_cp01

0xe782,	// (0x00046524) call_type_pane_cp02

0x7a73,	// (0x0003f815) popup_call2_audio_out_window_g1_ParamLimits

0x7a73,	// (0x0003f815) popup_call2_audio_out_window_g1

0x1af5,	// (0x00039897) popup_call2_audio_out_window_g2_ParamLimits

0x1af5,	// (0x00039897) popup_call2_audio_out_window_g2

0x7a9f,	// (0x0003f841) popup_call2_audio_out_window_g3_ParamLimits

0x7a9f,	// (0x0003f841) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x0004721c) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x0004721c) popup_call2_audio_out_window_g

0x1b2c,	// (0x000398ce) popup_call2_audio_out_window_t1_ParamLimits

0x1b2c,	// (0x000398ce) popup_call2_audio_out_window_t1

0x1b8b,	// (0x0003992d) popup_call2_audio_out_window_t2_ParamLimits

0x1b8b,	// (0x0003992d) popup_call2_audio_out_window_t2

0x1bdf,	// (0x00039981) popup_call2_audio_out_window_t3_ParamLimits

0x1bdf,	// (0x00039981) popup_call2_audio_out_window_t3

0x1bf5,	// (0x00039997) popup_call2_audio_out_window_t4_ParamLimits

0x1bf5,	// (0x00039997) popup_call2_audio_out_window_t4

0x1c0b,	// (0x000399ad) popup_call2_audio_out_window_t5_ParamLimits

0x1c0b,	// (0x000399ad) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x00047225) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x00047225) popup_call2_audio_out_window_t

0x1c6f,	// (0x00039a11) bg_popup_call2_in_pane_ParamLimits

0x1c6f,	// (0x00039a11) bg_popup_call2_in_pane

0x1ccb,	// (0x00039a6d) popup_call2_audio_in_window_g1_ParamLimits

0x1ccb,	// (0x00039a6d) popup_call2_audio_in_window_g1

0x1d03,	// (0x00039aa5) popup_call2_audio_in_window_g2_ParamLimits

0x1d03,	// (0x00039aa5) popup_call2_audio_in_window_g2

0x1d3b,	// (0x00039add) popup_call2_audio_in_window_g3_ParamLimits

0x1d3b,	// (0x00039add) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x00047232) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x00047232) popup_call2_audio_in_window_g

0x1d93,	// (0x00039b35) popup_call2_audio_in_window_t1_ParamLimits

0x1d93,	// (0x00039b35) popup_call2_audio_in_window_t1

0x1e13,	// (0x00039bb5) popup_call2_audio_in_window_t2_ParamLimits

0x1e13,	// (0x00039bb5) popup_call2_audio_in_window_t2

0x1e93,	// (0x00039c35) popup_call2_audio_in_window_t3_ParamLimits

0x1e93,	// (0x00039c35) popup_call2_audio_in_window_t3

0x1ead,	// (0x00039c4f) popup_call2_audio_in_window_t4_ParamLimits

0x1ead,	// (0x00039c4f) popup_call2_audio_in_window_t4

0x1ebf,	// (0x00039c61) popup_call2_audio_in_window_t5_ParamLimits

0x1ebf,	// (0x00039c61) popup_call2_audio_in_window_t5

0x1ed4,	// (0x00039c76) popup_call2_audio_in_window_t6_ParamLimits

0x1ed4,	// (0x00039c76) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x0004723b) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x0004723b) popup_call2_audio_in_window_t

0x0171,	// (0x00037f13) bg_popup_call2_in_pane_g1

0x1ff5,	// (0x00039d97) popup_cale_lunar_info_window_t4

0x0003,

0xf4fc,	// (0x0004729e) popup_cale_lunar_info_window_t

0x0179,	// (0x00037f1b) bg_popup_call2_rect_pane_ParamLimits

0x0179,	// (0x00037f1b) bg_popup_call2_rect_pane

0xeef0,	// (0x00046c92) call2_cli_visual_graphic_pane

0xeef0,	// (0x00046c92) call2_cli_visual_text_pane

0x7ea5,	// (0x0003fc47) smil_status_volume_pane_g3

0x0002,

0x0191,	// (0x00037f33) call2_cli_visual_graphic_pane_g1

0x0191,	// (0x00037f33) call2_cli_visual_graphic_pane_g2

0x0191,	// (0x00037f33) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x00047248) call2_cli_visual_graphic_pane_g

0x1ee9,	// (0x00039c8b) bg_popup_call2_rect_pane_g1

0x037e,	// (0x00038120) bg_popup_call2_rect_pane_g2

0x1ef1,	// (0x00039c93) bg_popup_call2_rect_pane_g3

0x1ef9,	// (0x00039c9b) bg_popup_call2_rect_pane_g4

0x1f01,	// (0x00039ca3) bg_popup_call2_rect_pane_g5

0x1f09,	// (0x00039cab) bg_popup_call2_rect_pane_g6

0x1f11,	// (0x00039cb3) bg_popup_call2_rect_pane_g7

0x1f19,	// (0x00039cbb) bg_popup_call2_rect_pane_g8

0x1f21,	// (0x00039cc3) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x0004724f) bg_popup_call2_rect_pane_g

0x1f29,	// (0x00039ccb) bg_popup_call2_bubble_pane_g1

0x1f31,	// (0x00039cd3) bg_popup_call2_bubble_pane_g2

0x1f39,	// (0x00039cdb) bg_popup_call2_bubble_pane_g3

0x1f41,	// (0x00039ce3) bg_popup_call2_bubble_pane_g4

0x1f49,	// (0x00039ceb) bg_popup_call2_bubble_pane_g5

0x1f51,	// (0x00039cf3) bg_popup_call2_bubble_pane_g6

0x1f59,	// (0x00039cfb) bg_popup_call2_bubble_pane_g7

0x1f61,	// (0x00039d03) bg_popup_call2_bubble_pane_g8

0x1f69,	// (0x00039d0b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x00047262) bg_popup_call2_bubble_pane_g

0x549e,	// (0x0003d240) aid_cale_week_size_cell_pane

0x0179,	// (0x00037f1b) aid_cams_cif_uncrop_pane_ParamLimits

0x0179,	// (0x00037f1b) aid_cams_cif_uncrop_pane

0x01f4,	// (0x00037f96) aid_cams_size_cell_ParamLimits

0x01f4,	// (0x00037f96) aid_cams_size_cell

0x01f4,	// (0x00037f96) grid_cams_pane_ParamLimits

0x01f4,	// (0x00037f96) linegrid_cams_pane_ParamLimits

0x5d52,	// (0x0003daf4) call_video_pane_t1

0x5d6f,	// (0x0003db11) call_video_pane_t2

0x0001,

0xf1d8,	// (0x00046f7a) call_video_pane_t

0x622c,	// (0x0003dfce) aid_cale_month_size_cell_pane_ParamLimits

0x622c,	// (0x0003dfce) aid_cale_month_size_cell_pane

0xf540,	// (0x000472e2) smil_status_volume_pane_g

0x7eb2,	// (0x0003fc54) volume_smil_pane_ParamLimits

0x4f19,	// (0x0003ccbb) aid_popup2_width_pane

0x53aa,	// (0x0003d14c) cell_qdial_pane_g4_ParamLimits

0x53aa,	// (0x0003d14c) cell_qdial_pane_g4

0x70f3,	// (0x0003ee95) aid_blid_cardinal_pane_ParamLimits

0x7103,	// (0x0003eea5) aid_blid_destination_pane_ParamLimits

0x7103,	// (0x0003eea5) aid_blid_destination_pane

0x0179,	// (0x00037f1b) bg_popup_call_poc_act_pane_ParamLimits

0x0179,	// (0x00037f1b) bg_popup_call_poc_act_pane

0x0179,	// (0x00037f1b) bg_popup_call_poc_inact_pane_ParamLimits

0x0179,	// (0x00037f1b) bg_popup_call_poc_inact_pane

0x1f71,	// (0x00039d13) bg_popup_call_poc_act_pane_g1

0x1f79,	// (0x00039d1b) bg_popup_call_poc_act_pane_g2

0x1f81,	// (0x00039d23) bg_popup_call_poc_act_pane_g3

0x1f41,	// (0x00039ce3) bg_popup_call_poc_act_pane_g4

0x1f49,	// (0x00039ceb) bg_popup_call_poc_act_pane_g5

0x1f89,	// (0x00039d2b) bg_popup_call_poc_act_pane_g6

0x1f59,	// (0x00039cfb) bg_popup_call_poc_act_pane_g7

0x1f91,	// (0x00039d33) bg_popup_call_poc_act_pane_g8

0xeef0,	// (0x00046c92) main_usb_pane

0x7cf3,	// (0x0003fa95) popup_cale_lunar_info_window

0x6087,	// (0x0003de29) im_reading_pane_t1_ParamLimits

0x0518,	// (0x000382ba) list_im_pane_ParamLimits

0x0529,	// (0x000382cb) scroll_pane_cp07_ParamLimits

0xeef0,	// (0x00046c92) grid_highlight_pane_cp012

0x0179,	// (0x00037f1b) mup_scale_pane_ParamLimits

0x0210,	// (0x00037fb2) main_usb_pane_g1_ParamLimits

0x0210,	// (0x00037fb2) main_usb_pane_g1

0x0210,	// (0x00037fb2) main_usb_pane_g2_ParamLimits

0x0210,	// (0x00037fb2) main_usb_pane_g2

0x0001,

0xf0a1,	// (0x00046e43) main_usb_pane_g_ParamLimits

0xf0a1,	// (0x00046e43) main_usb_pane_g

0x025e,	// (0x00038000) main_usb_pane_t1_ParamLimits

0x025e,	// (0x00038000) main_usb_pane_t1

0x025e,	// (0x00038000) main_usb_pane_t2_ParamLimits

0x025e,	// (0x00038000) main_usb_pane_t2

0x025e,	// (0x00038000) main_usb_pane_t3_ParamLimits

0x025e,	// (0x00038000) main_usb_pane_t3

0x025e,	// (0x00038000) main_usb_pane_t4_ParamLimits

0x025e,	// (0x00038000) main_usb_pane_t4

0x025e,	// (0x00038000) main_usb_pane_t5_ParamLimits

0x025e,	// (0x00038000) main_usb_pane_t5

0x025e,	// (0x00038000) main_usb_pane_t6_ParamLimits

0x025e,	// (0x00038000) main_usb_pane_t6

0x0005,

0xf4ea,	// (0x0004728c) main_usb_pane_t_ParamLimits

0x7092,	// (0x0003ee34) aid_text_placing

0x709d,	// (0x0003ee3f) main_location2_pane_t1_ParamLimits

0x70b3,	// (0x0003ee55) main_location2_pane_t2_ParamLimits

0x70c9,	// (0x0003ee6b) main_location2_pane_t3_ParamLimits

0x70df,	// (0x0003ee81) main_location2_pane_t4_ParamLimits

0x70df,	// (0x0003ee81) main_location2_pane_t4

0xf319,	// (0x000470bb) main_location2_pane_t_ParamLimits

0x01b5,	// (0x00037f57) find_pinb_pane_g2_ParamLimits

0x01b5,	// (0x00037f57) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00046e37) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00046e37) find_pinb_pane_g

0x01c1,	// (0x00037f63) find_pinb_pane_t1_ParamLimits

0x01d3,	// (0x00037f75) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x00046e3c) find_pinb_pane_t_ParamLimits

0xeef0,	// (0x00046c92) main_call3_pane

0x67df,	// (0x0003e581) cale_month_day_heading_pane_t1_ParamLimits

0x6861,	// (0x0003e603) cale_month_day_heading_pane_t2_ParamLimits

0x68da,	// (0x0003e67c) cale_month_day_heading_pane_t3_ParamLimits

0x6953,	// (0x0003e6f5) cale_month_day_heading_pane_t4_ParamLimits

0x69cc,	// (0x0003e76e) cale_month_day_heading_pane_t5_ParamLimits

0x6a4d,	// (0x0003e7ef) cale_month_day_heading_pane_t6_ParamLimits

0x6ad6,	// (0x0003e878) cale_month_day_heading_pane_t7_ParamLimits

0xf210,	// (0x00046fb2) cale_month_day_heading_pane_t_ParamLimits

0x0782,	// (0x00038524) smil_status_volume_pane

0x7674,	// (0x0003f416) postcard_address_pane_ParamLimits

0x7674,	// (0x0003f416) postcard_address_pane

0x7682,	// (0x0003f424) postcard_message_pane_ParamLimits

0x7682,	// (0x0003f424) postcard_message_pane

0x7acb,	// (0x0003f86d) call2_cli_visual_pane_t1_ParamLimits

0x7acb,	// (0x0003f86d) call2_cli_visual_pane_t1

0x210a,	// (0x00039eac) postcard_message_pane_t1_ParamLimits

0x210a,	// (0x00039eac) postcard_message_pane_t1

0x20f2,	// (0x00039e94) postcard_address_pane_t1_ParamLimits

0x20f2,	// (0x00039e94) postcard_address_pane_t1

0x7fe9,	// (0x0003fd8b) popup_call3_audio_in_window_ParamLimits

0x7fe9,	// (0x0003fd8b) popup_call3_audio_in_window

0x7ec7,	// (0x0003fc69) bg_popup_call3_in_pane_ParamLimits

0x7ec7,	// (0x0003fc69) bg_popup_call3_in_pane

0x7f2f,	// (0x0003fcd1) popup_call3_audio_in_window_g1_ParamLimits

0x7f2f,	// (0x0003fcd1) popup_call3_audio_in_window_g1

0x7f47,	// (0x0003fce9) popup_call3_audio_in_window_g2_ParamLimits

0x7f47,	// (0x0003fce9) popup_call3_audio_in_window_g2

0x7f5f,	// (0x0003fd01) popup_call3_audio_in_window_g3_ParamLimits

0x7f5f,	// (0x0003fd01) popup_call3_audio_in_window_g3

0x0003,

0xf547,	// (0x000472e9) popup_call3_audio_in_window_g_ParamLimits

0xf547,	// (0x000472e9) popup_call3_audio_in_window_g

0x7f87,	// (0x0003fd29) popup_call3_audio_in_window_t1_ParamLimits

0x7f87,	// (0x0003fd29) popup_call3_audio_in_window_t1

0x7faf,	// (0x0003fd51) popup_call3_audio_in_window_t2_ParamLimits

0x7faf,	// (0x0003fd51) popup_call3_audio_in_window_t2

0x7fd7,	// (0x0003fd79) popup_call3_audio_in_window_t3_ParamLimits

0x7fd7,	// (0x0003fd79) popup_call3_audio_in_window_t3

0x0002,

0xf550,	// (0x000472f2) popup_call3_audio_in_window_t_ParamLimits

0xf550,	// (0x000472f2) popup_call3_audio_in_window_t

0x0453,	// (0x000381f5) bg_popup_call3_rect_pane

0x1ee9,	// (0x00039c8b) bg_popup_call3_rect_pane_g1

0x037e,	// (0x00038120) bg_popup_call3_rect_pane_g2

0x1ef1,	// (0x00039c93) bg_popup_call3_rect_pane_g3

0x1ef9,	// (0x00039c9b) bg_popup_call3_rect_pane_g4

0x1f01,	// (0x00039ca3) bg_popup_call3_rect_pane_g5

0x1f09,	// (0x00039cab) bg_popup_call3_rect_pane_g6

0x1f11,	// (0x00039cb3) bg_popup_call3_rect_pane_g7

0xe654,	// (0x000463f6) mup_visualizer_osc_pane

0xe654,	// (0x000463f6) mup_visualizer_spec_pane

0x7ee7,	// (0x0003fc89) call3_video_qcif_pane_ParamLimits

0x7ee7,	// (0x0003fc89) call3_video_qcif_pane

0x7ef9,	// (0x0003fc9b) call3_video_qcif_uncrop_pane_ParamLimits

0x7ef9,	// (0x0003fc9b) call3_video_qcif_uncrop_pane

0x7f09,	// (0x0003fcab) call3_video_subqcif_pane_ParamLimits

0x7f09,	// (0x0003fcab) call3_video_subqcif_pane

0x7f1d,	// (0x0003fcbf) call3_video_subqcif_uncrop_pane_ParamLimits

0x7f1d,	// (0x0003fcbf) call3_video_subqcif_uncrop_pane

0x7f77,	// (0x0003fd19) popup_call3_audio_in_window_g4_ParamLimits

0x7f77,	// (0x0003fd19) popup_call3_audio_in_window_g4

0xe654,	// (0x000463f6) mup_spec_half_pane

0xe654,	// (0x000463f6) mup_spec_half_pane_cp

0xe654,	// (0x000463f6) mup_osc_middle_pane

0x0240,	// (0x00037fe2) mup_visualizer_osc_pane_g1

0x20a5,	// (0x00039e47) mup_spec_bar_pane_ParamLimits

0x20a5,	// (0x00039e47) mup_spec_bar_pane

0x0240,	// (0x00037fe2) mup_spec_bar_pane_g1

0x0240,	// (0x00037fe2) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00046e51) mup_spec_bar_pane_g

0x549e,	// (0x0003d240) aid_cale_week_size_cell_pane_ParamLimits

0x54b8,	// (0x0003d25a) bg_cale_heading_pane_ParamLimits

0x54e1,	// (0x0003d283) bg_cale_pane_cp01_ParamLimits

0x5503,	// (0x0003d2a5) cale_week_corner_pane_ParamLimits

0x5522,	// (0x0003d2c4) cale_week_day_heading_pane_ParamLimits

0x5550,	// (0x0003d2f2) cale_week_scroll_pane_g1_ParamLimits

0x5574,	// (0x0003d316) cale_week_scroll_pane_g2_ParamLimits

0x558c,	// (0x0003d32e) cale_week_scroll_pane_g3_ParamLimits

0x55a4,	// (0x0003d346) cale_week_scroll_pane_g4_ParamLimits

0x55bc,	// (0x0003d35e) cale_week_scroll_pane_g5_ParamLimits

0x55d4,	// (0x0003d376) cale_week_scroll_pane_g6_ParamLimits

0x55f4,	// (0x0003d396) cale_week_scroll_pane_g7_ParamLimits

0x5614,	// (0x0003d3b6) cale_week_scroll_pane_g8_ParamLimits

0x5634,	// (0x0003d3d6) cale_week_scroll_pane_g9_ParamLimits

0x5651,	// (0x0003d3f3) cale_week_scroll_pane_g10_ParamLimits

0x566e,	// (0x0003d410) cale_week_scroll_pane_g11_ParamLimits

0x568d,	// (0x0003d42f) cale_week_scroll_pane_g12_ParamLimits

0x56b2,	// (0x0003d454) cale_week_scroll_pane_g13_ParamLimits

0x56db,	// (0x0003d47d) cale_week_scroll_pane_g14_ParamLimits

0x5704,	// (0x0003d4a6) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00046ec8) cale_week_scroll_pane_g_ParamLimits

0x574d,	// (0x0003d4ef) cale_week_time_pane_ParamLimits

0x576d,	// (0x0003d50f) grid_cale_week_pane_ParamLimits

0x03c9,	// (0x0003816b) listscroll_cale_week_pane_t1

0x03db,	// (0x0003817d) scroll_pane_cp08_ParamLimits

0x62a4,	// (0x0003e046) cale_month_corner_pane_ParamLimits

0x0758,	// (0x000384fa) cale_month_pane_t1

0x6766,	// (0x0003e508) cale_month_week_pane_ParamLimits

0x173e,	// (0x000394e0) popup_call_status_window_g1_ParamLimits

0x6ec1,	// (0x0003ec63) popup_call_status_window_g2_ParamLimits

0x6ecd,	// (0x0003ec6f) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x00047042) popup_call_status_window_g_ParamLimits

0x0b38,	// (0x000388da) aid_call2_pane

0x41af,	// (0x0003bf51) msg_header_pane_g1

0x7674,	// (0x0003f416) postcard_address2_pane_ParamLimits

0x7674,	// (0x0003f416) postcard_address2_pane

0x7682,	// (0x0003f424) postcard_message2_pane_ParamLimits

0x7682,	// (0x0003f424) postcard_message2_pane

0x7e78,	// (0x0003fc1a) message2_row_pane_ParamLimits

0x7e78,	// (0x0003fc1a) message2_row_pane

0x7e92,	// (0x0003fc34) address2_row_pane_ParamLimits

0x7e92,	// (0x0003fc34) address2_row_pane

0x2072,	// (0x00039e14) postcard_message2_row_pane_g1

0x207a,	// (0x00039e1c) postcard_message2_row_pane_t1

0x2072,	// (0x00039e14) address2_row_pane_g1

0x207a,	// (0x00039e1c) address2_row_pane_t1

0x5afb,	// (0x0003d89d) aid_size_cell_vorec

0xeef0,	// (0x00046c92) main_rss_pane

0x2088,	// (0x00039e2a) rss_list_single_pane_ParamLimits

0x2088,	// (0x00039e2a) rss_list_single_pane

0x2096,	// (0x00039e38) rss_list_single_pane_t1

0x2096,	// (0x00039e38) rss_list_single_pane_t2

0x0001,

0xf53b,	// (0x000472dd) rss_list_single_pane_t

0xeef0,	// (0x00046c92) main_camera2_pane

0xeef0,	// (0x00046c92) main_video2_pane

0x01f4,	// (0x00037f96) cams_zoom_pane_cp2_ParamLimits

0x01f4,	// (0x00037f96) cams_zoom_pane_cp2

0x01f4,	// (0x00037f96) image2_vga_pane_ParamLimits

0x01f4,	// (0x00037f96) image2_vga_pane

0x0210,	// (0x00037fb2) main_camera2_pane_g1_ParamLimits

0x0210,	// (0x00037fb2) main_camera2_pane_g1

0x0210,	// (0x00037fb2) main_camera2_pane_g2_ParamLimits

0x0210,	// (0x00037fb2) main_camera2_pane_g2

0x0210,	// (0x00037fb2) main_camera2_pane_g3_ParamLimits

0x0210,	// (0x00037fb2) main_camera2_pane_g3

0x0210,	// (0x00037fb2) main_camera2_pane_g4_ParamLimits

0x0210,	// (0x00037fb2) main_camera2_pane_g4

0x0210,	// (0x00037fb2) main_camera2_pane_g5_ParamLimits

0x0210,	// (0x00037fb2) main_camera2_pane_g5

0x0210,	// (0x00037fb2) main_camera2_pane_g6_ParamLimits

0x0210,	// (0x00037fb2) main_camera2_pane_g6

0x0210,	// (0x00037fb2) main_camera2_pane_g7_ParamLimits

0x0210,	// (0x00037fb2) main_camera2_pane_g7

0x0210,	// (0x00037fb2) main_camera2_pane_g8_ParamLimits

0x0210,	// (0x00037fb2) main_camera2_pane_g8

0x0008,

0xf557,	// (0x000472f9) main_camera2_pane_g_ParamLimits

0xf557,	// (0x000472f9) main_camera2_pane_g

0x025e,	// (0x00038000) main_camera2_pane_t1_ParamLimits

0x025e,	// (0x00038000) main_camera2_pane_t1

0x025e,	// (0x00038000) main_camera2_pane_t2_ParamLimits

0x025e,	// (0x00038000) main_camera2_pane_t2

0x025e,	// (0x00038000) main_camera2_pane_t3_ParamLimits

0x025e,	// (0x00038000) main_camera2_pane_t3

0x025e,	// (0x00038000) main_camera2_pane_t4_ParamLimits

0x025e,	// (0x00038000) main_camera2_pane_t4

0x0006,

0xf56a,	// (0x0004730c) main_camera2_pane_t_ParamLimits

0xf56a,	// (0x0004730c) main_camera2_pane_t

0x0e5b,	// (0x00038bfd) cams_zoom_pane_cp4_ParamLimits

0x0e5b,	// (0x00038bfd) cams_zoom_pane_cp4

0x019b,	// (0x00037f3d) image2_cif_pane_ParamLimits

0x019b,	// (0x00037f3d) image2_cif_pane

0x01f4,	// (0x00037f96) image2_subqcif_pane_ParamLimits

0x01f4,	// (0x00037f96) image2_subqcif_pane

0x0e39,	// (0x00038bdb) main_video2_pane_g1_ParamLimits

0x0e39,	// (0x00038bdb) main_video2_pane_g1

0x0e39,	// (0x00038bdb) main_video2_pane_g2_ParamLimits

0x0e39,	// (0x00038bdb) main_video2_pane_g2

0x0e39,	// (0x00038bdb) main_video2_pane_g3_ParamLimits

0x0e39,	// (0x00038bdb) main_video2_pane_g3

0x0e39,	// (0x00038bdb) main_video2_pane_g4_ParamLimits

0x0e39,	// (0x00038bdb) main_video2_pane_g4

0x0e39,	// (0x00038bdb) main_video2_pane_g5_ParamLimits

0x0e39,	// (0x00038bdb) main_video2_pane_g5

0x0e39,	// (0x00038bdb) main_video2_pane_g6_ParamLimits

0x0e39,	// (0x00038bdb) main_video2_pane_g6

0x0005,

0xf579,	// (0x0004731b) main_video2_pane_g_ParamLimits

0xf579,	// (0x0004731b) main_video2_pane_g

0x0e47,	// (0x00038be9) main_video2_pane_t1_ParamLimits

0x0e47,	// (0x00038be9) main_video2_pane_t1

0x0e47,	// (0x00038be9) main_video2_pane_t2_ParamLimits

0x0e47,	// (0x00038be9) main_video2_pane_t2

0x0e47,	// (0x00038be9) main_video2_pane_t3_ParamLimits

0x0e47,	// (0x00038be9) main_video2_pane_t3

0x0002,

0xf586,	// (0x00047328) main_video2_pane_t_ParamLimits

0xf586,	// (0x00047328) main_video2_pane_t

0x7b79,	// (0x0003f91b) call_muted_g2

0x0001,

0xf52d,	// (0x000472cf) call_muted_g

0xeef0,	// (0x00046c92) main_mup2_pane

0x021e,	// (0x00037fc0) main_mup2_pane_g1_ParamLimits

0x021e,	// (0x00037fc0) main_mup2_pane_g1

0x021e,	// (0x00037fc0) main_mup2_pane_g2_ParamLimits

0x021e,	// (0x00037fc0) main_mup2_pane_g2

0x0240,	// (0x00037fe2) main_mup_pane_g13_cp1

0xe654,	// (0x000463f6) mup_volume_pane_cp1

0x021e,	// (0x00037fc0) main_mup2_pane_g4_ParamLimits

0x021e,	// (0x00037fc0) main_mup2_pane_g4

0x021e,	// (0x00037fc0) main_mup2_pane_g5_ParamLimits

0x021e,	// (0x00037fc0) main_mup2_pane_g5

0x021e,	// (0x00037fc0) main_mup2_pane_g6_ParamLimits

0x021e,	// (0x00037fc0) main_mup2_pane_g6

0x021e,	// (0x00037fc0) main_mup2_pane_g7_ParamLimits

0x021e,	// (0x00037fc0) main_mup2_pane_g7

0x0006,

0xf58d,	// (0x0004732f) main_mup2_pane_g_ParamLimits

0xf58d,	// (0x0004732f) main_mup2_pane_g

0x022c,	// (0x00037fce) main_mup2_pane_t1_ParamLimits

0x022c,	// (0x00037fce) main_mup2_pane_t1

0x022c,	// (0x00037fce) main_mup2_pane_t2_ParamLimits

0x022c,	// (0x00037fce) main_mup2_pane_t2

0x022c,	// (0x00037fce) main_mup2_pane_t3_ParamLimits

0x022c,	// (0x00037fce) main_mup2_pane_t3

0x022c,	// (0x00037fce) main_mup2_pane_t4_ParamLimits

0x022c,	// (0x00037fce) main_mup2_pane_t4

0x022c,	// (0x00037fce) main_mup2_pane_t5_ParamLimits

0x022c,	// (0x00037fce) main_mup2_pane_t5

0x022c,	// (0x00037fce) main_mup2_pane_t6_ParamLimits

0x022c,	// (0x00037fce) main_mup2_pane_t6

0x0005,

0xf59c,	// (0x0004733e) main_mup2_pane_t_ParamLimits

0xf59c,	// (0x0004733e) main_mup2_pane_t

0x2265,	// (0x0003a007) mup2_visualizer_pane_ParamLimits

0x2265,	// (0x0003a007) mup2_visualizer_pane

0x2265,	// (0x0003a007) mup_progress_pane_cp_ParamLimits

0x2265,	// (0x0003a007) mup_progress_pane_cp

0x2126,	// (0x00039ec8) mup_volume_pane_cp_ParamLimits

0x2126,	// (0x00039ec8) mup_volume_pane_cp

0x0202,	// (0x00037fa4) mup2_visualizer_pane_g1_ParamLimits

0x0202,	// (0x00037fa4) mup2_visualizer_pane_g1

0x0210,	// (0x00037fb2) mup2_visualizer_pane_g2_ParamLimits

0x0210,	// (0x00037fb2) mup2_visualizer_pane_g2

0x0210,	// (0x00037fb2) mup2_visualizer_pane_g3_ParamLimits

0x0210,	// (0x00037fb2) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00046e41) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00046e41) mup2_visualizer_pane_g

0xe654,	// (0x000463f6) aid_size_cell_fmradio

0x7c8f,	// (0x0003fa31) aid_height_parent_landcape

0x05b6,	// (0x00038358) wml_content_pane_cp

0x05be,	// (0x00038360) wml_tabs_pane

0x05c7,	// (0x00038369) popup_wml_miniature_window

0x05cf,	// (0x00038371) scroll_pane_cp021

0x05e3,	// (0x00038385) wml_content_pane_comp8

0xeef0,	// (0x00046c92) bg_popup_sub_pane_cp05

0x213c,	// (0x00039ede) popup_wml_miniature_window_g1

0x2144,	// (0x00039ee6) wml_miniature_view_pane

0x8006,	// (0x0003fda8) aid_size_wml_view

0x800e,	// (0x0003fdb0) wml_miniature_view_pane_g1

0x8017,	// (0x0003fdb9) wml_miniature_view_pane_g2

0x8020,	// (0x0003fdc2) wml_miniature_view_pane_g3

0x8028,	// (0x0003fdca) wml_miniature_view_pane_g4

0x8030,	// (0x0003fdd2) wml_miniature_view_pane_g5

0x8038,	// (0x0003fdda) wml_miniature_view_pane_g6

0x8040,	// (0x0003fde2) wml_miniature_view_pane_g7

0x8048,	// (0x0003fdea) wml_miniature_view_pane_g8

0x0007,

0xf5a9,	// (0x0004734b) wml_miniature_view_pane_g

0x214c,	// (0x00039eee) background_graphic_ParamLimits

0x214c,	// (0x00039eee) background_graphic

0x2158,	// (0x00039efa) wml_tabs_2_pane

0x2161,	// (0x00039f03) wml_tabs_3_pane_ParamLimits

0x2161,	// (0x00039f03) wml_tabs_3_pane

0x2173,	// (0x00039f15) wml_tabs_4_pane_ParamLimits

0x2173,	// (0x00039f15) wml_tabs_4_pane

0x2189,	// (0x00039f2b) wml_tabs_5_pane_ParamLimits

0x2189,	// (0x00039f2b) wml_tabs_5_pane

0x21a3,	// (0x00039f45) wml_tabs_pane_g2_ParamLimits

0x21a3,	// (0x00039f45) wml_tabs_pane_g2

0x21b8,	// (0x00039f5a) wml_tabs_pane_g3_ParamLimits

0x21b8,	// (0x00039f5a) wml_tabs_pane_g3

0x21cd,	// (0x00039f6f) wml_tabs_2_active_pane_ParamLimits

0x21cd,	// (0x00039f6f) wml_tabs_2_active_pane

0x21cd,	// (0x00039f6f) wml_tabs_2_passive_pane_ParamLimits

0x21cd,	// (0x00039f6f) wml_tabs_2_passive_pane

0x8050,	// (0x0003fdf2) wml_tabs_3_active_pane_cp_ParamLimits

0x8050,	// (0x0003fdf2) wml_tabs_3_active_pane_cp

0x8063,	// (0x0003fe05) wml_tabs_3_passive_pane_ParamLimits

0x8063,	// (0x0003fe05) wml_tabs_3_passive_pane

0x8074,	// (0x0003fe16) wml_tabs_3_passive_pane_cp_ParamLimits

0x8074,	// (0x0003fe16) wml_tabs_3_passive_pane_cp

0x8089,	// (0x0003fe2b) tabs_4_active_pane

0x8091,	// (0x0003fe33) tabs_4_passive_pane

0x8099,	// (0x0003fe3b) tabs_4_passive_pane_cp

0x80a1,	// (0x0003fe43) tabs_4_passive_pane_cp2

0x7aed,	// (0x0003f88f) aid_height_text

0x2265,	// (0x0003a007) mup_volume_cont_pane_ParamLimits

0x2265,	// (0x0003a007) mup_volume_cont_pane

0xe654,	// (0x000463f6) aid_size_cell_pinb

0xe654,	// (0x000463f6) aid_size_list_pinb

0x2265,	// (0x0003a007) mup2_volume_cont_pane_ParamLimits

0x2265,	// (0x0003a007) mup2_volume_cont_pane

0x80ab,	// (0x0003fe4d) mup2_volume_cont_pane_g1_ParamLimits

0x80ab,	// (0x0003fe4d) mup2_volume_cont_pane_g1

0x4f25,	// (0x0003ccc7) aid_size_cell_touch_ParamLimits

0x4f25,	// (0x0003ccc7) aid_size_cell_touch

0x5136,	// (0x0003ced8) touch_pane_ParamLimits

0x5136,	// (0x0003ced8) touch_pane

0xe654,	// (0x000463f6) main_rss2_pane

0x21e4,	// (0x00039f86) listscroll_rss2_pane

0x21ed,	// (0x00039f8f) rss2_navigation_pane

0x21f5,	// (0x00039f97) list_rss2_pane

0x0c48,	// (0x000389ea) scroll_pane_cp22

0x21fd,	// (0x00039f9f) rss2_navigation_pane_g1

0x2206,	// (0x00039fa8) rss2_navigation_pane_g2

0x220e,	// (0x00039fb0) rss2_navigation_pane_g3

0x0002,

0xf5ba,	// (0x0004735c) rss2_navigation_pane_g

0x2216,	// (0x00039fb8) rss2_navigation_pane_t1

0x80c1,	// (0x0003fe63) rss2_list_single_pane_ParamLimits

0x80c1,	// (0x0003fe63) rss2_list_single_pane

0x2224,	// (0x00039fc6) rss2_list_single_pane_t2

0x2232,	// (0x00039fd4) rss2_list_single_pane_t3_ParamLimits

0x2232,	// (0x00039fd4) rss2_list_single_pane_t3

0x224f,	// (0x00039ff1) rss2_list_single_pane_t4

0x6d74,	// (0x0003eb16) smil_status_pane_g1

0x019b,	// (0x00037f3d) main_image2_pane_ParamLimits

0x019b,	// (0x00037f3d) main_image2_pane

0x0210,	// (0x00037fb2) main_camera2_pane_g9_ParamLimits

0x0210,	// (0x00037fb2) main_camera2_pane_g9

0x025e,	// (0x00038000) main_camera2_pane_t5_ParamLimits

0x025e,	// (0x00038000) main_camera2_pane_t5

0x29c8,	// (0x0003a76a) main_camera2_pane_t6_ParamLimits

0x29c8,	// (0x0003a76a) main_camera2_pane_t6

0x80e4,	// (0x0003fe86) main_image2_pane_g1_ParamLimits

0x80e4,	// (0x0003fe86) main_image2_pane_g1

0x7822,	// (0x0003f5c4) smil2_video_pane_ParamLimits

0x7822,	// (0x0003f5c4) smil2_video_pane

0x4089,	// (0x0003be2b) aid_zoom_text_primary_cp

0x50df,	// (0x0003ce81) popup_preview_fixed_window

0x0510,	// (0x000382b2) im_reading_pane_g1

0x7ff8,	// (0x0003fd9a) cams2_bc_adjust_pane_cp_ParamLimits

0x7ff8,	// (0x0003fd9a) cams2_bc_adjust_pane_cp

0x01f4,	// (0x00037f96) cams2_bc_adjust_pane_ParamLimits

0x01f4,	// (0x00037f96) cams2_bc_adjust_pane

0x0240,	// (0x00037fe2) cams2_bc_adjust_pane_g1

0xe654,	// (0x000463f6) cams2_slider_pane

0x0240,	// (0x00037fe2) cams2_slider_pane_g1

0x0240,	// (0x00037fe2) cams2_slider_pane_g2

0x0006,

0xf5c1,	// (0x00047363) cams2_slider_pane_g

0x51cb,	// (0x0003cf6d) calc_display_pane_ParamLimits

0x51e9,	// (0x0003cf8b) calc_paper_pane_ParamLimits

0x5205,	// (0x0003cfa7) grid_calc_pane_ParamLimits

0x6f2b,	// (0x0003eccd) popup_clock_digital_window_t1_ParamLimits

0x1013,	// (0x00038db5) main_image_pane_t1

0x51b1,	// (0x0003cf53) aid_size_cell_calc_ParamLimits

0x51b1,	// (0x0003cf53) aid_size_cell_calc

0x7cc9,	// (0x0003fa6b) popup_blid_sat_info2_window_ParamLimits

0x7cc9,	// (0x0003fa6b) popup_blid_sat_info2_window

0x225d,	// (0x00039fff) aid_size_cell_blid

0x2265,	// (0x0003a007) bg_popup_window_pane_cp07

0x2288,	// (0x0003a02a) grid_popup_blid_pane

0x2292,	// (0x0003a034) heading_pane_cp05_ParamLimits

0x2292,	// (0x0003a034) heading_pane_cp05

0x235c,	// (0x0003a0fe) cell_popup_blid_pane_ParamLimits

0x235c,	// (0x0003a0fe) cell_popup_blid_pane

0x2386,	// (0x0003a128) cell_popup_blid_pane_g1

0x238e,	// (0x0003a130) cell_popup_blid_pane_t1

0x2265,	// (0x0003a007) mup2_indicator_pane_ParamLimits

0x2265,	// (0x0003a007) mup2_indicator_pane

0xe654,	// (0x000463f6) mup2_visualizer_osc_pane

0x2126,	// (0x00039ec8) mup2_visualizer_spec_pane_ParamLimits

0x2126,	// (0x00039ec8) mup2_visualizer_spec_pane

0xe654,	// (0x000463f6) mup2_spec_half_pane

0xe654,	// (0x000463f6) mup2_spec_half_pane_cp

0x239c,	// (0x0003a13e) mup2_spec_bar_pane_ParamLimits

0x239c,	// (0x0003a13e) mup2_spec_bar_pane

0x0240,	// (0x00037fe2) mup2_spec_bar_pane_g1

0x23bb,	// (0x0003a15d) mup2_spec_bar_pane_g2

0x0001,

0xf5e7,	// (0x00047389) mup2_spec_bar_pane_g

0xe654,	// (0x000463f6) mup2_osc_middle_pane

0x0240,	// (0x00037fe2) mup2_visualizer_osc_pane_g1

0xe67e,	// (0x00046420) popup_number_entry_window_t1_ParamLimits

0xe691,	// (0x00046433) popup_number_entry_window_t2_ParamLimits

0xe6a3,	// (0x00046445) popup_number_entry_window_t3_ParamLimits

0xe6b5,	// (0x00046457) popup_number_entry_window_t5_ParamLimits

0xe6b5,	// (0x00046457) popup_number_entry_window_t5

0xf040,	// (0x00046de2) popup_number_entry_window_t_ParamLimits

0xe6ea,	// (0x0004648c) text_title_cp2_ParamLimits

0x7538,	// (0x0003f2da) aid_hotspot_pointer_text2_pane

0x75d2,	// (0x0003f374) main_viewer_pane_g9_ParamLimits

0x75d2,	// (0x0003f374) main_viewer_pane_g9

0x0758,	// (0x000384fa) cale_month_pane_t1_ParamLimits

0x0795,	// (0x00038537) bg_cale_pane_ParamLimits

0x07ad,	// (0x0003854f) list_cale_pane_ParamLimits

0x07be,	// (0x00038560) listscroll_cale_day_pane_t1

0x07d0,	// (0x00038572) scroll_pane_cp09_ParamLimits

0x72db,	// (0x0003f07d) main_mup_eq_pane_t1_ParamLimits

0x72db,	// (0x0003f07d) main_mup_eq_pane_t1

0x72f7,	// (0x0003f099) main_mup_eq_pane_t2_ParamLimits

0x72f7,	// (0x0003f099) main_mup_eq_pane_t2

0x7313,	// (0x0003f0b5) main_mup_eq_pane_t3_ParamLimits

0x7313,	// (0x0003f0b5) main_mup_eq_pane_t3

0x732d,	// (0x0003f0cf) main_mup_eq_pane_t4_ParamLimits

0x732d,	// (0x0003f0cf) main_mup_eq_pane_t4

0x7347,	// (0x0003f0e9) main_mup_eq_pane_t5_ParamLimits

0x7347,	// (0x0003f0e9) main_mup_eq_pane_t5

0x7361,	// (0x0003f103) main_mup_eq_pane_t6_ParamLimits

0x7361,	// (0x0003f103) main_mup_eq_pane_t6

0x7377,	// (0x0003f119) main_mup_eq_pane_t7_ParamLimits

0x7377,	// (0x0003f119) main_mup_eq_pane_t7

0x738d,	// (0x0003f12f) main_mup_eq_pane_t8_ParamLimits

0x738d,	// (0x0003f12f) main_mup_eq_pane_t8

0x73a3,	// (0x0003f145) main_mup_eq_pane_t9_ParamLimits

0x73a3,	// (0x0003f145) main_mup_eq_pane_t9

0x73bf,	// (0x0003f161) main_mup_eq_pane_t10_ParamLimits

0x73bf,	// (0x0003f161) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x0004713c) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x0004713c) main_mup_eq_pane_t

0x7484,	// (0x0003f226) mup_equalizer_pane_cp5_ParamLimits

0x749c,	// (0x0003f23e) mup_equalizer_pane_cp6_ParamLimits

0x74b4,	// (0x0003f256) mup_equalizer_pane_cp7_ParamLimits

0xe654,	// (0x000463f6) main_gallery_pane

0x20c4,	// (0x00039e66) smil2_volume_pane

0x20df,	// (0x00039e81) smil_status_volume_pane_g1_ParamLimits

0x20cc,	// (0x00039e6e) smil_status_volume_pane_g2_ParamLimits

0x7ea5,	// (0x0003fc47) smil_status_volume_pane_g3_ParamLimits

0xf540,	// (0x000472e2) smil_status_volume_pane_g_ParamLimits

0x2265,	// (0x0003a007) bg_popup_window_pane_cp07_ParamLimits

0x2273,	// (0x0003a015) blid_firmament_pane

0x01f4,	// (0x00037f96) aid_size_cell_gallery_ParamLimits

0x01f4,	// (0x00037f96) aid_size_cell_gallery

0x01f4,	// (0x00037f96) grid_gallery_pane_ParamLimits

0x01f4,	// (0x00037f96) grid_gallery_pane

0x0e5b,	// (0x00038bfd) cell_gallery_pane_ParamLimits

0x0e5b,	// (0x00038bfd) cell_gallery_pane

0x019b,	// (0x00037f3d) bg_cell_gallery_focus_pane_ParamLimits

0x019b,	// (0x00037f3d) bg_cell_gallery_focus_pane

0x0202,	// (0x00037fa4) cell_gallery_pane_g1_ParamLimits

0x0202,	// (0x00037fa4) cell_gallery_pane_g1

0x0202,	// (0x00037fa4) cell_gallery_pane_g2_ParamLimits

0x0202,	// (0x00037fa4) cell_gallery_pane_g2

0x0202,	// (0x00037fa4) cell_gallery_pane_g3_ParamLimits

0x0202,	// (0x00037fa4) cell_gallery_pane_g3

0x0210,	// (0x00037fb2) cell_gallery_pane_g4_ParamLimits

0x0210,	// (0x00037fb2) cell_gallery_pane_g4

0x0003,

0xf5ec,	// (0x0004738e) cell_gallery_pane_g_ParamLimits

0xf5ec,	// (0x0004738e) cell_gallery_pane_g

0x23c5,	// (0x0003a167) bg_cell_gallery_focus_pane_g1

0x23cd,	// (0x0003a16f) bg_cell_gallery_focus_pane_g2

0x23d5,	// (0x0003a177) bg_cell_gallery_focus_pane_g3

0x23dd,	// (0x0003a17f) bg_cell_gallery_focus_pane_g4

0x23e5,	// (0x0003a187) bg_cell_gallery_focus_pane_g5

0x23ed,	// (0x0003a18f) bg_cell_gallery_focus_pane_g6

0x23f5,	// (0x0003a197) bg_cell_gallery_focus_pane_g7

0x23fd,	// (0x0003a19f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5f5,	// (0x00047397) bg_cell_gallery_focus_pane_g

0x2405,	// (0x0003a1a7) aid_firma_cardinal

0x2419,	// (0x0003a1bb) blid_firmament_pane_t1

0x2430,	// (0x0003a1d2) blid_firmament_pane_t2

0x2447,	// (0x0003a1e9) blid_firmament_pane_t3

0x245e,	// (0x0003a200) blid_firmament_pane_t4

0x0003,

0xf606,	// (0x000473a8) blid_firmament_pane_t

0x2475,	// (0x0003a217) blid_sat_info_pane

0x0240,	// (0x00037fe2) blid_sat_info_pane_g1

0x0240,	// (0x00037fe2) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00046e51) blid_sat_info_pane_g

0x2485,	// (0x0003a227) blid_sat_info_pane_t1

0x2493,	// (0x0003a235) smil2_volume_content_pane

0x249c,	// (0x0003a23e) smil2_volume_pane_g1

0x0315,	// (0x000380b7) smil2_volume_content_pane_g1

0x24a4,	// (0x0003a246) smil2_volume_content_pane_g2

0x24ad,	// (0x0003a24f) smil2_volume_content_pane_g3

0x24b6,	// (0x0003a258) smil2_volume_content_pane_g4

0x24bf,	// (0x0003a261) smil2_volume_content_pane_g5

0x24c8,	// (0x0003a26a) smil2_volume_content_pane_g6

0x24d1,	// (0x0003a273) smil2_volume_content_pane_g7

0x24da,	// (0x0003a27c) smil2_volume_content_pane_g8

0x24e3,	// (0x0003a285) smil2_volume_content_pane_g9

0x24ec,	// (0x0003a28e) smil2_volume_content_pane_g10

0x0009,

0xf60f,	// (0x000473b1) smil2_volume_content_pane_g

0x582e,	// (0x0003d5d0) cale_week_day_heading_pane_t1_ParamLimits

0x5856,	// (0x0003d5f8) cale_week_day_heading_pane_t2_ParamLimits

0x5883,	// (0x0003d625) cale_week_day_heading_pane_t3_ParamLimits

0x58b0,	// (0x0003d652) cale_week_day_heading_pane_t4_ParamLimits

0x58dd,	// (0x0003d67f) cale_week_day_heading_pane_t5_ParamLimits

0x590a,	// (0x0003d6ac) cale_week_day_heading_pane_t6_ParamLimits

0x5937,	// (0x0003d6d9) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x00046ee9) cale_week_day_heading_pane_t_ParamLimits

0x03f8,	// (0x0003819a) bg_cale_side_pane_ParamLimits

0x595f,	// (0x0003d701) cale_week_time_pane_t1_ParamLimits

0x5983,	// (0x0003d725) cale_week_time_pane_t2_ParamLimits

0x59a7,	// (0x0003d749) cale_week_time_pane_t3_ParamLimits

0x59cb,	// (0x0003d76d) cale_week_time_pane_t4_ParamLimits

0x59ef,	// (0x0003d791) cale_week_time_pane_t5_ParamLimits

0x5a15,	// (0x0003d7b7) cale_week_time_pane_t6_ParamLimits

0x5a3d,	// (0x0003d7df) cale_week_time_pane_t7_ParamLimits

0x5a69,	// (0x0003d80b) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00046ef8) cale_week_time_pane_t_ParamLimits

0x5a99,	// (0x0003d83b) cell_cale_week_pane_g2_ParamLimits

0x03f8,	// (0x0003819a) bg_cale_side_pane_cp01_ParamLimits

0x6b5f,	// (0x0003e901) cale_month_week_pane_t1_ParamLimits

0x6b78,	// (0x0003e91a) cale_month_week_pane_t2_ParamLimits

0x6b91,	// (0x0003e933) cale_month_week_pane_t3_ParamLimits

0x6baa,	// (0x0003e94c) cale_month_week_pane_t4_ParamLimits

0x6bc3,	// (0x0003e965) cale_month_week_pane_t5_ParamLimits

0x6be0,	// (0x0003e982) cale_month_week_pane_t6_ParamLimits

0xf21f,	// (0x00046fc1) cale_month_week_pane_t_ParamLimits

0x6d31,	// (0x0003ead3) cell_cale_month_pane_g1_ParamLimits

0xe654,	// (0x000463f6) main_cale_event_viewer_pane

0xe654,	// (0x000463f6) listscroll_cale_event_viewer_pane

0x24f5,	// (0x0003a297) list_cale_ev_pane

0x24fd,	// (0x0003a29f) scroll_pane_cp023

0x80f0,	// (0x0003fe92) field_cale_ev_pane_ParamLimits

0x80f0,	// (0x0003fe92) field_cale_ev_pane

0x2509,	// (0x0003a2ab) field_cale_ev_content_pane_ParamLimits

0x2509,	// (0x0003a2ab) field_cale_ev_content_pane

0x2515,	// (0x0003a2b7) field_cale_ev_pane_g1_ParamLimits

0x2515,	// (0x0003a2b7) field_cale_ev_pane_g1

0x2521,	// (0x0003a2c3) field_cale_ev_pane_g2_ParamLimits

0x2521,	// (0x0003a2c3) field_cale_ev_pane_g2

0x2539,	// (0x0003a2db) field_cale_ev_pane_g3_ParamLimits

0x2539,	// (0x0003a2db) field_cale_ev_pane_g3

0x0002,

0xf624,	// (0x000473c6) field_cale_ev_pane_g_ParamLimits

0xf624,	// (0x000473c6) field_cale_ev_pane_g

0x2551,	// (0x0003a2f3) field_cale_ev_pane_t1_ParamLimits

0x2551,	// (0x0003a2f3) field_cale_ev_pane_t1

0x8114,	// (0x0003feb6) field_cale_ev_content_pane_t1_ParamLimits

0x8114,	// (0x0003feb6) field_cale_ev_content_pane_t1

0x0f00,	// (0x00038ca2) bg_button_pane_cp01

0x548c,	// (0x0003d22e) listscroll_cale_week_pane_ParamLimits

0x03c0,	// (0x00038162) popup_toolbar_window_cp01

0x03c9,	// (0x0003816b) listscroll_cale_week_pane_t1_ParamLimits

0x548c,	// (0x0003d22e) listscroll_cale_day_pane_ParamLimits

0x03c0,	// (0x00038162) popup_toolbar_window_cp02

0x07be,	// (0x00038560) listscroll_cale_day_pane_t1_ParamLimits

0x548c,	// (0x0003d22e) main_cale_month_pane_ParamLimits

0x7de8,	// (0x0003fb8a) popup_toolbar_window_cp03_ParamLimits

0x7de8,	// (0x0003fb8a) popup_toolbar_window_cp03

0x7732,	// (0x0003f4d4) main_image_pane_g2_ParamLimits

0x7732,	// (0x0003f4d4) main_image_pane_g2

0x773e,	// (0x0003f4e0) main_image_pane_g3_ParamLimits

0x773e,	// (0x0003f4e0) main_image_pane_g3

0x0002,

0xf42c,	// (0x000471ce) main_image_pane_g_ParamLimits

0xf42c,	// (0x000471ce) main_image_pane_g

0x1013,	// (0x00038db5) main_image_pane_t1_ParamLimits

0x774a,	// (0x0003f4ec) main_image_pane_t2_ParamLimits

0x774a,	// (0x0003f4ec) main_image_pane_t2

0x775c,	// (0x0003f4fe) main_image_pane_t3_ParamLimits

0x775c,	// (0x0003f4fe) main_image_pane_t3

0x776e,	// (0x0003f510) main_image_pane_t4_ParamLimits

0x776e,	// (0x0003f510) main_image_pane_t4

0x0003,

0xf433,	// (0x000471d5) main_image_pane_t_ParamLimits

0xf433,	// (0x000471d5) main_image_pane_t

0x7780,	// (0x0003f522) popup_image_details_window_cp01

0x778a,	// (0x0003f52c) popup_toobar_trans_pane_cp01_ParamLimits

0x778a,	// (0x0003f52c) popup_toobar_trans_pane_cp01

0x7d2a,	// (0x0003facc) popup_image_details_window_ParamLimits

0x7d2a,	// (0x0003facc) popup_image_details_window

0x7d38,	// (0x0003fada) popup_image_focus_window

0x01f4,	// (0x00037f96) camera2_autofocus_pane_ParamLimits

0x01f4,	// (0x00037f96) camera2_autofocus_pane

0xe654,	// (0x000463f6) bg_popup_sub_pane_cp06

0x2568,	// (0x0003a30a) popup_image_focus_window_g1

0x2570,	// (0x0003a312) popup_image_focus_window_g2

0x2578,	// (0x0003a31a) popup_image_focus_window_g3

0x2580,	// (0x0003a322) popup_image_focus_window_g4

0x0003,

0xf62b,	// (0x000473cd) popup_image_focus_window_g

0x2588,	// (0x0003a32a) popup_image_focus_window_t1

0x2596,	// (0x0003a338) popup_image_focus_window_t2

0x25a6,	// (0x0003a348) popup_image_focus_window_t3

0x0002,

0xf634,	// (0x000473d6) popup_image_focus_window_t

0x0202,	// (0x00037fa4) camera2_autofocus_pane_g1

0x019b,	// (0x00037f3d) bg_tb_trans_pane_cp01

0x25b4,	// (0x0003a356) popup_image_details_window_g1

0x25c7,	// (0x0003a369) popup_image_details_window_g2

0x0002,

0xf646,	// (0x000473e8) popup_image_details_window_g

0x25f0,	// (0x0003a392) popup_image_details_window_t1

0x2602,	// (0x0003a3a4) popup_image_details_window_t2

0x261b,	// (0x0003a3bd) popup_image_details_window_t3

0x262f,	// (0x0003a3d1) popup_image_details_window_t4

0x264a,	// (0x0003a3ec) popup_image_details_window_t5

0x0004,

0xf64d,	// (0x000473ef) popup_image_details_window_t

0x028a,	// (0x0003802c) bg_calc_paper_pane_ParamLimits

0xe654,	// (0x000463f6) grid_highlight_pane_cp013

0x5240,	// (0x0003cfe2) list_calc_pane_ParamLimits

0x5252,	// (0x0003cff4) scroll_pane_cp024

0x029e,	// (0x00038040) bg_calc_display_pane_ParamLimits

0x525a,	// (0x0003cffc) calc_display_pane_t1_ParamLimits

0x526f,	// (0x0003d011) calc_display_pane_t2_ParamLimits

0x5284,	// (0x0003d026) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x00046e69) calc_display_pane_t_ParamLimits

0x5354,	// (0x0003d0f6) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x00046e86) cell_calc_pane_g

0x535d,	// (0x0003d0ff) cell_calc_pane_t1

0x02f3,	// (0x00038095) grid_highlight_pane_cp02_ParamLimits

0x0309,	// (0x000380ab) toolbar_button_pane_cp01_ParamLimits

0x0309,	// (0x000380ab) toolbar_button_pane_cp01

0x1058,	// (0x00038dfa) temp_image_control_pane_ParamLimits

0x1058,	// (0x00038dfa) temp_image_control_pane

0x019b,	// (0x00037f3d) main_mp3_pane

0x2664,	// (0x0003a406) temp_image_control_pane_g1_ParamLimits

0x2664,	// (0x0003a406) temp_image_control_pane_g1

0x2672,	// (0x0003a414) temp_image_control_pane_g2_ParamLimits

0x2672,	// (0x0003a414) temp_image_control_pane_g2

0x2684,	// (0x0003a426) temp_image_control_pane_g3_ParamLimits

0x2684,	// (0x0003a426) temp_image_control_pane_g3

0x812f,	// (0x0003fed1) temp_image_control_pane_g4_ParamLimits

0x812f,	// (0x0003fed1) temp_image_control_pane_g4

0x0003,

0xf658,	// (0x000473fa) temp_image_control_pane_g_ParamLimits

0xf658,	// (0x000473fa) temp_image_control_pane_g

0x2664,	// (0x0003a406) main_mp3_pane_g1

0x8140,	// (0x0003fee2) main_mp3_pane_g2

0x0007,

0xf661,	// (0x00047403) main_mp3_pane_g

0x26b9,	// (0x0003a45b) main_mp3_pane_t1

0x0210,	// (0x00037fb2) main_camera_pane_g8_ParamLimits

0x0210,	// (0x00037fb2) main_camera_pane_g8

0x5c45,	// (0x0003d9e7) main_video_pane_g7_ParamLimits

0x5c45,	// (0x0003d9e7) main_video_pane_g7

0x025e,	// (0x00038000) main_camera2_pane_t7_ParamLimits

0x025e,	// (0x00038000) main_camera2_pane_t7

0x0576,	// (0x00038318) scroll_pane_cp025_ParamLimits

0x0576,	// (0x00038318) scroll_pane_cp025

0x058a,	// (0x0003832c) scroll_pane_cp026_ParamLimits

0x058a,	// (0x0003832c) scroll_pane_cp026

0x0599,	// (0x0003833b) wml_content_pane_ParamLimits

0xe654,	// (0x000463f6) main_touch_calib_pane

0x81e4,	// (0x0003ff86) main_touch_calib_pane_g1

0x81f0,	// (0x0003ff92) main_touch_calib_pane_g2

0x81fc,	// (0x0003ff9e) main_touch_calib_pane_g3

0x8208,	// (0x0003ffaa) main_touch_calib_pane_g4

0x0003,

0xf67f,	// (0x00047421) main_touch_calib_pane_g

0x8214,	// (0x0003ffb6) main_touch_calib_pane_t1

0x822b,	// (0x0003ffcd) main_touch_calib_pane_t2

0x0004,

0xf688,	// (0x0004742a) main_touch_calib_pane_t

0x0cc3,	// (0x00038a65) mup_progress_pane_cp02

0x0ce2,	// (0x00038a84) navi_pane_g1

0x0d44,	// (0x00038ae6) navi_pane_mp_t3

0x019b,	// (0x00037f3d) main_mp3_pane_ParamLimits

0x7e29,	// (0x0003fbcb) navi_pane_ParamLimits

0x2664,	// (0x0003a406) main_mp3_pane_g1_ParamLimits

0x8140,	// (0x0003fee2) main_mp3_pane_g2_ParamLimits

0x814c,	// (0x0003feee) main_mp3_pane_g3_ParamLimits

0x814c,	// (0x0003feee) main_mp3_pane_g3

0x8158,	// (0x0003fefa) main_mp3_pane_g4_ParamLimits

0x8158,	// (0x0003fefa) main_mp3_pane_g4

0x0202,	// (0x00037fa4) main_mp3_pane_g5_ParamLimits

0x0202,	// (0x00037fa4) main_mp3_pane_g5

0x2694,	// (0x0003a436) main_mp3_pane_g6_ParamLimits

0x2694,	// (0x0003a436) main_mp3_pane_g6

0x26a1,	// (0x0003a443) main_mp3_pane_g7_ParamLimits

0x26a1,	// (0x0003a443) main_mp3_pane_g7

0x26ad,	// (0x0003a44f) main_mp3_pane_g8_ParamLimits

0x26ad,	// (0x0003a44f) main_mp3_pane_g8

0xf661,	// (0x00047403) main_mp3_pane_g_ParamLimits

0x8164,	// (0x0003ff06) main_mp3_pane_t2

0x8174,	// (0x0003ff16) main_mp3_pane_t3

0x26c7,	// (0x0003a469) main_mp3_pane_t4

0x26d5,	// (0x0003a477) main_mp3_pane_t5

0x0005,

0xf672,	// (0x00047414) main_mp3_pane_t

0x26e3,	// (0x0003a485) mup_progress_pane_cp01

0x4089,	// (0x0003be2b) aid_zoom_text_secondary2

0x24f5,	// (0x0003a297) list_cale_ev2_pane

0x24fd,	// (0x0003a29f) scroll_pane_cp023_ParamLimits

0x8286,	// (0x00040028) field_cale_ev2_pane_ParamLimits

0x8286,	// (0x00040028) field_cale_ev2_pane

0x424e,	// (0x0003bff0) field_cale_ev2_pane_g1_ParamLimits

0x424e,	// (0x0003bff0) field_cale_ev2_pane_g1

0x425a,	// (0x0003bffc) field_cale_ev2_pane_g2_ParamLimits

0x425a,	// (0x0003bffc) field_cale_ev2_pane_g2

0x4272,	// (0x0003c014) field_cale_ev2_pane_g3_ParamLimits

0x4272,	// (0x0003c014) field_cale_ev2_pane_g3

0x0003,

0xf693,	// (0x00047435) field_cale_ev2_pane_g_ParamLimits

0xf693,	// (0x00047435) field_cale_ev2_pane_g

0x4296,	// (0x0003c038) field_cale_ev2_pane_t1_ParamLimits

0x4296,	// (0x0003c038) field_cale_ev2_pane_t1

0x42ad,	// (0x0003c04f) field_cale_ev2_pane_t2_ParamLimits

0x42ad,	// (0x0003c04f) field_cale_ev2_pane_t2

0x0001,

0xf69c,	// (0x0004743e) field_cale_ev2_pane_t_ParamLimits

0xf69c,	// (0x0004743e) field_cale_ev2_pane_t

0x763a,	// (0x0003f3dc) main_postcard_pane_g5_ParamLimits

0x763a,	// (0x0003f3dc) main_postcard_pane_g5

0x7648,	// (0x0003f3ea) main_postcard_pane_g6_ParamLimits

0x7648,	// (0x0003f3ea) main_postcard_pane_g6

0x01f4,	// (0x00037f96) camera2_autofocus_pane_cp_ParamLimits

0x01f4,	// (0x00037f96) camera2_autofocus_pane_cp

0x019b,	// (0x00037f3d) main_mup3_pane

0x82e4,	// (0x00040086) main_mup3_pane_g1_ParamLimits

0x82e4,	// (0x00040086) main_mup3_pane_g1

0x8305,	// (0x000400a7) main_mup3_pane_g2_ParamLimits

0x8305,	// (0x000400a7) main_mup3_pane_g2

0x8379,	// (0x0004011b) main_mup3_pane_g3_ParamLimits

0x8379,	// (0x0004011b) main_mup3_pane_g3

0x83de,	// (0x00040180) main_mup3_pane_g4_ParamLimits

0x83de,	// (0x00040180) main_mup3_pane_g4

0x8443,	// (0x000401e5) main_mup3_pane_g5_ParamLimits

0x8443,	// (0x000401e5) main_mup3_pane_g5

0x84a8,	// (0x0004024a) main_mup3_pane_g6_ParamLimits

0x84a8,	// (0x0004024a) main_mup3_pane_g6

0x0210,	// (0x00037fb2) main_mup3_pane_g7_ParamLimits

0x0210,	// (0x00037fb2) main_mup3_pane_g7

0x0007,

0xf6ac,	// (0x0004744e) main_mup3_pane_g_ParamLimits

0xf6ac,	// (0x0004744e) main_mup3_pane_g

0x8522,	// (0x000402c4) main_mup3_pane_t1_ParamLimits

0x8522,	// (0x000402c4) main_mup3_pane_t1

0x8587,	// (0x00040329) main_mup3_pane_t2_ParamLimits

0x8587,	// (0x00040329) main_mup3_pane_t2

0x8650,	// (0x000403f2) main_mup3_pane_t4_ParamLimits

0x8650,	// (0x000403f2) main_mup3_pane_t4

0x86a4,	// (0x00040446) main_mup3_pane_t5_ParamLimits

0x86a4,	// (0x00040446) main_mup3_pane_t5

0x8760,	// (0x00040502) main_mup3_pane_t6_ParamLimits

0x8760,	// (0x00040502) main_mup3_pane_t6

0x0005,

0xf6bd,	// (0x0004745f) main_mup3_pane_t_ParamLimits

0xf6bd,	// (0x0004745f) main_mup3_pane_t

0x880a,	// (0x000405ac) mup3_progress_pane_ParamLimits

0x880a,	// (0x000405ac) mup3_progress_pane

0x8888,	// (0x0004062a) popup_mup3_control_window_ParamLimits

0x8888,	// (0x0004062a) popup_mup3_control_window

0x26f7,	// (0x0003a499) popup_mup3_text_window

0x88a5,	// (0x00040647) mup3_progress_pane_t1

0x88c3,	// (0x00040665) mup3_progress_pane_t2

0x26ff,	// (0x0003a4a1) mup3_progress_pane_t3

0x0002,

0xf6ca,	// (0x0004746c) mup3_progress_pane_t

0x271c,	// (0x0003a4be) mup_progress_pane_cp03

0xe654,	// (0x000463f6) bg_tb_trans_pane_cp04

0x88e1,	// (0x00040683) mup3_volume_pane

0x88e9,	// (0x0004068b) popup_mup3_control_window_g1

0xd20f,	// (0x00044fb1) mup3_volume_pane_g1

0xd218,	// (0x00044fba) mup3_volume_pane_g2

0xd221,	// (0x00044fc3) mup3_volume_pane_g3

0x0002,

0xf6d1,	// (0x00047473) mup3_volume_pane_g

0xe654,	// (0x000463f6) bg_tb_trans_pane_cp03

0x272c,	// (0x0003a4ce) popup_mup3_text_window_g1

0x2734,	// (0x0003a4d6) popup_mup3_text_window_t1

0x02e6,	// (0x00038088) list_calc_item_pane_g1_ParamLimits

0x21db,	// (0x00039f7d) mup_volume_pane_cp_g1

0x8244,	// (0x0003ffe6) main_touch_calib_pane_t3

0x825a,	// (0x0003fffc) main_touch_calib_pane_t4

0x8270,	// (0x00040012) main_touch_calib_pane_t5

0x4f11,	// (0x0003ccb3) aid_cell_size_toolbar2

0x4f19,	// (0x0003ccbb) aid_popup3_width_pane

0x4081,	// (0x0003be23) aid_zoom_text_msg_primary

0x5b45,	// (0x0003d8e7) vorec_t7

0x02aa,	// (0x0003804c) bg_calc_paper_pane_g1_ParamLimits

0x02c2,	// (0x00038064) bg_calc_paper_pane_g2_ParamLimits

0x02b6,	// (0x00038058) bg_calc_paper_pane_g3_ParamLimits

0x02da,	// (0x0003807c) bg_calc_paper_pane_g4_ParamLimits

0x02ce,	// (0x00038070) bg_calc_paper_pane_g5_ParamLimits

0x52c5,	// (0x0003d067) bg_calc_paper_pane_g6_ParamLimits

0x52d6,	// (0x0003d078) bg_calc_paper_pane_g7_ParamLimits

0x52e7,	// (0x0003d089) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00046e70) bg_calc_paper_pane_g_ParamLimits

0x52f8,	// (0x0003d09a) calc_bg_paper_pane_g9_ParamLimits

0x01f4,	// (0x00037f96) image_qvga_pane_ParamLimits

0x01f4,	// (0x00037f96) image_qvga_pane

0x0179,	// (0x00037f1b) bg_popup_sub_pane_cp04_ParamLimits

0x0f8f,	// (0x00038d31) popup_mup_playback_window_g1_ParamLimits

0x0f9b,	// (0x00038d3d) popup_mup_playback_window_t1_ParamLimits

0x0fb0,	// (0x00038d52) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x000471c9) popup_mup_playback_window_t_ParamLimits

0x0202,	// (0x00037fa4) main_mup2_pane_g3_ParamLimits

0x0202,	// (0x00037fa4) main_mup2_pane_g3

0x5df8,	// (0x0003db9a) popup_toolbar_window_cp04

0x1334,	// (0x000390d6) popup_call2_audio_second_window_g3_ParamLimits

0x1334,	// (0x000390d6) popup_call2_audio_second_window_g3

0x174c,	// (0x000394ee) popup_call2_audio_first_window_g4_ParamLimits

0x174c,	// (0x000394ee) popup_call2_audio_first_window_g4

0x1d73,	// (0x00039b15) popup_call2_audio_in_window_g4_ParamLimits

0x1d73,	// (0x00039b15) popup_call2_audio_in_window_g4

0x7725,	// (0x0003f4c7) aid_area_sk_bg_cut_ParamLimits

0x7725,	// (0x0003f4c7) aid_area_sk_bg_cut

0x0fc5,	// (0x00038d67) aid_area_sk_bg_cut_2_ParamLimits

0x0fc5,	// (0x00038d67) aid_area_sk_bg_cut_2

0xe654,	// (0x000463f6) aid_placing_details_win

0xe654,	// (0x000463f6) aid_placing_details_win_2

0x0202,	// (0x00037fa4) camera2_autofocus_pane_g1_ParamLimits

0x50d0,	// (0x0003ce72) popup_fixed_preview_cale_window_ParamLimits

0x50d0,	// (0x0003ce72) popup_fixed_preview_cale_window

0x0d9d,	// (0x00038b3f) navi_slider_pane_g3

0x0d94,	// (0x00038b36) navi_slider_pane_g4

0x0d8b,	// (0x00038b2d) navi_slider_pane_g5

0x0d9d,	// (0x00038b3f) navi_slider_pane_g6

0x72af,	// (0x0003f051) navi_slider_pane_g7

0x0ecd,	// (0x00038c6f) mup_scale_pane_g3

0x0ed6,	// (0x00038c78) mup_scale_pane_g4

0x0edf,	// (0x00038c81) mup_scale_pane_g5

0x74cc,	// (0x0003f26e) mup_scale_pane_g6

0x74d5,	// (0x0003f277) mup_scale_pane_g7

0x0240,	// (0x00037fe2) cams2_slider_pane_g3

0x0240,	// (0x00037fe2) cams2_slider_pane_g4

0x0240,	// (0x00037fe2) cams2_slider_pane_g5

0x0240,	// (0x00037fe2) cams2_slider_pane_g6

0x0240,	// (0x00037fe2) cams2_slider_pane_g7

0x0240,	// (0x00037fe2) camera2_autofocus_pane_cp_g1

0x204b,	// (0x00039ded) bg_popup_preview_window_pane_cp02_ParamLimits

0x204b,	// (0x00039ded) bg_popup_preview_window_pane_cp02

0x2742,	// (0x0003a4e4) list_fp_cale_pane_ParamLimits

0x2742,	// (0x0003a4e4) list_fp_cale_pane

0x274e,	// (0x0003a4f0) popup_fixed_preview_cale_window_t1_ParamLimits

0x274e,	// (0x0003a4f0) popup_fixed_preview_cale_window_t1

0x88f2,	// (0x00040694) popup_fixed_preview_cale_window_t2_ParamLimits

0x88f2,	// (0x00040694) popup_fixed_preview_cale_window_t2

0x8907,	// (0x000406a9) popup_fixed_preview_cale_window_t3_ParamLimits

0x8907,	// (0x000406a9) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d8,	// (0x0004747a) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d8,	// (0x0004747a) popup_fixed_preview_cale_window_t

0x891c,	// (0x000406be) list_single_fp_cale_pane_ParamLimits

0x891c,	// (0x000406be) list_single_fp_cale_pane

0x276c,	// (0x0003a50e) list_single_fp_cale_pane_g1_ParamLimits

0x276c,	// (0x0003a50e) list_single_fp_cale_pane_g1

0x2778,	// (0x0003a51a) list_single_fp_cale_pane_g2_ParamLimits

0x2778,	// (0x0003a51a) list_single_fp_cale_pane_g2

0x0002,

0xf6df,	// (0x00047481) list_single_fp_cale_pane_g_ParamLimits

0xf6df,	// (0x00047481) list_single_fp_cale_pane_g

0x2791,	// (0x0003a533) list_single_fp_cale_pane_t1_ParamLimits

0x2791,	// (0x0003a533) list_single_fp_cale_pane_t1

0x27a3,	// (0x0003a545) list_single_fp_cale_pane_t2_ParamLimits

0x27a3,	// (0x0003a545) list_single_fp_cale_pane_t2

0x0001,

0xf6e6,	// (0x00047488) list_single_fp_cale_pane_t_ParamLimits

0xf6e6,	// (0x00047488) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xe654,	// (0x000463f6) main_dialer_pane

0xe654,	// (0x000463f6) aid_cell_size_keypad

0xe654,	// (0x000463f6) dialer_ne_pane

0xe654,	// (0x000463f6) grid_dialer_command_1_pane

0xe654,	// (0x000463f6) grid_dialer_command_2_pane

0xe654,	// (0x000463f6) grid_dialer_keypad_pane

0x2265,	// (0x0003a007) bg_popup_call_pane_cp06_ParamLimits

0x2265,	// (0x0003a007) bg_popup_call_pane_cp06

0x2265,	// (0x0003a007) dialer_ne_clear_pane_ParamLimits

0x2265,	// (0x0003a007) dialer_ne_clear_pane

0x0240,	// (0x00037fe2) dialer_ne_pane_g1

0x025e,	// (0x00038000) dialer_ne_pane_t1_ParamLimits

0x025e,	// (0x00038000) dialer_ne_pane_t1

0x299d,	// (0x0003a73f) dialer_ne_pane_t2_ParamLimits

0x299d,	// (0x0003a73f) dialer_ne_pane_t2

0x892c,	// (0x000406ce) dialer_ne_pane_t3_ParamLimits

0x892c,	// (0x000406ce) dialer_ne_pane_t3

0x0002,

0xf6eb,	// (0x0004748d) dialer_ne_pane_t_ParamLimits

0xf6eb,	// (0x0004748d) dialer_ne_pane_t

0x892c,	// (0x000406ce) dialer_ne_pane_t3_copy1_ParamLimits

0x892c,	// (0x000406ce) dialer_ne_pane_t3_copy1

0x27d6,	// (0x0003a578) cell_dialer_keypad_pane_ParamLimits

0x27d6,	// (0x0003a578) cell_dialer_keypad_pane

0x019b,	// (0x00037f3d) cell_dialer_command_1_pane_ParamLimits

0x019b,	// (0x00037f3d) cell_dialer_command_1_pane

0x27ed,	// (0x0003a58f) cell_dialer_command_2_pane_ParamLimits

0x27ed,	// (0x0003a58f) cell_dialer_command_2_pane

0x019b,	// (0x00037f3d) bg_button_pane_cp02_ParamLimits

0x019b,	// (0x00037f3d) bg_button_pane_cp02

0x0202,	// (0x00037fa4) cell_dialer_keypad_pane_g1_ParamLimits

0x0202,	// (0x00037fa4) cell_dialer_keypad_pane_g1

0x019b,	// (0x00037f3d) bg_button_pane_cp03_ParamLimits

0x019b,	// (0x00037f3d) bg_button_pane_cp03

0x0202,	// (0x00037fa4) cell_dialer_command_1_pane_g1_ParamLimits

0x0202,	// (0x00037fa4) cell_dialer_command_1_pane_g1

0xe654,	// (0x000463f6) bg_button_pane_cp04

0x0240,	// (0x00037fe2) cell_dialer_command_2_pane_g1

0xe654,	// (0x000463f6) bg_button_pane_cp06

0x0240,	// (0x00037fe2) dialer_ne_clear_pane_g1

0x71ea,	// (0x0003ef8c) navi_pane_g2

0x7218,	// (0x0003efba) navi_pane_g3

0x0002,

0xf32f,	// (0x000470d1) navi_pane_g

0x7243,	// (0x0003efe5) navi_pane_mv_g2

0x726a,	// (0x0003f00c) navi_pane_mv_g5

0x7272,	// (0x0003f014) navi_pane_mv_t1

0x029e,	// (0x00038040) main_clock2_pane

0x01f4,	// (0x00037f96) main_clock2_list_pane_ParamLimits

0x01f4,	// (0x00037f96) main_clock2_list_pane

0x89a1,	// (0x00040743) main_clock2_pane_t1_ParamLimits

0x89a1,	// (0x00040743) main_clock2_pane_t1

0x89cf,	// (0x00040771) main_clock2_pane_t2_ParamLimits

0x89cf,	// (0x00040771) main_clock2_pane_t2

0x0004,

0xf6f7,	// (0x00047499) main_clock2_pane_t_ParamLimits

0xf6f7,	// (0x00047499) main_clock2_pane_t

0x8a34,	// (0x000407d6) popup_clock_analogue_window_cp03_ParamLimits

0x8a34,	// (0x000407d6) popup_clock_analogue_window_cp03

0x8a52,	// (0x000407f4) popup_clock_digital_window_cp02_ParamLimits

0x8a52,	// (0x000407f4) popup_clock_digital_window_cp02

0x8ac7,	// (0x00040869) main_clock2_list_single_pane_ParamLimits

0x8ac7,	// (0x00040869) main_clock2_list_single_pane

0x0453,	// (0x000381f5) list_highlight_pane_cp05

0x282e,	// (0x0003a5d0) main_clock2_list_single_pane_t1

0x5df8,	// (0x0003db9a) popup_toolbar_window_cp04_ParamLimits

0x0210,	// (0x00037fb2) camera2_autofocus_pane_g2_ParamLimits

0x0210,	// (0x00037fb2) camera2_autofocus_pane_g2

0x0210,	// (0x00037fb2) camera2_autofocus_pane_g3_ParamLimits

0x0210,	// (0x00037fb2) camera2_autofocus_pane_g3

0x0210,	// (0x00037fb2) camera2_autofocus_pane_g4_ParamLimits

0x0210,	// (0x00037fb2) camera2_autofocus_pane_g4

0x0210,	// (0x00037fb2) camera2_autofocus_pane_g5_ParamLimits

0x0210,	// (0x00037fb2) camera2_autofocus_pane_g5

0x0004,

0xf63b,	// (0x000473dd) camera2_autofocus_pane_g_ParamLimits

0xf63b,	// (0x000473dd) camera2_autofocus_pane_g

0x82a1,	// (0x00040043) camera2_autofocus_pane_cp_g2

0x82a9,	// (0x0004004b) camera2_autofocus_pane_cp_g3

0x82b1,	// (0x00040053) camera2_autofocus_pane_cp_g4

0x82b9,	// (0x0004005b) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a1,	// (0x00047443) camera2_autofocus_pane_cp_g

0xe654,	// (0x000463f6) popup_dialer_spcha_window

0xe654,	// (0x000463f6) bg_popup_sub_pane_cp07

0xe654,	// (0x000463f6) list_spcha_pane

0x283c,	// (0x0003a5de) list_single_spcha_pane_ParamLimits

0x283c,	// (0x0003a5de) list_single_spcha_pane

0xe654,	// (0x000463f6) list_highlight_pane_cp06

0x09b9,	// (0x0003875b) list_single_spcha_pane_t1

0x1b1d,	// (0x000398bf) popup_call2_audio_out_window_g4_ParamLimits

0x1b1d,	// (0x000398bf) popup_call2_audio_out_window_g4

0xe654,	// (0x000463f6) main_imed2_pane

0x7d42,	// (0x0003fae4) popup_imed_adjust2_window

0x7d55,	// (0x0003faf7) popup_imed_trans_window_ParamLimits

0x7d55,	// (0x0003faf7) popup_imed_trans_window

0x22be,	// (0x0003a060) popup_blid_sat_info2_window_t1

0x22cc,	// (0x0003a06e) popup_blid_sat_info2_window_t2

0x000a,

0xf5d0,	// (0x00047372) popup_blid_sat_info2_window_t

0x8b7e,	// (0x00040920) aid_size_cell_colour_35

0x8b98,	// (0x0004093a) aid_size_cell_colour_112

0x8baf,	// (0x00040951) aid_size_cell_effect

0x019b,	// (0x00037f3d) bg_tb_trans_pane_cp02

0x0985,	// (0x00038727) heading_imed_pane

0x8bc9,	// (0x0004096b) listscroll_imed_pane

0x284e,	// (0x0003a5f0) heading_imed_pane_g1

0x2856,	// (0x0003a5f8) heading_imed_pane_t1

0x2864,	// (0x0003a606) grid_imed_colour_35_pane_ParamLimits

0x2864,	// (0x0003a606) grid_imed_colour_35_pane

0x8bd5,	// (0x00040977) grid_imed_effect_pane

0x2880,	// (0x0003a622) list_imed_aspect_pane

0x8be5,	// (0x00040987) scroll_pane_cp027_ParamLimits

0x8be5,	// (0x00040987) scroll_pane_cp027

0x8bf1,	// (0x00040993) cell_imed_effect_pane_ParamLimits

0x8bf1,	// (0x00040993) cell_imed_effect_pane

0x2888,	// (0x0003a62a) cell_imed_colour_pane_ParamLimits

0x2888,	// (0x0003a62a) cell_imed_colour_pane

0x28d2,	// (0x0003a674) cell_imed_colour_pane_g1_ParamLimits

0x28d2,	// (0x0003a674) cell_imed_colour_pane_g1

0x28e3,	// (0x0003a685) hgihlgiht_grid_pane_cp016_ParamLimits

0x28e3,	// (0x0003a685) hgihlgiht_grid_pane_cp016

0x8c0d,	// (0x000409af) cell_imed_effect_pane_g1

0x8c15,	// (0x000409b7) grid_highlight_pane_cp017

0x28f4,	// (0x0003a696) list_imed_single_pane_ParamLimits

0x28f4,	// (0x0003a696) list_imed_single_pane

0xe654,	// (0x000463f6) list_highlight_pane_cp07

0x2908,	// (0x0003a6aa) list_imed_aspect_pane_comp1_t1

0x0e5b,	// (0x00038bfd) bg_tb_trans_pane_cp05

0x292a,	// (0x0003a6cc) popup_imed_adjust2_window_g1

0x2951,	// (0x0003a6f3) popup_imed_adjust2_window_t1

0x2969,	// (0x0003a70b) slider_imed_adjust_pane

0x297d,	// (0x0003a71f) slider_imed_adjust_pane_g1

0x298d,	// (0x0003a72f) slider_imed_adjust_pane_g2

0x29dc,	// (0x0003a77e) slider_imed_adjust_pane_g3

0x29ed,	// (0x0003a78f) slider_imed_adjust_pane_g4

0x0003,

0xf714,	// (0x000474b6) slider_imed_adjust_pane_g

0x8c1e,	// (0x000409c0) aid_size_cell_clipart2

0x29fe,	// (0x0003a7a0) grid_imed_clipart_pane

0x0ef0,	// (0x00038c92) scroll_pane_cp031

0x8c2a,	// (0x000409cc) cell_imed_clipart_pane_ParamLimits

0x8c2a,	// (0x000409cc) cell_imed_clipart_pane

0x8c48,	// (0x000409ea) cell_imed_clipart_pane_g1

0xe654,	// (0x000463f6) grid_highlight_pane_cp014

0x8983,	// (0x00040725) main_clock2_pane_g1_ParamLimits

0x8983,	// (0x00040725) main_clock2_pane_g1

0x8a6e,	// (0x00040810) aid_call2_pane_cp10

0x8a80,	// (0x00040822) aid_call_pane_cp10

0x0cb7,	// (0x00038a59) popup_clock_analogue_window_cp10_g1

0x0cb7,	// (0x00038a59) popup_clock_analogue_window_cp10_g2

0x8a92,	// (0x00040834) popup_clock_analogue_window_cp10_g3

0x8a92,	// (0x00040834) popup_clock_analogue_window_cp10_g4

0x0cb7,	// (0x00038a59) popup_clock_analogue_window_cp10_g5

0x0004,

0xf702,	// (0x000474a4) popup_clock_analogue_window_cp10_g

0x8aa8,	// (0x0004084a) popup_clock_analogue_window_cp10_t1

0x8ad9,	// (0x0004087b) clock_digital_number_pane_cp10_ParamLimits

0x8ad9,	// (0x0004087b) clock_digital_number_pane_cp10

0x8af3,	// (0x00040895) clock_digital_number_pane_cp11_ParamLimits

0x8af3,	// (0x00040895) clock_digital_number_pane_cp11

0x8b0d,	// (0x000408af) clock_digital_number_pane_cp12_ParamLimits

0x8b0d,	// (0x000408af) clock_digital_number_pane_cp12

0x8b27,	// (0x000408c9) clock_digital_number_pane_cp13_ParamLimits

0x8b27,	// (0x000408c9) clock_digital_number_pane_cp13

0x8b43,	// (0x000408e5) clock_digital_separator_pane_cp10_ParamLimits

0x8b43,	// (0x000408e5) clock_digital_separator_pane_cp10

0x8b5d,	// (0x000408ff) popup_clock_digital_window_cp02_t1_ParamLimits

0x8b5d,	// (0x000408ff) popup_clock_digital_window_cp02_t1

0x0171,	// (0x00037f13) clock_digital_number_pane_cp10_g1

0x0171,	// (0x00037f13) clock_digital_number_pane_cp10_g2

0x0001,

0xf71d,	// (0x000474bf) clock_digital_number_pane_cp10_g

0x0171,	// (0x00037f13) clock_digital_separator_pane_cp10_g1

0x0171,	// (0x00037f13) clock_digital_separator_pane_g2_cp10

0x0d52,	// (0x00038af4) navi_pane_vded_g4

0x0d5b,	// (0x00038afd) navi_pane_vded_g5

0x0d64,	// (0x00038b06) navi_pane_vded_t1

0xe654,	// (0x000463f6) main_vded_pane

0x8c51,	// (0x000409f3) main_vded_pane_g1

0x8c5d,	// (0x000409ff) main_vded_pane_g2

0x8c67,	// (0x00040a09) main_vded_pane_g3

0x0002,

0xf722,	// (0x000474c4) main_vded_pane_g

0x8c71,	// (0x00040a13) main_vded_pane_t1

0x8c7f,	// (0x00040a21) main_vded_pane_t2

0x0001,

0xf729,	// (0x000474cb) main_vded_pane_t

0x8c8d,	// (0x00040a2f) vded_slider_pane

0x8c97,	// (0x00040a39) vded_video_pane

0x2a08,	// (0x0003a7aa) vded_video_pane_g1

0x8ca3,	// (0x00040a45) vded_video_pane_g2

0x0240,	// (0x00037fe2) vded_video_pane_g3

0x0002,

0xf72e,	// (0x000474d0) vded_video_pane_g

0x2a12,	// (0x0003a7b4) vded_slider_pane_g1

0x21db,	// (0x00039f7d) vded_slider_pane_g2

0x2a1b,	// (0x0003a7bd) vded_slider_pane_g3

0x2a24,	// (0x0003a7c6) vded_slider_pane_g4

0x2a2d,	// (0x0003a7cf) vded_slider_pane_g5

0x0004,

0xf735,	// (0x000474d7) vded_slider_pane_g

0x887c,	// (0x0004061e) mup3_rocker_pane_ParamLimits

0x887c,	// (0x0004061e) mup3_rocker_pane

0x8cac,	// (0x00040a4e) mup3_control_keys_pane_g1

0x8cb4,	// (0x00040a56) mup3_control_keys_pane_g2

0x8cbc,	// (0x00040a5e) mup3_control_keys_pane_g3

0x8cc4,	// (0x00040a66) mup3_control_keys_pane_g4

0x0003,

0xf740,	// (0x000474e2) mup3_control_keys_pane_g

0x50f8,	// (0x0003ce9a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x50f8,	// (0x0003ce9a) popup_toolbar2_fixed_window_cp01

0x8898,	// (0x0004063a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x8898,	// (0x0004063a) popup_toolbar2_fixed_window_cp02

0x14a6,	// (0x00039248) popup_call2_audio_second_window_t4_ParamLimits

0x14a6,	// (0x00039248) popup_call2_audio_second_window_t4

0x19e2,	// (0x00039784) popup_call2_audio_first_window_t6_ParamLimits

0x19e2,	// (0x00039784) popup_call2_audio_first_window_t6

0x1c20,	// (0x000399c2) popup_call2_audio_out_window_t6_ParamLimits

0x1c20,	// (0x000399c2) popup_call2_audio_out_window_t6

0xe654,	// (0x000463f6) main_vitu_pane

0x01f4,	// (0x00037f96) aid_size_cell_itu_ParamLimits

0x01f4,	// (0x00037f96) aid_size_cell_itu

0x01f4,	// (0x00037f96) bg_popup_window_pane_cp08_ParamLimits

0x01f4,	// (0x00037f96) bg_popup_window_pane_cp08

0x01f4,	// (0x00037f96) field_vitu_entry_pane_ParamLimits

0x01f4,	// (0x00037f96) field_vitu_entry_pane

0x01f4,	// (0x00037f96) grid_vitu_function_pane_ParamLimits

0x01f4,	// (0x00037f96) grid_vitu_function_pane

0x01f4,	// (0x00037f96) grid_vitu_itu_pane_ParamLimits

0x01f4,	// (0x00037f96) grid_vitu_itu_pane

0x01f4,	// (0x00037f96) cell_vitu_itu_pane_ParamLimits

0x01f4,	// (0x00037f96) cell_vitu_itu_pane

0x01f4,	// (0x00037f96) cell_vitu_function_pane_ParamLimits

0x01f4,	// (0x00037f96) cell_vitu_function_pane

0x019b,	// (0x00037f3d) bg_popup_sub_pane_cp08_ParamLimits

0x019b,	// (0x00037f3d) bg_popup_sub_pane_cp08

0x024a,	// (0x00037fec) field_vitu_entry_pane_t1_ParamLimits

0x024a,	// (0x00037fec) field_vitu_entry_pane_t1

0x299d,	// (0x0003a73f) field_vitu_entry_pane_t2_ParamLimits

0x299d,	// (0x0003a73f) field_vitu_entry_pane_t2

0x0001,

0xf749,	// (0x000474eb) field_vitu_entry_pane_t_ParamLimits

0xf749,	// (0x000474eb) field_vitu_entry_pane_t

0x2265,	// (0x0003a007) bg_button_pane_cp05_ParamLimits

0x2265,	// (0x0003a007) bg_button_pane_cp05

0x2a36,	// (0x0003a7d8) cell_vitu_itu_pane_g1

0x0e47,	// (0x00038be9) cell_vitu_itu_pane_t1_ParamLimits

0x0e47,	// (0x00038be9) cell_vitu_itu_pane_t1

0x0e47,	// (0x00038be9) cell_vitu_itu_pane_t2_ParamLimits

0x0e47,	// (0x00038be9) cell_vitu_itu_pane_t2

0x0002,

0xf74e,	// (0x000474f0) cell_vitu_itu_pane_t_ParamLimits

0xf74e,	// (0x000474f0) cell_vitu_itu_pane_t

0xe654,	// (0x000463f6) bg_button_pane_cp07

0x0240,	// (0x00037fe2) cell_vitu_function_pane_g1

0x5229,	// (0x0003cfcb) main_calc_pane_g1

0x4f4d,	// (0x0003ccef) aid_visual_content_pane

0xe654,	// (0x000463f6) main_vradio_pane

0x0210,	// (0x00037fb2) main_vradio_pane_g1_ParamLimits

0x0210,	// (0x00037fb2) main_vradio_pane_g1

0x0210,	// (0x00037fb2) main_vradio_pane_g2_ParamLimits

0x0210,	// (0x00037fb2) main_vradio_pane_g2

0x0001,

0xf0a1,	// (0x00046e43) main_vradio_pane_g_ParamLimits

0xf0a1,	// (0x00046e43) main_vradio_pane_g

0x025e,	// (0x00038000) main_vradio_pane_t1_ParamLimits

0x025e,	// (0x00038000) main_vradio_pane_t1

0x025e,	// (0x00038000) main_vradio_pane_t2_ParamLimits

0x025e,	// (0x00038000) main_vradio_pane_t2

0x025e,	// (0x00038000) main_vradio_pane_t3_ParamLimits

0x025e,	// (0x00038000) main_vradio_pane_t3

0x0002,

0xf755,	// (0x000474f7) main_vradio_pane_t_ParamLimits

0xf755,	// (0x000474f7) main_vradio_pane_t

0x01f4,	// (0x00037f96) vradio_rocker_control_pane_ParamLimits

0x01f4,	// (0x00037f96) vradio_rocker_control_pane

0x01f4,	// (0x00037f96) vradio_station_info_pane_ParamLimits

0x01f4,	// (0x00037f96) vradio_station_info_pane

0x019b,	// (0x00037f3d) vradio_frequency_info_pane_ParamLimits

0x019b,	// (0x00037f3d) vradio_frequency_info_pane

0x0240,	// (0x00037fe2) vradio_station_info_pane_g1

0x0e47,	// (0x00038be9) vradio_station_info_pane_t1_ParamLimits

0x0e47,	// (0x00038be9) vradio_station_info_pane_t1

0x025e,	// (0x00038000) vradio_station_info_pane_t2_ParamLimits

0x025e,	// (0x00038000) vradio_station_info_pane_t2

0x0001,

0xf75c,	// (0x000474fe) vradio_station_info_pane_t_ParamLimits

0xf75c,	// (0x000474fe) vradio_station_info_pane_t

0xe654,	// (0x000463f6) vradio_tuning_pane

0x8cd4,	// (0x00040a76) vradio_rocker_control_pane_g1

0x2a52,	// (0x0003a7f4) vradio_rocker_control_pane_g2

0x8cdc,	// (0x00040a7e) vradio_rocker_control_pane_g3

0x8ce4,	// (0x00040a86) vradio_rocker_control_pane_g4

0x8cee,	// (0x00040a90) vradio_rocker_control_pane_g5

0x0004,

0xf761,	// (0x00047503) vradio_rocker_control_pane_g

0x0240,	// (0x00037fe2) vradio_frequency_info_pane_g1

0x024a,	// (0x00037fec) vradio_frequency_info_pane_t1_ParamLimits

0x024a,	// (0x00037fec) vradio_frequency_info_pane_t1

0x8cf6,	// (0x00040a98) vradio_tuning_pane_g1

0x8d03,	// (0x00040aa5) vradio_tuning_pane_t1

0x4f96,	// (0x0003cd38) area_side_right_pane_ParamLimits

0x4f96,	// (0x0003cd38) area_side_right_pane

0x2012,	// (0x00039db4) status_small_pane_g1

0x201a,	// (0x00039dbc) status_small_pane_g2

0x2023,	// (0x00039dc5) status_small_pane_g3

0x202c,	// (0x00039dce) status_small_pane_g4

0x0003,

0xf532,	// (0x000472d4) status_small_pane_g

0x2035,	// (0x00039dd7) status_small_pane_t1

0xe654,	// (0x000463f6) main_video3_pane

0xe654,	// (0x000463f6) cams_zoom_vslider_pane

0x2a5a,	// (0x0003a7fc) image3_wide_pane_ParamLimits

0x2a5a,	// (0x0003a7fc) image3_wide_pane

0xe654,	// (0x000463f6) image3_wide_small_pane

0x2a74,	// (0x0003a816) main_video3_pane_g1_ParamLimits

0x2a74,	// (0x0003a816) main_video3_pane_g1

0x2a74,	// (0x0003a816) main_video3_pane_g2_ParamLimits

0x2a74,	// (0x0003a816) main_video3_pane_g2

0x0001,

0xf76c,	// (0x0004750e) main_video3_pane_g_ParamLimits

0xf76c,	// (0x0004750e) main_video3_pane_g

0x2a92,	// (0x0003a834) main_video3_pane_t1_ParamLimits

0x2a92,	// (0x0003a834) main_video3_pane_t1

0x2a92,	// (0x0003a834) main_video3_pane_t2_ParamLimits

0x2a92,	// (0x0003a834) main_video3_pane_t2

0x2a92,	// (0x0003a834) main_video3_pane_t3_ParamLimits

0x2a92,	// (0x0003a834) main_video3_pane_t3

0x0002,

0xf771,	// (0x00047513) main_video3_pane_t_ParamLimits

0xf771,	// (0x00047513) main_video3_pane_t

0x0240,	// (0x00037fe2) cams_zoom_vslider_pane_g1

0x0240,	// (0x00037fe2) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00046e51) cams_zoom_vslider_pane_g

0xe654,	// (0x000463f6) small_slider_vertical_pane

0x0240,	// (0x00037fe2) small_slider_vertical_pane_g1

0x0240,	// (0x00037fe2) small_slider_vertical_pane_g2

0x2ab9,	// (0x0003a85b) small_slider_vertical_pane_g3

0x0002,

0xf778,	// (0x0004751a) small_slider_vertical_pane_g

0xe654,	// (0x000463f6) main_hwr_training_pane

0x2ac2,	// (0x0003a864) hwr_training_instruct_pane_ParamLimits

0x2ac2,	// (0x0003a864) hwr_training_instruct_pane

0x8d12,	// (0x00040ab4) hwr_training_navi_pane_ParamLimits

0x8d12,	// (0x00040ab4) hwr_training_navi_pane

0x8d2c,	// (0x00040ace) hwr_training_write_pane_ParamLimits

0x8d2c,	// (0x00040ace) hwr_training_write_pane

0xe654,	// (0x000463f6) bg_frame_shadow_pane

0x2af9,	// (0x0003a89b) hwr_training_write_pane_g1

0x2b01,	// (0x0003a8a3) hwr_training_write_pane_g2

0x2b09,	// (0x0003a8ab) hwr_training_write_pane_g3

0x2b11,	// (0x0003a8b3) hwr_training_write_pane_g4

0x2b19,	// (0x0003a8bb) hwr_training_write_pane_g5

0x2b21,	// (0x0003a8c3) hwr_training_write_pane_g6

0x2b29,	// (0x0003a8cb) hwr_training_write_pane_g7

0x0006,

0xf77f,	// (0x00047521) hwr_training_write_pane_g

0x8d64,	// (0x00040b06) hwr_training_navi_pane_g1_ParamLimits

0x8d64,	// (0x00040b06) hwr_training_navi_pane_g1

0x8d76,	// (0x00040b18) hwr_training_navi_pane_g2_ParamLimits

0x8d76,	// (0x00040b18) hwr_training_navi_pane_g2

0x8d88,	// (0x00040b2a) hwr_training_navi_pane_g3_ParamLimits

0x8d88,	// (0x00040b2a) hwr_training_navi_pane_g3

0x8d98,	// (0x00040b3a) hwr_training_navi_pane_g4_ParamLimits

0x8d98,	// (0x00040b3a) hwr_training_navi_pane_g4

0x0004,

0xf78e,	// (0x00047530) hwr_training_navi_pane_g_ParamLimits

0xf78e,	// (0x00047530) hwr_training_navi_pane_g

0x8db2,	// (0x00040b54) hwr_training_navi_pane_t1

0x8dc0,	// (0x00040b62) list_single_hwr_training_instruct_pane_ParamLimits

0x8dc0,	// (0x00040b62) list_single_hwr_training_instruct_pane

0x2b31,	// (0x0003a8d3) list_single_hwr_training_instruct_pane_t1

0x23c5,	// (0x0003a167) bg_frame_shadow_pane_g1

0x2b40,	// (0x0003a8e2) bg_frame_shadow_pane_g2

0x2b48,	// (0x0003a8ea) bg_frame_shadow_pane_g3

0x2b50,	// (0x0003a8f2) bg_frame_shadow_pane_g4

0x2b58,	// (0x0003a8fa) bg_frame_shadow_pane_g5

0x2b60,	// (0x0003a902) bg_frame_shadow_pane_g6

0x2b68,	// (0x0003a90a) bg_frame_shadow_pane_g7

0x0356,	// (0x000380f8) bg_frame_shadow_pane_g8

0x0007,

0xf799,	// (0x0004753b) bg_frame_shadow_pane_g

0xe654,	// (0x000463f6) main_video_tele_dialer_pane

0x8dd9,	// (0x00040b7b) aid_size_cell_video_keypad_ParamLimits

0x8dd9,	// (0x00040b7b) aid_size_cell_video_keypad

0x8de9,	// (0x00040b8b) grid_video_dialer_keypad_pane_ParamLimits

0x8de9,	// (0x00040b8b) grid_video_dialer_keypad_pane

0x8e1b,	// (0x00040bbd) video_down_pane_cp_ParamLimits

0x8e1b,	// (0x00040bbd) video_down_pane_cp

0x8e45,	// (0x00040be7) cell_video_dialer_keypad_pane_ParamLimits

0x8e45,	// (0x00040be7) cell_video_dialer_keypad_pane

0x2b70,	// (0x0003a912) bg_button_pane_cp08_ParamLimits

0x2b70,	// (0x0003a912) bg_button_pane_cp08

0x8e5c,	// (0x00040bfe) cell_video_dialer_keypad_pane_g1_ParamLimits

0x8e5c,	// (0x00040bfe) cell_video_dialer_keypad_pane_g1

0x8870,	// (0x00040612) mup3_rocker2_pane_ParamLimits

0x8870,	// (0x00040612) mup3_rocker2_pane

0x0240,	// (0x00037fe2) mup3_rocker2_pane_g1

0x7ca6,	// (0x0003fa48) main_dialer2_pane

0xe654,	// (0x000463f6) main_mp4_pane

0x8eb5,	// (0x00040c57) main_mp4_pane_g1_ParamLimits

0x8eb5,	// (0x00040c57) main_mp4_pane_g1

0x8ed7,	// (0x00040c79) main_mp4_pane_g2_ParamLimits

0x8ed7,	// (0x00040c79) main_mp4_pane_g2

0x8ef5,	// (0x00040c97) main_mp4_pane_g3_ParamLimits

0x8ef5,	// (0x00040c97) main_mp4_pane_g3

0x8f30,	// (0x00040cd2) main_mp4_pane_g4_ParamLimits

0x8f30,	// (0x00040cd2) main_mp4_pane_g4

0x8f58,	// (0x00040cfa) main_mp4_pane_g5_ParamLimits

0x8f58,	// (0x00040cfa) main_mp4_pane_g5

0x0007,

0xf7b9,	// (0x0004755b) main_mp4_pane_g_ParamLimits

0xf7b9,	// (0x0004755b) main_mp4_pane_g

0x8fc0,	// (0x00040d62) main_mp4_pane_t1_ParamLimits

0x8fc0,	// (0x00040d62) main_mp4_pane_t1

0x9022,	// (0x00040dc4) main_mp4_pane_t2_ParamLimits

0x9022,	// (0x00040dc4) main_mp4_pane_t2

0x9086,	// (0x00040e28) main_mp4_pane_t3_ParamLimits

0x9086,	// (0x00040e28) main_mp4_pane_t3

0x90e4,	// (0x00040e86) main_mp4_pane_t4_ParamLimits

0x90e4,	// (0x00040e86) main_mp4_pane_t4

0x0003,

0xf7ca,	// (0x0004756c) main_mp4_pane_t_ParamLimits

0xf7ca,	// (0x0004756c) main_mp4_pane_t

0x9142,	// (0x00040ee4) mp4_progress_pane_ParamLimits

0x9142,	// (0x00040ee4) mp4_progress_pane

0x9176,	// (0x00040f18) mp4_rocker_pane_ParamLimits

0x9176,	// (0x00040f18) mp4_rocker_pane

0x2b84,	// (0x0003a926) mp4_progress_pane_t1

0x2ba6,	// (0x0003a948) mp4_progress_pane_t2

0x0001,

0xf7d3,	// (0x00047575) mp4_progress_pane_t

0x2bc8,	// (0x0003a96a) mup_progress_pane_cp04

0x0240,	// (0x00037fe2) mp4_rocker_pane_g1

0x01f4,	// (0x00037f96) aid_cell_size_keypad2_ParamLimits

0x01f4,	// (0x00037f96) aid_cell_size_keypad2

0x01f4,	// (0x00037f96) dialer2_ne_pane_ParamLimits

0x01f4,	// (0x00037f96) dialer2_ne_pane

0x01f4,	// (0x00037f96) grid_dialer2_keypad_pane_ParamLimits

0x01f4,	// (0x00037f96) grid_dialer2_keypad_pane

0x29ba,	// (0x0003a75c) bg_popup_call_pane_cp07_ParamLimits

0x29ba,	// (0x0003a75c) bg_popup_call_pane_cp07

0x918c,	// (0x00040f2e) dialer2_ne_pane_t1_ParamLimits

0x918c,	// (0x00040f2e) dialer2_ne_pane_t1

0x27d6,	// (0x0003a578) cell_dialer2_keypad_pane_ParamLimits

0x27d6,	// (0x0003a578) cell_dialer2_keypad_pane

0x2265,	// (0x0003a007) bg_button_pane_pane_cp04_ParamLimits

0x2265,	// (0x0003a007) bg_button_pane_pane_cp04

0x0202,	// (0x00037fa4) cell_dialer2_keypad_pane_g1_ParamLimits

0x0202,	// (0x00037fa4) cell_dialer2_keypad_pane_g1

0x5cca,	// (0x0003da6c) aid_placing_vt_set_content_ParamLimits

0x5cca,	// (0x0003da6c) aid_placing_vt_set_content

0x5cf2,	// (0x0003da94) aid_placing_vt_set_title_ParamLimits

0x5cf2,	// (0x0003da94) aid_placing_vt_set_title

0xe654,	// (0x000463f6) main_image3_pane

0x91e3,	// (0x00040f85) area_side_right_pane_cp01_ParamLimits

0x91e3,	// (0x00040f85) area_side_right_pane_cp01

0x021e,	// (0x00037fc0) main_image3_pane_g1_ParamLimits

0x021e,	// (0x00037fc0) main_image3_pane_g1

0x9212,	// (0x00040fb4) main_image3_pane_g2_ParamLimits

0x9212,	// (0x00040fb4) main_image3_pane_g2

0x922b,	// (0x00040fcd) main_image3_pane_g3_ParamLimits

0x922b,	// (0x00040fcd) main_image3_pane_g3

0x9244,	// (0x00040fe6) main_image3_pane_g4_ParamLimits

0x9244,	// (0x00040fe6) main_image3_pane_g4

0x0003,

0xf7e2,	// (0x00047584) main_image3_pane_g_ParamLimits

0xf7e2,	// (0x00047584) main_image3_pane_g

0x925d,	// (0x00040fff) main_image3_pane_t1_ParamLimits

0x925d,	// (0x00040fff) main_image3_pane_t1

0x9282,	// (0x00041024) main_image3_pane_t2_ParamLimits

0x9282,	// (0x00041024) main_image3_pane_t2

0x92a1,	// (0x00041043) main_image3_pane_t3_ParamLimits

0x92a1,	// (0x00041043) main_image3_pane_t3

0x0003,

0xf7eb,	// (0x0004758d) main_image3_pane_t_ParamLimits

0xf7eb,	// (0x0004758d) main_image3_pane_t

0x01f4,	// (0x00037f96) grid_sctrl_middle_pane_cp01_ParamLimits

0x01f4,	// (0x00037f96) grid_sctrl_middle_pane_cp01

0x9302,	// (0x000410a4) cell_sctrl_middle_pane_cp01_ParamLimits

0x9302,	// (0x000410a4) cell_sctrl_middle_pane_cp01

0x9313,	// (0x000410b5) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x9313,	// (0x000410b5) cell_sctrl_middle_pane_cp01_g1

0xe654,	// (0x000463f6) main_call4_pane

0x9320,	// (0x000410c2) aid_size_button_call4_ParamLimits

0x9320,	// (0x000410c2) aid_size_button_call4

0x9356,	// (0x000410f8) call4_windows_pane_ParamLimits

0x9356,	// (0x000410f8) call4_windows_pane

0x936b,	// (0x0004110d) grid_call4_button_pane_ParamLimits

0x936b,	// (0x0004110d) grid_call4_button_pane

0x939b,	// (0x0004113d) call4_windows_conf_pane

0x93b4,	// (0x00041156) popup_call4_audio_first_window_ParamLimits

0x93b4,	// (0x00041156) popup_call4_audio_first_window

0x9404,	// (0x000411a6) popup_call4_audio_second_window_ParamLimits

0x9404,	// (0x000411a6) popup_call4_audio_second_window

0x941d,	// (0x000411bf) popup_call4_audio_wait_window_ParamLimits

0x941d,	// (0x000411bf) popup_call4_audio_wait_window

0x942b,	// (0x000411cd) cell_call4_button_pane_ParamLimits

0x942b,	// (0x000411cd) cell_call4_button_pane

0x944e,	// (0x000411f0) bg_button_pane_cp09_ParamLimits

0x944e,	// (0x000411f0) bg_button_pane_cp09

0x945a,	// (0x000411fc) cell_call4_button_pane_g1_ParamLimits

0x945a,	// (0x000411fc) cell_call4_button_pane_g1

0x9467,	// (0x00041209) cell_call4_button_pane_t1_ParamLimits

0x9467,	// (0x00041209) cell_call4_button_pane_t1

0x2c11,	// (0x0003a9b3) popup_call4_audio_conf_window_ParamLimits

0x2c11,	// (0x0003a9b3) popup_call4_audio_conf_window

0x88a5,	// (0x00040647) mup3_progress_pane_t1_ParamLimits

0x88c3,	// (0x00040665) mup3_progress_pane_t2_ParamLimits

0x26ff,	// (0x0003a4a1) mup3_progress_pane_t3_ParamLimits

0xf6ca,	// (0x0004746c) mup3_progress_pane_t_ParamLimits

0x271c,	// (0x0003a4be) mup_progress_pane_cp03_ParamLimits

0x8ccc,	// (0x00040a6e) mup3_control_keys_pane_g4_copy1

0x9176,	// (0x00040f18) mp4_rocker2_pane_ParamLimits

0x9176,	// (0x00040f18) mp4_rocker2_pane

0x94ab,	// (0x0004124d) mp4_rocker2_pane_g1

0x94ab,	// (0x0004124d) mp4_rocker2_pane_g2

0x94ab,	// (0x0004124d) mp4_rocker2_pane_g3

0x94ab,	// (0x0004124d) mp4_rocker2_pane_g4

0x94ab,	// (0x0004124d) mp4_rocker2_pane_g5

0x0004,

0xf7f4,	// (0x00047596) mp4_rocker2_pane_g

0xe654,	// (0x000463f6) main_camera4_pane

0xe654,	// (0x000463f6) main_video4_pane

0x8df7,	// (0x00040b99) main_video_tele_dialer_pane_t1_ParamLimits

0x8df7,	// (0x00040b99) main_video_tele_dialer_pane_t1

0x8e09,	// (0x00040bab) main_video_tele_dialer_pane_t2_ParamLimits

0x8e09,	// (0x00040bab) main_video_tele_dialer_pane_t2

0x0001,

0xf7aa,	// (0x0004754c) main_video_tele_dialer_pane_t_ParamLimits

0xf7aa,	// (0x0004754c) main_video_tele_dialer_pane_t

0x94cb,	// (0x0004126d) cam4_autofocus_pane_ParamLimits

0x94cb,	// (0x0004126d) cam4_autofocus_pane

0x94e3,	// (0x00041285) cam4_image_uncrop_pane_ParamLimits

0x94e3,	// (0x00041285) cam4_image_uncrop_pane

0x94fc,	// (0x0004129e) cam4_indicators_pane_ParamLimits

0x94fc,	// (0x0004129e) cam4_indicators_pane

0x9518,	// (0x000412ba) main_camera4_pane_g1_ParamLimits

0x9518,	// (0x000412ba) main_camera4_pane_g1

0x9524,	// (0x000412c6) main_camera4_pane_g2_ParamLimits

0x9524,	// (0x000412c6) main_camera4_pane_g2

0x9524,	// (0x000412c6) main_camera4_pane_g3_ParamLimits

0x9524,	// (0x000412c6) main_camera4_pane_g3

0x9530,	// (0x000412d2) main_camera4_pane_g4_ParamLimits

0x9530,	// (0x000412d2) main_camera4_pane_g4

0x953c,	// (0x000412de) main_camera4_pane_g5_ParamLimits

0x953c,	// (0x000412de) main_camera4_pane_g5

0x0005,

0xf7ff,	// (0x000475a1) main_camera4_pane_g_ParamLimits

0xf7ff,	// (0x000475a1) main_camera4_pane_g

0x9556,	// (0x000412f8) main_camera4_pane_t1_ParamLimits

0x9556,	// (0x000412f8) main_camera4_pane_t1

0x0202,	// (0x00037fa4) bg_tb_trans_pane_cp06

0x95a8,	// (0x0004134a) cam4_indicators_pane_g1

0x95b9,	// (0x0004135b) cam4_indicators_pane_g2

0x0002,

0xf81a,	// (0x000475bc) cam4_indicators_pane_g

0x95d1,	// (0x00041373) cam4_indicators_pane_t1

0x95fb,	// (0x0004139d) main_video4_pane_g1_ParamLimits

0x95fb,	// (0x0004139d) main_video4_pane_g1

0x9607,	// (0x000413a9) main_video4_pane_g2_ParamLimits

0x9607,	// (0x000413a9) main_video4_pane_g2

0x9613,	// (0x000413b5) main_video4_pane_g3_ParamLimits

0x9613,	// (0x000413b5) main_video4_pane_g3

0x961f,	// (0x000413c1) main_video4_pane_g4_ParamLimits

0x961f,	// (0x000413c1) main_video4_pane_g4

0x0004,

0xf821,	// (0x000475c3) main_video4_pane_g_ParamLimits

0xf821,	// (0x000475c3) main_video4_pane_g

0x9641,	// (0x000413e3) vid4_indicators_pane_ParamLimits

0x9641,	// (0x000413e3) vid4_indicators_pane

0x9660,	// (0x00041402) video4_image_uncrop_cif_pane_ParamLimits

0x9660,	// (0x00041402) video4_image_uncrop_cif_pane

0x966f,	// (0x00041411) video4_image_uncrop_nhd_pane_ParamLimits

0x966f,	// (0x00041411) video4_image_uncrop_nhd_pane

0x94e3,	// (0x00041285) video4_image_uncrop_vga_pane_ParamLimits

0x94e3,	// (0x00041285) video4_image_uncrop_vga_pane

0x019b,	// (0x00037f3d) bg_tb_trans_pane_cp07

0x9688,	// (0x0004142a) vid4_indicators_pane_g1

0x969e,	// (0x00041440) vid4_indicators_pane_g2

0x96b2,	// (0x00041454) vid4_indicators_pane_g3

0x0004,

0xf82c,	// (0x000475ce) vid4_indicators_pane_g

0x96e3,	// (0x00041485) vid4_indicators_pane_t1

0x96fa,	// (0x0004149c) cam4_autofocus_pane_g1

0x9702,	// (0x000414a4) cam4_autofocus_pane_g2

0x970a,	// (0x000414ac) cam4_autofocus_pane_g3

0x0002,

0xf837,	// (0x000475d9) cam4_autofocus_pane_g

0x9712,	// (0x000414b4) cam4_autofocus_pane_g3_copy1

0x8e29,	// (0x00040bcb) video_down_pane_cp_t1

0x8e37,	// (0x00040bd9) video_down_pane_cp_t2

0x0001,

0xf7af,	// (0x00047551) video_down_pane_cp_t

0x01f4,	// (0x00037f96) popup_vitu2_window_ParamLimits

0x01f4,	// (0x00037f96) popup_vitu2_window

0x971a,	// (0x000414bc) aid_size_cell2_itu2_ParamLimits

0x971a,	// (0x000414bc) aid_size_cell2_itu2

0x973c,	// (0x000414de) aid_size_cell_itu2_ParamLimits

0x973c,	// (0x000414de) aid_size_cell_itu2

0x29ba,	// (0x0003a75c) bg_popup_window_pane_cp09_ParamLimits

0x29ba,	// (0x0003a75c) bg_popup_window_pane_cp09

0x9780,	// (0x00041522) field_vitu2_entry_pane_ParamLimits

0x9780,	// (0x00041522) field_vitu2_entry_pane

0x97a0,	// (0x00041542) grid_vitu2_function_pane_ParamLimits

0x97a0,	// (0x00041542) grid_vitu2_function_pane

0x97e4,	// (0x00041586) grid_vitu2_itu_pane_ParamLimits

0x97e4,	// (0x00041586) grid_vitu2_itu_pane

0x985a,	// (0x000415fc) cell_vitu2_itu_pane_ParamLimits

0x985a,	// (0x000415fc) cell_vitu2_itu_pane

0x9875,	// (0x00041617) cell_vitu2_function_pane_ParamLimits

0x9875,	// (0x00041617) cell_vitu2_function_pane

0x2c2b,	// (0x0003a9cd) bg_popup_call_pane_cp08_ParamLimits

0x2c2b,	// (0x0003a9cd) bg_popup_call_pane_cp08

0x2c42,	// (0x0003a9e4) field_vitu2_entry_pane_g1

0x2c4e,	// (0x0003a9f0) field_vitu2_entry_pane_g2

0x0002,

0xf83e,	// (0x000475e0) field_vitu2_entry_pane_g

0x42c2,	// (0x0003c064) field_vitu2_entry_pane_t1_ParamLimits

0x42c2,	// (0x0003c064) field_vitu2_entry_pane_t1

0x42f2,	// (0x0003c094) field_vitu2_entry_pane_t2_ParamLimits

0x42f2,	// (0x0003c094) field_vitu2_entry_pane_t2

0x0001,

0xf845,	// (0x000475e7) field_vitu2_entry_pane_t_ParamLimits

0xf845,	// (0x000475e7) field_vitu2_entry_pane_t

0x7ff8,	// (0x0003fd9a) bg_button_pane_cp010_ParamLimits

0x7ff8,	// (0x0003fd9a) bg_button_pane_cp010

0x98b9,	// (0x0004165b) cell_vitu2_itu_pane_g1

0x98df,	// (0x00041681) cell_vitu2_itu_pane_t1_ParamLimits

0x98df,	// (0x00041681) cell_vitu2_itu_pane_t1

0x430f,	// (0x0003c0b1) cell_vitu2_itu_pane_t2_ParamLimits

0x430f,	// (0x0003c0b1) cell_vitu2_itu_pane_t2

0x0002,

0xf84f,	// (0x000475f1) cell_vitu2_itu_pane_t_ParamLimits

0xf84f,	// (0x000475f1) cell_vitu2_itu_pane_t

0x019b,	// (0x00037f3d) bg_button_pane_cp011

0x992b,	// (0x000416cd) cell_vitu2_function_pane_g1

0xe654,	// (0x000463f6) main_myfav_hc_pane

0x92e3,	// (0x00041085) popup_image3_note_pane_ParamLimits

0x92e3,	// (0x00041085) popup_image3_note_pane

0x92f1,	// (0x00041093) popup_image3_tool_bar_pane_ParamLimits

0x92f1,	// (0x00041093) popup_image3_tool_bar_pane

0x4385,	// (0x0003c127) cell_vitu2_itu_pane_t3_ParamLimits

0x4385,	// (0x0003c127) cell_vitu2_itu_pane_t3

0xe654,	// (0x000463f6) bg_popup_trans_pane

0x2cae,	// (0x0003aa50) grid_image3_tool_bar_pane

0x2cb8,	// (0x0003aa5a) bg_popup_trans_pane_g1

0x067f,	// (0x00038421) bg_popup_trans_pane_g2

0x2cc0,	// (0x0003aa62) bg_popup_trans_pane_g3

0x2cc8,	// (0x0003aa6a) bg_popup_trans_pane_g4

0x2cd0,	// (0x0003aa72) bg_popup_trans_pane_g5

0x2cd8,	// (0x0003aa7a) bg_popup_trans_pane_g6

0x2ce0,	// (0x0003aa82) bg_popup_trans_pane_g7

0x2ce8,	// (0x0003aa8a) bg_popup_trans_pane_g8

0x065f,	// (0x00038401) bg_popup_trans_pane_g9

0x0008,

0xf856,	// (0x000475f8) bg_popup_trans_pane_g

0x2cf0,	// (0x0003aa92) cell_image3_tool_bar_pane_ParamLimits

0x2cf0,	// (0x0003aa92) cell_image3_tool_bar_pane

0x0240,	// (0x00037fe2) cell_image3_tool_bar_pane_g1

0xe654,	// (0x000463f6) bg_popup_trans_pane_cp1

0x2d06,	// (0x0003aaa8) popup_image3_note_pane_t1

0x2d14,	// (0x0003aab6) popup_image3_note_pane_t2

0x2d22,	// (0x0003aac4) popup_image3_note_pane_t3

0x0002,

0xf869,	// (0x0004760b) popup_image3_note_pane_t

0x2d32,	// (0x0003aad4) popup_image3_note_pane_t3_copy1

0x993f,	// (0x000416e1) bg_myfav_hc_instruction_pane_ParamLimits

0x993f,	// (0x000416e1) bg_myfav_hc_instruction_pane

0x9957,	// (0x000416f9) cell_myfav_contact_pane_ParamLimits

0x9957,	// (0x000416f9) cell_myfav_contact_pane

0x9971,	// (0x00041713) cell_myfav_contact_pane_cp1_ParamLimits

0x9971,	// (0x00041713) cell_myfav_contact_pane_cp1

0x9989,	// (0x0004172b) cell_myfav_contact_pane_cp2_ParamLimits

0x9989,	// (0x0004172b) cell_myfav_contact_pane_cp2

0x99a1,	// (0x00041743) cell_myfav_contact_pane_cp3_ParamLimits

0x99a1,	// (0x00041743) cell_myfav_contact_pane_cp3

0x99b8,	// (0x0004175a) cell_myfav_contact_pane_cp4_ParamLimits

0x99b8,	// (0x0004175a) cell_myfav_contact_pane_cp4

0x99ce,	// (0x00041770) cell_myfav_contact_pane_cp5_ParamLimits

0x99ce,	// (0x00041770) cell_myfav_contact_pane_cp5

0x99e2,	// (0x00041784) cell_myfav_contact_pane_cp6_ParamLimits

0x99e2,	// (0x00041784) cell_myfav_contact_pane_cp6

0x99f6,	// (0x00041798) cell_myfav_contact_pane_cp7_ParamLimits

0x99f6,	// (0x00041798) cell_myfav_contact_pane_cp7

0x2d40,	// (0x0003aae2) listscroll_gen_pane_cp05

0x9a0e,	// (0x000417b0) main_myfav_hc_pane_g1_ParamLimits

0x9a0e,	// (0x000417b0) main_myfav_hc_pane_g1

0x9a28,	// (0x000417ca) main_myfav_hc_pane_g2_ParamLimits

0x9a28,	// (0x000417ca) main_myfav_hc_pane_g2

0x0002,

0xf870,	// (0x00047612) main_myfav_hc_pane_g_ParamLimits

0xf870,	// (0x00047612) main_myfav_hc_pane_g

0x9a5a,	// (0x000417fc) main_myfav_hc_pane_t1_ParamLimits

0x9a5a,	// (0x000417fc) main_myfav_hc_pane_t1

0x2d49,	// (0x0003aaeb) main_myfav_hc_pane_t2_ParamLimits

0x2d49,	// (0x0003aaeb) main_myfav_hc_pane_t2

0x2d5b,	// (0x0003aafd) main_myfav_hc_pane_t3_ParamLimits

0x2d5b,	// (0x0003aafd) main_myfav_hc_pane_t3

0x9a71,	// (0x00041813) main_myfav_hc_pane_t4_ParamLimits

0x9a71,	// (0x00041813) main_myfav_hc_pane_t4

0x0004,

0xf877,	// (0x00047619) main_myfav_hc_pane_t_ParamLimits

0xf877,	// (0x00047619) main_myfav_hc_pane_t

0x0240,	// (0x00037fe2) bg_myfav_hc_instruction_pane_g1

0x2d6d,	// (0x0003ab0f) cell_myfav_contact_pane_g1_ParamLimits

0x2d6d,	// (0x0003ab0f) cell_myfav_contact_pane_g1

0x2d6d,	// (0x0003ab0f) cell_myfav_contact_pane_g2_ParamLimits

0x2d6d,	// (0x0003ab0f) cell_myfav_contact_pane_g2

0x2d79,	// (0x0003ab1b) cell_myfav_contact_pane_g3_ParamLimits

0x2d79,	// (0x0003ab1b) cell_myfav_contact_pane_g3

0x0210,	// (0x00037fb2) cell_myfav_contact_pane_g4_ParamLimits

0x0210,	// (0x00037fb2) cell_myfav_contact_pane_g4

0x2d86,	// (0x0003ab28) cell_myfav_contact_pane_g5_ParamLimits

0x2d86,	// (0x0003ab28) cell_myfav_contact_pane_g5

0x0004,

0xf882,	// (0x00047624) cell_myfav_contact_pane_g_ParamLimits

0xf882,	// (0x00047624) cell_myfav_contact_pane_g

0x9a42,	// (0x000417e4) main_myfav_hc_pane_g3_ParamLimits

0x9a42,	// (0x000417e4) main_myfav_hc_pane_g3

0x4091,	// (0x0003be33) popup_adpt_find_window

0x9a9b,	// (0x0004183d) afind_page_pane_ParamLimits

0x9a9b,	// (0x0004183d) afind_page_pane

0x9aa8,	// (0x0004184a) aid_size_cell_afind_ParamLimits

0x9aa8,	// (0x0004184a) aid_size_cell_afind

0x9ac2,	// (0x00041864) bg_popup_sub_pane_cp09_ParamLimits

0x9ac2,	// (0x00041864) bg_popup_sub_pane_cp09

0x9ad3,	// (0x00041875) find_pane_cp01_ParamLimits

0x9ad3,	// (0x00041875) find_pane_cp01

0x2d92,	// (0x0003ab34) grid_afind_control_pane_ParamLimits

0x2d92,	// (0x0003ab34) grid_afind_control_pane

0x9ae6,	// (0x00041888) grid_afind_pane_ParamLimits

0x9ae6,	// (0x00041888) grid_afind_pane

0x9b02,	// (0x000418a4) cell_afind_pane_ParamLimits

0x9b02,	// (0x000418a4) cell_afind_pane

0x0240,	// (0x00037fe2) afind_page_pane_g1

0x9b4a,	// (0x000418ec) afind_page_pane_g2

0x9b52,	// (0x000418f4) afind_page_pane_g3

0x0002,

0xf88d,	// (0x0004762f) afind_page_pane_g

0x9b5a,	// (0x000418fc) afind_page_pane_t1

0x2db8,	// (0x0003ab5a) cell_afind_grid_control_pane_ParamLimits

0x2db8,	// (0x0003ab5a) cell_afind_grid_control_pane

0x2dc7,	// (0x0003ab69) bg_button_pane_cp69_ParamLimits

0x2dc7,	// (0x0003ab69) bg_button_pane_cp69

0x9b68,	// (0x0004190a) cell_afind_pane_g1_ParamLimits

0x9b68,	// (0x0004190a) cell_afind_pane_g1

0x9b75,	// (0x00041917) cell_afind_pane_t1_ParamLimits

0x9b75,	// (0x00041917) cell_afind_pane_t1

0x2dd3,	// (0x0003ab75) bg_button_pane_cp72

0x2ddb,	// (0x0003ab7d) cell_afind_grid_control_pane_g1

0x7852,	// (0x0003f5f4) aid_image_placing_area_ParamLimits

0x7852,	// (0x0003f5f4) aid_image_placing_area

0x0202,	// (0x00037fa4) field_vitu_entry_pane_g1_ParamLimits

0x0202,	// (0x00037fa4) field_vitu_entry_pane_g1

0x0202,	// (0x00037fa4) field_vitu_entry_pane_g2_ParamLimits

0x0202,	// (0x00037fa4) field_vitu_entry_pane_g2

0x0001,

0x05ab,	// (0x0003834d) field_vitu_entry_pane_g_ParamLimits

0x05ab,	// (0x0003834d) field_vitu_entry_pane_g

0x2a36,	// (0x0003a7d8) cell_vitu_itu_pane_g1_ParamLimits

0x299d,	// (0x0003a73f) cell_vitu_itu_pane_t3_ParamLimits

0x299d,	// (0x0003a73f) cell_vitu_itu_pane_t3

0x2b84,	// (0x0003a926) mp4_progress_pane_t1_ParamLimits

0x2ba6,	// (0x0003a948) mp4_progress_pane_t2_ParamLimits

0xf7d3,	// (0x00047575) mp4_progress_pane_t_ParamLimits

0x2bc8,	// (0x0003a96a) mup_progress_pane_cp04_ParamLimits

0x9a85,	// (0x00041827) main_myfav_hc_pane_t5_ParamLimits

0x9a85,	// (0x00041827) main_myfav_hc_pane_t5

0x4f59,	// (0x0003ccfb) aid_zoom_text_primary

0x4091,	// (0x0003be33) popup_adpt_find_window_ParamLimits

0x019b,	// (0x00037f3d) main_cam_set_pane

0x950a,	// (0x000412ac) cam4_zoom_pane_ParamLimits

0x950a,	// (0x000412ac) cam4_zoom_pane

0x9b87,	// (0x00041929) main_cam_set_pane_g1_ParamLimits

0x9b87,	// (0x00041929) main_cam_set_pane_g1

0x9b95,	// (0x00041937) main_cam_set_pane_g2_ParamLimits

0x9b95,	// (0x00041937) main_cam_set_pane_g2

0x0001,

0xf894,	// (0x00047636) main_cam_set_pane_g_ParamLimits

0xf894,	// (0x00047636) main_cam_set_pane_g

0x9ba1,	// (0x00041943) main_cam_set_pane_t1_ParamLimits

0x9ba1,	// (0x00041943) main_cam_set_pane_t1

0x9bbd,	// (0x0004195f) main_cset_listscroll_pane_ParamLimits

0x9bbd,	// (0x0004195f) main_cset_listscroll_pane

0x9bf1,	// (0x00041993) main_cset_slider_pane_ParamLimits

0x9bf1,	// (0x00041993) main_cset_slider_pane

0x2dec,	// (0x0003ab8e) main_cset_list_pane_ParamLimits

0x2dec,	// (0x0003ab8e) main_cset_list_pane

0x2dfc,	// (0x0003ab9e) scroll_pane_cp028

0x9c12,	// (0x000419b4) aid_area_touch_slider

0x9c2e,	// (0x000419d0) cset_slider_pane

0x9c51,	// (0x000419f3) main_cset_slider_pane_g1

0x9c66,	// (0x00041a08) main_cset_slider_pane_g2

0x0011,

0xf899,	// (0x0004763b) main_cset_slider_pane_g

0x2e35,	// (0x0003abd7) main_cset_slider_pane_t1

0x9d22,	// (0x00041ac4) main_cset_slider_pane_t2

0x9d3c,	// (0x00041ade) main_cset_slider_pane_t3

0x9d56,	// (0x00041af8) main_cset_slider_pane_t4

0x9d70,	// (0x00041b12) main_cset_slider_pane_t5

0x9d8a,	// (0x00041b2c) main_cset_slider_pane_t6

0x9d9f,	// (0x00041b41) main_cset_slider_pane_t7

0x000e,

0xf8be,	// (0x00047660) main_cset_slider_pane_t

0x9ea3,	// (0x00041c45) cset_list_set_pane_ParamLimits

0x9ea3,	// (0x00041c45) cset_list_set_pane

0x2ecf,	// (0x0003ac71) aid_position_infowindow_above

0x2ed7,	// (0x0003ac79) aid_position_infowindow_below

0x43d7,	// (0x0003c179) cset_list_set_pane_g1_ParamLimits

0x43d7,	// (0x0003c179) cset_list_set_pane_g1

0x43e3,	// (0x0003c185) cset_list_set_pane_g3_ParamLimits

0x43e3,	// (0x0003c185) cset_list_set_pane_g3

0x0001,

0xf8dd,	// (0x0004767f) cset_list_set_pane_g_ParamLimits

0xf8dd,	// (0x0004767f) cset_list_set_pane_g

0x43f2,	// (0x0003c194) cset_list_set_pane_t1_ParamLimits

0x43f2,	// (0x0003c194) cset_list_set_pane_t1

0x019b,	// (0x00037f3d) list_highlight_pane_cp021_ParamLimits

0x019b,	// (0x00037f3d) list_highlight_pane_cp021

0x0ecd,	// (0x00038c6f) cset_slider_pane_g1

0x0edf,	// (0x00038c81) cset_slider_pane_g2

0x0ed6,	// (0x00038c78) cset_slider_pane_g3

0x0002,

0xf8e2,	// (0x00047684) cset_slider_pane_g

0x3232,	// (0x0003afd4) aid_area_touch_cam4_zoom

0x9eb4,	// (0x00041c56) cam4_zoom_cont_pane

0x9ebc,	// (0x00041c5e) cam4_zoom_pane_g1

0x9ec4,	// (0x00041c66) cam4_zoom_pane_g2

0x9ecc,	// (0x00041c6e) cam4_zoom_pane_g3

0x0002,

0xf8e9,	// (0x0004768b) cam4_zoom_pane_g

0x9ed4,	// (0x00041c76) cam4_zoom_cont_pane_g1

0x9edd,	// (0x00041c7f) cam4_zoom_cont_pane_g2

0x9ee6,	// (0x00041c88) cam4_zoom_cont_pane_g3

0x0002,

0xf8f0,	// (0x00047692) cam4_zoom_cont_pane_g

0x933a,	// (0x000410dc) call4_image_pane_ParamLimits

0x933a,	// (0x000410dc) call4_image_pane

0x939b,	// (0x0004113d) call4_windows_conf_pane_ParamLimits

0x93e2,	// (0x00041184) popup_call4_audio_in_window_ParamLimits

0x93e2,	// (0x00041184) popup_call4_audio_in_window

0xe654,	// (0x000463f6) bg_popup_call2_act_pane_cp02

0x2c09,	// (0x0003a9ab) call4_list_conf_pane

0x0240,	// (0x00037fe2) call4_image_pane_g1

0x0240,	// (0x00037fe2) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00046e51) call4_image_pane_g

0x2edf,	// (0x0003ac81) list_single_graphic_popup_conf4_pane_ParamLimits

0x2edf,	// (0x0003ac81) list_single_graphic_popup_conf4_pane

0xe654,	// (0x000463f6) list_highlight_pane_cp022

0x2ef4,	// (0x0003ac96) list_single_graphic_popup_conf4_pane_g1

0x0bb4,	// (0x00038956) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8f7,	// (0x00047699) list_single_graphic_popup_conf4_pane_g

0x2efc,	// (0x0003ac9e) list_single_graphic_popup_conf4_pane_t1

0x5e4c,	// (0x0003dbee) popup_vtel_slider_window_ParamLimits

0x5e4c,	// (0x0003dbee) popup_vtel_slider_window

0x2bdb,	// (0x0003a97d) dialer2_ne_pane_t2_ParamLimits

0x2bdb,	// (0x0003a97d) dialer2_ne_pane_t2

0x0001,

0xf7d8,	// (0x0004757a) dialer2_ne_pane_t_ParamLimits

0xf7d8,	// (0x0004757a) dialer2_ne_pane_t

0x019b,	// (0x00037f3d) bg_popup_sub_pane_cp010_ParamLimits

0x019b,	// (0x00037f3d) bg_popup_sub_pane_cp010

0x9eef,	// (0x00041c91) popup_vtel_slider_window_g1_ParamLimits

0x9eef,	// (0x00041c91) popup_vtel_slider_window_g1

0x9efb,	// (0x00041c9d) popup_vtel_slider_window_g2_ParamLimits

0x9efb,	// (0x00041c9d) popup_vtel_slider_window_g2

0x0003,

0xf8fc,	// (0x0004769e) popup_vtel_slider_window_g_ParamLimits

0xf8fc,	// (0x0004769e) popup_vtel_slider_window_g

0x9f43,	// (0x00041ce5) vtel_slider_pane_ParamLimits

0x9f43,	// (0x00041ce5) vtel_slider_pane

0x9f52,	// (0x00041cf4) vtel_slider_pane_g1_ParamLimits

0x9f52,	// (0x00041cf4) vtel_slider_pane_g1

0x9f5f,	// (0x00041d01) vtel_slider_pane_g2_ParamLimits

0x9f5f,	// (0x00041d01) vtel_slider_pane_g2

0x9f6c,	// (0x00041d0e) vtel_slider_pane_g3_ParamLimits

0x9f6c,	// (0x00041d0e) vtel_slider_pane_g3

0x9f52,	// (0x00041cf4) vtel_slider_pane_g4_ParamLimits

0x9f52,	// (0x00041cf4) vtel_slider_pane_g4

0x9f79,	// (0x00041d1b) vtel_slider_pane_g5_ParamLimits

0x9f79,	// (0x00041d1b) vtel_slider_pane_g5

0x0004,

0xf905,	// (0x000476a7) vtel_slider_pane_g_ParamLimits

0xf905,	// (0x000476a7) vtel_slider_pane_g

0x019b,	// (0x00037f3d) main_gallery2_pane

0x9762,	// (0x00041504) aid_size_row_itut2_dropdow_list_ParamLimits

0x9762,	// (0x00041504) aid_size_row_itut2_dropdow_list

0x97c2,	// (0x00041564) grid_vitu2_function_top_pane_ParamLimits

0x97c2,	// (0x00041564) grid_vitu2_function_top_pane

0x9818,	// (0x000415ba) popup_vitu2_dropdown_list_window_ParamLimits

0x9818,	// (0x000415ba) popup_vitu2_dropdown_list_window

0x9836,	// (0x000415d8) popup_vitu2_match_list_window

0x9f86,	// (0x00041d28) cell_vitu2_function_top_pane_ParamLimits

0x9f86,	// (0x00041d28) cell_vitu2_function_top_pane

0x9fa0,	// (0x00041d42) cell_vitu2_function_top_pane_cp01_ParamLimits

0x9fa0,	// (0x00041d42) cell_vitu2_function_top_pane_cp01

0x9fbc,	// (0x00041d5e) cell_vitu2_function_top_wide_pane_ParamLimits

0x9fbc,	// (0x00041d5e) cell_vitu2_function_top_wide_pane

0x019b,	// (0x00037f3d) bg_button_pane_cp012

0x9fda,	// (0x00041d7c) cell_vitu2_function_top_pane_g1

0x9fee,	// (0x00041d90) bg_button_pane_cp013_ParamLimits

0x9fee,	// (0x00041d90) bg_button_pane_cp013

0xa00a,	// (0x00041dac) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xa00a,	// (0x00041dac) cell_vitu2_function_top_wide_pane_g1

0x01f4,	// (0x00037f96) bg_popup_sub_pane_cp20

0xa022,	// (0x00041dc4) list_vitu2_match_list_pane

0x2cb8,	// (0x0003aa5a) bg_popup_sub_pane_cp20_g1

0x2cc0,	// (0x0003aa62) bg_popup_sub_pane_cp20_g2

0x067f,	// (0x00038421) bg_popup_sub_pane_cp20_g3

0x2cc8,	// (0x0003aa6a) bg_popup_sub_pane_cp20_g4

0x065f,	// (0x00038401) bg_popup_sub_pane_cp20_g5

0x2f12,	// (0x0003acb4) bg_popup_sub_pane_cp20_g6

0x2cd8,	// (0x0003aa7a) bg_popup_sub_pane_cp20_g7

0x2ce0,	// (0x0003aa82) bg_popup_sub_pane_cp20_g8

0x2ce8,	// (0x0003aa8a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf910,	// (0x000476b2) bg_popup_sub_pane_cp20_g

0xa03a,	// (0x00041ddc) list_vitu2_match_list_item_pane_ParamLimits

0xa03a,	// (0x00041ddc) list_vitu2_match_list_item_pane

0xa04c,	// (0x00041dee) list_vitu2_match_list_item_pane_t1

0xe654,	// (0x000463f6) bg_popup_sub_pane_cp21

0x0453,	// (0x000381f5) grid_vitu2_dropdown_list_pane

0xa05a,	// (0x00041dfc) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xa05a,	// (0x00041dfc) cell_vitu2_dropdown_list_char_pane

0xa07e,	// (0x00041e20) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xa07e,	// (0x00041e20) cell_vitu2_dropdown_list_ctrl_pane

0x2f2c,	// (0x0003acce) cell_vitu2_dropdown_list_char_pane_g1

0x2f23,	// (0x0003acc5) cell_vitu2_dropdown_list_char_pane_g2

0x2f1a,	// (0x0003acbc) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf923,	// (0x000476c5) cell_vitu2_dropdown_list_char_pane_g

0xa0a8,	// (0x00041e4a) cell_vitu2_dropdown_list_char_pane_t1

0xa0b6,	// (0x00041e58) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xa0b6,	// (0x00041e58) cell_vitu2_dropdown_list_ctrl_pane_g1

0xa0c6,	// (0x00041e68) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xa0c6,	// (0x00041e68) cell_vitu2_dropdown_list_ctrl_pane_g2

0xa0d7,	// (0x00041e79) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xa0d7,	// (0x00041e79) cell_vitu2_dropdown_list_ctrl_pane_g3

0xa0e7,	// (0x00041e89) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xa0e7,	// (0x00041e89) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0202,	// (0x00037fa4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0202,	// (0x00037fa4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf92a,	// (0x000476cc) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf92a,	// (0x000476cc) cell_vitu2_dropdown_list_ctrl_pane_g

0xa100,	// (0x00041ea2) aid_size_cell_gallery2_ParamLimits

0xa100,	// (0x00041ea2) aid_size_cell_gallery2

0xa11a,	// (0x00041ebc) grid_gallery2_pane_ParamLimits

0xa11a,	// (0x00041ebc) grid_gallery2_pane

0xa131,	// (0x00041ed3) scroll_pane_cp029_ParamLimits

0xa131,	// (0x00041ed3) scroll_pane_cp029

0xa141,	// (0x00041ee3) cell_gallery2_pane_ParamLimits

0xa141,	// (0x00041ee3) cell_gallery2_pane

0x2f35,	// (0x0003acd7) cell_gallery2_pane_g2

0xa198,	// (0x00041f3a) cell_gallery2_pane_g3

0x2f3d,	// (0x0003acdf) cell_gallery2_pane_g4

0x2f45,	// (0x0003ace7) cell_gallery2_pane_g5

0x0453,	// (0x000381f5) grid_highlight_pane_cp10

0x9836,	// (0x000415d8) popup_vitu2_match_list_window_ParamLimits

0x984a,	// (0x000415ec) popup_vitu2_query_window_ParamLimits

0x984a,	// (0x000415ec) popup_vitu2_query_window

0xe654,	// (0x000463f6) bg_vitu2_candi_button_pane

0x2f2c,	// (0x0003acce) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x2f23,	// (0x0003acc5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x2f1a,	// (0x0003acbc) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x4407,	// (0x0003c1a9) bg_button_pane_cp015

0xa1a0,	// (0x00041f42) bg_button_pane_cp016

0xa1ac,	// (0x00041f4e) bg_button_pane_cp017

0x0e5b,	// (0x00038bfd) bg_popup_sub_pane_cp22

0x2f4d,	// (0x0003acef) popup_vitu2_query_window_g1

0x4442,	// (0x0003c1e4) popup_vitu2_query_window_g2

0x0002,

0xf935,	// (0x000476d7) popup_vitu2_query_window_g

0x445a,	// (0x0003c1fc) popup_vitu2_query_window_t1_ParamLimits

0x445a,	// (0x0003c1fc) popup_vitu2_query_window_t1

0x448d,	// (0x0003c22f) popup_vitu2_query_window_t2_ParamLimits

0x448d,	// (0x0003c22f) popup_vitu2_query_window_t2

0x449f,	// (0x0003c241) popup_vitu2_query_window_t3_ParamLimits

0x449f,	// (0x0003c241) popup_vitu2_query_window_t3

0xa1d3,	// (0x00041f75) popup_vitu2_query_window_t4_ParamLimits

0xa1d3,	// (0x00041f75) popup_vitu2_query_window_t4

0xa1e7,	// (0x00041f89) popup_vitu2_query_window_t5_ParamLimits

0xa1e7,	// (0x00041f89) popup_vitu2_query_window_t5

0x0006,

0xf93c,	// (0x000476de) popup_vitu2_query_window_t_ParamLimits

0xf93c,	// (0x000476de) popup_vitu2_query_window_t

0x2de4,	// (0x0003ab86) main_cset_text_pane

0x9c12,	// (0x000419b4) aid_area_touch_slider_ParamLimits

0x9c2e,	// (0x000419d0) cset_slider_pane_ParamLimits

0x9c51,	// (0x000419f3) main_cset_slider_pane_g1_ParamLimits

0x9c66,	// (0x00041a08) main_cset_slider_pane_g2_ParamLimits

0x2e05,	// (0x0003aba7) main_cset_slider_pane_g3_ParamLimits

0x2e05,	// (0x0003aba7) main_cset_slider_pane_g3

0x9c7b,	// (0x00041a1d) main_cset_slider_pane_g4_ParamLimits

0x9c7b,	// (0x00041a1d) main_cset_slider_pane_g4

0x9c8a,	// (0x00041a2c) main_cset_slider_pane_g5_ParamLimits

0x9c8a,	// (0x00041a2c) main_cset_slider_pane_g5

0x9c96,	// (0x00041a38) main_cset_slider_pane_g6_ParamLimits

0x9c96,	// (0x00041a38) main_cset_slider_pane_g6

0xf899,	// (0x0004763b) main_cset_slider_pane_g_ParamLimits

0x2e35,	// (0x0003abd7) main_cset_slider_pane_t1_ParamLimits

0x9d22,	// (0x00041ac4) main_cset_slider_pane_t2_ParamLimits

0x9d3c,	// (0x00041ade) main_cset_slider_pane_t3_ParamLimits

0x9d56,	// (0x00041af8) main_cset_slider_pane_t4_ParamLimits

0x9d70,	// (0x00041b12) main_cset_slider_pane_t5_ParamLimits

0x9d8a,	// (0x00041b2c) main_cset_slider_pane_t6_ParamLimits

0x9d9f,	// (0x00041b41) main_cset_slider_pane_t7_ParamLimits

0x9dc9,	// (0x00041b6b) main_cset_slider_pane_t8_ParamLimits

0x9dc9,	// (0x00041b6b) main_cset_slider_pane_t8

0x9df1,	// (0x00041b93) main_cset_slider_pane_t9_ParamLimits

0x9df1,	// (0x00041b93) main_cset_slider_pane_t9

0x9e19,	// (0x00041bbb) main_cset_slider_pane_t10_ParamLimits

0x9e19,	// (0x00041bbb) main_cset_slider_pane_t10

0x9e41,	// (0x00041be3) main_cset_slider_pane_t11_ParamLimits

0x9e41,	// (0x00041be3) main_cset_slider_pane_t11

0x9e69,	// (0x00041c0b) main_cset_slider_pane_t12_ParamLimits

0x9e69,	// (0x00041c0b) main_cset_slider_pane_t12

0x9e86,	// (0x00041c28) main_cset_slider_pane_t13_ParamLimits

0x9e86,	// (0x00041c28) main_cset_slider_pane_t13

0xf8be,	// (0x00047660) main_cset_slider_pane_t_ParamLimits

0xe654,	// (0x000463f6) bg_popup_sub_pane_cp011

0x2f59,	// (0x0003acfb) main_cset_text_pane_g1

0x2f61,	// (0x0003ad03) main_cset_text_pane_t1

0x2f6f,	// (0x0003ad11) main_cset_text_pane_t2

0x2f7d,	// (0x0003ad1f) main_cset_text_pane_t3

0x2f8b,	// (0x0003ad2d) main_cset_text_pane_t4

0x2f99,	// (0x0003ad3b) main_cset_text_pane_t5

0x2fa7,	// (0x0003ad49) main_cset_text_pane_t6

0x2fb5,	// (0x0003ad57) main_cset_text_pane_t7

0x0006,

0xf94b,	// (0x000476ed) main_cset_text_pane_t

0xe654,	// (0x000463f6) main_cam4_burst_pane

0xe654,	// (0x000463f6) main_cam5_pane

0x2da6,	// (0x0003ab48) bg_button_pane_cp019

0x2daf,	// (0x0003ab51) bg_button_pane_cp020

0x2e11,	// (0x0003abb3) main_cset_slider_pane_g7_ParamLimits

0x2e11,	// (0x0003abb3) main_cset_slider_pane_g7

0x2e1d,	// (0x0003abbf) main_cset_slider_pane_g8_ParamLimits

0x2e1d,	// (0x0003abbf) main_cset_slider_pane_g8

0x9caa,	// (0x00041a4c) main_cset_slider_pane_g9_ParamLimits

0x9caa,	// (0x00041a4c) main_cset_slider_pane_g9

0x9cb6,	// (0x00041a58) main_cset_slider_pane_g10_ParamLimits

0x9cb6,	// (0x00041a58) main_cset_slider_pane_g10

0x9cc2,	// (0x00041a64) main_cset_slider_pane_g11_ParamLimits

0x9cc2,	// (0x00041a64) main_cset_slider_pane_g11

0x9cce,	// (0x00041a70) main_cset_slider_pane_g12_ParamLimits

0x9cce,	// (0x00041a70) main_cset_slider_pane_g12

0x9cda,	// (0x00041a7c) main_cset_slider_pane_g13_ParamLimits

0x9cda,	// (0x00041a7c) main_cset_slider_pane_g13

0x9ce6,	// (0x00041a88) main_cset_slider_pane_g14_ParamLimits

0x9ce6,	// (0x00041a88) main_cset_slider_pane_g14

0x9cf2,	// (0x00041a94) main_cset_slider_pane_g15_ParamLimits

0x9cf2,	// (0x00041a94) main_cset_slider_pane_g15

0x2e5d,	// (0x0003abff) main_cset_slider_pane_t14_ParamLimits

0x2e5d,	// (0x0003abff) main_cset_slider_pane_t14

0x2e96,	// (0x0003ac38) main_cset_slider_pane_t15_ParamLimits

0x2e96,	// (0x0003ac38) main_cset_slider_pane_t15

0xa1fb,	// (0x00041f9d) aid_cam4_burst_size_cell_ParamLimits

0xa1fb,	// (0x00041f9d) aid_cam4_burst_size_cell

0xa217,	// (0x00041fb9) grid_cam4_burst_pane_ParamLimits

0xa217,	// (0x00041fb9) grid_cam4_burst_pane

0xa249,	// (0x00041feb) linegrid_cam4_burst_pane_ParamLimits

0xa249,	// (0x00041feb) linegrid_cam4_burst_pane

0xa267,	// (0x00042009) scroll_pane_cp30_ParamLimits

0xa267,	// (0x00042009) scroll_pane_cp30

0xa273,	// (0x00042015) cell_cam4_burst_pane_ParamLimits

0xa273,	// (0x00042015) cell_cam4_burst_pane

0x2fc3,	// (0x0003ad65) linegrid_cam4_burst_pane_g1_ParamLimits

0x2fc3,	// (0x0003ad65) linegrid_cam4_burst_pane_g1

0xa2b3,	// (0x00042055) linegrid_cam4_burst_pane_g2_ParamLimits

0xa2b3,	// (0x00042055) linegrid_cam4_burst_pane_g2

0x2fd0,	// (0x0003ad72) linegrid_cam4_burst_pane_g3_ParamLimits

0x2fd0,	// (0x0003ad72) linegrid_cam4_burst_pane_g3

0x0002,

0xf95a,	// (0x000476fc) linegrid_cam4_burst_pane_g_ParamLimits

0xf95a,	// (0x000476fc) linegrid_cam4_burst_pane_g

0xa2c4,	// (0x00042066) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xa2c4,	// (0x00042066) linegrid_cam4_burst_pane_g3_copy1

0x2fdd,	// (0x0003ad7f) linegrid_cam4_burst_pane_g4_ParamLimits

0x2fdd,	// (0x0003ad7f) linegrid_cam4_burst_pane_g4

0xa2de,	// (0x00042080) linegrid_cam4_burst_pane_g5_ParamLimits

0xa2de,	// (0x00042080) linegrid_cam4_burst_pane_g5

0xa2ef,	// (0x00042091) linegrid_cam4_burst_pane_g6_ParamLimits

0xa2ef,	// (0x00042091) linegrid_cam4_burst_pane_g6

0x2fea,	// (0x0003ad8c) linegrid_cam4_burst_pane_g7_ParamLimits

0x2fea,	// (0x0003ad8c) linegrid_cam4_burst_pane_g7

0xa306,	// (0x000420a8) cell_cam4_burst_pane_g1

0x3003,	// (0x0003ada5) main_cam5_pane_t1_ParamLimits

0x3003,	// (0x0003ada5) main_cam5_pane_t1

0x3015,	// (0x0003adb7) main_cam5_pane_t2_ParamLimits

0x3015,	// (0x0003adb7) main_cam5_pane_t2

0x3027,	// (0x0003adc9) main_cam5_pane_t3_ParamLimits

0x3027,	// (0x0003adc9) main_cam5_pane_t3

0x3039,	// (0x0003addb) main_cam5_pane_t4_ParamLimits

0x3039,	// (0x0003addb) main_cam5_pane_t4

0x3051,	// (0x0003adf3) main_cam5_pane_t5_ParamLimits

0x3051,	// (0x0003adf3) main_cam5_pane_t5

0x3065,	// (0x0003ae07) main_cam5_pane_t6_ParamLimits

0x3065,	// (0x0003ae07) main_cam5_pane_t6

0x3079,	// (0x0003ae1b) main_cam5_pane_t7_ParamLimits

0x3079,	// (0x0003ae1b) main_cam5_pane_t7

0x308b,	// (0x0003ae2d) main_cam5_pane_t8_ParamLimits

0x308b,	// (0x0003ae2d) main_cam5_pane_t8

0x30a9,	// (0x0003ae4b) main_cam5_pane_t9_ParamLimits

0x30a9,	// (0x0003ae4b) main_cam5_pane_t9

0x30bb,	// (0x0003ae5d) main_cam5_pane_t10_ParamLimits

0x30bb,	// (0x0003ae5d) main_cam5_pane_t10

0x30cd,	// (0x0003ae6f) main_cam5_pane_t11_ParamLimits

0x30cd,	// (0x0003ae6f) main_cam5_pane_t11

0x30e1,	// (0x0003ae83) main_cam5_pane_t12_ParamLimits

0x30e1,	// (0x0003ae83) main_cam5_pane_t12

0x30f8,	// (0x0003ae9a) main_cam5_pane_t13_ParamLimits

0x30f8,	// (0x0003ae9a) main_cam5_pane_t13

0x000c,

0xf966,	// (0x00047708) main_cam5_pane_t_ParamLimits

0xf966,	// (0x00047708) main_cam5_pane_t

0x50e9,	// (0x0003ce8b) popup_scut_keymap_window_ParamLimits

0x50e9,	// (0x0003ce8b) popup_scut_keymap_window

0xa319,	// (0x000420bb) aid_size_cell_brow_shortcut

0x0453,	// (0x000381f5) bg_popup_window_pane_cp010

0xa325,	// (0x000420c7) grid_scut_pane

0xa331,	// (0x000420d3) cell_scut_pane_ParamLimits

0xa331,	// (0x000420d3) cell_scut_pane

0xa34c,	// (0x000420ee) cell_scut_pane_g1

0x311b,	// (0x0003aebd) cell_scut_pane_t1

0x312a,	// (0x0003aecc) cell_scut_pane_t2

0xa355,	// (0x000420f7) cell_scut_pane_t3

0x0002,

0xf981,	// (0x00047723) cell_scut_pane_t

0x84b6,	// (0x00040258) main_mup3_pane_g8_ParamLimits

0x84b6,	// (0x00040258) main_mup3_pane_g8

0x9770,	// (0x00041512) area_vitu2_query_pane_ParamLimits

0x9770,	// (0x00041512) area_vitu2_query_pane

0x441c,	// (0x0003c1be) input_focus_pane_cp08

0x3139,	// (0x0003aedb) area_vitu2_query_pane_g1

0x451d,	// (0x0003c2bf) area_vitu2_query_pane_g2

0x0001,

0xf988,	// (0x0004772a) area_vitu2_query_pane_g

0xa363,	// (0x00042105) area_vitu2_query_pane_t1_ParamLimits

0xa363,	// (0x00042105) area_vitu2_query_pane_t1

0xa377,	// (0x00042119) area_vitu2_query_pane_t2_ParamLimits

0xa377,	// (0x00042119) area_vitu2_query_pane_t2

0x452e,	// (0x0003c2d0) area_vitu2_query_pane_t3_ParamLimits

0x452e,	// (0x0003c2d0) area_vitu2_query_pane_t3

0x4556,	// (0x0003c2f8) area_vitu2_query_pane_t4_ParamLimits

0x4556,	// (0x0003c2f8) area_vitu2_query_pane_t4

0x457e,	// (0x0003c320) area_vitu2_query_pane_t5_ParamLimits

0x457e,	// (0x0003c320) area_vitu2_query_pane_t5

0x45a6,	// (0x0003c348) area_vitu2_query_pane_t6_ParamLimits

0x45a6,	// (0x0003c348) area_vitu2_query_pane_t6

0x0006,

0xf98d,	// (0x0004772f) area_vitu2_query_pane_t_ParamLimits

0xf98d,	// (0x0004772f) area_vitu2_query_pane_t

0xa1a0,	// (0x00041f42) bg_button_pane_cp018

0xa38b,	// (0x0004212d) bg_button_pane_cp021

0x45f2,	// (0x0003c394) bg_button_pane_cp022

0x4615,	// (0x0003c3b7) input_focus_pane_cp09

0x7180,	// (0x0003ef22) aid_size_touch_mv_arrow_left

0x71ab,	// (0x0003ef4d) aid_size_touch_mv_arrow_right

0x9d0a,	// (0x00041aac) main_cset_slider_pane_g16_ParamLimits

0x9d0a,	// (0x00041aac) main_cset_slider_pane_g16

0x9d16,	// (0x00041ab8) main_cset_slider_pane_g17_ParamLimits

0x9d16,	// (0x00041ab8) main_cset_slider_pane_g17

0xa306,	// (0x000420a8) cell_cam4_burst_pane_g1_ParamLimits

0xe654,	// (0x000463f6) compa_mode_pane

0x9f07,	// (0x00041ca9) popup_vtel_slider_window_g3_ParamLimits

0x9f07,	// (0x00041ca9) popup_vtel_slider_window_g3

0x9f1b,	// (0x00041cbd) popup_vtel_slider_window_g4_ParamLimits

0x9f1b,	// (0x00041cbd) popup_vtel_slider_window_g4

0x9f2f,	// (0x00041cd1) popup_vtel_slider_window_t1_ParamLimits

0x9f2f,	// (0x00041cd1) popup_vtel_slider_window_t1

0xe654,	// (0x000463f6) main_cl_pane

0x7d42,	// (0x0003fae4) popup_imed_adjust2_window_ParamLimits

0x0e5b,	// (0x00038bfd) bg_tb_trans_pane_cp05_ParamLimits

0x292a,	// (0x0003a6cc) popup_imed_adjust2_window_g1_ParamLimits

0x2939,	// (0x0003a6db) popup_imed_adjust2_window_g2_ParamLimits

0x2939,	// (0x0003a6db) popup_imed_adjust2_window_g2

0x2945,	// (0x0003a6e7) popup_imed_adjust2_window_g3_ParamLimits

0x2945,	// (0x0003a6e7) popup_imed_adjust2_window_g3

0x0002,

0xf70d,	// (0x000474af) popup_imed_adjust2_window_g_ParamLimits

0xf70d,	// (0x000474af) popup_imed_adjust2_window_g

0x2951,	// (0x0003a6f3) popup_imed_adjust2_window_t1_ParamLimits

0x2969,	// (0x0003a70b) slider_imed_adjust_pane_ParamLimits

0x297d,	// (0x0003a71f) slider_imed_adjust_pane_g1_ParamLimits

0x298d,	// (0x0003a72f) slider_imed_adjust_pane_g2_ParamLimits

0x29dc,	// (0x0003a77e) slider_imed_adjust_pane_g3_ParamLimits

0x29ed,	// (0x0003a78f) slider_imed_adjust_pane_g4_ParamLimits

0xf714,	// (0x000474b6) slider_imed_adjust_pane_g_ParamLimits

0x94b3,	// (0x00041255) aid_touch_area_cam4_ParamLimits

0x94b3,	// (0x00041255) aid_touch_area_cam4

0x94c3,	// (0x00041265) battery_pane_cp01

0x954a,	// (0x000412ec) main_camera4_pane_g6_ParamLimits

0x954a,	// (0x000412ec) main_camera4_pane_g6

0x9568,	// (0x0004130a) main_camera4_pane_t2_ParamLimits

0x9568,	// (0x0004130a) main_camera4_pane_t2

0x0001,

0xf80c,	// (0x000475ae) main_camera4_pane_t_ParamLimits

0xf80c,	// (0x000475ae) main_camera4_pane_t

0x95eb,	// (0x0004138d) aid_touch_area_vid4_ParamLimits

0x95eb,	// (0x0004138d) aid_touch_area_vid4

0x962b,	// (0x000413cd) main_video4_pane_g5_ParamLimits

0x962b,	// (0x000413cd) main_video4_pane_g5

0x9651,	// (0x000413f3) vid4_progress_pane_ParamLimits

0x9651,	// (0x000413f3) vid4_progress_pane

0x2e29,	// (0x0003abcb) main_cset_slider_pane_g18_ParamLimits

0x2e29,	// (0x0003abcb) main_cset_slider_pane_g18

0x2ff7,	// (0x0003ad99) cell_cam4_burst_pane_g2_ParamLimits

0x2ff7,	// (0x0003ad99) cell_cam4_burst_pane_g2

0x0001,

0xf961,	// (0x00047703) cell_cam4_burst_pane_g_ParamLimits

0xf961,	// (0x00047703) cell_cam4_burst_pane_g

0xa397,	// (0x00042139) bg_cl_pane_ParamLimits

0xa397,	// (0x00042139) bg_cl_pane

0xa3a3,	// (0x00042145) cl_header_pane_ParamLimits

0xa3a3,	// (0x00042145) cl_header_pane

0xa3af,	// (0x00042151) cl_listscroll_pane_ParamLimits

0xa3af,	// (0x00042151) cl_listscroll_pane

0x31e1,	// (0x0003af83) bg_cl_pane_g1

0x31e9,	// (0x0003af8b) bg_cl_pane_g2

0x31f1,	// (0x0003af93) bg_cl_pane_g3

0x31f9,	// (0x0003af9b) bg_cl_pane_g4

0x3201,	// (0x0003afa3) bg_cl_pane_g5

0x3209,	// (0x0003afab) bg_cl_pane_g6

0x3211,	// (0x0003afb3) bg_cl_pane_g7

0x3219,	// (0x0003afbb) bg_cl_pane_g8

0x3221,	// (0x0003afc3) bg_cl_pane_g9

0x0008,

0xf99c,	// (0x0004773e) bg_cl_pane_g

0xa3bb,	// (0x0004215d) aid_height_cl_leading_ParamLimits

0xa3bb,	// (0x0004215d) aid_height_cl_leading

0xa3c7,	// (0x00042169) aid_height_cl_text_ParamLimits

0xa3c7,	// (0x00042169) aid_height_cl_text

0x01f4,	// (0x00037f96) bg_cl_header_pane_ParamLimits

0x01f4,	// (0x00037f96) bg_cl_header_pane

0xa3df,	// (0x00042181) cl_header_pane_g1_ParamLimits

0xa3df,	// (0x00042181) cl_header_pane_g1

0xa3ec,	// (0x0004218e) cl_header_pane_t1_ParamLimits

0xa3ec,	// (0x0004218e) cl_header_pane_t1

0x3229,	// (0x0003afcb) cl_list_pane

0x2dfc,	// (0x0003ab9e) hc_scroll_pane_cp01

0x065f,	// (0x00038401) bg_cl_header_pane_g1

0x2cb8,	// (0x0003aa5a) bg_cl_header_pane_g2

0x067f,	// (0x00038421) bg_cl_header_pane_g3

0x2cc8,	// (0x0003aa6a) bg_cl_header_pane_g4

0x2cc0,	// (0x0003aa62) bg_cl_header_pane_g5

0x2f12,	// (0x0003acb4) bg_cl_header_pane_g6

0x2ce0,	// (0x0003aa82) bg_cl_header_pane_g7

0x2ce8,	// (0x0003aa8a) bg_cl_header_pane_g8

0x2cd8,	// (0x0003aa7a) bg_cl_header_pane_g9

0x0008,

0xf9af,	// (0x00047751) bg_cl_header_pane_g

0xa3fe,	// (0x000421a0) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xa3fe,	// (0x000421a0) hc_cl_list_double_graphic_heading_pane

0xa40e,	// (0x000421b0) hc_cl_list_single_graphic_pane_ParamLimits

0xa40e,	// (0x000421b0) hc_cl_list_single_graphic_pane

0xa420,	// (0x000421c2) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xa420,	// (0x000421c2) hc_cl_list_single_graphic_pane_g1

0xa42c,	// (0x000421ce) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xa42c,	// (0x000421ce) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9c2,	// (0x00047764) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9c2,	// (0x00047764) hc_cl_list_single_graphic_pane_g

0xa440,	// (0x000421e2) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xa440,	// (0x000421e2) hc_cl_list_single_graphic_pane_t1

0xa420,	// (0x000421c2) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xa420,	// (0x000421c2) hc_cl_list_double_graphic_heading_pane_g1

0xa455,	// (0x000421f7) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xa455,	// (0x000421f7) hc_cl_list_double_graphic_heading_pane_g2

0xa469,	// (0x0004220b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xa469,	// (0x0004220b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9c7,	// (0x00047769) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9c7,	// (0x00047769) hc_cl_list_double_graphic_heading_pane_g

0xa47d,	// (0x0004221f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xa47d,	// (0x0004221f) hc_cl_list_double_graphic_heading_pane_t1

0xa492,	// (0x00042234) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xa492,	// (0x00042234) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9ce,	// (0x00047770) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9ce,	// (0x00047770) hc_cl_list_double_graphic_heading_pane_t

0xa4af,	// (0x00042251) vid4_progress_pane_g1

0xa4bf,	// (0x00042261) vid4_progress_pane_g2

0xa4cf,	// (0x00042271) vid4_progress_pane_g3

0xa4e1,	// (0x00042283) vid4_progress_pane_g4

0x0004,

0xf9d3,	// (0x00047775) vid4_progress_pane_g

0xa4ff,	// (0x000422a1) vid4_progress_pane_t1

0xa519,	// (0x000422bb) vid4_progress_pane_t2

0x0002,

0xf9de,	// (0x00047780) vid4_progress_pane_t

0xa547,	// (0x000422e9) wait_bar_pane_cp07

0x2273,	// (0x0003a015) blid_firmament_pane_ParamLimits

0x22b6,	// (0x0003a058) popup_blid_sat_info2_window_g1

0x22da,	// (0x0003a07c) popup_blid_sat_info2_window_t3

0x22e8,	// (0x0003a08a) popup_blid_sat_info2_window_t4

0x22f6,	// (0x0003a098) popup_blid_sat_info2_window_t5

0x2304,	// (0x0003a0a6) popup_blid_sat_info2_window_t6

0x2314,	// (0x0003a0b6) popup_blid_sat_info2_window_t7

0x2322,	// (0x0003a0c4) popup_blid_sat_info2_window_t8

0x2330,	// (0x0003a0d2) popup_blid_sat_info2_window_t9

0x233e,	// (0x0003a0e0) popup_blid_sat_info2_window_t10

0x2405,	// (0x0003a1a7) aid_firma_cardinal_ParamLimits

0x2419,	// (0x0003a1bb) blid_firmament_pane_t1_ParamLimits

0x2430,	// (0x0003a1d2) blid_firmament_pane_t2_ParamLimits

0x2447,	// (0x0003a1e9) blid_firmament_pane_t3_ParamLimits

0x245e,	// (0x0003a200) blid_firmament_pane_t4_ParamLimits

0xf606,	// (0x000473a8) blid_firmament_pane_t_ParamLimits

0x2475,	// (0x0003a217) blid_sat_info_pane_ParamLimits

0x019b,	// (0x00037f3d) main_cam_set_pane_ParamLimits

0x8b7e,	// (0x00040920) aid_size_cell_colour_35_ParamLimits

0x8b98,	// (0x0004093a) aid_size_cell_colour_112_ParamLimits

0x8baf,	// (0x00040951) aid_size_cell_effect_ParamLimits

0x019b,	// (0x00037f3d) bg_tb_trans_pane_cp02_ParamLimits

0x0985,	// (0x00038727) heading_imed_pane_ParamLimits

0x8bc9,	// (0x0004096b) listscroll_imed_pane_ParamLimits

0x175e,	// (0x00039500) popup_call2_audio_first_window_g5_ParamLimits

0x175e,	// (0x00039500) popup_call2_audio_first_window_g5

0x91b1,	// (0x00040f53) aid_size_touch_image3_arrow_left_ParamLimits

0x91b1,	// (0x00040f53) aid_size_touch_image3_arrow_left

0x91c7,	// (0x00040f69) aid_size_touch_image3_arrow_right_ParamLimits

0x91c7,	// (0x00040f69) aid_size_touch_image3_arrow_right

0xa532,	// (0x000422d4) vid4_progress_pane_t3

0x8d44,	// (0x00040ae6) main_hwr_training_symbol_option_pane_ParamLimits

0x8d44,	// (0x00040ae6) main_hwr_training_symbol_option_pane

0x2ae4,	// (0x0003a886) popup_hwr_training_preview_window_ParamLimits

0x2ae4,	// (0x0003a886) popup_hwr_training_preview_window

0x8da5,	// (0x00040b47) hwr_training_navi_pane_g5_ParamLimits

0x8da5,	// (0x00040b47) hwr_training_navi_pane_g5

0x2ca6,	// (0x0003aa48) popup_char_count_window

0x01f4,	// (0x00037f96) bg_popup_sub_pane_cp20_ParamLimits

0xa022,	// (0x00041dc4) list_vitu2_match_list_pane_ParamLimits

0xa02e,	// (0x00041dd0) vitu2_page_scroll_pane_ParamLimits

0xa02e,	// (0x00041dd0) vitu2_page_scroll_pane

0xd233,	// (0x00044fd5) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd233,	// (0x00044fd5) list_single_hwr_training_symbol_option_pane

0xd246,	// (0x00044fe8) list_single_hwr_training_symbol_option_pane_g1

0xd24e,	// (0x00044ff0) list_single_hwr_training_symbol_option_pane_t1

0xd25c,	// (0x00044ffe) bg_button_pane_cp023

0xd265,	// (0x00045007) bg_button_pane_cp024

0xd298,	// (0x0004503a) vitu2_page_scroll_pane_g1

0xd2a0,	// (0x00045042) vitu2_page_scroll_pane_g2

0x0001,

0xf9e5,	// (0x00047787) vitu2_page_scroll_pane_g

0xd2a8,	// (0x0004504a) vitu2_page_scroll_pane_t1

0xd1fd,	// (0x00044f9f) popup_char_count_window_g1

0xd2b7,	// (0x00045059) popup_char_count_window_g2

0xd206,	// (0x00044fa8) popup_char_count_window_g3

0x0002,

0xf9ea,	// (0x0004778c) popup_char_count_window_g

0xd2c0,	// (0x00045062) popup_char_count_window_t1

0xe654,	// (0x000463f6) main_vded2_pane

0x2916,	// (0x0003a6b8) aid_size_cell_imed_line

0x2920,	// (0x0003a6c2) grid_imed_line_width_pane

0x96c5,	// (0x00041467) vid4_indicators_pane_g4

0xd2ce,	// (0x00045070) cell_imed_line_width_pane_ParamLimits

0xd2ce,	// (0x00045070) cell_imed_line_width_pane

0xd2e4,	// (0x00045086) cell_imed_line_width_pane_g1

0xd2ed,	// (0x0004508f) cell_imed_line_width_pane_g2

0x0001,

0xf9f1,	// (0x00047793) cell_imed_line_width_pane_g

0xa55a,	// (0x000422fc) main_vded2_pane_g1_ParamLimits

0xa55a,	// (0x000422fc) main_vded2_pane_g1

0xa569,	// (0x0004230b) main_vded2_pane_g2_ParamLimits

0xa569,	// (0x0004230b) main_vded2_pane_g2

0x0001,

0xf9f6,	// (0x00047798) main_vded2_pane_g_ParamLimits

0xf9f6,	// (0x00047798) main_vded2_pane_g

0xa577,	// (0x00042319) vded2_slider_pane_ParamLimits

0xa577,	// (0x00042319) vded2_slider_pane

0xa584,	// (0x00042326) aid_size_touch_vded2_end

0xa58e,	// (0x00042330) aid_size_touch_vded2_playhead

0xd2f5,	// (0x00045097) aid_size_touch_vded2_start

0xd2fd,	// (0x0004509f) vded2_slider_bg_pane

0xd306,	// (0x000450a8) vded2_slider_pane_g1

0xd30f,	// (0x000450b1) vded2_slider_pane_g2

0xa596,	// (0x00042338) vded2_slider_pane_g3

0x0002,

0xf9fb,	// (0x0004779d) vded2_slider_pane_g

0xd20f,	// (0x00044fb1) vded2_slider_bg_pane_g1

0xd218,	// (0x00044fba) vded2_slider_bg_pane_g2

0xd221,	// (0x00044fc3) vded2_slider_bg_pane_g3

0x0002,

0xf6d1,	// (0x00047473) vded2_slider_bg_pane_g

0x75de,	// (0x0003f380) aid_postcard_touch_down_pane_ParamLimits

0x75de,	// (0x0003f380) aid_postcard_touch_down_pane

0x75ee,	// (0x0003f390) aid_postcard_touch_up_pane_ParamLimits

0x75ee,	// (0x0003f390) aid_postcard_touch_up_pane

0xe654,	// (0x000463f6) main_blid2_pane

0x7cc1,	// (0x0003fa63) popup_blid2_search_window

0xe654,	// (0x000463f6) blid2_gps_pane

0xe654,	// (0x000463f6) blid2_navig_pane

0xe654,	// (0x000463f6) blid2_search_pane

0xe654,	// (0x000463f6) blid2_tripm_pane

0xa59f,	// (0x00042341) blid2_search_pane_g1_ParamLimits

0xa59f,	// (0x00042341) blid2_search_pane_g1

0xa5ab,	// (0x0004234d) blid2_search_pane_t1_ParamLimits

0xa5ab,	// (0x0004234d) blid2_search_pane_t1

0xa5bd,	// (0x0004235f) aid_size_cell_blid2_gps_ParamLimits

0xa5bd,	// (0x0004235f) aid_size_cell_blid2_gps

0xa5cd,	// (0x0004236f) blid2_gps_pane_g1_ParamLimits

0xa5cd,	// (0x0004236f) blid2_gps_pane_g1

0xa5d9,	// (0x0004237b) grid_blid2_satellite_pane_ParamLimits

0xa5d9,	// (0x0004237b) grid_blid2_satellite_pane

0xa5e7,	// (0x00042389) blid2_navig_pane_g1_ParamLimits

0xa5e7,	// (0x00042389) blid2_navig_pane_g1

0xa5f3,	// (0x00042395) blid2_navig_pane_t1_ParamLimits

0xa5f3,	// (0x00042395) blid2_navig_pane_t1

0xa605,	// (0x000423a7) blid2_navig_pane_t2_ParamLimits

0xa605,	// (0x000423a7) blid2_navig_pane_t2

0x0001,

0xfa02,	// (0x000477a4) blid2_navig_pane_t_ParamLimits

0xfa02,	// (0x000477a4) blid2_navig_pane_t

0xa617,	// (0x000423b9) blid2_navig_ring_pane_ParamLimits

0xa617,	// (0x000423b9) blid2_navig_ring_pane

0xa627,	// (0x000423c9) blid2_speed_pane_ParamLimits

0xa627,	// (0x000423c9) blid2_speed_pane

0xa633,	// (0x000423d5) blid2_tripm_pane_g1_ParamLimits

0xa633,	// (0x000423d5) blid2_tripm_pane_g1

0xa643,	// (0x000423e5) blid2_tripm_pane_g2_ParamLimits

0xa643,	// (0x000423e5) blid2_tripm_pane_g2

0xa64f,	// (0x000423f1) blid2_tripm_pane_g3_ParamLimits

0xa64f,	// (0x000423f1) blid2_tripm_pane_g3

0xa65b,	// (0x000423fd) blid2_tripm_pane_g4_ParamLimits

0xa65b,	// (0x000423fd) blid2_tripm_pane_g4

0xa667,	// (0x00042409) blid2_tripm_pane_g5_ParamLimits

0xa667,	// (0x00042409) blid2_tripm_pane_g5

0x0005,

0xfa07,	// (0x000477a9) blid2_tripm_pane_g_ParamLimits

0xfa07,	// (0x000477a9) blid2_tripm_pane_g

0xa683,	// (0x00042425) blid2_tripm_pane_t1_ParamLimits

0xa683,	// (0x00042425) blid2_tripm_pane_t1

0xa695,	// (0x00042437) blid2_tripm_pane_t2_ParamLimits

0xa695,	// (0x00042437) blid2_tripm_pane_t2

0xa6a7,	// (0x00042449) blid2_tripm_pane_t3_ParamLimits

0xa6a7,	// (0x00042449) blid2_tripm_pane_t3

0x0003,

0xfa14,	// (0x000477b6) blid2_tripm_pane_t_ParamLimits

0xfa14,	// (0x000477b6) blid2_tripm_pane_t

0xa6d9,	// (0x0004247b) cell_blid2_satellite_pane_ParamLimits

0xa6d9,	// (0x0004247b) cell_blid2_satellite_pane

0xa6f7,	// (0x00042499) cell_blid2_satellite_pane_g1

0xd317,	// (0x000450b9) cell_blid2_satellite_pane_t1

0x0240,	// (0x00037fe2) blid2_speed_pane_g1

0xd325,	// (0x000450c7) blid2_speed_pane_t1

0xd333,	// (0x000450d5) blid2_speed_pane_t2

0x0001,

0xfa1d,	// (0x000477bf) blid2_speed_pane_t

0x0240,	// (0x00037fe2) blid2_navig_ring_pane_g1

0xa700,	// (0x000424a2) blid2_navig_ring_pane_g2

0xa708,	// (0x000424aa) blid2_navig_ring_pane_g3

0xa710,	// (0x000424b2) blid2_navig_ring_pane_g4

0xa718,	// (0x000424ba) blid2_navig_ring_pane_g5

0x0004,

0xfa22,	// (0x000477c4) blid2_navig_ring_pane_g

0xe654,	// (0x000463f6) bg_popup_window_pane_cp011

0xd341,	// (0x000450e3) popup_blid2_search_window_g1

0xd349,	// (0x000450eb) popup_blid2_search_window_t1

0xd357,	// (0x000450f9) popup_blid2_search_window_t2

0x0001,

0xfa2d,	// (0x000477cf) popup_blid2_search_window_t

0x056e,	// (0x00038310) main_browser_pane_g1

0x029e,	// (0x00038040) main_browser_pane_ParamLimits

0x019b,	// (0x00037f3d) bg_button_pane_cp011_ParamLimits

0x992b,	// (0x000416cd) cell_vitu2_function_pane_g1_ParamLimits

0x0e5b,	// (0x00038bfd) bg_popup_sub_pane_cp22_ParamLimits

0x441c,	// (0x0003c1be) input_focus_pane_cp08_ParamLimits

0xa1b8,	// (0x00041f5a) popup_vitu2_query_button_pane_ParamLimits

0xa1b8,	// (0x00041f5a) popup_vitu2_query_button_pane

0x4438,	// (0x0003c1da) popup_vitu2_query_input_button_pane

0x2f4d,	// (0x0003acef) popup_vitu2_query_window_g1_ParamLimits

0x4442,	// (0x0003c1e4) popup_vitu2_query_window_g2_ParamLimits

0xf935,	// (0x000476d7) popup_vitu2_query_window_g_ParamLimits

0xe654,	// (0x000463f6) bg_button_pane_cp026

0xa720,	// (0x000424c2) popup_vitu2_query_input_button_pane_g1

0xe654,	// (0x000463f6) bg_button_pane_cp025

0xd365,	// (0x00045107) popup_vitu2_query_button_pane_t1

0x8184,	// (0x0003ff26) main_mp3_pane_t6

0x8194,	// (0x0003ff36) popup_slider_window_cp01

0x95a0,	// (0x00041342) cam4_battery_pane

0x967e,	// (0x00041420) cam4_battery_pane_cp02

0xa4a7,	// (0x00042249) cam4_battery_pane_cp01

0xa4a7,	// (0x00042249) cam4_battery_pane_cp03

0x0240,	// (0x00037fe2) cam4_battery_pane_g1

0xd373,	// (0x00045115) cam4_battery_pane_g2

0x0001,

0xfa32,	// (0x000477d4) cam4_battery_pane_g

0x234c,	// (0x0003a0ee) popup_blid_sat_info2_window_t11

0x7180,	// (0x0003ef22) aid_size_touch_mv_arrow_left_ParamLimits

0x71ab,	// (0x0003ef4d) aid_size_touch_mv_arrow_right_ParamLimits

0x0ce2,	// (0x00038a84) navi_pane_g1_ParamLimits

0x71ea,	// (0x0003ef8c) navi_pane_g2_ParamLimits

0x7218,	// (0x0003efba) navi_pane_g3_ParamLimits

0xf32f,	// (0x000470d1) navi_pane_g_ParamLimits

0x7272,	// (0x0003f014) navi_pane_mv_t1_ParamLimits

0x8bd5,	// (0x00040977) grid_imed_effect_pane_ParamLimits

0x5d14,	// (0x0003dab6) aid_placing_vt_slider_lsc

0x04aa,	// (0x0003824c) aid_placing_vt_slider_prt

0x019b,	// (0x00037f3d) bg_tb_trans_pane_cp01_ParamLimits

0x25b4,	// (0x0003a356) popup_image_details_window_g1_ParamLimits

0x25c7,	// (0x0003a369) popup_image_details_window_g2_ParamLimits

0x25dc,	// (0x0003a37e) popup_image_details_window_g3_ParamLimits

0x25dc,	// (0x0003a37e) popup_image_details_window_g3

0xf646,	// (0x000473e8) popup_image_details_window_g_ParamLimits

0x25f0,	// (0x0003a392) popup_image_details_window_t1_ParamLimits

0x2602,	// (0x0003a3a4) popup_image_details_window_t2_ParamLimits

0x261b,	// (0x0003a3bd) popup_image_details_window_t3_ParamLimits

0x262f,	// (0x0003a3d1) popup_image_details_window_t4_ParamLimits

0x264a,	// (0x0003a3ec) popup_image_details_window_t5_ParamLimits

0xf64d,	// (0x000473ef) popup_image_details_window_t_ParamLimits

0xa3d3,	// (0x00042175) cl_header_name_pane_ParamLimits

0xa3d3,	// (0x00042175) cl_header_name_pane

0xa728,	// (0x000424ca) cl_header_name_pane_t1_ParamLimits

0xa728,	// (0x000424ca) cl_header_name_pane_t1

0xa73f,	// (0x000424e1) cl_header_name_pane_t2_ParamLimits

0xa73f,	// (0x000424e1) cl_header_name_pane_t2

0xa769,	// (0x0004250b) cl_header_name_pane_t3_ParamLimits

0xa769,	// (0x0004250b) cl_header_name_pane_t3

0x0002,

0xfa37,	// (0x000477d9) cl_header_name_pane_t_ParamLimits

0xfa37,	// (0x000477d9) cl_header_name_pane_t

0x7243,	// (0x0003efe5) navi_pane_mv_g2_ParamLimits

0x2c42,	// (0x0003a9e4) field_vitu2_entry_pane_g1_ParamLimits

0x2c4e,	// (0x0003a9f0) field_vitu2_entry_pane_g2_ParamLimits

0x0e39,	// (0x00038bdb) field_vitu2_entry_pane_g3_ParamLimits

0x0e39,	// (0x00038bdb) field_vitu2_entry_pane_g3

0xf83e,	// (0x000475e0) field_vitu2_entry_pane_g_ParamLimits

0x98b9,	// (0x0004165b) cell_vitu2_itu_pane_g1_ParamLimits

0x98d1,	// (0x00041673) cell_vitu2_itu_pane_g2_ParamLimits

0x98d1,	// (0x00041673) cell_vitu2_itu_pane_g2

0x0001,

0xf84a,	// (0x000475ec) cell_vitu2_itu_pane_g_ParamLimits

0xf84a,	// (0x000475ec) cell_vitu2_itu_pane_g

0x019b,	// (0x00037f3d) bg_vkb2_func_pane_cp05_ParamLimits

0x019b,	// (0x00037f3d) bg_vkb2_func_pane_cp05

0x019b,	// (0x00037f3d) bg_vkb2_func_pane_cp03

0x019b,	// (0x00037f3d) bg_vkb2_func_pane_cp04

0x019b,	// (0x00037f3d) bg_vkb2_func_pane_cp10_ParamLimits

0x019b,	// (0x00037f3d) bg_vkb2_func_pane_cp10

0x4603,	// (0x0003c3a5) bg_vkb2_func_pane_cp08

0xa1a0,	// (0x00041f42) bg_vkb2_func_pane_cp06

0xa38b,	// (0x0004212d) bg_vkb2_func_pane_cp07

0xd26e,	// (0x00045010) bg_vkb2_func_pane_cp11_ParamLimits

0xd26e,	// (0x00045010) bg_vkb2_func_pane_cp11

0xd283,	// (0x00045025) bg_vkb2_func_pane_cp12_ParamLimits

0xd283,	// (0x00045025) bg_vkb2_func_pane_cp12

0xe654,	// (0x000463f6) bg_vkb2_func_pane_cp09

0x2cb8,	// (0x0003aa5a) bg_vkb2_func_pane_g1

0x067f,	// (0x00038421) bg_vkb2_func_pane_g2

0x2cc0,	// (0x0003aa62) bg_vkb2_func_pane_g3

0x2cc8,	// (0x0003aa6a) bg_vkb2_func_pane_g4

0x2f12,	// (0x0003acb4) bg_vkb2_func_pane_g5

0x2ce0,	// (0x0003aa82) bg_vkb2_func_pane_g6

0x2ce8,	// (0x0003aa8a) bg_vkb2_func_pane_g7

0x2cd8,	// (0x0003aa7a) bg_vkb2_func_pane_g8

0x065f,	// (0x00038401) bg_vkb2_func_pane_g9

0x0008,

0xfa3e,	// (0x000477e0) bg_vkb2_func_pane_g

0xa675,	// (0x00042417) blid2_tripm_pane_g6_ParamLimits

0xa675,	// (0x00042417) blid2_tripm_pane_g6

0x2b7c,	// (0x0003a91e) mp4_progress_pane_g1

0xa6cd,	// (0x0004246f) blid2_tripm_values_pane_ParamLimits

0xa6cd,	// (0x0004246f) blid2_tripm_values_pane

0xa78e,	// (0x00042530) blid2_tripm_values_pane_t1

0xa79c,	// (0x0004253e) blid2_tripm_values_pane_t2

0xd37d,	// (0x0004511f) blid2_tripm_values_pane_t3

0xa7aa,	// (0x0004254c) blid2_tripm_values_pane_t4

0xa7b8,	// (0x0004255a) blid2_tripm_values_pane_t5

0xa7c6,	// (0x00042568) blid2_tripm_values_pane_t6

0xd38b,	// (0x0004512d) blid2_tripm_values_pane_t7

0xa7d4,	// (0x00042576) blid2_tripm_values_pane_t8

0xa7e2,	// (0x00042584) blid2_tripm_values_pane_t9

0x0008,

0xfa51,	// (0x000477f3) blid2_tripm_values_pane_t

0x5d52,	// (0x0003daf4) call_video_pane_t1_ParamLimits

0x5d6f,	// (0x0003db11) call_video_pane_t2_ParamLimits

0xf1d8,	// (0x00046f7a) call_video_pane_t_ParamLimits

0x41af,	// (0x0003bf51) msg_header_pane_g1_ParamLimits

0x0f29,	// (0x00038ccb) msg_header_pane_g2_ParamLimits

0x0f29,	// (0x00038ccb) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x0004716f) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x0004716f) msg_header_pane_g

0x029e,	// (0x00038040) main_clock2_pane_ParamLimits

0x894e,	// (0x000406f0) grid_clock2_toolbar_pane_ParamLimits

0x894e,	// (0x000406f0) grid_clock2_toolbar_pane

0x894e,	// (0x000406f0) listscroll_clock2_pane_ParamLimits

0x894e,	// (0x000406f0) listscroll_clock2_pane

0x89fd,	// (0x0004079f) main_clock2_pane_t3_ParamLimits

0x89fd,	// (0x0004079f) main_clock2_pane_t3

0x8a0f,	// (0x000407b1) main_clock2_pane_t4_ParamLimits

0x8a0f,	// (0x000407b1) main_clock2_pane_t4

0xd399,	// (0x0004513b) cell_clock2_toolbar_pane

0xd3a1,	// (0x00045143) cell_clock2_toolbar_pane_cp01

0xd3a1,	// (0x00045143) cell_clock2_toolbar_pane_cp02

0xd3a9,	// (0x0004514b) cell_clock2_toolbar_pane_cp03

0xd3b1,	// (0x00045153) list_clock2_pane

0x0c48,	// (0x000389ea) scroll_pane_cp10

0xd3b9,	// (0x0004515b) list_single_clock2_pane_ParamLimits

0xd3b9,	// (0x0004515b) list_single_clock2_pane

0x0453,	// (0x000381f5) list_highlight_pane_cp08

0xd3c6,	// (0x00045168) list_single_clock2_pane_t1

0xd3d4,	// (0x00045176) list_single_clock2_pane_t2

0x0001,

0xfa64,	// (0x00047806) list_single_clock2_pane_t

0xe654,	// (0x000463f6) bg_button_pane_cp10

0xd3e2,	// (0x00045184) cell_clock2_toolbar_pane_g1

0x7540,	// (0x0003f2e2) aid_main_viewer_pane_g1_ParamLimits

0x7540,	// (0x0003f2e2) aid_main_viewer_pane_g1

0x754c,	// (0x0003f2ee) aid_main_viewer_pane_g2_ParamLimits

0x754c,	// (0x0003f2ee) aid_main_viewer_pane_g2

0x7558,	// (0x0003f2fa) aid_main_viewer_pane_g3_ParamLimits

0x7558,	// (0x0003f2fa) aid_main_viewer_pane_g3

0x7569,	// (0x0003f30b) aid_main_viewer_pane_g4_ParamLimits

0x7569,	// (0x0003f30b) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x00047180) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x00047180) aid_main_viewer_pane_g

0x7c99,	// (0x0003fa3b) main_calc_pane_ParamLimits

0x7ca6,	// (0x0003fa48) main_dialer2_pane_ParamLimits

0xe654,	// (0x000463f6) main_cam6_pane

0xe654,	// (0x000463f6) main_vid6_pane

0x895a,	// (0x000406fc) listscroll_gen_pane_cp06_ParamLimits

0x895a,	// (0x000406fc) listscroll_gen_pane_cp06

0x8a21,	// (0x000407c3) main_clock2_pane_t5_ParamLimits

0x8a21,	// (0x000407c3) main_clock2_pane_t5

0x8a6e,	// (0x00040810) aid_call2_pane_cp10_ParamLimits

0x8a80,	// (0x00040822) aid_call_pane_cp10_ParamLimits

0x0cb7,	// (0x00038a59) popup_clock_analogue_window_cp10_g1_ParamLimits

0x0cb7,	// (0x00038a59) popup_clock_analogue_window_cp10_g2_ParamLimits

0x8a92,	// (0x00040834) popup_clock_analogue_window_cp10_g3_ParamLimits

0x8a92,	// (0x00040834) popup_clock_analogue_window_cp10_g4_ParamLimits

0x0cb7,	// (0x00038a59) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf702,	// (0x000474a4) popup_clock_analogue_window_cp10_g_ParamLimits

0x8aa8,	// (0x0004084a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x2bed,	// (0x0003a98f) cell_dialer2_keypad_pane_g2_ParamLimits

0x2bed,	// (0x0003a98f) cell_dialer2_keypad_pane_g2

0x0001,

0xf7dd,	// (0x0004757f) cell_dialer2_keypad_pane_g_ParamLimits

0xf7dd,	// (0x0004757f) cell_dialer2_keypad_pane_g

0x024a,	// (0x00037fec) cell_dialer2_keypad_pane_t1

0x9bff,	// (0x000419a1) main_cset_text2_pane_ParamLimits

0x9bff,	// (0x000419a1) main_cset_text2_pane

0x3139,	// (0x0003aedb) area_vitu2_query_pane_g1_ParamLimits

0x451d,	// (0x0003c2bf) area_vitu2_query_pane_g2_ParamLimits

0xf988,	// (0x0004772a) area_vitu2_query_pane_g_ParamLimits

0x45ce,	// (0x0003c370) area_vitu2_query_pane_t7_ParamLimits

0x45ce,	// (0x0003c370) area_vitu2_query_pane_t7

0xa1a0,	// (0x00041f42) bg_button_pane_cp018_ParamLimits

0xa38b,	// (0x0004212d) bg_button_pane_cp021_ParamLimits

0x45f2,	// (0x0003c394) bg_button_pane_cp022_ParamLimits

0x4603,	// (0x0003c3a5) bg_vkb2_func_pane_cp08_ParamLimits

0xa1a0,	// (0x00041f42) bg_vkb2_func_pane_cp06_ParamLimits

0xa38b,	// (0x0004212d) bg_vkb2_func_pane_cp07_ParamLimits

0x4615,	// (0x0003c3b7) input_focus_pane_cp09_ParamLimits

0xa7f0,	// (0x00042592) cam6_autofocus_pane_ParamLimits

0xa7f0,	// (0x00042592) cam6_autofocus_pane

0xa812,	// (0x000425b4) cam6_image_uncrop_pane_ParamLimits

0xa812,	// (0x000425b4) cam6_image_uncrop_pane

0xa848,	// (0x000425ea) cam6_indi_pane_ParamLimits

0xa848,	// (0x000425ea) cam6_indi_pane

0xa862,	// (0x00042604) cam6_mode_pane_ParamLimits

0xa862,	// (0x00042604) cam6_mode_pane

0xa876,	// (0x00042618) cam6_timer_pane_ParamLimits

0xa876,	// (0x00042618) cam6_timer_pane

0xa88a,	// (0x0004262c) cam6_zoom_pane_ParamLimits

0xa88a,	// (0x0004262c) cam6_zoom_pane

0xa8a6,	// (0x00042648) cam6_mode_pane_g1_ParamLimits

0xa8a6,	// (0x00042648) cam6_mode_pane_g1

0xa8b2,	// (0x00042654) cam6_mode_pane_g2_ParamLimits

0xa8b2,	// (0x00042654) cam6_mode_pane_g2

0xa8be,	// (0x00042660) cam6_mode_pane_g3_ParamLimits

0xa8be,	// (0x00042660) cam6_mode_pane_g3

0xa8ca,	// (0x0004266c) cam6_mode_pane_g4_ParamLimits

0xa8ca,	// (0x0004266c) cam6_mode_pane_g4

0x0003,

0xfa69,	// (0x0004780b) cam6_mode_pane_g_ParamLimits

0xfa69,	// (0x0004780b) cam6_mode_pane_g

0x29ba,	// (0x0003a75c) bg_tb_trans_pane_cp08_ParamLimits

0x29ba,	// (0x0003a75c) bg_tb_trans_pane_cp08

0xd3ea,	// (0x0004518c) cam6_battery_pane_ParamLimits

0xd3ea,	// (0x0004518c) cam6_battery_pane

0xd400,	// (0x000451a2) cam6_indi_pane_g1_ParamLimits

0xd400,	// (0x000451a2) cam6_indi_pane_g1

0xd412,	// (0x000451b4) cam6_indi_pane_g2_ParamLimits

0xd412,	// (0x000451b4) cam6_indi_pane_g2

0xd424,	// (0x000451c6) cam6_indi_pane_g3_ParamLimits

0xd424,	// (0x000451c6) cam6_indi_pane_g3

0x0002,

0xfa72,	// (0x00047814) cam6_indi_pane_g_ParamLimits

0xfa72,	// (0x00047814) cam6_indi_pane_g

0xd436,	// (0x000451d8) cam6_indi_pane_t1_ParamLimits

0xd436,	// (0x000451d8) cam6_indi_pane_t1

0x96fa,	// (0x0004149c) cam6_autofocus_pane_g1

0x9702,	// (0x000414a4) cam6_autofocus_pane_g2

0x970a,	// (0x000414ac) cam6_autofocus_pane_g3

0x9712,	// (0x000414b4) cam6_autofocus_pane_g4

0x0003,

0xfa79,	// (0x0004781b) cam6_autofocus_pane_g

0xd45c,	// (0x000451fe) cam6_timer_pane_g1

0xd464,	// (0x00045206) cam6_timer_pane_t1

0xd472,	// (0x00045214) cam6_zoom_cont_pane

0xd47a,	// (0x0004521c) cam6_zoom_pane_g1

0xd483,	// (0x00045225) cam6_zoom_pane_g2

0xa8d6,	// (0x00042678) cam6_zoom_pane_g3

0x0002,

0xfa82,	// (0x00047824) cam6_zoom_pane_g

0x0240,	// (0x00037fe2) cam6_battery_pane_g1

0x0240,	// (0x00037fe2) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00046e51) cam6_battery_pane_g

0xd47a,	// (0x0004521c) cam6_zoom_cont_pane_g1

0xd483,	// (0x00045225) cam6_zoom_cont_pane_g2

0xd48c,	// (0x0004522e) cam6_zoom_cont_pane_g3

0x0002,

0xfa89,	// (0x0004782b) cam6_zoom_cont_pane_g

0xa8f4,	// (0x00042696) cam6_mode_pane_cp_ParamLimits

0xa8f4,	// (0x00042696) cam6_mode_pane_cp

0xa908,	// (0x000426aa) cam6_zoom_pane_cp_ParamLimits

0xa908,	// (0x000426aa) cam6_zoom_pane_cp

0xa924,	// (0x000426c6) vid6_image_uncrop_cif_pane_ParamLimits

0xa924,	// (0x000426c6) vid6_image_uncrop_cif_pane

0xa950,	// (0x000426f2) vid6_image_uncrop_nhd_pane_ParamLimits

0xa950,	// (0x000426f2) vid6_image_uncrop_nhd_pane

0xa96f,	// (0x00042711) vid6_image_uncrop_vga_pane_ParamLimits

0xa96f,	// (0x00042711) vid6_image_uncrop_vga_pane

0xa98e,	// (0x00042730) vid6_image_uncrop_wvga_pane_ParamLimits

0xa98e,	// (0x00042730) vid6_image_uncrop_wvga_pane

0xa9ad,	// (0x0004274f) vid6_indi_pane_ParamLimits

0xa9ad,	// (0x0004274f) vid6_indi_pane

0x29ba,	// (0x0003a75c) bg_tb_trans_pane_cp09_ParamLimits

0x29ba,	// (0x0003a75c) bg_tb_trans_pane_cp09

0xd4a4,	// (0x00045246) cam6_battery_pane_cp_ParamLimits

0xd4a4,	// (0x00045246) cam6_battery_pane_cp

0xd4b0,	// (0x00045252) vid6_indi_pane_g1_ParamLimits

0xd4b0,	// (0x00045252) vid6_indi_pane_g1

0xd4c2,	// (0x00045264) vid6_indi_pane_g2_ParamLimits

0xd4c2,	// (0x00045264) vid6_indi_pane_g2

0xd4d4,	// (0x00045276) vid6_indi_pane_g3_ParamLimits

0xd4d4,	// (0x00045276) vid6_indi_pane_g3

0xd4eb,	// (0x0004528d) vid6_indi_pane_g4_ParamLimits

0xd4eb,	// (0x0004528d) vid6_indi_pane_g4

0xd502,	// (0x000452a4) vid6_indi_pane_g5_ParamLimits

0xd502,	// (0x000452a4) vid6_indi_pane_g5

0x0004,

0xfa90,	// (0x00047832) vid6_indi_pane_g_ParamLimits

0xfa90,	// (0x00047832) vid6_indi_pane_g

0xd51c,	// (0x000452be) vid6_indi_pane_t1_ParamLimits

0xd51c,	// (0x000452be) vid6_indi_pane_t1

0xd532,	// (0x000452d4) vid6_indi_pane_t2_ParamLimits

0xd532,	// (0x000452d4) vid6_indi_pane_t2

0xd55a,	// (0x000452fc) vid6_indi_pane_t3_ParamLimits

0xd55a,	// (0x000452fc) vid6_indi_pane_t3

0xd582,	// (0x00045324) vid6_indi_pane_t4_ParamLimits

0xd582,	// (0x00045324) vid6_indi_pane_t4

0x0003,

0xfa9b,	// (0x0004783d) vid6_indi_pane_t_ParamLimits

0xfa9b,	// (0x0004783d) vid6_indi_pane_t

0xd5a6,	// (0x00045348) wait_bar_pane_cp08

0xa9d2,	// (0x00042774) main_cset_text2_pane_t1_ParamLimits

0xa9d2,	// (0x00042774) main_cset_text2_pane_t1

0xa8df,	// (0x00042681) listscroll_gen_pane_cp06_t1_ParamLimits

0xa8df,	// (0x00042681) listscroll_gen_pane_cp06_t1

0xe654,	// (0x000463f6) main_cam6_set_pane

0x0202,	// (0x00037fa4) bg_tb_trans_pane_cp06_ParamLimits

0x95a8,	// (0x0004134a) cam4_indicators_pane_g1_ParamLimits

0x95b9,	// (0x0004135b) cam4_indicators_pane_g2_ParamLimits

0xf81a,	// (0x000475bc) cam4_indicators_pane_g_ParamLimits

0x95d1,	// (0x00041373) cam4_indicators_pane_t1_ParamLimits

0x019b,	// (0x00037f3d) bg_tb_trans_pane_cp07_ParamLimits

0x9688,	// (0x0004142a) vid4_indicators_pane_g1_ParamLimits

0x969e,	// (0x00041440) vid4_indicators_pane_g2_ParamLimits

0x96b2,	// (0x00041454) vid4_indicators_pane_g3_ParamLimits

0x96c5,	// (0x00041467) vid4_indicators_pane_g4_ParamLimits

0xf82c,	// (0x000475ce) vid4_indicators_pane_g_ParamLimits

0x96e3,	// (0x00041485) vid4_indicators_pane_t1_ParamLimits

0xa4af,	// (0x00042251) vid4_progress_pane_g1_ParamLimits

0xa4bf,	// (0x00042261) vid4_progress_pane_g2_ParamLimits

0xa4cf,	// (0x00042271) vid4_progress_pane_g3_ParamLimits

0xa4e1,	// (0x00042283) vid4_progress_pane_g4_ParamLimits

0xf9d3,	// (0x00047775) vid4_progress_pane_g_ParamLimits

0xa4ff,	// (0x000422a1) vid4_progress_pane_t1_ParamLimits

0xa519,	// (0x000422bb) vid4_progress_pane_t2_ParamLimits

0xa532,	// (0x000422d4) vid4_progress_pane_t3_ParamLimits

0xf9de,	// (0x00047780) vid4_progress_pane_t_ParamLimits

0xa547,	// (0x000422e9) wait_bar_pane_cp07_ParamLimits

0xa9f9,	// (0x0004279b) main_cam6_set_pane_g2_ParamLimits

0xa9f9,	// (0x0004279b) main_cam6_set_pane_g2

0xaa05,	// (0x000427a7) main_cset6_listscroll_pane_ParamLimits

0xaa05,	// (0x000427a7) main_cset6_listscroll_pane

0xaa32,	// (0x000427d4) main_cset6_slider_pane_ParamLimits

0xaa32,	// (0x000427d4) main_cset6_slider_pane

0xaa3e,	// (0x000427e0) main_cset6_text2_pane_ParamLimits

0xaa3e,	// (0x000427e0) main_cset6_text2_pane

0xd5b5,	// (0x00045357) main_cset6_text_pane

0xd5bd,	// (0x0004535f) main_cset_list_pane_copy1_ParamLimits

0xd5bd,	// (0x0004535f) main_cset_list_pane_copy1

0xd5cd,	// (0x0004536f) scroll_pane_cp028_copy1

0xaa51,	// (0x000427f3) cset_list_set_pane_copy1

0xaa61,	// (0x00042803) aid_position_infowindow_above_copy1

0xaa69,	// (0x0004280b) aid_position_infowindow_below_copy1

0x4653,	// (0x0003c3f5) cset_list_set_pane_g1_copy1

0x465b,	// (0x0003c3fd) cset_list_set_pane_g3_copy1_ParamLimits

0x465b,	// (0x0003c3fd) cset_list_set_pane_g3_copy1

0x466a,	// (0x0003c40c) cset_list_set_pane_t1_copy1_ParamLimits

0x466a,	// (0x0003c40c) cset_list_set_pane_t1_copy1

0x019b,	// (0x00037f3d) list_highlight_pane_cp021_copy1_ParamLimits

0x019b,	// (0x00037f3d) list_highlight_pane_cp021_copy1

0xd5d6,	// (0x00045378) cset6_slider_pane_ParamLimits

0xd5d6,	// (0x00045378) cset6_slider_pane

0xd602,	// (0x000453a4) main_cset6_slider_pane_g1_ParamLimits

0xd602,	// (0x000453a4) main_cset6_slider_pane_g1

0xaa71,	// (0x00042813) main_cset6_slider_pane_g2_ParamLimits

0xaa71,	// (0x00042813) main_cset6_slider_pane_g2

0xd62a,	// (0x000453cc) main_cset6_slider_pane_g3_ParamLimits

0xd62a,	// (0x000453cc) main_cset6_slider_pane_g3

0xaa99,	// (0x0004283b) main_cset6_slider_pane_g4_ParamLimits

0xaa99,	// (0x0004283b) main_cset6_slider_pane_g4

0xaaa5,	// (0x00042847) main_cset6_slider_pane_g5_ParamLimits

0xaaa5,	// (0x00042847) main_cset6_slider_pane_g5

0x2e11,	// (0x0003abb3) main_cset6_slider_pane_g7_ParamLimits

0x2e11,	// (0x0003abb3) main_cset6_slider_pane_g7

0x2e1d,	// (0x0003abbf) main_cset6_slider_pane_g8_ParamLimits

0x2e1d,	// (0x0003abbf) main_cset6_slider_pane_g8

0xaab1,	// (0x00042853) main_cset6_slider_pane_g9_ParamLimits

0xaab1,	// (0x00042853) main_cset6_slider_pane_g9

0xaabd,	// (0x0004285f) main_cset6_slider_pane_g10_ParamLimits

0xaabd,	// (0x0004285f) main_cset6_slider_pane_g10

0xaac9,	// (0x0004286b) main_cset6_slider_pane_g11_ParamLimits

0xaac9,	// (0x0004286b) main_cset6_slider_pane_g11

0xaad5,	// (0x00042877) main_cset6_slider_pane_g12_ParamLimits

0xaad5,	// (0x00042877) main_cset6_slider_pane_g12

0xaae1,	// (0x00042883) main_cset6_slider_pane_g13_ParamLimits

0xaae1,	// (0x00042883) main_cset6_slider_pane_g13

0xaaed,	// (0x0004288f) main_cset6_slider_pane_g14_ParamLimits

0xaaed,	// (0x0004288f) main_cset6_slider_pane_g14

0xaaf9,	// (0x0004289b) main_cset6_slider_pane_g15_ParamLimits

0xaaf9,	// (0x0004289b) main_cset6_slider_pane_g15

0xab11,	// (0x000428b3) main_cset6_slider_pane_g16_ParamLimits

0xab11,	// (0x000428b3) main_cset6_slider_pane_g16

0xab1d,	// (0x000428bf) main_cset6_slider_pane_g17_ParamLimits

0xab1d,	// (0x000428bf) main_cset6_slider_pane_g17

0x0011,

0xfaa4,	// (0x00047846) main_cset6_slider_pane_g_ParamLimits

0xfaa4,	// (0x00047846) main_cset6_slider_pane_g

0xd636,	// (0x000453d8) main_cset6_slider_pane_t1_ParamLimits

0xd636,	// (0x000453d8) main_cset6_slider_pane_t1

0xab41,	// (0x000428e3) main_cset6_slider_pane_t2_ParamLimits

0xab41,	// (0x000428e3) main_cset6_slider_pane_t2

0xab6c,	// (0x0004290e) main_cset6_slider_pane_t3_ParamLimits

0xab6c,	// (0x0004290e) main_cset6_slider_pane_t3

0xab97,	// (0x00042939) main_cset6_slider_pane_t4_ParamLimits

0xab97,	// (0x00042939) main_cset6_slider_pane_t4

0xabc2,	// (0x00042964) main_cset6_slider_pane_t5_ParamLimits

0xabc2,	// (0x00042964) main_cset6_slider_pane_t5

0xd677,	// (0x00045419) main_cset6_slider_pane_t7_ParamLimits

0xd677,	// (0x00045419) main_cset6_slider_pane_t7

0xabed,	// (0x0004298f) main_cset6_slider_pane_t8_ParamLimits

0xabed,	// (0x0004298f) main_cset6_slider_pane_t8

0xac11,	// (0x000429b3) main_cset6_slider_pane_t9_ParamLimits

0xac11,	// (0x000429b3) main_cset6_slider_pane_t9

0xac35,	// (0x000429d7) main_cset6_slider_pane_t10_ParamLimits

0xac35,	// (0x000429d7) main_cset6_slider_pane_t10

0xac59,	// (0x000429fb) main_cset6_slider_pane_t11_ParamLimits

0xac59,	// (0x000429fb) main_cset6_slider_pane_t11

0xd6ad,	// (0x0004544f) main_cset6_slider_pane_t14_ParamLimits

0xd6ad,	// (0x0004544f) main_cset6_slider_pane_t14

0xd6e6,	// (0x00045488) main_cset6_slider_pane_t15_ParamLimits

0xd6e6,	// (0x00045488) main_cset6_slider_pane_t15

0x000b,

0xfac9,	// (0x0004786b) main_cset6_slider_pane_t_ParamLimits

0xfac9,	// (0x0004786b) main_cset6_slider_pane_t

0xd71f,	// (0x000454c1) cset_slider_pane_g1_copy1

0xd728,	// (0x000454ca) cset_slider_pane_g2_copy1

0xd731,	// (0x000454d3) cset_slider_pane_g3_copy1

0xe654,	// (0x000463f6) bg_popup_sub_pane_cp011_copy1

0xd743,	// (0x000454e5) main_cset_text_pane_g1_copy1

0x2f61,	// (0x0003ad03) main_cset_text_pane_t1_copy1

0x2f6f,	// (0x0003ad11) main_cset_text_pane_t2_copy1

0x2f7d,	// (0x0003ad1f) main_cset_text_pane_t3_copy1

0x2f8b,	// (0x0003ad2d) main_cset_text_pane_t4_copy1

0x2f99,	// (0x0003ad3b) main_cset_text_pane_t5_copy1

0xd74b,	// (0x000454ed) main_cset_text_pane_t6_copy1

0xd759,	// (0x000454fb) main_cset_text_pane_t7_copy1

0xac7d,	// (0x00042a1f) main_cset_text2_pane_t1_copy1

0x019b,	// (0x00037f3d) main_ncimui_pane

0x7cff,	// (0x0003faa1) popup_query_ncimui_window_ParamLimits

0x7cff,	// (0x0003faa1) popup_query_ncimui_window

0x428a,	// (0x0003c02c) field_cale_ev2_pane_g4_ParamLimits

0x428a,	// (0x0003c02c) field_cale_ev2_pane_g4

0x8e71,	// (0x00040c13) cell_video_dialer_keypad_pane_g2_ParamLimits

0x8e71,	// (0x00040c13) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7b4,	// (0x00047556) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7b4,	// (0x00047556) cell_video_dialer_keypad_pane_g

0x8e89,	// (0x00040c2b) cell_video_dialer_keypad_pane_t1

0xe654,	// (0x000463f6) bg_popup_window_pane_cp012

0x1fb1,	// (0x00039d53) heading_pane_cp06

0xd791,	// (0x00045533) ncim_query_content_pane

0xe654,	// (0x000463f6) bg_popup_heading_pane_cp01

0xd799,	// (0x0004553b) ncim_heading_pane_t1

0xd7a7,	// (0x00045549) ncim_indicator_popup_pane

0xd7b9,	// (0x0004555b) ncim_query_button_pane

0xd7cf,	// (0x00045571) ncim_query_content_pane_t1

0xd7e1,	// (0x00045583) ncim_query_content_pane_t2

0x0005,

0xfb0d,	// (0x000478af) ncim_query_content_pane_t

0xd81b,	// (0x000455bd) ncim_query_list_pane

0xd82d,	// (0x000455cf) ncim_query_popup_pane

0xd7a7,	// (0x00045549) ncim_indicator_popup_pane_ParamLimits

0xadd9,	// (0x00042b7b) ncim_query_content_pane_g1_ParamLimits

0xadd9,	// (0x00042b7b) ncim_query_content_pane_g1

0xd7cf,	// (0x00045571) ncim_query_content_pane_t1_ParamLimits

0xd7e1,	// (0x00045583) ncim_query_content_pane_t2_ParamLimits

0xade5,	// (0x00042b87) ncim_query_content_pane_t3_ParamLimits

0xade5,	// (0x00042b87) ncim_query_content_pane_t3

0xae02,	// (0x00042ba4) ncim_query_content_pane_t4_ParamLimits

0xae02,	// (0x00042ba4) ncim_query_content_pane_t4

0xae1f,	// (0x00042bc1) ncim_query_content_pane_t5_ParamLimits

0xae1f,	// (0x00042bc1) ncim_query_content_pane_t5

0xd7f3,	// (0x00045595) ncim_query_content_pane_t6_ParamLimits

0xd7f3,	// (0x00045595) ncim_query_content_pane_t6

0xfb0d,	// (0x000478af) ncim_query_content_pane_t_ParamLimits

0xd81b,	// (0x000455bd) ncim_query_list_pane_ParamLimits

0xd82d,	// (0x000455cf) ncim_query_popup_pane_ParamLimits

0xd841,	// (0x000455e3) wait_bar_pane_cp04

0xe654,	// (0x000463f6) input_focus_pane_cp011

0xd849,	// (0x000455eb) ncim_query_popup_pane_t1

0xd857,	// (0x000455f9) ncim_list_query_list_pane_ParamLimits

0xd857,	// (0x000455f9) ncim_list_query_list_pane

0xe654,	// (0x000463f6) bg_button_pane_cp027

0xd86a,	// (0x0004560c) ncim_query_button_pane_g1

0xe654,	// (0x000463f6) list_highlight_pane_cp012

0xd874,	// (0x00045616) ncim_list_query_list_pane_g1

0xd87c,	// (0x0004561e) ncim_list_query_list_pane_t1

0x95c5,	// (0x00041367) cam4_indicators_pane_g3_ParamLimits

0x95c5,	// (0x00041367) cam4_indicators_pane_g3

0x96d1,	// (0x00041473) vid4_indicators_pane_g5_ParamLimits

0x96d1,	// (0x00041473) vid4_indicators_pane_g5

0xa4f0,	// (0x00042292) vid4_progress_pane_g5_ParamLimits

0xa4f0,	// (0x00042292) vid4_progress_pane_g5

0xacaf,	// (0x00042a51) main_ncimui_pane_g1

0xad1b,	// (0x00042abd) ncimui_group_query_pane_ParamLimits

0xad1b,	// (0x00042abd) ncimui_group_query_pane

0xad75,	// (0x00042b17) ncimui_list_pane_ParamLimits

0xad75,	// (0x00042b17) ncimui_list_pane

0xad9c,	// (0x00042b3e) ncimui_text_pane_ParamLimits

0xad9c,	// (0x00042b3e) ncimui_text_pane

0xae3c,	// (0x00042bde) ncimui_text_pane_t1_ParamLimits

0xae3c,	// (0x00042bde) ncimui_text_pane_t1

0xd88a,	// (0x0004562c) ncimui_list_single_graphic_pane_ParamLimits

0xd88a,	// (0x0004562c) ncimui_list_single_graphic_pane

0xae5b,	// (0x00042bfd) ncimui_query_pane_ParamLimits

0xae5b,	// (0x00042bfd) ncimui_query_pane

0xe654,	// (0x000463f6) list_highlight_pane_cp013

0xd89a,	// (0x0004563c) ncim_list_query_list_pane_t1_copy1

0xd874,	// (0x00045616) ncim_list_single_graphic_pane_g1

0xae6e,	// (0x00042c10) ncim_query_button_pane_cp01

0xae7a,	// (0x00042c1c) ncim_query_entry_pane_ParamLimits

0xae7a,	// (0x00042c1c) ncim_query_entry_pane

0xae8d,	// (0x00042c2f) ncimui_query_pane_g1

0xae99,	// (0x00042c3b) ncimui_query_pane_t1_ParamLimits

0xae99,	// (0x00042c3b) ncimui_query_pane_t1

0x019b,	// (0x00037f3d) input_focus_pane_cp012

0xd8a8,	// (0x0004564a) ncim_query_entry_pane_t1

0x029e,	// (0x00038040) main_im_pane_ParamLimits

0x019b,	// (0x00037f3d) main_mobtv_pane_ParamLimits

0x019b,	// (0x00037f3d) main_mobtv_pane

0xab29,	// (0x000428cb) main_cset6_slider_pane_g18_ParamLimits

0xab29,	// (0x000428cb) main_cset6_slider_pane_g18

0xab35,	// (0x000428d7) main_cset6_slider_pane_g19_ParamLimits

0xab35,	// (0x000428d7) main_cset6_slider_pane_g19

0x0e39,	// (0x00038bdb) bg_main_mobtv_pane_ParamLimits

0x0e39,	// (0x00038bdb) bg_main_mobtv_pane

0xaeb2,	// (0x00042c54) main_mobtv_info_pane

0xaebd,	// (0x00042c5f) main_mobtv_loading_pane_ParamLimits

0xaebd,	// (0x00042c5f) main_mobtv_loading_pane

0xd8ba,	// (0x0004565c) main_mobtv_pg_channel_list_pane

0xd8c4,	// (0x00045666) main_mobtv_pg_hdr_pane

0xaeca,	// (0x00042c6c) main_mobtv_programe_curr_pane_ParamLimits

0xaeca,	// (0x00042c6c) main_mobtv_programe_curr_pane

0xaed7,	// (0x00042c79) main_mobtv_programe_next_pane_ParamLimits

0xaed7,	// (0x00042c79) main_mobtv_programe_next_pane

0xd8cd,	// (0x0004566f) popup_mobtv_noti_window

0x0240,	// (0x00037fe2) main_tv_pg_hdr_pane_g1

0xd8d7,	// (0x00045679) main_tv_pg_hdr_pane_g2

0xd8df,	// (0x00045681) main_tv_pg_hdr_pane_g3

0xd8e7,	// (0x00045689) main_tv_pg_hdr_pane_g4

0xd8ef,	// (0x00045691) main_tv_pg_hdr_pane_g5

0xd8f9,	// (0x0004569b) main_tv_pg_hdr_pane_g6

0xd903,	// (0x000456a5) main_tv_pg_hdr_pane_g7

0xd90d,	// (0x000456af) main_tv_pg_hdr_pane_g8

0xd917,	// (0x000456b9) main_tv_pg_hdr_pane_g9

0xd921,	// (0x000456c3) main_tv_pg_hdr_pane_g10

0xd92b,	// (0x000456cd) main_tv_pg_hdr_pane_g11

0x000a,

0xfb1a,	// (0x000478bc) main_tv_pg_hdr_pane_g

0xd935,	// (0x000456d7) main_tv_pg_hdr_pane_t1

0xd943,	// (0x000456e5) main_tv_pg_hdr_pane_t2

0xd951,	// (0x000456f3) main_tv_pg_hdr_pane_t3

0xd961,	// (0x00045703) main_tv_pg_hdr_pane_t4

0xd971,	// (0x00045713) main_tv_pg_hdr_pane_t5

0x0004,

0xfb31,	// (0x000478d3) main_tv_pg_hdr_pane_t

0xd981,	// (0x00045723) single_mobtv_pg_channel_pane_ParamLimits

0xd981,	// (0x00045723) single_mobtv_pg_channel_pane

0xd993,	// (0x00045735) single_mobtv_pg_channel_table_pane

0xd99c,	// (0x0004573e) single_mobtv_pg_channel_thumb_pane

0xd9a5,	// (0x00045747) single_tv_pg_channel_pane_g1

0xd9ae,	// (0x00045750) single_tv_pg_channel_pane_g2

0x0001,

0xfb3c,	// (0x000478de) single_tv_pg_channel_pane_g

0x0202,	// (0x00037fa4) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0202,	// (0x00037fa4) bg_single_mobtv_pg_channel_thumb_pane

0xd9b7,	// (0x00045759) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd9b7,	// (0x00045759) single_mobtv_pg_channel_thumb_pane_g1

0xd9c5,	// (0x00045767) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd9c5,	// (0x00045767) single_mobtv_pg_channel_thumb_pane_g2

0xd9d1,	// (0x00045773) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd9d1,	// (0x00045773) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb41,	// (0x000478e3) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb41,	// (0x000478e3) single_mobtv_pg_channel_thumb_pane_g

0xd9dd,	// (0x0004577f) single_mobtv_pg_channel_thumb_pane_t1

0xd9eb,	// (0x0004578d) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb48,	// (0x000478ea) single_mobtv_pg_channel_thumb_pane_t

0x0240,	// (0x00037fe2) bg_single_mobtv_pg_channel_table_pane_g1

0x0240,	// (0x00037fe2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00046e51) bg_single_mobtv_pg_channel_table_pane_g

0xd9f9,	// (0x0004579b) single_mobtv_pg_channel_table_pane_t1

0xda07,	// (0x000457a9) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb4d,	// (0x000478ef) single_mobtv_pg_channel_table_pane_t

0xaeec,	// (0x00042c8e) main_mobtv_info_pane_g1_ParamLimits

0xaeec,	// (0x00042c8e) main_mobtv_info_pane_g1

0xaf08,	// (0x00042caa) main_mobtv_info_pane_t1_ParamLimits

0xaf08,	// (0x00042caa) main_mobtv_info_pane_t1

0xaf80,	// (0x00042d22) main_mobtv_info_pane_t2_ParamLimits

0xaf80,	// (0x00042d22) main_mobtv_info_pane_t2

0x0002,

0xfb57,	// (0x000478f9) main_mobtv_info_pane_t_ParamLimits

0xfb57,	// (0x000478f9) main_mobtv_info_pane_t

0xb011,	// (0x00042db3) wait_bar_pane_cp05

0xb023,	// (0x00042dc5) main_mobtv_loading_pane_g1_ParamLimits

0xb023,	// (0x00042dc5) main_mobtv_loading_pane_g1

0xb02f,	// (0x00042dd1) main_mobtv_loading_pane_g2_ParamLimits

0xb02f,	// (0x00042dd1) main_mobtv_loading_pane_g2

0xb03b,	// (0x00042ddd) main_mobtv_loading_pane_g3_ParamLimits

0xb03b,	// (0x00042ddd) main_mobtv_loading_pane_g3

0x0002,

0xfb5e,	// (0x00047900) main_mobtv_loading_pane_g_ParamLimits

0xfb5e,	// (0x00047900) main_mobtv_loading_pane_g

0xda15,	// (0x000457b7) main_mobtv_loading_pane_t1_ParamLimits

0xda15,	// (0x000457b7) main_mobtv_loading_pane_t1

0xda2d,	// (0x000457cf) main_mobtv_loading_pane_t2_ParamLimits

0xda2d,	// (0x000457cf) main_mobtv_loading_pane_t2

0x0001,

0xfb65,	// (0x00047907) main_mobtv_loading_pane_t_ParamLimits

0xfb65,	// (0x00047907) main_mobtv_loading_pane_t

0xb049,	// (0x00042deb) wait_bar_pane_cp06_ParamLimits

0xb049,	// (0x00042deb) wait_bar_pane_cp06

0xda51,	// (0x000457f3) main_mobtv_programe_curr_pane_t1

0xda5f,	// (0x00045801) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb6a,	// (0x0004790c) main_mobtv_programe_curr_pane_t

0xda6d,	// (0x0004580f) main_mobtv_programe_next_pane_t1

0xda7b,	// (0x0004581d) main_mobtv_programe_next_pane_t2

0xda89,	// (0x0004582b) main_mobtv_programe_next_pane_t3

0x0002,

0xfb6f,	// (0x00047911) main_mobtv_programe_next_pane_t

0xe654,	// (0x000463f6) bg_popup_mobtv_noti_window_pane

0xda97,	// (0x00045839) popup_mobtv_noti_window_g1

0xda9f,	// (0x00045841) popup_mobtv_noti_window_t1

0xdaad,	// (0x0004584f) popup_mobtv_noti_window_t2

0x0001,

0xfb76,	// (0x00047918) popup_mobtv_noti_window_t

0x0240,	// (0x00037fe2) bg_popup_mobtv_noti_window_pane_g1

0xe654,	// (0x000463f6) sc_clock_pane

0xe654,	// (0x000463f6) main_fs_bigclock_pane

0xa6bb,	// (0x0004245d) blid2_tripm_pane_t4_ParamLimits

0xa6bb,	// (0x0004245d) blid2_tripm_pane_t4

0x0210,	// (0x00037fb2) sc_clock_pane_g1_ParamLimits

0x0210,	// (0x00037fb2) sc_clock_pane_g1

0x025e,	// (0x00038000) sc_clock_pane_t1_ParamLimits

0x025e,	// (0x00038000) sc_clock_pane_t1

0x025e,	// (0x00038000) sc_clock_pane_t2_ParamLimits

0x025e,	// (0x00038000) sc_clock_pane_t2

0x025e,	// (0x00038000) sc_clock_pane_t3_ParamLimits

0x025e,	// (0x00038000) sc_clock_pane_t3

0x0004,

0xfb7b,	// (0x0004791d) sc_clock_pane_t_ParamLimits

0xfb7b,	// (0x0004791d) sc_clock_pane_t

0xb94a,	// (0x000436ec) main_fs_bigclock_indicator_pane_ParamLimits

0xb94a,	// (0x000436ec) main_fs_bigclock_indicator_pane

0xb09e,	// (0x00042e40) main_fs_bigclock_pane_g1_ParamLimits

0xb09e,	// (0x00042e40) main_fs_bigclock_pane_g1

0xb956,	// (0x000436f8) main_fs_bigclock_pane_t1_ParamLimits

0xb956,	// (0x000436f8) main_fs_bigclock_pane_t1

0xb968,	// (0x0004370a) main_fs_bigclock_pane_t2_ParamLimits

0xb968,	// (0x0004370a) main_fs_bigclock_pane_t2

0xb97c,	// (0x0004371e) main_fs_bigclock_pane_t3_ParamLimits

0xb97c,	// (0x0004371e) main_fs_bigclock_pane_t3

0x0002,

0xfd0c,	// (0x00047aae) main_fs_bigclock_pane_t_ParamLimits

0xfd0c,	// (0x00047aae) main_fs_bigclock_pane_t

0xe178,	// (0x00045f1a) main_fs_bigclock_indicator_pane_g1

0xd7c1,	// (0x00045563) ncim_query_content_pane_g2_ParamLimits

0xd7c1,	// (0x00045563) ncim_query_content_pane_g2

0x0001,

0xfb08,	// (0x000478aa) ncim_query_content_pane_g_ParamLimits

0xfb08,	// (0x000478aa) ncim_query_content_pane_g

0x025e,	// (0x00038000) sc_clock_pane_t4_ParamLimits

0x025e,	// (0x00038000) sc_clock_pane_t4

0x019b,	// (0x00037f3d) main_radioblah_pane

0x9479,	// (0x0004121b) cell_call4_button_pane_t1_copy1_ParamLimits

0x9479,	// (0x0004121b) cell_call4_button_pane_t1_copy1

0xaccb,	// (0x00042a6d) main_ncimui_pane_t1_ParamLimits

0xaccb,	// (0x00042a6d) main_ncimui_pane_t1

0xace5,	// (0x00042a87) main_ncimui_pane_t2_ParamLimits

0xace5,	// (0x00042a87) main_ncimui_pane_t2

0x0002,

0xfb01,	// (0x000478a3) main_ncimui_pane_t_ParamLimits

0xfb01,	// (0x000478a3) main_ncimui_pane_t

0x0e5b,	// (0x00038bfd) main_radioblah_anim_pane_ParamLimits

0x0e5b,	// (0x00038bfd) main_radioblah_anim_pane

0x0e5b,	// (0x00038bfd) main_radioblah_info_pane_ParamLimits

0x0e5b,	// (0x00038bfd) main_radioblah_info_pane

0x0e47,	// (0x00038be9) main_radioblah_pane_t1_ParamLimits

0x0e47,	// (0x00038be9) main_radioblah_pane_t1

0x0e47,	// (0x00038be9) main_radioblah_pane_t2_ParamLimits

0x0e47,	// (0x00038be9) main_radioblah_pane_t2

0x0003,

0xfb9c,	// (0x0004793e) main_radioblah_pane_t_ParamLimits

0xfb9c,	// (0x0004793e) main_radioblah_pane_t

0x01f4,	// (0x00037f96) main_radioblah_rocker_ctrl_pane_ParamLimits

0x01f4,	// (0x00037f96) main_radioblah_rocker_ctrl_pane

0x29c8,	// (0x0003a76a) main_radioblah_info_pane_t1_ParamLimits

0x29c8,	// (0x0003a76a) main_radioblah_info_pane_t1

0xdaeb,	// (0x0004588d) main_radioblah_info_pane_t2_ParamLimits

0xdaeb,	// (0x0004588d) main_radioblah_info_pane_t2

0x0003,

0xfba5,	// (0x00047947) main_radioblah_info_pane_t_ParamLimits

0xfba5,	// (0x00047947) main_radioblah_info_pane_t

0x0240,	// (0x00037fe2) main_radioblah_rocker_ctrl_pane_g1

0x0240,	// (0x00037fe2) main_radioblah_rocker_ctrl_pane_g2

0x0240,	// (0x00037fe2) main_radioblah_rocker_ctrl_pane_g3

0x0240,	// (0x00037fe2) main_radioblah_rocker_ctrl_pane_g4

0x0240,	// (0x00037fe2) main_radioblah_rocker_ctrl_pane_g5

0x0240,	// (0x00037fe2) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbae,	// (0x00047950) main_radioblah_rocker_ctrl_pane_g

0xac7d,	// (0x00042a1f) main_cset_text2_pane_t1_copy1_ParamLimits

0x94f2,	// (0x00041294) cam4_image_uncrop_qvga_pane

0x9637,	// (0x000413d9) vid4_image_uncrop_qcif_pane

0xa83a,	// (0x000425dc) cam6_image_uncrop_qvga_pane_ParamLimits

0xa83a,	// (0x000425dc) cam6_image_uncrop_qvga_pane

0xd494,	// (0x00045236) vid6_image_uncrop_qcif_pane_ParamLimits

0xd494,	// (0x00045236) vid6_image_uncrop_qcif_pane

0xe654,	// (0x000463f6) bg_popup_preview_window_pane_cp03

0xd767,	// (0x00045509) list_cset_text2_pane

0xd76f,	// (0x00045511) main_cset6_text2_pane_g1

0xd777,	// (0x00045519) main_cset6_text2_pane_t1

0xb22b,	// (0x00042fcd) list_cset_text2_pane_t1_ParamLimits

0xb22b,	// (0x00042fcd) list_cset_text2_pane_t1

0x019b,	// (0x00037f3d) main_radioblah_pane_ParamLimits

0xaffd,	// (0x00042d9f) main_mobtv_info_pane_t3_ParamLimits

0xaffd,	// (0x00042d9f) main_mobtv_info_pane_t3

0x0e39,	// (0x00038bdb) main_radioblah_pane_g1

0xdabb,	// (0x0004585d) main_radioblah_info_pane_g1

0x025e,	// (0x00038000) main_radioblah_info_pane_t3_ParamLimits

0x025e,	// (0x00038000) main_radioblah_info_pane_t3

0x6d0b,	// (0x0003eaad) highlight_cell_cale_month_pane_ParamLimits

0x6d0b,	// (0x0003eaad) highlight_cell_cale_month_pane

0xe654,	// (0x000463f6) main_phob_fisheye_pane

0x2760,	// (0x0003a502) scroll_pane_cp0031_ParamLimits

0x2760,	// (0x0003a502) scroll_pane_cp0031

0xd5a6,	// (0x00045348) wait_bar_pane_cp08_ParamLimits

0xaa51,	// (0x000427f3) cset_list_set_pane_copy1_ParamLimits

0xdb3a,	// (0x000458dc) highlight_cell_cale_month_pane_g1

0xb242,	// (0x00042fe4) highlight_cell_cale_month_pane_t1

0x3229,	// (0x0003afcb) list_gen_pane_cp01

0x2dfc,	// (0x0003ab9e) scroll_pane_01

0xb250,	// (0x00042ff2) list_single_double_fisheye_pane

0x469c,	// (0x0003c43e) list_double_fisheye_pane_g1_ParamLimits

0x469c,	// (0x0003c43e) list_double_fisheye_pane_g1

0x46a8,	// (0x0003c44a) list_double_fisheye_pane_g2_ParamLimits

0x46a8,	// (0x0003c44a) list_double_fisheye_pane_g2

0x46bc,	// (0x0003c45e) list_double_fisheye_pane_g3_ParamLimits

0x46bc,	// (0x0003c45e) list_double_fisheye_pane_g3

0x0004,

0xfbbb,	// (0x0004795d) list_double_fisheye_pane_g_ParamLimits

0xfbbb,	// (0x0004795d) list_double_fisheye_pane_g

0x46e5,	// (0x0003c487) list_double_fisheye_pane_t1_ParamLimits

0x46e5,	// (0x0003c487) list_double_fisheye_pane_t1

0x4700,	// (0x0003c4a2) list_double_fisheye_pane_t2_ParamLimits

0x4700,	// (0x0003c4a2) list_double_fisheye_pane_t2

0x0001,

0xfbc6,	// (0x00047968) list_double_fisheye_pane_t_ParamLimits

0xfbc6,	// (0x00047968) list_double_fisheye_pane_t

0xe654,	// (0x000463f6) main_call5_pane

0x01f4,	// (0x00037f96) sc_swipe_pane_ParamLimits

0x01f4,	// (0x00037f96) sc_swipe_pane

0xb265,	// (0x00043007) call5_image_pane_ParamLimits

0xb265,	// (0x00043007) call5_image_pane

0xb277,	// (0x00043019) call5_swipe_1_pane_ParamLimits

0xb277,	// (0x00043019) call5_swipe_1_pane

0xb283,	// (0x00043025) call5_swipe_2_pane_ParamLimits

0xb283,	// (0x00043025) call5_swipe_2_pane

0xb29d,	// (0x0004303f) popup_call5_audio_first_window_ParamLimits

0xb29d,	// (0x0004303f) popup_call5_audio_first_window

0x0202,	// (0x00037fa4) call5_swipe_1_pane_g1_ParamLimits

0x0202,	// (0x00037fa4) call5_swipe_1_pane_g1

0xdb42,	// (0x000458e4) call5_swipe_1_pane_g2_ParamLimits

0xdb42,	// (0x000458e4) call5_swipe_1_pane_g2

0x0001,

0xfbcb,	// (0x0004796d) call5_swipe_1_pane_g_ParamLimits

0xfbcb,	// (0x0004796d) call5_swipe_1_pane_g

0xdb4e,	// (0x000458f0) call5_swipe_1_pane_t1_ParamLimits

0xdb4e,	// (0x000458f0) call5_swipe_1_pane_t1

0x0202,	// (0x00037fa4) call5_swipe_2_pane_g1_ParamLimits

0x0202,	// (0x00037fa4) call5_swipe_2_pane_g1

0xdb63,	// (0x00045905) call5_swipe_2_pane_g2_ParamLimits

0xdb63,	// (0x00045905) call5_swipe_2_pane_g2

0x0001,

0xfbd0,	// (0x00047972) call5_swipe_2_pane_g_ParamLimits

0xfbd0,	// (0x00047972) call5_swipe_2_pane_g

0xdb6f,	// (0x00045911) call5_swipe_2_pane_t1_ParamLimits

0xdb6f,	// (0x00045911) call5_swipe_2_pane_t1

0x0202,	// (0x00037fa4) sc_swipe_pane_g1_ParamLimits

0x0202,	// (0x00037fa4) sc_swipe_pane_g1

0x0210,	// (0x00037fb2) sc_swipe_pane_g2_ParamLimits

0x0210,	// (0x00037fb2) sc_swipe_pane_g2

0x0001,

0xf5f0,	// (0x00047392) sc_swipe_pane_g_ParamLimits

0xf5f0,	// (0x00047392) sc_swipe_pane_g

0x024a,	// (0x00037fec) sc_swipe_pane_t1_ParamLimits

0x024a,	// (0x00037fec) sc_swipe_pane_t1

0xe654,	// (0x000463f6) main_cmail_launcher_pane

0xb2ad,	// (0x0004304f) aid_size_cell_cmail_l_ParamLimits

0xb2ad,	// (0x0004304f) aid_size_cell_cmail_l

0xb2bb,	// (0x0004305d) grid_cmail_l_pane_ParamLimits

0xb2bb,	// (0x0004305d) grid_cmail_l_pane

0xb2c9,	// (0x0004306b) cell_cmail_l_pane_ParamLimits

0xb2c9,	// (0x0004306b) cell_cmail_l_pane

0xb2e4,	// (0x00043086) cell_cmail_l_pane_g1_ParamLimits

0xb2e4,	// (0x00043086) cell_cmail_l_pane_g1

0xb2f0,	// (0x00043092) cell_cmail_l_pane_t1_ParamLimits

0xb2f0,	// (0x00043092) cell_cmail_l_pane_t1

0xb306,	// (0x000430a8) cell_cmail_l_pane_t2_ParamLimits

0xb306,	// (0x000430a8) cell_cmail_l_pane_t2

0x0001,

0xfbd5,	// (0x00047977) cell_cmail_l_pane_t_ParamLimits

0xfbd5,	// (0x00047977) cell_cmail_l_pane_t

0x019b,	// (0x00037f3d) grid_highlight_pane_cp018_ParamLimits

0x019b,	// (0x00037f3d) grid_highlight_pane_cp018

0x5037,	// (0x0003cdd9) main2_pane_ParamLimits

0x5037,	// (0x0003cdd9) main2_pane

0x0336,	// (0x000380d8) popup_sp_fs_action_menu_bg_pane_g1

0x033e,	// (0x000380e0) popup_sp_fs_action_menu_bg_pane_g2

0x0346,	// (0x000380e8) popup_sp_fs_action_menu_bg_pane_g3

0x034e,	// (0x000380f0) popup_sp_fs_action_menu_bg_pane_g4

0x0356,	// (0x000380f8) popup_sp_fs_action_menu_bg_pane_g5

0x035e,	// (0x00038100) popup_sp_fs_action_menu_bg_pane_g6

0x0366,	// (0x00038108) popup_sp_fs_action_menu_bg_pane_g7

0x036e,	// (0x00038110) popup_sp_fs_action_menu_bg_pane_g8

0x0376,	// (0x00038118) popup_sp_fs_action_menu_bg_pane_g9

0x037e,	// (0x00038120) popup_sp_fs_action_menu_bg_pane_g10

0x037e,	// (0x00038120) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00046ea2) popup_sp_fs_action_menu_bg_pane_g

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g3_g1

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g3_g2

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00046f50) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00046f50) list_medium_line_x2_t3_g3_g

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g3_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g3_t1

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g3_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g3_t2

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g3_t3_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00046f57) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00046f57) list_medium_line_x2_t3_g3_t

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g2_g1

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g2_g2

0x0001,

0x05ab,	// (0x0003834d) list_medium_line_x2_t3_g2_g_ParamLimits

0x05ab,	// (0x0003834d) list_medium_line_x2_t3_g2_g

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g2_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g2_t1

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g2_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g2_t2

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g2_t3_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00046f57) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00046f57) list_medium_line_x2_t3_g2_t

0x0202,	// (0x00037fa4) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t4_g4_g1

0x0202,	// (0x00037fa4) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t4_g4_g2

0x0202,	// (0x00037fa4) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t4_g4_g3

0x0202,	// (0x00037fa4) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1bc,	// (0x00046f5e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1bc,	// (0x00046f5e) list_medium_line_x2_t4_g4_g

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g4_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g4_t1

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g4_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g4_t2

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g4_t3_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g4_t3

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g4_t4_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1c5,	// (0x00046f67) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1c5,	// (0x00046f67) list_medium_line_x2_t4_g4_t

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g4_g1

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g4_g2

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g4_g3

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1bc,	// (0x00046f5e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1bc,	// (0x00046f5e) list_medium_line_x2_t2_g4_g

0x024a,	// (0x00037fec) list_medium_line_x2_t2_g4_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t2_g4_t1

0x024a,	// (0x00037fec) list_medium_line_x2_t2_g4_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t2_g4_t2

0x0001,

0xf22c,	// (0x00046fce) list_medium_line_x2_t2_g4_t_ParamLimits

0xf22c,	// (0x00046fce) list_medium_line_x2_t2_g4_t

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g3_g1

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g3_g2

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00046f50) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00046f50) list_medium_line_x2_t2_g3_g

0x024a,	// (0x00037fec) list_medium_line_x2_t2_g3_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t2_g3_t1

0x024a,	// (0x00037fec) list_medium_line_x2_t2_g3_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t2_g3_t2

0x0001,

0xf22c,	// (0x00046fce) list_medium_line_x2_t2_g3_t_ParamLimits

0xf22c,	// (0x00046fce) list_medium_line_x2_t2_g3_t

0x6e9d,	// (0x0003ec3f) main_sp_fs_list_pane_ParamLimits

0x6e9d,	// (0x0003ec3f) main_sp_fs_list_pane

0x6ea9,	// (0x0003ec4b) sp_fs_scroll_pane_ParamLimits

0x6ea9,	// (0x0003ec4b) sp_fs_scroll_pane

0x09b9,	// (0x0003875b) list_medium_line_x2_t3_t1

0x09b9,	// (0x0003875b) list_medium_line_x2_t3_t2

0x09b9,	// (0x0003875b) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x00047019) list_medium_line_x2_t3_t

0x09b9,	// (0x0003875b) list_medium_line_x3_t4_t1

0x09b9,	// (0x0003875b) list_medium_line_x3_t4_t2

0x09b9,	// (0x0003875b) list_medium_line_x3_t4_t3

0x09b9,	// (0x0003875b) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x00047020) list_medium_line_x3_t4_t

0x09b9,	// (0x0003875b) list_medium_line_x4_t5_t1

0x09b9,	// (0x0003875b) list_medium_line_x4_t5_t2

0x09b9,	// (0x0003875b) list_medium_line_x4_t5_t3

0x09b9,	// (0x0003875b) list_medium_line_x4_t5_t4

0x09b9,	// (0x0003875b) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x00047029) list_medium_line_x4_t5_t

0x0202,	// (0x00037fa4) list_medium_line_t4_g4_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t4_g4_g1

0x0202,	// (0x00037fa4) list_medium_line_t4_g4_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t4_g4_g2

0x0202,	// (0x00037fa4) list_medium_line_t4_g4_g3_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t4_g4_g3

0x0202,	// (0x00037fa4) list_medium_line_t4_g4_g4_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t4_g4_g4

0x0003,

0xf1bc,	// (0x00046f5e) list_medium_line_t4_g4_g_ParamLimits

0xf1bc,	// (0x00046f5e) list_medium_line_t4_g4_g

0x024a,	// (0x00037fec) list_medium_line_t4_g4_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t4_g4_t1

0x024a,	// (0x00037fec) list_medium_line_t4_g4_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t4_g4_t2

0x024a,	// (0x00037fec) list_medium_line_t4_g4_t3_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t4_g4_t3

0x024a,	// (0x00037fec) list_medium_line_t4_g4_t4_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t4_g4_t4

0x0003,

0xf1c5,	// (0x00046f67) list_medium_line_t4_g4_t_ParamLimits

0xf1c5,	// (0x00046f67) list_medium_line_t4_g4_t

0x6fa2,	// (0x0003ed44) chi_dic_find_pane_g1

0x7cb4,	// (0x0003fa56) main_tport_pane

0x09b9,	// (0x0003875b) list_medium_line_plain_t1

0x0202,	// (0x00037fa4) list_medium_line_t2_g2_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t2_g2_g1

0x0202,	// (0x00037fa4) list_medium_line_t2_g2_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t2_g2_g2

0x0001,

0x05ab,	// (0x0003834d) list_medium_line_t2_g2_g_ParamLimits

0x05ab,	// (0x0003834d) list_medium_line_t2_g2_g

0x024a,	// (0x00037fec) list_medium_line_t2_g2_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t2_g2_t1

0x024a,	// (0x00037fec) list_medium_line_t2_g2_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t2_g2_t2

0x0001,

0xf22c,	// (0x00046fce) list_medium_line_t2_g2_t_ParamLimits

0xf22c,	// (0x00046fce) list_medium_line_t2_g2_t

0x4626,	// (0x0003c3c8) aid_sp_fs_list_icon_a_sm

0x462e,	// (0x0003c3d0) aid_sp_fs_list_icon_d

0x4636,	// (0x0003c3d8) aid_sp_fs_text_primary

0xd22a,	// (0x00044fcc) aid_sp_fs_text_secondary

0xe654,	// (0x000463f6) list_medium_line

0xe654,	// (0x000463f6) list_medium_line_g2

0xe654,	// (0x000463f6) list_medium_line_g3

0xe654,	// (0x000463f6) list_medium_line_plain

0xe654,	// (0x000463f6) list_medium_line_plain_t2

0xe654,	// (0x000463f6) list_medium_line_plain_t3

0xe654,	// (0x000463f6) list_medium_line_right_icon

0xe654,	// (0x000463f6) list_medium_line_right_iconx2

0xe654,	// (0x000463f6) list_medium_line_t2

0xe654,	// (0x000463f6) list_medium_line_t2_g2

0xe654,	// (0x000463f6) list_medium_line_t2_g3

0xe654,	// (0x000463f6) list_medium_line_t2_right_icon

0xe654,	// (0x000463f6) list_medium_line_t2_right_iconx2

0xe654,	// (0x000463f6) list_medium_line_t3

0xe654,	// (0x000463f6) list_medium_line_t3_g2

0xe654,	// (0x000463f6) list_medium_line_t3_g3

0xe654,	// (0x000463f6) list_medium_line_t3_right_iconx2

0xe654,	// (0x000463f6) list_medium_line_t4_g4

0xe654,	// (0x000463f6) list_medium_line_x2

0xe654,	// (0x000463f6) list_medium_line_x2_t2_g2

0xe654,	// (0x000463f6) list_medium_line_x2_t2_g3

0xe654,	// (0x000463f6) list_medium_line_x2_t2_g4

0xe654,	// (0x000463f6) list_medium_line_x2_t3

0xe654,	// (0x000463f6) list_medium_line_x2_t3_g2

0xe654,	// (0x000463f6) list_medium_line_x2_t3_g3

0xe654,	// (0x000463f6) list_medium_line_x2_t3_g4

0xe654,	// (0x000463f6) list_medium_line_x2_t4_g2

0xe654,	// (0x000463f6) list_medium_line_x2_t4_g4

0xe654,	// (0x000463f6) list_medium_line_x3

0xe654,	// (0x000463f6) list_medium_line_x3_t4

0xe654,	// (0x000463f6) list_medium_line_x3_t4_g4

0xe654,	// (0x000463f6) list_medium_line_x4_t4

0xe654,	// (0x000463f6) list_medium_line_x4_t4_g7

0xe654,	// (0x000463f6) list_medium_line_x4_t5

0x463f,	// (0x0003c3e1) list_single_fs_dyc_pane_ParamLimits

0x463f,	// (0x0003c3e1) list_single_fs_dyc_pane

0x0202,	// (0x00037fa4) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x4_t4_g7_g1

0x0202,	// (0x00037fa4) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x4_t4_g7_g2

0x0202,	// (0x00037fa4) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x4_t4_g7_g3

0x0202,	// (0x00037fa4) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x4_t4_g7_g4

0x0202,	// (0x00037fa4) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x4_t4_g7_g5

0x0202,	// (0x00037fa4) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x4_t4_g7_g6

0x0210,	// (0x00037fb2) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0210,	// (0x00037fb2) list_medium_line_x4_t4_g7_g7

0x0006,

0xfae2,	// (0x00047884) list_medium_line_x4_t4_g7_g_ParamLimits

0xfae2,	// (0x00047884) list_medium_line_x4_t4_g7_g

0x024a,	// (0x00037fec) list_medium_line_x4_t4_g7_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x4_t4_g7_t1

0x024a,	// (0x00037fec) list_medium_line_x4_t4_g7_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x4_t4_g7_t2

0x024a,	// (0x00037fec) list_medium_line_x4_t4_g7_t3_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x4_t4_g7_t3

0x025e,	// (0x00038000) list_medium_line_x4_t4_g7_t4_ParamLimits

0x025e,	// (0x00038000) list_medium_line_x4_t4_g7_t4

0x025e,	// (0x00038000) list_medium_line_x4_t4_g7_t5_ParamLimits

0x025e,	// (0x00038000) list_medium_line_x4_t4_g7_t5

0x0004,

0xfaf1,	// (0x00047893) list_medium_line_x4_t4_g7_t_ParamLimits

0xfaf1,	// (0x00047893) list_medium_line_x4_t4_g7_t

0x467f,	// (0x0003c421) list_single_dyc_row_pane_ParamLimits

0x467f,	// (0x0003c421) list_single_dyc_row_pane

0xb259,	// (0x00042ffb) call5_gesture_pane_ParamLimits

0xb259,	// (0x00042ffb) call5_gesture_pane

0xb28f,	// (0x00043031) call5_windows_pane_ParamLimits

0xb28f,	// (0x00043031) call5_windows_pane

0xb323,	// (0x000430c5) call5_swipe_1_pane_cp_ParamLimits

0xb323,	// (0x000430c5) call5_swipe_1_pane_cp

0xb32f,	// (0x000430d1) call5_swipe_2_pane_cp_ParamLimits

0xb32f,	// (0x000430d1) call5_swipe_2_pane_cp

0x0453,	// (0x000381f5) call5_image_pane_cp

0xb33b,	// (0x000430dd) popup_call5_audio_first_window_cp_ParamLimits

0xb33b,	// (0x000430dd) popup_call5_audio_first_window_cp

0xdb84,	// (0x00045926) call5_swipe_1_pane_g1_cp_ParamLimits

0xdb84,	// (0x00045926) call5_swipe_1_pane_g1_cp

0xdb91,	// (0x00045933) call5_swipe_1_pane_g2_cp

0xdb99,	// (0x0004593b) call5_swipe_1_pane_t1_cp_ParamLimits

0xdb99,	// (0x0004593b) call5_swipe_1_pane_t1_cp

0xdb84,	// (0x00045926) call5_swipe_2_pane_g1_cp_ParamLimits

0xdb84,	// (0x00045926) call5_swipe_2_pane_g1_cp

0xdbae,	// (0x00045950) call5_swipe_2_pane_g2_cp

0xdbb6,	// (0x00045958) call5_swipe_2_pane_t1_cp_ParamLimits

0xdbb6,	// (0x00045958) call5_swipe_2_pane_t1_cp

0x019b,	// (0x00037f3d) main_sp_fs_email_pane

0x3232,	// (0x0003afd4) main_sp_fs_listscroll_pane_te

0x4722,	// (0x0003c4c4) popup_sp_fs_action_menu_pane_ParamLimits

0x4722,	// (0x0003c4c4) popup_sp_fs_action_menu_pane

0x0240,	// (0x00037fe2) bg_sp_fs_ctrlbar_pane_g1

0xdbcb,	// (0x0004596d) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdbd4,	// (0x00045976) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdbdd,	// (0x0004597f) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0240,	// (0x00037fe2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbda,	// (0x0004797c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x2265,	// (0x0003a007) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x2265,	// (0x0003a007) bg_sp_fs_ctrlbar_ddmenu_pane

0xdbe6,	// (0x00045988) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdbe6,	// (0x00045988) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdbf2,	// (0x00045994) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdbf2,	// (0x00045994) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbe3,	// (0x00047985) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbe3,	// (0x00047985) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdbfe,	// (0x000459a0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdbfe,	// (0x000459a0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0240,	// (0x00037fe2) list_medium_line_t2_right_icon_g1

0x09b9,	// (0x0003875b) list_medium_line_t2_right_icon_t1

0x09b9,	// (0x0003875b) list_medium_line_t2_right_icon_t2

0x0001,

0xfbe8,	// (0x0004798a) list_medium_line_t2_right_icon_t

0x0e5b,	// (0x00038bfd) bg_sp_fs_ctrlbar_pane_ParamLimits

0x0e5b,	// (0x00038bfd) bg_sp_fs_ctrlbar_pane

0xb3a2,	// (0x00043144) main_sp_fs_ctrlbar_button_pane_cp01

0xb3aa,	// (0x0004314c) main_sp_fs_ctrlbar_ddmenu_pane

0xdc52,	// (0x000459f4) main_sp_fs_ctrlbar_pane_g1

0xdc5e,	// (0x00045a00) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbed,	// (0x0004798f) main_sp_fs_ctrlbar_pane_g

0xb3e8,	// (0x0004318a) main_sp_fs_ctrlbar_pane_t1

0xb425,	// (0x000431c7) main_sp_fs_ctrlbar_pane

0xb43f,	// (0x000431e1) main_sp_fs_listscroll_pane_te_cp01

0x4768,	// (0x0003c50a) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x4768,	// (0x0003c50a) popup_sp_fs_action_menu_pane_cp01

0x019b,	// (0x00037f3d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x019b,	// (0x00037f3d) bg_sp_fs_highlight_list_pane_cp01

0x4788,	// (0x0003c52a) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4788,	// (0x0003c52a) sp_fs_action_menu_list_gene_pane_g1

0xdc85,	// (0x00045a27) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdc85,	// (0x00045a27) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfbfb,	// (0x0004799d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfbfb,	// (0x0004799d) sp_fs_action_menu_list_gene_pane_g

0x4797,	// (0x0003c539) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4797,	// (0x0003c539) sp_fs_action_menu_list_gene_pane_t1

0x47af,	// (0x0003c551) sp_fs_action_menu_list_gene_pane_ParamLimits

0x47af,	// (0x0003c551) sp_fs_action_menu_list_gene_pane

0xdc92,	// (0x00045a34) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdc92,	// (0x00045a34) popup_sp_fs_action_menu_bg_pane

0x47d2,	// (0x0003c574) sp_fs_action_menu_list_pane_ParamLimits

0x47d2,	// (0x0003c574) sp_fs_action_menu_list_pane

0x47f6,	// (0x0003c598) sp_fs_scroll_pane_cp01_ParamLimits

0x47f6,	// (0x0003c598) sp_fs_scroll_pane_cp01

0x09b9,	// (0x0003875b) list_medium_line_plain_t2_t1

0x09b9,	// (0x0003875b) list_medium_line_plain_t2_t2

0x0001,

0xfbe8,	// (0x0004798a) list_medium_line_plain_t2_t

0x09b9,	// (0x0003875b) list_medium_line_plain_t3_t1

0x09b9,	// (0x0003875b) list_medium_line_plain_t3_t2

0x09b9,	// (0x0003875b) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x00047019) list_medium_line_plain_t3_t

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g2_g1

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t2_g2_g2

0x0001,

0x05ab,	// (0x0003834d) list_medium_line_x2_t2_g2_g_ParamLimits

0x05ab,	// (0x0003834d) list_medium_line_x2_t2_g2_g

0x024a,	// (0x00037fec) list_medium_line_x2_t2_g2_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t2_g2_t1

0x024a,	// (0x00037fec) list_medium_line_x2_t2_g2_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t2_g2_t2

0x0001,

0xf22c,	// (0x00046fce) list_medium_line_x2_t2_g2_t_ParamLimits

0xf22c,	// (0x00046fce) list_medium_line_x2_t2_g2_t

0x0202,	// (0x00037fa4) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t4_g2_g1

0x0202,	// (0x00037fa4) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t4_g2_g2

0x0001,

0x05ab,	// (0x0003834d) list_medium_line_x2_t4_g2_g_ParamLimits

0x05ab,	// (0x0003834d) list_medium_line_x2_t4_g2_g

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g2_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g2_t1

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g2_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g2_t2

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g2_t3_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g2_t3

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g2_t4_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1c5,	// (0x00046f67) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1c5,	// (0x00046f67) list_medium_line_x2_t4_g2_t

0x0240,	// (0x00037fe2) list_medium_line_t3_right_iconx2_g1

0x0240,	// (0x00037fe2) list_medium_line_t3_right_iconx2_g2

0x0240,	// (0x00037fe2) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x00047135) list_medium_line_t3_right_iconx2_g

0x09b9,	// (0x0003875b) list_medium_line_t3_right_iconx2_t1

0x09b9,	// (0x0003875b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbe8,	// (0x0004798a) list_medium_line_t3_right_iconx2_t

0x0202,	// (0x00037fa4) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x3_t4_g4_g1

0x0202,	// (0x00037fa4) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x3_t4_g4_g2

0x0202,	// (0x00037fa4) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x3_t4_g4_g3

0x0202,	// (0x00037fa4) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1bc,	// (0x00046f5e) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1bc,	// (0x00046f5e) list_medium_line_x3_t4_g4_g

0x024a,	// (0x00037fec) list_medium_line_x3_t4_g4_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x3_t4_g4_t1

0x024a,	// (0x00037fec) list_medium_line_x3_t4_g4_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x3_t4_g4_t2

0x024a,	// (0x00037fec) list_medium_line_x3_t4_g4_t3_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x3_t4_g4_t3

0x024a,	// (0x00037fec) list_medium_line_x3_t4_g4_t4_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1c5,	// (0x00046f67) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1c5,	// (0x00046f67) list_medium_line_x3_t4_g4_t

0x481c,	// (0x0003c5be) list_single_dyc_row_text_pane_t1_ParamLimits

0x481c,	// (0x0003c5be) list_single_dyc_row_text_pane_t1

0x4859,	// (0x0003c5fb) list_single_dyc_row_text_pane_t2_ParamLimits

0x4859,	// (0x0003c5fb) list_single_dyc_row_text_pane_t2

0x48cf,	// (0x0003c671) list_single_dyc_row_text_pane_t3_ParamLimits

0x48cf,	// (0x0003c671) list_single_dyc_row_text_pane_t3

0x0005,

0xfc00,	// (0x000479a2) list_single_dyc_row_text_pane_t_ParamLimits

0xfc00,	// (0x000479a2) list_single_dyc_row_text_pane_t

0x49a6,	// (0x0003c748) list_single_dyc_row_pane_g1_ParamLimits

0x49a6,	// (0x0003c748) list_single_dyc_row_pane_g1

0x49b2,	// (0x0003c754) list_single_dyc_row_pane_g2_ParamLimits

0x49b2,	// (0x0003c754) list_single_dyc_row_pane_g2

0x49be,	// (0x0003c760) list_single_dyc_row_pane_g3_ParamLimits

0x49be,	// (0x0003c760) list_single_dyc_row_pane_g3

0x49ca,	// (0x0003c76c) list_single_dyc_row_pane_g4_ParamLimits

0x49ca,	// (0x0003c76c) list_single_dyc_row_pane_g4

0x0003,

0xfc0d,	// (0x000479af) list_single_dyc_row_pane_g_ParamLimits

0xfc0d,	// (0x000479af) list_single_dyc_row_pane_g

0x49d6,	// (0x0003c778) list_single_dyc_row_text_pane_ParamLimits

0x49d6,	// (0x0003c778) list_single_dyc_row_text_pane

0xe654,	// (0x000463f6) bg_sp_fs_scroll_pane

0xdca0,	// (0x00045a42) thumb_sp_fs_scroll_pane

0x0202,	// (0x00037fa4) list_medium_line_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_g1

0x024a,	// (0x00037fec) list_medium_line_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t1

0x0202,	// (0x00037fa4) list_medium_line_x2_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_g1

0x0202,	// (0x00037fa4) list_medium_line_x2_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_g2

0x0001,

0x05ab,	// (0x0003834d) list_medium_line_x2_g_ParamLimits

0x05ab,	// (0x0003834d) list_medium_line_x2_g

0x024a,	// (0x00037fec) list_medium_line_x2_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t1

0x0202,	// (0x00037fa4) list_medium_line_x3_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x3_g1

0xdca9,	// (0x00045a4b) list_medium_line_x3_g2_ParamLimits

0xdca9,	// (0x00045a4b) list_medium_line_x3_g2

0x0001,

0xfc16,	// (0x000479b8) list_medium_line_x3_g_ParamLimits

0xfc16,	// (0x000479b8) list_medium_line_x3_g

0xdcb7,	// (0x00045a59) list_medium_line_x3_t1_ParamLimits

0xdcb7,	// (0x00045a59) list_medium_line_x3_t1

0xdccb,	// (0x00045a6d) thumb_sp_fs_scroll_pane_g1

0xdcd4,	// (0x00045a76) thumb_sp_fs_scroll_pane_g2

0xdcdd,	// (0x00045a7f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc1b,	// (0x000479bd) thumb_sp_fs_scroll_pane_g

0xdccb,	// (0x00045a6d) bg_sp_fs_scroll_pane_g1

0xdcd4,	// (0x00045a76) bg_sp_fs_scroll_pane_g2

0xdcdd,	// (0x00045a7f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc1b,	// (0x000479bd) bg_sp_fs_scroll_pane_g

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g4_g1

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g4_g2

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g4_g3

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1bc,	// (0x00046f5e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1bc,	// (0x00046f5e) list_medium_line_x2_t3_g4_g

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g4_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g4_t1

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g4_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g4_t2

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g4_t3_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00046f57) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00046f57) list_medium_line_x2_t3_g4_t

0x0202,	// (0x00037fa4) list_medium_line_g2_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_g2_g1

0x0202,	// (0x00037fa4) list_medium_line_g2_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_g2_g2

0x0001,

0x05ab,	// (0x0003834d) list_medium_line_g2_g_ParamLimits

0x05ab,	// (0x0003834d) list_medium_line_g2_g

0x024a,	// (0x00037fec) list_medium_line_g2_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_g2_t1

0x0202,	// (0x00037fa4) list_medium_line_t3_g2_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t3_g2_g1

0x0202,	// (0x00037fa4) list_medium_line_t3_g2_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t3_g2_g2

0x0001,

0x05ab,	// (0x0003834d) list_medium_line_t3_g2_g_ParamLimits

0x05ab,	// (0x0003834d) list_medium_line_t3_g2_g

0x024a,	// (0x00037fec) list_medium_line_t3_g2_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t3_g2_t1

0x024a,	// (0x00037fec) list_medium_line_t3_g2_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t3_g2_t2

0x024a,	// (0x00037fec) list_medium_line_t3_g2_t3_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00046f57) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00046f57) list_medium_line_t3_g2_t

0x0240,	// (0x00037fe2) list_medium_line_right_icon_g1

0x09b9,	// (0x0003875b) list_medium_line_right_icon_t1

0x0202,	// (0x00037fa4) list_medium_line_t2_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t2_g1

0x024a,	// (0x00037fec) list_medium_line_t2_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t2_t1

0x024a,	// (0x00037fec) list_medium_line_t2_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t2_t2

0x0001,

0xf22c,	// (0x00046fce) list_medium_line_t2_t_ParamLimits

0xf22c,	// (0x00046fce) list_medium_line_t2_t

0x0202,	// (0x00037fa4) list_medium_line_t3_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t3_g1

0x024a,	// (0x00037fec) list_medium_line_t3_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t3_t1

0x024a,	// (0x00037fec) list_medium_line_t3_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t3_t2

0x024a,	// (0x00037fec) list_medium_line_t3_t3_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00046f57) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00046f57) list_medium_line_t3_t

0x0202,	// (0x00037fa4) list_medium_line_g3_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_g3_g1

0x0202,	// (0x00037fa4) list_medium_line_g3_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_g3_g2

0x0202,	// (0x00037fa4) list_medium_line_g3_g3_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00046f50) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00046f50) list_medium_line_g3_g

0x024a,	// (0x00037fec) list_medium_line_g3_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_g3_t1

0x0202,	// (0x00037fa4) list_medium_line_t2_g3_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t2_g3_g1

0x0202,	// (0x00037fa4) list_medium_line_t2_g3_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t2_g3_g2

0x0202,	// (0x00037fa4) list_medium_line_t2_g3_g3_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00046f50) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00046f50) list_medium_line_t2_g3_g

0x024a,	// (0x00037fec) list_medium_line_t2_g3_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t2_g3_t1

0x024a,	// (0x00037fec) list_medium_line_t2_g3_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t2_g3_t2

0x0001,

0xf22c,	// (0x00046fce) list_medium_line_t2_g3_t_ParamLimits

0xf22c,	// (0x00046fce) list_medium_line_t2_g3_t

0x0202,	// (0x00037fa4) list_medium_line_t3_g3_g1_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t3_g3_g1

0x0202,	// (0x00037fa4) list_medium_line_t3_g3_g2_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t3_g3_g2

0x0202,	// (0x00037fa4) list_medium_line_t3_g3_g3_ParamLimits

0x0202,	// (0x00037fa4) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00046f50) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00046f50) list_medium_line_t3_g3_g

0x024a,	// (0x00037fec) list_medium_line_t3_g3_t1_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t3_g3_t1

0x024a,	// (0x00037fec) list_medium_line_t3_g3_t2_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t3_g3_t2

0x024a,	// (0x00037fec) list_medium_line_t3_g3_t3_ParamLimits

0x024a,	// (0x00037fec) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00046f57) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00046f57) list_medium_line_t3_g3_t

0x0240,	// (0x00037fe2) list_medium_line_right_iconx2_g1

0x0240,	// (0x00037fe2) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00046e51) list_medium_line_right_iconx2_g

0x09b9,	// (0x0003875b) list_medium_line_right_iconx2_t1

0x0240,	// (0x00037fe2) list_medium_line_t2_right_iconx2_g1

0x0240,	// (0x00037fe2) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00046e51) list_medium_line_t2_right_iconx2_g

0x09b9,	// (0x0003875b) list_medium_line_t2_right_iconx2_t1

0x09b9,	// (0x0003875b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbe8,	// (0x0004798a) list_medium_line_t2_right_iconx2_t

0x09b9,	// (0x0003875b) list_medium_line_x4_t4_t1

0x09b9,	// (0x0003875b) list_medium_line_x4_t4_t2

0x09b9,	// (0x0003875b) list_medium_line_x4_t4_t3

0x09b9,	// (0x0003875b) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x00047020) list_medium_line_x4_t4_t

0xb484,	// (0x00043226) tport_appsw_pane_ParamLimits

0xb484,	// (0x00043226) tport_appsw_pane

0xb492,	// (0x00043234) tport_contact_pane_ParamLimits

0xb492,	// (0x00043234) tport_contact_pane

0xb4a2,	// (0x00043244) tport_listscroll_pane_ParamLimits

0xb4a2,	// (0x00043244) tport_listscroll_pane

0xb4b2,	// (0x00043254) cell_tport_appsw_pane_ParamLimits

0xb4b2,	// (0x00043254) cell_tport_appsw_pane

0x0210,	// (0x00037fb2) tport_appsw_pane_g1_ParamLimits

0x0210,	// (0x00037fb2) tport_appsw_pane_g1

0xb4df,	// (0x00043281) tport_contact_pane_g1

0xb4e8,	// (0x0004328a) tport_contact_pane_t1

0xb4f6,	// (0x00043298) tport_contact_pane_t2

0x0001,

0xfc22,	// (0x000479c4) tport_contact_pane_t

0xdce6,	// (0x00045a88) list_tport_pane

0xdcef,	// (0x00045a91) scroll_pane_cp_030

0xb50c,	// (0x000432ae) cell_tport_appsw_pane_g1

0xb51c,	// (0x000432be) cell_tport_appsw_pane_t1

0xb52a,	// (0x000432cc) grid_highlight_pane_cp019

0xb532,	// (0x000432d4) list_tport_double_graphic_pane_ParamLimits

0xb532,	// (0x000432d4) list_tport_double_graphic_pane

0x019b,	// (0x00037f3d) list_highlight_pane_cp023_ParamLimits

0x019b,	// (0x00037f3d) list_highlight_pane_cp023

0xb53f,	// (0x000432e1) list_tport_double_graphic_pane_g1_ParamLimits

0xb53f,	// (0x000432e1) list_tport_double_graphic_pane_g1

0xb54c,	// (0x000432ee) list_tport_double_graphic_pane_t1_ParamLimits

0xb54c,	// (0x000432ee) list_tport_double_graphic_pane_t1

0xb561,	// (0x00043303) list_tport_double_graphic_pane_t2_ParamLimits

0xb561,	// (0x00043303) list_tport_double_graphic_pane_t2

0x0001,

0xfc2e,	// (0x000479d0) list_tport_double_graphic_pane_t_ParamLimits

0xfc2e,	// (0x000479d0) list_tport_double_graphic_pane_t

0xe654,	// (0x000463f6) main_cale_note_pane

0x989e,	// (0x00041640) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x989e,	// (0x00041640) cell_vitu2_function_top_wide_pane_cp01

0xb011,	// (0x00042db3) wait_bar_pane_cp05_ParamLimits

0x019b,	// (0x00037f3d) listscroll_cmail_pane

0xdd00,	// (0x00045aa2) list_cmail_pane

0xb573,	// (0x00043315) list_cmail_body_pane

0xb58d,	// (0x0004332f) list_single_cmail_header_caption_pane

0xb5ad,	// (0x0004334f) list_single_cmail_header_detail_pane_ParamLimits

0xb5ad,	// (0x0004334f) list_single_cmail_header_detail_pane

0xdd23,	// (0x00045ac5) list_single_cmail_header_caption_pane_t1

0x49f5,	// (0x0003c797) list_single_cmail_header_detail_pane_g1_ParamLimits

0x49f5,	// (0x0003c797) list_single_cmail_header_detail_pane_g1

0x4a0d,	// (0x0003c7af) list_single_cmail_header_detail_pane_g2_ParamLimits

0x4a0d,	// (0x0003c7af) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc33,	// (0x000479d5) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc33,	// (0x000479d5) list_single_cmail_header_detail_pane_g

0x4a19,	// (0x0003c7bb) list_single_cmail_header_detail_pane_t1_ParamLimits

0x4a19,	// (0x0003c7bb) list_single_cmail_header_detail_pane_t1

0x4a79,	// (0x0003c81b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x4a79,	// (0x0003c81b) list_single_cmail_header_editor_pane_bg

0xd9ae,	// (0x00045750) list_cmail_body_pane_g1

0xdd47,	// (0x00045ae9) list_cmail_body_pane_t1

0x2cb8,	// (0x0003aa5a) list_single_cmail_header_editor_pane_bg_g1

0x067f,	// (0x00038421) list_single_cmail_header_editor_pane_bg_g1_copy1

0x2cc8,	// (0x0003aa6a) list_single_cmail_header_editor_pane_bg_g1_copy2

0x2cc0,	// (0x0003aa62) list_single_cmail_header_editor_pane_bg_g1_copy3

0x2f12,	// (0x0003acb4) list_single_cmail_header_editor_pane_bg_g1_copy4

0x2ce8,	// (0x0003aa8a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x2cd8,	// (0x0003aa7a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x2ce0,	// (0x0003aa82) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x065f,	// (0x00038401) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xb5e3,	// (0x00043385) calenote_gesture_pane_ParamLimits

0xb5e3,	// (0x00043385) calenote_gesture_pane

0xb5fd,	// (0x0004339f) calenote_window_pane_ParamLimits

0xb5fd,	// (0x0004339f) calenote_window_pane

0xdd55,	// (0x00045af7) popup_note_window_cp01

0xb615,	// (0x000433b7) calenote_swipe_1_pane_ParamLimits

0xb615,	// (0x000433b7) calenote_swipe_1_pane

0xb32f,	// (0x000430d1) calenote_swipe_2_pane_ParamLimits

0xb32f,	// (0x000430d1) calenote_swipe_2_pane

0xdb84,	// (0x00045926) calenote_swipe_1_pane_g1_ParamLimits

0xdb84,	// (0x00045926) calenote_swipe_1_pane_g1

0xdd67,	// (0x00045b09) calenote_swipe_1_pane_g2_ParamLimits

0xdd67,	// (0x00045b09) calenote_swipe_1_pane_g2

0x0001,

0xfc3f,	// (0x000479e1) calenote_swipe_1_pane_g_ParamLimits

0xfc3f,	// (0x000479e1) calenote_swipe_1_pane_g

0xdd73,	// (0x00045b15) calenote_swipe_1_pane_t1_ParamLimits

0xdd73,	// (0x00045b15) calenote_swipe_1_pane_t1

0xdb84,	// (0x00045926) calenote_swipe_2_pane_g1_ParamLimits

0xdb84,	// (0x00045926) calenote_swipe_2_pane_g1

0xdd92,	// (0x00045b34) calenote_swipe_2_pane_g2_ParamLimits

0xdd92,	// (0x00045b34) calenote_swipe_2_pane_g2

0x0001,

0xfc44,	// (0x000479e6) calenote_swipe_2_pane_g_ParamLimits

0xfc44,	// (0x000479e6) calenote_swipe_2_pane_g

0xdd9e,	// (0x00045b40) calenote_swipe_2_pane_t1_ParamLimits

0xdd9e,	// (0x00045b40) calenote_swipe_2_pane_t1

0xe654,	// (0x000463f6) main_mup_navstr_pane

0x8772,	// (0x00040514) main_mup3_pane_t7_ParamLimits

0x8772,	// (0x00040514) main_mup3_pane_t7

0x8f80,	// (0x00040d22) main_mp4_pane_g6_ParamLimits

0x8f80,	// (0x00040d22) main_mp4_pane_g6

0x92d1,	// (0x00041073) main_image3_pane_t4_ParamLimits

0x92d1,	// (0x00041073) main_image3_pane_t4

0xb628,	// (0x000433ca) popup_navstr_preview_pane_ParamLimits

0xb628,	// (0x000433ca) popup_navstr_preview_pane

0xb634,	// (0x000433d6) scroll_navstr_pane_ParamLimits

0xb634,	// (0x000433d6) scroll_navstr_pane

0xe654,	// (0x000463f6) bg_popup_preview_window_pane_cp04

0xddc5,	// (0x00045b67) popup_navstr_preview_pane_t1

0xb640,	// (0x000433e2) scroll_navstr_pane_g1_ParamLimits

0xb640,	// (0x000433e2) scroll_navstr_pane_g1

0xb64d,	// (0x000433ef) scroll_navstr_pane_t1_ParamLimits

0xb64d,	// (0x000433ef) scroll_navstr_pane_t1

0xdd5e,	// (0x00045b00) bg_button_pane_cp014

0xdd5e,	// (0x00045b00) bg_button_pane_cp030

0x46c8,	// (0x0003c46a) list_double_fisheye_pane_g4_ParamLimits

0x46c8,	// (0x0003c46a) list_double_fisheye_pane_g4

0x46d4,	// (0x0003c476) list_double_fisheye_pane_g5_ParamLimits

0x46d4,	// (0x0003c476) list_double_fisheye_pane_g5

0xdd17,	// (0x00045ab9) sp_fs_scroll_pane_cp03

0xdc52,	// (0x000459f4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdc5e,	// (0x00045a00) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbed,	// (0x0004798f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xb3e8,	// (0x0004318a) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdd0f,	// (0x00045ab1) sp_fs_scroll_pane_cp02

0x03af,	// (0x00038151) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x03af,	// (0x00038151) popup_sp_fs_calendar_preview_list_single_pane

0xe654,	// (0x000463f6) main_cam6_pano_pane

0x019b,	// (0x00037f3d) main_mup3_pane_ParamLimits

0xe654,	// (0x000463f6) main_phacti_pane

0xaee4,	// (0x00042c86) bg_button_pane_cp11

0xaefc,	// (0x00042c9e) main_mobtv_info_pane_g2_ParamLimits

0xaefc,	// (0x00042c9e) main_mobtv_info_pane_g2

0x0001,

0xfb52,	// (0x000478f4) main_mobtv_info_pane_g_ParamLimits

0xfb52,	// (0x000478f4) main_mobtv_info_pane_g

0x025e,	// (0x00038000) sc_clock_pane_t5_ParamLimits

0x025e,	// (0x00038000) sc_clock_pane_t5

0x0e39,	// (0x00038bdb) main_radioblah_pane_g1_ParamLimits

0x0e47,	// (0x00038be9) main_radioblah_pane_t3_ParamLimits

0x0e47,	// (0x00038be9) main_radioblah_pane_t3

0x0e47,	// (0x00038be9) main_radioblah_pane_t4_ParamLimits

0x0e47,	// (0x00038be9) main_radioblah_pane_t4

0x01f4,	// (0x00037f96) main_radioblah_text_pane_ParamLimits

0x01f4,	// (0x00037f96) main_radioblah_text_pane

0xdabb,	// (0x0004585d) main_radioblah_info_pane_g1_ParamLimits

0xdaff,	// (0x000458a1) main_radioblah_info_pane_t4_ParamLimits

0xdaff,	// (0x000458a1) main_radioblah_info_pane_t4

0x019b,	// (0x00037f3d) main_sp_fs_calendar_pane

0xb65f,	// (0x00043401) main_phacti_pane_g1

0xb667,	// (0x00043409) phacti_note_pane_ParamLimits

0xb667,	// (0x00043409) phacti_note_pane

0xdddc,	// (0x00045b7e) phacti_term_pane_ParamLimits

0xdddc,	// (0x00045b7e) phacti_term_pane

0xddf1,	// (0x00045b93) phacti_note_pane_t1_ParamLimits

0xddf1,	// (0x00045b93) phacti_note_pane_t1

0x4a90,	// (0x0003c832) phacti_term_pane_g1

0x4a98,	// (0x0003c83a) phacti_term_pane_t1_ParamLimits

0x4a98,	// (0x0003c83a) phacti_term_pane_t1

0xde08,	// (0x00045baa) popup_sp_fs_calendar_preview_list_single_pane_g1

0xde10,	// (0x00045bb2) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc4e,	// (0x000479f0) popup_sp_fs_calendar_preview_list_single_pane_g

0xde18,	// (0x00045bba) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xde18,	// (0x00045bba) popup_sp_fs_calendar_preview_list_single_pane_t1

0xde2e,	// (0x00045bd0) aid_popup_sp_fs_bg_corner_pane

0x0240,	// (0x00037fe2) popup_sp_fs_calendar_preview_bg_pane_g1

0xe654,	// (0x000463f6) popup_sp_fs_calendar_preview_bg_pane

0xde36,	// (0x00045bd8) popup_sp_fs_calendar_preview_list_pane

0x0e5b,	// (0x00038bfd) bg_main_sp_fs_cale_pane_ParamLimits

0x0e5b,	// (0x00038bfd) bg_main_sp_fs_cale_pane

0x4acb,	// (0x0003c86d) listscroll_cale_mrui_pane_ParamLimits

0x4acb,	// (0x0003c86d) listscroll_cale_mrui_pane

0x4ae0,	// (0x0003c882) listscroll_sp_fs_schedule_track_pane

0x4ae9,	// (0x0003c88b) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x4ae9,	// (0x0003c88b) main_sp_fs_ctrlbar_pane_cp01

0xde3e,	// (0x00045be0) main_sp_fs_ribbon_pane

0x4afc,	// (0x0003c89e) popup_sp_fs_cale_preview_window

0xb6ca,	// (0x0004346c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xb6ca,	// (0x0004346c) list_single_sp_fs_schedule_track_pane

0x01f4,	// (0x00037f96) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x01f4,	// (0x00037f96) bg_sp_fs_highlight_list_pane_cp03

0xb6e1,	// (0x00043483) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xb6e1,	// (0x00043483) list_single_sp_fs_schedule_track_pane_g1

0xb6ed,	// (0x0004348f) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xb6ed,	// (0x0004348f) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc53,	// (0x000479f5) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc53,	// (0x000479f5) list_single_sp_fs_schedule_track_pane_g

0xb6f9,	// (0x0004349b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xb6f9,	// (0x0004349b) list_single_sp_fs_schedule_track_pane_t1

0xb717,	// (0x000434b9) sp_fs_schedule_track_pane_ParamLimits

0xb717,	// (0x000434b9) sp_fs_schedule_track_pane

0xde46,	// (0x00045be8) sp_fs_schedule_track_pane_g1

0xde4e,	// (0x00045bf0) sp_fs_schedule_track_pane_g2

0xde56,	// (0x00045bf8) sp_fs_schedule_track_pane_g3

0xde5e,	// (0x00045c00) sp_fs_schedule_track_pane_g4

0xde66,	// (0x00045c08) sp_fs_schedule_track_pane_g5

0x0004,

0xfc58,	// (0x000479fa) sp_fs_schedule_track_pane_g

0x2cb8,	// (0x0003aa5a) bg_sp_fs_schedule_viewer_highlight_g1

0x067f,	// (0x00038421) bg_sp_fs_schedule_viewer_highlight_g2

0x2cc0,	// (0x0003aa62) bg_sp_fs_schedule_viewer_highlight_g3

0x2cc8,	// (0x0003aa6a) bg_sp_fs_schedule_viewer_highlight_g4

0x2f12,	// (0x0003acb4) bg_sp_fs_schedule_viewer_highlight_g5

0x2cd8,	// (0x0003aa7a) bg_sp_fs_schedule_viewer_highlight_g6

0x2ce0,	// (0x0003aa82) bg_sp_fs_schedule_viewer_highlight_g7

0x2ce8,	// (0x0003aa8a) bg_sp_fs_schedule_viewer_highlight_g8

0x065f,	// (0x00038401) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc63,	// (0x00047a05) bg_sp_fs_schedule_viewer_highlight_g

0xe654,	// (0x000463f6) bg_main_sp_fs_ribbon_pane

0xb729,	// (0x000434cb) main_sp_fs_ribbon_pane_g1

0xde6e,	// (0x00045c10) main_sp_fs_ribbon_pane_t1

0xb732,	// (0x000434d4) main_sp_fs_ribbon_pane_t2

0xde7d,	// (0x00045c1f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc76,	// (0x00047a18) main_sp_fs_ribbon_pane_t

0xde8c,	// (0x00045c2e) main_sp_fs_ribbon_scheduler_pane

0xde94,	// (0x00045c36) bg_main_sp_fs_ribbon_pane_g1

0xde9d,	// (0x00045c3f) bg_main_sp_fs_ribbon_pane_g2

0xdea6,	// (0x00045c48) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc7d,	// (0x00047a1f) bg_main_sp_fs_ribbon_pane_g

0xdeae,	// (0x00045c50) main_sp_fs_ribbon_scheduler_pane_g1

0xdeb7,	// (0x00045c59) main_sp_fs_ribbon_scheduler_pane_g2

0xdec0,	// (0x00045c62) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc84,	// (0x00047a26) main_sp_fs_ribbon_scheduler_pane_g

0xdec9,	// (0x00045c6b) list_cale_mrui_pane

0xb741,	// (0x000434e3) sp_fs_scroll_pane_cp07_ParamLimits

0xb741,	// (0x000434e3) sp_fs_scroll_pane_cp07

0xb75d,	// (0x000434ff) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xb75d,	// (0x000434ff) bg_sp_fs_schedule_viewer_highlight

0xded6,	// (0x00045c78) list_single_sp_fs_schedule_track_pane_cp01

0xdede,	// (0x00045c80) list_sp_fs_schedule_track_pane

0xdee6,	// (0x00045c88) sp_fs_scroll_pane_cp06_ParamLimits

0xdee6,	// (0x00045c88) sp_fs_scroll_pane_cp06

0x0240,	// (0x00037fe2) bgmain_sp_fs_calendar_pane_g1

0x4b0e,	// (0x0003c8b0) list_single_cale_mrui_pane_ParamLimits

0x4b0e,	// (0x0003c8b0) list_single_cale_mrui_pane

0x4b32,	// (0x0003c8d4) list_single_cale_mrui_row_pane_ParamLimits

0x4b32,	// (0x0003c8d4) list_single_cale_mrui_row_pane

0x4b3f,	// (0x0003c8e1) list_single_cale_mrui_row_pane_g1_ParamLimits

0x4b3f,	// (0x0003c8e1) list_single_cale_mrui_row_pane_g1

0x4b77,	// (0x0003c919) list_single_cale_mrui_row_pane_t1_ParamLimits

0x4b77,	// (0x0003c919) list_single_cale_mrui_row_pane_t1

0x4b89,	// (0x0003c92b) list_single_cale_mrui_row_pane_t2_ParamLimits

0x4b89,	// (0x0003c92b) list_single_cale_mrui_row_pane_t2

0x4bef,	// (0x0003c991) list_single_cale_mrui_row_pane_t3_ParamLimits

0x4bef,	// (0x0003c991) list_single_cale_mrui_row_pane_t3

0x4c1e,	// (0x0003c9c0) list_single_cale_mrui_row_pane_t4_ParamLimits

0x4c1e,	// (0x0003c9c0) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc92,	// (0x00047a34) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc92,	// (0x00047a34) list_single_cale_mrui_row_pane_t

0x4c4d,	// (0x0003c9ef) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x4c4d,	// (0x0003c9ef) list_single_cmail_header_editor_pane_bg_cp01

0x4c77,	// (0x0003ca19) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x4c77,	// (0x0003ca19) list_single_cmail_header_editor_pane_bg_cp02

0xdf05,	// (0x00045ca7) main_radioblah_text_pane_t1_ParamLimits

0xdf05,	// (0x00045ca7) main_radioblah_text_pane_t1

0xdf1f,	// (0x00045cc1) cam6_indi_pane_cp01

0xdf27,	// (0x00045cc9) cam6_mode_pane_cp01

0xdf2f,	// (0x00045cd1) cam6_pano_pane

0xdf38,	// (0x00045cda) cam6_zoom_pane_cp01

0xdf42,	// (0x00045ce4) cam6_pano_image_pane

0xdf4b,	// (0x00045ced) cam6_pano_pane_g1

0xd9ae,	// (0x00045750) cam6_pano_pane_g2

0xdf54,	// (0x00045cf6) cam6_pano_pane_g3

0xdf5d,	// (0x00045cff) cam6_pano_pane_g4

0x2a08,	// (0x0003a7aa) cam6_pano_pane_g5

0xdf66,	// (0x00045d08) cam6_pano_pane_g6

0xdf6e,	// (0x00045d10) cam6_pano_pane_g7

0xdf76,	// (0x00045d18) cam6_pano_pane_g8

0xdf7f,	// (0x00045d21) cam6_pano_pane_g9

0x0008,

0xfc9b,	// (0x00047a3d) cam6_pano_pane_g

0xe654,	// (0x000463f6) main_browser_tag_pane

0xddbd,	// (0x00045b5f) grid_navstr_albumart_pane

0xdf8a,	// (0x00045d2c) cell_navstr_albumart_pane_ParamLimits

0xdf8a,	// (0x00045d2c) cell_navstr_albumart_pane

0xdfa6,	// (0x00045d48) cell_navstr_albumart_pane_g1

0x1ef1,	// (0x00039c93) cell_navstr_albumart_pane_g2

0x1f01,	// (0x00039ca3) cell_navstr_albumart_pane_g3

0x1ef9,	// (0x00039c9b) cell_navstr_albumart_pane_g4

0x0003,

0xfcae,	// (0x00047a50) cell_navstr_albumart_pane_g

0xb76a,	// (0x0004350c) bt_list_pane_ParamLimits

0xb76a,	// (0x0004350c) bt_list_pane

0xb783,	// (0x00043525) bt_list_pane_t1

0xb792,	// (0x00043534) bt_list_pane_t2

0x0001,

0xfcb7,	// (0x00047a59) bt_list_pane_t

0xe654,	// (0x000463f6) main_cale_prevew_pane

0xb7a1,	// (0x00043543) popup_cale_preview_window_ParamLimits

0xb7a1,	// (0x00043543) popup_cale_preview_window

0x019b,	// (0x00037f3d) bg_popup_preview_window_pane_cp05_ParamLimits

0x019b,	// (0x00037f3d) bg_popup_preview_window_pane_cp05

0xdfae,	// (0x00045d50) list_cale_preview_pane_ParamLimits

0xdfae,	// (0x00045d50) list_cale_preview_pane

0xb7be,	// (0x00043560) list_double_cale_preview_pane_ParamLimits

0xb7be,	// (0x00043560) list_double_cale_preview_pane

0xb7d2,	// (0x00043574) list_single_cale_preview_pane_ParamLimits

0xb7d2,	// (0x00043574) list_single_cale_preview_pane

0xb7ea,	// (0x0004358c) list_single_cale_preview_pane_g1

0xb7f2,	// (0x00043594) list_single_cale_preview_pane_t1_ParamLimits

0xb7f2,	// (0x00043594) list_single_cale_preview_pane_t1

0xb807,	// (0x000435a9) list_double_cale_preview_pane_g1

0xb80f,	// (0x000435b1) list_double_cale_preview_pane_t1_ParamLimits

0xb80f,	// (0x000435b1) list_double_cale_preview_pane_t1

0xb824,	// (0x000435c6) list_double_cale_preview_pane_t2_ParamLimits

0xb824,	// (0x000435c6) list_double_cale_preview_pane_t2

0x0001,

0xfcbc,	// (0x00047a5e) list_double_cale_preview_pane_t_ParamLimits

0xfcbc,	// (0x00047a5e) list_double_cale_preview_pane_t

0xe654,	// (0x000463f6) main_ezdial_pane

0x019b,	// (0x00037f3d) main_sp_fs_email_pane_ParamLimits

0xb349,	// (0x000430eb) cmail_ddmenu_btn01_pane_ParamLimits

0xb349,	// (0x000430eb) cmail_ddmenu_btn01_pane

0xb366,	// (0x00043108) cmail_ddmenu_btn02_pane_ParamLimits

0xb366,	// (0x00043108) cmail_ddmenu_btn02_pane

0xb384,	// (0x00043126) cmail_ddmenu_btn03_pane_ParamLimits

0xb384,	// (0x00043126) cmail_ddmenu_btn03_pane

0xb425,	// (0x000431c7) main_sp_fs_ctrlbar_pane_ParamLimits

0xb43f,	// (0x000431e1) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb573,	// (0x00043315) list_cmail_body_pane_ParamLimits

0xdd31,	// (0x00045ad3) bg_button_pane_cp12

0xdd3a,	// (0x00045adc) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdd3a,	// (0x00045adc) list_single_cmail_header_detail_pane_g3

0x4a55,	// (0x0003c7f7) list_single_cmail_header_detail_pane_t2_ParamLimits

0x4a55,	// (0x0003c7f7) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc3a,	// (0x000479dc) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc3a,	// (0x000479dc) list_single_cmail_header_detail_pane_t

0x4aad,	// (0x0003c84f) phacti_term_pane_t2_ParamLimits

0x4aad,	// (0x0003c84f) phacti_term_pane_t2

0x0001,

0xfc49,	// (0x000479eb) phacti_term_pane_t_ParamLimits

0xfc49,	// (0x000479eb) phacti_term_pane_t

0xdfba,	// (0x00045d5c) aid_size_list_single_double

0xb83c,	// (0x000435de) popup_ezdial_listscroll_window

0xdfc6,	// (0x00045d68) popup_number_entry_window_cp01

0x0453,	// (0x000381f5) bg_popup_call_pane_cp09

0xdfd3,	// (0x00045d75) ezdial_list_pane

0xdfdb,	// (0x00045d7d) scroll_pane_cp23

0x2265,	// (0x0003a007) bg_button_pane_cp028_ParamLimits

0x2265,	// (0x0003a007) bg_button_pane_cp028

0xb858,	// (0x000435fa) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xb858,	// (0x000435fa) cmail_ddmenu_btn01_pane_g1

0xb86a,	// (0x0004360c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xb86a,	// (0x0004360c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcc1,	// (0x00047a63) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcc1,	// (0x00047a63) cmail_ddmenu_btn01_pane_g

0xdfe3,	// (0x00045d85) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xdfe3,	// (0x00045d85) cmail_ddmenu_btn01_pane_t1

0x0e5b,	// (0x00038bfd) bg_button_pane_cp029_ParamLimits

0x0e5b,	// (0x00038bfd) bg_button_pane_cp029

0xb876,	// (0x00043618) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xb876,	// (0x00043618) cmail_ddmenu_btn02_pane_g1

0xb88e,	// (0x00043630) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xb88e,	// (0x00043630) cmail_ddmenu_btn02_pane_t1

0x01f4,	// (0x00037f96) bg_button_pane_cp031_ParamLimits

0x01f4,	// (0x00037f96) bg_button_pane_cp031

0xb876,	// (0x00043618) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xb876,	// (0x00043618) cmail_ddmenu_btn03_pane_g1

0xb88e,	// (0x00043630) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xb88e,	// (0x00043630) cmail_ddmenu_btn03_pane_t1

0x024a,	// (0x00037fec) cell_dialer2_keypad_pane_t1_ParamLimits

0x299d,	// (0x0003a73f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x299d,	// (0x0003a73f) cell_dialer2_keypad_pane_t1_copy1

0xad11,	// (0x00042ab3) ncimui_group_button_pane

0x019b,	// (0x00037f3d) main_sp_fs_calendar_pane_ParamLimits

0xb58d,	// (0x0004332f) list_single_cmail_header_caption_pane_ParamLimits

0x4ac2,	// (0x0003c864) aid_recal_txt_sm_pane

0xe654,	// (0x000463f6) mian_recal_day_pane

0x4afc,	// (0x0003c89e) popup_sp_fs_cale_preview_window_ParamLimits

0xdff9,	// (0x00045d9b) list_recal_day_pane

0x4caf,	// (0x0003ca51) list_single_recal_day_pane_ParamLimits

0x4caf,	// (0x0003ca51) list_single_recal_day_pane

0xe020,	// (0x00045dc2) list_single_recal_day_pane_g1_ParamLimits

0xe020,	// (0x00045dc2) list_single_recal_day_pane_g1

0x4cc1,	// (0x0003ca63) list_single_recal_day_pane_g2_ParamLimits

0x4cc1,	// (0x0003ca63) list_single_recal_day_pane_g2

0x4ccd,	// (0x0003ca6f) list_single_recal_day_pane_g3_ParamLimits

0x4ccd,	// (0x0003ca6f) list_single_recal_day_pane_g3

0x4cd9,	// (0x0003ca7b) list_single_recal_day_pane_g4_ParamLimits

0x4cd9,	// (0x0003ca7b) list_single_recal_day_pane_g4

0x4ce7,	// (0x0003ca89) list_single_recal_day_pane_g5_ParamLimits

0x4ce7,	// (0x0003ca89) list_single_recal_day_pane_g5

0x4cfd,	// (0x0003ca9f) list_single_recal_day_pane_g6_ParamLimits

0x4cfd,	// (0x0003ca9f) list_single_recal_day_pane_g6

0x0004,

0xfcd0,	// (0x00047a72) list_single_recal_day_pane_g_ParamLimits

0xfcd0,	// (0x00047a72) list_single_recal_day_pane_g

0x4d11,	// (0x0003cab3) list_single_recal_day_pane_t1

0x4d23,	// (0x0003cac5) list_single_recal_day_pane_t2

0x0001,

0xfcdb,	// (0x00047a7d) list_single_recal_day_pane_t

0xb8b2,	// (0x00043654) ncimui_query_button_pane_ParamLimits

0xb8b2,	// (0x00043654) ncimui_query_button_pane

0xb8c2,	// (0x00043664) ncimui_query_button_pane_t1_ParamLimits

0xb8c2,	// (0x00043664) ncimui_query_button_pane_t1

0xe02c,	// (0x00045dce) ncimui_query_button_pane_t2_ParamLimits

0xe02c,	// (0x00045dce) ncimui_query_button_pane_t2

0x0001,

0xfce0,	// (0x00047a82) ncimui_query_button_pane_t_ParamLimits

0xfce0,	// (0x00047a82) ncimui_query_button_pane_t

0xb8d5,	// (0x00043677) query_button_pane_ParamLimits

0xb8d5,	// (0x00043677) query_button_pane

0xe654,	// (0x000463f6) bg_button_pane_cp0028

0xe03f,	// (0x00045de1) query_button_pane_t1

0x7cb4,	// (0x0003fa56) main_tport_pane_ParamLimits

0xb45a,	// (0x000431fc) bg_popup_window_pane_cp01_ParamLimits

0xb45a,	// (0x000431fc) bg_popup_window_pane_cp01

0xb468,	// (0x0004320a) heading_pane_cp08_ParamLimits

0xb468,	// (0x0004320a) heading_pane_cp08

0xb476,	// (0x00043218) heading_pane_cp07_ParamLimits

0xb476,	// (0x00043218) heading_pane_cp07

0xb50c,	// (0x000432ae) cell_tport_appsw_pane_g2

0x0002,

0xfc27,	// (0x000479c9) cell_tport_appsw_pane_g

0x4159,	// (0x0003befb) input_candi_list_open_g1

0x0859,	// (0x000385fb) list_cale_time_pane_g6_ParamLimits

0x0859,	// (0x000385fb) list_cale_time_pane_g6

0x819e,	// (0x0003ff40) aid_size_touch_calib_1_ParamLimits

0x819e,	// (0x0003ff40) aid_size_touch_calib_1

0x81aa,	// (0x0003ff4c) aid_size_touch_calib_2_ParamLimits

0x81aa,	// (0x0003ff4c) aid_size_touch_calib_2

0x81b8,	// (0x0003ff5a) aid_size_touch_calib_3_ParamLimits

0x81b8,	// (0x0003ff5a) aid_size_touch_calib_3

0x81c8,	// (0x0003ff6a) aid_size_touch_calib_4_ParamLimits

0x81c8,	// (0x0003ff6a) aid_size_touch_calib_4

0x81d6,	// (0x0003ff78) main_touch_calib_button_group_pane_ParamLimits

0x81d6,	// (0x0003ff78) main_touch_calib_button_group_pane

0x81e4,	// (0x0003ff86) main_touch_calib_pane_g1_ParamLimits

0x81f0,	// (0x0003ff92) main_touch_calib_pane_g2_ParamLimits

0x81fc,	// (0x0003ff9e) main_touch_calib_pane_g3_ParamLimits

0x8208,	// (0x0003ffaa) main_touch_calib_pane_g4_ParamLimits

0xf67f,	// (0x00047421) main_touch_calib_pane_g_ParamLimits

0x8214,	// (0x0003ffb6) main_touch_calib_pane_t1_ParamLimits

0x822b,	// (0x0003ffcd) main_touch_calib_pane_t2_ParamLimits

0x8244,	// (0x0003ffe6) main_touch_calib_pane_t3_ParamLimits

0x825a,	// (0x0003fffc) main_touch_calib_pane_t4_ParamLimits

0x8270,	// (0x00040012) main_touch_calib_pane_t5_ParamLimits

0xf688,	// (0x0004742a) main_touch_calib_pane_t_ParamLimits

0x2784,	// (0x0003a526) list_single_fp_cale_pane_g3_ParamLimits

0x2784,	// (0x0003a526) list_single_fp_cale_pane_g3

0x019b,	// (0x00037f3d) bg_button_pane_cp012_ParamLimits

0x019b,	// (0x00037f3d) bg_vkb2_func_pane_cp03_ParamLimits

0x9fda,	// (0x00041d7c) cell_vitu2_function_top_pane_g1_ParamLimits

0x019b,	// (0x00037f3d) bg_vkb2_func_pane_cp04_ParamLimits

0xac97,	// (0x00042a39) main_ncimui_button_group_pane_ParamLimits

0xac97,	// (0x00042a39) main_ncimui_button_group_pane

0xacff,	// (0x00042aa1) main_ncimui_pane_t3_ParamLimits

0xacff,	// (0x00042aa1) main_ncimui_pane_t3

0xddd3,	// (0x00045b75) phacti_button_group_pane

0xdfba,	// (0x00045d5c) aid_size_list_single_double_ParamLimits

0xb83c,	// (0x000435de) popup_ezdial_listscroll_window_ParamLimits

0xdfc6,	// (0x00045d68) popup_number_entry_window_cp01_ParamLimits

0xb8e2,	// (0x00043684) phacti_button_pane_ParamLimits

0xb8e2,	// (0x00043684) phacti_button_pane

0xe654,	// (0x000463f6) bg_button_pane_cp14

0xe04d,	// (0x00045def) phacti_button_pane_t1

0xb8f3,	// (0x00043695) main_touch_calib_button_pane_ParamLimits

0xb8f3,	// (0x00043695) main_touch_calib_button_pane

0x029e,	// (0x00038040) bg_button_pane_cp18_ParamLimits

0x029e,	// (0x00038040) bg_button_pane_cp18

0xe05b,	// (0x00045dfd) main_touch_calib_button_pane_t1_ParamLimits

0xe05b,	// (0x00045dfd) main_touch_calib_button_pane_t1

0xe071,	// (0x00045e13) main_touch_calib_button_pane_t2_ParamLimits

0xe071,	// (0x00045e13) main_touch_calib_button_pane_t2

0x0001,

0xfce5,	// (0x00047a87) main_touch_calib_button_pane_t_ParamLimits

0xfce5,	// (0x00047a87) main_touch_calib_button_pane_t

0xe654,	// (0x000463f6) cell_ncimui_button_pane

0xe654,	// (0x000463f6) bg_button_pane_cp032

0xe08f,	// (0x00045e31) cell_ncimui_button_pane_t1

0x91f0,	// (0x00040f92) image3_infobar_pane_ParamLimits

0x91f0,	// (0x00040f92) image3_infobar_pane

0xb055,	// (0x00042df7) fs_bigclock_status_pane_ParamLimits

0xb055,	// (0x00042df7) fs_bigclock_status_pane

0xb062,	// (0x00042e04) main_fs_bigclock_clock_pane_ParamLimits

0xb062,	// (0x00042e04) main_fs_bigclock_clock_pane

0xb07e,	// (0x00042e20) main_fs_bigclock_indi_pane_ParamLimits

0xb07e,	// (0x00042e20) main_fs_bigclock_indi_pane

0xb0ac,	// (0x00042e4e) main_fs_bigclock_swipe_pane_ParamLimits

0xb0ac,	// (0x00042e4e) main_fs_bigclock_swipe_pane

0xe654,	// (0x000463f6) main_fs_clock_dumped_data

0xb0e6,	// (0x00042e88) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xb0e6,	// (0x00042e88) list_single_fs_bigclock_indicator_pane_g1

0xb105,	// (0x00042ea7) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xb105,	// (0x00042ea7) list_single_fs_bigclock_indicator_pane_g2

0xb11f,	// (0x00042ec1) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xb11f,	// (0x00042ec1) list_single_fs_bigclock_indicator_pane_g3

0xb13b,	// (0x00042edd) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xb13b,	// (0x00042edd) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb86,	// (0x00047928) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb86,	// (0x00047928) list_single_fs_bigclock_indicator_pane_g

0xb16a,	// (0x00042f0c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xb16a,	// (0x00042f0c) list_single_fs_bigclock_indicator_pane_t1

0xb192,	// (0x00042f34) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xb192,	// (0x00042f34) list_single_fs_bigclock_indicator_pane_t2

0xb1ba,	// (0x00042f5c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xb1ba,	// (0x00042f5c) list_single_fs_bigclock_indicator_pane_t3

0xb1e2,	// (0x00042f84) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xb1e2,	// (0x00042f84) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb91,	// (0x00047933) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb91,	// (0x00047933) list_single_fs_bigclock_indicator_pane_t

0xe09d,	// (0x00045e3f) image3_infobar_fav_pane_ParamLimits

0xe09d,	// (0x00045e3f) image3_infobar_fav_pane

0xe0ad,	// (0x00045e4f) image3_infobar_loc_pane_ParamLimits

0xe0ad,	// (0x00045e4f) image3_infobar_loc_pane

0xe0c3,	// (0x00045e65) image3_infobar_time_pane_ParamLimits

0xe0c3,	// (0x00045e65) image3_infobar_time_pane

0x0240,	// (0x00037fe2) image3_infobar_time_pane_g1

0xe0d3,	// (0x00045e75) image3_infobar_time_pane_t1

0x0240,	// (0x00037fe2) image3_infobar_loc_pane_g1

0xe0e1,	// (0x00045e83) image3_infobar_loc_pane_g2

0x0001,

0xfcea,	// (0x00047a8c) image3_infobar_loc_pane_g

0xe0e9,	// (0x00045e8b) image3_infobar_loc_pane_t1

0x0240,	// (0x00037fe2) image3_infobar_fav_pane_g1

0xe0f7,	// (0x00045e99) image3_infobar_fav_pane_g2

0x0001,

0xfcef,	// (0x00047a91) image3_infobar_fav_pane_g

0xe0ff,	// (0x00045ea1) fs_bigclock_status_battery_pane

0xe108,	// (0x00045eaa) fs_bigclock_status_signal_pane

0xe111,	// (0x00045eb3) fs_bigclock_status_title_pane

0xe11a,	// (0x00045ebc) fs_bigclock_status_signal_pane_g1

0xe123,	// (0x00045ec5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfcf4,	// (0x00047a96) fs_bigclock_status_signal_pane_g

0xe12b,	// (0x00045ecd) fs_bigclock_status_battery_pane_g1

0xe134,	// (0x00045ed6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfcf9,	// (0x00047a9b) fs_bigclock_status_battery_pane_g

0xe13c,	// (0x00045ede) fs_bigclock_status_title_pane_t1

0xb903,	// (0x000436a5) main_fs_bigclock_clock_pane_g1

0xb903,	// (0x000436a5) main_fs_bigclock_clock_pane_g2

0xb912,	// (0x000436b4) main_fs_bigclock_clock_pane_g3

0xb912,	// (0x000436b4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfcfe,	// (0x00047aa0) main_fs_bigclock_clock_pane_g

0xb922,	// (0x000436c4) main_fs_bigclock_clock_pane_t1

0xb937,	// (0x000436d9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd07,	// (0x00047aa9) main_fs_bigclock_clock_pane_t

0xe14a,	// (0x00045eec) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe14a,	// (0x00045eec) list_single_fs_bigclock_indicator_pane

0xe15b,	// (0x00045efd) list_single_fs_bigclock_pane_ParamLimits

0xe15b,	// (0x00045efd) list_single_fs_bigclock_pane

0xe181,	// (0x00045f23) main_fs_bigclock_indicator_pane_t1

0xe190,	// (0x00045f32) list_single_fs_bigclock_pane_g1

0xe198,	// (0x00045f3a) list_single_fs_bigclock_pane_t1

0x0240,	// (0x00037fe2) main_fs_bigclock_swipe_pane_g1

0xe1db,	// (0x00045f7d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd18,	// (0x00047aba) main_fs_bigclock_swipe_pane_g

0xe1e3,	// (0x00045f85) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe1e3,	// (0x00045f85) main_fs_bigclock_swipe_pane_t1

0x6eb5,	// (0x0003ec57) call_type_pane_ParamLimits

0xe654,	// (0x000463f6) main_btmg_pane

0x4b6b,	// (0x0003c90d) list_single_cale_mrui_row_pane_g2_ParamLimits

0x4b6b,	// (0x0003c90d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc8b,	// (0x00047a2d) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc8b,	// (0x00047a2d) list_single_cale_mrui_row_pane_g

0x4c9d,	// (0x0003ca3f) list_recal_vselct_arw_lo_pane

0xe018,	// (0x00045dba) list_recal_vselct_arw_up_pane

0x4ca5,	// (0x0003ca47) list_recal_vselct_pane

0xb98e,	// (0x00043730) btmg_button_pane

0xb99a,	// (0x0004373c) main_btmg_pane_g1

0xe654,	// (0x000463f6) bg_button_pane_cp044

0xe200,	// (0x00045fa2) btmg_button_pane_t1

0x2043,	// (0x00039de5) aid_listscroll_gen

0x019b,	// (0x00037f3d) main_cntbar_detail_pane

0xdcf8,	// (0x00045a9a) list_cmail_folder_pane

0xdd17,	// (0x00045ab9) sp_fs_scroll_pane_cp03_ParamLimits

0x4d35,	// (0x0003cad7) list_single_fs_dyc_pane_cp01_ParamLimits

0x4d35,	// (0x0003cad7) list_single_fs_dyc_pane_cp01

0xe20e,	// (0x00045fb0) aid_size_cmail_indent

0x4d53,	// (0x0003caf5) list_single_dyc_row_pane_cp01

0xb9c2,	// (0x00043764) cntbar_detail_list_pane_ParamLimits

0xb9c2,	// (0x00043764) cntbar_detail_list_pane

0xba02,	// (0x000437a4) main_cntbar_detail_cont_pane_ParamLimits

0xba02,	// (0x000437a4) main_cntbar_detail_cont_pane

0x6ea9,	// (0x0003ec4b) scroll_pane_cp032_ParamLimits

0x6ea9,	// (0x0003ec4b) scroll_pane_cp032

0xba0e,	// (0x000437b0) cntbar_detail_list_event_pane_ParamLimits

0xba0e,	// (0x000437b0) cntbar_detail_list_event_pane

0xb9d0,	// (0x00043772) cntbar_detail_list_shct_pane

0x06cd,	// (0x0003846f) aid_list_gen

0xe217,	// (0x00045fb9) aid_scroll

0xe220,	// (0x00045fc2) aid_size_touch_scroll_bar

0xb250,	// (0x00042ff2) aid_list_double

0x4d5c,	// (0x0003cafe) aid_list_single

0xba1e,	// (0x000437c0) aid_list_single_lg

0x4d65,	// (0x0003cb07) aid_list_z_g_a_sm

0x4d6d,	// (0x0003cb0f) aid_list_z_g_d

0x4d75,	// (0x0003cb17) aid_txt_z_prm

0x4d83,	// (0x0003cb25) aid_txt_z_prm_cp01

0x4d91,	// (0x0003cb33) aid_txt_z_sec

0xba27,	// (0x000437c9) main_cntbar_detail_cont_pane_g1_ParamLimits

0xba27,	// (0x000437c9) main_cntbar_detail_cont_pane_g1

0xba34,	// (0x000437d6) main_cntbar_detail_cont_pane_g2_ParamLimits

0xba34,	// (0x000437d6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd1d,	// (0x00047abf) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd1d,	// (0x00047abf) main_cntbar_detail_cont_pane_g

0xe229,	// (0x00045fcb) main_cntbar_detail_cont_pane_t1

0xe237,	// (0x00045fd9) main_cntbar_detail_cont_pane_t2

0xe245,	// (0x00045fe7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd22,	// (0x00047ac4) main_cntbar_detail_cont_pane_t

0xba40,	// (0x000437e2) cell_cntbar_detail_list_shct_pane_ParamLimits

0xba40,	// (0x000437e2) cell_cntbar_detail_list_shct_pane

0xe253,	// (0x00045ff5) cntbar_detail_list_shct_pane_g1

0xe25c,	// (0x00045ffe) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd29,	// (0x00047acb) cntbar_detail_list_shct_pane_g

0xba54,	// (0x000437f6) cntbar_detail_list_event_pane_g1_ParamLimits

0xba54,	// (0x000437f6) cntbar_detail_list_event_pane_g1

0xba60,	// (0x00043802) cntbar_detail_list_event_pane_g2_ParamLimits

0xba60,	// (0x00043802) cntbar_detail_list_event_pane_g2

0x0005,

0xfd2e,	// (0x00047ad0) cntbar_detail_list_event_pane_g_ParamLimits

0xfd2e,	// (0x00047ad0) cntbar_detail_list_event_pane_g

0xbace,	// (0x00043870) cntbar_detail_list_event_pane_t1_ParamLimits

0xbace,	// (0x00043870) cntbar_detail_list_event_pane_t1

0xbae3,	// (0x00043885) cntbar_detail_list_event_pane_t2_ParamLimits

0xbae3,	// (0x00043885) cntbar_detail_list_event_pane_t2

0x0002,

0xfd3b,	// (0x00047add) cntbar_detail_list_event_pane_t_ParamLimits

0xfd3b,	// (0x00047add) cntbar_detail_list_event_pane_t

0x0240,	// (0x00037fe2) cell_cntbar_detail_list_shct_pane_g1

0x7262,	// (0x0003f004) navi_pane_mv_g3

0x019b,	// (0x00037f3d) main_cntbar_detail_pane_ParamLimits

0xe654,	// (0x000463f6) main_notif_wgt_pane

0x8ead,	// (0x00040c4f) aid_tch_main_mp4_pane_g4

0x9182,	// (0x00040f24) popup_slider_window_cp02

0x4c93,	// (0x0003ca35) list_recal_day_event_pane

0xb9a2,	// (0x00043744) cntbar_detail_btn_pane_ParamLimits

0xb9a2,	// (0x00043744) cntbar_detail_btn_pane

0xb9b2,	// (0x00043754) cntbar_detail_btn_pane_cp01_ParamLimits

0xb9b2,	// (0x00043754) cntbar_detail_btn_pane_cp01

0xb9d0,	// (0x00043772) cntbar_detail_list_shct_pane_ParamLimits

0xb9dc,	// (0x0004377e) cntbar_detail_pane_g1_ParamLimits

0xb9dc,	// (0x0004377e) cntbar_detail_pane_g1

0xb9ec,	// (0x0004378e) cntbar_detail_pane_t1_ParamLimits

0xb9ec,	// (0x0004378e) cntbar_detail_pane_t1

0xba6c,	// (0x0004380e) cntbar_detail_list_event_pane_g3_ParamLimits

0xba6c,	// (0x0004380e) cntbar_detail_list_event_pane_g3

0xba84,	// (0x00043826) cntbar_detail_list_event_pane_g4_ParamLimits

0xba84,	// (0x00043826) cntbar_detail_list_event_pane_g4

0xba9c,	// (0x0004383e) cntbar_detail_list_event_pane_g5_ParamLimits

0xba9c,	// (0x0004383e) cntbar_detail_list_event_pane_g5

0xbab4,	// (0x00043856) cntbar_detail_list_event_pane_g6_ParamLimits

0xbab4,	// (0x00043856) cntbar_detail_list_event_pane_g6

0xbaf8,	// (0x0004389a) cntbar_detail_list_event_pane_t3_ParamLimits

0xbaf8,	// (0x0004389a) cntbar_detail_list_event_pane_t3

0xbb0a,	// (0x000438ac) popup_notif_wgt_window_ParamLimits

0xbb0a,	// (0x000438ac) popup_notif_wgt_window

0xbb1a,	// (0x000438bc) popup_submenu_window_cp01_ParamLimits

0xbb1a,	// (0x000438bc) popup_submenu_window_cp01

0x0453,	// (0x000381f5) bg_popup_window_pane_cp10

0xe265,	// (0x00046007) listscroll_notif_wgt_pane

0xe277,	// (0x00046019) list_notif_wgt_window

0xe280,	// (0x00046022) scroll_pane_cp033

0xbb2a,	// (0x000438cc) list_notif_wgt_row_pane_ParamLimits

0xbb2a,	// (0x000438cc) list_notif_wgt_row_pane

0xe289,	// (0x0004602b) aid_size_list_notif_wgt_del

0xe296,	// (0x00046038) list_notif_wgt_row_pane_g1

0xe2a2,	// (0x00046044) list_notif_wgt_row_pane_g2

0xe2b1,	// (0x00046053) list_notif_wgt_row_pane_g3

0x0002,

0xfd42,	// (0x00047ae4) list_notif_wgt_row_pane_g

0xe2be,	// (0x00046060) list_notif_wgt_row_pane_t1

0xe2d4,	// (0x00046076) list_notif_wgt_row_pane_t2

0xe2e6,	// (0x00046088) list_notif_wgt_row_pane_t3

0x0002,

0xfd49,	// (0x00047aeb) list_notif_wgt_row_pane_t

0x2f2c,	// (0x0003acce) list_recal_day_event_pane_g1

0xe2f8,	// (0x0004609a) list_recal_day_event_pane_t1

0xe654,	// (0x000463f6) bg_button_pane_cp045

0xbb3e,	// (0x000438e0) cntbar_detail_btn_pane_t1

0x0e5b,	// (0x00038bfd) main_callh_pane_ParamLimits

0x0e5b,	// (0x00038bfd) main_callh_pane

0xe654,	// (0x000463f6) main_coverflow0_pane

0xe654,	// (0x000463f6) main_wgtman_pane

0xb0c4,	// (0x00042e66) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xb0c4,	// (0x00042e66) main_fs_bigclock_unlock_btn_pane

0xb504,	// (0x000432a6) bg_button_pane_cp16

0xb514,	// (0x000432b6) cell_tport_appsw_pane_g3

0xbb4c,	// (0x000438ee) cf0_flow_pane_ParamLimits

0xbb4c,	// (0x000438ee) cf0_flow_pane

0xe307,	// (0x000460a9) listscroll_cf0_pane

0xe312,	// (0x000460b4) main_cf0_pane_g1

0xbb5b,	// (0x000438fd) main_cf0_pane_t1_ParamLimits

0xbb5b,	// (0x000438fd) main_cf0_pane_t1

0xbb6f,	// (0x00043911) main_cf0_pane_t2_ParamLimits

0xbb6f,	// (0x00043911) main_cf0_pane_t2

0x0001,

0xfd55,	// (0x00047af7) main_cf0_pane_t_ParamLimits

0xfd55,	// (0x00047af7) main_cf0_pane_t

0xe324,	// (0x000460c6) scroll_pane_cp11

0xbb83,	// (0x00043925) cf0_flow_pane_g1

0xbb8b,	// (0x0004392d) cf0_flow_pane_g2

0x0001,

0xfd5a,	// (0x00047afc) cf0_flow_pane_g

0xbb93,	// (0x00043935) cf0_flow_pane_t1

0xe654,	// (0x000463f6) main_call6_pane

0xe654,	// (0x000463f6) main_calllock_pane

0xbba1,	// (0x00043943) call6_btn_grp_pane_ParamLimits

0xbba1,	// (0x00043943) call6_btn_grp_pane

0xbbae,	// (0x00043950) call6_pane_g1_ParamLimits

0xbbae,	// (0x00043950) call6_pane_g1

0xbbbe,	// (0x00043960) popup_call6_1st_window_ParamLimits

0xbbbe,	// (0x00043960) popup_call6_1st_window

0xbbce,	// (0x00043970) popup_call6_2nd_window_ParamLimits

0xbbce,	// (0x00043970) popup_call6_2nd_window

0xbbde,	// (0x00043980) cell_call6_btn_pane_ParamLimits

0xbbde,	// (0x00043980) cell_call6_btn_pane

0x0453,	// (0x000381f5) bg_popup_call2_in_pane_cp03

0xe32f,	// (0x000460d1) popup_call6_1st_window_g1

0xe337,	// (0x000460d9) popup_call6_1st_window_g2

0xe33f,	// (0x000460e1) popup_call6_1st_window_g3

0x0002,

0xfd5f,	// (0x00047b01) popup_call6_1st_window_g

0xe347,	// (0x000460e9) popup_call6_1st_window_t1

0xe356,	// (0x000460f8) popup_call6_1st_window_t2

0xe366,	// (0x00046108) popup_call6_1st_window_t3

0x0002,

0xfd66,	// (0x00047b08) popup_call6_1st_window_t

0x0453,	// (0x000381f5) bg_popup_call2_in_pane_cp04

0xe376,	// (0x00046118) popup_call6_2nd_window_g1

0xe37e,	// (0x00046120) popup_call6_2nd_window_g2

0xe386,	// (0x00046128) popup_call6_2nd_window_g3

0x0002,

0xfd6d,	// (0x00047b0f) popup_call6_2nd_window_g

0xe38e,	// (0x00046130) popup_call6_2nd_window_t1

0xe654,	// (0x000463f6) bg_button_pane_cp15

0xe39d,	// (0x0004613f) cell_call6_btn_pane_g1

0xe9eb,	// (0x0004678d) cell_call6_btn_pane_t1

0xbbef,	// (0x00043991) listscroll_wgtman_pane_ParamLimits

0xbbef,	// (0x00043991) listscroll_wgtman_pane

0xbc0b,	// (0x000439ad) wgtman_btn_pane_ParamLimits

0xbc0b,	// (0x000439ad) wgtman_btn_pane

0x0c48,	// (0x000389ea) aid_scroll_copy1

0xe3a6,	// (0x00046148) list_wgtman_pane

0xbc40,	// (0x000439e2) wgtman_btn_pane_g1_ParamLimits

0xbc40,	// (0x000439e2) wgtman_btn_pane_g1

0xbc68,	// (0x00043a0a) wgtman_btn_pane_t1_ParamLimits

0xbc68,	// (0x00043a0a) wgtman_btn_pane_t1

0xe3b0,	// (0x00046152) wgtman_btn_pane_t2_ParamLimits

0xe3b0,	// (0x00046152) wgtman_btn_pane_t2

0x0001,

0xfd74,	// (0x00047b16) wgtman_btn_pane_t_ParamLimits

0xfd74,	// (0x00047b16) wgtman_btn_pane_t

0xbc9f,	// (0x00043a41) listrow_wgtman_pane_ParamLimits

0xbc9f,	// (0x00043a41) listrow_wgtman_pane

0xbcb6,	// (0x00043a58) listrow_wgtman_pane_g1

0xbcc3,	// (0x00043a65) listrow_wgtman_pane_g2

0x0001,

0xfd79,	// (0x00047b1b) listrow_wgtman_pane_g

0x4d9f,	// (0x0003cb41) listrow_wgtman_pane_t1

0x4db7,	// (0x0003cb59) listrow_wgtman_pane_t2

0x0001,

0xfd7e,	// (0x00047b20) listrow_wgtman_pane_t

0x4ddd,	// (0x0003cb7f) wait_bar_pane_cp09

0xe3c7,	// (0x00046169) main_calllock_btn_pane

0xe3d1,	// (0x00046173) main_calllock_pane_g1

0xe654,	// (0x000463f6) bg_button_pane_cp17

0xe39d,	// (0x0004613f) main_calllock_btn_pane_g1

0xe3dd,	// (0x0004617f) main_calllock_btn_pane_t1

0xe654,	// (0x000463f6) main_dialer3_pane

0xe654,	// (0x000463f6) main_fmrd2_pane

0x0240,	// (0x00037fe2) main_fs_bigclock_unlock_btn_pane_g1

0xbce9,	// (0x00043a8b) main_fs_bigclock_unlock_btn_pane_t1

0xbcf7,	// (0x00043a99) area_fmrd2_info_pane_ParamLimits

0xbcf7,	// (0x00043a99) area_fmrd2_info_pane

0xbd03,	// (0x00043aa5) area_fmrd2_visual_pane_ParamLimits

0xbd03,	// (0x00043aa5) area_fmrd2_visual_pane

0xbd11,	// (0x00043ab3) fmrd2_indi_pane_ParamLimits

0xbd11,	// (0x00043ab3) fmrd2_indi_pane

0xbd1e,	// (0x00043ac0) area_fmrd2_visual_pane_g1

0xbd26,	// (0x00043ac8) area_fmrd2_visual_pane_t1

0xbd36,	// (0x00043ad8) area_fmrd2_visual_pane_t2

0xbd46,	// (0x00043ae8) area_fmrd2_visual_pane_t3

0x0002,

0xfd88,	// (0x00047b2a) area_fmrd2_visual_pane_t

0xbd56,	// (0x00043af8) area_fmrd2_info_pane_g1

0xbd5e,	// (0x00043b00) area_fmrd2_info_pane_t1

0xbd6e,	// (0x00043b10) area_fmrd2_info_pane_t2

0xbd7e,	// (0x00043b20) area_fmrd2_info_pane_t3

0xbd8e,	// (0x00043b30) area_fmrd2_info_pane_t4

0x0003,

0xfd8f,	// (0x00047b31) area_fmrd2_info_pane_t

0xbd9e,	// (0x00043b40) fmrd2_indi_pane_t1

0xbdae,	// (0x00043b50) fmrd2_indi_pane_t2

0xbdbe,	// (0x00043b60) fmrd2_indi_pane_t3

0x0002,

0xfd98,	// (0x00047b3a) fmrd2_indi_pane_t

0xb14c,	// (0x00042eee) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xb14c,	// (0x00042eee) list_single_fs_bigclock_indicator_pane_g5

0xb201,	// (0x00042fa3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xb201,	// (0x00042fa3) list_single_fs_bigclock_indicator_pane_t5

0xb67d,	// (0x0004341f) aid_cell_bcale_month_pane_ParamLimits

0xb67d,	// (0x0004341f) aid_cell_bcale_month_pane

0xb69b,	// (0x0004343d) bcale_month_pane_ParamLimits

0xb69b,	// (0x0004343d) bcale_month_pane

0xb6b9,	// (0x0004345b) bcale_preview_pane_ParamLimits

0xb6b9,	// (0x0004345b) bcale_preview_pane

0xe198,	// (0x00045f3a) list_single_fs_bigclock_pane_t1_ParamLimits

0xe1b7,	// (0x00045f59) list_single_fs_bigclock_pane_t2_ParamLimits

0xe1b7,	// (0x00045f59) list_single_fs_bigclock_pane_t2

0x0001,

0xfd13,	// (0x00047ab5) list_single_fs_bigclock_pane_t_ParamLimits

0xfd13,	// (0x00047ab5) list_single_fs_bigclock_pane_t

0xbce1,	// (0x00043a83) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd83,	// (0x00047b25) main_fs_bigclock_unlock_btn_pane_g

0xbdce,	// (0x00043b70) aid_dia3_key_size_ParamLimits

0xbdce,	// (0x00043b70) aid_dia3_key_size

0xbdda,	// (0x00043b7c) aid_dia3_listrow_size_ParamLimits

0xbdda,	// (0x00043b7c) aid_dia3_listrow_size

0xbdea,	// (0x00043b8c) dia3_keypad_fun_pane_ParamLimits

0xbdea,	// (0x00043b8c) dia3_keypad_fun_pane

0xbdfa,	// (0x00043b9c) dia3_keypad_num_pane_ParamLimits

0xbdfa,	// (0x00043b9c) dia3_keypad_num_pane

0xbe0a,	// (0x00043bac) dia3_listscroll_pane_ParamLimits

0xbe0a,	// (0x00043bac) dia3_listscroll_pane

0xbe18,	// (0x00043bba) dia3_numentry_pane_ParamLimits

0xbe18,	// (0x00043bba) dia3_numentry_pane

0xe3ec,	// (0x0004618e) dia3_list_pane

0xbe26,	// (0x00043bc8) scroll_pane_cp12

0xe654,	// (0x000463f6) bg_dia3_numentry_pane

0xbe31,	// (0x00043bd3) dia3_numentry_pane_t1

0xbe40,	// (0x00043be2) cell_dia3_key_num_pane

0xbe48,	// (0x00043bea) cell_dia3_key0_fun_pane_ParamLimits

0xbe48,	// (0x00043bea) cell_dia3_key0_fun_pane

0xbe55,	// (0x00043bf7) cell_dia3_key1_fun_pane_ParamLimits

0xbe55,	// (0x00043bf7) cell_dia3_key1_fun_pane

0xbe62,	// (0x00043c04) dia3_listrow_pane

0xd86a,	// (0x0004560c) bg_dia3_numentry_pane_g1

0xe654,	// (0x000463f6) bg_button_pane_cp21

0xbe6f,	// (0x00043c11) cell_dia3_key_num_pane_t1

0xbe7d,	// (0x00043c1f) cell_dia3_key_num_pane_t2

0xbe8c,	// (0x00043c2e) cell_dia3_key_num_pane_t3

0xbe9b,	// (0x00043c3d) cell_dia3_key_num_pane_t4

0x0003,

0xfd9f,	// (0x00047b41) cell_dia3_key_num_pane_t

0xe654,	// (0x000463f6) bg_button_pane_cp19

0xbeaa,	// (0x00043c4c) cell_dia3_key0_fun_pane_g1

0xe654,	// (0x000463f6) bg_button_pane_cp20

0xbeb2,	// (0x00043c54) cell_dia3_key1_fun_pane_g1

0xbeba,	// (0x00043c5c) area_left_week_number_pane

0xbecd,	// (0x00043c6f) area_top_day_name_pane

0xbedb,	// (0x00043c7d) frame_month_view_pane

0xe3f7,	// (0x00046199) grid_month_view_pane

0xbef0,	// (0x00043c92) cell_top_day_name_pane_ParamLimits

0xbef0,	// (0x00043c92) cell_top_day_name_pane

0xbf0c,	// (0x00043cae) cell_area_left_week_number_pane_ParamLimits

0xbf0c,	// (0x00043cae) cell_area_left_week_number_pane

0xbf2d,	// (0x00043ccf) cell_month_view_pane_ParamLimits

0xbf2d,	// (0x00043ccf) cell_month_view_pane

0xe405,	// (0x000461a7) frm_month_g1

0xbf59,	// (0x00043cfb) frm_month_g2

0xbf6a,	// (0x00043d0c) frm_month_g3

0xbf7b,	// (0x00043d1d) frm_month_g4

0xbf8c,	// (0x00043d2e) frm_month_g5

0xbf9d,	// (0x00043d3f) frm_month_g6

0xbfb0,	// (0x00043d52) frm_month_g7

0xe412,	// (0x000461b4) frm_month_g8

0xbfc3,	// (0x00043d65) frm_month_g9

0xbfd0,	// (0x00043d72) frm_month_g10

0xbfdd,	// (0x00043d7f) frm_month_g11

0xbfea,	// (0x00043d8c) frm_month_g12

0xbff7,	// (0x00043d99) frm_month_g13

0xc006,	// (0x00043da8) frm_month_g14

0xc015,	// (0x00043db7) frm_month_g15

0xc024,	// (0x00043dc6) frm_month_g16

0x000f,

0xfda8,	// (0x00047b4a) frm_month_g

0xe41f,	// (0x000461c1) cell_top_day_name_pane_t1

0xc033,	// (0x00043dd5) cell_area_left_week_number_pane_g1

0xc042,	// (0x00043de4) cell_area_left_week_number_pane_t1

0x0202,	// (0x00037fa4) cell_month_view_pane_g1

0xc058,	// (0x00043dfa) cell_month_view_pane_t1

0xe654,	// (0x000463f6) main_fps_pane

0xdc18,	// (0x000459ba) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdc18,	// (0x000459ba) cmail_ddmenu_btn02_pane_cp1

0xdc34,	// (0x000459d6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdc34,	// (0x000459d6) cmail_ddmenu_btn02_pane_cp2

0xb882,	// (0x00043624) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xb882,	// (0x00043624) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcc6,	// (0x00047a68) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcc6,	// (0x00047a68) cmail_ddmenu_btn02_pane_g

0xb8a0,	// (0x00043642) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xb8a0,	// (0x00043642) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfccb,	// (0x00047a6d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfccb,	// (0x00047a6d) cmail_ddmenu_btn02_pane_t

0xc06e,	// (0x00043e10) fps_text_pane_ParamLimits

0xc06e,	// (0x00043e10) fps_text_pane

0xc07b,	// (0x00043e1d) main_fps_pane_g1_ParamLimits

0xc07b,	// (0x00043e1d) main_fps_pane_g1

0xc087,	// (0x00043e29) wait_bar_pane_cp010_ParamLimits

0xc087,	// (0x00043e29) wait_bar_pane_cp010

0xc093,	// (0x00043e35) fps_text_pane_t1_ParamLimits

0xc093,	// (0x00043e35) fps_text_pane_t1

0x957a,	// (0x0004131c) cam4_image_uncrop_pane_g1

0x9583,	// (0x00041325) cam4_image_uncrop_pane_g2

0x958c,	// (0x0004132e) cam4_image_uncrop_pane_g3

0x9595,	// (0x00041337) cam4_image_uncrop_pane_g4

0x0003,

0xf811,	// (0x000475b3) cam4_image_uncrop_pane_g

0xbe62,	// (0x00043c04) dia3_listrow_pane_ParamLimits

0xe654,	// (0x000463f6) main_phob2_pane

0xb4c1,	// (0x00043263) cell_tport_appsw_pane_cp02_ParamLimits

0xb4c1,	// (0x00043263) cell_tport_appsw_pane_cp02

0xb4d0,	// (0x00043272) cell_tport_appsw_pane_cp03_ParamLimits

0xb4d0,	// (0x00043272) cell_tport_appsw_pane_cp03

0xe654,	// (0x000463f6) phob2_contact_card_pane

0xe654,	// (0x000463f6) phob2_listscroll_pane

0xe432,	// (0x000461d4) phob2_list_pane

0xe43a,	// (0x000461dc) scroll_pane_cp034

0xc0ac,	// (0x00043e4e) phob2_cc_data_pane_ParamLimits

0xc0ac,	// (0x00043e4e) phob2_cc_data_pane

0xc0c3,	// (0x00043e65) phob2_cc_listscroll_pane_ParamLimits

0xc0c3,	// (0x00043e65) phob2_cc_listscroll_pane

0xc0df,	// (0x00043e81) list_double_large_graphic_phob2_pane_ParamLimits

0xc0df,	// (0x00043e81) list_double_large_graphic_phob2_pane

0xc0f3,	// (0x00043e95) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xc0f3,	// (0x00043e95) list_double_large_graphic_phob2_pane_g1

0x4def,	// (0x0003cb91) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x4def,	// (0x0003cb91) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdc9,	// (0x00047b6b) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdc9,	// (0x00047b6b) list_double_large_graphic_phob2_pane_g

0x4e15,	// (0x0003cbb7) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x4e15,	// (0x0003cbb7) list_double_large_graphic_phob2_pane_t1

0x4e2a,	// (0x0003cbcc) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x4e2a,	// (0x0003cbcc) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdd2,	// (0x00047b74) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdd2,	// (0x00047b74) list_double_large_graphic_phob2_pane_t

0xe654,	// (0x000463f6) list_highlight_pane_cp024

0xc100,	// (0x00043ea2) phob2_cc_button_pane

0xc10a,	// (0x00043eac) phob2_cc_data_pane_g1_ParamLimits

0xc10a,	// (0x00043eac) phob2_cc_data_pane_g1

0xc11d,	// (0x00043ebf) phob2_cc_data_pane_g2_ParamLimits

0xc11d,	// (0x00043ebf) phob2_cc_data_pane_g2

0x0001,

0xfdd7,	// (0x00047b79) phob2_cc_data_pane_g_ParamLimits

0xfdd7,	// (0x00047b79) phob2_cc_data_pane_g

0xc131,	// (0x00043ed3) phob2_cc_data_pane_t1_ParamLimits

0xc131,	// (0x00043ed3) phob2_cc_data_pane_t1

0xc152,	// (0x00043ef4) phob2_cc_data_pane_t2_ParamLimits

0xc152,	// (0x00043ef4) phob2_cc_data_pane_t2

0xc173,	// (0x00043f15) phob2_cc_data_pane_t3_ParamLimits

0xc173,	// (0x00043f15) phob2_cc_data_pane_t3

0x0002,

0xfddc,	// (0x00047b7e) phob2_cc_data_pane_t_ParamLimits

0xfddc,	// (0x00047b7e) phob2_cc_data_pane_t

0xe442,	// (0x000461e4) phob2_cc_list_pane_ParamLimits

0xe442,	// (0x000461e4) phob2_cc_list_pane

0xd785,	// (0x00045527) scroll_pane_cp035_ParamLimits

0xd785,	// (0x00045527) scroll_pane_cp035

0x019b,	// (0x00037f3d) bg_button_pane_cp033

0xc194,	// (0x00043f36) phob2_cc_button_pane_g1

0xc1a0,	// (0x00043f42) phob2_cc_button_pane_t1

0xc1b5,	// (0x00043f57) phob2_cc_button_pane_t2

0x0001,

0xfde3,	// (0x00047b85) phob2_cc_button_pane_t

0xc1c7,	// (0x00043f69) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xc1c7,	// (0x00043f69) list_double_large_graphic_phob2_cc_pane

0xc214,	// (0x00043fb6) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xc214,	// (0x00043fb6) list_double_large_graphic_phob2_cc_pane_g1

0x4e3f,	// (0x0003cbe1) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x4e3f,	// (0x0003cbe1) list_double_large_graphic_phob2_cc_pane_g2

0x4e4e,	// (0x0003cbf0) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x4e4e,	// (0x0003cbf0) list_double_large_graphic_phob2_cc_pane_g3

0x4e5d,	// (0x0003cbff) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x4e5d,	// (0x0003cbff) list_double_large_graphic_phob2_cc_pane_g4

0x4e6e,	// (0x0003cc10) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x4e6e,	// (0x0003cc10) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfde8,	// (0x00047b8a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfde8,	// (0x00047b8a) list_double_large_graphic_phob2_cc_pane_g

0x4e7d,	// (0x0003cc1f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x4e7d,	// (0x0003cc1f) list_double_large_graphic_phob2_cc_pane_t1

0x4ea6,	// (0x0003cc48) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x4ea6,	// (0x0003cc48) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdf3,	// (0x00047b95) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdf3,	// (0x00047b95) list_double_large_graphic_phob2_cc_pane_t

0xe44e,	// (0x000461f0) list_highlight_pane_cp025_ParamLimits

0xe44e,	// (0x000461f0) list_highlight_pane_cp025

0x019b,	// (0x00037f3d) bg_button_pane_cp033_ParamLimits

0xc194,	// (0x00043f36) phob2_cc_button_pane_g1_ParamLimits

0xc1a0,	// (0x00043f42) phob2_cc_button_pane_t1_ParamLimits

0xc1b5,	// (0x00043f57) phob2_cc_button_pane_t2_ParamLimits

0xfde3,	// (0x00047b85) phob2_cc_button_pane_t_ParamLimits

0x512a,	// (0x0003cecc) popup_wgtman_window

0x2dfc,	// (0x0003ab9e) scroll_pane_cp038

0xbc28,	// (0x000439ca) wgtman_btn_pane_cp_01_ParamLimits

0xbc28,	// (0x000439ca) wgtman_btn_pane_cp_01

0xe45c,	// (0x000461fe) wgtman_content_pane

0xe465,	// (0x00046207) wgtman_heading_pane

0xe654,	// (0x000463f6) bg_heading_pane_cp02

0xe46e,	// (0x00046210) wgtman_heading_pane_g1

0xe476,	// (0x00046218) wgtman_heading_pane_t1

0xe484,	// (0x00046226) scroll_pane_cp036

0xe48c,	// (0x0004622e) wgtman_list_pane

0xe494,	// (0x00046236) wgtman_list_pane_t1_ParamLimits

0xe494,	// (0x00046236) wgtman_list_pane_t1

0x94d7,	// (0x00041279) cam4_grid_pane

0x4407,	// (0x0003c1a9) bg_button_pane_cp015_ParamLimits

0xa1a0,	// (0x00041f42) bg_button_pane_cp016_ParamLimits

0xa1ac,	// (0x00041f4e) bg_button_pane_cp017_ParamLimits

0xa1c7,	// (0x00041f69) popup_vitu2_query_window_g3_ParamLimits

0xa1c7,	// (0x00041f69) popup_vitu2_query_window_g3

0x44c7,	// (0x0003c269) popup_vitu2_query_window_t6_ParamLimits

0x44c7,	// (0x0003c269) popup_vitu2_query_window_t6

0x44f2,	// (0x0003c294) popup_vitu2_query_window_t7_ParamLimits

0x44f2,	// (0x0003c294) popup_vitu2_query_window_t7

0xe4ae,	// (0x00046250) cam4_grid_pane_g1

0xe4b7,	// (0x00046259) cam4_grid_pane_g2

0xe4c2,	// (0x00046264) cam4_grid_pane_g3

0xe4cb,	// (0x0004626d) cam4_grid_pane_g4

0x0003,

0xfdf8,	// (0x00047b9a) cam4_grid_pane_g

0x5d14,	// (0x0003dab6) aid_placing_vt_slider_lsc_ParamLimits

0x6047,	// (0x0003dde9) vidtel_button_pane_ParamLimits

0x6047,	// (0x0003dde9) vidtel_button_pane

0xe654,	// (0x000463f6) bg_button_pane_cp034

0xe4d6,	// (0x00046278) vidtel_button_pane_g1

0xe4de,	// (0x00046280) vidtel_button_pane_t1

0x2f0a,	// (0x0003acac) aid_size_vtel_slider_touch

0xd785,	// (0x00045527) scroll_pane_cp039

0xae6e,	// (0x00042c10) ncim_query_button_pane_cp01_ParamLimits

0xae8d,	// (0x00042c2f) ncimui_query_pane_g1_ParamLimits

0x019b,	// (0x00037f3d) input_focus_pane_cp012_ParamLimits

0xd8a8,	// (0x0004564a) ncim_query_entry_pane_t1_ParamLimits

0xd785,	// (0x00045527) scroll_pane_cp039_ParamLimits

0x71d4,	// (0x0003ef76) navi_pane_bcale_mc_g1

0x71dc,	// (0x0003ef7e) navi_pane_bcale_mc_t1

0xdc6a,	// (0x00045a0c) main_sp_fs_email_pane_g1

0xdc76,	// (0x00045a18) main_sp_fs_email_pane_g2

0x0001,

0xfbf6,	// (0x00047998) main_sp_fs_email_pane_g

0xdef8,	// (0x00045c9a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdef8,	// (0x00045c9a) list_single_cale_mrui_row_pane_g3

0x4cf3,	// (0x0003ca95) list_single_recal_day_pane_g5_event_pane

0x4d09,	// (0x0003caab) list_single_recal_day_pane_g7

0xe4f4,	// (0x00046296) list_recal_day_event_pane_cp01

0xe4fd,	// (0x0004629f) list_recal_vselct_arw_lo_pane_cp01

0xe505,	// (0x000462a7) list_recal_vselct_arw_up_pane_cp01

0xe50d,	// (0x000462af) list_recal_vselct_pane_cp01

0x2f2c,	// (0x0003acce) list_recal_day_event_pane_cp01_g1

0x4ecf,	// (0x0003cc71) list_recal_day_event_pane_cp01_t1

0x4d11,	// (0x0003cab3) list_single_recal_day_pane_t1_ParamLimits

0x4d23,	// (0x0003cac5) list_single_recal_day_pane_t2_ParamLimits

0xfcdb,	// (0x00047a7d) list_single_recal_day_pane_t_ParamLimits

0x0179,	// (0x00037f1b) bg_notes_pane_ParamLimits

0x027c,	// (0x0003801e) list_notes_pane_ParamLimits

0x5231,	// (0x0003cfd3) scroll_pane_cp06_ParamLimits

0x029e,	// (0x00038040) main_notes_pane_ParamLimits

0x019b,	// (0x00037f3d) main_welc_pane

0xc247,	// (0x00043fe9) main_welc_body_pane_ParamLimits

0xc247,	// (0x00043fe9) main_welc_body_pane

0xc262,	// (0x00044004) main_welc_opti_pane_ParamLimits

0xc262,	// (0x00044004) main_welc_opti_pane

0xc2c9,	// (0x0004406b) main_welc_pane_t1_ParamLimits

0xc2c9,	// (0x0004406b) main_welc_pane_t1

0xe527,	// (0x000462c9) main_welc_body_row_pane_ParamLimits

0xe527,	// (0x000462c9) main_welc_body_row_pane

0x01f4,	// (0x00037f96) main_welc_opti_row_pane_ParamLimits

0x01f4,	// (0x00037f96) main_welc_opti_row_pane

0xe541,	// (0x000462e3) main_welc_opti_row_pane_g1

0xc46f,	// (0x00044211) main_welc_opti_row_pane_t1

0xe549,	// (0x000462eb) main_welc_body_row_pane_t1

0xe26f,	// (0x00046011) popup_notif_wgt_heading_pane

0xe289,	// (0x0004602b) aid_size_list_notif_wgt_del_ParamLimits

0xe296,	// (0x00046038) list_notif_wgt_row_pane_g1_ParamLimits

0xe2a2,	// (0x00046044) list_notif_wgt_row_pane_g2_ParamLimits

0xe2b1,	// (0x00046053) list_notif_wgt_row_pane_g3_ParamLimits

0xfd42,	// (0x00047ae4) list_notif_wgt_row_pane_g_ParamLimits

0xe2be,	// (0x00046060) list_notif_wgt_row_pane_t1_ParamLimits

0xe2d4,	// (0x00046076) list_notif_wgt_row_pane_t2_ParamLimits

0xe2e6,	// (0x00046088) list_notif_wgt_row_pane_t3_ParamLimits

0xfd49,	// (0x00047aeb) list_notif_wgt_row_pane_t_ParamLimits

0xbcb6,	// (0x00043a58) listrow_wgtman_pane_g1_ParamLimits

0xbcc3,	// (0x00043a65) listrow_wgtman_pane_g2_ParamLimits

0xfd79,	// (0x00047b1b) listrow_wgtman_pane_g_ParamLimits

0x4d9f,	// (0x0003cb41) listrow_wgtman_pane_t1_ParamLimits

0x4db7,	// (0x0003cb59) listrow_wgtman_pane_t2_ParamLimits

0xfd7e,	// (0x00047b20) listrow_wgtman_pane_t_ParamLimits

0x4ddd,	// (0x0003cb7f) wait_bar_pane_cp09_ParamLimits

0xe654,	// (0x000463f6) bg_popup_heading_pane_cp02

0xe558,	// (0x000462fa) popup_notif_wgt_heading_pane_g1

0xe560,	// (0x00046302) popup_notif_wgt_heading_pane_t1

0xe654,	// (0x000463f6) main_vids_pane

0xe654,	// (0x000463f6) vids_listscroll_pane

0xc47e,	// (0x00044220) scroll_pane_cp040

0xe654,	// (0x000463f6) vids_list_pane

0xc489,	// (0x0004422b) vids_list_double_pane_ParamLimits

0xc489,	// (0x0004422b) vids_list_double_pane

0xc49d,	// (0x0004423f) vids_list_double_pane_g1

0xc4a6,	// (0x00044248) vids_list_double_pane_t1

0xc4b6,	// (0x00044258) vids_list_double_pane_t2

0x0001,

0xfe17,	// (0x00047bb9) vids_list_double_pane_t

0x019b,	// (0x00037f3d) main_ncimui_pane_ParamLimits

0xacaf,	// (0x00042a51) main_ncimui_pane_g1_ParamLimits

0xacbd,	// (0x00042a5f) main_ncimui_pane_g2_ParamLimits

0xacbd,	// (0x00042a5f) main_ncimui_pane_g2

0x0001,

0xfafc,	// (0x0004789e) main_ncimui_pane_g_ParamLimits

0xfafc,	// (0x0004789e) main_ncimui_pane_g

0xc27d,	// (0x0004401f) main_welc_pane_g1_ParamLimits

0xc27d,	// (0x0004401f) main_welc_pane_g1

0xc289,	// (0x0004402b) main_welc_pane_g2_ParamLimits

0xc289,	// (0x0004402b) main_welc_pane_g2

0x0003,

0xfe01,	// (0x00047ba3) main_welc_pane_g_ParamLimits

0xfe01,	// (0x00047ba3) main_welc_pane_g

0x0179,	// (0x00037f1b) listscroll_mce_pane_ParamLimits

0x729e,	// (0x0003f040) wait_bar_pane_cp10

0x204b,	// (0x00039ded) main_cale_day_pane_ParamLimits

0x204b,	// (0x00039ded) main_cale_week_pane_ParamLimits

0x0179,	// (0x00037f1b) main_messa_pane_ParamLimits

0x8977,	// (0x00040719) main_clock2_btn_pane_ParamLimits

0x8977,	// (0x00040719) main_clock2_btn_pane

0x27fe,	// (0x0003a5a0) main_clock2_btn_pane_cp01_ParamLimits

0x27fe,	// (0x0003a5a0) main_clock2_btn_pane_cp01

0xdec9,	// (0x00045c6b) list_cale_mrui_pane_ParamLimits

0xe31c,	// (0x000460be) main_cf0_pane_g2

0x0001,

0xfd50,	// (0x00047af2) main_cf0_pane_g

0xbeba,	// (0x00043c5c) area_left_week_number_pane_ParamLimits

0xbecd,	// (0x00043c6f) area_top_day_name_pane_ParamLimits

0xbedb,	// (0x00043c7d) frame_month_view_pane_ParamLimits

0xe3f7,	// (0x00046199) grid_month_view_pane_ParamLimits

0xe405,	// (0x000461a7) frm_month_g1_ParamLimits

0xbf59,	// (0x00043cfb) frm_month_g2_ParamLimits

0xbf6a,	// (0x00043d0c) frm_month_g3_ParamLimits

0xbf7b,	// (0x00043d1d) frm_month_g4_ParamLimits

0xbf8c,	// (0x00043d2e) frm_month_g5_ParamLimits

0xbf9d,	// (0x00043d3f) frm_month_g6_ParamLimits

0xbfb0,	// (0x00043d52) frm_month_g7_ParamLimits

0xe412,	// (0x000461b4) frm_month_g8_ParamLimits

0xbfc3,	// (0x00043d65) frm_month_g9_ParamLimits

0xbfd0,	// (0x00043d72) frm_month_g10_ParamLimits

0xbfdd,	// (0x00043d7f) frm_month_g11_ParamLimits

0xbfea,	// (0x00043d8c) frm_month_g12_ParamLimits

0xbff7,	// (0x00043d99) frm_month_g13_ParamLimits

0xc006,	// (0x00043da8) frm_month_g14_ParamLimits

0xc015,	// (0x00043db7) frm_month_g15_ParamLimits

0xc024,	// (0x00043dc6) frm_month_g16_ParamLimits

0xfda8,	// (0x00047b4a) frm_month_g_ParamLimits

0xe41f,	// (0x000461c1) cell_top_day_name_pane_t1_ParamLimits

0xc033,	// (0x00043dd5) cell_area_left_week_number_pane_g1_ParamLimits

0xc042,	// (0x00043de4) cell_area_left_week_number_pane_t1_ParamLimits

0x0202,	// (0x00037fa4) cell_month_view_pane_g1_ParamLimits

0xc058,	// (0x00043dfa) cell_month_view_pane_t1_ParamLimits

0x0171,	// (0x00037f13) main_clock2_btn_pane_g1

0xe56e,	// (0x00046310) main_clock2_btn_pane_t1

0x019b,	// (0x00037f3d) listscroll_cmail_pane_ParamLimits

0xdc6a,	// (0x00045a0c) main_sp_fs_email_pane_g1_ParamLimits

0xdc76,	// (0x00045a18) main_sp_fs_email_pane_g2_ParamLimits

0xfbf6,	// (0x00047998) main_sp_fs_email_pane_g_ParamLimits

0xdff9,	// (0x00045d9b) list_recal_day_pane_ParamLimits

0xe00a,	// (0x00045dac) mian_recal_day_pane_t1

0x48e1,	// (0x0003c683) list_single_dyc_row_text_pane_t4_ParamLimits

0x48e1,	// (0x0003c683) list_single_dyc_row_text_pane_t4

0x491e,	// (0x0003c6c0) list_single_dyc_row_text_pane_t5_ParamLimits

0x491e,	// (0x0003c6c0) list_single_dyc_row_text_pane_t5

0x4994,	// (0x0003c736) list_single_dyc_row_text_pane_t6_ParamLimits

0x4994,	// (0x0003c736) list_single_dyc_row_text_pane_t6

0x6dfd,	// (0x0003eb9f) aid_mgn_list_cale_time_pane

0x019b,	// (0x00037f3d) main_gallery2_pane_ParamLimits

0x2812,	// (0x0003a5b4) main_clock2_pane_cp01_t1

0x2820,	// (0x0003a5c2) main_clock2_pane_cp01_t3

0x0001,

0xf6f2,	// (0x00047494) main_clock2_pane_cp01_t

0x572d,	// (0x0003d4cf) cale_week_scroll_pane_g16_ParamLimits

0x572d,	// (0x0003d4cf) cale_week_scroll_pane_g16

0x0453,	// (0x000381f5) vorec_slider_pane

0xe4de,	// (0x00046280) vidtel_button_pane_t1_ParamLimits

0xb903,	// (0x000436a5) main_fs_bigclock_clock_pane_g1_ParamLimits

0xb903,	// (0x000436a5) main_fs_bigclock_clock_pane_g2_ParamLimits

0xb912,	// (0x000436b4) main_fs_bigclock_clock_pane_g3_ParamLimits

0xb912,	// (0x000436b4) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfcfe,	// (0x00047aa0) main_fs_bigclock_clock_pane_g_ParamLimits

0xb922,	// (0x000436c4) main_fs_bigclock_clock_pane_t1_ParamLimits

0xb937,	// (0x000436d9) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd07,	// (0x00047aa9) main_fs_bigclock_clock_pane_t_ParamLimits

0x82c1,	// (0x00040063) main_mup3_lyrics_pane_ParamLimits

0x82c1,	// (0x00040063) main_mup3_lyrics_pane

0xc4eb,	// (0x0004428d) main_mup3_lyrics_pane_t1_ParamLimits

0xc4eb,	// (0x0004428d) main_mup3_lyrics_pane_t1

0x8e97,	// (0x00040c39) aid_main_mp4_pane_t1_area

0x8ea1,	// (0x00040c43) aid_main_mp4_pane_t2_area

0x8fa8,	// (0x00040d4a) main_mp4_pane_g7_ParamLimits

0x8fa8,	// (0x00040d4a) main_mp4_pane_g7

0x8fb4,	// (0x00040d56) main_mp4_pane_g8_ParamLimits

0x8fb4,	// (0x00040d56) main_mp4_pane_g8

0x938f,	// (0x00041131) aid_call6_pane_g1_size

0xc1f3,	// (0x00043f95) list_double_large_graphic_phob2_other_pane_ParamLimits

0xc1f3,	// (0x00043f95) list_double_large_graphic_phob2_other_pane

0xc512,	// (0x000442b4) list_double_large_graphic_phob2_other_pane_g1

0xe654,	// (0x000463f6) list_highlight_pane_cp026

0x019b,	// (0x00037f3d) main_welc_pane_ParamLimits

0xb3b4,	// (0x00043156) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xb3b4,	// (0x00043156) main_sp_fs_ctrlbar_pane_g3

0xb3ce,	// (0x00043170) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xb3ce,	// (0x00043170) main_sp_fs_ctrlbar_pane_g4

0xb400,	// (0x000431a2) toolbar2_fixed_button_pane_cp01

0xb40b,	// (0x000431ad) toolbar2_fixed_button_pane_cp02

0xb418,	// (0x000431ba) toolbar2_fixed_button_pane_cp03

0xc237,	// (0x00043fd9) list_welc_entry_pane_ParamLimits

0xc237,	// (0x00043fd9) list_welc_entry_pane

0xc297,	// (0x00044039) main_welc_pane_g3_ParamLimits

0xc297,	// (0x00044039) main_welc_pane_g3

0xc2e7,	// (0x00044089) main_welc_pane_t2_ParamLimits

0xc2e7,	// (0x00044089) main_welc_pane_t2

0xc2fb,	// (0x0004409d) main_welc_pane_t3_ParamLimits

0xc2fb,	// (0x0004409d) main_welc_pane_t3

0x0005,

0xfe0a,	// (0x00047bac) main_welc_pane_t_ParamLimits

0xfe0a,	// (0x00047bac) main_welc_pane_t

0xc3f7,	// (0x00044199) welc_button_pane_ParamLimits

0xc3f7,	// (0x00044199) welc_button_pane

0xc461,	// (0x00044203) welc_service_logo_pane_ParamLimits

0xc461,	// (0x00044203) welc_service_logo_pane

0xc51a,	// (0x000442bc) list_single_welc_entry_pane_ParamLimits

0xc51a,	// (0x000442bc) list_single_welc_entry_pane

0xc52b,	// (0x000442cd) list_single_welc_entry_pane_g1

0xc533,	// (0x000442d5) list_single_welc_entry_pane_t1

0xc541,	// (0x000442e3) list_single_welc_entry_pane_t2

0x0001,

0xfe1c,	// (0x00047bbe) list_single_welc_entry_pane_t

0xe654,	// (0x000463f6) bg_button_pane_cp035

0xe57c,	// (0x0004631e) welc_button_pane_t1

0xc54f,	// (0x000442f1) welc_service_logo_pane_g1

0xc558,	// (0x000442fa) welc_service_logo_pane_g2

0x0001,

0xfe21,	// (0x00047bc3) welc_service_logo_pane_g

0xe654,	// (0x000463f6) main_int_radio_pane

0xd73a,	// (0x000454dc) list_single_fs_dyc_pane_g1

0x4dfb,	// (0x0003cb9d) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x4dfb,	// (0x0003cb9d) list_double_large_graphic_phob2_pane_g3

0x4e07,	// (0x0003cba9) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x4e07,	// (0x0003cba9) list_double_large_graphic_phob2_pane_g4

0xc561,	// (0x00044303) main_int_radio1_pane_ParamLimits

0xc561,	// (0x00044303) main_int_radio1_pane

0xe58a,	// (0x0004632c) find_pane_cp02

0xc577,	// (0x00044319) input_focus_pane_cp12_ParamLimits

0xc577,	// (0x00044319) input_focus_pane_cp12

0xc583,	// (0x00044325) input_focus_pane_cp13_ParamLimits

0xc583,	// (0x00044325) input_focus_pane_cp13

0xc59b,	// (0x0004433d) input_focus_pane_cp14_ParamLimits

0xc59b,	// (0x0004433d) input_focus_pane_cp14

0xe593,	// (0x00046335) int_radio1_listscroll_pane

0xc5b3,	// (0x00044355) main_int_radio1_pane_g1_ParamLimits

0xc5b3,	// (0x00044355) main_int_radio1_pane_g1

0xc5bf,	// (0x00044361) main_int_radio1_pane_t1_ParamLimits

0xc5bf,	// (0x00044361) main_int_radio1_pane_t1

0xc5d1,	// (0x00044373) main_int_radio1_pane_t2_ParamLimits

0xc5d1,	// (0x00044373) main_int_radio1_pane_t2

0xc5e5,	// (0x00044387) main_int_radio1_pane_t3_ParamLimits

0xc5e5,	// (0x00044387) main_int_radio1_pane_t3

0xc5f9,	// (0x0004439b) main_int_radio1_pane_t4_ParamLimits

0xc5f9,	// (0x0004439b) main_int_radio1_pane_t4

0xe59d,	// (0x0004633f) main_int_radio1_pane_t5_ParamLimits

0xe59d,	// (0x0004633f) main_int_radio1_pane_t5

0xc610,	// (0x000443b2) main_int_radio1_pane_t6_ParamLimits

0xc610,	// (0x000443b2) main_int_radio1_pane_t6

0xc622,	// (0x000443c4) main_int_radio1_pane_t7_ParamLimits

0xc622,	// (0x000443c4) main_int_radio1_pane_t7

0xc634,	// (0x000443d6) main_int_radio1_pane_t8_ParamLimits

0xc634,	// (0x000443d6) main_int_radio1_pane_t8

0xc646,	// (0x000443e8) main_int_radio1_pane_t9_ParamLimits

0xc646,	// (0x000443e8) main_int_radio1_pane_t9

0xc658,	// (0x000443fa) main_int_radio1_pane_t10_ParamLimits

0xc658,	// (0x000443fa) main_int_radio1_pane_t10

0xc689,	// (0x0004442b) main_int_radio1_pane_t11_ParamLimits

0xc689,	// (0x0004442b) main_int_radio1_pane_t11

0xc6ba,	// (0x0004445c) main_int_radio1_pane_t12_ParamLimits

0xc6ba,	// (0x0004445c) main_int_radio1_pane_t12

0x000b,

0xfe26,	// (0x00047bc8) main_int_radio1_pane_t_ParamLimits

0xfe26,	// (0x00047bc8) main_int_radio1_pane_t

0xe432,	// (0x000461d4) int_radio_list_pane

0xe43a,	// (0x000461dc) scroll_pane_cp037

0xe5af,	// (0x00046351) list_double_large_graphic_int_radio_pane_ParamLimits

0xe5af,	// (0x00046351) list_double_large_graphic_int_radio_pane

0xe5c3,	// (0x00046365) list_double_large_graphic_int_radio_pane_g1

0x4edd,	// (0x0003cc7f) list_double_large_graphic_int_radio_pane_t1

0x4eeb,	// (0x0003cc8d) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe3f,	// (0x00047be1) list_double_large_graphic_int_radio_pane_t

0xe654,	// (0x000463f6) list_highlight_pane_cp027

0xe517,	// (0x000462b9) main_button_pane_4

0xc2a3,	// (0x00044045) main_welc_pane_g4_ParamLimits

0xc2a3,	// (0x00044045) main_welc_pane_g4

0xc30d,	// (0x000440af) main_welc_pane_t4_ParamLimits

0xc30d,	// (0x000440af) main_welc_pane_t4

0xc31f,	// (0x000440c1) main_welc_pane_t5_ParamLimits

0xc31f,	// (0x000440c1) main_welc_pane_t5

0xc351,	// (0x000440f3) main_welc_pane_t6_ParamLimits

0xc351,	// (0x000440f3) main_welc_pane_t6

0xc405,	// (0x000441a7) welc_button_pane_2_ParamLimits

0xc405,	// (0x000441a7) welc_button_pane_2

0xc423,	// (0x000441c5) welc_button_pane_3_ParamLimits

0xc423,	// (0x000441c5) welc_button_pane_3

0xe51f,	// (0x000462c1) welc_button_pane_4

0xc443,	// (0x000441e5) welc_button_pane_5_ParamLimits

0xc443,	// (0x000441e5) welc_button_pane_5

0x4f4d,	// (0x0003ccef) main_popup_welc_pane

0xe5e4,	// (0x00046386) main_welc_sk_g3

0xe5ee,	// (0x00046390) main_welc_sk_g4

0xe5f8,	// (0x0004639a) main_welc_sk_t3

0xe608,	// (0x000463aa) main_welc_sk_t4

0xe618,	// (0x000463ba) popup_welc_pane_t4

0xe626,	// (0x000463c8) popup_welc_pane_t5

0xe634,	// (0x000463d6) popup_welc_pane_t6

0xe654,	// (0x000463f6) main_acti_pane

0xe654,	// (0x000463f6) main_sso_pane

0xc6d1,	// (0x00044473) sso_body_pane_ParamLimits

0xc6d1,	// (0x00044473) sso_body_pane

0xc6e0,	// (0x00044482) sso_logo_pane_ParamLimits

0xc6e0,	// (0x00044482) sso_logo_pane

0xc70f,	// (0x000444b1) sso_sk_pane_ParamLimits

0xc70f,	// (0x000444b1) sso_sk_pane

0xea1c,	// (0x000467be) main_sso_logo_pane_g1

0xc71c,	// (0x000444be) sso_sk_pane_t1_ParamLimits

0xc71c,	// (0x000444be) sso_sk_pane_t1

0xc730,	// (0x000444d2) sso_sk_pane_t2_ParamLimits

0xc730,	// (0x000444d2) sso_sk_pane_t2

0x0001,

0xfe44,	// (0x00047be6) sso_sk_pane_t_ParamLimits

0xfe44,	// (0x00047be6) sso_sk_pane_t

0xea27,	// (0x000467c9) aid_sso_gap

0xea30,	// (0x000467d2) aid_sso_txt1

0xea3a,	// (0x000467dc) aid_sso_txt2

0xea44,	// (0x000467e6) aid_sso_txt3

0x0002,

0xfe49,	// (0x00047beb) aid_sso_txt

0xea4e,	// (0x000467f0) aid_sso_widget

0xc78d,	// (0x0004452f) sso_btn_pane_ParamLimits

0xc78d,	// (0x0004452f) sso_btn_pane

0xc801,	// (0x000445a3) sso_option_pane_ParamLimits

0xc801,	// (0x000445a3) sso_option_pane

0xc8b3,	// (0x00044655) sso_query_pane_ParamLimits

0xc8b3,	// (0x00044655) sso_query_pane

0xc903,	// (0x000446a5) sso_query_pane_cp01_ParamLimits

0xc903,	// (0x000446a5) sso_query_pane_cp01

0xc95b,	// (0x000446fd) sso_t_hdr_pane_ParamLimits

0xc95b,	// (0x000446fd) sso_t_hdr_pane

0xc97f,	// (0x00044721) sso_t_nml_pane_ParamLimits

0xc97f,	// (0x00044721) sso_t_nml_pane

0xea58,	// (0x000467fa) sso_t_sub_pane

0xc6ed,	// (0x0004448f) sso_popup_window_ParamLimits

0xc6ed,	// (0x0004448f) sso_popup_window

0xc742,	// (0x000444e4) sso_apps_pane_ParamLimits

0xc742,	// (0x000444e4) sso_apps_pane

0xc765,	// (0x00044507) sso_body_pane_g1

0xc76d,	// (0x0004450f) sso_body_pane_t1

0xc77d,	// (0x0004451f) sso_body_pane_t2

0x0001,

0xfe50,	// (0x00047bf2) sso_body_pane_t

0xc7d1,	// (0x00044573) sso_btn_pane_cp01_ParamLimits

0xc7d1,	// (0x00044573) sso_btn_pane_cp01

0xc885,	// (0x00044627) sso_prog_pane_ParamLimits

0xc885,	// (0x00044627) sso_prog_pane

0xc9cf,	// (0x00044771) sso_t_hdr_pane_t1_ParamLimits

0xc9cf,	// (0x00044771) sso_t_hdr_pane_t1

0xea6d,	// (0x0004680f) input_focus_pane_cp10_ParamLimits

0xea6d,	// (0x0004680f) input_focus_pane_cp10

0xea81,	// (0x00046823) sso_query_pane_t1_ParamLimits

0xea81,	// (0x00046823) sso_query_pane_t1

0xea94,	// (0x00046836) sso_query_pane_t2_ParamLimits

0xea94,	// (0x00046836) sso_query_pane_t2

0xeaae,	// (0x00046850) sso_query_pane_t3_ParamLimits

0xeaae,	// (0x00046850) sso_query_pane_t3

0xead8,	// (0x0004687a) sso_query_pane_t4_ParamLimits

0xead8,	// (0x0004687a) sso_query_pane_t4

0x0003,

0xfe55,	// (0x00047bf7) sso_query_pane_t_ParamLimits

0xfe55,	// (0x00047bf7) sso_query_pane_t

0xe5db,	// (0x0004637d) bg_button_pane_cp22

0xe5cc,	// (0x0004636e) sso_btn_pane_t1

0xc9e8,	// (0x0004478a) sso_t_nml_pane_t1_ParamLimits

0xc9e8,	// (0x0004478a) sso_t_nml_pane_t1

0xeafc,	// (0x0004689e) sso_option_row_pane_ParamLimits

0xeafc,	// (0x0004689e) sso_option_row_pane

0xeb09,	// (0x000468ab) sso_t_sub_pane_t1_ParamLimits

0xeb09,	// (0x000468ab) sso_t_sub_pane_t1

0x019b,	// (0x00037f3d) bg_popup_window_pane_cp11_ParamLimits

0x019b,	// (0x00037f3d) bg_popup_window_pane_cp11

0xeb26,	// (0x000468c8) popup_sk_window_cp01_ParamLimits

0xeb26,	// (0x000468c8) popup_sk_window_cp01

0xeb33,	// (0x000468d5) sso_popup_body_pane_ParamLimits

0xeb33,	// (0x000468d5) sso_popup_body_pane

0xeb40,	// (0x000468e2) scroll_pane_cp21_ParamLimits

0xeb40,	// (0x000468e2) scroll_pane_cp21

0xeb4d,	// (0x000468ef) sso_popup_body_t_pane_ParamLimits

0xeb4d,	// (0x000468ef) sso_popup_body_t_pane

0xeb5a,	// (0x000468fc) sso_popup_body_t_hdr_pane_ParamLimits

0xeb5a,	// (0x000468fc) sso_popup_body_t_hdr_pane

0xca05,	// (0x000447a7) sso_popup_body_t_nml_pane_ParamLimits

0xca05,	// (0x000447a7) sso_popup_body_t_nml_pane

0xca23,	// (0x000447c5) sso_popup_body_t_sub_pane_ParamLimits

0xca23,	// (0x000447c5) sso_popup_body_t_sub_pane

0xeb6c,	// (0x0004690e) sso_popup_body_t_hdr_pane_t1

0xca46,	// (0x000447e8) sso_popup_body_t_nml_pane_t1_ParamLimits

0xca46,	// (0x000447e8) sso_popup_body_t_nml_pane_t1

0xeb7c,	// (0x0004691e) sso_popup_body_t_sub_pane_t1_ParamLimits

0xeb7c,	// (0x0004691e) sso_popup_body_t_sub_pane_t1

0x0240,	// (0x00037fe2) sso_prog_pane_g1

0xca90,	// (0x00044832) sso_apps_pane_comp1_ParamLimits

0xca90,	// (0x00044832) sso_apps_pane_comp1

0xeba1,	// (0x00046943) sso_apps_pane_comp1_g1

0xeba9,	// (0x0004694b) sso_apps_pane_comp1_t1

0xebc5,	// (0x00046967) sso_option_row_pane_g1

0xebcd,	// (0x0004696f) sso_option_row_pane_t1

0xdd00,	// (0x00045aa2) list_cmail_pane_ParamLimits

0xe654,	// (0x000463f6) main_call7_pane

0xc225,	// (0x00043fc7) bg_welc_area_ParamLimits

0xc225,	// (0x00043fc7) bg_welc_area

0xc387,	// (0x00044129) sso_t_hdr_pane_a_t1_ParamLimits

0xc387,	// (0x00044129) sso_t_hdr_pane_a_t1

0xc39b,	// (0x0004413d) sso_t_nml_pane_a_t1_ParamLimits

0xc39b,	// (0x0004413d) sso_t_nml_pane_a_t1

0xc3c5,	// (0x00044167) sso_t_sub_pane_a_t1_ParamLimits

0xc3c5,	// (0x00044167) sso_t_sub_pane_a_t1

0xc453,	// (0x000441f5) welc_button_pane_cp01_ParamLimits

0xc453,	// (0x000441f5) welc_button_pane_cp01

0xe5cc,	// (0x0004636e) sso_btn_pane_t1_copy1

0xe5db,	// (0x0004637d) welc_button_pane_2_comp1

0xe644,	// (0x000463e6) sso_t_hdr_pane_p_t1

0xe9fa,	// (0x0004679c) sso_t_nml_pane_p_t1

0xea0a,	// (0x000467ac) sso_t_sub_pane_p_t1

0xe654,	// (0x000463f6) main_att_pane

0xe654,	// (0x000463f6) main_vod_pane

0xea58,	// (0x000467fa) sso_t_sub_pane_ParamLimits

0xebb7,	// (0x00046959) input_focus_pane_cp10_t1

0xebcd,	// (0x0004696f) sso_option_row_pane_t1_ParamLimits

0xcaa5,	// (0x00044847) main_att_body_pane_ParamLimits

0xcaa5,	// (0x00044847) main_att_body_pane

0xcab9,	// (0x0004485b) att_btn_emg_pane_ParamLimits

0xcab9,	// (0x0004485b) att_btn_emg_pane

0xcad1,	// (0x00044873) att_btn_pane_ParamLimits

0xcad1,	// (0x00044873) att_btn_pane

0xcb3d,	// (0x000448df) att_btn_pane_cp01_ParamLimits

0xcb3d,	// (0x000448df) att_btn_pane_cp01

0xcb57,	// (0x000448f9) att_li_srv_pane_ParamLimits

0xcb57,	// (0x000448f9) att_li_srv_pane

0xcb69,	// (0x0004490b) att_opt_pane_ParamLimits

0xcb69,	// (0x0004490b) att_opt_pane

0xcbad,	// (0x0004494f) att_query_pane_ParamLimits

0xcbad,	// (0x0004494f) att_query_pane

0xcc1d,	// (0x000449bf) att_query_pane_cp01_ParamLimits

0xcc1d,	// (0x000449bf) att_query_pane_cp01

0xcc61,	// (0x00044a03) att_t_hdr_pane_ParamLimits

0xcc61,	// (0x00044a03) att_t_hdr_pane

0xccc9,	// (0x00044a6b) att_t_nml_pane_ParamLimits

0xccc9,	// (0x00044a6b) att_t_nml_pane

0xcd3b,	// (0x00044add) att_t_nml_pane_cp01_ParamLimits

0xcd3b,	// (0x00044add) att_t_nml_pane_cp01

0xcd5f,	// (0x00044b01) att_t_nmlb_pane_ParamLimits

0xcd5f,	// (0x00044b01) att_t_nmlb_pane

0xcdc3,	// (0x00044b65) att_term_pane_ParamLimits

0xcdc3,	// (0x00044b65) att_term_pane

0xce07,	// (0x00044ba9) main_att_body_pane_g1_ParamLimits

0xce07,	// (0x00044ba9) main_att_body_pane_g1

0xebe6,	// (0x00046988) att_t_hdr_pane_t1_ParamLimits

0xebe6,	// (0x00046988) att_t_hdr_pane_t1

0xebff,	// (0x000469a1) att_t_nml_pane_t1_ParamLimits

0xebff,	// (0x000469a1) att_t_nml_pane_t1

0xec24,	// (0x000469c6) att_btn_pane_t1

0xe5db,	// (0x0004637d) bg_button_pane_cp23

0xce33,	// (0x00044bd5) att_li_srv_row_pane_ParamLimits

0xce33,	// (0x00044bd5) att_li_srv_row_pane

0xec34,	// (0x000469d6) att_t_nmlb_pane_t1_ParamLimits

0xec34,	// (0x000469d6) att_t_nmlb_pane_t1

0xec52,	// (0x000469f4) att_query_pane_t1

0xec61,	// (0x00046a03) att_query_pane_t2

0xec70,	// (0x00046a12) att_query_pane_t3

0x0002,

0xfe5e,	// (0x00047c00) att_query_pane_t

0xec7f,	// (0x00046a21) input_focus_pane_cp11

0xec88,	// (0x00046a2a) att_term_pane_t1_ParamLimits

0xec88,	// (0x00046a2a) att_term_pane_t1

0xe654,	// (0x000463f6) att_opt_row_pane

0xebc5,	// (0x00046967) att_opt_row_pane_g1

0xeca5,	// (0x00046a47) att_opt_row_pane_t1_ParamLimits

0xeca5,	// (0x00046a47) att_opt_row_pane_t1

0xce43,	// (0x00044be5) att_li_srv_row_pane_g1

0xce4b,	// (0x00044bed) att_li_srv_row_pane_t1_ParamLimits

0xce4b,	// (0x00044bed) att_li_srv_row_pane_t1

0xce60,	// (0x00044c02) att_li_srv_row_pane_t2_ParamLimits

0xce60,	// (0x00044c02) att_li_srv_row_pane_t2

0x0001,

0xfe65,	// (0x00047c07) att_li_srv_row_pane_t_ParamLimits

0xfe65,	// (0x00047c07) att_li_srv_row_pane_t

0xecbe,	// (0x00046a60) att_btn_close_pane_g1

0xe654,	// (0x000463f6) bg_button_pane_cp24

0x7ca6,	// (0x0003fa48) main_vod_body_pane_ParamLimits

0x7ca6,	// (0x0003fa48) main_vod_body_pane

0xce75,	// (0x00044c17) main_vod_body_pane_g1_ParamLimits

0xce75,	// (0x00044c17) main_vod_body_pane_g1

0xcea5,	// (0x00044c47) scroll_pane_cp24_ParamLimits

0xcea5,	// (0x00044c47) scroll_pane_cp24

0xceed,	// (0x00044c8f) vod_btn_pane_ParamLimits

0xceed,	// (0x00044c8f) vod_btn_pane

0xcf2b,	// (0x00044ccd) vod_det_pane_ParamLimits

0xcf2b,	// (0x00044ccd) vod_det_pane

0xcf57,	// (0x00044cf9) vod_logo_g1_ParamLimits

0xcf57,	// (0x00044cf9) vod_logo_g1

0xcfa1,	// (0x00044d43) vod_opt_pane_ParamLimits

0xcfa1,	// (0x00044d43) vod_opt_pane

0xcfd1,	// (0x00044d73) vod_opt_pane_cp01_ParamLimits

0xcfd1,	// (0x00044d73) vod_opt_pane_cp01

0xcff9,	// (0x00044d9b) vod_query_pane_ParamLimits

0xcff9,	// (0x00044d9b) vod_query_pane

0xd021,	// (0x00044dc3) vod_query_pane_cp01_ParamLimits

0xd021,	// (0x00044dc3) vod_query_pane_cp01

0xd02d,	// (0x00044dcf) vod_t_nml_pane_ParamLimits

0xd02d,	// (0x00044dcf) vod_t_nml_pane

0xd0db,	// (0x00044e7d) vod_t_nml_pane_cp01_ParamLimits

0xd0db,	// (0x00044e7d) vod_t_nml_pane_cp01

0xd113,	// (0x00044eb5) vod_t_sub_pane_ParamLimits

0xd113,	// (0x00044eb5) vod_t_sub_pane

0xd13f,	// (0x00044ee1) vod_t_sub_pane_cp01_ParamLimits

0xd13f,	// (0x00044ee1) vod_t_sub_pane_cp01

0xec7f,	// (0x00046a21) vod_query_field_pane

0xecc6,	// (0x00046a68) vod_query_pane_t1

0xe5db,	// (0x0004637d) bg_button_pane_cp25

0xecd5,	// (0x00046a77) sso_btn_pane_t1_copy2

0xd167,	// (0x00044f09) vod_t_nml_pane_t1_ParamLimits

0xd167,	// (0x00044f09) vod_t_nml_pane_t1

0xece4,	// (0x00046a86) vod_opt_row_pane_ParamLimits

0xece4,	// (0x00046a86) vod_opt_row_pane

0xecf6,	// (0x00046a98) vod_t_sub_pane_t1_ParamLimits

0xecf6,	// (0x00046a98) vod_t_sub_pane_t1

0xed0f,	// (0x00046ab1) vod_det_cell_pane_ParamLimits

0xed0f,	// (0x00046ab1) vod_det_cell_pane

0xe654,	// (0x000463f6) input_focus_pane_cp15

0xed20,	// (0x00046ac2) vod_query_field_pane_t1

0xed2e,	// (0x00046ad0) vod_opt_row_pane_g1_ParamLimits

0xed2e,	// (0x00046ad0) vod_opt_row_pane_g1

0xed3a,	// (0x00046adc) vod_opt_row_pane_t1_ParamLimits

0xed3a,	// (0x00046adc) vod_opt_row_pane_t1

0xed59,	// (0x00046afb) vod_det_cell_field_pane

0xed62,	// (0x00046b04) vod_det_cell_pane_g1

0xed6a,	// (0x00046b0c) vod_det_cell_pane_t1

0xe654,	// (0x000463f6) input_focus_pane_cp16

0xed79,	// (0x00046b1b) vod_det_cell_field_pane_t1

0xbba1,	// (0x00043943) call7_btn_grp_pane_ParamLimits

0xbba1,	// (0x00043943) call7_btn_grp_pane

0x01f4,	// (0x00037f96) call7_bubble_pane_ParamLimits

0x01f4,	// (0x00037f96) call7_bubble_pane

0xbbde,	// (0x00043980) cell_call7_btn_pane_ParamLimits

0xbbde,	// (0x00043980) cell_call7_btn_pane

0xd1a2,	// (0x00044f44) call7_pane_g1_ParamLimits

0xd1a2,	// (0x00044f44) call7_pane_g1

0xd1b1,	// (0x00044f53) call7_windows_conf_pane_ParamLimits

0xd1b1,	// (0x00044f53) call7_windows_conf_pane

0xd1d3,	// (0x00044f75) popup_call7_1st_window_ParamLimits

0xd1d3,	// (0x00044f75) popup_call7_1st_window

0xd1e1,	// (0x00044f83) popup_call7_2nd_window_ParamLimits

0xd1e1,	// (0x00044f83) popup_call7_2nd_window

0xd1ef,	// (0x00044f91) popup_call7_3rd_window_ParamLimits

0xd1ef,	// (0x00044f91) popup_call7_3rd_window

0xe654,	// (0x000463f6) bg_button_pane_cp26

0xe39d,	// (0x0004613f) cell_call7_btn_pane_g1

0xe9eb,	// (0x0004678d) cell_call7_btn_pane_t1

0xe654,	// (0x000463f6) bg_popup_window_pane_cp12

0xed87,	// (0x00046b29) popup_call7_1st_window_g1

0xed8f,	// (0x00046b31) popup_call7_1st_window_g2

0xed97,	// (0x00046b39) popup_call7_1st_window_g3

0x0002,

0xfe6a,	// (0x00047c0c) popup_call7_1st_window_g

0xed9f,	// (0x00046b41) popup_call7_1st_window_t1

0xedae,	// (0x00046b50) popup_call7_1st_window_t2

0xedbe,	// (0x00046b60) popup_call7_1st_window_t3

0x0002,

0xfe71,	// (0x00047c13) popup_call7_1st_window_t

0xe654,	// (0x000463f6) bg_popup_window_pane_cp13

0xedce,	// (0x00046b70) popup_call7_2nd_window_g1

0xedd6,	// (0x00046b78) popup_call7_2nd_window_g2

0xedde,	// (0x00046b80) popup_call7_2nd_window_g3

0x0002,

0xfe78,	// (0x00047c1a) popup_call7_2nd_window_g

0xed9f,	// (0x00046b41) popup_call7_2nd_window_t1

0xe654,	// (0x000463f6) bg_popup_window_pane_cp14

0xede6,	// (0x00046b88) call7_list_conf_pane

0xedee,	// (0x00046b90) call7_list_conf_row_pane_ParamLimits

0xedee,	// (0x00046b90) call7_list_conf_row_pane

0xee01,	// (0x00046ba3) call7_list_conf_row_pane_g1

0xee09,	// (0x00046bab) call7_list_conf_row_pane_g2

0x0001,

0xfe7f,	// (0x00047c21) call7_list_conf_row_pane_g

0xee11,	// (0x00046bb3) call7_list_conf_row_pane_t1

0xe654,	// (0x000463f6) list_highlight_pane_cp22

0xc855,	// (0x000445f7) sso_option_pane_cp01_ParamLimits

0xc855,	// (0x000445f7) sso_option_pane_cp01

0x0179,	// (0x00037f1b) msg_header_pane_ParamLimits

0x0f00,	// (0x00038ca2) bg_button_pane_cp01_ParamLimits

0x419a,	// (0x0003bf3c) input_focus_pane_cp07_ParamLimits

0xb450,	// (0x000431f2) popup_email_progress_window

0x0240,	// (0x00037fe2) popup_email_progress_window_g1

0xee1f,	// (0x00046bc1) popup_email_progress_window_g2

0x0001,

0xfe84,	// (0x00047c26) popup_email_progress_window_g

0xee27,	// (0x00046bc9) popup_email_progress_window_t1
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
