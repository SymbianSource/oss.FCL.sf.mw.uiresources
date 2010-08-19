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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0004a1d4 };

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
0x594e,	// (0x0004fb22) Screen

0x595a,	// (0x0004fb2e) application_window

0x59b6,	// (0x0004fb8a) area_bottom_pane_ParamLimits

0x59b6,	// (0x0004fb8a) area_bottom_pane

0x5a14,	// (0x0004fbe8) area_top_pane_ParamLimits

0x5a14,	// (0x0004fbe8) area_top_pane

0x5a78,	// (0x0004fc4c) call_video_uplink_pane_ParamLimits

0x5a78,	// (0x0004fc4c) call_video_uplink_pane

0x5ab7,	// (0x0004fc8b) main_pane_ParamLimits

0x5ab7,	// (0x0004fc8b) main_pane

0xe750,	// (0x00058924) context_pane

0x8bef,	// (0x00052dc3) navi_pane

0x8c18,	// (0x00052dec) popup_cale_events_window_ParamLimits

0x8c18,	// (0x00052dec) popup_cale_events_window

0xe763,	// (0x00058937) popup_mup_playback_window

0x8c30,	// (0x00052e04) signal_pane

0x35df,	// (0x0004d7b3) main_browser_pane

0x377d,	// (0x0004d951) main_burst_pane

0x8a33,	// (0x00052c07) main_calc_pane

0xe744,	// (0x00058918) main_cale_day_pane

0x8a40,	// (0x00052c14) main_cale_month_pane

0xe744,	// (0x00058918) main_cale_week_pane

0x377d,	// (0x0004d951) main_call_pane

0x3297,	// (0x0004d46b) main_call_poc_pane

0x377d,	// (0x0004d951) main_camera_pane

0x377d,	// (0x0004d951) main_chi_dic_pane

0x3f73,	// (0x0004e147) main_clock_pane

0x3297,	// (0x0004d46b) main_fmradio_pane

0x377d,	// (0x0004d951) main_graph_messa_pane

0x3297,	// (0x0004d46b) main_help_pane

0x35df,	// (0x0004d7b3) main_im_pane

0x34f2,	// (0x0004d6c6) main_image_pane_ParamLimits

0x34f2,	// (0x0004d6c6) main_image_pane

0x3297,	// (0x0004d46b) main_location2_pane

0x377d,	// (0x0004d951) main_location_pane

0x34f2,	// (0x0004d6c6) main_messa_pane

0x3297,	// (0x0004d46b) main_mp2_pane

0x377d,	// (0x0004d951) main_mp_pane

0x3297,	// (0x0004d46b) main_msg_pane

0x3297,	// (0x0004d46b) main_mup_eq_pane

0x3297,	// (0x0004d46b) main_mup_pane

0x35df,	// (0x0004d7b3) main_notes_pane

0x3297,	// (0x0004d46b) main_pec_pane

0x3297,	// (0x0004d46b) main_phob_pane

0x3297,	// (0x0004d46b) main_pinb_pane

0x3297,	// (0x0004d46b) main_postcard_pane

0x3297,	// (0x0004d46b) main_qdial_pane

0x377d,	// (0x0004d951) main_skin_pane

0x3297,	// (0x0004d46b) main_smil2_pane

0x377d,	// (0x0004d951) main_smil_pane

0x377d,	// (0x0004d951) main_video_pane

0x377d,	// (0x0004d951) main_video_tele_pane

0x34f2,	// (0x0004d6c6) main_viewer_pane_ParamLimits

0x34f2,	// (0x0004d6c6) main_viewer_pane

0x377d,	// (0x0004d951) main_vorec_pane

0x8a9f,	// (0x00052c73) popup_blid_sat_info_window_ParamLimits

0x8a9f,	// (0x00052c73) popup_blid_sat_info_window

0x8ac5,	// (0x00052c99) popup_dyc_status_message_window_ParamLimits

0x8ac5,	// (0x00052c99) popup_dyc_status_message_window

0x8ad5,	// (0x00052ca9) popup_grid_large_graphic_window_ParamLimits

0x8ad5,	// (0x00052ca9) popup_grid_large_graphic_window

0x8b6a,	// (0x00052d3e) popup_loc_request_window_ParamLimits

0x8b6a,	// (0x00052d3e) popup_loc_request_window

0x8bc3,	// (0x00052d97) popup_wml_address_window_ParamLimits

0x8bc3,	// (0x00052d97) popup_wml_address_window

0x890b,	// (0x00052adf) call_muted_g1

0x8583,	// (0x00052757) popup_call_audio_conf_window_ParamLimits

0x8583,	// (0x00052757) popup_call_audio_conf_window

0x891b,	// (0x00052aef) popup_call_audio_first_window_ParamLimits

0x891b,	// (0x00052aef) popup_call_audio_first_window

0x895b,	// (0x00052b2f) popup_call_audio_in_window_ParamLimits

0x895b,	// (0x00052b2f) popup_call_audio_in_window

0x897f,	// (0x00052b53) popup_call_audio_out_window_ParamLimits

0x897f,	// (0x00052b53) popup_call_audio_out_window

0x89a1,	// (0x00052b75) popup_call_audio_second_window_ParamLimits

0x89a1,	// (0x00052b75) popup_call_audio_second_window

0x89d1,	// (0x00052ba5) popup_call_audio_wait_window_ParamLimits

0x89d1,	// (0x00052ba5) popup_call_audio_wait_window

0x89f2,	// (0x00052bc6) popup_number_entry_window_ParamLimits

0x89f2,	// (0x00052bc6) popup_number_entry_window

0x2e41,	// (0x0004d015) bg_popup_call_pane_cp05_ParamLimits

0x2e41,	// (0x0004d015) bg_popup_call_pane_cp05

0x2e61,	// (0x0004d035) popup_number_entry_window_t1

0x2e82,	// (0x0004d056) popup_number_entry_window_t2

0x2e94,	// (0x0004d068) popup_number_entry_window_t3

0x0003,

0xf085,	// (0x00059259) popup_number_entry_window_t

0x2edb,	// (0x0004d0af) text_title_cp2

0x2eee,	// (0x0004d0c2) bg_popup_call_pane_cp_ParamLimits

0x2eee,	// (0x0004d0c2) bg_popup_call_pane_cp

0x2efc,	// (0x0004d0d0) call_thumbnail_pane

0x2f04,	// (0x0004d0d8) popup_call_audio_in_window_g1_ParamLimits

0x2f04,	// (0x0004d0d8) popup_call_audio_in_window_g1

0x2f10,	// (0x0004d0e4) popup_call_audio_in_window_g2_ParamLimits

0x2f10,	// (0x0004d0e4) popup_call_audio_in_window_g2

0x2f1c,	// (0x0004d0f0) popup_call_audio_in_window_g3_ParamLimits

0x2f1c,	// (0x0004d0f0) popup_call_audio_in_window_g3

0x0002,

0xf08e,	// (0x00059262) popup_call_audio_in_window_g_ParamLimits

0xf08e,	// (0x00059262) popup_call_audio_in_window_g

0x2f28,	// (0x0004d0fc) popup_call_audio_in_window_t1_ParamLimits

0x2f28,	// (0x0004d0fc) popup_call_audio_in_window_t1

0x2f44,	// (0x0004d118) popup_call_audio_in_window_t2_ParamLimits

0x2f44,	// (0x0004d118) popup_call_audio_in_window_t2

0x2f60,	// (0x0004d134) popup_call_audio_in_window_t3_ParamLimits

0x2f60,	// (0x0004d134) popup_call_audio_in_window_t3

0x0002,

0xf095,	// (0x00059269) popup_call_audio_in_window_t_ParamLimits

0xf095,	// (0x00059269) popup_call_audio_in_window_t

0x2eee,	// (0x0004d0c2) bg_popup_call_pane_cp01_ParamLimits

0x2eee,	// (0x0004d0c2) bg_popup_call_pane_cp01

0x2efc,	// (0x0004d0d0) call_thumbnail_pane_cp02

0x2f73,	// (0x0004d147) call_type_pane_cp022

0x2f7b,	// (0x0004d14f) popup_call_audio_out_window_g1_ParamLimits

0x2f7b,	// (0x0004d14f) popup_call_audio_out_window_g1

0x2f8d,	// (0x0004d161) popup_call_audio_out_window_g2_ParamLimits

0x2f8d,	// (0x0004d161) popup_call_audio_out_window_g2

0x2f99,	// (0x0004d16d) popup_call_audio_out_window_g3_ParamLimits

0x2f99,	// (0x0004d16d) popup_call_audio_out_window_g3

0x0002,

0xf09c,	// (0x00059270) popup_call_audio_out_window_g_ParamLimits

0xf09c,	// (0x00059270) popup_call_audio_out_window_g

0x2fab,	// (0x0004d17f) popup_call_audio_out_window_t1_ParamLimits

0x2fab,	// (0x0004d17f) popup_call_audio_out_window_t1

0x2fc3,	// (0x0004d197) popup_call_audio_out_window_t2_ParamLimits

0x2fc3,	// (0x0004d197) popup_call_audio_out_window_t2

0x0001,

0xf0a3,	// (0x00059277) popup_call_audio_out_window_t_ParamLimits

0xf0a3,	// (0x00059277) popup_call_audio_out_window_t

0x2fd8,	// (0x0004d1ac) bg_popup_call_pane_ParamLimits

0x2fd8,	// (0x0004d1ac) bg_popup_call_pane

0x5c98,	// (0x0004fe6c) call_thumbnail_pane_cp_ParamLimits

0x5c98,	// (0x0004fe6c) call_thumbnail_pane_cp

0x305c,	// (0x0004d230) call_type_pane_cp01_ParamLimits

0x305c,	// (0x0004d230) call_type_pane_cp01

0x30a0,	// (0x0004d274) popup_call_audio_first_window_g1_ParamLimits

0x30a0,	// (0x0004d274) popup_call_audio_first_window_g1

0x30ec,	// (0x0004d2c0) popup_call_audio_first_window_g2_ParamLimits

0x30ec,	// (0x0004d2c0) popup_call_audio_first_window_g2

0x0001,

0xf0a8,	// (0x0005927c) popup_call_audio_first_window_g_ParamLimits

0xf0a8,	// (0x0005927c) popup_call_audio_first_window_g

0x3130,	// (0x0004d304) popup_call_audio_first_window_t1_ParamLimits

0x3130,	// (0x0004d304) popup_call_audio_first_window_t1

0x31dc,	// (0x0004d3b0) popup_call_audio_first_window_t4_ParamLimits

0x31dc,	// (0x0004d3b0) popup_call_audio_first_window_t4

0x3268,	// (0x0004d43c) popup_call_audio_first_window_t5_ParamLimits

0x3268,	// (0x0004d43c) popup_call_audio_first_window_t5

0x0002,

0xf0ad,	// (0x00059281) popup_call_audio_first_window_t_ParamLimits

0xf0ad,	// (0x00059281) popup_call_audio_first_window_t

0x3297,	// (0x0004d46b) bg_popup_call_pane_cp02

0x32a1,	// (0x0004d475) call_type_pane_cp023

0x32a9,	// (0x0004d47d) popup_call_audio_wait_window_g1

0x32b1,	// (0x0004d485) popup_call_audio_wait_window_g2

0x0001,

0xf0b4,	// (0x00059288) popup_call_audio_wait_window_g

0x32b9,	// (0x0004d48d) popup_call_audio_wait_window_t3

0x32c7,	// (0x0004d49b) bg_popup_call_pane_cp03_ParamLimits

0x32c7,	// (0x0004d49b) bg_popup_call_pane_cp03

0x3327,	// (0x0004d4fb) call_thumbnail_pane_cp011_ParamLimits

0x3327,	// (0x0004d4fb) call_thumbnail_pane_cp011

0x3333,	// (0x0004d507) call_type_pane_cp034_ParamLimits

0x3333,	// (0x0004d507) call_type_pane_cp034

0x336f,	// (0x0004d543) popup_call_audio_second_window_g1_ParamLimits

0x336f,	// (0x0004d543) popup_call_audio_second_window_g1

0x33ab,	// (0x0004d57f) popup_call_audio_second_window_g2_ParamLimits

0x33ab,	// (0x0004d57f) popup_call_audio_second_window_g2

0x0001,

0xf0b9,	// (0x0005928d) popup_call_audio_second_window_g_ParamLimits

0xf0b9,	// (0x0005928d) popup_call_audio_second_window_g

0x33e7,	// (0x0004d5bb) popup_call_audio_second_window_t1_ParamLimits

0x33e7,	// (0x0004d5bb) popup_call_audio_second_window_t1

0x3468,	// (0x0004d63c) popup_call_audio_second_window_t2_ParamLimits

0x3468,	// (0x0004d63c) popup_call_audio_second_window_t2

0x349e,	// (0x0004d672) popup_call_audio_second_window_t3_ParamLimits

0x349e,	// (0x0004d672) popup_call_audio_second_window_t3

0x0002,

0xf0be,	// (0x00059292) popup_call_audio_second_window_t_ParamLimits

0xf0be,	// (0x00059292) popup_call_audio_second_window_t

0x3297,	// (0x0004d46b) bg_popup_call_pane_cp04

0x34d4,	// (0x0004d6a8) list_conf_pane

0x34dc,	// (0x0004d6b0) popup_call_audio_conf_window_t1

0x34ea,	// (0x0004d6be) call_thumbnail_pane_g1

0x34f2,	// (0x0004d6c6) bg_pinb_pane_ParamLimits

0x34f2,	// (0x0004d6c6) bg_pinb_pane

0x3500,	// (0x0004d6d4) find_pinb_pane

0x34f2,	// (0x0004d6c6) listscroll_pinb_pane_ParamLimits

0x34f2,	// (0x0004d6c6) listscroll_pinb_pane

0x350a,	// (0x0004d6de) pinb_bg_pane_g1

0x350a,	// (0x0004d6de) pinb_bg_pane_g2

0x350a,	// (0x0004d6de) pinb_bg_pane_g3

0x350a,	// (0x0004d6de) pinb_bg_pane_g4

0x350a,	// (0x0004d6de) pinb_bg_pane_g5

0x350a,	// (0x0004d6de) pinb_bg_pane_g6

0x350a,	// (0x0004d6de) pinb_bg_pane_g7

0x350a,	// (0x0004d6de) pinb_bg_pane_g8

0x350a,	// (0x0004d6de) pinb_bg_pane_g9

0x350a,	// (0x0004d6de) pinb_bg_pane_g10

0x0009,

0xf0c5,	// (0x00059299) pinb_bg_pane_g

0x2e37,	// (0x0004d00b) grid_pinb_pane

0x2e37,	// (0x0004d00b) list_pinb_pane

0x3514,	// (0x0004d6e8) scroll_pane_cp01_ParamLimits

0x3514,	// (0x0004d6e8) scroll_pane_cp01

0x3522,	// (0x0004d6f6) find_pinb_pane_g1_ParamLimits

0x3522,	// (0x0004d6f6) find_pinb_pane_g1

0x353a,	// (0x0004d70e) find_pinb_pane_t1

0x354c,	// (0x0004d720) find_pinb_pane_t2

0x0001,

0xf0df,	// (0x000592b3) find_pinb_pane_t

0x3561,	// (0x0004d735) input_focus_pane_cp01_ParamLimits

0x3561,	// (0x0004d735) input_focus_pane_cp01

0x2e74,	// (0x0004d048) cell_pinb_pane_ParamLimits

0x2e74,	// (0x0004d048) cell_pinb_pane

0x356d,	// (0x0004d741) cell_pinb_pane_g1_ParamLimits

0x356d,	// (0x0004d741) cell_pinb_pane_g1

0x357b,	// (0x0004d74f) cell_pinb_pane_g2_ParamLimits

0x357b,	// (0x0004d74f) cell_pinb_pane_g2

0x357b,	// (0x0004d74f) cell_pinb_pane_g3_ParamLimits

0x357b,	// (0x0004d74f) cell_pinb_pane_g3

0x0002,

0xf0e4,	// (0x000592b8) cell_pinb_pane_g_ParamLimits

0xf0e4,	// (0x000592b8) cell_pinb_pane_g

0x3297,	// (0x0004d46b) grid_highlight_pane_cp01

0x2e74,	// (0x0004d048) list_pinb_item_pane_ParamLimits

0x2e74,	// (0x0004d048) list_pinb_item_pane

0x2e37,	// (0x0004d00b) list_highlight_pane_cp02

0x3589,	// (0x0004d75d) list_pinb_item_pane_g1_ParamLimits

0x3589,	// (0x0004d75d) list_pinb_item_pane_g1

0x357b,	// (0x0004d74f) list_pinb_item_pane_g2_ParamLimits

0x357b,	// (0x0004d74f) list_pinb_item_pane_g2

0x356d,	// (0x0004d741) list_pinb_item_pane_g3_ParamLimits

0x356d,	// (0x0004d741) list_pinb_item_pane_g3

0x357b,	// (0x0004d74f) list_pinb_item_pane_g4_ParamLimits

0x357b,	// (0x0004d74f) list_pinb_item_pane_g4

0x0003,

0xf0eb,	// (0x000592bf) list_pinb_item_pane_g_ParamLimits

0xf0eb,	// (0x000592bf) list_pinb_item_pane_g

0x3597,	// (0x0004d76b) list_pinb_item_pane_t1_ParamLimits

0x3597,	// (0x0004d76b) list_pinb_item_pane_t1

0x5cd6,	// (0x0004feaa) calc_display_pane

0x5cf4,	// (0x0004fec8) calc_paper_pane

0x5d10,	// (0x0004fee4) grid_calc_pane

0x3297,	// (0x0004d46b) bg_list_pane_cp01

0x5d3c,	// (0x0004ff10) clock_g1

0x5d44,	// (0x0004ff18) clock_g2

0x0001,

0xf0f4,	// (0x000592c8) clock_g

0x5d4e,	// (0x0004ff22) clock_t1_ParamLimits

0x5d4e,	// (0x0004ff22) clock_t1

0x5d63,	// (0x0004ff37) clock_t2_ParamLimits

0x5d63,	// (0x0004ff37) clock_t2

0x5d75,	// (0x0004ff49) clock_t3_ParamLimits

0x5d75,	// (0x0004ff49) clock_t3

0x5d87,	// (0x0004ff5b) clock_t4_ParamLimits

0x5d87,	// (0x0004ff5b) clock_t4

0x5d99,	// (0x0004ff6d) clock_t5_ParamLimits

0x5d99,	// (0x0004ff6d) clock_t5

0x5dae,	// (0x0004ff82) clock_t6_ParamLimits

0x5dae,	// (0x0004ff82) clock_t6

0x5dc0,	// (0x0004ff94) clock_t7_ParamLimits

0x5dc0,	// (0x0004ff94) clock_t7

0x5dd2,	// (0x0004ffa6) clock_t8_ParamLimits

0x5dd2,	// (0x0004ffa6) clock_t8

0x5de8,	// (0x0004ffbc) clock_t9_ParamLimits

0x5de8,	// (0x0004ffbc) clock_t9

0x0008,

0xf0f9,	// (0x000592cd) clock_t_ParamLimits

0xf0f9,	// (0x000592cd) clock_t

0x35ab,	// (0x0004d77f) popup_clock_analogue_window_cp02

0x35ab,	// (0x0004d77f) popup_clock_digital_window_cp01

0x3297,	// (0x0004d46b) listscroll_help_pane

0x3297,	// (0x0004d46b) phob_pre_status_pane

0x35b3,	// (0x0004d787) grid_qdial_pane

0x34f2,	// (0x0004d6c6) listscroll_mce_pane

0x34f2,	// (0x0004d6c6) bg_notes_pane

0x35bd,	// (0x0004d791) list_notes_pane

0x5dfe,	// (0x0004ffd2) scroll_pane_cp06

0x35cb,	// (0x0004d79f) bg_calc_paper_pane

0x5e0d,	// (0x0004ffe1) list_calc_pane

0x35df,	// (0x0004d7b3) bg_calc_display_pane

0x5e27,	// (0x0004fffb) calc_display_pane_t1

0x5e3c,	// (0x00050010) calc_display_pane_t2

0x5e51,	// (0x00050025) calc_display_pane_t3

0x0002,

0xf10c,	// (0x000592e0) calc_display_pane_t

0x5e63,	// (0x00050037) cell_calc_pane_ParamLimits

0x5e63,	// (0x00050037) cell_calc_pane

0x35eb,	// (0x0004d7bf) bg_calc_paper_pane_g1

0x3603,	// (0x0004d7d7) bg_calc_paper_pane_g2

0x35f7,	// (0x0004d7cb) bg_calc_paper_pane_g3

0x361b,	// (0x0004d7ef) bg_calc_paper_pane_g4

0x360f,	// (0x0004d7e3) bg_calc_paper_pane_g5

0x5e92,	// (0x00050066) bg_calc_paper_pane_g6

0x5ea3,	// (0x00050077) bg_calc_paper_pane_g7

0x5eb4,	// (0x00050088) bg_calc_paper_pane_g8

0x0007,

0xf113,	// (0x000592e7) bg_calc_paper_pane_g

0x5ec5,	// (0x00050099) calc_bg_paper_pane_g9

0x5ed6,	// (0x000500aa) list_calc_item_pane_ParamLimits

0x5ed6,	// (0x000500aa) list_calc_item_pane

0x3627,	// (0x0004d7fb) list_calc_item_pane_g1

0x5ef7,	// (0x000500cb) list_calc_item_pane_t1_ParamLimits

0x5ef7,	// (0x000500cb) list_calc_item_pane_t1

0x5f09,	// (0x000500dd) list_calc_item_pane_t2_ParamLimits

0x5f09,	// (0x000500dd) list_calc_item_pane_t2

0x0001,

0xf124,	// (0x000592f8) list_calc_item_pane_t_ParamLimits

0xf124,	// (0x000592f8) list_calc_item_pane_t

0x350a,	// (0x0004d6de) cell_calc_pane_g1

0x3634,	// (0x0004d808) grid_highlight_pane_cp02

0x15a7,	// (0x0004b77b) bg_calc_display_pane_g1

0x5f39,	// (0x0005010d) bg_calc_display_pane_g2

0x1595,	// (0x0004b769) bg_calc_display_pane_g3

0x0002,

0xf12e,	// (0x00059302) bg_calc_display_pane_g

0x5f43,	// (0x00050117) cell_qdial_pane_ParamLimits

0x5f43,	// (0x00050117) cell_qdial_pane

0x5f59,	// (0x0005012d) cell_qdial_pane_g1_ParamLimits

0x5f59,	// (0x0005012d) cell_qdial_pane_g1

0x5f66,	// (0x0005013a) cell_qdial_pane_g2_ParamLimits

0x5f66,	// (0x0005013a) cell_qdial_pane_g2

0x3656,	// (0x0004d82a) cell_qdial_pane_g3_ParamLimits

0x3656,	// (0x0004d82a) cell_qdial_pane_g3

0x0003,

0xf135,	// (0x00059309) cell_qdial_pane_g_ParamLimits

0xf135,	// (0x00059309) cell_qdial_pane_g

0x5f84,	// (0x00050158) cell_qdial_pane_t1_ParamLimits

0x5f84,	// (0x00050158) cell_qdial_pane_t1

0x5f9c,	// (0x00050170) cell_qdial_pane_t2_ParamLimits

0x5f9c,	// (0x00050170) cell_qdial_pane_t2

0x5faf,	// (0x00050183) cell_qdial_pane_t3_ParamLimits

0x5faf,	// (0x00050183) cell_qdial_pane_t3

0x0002,

0xf13e,	// (0x00059312) cell_qdial_pane_t_ParamLimits

0xf13e,	// (0x00059312) cell_qdial_pane_t

0x3297,	// (0x0004d46b) grid_highlight_pane_cp04

0x3662,	// (0x0004d836) thumbnail_qdial_pane_ParamLimits

0x3662,	// (0x0004d836) thumbnail_qdial_pane

0x36be,	// (0x0004d892) list_help_pane

0x36c7,	// (0x0004d89b) scroll_pane_cp02

0x5fc2,	// (0x00050196) help_list_pane_t1_ParamLimits

0x5fc2,	// (0x00050196) help_list_pane_t1

0x5fe9,	// (0x000501bd) bg_notes_pane_g2

0x5ff1,	// (0x000501c5) bg_notes_pane_g3

0x5ff9,	// (0x000501cd) notes_bg_pane_g1

0x6001,	// (0x000501d5) notes_bg_pane_g4

0x6009,	// (0x000501dd) notes_bg_pane_g5

0x6011,	// (0x000501e5) notes_bg_pane_g6

0x6019,	// (0x000501ed) notes_bg_pane_g7

0x6021,	// (0x000501f5) notes_bg_pane_g8

0x6029,	// (0x000501fd) notes_bg_pane_g9

0x0006,

0xf15c,	// (0x00059330) notes_bg_pane_g

0x6031,	// (0x00050205) list_notes_text_pane_ParamLimits

0x6031,	// (0x00050205) list_notes_text_pane

0x36d0,	// (0x0004d8a4) list_notes_text_pane_g1

0x6059,	// (0x0005022d) list_notes_text_pane_t1

0x6067,	// (0x0005023b) listscroll_cale_week_pane

0x6093,	// (0x00050267) bg_cale_heading_pane

0x60bc,	// (0x00050290) bg_cale_pane_cp01

0x60de,	// (0x000502b2) cale_week_corner_pane

0x60fd,	// (0x000502d1) cale_week_day_heading_pane

0x612b,	// (0x000502ff) cale_week_scroll_pane_g1

0x614f,	// (0x00050323) cale_week_scroll_pane_g2

0x6167,	// (0x0005033b) cale_week_scroll_pane_g3

0x617f,	// (0x00050353) cale_week_scroll_pane_g4

0x6197,	// (0x0005036b) cale_week_scroll_pane_g5

0x61af,	// (0x00050383) cale_week_scroll_pane_g6

0x61cf,	// (0x000503a3) cale_week_scroll_pane_g7

0x61ef,	// (0x000503c3) cale_week_scroll_pane_g8

0x620f,	// (0x000503e3) cale_week_scroll_pane_g9

0x622c,	// (0x00050400) cale_week_scroll_pane_g10

0x6249,	// (0x0005041d) cale_week_scroll_pane_g11

0x6268,	// (0x0005043c) cale_week_scroll_pane_g12

0x628d,	// (0x00050461) cale_week_scroll_pane_g13

0x62b6,	// (0x0005048a) cale_week_scroll_pane_g14

0x62df,	// (0x000504b3) cale_week_scroll_pane_g15

0x000f,

0xf16b,	// (0x0005933f) cale_week_scroll_pane_g

0x6328,	// (0x000504fc) cale_week_time_pane

0x6348,	// (0x0005051c) grid_cale_week_pane

0x3705,	// (0x0004d8d9) scroll_pane_cp08

0x6379,	// (0x0005054d) cell_cale_week_pane_ParamLimits

0x6379,	// (0x0005054d) cell_cale_week_pane

0x6409,	// (0x000505dd) cale_week_day_heading_pane_t1

0x6431,	// (0x00050605) cale_week_day_heading_pane_t2

0x645e,	// (0x00050632) cale_week_day_heading_pane_t3

0x648b,	// (0x0005065f) cale_week_day_heading_pane_t4

0x64b8,	// (0x0005068c) cale_week_day_heading_pane_t5

0x64e5,	// (0x000506b9) cale_week_day_heading_pane_t6

0x6512,	// (0x000506e6) cale_week_day_heading_pane_t7

0x0006,

0xf18c,	// (0x00059360) cale_week_day_heading_pane_t

0x3722,	// (0x0004d8f6) bg_cale_side_pane

0x653a,	// (0x0005070e) cale_week_time_pane_t1

0x655e,	// (0x00050732) cale_week_time_pane_t2

0x6582,	// (0x00050756) cale_week_time_pane_t3

0x65a6,	// (0x0005077a) cale_week_time_pane_t4

0x65ca,	// (0x0005079e) cale_week_time_pane_t5

0x65f0,	// (0x000507c4) cale_week_time_pane_t6

0x6618,	// (0x000507ec) cale_week_time_pane_t7

0x6644,	// (0x00050818) cale_week_time_pane_t8

0x0007,

0xf19b,	// (0x0005936f) cale_week_time_pane_t

0x6674,	// (0x00050848) cell_cale_week_pane_g2

0x6698,	// (0x0005086c) cell_cale_week_pane_g3_ParamLimits

0x6698,	// (0x0005086c) cell_cale_week_pane_g3

0x3730,	// (0x0004d904) grid_highlight_pane_cp07

0x3738,	// (0x0004d90c) listscroll_gms_pane

0x3742,	// (0x0004d916) grid_gms_pane

0x374b,	// (0x0004d91f) listscroll_gms_pane_g1

0x3753,	// (0x0004d927) listscroll_gms_pane_g2

0x0001,

0xf1ac,	// (0x00059380) listscroll_gms_pane_g

0x66b0,	// (0x00050884) scroll_pane_cp010

0x66bb,	// (0x0005088f) cell_gms_pane_ParamLimits

0x66bb,	// (0x0005088f) cell_gms_pane

0x66ce,	// (0x000508a2) cell_gms_pane_g1

0x375b,	// (0x0004d92f) cell_gms_pane_g2

0x3763,	// (0x0004d937) cell_gms_pane_g3

0x376c,	// (0x0004d940) cell_gms_pane_g4

0x0003,

0xf1b1,	// (0x00059385) cell_gms_pane_g

0x3775,	// (0x0004d949) grid_highlight_pane_cp09

0x888f,	// (0x00052a63) phob_pre_status_pane_g1

0x8897,	// (0x00052a6b) phob_pre_status_pane_g2

0x889f,	// (0x00052a73) phob_pre_status_pane_g3

0x88a7,	// (0x00052a7b) phob_pre_status_pane_g4

0x0004,

0xf57a,	// (0x0005974e) phob_pre_status_pane_g

0x88b7,	// (0x00052a8b) phob_pre_status_pane_t1

0x88c7,	// (0x00052a9b) phob_pre_status_pane_t2

0x88d7,	// (0x00052aab) phob_pre_status_pane_t3

0x0002,

0xf585,	// (0x00059759) phob_pre_status_pane_t

0x377d,	// (0x0004d951) bg_list_pane_cp05

0x66de,	// (0x000508b2) grid_vorec_pane

0x66e8,	// (0x000508bc) vorec_t1

0x66f6,	// (0x000508ca) vorec_t2

0x6704,	// (0x000508d8) vorec_t3

0x6712,	// (0x000508e6) vorec_t4

0xdb5b,	// (0x00057d2f) vorec_t5

0xdb69,	// (0x00057d3d) vorec_t6

0x0004,

0xf1ba,	// (0x0005938e) vorec_t

0xdb77,	// (0x00057d4b) wait_bar_pane_cp01

0x672e,	// (0x00050902) cell_vorec_pane_ParamLimits

0x672e,	// (0x00050902) cell_vorec_pane

0x6743,	// (0x00050917) cell_vorec_pane_g1

0x3297,	// (0x0004d46b) grid_highlight_pane_cp05

0x2e74,	// (0x0004d048) cams_zoom_pane

0x2e74,	// (0x0004d048) image_vga_pane

0x357b,	// (0x0004d74f) main_camera_pane_g1

0x357b,	// (0x0004d74f) main_camera_pane_g2

0x357b,	// (0x0004d74f) main_camera_pane_g3

0x357b,	// (0x0004d74f) main_camera_pane_g4

0x357b,	// (0x0004d74f) main_camera_pane_g5

0x357b,	// (0x0004d74f) main_camera_pane_g6

0x357b,	// (0x0004d74f) main_camera_pane_g7

0x0007,

0xf1c5,	// (0x00059399) main_camera_pane_g

0x379f,	// (0x0004d973) main_camera_pane_t1

0x379f,	// (0x0004d973) main_camera_pane_t2

0x0001,

0xf1d6,	// (0x000593aa) main_camera_pane_t

0x674d,	// (0x00050921) cams_zoom_pane_cp_ParamLimits

0x674d,	// (0x00050921) cams_zoom_pane_cp

0x677b,	// (0x0005094f) image_cif_pane_ParamLimits

0x677b,	// (0x0005094f) image_cif_pane

0x2e37,	// (0x0004d00b) image_subqcif_pane

0x6789,	// (0x0005095d) main_video_pane_g1_ParamLimits

0x6789,	// (0x0005095d) main_video_pane_g1

0x67b1,	// (0x00050985) main_video_pane_g2_ParamLimits

0x67b1,	// (0x00050985) main_video_pane_g2

0x67e4,	// (0x000509b8) main_video_pane_g3_ParamLimits

0x67e4,	// (0x000509b8) main_video_pane_g3

0x67e4,	// (0x000509b8) main_video_pane_g4_ParamLimits

0x67e4,	// (0x000509b8) main_video_pane_g4

0x6812,	// (0x000509e6) main_video_pane_g5_ParamLimits

0x6812,	// (0x000509e6) main_video_pane_g5

0x3785,	// (0x0004d959) main_video_pane_g6_ParamLimits

0x3785,	// (0x0004d959) main_video_pane_g6

0x0006,

0xf1db,	// (0x000593af) main_video_pane_g_ParamLimits

0xf1db,	// (0x000593af) main_video_pane_g

0x682e,	// (0x00050a02) main_video_pane_t1_ParamLimits

0x682e,	// (0x00050a02) main_video_pane_t1

0x37c7,	// (0x0004d99b) cams_zoom_pane_g1

0x37c7,	// (0x0004d99b) cams_zoom_pane_g2

0x37c7,	// (0x0004d99b) cams_zoom_pane_g3

0x37c7,	// (0x0004d99b) cams_zoom_pane_g4

0x0003,

0xf1ea,	// (0x000593be) cams_zoom_pane_g

0x6874,	// (0x00050a48) grid_cams_pane

0x6882,	// (0x00050a56) linegrid_cams_pane

0x688e,	// (0x00050a62) cell_cams_pane_ParamLimits

0x688e,	// (0x00050a62) cell_cams_pane

0x37d1,	// (0x0004d9a5) cams_burst_image_pane

0x37d9,	// (0x0004d9ad) cell_cams_pane_g1

0x3297,	// (0x0004d46b) grid_highlight_pane_cp03

0x350a,	// (0x0004d6de) mp_bg_pane_g1

0x2e37,	// (0x0004d00b) bg_list_pane_cp03

0x2e37,	// (0x0004d00b) bg_mp_pane

0x2e37,	// (0x0004d00b) grid_mp_pane

0x37c7,	// (0x0004d99b) media_player_g1

0x3cf3,	// (0x0004dec7) media_player_t1

0x3cf3,	// (0x0004dec7) media_player_t2

0x3cf3,	// (0x0004dec7) media_player_t3

0x3cf3,	// (0x0004dec7) media_player_t4

0x3cf3,	// (0x0004dec7) media_player_t5

0x3cf3,	// (0x0004dec7) media_player_t6

0x3cf3,	// (0x0004dec7) media_player_t7

0x0006,

0xf564,	// (0x00059738) media_player_t

0x2e37,	// (0x0004d00b) wait_bar_pane_cp02

0xf549,	// (0x0005971d) main_usb_pane_t

0x3f73,	// (0x0004e147) cell_mp_pane

0x350a,	// (0x0004d6de) cell_mp_pane_g1

0x3297,	// (0x0004d46b) grid_highlight_pane_cp06

0x37e1,	// (0x0004d9b5) grid_skin_colour_pane

0x37e9,	// (0x0004d9bd) list_highlight_pane_cp03

0x68a3,	// (0x00050a77) skin_g1

0x37f1,	// (0x0004d9c5) skin_t1

0x3800,	// (0x0004d9d4) skin_t2

0x0001,

0xf218,	// (0x000593ec) skin_t

0x68ad,	// (0x00050a81) cell_skin_colour_pane_ParamLimits

0x68ad,	// (0x00050a81) cell_skin_colour_pane

0x380e,	// (0x0004d9e2) cell_skin_colour_pane_g1

0x692d,	// (0x00050b01) call_video_g1_ParamLimits

0x692d,	// (0x00050b01) call_video_g1

0x693d,	// (0x00050b11) call_video_g2_ParamLimits

0x693d,	// (0x00050b11) call_video_g2

0x0001,

0xf21d,	// (0x000593f1) call_video_g_ParamLimits

0xf21d,	// (0x000593f1) call_video_g

0x698d,	// (0x00050b61) call_video_uplink_pane_cp1_ParamLimits

0x698d,	// (0x00050b61) call_video_uplink_pane_cp1

0x3820,	// (0x0004d9f4) call_video_uplink_pane_cp2

0x6a5b,	// (0x00050c2f) video_down_crop_pane_ParamLimits

0x6a5b,	// (0x00050c2f) video_down_crop_pane

0x6b4d,	// (0x00050d21) video_down_pane_ParamLimits

0x6b4d,	// (0x00050d21) video_down_pane

0x3828,	// (0x0004d9fc) video_down_subqcif_pane_ParamLimits

0x3828,	// (0x0004d9fc) video_down_subqcif_pane

0x3842,	// (0x0004da16) video_down_subqcif_pane_cp_ParamLimits

0x3842,	// (0x0004da16) video_down_subqcif_pane_cp

0x386a,	// (0x0004da3e) im_reading_pane_ParamLimits

0x386a,	// (0x0004da3e) im_reading_pane

0x6c6a,	// (0x00050e3e) im_writing_pane_ParamLimits

0x6c6a,	// (0x00050e3e) im_writing_pane

0x6c88,	// (0x00050e5c) im_reading_pane_t1

0x3884,	// (0x0004da58) list_im_pane

0x3895,	// (0x0004da69) scroll_pane_cp07

0x6cca,	// (0x00050e9e) im_writing_pane_t1_ParamLimits

0x6cca,	// (0x00050e9e) im_writing_pane_t1

0x38ae,	// (0x0004da82) im_writing_pane_t2_ParamLimits

0x38ae,	// (0x0004da82) im_writing_pane_t2

0x0001,

0xf227,	// (0x000593fb) im_writing_pane_t_ParamLimits

0xf227,	// (0x000593fb) im_writing_pane_t

0x3297,	// (0x0004d46b) input_focus_pane_cp04

0x3297,	// (0x0004d46b) input_focus_pane_cp05

0x6cdc,	// (0x00050eb0) list_im_single_pane_ParamLimits

0x6cdc,	// (0x00050eb0) list_im_single_pane

0x6cf5,	// (0x00050ec9) list_single_im_pane_t1

0x377d,	// (0x0004d951) blid_accuracy_pane

0x377d,	// (0x0004d951) blid_compass_pane

0xe6fc,	// (0x000588d0) main_location_t1

0xe6fc,	// (0x000588d0) main_location_t2

0xe6fc,	// (0x000588d0) main_location_t3

0x0002,

0xf573,	// (0x00059747) main_location_t

0x3297,	// (0x0004d46b) aid_levels_location

0x350a,	// (0x0004d6de) blid_accuracy_pane_g1

0x350a,	// (0x0004d6de) blid_accuracy_pane_g2

0x0001,

0xf27b,	// (0x0005944f) blid_accuracy_pane_g

0x38f6,	// (0x0004daca) wml_content_pane

0x3934,	// (0x0004db08) wml_button_pane_ParamLimits

0x3934,	// (0x0004db08) wml_button_pane

0x6d04,	// (0x00050ed8) wml_list_single_large_pane_ParamLimits

0x6d04,	// (0x00050ed8) wml_list_single_large_pane

0x6d26,	// (0x00050efa) wml_list_single_medium_pane_ParamLimits

0x6d26,	// (0x00050efa) wml_list_single_medium_pane

0x6d49,	// (0x00050f1d) wml_list_single_small_pane_ParamLimits

0x6d49,	// (0x00050f1d) wml_list_single_small_pane

0x3948,	// (0x0004db1c) wml_selection_box_pane_ParamLimits

0x3948,	// (0x0004db1c) wml_selection_box_pane

0x395b,	// (0x0004db2f) wml_list_single_pane_t1

0x396a,	// (0x0004db3e) wml_list_single_medium_pane_t1

0x3979,	// (0x0004db4d) wml_list_single_large_pane_t1

0x3988,	// (0x0004db5c) input_focus_pane_cp02_ParamLimits

0x3988,	// (0x0004db5c) input_focus_pane_cp02

0x399b,	// (0x0004db6f) wml_selection_box_pane_g1

0x39a4,	// (0x0004db78) wml_selection_box_pane_t1_ParamLimits

0x39a4,	// (0x0004db78) wml_selection_box_pane_t1

0x34f2,	// (0x0004d6c6) bg_wml_button_pane_ParamLimits

0x34f2,	// (0x0004d6c6) bg_wml_button_pane

0x39bc,	// (0x0004db90) wml_button_pane_g1

0x39c4,	// (0x0004db98) wml_button_pane_t1

0x39bc,	// (0x0004db90) wml_button_bg_pane_g1

0x39d4,	// (0x0004dba8) wml_button_bg_pane_g2

0x39dc,	// (0x0004dbb0) wml_button_bg_pane_g3

0x39e4,	// (0x0004dbb8) wml_button_bg_pane_g4

0x39ec,	// (0x0004dbc0) wml_button_bg_pane_g5

0x39f4,	// (0x0004dbc8) wml_button_bg_pane_g6

0x39fc,	// (0x0004dbd0) wml_button_bg_pane_g7

0x3a04,	// (0x0004dbd8) wml_button_bg_pane_g8

0x3a0c,	// (0x0004dbe0) wml_button_bg_pane_g9

0x0008,

0xf22c,	// (0x00059400) wml_button_bg_pane_g

0x6d71,	// (0x00050f45) bg_list_pane_cp02

0x3a14,	// (0x0004dbe8) mce_header_pane_ParamLimits

0x3a14,	// (0x0004dbe8) mce_header_pane

0x3a2a,	// (0x0004dbfe) mce_icon_pane

0x3a2a,	// (0x0004dbfe) mce_image_pane

0x3a33,	// (0x0004dc07) mce_text_pane_ParamLimits

0x3a33,	// (0x0004dc07) mce_text_pane

0x6d7b,	// (0x00050f4f) scroll_pane_cp03

0x392c,	// (0x0004db00) scroll_pane_cp04

0x3a46,	// (0x0004dc1a) scroll_pane_cp05_ParamLimits

0x3a46,	// (0x0004dc1a) scroll_pane_cp05

0x6d85,	// (0x00050f59) mce_header_field_pane_ParamLimits

0x6d85,	// (0x00050f59) mce_header_field_pane

0x6da7,	// (0x00050f7b) mce_header_field_pane_2_ParamLimits

0x6da7,	// (0x00050f7b) mce_header_field_pane_2

0x6dbd,	// (0x00050f91) mce_header_field_pane_3

0x6dc5,	// (0x00050f99) list_single_mce_message_pane_ParamLimits

0x6dc5,	// (0x00050f99) list_single_mce_message_pane

0x6de4,	// (0x00050fb8) list_single_mce_smart_pane_ParamLimits

0x6de4,	// (0x00050fb8) list_single_mce_smart_pane

0x3a52,	// (0x0004dc26) input_focus_pane_cp03

0x3a5b,	// (0x0004dc2f) list_header_data_pane

0x6e0e,	// (0x00050fe2) mce_header_field_pane_t1

0x6e1e,	// (0x00050ff2) list_single_mce_header_pane_ParamLimits

0x6e1e,	// (0x00050ff2) list_single_mce_header_pane

0x3a63,	// (0x0004dc37) list_single_mce_header_pane_t1

0x3a72,	// (0x0004dc46) list_single_mce_message_pane_g1

0x3a7a,	// (0x0004dc4e) list_single_mce_message_pane_t1

0x6e62,	// (0x00051036) bg_cale_heading_pane_cp01_ParamLimits

0x6e62,	// (0x00051036) bg_cale_heading_pane_cp01

0x3a88,	// (0x0004dc5c) bg_cale_pane_cp02_ParamLimits

0x3a88,	// (0x0004dc5c) bg_cale_pane_cp02

0x6eb4,	// (0x00051088) cale_month_corner_pane

0x6ed3,	// (0x000510a7) cale_month_day_heading_pane_ParamLimits

0x6ed3,	// (0x000510a7) cale_month_day_heading_pane

0x6f35,	// (0x00051109) cale_month_pane_g1_ParamLimits

0x6f35,	// (0x00051109) cale_month_pane_g1

0x6f7c,	// (0x00051150) cale_month_pane_g2_ParamLimits

0x6f7c,	// (0x00051150) cale_month_pane_g2

0x6fb4,	// (0x00051188) cale_month_pane_g3_ParamLimits

0x6fb4,	// (0x00051188) cale_month_pane_g3

0x7008,	// (0x000511dc) cale_month_pane_g4_ParamLimits

0x7008,	// (0x000511dc) cale_month_pane_g4

0x705c,	// (0x00051230) cale_month_pane_g5_ParamLimits

0x705c,	// (0x00051230) cale_month_pane_g5

0x70b0,	// (0x00051284) cale_month_pane_g6_ParamLimits

0x70b0,	// (0x00051284) cale_month_pane_g6

0x7114,	// (0x000512e8) cale_month_pane_g7_ParamLimits

0x7114,	// (0x000512e8) cale_month_pane_g7

0x7178,	// (0x0005134c) cale_month_pane_g8_ParamLimits

0x7178,	// (0x0005134c) cale_month_pane_g8

0x71dc,	// (0x000513b0) cale_month_pane_g9_ParamLimits

0x71dc,	// (0x000513b0) cale_month_pane_g9

0x7236,	// (0x0005140a) cale_month_pane_g10_ParamLimits

0x7236,	// (0x0005140a) cale_month_pane_g10

0x7288,	// (0x0005145c) cale_month_pane_g11_ParamLimits

0x7288,	// (0x0005145c) cale_month_pane_g11

0x72d6,	// (0x000514aa) cale_month_pane_g12_ParamLimits

0x72d6,	// (0x000514aa) cale_month_pane_g12

0x7326,	// (0x000514fa) cale_month_pane_g13_ParamLimits

0x7326,	// (0x000514fa) cale_month_pane_g13

0x000c,

0xf23f,	// (0x00059413) cale_month_pane_g_ParamLimits

0xf23f,	// (0x00059413) cale_month_pane_g

0x7376,	// (0x0005154a) cale_month_week_pane

0x7396,	// (0x0005156a) grid_cale_month_pane_ParamLimits

0x7396,	// (0x0005156a) grid_cale_month_pane

0x73ef,	// (0x000515c3) cale_month_day_heading_pane_t1

0x7471,	// (0x00051645) cale_month_day_heading_pane_t2

0x74ea,	// (0x000516be) cale_month_day_heading_pane_t3

0x7563,	// (0x00051737) cale_month_day_heading_pane_t4

0x75dc,	// (0x000517b0) cale_month_day_heading_pane_t5

0x765d,	// (0x00051831) cale_month_day_heading_pane_t6

0x76e6,	// (0x000518ba) cale_month_day_heading_pane_t7

0x0006,

0xf25a,	// (0x0005942e) cale_month_day_heading_pane_t

0x3722,	// (0x0004d8f6) bg_cale_side_pane_cp01

0x776f,	// (0x00051943) cale_month_week_pane_t1

0x7788,	// (0x0005195c) cale_month_week_pane_t2

0x77a1,	// (0x00051975) cale_month_week_pane_t3

0x77ba,	// (0x0005198e) cale_month_week_pane_t4

0x77d3,	// (0x000519a7) cale_month_week_pane_t5

0x77f0,	// (0x000519c4) cale_month_week_pane_t6

0x0005,

0xf269,	// (0x0005943d) cale_month_week_pane_t

0x7813,	// (0x000519e7) cell_cale_month_pane_ParamLimits

0x7813,	// (0x000519e7) cell_cale_month_pane

0x7941,	// (0x00051b15) cell_cale_month_pane_g1

0x794d,	// (0x00051b21) cell_cale_month_pane_t1_ParamLimits

0x794d,	// (0x00051b21) cell_cale_month_pane_t1

0x3730,	// (0x0004d904) grid_highlight_pane_cp08

0x350a,	// (0x0004d6de) main_smil_g1

0x7979,	// (0x00051b4d) smil_status_pane

0x3ac7,	// (0x0004dc9b) smil_text_pane

0xe612,	// (0x000587e6) bg_popup_call3_rect_pane_g8

0xe61a,	// (0x000587ee) bg_popup_call3_rect_pane_g9

0x0008,

0xf507,	// (0x000596db) bg_popup_call3_rect_pane_g

0xe7d8,	// (0x000589ac) smil_status_volume_pane_g1

0x3ad1,	// (0x0004dca5) smil_status_pane_t1

0x8c65,	// (0x00052e39) volume_smil_pane

0x3ae8,	// (0x0004dcbc) list_smil_text_pane

0x798c,	// (0x00051b60) scroll_pane_cp011

0x7997,	// (0x00051b6b) smil_text_list_pane_t1_ParamLimits

0x7997,	// (0x00051b6b) smil_text_list_pane_t1

0x79eb,	// (0x00051bbf) aid_volume_smil_ParamLimits

0x79eb,	// (0x00051bbf) aid_volume_smil

0x350a,	// (0x0004d6de) smil_volume_pane_g1

0x350a,	// (0x0004d6de) smil_volume_pane_g2

0x0001,

0xf27b,	// (0x0005944f) smil_volume_pane_g

0x6067,	// (0x0005023b) listscroll_cale_day_pane

0x3af2,	// (0x0004dcc6) bg_cale_pane

0x3b0a,	// (0x0004dcde) list_cale_pane

0x3b2d,	// (0x0004dd01) scroll_pane_cp09

0x3b3e,	// (0x0004dd12) cale_bg_pane_g1

0x3b46,	// (0x0004dd1a) cale_bg_pane_g2

0x3b4e,	// (0x0004dd22) cale_bg_pane_g3

0x3b56,	// (0x0004dd2a) cale_bg_pane_g4

0x3b5e,	// (0x0004dd32) cale_bg_pane_g5

0x3b66,	// (0x0004dd3a) cale_bg_pane_g6

0x3b6e,	// (0x0004dd42) cale_bg_pane_g7

0x3b76,	// (0x0004dd4a) cale_bg_pane_g8

0x3b7e,	// (0x0004dd52) cale_bg_pane_g9

0x0008,

0xf280,	// (0x00059454) cale_bg_pane_g

0x7a15,	// (0x00051be9) list_cale_time_pane_ParamLimits

0x7a15,	// (0x00051be9) list_cale_time_pane

0x3b86,	// (0x0004dd5a) list_cale_time_pane_g1_ParamLimits

0x3b86,	// (0x0004dd5a) list_cale_time_pane_g1

0x3b92,	// (0x0004dd66) list_cale_time_pane_g2_ParamLimits

0x3b92,	// (0x0004dd66) list_cale_time_pane_g2

0x7a2c,	// (0x00051c00) list_cale_time_pane_g3_ParamLimits

0x7a2c,	// (0x00051c00) list_cale_time_pane_g3

0x7a3a,	// (0x00051c0e) list_cale_time_pane_g4_ParamLimits

0x7a3a,	// (0x00051c0e) list_cale_time_pane_g4

0x7a48,	// (0x00051c1c) list_cale_time_pane_g5_ParamLimits

0x7a48,	// (0x00051c1c) list_cale_time_pane_g5

0x0005,

0xf293,	// (0x00059467) list_cale_time_pane_g_ParamLimits

0xf293,	// (0x00059467) list_cale_time_pane_g

0x3bac,	// (0x0004dd80) list_cale_time_pane_t1_ParamLimits

0x3bac,	// (0x0004dd80) list_cale_time_pane_t1

0x3bd4,	// (0x0004dda8) list_cale_time_pane_t2_ParamLimits

0x3bd4,	// (0x0004dda8) list_cale_time_pane_t2

0x7d05,	// (0x00051ed9) aid_blid_cardinal_pane

0x7d47,	// (0x00051f1b) compass_pane_t4

0x3bfc,	// (0x0004ddd0) list_cale_time_pane_t4_ParamLimits

0x3bfc,	// (0x0004ddd0) list_cale_time_pane_t4

0x7d55,	// (0x00051f29) compass_pane_t5

0x7d65,	// (0x00051f39) compass_pane_t6

0x7d73,	// (0x00051f47) compass_pane_t7

0x4023,	// (0x0004e1f7) navi_pane_cc_t1

0x4170,	// (0x0004e344) aid_phob_thumbnail_center_pane

0x8323,	// (0x000524f7) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2a0,	// (0x00059474) list_cale_time_pane_t_ParamLimits

0xf2a0,	// (0x00059474) list_cale_time_pane_t

0x2eee,	// (0x0004d0c2) bg_popup_window_pane_cp02_ParamLimits

0x2eee,	// (0x0004d0c2) bg_popup_window_pane_cp02

0x3c24,	// (0x0004ddf8) heading_pane_cp01_ParamLimits

0x3c24,	// (0x0004ddf8) heading_pane_cp01

0x3c30,	// (0x0004de04) loc_req_pane_ParamLimits

0x3c30,	// (0x0004de04) loc_req_pane

0x3c40,	// (0x0004de14) loc_type_pane_ParamLimits

0x3c40,	// (0x0004de14) loc_type_pane

0x3c52,	// (0x0004de26) loc_type_pane_t1_ParamLimits

0x3c52,	// (0x0004de26) loc_type_pane_t1

0x3c64,	// (0x0004de38) loc_type_pane_t2_ParamLimits

0x3c64,	// (0x0004de38) loc_type_pane_t2

0x3c76,	// (0x0004de4a) loc_type_pane_t3_ParamLimits

0x3c76,	// (0x0004de4a) loc_type_pane_t3

0x0002,

0xf2a7,	// (0x0005947b) loc_type_pane_t_ParamLimits

0xf2a7,	// (0x0005947b) loc_type_pane_t

0x3c88,	// (0x0004de5c) list_loc_req_pane

0x3c92,	// (0x0004de66) scroll_pane_cp012

0x7a56,	// (0x00051c2a) list_single_loc_request_popup_menu_pane_ParamLimits

0x7a56,	// (0x00051c2a) list_single_loc_request_popup_menu_pane

0x3c9d,	// (0x0004de71) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3c9d,	// (0x0004de71) list_single_loc_request_popup_menu_pane_g1

0x3ca9,	// (0x0004de7d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3ca9,	// (0x0004de7d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ae,	// (0x00059482) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ae,	// (0x00059482) list_single_loc_request_popup_menu_pane_g

0x3cb5,	// (0x0004de89) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3cb5,	// (0x0004de89) list_single_loc_request_popup_menu_pane_t1

0x7a68,	// (0x00051c3c) bg_popup_window_pane_cp03_ParamLimits

0x7a68,	// (0x00051c3c) bg_popup_window_pane_cp03

0x7a76,	// (0x00051c4a) heading_loc_req_pane_ParamLimits

0x7a76,	// (0x00051c4a) heading_loc_req_pane

0x7a82,	// (0x00051c56) popup_dyc_status_message_window_g1_ParamLimits

0x7a82,	// (0x00051c56) popup_dyc_status_message_window_g1

0x7a8e,	// (0x00051c62) popup_dyc_status_message_window_t1_ParamLimits

0x7a8e,	// (0x00051c62) popup_dyc_status_message_window_t1

0x7aa0,	// (0x00051c74) popup_dyc_status_message_window_t2_ParamLimits

0x7aa0,	// (0x00051c74) popup_dyc_status_message_window_t2

0x7ab2,	// (0x00051c86) popup_dyc_status_message_window_t3_ParamLimits

0x7ab2,	// (0x00051c86) popup_dyc_status_message_window_t3

0x0002,

0xf2b3,	// (0x00059487) popup_dyc_status_message_window_t_ParamLimits

0xf2b3,	// (0x00059487) popup_dyc_status_message_window_t

0x3297,	// (0x0004d46b) bg_heading_pane_cp01

0x3ccb,	// (0x0004de9f) heading_loc_req_pane_g1

0x3cd3,	// (0x0004dea7) heading_loc_req_pane_g2

0x3cdb,	// (0x0004deaf) heading_loc_req_pane_g3

0x0002,

0xf2ba,	// (0x0005948e) heading_loc_req_pane_g

0x3ce3,	// (0x0004deb7) heading_loc_req_pane_t1

0x3d03,	// (0x0004ded7) bg_popup_sub_pane_cp01_ParamLimits

0x3d03,	// (0x0004ded7) bg_popup_sub_pane_cp01

0x3d11,	// (0x0004dee5) popup_cale_events_window_g1_ParamLimits

0x3d11,	// (0x0004dee5) popup_cale_events_window_g1

0x3d31,	// (0x0004df05) popup_cale_events_window_g2_ParamLimits

0x3d31,	// (0x0004df05) popup_cale_events_window_g2

0x0001,

0xf2dc,	// (0x000594b0) popup_cale_events_window_g_ParamLimits

0xf2dc,	// (0x000594b0) popup_cale_events_window_g

0x3d51,	// (0x0004df25) popup_cale_events_window_t1_ParamLimits

0x3d51,	// (0x0004df25) popup_cale_events_window_t1

0x3d63,	// (0x0004df37) popup_cale_events_window_t2_ParamLimits

0x3d63,	// (0x0004df37) popup_cale_events_window_t2

0x3da1,	// (0x0004df75) popup_cale_events_window_t3_ParamLimits

0x3da1,	// (0x0004df75) popup_cale_events_window_t3

0x3ddb,	// (0x0004dfaf) popup_cale_events_window_t4_ParamLimits

0x3ddb,	// (0x0004dfaf) popup_cale_events_window_t4

0x0003,

0xf2e1,	// (0x000594b5) popup_cale_events_window_t_ParamLimits

0xf2e1,	// (0x000594b5) popup_cale_events_window_t

0x7adc,	// (0x00051cb0) call_type_pane

0xdd55,	// (0x00057f29) popup_call_status_window_g1

0x7ae8,	// (0x00051cbc) popup_call_status_window_g2

0x7af4,	// (0x00051cc8) popup_call_status_window_g3

0x0002,

0xf2ea,	// (0x000594be) popup_call_status_window_g

0x3e11,	// (0x0004dfe5) call_type_pane_g1

0x3e1a,	// (0x0004dfee) call_type_pane_g2

0x0001,

0xf2f1,	// (0x000594c5) call_type_pane_g

0x3297,	// (0x0004d46b) bg_popup_sub_pane_cp02

0x3e23,	// (0x0004dff7) listscroll_popup_wml_pane

0x3e2b,	// (0x0004dfff) list_wml_pane

0x3e35,	// (0x0004e009) scroll_pane_cp013

0x3e40,	// (0x0004e014) list_single_graphic_popup_wml_pane_ParamLimits

0x3e40,	// (0x0004e014) list_single_graphic_popup_wml_pane

0x350a,	// (0x0004d6de) list_single_graphic_popup_wml_pane_g1

0x3e54,	// (0x0004e028) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2f6,	// (0x000594ca) list_single_graphic_popup_wml_pane_g

0x3e5c,	// (0x0004e030) list_single_graphic_popup_wml_pane_t1

0x3e6a,	// (0x0004e03e) aid_call_pane

0x34ea,	// (0x0004d6be) popup_clock_analogue_window_g1

0x34ea,	// (0x0004d6be) popup_clock_analogue_window_g2

0x7b00,	// (0x00051cd4) popup_clock_analogue_window_g3

0x7b00,	// (0x00051cd4) popup_clock_analogue_window_g4

0x350a,	// (0x0004d6de) popup_clock_analogue_window_g5

0x0004,

0xf2fb,	// (0x000594cf) popup_clock_analogue_window_g

0x7b08,	// (0x00051cdc) popup_clock_analogue_window_t1

0x7b16,	// (0x00051cea) clock_digital_number_pane_ParamLimits

0x7b16,	// (0x00051cea) clock_digital_number_pane

0x7b22,	// (0x00051cf6) clock_digital_number_pane_cp02_ParamLimits

0x7b22,	// (0x00051cf6) clock_digital_number_pane_cp02

0x7b2e,	// (0x00051d02) clock_digital_number_pane_cp03_ParamLimits

0x7b2e,	// (0x00051d02) clock_digital_number_pane_cp03

0x7b3a,	// (0x00051d0e) clock_digital_number_pane_cp04_ParamLimits

0x7b3a,	// (0x00051d0e) clock_digital_number_pane_cp04

0x7b46,	// (0x00051d1a) clock_digital_separator_pane_ParamLimits

0x7b46,	// (0x00051d1a) clock_digital_separator_pane

0x7b52,	// (0x00051d26) popup_clock_digital_window_t1

0x350a,	// (0x0004d6de) clock_digital_number_pane_g1

0x350a,	// (0x0004d6de) clock_digital_number_pane_g2

0x0001,

0xf27b,	// (0x0005944f) clock_digital_number_pane_g

0x350a,	// (0x0004d6de) clock_digital_separator_pane_g1

0x350a,	// (0x0004d6de) clock_digital_separator_pane_g2

0x0001,

0xf27b,	// (0x0005944f) clock_digital_separator_pane_g

0x3297,	// (0x0004d46b) bg_popup_window_pane_cp04

0x3e7a,	// (0x0004e04e) heading_pane_cp03

0x377d,	// (0x0004d951) listscroll_popup_gms_pane

0x3297,	// (0x0004d46b) grid_large_graphic_popup_pane

0x3e83,	// (0x0004e057) listscroll_popup_gms_pane_g1

0x3e8c,	// (0x0004e060) listscroll_popup_gms_pane_g2

0x0001,

0xf306,	// (0x000594da) listscroll_popup_gms_pane_g

0x3e95,	// (0x0004e069) scroll_pane_cp014

0x2e74,	// (0x0004d048) cell_large_graphic_popup_pane_ParamLimits

0x2e74,	// (0x0004d048) cell_large_graphic_popup_pane

0x356d,	// (0x0004d741) cell_large_graphic_popup_pane_g1_ParamLimits

0x356d,	// (0x0004d741) cell_large_graphic_popup_pane_g1

0x3e9e,	// (0x0004e072) cell_large_graphic_popup_pane_g2_ParamLimits

0x3e9e,	// (0x0004e072) cell_large_graphic_popup_pane_g2

0x3eac,	// (0x0004e080) cell_large_graphic_popup_pane_g3_ParamLimits

0x3eac,	// (0x0004e080) cell_large_graphic_popup_pane_g3

0x3eba,	// (0x0004e08e) cell_large_graphic_popup_pane_g4_ParamLimits

0x3eba,	// (0x0004e08e) cell_large_graphic_popup_pane_g4

0x0003,

0xf30b,	// (0x000594df) cell_large_graphic_popup_pane_g_ParamLimits

0xf30b,	// (0x000594df) cell_large_graphic_popup_pane_g

0x3297,	// (0x0004d46b) grid_highlight_pane_cp010

0x350a,	// (0x0004d6de) bg_popup_call_pane_g1

0x3ecb,	// (0x0004e09f) list_single_graphic_popup_conf_pane_ParamLimits

0x3ecb,	// (0x0004e09f) list_single_graphic_popup_conf_pane

0x3edd,	// (0x0004e0b1) list_highlight_pane_cp01

0x3ee6,	// (0x0004e0ba) list_single_graphic_popup_conf_pane_g1

0x3eee,	// (0x0004e0c2) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf314,	// (0x000594e8) list_single_graphic_popup_conf_pane_g

0x3ef6,	// (0x0004e0ca) list_single_graphic_popup_conf_pane_t1

0x3f04,	// (0x0004e0d8) linegrid_cams_pane_g1

0x7b6f,	// (0x00051d43) linegrid_cams_pane_g2

0x3763,	// (0x0004d937) linegrid_cams_pane_g3

0x3f0d,	// (0x0004e0e1) linegrid_cams_pane_g4

0x7b78,	// (0x00051d4c) linegrid_cams_pane_g5

0x7b81,	// (0x00051d55) linegrid_cams_pane_g6

0x376c,	// (0x0004d940) linegrid_cams_pane_g7

0x0006,

0xf319,	// (0x000594ed) linegrid_cams_pane_g

0x3f16,	// (0x0004e0ea) popup_clock_analogue_window

0x3f16,	// (0x0004e0ea) popup_clock_digital_window

0x3297,	// (0x0004d46b) popup_phob_thumbnail_window

0x350a,	// (0x0004d6de) call_video_uplink_pane_g1

0x3f1f,	// (0x0004e0f3) call_video_uplink_pane_g2

0x0001,

0xf328,	// (0x000594fc) call_video_uplink_pane_g

0x3f27,	// (0x0004e0fb) video_uplink_pane

0x3f2f,	// (0x0004e103) mce_image_pane_g1

0x7b8c,	// (0x00051d60) mce_image_pane_g2

0x7b96,	// (0x00051d6a) mce_image_pane_g3

0x7ba0,	// (0x00051d74) mce_image_pane_g4

0x7ba8,	// (0x00051d7c) mce_image_pane_g5

0x0004,

0xf32d,	// (0x00059501) mce_image_pane_g

0x3f39,	// (0x0004e10d) control_top_pane_stacon_cp01_ParamLimits

0x3f39,	// (0x0004e10d) control_top_pane_stacon_cp01

0x3f4d,	// (0x0004e121) uni_indicator_pane_stacon_cp01_ParamLimits

0x3f4d,	// (0x0004e121) uni_indicator_pane_stacon_cp01

0x3f73,	// (0x0004e147) bg_popup_sub_pane_cp03

0x7bb0,	// (0x00051d84) chi_dic_find_pane

0x7bb8,	// (0x00051d8c) listscroll_chi_dic_pane

0x7bc1,	// (0x00051d95) main_pane_chidic_g1

0x7bd4,	// (0x00051da8) chi_dic_find_pane_t1

0x3f7d,	// (0x0004e151) find_chidic_pane

0x3f86,	// (0x0004e15a) chi_dic_list_pane_ParamLimits

0x3f86,	// (0x0004e15a) chi_dic_list_pane

0x3f97,	// (0x0004e16b) scroll_pane_cp020

0x7be2,	// (0x00051db6) find_chidic_pane_t1

0x3297,	// (0x0004d46b) input_focus_pane_cp06

0x3f5e,	// (0x0004e132) list_chi_dic_pane_ParamLimits

0x3f5e,	// (0x0004e132) list_chi_dic_pane

0x7bf1,	// (0x00051dc5) list_chi_dic_pane_t1_ParamLimits

0x7bf1,	// (0x00051dc5) list_chi_dic_pane_t1

0x3297,	// (0x0004d46b) list_highlight_pane_cp020

0x3f9f,	// (0x0004e173) bg_cale_heading_pane_g1

0x7c04,	// (0x00051dd8) bg_cale_heading_pane_g2

0x7c0c,	// (0x00051de0) bg_cale_heading_pane_g3

0x7c14,	// (0x00051de8) bg_cale_heading_pane_g4

0x7c1e,	// (0x00051df2) bg_cale_heading_pane_g5

0x7c28,	// (0x00051dfc) bg_cale_heading_pane_g6

0x7c30,	// (0x00051e04) bg_cale_heading_pane_g7

0x7c38,	// (0x00051e0c) bg_cale_heading_pane_g8

0x7c42,	// (0x00051e16) bg_cale_heading_pane_g9

0x0008,

0xf338,	// (0x0005950c) bg_cale_heading_pane_g

0x3f9f,	// (0x0004e173) bg_cale_side_pane_g1

0x7c4c,	// (0x00051e20) bg_cale_side_pane_g2

0x7c56,	// (0x00051e2a) bg_cale_side_pane_g3

0x7c60,	// (0x00051e34) bg_cale_side_pane_g4

0x7c6a,	// (0x00051e3e) bg_cale_side_pane_g5

0x7c74,	// (0x00051e48) bg_cale_side_pane_g6

0x7c7e,	// (0x00051e52) bg_cale_side_pane_g7

0x7c88,	// (0x00051e5c) bg_cale_side_pane_g8

0x7c90,	// (0x00051e64) bg_cale_side_pane_g9

0x0008,

0xf34b,	// (0x0005951f) bg_cale_side_pane_g

0x7c98,	// (0x00051e6c) popup_call_status_window_ParamLimits

0x7c98,	// (0x00051e6c) popup_call_status_window

0x3fa7,	// (0x0004e17b) stacon_top_pane

0x3faf,	// (0x0004e183) status_pane_ParamLimits

0x3faf,	// (0x0004e183) status_pane

0x3fc4,	// (0x0004e198) status_small_pane

0x3fcc,	// (0x0004e1a0) control_pane

0x3297,	// (0x0004d46b) stacon_bottom_pane

0x3fd4,	// (0x0004e1a8) list_single_mce_smart_pane_t1_ParamLimits

0x3fd4,	// (0x0004e1a8) list_single_mce_smart_pane_t1

0x3fe7,	// (0x0004e1bb) list_single_mce_smart_pane_t2_ParamLimits

0x3fe7,	// (0x0004e1bb) list_single_mce_smart_pane_t2

0x0001,

0xf35e,	// (0x00059532) list_single_mce_smart_pane_t_ParamLimits

0xf35e,	// (0x00059532) list_single_mce_smart_pane_t

0x7ca4,	// (0x00051e78) compass_pane

0x7caf,	// (0x00051e83) main_location2_pane_t1

0x7cc5,	// (0x00051e99) main_location2_pane_t2

0x7cdb,	// (0x00051eaf) main_location2_pane_t3

0x0003,

0xf363,	// (0x00059537) main_location2_pane_t

0x4006,	// (0x0004e1da) compass_pane_g1_ParamLimits

0x4006,	// (0x0004e1da) compass_pane_g1

0x7d29,	// (0x00051efd) compass_pane_t1

0x7d38,	// (0x00051f0c) compass_pane_t2

0x0005,

0xf36c,	// (0x00059540) compass_pane_t

0x7d83,	// (0x00051f57) text_secondary_cp61

0x401a,	// (0x0004e1ee) navi_pane_cams_g5

0x403d,	// (0x0004e211) navi_pane_im_t1

0x404b,	// (0x0004e21f) navi_pane_mp_g1_ParamLimits

0x404b,	// (0x0004e21f) navi_pane_mp_g1

0x405f,	// (0x0004e233) navi_pane_mp_g2_ParamLimits

0x405f,	// (0x0004e233) navi_pane_mp_g2

0x406b,	// (0x0004e23f) navi_pane_mp_g3_ParamLimits

0x406b,	// (0x0004e23f) navi_pane_mp_g3

0x0002,

0xf380,	// (0x00059554) navi_pane_mp_g_ParamLimits

0xf380,	// (0x00059554) navi_pane_mp_g

0x4077,	// (0x0004e24b) navi_pane_mp_t1

0x4085,	// (0x0004e259) navi_pane_mp_t2

0x0002,

0xf387,	// (0x0005955b) navi_pane_mp_t

0x40c1,	// (0x0004e295) navi_pane_vt_g1

0x4077,	// (0x0004e24b) navi_pane_vt_t1

0x40c9,	// (0x0004e29d) navi_slider_pane

0x377d,	// (0x0004d951) zooming_pane

0x40d1,	// (0x0004e2a5) navi_slider_pane_g1

0x7eb8,	// (0x0005208c) navi_slider_pane_g2

0x0006,

0xf38e,	// (0x00059562) navi_slider_pane_g

0x40f5,	// (0x0004e2c9) aid_levels_zoom

0x40fd,	// (0x0004e2d1) zooming_pane_g1

0x4105,	// (0x0004e2d9) zooming_pane_g2

0x4105,	// (0x0004e2d9) zooming_pane_g3

0x0002,

0xf39d,	// (0x00059571) zooming_pane_g

0x410d,	// (0x0004e2e1) level_10_zoom

0x4116,	// (0x0004e2ea) level_11_zoom

0x411f,	// (0x0004e2f3) level_1_zoom

0x4128,	// (0x0004e2fc) level_2_zoom

0x4131,	// (0x0004e305) level_3_zoom

0x413a,	// (0x0004e30e) level_4_zoom

0x4143,	// (0x0004e317) level_5_zoom

0x414c,	// (0x0004e320) level_6_zoom

0x4155,	// (0x0004e329) level_7_zoom

0x415e,	// (0x0004e332) level_8_zoom

0x4167,	// (0x0004e33b) level_9_zoom

0x4178,	// (0x0004e34c) popup_phob_thumbnail_window_g1

0x4180,	// (0x0004e354) popup_phob_thumbnail_window_g2

0x0001,

0xf3a4,	// (0x00059578) popup_phob_thumbnail_window_g

0x88e7,	// (0x00052abb) level_1_location

0x88ef,	// (0x00052ac3) level_2_location

0x88f7,	// (0x00052acb) level_3_location

0x8901,	// (0x00052ad5) level_4_location

0x377d,	// (0x0004d951) level_5_location

0x7eca,	// (0x0005209e) mce_icon_pane_g1

0x7ed2,	// (0x000520a6) mce_icon_pane_g2

0x0001,

0xf3a9,	// (0x0005957d) mce_icon_pane_g

0x7eda,	// (0x000520ae) main_mup_pane_g1_ParamLimits

0x7eda,	// (0x000520ae) main_mup_pane_g1

0x3589,	// (0x0004d75d) main_mup_pane_g2_ParamLimits

0x3589,	// (0x0004d75d) main_mup_pane_g2

0x3589,	// (0x0004d75d) main_mup_pane_g3_ParamLimits

0x3589,	// (0x0004d75d) main_mup_pane_g3

0x3589,	// (0x0004d75d) main_mup_pane_g4_ParamLimits

0x3589,	// (0x0004d75d) main_mup_pane_g4

0x3589,	// (0x0004d75d) main_mup_pane_g5_ParamLimits

0x3589,	// (0x0004d75d) main_mup_pane_g5

0x3589,	// (0x0004d75d) main_mup_pane_g6_ParamLimits

0x3589,	// (0x0004d75d) main_mup_pane_g6

0x3589,	// (0x0004d75d) main_mup_pane_g7_ParamLimits

0x3589,	// (0x0004d75d) main_mup_pane_g7

0x3589,	// (0x0004d75d) main_mup_pane_g8_ParamLimits

0x3589,	// (0x0004d75d) main_mup_pane_g8

0x3589,	// (0x0004d75d) main_mup_pane_g9_ParamLimits

0x3589,	// (0x0004d75d) main_mup_pane_g9

0x3589,	// (0x0004d75d) main_mup_pane_g10_ParamLimits

0x3589,	// (0x0004d75d) main_mup_pane_g10

0x3589,	// (0x0004d75d) main_mup_pane_g11_ParamLimits

0x3589,	// (0x0004d75d) main_mup_pane_g11

0x357b,	// (0x0004d74f) main_mup_pane_g12_ParamLimits

0x357b,	// (0x0004d74f) main_mup_pane_g12

0x3589,	// (0x0004d75d) main_mup_pane_g13_ParamLimits

0x3589,	// (0x0004d75d) main_mup_pane_g13

0x000c,

0xf3ae,	// (0x00059582) main_mup_pane_g_ParamLimits

0xf3ae,	// (0x00059582) main_mup_pane_g

0x3597,	// (0x0004d76b) main_mup_pane_t1_ParamLimits

0x3597,	// (0x0004d76b) main_mup_pane_t1

0x3597,	// (0x0004d76b) main_mup_pane_t2_ParamLimits

0x3597,	// (0x0004d76b) main_mup_pane_t2

0x3597,	// (0x0004d76b) main_mup_pane_t3_ParamLimits

0x3597,	// (0x0004d76b) main_mup_pane_t3

0x379f,	// (0x0004d973) main_mup_pane_t4_ParamLimits

0x379f,	// (0x0004d973) main_mup_pane_t4

0x379f,	// (0x0004d973) main_mup_pane_t5_ParamLimits

0x379f,	// (0x0004d973) main_mup_pane_t5

0x37b3,	// (0x0004d987) main_mup_pane_t6_ParamLimits

0x37b3,	// (0x0004d987) main_mup_pane_t6

0x0005,

0xf3c9,	// (0x0005959d) main_mup_pane_t_ParamLimits

0xf3c9,	// (0x0005959d) main_mup_pane_t

0x3514,	// (0x0004d6e8) mup_progress_pane_ParamLimits

0x3514,	// (0x0004d6e8) mup_progress_pane

0xdd63,	// (0x00057f37) mup_visualizer_pane_ParamLimits

0xdd63,	// (0x00057f37) mup_visualizer_pane

0xdd63,	// (0x00057f37) mup_volume_pane_ParamLimits

0xdd63,	// (0x00057f37) mup_volume_pane

0x357b,	// (0x0004d74f) mup_visualizer_pane_g1_ParamLimits

0x357b,	// (0x0004d74f) mup_visualizer_pane_g1

0x4188,	// (0x0004e35c) mup_visualizer_pane_g2_ParamLimits

0x4188,	// (0x0004e35c) mup_visualizer_pane_g2

0x356d,	// (0x0004d741) mup_visualizer_pane_g3_ParamLimits

0x356d,	// (0x0004d741) mup_visualizer_pane_g3

0x0002,

0xf3d6,	// (0x000595aa) mup_visualizer_pane_g_ParamLimits

0xf3d6,	// (0x000595aa) mup_visualizer_pane_g

0x37c7,	// (0x0004d99b) mup_volume_pane_g1

0x37c7,	// (0x0004d99b) mup_volume_pane_g2

0x0001,

0xf3dd,	// (0x000595b1) mup_volume_pane_g

0x37c7,	// (0x0004d99b) mup_progress_pane_g1

0x37c7,	// (0x0004d99b) mup_progress_pane_g2

0x37c7,	// (0x0004d99b) mup_progress_pane_g3

0x0002,

0xf3e2,	// (0x000595b6) mup_progress_pane_g

0x3297,	// (0x0004d46b) bg_popup_window_pane_cp05

0x4196,	// (0x0004e36a) heading_pane_cp02_ParamLimits

0x4196,	// (0x0004e36a) heading_pane_cp02

0x41b2,	// (0x0004e386) list_popup_blid_pane

0x41ba,	// (0x0004e38e) list_blid_sat_info_pane_ParamLimits

0x41ba,	// (0x0004e38e) list_blid_sat_info_pane

0x41cd,	// (0x0004e3a1) list_blid_sat_info_pane_g1

0x41d5,	// (0x0004e3a9) list_blid_sat_info_pane_t1

0x7fe9,	// (0x000521bd) mup_equalizer_pane_ParamLimits

0x7fe9,	// (0x000521bd) mup_equalizer_pane

0x800a,	// (0x000521de) mup_equalizer_pane_cp1_ParamLimits

0x800a,	// (0x000521de) mup_equalizer_pane_cp1

0x802b,	// (0x000521ff) mup_equalizer_pane_cp2_ParamLimits

0x802b,	// (0x000521ff) mup_equalizer_pane_cp2

0x804c,	// (0x00052220) mup_equalizer_pane_cp3_ParamLimits

0x804c,	// (0x00052220) mup_equalizer_pane_cp3

0x8071,	// (0x00052245) mup_equalizer_pane_cp4_ParamLimits

0x8071,	// (0x00052245) mup_equalizer_pane_cp4

0x8096,	// (0x0005226a) mup_equalizer_pane_cp5

0x80ae,	// (0x00052282) mup_equalizer_pane_cp6

0x80c6,	// (0x0005229a) mup_equalizer_pane_cp7

0xe692,	// (0x00058866) bg_popup_call_poc_act_pane_g9

0xe69a,	// (0x0005886e) bg_popup_call_poc_act_pane_g10

0xe6a2,	// (0x00058876) bg_popup_call_poc_act_pane_g11

0x000a,

0x34f2,	// (0x0004d6c6) mup_scale_pane

0x350a,	// (0x0004d6de) mup_scale_pane_g1

0x41e3,	// (0x0004e3b7) mup_scale_pane_g2

0x0006,

0xf3fe,	// (0x000595d2) mup_scale_pane_g

0x4207,	// (0x0004e3db) msg_data_pane

0x420f,	// (0x0004e3e3) scroll_pane_cp017

0x80f0,	// (0x000522c4) bg_list_pane_cp04_ParamLimits

0x80f0,	// (0x000522c4) bg_list_pane_cp04

0x4217,	// (0x0004e3eb) msg_data_pane_g1

0x8118,	// (0x000522ec) msg_data_pane_g2

0x8122,	// (0x000522f6) msg_data_pane_g3

0x812c,	// (0x00052300) msg_data_pane_g4

0x8134,	// (0x00052308) msg_data_pane_g5

0x813c,	// (0x00052310) msg_data_pane_g6

0x8144,	// (0x00052318) msg_data_pane_g7

0x0006,

0xf40d,	// (0x000595e1) msg_data_pane_g

0x814c,	// (0x00052320) msg_text_pane_ParamLimits

0x814c,	// (0x00052320) msg_text_pane

0x817b,	// (0x0005234f) qrid_highlight_pane_cp011_ParamLimits

0x817b,	// (0x0005234f) qrid_highlight_pane_cp011

0x3297,	// (0x0004d46b) msg_body_pane

0x3297,	// (0x0004d46b) msg_header_pane

0x4228,	// (0x0004e3fc) input_focus_pane_cp07

0x819f,	// (0x00052373) msg_header_pane_t1_ParamLimits

0x819f,	// (0x00052373) msg_header_pane_t1

0x81b5,	// (0x00052389) msg_header_pane_t2_ParamLimits

0x81b5,	// (0x00052389) msg_header_pane_t2

0x0001,

0xf421,	// (0x000595f5) msg_header_pane_t_ParamLimits

0xf421,	// (0x000595f5) msg_header_pane_t

0x423d,	// (0x0004e411) msg_body_pane_g1

0x81cc,	// (0x000523a0) msg_body_pane_t1_ParamLimits

0x81cc,	// (0x000523a0) msg_body_pane_t1

0x81fd,	// (0x000523d1) msg_body_pane_t2_ParamLimits

0x81fd,	// (0x000523d1) msg_body_pane_t2

0x820f,	// (0x000523e3) msg_body_pane_t3_ParamLimits

0x820f,	// (0x000523e3) msg_body_pane_t3

0x0002,

0xf426,	// (0x000595fa) msg_body_pane_t_ParamLimits

0xf426,	// (0x000595fa) msg_body_pane_t

0x8273,	// (0x00052447) main_viewer_pane_g1_ParamLimits

0x8273,	// (0x00052447) main_viewer_pane_g1

0x827f,	// (0x00052453) main_viewer_pane_g2_ParamLimits

0x827f,	// (0x00052453) main_viewer_pane_g2

0x828b,	// (0x0005245f) main_viewer_pane_g3_ParamLimits

0x828b,	// (0x0005245f) main_viewer_pane_g3

0x829c,	// (0x00052470) main_viewer_pane_g4_ParamLimits

0x829c,	// (0x00052470) main_viewer_pane_g4

0x82ad,	// (0x00052481) main_viewer_pane_g5_ParamLimits

0x82ad,	// (0x00052481) main_viewer_pane_g5

0x82ad,	// (0x00052481) main_viewer_pane_g7_ParamLimits

0x82ad,	// (0x00052481) main_viewer_pane_g7

0x82bf,	// (0x00052493) main_viewer_pane_g8_ParamLimits

0x82bf,	// (0x00052493) main_viewer_pane_g8

0x0007,

0xf436,	// (0x0005960a) main_viewer_pane_g_ParamLimits

0xf436,	// (0x0005960a) main_viewer_pane_g

0x4245,	// (0x0004e419) viewer_content_pane_ParamLimits

0x4245,	// (0x0004e419) viewer_content_pane

0x82f7,	// (0x000524cb) main_postcard_pane_g1_ParamLimits

0x82f7,	// (0x000524cb) main_postcard_pane_g1

0x8305,	// (0x000524d9) main_postcard_pane_g2_ParamLimits

0x8305,	// (0x000524d9) main_postcard_pane_g2

0x8313,	// (0x000524e7) main_postcard_pane_g3_ParamLimits

0x8313,	// (0x000524e7) main_postcard_pane_g3

0x0005,

0xf447,	// (0x0005961b) main_postcard_pane_g_ParamLimits

0xf447,	// (0x0005961b) main_postcard_pane_g

0x8323,	// (0x000524f7) main_postcard_pane_g4

0xe7eb,	// (0x000589bf) smil_status_volume_pane_g2

0x834f,	// (0x00052523) postcard_pane_ParamLimits

0x834f,	// (0x00052523) postcard_pane

0xdd55,	// (0x00057f29) postcard_pane_g1_ParamLimits

0xdd55,	// (0x00057f29) postcard_pane_g1

0x8389,	// (0x0005255d) postcard_pane_g2_ParamLimits

0x8389,	// (0x0005255d) postcard_pane_g2

0x8395,	// (0x00052569) postcard_pane_g3_ParamLimits

0x8395,	// (0x00052569) postcard_pane_g3

0x4261,	// (0x0004e435) postcard_pane_g4_ParamLimits

0x4261,	// (0x0004e435) postcard_pane_g4

0x83a1,	// (0x00052575) postcard_pane_g5_ParamLimits

0x83a1,	// (0x00052575) postcard_pane_g5

0x83ad,	// (0x00052581) postcard_pane_g6_ParamLimits

0x83ad,	// (0x00052581) postcard_pane_g6

0x4253,	// (0x0004e427) postcard_pane_g7_ParamLimits

0x4253,	// (0x0004e427) postcard_pane_g7

0x0006,

0xf454,	// (0x00059628) postcard_pane_g_ParamLimits

0xf454,	// (0x00059628) postcard_pane_g

0x83bb,	// (0x0005258f) main_mp2_pane_g1_ParamLimits

0x83bb,	// (0x0005258f) main_mp2_pane_g1

0x83c9,	// (0x0005259d) main_mp2_pane_g2_ParamLimits

0x83c9,	// (0x0005259d) main_mp2_pane_g2

0x83d5,	// (0x000525a9) main_mp2_pane_g3_ParamLimits

0x83d5,	// (0x000525a9) main_mp2_pane_g3

0x0002,

0xf463,	// (0x00059637) main_mp2_pane_g_ParamLimits

0xf463,	// (0x00059637) main_mp2_pane_g

0x83e1,	// (0x000525b5) main_mp2_pane_t1_ParamLimits

0x83e1,	// (0x000525b5) main_mp2_pane_t1

0x83f8,	// (0x000525cc) main_mp2_pane_t2_ParamLimits

0x83f8,	// (0x000525cc) main_mp2_pane_t2

0x840c,	// (0x000525e0) main_mp2_pane_t3_ParamLimits

0x840c,	// (0x000525e0) main_mp2_pane_t3

0x0002,

0xf46a,	// (0x0005963e) main_mp2_pane_t_ParamLimits

0xf46a,	// (0x0005963e) main_mp2_pane_t

0x426f,	// (0x0004e443) pec_content_pane_ParamLimits

0x426f,	// (0x0004e443) pec_content_pane

0x392c,	// (0x0004db00) scroll_pane_cp015

0x4281,	// (0x0004e455) pec_attribute_pane_ParamLimits

0x4281,	// (0x0004e455) pec_attribute_pane

0x841e,	// (0x000525f2) pec_content_pane_g1_ParamLimits

0x841e,	// (0x000525f2) pec_content_pane_g1

0x4291,	// (0x0004e465) pec_content_pane_t1_ParamLimits

0x4291,	// (0x0004e465) pec_content_pane_t1

0x42a3,	// (0x0004e477) pec_content_pane_t2_ParamLimits

0x42a3,	// (0x0004e477) pec_content_pane_t2

0x0001,

0xf471,	// (0x00059645) pec_content_pane_t_ParamLimits

0xf471,	// (0x00059645) pec_content_pane_t

0x842a,	// (0x000525fe) list_single_graphic_pane_cp01_ParamLimits

0x842a,	// (0x000525fe) list_single_graphic_pane_cp01

0x34f2,	// (0x0004d6c6) bg_popup_sub_pane_cp04

0x42b5,	// (0x0004e489) popup_mup_playback_window_g1

0x42c1,	// (0x0004e495) popup_mup_playback_window_t1

0x42d6,	// (0x0004e4aa) popup_mup_playback_window_t2

0x0001,

0xf476,	// (0x0005964a) popup_mup_playback_window_t

0x430d,	// (0x0004e4e1) main_image_pane_g1_ParamLimits

0x430d,	// (0x0004e4e1) main_image_pane_g1

0x4350,	// (0x0004e524) scroll_pane_cp018_ParamLimits

0x4350,	// (0x0004e524) scroll_pane_cp018

0x4368,	// (0x0004e53c) scroll_pane_cp016_ParamLimits

0x4368,	// (0x0004e53c) scroll_pane_cp016

0x84b8,	// (0x0005268c) smil2_image_pane_ParamLimits

0x84b8,	// (0x0005268c) smil2_image_pane

0x84ee,	// (0x000526c2) smil2_root_pane_ParamLimits

0x84ee,	// (0x000526c2) smil2_root_pane

0x851a,	// (0x000526ee) smil2_text_pane_ParamLimits

0x851a,	// (0x000526ee) smil2_text_pane

0x3297,	// (0x0004d46b) bg_list_pane_cp06

0x43a4,	// (0x0004e578) grid_radio_pane

0x3297,	// (0x0004d46b) bg_popup_window_pane_cp06

0x43ae,	// (0x0004e582) main_fmradio_pane_t1

0xe6aa,	// (0x0005887e) heading_pane_cp04

0x43bc,	// (0x0004e590) main_fmradio_pane_t2

0xe6b2,	// (0x00058886) popup_cale_lunar_info_window_g1

0x43ca,	// (0x0004e59e) main_fmradio_pane_t3

0xe6ba,	// (0x0005888e) popup_cale_lunar_info_window_g2

0x43da,	// (0x0004e5ae) main_fmradio_pane_t4

0x0001,

0x43e8,	// (0x0004e5bc) main_fmradio_pane_t5

0x0004,

0xf556,	// (0x0005972a) popup_cale_lunar_info_window_g

0xf48b,	// (0x0005965f) main_fmradio_pane_t

0x43f6,	// (0x0004e5ca) wait_bar_pane_cp03

0x43fe,	// (0x0004e5d2) cell_fmradio_pane_ParamLimits

0x43fe,	// (0x0004e5d2) cell_fmradio_pane

0x4253,	// (0x0004e427) cell_fmradio_pane_g1_ParamLimits

0x4253,	// (0x0004e427) cell_fmradio_pane_g1

0x3297,	// (0x0004d46b) grid_highlight_pane_cp011

0x4413,	// (0x0004e5e7) poc_content_pane_ParamLimits

0x4413,	// (0x0004e5e7) poc_content_pane

0x4425,	// (0x0004e5f9) scroll_pane_cp019

0x855a,	// (0x0005272e) popup_call_poc_act_window_ParamLimits

0x855a,	// (0x0005272e) popup_call_poc_act_window

0x8567,	// (0x0005273b) popup_call_poc_inact_window_ParamLimits

0x8567,	// (0x0005273b) popup_call_poc_inact_window

0xf52d,	// (0x00059701) bg_popup_call_poc_act_pane_g

0xe622,	// (0x000587f6) bg_popup_call_poc_inact_pane_g1

0xe62a,	// (0x000587fe) bg_popup_call_poc_inact_pane_g2

0x442d,	// (0x0004e601) popup_call_poc_act_window_g2

0xe632,	// (0x00058806) bg_popup_call_poc_inact_pane_g3

0xe63a,	// (0x0005880e) bg_popup_call_poc_inact_pane_g4

0xe642,	// (0x00058816) bg_popup_call_poc_inact_pane_g5

0x4435,	// (0x0004e609) popup_call_poc_act_window_t1_ParamLimits

0x4435,	// (0x0004e609) popup_call_poc_act_window_t1

0x445d,	// (0x0004e631) popup_call_poc_act_window_t2_ParamLimits

0x445d,	// (0x0004e631) popup_call_poc_act_window_t2

0x4485,	// (0x0004e659) popup_call_poc_act_window_t3_ParamLimits

0x4485,	// (0x0004e659) popup_call_poc_act_window_t3

0x44ad,	// (0x0004e681) popup_call_poc_act_window_t4_ParamLimits

0x44ad,	// (0x0004e681) popup_call_poc_act_window_t4

0x0003,

0xf496,	// (0x0005966a) popup_call_poc_act_window_t_ParamLimits

0xf496,	// (0x0005966a) popup_call_poc_act_window_t

0xe64a,	// (0x0005881e) bg_popup_call_poc_inact_pane_g6

0xe652,	// (0x00058826) bg_popup_call_poc_inact_pane_g7

0xe65a,	// (0x0005882e) bg_popup_call_poc_inact_pane_g8

0x44bf,	// (0x0004e693) popup_call_poc_inact_window_g2

0xe662,	// (0x00058836) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf51a,	// (0x000596ee) bg_popup_call_poc_inact_pane_g

0x44c7,	// (0x0004e69b) popup_call_poc_inact_window_t1_ParamLimits

0x44c7,	// (0x0004e69b) popup_call_poc_inact_window_t1

0x44dc,	// (0x0004e6b0) popup_call_poc_inact_window_t2_ParamLimits

0x44dc,	// (0x0004e6b0) popup_call_poc_inact_window_t2

0x44f1,	// (0x0004e6c5) popup_call_poc_inact_window_t3_ParamLimits

0x44f1,	// (0x0004e6c5) popup_call_poc_inact_window_t3

0x0002,

0xf49f,	// (0x00059673) popup_call_poc_inact_window_t_ParamLimits

0xf49f,	// (0x00059673) popup_call_poc_inact_window_t

0xe750,	// (0x00058924) context_pane_ParamLimits

0x8c30,	// (0x00052e04) signal_pane_ParamLimits

0x377d,	// (0x0004d951) main_call2_pane

0x8b9c,	// (0x00052d70) popup_phob_thumbnail2_window_ParamLimits

0x8b9c,	// (0x00052d70) popup_phob_thumbnail2_window

0x8221,	// (0x000523f5) aid_hotspot_pointer_arrow_pane

0x8229,	// (0x000523fd) aid_hotspot_pointer_hand_pane

0x88af,	// (0x00052a83) phob_pre_status_pane_g5

0x2e74,	// (0x0004d048) cams_zoom_pane_ParamLimits

0x2e74,	// (0x0004d048) image_vga_pane_ParamLimits

0x357b,	// (0x0004d74f) main_camera_pane_g1_ParamLimits

0x357b,	// (0x0004d74f) main_camera_pane_g2_ParamLimits

0x357b,	// (0x0004d74f) main_camera_pane_g3_ParamLimits

0x357b,	// (0x0004d74f) main_camera_pane_g4_ParamLimits

0x357b,	// (0x0004d74f) main_camera_pane_g5_ParamLimits

0x357b,	// (0x0004d74f) main_camera_pane_g6_ParamLimits

0x357b,	// (0x0004d74f) main_camera_pane_g7_ParamLimits

0xf1c5,	// (0x00059399) main_camera_pane_g_ParamLimits

0x379f,	// (0x0004d973) main_camera_pane_t1_ParamLimits

0x379f,	// (0x0004d973) main_camera_pane_t2_ParamLimits

0xf1d6,	// (0x000593aa) main_camera_pane_t_ParamLimits

0x34f2,	// (0x0004d6c6) bg_popup_preview_window_pane_cp01_ParamLimits

0x34f2,	// (0x0004d6c6) bg_popup_preview_window_pane_cp01

0x4506,	// (0x0004e6da) popup_phob_thumbnail2_window_g1_ParamLimits

0x4506,	// (0x0004e6da) popup_phob_thumbnail2_window_g1

0x3297,	// (0x0004d46b) call2_cli_visual_pane

0x8583,	// (0x00052757) popup_call2_audio_conf_window_ParamLimits

0x8583,	// (0x00052757) popup_call2_audio_conf_window

0x859c,	// (0x00052770) popup_call2_audio_first_window_ParamLimits

0x859c,	// (0x00052770) popup_call2_audio_first_window

0x863a,	// (0x0005280e) popup_call2_audio_in_window_ParamLimits

0x863a,	// (0x0005280e) popup_call2_audio_in_window

0x867e,	// (0x00052852) popup_call2_audio_out_window_ParamLimits

0x867e,	// (0x00052852) popup_call2_audio_out_window

0x86e8,	// (0x000528bc) popup_call2_audio_second_window_ParamLimits

0x86e8,	// (0x000528bc) popup_call2_audio_second_window

0x8746,	// (0x0005291a) popup_call2_audio_wait_window_ParamLimits

0x8746,	// (0x0005291a) popup_call2_audio_wait_window

0x3297,	// (0x0004d46b) bg_popup_call2_act_pane_cp03

0x34d4,	// (0x0004d6a8) list_conf_pane_cp

0x4512,	// (0x0004e6e6) popup_call2_audio_conf_window_t1

0x4520,	// (0x0004e6f4) list_single_graphic_popup_conf2_pane_ParamLimits

0x4520,	// (0x0004e6f4) list_single_graphic_popup_conf2_pane

0x3edd,	// (0x0004e0b1) list_highlight_pane_cp04

0x4533,	// (0x0004e707) list_single_graphic_popup_conf2_pane_g1

0x3eee,	// (0x0004e0c2) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4a6,	// (0x0005967a) list_single_graphic_popup_conf2_pane_g

0x453d,	// (0x0004e711) list_single_graphic_popup_conf2_pane_t1

0x454b,	// (0x0004e71f) bg_popup_call2_act_pane_cp01_ParamLimits

0x454b,	// (0x0004e71f) bg_popup_call2_act_pane_cp01

0x45d5,	// (0x0004e7a9) call_type_pane_cp05_ParamLimits

0x45d5,	// (0x0004e7a9) call_type_pane_cp05

0x4629,	// (0x0004e7fd) popup_call2_audio_second_window_g1_ParamLimits

0x4629,	// (0x0004e7fd) popup_call2_audio_second_window_g1

0x467d,	// (0x0004e851) popup_call2_audio_second_window_g2_ParamLimits

0x467d,	// (0x0004e851) popup_call2_audio_second_window_g2

0x0002,

0xf4ab,	// (0x0005967f) popup_call2_audio_second_window_g_ParamLimits

0xf4ab,	// (0x0005967f) popup_call2_audio_second_window_g

0x46e2,	// (0x0004e8b6) popup_call2_audio_second_window_t1_ParamLimits

0x46e2,	// (0x0004e8b6) popup_call2_audio_second_window_t1

0x479d,	// (0x0004e971) popup_call2_audio_second_window_t2_ParamLimits

0x479d,	// (0x0004e971) popup_call2_audio_second_window_t2

0x47f0,	// (0x0004e9c4) popup_call2_audio_second_window_t3_ParamLimits

0x47f0,	// (0x0004e9c4) popup_call2_audio_second_window_t3

0x0003,

0xf4b2,	// (0x00059686) popup_call2_audio_second_window_t_ParamLimits

0xf4b2,	// (0x00059686) popup_call2_audio_second_window_t

0x3297,	// (0x0004d46b) bg_popup_call2_in_pane_cp02

0x32a1,	// (0x0004d475) call_type_pane_cp04

0x8785,	// (0x00052959) popup_call2_audio_wait_window_g1

0x878d,	// (0x00052961) popup_call2_audio_wait_window_g2

0x0001,

0xf4bb,	// (0x0005968f) popup_call2_audio_wait_window_g

0x32b9,	// (0x0004d48d) popup_call2_audio_wait_window_t3

0x48e3,	// (0x0004eab7) bg_popup_call2_act_pane_ParamLimits

0x48e3,	// (0x0004eab7) bg_popup_call2_act_pane

0x49a3,	// (0x0004eb77) call_type_pane_cp03_ParamLimits

0x49a3,	// (0x0004eb77) call_type_pane_cp03

0xdd71,	// (0x00057f45) popup_call2_audio_first_window_g1_ParamLimits

0xdd71,	// (0x00057f45) popup_call2_audio_first_window_g1

0xdde1,	// (0x00057fb5) popup_call2_audio_first_window_g2_ParamLimits

0xdde1,	// (0x00057fb5) popup_call2_audio_first_window_g2

0xdd55,	// (0x00057f29) popup_call2_audio_first_window_g3_ParamLimits

0xdd55,	// (0x00057f29) popup_call2_audio_first_window_g3

0x0004,

0xf4c0,	// (0x00059694) popup_call2_audio_first_window_g_ParamLimits

0xf4c0,	// (0x00059694) popup_call2_audio_first_window_g

0xdebf,	// (0x00058093) popup_call2_audio_first_window_t1_ParamLimits

0xdebf,	// (0x00058093) popup_call2_audio_first_window_t1

0xdfc2,	// (0x00058196) popup_call2_audio_first_window_t4_ParamLimits

0xdfc2,	// (0x00058196) popup_call2_audio_first_window_t4

0xe0a5,	// (0x00058279) popup_call2_audio_first_window_t5_ParamLimits

0xe0a5,	// (0x00058279) popup_call2_audio_first_window_t5

0x0003,

0xf4cb,	// (0x0005969f) popup_call2_audio_first_window_t_ParamLimits

0xf4cb,	// (0x0005969f) popup_call2_audio_first_window_t

0x34ea,	// (0x0004d6be) bg_popup_call2_act_pane_g1

0xe6c4,	// (0x00058898) popup_cale_lunar_info_window_t1

0xe6d2,	// (0x000588a6) popup_cale_lunar_info_window_t2

0xe6e0,	// (0x000588b4) popup_cale_lunar_info_window_t3

0x3297,	// (0x0004d46b) bg_popup_call2_bubble_pane

0xe1a6,	// (0x0005837a) bg_popup_call2_in_pane_cp01_ParamLimits

0xe1a6,	// (0x0005837a) bg_popup_call2_in_pane_cp01

0x2f73,	// (0x0004d147) call_type_pane_cp02

0x8795,	// (0x00052969) popup_call2_audio_out_window_g1_ParamLimits

0x8795,	// (0x00052969) popup_call2_audio_out_window_g1

0xe1ee,	// (0x000583c2) popup_call2_audio_out_window_g2_ParamLimits

0xe1ee,	// (0x000583c2) popup_call2_audio_out_window_g2

0x87c1,	// (0x00052995) popup_call2_audio_out_window_g3_ParamLimits

0x87c1,	// (0x00052995) popup_call2_audio_out_window_g3

0x0003,

0xf4d4,	// (0x000596a8) popup_call2_audio_out_window_g_ParamLimits

0xf4d4,	// (0x000596a8) popup_call2_audio_out_window_g

0xe225,	// (0x000583f9) popup_call2_audio_out_window_t1_ParamLimits

0xe225,	// (0x000583f9) popup_call2_audio_out_window_t1

0xe284,	// (0x00058458) popup_call2_audio_out_window_t2_ParamLimits

0xe284,	// (0x00058458) popup_call2_audio_out_window_t2

0xe2d8,	// (0x000584ac) popup_call2_audio_out_window_t3_ParamLimits

0xe2d8,	// (0x000584ac) popup_call2_audio_out_window_t3

0xe2ee,	// (0x000584c2) popup_call2_audio_out_window_t4_ParamLimits

0xe2ee,	// (0x000584c2) popup_call2_audio_out_window_t4

0xe304,	// (0x000584d8) popup_call2_audio_out_window_t5_ParamLimits

0xe304,	// (0x000584d8) popup_call2_audio_out_window_t5

0x0005,

0xf4dd,	// (0x000596b1) popup_call2_audio_out_window_t_ParamLimits

0xf4dd,	// (0x000596b1) popup_call2_audio_out_window_t

0xe368,	// (0x0005853c) bg_popup_call2_in_pane_ParamLimits

0xe368,	// (0x0005853c) bg_popup_call2_in_pane

0xe3c4,	// (0x00058598) popup_call2_audio_in_window_g1_ParamLimits

0xe3c4,	// (0x00058598) popup_call2_audio_in_window_g1

0xe3fc,	// (0x000585d0) popup_call2_audio_in_window_g2_ParamLimits

0xe3fc,	// (0x000585d0) popup_call2_audio_in_window_g2

0xe434,	// (0x00058608) popup_call2_audio_in_window_g3_ParamLimits

0xe434,	// (0x00058608) popup_call2_audio_in_window_g3

0x0003,

0xf4ea,	// (0x000596be) popup_call2_audio_in_window_g_ParamLimits

0xf4ea,	// (0x000596be) popup_call2_audio_in_window_g

0xe48c,	// (0x00058660) popup_call2_audio_in_window_t1_ParamLimits

0xe48c,	// (0x00058660) popup_call2_audio_in_window_t1

0xe50c,	// (0x000586e0) popup_call2_audio_in_window_t2_ParamLimits

0xe50c,	// (0x000586e0) popup_call2_audio_in_window_t2

0xe58c,	// (0x00058760) popup_call2_audio_in_window_t3_ParamLimits

0xe58c,	// (0x00058760) popup_call2_audio_in_window_t3

0xe5a6,	// (0x0005877a) popup_call2_audio_in_window_t4_ParamLimits

0xe5a6,	// (0x0005877a) popup_call2_audio_in_window_t4

0xe5b8,	// (0x0005878c) popup_call2_audio_in_window_t5_ParamLimits

0xe5b8,	// (0x0005878c) popup_call2_audio_in_window_t5

0xe5cd,	// (0x000587a1) popup_call2_audio_in_window_t6_ParamLimits

0xe5cd,	// (0x000587a1) popup_call2_audio_in_window_t6

0x0005,

0xf4f3,	// (0x000596c7) popup_call2_audio_in_window_t_ParamLimits

0xf4f3,	// (0x000596c7) popup_call2_audio_in_window_t

0x34ea,	// (0x0004d6be) bg_popup_call2_in_pane_g1

0xe6ee,	// (0x000588c2) popup_cale_lunar_info_window_t4

0x0003,

0xf55b,	// (0x0005972f) popup_cale_lunar_info_window_t

0x34f2,	// (0x0004d6c6) bg_popup_call2_rect_pane_ParamLimits

0x34f2,	// (0x0004d6c6) bg_popup_call2_rect_pane

0x3297,	// (0x0004d46b) call2_cli_visual_graphic_pane

0x3297,	// (0x0004d46b) call2_cli_visual_text_pane

0x8c58,	// (0x00052e2c) smil_status_volume_pane_g3

0x0002,

0x350a,	// (0x0004d6de) call2_cli_visual_graphic_pane_g1

0x350a,	// (0x0004d6de) call2_cli_visual_graphic_pane_g2

0x350a,	// (0x0004d6de) call2_cli_visual_graphic_pane_g3

0x0002,

0xf500,	// (0x000596d4) call2_cli_visual_graphic_pane_g

0xe5e2,	// (0x000587b6) bg_popup_call2_rect_pane_g1

0x36b6,	// (0x0004d88a) bg_popup_call2_rect_pane_g2

0xe5ea,	// (0x000587be) bg_popup_call2_rect_pane_g3

0xe5f2,	// (0x000587c6) bg_popup_call2_rect_pane_g4

0xe5fa,	// (0x000587ce) bg_popup_call2_rect_pane_g5

0xe602,	// (0x000587d6) bg_popup_call2_rect_pane_g6

0xe60a,	// (0x000587de) bg_popup_call2_rect_pane_g7

0xe612,	// (0x000587e6) bg_popup_call2_rect_pane_g8

0xe61a,	// (0x000587ee) bg_popup_call2_rect_pane_g9

0x0008,

0xf507,	// (0x000596db) bg_popup_call2_rect_pane_g

0xe622,	// (0x000587f6) bg_popup_call2_bubble_pane_g1

0xe62a,	// (0x000587fe) bg_popup_call2_bubble_pane_g2

0xe632,	// (0x00058806) bg_popup_call2_bubble_pane_g3

0xe63a,	// (0x0005880e) bg_popup_call2_bubble_pane_g4

0xe642,	// (0x00058816) bg_popup_call2_bubble_pane_g5

0xe64a,	// (0x0005881e) bg_popup_call2_bubble_pane_g6

0xe652,	// (0x00058826) bg_popup_call2_bubble_pane_g7

0xe65a,	// (0x0005882e) bg_popup_call2_bubble_pane_g8

0xe662,	// (0x00058836) bg_popup_call2_bubble_pane_g9

0x0008,

0xf51a,	// (0x000596ee) bg_popup_call2_bubble_pane_g

0x6079,	// (0x0005024d) aid_cale_week_size_cell_pane

0x34f2,	// (0x0004d6c6) aid_cams_cif_uncrop_pane_ParamLimits

0x34f2,	// (0x0004d6c6) aid_cams_cif_uncrop_pane

0x6868,	// (0x00050a3c) aid_cams_size_cell_ParamLimits

0x6868,	// (0x00050a3c) aid_cams_size_cell

0x6874,	// (0x00050a48) grid_cams_pane_ParamLimits

0x6882,	// (0x00050a56) linegrid_cams_pane_ParamLimits

0x6953,	// (0x00050b27) call_video_pane_t1

0x6970,	// (0x00050b44) call_video_pane_t2

0x0001,

0xf222,	// (0x000593f6) call_video_pane_t

0x6e3c,	// (0x00051010) aid_cale_month_size_cell_pane_ParamLimits

0x6e3c,	// (0x00051010) aid_cale_month_size_cell_pane

0xf59f,	// (0x00059773) smil_status_volume_pane_g

0x8c65,	// (0x00052e39) volume_smil_pane_ParamLimits

0x596e,	// (0x0004fb42) aid_popup2_width_pane

0x5f77,	// (0x0005014b) cell_qdial_pane_g4_ParamLimits

0x5f77,	// (0x0005014b) cell_qdial_pane_g4

0x7d05,	// (0x00051ed9) aid_blid_cardinal_pane_ParamLimits

0x7d15,	// (0x00051ee9) aid_blid_destination_pane_ParamLimits

0x7d15,	// (0x00051ee9) aid_blid_destination_pane

0x34f2,	// (0x0004d6c6) bg_popup_call_poc_act_pane_ParamLimits

0x34f2,	// (0x0004d6c6) bg_popup_call_poc_act_pane

0x34f2,	// (0x0004d6c6) bg_popup_call_poc_inact_pane_ParamLimits

0x34f2,	// (0x0004d6c6) bg_popup_call_poc_inact_pane

0xe66a,	// (0x0005883e) bg_popup_call_poc_act_pane_g1

0xe672,	// (0x00058846) bg_popup_call_poc_act_pane_g2

0xe67a,	// (0x0005884e) bg_popup_call_poc_act_pane_g3

0xe63a,	// (0x0005880e) bg_popup_call_poc_act_pane_g4

0xe642,	// (0x00058816) bg_popup_call_poc_act_pane_g5

0xe682,	// (0x00058856) bg_popup_call_poc_act_pane_g6

0xe652,	// (0x00058826) bg_popup_call_poc_act_pane_g7

0xe68a,	// (0x0005885e) bg_popup_call_poc_act_pane_g8

0x3297,	// (0x0004d46b) main_usb_pane

0x8ab9,	// (0x00052c8d) popup_cale_lunar_info_window

0x6c88,	// (0x00050e5c) im_reading_pane_t1_ParamLimits

0x3884,	// (0x0004da58) list_im_pane_ParamLimits

0x3895,	// (0x0004da69) scroll_pane_cp07_ParamLimits

0x3297,	// (0x0004d46b) grid_highlight_pane_cp012

0x34f2,	// (0x0004d6c6) mup_scale_pane_ParamLimits

0xdd55,	// (0x00057f29) main_usb_pane_g1_ParamLimits

0xdd55,	// (0x00057f29) main_usb_pane_g1

0x8817,	// (0x000529eb) main_usb_pane_g2_ParamLimits

0x8817,	// (0x000529eb) main_usb_pane_g2

0x0001,

0xf544,	// (0x00059718) main_usb_pane_g_ParamLimits

0xf544,	// (0x00059718) main_usb_pane_g

0x8823,	// (0x000529f7) main_usb_pane_t1_ParamLimits

0x8823,	// (0x000529f7) main_usb_pane_t1

0x8835,	// (0x00052a09) main_usb_pane_t2_ParamLimits

0x8835,	// (0x00052a09) main_usb_pane_t2

0x8847,	// (0x00052a1b) main_usb_pane_t3_ParamLimits

0x8847,	// (0x00052a1b) main_usb_pane_t3

0x8859,	// (0x00052a2d) main_usb_pane_t4_ParamLimits

0x8859,	// (0x00052a2d) main_usb_pane_t4

0x886b,	// (0x00052a3f) main_usb_pane_t5_ParamLimits

0x886b,	// (0x00052a3f) main_usb_pane_t5

0x887d,	// (0x00052a51) main_usb_pane_t6_ParamLimits

0x887d,	// (0x00052a51) main_usb_pane_t6

0x0005,

0xf549,	// (0x0005971d) main_usb_pane_t_ParamLimits

0x7ca4,	// (0x00051e78) aid_text_placing

0x7caf,	// (0x00051e83) main_location2_pane_t1_ParamLimits

0x7cc5,	// (0x00051e99) main_location2_pane_t2_ParamLimits

0x7cdb,	// (0x00051eaf) main_location2_pane_t3_ParamLimits

0x7cf1,	// (0x00051ec5) main_location2_pane_t4_ParamLimits

0x7cf1,	// (0x00051ec5) main_location2_pane_t4

0xf363,	// (0x00059537) main_location2_pane_t_ParamLimits

0x352e,	// (0x0004d702) find_pinb_pane_g2_ParamLimits

0x352e,	// (0x0004d702) find_pinb_pane_g2

0x0001,

0xf0da,	// (0x000592ae) find_pinb_pane_g_ParamLimits

0xf0da,	// (0x000592ae) find_pinb_pane_g

0x353a,	// (0x0004d70e) find_pinb_pane_t1_ParamLimits

0x354c,	// (0x0004d720) find_pinb_pane_t2_ParamLimits

0xf0df,	// (0x000592b3) find_pinb_pane_t_ParamLimits

0x3297,	// (0x0004d46b) main_call3_pane

0x73ef,	// (0x000515c3) cale_month_day_heading_pane_t1_ParamLimits

0x7471,	// (0x00051645) cale_month_day_heading_pane_t2_ParamLimits

0x74ea,	// (0x000516be) cale_month_day_heading_pane_t3_ParamLimits

0x7563,	// (0x00051737) cale_month_day_heading_pane_t4_ParamLimits

0x75dc,	// (0x000517b0) cale_month_day_heading_pane_t5_ParamLimits

0x765d,	// (0x00051831) cale_month_day_heading_pane_t6_ParamLimits

0x76e6,	// (0x000518ba) cale_month_day_heading_pane_t7_ParamLimits

0xf25a,	// (0x0005942e) cale_month_day_heading_pane_t_ParamLimits

0x3adf,	// (0x0004dcb3) smil_status_volume_pane

0x836d,	// (0x00052541) postcard_address_pane_ParamLimits

0x836d,	// (0x00052541) postcard_address_pane

0x837b,	// (0x0005254f) postcard_message_pane_ParamLimits

0x837b,	// (0x0005254f) postcard_message_pane

0x87ed,	// (0x000529c1) call2_cli_visual_pane_t1_ParamLimits

0x87ed,	// (0x000529c1) call2_cli_visual_pane_t1

0xe816,	// (0x000589ea) postcard_message_pane_t1_ParamLimits

0xe816,	// (0x000589ea) postcard_message_pane_t1

0xe7fe,	// (0x000589d2) postcard_address_pane_t1_ParamLimits

0xe7fe,	// (0x000589d2) postcard_address_pane_t1

0x8d9c,	// (0x00052f70) popup_call3_audio_in_window_ParamLimits

0x8d9c,	// (0x00052f70) popup_call3_audio_in_window

0x8c7a,	// (0x00052e4e) bg_popup_call3_in_pane_ParamLimits

0x8c7a,	// (0x00052e4e) bg_popup_call3_in_pane

0x8ce2,	// (0x00052eb6) popup_call3_audio_in_window_g1_ParamLimits

0x8ce2,	// (0x00052eb6) popup_call3_audio_in_window_g1

0x8cfa,	// (0x00052ece) popup_call3_audio_in_window_g2_ParamLimits

0x8cfa,	// (0x00052ece) popup_call3_audio_in_window_g2

0x8d12,	// (0x00052ee6) popup_call3_audio_in_window_g3_ParamLimits

0x8d12,	// (0x00052ee6) popup_call3_audio_in_window_g3

0x0003,

0xf5a6,	// (0x0005977a) popup_call3_audio_in_window_g_ParamLimits

0xf5a6,	// (0x0005977a) popup_call3_audio_in_window_g

0x8d3a,	// (0x00052f0e) popup_call3_audio_in_window_t1_ParamLimits

0x8d3a,	// (0x00052f0e) popup_call3_audio_in_window_t1

0x8d62,	// (0x00052f36) popup_call3_audio_in_window_t2_ParamLimits

0x8d62,	// (0x00052f36) popup_call3_audio_in_window_t2

0x8d8a,	// (0x00052f5e) popup_call3_audio_in_window_t3_ParamLimits

0x8d8a,	// (0x00052f5e) popup_call3_audio_in_window_t3

0x0002,

0xf5af,	// (0x00059783) popup_call3_audio_in_window_t_ParamLimits

0xf5af,	// (0x00059783) popup_call3_audio_in_window_t

0x377d,	// (0x0004d951) bg_popup_call3_rect_pane

0xe5e2,	// (0x000587b6) bg_popup_call3_rect_pane_g1

0x36b6,	// (0x0004d88a) bg_popup_call3_rect_pane_g2

0xe5ea,	// (0x000587be) bg_popup_call3_rect_pane_g3

0xe5f2,	// (0x000587c6) bg_popup_call3_rect_pane_g4

0xe5fa,	// (0x000587ce) bg_popup_call3_rect_pane_g5

0xe602,	// (0x000587d6) bg_popup_call3_rect_pane_g6

0xe60a,	// (0x000587de) bg_popup_call3_rect_pane_g7

0x2e37,	// (0x0004d00b) mup_visualizer_osc_pane

0x2e37,	// (0x0004d00b) mup_visualizer_spec_pane

0x8c9a,	// (0x00052e6e) call3_video_qcif_pane_ParamLimits

0x8c9a,	// (0x00052e6e) call3_video_qcif_pane

0x8cac,	// (0x00052e80) call3_video_qcif_uncrop_pane_ParamLimits

0x8cac,	// (0x00052e80) call3_video_qcif_uncrop_pane

0x8cbc,	// (0x00052e90) call3_video_subqcif_pane_ParamLimits

0x8cbc,	// (0x00052e90) call3_video_subqcif_pane

0x8cd0,	// (0x00052ea4) call3_video_subqcif_uncrop_pane_ParamLimits

0x8cd0,	// (0x00052ea4) call3_video_subqcif_uncrop_pane

0x8d2a,	// (0x00052efe) popup_call3_audio_in_window_g4_ParamLimits

0x8d2a,	// (0x00052efe) popup_call3_audio_in_window_g4

0x2e37,	// (0x0004d00b) mup_spec_half_pane

0x2e37,	// (0x0004d00b) mup_spec_half_pane_cp

0x2e37,	// (0x0004d00b) mup_osc_middle_pane

0x37c7,	// (0x0004d99b) mup_visualizer_osc_pane_g1

0xe7b1,	// (0x00058985) mup_spec_bar_pane_ParamLimits

0xe7b1,	// (0x00058985) mup_spec_bar_pane

0x37c7,	// (0x0004d99b) mup_spec_bar_pane_g1

0x37c7,	// (0x0004d99b) mup_spec_bar_pane_g2

0x0001,

0xf3dd,	// (0x000595b1) mup_spec_bar_pane_g

0x6079,	// (0x0005024d) aid_cale_week_size_cell_pane_ParamLimits

0x6093,	// (0x00050267) bg_cale_heading_pane_ParamLimits

0x60bc,	// (0x00050290) bg_cale_pane_cp01_ParamLimits

0x60de,	// (0x000502b2) cale_week_corner_pane_ParamLimits

0x60fd,	// (0x000502d1) cale_week_day_heading_pane_ParamLimits

0x612b,	// (0x000502ff) cale_week_scroll_pane_g1_ParamLimits

0x614f,	// (0x00050323) cale_week_scroll_pane_g2_ParamLimits

0x6167,	// (0x0005033b) cale_week_scroll_pane_g3_ParamLimits

0x617f,	// (0x00050353) cale_week_scroll_pane_g4_ParamLimits

0x6197,	// (0x0005036b) cale_week_scroll_pane_g5_ParamLimits

0x61af,	// (0x00050383) cale_week_scroll_pane_g6_ParamLimits

0x61cf,	// (0x000503a3) cale_week_scroll_pane_g7_ParamLimits

0x61ef,	// (0x000503c3) cale_week_scroll_pane_g8_ParamLimits

0x620f,	// (0x000503e3) cale_week_scroll_pane_g9_ParamLimits

0x622c,	// (0x00050400) cale_week_scroll_pane_g10_ParamLimits

0x6249,	// (0x0005041d) cale_week_scroll_pane_g11_ParamLimits

0x6268,	// (0x0005043c) cale_week_scroll_pane_g12_ParamLimits

0x628d,	// (0x00050461) cale_week_scroll_pane_g13_ParamLimits

0x62b6,	// (0x0005048a) cale_week_scroll_pane_g14_ParamLimits

0x62df,	// (0x000504b3) cale_week_scroll_pane_g15_ParamLimits

0xf16b,	// (0x0005933f) cale_week_scroll_pane_g_ParamLimits

0x6328,	// (0x000504fc) cale_week_time_pane_ParamLimits

0x6348,	// (0x0005051c) grid_cale_week_pane_ParamLimits

0x36f3,	// (0x0004d8c7) listscroll_cale_week_pane_t1

0x3705,	// (0x0004d8d9) scroll_pane_cp08_ParamLimits

0x6eb4,	// (0x00051088) cale_month_corner_pane_ParamLimits

0x3ab5,	// (0x0004dc89) cale_month_pane_t1

0x7376,	// (0x0005154a) cale_month_week_pane_ParamLimits

0xdd55,	// (0x00057f29) popup_call_status_window_g1_ParamLimits

0x7ae8,	// (0x00051cbc) popup_call_status_window_g2_ParamLimits

0x7af4,	// (0x00051cc8) popup_call_status_window_g3_ParamLimits

0xf2ea,	// (0x000594be) popup_call_status_window_g_ParamLimits

0x3e72,	// (0x0004e046) aid_call2_pane

0x8191,	// (0x00052365) msg_header_pane_g1

0x836d,	// (0x00052541) postcard_address2_pane_ParamLimits

0x836d,	// (0x00052541) postcard_address2_pane

0x837b,	// (0x0005254f) postcard_message2_pane_ParamLimits

0x837b,	// (0x0005254f) postcard_message2_pane

0x8c3e,	// (0x00052e12) message2_row_pane_ParamLimits

0x8c3e,	// (0x00052e12) message2_row_pane

0xe76b,	// (0x0005893f) address2_row_pane_ParamLimits

0xe76b,	// (0x0005893f) address2_row_pane

0xe77e,	// (0x00058952) postcard_message2_row_pane_g1

0xe786,	// (0x0005895a) postcard_message2_row_pane_t1

0xe77e,	// (0x00058952) address2_row_pane_g1

0xe786,	// (0x0005895a) address2_row_pane_t1

0x66d6,	// (0x000508aa) aid_size_cell_vorec

0x3297,	// (0x0004d46b) main_rss_pane

0xe794,	// (0x00058968) rss_list_single_pane_ParamLimits

0xe794,	// (0x00058968) rss_list_single_pane

0xe7a2,	// (0x00058976) rss_list_single_pane_t1

0xe7a2,	// (0x00058976) rss_list_single_pane_t2

0x0001,

0xf59a,	// (0x0005976e) rss_list_single_pane_t

0x3297,	// (0x0004d46b) main_camera2_pane

0x3297,	// (0x0004d46b) main_video2_pane

0x5c1d,	// (0x0004fdf1) cams_zoom_pane_cp2_ParamLimits

0x5c1d,	// (0x0004fdf1) cams_zoom_pane_cp2

0x5c1d,	// (0x0004fdf1) image2_vga_pane_ParamLimits

0x5c1d,	// (0x0004fdf1) image2_vga_pane

0x3e9e,	// (0x0004e072) main_camera2_pane_g1_ParamLimits

0x3e9e,	// (0x0004e072) main_camera2_pane_g1

0x3e9e,	// (0x0004e072) main_camera2_pane_g2_ParamLimits

0x3e9e,	// (0x0004e072) main_camera2_pane_g2

0x3e9e,	// (0x0004e072) main_camera2_pane_g3_ParamLimits

0x3e9e,	// (0x0004e072) main_camera2_pane_g3

0x3e9e,	// (0x0004e072) main_camera2_pane_g4_ParamLimits

0x3e9e,	// (0x0004e072) main_camera2_pane_g4

0x3e9e,	// (0x0004e072) main_camera2_pane_g5_ParamLimits

0x3e9e,	// (0x0004e072) main_camera2_pane_g5

0x3e9e,	// (0x0004e072) main_camera2_pane_g6_ParamLimits

0x3e9e,	// (0x0004e072) main_camera2_pane_g6

0x3e9e,	// (0x0004e072) main_camera2_pane_g7_ParamLimits

0x3e9e,	// (0x0004e072) main_camera2_pane_g7

0x3e9e,	// (0x0004e072) main_camera2_pane_g8_ParamLimits

0x3e9e,	// (0x0004e072) main_camera2_pane_g8

0x0008,

0xf5b6,	// (0x0005978a) main_camera2_pane_g_ParamLimits

0xf5b6,	// (0x0005978a) main_camera2_pane_g

0x8db9,	// (0x00052f8d) main_camera2_pane_t1_ParamLimits

0x8db9,	// (0x00052f8d) main_camera2_pane_t1

0x8db9,	// (0x00052f8d) main_camera2_pane_t2_ParamLimits

0x8db9,	// (0x00052f8d) main_camera2_pane_t2

0x8db9,	// (0x00052f8d) main_camera2_pane_t3_ParamLimits

0x8db9,	// (0x00052f8d) main_camera2_pane_t3

0x8db9,	// (0x00052f8d) main_camera2_pane_t4_ParamLimits

0x8db9,	// (0x00052f8d) main_camera2_pane_t4

0x0006,

0xf5c9,	// (0x0005979d) main_camera2_pane_t_ParamLimits

0xf5c9,	// (0x0005979d) main_camera2_pane_t

0x8de1,	// (0x00052fb5) cams_zoom_pane_cp4_ParamLimits

0x8de1,	// (0x00052fb5) cams_zoom_pane_cp4

0x8a52,	// (0x00052c26) image2_cif_pane_ParamLimits

0x8a52,	// (0x00052c26) image2_cif_pane

0x5c1d,	// (0x0004fdf1) image2_subqcif_pane_ParamLimits

0x5c1d,	// (0x0004fdf1) image2_subqcif_pane

0x8def,	// (0x00052fc3) main_video2_pane_g1_ParamLimits

0x8def,	// (0x00052fc3) main_video2_pane_g1

0x8def,	// (0x00052fc3) main_video2_pane_g2_ParamLimits

0x8def,	// (0x00052fc3) main_video2_pane_g2

0x8def,	// (0x00052fc3) main_video2_pane_g3_ParamLimits

0x8def,	// (0x00052fc3) main_video2_pane_g3

0x8def,	// (0x00052fc3) main_video2_pane_g4_ParamLimits

0x8def,	// (0x00052fc3) main_video2_pane_g4

0x8def,	// (0x00052fc3) main_video2_pane_g5_ParamLimits

0x8def,	// (0x00052fc3) main_video2_pane_g5

0x8def,	// (0x00052fc3) main_video2_pane_g6_ParamLimits

0x8def,	// (0x00052fc3) main_video2_pane_g6

0x0005,

0xf5d8,	// (0x000597ac) main_video2_pane_g_ParamLimits

0xf5d8,	// (0x000597ac) main_video2_pane_g

0x8dfd,	// (0x00052fd1) main_video2_pane_t1_ParamLimits

0x8dfd,	// (0x00052fd1) main_video2_pane_t1

0x8dfd,	// (0x00052fd1) main_video2_pane_t2_ParamLimits

0x8dfd,	// (0x00052fd1) main_video2_pane_t2

0x8dfd,	// (0x00052fd1) main_video2_pane_t3_ParamLimits

0x8dfd,	// (0x00052fd1) main_video2_pane_t3

0x0002,

0xf5e5,	// (0x000597b9) main_video2_pane_t_ParamLimits

0xf5e5,	// (0x000597b9) main_video2_pane_t

0x8913,	// (0x00052ae7) call_muted_g2

0x0001,

0xf58c,	// (0x00059760) call_muted_g

0x3297,	// (0x0004d46b) main_mup2_pane

0x3589,	// (0x0004d75d) main_mup2_pane_g1_ParamLimits

0x3589,	// (0x0004d75d) main_mup2_pane_g1

0x3589,	// (0x0004d75d) main_mup2_pane_g2_ParamLimits

0x3589,	// (0x0004d75d) main_mup2_pane_g2

0xe8f0,	// (0x00058ac4) main_mup_pane_g13_cp1

0x5c37,	// (0x0004fe0b) mup_volume_pane_cp1

0x3589,	// (0x0004d75d) main_mup2_pane_g4_ParamLimits

0x3589,	// (0x0004d75d) main_mup2_pane_g4

0x3589,	// (0x0004d75d) main_mup2_pane_g5_ParamLimits

0x3589,	// (0x0004d75d) main_mup2_pane_g5

0x3589,	// (0x0004d75d) main_mup2_pane_g6_ParamLimits

0x3589,	// (0x0004d75d) main_mup2_pane_g6

0x3589,	// (0x0004d75d) main_mup2_pane_g7_ParamLimits

0x3589,	// (0x0004d75d) main_mup2_pane_g7

0x0006,

0xf5ec,	// (0x000597c0) main_mup2_pane_g_ParamLimits

0xf5ec,	// (0x000597c0) main_mup2_pane_g

0x3597,	// (0x0004d76b) main_mup2_pane_t1_ParamLimits

0x3597,	// (0x0004d76b) main_mup2_pane_t1

0x3597,	// (0x0004d76b) main_mup2_pane_t2_ParamLimits

0x3597,	// (0x0004d76b) main_mup2_pane_t2

0x3597,	// (0x0004d76b) main_mup2_pane_t3_ParamLimits

0x3597,	// (0x0004d76b) main_mup2_pane_t3

0x3597,	// (0x0004d76b) main_mup2_pane_t4_ParamLimits

0x3597,	// (0x0004d76b) main_mup2_pane_t4

0x3597,	// (0x0004d76b) main_mup2_pane_t5_ParamLimits

0x3597,	// (0x0004d76b) main_mup2_pane_t5

0x3597,	// (0x0004d76b) main_mup2_pane_t6_ParamLimits

0x3597,	// (0x0004d76b) main_mup2_pane_t6

0x0005,

0xf5fb,	// (0x000597cf) main_mup2_pane_t_ParamLimits

0xf5fb,	// (0x000597cf) main_mup2_pane_t

0xdd63,	// (0x00057f37) mup2_visualizer_pane_ParamLimits

0xdd63,	// (0x00057f37) mup2_visualizer_pane

0xdd63,	// (0x00057f37) mup_progress_pane_cp_ParamLimits

0xdd63,	// (0x00057f37) mup_progress_pane_cp

0x8ecc,	// (0x000530a0) mup_volume_pane_cp_ParamLimits

0x8ecc,	// (0x000530a0) mup_volume_pane_cp

0x356d,	// (0x0004d741) mup2_visualizer_pane_g1_ParamLimits

0x356d,	// (0x0004d741) mup2_visualizer_pane_g1

0x357b,	// (0x0004d74f) mup2_visualizer_pane_g2_ParamLimits

0x357b,	// (0x0004d74f) mup2_visualizer_pane_g2

0x357b,	// (0x0004d74f) mup2_visualizer_pane_g3_ParamLimits

0x357b,	// (0x0004d74f) mup2_visualizer_pane_g3

0x0002,

0xf0e4,	// (0x000592b8) mup2_visualizer_pane_g_ParamLimits

0xf0e4,	// (0x000592b8) mup2_visualizer_pane_g

0x439c,	// (0x0004e570) aid_size_cell_fmradio

0x8a29,	// (0x00052bfd) aid_height_parent_landcape

0x3913,	// (0x0004dae7) wml_content_pane_cp

0x391b,	// (0x0004daef) wml_tabs_pane

0x3924,	// (0x0004daf8) popup_wml_miniature_window

0x392c,	// (0x0004db00) scroll_pane_cp021

0x3940,	// (0x0004db14) wml_content_pane_comp8

0x3297,	// (0x0004d46b) bg_popup_sub_pane_cp05

0xe848,	// (0x00058a1c) popup_wml_miniature_window_g1

0xe850,	// (0x00058a24) wml_miniature_view_pane

0x8e11,	// (0x00052fe5) aid_size_wml_view

0x8e19,	// (0x00052fed) wml_miniature_view_pane_g1

0x8e22,	// (0x00052ff6) wml_miniature_view_pane_g2

0x8e2b,	// (0x00052fff) wml_miniature_view_pane_g3

0x8e33,	// (0x00053007) wml_miniature_view_pane_g4

0x8e3b,	// (0x0005300f) wml_miniature_view_pane_g5

0x8e43,	// (0x00053017) wml_miniature_view_pane_g6

0x8e4b,	// (0x0005301f) wml_miniature_view_pane_g7

0x8e53,	// (0x00053027) wml_miniature_view_pane_g8

0x0007,

0xf608,	// (0x000597dc) wml_miniature_view_pane_g

0xe858,	// (0x00058a2c) background_graphic_ParamLimits

0xe858,	// (0x00058a2c) background_graphic

0xe864,	// (0x00058a38) wml_tabs_2_pane

0xe86d,	// (0x00058a41) wml_tabs_3_pane_ParamLimits

0xe86d,	// (0x00058a41) wml_tabs_3_pane

0xe87f,	// (0x00058a53) wml_tabs_4_pane_ParamLimits

0xe87f,	// (0x00058a53) wml_tabs_4_pane

0xe895,	// (0x00058a69) wml_tabs_5_pane_ParamLimits

0xe895,	// (0x00058a69) wml_tabs_5_pane

0xe8af,	// (0x00058a83) wml_tabs_pane_g2_ParamLimits

0xe8af,	// (0x00058a83) wml_tabs_pane_g2

0xe8c4,	// (0x00058a98) wml_tabs_pane_g3_ParamLimits

0xe8c4,	// (0x00058a98) wml_tabs_pane_g3

0xe8d9,	// (0x00058aad) wml_tabs_2_active_pane_ParamLimits

0xe8d9,	// (0x00058aad) wml_tabs_2_active_pane

0xe8d9,	// (0x00058aad) wml_tabs_2_passive_pane_ParamLimits

0xe8d9,	// (0x00058aad) wml_tabs_2_passive_pane

0x8e5b,	// (0x0005302f) wml_tabs_3_active_pane_cp_ParamLimits

0x8e5b,	// (0x0005302f) wml_tabs_3_active_pane_cp

0x8e6e,	// (0x00053042) wml_tabs_3_passive_pane_ParamLimits

0x8e6e,	// (0x00053042) wml_tabs_3_passive_pane

0x8e7f,	// (0x00053053) wml_tabs_3_passive_pane_cp_ParamLimits

0x8e7f,	// (0x00053053) wml_tabs_3_passive_pane_cp

0x8e94,	// (0x00053068) tabs_4_active_pane

0x8e9c,	// (0x00053070) tabs_4_passive_pane

0x8ea4,	// (0x00053078) tabs_4_passive_pane_cp

0x8eac,	// (0x00053080) tabs_4_passive_pane_cp2

0x880f,	// (0x000529e3) aid_height_text

0xdd63,	// (0x00057f37) mup_volume_cont_pane_ParamLimits

0xdd63,	// (0x00057f37) mup_volume_cont_pane

0x2e37,	// (0x0004d00b) aid_size_cell_pinb

0x2e37,	// (0x0004d00b) aid_size_list_pinb

0xdd63,	// (0x00057f37) mup2_volume_cont_pane_ParamLimits

0xdd63,	// (0x00057f37) mup2_volume_cont_pane

0x8eb6,	// (0x0005308a) mup2_volume_cont_pane_g1_ParamLimits

0x8eb6,	// (0x0005308a) mup2_volume_cont_pane_g1

0x597a,	// (0x0004fb4e) aid_size_cell_touch_ParamLimits

0x597a,	// (0x0004fb4e) aid_size_cell_touch

0x5c41,	// (0x0004fe15) touch_pane_ParamLimits

0x5c41,	// (0x0004fe15) touch_pane

0x5c37,	// (0x0004fe0b) main_rss2_pane

0xe8fa,	// (0x00058ace) listscroll_rss2_pane

0xe903,	// (0x00058ad7) rss2_navigation_pane

0xe90b,	// (0x00058adf) list_rss2_pane

0x3f97,	// (0x0004e16b) scroll_pane_cp22

0xe913,	// (0x00058ae7) rss2_navigation_pane_g1

0xe91c,	// (0x00058af0) rss2_navigation_pane_g2

0xe924,	// (0x00058af8) rss2_navigation_pane_g3

0x0002,

0xf619,	// (0x000597ed) rss2_navigation_pane_g

0xe92c,	// (0x00058b00) rss2_navigation_pane_t1

0x8ee2,	// (0x000530b6) rss2_list_single_pane_ParamLimits

0x8ee2,	// (0x000530b6) rss2_list_single_pane

0xe93a,	// (0x00058b0e) rss2_list_single_pane_t2

0xe948,	// (0x00058b1c) rss2_list_single_pane_t3_ParamLimits

0xe948,	// (0x00058b1c) rss2_list_single_pane_t3

0xe965,	// (0x00058b39) rss2_list_single_pane_t4

0x7984,	// (0x00051b58) smil_status_pane_g1

0x8a52,	// (0x00052c26) main_image2_pane_ParamLimits

0x8a52,	// (0x00052c26) main_image2_pane

0x3e9e,	// (0x0004e072) main_camera2_pane_g9_ParamLimits

0x3e9e,	// (0x0004e072) main_camera2_pane_g9

0x8db9,	// (0x00052f8d) main_camera2_pane_t5_ParamLimits

0x8db9,	// (0x00052f8d) main_camera2_pane_t5

0x8dcd,	// (0x00052fa1) main_camera2_pane_t6_ParamLimits

0x8dcd,	// (0x00052fa1) main_camera2_pane_t6

0x8f05,	// (0x000530d9) main_image2_pane_g1_ParamLimits

0x8f05,	// (0x000530d9) main_image2_pane_g1

0x8544,	// (0x00052718) smil2_video_pane_ParamLimits

0x8544,	// (0x00052718) smil2_video_pane

0x587e,	// (0x0004fa52) aid_zoom_text_primary_cp

0x5bd2,	// (0x0004fda6) popup_preview_fixed_window

0x387c,	// (0x0004da50) im_reading_pane_g1

0x8dab,	// (0x00052f7f) cams2_bc_adjust_pane_cp_ParamLimits

0x8dab,	// (0x00052f7f) cams2_bc_adjust_pane_cp

0x5c1d,	// (0x0004fdf1) cams2_bc_adjust_pane_ParamLimits

0x5c1d,	// (0x0004fdf1) cams2_bc_adjust_pane

0xe8f0,	// (0x00058ac4) cams2_bc_adjust_pane_g1

0x5c37,	// (0x0004fe0b) cams2_slider_pane

0xe8f0,	// (0x00058ac4) cams2_slider_pane_g1

0xe8f0,	// (0x00058ac4) cams2_slider_pane_g2

0x0006,

0xf620,	// (0x000597f4) cams2_slider_pane_g

0x5cd6,	// (0x0004feaa) calc_display_pane_ParamLimits

0x5cf4,	// (0x0004fec8) calc_paper_pane_ParamLimits

0x5d10,	// (0x0004fee4) grid_calc_pane_ParamLimits

0x7b52,	// (0x00051d26) popup_clock_digital_window_t1_ParamLimits

0x4339,	// (0x0004e50d) main_image_pane_t1

0x5cbc,	// (0x0004fe90) aid_size_cell_calc_ParamLimits

0x5cbc,	// (0x0004fe90) aid_size_cell_calc

0x8a8f,	// (0x00052c63) popup_blid_sat_info2_window_ParamLimits

0x8a8f,	// (0x00052c63) popup_blid_sat_info2_window

0xe973,	// (0x00058b47) aid_size_cell_blid

0xdd63,	// (0x00057f37) bg_popup_window_pane_cp07

0xe990,	// (0x00058b64) grid_popup_blid_pane

0xe99a,	// (0x00058b6e) heading_pane_cp05_ParamLimits

0xe99a,	// (0x00058b6e) heading_pane_cp05

0xea64,	// (0x00058c38) cell_popup_blid_pane_ParamLimits

0xea64,	// (0x00058c38) cell_popup_blid_pane

0xea8e,	// (0x00058c62) cell_popup_blid_pane_g1

0xea96,	// (0x00058c6a) cell_popup_blid_pane_t1

0xdd63,	// (0x00057f37) mup2_indicator_pane_ParamLimits

0xdd63,	// (0x00057f37) mup2_indicator_pane

0x2e37,	// (0x0004d00b) mup2_visualizer_osc_pane

0xe832,	// (0x00058a06) mup2_visualizer_spec_pane_ParamLimits

0xe832,	// (0x00058a06) mup2_visualizer_spec_pane

0x2e37,	// (0x0004d00b) mup2_spec_half_pane

0x2e37,	// (0x0004d00b) mup2_spec_half_pane_cp

0xeaa4,	// (0x00058c78) mup2_spec_bar_pane_ParamLimits

0xeaa4,	// (0x00058c78) mup2_spec_bar_pane

0x37c7,	// (0x0004d99b) mup2_spec_bar_pane_g1

0xeac3,	// (0x00058c97) mup2_spec_bar_pane_g2

0x0001,

0xf646,	// (0x0005981a) mup2_spec_bar_pane_g

0x2e37,	// (0x0004d00b) mup2_osc_middle_pane

0x37c7,	// (0x0004d99b) mup2_visualizer_osc_pane_g1

0x2e61,	// (0x0004d035) popup_number_entry_window_t1_ParamLimits

0x2e82,	// (0x0004d056) popup_number_entry_window_t2_ParamLimits

0x2e94,	// (0x0004d068) popup_number_entry_window_t3_ParamLimits

0x2ea6,	// (0x0004d07a) popup_number_entry_window_t5_ParamLimits

0x2ea6,	// (0x0004d07a) popup_number_entry_window_t5

0xf085,	// (0x00059259) popup_number_entry_window_t_ParamLimits

0x2edb,	// (0x0004d0af) text_title_cp2_ParamLimits

0x8231,	// (0x00052405) aid_hotspot_pointer_text2_pane

0x82cb,	// (0x0005249f) main_viewer_pane_g9_ParamLimits

0x82cb,	// (0x0005249f) main_viewer_pane_g9

0x3ab5,	// (0x0004dc89) cale_month_pane_t1_ParamLimits

0x3af2,	// (0x0004dcc6) bg_cale_pane_ParamLimits

0x3b0a,	// (0x0004dcde) list_cale_pane_ParamLimits

0x3b1b,	// (0x0004dcef) listscroll_cale_day_pane_t1

0x3b2d,	// (0x0004dd01) scroll_pane_cp09_ParamLimits

0x7eed,	// (0x000520c1) main_mup_eq_pane_t1_ParamLimits

0x7eed,	// (0x000520c1) main_mup_eq_pane_t1

0x7f09,	// (0x000520dd) main_mup_eq_pane_t2_ParamLimits

0x7f09,	// (0x000520dd) main_mup_eq_pane_t2

0x7f25,	// (0x000520f9) main_mup_eq_pane_t3_ParamLimits

0x7f25,	// (0x000520f9) main_mup_eq_pane_t3

0x7f3f,	// (0x00052113) main_mup_eq_pane_t4_ParamLimits

0x7f3f,	// (0x00052113) main_mup_eq_pane_t4

0x7f59,	// (0x0005212d) main_mup_eq_pane_t5_ParamLimits

0x7f59,	// (0x0005212d) main_mup_eq_pane_t5

0x7f73,	// (0x00052147) main_mup_eq_pane_t6_ParamLimits

0x7f73,	// (0x00052147) main_mup_eq_pane_t6

0x7f89,	// (0x0005215d) main_mup_eq_pane_t7_ParamLimits

0x7f89,	// (0x0005215d) main_mup_eq_pane_t7

0x7f9f,	// (0x00052173) main_mup_eq_pane_t8_ParamLimits

0x7f9f,	// (0x00052173) main_mup_eq_pane_t8

0x7fb5,	// (0x00052189) main_mup_eq_pane_t9_ParamLimits

0x7fb5,	// (0x00052189) main_mup_eq_pane_t9

0x7fd1,	// (0x000521a5) main_mup_eq_pane_t10_ParamLimits

0x7fd1,	// (0x000521a5) main_mup_eq_pane_t10

0x0009,

0xf3e9,	// (0x000595bd) main_mup_eq_pane_t_ParamLimits

0xf3e9,	// (0x000595bd) main_mup_eq_pane_t

0x8096,	// (0x0005226a) mup_equalizer_pane_cp5_ParamLimits

0x80ae,	// (0x00052282) mup_equalizer_pane_cp6_ParamLimits

0x80c6,	// (0x0005229a) mup_equalizer_pane_cp7_ParamLimits

0x5c37,	// (0x0004fe0b) main_gallery_pane

0xe7d0,	// (0x000589a4) smil2_volume_pane

0xe7d8,	// (0x000589ac) smil_status_volume_pane_g1_ParamLimits

0xe7eb,	// (0x000589bf) smil_status_volume_pane_g2_ParamLimits

0x8c58,	// (0x00052e2c) smil_status_volume_pane_g3_ParamLimits

0xf59f,	// (0x00059773) smil_status_volume_pane_g_ParamLimits

0xdd63,	// (0x00057f37) bg_popup_window_pane_cp07_ParamLimits

0xe97b,	// (0x00058b4f) blid_firmament_pane

0x2e74,	// (0x0004d048) aid_size_cell_gallery_ParamLimits

0x2e74,	// (0x0004d048) aid_size_cell_gallery

0x2e74,	// (0x0004d048) grid_gallery_pane_ParamLimits

0x2e74,	// (0x0004d048) grid_gallery_pane

0x4a3e,	// (0x0004ec12) cell_gallery_pane_ParamLimits

0x4a3e,	// (0x0004ec12) cell_gallery_pane

0x3514,	// (0x0004d6e8) bg_cell_gallery_focus_pane_ParamLimits

0x3514,	// (0x0004d6e8) bg_cell_gallery_focus_pane

0x356d,	// (0x0004d741) cell_gallery_pane_g1_ParamLimits

0x356d,	// (0x0004d741) cell_gallery_pane_g1

0x356d,	// (0x0004d741) cell_gallery_pane_g2_ParamLimits

0x356d,	// (0x0004d741) cell_gallery_pane_g2

0x356d,	// (0x0004d741) cell_gallery_pane_g3_ParamLimits

0x356d,	// (0x0004d741) cell_gallery_pane_g3

0x357b,	// (0x0004d74f) cell_gallery_pane_g4_ParamLimits

0x357b,	// (0x0004d74f) cell_gallery_pane_g4

0x0003,

0xf64b,	// (0x0005981f) cell_gallery_pane_g_ParamLimits

0xf64b,	// (0x0005981f) cell_gallery_pane_g

0xeacd,	// (0x00058ca1) bg_cell_gallery_focus_pane_g1

0xead5,	// (0x00058ca9) bg_cell_gallery_focus_pane_g2

0xeadd,	// (0x00058cb1) bg_cell_gallery_focus_pane_g3

0xeae5,	// (0x00058cb9) bg_cell_gallery_focus_pane_g4

0xeaed,	// (0x00058cc1) bg_cell_gallery_focus_pane_g5

0xeaf5,	// (0x00058cc9) bg_cell_gallery_focus_pane_g6

0xeafd,	// (0x00058cd1) bg_cell_gallery_focus_pane_g7

0xeb05,	// (0x00058cd9) bg_cell_gallery_focus_pane_g8

0x0007,

0xf654,	// (0x00059828) bg_cell_gallery_focus_pane_g

0xeb0d,	// (0x00058ce1) aid_firma_cardinal

0xeb21,	// (0x00058cf5) blid_firmament_pane_t1

0xeb38,	// (0x00058d0c) blid_firmament_pane_t2

0xeb4f,	// (0x00058d23) blid_firmament_pane_t3

0xeb66,	// (0x00058d3a) blid_firmament_pane_t4

0x0003,

0xf665,	// (0x00059839) blid_firmament_pane_t

0xeb7d,	// (0x00058d51) blid_sat_info_pane

0x37c7,	// (0x0004d99b) blid_sat_info_pane_g1

0x37c7,	// (0x0004d99b) blid_sat_info_pane_g2

0x0001,

0xf3dd,	// (0x000595b1) blid_sat_info_pane_g

0xeb8d,	// (0x00058d61) blid_sat_info_pane_t1

0xeb9b,	// (0x00058d6f) smil2_volume_content_pane

0xeba4,	// (0x00058d78) smil2_volume_pane_g1

0x4a07,	// (0x0004ebdb) smil2_volume_content_pane_g1

0xebac,	// (0x00058d80) smil2_volume_content_pane_g2

0xebb5,	// (0x00058d89) smil2_volume_content_pane_g3

0xebbe,	// (0x00058d92) smil2_volume_content_pane_g4

0xebc7,	// (0x00058d9b) smil2_volume_content_pane_g5

0xebd0,	// (0x00058da4) smil2_volume_content_pane_g6

0xebd9,	// (0x00058dad) smil2_volume_content_pane_g7

0xebe2,	// (0x00058db6) smil2_volume_content_pane_g8

0xebeb,	// (0x00058dbf) smil2_volume_content_pane_g9

0xebf4,	// (0x00058dc8) smil2_volume_content_pane_g10

0x0009,

0xf66e,	// (0x00059842) smil2_volume_content_pane_g

0x6409,	// (0x000505dd) cale_week_day_heading_pane_t1_ParamLimits

0x6431,	// (0x00050605) cale_week_day_heading_pane_t2_ParamLimits

0x645e,	// (0x00050632) cale_week_day_heading_pane_t3_ParamLimits

0x648b,	// (0x0005065f) cale_week_day_heading_pane_t4_ParamLimits

0x64b8,	// (0x0005068c) cale_week_day_heading_pane_t5_ParamLimits

0x64e5,	// (0x000506b9) cale_week_day_heading_pane_t6_ParamLimits

0x6512,	// (0x000506e6) cale_week_day_heading_pane_t7_ParamLimits

0xf18c,	// (0x00059360) cale_week_day_heading_pane_t_ParamLimits

0x3722,	// (0x0004d8f6) bg_cale_side_pane_ParamLimits

0x653a,	// (0x0005070e) cale_week_time_pane_t1_ParamLimits

0x655e,	// (0x00050732) cale_week_time_pane_t2_ParamLimits

0x6582,	// (0x00050756) cale_week_time_pane_t3_ParamLimits

0x65a6,	// (0x0005077a) cale_week_time_pane_t4_ParamLimits

0x65ca,	// (0x0005079e) cale_week_time_pane_t5_ParamLimits

0x65f0,	// (0x000507c4) cale_week_time_pane_t6_ParamLimits

0x6618,	// (0x000507ec) cale_week_time_pane_t7_ParamLimits

0x6644,	// (0x00050818) cale_week_time_pane_t8_ParamLimits

0xf19b,	// (0x0005936f) cale_week_time_pane_t_ParamLimits

0x6674,	// (0x00050848) cell_cale_week_pane_g2_ParamLimits

0x3722,	// (0x0004d8f6) bg_cale_side_pane_cp01_ParamLimits

0x776f,	// (0x00051943) cale_month_week_pane_t1_ParamLimits

0x7788,	// (0x0005195c) cale_month_week_pane_t2_ParamLimits

0x77a1,	// (0x00051975) cale_month_week_pane_t3_ParamLimits

0x77ba,	// (0x0005198e) cale_month_week_pane_t4_ParamLimits

0x77d3,	// (0x000519a7) cale_month_week_pane_t5_ParamLimits

0x77f0,	// (0x000519c4) cale_month_week_pane_t6_ParamLimits

0xf269,	// (0x0005943d) cale_month_week_pane_t_ParamLimits

0x7941,	// (0x00051b15) cell_cale_month_pane_g1_ParamLimits

0x5c37,	// (0x0004fe0b) main_cale_event_viewer_pane

0x2e37,	// (0x0004d00b) listscroll_cale_event_viewer_pane

0xebfd,	// (0x00058dd1) list_cale_ev_pane

0xec05,	// (0x00058dd9) scroll_pane_cp023

0x8f11,	// (0x000530e5) field_cale_ev_pane_ParamLimits

0x8f11,	// (0x000530e5) field_cale_ev_pane

0xec11,	// (0x00058de5) field_cale_ev_content_pane_ParamLimits

0xec11,	// (0x00058de5) field_cale_ev_content_pane

0xec1d,	// (0x00058df1) field_cale_ev_pane_g1_ParamLimits

0xec1d,	// (0x00058df1) field_cale_ev_pane_g1

0xec29,	// (0x00058dfd) field_cale_ev_pane_g2_ParamLimits

0xec29,	// (0x00058dfd) field_cale_ev_pane_g2

0xec41,	// (0x00058e15) field_cale_ev_pane_g3_ParamLimits

0xec41,	// (0x00058e15) field_cale_ev_pane_g3

0x0002,

0xf683,	// (0x00059857) field_cale_ev_pane_g_ParamLimits

0xf683,	// (0x00059857) field_cale_ev_pane_g

0xec59,	// (0x00058e2d) field_cale_ev_pane_t1_ParamLimits

0xec59,	// (0x00058e2d) field_cale_ev_pane_t1

0x8f35,	// (0x00053109) field_cale_ev_content_pane_t1_ParamLimits

0x8f35,	// (0x00053109) field_cale_ev_content_pane_t1

0x421f,	// (0x0004e3f3) bg_button_pane_cp01

0x6067,	// (0x0005023b) listscroll_cale_week_pane_ParamLimits

0x36ea,	// (0x0004d8be) popup_toolbar_window_cp01

0x36f3,	// (0x0004d8c7) listscroll_cale_week_pane_t1_ParamLimits

0x6067,	// (0x0005023b) listscroll_cale_day_pane_ParamLimits

0x36ea,	// (0x0004d8be) popup_toolbar_window_cp02

0x3b1b,	// (0x0004dcef) listscroll_cale_day_pane_t1_ParamLimits

0x8a40,	// (0x00052c14) main_cale_month_pane_ParamLimits

0x8bae,	// (0x00052d82) popup_toolbar_window_cp03_ParamLimits

0x8bae,	// (0x00052d82) popup_toolbar_window_cp03

0x8454,	// (0x00052628) main_image_pane_g2_ParamLimits

0x8454,	// (0x00052628) main_image_pane_g2

0x8460,	// (0x00052634) main_image_pane_g3_ParamLimits

0x8460,	// (0x00052634) main_image_pane_g3

0x0002,

0xf47b,	// (0x0005964f) main_image_pane_g_ParamLimits

0xf47b,	// (0x0005964f) main_image_pane_g

0x4339,	// (0x0004e50d) main_image_pane_t1_ParamLimits

0x846c,	// (0x00052640) main_image_pane_t2_ParamLimits

0x846c,	// (0x00052640) main_image_pane_t2

0x847e,	// (0x00052652) main_image_pane_t3_ParamLimits

0x847e,	// (0x00052652) main_image_pane_t3

0x8490,	// (0x00052664) main_image_pane_t4_ParamLimits

0x8490,	// (0x00052664) main_image_pane_t4

0x0003,

0xf482,	// (0x00059656) main_image_pane_t_ParamLimits

0xf482,	// (0x00059656) main_image_pane_t

0x84a2,	// (0x00052676) popup_image_details_window_cp01

0x84ac,	// (0x00052680) popup_toobar_trans_pane_cp01_ParamLimits

0x84ac,	// (0x00052680) popup_toobar_trans_pane_cp01

0x8af0,	// (0x00052cc4) popup_image_details_window_ParamLimits

0x8af0,	// (0x00052cc4) popup_image_details_window

0x8afe,	// (0x00052cd2) popup_image_focus_window

0x5c1d,	// (0x0004fdf1) camera2_autofocus_pane_ParamLimits

0x5c1d,	// (0x0004fdf1) camera2_autofocus_pane

0x2e37,	// (0x0004d00b) bg_popup_sub_pane_cp06

0xec70,	// (0x00058e44) popup_image_focus_window_g1

0xec78,	// (0x00058e4c) popup_image_focus_window_g2

0xec80,	// (0x00058e54) popup_image_focus_window_g3

0xec88,	// (0x00058e5c) popup_image_focus_window_g4

0x0003,

0xf68a,	// (0x0005985e) popup_image_focus_window_g

0xec90,	// (0x00058e64) popup_image_focus_window_t1

0xec9e,	// (0x00058e72) popup_image_focus_window_t2

0xecae,	// (0x00058e82) popup_image_focus_window_t3

0x0002,

0xf693,	// (0x00059867) popup_image_focus_window_t

0x356d,	// (0x0004d741) camera2_autofocus_pane_g1

0x3514,	// (0x0004d6e8) bg_tb_trans_pane_cp01

0xecbc,	// (0x00058e90) popup_image_details_window_g1

0xeccf,	// (0x00058ea3) popup_image_details_window_g2

0x0002,

0xf6a5,	// (0x00059879) popup_image_details_window_g

0xecf8,	// (0x00058ecc) popup_image_details_window_t1

0xed0a,	// (0x00058ede) popup_image_details_window_t2

0xed23,	// (0x00058ef7) popup_image_details_window_t3

0xed37,	// (0x00058f0b) popup_image_details_window_t4

0xed52,	// (0x00058f26) popup_image_details_window_t5

0x0004,

0xf6ac,	// (0x00059880) popup_image_details_window_t

0x35cb,	// (0x0004d79f) bg_calc_paper_pane_ParamLimits

0x5c37,	// (0x0004fe0b) grid_highlight_pane_cp013

0x5e0d,	// (0x0004ffe1) list_calc_pane_ParamLimits

0x5e1f,	// (0x0004fff3) scroll_pane_cp024

0x35df,	// (0x0004d7b3) bg_calc_display_pane_ParamLimits

0x5e27,	// (0x0004fffb) calc_display_pane_t1_ParamLimits

0x5e3c,	// (0x00050010) calc_display_pane_t2_ParamLimits

0x5e51,	// (0x00050025) calc_display_pane_t3_ParamLimits

0xf10c,	// (0x000592e0) calc_display_pane_t_ParamLimits

0x5f21,	// (0x000500f5) cell_calc_pane_g2

0x0001,

0xf129,	// (0x000592fd) cell_calc_pane_g

0x5f2a,	// (0x000500fe) cell_calc_pane_t1

0x3634,	// (0x0004d808) grid_highlight_pane_cp02_ParamLimits

0x364a,	// (0x0004d81e) toolbar_button_pane_cp01_ParamLimits

0x364a,	// (0x0004d81e) toolbar_button_pane_cp01

0x437e,	// (0x0004e552) temp_image_control_pane_ParamLimits

0x437e,	// (0x0004e552) temp_image_control_pane

0x8a52,	// (0x00052c26) main_mp3_pane

0xed6c,	// (0x00058f40) temp_image_control_pane_g1_ParamLimits

0xed6c,	// (0x00058f40) temp_image_control_pane_g1

0xed7a,	// (0x00058f4e) temp_image_control_pane_g2_ParamLimits

0xed7a,	// (0x00058f4e) temp_image_control_pane_g2

0xed8c,	// (0x00058f60) temp_image_control_pane_g3_ParamLimits

0xed8c,	// (0x00058f60) temp_image_control_pane_g3

0x8f50,	// (0x00053124) temp_image_control_pane_g4_ParamLimits

0x8f50,	// (0x00053124) temp_image_control_pane_g4

0x0003,

0xf6b7,	// (0x0005988b) temp_image_control_pane_g_ParamLimits

0xf6b7,	// (0x0005988b) temp_image_control_pane_g

0xed6c,	// (0x00058f40) main_mp3_pane_g1

0x8f61,	// (0x00053135) main_mp3_pane_g2

0x0007,

0xf6c0,	// (0x00059894) main_mp3_pane_g

0xedc1,	// (0x00058f95) main_mp3_pane_t1

0x357b,	// (0x0004d74f) main_camera_pane_g8_ParamLimits

0x357b,	// (0x0004d74f) main_camera_pane_g8

0x6820,	// (0x000509f4) main_video_pane_g7_ParamLimits

0x6820,	// (0x000509f4) main_video_pane_g7

0x8db9,	// (0x00052f8d) main_camera2_pane_t7_ParamLimits

0x8db9,	// (0x00052f8d) main_camera2_pane_t7

0x38d3,	// (0x0004daa7) scroll_pane_cp025_ParamLimits

0x38d3,	// (0x0004daa7) scroll_pane_cp025

0x38e7,	// (0x0004dabb) scroll_pane_cp026_ParamLimits

0x38e7,	// (0x0004dabb) scroll_pane_cp026

0x38f6,	// (0x0004daca) wml_content_pane_ParamLimits

0x5c37,	// (0x0004fe0b) main_touch_calib_pane

0x9005,	// (0x000531d9) main_touch_calib_pane_g1

0x9011,	// (0x000531e5) main_touch_calib_pane_g2

0x901d,	// (0x000531f1) main_touch_calib_pane_g3

0x9029,	// (0x000531fd) main_touch_calib_pane_g4

0x0003,

0xf6de,	// (0x000598b2) main_touch_calib_pane_g

0x9035,	// (0x00053209) main_touch_calib_pane_t1

0x904c,	// (0x00053220) main_touch_calib_pane_t2

0x0004,

0xf6e7,	// (0x000598bb) main_touch_calib_pane_t

0x4012,	// (0x0004e1e6) mup_progress_pane_cp02

0x4031,	// (0x0004e205) navi_pane_g1

0x4093,	// (0x0004e267) navi_pane_mp_t3

0x8a52,	// (0x00052c26) main_mp3_pane_ParamLimits

0x8bef,	// (0x00052dc3) navi_pane_ParamLimits

0xed6c,	// (0x00058f40) main_mp3_pane_g1_ParamLimits

0x8f61,	// (0x00053135) main_mp3_pane_g2_ParamLimits

0x8f6d,	// (0x00053141) main_mp3_pane_g3_ParamLimits

0x8f6d,	// (0x00053141) main_mp3_pane_g3

0x8f79,	// (0x0005314d) main_mp3_pane_g4_ParamLimits

0x8f79,	// (0x0005314d) main_mp3_pane_g4

0x356d,	// (0x0004d741) main_mp3_pane_g5_ParamLimits

0x356d,	// (0x0004d741) main_mp3_pane_g5

0xed9c,	// (0x00058f70) main_mp3_pane_g6_ParamLimits

0xed9c,	// (0x00058f70) main_mp3_pane_g6

0xeda9,	// (0x00058f7d) main_mp3_pane_g7_ParamLimits

0xeda9,	// (0x00058f7d) main_mp3_pane_g7

0xedb5,	// (0x00058f89) main_mp3_pane_g8_ParamLimits

0xedb5,	// (0x00058f89) main_mp3_pane_g8

0xf6c0,	// (0x00059894) main_mp3_pane_g_ParamLimits

0x8f85,	// (0x00053159) main_mp3_pane_t2

0x8f95,	// (0x00053169) main_mp3_pane_t3

0xedcf,	// (0x00058fa3) main_mp3_pane_t4

0xeddd,	// (0x00058fb1) main_mp3_pane_t5

0x0005,

0xf6d1,	// (0x000598a5) main_mp3_pane_t

0xedeb,	// (0x00058fbf) mup_progress_pane_cp01

0x587e,	// (0x0004fa52) aid_zoom_text_secondary2

0xebfd,	// (0x00058dd1) list_cale_ev2_pane

0xec05,	// (0x00058dd9) scroll_pane_cp023_ParamLimits

0x90a7,	// (0x0005327b) field_cale_ev2_pane_ParamLimits

0x90a7,	// (0x0005327b) field_cale_ev2_pane

0x90c2,	// (0x00053296) field_cale_ev2_pane_g1_ParamLimits

0x90c2,	// (0x00053296) field_cale_ev2_pane_g1

0x90ce,	// (0x000532a2) field_cale_ev2_pane_g2_ParamLimits

0x90ce,	// (0x000532a2) field_cale_ev2_pane_g2

0x90e6,	// (0x000532ba) field_cale_ev2_pane_g3_ParamLimits

0x90e6,	// (0x000532ba) field_cale_ev2_pane_g3

0x0003,

0xf6f2,	// (0x000598c6) field_cale_ev2_pane_g_ParamLimits

0xf6f2,	// (0x000598c6) field_cale_ev2_pane_g

0x90fe,	// (0x000532d2) field_cale_ev2_pane_t1_ParamLimits

0x90fe,	// (0x000532d2) field_cale_ev2_pane_t1

0x9115,	// (0x000532e9) field_cale_ev2_pane_t2_ParamLimits

0x9115,	// (0x000532e9) field_cale_ev2_pane_t2

0x0001,

0xf6fb,	// (0x000598cf) field_cale_ev2_pane_t_ParamLimits

0xf6fb,	// (0x000598cf) field_cale_ev2_pane_t

0x8333,	// (0x00052507) main_postcard_pane_g5_ParamLimits

0x8333,	// (0x00052507) main_postcard_pane_g5

0x8341,	// (0x00052515) main_postcard_pane_g6_ParamLimits

0x8341,	// (0x00052515) main_postcard_pane_g6

0x2e74,	// (0x0004d048) camera2_autofocus_pane_cp_ParamLimits

0x2e74,	// (0x0004d048) camera2_autofocus_pane_cp

0x8a52,	// (0x00052c26) main_mup3_pane

0x916d,	// (0x00053341) main_mup3_pane_g1_ParamLimits

0x916d,	// (0x00053341) main_mup3_pane_g1

0x918e,	// (0x00053362) main_mup3_pane_g2_ParamLimits

0x918e,	// (0x00053362) main_mup3_pane_g2

0x9202,	// (0x000533d6) main_mup3_pane_g3_ParamLimits

0x9202,	// (0x000533d6) main_mup3_pane_g3

0x9267,	// (0x0005343b) main_mup3_pane_g4_ParamLimits

0x9267,	// (0x0005343b) main_mup3_pane_g4

0x92cc,	// (0x000534a0) main_mup3_pane_g5_ParamLimits

0x92cc,	// (0x000534a0) main_mup3_pane_g5

0x9331,	// (0x00053505) main_mup3_pane_g6_ParamLimits

0x9331,	// (0x00053505) main_mup3_pane_g6

0x357b,	// (0x0004d74f) main_mup3_pane_g7_ParamLimits

0x357b,	// (0x0004d74f) main_mup3_pane_g7

0x0007,

0xf70b,	// (0x000598df) main_mup3_pane_g_ParamLimits

0xf70b,	// (0x000598df) main_mup3_pane_g

0x93ab,	// (0x0005357f) main_mup3_pane_t1_ParamLimits

0x93ab,	// (0x0005357f) main_mup3_pane_t1

0x9416,	// (0x000535ea) main_mup3_pane_t2_ParamLimits

0x9416,	// (0x000535ea) main_mup3_pane_t2

0x94df,	// (0x000536b3) main_mup3_pane_t4_ParamLimits

0x94df,	// (0x000536b3) main_mup3_pane_t4

0x9533,	// (0x00053707) main_mup3_pane_t5_ParamLimits

0x9533,	// (0x00053707) main_mup3_pane_t5

0x95eb,	// (0x000537bf) main_mup3_pane_t6_ParamLimits

0x95eb,	// (0x000537bf) main_mup3_pane_t6

0x0005,

0xf71c,	// (0x000598f0) main_mup3_pane_t_ParamLimits

0xf71c,	// (0x000598f0) main_mup3_pane_t

0x9695,	// (0x00053869) mup3_progress_pane_ParamLimits

0x9695,	// (0x00053869) mup3_progress_pane

0x9713,	// (0x000538e7) popup_mup3_control_window_ParamLimits

0x9713,	// (0x000538e7) popup_mup3_control_window

0xedf3,	// (0x00058fc7) popup_mup3_text_window

0x9730,	// (0x00053904) mup3_progress_pane_t1

0x974e,	// (0x00053922) mup3_progress_pane_t2

0xedfb,	// (0x00058fcf) mup3_progress_pane_t3

0x0002,

0xf729,	// (0x000598fd) mup3_progress_pane_t

0xee18,	// (0x00058fec) mup_progress_pane_cp03

0x2e37,	// (0x0004d00b) bg_tb_trans_pane_cp04

0x976c,	// (0x00053940) mup3_volume_pane

0x9774,	// (0x00053948) popup_mup3_control_window_g1

0x1607,	// (0x0004b7db) mup3_volume_pane_g1

0x1610,	// (0x0004b7e4) mup3_volume_pane_g2

0x1619,	// (0x0004b7ed) mup3_volume_pane_g3

0x0002,

0xf730,	// (0x00059904) mup3_volume_pane_g

0x2e37,	// (0x0004d00b) bg_tb_trans_pane_cp03

0xee28,	// (0x00058ffc) popup_mup3_text_window_g1

0xee30,	// (0x00059004) popup_mup3_text_window_t1

0x3627,	// (0x0004d7fb) list_calc_item_pane_g1_ParamLimits

0xe8e7,	// (0x00058abb) mup_volume_pane_cp_g1

0x9065,	// (0x00053239) main_touch_calib_pane_t3

0x907b,	// (0x0005324f) main_touch_calib_pane_t4

0x9091,	// (0x00053265) main_touch_calib_pane_t5

0x5966,	// (0x0004fb3a) aid_cell_size_toolbar2

0x596e,	// (0x0004fb42) aid_popup3_width_pane

0x5876,	// (0x0004fa4a) aid_zoom_text_msg_primary

0x6720,	// (0x000508f4) vorec_t7

0x35eb,	// (0x0004d7bf) bg_calc_paper_pane_g1_ParamLimits

0x3603,	// (0x0004d7d7) bg_calc_paper_pane_g2_ParamLimits

0x35f7,	// (0x0004d7cb) bg_calc_paper_pane_g3_ParamLimits

0x361b,	// (0x0004d7ef) bg_calc_paper_pane_g4_ParamLimits

0x360f,	// (0x0004d7e3) bg_calc_paper_pane_g5_ParamLimits

0x5e92,	// (0x00050066) bg_calc_paper_pane_g6_ParamLimits

0x5ea3,	// (0x00050077) bg_calc_paper_pane_g7_ParamLimits

0x5eb4,	// (0x00050088) bg_calc_paper_pane_g8_ParamLimits

0xf113,	// (0x000592e7) bg_calc_paper_pane_g_ParamLimits

0x5ec5,	// (0x00050099) calc_bg_paper_pane_g9_ParamLimits

0x2e74,	// (0x0004d048) image_qvga_pane_ParamLimits

0x2e74,	// (0x0004d048) image_qvga_pane

0x34f2,	// (0x0004d6c6) bg_popup_sub_pane_cp04_ParamLimits

0x42b5,	// (0x0004e489) popup_mup_playback_window_g1_ParamLimits

0x42c1,	// (0x0004e495) popup_mup_playback_window_t1_ParamLimits

0x42d6,	// (0x0004e4aa) popup_mup_playback_window_t2_ParamLimits

0xf476,	// (0x0005964a) popup_mup_playback_window_t_ParamLimits

0x356d,	// (0x0004d741) main_mup2_pane_g3_ParamLimits

0x356d,	// (0x0004d741) main_mup2_pane_g3

0x69f9,	// (0x00050bcd) popup_toolbar_window_cp04

0x46d1,	// (0x0004e8a5) popup_call2_audio_second_window_g3_ParamLimits

0x46d1,	// (0x0004e8a5) popup_call2_audio_second_window_g3

0xde45,	// (0x00058019) popup_call2_audio_first_window_g4_ParamLimits

0xde45,	// (0x00058019) popup_call2_audio_first_window_g4

0xe46c,	// (0x00058640) popup_call2_audio_in_window_g4_ParamLimits

0xe46c,	// (0x00058640) popup_call2_audio_in_window_g4

0x8447,	// (0x0005261b) aid_area_sk_bg_cut_ParamLimits

0x8447,	// (0x0005261b) aid_area_sk_bg_cut

0x42eb,	// (0x0004e4bf) aid_area_sk_bg_cut_2_ParamLimits

0x42eb,	// (0x0004e4bf) aid_area_sk_bg_cut_2

0x2e37,	// (0x0004d00b) aid_placing_details_win

0x2e37,	// (0x0004d00b) aid_placing_details_win_2

0x356d,	// (0x0004d741) camera2_autofocus_pane_g1_ParamLimits

0x5bc3,	// (0x0004fd97) popup_fixed_preview_cale_window_ParamLimits

0x5bc3,	// (0x0004fd97) popup_fixed_preview_cale_window

0x40ec,	// (0x0004e2c0) navi_slider_pane_g3

0x40e3,	// (0x0004e2b7) navi_slider_pane_g4

0x40da,	// (0x0004e2ae) navi_slider_pane_g5

0x40ec,	// (0x0004e2c0) navi_slider_pane_g6

0x7ec1,	// (0x00052095) navi_slider_pane_g7

0x41ec,	// (0x0004e3c0) mup_scale_pane_g3

0x41f5,	// (0x0004e3c9) mup_scale_pane_g4

0x41fe,	// (0x0004e3d2) mup_scale_pane_g5

0x80de,	// (0x000522b2) mup_scale_pane_g6

0x80e7,	// (0x000522bb) mup_scale_pane_g7

0xe8f0,	// (0x00058ac4) cams2_slider_pane_g3

0xe8f0,	// (0x00058ac4) cams2_slider_pane_g4

0xe8f0,	// (0x00058ac4) cams2_slider_pane_g5

0xe8f0,	// (0x00058ac4) cams2_slider_pane_g6

0xe8f0,	// (0x00058ac4) cams2_slider_pane_g7

0x37c7,	// (0x0004d99b) camera2_autofocus_pane_cp_g1

0xe744,	// (0x00058918) bg_popup_preview_window_pane_cp02_ParamLimits

0xe744,	// (0x00058918) bg_popup_preview_window_pane_cp02

0xee3e,	// (0x00059012) list_fp_cale_pane_ParamLimits

0xee3e,	// (0x00059012) list_fp_cale_pane

0xee4a,	// (0x0005901e) popup_fixed_preview_cale_window_t1_ParamLimits

0xee4a,	// (0x0005901e) popup_fixed_preview_cale_window_t1

0x977d,	// (0x00053951) popup_fixed_preview_cale_window_t2_ParamLimits

0x977d,	// (0x00053951) popup_fixed_preview_cale_window_t2

0x9792,	// (0x00053966) popup_fixed_preview_cale_window_t3_ParamLimits

0x9792,	// (0x00053966) popup_fixed_preview_cale_window_t3

0x0002,

0xf737,	// (0x0005990b) popup_fixed_preview_cale_window_t_ParamLimits

0xf737,	// (0x0005990b) popup_fixed_preview_cale_window_t

0x97a7,	// (0x0005397b) list_single_fp_cale_pane_ParamLimits

0x97a7,	// (0x0005397b) list_single_fp_cale_pane

0xee68,	// (0x0005903c) list_single_fp_cale_pane_g1_ParamLimits

0xee68,	// (0x0005903c) list_single_fp_cale_pane_g1

0xee74,	// (0x00059048) list_single_fp_cale_pane_g2_ParamLimits

0xee74,	// (0x00059048) list_single_fp_cale_pane_g2

0x0002,

0xf73e,	// (0x00059912) list_single_fp_cale_pane_g_ParamLimits

0xf73e,	// (0x00059912) list_single_fp_cale_pane_g

0xee8d,	// (0x00059061) list_single_fp_cale_pane_t1_ParamLimits

0xee8d,	// (0x00059061) list_single_fp_cale_pane_t1

0xee9f,	// (0x00059073) list_single_fp_cale_pane_t2_ParamLimits

0xee9f,	// (0x00059073) list_single_fp_cale_pane_t2

0x0001,

0xf745,	// (0x00059919) list_single_fp_cale_pane_t_ParamLimits

0xf745,	// (0x00059919) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5c37,	// (0x0004fe0b) main_dialer_pane

0x2e37,	// (0x0004d00b) aid_cell_size_keypad

0x2e37,	// (0x0004d00b) dialer_ne_pane

0x2e37,	// (0x0004d00b) grid_dialer_command_1_pane

0x2e37,	// (0x0004d00b) grid_dialer_command_2_pane

0x2e37,	// (0x0004d00b) grid_dialer_keypad_pane

0xdd63,	// (0x00057f37) bg_popup_call_pane_cp06_ParamLimits

0xdd63,	// (0x00057f37) bg_popup_call_pane_cp06

0xdd63,	// (0x00057f37) dialer_ne_clear_pane_ParamLimits

0xdd63,	// (0x00057f37) dialer_ne_clear_pane

0x37c7,	// (0x0004d99b) dialer_ne_pane_g1

0x379f,	// (0x0004d973) dialer_ne_pane_t1_ParamLimits

0x379f,	// (0x0004d973) dialer_ne_pane_t1

0x0867,	// (0x0004aa3b) dialer_ne_pane_t2_ParamLimits

0x0867,	// (0x0004aa3b) dialer_ne_pane_t2

0x97b7,	// (0x0005398b) dialer_ne_pane_t3_ParamLimits

0x97b7,	// (0x0005398b) dialer_ne_pane_t3

0x0002,

0xf74a,	// (0x0005991e) dialer_ne_pane_t_ParamLimits

0xf74a,	// (0x0005991e) dialer_ne_pane_t

0x97b7,	// (0x0005398b) dialer_ne_pane_t3_copy1_ParamLimits

0x97b7,	// (0x0005398b) dialer_ne_pane_t3_copy1

0xeed2,	// (0x000590a6) cell_dialer_keypad_pane_ParamLimits

0xeed2,	// (0x000590a6) cell_dialer_keypad_pane

0x3514,	// (0x0004d6e8) cell_dialer_command_1_pane_ParamLimits

0x3514,	// (0x0004d6e8) cell_dialer_command_1_pane

0xeee9,	// (0x000590bd) cell_dialer_command_2_pane_ParamLimits

0xeee9,	// (0x000590bd) cell_dialer_command_2_pane

0x3514,	// (0x0004d6e8) bg_button_pane_cp02_ParamLimits

0x3514,	// (0x0004d6e8) bg_button_pane_cp02

0x356d,	// (0x0004d741) cell_dialer_keypad_pane_g1_ParamLimits

0x356d,	// (0x0004d741) cell_dialer_keypad_pane_g1

0x3514,	// (0x0004d6e8) bg_button_pane_cp03_ParamLimits

0x3514,	// (0x0004d6e8) bg_button_pane_cp03

0x356d,	// (0x0004d741) cell_dialer_command_1_pane_g1_ParamLimits

0x356d,	// (0x0004d741) cell_dialer_command_1_pane_g1

0x2e37,	// (0x0004d00b) bg_button_pane_cp04

0x37c7,	// (0x0004d99b) cell_dialer_command_2_pane_g1

0x2e37,	// (0x0004d00b) bg_button_pane_cp06

0x37c7,	// (0x0004d99b) dialer_ne_clear_pane_g1

0x7dfc,	// (0x00051fd0) navi_pane_g2

0x7e2a,	// (0x00051ffe) navi_pane_g3

0x0002,

0xf379,	// (0x0005954d) navi_pane_g

0x7e55,	// (0x00052029) navi_pane_mv_g2

0x7e7c,	// (0x00052050) navi_pane_mv_g5

0x7e84,	// (0x00052058) navi_pane_mv_t1

0x35df,	// (0x0004d7b3) main_clock2_pane

0x2e74,	// (0x0004d048) main_clock2_list_pane_ParamLimits

0x2e74,	// (0x0004d048) main_clock2_list_pane

0x982c,	// (0x00053a00) main_clock2_pane_t1_ParamLimits

0x982c,	// (0x00053a00) main_clock2_pane_t1

0x985a,	// (0x00053a2e) main_clock2_pane_t2_ParamLimits

0x985a,	// (0x00053a2e) main_clock2_pane_t2

0x0004,

0xf756,	// (0x0005992a) main_clock2_pane_t_ParamLimits

0xf756,	// (0x0005992a) main_clock2_pane_t

0x98bf,	// (0x00053a93) popup_clock_analogue_window_cp03_ParamLimits

0x98bf,	// (0x00053a93) popup_clock_analogue_window_cp03

0x98dd,	// (0x00053ab1) popup_clock_digital_window_cp02_ParamLimits

0x98dd,	// (0x00053ab1) popup_clock_digital_window_cp02

0x9952,	// (0x00053b26) main_clock2_list_single_pane_ParamLimits

0x9952,	// (0x00053b26) main_clock2_list_single_pane

0x377d,	// (0x0004d951) list_highlight_pane_cp05

0xef2a,	// (0x000590fe) main_clock2_list_single_pane_t1

0x69f9,	// (0x00050bcd) popup_toolbar_window_cp04_ParamLimits

0x357b,	// (0x0004d74f) camera2_autofocus_pane_g2_ParamLimits

0x357b,	// (0x0004d74f) camera2_autofocus_pane_g2

0x357b,	// (0x0004d74f) camera2_autofocus_pane_g3_ParamLimits

0x357b,	// (0x0004d74f) camera2_autofocus_pane_g3

0x357b,	// (0x0004d74f) camera2_autofocus_pane_g4_ParamLimits

0x357b,	// (0x0004d74f) camera2_autofocus_pane_g4

0x357b,	// (0x0004d74f) camera2_autofocus_pane_g5_ParamLimits

0x357b,	// (0x0004d74f) camera2_autofocus_pane_g5

0x0004,

0xf69a,	// (0x0005986e) camera2_autofocus_pane_g_ParamLimits

0xf69a,	// (0x0005986e) camera2_autofocus_pane_g

0x912a,	// (0x000532fe) camera2_autofocus_pane_cp_g2

0x9132,	// (0x00053306) camera2_autofocus_pane_cp_g3

0x913a,	// (0x0005330e) camera2_autofocus_pane_cp_g4

0x9142,	// (0x00053316) camera2_autofocus_pane_cp_g5

0x0004,

0xf700,	// (0x000598d4) camera2_autofocus_pane_cp_g

0x2e37,	// (0x0004d00b) popup_dialer_spcha_window

0x2e37,	// (0x0004d00b) bg_popup_sub_pane_cp07

0x2e37,	// (0x0004d00b) list_spcha_pane

0xef38,	// (0x0005910c) list_single_spcha_pane_ParamLimits

0xef38,	// (0x0005910c) list_single_spcha_pane

0x2e37,	// (0x0004d00b) list_highlight_pane_cp06

0x3cf3,	// (0x0004dec7) list_single_spcha_pane_t1

0xe216,	// (0x000583ea) popup_call2_audio_out_window_g4_ParamLimits

0xe216,	// (0x000583ea) popup_call2_audio_out_window_g4

0x5c37,	// (0x0004fe0b) main_imed2_pane

0x8b08,	// (0x00052cdc) popup_imed_adjust2_window

0x8b1b,	// (0x00052cef) popup_imed_trans_window_ParamLimits

0x8b1b,	// (0x00052cef) popup_imed_trans_window

0xe9c6,	// (0x00058b9a) popup_blid_sat_info2_window_t1

0xe9d4,	// (0x00058ba8) popup_blid_sat_info2_window_t2

0x000a,

0xf62f,	// (0x00059803) popup_blid_sat_info2_window_t

0x9a09,	// (0x00053bdd) aid_size_cell_colour_35

0x9a23,	// (0x00053bf7) aid_size_cell_colour_112

0x9a3a,	// (0x00053c0e) aid_size_cell_effect

0x3514,	// (0x0004d6e8) bg_tb_trans_pane_cp02

0x4a10,	// (0x0004ebe4) heading_imed_pane

0x9a54,	// (0x00053c28) listscroll_imed_pane

0xef4a,	// (0x0005911e) heading_imed_pane_g1

0xef52,	// (0x00059126) heading_imed_pane_t1

0xef60,	// (0x00059134) grid_imed_colour_35_pane_ParamLimits

0xef60,	// (0x00059134) grid_imed_colour_35_pane

0x9a60,	// (0x00053c34) grid_imed_effect_pane

0xef7c,	// (0x00059150) list_imed_aspect_pane

0x9a70,	// (0x00053c44) scroll_pane_cp027_ParamLimits

0x9a70,	// (0x00053c44) scroll_pane_cp027

0x9a7c,	// (0x00053c50) cell_imed_effect_pane_ParamLimits

0x9a7c,	// (0x00053c50) cell_imed_effect_pane

0xef84,	// (0x00059158) cell_imed_colour_pane_ParamLimits

0xef84,	// (0x00059158) cell_imed_colour_pane

0xefce,	// (0x000591a2) cell_imed_colour_pane_g1_ParamLimits

0xefce,	// (0x000591a2) cell_imed_colour_pane_g1

0xefdf,	// (0x000591b3) hgihlgiht_grid_pane_cp016_ParamLimits

0xefdf,	// (0x000591b3) hgihlgiht_grid_pane_cp016

0x9a98,	// (0x00053c6c) cell_imed_effect_pane_g1

0x9aa0,	// (0x00053c74) grid_highlight_pane_cp017

0xeff0,	// (0x000591c4) list_imed_single_pane_ParamLimits

0xeff0,	// (0x000591c4) list_imed_single_pane

0x2e37,	// (0x0004d00b) list_highlight_pane_cp07

0xf004,	// (0x000591d8) list_imed_aspect_pane_comp1_t1

0x4a3e,	// (0x0004ec12) bg_tb_trans_pane_cp05

0xf026,	// (0x000591fa) popup_imed_adjust2_window_g1

0xf04d,	// (0x00059221) popup_imed_adjust2_window_t1

0xf065,	// (0x00059239) slider_imed_adjust_pane

0x07e5,	// (0x0004a9b9) slider_imed_adjust_pane_g1

0x07f5,	// (0x0004a9c9) slider_imed_adjust_pane_g2

0x0805,	// (0x0004a9d9) slider_imed_adjust_pane_g3

0x0816,	// (0x0004a9ea) slider_imed_adjust_pane_g4

0x0003,

0xf773,	// (0x00059947) slider_imed_adjust_pane_g

0x9aa9,	// (0x00053c7d) aid_size_cell_clipart2

0x0827,	// (0x0004a9fb) grid_imed_clipart_pane

0x0831,	// (0x0004aa05) scroll_pane_cp031

0x9ab5,	// (0x00053c89) cell_imed_clipart_pane_ParamLimits

0x9ab5,	// (0x00053c89) cell_imed_clipart_pane

0x9ad3,	// (0x00053ca7) cell_imed_clipart_pane_g1

0x2e37,	// (0x0004d00b) grid_highlight_pane_cp014

0x980e,	// (0x000539e2) main_clock2_pane_g1_ParamLimits

0x980e,	// (0x000539e2) main_clock2_pane_g1

0x98f9,	// (0x00053acd) aid_call2_pane_cp10

0x990b,	// (0x00053adf) aid_call_pane_cp10

0x4006,	// (0x0004e1da) popup_clock_analogue_window_cp10_g1

0x4006,	// (0x0004e1da) popup_clock_analogue_window_cp10_g2

0x991d,	// (0x00053af1) popup_clock_analogue_window_cp10_g3

0x991d,	// (0x00053af1) popup_clock_analogue_window_cp10_g4

0x4006,	// (0x0004e1da) popup_clock_analogue_window_cp10_g5

0x0004,

0xf761,	// (0x00059935) popup_clock_analogue_window_cp10_g

0x9933,	// (0x00053b07) popup_clock_analogue_window_cp10_t1

0x9964,	// (0x00053b38) clock_digital_number_pane_cp10_ParamLimits

0x9964,	// (0x00053b38) clock_digital_number_pane_cp10

0x997e,	// (0x00053b52) clock_digital_number_pane_cp11_ParamLimits

0x997e,	// (0x00053b52) clock_digital_number_pane_cp11

0x9998,	// (0x00053b6c) clock_digital_number_pane_cp12_ParamLimits

0x9998,	// (0x00053b6c) clock_digital_number_pane_cp12

0x99b2,	// (0x00053b86) clock_digital_number_pane_cp13_ParamLimits

0x99b2,	// (0x00053b86) clock_digital_number_pane_cp13

0x99ce,	// (0x00053ba2) clock_digital_separator_pane_cp10_ParamLimits

0x99ce,	// (0x00053ba2) clock_digital_separator_pane_cp10

0x99e8,	// (0x00053bbc) popup_clock_digital_window_cp02_t1_ParamLimits

0x99e8,	// (0x00053bbc) popup_clock_digital_window_cp02_t1

0x34ea,	// (0x0004d6be) clock_digital_number_pane_cp10_g1

0x34ea,	// (0x0004d6be) clock_digital_number_pane_cp10_g2

0x0001,

0xf77c,	// (0x00059950) clock_digital_number_pane_cp10_g

0x34ea,	// (0x0004d6be) clock_digital_separator_pane_cp10_g1

0x34ea,	// (0x0004d6be) clock_digital_separator_pane_g2_cp10

0x40a1,	// (0x0004e275) navi_pane_vded_g4

0x40aa,	// (0x0004e27e) navi_pane_vded_g5

0x40b3,	// (0x0004e287) navi_pane_vded_t1

0x5c37,	// (0x0004fe0b) main_vded_pane

0x9adc,	// (0x00053cb0) main_vded_pane_g1

0x9ae8,	// (0x00053cbc) main_vded_pane_g2

0x9af2,	// (0x00053cc6) main_vded_pane_g3

0x0002,

0xf781,	// (0x00059955) main_vded_pane_g

0x9afc,	// (0x00053cd0) main_vded_pane_t1

0x9b0a,	// (0x00053cde) main_vded_pane_t2

0x0001,

0xf788,	// (0x0005995c) main_vded_pane_t

0x9b18,	// (0x00053cec) vded_slider_pane

0x9b22,	// (0x00053cf6) vded_video_pane

0x0839,	// (0x0004aa0d) vded_video_pane_g1

0x9b2e,	// (0x00053d02) vded_video_pane_g2

0x37c7,	// (0x0004d99b) vded_video_pane_g3

0x0002,

0xf78d,	// (0x00059961) vded_video_pane_g

0x0843,	// (0x0004aa17) vded_slider_pane_g1

0xe8e7,	// (0x00058abb) vded_slider_pane_g2

0x084c,	// (0x0004aa20) vded_slider_pane_g3

0x0855,	// (0x0004aa29) vded_slider_pane_g4

0x085e,	// (0x0004aa32) vded_slider_pane_g5

0x0004,

0xf794,	// (0x00059968) vded_slider_pane_g

0x9707,	// (0x000538db) mup3_rocker_pane_ParamLimits

0x9707,	// (0x000538db) mup3_rocker_pane

0x9b37,	// (0x00053d0b) mup3_control_keys_pane_g1

0x9b3f,	// (0x00053d13) mup3_control_keys_pane_g2

0x9b47,	// (0x00053d1b) mup3_control_keys_pane_g3

0x9b4f,	// (0x00053d23) mup3_control_keys_pane_g4

0x0003,

0xf79f,	// (0x00059973) mup3_control_keys_pane_g

0x5beb,	// (0x0004fdbf) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5beb,	// (0x0004fdbf) popup_toolbar2_fixed_window_cp01

0x9723,	// (0x000538f7) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9723,	// (0x000538f7) popup_toolbar2_fixed_window_cp02

0x4843,	// (0x0004ea17) popup_call2_audio_second_window_t4_ParamLimits

0x4843,	// (0x0004ea17) popup_call2_audio_second_window_t4

0xe0db,	// (0x000582af) popup_call2_audio_first_window_t6_ParamLimits

0xe0db,	// (0x000582af) popup_call2_audio_first_window_t6

0xe319,	// (0x000584ed) popup_call2_audio_out_window_t6_ParamLimits

0xe319,	// (0x000584ed) popup_call2_audio_out_window_t6

0x5c37,	// (0x0004fe0b) main_vitu_pane

0x2e74,	// (0x0004d048) aid_size_cell_itu_ParamLimits

0x2e74,	// (0x0004d048) aid_size_cell_itu

0x2e74,	// (0x0004d048) bg_popup_window_pane_cp08_ParamLimits

0x2e74,	// (0x0004d048) bg_popup_window_pane_cp08

0x2e74,	// (0x0004d048) field_vitu_entry_pane_ParamLimits

0x2e74,	// (0x0004d048) field_vitu_entry_pane

0x2e74,	// (0x0004d048) grid_vitu_function_pane_ParamLimits

0x2e74,	// (0x0004d048) grid_vitu_function_pane

0x2e74,	// (0x0004d048) grid_vitu_itu_pane_ParamLimits

0x2e74,	// (0x0004d048) grid_vitu_itu_pane

0x2e74,	// (0x0004d048) cell_vitu_itu_pane_ParamLimits

0x2e74,	// (0x0004d048) cell_vitu_itu_pane

0x2e74,	// (0x0004d048) cell_vitu_function_pane_ParamLimits

0x2e74,	// (0x0004d048) cell_vitu_function_pane

0x3514,	// (0x0004d6e8) bg_popup_sub_pane_cp08_ParamLimits

0x3514,	// (0x0004d6e8) bg_popup_sub_pane_cp08

0x37b3,	// (0x0004d987) field_vitu_entry_pane_t1_ParamLimits

0x37b3,	// (0x0004d987) field_vitu_entry_pane_t1

0x0867,	// (0x0004aa3b) field_vitu_entry_pane_t2_ParamLimits

0x0867,	// (0x0004aa3b) field_vitu_entry_pane_t2

0x0001,

0xf7a8,	// (0x0005997c) field_vitu_entry_pane_t_ParamLimits

0xf7a8,	// (0x0005997c) field_vitu_entry_pane_t

0xdd63,	// (0x00057f37) bg_button_pane_cp05_ParamLimits

0xdd63,	// (0x00057f37) bg_button_pane_cp05

0x0884,	// (0x0004aa58) cell_vitu_itu_pane_g1

0x4a2a,	// (0x0004ebfe) cell_vitu_itu_pane_t1_ParamLimits

0x4a2a,	// (0x0004ebfe) cell_vitu_itu_pane_t1

0x4a2a,	// (0x0004ebfe) cell_vitu_itu_pane_t2_ParamLimits

0x4a2a,	// (0x0004ebfe) cell_vitu_itu_pane_t2

0x0002,

0xf7ad,	// (0x00059981) cell_vitu_itu_pane_t_ParamLimits

0xf7ad,	// (0x00059981) cell_vitu_itu_pane_t

0x2e37,	// (0x0004d00b) bg_button_pane_cp07

0x37c7,	// (0x0004d99b) cell_vitu_function_pane_g1

0x5d34,	// (0x0004ff08) main_calc_pane_g1

0x59a2,	// (0x0004fb76) aid_visual_content_pane

0x5c37,	// (0x0004fe0b) main_vradio_pane

0x357b,	// (0x0004d74f) main_vradio_pane_g1_ParamLimits

0x357b,	// (0x0004d74f) main_vradio_pane_g1

0x357b,	// (0x0004d74f) main_vradio_pane_g2_ParamLimits

0x357b,	// (0x0004d74f) main_vradio_pane_g2

0x0001,

0xf7b4,	// (0x00059988) main_vradio_pane_g_ParamLimits

0xf7b4,	// (0x00059988) main_vradio_pane_g

0x379f,	// (0x0004d973) main_vradio_pane_t1_ParamLimits

0x379f,	// (0x0004d973) main_vradio_pane_t1

0x379f,	// (0x0004d973) main_vradio_pane_t2_ParamLimits

0x379f,	// (0x0004d973) main_vradio_pane_t2

0x379f,	// (0x0004d973) main_vradio_pane_t3_ParamLimits

0x379f,	// (0x0004d973) main_vradio_pane_t3

0x0002,

0xf7b9,	// (0x0005998d) main_vradio_pane_t_ParamLimits

0xf7b9,	// (0x0005998d) main_vradio_pane_t

0x2e74,	// (0x0004d048) vradio_rocker_control_pane_ParamLimits

0x2e74,	// (0x0004d048) vradio_rocker_control_pane

0x2e74,	// (0x0004d048) vradio_station_info_pane_ParamLimits

0x2e74,	// (0x0004d048) vradio_station_info_pane

0x3514,	// (0x0004d6e8) vradio_frequency_info_pane_ParamLimits

0x3514,	// (0x0004d6e8) vradio_frequency_info_pane

0x37c7,	// (0x0004d99b) vradio_station_info_pane_g1

0x4a2a,	// (0x0004ebfe) vradio_station_info_pane_t1_ParamLimits

0x4a2a,	// (0x0004ebfe) vradio_station_info_pane_t1

0x379f,	// (0x0004d973) vradio_station_info_pane_t2_ParamLimits

0x379f,	// (0x0004d973) vradio_station_info_pane_t2

0x0001,

0xf7c0,	// (0x00059994) vradio_station_info_pane_t_ParamLimits

0xf7c0,	// (0x00059994) vradio_station_info_pane_t

0x2e37,	// (0x0004d00b) vradio_tuning_pane

0x9b5f,	// (0x00053d33) vradio_rocker_control_pane_g1

0x08a0,	// (0x0004aa74) vradio_rocker_control_pane_g2

0x9b67,	// (0x00053d3b) vradio_rocker_control_pane_g3

0x9b6f,	// (0x00053d43) vradio_rocker_control_pane_g4

0x9b79,	// (0x00053d4d) vradio_rocker_control_pane_g5

0x0004,

0xf7c5,	// (0x00059999) vradio_rocker_control_pane_g

0x37c7,	// (0x0004d99b) vradio_frequency_info_pane_g1

0x37b3,	// (0x0004d987) vradio_frequency_info_pane_t1_ParamLimits

0x37b3,	// (0x0004d987) vradio_frequency_info_pane_t1

0x9b81,	// (0x00053d55) vradio_tuning_pane_g1

0x9b8e,	// (0x00053d62) vradio_tuning_pane_t1

0x59eb,	// (0x0004fbbf) area_side_right_pane_ParamLimits

0x59eb,	// (0x0004fbbf) area_side_right_pane

0xe70b,	// (0x000588df) status_small_pane_g1

0xe713,	// (0x000588e7) status_small_pane_g2

0xe71c,	// (0x000588f0) status_small_pane_g3

0xe725,	// (0x000588f9) status_small_pane_g4

0x0003,

0xf591,	// (0x00059765) status_small_pane_g

0xe72e,	// (0x00058902) status_small_pane_t1

0x5c37,	// (0x0004fe0b) main_video3_pane

0x08a8,	// (0x0004aa7c) cams_zoom_vslider_pane

0x08b0,	// (0x0004aa84) image3_wide_pane_ParamLimits

0x08b0,	// (0x0004aa84) image3_wide_pane

0x08ca,	// (0x0004aa9e) image3_wide_small_pane

0x08d6,	// (0x0004aaaa) main_video3_pane_g1_ParamLimits

0x08d6,	// (0x0004aaaa) main_video3_pane_g1

0x08f2,	// (0x0004aac6) main_video3_pane_g2_ParamLimits

0x08f2,	// (0x0004aac6) main_video3_pane_g2

0x0001,

0xf7d0,	// (0x000599a4) main_video3_pane_g_ParamLimits

0xf7d0,	// (0x000599a4) main_video3_pane_g

0x090e,	// (0x0004aae2) main_video3_pane_t1_ParamLimits

0x090e,	// (0x0004aae2) main_video3_pane_t1

0x0939,	// (0x0004ab0d) main_video3_pane_t2_ParamLimits

0x0939,	// (0x0004ab0d) main_video3_pane_t2

0x0966,	// (0x0004ab3a) main_video3_pane_t3_ParamLimits

0x0966,	// (0x0004ab3a) main_video3_pane_t3

0x0002,

0xf7d5,	// (0x000599a9) main_video3_pane_t_ParamLimits

0xf7d5,	// (0x000599a9) main_video3_pane_t

0x0993,	// (0x0004ab67) cams_zoom_vslider_pane_g1

0x099c,	// (0x0004ab70) cams_zoom_vslider_pane_g2

0x0001,

0xf7dc,	// (0x000599b0) cams_zoom_vslider_pane_g

0x09a4,	// (0x0004ab78) small_slider_vertical_pane

0x37c7,	// (0x0004d99b) small_slider_vertical_pane_g1

0x37c7,	// (0x0004d99b) small_slider_vertical_pane_g2

0x09ac,	// (0x0004ab80) small_slider_vertical_pane_g3

0x0002,

0xf7e1,	// (0x000599b5) small_slider_vertical_pane_g

0x5c37,	// (0x0004fe0b) main_hwr_training_pane

0x09b5,	// (0x0004ab89) hwr_training_instruct_pane_ParamLimits

0x09b5,	// (0x0004ab89) hwr_training_instruct_pane

0x9b9d,	// (0x00053d71) hwr_training_navi_pane_ParamLimits

0x9b9d,	// (0x00053d71) hwr_training_navi_pane

0x9bb7,	// (0x00053d8b) hwr_training_write_pane_ParamLimits

0x9bb7,	// (0x00053d8b) hwr_training_write_pane

0x2e37,	// (0x0004d00b) bg_frame_shadow_pane

0x09ec,	// (0x0004abc0) hwr_training_write_pane_g1

0x09f4,	// (0x0004abc8) hwr_training_write_pane_g2

0x09fc,	// (0x0004abd0) hwr_training_write_pane_g3

0x0a04,	// (0x0004abd8) hwr_training_write_pane_g4

0x0a0c,	// (0x0004abe0) hwr_training_write_pane_g5

0x0a14,	// (0x0004abe8) hwr_training_write_pane_g6

0x0a1c,	// (0x0004abf0) hwr_training_write_pane_g7

0x0006,

0xf7e8,	// (0x000599bc) hwr_training_write_pane_g

0x9bef,	// (0x00053dc3) hwr_training_navi_pane_g1_ParamLimits

0x9bef,	// (0x00053dc3) hwr_training_navi_pane_g1

0x9c01,	// (0x00053dd5) hwr_training_navi_pane_g2_ParamLimits

0x9c01,	// (0x00053dd5) hwr_training_navi_pane_g2

0x9c13,	// (0x00053de7) hwr_training_navi_pane_g3_ParamLimits

0x9c13,	// (0x00053de7) hwr_training_navi_pane_g3

0x9c23,	// (0x00053df7) hwr_training_navi_pane_g4_ParamLimits

0x9c23,	// (0x00053df7) hwr_training_navi_pane_g4

0x0004,

0xf7f7,	// (0x000599cb) hwr_training_navi_pane_g_ParamLimits

0xf7f7,	// (0x000599cb) hwr_training_navi_pane_g

0x9c3d,	// (0x00053e11) hwr_training_navi_pane_t1

0x9c4b,	// (0x00053e1f) list_single_hwr_training_instruct_pane_ParamLimits

0x9c4b,	// (0x00053e1f) list_single_hwr_training_instruct_pane

0x0a73,	// (0x0004ac47) list_single_hwr_training_instruct_pane_t1

0xeacd,	// (0x00058ca1) bg_frame_shadow_pane_g1

0x0a82,	// (0x0004ac56) bg_frame_shadow_pane_g2

0x0a8a,	// (0x0004ac5e) bg_frame_shadow_pane_g3

0x0a92,	// (0x0004ac66) bg_frame_shadow_pane_g4

0x0a9a,	// (0x0004ac6e) bg_frame_shadow_pane_g5

0x0aa2,	// (0x0004ac76) bg_frame_shadow_pane_g6

0x0aaa,	// (0x0004ac7e) bg_frame_shadow_pane_g7

0x368e,	// (0x0004d862) bg_frame_shadow_pane_g8

0x0007,

0xf802,	// (0x000599d6) bg_frame_shadow_pane_g

0x5c37,	// (0x0004fe0b) main_video_tele_dialer_pane

0x9c64,	// (0x00053e38) aid_size_cell_video_keypad_ParamLimits

0x9c64,	// (0x00053e38) aid_size_cell_video_keypad

0x9c74,	// (0x00053e48) grid_video_dialer_keypad_pane_ParamLimits

0x9c74,	// (0x00053e48) grid_video_dialer_keypad_pane

0x9ca6,	// (0x00053e7a) video_down_pane_cp_ParamLimits

0x9ca6,	// (0x00053e7a) video_down_pane_cp

0x9cd0,	// (0x00053ea4) cell_video_dialer_keypad_pane_ParamLimits

0x9cd0,	// (0x00053ea4) cell_video_dialer_keypad_pane

0x0ab2,	// (0x0004ac86) bg_button_pane_cp08_ParamLimits

0x0ab2,	// (0x0004ac86) bg_button_pane_cp08

0x9ce7,	// (0x00053ebb) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9ce7,	// (0x00053ebb) cell_video_dialer_keypad_pane_g1

0x96fb,	// (0x000538cf) mup3_rocker2_pane_ParamLimits

0x96fb,	// (0x000538cf) mup3_rocker2_pane

0x37c7,	// (0x0004d99b) mup3_rocker2_pane_g1

0x8a60,	// (0x00052c34) main_dialer2_pane

0x5c37,	// (0x0004fe0b) main_mp4_pane

0x9d40,	// (0x00053f14) main_mp4_pane_g1_ParamLimits

0x9d40,	// (0x00053f14) main_mp4_pane_g1

0x9d4e,	// (0x00053f22) main_mp4_pane_g2_ParamLimits

0x9d4e,	// (0x00053f22) main_mp4_pane_g2

0x9d5c,	// (0x00053f30) main_mp4_pane_g3_ParamLimits

0x9d5c,	// (0x00053f30) main_mp4_pane_g3

0x9daf,	// (0x00053f83) main_mp4_pane_g4_ParamLimits

0x9daf,	// (0x00053f83) main_mp4_pane_g4

0x9ddd,	// (0x00053fb1) main_mp4_pane_g5_ParamLimits

0x9ddd,	// (0x00053fb1) main_mp4_pane_g5

0x0007,

0xf822,	// (0x000599f6) main_mp4_pane_g_ParamLimits

0xf822,	// (0x000599f6) main_mp4_pane_g

0x9e51,	// (0x00054025) main_mp4_pane_t1_ParamLimits

0x9e51,	// (0x00054025) main_mp4_pane_t1

0x9ead,	// (0x00054081) main_mp4_pane_t2_ParamLimits

0x9ead,	// (0x00054081) main_mp4_pane_t2

0x0c3a,	// (0x0004ae0e) main_mp4_pane_t3_ParamLimits

0x0c3a,	// (0x0004ae0e) main_mp4_pane_t3

0x9eff,	// (0x000540d3) main_mp4_pane_t4_ParamLimits

0x9eff,	// (0x000540d3) main_mp4_pane_t4

0x0003,

0xf833,	// (0x00059a07) main_mp4_pane_t_ParamLimits

0xf833,	// (0x00059a07) main_mp4_pane_t

0x9f3f,	// (0x00054113) mp4_progress_pane_ParamLimits

0x9f3f,	// (0x00054113) mp4_progress_pane

0x9f89,	// (0x0005415d) mp4_rocker_pane_ParamLimits

0x9f89,	// (0x0005415d) mp4_rocker_pane

0x0d12,	// (0x0004aee6) mp4_progress_pane_t1

0x0d2b,	// (0x0004aeff) mp4_progress_pane_t2

0x0001,

0xf83c,	// (0x00059a10) mp4_progress_pane_t

0x0d44,	// (0x0004af18) mup_progress_pane_cp04

0xe8f0,	// (0x00058ac4) mp4_rocker_pane_g1

0x9fa9,	// (0x0005417d) aid_cell_size_keypad2_ParamLimits

0x9fa9,	// (0x0005417d) aid_cell_size_keypad2

0x9fb9,	// (0x0005418d) dialer2_ne_pane_ParamLimits

0x9fb9,	// (0x0005418d) dialer2_ne_pane

0x9fc5,	// (0x00054199) grid_dialer2_keypad_pane_ParamLimits

0x9fc5,	// (0x00054199) grid_dialer2_keypad_pane

0x07b5,	// (0x0004a989) bg_popup_call_pane_cp07_ParamLimits

0x07b5,	// (0x0004a989) bg_popup_call_pane_cp07

0x9fd3,	// (0x000541a7) dialer2_ne_pane_t1_ParamLimits

0x9fd3,	// (0x000541a7) dialer2_ne_pane_t1

0x9ff8,	// (0x000541cc) cell_dialer2_keypad_pane_ParamLimits

0x9ff8,	// (0x000541cc) cell_dialer2_keypad_pane

0x0d69,	// (0x0004af3d) bg_button_pane_pane_cp04_ParamLimits

0x0d69,	// (0x0004af3d) bg_button_pane_pane_cp04

0xa00f,	// (0x000541e3) cell_dialer2_keypad_pane_g1_ParamLimits

0xa00f,	// (0x000541e3) cell_dialer2_keypad_pane_g1

0x68cb,	// (0x00050a9f) aid_placing_vt_set_content_ParamLimits

0x68cb,	// (0x00050a9f) aid_placing_vt_set_content

0x68f3,	// (0x00050ac7) aid_placing_vt_set_title_ParamLimits

0x68f3,	// (0x00050ac7) aid_placing_vt_set_title

0x5c37,	// (0x0004fe0b) main_image3_pane

0xa0a9,	// (0x0005427d) area_side_right_pane_cp01_ParamLimits

0xa0a9,	// (0x0005427d) area_side_right_pane_cp01

0xa0d8,	// (0x000542ac) main_image3_pane_g1_ParamLimits

0xa0d8,	// (0x000542ac) main_image3_pane_g1

0xa0e6,	// (0x000542ba) main_image3_pane_g2_ParamLimits

0xa0e6,	// (0x000542ba) main_image3_pane_g2

0xa0ff,	// (0x000542d3) main_image3_pane_g3_ParamLimits

0xa0ff,	// (0x000542d3) main_image3_pane_g3

0xa118,	// (0x000542ec) main_image3_pane_g4_ParamLimits

0xa118,	// (0x000542ec) main_image3_pane_g4

0x0003,

0xf84b,	// (0x00059a1f) main_image3_pane_g_ParamLimits

0xf84b,	// (0x00059a1f) main_image3_pane_g

0xa131,	// (0x00054305) main_image3_pane_t1_ParamLimits

0xa131,	// (0x00054305) main_image3_pane_t1

0xa156,	// (0x0005432a) main_image3_pane_t2_ParamLimits

0xa156,	// (0x0005432a) main_image3_pane_t2

0xa175,	// (0x00054349) main_image3_pane_t3_ParamLimits

0xa175,	// (0x00054349) main_image3_pane_t3

0x0003,

0xf854,	// (0x00059a28) main_image3_pane_t_ParamLimits

0xf854,	// (0x00059a28) main_image3_pane_t

0x2e74,	// (0x0004d048) grid_sctrl_middle_pane_cp01_ParamLimits

0x2e74,	// (0x0004d048) grid_sctrl_middle_pane_cp01

0xa1d6,	// (0x000543aa) cell_sctrl_middle_pane_cp01_ParamLimits

0xa1d6,	// (0x000543aa) cell_sctrl_middle_pane_cp01

0xa1e7,	// (0x000543bb) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa1e7,	// (0x000543bb) cell_sctrl_middle_pane_cp01_g1

0x5c37,	// (0x0004fe0b) main_call4_pane

0xa1f4,	// (0x000543c8) aid_size_button_call4_ParamLimits

0xa1f4,	// (0x000543c8) aid_size_button_call4

0xa22a,	// (0x000543fe) call4_windows_pane_ParamLimits

0xa22a,	// (0x000543fe) call4_windows_pane

0xa23f,	// (0x00054413) grid_call4_button_pane_ParamLimits

0xa23f,	// (0x00054413) grid_call4_button_pane

0xa26f,	// (0x00054443) call4_windows_conf_pane

0xa288,	// (0x0005445c) popup_call4_audio_first_window_ParamLimits

0xa288,	// (0x0005445c) popup_call4_audio_first_window

0xa2d8,	// (0x000544ac) popup_call4_audio_second_window_ParamLimits

0xa2d8,	// (0x000544ac) popup_call4_audio_second_window

0xa2f1,	// (0x000544c5) popup_call4_audio_wait_window_ParamLimits

0xa2f1,	// (0x000544c5) popup_call4_audio_wait_window

0xa2ff,	// (0x000544d3) cell_call4_button_pane_ParamLimits

0xa2ff,	// (0x000544d3) cell_call4_button_pane

0xa322,	// (0x000544f6) bg_button_pane_cp09_ParamLimits

0xa322,	// (0x000544f6) bg_button_pane_cp09

0xa32e,	// (0x00054502) cell_call4_button_pane_g1_ParamLimits

0xa32e,	// (0x00054502) cell_call4_button_pane_g1

0xa33b,	// (0x0005450f) cell_call4_button_pane_t1_ParamLimits

0xa33b,	// (0x0005450f) cell_call4_button_pane_t1

0x0de3,	// (0x0004afb7) popup_call4_audio_conf_window_ParamLimits

0x0de3,	// (0x0004afb7) popup_call4_audio_conf_window

0x9730,	// (0x00053904) mup3_progress_pane_t1_ParamLimits

0x974e,	// (0x00053922) mup3_progress_pane_t2_ParamLimits

0xedfb,	// (0x00058fcf) mup3_progress_pane_t3_ParamLimits

0xf729,	// (0x000598fd) mup3_progress_pane_t_ParamLimits

0xee18,	// (0x00058fec) mup_progress_pane_cp03_ParamLimits

0x9b57,	// (0x00053d2b) mup3_control_keys_pane_g4_copy1

0x9f6d,	// (0x00054141) mp4_rocker2_pane_ParamLimits

0x9f6d,	// (0x00054141) mp4_rocker2_pane

0x0e05,	// (0x0004afd9) mp4_rocker2_pane_g1

0x0dfd,	// (0x0004afd1) mp4_rocker2_pane_g2

0xa37f,	// (0x00054553) mp4_rocker2_pane_g3

0xa387,	// (0x0005455b) mp4_rocker2_pane_g4

0xa38f,	// (0x00054563) mp4_rocker2_pane_g5

0x0004,

0xf85d,	// (0x00059a31) mp4_rocker2_pane_g

0x5c37,	// (0x0004fe0b) main_camera4_pane

0x5c37,	// (0x0004fe0b) main_video4_pane

0x9c82,	// (0x00053e56) main_video_tele_dialer_pane_t1_ParamLimits

0x9c82,	// (0x00053e56) main_video_tele_dialer_pane_t1

0x9c94,	// (0x00053e68) main_video_tele_dialer_pane_t2_ParamLimits

0x9c94,	// (0x00053e68) main_video_tele_dialer_pane_t2

0x0001,

0xf813,	// (0x000599e7) main_video_tele_dialer_pane_t_ParamLimits

0xf813,	// (0x000599e7) main_video_tele_dialer_pane_t

0xa3af,	// (0x00054583) cam4_autofocus_pane_ParamLimits

0xa3af,	// (0x00054583) cam4_autofocus_pane

0xa3c7,	// (0x0005459b) cam4_image_uncrop_pane_ParamLimits

0xa3c7,	// (0x0005459b) cam4_image_uncrop_pane

0xa3e0,	// (0x000545b4) cam4_indicators_pane_ParamLimits

0xa3e0,	// (0x000545b4) cam4_indicators_pane

0xa3fc,	// (0x000545d0) main_camera4_pane_g1_ParamLimits

0xa3fc,	// (0x000545d0) main_camera4_pane_g1

0xa408,	// (0x000545dc) main_camera4_pane_g2_ParamLimits

0xa408,	// (0x000545dc) main_camera4_pane_g2

0xa408,	// (0x000545dc) main_camera4_pane_g3_ParamLimits

0xa408,	// (0x000545dc) main_camera4_pane_g3

0xa414,	// (0x000545e8) main_camera4_pane_g4_ParamLimits

0xa414,	// (0x000545e8) main_camera4_pane_g4

0xa420,	// (0x000545f4) main_camera4_pane_g5_ParamLimits

0xa420,	// (0x000545f4) main_camera4_pane_g5

0x0005,

0xf868,	// (0x00059a3c) main_camera4_pane_g_ParamLimits

0xf868,	// (0x00059a3c) main_camera4_pane_g

0xa43a,	// (0x0005460e) main_camera4_pane_t1_ParamLimits

0xa43a,	// (0x0005460e) main_camera4_pane_t1

0x211c,	// (0x0004c2f0) bg_tb_trans_pane_cp06

0xa48c,	// (0x00054660) cam4_indicators_pane_g1

0xa49d,	// (0x00054671) cam4_indicators_pane_g2

0x0002,

0xf883,	// (0x00059a57) cam4_indicators_pane_g

0xa4b5,	// (0x00054689) cam4_indicators_pane_t1

0xa4df,	// (0x000546b3) main_video4_pane_g1_ParamLimits

0xa4df,	// (0x000546b3) main_video4_pane_g1

0xa4eb,	// (0x000546bf) main_video4_pane_g2_ParamLimits

0xa4eb,	// (0x000546bf) main_video4_pane_g2

0xa4f7,	// (0x000546cb) main_video4_pane_g3_ParamLimits

0xa4f7,	// (0x000546cb) main_video4_pane_g3

0xa503,	// (0x000546d7) main_video4_pane_g4_ParamLimits

0xa503,	// (0x000546d7) main_video4_pane_g4

0x0004,

0xf88a,	// (0x00059a5e) main_video4_pane_g_ParamLimits

0xf88a,	// (0x00059a5e) main_video4_pane_g

0xa525,	// (0x000546f9) vid4_indicators_pane_ParamLimits

0xa525,	// (0x000546f9) vid4_indicators_pane

0xa544,	// (0x00054718) video4_image_uncrop_cif_pane_ParamLimits

0xa544,	// (0x00054718) video4_image_uncrop_cif_pane

0xa553,	// (0x00054727) video4_image_uncrop_nhd_pane_ParamLimits

0xa553,	// (0x00054727) video4_image_uncrop_nhd_pane

0xa3c7,	// (0x0005459b) video4_image_uncrop_vga_pane_ParamLimits

0xa3c7,	// (0x0005459b) video4_image_uncrop_vga_pane

0x8a52,	// (0x00052c26) bg_tb_trans_pane_cp07

0xa56c,	// (0x00054740) vid4_indicators_pane_g1

0xa582,	// (0x00054756) vid4_indicators_pane_g2

0xa596,	// (0x0005476a) vid4_indicators_pane_g3

0x0004,

0xf895,	// (0x00059a69) vid4_indicators_pane_g

0xa5c7,	// (0x0005479b) vid4_indicators_pane_t1

0xa5de,	// (0x000547b2) cam4_autofocus_pane_g1

0xa5e6,	// (0x000547ba) cam4_autofocus_pane_g2

0xa5ee,	// (0x000547c2) cam4_autofocus_pane_g3

0x0002,

0xf8a0,	// (0x00059a74) cam4_autofocus_pane_g

0xa5f6,	// (0x000547ca) cam4_autofocus_pane_g3_copy1

0x9cb4,	// (0x00053e88) video_down_pane_cp_t1

0x9cc2,	// (0x00053e96) video_down_pane_cp_t2

0x0001,

0xf818,	// (0x000599ec) video_down_pane_cp_t

0x5c1d,	// (0x0004fdf1) popup_vitu2_window_ParamLimits

0x5c1d,	// (0x0004fdf1) popup_vitu2_window

0xa5fe,	// (0x000547d2) aid_size_cell2_itu2_ParamLimits

0xa5fe,	// (0x000547d2) aid_size_cell2_itu2

0xa61a,	// (0x000547ee) aid_size_cell_itu2_ParamLimits

0xa61a,	// (0x000547ee) aid_size_cell_itu2

0xa654,	// (0x00054828) bg_popup_window_pane_cp09_ParamLimits

0xa654,	// (0x00054828) bg_popup_window_pane_cp09

0xa662,	// (0x00054836) field_vitu2_entry_pane_ParamLimits

0xa662,	// (0x00054836) field_vitu2_entry_pane

0xa680,	// (0x00054854) grid_vitu2_function_pane_ParamLimits

0xa680,	// (0x00054854) grid_vitu2_function_pane

0xa6c0,	// (0x00054894) grid_vitu2_itu_pane_ParamLimits

0xa6c0,	// (0x00054894) grid_vitu2_itu_pane

0xa722,	// (0x000548f6) cell_vitu2_itu_pane_ParamLimits

0xa722,	// (0x000548f6) cell_vitu2_itu_pane

0xa73d,	// (0x00054911) cell_vitu2_function_pane_ParamLimits

0xa73d,	// (0x00054911) cell_vitu2_function_pane

0x0f28,	// (0x0004b0fc) bg_popup_call_pane_cp08_ParamLimits

0x0f28,	// (0x0004b0fc) bg_popup_call_pane_cp08

0x0f3f,	// (0x0004b113) field_vitu2_entry_pane_g1

0x0f4b,	// (0x0004b11f) field_vitu2_entry_pane_g2

0x0002,

0xf8a7,	// (0x00059a7b) field_vitu2_entry_pane_g

0xa781,	// (0x00054955) field_vitu2_entry_pane_t1_ParamLimits

0xa781,	// (0x00054955) field_vitu2_entry_pane_t1

0x0f57,	// (0x0004b12b) field_vitu2_entry_pane_t2_ParamLimits

0x0f57,	// (0x0004b12b) field_vitu2_entry_pane_t2

0x0001,

0xf8ae,	// (0x00059a82) field_vitu2_entry_pane_t_ParamLimits

0xf8ae,	// (0x00059a82) field_vitu2_entry_pane_t

0x8dab,	// (0x00052f7f) bg_button_pane_cp010_ParamLimits

0x8dab,	// (0x00052f7f) bg_button_pane_cp010

0xa7b1,	// (0x00054985) cell_vitu2_itu_pane_g1

0xa7d7,	// (0x000549ab) cell_vitu2_itu_pane_t1_ParamLimits

0xa7d7,	// (0x000549ab) cell_vitu2_itu_pane_t1

0x5886,	// (0x0004fa5a) cell_vitu2_itu_pane_t2_ParamLimits

0x5886,	// (0x0004fa5a) cell_vitu2_itu_pane_t2

0x0002,

0xf8b8,	// (0x00059a8c) cell_vitu2_itu_pane_t_ParamLimits

0xf8b8,	// (0x00059a8c) cell_vitu2_itu_pane_t

0x8a52,	// (0x00052c26) bg_button_pane_cp011

0xa823,	// (0x000549f7) cell_vitu2_function_pane_g1

0x5c37,	// (0x0004fe0b) main_myfav_hc_pane

0xa1b7,	// (0x0005438b) popup_image3_note_pane_ParamLimits

0xa1b7,	// (0x0005438b) popup_image3_note_pane

0xa1c5,	// (0x00054399) popup_image3_tool_bar_pane_ParamLimits

0xa1c5,	// (0x00054399) popup_image3_tool_bar_pane

0x58fc,	// (0x0004fad0) cell_vitu2_itu_pane_t3_ParamLimits

0x58fc,	// (0x0004fad0) cell_vitu2_itu_pane_t3

0x2e37,	// (0x0004d00b) bg_popup_trans_pane

0x0f7c,	// (0x0004b150) grid_image3_tool_bar_pane

0x0f86,	// (0x0004b15a) bg_popup_trans_pane_g1

0x39dc,	// (0x0004dbb0) bg_popup_trans_pane_g2

0x0f8e,	// (0x0004b162) bg_popup_trans_pane_g3

0x0f96,	// (0x0004b16a) bg_popup_trans_pane_g4

0x0f9e,	// (0x0004b172) bg_popup_trans_pane_g5

0x0fa6,	// (0x0004b17a) bg_popup_trans_pane_g6

0x0fae,	// (0x0004b182) bg_popup_trans_pane_g7

0x0fb6,	// (0x0004b18a) bg_popup_trans_pane_g8

0x39bc,	// (0x0004db90) bg_popup_trans_pane_g9

0x0008,

0xf8bf,	// (0x00059a93) bg_popup_trans_pane_g

0x0fbe,	// (0x0004b192) cell_image3_tool_bar_pane_ParamLimits

0x0fbe,	// (0x0004b192) cell_image3_tool_bar_pane

0x37c7,	// (0x0004d99b) cell_image3_tool_bar_pane_g1

0x2e37,	// (0x0004d00b) bg_popup_trans_pane_cp1

0x0fd4,	// (0x0004b1a8) popup_image3_note_pane_t1

0x0fe2,	// (0x0004b1b6) popup_image3_note_pane_t2

0x0ff0,	// (0x0004b1c4) popup_image3_note_pane_t3

0x0002,

0xf8d2,	// (0x00059aa6) popup_image3_note_pane_t

0x1000,	// (0x0004b1d4) popup_image3_note_pane_t3_copy1

0xa837,	// (0x00054a0b) bg_myfav_hc_instruction_pane_ParamLimits

0xa837,	// (0x00054a0b) bg_myfav_hc_instruction_pane

0xa84f,	// (0x00054a23) cell_myfav_contact_pane_ParamLimits

0xa84f,	// (0x00054a23) cell_myfav_contact_pane

0xa869,	// (0x00054a3d) cell_myfav_contact_pane_cp1_ParamLimits

0xa869,	// (0x00054a3d) cell_myfav_contact_pane_cp1

0xa881,	// (0x00054a55) cell_myfav_contact_pane_cp2_ParamLimits

0xa881,	// (0x00054a55) cell_myfav_contact_pane_cp2

0xa899,	// (0x00054a6d) cell_myfav_contact_pane_cp3_ParamLimits

0xa899,	// (0x00054a6d) cell_myfav_contact_pane_cp3

0xa8b0,	// (0x00054a84) cell_myfav_contact_pane_cp4_ParamLimits

0xa8b0,	// (0x00054a84) cell_myfav_contact_pane_cp4

0xa8c6,	// (0x00054a9a) cell_myfav_contact_pane_cp5_ParamLimits

0xa8c6,	// (0x00054a9a) cell_myfav_contact_pane_cp5

0xa8da,	// (0x00054aae) cell_myfav_contact_pane_cp6_ParamLimits

0xa8da,	// (0x00054aae) cell_myfav_contact_pane_cp6

0xa8ee,	// (0x00054ac2) cell_myfav_contact_pane_cp7_ParamLimits

0xa8ee,	// (0x00054ac2) cell_myfav_contact_pane_cp7

0x100e,	// (0x0004b1e2) listscroll_gen_pane_cp05

0xa906,	// (0x00054ada) main_myfav_hc_pane_g1_ParamLimits

0xa906,	// (0x00054ada) main_myfav_hc_pane_g1

0xa920,	// (0x00054af4) main_myfav_hc_pane_g2_ParamLimits

0xa920,	// (0x00054af4) main_myfav_hc_pane_g2

0x0002,

0xf8d9,	// (0x00059aad) main_myfav_hc_pane_g_ParamLimits

0xf8d9,	// (0x00059aad) main_myfav_hc_pane_g

0xa952,	// (0x00054b26) main_myfav_hc_pane_t1_ParamLimits

0xa952,	// (0x00054b26) main_myfav_hc_pane_t1

0x1017,	// (0x0004b1eb) main_myfav_hc_pane_t2_ParamLimits

0x1017,	// (0x0004b1eb) main_myfav_hc_pane_t2

0x1029,	// (0x0004b1fd) main_myfav_hc_pane_t3_ParamLimits

0x1029,	// (0x0004b1fd) main_myfav_hc_pane_t3

0xa969,	// (0x00054b3d) main_myfav_hc_pane_t4_ParamLimits

0xa969,	// (0x00054b3d) main_myfav_hc_pane_t4

0x0004,

0xf8e0,	// (0x00059ab4) main_myfav_hc_pane_t_ParamLimits

0xf8e0,	// (0x00059ab4) main_myfav_hc_pane_t

0x37c7,	// (0x0004d99b) bg_myfav_hc_instruction_pane_g1

0x103b,	// (0x0004b20f) cell_myfav_contact_pane_g1_ParamLimits

0x103b,	// (0x0004b20f) cell_myfav_contact_pane_g1

0x103b,	// (0x0004b20f) cell_myfav_contact_pane_g2_ParamLimits

0x103b,	// (0x0004b20f) cell_myfav_contact_pane_g2

0x1047,	// (0x0004b21b) cell_myfav_contact_pane_g3_ParamLimits

0x1047,	// (0x0004b21b) cell_myfav_contact_pane_g3

0x357b,	// (0x0004d74f) cell_myfav_contact_pane_g4_ParamLimits

0x357b,	// (0x0004d74f) cell_myfav_contact_pane_g4

0x1054,	// (0x0004b228) cell_myfav_contact_pane_g5_ParamLimits

0x1054,	// (0x0004b228) cell_myfav_contact_pane_g5

0x0004,

0xf8eb,	// (0x00059abf) cell_myfav_contact_pane_g_ParamLimits

0xf8eb,	// (0x00059abf) cell_myfav_contact_pane_g

0xa93a,	// (0x00054b0e) main_myfav_hc_pane_g3_ParamLimits

0xa93a,	// (0x00054b0e) main_myfav_hc_pane_g3

0x5b25,	// (0x0004fcf9) popup_adpt_find_window

0xa993,	// (0x00054b67) afind_page_pane_ParamLimits

0xa993,	// (0x00054b67) afind_page_pane

0xa9a0,	// (0x00054b74) aid_size_cell_afind_ParamLimits

0xa9a0,	// (0x00054b74) aid_size_cell_afind

0xa9ba,	// (0x00054b8e) bg_popup_sub_pane_cp09_ParamLimits

0xa9ba,	// (0x00054b8e) bg_popup_sub_pane_cp09

0xa9c7,	// (0x00054b9b) find_pane_cp01_ParamLimits

0xa9c7,	// (0x00054b9b) find_pane_cp01

0x1060,	// (0x0004b234) grid_afind_control_pane_ParamLimits

0x1060,	// (0x0004b234) grid_afind_control_pane

0xa9d4,	// (0x00054ba8) grid_afind_pane_ParamLimits

0xa9d4,	// (0x00054ba8) grid_afind_pane

0xa9f0,	// (0x00054bc4) cell_afind_pane_ParamLimits

0xa9f0,	// (0x00054bc4) cell_afind_pane

0x37c7,	// (0x0004d99b) afind_page_pane_g1

0xaa3c,	// (0x00054c10) afind_page_pane_g2

0xaa45,	// (0x00054c19) afind_page_pane_g3

0x0002,

0xf8f6,	// (0x00059aca) afind_page_pane_g

0xaa4e,	// (0x00054c22) afind_page_pane_t1

0x1074,	// (0x0004b248) cell_afind_grid_control_pane_ParamLimits

0x1074,	// (0x0004b248) cell_afind_grid_control_pane

0x0d69,	// (0x0004af3d) bg_button_pane_cp69_ParamLimits

0x0d69,	// (0x0004af3d) bg_button_pane_cp69

0xaa6e,	// (0x00054c42) cell_afind_pane_g1_ParamLimits

0xaa6e,	// (0x00054c42) cell_afind_pane_g1

0xaa7b,	// (0x00054c4f) cell_afind_pane_t1_ParamLimits

0xaa7b,	// (0x00054c4f) cell_afind_pane_t1

0x37d1,	// (0x0004d9a5) bg_button_pane_cp72

0x1083,	// (0x0004b257) cell_afind_grid_control_pane_g1

0x8574,	// (0x00052748) aid_image_placing_area_ParamLimits

0x8574,	// (0x00052748) aid_image_placing_area

0x356d,	// (0x0004d741) field_vitu_entry_pane_g1_ParamLimits

0x356d,	// (0x0004d741) field_vitu_entry_pane_g1

0x356d,	// (0x0004d741) field_vitu_entry_pane_g2_ParamLimits

0x356d,	// (0x0004d741) field_vitu_entry_pane_g2

0x0001,

0xf201,	// (0x000593d5) field_vitu_entry_pane_g_ParamLimits

0xf201,	// (0x000593d5) field_vitu_entry_pane_g

0x0884,	// (0x0004aa58) cell_vitu_itu_pane_g1_ParamLimits

0x0867,	// (0x0004aa3b) cell_vitu_itu_pane_t3_ParamLimits

0x0867,	// (0x0004aa3b) cell_vitu_itu_pane_t3

0x0d12,	// (0x0004aee6) mp4_progress_pane_t1_ParamLimits

0x0d2b,	// (0x0004aeff) mp4_progress_pane_t2_ParamLimits

0xf83c,	// (0x00059a10) mp4_progress_pane_t_ParamLimits

0x0d44,	// (0x0004af18) mup_progress_pane_cp04_ParamLimits

0xa97d,	// (0x00054b51) main_myfav_hc_pane_t5_ParamLimits

0xa97d,	// (0x00054b51) main_myfav_hc_pane_t5

0x59ae,	// (0x0004fb82) aid_zoom_text_primary

0x5b25,	// (0x0004fcf9) popup_adpt_find_window_ParamLimits

0x8a52,	// (0x00052c26) main_cam_set_pane

0xa3ee,	// (0x000545c2) cam4_zoom_pane_ParamLimits

0xa3ee,	// (0x000545c2) cam4_zoom_pane

0xaa8d,	// (0x00054c61) main_cam_set_pane_g1_ParamLimits

0xaa8d,	// (0x00054c61) main_cam_set_pane_g1

0xaa9b,	// (0x00054c6f) main_cam_set_pane_g2_ParamLimits

0xaa9b,	// (0x00054c6f) main_cam_set_pane_g2

0x0001,

0xf8fd,	// (0x00059ad1) main_cam_set_pane_g_ParamLimits

0xf8fd,	// (0x00059ad1) main_cam_set_pane_g

0xaaa7,	// (0x00054c7b) main_cam_set_pane_t1_ParamLimits

0xaaa7,	// (0x00054c7b) main_cam_set_pane_t1

0xaac3,	// (0x00054c97) main_cset_listscroll_pane_ParamLimits

0xaac3,	// (0x00054c97) main_cset_listscroll_pane

0xaaf7,	// (0x00054ccb) main_cset_slider_pane_ParamLimits

0xaaf7,	// (0x00054ccb) main_cset_slider_pane

0x1094,	// (0x0004b268) main_cset_list_pane_ParamLimits

0x1094,	// (0x0004b268) main_cset_list_pane

0x10a4,	// (0x0004b278) scroll_pane_cp028

0xab18,	// (0x00054cec) aid_area_touch_slider

0xab34,	// (0x00054d08) cset_slider_pane

0xab57,	// (0x00054d2b) main_cset_slider_pane_g1

0xab6c,	// (0x00054d40) main_cset_slider_pane_g2

0x0011,

0xf902,	// (0x00059ad6) main_cset_slider_pane_g

0x10dd,	// (0x0004b2b1) main_cset_slider_pane_t1

0xac28,	// (0x00054dfc) main_cset_slider_pane_t2

0xac42,	// (0x00054e16) main_cset_slider_pane_t3

0xac5c,	// (0x00054e30) main_cset_slider_pane_t4

0xac76,	// (0x00054e4a) main_cset_slider_pane_t5

0xac90,	// (0x00054e64) main_cset_slider_pane_t6

0xaca5,	// (0x00054e79) main_cset_slider_pane_t7

0x000e,

0xf927,	// (0x00059afb) main_cset_slider_pane_t

0xada9,	// (0x00054f7d) cset_list_set_pane_ParamLimits

0xada9,	// (0x00054f7d) cset_list_set_pane

0x1177,	// (0x0004b34b) aid_position_infowindow_above

0x117f,	// (0x0004b353) aid_position_infowindow_below

0xadba,	// (0x00054f8e) cset_list_set_pane_g1_ParamLimits

0xadba,	// (0x00054f8e) cset_list_set_pane_g1

0xadc6,	// (0x00054f9a) cset_list_set_pane_g3_ParamLimits

0xadc6,	// (0x00054f9a) cset_list_set_pane_g3

0x0001,

0xf946,	// (0x00059b1a) cset_list_set_pane_g_ParamLimits

0xf946,	// (0x00059b1a) cset_list_set_pane_g

0xadd5,	// (0x00054fa9) cset_list_set_pane_t1_ParamLimits

0xadd5,	// (0x00054fa9) cset_list_set_pane_t1

0x3514,	// (0x0004d6e8) list_highlight_pane_cp021_ParamLimits

0x3514,	// (0x0004d6e8) list_highlight_pane_cp021

0x41ec,	// (0x0004e3c0) cset_slider_pane_g1

0x41fe,	// (0x0004e3d2) cset_slider_pane_g2

0x41f5,	// (0x0004e3c9) cset_slider_pane_g3

0x0002,

0xf94b,	// (0x00059b1f) cset_slider_pane_g

0x3e95,	// (0x0004e069) aid_area_touch_cam4_zoom

0xadea,	// (0x00054fbe) cam4_zoom_cont_pane

0xadf2,	// (0x00054fc6) cam4_zoom_pane_g1

0xadfa,	// (0x00054fce) cam4_zoom_pane_g2

0xae02,	// (0x00054fd6) cam4_zoom_pane_g3

0x0002,

0xf952,	// (0x00059b26) cam4_zoom_pane_g

0xae0a,	// (0x00054fde) cam4_zoom_cont_pane_g1

0xae13,	// (0x00054fe7) cam4_zoom_cont_pane_g2

0xae1c,	// (0x00054ff0) cam4_zoom_cont_pane_g3

0x0002,

0xf959,	// (0x00059b2d) cam4_zoom_cont_pane_g

0xa20e,	// (0x000543e2) call4_image_pane_ParamLimits

0xa20e,	// (0x000543e2) call4_image_pane

0xa26f,	// (0x00054443) call4_windows_conf_pane_ParamLimits

0xa2b6,	// (0x0005448a) popup_call4_audio_in_window_ParamLimits

0xa2b6,	// (0x0005448a) popup_call4_audio_in_window

0x2e37,	// (0x0004d00b) bg_popup_call2_act_pane_cp02

0x0ddb,	// (0x0004afaf) call4_list_conf_pane

0x37c7,	// (0x0004d99b) call4_image_pane_g1

0x37c7,	// (0x0004d99b) call4_image_pane_g2

0x0001,

0xf3dd,	// (0x000595b1) call4_image_pane_g

0x1190,	// (0x0004b364) list_single_graphic_popup_conf4_pane_ParamLimits

0x1190,	// (0x0004b364) list_single_graphic_popup_conf4_pane

0x2e37,	// (0x0004d00b) list_highlight_pane_cp022

0x11a5,	// (0x0004b379) list_single_graphic_popup_conf4_pane_g1

0x3eee,	// (0x0004e0c2) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf960,	// (0x00059b34) list_single_graphic_popup_conf4_pane_g

0x11ad,	// (0x0004b381) list_single_graphic_popup_conf4_pane_t1

0x6a4d,	// (0x00050c21) popup_vtel_slider_window_ParamLimits

0x6a4d,	// (0x00050c21) popup_vtel_slider_window

0x0d57,	// (0x0004af2b) dialer2_ne_pane_t2_ParamLimits

0x0d57,	// (0x0004af2b) dialer2_ne_pane_t2

0x0001,

0xf841,	// (0x00059a15) dialer2_ne_pane_t_ParamLimits

0xf841,	// (0x00059a15) dialer2_ne_pane_t

0x3514,	// (0x0004d6e8) bg_popup_sub_pane_cp010_ParamLimits

0x3514,	// (0x0004d6e8) bg_popup_sub_pane_cp010

0xae25,	// (0x00054ff9) popup_vtel_slider_window_g1_ParamLimits

0xae25,	// (0x00054ff9) popup_vtel_slider_window_g1

0xae31,	// (0x00055005) popup_vtel_slider_window_g2_ParamLimits

0xae31,	// (0x00055005) popup_vtel_slider_window_g2

0x0003,

0xf965,	// (0x00059b39) popup_vtel_slider_window_g_ParamLimits

0xf965,	// (0x00059b39) popup_vtel_slider_window_g

0xae79,	// (0x0005504d) vtel_slider_pane_ParamLimits

0xae79,	// (0x0005504d) vtel_slider_pane

0xae88,	// (0x0005505c) vtel_slider_pane_g1_ParamLimits

0xae88,	// (0x0005505c) vtel_slider_pane_g1

0xae95,	// (0x00055069) vtel_slider_pane_g2_ParamLimits

0xae95,	// (0x00055069) vtel_slider_pane_g2

0xaea2,	// (0x00055076) vtel_slider_pane_g3_ParamLimits

0xaea2,	// (0x00055076) vtel_slider_pane_g3

0xae88,	// (0x0005505c) vtel_slider_pane_g4_ParamLimits

0xae88,	// (0x0005505c) vtel_slider_pane_g4

0xaeaf,	// (0x00055083) vtel_slider_pane_g5_ParamLimits

0xaeaf,	// (0x00055083) vtel_slider_pane_g5

0x0004,

0xf96e,	// (0x00059b42) vtel_slider_pane_g_ParamLimits

0xf96e,	// (0x00059b42) vtel_slider_pane_g

0x8a52,	// (0x00052c26) main_gallery2_pane

0xa636,	// (0x0005480a) aid_size_row_itut2_dropdow_list_ParamLimits

0xa636,	// (0x0005480a) aid_size_row_itut2_dropdow_list

0xa6a0,	// (0x00054874) grid_vitu2_function_top_pane_ParamLimits

0xa6a0,	// (0x00054874) grid_vitu2_function_top_pane

0xa6f0,	// (0x000548c4) popup_vitu2_dropdown_list_window_ParamLimits

0xa6f0,	// (0x000548c4) popup_vitu2_dropdown_list_window

0xa70e,	// (0x000548e2) popup_vitu2_match_list_window

0xaebc,	// (0x00055090) cell_vitu2_function_top_pane_ParamLimits

0xaebc,	// (0x00055090) cell_vitu2_function_top_pane

0xaed6,	// (0x000550aa) cell_vitu2_function_top_pane_cp01_ParamLimits

0xaed6,	// (0x000550aa) cell_vitu2_function_top_pane_cp01

0xaef2,	// (0x000550c6) cell_vitu2_function_top_wide_pane_ParamLimits

0xaef2,	// (0x000550c6) cell_vitu2_function_top_wide_pane

0x8a52,	// (0x00052c26) bg_button_pane_cp012

0xaf10,	// (0x000550e4) cell_vitu2_function_top_pane_g1

0xaf24,	// (0x000550f8) bg_button_pane_cp013_ParamLimits

0xaf24,	// (0x000550f8) bg_button_pane_cp013

0xaf40,	// (0x00055114) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xaf40,	// (0x00055114) cell_vitu2_function_top_wide_pane_g1

0x5c1d,	// (0x0004fdf1) bg_popup_sub_pane_cp20

0xaf58,	// (0x0005512c) list_vitu2_match_list_pane

0x0f86,	// (0x0004b15a) bg_popup_sub_pane_cp20_g1

0x0f8e,	// (0x0004b162) bg_popup_sub_pane_cp20_g2

0x39dc,	// (0x0004dbb0) bg_popup_sub_pane_cp20_g3

0x0f96,	// (0x0004b16a) bg_popup_sub_pane_cp20_g4

0x39bc,	// (0x0004db90) bg_popup_sub_pane_cp20_g5

0x11c3,	// (0x0004b397) bg_popup_sub_pane_cp20_g6

0x0fa6,	// (0x0004b17a) bg_popup_sub_pane_cp20_g7

0x0fae,	// (0x0004b182) bg_popup_sub_pane_cp20_g8

0x0fb6,	// (0x0004b18a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf979,	// (0x00059b4d) bg_popup_sub_pane_cp20_g

0xaf70,	// (0x00055144) list_vitu2_match_list_item_pane_ParamLimits

0xaf70,	// (0x00055144) list_vitu2_match_list_item_pane

0xaf82,	// (0x00055156) list_vitu2_match_list_item_pane_t1

0x5c37,	// (0x0004fe0b) bg_popup_sub_pane_cp21

0x377d,	// (0x0004d951) grid_vitu2_dropdown_list_pane

0xaf90,	// (0x00055164) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xaf90,	// (0x00055164) cell_vitu2_dropdown_list_char_pane

0xafb5,	// (0x00055189) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xafb5,	// (0x00055189) cell_vitu2_dropdown_list_ctrl_pane

0x11dd,	// (0x0004b3b1) cell_vitu2_dropdown_list_char_pane_g1

0x11d4,	// (0x0004b3a8) cell_vitu2_dropdown_list_char_pane_g2

0x11cb,	// (0x0004b39f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf98c,	// (0x00059b60) cell_vitu2_dropdown_list_char_pane_g

0xafe1,	// (0x000551b5) cell_vitu2_dropdown_list_char_pane_t1

0xafef,	// (0x000551c3) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xafef,	// (0x000551c3) cell_vitu2_dropdown_list_ctrl_pane_g1

0xafff,	// (0x000551d3) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xafff,	// (0x000551d3) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb010,	// (0x000551e4) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb010,	// (0x000551e4) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb020,	// (0x000551f4) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb020,	// (0x000551f4) cell_vitu2_dropdown_list_ctrl_pane_g4

0x211c,	// (0x0004c2f0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x211c,	// (0x0004c2f0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf993,	// (0x00059b67) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf993,	// (0x00059b67) cell_vitu2_dropdown_list_ctrl_pane_g

0xb039,	// (0x0005520d) aid_size_cell_gallery2_ParamLimits

0xb039,	// (0x0005520d) aid_size_cell_gallery2

0xb053,	// (0x00055227) grid_gallery2_pane_ParamLimits

0xb053,	// (0x00055227) grid_gallery2_pane

0xb06a,	// (0x0005523e) scroll_pane_cp029_ParamLimits

0xb06a,	// (0x0005523e) scroll_pane_cp029

0xb07a,	// (0x0005524e) cell_gallery2_pane_ParamLimits

0xb07a,	// (0x0005524e) cell_gallery2_pane

0x11e6,	// (0x0004b3ba) cell_gallery2_pane_g2

0xb0d1,	// (0x000552a5) cell_gallery2_pane_g3

0x11ee,	// (0x0004b3c2) cell_gallery2_pane_g4

0x11f6,	// (0x0004b3ca) cell_gallery2_pane_g5

0x377d,	// (0x0004d951) grid_highlight_pane_cp10

0xa70e,	// (0x000548e2) popup_vitu2_match_list_window_ParamLimits

0xa644,	// (0x00054818) popup_vitu2_query_window_ParamLimits

0xa644,	// (0x00054818) popup_vitu2_query_window

0x5c37,	// (0x0004fe0b) bg_vitu2_candi_button_pane

0x11dd,	// (0x0004b3b1) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x11d4,	// (0x0004b3a8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x11cb,	// (0x0004b39f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb0d9,	// (0x000552ad) bg_button_pane_cp015

0xb0eb,	// (0x000552bf) bg_button_pane_cp016

0xb0fe,	// (0x000552d2) bg_button_pane_cp017

0x4a3e,	// (0x0004ec12) bg_popup_sub_pane_cp22

0x11fe,	// (0x0004b3d2) popup_vitu2_query_window_g1

0xb143,	// (0x00055317) popup_vitu2_query_window_g2

0x0002,

0xf99e,	// (0x00059b72) popup_vitu2_query_window_g

0xb160,	// (0x00055334) popup_vitu2_query_window_t1_ParamLimits

0xb160,	// (0x00055334) popup_vitu2_query_window_t1

0xb193,	// (0x00055367) popup_vitu2_query_window_t2_ParamLimits

0xb193,	// (0x00055367) popup_vitu2_query_window_t2

0xb1a5,	// (0x00055379) popup_vitu2_query_window_t3_ParamLimits

0xb1a5,	// (0x00055379) popup_vitu2_query_window_t3

0xb1cd,	// (0x000553a1) popup_vitu2_query_window_t4_ParamLimits

0xb1cd,	// (0x000553a1) popup_vitu2_query_window_t4

0xb1f0,	// (0x000553c4) popup_vitu2_query_window_t5_ParamLimits

0xb1f0,	// (0x000553c4) popup_vitu2_query_window_t5

0x0006,

0xf9a5,	// (0x00059b79) popup_vitu2_query_window_t_ParamLimits

0xf9a5,	// (0x00059b79) popup_vitu2_query_window_t

0x108c,	// (0x0004b260) main_cset_text_pane

0xab18,	// (0x00054cec) aid_area_touch_slider_ParamLimits

0xab34,	// (0x00054d08) cset_slider_pane_ParamLimits

0xab57,	// (0x00054d2b) main_cset_slider_pane_g1_ParamLimits

0xab6c,	// (0x00054d40) main_cset_slider_pane_g2_ParamLimits

0x10ad,	// (0x0004b281) main_cset_slider_pane_g3_ParamLimits

0x10ad,	// (0x0004b281) main_cset_slider_pane_g3

0xab81,	// (0x00054d55) main_cset_slider_pane_g4_ParamLimits

0xab81,	// (0x00054d55) main_cset_slider_pane_g4

0xab90,	// (0x00054d64) main_cset_slider_pane_g5_ParamLimits

0xab90,	// (0x00054d64) main_cset_slider_pane_g5

0xab9c,	// (0x00054d70) main_cset_slider_pane_g6_ParamLimits

0xab9c,	// (0x00054d70) main_cset_slider_pane_g6

0xf902,	// (0x00059ad6) main_cset_slider_pane_g_ParamLimits

0x10dd,	// (0x0004b2b1) main_cset_slider_pane_t1_ParamLimits

0xac28,	// (0x00054dfc) main_cset_slider_pane_t2_ParamLimits

0xac42,	// (0x00054e16) main_cset_slider_pane_t3_ParamLimits

0xac5c,	// (0x00054e30) main_cset_slider_pane_t4_ParamLimits

0xac76,	// (0x00054e4a) main_cset_slider_pane_t5_ParamLimits

0xac90,	// (0x00054e64) main_cset_slider_pane_t6_ParamLimits

0xaca5,	// (0x00054e79) main_cset_slider_pane_t7_ParamLimits

0xaccf,	// (0x00054ea3) main_cset_slider_pane_t8_ParamLimits

0xaccf,	// (0x00054ea3) main_cset_slider_pane_t8

0xacf7,	// (0x00054ecb) main_cset_slider_pane_t9_ParamLimits

0xacf7,	// (0x00054ecb) main_cset_slider_pane_t9

0xad1f,	// (0x00054ef3) main_cset_slider_pane_t10_ParamLimits

0xad1f,	// (0x00054ef3) main_cset_slider_pane_t10

0xad47,	// (0x00054f1b) main_cset_slider_pane_t11_ParamLimits

0xad47,	// (0x00054f1b) main_cset_slider_pane_t11

0xad6f,	// (0x00054f43) main_cset_slider_pane_t12_ParamLimits

0xad6f,	// (0x00054f43) main_cset_slider_pane_t12

0xad8c,	// (0x00054f60) main_cset_slider_pane_t13_ParamLimits

0xad8c,	// (0x00054f60) main_cset_slider_pane_t13

0xf927,	// (0x00059afb) main_cset_slider_pane_t_ParamLimits

0x2e37,	// (0x0004d00b) bg_popup_sub_pane_cp011

0x120a,	// (0x0004b3de) main_cset_text_pane_g1

0x1212,	// (0x0004b3e6) main_cset_text_pane_t1

0x1220,	// (0x0004b3f4) main_cset_text_pane_t2

0x122e,	// (0x0004b402) main_cset_text_pane_t3

0x123c,	// (0x0004b410) main_cset_text_pane_t4

0x124a,	// (0x0004b41e) main_cset_text_pane_t5

0x1258,	// (0x0004b42c) main_cset_text_pane_t6

0x1266,	// (0x0004b43a) main_cset_text_pane_t7

0x0006,

0xf9b4,	// (0x00059b88) main_cset_text_pane_t

0x5c37,	// (0x0004fe0b) main_cam4_burst_pane

0x5c37,	// (0x0004fe0b) main_cam5_pane

0xaa5c,	// (0x00054c30) bg_button_pane_cp019

0xaa65,	// (0x00054c39) bg_button_pane_cp020

0x10b9,	// (0x0004b28d) main_cset_slider_pane_g7_ParamLimits

0x10b9,	// (0x0004b28d) main_cset_slider_pane_g7

0x10c5,	// (0x0004b299) main_cset_slider_pane_g8_ParamLimits

0x10c5,	// (0x0004b299) main_cset_slider_pane_g8

0xabb0,	// (0x00054d84) main_cset_slider_pane_g9_ParamLimits

0xabb0,	// (0x00054d84) main_cset_slider_pane_g9

0xabbc,	// (0x00054d90) main_cset_slider_pane_g10_ParamLimits

0xabbc,	// (0x00054d90) main_cset_slider_pane_g10

0xabc8,	// (0x00054d9c) main_cset_slider_pane_g11_ParamLimits

0xabc8,	// (0x00054d9c) main_cset_slider_pane_g11

0xabd4,	// (0x00054da8) main_cset_slider_pane_g12_ParamLimits

0xabd4,	// (0x00054da8) main_cset_slider_pane_g12

0xabe0,	// (0x00054db4) main_cset_slider_pane_g13_ParamLimits

0xabe0,	// (0x00054db4) main_cset_slider_pane_g13

0xabec,	// (0x00054dc0) main_cset_slider_pane_g14_ParamLimits

0xabec,	// (0x00054dc0) main_cset_slider_pane_g14

0xabf8,	// (0x00054dcc) main_cset_slider_pane_g15_ParamLimits

0xabf8,	// (0x00054dcc) main_cset_slider_pane_g15

0x1105,	// (0x0004b2d9) main_cset_slider_pane_t14_ParamLimits

0x1105,	// (0x0004b2d9) main_cset_slider_pane_t14

0x113e,	// (0x0004b312) main_cset_slider_pane_t15_ParamLimits

0x113e,	// (0x0004b312) main_cset_slider_pane_t15

0xb269,	// (0x0005543d) aid_cam4_burst_size_cell_ParamLimits

0xb269,	// (0x0005543d) aid_cam4_burst_size_cell

0xb285,	// (0x00055459) grid_cam4_burst_pane_ParamLimits

0xb285,	// (0x00055459) grid_cam4_burst_pane

0xb2b7,	// (0x0005548b) linegrid_cam4_burst_pane_ParamLimits

0xb2b7,	// (0x0005548b) linegrid_cam4_burst_pane

0xb2d5,	// (0x000554a9) scroll_pane_cp30_ParamLimits

0xb2d5,	// (0x000554a9) scroll_pane_cp30

0xb2e1,	// (0x000554b5) cell_cam4_burst_pane_ParamLimits

0xb2e1,	// (0x000554b5) cell_cam4_burst_pane

0x1280,	// (0x0004b454) linegrid_cam4_burst_pane_g1_ParamLimits

0x1280,	// (0x0004b454) linegrid_cam4_burst_pane_g1

0xb321,	// (0x000554f5) linegrid_cam4_burst_pane_g2_ParamLimits

0xb321,	// (0x000554f5) linegrid_cam4_burst_pane_g2

0x128d,	// (0x0004b461) linegrid_cam4_burst_pane_g3_ParamLimits

0x128d,	// (0x0004b461) linegrid_cam4_burst_pane_g3

0x0002,

0xf9c3,	// (0x00059b97) linegrid_cam4_burst_pane_g_ParamLimits

0xf9c3,	// (0x00059b97) linegrid_cam4_burst_pane_g

0xb332,	// (0x00055506) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb332,	// (0x00055506) linegrid_cam4_burst_pane_g3_copy1

0x129a,	// (0x0004b46e) linegrid_cam4_burst_pane_g4_ParamLimits

0x129a,	// (0x0004b46e) linegrid_cam4_burst_pane_g4

0xb34c,	// (0x00055520) linegrid_cam4_burst_pane_g5_ParamLimits

0xb34c,	// (0x00055520) linegrid_cam4_burst_pane_g5

0xb35d,	// (0x00055531) linegrid_cam4_burst_pane_g6_ParamLimits

0xb35d,	// (0x00055531) linegrid_cam4_burst_pane_g6

0x12a7,	// (0x0004b47b) linegrid_cam4_burst_pane_g7_ParamLimits

0x12a7,	// (0x0004b47b) linegrid_cam4_burst_pane_g7

0xb374,	// (0x00055548) cell_cam4_burst_pane_g1

0x12c0,	// (0x0004b494) main_cam5_pane_t1_ParamLimits

0x12c0,	// (0x0004b494) main_cam5_pane_t1

0x12d2,	// (0x0004b4a6) main_cam5_pane_t2_ParamLimits

0x12d2,	// (0x0004b4a6) main_cam5_pane_t2

0x12e4,	// (0x0004b4b8) main_cam5_pane_t3_ParamLimits

0x12e4,	// (0x0004b4b8) main_cam5_pane_t3

0x12f6,	// (0x0004b4ca) main_cam5_pane_t4_ParamLimits

0x12f6,	// (0x0004b4ca) main_cam5_pane_t4

0x130e,	// (0x0004b4e2) main_cam5_pane_t5_ParamLimits

0x130e,	// (0x0004b4e2) main_cam5_pane_t5

0x1322,	// (0x0004b4f6) main_cam5_pane_t6_ParamLimits

0x1322,	// (0x0004b4f6) main_cam5_pane_t6

0x1336,	// (0x0004b50a) main_cam5_pane_t7_ParamLimits

0x1336,	// (0x0004b50a) main_cam5_pane_t7

0x1348,	// (0x0004b51c) main_cam5_pane_t8_ParamLimits

0x1348,	// (0x0004b51c) main_cam5_pane_t8

0x1366,	// (0x0004b53a) main_cam5_pane_t9_ParamLimits

0x1366,	// (0x0004b53a) main_cam5_pane_t9

0x1378,	// (0x0004b54c) main_cam5_pane_t10_ParamLimits

0x1378,	// (0x0004b54c) main_cam5_pane_t10

0x138a,	// (0x0004b55e) main_cam5_pane_t11_ParamLimits

0x138a,	// (0x0004b55e) main_cam5_pane_t11

0x139e,	// (0x0004b572) main_cam5_pane_t12_ParamLimits

0x139e,	// (0x0004b572) main_cam5_pane_t12

0x13b5,	// (0x0004b589) main_cam5_pane_t13_ParamLimits

0x13b5,	// (0x0004b589) main_cam5_pane_t13

0x000c,

0xf9cf,	// (0x00059ba3) main_cam5_pane_t_ParamLimits

0xf9cf,	// (0x00059ba3) main_cam5_pane_t

0x5bdc,	// (0x0004fdb0) popup_scut_keymap_window_ParamLimits

0x5bdc,	// (0x0004fdb0) popup_scut_keymap_window

0xb387,	// (0x0005555b) aid_size_cell_brow_shortcut

0x377d,	// (0x0004d951) bg_popup_window_pane_cp010

0xb393,	// (0x00055567) grid_scut_pane

0xb39f,	// (0x00055573) cell_scut_pane_ParamLimits

0xb39f,	// (0x00055573) cell_scut_pane

0xb3ba,	// (0x0005558e) cell_scut_pane_g1

0x13d8,	// (0x0004b5ac) cell_scut_pane_t1

0x13e7,	// (0x0004b5bb) cell_scut_pane_t2

0xb3c3,	// (0x00055597) cell_scut_pane_t3

0x0002,

0xf9ea,	// (0x00059bbe) cell_scut_pane_t

0x933f,	// (0x00053513) main_mup3_pane_g8_ParamLimits

0x933f,	// (0x00053513) main_mup3_pane_g8

0xa644,	// (0x00054818) area_vitu2_query_pane_ParamLimits

0xa644,	// (0x00054818) area_vitu2_query_pane

0xb111,	// (0x000552e5) input_focus_pane_cp08

0x13f6,	// (0x0004b5ca) area_vitu2_query_pane_g1

0xb3d1,	// (0x000555a5) area_vitu2_query_pane_g2

0x0001,

0xf9f1,	// (0x00059bc5) area_vitu2_query_pane_g

0xb3e2,	// (0x000555b6) area_vitu2_query_pane_t1_ParamLimits

0xb3e2,	// (0x000555b6) area_vitu2_query_pane_t1

0xb3f8,	// (0x000555cc) area_vitu2_query_pane_t2_ParamLimits

0xb3f8,	// (0x000555cc) area_vitu2_query_pane_t2

0xb40e,	// (0x000555e2) area_vitu2_query_pane_t3_ParamLimits

0xb40e,	// (0x000555e2) area_vitu2_query_pane_t3

0x1402,	// (0x0004b5d6) area_vitu2_query_pane_t4_ParamLimits

0x1402,	// (0x0004b5d6) area_vitu2_query_pane_t4

0x142a,	// (0x0004b5fe) area_vitu2_query_pane_t5_ParamLimits

0x142a,	// (0x0004b5fe) area_vitu2_query_pane_t5

0x1452,	// (0x0004b626) area_vitu2_query_pane_t6_ParamLimits

0x1452,	// (0x0004b626) area_vitu2_query_pane_t6

0x0006,

0xf9f6,	// (0x00059bca) area_vitu2_query_pane_t_ParamLimits

0xf9f6,	// (0x00059bca) area_vitu2_query_pane_t

0xb436,	// (0x0005560a) bg_button_pane_cp018

0xb444,	// (0x00055618) bg_button_pane_cp021

0xb450,	// (0x00055624) bg_button_pane_cp022

0xb461,	// (0x00055635) input_focus_pane_cp09

0x7d92,	// (0x00051f66) aid_size_touch_mv_arrow_left

0x7dbd,	// (0x00051f91) aid_size_touch_mv_arrow_right

0xac10,	// (0x00054de4) main_cset_slider_pane_g16_ParamLimits

0xac10,	// (0x00054de4) main_cset_slider_pane_g16

0xac1c,	// (0x00054df0) main_cset_slider_pane_g17_ParamLimits

0xac1c,	// (0x00054df0) main_cset_slider_pane_g17

0xb374,	// (0x00055548) cell_cam4_burst_pane_g1_ParamLimits

0x2e37,	// (0x0004d00b) compa_mode_pane

0xae3d,	// (0x00055011) popup_vtel_slider_window_g3_ParamLimits

0xae3d,	// (0x00055011) popup_vtel_slider_window_g3

0xae51,	// (0x00055025) popup_vtel_slider_window_g4_ParamLimits

0xae51,	// (0x00055025) popup_vtel_slider_window_g4

0xae65,	// (0x00055039) popup_vtel_slider_window_t1_ParamLimits

0xae65,	// (0x00055039) popup_vtel_slider_window_t1

0x5c37,	// (0x0004fe0b) main_cl_pane

0x8b08,	// (0x00052cdc) popup_imed_adjust2_window_ParamLimits

0x4a3e,	// (0x0004ec12) bg_tb_trans_pane_cp05_ParamLimits

0xf026,	// (0x000591fa) popup_imed_adjust2_window_g1_ParamLimits

0xf035,	// (0x00059209) popup_imed_adjust2_window_g2_ParamLimits

0xf035,	// (0x00059209) popup_imed_adjust2_window_g2

0xf041,	// (0x00059215) popup_imed_adjust2_window_g3_ParamLimits

0xf041,	// (0x00059215) popup_imed_adjust2_window_g3

0x0002,

0xf76c,	// (0x00059940) popup_imed_adjust2_window_g_ParamLimits

0xf76c,	// (0x00059940) popup_imed_adjust2_window_g

0xf04d,	// (0x00059221) popup_imed_adjust2_window_t1_ParamLimits

0xf065,	// (0x00059239) slider_imed_adjust_pane_ParamLimits

0x07e5,	// (0x0004a9b9) slider_imed_adjust_pane_g1_ParamLimits

0x07f5,	// (0x0004a9c9) slider_imed_adjust_pane_g2_ParamLimits

0x0805,	// (0x0004a9d9) slider_imed_adjust_pane_g3_ParamLimits

0x0816,	// (0x0004a9ea) slider_imed_adjust_pane_g4_ParamLimits

0xf773,	// (0x00059947) slider_imed_adjust_pane_g_ParamLimits

0xa397,	// (0x0005456b) aid_touch_area_cam4_ParamLimits

0xa397,	// (0x0005456b) aid_touch_area_cam4

0xa3a7,	// (0x0005457b) battery_pane_cp01

0xa42e,	// (0x00054602) main_camera4_pane_g6_ParamLimits

0xa42e,	// (0x00054602) main_camera4_pane_g6

0xa44c,	// (0x00054620) main_camera4_pane_t2_ParamLimits

0xa44c,	// (0x00054620) main_camera4_pane_t2

0x0001,

0xf875,	// (0x00059a49) main_camera4_pane_t_ParamLimits

0xf875,	// (0x00059a49) main_camera4_pane_t

0xa4cf,	// (0x000546a3) aid_touch_area_vid4_ParamLimits

0xa4cf,	// (0x000546a3) aid_touch_area_vid4

0xa50f,	// (0x000546e3) main_video4_pane_g5_ParamLimits

0xa50f,	// (0x000546e3) main_video4_pane_g5

0xa535,	// (0x00054709) vid4_progress_pane_ParamLimits

0xa535,	// (0x00054709) vid4_progress_pane

0x10d1,	// (0x0004b2a5) main_cset_slider_pane_g18_ParamLimits

0x10d1,	// (0x0004b2a5) main_cset_slider_pane_g18

0x12b4,	// (0x0004b488) cell_cam4_burst_pane_g2_ParamLimits

0x12b4,	// (0x0004b488) cell_cam4_burst_pane_g2

0x0001,

0xf9ca,	// (0x00059b9e) cell_cam4_burst_pane_g_ParamLimits

0xf9ca,	// (0x00059b9e) cell_cam4_burst_pane_g

0xb472,	// (0x00055646) bg_cl_pane_ParamLimits

0xb472,	// (0x00055646) bg_cl_pane

0xb47e,	// (0x00055652) cl_header_pane_ParamLimits

0xb47e,	// (0x00055652) cl_header_pane

0xb48a,	// (0x0005565e) cl_listscroll_pane_ParamLimits

0xb48a,	// (0x0005565e) cl_listscroll_pane

0x149e,	// (0x0004b672) bg_cl_pane_g1

0x14a6,	// (0x0004b67a) bg_cl_pane_g2

0x14ae,	// (0x0004b682) bg_cl_pane_g3

0x14b6,	// (0x0004b68a) bg_cl_pane_g4

0x14be,	// (0x0004b692) bg_cl_pane_g5

0x14c6,	// (0x0004b69a) bg_cl_pane_g6

0x14ce,	// (0x0004b6a2) bg_cl_pane_g7

0x14d6,	// (0x0004b6aa) bg_cl_pane_g8

0x14de,	// (0x0004b6b2) bg_cl_pane_g9

0x0008,

0xfa05,	// (0x00059bd9) bg_cl_pane_g

0xb496,	// (0x0005566a) aid_height_cl_leading_ParamLimits

0xb496,	// (0x0005566a) aid_height_cl_leading

0xb4a2,	// (0x00055676) aid_height_cl_text_ParamLimits

0xb4a2,	// (0x00055676) aid_height_cl_text

0x2e74,	// (0x0004d048) bg_cl_header_pane_ParamLimits

0x2e74,	// (0x0004d048) bg_cl_header_pane

0xb4ba,	// (0x0005568e) cl_header_pane_g1_ParamLimits

0xb4ba,	// (0x0005568e) cl_header_pane_g1

0xb4c7,	// (0x0005569b) cl_header_pane_t1_ParamLimits

0xb4c7,	// (0x0005569b) cl_header_pane_t1

0x14e6,	// (0x0004b6ba) cl_list_pane

0x10a4,	// (0x0004b278) hc_scroll_pane_cp01

0x39bc,	// (0x0004db90) bg_cl_header_pane_g1

0x0f86,	// (0x0004b15a) bg_cl_header_pane_g2

0x39dc,	// (0x0004dbb0) bg_cl_header_pane_g3

0x0f96,	// (0x0004b16a) bg_cl_header_pane_g4

0x0f8e,	// (0x0004b162) bg_cl_header_pane_g5

0x11c3,	// (0x0004b397) bg_cl_header_pane_g6

0x0fae,	// (0x0004b182) bg_cl_header_pane_g7

0x0fb6,	// (0x0004b18a) bg_cl_header_pane_g8

0x0fa6,	// (0x0004b17a) bg_cl_header_pane_g9

0x0008,

0xfa18,	// (0x00059bec) bg_cl_header_pane_g

0xb4d9,	// (0x000556ad) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb4d9,	// (0x000556ad) hc_cl_list_double_graphic_heading_pane

0xb4e9,	// (0x000556bd) hc_cl_list_single_graphic_pane_ParamLimits

0xb4e9,	// (0x000556bd) hc_cl_list_single_graphic_pane

0xb4fb,	// (0x000556cf) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb4fb,	// (0x000556cf) hc_cl_list_single_graphic_pane_g1

0xb507,	// (0x000556db) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb507,	// (0x000556db) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa2b,	// (0x00059bff) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa2b,	// (0x00059bff) hc_cl_list_single_graphic_pane_g

0xb51b,	// (0x000556ef) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb51b,	// (0x000556ef) hc_cl_list_single_graphic_pane_t1

0xb4fb,	// (0x000556cf) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb4fb,	// (0x000556cf) hc_cl_list_double_graphic_heading_pane_g1

0xb530,	// (0x00055704) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb530,	// (0x00055704) hc_cl_list_double_graphic_heading_pane_g2

0xb544,	// (0x00055718) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb544,	// (0x00055718) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa30,	// (0x00059c04) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa30,	// (0x00059c04) hc_cl_list_double_graphic_heading_pane_g

0xb558,	// (0x0005572c) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb558,	// (0x0005572c) hc_cl_list_double_graphic_heading_pane_t1

0xb56d,	// (0x00055741) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb56d,	// (0x00055741) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa37,	// (0x00059c0b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa37,	// (0x00059c0b) hc_cl_list_double_graphic_heading_pane_t

0xb58a,	// (0x0005575e) vid4_progress_pane_g1

0xb59a,	// (0x0005576e) vid4_progress_pane_g2

0xb5aa,	// (0x0005577e) vid4_progress_pane_g3

0xb5bc,	// (0x00055790) vid4_progress_pane_g4

0x0004,

0xfa3c,	// (0x00059c10) vid4_progress_pane_g

0xb5da,	// (0x000557ae) vid4_progress_pane_t1

0xb5f4,	// (0x000557c8) vid4_progress_pane_t2

0x0002,

0xfa47,	// (0x00059c1b) vid4_progress_pane_t

0xb61e,	// (0x000557f2) wait_bar_pane_cp07

0xe97b,	// (0x00058b4f) blid_firmament_pane_ParamLimits

0xe9be,	// (0x00058b92) popup_blid_sat_info2_window_g1

0xe9e2,	// (0x00058bb6) popup_blid_sat_info2_window_t3

0xe9f0,	// (0x00058bc4) popup_blid_sat_info2_window_t4

0xe9fe,	// (0x00058bd2) popup_blid_sat_info2_window_t5

0xea0c,	// (0x00058be0) popup_blid_sat_info2_window_t6

0xea1c,	// (0x00058bf0) popup_blid_sat_info2_window_t7

0xea2a,	// (0x00058bfe) popup_blid_sat_info2_window_t8

0xea38,	// (0x00058c0c) popup_blid_sat_info2_window_t9

0xea46,	// (0x00058c1a) popup_blid_sat_info2_window_t10

0xeb0d,	// (0x00058ce1) aid_firma_cardinal_ParamLimits

0xeb21,	// (0x00058cf5) blid_firmament_pane_t1_ParamLimits

0xeb38,	// (0x00058d0c) blid_firmament_pane_t2_ParamLimits

0xeb4f,	// (0x00058d23) blid_firmament_pane_t3_ParamLimits

0xeb66,	// (0x00058d3a) blid_firmament_pane_t4_ParamLimits

0xf665,	// (0x00059839) blid_firmament_pane_t_ParamLimits

0xeb7d,	// (0x00058d51) blid_sat_info_pane_ParamLimits

0x8a52,	// (0x00052c26) main_cam_set_pane_ParamLimits

0x9a09,	// (0x00053bdd) aid_size_cell_colour_35_ParamLimits

0x9a23,	// (0x00053bf7) aid_size_cell_colour_112_ParamLimits

0x9a3a,	// (0x00053c0e) aid_size_cell_effect_ParamLimits

0x3514,	// (0x0004d6e8) bg_tb_trans_pane_cp02_ParamLimits

0x4a10,	// (0x0004ebe4) heading_imed_pane_ParamLimits

0x9a54,	// (0x00053c28) listscroll_imed_pane_ParamLimits

0xde57,	// (0x0005802b) popup_call2_audio_first_window_g5_ParamLimits

0xde57,	// (0x0005802b) popup_call2_audio_first_window_g5

0xa077,	// (0x0005424b) aid_size_touch_image3_arrow_left_ParamLimits

0xa077,	// (0x0005424b) aid_size_touch_image3_arrow_left

0xa08d,	// (0x00054261) aid_size_touch_image3_arrow_right_ParamLimits

0xa08d,	// (0x00054261) aid_size_touch_image3_arrow_right

0xb609,	// (0x000557dd) vid4_progress_pane_t3

0x9bcf,	// (0x00053da3) main_hwr_training_symbol_option_pane_ParamLimits

0x9bcf,	// (0x00053da3) main_hwr_training_symbol_option_pane

0x09d7,	// (0x0004abab) popup_hwr_training_preview_window_ParamLimits

0x09d7,	// (0x0004abab) popup_hwr_training_preview_window

0x9c30,	// (0x00053e04) hwr_training_navi_pane_g5_ParamLimits

0x9c30,	// (0x00053e04) hwr_training_navi_pane_g5

0x0f74,	// (0x0004b148) popup_char_count_window

0x5c1d,	// (0x0004fdf1) bg_popup_sub_pane_cp20_ParamLimits

0xaf58,	// (0x0005512c) list_vitu2_match_list_pane_ParamLimits

0xaf64,	// (0x00055138) vitu2_page_scroll_pane_ParamLimits

0xaf64,	// (0x00055138) vitu2_page_scroll_pane

0x1511,	// (0x0004b6e5) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1511,	// (0x0004b6e5) list_single_hwr_training_symbol_option_pane

0x1524,	// (0x0004b6f8) list_single_hwr_training_symbol_option_pane_g1

0x152c,	// (0x0004b700) list_single_hwr_training_symbol_option_pane_t1

0x153a,	// (0x0004b70e) bg_button_pane_cp023

0x1543,	// (0x0004b717) bg_button_pane_cp024

0x1576,	// (0x0004b74a) vitu2_page_scroll_pane_g1

0x157e,	// (0x0004b752) vitu2_page_scroll_pane_g2

0x0001,

0xfa4e,	// (0x00059c22) vitu2_page_scroll_pane_g

0x1586,	// (0x0004b75a) vitu2_page_scroll_pane_t1

0x1595,	// (0x0004b769) popup_char_count_window_g1

0x159e,	// (0x0004b772) popup_char_count_window_g2

0x15a7,	// (0x0004b77b) popup_char_count_window_g3

0x0002,

0xfa53,	// (0x00059c27) popup_char_count_window_g

0x15b0,	// (0x0004b784) popup_char_count_window_t1

0x5c37,	// (0x0004fe0b) main_vded2_pane

0xf012,	// (0x000591e6) aid_size_cell_imed_line

0xf01c,	// (0x000591f0) grid_imed_line_width_pane

0xa5a9,	// (0x0005477d) vid4_indicators_pane_g4

0x15be,	// (0x0004b792) cell_imed_line_width_pane_ParamLimits

0x15be,	// (0x0004b792) cell_imed_line_width_pane

0x15d4,	// (0x0004b7a8) cell_imed_line_width_pane_g1

0x15dd,	// (0x0004b7b1) cell_imed_line_width_pane_g2

0x0001,

0xfa5a,	// (0x00059c2e) cell_imed_line_width_pane_g

0xb645,	// (0x00055819) main_vded2_pane_g1_ParamLimits

0xb645,	// (0x00055819) main_vded2_pane_g1

0xb654,	// (0x00055828) main_vded2_pane_g2_ParamLimits

0xb654,	// (0x00055828) main_vded2_pane_g2

0x0001,

0xfa5f,	// (0x00059c33) main_vded2_pane_g_ParamLimits

0xfa5f,	// (0x00059c33) main_vded2_pane_g

0xb662,	// (0x00055836) vded2_slider_pane_ParamLimits

0xb662,	// (0x00055836) vded2_slider_pane

0xb66f,	// (0x00055843) aid_size_touch_vded2_end

0xb679,	// (0x0005584d) aid_size_touch_vded2_playhead

0x15e5,	// (0x0004b7b9) aid_size_touch_vded2_start

0x15ed,	// (0x0004b7c1) vded2_slider_bg_pane

0x15f6,	// (0x0004b7ca) vded2_slider_pane_g1

0x15ff,	// (0x0004b7d3) vded2_slider_pane_g2

0xb681,	// (0x00055855) vded2_slider_pane_g3

0x0002,

0xfa64,	// (0x00059c38) vded2_slider_pane_g

0x1607,	// (0x0004b7db) vded2_slider_bg_pane_g1

0x1610,	// (0x0004b7e4) vded2_slider_bg_pane_g2

0x1619,	// (0x0004b7ed) vded2_slider_bg_pane_g3

0x0002,

0xf730,	// (0x00059904) vded2_slider_bg_pane_g

0x82d7,	// (0x000524ab) aid_postcard_touch_down_pane_ParamLimits

0x82d7,	// (0x000524ab) aid_postcard_touch_down_pane

0x82e7,	// (0x000524bb) aid_postcard_touch_up_pane_ParamLimits

0x82e7,	// (0x000524bb) aid_postcard_touch_up_pane

0x5c37,	// (0x0004fe0b) main_blid2_pane

0x8a87,	// (0x00052c5b) popup_blid2_search_window

0x2e37,	// (0x0004d00b) blid2_gps_pane

0x2e37,	// (0x0004d00b) blid2_navig_pane

0x2e37,	// (0x0004d00b) blid2_search_pane

0x2e37,	// (0x0004d00b) blid2_tripm_pane

0xb68a,	// (0x0005585e) blid2_search_pane_g1_ParamLimits

0xb68a,	// (0x0005585e) blid2_search_pane_g1

0xb696,	// (0x0005586a) blid2_search_pane_t1_ParamLimits

0xb696,	// (0x0005586a) blid2_search_pane_t1

0xb6a8,	// (0x0005587c) aid_size_cell_blid2_gps_ParamLimits

0xb6a8,	// (0x0005587c) aid_size_cell_blid2_gps

0xb6b8,	// (0x0005588c) blid2_gps_pane_g1_ParamLimits

0xb6b8,	// (0x0005588c) blid2_gps_pane_g1

0xb6c4,	// (0x00055898) grid_blid2_satellite_pane_ParamLimits

0xb6c4,	// (0x00055898) grid_blid2_satellite_pane

0xb6d2,	// (0x000558a6) blid2_navig_pane_g1_ParamLimits

0xb6d2,	// (0x000558a6) blid2_navig_pane_g1

0xb6de,	// (0x000558b2) blid2_navig_pane_t1_ParamLimits

0xb6de,	// (0x000558b2) blid2_navig_pane_t1

0xb6f0,	// (0x000558c4) blid2_navig_pane_t2_ParamLimits

0xb6f0,	// (0x000558c4) blid2_navig_pane_t2

0x0001,

0xfa6b,	// (0x00059c3f) blid2_navig_pane_t_ParamLimits

0xfa6b,	// (0x00059c3f) blid2_navig_pane_t

0xb702,	// (0x000558d6) blid2_navig_ring_pane_ParamLimits

0xb702,	// (0x000558d6) blid2_navig_ring_pane

0xb712,	// (0x000558e6) blid2_speed_pane_ParamLimits

0xb712,	// (0x000558e6) blid2_speed_pane

0xb71e,	// (0x000558f2) blid2_tripm_pane_g1_ParamLimits

0xb71e,	// (0x000558f2) blid2_tripm_pane_g1

0xb72e,	// (0x00055902) blid2_tripm_pane_g2_ParamLimits

0xb72e,	// (0x00055902) blid2_tripm_pane_g2

0xb73a,	// (0x0005590e) blid2_tripm_pane_g3_ParamLimits

0xb73a,	// (0x0005590e) blid2_tripm_pane_g3

0xb746,	// (0x0005591a) blid2_tripm_pane_g4_ParamLimits

0xb746,	// (0x0005591a) blid2_tripm_pane_g4

0xb752,	// (0x00055926) blid2_tripm_pane_g5_ParamLimits

0xb752,	// (0x00055926) blid2_tripm_pane_g5

0x0005,

0xfa70,	// (0x00059c44) blid2_tripm_pane_g_ParamLimits

0xfa70,	// (0x00059c44) blid2_tripm_pane_g

0xb76e,	// (0x00055942) blid2_tripm_pane_t1_ParamLimits

0xb76e,	// (0x00055942) blid2_tripm_pane_t1

0xb780,	// (0x00055954) blid2_tripm_pane_t2_ParamLimits

0xb780,	// (0x00055954) blid2_tripm_pane_t2

0xb792,	// (0x00055966) blid2_tripm_pane_t3_ParamLimits

0xb792,	// (0x00055966) blid2_tripm_pane_t3

0x0003,

0xfa7d,	// (0x00059c51) blid2_tripm_pane_t_ParamLimits

0xfa7d,	// (0x00059c51) blid2_tripm_pane_t

0xb7c4,	// (0x00055998) cell_blid2_satellite_pane_ParamLimits

0xb7c4,	// (0x00055998) cell_blid2_satellite_pane

0xb7e2,	// (0x000559b6) cell_blid2_satellite_pane_g1

0x1622,	// (0x0004b7f6) cell_blid2_satellite_pane_t1

0x37c7,	// (0x0004d99b) blid2_speed_pane_g1

0x1630,	// (0x0004b804) blid2_speed_pane_t1

0x163e,	// (0x0004b812) blid2_speed_pane_t2

0x0001,

0xfa86,	// (0x00059c5a) blid2_speed_pane_t

0x37c7,	// (0x0004d99b) blid2_navig_ring_pane_g1

0xb7eb,	// (0x000559bf) blid2_navig_ring_pane_g2

0xb7f3,	// (0x000559c7) blid2_navig_ring_pane_g3

0xb7fb,	// (0x000559cf) blid2_navig_ring_pane_g4

0xb803,	// (0x000559d7) blid2_navig_ring_pane_g5

0x0004,

0xfa8b,	// (0x00059c5f) blid2_navig_ring_pane_g

0x2e37,	// (0x0004d00b) bg_popup_window_pane_cp011

0x164c,	// (0x0004b820) popup_blid2_search_window_g1

0x1654,	// (0x0004b828) popup_blid2_search_window_t1

0x1662,	// (0x0004b836) popup_blid2_search_window_t2

0x0001,

0xfa96,	// (0x00059c6a) popup_blid2_search_window_t

0x38cb,	// (0x0004da9f) main_browser_pane_g1

0x35df,	// (0x0004d7b3) main_browser_pane_ParamLimits

0x8a52,	// (0x00052c26) bg_button_pane_cp011_ParamLimits

0xa823,	// (0x000549f7) cell_vitu2_function_pane_g1_ParamLimits

0x4a3e,	// (0x0004ec12) bg_popup_sub_pane_cp22_ParamLimits

0xb111,	// (0x000552e5) input_focus_pane_cp08_ParamLimits

0xb128,	// (0x000552fc) popup_vitu2_query_button_pane_ParamLimits

0xb128,	// (0x000552fc) popup_vitu2_query_button_pane

0xb139,	// (0x0005530d) popup_vitu2_query_input_button_pane

0x11fe,	// (0x0004b3d2) popup_vitu2_query_window_g1_ParamLimits

0xb143,	// (0x00055317) popup_vitu2_query_window_g2_ParamLimits

0xf99e,	// (0x00059b72) popup_vitu2_query_window_g_ParamLimits

0x2e37,	// (0x0004d00b) bg_button_pane_cp026

0xb80b,	// (0x000559df) popup_vitu2_query_input_button_pane_g1

0x2e37,	// (0x0004d00b) bg_button_pane_cp025

0x1670,	// (0x0004b844) popup_vitu2_query_button_pane_t1

0x8fa5,	// (0x00053179) main_mp3_pane_t6

0x8fb5,	// (0x00053189) popup_slider_window_cp01

0xa484,	// (0x00054658) cam4_battery_pane

0xa562,	// (0x00054736) cam4_battery_pane_cp02

0xb582,	// (0x00055756) cam4_battery_pane_cp01

0xb582,	// (0x00055756) cam4_battery_pane_cp03

0xe8f0,	// (0x00058ac4) cam4_battery_pane_g1

0x37c7,	// (0x0004d99b) cam4_battery_pane_g2

0x0001,

0xfa9b,	// (0x00059c6f) cam4_battery_pane_g

0xea54,	// (0x00058c28) popup_blid_sat_info2_window_t11

0x7d92,	// (0x00051f66) aid_size_touch_mv_arrow_left_ParamLimits

0x7dbd,	// (0x00051f91) aid_size_touch_mv_arrow_right_ParamLimits

0x4031,	// (0x0004e205) navi_pane_g1_ParamLimits

0x7dfc,	// (0x00051fd0) navi_pane_g2_ParamLimits

0x7e2a,	// (0x00051ffe) navi_pane_g3_ParamLimits

0xf379,	// (0x0005954d) navi_pane_g_ParamLimits

0x7e84,	// (0x00052058) navi_pane_mv_t1_ParamLimits

0x9a60,	// (0x00053c34) grid_imed_effect_pane_ParamLimits

0x6915,	// (0x00050ae9) aid_placing_vt_slider_lsc

0x3816,	// (0x0004d9ea) aid_placing_vt_slider_prt

0x3514,	// (0x0004d6e8) bg_tb_trans_pane_cp01_ParamLimits

0xecbc,	// (0x00058e90) popup_image_details_window_g1_ParamLimits

0xeccf,	// (0x00058ea3) popup_image_details_window_g2_ParamLimits

0xece4,	// (0x00058eb8) popup_image_details_window_g3_ParamLimits

0xece4,	// (0x00058eb8) popup_image_details_window_g3

0xf6a5,	// (0x00059879) popup_image_details_window_g_ParamLimits

0xecf8,	// (0x00058ecc) popup_image_details_window_t1_ParamLimits

0xed0a,	// (0x00058ede) popup_image_details_window_t2_ParamLimits

0xed23,	// (0x00058ef7) popup_image_details_window_t3_ParamLimits

0xed37,	// (0x00058f0b) popup_image_details_window_t4_ParamLimits

0xed52,	// (0x00058f26) popup_image_details_window_t5_ParamLimits

0xf6ac,	// (0x00059880) popup_image_details_window_t_ParamLimits

0xb4ae,	// (0x00055682) cl_header_name_pane_ParamLimits

0xb4ae,	// (0x00055682) cl_header_name_pane

0xb813,	// (0x000559e7) cl_header_name_pane_t1_ParamLimits

0xb813,	// (0x000559e7) cl_header_name_pane_t1

0xb82a,	// (0x000559fe) cl_header_name_pane_t2_ParamLimits

0xb82a,	// (0x000559fe) cl_header_name_pane_t2

0xb854,	// (0x00055a28) cl_header_name_pane_t3_ParamLimits

0xb854,	// (0x00055a28) cl_header_name_pane_t3

0x0002,

0xfaa0,	// (0x00059c74) cl_header_name_pane_t_ParamLimits

0xfaa0,	// (0x00059c74) cl_header_name_pane_t

0x7e55,	// (0x00052029) navi_pane_mv_g2_ParamLimits

0x0f3f,	// (0x0004b113) field_vitu2_entry_pane_g1_ParamLimits

0x0f4b,	// (0x0004b11f) field_vitu2_entry_pane_g2_ParamLimits

0x4a1c,	// (0x0004ebf0) field_vitu2_entry_pane_g3_ParamLimits

0x4a1c,	// (0x0004ebf0) field_vitu2_entry_pane_g3

0xf8a7,	// (0x00059a7b) field_vitu2_entry_pane_g_ParamLimits

0xa7b1,	// (0x00054985) cell_vitu2_itu_pane_g1_ParamLimits

0xa7c9,	// (0x0005499d) cell_vitu2_itu_pane_g2_ParamLimits

0xa7c9,	// (0x0005499d) cell_vitu2_itu_pane_g2

0x0001,

0xf8b3,	// (0x00059a87) cell_vitu2_itu_pane_g_ParamLimits

0xf8b3,	// (0x00059a87) cell_vitu2_itu_pane_g

0x8a52,	// (0x00052c26) bg_vkb2_func_pane_cp05_ParamLimits

0x8a52,	// (0x00052c26) bg_vkb2_func_pane_cp05

0x8a52,	// (0x00052c26) bg_vkb2_func_pane_cp03

0x8a52,	// (0x00052c26) bg_vkb2_func_pane_cp04

0x8a52,	// (0x00052c26) bg_vkb2_func_pane_cp10_ParamLimits

0x8a52,	// (0x00052c26) bg_vkb2_func_pane_cp10

0xb450,	// (0x00055624) bg_vkb2_func_pane_cp08

0xb436,	// (0x0005560a) bg_vkb2_func_pane_cp06

0xb444,	// (0x00055618) bg_vkb2_func_pane_cp07

0x154c,	// (0x0004b720) bg_vkb2_func_pane_cp11_ParamLimits

0x154c,	// (0x0004b720) bg_vkb2_func_pane_cp11

0x1561,	// (0x0004b735) bg_vkb2_func_pane_cp12_ParamLimits

0x1561,	// (0x0004b735) bg_vkb2_func_pane_cp12

0x2e37,	// (0x0004d00b) bg_vkb2_func_pane_cp09

0x0f86,	// (0x0004b15a) bg_vkb2_func_pane_g1

0x39dc,	// (0x0004dbb0) bg_vkb2_func_pane_g2

0x0f8e,	// (0x0004b162) bg_vkb2_func_pane_g3

0x0f96,	// (0x0004b16a) bg_vkb2_func_pane_g4

0x11c3,	// (0x0004b397) bg_vkb2_func_pane_g5

0x0fae,	// (0x0004b182) bg_vkb2_func_pane_g6

0x0fb6,	// (0x0004b18a) bg_vkb2_func_pane_g7

0x0fa6,	// (0x0004b17a) bg_vkb2_func_pane_g8

0x39bc,	// (0x0004db90) bg_vkb2_func_pane_g9

0x0008,

0xfaa7,	// (0x00059c7b) bg_vkb2_func_pane_g

0xb760,	// (0x00055934) blid2_tripm_pane_g6_ParamLimits

0xb760,	// (0x00055934) blid2_tripm_pane_g6

0x0d0a,	// (0x0004aede) mp4_progress_pane_g1

0xb7b8,	// (0x0005598c) blid2_tripm_values_pane_ParamLimits

0xb7b8,	// (0x0005598c) blid2_tripm_values_pane

0xb879,	// (0x00055a4d) blid2_tripm_values_pane_t1

0xb887,	// (0x00055a5b) blid2_tripm_values_pane_t2

0xb895,	// (0x00055a69) blid2_tripm_values_pane_t3

0xb8a3,	// (0x00055a77) blid2_tripm_values_pane_t4

0xb8b1,	// (0x00055a85) blid2_tripm_values_pane_t5

0xb8bf,	// (0x00055a93) blid2_tripm_values_pane_t6

0xb8cd,	// (0x00055aa1) blid2_tripm_values_pane_t7

0xb8db,	// (0x00055aaf) blid2_tripm_values_pane_t8

0xb8e9,	// (0x00055abd) blid2_tripm_values_pane_t9

0x0008,

0xfaba,	// (0x00059c8e) blid2_tripm_values_pane_t

0x6953,	// (0x00050b27) call_video_pane_t1_ParamLimits

0x6970,	// (0x00050b44) call_video_pane_t2_ParamLimits

0xf222,	// (0x000593f6) call_video_pane_t_ParamLimits

0x8191,	// (0x00052365) msg_header_pane_g1_ParamLimits

0x4231,	// (0x0004e405) msg_header_pane_g2_ParamLimits

0x4231,	// (0x0004e405) msg_header_pane_g2

0x0001,

0xf41c,	// (0x000595f0) msg_header_pane_g_ParamLimits

0xf41c,	// (0x000595f0) msg_header_pane_g

0x35df,	// (0x0004d7b3) main_clock2_pane_ParamLimits

0x97d9,	// (0x000539ad) grid_clock2_toolbar_pane_ParamLimits

0x97d9,	// (0x000539ad) grid_clock2_toolbar_pane

0x97d9,	// (0x000539ad) listscroll_clock2_pane_ParamLimits

0x97d9,	// (0x000539ad) listscroll_clock2_pane

0x9888,	// (0x00053a5c) main_clock2_pane_t3_ParamLimits

0x9888,	// (0x00053a5c) main_clock2_pane_t3

0x989a,	// (0x00053a6e) main_clock2_pane_t4_ParamLimits

0x989a,	// (0x00053a6e) main_clock2_pane_t4

0x167e,	// (0x0004b852) cell_clock2_toolbar_pane

0x1686,	// (0x0004b85a) cell_clock2_toolbar_pane_cp01

0x1686,	// (0x0004b85a) cell_clock2_toolbar_pane_cp02

0x168e,	// (0x0004b862) cell_clock2_toolbar_pane_cp03

0x1696,	// (0x0004b86a) list_clock2_pane

0x3f97,	// (0x0004e16b) scroll_pane_cp10

0x169e,	// (0x0004b872) list_single_clock2_pane_ParamLimits

0x169e,	// (0x0004b872) list_single_clock2_pane

0x377d,	// (0x0004d951) list_highlight_pane_cp08

0x16ab,	// (0x0004b87f) list_single_clock2_pane_t1

0x16b9,	// (0x0004b88d) list_single_clock2_pane_t2

0x0001,

0xfacd,	// (0x00059ca1) list_single_clock2_pane_t

0x2e37,	// (0x0004d00b) bg_button_pane_cp10

0x16c7,	// (0x0004b89b) cell_clock2_toolbar_pane_g1

0x8239,	// (0x0005240d) aid_main_viewer_pane_g1_ParamLimits

0x8239,	// (0x0005240d) aid_main_viewer_pane_g1

0x8245,	// (0x00052419) aid_main_viewer_pane_g2_ParamLimits

0x8245,	// (0x00052419) aid_main_viewer_pane_g2

0x8251,	// (0x00052425) aid_main_viewer_pane_g3_ParamLimits

0x8251,	// (0x00052425) aid_main_viewer_pane_g3

0x8262,	// (0x00052436) aid_main_viewer_pane_g4_ParamLimits

0x8262,	// (0x00052436) aid_main_viewer_pane_g4

0x0003,

0xf42d,	// (0x00059601) aid_main_viewer_pane_g_ParamLimits

0xf42d,	// (0x00059601) aid_main_viewer_pane_g

0x8a33,	// (0x00052c07) main_calc_pane_ParamLimits

0x8a60,	// (0x00052c34) main_dialer2_pane_ParamLimits

0x5c37,	// (0x0004fe0b) main_cam6_pane

0x5c37,	// (0x0004fe0b) main_vid6_pane

0x97e5,	// (0x000539b9) listscroll_gen_pane_cp06_ParamLimits

0x97e5,	// (0x000539b9) listscroll_gen_pane_cp06

0x98ac,	// (0x00053a80) main_clock2_pane_t5_ParamLimits

0x98ac,	// (0x00053a80) main_clock2_pane_t5

0x98f9,	// (0x00053acd) aid_call2_pane_cp10_ParamLimits

0x990b,	// (0x00053adf) aid_call_pane_cp10_ParamLimits

0x4006,	// (0x0004e1da) popup_clock_analogue_window_cp10_g1_ParamLimits

0x4006,	// (0x0004e1da) popup_clock_analogue_window_cp10_g2_ParamLimits

0x991d,	// (0x00053af1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x991d,	// (0x00053af1) popup_clock_analogue_window_cp10_g4_ParamLimits

0x4006,	// (0x0004e1da) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf761,	// (0x00059935) popup_clock_analogue_window_cp10_g_ParamLimits

0x9933,	// (0x00053b07) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa024,	// (0x000541f8) cell_dialer2_keypad_pane_g2_ParamLimits

0xa024,	// (0x000541f8) cell_dialer2_keypad_pane_g2

0x0001,

0xf846,	// (0x00059a1a) cell_dialer2_keypad_pane_g_ParamLimits

0xf846,	// (0x00059a1a) cell_dialer2_keypad_pane_g

0xa040,	// (0x00054214) cell_dialer2_keypad_pane_t1

0xab05,	// (0x00054cd9) main_cset_text2_pane_ParamLimits

0xab05,	// (0x00054cd9) main_cset_text2_pane

0x13f6,	// (0x0004b5ca) area_vitu2_query_pane_g1_ParamLimits

0xb3d1,	// (0x000555a5) area_vitu2_query_pane_g2_ParamLimits

0xf9f1,	// (0x00059bc5) area_vitu2_query_pane_g_ParamLimits

0x147a,	// (0x0004b64e) area_vitu2_query_pane_t7_ParamLimits

0x147a,	// (0x0004b64e) area_vitu2_query_pane_t7

0xb436,	// (0x0005560a) bg_button_pane_cp018_ParamLimits

0xb444,	// (0x00055618) bg_button_pane_cp021_ParamLimits

0xb450,	// (0x00055624) bg_button_pane_cp022_ParamLimits

0xb450,	// (0x00055624) bg_vkb2_func_pane_cp08_ParamLimits

0xb436,	// (0x0005560a) bg_vkb2_func_pane_cp06_ParamLimits

0xb444,	// (0x00055618) bg_vkb2_func_pane_cp07_ParamLimits

0xb461,	// (0x00055635) input_focus_pane_cp09_ParamLimits

0xb8f7,	// (0x00055acb) cam6_autofocus_pane_ParamLimits

0xb8f7,	// (0x00055acb) cam6_autofocus_pane

0xb919,	// (0x00055aed) cam6_image_uncrop_pane_ParamLimits

0xb919,	// (0x00055aed) cam6_image_uncrop_pane

0xb946,	// (0x00055b1a) cam6_indi_pane_ParamLimits

0xb946,	// (0x00055b1a) cam6_indi_pane

0xb960,	// (0x00055b34) cam6_mode_pane_ParamLimits

0xb960,	// (0x00055b34) cam6_mode_pane

0xb974,	// (0x00055b48) cam6_timer_pane_ParamLimits

0xb974,	// (0x00055b48) cam6_timer_pane

0xb980,	// (0x00055b54) cam6_zoom_pane_ParamLimits

0xb980,	// (0x00055b54) cam6_zoom_pane

0xb99c,	// (0x00055b70) cam6_mode_pane_g1_ParamLimits

0xb99c,	// (0x00055b70) cam6_mode_pane_g1

0xb9a8,	// (0x00055b7c) cam6_mode_pane_g2_ParamLimits

0xb9a8,	// (0x00055b7c) cam6_mode_pane_g2

0xb9b4,	// (0x00055b88) cam6_mode_pane_g3_ParamLimits

0xb9b4,	// (0x00055b88) cam6_mode_pane_g3

0xb9c0,	// (0x00055b94) cam6_mode_pane_g4_ParamLimits

0xb9c0,	// (0x00055b94) cam6_mode_pane_g4

0x0003,

0xfad2,	// (0x00059ca6) cam6_mode_pane_g_ParamLimits

0xfad2,	// (0x00059ca6) cam6_mode_pane_g

0x07b5,	// (0x0004a989) bg_tb_trans_pane_cp08_ParamLimits

0x07b5,	// (0x0004a989) bg_tb_trans_pane_cp08

0x16cf,	// (0x0004b8a3) cam6_battery_pane_ParamLimits

0x16cf,	// (0x0004b8a3) cam6_battery_pane

0x16e5,	// (0x0004b8b9) cam6_indi_pane_g1_ParamLimits

0x16e5,	// (0x0004b8b9) cam6_indi_pane_g1

0x16f7,	// (0x0004b8cb) cam6_indi_pane_g2_ParamLimits

0x16f7,	// (0x0004b8cb) cam6_indi_pane_g2

0x1709,	// (0x0004b8dd) cam6_indi_pane_g3_ParamLimits

0x1709,	// (0x0004b8dd) cam6_indi_pane_g3

0x0002,

0xfadb,	// (0x00059caf) cam6_indi_pane_g_ParamLimits

0xfadb,	// (0x00059caf) cam6_indi_pane_g

0x171b,	// (0x0004b8ef) cam6_indi_pane_t1_ParamLimits

0x171b,	// (0x0004b8ef) cam6_indi_pane_t1

0xa5e6,	// (0x000547ba) cam6_autofocus_pane_g1

0xa5de,	// (0x000547b2) cam6_autofocus_pane_g2

0xa5f6,	// (0x000547ca) cam6_autofocus_pane_g3

0xa5ee,	// (0x000547c2) cam6_autofocus_pane_g4

0x0003,

0xfae2,	// (0x00059cb6) cam6_autofocus_pane_g

0x1741,	// (0x0004b915) cam6_timer_pane_g1

0x1749,	// (0x0004b91d) cam6_timer_pane_t1

0x1757,	// (0x0004b92b) cam6_zoom_cont_pane

0x175f,	// (0x0004b933) cam6_zoom_pane_g1

0x1767,	// (0x0004b93b) cam6_zoom_pane_g2

0xb9cc,	// (0x00055ba0) cam6_zoom_pane_g3

0x0002,

0xfaeb,	// (0x00059cbf) cam6_zoom_pane_g

0x37c7,	// (0x0004d99b) cam6_battery_pane_g1

0x37c7,	// (0x0004d99b) cam6_battery_pane_g2

0x0001,

0xf3dd,	// (0x000595b1) cam6_battery_pane_g

0x176f,	// (0x0004b943) cam6_zoom_cont_pane_g1

0x1778,	// (0x0004b94c) cam6_zoom_cont_pane_g2

0x1781,	// (0x0004b955) cam6_zoom_cont_pane_g3

0x0002,

0xfaf2,	// (0x00059cc6) cam6_zoom_cont_pane_g

0xb9e9,	// (0x00055bbd) cam6_mode_pane_cp_ParamLimits

0xb9e9,	// (0x00055bbd) cam6_mode_pane_cp

0xb9fd,	// (0x00055bd1) cam6_zoom_pane_cp_ParamLimits

0xb9fd,	// (0x00055bd1) cam6_zoom_pane_cp

0xba19,	// (0x00055bed) vid6_image_uncrop_cif_pane_ParamLimits

0xba19,	// (0x00055bed) vid6_image_uncrop_cif_pane

0xba45,	// (0x00055c19) vid6_image_uncrop_nhd_pane_ParamLimits

0xba45,	// (0x00055c19) vid6_image_uncrop_nhd_pane

0xba64,	// (0x00055c38) vid6_image_uncrop_vga_pane_ParamLimits

0xba64,	// (0x00055c38) vid6_image_uncrop_vga_pane

0xba83,	// (0x00055c57) vid6_image_uncrop_wvga_pane_ParamLimits

0xba83,	// (0x00055c57) vid6_image_uncrop_wvga_pane

0xbaa2,	// (0x00055c76) vid6_indi_pane_ParamLimits

0xbaa2,	// (0x00055c76) vid6_indi_pane

0x07b5,	// (0x0004a989) bg_tb_trans_pane_cp09_ParamLimits

0x07b5,	// (0x0004a989) bg_tb_trans_pane_cp09

0x1799,	// (0x0004b96d) cam6_battery_pane_cp_ParamLimits

0x1799,	// (0x0004b96d) cam6_battery_pane_cp

0x17a5,	// (0x0004b979) vid6_indi_pane_g1_ParamLimits

0x17a5,	// (0x0004b979) vid6_indi_pane_g1

0x17b7,	// (0x0004b98b) vid6_indi_pane_g2_ParamLimits

0x17b7,	// (0x0004b98b) vid6_indi_pane_g2

0x17c9,	// (0x0004b99d) vid6_indi_pane_g3_ParamLimits

0x17c9,	// (0x0004b99d) vid6_indi_pane_g3

0x17e0,	// (0x0004b9b4) vid6_indi_pane_g4_ParamLimits

0x17e0,	// (0x0004b9b4) vid6_indi_pane_g4

0x17f7,	// (0x0004b9cb) vid6_indi_pane_g5_ParamLimits

0x17f7,	// (0x0004b9cb) vid6_indi_pane_g5

0x0004,

0xfaf9,	// (0x00059ccd) vid6_indi_pane_g_ParamLimits

0xfaf9,	// (0x00059ccd) vid6_indi_pane_g

0x1811,	// (0x0004b9e5) vid6_indi_pane_t1_ParamLimits

0x1811,	// (0x0004b9e5) vid6_indi_pane_t1

0x1827,	// (0x0004b9fb) vid6_indi_pane_t2_ParamLimits

0x1827,	// (0x0004b9fb) vid6_indi_pane_t2

0x184f,	// (0x0004ba23) vid6_indi_pane_t3_ParamLimits

0x184f,	// (0x0004ba23) vid6_indi_pane_t3

0x1877,	// (0x0004ba4b) vid6_indi_pane_t4_ParamLimits

0x1877,	// (0x0004ba4b) vid6_indi_pane_t4

0x0003,

0xfb04,	// (0x00059cd8) vid6_indi_pane_t_ParamLimits

0xfb04,	// (0x00059cd8) vid6_indi_pane_t

0x189b,	// (0x0004ba6f) wait_bar_pane_cp08

0xbac7,	// (0x00055c9b) main_cset_text2_pane_t1_ParamLimits

0xbac7,	// (0x00055c9b) main_cset_text2_pane_t1

0xb9d4,	// (0x00055ba8) listscroll_gen_pane_cp06_t1_ParamLimits

0xb9d4,	// (0x00055ba8) listscroll_gen_pane_cp06_t1

0x5c37,	// (0x0004fe0b) main_cam6_set_pane

0x211c,	// (0x0004c2f0) bg_tb_trans_pane_cp06_ParamLimits

0xa48c,	// (0x00054660) cam4_indicators_pane_g1_ParamLimits

0xa49d,	// (0x00054671) cam4_indicators_pane_g2_ParamLimits

0xf883,	// (0x00059a57) cam4_indicators_pane_g_ParamLimits

0xa4b5,	// (0x00054689) cam4_indicators_pane_t1_ParamLimits

0x8a52,	// (0x00052c26) bg_tb_trans_pane_cp07_ParamLimits

0xa56c,	// (0x00054740) vid4_indicators_pane_g1_ParamLimits

0xa582,	// (0x00054756) vid4_indicators_pane_g2_ParamLimits

0xa596,	// (0x0005476a) vid4_indicators_pane_g3_ParamLimits

0xa5a9,	// (0x0005477d) vid4_indicators_pane_g4_ParamLimits

0xf895,	// (0x00059a69) vid4_indicators_pane_g_ParamLimits

0xa5c7,	// (0x0005479b) vid4_indicators_pane_t1_ParamLimits

0xb58a,	// (0x0005575e) vid4_progress_pane_g1_ParamLimits

0xb59a,	// (0x0005576e) vid4_progress_pane_g2_ParamLimits

0xb5aa,	// (0x0005577e) vid4_progress_pane_g3_ParamLimits

0xb5bc,	// (0x00055790) vid4_progress_pane_g4_ParamLimits

0xfa3c,	// (0x00059c10) vid4_progress_pane_g_ParamLimits

0xb5da,	// (0x000557ae) vid4_progress_pane_t1_ParamLimits

0xb5f4,	// (0x000557c8) vid4_progress_pane_t2_ParamLimits

0xb609,	// (0x000557dd) vid4_progress_pane_t3_ParamLimits

0xfa47,	// (0x00059c1b) vid4_progress_pane_t_ParamLimits

0xb61e,	// (0x000557f2) wait_bar_pane_cp07_ParamLimits

0xbaee,	// (0x00055cc2) main_cam6_set_pane_g2_ParamLimits

0xbaee,	// (0x00055cc2) main_cam6_set_pane_g2

0xbafa,	// (0x00055cce) main_cset6_listscroll_pane_ParamLimits

0xbafa,	// (0x00055cce) main_cset6_listscroll_pane

0xbb27,	// (0x00055cfb) main_cset6_slider_pane_ParamLimits

0xbb27,	// (0x00055cfb) main_cset6_slider_pane

0xbb33,	// (0x00055d07) main_cset6_text2_pane_ParamLimits

0xbb33,	// (0x00055d07) main_cset6_text2_pane

0x18aa,	// (0x0004ba7e) main_cset6_text_pane

0x18b2,	// (0x0004ba86) main_cset_list_pane_copy1_ParamLimits

0x18b2,	// (0x0004ba86) main_cset_list_pane_copy1

0x18c2,	// (0x0004ba96) scroll_pane_cp028_copy1

0xbb46,	// (0x00055d1a) cset_list_set_pane_copy1

0xbb56,	// (0x00055d2a) aid_position_infowindow_above_copy1

0xbb5e,	// (0x00055d32) aid_position_infowindow_below_copy1

0xbb66,	// (0x00055d3a) cset_list_set_pane_g1_copy1

0xbb6e,	// (0x00055d42) cset_list_set_pane_g3_copy1_ParamLimits

0xbb6e,	// (0x00055d42) cset_list_set_pane_g3_copy1

0xbb7d,	// (0x00055d51) cset_list_set_pane_t1_copy1_ParamLimits

0xbb7d,	// (0x00055d51) cset_list_set_pane_t1_copy1

0x3514,	// (0x0004d6e8) list_highlight_pane_cp021_copy1_ParamLimits

0x3514,	// (0x0004d6e8) list_highlight_pane_cp021_copy1

0x18cb,	// (0x0004ba9f) cset6_slider_pane_ParamLimits

0x18cb,	// (0x0004ba9f) cset6_slider_pane

0x18f7,	// (0x0004bacb) main_cset6_slider_pane_g1_ParamLimits

0x18f7,	// (0x0004bacb) main_cset6_slider_pane_g1

0xbb92,	// (0x00055d66) main_cset6_slider_pane_g2_ParamLimits

0xbb92,	// (0x00055d66) main_cset6_slider_pane_g2

0x191f,	// (0x0004baf3) main_cset6_slider_pane_g3_ParamLimits

0x191f,	// (0x0004baf3) main_cset6_slider_pane_g3

0xbbba,	// (0x00055d8e) main_cset6_slider_pane_g4_ParamLimits

0xbbba,	// (0x00055d8e) main_cset6_slider_pane_g4

0xbbc6,	// (0x00055d9a) main_cset6_slider_pane_g5_ParamLimits

0xbbc6,	// (0x00055d9a) main_cset6_slider_pane_g5

0x10b9,	// (0x0004b28d) main_cset6_slider_pane_g7_ParamLimits

0x10b9,	// (0x0004b28d) main_cset6_slider_pane_g7

0x10c5,	// (0x0004b299) main_cset6_slider_pane_g8_ParamLimits

0x10c5,	// (0x0004b299) main_cset6_slider_pane_g8

0xbbd2,	// (0x00055da6) main_cset6_slider_pane_g9_ParamLimits

0xbbd2,	// (0x00055da6) main_cset6_slider_pane_g9

0xbbde,	// (0x00055db2) main_cset6_slider_pane_g10_ParamLimits

0xbbde,	// (0x00055db2) main_cset6_slider_pane_g10

0xbbea,	// (0x00055dbe) main_cset6_slider_pane_g11_ParamLimits

0xbbea,	// (0x00055dbe) main_cset6_slider_pane_g11

0xbbf6,	// (0x00055dca) main_cset6_slider_pane_g12_ParamLimits

0xbbf6,	// (0x00055dca) main_cset6_slider_pane_g12

0xbc02,	// (0x00055dd6) main_cset6_slider_pane_g13_ParamLimits

0xbc02,	// (0x00055dd6) main_cset6_slider_pane_g13

0xbc0e,	// (0x00055de2) main_cset6_slider_pane_g14_ParamLimits

0xbc0e,	// (0x00055de2) main_cset6_slider_pane_g14

0xbc1a,	// (0x00055dee) main_cset6_slider_pane_g15_ParamLimits

0xbc1a,	// (0x00055dee) main_cset6_slider_pane_g15

0xbc32,	// (0x00055e06) main_cset6_slider_pane_g16_ParamLimits

0xbc32,	// (0x00055e06) main_cset6_slider_pane_g16

0xbc3e,	// (0x00055e12) main_cset6_slider_pane_g17_ParamLimits

0xbc3e,	// (0x00055e12) main_cset6_slider_pane_g17

0x0011,

0xfb0d,	// (0x00059ce1) main_cset6_slider_pane_g_ParamLimits

0xfb0d,	// (0x00059ce1) main_cset6_slider_pane_g

0x192b,	// (0x0004baff) main_cset6_slider_pane_t1_ParamLimits

0x192b,	// (0x0004baff) main_cset6_slider_pane_t1

0xbc62,	// (0x00055e36) main_cset6_slider_pane_t2_ParamLimits

0xbc62,	// (0x00055e36) main_cset6_slider_pane_t2

0xbc8d,	// (0x00055e61) main_cset6_slider_pane_t3_ParamLimits

0xbc8d,	// (0x00055e61) main_cset6_slider_pane_t3

0xbcb8,	// (0x00055e8c) main_cset6_slider_pane_t4_ParamLimits

0xbcb8,	// (0x00055e8c) main_cset6_slider_pane_t4

0xbce3,	// (0x00055eb7) main_cset6_slider_pane_t5_ParamLimits

0xbce3,	// (0x00055eb7) main_cset6_slider_pane_t5

0x196c,	// (0x0004bb40) main_cset6_slider_pane_t7_ParamLimits

0x196c,	// (0x0004bb40) main_cset6_slider_pane_t7

0xbd0e,	// (0x00055ee2) main_cset6_slider_pane_t8_ParamLimits

0xbd0e,	// (0x00055ee2) main_cset6_slider_pane_t8

0xbd32,	// (0x00055f06) main_cset6_slider_pane_t9_ParamLimits

0xbd32,	// (0x00055f06) main_cset6_slider_pane_t9

0xbd56,	// (0x00055f2a) main_cset6_slider_pane_t10_ParamLimits

0xbd56,	// (0x00055f2a) main_cset6_slider_pane_t10

0xbd7a,	// (0x00055f4e) main_cset6_slider_pane_t11_ParamLimits

0xbd7a,	// (0x00055f4e) main_cset6_slider_pane_t11

0x19a2,	// (0x0004bb76) main_cset6_slider_pane_t14_ParamLimits

0x19a2,	// (0x0004bb76) main_cset6_slider_pane_t14

0x19db,	// (0x0004bbaf) main_cset6_slider_pane_t15_ParamLimits

0x19db,	// (0x0004bbaf) main_cset6_slider_pane_t15

0x000b,

0xfb32,	// (0x00059d06) main_cset6_slider_pane_t_ParamLimits

0xfb32,	// (0x00059d06) main_cset6_slider_pane_t

0x1a14,	// (0x0004bbe8) cset_slider_pane_g1_copy1

0x1a1d,	// (0x0004bbf1) cset_slider_pane_g2_copy1

0x1a26,	// (0x0004bbfa) cset_slider_pane_g3_copy1

0x2e37,	// (0x0004d00b) bg_popup_sub_pane_cp011_copy1

0x1a38,	// (0x0004bc0c) main_cset_text_pane_g1_copy1

0x1212,	// (0x0004b3e6) main_cset_text_pane_t1_copy1

0x1220,	// (0x0004b3f4) main_cset_text_pane_t2_copy1

0x122e,	// (0x0004b402) main_cset_text_pane_t3_copy1

0x123c,	// (0x0004b410) main_cset_text_pane_t4_copy1

0x124a,	// (0x0004b41e) main_cset_text_pane_t5_copy1

0x1a40,	// (0x0004bc14) main_cset_text_pane_t6_copy1

0x1a4e,	// (0x0004bc22) main_cset_text_pane_t7_copy1

0xbdbb,	// (0x00055f8f) main_cset_text2_pane_t1_copy1

0x8a52,	// (0x00052c26) main_ncimui_pane

0x8ac5,	// (0x00052c99) popup_query_ncimui_window_ParamLimits

0x8ac5,	// (0x00052c99) popup_query_ncimui_window

0x07d9,	// (0x0004a9ad) field_cale_ev2_pane_g4_ParamLimits

0x07d9,	// (0x0004a9ad) field_cale_ev2_pane_g4

0x9cfc,	// (0x00053ed0) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9cfc,	// (0x00053ed0) cell_video_dialer_keypad_pane_g2

0x0001,

0xf81d,	// (0x000599f1) cell_video_dialer_keypad_pane_g_ParamLimits

0xf81d,	// (0x000599f1) cell_video_dialer_keypad_pane_g

0x9d14,	// (0x00053ee8) cell_video_dialer_keypad_pane_t1

0x2e37,	// (0x0004d00b) bg_popup_window_pane_cp012

0xe6aa,	// (0x0005887e) heading_pane_cp06

0x1a7a,	// (0x0004bc4e) ncim_query_content_pane

0x2e37,	// (0x0004d00b) bg_popup_heading_pane_cp01

0x1a82,	// (0x0004bc56) ncim_heading_pane_t1

0x1a90,	// (0x0004bc64) ncim_indicator_popup_pane

0x1aa2,	// (0x0004bc76) ncim_query_button_pane

0x1ab8,	// (0x0004bc8c) ncim_query_content_pane_t1

0x1aca,	// (0x0004bc9e) ncim_query_content_pane_t2

0x0005,

0xfb76,	// (0x00059d4a) ncim_query_content_pane_t

0x1b04,	// (0x0004bcd8) ncim_query_list_pane

0x1b16,	// (0x0004bcea) ncim_query_popup_pane

0x1a90,	// (0x0004bc64) ncim_indicator_popup_pane_ParamLimits

0xbf17,	// (0x000560eb) ncim_query_content_pane_g1_ParamLimits

0xbf17,	// (0x000560eb) ncim_query_content_pane_g1

0x1ab8,	// (0x0004bc8c) ncim_query_content_pane_t1_ParamLimits

0x1aca,	// (0x0004bc9e) ncim_query_content_pane_t2_ParamLimits

0xbf23,	// (0x000560f7) ncim_query_content_pane_t3_ParamLimits

0xbf23,	// (0x000560f7) ncim_query_content_pane_t3

0xbf40,	// (0x00056114) ncim_query_content_pane_t4_ParamLimits

0xbf40,	// (0x00056114) ncim_query_content_pane_t4

0xbf5d,	// (0x00056131) ncim_query_content_pane_t5_ParamLimits

0xbf5d,	// (0x00056131) ncim_query_content_pane_t5

0x1adc,	// (0x0004bcb0) ncim_query_content_pane_t6_ParamLimits

0x1adc,	// (0x0004bcb0) ncim_query_content_pane_t6

0xfb76,	// (0x00059d4a) ncim_query_content_pane_t_ParamLimits

0x1b04,	// (0x0004bcd8) ncim_query_list_pane_ParamLimits

0x1b16,	// (0x0004bcea) ncim_query_popup_pane_ParamLimits

0x1b2a,	// (0x0004bcfe) wait_bar_pane_cp04

0x2e37,	// (0x0004d00b) input_focus_pane_cp011

0x1b32,	// (0x0004bd06) ncim_query_popup_pane_t1

0x1b40,	// (0x0004bd14) ncim_list_query_list_pane_ParamLimits

0x1b40,	// (0x0004bd14) ncim_list_query_list_pane

0x2e37,	// (0x0004d00b) bg_button_pane_cp027

0x1b53,	// (0x0004bd27) ncim_query_button_pane_g1

0x2e37,	// (0x0004d00b) list_highlight_pane_cp012

0x1b5d,	// (0x0004bd31) ncim_list_query_list_pane_g1

0x1b65,	// (0x0004bd39) ncim_list_query_list_pane_t1

0xa4a9,	// (0x0005467d) cam4_indicators_pane_g3_ParamLimits

0xa4a9,	// (0x0005467d) cam4_indicators_pane_g3

0xa5b5,	// (0x00054789) vid4_indicators_pane_g5_ParamLimits

0xa5b5,	// (0x00054789) vid4_indicators_pane_g5

0xb5cb,	// (0x0005579f) vid4_progress_pane_g5_ParamLimits

0xb5cb,	// (0x0005579f) vid4_progress_pane_g5

0xbded,	// (0x00055fc1) main_ncimui_pane_g1

0xbe59,	// (0x0005602d) ncimui_group_query_pane_ParamLimits

0xbe59,	// (0x0005602d) ncimui_group_query_pane

0xbeb3,	// (0x00056087) ncimui_list_pane_ParamLimits

0xbeb3,	// (0x00056087) ncimui_list_pane

0xbeda,	// (0x000560ae) ncimui_text_pane_ParamLimits

0xbeda,	// (0x000560ae) ncimui_text_pane

0xbf7a,	// (0x0005614e) ncimui_text_pane_t1_ParamLimits

0xbf7a,	// (0x0005614e) ncimui_text_pane_t1

0x1b73,	// (0x0004bd47) ncimui_list_single_graphic_pane_ParamLimits

0x1b73,	// (0x0004bd47) ncimui_list_single_graphic_pane

0xbf99,	// (0x0005616d) ncimui_query_pane_ParamLimits

0xbf99,	// (0x0005616d) ncimui_query_pane

0x2e37,	// (0x0004d00b) list_highlight_pane_cp013

0x1b83,	// (0x0004bd57) ncim_list_query_list_pane_t1_copy1

0x1b5d,	// (0x0004bd31) ncim_list_single_graphic_pane_g1

0xbfac,	// (0x00056180) ncim_query_button_pane_cp01

0xbfb8,	// (0x0005618c) ncim_query_entry_pane_ParamLimits

0xbfb8,	// (0x0005618c) ncim_query_entry_pane

0xbfcb,	// (0x0005619f) ncimui_query_pane_g1

0xbfd7,	// (0x000561ab) ncimui_query_pane_t1_ParamLimits

0xbfd7,	// (0x000561ab) ncimui_query_pane_t1

0x3514,	// (0x0004d6e8) input_focus_pane_cp012

0x1b91,	// (0x0004bd65) ncim_query_entry_pane_t1

0x35df,	// (0x0004d7b3) main_im_pane_ParamLimits

0x8a52,	// (0x00052c26) main_mobtv_pane_ParamLimits

0x8a52,	// (0x00052c26) main_mobtv_pane

0xbc4a,	// (0x00055e1e) main_cset6_slider_pane_g18_ParamLimits

0xbc4a,	// (0x00055e1e) main_cset6_slider_pane_g18

0xbc56,	// (0x00055e2a) main_cset6_slider_pane_g19_ParamLimits

0xbc56,	// (0x00055e2a) main_cset6_slider_pane_g19

0x4a1c,	// (0x0004ebf0) bg_main_mobtv_pane_ParamLimits

0x4a1c,	// (0x0004ebf0) bg_main_mobtv_pane

0xbff0,	// (0x000561c4) main_mobtv_info_pane

0xbffb,	// (0x000561cf) main_mobtv_loading_pane_ParamLimits

0xbffb,	// (0x000561cf) main_mobtv_loading_pane

0x1ba3,	// (0x0004bd77) main_mobtv_pg_channel_list_pane

0x1bad,	// (0x0004bd81) main_mobtv_pg_hdr_pane

0xc008,	// (0x000561dc) main_mobtv_programe_curr_pane_ParamLimits

0xc008,	// (0x000561dc) main_mobtv_programe_curr_pane

0xc015,	// (0x000561e9) main_mobtv_programe_next_pane_ParamLimits

0xc015,	// (0x000561e9) main_mobtv_programe_next_pane

0x1bb6,	// (0x0004bd8a) popup_mobtv_noti_window

0x37c7,	// (0x0004d99b) main_tv_pg_hdr_pane_g1

0x1bc0,	// (0x0004bd94) main_tv_pg_hdr_pane_g2

0x1bc8,	// (0x0004bd9c) main_tv_pg_hdr_pane_g3

0x1bd0,	// (0x0004bda4) main_tv_pg_hdr_pane_g4

0x1bd8,	// (0x0004bdac) main_tv_pg_hdr_pane_g5

0x1be2,	// (0x0004bdb6) main_tv_pg_hdr_pane_g6

0x1bec,	// (0x0004bdc0) main_tv_pg_hdr_pane_g7

0x1bf6,	// (0x0004bdca) main_tv_pg_hdr_pane_g8

0x1c00,	// (0x0004bdd4) main_tv_pg_hdr_pane_g9

0x1c0a,	// (0x0004bdde) main_tv_pg_hdr_pane_g10

0x1c14,	// (0x0004bde8) main_tv_pg_hdr_pane_g11

0x000a,

0xfb83,	// (0x00059d57) main_tv_pg_hdr_pane_g

0x1c1e,	// (0x0004bdf2) main_tv_pg_hdr_pane_t1

0x1c2c,	// (0x0004be00) main_tv_pg_hdr_pane_t2

0x1c3a,	// (0x0004be0e) main_tv_pg_hdr_pane_t3

0x1c4a,	// (0x0004be1e) main_tv_pg_hdr_pane_t4

0x1c5a,	// (0x0004be2e) main_tv_pg_hdr_pane_t5

0x0004,

0xfb9a,	// (0x00059d6e) main_tv_pg_hdr_pane_t

0x1c6a,	// (0x0004be3e) single_mobtv_pg_channel_pane_ParamLimits

0x1c6a,	// (0x0004be3e) single_mobtv_pg_channel_pane

0x1c7c,	// (0x0004be50) single_mobtv_pg_channel_table_pane

0x1c85,	// (0x0004be59) single_mobtv_pg_channel_thumb_pane

0x1c8e,	// (0x0004be62) single_tv_pg_channel_pane_g1

0x1c97,	// (0x0004be6b) single_tv_pg_channel_pane_g2

0x0001,

0xfba5,	// (0x00059d79) single_tv_pg_channel_pane_g

0x356d,	// (0x0004d741) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x356d,	// (0x0004d741) bg_single_mobtv_pg_channel_thumb_pane

0x1ca0,	// (0x0004be74) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x1ca0,	// (0x0004be74) single_mobtv_pg_channel_thumb_pane_g1

0x1cae,	// (0x0004be82) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x1cae,	// (0x0004be82) single_mobtv_pg_channel_thumb_pane_g2

0x1cba,	// (0x0004be8e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1cba,	// (0x0004be8e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbaa,	// (0x00059d7e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbaa,	// (0x00059d7e) single_mobtv_pg_channel_thumb_pane_g

0x1cc6,	// (0x0004be9a) single_mobtv_pg_channel_thumb_pane_t1

0x1cd4,	// (0x0004bea8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb1,	// (0x00059d85) single_mobtv_pg_channel_thumb_pane_t

0x37c7,	// (0x0004d99b) bg_single_mobtv_pg_channel_table_pane_g1

0x37c7,	// (0x0004d99b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3dd,	// (0x000595b1) bg_single_mobtv_pg_channel_table_pane_g

0x1ce2,	// (0x0004beb6) single_mobtv_pg_channel_table_pane_t1

0x1cf0,	// (0x0004bec4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbb6,	// (0x00059d8a) single_mobtv_pg_channel_table_pane_t

0xc02a,	// (0x000561fe) main_mobtv_info_pane_g1_ParamLimits

0xc02a,	// (0x000561fe) main_mobtv_info_pane_g1

0xc046,	// (0x0005621a) main_mobtv_info_pane_t1_ParamLimits

0xc046,	// (0x0005621a) main_mobtv_info_pane_t1

0xc0be,	// (0x00056292) main_mobtv_info_pane_t2_ParamLimits

0xc0be,	// (0x00056292) main_mobtv_info_pane_t2

0x0002,

0xfbc0,	// (0x00059d94) main_mobtv_info_pane_t_ParamLimits

0xfbc0,	// (0x00059d94) main_mobtv_info_pane_t

0xc14f,	// (0x00056323) wait_bar_pane_cp05

0xc161,	// (0x00056335) main_mobtv_loading_pane_g1_ParamLimits

0xc161,	// (0x00056335) main_mobtv_loading_pane_g1

0xc16d,	// (0x00056341) main_mobtv_loading_pane_g2_ParamLimits

0xc16d,	// (0x00056341) main_mobtv_loading_pane_g2

0xc179,	// (0x0005634d) main_mobtv_loading_pane_g3_ParamLimits

0xc179,	// (0x0005634d) main_mobtv_loading_pane_g3

0x0002,

0xfbc7,	// (0x00059d9b) main_mobtv_loading_pane_g_ParamLimits

0xfbc7,	// (0x00059d9b) main_mobtv_loading_pane_g

0x1cfe,	// (0x0004bed2) main_mobtv_loading_pane_t1_ParamLimits

0x1cfe,	// (0x0004bed2) main_mobtv_loading_pane_t1

0x1d16,	// (0x0004beea) main_mobtv_loading_pane_t2_ParamLimits

0x1d16,	// (0x0004beea) main_mobtv_loading_pane_t2

0x0001,

0xfbce,	// (0x00059da2) main_mobtv_loading_pane_t_ParamLimits

0xfbce,	// (0x00059da2) main_mobtv_loading_pane_t

0xc187,	// (0x0005635b) wait_bar_pane_cp06_ParamLimits

0xc187,	// (0x0005635b) wait_bar_pane_cp06

0x1d3a,	// (0x0004bf0e) main_mobtv_programe_curr_pane_t1

0x1d48,	// (0x0004bf1c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbd3,	// (0x00059da7) main_mobtv_programe_curr_pane_t

0x1d56,	// (0x0004bf2a) main_mobtv_programe_next_pane_t1

0x1d64,	// (0x0004bf38) main_mobtv_programe_next_pane_t2

0x1d72,	// (0x0004bf46) main_mobtv_programe_next_pane_t3

0x0002,

0xfbd8,	// (0x00059dac) main_mobtv_programe_next_pane_t

0x2e37,	// (0x0004d00b) bg_popup_mobtv_noti_window_pane

0x1d80,	// (0x0004bf54) popup_mobtv_noti_window_g1

0x1d88,	// (0x0004bf5c) popup_mobtv_noti_window_t1

0x1d96,	// (0x0004bf6a) popup_mobtv_noti_window_t2

0x0001,

0xfbdf,	// (0x00059db3) popup_mobtv_noti_window_t

0x37c7,	// (0x0004d99b) bg_popup_mobtv_noti_window_pane_g1

0x5c37,	// (0x0004fe0b) sc_clock_pane

0x5c37,	// (0x0004fe0b) main_fs_bigclock_pane

0xb7a6,	// (0x0005597a) blid2_tripm_pane_t4_ParamLimits

0xb7a6,	// (0x0005597a) blid2_tripm_pane_t4

0xc193,	// (0x00056367) sc_clock_pane_g1_ParamLimits

0xc193,	// (0x00056367) sc_clock_pane_g1

0xc1a1,	// (0x00056375) sc_clock_pane_t1_ParamLimits

0xc1a1,	// (0x00056375) sc_clock_pane_t1

0xc1b6,	// (0x0005638a) sc_clock_pane_t2_ParamLimits

0xc1b6,	// (0x0005638a) sc_clock_pane_t2

0xc1c8,	// (0x0005639c) sc_clock_pane_t3_ParamLimits

0xc1c8,	// (0x0005639c) sc_clock_pane_t3

0x0004,

0xfbe4,	// (0x00059db8) sc_clock_pane_t_ParamLimits

0xfbe4,	// (0x00059db8) sc_clock_pane_t

0xcf24,	// (0x000570f8) main_fs_bigclock_indicator_pane_ParamLimits

0xcf24,	// (0x000570f8) main_fs_bigclock_indicator_pane

0xc257,	// (0x0005642b) main_fs_bigclock_pane_g1_ParamLimits

0xc257,	// (0x0005642b) main_fs_bigclock_pane_g1

0xcf30,	// (0x00057104) main_fs_bigclock_pane_t1_ParamLimits

0xcf30,	// (0x00057104) main_fs_bigclock_pane_t1

0xcf42,	// (0x00057116) main_fs_bigclock_pane_t2_ParamLimits

0xcf42,	// (0x00057116) main_fs_bigclock_pane_t2

0xcf56,	// (0x0005712a) main_fs_bigclock_pane_t3_ParamLimits

0xcf56,	// (0x0005712a) main_fs_bigclock_pane_t3

0x0002,

0xfd75,	// (0x00059f49) main_fs_bigclock_pane_t_ParamLimits

0xfd75,	// (0x00059f49) main_fs_bigclock_pane_t

0x2834,	// (0x0004ca08) main_fs_bigclock_indicator_pane_g1

0x1aaa,	// (0x0004bc7e) ncim_query_content_pane_g2_ParamLimits

0x1aaa,	// (0x0004bc7e) ncim_query_content_pane_g2

0x0001,

0xfb71,	// (0x00059d45) ncim_query_content_pane_g_ParamLimits

0xfb71,	// (0x00059d45) ncim_query_content_pane_g

0xc1da,	// (0x000563ae) sc_clock_pane_t4_ParamLimits

0xc1da,	// (0x000563ae) sc_clock_pane_t4

0x8a52,	// (0x00052c26) main_radioblah_pane

0xa34d,	// (0x00054521) cell_call4_button_pane_t1_copy1_ParamLimits

0xa34d,	// (0x00054521) cell_call4_button_pane_t1_copy1

0xbe09,	// (0x00055fdd) main_ncimui_pane_t1_ParamLimits

0xbe09,	// (0x00055fdd) main_ncimui_pane_t1

0xbe23,	// (0x00055ff7) main_ncimui_pane_t2_ParamLimits

0xbe23,	// (0x00055ff7) main_ncimui_pane_t2

0x0002,

0xfb6a,	// (0x00059d3e) main_ncimui_pane_t_ParamLimits

0xfb6a,	// (0x00059d3e) main_ncimui_pane_t

0x1da4,	// (0x0004bf78) main_radioblah_anim_pane_ParamLimits

0x1da4,	// (0x0004bf78) main_radioblah_anim_pane

0x1db5,	// (0x0004bf89) main_radioblah_info_pane_ParamLimits

0x1db5,	// (0x0004bf89) main_radioblah_info_pane

0x1dc9,	// (0x0004bf9d) main_radioblah_pane_t1_ParamLimits

0x1dc9,	// (0x0004bf9d) main_radioblah_pane_t1

0x1de5,	// (0x0004bfb9) main_radioblah_pane_t2_ParamLimits

0x1de5,	// (0x0004bfb9) main_radioblah_pane_t2

0x0003,

0xfc05,	// (0x00059dd9) main_radioblah_pane_t_ParamLimits

0xfc05,	// (0x00059dd9) main_radioblah_pane_t

0xc3f6,	// (0x000565ca) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc3f6,	// (0x000565ca) main_radioblah_rocker_ctrl_pane

0x1e2d,	// (0x0004c001) main_radioblah_info_pane_t1_ParamLimits

0x1e2d,	// (0x0004c001) main_radioblah_info_pane_t1

0xc43f,	// (0x00056613) main_radioblah_info_pane_t2_ParamLimits

0xc43f,	// (0x00056613) main_radioblah_info_pane_t2

0x0003,

0xfc0e,	// (0x00059de2) main_radioblah_info_pane_t_ParamLimits

0xfc0e,	// (0x00059de2) main_radioblah_info_pane_t

0x37c7,	// (0x0004d99b) main_radioblah_rocker_ctrl_pane_g1

0xc4ef,	// (0x000566c3) main_radioblah_rocker_ctrl_pane_g2

0xc4f7,	// (0x000566cb) main_radioblah_rocker_ctrl_pane_g3

0xc4ff,	// (0x000566d3) main_radioblah_rocker_ctrl_pane_g4

0xc507,	// (0x000566db) main_radioblah_rocker_ctrl_pane_g5

0xc50f,	// (0x000566e3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc17,	// (0x00059deb) main_radioblah_rocker_ctrl_pane_g

0xbdbb,	// (0x00055f8f) main_cset_text2_pane_t1_copy1_ParamLimits

0xa3d6,	// (0x000545aa) cam4_image_uncrop_qvga_pane

0xa51b,	// (0x000546ef) vid4_image_uncrop_qcif_pane

0xb938,	// (0x00055b0c) cam6_image_uncrop_qvga_pane_ParamLimits

0xb938,	// (0x00055b0c) cam6_image_uncrop_qvga_pane

0x1789,	// (0x0004b95d) vid6_image_uncrop_qcif_pane_ParamLimits

0x1789,	// (0x0004b95d) vid6_image_uncrop_qcif_pane

0x2e37,	// (0x0004d00b) bg_popup_preview_window_pane_cp03

0x1a5c,	// (0x0004bc30) list_cset_text2_pane

0x1a64,	// (0x0004bc38) main_cset6_text2_pane_g1

0x1a6c,	// (0x0004bc40) main_cset6_text2_pane_t1

0xc517,	// (0x000566eb) list_cset_text2_pane_t1_ParamLimits

0xc517,	// (0x000566eb) list_cset_text2_pane_t1

0x8a52,	// (0x00052c26) main_radioblah_pane_ParamLimits

0xc13b,	// (0x0005630f) main_mobtv_info_pane_t3_ParamLimits

0xc13b,	// (0x0005630f) main_mobtv_info_pane_t3

0xc3e4,	// (0x000565b8) main_radioblah_pane_g1

0xc40f,	// (0x000565e3) main_radioblah_info_pane_g1

0xc494,	// (0x00056668) main_radioblah_info_pane_t3_ParamLimits

0xc494,	// (0x00056668) main_radioblah_info_pane_t3

0x791b,	// (0x00051aef) highlight_cell_cale_month_pane_ParamLimits

0x791b,	// (0x00051aef) highlight_cell_cale_month_pane

0x5c37,	// (0x0004fe0b) main_phob_fisheye_pane

0xee5c,	// (0x00059030) scroll_pane_cp0031_ParamLimits

0xee5c,	// (0x00059030) scroll_pane_cp0031

0x189b,	// (0x0004ba6f) wait_bar_pane_cp08_ParamLimits

0xbb46,	// (0x00055d1a) cset_list_set_pane_copy1_ParamLimits

0x1e81,	// (0x0004c055) highlight_cell_cale_month_pane_g1

0xc52e,	// (0x00056702) highlight_cell_cale_month_pane_t1

0x14e6,	// (0x0004b6ba) list_gen_pane_cp01

0x10a4,	// (0x0004b278) scroll_pane_01

0xc53c,	// (0x00056710) list_single_double_fisheye_pane

0xc545,	// (0x00056719) list_double_fisheye_pane_g1_ParamLimits

0xc545,	// (0x00056719) list_double_fisheye_pane_g1

0xc551,	// (0x00056725) list_double_fisheye_pane_g2_ParamLimits

0xc551,	// (0x00056725) list_double_fisheye_pane_g2

0xc565,	// (0x00056739) list_double_fisheye_pane_g3_ParamLimits

0xc565,	// (0x00056739) list_double_fisheye_pane_g3

0x0004,

0xfc24,	// (0x00059df8) list_double_fisheye_pane_g_ParamLimits

0xfc24,	// (0x00059df8) list_double_fisheye_pane_g

0xc58e,	// (0x00056762) list_double_fisheye_pane_t1_ParamLimits

0xc58e,	// (0x00056762) list_double_fisheye_pane_t1

0xc5a9,	// (0x0005677d) list_double_fisheye_pane_t2_ParamLimits

0xc5a9,	// (0x0005677d) list_double_fisheye_pane_t2

0x0001,

0xfc2f,	// (0x00059e03) list_double_fisheye_pane_t_ParamLimits

0xfc2f,	// (0x00059e03) list_double_fisheye_pane_t

0x5c37,	// (0x0004fe0b) main_call5_pane

0xc200,	// (0x000563d4) sc_swipe_pane_ParamLimits

0xc200,	// (0x000563d4) sc_swipe_pane

0xc5d7,	// (0x000567ab) call5_image_pane_ParamLimits

0xc5d7,	// (0x000567ab) call5_image_pane

0xc5e9,	// (0x000567bd) call5_swipe_1_pane_ParamLimits

0xc5e9,	// (0x000567bd) call5_swipe_1_pane

0xc5f5,	// (0x000567c9) call5_swipe_2_pane_ParamLimits

0xc5f5,	// (0x000567c9) call5_swipe_2_pane

0xc60f,	// (0x000567e3) popup_call5_audio_first_window_ParamLimits

0xc60f,	// (0x000567e3) popup_call5_audio_first_window

0x356d,	// (0x0004d741) call5_swipe_1_pane_g1_ParamLimits

0x356d,	// (0x0004d741) call5_swipe_1_pane_g1

0x1e89,	// (0x0004c05d) call5_swipe_1_pane_g2_ParamLimits

0x1e89,	// (0x0004c05d) call5_swipe_1_pane_g2

0x0001,

0xfc34,	// (0x00059e08) call5_swipe_1_pane_g_ParamLimits

0xfc34,	// (0x00059e08) call5_swipe_1_pane_g

0x1e95,	// (0x0004c069) call5_swipe_1_pane_t1_ParamLimits

0x1e95,	// (0x0004c069) call5_swipe_1_pane_t1

0x356d,	// (0x0004d741) call5_swipe_2_pane_g1_ParamLimits

0x356d,	// (0x0004d741) call5_swipe_2_pane_g1

0x1eaa,	// (0x0004c07e) call5_swipe_2_pane_g2_ParamLimits

0x1eaa,	// (0x0004c07e) call5_swipe_2_pane_g2

0x0001,

0xfc39,	// (0x00059e0d) call5_swipe_2_pane_g_ParamLimits

0xfc39,	// (0x00059e0d) call5_swipe_2_pane_g

0x1eb6,	// (0x0004c08a) call5_swipe_2_pane_t1_ParamLimits

0x1eb6,	// (0x0004c08a) call5_swipe_2_pane_t1

0x1ecb,	// (0x0004c09f) sc_swipe_pane_g1_ParamLimits

0x1ecb,	// (0x0004c09f) sc_swipe_pane_g1

0x1ed8,	// (0x0004c0ac) sc_swipe_pane_g2_ParamLimits

0x1ed8,	// (0x0004c0ac) sc_swipe_pane_g2

0x0001,

0xfc3e,	// (0x00059e12) sc_swipe_pane_g_ParamLimits

0xfc3e,	// (0x00059e12) sc_swipe_pane_g

0x1ee4,	// (0x0004c0b8) sc_swipe_pane_t1_ParamLimits

0x1ee4,	// (0x0004c0b8) sc_swipe_pane_t1

0x5c37,	// (0x0004fe0b) main_cmail_launcher_pane

0xc61f,	// (0x000567f3) aid_size_cell_cmail_l_ParamLimits

0xc61f,	// (0x000567f3) aid_size_cell_cmail_l

0xc62d,	// (0x00056801) grid_cmail_l_pane_ParamLimits

0xc62d,	// (0x00056801) grid_cmail_l_pane

0xc63d,	// (0x00056811) cell_cmail_l_pane_ParamLimits

0xc63d,	// (0x00056811) cell_cmail_l_pane

0x1ef9,	// (0x0004c0cd) cell_cmail_l_pane_g1_ParamLimits

0x1ef9,	// (0x0004c0cd) cell_cmail_l_pane_g1

0x1f05,	// (0x0004c0d9) cell_cmail_l_pane_t1_ParamLimits

0x1f05,	// (0x0004c0d9) cell_cmail_l_pane_t1

0x1f1b,	// (0x0004c0ef) cell_cmail_l_pane_t2_ParamLimits

0x1f1b,	// (0x0004c0ef) cell_cmail_l_pane_t2

0x0001,

0xfc43,	// (0x00059e17) cell_cmail_l_pane_t_ParamLimits

0xfc43,	// (0x00059e17) cell_cmail_l_pane_t

0x3514,	// (0x0004d6e8) grid_highlight_pane_cp018_ParamLimits

0x3514,	// (0x0004d6e8) grid_highlight_pane_cp018

0x5a8c,	// (0x0004fc60) main2_pane_ParamLimits

0x5a8c,	// (0x0004fc60) main2_pane

0x366e,	// (0x0004d842) popup_sp_fs_action_menu_bg_pane_g1

0x3676,	// (0x0004d84a) popup_sp_fs_action_menu_bg_pane_g2

0x367e,	// (0x0004d852) popup_sp_fs_action_menu_bg_pane_g3

0x3686,	// (0x0004d85a) popup_sp_fs_action_menu_bg_pane_g4

0x368e,	// (0x0004d862) popup_sp_fs_action_menu_bg_pane_g5

0x3696,	// (0x0004d86a) popup_sp_fs_action_menu_bg_pane_g6

0x369e,	// (0x0004d872) popup_sp_fs_action_menu_bg_pane_g7

0x36a6,	// (0x0004d87a) popup_sp_fs_action_menu_bg_pane_g8

0x36ae,	// (0x0004d882) popup_sp_fs_action_menu_bg_pane_g9

0x36b6,	// (0x0004d88a) popup_sp_fs_action_menu_bg_pane_g10

0x36b6,	// (0x0004d88a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf145,	// (0x00059319) popup_sp_fs_action_menu_bg_pane_g

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g3_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g3_g1

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g3_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g3_g2

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g3_g3_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1f3,	// (0x000593c7) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1f3,	// (0x000593c7) list_medium_line_x2_t3_g3_g

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g3_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g3_t1

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g3_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g3_t2

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g3_t3_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1fa,	// (0x000593ce) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1fa,	// (0x000593ce) list_medium_line_x2_t3_g3_t

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g2_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g2_g1

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g2_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g2_g2

0x0001,

0xf201,	// (0x000593d5) list_medium_line_x2_t3_g2_g_ParamLimits

0xf201,	// (0x000593d5) list_medium_line_x2_t3_g2_g

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g2_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g2_t1

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g2_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g2_t2

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g2_t3_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1fa,	// (0x000593ce) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1fa,	// (0x000593ce) list_medium_line_x2_t3_g2_t

0x356d,	// (0x0004d741) list_medium_line_x2_t4_g4_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t4_g4_g1

0x356d,	// (0x0004d741) list_medium_line_x2_t4_g4_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t4_g4_g2

0x356d,	// (0x0004d741) list_medium_line_x2_t4_g4_g3_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t4_g4_g3

0x356d,	// (0x0004d741) list_medium_line_x2_t4_g4_g4_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t4_g4_g4

0x0003,

0xf206,	// (0x000593da) list_medium_line_x2_t4_g4_g_ParamLimits

0xf206,	// (0x000593da) list_medium_line_x2_t4_g4_g

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g4_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g4_t1

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g4_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g4_t2

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g4_t3_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g4_t3

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g4_t4_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g4_t4

0x0003,

0xf20f,	// (0x000593e3) list_medium_line_x2_t4_g4_t_ParamLimits

0xf20f,	// (0x000593e3) list_medium_line_x2_t4_g4_t

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g4_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g4_g1

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g4_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g4_g2

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g4_g3_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g4_g3

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g4_g4_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g4_g4

0x0003,

0xf206,	// (0x000593da) list_medium_line_x2_t2_g4_g_ParamLimits

0xf206,	// (0x000593da) list_medium_line_x2_t2_g4_g

0x37b3,	// (0x0004d987) list_medium_line_x2_t2_g4_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t2_g4_t1

0x37b3,	// (0x0004d987) list_medium_line_x2_t2_g4_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t2_g4_t2

0x0001,

0xf276,	// (0x0005944a) list_medium_line_x2_t2_g4_t_ParamLimits

0xf276,	// (0x0005944a) list_medium_line_x2_t2_g4_t

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g3_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g3_g1

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g3_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g3_g2

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g3_g3_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1f3,	// (0x000593c7) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1f3,	// (0x000593c7) list_medium_line_x2_t2_g3_g

0x37b3,	// (0x0004d987) list_medium_line_x2_t2_g3_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t2_g3_t1

0x37b3,	// (0x0004d987) list_medium_line_x2_t2_g3_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t2_g3_t2

0x0001,

0xf276,	// (0x0005944a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf276,	// (0x0005944a) list_medium_line_x2_t2_g3_t

0x7ac4,	// (0x00051c98) main_sp_fs_list_pane_ParamLimits

0x7ac4,	// (0x00051c98) main_sp_fs_list_pane

0x7ad0,	// (0x00051ca4) sp_fs_scroll_pane_ParamLimits

0x7ad0,	// (0x00051ca4) sp_fs_scroll_pane

0x3cf3,	// (0x0004dec7) list_medium_line_x2_t3_t1

0x3cf3,	// (0x0004dec7) list_medium_line_x2_t3_t2

0x3cf3,	// (0x0004dec7) list_medium_line_x2_t3_t3

0x0002,

0xf2c1,	// (0x00059495) list_medium_line_x2_t3_t

0x3cf3,	// (0x0004dec7) list_medium_line_x3_t4_t1

0x3cf3,	// (0x0004dec7) list_medium_line_x3_t4_t2

0x3cf3,	// (0x0004dec7) list_medium_line_x3_t4_t3

0x3cf3,	// (0x0004dec7) list_medium_line_x3_t4_t4

0x0003,

0xf2c8,	// (0x0005949c) list_medium_line_x3_t4_t

0x3cf3,	// (0x0004dec7) list_medium_line_x4_t5_t1

0x3cf3,	// (0x0004dec7) list_medium_line_x4_t5_t2

0x3cf3,	// (0x0004dec7) list_medium_line_x4_t5_t3

0x3cf3,	// (0x0004dec7) list_medium_line_x4_t5_t4

0x3cf3,	// (0x0004dec7) list_medium_line_x4_t5_t5

0x0004,

0xf2d1,	// (0x000594a5) list_medium_line_x4_t5_t

0x356d,	// (0x0004d741) list_medium_line_t4_g4_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t4_g4_g1

0x356d,	// (0x0004d741) list_medium_line_t4_g4_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t4_g4_g2

0x356d,	// (0x0004d741) list_medium_line_t4_g4_g3_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t4_g4_g3

0x356d,	// (0x0004d741) list_medium_line_t4_g4_g4_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t4_g4_g4

0x0003,

0xf206,	// (0x000593da) list_medium_line_t4_g4_g_ParamLimits

0xf206,	// (0x000593da) list_medium_line_t4_g4_g

0x37b3,	// (0x0004d987) list_medium_line_t4_g4_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t4_g4_t1

0x37b3,	// (0x0004d987) list_medium_line_t4_g4_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t4_g4_t2

0x37b3,	// (0x0004d987) list_medium_line_t4_g4_t3_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t4_g4_t3

0x37b3,	// (0x0004d987) list_medium_line_t4_g4_t4_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t4_g4_t4

0x0003,

0xf20f,	// (0x000593e3) list_medium_line_t4_g4_t_ParamLimits

0xf20f,	// (0x000593e3) list_medium_line_t4_g4_t

0x7bc9,	// (0x00051d9d) chi_dic_find_pane_g1

0x8a7a,	// (0x00052c4e) main_tport_pane

0x3cf3,	// (0x0004dec7) list_medium_line_plain_t1

0x356d,	// (0x0004d741) list_medium_line_t2_g2_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t2_g2_g1

0x356d,	// (0x0004d741) list_medium_line_t2_g2_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t2_g2_g2

0x0001,

0xf201,	// (0x000593d5) list_medium_line_t2_g2_g_ParamLimits

0xf201,	// (0x000593d5) list_medium_line_t2_g2_g

0x37b3,	// (0x0004d987) list_medium_line_t2_g2_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t2_g2_t1

0x37b3,	// (0x0004d987) list_medium_line_t2_g2_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t2_g2_t2

0x0001,

0xf276,	// (0x0005944a) list_medium_line_t2_g2_t_ParamLimits

0xf276,	// (0x0005944a) list_medium_line_t2_g2_t

0x14ef,	// (0x0004b6c3) aid_sp_fs_list_icon_a_sm

0x14f7,	// (0x0004b6cb) aid_sp_fs_list_icon_d

0x14ff,	// (0x0004b6d3) aid_sp_fs_text_primary

0x1508,	// (0x0004b6dc) aid_sp_fs_text_secondary

0x2e37,	// (0x0004d00b) list_medium_line

0x2e37,	// (0x0004d00b) list_medium_line_g2

0x2e37,	// (0x0004d00b) list_medium_line_g3

0x2e37,	// (0x0004d00b) list_medium_line_plain

0x2e37,	// (0x0004d00b) list_medium_line_plain_t2

0x2e37,	// (0x0004d00b) list_medium_line_plain_t3

0x2e37,	// (0x0004d00b) list_medium_line_right_icon

0x2e37,	// (0x0004d00b) list_medium_line_right_iconx2

0x2e37,	// (0x0004d00b) list_medium_line_t2

0x2e37,	// (0x0004d00b) list_medium_line_t2_g2

0x2e37,	// (0x0004d00b) list_medium_line_t2_g3

0x2e37,	// (0x0004d00b) list_medium_line_t2_right_icon

0x2e37,	// (0x0004d00b) list_medium_line_t2_right_iconx2

0x2e37,	// (0x0004d00b) list_medium_line_t3

0x2e37,	// (0x0004d00b) list_medium_line_t3_g2

0x2e37,	// (0x0004d00b) list_medium_line_t3_g3

0x2e37,	// (0x0004d00b) list_medium_line_t3_right_iconx2

0x2e37,	// (0x0004d00b) list_medium_line_t4_g4

0x2e37,	// (0x0004d00b) list_medium_line_x2

0x2e37,	// (0x0004d00b) list_medium_line_x2_t2_g2

0x2e37,	// (0x0004d00b) list_medium_line_x2_t2_g3

0x2e37,	// (0x0004d00b) list_medium_line_x2_t2_g4

0x2e37,	// (0x0004d00b) list_medium_line_x2_t3

0x2e37,	// (0x0004d00b) list_medium_line_x2_t3_g2

0x2e37,	// (0x0004d00b) list_medium_line_x2_t3_g3

0x2e37,	// (0x0004d00b) list_medium_line_x2_t3_g4

0x2e37,	// (0x0004d00b) list_medium_line_x2_t4_g2

0x2e37,	// (0x0004d00b) list_medium_line_x2_t4_g4

0x2e37,	// (0x0004d00b) list_medium_line_x3

0x2e37,	// (0x0004d00b) list_medium_line_x3_t4

0x2e37,	// (0x0004d00b) list_medium_line_x3_t4_g4

0x2e37,	// (0x0004d00b) list_medium_line_x4_t4

0x2e37,	// (0x0004d00b) list_medium_line_x4_t4_g7

0x2e37,	// (0x0004d00b) list_medium_line_x4_t5

0xb631,	// (0x00055805) list_single_fs_dyc_pane_ParamLimits

0xb631,	// (0x00055805) list_single_fs_dyc_pane

0x356d,	// (0x0004d741) list_medium_line_x4_t4_g7_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x4_t4_g7_g1

0x356d,	// (0x0004d741) list_medium_line_x4_t4_g7_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x4_t4_g7_g2

0x356d,	// (0x0004d741) list_medium_line_x4_t4_g7_g3_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x4_t4_g7_g3

0x356d,	// (0x0004d741) list_medium_line_x4_t4_g7_g4_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x4_t4_g7_g4

0x356d,	// (0x0004d741) list_medium_line_x4_t4_g7_g5_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x4_t4_g7_g5

0x356d,	// (0x0004d741) list_medium_line_x4_t4_g7_g6_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x4_t4_g7_g6

0x357b,	// (0x0004d74f) list_medium_line_x4_t4_g7_g7_ParamLimits

0x357b,	// (0x0004d74f) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb4b,	// (0x00059d1f) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb4b,	// (0x00059d1f) list_medium_line_x4_t4_g7_g

0x37b3,	// (0x0004d987) list_medium_line_x4_t4_g7_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x4_t4_g7_t1

0x37b3,	// (0x0004d987) list_medium_line_x4_t4_g7_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x4_t4_g7_t2

0x37b3,	// (0x0004d987) list_medium_line_x4_t4_g7_t3_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x4_t4_g7_t3

0x379f,	// (0x0004d973) list_medium_line_x4_t4_g7_t4_ParamLimits

0x379f,	// (0x0004d973) list_medium_line_x4_t4_g7_t4

0x379f,	// (0x0004d973) list_medium_line_x4_t4_g7_t5_ParamLimits

0x379f,	// (0x0004d973) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb5a,	// (0x00059d2e) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb5a,	// (0x00059d2e) list_medium_line_x4_t4_g7_t

0xbd9e,	// (0x00055f72) list_single_dyc_row_pane_ParamLimits

0xbd9e,	// (0x00055f72) list_single_dyc_row_pane

0xc5cb,	// (0x0005679f) call5_gesture_pane_ParamLimits

0xc5cb,	// (0x0005679f) call5_gesture_pane

0xc601,	// (0x000567d5) call5_windows_pane_ParamLimits

0xc601,	// (0x000567d5) call5_windows_pane

0xc652,	// (0x00056826) call5_swipe_1_pane_cp_ParamLimits

0xc652,	// (0x00056826) call5_swipe_1_pane_cp

0xc65e,	// (0x00056832) call5_swipe_2_pane_cp_ParamLimits

0xc65e,	// (0x00056832) call5_swipe_2_pane_cp

0x377d,	// (0x0004d951) call5_image_pane_cp

0xc66a,	// (0x0005683e) popup_call5_audio_first_window_cp_ParamLimits

0xc66a,	// (0x0005683e) popup_call5_audio_first_window_cp

0x1ecb,	// (0x0004c09f) call5_swipe_1_pane_g1_cp_ParamLimits

0x1ecb,	// (0x0004c09f) call5_swipe_1_pane_g1_cp

0x1f38,	// (0x0004c10c) call5_swipe_1_pane_g2_cp

0x1ee4,	// (0x0004c0b8) call5_swipe_1_pane_t1_cp_ParamLimits

0x1ee4,	// (0x0004c0b8) call5_swipe_1_pane_t1_cp

0x1ecb,	// (0x0004c09f) call5_swipe_2_pane_g1_cp_ParamLimits

0x1ecb,	// (0x0004c09f) call5_swipe_2_pane_g1_cp

0x1f40,	// (0x0004c114) call5_swipe_2_pane_g2_cp

0x1f48,	// (0x0004c11c) call5_swipe_2_pane_t1_cp_ParamLimits

0x1f48,	// (0x0004c11c) call5_swipe_2_pane_t1_cp

0x3514,	// (0x0004d6e8) main_sp_fs_email_pane

0x1187,	// (0x0004b35b) main_sp_fs_listscroll_pane_te

0xc678,	// (0x0005684c) popup_sp_fs_action_menu_pane_ParamLimits

0xc678,	// (0x0005684c) popup_sp_fs_action_menu_pane

0x37c7,	// (0x0004d99b) bg_sp_fs_ctrlbar_pane_g1

0x1f5d,	// (0x0004c131) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x1f66,	// (0x0004c13a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1f6f,	// (0x0004c143) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x37c7,	// (0x0004d99b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc48,	// (0x00059e1c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdd63,	// (0x00057f37) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdd63,	// (0x00057f37) bg_sp_fs_ctrlbar_ddmenu_pane

0x1f78,	// (0x0004c14c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x1f78,	// (0x0004c14c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x1f84,	// (0x0004c158) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x1f84,	// (0x0004c158) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc51,	// (0x00059e25) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc51,	// (0x00059e25) main_sp_fs_ctrlbar_ddmenu_pane_g

0x1f90,	// (0x0004c164) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x1f90,	// (0x0004c164) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x37c7,	// (0x0004d99b) list_medium_line_t2_right_icon_g1

0x3cf3,	// (0x0004dec7) list_medium_line_t2_right_icon_t1

0x3cf3,	// (0x0004dec7) list_medium_line_t2_right_icon_t2

0x0001,

0xfc56,	// (0x00059e2a) list_medium_line_t2_right_icon_t

0x4a3e,	// (0x0004ec12) bg_sp_fs_ctrlbar_pane_ParamLimits

0x4a3e,	// (0x0004ec12) bg_sp_fs_ctrlbar_pane

0xc717,	// (0x000568eb) main_sp_fs_ctrlbar_button_pane_cp01

0xc71f,	// (0x000568f3) main_sp_fs_ctrlbar_ddmenu_pane

0x1fe4,	// (0x0004c1b8) main_sp_fs_ctrlbar_pane_g1

0x1ff0,	// (0x0004c1c4) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc5b,	// (0x00059e2f) main_sp_fs_ctrlbar_pane_g

0xc75d,	// (0x00056931) main_sp_fs_ctrlbar_pane_t1

0xc79a,	// (0x0005696e) main_sp_fs_ctrlbar_pane

0xc7b4,	// (0x00056988) main_sp_fs_listscroll_pane_te_cp01

0xc7c5,	// (0x00056999) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc7c5,	// (0x00056999) popup_sp_fs_action_menu_pane_cp01

0x3514,	// (0x0004d6e8) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x3514,	// (0x0004d6e8) bg_sp_fs_highlight_list_pane_cp01

0x2017,	// (0x0004c1eb) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2017,	// (0x0004c1eb) sp_fs_action_menu_list_gene_pane_g1

0x2026,	// (0x0004c1fa) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2026,	// (0x0004c1fa) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc69,	// (0x00059e3d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc69,	// (0x00059e3d) sp_fs_action_menu_list_gene_pane_g

0x2033,	// (0x0004c207) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2033,	// (0x0004c207) sp_fs_action_menu_list_gene_pane_t1

0x204b,	// (0x0004c21f) sp_fs_action_menu_list_gene_pane_ParamLimits

0x204b,	// (0x0004c21f) sp_fs_action_menu_list_gene_pane

0x206e,	// (0x0004c242) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x206e,	// (0x0004c242) popup_sp_fs_action_menu_bg_pane

0x207c,	// (0x0004c250) sp_fs_action_menu_list_pane_ParamLimits

0x207c,	// (0x0004c250) sp_fs_action_menu_list_pane

0xc7e5,	// (0x000569b9) sp_fs_scroll_pane_cp01_ParamLimits

0xc7e5,	// (0x000569b9) sp_fs_scroll_pane_cp01

0x3cf3,	// (0x0004dec7) list_medium_line_plain_t2_t1

0x3cf3,	// (0x0004dec7) list_medium_line_plain_t2_t2

0x0001,

0xfc56,	// (0x00059e2a) list_medium_line_plain_t2_t

0x3cf3,	// (0x0004dec7) list_medium_line_plain_t3_t1

0x3cf3,	// (0x0004dec7) list_medium_line_plain_t3_t2

0x3cf3,	// (0x0004dec7) list_medium_line_plain_t3_t3

0x0002,

0xf2c1,	// (0x00059495) list_medium_line_plain_t3_t

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g2_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g2_g1

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g2_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t2_g2_g2

0x0001,

0xf201,	// (0x000593d5) list_medium_line_x2_t2_g2_g_ParamLimits

0xf201,	// (0x000593d5) list_medium_line_x2_t2_g2_g

0x37b3,	// (0x0004d987) list_medium_line_x2_t2_g2_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t2_g2_t1

0x37b3,	// (0x0004d987) list_medium_line_x2_t2_g2_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t2_g2_t2

0x0001,

0xf276,	// (0x0005944a) list_medium_line_x2_t2_g2_t_ParamLimits

0xf276,	// (0x0005944a) list_medium_line_x2_t2_g2_t

0x356d,	// (0x0004d741) list_medium_line_x2_t4_g2_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t4_g2_g1

0x356d,	// (0x0004d741) list_medium_line_x2_t4_g2_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t4_g2_g2

0x0001,

0xf201,	// (0x000593d5) list_medium_line_x2_t4_g2_g_ParamLimits

0xf201,	// (0x000593d5) list_medium_line_x2_t4_g2_g

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g2_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g2_t1

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g2_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g2_t2

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g2_t3_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g2_t3

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g2_t4_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t4_g2_t4

0x0003,

0xf20f,	// (0x000593e3) list_medium_line_x2_t4_g2_t_ParamLimits

0xf20f,	// (0x000593e3) list_medium_line_x2_t4_g2_t

0x37c7,	// (0x0004d99b) list_medium_line_t3_right_iconx2_g1

0x37c7,	// (0x0004d99b) list_medium_line_t3_right_iconx2_g2

0x37c7,	// (0x0004d99b) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3e2,	// (0x000595b6) list_medium_line_t3_right_iconx2_g

0x3cf3,	// (0x0004dec7) list_medium_line_t3_right_iconx2_t1

0x3cf3,	// (0x0004dec7) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc56,	// (0x00059e2a) list_medium_line_t3_right_iconx2_t

0x356d,	// (0x0004d741) list_medium_line_x3_t4_g4_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x3_t4_g4_g1

0x356d,	// (0x0004d741) list_medium_line_x3_t4_g4_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x3_t4_g4_g2

0x356d,	// (0x0004d741) list_medium_line_x3_t4_g4_g3_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x3_t4_g4_g3

0x356d,	// (0x0004d741) list_medium_line_x3_t4_g4_g4_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x3_t4_g4_g4

0x0003,

0xf206,	// (0x000593da) list_medium_line_x3_t4_g4_g_ParamLimits

0xf206,	// (0x000593da) list_medium_line_x3_t4_g4_g

0x37b3,	// (0x0004d987) list_medium_line_x3_t4_g4_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x3_t4_g4_t1

0x37b3,	// (0x0004d987) list_medium_line_x3_t4_g4_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x3_t4_g4_t2

0x37b3,	// (0x0004d987) list_medium_line_x3_t4_g4_t3_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x3_t4_g4_t3

0x37b3,	// (0x0004d987) list_medium_line_x3_t4_g4_t4_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x3_t4_g4_t4

0x0003,

0xf20f,	// (0x000593e3) list_medium_line_x3_t4_g4_t_ParamLimits

0xf20f,	// (0x000593e3) list_medium_line_x3_t4_g4_t

0xc80b,	// (0x000569df) list_single_dyc_row_text_pane_t1_ParamLimits

0xc80b,	// (0x000569df) list_single_dyc_row_text_pane_t1

0xc848,	// (0x00056a1c) list_single_dyc_row_text_pane_t2_ParamLimits

0xc848,	// (0x00056a1c) list_single_dyc_row_text_pane_t2

0x20a0,	// (0x0004c274) list_single_dyc_row_text_pane_t3_ParamLimits

0x20a0,	// (0x0004c274) list_single_dyc_row_text_pane_t3

0x0005,

0xfc6e,	// (0x00059e42) list_single_dyc_row_text_pane_t_ParamLimits

0xfc6e,	// (0x00059e42) list_single_dyc_row_text_pane_t

0x20c4,	// (0x0004c298) list_single_dyc_row_pane_g1_ParamLimits

0x20c4,	// (0x0004c298) list_single_dyc_row_pane_g1

0x20d0,	// (0x0004c2a4) list_single_dyc_row_pane_g2_ParamLimits

0x20d0,	// (0x0004c2a4) list_single_dyc_row_pane_g2

0x20dc,	// (0x0004c2b0) list_single_dyc_row_pane_g3_ParamLimits

0x20dc,	// (0x0004c2b0) list_single_dyc_row_pane_g3

0x20e8,	// (0x0004c2bc) list_single_dyc_row_pane_g4_ParamLimits

0x20e8,	// (0x0004c2bc) list_single_dyc_row_pane_g4

0x0003,

0xfc7b,	// (0x00059e4f) list_single_dyc_row_pane_g_ParamLimits

0xfc7b,	// (0x00059e4f) list_single_dyc_row_pane_g

0x20f4,	// (0x0004c2c8) list_single_dyc_row_text_pane_ParamLimits

0x20f4,	// (0x0004c2c8) list_single_dyc_row_text_pane

0x2e37,	// (0x0004d00b) bg_sp_fs_scroll_pane

0x2113,	// (0x0004c2e7) thumb_sp_fs_scroll_pane

0x356d,	// (0x0004d741) list_medium_line_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_g1

0x37b3,	// (0x0004d987) list_medium_line_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t1

0x356d,	// (0x0004d741) list_medium_line_x2_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_g1

0x356d,	// (0x0004d741) list_medium_line_x2_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_g2

0x0001,

0xf201,	// (0x000593d5) list_medium_line_x2_g_ParamLimits

0xf201,	// (0x000593d5) list_medium_line_x2_g

0x37b3,	// (0x0004d987) list_medium_line_x2_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t1

0x356d,	// (0x0004d741) list_medium_line_x3_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x3_g1

0x211c,	// (0x0004c2f0) list_medium_line_x3_g2_ParamLimits

0x211c,	// (0x0004c2f0) list_medium_line_x3_g2

0x0001,

0xfc84,	// (0x00059e58) list_medium_line_x3_g_ParamLimits

0xfc84,	// (0x00059e58) list_medium_line_x3_g

0x212a,	// (0x0004c2fe) list_medium_line_x3_t1_ParamLimits

0x212a,	// (0x0004c2fe) list_medium_line_x3_t1

0x213e,	// (0x0004c312) thumb_sp_fs_scroll_pane_g1

0x2147,	// (0x0004c31b) thumb_sp_fs_scroll_pane_g2

0x2150,	// (0x0004c324) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x00059e5d) thumb_sp_fs_scroll_pane_g

0x213e,	// (0x0004c312) bg_sp_fs_scroll_pane_g1

0x2147,	// (0x0004c31b) bg_sp_fs_scroll_pane_g2

0x2150,	// (0x0004c324) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc89,	// (0x00059e5d) bg_sp_fs_scroll_pane_g

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g4_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g4_g1

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g4_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g4_g2

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g4_g3_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g4_g3

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g4_g4_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_x2_t3_g4_g4

0x0003,

0xf206,	// (0x000593da) list_medium_line_x2_t3_g4_g_ParamLimits

0xf206,	// (0x000593da) list_medium_line_x2_t3_g4_g

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g4_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g4_t1

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g4_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g4_t2

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g4_t3_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1fa,	// (0x000593ce) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1fa,	// (0x000593ce) list_medium_line_x2_t3_g4_t

0x356d,	// (0x0004d741) list_medium_line_g2_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_g2_g1

0x356d,	// (0x0004d741) list_medium_line_g2_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_g2_g2

0x0001,

0xf201,	// (0x000593d5) list_medium_line_g2_g_ParamLimits

0xf201,	// (0x000593d5) list_medium_line_g2_g

0x37b3,	// (0x0004d987) list_medium_line_g2_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_g2_t1

0x356d,	// (0x0004d741) list_medium_line_t3_g2_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t3_g2_g1

0x356d,	// (0x0004d741) list_medium_line_t3_g2_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t3_g2_g2

0x0001,

0xf201,	// (0x000593d5) list_medium_line_t3_g2_g_ParamLimits

0xf201,	// (0x000593d5) list_medium_line_t3_g2_g

0x37b3,	// (0x0004d987) list_medium_line_t3_g2_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t3_g2_t1

0x37b3,	// (0x0004d987) list_medium_line_t3_g2_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t3_g2_t2

0x37b3,	// (0x0004d987) list_medium_line_t3_g2_t3_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t3_g2_t3

0x0002,

0xf1fa,	// (0x000593ce) list_medium_line_t3_g2_t_ParamLimits

0xf1fa,	// (0x000593ce) list_medium_line_t3_g2_t

0x37c7,	// (0x0004d99b) list_medium_line_right_icon_g1

0x3cf3,	// (0x0004dec7) list_medium_line_right_icon_t1

0x356d,	// (0x0004d741) list_medium_line_t2_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t2_g1

0x37b3,	// (0x0004d987) list_medium_line_t2_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t2_t1

0x37b3,	// (0x0004d987) list_medium_line_t2_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t2_t2

0x0001,

0xf276,	// (0x0005944a) list_medium_line_t2_t_ParamLimits

0xf276,	// (0x0005944a) list_medium_line_t2_t

0x356d,	// (0x0004d741) list_medium_line_t3_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t3_g1

0x37b3,	// (0x0004d987) list_medium_line_t3_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t3_t1

0x37b3,	// (0x0004d987) list_medium_line_t3_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t3_t2

0x37b3,	// (0x0004d987) list_medium_line_t3_t3_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t3_t3

0x0002,

0xf1fa,	// (0x000593ce) list_medium_line_t3_t_ParamLimits

0xf1fa,	// (0x000593ce) list_medium_line_t3_t

0x356d,	// (0x0004d741) list_medium_line_g3_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_g3_g1

0x356d,	// (0x0004d741) list_medium_line_g3_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_g3_g2

0x356d,	// (0x0004d741) list_medium_line_g3_g3_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_g3_g3

0x0002,

0xf1f3,	// (0x000593c7) list_medium_line_g3_g_ParamLimits

0xf1f3,	// (0x000593c7) list_medium_line_g3_g

0x37b3,	// (0x0004d987) list_medium_line_g3_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_g3_t1

0x356d,	// (0x0004d741) list_medium_line_t2_g3_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t2_g3_g1

0x356d,	// (0x0004d741) list_medium_line_t2_g3_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t2_g3_g2

0x356d,	// (0x0004d741) list_medium_line_t2_g3_g3_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t2_g3_g3

0x0002,

0xf1f3,	// (0x000593c7) list_medium_line_t2_g3_g_ParamLimits

0xf1f3,	// (0x000593c7) list_medium_line_t2_g3_g

0x37b3,	// (0x0004d987) list_medium_line_t2_g3_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t2_g3_t1

0x37b3,	// (0x0004d987) list_medium_line_t2_g3_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t2_g3_t2

0x0001,

0xf276,	// (0x0005944a) list_medium_line_t2_g3_t_ParamLimits

0xf276,	// (0x0005944a) list_medium_line_t2_g3_t

0x356d,	// (0x0004d741) list_medium_line_t3_g3_g1_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t3_g3_g1

0x356d,	// (0x0004d741) list_medium_line_t3_g3_g2_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t3_g3_g2

0x356d,	// (0x0004d741) list_medium_line_t3_g3_g3_ParamLimits

0x356d,	// (0x0004d741) list_medium_line_t3_g3_g3

0x0002,

0xf1f3,	// (0x000593c7) list_medium_line_t3_g3_g_ParamLimits

0xf1f3,	// (0x000593c7) list_medium_line_t3_g3_g

0x37b3,	// (0x0004d987) list_medium_line_t3_g3_t1_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t3_g3_t1

0x37b3,	// (0x0004d987) list_medium_line_t3_g3_t2_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t3_g3_t2

0x37b3,	// (0x0004d987) list_medium_line_t3_g3_t3_ParamLimits

0x37b3,	// (0x0004d987) list_medium_line_t3_g3_t3

0x0002,

0xf1fa,	// (0x000593ce) list_medium_line_t3_g3_t_ParamLimits

0xf1fa,	// (0x000593ce) list_medium_line_t3_g3_t

0x37c7,	// (0x0004d99b) list_medium_line_right_iconx2_g1

0x37c7,	// (0x0004d99b) list_medium_line_right_iconx2_g2

0x0001,

0xf3dd,	// (0x000595b1) list_medium_line_right_iconx2_g

0x3cf3,	// (0x0004dec7) list_medium_line_right_iconx2_t1

0x37c7,	// (0x0004d99b) list_medium_line_t2_right_iconx2_g1

0x37c7,	// (0x0004d99b) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3dd,	// (0x000595b1) list_medium_line_t2_right_iconx2_g

0x3cf3,	// (0x0004dec7) list_medium_line_t2_right_iconx2_t1

0x3cf3,	// (0x0004dec7) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc56,	// (0x00059e2a) list_medium_line_t2_right_iconx2_t

0x3cf3,	// (0x0004dec7) list_medium_line_x4_t4_t1

0x3cf3,	// (0x0004dec7) list_medium_line_x4_t4_t2

0x3cf3,	// (0x0004dec7) list_medium_line_x4_t4_t3

0x3cf3,	// (0x0004dec7) list_medium_line_x4_t4_t4

0x0003,

0xf2c8,	// (0x0005949c) list_medium_line_x4_t4_t

0xc99b,	// (0x00056b6f) tport_appsw_pane_ParamLimits

0xc99b,	// (0x00056b6f) tport_appsw_pane

0xc9a9,	// (0x00056b7d) tport_contact_pane_ParamLimits

0xc9a9,	// (0x00056b7d) tport_contact_pane

0xc9b9,	// (0x00056b8d) tport_listscroll_pane_ParamLimits

0xc9b9,	// (0x00056b8d) tport_listscroll_pane

0xc9c8,	// (0x00056b9c) cell_tport_appsw_pane_ParamLimits

0xc9c8,	// (0x00056b9c) cell_tport_appsw_pane

0x357b,	// (0x0004d74f) tport_appsw_pane_g1_ParamLimits

0x357b,	// (0x0004d74f) tport_appsw_pane_g1

0x2159,	// (0x0004c32d) tport_contact_pane_g1

0x2162,	// (0x0004c336) tport_contact_pane_t1

0x2170,	// (0x0004c344) tport_contact_pane_t2

0x0001,

0xfc90,	// (0x00059e64) tport_contact_pane_t

0x217e,	// (0x0004c352) list_tport_pane

0x2187,	// (0x0004c35b) scroll_pane_cp_030

0xc9fd,	// (0x00056bd1) cell_tport_appsw_pane_g1

0xca0d,	// (0x00056be1) cell_tport_appsw_pane_t1

0xca1b,	// (0x00056bef) grid_highlight_pane_cp019

0xca23,	// (0x00056bf7) list_tport_double_graphic_pane_ParamLimits

0xca23,	// (0x00056bf7) list_tport_double_graphic_pane

0x3514,	// (0x0004d6e8) list_highlight_pane_cp023_ParamLimits

0x3514,	// (0x0004d6e8) list_highlight_pane_cp023

0xca40,	// (0x00056c14) list_tport_double_graphic_pane_g1_ParamLimits

0xca40,	// (0x00056c14) list_tport_double_graphic_pane_g1

0xca4d,	// (0x00056c21) list_tport_double_graphic_pane_t1_ParamLimits

0xca4d,	// (0x00056c21) list_tport_double_graphic_pane_t1

0xca62,	// (0x00056c36) list_tport_double_graphic_pane_t2_ParamLimits

0xca62,	// (0x00056c36) list_tport_double_graphic_pane_t2

0x0001,

0xfc9c,	// (0x00059e70) list_tport_double_graphic_pane_t_ParamLimits

0xfc9c,	// (0x00059e70) list_tport_double_graphic_pane_t

0x2e37,	// (0x0004d00b) main_cale_note_pane

0xa766,	// (0x0005493a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa766,	// (0x0005493a) cell_vitu2_function_top_wide_pane_cp01

0xc14f,	// (0x00056323) wait_bar_pane_cp05_ParamLimits

0x3514,	// (0x0004d6e8) listscroll_cmail_pane

0x2190,	// (0x0004c364) list_cmail_pane

0xca74,	// (0x00056c48) list_cmail_body_pane

0xca8e,	// (0x00056c62) list_single_cmail_header_caption_pane

0x21a0,	// (0x0004c374) list_single_cmail_header_detail_pane_ParamLimits

0x21a0,	// (0x0004c374) list_single_cmail_header_detail_pane

0x21d2,	// (0x0004c3a6) list_single_cmail_header_caption_pane_t1

0xcaae,	// (0x00056c82) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcaae,	// (0x00056c82) list_single_cmail_header_detail_pane_g1

0x21e9,	// (0x0004c3bd) list_single_cmail_header_detail_pane_g2_ParamLimits

0x21e9,	// (0x0004c3bd) list_single_cmail_header_detail_pane_g2

0x0002,

0xfca1,	// (0x00059e75) list_single_cmail_header_detail_pane_g_ParamLimits

0xfca1,	// (0x00059e75) list_single_cmail_header_detail_pane_g

0x2202,	// (0x0004c3d6) list_single_cmail_header_detail_pane_t1_ParamLimits

0x2202,	// (0x0004c3d6) list_single_cmail_header_detail_pane_t1

0x2262,	// (0x0004c436) list_single_cmail_header_editor_pane_bg_ParamLimits

0x2262,	// (0x0004c436) list_single_cmail_header_editor_pane_bg

0x1c97,	// (0x0004be6b) list_cmail_body_pane_g1

0x2279,	// (0x0004c44d) list_cmail_body_pane_t1

0x0f86,	// (0x0004b15a) list_single_cmail_header_editor_pane_bg_g1

0x39dc,	// (0x0004dbb0) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0f96,	// (0x0004b16a) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0f8e,	// (0x0004b162) list_single_cmail_header_editor_pane_bg_g1_copy3

0x11c3,	// (0x0004b397) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0fb6,	// (0x0004b18a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0fa6,	// (0x0004b17a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0fae,	// (0x0004b182) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x39bc,	// (0x0004db90) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcac6,	// (0x00056c9a) calenote_gesture_pane_ParamLimits

0xcac6,	// (0x00056c9a) calenote_gesture_pane

0xcae0,	// (0x00056cb4) calenote_window_pane_ParamLimits

0xcae0,	// (0x00056cb4) calenote_window_pane

0x2287,	// (0x0004c45b) popup_note_window_cp01

0xcaf8,	// (0x00056ccc) calenote_swipe_1_pane_ParamLimits

0xcaf8,	// (0x00056ccc) calenote_swipe_1_pane

0xc65e,	// (0x00056832) calenote_swipe_2_pane_ParamLimits

0xc65e,	// (0x00056832) calenote_swipe_2_pane

0x1ecb,	// (0x0004c09f) calenote_swipe_1_pane_g1_ParamLimits

0x1ecb,	// (0x0004c09f) calenote_swipe_1_pane_g1

0x1ed8,	// (0x0004c0ac) calenote_swipe_1_pane_g2_ParamLimits

0x1ed8,	// (0x0004c0ac) calenote_swipe_1_pane_g2

0x0001,

0xfc3e,	// (0x00059e12) calenote_swipe_1_pane_g_ParamLimits

0xfc3e,	// (0x00059e12) calenote_swipe_1_pane_g

0x2299,	// (0x0004c46d) calenote_swipe_1_pane_t1_ParamLimits

0x2299,	// (0x0004c46d) calenote_swipe_1_pane_t1

0x1ecb,	// (0x0004c09f) calenote_swipe_2_pane_g1_ParamLimits

0x1ecb,	// (0x0004c09f) calenote_swipe_2_pane_g1

0x22b8,	// (0x0004c48c) calenote_swipe_2_pane_g2_ParamLimits

0x22b8,	// (0x0004c48c) calenote_swipe_2_pane_g2

0x0001,

0xfcad,	// (0x00059e81) calenote_swipe_2_pane_g_ParamLimits

0xfcad,	// (0x00059e81) calenote_swipe_2_pane_g

0x22c4,	// (0x0004c498) calenote_swipe_2_pane_t1_ParamLimits

0x22c4,	// (0x0004c498) calenote_swipe_2_pane_t1

0x2e37,	// (0x0004d00b) main_mup_navstr_pane

0x95fd,	// (0x000537d1) main_mup3_pane_t7_ParamLimits

0x95fd,	// (0x000537d1) main_mup3_pane_t7

0x9e0b,	// (0x00053fdf) main_mp4_pane_g6_ParamLimits

0x9e0b,	// (0x00053fdf) main_mp4_pane_g6

0xa1a5,	// (0x00054379) main_image3_pane_t4_ParamLimits

0xa1a5,	// (0x00054379) main_image3_pane_t4

0xcb0b,	// (0x00056cdf) popup_navstr_preview_pane_ParamLimits

0xcb0b,	// (0x00056cdf) popup_navstr_preview_pane

0xcb17,	// (0x00056ceb) scroll_navstr_pane_ParamLimits

0xcb17,	// (0x00056ceb) scroll_navstr_pane

0x2e37,	// (0x0004d00b) bg_popup_preview_window_pane_cp04

0x22eb,	// (0x0004c4bf) popup_navstr_preview_pane_t1

0xcb23,	// (0x00056cf7) scroll_navstr_pane_g1_ParamLimits

0xcb23,	// (0x00056cf7) scroll_navstr_pane_g1

0xcb30,	// (0x00056d04) scroll_navstr_pane_t1_ParamLimits

0xcb30,	// (0x00056d04) scroll_navstr_pane_t1

0x2290,	// (0x0004c464) bg_button_pane_cp014

0x2290,	// (0x0004c464) bg_button_pane_cp030

0xc571,	// (0x00056745) list_double_fisheye_pane_g4_ParamLimits

0xc571,	// (0x00056745) list_double_fisheye_pane_g4

0xc57d,	// (0x00056751) list_double_fisheye_pane_g5_ParamLimits

0xc57d,	// (0x00056751) list_double_fisheye_pane_g5

0xf079,	// (0x0005924d) sp_fs_scroll_pane_cp03

0x1fe4,	// (0x0004c1b8) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1ff0,	// (0x0004c1c4) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc5b,	// (0x00059e2f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc75d,	// (0x00056931) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x2198,	// (0x0004c36c) sp_fs_scroll_pane_cp02

0x36d9,	// (0x0004d8ad) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x36d9,	// (0x0004d8ad) popup_sp_fs_calendar_preview_list_single_pane

0x2e37,	// (0x0004d00b) main_cam6_pano_pane

0x8a52,	// (0x00052c26) main_mup3_pane_ParamLimits

0x2e37,	// (0x0004d00b) main_phacti_pane

0xc022,	// (0x000561f6) bg_button_pane_cp11

0xc03a,	// (0x0005620e) main_mobtv_info_pane_g2_ParamLimits

0xc03a,	// (0x0005620e) main_mobtv_info_pane_g2

0x0001,

0xfbbb,	// (0x00059d8f) main_mobtv_info_pane_g_ParamLimits

0xfbbb,	// (0x00059d8f) main_mobtv_info_pane_g

0xc1ec,	// (0x000563c0) sc_clock_pane_t5_ParamLimits

0xc1ec,	// (0x000563c0) sc_clock_pane_t5

0xc3e4,	// (0x000565b8) main_radioblah_pane_g1_ParamLimits

0x1dfd,	// (0x0004bfd1) main_radioblah_pane_t3_ParamLimits

0x1dfd,	// (0x0004bfd1) main_radioblah_pane_t3

0x1e15,	// (0x0004bfe9) main_radioblah_pane_t4_ParamLimits

0x1e15,	// (0x0004bfe9) main_radioblah_pane_t4

0xc402,	// (0x000565d6) main_radioblah_text_pane_ParamLimits

0xc402,	// (0x000565d6) main_radioblah_text_pane

0xc40f,	// (0x000565e3) main_radioblah_info_pane_g1_ParamLimits

0xc4a8,	// (0x0005667c) main_radioblah_info_pane_t4_ParamLimits

0xc4a8,	// (0x0005667c) main_radioblah_info_pane_t4

0x3514,	// (0x0004d6e8) main_sp_fs_calendar_pane

0xcb42,	// (0x00056d16) main_phacti_pane_g1

0xcb4a,	// (0x00056d1e) phacti_note_pane_ParamLimits

0xcb4a,	// (0x00056d1e) phacti_note_pane

0x2302,	// (0x0004c4d6) phacti_term_pane_ParamLimits

0x2302,	// (0x0004c4d6) phacti_term_pane

0x2317,	// (0x0004c4eb) phacti_note_pane_t1_ParamLimits

0x2317,	// (0x0004c4eb) phacti_note_pane_t1

0x232e,	// (0x0004c502) phacti_term_pane_g1

0x2336,	// (0x0004c50a) phacti_term_pane_t1_ParamLimits

0x2336,	// (0x0004c50a) phacti_term_pane_t1

0x2360,	// (0x0004c534) popup_sp_fs_calendar_preview_list_single_pane_g1

0x2368,	// (0x0004c53c) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcb7,	// (0x00059e8b) popup_sp_fs_calendar_preview_list_single_pane_g

0x2370,	// (0x0004c544) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2370,	// (0x0004c544) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2386,	// (0x0004c55a) aid_popup_sp_fs_bg_corner_pane

0x37c7,	// (0x0004d99b) popup_sp_fs_calendar_preview_bg_pane_g1

0x2e37,	// (0x0004d00b) popup_sp_fs_calendar_preview_bg_pane

0x238e,	// (0x0004c562) popup_sp_fs_calendar_preview_list_pane

0x4a3e,	// (0x0004ec12) bg_main_sp_fs_cale_pane_ParamLimits

0x4a3e,	// (0x0004ec12) bg_main_sp_fs_cale_pane

0x239f,	// (0x0004c573) listscroll_cale_mrui_pane_ParamLimits

0x239f,	// (0x0004c573) listscroll_cale_mrui_pane

0x23b4,	// (0x0004c588) listscroll_sp_fs_schedule_track_pane

0x23bd,	// (0x0004c591) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x23bd,	// (0x0004c591) main_sp_fs_ctrlbar_pane_cp01

0x23d0,	// (0x0004c5a4) main_sp_fs_ribbon_pane

0x23d8,	// (0x0004c5ac) popup_sp_fs_cale_preview_window

0x2bf7,	// (0x0004cdcb) list_single_sp_fs_schedule_track_pane_ParamLimits

0x2bf7,	// (0x0004cdcb) list_single_sp_fs_schedule_track_pane

0x2e74,	// (0x0004d048) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x2e74,	// (0x0004d048) bg_sp_fs_highlight_list_pane_cp03

0xcbad,	// (0x00056d81) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcbad,	// (0x00056d81) list_single_sp_fs_schedule_track_pane_g1

0xcbb9,	// (0x00056d8d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcbb9,	// (0x00056d8d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcbc,	// (0x00059e90) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcbc,	// (0x00059e90) list_single_sp_fs_schedule_track_pane_g

0xcbc5,	// (0x00056d99) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcbc5,	// (0x00056d99) list_single_sp_fs_schedule_track_pane_t1

0xcbe3,	// (0x00056db7) sp_fs_schedule_track_pane_ParamLimits

0xcbe3,	// (0x00056db7) sp_fs_schedule_track_pane

0x23ea,	// (0x0004c5be) sp_fs_schedule_track_pane_g1

0x23f2,	// (0x0004c5c6) sp_fs_schedule_track_pane_g2

0x23fa,	// (0x0004c5ce) sp_fs_schedule_track_pane_g3

0x2402,	// (0x0004c5d6) sp_fs_schedule_track_pane_g4

0x240a,	// (0x0004c5de) sp_fs_schedule_track_pane_g5

0x0004,

0xfcc1,	// (0x00059e95) sp_fs_schedule_track_pane_g

0x0f86,	// (0x0004b15a) bg_sp_fs_schedule_viewer_highlight_g1

0x39dc,	// (0x0004dbb0) bg_sp_fs_schedule_viewer_highlight_g2

0x0f8e,	// (0x0004b162) bg_sp_fs_schedule_viewer_highlight_g3

0x0f96,	// (0x0004b16a) bg_sp_fs_schedule_viewer_highlight_g4

0x11c3,	// (0x0004b397) bg_sp_fs_schedule_viewer_highlight_g5

0x0fa6,	// (0x0004b17a) bg_sp_fs_schedule_viewer_highlight_g6

0x0fae,	// (0x0004b182) bg_sp_fs_schedule_viewer_highlight_g7

0x0fb6,	// (0x0004b18a) bg_sp_fs_schedule_viewer_highlight_g8

0x39bc,	// (0x0004db90) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfccc,	// (0x00059ea0) bg_sp_fs_schedule_viewer_highlight_g

0x2e37,	// (0x0004d00b) bg_main_sp_fs_ribbon_pane

0xcbf5,	// (0x00056dc9) main_sp_fs_ribbon_pane_g1

0x2412,	// (0x0004c5e6) main_sp_fs_ribbon_pane_t1

0xcbfe,	// (0x00056dd2) main_sp_fs_ribbon_pane_t2

0x2421,	// (0x0004c5f5) main_sp_fs_ribbon_pane_t3

0x0002,

0xfcdf,	// (0x00059eb3) main_sp_fs_ribbon_pane_t

0x2430,	// (0x0004c604) main_sp_fs_ribbon_scheduler_pane

0x2438,	// (0x0004c60c) bg_main_sp_fs_ribbon_pane_g1

0x2441,	// (0x0004c615) bg_main_sp_fs_ribbon_pane_g2

0x244a,	// (0x0004c61e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfce6,	// (0x00059eba) bg_main_sp_fs_ribbon_pane_g

0x2452,	// (0x0004c626) main_sp_fs_ribbon_scheduler_pane_g1

0x245b,	// (0x0004c62f) main_sp_fs_ribbon_scheduler_pane_g2

0x2464,	// (0x0004c638) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfced,	// (0x00059ec1) main_sp_fs_ribbon_scheduler_pane_g

0x246d,	// (0x0004c641) list_cale_mrui_pane

0xcc0d,	// (0x00056de1) sp_fs_scroll_pane_cp07_ParamLimits

0xcc0d,	// (0x00056de1) sp_fs_scroll_pane_cp07

0xcc29,	// (0x00056dfd) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcc29,	// (0x00056dfd) bg_sp_fs_schedule_viewer_highlight

0x247a,	// (0x0004c64e) list_single_sp_fs_schedule_track_pane_cp01

0x2482,	// (0x0004c656) list_sp_fs_schedule_track_pane

0x248a,	// (0x0004c65e) sp_fs_scroll_pane_cp06_ParamLimits

0x248a,	// (0x0004c65e) sp_fs_scroll_pane_cp06

0x37c7,	// (0x0004d99b) bgmain_sp_fs_calendar_pane_g1

0xcc36,	// (0x00056e0a) list_single_cale_mrui_pane_ParamLimits

0xcc36,	// (0x00056e0a) list_single_cale_mrui_pane

0x249c,	// (0x0004c670) list_single_cale_mrui_row_pane_ParamLimits

0x249c,	// (0x0004c670) list_single_cale_mrui_row_pane

0x24a9,	// (0x0004c67d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x24a9,	// (0x0004c67d) list_single_cale_mrui_row_pane_g1

0x24ee,	// (0x0004c6c2) list_single_cale_mrui_row_pane_t1_ParamLimits

0x24ee,	// (0x0004c6c2) list_single_cale_mrui_row_pane_t1

0xcc5a,	// (0x00056e2e) list_single_cale_mrui_row_pane_t2_ParamLimits

0xcc5a,	// (0x00056e2e) list_single_cale_mrui_row_pane_t2

0x2500,	// (0x0004c6d4) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2500,	// (0x0004c6d4) list_single_cale_mrui_row_pane_t3

0x252f,	// (0x0004c703) list_single_cale_mrui_row_pane_t4_ParamLimits

0x252f,	// (0x0004c703) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcfb,	// (0x00059ecf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcfb,	// (0x00059ecf) list_single_cale_mrui_row_pane_t

0xccc0,	// (0x00056e94) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xccc0,	// (0x00056e94) list_single_cmail_header_editor_pane_bg_cp01

0xcce2,	// (0x00056eb6) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xcce2,	// (0x00056eb6) list_single_cmail_header_editor_pane_bg_cp02

0xccfe,	// (0x00056ed2) main_radioblah_text_pane_t1_ParamLimits

0xccfe,	// (0x00056ed2) main_radioblah_text_pane_t1

0x255e,	// (0x0004c732) cam6_indi_pane_cp01

0x2566,	// (0x0004c73a) cam6_mode_pane_cp01

0x256e,	// (0x0004c742) cam6_pano_pane

0x2577,	// (0x0004c74b) cam6_zoom_pane_cp01

0x2581,	// (0x0004c755) cam6_pano_image_pane

0x258a,	// (0x0004c75e) cam6_pano_pane_g1

0x1c97,	// (0x0004be6b) cam6_pano_pane_g2

0x2593,	// (0x0004c767) cam6_pano_pane_g3

0x259c,	// (0x0004c770) cam6_pano_pane_g4

0x0839,	// (0x0004aa0d) cam6_pano_pane_g5

0x25a5,	// (0x0004c779) cam6_pano_pane_g6

0x25ad,	// (0x0004c781) cam6_pano_pane_g7

0x25b5,	// (0x0004c789) cam6_pano_pane_g8

0x25be,	// (0x0004c792) cam6_pano_pane_g9

0x0008,

0xfd04,	// (0x00059ed8) cam6_pano_pane_g

0x2e37,	// (0x0004d00b) main_browser_tag_pane

0x22e3,	// (0x0004c4b7) grid_navstr_albumart_pane

0x25c9,	// (0x0004c79d) cell_navstr_albumart_pane_ParamLimits

0x25c9,	// (0x0004c79d) cell_navstr_albumart_pane

0x25e5,	// (0x0004c7b9) cell_navstr_albumart_pane_g1

0xe5ea,	// (0x000587be) cell_navstr_albumart_pane_g2

0xe5fa,	// (0x000587ce) cell_navstr_albumart_pane_g3

0xe5f2,	// (0x000587c6) cell_navstr_albumart_pane_g4

0x0003,

0xfd17,	// (0x00059eeb) cell_navstr_albumart_pane_g

0xcd18,	// (0x00056eec) bt_list_pane_ParamLimits

0xcd18,	// (0x00056eec) bt_list_pane

0xcd31,	// (0x00056f05) bt_list_pane_t1

0xcd40,	// (0x00056f14) bt_list_pane_t2

0x0001,

0xfd20,	// (0x00059ef4) bt_list_pane_t

0x2e37,	// (0x0004d00b) main_cale_prevew_pane

0xcd4f,	// (0x00056f23) popup_cale_preview_window_ParamLimits

0xcd4f,	// (0x00056f23) popup_cale_preview_window

0x3514,	// (0x0004d6e8) bg_popup_preview_window_pane_cp05_ParamLimits

0x3514,	// (0x0004d6e8) bg_popup_preview_window_pane_cp05

0x25ed,	// (0x0004c7c1) list_cale_preview_pane_ParamLimits

0x25ed,	// (0x0004c7c1) list_cale_preview_pane

0xcd6c,	// (0x00056f40) list_double_cale_preview_pane_ParamLimits

0xcd6c,	// (0x00056f40) list_double_cale_preview_pane

0xcd80,	// (0x00056f54) list_single_cale_preview_pane_ParamLimits

0xcd80,	// (0x00056f54) list_single_cale_preview_pane

0xcd98,	// (0x00056f6c) list_single_cale_preview_pane_g1

0xcda0,	// (0x00056f74) list_single_cale_preview_pane_t1_ParamLimits

0xcda0,	// (0x00056f74) list_single_cale_preview_pane_t1

0xcdb5,	// (0x00056f89) list_double_cale_preview_pane_g1

0xcdbd,	// (0x00056f91) list_double_cale_preview_pane_t1_ParamLimits

0xcdbd,	// (0x00056f91) list_double_cale_preview_pane_t1

0xcdd2,	// (0x00056fa6) list_double_cale_preview_pane_t2_ParamLimits

0xcdd2,	// (0x00056fa6) list_double_cale_preview_pane_t2

0x0001,

0xfd25,	// (0x00059ef9) list_double_cale_preview_pane_t_ParamLimits

0xfd25,	// (0x00059ef9) list_double_cale_preview_pane_t

0x2e37,	// (0x0004d00b) main_ezdial_pane

0x3514,	// (0x0004d6e8) main_sp_fs_email_pane_ParamLimits

0xc6be,	// (0x00056892) cmail_ddmenu_btn01_pane_ParamLimits

0xc6be,	// (0x00056892) cmail_ddmenu_btn01_pane

0xc6db,	// (0x000568af) cmail_ddmenu_btn02_pane_ParamLimits

0xc6db,	// (0x000568af) cmail_ddmenu_btn02_pane

0xc6f9,	// (0x000568cd) cmail_ddmenu_btn03_pane_ParamLimits

0xc6f9,	// (0x000568cd) cmail_ddmenu_btn03_pane

0xc79a,	// (0x0005696e) main_sp_fs_ctrlbar_pane_ParamLimits

0xc7b4,	// (0x00056988) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xca74,	// (0x00056c48) list_cmail_body_pane_ParamLimits

0x21e0,	// (0x0004c3b4) bg_button_pane_cp12

0x21f5,	// (0x0004c3c9) list_single_cmail_header_detail_pane_g3_ParamLimits

0x21f5,	// (0x0004c3c9) list_single_cmail_header_detail_pane_g3

0x223e,	// (0x0004c412) list_single_cmail_header_detail_pane_t2_ParamLimits

0x223e,	// (0x0004c412) list_single_cmail_header_detail_pane_t2

0x0001,

0xfca8,	// (0x00059e7c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfca8,	// (0x00059e7c) list_single_cmail_header_detail_pane_t

0x234b,	// (0x0004c51f) phacti_term_pane_t2_ParamLimits

0x234b,	// (0x0004c51f) phacti_term_pane_t2

0x0001,

0xfcb2,	// (0x00059e86) phacti_term_pane_t_ParamLimits

0xfcb2,	// (0x00059e86) phacti_term_pane_t

0x25f9,	// (0x0004c7cd) aid_size_list_single_double

0xcdea,	// (0x00056fbe) popup_ezdial_listscroll_window

0xce0c,	// (0x00056fe0) popup_number_entry_window_cp01

0x377d,	// (0x0004d951) bg_popup_call_pane_cp09

0x2605,	// (0x0004c7d9) ezdial_list_pane

0x260d,	// (0x0004c7e1) scroll_pane_cp23

0xdd63,	// (0x00057f37) bg_button_pane_cp028_ParamLimits

0xdd63,	// (0x00057f37) bg_button_pane_cp028

0xce1a,	// (0x00056fee) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xce1a,	// (0x00056fee) cmail_ddmenu_btn01_pane_g1

0xce2c,	// (0x00057000) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xce2c,	// (0x00057000) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd2a,	// (0x00059efe) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd2a,	// (0x00059efe) cmail_ddmenu_btn01_pane_g

0x2615,	// (0x0004c7e9) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2615,	// (0x0004c7e9) cmail_ddmenu_btn01_pane_t1

0x4a3e,	// (0x0004ec12) bg_button_pane_cp029_ParamLimits

0x4a3e,	// (0x0004ec12) bg_button_pane_cp029

0xce38,	// (0x0005700c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xce38,	// (0x0005700c) cmail_ddmenu_btn02_pane_g1

0xce50,	// (0x00057024) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xce50,	// (0x00057024) cmail_ddmenu_btn02_pane_t1

0x2e74,	// (0x0004d048) bg_button_pane_cp031_ParamLimits

0x2e74,	// (0x0004d048) bg_button_pane_cp031

0xce38,	// (0x0005700c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xce38,	// (0x0005700c) cmail_ddmenu_btn03_pane_g1

0xce50,	// (0x00057024) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xce50,	// (0x00057024) cmail_ddmenu_btn03_pane_t1

0xa040,	// (0x00054214) cell_dialer2_keypad_pane_t1_ParamLimits

0xa05a,	// (0x0005422e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa05a,	// (0x0005422e) cell_dialer2_keypad_pane_t1_copy1

0xbe4f,	// (0x00056023) ncimui_group_button_pane

0x3514,	// (0x0004d6e8) main_sp_fs_calendar_pane_ParamLimits

0xca8e,	// (0x00056c62) list_single_cmail_header_caption_pane_ParamLimits

0x2396,	// (0x0004c56a) aid_recal_txt_sm_pane

0x2e37,	// (0x0004d00b) mian_recal_day_pane

0x23d8,	// (0x0004c5ac) popup_sp_fs_cale_preview_window_ParamLimits

0x262b,	// (0x0004c7ff) list_recal_day_pane

0x266e,	// (0x0004c842) list_single_recal_day_pane_ParamLimits

0x266e,	// (0x0004c842) list_single_recal_day_pane

0x2680,	// (0x0004c854) list_single_recal_day_pane_g1_ParamLimits

0x2680,	// (0x0004c854) list_single_recal_day_pane_g1

0x268c,	// (0x0004c860) list_single_recal_day_pane_g2_ParamLimits

0x268c,	// (0x0004c860) list_single_recal_day_pane_g2

0x2698,	// (0x0004c86c) list_single_recal_day_pane_g3_ParamLimits

0x2698,	// (0x0004c86c) list_single_recal_day_pane_g3

0xce74,	// (0x00057048) list_single_recal_day_pane_g4_ParamLimits

0xce74,	// (0x00057048) list_single_recal_day_pane_g4

0x26a4,	// (0x0004c878) list_single_recal_day_pane_g5_ParamLimits

0x26a4,	// (0x0004c878) list_single_recal_day_pane_g5

0x26b0,	// (0x0004c884) list_single_recal_day_pane_g6_ParamLimits

0x26b0,	// (0x0004c884) list_single_recal_day_pane_g6

0x0004,

0xfd39,	// (0x00059f0d) list_single_recal_day_pane_g_ParamLimits

0xfd39,	// (0x00059f0d) list_single_recal_day_pane_g

0x26c4,	// (0x0004c898) list_single_recal_day_pane_t1

0x26d6,	// (0x0004c8aa) list_single_recal_day_pane_t2

0x0001,

0xfd44,	// (0x00059f18) list_single_recal_day_pane_t

0xce8c,	// (0x00057060) ncimui_query_button_pane_ParamLimits

0xce8c,	// (0x00057060) ncimui_query_button_pane

0xce9c,	// (0x00057070) ncimui_query_button_pane_t1_ParamLimits

0xce9c,	// (0x00057070) ncimui_query_button_pane_t1

0x26e8,	// (0x0004c8bc) ncimui_query_button_pane_t2_ParamLimits

0x26e8,	// (0x0004c8bc) ncimui_query_button_pane_t2

0x0001,

0xfd49,	// (0x00059f1d) ncimui_query_button_pane_t_ParamLimits

0xfd49,	// (0x00059f1d) ncimui_query_button_pane_t

0xceaf,	// (0x00057083) query_button_pane_ParamLimits

0xceaf,	// (0x00057083) query_button_pane

0x2e37,	// (0x0004d00b) bg_button_pane_cp0028

0x26fb,	// (0x0004c8cf) query_button_pane_t1

0x8a7a,	// (0x00052c4e) main_tport_pane_ParamLimits

0xc971,	// (0x00056b45) bg_popup_window_pane_cp01_ParamLimits

0xc971,	// (0x00056b45) bg_popup_window_pane_cp01

0xc97f,	// (0x00056b53) heading_pane_cp08_ParamLimits

0xc97f,	// (0x00056b53) heading_pane_cp08

0xc98d,	// (0x00056b61) heading_pane_cp07_ParamLimits

0xc98d,	// (0x00056b61) heading_pane_cp07

0xc9fd,	// (0x00056bd1) cell_tport_appsw_pane_g2

0x0002,

0xfc95,	// (0x00059e69) cell_tport_appsw_pane_g

0x8110,	// (0x000522e4) input_candi_list_open_g1

0x3b9f,	// (0x0004dd73) list_cale_time_pane_g6_ParamLimits

0x3b9f,	// (0x0004dd73) list_cale_time_pane_g6

0x8fbf,	// (0x00053193) aid_size_touch_calib_1_ParamLimits

0x8fbf,	// (0x00053193) aid_size_touch_calib_1

0x8fcb,	// (0x0005319f) aid_size_touch_calib_2_ParamLimits

0x8fcb,	// (0x0005319f) aid_size_touch_calib_2

0x8fd9,	// (0x000531ad) aid_size_touch_calib_3_ParamLimits

0x8fd9,	// (0x000531ad) aid_size_touch_calib_3

0x8fe9,	// (0x000531bd) aid_size_touch_calib_4_ParamLimits

0x8fe9,	// (0x000531bd) aid_size_touch_calib_4

0x8ff7,	// (0x000531cb) main_touch_calib_button_group_pane_ParamLimits

0x8ff7,	// (0x000531cb) main_touch_calib_button_group_pane

0x9005,	// (0x000531d9) main_touch_calib_pane_g1_ParamLimits

0x9011,	// (0x000531e5) main_touch_calib_pane_g2_ParamLimits

0x901d,	// (0x000531f1) main_touch_calib_pane_g3_ParamLimits

0x9029,	// (0x000531fd) main_touch_calib_pane_g4_ParamLimits

0xf6de,	// (0x000598b2) main_touch_calib_pane_g_ParamLimits

0x9035,	// (0x00053209) main_touch_calib_pane_t1_ParamLimits

0x904c,	// (0x00053220) main_touch_calib_pane_t2_ParamLimits

0x9065,	// (0x00053239) main_touch_calib_pane_t3_ParamLimits

0x907b,	// (0x0005324f) main_touch_calib_pane_t4_ParamLimits

0x9091,	// (0x00053265) main_touch_calib_pane_t5_ParamLimits

0xf6e7,	// (0x000598bb) main_touch_calib_pane_t_ParamLimits

0xee80,	// (0x00059054) list_single_fp_cale_pane_g3_ParamLimits

0xee80,	// (0x00059054) list_single_fp_cale_pane_g3

0x8a52,	// (0x00052c26) bg_button_pane_cp012_ParamLimits

0x8a52,	// (0x00052c26) bg_vkb2_func_pane_cp03_ParamLimits

0xaf10,	// (0x000550e4) cell_vitu2_function_top_pane_g1_ParamLimits

0x8a52,	// (0x00052c26) bg_vkb2_func_pane_cp04_ParamLimits

0xbdd5,	// (0x00055fa9) main_ncimui_button_group_pane_ParamLimits

0xbdd5,	// (0x00055fa9) main_ncimui_button_group_pane

0xbe3d,	// (0x00056011) main_ncimui_pane_t3_ParamLimits

0xbe3d,	// (0x00056011) main_ncimui_pane_t3

0x22f9,	// (0x0004c4cd) phacti_button_group_pane

0x25f9,	// (0x0004c7cd) aid_size_list_single_double_ParamLimits

0xcdea,	// (0x00056fbe) popup_ezdial_listscroll_window_ParamLimits

0xce0c,	// (0x00056fe0) popup_number_entry_window_cp01_ParamLimits

0xcebc,	// (0x00057090) phacti_button_pane_ParamLimits

0xcebc,	// (0x00057090) phacti_button_pane

0x2e37,	// (0x0004d00b) bg_button_pane_cp14

0x2709,	// (0x0004c8dd) phacti_button_pane_t1

0xcecd,	// (0x000570a1) main_touch_calib_button_pane_ParamLimits

0xcecd,	// (0x000570a1) main_touch_calib_button_pane

0x35df,	// (0x0004d7b3) bg_button_pane_cp18_ParamLimits

0x35df,	// (0x0004d7b3) bg_button_pane_cp18

0x2717,	// (0x0004c8eb) main_touch_calib_button_pane_t1_ParamLimits

0x2717,	// (0x0004c8eb) main_touch_calib_button_pane_t1

0x272d,	// (0x0004c901) main_touch_calib_button_pane_t2_ParamLimits

0x272d,	// (0x0004c901) main_touch_calib_button_pane_t2

0x0001,

0xfd4e,	// (0x00059f22) main_touch_calib_button_pane_t_ParamLimits

0xfd4e,	// (0x00059f22) main_touch_calib_button_pane_t

0x2e37,	// (0x0004d00b) cell_ncimui_button_pane

0x2e37,	// (0x0004d00b) bg_button_pane_cp032

0x274b,	// (0x0004c91f) cell_ncimui_button_pane_t1

0xa0b6,	// (0x0005428a) image3_infobar_pane_ParamLimits

0xa0b6,	// (0x0005428a) image3_infobar_pane

0xc20e,	// (0x000563e2) fs_bigclock_status_pane_ParamLimits

0xc20e,	// (0x000563e2) fs_bigclock_status_pane

0xc21b,	// (0x000563ef) main_fs_bigclock_clock_pane_ParamLimits

0xc21b,	// (0x000563ef) main_fs_bigclock_clock_pane

0xc237,	// (0x0005640b) main_fs_bigclock_indi_pane_ParamLimits

0xc237,	// (0x0005640b) main_fs_bigclock_indi_pane

0xc265,	// (0x00056439) main_fs_bigclock_swipe_pane_ParamLimits

0xc265,	// (0x00056439) main_fs_bigclock_swipe_pane

0x2e37,	// (0x0004d00b) main_fs_clock_dumped_data

0xc29f,	// (0x00056473) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc29f,	// (0x00056473) list_single_fs_bigclock_indicator_pane_g1

0xc2be,	// (0x00056492) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc2be,	// (0x00056492) list_single_fs_bigclock_indicator_pane_g2

0xc2d8,	// (0x000564ac) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc2d8,	// (0x000564ac) list_single_fs_bigclock_indicator_pane_g3

0xc2f4,	// (0x000564c8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc2f4,	// (0x000564c8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbef,	// (0x00059dc3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbef,	// (0x00059dc3) list_single_fs_bigclock_indicator_pane_g

0xc323,	// (0x000564f7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc323,	// (0x000564f7) list_single_fs_bigclock_indicator_pane_t1

0xc34b,	// (0x0005651f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc34b,	// (0x0005651f) list_single_fs_bigclock_indicator_pane_t2

0xc373,	// (0x00056547) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc373,	// (0x00056547) list_single_fs_bigclock_indicator_pane_t3

0xc39b,	// (0x0005656f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc39b,	// (0x0005656f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbfa,	// (0x00059dce) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbfa,	// (0x00059dce) list_single_fs_bigclock_indicator_pane_t

0x2759,	// (0x0004c92d) image3_infobar_fav_pane_ParamLimits

0x2759,	// (0x0004c92d) image3_infobar_fav_pane

0x2769,	// (0x0004c93d) image3_infobar_loc_pane_ParamLimits

0x2769,	// (0x0004c93d) image3_infobar_loc_pane

0x277f,	// (0x0004c953) image3_infobar_time_pane_ParamLimits

0x277f,	// (0x0004c953) image3_infobar_time_pane

0x37c7,	// (0x0004d99b) image3_infobar_time_pane_g1

0x278f,	// (0x0004c963) image3_infobar_time_pane_t1

0x37c7,	// (0x0004d99b) image3_infobar_loc_pane_g1

0x279d,	// (0x0004c971) image3_infobar_loc_pane_g2

0x0001,

0xfd53,	// (0x00059f27) image3_infobar_loc_pane_g

0x27a5,	// (0x0004c979) image3_infobar_loc_pane_t1

0x37c7,	// (0x0004d99b) image3_infobar_fav_pane_g1

0x27b3,	// (0x0004c987) image3_infobar_fav_pane_g2

0x0001,

0xfd58,	// (0x00059f2c) image3_infobar_fav_pane_g

0x27bb,	// (0x0004c98f) fs_bigclock_status_battery_pane

0x27c4,	// (0x0004c998) fs_bigclock_status_signal_pane

0x27cd,	// (0x0004c9a1) fs_bigclock_status_title_pane

0x27d6,	// (0x0004c9aa) fs_bigclock_status_signal_pane_g1

0x27df,	// (0x0004c9b3) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd5d,	// (0x00059f31) fs_bigclock_status_signal_pane_g

0x27e7,	// (0x0004c9bb) fs_bigclock_status_battery_pane_g1

0x27f0,	// (0x0004c9c4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd62,	// (0x00059f36) fs_bigclock_status_battery_pane_g

0x27f8,	// (0x0004c9cc) fs_bigclock_status_title_pane_t1

0xcedd,	// (0x000570b1) main_fs_bigclock_clock_pane_g1

0xcedd,	// (0x000570b1) main_fs_bigclock_clock_pane_g2

0xceec,	// (0x000570c0) main_fs_bigclock_clock_pane_g3

0xceec,	// (0x000570c0) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd67,	// (0x00059f3b) main_fs_bigclock_clock_pane_g

0xcefc,	// (0x000570d0) main_fs_bigclock_clock_pane_t1

0xcf11,	// (0x000570e5) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd70,	// (0x00059f44) main_fs_bigclock_clock_pane_t

0x2806,	// (0x0004c9da) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2806,	// (0x0004c9da) list_single_fs_bigclock_indicator_pane

0x2817,	// (0x0004c9eb) list_single_fs_bigclock_pane_ParamLimits

0x2817,	// (0x0004c9eb) list_single_fs_bigclock_pane

0x283d,	// (0x0004ca11) main_fs_bigclock_indicator_pane_t1

0x284c,	// (0x0004ca20) list_single_fs_bigclock_pane_g1

0x2854,	// (0x0004ca28) list_single_fs_bigclock_pane_t1

0x37c7,	// (0x0004d99b) main_fs_bigclock_swipe_pane_g1

0x2897,	// (0x0004ca6b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd81,	// (0x00059f55) main_fs_bigclock_swipe_pane_g

0x289f,	// (0x0004ca73) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x289f,	// (0x0004ca73) main_fs_bigclock_swipe_pane_t1

0x7adc,	// (0x00051cb0) call_type_pane_ParamLimits

0x2e37,	// (0x0004d00b) main_btmg_pane

0x24d5,	// (0x0004c6a9) list_single_cale_mrui_row_pane_g2_ParamLimits

0x24d5,	// (0x0004c6a9) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcf4,	// (0x00059ec8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcf4,	// (0x00059ec8) list_single_cale_mrui_row_pane_g

0x2654,	// (0x0004c828) list_recal_vselct_arw_lo_pane

0x265c,	// (0x0004c830) list_recal_vselct_arw_up_pane

0x2664,	// (0x0004c838) list_recal_vselct_pane

0xcf68,	// (0x0005713c) btmg_button_pane

0xcf74,	// (0x00057148) main_btmg_pane_g1

0x2e37,	// (0x0004d00b) bg_button_pane_cp044

0x28bc,	// (0x0004ca90) btmg_button_pane_t1

0xe73c,	// (0x00058910) aid_listscroll_gen

0x3514,	// (0x0004d6e8) main_cntbar_detail_pane

0x2190,	// (0x0004c364) list_cmail_folder_pane

0xf079,	// (0x0005924d) sp_fs_scroll_pane_cp03_ParamLimits

0xcf7c,	// (0x00057150) list_single_fs_dyc_pane_cp01_ParamLimits

0xcf7c,	// (0x00057150) list_single_fs_dyc_pane_cp01

0x28ca,	// (0x0004ca9e) aid_size_cmail_indent

0x28d3,	// (0x0004caa7) list_single_dyc_row_pane_cp01

0xcfba,	// (0x0005718e) cntbar_detail_list_pane_ParamLimits

0xcfba,	// (0x0005718e) cntbar_detail_list_pane

0xcffa,	// (0x000571ce) main_cntbar_detail_cont_pane_ParamLimits

0xcffa,	// (0x000571ce) main_cntbar_detail_cont_pane

0x7ad0,	// (0x00051ca4) scroll_pane_cp032_ParamLimits

0x7ad0,	// (0x00051ca4) scroll_pane_cp032

0xd006,	// (0x000571da) cntbar_detail_list_event_pane_ParamLimits

0xd006,	// (0x000571da) cntbar_detail_list_event_pane

0xcfc8,	// (0x0005719c) cntbar_detail_list_shct_pane

0x3a2a,	// (0x0004dbfe) aid_list_gen

0x28dc,	// (0x0004cab0) aid_scroll

0x28e5,	// (0x0004cab9) aid_size_touch_scroll_bar

0xc53c,	// (0x00056710) aid_list_double

0xd016,	// (0x000571ea) aid_list_single

0xd01f,	// (0x000571f3) aid_list_single_lg

0xd028,	// (0x000571fc) aid_list_z_g_a_sm

0xd030,	// (0x00057204) aid_list_z_g_d

0xd038,	// (0x0005720c) aid_txt_z_prm

0xd046,	// (0x0005721a) aid_txt_z_prm_cp01

0xd054,	// (0x00057228) aid_txt_z_sec

0xd062,	// (0x00057236) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd062,	// (0x00057236) main_cntbar_detail_cont_pane_g1

0xd06f,	// (0x00057243) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd06f,	// (0x00057243) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd86,	// (0x00059f5a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd86,	// (0x00059f5a) main_cntbar_detail_cont_pane_g

0x28ee,	// (0x0004cac2) main_cntbar_detail_cont_pane_t1

0x28fc,	// (0x0004cad0) main_cntbar_detail_cont_pane_t2

0x290a,	// (0x0004cade) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd8b,	// (0x00059f5f) main_cntbar_detail_cont_pane_t

0xd07b,	// (0x0005724f) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd07b,	// (0x0005724f) cell_cntbar_detail_list_shct_pane

0x2918,	// (0x0004caec) cntbar_detail_list_shct_pane_g1

0x2921,	// (0x0004caf5) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd92,	// (0x00059f66) cntbar_detail_list_shct_pane_g

0xd08f,	// (0x00057263) cntbar_detail_list_event_pane_g1_ParamLimits

0xd08f,	// (0x00057263) cntbar_detail_list_event_pane_g1

0xd09b,	// (0x0005726f) cntbar_detail_list_event_pane_g2_ParamLimits

0xd09b,	// (0x0005726f) cntbar_detail_list_event_pane_g2

0x0005,

0xfd97,	// (0x00059f6b) cntbar_detail_list_event_pane_g_ParamLimits

0xfd97,	// (0x00059f6b) cntbar_detail_list_event_pane_g

0xd109,	// (0x000572dd) cntbar_detail_list_event_pane_t1_ParamLimits

0xd109,	// (0x000572dd) cntbar_detail_list_event_pane_t1

0xd11e,	// (0x000572f2) cntbar_detail_list_event_pane_t2_ParamLimits

0xd11e,	// (0x000572f2) cntbar_detail_list_event_pane_t2

0x0002,

0xfda4,	// (0x00059f78) cntbar_detail_list_event_pane_t_ParamLimits

0xfda4,	// (0x00059f78) cntbar_detail_list_event_pane_t

0x37c7,	// (0x0004d99b) cell_cntbar_detail_list_shct_pane_g1

0x7e74,	// (0x00052048) navi_pane_mv_g3

0x3514,	// (0x0004d6e8) main_cntbar_detail_pane_ParamLimits

0x2e37,	// (0x0004d00b) main_notif_wgt_pane

0x9d38,	// (0x00053f0c) aid_tch_main_mp4_pane_g4

0x9fa1,	// (0x00054175) popup_slider_window_cp02

0x264a,	// (0x0004c81e) list_recal_day_event_pane

0xcf9a,	// (0x0005716e) cntbar_detail_btn_pane_ParamLimits

0xcf9a,	// (0x0005716e) cntbar_detail_btn_pane

0xcfaa,	// (0x0005717e) cntbar_detail_btn_pane_cp01_ParamLimits

0xcfaa,	// (0x0005717e) cntbar_detail_btn_pane_cp01

0xcfc8,	// (0x0005719c) cntbar_detail_list_shct_pane_ParamLimits

0xcfd4,	// (0x000571a8) cntbar_detail_pane_g1_ParamLimits

0xcfd4,	// (0x000571a8) cntbar_detail_pane_g1

0xcfe4,	// (0x000571b8) cntbar_detail_pane_t1_ParamLimits

0xcfe4,	// (0x000571b8) cntbar_detail_pane_t1

0xd0a7,	// (0x0005727b) cntbar_detail_list_event_pane_g3_ParamLimits

0xd0a7,	// (0x0005727b) cntbar_detail_list_event_pane_g3

0xd0bf,	// (0x00057293) cntbar_detail_list_event_pane_g4_ParamLimits

0xd0bf,	// (0x00057293) cntbar_detail_list_event_pane_g4

0xd0d7,	// (0x000572ab) cntbar_detail_list_event_pane_g5_ParamLimits

0xd0d7,	// (0x000572ab) cntbar_detail_list_event_pane_g5

0xd0ef,	// (0x000572c3) cntbar_detail_list_event_pane_g6_ParamLimits

0xd0ef,	// (0x000572c3) cntbar_detail_list_event_pane_g6

0xd133,	// (0x00057307) cntbar_detail_list_event_pane_t3_ParamLimits

0xd133,	// (0x00057307) cntbar_detail_list_event_pane_t3

0xd145,	// (0x00057319) popup_notif_wgt_window_ParamLimits

0xd145,	// (0x00057319) popup_notif_wgt_window

0xd155,	// (0x00057329) popup_submenu_window_cp01_ParamLimits

0xd155,	// (0x00057329) popup_submenu_window_cp01

0x377d,	// (0x0004d951) bg_popup_window_pane_cp10

0x292a,	// (0x0004cafe) listscroll_notif_wgt_pane

0x293c,	// (0x0004cb10) list_notif_wgt_window

0x2945,	// (0x0004cb19) scroll_pane_cp033

0xd165,	// (0x00057339) list_notif_wgt_row_pane_ParamLimits

0xd165,	// (0x00057339) list_notif_wgt_row_pane

0x294e,	// (0x0004cb22) aid_size_list_notif_wgt_del

0x295b,	// (0x0004cb2f) list_notif_wgt_row_pane_g1

0x2967,	// (0x0004cb3b) list_notif_wgt_row_pane_g2

0x2976,	// (0x0004cb4a) list_notif_wgt_row_pane_g3

0x0002,

0xfdab,	// (0x00059f7f) list_notif_wgt_row_pane_g

0x2983,	// (0x0004cb57) list_notif_wgt_row_pane_t1

0x2999,	// (0x0004cb6d) list_notif_wgt_row_pane_t2

0x29ab,	// (0x0004cb7f) list_notif_wgt_row_pane_t3

0x0002,

0xfdb2,	// (0x00059f86) list_notif_wgt_row_pane_t

0x11cb,	// (0x0004b39f) list_recal_day_event_pane_g1

0x29bd,	// (0x0004cb91) list_recal_day_event_pane_t1

0x2e37,	// (0x0004d00b) bg_button_pane_cp045

0xd179,	// (0x0005734d) cntbar_detail_btn_pane_t1

0x4a3e,	// (0x0004ec12) main_callh_pane_ParamLimits

0x4a3e,	// (0x0004ec12) main_callh_pane

0x2e37,	// (0x0004d00b) main_coverflow0_pane

0x2e37,	// (0x0004d00b) main_wgtman_pane

0xc27d,	// (0x00056451) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc27d,	// (0x00056451) main_fs_bigclock_unlock_btn_pane

0xc9f5,	// (0x00056bc9) bg_button_pane_cp16

0xca05,	// (0x00056bd9) cell_tport_appsw_pane_g3

0xd187,	// (0x0005735b) cf0_flow_pane_ParamLimits

0xd187,	// (0x0005735b) cf0_flow_pane

0x29cc,	// (0x0004cba0) listscroll_cf0_pane

0x29d7,	// (0x0004cbab) main_cf0_pane_g1

0xd196,	// (0x0005736a) main_cf0_pane_t1_ParamLimits

0xd196,	// (0x0005736a) main_cf0_pane_t1

0xd1aa,	// (0x0005737e) main_cf0_pane_t2_ParamLimits

0xd1aa,	// (0x0005737e) main_cf0_pane_t2

0x0001,

0xfdbe,	// (0x00059f92) main_cf0_pane_t_ParamLimits

0xfdbe,	// (0x00059f92) main_cf0_pane_t

0x29e9,	// (0x0004cbbd) scroll_pane_cp11

0xd1be,	// (0x00057392) cf0_flow_pane_g1

0xd1c6,	// (0x0005739a) cf0_flow_pane_g2

0x0001,

0xfdc3,	// (0x00059f97) cf0_flow_pane_g

0xd1ce,	// (0x000573a2) cf0_flow_pane_t1

0x2e37,	// (0x0004d00b) main_call6_pane

0x2e37,	// (0x0004d00b) main_calllock_pane

0xd1dc,	// (0x000573b0) call6_btn_grp_pane_ParamLimits

0xd1dc,	// (0x000573b0) call6_btn_grp_pane

0xd1e9,	// (0x000573bd) call6_pane_g1_ParamLimits

0xd1e9,	// (0x000573bd) call6_pane_g1

0xd1f9,	// (0x000573cd) popup_call6_1st_window_ParamLimits

0xd1f9,	// (0x000573cd) popup_call6_1st_window

0xd209,	// (0x000573dd) popup_call6_2nd_window_ParamLimits

0xd209,	// (0x000573dd) popup_call6_2nd_window

0xd219,	// (0x000573ed) cell_call6_btn_pane_ParamLimits

0xd219,	// (0x000573ed) cell_call6_btn_pane

0x377d,	// (0x0004d951) bg_popup_call2_in_pane_cp03

0x29f4,	// (0x0004cbc8) popup_call6_1st_window_g1

0x29fc,	// (0x0004cbd0) popup_call6_1st_window_g2

0x2a04,	// (0x0004cbd8) popup_call6_1st_window_g3

0x0002,

0xfdc8,	// (0x00059f9c) popup_call6_1st_window_g

0x2a0c,	// (0x0004cbe0) popup_call6_1st_window_t1

0x2a1b,	// (0x0004cbef) popup_call6_1st_window_t2

0x2a2b,	// (0x0004cbff) popup_call6_1st_window_t3

0x0002,

0xfdcf,	// (0x00059fa3) popup_call6_1st_window_t

0x377d,	// (0x0004d951) bg_popup_call2_in_pane_cp04

0x2a3b,	// (0x0004cc0f) popup_call6_2nd_window_g1

0x2a43,	// (0x0004cc17) popup_call6_2nd_window_g2

0x2a4b,	// (0x0004cc1f) popup_call6_2nd_window_g3

0x0002,

0xfdd6,	// (0x00059faa) popup_call6_2nd_window_g

0x2a53,	// (0x0004cc27) popup_call6_2nd_window_t1

0x5c37,	// (0x0004fe0b) bg_button_pane_cp15

0xd22a,	// (0x000573fe) cell_call6_btn_pane_g1

0xd233,	// (0x00057407) cell_call6_btn_pane_t1

0xd242,	// (0x00057416) listscroll_wgtman_pane_ParamLimits

0xd242,	// (0x00057416) listscroll_wgtman_pane

0xd25e,	// (0x00057432) wgtman_btn_pane_ParamLimits

0xd25e,	// (0x00057432) wgtman_btn_pane

0x3f97,	// (0x0004e16b) aid_scroll_copy1

0x2a6b,	// (0x0004cc3f) list_wgtman_pane

0xd293,	// (0x00057467) wgtman_btn_pane_g1_ParamLimits

0xd293,	// (0x00057467) wgtman_btn_pane_g1

0xd2bb,	// (0x0005748f) wgtman_btn_pane_t1_ParamLimits

0xd2bb,	// (0x0005748f) wgtman_btn_pane_t1

0x2a75,	// (0x0004cc49) wgtman_btn_pane_t2_ParamLimits

0x2a75,	// (0x0004cc49) wgtman_btn_pane_t2

0x0001,

0xfddd,	// (0x00059fb1) wgtman_btn_pane_t_ParamLimits

0xfddd,	// (0x00059fb1) wgtman_btn_pane_t

0xd2f2,	// (0x000574c6) listrow_wgtman_pane_ParamLimits

0xd2f2,	// (0x000574c6) listrow_wgtman_pane

0xd309,	// (0x000574dd) listrow_wgtman_pane_g1

0xd316,	// (0x000574ea) listrow_wgtman_pane_g2

0x0001,

0xfde2,	// (0x00059fb6) listrow_wgtman_pane_g

0xd334,	// (0x00057508) listrow_wgtman_pane_t1

0xd34c,	// (0x00057520) listrow_wgtman_pane_t2

0x0001,

0xfde7,	// (0x00059fbb) listrow_wgtman_pane_t

0xd372,	// (0x00057546) wait_bar_pane_cp09

0x2a8c,	// (0x0004cc60) main_calllock_btn_pane

0x2a96,	// (0x0004cc6a) main_calllock_pane_g1

0x2e37,	// (0x0004d00b) bg_button_pane_cp17

0x2a62,	// (0x0004cc36) main_calllock_btn_pane_g1

0x2aa2,	// (0x0004cc76) main_calllock_btn_pane_t1

0x2e37,	// (0x0004d00b) main_dialer3_pane

0x2e37,	// (0x0004d00b) main_fmrd2_pane

0x37c7,	// (0x0004d99b) main_fs_bigclock_unlock_btn_pane_g1

0xd38c,	// (0x00057560) main_fs_bigclock_unlock_btn_pane_t1

0xd39a,	// (0x0005756e) area_fmrd2_info_pane_ParamLimits

0xd39a,	// (0x0005756e) area_fmrd2_info_pane

0xd3a6,	// (0x0005757a) area_fmrd2_visual_pane_ParamLimits

0xd3a6,	// (0x0005757a) area_fmrd2_visual_pane

0xd3b4,	// (0x00057588) fmrd2_indi_pane_ParamLimits

0xd3b4,	// (0x00057588) fmrd2_indi_pane

0xd3c1,	// (0x00057595) area_fmrd2_visual_pane_g1

0xd3c9,	// (0x0005759d) area_fmrd2_visual_pane_t1

0xd3d9,	// (0x000575ad) area_fmrd2_visual_pane_t2

0xd3e9,	// (0x000575bd) area_fmrd2_visual_pane_t3

0x0002,

0xfdf1,	// (0x00059fc5) area_fmrd2_visual_pane_t

0xd3f9,	// (0x000575cd) area_fmrd2_info_pane_g1

0xd401,	// (0x000575d5) area_fmrd2_info_pane_t1

0xd411,	// (0x000575e5) area_fmrd2_info_pane_t2

0xd421,	// (0x000575f5) area_fmrd2_info_pane_t3

0xd431,	// (0x00057605) area_fmrd2_info_pane_t4

0x0003,

0xfdf8,	// (0x00059fcc) area_fmrd2_info_pane_t

0xd441,	// (0x00057615) fmrd2_indi_pane_t1

0xd451,	// (0x00057625) fmrd2_indi_pane_t2

0xd461,	// (0x00057635) fmrd2_indi_pane_t3

0x0002,

0xfe01,	// (0x00059fd5) fmrd2_indi_pane_t

0xc305,	// (0x000564d9) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc305,	// (0x000564d9) list_single_fs_bigclock_indicator_pane_g5

0xc3ba,	// (0x0005658e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc3ba,	// (0x0005658e) list_single_fs_bigclock_indicator_pane_t5

0xcb60,	// (0x00056d34) aid_cell_bcale_month_pane_ParamLimits

0xcb60,	// (0x00056d34) aid_cell_bcale_month_pane

0xcb7e,	// (0x00056d52) bcale_month_pane_ParamLimits

0xcb7e,	// (0x00056d52) bcale_month_pane

0xcb9c,	// (0x00056d70) bcale_preview_pane_ParamLimits

0xcb9c,	// (0x00056d70) bcale_preview_pane

0x2854,	// (0x0004ca28) list_single_fs_bigclock_pane_t1_ParamLimits

0x2873,	// (0x0004ca47) list_single_fs_bigclock_pane_t2_ParamLimits

0x2873,	// (0x0004ca47) list_single_fs_bigclock_pane_t2

0x0001,

0xfd7c,	// (0x00059f50) list_single_fs_bigclock_pane_t_ParamLimits

0xfd7c,	// (0x00059f50) list_single_fs_bigclock_pane_t

0xd384,	// (0x00057558) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdec,	// (0x00059fc0) main_fs_bigclock_unlock_btn_pane_g

0xd471,	// (0x00057645) aid_dia3_key_size_ParamLimits

0xd471,	// (0x00057645) aid_dia3_key_size

0xd47d,	// (0x00057651) aid_dia3_listrow_size_ParamLimits

0xd47d,	// (0x00057651) aid_dia3_listrow_size

0xd48d,	// (0x00057661) dia3_keypad_fun_pane_ParamLimits

0xd48d,	// (0x00057661) dia3_keypad_fun_pane

0xd49d,	// (0x00057671) dia3_keypad_num_pane_ParamLimits

0xd49d,	// (0x00057671) dia3_keypad_num_pane

0xd4ad,	// (0x00057681) dia3_listscroll_pane_ParamLimits

0xd4ad,	// (0x00057681) dia3_listscroll_pane

0xd4bb,	// (0x0005768f) dia3_numentry_pane_ParamLimits

0xd4bb,	// (0x0005768f) dia3_numentry_pane

0x2ab1,	// (0x0004cc85) dia3_list_pane

0xd4c9,	// (0x0005769d) scroll_pane_cp12

0x2e37,	// (0x0004d00b) bg_dia3_numentry_pane

0xd4d4,	// (0x000576a8) dia3_numentry_pane_t1

0xd4e3,	// (0x000576b7) cell_dia3_key_num_pane

0xd4eb,	// (0x000576bf) cell_dia3_key0_fun_pane_ParamLimits

0xd4eb,	// (0x000576bf) cell_dia3_key0_fun_pane

0xd4f8,	// (0x000576cc) cell_dia3_key1_fun_pane_ParamLimits

0xd4f8,	// (0x000576cc) cell_dia3_key1_fun_pane

0xd505,	// (0x000576d9) dia3_listrow_pane

0x1b53,	// (0x0004bd27) bg_dia3_numentry_pane_g1

0x2e37,	// (0x0004d00b) bg_button_pane_cp21

0xd512,	// (0x000576e6) cell_dia3_key_num_pane_t1

0xd520,	// (0x000576f4) cell_dia3_key_num_pane_t2

0xd52f,	// (0x00057703) cell_dia3_key_num_pane_t3

0xd53e,	// (0x00057712) cell_dia3_key_num_pane_t4

0x0003,

0xfe08,	// (0x00059fdc) cell_dia3_key_num_pane_t

0x2e37,	// (0x0004d00b) bg_button_pane_cp19

0xd54d,	// (0x00057721) cell_dia3_key0_fun_pane_g1

0x2e37,	// (0x0004d00b) bg_button_pane_cp20

0xd555,	// (0x00057729) cell_dia3_key1_fun_pane_g1

0xd55d,	// (0x00057731) area_left_week_number_pane

0xd570,	// (0x00057744) area_top_day_name_pane

0xd57e,	// (0x00057752) frame_month_view_pane

0x2abc,	// (0x0004cc90) grid_month_view_pane

0xd593,	// (0x00057767) cell_top_day_name_pane_ParamLimits

0xd593,	// (0x00057767) cell_top_day_name_pane

0xd5af,	// (0x00057783) cell_area_left_week_number_pane_ParamLimits

0xd5af,	// (0x00057783) cell_area_left_week_number_pane

0xd5d0,	// (0x000577a4) cell_month_view_pane_ParamLimits

0xd5d0,	// (0x000577a4) cell_month_view_pane

0x2aca,	// (0x0004cc9e) frm_month_g1

0xd5fc,	// (0x000577d0) frm_month_g2

0xd60d,	// (0x000577e1) frm_month_g3

0xd61e,	// (0x000577f2) frm_month_g4

0xd62f,	// (0x00057803) frm_month_g5

0xd640,	// (0x00057814) frm_month_g6

0xd653,	// (0x00057827) frm_month_g7

0x2ad7,	// (0x0004ccab) frm_month_g8

0xd666,	// (0x0005783a) frm_month_g9

0xd673,	// (0x00057847) frm_month_g10

0xd680,	// (0x00057854) frm_month_g11

0xd68d,	// (0x00057861) frm_month_g12

0xd69a,	// (0x0005786e) frm_month_g13

0xd6a9,	// (0x0005787d) frm_month_g14

0xd6b8,	// (0x0005788c) frm_month_g15

0xd6c7,	// (0x0005789b) frm_month_g16

0x000f,

0xfe11,	// (0x00059fe5) frm_month_g

0x2ae4,	// (0x0004ccb8) cell_top_day_name_pane_t1

0xd6d6,	// (0x000578aa) cell_area_left_week_number_pane_g1

0xd6e5,	// (0x000578b9) cell_area_left_week_number_pane_t1

0x356d,	// (0x0004d741) cell_month_view_pane_g1

0xd6fb,	// (0x000578cf) cell_month_view_pane_t1

0x2e37,	// (0x0004d00b) main_fps_pane

0x1faa,	// (0x0004c17e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x1faa,	// (0x0004c17e) cmail_ddmenu_btn02_pane_cp1

0x1fc6,	// (0x0004c19a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x1fc6,	// (0x0004c19a) cmail_ddmenu_btn02_pane_cp2

0xce44,	// (0x00057018) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xce44,	// (0x00057018) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd2f,	// (0x00059f03) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd2f,	// (0x00059f03) cmail_ddmenu_btn02_pane_g

0xce62,	// (0x00057036) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xce62,	// (0x00057036) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd34,	// (0x00059f08) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd34,	// (0x00059f08) cmail_ddmenu_btn02_pane_t

0xd711,	// (0x000578e5) fps_text_pane_ParamLimits

0xd711,	// (0x000578e5) fps_text_pane

0xd71e,	// (0x000578f2) main_fps_pane_g1_ParamLimits

0xd71e,	// (0x000578f2) main_fps_pane_g1

0xd72a,	// (0x000578fe) wait_bar_pane_cp010_ParamLimits

0xd72a,	// (0x000578fe) wait_bar_pane_cp010

0xd736,	// (0x0005790a) fps_text_pane_t1_ParamLimits

0xd736,	// (0x0005790a) fps_text_pane_t1

0xa45e,	// (0x00054632) cam4_image_uncrop_pane_g1

0xa467,	// (0x0005463b) cam4_image_uncrop_pane_g2

0xa470,	// (0x00054644) cam4_image_uncrop_pane_g3

0xa479,	// (0x0005464d) cam4_image_uncrop_pane_g4

0x0003,

0xf87a,	// (0x00059a4e) cam4_image_uncrop_pane_g

0xd505,	// (0x000576d9) dia3_listrow_pane_ParamLimits

0x2e37,	// (0x0004d00b) main_phob2_pane

0xc9d7,	// (0x00056bab) cell_tport_appsw_pane_cp02_ParamLimits

0xc9d7,	// (0x00056bab) cell_tport_appsw_pane_cp02

0xc9e6,	// (0x00056bba) cell_tport_appsw_pane_cp03_ParamLimits

0xc9e6,	// (0x00056bba) cell_tport_appsw_pane_cp03

0x2e37,	// (0x0004d00b) phob2_contact_card_pane

0x2e37,	// (0x0004d00b) phob2_listscroll_pane

0x2af7,	// (0x0004cccb) phob2_list_pane

0x2aff,	// (0x0004ccd3) scroll_pane_cp034

0xd74f,	// (0x00057923) phob2_cc_data_pane_ParamLimits

0xd74f,	// (0x00057923) phob2_cc_data_pane

0xd766,	// (0x0005793a) phob2_cc_listscroll_pane_ParamLimits

0xd766,	// (0x0005793a) phob2_cc_listscroll_pane

0xd2f2,	// (0x000574c6) list_double_large_graphic_phob2_pane_ParamLimits

0xd2f2,	// (0x000574c6) list_double_large_graphic_phob2_pane

0xd782,	// (0x00057956) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd782,	// (0x00057956) list_double_large_graphic_phob2_pane_g1

0xd78f,	// (0x00057963) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd78f,	// (0x00057963) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe32,	// (0x0005a006) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe32,	// (0x0005a006) list_double_large_graphic_phob2_pane_g

0xd7b5,	// (0x00057989) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd7b5,	// (0x00057989) list_double_large_graphic_phob2_pane_t1

0xd7ca,	// (0x0005799e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd7ca,	// (0x0005799e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe3b,	// (0x0005a00f) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe3b,	// (0x0005a00f) list_double_large_graphic_phob2_pane_t

0x2e37,	// (0x0004d00b) list_highlight_pane_cp024

0xd7df,	// (0x000579b3) phob2_cc_button_pane

0xd7e7,	// (0x000579bb) phob2_cc_data_pane_g1_ParamLimits

0xd7e7,	// (0x000579bb) phob2_cc_data_pane_g1

0xd7fc,	// (0x000579d0) phob2_cc_data_pane_g2_ParamLimits

0xd7fc,	// (0x000579d0) phob2_cc_data_pane_g2

0x0001,

0xfe40,	// (0x0005a014) phob2_cc_data_pane_g_ParamLimits

0xfe40,	// (0x0005a014) phob2_cc_data_pane_g

0xd80c,	// (0x000579e0) phob2_cc_data_pane_t1_ParamLimits

0xd80c,	// (0x000579e0) phob2_cc_data_pane_t1

0xd825,	// (0x000579f9) phob2_cc_data_pane_t2_ParamLimits

0xd825,	// (0x000579f9) phob2_cc_data_pane_t2

0xd83e,	// (0x00057a12) phob2_cc_data_pane_t3_ParamLimits

0xd83e,	// (0x00057a12) phob2_cc_data_pane_t3

0x0002,

0xfe45,	// (0x0005a019) phob2_cc_data_pane_t_ParamLimits

0xfe45,	// (0x0005a019) phob2_cc_data_pane_t

0x2b07,	// (0x0004ccdb) phob2_cc_list_pane_ParamLimits

0x2b07,	// (0x0004ccdb) phob2_cc_list_pane

0x1274,	// (0x0004b448) scroll_pane_cp035_ParamLimits

0x1274,	// (0x0004b448) scroll_pane_cp035

0x3514,	// (0x0004d6e8) bg_button_pane_cp033

0x2b13,	// (0x0004cce7) phob2_cc_button_pane_g1

0x2b1f,	// (0x0004ccf3) phob2_cc_button_pane_t1

0x2b34,	// (0x0004cd08) phob2_cc_button_pane_t2

0x0001,

0xfe4c,	// (0x0005a020) phob2_cc_button_pane_t

0xd857,	// (0x00057a2b) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd857,	// (0x00057a2b) list_double_large_graphic_phob2_cc_pane

0xd8a6,	// (0x00057a7a) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd8a6,	// (0x00057a7a) list_double_large_graphic_phob2_cc_pane_g1

0xd8b7,	// (0x00057a8b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd8b7,	// (0x00057a8b) list_double_large_graphic_phob2_cc_pane_g2

0xd8c3,	// (0x00057a97) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd8c3,	// (0x00057a97) list_double_large_graphic_phob2_cc_pane_g3

0xd8cf,	// (0x00057aa3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd8cf,	// (0x00057aa3) list_double_large_graphic_phob2_cc_pane_g4

0xd8db,	// (0x00057aaf) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd8db,	// (0x00057aaf) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe51,	// (0x0005a025) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe51,	// (0x0005a025) list_double_large_graphic_phob2_cc_pane_g

0xd8e7,	// (0x00057abb) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd8e7,	// (0x00057abb) list_double_large_graphic_phob2_cc_pane_t1

0xd910,	// (0x00057ae4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd910,	// (0x00057ae4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe5c,	// (0x0005a030) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe5c,	// (0x0005a030) list_double_large_graphic_phob2_cc_pane_t

0x2b46,	// (0x0004cd1a) list_highlight_pane_cp025_ParamLimits

0x2b46,	// (0x0004cd1a) list_highlight_pane_cp025

0x3514,	// (0x0004d6e8) bg_button_pane_cp033_ParamLimits

0x2b13,	// (0x0004cce7) phob2_cc_button_pane_g1_ParamLimits

0x2b1f,	// (0x0004ccf3) phob2_cc_button_pane_t1_ParamLimits

0x2b34,	// (0x0004cd08) phob2_cc_button_pane_t2_ParamLimits

0xfe4c,	// (0x0005a020) phob2_cc_button_pane_t_ParamLimits

0x5c2b,	// (0x0004fdff) popup_wgtman_window

0x10a4,	// (0x0004b278) scroll_pane_cp038

0xd27b,	// (0x0005744f) wgtman_btn_pane_cp_01_ParamLimits

0xd27b,	// (0x0005744f) wgtman_btn_pane_cp_01

0x2b54,	// (0x0004cd28) wgtman_content_pane

0x2b5d,	// (0x0004cd31) wgtman_heading_pane

0x2e37,	// (0x0004d00b) bg_heading_pane_cp02

0x2b66,	// (0x0004cd3a) wgtman_heading_pane_g1

0x2b6e,	// (0x0004cd42) wgtman_heading_pane_t1

0x2b7c,	// (0x0004cd50) scroll_pane_cp036

0x2b84,	// (0x0004cd58) wgtman_list_pane

0x1e67,	// (0x0004c03b) wgtman_list_pane_t1_ParamLimits

0x1e67,	// (0x0004c03b) wgtman_list_pane_t1

0xa3bb,	// (0x0005458f) cam4_grid_pane

0xb0d9,	// (0x000552ad) bg_button_pane_cp015_ParamLimits

0xb0eb,	// (0x000552bf) bg_button_pane_cp016_ParamLimits

0xb0fe,	// (0x000552d2) bg_button_pane_cp017_ParamLimits

0xb154,	// (0x00055328) popup_vitu2_query_window_g3_ParamLimits

0xb154,	// (0x00055328) popup_vitu2_query_window_g3

0xb213,	// (0x000553e7) popup_vitu2_query_window_t6_ParamLimits

0xb213,	// (0x000553e7) popup_vitu2_query_window_t6

0xb23e,	// (0x00055412) popup_vitu2_query_window_t7_ParamLimits

0xb23e,	// (0x00055412) popup_vitu2_query_window_t7

0x0e43,	// (0x0004b017) cam4_grid_pane_g1

0x0e4c,	// (0x0004b020) cam4_grid_pane_g2

0x2b8c,	// (0x0004cd60) cam4_grid_pane_g3

0x2b95,	// (0x0004cd69) cam4_grid_pane_g4

0x0003,

0xfe61,	// (0x0005a035) cam4_grid_pane_g

0x6915,	// (0x00050ae9) aid_placing_vt_slider_lsc_ParamLimits

0x6c48,	// (0x00050e1c) vidtel_button_pane_ParamLimits

0x6c48,	// (0x00050e1c) vidtel_button_pane

0x2e37,	// (0x0004d00b) bg_button_pane_cp034

0x2ba0,	// (0x0004cd74) vidtel_button_pane_g1

0x2ba8,	// (0x0004cd7c) vidtel_button_pane_t1

0x11bb,	// (0x0004b38f) aid_size_vtel_slider_touch

0x1274,	// (0x0004b448) scroll_pane_cp039

0xbfac,	// (0x00056180) ncim_query_button_pane_cp01_ParamLimits

0xbfcb,	// (0x0005619f) ncimui_query_pane_g1_ParamLimits

0x3514,	// (0x0004d6e8) input_focus_pane_cp012_ParamLimits

0x1b91,	// (0x0004bd65) ncim_query_entry_pane_t1_ParamLimits

0x1274,	// (0x0004b448) scroll_pane_cp039_ParamLimits

0x7de6,	// (0x00051fba) navi_pane_bcale_mc_g1

0x7dee,	// (0x00051fc2) navi_pane_bcale_mc_t1

0x1ffc,	// (0x0004c1d0) main_sp_fs_email_pane_g1

0x2008,	// (0x0004c1dc) main_sp_fs_email_pane_g2

0x0001,

0xfc64,	// (0x00059e38) main_sp_fs_email_pane_g

0x24e1,	// (0x0004c6b5) list_single_cale_mrui_row_pane_g3_ParamLimits

0x24e1,	// (0x0004c6b5) list_single_cale_mrui_row_pane_g3

0xce82,	// (0x00057056) list_single_recal_day_pane_g5_event_pane

0x26bc,	// (0x0004c890) list_single_recal_day_pane_g7

0x2bbe,	// (0x0004cd92) list_recal_day_event_pane_cp01

0x2bc7,	// (0x0004cd9b) list_recal_vselct_arw_lo_pane_cp01

0x2bcf,	// (0x0004cda3) list_recal_vselct_arw_up_pane_cp01

0x2bd7,	// (0x0004cdab) list_recal_vselct_pane_cp01

0x11cb,	// (0x0004b39f) list_recal_day_event_pane_cp01_g1

0x2be1,	// (0x0004cdb5) list_recal_day_event_pane_cp01_t1

0x26c4,	// (0x0004c898) list_single_recal_day_pane_t1_ParamLimits

0x26d6,	// (0x0004c8aa) list_single_recal_day_pane_t2_ParamLimits

0xfd44,	// (0x00059f18) list_single_recal_day_pane_t_ParamLimits

0x34f2,	// (0x0004d6c6) bg_notes_pane_ParamLimits

0x35bd,	// (0x0004d791) list_notes_pane_ParamLimits

0x5dfe,	// (0x0004ffd2) scroll_pane_cp06_ParamLimits

0x35df,	// (0x0004d7b3) main_notes_pane_ParamLimits

0x3514,	// (0x0004d6e8) main_welc_pane

0xd948,	// (0x00057b1c) main_welc_body_pane_ParamLimits

0xd948,	// (0x00057b1c) main_welc_body_pane

0xd963,	// (0x00057b37) main_welc_opti_pane_ParamLimits

0xd963,	// (0x00057b37) main_welc_opti_pane

0xd9c4,	// (0x00057b98) main_welc_pane_t1_ParamLimits

0xd9c4,	// (0x00057b98) main_welc_pane_t1

0xdaea,	// (0x00057cbe) main_welc_body_row_pane_ParamLimits

0xdaea,	// (0x00057cbe) main_welc_body_row_pane

0x2e74,	// (0x0004d048) main_welc_opti_row_pane_ParamLimits

0x2e74,	// (0x0004d048) main_welc_opti_row_pane

0x2c0e,	// (0x0004cde2) main_welc_opti_row_pane_g1

0xdb04,	// (0x00057cd8) main_welc_opti_row_pane_t1

0x2c16,	// (0x0004cdea) main_welc_body_row_pane_t1

0x2934,	// (0x0004cb08) popup_notif_wgt_heading_pane

0x294e,	// (0x0004cb22) aid_size_list_notif_wgt_del_ParamLimits

0x295b,	// (0x0004cb2f) list_notif_wgt_row_pane_g1_ParamLimits

0x2967,	// (0x0004cb3b) list_notif_wgt_row_pane_g2_ParamLimits

0x2976,	// (0x0004cb4a) list_notif_wgt_row_pane_g3_ParamLimits

0xfdab,	// (0x00059f7f) list_notif_wgt_row_pane_g_ParamLimits

0x2983,	// (0x0004cb57) list_notif_wgt_row_pane_t1_ParamLimits

0x2999,	// (0x0004cb6d) list_notif_wgt_row_pane_t2_ParamLimits

0x29ab,	// (0x0004cb7f) list_notif_wgt_row_pane_t3_ParamLimits

0xfdb2,	// (0x00059f86) list_notif_wgt_row_pane_t_ParamLimits

0xd309,	// (0x000574dd) listrow_wgtman_pane_g1_ParamLimits

0xd316,	// (0x000574ea) listrow_wgtman_pane_g2_ParamLimits

0xfde2,	// (0x00059fb6) listrow_wgtman_pane_g_ParamLimits

0xd334,	// (0x00057508) listrow_wgtman_pane_t1_ParamLimits

0xd34c,	// (0x00057520) listrow_wgtman_pane_t2_ParamLimits

0xfde7,	// (0x00059fbb) listrow_wgtman_pane_t_ParamLimits

0xd372,	// (0x00057546) wait_bar_pane_cp09_ParamLimits

0x2e37,	// (0x0004d00b) bg_popup_heading_pane_cp02

0x2c25,	// (0x0004cdf9) popup_notif_wgt_heading_pane_g1

0x2c2d,	// (0x0004ce01) popup_notif_wgt_heading_pane_t1

0x2e37,	// (0x0004d00b) main_vids_pane

0x2e37,	// (0x0004d00b) vids_listscroll_pane

0xdb13,	// (0x00057ce7) scroll_pane_cp040

0x2e37,	// (0x0004d00b) vids_list_pane

0xdb1e,	// (0x00057cf2) vids_list_double_pane_ParamLimits

0xdb1e,	// (0x00057cf2) vids_list_double_pane

0xdb32,	// (0x00057d06) vids_list_double_pane_g1

0xdb3b,	// (0x00057d0f) vids_list_double_pane_t1

0xdb4b,	// (0x00057d1f) vids_list_double_pane_t2

0x0001,

0xfe80,	// (0x0005a054) vids_list_double_pane_t

0x8a52,	// (0x00052c26) main_ncimui_pane_ParamLimits

0xbded,	// (0x00055fc1) main_ncimui_pane_g1_ParamLimits

0xbdfb,	// (0x00055fcf) main_ncimui_pane_g2_ParamLimits

0xbdfb,	// (0x00055fcf) main_ncimui_pane_g2

0x0001,

0xfb65,	// (0x00059d39) main_ncimui_pane_g_ParamLimits

0xfb65,	// (0x00059d39) main_ncimui_pane_g

0xd97e,	// (0x00057b52) main_welc_pane_g1_ParamLimits

0xd97e,	// (0x00057b52) main_welc_pane_g1

0xd98a,	// (0x00057b5e) main_welc_pane_g2_ParamLimits

0xd98a,	// (0x00057b5e) main_welc_pane_g2

0x0003,

0xfe6a,	// (0x0005a03e) main_welc_pane_g_ParamLimits

0xfe6a,	// (0x0005a03e) main_welc_pane_g

0x34f2,	// (0x0004d6c6) listscroll_mce_pane_ParamLimits

0x7eb0,	// (0x00052084) wait_bar_pane_cp10

0xe744,	// (0x00058918) main_cale_day_pane_ParamLimits

0xe744,	// (0x00058918) main_cale_week_pane_ParamLimits

0x34f2,	// (0x0004d6c6) main_messa_pane_ParamLimits

0x9802,	// (0x000539d6) main_clock2_btn_pane_ParamLimits

0x9802,	// (0x000539d6) main_clock2_btn_pane

0xeefa,	// (0x000590ce) main_clock2_btn_pane_cp01_ParamLimits

0xeefa,	// (0x000590ce) main_clock2_btn_pane_cp01

0x246d,	// (0x0004c641) list_cale_mrui_pane_ParamLimits

0x29e1,	// (0x0004cbb5) main_cf0_pane_g2

0x0001,

0xfdb9,	// (0x00059f8d) main_cf0_pane_g

0xd55d,	// (0x00057731) area_left_week_number_pane_ParamLimits

0xd570,	// (0x00057744) area_top_day_name_pane_ParamLimits

0xd57e,	// (0x00057752) frame_month_view_pane_ParamLimits

0x2abc,	// (0x0004cc90) grid_month_view_pane_ParamLimits

0x2aca,	// (0x0004cc9e) frm_month_g1_ParamLimits

0xd5fc,	// (0x000577d0) frm_month_g2_ParamLimits

0xd60d,	// (0x000577e1) frm_month_g3_ParamLimits

0xd61e,	// (0x000577f2) frm_month_g4_ParamLimits

0xd62f,	// (0x00057803) frm_month_g5_ParamLimits

0xd640,	// (0x00057814) frm_month_g6_ParamLimits

0xd653,	// (0x00057827) frm_month_g7_ParamLimits

0x2ad7,	// (0x0004ccab) frm_month_g8_ParamLimits

0xd666,	// (0x0005783a) frm_month_g9_ParamLimits

0xd673,	// (0x00057847) frm_month_g10_ParamLimits

0xd680,	// (0x00057854) frm_month_g11_ParamLimits

0xd68d,	// (0x00057861) frm_month_g12_ParamLimits

0xd69a,	// (0x0005786e) frm_month_g13_ParamLimits

0xd6a9,	// (0x0005787d) frm_month_g14_ParamLimits

0xd6b8,	// (0x0005788c) frm_month_g15_ParamLimits

0xd6c7,	// (0x0005789b) frm_month_g16_ParamLimits

0xfe11,	// (0x00059fe5) frm_month_g_ParamLimits

0x2ae4,	// (0x0004ccb8) cell_top_day_name_pane_t1_ParamLimits

0xd6d6,	// (0x000578aa) cell_area_left_week_number_pane_g1_ParamLimits

0xd6e5,	// (0x000578b9) cell_area_left_week_number_pane_t1_ParamLimits

0x356d,	// (0x0004d741) cell_month_view_pane_g1_ParamLimits

0xd6fb,	// (0x000578cf) cell_month_view_pane_t1_ParamLimits

0x34ea,	// (0x0004d6be) main_clock2_btn_pane_g1

0x2c3b,	// (0x0004ce0f) main_clock2_btn_pane_t1

0x3514,	// (0x0004d6e8) listscroll_cmail_pane_ParamLimits

0x1ffc,	// (0x0004c1d0) main_sp_fs_email_pane_g1_ParamLimits

0x2008,	// (0x0004c1dc) main_sp_fs_email_pane_g2_ParamLimits

0xfc64,	// (0x00059e38) main_sp_fs_email_pane_g_ParamLimits

0x262b,	// (0x0004c7ff) list_recal_day_pane_ParamLimits

0x263c,	// (0x0004c810) mian_recal_day_pane_t1

0xc8be,	// (0x00056a92) list_single_dyc_row_text_pane_t4_ParamLimits

0xc8be,	// (0x00056a92) list_single_dyc_row_text_pane_t4

0xc8fb,	// (0x00056acf) list_single_dyc_row_text_pane_t5_ParamLimits

0xc8fb,	// (0x00056acf) list_single_dyc_row_text_pane_t5

0x20b2,	// (0x0004c286) list_single_dyc_row_text_pane_t6_ParamLimits

0x20b2,	// (0x0004c286) list_single_dyc_row_text_pane_t6

0x7a0d,	// (0x00051be1) aid_mgn_list_cale_time_pane

0x8a52,	// (0x00052c26) main_gallery2_pane_ParamLimits

0xef0e,	// (0x000590e2) main_clock2_pane_cp01_t1

0xef1c,	// (0x000590f0) main_clock2_pane_cp01_t3

0x0001,

0xf751,	// (0x00059925) main_clock2_pane_cp01_t

0x6308,	// (0x000504dc) cale_week_scroll_pane_g16_ParamLimits

0x6308,	// (0x000504dc) cale_week_scroll_pane_g16

0x377d,	// (0x0004d951) vorec_slider_pane

0x2ba8,	// (0x0004cd7c) vidtel_button_pane_t1_ParamLimits

0xcedd,	// (0x000570b1) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcedd,	// (0x000570b1) main_fs_bigclock_clock_pane_g2_ParamLimits

0xceec,	// (0x000570c0) main_fs_bigclock_clock_pane_g3_ParamLimits

0xceec,	// (0x000570c0) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd67,	// (0x00059f3b) main_fs_bigclock_clock_pane_g_ParamLimits

0xcefc,	// (0x000570d0) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcf11,	// (0x000570e5) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd70,	// (0x00059f44) main_fs_bigclock_clock_pane_t_ParamLimits

0x914a,	// (0x0005331e) main_mup3_lyrics_pane_ParamLimits

0x914a,	// (0x0005331e) main_mup3_lyrics_pane

0xdb81,	// (0x00057d55) main_mup3_lyrics_pane_t1_ParamLimits

0xdb81,	// (0x00057d55) main_mup3_lyrics_pane_t1

0x9d22,	// (0x00053ef6) aid_main_mp4_pane_t1_area

0x9d2c,	// (0x00053f00) aid_main_mp4_pane_t2_area

0x9e39,	// (0x0005400d) main_mp4_pane_g7_ParamLimits

0x9e39,	// (0x0005400d) main_mp4_pane_g7

0x9e45,	// (0x00054019) main_mp4_pane_g8_ParamLimits

0x9e45,	// (0x00054019) main_mp4_pane_g8

0xa263,	// (0x00054437) aid_call6_pane_g1_size

0xd885,	// (0x00057a59) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd885,	// (0x00057a59) list_double_large_graphic_phob2_other_pane

0xdba8,	// (0x00057d7c) list_double_large_graphic_phob2_other_pane_g1

0x2e37,	// (0x0004d00b) list_highlight_pane_cp026

0x3514,	// (0x0004d6e8) main_welc_pane_ParamLimits

0xc729,	// (0x000568fd) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc729,	// (0x000568fd) main_sp_fs_ctrlbar_pane_g3

0xc743,	// (0x00056917) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc743,	// (0x00056917) main_sp_fs_ctrlbar_pane_g4

0xc775,	// (0x00056949) toolbar2_fixed_button_pane_cp01

0xc780,	// (0x00056954) toolbar2_fixed_button_pane_cp02

0xc78d,	// (0x00056961) toolbar2_fixed_button_pane_cp03

0xd939,	// (0x00057b0d) list_welc_entry_pane_ParamLimits

0xd939,	// (0x00057b0d) list_welc_entry_pane

0xd998,	// (0x00057b6c) main_welc_pane_g3_ParamLimits

0xd998,	// (0x00057b6c) main_welc_pane_g3

0xd9e2,	// (0x00057bb6) main_welc_pane_t2_ParamLimits

0xd9e2,	// (0x00057bb6) main_welc_pane_t2

0xd9f6,	// (0x00057bca) main_welc_pane_t3_ParamLimits

0xd9f6,	// (0x00057bca) main_welc_pane_t3

0x0005,

0xfe73,	// (0x0005a047) main_welc_pane_t_ParamLimits

0xfe73,	// (0x0005a047) main_welc_pane_t

0xda88,	// (0x00057c5c) welc_button_pane_ParamLimits

0xda88,	// (0x00057c5c) welc_button_pane

0xdadc,	// (0x00057cb0) welc_service_logo_pane_ParamLimits

0xdadc,	// (0x00057cb0) welc_service_logo_pane

0xdbb0,	// (0x00057d84) list_single_welc_entry_pane_ParamLimits

0xdbb0,	// (0x00057d84) list_single_welc_entry_pane

0xdbc1,	// (0x00057d95) list_single_welc_entry_pane_g1

0xdbc9,	// (0x00057d9d) list_single_welc_entry_pane_t1

0xdbd7,	// (0x00057dab) list_single_welc_entry_pane_t2

0x0001,

0xfe85,	// (0x0005a059) list_single_welc_entry_pane_t

0x2e37,	// (0x0004d00b) bg_button_pane_cp035

0x2c49,	// (0x0004ce1d) welc_button_pane_t1

0x2c57,	// (0x0004ce2b) welc_service_logo_pane_g1

0x2c60,	// (0x0004ce34) welc_service_logo_pane_g2

0x0001,

0xfe8a,	// (0x0005a05e) welc_service_logo_pane_g

0x5c37,	// (0x0004fe0b) main_int_radio_pane

0x1a2f,	// (0x0004bc03) list_single_fs_dyc_pane_g1

0xd79b,	// (0x0005796f) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xd79b,	// (0x0005796f) list_double_large_graphic_phob2_pane_g3

0xd7a7,	// (0x0005797b) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd7a7,	// (0x0005797b) list_double_large_graphic_phob2_pane_g4

0xdbe5,	// (0x00057db9) main_int_radio1_pane_ParamLimits

0xdbe5,	// (0x00057db9) main_int_radio1_pane

0x2c69,	// (0x0004ce3d) find_pane_cp02

0xdbfb,	// (0x00057dcf) input_focus_pane_cp12_ParamLimits

0xdbfb,	// (0x00057dcf) input_focus_pane_cp12

0xdc07,	// (0x00057ddb) input_focus_pane_cp13_ParamLimits

0xdc07,	// (0x00057ddb) input_focus_pane_cp13

0xdc1f,	// (0x00057df3) input_focus_pane_cp14_ParamLimits

0xdc1f,	// (0x00057df3) input_focus_pane_cp14

0x2c72,	// (0x0004ce46) int_radio1_listscroll_pane

0xdc37,	// (0x00057e0b) main_int_radio1_pane_g1_ParamLimits

0xdc37,	// (0x00057e0b) main_int_radio1_pane_g1

0xdc43,	// (0x00057e17) main_int_radio1_pane_t1_ParamLimits

0xdc43,	// (0x00057e17) main_int_radio1_pane_t1

0xdc55,	// (0x00057e29) main_int_radio1_pane_t2_ParamLimits

0xdc55,	// (0x00057e29) main_int_radio1_pane_t2

0xdc69,	// (0x00057e3d) main_int_radio1_pane_t3_ParamLimits

0xdc69,	// (0x00057e3d) main_int_radio1_pane_t3

0xdc7d,	// (0x00057e51) main_int_radio1_pane_t4_ParamLimits

0xdc7d,	// (0x00057e51) main_int_radio1_pane_t4

0x2c7c,	// (0x0004ce50) main_int_radio1_pane_t5_ParamLimits

0x2c7c,	// (0x0004ce50) main_int_radio1_pane_t5

0xdc94,	// (0x00057e68) main_int_radio1_pane_t6_ParamLimits

0xdc94,	// (0x00057e68) main_int_radio1_pane_t6

0xdca6,	// (0x00057e7a) main_int_radio1_pane_t7_ParamLimits

0xdca6,	// (0x00057e7a) main_int_radio1_pane_t7

0xdcb8,	// (0x00057e8c) main_int_radio1_pane_t8_ParamLimits

0xdcb8,	// (0x00057e8c) main_int_radio1_pane_t8

0xdcca,	// (0x00057e9e) main_int_radio1_pane_t9_ParamLimits

0xdcca,	// (0x00057e9e) main_int_radio1_pane_t9

0xdcdc,	// (0x00057eb0) main_int_radio1_pane_t10_ParamLimits

0xdcdc,	// (0x00057eb0) main_int_radio1_pane_t10

0xdd0d,	// (0x00057ee1) main_int_radio1_pane_t11_ParamLimits

0xdd0d,	// (0x00057ee1) main_int_radio1_pane_t11

0xdd3e,	// (0x00057f12) main_int_radio1_pane_t12_ParamLimits

0xdd3e,	// (0x00057f12) main_int_radio1_pane_t12

0x000b,

0xfe8f,	// (0x0005a063) main_int_radio1_pane_t_ParamLimits

0xfe8f,	// (0x0005a063) main_int_radio1_pane_t

0x2af7,	// (0x0004cccb) int_radio_list_pane

0x2aff,	// (0x0004ccd3) scroll_pane_cp037

0x2c8e,	// (0x0004ce62) list_double_large_graphic_int_radio_pane_ParamLimits

0x2c8e,	// (0x0004ce62) list_double_large_graphic_int_radio_pane

0x2ca2,	// (0x0004ce76) list_double_large_graphic_int_radio_pane_g1

0x2cab,	// (0x0004ce7f) list_double_large_graphic_int_radio_pane_t1

0x2cb9,	// (0x0004ce8d) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfea8,	// (0x0005a07c) list_double_large_graphic_int_radio_pane_t

0x2e37,	// (0x0004d00b) list_highlight_pane_cp027

0x2bef,	// (0x0004cdc3) main_button_pane_4

0xd9a8,	// (0x00057b7c) main_welc_pane_g4_ParamLimits

0xd9a8,	// (0x00057b7c) main_welc_pane_g4

0xda0a,	// (0x00057bde) main_welc_pane_t4_ParamLimits

0xda0a,	// (0x00057bde) main_welc_pane_t4

0xda1c,	// (0x00057bf0) main_welc_pane_t5_ParamLimits

0xda1c,	// (0x00057bf0) main_welc_pane_t5

0xda54,	// (0x00057c28) main_welc_pane_t6_ParamLimits

0xda54,	// (0x00057c28) main_welc_pane_t6

0xda96,	// (0x00057c6a) welc_button_pane_2_ParamLimits

0xda96,	// (0x00057c6a) welc_button_pane_2

0xdab0,	// (0x00057c84) welc_button_pane_3_ParamLimits

0xdab0,	// (0x00057c84) welc_button_pane_3

0x2bef,	// (0x0004cdc3) welc_button_pane_4

0xdacc,	// (0x00057ca0) welc_button_pane_5_ParamLimits

0xdacc,	// (0x00057ca0) welc_button_pane_5

0x8a6e,	// (0x00052c42) main_popup_welc_pane

0x2cc7,	// (0x0004ce9b) main_welc_sk_g3

0x2cd1,	// (0x0004cea5) main_welc_sk_g4

0x2cdb,	// (0x0004ceaf) main_welc_sk_t3

0x2ceb,	// (0x0004cebf) main_welc_sk_t4

0x2cfb,	// (0x0004cecf) popup_welc_pane_t4

0x2d09,	// (0x0004cedd) popup_welc_pane_t5

0x2d17,	// (0x0004ceeb) popup_welc_pane_t6
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

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
