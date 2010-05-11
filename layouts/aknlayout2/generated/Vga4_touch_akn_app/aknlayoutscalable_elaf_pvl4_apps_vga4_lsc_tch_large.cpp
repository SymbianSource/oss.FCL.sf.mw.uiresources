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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008da02 };

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
0x09cc,	// (0x0008e3ce) Screen

0x09d8,	// (0x0008e3da) application_window

0x0a2c,	// (0x0008e42e) area_bottom_pane_ParamLimits

0x0a2c,	// (0x0008e42e) area_bottom_pane

0x0a65,	// (0x0008e467) area_top_pane_ParamLimits

0x0a65,	// (0x0008e467) area_top_pane

0x99f4,	// (0x000973f6) call_video_uplink_pane_ParamLimits

0x99f4,	// (0x000973f6) call_video_uplink_pane

0x0af3,	// (0x0008e4f5) main_pane_ParamLimits

0x0af3,	// (0x0008e4f5) main_pane

0xc804,	// (0x0009a206) context_pane

0x4455,	// (0x00091e57) navi_pane

0x4485,	// (0x00091e87) popup_cale_events_window_ParamLimits

0x4485,	// (0x00091e87) popup_cale_events_window

0xc817,	// (0x0009a219) popup_mup_playback_window

0x449d,	// (0x00091e9f) signal_pane

0xa175,	// (0x00097b77) main_browser_pane

0xa3a1,	// (0x00097da3) main_burst_pane

0x4157,	// (0x00091b59) main_calc_pane

0xc7a7,	// (0x0009a1a9) main_cale_day_pane

0x1135,	// (0x0008eb37) main_cale_month_pane

0xc7a7,	// (0x0009a1a9) main_cale_week_pane

0xa3a1,	// (0x00097da3) main_call_pane

0x9e33,	// (0x00097835) main_call_poc_pane

0xa3a1,	// (0x00097da3) main_camera_pane

0xa3a1,	// (0x00097da3) main_chi_dic_pane

0xb238,	// (0x00098c3a) main_clock_pane

0x9e33,	// (0x00097835) main_fmradio_pane

0xa3a1,	// (0x00097da3) main_graph_messa_pane

0x9e33,	// (0x00097835) main_help_pane

0xa175,	// (0x00097b77) main_im_pane

0xa08e,	// (0x00097a90) main_image_pane_ParamLimits

0xa08e,	// (0x00097a90) main_image_pane

0x9e33,	// (0x00097835) main_location2_pane

0xa3a1,	// (0x00097da3) main_location_pane

0xa08e,	// (0x00097a90) main_messa_pane

0x9e33,	// (0x00097835) main_mp2_pane

0xa3a1,	// (0x00097da3) main_mp_pane

0x9e33,	// (0x00097835) main_msg_pane

0x9e33,	// (0x00097835) main_mup_eq_pane

0x9e33,	// (0x00097835) main_mup_pane

0xa175,	// (0x00097b77) main_notes_pane

0x9e33,	// (0x00097835) main_pec_pane

0x9e33,	// (0x00097835) main_phob_pane

0x9e33,	// (0x00097835) main_pinb_pane

0x9e33,	// (0x00097835) main_postcard_pane

0x9e33,	// (0x00097835) main_qdial_pane

0xa3a1,	// (0x00097da3) main_skin_pane

0x9e33,	// (0x00097835) main_smil2_pane

0xa3a1,	// (0x00097da3) main_smil_pane

0xa3a1,	// (0x00097da3) main_video_pane

0xa3a1,	// (0x00097da3) main_video_tele_pane

0xa08e,	// (0x00097a90) main_viewer_pane_ParamLimits

0xa08e,	// (0x00097a90) main_viewer_pane

0xa3a1,	// (0x00097da3) main_vorec_pane

0x41ad,	// (0x00091baf) popup_blid_sat_info_window_ParamLimits

0x41ad,	// (0x00091baf) popup_blid_sat_info_window

0x4211,	// (0x00091c13) popup_dyc_status_message_window_ParamLimits

0x4211,	// (0x00091c13) popup_dyc_status_message_window

0x422b,	// (0x00091c2d) popup_grid_large_graphic_window_ParamLimits

0x422b,	// (0x00091c2d) popup_grid_large_graphic_window

0x42ed,	// (0x00091cef) popup_loc_request_window_ParamLimits

0x42ed,	// (0x00091cef) popup_loc_request_window

0x4429,	// (0x00091e2b) popup_wml_address_window_ParamLimits

0x4429,	// (0x00091e2b) popup_wml_address_window

0x3f95,	// (0x00091997) call_muted_g1

0x3c29,	// (0x0009162b) popup_call_audio_conf_window_ParamLimits

0x3c29,	// (0x0009162b) popup_call_audio_conf_window

0x3fa5,	// (0x000919a7) popup_call_audio_first_window_ParamLimits

0x3fa5,	// (0x000919a7) popup_call_audio_first_window

0x401b,	// (0x00091a1d) popup_call_audio_in_window_ParamLimits

0x401b,	// (0x00091a1d) popup_call_audio_in_window

0x4057,	// (0x00091a59) popup_call_audio_out_window_ParamLimits

0x4057,	// (0x00091a59) popup_call_audio_out_window

0x4091,	// (0x00091a93) popup_call_audio_second_window_ParamLimits

0x4091,	// (0x00091a93) popup_call_audio_second_window

0x40e7,	// (0x00091ae9) popup_call_audio_wait_window_ParamLimits

0x40e7,	// (0x00091ae9) popup_call_audio_wait_window

0x411c,	// (0x00091b1e) popup_number_entry_window_ParamLimits

0x411c,	// (0x00091b1e) popup_number_entry_window

0x9a20,	// (0x00097422) bg_popup_call_pane_cp05_ParamLimits

0x9a20,	// (0x00097422) bg_popup_call_pane_cp05

0x9a40,	// (0x00097442) popup_number_entry_window_t1

0x9a53,	// (0x00097455) popup_number_entry_window_t2

0x9a65,	// (0x00097467) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0009cacc) popup_number_entry_window_t

0x9a77,	// (0x00097479) text_title_cp2

0x9a8a,	// (0x0009748c) bg_popup_call_pane_cp_ParamLimits

0x9a8a,	// (0x0009748c) bg_popup_call_pane_cp

0x9a98,	// (0x0009749a) call_thumbnail_pane

0x9aa0,	// (0x000974a2) popup_call_audio_in_window_g1_ParamLimits

0x9aa0,	// (0x000974a2) popup_call_audio_in_window_g1

0x9aac,	// (0x000974ae) popup_call_audio_in_window_g2_ParamLimits

0x9aac,	// (0x000974ae) popup_call_audio_in_window_g2

0x9ab8,	// (0x000974ba) popup_call_audio_in_window_g3_ParamLimits

0x9ab8,	// (0x000974ba) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0009cad5) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0009cad5) popup_call_audio_in_window_g

0x9ac4,	// (0x000974c6) popup_call_audio_in_window_t1_ParamLimits

0x9ac4,	// (0x000974c6) popup_call_audio_in_window_t1

0x9ae0,	// (0x000974e2) popup_call_audio_in_window_t2_ParamLimits

0x9ae0,	// (0x000974e2) popup_call_audio_in_window_t2

0x9afc,	// (0x000974fe) popup_call_audio_in_window_t3_ParamLimits

0x9afc,	// (0x000974fe) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0009cadc) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0009cadc) popup_call_audio_in_window_t

0x9a8a,	// (0x0009748c) bg_popup_call_pane_cp01_ParamLimits

0x9a8a,	// (0x0009748c) bg_popup_call_pane_cp01

0x9a98,	// (0x0009749a) call_thumbnail_pane_cp02

0x9b0f,	// (0x00097511) call_type_pane_cp022

0x9b17,	// (0x00097519) popup_call_audio_out_window_g1_ParamLimits

0x9b17,	// (0x00097519) popup_call_audio_out_window_g1

0x9b29,	// (0x0009752b) popup_call_audio_out_window_g2_ParamLimits

0x9b29,	// (0x0009752b) popup_call_audio_out_window_g2

0x9b35,	// (0x00097537) popup_call_audio_out_window_g3_ParamLimits

0x9b35,	// (0x00097537) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0009cae3) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0009cae3) popup_call_audio_out_window_g

0x9b47,	// (0x00097549) popup_call_audio_out_window_t1_ParamLimits

0x9b47,	// (0x00097549) popup_call_audio_out_window_t1

0x9b5f,	// (0x00097561) popup_call_audio_out_window_t2_ParamLimits

0x9b5f,	// (0x00097561) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0009caea) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0009caea) popup_call_audio_out_window_t

0x9b74,	// (0x00097576) bg_popup_call_pane_ParamLimits

0x9b74,	// (0x00097576) bg_popup_call_pane

0x0cb2,	// (0x0008e6b4) call_thumbnail_pane_cp_ParamLimits

0x0cb2,	// (0x0008e6b4) call_thumbnail_pane_cp

0x9bf8,	// (0x000975fa) call_type_pane_cp01_ParamLimits

0x9bf8,	// (0x000975fa) call_type_pane_cp01

0x9c3c,	// (0x0009763e) popup_call_audio_first_window_g1_ParamLimits

0x9c3c,	// (0x0009763e) popup_call_audio_first_window_g1

0x9c88,	// (0x0009768a) popup_call_audio_first_window_g2_ParamLimits

0x9c88,	// (0x0009768a) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0009caef) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0009caef) popup_call_audio_first_window_g

0x9ccc,	// (0x000976ce) popup_call_audio_first_window_t1_ParamLimits

0x9ccc,	// (0x000976ce) popup_call_audio_first_window_t1

0x9d78,	// (0x0009777a) popup_call_audio_first_window_t4_ParamLimits

0x9d78,	// (0x0009777a) popup_call_audio_first_window_t4

0x9e04,	// (0x00097806) popup_call_audio_first_window_t5_ParamLimits

0x9e04,	// (0x00097806) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0009caf4) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0009caf4) popup_call_audio_first_window_t

0x9e33,	// (0x00097835) bg_popup_call_pane_cp02

0x9e3d,	// (0x0009783f) call_type_pane_cp023

0x9e45,	// (0x00097847) popup_call_audio_wait_window_g1

0x9e4d,	// (0x0009784f) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0009cafb) popup_call_audio_wait_window_g

0x9e55,	// (0x00097857) popup_call_audio_wait_window_t3

0x9e63,	// (0x00097865) bg_popup_call_pane_cp03_ParamLimits

0x9e63,	// (0x00097865) bg_popup_call_pane_cp03

0x9ec3,	// (0x000978c5) call_thumbnail_pane_cp011_ParamLimits

0x9ec3,	// (0x000978c5) call_thumbnail_pane_cp011

0x9ecf,	// (0x000978d1) call_type_pane_cp034_ParamLimits

0x9ecf,	// (0x000978d1) call_type_pane_cp034

0x9f0b,	// (0x0009790d) popup_call_audio_second_window_g1_ParamLimits

0x9f0b,	// (0x0009790d) popup_call_audio_second_window_g1

0x9f47,	// (0x00097949) popup_call_audio_second_window_g2_ParamLimits

0x9f47,	// (0x00097949) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0009cb00) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0009cb00) popup_call_audio_second_window_g

0x9f83,	// (0x00097985) popup_call_audio_second_window_t1_ParamLimits

0x9f83,	// (0x00097985) popup_call_audio_second_window_t1

0xa004,	// (0x00097a06) popup_call_audio_second_window_t2_ParamLimits

0xa004,	// (0x00097a06) popup_call_audio_second_window_t2

0xa03a,	// (0x00097a3c) popup_call_audio_second_window_t3_ParamLimits

0xa03a,	// (0x00097a3c) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0009cb05) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0009cb05) popup_call_audio_second_window_t

0x9e33,	// (0x00097835) bg_popup_call_pane_cp04

0xa070,	// (0x00097a72) list_conf_pane

0xa078,	// (0x00097a7a) popup_call_audio_conf_window_t1

0xa086,	// (0x00097a88) call_thumbnail_pane_g1

0xa08e,	// (0x00097a90) bg_pinb_pane_ParamLimits

0xa08e,	// (0x00097a90) bg_pinb_pane

0xa09c,	// (0x00097a9e) find_pinb_pane

0xa0a5,	// (0x00097aa7) listscroll_pinb_pane_ParamLimits

0xa0a5,	// (0x00097aa7) listscroll_pinb_pane

0xa0b4,	// (0x00097ab6) pinb_bg_pane_g1

0x0cd6,	// (0x0008e6d8) pinb_bg_pane_g2

0x0ce2,	// (0x0008e6e4) pinb_bg_pane_g3

0x0cee,	// (0x0008e6f0) pinb_bg_pane_g4

0x0cfa,	// (0x0008e6fc) pinb_bg_pane_g5

0x0d06,	// (0x0008e708) pinb_bg_pane_g6

0x0d11,	// (0x0008e713) pinb_bg_pane_g7

0x0d1c,	// (0x0008e71e) pinb_bg_pane_g8

0x0d27,	// (0x0008e729) pinb_bg_pane_g9

0x0d31,	// (0x0008e733) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0009cb0c) pinb_bg_pane_g

0x0d4e,	// (0x0008e750) grid_pinb_pane

0x0d59,	// (0x0008e75b) list_pinb_pane

0x0d64,	// (0x0008e766) scroll_pane_cp01_ParamLimits

0x0d64,	// (0x0008e766) scroll_pane_cp01

0xa0be,	// (0x00097ac0) find_pinb_pane_g1_ParamLimits

0xa0be,	// (0x00097ac0) find_pinb_pane_g1

0xa0d6,	// (0x00097ad8) find_pinb_pane_t1

0xa0e8,	// (0x00097aea) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0009cb26) find_pinb_pane_t

0xa0fd,	// (0x00097aff) input_focus_pane_cp01_ParamLimits

0xa0fd,	// (0x00097aff) input_focus_pane_cp01

0x0d76,	// (0x0008e778) cell_pinb_pane_ParamLimits

0x0d76,	// (0x0008e778) cell_pinb_pane

0x0d98,	// (0x0008e79a) cell_pinb_pane_g1_ParamLimits

0x0d98,	// (0x0008e79a) cell_pinb_pane_g1

0x0dad,	// (0x0008e7af) cell_pinb_pane_g2_ParamLimits

0x0dad,	// (0x0008e7af) cell_pinb_pane_g2

0xa109,	// (0x00097b0b) cell_pinb_pane_g3_ParamLimits

0xa109,	// (0x00097b0b) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0009cb2b) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0009cb2b) cell_pinb_pane_g

0x9e33,	// (0x00097835) grid_highlight_pane_cp01

0x0db9,	// (0x0008e7bb) list_pinb_item_pane_ParamLimits

0x0db9,	// (0x0008e7bb) list_pinb_item_pane

0x9e33,	// (0x00097835) list_highlight_pane_cp02

0x0dcb,	// (0x0008e7cd) list_pinb_item_pane_g1_ParamLimits

0x0dcb,	// (0x0008e7cd) list_pinb_item_pane_g1

0x0dd8,	// (0x0008e7da) list_pinb_item_pane_g2_ParamLimits

0x0dd8,	// (0x0008e7da) list_pinb_item_pane_g2

0x0de4,	// (0x0008e7e6) list_pinb_item_pane_g3_ParamLimits

0x0de4,	// (0x0008e7e6) list_pinb_item_pane_g3

0x0df5,	// (0x0008e7f7) list_pinb_item_pane_g4_ParamLimits

0x0df5,	// (0x0008e7f7) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0009cb32) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0009cb32) list_pinb_item_pane_g

0x0e01,	// (0x0008e803) list_pinb_item_pane_t1_ParamLimits

0x0e01,	// (0x0008e803) list_pinb_item_pane_t1

0x0e36,	// (0x0008e838) calc_display_pane

0x0e5e,	// (0x0008e860) calc_paper_pane

0x0e81,	// (0x0008e883) grid_calc_pane

0x9e33,	// (0x00097835) bg_list_pane_cp01

0x0eaf,	// (0x0008e8b1) clock_g1

0x0eb7,	// (0x0008e8b9) clock_g2

0x0001,

0xf139,	// (0x0009cb3b) clock_g

0x0ebf,	// (0x0008e8c1) clock_t1_ParamLimits

0x0ebf,	// (0x0008e8c1) clock_t1

0x0ed4,	// (0x0008e8d6) clock_t2_ParamLimits

0x0ed4,	// (0x0008e8d6) clock_t2

0x0ee6,	// (0x0008e8e8) clock_t3_ParamLimits

0x0ee6,	// (0x0008e8e8) clock_t3

0x0ef8,	// (0x0008e8fa) clock_t4_ParamLimits

0x0ef8,	// (0x0008e8fa) clock_t4

0x0f0a,	// (0x0008e90c) clock_t5_ParamLimits

0x0f0a,	// (0x0008e90c) clock_t5

0x0f1f,	// (0x0008e921) clock_t6_ParamLimits

0x0f1f,	// (0x0008e921) clock_t6

0x0f31,	// (0x0008e933) clock_t7_ParamLimits

0x0f31,	// (0x0008e933) clock_t7

0x0f43,	// (0x0008e945) clock_t8_ParamLimits

0x0f43,	// (0x0008e945) clock_t8

0x0f57,	// (0x0008e959) clock_t9_ParamLimits

0x0f57,	// (0x0008e959) clock_t9

0x0008,

0xf13e,	// (0x0009cb40) clock_t_ParamLimits

0xf13e,	// (0x0009cb40) clock_t

0xa11d,	// (0x00097b1f) popup_clock_analogue_window_cp02

0xa11d,	// (0x00097b1f) popup_clock_digital_window_cp01

0xa125,	// (0x00097b27) listscroll_help_pane

0x9e33,	// (0x00097835) phob_pre_status_pane

0xa12f,	// (0x00097b31) grid_qdial_pane

0xa08e,	// (0x00097a90) listscroll_mce_pane

0xa08e,	// (0x00097a90) bg_notes_pane

0xa139,	// (0x00097b3b) list_notes_pane

0x0f6d,	// (0x0008e96f) scroll_pane_cp06

0xa147,	// (0x00097b49) bg_calc_paper_pane

0xa15b,	// (0x00097b5d) list_calc_pane

0xa175,	// (0x00097b77) bg_calc_display_pane

0x0f81,	// (0x0008e983) calc_display_pane_t1

0x0f93,	// (0x0008e995) calc_display_pane_t2

0xa181,	// (0x00097b83) calc_display_pane_t3

0x0002,

0xf151,	// (0x0009cb53) calc_display_pane_t

0x0fa5,	// (0x0008e9a7) cell_calc_pane_ParamLimits

0x0fa5,	// (0x0008e9a7) cell_calc_pane

0xa193,	// (0x00097b95) bg_calc_paper_pane_g1

0xa19f,	// (0x00097ba1) bg_calc_paper_pane_g2

0xa1ab,	// (0x00097bad) bg_calc_paper_pane_g3

0xa1b7,	// (0x00097bb9) bg_calc_paper_pane_g4

0xa1c3,	// (0x00097bc5) bg_calc_paper_pane_g5

0x0fe2,	// (0x0008e9e4) bg_calc_paper_pane_g6

0x0ff5,	// (0x0008e9f7) bg_calc_paper_pane_g7

0x1008,	// (0x0008ea0a) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0009cb5a) bg_calc_paper_pane_g

0x1019,	// (0x0008ea1b) calc_bg_paper_pane_g9

0x102a,	// (0x0008ea2c) list_calc_item_pane_ParamLimits

0x102a,	// (0x0008ea2c) list_calc_item_pane

0xa1cf,	// (0x00097bd1) list_calc_item_pane_g1

0xa1dc,	// (0x00097bde) list_calc_item_pane_t1_ParamLimits

0xa1dc,	// (0x00097bde) list_calc_item_pane_t1

0x1042,	// (0x0008ea44) list_calc_item_pane_t2_ParamLimits

0x1042,	// (0x0008ea44) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0009cb6b) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0009cb6b) list_calc_item_pane_t

0xa1ee,	// (0x00097bf0) cell_calc_pane_g1

0xa1f8,	// (0x00097bfa) grid_highlight_pane_cp02

0xa21a,	// (0x00097c1c) bg_calc_display_pane_g1

0xa223,	// (0x00097c25) bg_calc_display_pane_g2

0xa22d,	// (0x00097c2f) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0009cb75) bg_calc_display_pane_g

0x1074,	// (0x0008ea76) cell_qdial_pane_ParamLimits

0x1074,	// (0x0008ea76) cell_qdial_pane

0x1088,	// (0x0008ea8a) cell_qdial_pane_g1_ParamLimits

0x1088,	// (0x0008ea8a) cell_qdial_pane_g1

0x109e,	// (0x0008eaa0) cell_qdial_pane_g2_ParamLimits

0x109e,	// (0x0008eaa0) cell_qdial_pane_g2

0xa236,	// (0x00097c38) cell_qdial_pane_g3_ParamLimits

0xa236,	// (0x00097c38) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0009cb7c) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0009cb7c) cell_qdial_pane_g

0x10c5,	// (0x0008eac7) cell_qdial_pane_t1_ParamLimits

0x10c5,	// (0x0008eac7) cell_qdial_pane_t1

0x10dd,	// (0x0008eadf) cell_qdial_pane_t2_ParamLimits

0x10dd,	// (0x0008eadf) cell_qdial_pane_t2

0x10f0,	// (0x0008eaf2) cell_qdial_pane_t3_ParamLimits

0x10f0,	// (0x0008eaf2) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0009cb85) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0009cb85) cell_qdial_pane_t

0x9e33,	// (0x00097835) grid_highlight_pane_cp04

0xa242,	// (0x00097c44) thumbnail_qdial_pane_ParamLimits

0xa242,	// (0x00097c44) thumbnail_qdial_pane

0xa29e,	// (0x00097ca0) list_help_pane

0xa2a7,	// (0x00097ca9) scroll_pane_cp02

0x1103,	// (0x0008eb05) help_list_pane_t1_ParamLimits

0x1103,	// (0x0008eb05) help_list_pane_t1

0xa2b0,	// (0x00097cb2) bg_notes_pane_g2

0xa2b8,	// (0x00097cba) bg_notes_pane_g3

0xa2c0,	// (0x00097cc2) notes_bg_pane_g1

0xa2c8,	// (0x00097cca) notes_bg_pane_g4

0xa2d0,	// (0x00097cd2) notes_bg_pane_g5

0xa2d8,	// (0x00097cda) notes_bg_pane_g6

0xa2e0,	// (0x00097ce2) notes_bg_pane_g7

0xa2e8,	// (0x00097cea) notes_bg_pane_g8

0xa2f0,	// (0x00097cf2) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0009cba3) notes_bg_pane_g

0x1121,	// (0x0008eb23) list_notes_text_pane_ParamLimits

0x1121,	// (0x0008eb23) list_notes_text_pane

0xa2f8,	// (0x00097cfa) list_notes_text_pane_g1

0xfb37,	// (0x0008d539) list_notes_text_pane_t1

0x1135,	// (0x0008eb37) listscroll_cale_week_pane

0x116b,	// (0x0008eb6d) bg_cale_heading_pane

0x1194,	// (0x0008eb96) bg_cale_pane_cp01

0x11b6,	// (0x0008ebb8) cale_week_corner_pane

0x11d5,	// (0x0008ebd7) cale_week_day_heading_pane

0x1203,	// (0x0008ec05) cale_week_scroll_pane_g1

0x1227,	// (0x0008ec29) cale_week_scroll_pane_g2

0x123f,	// (0x0008ec41) cale_week_scroll_pane_g3

0x1257,	// (0x0008ec59) cale_week_scroll_pane_g4

0x1273,	// (0x0008ec75) cale_week_scroll_pane_g5

0x1293,	// (0x0008ec95) cale_week_scroll_pane_g6

0x12b3,	// (0x0008ecb5) cale_week_scroll_pane_g7

0x12d7,	// (0x0008ecd9) cale_week_scroll_pane_g8

0x12fb,	// (0x0008ecfd) cale_week_scroll_pane_g9

0x1318,	// (0x0008ed1a) cale_week_scroll_pane_g10

0x1335,	// (0x0008ed37) cale_week_scroll_pane_g11

0x1352,	// (0x0008ed54) cale_week_scroll_pane_g12

0x136f,	// (0x0008ed71) cale_week_scroll_pane_g13

0x138c,	// (0x0008ed8e) cale_week_scroll_pane_g14

0x13b5,	// (0x0008edb7) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0009cbb2) cale_week_scroll_pane_g

0x1402,	// (0x0008ee04) cale_week_time_pane

0x1426,	// (0x0008ee28) grid_cale_week_pane

0xa324,	// (0x00097d26) scroll_pane_cp08

0x145d,	// (0x0008ee5f) cell_cale_week_pane_ParamLimits

0x145d,	// (0x0008ee5f) cell_cale_week_pane

0x14ed,	// (0x0008eeef) cale_week_day_heading_pane_t1

0x1537,	// (0x0008ef39) cale_week_day_heading_pane_t2

0x1586,	// (0x0008ef88) cale_week_day_heading_pane_t3

0x15d5,	// (0x0008efd7) cale_week_day_heading_pane_t4

0x1624,	// (0x0008f026) cale_week_day_heading_pane_t5

0x1677,	// (0x0008f079) cale_week_day_heading_pane_t6

0x16ce,	// (0x0008f0d0) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0009cbd3) cale_week_day_heading_pane_t

0xa346,	// (0x00097d48) bg_cale_side_pane

0x1718,	// (0x0008f11a) cale_week_time_pane_t1

0x1752,	// (0x0008f154) cale_week_time_pane_t2

0x178c,	// (0x0008f18e) cale_week_time_pane_t3

0x17c6,	// (0x0008f1c8) cale_week_time_pane_t4

0x1800,	// (0x0008f202) cale_week_time_pane_t5

0x183a,	// (0x0008f23c) cale_week_time_pane_t6

0x1874,	// (0x0008f276) cale_week_time_pane_t7

0x18ae,	// (0x0008f2b0) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0009cbe2) cale_week_time_pane_t

0x18ee,	// (0x0008f2f0) cell_cale_week_pane_g2

0x190d,	// (0x0008f30f) cell_cale_week_pane_g3_ParamLimits

0x190d,	// (0x0008f30f) cell_cale_week_pane_g3

0xa354,	// (0x00097d56) grid_highlight_pane_cp07

0xa35c,	// (0x00097d5e) listscroll_gms_pane

0xa366,	// (0x00097d68) grid_gms_pane

0xa36f,	// (0x00097d71) listscroll_gms_pane_g1

0xa377,	// (0x00097d79) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0009cbf3) listscroll_gms_pane_g

0x1925,	// (0x0008f327) scroll_pane_cp010

0x1930,	// (0x0008f332) cell_gms_pane_ParamLimits

0x1930,	// (0x0008f332) cell_gms_pane

0x194a,	// (0x0008f34c) cell_gms_pane_g1

0xa37f,	// (0x00097d81) cell_gms_pane_g2

0xa387,	// (0x00097d89) cell_gms_pane_g3

0xa390,	// (0x00097d92) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0009cbf8) cell_gms_pane_g

0xa399,	// (0x00097d9b) grid_highlight_pane_cp09

0x3f3d,	// (0x0009193f) phob_pre_status_pane_g1

0x3f45,	// (0x00091947) phob_pre_status_pane_g2

0x3f4d,	// (0x0009194f) phob_pre_status_pane_g3

0x3f55,	// (0x00091957) phob_pre_status_pane_g4

0x0004,

0xf5e8,	// (0x0009cfea) phob_pre_status_pane_g

0x3f65,	// (0x00091967) phob_pre_status_pane_t1

0x3f75,	// (0x00091977) phob_pre_status_pane_t2

0x3f85,	// (0x00091987) phob_pre_status_pane_t3

0x0002,

0xf5f3,	// (0x0009cff5) phob_pre_status_pane_t

0xa3a1,	// (0x00097da3) bg_list_pane_cp05

0x195a,	// (0x0008f35c) grid_vorec_pane

0x1966,	// (0x0008f368) vorec_t1

0x1974,	// (0x0008f376) vorec_t2

0x1982,	// (0x0008f384) vorec_t3

0x1990,	// (0x0008f392) vorec_t4

0x999b,	// (0x0009739d) vorec_t5

0x99a9,	// (0x000973ab) vorec_t6

0x0004,

0xf1ff,	// (0x0009cc01) vorec_t

0x99b7,	// (0x000973b9) wait_bar_pane_cp01

0x19ac,	// (0x0008f3ae) cell_vorec_pane_ParamLimits

0x19ac,	// (0x0008f3ae) cell_vorec_pane

0xa3a9,	// (0x00097dab) cell_vorec_pane_g1

0x9e33,	// (0x00097835) grid_highlight_pane_cp05

0x19d7,	// (0x0008f3d9) cams_zoom_pane

0x19e6,	// (0x0008f3e8) image_vga_pane

0x1a00,	// (0x0008f402) main_camera_pane_g1

0x1a12,	// (0x0008f414) main_camera_pane_g2

0x1a22,	// (0x0008f424) main_camera_pane_g3

0x1a36,	// (0x0008f438) main_camera_pane_g4

0x1a4a,	// (0x0008f44c) main_camera_pane_g5

0x1a5e,	// (0x0008f460) main_camera_pane_g6

0x1a72,	// (0x0008f474) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0009cc0c) main_camera_pane_g

0x1a86,	// (0x0008f488) main_camera_pane_t1

0x1a9c,	// (0x0008f49e) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0009cc1d) main_camera_pane_t

0x1ada,	// (0x0008f4dc) cams_zoom_pane_cp_ParamLimits

0x1ada,	// (0x0008f4dc) cams_zoom_pane_cp

0x1b02,	// (0x0008f504) image_cif_pane_ParamLimits

0x1b02,	// (0x0008f504) image_cif_pane

0x1b3d,	// (0x0008f53f) image_subqcif_pane

0x1b47,	// (0x0008f549) main_video_pane_g1_ParamLimits

0x1b47,	// (0x0008f549) main_video_pane_g1

0x1b6b,	// (0x0008f56d) main_video_pane_g2_ParamLimits

0x1b6b,	// (0x0008f56d) main_video_pane_g2

0x1ba1,	// (0x0008f5a3) main_video_pane_g3_ParamLimits

0x1ba1,	// (0x0008f5a3) main_video_pane_g3

0x1bcf,	// (0x0008f5d1) main_video_pane_g4_ParamLimits

0x1bcf,	// (0x0008f5d1) main_video_pane_g4

0x1bfd,	// (0x0008f5ff) main_video_pane_g5_ParamLimits

0x1bfd,	// (0x0008f5ff) main_video_pane_g5

0xa3bf,	// (0x00097dc1) main_video_pane_g6_ParamLimits

0xa3bf,	// (0x00097dc1) main_video_pane_g6

0x0006,

0xf220,	// (0x0009cc22) main_video_pane_g_ParamLimits

0xf220,	// (0x0009cc22) main_video_pane_g

0x1c26,	// (0x0008f628) main_video_pane_t1_ParamLimits

0x1c26,	// (0x0008f628) main_video_pane_t1

0xa3d9,	// (0x00097ddb) cams_zoom_pane_g1

0xa3e2,	// (0x00097de4) cams_zoom_pane_g2

0xa3eb,	// (0x00097ded) cams_zoom_pane_g3

0xa3f4,	// (0x00097df6) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0009cc31) cams_zoom_pane_g

0x1c83,	// (0x0008f685) grid_cams_pane

0x1c9d,	// (0x0008f69f) linegrid_cams_pane

0x1caf,	// (0x0008f6b1) cell_cams_pane_ParamLimits

0x1caf,	// (0x0008f6b1) cell_cams_pane

0xa3fd,	// (0x00097dff) cams_burst_image_pane

0xa405,	// (0x00097e07) cell_cams_pane_g1

0x9e33,	// (0x00097835) grid_highlight_pane_cp03

0xa1ee,	// (0x00097bf0) mp_bg_pane_g1

0x9e33,	// (0x00097835) bg_list_pane_cp03

0xc6ca,	// (0x0009a0cc) bg_mp_pane

0xc6d2,	// (0x0009a0d4) grid_mp_pane

0xc6da,	// (0x0009a0dc) media_player_g1

0xc6e4,	// (0x0009a0e6) media_player_t1

0xc6f2,	// (0x0009a0f4) media_player_t2

0xc700,	// (0x0009a102) media_player_t3

0xc70e,	// (0x0009a110) media_player_t4

0xc71c,	// (0x0009a11e) media_player_t5

0xc72a,	// (0x0009a12c) media_player_t6

0xc738,	// (0x0009a13a) media_player_t7

0x0006,

0xf5d2,	// (0x0009cfd4) media_player_t

0xc746,	// (0x0009a148) wait_bar_pane_cp02

0xf5b7,	// (0x0009cfb9) main_usb_pane_t

0x3f34,	// (0x00091936) cell_mp_pane

0xa1ee,	// (0x00097bf0) cell_mp_pane_g1

0x9e33,	// (0x00097835) grid_highlight_pane_cp06

0xa40d,	// (0x00097e0f) grid_skin_colour_pane

0xa415,	// (0x00097e17) list_highlight_pane_cp03

0x1cd1,	// (0x0008f6d3) skin_g1

0xa41d,	// (0x00097e1f) skin_t1

0xa42c,	// (0x00097e2e) skin_t2

0x0001,

0xf264,	// (0x0009cc66) skin_t

0x1cd9,	// (0x0008f6db) cell_skin_colour_pane_ParamLimits

0x1cd9,	// (0x0008f6db) cell_skin_colour_pane

0xa43a,	// (0x00097e3c) cell_skin_colour_pane_g1

0x1d4c,	// (0x0008f74e) call_video_g1_ParamLimits

0x1d4c,	// (0x0008f74e) call_video_g1

0x1d68,	// (0x0008f76a) call_video_g2_ParamLimits

0x1d68,	// (0x0008f76a) call_video_g2

0x0001,

0xf269,	// (0x0009cc6b) call_video_g_ParamLimits

0xf269,	// (0x0009cc6b) call_video_g

0x1dad,	// (0x0008f7af) call_video_uplink_pane_cp1_ParamLimits

0x1dad,	// (0x0008f7af) call_video_uplink_pane_cp1

0xa44c,	// (0x00097e4e) call_video_uplink_pane_cp2

0x1e4e,	// (0x0008f850) video_down_crop_pane_ParamLimits

0x1e4e,	// (0x0008f850) video_down_crop_pane

0x1f37,	// (0x0008f939) video_down_pane_ParamLimits

0x1f37,	// (0x0008f939) video_down_pane

0xa454,	// (0x00097e56) video_down_subqcif_pane_ParamLimits

0xa454,	// (0x00097e56) video_down_subqcif_pane

0xa46e,	// (0x00097e70) video_down_subqcif_pane_cp_ParamLimits

0xa46e,	// (0x00097e70) video_down_subqcif_pane_cp

0xa496,	// (0x00097e98) im_reading_pane_ParamLimits

0xa496,	// (0x00097e98) im_reading_pane

0x2040,	// (0x0008fa42) im_writing_pane_ParamLimits

0x2040,	// (0x0008fa42) im_writing_pane

0x205c,	// (0x0008fa5e) im_reading_pane_t1

0xa4b0,	// (0x00097eb2) list_im_pane

0xa4c1,	// (0x00097ec3) scroll_pane_cp07

0x2098,	// (0x0008fa9a) im_writing_pane_t1_ParamLimits

0x2098,	// (0x0008fa9a) im_writing_pane_t1

0xa4da,	// (0x00097edc) im_writing_pane_t2_ParamLimits

0xa4da,	// (0x00097edc) im_writing_pane_t2

0x0001,

0xf273,	// (0x0009cc75) im_writing_pane_t_ParamLimits

0xf273,	// (0x0009cc75) im_writing_pane_t

0x9e33,	// (0x00097835) input_focus_pane_cp04

0x9e33,	// (0x00097835) input_focus_pane_cp05

0x20ad,	// (0x0008faaf) list_im_single_pane_ParamLimits

0x20ad,	// (0x0008faaf) list_im_single_pane

0x20c3,	// (0x0008fac5) list_single_im_pane_t1

0x3ef4,	// (0x000918f6) blid_accuracy_pane

0x3efc,	// (0x000918fe) blid_compass_pane

0x3f06,	// (0x00091908) main_location_t1

0x3f16,	// (0x00091918) main_location_t2

0x3f26,	// (0x00091928) main_location_t3

0x0002,

0xf5e1,	// (0x0009cfe3) main_location_t

0x9e33,	// (0x00097835) aid_levels_location

0xa1ee,	// (0x00097bf0) blid_accuracy_pane_g1

0xa1ee,	// (0x00097bf0) blid_accuracy_pane_g2

0x0001,

0xf2dc,	// (0x0009ccde) blid_accuracy_pane_g

0xa522,	// (0x00097f24) wml_content_pane

0xa560,	// (0x00097f62) wml_button_pane_ParamLimits

0xa560,	// (0x00097f62) wml_button_pane

0x20d2,	// (0x0008fad4) wml_list_single_large_pane_ParamLimits

0x20d2,	// (0x0008fad4) wml_list_single_large_pane

0x20e8,	// (0x0008faea) wml_list_single_medium_pane_ParamLimits

0x20e8,	// (0x0008faea) wml_list_single_medium_pane

0x20ff,	// (0x0008fb01) wml_list_single_small_pane_ParamLimits

0x20ff,	// (0x0008fb01) wml_list_single_small_pane

0xa574,	// (0x00097f76) wml_selection_box_pane_ParamLimits

0xa574,	// (0x00097f76) wml_selection_box_pane

0xa587,	// (0x00097f89) wml_list_single_pane_t1

0xa596,	// (0x00097f98) wml_list_single_medium_pane_t1

0xa5a5,	// (0x00097fa7) wml_list_single_large_pane_t1

0xa5b4,	// (0x00097fb6) input_focus_pane_cp02_ParamLimits

0xa5b4,	// (0x00097fb6) input_focus_pane_cp02

0xa5c7,	// (0x00097fc9) wml_selection_box_pane_g1

0xa5d0,	// (0x00097fd2) wml_selection_box_pane_t1_ParamLimits

0xa5d0,	// (0x00097fd2) wml_selection_box_pane_t1

0xa08e,	// (0x00097a90) bg_wml_button_pane_ParamLimits

0xa08e,	// (0x00097a90) bg_wml_button_pane

0xac9d,	// (0x0009869f) wml_button_pane_g1

0xaca5,	// (0x000986a7) wml_button_pane_t1

0xac9d,	// (0x0009869f) wml_button_bg_pane_g1

0xacb5,	// (0x000986b7) wml_button_bg_pane_g2

0xacbd,	// (0x000986bf) wml_button_bg_pane_g3

0xacc5,	// (0x000986c7) wml_button_bg_pane_g4

0xaccd,	// (0x000986cf) wml_button_bg_pane_g5

0xacd5,	// (0x000986d7) wml_button_bg_pane_g6

0xacdd,	// (0x000986df) wml_button_bg_pane_g7

0xace5,	// (0x000986e7) wml_button_bg_pane_g8

0xaced,	// (0x000986ef) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0009cc7a) wml_button_bg_pane_g

0x211b,	// (0x0008fb1d) bg_list_pane_cp02

0xacf5,	// (0x000986f7) mce_header_pane_ParamLimits

0xacf5,	// (0x000986f7) mce_header_pane

0xad0b,	// (0x0009870d) mce_icon_pane

0xad0b,	// (0x0009870d) mce_image_pane

0xad14,	// (0x00098716) mce_text_pane_ParamLimits

0xad14,	// (0x00098716) mce_text_pane

0x2125,	// (0x0008fb27) scroll_pane_cp03

0xa558,	// (0x00097f5a) scroll_pane_cp04

0xad27,	// (0x00098729) scroll_pane_cp05_ParamLimits

0xad27,	// (0x00098729) scroll_pane_cp05

0x212f,	// (0x0008fb31) mce_header_field_pane_ParamLimits

0x212f,	// (0x0008fb31) mce_header_field_pane

0x2148,	// (0x0008fb4a) mce_header_field_pane_2_ParamLimits

0x2148,	// (0x0008fb4a) mce_header_field_pane_2

0x215e,	// (0x0008fb60) mce_header_field_pane_3

0x2166,	// (0x0008fb68) list_single_mce_message_pane_ParamLimits

0x2166,	// (0x0008fb68) list_single_mce_message_pane

0x217f,	// (0x0008fb81) list_single_mce_smart_pane_ParamLimits

0x217f,	// (0x0008fb81) list_single_mce_smart_pane

0xad33,	// (0x00098735) input_focus_pane_cp03

0xad3c,	// (0x0009873e) list_header_data_pane

0x21a3,	// (0x0008fba5) mce_header_field_pane_t1

0x21b3,	// (0x0008fbb5) list_single_mce_header_pane_ParamLimits

0x21b3,	// (0x0008fbb5) list_single_mce_header_pane

0xad44,	// (0x00098746) list_single_mce_header_pane_t1

0xad53,	// (0x00098755) list_single_mce_message_pane_g1

0xad5b,	// (0x0009875d) list_single_mce_message_pane_t1

0x21ed,	// (0x0008fbef) bg_cale_heading_pane_cp01_ParamLimits

0x21ed,	// (0x0008fbef) bg_cale_heading_pane_cp01

0xad69,	// (0x0009876b) bg_cale_pane_cp02_ParamLimits

0xad69,	// (0x0009876b) bg_cale_pane_cp02

0x2234,	// (0x0008fc36) cale_month_corner_pane

0x2253,	// (0x0008fc55) cale_month_day_heading_pane_ParamLimits

0x2253,	// (0x0008fc55) cale_month_day_heading_pane

0x22b2,	// (0x0008fcb4) cale_month_pane_g1_ParamLimits

0x22b2,	// (0x0008fcb4) cale_month_pane_g1

0x22ee,	// (0x0008fcf0) cale_month_pane_g2_ParamLimits

0x22ee,	// (0x0008fcf0) cale_month_pane_g2

0x232a,	// (0x0008fd2c) cale_month_pane_g3_ParamLimits

0x232a,	// (0x0008fd2c) cale_month_pane_g3

0x237e,	// (0x0008fd80) cale_month_pane_g4_ParamLimits

0x237e,	// (0x0008fd80) cale_month_pane_g4

0x23d2,	// (0x0008fdd4) cale_month_pane_g5_ParamLimits

0x23d2,	// (0x0008fdd4) cale_month_pane_g5

0x242e,	// (0x0008fe30) cale_month_pane_g6_ParamLimits

0x242e,	// (0x0008fe30) cale_month_pane_g6

0x2492,	// (0x0008fe94) cale_month_pane_g7_ParamLimits

0x2492,	// (0x0008fe94) cale_month_pane_g7

0x24fe,	// (0x0008ff00) cale_month_pane_g8_ParamLimits

0x24fe,	// (0x0008ff00) cale_month_pane_g8

0x256a,	// (0x0008ff6c) cale_month_pane_g9_ParamLimits

0x256a,	// (0x0008ff6c) cale_month_pane_g9

0x25c8,	// (0x0008ffca) cale_month_pane_g10_ParamLimits

0x25c8,	// (0x0008ffca) cale_month_pane_g10

0x261a,	// (0x0009001c) cale_month_pane_g11_ParamLimits

0x261a,	// (0x0009001c) cale_month_pane_g11

0x266c,	// (0x0009006e) cale_month_pane_g12_ParamLimits

0x266c,	// (0x0009006e) cale_month_pane_g12

0x26c4,	// (0x000900c6) cale_month_pane_g13_ParamLimits

0x26c4,	// (0x000900c6) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0009cc8d) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0009cc8d) cale_month_pane_g

0x271c,	// (0x0009011e) cale_month_week_pane

0x2740,	// (0x00090142) grid_cale_month_pane_ParamLimits

0x2740,	// (0x00090142) grid_cale_month_pane

0x2796,	// (0x00090198) cale_month_day_heading_pane_t1

0x281c,	// (0x0009021e) cale_month_day_heading_pane_t2

0x28ad,	// (0x000902af) cale_month_day_heading_pane_t3

0x293e,	// (0x00090340) cale_month_day_heading_pane_t4

0x29cf,	// (0x000903d1) cale_month_day_heading_pane_t5

0x2a70,	// (0x00090472) cale_month_day_heading_pane_t6

0x2b15,	// (0x00090517) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0009cca8) cale_month_day_heading_pane_t

0xa346,	// (0x00097d48) bg_cale_side_pane_cp01

0x2bbe,	// (0x000905c0) cale_month_week_pane_t1

0x2bd7,	// (0x000905d9) cale_month_week_pane_t2

0x2bf0,	// (0x000905f2) cale_month_week_pane_t3

0x2c09,	// (0x0009060b) cale_month_week_pane_t4

0x2c22,	// (0x00090624) cale_month_week_pane_t5

0x2c3b,	// (0x0009063d) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0009ccb7) cale_month_week_pane_t

0x2c5a,	// (0x0009065c) cell_cale_month_pane_ParamLimits

0x2c5a,	// (0x0009065c) cell_cale_month_pane

0xa5e8,	// (0x00097fea) cell_cale_month_pane_g1

0x2d84,	// (0x00090786) cell_cale_month_pane_t1_ParamLimits

0x2d84,	// (0x00090786) cell_cale_month_pane_t1

0xa354,	// (0x00097d56) grid_highlight_pane_cp08

0xa1ee,	// (0x00097bf0) main_smil_g1

0x2da4,	// (0x000907a6) smil_status_pane

0xada8,	// (0x000987aa) smil_text_pane

0xc5e8,	// (0x00099fea) bg_popup_call3_rect_pane_g8

0xc5f0,	// (0x00099ff2) bg_popup_call3_rect_pane_g9

0x0008,

0xf575,	// (0x0009cf77) bg_popup_call3_rect_pane_g

0xc87e,	// (0x0009a280) smil_status_volume_pane_g1

0x2db7,	// (0x000907b9) smil_status_pane_t1

0xa6e6,	// (0x000980e8) volume_smil_pane

0xadb2,	// (0x000987b4) list_smil_text_pane

0x2dd0,	// (0x000907d2) scroll_pane_cp011

0x2ddb,	// (0x000907dd) smil_text_list_pane_t1_ParamLimits

0x2ddb,	// (0x000907dd) smil_text_list_pane_t1

0xa5f4,	// (0x00097ff6) aid_volume_smil_ParamLimits

0xa5f4,	// (0x00097ff6) aid_volume_smil

0xa1ee,	// (0x00097bf0) smil_volume_pane_g1

0xa1ee,	// (0x00097bf0) smil_volume_pane_g2

0x0001,

0xf2dc,	// (0x0009ccde) smil_volume_pane_g

0x1135,	// (0x0008eb37) listscroll_cale_day_pane

0xadbc,	// (0x000987be) bg_cale_pane

0xadd4,	// (0x000987d6) list_cale_pane

0xadf7,	// (0x000987f9) scroll_pane_cp09

0xae08,	// (0x0009880a) cale_bg_pane_g1

0xae10,	// (0x00098812) cale_bg_pane_g2

0xae18,	// (0x0009881a) cale_bg_pane_g3

0xae20,	// (0x00098822) cale_bg_pane_g4

0xae28,	// (0x0009882a) cale_bg_pane_g5

0xae30,	// (0x00098832) cale_bg_pane_g6

0xae38,	// (0x0009883a) cale_bg_pane_g7

0xae40,	// (0x00098842) cale_bg_pane_g8

0xae48,	// (0x0009884a) cale_bg_pane_g9

0x0008,

0xf2e1,	// (0x0009cce3) cale_bg_pane_g

0x2e14,	// (0x00090816) list_cale_time_pane_ParamLimits

0x2e14,	// (0x00090816) list_cale_time_pane

0xae58,	// (0x0009885a) list_cale_time_pane_g1_ParamLimits

0xae58,	// (0x0009885a) list_cale_time_pane_g1

0xae64,	// (0x00098866) list_cale_time_pane_g2_ParamLimits

0xae64,	// (0x00098866) list_cale_time_pane_g2

0x2e28,	// (0x0009082a) list_cale_time_pane_g3_ParamLimits

0x2e28,	// (0x0009082a) list_cale_time_pane_g3

0x2e36,	// (0x00090838) list_cale_time_pane_g4_ParamLimits

0x2e36,	// (0x00090838) list_cale_time_pane_g4

0x2e44,	// (0x00090846) list_cale_time_pane_g5_ParamLimits

0x2e44,	// (0x00090846) list_cale_time_pane_g5

0x0005,

0xf2f4,	// (0x0009ccf6) list_cale_time_pane_g_ParamLimits

0xf2f4,	// (0x0009ccf6) list_cale_time_pane_g

0xae7e,	// (0x00098880) list_cale_time_pane_t1_ParamLimits

0xae7e,	// (0x00098880) list_cale_time_pane_t1

0xaea6,	// (0x000988a8) list_cale_time_pane_t2_ParamLimits

0xaea6,	// (0x000988a8) list_cale_time_pane_t2

0x3112,	// (0x00090b14) aid_blid_cardinal_pane

0x3150,	// (0x00090b52) compass_pane_t4

0xaece,	// (0x000988d0) list_cale_time_pane_t4_ParamLimits

0xaece,	// (0x000988d0) list_cale_time_pane_t4

0x315e,	// (0x00090b60) compass_pane_t5

0x316c,	// (0x00090b6e) compass_pane_t6

0x317a,	// (0x00090b7c) compass_pane_t7

0xb2e8,	// (0x00098cea) navi_pane_cc_t1

0xb435,	// (0x00098e37) aid_phob_thumbnail_center_pane

0x38bf,	// (0x000912c1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf301,	// (0x0009cd03) list_cale_time_pane_t_ParamLimits

0xf301,	// (0x0009cd03) list_cale_time_pane_t

0x9a8a,	// (0x0009748c) bg_popup_window_pane_cp02_ParamLimits

0x9a8a,	// (0x0009748c) bg_popup_window_pane_cp02

0xaef6,	// (0x000988f8) heading_pane_cp01_ParamLimits

0xaef6,	// (0x000988f8) heading_pane_cp01

0xaf02,	// (0x00098904) loc_req_pane_ParamLimits

0xaf02,	// (0x00098904) loc_req_pane

0xaf12,	// (0x00098914) loc_type_pane_ParamLimits

0xaf12,	// (0x00098914) loc_type_pane

0xaf24,	// (0x00098926) loc_type_pane_t1_ParamLimits

0xaf24,	// (0x00098926) loc_type_pane_t1

0xaf36,	// (0x00098938) loc_type_pane_t2_ParamLimits

0xaf36,	// (0x00098938) loc_type_pane_t2

0xaf48,	// (0x0009894a) loc_type_pane_t3_ParamLimits

0xaf48,	// (0x0009894a) loc_type_pane_t3

0x0002,

0xf308,	// (0x0009cd0a) loc_type_pane_t_ParamLimits

0xf308,	// (0x0009cd0a) loc_type_pane_t

0xaf5a,	// (0x0009895c) list_loc_req_pane

0xaf64,	// (0x00098966) scroll_pane_cp012

0x2e52,	// (0x00090854) list_single_loc_request_popup_menu_pane_ParamLimits

0x2e52,	// (0x00090854) list_single_loc_request_popup_menu_pane

0xaf6f,	// (0x00098971) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf6f,	// (0x00098971) list_single_loc_request_popup_menu_pane_g1

0xaf7b,	// (0x0009897d) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf7b,	// (0x0009897d) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30f,	// (0x0009cd11) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30f,	// (0x0009cd11) list_single_loc_request_popup_menu_pane_g

0xaf87,	// (0x00098989) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf87,	// (0x00098989) list_single_loc_request_popup_menu_pane_t1

0xa08e,	// (0x00097a90) bg_popup_window_pane_cp03_ParamLimits

0xa08e,	// (0x00097a90) bg_popup_window_pane_cp03

0xaf9d,	// (0x0009899f) heading_loc_req_pane_ParamLimits

0xaf9d,	// (0x0009899f) heading_loc_req_pane

0x2e5f,	// (0x00090861) popup_dyc_status_message_window_g1_ParamLimits

0x2e5f,	// (0x00090861) popup_dyc_status_message_window_g1

0x2e73,	// (0x00090875) popup_dyc_status_message_window_t1_ParamLimits

0x2e73,	// (0x00090875) popup_dyc_status_message_window_t1

0x2e88,	// (0x0009088a) popup_dyc_status_message_window_t2_ParamLimits

0x2e88,	// (0x0009088a) popup_dyc_status_message_window_t2

0x2e9d,	// (0x0009089f) popup_dyc_status_message_window_t3_ParamLimits

0x2e9d,	// (0x0009089f) popup_dyc_status_message_window_t3

0x0002,

0xf314,	// (0x0009cd16) popup_dyc_status_message_window_t_ParamLimits

0xf314,	// (0x0009cd16) popup_dyc_status_message_window_t

0x9e33,	// (0x00097835) bg_heading_pane_cp01

0xafa9,	// (0x000989ab) heading_loc_req_pane_g1

0xafb1,	// (0x000989b3) heading_loc_req_pane_g2

0xafb9,	// (0x000989bb) heading_loc_req_pane_g3

0x0002,

0xf31b,	// (0x0009cd1d) heading_loc_req_pane_g

0xafc1,	// (0x000989c3) heading_loc_req_pane_t1

0xafd1,	// (0x000989d3) bg_popup_sub_pane_cp01_ParamLimits

0xafd1,	// (0x000989d3) bg_popup_sub_pane_cp01

0xafdf,	// (0x000989e1) popup_cale_events_window_g1_ParamLimits

0xafdf,	// (0x000989e1) popup_cale_events_window_g1

0xafff,	// (0x00098a01) popup_cale_events_window_g2_ParamLimits

0xafff,	// (0x00098a01) popup_cale_events_window_g2

0x0001,

0xf34f,	// (0x0009cd51) popup_cale_events_window_g_ParamLimits

0xf34f,	// (0x0009cd51) popup_cale_events_window_g

0xb01f,	// (0x00098a21) popup_cale_events_window_t1_ParamLimits

0xb01f,	// (0x00098a21) popup_cale_events_window_t1

0xb031,	// (0x00098a33) popup_cale_events_window_t2_ParamLimits

0xb031,	// (0x00098a33) popup_cale_events_window_t2

0xb06f,	// (0x00098a71) popup_cale_events_window_t3_ParamLimits

0xb06f,	// (0x00098a71) popup_cale_events_window_t3

0xb0a9,	// (0x00098aab) popup_cale_events_window_t4_ParamLimits

0xb0a9,	// (0x00098aab) popup_cale_events_window_t4

0x0003,

0xf354,	// (0x0009cd56) popup_cale_events_window_t_ParamLimits

0xf354,	// (0x0009cd56) popup_cale_events_window_t

0x2ed1,	// (0x000908d3) call_type_pane

0x2ee1,	// (0x000908e3) popup_call_status_window_g1

0x2ef5,	// (0x000908f7) popup_call_status_window_g2

0x2f09,	// (0x0009090b) popup_call_status_window_g3

0x0002,

0xf35d,	// (0x0009cd5f) popup_call_status_window_g

0xb0df,	// (0x00098ae1) call_type_pane_g1

0xb0e8,	// (0x00098aea) call_type_pane_g2

0x0001,

0xf364,	// (0x0009cd66) call_type_pane_g

0x9e33,	// (0x00097835) bg_popup_sub_pane_cp02

0xb0f1,	// (0x00098af3) listscroll_popup_wml_pane

0xb0f9,	// (0x00098afb) list_wml_pane

0xb103,	// (0x00098b05) scroll_pane_cp013

0xb10e,	// (0x00098b10) list_single_graphic_popup_wml_pane_ParamLimits

0xb10e,	// (0x00098b10) list_single_graphic_popup_wml_pane

0xa1ee,	// (0x00097bf0) list_single_graphic_popup_wml_pane_g1

0xb122,	// (0x00098b24) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf369,	// (0x0009cd6b) list_single_graphic_popup_wml_pane_g

0xb12a,	// (0x00098b2c) list_single_graphic_popup_wml_pane_t1

0xb140,	// (0x00098b42) aid_call_pane

0xa086,	// (0x00097a88) popup_clock_analogue_window_g1

0xa086,	// (0x00097a88) popup_clock_analogue_window_g2

0xa616,	// (0x00098018) popup_clock_analogue_window_g3

0xa616,	// (0x00098018) popup_clock_analogue_window_g4

0xa1ee,	// (0x00097bf0) popup_clock_analogue_window_g5

0x0004,

0xf36e,	// (0x0009cd70) popup_clock_analogue_window_g

0xa61e,	// (0x00098020) popup_clock_analogue_window_t1

0xa62c,	// (0x0009802e) clock_digital_number_pane_ParamLimits

0xa62c,	// (0x0009802e) clock_digital_number_pane

0xa638,	// (0x0009803a) clock_digital_number_pane_cp02_ParamLimits

0xa638,	// (0x0009803a) clock_digital_number_pane_cp02

0xa644,	// (0x00098046) clock_digital_number_pane_cp03_ParamLimits

0xa644,	// (0x00098046) clock_digital_number_pane_cp03

0xa650,	// (0x00098052) clock_digital_number_pane_cp04_ParamLimits

0xa650,	// (0x00098052) clock_digital_number_pane_cp04

0xa65c,	// (0x0009805e) clock_digital_separator_pane_ParamLimits

0xa65c,	// (0x0009805e) clock_digital_separator_pane

0xa668,	// (0x0009806a) popup_clock_digital_window_t1

0xa1ee,	// (0x00097bf0) clock_digital_number_pane_g1

0xa1ee,	// (0x00097bf0) clock_digital_number_pane_g2

0x0001,

0xf2dc,	// (0x0009ccde) clock_digital_number_pane_g

0xa1ee,	// (0x00097bf0) clock_digital_separator_pane_g1

0xa1ee,	// (0x00097bf0) clock_digital_separator_pane_g2

0x0001,

0xf2dc,	// (0x0009ccde) clock_digital_separator_pane_g

0x9e33,	// (0x00097835) bg_popup_window_pane_cp04

0xb148,	// (0x00098b4a) heading_pane_cp03

0xb150,	// (0x00098b52) listscroll_popup_gms_pane

0xb158,	// (0x00098b5a) grid_large_graphic_popup_pane

0xb162,	// (0x00098b64) listscroll_popup_gms_pane_g1

0xb16a,	// (0x00098b6c) listscroll_popup_gms_pane_g2

0x0001,

0xf379,	// (0x0009cd7b) listscroll_popup_gms_pane_g

0xa558,	// (0x00097f5a) scroll_pane_cp014

0x2f19,	// (0x0009091b) cell_large_graphic_popup_pane_ParamLimits

0x2f19,	// (0x0009091b) cell_large_graphic_popup_pane

0x2f31,	// (0x00090933) cell_large_graphic_popup_pane_g1_ParamLimits

0x2f31,	// (0x00090933) cell_large_graphic_popup_pane_g1

0xb172,	// (0x00098b74) cell_large_graphic_popup_pane_g2_ParamLimits

0xb172,	// (0x00098b74) cell_large_graphic_popup_pane_g2

0xb17e,	// (0x00098b80) cell_large_graphic_popup_pane_g3_ParamLimits

0xb17e,	// (0x00098b80) cell_large_graphic_popup_pane_g3

0xb18b,	// (0x00098b8d) cell_large_graphic_popup_pane_g4_ParamLimits

0xb18b,	// (0x00098b8d) cell_large_graphic_popup_pane_g4

0x0003,

0xf37e,	// (0x0009cd80) cell_large_graphic_popup_pane_g_ParamLimits

0xf37e,	// (0x0009cd80) cell_large_graphic_popup_pane_g

0xb19b,	// (0x00098b9d) grid_highlight_pane_cp010

0xa1ee,	// (0x00097bf0) bg_popup_call_pane_g1

0xb1a5,	// (0x00098ba7) list_single_graphic_popup_conf_pane_ParamLimits

0xb1a5,	// (0x00098ba7) list_single_graphic_popup_conf_pane

0xb1b7,	// (0x00098bb9) list_highlight_pane_cp01

0xb1c0,	// (0x00098bc2) list_single_graphic_popup_conf_pane_g1

0xb1c8,	// (0x00098bca) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf387,	// (0x0009cd89) list_single_graphic_popup_conf_pane_g

0xb1d0,	// (0x00098bd2) list_single_graphic_popup_conf_pane_t1

0xb1de,	// (0x00098be0) linegrid_cams_pane_g1

0x2f3d,	// (0x0009093f) linegrid_cams_pane_g2

0xa387,	// (0x00097d89) linegrid_cams_pane_g3

0xb1e7,	// (0x00098be9) linegrid_cams_pane_g4

0x2f46,	// (0x00090948) linegrid_cams_pane_g5

0x2f4f,	// (0x00090951) linegrid_cams_pane_g6

0xa390,	// (0x00097d92) linegrid_cams_pane_g7

0x0006,

0xf38c,	// (0x0009cd8e) linegrid_cams_pane_g

0xb1f0,	// (0x00098bf2) popup_clock_analogue_window

0xb1f0,	// (0x00098bf2) popup_clock_digital_window

0x9e33,	// (0x00097835) popup_phob_thumbnail_window

0xa1ee,	// (0x00097bf0) call_video_uplink_pane_g1

0xb1f9,	// (0x00098bfb) call_video_uplink_pane_g2

0x0001,

0xf39b,	// (0x0009cd9d) call_video_uplink_pane_g

0xb201,	// (0x00098c03) video_uplink_pane

0xb209,	// (0x00098c0b) mce_image_pane_g1

0x2f5a,	// (0x0009095c) mce_image_pane_g2

0x2f64,	// (0x00090966) mce_image_pane_g3

0x2f6e,	// (0x00090970) mce_image_pane_g4

0x2f76,	// (0x00090978) mce_image_pane_g5

0x0004,

0xf3a0,	// (0x0009cda2) mce_image_pane_g

0xb213,	// (0x00098c15) control_top_pane_stacon_cp01_ParamLimits

0xb213,	// (0x00098c15) control_top_pane_stacon_cp01

0xb227,	// (0x00098c29) uni_indicator_pane_stacon_cp01_ParamLimits

0xb227,	// (0x00098c29) uni_indicator_pane_stacon_cp01

0xb238,	// (0x00098c3a) bg_popup_sub_pane_cp03

0x2f7e,	// (0x00090980) chi_dic_find_pane

0x2f86,	// (0x00090988) listscroll_chi_dic_pane

0x2f8f,	// (0x00090991) main_pane_chidic_g1

0x2fa2,	// (0x000909a4) chi_dic_find_pane_t1

0xb242,	// (0x00098c44) find_chidic_pane

0xb24b,	// (0x00098c4d) chi_dic_list_pane_ParamLimits

0xb24b,	// (0x00098c4d) chi_dic_list_pane

0xb25c,	// (0x00098c5e) scroll_pane_cp020

0x2fb0,	// (0x000909b2) find_chidic_pane_t1

0x9e33,	// (0x00097835) input_focus_pane_cp06

0x0db9,	// (0x0008e7bb) list_chi_dic_pane_ParamLimits

0x0db9,	// (0x0008e7bb) list_chi_dic_pane

0x2fbf,	// (0x000909c1) list_chi_dic_pane_t1_ParamLimits

0x2fbf,	// (0x000909c1) list_chi_dic_pane_t1

0x9e33,	// (0x00097835) list_highlight_pane_cp020

0xb264,	// (0x00098c66) bg_cale_heading_pane_g1

0x2fd2,	// (0x000909d4) bg_cale_heading_pane_g2

0x2fda,	// (0x000909dc) bg_cale_heading_pane_g3

0x2fe2,	// (0x000909e4) bg_cale_heading_pane_g4

0x2fec,	// (0x000909ee) bg_cale_heading_pane_g5

0x2ff6,	// (0x000909f8) bg_cale_heading_pane_g6

0x2ffe,	// (0x00090a00) bg_cale_heading_pane_g7

0x3006,	// (0x00090a08) bg_cale_heading_pane_g8

0x3010,	// (0x00090a12) bg_cale_heading_pane_g9

0x0008,

0xf3ab,	// (0x0009cdad) bg_cale_heading_pane_g

0xb264,	// (0x00098c66) bg_cale_side_pane_g1

0x301a,	// (0x00090a1c) bg_cale_side_pane_g2

0x3024,	// (0x00090a26) bg_cale_side_pane_g3

0x302e,	// (0x00090a30) bg_cale_side_pane_g4

0x3038,	// (0x00090a3a) bg_cale_side_pane_g5

0x3042,	// (0x00090a44) bg_cale_side_pane_g6

0x304c,	// (0x00090a4e) bg_cale_side_pane_g7

0x3056,	// (0x00090a58) bg_cale_side_pane_g8

0x305e,	// (0x00090a60) bg_cale_side_pane_g9

0x0008,

0xf3be,	// (0x0009cdc0) bg_cale_side_pane_g

0x3066,	// (0x00090a68) popup_call_status_window_ParamLimits

0x3066,	// (0x00090a68) popup_call_status_window

0xb26c,	// (0x00098c6e) stacon_top_pane

0xb274,	// (0x00098c76) status_pane_ParamLimits

0xb274,	// (0x00098c76) status_pane

0xb289,	// (0x00098c8b) status_small_pane

0xb291,	// (0x00098c93) control_pane

0x9e33,	// (0x00097835) stacon_bottom_pane

0xb299,	// (0x00098c9b) list_single_mce_smart_pane_t1_ParamLimits

0xb299,	// (0x00098c9b) list_single_mce_smart_pane_t1

0xb2ac,	// (0x00098cae) list_single_mce_smart_pane_t2_ParamLimits

0xb2ac,	// (0x00098cae) list_single_mce_smart_pane_t2

0x0001,

0xf3d1,	// (0x0009cdd3) list_single_mce_smart_pane_t_ParamLimits

0xf3d1,	// (0x0009cdd3) list_single_mce_smart_pane_t

0x30b3,	// (0x00090ab5) compass_pane

0x30be,	// (0x00090ac0) main_location2_pane_t1

0x30d2,	// (0x00090ad4) main_location2_pane_t2

0x30e8,	// (0x00090aea) main_location2_pane_t3

0x0003,

0xf3d6,	// (0x0009cdd8) main_location2_pane_t

0xb2cb,	// (0x00098ccd) compass_pane_g1_ParamLimits

0xb2cb,	// (0x00098ccd) compass_pane_g1

0x3132,	// (0x00090b34) compass_pane_t1

0x3141,	// (0x00090b43) compass_pane_t2

0x0005,

0xf3df,	// (0x0009cde1) compass_pane_t

0x3188,	// (0x00090b8a) text_secondary_cp61

0xb2df,	// (0x00098ce1) navi_pane_cams_g5

0xb302,	// (0x00098d04) navi_pane_im_t1

0xb310,	// (0x00098d12) navi_pane_mp_g1_ParamLimits

0xb310,	// (0x00098d12) navi_pane_mp_g1

0xb324,	// (0x00098d26) navi_pane_mp_g2_ParamLimits

0xb324,	// (0x00098d26) navi_pane_mp_g2

0xb330,	// (0x00098d32) navi_pane_mp_g3_ParamLimits

0xb330,	// (0x00098d32) navi_pane_mp_g3

0x0002,

0xf3f3,	// (0x0009cdf5) navi_pane_mp_g_ParamLimits

0xf3f3,	// (0x0009cdf5) navi_pane_mp_g

0xb33c,	// (0x00098d3e) navi_pane_mp_t1

0xb34a,	// (0x00098d4c) navi_pane_mp_t2

0x0002,

0xf3fa,	// (0x0009cdfc) navi_pane_mp_t

0xb386,	// (0x00098d88) navi_pane_vt_g1

0xb33c,	// (0x00098d3e) navi_pane_vt_t1

0xb38e,	// (0x00098d90) navi_slider_pane

0xa3a1,	// (0x00097da3) zooming_pane

0xb396,	// (0x00098d98) navi_slider_pane_g1

0xa685,	// (0x00098087) navi_slider_pane_g2

0x0006,

0xf401,	// (0x0009ce03) navi_slider_pane_g

0xb3ba,	// (0x00098dbc) aid_levels_zoom

0xb3c2,	// (0x00098dc4) zooming_pane_g1

0xb3ca,	// (0x00098dcc) zooming_pane_g2

0xb3ca,	// (0x00098dcc) zooming_pane_g3

0x0002,

0xf410,	// (0x0009ce12) zooming_pane_g

0xb3d2,	// (0x00098dd4) level_10_zoom

0xb3db,	// (0x00098ddd) level_11_zoom

0xb3e4,	// (0x00098de6) level_1_zoom

0xb3ed,	// (0x00098def) level_2_zoom

0xb3f6,	// (0x00098df8) level_3_zoom

0xb3ff,	// (0x00098e01) level_4_zoom

0xb408,	// (0x00098e0a) level_5_zoom

0xb411,	// (0x00098e13) level_6_zoom

0xb41a,	// (0x00098e1c) level_7_zoom

0xb423,	// (0x00098e25) level_8_zoom

0xb42c,	// (0x00098e2e) level_9_zoom

0xb43d,	// (0x00098e3f) popup_phob_thumbnail_window_g1

0xb445,	// (0x00098e47) popup_phob_thumbnail_window_g2

0x0001,

0xf417,	// (0x0009ce19) popup_phob_thumbnail_window_g

0xc74e,	// (0x0009a150) level_1_location

0xc756,	// (0x0009a158) level_2_location

0xc75e,	// (0x0009a160) level_3_location

0xc766,	// (0x0009a168) level_4_location

0xa3a1,	// (0x00097da3) level_5_location

0x32d1,	// (0x00090cd3) mce_icon_pane_g1

0x32db,	// (0x00090cdd) mce_icon_pane_g2

0x0001,

0xf41c,	// (0x0009ce1e) mce_icon_pane_g

0x32e3,	// (0x00090ce5) main_mup_pane_g1_ParamLimits

0x32e3,	// (0x00090ce5) main_mup_pane_g1

0x32f9,	// (0x00090cfb) main_mup_pane_g2_ParamLimits

0x32f9,	// (0x00090cfb) main_mup_pane_g2

0x3311,	// (0x00090d13) main_mup_pane_g3_ParamLimits

0x3311,	// (0x00090d13) main_mup_pane_g3

0x3329,	// (0x00090d2b) main_mup_pane_g4_ParamLimits

0x3329,	// (0x00090d2b) main_mup_pane_g4

0x3341,	// (0x00090d43) main_mup_pane_g5_ParamLimits

0x3341,	// (0x00090d43) main_mup_pane_g5

0x335d,	// (0x00090d5f) main_mup_pane_g6_ParamLimits

0x335d,	// (0x00090d5f) main_mup_pane_g6

0x3377,	// (0x00090d79) main_mup_pane_g7_ParamLimits

0x3377,	// (0x00090d79) main_mup_pane_g7

0x3395,	// (0x00090d97) main_mup_pane_g8_ParamLimits

0x3395,	// (0x00090d97) main_mup_pane_g8

0x33b3,	// (0x00090db5) main_mup_pane_g9_ParamLimits

0x33b3,	// (0x00090db5) main_mup_pane_g9

0x33cf,	// (0x00090dd1) main_mup_pane_g10_ParamLimits

0x33cf,	// (0x00090dd1) main_mup_pane_g10

0x33ed,	// (0x00090def) main_mup_pane_g11_ParamLimits

0x33ed,	// (0x00090def) main_mup_pane_g11

0x3407,	// (0x00090e09) main_mup_pane_g12_ParamLimits

0x3407,	// (0x00090e09) main_mup_pane_g12

0x341d,	// (0x00090e1f) main_mup_pane_g13_ParamLimits

0x341d,	// (0x00090e1f) main_mup_pane_g13

0x000c,

0xf421,	// (0x0009ce23) main_mup_pane_g_ParamLimits

0xf421,	// (0x0009ce23) main_mup_pane_g

0x3431,	// (0x00090e33) main_mup_pane_t1_ParamLimits

0x3431,	// (0x00090e33) main_mup_pane_t1

0x344d,	// (0x00090e4f) main_mup_pane_t2_ParamLimits

0x344d,	// (0x00090e4f) main_mup_pane_t2

0x3465,	// (0x00090e67) main_mup_pane_t3_ParamLimits

0x3465,	// (0x00090e67) main_mup_pane_t3

0x347d,	// (0x00090e7f) main_mup_pane_t4_ParamLimits

0x347d,	// (0x00090e7f) main_mup_pane_t4

0x349b,	// (0x00090e9d) main_mup_pane_t5_ParamLimits

0x349b,	// (0x00090e9d) main_mup_pane_t5

0x34b0,	// (0x00090eb2) main_mup_pane_t6_ParamLimits

0x34b0,	// (0x00090eb2) main_mup_pane_t6

0x0005,

0xf43c,	// (0x0009ce3e) main_mup_pane_t_ParamLimits

0xf43c,	// (0x0009ce3e) main_mup_pane_t

0x34c2,	// (0x00090ec4) mup_progress_pane_ParamLimits

0x34c2,	// (0x00090ec4) mup_progress_pane

0x34ce,	// (0x00090ed0) mup_visualizer_pane_ParamLimits

0x34ce,	// (0x00090ed0) mup_visualizer_pane

0x3502,	// (0x00090f04) mup_volume_pane_ParamLimits

0x3502,	// (0x00090f04) mup_volume_pane

0xb44d,	// (0x00098e4f) mup_visualizer_pane_g1_ParamLimits

0xb44d,	// (0x00098e4f) mup_visualizer_pane_g1

0xb44d,	// (0x00098e4f) mup_visualizer_pane_g2_ParamLimits

0xb44d,	// (0x00098e4f) mup_visualizer_pane_g2

0xb2cb,	// (0x00098ccd) mup_visualizer_pane_g3_ParamLimits

0xb2cb,	// (0x00098ccd) mup_visualizer_pane_g3

0x0002,

0xf449,	// (0x0009ce4b) mup_visualizer_pane_g_ParamLimits

0xf449,	// (0x0009ce4b) mup_visualizer_pane_g

0xa1ee,	// (0x00097bf0) mup_volume_pane_g1

0xb463,	// (0x00098e65) mup_volume_pane_g2

0x0001,

0xf450,	// (0x0009ce52) mup_volume_pane_g

0xa1ee,	// (0x00097bf0) mup_progress_pane_g1

0xb46c,	// (0x00098e6e) mup_progress_pane_g2

0xb475,	// (0x00098e77) mup_progress_pane_g3

0x0002,

0xf455,	// (0x0009ce57) mup_progress_pane_g

0x9e33,	// (0x00097835) bg_popup_window_pane_cp05

0xb47e,	// (0x00098e80) heading_pane_cp02_ParamLimits

0xb47e,	// (0x00098e80) heading_pane_cp02

0xb49a,	// (0x00098e9c) list_popup_blid_pane

0xb4a2,	// (0x00098ea4) list_blid_sat_info_pane_ParamLimits

0xb4a2,	// (0x00098ea4) list_blid_sat_info_pane

0xb4b5,	// (0x00098eb7) list_blid_sat_info_pane_g1

0xb4bd,	// (0x00098ebf) list_blid_sat_info_pane_t1

0x362c,	// (0x0009102e) mup_equalizer_pane_ParamLimits

0x362c,	// (0x0009102e) mup_equalizer_pane

0x364d,	// (0x0009104f) mup_equalizer_pane_cp1_ParamLimits

0x364d,	// (0x0009104f) mup_equalizer_pane_cp1

0x366e,	// (0x00091070) mup_equalizer_pane_cp2_ParamLimits

0x366e,	// (0x00091070) mup_equalizer_pane_cp2

0x3693,	// (0x00091095) mup_equalizer_pane_cp3_ParamLimits

0x3693,	// (0x00091095) mup_equalizer_pane_cp3

0x36bc,	// (0x000910be) mup_equalizer_pane_cp4_ParamLimits

0x36bc,	// (0x000910be) mup_equalizer_pane_cp4

0x36e5,	// (0x000910e7) mup_equalizer_pane_cp5

0x36fd,	// (0x000910ff) mup_equalizer_pane_cp6

0x3715,	// (0x00091117) mup_equalizer_pane_cp7

0xc668,	// (0x0009a06a) bg_popup_call_poc_act_pane_g9

0xc670,	// (0x0009a072) bg_popup_call_poc_act_pane_g10

0xc678,	// (0x0009a07a) bg_popup_call_poc_act_pane_g11

0x000a,

0xa08e,	// (0x00097a90) mup_scale_pane

0xa1ee,	// (0x00097bf0) mup_scale_pane_g1

0xb4cb,	// (0x00098ecd) mup_scale_pane_g2

0x0006,

0xf471,	// (0x0009ce73) mup_scale_pane_g

0xb4ef,	// (0x00098ef1) msg_data_pane

0xb4f7,	// (0x00098ef9) scroll_pane_cp017

0xfd57,	// (0x0008d759) bg_list_pane_cp04_ParamLimits

0xfd57,	// (0x0008d759) bg_list_pane_cp04

0xb4ff,	// (0x00098f01) msg_data_pane_g1

0x3747,	// (0x00091149) msg_data_pane_g2

0x3751,	// (0x00091153) msg_data_pane_g3

0x375b,	// (0x0009115d) msg_data_pane_g4

0x3763,	// (0x00091165) msg_data_pane_g5

0x376b,	// (0x0009116d) msg_data_pane_g6

0x3773,	// (0x00091175) msg_data_pane_g7

0x0006,

0xf480,	// (0x0009ce82) msg_data_pane_g

0xfd77,	// (0x0008d779) msg_text_pane_ParamLimits

0xfd77,	// (0x0008d779) msg_text_pane

0x377b,	// (0x0009117d) qrid_highlight_pane_cp011_ParamLimits

0x377b,	// (0x0009117d) qrid_highlight_pane_cp011

0x9e33,	// (0x00097835) msg_body_pane

0x9e33,	// (0x00097835) msg_header_pane

0xb510,	// (0x00098f12) input_focus_pane_cp07

0x3791,	// (0x00091193) msg_header_pane_t1_ParamLimits

0x3791,	// (0x00091193) msg_header_pane_t1

0x37a3,	// (0x000911a5) msg_header_pane_t2_ParamLimits

0x37a3,	// (0x000911a5) msg_header_pane_t2

0x0001,

0xf494,	// (0x0009ce96) msg_header_pane_t_ParamLimits

0xf494,	// (0x0009ce96) msg_header_pane_t

0xb525,	// (0x00098f27) msg_body_pane_g1

0xfdab,	// (0x0008d7ad) msg_body_pane_t1_ParamLimits

0xfdab,	// (0x0008d7ad) msg_body_pane_t1

0x37b5,	// (0x000911b7) msg_body_pane_t2_ParamLimits

0x37b5,	// (0x000911b7) msg_body_pane_t2

0x37c7,	// (0x000911c9) msg_body_pane_t3_ParamLimits

0x37c7,	// (0x000911c9) msg_body_pane_t3

0x0002,

0xf499,	// (0x0009ce9b) msg_body_pane_t_ParamLimits

0xf499,	// (0x0009ce9b) msg_body_pane_t

0x3813,	// (0x00091215) main_viewer_pane_g1_ParamLimits

0x3813,	// (0x00091215) main_viewer_pane_g1

0x3821,	// (0x00091223) main_viewer_pane_g2_ParamLimits

0x3821,	// (0x00091223) main_viewer_pane_g2

0x382f,	// (0x00091231) main_viewer_pane_g3_ParamLimits

0x382f,	// (0x00091231) main_viewer_pane_g3

0x383e,	// (0x00091240) main_viewer_pane_g4_ParamLimits

0x383e,	// (0x00091240) main_viewer_pane_g4

0xa6af,	// (0x000980b1) main_viewer_pane_g5_ParamLimits

0xa6af,	// (0x000980b1) main_viewer_pane_g5

0xa6af,	// (0x000980b1) main_viewer_pane_g7_ParamLimits

0xa6af,	// (0x000980b1) main_viewer_pane_g7

0xa6c1,	// (0x000980c3) main_viewer_pane_g8_ParamLimits

0xa6c1,	// (0x000980c3) main_viewer_pane_g8

0x0007,

0xf4a9,	// (0x0009ceab) main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0009ceab) main_viewer_pane_g

0xb52d,	// (0x00098f2f) viewer_content_pane_ParamLimits

0xb52d,	// (0x00098f2f) viewer_content_pane

0x387c,	// (0x0009127e) main_postcard_pane_g1_ParamLimits

0x387c,	// (0x0009127e) main_postcard_pane_g1

0x3892,	// (0x00091294) main_postcard_pane_g2_ParamLimits

0x3892,	// (0x00091294) main_postcard_pane_g2

0x38a8,	// (0x000912aa) main_postcard_pane_g3_ParamLimits

0x38a8,	// (0x000912aa) main_postcard_pane_g3

0x0005,

0xf4ba,	// (0x0009cebc) main_postcard_pane_g_ParamLimits

0xf4ba,	// (0x0009cebc) main_postcard_pane_g

0x38bf,	// (0x000912c1) main_postcard_pane_g4

0xc891,	// (0x0009a293) smil_status_volume_pane_g2

0x3902,	// (0x00091304) postcard_pane_ParamLimits

0x3902,	// (0x00091304) postcard_pane

0xb53b,	// (0x00098f3d) postcard_pane_g1_ParamLimits

0xb53b,	// (0x00098f3d) postcard_pane_g1

0x3952,	// (0x00091354) postcard_pane_g2_ParamLimits

0x3952,	// (0x00091354) postcard_pane_g2

0x395e,	// (0x00091360) postcard_pane_g3_ParamLimits

0x395e,	// (0x00091360) postcard_pane_g3

0xb549,	// (0x00098f4b) postcard_pane_g4_ParamLimits

0xb549,	// (0x00098f4b) postcard_pane_g4

0x396a,	// (0x0009136c) postcard_pane_g5_ParamLimits

0x396a,	// (0x0009136c) postcard_pane_g5

0x397f,	// (0x00091381) postcard_pane_g6_ParamLimits

0x397f,	// (0x00091381) postcard_pane_g6

0xb53b,	// (0x00098f3d) postcard_pane_g7_ParamLimits

0xb53b,	// (0x00098f3d) postcard_pane_g7

0x0006,

0xf4c7,	// (0x0009cec9) postcard_pane_g_ParamLimits

0xf4c7,	// (0x0009cec9) postcard_pane_g

0x3997,	// (0x00091399) main_mp2_pane_g1_ParamLimits

0x3997,	// (0x00091399) main_mp2_pane_g1

0x39a5,	// (0x000913a7) main_mp2_pane_g2_ParamLimits

0x39a5,	// (0x000913a7) main_mp2_pane_g2

0x39b1,	// (0x000913b3) main_mp2_pane_g3_ParamLimits

0x39b1,	// (0x000913b3) main_mp2_pane_g3

0x0002,

0xf4d6,	// (0x0009ced8) main_mp2_pane_g_ParamLimits

0xf4d6,	// (0x0009ced8) main_mp2_pane_g

0x39bd,	// (0x000913bf) main_mp2_pane_t1_ParamLimits

0x39bd,	// (0x000913bf) main_mp2_pane_t1

0x39d4,	// (0x000913d6) main_mp2_pane_t2_ParamLimits

0x39d4,	// (0x000913d6) main_mp2_pane_t2

0x39e6,	// (0x000913e8) main_mp2_pane_t3_ParamLimits

0x39e6,	// (0x000913e8) main_mp2_pane_t3

0x0002,

0xf4dd,	// (0x0009cedf) main_mp2_pane_t_ParamLimits

0xf4dd,	// (0x0009cedf) main_mp2_pane_t

0xb557,	// (0x00098f59) pec_content_pane_ParamLimits

0xb557,	// (0x00098f59) pec_content_pane

0xa558,	// (0x00097f5a) scroll_pane_cp015

0xb569,	// (0x00098f6b) pec_attribute_pane_ParamLimits

0xb569,	// (0x00098f6b) pec_attribute_pane

0x39f8,	// (0x000913fa) pec_content_pane_g1_ParamLimits

0x39f8,	// (0x000913fa) pec_content_pane_g1

0xb579,	// (0x00098f7b) pec_content_pane_t1_ParamLimits

0xb579,	// (0x00098f7b) pec_content_pane_t1

0xb58b,	// (0x00098f8d) pec_content_pane_t2_ParamLimits

0xb58b,	// (0x00098f8d) pec_content_pane_t2

0x0001,

0xf4e4,	// (0x0009cee6) pec_content_pane_t_ParamLimits

0xf4e4,	// (0x0009cee6) pec_content_pane_t

0x3a04,	// (0x00091406) list_single_graphic_pane_cp01_ParamLimits

0x3a04,	// (0x00091406) list_single_graphic_pane_cp01

0xa08e,	// (0x00097a90) bg_popup_sub_pane_cp04

0xb59d,	// (0x00098f9f) popup_mup_playback_window_g1

0xb5a9,	// (0x00098fab) popup_mup_playback_window_t1

0xb5be,	// (0x00098fc0) popup_mup_playback_window_t2

0x0001,

0xf4e9,	// (0x0009ceeb) popup_mup_playback_window_t

0xb5f5,	// (0x00098ff7) main_image_pane_g1_ParamLimits

0xb5f5,	// (0x00098ff7) main_image_pane_g1

0xb638,	// (0x0009903a) scroll_pane_cp018_ParamLimits

0xb638,	// (0x0009903a) scroll_pane_cp018

0xb650,	// (0x00099052) scroll_pane_cp016_ParamLimits

0xb650,	// (0x00099052) scroll_pane_cp016

0x3ad3,	// (0x000914d5) smil2_image_pane_ParamLimits

0x3ad3,	// (0x000914d5) smil2_image_pane

0x3b09,	// (0x0009150b) smil2_root_pane_ParamLimits

0x3b09,	// (0x0009150b) smil2_root_pane

0x3b41,	// (0x00091543) smil2_text_pane_ParamLimits

0x3b41,	// (0x00091543) smil2_text_pane

0x9e33,	// (0x00097835) bg_list_pane_cp06

0xb68c,	// (0x0009908e) grid_radio_pane

0x9e33,	// (0x00097835) bg_popup_window_pane_cp06

0xb696,	// (0x00099098) main_fmradio_pane_t1

0xb148,	// (0x00098b4a) heading_pane_cp04

0xb6a4,	// (0x000990a6) main_fmradio_pane_t2

0xc680,	// (0x0009a082) popup_cale_lunar_info_window_g1

0xb6b2,	// (0x000990b4) main_fmradio_pane_t3

0xc688,	// (0x0009a08a) popup_cale_lunar_info_window_g2

0xb6c2,	// (0x000990c4) main_fmradio_pane_t4

0x0001,

0xb6d0,	// (0x000990d2) main_fmradio_pane_t5

0x0004,

0xf5c4,	// (0x0009cfc6) popup_cale_lunar_info_window_g

0xf4fe,	// (0x0009cf00) main_fmradio_pane_t

0xb6de,	// (0x000990e0) wait_bar_pane_cp03

0xb6e6,	// (0x000990e8) cell_fmradio_pane_ParamLimits

0xb6e6,	// (0x000990e8) cell_fmradio_pane

0xb53b,	// (0x00098f3d) cell_fmradio_pane_g1_ParamLimits

0xb53b,	// (0x00098f3d) cell_fmradio_pane_g1

0x9e33,	// (0x00097835) grid_highlight_pane_cp011

0xb6fb,	// (0x000990fd) poc_content_pane_ParamLimits

0xb6fb,	// (0x000990fd) poc_content_pane

0xb70d,	// (0x0009910f) scroll_pane_cp019

0x3bd1,	// (0x000915d3) popup_call_poc_act_window_ParamLimits

0x3bd1,	// (0x000915d3) popup_call_poc_act_window

0x3bf5,	// (0x000915f7) popup_call_poc_inact_window_ParamLimits

0x3bf5,	// (0x000915f7) popup_call_poc_inact_window

0xf59b,	// (0x0009cf9d) bg_popup_call_poc_act_pane_g

0xc5f8,	// (0x00099ffa) bg_popup_call_poc_inact_pane_g1

0xc600,	// (0x0009a002) bg_popup_call_poc_inact_pane_g2

0xb715,	// (0x00099117) popup_call_poc_act_window_g2

0xc608,	// (0x0009a00a) bg_popup_call_poc_inact_pane_g3

0xc610,	// (0x0009a012) bg_popup_call_poc_inact_pane_g4

0xc618,	// (0x0009a01a) bg_popup_call_poc_inact_pane_g5

0xb71d,	// (0x0009911f) popup_call_poc_act_window_t1_ParamLimits

0xb71d,	// (0x0009911f) popup_call_poc_act_window_t1

0xb745,	// (0x00099147) popup_call_poc_act_window_t2_ParamLimits

0xb745,	// (0x00099147) popup_call_poc_act_window_t2

0xb76d,	// (0x0009916f) popup_call_poc_act_window_t3_ParamLimits

0xb76d,	// (0x0009916f) popup_call_poc_act_window_t3

0xb795,	// (0x00099197) popup_call_poc_act_window_t4_ParamLimits

0xb795,	// (0x00099197) popup_call_poc_act_window_t4

0x0003,

0xf509,	// (0x0009cf0b) popup_call_poc_act_window_t_ParamLimits

0xf509,	// (0x0009cf0b) popup_call_poc_act_window_t

0xc620,	// (0x0009a022) bg_popup_call_poc_inact_pane_g6

0xc628,	// (0x0009a02a) bg_popup_call_poc_inact_pane_g7

0xc630,	// (0x0009a032) bg_popup_call_poc_inact_pane_g8

0xb7a7,	// (0x000991a9) popup_call_poc_inact_window_g2

0xc638,	// (0x0009a03a) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf588,	// (0x0009cf8a) bg_popup_call_poc_inact_pane_g

0xb7af,	// (0x000991b1) popup_call_poc_inact_window_t1_ParamLimits

0xb7af,	// (0x000991b1) popup_call_poc_inact_window_t1

0xb7c4,	// (0x000991c6) popup_call_poc_inact_window_t2_ParamLimits

0xb7c4,	// (0x000991c6) popup_call_poc_inact_window_t2

0xb7d9,	// (0x000991db) popup_call_poc_inact_window_t3_ParamLimits

0xb7d9,	// (0x000991db) popup_call_poc_inact_window_t3

0x0002,

0xf512,	// (0x0009cf14) popup_call_poc_inact_window_t_ParamLimits

0xf512,	// (0x0009cf14) popup_call_poc_inact_window_t

0xc804,	// (0x0009a206) context_pane_ParamLimits

0x449d,	// (0x00091e9f) signal_pane_ParamLimits

0xa3a1,	// (0x00097da3) main_call2_pane

0xc7f2,	// (0x0009a1f4) popup_phob_thumbnail2_window_ParamLimits

0xc7f2,	// (0x0009a1f4) popup_phob_thumbnail2_window

0xa697,	// (0x00098099) aid_hotspot_pointer_arrow_pane

0xa69f,	// (0x000980a1) aid_hotspot_pointer_hand_pane

0x3f5d,	// (0x0009195f) phob_pre_status_pane_g5

0x19d7,	// (0x0008f3d9) cams_zoom_pane_ParamLimits

0x19e6,	// (0x0008f3e8) image_vga_pane_ParamLimits

0x1a00,	// (0x0008f402) main_camera_pane_g1_ParamLimits

0x1a12,	// (0x0008f414) main_camera_pane_g2_ParamLimits

0x1a22,	// (0x0008f424) main_camera_pane_g3_ParamLimits

0x1a36,	// (0x0008f438) main_camera_pane_g4_ParamLimits

0x1a4a,	// (0x0008f44c) main_camera_pane_g5_ParamLimits

0x1a5e,	// (0x0008f460) main_camera_pane_g6_ParamLimits

0x1a72,	// (0x0008f474) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0009cc0c) main_camera_pane_g_ParamLimits

0x1a86,	// (0x0008f488) main_camera_pane_t1_ParamLimits

0x1a9c,	// (0x0008f49e) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0009cc1d) main_camera_pane_t_ParamLimits

0xa08e,	// (0x00097a90) bg_popup_preview_window_pane_cp01_ParamLimits

0xa08e,	// (0x00097a90) bg_popup_preview_window_pane_cp01

0xb7ee,	// (0x000991f0) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7ee,	// (0x000991f0) popup_phob_thumbnail2_window_g1

0x9e33,	// (0x00097835) call2_cli_visual_pane

0x3c29,	// (0x0009162b) popup_call2_audio_conf_window_ParamLimits

0x3c29,	// (0x0009162b) popup_call2_audio_conf_window

0x3c51,	// (0x00091653) popup_call2_audio_first_window_ParamLimits

0x3c51,	// (0x00091653) popup_call2_audio_first_window

0x3ce7,	// (0x000916e9) popup_call2_audio_in_window_ParamLimits

0x3ce7,	// (0x000916e9) popup_call2_audio_in_window

0x3d33,	// (0x00091735) popup_call2_audio_out_window_ParamLimits

0x3d33,	// (0x00091735) popup_call2_audio_out_window

0x3da5,	// (0x000917a7) popup_call2_audio_second_window_ParamLimits

0x3da5,	// (0x000917a7) popup_call2_audio_second_window

0x3e0b,	// (0x0009180d) popup_call2_audio_wait_window_ParamLimits

0x3e0b,	// (0x0009180d) popup_call2_audio_wait_window

0x9e33,	// (0x00097835) bg_popup_call2_act_pane_cp03

0xa070,	// (0x00097a72) list_conf_pane_cp

0xb7fa,	// (0x000991fc) popup_call2_audio_conf_window_t1

0xb808,	// (0x0009920a) list_single_graphic_popup_conf2_pane_ParamLimits

0xb808,	// (0x0009920a) list_single_graphic_popup_conf2_pane

0xb1b7,	// (0x00098bb9) list_highlight_pane_cp04

0xb81b,	// (0x0009921d) list_single_graphic_popup_conf2_pane_g1

0xb1c8,	// (0x00098bca) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf519,	// (0x0009cf1b) list_single_graphic_popup_conf2_pane_g

0xb825,	// (0x00099227) list_single_graphic_popup_conf2_pane_t1

0xb833,	// (0x00099235) bg_popup_call2_act_pane_cp01_ParamLimits

0xb833,	// (0x00099235) bg_popup_call2_act_pane_cp01

0xb8bd,	// (0x000992bf) call_type_pane_cp05_ParamLimits

0xb8bd,	// (0x000992bf) call_type_pane_cp05

0xb911,	// (0x00099313) popup_call2_audio_second_window_g1_ParamLimits

0xb911,	// (0x00099313) popup_call2_audio_second_window_g1

0xb965,	// (0x00099367) popup_call2_audio_second_window_g2_ParamLimits

0xb965,	// (0x00099367) popup_call2_audio_second_window_g2

0x0002,

0xf51e,	// (0x0009cf20) popup_call2_audio_second_window_g_ParamLimits

0xf51e,	// (0x0009cf20) popup_call2_audio_second_window_g

0xb9ca,	// (0x000993cc) popup_call2_audio_second_window_t1_ParamLimits

0xb9ca,	// (0x000993cc) popup_call2_audio_second_window_t1

0xba85,	// (0x00099487) popup_call2_audio_second_window_t2_ParamLimits

0xba85,	// (0x00099487) popup_call2_audio_second_window_t2

0xbad8,	// (0x000994da) popup_call2_audio_second_window_t3_ParamLimits

0xbad8,	// (0x000994da) popup_call2_audio_second_window_t3

0x0003,

0xf525,	// (0x0009cf27) popup_call2_audio_second_window_t_ParamLimits

0xf525,	// (0x0009cf27) popup_call2_audio_second_window_t

0x9e33,	// (0x00097835) bg_popup_call2_in_pane_cp02

0x9e3d,	// (0x0009783f) call_type_pane_cp04

0x9e45,	// (0x00097847) popup_call2_audio_wait_window_g1

0x9e4d,	// (0x0009784f) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0009cafb) popup_call2_audio_wait_window_g

0x9e55,	// (0x00097857) popup_call2_audio_wait_window_t3

0xbbcb,	// (0x000995cd) bg_popup_call2_act_pane_ParamLimits

0xbbcb,	// (0x000995cd) bg_popup_call2_act_pane

0xbc8b,	// (0x0009968d) call_type_pane_cp03_ParamLimits

0xbc8b,	// (0x0009968d) call_type_pane_cp03

0xbcef,	// (0x000996f1) popup_call2_audio_first_window_g1_ParamLimits

0xbcef,	// (0x000996f1) popup_call2_audio_first_window_g1

0xbd5f,	// (0x00099761) popup_call2_audio_first_window_g2_ParamLimits

0xbd5f,	// (0x00099761) popup_call2_audio_first_window_g2

0xb44d,	// (0x00098e4f) popup_call2_audio_first_window_g3_ParamLimits

0xb44d,	// (0x00098e4f) popup_call2_audio_first_window_g3

0x0004,

0xf52e,	// (0x0009cf30) popup_call2_audio_first_window_g_ParamLimits

0xf52e,	// (0x0009cf30) popup_call2_audio_first_window_g

0xbe3d,	// (0x0009983f) popup_call2_audio_first_window_t1_ParamLimits

0xbe3d,	// (0x0009983f) popup_call2_audio_first_window_t1

0xbf40,	// (0x00099942) popup_call2_audio_first_window_t4_ParamLimits

0xbf40,	// (0x00099942) popup_call2_audio_first_window_t4

0xc023,	// (0x00099a25) popup_call2_audio_first_window_t5_ParamLimits

0xc023,	// (0x00099a25) popup_call2_audio_first_window_t5

0x0003,

0xf539,	// (0x0009cf3b) popup_call2_audio_first_window_t_ParamLimits

0xf539,	// (0x0009cf3b) popup_call2_audio_first_window_t

0xa086,	// (0x00097a88) bg_popup_call2_act_pane_g1

0xc692,	// (0x0009a094) popup_cale_lunar_info_window_t1

0xc6a0,	// (0x0009a0a2) popup_cale_lunar_info_window_t2

0xc6ae,	// (0x0009a0b0) popup_cale_lunar_info_window_t3

0x9e33,	// (0x00097835) bg_popup_call2_bubble_pane

0xc124,	// (0x00099b26) bg_popup_call2_in_pane_cp01_ParamLimits

0xc124,	// (0x00099b26) bg_popup_call2_in_pane_cp01

0x9b0f,	// (0x00097511) call_type_pane_cp02

0xc16c,	// (0x00099b6e) popup_call2_audio_out_window_g1_ParamLimits

0xc16c,	// (0x00099b6e) popup_call2_audio_out_window_g1

0xc198,	// (0x00099b9a) popup_call2_audio_out_window_g2_ParamLimits

0xc198,	// (0x00099b9a) popup_call2_audio_out_window_g2

0xc1c0,	// (0x00099bc2) popup_call2_audio_out_window_g3_ParamLimits

0xc1c0,	// (0x00099bc2) popup_call2_audio_out_window_g3

0x0003,

0xf542,	// (0x0009cf44) popup_call2_audio_out_window_g_ParamLimits

0xf542,	// (0x0009cf44) popup_call2_audio_out_window_g

0xc1fb,	// (0x00099bfd) popup_call2_audio_out_window_t1_ParamLimits

0xc1fb,	// (0x00099bfd) popup_call2_audio_out_window_t1

0xc25a,	// (0x00099c5c) popup_call2_audio_out_window_t2_ParamLimits

0xc25a,	// (0x00099c5c) popup_call2_audio_out_window_t2

0xc2ae,	// (0x00099cb0) popup_call2_audio_out_window_t3_ParamLimits

0xc2ae,	// (0x00099cb0) popup_call2_audio_out_window_t3

0xc2c4,	// (0x00099cc6) popup_call2_audio_out_window_t4_ParamLimits

0xc2c4,	// (0x00099cc6) popup_call2_audio_out_window_t4

0xc2da,	// (0x00099cdc) popup_call2_audio_out_window_t5_ParamLimits

0xc2da,	// (0x00099cdc) popup_call2_audio_out_window_t5

0x0005,

0xf54b,	// (0x0009cf4d) popup_call2_audio_out_window_t_ParamLimits

0xf54b,	// (0x0009cf4d) popup_call2_audio_out_window_t

0xc33e,	// (0x00099d40) bg_popup_call2_in_pane_ParamLimits

0xc33e,	// (0x00099d40) bg_popup_call2_in_pane

0xc39a,	// (0x00099d9c) popup_call2_audio_in_window_g1_ParamLimits

0xc39a,	// (0x00099d9c) popup_call2_audio_in_window_g1

0xc3d2,	// (0x00099dd4) popup_call2_audio_in_window_g2_ParamLimits

0xc3d2,	// (0x00099dd4) popup_call2_audio_in_window_g2

0xc40a,	// (0x00099e0c) popup_call2_audio_in_window_g3_ParamLimits

0xc40a,	// (0x00099e0c) popup_call2_audio_in_window_g3

0x0003,

0xf558,	// (0x0009cf5a) popup_call2_audio_in_window_g_ParamLimits

0xf558,	// (0x0009cf5a) popup_call2_audio_in_window_g

0xc462,	// (0x00099e64) popup_call2_audio_in_window_t1_ParamLimits

0xc462,	// (0x00099e64) popup_call2_audio_in_window_t1

0xc4e2,	// (0x00099ee4) popup_call2_audio_in_window_t2_ParamLimits

0xc4e2,	// (0x00099ee4) popup_call2_audio_in_window_t2

0xc562,	// (0x00099f64) popup_call2_audio_in_window_t3_ParamLimits

0xc562,	// (0x00099f64) popup_call2_audio_in_window_t3

0xc57c,	// (0x00099f7e) popup_call2_audio_in_window_t4_ParamLimits

0xc57c,	// (0x00099f7e) popup_call2_audio_in_window_t4

0xc58e,	// (0x00099f90) popup_call2_audio_in_window_t5_ParamLimits

0xc58e,	// (0x00099f90) popup_call2_audio_in_window_t5

0xc5a3,	// (0x00099fa5) popup_call2_audio_in_window_t6_ParamLimits

0xc5a3,	// (0x00099fa5) popup_call2_audio_in_window_t6

0x0005,

0xf561,	// (0x0009cf63) popup_call2_audio_in_window_t_ParamLimits

0xf561,	// (0x0009cf63) popup_call2_audio_in_window_t

0xa086,	// (0x00097a88) bg_popup_call2_in_pane_g1

0xc6bc,	// (0x0009a0be) popup_cale_lunar_info_window_t4

0x0003,

0xf5c9,	// (0x0009cfcb) popup_cale_lunar_info_window_t

0xa08e,	// (0x00097a90) bg_popup_call2_rect_pane_ParamLimits

0xa08e,	// (0x00097a90) bg_popup_call2_rect_pane

0x9e33,	// (0x00097835) call2_cli_visual_graphic_pane

0x9e33,	// (0x00097835) call2_cli_visual_text_pane

0xa6d9,	// (0x000980db) smil_status_volume_pane_g3

0x0002,

0xa1ee,	// (0x00097bf0) call2_cli_visual_graphic_pane_g1

0xa1ee,	// (0x00097bf0) call2_cli_visual_graphic_pane_g2

0xa1ee,	// (0x00097bf0) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56e,	// (0x0009cf70) call2_cli_visual_graphic_pane_g

0xc5b8,	// (0x00099fba) bg_popup_call2_rect_pane_g1

0xa296,	// (0x00097c98) bg_popup_call2_rect_pane_g2

0xc5c0,	// (0x00099fc2) bg_popup_call2_rect_pane_g3

0xc5c8,	// (0x00099fca) bg_popup_call2_rect_pane_g4

0xc5d0,	// (0x00099fd2) bg_popup_call2_rect_pane_g5

0xc5d8,	// (0x00099fda) bg_popup_call2_rect_pane_g6

0xc5e0,	// (0x00099fe2) bg_popup_call2_rect_pane_g7

0xc5e8,	// (0x00099fea) bg_popup_call2_rect_pane_g8

0xc5f0,	// (0x00099ff2) bg_popup_call2_rect_pane_g9

0x0008,

0xf575,	// (0x0009cf77) bg_popup_call2_rect_pane_g

0xc5f8,	// (0x00099ffa) bg_popup_call2_bubble_pane_g1

0xc600,	// (0x0009a002) bg_popup_call2_bubble_pane_g2

0xc608,	// (0x0009a00a) bg_popup_call2_bubble_pane_g3

0xc610,	// (0x0009a012) bg_popup_call2_bubble_pane_g4

0xc618,	// (0x0009a01a) bg_popup_call2_bubble_pane_g5

0xc620,	// (0x0009a022) bg_popup_call2_bubble_pane_g6

0xc628,	// (0x0009a02a) bg_popup_call2_bubble_pane_g7

0xc630,	// (0x0009a032) bg_popup_call2_bubble_pane_g8

0xc638,	// (0x0009a03a) bg_popup_call2_bubble_pane_g9

0x0008,

0xf588,	// (0x0009cf8a) bg_popup_call2_bubble_pane_g

0x1151,	// (0x0008eb53) aid_cale_week_size_cell_pane

0x1ab6,	// (0x0008f4b8) aid_cams_cif_uncrop_pane_ParamLimits

0x1ab6,	// (0x0008f4b8) aid_cams_cif_uncrop_pane

0x1c6f,	// (0x0008f671) aid_cams_size_cell_ParamLimits

0x1c6f,	// (0x0008f671) aid_cams_size_cell

0x1c83,	// (0x0008f685) grid_cams_pane_ParamLimits

0x1c9d,	// (0x0008f69f) linegrid_cams_pane_ParamLimits

0x1d79,	// (0x0008f77b) call_video_pane_t1

0x1d93,	// (0x0008f795) call_video_pane_t2

0x0001,

0xf26e,	// (0x0009cc70) call_video_pane_t

0x21c7,	// (0x0008fbc9) aid_cale_month_size_cell_pane_ParamLimits

0x21c7,	// (0x0008fbc9) aid_cale_month_size_cell_pane

0xf612,	// (0x0009d014) smil_status_volume_pane_g

0xa6e6,	// (0x000980e8) volume_smil_pane_ParamLimits

0x99d3,	// (0x000973d5) aid_popup2_width_pane

0x10af,	// (0x0008eab1) cell_qdial_pane_g4_ParamLimits

0x10af,	// (0x0008eab1) cell_qdial_pane_g4

0x3112,	// (0x00090b14) aid_blid_cardinal_pane_ParamLimits

0x311e,	// (0x00090b20) aid_blid_destination_pane_ParamLimits

0x311e,	// (0x00090b20) aid_blid_destination_pane

0xa08e,	// (0x00097a90) bg_popup_call_poc_act_pane_ParamLimits

0xa08e,	// (0x00097a90) bg_popup_call_poc_act_pane

0xa08e,	// (0x00097a90) bg_popup_call_poc_inact_pane_ParamLimits

0xa08e,	// (0x00097a90) bg_popup_call_poc_inact_pane

0xc640,	// (0x0009a042) bg_popup_call_poc_act_pane_g1

0xc648,	// (0x0009a04a) bg_popup_call_poc_act_pane_g2

0xc650,	// (0x0009a052) bg_popup_call_poc_act_pane_g3

0xc610,	// (0x0009a012) bg_popup_call_poc_act_pane_g4

0xc618,	// (0x0009a01a) bg_popup_call_poc_act_pane_g5

0xc658,	// (0x0009a05a) bg_popup_call_poc_act_pane_g6

0xc628,	// (0x0009a02a) bg_popup_call_poc_act_pane_g7

0xc660,	// (0x0009a062) bg_popup_call_poc_act_pane_g8

0x9e33,	// (0x00097835) main_usb_pane

0xc7c9,	// (0x0009a1cb) popup_cale_lunar_info_window

0x205c,	// (0x0008fa5e) im_reading_pane_t1_ParamLimits

0xa4b0,	// (0x00097eb2) list_im_pane_ParamLimits

0xa4c1,	// (0x00097ec3) scroll_pane_cp07_ParamLimits

0x9e33,	// (0x00097835) grid_highlight_pane_cp012

0xa08e,	// (0x00097a90) mup_scale_pane_ParamLimits

0xb53b,	// (0x00098f3d) main_usb_pane_g1_ParamLimits

0xb53b,	// (0x00098f3d) main_usb_pane_g1

0x3e69,	// (0x0009186b) main_usb_pane_g2_ParamLimits

0x3e69,	// (0x0009186b) main_usb_pane_g2

0x0001,

0xf5b2,	// (0x0009cfb4) main_usb_pane_g_ParamLimits

0xf5b2,	// (0x0009cfb4) main_usb_pane_g

0x3e7f,	// (0x00091881) main_usb_pane_t1_ParamLimits

0x3e7f,	// (0x00091881) main_usb_pane_t1

0x3e91,	// (0x00091893) main_usb_pane_t2_ParamLimits

0x3e91,	// (0x00091893) main_usb_pane_t2

0x3ea3,	// (0x000918a5) main_usb_pane_t3_ParamLimits

0x3ea3,	// (0x000918a5) main_usb_pane_t3

0x3eb5,	// (0x000918b7) main_usb_pane_t4_ParamLimits

0x3eb5,	// (0x000918b7) main_usb_pane_t4

0x3eca,	// (0x000918cc) main_usb_pane_t5_ParamLimits

0x3eca,	// (0x000918cc) main_usb_pane_t5

0x3edf,	// (0x000918e1) main_usb_pane_t6_ParamLimits

0x3edf,	// (0x000918e1) main_usb_pane_t6

0x0005,

0xf5b7,	// (0x0009cfb9) main_usb_pane_t_ParamLimits

0x30b3,	// (0x00090ab5) aid_text_placing

0x30be,	// (0x00090ac0) main_location2_pane_t1_ParamLimits

0x30d2,	// (0x00090ad4) main_location2_pane_t2_ParamLimits

0x30e8,	// (0x00090aea) main_location2_pane_t3_ParamLimits

0x30fe,	// (0x00090b00) main_location2_pane_t4_ParamLimits

0x30fe,	// (0x00090b00) main_location2_pane_t4

0xf3d6,	// (0x0009cdd8) main_location2_pane_t_ParamLimits

0xa0ca,	// (0x00097acc) find_pinb_pane_g2_ParamLimits

0xa0ca,	// (0x00097acc) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0009cb21) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0009cb21) find_pinb_pane_g

0xa0d6,	// (0x00097ad8) find_pinb_pane_t1_ParamLimits

0xa0e8,	// (0x00097aea) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0009cb26) find_pinb_pane_t_ParamLimits

0x9e33,	// (0x00097835) main_call3_pane

0x2796,	// (0x00090198) cale_month_day_heading_pane_t1_ParamLimits

0x281c,	// (0x0009021e) cale_month_day_heading_pane_t2_ParamLimits

0x28ad,	// (0x000902af) cale_month_day_heading_pane_t3_ParamLimits

0x293e,	// (0x00090340) cale_month_day_heading_pane_t4_ParamLimits

0x29cf,	// (0x000903d1) cale_month_day_heading_pane_t5_ParamLimits

0x2a70,	// (0x00090472) cale_month_day_heading_pane_t6_ParamLimits

0x2b15,	// (0x00090517) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0009cca8) cale_month_day_heading_pane_t_ParamLimits

0x2dc7,	// (0x000907c9) smil_status_volume_pane

0x3926,	// (0x00091328) postcard_address_pane_ParamLimits

0x3926,	// (0x00091328) postcard_address_pane

0x393c,	// (0x0009133e) postcard_message_pane_ParamLimits

0x393c,	// (0x0009133e) postcard_message_pane

0x3e45,	// (0x00091847) call2_cli_visual_pane_t1_ParamLimits

0x3e45,	// (0x00091847) call2_cli_visual_pane_t1

0x46d2,	// (0x000920d4) postcard_message_pane_t1_ParamLimits

0x46d2,	// (0x000920d4) postcard_message_pane_t1

0x46bb,	// (0x000920bd) postcard_address_pane_t1_ParamLimits

0x46bb,	// (0x000920bd) postcard_address_pane_t1

0x46a7,	// (0x000920a9) popup_call3_audio_in_window_ParamLimits

0x46a7,	// (0x000920a9) popup_call3_audio_in_window

0x452c,	// (0x00091f2e) bg_popup_call3_in_pane_ParamLimits

0x452c,	// (0x00091f2e) bg_popup_call3_in_pane

0x45a8,	// (0x00091faa) popup_call3_audio_in_window_g1_ParamLimits

0x45a8,	// (0x00091faa) popup_call3_audio_in_window_g1

0x45c8,	// (0x00091fca) popup_call3_audio_in_window_g2_ParamLimits

0x45c8,	// (0x00091fca) popup_call3_audio_in_window_g2

0x45e8,	// (0x00091fea) popup_call3_audio_in_window_g3_ParamLimits

0x45e8,	// (0x00091fea) popup_call3_audio_in_window_g3

0x0003,

0xf619,	// (0x0009d01b) popup_call3_audio_in_window_g_ParamLimits

0xf619,	// (0x0009d01b) popup_call3_audio_in_window_g

0x4619,	// (0x0009201b) popup_call3_audio_in_window_t1_ParamLimits

0x4619,	// (0x0009201b) popup_call3_audio_in_window_t1

0x4657,	// (0x00092059) popup_call3_audio_in_window_t2_ParamLimits

0x4657,	// (0x00092059) popup_call3_audio_in_window_t2

0x4695,	// (0x00092097) popup_call3_audio_in_window_t3_ParamLimits

0x4695,	// (0x00092097) popup_call3_audio_in_window_t3

0x0002,

0xf622,	// (0x0009d024) popup_call3_audio_in_window_t_ParamLimits

0xf622,	// (0x0009d024) popup_call3_audio_in_window_t

0xa3a1,	// (0x00097da3) bg_popup_call3_rect_pane

0xc5b8,	// (0x00099fba) bg_popup_call3_rect_pane_g1

0xa296,	// (0x00097c98) bg_popup_call3_rect_pane_g2

0xc5c0,	// (0x00099fc2) bg_popup_call3_rect_pane_g3

0xc5c8,	// (0x00099fca) bg_popup_call3_rect_pane_g4

0xc5d0,	// (0x00099fd2) bg_popup_call3_rect_pane_g5

0xc5d8,	// (0x00099fda) bg_popup_call3_rect_pane_g6

0xc5e0,	// (0x00099fe2) bg_popup_call3_rect_pane_g7

0x3518,	// (0x00090f1a) mup_visualizer_osc_pane

0xb45b,	// (0x00098e5d) mup_visualizer_spec_pane

0x455c,	// (0x00091f5e) call3_video_qcif_pane_ParamLimits

0x455c,	// (0x00091f5e) call3_video_qcif_pane

0x456f,	// (0x00091f71) call3_video_qcif_uncrop_pane_ParamLimits

0x456f,	// (0x00091f71) call3_video_qcif_uncrop_pane

0x457f,	// (0x00091f81) call3_video_subqcif_pane_ParamLimits

0x457f,	// (0x00091f81) call3_video_subqcif_pane

0x4595,	// (0x00091f97) call3_video_subqcif_uncrop_pane_ParamLimits

0x4595,	// (0x00091f97) call3_video_subqcif_uncrop_pane

0x4608,	// (0x0009200a) popup_call3_audio_in_window_g4_ParamLimits

0x4608,	// (0x0009200a) popup_call3_audio_in_window_g4

0x451b,	// (0x00091f1d) mup_spec_half_pane

0x4524,	// (0x00091f26) mup_spec_half_pane_cp

0xc864,	// (0x0009a266) mup_osc_middle_pane

0xc86d,	// (0x0009a26f) mup_visualizer_osc_pane_g1

0x44fb,	// (0x00091efd) mup_spec_bar_pane_ParamLimits

0x44fb,	// (0x00091efd) mup_spec_bar_pane

0xc851,	// (0x0009a253) mup_spec_bar_pane_g1

0xc85b,	// (0x0009a25d) mup_spec_bar_pane_g2

0x0001,

0xf60d,	// (0x0009d00f) mup_spec_bar_pane_g

0x1151,	// (0x0008eb53) aid_cale_week_size_cell_pane_ParamLimits

0x116b,	// (0x0008eb6d) bg_cale_heading_pane_ParamLimits

0x1194,	// (0x0008eb96) bg_cale_pane_cp01_ParamLimits

0x11b6,	// (0x0008ebb8) cale_week_corner_pane_ParamLimits

0x11d5,	// (0x0008ebd7) cale_week_day_heading_pane_ParamLimits

0x1203,	// (0x0008ec05) cale_week_scroll_pane_g1_ParamLimits

0x1227,	// (0x0008ec29) cale_week_scroll_pane_g2_ParamLimits

0x123f,	// (0x0008ec41) cale_week_scroll_pane_g3_ParamLimits

0x1257,	// (0x0008ec59) cale_week_scroll_pane_g4_ParamLimits

0x1273,	// (0x0008ec75) cale_week_scroll_pane_g5_ParamLimits

0x1293,	// (0x0008ec95) cale_week_scroll_pane_g6_ParamLimits

0x12b3,	// (0x0008ecb5) cale_week_scroll_pane_g7_ParamLimits

0x12d7,	// (0x0008ecd9) cale_week_scroll_pane_g8_ParamLimits

0x12fb,	// (0x0008ecfd) cale_week_scroll_pane_g9_ParamLimits

0x1318,	// (0x0008ed1a) cale_week_scroll_pane_g10_ParamLimits

0x1335,	// (0x0008ed37) cale_week_scroll_pane_g11_ParamLimits

0x1352,	// (0x0008ed54) cale_week_scroll_pane_g12_ParamLimits

0x136f,	// (0x0008ed71) cale_week_scroll_pane_g13_ParamLimits

0x138c,	// (0x0008ed8e) cale_week_scroll_pane_g14_ParamLimits

0x13b5,	// (0x0008edb7) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0009cbb2) cale_week_scroll_pane_g_ParamLimits

0x1402,	// (0x0008ee04) cale_week_time_pane_ParamLimits

0x1426,	// (0x0008ee28) grid_cale_week_pane_ParamLimits

0xa312,	// (0x00097d14) listscroll_cale_week_pane_t1

0xa324,	// (0x00097d26) scroll_pane_cp08_ParamLimits

0x2234,	// (0x0008fc36) cale_month_corner_pane_ParamLimits

0xad96,	// (0x00098798) cale_month_pane_t1

0x271c,	// (0x0009011e) cale_month_week_pane_ParamLimits

0x2ee1,	// (0x000908e3) popup_call_status_window_g1_ParamLimits

0x2ef5,	// (0x000908f7) popup_call_status_window_g2_ParamLimits

0x2f09,	// (0x0009090b) popup_call_status_window_g3_ParamLimits

0xf35d,	// (0x0009cd5f) popup_call_status_window_g_ParamLimits

0xb138,	// (0x00098b3a) aid_call2_pane

0xfd9d,	// (0x0008d79f) msg_header_pane_g1

0x3926,	// (0x00091328) postcard_address2_pane_ParamLimits

0x3926,	// (0x00091328) postcard_address2_pane

0x393c,	// (0x0009133e) postcard_message2_pane_ParamLimits

0x393c,	// (0x0009133e) postcard_message2_pane

0x44ab,	// (0x00091ead) message2_row_pane_ParamLimits

0x44ab,	// (0x00091ead) message2_row_pane

0x44c8,	// (0x00091eca) address2_row_pane_ParamLimits

0x44c8,	// (0x00091eca) address2_row_pane

0xc81f,	// (0x0009a221) postcard_message2_row_pane_g1

0xc827,	// (0x0009a229) postcard_message2_row_pane_t1

0xc81f,	// (0x0009a221) address2_row_pane_g1

0xc827,	// (0x0009a229) address2_row_pane_t1

0x1952,	// (0x0008f354) aid_size_cell_vorec

0x9e33,	// (0x00097835) main_rss_pane

0x44db,	// (0x00091edd) rss_list_single_pane_ParamLimits

0x44db,	// (0x00091edd) rss_list_single_pane

0xc835,	// (0x0009a237) rss_list_single_pane_t1

0xc843,	// (0x0009a245) rss_list_single_pane_t2

0x0001,

0xf608,	// (0x0009d00a) rss_list_single_pane_t

0x9e33,	// (0x00097835) main_camera2_pane

0x9e33,	// (0x00097835) main_video2_pane

0x4741,	// (0x00092143) cams_zoom_pane_cp2_ParamLimits

0x4741,	// (0x00092143) cams_zoom_pane_cp2

0x4758,	// (0x0009215a) image2_vga_pane_ParamLimits

0x4758,	// (0x0009215a) image2_vga_pane

0x47a0,	// (0x000921a2) main_camera2_pane_g1_ParamLimits

0x47a0,	// (0x000921a2) main_camera2_pane_g1

0x47c0,	// (0x000921c2) main_camera2_pane_g2_ParamLimits

0x47c0,	// (0x000921c2) main_camera2_pane_g2

0x47d7,	// (0x000921d9) main_camera2_pane_g3_ParamLimits

0x47d7,	// (0x000921d9) main_camera2_pane_g3

0x47ee,	// (0x000921f0) main_camera2_pane_g4_ParamLimits

0x47ee,	// (0x000921f0) main_camera2_pane_g4

0x4805,	// (0x00092207) main_camera2_pane_g5_ParamLimits

0x4805,	// (0x00092207) main_camera2_pane_g5

0x481c,	// (0x0009221e) main_camera2_pane_g6_ParamLimits

0x481c,	// (0x0009221e) main_camera2_pane_g6

0x4833,	// (0x00092235) main_camera2_pane_g7_ParamLimits

0x4833,	// (0x00092235) main_camera2_pane_g7

0x484a,	// (0x0009224c) main_camera2_pane_g8_ParamLimits

0x484a,	// (0x0009224c) main_camera2_pane_g8

0x0008,

0xf629,	// (0x0009d02b) main_camera2_pane_g_ParamLimits

0xf629,	// (0x0009d02b) main_camera2_pane_g

0x4878,	// (0x0009227a) main_camera2_pane_t1_ParamLimits

0x4878,	// (0x0009227a) main_camera2_pane_t1

0x48ad,	// (0x000922af) main_camera2_pane_t2_ParamLimits

0x48ad,	// (0x000922af) main_camera2_pane_t2

0x48ca,	// (0x000922cc) main_camera2_pane_t3_ParamLimits

0x48ca,	// (0x000922cc) main_camera2_pane_t3

0x4928,	// (0x0009232a) main_camera2_pane_t4_ParamLimits

0x4928,	// (0x0009232a) main_camera2_pane_t4

0x0006,

0xf63c,	// (0x0009d03e) main_camera2_pane_t_ParamLimits

0xf63c,	// (0x0009d03e) main_camera2_pane_t

0x49b1,	// (0x000923b3) cams_zoom_pane_cp4_ParamLimits

0x49b1,	// (0x000923b3) cams_zoom_pane_cp4

0x49c7,	// (0x000923c9) image2_cif_pane_ParamLimits

0x49c7,	// (0x000923c9) image2_cif_pane

0x49f2,	// (0x000923f4) image2_subqcif_pane_ParamLimits

0x49f2,	// (0x000923f4) image2_subqcif_pane

0x4a0d,	// (0x0009240f) main_video2_pane_g1_ParamLimits

0x4a0d,	// (0x0009240f) main_video2_pane_g1

0x4a27,	// (0x00092429) main_video2_pane_g2_ParamLimits

0x4a27,	// (0x00092429) main_video2_pane_g2

0x4a3d,	// (0x0009243f) main_video2_pane_g3_ParamLimits

0x4a3d,	// (0x0009243f) main_video2_pane_g3

0x4a53,	// (0x00092455) main_video2_pane_g4_ParamLimits

0x4a53,	// (0x00092455) main_video2_pane_g4

0x4a69,	// (0x0009246b) main_video2_pane_g5_ParamLimits

0x4a69,	// (0x0009246b) main_video2_pane_g5

0x4a7f,	// (0x00092481) main_video2_pane_g6_ParamLimits

0x4a7f,	// (0x00092481) main_video2_pane_g6

0x0005,

0xf64b,	// (0x0009d04d) main_video2_pane_g_ParamLimits

0xf64b,	// (0x0009d04d) main_video2_pane_g

0x4a99,	// (0x0009249b) main_video2_pane_t1_ParamLimits

0x4a99,	// (0x0009249b) main_video2_pane_t1

0x4abd,	// (0x000924bf) main_video2_pane_t2_ParamLimits

0x4abd,	// (0x000924bf) main_video2_pane_t2

0x4b0d,	// (0x0009250f) main_video2_pane_t3_ParamLimits

0x4b0d,	// (0x0009250f) main_video2_pane_t3

0x0002,

0xf658,	// (0x0009d05a) main_video2_pane_t_ParamLimits

0xf658,	// (0x0009d05a) main_video2_pane_t

0x3f9d,	// (0x0009199f) call_muted_g2

0x0001,

0xf5fa,	// (0x0009cffc) call_muted_g

0x9e33,	// (0x00097835) main_mup2_pane

0x4b55,	// (0x00092557) main_mup2_pane_g1_ParamLimits

0x4b55,	// (0x00092557) main_mup2_pane_g1

0x4b61,	// (0x00092563) main_mup2_pane_g2_ParamLimits

0x4b61,	// (0x00092563) main_mup2_pane_g2

0xa751,	// (0x00098153) main_mup_pane_g13_cp1

0xa759,	// (0x0009815b) mup_volume_pane_cp1

0x4b7f,	// (0x00092581) main_mup2_pane_g4_ParamLimits

0x4b7f,	// (0x00092581) main_mup2_pane_g4

0x4b91,	// (0x00092593) main_mup2_pane_g5_ParamLimits

0x4b91,	// (0x00092593) main_mup2_pane_g5

0x4ba3,	// (0x000925a5) main_mup2_pane_g6_ParamLimits

0x4ba3,	// (0x000925a5) main_mup2_pane_g6

0x4bb5,	// (0x000925b7) main_mup2_pane_g7_ParamLimits

0x4bb5,	// (0x000925b7) main_mup2_pane_g7

0x0006,

0xf65f,	// (0x0009d061) main_mup2_pane_g_ParamLimits

0xf65f,	// (0x0009d061) main_mup2_pane_g

0x4bcd,	// (0x000925cf) main_mup2_pane_t1_ParamLimits

0x4bcd,	// (0x000925cf) main_mup2_pane_t1

0x4be3,	// (0x000925e5) main_mup2_pane_t2_ParamLimits

0x4be3,	// (0x000925e5) main_mup2_pane_t2

0x4bf9,	// (0x000925fb) main_mup2_pane_t3_ParamLimits

0x4bf9,	// (0x000925fb) main_mup2_pane_t3

0x4c0f,	// (0x00092611) main_mup2_pane_t4_ParamLimits

0x4c0f,	// (0x00092611) main_mup2_pane_t4

0x4c27,	// (0x00092629) main_mup2_pane_t5_ParamLimits

0x4c27,	// (0x00092629) main_mup2_pane_t5

0x4c3f,	// (0x00092641) main_mup2_pane_t6_ParamLimits

0x4c3f,	// (0x00092641) main_mup2_pane_t6

0x0005,

0xf66e,	// (0x0009d070) main_mup2_pane_t_ParamLimits

0xf66e,	// (0x0009d070) main_mup2_pane_t

0x4c6f,	// (0x00092671) mup2_visualizer_pane_ParamLimits

0x4c6f,	// (0x00092671) mup2_visualizer_pane

0x4c9d,	// (0x0009269f) mup_progress_pane_cp_ParamLimits

0x4c9d,	// (0x0009269f) mup_progress_pane_cp

0xa73c,	// (0x0009813e) mup_volume_pane_cp_ParamLimits

0xa73c,	// (0x0009813e) mup_volume_pane_cp

0x4cb3,	// (0x000926b5) mup2_visualizer_pane_g1_ParamLimits

0x4cb3,	// (0x000926b5) mup2_visualizer_pane_g1

0xc8a4,	// (0x0009a2a6) mup2_visualizer_pane_g2_ParamLimits

0xc8a4,	// (0x0009a2a6) mup2_visualizer_pane_g2

0x4cca,	// (0x000926cc) mup2_visualizer_pane_g3_ParamLimits

0x4cca,	// (0x000926cc) mup2_visualizer_pane_g3

0x0002,

0xf67b,	// (0x0009d07d) mup2_visualizer_pane_g_ParamLimits

0xf67b,	// (0x0009d07d) mup2_visualizer_pane_g

0xb684,	// (0x00099086) aid_size_cell_fmradio

0x414d,	// (0x00091b4f) aid_height_parent_landcape

0xa53f,	// (0x00097f41) wml_content_pane_cp

0xa547,	// (0x00097f49) wml_tabs_pane

0xa550,	// (0x00097f52) popup_wml_miniature_window

0xa558,	// (0x00097f5a) scroll_pane_cp021

0xa56c,	// (0x00097f6e) wml_content_pane_comp8

0x9e33,	// (0x00097835) bg_popup_sub_pane_cp05

0xc8c2,	// (0x0009a2c4) popup_wml_miniature_window_g1

0xc8ca,	// (0x0009a2cc) wml_miniature_view_pane

0x4cd6,	// (0x000926d8) aid_size_wml_view

0x4cde,	// (0x000926e0) wml_miniature_view_pane_g1

0x4ce7,	// (0x000926e9) wml_miniature_view_pane_g2

0x4cf0,	// (0x000926f2) wml_miniature_view_pane_g3

0x4cf8,	// (0x000926fa) wml_miniature_view_pane_g4

0x4d00,	// (0x00092702) wml_miniature_view_pane_g5

0x4d08,	// (0x0009270a) wml_miniature_view_pane_g6

0x4d10,	// (0x00092712) wml_miniature_view_pane_g7

0x4d18,	// (0x0009271a) wml_miniature_view_pane_g8

0x0007,

0xf682,	// (0x0009d084) wml_miniature_view_pane_g

0xc8d2,	// (0x0009a2d4) background_graphic_ParamLimits

0xc8d2,	// (0x0009a2d4) background_graphic

0xc8de,	// (0x0009a2e0) wml_tabs_2_pane

0xc8e7,	// (0x0009a2e9) wml_tabs_3_pane_ParamLimits

0xc8e7,	// (0x0009a2e9) wml_tabs_3_pane

0xc8f9,	// (0x0009a2fb) wml_tabs_4_pane_ParamLimits

0xc8f9,	// (0x0009a2fb) wml_tabs_4_pane

0xc90f,	// (0x0009a311) wml_tabs_5_pane_ParamLimits

0xc90f,	// (0x0009a311) wml_tabs_5_pane

0xc929,	// (0x0009a32b) wml_tabs_pane_g2_ParamLimits

0xc929,	// (0x0009a32b) wml_tabs_pane_g2

0xc93d,	// (0x0009a33f) wml_tabs_pane_g3_ParamLimits

0xc93d,	// (0x0009a33f) wml_tabs_pane_g3

0x4d20,	// (0x00092722) wml_tabs_2_active_pane_ParamLimits

0x4d20,	// (0x00092722) wml_tabs_2_active_pane

0x4d34,	// (0x00092736) wml_tabs_2_passive_pane_ParamLimits

0x4d34,	// (0x00092736) wml_tabs_2_passive_pane

0x4d48,	// (0x0009274a) wml_tabs_3_active_pane_cp_ParamLimits

0x4d48,	// (0x0009274a) wml_tabs_3_active_pane_cp

0x4d5d,	// (0x0009275f) wml_tabs_3_passive_pane_ParamLimits

0x4d5d,	// (0x0009275f) wml_tabs_3_passive_pane

0x4d70,	// (0x00092772) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d70,	// (0x00092772) wml_tabs_3_passive_pane_cp

0x4d87,	// (0x00092789) tabs_4_active_pane

0x4d8f,	// (0x00092791) tabs_4_passive_pane

0x4d99,	// (0x0009279b) tabs_4_passive_pane_cp

0x4da1,	// (0x000927a3) tabs_4_passive_pane_cp2

0x3e61,	// (0x00091863) aid_height_text

0x34ea,	// (0x00090eec) mup_volume_cont_pane_ParamLimits

0x34ea,	// (0x00090eec) mup_volume_cont_pane

0x0d3c,	// (0x0008e73e) aid_size_cell_pinb

0x0d46,	// (0x0008e748) aid_size_list_pinb

0x4c89,	// (0x0009268b) mup2_volume_cont_pane_ParamLimits

0x4c89,	// (0x0009268b) mup2_volume_cont_pane

0xa728,	// (0x0009812a) mup2_volume_cont_pane_g1_ParamLimits

0xa728,	// (0x0009812a) mup2_volume_cont_pane_g1

0x09e4,	// (0x0008e3e6) aid_size_cell_touch_ParamLimits

0x09e4,	// (0x0008e3e6) aid_size_cell_touch

0x0c2c,	// (0x0008e62e) touch_pane_ParamLimits

0x0c2c,	// (0x0008e62e) touch_pane

0x99c1,	// (0x000973c3) main_rss2_pane

0xc95a,	// (0x0009a35c) listscroll_rss2_pane

0xc963,	// (0x0009a365) rss2_navigation_pane

0xc96b,	// (0x0009a36d) list_rss2_pane

0xb25c,	// (0x00098c5e) scroll_pane_cp22

0xc973,	// (0x0009a375) rss2_navigation_pane_g1

0xc97c,	// (0x0009a37e) rss2_navigation_pane_g2

0xc984,	// (0x0009a386) rss2_navigation_pane_g3

0x0002,

0xf693,	// (0x0009d095) rss2_navigation_pane_g

0xc98c,	// (0x0009a38e) rss2_navigation_pane_t1

0x4dab,	// (0x000927ad) rss2_list_single_pane_ParamLimits

0x4dab,	// (0x000927ad) rss2_list_single_pane

0xc99a,	// (0x0009a39c) rss2_list_single_pane_t2

0xc9a8,	// (0x0009a3aa) rss2_list_single_pane_t3_ParamLimits

0xc9a8,	// (0x0009a3aa) rss2_list_single_pane_t3

0xc9c5,	// (0x0009a3c7) rss2_list_single_pane_t4

0x2daf,	// (0x000907b1) smil_status_pane_g1

0x9a12,	// (0x00097414) main_image2_pane_ParamLimits

0x9a12,	// (0x00097414) main_image2_pane

0x4861,	// (0x00092263) main_camera2_pane_g9_ParamLimits

0x4861,	// (0x00092263) main_camera2_pane_g9

0x497d,	// (0x0009237f) main_camera2_pane_t5_ParamLimits

0x497d,	// (0x0009237f) main_camera2_pane_t5

0xa6fd,	// (0x000980ff) main_camera2_pane_t6_ParamLimits

0xa6fd,	// (0x000980ff) main_camera2_pane_t6

0x4dc1,	// (0x000927c3) main_image2_pane_g1_ParamLimits

0x4dc1,	// (0x000927c3) main_image2_pane_g1

0x3b7b,	// (0x0009157d) smil2_video_pane_ParamLimits

0x3b7b,	// (0x0009157d) smil2_video_pane

0x0a24,	// (0x0008e426) aid_zoom_text_primary_cp

0x9a08,	// (0x0009740a) popup_preview_fixed_window

0xa4a8,	// (0x00097eaa) im_reading_pane_g1

0x4733,	// (0x00092135) cams2_bc_adjust_pane_cp_ParamLimits

0x4733,	// (0x00092135) cams2_bc_adjust_pane_cp

0x49a3,	// (0x000923a5) cams2_bc_adjust_pane_ParamLimits

0x49a3,	// (0x000923a5) cams2_bc_adjust_pane

0xa761,	// (0x00098163) cams2_bc_adjust_pane_g1

0xa769,	// (0x0009816b) cams2_slider_pane

0xa772,	// (0x00098174) cams2_slider_pane_g1

0xa77b,	// (0x0009817d) cams2_slider_pane_g2

0x0006,

0xf69a,	// (0x0009d09c) cams2_slider_pane_g

0x0e36,	// (0x0008e838) calc_display_pane_ParamLimits

0x0e5e,	// (0x0008e860) calc_paper_pane_ParamLimits

0x0e81,	// (0x0008e883) grid_calc_pane_ParamLimits

0xa668,	// (0x0009806a) popup_clock_digital_window_t1_ParamLimits

0xb621,	// (0x00099023) main_image_pane_t1

0x0e18,	// (0x0008e81a) aid_size_cell_calc_ParamLimits

0x0e18,	// (0x0008e81a) aid_size_cell_calc

0x4193,	// (0x00091b95) popup_blid_sat_info2_window_ParamLimits

0x4193,	// (0x00091b95) popup_blid_sat_info2_window

0xc9db,	// (0x0009a3dd) aid_size_cell_blid

0xc9e3,	// (0x0009a3e5) bg_popup_window_pane_cp07

0xca06,	// (0x0009a408) grid_popup_blid_pane

0xca10,	// (0x0009a412) heading_pane_cp05_ParamLimits

0xca10,	// (0x0009a412) heading_pane_cp05

0xcada,	// (0x0009a4dc) cell_popup_blid_pane_ParamLimits

0xcada,	// (0x0009a4dc) cell_popup_blid_pane

0xcb04,	// (0x0009a506) cell_popup_blid_pane_g1

0xcb0c,	// (0x0009a50e) cell_popup_blid_pane_t1

0x4c59,	// (0x0009265b) mup2_indicator_pane_ParamLimits

0x4c59,	// (0x0009265b) mup2_indicator_pane

0xa3a1,	// (0x00097da3) mup2_visualizer_osc_pane

0xc8b0,	// (0x0009a2b2) mup2_visualizer_spec_pane_ParamLimits

0xc8b0,	// (0x0009a2b2) mup2_visualizer_spec_pane

0x4dd7,	// (0x000927d9) mup2_spec_half_pane

0x4de0,	// (0x000927e2) mup2_spec_half_pane_cp

0x4de8,	// (0x000927ea) mup2_spec_bar_pane_ParamLimits

0x4de8,	// (0x000927ea) mup2_spec_bar_pane

0xc851,	// (0x0009a253) mup2_spec_bar_pane_g1

0xc85b,	// (0x0009a25d) mup2_spec_bar_pane_g2

0x0001,

0xf60d,	// (0x0009d00f) mup2_spec_bar_pane_g

0x4e08,	// (0x0009280a) mup2_osc_middle_pane

0xc86d,	// (0x0009a26f) mup2_visualizer_osc_pane_g1

0x9a40,	// (0x00097442) popup_number_entry_window_t1_ParamLimits

0x9a53,	// (0x00097455) popup_number_entry_window_t2_ParamLimits

0x9a65,	// (0x00097467) popup_number_entry_window_t3_ParamLimits

0x0c7e,	// (0x0008e680) popup_number_entry_window_t5_ParamLimits

0x0c7e,	// (0x0008e680) popup_number_entry_window_t5

0xf0ca,	// (0x0009cacc) popup_number_entry_window_t_ParamLimits

0x9a77,	// (0x00097479) text_title_cp2_ParamLimits

0xa6a7,	// (0x000980a9) aid_hotspot_pointer_text2_pane

0xa6cd,	// (0x000980cf) main_viewer_pane_g9_ParamLimits

0xa6cd,	// (0x000980cf) main_viewer_pane_g9

0xad96,	// (0x00098798) cale_month_pane_t1_ParamLimits

0xadbc,	// (0x000987be) bg_cale_pane_ParamLimits

0xadd4,	// (0x000987d6) list_cale_pane_ParamLimits

0xade5,	// (0x000987e7) listscroll_cale_day_pane_t1

0xadf7,	// (0x000987f9) scroll_pane_cp09_ParamLimits

0x3520,	// (0x00090f22) main_mup_eq_pane_t1_ParamLimits

0x3520,	// (0x00090f22) main_mup_eq_pane_t1

0x353c,	// (0x00090f3e) main_mup_eq_pane_t2_ParamLimits

0x353c,	// (0x00090f3e) main_mup_eq_pane_t2

0x3558,	// (0x00090f5a) main_mup_eq_pane_t3_ParamLimits

0x3558,	// (0x00090f5a) main_mup_eq_pane_t3

0x3576,	// (0x00090f78) main_mup_eq_pane_t4_ParamLimits

0x3576,	// (0x00090f78) main_mup_eq_pane_t4

0x3594,	// (0x00090f96) main_mup_eq_pane_t5_ParamLimits

0x3594,	// (0x00090f96) main_mup_eq_pane_t5

0x35b2,	// (0x00090fb4) main_mup_eq_pane_t6_ParamLimits

0x35b2,	// (0x00090fb4) main_mup_eq_pane_t6

0x35c8,	// (0x00090fca) main_mup_eq_pane_t7_ParamLimits

0x35c8,	// (0x00090fca) main_mup_eq_pane_t7

0x35de,	// (0x00090fe0) main_mup_eq_pane_t8_ParamLimits

0x35de,	// (0x00090fe0) main_mup_eq_pane_t8

0x35f4,	// (0x00090ff6) main_mup_eq_pane_t9_ParamLimits

0x35f4,	// (0x00090ff6) main_mup_eq_pane_t9

0x3610,	// (0x00091012) main_mup_eq_pane_t10_ParamLimits

0x3610,	// (0x00091012) main_mup_eq_pane_t10

0x0009,

0xf45c,	// (0x0009ce5e) main_mup_eq_pane_t_ParamLimits

0xf45c,	// (0x0009ce5e) main_mup_eq_pane_t

0x36e5,	// (0x000910e7) mup_equalizer_pane_cp5_ParamLimits

0x36fd,	// (0x000910ff) mup_equalizer_pane_cp6_ParamLimits

0x3715,	// (0x00091117) mup_equalizer_pane_cp7_ParamLimits

0x99c1,	// (0x000973c3) main_gallery_pane

0xc876,	// (0x0009a278) smil2_volume_pane

0xc87e,	// (0x0009a280) smil_status_volume_pane_g1_ParamLimits

0xc891,	// (0x0009a293) smil_status_volume_pane_g2_ParamLimits

0xa6d9,	// (0x000980db) smil_status_volume_pane_g3_ParamLimits

0xf612,	// (0x0009d014) smil_status_volume_pane_g_ParamLimits

0xc9e3,	// (0x0009a3e5) bg_popup_window_pane_cp07_ParamLimits

0xc9f1,	// (0x0009a3f3) blid_firmament_pane

0x4e11,	// (0x00092813) aid_size_cell_gallery_ParamLimits

0x4e11,	// (0x00092813) aid_size_cell_gallery

0x4e27,	// (0x00092829) grid_gallery_pane_ParamLimits

0x4e27,	// (0x00092829) grid_gallery_pane

0x4e42,	// (0x00092844) cell_gallery_pane_ParamLimits

0x4e42,	// (0x00092844) cell_gallery_pane

0xcb1a,	// (0x0009a51c) bg_cell_gallery_focus_pane_ParamLimits

0xcb1a,	// (0x0009a51c) bg_cell_gallery_focus_pane

0xcb2c,	// (0x0009a52e) cell_gallery_pane_g1_ParamLimits

0xcb2c,	// (0x0009a52e) cell_gallery_pane_g1

0x4e8d,	// (0x0009288f) cell_gallery_pane_g2_ParamLimits

0x4e8d,	// (0x0009288f) cell_gallery_pane_g2

0x4e9a,	// (0x0009289c) cell_gallery_pane_g3_ParamLimits

0x4e9a,	// (0x0009289c) cell_gallery_pane_g3

0xcb38,	// (0x0009a53a) cell_gallery_pane_g4_ParamLimits

0xcb38,	// (0x0009a53a) cell_gallery_pane_g4

0x0003,

0xf6c0,	// (0x0009d0c2) cell_gallery_pane_g_ParamLimits

0xf6c0,	// (0x0009d0c2) cell_gallery_pane_g

0xcb44,	// (0x0009a546) bg_cell_gallery_focus_pane_g1

0xcb4c,	// (0x0009a54e) bg_cell_gallery_focus_pane_g2

0xcb54,	// (0x0009a556) bg_cell_gallery_focus_pane_g3

0xcb5c,	// (0x0009a55e) bg_cell_gallery_focus_pane_g4

0xcb64,	// (0x0009a566) bg_cell_gallery_focus_pane_g5

0xcb6c,	// (0x0009a56e) bg_cell_gallery_focus_pane_g6

0xcb74,	// (0x0009a576) bg_cell_gallery_focus_pane_g7

0xcb7c,	// (0x0009a57e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c9,	// (0x0009d0cb) bg_cell_gallery_focus_pane_g

0xcb84,	// (0x0009a586) aid_firma_cardinal

0xcb98,	// (0x0009a59a) blid_firmament_pane_t1

0xcbaf,	// (0x0009a5b1) blid_firmament_pane_t2

0xcbc6,	// (0x0009a5c8) blid_firmament_pane_t3

0xcbdd,	// (0x0009a5df) blid_firmament_pane_t4

0x0003,

0xf6da,	// (0x0009d0dc) blid_firmament_pane_t

0xcbf4,	// (0x0009a5f6) blid_sat_info_pane

0xcc04,	// (0x0009a606) blid_sat_info_pane_g1

0xcc04,	// (0x0009a606) blid_sat_info_pane_g2

0x0001,

0xf6e3,	// (0x0009d0e5) blid_sat_info_pane_g

0xcc0e,	// (0x0009a610) blid_sat_info_pane_t1

0xcc1c,	// (0x0009a61e) smil2_volume_content_pane

0xcc25,	// (0x0009a627) smil2_volume_pane_g1

0xcc2d,	// (0x0009a62f) smil2_volume_content_pane_g1

0xcc36,	// (0x0009a638) smil2_volume_content_pane_g2

0xcc3f,	// (0x0009a641) smil2_volume_content_pane_g3

0xcc48,	// (0x0009a64a) smil2_volume_content_pane_g4

0xcc51,	// (0x0009a653) smil2_volume_content_pane_g5

0xcc5a,	// (0x0009a65c) smil2_volume_content_pane_g6

0xcc63,	// (0x0009a665) smil2_volume_content_pane_g7

0xcc6c,	// (0x0009a66e) smil2_volume_content_pane_g8

0xcc75,	// (0x0009a677) smil2_volume_content_pane_g9

0xcc7e,	// (0x0009a680) smil2_volume_content_pane_g10

0x0009,

0xf6e8,	// (0x0009d0ea) smil2_volume_content_pane_g

0x14ed,	// (0x0008eeef) cale_week_day_heading_pane_t1_ParamLimits

0x1537,	// (0x0008ef39) cale_week_day_heading_pane_t2_ParamLimits

0x1586,	// (0x0008ef88) cale_week_day_heading_pane_t3_ParamLimits

0x15d5,	// (0x0008efd7) cale_week_day_heading_pane_t4_ParamLimits

0x1624,	// (0x0008f026) cale_week_day_heading_pane_t5_ParamLimits

0x1677,	// (0x0008f079) cale_week_day_heading_pane_t6_ParamLimits

0x16ce,	// (0x0008f0d0) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0009cbd3) cale_week_day_heading_pane_t_ParamLimits

0xa346,	// (0x00097d48) bg_cale_side_pane_ParamLimits

0x1718,	// (0x0008f11a) cale_week_time_pane_t1_ParamLimits

0x1752,	// (0x0008f154) cale_week_time_pane_t2_ParamLimits

0x178c,	// (0x0008f18e) cale_week_time_pane_t3_ParamLimits

0x17c6,	// (0x0008f1c8) cale_week_time_pane_t4_ParamLimits

0x1800,	// (0x0008f202) cale_week_time_pane_t5_ParamLimits

0x183a,	// (0x0008f23c) cale_week_time_pane_t6_ParamLimits

0x1874,	// (0x0008f276) cale_week_time_pane_t7_ParamLimits

0x18ae,	// (0x0008f2b0) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0009cbe2) cale_week_time_pane_t_ParamLimits

0x18ee,	// (0x0008f2f0) cell_cale_week_pane_g2_ParamLimits

0xa346,	// (0x00097d48) bg_cale_side_pane_cp01_ParamLimits

0x2bbe,	// (0x000905c0) cale_month_week_pane_t1_ParamLimits

0x2bd7,	// (0x000905d9) cale_month_week_pane_t2_ParamLimits

0x2bf0,	// (0x000905f2) cale_month_week_pane_t3_ParamLimits

0x2c09,	// (0x0009060b) cale_month_week_pane_t4_ParamLimits

0x2c22,	// (0x00090624) cale_month_week_pane_t5_ParamLimits

0x2c3b,	// (0x0009063d) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0009ccb7) cale_month_week_pane_t_ParamLimits

0xa5e8,	// (0x00097fea) cell_cale_month_pane_g1_ParamLimits

0x99c1,	// (0x000973c3) main_cale_event_viewer_pane

0x99c1,	// (0x000973c3) listscroll_cale_event_viewer_pane

0xcc87,	// (0x0009a689) list_cale_ev_pane

0xcc8f,	// (0x0009a691) scroll_pane_cp023

0x4ea7,	// (0x000928a9) field_cale_ev_pane_ParamLimits

0x4ea7,	// (0x000928a9) field_cale_ev_pane

0xcc9b,	// (0x0009a69d) field_cale_ev_content_pane_ParamLimits

0xcc9b,	// (0x0009a69d) field_cale_ev_content_pane

0xcca7,	// (0x0009a6a9) field_cale_ev_pane_g1_ParamLimits

0xcca7,	// (0x0009a6a9) field_cale_ev_pane_g1

0xccb3,	// (0x0009a6b5) field_cale_ev_pane_g2_ParamLimits

0xccb3,	// (0x0009a6b5) field_cale_ev_pane_g2

0xcccb,	// (0x0009a6cd) field_cale_ev_pane_g3_ParamLimits

0xcccb,	// (0x0009a6cd) field_cale_ev_pane_g3

0x0002,

0xf6fd,	// (0x0009d0ff) field_cale_ev_pane_g_ParamLimits

0xf6fd,	// (0x0009d0ff) field_cale_ev_pane_g

0xcce3,	// (0x0009a6e5) field_cale_ev_pane_t1_ParamLimits

0xcce3,	// (0x0009a6e5) field_cale_ev_pane_t1

0x4ecb,	// (0x000928cd) field_cale_ev_content_pane_t1_ParamLimits

0x4ecb,	// (0x000928cd) field_cale_ev_content_pane_t1

0xb507,	// (0x00098f09) bg_button_pane_cp01

0x1135,	// (0x0008eb37) listscroll_cale_week_pane_ParamLimits

0x1147,	// (0x0008eb49) popup_toolbar_window_cp01

0xa312,	// (0x00097d14) listscroll_cale_week_pane_t1_ParamLimits

0x1135,	// (0x0008eb37) listscroll_cale_day_pane_ParamLimits

0x1147,	// (0x0008eb49) popup_toolbar_window_cp02

0xade5,	// (0x000987e7) listscroll_cale_day_pane_t1_ParamLimits

0x1135,	// (0x0008eb37) main_cale_month_pane_ParamLimits

0x4413,	// (0x00091e15) popup_toolbar_window_cp03_ParamLimits

0x4413,	// (0x00091e15) popup_toolbar_window_cp03

0x3a39,	// (0x0009143b) main_image_pane_g2_ParamLimits

0x3a39,	// (0x0009143b) main_image_pane_g2

0x3a4a,	// (0x0009144c) main_image_pane_g3_ParamLimits

0x3a4a,	// (0x0009144c) main_image_pane_g3

0x0002,

0xf4ee,	// (0x0009cef0) main_image_pane_g_ParamLimits

0xf4ee,	// (0x0009cef0) main_image_pane_g

0xb621,	// (0x00099023) main_image_pane_t1_ParamLimits

0x3a5b,	// (0x0009145d) main_image_pane_t2_ParamLimits

0x3a5b,	// (0x0009145d) main_image_pane_t2

0x3a6d,	// (0x0009146f) main_image_pane_t3_ParamLimits

0x3a6d,	// (0x0009146f) main_image_pane_t3

0x3a95,	// (0x00091497) main_image_pane_t4_ParamLimits

0x3a95,	// (0x00091497) main_image_pane_t4

0x0003,

0xf4f5,	// (0x0009cef7) main_image_pane_t_ParamLimits

0xf4f5,	// (0x0009cef7) main_image_pane_t

0x3ab5,	// (0x000914b7) popup_image_details_window_cp01

0x3abf,	// (0x000914c1) popup_toobar_trans_pane_cp01_ParamLimits

0x3abf,	// (0x000914c1) popup_toobar_trans_pane_cp01

0x4286,	// (0x00091c88) popup_image_details_window_ParamLimits

0x4286,	// (0x00091c88) popup_image_details_window

0xc7d5,	// (0x0009a1d7) popup_image_focus_window

0x46ed,	// (0x000920ef) camera2_autofocus_pane_ParamLimits

0x46ed,	// (0x000920ef) camera2_autofocus_pane

0x99c1,	// (0x000973c3) bg_popup_sub_pane_cp06

0xccfa,	// (0x0009a6fc) popup_image_focus_window_g1

0xcd02,	// (0x0009a704) popup_image_focus_window_g2

0xcd0a,	// (0x0009a70c) popup_image_focus_window_g3

0xcd12,	// (0x0009a714) popup_image_focus_window_g4

0x0003,

0xf704,	// (0x0009d106) popup_image_focus_window_g

0xcd1a,	// (0x0009a71c) popup_image_focus_window_t1

0xcd28,	// (0x0009a72a) popup_image_focus_window_t2

0xcd38,	// (0x0009a73a) popup_image_focus_window_t3

0x0002,

0xf70d,	// (0x0009d10f) popup_image_focus_window_t

0xcd46,	// (0x0009a748) camera2_autofocus_pane_g1

0x9a12,	// (0x00097414) bg_tb_trans_pane_cp01

0xcd54,	// (0x0009a756) popup_image_details_window_g1

0xcd67,	// (0x0009a769) popup_image_details_window_g2

0x0002,

0xf71f,	// (0x0009d121) popup_image_details_window_g

0xcd90,	// (0x0009a792) popup_image_details_window_t1

0xcda2,	// (0x0009a7a4) popup_image_details_window_t2

0xcdbb,	// (0x0009a7bd) popup_image_details_window_t3

0xcdcf,	// (0x0009a7d1) popup_image_details_window_t4

0xcdea,	// (0x0009a7ec) popup_image_details_window_t5

0x0004,

0xf726,	// (0x0009d128) popup_image_details_window_t

0xa147,	// (0x00097b49) bg_calc_paper_pane_ParamLimits

0x99c1,	// (0x000973c3) grid_highlight_pane_cp013

0xa15b,	// (0x00097b5d) list_calc_pane_ParamLimits

0xa16d,	// (0x00097b6f) scroll_pane_cp024

0xa175,	// (0x00097b77) bg_calc_display_pane_ParamLimits

0x0f81,	// (0x0008e983) calc_display_pane_t1_ParamLimits

0x0f93,	// (0x0008e995) calc_display_pane_t2_ParamLimits

0xa181,	// (0x00097b83) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0009cb53) calc_display_pane_t_ParamLimits

0x105c,	// (0x0008ea5e) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0009cb70) cell_calc_pane_g

0x1065,	// (0x0008ea67) cell_calc_pane_t1

0xa1f8,	// (0x00097bfa) grid_highlight_pane_cp02_ParamLimits

0xa20e,	// (0x00097c10) toolbar_button_pane_cp01_ParamLimits

0xa20e,	// (0x00097c10) toolbar_button_pane_cp01

0xb666,	// (0x00099068) temp_image_control_pane_ParamLimits

0xb666,	// (0x00099068) temp_image_control_pane

0x9a12,	// (0x00097414) main_mp3_pane

0xce04,	// (0x0009a806) temp_image_control_pane_g1_ParamLimits

0xce04,	// (0x0009a806) temp_image_control_pane_g1

0xce12,	// (0x0009a814) temp_image_control_pane_g2_ParamLimits

0xce12,	// (0x0009a814) temp_image_control_pane_g2

0xce24,	// (0x0009a826) temp_image_control_pane_g3_ParamLimits

0xce24,	// (0x0009a826) temp_image_control_pane_g3

0x4f1c,	// (0x0009291e) temp_image_control_pane_g4_ParamLimits

0x4f1c,	// (0x0009291e) temp_image_control_pane_g4

0x0003,

0xf731,	// (0x0009d133) temp_image_control_pane_g_ParamLimits

0xf731,	// (0x0009d133) temp_image_control_pane_g

0xce04,	// (0x0009a806) main_mp3_pane_g1

0x4f2f,	// (0x00092931) main_mp3_pane_g2

0x0007,

0xf73a,	// (0x0009d13c) main_mp3_pane_g

0xce67,	// (0x0009a869) main_mp3_pane_t1

0xa3b3,	// (0x00097db5) main_camera_pane_g8_ParamLimits

0xa3b3,	// (0x00097db5) main_camera_pane_g8

0x1c15,	// (0x0008f617) main_video_pane_g7_ParamLimits

0x1c15,	// (0x0008f617) main_video_pane_g7

0xa716,	// (0x00098118) main_camera2_pane_t7_ParamLimits

0xa716,	// (0x00098118) main_camera2_pane_t7

0xa4ff,	// (0x00097f01) scroll_pane_cp025_ParamLimits

0xa4ff,	// (0x00097f01) scroll_pane_cp025

0xa513,	// (0x00097f15) scroll_pane_cp026_ParamLimits

0xa513,	// (0x00097f15) scroll_pane_cp026

0xa522,	// (0x00097f24) wml_content_pane_ParamLimits

0x99c1,	// (0x000973c3) main_touch_calib_pane

0x5001,	// (0x00092a03) main_touch_calib_pane_g1

0x5013,	// (0x00092a15) main_touch_calib_pane_g2

0x5025,	// (0x00092a27) main_touch_calib_pane_g3

0x5037,	// (0x00092a39) main_touch_calib_pane_g4

0x0003,

0xf758,	// (0x0009d15a) main_touch_calib_pane_g

0x5049,	// (0x00092a4b) main_touch_calib_pane_t1

0x5063,	// (0x00092a65) main_touch_calib_pane_t2

0x0004,

0xf761,	// (0x0009d163) main_touch_calib_pane_t

0xb2d7,	// (0x00098cd9) mup_progress_pane_cp02

0xb2f6,	// (0x00098cf8) navi_pane_g1

0xb358,	// (0x00098d5a) navi_pane_mp_t3

0x9a12,	// (0x00097414) main_mp3_pane_ParamLimits

0x4455,	// (0x00091e57) navi_pane_ParamLimits

0xce04,	// (0x0009a806) main_mp3_pane_g1_ParamLimits

0x4f2f,	// (0x00092931) main_mp3_pane_g2_ParamLimits

0x4f3b,	// (0x0009293d) main_mp3_pane_g3_ParamLimits

0x4f3b,	// (0x0009293d) main_mp3_pane_g3

0x4f49,	// (0x0009294b) main_mp3_pane_g4_ParamLimits

0x4f49,	// (0x0009294b) main_mp3_pane_g4

0xce34,	// (0x0009a836) main_mp3_pane_g5_ParamLimits

0xce34,	// (0x0009a836) main_mp3_pane_g5

0xce42,	// (0x0009a844) main_mp3_pane_g6_ParamLimits

0xce42,	// (0x0009a844) main_mp3_pane_g6

0xce4f,	// (0x0009a851) main_mp3_pane_g7_ParamLimits

0xce4f,	// (0x0009a851) main_mp3_pane_g7

0xce5b,	// (0x0009a85d) main_mp3_pane_g8_ParamLimits

0xce5b,	// (0x0009a85d) main_mp3_pane_g8

0xf73a,	// (0x0009d13c) main_mp3_pane_g_ParamLimits

0x4f55,	// (0x00092957) main_mp3_pane_t2

0x4f63,	// (0x00092965) main_mp3_pane_t3

0xce75,	// (0x0009a877) main_mp3_pane_t4

0xce83,	// (0x0009a885) main_mp3_pane_t5

0x0005,

0xf74b,	// (0x0009d14d) main_mp3_pane_t

0xce91,	// (0x0009a893) mup_progress_pane_cp01

0x0a24,	// (0x0008e426) aid_zoom_text_secondary2

0xcc87,	// (0x0009a689) list_cale_ev2_pane

0xcc8f,	// (0x0009a691) scroll_pane_cp023_ParamLimits

0x50bd,	// (0x00092abf) field_cale_ev2_pane_ParamLimits

0x50bd,	// (0x00092abf) field_cale_ev2_pane

0x50e1,	// (0x00092ae3) field_cale_ev2_pane_g1_ParamLimits

0x50e1,	// (0x00092ae3) field_cale_ev2_pane_g1

0x50ed,	// (0x00092aef) field_cale_ev2_pane_g2_ParamLimits

0x50ed,	// (0x00092aef) field_cale_ev2_pane_g2

0x5105,	// (0x00092b07) field_cale_ev2_pane_g3_ParamLimits

0x5105,	// (0x00092b07) field_cale_ev2_pane_g3

0x0003,

0xf76c,	// (0x0009d16e) field_cale_ev2_pane_g_ParamLimits

0xf76c,	// (0x0009d16e) field_cale_ev2_pane_g

0xfddc,	// (0x0008d7de) field_cale_ev2_pane_t1_ParamLimits

0xfddc,	// (0x0008d7de) field_cale_ev2_pane_t1

0xfdf3,	// (0x0008d7f5) field_cale_ev2_pane_t2_ParamLimits

0xfdf3,	// (0x0008d7f5) field_cale_ev2_pane_t2

0x0001,

0xf775,	// (0x0009d177) field_cale_ev2_pane_t_ParamLimits

0xf775,	// (0x0009d177) field_cale_ev2_pane_t

0x38d6,	// (0x000912d8) main_postcard_pane_g5_ParamLimits

0x38d6,	// (0x000912d8) main_postcard_pane_g5

0x38ec,	// (0x000912ee) main_postcard_pane_g6_ParamLimits

0x38ec,	// (0x000912ee) main_postcard_pane_g6

0x19c1,	// (0x0008f3c3) camera2_autofocus_pane_cp_ParamLimits

0x19c1,	// (0x0008f3c3) camera2_autofocus_pane_cp

0x9a12,	// (0x00097414) main_mup3_pane

0x513d,	// (0x00092b3f) main_mup3_pane_g1_ParamLimits

0x513d,	// (0x00092b3f) main_mup3_pane_g1

0x515f,	// (0x00092b61) main_mup3_pane_g2_ParamLimits

0x515f,	// (0x00092b61) main_mup3_pane_g2

0x51e0,	// (0x00092be2) main_mup3_pane_g3_ParamLimits

0x51e0,	// (0x00092be2) main_mup3_pane_g3

0x5228,	// (0x00092c2a) main_mup3_pane_g4_ParamLimits

0x5228,	// (0x00092c2a) main_mup3_pane_g4

0x526e,	// (0x00092c70) main_mup3_pane_g5_ParamLimits

0x526e,	// (0x00092c70) main_mup3_pane_g5

0x52b6,	// (0x00092cb8) main_mup3_pane_g6_ParamLimits

0x52b6,	// (0x00092cb8) main_mup3_pane_g6

0xce99,	// (0x0009a89b) main_mup3_pane_g7_ParamLimits

0xce99,	// (0x0009a89b) main_mup3_pane_g7

0x0007,

0xf785,	// (0x0009d187) main_mup3_pane_g_ParamLimits

0xf785,	// (0x0009d187) main_mup3_pane_g

0x5336,	// (0x00092d38) main_mup3_pane_t1_ParamLimits

0x5336,	// (0x00092d38) main_mup3_pane_t1

0x53a4,	// (0x00092da6) main_mup3_pane_t2_ParamLimits

0x53a4,	// (0x00092da6) main_mup3_pane_t2

0x547a,	// (0x00092e7c) main_mup3_pane_t4_ParamLimits

0x547a,	// (0x00092e7c) main_mup3_pane_t4

0x54d8,	// (0x00092eda) main_mup3_pane_t5_ParamLimits

0x54d8,	// (0x00092eda) main_mup3_pane_t5

0x5592,	// (0x00092f94) main_mup3_pane_t6_ParamLimits

0x5592,	// (0x00092f94) main_mup3_pane_t6

0x0005,

0xf796,	// (0x0009d198) main_mup3_pane_t_ParamLimits

0xf796,	// (0x0009d198) main_mup3_pane_t

0x564a,	// (0x0009304c) mup3_progress_pane_ParamLimits

0x564a,	// (0x0009304c) mup3_progress_pane

0x56dc,	// (0x000930de) popup_mup3_control_window_ParamLimits

0x56dc,	// (0x000930de) popup_mup3_control_window

0xcea7,	// (0x0009a8a9) popup_mup3_text_window

0x5712,	// (0x00093114) mup3_progress_pane_t1

0x5730,	// (0x00093132) mup3_progress_pane_t2

0xceaf,	// (0x0009a8b1) mup3_progress_pane_t3

0x0002,

0xf7a3,	// (0x0009d1a5) mup3_progress_pane_t

0xcecc,	// (0x0009a8ce) mup_progress_pane_cp03

0x99c1,	// (0x000973c3) bg_tb_trans_pane_cp04

0x574e,	// (0x00093150) mup3_volume_pane

0x5756,	// (0x00093158) popup_mup3_control_window_g1

0x575f,	// (0x00093161) mup3_volume_pane_g1

0x5768,	// (0x0009316a) mup3_volume_pane_g2

0x5771,	// (0x00093173) mup3_volume_pane_g3

0x0002,

0xf7aa,	// (0x0009d1ac) mup3_volume_pane_g

0x99c1,	// (0x000973c3) bg_tb_trans_pane_cp03

0xcedc,	// (0x0009a8de) popup_mup3_text_window_g1

0xcee4,	// (0x0009a8e6) popup_mup3_text_window_t1

0xa1cf,	// (0x00097bd1) list_calc_item_pane_g1_ParamLimits

0xc951,	// (0x0009a353) mup_volume_pane_cp_g1

0x507d,	// (0x00092a7f) main_touch_calib_pane_t3

0x5091,	// (0x00092a93) main_touch_calib_pane_t4

0x50a7,	// (0x00092aa9) main_touch_calib_pane_t5

0x99cb,	// (0x000973cd) aid_cell_size_toolbar2

0x99d3,	// (0x000973d5) aid_popup3_width_pane

0x0a14,	// (0x0008e416) aid_zoom_text_msg_primary

0x199e,	// (0x0008f3a0) vorec_t7

0xa193,	// (0x00097b95) bg_calc_paper_pane_g1_ParamLimits

0xa19f,	// (0x00097ba1) bg_calc_paper_pane_g2_ParamLimits

0xa1ab,	// (0x00097bad) bg_calc_paper_pane_g3_ParamLimits

0xa1b7,	// (0x00097bb9) bg_calc_paper_pane_g4_ParamLimits

0xa1c3,	// (0x00097bc5) bg_calc_paper_pane_g5_ParamLimits

0x0fe2,	// (0x0008e9e4) bg_calc_paper_pane_g6_ParamLimits

0x0ff5,	// (0x0008e9f7) bg_calc_paper_pane_g7_ParamLimits

0x1008,	// (0x0008ea0a) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0009cb5a) bg_calc_paper_pane_g_ParamLimits

0x1019,	// (0x0008ea1b) calc_bg_paper_pane_g9_ParamLimits

0x1b23,	// (0x0008f525) image_qvga_pane_ParamLimits

0x1b23,	// (0x0008f525) image_qvga_pane

0xa08e,	// (0x00097a90) bg_popup_sub_pane_cp04_ParamLimits

0xb59d,	// (0x00098f9f) popup_mup_playback_window_g1_ParamLimits

0xb5a9,	// (0x00098fab) popup_mup_playback_window_t1_ParamLimits

0xb5be,	// (0x00098fc0) popup_mup_playback_window_t2_ParamLimits

0xf4e9,	// (0x0009ceeb) popup_mup_playback_window_t_ParamLimits

0x4b71,	// (0x00092573) main_mup2_pane_g3_ParamLimits

0x4b71,	// (0x00092573) main_mup2_pane_g3

0x1e12,	// (0x0008f814) popup_toolbar_window_cp04

0xb9b9,	// (0x000993bb) popup_call2_audio_second_window_g3_ParamLimits

0xb9b9,	// (0x000993bb) popup_call2_audio_second_window_g3

0xbdc3,	// (0x000997c5) popup_call2_audio_first_window_g4_ParamLimits

0xbdc3,	// (0x000997c5) popup_call2_audio_first_window_g4

0xc442,	// (0x00099e44) popup_call2_audio_in_window_g4_ParamLimits

0xc442,	// (0x00099e44) popup_call2_audio_in_window_g4

0x3a1b,	// (0x0009141d) aid_area_sk_bg_cut_ParamLimits

0x3a1b,	// (0x0009141d) aid_area_sk_bg_cut

0xb5d3,	// (0x00098fd5) aid_area_sk_bg_cut_2_ParamLimits

0xb5d3,	// (0x00098fd5) aid_area_sk_bg_cut_2

0x4e7d,	// (0x0009287f) aid_placing_details_win

0x4e85,	// (0x00092887) aid_placing_details_win_2

0xcd46,	// (0x0009a748) camera2_autofocus_pane_g1_ParamLimits

0x0bc5,	// (0x0008e5c7) popup_fixed_preview_cale_window_ParamLimits

0x0bc5,	// (0x0008e5c7) popup_fixed_preview_cale_window

0xb39f,	// (0x00098da1) navi_slider_pane_g3

0xb3a8,	// (0x00098daa) navi_slider_pane_g4

0xb3b1,	// (0x00098db3) navi_slider_pane_g5

0xb39f,	// (0x00098da1) navi_slider_pane_g6

0xa68e,	// (0x00098090) navi_slider_pane_g7

0xb4d4,	// (0x00098ed6) mup_scale_pane_g3

0xb4dd,	// (0x00098edf) mup_scale_pane_g4

0xb4e6,	// (0x00098ee8) mup_scale_pane_g5

0x372d,	// (0x0009112f) mup_scale_pane_g6

0x3736,	// (0x00091138) mup_scale_pane_g7

0xb39f,	// (0x00098da1) cams2_slider_pane_g3

0xc9d3,	// (0x0009a3d5) cams2_slider_pane_g4

0xa784,	// (0x00098186) cams2_slider_pane_g5

0xb39f,	// (0x00098da1) cams2_slider_pane_g6

0xa78c,	// (0x0009818e) cams2_slider_pane_g7

0xcc04,	// (0x0009a606) camera2_autofocus_pane_cp_g1

0xc7a7,	// (0x0009a1a9) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7a7,	// (0x0009a1a9) bg_popup_preview_window_pane_cp02

0xcef2,	// (0x0009a8f4) list_fp_cale_pane_ParamLimits

0xcef2,	// (0x0009a8f4) list_fp_cale_pane

0xcefe,	// (0x0009a900) popup_fixed_preview_cale_window_t1_ParamLimits

0xcefe,	// (0x0009a900) popup_fixed_preview_cale_window_t1

0x577a,	// (0x0009317c) popup_fixed_preview_cale_window_t2_ParamLimits

0x577a,	// (0x0009317c) popup_fixed_preview_cale_window_t2

0x578f,	// (0x00093191) popup_fixed_preview_cale_window_t3_ParamLimits

0x578f,	// (0x00093191) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b1,	// (0x0009d1b3) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b1,	// (0x0009d1b3) popup_fixed_preview_cale_window_t

0x57a4,	// (0x000931a6) list_single_fp_cale_pane_ParamLimits

0x57a4,	// (0x000931a6) list_single_fp_cale_pane

0xcf1c,	// (0x0009a91e) list_single_fp_cale_pane_g1_ParamLimits

0xcf1c,	// (0x0009a91e) list_single_fp_cale_pane_g1

0xcf28,	// (0x0009a92a) list_single_fp_cale_pane_g2_ParamLimits

0xcf28,	// (0x0009a92a) list_single_fp_cale_pane_g2

0x0002,

0xf7b8,	// (0x0009d1ba) list_single_fp_cale_pane_g_ParamLimits

0xf7b8,	// (0x0009d1ba) list_single_fp_cale_pane_g

0xcf41,	// (0x0009a943) list_single_fp_cale_pane_t1_ParamLimits

0xcf41,	// (0x0009a943) list_single_fp_cale_pane_t1

0xcf53,	// (0x0009a955) list_single_fp_cale_pane_t2_ParamLimits

0xcf53,	// (0x0009a955) list_single_fp_cale_pane_t2

0x0001,

0xf7bf,	// (0x0009d1c1) list_single_fp_cale_pane_t_ParamLimits

0xf7bf,	// (0x0009d1c1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x99c1,	// (0x000973c3) main_dialer_pane

0x57b9,	// (0x000931bb) aid_cell_size_keypad

0x57c3,	// (0x000931c5) dialer_ne_pane

0x57cd,	// (0x000931cf) grid_dialer_command_1_pane

0x57d5,	// (0x000931d7) grid_dialer_command_2_pane

0x57dd,	// (0x000931df) grid_dialer_keypad_pane

0x57ef,	// (0x000931f1) bg_popup_call_pane_cp06_ParamLimits

0x57ef,	// (0x000931f1) bg_popup_call_pane_cp06

0x57fb,	// (0x000931fd) dialer_ne_clear_pane_ParamLimits

0x57fb,	// (0x000931fd) dialer_ne_clear_pane

0xcf86,	// (0x0009a988) dialer_ne_pane_g1

0xcf8e,	// (0x0009a990) dialer_ne_pane_t1_ParamLimits

0xcf8e,	// (0x0009a990) dialer_ne_pane_t1

0x5807,	// (0x00093209) dialer_ne_pane_t2_ParamLimits

0x5807,	// (0x00093209) dialer_ne_pane_t2

0x5831,	// (0x00093233) dialer_ne_pane_t3_ParamLimits

0x5831,	// (0x00093233) dialer_ne_pane_t3

0x0002,

0xf7c4,	// (0x0009d1c6) dialer_ne_pane_t_ParamLimits

0xf7c4,	// (0x0009d1c6) dialer_ne_pane_t

0x5861,	// (0x00093263) dialer_ne_pane_t3_copy1_ParamLimits

0x5861,	// (0x00093263) dialer_ne_pane_t3_copy1

0x5890,	// (0x00093292) cell_dialer_keypad_pane_ParamLimits

0x5890,	// (0x00093292) cell_dialer_keypad_pane

0x58a7,	// (0x000932a9) cell_dialer_command_1_pane_ParamLimits

0x58a7,	// (0x000932a9) cell_dialer_command_1_pane

0x58bd,	// (0x000932bf) cell_dialer_command_2_pane_ParamLimits

0x58bd,	// (0x000932bf) cell_dialer_command_2_pane

0xcfa0,	// (0x0009a9a2) bg_button_pane_cp02_ParamLimits

0xcfa0,	// (0x0009a9a2) bg_button_pane_cp02

0x58cc,	// (0x000932ce) cell_dialer_keypad_pane_g1_ParamLimits

0x58cc,	// (0x000932ce) cell_dialer_keypad_pane_g1

0xcfa0,	// (0x0009a9a2) bg_button_pane_cp03_ParamLimits

0xcfa0,	// (0x0009a9a2) bg_button_pane_cp03

0x58e1,	// (0x000932e3) cell_dialer_command_1_pane_g1_ParamLimits

0x58e1,	// (0x000932e3) cell_dialer_command_1_pane_g1

0xcfac,	// (0x0009a9ae) bg_button_pane_cp04

0x58f5,	// (0x000932f7) cell_dialer_command_2_pane_g1

0xa3a1,	// (0x00097da3) bg_button_pane_cp06

0xcfb4,	// (0x0009a9b6) dialer_ne_clear_pane_g1

0x31ff,	// (0x00090c01) navi_pane_g2

0x322d,	// (0x00090c2f) navi_pane_g3

0x0002,

0xf3ec,	// (0x0009cdee) navi_pane_g

0x3258,	// (0x00090c5a) navi_pane_mv_g2

0x327f,	// (0x00090c81) navi_pane_mv_g5

0x3287,	// (0x00090c89) navi_pane_mv_t1

0xa175,	// (0x00097b77) main_clock2_pane

0x5940,	// (0x00093342) main_clock2_list_pane_ParamLimits

0x5940,	// (0x00093342) main_clock2_list_pane

0x5978,	// (0x0009337a) main_clock2_pane_t1_ParamLimits

0x5978,	// (0x0009337a) main_clock2_pane_t1

0x59b4,	// (0x000933b6) main_clock2_pane_t2_ParamLimits

0x59b4,	// (0x000933b6) main_clock2_pane_t2

0x0004,

0xf7d0,	// (0x0009d1d2) main_clock2_pane_t_ParamLimits

0xf7d0,	// (0x0009d1d2) main_clock2_pane_t

0x5a54,	// (0x00093456) popup_clock_analogue_window_cp03_ParamLimits

0x5a54,	// (0x00093456) popup_clock_analogue_window_cp03

0x5a7b,	// (0x0009347d) popup_clock_digital_window_cp02_ParamLimits

0x5a7b,	// (0x0009347d) popup_clock_digital_window_cp02

0x5af4,	// (0x000934f6) main_clock2_list_single_pane_ParamLimits

0x5af4,	// (0x000934f6) main_clock2_list_single_pane

0xa3a1,	// (0x00097da3) list_highlight_pane_cp05

0xcff0,	// (0x0009a9f2) main_clock2_list_single_pane_t1

0x1e12,	// (0x0008f814) popup_toolbar_window_cp04_ParamLimits

0x4eec,	// (0x000928ee) camera2_autofocus_pane_g2_ParamLimits

0x4eec,	// (0x000928ee) camera2_autofocus_pane_g2

0x4ef8,	// (0x000928fa) camera2_autofocus_pane_g3_ParamLimits

0x4ef8,	// (0x000928fa) camera2_autofocus_pane_g3

0x4f04,	// (0x00092906) camera2_autofocus_pane_g4_ParamLimits

0x4f04,	// (0x00092906) camera2_autofocus_pane_g4

0x4f10,	// (0x00092912) camera2_autofocus_pane_g5_ParamLimits

0x4f10,	// (0x00092912) camera2_autofocus_pane_g5

0x0004,

0xf714,	// (0x0009d116) camera2_autofocus_pane_g_ParamLimits

0xf714,	// (0x0009d116) camera2_autofocus_pane_g

0x511d,	// (0x00092b1f) camera2_autofocus_pane_cp_g2

0x5125,	// (0x00092b27) camera2_autofocus_pane_cp_g3

0x512d,	// (0x00092b2f) camera2_autofocus_pane_cp_g4

0x5135,	// (0x00092b37) camera2_autofocus_pane_cp_g5

0x0004,

0xf77a,	// (0x0009d17c) camera2_autofocus_pane_cp_g

0x57e7,	// (0x000931e9) popup_dialer_spcha_window

0x99c1,	// (0x000973c3) bg_popup_sub_pane_cp07

0xcffe,	// (0x0009aa00) list_spcha_pane

0xd006,	// (0x0009aa08) list_single_spcha_pane_ParamLimits

0xd006,	// (0x0009aa08) list_single_spcha_pane

0x99c1,	// (0x000973c3) list_highlight_pane_cp06

0xd017,	// (0x0009aa19) list_single_spcha_pane_t1

0xc1ec,	// (0x00099bee) popup_call2_audio_out_window_g4_ParamLimits

0xc1ec,	// (0x00099bee) popup_call2_audio_out_window_g4

0x99c1,	// (0x000973c3) main_imed2_pane

0xc7df,	// (0x0009a1e1) popup_imed_adjust2_window

0x429e,	// (0x00091ca0) popup_imed_trans_window_ParamLimits

0x429e,	// (0x00091ca0) popup_imed_trans_window

0xca3c,	// (0x0009a43e) popup_blid_sat_info2_window_t1

0xca4a,	// (0x0009a44c) popup_blid_sat_info2_window_t2

0x000a,

0xf6a9,	// (0x0009d0ab) popup_blid_sat_info2_window_t

0x5baa,	// (0x000935ac) aid_size_cell_colour_35

0x5bca,	// (0x000935cc) aid_size_cell_colour_112

0x5bea,	// (0x000935ec) aid_size_cell_effect

0xc7b3,	// (0x0009a1b5) bg_tb_trans_pane_cp02

0xaef6,	// (0x000988f8) heading_imed_pane

0x5c0a,	// (0x0009360c) listscroll_imed_pane

0xd025,	// (0x0009aa27) heading_imed_pane_g1

0xd02d,	// (0x0009aa2f) heading_imed_pane_t1

0xd03b,	// (0x0009aa3d) grid_imed_colour_35_pane_ParamLimits

0xd03b,	// (0x0009aa3d) grid_imed_colour_35_pane

0x5c16,	// (0x00093618) grid_imed_effect_pane

0xd057,	// (0x0009aa59) list_imed_aspect_pane

0x5c2b,	// (0x0009362d) scroll_pane_cp027_ParamLimits

0x5c2b,	// (0x0009362d) scroll_pane_cp027

0x5c3c,	// (0x0009363e) cell_imed_effect_pane_ParamLimits

0x5c3c,	// (0x0009363e) cell_imed_effect_pane

0xd05f,	// (0x0009aa61) cell_imed_colour_pane_ParamLimits

0xd05f,	// (0x0009aa61) cell_imed_colour_pane

0xd0a9,	// (0x0009aaab) cell_imed_colour_pane_g1_ParamLimits

0xd0a9,	// (0x0009aaab) cell_imed_colour_pane_g1

0xd0ba,	// (0x0009aabc) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0ba,	// (0x0009aabc) hgihlgiht_grid_pane_cp016

0x5c67,	// (0x00093669) cell_imed_effect_pane_g1

0x5c6f,	// (0x00093671) grid_highlight_pane_cp017

0xd0cb,	// (0x0009aacd) list_imed_single_pane_ParamLimits

0xd0cb,	// (0x0009aacd) list_imed_single_pane

0x99c1,	// (0x000973c3) list_highlight_pane_cp07

0xd0df,	// (0x0009aae1) list_imed_aspect_pane_comp1_t1

0xc7b3,	// (0x0009a1b5) bg_tb_trans_pane_cp05

0xd101,	// (0x0009ab03) popup_imed_adjust2_window_g1

0xd128,	// (0x0009ab2a) popup_imed_adjust2_window_t1

0xd140,	// (0x0009ab42) slider_imed_adjust_pane

0xd154,	// (0x0009ab56) slider_imed_adjust_pane_g1

0xd164,	// (0x0009ab66) slider_imed_adjust_pane_g2

0xd174,	// (0x0009ab76) slider_imed_adjust_pane_g3

0xd185,	// (0x0009ab87) slider_imed_adjust_pane_g4

0x0003,

0xf7ed,	// (0x0009d1ef) slider_imed_adjust_pane_g

0x5c78,	// (0x0009367a) aid_size_cell_clipart2

0x5c84,	// (0x00093686) grid_imed_clipart_pane

0xd196,	// (0x0009ab98) scroll_pane_cp031

0x5c8e,	// (0x00093690) cell_imed_clipart_pane_ParamLimits

0x5c8e,	// (0x00093690) cell_imed_clipart_pane

0x5cab,	// (0x000936ad) cell_imed_clipart_pane_g1

0x99c1,	// (0x000973c3) grid_highlight_pane_cp014

0x5955,	// (0x00093357) main_clock2_pane_g1_ParamLimits

0x5955,	// (0x00093357) main_clock2_pane_g1

0x5a9b,	// (0x0009349d) aid_call2_pane_cp10

0x5aad,	// (0x000934af) aid_call_pane_cp10

0xb2cb,	// (0x00098ccd) popup_clock_analogue_window_cp10_g1

0xb2cb,	// (0x00098ccd) popup_clock_analogue_window_cp10_g2

0x5abf,	// (0x000934c1) popup_clock_analogue_window_cp10_g3

0x5abf,	// (0x000934c1) popup_clock_analogue_window_cp10_g4

0xb2cb,	// (0x00098ccd) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7db,	// (0x0009d1dd) popup_clock_analogue_window_cp10_g

0x5ad5,	// (0x000934d7) popup_clock_analogue_window_cp10_t1

0x5b06,	// (0x00093508) clock_digital_number_pane_cp10_ParamLimits

0x5b06,	// (0x00093508) clock_digital_number_pane_cp10

0x5b20,	// (0x00093522) clock_digital_number_pane_cp11_ParamLimits

0x5b20,	// (0x00093522) clock_digital_number_pane_cp11

0x5b3a,	// (0x0009353c) clock_digital_number_pane_cp12_ParamLimits

0x5b3a,	// (0x0009353c) clock_digital_number_pane_cp12

0x5b54,	// (0x00093556) clock_digital_number_pane_cp13_ParamLimits

0x5b54,	// (0x00093556) clock_digital_number_pane_cp13

0x5b6e,	// (0x00093570) clock_digital_separator_pane_cp10_ParamLimits

0x5b6e,	// (0x00093570) clock_digital_separator_pane_cp10

0x5b88,	// (0x0009358a) popup_clock_digital_window_cp02_t1_ParamLimits

0x5b88,	// (0x0009358a) popup_clock_digital_window_cp02_t1

0xa086,	// (0x00097a88) clock_digital_number_pane_cp10_g1

0xa086,	// (0x00097a88) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f6,	// (0x0009d1f8) clock_digital_number_pane_cp10_g

0xa086,	// (0x00097a88) clock_digital_separator_pane_cp10_g1

0xa086,	// (0x00097a88) clock_digital_separator_pane_g2_cp10

0xb366,	// (0x00098d68) navi_pane_vded_g4

0xb36f,	// (0x00098d71) navi_pane_vded_g5

0xb378,	// (0x00098d7a) navi_pane_vded_t1

0x99c1,	// (0x000973c3) main_vded_pane

0x5cb4,	// (0x000936b6) main_vded_pane_g1

0x5cc0,	// (0x000936c2) main_vded_pane_g2

0x5ccc,	// (0x000936ce) main_vded_pane_g3

0x0002,

0xf7fb,	// (0x0009d1fd) main_vded_pane_g

0x5cd8,	// (0x000936da) main_vded_pane_t1

0x5ce6,	// (0x000936e8) main_vded_pane_t2

0x0001,

0xf802,	// (0x0009d204) main_vded_pane_t

0x5cf4,	// (0x000936f6) vded_slider_pane

0x5cfe,	// (0x00093700) vded_video_pane

0xd19e,	// (0x0009aba0) vded_video_pane_g1

0x5d08,	// (0x0009370a) vded_video_pane_g2

0xcc04,	// (0x0009a606) vded_video_pane_g3

0x0002,

0xf807,	// (0x0009d209) vded_video_pane_g

0xd1a8,	// (0x0009abaa) vded_slider_pane_g1

0xc951,	// (0x0009a353) vded_slider_pane_g2

0xd1b1,	// (0x0009abb3) vded_slider_pane_g3

0xd1ba,	// (0x0009abbc) vded_slider_pane_g4

0xd1c3,	// (0x0009abc5) vded_slider_pane_g5

0x0004,

0xf80e,	// (0x0009d210) vded_slider_pane_g

0x56c6,	// (0x000930c8) mup3_rocker_pane_ParamLimits

0x56c6,	// (0x000930c8) mup3_rocker_pane

0x5d11,	// (0x00093713) mup3_control_keys_pane_g1

0x5d19,	// (0x0009371b) mup3_control_keys_pane_g2

0x5d21,	// (0x00093723) mup3_control_keys_pane_g3

0x5d29,	// (0x0009372b) mup3_control_keys_pane_g4

0x0003,

0xf819,	// (0x0009d21b) mup3_control_keys_pane_g

0x0bfc,	// (0x0008e5fe) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0bfc,	// (0x0008e5fe) popup_toolbar2_fixed_window_cp01

0x56fc,	// (0x000930fe) popup_toolbar2_fixed_window_cp02_ParamLimits

0x56fc,	// (0x000930fe) popup_toolbar2_fixed_window_cp02

0xbb2b,	// (0x0009952d) popup_call2_audio_second_window_t4_ParamLimits

0xbb2b,	// (0x0009952d) popup_call2_audio_second_window_t4

0xc059,	// (0x00099a5b) popup_call2_audio_first_window_t6_ParamLimits

0xc059,	// (0x00099a5b) popup_call2_audio_first_window_t6

0xc2ef,	// (0x00099cf1) popup_call2_audio_out_window_t6_ParamLimits

0xc2ef,	// (0x00099cf1) popup_call2_audio_out_window_t6

0x99c1,	// (0x000973c3) main_vitu_pane

0x5d39,	// (0x0009373b) aid_size_cell_itu_ParamLimits

0x5d39,	// (0x0009373b) aid_size_cell_itu

0x9a12,	// (0x00097414) bg_popup_window_pane_cp08_ParamLimits

0x9a12,	// (0x00097414) bg_popup_window_pane_cp08

0x5d4f,	// (0x00093751) field_vitu_entry_pane_ParamLimits

0x5d4f,	// (0x00093751) field_vitu_entry_pane

0x5d66,	// (0x00093768) grid_vitu_function_pane_ParamLimits

0x5d66,	// (0x00093768) grid_vitu_function_pane

0x5d81,	// (0x00093783) grid_vitu_itu_pane_ParamLimits

0x5d81,	// (0x00093783) grid_vitu_itu_pane

0x5d9f,	// (0x000937a1) cell_vitu_itu_pane_ParamLimits

0x5d9f,	// (0x000937a1) cell_vitu_itu_pane

0x5dc5,	// (0x000937c7) cell_vitu_function_pane_ParamLimits

0x5dc5,	// (0x000937c7) cell_vitu_function_pane

0x9a12,	// (0x00097414) bg_popup_sub_pane_cp08_ParamLimits

0x9a12,	// (0x00097414) bg_popup_sub_pane_cp08

0x5de0,	// (0x000937e2) field_vitu_entry_pane_t1_ParamLimits

0x5de0,	// (0x000937e2) field_vitu_entry_pane_t1

0xd1e4,	// (0x0009abe6) field_vitu_entry_pane_t2_ParamLimits

0xd1e4,	// (0x0009abe6) field_vitu_entry_pane_t2

0x0001,

0xf827,	// (0x0009d229) field_vitu_entry_pane_t_ParamLimits

0xf827,	// (0x0009d229) field_vitu_entry_pane_t

0xd201,	// (0x0009ac03) bg_button_pane_cp05_ParamLimits

0xd201,	// (0x0009ac03) bg_button_pane_cp05

0x5e00,	// (0x00093802) cell_vitu_itu_pane_g1

0x5e18,	// (0x0009381a) cell_vitu_itu_pane_t1_ParamLimits

0x5e18,	// (0x0009381a) cell_vitu_itu_pane_t1

0x5e2a,	// (0x0009382c) cell_vitu_itu_pane_t2_ParamLimits

0x5e2a,	// (0x0009382c) cell_vitu_itu_pane_t2

0x0002,

0xf82c,	// (0x0009d22e) cell_vitu_itu_pane_t_ParamLimits

0xf82c,	// (0x0009d22e) cell_vitu_itu_pane_t

0xd20f,	// (0x0009ac11) bg_button_pane_cp07

0x5e5f,	// (0x00093861) cell_vitu_function_pane_g1

0xa115,	// (0x00097b17) main_calc_pane_g1

0x0a08,	// (0x0008e40a) aid_visual_content_pane

0x99c1,	// (0x000973c3) main_vradio_pane

0x5e68,	// (0x0009386a) main_vradio_pane_g1_ParamLimits

0x5e68,	// (0x0009386a) main_vradio_pane_g1

0xd219,	// (0x0009ac1b) main_vradio_pane_g2_ParamLimits

0xd219,	// (0x0009ac1b) main_vradio_pane_g2

0x0001,

0xf833,	// (0x0009d235) main_vradio_pane_g_ParamLimits

0xf833,	// (0x0009d235) main_vradio_pane_g

0x5e7f,	// (0x00093881) main_vradio_pane_t1_ParamLimits

0x5e7f,	// (0x00093881) main_vradio_pane_t1

0x5e94,	// (0x00093896) main_vradio_pane_t2_ParamLimits

0x5e94,	// (0x00093896) main_vradio_pane_t2

0xd226,	// (0x0009ac28) main_vradio_pane_t3_ParamLimits

0xd226,	// (0x0009ac28) main_vradio_pane_t3

0x0002,

0xf838,	// (0x0009d23a) main_vradio_pane_t_ParamLimits

0xf838,	// (0x0009d23a) main_vradio_pane_t

0x5ea9,	// (0x000938ab) vradio_rocker_control_pane_ParamLimits

0x5ea9,	// (0x000938ab) vradio_rocker_control_pane

0x5ebb,	// (0x000938bd) vradio_station_info_pane_ParamLimits

0x5ebb,	// (0x000938bd) vradio_station_info_pane

0xd23a,	// (0x0009ac3c) vradio_frequency_info_pane_ParamLimits

0xd23a,	// (0x0009ac3c) vradio_frequency_info_pane

0xcc04,	// (0x0009a606) vradio_station_info_pane_g1

0xd249,	// (0x0009ac4b) vradio_station_info_pane_t1_ParamLimits

0xd249,	// (0x0009ac4b) vradio_station_info_pane_t1

0xd26b,	// (0x0009ac6d) vradio_station_info_pane_t2_ParamLimits

0xd26b,	// (0x0009ac6d) vradio_station_info_pane_t2

0x0001,

0xf83f,	// (0x0009d241) vradio_station_info_pane_t_ParamLimits

0xf83f,	// (0x0009d241) vradio_station_info_pane_t

0xd27d,	// (0x0009ac7f) vradio_tuning_pane

0xd285,	// (0x0009ac87) vradio_rocker_control_pane_g1

0xd28d,	// (0x0009ac8f) vradio_rocker_control_pane_g2

0xd295,	// (0x0009ac97) vradio_rocker_control_pane_g3

0xd29d,	// (0x0009ac9f) vradio_rocker_control_pane_g4

0xd2a5,	// (0x0009aca7) vradio_rocker_control_pane_g5

0x0004,

0xf844,	// (0x0009d246) vradio_rocker_control_pane_g

0x5ecb,	// (0x000938cd) vradio_frequency_info_pane_g1

0xd2ad,	// (0x0009acaf) vradio_frequency_info_pane_t1_ParamLimits

0xd2ad,	// (0x0009acaf) vradio_frequency_info_pane_t1

0x5ed5,	// (0x000938d7) vradio_tuning_pane_g1

0x5ee0,	// (0x000938e2) vradio_tuning_pane_t1

0x99df,	// (0x000973e1) area_side_right_pane_ParamLimits

0x99df,	// (0x000973e1) area_side_right_pane

0xc76e,	// (0x0009a170) status_small_pane_g1

0xc776,	// (0x0009a178) status_small_pane_g2

0xc77f,	// (0x0009a181) status_small_pane_g3

0xc788,	// (0x0009a18a) status_small_pane_g4

0x0003,

0xf5ff,	// (0x0009d001) status_small_pane_g

0xc791,	// (0x0009a193) status_small_pane_t1

0x99c1,	// (0x000973c3) main_video3_pane

0xd2c1,	// (0x0009acc3) cams_zoom_vslider_pane

0xd2c9,	// (0x0009accb) image3_wide_pane_ParamLimits

0xd2c9,	// (0x0009accb) image3_wide_pane

0xd2e3,	// (0x0009ace5) image3_wide_small_pane

0xd2f7,	// (0x0009acf9) main_video3_pane_g1_ParamLimits

0xd2f7,	// (0x0009acf9) main_video3_pane_g1

0xd313,	// (0x0009ad15) main_video3_pane_g2_ParamLimits

0xd313,	// (0x0009ad15) main_video3_pane_g2

0x0001,

0xf84f,	// (0x0009d251) main_video3_pane_g_ParamLimits

0xf84f,	// (0x0009d251) main_video3_pane_g

0xd32f,	// (0x0009ad31) main_video3_pane_t1_ParamLimits

0xd32f,	// (0x0009ad31) main_video3_pane_t1

0xd35a,	// (0x0009ad5c) main_video3_pane_t2_ParamLimits

0xd35a,	// (0x0009ad5c) main_video3_pane_t2

0xd387,	// (0x0009ad89) main_video3_pane_t3_ParamLimits

0xd387,	// (0x0009ad89) main_video3_pane_t3

0x0002,

0xf854,	// (0x0009d256) main_video3_pane_t_ParamLimits

0xf854,	// (0x0009d256) main_video3_pane_t

0xd3b4,	// (0x0009adb6) cams_zoom_vslider_pane_g1

0xd3bd,	// (0x0009adbf) cams_zoom_vslider_pane_g2

0x0001,

0xf85b,	// (0x0009d25d) cams_zoom_vslider_pane_g

0xd3c5,	// (0x0009adc7) small_slider_vertical_pane

0xcc04,	// (0x0009a606) small_slider_vertical_pane_g1

0xcc04,	// (0x0009a606) small_slider_vertical_pane_g2

0xd3cd,	// (0x0009adcf) small_slider_vertical_pane_g3

0x0002,

0xf860,	// (0x0009d262) small_slider_vertical_pane_g

0x99c1,	// (0x000973c3) main_hwr_training_pane

0xd3d6,	// (0x0009add8) hwr_training_instruct_pane_ParamLimits

0xd3d6,	// (0x0009add8) hwr_training_instruct_pane

0x5eef,	// (0x000938f1) hwr_training_navi_pane_ParamLimits

0x5eef,	// (0x000938f1) hwr_training_navi_pane

0x5f0e,	// (0x00093910) hwr_training_write_pane_ParamLimits

0x5f0e,	// (0x00093910) hwr_training_write_pane

0x99c1,	// (0x000973c3) bg_frame_shadow_pane

0xd40d,	// (0x0009ae0f) hwr_training_write_pane_g1

0xd415,	// (0x0009ae17) hwr_training_write_pane_g2

0xd41d,	// (0x0009ae1f) hwr_training_write_pane_g3

0xd425,	// (0x0009ae27) hwr_training_write_pane_g4

0xd42d,	// (0x0009ae2f) hwr_training_write_pane_g5

0xd435,	// (0x0009ae37) hwr_training_write_pane_g6

0xd43d,	// (0x0009ae3f) hwr_training_write_pane_g7

0x0006,

0xf867,	// (0x0009d269) hwr_training_write_pane_g

0xa7a1,	// (0x000981a3) hwr_training_navi_pane_g1_ParamLimits

0xa7a1,	// (0x000981a3) hwr_training_navi_pane_g1

0xa7b3,	// (0x000981b5) hwr_training_navi_pane_g2_ParamLimits

0xa7b3,	// (0x000981b5) hwr_training_navi_pane_g2

0xa7c5,	// (0x000981c7) hwr_training_navi_pane_g3_ParamLimits

0xa7c5,	// (0x000981c7) hwr_training_navi_pane_g3

0xa7d5,	// (0x000981d7) hwr_training_navi_pane_g4_ParamLimits

0xa7d5,	// (0x000981d7) hwr_training_navi_pane_g4

0x0004,

0xf876,	// (0x0009d278) hwr_training_navi_pane_g_ParamLimits

0xf876,	// (0x0009d278) hwr_training_navi_pane_g

0xa7e2,	// (0x000981e4) hwr_training_navi_pane_t1

0x5f56,	// (0x00093958) list_single_hwr_training_instruct_pane_ParamLimits

0x5f56,	// (0x00093958) list_single_hwr_training_instruct_pane

0xd445,	// (0x0009ae47) list_single_hwr_training_instruct_pane_t1

0xcb44,	// (0x0009a546) bg_frame_shadow_pane_g1

0xd454,	// (0x0009ae56) bg_frame_shadow_pane_g2

0xd45c,	// (0x0009ae5e) bg_frame_shadow_pane_g3

0xd464,	// (0x0009ae66) bg_frame_shadow_pane_g4

0xd46c,	// (0x0009ae6e) bg_frame_shadow_pane_g5

0xd474,	// (0x0009ae76) bg_frame_shadow_pane_g6

0xd47c,	// (0x0009ae7e) bg_frame_shadow_pane_g7

0xa26e,	// (0x00097c70) bg_frame_shadow_pane_g8

0x0007,

0xf881,	// (0x0009d283) bg_frame_shadow_pane_g

0x99c1,	// (0x000973c3) main_video_tele_dialer_pane

0x5f6b,	// (0x0009396d) aid_size_cell_video_keypad_ParamLimits

0x5f6b,	// (0x0009396d) aid_size_cell_video_keypad

0x5f85,	// (0x00093987) grid_video_dialer_keypad_pane_ParamLimits

0x5f85,	// (0x00093987) grid_video_dialer_keypad_pane

0x5fd1,	// (0x000939d3) video_down_pane_cp_ParamLimits

0x5fd1,	// (0x000939d3) video_down_pane_cp

0x6001,	// (0x00093a03) cell_video_dialer_keypad_pane_ParamLimits

0x6001,	// (0x00093a03) cell_video_dialer_keypad_pane

0xd484,	// (0x0009ae86) bg_button_pane_cp08_ParamLimits

0xd484,	// (0x0009ae86) bg_button_pane_cp08

0x6025,	// (0x00093a27) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6025,	// (0x00093a27) cell_video_dialer_keypad_pane_g1

0x56b0,	// (0x000930b2) mup3_rocker2_pane_ParamLimits

0x56b0,	// (0x000930b2) mup3_rocker2_pane

0xcc04,	// (0x0009a606) mup3_rocker2_pane_g1

0x416b,	// (0x00091b6d) main_dialer2_pane

0x99c1,	// (0x000973c3) main_mp4_pane

0xa7f8,	// (0x000981fa) main_mp4_pane_g1_ParamLimits

0xa7f8,	// (0x000981fa) main_mp4_pane_g1

0xa7f8,	// (0x000981fa) main_mp4_pane_g2_ParamLimits

0xa7f8,	// (0x000981fa) main_mp4_pane_g2

0x6060,	// (0x00093a62) main_mp4_pane_g3_ParamLimits

0x6060,	// (0x00093a62) main_mp4_pane_g3

0xa806,	// (0x00098208) main_mp4_pane_g4_ParamLimits

0xa806,	// (0x00098208) main_mp4_pane_g4

0xa82e,	// (0x00098230) main_mp4_pane_g5_ParamLimits

0xa82e,	// (0x00098230) main_mp4_pane_g5

0x0005,

0xf8a1,	// (0x0009d2a3) main_mp4_pane_g_ParamLimits

0xf8a1,	// (0x0009d2a3) main_mp4_pane_g

0xa87e,	// (0x00098280) main_mp4_pane_t1_ParamLimits

0xa87e,	// (0x00098280) main_mp4_pane_t1

0xa8da,	// (0x000982dc) main_mp4_pane_t2_ParamLimits

0xa8da,	// (0x000982dc) main_mp4_pane_t2

0xd490,	// (0x0009ae92) main_mp4_pane_t3_ParamLimits

0xd490,	// (0x0009ae92) main_mp4_pane_t3

0xa92c,	// (0x0009832e) main_mp4_pane_t4_ParamLimits

0xa92c,	// (0x0009832e) main_mp4_pane_t4

0x0003,

0xf8ae,	// (0x0009d2b0) main_mp4_pane_t_ParamLimits

0xf8ae,	// (0x0009d2b0) main_mp4_pane_t

0xa96c,	// (0x0009836e) mp4_progress_pane_ParamLimits

0xa96c,	// (0x0009836e) mp4_progress_pane

0xa9b6,	// (0x000983b8) mp4_rocker_pane_ParamLimits

0xa9b6,	// (0x000983b8) mp4_rocker_pane

0xd4b8,	// (0x0009aeba) mp4_progress_pane_t1

0xd4d1,	// (0x0009aed3) mp4_progress_pane_t2

0x0001,

0xf8b7,	// (0x0009d2b9) mp4_progress_pane_t

0xd4ea,	// (0x0009aeec) mup_progress_pane_cp04

0xcc04,	// (0x0009a606) mp4_rocker_pane_g1

0x60aa,	// (0x00093aac) aid_cell_size_keypad2_ParamLimits

0x60aa,	// (0x00093aac) aid_cell_size_keypad2

0x60c0,	// (0x00093ac2) dialer2_ne_pane_ParamLimits

0x60c0,	// (0x00093ac2) dialer2_ne_pane

0x60d8,	// (0x00093ada) grid_dialer2_keypad_pane_ParamLimits

0x60d8,	// (0x00093ada) grid_dialer2_keypad_pane

0xc9e3,	// (0x0009a3e5) bg_popup_call_pane_cp07_ParamLimits

0xc9e3,	// (0x0009a3e5) bg_popup_call_pane_cp07

0x60f4,	// (0x00093af6) dialer2_ne_pane_t1_ParamLimits

0x60f4,	// (0x00093af6) dialer2_ne_pane_t1

0x612f,	// (0x00093b31) cell_dialer2_keypad_pane_ParamLimits

0x612f,	// (0x00093b31) cell_dialer2_keypad_pane

0xd508,	// (0x0009af0a) bg_button_pane_pane_cp04_ParamLimits

0xd508,	// (0x0009af0a) bg_button_pane_pane_cp04

0x6153,	// (0x00093b55) cell_dialer2_keypad_pane_g1_ParamLimits

0x6153,	// (0x00093b55) cell_dialer2_keypad_pane_g1

0x1cf9,	// (0x0008f6fb) aid_placing_vt_set_content_ParamLimits

0x1cf9,	// (0x0008f6fb) aid_placing_vt_set_content

0x1d1d,	// (0x0008f71f) aid_placing_vt_set_title_ParamLimits

0x1d1d,	// (0x0008f71f) aid_placing_vt_set_title

0x99c1,	// (0x000973c3) main_image3_pane

0x6219,	// (0x00093c1b) area_side_right_pane_cp01_ParamLimits

0x6219,	// (0x00093c1b) area_side_right_pane_cp01

0xa7f8,	// (0x000981fa) main_image3_pane_g1_ParamLimits

0xa7f8,	// (0x000981fa) main_image3_pane_g1

0x6232,	// (0x00093c34) main_image3_pane_g2_ParamLimits

0x6232,	// (0x00093c34) main_image3_pane_g2

0x625a,	// (0x00093c5c) main_image3_pane_g3_ParamLimits

0x625a,	// (0x00093c5c) main_image3_pane_g3

0x6284,	// (0x00093c86) main_image3_pane_g4_ParamLimits

0x6284,	// (0x00093c86) main_image3_pane_g4

0x0003,

0xf8c6,	// (0x0009d2c8) main_image3_pane_g_ParamLimits

0xf8c6,	// (0x0009d2c8) main_image3_pane_g

0x62ae,	// (0x00093cb0) main_image3_pane_t1_ParamLimits

0x62ae,	// (0x00093cb0) main_image3_pane_t1

0x6306,	// (0x00093d08) main_image3_pane_t2_ParamLimits

0x6306,	// (0x00093d08) main_image3_pane_t2

0x6358,	// (0x00093d5a) main_image3_pane_t3_ParamLimits

0x6358,	// (0x00093d5a) main_image3_pane_t3

0x0003,

0xf8cf,	// (0x0009d2d1) main_image3_pane_t_ParamLimits

0xf8cf,	// (0x0009d2d1) main_image3_pane_t

0x9a12,	// (0x00097414) grid_sctrl_middle_pane_cp01_ParamLimits

0x9a12,	// (0x00097414) grid_sctrl_middle_pane_cp01

0x63e0,	// (0x00093de2) cell_sctrl_middle_pane_cp01_ParamLimits

0x63e0,	// (0x00093de2) cell_sctrl_middle_pane_cp01

0x63fd,	// (0x00093dff) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x63fd,	// (0x00093dff) cell_sctrl_middle_pane_cp01_g1

0x99c1,	// (0x000973c3) main_call4_pane

0x6412,	// (0x00093e14) aid_size_button_call4_ParamLimits

0x6412,	// (0x00093e14) aid_size_button_call4

0x6445,	// (0x00093e47) call4_windows_pane_ParamLimits

0x6445,	// (0x00093e47) call4_windows_pane

0x6467,	// (0x00093e69) grid_call4_button_pane_ParamLimits

0x6467,	// (0x00093e69) grid_call4_button_pane

0xd514,	// (0x0009af16) call4_windows_conf_pane

0x6492,	// (0x00093e94) popup_call4_audio_first_window_ParamLimits

0x6492,	// (0x00093e94) popup_call4_audio_first_window

0x64be,	// (0x00093ec0) popup_call4_audio_second_window_ParamLimits

0x64be,	// (0x00093ec0) popup_call4_audio_second_window

0xd551,	// (0x0009af53) popup_call4_audio_wait_window_ParamLimits

0xd551,	// (0x0009af53) popup_call4_audio_wait_window

0x64d4,	// (0x00093ed6) cell_call4_button_pane_ParamLimits

0x64d4,	// (0x00093ed6) cell_call4_button_pane

0x64fb,	// (0x00093efd) bg_button_pane_cp09_ParamLimits

0x64fb,	// (0x00093efd) bg_button_pane_cp09

0x6507,	// (0x00093f09) cell_call4_button_pane_g1_ParamLimits

0x6507,	// (0x00093f09) cell_call4_button_pane_g1

0x652d,	// (0x00093f2f) cell_call4_button_pane_t1_ParamLimits

0x652d,	// (0x00093f2f) cell_call4_button_pane_t1

0xd599,	// (0x0009af9b) popup_call4_audio_conf_window_ParamLimits

0xd599,	// (0x0009af9b) popup_call4_audio_conf_window

0x5712,	// (0x00093114) mup3_progress_pane_t1_ParamLimits

0x5730,	// (0x00093132) mup3_progress_pane_t2_ParamLimits

0xceaf,	// (0x0009a8b1) mup3_progress_pane_t3_ParamLimits

0xf7a3,	// (0x0009d1a5) mup3_progress_pane_t_ParamLimits

0xcecc,	// (0x0009a8ce) mup_progress_pane_cp03_ParamLimits

0x5d31,	// (0x00093733) mup3_control_keys_pane_g4_copy1

0xa99a,	// (0x0009839c) mp4_rocker2_pane_ParamLimits

0xa99a,	// (0x0009839c) mp4_rocker2_pane

0xd5b3,	// (0x0009afb5) mp4_rocker2_pane_g1

0xd5bb,	// (0x0009afbd) mp4_rocker2_pane_g2

0xaa0c,	// (0x0009840e) mp4_rocker2_pane_g3

0xaa14,	// (0x00098416) mp4_rocker2_pane_g4

0xaa1c,	// (0x0009841e) mp4_rocker2_pane_g5

0x0004,

0xf8d8,	// (0x0009d2da) mp4_rocker2_pane_g

0x99c1,	// (0x000973c3) main_camera4_pane

0x99c1,	// (0x000973c3) main_video4_pane

0x5f9f,	// (0x000939a1) main_video_tele_dialer_pane_t1_ParamLimits

0x5f9f,	// (0x000939a1) main_video_tele_dialer_pane_t1

0x5fb8,	// (0x000939ba) main_video_tele_dialer_pane_t2_ParamLimits

0x5fb8,	// (0x000939ba) main_video_tele_dialer_pane_t2

0x0001,

0xf892,	// (0x0009d294) main_video_tele_dialer_pane_t_ParamLimits

0xf892,	// (0x0009d294) main_video_tele_dialer_pane_t

0x656b,	// (0x00093f6d) cam4_autofocus_pane_ParamLimits

0x656b,	// (0x00093f6d) cam4_autofocus_pane

0x6581,	// (0x00093f83) cam4_image_uncrop_pane_ParamLimits

0x6581,	// (0x00093f83) cam4_image_uncrop_pane

0x659a,	// (0x00093f9c) cam4_indicators_pane_ParamLimits

0x659a,	// (0x00093f9c) cam4_indicators_pane

0x65c9,	// (0x00093fcb) main_camera4_pane_g1_ParamLimits

0x65c9,	// (0x00093fcb) main_camera4_pane_g1

0x65db,	// (0x00093fdd) main_camera4_pane_g2_ParamLimits

0x65db,	// (0x00093fdd) main_camera4_pane_g2

0x65ee,	// (0x00093ff0) main_camera4_pane_g3_ParamLimits

0x65ee,	// (0x00093ff0) main_camera4_pane_g3

0x6601,	// (0x00094003) main_camera4_pane_g4_ParamLimits

0x6601,	// (0x00094003) main_camera4_pane_g4

0x6614,	// (0x00094016) main_camera4_pane_g5_ParamLimits

0x6614,	// (0x00094016) main_camera4_pane_g5

0x0005,

0xf8e3,	// (0x0009d2e5) main_camera4_pane_g_ParamLimits

0xf8e3,	// (0x0009d2e5) main_camera4_pane_g

0x6638,	// (0x0009403a) main_camera4_pane_t1_ParamLimits

0x6638,	// (0x0009403a) main_camera4_pane_t1

0xce34,	// (0x0009a836) bg_tb_trans_pane_cp06

0xaa4a,	// (0x0009844c) cam4_indicators_pane_g1

0xaa5b,	// (0x0009845d) cam4_indicators_pane_g2

0x0002,

0xf8fe,	// (0x0009d300) cam4_indicators_pane_g

0xaa73,	// (0x00098475) cam4_indicators_pane_t1

0x669c,	// (0x0009409e) main_video4_pane_g1_ParamLimits

0x669c,	// (0x0009409e) main_video4_pane_g1

0x66ab,	// (0x000940ad) main_video4_pane_g2_ParamLimits

0x66ab,	// (0x000940ad) main_video4_pane_g2

0x66ba,	// (0x000940bc) main_video4_pane_g3_ParamLimits

0x66ba,	// (0x000940bc) main_video4_pane_g3

0x66c9,	// (0x000940cb) main_video4_pane_g4_ParamLimits

0x66c9,	// (0x000940cb) main_video4_pane_g4

0x0004,

0xf905,	// (0x0009d307) main_video4_pane_g_ParamLimits

0xf905,	// (0x0009d307) main_video4_pane_g

0x66e7,	// (0x000940e9) vid4_indicators_pane_ParamLimits

0x66e7,	// (0x000940e9) vid4_indicators_pane

0x6715,	// (0x00094117) video4_image_uncrop_cif_pane_ParamLimits

0x6715,	// (0x00094117) video4_image_uncrop_cif_pane

0x672f,	// (0x00094131) video4_image_uncrop_nhd_pane_ParamLimits

0x672f,	// (0x00094131) video4_image_uncrop_nhd_pane

0x6581,	// (0x00093f83) video4_image_uncrop_vga_pane_ParamLimits

0x6581,	// (0x00093f83) video4_image_uncrop_vga_pane

0x9a12,	// (0x00097414) bg_tb_trans_pane_cp07

0xaaa1,	// (0x000984a3) vid4_indicators_pane_g1

0xaab7,	// (0x000984b9) vid4_indicators_pane_g2

0xaacb,	// (0x000984cd) vid4_indicators_pane_g3

0x0004,

0xf910,	// (0x0009d312) vid4_indicators_pane_g

0xaafc,	// (0x000984fe) vid4_indicators_pane_t1

0x6745,	// (0x00094147) cam4_autofocus_pane_g1

0x674d,	// (0x0009414f) cam4_autofocus_pane_g2

0x6755,	// (0x00094157) cam4_autofocus_pane_g3

0x0002,

0xf91b,	// (0x0009d31d) cam4_autofocus_pane_g

0x675d,	// (0x0009415f) cam4_autofocus_pane_g3_copy1

0x5fe5,	// (0x000939e7) video_down_pane_cp_t1

0x5ff3,	// (0x000939f5) video_down_pane_cp_t2

0x0001,

0xf897,	// (0x0009d299) video_down_pane_cp_t

0x9a12,	// (0x00097414) popup_vitu2_window_ParamLimits

0x9a12,	// (0x00097414) popup_vitu2_window

0x6765,	// (0x00094167) aid_size_cell2_itu2_ParamLimits

0x6765,	// (0x00094167) aid_size_cell2_itu2

0x678b,	// (0x0009418d) aid_size_cell_itu2_ParamLimits

0x678b,	// (0x0009418d) aid_size_cell_itu2

0x67eb,	// (0x000941ed) bg_popup_window_pane_cp09_ParamLimits

0x67eb,	// (0x000941ed) bg_popup_window_pane_cp09

0x67f9,	// (0x000941fb) field_vitu2_entry_pane_ParamLimits

0x67f9,	// (0x000941fb) field_vitu2_entry_pane

0x6821,	// (0x00094223) grid_vitu2_function_pane_ParamLimits

0x6821,	// (0x00094223) grid_vitu2_function_pane

0x6872,	// (0x00094274) grid_vitu2_itu_pane_ParamLimits

0x6872,	// (0x00094274) grid_vitu2_itu_pane

0x6906,	// (0x00094308) cell_vitu2_itu_pane_ParamLimits

0x6906,	// (0x00094308) cell_vitu2_itu_pane

0x692c,	// (0x0009432e) cell_vitu2_function_pane_ParamLimits

0x692c,	// (0x0009432e) cell_vitu2_function_pane

0xd5d7,	// (0x0009afd9) bg_popup_call_pane_cp08_ParamLimits

0xd5d7,	// (0x0009afd9) bg_popup_call_pane_cp08

0xd5ee,	// (0x0009aff0) field_vitu2_entry_pane_g1

0xd5fa,	// (0x0009affc) field_vitu2_entry_pane_g2

0x0002,

0xf922,	// (0x0009d324) field_vitu2_entry_pane_g

0xfe08,	// (0x0008d80a) field_vitu2_entry_pane_t1_ParamLimits

0xfe08,	// (0x0008d80a) field_vitu2_entry_pane_t1

0x6970,	// (0x00094372) field_vitu2_entry_pane_t2_ParamLimits

0x6970,	// (0x00094372) field_vitu2_entry_pane_t2

0x0001,

0xf929,	// (0x0009d32b) field_vitu2_entry_pane_t_ParamLimits

0xf929,	// (0x0009d32b) field_vitu2_entry_pane_t

0x698d,	// (0x0009438f) bg_button_pane_cp010_ParamLimits

0x698d,	// (0x0009438f) bg_button_pane_cp010

0xab13,	// (0x00098515) cell_vitu2_itu_pane_g1

0x69a9,	// (0x000943ab) cell_vitu2_itu_pane_t1_ParamLimits

0x69a9,	// (0x000943ab) cell_vitu2_itu_pane_t1

0xfe37,	// (0x0008d839) cell_vitu2_itu_pane_t2_ParamLimits

0xfe37,	// (0x0008d839) cell_vitu2_itu_pane_t2

0x0002,

0xf933,	// (0x0009d335) cell_vitu2_itu_pane_t_ParamLimits

0xf933,	// (0x0009d335) cell_vitu2_itu_pane_t

0x9a12,	// (0x00097414) bg_button_pane_cp011

0x6a07,	// (0x00094409) cell_vitu2_function_pane_g1

0x99c1,	// (0x000973c3) main_myfav_hc_pane

0x63a8,	// (0x00093daa) popup_image3_note_pane_ParamLimits

0x63a8,	// (0x00093daa) popup_image3_note_pane

0x63c4,	// (0x00093dc6) popup_image3_tool_bar_pane_ParamLimits

0x63c4,	// (0x00093dc6) popup_image3_tool_bar_pane

0xfec5,	// (0x0008d8c7) cell_vitu2_itu_pane_t3_ParamLimits

0xfec5,	// (0x0008d8c7) cell_vitu2_itu_pane_t3

0x99c1,	// (0x000973c3) bg_popup_trans_pane

0xd61c,	// (0x0009b01e) grid_image3_tool_bar_pane

0xd626,	// (0x0009b028) bg_popup_trans_pane_g1

0xacbd,	// (0x000986bf) bg_popup_trans_pane_g2

0xd62e,	// (0x0009b030) bg_popup_trans_pane_g3

0xd636,	// (0x0009b038) bg_popup_trans_pane_g4

0xd63e,	// (0x0009b040) bg_popup_trans_pane_g5

0xd646,	// (0x0009b048) bg_popup_trans_pane_g6

0xd64e,	// (0x0009b050) bg_popup_trans_pane_g7

0xd656,	// (0x0009b058) bg_popup_trans_pane_g8

0xac9d,	// (0x0009869f) bg_popup_trans_pane_g9

0x0008,

0xf93a,	// (0x0009d33c) bg_popup_trans_pane_g

0xd65e,	// (0x0009b060) cell_image3_tool_bar_pane_ParamLimits

0xd65e,	// (0x0009b060) cell_image3_tool_bar_pane

0xcc04,	// (0x0009a606) cell_image3_tool_bar_pane_g1

0x99c1,	// (0x000973c3) bg_popup_trans_pane_cp1

0xd674,	// (0x0009b076) popup_image3_note_pane_t1

0xd682,	// (0x0009b084) popup_image3_note_pane_t2

0xd690,	// (0x0009b092) popup_image3_note_pane_t3

0x0002,

0xf94d,	// (0x0009d34f) popup_image3_note_pane_t

0xd6a0,	// (0x0009b0a2) popup_image3_note_pane_t3_copy1

0x6a1b,	// (0x0009441d) bg_myfav_hc_instruction_pane_ParamLimits

0x6a1b,	// (0x0009441d) bg_myfav_hc_instruction_pane

0x6a33,	// (0x00094435) cell_myfav_contact_pane_ParamLimits

0x6a33,	// (0x00094435) cell_myfav_contact_pane

0x6a4f,	// (0x00094451) cell_myfav_contact_pane_cp1_ParamLimits

0x6a4f,	// (0x00094451) cell_myfav_contact_pane_cp1

0x6a67,	// (0x00094469) cell_myfav_contact_pane_cp2_ParamLimits

0x6a67,	// (0x00094469) cell_myfav_contact_pane_cp2

0x6a7f,	// (0x00094481) cell_myfav_contact_pane_cp3_ParamLimits

0x6a7f,	// (0x00094481) cell_myfav_contact_pane_cp3

0x6a96,	// (0x00094498) cell_myfav_contact_pane_cp4_ParamLimits

0x6a96,	// (0x00094498) cell_myfav_contact_pane_cp4

0x6aae,	// (0x000944b0) cell_myfav_contact_pane_cp5_ParamLimits

0x6aae,	// (0x000944b0) cell_myfav_contact_pane_cp5

0x6ac2,	// (0x000944c4) cell_myfav_contact_pane_cp6_ParamLimits

0x6ac2,	// (0x000944c4) cell_myfav_contact_pane_cp6

0x6ad8,	// (0x000944da) cell_myfav_contact_pane_cp7_ParamLimits

0x6ad8,	// (0x000944da) cell_myfav_contact_pane_cp7

0xd6ae,	// (0x0009b0b0) listscroll_gen_pane_cp05

0x6af0,	// (0x000944f2) main_myfav_hc_pane_g1_ParamLimits

0x6af0,	// (0x000944f2) main_myfav_hc_pane_g1

0x6b0a,	// (0x0009450c) main_myfav_hc_pane_g2_ParamLimits

0x6b0a,	// (0x0009450c) main_myfav_hc_pane_g2

0x0002,

0xf954,	// (0x0009d356) main_myfav_hc_pane_g_ParamLimits

0xf954,	// (0x0009d356) main_myfav_hc_pane_g

0x6b3e,	// (0x00094540) main_myfav_hc_pane_t1_ParamLimits

0x6b3e,	// (0x00094540) main_myfav_hc_pane_t1

0xd6b7,	// (0x0009b0b9) main_myfav_hc_pane_t2_ParamLimits

0xd6b7,	// (0x0009b0b9) main_myfav_hc_pane_t2

0xd6c9,	// (0x0009b0cb) main_myfav_hc_pane_t3_ParamLimits

0xd6c9,	// (0x0009b0cb) main_myfav_hc_pane_t3

0x6b55,	// (0x00094557) main_myfav_hc_pane_t4_ParamLimits

0x6b55,	// (0x00094557) main_myfav_hc_pane_t4

0x0004,

0xf95b,	// (0x0009d35d) main_myfav_hc_pane_t_ParamLimits

0xf95b,	// (0x0009d35d) main_myfav_hc_pane_t

0xcc04,	// (0x0009a606) bg_myfav_hc_instruction_pane_g1

0xd6db,	// (0x0009b0dd) cell_myfav_contact_pane_g1_ParamLimits

0xd6db,	// (0x0009b0dd) cell_myfav_contact_pane_g1

0xd6db,	// (0x0009b0dd) cell_myfav_contact_pane_g2_ParamLimits

0xd6db,	// (0x0009b0dd) cell_myfav_contact_pane_g2

0xd6e7,	// (0x0009b0e9) cell_myfav_contact_pane_g3_ParamLimits

0xd6e7,	// (0x0009b0e9) cell_myfav_contact_pane_g3

0xce99,	// (0x0009a89b) cell_myfav_contact_pane_g4_ParamLimits

0xce99,	// (0x0009a89b) cell_myfav_contact_pane_g4

0xd6f4,	// (0x0009b0f6) cell_myfav_contact_pane_g5_ParamLimits

0xd6f4,	// (0x0009b0f6) cell_myfav_contact_pane_g5

0x0004,

0xf966,	// (0x0009d368) cell_myfav_contact_pane_g_ParamLimits

0xf966,	// (0x0009d368) cell_myfav_contact_pane_g

0x6b24,	// (0x00094526) main_myfav_hc_pane_g3_ParamLimits

0x6b24,	// (0x00094526) main_myfav_hc_pane_g3

0x0b5d,	// (0x0008e55f) popup_adpt_find_window

0x6b7f,	// (0x00094581) afind_page_pane_ParamLimits

0x6b7f,	// (0x00094581) afind_page_pane

0x6b94,	// (0x00094596) aid_size_cell_afind_ParamLimits

0x6b94,	// (0x00094596) aid_size_cell_afind

0x6bb2,	// (0x000945b4) bg_popup_sub_pane_cp09_ParamLimits

0x6bb2,	// (0x000945b4) bg_popup_sub_pane_cp09

0x6bbf,	// (0x000945c1) find_pane_cp01_ParamLimits

0x6bbf,	// (0x000945c1) find_pane_cp01

0xd700,	// (0x0009b102) grid_afind_control_pane_ParamLimits

0xd700,	// (0x0009b102) grid_afind_control_pane

0x6bcc,	// (0x000945ce) grid_afind_pane_ParamLimits

0x6bcc,	// (0x000945ce) grid_afind_pane

0x6bee,	// (0x000945f0) cell_afind_pane_ParamLimits

0x6bee,	// (0x000945f0) cell_afind_pane

0xcc04,	// (0x0009a606) afind_page_pane_g1

0x6c57,	// (0x00094659) afind_page_pane_g2

0x6c60,	// (0x00094662) afind_page_pane_g3

0x0002,

0xf971,	// (0x0009d373) afind_page_pane_g

0x6c69,	// (0x0009466b) afind_page_pane_t1

0xd714,	// (0x0009b116) cell_afind_grid_control_pane_ParamLimits

0xd714,	// (0x0009b116) cell_afind_grid_control_pane

0xd508,	// (0x0009af0a) bg_button_pane_cp69_ParamLimits

0xd508,	// (0x0009af0a) bg_button_pane_cp69

0x6c89,	// (0x0009468b) cell_afind_pane_g1_ParamLimits

0x6c89,	// (0x0009468b) cell_afind_pane_g1

0x6c96,	// (0x00094698) cell_afind_pane_t1_ParamLimits

0x6c96,	// (0x00094698) cell_afind_pane_t1

0xa3fd,	// (0x00097dff) bg_button_pane_cp72

0xd723,	// (0x0009b125) cell_afind_grid_control_pane_g1

0x3c0e,	// (0x00091610) aid_image_placing_area_ParamLimits

0x3c0e,	// (0x00091610) aid_image_placing_area

0xd1cc,	// (0x0009abce) field_vitu_entry_pane_g1_ParamLimits

0xd1cc,	// (0x0009abce) field_vitu_entry_pane_g1

0xd1d8,	// (0x0009abda) field_vitu_entry_pane_g2_ParamLimits

0xd1d8,	// (0x0009abda) field_vitu_entry_pane_g2

0x0001,

0xf822,	// (0x0009d224) field_vitu_entry_pane_g_ParamLimits

0xf822,	// (0x0009d224) field_vitu_entry_pane_g

0x5e00,	// (0x00093802) cell_vitu_itu_pane_g1_ParamLimits

0x5e42,	// (0x00093844) cell_vitu_itu_pane_t3_ParamLimits

0x5e42,	// (0x00093844) cell_vitu_itu_pane_t3

0xd4b8,	// (0x0009aeba) mp4_progress_pane_t1_ParamLimits

0xd4d1,	// (0x0009aed3) mp4_progress_pane_t2_ParamLimits

0xf8b7,	// (0x0009d2b9) mp4_progress_pane_t_ParamLimits

0xd4ea,	// (0x0009aeec) mup_progress_pane_cp04_ParamLimits

0x6b69,	// (0x0009456b) main_myfav_hc_pane_t5_ParamLimits

0x6b69,	// (0x0009456b) main_myfav_hc_pane_t5

0x0a1c,	// (0x0008e41e) aid_zoom_text_primary

0x0b5d,	// (0x0008e55f) popup_adpt_find_window_ParamLimits

0x9a12,	// (0x00097414) main_cam_set_pane

0x65b3,	// (0x00093fb5) cam4_zoom_pane_ParamLimits

0x65b3,	// (0x00093fb5) cam4_zoom_pane

0x6ca8,	// (0x000946aa) main_cam_set_pane_g1_ParamLimits

0x6ca8,	// (0x000946aa) main_cam_set_pane_g1

0x6cb6,	// (0x000946b8) main_cam_set_pane_g2_ParamLimits

0x6cb6,	// (0x000946b8) main_cam_set_pane_g2

0x0001,

0xf978,	// (0x0009d37a) main_cam_set_pane_g_ParamLimits

0xf978,	// (0x0009d37a) main_cam_set_pane_g

0x6cd7,	// (0x000946d9) main_cam_set_pane_t1_ParamLimits

0x6cd7,	// (0x000946d9) main_cam_set_pane_t1

0x6cf2,	// (0x000946f4) main_cset_listscroll_pane_ParamLimits

0x6cf2,	// (0x000946f4) main_cset_listscroll_pane

0x6d16,	// (0x00094718) main_cset_slider_pane_ParamLimits

0x6d16,	// (0x00094718) main_cset_slider_pane

0xd734,	// (0x0009b136) main_cset_list_pane_ParamLimits

0xd734,	// (0x0009b136) main_cset_list_pane

0xd744,	// (0x0009b146) scroll_pane_cp028

0x6d40,	// (0x00094742) aid_area_touch_slider

0x6d5c,	// (0x0009475e) cset_slider_pane

0x6d86,	// (0x00094788) main_cset_slider_pane_g1

0x6d9b,	// (0x0009479d) main_cset_slider_pane_g2

0x0011,

0xf97d,	// (0x0009d37f) main_cset_slider_pane_g

0xd77d,	// (0x0009b17f) main_cset_slider_pane_t1

0x6e5d,	// (0x0009485f) main_cset_slider_pane_t2

0x6e77,	// (0x00094879) main_cset_slider_pane_t3

0x6e91,	// (0x00094893) main_cset_slider_pane_t4

0x6eab,	// (0x000948ad) main_cset_slider_pane_t5

0x6ec9,	// (0x000948cb) main_cset_slider_pane_t6

0x6ede,	// (0x000948e0) main_cset_slider_pane_t7

0x000e,

0xf9a2,	// (0x0009d3a4) main_cset_slider_pane_t

0x6fea,	// (0x000949ec) cset_list_set_pane_ParamLimits

0x6fea,	// (0x000949ec) cset_list_set_pane

0x6ffe,	// (0x00094a00) aid_position_infowindow_above

0x7006,	// (0x00094a08) aid_position_infowindow_below

0x700e,	// (0x00094a10) cset_list_set_pane_g1_ParamLimits

0x700e,	// (0x00094a10) cset_list_set_pane_g1

0xff23,	// (0x0008d925) cset_list_set_pane_g3_ParamLimits

0xff23,	// (0x0008d925) cset_list_set_pane_g3

0x0001,

0xf9c1,	// (0x0009d3c3) cset_list_set_pane_g_ParamLimits

0xf9c1,	// (0x0009d3c3) cset_list_set_pane_g

0xff32,	// (0x0008d934) cset_list_set_pane_t1_ParamLimits

0xff32,	// (0x0008d934) cset_list_set_pane_t1

0x9a12,	// (0x00097414) list_highlight_pane_cp021_ParamLimits

0x9a12,	// (0x00097414) list_highlight_pane_cp021

0xb4d4,	// (0x00098ed6) cset_slider_pane_g1

0xb4e6,	// (0x00098ee8) cset_slider_pane_g2

0xb4dd,	// (0x00098edf) cset_slider_pane_g3

0x0002,

0xf9c6,	// (0x0009d3c8) cset_slider_pane_g

0xab25,	// (0x00098527) aid_area_touch_cam4_zoom

0xab2d,	// (0x0009852f) cam4_zoom_cont_pane

0xab35,	// (0x00098537) cam4_zoom_pane_g1

0xab3d,	// (0x0009853f) cam4_zoom_pane_g2

0x701a,	// (0x00094a1c) cam4_zoom_pane_g3

0x0002,

0xf9cd,	// (0x0009d3cf) cam4_zoom_pane_g

0xd81d,	// (0x0009b21f) cam4_zoom_cont_pane_g1

0xd826,	// (0x0009b228) cam4_zoom_cont_pane_g2

0xd82f,	// (0x0009b231) cam4_zoom_cont_pane_g3

0x0002,

0xf9d4,	// (0x0009d3d6) cam4_zoom_cont_pane_g

0x6430,	// (0x00093e32) call4_image_pane_ParamLimits

0x6430,	// (0x00093e32) call4_image_pane

0xd514,	// (0x0009af16) call4_windows_conf_pane_ParamLimits

0xd52f,	// (0x0009af31) popup_call4_audio_in_window_ParamLimits

0xd52f,	// (0x0009af31) popup_call4_audio_in_window

0x99c1,	// (0x000973c3) bg_popup_call2_act_pane_cp02

0xd591,	// (0x0009af93) call4_list_conf_pane

0xcc04,	// (0x0009a606) call4_image_pane_g1

0xcc04,	// (0x0009a606) call4_image_pane_g2

0x0001,

0xf6e3,	// (0x0009d0e5) call4_image_pane_g

0xd838,	// (0x0009b23a) list_single_graphic_popup_conf4_pane_ParamLimits

0xd838,	// (0x0009b23a) list_single_graphic_popup_conf4_pane

0x99c1,	// (0x000973c3) list_highlight_pane_cp022

0xd84d,	// (0x0009b24f) list_single_graphic_popup_conf4_pane_g1

0xb1c8,	// (0x00098bca) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9db,	// (0x0009d3dd) list_single_graphic_popup_conf4_pane_g

0xd855,	// (0x0009b257) list_single_graphic_popup_conf4_pane_t1

0x1e34,	// (0x0008f836) popup_vtel_slider_window_ParamLimits

0x1e34,	// (0x0008f836) popup_vtel_slider_window

0xd4f6,	// (0x0009aef8) dialer2_ne_pane_t2_ParamLimits

0xd4f6,	// (0x0009aef8) dialer2_ne_pane_t2

0x0001,

0xf8bc,	// (0x0009d2be) dialer2_ne_pane_t_ParamLimits

0xf8bc,	// (0x0009d2be) dialer2_ne_pane_t

0xc9e3,	// (0x0009a3e5) bg_popup_sub_pane_cp010_ParamLimits

0xc9e3,	// (0x0009a3e5) bg_popup_sub_pane_cp010

0x7022,	// (0x00094a24) popup_vtel_slider_window_g1_ParamLimits

0x7022,	// (0x00094a24) popup_vtel_slider_window_g1

0x7035,	// (0x00094a37) popup_vtel_slider_window_g2_ParamLimits

0x7035,	// (0x00094a37) popup_vtel_slider_window_g2

0x0003,

0xf9e0,	// (0x0009d3e2) popup_vtel_slider_window_g_ParamLimits

0xf9e0,	// (0x0009d3e2) popup_vtel_slider_window_g

0x708b,	// (0x00094a8d) vtel_slider_pane_ParamLimits

0x708b,	// (0x00094a8d) vtel_slider_pane

0x70ad,	// (0x00094aaf) vtel_slider_pane_g1_ParamLimits

0x70ad,	// (0x00094aaf) vtel_slider_pane_g1

0x70c1,	// (0x00094ac3) vtel_slider_pane_g2_ParamLimits

0x70c1,	// (0x00094ac3) vtel_slider_pane_g2

0x70d9,	// (0x00094adb) vtel_slider_pane_g3_ParamLimits

0x70d9,	// (0x00094adb) vtel_slider_pane_g3

0x70ad,	// (0x00094aaf) vtel_slider_pane_g4_ParamLimits

0x70ad,	// (0x00094aaf) vtel_slider_pane_g4

0x70ef,	// (0x00094af1) vtel_slider_pane_g5_ParamLimits

0x70ef,	// (0x00094af1) vtel_slider_pane_g5

0x0004,

0xf9e9,	// (0x0009d3eb) vtel_slider_pane_g_ParamLimits

0xf9e9,	// (0x0009d3eb) vtel_slider_pane_g

0x9a12,	// (0x00097414) main_gallery2_pane

0x67b7,	// (0x000941b9) aid_size_row_itut2_dropdow_list_ParamLimits

0x67b7,	// (0x000941b9) aid_size_row_itut2_dropdow_list

0x6849,	// (0x0009424b) grid_vitu2_function_top_pane_ParamLimits

0x6849,	// (0x0009424b) grid_vitu2_function_top_pane

0x68ad,	// (0x000942af) popup_vitu2_dropdown_list_window_ParamLimits

0x68ad,	// (0x000942af) popup_vitu2_dropdown_list_window

0x68da,	// (0x000942dc) popup_vitu2_match_list_window

0x7113,	// (0x00094b15) cell_vitu2_function_top_pane_ParamLimits

0x7113,	// (0x00094b15) cell_vitu2_function_top_pane

0x7133,	// (0x00094b35) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7133,	// (0x00094b35) cell_vitu2_function_top_pane_cp01

0x714f,	// (0x00094b51) cell_vitu2_function_top_wide_pane_ParamLimits

0x714f,	// (0x00094b51) cell_vitu2_function_top_wide_pane

0x9a12,	// (0x00097414) bg_button_pane_cp012

0x716b,	// (0x00094b6d) cell_vitu2_function_top_pane_g1

0xab45,	// (0x00098547) bg_button_pane_cp013_ParamLimits

0xab45,	// (0x00098547) bg_button_pane_cp013

0x717f,	// (0x00094b81) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x717f,	// (0x00094b81) cell_vitu2_function_top_wide_pane_g1

0x9a12,	// (0x00097414) bg_popup_sub_pane_cp20

0x7197,	// (0x00094b99) list_vitu2_match_list_pane

0xd626,	// (0x0009b028) bg_popup_sub_pane_cp20_g1

0xd62e,	// (0x0009b030) bg_popup_sub_pane_cp20_g2

0xacbd,	// (0x000986bf) bg_popup_sub_pane_cp20_g3

0xd636,	// (0x0009b038) bg_popup_sub_pane_cp20_g4

0xac9d,	// (0x0009869f) bg_popup_sub_pane_cp20_g5

0xd86b,	// (0x0009b26d) bg_popup_sub_pane_cp20_g6

0xd646,	// (0x0009b048) bg_popup_sub_pane_cp20_g7

0xd64e,	// (0x0009b050) bg_popup_sub_pane_cp20_g8

0xd656,	// (0x0009b058) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f4,	// (0x0009d3f6) bg_popup_sub_pane_cp20_g

0xab61,	// (0x00098563) list_vitu2_match_list_item_pane_ParamLimits

0xab61,	// (0x00098563) list_vitu2_match_list_item_pane

0xab73,	// (0x00098575) list_vitu2_match_list_item_pane_t1

0x99c1,	// (0x000973c3) bg_popup_sub_pane_cp21

0xb0f1,	// (0x00098af3) grid_vitu2_dropdown_list_pane

0x71c1,	// (0x00094bc3) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x71c1,	// (0x00094bc3) cell_vitu2_dropdown_list_char_pane

0x71e4,	// (0x00094be6) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x71e4,	// (0x00094be6) cell_vitu2_dropdown_list_ctrl_pane

0xd873,	// (0x0009b275) cell_vitu2_dropdown_list_char_pane_g1

0xd87c,	// (0x0009b27e) cell_vitu2_dropdown_list_char_pane_g2

0xd885,	// (0x0009b287) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa11,	// (0x0009d413) cell_vitu2_dropdown_list_char_pane_g

0x7212,	// (0x00094c14) cell_vitu2_dropdown_list_char_pane_t1

0x7220,	// (0x00094c22) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7220,	// (0x00094c22) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7230,	// (0x00094c32) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7230,	// (0x00094c32) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7241,	// (0x00094c43) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7241,	// (0x00094c43) cell_vitu2_dropdown_list_ctrl_pane_g3

0x7251,	// (0x00094c53) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x7251,	// (0x00094c53) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce34,	// (0x0009a836) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce34,	// (0x0009a836) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa18,	// (0x0009d41a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa18,	// (0x0009d41a) cell_vitu2_dropdown_list_ctrl_pane_g

0x726d,	// (0x00094c6f) aid_size_cell_gallery2_ParamLimits

0x726d,	// (0x00094c6f) aid_size_cell_gallery2

0x728b,	// (0x00094c8d) grid_gallery2_pane_ParamLimits

0x728b,	// (0x00094c8d) grid_gallery2_pane

0x72a5,	// (0x00094ca7) scroll_pane_cp029_ParamLimits

0x72a5,	// (0x00094ca7) scroll_pane_cp029

0x72b1,	// (0x00094cb3) cell_gallery2_pane_ParamLimits

0x72b1,	// (0x00094cb3) cell_gallery2_pane

0xd88e,	// (0x0009b290) cell_gallery2_pane_g2

0x7312,	// (0x00094d14) cell_gallery2_pane_g3

0xd896,	// (0x0009b298) cell_gallery2_pane_g4

0xd89e,	// (0x0009b2a0) cell_gallery2_pane_g5

0xa3a1,	// (0x00097da3) grid_highlight_pane_cp10

0x68da,	// (0x000942dc) popup_vitu2_match_list_window_ParamLimits

0x68f1,	// (0x000942f3) popup_vitu2_query_window_ParamLimits

0x68f1,	// (0x000942f3) popup_vitu2_query_window

0x99c1,	// (0x000973c3) bg_vitu2_candi_button_pane

0xd873,	// (0x0009b275) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd87c,	// (0x0009b27e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd885,	// (0x0009b287) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xff7f,	// (0x0008d981) bg_button_pane_cp015

0x731a,	// (0x00094d1c) bg_button_pane_cp016

0x732d,	// (0x00094d2f) bg_button_pane_cp017

0xc7b3,	// (0x0009a1b5) bg_popup_sub_pane_cp22

0xd8a6,	// (0x0009b2a8) popup_vitu2_query_window_g1

0xffb4,	// (0x0008d9b6) popup_vitu2_query_window_g2

0x0002,

0xfa23,	// (0x0009d425) popup_vitu2_query_window_g

0xffd3,	// (0x0008d9d5) popup_vitu2_query_window_t1_ParamLimits

0xffd3,	// (0x0008d9d5) popup_vitu2_query_window_t1

0x0008,	// (0x0008da0a) popup_vitu2_query_window_t2_ParamLimits

0x0008,	// (0x0008da0a) popup_vitu2_query_window_t2

0x001a,	// (0x0008da1c) popup_vitu2_query_window_t3_ParamLimits

0x001a,	// (0x0008da1c) popup_vitu2_query_window_t3

0x7351,	// (0x00094d53) popup_vitu2_query_window_t4_ParamLimits

0x7351,	// (0x00094d53) popup_vitu2_query_window_t4

0x7372,	// (0x00094d74) popup_vitu2_query_window_t5_ParamLimits

0x7372,	// (0x00094d74) popup_vitu2_query_window_t5

0x0006,

0xfa2a,	// (0x0009d42c) popup_vitu2_query_window_t_ParamLimits

0xfa2a,	// (0x0009d42c) popup_vitu2_query_window_t

0xd72c,	// (0x0009b12e) main_cset_text_pane

0x6d40,	// (0x00094742) aid_area_touch_slider_ParamLimits

0x6d5c,	// (0x0009475e) cset_slider_pane_ParamLimits

0x6d86,	// (0x00094788) main_cset_slider_pane_g1_ParamLimits

0x6d9b,	// (0x0009479d) main_cset_slider_pane_g2_ParamLimits

0xd74d,	// (0x0009b14f) main_cset_slider_pane_g3_ParamLimits

0xd74d,	// (0x0009b14f) main_cset_slider_pane_g3

0x6db0,	// (0x000947b2) main_cset_slider_pane_g4_ParamLimits

0x6db0,	// (0x000947b2) main_cset_slider_pane_g4

0x6dbf,	// (0x000947c1) main_cset_slider_pane_g5_ParamLimits

0x6dbf,	// (0x000947c1) main_cset_slider_pane_g5

0x6dcd,	// (0x000947cf) main_cset_slider_pane_g6_ParamLimits

0x6dcd,	// (0x000947cf) main_cset_slider_pane_g6

0xf97d,	// (0x0009d37f) main_cset_slider_pane_g_ParamLimits

0xd77d,	// (0x0009b17f) main_cset_slider_pane_t1_ParamLimits

0x6e5d,	// (0x0009485f) main_cset_slider_pane_t2_ParamLimits

0x6e77,	// (0x00094879) main_cset_slider_pane_t3_ParamLimits

0x6e91,	// (0x00094893) main_cset_slider_pane_t4_ParamLimits

0x6eab,	// (0x000948ad) main_cset_slider_pane_t5_ParamLimits

0x6ec9,	// (0x000948cb) main_cset_slider_pane_t6_ParamLimits

0x6ede,	// (0x000948e0) main_cset_slider_pane_t7_ParamLimits

0x6f0c,	// (0x0009490e) main_cset_slider_pane_t8_ParamLimits

0x6f0c,	// (0x0009490e) main_cset_slider_pane_t8

0x6f34,	// (0x00094936) main_cset_slider_pane_t9_ParamLimits

0x6f34,	// (0x00094936) main_cset_slider_pane_t9

0x6f5c,	// (0x0009495e) main_cset_slider_pane_t10_ParamLimits

0x6f5c,	// (0x0009495e) main_cset_slider_pane_t10

0x6f84,	// (0x00094986) main_cset_slider_pane_t11_ParamLimits

0x6f84,	// (0x00094986) main_cset_slider_pane_t11

0x6fae,	// (0x000949b0) main_cset_slider_pane_t12_ParamLimits

0x6fae,	// (0x000949b0) main_cset_slider_pane_t12

0x6fcb,	// (0x000949cd) main_cset_slider_pane_t13_ParamLimits

0x6fcb,	// (0x000949cd) main_cset_slider_pane_t13

0xf9a2,	// (0x0009d3a4) main_cset_slider_pane_t_ParamLimits

0x99c1,	// (0x000973c3) bg_popup_sub_pane_cp011

0xd8b2,	// (0x0009b2b4) main_cset_text_pane_g1

0xd8ba,	// (0x0009b2bc) main_cset_text_pane_t1

0xd8c8,	// (0x0009b2ca) main_cset_text_pane_t2

0xd8d6,	// (0x0009b2d8) main_cset_text_pane_t3

0xd8e4,	// (0x0009b2e6) main_cset_text_pane_t4

0xd8f2,	// (0x0009b2f4) main_cset_text_pane_t5

0xd900,	// (0x0009b302) main_cset_text_pane_t6

0xd90e,	// (0x0009b310) main_cset_text_pane_t7

0x0006,

0xfa39,	// (0x0009d43b) main_cset_text_pane_t

0x99c1,	// (0x000973c3) main_cam4_burst_pane

0x99c1,	// (0x000973c3) main_cam5_pane

0x6c77,	// (0x00094679) bg_button_pane_cp019

0x6c80,	// (0x00094682) bg_button_pane_cp020

0xd759,	// (0x0009b15b) main_cset_slider_pane_g7_ParamLimits

0xd759,	// (0x0009b15b) main_cset_slider_pane_g7

0xd765,	// (0x0009b167) main_cset_slider_pane_g8_ParamLimits

0xd765,	// (0x0009b167) main_cset_slider_pane_g8

0x6de1,	// (0x000947e3) main_cset_slider_pane_g9_ParamLimits

0x6de1,	// (0x000947e3) main_cset_slider_pane_g9

0x6ded,	// (0x000947ef) main_cset_slider_pane_g10_ParamLimits

0x6ded,	// (0x000947ef) main_cset_slider_pane_g10

0x6df9,	// (0x000947fb) main_cset_slider_pane_g11_ParamLimits

0x6df9,	// (0x000947fb) main_cset_slider_pane_g11

0x6e05,	// (0x00094807) main_cset_slider_pane_g12_ParamLimits

0x6e05,	// (0x00094807) main_cset_slider_pane_g12

0x6e11,	// (0x00094813) main_cset_slider_pane_g13_ParamLimits

0x6e11,	// (0x00094813) main_cset_slider_pane_g13

0x6e1d,	// (0x0009481f) main_cset_slider_pane_g14_ParamLimits

0x6e1d,	// (0x0009481f) main_cset_slider_pane_g14

0x6e29,	// (0x0009482b) main_cset_slider_pane_g15_ParamLimits

0x6e29,	// (0x0009482b) main_cset_slider_pane_g15

0xd7ab,	// (0x0009b1ad) main_cset_slider_pane_t14_ParamLimits

0xd7ab,	// (0x0009b1ad) main_cset_slider_pane_t14

0xd7e4,	// (0x0009b1e6) main_cset_slider_pane_t15_ParamLimits

0xd7e4,	// (0x0009b1e6) main_cset_slider_pane_t15

0x7393,	// (0x00094d95) aid_cam4_burst_size_cell_ParamLimits

0x7393,	// (0x00094d95) aid_cam4_burst_size_cell

0x73b3,	// (0x00094db5) grid_cam4_burst_pane_ParamLimits

0x73b3,	// (0x00094db5) grid_cam4_burst_pane

0x73ed,	// (0x00094def) linegrid_cam4_burst_pane_ParamLimits

0x73ed,	// (0x00094def) linegrid_cam4_burst_pane

0xd91c,	// (0x0009b31e) scroll_pane_cp30_ParamLimits

0xd91c,	// (0x0009b31e) scroll_pane_cp30

0x740f,	// (0x00094e11) cell_cam4_burst_pane_ParamLimits

0x740f,	// (0x00094e11) cell_cam4_burst_pane

0xd928,	// (0x0009b32a) linegrid_cam4_burst_pane_g1_ParamLimits

0xd928,	// (0x0009b32a) linegrid_cam4_burst_pane_g1

0x7464,	// (0x00094e66) linegrid_cam4_burst_pane_g2_ParamLimits

0x7464,	// (0x00094e66) linegrid_cam4_burst_pane_g2

0xd935,	// (0x0009b337) linegrid_cam4_burst_pane_g3_ParamLimits

0xd935,	// (0x0009b337) linegrid_cam4_burst_pane_g3

0x0002,

0xfa48,	// (0x0009d44a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0009d44a) linegrid_cam4_burst_pane_g

0x7475,	// (0x00094e77) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7475,	// (0x00094e77) linegrid_cam4_burst_pane_g3_copy1

0xd942,	// (0x0009b344) linegrid_cam4_burst_pane_g4_ParamLimits

0xd942,	// (0x0009b344) linegrid_cam4_burst_pane_g4

0x7493,	// (0x00094e95) linegrid_cam4_burst_pane_g5_ParamLimits

0x7493,	// (0x00094e95) linegrid_cam4_burst_pane_g5

0x74a4,	// (0x00094ea6) linegrid_cam4_burst_pane_g6_ParamLimits

0x74a4,	// (0x00094ea6) linegrid_cam4_burst_pane_g6

0xd94f,	// (0x0009b351) linegrid_cam4_burst_pane_g7_ParamLimits

0xd94f,	// (0x0009b351) linegrid_cam4_burst_pane_g7

0x74bb,	// (0x00094ebd) cell_cam4_burst_pane_g1

0xd968,	// (0x0009b36a) main_cam5_pane_t1_ParamLimits

0xd968,	// (0x0009b36a) main_cam5_pane_t1

0xd97a,	// (0x0009b37c) main_cam5_pane_t2_ParamLimits

0xd97a,	// (0x0009b37c) main_cam5_pane_t2

0xd98c,	// (0x0009b38e) main_cam5_pane_t3_ParamLimits

0xd98c,	// (0x0009b38e) main_cam5_pane_t3

0xd99e,	// (0x0009b3a0) main_cam5_pane_t4_ParamLimits

0xd99e,	// (0x0009b3a0) main_cam5_pane_t4

0xd9b6,	// (0x0009b3b8) main_cam5_pane_t5_ParamLimits

0xd9b6,	// (0x0009b3b8) main_cam5_pane_t5

0xd9ca,	// (0x0009b3cc) main_cam5_pane_t6_ParamLimits

0xd9ca,	// (0x0009b3cc) main_cam5_pane_t6

0xd9de,	// (0x0009b3e0) main_cam5_pane_t7_ParamLimits

0xd9de,	// (0x0009b3e0) main_cam5_pane_t7

0xd9f0,	// (0x0009b3f2) main_cam5_pane_t8_ParamLimits

0xd9f0,	// (0x0009b3f2) main_cam5_pane_t8

0xda0e,	// (0x0009b410) main_cam5_pane_t9_ParamLimits

0xda0e,	// (0x0009b410) main_cam5_pane_t9

0xda20,	// (0x0009b422) main_cam5_pane_t10_ParamLimits

0xda20,	// (0x0009b422) main_cam5_pane_t10

0xda32,	// (0x0009b434) main_cam5_pane_t11_ParamLimits

0xda32,	// (0x0009b434) main_cam5_pane_t11

0xda46,	// (0x0009b448) main_cam5_pane_t12_ParamLimits

0xda46,	// (0x0009b448) main_cam5_pane_t12

0xda5d,	// (0x0009b45f) main_cam5_pane_t13_ParamLimits

0xda5d,	// (0x0009b45f) main_cam5_pane_t13

0x000c,

0xfa54,	// (0x0009d456) main_cam5_pane_t_ParamLimits

0xfa54,	// (0x0009d456) main_cam5_pane_t

0x0be0,	// (0x0008e5e2) popup_scut_keymap_window_ParamLimits

0x0be0,	// (0x0008e5e2) popup_scut_keymap_window

0x74ce,	// (0x00094ed0) aid_size_cell_brow_shortcut

0xa3a1,	// (0x00097da3) bg_popup_window_pane_cp010

0x74da,	// (0x00094edc) grid_scut_pane

0x74e6,	// (0x00094ee8) cell_scut_pane_ParamLimits

0x74e6,	// (0x00094ee8) cell_scut_pane

0x74ff,	// (0x00094f01) cell_scut_pane_g1

0xda80,	// (0x0009b482) cell_scut_pane_t1

0xda8f,	// (0x0009b491) cell_scut_pane_t2

0x7508,	// (0x00094f0a) cell_scut_pane_t3

0x0002,

0xfa6f,	// (0x0009d471) cell_scut_pane_t

0x52c9,	// (0x00092ccb) main_mup3_pane_g8_ParamLimits

0x52c9,	// (0x00092ccb) main_mup3_pane_g8

0x67d3,	// (0x000941d5) area_vitu2_query_pane_ParamLimits

0x67d3,	// (0x000941d5) area_vitu2_query_pane

0xff93,	// (0x0008d995) input_focus_pane_cp08

0xda9e,	// (0x0009b4a0) area_vitu2_query_pane_g1

0x0098,	// (0x0008da9a) area_vitu2_query_pane_g2

0x0001,

0xfa76,	// (0x0009d478) area_vitu2_query_pane_g

0x7516,	// (0x00094f18) area_vitu2_query_pane_t1_ParamLimits

0x7516,	// (0x00094f18) area_vitu2_query_pane_t1

0x752a,	// (0x00094f2c) area_vitu2_query_pane_t2_ParamLimits

0x752a,	// (0x00094f2c) area_vitu2_query_pane_t2

0x00ab,	// (0x0008daad) area_vitu2_query_pane_t3_ParamLimits

0x00ab,	// (0x0008daad) area_vitu2_query_pane_t3

0x753e,	// (0x00094f40) area_vitu2_query_pane_t4_ParamLimits

0x753e,	// (0x00094f40) area_vitu2_query_pane_t4

0x7566,	// (0x00094f68) area_vitu2_query_pane_t5_ParamLimits

0x7566,	// (0x00094f68) area_vitu2_query_pane_t5

0x758e,	// (0x00094f90) area_vitu2_query_pane_t6_ParamLimits

0x758e,	// (0x00094f90) area_vitu2_query_pane_t6

0x0006,

0xfa7b,	// (0x0009d47d) area_vitu2_query_pane_t_ParamLimits

0xfa7b,	// (0x0009d47d) area_vitu2_query_pane_t

0x75da,	// (0x00094fdc) bg_button_pane_cp018

0x75e8,	// (0x00094fea) bg_button_pane_cp021

0x00d3,	// (0x0008dad5) bg_button_pane_cp022

0x00e4,	// (0x0008dae6) input_focus_pane_cp09

0x3197,	// (0x00090b99) aid_size_touch_mv_arrow_left

0x31c0,	// (0x00090bc2) aid_size_touch_mv_arrow_right

0x6e41,	// (0x00094843) main_cset_slider_pane_g16_ParamLimits

0x6e41,	// (0x00094843) main_cset_slider_pane_g16

0x6e4f,	// (0x00094851) main_cset_slider_pane_g17_ParamLimits

0x6e4f,	// (0x00094851) main_cset_slider_pane_g17

0x74bb,	// (0x00094ebd) cell_cam4_burst_pane_g1_ParamLimits

0x99c1,	// (0x000973c3) compa_mode_pane

0x7045,	// (0x00094a47) popup_vtel_slider_window_g3_ParamLimits

0x7045,	// (0x00094a47) popup_vtel_slider_window_g3

0x705c,	// (0x00094a5e) popup_vtel_slider_window_g4_ParamLimits

0x705c,	// (0x00094a5e) popup_vtel_slider_window_g4

0x7073,	// (0x00094a75) popup_vtel_slider_window_t1_ParamLimits

0x7073,	// (0x00094a75) popup_vtel_slider_window_t1

0x99c1,	// (0x000973c3) main_cl_pane

0xc7df,	// (0x0009a1e1) popup_imed_adjust2_window_ParamLimits

0xc7b3,	// (0x0009a1b5) bg_tb_trans_pane_cp05_ParamLimits

0xd101,	// (0x0009ab03) popup_imed_adjust2_window_g1_ParamLimits

0xd110,	// (0x0009ab12) popup_imed_adjust2_window_g2_ParamLimits

0xd110,	// (0x0009ab12) popup_imed_adjust2_window_g2

0xd11c,	// (0x0009ab1e) popup_imed_adjust2_window_g3_ParamLimits

0xd11c,	// (0x0009ab1e) popup_imed_adjust2_window_g3

0x0002,

0xf7e6,	// (0x0009d1e8) popup_imed_adjust2_window_g_ParamLimits

0xf7e6,	// (0x0009d1e8) popup_imed_adjust2_window_g

0xd128,	// (0x0009ab2a) popup_imed_adjust2_window_t1_ParamLimits

0xd140,	// (0x0009ab42) slider_imed_adjust_pane_ParamLimits

0xd154,	// (0x0009ab56) slider_imed_adjust_pane_g1_ParamLimits

0xd164,	// (0x0009ab66) slider_imed_adjust_pane_g2_ParamLimits

0xd174,	// (0x0009ab76) slider_imed_adjust_pane_g3_ParamLimits

0xd185,	// (0x0009ab87) slider_imed_adjust_pane_g4_ParamLimits

0xf7ed,	// (0x0009d1ef) slider_imed_adjust_pane_g_ParamLimits

0x6553,	// (0x00093f55) aid_touch_area_cam4_ParamLimits

0x6553,	// (0x00093f55) aid_touch_area_cam4

0xaa24,	// (0x00098426) battery_pane_cp01

0x6625,	// (0x00094027) main_camera4_pane_g6_ParamLimits

0x6625,	// (0x00094027) main_camera4_pane_g6

0x664f,	// (0x00094051) main_camera4_pane_t2_ParamLimits

0x664f,	// (0x00094051) main_camera4_pane_t2

0x0001,

0xf8f0,	// (0x0009d2f2) main_camera4_pane_t_ParamLimits

0xf8f0,	// (0x0009d2f2) main_camera4_pane_t

0x6684,	// (0x00094086) aid_touch_area_vid4_ParamLimits

0x6684,	// (0x00094086) aid_touch_area_vid4

0x66d8,	// (0x000940da) main_video4_pane_g5_ParamLimits

0x66d8,	// (0x000940da) main_video4_pane_g5

0x66fd,	// (0x000940ff) vid4_progress_pane_ParamLimits

0x66fd,	// (0x000940ff) vid4_progress_pane

0xd771,	// (0x0009b173) main_cset_slider_pane_g18_ParamLimits

0xd771,	// (0x0009b173) main_cset_slider_pane_g18

0xd95c,	// (0x0009b35e) cell_cam4_burst_pane_g2_ParamLimits

0xd95c,	// (0x0009b35e) cell_cam4_burst_pane_g2

0x0001,

0xfa4f,	// (0x0009d451) cell_cam4_burst_pane_g_ParamLimits

0xfa4f,	// (0x0009d451) cell_cam4_burst_pane_g

0xa175,	// (0x00097b77) bg_cl_pane_ParamLimits

0xa175,	// (0x00097b77) bg_cl_pane

0x75f4,	// (0x00094ff6) cl_header_pane_ParamLimits

0x75f4,	// (0x00094ff6) cl_header_pane

0x7608,	// (0x0009500a) cl_listscroll_pane_ParamLimits

0x7608,	// (0x0009500a) cl_listscroll_pane

0xdaaa,	// (0x0009b4ac) bg_cl_pane_g1

0xdab2,	// (0x0009b4b4) bg_cl_pane_g2

0xdaba,	// (0x0009b4bc) bg_cl_pane_g3

0xdac2,	// (0x0009b4c4) bg_cl_pane_g4

0xdaca,	// (0x0009b4cc) bg_cl_pane_g5

0xdad2,	// (0x0009b4d4) bg_cl_pane_g6

0xdada,	// (0x0009b4dc) bg_cl_pane_g7

0xdae2,	// (0x0009b4e4) bg_cl_pane_g8

0xdaea,	// (0x0009b4ec) bg_cl_pane_g9

0x0008,

0xfa8a,	// (0x0009d48c) bg_cl_pane_g

0x7618,	// (0x0009501a) aid_height_cl_leading_ParamLimits

0x7618,	// (0x0009501a) aid_height_cl_leading

0x7624,	// (0x00095026) aid_height_cl_text_ParamLimits

0x7624,	// (0x00095026) aid_height_cl_text

0x9a12,	// (0x00097414) bg_cl_header_pane_ParamLimits

0x9a12,	// (0x00097414) bg_cl_header_pane

0x7643,	// (0x00095045) cl_header_pane_g1_ParamLimits

0x7643,	// (0x00095045) cl_header_pane_g1

0x7659,	// (0x0009505b) cl_header_pane_t1_ParamLimits

0x7659,	// (0x0009505b) cl_header_pane_t1

0xdaf2,	// (0x0009b4f4) cl_list_pane

0xd744,	// (0x0009b146) hc_scroll_pane_cp01

0xac9d,	// (0x0009869f) bg_cl_header_pane_g1

0xd626,	// (0x0009b028) bg_cl_header_pane_g2

0xacbd,	// (0x000986bf) bg_cl_header_pane_g3

0xd636,	// (0x0009b038) bg_cl_header_pane_g4

0xd62e,	// (0x0009b030) bg_cl_header_pane_g5

0xd86b,	// (0x0009b26d) bg_cl_header_pane_g6

0xd64e,	// (0x0009b050) bg_cl_header_pane_g7

0xd656,	// (0x0009b058) bg_cl_header_pane_g8

0xd646,	// (0x0009b048) bg_cl_header_pane_g9

0x0008,

0xfa9d,	// (0x0009d49f) bg_cl_header_pane_g

0x7672,	// (0x00095074) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7672,	// (0x00095074) hc_cl_list_double_graphic_heading_pane

0x7685,	// (0x00095087) hc_cl_list_single_graphic_pane_ParamLimits

0x7685,	// (0x00095087) hc_cl_list_single_graphic_pane

0x769d,	// (0x0009509f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x769d,	// (0x0009509f) hc_cl_list_single_graphic_pane_g1

0x76a9,	// (0x000950ab) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x76a9,	// (0x000950ab) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab0,	// (0x0009d4b2) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab0,	// (0x0009d4b2) hc_cl_list_single_graphic_pane_g

0x76bd,	// (0x000950bf) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x76bd,	// (0x000950bf) hc_cl_list_single_graphic_pane_t1

0x769d,	// (0x0009509f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x769d,	// (0x0009509f) hc_cl_list_double_graphic_heading_pane_g1

0x76d2,	// (0x000950d4) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x76d2,	// (0x000950d4) hc_cl_list_double_graphic_heading_pane_g2

0x76e6,	// (0x000950e8) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x76e6,	// (0x000950e8) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab5,	// (0x0009d4b7) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab5,	// (0x0009d4b7) hc_cl_list_double_graphic_heading_pane_g

0x76fa,	// (0x000950fc) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x76fa,	// (0x000950fc) hc_cl_list_double_graphic_heading_pane_t1

0x770f,	// (0x00095111) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x770f,	// (0x00095111) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabc,	// (0x0009d4be) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabc,	// (0x0009d4be) hc_cl_list_double_graphic_heading_pane_t

0x7724,	// (0x00095126) vid4_progress_pane_g1

0x7736,	// (0x00095138) vid4_progress_pane_g2

0xa6c1,	// (0x000980c3) vid4_progress_pane_g3

0xab95,	// (0x00098597) vid4_progress_pane_g4

0x0004,

0xfac1,	// (0x0009d4c3) vid4_progress_pane_g

0xabb3,	// (0x000985b5) vid4_progress_pane_t1

0xabc8,	// (0x000985ca) vid4_progress_pane_t2

0x0002,

0xfacc,	// (0x0009d4ce) vid4_progress_pane_t

0xabf3,	// (0x000985f5) wait_bar_pane_cp07

0xc9f1,	// (0x0009a3f3) blid_firmament_pane_ParamLimits

0xca34,	// (0x0009a436) popup_blid_sat_info2_window_g1

0xca58,	// (0x0009a45a) popup_blid_sat_info2_window_t3

0xca66,	// (0x0009a468) popup_blid_sat_info2_window_t4

0xca74,	// (0x0009a476) popup_blid_sat_info2_window_t5

0xca82,	// (0x0009a484) popup_blid_sat_info2_window_t6

0xca92,	// (0x0009a494) popup_blid_sat_info2_window_t7

0xcaa0,	// (0x0009a4a2) popup_blid_sat_info2_window_t8

0xcaae,	// (0x0009a4b0) popup_blid_sat_info2_window_t9

0xcabc,	// (0x0009a4be) popup_blid_sat_info2_window_t10

0xcb84,	// (0x0009a586) aid_firma_cardinal_ParamLimits

0xcb98,	// (0x0009a59a) blid_firmament_pane_t1_ParamLimits

0xcbaf,	// (0x0009a5b1) blid_firmament_pane_t2_ParamLimits

0xcbc6,	// (0x0009a5c8) blid_firmament_pane_t3_ParamLimits

0xcbdd,	// (0x0009a5df) blid_firmament_pane_t4_ParamLimits

0xf6da,	// (0x0009d0dc) blid_firmament_pane_t_ParamLimits

0xcbf4,	// (0x0009a5f6) blid_sat_info_pane_ParamLimits

0x9a12,	// (0x00097414) main_cam_set_pane_ParamLimits

0x5baa,	// (0x000935ac) aid_size_cell_colour_35_ParamLimits

0x5bca,	// (0x000935cc) aid_size_cell_colour_112_ParamLimits

0x5bea,	// (0x000935ec) aid_size_cell_effect_ParamLimits

0xc7b3,	// (0x0009a1b5) bg_tb_trans_pane_cp02_ParamLimits

0xaef6,	// (0x000988f8) heading_imed_pane_ParamLimits

0x5c0a,	// (0x0009360c) listscroll_imed_pane_ParamLimits

0xbdd5,	// (0x000997d7) popup_call2_audio_first_window_g5_ParamLimits

0xbdd5,	// (0x000997d7) popup_call2_audio_first_window_g5

0x61bb,	// (0x00093bbd) aid_size_touch_image3_arrow_left_ParamLimits

0x61bb,	// (0x00093bbd) aid_size_touch_image3_arrow_left

0x61e7,	// (0x00093be9) aid_size_touch_image3_arrow_right_ParamLimits

0x61e7,	// (0x00093be9) aid_size_touch_image3_arrow_right

0xabde,	// (0x000985e0) vid4_progress_pane_t3

0x5f29,	// (0x0009392b) main_hwr_training_symbol_option_pane_ParamLimits

0x5f29,	// (0x0009392b) main_hwr_training_symbol_option_pane

0xd3f8,	// (0x0009adfa) popup_hwr_training_preview_window_ParamLimits

0xd3f8,	// (0x0009adfa) popup_hwr_training_preview_window

0x5f49,	// (0x0009394b) hwr_training_navi_pane_g5_ParamLimits

0x5f49,	// (0x0009394b) hwr_training_navi_pane_g5

0xd614,	// (0x0009b016) popup_char_count_window

0x9a12,	// (0x00097414) bg_popup_sub_pane_cp20_ParamLimits

0x7197,	// (0x00094b99) list_vitu2_match_list_pane_ParamLimits

0x71a6,	// (0x00094ba8) vitu2_page_scroll_pane_ParamLimits

0x71a6,	// (0x00094ba8) vitu2_page_scroll_pane

0xdafb,	// (0x0009b4fd) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdafb,	// (0x0009b4fd) list_single_hwr_training_symbol_option_pane

0xdb0e,	// (0x0009b510) list_single_hwr_training_symbol_option_pane_g1

0xdb16,	// (0x0009b518) list_single_hwr_training_symbol_option_pane_t1

0xdb24,	// (0x0009b526) bg_button_pane_cp023

0xdb2d,	// (0x0009b52f) bg_button_pane_cp024

0x7774,	// (0x00095176) vitu2_page_scroll_pane_g1

0x777c,	// (0x0009517e) vitu2_page_scroll_pane_g2

0x0001,

0xfad3,	// (0x0009d4d5) vitu2_page_scroll_pane_g

0x7786,	// (0x00095188) vitu2_page_scroll_pane_t1

0xdb60,	// (0x0009b562) popup_char_count_window_g1

0xdb69,	// (0x0009b56b) popup_char_count_window_g2

0xdb72,	// (0x0009b574) popup_char_count_window_g3

0x0002,

0xfad8,	// (0x0009d4da) popup_char_count_window_g

0xdb7b,	// (0x0009b57d) popup_char_count_window_t1

0x99c1,	// (0x000973c3) main_vded2_pane

0xd0ed,	// (0x0009aaef) aid_size_cell_imed_line

0xd0f7,	// (0x0009aaf9) grid_imed_line_width_pane

0xaade,	// (0x000984e0) vid4_indicators_pane_g4

0xdb89,	// (0x0009b58b) cell_imed_line_width_pane_ParamLimits

0xdb89,	// (0x0009b58b) cell_imed_line_width_pane

0xdb9f,	// (0x0009b5a1) cell_imed_line_width_pane_g1

0xd2ef,	// (0x0009acf1) cell_imed_line_width_pane_g2

0x0001,

0xfadf,	// (0x0009d4e1) cell_imed_line_width_pane_g

0x7795,	// (0x00095197) main_vded2_pane_g1_ParamLimits

0x7795,	// (0x00095197) main_vded2_pane_g1

0x77b0,	// (0x000951b2) main_vded2_pane_g2_ParamLimits

0x77b0,	// (0x000951b2) main_vded2_pane_g2

0x0001,

0xfae4,	// (0x0009d4e6) main_vded2_pane_g_ParamLimits

0xfae4,	// (0x0009d4e6) main_vded2_pane_g

0x77c2,	// (0x000951c4) vded2_slider_pane_ParamLimits

0x77c2,	// (0x000951c4) vded2_slider_pane

0x77d2,	// (0x000951d4) aid_size_touch_vded2_end

0x77dc,	// (0x000951de) aid_size_touch_vded2_playhead

0xdba8,	// (0x0009b5aa) aid_size_touch_vded2_start

0xdbb0,	// (0x0009b5b2) vded2_slider_bg_pane

0xdbb9,	// (0x0009b5bb) vded2_slider_pane_g1

0xdbc2,	// (0x0009b5c4) vded2_slider_pane_g2

0x77e6,	// (0x000951e8) vded2_slider_pane_g3

0x0002,

0xfae9,	// (0x0009d4eb) vded2_slider_pane_g

0xdbca,	// (0x0009b5cc) vded2_slider_bg_pane_g1

0xdbd3,	// (0x0009b5d5) vded2_slider_bg_pane_g2

0xdbdc,	// (0x0009b5de) vded2_slider_bg_pane_g3

0x0002,

0xfaf0,	// (0x0009d4f2) vded2_slider_bg_pane_g

0x384d,	// (0x0009124f) aid_postcard_touch_down_pane_ParamLimits

0x384d,	// (0x0009124f) aid_postcard_touch_down_pane

0x3865,	// (0x00091267) aid_postcard_touch_up_pane_ParamLimits

0x3865,	// (0x00091267) aid_postcard_touch_up_pane

0x99c1,	// (0x000973c3) main_blid2_pane

0xc7c1,	// (0x0009a1c3) popup_blid2_search_window

0x99c1,	// (0x000973c3) blid2_gps_pane

0x99c1,	// (0x000973c3) blid2_navig_pane

0x99c1,	// (0x000973c3) blid2_search_pane

0x99c1,	// (0x000973c3) blid2_tripm_pane

0x77f1,	// (0x000951f3) blid2_search_pane_g1_ParamLimits

0x77f1,	// (0x000951f3) blid2_search_pane_g1

0x7804,	// (0x00095206) blid2_search_pane_t1_ParamLimits

0x7804,	// (0x00095206) blid2_search_pane_t1

0x7816,	// (0x00095218) aid_size_cell_blid2_gps_ParamLimits

0x7816,	// (0x00095218) aid_size_cell_blid2_gps

0x782e,	// (0x00095230) blid2_gps_pane_g1_ParamLimits

0x782e,	// (0x00095230) blid2_gps_pane_g1

0x7842,	// (0x00095244) grid_blid2_satellite_pane_ParamLimits

0x7842,	// (0x00095244) grid_blid2_satellite_pane

0x785a,	// (0x0009525c) blid2_navig_pane_g1_ParamLimits

0x785a,	// (0x0009525c) blid2_navig_pane_g1

0x7866,	// (0x00095268) blid2_navig_pane_t1_ParamLimits

0x7866,	// (0x00095268) blid2_navig_pane_t1

0x7881,	// (0x00095283) blid2_navig_pane_t2_ParamLimits

0x7881,	// (0x00095283) blid2_navig_pane_t2

0x0001,

0xfaf7,	// (0x0009d4f9) blid2_navig_pane_t_ParamLimits

0xfaf7,	// (0x0009d4f9) blid2_navig_pane_t

0x789c,	// (0x0009529e) blid2_navig_ring_pane_ParamLimits

0x789c,	// (0x0009529e) blid2_navig_ring_pane

0x78b7,	// (0x000952b9) blid2_speed_pane_ParamLimits

0x78b7,	// (0x000952b9) blid2_speed_pane

0x78c3,	// (0x000952c5) blid2_tripm_pane_g1_ParamLimits

0x78c3,	// (0x000952c5) blid2_tripm_pane_g1

0x78de,	// (0x000952e0) blid2_tripm_pane_g2_ParamLimits

0x78de,	// (0x000952e0) blid2_tripm_pane_g2

0x78f2,	// (0x000952f4) blid2_tripm_pane_g3_ParamLimits

0x78f2,	// (0x000952f4) blid2_tripm_pane_g3

0x7906,	// (0x00095308) blid2_tripm_pane_g4_ParamLimits

0x7906,	// (0x00095308) blid2_tripm_pane_g4

0x791a,	// (0x0009531c) blid2_tripm_pane_g5_ParamLimits

0x791a,	// (0x0009531c) blid2_tripm_pane_g5

0x0005,

0xfafc,	// (0x0009d4fe) blid2_tripm_pane_g_ParamLimits

0xfafc,	// (0x0009d4fe) blid2_tripm_pane_g

0x7940,	// (0x00095342) blid2_tripm_pane_t1_ParamLimits

0x7940,	// (0x00095342) blid2_tripm_pane_t1

0x7959,	// (0x0009535b) blid2_tripm_pane_t2_ParamLimits

0x7959,	// (0x0009535b) blid2_tripm_pane_t2

0x7972,	// (0x00095374) blid2_tripm_pane_t3_ParamLimits

0x7972,	// (0x00095374) blid2_tripm_pane_t3

0x0003,

0xfb09,	// (0x0009d50b) blid2_tripm_pane_t_ParamLimits

0xfb09,	// (0x0009d50b) blid2_tripm_pane_t

0x79b9,	// (0x000953bb) cell_blid2_satellite_pane_ParamLimits

0x79b9,	// (0x000953bb) cell_blid2_satellite_pane

0x79d7,	// (0x000953d9) cell_blid2_satellite_pane_g1

0xdbe5,	// (0x0009b5e7) cell_blid2_satellite_pane_t1

0xcc04,	// (0x0009a606) blid2_speed_pane_g1

0xdbf3,	// (0x0009b5f5) blid2_speed_pane_t1

0xdc01,	// (0x0009b603) blid2_speed_pane_t2

0x0001,

0xfb12,	// (0x0009d514) blid2_speed_pane_t

0xcc04,	// (0x0009a606) blid2_navig_ring_pane_g1

0x79e0,	// (0x000953e2) blid2_navig_ring_pane_g2

0x79e8,	// (0x000953ea) blid2_navig_ring_pane_g3

0x79f0,	// (0x000953f2) blid2_navig_ring_pane_g4

0x79f8,	// (0x000953fa) blid2_navig_ring_pane_g5

0x0004,

0xfb17,	// (0x0009d519) blid2_navig_ring_pane_g

0x99c1,	// (0x000973c3) bg_popup_window_pane_cp011

0xdc0f,	// (0x0009b611) popup_blid2_search_window_g1

0xdc17,	// (0x0009b619) popup_blid2_search_window_t1

0xdc25,	// (0x0009b627) popup_blid2_search_window_t2

0x0001,

0xfb22,	// (0x0009d524) popup_blid2_search_window_t

0xa4f7,	// (0x00097ef9) main_browser_pane_g1

0xa175,	// (0x00097b77) main_browser_pane_ParamLimits

0x9a12,	// (0x00097414) bg_button_pane_cp011_ParamLimits

0x6a07,	// (0x00094409) cell_vitu2_function_pane_g1_ParamLimits

0xc7b3,	// (0x0009a1b5) bg_popup_sub_pane_cp22_ParamLimits

0xff93,	// (0x0008d995) input_focus_pane_cp08_ParamLimits

0x7340,	// (0x00094d42) popup_vitu2_query_button_pane_ParamLimits

0x7340,	// (0x00094d42) popup_vitu2_query_button_pane

0xffaa,	// (0x0008d9ac) popup_vitu2_query_input_button_pane

0xd8a6,	// (0x0009b2a8) popup_vitu2_query_window_g1_ParamLimits

0xffb4,	// (0x0008d9b6) popup_vitu2_query_window_g2_ParamLimits

0xfa23,	// (0x0009d425) popup_vitu2_query_window_g_ParamLimits

0x99c1,	// (0x000973c3) bg_button_pane_cp026

0x7a00,	// (0x00095402) popup_vitu2_query_input_button_pane_g1

0x99c1,	// (0x000973c3) bg_button_pane_cp025

0xdc33,	// (0x0009b635) popup_vitu2_query_button_pane_t1

0x4f71,	// (0x00092973) main_mp3_pane_t6

0x4f7f,	// (0x00092981) popup_slider_window_cp01

0xaa42,	// (0x00098444) cam4_battery_pane

0xaa97,	// (0x00098499) cam4_battery_pane_cp02

0xab8d,	// (0x0009858f) cam4_battery_pane_cp01

0xab8d,	// (0x0009858f) cam4_battery_pane_cp03

0xcc04,	// (0x0009a606) cam4_battery_pane_g1

0xdc41,	// (0x0009b643) cam4_battery_pane_g2

0x0001,

0xfb27,	// (0x0009d529) cam4_battery_pane_g

0xcaca,	// (0x0009a4cc) popup_blid_sat_info2_window_t11

0x3197,	// (0x00090b99) aid_size_touch_mv_arrow_left_ParamLimits

0x31c0,	// (0x00090bc2) aid_size_touch_mv_arrow_right_ParamLimits

0xb2f6,	// (0x00098cf8) navi_pane_g1_ParamLimits

0x31ff,	// (0x00090c01) navi_pane_g2_ParamLimits

0x322d,	// (0x00090c2f) navi_pane_g3_ParamLimits

0xf3ec,	// (0x0009cdee) navi_pane_g_ParamLimits

0x3287,	// (0x00090c89) navi_pane_mv_t1_ParamLimits

0x5c16,	// (0x00093618) grid_imed_effect_pane_ParamLimits

0x1d3c,	// (0x0008f73e) aid_placing_vt_slider_lsc

0xa442,	// (0x00097e44) aid_placing_vt_slider_prt

0x9a12,	// (0x00097414) bg_tb_trans_pane_cp01_ParamLimits

0xcd54,	// (0x0009a756) popup_image_details_window_g1_ParamLimits

0xcd67,	// (0x0009a769) popup_image_details_window_g2_ParamLimits

0xcd7c,	// (0x0009a77e) popup_image_details_window_g3_ParamLimits

0xcd7c,	// (0x0009a77e) popup_image_details_window_g3

0xf71f,	// (0x0009d121) popup_image_details_window_g_ParamLimits

0xcd90,	// (0x0009a792) popup_image_details_window_t1_ParamLimits

0xcda2,	// (0x0009a7a4) popup_image_details_window_t2_ParamLimits

0xcdbb,	// (0x0009a7bd) popup_image_details_window_t3_ParamLimits

0xcdcf,	// (0x0009a7d1) popup_image_details_window_t4_ParamLimits

0xcdea,	// (0x0009a7ec) popup_image_details_window_t5_ParamLimits

0xf726,	// (0x0009d128) popup_image_details_window_t_ParamLimits

0x7630,	// (0x00095032) cl_header_name_pane_ParamLimits

0x7630,	// (0x00095032) cl_header_name_pane

0x7a08,	// (0x0009540a) cl_header_name_pane_t1_ParamLimits

0x7a08,	// (0x0009540a) cl_header_name_pane_t1

0x7a29,	// (0x0009542b) cl_header_name_pane_t2_ParamLimits

0x7a29,	// (0x0009542b) cl_header_name_pane_t2

0x7a6b,	// (0x0009546d) cl_header_name_pane_t3_ParamLimits

0x7a6b,	// (0x0009546d) cl_header_name_pane_t3

0x0002,

0xfb2c,	// (0x0009d52e) cl_header_name_pane_t_ParamLimits

0xfb2c,	// (0x0009d52e) cl_header_name_pane_t

0x3258,	// (0x00090c5a) navi_pane_mv_g2_ParamLimits

0xd5ee,	// (0x0009aff0) field_vitu2_entry_pane_g1_ParamLimits

0xd5fa,	// (0x0009affc) field_vitu2_entry_pane_g2_ParamLimits

0xd606,	// (0x0009b008) field_vitu2_entry_pane_g3_ParamLimits

0xd606,	// (0x0009b008) field_vitu2_entry_pane_g3

0xf922,	// (0x0009d324) field_vitu2_entry_pane_g_ParamLimits

0xab13,	// (0x00098515) cell_vitu2_itu_pane_g1_ParamLimits

0x699b,	// (0x0009439d) cell_vitu2_itu_pane_g2_ParamLimits

0x699b,	// (0x0009439d) cell_vitu2_itu_pane_g2

0x0001,

0xf92e,	// (0x0009d330) cell_vitu2_itu_pane_g_ParamLimits

0xf92e,	// (0x0009d330) cell_vitu2_itu_pane_g

0x9a12,	// (0x00097414) bg_vkb2_func_pane_cp05_ParamLimits

0x9a12,	// (0x00097414) bg_vkb2_func_pane_cp05

0x9a12,	// (0x00097414) bg_vkb2_func_pane_cp03

0x9a12,	// (0x00097414) bg_vkb2_func_pane_cp04

0x9a12,	// (0x00097414) bg_vkb2_func_pane_cp10_ParamLimits

0x9a12,	// (0x00097414) bg_vkb2_func_pane_cp10

0x00d3,	// (0x0008dad5) bg_vkb2_func_pane_cp08

0x75da,	// (0x00094fdc) bg_vkb2_func_pane_cp06

0x75e8,	// (0x00094fea) bg_vkb2_func_pane_cp07

0xdb36,	// (0x0009b538) bg_vkb2_func_pane_cp11_ParamLimits

0xdb36,	// (0x0009b538) bg_vkb2_func_pane_cp11

0xdb4b,	// (0x0009b54d) bg_vkb2_func_pane_cp12_ParamLimits

0xdb4b,	// (0x0009b54d) bg_vkb2_func_pane_cp12

0x99c1,	// (0x000973c3) bg_vkb2_func_pane_cp09

0xd626,	// (0x0009b028) bg_vkb2_func_pane_g1

0xacbd,	// (0x000986bf) bg_vkb2_func_pane_g2

0xd62e,	// (0x0009b030) bg_vkb2_func_pane_g3

0xd636,	// (0x0009b038) bg_vkb2_func_pane_g4

0xd86b,	// (0x0009b26d) bg_vkb2_func_pane_g5

0xd64e,	// (0x0009b050) bg_vkb2_func_pane_g6

0xd656,	// (0x0009b058) bg_vkb2_func_pane_g7

0xd646,	// (0x0009b048) bg_vkb2_func_pane_g8

0xac9d,	// (0x0009869f) bg_vkb2_func_pane_g9

0x0008,

0xfb33,	// (0x0009d535) bg_vkb2_func_pane_g

0x792e,	// (0x00095330) blid2_tripm_pane_g6_ParamLimits

0x792e,	// (0x00095330) blid2_tripm_pane_g6

0xd4b0,	// (0x0009aeb2) mp4_progress_pane_g1

0x79a5,	// (0x000953a7) blid2_tripm_values_pane_ParamLimits

0x79a5,	// (0x000953a7) blid2_tripm_values_pane

0x7a9c,	// (0x0009549e) blid2_tripm_values_pane_t1

0x7aaa,	// (0x000954ac) blid2_tripm_values_pane_t2

0x7ab8,	// (0x000954ba) blid2_tripm_values_pane_t3

0x7ac6,	// (0x000954c8) blid2_tripm_values_pane_t4

0x7ad4,	// (0x000954d6) blid2_tripm_values_pane_t5

0x7ae2,	// (0x000954e4) blid2_tripm_values_pane_t6

0x7af0,	// (0x000954f2) blid2_tripm_values_pane_t7

0x7afe,	// (0x00095500) blid2_tripm_values_pane_t8

0x7b0c,	// (0x0009550e) blid2_tripm_values_pane_t9

0x0008,

0xfb46,	// (0x0009d548) blid2_tripm_values_pane_t

0x1d79,	// (0x0008f77b) call_video_pane_t1_ParamLimits

0x1d93,	// (0x0008f795) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0009cc70) call_video_pane_t_ParamLimits

0xfd9d,	// (0x0008d79f) msg_header_pane_g1_ParamLimits

0xb519,	// (0x00098f1b) msg_header_pane_g2_ParamLimits

0xb519,	// (0x00098f1b) msg_header_pane_g2

0x0001,

0xf48f,	// (0x0009ce91) msg_header_pane_g_ParamLimits

0xf48f,	// (0x0009ce91) msg_header_pane_g

0xa175,	// (0x00097b77) main_clock2_pane_ParamLimits

0x58fd,	// (0x000932ff) grid_clock2_toolbar_pane_ParamLimits

0x58fd,	// (0x000932ff) grid_clock2_toolbar_pane

0x58fd,	// (0x000932ff) listscroll_clock2_pane_ParamLimits

0x58fd,	// (0x000932ff) listscroll_clock2_pane

0x59f4,	// (0x000933f6) main_clock2_pane_t3_ParamLimits

0x59f4,	// (0x000933f6) main_clock2_pane_t3

0x5a18,	// (0x0009341a) main_clock2_pane_t4_ParamLimits

0x5a18,	// (0x0009341a) main_clock2_pane_t4

0xdc4b,	// (0x0009b64d) cell_clock2_toolbar_pane

0xdc53,	// (0x0009b655) cell_clock2_toolbar_pane_cp01

0xdc53,	// (0x0009b655) cell_clock2_toolbar_pane_cp02

0xdc5b,	// (0x0009b65d) cell_clock2_toolbar_pane_cp03

0xdc63,	// (0x0009b665) list_clock2_pane

0xb25c,	// (0x00098c5e) scroll_pane_cp10

0xdc6b,	// (0x0009b66d) list_single_clock2_pane_ParamLimits

0xdc6b,	// (0x0009b66d) list_single_clock2_pane

0xa3a1,	// (0x00097da3) list_highlight_pane_cp08

0xdc78,	// (0x0009b67a) list_single_clock2_pane_t1

0xdc86,	// (0x0009b688) list_single_clock2_pane_t2

0x0001,

0xfb59,	// (0x0009d55b) list_single_clock2_pane_t

0x99c1,	// (0x000973c3) bg_button_pane_cp10

0xdc94,	// (0x0009b696) cell_clock2_toolbar_pane_g1

0x37d9,	// (0x000911db) aid_main_viewer_pane_g1_ParamLimits

0x37d9,	// (0x000911db) aid_main_viewer_pane_g1

0x37e7,	// (0x000911e9) aid_main_viewer_pane_g2_ParamLimits

0x37e7,	// (0x000911e9) aid_main_viewer_pane_g2

0x37f5,	// (0x000911f7) aid_main_viewer_pane_g3_ParamLimits

0x37f5,	// (0x000911f7) aid_main_viewer_pane_g3

0x3804,	// (0x00091206) aid_main_viewer_pane_g4_ParamLimits

0x3804,	// (0x00091206) aid_main_viewer_pane_g4

0x0003,

0xf4a0,	// (0x0009cea2) aid_main_viewer_pane_g_ParamLimits

0xf4a0,	// (0x0009cea2) aid_main_viewer_pane_g

0x4157,	// (0x00091b59) main_calc_pane_ParamLimits

0x416b,	// (0x00091b6d) main_dialer2_pane_ParamLimits

0x99c1,	// (0x000973c3) main_cam6_pane

0x99c1,	// (0x000973c3) main_vid6_pane

0x5909,	// (0x0009330b) listscroll_gen_pane_cp06_ParamLimits

0x5909,	// (0x0009330b) listscroll_gen_pane_cp06

0x5a3b,	// (0x0009343d) main_clock2_pane_t5_ParamLimits

0x5a3b,	// (0x0009343d) main_clock2_pane_t5

0x5a9b,	// (0x0009349d) aid_call2_pane_cp10_ParamLimits

0x5aad,	// (0x000934af) aid_call_pane_cp10_ParamLimits

0xb2cb,	// (0x00098ccd) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2cb,	// (0x00098ccd) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5abf,	// (0x000934c1) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5abf,	// (0x000934c1) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2cb,	// (0x00098ccd) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7db,	// (0x0009d1dd) popup_clock_analogue_window_cp10_g_ParamLimits

0x5ad5,	// (0x000934d7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6168,	// (0x00093b6a) cell_dialer2_keypad_pane_g2_ParamLimits

0x6168,	// (0x00093b6a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c1,	// (0x0009d2c3) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c1,	// (0x0009d2c3) cell_dialer2_keypad_pane_g

0x6184,	// (0x00093b86) cell_dialer2_keypad_pane_t1

0x6d32,	// (0x00094734) main_cset_text2_pane_ParamLimits

0x6d32,	// (0x00094734) main_cset_text2_pane

0xda9e,	// (0x0009b4a0) area_vitu2_query_pane_g1_ParamLimits

0x0098,	// (0x0008da9a) area_vitu2_query_pane_g2_ParamLimits

0xfa76,	// (0x0009d478) area_vitu2_query_pane_g_ParamLimits

0x75b6,	// (0x00094fb8) area_vitu2_query_pane_t7_ParamLimits

0x75b6,	// (0x00094fb8) area_vitu2_query_pane_t7

0x75da,	// (0x00094fdc) bg_button_pane_cp018_ParamLimits

0x75e8,	// (0x00094fea) bg_button_pane_cp021_ParamLimits

0x00d3,	// (0x0008dad5) bg_button_pane_cp022_ParamLimits

0x00d3,	// (0x0008dad5) bg_vkb2_func_pane_cp08_ParamLimits

0x75da,	// (0x00094fdc) bg_vkb2_func_pane_cp06_ParamLimits

0x75e8,	// (0x00094fea) bg_vkb2_func_pane_cp07_ParamLimits

0x00e4,	// (0x0008dae6) input_focus_pane_cp09_ParamLimits

0xac0f,	// (0x00098611) cam6_autofocus_pane_ParamLimits

0xac0f,	// (0x00098611) cam6_autofocus_pane

0x7b1a,	// (0x0009551c) cam6_image_uncrop_pane_ParamLimits

0x7b1a,	// (0x0009551c) cam6_image_uncrop_pane

0x7b29,	// (0x0009552b) cam6_indi_pane_ParamLimits

0x7b29,	// (0x0009552b) cam6_indi_pane

0x7b3f,	// (0x00095541) cam6_mode_pane_ParamLimits

0x7b3f,	// (0x00095541) cam6_mode_pane

0x7b51,	// (0x00095553) cam6_timer_pane_ParamLimits

0x7b51,	// (0x00095553) cam6_timer_pane

0x7b5d,	// (0x0009555f) cam6_zoom_pane_ParamLimits

0x7b5d,	// (0x0009555f) cam6_zoom_pane

0x7b6b,	// (0x0009556d) cam6_mode_pane_g1_ParamLimits

0x7b6b,	// (0x0009556d) cam6_mode_pane_g1

0x7b7b,	// (0x0009557d) cam6_mode_pane_g2_ParamLimits

0x7b7b,	// (0x0009557d) cam6_mode_pane_g2

0x7b8b,	// (0x0009558d) cam6_mode_pane_g3_ParamLimits

0x7b8b,	// (0x0009558d) cam6_mode_pane_g3

0x7b9b,	// (0x0009559d) cam6_mode_pane_g4_ParamLimits

0x7b9b,	// (0x0009559d) cam6_mode_pane_g4

0x0003,

0xfb5e,	// (0x0009d560) cam6_mode_pane_g_ParamLimits

0xfb5e,	// (0x0009d560) cam6_mode_pane_g

0xdc9c,	// (0x0009b69e) bg_tb_trans_pane_cp08_ParamLimits

0xdc9c,	// (0x0009b69e) bg_tb_trans_pane_cp08

0xdcaa,	// (0x0009b6ac) cam6_battery_pane_ParamLimits

0xdcaa,	// (0x0009b6ac) cam6_battery_pane

0xdcc0,	// (0x0009b6c2) cam6_indi_pane_g1_ParamLimits

0xdcc0,	// (0x0009b6c2) cam6_indi_pane_g1

0xdcd2,	// (0x0009b6d4) cam6_indi_pane_g2_ParamLimits

0xdcd2,	// (0x0009b6d4) cam6_indi_pane_g2

0xdce4,	// (0x0009b6e6) cam6_indi_pane_g3_ParamLimits

0xdce4,	// (0x0009b6e6) cam6_indi_pane_g3

0x0002,

0xfb67,	// (0x0009d569) cam6_indi_pane_g_ParamLimits

0xfb67,	// (0x0009d569) cam6_indi_pane_g

0xdcf6,	// (0x0009b6f8) cam6_indi_pane_t1_ParamLimits

0xdcf6,	// (0x0009b6f8) cam6_indi_pane_t1

0x6745,	// (0x00094147) cam6_autofocus_pane_g1

0x674d,	// (0x0009414f) cam6_autofocus_pane_g2

0x6755,	// (0x00094157) cam6_autofocus_pane_g3

0x675d,	// (0x0009415f) cam6_autofocus_pane_g4

0x0003,

0xfb6e,	// (0x0009d570) cam6_autofocus_pane_g

0xdd1c,	// (0x0009b71e) cam6_timer_pane_g1

0xdd24,	// (0x0009b726) cam6_timer_pane_t1

0xdd32,	// (0x0009b734) cam6_zoom_cont_pane

0xdd3a,	// (0x0009b73c) cam6_zoom_pane_g1

0xdd42,	// (0x0009b744) cam6_zoom_pane_g2

0x7bab,	// (0x000955ad) cam6_zoom_pane_g3

0x0002,

0xfb77,	// (0x0009d579) cam6_zoom_pane_g

0xcc04,	// (0x0009a606) cam6_battery_pane_g1

0xcc04,	// (0x0009a606) cam6_battery_pane_g2

0x0001,

0xf6e3,	// (0x0009d0e5) cam6_battery_pane_g

0xdd4a,	// (0x0009b74c) cam6_zoom_cont_pane_g1

0xdd53,	// (0x0009b755) cam6_zoom_cont_pane_g2

0xdd5c,	// (0x0009b75e) cam6_zoom_cont_pane_g3

0x0002,

0xfb7e,	// (0x0009d580) cam6_zoom_cont_pane_g

0x7bc8,	// (0x000955ca) cam6_mode_pane_cp_ParamLimits

0x7bc8,	// (0x000955ca) cam6_mode_pane_cp

0x7b5d,	// (0x0009555f) cam6_zoom_pane_cp_ParamLimits

0x7b5d,	// (0x0009555f) cam6_zoom_pane_cp

0x7bda,	// (0x000955dc) vid6_image_uncrop_cif_pane_ParamLimits

0x7bda,	// (0x000955dc) vid6_image_uncrop_cif_pane

0x7bea,	// (0x000955ec) vid6_image_uncrop_nhd_pane_ParamLimits

0x7bea,	// (0x000955ec) vid6_image_uncrop_nhd_pane

0x7b1a,	// (0x0009551c) vid6_image_uncrop_vga_pane_ParamLimits

0x7b1a,	// (0x0009551c) vid6_image_uncrop_vga_pane

0x7bf9,	// (0x000955fb) vid6_image_uncrop_wvga_pane_ParamLimits

0x7bf9,	// (0x000955fb) vid6_image_uncrop_wvga_pane

0x7c08,	// (0x0009560a) vid6_indi_pane_ParamLimits

0x7c08,	// (0x0009560a) vid6_indi_pane

0xdc9c,	// (0x0009b69e) bg_tb_trans_pane_cp09_ParamLimits

0xdc9c,	// (0x0009b69e) bg_tb_trans_pane_cp09

0xdd74,	// (0x0009b776) cam6_battery_pane_cp_ParamLimits

0xdd74,	// (0x0009b776) cam6_battery_pane_cp

0xdd80,	// (0x0009b782) vid6_indi_pane_g1_ParamLimits

0xdd80,	// (0x0009b782) vid6_indi_pane_g1

0xdd92,	// (0x0009b794) vid6_indi_pane_g2_ParamLimits

0xdd92,	// (0x0009b794) vid6_indi_pane_g2

0xdda4,	// (0x0009b7a6) vid6_indi_pane_g3_ParamLimits

0xdda4,	// (0x0009b7a6) vid6_indi_pane_g3

0xddbb,	// (0x0009b7bd) vid6_indi_pane_g4_ParamLimits

0xddbb,	// (0x0009b7bd) vid6_indi_pane_g4

0xddd2,	// (0x0009b7d4) vid6_indi_pane_g5_ParamLimits

0xddd2,	// (0x0009b7d4) vid6_indi_pane_g5

0x0004,

0xfb85,	// (0x0009d587) vid6_indi_pane_g_ParamLimits

0xfb85,	// (0x0009d587) vid6_indi_pane_g

0xddec,	// (0x0009b7ee) vid6_indi_pane_t1_ParamLimits

0xddec,	// (0x0009b7ee) vid6_indi_pane_t1

0xde02,	// (0x0009b804) vid6_indi_pane_t2_ParamLimits

0xde02,	// (0x0009b804) vid6_indi_pane_t2

0xde2a,	// (0x0009b82c) vid6_indi_pane_t3_ParamLimits

0xde2a,	// (0x0009b82c) vid6_indi_pane_t3

0xde52,	// (0x0009b854) vid6_indi_pane_t4_ParamLimits

0xde52,	// (0x0009b854) vid6_indi_pane_t4

0x0003,

0xfb90,	// (0x0009d592) vid6_indi_pane_t_ParamLimits

0xfb90,	// (0x0009d592) vid6_indi_pane_t

0xde76,	// (0x0009b878) wait_bar_pane_cp08

0x7c20,	// (0x00095622) main_cset_text2_pane_t1_ParamLimits

0x7c20,	// (0x00095622) main_cset_text2_pane_t1

0x7bb3,	// (0x000955b5) listscroll_gen_pane_cp06_t1_ParamLimits

0x7bb3,	// (0x000955b5) listscroll_gen_pane_cp06_t1

0x99c1,	// (0x000973c3) main_cam6_set_pane

0xce34,	// (0x0009a836) bg_tb_trans_pane_cp06_ParamLimits

0xaa4a,	// (0x0009844c) cam4_indicators_pane_g1_ParamLimits

0xaa5b,	// (0x0009845d) cam4_indicators_pane_g2_ParamLimits

0xf8fe,	// (0x0009d300) cam4_indicators_pane_g_ParamLimits

0xaa73,	// (0x00098475) cam4_indicators_pane_t1_ParamLimits

0x9a12,	// (0x00097414) bg_tb_trans_pane_cp07_ParamLimits

0xaaa1,	// (0x000984a3) vid4_indicators_pane_g1_ParamLimits

0xaab7,	// (0x000984b9) vid4_indicators_pane_g2_ParamLimits

0xaacb,	// (0x000984cd) vid4_indicators_pane_g3_ParamLimits

0xaade,	// (0x000984e0) vid4_indicators_pane_g4_ParamLimits

0xf910,	// (0x0009d312) vid4_indicators_pane_g_ParamLimits

0xaafc,	// (0x000984fe) vid4_indicators_pane_t1_ParamLimits

0x7724,	// (0x00095126) vid4_progress_pane_g1_ParamLimits

0x7736,	// (0x00095138) vid4_progress_pane_g2_ParamLimits

0xa6c1,	// (0x000980c3) vid4_progress_pane_g3_ParamLimits

0xab95,	// (0x00098597) vid4_progress_pane_g4_ParamLimits

0xfac1,	// (0x0009d4c3) vid4_progress_pane_g_ParamLimits

0xabb3,	// (0x000985b5) vid4_progress_pane_t1_ParamLimits

0xabc8,	// (0x000985ca) vid4_progress_pane_t2_ParamLimits

0xabde,	// (0x000985e0) vid4_progress_pane_t3_ParamLimits

0xfacc,	// (0x0009d4ce) vid4_progress_pane_t_ParamLimits

0xabf3,	// (0x000985f5) wait_bar_pane_cp07_ParamLimits

0x7c3e,	// (0x00095640) main_cam6_set_pane_g2_ParamLimits

0x7c3e,	// (0x00095640) main_cam6_set_pane_g2

0x7c64,	// (0x00095666) main_cset6_listscroll_pane_ParamLimits

0x7c64,	// (0x00095666) main_cset6_listscroll_pane

0x7c82,	// (0x00095684) main_cset6_slider_pane_ParamLimits

0x7c82,	// (0x00095684) main_cset6_slider_pane

0x7c98,	// (0x0009569a) main_cset6_text2_pane_ParamLimits

0x7c98,	// (0x0009569a) main_cset6_text2_pane

0xde85,	// (0x0009b887) main_cset6_text_pane

0xde8d,	// (0x0009b88f) main_cset_list_pane_copy1_ParamLimits

0xde8d,	// (0x0009b88f) main_cset_list_pane_copy1

0xde9d,	// (0x0009b89f) scroll_pane_cp028_copy1

0x2e14,	// (0x00090816) cset_list_set_pane_copy1

0x7ca6,	// (0x000956a8) aid_position_infowindow_above_copy1

0x7cae,	// (0x000956b0) aid_position_infowindow_below_copy1

0x7cb6,	// (0x000956b8) cset_list_set_pane_g1_copy1

0x011b,	// (0x0008db1d) cset_list_set_pane_g3_copy1_ParamLimits

0x011b,	// (0x0008db1d) cset_list_set_pane_g3_copy1

0x012a,	// (0x0008db2c) cset_list_set_pane_t1_copy1_ParamLimits

0x012a,	// (0x0008db2c) cset_list_set_pane_t1_copy1

0x9a12,	// (0x00097414) list_highlight_pane_cp021_copy1_ParamLimits

0x9a12,	// (0x00097414) list_highlight_pane_cp021_copy1

0xdea6,	// (0x0009b8a8) cset6_slider_pane_ParamLimits

0xdea6,	// (0x0009b8a8) cset6_slider_pane

0xded2,	// (0x0009b8d4) main_cset6_slider_pane_g1_ParamLimits

0xded2,	// (0x0009b8d4) main_cset6_slider_pane_g1

0x7cbe,	// (0x000956c0) main_cset6_slider_pane_g2_ParamLimits

0x7cbe,	// (0x000956c0) main_cset6_slider_pane_g2

0xdefa,	// (0x0009b8fc) main_cset6_slider_pane_g3_ParamLimits

0xdefa,	// (0x0009b8fc) main_cset6_slider_pane_g3

0x7ce6,	// (0x000956e8) main_cset6_slider_pane_g4_ParamLimits

0x7ce6,	// (0x000956e8) main_cset6_slider_pane_g4

0x7cf2,	// (0x000956f4) main_cset6_slider_pane_g5_ParamLimits

0x7cf2,	// (0x000956f4) main_cset6_slider_pane_g5

0xd759,	// (0x0009b15b) main_cset6_slider_pane_g7_ParamLimits

0xd759,	// (0x0009b15b) main_cset6_slider_pane_g7

0xd765,	// (0x0009b167) main_cset6_slider_pane_g8_ParamLimits

0xd765,	// (0x0009b167) main_cset6_slider_pane_g8

0x6de1,	// (0x000947e3) main_cset6_slider_pane_g9_ParamLimits

0x6de1,	// (0x000947e3) main_cset6_slider_pane_g9

0x6ded,	// (0x000947ef) main_cset6_slider_pane_g10_ParamLimits

0x6ded,	// (0x000947ef) main_cset6_slider_pane_g10

0x6df9,	// (0x000947fb) main_cset6_slider_pane_g11_ParamLimits

0x6df9,	// (0x000947fb) main_cset6_slider_pane_g11

0x6e05,	// (0x00094807) main_cset6_slider_pane_g12_ParamLimits

0x6e05,	// (0x00094807) main_cset6_slider_pane_g12

0x6e11,	// (0x00094813) main_cset6_slider_pane_g13_ParamLimits

0x6e11,	// (0x00094813) main_cset6_slider_pane_g13

0x6e1d,	// (0x0009481f) main_cset6_slider_pane_g14_ParamLimits

0x6e1d,	// (0x0009481f) main_cset6_slider_pane_g14

0x7d00,	// (0x00095702) main_cset6_slider_pane_g15_ParamLimits

0x7d00,	// (0x00095702) main_cset6_slider_pane_g15

0x6e41,	// (0x00094843) main_cset6_slider_pane_g16_ParamLimits

0x6e41,	// (0x00094843) main_cset6_slider_pane_g16

0x6e4f,	// (0x00094851) main_cset6_slider_pane_g17_ParamLimits

0x6e4f,	// (0x00094851) main_cset6_slider_pane_g17

0x0011,

0xfb99,	// (0x0009d59b) main_cset6_slider_pane_g_ParamLimits

0xfb99,	// (0x0009d59b) main_cset6_slider_pane_g

0xdf06,	// (0x0009b908) main_cset6_slider_pane_t1_ParamLimits

0xdf06,	// (0x0009b908) main_cset6_slider_pane_t1

0x7d30,	// (0x00095732) main_cset6_slider_pane_t2_ParamLimits

0x7d30,	// (0x00095732) main_cset6_slider_pane_t2

0x7d5b,	// (0x0009575d) main_cset6_slider_pane_t3_ParamLimits

0x7d5b,	// (0x0009575d) main_cset6_slider_pane_t3

0x7d86,	// (0x00095788) main_cset6_slider_pane_t4_ParamLimits

0x7d86,	// (0x00095788) main_cset6_slider_pane_t4

0x7db1,	// (0x000957b3) main_cset6_slider_pane_t5_ParamLimits

0x7db1,	// (0x000957b3) main_cset6_slider_pane_t5

0xdf47,	// (0x0009b949) main_cset6_slider_pane_t7_ParamLimits

0xdf47,	// (0x0009b949) main_cset6_slider_pane_t7

0x7dde,	// (0x000957e0) main_cset6_slider_pane_t8_ParamLimits

0x7dde,	// (0x000957e0) main_cset6_slider_pane_t8

0x7e02,	// (0x00095804) main_cset6_slider_pane_t9_ParamLimits

0x7e02,	// (0x00095804) main_cset6_slider_pane_t9

0x7e26,	// (0x00095828) main_cset6_slider_pane_t10_ParamLimits

0x7e26,	// (0x00095828) main_cset6_slider_pane_t10

0x7e4a,	// (0x0009584c) main_cset6_slider_pane_t11_ParamLimits

0x7e4a,	// (0x0009584c) main_cset6_slider_pane_t11

0xdf7d,	// (0x0009b97f) main_cset6_slider_pane_t14_ParamLimits

0xdf7d,	// (0x0009b97f) main_cset6_slider_pane_t14

0xdfb6,	// (0x0009b9b8) main_cset6_slider_pane_t15_ParamLimits

0xdfb6,	// (0x0009b9b8) main_cset6_slider_pane_t15

0x000b,

0xfbbe,	// (0x0009d5c0) main_cset6_slider_pane_t_ParamLimits

0xfbbe,	// (0x0009d5c0) main_cset6_slider_pane_t

0xd81d,	// (0x0009b21f) cset_slider_pane_g1_copy1

0xd826,	// (0x0009b228) cset_slider_pane_g2_copy1

0xd82f,	// (0x0009b231) cset_slider_pane_g3_copy1

0x99c1,	// (0x000973c3) bg_popup_sub_pane_cp011_copy1

0xdfef,	// (0x0009b9f1) main_cset_text_pane_g1_copy1

0xd8ba,	// (0x0009b2bc) main_cset_text_pane_t1_copy1

0xd8c8,	// (0x0009b2ca) main_cset_text_pane_t2_copy1

0xd8d6,	// (0x0009b2d8) main_cset_text_pane_t3_copy1

0xd8e4,	// (0x0009b2e6) main_cset_text_pane_t4_copy1

0xd8f2,	// (0x0009b2f4) main_cset_text_pane_t5_copy1

0xdff7,	// (0x0009b9f9) main_cset_text_pane_t6_copy1

0xe005,	// (0x0009ba07) main_cset_text_pane_t7_copy1

0x7c20,	// (0x00095622) main_cset_text2_pane_t1_copy1

0x9a12,	// (0x00097414) main_ncimui_pane

0x43f9,	// (0x00091dfb) popup_query_ncimui_window_ParamLimits

0x43f9,	// (0x00091dfb) popup_query_ncimui_window

0xa795,	// (0x00098197) field_cale_ev2_pane_g4_ParamLimits

0xa795,	// (0x00098197) field_cale_ev2_pane_g4

0x603a,	// (0x00093a3c) cell_video_dialer_keypad_pane_g2_ParamLimits

0x603a,	// (0x00093a3c) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89c,	// (0x0009d29e) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89c,	// (0x0009d29e) cell_video_dialer_keypad_pane_g

0x6052,	// (0x00093a54) cell_video_dialer_keypad_pane_t1

0x99c1,	// (0x000973c3) bg_popup_window_pane_cp012

0xb148,	// (0x00098b4a) heading_pane_cp06

0xe031,	// (0x0009ba33) ncim_query_content_pane

0x99c1,	// (0x000973c3) bg_popup_heading_pane_cp01

0xe039,	// (0x0009ba3b) ncim_heading_pane_t1

0xe047,	// (0x0009ba49) ncim_indicator_popup_pane

0xe059,	// (0x0009ba5b) ncim_query_button_pane

0xe06f,	// (0x0009ba71) ncim_query_content_pane_t1

0xe081,	// (0x0009ba83) ncim_query_content_pane_t2

0x0005,

0xfc02,	// (0x0009d604) ncim_query_content_pane_t

0xe0bb,	// (0x0009babd) ncim_query_list_pane

0xe0cd,	// (0x0009bacf) ncim_query_popup_pane

0xe047,	// (0x0009ba49) ncim_indicator_popup_pane_ParamLimits

0x7f96,	// (0x00095998) ncim_query_content_pane_g1_ParamLimits

0x7f96,	// (0x00095998) ncim_query_content_pane_g1

0xe06f,	// (0x0009ba71) ncim_query_content_pane_t1_ParamLimits

0xe081,	// (0x0009ba83) ncim_query_content_pane_t2_ParamLimits

0x7fa2,	// (0x000959a4) ncim_query_content_pane_t3_ParamLimits

0x7fa2,	// (0x000959a4) ncim_query_content_pane_t3

0x7fca,	// (0x000959cc) ncim_query_content_pane_t4_ParamLimits

0x7fca,	// (0x000959cc) ncim_query_content_pane_t4

0x7ff2,	// (0x000959f4) ncim_query_content_pane_t5_ParamLimits

0x7ff2,	// (0x000959f4) ncim_query_content_pane_t5

0xe093,	// (0x0009ba95) ncim_query_content_pane_t6_ParamLimits

0xe093,	// (0x0009ba95) ncim_query_content_pane_t6

0xfc02,	// (0x0009d604) ncim_query_content_pane_t_ParamLimits

0xe0bb,	// (0x0009babd) ncim_query_list_pane_ParamLimits

0xe0cd,	// (0x0009bacf) ncim_query_popup_pane_ParamLimits

0xe0e1,	// (0x0009bae3) wait_bar_pane_cp04

0x99c1,	// (0x000973c3) input_focus_pane_cp011

0xe0e9,	// (0x0009baeb) ncim_query_popup_pane_t1

0xe0f7,	// (0x0009baf9) ncim_list_query_list_pane_ParamLimits

0xe0f7,	// (0x0009baf9) ncim_list_query_list_pane

0x99c1,	// (0x000973c3) bg_button_pane_cp027

0xe10a,	// (0x0009bb0c) ncim_query_button_pane_g1

0x99c1,	// (0x000973c3) list_highlight_pane_cp012

0xe114,	// (0x0009bb16) ncim_list_query_list_pane_g1

0xe11c,	// (0x0009bb1e) ncim_list_query_list_pane_t1

0xaa67,	// (0x00098469) cam4_indicators_pane_g3_ParamLimits

0xaa67,	// (0x00098469) cam4_indicators_pane_g3

0xaaea,	// (0x000984ec) vid4_indicators_pane_g5_ParamLimits

0xaaea,	// (0x000984ec) vid4_indicators_pane_g5

0xaba4,	// (0x000985a6) vid4_progress_pane_g5_ParamLimits

0xaba4,	// (0x000985a6) vid4_progress_pane_g5

0x7e84,	// (0x00095886) main_ncimui_pane_g1

0x7eea,	// (0x000958ec) ncimui_group_query_pane_ParamLimits

0x7eea,	// (0x000958ec) ncimui_group_query_pane

0x7f32,	// (0x00095934) ncimui_list_pane_ParamLimits

0x7f32,	// (0x00095934) ncimui_list_pane

0x7f59,	// (0x0009595b) ncimui_text_pane_ParamLimits

0x7f59,	// (0x0009595b) ncimui_text_pane

0x801a,	// (0x00095a1c) ncimui_text_pane_t1_ParamLimits

0x801a,	// (0x00095a1c) ncimui_text_pane_t1

0xe12a,	// (0x0009bb2c) ncimui_list_single_graphic_pane_ParamLimits

0xe12a,	// (0x0009bb2c) ncimui_list_single_graphic_pane

0x8038,	// (0x00095a3a) ncimui_query_pane_ParamLimits

0x8038,	// (0x00095a3a) ncimui_query_pane

0x99c1,	// (0x000973c3) list_highlight_pane_cp013

0xe13a,	// (0x0009bb3c) ncim_list_query_list_pane_t1_copy1

0xe114,	// (0x0009bb16) ncim_list_single_graphic_pane_g1

0xe148,	// (0x0009bb4a) ncim_query_button_pane_cp01

0xe154,	// (0x0009bb56) ncim_query_entry_pane_ParamLimits

0xe154,	// (0x0009bb56) ncim_query_entry_pane

0xe167,	// (0x0009bb69) ncimui_query_pane_g1

0xe173,	// (0x0009bb75) ncimui_query_pane_t1_ParamLimits

0xe173,	// (0x0009bb75) ncimui_query_pane_t1

0x9a12,	// (0x00097414) input_focus_pane_cp012

0xe18c,	// (0x0009bb8e) ncim_query_entry_pane_t1

0xa175,	// (0x00097b77) main_im_pane_ParamLimits

0x9a12,	// (0x00097414) main_mobtv_pane_ParamLimits

0x9a12,	// (0x00097414) main_mobtv_pane

0x7d18,	// (0x0009571a) main_cset6_slider_pane_g18_ParamLimits

0x7d18,	// (0x0009571a) main_cset6_slider_pane_g18

0x7d24,	// (0x00095726) main_cset6_slider_pane_g19_ParamLimits

0x7d24,	// (0x00095726) main_cset6_slider_pane_g19

0xac1d,	// (0x0009861f) bg_main_mobtv_pane_ParamLimits

0xac1d,	// (0x0009861f) bg_main_mobtv_pane

0x804b,	// (0x00095a4d) main_mobtv_info_pane

0x8056,	// (0x00095a58) main_mobtv_loading_pane_ParamLimits

0x8056,	// (0x00095a58) main_mobtv_loading_pane

0xe19e,	// (0x0009bba0) main_mobtv_pg_channel_list_pane

0xe1a8,	// (0x0009bbaa) main_mobtv_pg_hdr_pane

0x8063,	// (0x00095a65) main_mobtv_programe_curr_pane_ParamLimits

0x8063,	// (0x00095a65) main_mobtv_programe_curr_pane

0x8070,	// (0x00095a72) main_mobtv_programe_next_pane_ParamLimits

0x8070,	// (0x00095a72) main_mobtv_programe_next_pane

0xe1b1,	// (0x0009bbb3) popup_mobtv_noti_window

0xcc04,	// (0x0009a606) main_tv_pg_hdr_pane_g1

0xe1bb,	// (0x0009bbbd) main_tv_pg_hdr_pane_g2

0xe1c3,	// (0x0009bbc5) main_tv_pg_hdr_pane_g3

0xe1cb,	// (0x0009bbcd) main_tv_pg_hdr_pane_g4

0xe1d3,	// (0x0009bbd5) main_tv_pg_hdr_pane_g5

0xe1dd,	// (0x0009bbdf) main_tv_pg_hdr_pane_g6

0xe1e7,	// (0x0009bbe9) main_tv_pg_hdr_pane_g7

0xe1f1,	// (0x0009bbf3) main_tv_pg_hdr_pane_g8

0xe1fb,	// (0x0009bbfd) main_tv_pg_hdr_pane_g9

0xe205,	// (0x0009bc07) main_tv_pg_hdr_pane_g10

0xe20f,	// (0x0009bc11) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0f,	// (0x0009d611) main_tv_pg_hdr_pane_g

0xe219,	// (0x0009bc1b) main_tv_pg_hdr_pane_t1

0xe227,	// (0x0009bc29) main_tv_pg_hdr_pane_t2

0xe235,	// (0x0009bc37) main_tv_pg_hdr_pane_t3

0xe245,	// (0x0009bc47) main_tv_pg_hdr_pane_t4

0xe255,	// (0x0009bc57) main_tv_pg_hdr_pane_t5

0x0004,

0xfc26,	// (0x0009d628) main_tv_pg_hdr_pane_t

0xe265,	// (0x0009bc67) single_mobtv_pg_channel_pane_ParamLimits

0xe265,	// (0x0009bc67) single_mobtv_pg_channel_pane

0xe277,	// (0x0009bc79) single_mobtv_pg_channel_table_pane

0xe280,	// (0x0009bc82) single_mobtv_pg_channel_thumb_pane

0xe289,	// (0x0009bc8b) single_tv_pg_channel_pane_g1

0xe292,	// (0x0009bc94) single_tv_pg_channel_pane_g2

0x0001,

0xfc31,	// (0x0009d633) single_tv_pg_channel_pane_g

0xce34,	// (0x0009a836) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce34,	// (0x0009a836) bg_single_mobtv_pg_channel_thumb_pane

0xe29b,	// (0x0009bc9d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe29b,	// (0x0009bc9d) single_mobtv_pg_channel_thumb_pane_g1

0xe2a9,	// (0x0009bcab) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2a9,	// (0x0009bcab) single_mobtv_pg_channel_thumb_pane_g2

0xe2b5,	// (0x0009bcb7) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2b5,	// (0x0009bcb7) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc36,	// (0x0009d638) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc36,	// (0x0009d638) single_mobtv_pg_channel_thumb_pane_g

0xe2c1,	// (0x0009bcc3) single_mobtv_pg_channel_thumb_pane_t1

0xe2cf,	// (0x0009bcd1) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3d,	// (0x0009d63f) single_mobtv_pg_channel_thumb_pane_t

0xcc04,	// (0x0009a606) bg_single_mobtv_pg_channel_table_pane_g1

0xcc04,	// (0x0009a606) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e3,	// (0x0009d0e5) bg_single_mobtv_pg_channel_table_pane_g

0xe2dd,	// (0x0009bcdf) single_mobtv_pg_channel_table_pane_t1

0xe2eb,	// (0x0009bced) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc42,	// (0x0009d644) single_mobtv_pg_channel_table_pane_t

0x8085,	// (0x00095a87) main_mobtv_info_pane_g1_ParamLimits

0x8085,	// (0x00095a87) main_mobtv_info_pane_g1

0x80a3,	// (0x00095aa5) main_mobtv_info_pane_t1_ParamLimits

0x80a3,	// (0x00095aa5) main_mobtv_info_pane_t1

0x811b,	// (0x00095b1d) main_mobtv_info_pane_t2_ParamLimits

0x811b,	// (0x00095b1d) main_mobtv_info_pane_t2

0x0002,

0xfc4c,	// (0x0009d64e) main_mobtv_info_pane_t_ParamLimits

0xfc4c,	// (0x0009d64e) main_mobtv_info_pane_t

0x81aa,	// (0x00095bac) wait_bar_pane_cp05

0x81bc,	// (0x00095bbe) main_mobtv_loading_pane_g1_ParamLimits

0x81bc,	// (0x00095bbe) main_mobtv_loading_pane_g1

0x81cd,	// (0x00095bcf) main_mobtv_loading_pane_g2_ParamLimits

0x81cd,	// (0x00095bcf) main_mobtv_loading_pane_g2

0x81d9,	// (0x00095bdb) main_mobtv_loading_pane_g3_ParamLimits

0x81d9,	// (0x00095bdb) main_mobtv_loading_pane_g3

0x0002,

0xfc53,	// (0x0009d655) main_mobtv_loading_pane_g_ParamLimits

0xfc53,	// (0x0009d655) main_mobtv_loading_pane_g

0xe2f9,	// (0x0009bcfb) main_mobtv_loading_pane_t1_ParamLimits

0xe2f9,	// (0x0009bcfb) main_mobtv_loading_pane_t1

0xe311,	// (0x0009bd13) main_mobtv_loading_pane_t2_ParamLimits

0xe311,	// (0x0009bd13) main_mobtv_loading_pane_t2

0x0001,

0xfc5a,	// (0x0009d65c) main_mobtv_loading_pane_t_ParamLimits

0xfc5a,	// (0x0009d65c) main_mobtv_loading_pane_t

0x81ec,	// (0x00095bee) wait_bar_pane_cp06_ParamLimits

0x81ec,	// (0x00095bee) wait_bar_pane_cp06

0xe335,	// (0x0009bd37) main_mobtv_programe_curr_pane_t1

0xe343,	// (0x0009bd45) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5f,	// (0x0009d661) main_mobtv_programe_curr_pane_t

0xe351,	// (0x0009bd53) main_mobtv_programe_next_pane_t1

0xe35f,	// (0x0009bd61) main_mobtv_programe_next_pane_t2

0xe36d,	// (0x0009bd6f) main_mobtv_programe_next_pane_t3

0x0002,

0xfc64,	// (0x0009d666) main_mobtv_programe_next_pane_t

0x99c1,	// (0x000973c3) bg_popup_mobtv_noti_window_pane

0xe37b,	// (0x0009bd7d) popup_mobtv_noti_window_g1

0xe383,	// (0x0009bd85) popup_mobtv_noti_window_t1

0xe391,	// (0x0009bd93) popup_mobtv_noti_window_t2

0x0001,

0xfc6b,	// (0x0009d66d) popup_mobtv_noti_window_t

0xcc04,	// (0x0009a606) bg_popup_mobtv_noti_window_pane_g1

0x99c1,	// (0x000973c3) sc_clock_pane

0x99c1,	// (0x000973c3) main_fs_bigclock_pane

0x798f,	// (0x00095391) blid2_tripm_pane_t4_ParamLimits

0x798f,	// (0x00095391) blid2_tripm_pane_t4

0x81fb,	// (0x00095bfd) sc_clock_pane_g1_ParamLimits

0x81fb,	// (0x00095bfd) sc_clock_pane_g1

0x820d,	// (0x00095c0f) sc_clock_pane_t1_ParamLimits

0x820d,	// (0x00095c0f) sc_clock_pane_t1

0x8231,	// (0x00095c33) sc_clock_pane_t2_ParamLimits

0x8231,	// (0x00095c33) sc_clock_pane_t2

0x8249,	// (0x00095c4b) sc_clock_pane_t3_ParamLimits

0x8249,	// (0x00095c4b) sc_clock_pane_t3

0x0004,

0xfc70,	// (0x0009d672) sc_clock_pane_t_ParamLimits

0xfc70,	// (0x0009d672) sc_clock_pane_t

0x8f87,	// (0x00096989) main_fs_bigclock_indicator_pane_ParamLimits

0x8f87,	// (0x00096989) main_fs_bigclock_indicator_pane

0x8305,	// (0x00095d07) main_fs_bigclock_pane_g1_ParamLimits

0x8305,	// (0x00095d07) main_fs_bigclock_pane_g1

0x8f93,	// (0x00096995) main_fs_bigclock_pane_t1_ParamLimits

0x8f93,	// (0x00096995) main_fs_bigclock_pane_t1

0x8fa5,	// (0x000969a7) main_fs_bigclock_pane_t2_ParamLimits

0x8fa5,	// (0x000969a7) main_fs_bigclock_pane_t2

0x8fb9,	// (0x000969bb) main_fs_bigclock_pane_t3_ParamLimits

0x8fb9,	// (0x000969bb) main_fs_bigclock_pane_t3

0x0002,

0xfe7a,	// (0x0009d87c) main_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0009d87c) main_fs_bigclock_pane_t

0xebf5,	// (0x0009c5f7) main_fs_bigclock_indicator_pane_g1

0xe061,	// (0x0009ba63) ncim_query_content_pane_g2_ParamLimits

0xe061,	// (0x0009ba63) ncim_query_content_pane_g2

0x0001,

0xfbfd,	// (0x0009d5ff) ncim_query_content_pane_g_ParamLimits

0xfbfd,	// (0x0009d5ff) ncim_query_content_pane_g

0x8260,	// (0x00095c62) sc_clock_pane_t4_ParamLimits

0x8260,	// (0x00095c62) sc_clock_pane_t4

0x9a12,	// (0x00097414) main_radioblah_pane

0xd55f,	// (0x0009af61) cell_call4_button_pane_t1_copy1_ParamLimits

0xd55f,	// (0x0009af61) cell_call4_button_pane_t1_copy1

0x7e9c,	// (0x0009589e) main_ncimui_pane_t1_ParamLimits

0x7e9c,	// (0x0009589e) main_ncimui_pane_t1

0x7eb6,	// (0x000958b8) main_ncimui_pane_t2_ParamLimits

0x7eb6,	// (0x000958b8) main_ncimui_pane_t2

0x0002,

0xfbf6,	// (0x0009d5f8) main_ncimui_pane_t_ParamLimits

0xfbf6,	// (0x0009d5f8) main_ncimui_pane_t

0xe4e4,	// (0x0009bee6) main_radioblah_anim_pane_ParamLimits

0xe4e4,	// (0x0009bee6) main_radioblah_anim_pane

0xe4f5,	// (0x0009bef7) main_radioblah_info_pane_ParamLimits

0xe4f5,	// (0x0009bef7) main_radioblah_info_pane

0xe509,	// (0x0009bf0b) main_radioblah_pane_t1_ParamLimits

0xe509,	// (0x0009bf0b) main_radioblah_pane_t1

0xe525,	// (0x0009bf27) main_radioblah_pane_t2_ParamLimits

0xe525,	// (0x0009bf27) main_radioblah_pane_t2

0x0003,

0xfc91,	// (0x0009d693) main_radioblah_pane_t_ParamLimits

0xfc91,	// (0x0009d693) main_radioblah_pane_t

0x8362,	// (0x00095d64) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8362,	// (0x00095d64) main_radioblah_rocker_ctrl_pane

0xe56d,	// (0x0009bf6f) main_radioblah_info_pane_t1_ParamLimits

0xe56d,	// (0x0009bf6f) main_radioblah_info_pane_t1

0x83ba,	// (0x00095dbc) main_radioblah_info_pane_t2_ParamLimits

0x83ba,	// (0x00095dbc) main_radioblah_info_pane_t2

0x0003,

0xfc9a,	// (0x0009d69c) main_radioblah_info_pane_t_ParamLimits

0xfc9a,	// (0x0009d69c) main_radioblah_info_pane_t

0xcc04,	// (0x0009a606) main_radioblah_rocker_ctrl_pane_g1

0x846a,	// (0x00095e6c) main_radioblah_rocker_ctrl_pane_g2

0x8472,	// (0x00095e74) main_radioblah_rocker_ctrl_pane_g3

0x847a,	// (0x00095e7c) main_radioblah_rocker_ctrl_pane_g4

0x8482,	// (0x00095e84) main_radioblah_rocker_ctrl_pane_g5

0x848a,	// (0x00095e8c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca3,	// (0x0009d6a5) main_radioblah_rocker_ctrl_pane_g

0x7c20,	// (0x00095622) main_cset_text2_pane_t1_copy1_ParamLimits

0xaa38,	// (0x0009843a) cam4_image_uncrop_qvga_pane

0xaa8d,	// (0x0009848f) vid4_image_uncrop_qcif_pane

0xac0f,	// (0x00098611) cam6_image_uncrop_qvga_pane_ParamLimits

0xac0f,	// (0x00098611) cam6_image_uncrop_qvga_pane

0xdd64,	// (0x0009b766) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd64,	// (0x0009b766) vid6_image_uncrop_qcif_pane

0x99c1,	// (0x000973c3) bg_popup_preview_window_pane_cp03

0xe013,	// (0x0009ba15) list_cset_text2_pane

0xe01b,	// (0x0009ba1d) main_cset6_text2_pane_g1

0xe023,	// (0x0009ba25) main_cset6_text2_pane_t1

0x8492,	// (0x00095e94) list_cset_text2_pane_t1_ParamLimits

0x8492,	// (0x00095e94) list_cset_text2_pane_t1

0x9a12,	// (0x00097414) main_radioblah_pane_ParamLimits

0x8196,	// (0x00095b98) main_mobtv_info_pane_t3_ParamLimits

0x8196,	// (0x00095b98) main_mobtv_info_pane_t3

0x8350,	// (0x00095d52) main_radioblah_pane_g1

0x838a,	// (0x00095d8c) main_radioblah_info_pane_g1

0x840f,	// (0x00095e11) main_radioblah_info_pane_t3_ParamLimits

0x840f,	// (0x00095e11) main_radioblah_info_pane_t3

0x2d5e,	// (0x00090760) highlight_cell_cale_month_pane_ParamLimits

0x2d5e,	// (0x00090760) highlight_cell_cale_month_pane

0x99c1,	// (0x000973c3) main_phob_fisheye_pane

0xcf10,	// (0x0009a912) scroll_pane_cp0031_ParamLimits

0xcf10,	// (0x0009a912) scroll_pane_cp0031

0xde76,	// (0x0009b878) wait_bar_pane_cp08_ParamLimits

0x2e14,	// (0x00090816) cset_list_set_pane_copy1_ParamLimits

0xe5ce,	// (0x0009bfd0) highlight_cell_cale_month_pane_g1

0x84ab,	// (0x00095ead) highlight_cell_cale_month_pane_t1

0xdaf2,	// (0x0009b4f4) list_gen_pane_cp01

0xd744,	// (0x0009b146) scroll_pane_01

0x020e,	// (0x0008dc10) list_single_double_fisheye_pane

0x0217,	// (0x0008dc19) list_double_fisheye_pane_g1_ParamLimits

0x0217,	// (0x0008dc19) list_double_fisheye_pane_g1

0x0223,	// (0x0008dc25) list_double_fisheye_pane_g2_ParamLimits

0x0223,	// (0x0008dc25) list_double_fisheye_pane_g2

0x0237,	// (0x0008dc39) list_double_fisheye_pane_g3_ParamLimits

0x0237,	// (0x0008dc39) list_double_fisheye_pane_g3

0x0004,

0xfcb0,	// (0x0009d6b2) list_double_fisheye_pane_g_ParamLimits

0xfcb0,	// (0x0009d6b2) list_double_fisheye_pane_g

0x0260,	// (0x0008dc62) list_double_fisheye_pane_t1_ParamLimits

0x0260,	// (0x0008dc62) list_double_fisheye_pane_t1

0x027b,	// (0x0008dc7d) list_double_fisheye_pane_t2_ParamLimits

0x027b,	// (0x0008dc7d) list_double_fisheye_pane_t2

0x0001,

0xfcbb,	// (0x0009d6bd) list_double_fisheye_pane_t_ParamLimits

0xfcbb,	// (0x0009d6bd) list_double_fisheye_pane_t

0x99c1,	// (0x000973c3) main_call5_pane

0x828b,	// (0x00095c8d) sc_swipe_pane_ParamLimits

0x828b,	// (0x00095c8d) sc_swipe_pane

0x84cc,	// (0x00095ece) call5_image_pane_ParamLimits

0x84cc,	// (0x00095ece) call5_image_pane

0x84e9,	// (0x00095eeb) call5_swipe_1_pane_ParamLimits

0x84e9,	// (0x00095eeb) call5_swipe_1_pane

0x84fc,	// (0x00095efe) call5_swipe_2_pane_ParamLimits

0x84fc,	// (0x00095efe) call5_swipe_2_pane

0x8529,	// (0x00095f2b) popup_call5_audio_first_window_ParamLimits

0x8529,	// (0x00095f2b) popup_call5_audio_first_window

0xce34,	// (0x0009a836) call5_swipe_1_pane_g1_ParamLimits

0xce34,	// (0x0009a836) call5_swipe_1_pane_g1

0xe5d6,	// (0x0009bfd8) call5_swipe_1_pane_g2_ParamLimits

0xe5d6,	// (0x0009bfd8) call5_swipe_1_pane_g2

0x0001,

0xfcc0,	// (0x0009d6c2) call5_swipe_1_pane_g_ParamLimits

0xfcc0,	// (0x0009d6c2) call5_swipe_1_pane_g

0xe5e2,	// (0x0009bfe4) call5_swipe_1_pane_t1_ParamLimits

0xe5e2,	// (0x0009bfe4) call5_swipe_1_pane_t1

0xce34,	// (0x0009a836) call5_swipe_2_pane_g1_ParamLimits

0xce34,	// (0x0009a836) call5_swipe_2_pane_g1

0xe5f7,	// (0x0009bff9) call5_swipe_2_pane_g2_ParamLimits

0xe5f7,	// (0x0009bff9) call5_swipe_2_pane_g2

0x0001,

0xfcc5,	// (0x0009d6c7) call5_swipe_2_pane_g_ParamLimits

0xfcc5,	// (0x0009d6c7) call5_swipe_2_pane_g

0xe603,	// (0x0009c005) call5_swipe_2_pane_t1_ParamLimits

0xe603,	// (0x0009c005) call5_swipe_2_pane_t1

0xe618,	// (0x0009c01a) sc_swipe_pane_g1_ParamLimits

0xe618,	// (0x0009c01a) sc_swipe_pane_g1

0xe625,	// (0x0009c027) sc_swipe_pane_g2_ParamLimits

0xe625,	// (0x0009c027) sc_swipe_pane_g2

0x0001,

0xfcca,	// (0x0009d6cc) sc_swipe_pane_g_ParamLimits

0xfcca,	// (0x0009d6cc) sc_swipe_pane_g

0xe631,	// (0x0009c033) sc_swipe_pane_t1_ParamLimits

0xe631,	// (0x0009c033) sc_swipe_pane_t1

0x99c1,	// (0x000973c3) main_cmail_launcher_pane

0x853e,	// (0x00095f40) aid_size_cell_cmail_l_ParamLimits

0x853e,	// (0x00095f40) aid_size_cell_cmail_l

0x8558,	// (0x00095f5a) grid_cmail_l_pane_ParamLimits

0x8558,	// (0x00095f5a) grid_cmail_l_pane

0x8573,	// (0x00095f75) cell_cmail_l_pane_ParamLimits

0x8573,	// (0x00095f75) cell_cmail_l_pane

0x859b,	// (0x00095f9d) cell_cmail_l_pane_g1_ParamLimits

0x859b,	// (0x00095f9d) cell_cmail_l_pane_g1

0x85a7,	// (0x00095fa9) cell_cmail_l_pane_t1_ParamLimits

0x85a7,	// (0x00095fa9) cell_cmail_l_pane_t1

0xe646,	// (0x0009c048) cell_cmail_l_pane_t2_ParamLimits

0xe646,	// (0x0009c048) cell_cmail_l_pane_t2

0x0001,

0xfccf,	// (0x0009d6d1) cell_cmail_l_pane_t_ParamLimits

0xfccf,	// (0x0009d6d1) cell_cmail_l_pane_t

0x9a12,	// (0x00097414) grid_highlight_pane_cp018_ParamLimits

0x9a12,	// (0x00097414) grid_highlight_pane_cp018

0x0ac2,	// (0x0008e4c4) main2_pane_ParamLimits

0x0ac2,	// (0x0008e4c4) main2_pane

0xa24e,	// (0x00097c50) popup_sp_fs_action_menu_bg_pane_g1

0xa256,	// (0x00097c58) popup_sp_fs_action_menu_bg_pane_g2

0xa25e,	// (0x00097c60) popup_sp_fs_action_menu_bg_pane_g3

0xa266,	// (0x00097c68) popup_sp_fs_action_menu_bg_pane_g4

0xa26e,	// (0x00097c70) popup_sp_fs_action_menu_bg_pane_g5

0xa276,	// (0x00097c78) popup_sp_fs_action_menu_bg_pane_g6

0xa27e,	// (0x00097c80) popup_sp_fs_action_menu_bg_pane_g7

0xa286,	// (0x00097c88) popup_sp_fs_action_menu_bg_pane_g8

0xa28e,	// (0x00097c90) popup_sp_fs_action_menu_bg_pane_g9

0xa296,	// (0x00097c98) popup_sp_fs_action_menu_bg_pane_g10

0xa296,	// (0x00097c98) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0009cb8c) popup_sp_fs_action_menu_bg_pane_g

0xfb45,	// (0x0008d547) list_medium_line_x2_t3_g3_g1_ParamLimits

0xfb45,	// (0x0008d547) list_medium_line_x2_t3_g3_g1

0xfb51,	// (0x0008d553) list_medium_line_x2_t3_g3_g2_ParamLimits

0xfb51,	// (0x0008d553) list_medium_line_x2_t3_g3_g2

0xfb5d,	// (0x0008d55f) list_medium_line_x2_t3_g3_g3_ParamLimits

0xfb5d,	// (0x0008d55f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0009cc3a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0009cc3a) list_medium_line_x2_t3_g3_g

0xfb69,	// (0x0008d56b) list_medium_line_x2_t3_g3_t1_ParamLimits

0xfb69,	// (0x0008d56b) list_medium_line_x2_t3_g3_t1

0xfb7e,	// (0x0008d580) list_medium_line_x2_t3_g3_t2_ParamLimits

0xfb7e,	// (0x0008d580) list_medium_line_x2_t3_g3_t2

0xfb92,	// (0x0008d594) list_medium_line_x2_t3_g3_t3_ParamLimits

0xfb92,	// (0x0008d594) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0009cc41) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0009cc41) list_medium_line_x2_t3_g3_t

0xf048,	// (0x0009ca4a) list_medium_line_x2_t3_g2_g1_ParamLimits

0xf048,	// (0x0009ca4a) list_medium_line_x2_t3_g2_g1

0xf054,	// (0x0009ca56) list_medium_line_x2_t3_g2_g2_ParamLimits

0xf054,	// (0x0009ca56) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0009cc48) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0009cc48) list_medium_line_x2_t3_g2_g

0xfba7,	// (0x0008d5a9) list_medium_line_x2_t3_g2_t1_ParamLimits

0xfba7,	// (0x0008d5a9) list_medium_line_x2_t3_g2_t1

0xfbbd,	// (0x0008d5bf) list_medium_line_x2_t3_g2_t2_ParamLimits

0xfbbd,	// (0x0008d5bf) list_medium_line_x2_t3_g2_t2

0xfbcf,	// (0x0008d5d1) list_medium_line_x2_t3_g2_t3_ParamLimits

0xfbcf,	// (0x0008d5d1) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0009cc4d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0009cc4d) list_medium_line_x2_t3_g2_t

0xf048,	// (0x0009ca4a) list_medium_line_x2_t4_g4_g1_ParamLimits

0xf048,	// (0x0009ca4a) list_medium_line_x2_t4_g4_g1

0xfbed,	// (0x0008d5ef) list_medium_line_x2_t4_g4_g2_ParamLimits

0xfbed,	// (0x0008d5ef) list_medium_line_x2_t4_g4_g2

0xf060,	// (0x0009ca62) list_medium_line_x2_t4_g4_g3_ParamLimits

0xf060,	// (0x0009ca62) list_medium_line_x2_t4_g4_g3

0xfbf9,	// (0x0008d5fb) list_medium_line_x2_t4_g4_g4_ParamLimits

0xfbf9,	// (0x0008d5fb) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0009cc54) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0009cc54) list_medium_line_x2_t4_g4_g

0xfc05,	// (0x0008d607) list_medium_line_x2_t4_g4_t1_ParamLimits

0xfc05,	// (0x0008d607) list_medium_line_x2_t4_g4_t1

0xfc1f,	// (0x0008d621) list_medium_line_x2_t4_g4_t2_ParamLimits

0xfc1f,	// (0x0008d621) list_medium_line_x2_t4_g4_t2

0xfc35,	// (0x0008d637) list_medium_line_x2_t4_g4_t3_ParamLimits

0xfc35,	// (0x0008d637) list_medium_line_x2_t4_g4_t3

0xfc4a,	// (0x0008d64c) list_medium_line_x2_t4_g4_t4_ParamLimits

0xfc4a,	// (0x0008d64c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0009cc5d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0009cc5d) list_medium_line_x2_t4_g4_t

0xf048,	// (0x0009ca4a) list_medium_line_x2_t2_g4_g1_ParamLimits

0xf048,	// (0x0009ca4a) list_medium_line_x2_t2_g4_g1

0xf06c,	// (0x0009ca6e) list_medium_line_x2_t2_g4_g2_ParamLimits

0xf06c,	// (0x0009ca6e) list_medium_line_x2_t2_g4_g2

0xf060,	// (0x0009ca62) list_medium_line_x2_t2_g4_g3_ParamLimits

0xf060,	// (0x0009ca62) list_medium_line_x2_t2_g4_g3

0xf054,	// (0x0009ca56) list_medium_line_x2_t2_g4_g4_ParamLimits

0xf054,	// (0x0009ca56) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0009ccc4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0009ccc4) list_medium_line_x2_t2_g4_g

0xfc5c,	// (0x0008d65e) list_medium_line_x2_t2_g4_t1_ParamLimits

0xfc5c,	// (0x0008d65e) list_medium_line_x2_t2_g4_t1

0xf078,	// (0x0009ca7a) list_medium_line_x2_t2_g4_t2_ParamLimits

0xf078,	// (0x0009ca7a) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0009cccd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0009cccd) list_medium_line_x2_t2_g4_t

0xf048,	// (0x0009ca4a) list_medium_line_x2_t2_g3_g1_ParamLimits

0xf048,	// (0x0009ca4a) list_medium_line_x2_t2_g3_g1

0xf060,	// (0x0009ca62) list_medium_line_x2_t2_g3_g2_ParamLimits

0xf060,	// (0x0009ca62) list_medium_line_x2_t2_g3_g2

0xf054,	// (0x0009ca56) list_medium_line_x2_t2_g3_g3_ParamLimits

0xf054,	// (0x0009ca56) list_medium_line_x2_t2_g3_g3

0x0002,

0xf2d0,	// (0x0009ccd2) list_medium_line_x2_t2_g3_g_ParamLimits

0xf2d0,	// (0x0009ccd2) list_medium_line_x2_t2_g3_g

0xfc71,	// (0x0008d673) list_medium_line_x2_t2_g3_t1_ParamLimits

0xfc71,	// (0x0008d673) list_medium_line_x2_t2_g3_t1

0xf078,	// (0x0009ca7a) list_medium_line_x2_t2_g3_t2_ParamLimits

0xf078,	// (0x0009ca7a) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d7,	// (0x0009ccd9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d7,	// (0x0009ccd9) list_medium_line_x2_t2_g3_t

0x2eb9,	// (0x000908bb) main_sp_fs_list_pane_ParamLimits

0x2eb9,	// (0x000908bb) main_sp_fs_list_pane

0x2ec5,	// (0x000908c7) sp_fs_scroll_pane_ParamLimits

0x2ec5,	// (0x000908c7) sp_fs_scroll_pane

0xfc86,	// (0x0008d688) list_medium_line_x2_t3_t1

0xfc96,	// (0x0008d698) list_medium_line_x2_t3_t2

0xfca4,	// (0x0008d6a6) list_medium_line_x2_t3_t3

0x0002,

0xf322,	// (0x0009cd24) list_medium_line_x2_t3_t

0xfcb2,	// (0x0008d6b4) list_medium_line_x3_t4_t1

0xfcc2,	// (0x0008d6c4) list_medium_line_x3_t4_t2

0xfcd0,	// (0x0008d6d2) list_medium_line_x3_t4_t3

0xf08d,	// (0x0009ca8f) list_medium_line_x3_t4_t4

0x0003,

0xf329,	// (0x0009cd2b) list_medium_line_x3_t4_t

0xfcde,	// (0x0008d6e0) list_medium_line_x4_t5_t1

0xfcee,	// (0x0008d6f0) list_medium_line_x4_t5_t2

0xf09b,	// (0x0009ca9d) list_medium_line_x4_t5_t3

0xfcfc,	// (0x0008d6fe) list_medium_line_x4_t5_t4

0xf08d,	// (0x0009ca8f) list_medium_line_x4_t5_t5

0x0004,

0xf332,	// (0x0009cd34) list_medium_line_x4_t5_t

0xf048,	// (0x0009ca4a) list_medium_line_t4_g4_g1_ParamLimits

0xf048,	// (0x0009ca4a) list_medium_line_t4_g4_g1

0xf0a9,	// (0x0009caab) list_medium_line_t4_g4_g2_ParamLimits

0xf0a9,	// (0x0009caab) list_medium_line_t4_g4_g2

0xfd0a,	// (0x0008d70c) list_medium_line_t4_g4_g3_ParamLimits

0xfd0a,	// (0x0008d70c) list_medium_line_t4_g4_g3

0xf054,	// (0x0009ca56) list_medium_line_t4_g4_g4_ParamLimits

0xf054,	// (0x0009ca56) list_medium_line_t4_g4_g4

0x0003,

0xf33d,	// (0x0009cd3f) list_medium_line_t4_g4_g_ParamLimits

0xf33d,	// (0x0009cd3f) list_medium_line_t4_g4_g

0xfd16,	// (0x0008d718) list_medium_line_t4_g4_t1_ParamLimits

0xfd16,	// (0x0008d718) list_medium_line_t4_g4_t1

0xfd2b,	// (0x0008d72d) list_medium_line_t4_g4_t2_ParamLimits

0xfd2b,	// (0x0008d72d) list_medium_line_t4_g4_t2

0xfd41,	// (0x0008d743) list_medium_line_t4_g4_t3_ParamLimits

0xfd41,	// (0x0008d743) list_medium_line_t4_g4_t3

0xf078,	// (0x0009ca7a) list_medium_line_t4_g4_t4_ParamLimits

0xf078,	// (0x0009ca7a) list_medium_line_t4_g4_t4

0x0003,

0xf346,	// (0x0009cd48) list_medium_line_t4_g4_t_ParamLimits

0xf346,	// (0x0009cd48) list_medium_line_t4_g4_t

0x2f97,	// (0x00090999) chi_dic_find_pane_g1

0x417f,	// (0x00091b81) main_tport_pane

0x7105,	// (0x00094b07) list_medium_line_plain_t1

0x71b5,	// (0x00094bb7) list_medium_line_t2_g2_g1_ParamLimits

0x71b5,	// (0x00094bb7) list_medium_line_t2_g2_g1

0xab81,	// (0x00098583) list_medium_line_t2_g2_g2_ParamLimits

0xab81,	// (0x00098583) list_medium_line_t2_g2_g2

0x0001,

0xfa07,	// (0x0009d409) list_medium_line_t2_g2_g_ParamLimits

0xfa07,	// (0x0009d409) list_medium_line_t2_g2_g

0xff47,	// (0x0008d949) list_medium_line_t2_g2_t1_ParamLimits

0xff47,	// (0x0008d949) list_medium_line_t2_g2_t1

0xff61,	// (0x0008d963) list_medium_line_t2_g2_t2_ParamLimits

0xff61,	// (0x0008d963) list_medium_line_t2_g2_t2

0x0001,

0xfa0c,	// (0x0009d40e) list_medium_line_t2_g2_t_ParamLimits

0xfa0c,	// (0x0009d40e) list_medium_line_t2_g2_t

0x7748,	// (0x0009514a) aid_sp_fs_list_icon_a_sm

0xac07,	// (0x00098609) aid_sp_fs_list_icon_d

0x7750,	// (0x00095152) aid_sp_fs_text_primary

0x7759,	// (0x0009515b) aid_sp_fs_text_secondary

0x7762,	// (0x00095164) list_medium_line

0x7762,	// (0x00095164) list_medium_line_g2

0x7762,	// (0x00095164) list_medium_line_g3

0x7762,	// (0x00095164) list_medium_line_plain

0x7762,	// (0x00095164) list_medium_line_plain_t2

0x7762,	// (0x00095164) list_medium_line_plain_t3

0x7762,	// (0x00095164) list_medium_line_right_icon

0x7762,	// (0x00095164) list_medium_line_right_iconx2

0x7762,	// (0x00095164) list_medium_line_t2

0x7762,	// (0x00095164) list_medium_line_t2_g2

0x7762,	// (0x00095164) list_medium_line_t2_g3

0x7762,	// (0x00095164) list_medium_line_t2_right_icon

0x7762,	// (0x00095164) list_medium_line_t2_right_iconx2

0x7762,	// (0x00095164) list_medium_line_t3

0x7762,	// (0x00095164) list_medium_line_t3_g2

0x7762,	// (0x00095164) list_medium_line_t3_g3

0x7762,	// (0x00095164) list_medium_line_t3_right_iconx2

0x00f5,	// (0x0008daf7) list_medium_line_t4_g4

0x00fe,	// (0x0008db00) list_medium_line_x2

0x00fe,	// (0x0008db00) list_medium_line_x2_t2_g2

0x00fe,	// (0x0008db00) list_medium_line_x2_t2_g3

0x00fe,	// (0x0008db00) list_medium_line_x2_t2_g4

0x00fe,	// (0x0008db00) list_medium_line_x2_t3

0x00fe,	// (0x0008db00) list_medium_line_x2_t3_g2

0x00fe,	// (0x0008db00) list_medium_line_x2_t3_g3

0x00fe,	// (0x0008db00) list_medium_line_x2_t3_g4

0x00fe,	// (0x0008db00) list_medium_line_x2_t4_g2

0x00fe,	// (0x0008db00) list_medium_line_x2_t4_g4

0x776b,	// (0x0009516d) list_medium_line_x3

0x776b,	// (0x0009516d) list_medium_line_x3_t4

0x776b,	// (0x0009516d) list_medium_line_x3_t4_g4

0x00f5,	// (0x0008daf7) list_medium_line_x4_t4

0x00f5,	// (0x0008daf7) list_medium_line_x4_t4_g7

0x00f5,	// (0x0008daf7) list_medium_line_x4_t5

0x0107,	// (0x0008db09) list_single_fs_dyc_pane_ParamLimits

0x0107,	// (0x0008db09) list_single_fs_dyc_pane

0xf048,	// (0x0009ca4a) list_medium_line_x4_t4_g7_g1_ParamLimits

0xf048,	// (0x0009ca4a) list_medium_line_x4_t4_g7_g1

0x013f,	// (0x0008db41) list_medium_line_x4_t4_g7_g2_ParamLimits

0x013f,	// (0x0008db41) list_medium_line_x4_t4_g7_g2

0x014b,	// (0x0008db4d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x014b,	// (0x0008db4d) list_medium_line_x4_t4_g7_g3

0x015a,	// (0x0008db5c) list_medium_line_x4_t4_g7_g4_ParamLimits

0x015a,	// (0x0008db5c) list_medium_line_x4_t4_g7_g4

0x0166,	// (0x0008db68) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0166,	// (0x0008db68) list_medium_line_x4_t4_g7_g5

0x0175,	// (0x0008db77) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0175,	// (0x0008db77) list_medium_line_x4_t4_g7_g6

0x0184,	// (0x0008db86) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0184,	// (0x0008db86) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd7,	// (0x0009d5d9) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd7,	// (0x0009d5d9) list_medium_line_x4_t4_g7_g

0x0190,	// (0x0008db92) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0190,	// (0x0008db92) list_medium_line_x4_t4_g7_t1

0x01a5,	// (0x0008dba7) list_medium_line_x4_t4_g7_t2_ParamLimits

0x01a5,	// (0x0008dba7) list_medium_line_x4_t4_g7_t2

0x01ba,	// (0x0008dbbc) list_medium_line_x4_t4_g7_t3_ParamLimits

0x01ba,	// (0x0008dbbc) list_medium_line_x4_t4_g7_t3

0x01cf,	// (0x0008dbd1) list_medium_line_x4_t4_g7_t4_ParamLimits

0x01cf,	// (0x0008dbd1) list_medium_line_x4_t4_g7_t4

0x01e1,	// (0x0008dbe3) list_medium_line_x4_t4_g7_t5_ParamLimits

0x01e1,	// (0x0008dbe3) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe6,	// (0x0009d5e8) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe6,	// (0x0009d5e8) list_medium_line_x4_t4_g7_t

0x01f3,	// (0x0008dbf5) list_single_dyc_row_pane_ParamLimits

0x01f3,	// (0x0008dbf5) list_single_dyc_row_pane

0x84b9,	// (0x00095ebb) call5_gesture_pane_ParamLimits

0x84b9,	// (0x00095ebb) call5_gesture_pane

0x850f,	// (0x00095f11) call5_windows_pane_ParamLimits

0x850f,	// (0x00095f11) call5_windows_pane

0x85bd,	// (0x00095fbf) call5_swipe_1_pane_cp_ParamLimits

0x85bd,	// (0x00095fbf) call5_swipe_1_pane_cp

0x85c9,	// (0x00095fcb) call5_swipe_2_pane_cp_ParamLimits

0x85c9,	// (0x00095fcb) call5_swipe_2_pane_cp

0xa3a1,	// (0x00097da3) call5_image_pane_cp

0x85d5,	// (0x00095fd7) popup_call5_audio_first_window_cp_ParamLimits

0x85d5,	// (0x00095fd7) popup_call5_audio_first_window_cp

0xe618,	// (0x0009c01a) call5_swipe_1_pane_g1_cp_ParamLimits

0xe618,	// (0x0009c01a) call5_swipe_1_pane_g1_cp

0xe658,	// (0x0009c05a) call5_swipe_1_pane_g2_cp

0xe631,	// (0x0009c033) call5_swipe_1_pane_t1_cp_ParamLimits

0xe631,	// (0x0009c033) call5_swipe_1_pane_t1_cp

0xe618,	// (0x0009c01a) call5_swipe_2_pane_g1_cp_ParamLimits

0xe618,	// (0x0009c01a) call5_swipe_2_pane_g1_cp

0xe660,	// (0x0009c062) call5_swipe_2_pane_g2_cp

0xe668,	// (0x0009c06a) call5_swipe_2_pane_t1_cp_ParamLimits

0xe668,	// (0x0009c06a) call5_swipe_2_pane_t1_cp

0x9a12,	// (0x00097414) main_sp_fs_email_pane

0xe67d,	// (0x0009c07f) main_sp_fs_listscroll_pane_te

0x85e3,	// (0x00095fe5) popup_sp_fs_action_menu_pane_ParamLimits

0x85e3,	// (0x00095fe5) popup_sp_fs_action_menu_pane

0xcc04,	// (0x0009a606) bg_sp_fs_ctrlbar_pane_g1

0xd1b1,	// (0x0009abb3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd1c3,	// (0x0009abc5) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd1ba,	// (0x0009abbc) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc04,	// (0x0009a606) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd4,	// (0x0009d6d6) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9e3,	// (0x0009a3e5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9e3,	// (0x0009a3e5) bg_sp_fs_ctrlbar_ddmenu_pane

0xe686,	// (0x0009c088) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe686,	// (0x0009c088) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe692,	// (0x0009c094) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe692,	// (0x0009c094) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdd,	// (0x0009d6df) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdd,	// (0x0009d6df) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe69e,	// (0x0009c0a0) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe69e,	// (0x0009c0a0) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xac2b,	// (0x0009862d) list_medium_line_t2_right_icon_g1

0x029d,	// (0x0008dc9f) list_medium_line_t2_right_icon_t1

0x02ad,	// (0x0008dcaf) list_medium_line_t2_right_icon_t2

0x0001,

0xfce2,	// (0x0009d6e4) list_medium_line_t2_right_icon_t

0xc7b3,	// (0x0009a1b5) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7b3,	// (0x0009a1b5) bg_sp_fs_ctrlbar_pane

0x8676,	// (0x00096078) main_sp_fs_ctrlbar_button_pane_cp01

0x8680,	// (0x00096082) main_sp_fs_ctrlbar_ddmenu_pane

0xe5a7,	// (0x0009bfa9) main_sp_fs_ctrlbar_pane_g1

0xe6f0,	// (0x0009c0f2) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce7,	// (0x0009d6e9) main_sp_fs_ctrlbar_pane_g

0xe6fc,	// (0x0009c0fe) main_sp_fs_ctrlbar_pane_t1

0x02bf,	// (0x0008dcc1) main_sp_fs_ctrlbar_pane

0x02e3,	// (0x0008dce5) main_sp_fs_listscroll_pane_te_cp01

0x0303,	// (0x0008dd05) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0303,	// (0x0008dd05) popup_sp_fs_action_menu_pane_cp01

0x9a12,	// (0x00097414) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9a12,	// (0x00097414) bg_sp_fs_highlight_list_pane_cp01

0x868a,	// (0x0009608c) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x868a,	// (0x0009608c) sp_fs_action_menu_list_gene_pane_g1

0xe72c,	// (0x0009c12e) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe72c,	// (0x0009c12e) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf1,	// (0x0009d6f3) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf1,	// (0x0009d6f3) sp_fs_action_menu_list_gene_pane_g

0x8699,	// (0x0009609b) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x8699,	// (0x0009609b) sp_fs_action_menu_list_gene_pane_t1

0x86b1,	// (0x000960b3) sp_fs_action_menu_list_gene_pane_ParamLimits

0x86b1,	// (0x000960b3) sp_fs_action_menu_list_gene_pane

0xe739,	// (0x0009c13b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe739,	// (0x0009c13b) popup_sp_fs_action_menu_bg_pane

0x86d4,	// (0x000960d6) sp_fs_action_menu_list_pane_ParamLimits

0x86d4,	// (0x000960d6) sp_fs_action_menu_list_pane

0xe747,	// (0x0009c149) sp_fs_scroll_pane_cp01_ParamLimits

0xe747,	// (0x0009c149) sp_fs_scroll_pane_cp01

0x0339,	// (0x0008dd3b) list_medium_line_plain_t2_t1

0x0349,	// (0x0008dd4b) list_medium_line_plain_t2_t2

0x0001,

0xfcf6,	// (0x0009d6f8) list_medium_line_plain_t2_t

0x0359,	// (0x0008dd5b) list_medium_line_plain_t3_t1

0x0369,	// (0x0008dd6b) list_medium_line_plain_t3_t2

0x0377,	// (0x0008dd79) list_medium_line_plain_t3_t3

0x0002,

0xfcfb,	// (0x0009d6fd) list_medium_line_plain_t3_t

0xf048,	// (0x0009ca4a) list_medium_line_x2_t2_g2_g1_ParamLimits

0xf048,	// (0x0009ca4a) list_medium_line_x2_t2_g2_g1

0xf054,	// (0x0009ca56) list_medium_line_x2_t2_g2_g2_ParamLimits

0xf054,	// (0x0009ca56) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0009cc48) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0009cc48) list_medium_line_x2_t2_g2_g

0xf0b5,	// (0x0009cab7) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf0b5,	// (0x0009cab7) list_medium_line_x2_t2_g2_t1

0xf078,	// (0x0009ca7a) list_medium_line_x2_t2_g2_t2_ParamLimits

0xf078,	// (0x0009ca7a) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd02,	// (0x0009d704) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd02,	// (0x0009d704) list_medium_line_x2_t2_g2_t

0xf048,	// (0x0009ca4a) list_medium_line_x2_t4_g2_g1_ParamLimits

0xf048,	// (0x0009ca4a) list_medium_line_x2_t4_g2_g1

0x0385,	// (0x0008dd87) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0385,	// (0x0008dd87) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd07,	// (0x0009d709) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd07,	// (0x0009d709) list_medium_line_x2_t4_g2_g

0x0397,	// (0x0008dd99) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0397,	// (0x0008dd99) list_medium_line_x2_t4_g2_t1

0x03b1,	// (0x0008ddb3) list_medium_line_x2_t4_g2_t2_ParamLimits

0x03b1,	// (0x0008ddb3) list_medium_line_x2_t4_g2_t2

0x03c7,	// (0x0008ddc9) list_medium_line_x2_t4_g2_t3_ParamLimits

0x03c7,	// (0x0008ddc9) list_medium_line_x2_t4_g2_t3

0xf078,	// (0x0009ca7a) list_medium_line_x2_t4_g2_t4_ParamLimits

0xf078,	// (0x0009ca7a) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0c,	// (0x0009d70e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0c,	// (0x0009d70e) list_medium_line_x2_t4_g2_t

0xac33,	// (0x00098635) list_medium_line_t3_right_iconx2_g1

0xac2b,	// (0x0009862d) list_medium_line_t3_right_iconx2_g2

0x03dc,	// (0x0008ddde) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd15,	// (0x0009d717) list_medium_line_t3_right_iconx2_g

0x03e6,	// (0x0008dde8) list_medium_line_t3_right_iconx2_t1

0x03f6,	// (0x0008ddf8) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1c,	// (0x0009d71e) list_medium_line_t3_right_iconx2_t

0xf048,	// (0x0009ca4a) list_medium_line_x3_t4_g4_g1_ParamLimits

0xf048,	// (0x0009ca4a) list_medium_line_x3_t4_g4_g1

0xf060,	// (0x0009ca62) list_medium_line_x3_t4_g4_g2_ParamLimits

0xf060,	// (0x0009ca62) list_medium_line_x3_t4_g4_g2

0xf0a9,	// (0x0009caab) list_medium_line_x3_t4_g4_g3_ParamLimits

0xf0a9,	// (0x0009caab) list_medium_line_x3_t4_g4_g3

0x0404,	// (0x0008de06) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0404,	// (0x0008de06) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd21,	// (0x0009d723) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd21,	// (0x0009d723) list_medium_line_x3_t4_g4_g

0x0410,	// (0x0008de12) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0410,	// (0x0008de12) list_medium_line_x3_t4_g4_t1

0x0427,	// (0x0008de29) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0427,	// (0x0008de29) list_medium_line_x3_t4_g4_t2

0x0442,	// (0x0008de44) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0442,	// (0x0008de44) list_medium_line_x3_t4_g4_t3

0x0457,	// (0x0008de59) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0457,	// (0x0008de59) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2a,	// (0x0009d72c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2a,	// (0x0009d72c) list_medium_line_x3_t4_g4_t

0x0474,	// (0x0008de76) list_single_dyc_row_text_pane_t1_ParamLimits

0x0474,	// (0x0008de76) list_single_dyc_row_text_pane_t1

0x04bd,	// (0x0008debf) list_single_dyc_row_text_pane_t2_ParamLimits

0x04bd,	// (0x0008debf) list_single_dyc_row_text_pane_t2

0x86f8,	// (0x000960fa) list_single_dyc_row_text_pane_t3_ParamLimits

0x86f8,	// (0x000960fa) list_single_dyc_row_text_pane_t3

0x0005,

0xfd33,	// (0x0009d735) list_single_dyc_row_text_pane_t_ParamLimits

0xfd33,	// (0x0009d735) list_single_dyc_row_text_pane_t

0x871c,	// (0x0009611e) list_single_dyc_row_pane_g1_ParamLimits

0x871c,	// (0x0009611e) list_single_dyc_row_pane_g1

0x8728,	// (0x0009612a) list_single_dyc_row_pane_g2_ParamLimits

0x8728,	// (0x0009612a) list_single_dyc_row_pane_g2

0x8734,	// (0x00096136) list_single_dyc_row_pane_g3_ParamLimits

0x8734,	// (0x00096136) list_single_dyc_row_pane_g3

0x8740,	// (0x00096142) list_single_dyc_row_pane_g4_ParamLimits

0x8740,	// (0x00096142) list_single_dyc_row_pane_g4

0x0003,

0xfd40,	// (0x0009d742) list_single_dyc_row_pane_g_ParamLimits

0xfd40,	// (0x0009d742) list_single_dyc_row_pane_g

0x874c,	// (0x0009614e) list_single_dyc_row_text_pane_ParamLimits

0x874c,	// (0x0009614e) list_single_dyc_row_text_pane

0x99c1,	// (0x000973c3) bg_sp_fs_scroll_pane

0xe76d,	// (0x0009c16f) thumb_sp_fs_scroll_pane

0x71b5,	// (0x00094bb7) list_medium_line_g1_ParamLimits

0x71b5,	// (0x00094bb7) list_medium_line_g1

0x876b,	// (0x0009616d) list_medium_line_t1_ParamLimits

0x876b,	// (0x0009616d) list_medium_line_t1

0xf048,	// (0x0009ca4a) list_medium_line_x2_g1_ParamLimits

0xf048,	// (0x0009ca4a) list_medium_line_x2_g1

0xf060,	// (0x0009ca62) list_medium_line_x2_g2_ParamLimits

0xf060,	// (0x0009ca62) list_medium_line_x2_g2

0x0001,

0xfd49,	// (0x0009d74b) list_medium_line_x2_g_ParamLimits

0xfd49,	// (0x0009d74b) list_medium_line_x2_g

0x8780,	// (0x00096182) list_medium_line_x2_t1_ParamLimits

0x8780,	// (0x00096182) list_medium_line_x2_t1

0xf048,	// (0x0009ca4a) list_medium_line_x3_g1_ParamLimits

0xf048,	// (0x0009ca4a) list_medium_line_x3_g1

0xf060,	// (0x0009ca62) list_medium_line_x3_g2_ParamLimits

0xf060,	// (0x0009ca62) list_medium_line_x3_g2

0x0001,

0xfd49,	// (0x0009d74b) list_medium_line_x3_g_ParamLimits

0xfd49,	// (0x0009d74b) list_medium_line_x3_g

0x8780,	// (0x00096182) list_medium_line_x3_t1_ParamLimits

0x8780,	// (0x00096182) list_medium_line_x3_t1

0xe776,	// (0x0009c178) thumb_sp_fs_scroll_pane_g1

0xe77f,	// (0x0009c181) thumb_sp_fs_scroll_pane_g2

0xe788,	// (0x0009c18a) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0009d750) thumb_sp_fs_scroll_pane_g

0xe776,	// (0x0009c178) bg_sp_fs_scroll_pane_g1

0xe77f,	// (0x0009c181) bg_sp_fs_scroll_pane_g2

0xe788,	// (0x0009c18a) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0009d750) bg_sp_fs_scroll_pane_g

0xf048,	// (0x0009ca4a) list_medium_line_x2_t3_g4_g1_ParamLimits

0xf048,	// (0x0009ca4a) list_medium_line_x2_t3_g4_g1

0xf06c,	// (0x0009ca6e) list_medium_line_x2_t3_g4_g2_ParamLimits

0xf06c,	// (0x0009ca6e) list_medium_line_x2_t3_g4_g2

0xf060,	// (0x0009ca62) list_medium_line_x2_t3_g4_g3_ParamLimits

0xf060,	// (0x0009ca62) list_medium_line_x2_t3_g4_g3

0xf054,	// (0x0009ca56) list_medium_line_x2_t3_g4_g4_ParamLimits

0xf054,	// (0x0009ca56) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0009ccc4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0009ccc4) list_medium_line_x2_t3_g4_g

0x05f2,	// (0x0008dff4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x05f2,	// (0x0008dff4) list_medium_line_x2_t3_g4_t1

0x0608,	// (0x0008e00a) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0608,	// (0x0008e00a) list_medium_line_x2_t3_g4_t2

0xf078,	// (0x0009ca7a) list_medium_line_x2_t3_g4_t3_ParamLimits

0xf078,	// (0x0009ca7a) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd55,	// (0x0009d757) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd55,	// (0x0009d757) list_medium_line_x2_t3_g4_t

0x71b5,	// (0x00094bb7) list_medium_line_g2_g1_ParamLimits

0x71b5,	// (0x00094bb7) list_medium_line_g2_g1

0xab81,	// (0x00098583) list_medium_line_g2_g2_ParamLimits

0xab81,	// (0x00098583) list_medium_line_g2_g2

0x0001,

0xfa07,	// (0x0009d409) list_medium_line_g2_g_ParamLimits

0xfa07,	// (0x0009d409) list_medium_line_g2_g

0x8796,	// (0x00096198) list_medium_line_g2_t1_ParamLimits

0x8796,	// (0x00096198) list_medium_line_g2_t1

0x71b5,	// (0x00094bb7) list_medium_line_t3_g2_g1_ParamLimits

0x71b5,	// (0x00094bb7) list_medium_line_t3_g2_g1

0xab81,	// (0x00098583) list_medium_line_t3_g2_g2_ParamLimits

0xab81,	// (0x00098583) list_medium_line_t3_g2_g2

0x0001,

0xfa07,	// (0x0009d409) list_medium_line_t3_g2_g_ParamLimits

0xfa07,	// (0x0009d409) list_medium_line_t3_g2_g

0x0621,	// (0x0008e023) list_medium_line_t3_g2_t1_ParamLimits

0x0621,	// (0x0008e023) list_medium_line_t3_g2_t1

0x0638,	// (0x0008e03a) list_medium_line_t3_g2_t2_ParamLimits

0x0638,	// (0x0008e03a) list_medium_line_t3_g2_t2

0x064d,	// (0x0008e04f) list_medium_line_t3_g2_t3_ParamLimits

0x064d,	// (0x0008e04f) list_medium_line_t3_g2_t3

0x0002,

0xfd5c,	// (0x0009d75e) list_medium_line_t3_g2_t_ParamLimits

0xfd5c,	// (0x0009d75e) list_medium_line_t3_g2_t

0xac2b,	// (0x0009862d) list_medium_line_right_icon_g1

0x87ab,	// (0x000961ad) list_medium_line_right_icon_t1

0x71b5,	// (0x00094bb7) list_medium_line_t2_g1_ParamLimits

0x71b5,	// (0x00094bb7) list_medium_line_t2_g1

0x0666,	// (0x0008e068) list_medium_line_t2_t1_ParamLimits

0x0666,	// (0x0008e068) list_medium_line_t2_t1

0x0680,	// (0x0008e082) list_medium_line_t2_t2_ParamLimits

0x0680,	// (0x0008e082) list_medium_line_t2_t2

0x0001,

0xfd63,	// (0x0009d765) list_medium_line_t2_t_ParamLimits

0xfd63,	// (0x0009d765) list_medium_line_t2_t

0x71b5,	// (0x00094bb7) list_medium_line_t3_g1_ParamLimits

0x71b5,	// (0x00094bb7) list_medium_line_t3_g1

0x0699,	// (0x0008e09b) list_medium_line_t3_t1_ParamLimits

0x0699,	// (0x0008e09b) list_medium_line_t3_t1

0x06b3,	// (0x0008e0b5) list_medium_line_t3_t2_ParamLimits

0x06b3,	// (0x0008e0b5) list_medium_line_t3_t2

0x06c9,	// (0x0008e0cb) list_medium_line_t3_t3_ParamLimits

0x06c9,	// (0x0008e0cb) list_medium_line_t3_t3

0x0002,

0xfd68,	// (0x0009d76a) list_medium_line_t3_t_ParamLimits

0xfd68,	// (0x0009d76a) list_medium_line_t3_t

0x71b5,	// (0x00094bb7) list_medium_line_g3_g1_ParamLimits

0x71b5,	// (0x00094bb7) list_medium_line_g3_g1

0xac3b,	// (0x0009863d) list_medium_line_g3_g2_ParamLimits

0xac3b,	// (0x0009863d) list_medium_line_g3_g2

0xab81,	// (0x00098583) list_medium_line_g3_g3_ParamLimits

0xab81,	// (0x00098583) list_medium_line_g3_g3

0x0002,

0xfd6f,	// (0x0009d771) list_medium_line_g3_g_ParamLimits

0xfd6f,	// (0x0009d771) list_medium_line_g3_g

0x87b9,	// (0x000961bb) list_medium_line_g3_t1_ParamLimits

0x87b9,	// (0x000961bb) list_medium_line_g3_t1

0x71b5,	// (0x00094bb7) list_medium_line_t2_g3_g1_ParamLimits

0x71b5,	// (0x00094bb7) list_medium_line_t2_g3_g1

0xac3b,	// (0x0009863d) list_medium_line_t2_g3_g2_ParamLimits

0xac3b,	// (0x0009863d) list_medium_line_t2_g3_g2

0xab81,	// (0x00098583) list_medium_line_t2_g3_g3_ParamLimits

0xab81,	// (0x00098583) list_medium_line_t2_g3_g3

0x0002,

0xfd6f,	// (0x0009d771) list_medium_line_t2_g3_g_ParamLimits

0xfd6f,	// (0x0009d771) list_medium_line_t2_g3_g

0x06de,	// (0x0008e0e0) list_medium_line_t2_g3_t1_ParamLimits

0x06de,	// (0x0008e0e0) list_medium_line_t2_g3_t1

0x06f8,	// (0x0008e0fa) list_medium_line_t2_g3_t2_ParamLimits

0x06f8,	// (0x0008e0fa) list_medium_line_t2_g3_t2

0x0001,

0xfd76,	// (0x0009d778) list_medium_line_t2_g3_t_ParamLimits

0xfd76,	// (0x0009d778) list_medium_line_t2_g3_t

0x71b5,	// (0x00094bb7) list_medium_line_t3_g3_g1_ParamLimits

0x71b5,	// (0x00094bb7) list_medium_line_t3_g3_g1

0xac3b,	// (0x0009863d) list_medium_line_t3_g3_g2_ParamLimits

0xac3b,	// (0x0009863d) list_medium_line_t3_g3_g2

0xab81,	// (0x00098583) list_medium_line_t3_g3_g3_ParamLimits

0xab81,	// (0x00098583) list_medium_line_t3_g3_g3

0x0002,

0xfd6f,	// (0x0009d771) list_medium_line_t3_g3_g_ParamLimits

0xfd6f,	// (0x0009d771) list_medium_line_t3_g3_g

0x0712,	// (0x0008e114) list_medium_line_t3_g3_t1_ParamLimits

0x0712,	// (0x0008e114) list_medium_line_t3_g3_t1

0x0726,	// (0x0008e128) list_medium_line_t3_g3_t2_ParamLimits

0x0726,	// (0x0008e128) list_medium_line_t3_g3_t2

0x0738,	// (0x0008e13a) list_medium_line_t3_g3_t3_ParamLimits

0x0738,	// (0x0008e13a) list_medium_line_t3_g3_t3

0x0002,

0xfd7b,	// (0x0009d77d) list_medium_line_t3_g3_t_ParamLimits

0xfd7b,	// (0x0009d77d) list_medium_line_t3_g3_t

0xac33,	// (0x00098635) list_medium_line_right_iconx2_g1

0xac2b,	// (0x0009862d) list_medium_line_right_iconx2_g2

0x0001,

0xfd82,	// (0x0009d784) list_medium_line_right_iconx2_g

0xac47,	// (0x00098649) list_medium_line_right_iconx2_t1

0xac33,	// (0x00098635) list_medium_line_t2_right_iconx2_g1

0xac2b,	// (0x0009862d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd82,	// (0x0009d784) list_medium_line_t2_right_iconx2_g

0x074c,	// (0x0008e14e) list_medium_line_t2_right_iconx2_t1

0x075c,	// (0x0008e15e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd87,	// (0x0009d789) list_medium_line_t2_right_iconx2_t

0x076e,	// (0x0008e170) list_medium_line_x4_t4_t1

0x077c,	// (0x0008e17e) list_medium_line_x4_t4_t2

0x078c,	// (0x0008e18e) list_medium_line_x4_t4_t3

0x079c,	// (0x0008e19e) list_medium_line_x4_t4_t4

0x0003,

0xfd8c,	// (0x0009d78e) list_medium_line_x4_t4_t

0x8811,	// (0x00096213) tport_appsw_pane_ParamLimits

0x8811,	// (0x00096213) tport_appsw_pane

0x8829,	// (0x0009622b) tport_contact_pane_ParamLimits

0x8829,	// (0x0009622b) tport_contact_pane

0x8841,	// (0x00096243) tport_listscroll_pane_ParamLimits

0x8841,	// (0x00096243) tport_listscroll_pane

0x885b,	// (0x0009625d) cell_tport_appsw_pane_ParamLimits

0x885b,	// (0x0009625d) cell_tport_appsw_pane

0xd606,	// (0x0009b008) tport_appsw_pane_g1_ParamLimits

0xd606,	// (0x0009b008) tport_appsw_pane_g1

0xe791,	// (0x0009c193) tport_contact_pane_g1

0xe79a,	// (0x0009c19c) tport_contact_pane_t1

0xe7a8,	// (0x0009c1aa) tport_contact_pane_t2

0x0001,

0xfd95,	// (0x0009d797) tport_contact_pane_t

0xe7b6,	// (0x0009c1b8) list_tport_pane

0xe7bf,	// (0x0009c1c1) scroll_pane_cp_030

0x88ad,	// (0x000962af) cell_tport_appsw_pane_g1

0x88bd,	// (0x000962bf) cell_tport_appsw_pane_t1

0x88cb,	// (0x000962cd) grid_highlight_pane_cp019

0x88d3,	// (0x000962d5) list_tport_double_graphic_pane_ParamLimits

0x88d3,	// (0x000962d5) list_tport_double_graphic_pane

0x9a12,	// (0x00097414) list_highlight_pane_cp023_ParamLimits

0x9a12,	// (0x00097414) list_highlight_pane_cp023

0x88e0,	// (0x000962e2) list_tport_double_graphic_pane_g1_ParamLimits

0x88e0,	// (0x000962e2) list_tport_double_graphic_pane_g1

0x88ed,	// (0x000962ef) list_tport_double_graphic_pane_t1_ParamLimits

0x88ed,	// (0x000962ef) list_tport_double_graphic_pane_t1

0x8902,	// (0x00096304) list_tport_double_graphic_pane_t2_ParamLimits

0x8902,	// (0x00096304) list_tport_double_graphic_pane_t2

0x0001,

0xfda1,	// (0x0009d7a3) list_tport_double_graphic_pane_t_ParamLimits

0xfda1,	// (0x0009d7a3) list_tport_double_graphic_pane_t

0x99c1,	// (0x000973c3) main_cale_note_pane

0x6955,	// (0x00094357) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6955,	// (0x00094357) cell_vitu2_function_top_wide_pane_cp01

0x81aa,	// (0x00095bac) wait_bar_pane_cp05_ParamLimits

0x9a12,	// (0x00097414) listscroll_cmail_pane

0xe7d0,	// (0x0009c1d2) list_cmail_pane

0x891e,	// (0x00096320) list_cmail_body_pane

0xe5b3,	// (0x0009bfb5) list_single_cmail_header_caption_pane

0x8931,	// (0x00096333) list_single_cmail_header_detail_pane_ParamLimits

0x8931,	// (0x00096333) list_single_cmail_header_detail_pane

0x895c,	// (0x0009635e) list_single_cmail_header_caption_pane_t1

0x07ac,	// (0x0008e1ae) list_single_cmail_header_detail_pane_g1_ParamLimits

0x07ac,	// (0x0008e1ae) list_single_cmail_header_detail_pane_g1

0xac55,	// (0x00098657) list_single_cmail_header_detail_pane_g2_ParamLimits

0xac55,	// (0x00098657) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda6,	// (0x0009d7a8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda6,	// (0x0009d7a8) list_single_cmail_header_detail_pane_g

0x896c,	// (0x0009636e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x896c,	// (0x0009636e) list_single_cmail_header_detail_pane_t1

0x89de,	// (0x000963e0) list_single_cmail_header_editor_pane_bg_ParamLimits

0x89de,	// (0x000963e0) list_single_cmail_header_editor_pane_bg

0xe292,	// (0x0009bc94) list_cmail_body_pane_g1

0xe7fd,	// (0x0009c1ff) list_cmail_body_pane_t1

0xd626,	// (0x0009b028) list_single_cmail_header_editor_pane_bg_g1

0xacbd,	// (0x000986bf) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd636,	// (0x0009b038) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd62e,	// (0x0009b030) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd86b,	// (0x0009b26d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd656,	// (0x0009b058) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd646,	// (0x0009b048) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd64e,	// (0x0009b050) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac9d,	// (0x0009869f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x89f5,	// (0x000963f7) calenote_gesture_pane_ParamLimits

0x89f5,	// (0x000963f7) calenote_gesture_pane

0x8a15,	// (0x00096417) calenote_window_pane_ParamLimits

0x8a15,	// (0x00096417) calenote_window_pane

0xe80b,	// (0x0009c20d) popup_note_window_cp01

0x8a31,	// (0x00096433) calenote_swipe_1_pane_ParamLimits

0x8a31,	// (0x00096433) calenote_swipe_1_pane

0x85c9,	// (0x00095fcb) calenote_swipe_2_pane_ParamLimits

0x85c9,	// (0x00095fcb) calenote_swipe_2_pane

0xe618,	// (0x0009c01a) calenote_swipe_1_pane_g1_ParamLimits

0xe618,	// (0x0009c01a) calenote_swipe_1_pane_g1

0xe625,	// (0x0009c027) calenote_swipe_1_pane_g2_ParamLimits

0xe625,	// (0x0009c027) calenote_swipe_1_pane_g2

0x0001,

0xfcca,	// (0x0009d6cc) calenote_swipe_1_pane_g_ParamLimits

0xfcca,	// (0x0009d6cc) calenote_swipe_1_pane_g

0xe81d,	// (0x0009c21f) calenote_swipe_1_pane_t1_ParamLimits

0xe81d,	// (0x0009c21f) calenote_swipe_1_pane_t1

0xe618,	// (0x0009c01a) calenote_swipe_2_pane_g1_ParamLimits

0xe618,	// (0x0009c01a) calenote_swipe_2_pane_g1

0xe83c,	// (0x0009c23e) calenote_swipe_2_pane_g2_ParamLimits

0xe83c,	// (0x0009c23e) calenote_swipe_2_pane_g2

0x0001,

0xfdb2,	// (0x0009d7b4) calenote_swipe_2_pane_g_ParamLimits

0xfdb2,	// (0x0009d7b4) calenote_swipe_2_pane_g

0xe848,	// (0x0009c24a) calenote_swipe_2_pane_t1_ParamLimits

0xe848,	// (0x0009c24a) calenote_swipe_2_pane_t1

0x99c1,	// (0x000973c3) main_mup_navstr_pane

0x55a4,	// (0x00092fa6) main_mup3_pane_t7_ParamLimits

0x55a4,	// (0x00092fa6) main_mup3_pane_t7

0xa856,	// (0x00098258) main_mp4_pane_g6_ParamLimits

0xa856,	// (0x00098258) main_mp4_pane_g6

0xa9fa,	// (0x000983fc) main_image3_pane_t4_ParamLimits

0xa9fa,	// (0x000983fc) main_image3_pane_t4

0x8a46,	// (0x00096448) popup_navstr_preview_pane_ParamLimits

0x8a46,	// (0x00096448) popup_navstr_preview_pane

0x8a56,	// (0x00096458) scroll_navstr_pane_ParamLimits

0x8a56,	// (0x00096458) scroll_navstr_pane

0x99c1,	// (0x000973c3) bg_popup_preview_window_pane_cp04

0xe86f,	// (0x0009c271) popup_navstr_preview_pane_t1

0x8a6a,	// (0x0009646c) scroll_navstr_pane_g1_ParamLimits

0x8a6a,	// (0x0009646c) scroll_navstr_pane_g1

0x8a7e,	// (0x00096480) scroll_navstr_pane_t1_ParamLimits

0x8a7e,	// (0x00096480) scroll_navstr_pane_t1

0xe814,	// (0x0009c216) bg_button_pane_cp014

0xe814,	// (0x0009c216) bg_button_pane_cp030

0x0243,	// (0x0008dc45) list_double_fisheye_pane_g4_ParamLimits

0x0243,	// (0x0008dc45) list_double_fisheye_pane_g4

0x024f,	// (0x0008dc51) list_double_fisheye_pane_g5_ParamLimits

0x024f,	// (0x0008dc51) list_double_fisheye_pane_g5

0xe7d8,	// (0x0009c1da) sp_fs_scroll_pane_cp03

0xe5a7,	// (0x0009bfa9) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6f0,	// (0x0009c0f2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce7,	// (0x0009d6e9) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe6fc,	// (0x0009c0fe) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8914,	// (0x00096316) sp_fs_scroll_pane_cp02

0xa301,	// (0x00097d03) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa301,	// (0x00097d03) popup_sp_fs_calendar_preview_list_single_pane

0x99c1,	// (0x000973c3) main_cam6_pano_pane

0x9a12,	// (0x00097414) main_mup3_pane_ParamLimits

0x99c1,	// (0x000973c3) main_phacti_pane

0x807d,	// (0x00095a7f) bg_button_pane_cp11

0x8097,	// (0x00095a99) main_mobtv_info_pane_g2_ParamLimits

0x8097,	// (0x00095a99) main_mobtv_info_pane_g2

0x0001,

0xfc47,	// (0x0009d649) main_mobtv_info_pane_g_ParamLimits

0xfc47,	// (0x0009d649) main_mobtv_info_pane_g

0x8272,	// (0x00095c74) sc_clock_pane_t5_ParamLimits

0x8272,	// (0x00095c74) sc_clock_pane_t5

0x8350,	// (0x00095d52) main_radioblah_pane_g1_ParamLimits

0xe53d,	// (0x0009bf3f) main_radioblah_pane_t3_ParamLimits

0xe53d,	// (0x0009bf3f) main_radioblah_pane_t3

0xe555,	// (0x0009bf57) main_radioblah_pane_t4_ParamLimits

0xe555,	// (0x0009bf57) main_radioblah_pane_t4

0x8378,	// (0x00095d7a) main_radioblah_text_pane_ParamLimits

0x8378,	// (0x00095d7a) main_radioblah_text_pane

0x838a,	// (0x00095d8c) main_radioblah_info_pane_g1_ParamLimits

0x8423,	// (0x00095e25) main_radioblah_info_pane_t4_ParamLimits

0x8423,	// (0x00095e25) main_radioblah_info_pane_t4

0x9a12,	// (0x00097414) main_sp_fs_calendar_pane

0x8a95,	// (0x00096497) main_phacti_pane_g1

0x8a9d,	// (0x0009649f) phacti_note_pane_ParamLimits

0x8a9d,	// (0x0009649f) phacti_note_pane

0xe886,	// (0x0009c288) phacti_term_pane_ParamLimits

0xe886,	// (0x0009c288) phacti_term_pane

0xe89b,	// (0x0009c29d) phacti_note_pane_t1_ParamLimits

0xe89b,	// (0x0009c29d) phacti_note_pane_t1

0x8ab1,	// (0x000964b3) phacti_term_pane_g1

0x8ab9,	// (0x000964bb) phacti_term_pane_t1_ParamLimits

0x8ab9,	// (0x000964bb) phacti_term_pane_t1

0xe8b2,	// (0x0009c2b4) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8ba,	// (0x0009c2bc) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbc,	// (0x0009d7be) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8c2,	// (0x0009c2c4) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8c2,	// (0x0009c2c4) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8d8,	// (0x0009c2da) aid_popup_sp_fs_bg_corner_pane

0xcc04,	// (0x0009a606) popup_sp_fs_calendar_preview_bg_pane_g1

0x99c1,	// (0x000973c3) popup_sp_fs_calendar_preview_bg_pane

0xe8e0,	// (0x0009c2e2) popup_sp_fs_calendar_preview_list_pane

0xc7b3,	// (0x0009a1b5) bg_main_sp_fs_cale_pane_ParamLimits

0xc7b3,	// (0x0009a1b5) bg_main_sp_fs_cale_pane

0x8b49,	// (0x0009654b) listscroll_cale_mrui_pane_ParamLimits

0x8b49,	// (0x0009654b) listscroll_cale_mrui_pane

0x8b5e,	// (0x00096560) listscroll_sp_fs_schedule_track_pane

0x8b67,	// (0x00096569) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8b67,	// (0x00096569) main_sp_fs_ctrlbar_pane_cp01

0xe8e8,	// (0x0009c2ea) main_sp_fs_ribbon_pane

0x8b7a,	// (0x0009657c) popup_sp_fs_cale_preview_window

0x8b8c,	// (0x0009658e) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8b8c,	// (0x0009658e) list_single_sp_fs_schedule_track_pane

0x9a12,	// (0x00097414) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x9a12,	// (0x00097414) bg_sp_fs_highlight_list_pane_cp03

0x8ba0,	// (0x000965a2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ba0,	// (0x000965a2) list_single_sp_fs_schedule_track_pane_g1

0x8bac,	// (0x000965ae) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8bac,	// (0x000965ae) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc1,	// (0x0009d7c3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc1,	// (0x0009d7c3) list_single_sp_fs_schedule_track_pane_g

0x8bb8,	// (0x000965ba) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8bb8,	// (0x000965ba) list_single_sp_fs_schedule_track_pane_t1

0x8bda,	// (0x000965dc) sp_fs_schedule_track_pane_ParamLimits

0x8bda,	// (0x000965dc) sp_fs_schedule_track_pane

0xe8f0,	// (0x0009c2f2) sp_fs_schedule_track_pane_g1

0xe8f8,	// (0x0009c2fa) sp_fs_schedule_track_pane_g2

0xe900,	// (0x0009c302) sp_fs_schedule_track_pane_g3

0xe908,	// (0x0009c30a) sp_fs_schedule_track_pane_g4

0xe910,	// (0x0009c312) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc6,	// (0x0009d7c8) sp_fs_schedule_track_pane_g

0xd626,	// (0x0009b028) bg_sp_fs_schedule_viewer_highlight_g1

0xacbd,	// (0x000986bf) bg_sp_fs_schedule_viewer_highlight_g2

0xd62e,	// (0x0009b030) bg_sp_fs_schedule_viewer_highlight_g3

0xd636,	// (0x0009b038) bg_sp_fs_schedule_viewer_highlight_g4

0xd86b,	// (0x0009b26d) bg_sp_fs_schedule_viewer_highlight_g5

0xd646,	// (0x0009b048) bg_sp_fs_schedule_viewer_highlight_g6

0xd64e,	// (0x0009b050) bg_sp_fs_schedule_viewer_highlight_g7

0xd656,	// (0x0009b058) bg_sp_fs_schedule_viewer_highlight_g8

0xac9d,	// (0x0009869f) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd1,	// (0x0009d7d3) bg_sp_fs_schedule_viewer_highlight_g

0x99c1,	// (0x000973c3) bg_main_sp_fs_ribbon_pane

0x8bef,	// (0x000965f1) main_sp_fs_ribbon_pane_g1

0xe918,	// (0x0009c31a) main_sp_fs_ribbon_pane_t1

0x8bf8,	// (0x000965fa) main_sp_fs_ribbon_pane_t2

0xe927,	// (0x0009c329) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde4,	// (0x0009d7e6) main_sp_fs_ribbon_pane_t

0xe936,	// (0x0009c338) main_sp_fs_ribbon_scheduler_pane

0xe93e,	// (0x0009c340) bg_main_sp_fs_ribbon_pane_g1

0xe947,	// (0x0009c349) bg_main_sp_fs_ribbon_pane_g2

0xe950,	// (0x0009c352) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdeb,	// (0x0009d7ed) bg_main_sp_fs_ribbon_pane_g

0xe958,	// (0x0009c35a) main_sp_fs_ribbon_scheduler_pane_g1

0xe961,	// (0x0009c363) main_sp_fs_ribbon_scheduler_pane_g2

0xe96a,	// (0x0009c36c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf2,	// (0x0009d7f4) main_sp_fs_ribbon_scheduler_pane_g

0xe973,	// (0x0009c375) list_cale_mrui_pane

0x8c07,	// (0x00096609) sp_fs_scroll_pane_cp07_ParamLimits

0x8c07,	// (0x00096609) sp_fs_scroll_pane_cp07

0x8c23,	// (0x00096625) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8c23,	// (0x00096625) bg_sp_fs_schedule_viewer_highlight

0xe980,	// (0x0009c382) list_single_sp_fs_schedule_track_pane_cp01

0xe988,	// (0x0009c38a) list_sp_fs_schedule_track_pane

0xe990,	// (0x0009c392) sp_fs_scroll_pane_cp06_ParamLimits

0xe990,	// (0x0009c392) sp_fs_scroll_pane_cp06

0xcc04,	// (0x0009a606) bgmain_sp_fs_calendar_pane_g1

0x07c4,	// (0x0008e1c6) list_single_cale_mrui_pane_ParamLimits

0x07c4,	// (0x0008e1c6) list_single_cale_mrui_pane

0x8c35,	// (0x00096637) list_single_cale_mrui_row_pane_ParamLimits

0x8c35,	// (0x00096637) list_single_cale_mrui_row_pane

0x8c4b,	// (0x0009664d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8c4b,	// (0x0009664d) list_single_cale_mrui_row_pane_g1

0x8c77,	// (0x00096679) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8c77,	// (0x00096679) list_single_cale_mrui_row_pane_t1

0x07d9,	// (0x0008e1db) list_single_cale_mrui_row_pane_t2_ParamLimits

0x07d9,	// (0x0008e1db) list_single_cale_mrui_row_pane_t2

0x8c89,	// (0x0009668b) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8c89,	// (0x0009668b) list_single_cale_mrui_row_pane_t3

0x8cb8,	// (0x000966ba) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8cb8,	// (0x000966ba) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe00,	// (0x0009d802) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe00,	// (0x0009d802) list_single_cale_mrui_row_pane_t

0x0841,	// (0x0008e243) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x0841,	// (0x0008e243) list_single_cmail_header_editor_pane_bg_cp01

0x0865,	// (0x0008e267) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x0865,	// (0x0008e267) list_single_cmail_header_editor_pane_bg_cp02

0x8ce7,	// (0x000966e9) main_radioblah_text_pane_t1_ParamLimits

0x8ce7,	// (0x000966e9) main_radioblah_text_pane_t1

0xe9af,	// (0x0009c3b1) cam6_indi_pane_cp01

0xe9b7,	// (0x0009c3b9) cam6_mode_pane_cp01

0xe9bf,	// (0x0009c3c1) cam6_pano_pane

0xe9c8,	// (0x0009c3ca) cam6_zoom_pane_cp01

0xe9d2,	// (0x0009c3d4) cam6_pano_image_pane

0xe9db,	// (0x0009c3dd) cam6_pano_pane_g1

0xe292,	// (0x0009bc94) cam6_pano_pane_g2

0xe9e4,	// (0x0009c3e6) cam6_pano_pane_g3

0xe9ed,	// (0x0009c3ef) cam6_pano_pane_g4

0xd19e,	// (0x0009aba0) cam6_pano_pane_g5

0xe9f6,	// (0x0009c3f8) cam6_pano_pane_g6

0xe9fe,	// (0x0009c400) cam6_pano_pane_g7

0xea06,	// (0x0009c408) cam6_pano_pane_g8

0xea0f,	// (0x0009c411) cam6_pano_pane_g9

0x0008,

0xfe09,	// (0x0009d80b) cam6_pano_pane_g

0x99c1,	// (0x000973c3) main_browser_tag_pane

0xe867,	// (0x0009c269) grid_navstr_albumart_pane

0xea1a,	// (0x0009c41c) cell_navstr_albumart_pane_ParamLimits

0xea1a,	// (0x0009c41c) cell_navstr_albumart_pane

0xea39,	// (0x0009c43b) cell_navstr_albumart_pane_g1

0xc5c0,	// (0x00099fc2) cell_navstr_albumart_pane_g2

0xc5d0,	// (0x00099fd2) cell_navstr_albumart_pane_g3

0xc5c8,	// (0x00099fca) cell_navstr_albumart_pane_g4

0x0003,

0xfe1c,	// (0x0009d81e) cell_navstr_albumart_pane_g

0x8d02,	// (0x00096704) bt_list_pane_ParamLimits

0x8d02,	// (0x00096704) bt_list_pane

0x8d18,	// (0x0009671a) bt_list_pane_t1

0x8d27,	// (0x00096729) bt_list_pane_t2

0x0001,

0xfe25,	// (0x0009d827) bt_list_pane_t

0x99c1,	// (0x000973c3) main_cale_prevew_pane

0x8d36,	// (0x00096738) popup_cale_preview_window_ParamLimits

0x8d36,	// (0x00096738) popup_cale_preview_window

0x9a12,	// (0x00097414) bg_popup_preview_window_pane_cp05_ParamLimits

0x9a12,	// (0x00097414) bg_popup_preview_window_pane_cp05

0xea41,	// (0x0009c443) list_cale_preview_pane_ParamLimits

0xea41,	// (0x0009c443) list_cale_preview_pane

0x8d53,	// (0x00096755) list_double_cale_preview_pane_ParamLimits

0x8d53,	// (0x00096755) list_double_cale_preview_pane

0x8d67,	// (0x00096769) list_single_cale_preview_pane_ParamLimits

0x8d67,	// (0x00096769) list_single_cale_preview_pane

0x8d7f,	// (0x00096781) list_single_cale_preview_pane_g1

0x8d87,	// (0x00096789) list_single_cale_preview_pane_t1_ParamLimits

0x8d87,	// (0x00096789) list_single_cale_preview_pane_t1

0x8d9c,	// (0x0009679e) list_double_cale_preview_pane_g1

0x8da4,	// (0x000967a6) list_double_cale_preview_pane_t1_ParamLimits

0x8da4,	// (0x000967a6) list_double_cale_preview_pane_t1

0x8db9,	// (0x000967bb) list_double_cale_preview_pane_t2_ParamLimits

0x8db9,	// (0x000967bb) list_double_cale_preview_pane_t2

0x0001,

0xfe2a,	// (0x0009d82c) list_double_cale_preview_pane_t_ParamLimits

0xfe2a,	// (0x0009d82c) list_double_cale_preview_pane_t

0x99c1,	// (0x000973c3) main_ezdial_pane

0x9a12,	// (0x00097414) main_sp_fs_email_pane_ParamLimits

0x8629,	// (0x0009602b) cmail_ddmenu_btn01_pane_ParamLimits

0x8629,	// (0x0009602b) cmail_ddmenu_btn01_pane

0x863c,	// (0x0009603e) cmail_ddmenu_btn02_pane_ParamLimits

0x863c,	// (0x0009603e) cmail_ddmenu_btn02_pane

0x865f,	// (0x00096061) cmail_ddmenu_btn03_pane_ParamLimits

0x865f,	// (0x00096061) cmail_ddmenu_btn03_pane

0x02bf,	// (0x0008dcc1) main_sp_fs_ctrlbar_pane_ParamLimits

0x02e3,	// (0x0008dce5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x891e,	// (0x00096320) list_cmail_body_pane_ParamLimits

0xe7e7,	// (0x0009c1e9) bg_button_pane_cp12

0xe7f0,	// (0x0009c1f2) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7f0,	// (0x0009c1f2) list_single_cmail_header_detail_pane_g3

0x89ba,	// (0x000963bc) list_single_cmail_header_detail_pane_t2_ParamLimits

0x89ba,	// (0x000963bc) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdad,	// (0x0009d7af) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdad,	// (0x0009d7af) list_single_cmail_header_detail_pane_t

0x8ace,	// (0x000964d0) phacti_term_pane_t2_ParamLimits

0x8ace,	// (0x000964d0) phacti_term_pane_t2

0x0001,

0xfdb7,	// (0x0009d7b9) phacti_term_pane_t_ParamLimits

0xfdb7,	// (0x0009d7b9) phacti_term_pane_t

0xea4d,	// (0x0009c44f) aid_size_list_single_double

0x8dd1,	// (0x000967d3) popup_ezdial_listscroll_window

0x8ded,	// (0x000967ef) popup_number_entry_window_cp01

0xa3a1,	// (0x00097da3) bg_popup_call_pane_cp09

0xea59,	// (0x0009c45b) ezdial_list_pane

0xea61,	// (0x0009c463) scroll_pane_cp23

0xc7b3,	// (0x0009a1b5) bg_button_pane_cp028_ParamLimits

0xc7b3,	// (0x0009a1b5) bg_button_pane_cp028

0x8dfb,	// (0x000967fd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8dfb,	// (0x000967fd) cmail_ddmenu_btn01_pane_g1

0x8e0a,	// (0x0009680c) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8e0a,	// (0x0009680c) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2f,	// (0x0009d831) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2f,	// (0x0009d831) cmail_ddmenu_btn01_pane_g

0xea69,	// (0x0009c46b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea69,	// (0x0009c46b) cmail_ddmenu_btn01_pane_t1

0xc7b3,	// (0x0009a1b5) bg_button_pane_cp029_ParamLimits

0xc7b3,	// (0x0009a1b5) bg_button_pane_cp029

0x8e20,	// (0x00096822) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8e20,	// (0x00096822) cmail_ddmenu_btn02_pane_g1

0x8e3b,	// (0x0009683d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8e3b,	// (0x0009683d) cmail_ddmenu_btn02_pane_t1

0x9a12,	// (0x00097414) bg_button_pane_cp031_ParamLimits

0x9a12,	// (0x00097414) bg_button_pane_cp031

0x8e20,	// (0x00096822) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8e20,	// (0x00096822) cmail_ddmenu_btn03_pane_g1

0x8e3b,	// (0x0009683d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8e3b,	// (0x0009683d) cmail_ddmenu_btn03_pane_t1

0x6184,	// (0x00093b86) cell_dialer2_keypad_pane_t1_ParamLimits

0x619e,	// (0x00093ba0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x619e,	// (0x00093ba0) cell_dialer2_keypad_pane_t1_copy1

0x7ee2,	// (0x000958e4) ncimui_group_button_pane

0x9a12,	// (0x00097414) main_sp_fs_calendar_pane_ParamLimits

0xe5b3,	// (0x0009bfb5) list_single_cmail_header_caption_pane_ParamLimits

0x8b01,	// (0x00096503) aid_recal_txt_sm_pane

0x99c1,	// (0x000973c3) mian_recal_day_pane

0x8b7a,	// (0x0009657c) popup_sp_fs_cale_preview_window_ParamLimits

0xea7f,	// (0x0009c481) list_recal_day_pane

0x8e7e,	// (0x00096880) list_single_recal_day_pane_ParamLimits

0x8e7e,	// (0x00096880) list_single_recal_day_pane

0xeaa6,	// (0x0009c4a8) list_single_recal_day_pane_g1_ParamLimits

0xeaa6,	// (0x0009c4a8) list_single_recal_day_pane_g1

0x8e90,	// (0x00096892) list_single_recal_day_pane_g2_ParamLimits

0x8e90,	// (0x00096892) list_single_recal_day_pane_g2

0x8e9c,	// (0x0009689e) list_single_recal_day_pane_g3_ParamLimits

0x8e9c,	// (0x0009689e) list_single_recal_day_pane_g3

0x0883,	// (0x0008e285) list_single_recal_day_pane_g4_ParamLimits

0x0883,	// (0x0008e285) list_single_recal_day_pane_g4

0x8ea8,	// (0x000968aa) list_single_recal_day_pane_g5_ParamLimits

0x8ea8,	// (0x000968aa) list_single_recal_day_pane_g5

0x8eb4,	// (0x000968b6) list_single_recal_day_pane_g6_ParamLimits

0x8eb4,	// (0x000968b6) list_single_recal_day_pane_g6

0x0004,

0xfe3e,	// (0x0009d840) list_single_recal_day_pane_g_ParamLimits

0xfe3e,	// (0x0009d840) list_single_recal_day_pane_g

0x8ec8,	// (0x000968ca) list_single_recal_day_pane_t1

0x8eda,	// (0x000968dc) list_single_recal_day_pane_t2

0x0001,

0xfe49,	// (0x0009d84b) list_single_recal_day_pane_t

0x8eec,	// (0x000968ee) ncimui_query_button_pane_ParamLimits

0x8eec,	// (0x000968ee) ncimui_query_button_pane

0x8efc,	// (0x000968fe) ncimui_query_button_pane_t1_ParamLimits

0x8efc,	// (0x000968fe) ncimui_query_button_pane_t1

0xeab2,	// (0x0009c4b4) ncimui_query_button_pane_t2_ParamLimits

0xeab2,	// (0x0009c4b4) ncimui_query_button_pane_t2

0x0001,

0xfe4e,	// (0x0009d850) ncimui_query_button_pane_t_ParamLimits

0xfe4e,	// (0x0009d850) ncimui_query_button_pane_t

0x8f0f,	// (0x00096911) query_button_pane_ParamLimits

0x8f0f,	// (0x00096911) query_button_pane

0x99c1,	// (0x000973c3) bg_button_pane_cp0028

0xeac5,	// (0x0009c4c7) query_button_pane_t1

0x417f,	// (0x00091b81) main_tport_pane_ParamLimits

0x87ce,	// (0x000961d0) bg_popup_window_pane_cp01_ParamLimits

0x87ce,	// (0x000961d0) bg_popup_window_pane_cp01

0x87e9,	// (0x000961eb) heading_pane_cp08_ParamLimits

0x87e9,	// (0x000961eb) heading_pane_cp08

0x87fc,	// (0x000961fe) heading_pane_cp07_ParamLimits

0x87fc,	// (0x000961fe) heading_pane_cp07

0x88ad,	// (0x000962af) cell_tport_appsw_pane_g2

0x0002,

0xfd9a,	// (0x0009d79c) cell_tport_appsw_pane_g

0x373f,	// (0x00091141) input_candi_list_open_g1

0xae71,	// (0x00098873) list_cale_time_pane_g6_ParamLimits

0xae71,	// (0x00098873) list_cale_time_pane_g6

0x4f89,	// (0x0009298b) aid_size_touch_calib_1_ParamLimits

0x4f89,	// (0x0009298b) aid_size_touch_calib_1

0x4f9b,	// (0x0009299d) aid_size_touch_calib_2_ParamLimits

0x4f9b,	// (0x0009299d) aid_size_touch_calib_2

0x4fb3,	// (0x000929b5) aid_size_touch_calib_3_ParamLimits

0x4fb3,	// (0x000929b5) aid_size_touch_calib_3

0x4fd1,	// (0x000929d3) aid_size_touch_calib_4_ParamLimits

0x4fd1,	// (0x000929d3) aid_size_touch_calib_4

0x4fe9,	// (0x000929eb) main_touch_calib_button_group_pane_ParamLimits

0x4fe9,	// (0x000929eb) main_touch_calib_button_group_pane

0x5001,	// (0x00092a03) main_touch_calib_pane_g1_ParamLimits

0x5013,	// (0x00092a15) main_touch_calib_pane_g2_ParamLimits

0x5025,	// (0x00092a27) main_touch_calib_pane_g3_ParamLimits

0x5037,	// (0x00092a39) main_touch_calib_pane_g4_ParamLimits

0xf758,	// (0x0009d15a) main_touch_calib_pane_g_ParamLimits

0x5049,	// (0x00092a4b) main_touch_calib_pane_t1_ParamLimits

0x5063,	// (0x00092a65) main_touch_calib_pane_t2_ParamLimits

0x507d,	// (0x00092a7f) main_touch_calib_pane_t3_ParamLimits

0x5091,	// (0x00092a93) main_touch_calib_pane_t4_ParamLimits

0x50a7,	// (0x00092aa9) main_touch_calib_pane_t5_ParamLimits

0xf761,	// (0x0009d163) main_touch_calib_pane_t_ParamLimits

0xcf34,	// (0x0009a936) list_single_fp_cale_pane_g3_ParamLimits

0xcf34,	// (0x0009a936) list_single_fp_cale_pane_g3

0x9a12,	// (0x00097414) bg_button_pane_cp012_ParamLimits

0x9a12,	// (0x00097414) bg_vkb2_func_pane_cp03_ParamLimits

0x716b,	// (0x00094b6d) cell_vitu2_function_top_pane_g1_ParamLimits

0x9a12,	// (0x00097414) bg_vkb2_func_pane_cp04_ParamLimits

0x7e70,	// (0x00095872) main_ncimui_button_group_pane_ParamLimits

0x7e70,	// (0x00095872) main_ncimui_button_group_pane

0x7ed0,	// (0x000958d2) main_ncimui_pane_t3_ParamLimits

0x7ed0,	// (0x000958d2) main_ncimui_pane_t3

0xe87d,	// (0x0009c27f) phacti_button_group_pane

0xea4d,	// (0x0009c44f) aid_size_list_single_double_ParamLimits

0x8dd1,	// (0x000967d3) popup_ezdial_listscroll_window_ParamLimits

0x8ded,	// (0x000967ef) popup_number_entry_window_cp01_ParamLimits

0x8f22,	// (0x00096924) phacti_button_pane_ParamLimits

0x8f22,	// (0x00096924) phacti_button_pane

0x99c1,	// (0x000973c3) bg_button_pane_cp14

0xead3,	// (0x0009c4d5) phacti_button_pane_t1

0x8f33,	// (0x00096935) main_touch_calib_button_pane_ParamLimits

0x8f33,	// (0x00096935) main_touch_calib_button_pane

0xa175,	// (0x00097b77) bg_button_pane_cp18_ParamLimits

0xa175,	// (0x00097b77) bg_button_pane_cp18

0xeae1,	// (0x0009c4e3) main_touch_calib_button_pane_t1_ParamLimits

0xeae1,	// (0x0009c4e3) main_touch_calib_button_pane_t1

0xeaf7,	// (0x0009c4f9) main_touch_calib_button_pane_t2_ParamLimits

0xeaf7,	// (0x0009c4f9) main_touch_calib_button_pane_t2

0x0001,

0xfe53,	// (0x0009d855) main_touch_calib_button_pane_t_ParamLimits

0xfe53,	// (0x0009d855) main_touch_calib_button_pane_t

0x99c1,	// (0x000973c3) cell_ncimui_button_pane

0x99c1,	// (0x000973c3) bg_button_pane_cp032

0xeb15,	// (0x0009c517) cell_ncimui_button_pane_t1

0xa9d8,	// (0x000983da) image3_infobar_pane_ParamLimits

0xa9d8,	// (0x000983da) image3_infobar_pane

0x829e,	// (0x00095ca0) fs_bigclock_status_pane_ParamLimits

0x829e,	// (0x00095ca0) fs_bigclock_status_pane

0x82ab,	// (0x00095cad) main_fs_bigclock_clock_pane_ParamLimits

0x82ab,	// (0x00095cad) main_fs_bigclock_clock_pane

0x82d5,	// (0x00095cd7) main_fs_bigclock_indi_pane_ParamLimits

0x82d5,	// (0x00095cd7) main_fs_bigclock_indi_pane

0x8313,	// (0x00095d15) main_fs_bigclock_swipe_pane_ParamLimits

0x8313,	// (0x00095d15) main_fs_bigclock_swipe_pane

0x99c1,	// (0x000973c3) main_fs_clock_dumped_data

0xe39f,	// (0x0009bda1) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe39f,	// (0x0009bda1) list_single_fs_bigclock_indicator_pane_g1

0xe3c9,	// (0x0009bdcb) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3c9,	// (0x0009bdcb) list_single_fs_bigclock_indicator_pane_g2

0xe3e3,	// (0x0009bde5) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3e3,	// (0x0009bde5) list_single_fs_bigclock_indicator_pane_g3

0xe3fd,	// (0x0009bdff) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3fd,	// (0x0009bdff) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7b,	// (0x0009d67d) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7b,	// (0x0009d67d) list_single_fs_bigclock_indicator_pane_g

0xe428,	// (0x0009be2a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe428,	// (0x0009be2a) list_single_fs_bigclock_indicator_pane_t1

0xe450,	// (0x0009be52) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe450,	// (0x0009be52) list_single_fs_bigclock_indicator_pane_t2

0xe478,	// (0x0009be7a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe478,	// (0x0009be7a) list_single_fs_bigclock_indicator_pane_t3

0xe4a0,	// (0x0009bea2) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4a0,	// (0x0009bea2) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc86,	// (0x0009d688) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc86,	// (0x0009d688) list_single_fs_bigclock_indicator_pane_t

0xeb23,	// (0x0009c525) image3_infobar_fav_pane_ParamLimits

0xeb23,	// (0x0009c525) image3_infobar_fav_pane

0xeb33,	// (0x0009c535) image3_infobar_loc_pane_ParamLimits

0xeb33,	// (0x0009c535) image3_infobar_loc_pane

0xeb49,	// (0x0009c54b) image3_infobar_time_pane_ParamLimits

0xeb49,	// (0x0009c54b) image3_infobar_time_pane

0xcc04,	// (0x0009a606) image3_infobar_time_pane_g1

0xeb59,	// (0x0009c55b) image3_infobar_time_pane_t1

0xcc04,	// (0x0009a606) image3_infobar_loc_pane_g1

0xeb67,	// (0x0009c569) image3_infobar_loc_pane_g2

0x0001,

0xfe58,	// (0x0009d85a) image3_infobar_loc_pane_g

0xeb6f,	// (0x0009c571) image3_infobar_loc_pane_t1

0xcc04,	// (0x0009a606) image3_infobar_fav_pane_g1

0xeb7d,	// (0x0009c57f) image3_infobar_fav_pane_g2

0x0001,

0xfe5d,	// (0x0009d85f) image3_infobar_fav_pane_g

0xeb85,	// (0x0009c587) fs_bigclock_status_battery_pane

0xeb8e,	// (0x0009c590) fs_bigclock_status_signal_pane

0xeb97,	// (0x0009c599) fs_bigclock_status_title_pane

0xeba0,	// (0x0009c5a2) fs_bigclock_status_signal_pane_g1

0xeba9,	// (0x0009c5ab) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe62,	// (0x0009d864) fs_bigclock_status_signal_pane_g

0xebb1,	// (0x0009c5b3) fs_bigclock_status_battery_pane_g1

0xebba,	// (0x0009c5bc) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe67,	// (0x0009d869) fs_bigclock_status_battery_pane_g

0xebc2,	// (0x0009c5c4) fs_bigclock_status_title_pane_t1

0xcc04,	// (0x0009a606) main_fs_bigclock_clock_pane_g1

0xebd0,	// (0x0009c5d2) main_fs_bigclock_clock_pane_g2

0xebdb,	// (0x0009c5dd) main_fs_bigclock_clock_pane_g3

0xebdb,	// (0x0009c5dd) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6c,	// (0x0009d86e) main_fs_bigclock_clock_pane_g

0xebe7,	// (0x0009c5e9) main_fs_bigclock_clock_pane_t1

0x8f48,	// (0x0009694a) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe75,	// (0x0009d877) main_fs_bigclock_clock_pane_t

0x8f57,	// (0x00096959) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8f57,	// (0x00096959) list_single_fs_bigclock_indicator_pane

0x8f68,	// (0x0009696a) list_single_fs_bigclock_pane_ParamLimits

0x8f68,	// (0x0009696a) list_single_fs_bigclock_pane

0xebfe,	// (0x0009c600) main_fs_bigclock_indicator_pane_t1

0xec0d,	// (0x0009c60f) list_single_fs_bigclock_pane_g1

0xec15,	// (0x0009c617) list_single_fs_bigclock_pane_t1

0xcc04,	// (0x0009a606) main_fs_bigclock_swipe_pane_g1

0xec58,	// (0x0009c65a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe86,	// (0x0009d888) main_fs_bigclock_swipe_pane_g

0xec60,	// (0x0009c662) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec60,	// (0x0009c662) main_fs_bigclock_swipe_pane_t1

0x2ed1,	// (0x000908d3) call_type_pane_ParamLimits

0x99c1,	// (0x000973c3) main_btmg_pane

0xac61,	// (0x00098663) list_single_cale_mrui_row_pane_g2_ParamLimits

0xac61,	// (0x00098663) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf9,	// (0x0009d7fb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf9,	// (0x0009d7fb) list_single_cale_mrui_row_pane_g

0x8e6c,	// (0x0009686e) list_recal_vselct_arw_lo_pane

0xea9e,	// (0x0009c4a0) list_recal_vselct_arw_up_pane

0x8e74,	// (0x00096876) list_recal_vselct_pane

0x8fcb,	// (0x000969cd) btmg_button_pane

0x8fd5,	// (0x000969d7) main_btmg_pane_g1

0x99c1,	// (0x000973c3) bg_button_pane_cp044

0xec7d,	// (0x0009c67f) btmg_button_pane_t1

0xc79f,	// (0x0009a1a1) aid_listscroll_gen

0x9a12,	// (0x00097414) main_cntbar_detail_pane

0xe7c8,	// (0x0009c1ca) list_cmail_folder_pane

0xe7d8,	// (0x0009c1da) sp_fs_scroll_pane_cp03_ParamLimits

0xac6d,	// (0x0009866f) list_single_fs_dyc_pane_cp01_ParamLimits

0xac6d,	// (0x0009866f) list_single_fs_dyc_pane_cp01

0xec8b,	// (0x0009c68d) aid_size_cmail_indent

0x8fdf,	// (0x000969e1) list_single_dyc_row_pane_cp01

0x9018,	// (0x00096a1a) cntbar_detail_list_pane_ParamLimits

0x9018,	// (0x00096a1a) cntbar_detail_list_pane

0x906a,	// (0x00096a6c) main_cntbar_detail_cont_pane_ParamLimits

0x906a,	// (0x00096a6c) main_cntbar_detail_cont_pane

0x2ec5,	// (0x000908c7) scroll_pane_cp032_ParamLimits

0x2ec5,	// (0x000908c7) scroll_pane_cp032

0x907e,	// (0x00096a80) cntbar_detail_list_event_pane_ParamLimits

0x907e,	// (0x00096a80) cntbar_detail_list_event_pane

0x902a,	// (0x00096a2c) cntbar_detail_list_shct_pane

0xad0b,	// (0x0009870d) aid_list_gen

0xec94,	// (0x0009c696) aid_scroll

0xec9d,	// (0x0009c69f) aid_size_touch_scroll_bar

0x00fe,	// (0x0008db00) aid_list_double

0xeca6,	// (0x0009c6a8) aid_list_single

0x7762,	// (0x00095164) aid_list_single_lg

0x908e,	// (0x00096a90) aid_list_z_g_a_sm

0xac87,	// (0x00098689) aid_list_z_g_d

0x089b,	// (0x0008e29d) aid_txt_z_prm

0x08ab,	// (0x0008e2ad) aid_txt_z_prm_cp01

0x08b9,	// (0x0008e2bb) aid_txt_z_sec

0x9096,	// (0x00096a98) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9096,	// (0x00096a98) main_cntbar_detail_cont_pane_g1

0x90aa,	// (0x00096aac) main_cntbar_detail_cont_pane_g2_ParamLimits

0x90aa,	// (0x00096aac) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8b,	// (0x0009d88d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8b,	// (0x0009d88d) main_cntbar_detail_cont_pane_g

0xecaf,	// (0x0009c6b1) main_cntbar_detail_cont_pane_t1

0xecbd,	// (0x0009c6bf) main_cntbar_detail_cont_pane_t2

0xeccb,	// (0x0009c6cd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe90,	// (0x0009d892) main_cntbar_detail_cont_pane_t

0x90ba,	// (0x00096abc) cell_cntbar_detail_list_shct_pane_ParamLimits

0x90ba,	// (0x00096abc) cell_cntbar_detail_list_shct_pane

0xecd9,	// (0x0009c6db) cntbar_detail_list_shct_pane_g1

0xece2,	// (0x0009c6e4) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe97,	// (0x0009d899) cntbar_detail_list_shct_pane_g

0x90cc,	// (0x00096ace) cntbar_detail_list_event_pane_g1_ParamLimits

0x90cc,	// (0x00096ace) cntbar_detail_list_event_pane_g1

0x90d8,	// (0x00096ada) cntbar_detail_list_event_pane_g2_ParamLimits

0x90d8,	// (0x00096ada) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9c,	// (0x0009d89e) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9c,	// (0x0009d89e) cntbar_detail_list_event_pane_g

0x9146,	// (0x00096b48) cntbar_detail_list_event_pane_t1_ParamLimits

0x9146,	// (0x00096b48) cntbar_detail_list_event_pane_t1

0x915b,	// (0x00096b5d) cntbar_detail_list_event_pane_t2_ParamLimits

0x915b,	// (0x00096b5d) cntbar_detail_list_event_pane_t2

0x0002,

0xfea9,	// (0x0009d8ab) cntbar_detail_list_event_pane_t_ParamLimits

0xfea9,	// (0x0009d8ab) cntbar_detail_list_event_pane_t

0xcc04,	// (0x0009a606) cell_cntbar_detail_list_shct_pane_g1

0x3277,	// (0x00090c79) navi_pane_mv_g3

0x9a12,	// (0x00097414) main_cntbar_detail_pane_ParamLimits

0x99c1,	// (0x000973c3) main_notif_wgt_pane

0xa7f0,	// (0x000981f2) aid_tch_main_mp4_pane_g4

0xa9ce,	// (0x000983d0) popup_slider_window_cp02

0x8e62,	// (0x00096864) list_recal_day_event_pane

0x8fe8,	// (0x000969ea) cntbar_detail_btn_pane_ParamLimits

0x8fe8,	// (0x000969ea) cntbar_detail_btn_pane

0x9000,	// (0x00096a02) cntbar_detail_btn_pane_cp01_ParamLimits

0x9000,	// (0x00096a02) cntbar_detail_btn_pane_cp01

0x902a,	// (0x00096a2c) cntbar_detail_list_shct_pane_ParamLimits

0x903a,	// (0x00096a3c) cntbar_detail_pane_g1_ParamLimits

0x903a,	// (0x00096a3c) cntbar_detail_pane_g1

0x904e,	// (0x00096a50) cntbar_detail_pane_t1_ParamLimits

0x904e,	// (0x00096a50) cntbar_detail_pane_t1

0x90e4,	// (0x00096ae6) cntbar_detail_list_event_pane_g3_ParamLimits

0x90e4,	// (0x00096ae6) cntbar_detail_list_event_pane_g3

0x90fc,	// (0x00096afe) cntbar_detail_list_event_pane_g4_ParamLimits

0x90fc,	// (0x00096afe) cntbar_detail_list_event_pane_g4

0x9114,	// (0x00096b16) cntbar_detail_list_event_pane_g5_ParamLimits

0x9114,	// (0x00096b16) cntbar_detail_list_event_pane_g5

0x912c,	// (0x00096b2e) cntbar_detail_list_event_pane_g6_ParamLimits

0x912c,	// (0x00096b2e) cntbar_detail_list_event_pane_g6

0x9170,	// (0x00096b72) cntbar_detail_list_event_pane_t3_ParamLimits

0x9170,	// (0x00096b72) cntbar_detail_list_event_pane_t3

0x9182,	// (0x00096b84) popup_notif_wgt_window_ParamLimits

0x9182,	// (0x00096b84) popup_notif_wgt_window

0x919b,	// (0x00096b9d) popup_submenu_window_cp01_ParamLimits

0x919b,	// (0x00096b9d) popup_submenu_window_cp01

0xa3a1,	// (0x00097da3) bg_popup_window_pane_cp10

0xeceb,	// (0x0009c6ed) listscroll_notif_wgt_pane

0xecfd,	// (0x0009c6ff) list_notif_wgt_window

0xed06,	// (0x0009c708) scroll_pane_cp033

0x91af,	// (0x00096bb1) list_notif_wgt_row_pane_ParamLimits

0x91af,	// (0x00096bb1) list_notif_wgt_row_pane

0xed0f,	// (0x0009c711) aid_size_list_notif_wgt_del

0xed1c,	// (0x0009c71e) list_notif_wgt_row_pane_g1

0xed28,	// (0x0009c72a) list_notif_wgt_row_pane_g2

0xed3c,	// (0x0009c73e) list_notif_wgt_row_pane_g3

0x0002,

0xfeb0,	// (0x0009d8b2) list_notif_wgt_row_pane_g

0xed49,	// (0x0009c74b) list_notif_wgt_row_pane_t1

0xed5f,	// (0x0009c761) list_notif_wgt_row_pane_t2

0xed71,	// (0x0009c773) list_notif_wgt_row_pane_t3

0x0002,

0xfeb7,	// (0x0009d8b9) list_notif_wgt_row_pane_t

0xd873,	// (0x0009b275) list_recal_day_event_pane_g1

0xed83,	// (0x0009c785) list_recal_day_event_pane_t1

0x99c1,	// (0x000973c3) bg_button_pane_cp045

0xed92,	// (0x0009c794) cntbar_detail_btn_pane_t1

0xc7b3,	// (0x0009a1b5) main_callh_pane_ParamLimits

0xc7b3,	// (0x0009a1b5) main_callh_pane

0x99c1,	// (0x000973c3) main_coverflow0_pane

0x99c1,	// (0x000973c3) main_wgtman_pane

0x832b,	// (0x00095d2d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x832b,	// (0x00095d2d) main_fs_bigclock_unlock_btn_pane

0x88a5,	// (0x000962a7) bg_button_pane_cp16

0x88b5,	// (0x000962b7) cell_tport_appsw_pane_g3

0x91bf,	// (0x00096bc1) cf0_flow_pane_ParamLimits

0x91bf,	// (0x00096bc1) cf0_flow_pane

0xeda0,	// (0x0009c7a2) listscroll_cf0_pane

0xedab,	// (0x0009c7ad) main_cf0_pane_g1

0x91d4,	// (0x00096bd6) main_cf0_pane_t1_ParamLimits

0x91d4,	// (0x00096bd6) main_cf0_pane_t1

0x91eb,	// (0x00096bed) main_cf0_pane_t2_ParamLimits

0x91eb,	// (0x00096bed) main_cf0_pane_t2

0x0001,

0xfec3,	// (0x0009d8c5) main_cf0_pane_t_ParamLimits

0xfec3,	// (0x0009d8c5) main_cf0_pane_t

0xedbd,	// (0x0009c7bf) scroll_pane_cp11

0x9202,	// (0x00096c04) cf0_flow_pane_g1

0x920e,	// (0x00096c10) cf0_flow_pane_g2

0x0001,

0xfec8,	// (0x0009d8ca) cf0_flow_pane_g

0x921a,	// (0x00096c1c) cf0_flow_pane_t1

0x99c1,	// (0x000973c3) main_call6_pane

0x99c1,	// (0x000973c3) main_calllock_pane

0x922c,	// (0x00096c2e) call6_btn_grp_pane_ParamLimits

0x922c,	// (0x00096c2e) call6_btn_grp_pane

0x9246,	// (0x00096c48) call6_pane_g1_ParamLimits

0x9246,	// (0x00096c48) call6_pane_g1

0x925c,	// (0x00096c5e) popup_call6_1st_window_ParamLimits

0x925c,	// (0x00096c5e) popup_call6_1st_window

0x926d,	// (0x00096c6f) popup_call6_2nd_window_ParamLimits

0x926d,	// (0x00096c6f) popup_call6_2nd_window

0x927e,	// (0x00096c80) cell_call6_btn_pane_ParamLimits

0x927e,	// (0x00096c80) cell_call6_btn_pane

0xa3a1,	// (0x00097da3) bg_popup_call2_in_pane_cp03

0xedc8,	// (0x0009c7ca) popup_call6_1st_window_g1

0xedd0,	// (0x0009c7d2) popup_call6_1st_window_g2

0xedd8,	// (0x0009c7da) popup_call6_1st_window_g3

0x0002,

0xfecd,	// (0x0009d8cf) popup_call6_1st_window_g

0xede0,	// (0x0009c7e2) popup_call6_1st_window_t1

0xedef,	// (0x0009c7f1) popup_call6_1st_window_t2

0xedff,	// (0x0009c801) popup_call6_1st_window_t3

0x0002,

0xfed4,	// (0x0009d8d6) popup_call6_1st_window_t

0xa3a1,	// (0x00097da3) bg_popup_call2_in_pane_cp04

0xedc8,	// (0x0009c7ca) popup_call6_2nd_window_g1

0xedd0,	// (0x0009c7d2) popup_call6_2nd_window_g2

0xedd8,	// (0x0009c7da) popup_call6_2nd_window_g3

0x0002,

0xfecd,	// (0x0009d8cf) popup_call6_2nd_window_g

0xede0,	// (0x0009c7e2) popup_call6_2nd_window_t1

0x99c1,	// (0x000973c3) bg_button_pane_cp15

0xee0f,	// (0x0009c811) cell_call6_btn_pane_g1

0xee18,	// (0x0009c81a) cell_call6_btn_pane_t1

0x9292,	// (0x00096c94) listscroll_wgtman_pane_ParamLimits

0x9292,	// (0x00096c94) listscroll_wgtman_pane

0x92b3,	// (0x00096cb5) wgtman_btn_pane_ParamLimits

0x92b3,	// (0x00096cb5) wgtman_btn_pane

0xb25c,	// (0x00098c5e) aid_scroll_copy1

0xee27,	// (0x0009c829) list_wgtman_pane

0x92f6,	// (0x00096cf8) wgtman_btn_pane_g1_ParamLimits

0x92f6,	// (0x00096cf8) wgtman_btn_pane_g1

0x9322,	// (0x00096d24) wgtman_btn_pane_t1_ParamLimits

0x9322,	// (0x00096d24) wgtman_btn_pane_t1

0xee31,	// (0x0009c833) wgtman_btn_pane_t2_ParamLimits

0xee31,	// (0x0009c833) wgtman_btn_pane_t2

0x0001,

0xfedb,	// (0x0009d8dd) wgtman_btn_pane_t_ParamLimits

0xfedb,	// (0x0009d8dd) wgtman_btn_pane_t

0xab61,	// (0x00098563) listrow_wgtman_pane_ParamLimits

0xab61,	// (0x00098563) listrow_wgtman_pane

0x935f,	// (0x00096d61) listrow_wgtman_pane_g1

0x936c,	// (0x00096d6e) listrow_wgtman_pane_g2

0x0001,

0xfee0,	// (0x0009d8e2) listrow_wgtman_pane_g

0x08c7,	// (0x0008e2c9) listrow_wgtman_pane_t1

0x08df,	// (0x0008e2e1) listrow_wgtman_pane_t2

0x0001,

0xfee5,	// (0x0009d8e7) listrow_wgtman_pane_t

0x0905,	// (0x0008e307) wait_bar_pane_cp09

0xee48,	// (0x0009c84a) main_calllock_btn_pane

0xee52,	// (0x0009c854) main_calllock_pane_g1

0x99c1,	// (0x000973c3) bg_button_pane_cp17

0xee5e,	// (0x0009c860) main_calllock_btn_pane_g1

0xee67,	// (0x0009c869) main_calllock_btn_pane_t1

0x99c1,	// (0x000973c3) main_dialer3_pane

0x99c1,	// (0x000973c3) main_fmrd2_pane

0xcc04,	// (0x0009a606) main_fs_bigclock_unlock_btn_pane_g1

0xee7e,	// (0x0009c880) main_fs_bigclock_unlock_btn_pane_t1

0x938a,	// (0x00096d8c) area_fmrd2_info_pane_ParamLimits

0x938a,	// (0x00096d8c) area_fmrd2_info_pane

0x9399,	// (0x00096d9b) area_fmrd2_visual_pane_ParamLimits

0x9399,	// (0x00096d9b) area_fmrd2_visual_pane

0x93a7,	// (0x00096da9) fmrd2_indi_pane_ParamLimits

0x93a7,	// (0x00096da9) fmrd2_indi_pane

0x93b4,	// (0x00096db6) area_fmrd2_visual_pane_g1

0x93bc,	// (0x00096dbe) area_fmrd2_visual_pane_t1

0x93cc,	// (0x00096dce) area_fmrd2_visual_pane_t2

0x93dc,	// (0x00096dde) area_fmrd2_visual_pane_t3

0x0002,

0xfeef,	// (0x0009d8f1) area_fmrd2_visual_pane_t

0x93ec,	// (0x00096dee) area_fmrd2_info_pane_g1

0x93f4,	// (0x00096df6) area_fmrd2_info_pane_t1

0x9404,	// (0x00096e06) area_fmrd2_info_pane_t2

0x9414,	// (0x00096e16) area_fmrd2_info_pane_t3

0x9424,	// (0x00096e26) area_fmrd2_info_pane_t4

0x0003,

0xfef6,	// (0x0009d8f8) area_fmrd2_info_pane_t

0x9434,	// (0x00096e36) fmrd2_indi_pane_t1

0x9444,	// (0x00096e46) fmrd2_indi_pane_t2

0x9454,	// (0x00096e56) fmrd2_indi_pane_t3

0x0002,

0xfeff,	// (0x0009d901) fmrd2_indi_pane_t

0xe40c,	// (0x0009be0e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe40c,	// (0x0009be0e) list_single_fs_bigclock_indicator_pane_g5

0xe4bc,	// (0x0009bebe) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4bc,	// (0x0009bebe) list_single_fs_bigclock_indicator_pane_t5

0x8ae3,	// (0x000964e5) aid_cell_bcale_month_pane_ParamLimits

0x8ae3,	// (0x000964e5) aid_cell_bcale_month_pane

0x8b0a,	// (0x0009650c) bcale_month_pane_ParamLimits

0x8b0a,	// (0x0009650c) bcale_month_pane

0x8b2c,	// (0x0009652e) bcale_preview_pane_ParamLimits

0x8b2c,	// (0x0009652e) bcale_preview_pane

0xec15,	// (0x0009c617) list_single_fs_bigclock_pane_t1_ParamLimits

0xec34,	// (0x0009c636) list_single_fs_bigclock_pane_t2_ParamLimits

0xec34,	// (0x0009c636) list_single_fs_bigclock_pane_t2

0x0001,

0xfe81,	// (0x0009d883) list_single_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0009d883) list_single_fs_bigclock_pane_t

0xee76,	// (0x0009c878) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeea,	// (0x0009d8ec) main_fs_bigclock_unlock_btn_pane_g

0x9464,	// (0x00096e66) aid_dia3_key_size_ParamLimits

0x9464,	// (0x00096e66) aid_dia3_key_size

0x9473,	// (0x00096e75) aid_dia3_listrow_size_ParamLimits

0x9473,	// (0x00096e75) aid_dia3_listrow_size

0x9488,	// (0x00096e8a) dia3_keypad_fun_pane_ParamLimits

0x9488,	// (0x00096e8a) dia3_keypad_fun_pane

0x94a4,	// (0x00096ea6) dia3_keypad_num_pane_ParamLimits

0x94a4,	// (0x00096ea6) dia3_keypad_num_pane

0x94bd,	// (0x00096ebf) dia3_listscroll_pane_ParamLimits

0x94bd,	// (0x00096ebf) dia3_listscroll_pane

0x94d0,	// (0x00096ed2) dia3_numentry_pane_ParamLimits

0x94d0,	// (0x00096ed2) dia3_numentry_pane

0xee8c,	// (0x0009c88e) dia3_list_pane

0xee97,	// (0x0009c899) scroll_pane_cp12

0x99c1,	// (0x000973c3) bg_dia3_numentry_pane

0x94e4,	// (0x00096ee6) dia3_numentry_pane_t1

0x94f3,	// (0x00096ef5) cell_dia3_key_num_pane

0x94fb,	// (0x00096efd) cell_dia3_key0_fun_pane_ParamLimits

0x94fb,	// (0x00096efd) cell_dia3_key0_fun_pane

0x950f,	// (0x00096f11) cell_dia3_key1_fun_pane_ParamLimits

0x950f,	// (0x00096f11) cell_dia3_key1_fun_pane

0x9527,	// (0x00096f29) dia3_listrow_pane

0xe10a,	// (0x0009bb0c) bg_dia3_numentry_pane_g1

0x99c1,	// (0x000973c3) bg_button_pane_cp21

0xeea2,	// (0x0009c8a4) cell_dia3_key_num_pane_t1

0xeeb0,	// (0x0009c8b2) cell_dia3_key_num_pane_t2

0xeebf,	// (0x0009c8c1) cell_dia3_key_num_pane_t3

0xeece,	// (0x0009c8d0) cell_dia3_key_num_pane_t4

0x0003,

0xff06,	// (0x0009d908) cell_dia3_key_num_pane_t

0x99c1,	// (0x000973c3) bg_button_pane_cp19

0x9539,	// (0x00096f3b) cell_dia3_key0_fun_pane_g1

0x99c1,	// (0x000973c3) bg_button_pane_cp20

0x9541,	// (0x00096f43) cell_dia3_key1_fun_pane_g1

0x9549,	// (0x00096f4b) area_left_week_number_pane

0x9557,	// (0x00096f59) area_top_day_name_pane

0x956a,	// (0x00096f6c) frame_month_view_pane

0xeedd,	// (0x0009c8df) grid_month_view_pane

0x957f,	// (0x00096f81) cell_top_day_name_pane_ParamLimits

0x957f,	// (0x00096f81) cell_top_day_name_pane

0x95ae,	// (0x00096fb0) cell_area_left_week_number_pane_ParamLimits

0x95ae,	// (0x00096fb0) cell_area_left_week_number_pane

0x95c2,	// (0x00096fc4) cell_month_view_pane_ParamLimits

0x95c2,	// (0x00096fc4) cell_month_view_pane

0xeeeb,	// (0x0009c8ed) frm_month_g1

0x95f1,	// (0x00096ff3) frm_month_g2

0x9604,	// (0x00097006) frm_month_g3

0x9617,	// (0x00097019) frm_month_g4

0x962a,	// (0x0009702c) frm_month_g5

0x963d,	// (0x0009703f) frm_month_g6

0x9650,	// (0x00097052) frm_month_g7

0xeef8,	// (0x0009c8fa) frm_month_g8

0x9665,	// (0x00097067) frm_month_g9

0x9675,	// (0x00097077) frm_month_g10

0x9685,	// (0x00097087) frm_month_g11

0x9695,	// (0x00097097) frm_month_g12

0x96a7,	// (0x000970a9) frm_month_g13

0x96bb,	// (0x000970bd) frm_month_g14

0x96cf,	// (0x000970d1) frm_month_g15

0x96e3,	// (0x000970e5) frm_month_g16

0x000f,

0xff0f,	// (0x0009d911) frm_month_g

0xef05,	// (0x0009c907) cell_top_day_name_pane_t1

0x96f7,	// (0x000970f9) cell_area_left_week_number_pane_g1

0x9703,	// (0x00097105) cell_area_left_week_number_pane_t1

0xce34,	// (0x0009a836) cell_month_view_pane_g1

0x9716,	// (0x00097118) cell_month_view_pane_t1

0x99c1,	// (0x000973c3) main_fps_pane

0xe6b8,	// (0x0009c0ba) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6b8,	// (0x0009c0ba) cmail_ddmenu_btn02_pane_cp1

0xe6d4,	// (0x0009c0d6) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6d4,	// (0x0009c0d6) cmail_ddmenu_btn02_pane_cp2

0x8e2f,	// (0x00096831) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e2f,	// (0x00096831) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe34,	// (0x0009d836) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe34,	// (0x0009d836) cmail_ddmenu_btn02_pane_g

0x8e50,	// (0x00096852) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8e50,	// (0x00096852) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe39,	// (0x0009d83b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe39,	// (0x0009d83b) cmail_ddmenu_btn02_pane_t

0x9729,	// (0x0009712b) fps_text_pane_ParamLimits

0x9729,	// (0x0009712b) fps_text_pane

0x9740,	// (0x00097142) main_fps_pane_g1_ParamLimits

0x9740,	// (0x00097142) main_fps_pane_g1

0x9758,	// (0x0009715a) wait_bar_pane_cp010_ParamLimits

0x9758,	// (0x0009715a) wait_bar_pane_cp010

0x976b,	// (0x0009716d) fps_text_pane_t1_ParamLimits

0x976b,	// (0x0009716d) fps_text_pane_t1

0xd5c3,	// (0x0009afc5) cam4_image_uncrop_pane_g1

0xd5cc,	// (0x0009afce) cam4_image_uncrop_pane_g2

0x6670,	// (0x00094072) cam4_image_uncrop_pane_g3

0x6679,	// (0x0009407b) cam4_image_uncrop_pane_g4

0x0003,

0xf8f5,	// (0x0009d2f7) cam4_image_uncrop_pane_g

0x9527,	// (0x00096f29) dia3_listrow_pane_ParamLimits

0x99c1,	// (0x000973c3) main_phob2_pane

0x8874,	// (0x00096276) cell_tport_appsw_pane_cp02_ParamLimits

0x8874,	// (0x00096276) cell_tport_appsw_pane_cp02

0x8888,	// (0x0009628a) cell_tport_appsw_pane_cp03_ParamLimits

0x8888,	// (0x0009628a) cell_tport_appsw_pane_cp03

0x99c1,	// (0x000973c3) phob2_contact_card_pane

0x99c1,	// (0x000973c3) phob2_listscroll_pane

0xef18,	// (0x0009c91a) phob2_list_pane

0xef20,	// (0x0009c922) scroll_pane_cp034

0x9783,	// (0x00097185) phob2_cc_data_pane_ParamLimits

0x9783,	// (0x00097185) phob2_cc_data_pane

0x97a4,	// (0x000971a6) phob2_cc_listscroll_pane_ParamLimits

0x97a4,	// (0x000971a6) phob2_cc_listscroll_pane

0x97c6,	// (0x000971c8) list_double_large_graphic_phob2_pane_ParamLimits

0x97c6,	// (0x000971c8) list_double_large_graphic_phob2_pane

0x97da,	// (0x000971dc) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x97da,	// (0x000971dc) list_double_large_graphic_phob2_pane_g1

0x0917,	// (0x0008e319) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0917,	// (0x0008e319) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff30,	// (0x0009d932) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff30,	// (0x0009d932) list_double_large_graphic_phob2_pane_g

0x0923,	// (0x0008e325) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0923,	// (0x0008e325) list_double_large_graphic_phob2_pane_t1

0x0938,	// (0x0008e33a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0938,	// (0x0008e33a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff35,	// (0x0009d937) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff35,	// (0x0009d937) list_double_large_graphic_phob2_pane_t

0x99c1,	// (0x000973c3) list_highlight_pane_cp024

0x97f0,	// (0x000971f2) phob2_cc_button_pane

0x97f8,	// (0x000971fa) phob2_cc_data_pane_g1_ParamLimits

0x97f8,	// (0x000971fa) phob2_cc_data_pane_g1

0x980e,	// (0x00097210) phob2_cc_data_pane_g2_ParamLimits

0x980e,	// (0x00097210) phob2_cc_data_pane_g2

0x0001,

0xff3a,	// (0x0009d93c) phob2_cc_data_pane_g_ParamLimits

0xff3a,	// (0x0009d93c) phob2_cc_data_pane_g

0x981e,	// (0x00097220) phob2_cc_data_pane_t1_ParamLimits

0x981e,	// (0x00097220) phob2_cc_data_pane_t1

0x9836,	// (0x00097238) phob2_cc_data_pane_t2_ParamLimits

0x9836,	// (0x00097238) phob2_cc_data_pane_t2

0x9850,	// (0x00097252) phob2_cc_data_pane_t3_ParamLimits

0x9850,	// (0x00097252) phob2_cc_data_pane_t3

0x0002,

0xff3f,	// (0x0009d941) phob2_cc_data_pane_t_ParamLimits

0xff3f,	// (0x0009d941) phob2_cc_data_pane_t

0xef28,	// (0x0009c92a) phob2_cc_list_pane_ParamLimits

0xef28,	// (0x0009c92a) phob2_cc_list_pane

0xd91c,	// (0x0009b31e) scroll_pane_cp035_ParamLimits

0xd91c,	// (0x0009b31e) scroll_pane_cp035

0x9a12,	// (0x00097414) bg_button_pane_cp033

0xef34,	// (0x0009c936) phob2_cc_button_pane_g1

0xef40,	// (0x0009c942) phob2_cc_button_pane_t1

0xef55,	// (0x0009c957) phob2_cc_button_pane_t2

0x0001,

0xff46,	// (0x0009d948) phob2_cc_button_pane_t

0x986a,	// (0x0009726c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x986a,	// (0x0009726c) list_double_large_graphic_phob2_cc_pane

0x987e,	// (0x00097280) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x987e,	// (0x00097280) list_double_large_graphic_phob2_cc_pane_g1

0x094a,	// (0x0008e34c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x094a,	// (0x0008e34c) list_double_large_graphic_phob2_cc_pane_g2

0x0956,	// (0x0008e358) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0956,	// (0x0008e358) list_double_large_graphic_phob2_cc_pane_g3

0x0962,	// (0x0008e364) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0962,	// (0x0008e364) list_double_large_graphic_phob2_cc_pane_g4

0x096e,	// (0x0008e370) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x096e,	// (0x0008e370) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4b,	// (0x0009d94d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4b,	// (0x0009d94d) list_double_large_graphic_phob2_cc_pane_g

0x097a,	// (0x0008e37c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x097a,	// (0x0008e37c) list_double_large_graphic_phob2_cc_pane_t1

0x09a3,	// (0x0008e3a5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x09a3,	// (0x0008e3a5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff56,	// (0x0009d958) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff56,	// (0x0009d958) list_double_large_graphic_phob2_cc_pane_t

0xef67,	// (0x0009c969) list_highlight_pane_cp025_ParamLimits

0xef67,	// (0x0009c969) list_highlight_pane_cp025

0x9a12,	// (0x00097414) bg_button_pane_cp033_ParamLimits

0xef34,	// (0x0009c936) phob2_cc_button_pane_g1_ParamLimits

0xef40,	// (0x0009c942) phob2_cc_button_pane_t1_ParamLimits

0xef55,	// (0x0009c957) phob2_cc_button_pane_t2_ParamLimits

0xff46,	// (0x0009d948) phob2_cc_button_pane_t_ParamLimits

0x0c20,	// (0x0008e622) popup_wgtman_window

0xd744,	// (0x0009b146) scroll_pane_cp038

0x92d8,	// (0x00096cda) wgtman_btn_pane_cp_01_ParamLimits

0x92d8,	// (0x00096cda) wgtman_btn_pane_cp_01

0xef75,	// (0x0009c977) wgtman_content_pane

0xef7e,	// (0x0009c980) wgtman_heading_pane

0x99c1,	// (0x000973c3) bg_heading_pane_cp02

0xef87,	// (0x0009c989) wgtman_heading_pane_g1

0xef8f,	// (0x0009c991) wgtman_heading_pane_t1

0xef9d,	// (0x0009c99f) scroll_pane_cp036

0xefa5,	// (0x0009c9a7) wgtman_list_pane

0xefad,	// (0x0009c9af) wgtman_list_pane_t1_ParamLimits

0xefad,	// (0x0009c9af) wgtman_list_pane_t1

0xaa2c,	// (0x0009842e) cam4_grid_pane

0xff7f,	// (0x0008d981) bg_button_pane_cp015_ParamLimits

0x731a,	// (0x00094d1c) bg_button_pane_cp016_ParamLimits

0x732d,	// (0x00094d2f) bg_button_pane_cp017_ParamLimits

0xffc7,	// (0x0008d9c9) popup_vitu2_query_window_g3_ParamLimits

0xffc7,	// (0x0008d9c9) popup_vitu2_query_window_g3

0x0042,	// (0x0008da44) popup_vitu2_query_window_t6_ParamLimits

0x0042,	// (0x0008da44) popup_vitu2_query_window_t6

0x006d,	// (0x0008da6f) popup_vitu2_query_window_t7_ParamLimits

0x006d,	// (0x0008da6f) popup_vitu2_query_window_t7

0xd5c3,	// (0x0009afc5) cam4_grid_pane_g1

0xd5cc,	// (0x0009afce) cam4_grid_pane_g2

0xefc7,	// (0x0009c9c9) cam4_grid_pane_g3

0xefd0,	// (0x0009c9d2) cam4_grid_pane_g4

0x0003,

0xff5b,	// (0x0009d95d) cam4_grid_pane_g

0x1d3c,	// (0x0008f73e) aid_placing_vt_slider_lsc_ParamLimits

0x2029,	// (0x0008fa2b) vidtel_button_pane_ParamLimits

0x2029,	// (0x0008fa2b) vidtel_button_pane

0x99c1,	// (0x000973c3) bg_button_pane_cp034

0x988a,	// (0x0009728c) vidtel_button_pane_g1

0x9892,	// (0x00097294) vidtel_button_pane_t1

0xd863,	// (0x0009b265) aid_size_vtel_slider_touch

0xd91c,	// (0x0009b31e) scroll_pane_cp039

0xe148,	// (0x0009bb4a) ncim_query_button_pane_cp01_ParamLimits

0xe167,	// (0x0009bb69) ncimui_query_pane_g1_ParamLimits

0x9a12,	// (0x00097414) input_focus_pane_cp012_ParamLimits

0xe18c,	// (0x0009bb8e) ncim_query_entry_pane_t1_ParamLimits

0xd91c,	// (0x0009b31e) scroll_pane_cp039_ParamLimits

0x31e9,	// (0x00090beb) navi_pane_bcale_mc_g1

0x31f1,	// (0x00090bf3) navi_pane_bcale_mc_t1

0xe711,	// (0x0009c113) main_sp_fs_email_pane_g1

0xe71d,	// (0x0009c11f) main_sp_fs_email_pane_g2

0x0001,

0xfcec,	// (0x0009d6ee) main_sp_fs_email_pane_g

0xe9a2,	// (0x0009c3a4) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9a2,	// (0x0009c3a4) list_single_cale_mrui_row_pane_g3

0x0891,	// (0x0008e293) list_single_recal_day_pane_g5_event_pane

0x8ec0,	// (0x000968c2) list_single_recal_day_pane_g7

0xefdb,	// (0x0009c9dd) list_recal_day_event_pane_cp01

0xefe4,	// (0x0009c9e6) list_recal_vselct_arw_lo_pane_cp01

0xefec,	// (0x0009c9ee) list_recal_vselct_arw_up_pane_cp01

0xeff4,	// (0x0009c9f6) list_recal_vselct_pane_cp01

0xd873,	// (0x0009b275) list_recal_day_event_pane_cp01_g1

0xac8f,	// (0x00098691) list_recal_day_event_pane_cp01_t1

0x8ec8,	// (0x000968ca) list_single_recal_day_pane_t1_ParamLimits

0x8eda,	// (0x000968dc) list_single_recal_day_pane_t2_ParamLimits

0xfe49,	// (0x0009d84b) list_single_recal_day_pane_t_ParamLimits

0xa08e,	// (0x00097a90) bg_notes_pane_ParamLimits

0xa139,	// (0x00097b3b) list_notes_pane_ParamLimits

0x0f6d,	// (0x0008e96f) scroll_pane_cp06_ParamLimits

0xa175,	// (0x00097b77) main_notes_pane_ParamLimits

0x99c1,	// (0x000973c3) main_welc_pane

0x98a8,	// (0x000972aa) main_welc_body_pane_ParamLimits

0x98a8,	// (0x000972aa) main_welc_body_pane

0x98c7,	// (0x000972c9) main_welc_opti_pane_ParamLimits

0x98c7,	// (0x000972c9) main_welc_opti_pane

0x9910,	// (0x00097312) main_welc_pane_t1_ParamLimits

0x9910,	// (0x00097312) main_welc_pane_t1

0x9932,	// (0x00097334) main_welc_body_row_pane_ParamLimits

0x9932,	// (0x00097334) main_welc_body_row_pane

0x9946,	// (0x00097348) main_welc_opti_row_pane_ParamLimits

0x9946,	// (0x00097348) main_welc_opti_row_pane

0xeffe,	// (0x0009ca00) main_welc_opti_row_pane_g1

0xf006,	// (0x0009ca08) main_welc_opti_row_pane_t1

0xf015,	// (0x0009ca17) main_welc_body_row_pane_t1

0xecf5,	// (0x0009c6f7) popup_notif_wgt_heading_pane

0xed0f,	// (0x0009c711) aid_size_list_notif_wgt_del_ParamLimits

0xed1c,	// (0x0009c71e) list_notif_wgt_row_pane_g1_ParamLimits

0xed28,	// (0x0009c72a) list_notif_wgt_row_pane_g2_ParamLimits

0xed3c,	// (0x0009c73e) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb0,	// (0x0009d8b2) list_notif_wgt_row_pane_g_ParamLimits

0xed49,	// (0x0009c74b) list_notif_wgt_row_pane_t1_ParamLimits

0xed5f,	// (0x0009c761) list_notif_wgt_row_pane_t2_ParamLimits

0xed71,	// (0x0009c773) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb7,	// (0x0009d8b9) list_notif_wgt_row_pane_t_ParamLimits

0x935f,	// (0x00096d61) listrow_wgtman_pane_g1_ParamLimits

0x936c,	// (0x00096d6e) listrow_wgtman_pane_g2_ParamLimits

0xfee0,	// (0x0009d8e2) listrow_wgtman_pane_g_ParamLimits

0x08c7,	// (0x0008e2c9) listrow_wgtman_pane_t1_ParamLimits

0x08df,	// (0x0008e2e1) listrow_wgtman_pane_t2_ParamLimits

0xfee5,	// (0x0009d8e7) listrow_wgtman_pane_t_ParamLimits

0x0905,	// (0x0008e307) wait_bar_pane_cp09_ParamLimits

0x99c1,	// (0x000973c3) bg_popup_heading_pane_cp02

0xf024,	// (0x0009ca26) popup_notif_wgt_heading_pane_g1

0xf02c,	// (0x0009ca2e) popup_notif_wgt_heading_pane_t1

0x99c1,	// (0x000973c3) main_vids_pane

0x99c1,	// (0x000973c3) vids_listscroll_pane

0x9956,	// (0x00097358) scroll_pane_cp040

0x99c1,	// (0x000973c3) vids_list_pane

0x9961,	// (0x00097363) vids_list_double_pane_ParamLimits

0x9961,	// (0x00097363) vids_list_double_pane

0x9972,	// (0x00097374) vids_list_double_pane_g1

0x997b,	// (0x0009737d) vids_list_double_pane_t1

0x998b,	// (0x0009738d) vids_list_double_pane_t2

0x0001,

0xff69,	// (0x0009d96b) vids_list_double_pane_t

0x9a12,	// (0x00097414) main_ncimui_pane_ParamLimits

0x7e84,	// (0x00095886) main_ncimui_pane_g1_ParamLimits

0x7e90,	// (0x00095892) main_ncimui_pane_g2_ParamLimits

0x7e90,	// (0x00095892) main_ncimui_pane_g2

0x0001,

0xfbf1,	// (0x0009d5f3) main_ncimui_pane_g_ParamLimits

0xfbf1,	// (0x0009d5f3) main_ncimui_pane_g

0x98e6,	// (0x000972e8) main_welc_pane_g1_ParamLimits

0x98e6,	// (0x000972e8) main_welc_pane_g1

0x98fb,	// (0x000972fd) main_welc_pane_g2_ParamLimits

0x98fb,	// (0x000972fd) main_welc_pane_g2

0x0001,

0xff64,	// (0x0009d966) main_welc_pane_g_ParamLimits

0xff64,	// (0x0009d966) main_welc_pane_g

0xa08e,	// (0x00097a90) listscroll_mce_pane_ParamLimits

0x32c9,	// (0x00090ccb) wait_bar_pane_cp10

0xc7a7,	// (0x0009a1a9) main_cale_day_pane_ParamLimits

0xc7a7,	// (0x0009a1a9) main_cale_week_pane_ParamLimits

0xa08e,	// (0x00097a90) main_messa_pane_ParamLimits

0x592e,	// (0x00093330) main_clock2_btn_pane_ParamLimits

0x592e,	// (0x00093330) main_clock2_btn_pane

0xcfbc,	// (0x0009a9be) main_clock2_btn_pane_cp01_ParamLimits

0xcfbc,	// (0x0009a9be) main_clock2_btn_pane_cp01

0xe973,	// (0x0009c375) list_cale_mrui_pane_ParamLimits

0xedb5,	// (0x0009c7b7) main_cf0_pane_g2

0x0001,

0xfebe,	// (0x0009d8c0) main_cf0_pane_g

0x9549,	// (0x00096f4b) area_left_week_number_pane_ParamLimits

0x9557,	// (0x00096f59) area_top_day_name_pane_ParamLimits

0x956a,	// (0x00096f6c) frame_month_view_pane_ParamLimits

0xeedd,	// (0x0009c8df) grid_month_view_pane_ParamLimits

0xeeeb,	// (0x0009c8ed) frm_month_g1_ParamLimits

0x95f1,	// (0x00096ff3) frm_month_g2_ParamLimits

0x9604,	// (0x00097006) frm_month_g3_ParamLimits

0x9617,	// (0x00097019) frm_month_g4_ParamLimits

0x962a,	// (0x0009702c) frm_month_g5_ParamLimits

0x963d,	// (0x0009703f) frm_month_g6_ParamLimits

0x9650,	// (0x00097052) frm_month_g7_ParamLimits

0xeef8,	// (0x0009c8fa) frm_month_g8_ParamLimits

0x9665,	// (0x00097067) frm_month_g9_ParamLimits

0x9675,	// (0x00097077) frm_month_g10_ParamLimits

0x9685,	// (0x00097087) frm_month_g11_ParamLimits

0x9695,	// (0x00097097) frm_month_g12_ParamLimits

0x96a7,	// (0x000970a9) frm_month_g13_ParamLimits

0x96bb,	// (0x000970bd) frm_month_g14_ParamLimits

0x96cf,	// (0x000970d1) frm_month_g15_ParamLimits

0x96e3,	// (0x000970e5) frm_month_g16_ParamLimits

0xff0f,	// (0x0009d911) frm_month_g_ParamLimits

0xef05,	// (0x0009c907) cell_top_day_name_pane_t1_ParamLimits

0x96f7,	// (0x000970f9) cell_area_left_week_number_pane_g1_ParamLimits

0x9703,	// (0x00097105) cell_area_left_week_number_pane_t1_ParamLimits

0xce34,	// (0x0009a836) cell_month_view_pane_g1_ParamLimits

0x9716,	// (0x00097118) cell_month_view_pane_t1_ParamLimits

0xa086,	// (0x00097a88) main_clock2_btn_pane_g1

0xf03a,	// (0x0009ca3c) main_clock2_btn_pane_t1

0x9a12,	// (0x00097414) listscroll_cmail_pane_ParamLimits

0xe711,	// (0x0009c113) main_sp_fs_email_pane_g1_ParamLimits

0xe71d,	// (0x0009c11f) main_sp_fs_email_pane_g2_ParamLimits

0xfcec,	// (0x0009d6ee) main_sp_fs_email_pane_g_ParamLimits

0xea7f,	// (0x0009c481) list_recal_day_pane_ParamLimits

0xea90,	// (0x0009c492) mian_recal_day_pane_t1

0x0533,	// (0x0008df35) list_single_dyc_row_text_pane_t4_ParamLimits

0x0533,	// (0x0008df35) list_single_dyc_row_text_pane_t4

0x057c,	// (0x0008df7e) list_single_dyc_row_text_pane_t5_ParamLimits

0x057c,	// (0x0008df7e) list_single_dyc_row_text_pane_t5

0x870a,	// (0x0009610c) list_single_dyc_row_text_pane_t6_ParamLimits

0x870a,	// (0x0009610c) list_single_dyc_row_text_pane_t6

0xae50,	// (0x00098852) aid_mgn_list_cale_time_pane

0x9a12,	// (0x00097414) main_gallery2_pane_ParamLimits

0xcfd0,	// (0x0009a9d2) main_clock2_pane_cp01_t1

0xcfe0,	// (0x0009a9e2) main_clock2_pane_cp01_t3

0x0001,

0xf7cb,	// (0x0009d1cd) main_clock2_pane_cp01_t

0x13de,	// (0x0008ede0) cale_week_scroll_pane_g16_ParamLimits

0x13de,	// (0x0008ede0) cale_week_scroll_pane_g16

0xa3a1,	// (0x00097da3) vorec_slider_pane

0x9892,	// (0x00097294) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
