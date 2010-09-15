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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005d15d };

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
0x0cbc,	// (0x0005de19) Screen

0x0cc8,	// (0x0005de25) application_window

0x0d24,	// (0x0005de81) area_bottom_pane_ParamLimits

0x0d24,	// (0x0005de81) area_bottom_pane

0x0d82,	// (0x0005dedf) area_top_pane_ParamLimits

0x0d82,	// (0x0005dedf) area_top_pane

0x0de6,	// (0x0005df43) call_video_uplink_pane_ParamLimits

0x0de6,	// (0x0005df43) call_video_uplink_pane

0x0e25,	// (0x0005df82) main_pane_ParamLimits

0x0e25,	// (0x0005df82) main_pane

0xc638,	// (0x00069795) context_pane

0x3e18,	// (0x00060f75) navi_pane

0x3e41,	// (0x00060f9e) popup_cale_events_window_ParamLimits

0x3e41,	// (0x00060f9e) popup_cale_events_window

0xc64b,	// (0x000697a8) popup_mup_playback_window

0x3e59,	// (0x00060fb6) signal_pane

0xa71a,	// (0x00067877) main_browser_pane

0xa94f,	// (0x00067aac) main_burst_pane

0x3c68,	// (0x00060dc5) main_calc_pane

0xc62c,	// (0x00069789) main_cale_day_pane

0x3c75,	// (0x00060dd2) main_cale_month_pane

0xc62c,	// (0x00069789) main_cale_week_pane

0xa94f,	// (0x00067aac) main_call_pane

0x9fda,	// (0x00067137) main_call_poc_pane

0xa94f,	// (0x00067aac) main_camera_pane

0xa94f,	// (0x00067aac) main_chi_dic_pane

0xb165,	// (0x000682c2) main_clock_pane

0x9fda,	// (0x00067137) main_fmradio_pane

0xa94f,	// (0x00067aac) main_graph_messa_pane

0x9fda,	// (0x00067137) main_help_pane

0xa71a,	// (0x00067877) main_im_pane

0xa62d,	// (0x0006778a) main_image_pane_ParamLimits

0xa62d,	// (0x0006778a) main_image_pane

0x9fda,	// (0x00067137) main_location2_pane

0xa94f,	// (0x00067aac) main_location_pane

0xa62d,	// (0x0006778a) main_messa_pane

0x9fda,	// (0x00067137) main_mp2_pane

0xa94f,	// (0x00067aac) main_mp_pane

0x9fda,	// (0x00067137) main_msg_pane

0x9fda,	// (0x00067137) main_mup_eq_pane

0x9fda,	// (0x00067137) main_mup_pane

0xa71a,	// (0x00067877) main_notes_pane

0x9fda,	// (0x00067137) main_pec_pane

0x9fda,	// (0x00067137) main_phob_pane

0x9fda,	// (0x00067137) main_pinb_pane

0x9fda,	// (0x00067137) main_postcard_pane

0x9fda,	// (0x00067137) main_qdial_pane

0xa94f,	// (0x00067aac) main_skin_pane

0x9fda,	// (0x00067137) main_smil2_pane

0xa94f,	// (0x00067aac) main_smil_pane

0xa94f,	// (0x00067aac) main_video_pane

0xa94f,	// (0x00067aac) main_video_tele_pane

0xa62d,	// (0x0006778a) main_viewer_pane_ParamLimits

0xa62d,	// (0x0006778a) main_viewer_pane

0xa94f,	// (0x00067aac) main_vorec_pane

0x3cc8,	// (0x00060e25) popup_blid_sat_info_window_ParamLimits

0x3cc8,	// (0x00060e25) popup_blid_sat_info_window

0x3cee,	// (0x00060e4b) popup_dyc_status_message_window_ParamLimits

0x3cee,	// (0x00060e4b) popup_dyc_status_message_window

0x3cfe,	// (0x00060e5b) popup_grid_large_graphic_window_ParamLimits

0x3cfe,	// (0x00060e5b) popup_grid_large_graphic_window

0x3d93,	// (0x00060ef0) popup_loc_request_window_ParamLimits

0x3d93,	// (0x00060ef0) popup_loc_request_window

0x3dec,	// (0x00060f49) popup_wml_address_window_ParamLimits

0x3dec,	// (0x00060f49) popup_wml_address_window

0x3b40,	// (0x00060c9d) call_muted_g1

0x37b8,	// (0x00060915) popup_call_audio_conf_window_ParamLimits

0x37b8,	// (0x00060915) popup_call_audio_conf_window

0x3b50,	// (0x00060cad) popup_call_audio_first_window_ParamLimits

0x3b50,	// (0x00060cad) popup_call_audio_first_window

0x3b90,	// (0x00060ced) popup_call_audio_in_window_ParamLimits

0x3b90,	// (0x00060ced) popup_call_audio_in_window

0x3bb4,	// (0x00060d11) popup_call_audio_out_window_ParamLimits

0x3bb4,	// (0x00060d11) popup_call_audio_out_window

0x3bd6,	// (0x00060d33) popup_call_audio_second_window_ParamLimits

0x3bd6,	// (0x00060d33) popup_call_audio_second_window

0x3c06,	// (0x00060d63) popup_call_audio_wait_window_ParamLimits

0x3c06,	// (0x00060d63) popup_call_audio_wait_window

0x3c27,	// (0x00060d84) popup_number_entry_window_ParamLimits

0x3c27,	// (0x00060d84) popup_number_entry_window

0x9b92,	// (0x00066cef) bg_popup_call_pane_cp05_ParamLimits

0x9b92,	// (0x00066cef) bg_popup_call_pane_cp05

0x9bb2,	// (0x00066d0f) popup_number_entry_window_t1

0x9bc5,	// (0x00066d22) popup_number_entry_window_t2

0x9bd7,	// (0x00066d34) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0006c1a2) popup_number_entry_window_t

0x9c1e,	// (0x00066d7b) text_title_cp2

0x9c31,	// (0x00066d8e) bg_popup_call_pane_cp_ParamLimits

0x9c31,	// (0x00066d8e) bg_popup_call_pane_cp

0x9c3f,	// (0x00066d9c) call_thumbnail_pane

0x9c47,	// (0x00066da4) popup_call_audio_in_window_g1_ParamLimits

0x9c47,	// (0x00066da4) popup_call_audio_in_window_g1

0x9c53,	// (0x00066db0) popup_call_audio_in_window_g2_ParamLimits

0x9c53,	// (0x00066db0) popup_call_audio_in_window_g2

0x9c5f,	// (0x00066dbc) popup_call_audio_in_window_g3_ParamLimits

0x9c5f,	// (0x00066dbc) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0006c1ab) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0006c1ab) popup_call_audio_in_window_g

0x9c6b,	// (0x00066dc8) popup_call_audio_in_window_t1_ParamLimits

0x9c6b,	// (0x00066dc8) popup_call_audio_in_window_t1

0x9c87,	// (0x00066de4) popup_call_audio_in_window_t2_ParamLimits

0x9c87,	// (0x00066de4) popup_call_audio_in_window_t2

0x9ca3,	// (0x00066e00) popup_call_audio_in_window_t3_ParamLimits

0x9ca3,	// (0x00066e00) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0006c1b2) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0006c1b2) popup_call_audio_in_window_t

0x9c31,	// (0x00066d8e) bg_popup_call_pane_cp01_ParamLimits

0x9c31,	// (0x00066d8e) bg_popup_call_pane_cp01

0x9c3f,	// (0x00066d9c) call_thumbnail_pane_cp02

0x9cb6,	// (0x00066e13) call_type_pane_cp022

0x9cbe,	// (0x00066e1b) popup_call_audio_out_window_g1_ParamLimits

0x9cbe,	// (0x00066e1b) popup_call_audio_out_window_g1

0x9cd0,	// (0x00066e2d) popup_call_audio_out_window_g2_ParamLimits

0x9cd0,	// (0x00066e2d) popup_call_audio_out_window_g2

0x9cdc,	// (0x00066e39) popup_call_audio_out_window_g3_ParamLimits

0x9cdc,	// (0x00066e39) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0006c1b9) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0006c1b9) popup_call_audio_out_window_g

0x9cee,	// (0x00066e4b) popup_call_audio_out_window_t1_ParamLimits

0x9cee,	// (0x00066e4b) popup_call_audio_out_window_t1

0x9d06,	// (0x00066e63) popup_call_audio_out_window_t2_ParamLimits

0x9d06,	// (0x00066e63) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0006c1c0) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0006c1c0) popup_call_audio_out_window_t

0x9d1b,	// (0x00066e78) bg_popup_call_pane_ParamLimits

0x9d1b,	// (0x00066e78) bg_popup_call_pane

0x0f68,	// (0x0005e0c5) call_thumbnail_pane_cp_ParamLimits

0x0f68,	// (0x0005e0c5) call_thumbnail_pane_cp

0x9d9f,	// (0x00066efc) call_type_pane_cp01_ParamLimits

0x9d9f,	// (0x00066efc) call_type_pane_cp01

0x9de3,	// (0x00066f40) popup_call_audio_first_window_g1_ParamLimits

0x9de3,	// (0x00066f40) popup_call_audio_first_window_g1

0x9e2f,	// (0x00066f8c) popup_call_audio_first_window_g2_ParamLimits

0x9e2f,	// (0x00066f8c) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0006c1c5) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0006c1c5) popup_call_audio_first_window_g

0x9e73,	// (0x00066fd0) popup_call_audio_first_window_t1_ParamLimits

0x9e73,	// (0x00066fd0) popup_call_audio_first_window_t1

0x9f1f,	// (0x0006707c) popup_call_audio_first_window_t4_ParamLimits

0x9f1f,	// (0x0006707c) popup_call_audio_first_window_t4

0x9fab,	// (0x00067108) popup_call_audio_first_window_t5_ParamLimits

0x9fab,	// (0x00067108) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0006c1ca) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0006c1ca) popup_call_audio_first_window_t

0x9fda,	// (0x00067137) bg_popup_call_pane_cp02

0x9fe4,	// (0x00067141) call_type_pane_cp023

0x9fec,	// (0x00067149) popup_call_audio_wait_window_g1

0x9ff4,	// (0x00067151) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0006c1d1) popup_call_audio_wait_window_g

0x9ffc,	// (0x00067159) popup_call_audio_wait_window_t3

0xa00a,	// (0x00067167) bg_popup_call_pane_cp03_ParamLimits

0xa00a,	// (0x00067167) bg_popup_call_pane_cp03

0xa06a,	// (0x000671c7) call_thumbnail_pane_cp011_ParamLimits

0xa06a,	// (0x000671c7) call_thumbnail_pane_cp011

0xa076,	// (0x000671d3) call_type_pane_cp034_ParamLimits

0xa076,	// (0x000671d3) call_type_pane_cp034

0xa0b2,	// (0x0006720f) popup_call_audio_second_window_g1_ParamLimits

0xa0b2,	// (0x0006720f) popup_call_audio_second_window_g1

0xa0ee,	// (0x0006724b) popup_call_audio_second_window_g2_ParamLimits

0xa0ee,	// (0x0006724b) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0006c1d6) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0006c1d6) popup_call_audio_second_window_g

0xa12a,	// (0x00067287) popup_call_audio_second_window_t1_ParamLimits

0xa12a,	// (0x00067287) popup_call_audio_second_window_t1

0xa1ab,	// (0x00067308) popup_call_audio_second_window_t2_ParamLimits

0xa1ab,	// (0x00067308) popup_call_audio_second_window_t2

0xa5d9,	// (0x00067736) popup_call_audio_second_window_t3_ParamLimits

0xa5d9,	// (0x00067736) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0006c1db) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0006c1db) popup_call_audio_second_window_t

0x9fda,	// (0x00067137) bg_popup_call_pane_cp04

0xa60f,	// (0x0006776c) list_conf_pane

0xa617,	// (0x00067774) popup_call_audio_conf_window_t1

0xa625,	// (0x00067782) call_thumbnail_pane_g1

0xa62d,	// (0x0006778a) bg_pinb_pane_ParamLimits

0xa62d,	// (0x0006778a) bg_pinb_pane

0xa63b,	// (0x00067798) find_pinb_pane

0xa62d,	// (0x0006778a) listscroll_pinb_pane_ParamLimits

0xa62d,	// (0x0006778a) listscroll_pinb_pane

0xa645,	// (0x000677a2) pinb_bg_pane_g1

0xa645,	// (0x000677a2) pinb_bg_pane_g2

0xa645,	// (0x000677a2) pinb_bg_pane_g3

0xa645,	// (0x000677a2) pinb_bg_pane_g4

0xa645,	// (0x000677a2) pinb_bg_pane_g5

0xa645,	// (0x000677a2) pinb_bg_pane_g6

0xa645,	// (0x000677a2) pinb_bg_pane_g7

0xa645,	// (0x000677a2) pinb_bg_pane_g8

0xa645,	// (0x000677a2) pinb_bg_pane_g9

0xa645,	// (0x000677a2) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0006c1e2) pinb_bg_pane_g

0x9b88,	// (0x00066ce5) grid_pinb_pane

0x9b88,	// (0x00066ce5) list_pinb_pane

0xa1e1,	// (0x0006733e) scroll_pane_cp01_ParamLimits

0xa1e1,	// (0x0006733e) scroll_pane_cp01

0xa64f,	// (0x000677ac) find_pinb_pane_g1_ParamLimits

0xa64f,	// (0x000677ac) find_pinb_pane_g1

0xa667,	// (0x000677c4) find_pinb_pane_t1

0xa679,	// (0x000677d6) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0006c1fc) find_pinb_pane_t

0xa68e,	// (0x000677eb) input_focus_pane_cp01_ParamLimits

0xa68e,	// (0x000677eb) input_focus_pane_cp01

0xa69a,	// (0x000677f7) cell_pinb_pane_ParamLimits

0xa69a,	// (0x000677f7) cell_pinb_pane

0xa6a8,	// (0x00067805) cell_pinb_pane_g1_ParamLimits

0xa6a8,	// (0x00067805) cell_pinb_pane_g1

0xa6b6,	// (0x00067813) cell_pinb_pane_g2_ParamLimits

0xa6b6,	// (0x00067813) cell_pinb_pane_g2

0xa6b6,	// (0x00067813) cell_pinb_pane_g3_ParamLimits

0xa6b6,	// (0x00067813) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0006c201) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0006c201) cell_pinb_pane_g

0x9fda,	// (0x00067137) grid_highlight_pane_cp01

0xa69a,	// (0x000677f7) list_pinb_item_pane_ParamLimits

0xa69a,	// (0x000677f7) list_pinb_item_pane

0x9b88,	// (0x00066ce5) list_highlight_pane_cp02

0xa6c4,	// (0x00067821) list_pinb_item_pane_g1_ParamLimits

0xa6c4,	// (0x00067821) list_pinb_item_pane_g1

0xa6b6,	// (0x00067813) list_pinb_item_pane_g2_ParamLimits

0xa6b6,	// (0x00067813) list_pinb_item_pane_g2

0xa6a8,	// (0x00067805) list_pinb_item_pane_g3_ParamLimits

0xa6a8,	// (0x00067805) list_pinb_item_pane_g3

0xa6b6,	// (0x00067813) list_pinb_item_pane_g4_ParamLimits

0xa6b6,	// (0x00067813) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0006c208) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0006c208) list_pinb_item_pane_g

0xa6d2,	// (0x0006782f) list_pinb_item_pane_t1_ParamLimits

0xa6d2,	// (0x0006782f) list_pinb_item_pane_t1

0x0fa6,	// (0x0005e103) calc_display_pane

0x0fc4,	// (0x0005e121) calc_paper_pane

0x0fe0,	// (0x0005e13d) grid_calc_pane

0x9fda,	// (0x00067137) bg_list_pane_cp01

0x100c,	// (0x0005e169) clock_g1

0x1014,	// (0x0005e171) clock_g2

0x0001,

0xf0b4,	// (0x0006c211) clock_g

0x101e,	// (0x0005e17b) clock_t1_ParamLimits

0x101e,	// (0x0005e17b) clock_t1

0x1033,	// (0x0005e190) clock_t2_ParamLimits

0x1033,	// (0x0005e190) clock_t2

0x1045,	// (0x0005e1a2) clock_t3_ParamLimits

0x1045,	// (0x0005e1a2) clock_t3

0x1057,	// (0x0005e1b4) clock_t4_ParamLimits

0x1057,	// (0x0005e1b4) clock_t4

0x1069,	// (0x0005e1c6) clock_t5_ParamLimits

0x1069,	// (0x0005e1c6) clock_t5

0x107e,	// (0x0005e1db) clock_t6_ParamLimits

0x107e,	// (0x0005e1db) clock_t6

0x1090,	// (0x0005e1ed) clock_t7_ParamLimits

0x1090,	// (0x0005e1ed) clock_t7

0x10a2,	// (0x0005e1ff) clock_t8_ParamLimits

0x10a2,	// (0x0005e1ff) clock_t8

0x10b8,	// (0x0005e215) clock_t9_ParamLimits

0x10b8,	// (0x0005e215) clock_t9

0x0008,

0xf0b9,	// (0x0006c216) clock_t_ParamLimits

0xf0b9,	// (0x0006c216) clock_t

0xa6e6,	// (0x00067843) popup_clock_analogue_window_cp02

0xa6e6,	// (0x00067843) popup_clock_digital_window_cp01

0x9fda,	// (0x00067137) listscroll_help_pane

0x9fda,	// (0x00067137) phob_pre_status_pane

0xa6ee,	// (0x0006784b) grid_qdial_pane

0xa62d,	// (0x0006778a) listscroll_mce_pane

0xa62d,	// (0x0006778a) bg_notes_pane

0xa6f8,	// (0x00067855) list_notes_pane

0x10ce,	// (0x0005e22b) scroll_pane_cp06

0xa706,	// (0x00067863) bg_calc_paper_pane

0x10dd,	// (0x0005e23a) list_calc_pane

0xa71a,	// (0x00067877) bg_calc_display_pane

0x10f7,	// (0x0005e254) calc_display_pane_t1

0x110c,	// (0x0005e269) calc_display_pane_t2

0x1121,	// (0x0005e27e) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0006c229) calc_display_pane_t

0x1133,	// (0x0005e290) cell_calc_pane_ParamLimits

0x1133,	// (0x0005e290) cell_calc_pane

0xa726,	// (0x00067883) bg_calc_paper_pane_g1

0xa732,	// (0x0006788f) bg_calc_paper_pane_g2

0xa73e,	// (0x0006789b) bg_calc_paper_pane_g3

0xa74a,	// (0x000678a7) bg_calc_paper_pane_g4

0xa756,	// (0x000678b3) bg_calc_paper_pane_g5

0x1162,	// (0x0005e2bf) bg_calc_paper_pane_g6

0x1173,	// (0x0005e2d0) bg_calc_paper_pane_g7

0x1184,	// (0x0005e2e1) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0006c230) bg_calc_paper_pane_g

0x1195,	// (0x0005e2f2) calc_bg_paper_pane_g9

0x11a6,	// (0x0005e303) list_calc_item_pane_ParamLimits

0x11a6,	// (0x0005e303) list_calc_item_pane

0xa762,	// (0x000678bf) list_calc_item_pane_g1

0x11c7,	// (0x0005e324) list_calc_item_pane_t1_ParamLimits

0x11c7,	// (0x0005e324) list_calc_item_pane_t1

0x11d9,	// (0x0005e336) list_calc_item_pane_t2_ParamLimits

0x11d9,	// (0x0005e336) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0006c241) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0006c241) list_calc_item_pane_t

0xa645,	// (0x000677a2) cell_calc_pane_g1

0xa76f,	// (0x000678cc) grid_highlight_pane_cp02

0xd5cd,	// (0x0006a72a) bg_calc_display_pane_g1

0x1209,	// (0x0005e366) bg_calc_display_pane_g2

0xd5d6,	// (0x0006a733) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0006c24b) bg_calc_display_pane_g

0x1213,	// (0x0005e370) cell_qdial_pane_ParamLimits

0x1213,	// (0x0005e370) cell_qdial_pane

0x1229,	// (0x0005e386) cell_qdial_pane_g1_ParamLimits

0x1229,	// (0x0005e386) cell_qdial_pane_g1

0x1236,	// (0x0005e393) cell_qdial_pane_g2_ParamLimits

0x1236,	// (0x0005e393) cell_qdial_pane_g2

0xa791,	// (0x000678ee) cell_qdial_pane_g3_ParamLimits

0xa791,	// (0x000678ee) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0006c252) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0006c252) cell_qdial_pane_g

0x1254,	// (0x0005e3b1) cell_qdial_pane_t1_ParamLimits

0x1254,	// (0x0005e3b1) cell_qdial_pane_t1

0x126c,	// (0x0005e3c9) cell_qdial_pane_t2_ParamLimits

0x126c,	// (0x0005e3c9) cell_qdial_pane_t2

0x127f,	// (0x0005e3dc) cell_qdial_pane_t3_ParamLimits

0x127f,	// (0x0005e3dc) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0006c25b) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0006c25b) cell_qdial_pane_t

0x9fda,	// (0x00067137) grid_highlight_pane_cp04

0xa79d,	// (0x000678fa) thumbnail_qdial_pane_ParamLimits

0xa79d,	// (0x000678fa) thumbnail_qdial_pane

0xa7f9,	// (0x00067956) list_help_pane

0xa802,	// (0x0006795f) scroll_pane_cp02

0x1292,	// (0x0005e3ef) help_list_pane_t1_ParamLimits

0x1292,	// (0x0005e3ef) help_list_pane_t1

0x12b9,	// (0x0005e416) bg_notes_pane_g2

0x12c1,	// (0x0005e41e) bg_notes_pane_g3

0x12c9,	// (0x0005e426) notes_bg_pane_g1

0x12d1,	// (0x0005e42e) notes_bg_pane_g4

0x12d9,	// (0x0005e436) notes_bg_pane_g5

0x12e1,	// (0x0005e43e) notes_bg_pane_g6

0x12e9,	// (0x0005e446) notes_bg_pane_g7

0x12f1,	// (0x0005e44e) notes_bg_pane_g8

0x12f9,	// (0x0005e456) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0006c279) notes_bg_pane_g

0x1301,	// (0x0005e45e) list_notes_text_pane_ParamLimits

0x1301,	// (0x0005e45e) list_notes_text_pane

0xa80b,	// (0x00067968) list_notes_text_pane_g1

0x1329,	// (0x0005e486) list_notes_text_pane_t1

0x1337,	// (0x0005e494) listscroll_cale_week_pane

0x1363,	// (0x0005e4c0) bg_cale_heading_pane

0x138c,	// (0x0005e4e9) bg_cale_pane_cp01

0x13ae,	// (0x0005e50b) cale_week_corner_pane

0x13cd,	// (0x0005e52a) cale_week_day_heading_pane

0x13fb,	// (0x0005e558) cale_week_scroll_pane_g1

0x141f,	// (0x0005e57c) cale_week_scroll_pane_g2

0x1437,	// (0x0005e594) cale_week_scroll_pane_g3

0x144f,	// (0x0005e5ac) cale_week_scroll_pane_g4

0x1467,	// (0x0005e5c4) cale_week_scroll_pane_g5

0x147f,	// (0x0005e5dc) cale_week_scroll_pane_g6

0x149f,	// (0x0005e5fc) cale_week_scroll_pane_g7

0x14bf,	// (0x0005e61c) cale_week_scroll_pane_g8

0x14df,	// (0x0005e63c) cale_week_scroll_pane_g9

0x14fc,	// (0x0005e659) cale_week_scroll_pane_g10

0x1519,	// (0x0005e676) cale_week_scroll_pane_g11

0x1538,	// (0x0005e695) cale_week_scroll_pane_g12

0x155d,	// (0x0005e6ba) cale_week_scroll_pane_g13

0x1586,	// (0x0005e6e3) cale_week_scroll_pane_g14

0x15af,	// (0x0005e70c) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0006c288) cale_week_scroll_pane_g

0x15f8,	// (0x0005e755) cale_week_time_pane

0x1618,	// (0x0005e775) grid_cale_week_pane

0xa840,	// (0x0006799d) scroll_pane_cp08

0x1649,	// (0x0005e7a6) cell_cale_week_pane_ParamLimits

0x1649,	// (0x0005e7a6) cell_cale_week_pane

0x16d9,	// (0x0005e836) cale_week_day_heading_pane_t1

0x1701,	// (0x0005e85e) cale_week_day_heading_pane_t2

0x172e,	// (0x0005e88b) cale_week_day_heading_pane_t3

0x175b,	// (0x0005e8b8) cale_week_day_heading_pane_t4

0x1788,	// (0x0005e8e5) cale_week_day_heading_pane_t5

0x17b5,	// (0x0005e912) cale_week_day_heading_pane_t6

0x17e2,	// (0x0005e93f) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0006c2a9) cale_week_day_heading_pane_t

0xa85d,	// (0x000679ba) bg_cale_side_pane

0x180a,	// (0x0005e967) cale_week_time_pane_t1

0x182e,	// (0x0005e98b) cale_week_time_pane_t2

0x1852,	// (0x0005e9af) cale_week_time_pane_t3

0x1876,	// (0x0005e9d3) cale_week_time_pane_t4

0x189a,	// (0x0005e9f7) cale_week_time_pane_t5

0x18c0,	// (0x0005ea1d) cale_week_time_pane_t6

0x18e8,	// (0x0005ea45) cale_week_time_pane_t7

0x1914,	// (0x0005ea71) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0006c2b8) cale_week_time_pane_t

0x1944,	// (0x0005eaa1) cell_cale_week_pane_g2

0x1968,	// (0x0005eac5) cell_cale_week_pane_g3_ParamLimits

0x1968,	// (0x0005eac5) cell_cale_week_pane_g3

0xa902,	// (0x00067a5f) grid_highlight_pane_cp07

0xa90a,	// (0x00067a67) listscroll_gms_pane

0xa914,	// (0x00067a71) grid_gms_pane

0xa91d,	// (0x00067a7a) listscroll_gms_pane_g1

0xa925,	// (0x00067a82) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0006c2c9) listscroll_gms_pane_g

0x1980,	// (0x0005eadd) scroll_pane_cp010

0x198b,	// (0x0005eae8) cell_gms_pane_ParamLimits

0x198b,	// (0x0005eae8) cell_gms_pane

0x199e,	// (0x0005eafb) cell_gms_pane_g1

0xa92d,	// (0x00067a8a) cell_gms_pane_g2

0xa935,	// (0x00067a92) cell_gms_pane_g3

0xa93e,	// (0x00067a9b) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0006c2ce) cell_gms_pane_g

0xa947,	// (0x00067aa4) grid_highlight_pane_cp09

0x3ac4,	// (0x00060c21) phob_pre_status_pane_g1

0x3acc,	// (0x00060c29) phob_pre_status_pane_g2

0x3ad4,	// (0x00060c31) phob_pre_status_pane_g3

0x3adc,	// (0x00060c39) phob_pre_status_pane_g4

0x0004,

0xf4af,	// (0x0006c60c) phob_pre_status_pane_g

0x3aec,	// (0x00060c49) phob_pre_status_pane_t1

0x3afc,	// (0x00060c59) phob_pre_status_pane_t2

0x3b0c,	// (0x00060c69) phob_pre_status_pane_t3

0x0002,

0xf4ba,	// (0x0006c617) phob_pre_status_pane_t

0xa94f,	// (0x00067aac) bg_list_pane_cp05

0x19ae,	// (0x0005eb0b) grid_vorec_pane

0x19b8,	// (0x0005eb15) vorec_t1

0x19c6,	// (0x0005eb23) vorec_t2

0x19d4,	// (0x0005eb31) vorec_t3

0x19e2,	// (0x0005eb3f) vorec_t4

0x8f68,	// (0x000660c5) vorec_t5

0x8f76,	// (0x000660d3) vorec_t6

0x0004,

0xf17a,	// (0x0006c2d7) vorec_t

0x8f84,	// (0x000660e1) wait_bar_pane_cp01

0x19fe,	// (0x0005eb5b) cell_vorec_pane_ParamLimits

0x19fe,	// (0x0005eb5b) cell_vorec_pane

0x1a13,	// (0x0005eb70) cell_vorec_pane_g1

0x9fda,	// (0x00067137) grid_highlight_pane_cp05

0xa69a,	// (0x000677f7) cams_zoom_pane

0xa69a,	// (0x000677f7) image_vga_pane

0xa6b6,	// (0x00067813) main_camera_pane_g1

0xa6b6,	// (0x00067813) main_camera_pane_g2

0xa6b6,	// (0x00067813) main_camera_pane_g3

0xa6b6,	// (0x00067813) main_camera_pane_g4

0xa6b6,	// (0x00067813) main_camera_pane_g5

0xa6b6,	// (0x00067813) main_camera_pane_g6

0xa6b6,	// (0x00067813) main_camera_pane_g7

0x0007,

0xf185,	// (0x0006c2e2) main_camera_pane_g

0xb285,	// (0x000683e2) main_camera_pane_t1

0xb285,	// (0x000683e2) main_camera_pane_t2

0x0001,

0xf196,	// (0x0006c2f3) main_camera_pane_t

0x1a1d,	// (0x0005eb7a) cams_zoom_pane_cp_ParamLimits

0x1a1d,	// (0x0005eb7a) cams_zoom_pane_cp

0x1a4b,	// (0x0005eba8) image_cif_pane_ParamLimits

0x1a4b,	// (0x0005eba8) image_cif_pane

0x9b88,	// (0x00066ce5) image_subqcif_pane

0x1a59,	// (0x0005ebb6) main_video_pane_g1_ParamLimits

0x1a59,	// (0x0005ebb6) main_video_pane_g1

0x1a81,	// (0x0005ebde) main_video_pane_g2_ParamLimits

0x1a81,	// (0x0005ebde) main_video_pane_g2

0x1ab4,	// (0x0005ec11) main_video_pane_g3_ParamLimits

0x1ab4,	// (0x0005ec11) main_video_pane_g3

0x1ab4,	// (0x0005ec11) main_video_pane_g4_ParamLimits

0x1ab4,	// (0x0005ec11) main_video_pane_g4

0x1ae2,	// (0x0005ec3f) main_video_pane_g5_ParamLimits

0x1ae2,	// (0x0005ec3f) main_video_pane_g5

0xa957,	// (0x00067ab4) main_video_pane_g6_ParamLimits

0xa957,	// (0x00067ab4) main_video_pane_g6

0x0006,

0xf19b,	// (0x0006c2f8) main_video_pane_g_ParamLimits

0xf19b,	// (0x0006c2f8) main_video_pane_g

0x1afe,	// (0x0005ec5b) main_video_pane_t1_ParamLimits

0x1afe,	// (0x0005ec5b) main_video_pane_t1

0xa971,	// (0x00067ace) cams_zoom_pane_g1

0xa971,	// (0x00067ace) cams_zoom_pane_g2

0xa971,	// (0x00067ace) cams_zoom_pane_g3

0xa971,	// (0x00067ace) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0006c307) cams_zoom_pane_g

0x1b44,	// (0x0005eca1) grid_cams_pane

0x1b52,	// (0x0005ecaf) linegrid_cams_pane

0x1b5e,	// (0x0005ecbb) cell_cams_pane_ParamLimits

0x1b5e,	// (0x0005ecbb) cell_cams_pane

0xa97b,	// (0x00067ad8) cams_burst_image_pane

0xa983,	// (0x00067ae0) cell_cams_pane_g1

0x9fda,	// (0x00067137) grid_highlight_pane_cp03

0xa645,	// (0x000677a2) mp_bg_pane_g1

0x9b88,	// (0x00066ce5) bg_list_pane_cp03

0x9b88,	// (0x00066ce5) bg_mp_pane

0x9b88,	// (0x00066ce5) grid_mp_pane

0xa971,	// (0x00067ace) media_player_g1

0xaeee,	// (0x0006804b) media_player_t1

0xaeee,	// (0x0006804b) media_player_t2

0xaeee,	// (0x0006804b) media_player_t3

0xaeee,	// (0x0006804b) media_player_t4

0xaeee,	// (0x0006804b) media_player_t5

0xaeee,	// (0x0006804b) media_player_t6

0xaeee,	// (0x0006804b) media_player_t7

0x0006,

0xf4a0,	// (0x0006c5fd) media_player_t

0x9b88,	// (0x00066ce5) wait_bar_pane_cp02

0xf493,	// (0x0006c5f0) main_usb_pane_t

0xb165,	// (0x000682c2) cell_mp_pane

0xa645,	// (0x000677a2) cell_mp_pane_g1

0x9fda,	// (0x00067137) grid_highlight_pane_cp06

0xa99f,	// (0x00067afc) grid_skin_colour_pane

0xa9a7,	// (0x00067b04) list_highlight_pane_cp03

0x1b73,	// (0x0005ecd0) skin_g1

0xa9af,	// (0x00067b0c) skin_t1

0xa9be,	// (0x00067b1b) skin_t2

0x0001,

0xf1d8,	// (0x0006c335) skin_t

0x1b7d,	// (0x0005ecda) cell_skin_colour_pane_ParamLimits

0x1b7d,	// (0x0005ecda) cell_skin_colour_pane

0xa9cc,	// (0x00067b29) cell_skin_colour_pane_g1

0x1bfd,	// (0x0005ed5a) call_video_g1_ParamLimits

0x1bfd,	// (0x0005ed5a) call_video_g1

0x1c0d,	// (0x0005ed6a) call_video_g2_ParamLimits

0x1c0d,	// (0x0005ed6a) call_video_g2

0x0001,

0xf1dd,	// (0x0006c33a) call_video_g_ParamLimits

0xf1dd,	// (0x0006c33a) call_video_g

0x1c5d,	// (0x0005edba) call_video_uplink_pane_cp1_ParamLimits

0x1c5d,	// (0x0005edba) call_video_uplink_pane_cp1

0xa9de,	// (0x00067b3b) call_video_uplink_pane_cp2

0x1d2b,	// (0x0005ee88) video_down_crop_pane_ParamLimits

0x1d2b,	// (0x0005ee88) video_down_crop_pane

0x1e1d,	// (0x0005ef7a) video_down_pane_ParamLimits

0x1e1d,	// (0x0005ef7a) video_down_pane

0xa9e6,	// (0x00067b43) video_down_subqcif_pane_ParamLimits

0xa9e6,	// (0x00067b43) video_down_subqcif_pane

0xaa00,	// (0x00067b5d) video_down_subqcif_pane_cp_ParamLimits

0xaa00,	// (0x00067b5d) video_down_subqcif_pane_cp

0xaa28,	// (0x00067b85) im_reading_pane_ParamLimits

0xaa28,	// (0x00067b85) im_reading_pane

0x1f3a,	// (0x0005f097) im_writing_pane_ParamLimits

0x1f3a,	// (0x0005f097) im_writing_pane

0x1f58,	// (0x0005f0b5) im_reading_pane_t1

0xaa42,	// (0x00067b9f) list_im_pane

0xaa53,	// (0x00067bb0) scroll_pane_cp07

0x1f9a,	// (0x0005f0f7) im_writing_pane_t1_ParamLimits

0x1f9a,	// (0x0005f0f7) im_writing_pane_t1

0xaa6c,	// (0x00067bc9) im_writing_pane_t2_ParamLimits

0xaa6c,	// (0x00067bc9) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0006c344) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0006c344) im_writing_pane_t

0x9fda,	// (0x00067137) input_focus_pane_cp04

0x9fda,	// (0x00067137) input_focus_pane_cp05

0x1fac,	// (0x0005f109) list_im_single_pane_ParamLimits

0x1fac,	// (0x0005f109) list_im_single_pane

0xaa89,	// (0x00067be6) list_single_im_pane_t1

0xa94f,	// (0x00067aac) blid_accuracy_pane

0xa94f,	// (0x00067aac) blid_compass_pane

0xc5d6,	// (0x00069733) main_location_t1

0xc5d6,	// (0x00069733) main_location_t2

0xc5d6,	// (0x00069733) main_location_t3

0x0002,

0x01c7,	// (0x0005d324) main_location_t

0x9fda,	// (0x00067137) aid_levels_location

0xa645,	// (0x000677a2) blid_accuracy_pane_g1

0xa645,	// (0x000677a2) blid_accuracy_pane_g2

0x0001,

0xf23b,	// (0x0006c398) blid_accuracy_pane_g

0xaac3,	// (0x00067c20) wml_content_pane

0xab01,	// (0x00067c5e) wml_button_pane_ParamLimits

0xab01,	// (0x00067c5e) wml_button_pane

0x1fc5,	// (0x0005f122) wml_list_single_large_pane_ParamLimits

0x1fc5,	// (0x0005f122) wml_list_single_large_pane

0x1fe7,	// (0x0005f144) wml_list_single_medium_pane_ParamLimits

0x1fe7,	// (0x0005f144) wml_list_single_medium_pane

0x200a,	// (0x0005f167) wml_list_single_small_pane_ParamLimits

0x200a,	// (0x0005f167) wml_list_single_small_pane

0xab15,	// (0x00067c72) wml_selection_box_pane_ParamLimits

0xab15,	// (0x00067c72) wml_selection_box_pane

0xab28,	// (0x00067c85) wml_list_single_pane_t1

0xab37,	// (0x00067c94) wml_list_single_medium_pane_t1

0xab46,	// (0x00067ca3) wml_list_single_large_pane_t1

0xab55,	// (0x00067cb2) input_focus_pane_cp02_ParamLimits

0xab55,	// (0x00067cb2) input_focus_pane_cp02

0xab68,	// (0x00067cc5) wml_selection_box_pane_g1

0xab71,	// (0x00067cce) wml_selection_box_pane_t1_ParamLimits

0xab71,	// (0x00067cce) wml_selection_box_pane_t1

0xa62d,	// (0x0006778a) bg_wml_button_pane_ParamLimits

0xa62d,	// (0x0006778a) bg_wml_button_pane

0xab89,	// (0x00067ce6) wml_button_pane_g1

0xab91,	// (0x00067cee) wml_button_pane_t1

0xab89,	// (0x00067ce6) wml_button_bg_pane_g1

0xaba1,	// (0x00067cfe) wml_button_bg_pane_g2

0xaba9,	// (0x00067d06) wml_button_bg_pane_g3

0xabb1,	// (0x00067d0e) wml_button_bg_pane_g4

0xabb9,	// (0x00067d16) wml_button_bg_pane_g5

0xabc1,	// (0x00067d1e) wml_button_bg_pane_g6

0xabc9,	// (0x00067d26) wml_button_bg_pane_g7

0xabd1,	// (0x00067d2e) wml_button_bg_pane_g8

0xabd9,	// (0x00067d36) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0006c349) wml_button_bg_pane_g

0x2032,	// (0x0005f18f) bg_list_pane_cp02

0xabe1,	// (0x00067d3e) mce_header_pane_ParamLimits

0xabe1,	// (0x00067d3e) mce_header_pane

0xabf7,	// (0x00067d54) mce_icon_pane

0xabf7,	// (0x00067d54) mce_image_pane

0xac00,	// (0x00067d5d) mce_text_pane_ParamLimits

0xac00,	// (0x00067d5d) mce_text_pane

0x203c,	// (0x0005f199) scroll_pane_cp03

0xaaf9,	// (0x00067c56) scroll_pane_cp04

0xac2a,	// (0x00067d87) scroll_pane_cp05_ParamLimits

0xac2a,	// (0x00067d87) scroll_pane_cp05

0x2046,	// (0x0005f1a3) mce_header_field_pane_ParamLimits

0x2046,	// (0x0005f1a3) mce_header_field_pane

0x2068,	// (0x0005f1c5) mce_header_field_pane_2_ParamLimits

0x2068,	// (0x0005f1c5) mce_header_field_pane_2

0x207e,	// (0x0005f1db) mce_header_field_pane_3

0x2086,	// (0x0005f1e3) list_single_mce_message_pane_ParamLimits

0x2086,	// (0x0005f1e3) list_single_mce_message_pane

0x20a5,	// (0x0005f202) list_single_mce_smart_pane_ParamLimits

0x20a5,	// (0x0005f202) list_single_mce_smart_pane

0xac36,	// (0x00067d93) input_focus_pane_cp03

0xac3f,	// (0x00067d9c) list_header_data_pane

0x20cf,	// (0x0005f22c) mce_header_field_pane_t1

0x20df,	// (0x0005f23c) list_single_mce_header_pane_ParamLimits

0x20df,	// (0x0005f23c) list_single_mce_header_pane

0xac47,	// (0x00067da4) list_single_mce_header_pane_t1

0xac56,	// (0x00067db3) list_single_mce_message_pane_g1

0xac5e,	// (0x00067dbb) list_single_mce_message_pane_t1

0x2123,	// (0x0005f280) bg_cale_heading_pane_cp01_ParamLimits

0x2123,	// (0x0005f280) bg_cale_heading_pane_cp01

0xac6c,	// (0x00067dc9) bg_cale_pane_cp02_ParamLimits

0xac6c,	// (0x00067dc9) bg_cale_pane_cp02

0x2175,	// (0x0005f2d2) cale_month_corner_pane

0x2194,	// (0x0005f2f1) cale_month_day_heading_pane_ParamLimits

0x2194,	// (0x0005f2f1) cale_month_day_heading_pane

0x21f6,	// (0x0005f353) cale_month_pane_g1_ParamLimits

0x21f6,	// (0x0005f353) cale_month_pane_g1

0x223d,	// (0x0005f39a) cale_month_pane_g2_ParamLimits

0x223d,	// (0x0005f39a) cale_month_pane_g2

0x2275,	// (0x0005f3d2) cale_month_pane_g3_ParamLimits

0x2275,	// (0x0005f3d2) cale_month_pane_g3

0x22c9,	// (0x0005f426) cale_month_pane_g4_ParamLimits

0x22c9,	// (0x0005f426) cale_month_pane_g4

0x231d,	// (0x0005f47a) cale_month_pane_g5_ParamLimits

0x231d,	// (0x0005f47a) cale_month_pane_g5

0x2371,	// (0x0005f4ce) cale_month_pane_g6_ParamLimits

0x2371,	// (0x0005f4ce) cale_month_pane_g6

0x23d5,	// (0x0005f532) cale_month_pane_g7_ParamLimits

0x23d5,	// (0x0005f532) cale_month_pane_g7

0x2439,	// (0x0005f596) cale_month_pane_g8_ParamLimits

0x2439,	// (0x0005f596) cale_month_pane_g8

0x249d,	// (0x0005f5fa) cale_month_pane_g9_ParamLimits

0x249d,	// (0x0005f5fa) cale_month_pane_g9

0x24f7,	// (0x0005f654) cale_month_pane_g10_ParamLimits

0x24f7,	// (0x0005f654) cale_month_pane_g10

0x2549,	// (0x0005f6a6) cale_month_pane_g11_ParamLimits

0x2549,	// (0x0005f6a6) cale_month_pane_g11

0x2597,	// (0x0005f6f4) cale_month_pane_g12_ParamLimits

0x2597,	// (0x0005f6f4) cale_month_pane_g12

0x25e7,	// (0x0005f744) cale_month_pane_g13_ParamLimits

0x25e7,	// (0x0005f744) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0006c35c) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0006c35c) cale_month_pane_g

0x2637,	// (0x0005f794) cale_month_week_pane

0x2657,	// (0x0005f7b4) grid_cale_month_pane_ParamLimits

0x2657,	// (0x0005f7b4) grid_cale_month_pane

0x26b0,	// (0x0005f80d) cale_month_day_heading_pane_t1

0x2732,	// (0x0005f88f) cale_month_day_heading_pane_t2

0x27ab,	// (0x0005f908) cale_month_day_heading_pane_t3

0x2824,	// (0x0005f981) cale_month_day_heading_pane_t4

0x289d,	// (0x0005f9fa) cale_month_day_heading_pane_t5

0x291e,	// (0x0005fa7b) cale_month_day_heading_pane_t6

0x29a7,	// (0x0005fb04) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0006c377) cale_month_day_heading_pane_t

0xa85d,	// (0x000679ba) bg_cale_side_pane_cp01

0x2a30,	// (0x0005fb8d) cale_month_week_pane_t1

0x2a49,	// (0x0005fba6) cale_month_week_pane_t2

0x2a62,	// (0x0005fbbf) cale_month_week_pane_t3

0x2a7b,	// (0x0005fbd8) cale_month_week_pane_t4

0x2a94,	// (0x0005fbf1) cale_month_week_pane_t5

0x2ab1,	// (0x0005fc0e) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0006c386) cale_month_week_pane_t

0x2ad4,	// (0x0005fc31) cell_cale_month_pane_ParamLimits

0x2ad4,	// (0x0005fc31) cell_cale_month_pane

0x2c02,	// (0x0005fd5f) cell_cale_month_pane_g1

0x2c0e,	// (0x0005fd6b) cell_cale_month_pane_t1_ParamLimits

0x2c0e,	// (0x0005fd6b) cell_cale_month_pane_t1

0xa902,	// (0x00067a5f) grid_highlight_pane_cp08

0xa645,	// (0x000677a2) main_smil_g1

0x2c3a,	// (0x0005fd97) smil_status_pane

0xacab,	// (0x00067e08) smil_text_pane

0xc4ec,	// (0x00069649) bg_popup_call3_rect_pane_g8

0xc4f4,	// (0x00069651) bg_popup_call3_rect_pane_g9

0x0008,

0xf47b,	// (0x0006c5d8) bg_popup_call3_rect_pane_g

0xc6ad,	// (0x0006980a) smil_status_volume_pane_g1

0xacb5,	// (0x00067e12) smil_status_pane_t1

0x3ea1,	// (0x00060ffe) volume_smil_pane

0xaccc,	// (0x00067e29) list_smil_text_pane

0x2c4d,	// (0x0005fdaa) scroll_pane_cp011

0x2c58,	// (0x0005fdb5) smil_text_list_pane_t1_ParamLimits

0x2c58,	// (0x0005fdb5) smil_text_list_pane_t1

0x2cac,	// (0x0005fe09) aid_volume_smil_ParamLimits

0x2cac,	// (0x0005fe09) aid_volume_smil

0xa645,	// (0x000677a2) smil_volume_pane_g1

0xa645,	// (0x000677a2) smil_volume_pane_g2

0x0001,

0xf23b,	// (0x0006c398) smil_volume_pane_g

0x1337,	// (0x0005e494) listscroll_cale_day_pane

0xacd6,	// (0x00067e33) bg_cale_pane

0xacee,	// (0x00067e4b) list_cale_pane

0xad11,	// (0x00067e6e) scroll_pane_cp09

0xad22,	// (0x00067e7f) cale_bg_pane_g1

0xad2a,	// (0x00067e87) cale_bg_pane_g2

0xad32,	// (0x00067e8f) cale_bg_pane_g3

0xad3a,	// (0x00067e97) cale_bg_pane_g4

0xad42,	// (0x00067e9f) cale_bg_pane_g5

0xad4a,	// (0x00067ea7) cale_bg_pane_g6

0xad52,	// (0x00067eaf) cale_bg_pane_g7

0xad5a,	// (0x00067eb7) cale_bg_pane_g8

0xad62,	// (0x00067ebf) cale_bg_pane_g9

0x0008,

0xf240,	// (0x0006c39d) cale_bg_pane_g

0xad6a,	// (0x00067ec7) list_cale_time_pane_ParamLimits

0xad6a,	// (0x00067ec7) list_cale_time_pane

0xad81,	// (0x00067ede) list_cale_time_pane_g1_ParamLimits

0xad81,	// (0x00067ede) list_cale_time_pane_g1

0xad8d,	// (0x00067eea) list_cale_time_pane_g2_ParamLimits

0xad8d,	// (0x00067eea) list_cale_time_pane_g2

0x2cd6,	// (0x0005fe33) list_cale_time_pane_g3_ParamLimits

0x2cd6,	// (0x0005fe33) list_cale_time_pane_g3

0x2ce4,	// (0x0005fe41) list_cale_time_pane_g4_ParamLimits

0x2ce4,	// (0x0005fe41) list_cale_time_pane_g4

0x2cf2,	// (0x0005fe4f) list_cale_time_pane_g5_ParamLimits

0x2cf2,	// (0x0005fe4f) list_cale_time_pane_g5

0x0005,

0xf253,	// (0x0006c3b0) list_cale_time_pane_g_ParamLimits

0xf253,	// (0x0006c3b0) list_cale_time_pane_g

0xada7,	// (0x00067f04) list_cale_time_pane_t1_ParamLimits

0xada7,	// (0x00067f04) list_cale_time_pane_t1

0xadcf,	// (0x00067f2c) list_cale_time_pane_t2_ParamLimits

0xadcf,	// (0x00067f2c) list_cale_time_pane_t2

0x2fc4,	// (0x00060121) aid_blid_cardinal_pane

0x3006,	// (0x00060163) compass_pane_t4

0xadf7,	// (0x00067f54) list_cale_time_pane_t4_ParamLimits

0xadf7,	// (0x00067f54) list_cale_time_pane_t4

0x3014,	// (0x00060171) compass_pane_t5

0x3024,	// (0x00060181) compass_pane_t6

0x3032,	// (0x0006018f) compass_pane_t7

0xb215,	// (0x00068372) navi_pane_cc_t1

0xb376,	// (0x000684d3) aid_phob_thumbnail_center_pane

0x3558,	// (0x000606b5) main_postcard_pane_g4_ParamLimits

0x0002,

0xf260,	// (0x0006c3bd) list_cale_time_pane_t_ParamLimits

0xf260,	// (0x0006c3bd) list_cale_time_pane_t

0x9c31,	// (0x00066d8e) bg_popup_window_pane_cp02_ParamLimits

0x9c31,	// (0x00066d8e) bg_popup_window_pane_cp02

0xae1f,	// (0x00067f7c) heading_pane_cp01_ParamLimits

0xae1f,	// (0x00067f7c) heading_pane_cp01

0xae2b,	// (0x00067f88) loc_req_pane_ParamLimits

0xae2b,	// (0x00067f88) loc_req_pane

0xae3b,	// (0x00067f98) loc_type_pane_ParamLimits

0xae3b,	// (0x00067f98) loc_type_pane

0xae4d,	// (0x00067faa) loc_type_pane_t1_ParamLimits

0xae4d,	// (0x00067faa) loc_type_pane_t1

0xae5f,	// (0x00067fbc) loc_type_pane_t2_ParamLimits

0xae5f,	// (0x00067fbc) loc_type_pane_t2

0xae71,	// (0x00067fce) loc_type_pane_t3_ParamLimits

0xae71,	// (0x00067fce) loc_type_pane_t3

0x0002,

0xf267,	// (0x0006c3c4) loc_type_pane_t_ParamLimits

0xf267,	// (0x0006c3c4) loc_type_pane_t

0xae83,	// (0x00067fe0) list_loc_req_pane

0xae8d,	// (0x00067fea) scroll_pane_cp012

0x2d00,	// (0x0005fe5d) list_single_loc_request_popup_menu_pane_ParamLimits

0x2d00,	// (0x0005fe5d) list_single_loc_request_popup_menu_pane

0xae98,	// (0x00067ff5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae98,	// (0x00067ff5) list_single_loc_request_popup_menu_pane_g1

0xaea4,	// (0x00068001) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaea4,	// (0x00068001) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf26e,	// (0x0006c3cb) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf26e,	// (0x0006c3cb) list_single_loc_request_popup_menu_pane_g

0xaeb0,	// (0x0006800d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaeb0,	// (0x0006800d) list_single_loc_request_popup_menu_pane_t1

0x2d12,	// (0x0005fe6f) bg_popup_window_pane_cp03_ParamLimits

0x2d12,	// (0x0005fe6f) bg_popup_window_pane_cp03

0x2d20,	// (0x0005fe7d) heading_loc_req_pane_ParamLimits

0x2d20,	// (0x0005fe7d) heading_loc_req_pane

0x2d2c,	// (0x0005fe89) popup_dyc_status_message_window_g1_ParamLimits

0x2d2c,	// (0x0005fe89) popup_dyc_status_message_window_g1

0x2d38,	// (0x0005fe95) popup_dyc_status_message_window_t1_ParamLimits

0x2d38,	// (0x0005fe95) popup_dyc_status_message_window_t1

0x2d4a,	// (0x0005fea7) popup_dyc_status_message_window_t2_ParamLimits

0x2d4a,	// (0x0005fea7) popup_dyc_status_message_window_t2

0x2d5c,	// (0x0005feb9) popup_dyc_status_message_window_t3_ParamLimits

0x2d5c,	// (0x0005feb9) popup_dyc_status_message_window_t3

0x0002,

0xf273,	// (0x0006c3d0) popup_dyc_status_message_window_t_ParamLimits

0xf273,	// (0x0006c3d0) popup_dyc_status_message_window_t

0x9fda,	// (0x00067137) bg_heading_pane_cp01

0xaec6,	// (0x00068023) heading_loc_req_pane_g1

0xaece,	// (0x0006802b) heading_loc_req_pane_g2

0xaed6,	// (0x00068033) heading_loc_req_pane_g3

0x0002,

0xf27a,	// (0x0006c3d7) heading_loc_req_pane_g

0xaede,	// (0x0006803b) heading_loc_req_pane_t1

0xaefe,	// (0x0006805b) bg_popup_sub_pane_cp01_ParamLimits

0xaefe,	// (0x0006805b) bg_popup_sub_pane_cp01

0xaf0c,	// (0x00068069) popup_cale_events_window_g1_ParamLimits

0xaf0c,	// (0x00068069) popup_cale_events_window_g1

0xaf2c,	// (0x00068089) popup_cale_events_window_g2_ParamLimits

0xaf2c,	// (0x00068089) popup_cale_events_window_g2

0x0001,

0xf29c,	// (0x0006c3f9) popup_cale_events_window_g_ParamLimits

0xf29c,	// (0x0006c3f9) popup_cale_events_window_g

0xaf58,	// (0x000680b5) popup_cale_events_window_t1_ParamLimits

0xaf58,	// (0x000680b5) popup_cale_events_window_t1

0xaf6a,	// (0x000680c7) popup_cale_events_window_t2_ParamLimits

0xaf6a,	// (0x000680c7) popup_cale_events_window_t2

0xafa8,	// (0x00068105) popup_cale_events_window_t3_ParamLimits

0xafa8,	// (0x00068105) popup_cale_events_window_t3

0xafe2,	// (0x0006813f) popup_cale_events_window_t4_ParamLimits

0xafe2,	// (0x0006813f) popup_cale_events_window_t4

0x0003,

0xf2a1,	// (0x0006c3fe) popup_cale_events_window_t_ParamLimits

0xf2a1,	// (0x0006c3fe) popup_cale_events_window_t

0x2d86,	// (0x0005fee3) call_type_pane

0xb907,	// (0x00068a64) popup_call_status_window_g1

0x2d92,	// (0x0005feef) popup_call_status_window_g2

0x2d9e,	// (0x0005fefb) popup_call_status_window_g3

0x0002,

0xf2aa,	// (0x0006c407) popup_call_status_window_g

0xb018,	// (0x00068175) call_type_pane_g1

0xb021,	// (0x0006817e) call_type_pane_g2

0x0001,

0xf2b1,	// (0x0006c40e) call_type_pane_g

0x9fda,	// (0x00067137) bg_popup_sub_pane_cp02

0xb02a,	// (0x00068187) listscroll_popup_wml_pane

0xb032,	// (0x0006818f) list_wml_pane

0xb03c,	// (0x00068199) scroll_pane_cp013

0xb047,	// (0x000681a4) list_single_graphic_popup_wml_pane_ParamLimits

0xb047,	// (0x000681a4) list_single_graphic_popup_wml_pane

0xa645,	// (0x000677a2) list_single_graphic_popup_wml_pane_g1

0xb05b,	// (0x000681b8) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b6,	// (0x0006c413) list_single_graphic_popup_wml_pane_g

0xb063,	// (0x000681c0) list_single_graphic_popup_wml_pane_t1

0xb079,	// (0x000681d6) aid_call_pane

0xa625,	// (0x00067782) popup_clock_analogue_window_g1

0xa625,	// (0x00067782) popup_clock_analogue_window_g2

0x2daa,	// (0x0005ff07) popup_clock_analogue_window_g3

0x2daa,	// (0x0005ff07) popup_clock_analogue_window_g4

0xa645,	// (0x000677a2) popup_clock_analogue_window_g5

0x0004,

0xf2bb,	// (0x0006c418) popup_clock_analogue_window_g

0x2db2,	// (0x0005ff0f) popup_clock_analogue_window_t1

0x2dc0,	// (0x0005ff1d) clock_digital_number_pane_ParamLimits

0x2dc0,	// (0x0005ff1d) clock_digital_number_pane

0x2dcc,	// (0x0005ff29) clock_digital_number_pane_cp02_ParamLimits

0x2dcc,	// (0x0005ff29) clock_digital_number_pane_cp02

0x2dd8,	// (0x0005ff35) clock_digital_number_pane_cp03_ParamLimits

0x2dd8,	// (0x0005ff35) clock_digital_number_pane_cp03

0x2de4,	// (0x0005ff41) clock_digital_number_pane_cp04_ParamLimits

0x2de4,	// (0x0005ff41) clock_digital_number_pane_cp04

0x2df0,	// (0x0005ff4d) clock_digital_separator_pane_ParamLimits

0x2df0,	// (0x0005ff4d) clock_digital_separator_pane

0x2dfc,	// (0x0005ff59) popup_clock_digital_window_t1

0xa645,	// (0x000677a2) clock_digital_number_pane_g1

0xa645,	// (0x000677a2) clock_digital_number_pane_g2

0x0001,

0xf23b,	// (0x0006c398) clock_digital_number_pane_g

0xa645,	// (0x000677a2) clock_digital_separator_pane_g1

0xa645,	// (0x000677a2) clock_digital_separator_pane_g2

0x0001,

0xf23b,	// (0x0006c398) clock_digital_separator_pane_g

0x9fda,	// (0x00067137) bg_popup_window_pane_cp04

0xb081,	// (0x000681de) heading_pane_cp03

0xa94f,	// (0x00067aac) listscroll_popup_gms_pane

0x9fda,	// (0x00067137) grid_large_graphic_popup_pane

0xb08a,	// (0x000681e7) listscroll_popup_gms_pane_g1

0xb093,	// (0x000681f0) listscroll_popup_gms_pane_g2

0x0001,

0xf2c6,	// (0x0006c423) listscroll_popup_gms_pane_g

0xb09c,	// (0x000681f9) scroll_pane_cp014

0xa69a,	// (0x000677f7) cell_large_graphic_popup_pane_ParamLimits

0xa69a,	// (0x000677f7) cell_large_graphic_popup_pane

0xa6a8,	// (0x00067805) cell_large_graphic_popup_pane_g1_ParamLimits

0xa6a8,	// (0x00067805) cell_large_graphic_popup_pane_g1

0xb0a5,	// (0x00068202) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0a5,	// (0x00068202) cell_large_graphic_popup_pane_g2

0xb0b3,	// (0x00068210) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0b3,	// (0x00068210) cell_large_graphic_popup_pane_g3

0xb0c1,	// (0x0006821e) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0c1,	// (0x0006821e) cell_large_graphic_popup_pane_g4

0x0003,

0xf2cb,	// (0x0006c428) cell_large_graphic_popup_pane_g_ParamLimits

0xf2cb,	// (0x0006c428) cell_large_graphic_popup_pane_g

0x9fda,	// (0x00067137) grid_highlight_pane_cp010

0xa645,	// (0x000677a2) bg_popup_call_pane_g1

0xb0d2,	// (0x0006822f) list_single_graphic_popup_conf_pane_ParamLimits

0xb0d2,	// (0x0006822f) list_single_graphic_popup_conf_pane

0xb0e4,	// (0x00068241) list_highlight_pane_cp01

0xb0ed,	// (0x0006824a) list_single_graphic_popup_conf_pane_g1

0xb0f5,	// (0x00068252) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2d4,	// (0x0006c431) list_single_graphic_popup_conf_pane_g

0xb0fd,	// (0x0006825a) list_single_graphic_popup_conf_pane_t1

0xb10b,	// (0x00068268) linegrid_cams_pane_g1

0x2e19,	// (0x0005ff76) linegrid_cams_pane_g2

0xa935,	// (0x00067a92) linegrid_cams_pane_g3

0xb114,	// (0x00068271) linegrid_cams_pane_g4

0x2e22,	// (0x0005ff7f) linegrid_cams_pane_g5

0x2e2b,	// (0x0005ff88) linegrid_cams_pane_g6

0xa93e,	// (0x00067a9b) linegrid_cams_pane_g7

0x0006,

0xf2d9,	// (0x0006c436) linegrid_cams_pane_g

0xb11d,	// (0x0006827a) popup_clock_analogue_window

0xb11d,	// (0x0006827a) popup_clock_digital_window

0x9fda,	// (0x00067137) popup_phob_thumbnail_window

0xa645,	// (0x000677a2) call_video_uplink_pane_g1

0xb126,	// (0x00068283) call_video_uplink_pane_g2

0x0001,

0xf2e8,	// (0x0006c445) call_video_uplink_pane_g

0xb12e,	// (0x0006828b) video_uplink_pane

0xb136,	// (0x00068293) mce_image_pane_g1

0x2e36,	// (0x0005ff93) mce_image_pane_g2

0x2e40,	// (0x0005ff9d) mce_image_pane_g3

0x2e4a,	// (0x0005ffa7) mce_image_pane_g4

0x2e52,	// (0x0005ffaf) mce_image_pane_g5

0x0004,

0xf2ed,	// (0x0006c44a) mce_image_pane_g

0xb140,	// (0x0006829d) control_top_pane_stacon_cp01_ParamLimits

0xb140,	// (0x0006829d) control_top_pane_stacon_cp01

0xb154,	// (0x000682b1) uni_indicator_pane_stacon_cp01_ParamLimits

0xb154,	// (0x000682b1) uni_indicator_pane_stacon_cp01

0xb165,	// (0x000682c2) bg_popup_sub_pane_cp03

0x2e5a,	// (0x0005ffb7) chi_dic_find_pane

0x2e62,	// (0x0005ffbf) listscroll_chi_dic_pane

0x2e6b,	// (0x0005ffc8) main_pane_chidic_g1

0x2e7e,	// (0x0005ffdb) chi_dic_find_pane_t1

0xb16f,	// (0x000682cc) find_chidic_pane

0xb178,	// (0x000682d5) chi_dic_list_pane_ParamLimits

0xb178,	// (0x000682d5) chi_dic_list_pane

0xb189,	// (0x000682e6) scroll_pane_cp020

0x2e8c,	// (0x0005ffe9) find_chidic_pane_t1

0x9fda,	// (0x00067137) input_focus_pane_cp06

0x2e9b,	// (0x0005fff8) list_chi_dic_pane_ParamLimits

0x2e9b,	// (0x0005fff8) list_chi_dic_pane

0x2eb0,	// (0x0006000d) list_chi_dic_pane_t1_ParamLimits

0x2eb0,	// (0x0006000d) list_chi_dic_pane_t1

0x9fda,	// (0x00067137) list_highlight_pane_cp020

0xb191,	// (0x000682ee) bg_cale_heading_pane_g1

0x2ec3,	// (0x00060020) bg_cale_heading_pane_g2

0x2ecb,	// (0x00060028) bg_cale_heading_pane_g3

0x2ed3,	// (0x00060030) bg_cale_heading_pane_g4

0x2edd,	// (0x0006003a) bg_cale_heading_pane_g5

0x2ee7,	// (0x00060044) bg_cale_heading_pane_g6

0x2eef,	// (0x0006004c) bg_cale_heading_pane_g7

0x2ef7,	// (0x00060054) bg_cale_heading_pane_g8

0x2f01,	// (0x0006005e) bg_cale_heading_pane_g9

0x0008,

0xf2f8,	// (0x0006c455) bg_cale_heading_pane_g

0xb191,	// (0x000682ee) bg_cale_side_pane_g1

0x2f0b,	// (0x00060068) bg_cale_side_pane_g2

0x2f15,	// (0x00060072) bg_cale_side_pane_g3

0x2f1f,	// (0x0006007c) bg_cale_side_pane_g4

0x2f29,	// (0x00060086) bg_cale_side_pane_g5

0x2f33,	// (0x00060090) bg_cale_side_pane_g6

0x2f3d,	// (0x0006009a) bg_cale_side_pane_g7

0x2f47,	// (0x000600a4) bg_cale_side_pane_g8

0x2f4f,	// (0x000600ac) bg_cale_side_pane_g9

0x0008,

0xf30b,	// (0x0006c468) bg_cale_side_pane_g

0x2f57,	// (0x000600b4) popup_call_status_window_ParamLimits

0x2f57,	// (0x000600b4) popup_call_status_window

0xb199,	// (0x000682f6) stacon_top_pane

0xb1a1,	// (0x000682fe) status_pane_ParamLimits

0xb1a1,	// (0x000682fe) status_pane

0xb1b6,	// (0x00068313) status_small_pane

0xb1be,	// (0x0006831b) control_pane

0x9fda,	// (0x00067137) stacon_bottom_pane

0xb1c6,	// (0x00068323) list_single_mce_smart_pane_t1_ParamLimits

0xb1c6,	// (0x00068323) list_single_mce_smart_pane_t1

0xb1d9,	// (0x00068336) list_single_mce_smart_pane_t2_ParamLimits

0xb1d9,	// (0x00068336) list_single_mce_smart_pane_t2

0x0001,

0xf31e,	// (0x0006c47b) list_single_mce_smart_pane_t_ParamLimits

0xf31e,	// (0x0006c47b) list_single_mce_smart_pane_t

0x2f63,	// (0x000600c0) compass_pane

0x2f6e,	// (0x000600cb) main_location2_pane_t1

0x2f84,	// (0x000600e1) main_location2_pane_t2

0x2f9a,	// (0x000600f7) main_location2_pane_t3

0x0003,

0xf323,	// (0x0006c480) main_location2_pane_t

0xb1f8,	// (0x00068355) compass_pane_g1_ParamLimits

0xb1f8,	// (0x00068355) compass_pane_g1

0x2fe8,	// (0x00060145) compass_pane_t1

0x2ff7,	// (0x00060154) compass_pane_t2

0x0005,

0xf32c,	// (0x0006c489) compass_pane_t

0x3042,	// (0x0006019f) text_secondary_cp61

0xb20c,	// (0x00068369) navi_pane_cams_g5

0xb22f,	// (0x0006838c) navi_pane_im_t1

0xb23d,	// (0x0006839a) navi_pane_mp_g1_ParamLimits

0xb23d,	// (0x0006839a) navi_pane_mp_g1

0xb251,	// (0x000683ae) navi_pane_mp_g2_ParamLimits

0xb251,	// (0x000683ae) navi_pane_mp_g2

0xb25d,	// (0x000683ba) navi_pane_mp_g3_ParamLimits

0xb25d,	// (0x000683ba) navi_pane_mp_g3

0x0002,

0xf340,	// (0x0006c49d) navi_pane_mp_g_ParamLimits

0xf340,	// (0x0006c49d) navi_pane_mp_g

0xb269,	// (0x000683c6) navi_pane_mp_t1

0xb277,	// (0x000683d4) navi_pane_mp_t2

0x0002,

0xf347,	// (0x0006c4a4) navi_pane_mp_t

0xb2c7,	// (0x00068424) navi_pane_vt_g1

0xb269,	// (0x000683c6) navi_pane_vt_t1

0xb2cf,	// (0x0006842c) navi_slider_pane

0xa94f,	// (0x00067aac) zooming_pane

0xb2d7,	// (0x00068434) navi_slider_pane_g1

0x3177,	// (0x000602d4) navi_slider_pane_g2

0x0006,

0xf34e,	// (0x0006c4ab) navi_slider_pane_g

0xb2fb,	// (0x00068458) aid_levels_zoom

0xb303,	// (0x00068460) zooming_pane_g1

0xb30b,	// (0x00068468) zooming_pane_g2

0xb30b,	// (0x00068468) zooming_pane_g3

0x0002,

0xf35d,	// (0x0006c4ba) zooming_pane_g

0xb313,	// (0x00068470) level_10_zoom

0xb31c,	// (0x00068479) level_11_zoom

0xb325,	// (0x00068482) level_1_zoom

0xb32e,	// (0x0006848b) level_2_zoom

0xb337,	// (0x00068494) level_3_zoom

0xb340,	// (0x0006849d) level_4_zoom

0xb349,	// (0x000684a6) level_5_zoom

0xb352,	// (0x000684af) level_6_zoom

0xb35b,	// (0x000684b8) level_7_zoom

0xb364,	// (0x000684c1) level_8_zoom

0xb36d,	// (0x000684ca) level_9_zoom

0xb37e,	// (0x000684db) popup_phob_thumbnail_window_g1

0xb386,	// (0x000684e3) popup_phob_thumbnail_window_g2

0x0001,

0xf364,	// (0x0006c4c1) popup_phob_thumbnail_window_g

0x3b1c,	// (0x00060c79) level_1_location

0x3b24,	// (0x00060c81) level_2_location

0x3b2c,	// (0x00060c89) level_3_location

0x3b36,	// (0x00060c93) level_4_location

0xa94f,	// (0x00067aac) level_5_location

0x3189,	// (0x000602e6) mce_icon_pane_g1

0x3191,	// (0x000602ee) mce_icon_pane_g2

0x0001,

0xf369,	// (0x0006c4c6) mce_icon_pane_g

0x3199,	// (0x000602f6) main_mup_pane_g1_ParamLimits

0x3199,	// (0x000602f6) main_mup_pane_g1

0xa6c4,	// (0x00067821) main_mup_pane_g2_ParamLimits

0xa6c4,	// (0x00067821) main_mup_pane_g2

0xa6c4,	// (0x00067821) main_mup_pane_g3_ParamLimits

0xa6c4,	// (0x00067821) main_mup_pane_g3

0xa6c4,	// (0x00067821) main_mup_pane_g4_ParamLimits

0xa6c4,	// (0x00067821) main_mup_pane_g4

0xa6c4,	// (0x00067821) main_mup_pane_g5_ParamLimits

0xa6c4,	// (0x00067821) main_mup_pane_g5

0xa6c4,	// (0x00067821) main_mup_pane_g6_ParamLimits

0xa6c4,	// (0x00067821) main_mup_pane_g6

0xa6c4,	// (0x00067821) main_mup_pane_g7_ParamLimits

0xa6c4,	// (0x00067821) main_mup_pane_g7

0xa6c4,	// (0x00067821) main_mup_pane_g8_ParamLimits

0xa6c4,	// (0x00067821) main_mup_pane_g8

0xa6c4,	// (0x00067821) main_mup_pane_g9_ParamLimits

0xa6c4,	// (0x00067821) main_mup_pane_g9

0xa6c4,	// (0x00067821) main_mup_pane_g10_ParamLimits

0xa6c4,	// (0x00067821) main_mup_pane_g10

0xa6c4,	// (0x00067821) main_mup_pane_g11_ParamLimits

0xa6c4,	// (0x00067821) main_mup_pane_g11

0xa6b6,	// (0x00067813) main_mup_pane_g12_ParamLimits

0xa6b6,	// (0x00067813) main_mup_pane_g12

0xa6c4,	// (0x00067821) main_mup_pane_g13_ParamLimits

0xa6c4,	// (0x00067821) main_mup_pane_g13

0x000c,

0xf36e,	// (0x0006c4cb) main_mup_pane_g_ParamLimits

0xf36e,	// (0x0006c4cb) main_mup_pane_g

0xa6d2,	// (0x0006782f) main_mup_pane_t1_ParamLimits

0xa6d2,	// (0x0006782f) main_mup_pane_t1

0xa6d2,	// (0x0006782f) main_mup_pane_t2_ParamLimits

0xa6d2,	// (0x0006782f) main_mup_pane_t2

0xa6d2,	// (0x0006782f) main_mup_pane_t3_ParamLimits

0xa6d2,	// (0x0006782f) main_mup_pane_t3

0xb285,	// (0x000683e2) main_mup_pane_t4_ParamLimits

0xb285,	// (0x000683e2) main_mup_pane_t4

0xb285,	// (0x000683e2) main_mup_pane_t5_ParamLimits

0xb285,	// (0x000683e2) main_mup_pane_t5

0xa98b,	// (0x00067ae8) main_mup_pane_t6_ParamLimits

0xa98b,	// (0x00067ae8) main_mup_pane_t6

0x0005,

0xf389,	// (0x0006c4e6) main_mup_pane_t_ParamLimits

0xf389,	// (0x0006c4e6) main_mup_pane_t

0xa1e1,	// (0x0006733e) mup_progress_pane_ParamLimits

0xa1e1,	// (0x0006733e) mup_progress_pane

0xc5ff,	// (0x0006975c) mup_visualizer_pane_ParamLimits

0xc5ff,	// (0x0006975c) mup_visualizer_pane

0xc5ff,	// (0x0006975c) mup_volume_pane_ParamLimits

0xc5ff,	// (0x0006975c) mup_volume_pane

0xa6b6,	// (0x00067813) mup_visualizer_pane_g1_ParamLimits

0xa6b6,	// (0x00067813) mup_visualizer_pane_g1

0xb38e,	// (0x000684eb) mup_visualizer_pane_g2_ParamLimits

0xb38e,	// (0x000684eb) mup_visualizer_pane_g2

0xa6a8,	// (0x00067805) mup_visualizer_pane_g3_ParamLimits

0xa6a8,	// (0x00067805) mup_visualizer_pane_g3

0x0002,

0xf396,	// (0x0006c4f3) mup_visualizer_pane_g_ParamLimits

0xf396,	// (0x0006c4f3) mup_visualizer_pane_g

0xa971,	// (0x00067ace) mup_volume_pane_g1

0xa971,	// (0x00067ace) mup_volume_pane_g2

0x0001,

0xf39d,	// (0x0006c4fa) mup_volume_pane_g

0xa971,	// (0x00067ace) mup_progress_pane_g1

0xa971,	// (0x00067ace) mup_progress_pane_g2

0xa971,	// (0x00067ace) mup_progress_pane_g3

0x0002,

0xf3a2,	// (0x0006c4ff) mup_progress_pane_g

0x9fda,	// (0x00067137) bg_popup_window_pane_cp05

0xb39c,	// (0x000684f9) heading_pane_cp02_ParamLimits

0xb39c,	// (0x000684f9) heading_pane_cp02

0xb3b8,	// (0x00068515) list_popup_blid_pane

0xb3c0,	// (0x0006851d) list_blid_sat_info_pane_ParamLimits

0xb3c0,	// (0x0006851d) list_blid_sat_info_pane

0xb3d3,	// (0x00068530) list_blid_sat_info_pane_g1

0xb3db,	// (0x00068538) list_blid_sat_info_pane_t1

0x32a8,	// (0x00060405) mup_equalizer_pane_ParamLimits

0x32a8,	// (0x00060405) mup_equalizer_pane

0x32c9,	// (0x00060426) mup_equalizer_pane_cp1_ParamLimits

0x32c9,	// (0x00060426) mup_equalizer_pane_cp1

0x32ea,	// (0x00060447) mup_equalizer_pane_cp2_ParamLimits

0x32ea,	// (0x00060447) mup_equalizer_pane_cp2

0x330b,	// (0x00060468) mup_equalizer_pane_cp3_ParamLimits

0x330b,	// (0x00060468) mup_equalizer_pane_cp3

0x3330,	// (0x0006048d) mup_equalizer_pane_cp4_ParamLimits

0x3330,	// (0x0006048d) mup_equalizer_pane_cp4

0x3355,	// (0x000604b2) mup_equalizer_pane_cp5

0x336d,	// (0x000604ca) mup_equalizer_pane_cp6

0x3385,	// (0x000604e2) mup_equalizer_pane_cp7

0xc56c,	// (0x000696c9) bg_popup_call_poc_act_pane_g9

0xc574,	// (0x000696d1) bg_popup_call_poc_act_pane_g10

0xc57c,	// (0x000696d9) bg_popup_call_poc_act_pane_g11

0x000a,

0xa62d,	// (0x0006778a) mup_scale_pane

0xa645,	// (0x000677a2) mup_scale_pane_g1

0xb3e9,	// (0x00068546) mup_scale_pane_g2

0x0006,

0xf3be,	// (0x0006c51b) mup_scale_pane_g

0xb40d,	// (0x0006856a) msg_data_pane

0xb415,	// (0x00068572) scroll_pane_cp017

0x33af,	// (0x0006050c) bg_list_pane_cp04_ParamLimits

0x33af,	// (0x0006050c) bg_list_pane_cp04

0xb41d,	// (0x0006857a) msg_data_pane_g1

0x33cf,	// (0x0006052c) msg_data_pane_g2

0x33d9,	// (0x00060536) msg_data_pane_g3

0x33e3,	// (0x00060540) msg_data_pane_g4

0x33eb,	// (0x00060548) msg_data_pane_g5

0x33f3,	// (0x00060550) msg_data_pane_g6

0x33fb,	// (0x00060558) msg_data_pane_g7

0x0006,

0xf3cd,	// (0x0006c52a) msg_data_pane_g

0x3403,	// (0x00060560) msg_text_pane_ParamLimits

0x3403,	// (0x00060560) msg_text_pane

0x3432,	// (0x0006058f) qrid_highlight_pane_cp011_ParamLimits

0x3432,	// (0x0006058f) qrid_highlight_pane_cp011

0x9fda,	// (0x00067137) msg_body_pane

0x9fda,	// (0x00067137) msg_header_pane

0xb42e,	// (0x0006858b) input_focus_pane_cp07

0xa86b,	// (0x000679c8) msg_header_pane_t1_ParamLimits

0xa86b,	// (0x000679c8) msg_header_pane_t1

0xa1f7,	// (0x00067354) msg_header_pane_t2_ParamLimits

0xa1f7,	// (0x00067354) msg_header_pane_t2

0x0001,

0xf3e1,	// (0x0006c53e) msg_header_pane_t_ParamLimits

0xf3e1,	// (0x0006c53e) msg_header_pane_t

0xb443,	// (0x000685a0) msg_body_pane_g1

0xa20e,	// (0x0006736b) msg_body_pane_t1_ParamLimits

0xa20e,	// (0x0006736b) msg_body_pane_t1

0xa23f,	// (0x0006739c) msg_body_pane_t2_ParamLimits

0xa23f,	// (0x0006739c) msg_body_pane_t2

0xa251,	// (0x000673ae) msg_body_pane_t3_ParamLimits

0xa251,	// (0x000673ae) msg_body_pane_t3

0x0002,

0xf3e6,	// (0x0006c543) msg_body_pane_t_ParamLimits

0xf3e6,	// (0x0006c543) msg_body_pane_t

0x34a8,	// (0x00060605) main_viewer_pane_g1_ParamLimits

0x34a8,	// (0x00060605) main_viewer_pane_g1

0x34b4,	// (0x00060611) main_viewer_pane_g2_ParamLimits

0x34b4,	// (0x00060611) main_viewer_pane_g2

0x34c0,	// (0x0006061d) main_viewer_pane_g3_ParamLimits

0x34c0,	// (0x0006061d) main_viewer_pane_g3

0x34d1,	// (0x0006062e) main_viewer_pane_g4_ParamLimits

0x34d1,	// (0x0006062e) main_viewer_pane_g4

0x34e2,	// (0x0006063f) main_viewer_pane_g5_ParamLimits

0x34e2,	// (0x0006063f) main_viewer_pane_g5

0x34e2,	// (0x0006063f) main_viewer_pane_g7_ParamLimits

0x34e2,	// (0x0006063f) main_viewer_pane_g7

0x34f4,	// (0x00060651) main_viewer_pane_g8_ParamLimits

0x34f4,	// (0x00060651) main_viewer_pane_g8

0x0007,

0xf3f6,	// (0x0006c553) main_viewer_pane_g_ParamLimits

0xf3f6,	// (0x0006c553) main_viewer_pane_g

0xb44b,	// (0x000685a8) viewer_content_pane_ParamLimits

0xb44b,	// (0x000685a8) viewer_content_pane

0x352c,	// (0x00060689) main_postcard_pane_g1_ParamLimits

0x352c,	// (0x00060689) main_postcard_pane_g1

0x353a,	// (0x00060697) main_postcard_pane_g2_ParamLimits

0x353a,	// (0x00060697) main_postcard_pane_g2

0x3548,	// (0x000606a5) main_postcard_pane_g3_ParamLimits

0x3548,	// (0x000606a5) main_postcard_pane_g3

0x0005,

0xf407,	// (0x0006c564) main_postcard_pane_g_ParamLimits

0xf407,	// (0x0006c564) main_postcard_pane_g

0x3558,	// (0x000606b5) main_postcard_pane_g4

0xc6c0,	// (0x0006981d) smil_status_volume_pane_g2

0x3584,	// (0x000606e1) postcard_pane_ParamLimits

0x3584,	// (0x000606e1) postcard_pane

0xb907,	// (0x00068a64) postcard_pane_g1_ParamLimits

0xb907,	// (0x00068a64) postcard_pane_g1

0x35be,	// (0x0006071b) postcard_pane_g2_ParamLimits

0x35be,	// (0x0006071b) postcard_pane_g2

0x35ca,	// (0x00060727) postcard_pane_g3_ParamLimits

0x35ca,	// (0x00060727) postcard_pane_g3

0xb459,	// (0x000685b6) postcard_pane_g4_ParamLimits

0xb459,	// (0x000685b6) postcard_pane_g4

0x35d6,	// (0x00060733) postcard_pane_g5_ParamLimits

0x35d6,	// (0x00060733) postcard_pane_g5

0x35e2,	// (0x0006073f) postcard_pane_g6_ParamLimits

0x35e2,	// (0x0006073f) postcard_pane_g6

0xb467,	// (0x000685c4) postcard_pane_g7_ParamLimits

0xb467,	// (0x000685c4) postcard_pane_g7

0x0006,

0xf414,	// (0x0006c571) postcard_pane_g_ParamLimits

0xf414,	// (0x0006c571) postcard_pane_g

0x35f0,	// (0x0006074d) main_mp2_pane_g1_ParamLimits

0x35f0,	// (0x0006074d) main_mp2_pane_g1

0x35fe,	// (0x0006075b) main_mp2_pane_g2_ParamLimits

0x35fe,	// (0x0006075b) main_mp2_pane_g2

0x360a,	// (0x00060767) main_mp2_pane_g3_ParamLimits

0x360a,	// (0x00060767) main_mp2_pane_g3

0x0002,

0xf423,	// (0x0006c580) main_mp2_pane_g_ParamLimits

0xf423,	// (0x0006c580) main_mp2_pane_g

0x3616,	// (0x00060773) main_mp2_pane_t1_ParamLimits

0x3616,	// (0x00060773) main_mp2_pane_t1

0x362d,	// (0x0006078a) main_mp2_pane_t2_ParamLimits

0x362d,	// (0x0006078a) main_mp2_pane_t2

0x3641,	// (0x0006079e) main_mp2_pane_t3_ParamLimits

0x3641,	// (0x0006079e) main_mp2_pane_t3

0x0002,

0xf42a,	// (0x0006c587) main_mp2_pane_t_ParamLimits

0xf42a,	// (0x0006c587) main_mp2_pane_t

0xb475,	// (0x000685d2) pec_content_pane_ParamLimits

0xb475,	// (0x000685d2) pec_content_pane

0xaaf9,	// (0x00067c56) scroll_pane_cp015

0xb487,	// (0x000685e4) pec_attribute_pane_ParamLimits

0xb487,	// (0x000685e4) pec_attribute_pane

0x3653,	// (0x000607b0) pec_content_pane_g1_ParamLimits

0x3653,	// (0x000607b0) pec_content_pane_g1

0xb497,	// (0x000685f4) pec_content_pane_t1_ParamLimits

0xb497,	// (0x000685f4) pec_content_pane_t1

0xb4a9,	// (0x00068606) pec_content_pane_t2_ParamLimits

0xb4a9,	// (0x00068606) pec_content_pane_t2

0x0001,

0xf431,	// (0x0006c58e) pec_content_pane_t_ParamLimits

0xf431,	// (0x0006c58e) pec_content_pane_t

0x365f,	// (0x000607bc) list_single_graphic_pane_cp01_ParamLimits

0x365f,	// (0x000607bc) list_single_graphic_pane_cp01

0xa62d,	// (0x0006778a) bg_popup_sub_pane_cp04

0xb4bb,	// (0x00068618) popup_mup_playback_window_g1

0xb4c7,	// (0x00068624) popup_mup_playback_window_t1

0xb4dc,	// (0x00068639) popup_mup_playback_window_t2

0x0001,

0xf436,	// (0x0006c593) popup_mup_playback_window_t

0xb513,	// (0x00068670) main_image_pane_g1_ParamLimits

0xb513,	// (0x00068670) main_image_pane_g1

0xb556,	// (0x000686b3) scroll_pane_cp018_ParamLimits

0xb556,	// (0x000686b3) scroll_pane_cp018

0xb56e,	// (0x000686cb) scroll_pane_cp016_ParamLimits

0xb56e,	// (0x000686cb) scroll_pane_cp016

0x36ed,	// (0x0006084a) smil2_image_pane_ParamLimits

0x36ed,	// (0x0006084a) smil2_image_pane

0x3723,	// (0x00060880) smil2_root_pane_ParamLimits

0x3723,	// (0x00060880) smil2_root_pane

0x374f,	// (0x000608ac) smil2_text_pane_ParamLimits

0x374f,	// (0x000608ac) smil2_text_pane

0x9fda,	// (0x00067137) bg_list_pane_cp06

0xb5da,	// (0x00068737) grid_radio_pane

0x9fda,	// (0x00067137) bg_popup_window_pane_cp06

0xb5e4,	// (0x00068741) main_fmradio_pane_t1

0xc584,	// (0x000696e1) heading_pane_cp04

0xb5f2,	// (0x0006874f) main_fmradio_pane_t2

0xc58c,	// (0x000696e9) popup_cale_lunar_info_window_g1

0xb600,	// (0x0006875d) main_fmradio_pane_t3

0xc594,	// (0x000696f1) popup_cale_lunar_info_window_g2

0xb610,	// (0x0006876d) main_fmradio_pane_t4

0x0001,

0xb61e,	// (0x0006877b) main_fmradio_pane_t5

0x0004,

0x01aa,	// (0x0005d307) popup_cale_lunar_info_window_g

0x00df,	// (0x0005d23c) main_fmradio_pane_t

0xb62c,	// (0x00068789) wait_bar_pane_cp03

0xb634,	// (0x00068791) cell_fmradio_pane_ParamLimits

0xb634,	// (0x00068791) cell_fmradio_pane

0xb467,	// (0x000685c4) cell_fmradio_pane_g1_ParamLimits

0xb467,	// (0x000685c4) cell_fmradio_pane_g1

0x9fda,	// (0x00067137) grid_highlight_pane_cp011

0xb649,	// (0x000687a6) poc_content_pane_ParamLimits

0xb649,	// (0x000687a6) poc_content_pane

0xb65b,	// (0x000687b8) scroll_pane_cp019

0x378f,	// (0x000608ec) popup_call_poc_act_window_ParamLimits

0x378f,	// (0x000608ec) popup_call_poc_act_window

0x379c,	// (0x000608f9) popup_call_poc_inact_window_ParamLimits

0x379c,	// (0x000608f9) popup_call_poc_inact_window

0x0181,	// (0x0005d2de) bg_popup_call_poc_act_pane_g

0xc4fc,	// (0x00069659) bg_popup_call_poc_inact_pane_g1

0xc504,	// (0x00069661) bg_popup_call_poc_inact_pane_g2

0xb663,	// (0x000687c0) popup_call_poc_act_window_g2

0xc50c,	// (0x00069669) bg_popup_call_poc_inact_pane_g3

0xc514,	// (0x00069671) bg_popup_call_poc_inact_pane_g4

0xc51c,	// (0x00069679) bg_popup_call_poc_inact_pane_g5

0xb66b,	// (0x000687c8) popup_call_poc_act_window_t1_ParamLimits

0xb66b,	// (0x000687c8) popup_call_poc_act_window_t1

0xb693,	// (0x000687f0) popup_call_poc_act_window_t2_ParamLimits

0xb693,	// (0x000687f0) popup_call_poc_act_window_t2

0xb6bb,	// (0x00068818) popup_call_poc_act_window_t3_ParamLimits

0xb6bb,	// (0x00068818) popup_call_poc_act_window_t3

0xb6e3,	// (0x00068840) popup_call_poc_act_window_t4_ParamLimits

0xb6e3,	// (0x00068840) popup_call_poc_act_window_t4

0x0003,

0x00ea,	// (0x0005d247) popup_call_poc_act_window_t_ParamLimits

0x00ea,	// (0x0005d247) popup_call_poc_act_window_t

0xc524,	// (0x00069681) bg_popup_call_poc_inact_pane_g6

0xc52c,	// (0x00069689) bg_popup_call_poc_inact_pane_g7

0xc534,	// (0x00069691) bg_popup_call_poc_inact_pane_g8

0xb6f5,	// (0x00068852) popup_call_poc_inact_window_g2

0xc53c,	// (0x00069699) bg_popup_call_poc_inact_pane_g9

0x0008,

0x016e,	// (0x0005d2cb) bg_popup_call_poc_inact_pane_g

0xb6fd,	// (0x0006885a) popup_call_poc_inact_window_t1_ParamLimits

0xb6fd,	// (0x0006885a) popup_call_poc_inact_window_t1

0xb712,	// (0x0006886f) popup_call_poc_inact_window_t2_ParamLimits

0xb712,	// (0x0006886f) popup_call_poc_inact_window_t2

0xb727,	// (0x00068884) popup_call_poc_inact_window_t3_ParamLimits

0xb727,	// (0x00068884) popup_call_poc_inact_window_t3

0x0002,

0x00f3,	// (0x0005d250) popup_call_poc_inact_window_t_ParamLimits

0x00f3,	// (0x0005d250) popup_call_poc_inact_window_t

0xc638,	// (0x00069795) context_pane_ParamLimits

0x3e59,	// (0x00060fb6) signal_pane_ParamLimits

0xa94f,	// (0x00067aac) main_call2_pane

0x3dc5,	// (0x00060f22) popup_phob_thumbnail2_window_ParamLimits

0x3dc5,	// (0x00060f22) popup_phob_thumbnail2_window

0x3456,	// (0x000605b3) aid_hotspot_pointer_arrow_pane

0x345e,	// (0x000605bb) aid_hotspot_pointer_hand_pane

0x3ae4,	// (0x00060c41) phob_pre_status_pane_g5

0xa69a,	// (0x000677f7) cams_zoom_pane_ParamLimits

0xa69a,	// (0x000677f7) image_vga_pane_ParamLimits

0xa6b6,	// (0x00067813) main_camera_pane_g1_ParamLimits

0xa6b6,	// (0x00067813) main_camera_pane_g2_ParamLimits

0xa6b6,	// (0x00067813) main_camera_pane_g3_ParamLimits

0xa6b6,	// (0x00067813) main_camera_pane_g4_ParamLimits

0xa6b6,	// (0x00067813) main_camera_pane_g5_ParamLimits

0xa6b6,	// (0x00067813) main_camera_pane_g6_ParamLimits

0xa6b6,	// (0x00067813) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0006c2e2) main_camera_pane_g_ParamLimits

0xb285,	// (0x000683e2) main_camera_pane_t1_ParamLimits

0xb285,	// (0x000683e2) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0006c2f3) main_camera_pane_t_ParamLimits

0xa62d,	// (0x0006778a) bg_popup_preview_window_pane_cp01_ParamLimits

0xa62d,	// (0x0006778a) bg_popup_preview_window_pane_cp01

0xb73c,	// (0x00068899) popup_phob_thumbnail2_window_g1_ParamLimits

0xb73c,	// (0x00068899) popup_phob_thumbnail2_window_g1

0x9fda,	// (0x00067137) call2_cli_visual_pane

0x37b8,	// (0x00060915) popup_call2_audio_conf_window_ParamLimits

0x37b8,	// (0x00060915) popup_call2_audio_conf_window

0x37d1,	// (0x0006092e) popup_call2_audio_first_window_ParamLimits

0x37d1,	// (0x0006092e) popup_call2_audio_first_window

0x386f,	// (0x000609cc) popup_call2_audio_in_window_ParamLimits

0x386f,	// (0x000609cc) popup_call2_audio_in_window

0x38b3,	// (0x00060a10) popup_call2_audio_out_window_ParamLimits

0x38b3,	// (0x00060a10) popup_call2_audio_out_window

0x391d,	// (0x00060a7a) popup_call2_audio_second_window_ParamLimits

0x391d,	// (0x00060a7a) popup_call2_audio_second_window

0x397b,	// (0x00060ad8) popup_call2_audio_wait_window_ParamLimits

0x397b,	// (0x00060ad8) popup_call2_audio_wait_window

0x9fda,	// (0x00067137) bg_popup_call2_act_pane_cp03

0xa60f,	// (0x0006776c) list_conf_pane_cp

0xb748,	// (0x000688a5) popup_call2_audio_conf_window_t1

0xb756,	// (0x000688b3) list_single_graphic_popup_conf2_pane_ParamLimits

0xb756,	// (0x000688b3) list_single_graphic_popup_conf2_pane

0xb0e4,	// (0x00068241) list_highlight_pane_cp04

0xb769,	// (0x000688c6) list_single_graphic_popup_conf2_pane_g1

0xb0f5,	// (0x00068252) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x00fa,	// (0x0005d257) list_single_graphic_popup_conf2_pane_g

0xb773,	// (0x000688d0) list_single_graphic_popup_conf2_pane_t1

0xb781,	// (0x000688de) bg_popup_call2_act_pane_cp01_ParamLimits

0xb781,	// (0x000688de) bg_popup_call2_act_pane_cp01

0xb80b,	// (0x00068968) call_type_pane_cp05_ParamLimits

0xb80b,	// (0x00068968) call_type_pane_cp05

0xb85f,	// (0x000689bc) popup_call2_audio_second_window_g1_ParamLimits

0xb85f,	// (0x000689bc) popup_call2_audio_second_window_g1

0xb8b3,	// (0x00068a10) popup_call2_audio_second_window_g2_ParamLimits

0xb8b3,	// (0x00068a10) popup_call2_audio_second_window_g2

0x0002,

0xf44b,	// (0x0006c5a8) popup_call2_audio_second_window_g_ParamLimits

0xf44b,	// (0x0006c5a8) popup_call2_audio_second_window_g

0xb926,	// (0x00068a83) popup_call2_audio_second_window_t1_ParamLimits

0xb926,	// (0x00068a83) popup_call2_audio_second_window_t1

0xb9e1,	// (0x00068b3e) popup_call2_audio_second_window_t2_ParamLimits

0xb9e1,	// (0x00068b3e) popup_call2_audio_second_window_t2

0xba34,	// (0x00068b91) popup_call2_audio_second_window_t3_ParamLimits

0xba34,	// (0x00068b91) popup_call2_audio_second_window_t3

0x0003,

0xf452,	// (0x0006c5af) popup_call2_audio_second_window_t_ParamLimits

0xf452,	// (0x0006c5af) popup_call2_audio_second_window_t

0x9fda,	// (0x00067137) bg_popup_call2_in_pane_cp02

0x9fe4,	// (0x00067141) call_type_pane_cp04

0x39ba,	// (0x00060b17) popup_call2_audio_wait_window_g1

0x39c2,	// (0x00060b1f) popup_call2_audio_wait_window_g2

0x0001,

0xf45b,	// (0x0006c5b8) popup_call2_audio_wait_window_g

0x9ffc,	// (0x00067159) popup_call2_audio_wait_window_t3

0xbb27,	// (0x00068c84) bg_popup_call2_act_pane_ParamLimits

0xbb27,	// (0x00068c84) bg_popup_call2_act_pane

0xbbe7,	// (0x00068d44) call_type_pane_cp03_ParamLimits

0xbbe7,	// (0x00068d44) call_type_pane_cp03

0xbc4b,	// (0x00068da8) popup_call2_audio_first_window_g1_ParamLimits

0xbc4b,	// (0x00068da8) popup_call2_audio_first_window_g1

0xbcbb,	// (0x00068e18) popup_call2_audio_first_window_g2_ParamLimits

0xbcbb,	// (0x00068e18) popup_call2_audio_first_window_g2

0xb907,	// (0x00068a64) popup_call2_audio_first_window_g3_ParamLimits

0xb907,	// (0x00068a64) popup_call2_audio_first_window_g3

0x0004,

0xf460,	// (0x0006c5bd) popup_call2_audio_first_window_g_ParamLimits

0xf460,	// (0x0006c5bd) popup_call2_audio_first_window_g

0xbd99,	// (0x00068ef6) popup_call2_audio_first_window_t1_ParamLimits

0xbd99,	// (0x00068ef6) popup_call2_audio_first_window_t1

0xbe9c,	// (0x00068ff9) popup_call2_audio_first_window_t4_ParamLimits

0xbe9c,	// (0x00068ff9) popup_call2_audio_first_window_t4

0xbf7f,	// (0x000690dc) popup_call2_audio_first_window_t5_ParamLimits

0xbf7f,	// (0x000690dc) popup_call2_audio_first_window_t5

0x0003,

0x011f,	// (0x0005d27c) popup_call2_audio_first_window_t_ParamLimits

0x011f,	// (0x0005d27c) popup_call2_audio_first_window_t

0xa625,	// (0x00067782) bg_popup_call2_act_pane_g1

0xc59e,	// (0x000696fb) popup_cale_lunar_info_window_t1

0xc5ac,	// (0x00069709) popup_cale_lunar_info_window_t2

0xc5ba,	// (0x00069717) popup_cale_lunar_info_window_t3

0x9fda,	// (0x00067137) bg_popup_call2_bubble_pane

0xc080,	// (0x000691dd) bg_popup_call2_in_pane_cp01_ParamLimits

0xc080,	// (0x000691dd) bg_popup_call2_in_pane_cp01

0x9cb6,	// (0x00066e13) call_type_pane_cp02

0x39ca,	// (0x00060b27) popup_call2_audio_out_window_g1_ParamLimits

0x39ca,	// (0x00060b27) popup_call2_audio_out_window_g1

0xc0c8,	// (0x00069225) popup_call2_audio_out_window_g2_ParamLimits

0xc0c8,	// (0x00069225) popup_call2_audio_out_window_g2

0x39f6,	// (0x00060b53) popup_call2_audio_out_window_g3_ParamLimits

0x39f6,	// (0x00060b53) popup_call2_audio_out_window_g3

0x0003,

0xf46b,	// (0x0006c5c8) popup_call2_audio_out_window_g_ParamLimits

0xf46b,	// (0x0006c5c8) popup_call2_audio_out_window_g

0xc0ff,	// (0x0006925c) popup_call2_audio_out_window_t1_ParamLimits

0xc0ff,	// (0x0006925c) popup_call2_audio_out_window_t1

0xc15e,	// (0x000692bb) popup_call2_audio_out_window_t2_ParamLimits

0xc15e,	// (0x000692bb) popup_call2_audio_out_window_t2

0xc1b2,	// (0x0006930f) popup_call2_audio_out_window_t3_ParamLimits

0xc1b2,	// (0x0006930f) popup_call2_audio_out_window_t3

0xc1c8,	// (0x00069325) popup_call2_audio_out_window_t4_ParamLimits

0xc1c8,	// (0x00069325) popup_call2_audio_out_window_t4

0xc1de,	// (0x0006933b) popup_call2_audio_out_window_t5_ParamLimits

0xc1de,	// (0x0006933b) popup_call2_audio_out_window_t5

0x0005,

0x0131,	// (0x0005d28e) popup_call2_audio_out_window_t_ParamLimits

0x0131,	// (0x0005d28e) popup_call2_audio_out_window_t

0xc242,	// (0x0006939f) bg_popup_call2_in_pane_ParamLimits

0xc242,	// (0x0006939f) bg_popup_call2_in_pane

0xc29e,	// (0x000693fb) popup_call2_audio_in_window_g1_ParamLimits

0xc29e,	// (0x000693fb) popup_call2_audio_in_window_g1

0xc2d6,	// (0x00069433) popup_call2_audio_in_window_g2_ParamLimits

0xc2d6,	// (0x00069433) popup_call2_audio_in_window_g2

0xc30e,	// (0x0006946b) popup_call2_audio_in_window_g3_ParamLimits

0xc30e,	// (0x0006946b) popup_call2_audio_in_window_g3

0x0003,

0x013e,	// (0x0005d29b) popup_call2_audio_in_window_g_ParamLimits

0x013e,	// (0x0005d29b) popup_call2_audio_in_window_g

0xc366,	// (0x000694c3) popup_call2_audio_in_window_t1_ParamLimits

0xc366,	// (0x000694c3) popup_call2_audio_in_window_t1

0xc3e6,	// (0x00069543) popup_call2_audio_in_window_t2_ParamLimits

0xc3e6,	// (0x00069543) popup_call2_audio_in_window_t2

0xc466,	// (0x000695c3) popup_call2_audio_in_window_t3_ParamLimits

0xc466,	// (0x000695c3) popup_call2_audio_in_window_t3

0xc480,	// (0x000695dd) popup_call2_audio_in_window_t4_ParamLimits

0xc480,	// (0x000695dd) popup_call2_audio_in_window_t4

0xc492,	// (0x000695ef) popup_call2_audio_in_window_t5_ParamLimits

0xc492,	// (0x000695ef) popup_call2_audio_in_window_t5

0xc4a7,	// (0x00069604) popup_call2_audio_in_window_t6_ParamLimits

0xc4a7,	// (0x00069604) popup_call2_audio_in_window_t6

0x0005,

0x0147,	// (0x0005d2a4) popup_call2_audio_in_window_t_ParamLimits

0x0147,	// (0x0005d2a4) popup_call2_audio_in_window_t

0xa625,	// (0x00067782) bg_popup_call2_in_pane_g1

0xc5c8,	// (0x00069725) popup_cale_lunar_info_window_t4

0x0003,

0x01af,	// (0x0005d30c) popup_cale_lunar_info_window_t

0xa62d,	// (0x0006778a) bg_popup_call2_rect_pane_ParamLimits

0xa62d,	// (0x0006778a) bg_popup_call2_rect_pane

0x9fda,	// (0x00067137) call2_cli_visual_graphic_pane

0x9fda,	// (0x00067137) call2_cli_visual_text_pane

0x3e94,	// (0x00060ff1) smil_status_volume_pane_g3

0x0002,

0xa645,	// (0x000677a2) call2_cli_visual_graphic_pane_g1

0xa645,	// (0x000677a2) call2_cli_visual_graphic_pane_g2

0xa645,	// (0x000677a2) call2_cli_visual_graphic_pane_g3

0x0002,

0xf474,	// (0x0006c5d1) call2_cli_visual_graphic_pane_g

0xc4bc,	// (0x00069619) bg_popup_call2_rect_pane_g1

0xa7f1,	// (0x0006794e) bg_popup_call2_rect_pane_g2

0xc4c4,	// (0x00069621) bg_popup_call2_rect_pane_g3

0xc4cc,	// (0x00069629) bg_popup_call2_rect_pane_g4

0xc4d4,	// (0x00069631) bg_popup_call2_rect_pane_g5

0xc4dc,	// (0x00069639) bg_popup_call2_rect_pane_g6

0xc4e4,	// (0x00069641) bg_popup_call2_rect_pane_g7

0xc4ec,	// (0x00069649) bg_popup_call2_rect_pane_g8

0xc4f4,	// (0x00069651) bg_popup_call2_rect_pane_g9

0x0008,

0xf47b,	// (0x0006c5d8) bg_popup_call2_rect_pane_g

0xc4fc,	// (0x00069659) bg_popup_call2_bubble_pane_g1

0xc504,	// (0x00069661) bg_popup_call2_bubble_pane_g2

0xc50c,	// (0x00069669) bg_popup_call2_bubble_pane_g3

0xc514,	// (0x00069671) bg_popup_call2_bubble_pane_g4

0xc51c,	// (0x00069679) bg_popup_call2_bubble_pane_g5

0xc524,	// (0x00069681) bg_popup_call2_bubble_pane_g6

0xc52c,	// (0x00069689) bg_popup_call2_bubble_pane_g7

0xc534,	// (0x00069691) bg_popup_call2_bubble_pane_g8

0xc53c,	// (0x00069699) bg_popup_call2_bubble_pane_g9

0x0008,

0x016e,	// (0x0005d2cb) bg_popup_call2_bubble_pane_g

0x1349,	// (0x0005e4a6) aid_cale_week_size_cell_pane

0xa62d,	// (0x0006778a) aid_cams_cif_uncrop_pane_ParamLimits

0xa62d,	// (0x0006778a) aid_cams_cif_uncrop_pane

0x1b38,	// (0x0005ec95) aid_cams_size_cell_ParamLimits

0x1b38,	// (0x0005ec95) aid_cams_size_cell

0x1b44,	// (0x0005eca1) grid_cams_pane_ParamLimits

0x1b52,	// (0x0005ecaf) linegrid_cams_pane_ParamLimits

0x1c23,	// (0x0005ed80) call_video_pane_t1

0x1c40,	// (0x0005ed9d) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0006c33f) call_video_pane_t

0x20fd,	// (0x0005f25a) aid_cale_month_size_cell_pane_ParamLimits

0x20fd,	// (0x0005f25a) aid_cale_month_size_cell_pane

0xf4d4,	// (0x0006c631) smil_status_volume_pane_g

0x3ea1,	// (0x00060ffe) volume_smil_pane_ParamLimits

0x0cdc,	// (0x0005de39) aid_popup2_width_pane

0x1247,	// (0x0005e3a4) cell_qdial_pane_g4_ParamLimits

0x1247,	// (0x0005e3a4) cell_qdial_pane_g4

0x2fc4,	// (0x00060121) aid_blid_cardinal_pane_ParamLimits

0x2fd4,	// (0x00060131) aid_blid_destination_pane_ParamLimits

0x2fd4,	// (0x00060131) aid_blid_destination_pane

0xa62d,	// (0x0006778a) bg_popup_call_poc_act_pane_ParamLimits

0xa62d,	// (0x0006778a) bg_popup_call_poc_act_pane

0xa62d,	// (0x0006778a) bg_popup_call_poc_inact_pane_ParamLimits

0xa62d,	// (0x0006778a) bg_popup_call_poc_inact_pane

0xc544,	// (0x000696a1) bg_popup_call_poc_act_pane_g1

0xc54c,	// (0x000696a9) bg_popup_call_poc_act_pane_g2

0xc554,	// (0x000696b1) bg_popup_call_poc_act_pane_g3

0xc514,	// (0x00069671) bg_popup_call_poc_act_pane_g4

0xc51c,	// (0x00069679) bg_popup_call_poc_act_pane_g5

0xc55c,	// (0x000696b9) bg_popup_call_poc_act_pane_g6

0xc52c,	// (0x00069689) bg_popup_call_poc_act_pane_g7

0xc564,	// (0x000696c1) bg_popup_call_poc_act_pane_g8

0x9fda,	// (0x00067137) main_usb_pane

0x3ce2,	// (0x00060e3f) popup_cale_lunar_info_window

0x1f58,	// (0x0005f0b5) im_reading_pane_t1_ParamLimits

0xaa42,	// (0x00067b9f) list_im_pane_ParamLimits

0xaa53,	// (0x00067bb0) scroll_pane_cp07_ParamLimits

0x9fda,	// (0x00067137) grid_highlight_pane_cp012

0xa62d,	// (0x0006778a) mup_scale_pane_ParamLimits

0xb907,	// (0x00068a64) main_usb_pane_g1_ParamLimits

0xb907,	// (0x00068a64) main_usb_pane_g1

0x3a4c,	// (0x00060ba9) main_usb_pane_g2_ParamLimits

0x3a4c,	// (0x00060ba9) main_usb_pane_g2

0x0001,

0xf48e,	// (0x0006c5eb) main_usb_pane_g_ParamLimits

0xf48e,	// (0x0006c5eb) main_usb_pane_g

0x3a58,	// (0x00060bb5) main_usb_pane_t1_ParamLimits

0x3a58,	// (0x00060bb5) main_usb_pane_t1

0x3a6a,	// (0x00060bc7) main_usb_pane_t2_ParamLimits

0x3a6a,	// (0x00060bc7) main_usb_pane_t2

0x3a7c,	// (0x00060bd9) main_usb_pane_t3_ParamLimits

0x3a7c,	// (0x00060bd9) main_usb_pane_t3

0x3a8e,	// (0x00060beb) main_usb_pane_t4_ParamLimits

0x3a8e,	// (0x00060beb) main_usb_pane_t4

0x3aa0,	// (0x00060bfd) main_usb_pane_t5_ParamLimits

0x3aa0,	// (0x00060bfd) main_usb_pane_t5

0x3ab2,	// (0x00060c0f) main_usb_pane_t6_ParamLimits

0x3ab2,	// (0x00060c0f) main_usb_pane_t6

0x0005,

0xf493,	// (0x0006c5f0) main_usb_pane_t_ParamLimits

0x2f63,	// (0x000600c0) aid_text_placing

0x2f6e,	// (0x000600cb) main_location2_pane_t1_ParamLimits

0x2f84,	// (0x000600e1) main_location2_pane_t2_ParamLimits

0x2f9a,	// (0x000600f7) main_location2_pane_t3_ParamLimits

0x2fb0,	// (0x0006010d) main_location2_pane_t4_ParamLimits

0x2fb0,	// (0x0006010d) main_location2_pane_t4

0xf323,	// (0x0006c480) main_location2_pane_t_ParamLimits

0xa65b,	// (0x000677b8) find_pinb_pane_g2_ParamLimits

0xa65b,	// (0x000677b8) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0006c1f7) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0006c1f7) find_pinb_pane_g

0xa667,	// (0x000677c4) find_pinb_pane_t1_ParamLimits

0xa679,	// (0x000677d6) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0006c1fc) find_pinb_pane_t_ParamLimits

0x9fda,	// (0x00067137) main_call3_pane

0x26b0,	// (0x0005f80d) cale_month_day_heading_pane_t1_ParamLimits

0x2732,	// (0x0005f88f) cale_month_day_heading_pane_t2_ParamLimits

0x27ab,	// (0x0005f908) cale_month_day_heading_pane_t3_ParamLimits

0x2824,	// (0x0005f981) cale_month_day_heading_pane_t4_ParamLimits

0x289d,	// (0x0005f9fa) cale_month_day_heading_pane_t5_ParamLimits

0x291e,	// (0x0005fa7b) cale_month_day_heading_pane_t6_ParamLimits

0x29a7,	// (0x0005fb04) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0006c377) cale_month_day_heading_pane_t_ParamLimits

0xacc3,	// (0x00067e20) smil_status_volume_pane

0x35a2,	// (0x000606ff) postcard_address_pane_ParamLimits

0x35a2,	// (0x000606ff) postcard_address_pane

0x35b0,	// (0x0006070d) postcard_message_pane_ParamLimits

0x35b0,	// (0x0006070d) postcard_message_pane

0x3a22,	// (0x00060b7f) call2_cli_visual_pane_t1_ParamLimits

0x3a22,	// (0x00060b7f) call2_cli_visual_pane_t1

0xc6eb,	// (0x00069848) postcard_message_pane_t1_ParamLimits

0xc6eb,	// (0x00069848) postcard_message_pane_t1

0xc6d3,	// (0x00069830) postcard_address_pane_t1_ParamLimits

0xc6d3,	// (0x00069830) postcard_address_pane_t1

0x3fd8,	// (0x00061135) popup_call3_audio_in_window_ParamLimits

0x3fd8,	// (0x00061135) popup_call3_audio_in_window

0x3eb6,	// (0x00061013) bg_popup_call3_in_pane_ParamLimits

0x3eb6,	// (0x00061013) bg_popup_call3_in_pane

0x3f1e,	// (0x0006107b) popup_call3_audio_in_window_g1_ParamLimits

0x3f1e,	// (0x0006107b) popup_call3_audio_in_window_g1

0x3f36,	// (0x00061093) popup_call3_audio_in_window_g2_ParamLimits

0x3f36,	// (0x00061093) popup_call3_audio_in_window_g2

0x3f4e,	// (0x000610ab) popup_call3_audio_in_window_g3_ParamLimits

0x3f4e,	// (0x000610ab) popup_call3_audio_in_window_g3

0x0003,

0xf4db,	// (0x0006c638) popup_call3_audio_in_window_g_ParamLimits

0xf4db,	// (0x0006c638) popup_call3_audio_in_window_g

0x3f76,	// (0x000610d3) popup_call3_audio_in_window_t1_ParamLimits

0x3f76,	// (0x000610d3) popup_call3_audio_in_window_t1

0x3f9e,	// (0x000610fb) popup_call3_audio_in_window_t2_ParamLimits

0x3f9e,	// (0x000610fb) popup_call3_audio_in_window_t2

0x3fc6,	// (0x00061123) popup_call3_audio_in_window_t3_ParamLimits

0x3fc6,	// (0x00061123) popup_call3_audio_in_window_t3

0x0002,

0xf4e4,	// (0x0006c641) popup_call3_audio_in_window_t_ParamLimits

0xf4e4,	// (0x0006c641) popup_call3_audio_in_window_t

0xa94f,	// (0x00067aac) bg_popup_call3_rect_pane

0xc4bc,	// (0x00069619) bg_popup_call3_rect_pane_g1

0xa7f1,	// (0x0006794e) bg_popup_call3_rect_pane_g2

0xc4c4,	// (0x00069621) bg_popup_call3_rect_pane_g3

0xc4cc,	// (0x00069629) bg_popup_call3_rect_pane_g4

0xc4d4,	// (0x00069631) bg_popup_call3_rect_pane_g5

0xc4dc,	// (0x00069639) bg_popup_call3_rect_pane_g6

0xc4e4,	// (0x00069641) bg_popup_call3_rect_pane_g7

0x9b88,	// (0x00066ce5) mup_visualizer_osc_pane

0x9b88,	// (0x00066ce5) mup_visualizer_spec_pane

0x3ed6,	// (0x00061033) call3_video_qcif_pane_ParamLimits

0x3ed6,	// (0x00061033) call3_video_qcif_pane

0x3ee8,	// (0x00061045) call3_video_qcif_uncrop_pane_ParamLimits

0x3ee8,	// (0x00061045) call3_video_qcif_uncrop_pane

0x3ef8,	// (0x00061055) call3_video_subqcif_pane_ParamLimits

0x3ef8,	// (0x00061055) call3_video_subqcif_pane

0x3f0c,	// (0x00061069) call3_video_subqcif_uncrop_pane_ParamLimits

0x3f0c,	// (0x00061069) call3_video_subqcif_uncrop_pane

0x3f66,	// (0x000610c3) popup_call3_audio_in_window_g4_ParamLimits

0x3f66,	// (0x000610c3) popup_call3_audio_in_window_g4

0x9b88,	// (0x00066ce5) mup_spec_half_pane

0x9b88,	// (0x00066ce5) mup_spec_half_pane_cp

0x9b88,	// (0x00066ce5) mup_osc_middle_pane

0xa971,	// (0x00067ace) mup_visualizer_osc_pane_g1

0xc686,	// (0x000697e3) mup_spec_bar_pane_ParamLimits

0xc686,	// (0x000697e3) mup_spec_bar_pane

0xa971,	// (0x00067ace) mup_spec_bar_pane_g1

0xa971,	// (0x00067ace) mup_spec_bar_pane_g2

0x0001,

0xf39d,	// (0x0006c4fa) mup_spec_bar_pane_g

0x1349,	// (0x0005e4a6) aid_cale_week_size_cell_pane_ParamLimits

0x1363,	// (0x0005e4c0) bg_cale_heading_pane_ParamLimits

0x138c,	// (0x0005e4e9) bg_cale_pane_cp01_ParamLimits

0x13ae,	// (0x0005e50b) cale_week_corner_pane_ParamLimits

0x13cd,	// (0x0005e52a) cale_week_day_heading_pane_ParamLimits

0x13fb,	// (0x0005e558) cale_week_scroll_pane_g1_ParamLimits

0x141f,	// (0x0005e57c) cale_week_scroll_pane_g2_ParamLimits

0x1437,	// (0x0005e594) cale_week_scroll_pane_g3_ParamLimits

0x144f,	// (0x0005e5ac) cale_week_scroll_pane_g4_ParamLimits

0x1467,	// (0x0005e5c4) cale_week_scroll_pane_g5_ParamLimits

0x147f,	// (0x0005e5dc) cale_week_scroll_pane_g6_ParamLimits

0x149f,	// (0x0005e5fc) cale_week_scroll_pane_g7_ParamLimits

0x14bf,	// (0x0005e61c) cale_week_scroll_pane_g8_ParamLimits

0x14df,	// (0x0005e63c) cale_week_scroll_pane_g9_ParamLimits

0x14fc,	// (0x0005e659) cale_week_scroll_pane_g10_ParamLimits

0x1519,	// (0x0005e676) cale_week_scroll_pane_g11_ParamLimits

0x1538,	// (0x0005e695) cale_week_scroll_pane_g12_ParamLimits

0x155d,	// (0x0005e6ba) cale_week_scroll_pane_g13_ParamLimits

0x1586,	// (0x0005e6e3) cale_week_scroll_pane_g14_ParamLimits

0x15af,	// (0x0005e70c) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0006c288) cale_week_scroll_pane_g_ParamLimits

0x15f8,	// (0x0005e755) cale_week_time_pane_ParamLimits

0x1618,	// (0x0005e775) grid_cale_week_pane_ParamLimits

0xa82e,	// (0x0006798b) listscroll_cale_week_pane_t1

0xa840,	// (0x0006799d) scroll_pane_cp08_ParamLimits

0x2175,	// (0x0005f2d2) cale_month_corner_pane_ParamLimits

0xac99,	// (0x00067df6) cale_month_pane_t1

0x2637,	// (0x0005f794) cale_month_week_pane_ParamLimits

0xb907,	// (0x00068a64) popup_call_status_window_g1_ParamLimits

0x2d92,	// (0x0005feef) popup_call_status_window_g2_ParamLimits

0x2d9e,	// (0x0005fefb) popup_call_status_window_g3_ParamLimits

0xf2aa,	// (0x0006c407) popup_call_status_window_g_ParamLimits

0xb071,	// (0x000681ce) aid_call2_pane

0x3448,	// (0x000605a5) msg_header_pane_g1

0x35a2,	// (0x000606ff) postcard_address2_pane_ParamLimits

0x35a2,	// (0x000606ff) postcard_address2_pane

0x35b0,	// (0x0006070d) postcard_message2_pane_ParamLimits

0x35b0,	// (0x0006070d) postcard_message2_pane

0x3e67,	// (0x00060fc4) message2_row_pane_ParamLimits

0x3e67,	// (0x00060fc4) message2_row_pane

0x3e81,	// (0x00060fde) address2_row_pane_ParamLimits

0x3e81,	// (0x00060fde) address2_row_pane

0xc653,	// (0x000697b0) postcard_message2_row_pane_g1

0xc65b,	// (0x000697b8) postcard_message2_row_pane_t1

0xc653,	// (0x000697b0) address2_row_pane_g1

0xc65b,	// (0x000697b8) address2_row_pane_t1

0x19a6,	// (0x0005eb03) aid_size_cell_vorec

0x9fda,	// (0x00067137) main_rss_pane

0xc669,	// (0x000697c6) rss_list_single_pane_ParamLimits

0xc669,	// (0x000697c6) rss_list_single_pane

0xc677,	// (0x000697d4) rss_list_single_pane_t1

0xc677,	// (0x000697d4) rss_list_single_pane_t2

0x0001,

0xf4cf,	// (0x0006c62c) rss_list_single_pane_t

0x9fda,	// (0x00067137) main_camera2_pane

0x9fda,	// (0x00067137) main_video2_pane

0x0eed,	// (0x0005e04a) cams_zoom_pane_cp2_ParamLimits

0x0eed,	// (0x0005e04a) cams_zoom_pane_cp2

0x0eed,	// (0x0005e04a) image2_vga_pane_ParamLimits

0x0eed,	// (0x0005e04a) image2_vga_pane

0xb0a5,	// (0x00068202) main_camera2_pane_g1_ParamLimits

0xb0a5,	// (0x00068202) main_camera2_pane_g1

0xb0a5,	// (0x00068202) main_camera2_pane_g2_ParamLimits

0xb0a5,	// (0x00068202) main_camera2_pane_g2

0xb0a5,	// (0x00068202) main_camera2_pane_g3_ParamLimits

0xb0a5,	// (0x00068202) main_camera2_pane_g3

0xb0a5,	// (0x00068202) main_camera2_pane_g4_ParamLimits

0xb0a5,	// (0x00068202) main_camera2_pane_g4

0xb0a5,	// (0x00068202) main_camera2_pane_g5_ParamLimits

0xb0a5,	// (0x00068202) main_camera2_pane_g5

0xb0a5,	// (0x00068202) main_camera2_pane_g6_ParamLimits

0xb0a5,	// (0x00068202) main_camera2_pane_g6

0xb0a5,	// (0x00068202) main_camera2_pane_g7_ParamLimits

0xb0a5,	// (0x00068202) main_camera2_pane_g7

0xb0a5,	// (0x00068202) main_camera2_pane_g8_ParamLimits

0xb0a5,	// (0x00068202) main_camera2_pane_g8

0x0008,

0xf4eb,	// (0x0006c648) main_camera2_pane_g_ParamLimits

0xf4eb,	// (0x0006c648) main_camera2_pane_g

0x3ff5,	// (0x00061152) main_camera2_pane_t1_ParamLimits

0x3ff5,	// (0x00061152) main_camera2_pane_t1

0x3ff5,	// (0x00061152) main_camera2_pane_t2_ParamLimits

0x3ff5,	// (0x00061152) main_camera2_pane_t2

0x3ff5,	// (0x00061152) main_camera2_pane_t3_ParamLimits

0x3ff5,	// (0x00061152) main_camera2_pane_t3

0x3ff5,	// (0x00061152) main_camera2_pane_t4_ParamLimits

0x3ff5,	// (0x00061152) main_camera2_pane_t4

0x0006,

0xf4fe,	// (0x0006c65b) main_camera2_pane_t_ParamLimits

0xf4fe,	// (0x0006c65b) main_camera2_pane_t

0x401d,	// (0x0006117a) cams_zoom_pane_cp4_ParamLimits

0x401d,	// (0x0006117a) cams_zoom_pane_cp4

0x3c87,	// (0x00060de4) image2_cif_pane_ParamLimits

0x3c87,	// (0x00060de4) image2_cif_pane

0x0eed,	// (0x0005e04a) image2_subqcif_pane_ParamLimits

0x0eed,	// (0x0005e04a) image2_subqcif_pane

0x402b,	// (0x00061188) main_video2_pane_g1_ParamLimits

0x402b,	// (0x00061188) main_video2_pane_g1

0x402b,	// (0x00061188) main_video2_pane_g2_ParamLimits

0x402b,	// (0x00061188) main_video2_pane_g2

0x402b,	// (0x00061188) main_video2_pane_g3_ParamLimits

0x402b,	// (0x00061188) main_video2_pane_g3

0x402b,	// (0x00061188) main_video2_pane_g4_ParamLimits

0x402b,	// (0x00061188) main_video2_pane_g4

0x402b,	// (0x00061188) main_video2_pane_g5_ParamLimits

0x402b,	// (0x00061188) main_video2_pane_g5

0x402b,	// (0x00061188) main_video2_pane_g6_ParamLimits

0x402b,	// (0x00061188) main_video2_pane_g6

0x0005,

0xf50d,	// (0x0006c66a) main_video2_pane_g_ParamLimits

0xf50d,	// (0x0006c66a) main_video2_pane_g

0x4039,	// (0x00061196) main_video2_pane_t1_ParamLimits

0x4039,	// (0x00061196) main_video2_pane_t1

0x4039,	// (0x00061196) main_video2_pane_t2_ParamLimits

0x4039,	// (0x00061196) main_video2_pane_t2

0x4039,	// (0x00061196) main_video2_pane_t3_ParamLimits

0x4039,	// (0x00061196) main_video2_pane_t3

0x0002,

0xf51a,	// (0x0006c677) main_video2_pane_t_ParamLimits

0xf51a,	// (0x0006c677) main_video2_pane_t

0x3b48,	// (0x00060ca5) call_muted_g2

0x0001,

0xf4c1,	// (0x0006c61e) call_muted_g

0x9fda,	// (0x00067137) main_mup2_pane

0xa6c4,	// (0x00067821) main_mup2_pane_g1_ParamLimits

0xa6c4,	// (0x00067821) main_mup2_pane_g1

0xa6c4,	// (0x00067821) main_mup2_pane_g2_ParamLimits

0xa6c4,	// (0x00067821) main_mup2_pane_g2

0xd8f5,	// (0x0006aa52) main_mup_pane_g13_cp1

0x0f07,	// (0x0005e064) mup_volume_pane_cp1

0xa6c4,	// (0x00067821) main_mup2_pane_g4_ParamLimits

0xa6c4,	// (0x00067821) main_mup2_pane_g4

0xa6c4,	// (0x00067821) main_mup2_pane_g5_ParamLimits

0xa6c4,	// (0x00067821) main_mup2_pane_g5

0xa6c4,	// (0x00067821) main_mup2_pane_g6_ParamLimits

0xa6c4,	// (0x00067821) main_mup2_pane_g6

0xa6c4,	// (0x00067821) main_mup2_pane_g7_ParamLimits

0xa6c4,	// (0x00067821) main_mup2_pane_g7

0x0006,

0xf521,	// (0x0006c67e) main_mup2_pane_g_ParamLimits

0xf521,	// (0x0006c67e) main_mup2_pane_g

0xa6d2,	// (0x0006782f) main_mup2_pane_t1_ParamLimits

0xa6d2,	// (0x0006782f) main_mup2_pane_t1

0xa6d2,	// (0x0006782f) main_mup2_pane_t2_ParamLimits

0xa6d2,	// (0x0006782f) main_mup2_pane_t2

0xa6d2,	// (0x0006782f) main_mup2_pane_t3_ParamLimits

0xa6d2,	// (0x0006782f) main_mup2_pane_t3

0xa6d2,	// (0x0006782f) main_mup2_pane_t4_ParamLimits

0xa6d2,	// (0x0006782f) main_mup2_pane_t4

0xa6d2,	// (0x0006782f) main_mup2_pane_t5_ParamLimits

0xa6d2,	// (0x0006782f) main_mup2_pane_t5

0xa6d2,	// (0x0006782f) main_mup2_pane_t6_ParamLimits

0xa6d2,	// (0x0006782f) main_mup2_pane_t6

0x0005,

0xf530,	// (0x0006c68d) main_mup2_pane_t_ParamLimits

0xf530,	// (0x0006c68d) main_mup2_pane_t

0xc5ff,	// (0x0006975c) mup2_visualizer_pane_ParamLimits

0xc5ff,	// (0x0006975c) mup2_visualizer_pane

0xc5ff,	// (0x0006975c) mup_progress_pane_cp_ParamLimits

0xc5ff,	// (0x0006975c) mup_progress_pane_cp

0x4108,	// (0x00061265) mup_volume_pane_cp_ParamLimits

0x4108,	// (0x00061265) mup_volume_pane_cp

0xa6a8,	// (0x00067805) mup2_visualizer_pane_g1_ParamLimits

0xa6a8,	// (0x00067805) mup2_visualizer_pane_g1

0xa6b6,	// (0x00067813) mup2_visualizer_pane_g2_ParamLimits

0xa6b6,	// (0x00067813) mup2_visualizer_pane_g2

0xa6b6,	// (0x00067813) mup2_visualizer_pane_g3_ParamLimits

0xa6b6,	// (0x00067813) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0006c201) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0006c201) mup2_visualizer_pane_g

0xb5d2,	// (0x0006872f) aid_size_cell_fmradio

0x3c5e,	// (0x00060dbb) aid_height_parent_landcape

0xaae0,	// (0x00067c3d) wml_content_pane_cp

0xaae8,	// (0x00067c45) wml_tabs_pane

0xaaf1,	// (0x00067c4e) popup_wml_miniature_window

0xaaf9,	// (0x00067c56) scroll_pane_cp021

0xab0d,	// (0x00067c6a) wml_content_pane_comp8

0x9fda,	// (0x00067137) bg_popup_sub_pane_cp05

0xc71d,	// (0x0006987a) popup_wml_miniature_window_g1

0xc725,	// (0x00069882) wml_miniature_view_pane

0x404d,	// (0x000611aa) aid_size_wml_view

0x4055,	// (0x000611b2) wml_miniature_view_pane_g1

0x405e,	// (0x000611bb) wml_miniature_view_pane_g2

0x4067,	// (0x000611c4) wml_miniature_view_pane_g3

0x406f,	// (0x000611cc) wml_miniature_view_pane_g4

0x4077,	// (0x000611d4) wml_miniature_view_pane_g5

0x407f,	// (0x000611dc) wml_miniature_view_pane_g6

0x4087,	// (0x000611e4) wml_miniature_view_pane_g7

0x408f,	// (0x000611ec) wml_miniature_view_pane_g8

0x0007,

0xf53d,	// (0x0006c69a) wml_miniature_view_pane_g

0xc72d,	// (0x0006988a) background_graphic_ParamLimits

0xc72d,	// (0x0006988a) background_graphic

0xc739,	// (0x00069896) wml_tabs_2_pane

0xc742,	// (0x0006989f) wml_tabs_3_pane_ParamLimits

0xc742,	// (0x0006989f) wml_tabs_3_pane

0xc754,	// (0x000698b1) wml_tabs_4_pane_ParamLimits

0xc754,	// (0x000698b1) wml_tabs_4_pane

0xc76a,	// (0x000698c7) wml_tabs_5_pane_ParamLimits

0xc76a,	// (0x000698c7) wml_tabs_5_pane

0xc784,	// (0x000698e1) wml_tabs_pane_g2_ParamLimits

0xc784,	// (0x000698e1) wml_tabs_pane_g2

0xc799,	// (0x000698f6) wml_tabs_pane_g3_ParamLimits

0xc799,	// (0x000698f6) wml_tabs_pane_g3

0xc7ae,	// (0x0006990b) wml_tabs_2_active_pane_ParamLimits

0xc7ae,	// (0x0006990b) wml_tabs_2_active_pane

0xc7ae,	// (0x0006990b) wml_tabs_2_passive_pane_ParamLimits

0xc7ae,	// (0x0006990b) wml_tabs_2_passive_pane

0x4097,	// (0x000611f4) wml_tabs_3_active_pane_cp_ParamLimits

0x4097,	// (0x000611f4) wml_tabs_3_active_pane_cp

0x40aa,	// (0x00061207) wml_tabs_3_passive_pane_ParamLimits

0x40aa,	// (0x00061207) wml_tabs_3_passive_pane

0x40bb,	// (0x00061218) wml_tabs_3_passive_pane_cp_ParamLimits

0x40bb,	// (0x00061218) wml_tabs_3_passive_pane_cp

0x40d0,	// (0x0006122d) tabs_4_active_pane

0x40d8,	// (0x00061235) tabs_4_passive_pane

0x40e0,	// (0x0006123d) tabs_4_passive_pane_cp

0x40e8,	// (0x00061245) tabs_4_passive_pane_cp2

0x3a44,	// (0x00060ba1) aid_height_text

0xc5ff,	// (0x0006975c) mup_volume_cont_pane_ParamLimits

0xc5ff,	// (0x0006975c) mup_volume_cont_pane

0x9b88,	// (0x00066ce5) aid_size_cell_pinb

0x9b88,	// (0x00066ce5) aid_size_list_pinb

0xc5ff,	// (0x0006975c) mup2_volume_cont_pane_ParamLimits

0xc5ff,	// (0x0006975c) mup2_volume_cont_pane

0x40f2,	// (0x0006124f) mup2_volume_cont_pane_g1_ParamLimits

0x40f2,	// (0x0006124f) mup2_volume_cont_pane_g1

0x0ce8,	// (0x0005de45) aid_size_cell_touch_ParamLimits

0x0ce8,	// (0x0005de45) aid_size_cell_touch

0x0f11,	// (0x0005e06e) touch_pane_ParamLimits

0x0f11,	// (0x0005e06e) touch_pane

0x0f07,	// (0x0005e064) main_rss2_pane

0xc7c5,	// (0x00069922) listscroll_rss2_pane

0xc7ce,	// (0x0006992b) rss2_navigation_pane

0xc7d6,	// (0x00069933) list_rss2_pane

0xb189,	// (0x000682e6) scroll_pane_cp22

0xc7de,	// (0x0006993b) rss2_navigation_pane_g1

0xc7e7,	// (0x00069944) rss2_navigation_pane_g2

0xc7ef,	// (0x0006994c) rss2_navigation_pane_g3

0x0002,

0x026d,	// (0x0005d3ca) rss2_navigation_pane_g

0xc7f7,	// (0x00069954) rss2_navigation_pane_t1

0x411e,	// (0x0006127b) rss2_list_single_pane_ParamLimits

0x411e,	// (0x0006127b) rss2_list_single_pane

0xc805,	// (0x00069962) rss2_list_single_pane_t2

0xc813,	// (0x00069970) rss2_list_single_pane_t3_ParamLimits

0xc813,	// (0x00069970) rss2_list_single_pane_t3

0xc830,	// (0x0006998d) rss2_list_single_pane_t4

0x2c45,	// (0x0005fda2) smil_status_pane_g1

0x3c87,	// (0x00060de4) main_image2_pane_ParamLimits

0x3c87,	// (0x00060de4) main_image2_pane

0xb0a5,	// (0x00068202) main_camera2_pane_g9_ParamLimits

0xb0a5,	// (0x00068202) main_camera2_pane_g9

0x3ff5,	// (0x00061152) main_camera2_pane_t5_ParamLimits

0x3ff5,	// (0x00061152) main_camera2_pane_t5

0x4009,	// (0x00061166) main_camera2_pane_t6_ParamLimits

0x4009,	// (0x00061166) main_camera2_pane_t6

0x4141,	// (0x0006129e) main_image2_pane_g1_ParamLimits

0x4141,	// (0x0006129e) main_image2_pane_g1

0x3779,	// (0x000608d6) smil2_video_pane_ParamLimits

0x3779,	// (0x000608d6) smil2_video_pane

0x0b50,	// (0x0005dcad) aid_zoom_text_primary_cp

0x0ea2,	// (0x0005dfff) popup_preview_fixed_window

0xaa3a,	// (0x00067b97) im_reading_pane_g1

0x3fe7,	// (0x00061144) cams2_bc_adjust_pane_cp_ParamLimits

0x3fe7,	// (0x00061144) cams2_bc_adjust_pane_cp

0x0eed,	// (0x0005e04a) cams2_bc_adjust_pane_ParamLimits

0x0eed,	// (0x0005e04a) cams2_bc_adjust_pane

0xd8f5,	// (0x0006aa52) cams2_bc_adjust_pane_g1

0x0f07,	// (0x0005e064) cams2_slider_pane

0xd8f5,	// (0x0006aa52) cams2_slider_pane_g1

0xd8f5,	// (0x0006aa52) cams2_slider_pane_g2

0x0006,

0xf54e,	// (0x0006c6ab) cams2_slider_pane_g

0x0fa6,	// (0x0005e103) calc_display_pane_ParamLimits

0x0fc4,	// (0x0005e121) calc_paper_pane_ParamLimits

0x0fe0,	// (0x0005e13d) grid_calc_pane_ParamLimits

0x2dfc,	// (0x0005ff59) popup_clock_digital_window_t1_ParamLimits

0xb53f,	// (0x0006869c) main_image_pane_t1

0x0f8c,	// (0x0005e0e9) aid_size_cell_calc_ParamLimits

0x0f8c,	// (0x0005e0e9) aid_size_cell_calc

0x3cb8,	// (0x00060e15) popup_blid_sat_info2_window_ParamLimits

0x3cb8,	// (0x00060e15) popup_blid_sat_info2_window

0xc83e,	// (0x0006999b) aid_size_cell_blid

0xc5ff,	// (0x0006975c) bg_popup_window_pane_cp07

0xc85b,	// (0x000699b8) grid_popup_blid_pane

0xc865,	// (0x000699c2) heading_pane_cp05_ParamLimits

0xc865,	// (0x000699c2) heading_pane_cp05

0xc92f,	// (0x00069a8c) cell_popup_blid_pane_ParamLimits

0xc92f,	// (0x00069a8c) cell_popup_blid_pane

0xc959,	// (0x00069ab6) cell_popup_blid_pane_g1

0xc961,	// (0x00069abe) cell_popup_blid_pane_t1

0xc5ff,	// (0x0006975c) mup2_indicator_pane_ParamLimits

0xc5ff,	// (0x0006975c) mup2_indicator_pane

0x9b88,	// (0x00066ce5) mup2_visualizer_osc_pane

0xc707,	// (0x00069864) mup2_visualizer_spec_pane_ParamLimits

0xc707,	// (0x00069864) mup2_visualizer_spec_pane

0x9b88,	// (0x00066ce5) mup2_spec_half_pane

0x9b88,	// (0x00066ce5) mup2_spec_half_pane_cp

0xc96f,	// (0x00069acc) mup2_spec_bar_pane_ParamLimits

0xc96f,	// (0x00069acc) mup2_spec_bar_pane

0xa971,	// (0x00067ace) mup2_spec_bar_pane_g1

0xc98e,	// (0x00069aeb) mup2_spec_bar_pane_g2

0x0001,

0xf55d,	// (0x0006c6ba) mup2_spec_bar_pane_g

0x9b88,	// (0x00066ce5) mup2_osc_middle_pane

0xa971,	// (0x00067ace) mup2_visualizer_osc_pane_g1

0x9bb2,	// (0x00066d0f) popup_number_entry_window_t1_ParamLimits

0x9bc5,	// (0x00066d22) popup_number_entry_window_t2_ParamLimits

0x9bd7,	// (0x00066d34) popup_number_entry_window_t3_ParamLimits

0x9be9,	// (0x00066d46) popup_number_entry_window_t5_ParamLimits

0x9be9,	// (0x00066d46) popup_number_entry_window_t5

0xf045,	// (0x0006c1a2) popup_number_entry_window_t_ParamLimits

0x9c1e,	// (0x00066d7b) text_title_cp2_ParamLimits

0x3466,	// (0x000605c3) aid_hotspot_pointer_text2_pane

0x3500,	// (0x0006065d) main_viewer_pane_g9_ParamLimits

0x3500,	// (0x0006065d) main_viewer_pane_g9

0xac99,	// (0x00067df6) cale_month_pane_t1_ParamLimits

0xacd6,	// (0x00067e33) bg_cale_pane_ParamLimits

0xacee,	// (0x00067e4b) list_cale_pane_ParamLimits

0xacff,	// (0x00067e5c) listscroll_cale_day_pane_t1

0xad11,	// (0x00067e6e) scroll_pane_cp09_ParamLimits

0x31ac,	// (0x00060309) main_mup_eq_pane_t1_ParamLimits

0x31ac,	// (0x00060309) main_mup_eq_pane_t1

0x31c8,	// (0x00060325) main_mup_eq_pane_t2_ParamLimits

0x31c8,	// (0x00060325) main_mup_eq_pane_t2

0x31e4,	// (0x00060341) main_mup_eq_pane_t3_ParamLimits

0x31e4,	// (0x00060341) main_mup_eq_pane_t3

0x31fe,	// (0x0006035b) main_mup_eq_pane_t4_ParamLimits

0x31fe,	// (0x0006035b) main_mup_eq_pane_t4

0x3218,	// (0x00060375) main_mup_eq_pane_t5_ParamLimits

0x3218,	// (0x00060375) main_mup_eq_pane_t5

0x3232,	// (0x0006038f) main_mup_eq_pane_t6_ParamLimits

0x3232,	// (0x0006038f) main_mup_eq_pane_t6

0x3248,	// (0x000603a5) main_mup_eq_pane_t7_ParamLimits

0x3248,	// (0x000603a5) main_mup_eq_pane_t7

0x325e,	// (0x000603bb) main_mup_eq_pane_t8_ParamLimits

0x325e,	// (0x000603bb) main_mup_eq_pane_t8

0x3274,	// (0x000603d1) main_mup_eq_pane_t9_ParamLimits

0x3274,	// (0x000603d1) main_mup_eq_pane_t9

0x3290,	// (0x000603ed) main_mup_eq_pane_t10_ParamLimits

0x3290,	// (0x000603ed) main_mup_eq_pane_t10

0x0009,

0xf3a9,	// (0x0006c506) main_mup_eq_pane_t_ParamLimits

0xf3a9,	// (0x0006c506) main_mup_eq_pane_t

0x3355,	// (0x000604b2) mup_equalizer_pane_cp5_ParamLimits

0x336d,	// (0x000604ca) mup_equalizer_pane_cp6_ParamLimits

0x3385,	// (0x000604e2) mup_equalizer_pane_cp7_ParamLimits

0x0f07,	// (0x0005e064) main_gallery_pane

0xc6a5,	// (0x00069802) smil2_volume_pane

0xc6ad,	// (0x0006980a) smil_status_volume_pane_g1_ParamLimits

0xc6c0,	// (0x0006981d) smil_status_volume_pane_g2_ParamLimits

0x3e94,	// (0x00060ff1) smil_status_volume_pane_g3_ParamLimits

0xf4d4,	// (0x0006c631) smil_status_volume_pane_g_ParamLimits

0xc5ff,	// (0x0006975c) bg_popup_window_pane_cp07_ParamLimits

0xc846,	// (0x000699a3) blid_firmament_pane

0xa69a,	// (0x000677f7) aid_size_cell_gallery_ParamLimits

0xa69a,	// (0x000677f7) aid_size_cell_gallery

0xa69a,	// (0x000677f7) grid_gallery_pane_ParamLimits

0xa69a,	// (0x000677f7) grid_gallery_pane

0xb584,	// (0x000686e1) cell_gallery_pane_ParamLimits

0xb584,	// (0x000686e1) cell_gallery_pane

0xa1e1,	// (0x0006733e) bg_cell_gallery_focus_pane_ParamLimits

0xa1e1,	// (0x0006733e) bg_cell_gallery_focus_pane

0xa6a8,	// (0x00067805) cell_gallery_pane_g1_ParamLimits

0xa6a8,	// (0x00067805) cell_gallery_pane_g1

0xa6a8,	// (0x00067805) cell_gallery_pane_g2_ParamLimits

0xa6a8,	// (0x00067805) cell_gallery_pane_g2

0xa6a8,	// (0x00067805) cell_gallery_pane_g3_ParamLimits

0xa6a8,	// (0x00067805) cell_gallery_pane_g3

0xa6b6,	// (0x00067813) cell_gallery_pane_g4_ParamLimits

0xa6b6,	// (0x00067813) cell_gallery_pane_g4

0x0003,

0xf562,	// (0x0006c6bf) cell_gallery_pane_g_ParamLimits

0xf562,	// (0x0006c6bf) cell_gallery_pane_g

0xc998,	// (0x00069af5) bg_cell_gallery_focus_pane_g1

0xc9a0,	// (0x00069afd) bg_cell_gallery_focus_pane_g2

0xc9a8,	// (0x00069b05) bg_cell_gallery_focus_pane_g3

0xc9b0,	// (0x00069b0d) bg_cell_gallery_focus_pane_g4

0xc9b8,	// (0x00069b15) bg_cell_gallery_focus_pane_g5

0xc9c0,	// (0x00069b1d) bg_cell_gallery_focus_pane_g6

0xc9c8,	// (0x00069b25) bg_cell_gallery_focus_pane_g7

0xc9d0,	// (0x00069b2d) bg_cell_gallery_focus_pane_g8

0x0007,

0x02a8,	// (0x0005d405) bg_cell_gallery_focus_pane_g

0xc9d8,	// (0x00069b35) aid_firma_cardinal

0xc9ec,	// (0x00069b49) blid_firmament_pane_t1

0xca03,	// (0x00069b60) blid_firmament_pane_t2

0xca1a,	// (0x00069b77) blid_firmament_pane_t3

0xca31,	// (0x00069b8e) blid_firmament_pane_t4

0x0003,

0x02b9,	// (0x0005d416) blid_firmament_pane_t

0xca48,	// (0x00069ba5) blid_sat_info_pane

0xa971,	// (0x00067ace) blid_sat_info_pane_g1

0xa971,	// (0x00067ace) blid_sat_info_pane_g2

0x0001,

0xf39d,	// (0x0006c4fa) blid_sat_info_pane_g

0xca58,	// (0x00069bb5) blid_sat_info_pane_t1

0xca66,	// (0x00069bc3) smil2_volume_content_pane

0xca6f,	// (0x00069bcc) smil2_volume_pane_g1

0xac13,	// (0x00067d70) smil2_volume_content_pane_g1

0xca77,	// (0x00069bd4) smil2_volume_content_pane_g2

0xca80,	// (0x00069bdd) smil2_volume_content_pane_g3

0xca89,	// (0x00069be6) smil2_volume_content_pane_g4

0xca92,	// (0x00069bef) smil2_volume_content_pane_g5

0xca9b,	// (0x00069bf8) smil2_volume_content_pane_g6

0xcaa4,	// (0x00069c01) smil2_volume_content_pane_g7

0xcaad,	// (0x00069c0a) smil2_volume_content_pane_g8

0xcab6,	// (0x00069c13) smil2_volume_content_pane_g9

0xcabf,	// (0x00069c1c) smil2_volume_content_pane_g10

0x0009,

0xf56b,	// (0x0006c6c8) smil2_volume_content_pane_g

0x16d9,	// (0x0005e836) cale_week_day_heading_pane_t1_ParamLimits

0x1701,	// (0x0005e85e) cale_week_day_heading_pane_t2_ParamLimits

0x172e,	// (0x0005e88b) cale_week_day_heading_pane_t3_ParamLimits

0x175b,	// (0x0005e8b8) cale_week_day_heading_pane_t4_ParamLimits

0x1788,	// (0x0005e8e5) cale_week_day_heading_pane_t5_ParamLimits

0x17b5,	// (0x0005e912) cale_week_day_heading_pane_t6_ParamLimits

0x17e2,	// (0x0005e93f) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0006c2a9) cale_week_day_heading_pane_t_ParamLimits

0xa85d,	// (0x000679ba) bg_cale_side_pane_ParamLimits

0x180a,	// (0x0005e967) cale_week_time_pane_t1_ParamLimits

0x182e,	// (0x0005e98b) cale_week_time_pane_t2_ParamLimits

0x1852,	// (0x0005e9af) cale_week_time_pane_t3_ParamLimits

0x1876,	// (0x0005e9d3) cale_week_time_pane_t4_ParamLimits

0x189a,	// (0x0005e9f7) cale_week_time_pane_t5_ParamLimits

0x18c0,	// (0x0005ea1d) cale_week_time_pane_t6_ParamLimits

0x18e8,	// (0x0005ea45) cale_week_time_pane_t7_ParamLimits

0x1914,	// (0x0005ea71) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0006c2b8) cale_week_time_pane_t_ParamLimits

0x1944,	// (0x0005eaa1) cell_cale_week_pane_g2_ParamLimits

0xa85d,	// (0x000679ba) bg_cale_side_pane_cp01_ParamLimits

0x2a30,	// (0x0005fb8d) cale_month_week_pane_t1_ParamLimits

0x2a49,	// (0x0005fba6) cale_month_week_pane_t2_ParamLimits

0x2a62,	// (0x0005fbbf) cale_month_week_pane_t3_ParamLimits

0x2a7b,	// (0x0005fbd8) cale_month_week_pane_t4_ParamLimits

0x2a94,	// (0x0005fbf1) cale_month_week_pane_t5_ParamLimits

0x2ab1,	// (0x0005fc0e) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0006c386) cale_month_week_pane_t_ParamLimits

0x2c02,	// (0x0005fd5f) cell_cale_month_pane_g1_ParamLimits

0x0f07,	// (0x0005e064) main_cale_event_viewer_pane

0x9b88,	// (0x00066ce5) listscroll_cale_event_viewer_pane

0xcac8,	// (0x00069c25) list_cale_ev_pane

0xcad0,	// (0x00069c2d) scroll_pane_cp023

0x414d,	// (0x000612aa) field_cale_ev_pane_ParamLimits

0x414d,	// (0x000612aa) field_cale_ev_pane

0xcadc,	// (0x00069c39) field_cale_ev_content_pane_ParamLimits

0xcadc,	// (0x00069c39) field_cale_ev_content_pane

0xcae8,	// (0x00069c45) field_cale_ev_pane_g1_ParamLimits

0xcae8,	// (0x00069c45) field_cale_ev_pane_g1

0xcaf4,	// (0x00069c51) field_cale_ev_pane_g2_ParamLimits

0xcaf4,	// (0x00069c51) field_cale_ev_pane_g2

0xcb0c,	// (0x00069c69) field_cale_ev_pane_g3_ParamLimits

0xcb0c,	// (0x00069c69) field_cale_ev_pane_g3

0x0002,

0x02d7,	// (0x0005d434) field_cale_ev_pane_g_ParamLimits

0x02d7,	// (0x0005d434) field_cale_ev_pane_g

0xcb24,	// (0x00069c81) field_cale_ev_pane_t1_ParamLimits

0xcb24,	// (0x00069c81) field_cale_ev_pane_t1

0x4171,	// (0x000612ce) field_cale_ev_content_pane_t1_ParamLimits

0x4171,	// (0x000612ce) field_cale_ev_content_pane_t1

0xb425,	// (0x00068582) bg_button_pane_cp01

0x1337,	// (0x0005e494) listscroll_cale_week_pane_ParamLimits

0xa825,	// (0x00067982) popup_toolbar_window_cp01

0xa82e,	// (0x0006798b) listscroll_cale_week_pane_t1_ParamLimits

0x1337,	// (0x0005e494) listscroll_cale_day_pane_ParamLimits

0xa825,	// (0x00067982) popup_toolbar_window_cp02

0xacff,	// (0x00067e5c) listscroll_cale_day_pane_t1_ParamLimits

0x3c75,	// (0x00060dd2) main_cale_month_pane_ParamLimits

0x3dd7,	// (0x00060f34) popup_toolbar_window_cp03_ParamLimits

0x3dd7,	// (0x00060f34) popup_toolbar_window_cp03

0x3689,	// (0x000607e6) main_image_pane_g2_ParamLimits

0x3689,	// (0x000607e6) main_image_pane_g2

0x3695,	// (0x000607f2) main_image_pane_g3_ParamLimits

0x3695,	// (0x000607f2) main_image_pane_g3

0x0002,

0xf43b,	// (0x0006c598) main_image_pane_g_ParamLimits

0xf43b,	// (0x0006c598) main_image_pane_g

0xb53f,	// (0x0006869c) main_image_pane_t1_ParamLimits

0x36a1,	// (0x000607fe) main_image_pane_t2_ParamLimits

0x36a1,	// (0x000607fe) main_image_pane_t2

0x36b3,	// (0x00060810) main_image_pane_t3_ParamLimits

0x36b3,	// (0x00060810) main_image_pane_t3

0x36c5,	// (0x00060822) main_image_pane_t4_ParamLimits

0x36c5,	// (0x00060822) main_image_pane_t4

0x0003,

0xf442,	// (0x0006c59f) main_image_pane_t_ParamLimits

0xf442,	// (0x0006c59f) main_image_pane_t

0x36d7,	// (0x00060834) popup_image_details_window_cp01

0x36e1,	// (0x0006083e) popup_toobar_trans_pane_cp01_ParamLimits

0x36e1,	// (0x0006083e) popup_toobar_trans_pane_cp01

0x3d19,	// (0x00060e76) popup_image_details_window_ParamLimits

0x3d19,	// (0x00060e76) popup_image_details_window

0x3d27,	// (0x00060e84) popup_image_focus_window

0x0eed,	// (0x0005e04a) camera2_autofocus_pane_ParamLimits

0x0eed,	// (0x0005e04a) camera2_autofocus_pane

0x9b88,	// (0x00066ce5) bg_popup_sub_pane_cp06

0xcb3b,	// (0x00069c98) popup_image_focus_window_g1

0xcb43,	// (0x00069ca0) popup_image_focus_window_g2

0xcb4b,	// (0x00069ca8) popup_image_focus_window_g3

0xcb53,	// (0x00069cb0) popup_image_focus_window_g4

0x0003,

0xf580,	// (0x0006c6dd) popup_image_focus_window_g

0xcb5b,	// (0x00069cb8) popup_image_focus_window_t1

0xcb69,	// (0x00069cc6) popup_image_focus_window_t2

0xcb79,	// (0x00069cd6) popup_image_focus_window_t3

0x0002,

0xf589,	// (0x0006c6e6) popup_image_focus_window_t

0xa6a8,	// (0x00067805) camera2_autofocus_pane_g1

0xa1e1,	// (0x0006733e) bg_tb_trans_pane_cp01

0xcb87,	// (0x00069ce4) popup_image_details_window_g1

0xcb9a,	// (0x00069cf7) popup_image_details_window_g2

0x0002,

0xf59b,	// (0x0006c6f8) popup_image_details_window_g

0xcbc3,	// (0x00069d20) popup_image_details_window_t1

0xcbd5,	// (0x00069d32) popup_image_details_window_t2

0xcbee,	// (0x00069d4b) popup_image_details_window_t3

0xcc02,	// (0x00069d5f) popup_image_details_window_t4

0xcc1d,	// (0x00069d7a) popup_image_details_window_t5

0x0004,

0xf5a2,	// (0x0006c6ff) popup_image_details_window_t

0xa706,	// (0x00067863) bg_calc_paper_pane_ParamLimits

0x0f07,	// (0x0005e064) grid_highlight_pane_cp013

0x10dd,	// (0x0005e23a) list_calc_pane_ParamLimits

0x10ef,	// (0x0005e24c) scroll_pane_cp024

0xa71a,	// (0x00067877) bg_calc_display_pane_ParamLimits

0x10f7,	// (0x0005e254) calc_display_pane_t1_ParamLimits

0x110c,	// (0x0005e269) calc_display_pane_t2_ParamLimits

0x1121,	// (0x0005e27e) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0006c229) calc_display_pane_t_ParamLimits

0x11f1,	// (0x0005e34e) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0006c246) cell_calc_pane_g

0x11fa,	// (0x0005e357) cell_calc_pane_t1

0xa76f,	// (0x000678cc) grid_highlight_pane_cp02_ParamLimits

0xa785,	// (0x000678e2) toolbar_button_pane_cp01_ParamLimits

0xa785,	// (0x000678e2) toolbar_button_pane_cp01

0xb5b4,	// (0x00068711) temp_image_control_pane_ParamLimits

0xb5b4,	// (0x00068711) temp_image_control_pane

0x3c87,	// (0x00060de4) main_mp3_pane

0xcc51,	// (0x00069dae) temp_image_control_pane_g1_ParamLimits

0xcc51,	// (0x00069dae) temp_image_control_pane_g1

0xcc5f,	// (0x00069dbc) temp_image_control_pane_g2_ParamLimits

0xcc5f,	// (0x00069dbc) temp_image_control_pane_g2

0xcc71,	// (0x00069dce) temp_image_control_pane_g3_ParamLimits

0xcc71,	// (0x00069dce) temp_image_control_pane_g3

0x418c,	// (0x000612e9) temp_image_control_pane_g4_ParamLimits

0x418c,	// (0x000612e9) temp_image_control_pane_g4

0x0003,

0xf5ad,	// (0x0006c70a) temp_image_control_pane_g_ParamLimits

0xf5ad,	// (0x0006c70a) temp_image_control_pane_g

0xcc51,	// (0x00069dae) main_mp3_pane_g1

0x419d,	// (0x000612fa) main_mp3_pane_g2

0x0007,

0xf5b6,	// (0x0006c713) main_mp3_pane_g

0xcca6,	// (0x00069e03) main_mp3_pane_t1

0xa6b6,	// (0x00067813) main_camera_pane_g8_ParamLimits

0xa6b6,	// (0x00067813) main_camera_pane_g8

0x1af0,	// (0x0005ec4d) main_video_pane_g7_ParamLimits

0x1af0,	// (0x0005ec4d) main_video_pane_g7

0x3ff5,	// (0x00061152) main_camera2_pane_t7_ParamLimits

0x3ff5,	// (0x00061152) main_camera2_pane_t7

0xaaa0,	// (0x00067bfd) scroll_pane_cp025_ParamLimits

0xaaa0,	// (0x00067bfd) scroll_pane_cp025

0xaab4,	// (0x00067c11) scroll_pane_cp026_ParamLimits

0xaab4,	// (0x00067c11) scroll_pane_cp026

0xaac3,	// (0x00067c20) wml_content_pane_ParamLimits

0x0f07,	// (0x0005e064) main_touch_calib_pane

0x4241,	// (0x0006139e) main_touch_calib_pane_g1

0x424d,	// (0x000613aa) main_touch_calib_pane_g2

0x4259,	// (0x000613b6) main_touch_calib_pane_g3

0x4265,	// (0x000613c2) main_touch_calib_pane_g4

0x0003,

0xf5d4,	// (0x0006c731) main_touch_calib_pane_g

0x4271,	// (0x000613ce) main_touch_calib_pane_t1

0x4288,	// (0x000613e5) main_touch_calib_pane_t2

0x0004,

0xf5dd,	// (0x0006c73a) main_touch_calib_pane_t

0xb204,	// (0x00068361) mup_progress_pane_cp02

0xb223,	// (0x00068380) navi_pane_g1

0xb299,	// (0x000683f6) navi_pane_mp_t3

0x3c87,	// (0x00060de4) main_mp3_pane_ParamLimits

0x3e18,	// (0x00060f75) navi_pane_ParamLimits

0xcc51,	// (0x00069dae) main_mp3_pane_g1_ParamLimits

0x419d,	// (0x000612fa) main_mp3_pane_g2_ParamLimits

0x41a9,	// (0x00061306) main_mp3_pane_g3_ParamLimits

0x41a9,	// (0x00061306) main_mp3_pane_g3

0x41b5,	// (0x00061312) main_mp3_pane_g4_ParamLimits

0x41b5,	// (0x00061312) main_mp3_pane_g4

0xa6a8,	// (0x00067805) main_mp3_pane_g5_ParamLimits

0xa6a8,	// (0x00067805) main_mp3_pane_g5

0xcc81,	// (0x00069dde) main_mp3_pane_g6_ParamLimits

0xcc81,	// (0x00069dde) main_mp3_pane_g6

0xcc8e,	// (0x00069deb) main_mp3_pane_g7_ParamLimits

0xcc8e,	// (0x00069deb) main_mp3_pane_g7

0xcc9a,	// (0x00069df7) main_mp3_pane_g8_ParamLimits

0xcc9a,	// (0x00069df7) main_mp3_pane_g8

0xf5b6,	// (0x0006c713) main_mp3_pane_g_ParamLimits

0x41c1,	// (0x0006131e) main_mp3_pane_t2

0x41d1,	// (0x0006132e) main_mp3_pane_t3

0xccb4,	// (0x00069e11) main_mp3_pane_t4

0xccc2,	// (0x00069e1f) main_mp3_pane_t5

0x0005,

0xf5c7,	// (0x0006c724) main_mp3_pane_t

0xccd0,	// (0x00069e2d) mup_progress_pane_cp01

0x0b50,	// (0x0005dcad) aid_zoom_text_secondary2

0xcac8,	// (0x00069c25) list_cale_ev2_pane

0xcad0,	// (0x00069c2d) scroll_pane_cp023_ParamLimits

0x42e3,	// (0x00061440) field_cale_ev2_pane_ParamLimits

0x42e3,	// (0x00061440) field_cale_ev2_pane

0x42fe,	// (0x0006145b) field_cale_ev2_pane_g1_ParamLimits

0x42fe,	// (0x0006145b) field_cale_ev2_pane_g1

0x430a,	// (0x00061467) field_cale_ev2_pane_g2_ParamLimits

0x430a,	// (0x00061467) field_cale_ev2_pane_g2

0x4322,	// (0x0006147f) field_cale_ev2_pane_g3_ParamLimits

0x4322,	// (0x0006147f) field_cale_ev2_pane_g3

0x0003,

0xf5e8,	// (0x0006c745) field_cale_ev2_pane_g_ParamLimits

0xf5e8,	// (0x0006c745) field_cale_ev2_pane_g

0x433a,	// (0x00061497) field_cale_ev2_pane_t1_ParamLimits

0x433a,	// (0x00061497) field_cale_ev2_pane_t1

0x4351,	// (0x000614ae) field_cale_ev2_pane_t2_ParamLimits

0x4351,	// (0x000614ae) field_cale_ev2_pane_t2

0x0001,

0xf5f1,	// (0x0006c74e) field_cale_ev2_pane_t_ParamLimits

0xf5f1,	// (0x0006c74e) field_cale_ev2_pane_t

0x3568,	// (0x000606c5) main_postcard_pane_g5_ParamLimits

0x3568,	// (0x000606c5) main_postcard_pane_g5

0x3576,	// (0x000606d3) main_postcard_pane_g6_ParamLimits

0x3576,	// (0x000606d3) main_postcard_pane_g6

0xa69a,	// (0x000677f7) camera2_autofocus_pane_cp_ParamLimits

0xa69a,	// (0x000677f7) camera2_autofocus_pane_cp

0x3c87,	// (0x00060de4) main_mup3_pane

0x43a9,	// (0x00061506) main_mup3_pane_g1_ParamLimits

0x43a9,	// (0x00061506) main_mup3_pane_g1

0x43ca,	// (0x00061527) main_mup3_pane_g2_ParamLimits

0x43ca,	// (0x00061527) main_mup3_pane_g2

0x443e,	// (0x0006159b) main_mup3_pane_g3_ParamLimits

0x443e,	// (0x0006159b) main_mup3_pane_g3

0x44a3,	// (0x00061600) main_mup3_pane_g4_ParamLimits

0x44a3,	// (0x00061600) main_mup3_pane_g4

0x4508,	// (0x00061665) main_mup3_pane_g5_ParamLimits

0x4508,	// (0x00061665) main_mup3_pane_g5

0x456d,	// (0x000616ca) main_mup3_pane_g6_ParamLimits

0x456d,	// (0x000616ca) main_mup3_pane_g6

0xa6b6,	// (0x00067813) main_mup3_pane_g7_ParamLimits

0xa6b6,	// (0x00067813) main_mup3_pane_g7

0x0007,

0xf601,	// (0x0006c75e) main_mup3_pane_g_ParamLimits

0xf601,	// (0x0006c75e) main_mup3_pane_g

0x45e7,	// (0x00061744) main_mup3_pane_t1_ParamLimits

0x45e7,	// (0x00061744) main_mup3_pane_t1

0x464c,	// (0x000617a9) main_mup3_pane_t2_ParamLimits

0x464c,	// (0x000617a9) main_mup3_pane_t2

0x4715,	// (0x00061872) main_mup3_pane_t4_ParamLimits

0x4715,	// (0x00061872) main_mup3_pane_t4

0x4769,	// (0x000618c6) main_mup3_pane_t5_ParamLimits

0x4769,	// (0x000618c6) main_mup3_pane_t5

0x4825,	// (0x00061982) main_mup3_pane_t6_ParamLimits

0x4825,	// (0x00061982) main_mup3_pane_t6

0x0005,

0xf612,	// (0x0006c76f) main_mup3_pane_t_ParamLimits

0xf612,	// (0x0006c76f) main_mup3_pane_t

0x48cf,	// (0x00061a2c) mup3_progress_pane_ParamLimits

0x48cf,	// (0x00061a2c) mup3_progress_pane

0x494d,	// (0x00061aaa) popup_mup3_control_window_ParamLimits

0x494d,	// (0x00061aaa) popup_mup3_control_window

0xccd8,	// (0x00069e35) popup_mup3_text_window

0x496a,	// (0x00061ac7) mup3_progress_pane_t1

0x4988,	// (0x00061ae5) mup3_progress_pane_t2

0xcce0,	// (0x00069e3d) mup3_progress_pane_t3

0x0002,

0xf61f,	// (0x0006c77c) mup3_progress_pane_t

0xccfd,	// (0x00069e5a) mup_progress_pane_cp03

0x9b88,	// (0x00066ce5) bg_tb_trans_pane_cp04

0x49a6,	// (0x00061b03) mup3_volume_pane

0x49ae,	// (0x00061b0b) popup_mup3_control_window_g1

0xd5df,	// (0x0006a73c) mup3_volume_pane_g1

0xd5e8,	// (0x0006a745) mup3_volume_pane_g2

0xd5f1,	// (0x0006a74e) mup3_volume_pane_g3

0x0002,

0xf626,	// (0x0006c783) mup3_volume_pane_g

0x9b88,	// (0x00066ce5) bg_tb_trans_pane_cp03

0xcd0d,	// (0x00069e6a) popup_mup3_text_window_g1

0xcd15,	// (0x00069e72) popup_mup3_text_window_t1

0xa762,	// (0x000678bf) list_calc_item_pane_g1_ParamLimits

0xc7bc,	// (0x00069919) mup_volume_pane_cp_g1

0x42a1,	// (0x000613fe) main_touch_calib_pane_t3

0x42b7,	// (0x00061414) main_touch_calib_pane_t4

0x42cd,	// (0x0006142a) main_touch_calib_pane_t5

0x0cd4,	// (0x0005de31) aid_cell_size_toolbar2

0x0cdc,	// (0x0005de39) aid_popup3_width_pane

0x0b48,	// (0x0005dca5) aid_zoom_text_msg_primary

0x19f0,	// (0x0005eb4d) vorec_t7

0xa726,	// (0x00067883) bg_calc_paper_pane_g1_ParamLimits

0xa732,	// (0x0006788f) bg_calc_paper_pane_g2_ParamLimits

0xa73e,	// (0x0006789b) bg_calc_paper_pane_g3_ParamLimits

0xa74a,	// (0x000678a7) bg_calc_paper_pane_g4_ParamLimits

0xa756,	// (0x000678b3) bg_calc_paper_pane_g5_ParamLimits

0x1162,	// (0x0005e2bf) bg_calc_paper_pane_g6_ParamLimits

0x1173,	// (0x0005e2d0) bg_calc_paper_pane_g7_ParamLimits

0x1184,	// (0x0005e2e1) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0006c230) bg_calc_paper_pane_g_ParamLimits

0x1195,	// (0x0005e2f2) calc_bg_paper_pane_g9_ParamLimits

0xa69a,	// (0x000677f7) image_qvga_pane_ParamLimits

0xa69a,	// (0x000677f7) image_qvga_pane

0xa62d,	// (0x0006778a) bg_popup_sub_pane_cp04_ParamLimits

0xb4bb,	// (0x00068618) popup_mup_playback_window_g1_ParamLimits

0xb4c7,	// (0x00068624) popup_mup_playback_window_t1_ParamLimits

0xb4dc,	// (0x00068639) popup_mup_playback_window_t2_ParamLimits

0xf436,	// (0x0006c593) popup_mup_playback_window_t_ParamLimits

0xa6a8,	// (0x00067805) main_mup2_pane_g3_ParamLimits

0xa6a8,	// (0x00067805) main_mup2_pane_g3

0x1cc9,	// (0x0005ee26) popup_toolbar_window_cp04

0xb915,	// (0x00068a72) popup_call2_audio_second_window_g3_ParamLimits

0xb915,	// (0x00068a72) popup_call2_audio_second_window_g3

0xbd1f,	// (0x00068e7c) popup_call2_audio_first_window_g4_ParamLimits

0xbd1f,	// (0x00068e7c) popup_call2_audio_first_window_g4

0xc346,	// (0x000694a3) popup_call2_audio_in_window_g4_ParamLimits

0xc346,	// (0x000694a3) popup_call2_audio_in_window_g4

0x367c,	// (0x000607d9) aid_area_sk_bg_cut_ParamLimits

0x367c,	// (0x000607d9) aid_area_sk_bg_cut

0xb4f1,	// (0x0006864e) aid_area_sk_bg_cut_2_ParamLimits

0xb4f1,	// (0x0006864e) aid_area_sk_bg_cut_2

0x9b88,	// (0x00066ce5) aid_placing_details_win

0x9b88,	// (0x00066ce5) aid_placing_details_win_2

0xa6a8,	// (0x00067805) camera2_autofocus_pane_g1_ParamLimits

0x0e93,	// (0x0005dff0) popup_fixed_preview_cale_window_ParamLimits

0x0e93,	// (0x0005dff0) popup_fixed_preview_cale_window

0xb2e0,	// (0x0006843d) navi_slider_pane_g3

0xb2e9,	// (0x00068446) navi_slider_pane_g4

0xb2f2,	// (0x0006844f) navi_slider_pane_g5

0xb2e0,	// (0x0006843d) navi_slider_pane_g6

0x3180,	// (0x000602dd) navi_slider_pane_g7

0xb3f2,	// (0x0006854f) mup_scale_pane_g3

0xb3fb,	// (0x00068558) mup_scale_pane_g4

0xb404,	// (0x00068561) mup_scale_pane_g5

0x339d,	// (0x000604fa) mup_scale_pane_g6

0x33a6,	// (0x00060503) mup_scale_pane_g7

0xd8f5,	// (0x0006aa52) cams2_slider_pane_g3

0xd8f5,	// (0x0006aa52) cams2_slider_pane_g4

0xd8f5,	// (0x0006aa52) cams2_slider_pane_g5

0xd8f5,	// (0x0006aa52) cams2_slider_pane_g6

0xd8f5,	// (0x0006aa52) cams2_slider_pane_g7

0xa971,	// (0x00067ace) camera2_autofocus_pane_cp_g1

0xc62c,	// (0x00069789) bg_popup_preview_window_pane_cp02_ParamLimits

0xc62c,	// (0x00069789) bg_popup_preview_window_pane_cp02

0xcd23,	// (0x00069e80) list_fp_cale_pane_ParamLimits

0xcd23,	// (0x00069e80) list_fp_cale_pane

0xcd2f,	// (0x00069e8c) popup_fixed_preview_cale_window_t1_ParamLimits

0xcd2f,	// (0x00069e8c) popup_fixed_preview_cale_window_t1

0x49b7,	// (0x00061b14) popup_fixed_preview_cale_window_t2_ParamLimits

0x49b7,	// (0x00061b14) popup_fixed_preview_cale_window_t2

0x49cc,	// (0x00061b29) popup_fixed_preview_cale_window_t3_ParamLimits

0x49cc,	// (0x00061b29) popup_fixed_preview_cale_window_t3

0x0002,

0xf62d,	// (0x0006c78a) popup_fixed_preview_cale_window_t_ParamLimits

0xf62d,	// (0x0006c78a) popup_fixed_preview_cale_window_t

0x49e1,	// (0x00061b3e) list_single_fp_cale_pane_ParamLimits

0x49e1,	// (0x00061b3e) list_single_fp_cale_pane

0xcd4d,	// (0x00069eaa) list_single_fp_cale_pane_g1_ParamLimits

0xcd4d,	// (0x00069eaa) list_single_fp_cale_pane_g1

0xcd59,	// (0x00069eb6) list_single_fp_cale_pane_g2_ParamLimits

0xcd59,	// (0x00069eb6) list_single_fp_cale_pane_g2

0x0002,

0x0392,	// (0x0005d4ef) list_single_fp_cale_pane_g_ParamLimits

0x0392,	// (0x0005d4ef) list_single_fp_cale_pane_g

0xcd72,	// (0x00069ecf) list_single_fp_cale_pane_t1_ParamLimits

0xcd72,	// (0x00069ecf) list_single_fp_cale_pane_t1

0xcd84,	// (0x00069ee1) list_single_fp_cale_pane_t2_ParamLimits

0xcd84,	// (0x00069ee1) list_single_fp_cale_pane_t2

0x0001,

0x0399,	// (0x0005d4f6) list_single_fp_cale_pane_t_ParamLimits

0x0399,	// (0x0005d4f6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0f07,	// (0x0005e064) main_dialer_pane

0x9b88,	// (0x00066ce5) aid_cell_size_keypad

0x9b88,	// (0x00066ce5) dialer_ne_pane

0x9b88,	// (0x00066ce5) grid_dialer_command_1_pane

0x9b88,	// (0x00066ce5) grid_dialer_command_2_pane

0x9b88,	// (0x00066ce5) grid_dialer_keypad_pane

0xc5ff,	// (0x0006975c) bg_popup_call_pane_cp06_ParamLimits

0xc5ff,	// (0x0006975c) bg_popup_call_pane_cp06

0xc5ff,	// (0x0006975c) dialer_ne_clear_pane_ParamLimits

0xc5ff,	// (0x0006975c) dialer_ne_clear_pane

0xa971,	// (0x00067ace) dialer_ne_pane_g1

0xb285,	// (0x000683e2) dialer_ne_pane_t1_ParamLimits

0xb285,	// (0x000683e2) dialer_ne_pane_t1

0xcf7e,	// (0x0006a0db) dialer_ne_pane_t2_ParamLimits

0xcf7e,	// (0x0006a0db) dialer_ne_pane_t2

0x49f1,	// (0x00061b4e) dialer_ne_pane_t3_ParamLimits

0x49f1,	// (0x00061b4e) dialer_ne_pane_t3

0x0002,

0xf634,	// (0x0006c791) dialer_ne_pane_t_ParamLimits

0xf634,	// (0x0006c791) dialer_ne_pane_t

0x49f1,	// (0x00061b4e) dialer_ne_pane_t3_copy1_ParamLimits

0x49f1,	// (0x00061b4e) dialer_ne_pane_t3_copy1

0xcdb7,	// (0x00069f14) cell_dialer_keypad_pane_ParamLimits

0xcdb7,	// (0x00069f14) cell_dialer_keypad_pane

0xa1e1,	// (0x0006733e) cell_dialer_command_1_pane_ParamLimits

0xa1e1,	// (0x0006733e) cell_dialer_command_1_pane

0xcdce,	// (0x00069f2b) cell_dialer_command_2_pane_ParamLimits

0xcdce,	// (0x00069f2b) cell_dialer_command_2_pane

0xa1e1,	// (0x0006733e) bg_button_pane_cp02_ParamLimits

0xa1e1,	// (0x0006733e) bg_button_pane_cp02

0xa6a8,	// (0x00067805) cell_dialer_keypad_pane_g1_ParamLimits

0xa6a8,	// (0x00067805) cell_dialer_keypad_pane_g1

0xa1e1,	// (0x0006733e) bg_button_pane_cp03_ParamLimits

0xa1e1,	// (0x0006733e) bg_button_pane_cp03

0xa6a8,	// (0x00067805) cell_dialer_command_1_pane_g1_ParamLimits

0xa6a8,	// (0x00067805) cell_dialer_command_1_pane_g1

0x9b88,	// (0x00066ce5) bg_button_pane_cp04

0xa971,	// (0x00067ace) cell_dialer_command_2_pane_g1

0x9b88,	// (0x00066ce5) bg_button_pane_cp06

0xa971,	// (0x00067ace) dialer_ne_clear_pane_g1

0x30bb,	// (0x00060218) navi_pane_g2

0x30e9,	// (0x00060246) navi_pane_g3

0x0002,

0xf339,	// (0x0006c496) navi_pane_g

0x3114,	// (0x00060271) navi_pane_mv_g2

0x313b,	// (0x00060298) navi_pane_mv_g5

0x3143,	// (0x000602a0) navi_pane_mv_t1

0xa71a,	// (0x00067877) main_clock2_pane

0xa69a,	// (0x000677f7) main_clock2_list_pane_ParamLimits

0xa69a,	// (0x000677f7) main_clock2_list_pane

0x4a66,	// (0x00061bc3) main_clock2_pane_t1_ParamLimits

0x4a66,	// (0x00061bc3) main_clock2_pane_t1

0x4a94,	// (0x00061bf1) main_clock2_pane_t2_ParamLimits

0x4a94,	// (0x00061bf1) main_clock2_pane_t2

0x0004,

0xf63b,	// (0x0006c798) main_clock2_pane_t_ParamLimits

0xf63b,	// (0x0006c798) main_clock2_pane_t

0x4af9,	// (0x00061c56) popup_clock_analogue_window_cp03_ParamLimits

0x4af9,	// (0x00061c56) popup_clock_analogue_window_cp03

0x4b17,	// (0x00061c74) popup_clock_digital_window_cp02_ParamLimits

0x4b17,	// (0x00061c74) popup_clock_digital_window_cp02

0x4b8c,	// (0x00061ce9) main_clock2_list_single_pane_ParamLimits

0x4b8c,	// (0x00061ce9) main_clock2_list_single_pane

0xa94f,	// (0x00067aac) list_highlight_pane_cp05

0xce0f,	// (0x00069f6c) main_clock2_list_single_pane_t1

0x1cc9,	// (0x0005ee26) popup_toolbar_window_cp04_ParamLimits

0xa6b6,	// (0x00067813) camera2_autofocus_pane_g2_ParamLimits

0xa6b6,	// (0x00067813) camera2_autofocus_pane_g2

0xa6b6,	// (0x00067813) camera2_autofocus_pane_g3_ParamLimits

0xa6b6,	// (0x00067813) camera2_autofocus_pane_g3

0xa6b6,	// (0x00067813) camera2_autofocus_pane_g4_ParamLimits

0xa6b6,	// (0x00067813) camera2_autofocus_pane_g4

0xa6b6,	// (0x00067813) camera2_autofocus_pane_g5_ParamLimits

0xa6b6,	// (0x00067813) camera2_autofocus_pane_g5

0x0004,

0xf590,	// (0x0006c6ed) camera2_autofocus_pane_g_ParamLimits

0xf590,	// (0x0006c6ed) camera2_autofocus_pane_g

0x4366,	// (0x000614c3) camera2_autofocus_pane_cp_g2

0x436e,	// (0x000614cb) camera2_autofocus_pane_cp_g3

0x4376,	// (0x000614d3) camera2_autofocus_pane_cp_g4

0x437e,	// (0x000614db) camera2_autofocus_pane_cp_g5

0x0004,

0xf5f6,	// (0x0006c753) camera2_autofocus_pane_cp_g

0x9b88,	// (0x00066ce5) popup_dialer_spcha_window

0x9b88,	// (0x00066ce5) bg_popup_sub_pane_cp07

0x9b88,	// (0x00066ce5) list_spcha_pane

0xce1d,	// (0x00069f7a) list_single_spcha_pane_ParamLimits

0xce1d,	// (0x00069f7a) list_single_spcha_pane

0x9b88,	// (0x00066ce5) list_highlight_pane_cp06

0xaeee,	// (0x0006804b) list_single_spcha_pane_t1

0xc0f0,	// (0x0006924d) popup_call2_audio_out_window_g4_ParamLimits

0xc0f0,	// (0x0006924d) popup_call2_audio_out_window_g4

0x0f07,	// (0x0005e064) main_imed2_pane

0x3d31,	// (0x00060e8e) popup_imed_adjust2_window

0x3d44,	// (0x00060ea1) popup_imed_trans_window_ParamLimits

0x3d44,	// (0x00060ea1) popup_imed_trans_window

0xc891,	// (0x000699ee) popup_blid_sat_info2_window_t1

0xc89f,	// (0x000699fc) popup_blid_sat_info2_window_t2

0x000a,

0x0283,	// (0x0005d3e0) popup_blid_sat_info2_window_t

0x4c43,	// (0x00061da0) aid_size_cell_colour_35

0x4c5d,	// (0x00061dba) aid_size_cell_colour_112

0x4c74,	// (0x00061dd1) aid_size_cell_effect

0xa1e1,	// (0x0006733e) bg_tb_trans_pane_cp02

0xaf4c,	// (0x000680a9) heading_imed_pane

0x4c8e,	// (0x00061deb) listscroll_imed_pane

0xce2f,	// (0x00069f8c) heading_imed_pane_g1

0xce37,	// (0x00069f94) heading_imed_pane_t1

0xce45,	// (0x00069fa2) grid_imed_colour_35_pane_ParamLimits

0xce45,	// (0x00069fa2) grid_imed_colour_35_pane

0x4c9a,	// (0x00061df7) grid_imed_effect_pane

0xce61,	// (0x00069fbe) list_imed_aspect_pane

0x4caa,	// (0x00061e07) scroll_pane_cp027_ParamLimits

0x4caa,	// (0x00061e07) scroll_pane_cp027

0x4cb6,	// (0x00061e13) cell_imed_effect_pane_ParamLimits

0x4cb6,	// (0x00061e13) cell_imed_effect_pane

0xce69,	// (0x00069fc6) cell_imed_colour_pane_ParamLimits

0xce69,	// (0x00069fc6) cell_imed_colour_pane

0xceb3,	// (0x0006a010) cell_imed_colour_pane_g1_ParamLimits

0xceb3,	// (0x0006a010) cell_imed_colour_pane_g1

0xcec4,	// (0x0006a021) hgihlgiht_grid_pane_cp016_ParamLimits

0xcec4,	// (0x0006a021) hgihlgiht_grid_pane_cp016

0x4cd2,	// (0x00061e2f) cell_imed_effect_pane_g1

0x4cda,	// (0x00061e37) grid_highlight_pane_cp017

0xced5,	// (0x0006a032) list_imed_single_pane_ParamLimits

0xced5,	// (0x0006a032) list_imed_single_pane

0x9b88,	// (0x00066ce5) list_highlight_pane_cp07

0xcee9,	// (0x0006a046) list_imed_aspect_pane_comp1_t1

0xb584,	// (0x000686e1) bg_tb_trans_pane_cp05

0xcf0b,	// (0x0006a068) popup_imed_adjust2_window_g1

0xcf32,	// (0x0006a08f) popup_imed_adjust2_window_t1

0xcf4a,	// (0x0006a0a7) slider_imed_adjust_pane

0xcf5e,	// (0x0006a0bb) slider_imed_adjust_pane_g1

0xcf6e,	// (0x0006a0cb) slider_imed_adjust_pane_g2

0xcf9b,	// (0x0006a0f8) slider_imed_adjust_pane_g3

0xcfac,	// (0x0006a109) slider_imed_adjust_pane_g4

0x0003,

0xf651,	// (0x0006c7ae) slider_imed_adjust_pane_g

0x4ce3,	// (0x00061e40) aid_size_cell_clipart2

0xcfbd,	// (0x0006a11a) grid_imed_clipart_pane

0xcfc7,	// (0x0006a124) scroll_pane_cp031

0x4cef,	// (0x00061e4c) cell_imed_clipart_pane_ParamLimits

0x4cef,	// (0x00061e4c) cell_imed_clipart_pane

0x4d0d,	// (0x00061e6a) cell_imed_clipart_pane_g1

0x9b88,	// (0x00066ce5) grid_highlight_pane_cp014

0x4a48,	// (0x00061ba5) main_clock2_pane_g1_ParamLimits

0x4a48,	// (0x00061ba5) main_clock2_pane_g1

0x4b33,	// (0x00061c90) aid_call2_pane_cp10

0x4b45,	// (0x00061ca2) aid_call_pane_cp10

0xb1f8,	// (0x00068355) popup_clock_analogue_window_cp10_g1

0xb1f8,	// (0x00068355) popup_clock_analogue_window_cp10_g2

0x4b57,	// (0x00061cb4) popup_clock_analogue_window_cp10_g3

0x4b57,	// (0x00061cb4) popup_clock_analogue_window_cp10_g4

0xb1f8,	// (0x00068355) popup_clock_analogue_window_cp10_g5

0x0004,

0xf646,	// (0x0006c7a3) popup_clock_analogue_window_cp10_g

0x4b6d,	// (0x00061cca) popup_clock_analogue_window_cp10_t1

0x4b9e,	// (0x00061cfb) clock_digital_number_pane_cp10_ParamLimits

0x4b9e,	// (0x00061cfb) clock_digital_number_pane_cp10

0x4bb8,	// (0x00061d15) clock_digital_number_pane_cp11_ParamLimits

0x4bb8,	// (0x00061d15) clock_digital_number_pane_cp11

0x4bd2,	// (0x00061d2f) clock_digital_number_pane_cp12_ParamLimits

0x4bd2,	// (0x00061d2f) clock_digital_number_pane_cp12

0x4bec,	// (0x00061d49) clock_digital_number_pane_cp13_ParamLimits

0x4bec,	// (0x00061d49) clock_digital_number_pane_cp13

0x4c08,	// (0x00061d65) clock_digital_separator_pane_cp10_ParamLimits

0x4c08,	// (0x00061d65) clock_digital_separator_pane_cp10

0x4c22,	// (0x00061d7f) popup_clock_digital_window_cp02_t1_ParamLimits

0x4c22,	// (0x00061d7f) popup_clock_digital_window_cp02_t1

0xa625,	// (0x00067782) clock_digital_number_pane_cp10_g1

0xa625,	// (0x00067782) clock_digital_number_pane_cp10_g2

0x0001,

0xf65a,	// (0x0006c7b7) clock_digital_number_pane_cp10_g

0xa625,	// (0x00067782) clock_digital_separator_pane_cp10_g1

0xa625,	// (0x00067782) clock_digital_separator_pane_g2_cp10

0xb2a7,	// (0x00068404) navi_pane_vded_g4

0xb2b0,	// (0x0006840d) navi_pane_vded_g5

0xb2b9,	// (0x00068416) navi_pane_vded_t1

0x0f07,	// (0x0005e064) main_vded_pane

0x4d16,	// (0x00061e73) main_vded_pane_g1

0x4d22,	// (0x00061e7f) main_vded_pane_g2

0x4d2c,	// (0x00061e89) main_vded_pane_g3

0x0002,

0xf65f,	// (0x0006c7bc) main_vded_pane_g

0x4d36,	// (0x00061e93) main_vded_pane_t1

0x4d44,	// (0x00061ea1) main_vded_pane_t2

0x0001,

0xf666,	// (0x0006c7c3) main_vded_pane_t

0x4d52,	// (0x00061eaf) vded_slider_pane

0x4d5c,	// (0x00061eb9) vded_video_pane

0xcfcf,	// (0x0006a12c) vded_video_pane_g1

0x4d68,	// (0x00061ec5) vded_video_pane_g2

0xa971,	// (0x00067ace) vded_video_pane_g3

0x0002,

0xf66b,	// (0x0006c7c8) vded_video_pane_g

0xcfd9,	// (0x0006a136) vded_slider_pane_g1

0xc7bc,	// (0x00069919) vded_slider_pane_g2

0xcfe2,	// (0x0006a13f) vded_slider_pane_g3

0xcfeb,	// (0x0006a148) vded_slider_pane_g4

0xcff4,	// (0x0006a151) vded_slider_pane_g5

0x0004,

0xf672,	// (0x0006c7cf) vded_slider_pane_g

0x4941,	// (0x00061a9e) mup3_rocker_pane_ParamLimits

0x4941,	// (0x00061a9e) mup3_rocker_pane

0x4d71,	// (0x00061ece) mup3_control_keys_pane_g1

0x4d79,	// (0x00061ed6) mup3_control_keys_pane_g2

0x4d81,	// (0x00061ede) mup3_control_keys_pane_g3

0x4d89,	// (0x00061ee6) mup3_control_keys_pane_g4

0x0003,

0xf67d,	// (0x0006c7da) mup3_control_keys_pane_g

0x0ebb,	// (0x0005e018) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0ebb,	// (0x0005e018) popup_toolbar2_fixed_window_cp01

0x495d,	// (0x00061aba) popup_toolbar2_fixed_window_cp02_ParamLimits

0x495d,	// (0x00061aba) popup_toolbar2_fixed_window_cp02

0xba87,	// (0x00068be4) popup_call2_audio_second_window_t4_ParamLimits

0xba87,	// (0x00068be4) popup_call2_audio_second_window_t4

0xbfb5,	// (0x00069112) popup_call2_audio_first_window_t6_ParamLimits

0xbfb5,	// (0x00069112) popup_call2_audio_first_window_t6

0xc1f3,	// (0x00069350) popup_call2_audio_out_window_t6_ParamLimits

0xc1f3,	// (0x00069350) popup_call2_audio_out_window_t6

0x0f07,	// (0x0005e064) main_vitu_pane

0xa69a,	// (0x000677f7) aid_size_cell_itu_ParamLimits

0xa69a,	// (0x000677f7) aid_size_cell_itu

0xa69a,	// (0x000677f7) bg_popup_window_pane_cp08_ParamLimits

0xa69a,	// (0x000677f7) bg_popup_window_pane_cp08

0xa69a,	// (0x000677f7) field_vitu_entry_pane_ParamLimits

0xa69a,	// (0x000677f7) field_vitu_entry_pane

0xa69a,	// (0x000677f7) grid_vitu_function_pane_ParamLimits

0xa69a,	// (0x000677f7) grid_vitu_function_pane

0xa69a,	// (0x000677f7) grid_vitu_itu_pane_ParamLimits

0xa69a,	// (0x000677f7) grid_vitu_itu_pane

0xa69a,	// (0x000677f7) cell_vitu_itu_pane_ParamLimits

0xa69a,	// (0x000677f7) cell_vitu_itu_pane

0xa69a,	// (0x000677f7) cell_vitu_function_pane_ParamLimits

0xa69a,	// (0x000677f7) cell_vitu_function_pane

0xa1e1,	// (0x0006733e) bg_popup_sub_pane_cp08_ParamLimits

0xa1e1,	// (0x0006733e) bg_popup_sub_pane_cp08

0xa98b,	// (0x00067ae8) field_vitu_entry_pane_t1_ParamLimits

0xa98b,	// (0x00067ae8) field_vitu_entry_pane_t1

0xcf7e,	// (0x0006a0db) field_vitu_entry_pane_t2_ParamLimits

0xcf7e,	// (0x0006a0db) field_vitu_entry_pane_t2

0x0001,

0xf686,	// (0x0006c7e3) field_vitu_entry_pane_t_ParamLimits

0xf686,	// (0x0006c7e3) field_vitu_entry_pane_t

0xc5ff,	// (0x0006975c) bg_button_pane_cp05_ParamLimits

0xc5ff,	// (0x0006975c) bg_button_pane_cp05

0xcffd,	// (0x0006a15a) cell_vitu_itu_pane_g1

0xb592,	// (0x000686ef) cell_vitu_itu_pane_t1_ParamLimits

0xb592,	// (0x000686ef) cell_vitu_itu_pane_t1

0xb592,	// (0x000686ef) cell_vitu_itu_pane_t2_ParamLimits

0xb592,	// (0x000686ef) cell_vitu_itu_pane_t2

0x0002,

0xf68b,	// (0x0006c7e8) cell_vitu_itu_pane_t_ParamLimits

0xf68b,	// (0x0006c7e8) cell_vitu_itu_pane_t

0x9b88,	// (0x00066ce5) bg_button_pane_cp07

0xa971,	// (0x00067ace) cell_vitu_function_pane_g1

0x1004,	// (0x0005e161) main_calc_pane_g1

0x0d10,	// (0x0005de6d) aid_visual_content_pane

0x0f07,	// (0x0005e064) main_vradio_pane

0xa6b6,	// (0x00067813) main_vradio_pane_g1_ParamLimits

0xa6b6,	// (0x00067813) main_vradio_pane_g1

0xa6b6,	// (0x00067813) main_vradio_pane_g2_ParamLimits

0xa6b6,	// (0x00067813) main_vradio_pane_g2

0x0001,

0xf692,	// (0x0006c7ef) main_vradio_pane_g_ParamLimits

0xf692,	// (0x0006c7ef) main_vradio_pane_g

0xb285,	// (0x000683e2) main_vradio_pane_t1_ParamLimits

0xb285,	// (0x000683e2) main_vradio_pane_t1

0xb285,	// (0x000683e2) main_vradio_pane_t2_ParamLimits

0xb285,	// (0x000683e2) main_vradio_pane_t2

0xb285,	// (0x000683e2) main_vradio_pane_t3_ParamLimits

0xb285,	// (0x000683e2) main_vradio_pane_t3

0x0002,

0xf697,	// (0x0006c7f4) main_vradio_pane_t_ParamLimits

0xf697,	// (0x0006c7f4) main_vradio_pane_t

0xa69a,	// (0x000677f7) vradio_rocker_control_pane_ParamLimits

0xa69a,	// (0x000677f7) vradio_rocker_control_pane

0xa69a,	// (0x000677f7) vradio_station_info_pane_ParamLimits

0xa69a,	// (0x000677f7) vradio_station_info_pane

0xa1e1,	// (0x0006733e) vradio_frequency_info_pane_ParamLimits

0xa1e1,	// (0x0006733e) vradio_frequency_info_pane

0xa971,	// (0x00067ace) vradio_station_info_pane_g1

0xb592,	// (0x000686ef) vradio_station_info_pane_t1_ParamLimits

0xb592,	// (0x000686ef) vradio_station_info_pane_t1

0xb285,	// (0x000683e2) vradio_station_info_pane_t2_ParamLimits

0xb285,	// (0x000683e2) vradio_station_info_pane_t2

0x0001,

0xf69e,	// (0x0006c7fb) vradio_station_info_pane_t_ParamLimits

0xf69e,	// (0x0006c7fb) vradio_station_info_pane_t

0x9b88,	// (0x00066ce5) vradio_tuning_pane

0x4d99,	// (0x00061ef6) vradio_rocker_control_pane_g1

0xd019,	// (0x0006a176) vradio_rocker_control_pane_g2

0x4da1,	// (0x00061efe) vradio_rocker_control_pane_g3

0x4da9,	// (0x00061f06) vradio_rocker_control_pane_g4

0x4db3,	// (0x00061f10) vradio_rocker_control_pane_g5

0x0004,

0xf6a3,	// (0x0006c800) vradio_rocker_control_pane_g

0xa971,	// (0x00067ace) vradio_frequency_info_pane_g1

0xa98b,	// (0x00067ae8) vradio_frequency_info_pane_t1_ParamLimits

0xa98b,	// (0x00067ae8) vradio_frequency_info_pane_t1

0x4dbb,	// (0x00061f18) vradio_tuning_pane_g1

0x4dc8,	// (0x00061f25) vradio_tuning_pane_t1

0x0d59,	// (0x0005deb6) area_side_right_pane_ParamLimits

0x0d59,	// (0x0005deb6) area_side_right_pane

0xc5e5,	// (0x00069742) status_small_pane_g1

0xc5ed,	// (0x0006974a) status_small_pane_g2

0xc5f6,	// (0x00069753) status_small_pane_g3

0xc60d,	// (0x0006976a) status_small_pane_g4

0x0003,

0xf4c6,	// (0x0006c623) status_small_pane_g

0xc616,	// (0x00069773) status_small_pane_t1

0x0f07,	// (0x0005e064) main_video3_pane

0xd021,	// (0x0006a17e) cams_zoom_vslider_pane

0xd029,	// (0x0006a186) image3_wide_pane_ParamLimits

0xd029,	// (0x0006a186) image3_wide_pane

0xd043,	// (0x0006a1a0) image3_wide_small_pane

0xd04f,	// (0x0006a1ac) main_video3_pane_g1_ParamLimits

0xd04f,	// (0x0006a1ac) main_video3_pane_g1

0xd06b,	// (0x0006a1c8) main_video3_pane_g2_ParamLimits

0xd06b,	// (0x0006a1c8) main_video3_pane_g2

0x0001,

0x0424,	// (0x0005d581) main_video3_pane_g_ParamLimits

0x0424,	// (0x0005d581) main_video3_pane_g

0xd087,	// (0x0006a1e4) main_video3_pane_t1_ParamLimits

0xd087,	// (0x0006a1e4) main_video3_pane_t1

0xd0b2,	// (0x0006a20f) main_video3_pane_t2_ParamLimits

0xd0b2,	// (0x0006a20f) main_video3_pane_t2

0xd0df,	// (0x0006a23c) main_video3_pane_t3_ParamLimits

0xd0df,	// (0x0006a23c) main_video3_pane_t3

0x0002,

0x0429,	// (0x0005d586) main_video3_pane_t_ParamLimits

0x0429,	// (0x0005d586) main_video3_pane_t

0xd10c,	// (0x0006a269) cams_zoom_vslider_pane_g1

0xd115,	// (0x0006a272) cams_zoom_vslider_pane_g2

0x0001,

0x0430,	// (0x0005d58d) cams_zoom_vslider_pane_g

0xd11d,	// (0x0006a27a) small_slider_vertical_pane

0xa971,	// (0x00067ace) small_slider_vertical_pane_g1

0xa971,	// (0x00067ace) small_slider_vertical_pane_g2

0xd125,	// (0x0006a282) small_slider_vertical_pane_g3

0x0002,

0xf6ae,	// (0x0006c80b) small_slider_vertical_pane_g

0x0f07,	// (0x0005e064) main_hwr_training_pane

0xd12e,	// (0x0006a28b) hwr_training_instruct_pane_ParamLimits

0xd12e,	// (0x0006a28b) hwr_training_instruct_pane

0x4dd7,	// (0x00061f34) hwr_training_navi_pane_ParamLimits

0x4dd7,	// (0x00061f34) hwr_training_navi_pane

0x4df1,	// (0x00061f4e) hwr_training_write_pane_ParamLimits

0x4df1,	// (0x00061f4e) hwr_training_write_pane

0x9b88,	// (0x00066ce5) bg_frame_shadow_pane

0xd165,	// (0x0006a2c2) hwr_training_write_pane_g1

0xd16d,	// (0x0006a2ca) hwr_training_write_pane_g2

0xd175,	// (0x0006a2d2) hwr_training_write_pane_g3

0xd17d,	// (0x0006a2da) hwr_training_write_pane_g4

0xd185,	// (0x0006a2e2) hwr_training_write_pane_g5

0xd18d,	// (0x0006a2ea) hwr_training_write_pane_g6

0xd195,	// (0x0006a2f2) hwr_training_write_pane_g7

0x0006,

0x043c,	// (0x0005d599) hwr_training_write_pane_g

0x4e29,	// (0x00061f86) hwr_training_navi_pane_g1_ParamLimits

0x4e29,	// (0x00061f86) hwr_training_navi_pane_g1

0x4e3b,	// (0x00061f98) hwr_training_navi_pane_g2_ParamLimits

0x4e3b,	// (0x00061f98) hwr_training_navi_pane_g2

0x4e4d,	// (0x00061faa) hwr_training_navi_pane_g3_ParamLimits

0x4e4d,	// (0x00061faa) hwr_training_navi_pane_g3

0x4e5d,	// (0x00061fba) hwr_training_navi_pane_g4_ParamLimits

0x4e5d,	// (0x00061fba) hwr_training_navi_pane_g4

0x0004,

0xf6b5,	// (0x0006c812) hwr_training_navi_pane_g_ParamLimits

0xf6b5,	// (0x0006c812) hwr_training_navi_pane_g

0x4e77,	// (0x00061fd4) hwr_training_navi_pane_t1

0x4e85,	// (0x00061fe2) list_single_hwr_training_instruct_pane_ParamLimits

0x4e85,	// (0x00061fe2) list_single_hwr_training_instruct_pane

0xd19d,	// (0x0006a2fa) list_single_hwr_training_instruct_pane_t1

0xc998,	// (0x00069af5) bg_frame_shadow_pane_g1

0xd1ac,	// (0x0006a309) bg_frame_shadow_pane_g2

0xd1b4,	// (0x0006a311) bg_frame_shadow_pane_g3

0xd1bc,	// (0x0006a319) bg_frame_shadow_pane_g4

0xd1c4,	// (0x0006a321) bg_frame_shadow_pane_g5

0xd1cc,	// (0x0006a329) bg_frame_shadow_pane_g6

0xd1d4,	// (0x0006a331) bg_frame_shadow_pane_g7

0xa7c9,	// (0x00067926) bg_frame_shadow_pane_g8

0x0007,

0xf6c0,	// (0x0006c81d) bg_frame_shadow_pane_g

0x0f07,	// (0x0005e064) main_video_tele_dialer_pane

0x4e9e,	// (0x00061ffb) aid_size_cell_video_keypad_ParamLimits

0x4e9e,	// (0x00061ffb) aid_size_cell_video_keypad

0x4eae,	// (0x0006200b) grid_video_dialer_keypad_pane_ParamLimits

0x4eae,	// (0x0006200b) grid_video_dialer_keypad_pane

0x4ee0,	// (0x0006203d) video_down_pane_cp_ParamLimits

0x4ee0,	// (0x0006203d) video_down_pane_cp

0x4f0a,	// (0x00062067) cell_video_dialer_keypad_pane_ParamLimits

0x4f0a,	// (0x00062067) cell_video_dialer_keypad_pane

0xd1dc,	// (0x0006a339) bg_button_pane_cp08_ParamLimits

0xd1dc,	// (0x0006a339) bg_button_pane_cp08

0x4f21,	// (0x0006207e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x4f21,	// (0x0006207e) cell_video_dialer_keypad_pane_g1

0x4935,	// (0x00061a92) mup3_rocker2_pane_ParamLimits

0x4935,	// (0x00061a92) mup3_rocker2_pane

0xa971,	// (0x00067ace) mup3_rocker2_pane_g1

0x3c95,	// (0x00060df2) main_dialer2_pane

0x0f07,	// (0x0005e064) main_mp4_pane

0x4f7a,	// (0x000620d7) main_mp4_pane_g1_ParamLimits

0x4f7a,	// (0x000620d7) main_mp4_pane_g1

0x4f88,	// (0x000620e5) main_mp4_pane_g2_ParamLimits

0x4f88,	// (0x000620e5) main_mp4_pane_g2

0x4f96,	// (0x000620f3) main_mp4_pane_g3_ParamLimits

0x4f96,	// (0x000620f3) main_mp4_pane_g3

0x4fe9,	// (0x00062146) main_mp4_pane_g4_ParamLimits

0x4fe9,	// (0x00062146) main_mp4_pane_g4

0x5017,	// (0x00062174) main_mp4_pane_g5_ParamLimits

0x5017,	// (0x00062174) main_mp4_pane_g5

0x0007,

0xf6e0,	// (0x0006c83d) main_mp4_pane_g_ParamLimits

0xf6e0,	// (0x0006c83d) main_mp4_pane_g

0x508b,	// (0x000621e8) main_mp4_pane_t1_ParamLimits

0x508b,	// (0x000621e8) main_mp4_pane_t1

0x50e7,	// (0x00062244) main_mp4_pane_t2_ParamLimits

0x50e7,	// (0x00062244) main_mp4_pane_t2

0xd1e8,	// (0x0006a345) main_mp4_pane_t3_ParamLimits

0xd1e8,	// (0x0006a345) main_mp4_pane_t3

0x5139,	// (0x00062296) main_mp4_pane_t4_ParamLimits

0x5139,	// (0x00062296) main_mp4_pane_t4

0x0003,

0xf6f1,	// (0x0006c84e) main_mp4_pane_t_ParamLimits

0xf6f1,	// (0x0006c84e) main_mp4_pane_t

0x5179,	// (0x000622d6) mp4_progress_pane_ParamLimits

0x5179,	// (0x000622d6) mp4_progress_pane

0x51c3,	// (0x00062320) mp4_rocker_pane_ParamLimits

0x51c3,	// (0x00062320) mp4_rocker_pane

0xd216,	// (0x0006a373) mp4_progress_pane_t1

0xd22f,	// (0x0006a38c) mp4_progress_pane_t2

0x0001,

0x0490,	// (0x0005d5ed) mp4_progress_pane_t

0xd248,	// (0x0006a3a5) mup_progress_pane_cp04

0xd8f5,	// (0x0006aa52) mp4_rocker_pane_g1

0x51e5,	// (0x00062342) aid_cell_size_keypad2_ParamLimits

0x51e5,	// (0x00062342) aid_cell_size_keypad2

0x51f5,	// (0x00062352) dialer2_ne_pane_ParamLimits

0x51f5,	// (0x00062352) dialer2_ne_pane

0x5201,	// (0x0006235e) grid_dialer2_keypad_pane_ParamLimits

0x5201,	// (0x0006235e) grid_dialer2_keypad_pane

0xcc37,	// (0x00069d94) bg_popup_call_pane_cp07_ParamLimits

0xcc37,	// (0x00069d94) bg_popup_call_pane_cp07

0x520f,	// (0x0006236c) dialer2_ne_pane_t1_ParamLimits

0x520f,	// (0x0006236c) dialer2_ne_pane_t1

0x5234,	// (0x00062391) cell_dialer2_keypad_pane_ParamLimits

0x5234,	// (0x00062391) cell_dialer2_keypad_pane

0xd26d,	// (0x0006a3ca) bg_button_pane_pane_cp04_ParamLimits

0xd26d,	// (0x0006a3ca) bg_button_pane_pane_cp04

0x524b,	// (0x000623a8) cell_dialer2_keypad_pane_g1_ParamLimits

0x524b,	// (0x000623a8) cell_dialer2_keypad_pane_g1

0x1b9b,	// (0x0005ecf8) aid_placing_vt_set_content_ParamLimits

0x1b9b,	// (0x0005ecf8) aid_placing_vt_set_content

0x1bc3,	// (0x0005ed20) aid_placing_vt_set_title_ParamLimits

0x1bc3,	// (0x0005ed20) aid_placing_vt_set_title

0x0f07,	// (0x0005e064) main_image3_pane

0x52e5,	// (0x00062442) area_side_right_pane_cp01_ParamLimits

0x52e5,	// (0x00062442) area_side_right_pane_cp01

0x5314,	// (0x00062471) main_image3_pane_g1_ParamLimits

0x5314,	// (0x00062471) main_image3_pane_g1

0x5322,	// (0x0006247f) main_image3_pane_g2_ParamLimits

0x5322,	// (0x0006247f) main_image3_pane_g2

0x533b,	// (0x00062498) main_image3_pane_g3_ParamLimits

0x533b,	// (0x00062498) main_image3_pane_g3

0x5354,	// (0x000624b1) main_image3_pane_g4_ParamLimits

0x5354,	// (0x000624b1) main_image3_pane_g4

0x0003,

0xf704,	// (0x0006c861) main_image3_pane_g_ParamLimits

0xf704,	// (0x0006c861) main_image3_pane_g

0x536d,	// (0x000624ca) main_image3_pane_t1_ParamLimits

0x536d,	// (0x000624ca) main_image3_pane_t1

0x5392,	// (0x000624ef) main_image3_pane_t2_ParamLimits

0x5392,	// (0x000624ef) main_image3_pane_t2

0x53b1,	// (0x0006250e) main_image3_pane_t3_ParamLimits

0x53b1,	// (0x0006250e) main_image3_pane_t3

0x0003,

0xf70d,	// (0x0006c86a) main_image3_pane_t_ParamLimits

0xf70d,	// (0x0006c86a) main_image3_pane_t

0xa69a,	// (0x000677f7) grid_sctrl_middle_pane_cp01_ParamLimits

0xa69a,	// (0x000677f7) grid_sctrl_middle_pane_cp01

0x5412,	// (0x0006256f) cell_sctrl_middle_pane_cp01_ParamLimits

0x5412,	// (0x0006256f) cell_sctrl_middle_pane_cp01

0x5423,	// (0x00062580) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5423,	// (0x00062580) cell_sctrl_middle_pane_cp01_g1

0x0f07,	// (0x0005e064) main_call4_pane

0x5430,	// (0x0006258d) aid_size_button_call4_ParamLimits

0x5430,	// (0x0006258d) aid_size_button_call4

0x5466,	// (0x000625c3) call4_windows_pane_ParamLimits

0x5466,	// (0x000625c3) call4_windows_pane

0x547b,	// (0x000625d8) grid_call4_button_pane_ParamLimits

0x547b,	// (0x000625d8) grid_call4_button_pane

0x54ab,	// (0x00062608) call4_windows_conf_pane

0x54c4,	// (0x00062621) popup_call4_audio_first_window_ParamLimits

0x54c4,	// (0x00062621) popup_call4_audio_first_window

0x5514,	// (0x00062671) popup_call4_audio_second_window_ParamLimits

0x5514,	// (0x00062671) popup_call4_audio_second_window

0x552d,	// (0x0006268a) popup_call4_audio_wait_window_ParamLimits

0x552d,	// (0x0006268a) popup_call4_audio_wait_window

0x553b,	// (0x00062698) cell_call4_button_pane_ParamLimits

0x553b,	// (0x00062698) cell_call4_button_pane

0x555e,	// (0x000626bb) bg_button_pane_cp09_ParamLimits

0x555e,	// (0x000626bb) bg_button_pane_cp09

0x556a,	// (0x000626c7) cell_call4_button_pane_g1_ParamLimits

0x556a,	// (0x000626c7) cell_call4_button_pane_g1

0x5577,	// (0x000626d4) cell_call4_button_pane_t1_ParamLimits

0x5577,	// (0x000626d4) cell_call4_button_pane_t1

0xd281,	// (0x0006a3de) popup_call4_audio_conf_window_ParamLimits

0xd281,	// (0x0006a3de) popup_call4_audio_conf_window

0x496a,	// (0x00061ac7) mup3_progress_pane_t1_ParamLimits

0x4988,	// (0x00061ae5) mup3_progress_pane_t2_ParamLimits

0xcce0,	// (0x00069e3d) mup3_progress_pane_t3_ParamLimits

0xf61f,	// (0x0006c77c) mup3_progress_pane_t_ParamLimits

0xccfd,	// (0x00069e5a) mup_progress_pane_cp03_ParamLimits

0x4d91,	// (0x00061eee) mup3_control_keys_pane_g4_copy1

0x51a7,	// (0x00062304) mp4_rocker2_pane_ParamLimits

0x51a7,	// (0x00062304) mp4_rocker2_pane

0xd2a3,	// (0x0006a400) mp4_rocker2_pane_g1

0xd29b,	// (0x0006a3f8) mp4_rocker2_pane_g2

0x55bb,	// (0x00062718) mp4_rocker2_pane_g3

0x55c3,	// (0x00062720) mp4_rocker2_pane_g4

0x55cb,	// (0x00062728) mp4_rocker2_pane_g5

0x0004,

0xf716,	// (0x0006c873) mp4_rocker2_pane_g

0x0f07,	// (0x0005e064) main_camera4_pane

0x0f07,	// (0x0005e064) main_video4_pane

0x4ebc,	// (0x00062019) main_video_tele_dialer_pane_t1_ParamLimits

0x4ebc,	// (0x00062019) main_video_tele_dialer_pane_t1

0x4ece,	// (0x0006202b) main_video_tele_dialer_pane_t2_ParamLimits

0x4ece,	// (0x0006202b) main_video_tele_dialer_pane_t2

0x0001,

0xf6d1,	// (0x0006c82e) main_video_tele_dialer_pane_t_ParamLimits

0xf6d1,	// (0x0006c82e) main_video_tele_dialer_pane_t

0x55eb,	// (0x00062748) cam4_autofocus_pane_ParamLimits

0x55eb,	// (0x00062748) cam4_autofocus_pane

0x5603,	// (0x00062760) cam4_image_uncrop_pane_ParamLimits

0x5603,	// (0x00062760) cam4_image_uncrop_pane

0x561c,	// (0x00062779) cam4_indicators_pane_ParamLimits

0x561c,	// (0x00062779) cam4_indicators_pane

0x5638,	// (0x00062795) main_camera4_pane_g1_ParamLimits

0x5638,	// (0x00062795) main_camera4_pane_g1

0x5644,	// (0x000627a1) main_camera4_pane_g2_ParamLimits

0x5644,	// (0x000627a1) main_camera4_pane_g2

0x5644,	// (0x000627a1) main_camera4_pane_g3_ParamLimits

0x5644,	// (0x000627a1) main_camera4_pane_g3

0x5650,	// (0x000627ad) main_camera4_pane_g4_ParamLimits

0x5650,	// (0x000627ad) main_camera4_pane_g4

0x565c,	// (0x000627b9) main_camera4_pane_g5_ParamLimits

0x565c,	// (0x000627b9) main_camera4_pane_g5

0x0005,

0xf721,	// (0x0006c87e) main_camera4_pane_g_ParamLimits

0xf721,	// (0x0006c87e) main_camera4_pane_g

0x5676,	// (0x000627d3) main_camera4_pane_t1_ParamLimits

0x5676,	// (0x000627d3) main_camera4_pane_t1

0xdc47,	// (0x0006ada4) bg_tb_trans_pane_cp06

0x56c8,	// (0x00062825) cam4_indicators_pane_g1

0x56d9,	// (0x00062836) cam4_indicators_pane_g2

0x0002,

0xf73c,	// (0x0006c899) cam4_indicators_pane_g

0x56f1,	// (0x0006284e) cam4_indicators_pane_t1

0x571b,	// (0x00062878) main_video4_pane_g1_ParamLimits

0x571b,	// (0x00062878) main_video4_pane_g1

0x5727,	// (0x00062884) main_video4_pane_g2_ParamLimits

0x5727,	// (0x00062884) main_video4_pane_g2

0x5733,	// (0x00062890) main_video4_pane_g3_ParamLimits

0x5733,	// (0x00062890) main_video4_pane_g3

0x573f,	// (0x0006289c) main_video4_pane_g4_ParamLimits

0x573f,	// (0x0006289c) main_video4_pane_g4

0x0004,

0xf743,	// (0x0006c8a0) main_video4_pane_g_ParamLimits

0xf743,	// (0x0006c8a0) main_video4_pane_g

0x5761,	// (0x000628be) vid4_indicators_pane_ParamLimits

0x5761,	// (0x000628be) vid4_indicators_pane

0x5780,	// (0x000628dd) video4_image_uncrop_cif_pane_ParamLimits

0x5780,	// (0x000628dd) video4_image_uncrop_cif_pane

0x578f,	// (0x000628ec) video4_image_uncrop_nhd_pane_ParamLimits

0x578f,	// (0x000628ec) video4_image_uncrop_nhd_pane

0x5603,	// (0x00062760) video4_image_uncrop_vga_pane_ParamLimits

0x5603,	// (0x00062760) video4_image_uncrop_vga_pane

0x3c87,	// (0x00060de4) bg_tb_trans_pane_cp07

0x57a8,	// (0x00062905) vid4_indicators_pane_g1

0x57be,	// (0x0006291b) vid4_indicators_pane_g2

0x57d2,	// (0x0006292f) vid4_indicators_pane_g3

0x0004,

0xf74e,	// (0x0006c8ab) vid4_indicators_pane_g

0x5803,	// (0x00062960) vid4_indicators_pane_t1

0x581a,	// (0x00062977) cam4_autofocus_pane_g1

0x5822,	// (0x0006297f) cam4_autofocus_pane_g2

0x582a,	// (0x00062987) cam4_autofocus_pane_g3

0x0002,

0xf759,	// (0x0006c8b6) cam4_autofocus_pane_g

0x5832,	// (0x0006298f) cam4_autofocus_pane_g3_copy1

0x4eee,	// (0x0006204b) video_down_pane_cp_t1

0x4efc,	// (0x00062059) video_down_pane_cp_t2

0x0001,

0xf6d6,	// (0x0006c833) video_down_pane_cp_t

0x0eed,	// (0x0005e04a) popup_vitu2_window_ParamLimits

0x0eed,	// (0x0005e04a) popup_vitu2_window

0x583a,	// (0x00062997) aid_size_cell2_itu2_ParamLimits

0x583a,	// (0x00062997) aid_size_cell2_itu2

0x585c,	// (0x000629b9) aid_size_cell_itu2_ParamLimits

0x585c,	// (0x000629b9) aid_size_cell_itu2

0x58a0,	// (0x000629fd) bg_popup_window_pane_cp09_ParamLimits

0x58a0,	// (0x000629fd) bg_popup_window_pane_cp09

0x58ae,	// (0x00062a0b) field_vitu2_entry_pane_ParamLimits

0x58ae,	// (0x00062a0b) field_vitu2_entry_pane

0x58ce,	// (0x00062a2b) grid_vitu2_function_pane_ParamLimits

0x58ce,	// (0x00062a2b) grid_vitu2_function_pane

0x5912,	// (0x00062a6f) grid_vitu2_itu_pane_ParamLimits

0x5912,	// (0x00062a6f) grid_vitu2_itu_pane

0x5988,	// (0x00062ae5) cell_vitu2_itu_pane_ParamLimits

0x5988,	// (0x00062ae5) cell_vitu2_itu_pane

0x59a3,	// (0x00062b00) cell_vitu2_function_pane_ParamLimits

0x59a3,	// (0x00062b00) cell_vitu2_function_pane

0xd2ab,	// (0x0006a408) bg_popup_call_pane_cp08_ParamLimits

0xd2ab,	// (0x0006a408) bg_popup_call_pane_cp08

0xd2c2,	// (0x0006a41f) field_vitu2_entry_pane_g1

0xd2ce,	// (0x0006a42b) field_vitu2_entry_pane_g2

0x0002,

0xf760,	// (0x0006c8bd) field_vitu2_entry_pane_g

0x59e7,	// (0x00062b44) field_vitu2_entry_pane_t1_ParamLimits

0x59e7,	// (0x00062b44) field_vitu2_entry_pane_t1

0xa26f,	// (0x000673cc) field_vitu2_entry_pane_t2_ParamLimits

0xa26f,	// (0x000673cc) field_vitu2_entry_pane_t2

0x0001,

0xf767,	// (0x0006c8c4) field_vitu2_entry_pane_t_ParamLimits

0xf767,	// (0x0006c8c4) field_vitu2_entry_pane_t

0x3fe7,	// (0x00061144) bg_button_pane_cp010_ParamLimits

0x3fe7,	// (0x00061144) bg_button_pane_cp010

0x5a17,	// (0x00062b74) cell_vitu2_itu_pane_g1

0x5a3d,	// (0x00062b9a) cell_vitu2_itu_pane_t1_ParamLimits

0x5a3d,	// (0x00062b9a) cell_vitu2_itu_pane_t1

0x0bf4,	// (0x0005dd51) cell_vitu2_itu_pane_t2_ParamLimits

0x0bf4,	// (0x0005dd51) cell_vitu2_itu_pane_t2

0x0002,

0xf771,	// (0x0006c8ce) cell_vitu2_itu_pane_t_ParamLimits

0xf771,	// (0x0006c8ce) cell_vitu2_itu_pane_t

0x3c87,	// (0x00060de4) bg_button_pane_cp011

0x5a89,	// (0x00062be6) cell_vitu2_function_pane_g1

0x0f07,	// (0x0005e064) main_myfav_hc_pane

0x53f3,	// (0x00062550) popup_image3_note_pane_ParamLimits

0x53f3,	// (0x00062550) popup_image3_note_pane

0x5401,	// (0x0006255e) popup_image3_tool_bar_pane_ParamLimits

0x5401,	// (0x0006255e) popup_image3_tool_bar_pane

0x0c6a,	// (0x0005ddc7) cell_vitu2_itu_pane_t3_ParamLimits

0x0c6a,	// (0x0005ddc7) cell_vitu2_itu_pane_t3

0x9b88,	// (0x00066ce5) bg_popup_trans_pane

0xd2e2,	// (0x0006a43f) grid_image3_tool_bar_pane

0xd2ec,	// (0x0006a449) bg_popup_trans_pane_g1

0xaba9,	// (0x00067d06) bg_popup_trans_pane_g2

0xd2f4,	// (0x0006a451) bg_popup_trans_pane_g3

0xd2fc,	// (0x0006a459) bg_popup_trans_pane_g4

0xd304,	// (0x0006a461) bg_popup_trans_pane_g5

0xd30c,	// (0x0006a469) bg_popup_trans_pane_g6

0xd314,	// (0x0006a471) bg_popup_trans_pane_g7

0xd31c,	// (0x0006a479) bg_popup_trans_pane_g8

0xab89,	// (0x00067ce6) bg_popup_trans_pane_g9

0x0008,

0xf778,	// (0x0006c8d5) bg_popup_trans_pane_g

0xd324,	// (0x0006a481) cell_image3_tool_bar_pane_ParamLimits

0xd324,	// (0x0006a481) cell_image3_tool_bar_pane

0xa971,	// (0x00067ace) cell_image3_tool_bar_pane_g1

0x9b88,	// (0x00066ce5) bg_popup_trans_pane_cp1

0xd33a,	// (0x0006a497) popup_image3_note_pane_t1

0xd348,	// (0x0006a4a5) popup_image3_note_pane_t2

0xd356,	// (0x0006a4b3) popup_image3_note_pane_t3

0x0002,

0xf78b,	// (0x0006c8e8) popup_image3_note_pane_t

0xd366,	// (0x0006a4c3) popup_image3_note_pane_t3_copy1

0x5a9d,	// (0x00062bfa) bg_myfav_hc_instruction_pane_ParamLimits

0x5a9d,	// (0x00062bfa) bg_myfav_hc_instruction_pane

0x5ab5,	// (0x00062c12) cell_myfav_contact_pane_ParamLimits

0x5ab5,	// (0x00062c12) cell_myfav_contact_pane

0x5acf,	// (0x00062c2c) cell_myfav_contact_pane_cp1_ParamLimits

0x5acf,	// (0x00062c2c) cell_myfav_contact_pane_cp1

0x5ae7,	// (0x00062c44) cell_myfav_contact_pane_cp2_ParamLimits

0x5ae7,	// (0x00062c44) cell_myfav_contact_pane_cp2

0x5aff,	// (0x00062c5c) cell_myfav_contact_pane_cp3_ParamLimits

0x5aff,	// (0x00062c5c) cell_myfav_contact_pane_cp3

0x5b16,	// (0x00062c73) cell_myfav_contact_pane_cp4_ParamLimits

0x5b16,	// (0x00062c73) cell_myfav_contact_pane_cp4

0x5b2c,	// (0x00062c89) cell_myfav_contact_pane_cp5_ParamLimits

0x5b2c,	// (0x00062c89) cell_myfav_contact_pane_cp5

0x5b40,	// (0x00062c9d) cell_myfav_contact_pane_cp6_ParamLimits

0x5b40,	// (0x00062c9d) cell_myfav_contact_pane_cp6

0x5b54,	// (0x00062cb1) cell_myfav_contact_pane_cp7_ParamLimits

0x5b54,	// (0x00062cb1) cell_myfav_contact_pane_cp7

0xd374,	// (0x0006a4d1) listscroll_gen_pane_cp05

0x5b6c,	// (0x00062cc9) main_myfav_hc_pane_g1_ParamLimits

0x5b6c,	// (0x00062cc9) main_myfav_hc_pane_g1

0x5b86,	// (0x00062ce3) main_myfav_hc_pane_g2_ParamLimits

0x5b86,	// (0x00062ce3) main_myfav_hc_pane_g2

0x0002,

0xf792,	// (0x0006c8ef) main_myfav_hc_pane_g_ParamLimits

0xf792,	// (0x0006c8ef) main_myfav_hc_pane_g

0x5bb8,	// (0x00062d15) main_myfav_hc_pane_t1_ParamLimits

0x5bb8,	// (0x00062d15) main_myfav_hc_pane_t1

0xd37d,	// (0x0006a4da) main_myfav_hc_pane_t2_ParamLimits

0xd37d,	// (0x0006a4da) main_myfav_hc_pane_t2

0xd38f,	// (0x0006a4ec) main_myfav_hc_pane_t3_ParamLimits

0xd38f,	// (0x0006a4ec) main_myfav_hc_pane_t3

0x5bcf,	// (0x00062d2c) main_myfav_hc_pane_t4_ParamLimits

0x5bcf,	// (0x00062d2c) main_myfav_hc_pane_t4

0x0004,

0xf799,	// (0x0006c8f6) main_myfav_hc_pane_t_ParamLimits

0xf799,	// (0x0006c8f6) main_myfav_hc_pane_t

0xa971,	// (0x00067ace) bg_myfav_hc_instruction_pane_g1

0xd3a1,	// (0x0006a4fe) cell_myfav_contact_pane_g1_ParamLimits

0xd3a1,	// (0x0006a4fe) cell_myfav_contact_pane_g1

0xd3a1,	// (0x0006a4fe) cell_myfav_contact_pane_g2_ParamLimits

0xd3a1,	// (0x0006a4fe) cell_myfav_contact_pane_g2

0xd3ad,	// (0x0006a50a) cell_myfav_contact_pane_g3_ParamLimits

0xd3ad,	// (0x0006a50a) cell_myfav_contact_pane_g3

0xa6b6,	// (0x00067813) cell_myfav_contact_pane_g4_ParamLimits

0xa6b6,	// (0x00067813) cell_myfav_contact_pane_g4

0xd3ba,	// (0x0006a517) cell_myfav_contact_pane_g5_ParamLimits

0xd3ba,	// (0x0006a517) cell_myfav_contact_pane_g5

0x0004,

0xf7a4,	// (0x0006c901) cell_myfav_contact_pane_g_ParamLimits

0xf7a4,	// (0x0006c901) cell_myfav_contact_pane_g

0x5ba0,	// (0x00062cfd) main_myfav_hc_pane_g3_ParamLimits

0x5ba0,	// (0x00062cfd) main_myfav_hc_pane_g3

0x0b58,	// (0x0005dcb5) popup_adpt_find_window

0x5bf9,	// (0x00062d56) afind_page_pane_ParamLimits

0x5bf9,	// (0x00062d56) afind_page_pane

0x5c06,	// (0x00062d63) aid_size_cell_afind_ParamLimits

0x5c06,	// (0x00062d63) aid_size_cell_afind

0x5c20,	// (0x00062d7d) bg_popup_sub_pane_cp09_ParamLimits

0x5c20,	// (0x00062d7d) bg_popup_sub_pane_cp09

0x5c31,	// (0x00062d8e) find_pane_cp01_ParamLimits

0x5c31,	// (0x00062d8e) find_pane_cp01

0xd3c6,	// (0x0006a523) grid_afind_control_pane_ParamLimits

0xd3c6,	// (0x0006a523) grid_afind_control_pane

0x5c44,	// (0x00062da1) grid_afind_pane_ParamLimits

0x5c44,	// (0x00062da1) grid_afind_pane

0x5c60,	// (0x00062dbd) cell_afind_pane_ParamLimits

0x5c60,	// (0x00062dbd) cell_afind_pane

0xa971,	// (0x00067ace) afind_page_pane_g1

0x5ca8,	// (0x00062e05) afind_page_pane_g2

0x5cb0,	// (0x00062e0d) afind_page_pane_g3

0x0002,

0xf7af,	// (0x0006c90c) afind_page_pane_g

0x5cb8,	// (0x00062e15) afind_page_pane_t1

0xd3ec,	// (0x0006a549) cell_afind_grid_control_pane_ParamLimits

0xd3ec,	// (0x0006a549) cell_afind_grid_control_pane

0xd26d,	// (0x0006a3ca) bg_button_pane_cp69_ParamLimits

0xd26d,	// (0x0006a3ca) bg_button_pane_cp69

0x5cc6,	// (0x00062e23) cell_afind_pane_g1_ParamLimits

0x5cc6,	// (0x00062e23) cell_afind_pane_g1

0x5cd3,	// (0x00062e30) cell_afind_pane_t1_ParamLimits

0x5cd3,	// (0x00062e30) cell_afind_pane_t1

0xa97b,	// (0x00067ad8) bg_button_pane_cp72

0xd3fb,	// (0x0006a558) cell_afind_grid_control_pane_g1

0x37a9,	// (0x00060906) aid_image_placing_area_ParamLimits

0x37a9,	// (0x00060906) aid_image_placing_area

0xa6a8,	// (0x00067805) field_vitu_entry_pane_g1_ParamLimits

0xa6a8,	// (0x00067805) field_vitu_entry_pane_g1

0xa6a8,	// (0x00067805) field_vitu_entry_pane_g2_ParamLimits

0xa6a8,	// (0x00067805) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0006c31e) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0006c31e) field_vitu_entry_pane_g

0xcffd,	// (0x0006a15a) cell_vitu_itu_pane_g1_ParamLimits

0xcf7e,	// (0x0006a0db) cell_vitu_itu_pane_t3_ParamLimits

0xcf7e,	// (0x0006a0db) cell_vitu_itu_pane_t3

0xd216,	// (0x0006a373) mp4_progress_pane_t1_ParamLimits

0xd22f,	// (0x0006a38c) mp4_progress_pane_t2_ParamLimits

0x0490,	// (0x0005d5ed) mp4_progress_pane_t_ParamLimits

0xd248,	// (0x0006a3a5) mup_progress_pane_cp04_ParamLimits

0x5be3,	// (0x00062d40) main_myfav_hc_pane_t5_ParamLimits

0x5be3,	// (0x00062d40) main_myfav_hc_pane_t5

0x0d1c,	// (0x0005de79) aid_zoom_text_primary

0x0b58,	// (0x0005dcb5) popup_adpt_find_window_ParamLimits

0x3c87,	// (0x00060de4) main_cam_set_pane

0x562a,	// (0x00062787) cam4_zoom_pane_ParamLimits

0x562a,	// (0x00062787) cam4_zoom_pane

0x5ce5,	// (0x00062e42) main_cam_set_pane_g1_ParamLimits

0x5ce5,	// (0x00062e42) main_cam_set_pane_g1

0x5cf3,	// (0x00062e50) main_cam_set_pane_g2_ParamLimits

0x5cf3,	// (0x00062e50) main_cam_set_pane_g2

0x0001,

0xf7b6,	// (0x0006c913) main_cam_set_pane_g_ParamLimits

0xf7b6,	// (0x0006c913) main_cam_set_pane_g

0x5cff,	// (0x00062e5c) main_cam_set_pane_t1_ParamLimits

0x5cff,	// (0x00062e5c) main_cam_set_pane_t1

0x5d1b,	// (0x00062e78) main_cset_listscroll_pane_ParamLimits

0x5d1b,	// (0x00062e78) main_cset_listscroll_pane

0x5d4f,	// (0x00062eac) main_cset_slider_pane_ParamLimits

0x5d4f,	// (0x00062eac) main_cset_slider_pane

0xd40c,	// (0x0006a569) main_cset_list_pane_ParamLimits

0xd40c,	// (0x0006a569) main_cset_list_pane

0xd41c,	// (0x0006a579) scroll_pane_cp028

0x5d70,	// (0x00062ecd) aid_area_touch_slider

0x5d8c,	// (0x00062ee9) cset_slider_pane

0x5daf,	// (0x00062f0c) main_cset_slider_pane_g1

0x5dc4,	// (0x00062f21) main_cset_slider_pane_g2

0x0011,

0xf7bb,	// (0x0006c918) main_cset_slider_pane_g

0xd455,	// (0x0006a5b2) main_cset_slider_pane_t1

0x5e80,	// (0x00062fdd) main_cset_slider_pane_t2

0x5e9a,	// (0x00062ff7) main_cset_slider_pane_t3

0x5eb4,	// (0x00063011) main_cset_slider_pane_t4

0x5ece,	// (0x0006302b) main_cset_slider_pane_t5

0x5ee8,	// (0x00063045) main_cset_slider_pane_t6

0x5efd,	// (0x0006305a) main_cset_slider_pane_t7

0x000e,

0xf7e0,	// (0x0006c93d) main_cset_slider_pane_t

0x6001,	// (0x0006315e) cset_list_set_pane_ParamLimits

0x6001,	// (0x0006315e) cset_list_set_pane

0xd4ef,	// (0x0006a64c) aid_position_infowindow_above

0xd4f7,	// (0x0006a654) aid_position_infowindow_below

0x6012,	// (0x0006316f) cset_list_set_pane_g1_ParamLimits

0x6012,	// (0x0006316f) cset_list_set_pane_g1

0x601e,	// (0x0006317b) cset_list_set_pane_g3_ParamLimits

0x601e,	// (0x0006317b) cset_list_set_pane_g3

0x0001,

0xf7ff,	// (0x0006c95c) cset_list_set_pane_g_ParamLimits

0xf7ff,	// (0x0006c95c) cset_list_set_pane_g

0x602d,	// (0x0006318a) cset_list_set_pane_t1_ParamLimits

0x602d,	// (0x0006318a) cset_list_set_pane_t1

0xa1e1,	// (0x0006733e) list_highlight_pane_cp021_ParamLimits

0xa1e1,	// (0x0006733e) list_highlight_pane_cp021

0xb3f2,	// (0x0006854f) cset_slider_pane_g1

0xb404,	// (0x00068561) cset_slider_pane_g2

0xb3fb,	// (0x00068558) cset_slider_pane_g3

0x0002,

0xf804,	// (0x0006c961) cset_slider_pane_g

0xb09c,	// (0x000681f9) aid_area_touch_cam4_zoom

0x6042,	// (0x0006319f) cam4_zoom_cont_pane

0x604a,	// (0x000631a7) cam4_zoom_pane_g1

0x6052,	// (0x000631af) cam4_zoom_pane_g2

0x605a,	// (0x000631b7) cam4_zoom_pane_g3

0x0002,

0xf80b,	// (0x0006c968) cam4_zoom_pane_g

0x6062,	// (0x000631bf) cam4_zoom_cont_pane_g1

0x606b,	// (0x000631c8) cam4_zoom_cont_pane_g2

0x6074,	// (0x000631d1) cam4_zoom_cont_pane_g3

0x0002,

0xf812,	// (0x0006c96f) cam4_zoom_cont_pane_g

0x544a,	// (0x000625a7) call4_image_pane_ParamLimits

0x544a,	// (0x000625a7) call4_image_pane

0x54ab,	// (0x00062608) call4_windows_conf_pane_ParamLimits

0x54f2,	// (0x0006264f) popup_call4_audio_in_window_ParamLimits

0x54f2,	// (0x0006264f) popup_call4_audio_in_window

0x9b88,	// (0x00066ce5) bg_popup_call2_act_pane_cp02

0xd279,	// (0x0006a3d6) call4_list_conf_pane

0xa971,	// (0x00067ace) call4_image_pane_g1

0xa971,	// (0x00067ace) call4_image_pane_g2

0x0001,

0xf39d,	// (0x0006c4fa) call4_image_pane_g

0xd4ff,	// (0x0006a65c) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4ff,	// (0x0006a65c) list_single_graphic_popup_conf4_pane

0x9b88,	// (0x00066ce5) list_highlight_pane_cp022

0xd514,	// (0x0006a671) list_single_graphic_popup_conf4_pane_g1

0xb0f5,	// (0x00068252) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf819,	// (0x0006c976) list_single_graphic_popup_conf4_pane_g

0xd51c,	// (0x0006a679) list_single_graphic_popup_conf4_pane_t1

0x1d1d,	// (0x0005ee7a) popup_vtel_slider_window_ParamLimits

0x1d1d,	// (0x0005ee7a) popup_vtel_slider_window

0xd25b,	// (0x0006a3b8) dialer2_ne_pane_t2_ParamLimits

0xd25b,	// (0x0006a3b8) dialer2_ne_pane_t2

0x0001,

0xf6fa,	// (0x0006c857) dialer2_ne_pane_t_ParamLimits

0xf6fa,	// (0x0006c857) dialer2_ne_pane_t

0xa1e1,	// (0x0006733e) bg_popup_sub_pane_cp010_ParamLimits

0xa1e1,	// (0x0006733e) bg_popup_sub_pane_cp010

0x607d,	// (0x000631da) popup_vtel_slider_window_g1_ParamLimits

0x607d,	// (0x000631da) popup_vtel_slider_window_g1

0x6089,	// (0x000631e6) popup_vtel_slider_window_g2_ParamLimits

0x6089,	// (0x000631e6) popup_vtel_slider_window_g2

0x0003,

0xf81e,	// (0x0006c97b) popup_vtel_slider_window_g_ParamLimits

0xf81e,	// (0x0006c97b) popup_vtel_slider_window_g

0x60d1,	// (0x0006322e) vtel_slider_pane_ParamLimits

0x60d1,	// (0x0006322e) vtel_slider_pane

0x60e0,	// (0x0006323d) vtel_slider_pane_g1_ParamLimits

0x60e0,	// (0x0006323d) vtel_slider_pane_g1

0x60ed,	// (0x0006324a) vtel_slider_pane_g2_ParamLimits

0x60ed,	// (0x0006324a) vtel_slider_pane_g2

0x60fa,	// (0x00063257) vtel_slider_pane_g3_ParamLimits

0x60fa,	// (0x00063257) vtel_slider_pane_g3

0x60e0,	// (0x0006323d) vtel_slider_pane_g4_ParamLimits

0x60e0,	// (0x0006323d) vtel_slider_pane_g4

0x6107,	// (0x00063264) vtel_slider_pane_g5_ParamLimits

0x6107,	// (0x00063264) vtel_slider_pane_g5

0x0004,

0xf827,	// (0x0006c984) vtel_slider_pane_g_ParamLimits

0xf827,	// (0x0006c984) vtel_slider_pane_g

0x3c87,	// (0x00060de4) main_gallery2_pane

0x5882,	// (0x000629df) aid_size_row_itut2_dropdow_list_ParamLimits

0x5882,	// (0x000629df) aid_size_row_itut2_dropdow_list

0x58f0,	// (0x00062a4d) grid_vitu2_function_top_pane_ParamLimits

0x58f0,	// (0x00062a4d) grid_vitu2_function_top_pane

0x5946,	// (0x00062aa3) popup_vitu2_dropdown_list_window_ParamLimits

0x5946,	// (0x00062aa3) popup_vitu2_dropdown_list_window

0x5964,	// (0x00062ac1) popup_vitu2_match_list_window

0x6114,	// (0x00063271) cell_vitu2_function_top_pane_ParamLimits

0x6114,	// (0x00063271) cell_vitu2_function_top_pane

0x612e,	// (0x0006328b) cell_vitu2_function_top_pane_cp01_ParamLimits

0x612e,	// (0x0006328b) cell_vitu2_function_top_pane_cp01

0x614a,	// (0x000632a7) cell_vitu2_function_top_wide_pane_ParamLimits

0x614a,	// (0x000632a7) cell_vitu2_function_top_wide_pane

0x3c87,	// (0x00060de4) bg_button_pane_cp012

0x6168,	// (0x000632c5) cell_vitu2_function_top_pane_g1

0x617c,	// (0x000632d9) bg_button_pane_cp013_ParamLimits

0x617c,	// (0x000632d9) bg_button_pane_cp013

0x6198,	// (0x000632f5) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6198,	// (0x000632f5) cell_vitu2_function_top_wide_pane_g1

0x0eed,	// (0x0005e04a) bg_popup_sub_pane_cp20

0x61b0,	// (0x0006330d) list_vitu2_match_list_pane

0xd2ec,	// (0x0006a449) bg_popup_sub_pane_cp20_g1

0xd2f4,	// (0x0006a451) bg_popup_sub_pane_cp20_g2

0xaba9,	// (0x00067d06) bg_popup_sub_pane_cp20_g3

0xd2fc,	// (0x0006a459) bg_popup_sub_pane_cp20_g4

0xab89,	// (0x00067ce6) bg_popup_sub_pane_cp20_g5

0xd532,	// (0x0006a68f) bg_popup_sub_pane_cp20_g6

0xd30c,	// (0x0006a469) bg_popup_sub_pane_cp20_g7

0xd314,	// (0x0006a471) bg_popup_sub_pane_cp20_g8

0xd31c,	// (0x0006a479) bg_popup_sub_pane_cp20_g9

0x0008,

0xf832,	// (0x0006c98f) bg_popup_sub_pane_cp20_g

0x61c8,	// (0x00063325) list_vitu2_match_list_item_pane_ParamLimits

0x61c8,	// (0x00063325) list_vitu2_match_list_item_pane

0x61da,	// (0x00063337) list_vitu2_match_list_item_pane_t1

0x0f07,	// (0x0005e064) bg_popup_sub_pane_cp21

0xa94f,	// (0x00067aac) grid_vitu2_dropdown_list_pane

0x61e8,	// (0x00063345) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x61e8,	// (0x00063345) cell_vitu2_dropdown_list_char_pane

0x620c,	// (0x00063369) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x620c,	// (0x00063369) cell_vitu2_dropdown_list_ctrl_pane

0xd53a,	// (0x0006a697) cell_vitu2_dropdown_list_char_pane_g1

0xd543,	// (0x0006a6a0) cell_vitu2_dropdown_list_char_pane_g2

0xd54c,	// (0x0006a6a9) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf845,	// (0x0006c9a2) cell_vitu2_dropdown_list_char_pane_g

0x6236,	// (0x00063393) cell_vitu2_dropdown_list_char_pane_t1

0x6244,	// (0x000633a1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6244,	// (0x000633a1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6254,	// (0x000633b1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6254,	// (0x000633b1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6265,	// (0x000633c2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6265,	// (0x000633c2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6275,	// (0x000633d2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6275,	// (0x000633d2) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdc47,	// (0x0006ada4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdc47,	// (0x0006ada4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf84c,	// (0x0006c9a9) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf84c,	// (0x0006c9a9) cell_vitu2_dropdown_list_ctrl_pane_g

0x628e,	// (0x000633eb) aid_size_cell_gallery2_ParamLimits

0x628e,	// (0x000633eb) aid_size_cell_gallery2

0x62a8,	// (0x00063405) grid_gallery2_pane_ParamLimits

0x62a8,	// (0x00063405) grid_gallery2_pane

0x62bf,	// (0x0006341c) scroll_pane_cp029_ParamLimits

0x62bf,	// (0x0006341c) scroll_pane_cp029

0x62cf,	// (0x0006342c) cell_gallery2_pane_ParamLimits

0x62cf,	// (0x0006342c) cell_gallery2_pane

0xd555,	// (0x0006a6b2) cell_gallery2_pane_g2

0x6326,	// (0x00063483) cell_gallery2_pane_g3

0xd55d,	// (0x0006a6ba) cell_gallery2_pane_g4

0xd565,	// (0x0006a6c2) cell_gallery2_pane_g5

0xa94f,	// (0x00067aac) grid_highlight_pane_cp10

0x5964,	// (0x00062ac1) popup_vitu2_match_list_window_ParamLimits

0x5978,	// (0x00062ad5) popup_vitu2_query_window_ParamLimits

0x5978,	// (0x00062ad5) popup_vitu2_query_window

0x0f07,	// (0x0005e064) bg_vitu2_candi_button_pane

0xd53a,	// (0x0006a697) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd543,	// (0x0006a6a0) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd54c,	// (0x0006a6a9) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x632e,	// (0x0006348b) bg_button_pane_cp015

0x6343,	// (0x000634a0) bg_button_pane_cp016

0x634f,	// (0x000634ac) bg_button_pane_cp017

0xb584,	// (0x000686e1) bg_popup_sub_pane_cp22

0xd56d,	// (0x0006a6ca) popup_vitu2_query_window_g1

0x6390,	// (0x000634ed) popup_vitu2_query_window_g2

0x0002,

0xf857,	// (0x0006c9b4) popup_vitu2_query_window_g

0x63b4,	// (0x00063511) popup_vitu2_query_window_t1_ParamLimits

0x63b4,	// (0x00063511) popup_vitu2_query_window_t1

0x63e7,	// (0x00063544) popup_vitu2_query_window_t2_ParamLimits

0x63e7,	// (0x00063544) popup_vitu2_query_window_t2

0x63f9,	// (0x00063556) popup_vitu2_query_window_t3_ParamLimits

0x63f9,	// (0x00063556) popup_vitu2_query_window_t3

0x6421,	// (0x0006357e) popup_vitu2_query_window_t4_ParamLimits

0x6421,	// (0x0006357e) popup_vitu2_query_window_t4

0x6435,	// (0x00063592) popup_vitu2_query_window_t5_ParamLimits

0x6435,	// (0x00063592) popup_vitu2_query_window_t5

0x0006,

0xf85e,	// (0x0006c9bb) popup_vitu2_query_window_t_ParamLimits

0xf85e,	// (0x0006c9bb) popup_vitu2_query_window_t

0xd404,	// (0x0006a561) main_cset_text_pane

0x5d70,	// (0x00062ecd) aid_area_touch_slider_ParamLimits

0x5d8c,	// (0x00062ee9) cset_slider_pane_ParamLimits

0x5daf,	// (0x00062f0c) main_cset_slider_pane_g1_ParamLimits

0x5dc4,	// (0x00062f21) main_cset_slider_pane_g2_ParamLimits

0xd425,	// (0x0006a582) main_cset_slider_pane_g3_ParamLimits

0xd425,	// (0x0006a582) main_cset_slider_pane_g3

0x5dd9,	// (0x00062f36) main_cset_slider_pane_g4_ParamLimits

0x5dd9,	// (0x00062f36) main_cset_slider_pane_g4

0x5de8,	// (0x00062f45) main_cset_slider_pane_g5_ParamLimits

0x5de8,	// (0x00062f45) main_cset_slider_pane_g5

0x5df4,	// (0x00062f51) main_cset_slider_pane_g6_ParamLimits

0x5df4,	// (0x00062f51) main_cset_slider_pane_g6

0xf7bb,	// (0x0006c918) main_cset_slider_pane_g_ParamLimits

0xd455,	// (0x0006a5b2) main_cset_slider_pane_t1_ParamLimits

0x5e80,	// (0x00062fdd) main_cset_slider_pane_t2_ParamLimits

0x5e9a,	// (0x00062ff7) main_cset_slider_pane_t3_ParamLimits

0x5eb4,	// (0x00063011) main_cset_slider_pane_t4_ParamLimits

0x5ece,	// (0x0006302b) main_cset_slider_pane_t5_ParamLimits

0x5ee8,	// (0x00063045) main_cset_slider_pane_t6_ParamLimits

0x5efd,	// (0x0006305a) main_cset_slider_pane_t7_ParamLimits

0x5f27,	// (0x00063084) main_cset_slider_pane_t8_ParamLimits

0x5f27,	// (0x00063084) main_cset_slider_pane_t8

0x5f4f,	// (0x000630ac) main_cset_slider_pane_t9_ParamLimits

0x5f4f,	// (0x000630ac) main_cset_slider_pane_t9

0x5f77,	// (0x000630d4) main_cset_slider_pane_t10_ParamLimits

0x5f77,	// (0x000630d4) main_cset_slider_pane_t10

0x5f9f,	// (0x000630fc) main_cset_slider_pane_t11_ParamLimits

0x5f9f,	// (0x000630fc) main_cset_slider_pane_t11

0x5fc7,	// (0x00063124) main_cset_slider_pane_t12_ParamLimits

0x5fc7,	// (0x00063124) main_cset_slider_pane_t12

0x5fe4,	// (0x00063141) main_cset_slider_pane_t13_ParamLimits

0x5fe4,	// (0x00063141) main_cset_slider_pane_t13

0xf7e0,	// (0x0006c93d) main_cset_slider_pane_t_ParamLimits

0x9b88,	// (0x00066ce5) bg_popup_sub_pane_cp011

0xd579,	// (0x0006a6d6) main_cset_text_pane_g1

0xd581,	// (0x0006a6de) main_cset_text_pane_t1

0xd58f,	// (0x0006a6ec) main_cset_text_pane_t2

0xd59d,	// (0x0006a6fa) main_cset_text_pane_t3

0xd5ab,	// (0x0006a708) main_cset_text_pane_t4

0xd5fa,	// (0x0006a757) main_cset_text_pane_t5

0xd608,	// (0x0006a765) main_cset_text_pane_t6

0xd616,	// (0x0006a773) main_cset_text_pane_t7

0x0006,

0xf86d,	// (0x0006c9ca) main_cset_text_pane_t

0x0f07,	// (0x0005e064) main_cam4_burst_pane

0x0f07,	// (0x0005e064) main_cam5_pane

0xd3da,	// (0x0006a537) bg_button_pane_cp019

0xd3e3,	// (0x0006a540) bg_button_pane_cp020

0xd431,	// (0x0006a58e) main_cset_slider_pane_g7_ParamLimits

0xd431,	// (0x0006a58e) main_cset_slider_pane_g7

0xd43d,	// (0x0006a59a) main_cset_slider_pane_g8_ParamLimits

0xd43d,	// (0x0006a59a) main_cset_slider_pane_g8

0x5e08,	// (0x00062f65) main_cset_slider_pane_g9_ParamLimits

0x5e08,	// (0x00062f65) main_cset_slider_pane_g9

0x5e14,	// (0x00062f71) main_cset_slider_pane_g10_ParamLimits

0x5e14,	// (0x00062f71) main_cset_slider_pane_g10

0x5e20,	// (0x00062f7d) main_cset_slider_pane_g11_ParamLimits

0x5e20,	// (0x00062f7d) main_cset_slider_pane_g11

0x5e2c,	// (0x00062f89) main_cset_slider_pane_g12_ParamLimits

0x5e2c,	// (0x00062f89) main_cset_slider_pane_g12

0x5e38,	// (0x00062f95) main_cset_slider_pane_g13_ParamLimits

0x5e38,	// (0x00062f95) main_cset_slider_pane_g13

0x5e44,	// (0x00062fa1) main_cset_slider_pane_g14_ParamLimits

0x5e44,	// (0x00062fa1) main_cset_slider_pane_g14

0x5e50,	// (0x00062fad) main_cset_slider_pane_g15_ParamLimits

0x5e50,	// (0x00062fad) main_cset_slider_pane_g15

0xd47d,	// (0x0006a5da) main_cset_slider_pane_t14_ParamLimits

0xd47d,	// (0x0006a5da) main_cset_slider_pane_t14

0xd4b6,	// (0x0006a613) main_cset_slider_pane_t15_ParamLimits

0xd4b6,	// (0x0006a613) main_cset_slider_pane_t15

0x649f,	// (0x000635fc) aid_cam4_burst_size_cell_ParamLimits

0x649f,	// (0x000635fc) aid_cam4_burst_size_cell

0x64bb,	// (0x00063618) grid_cam4_burst_pane_ParamLimits

0x64bb,	// (0x00063618) grid_cam4_burst_pane

0x64ed,	// (0x0006364a) linegrid_cam4_burst_pane_ParamLimits

0x64ed,	// (0x0006364a) linegrid_cam4_burst_pane

0x650b,	// (0x00063668) scroll_pane_cp30_ParamLimits

0x650b,	// (0x00063668) scroll_pane_cp30

0x6517,	// (0x00063674) cell_cam4_burst_pane_ParamLimits

0x6517,	// (0x00063674) cell_cam4_burst_pane

0xd624,	// (0x0006a781) linegrid_cam4_burst_pane_g1_ParamLimits

0xd624,	// (0x0006a781) linegrid_cam4_burst_pane_g1

0x6557,	// (0x000636b4) linegrid_cam4_burst_pane_g2_ParamLimits

0x6557,	// (0x000636b4) linegrid_cam4_burst_pane_g2

0xd631,	// (0x0006a78e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd631,	// (0x0006a78e) linegrid_cam4_burst_pane_g3

0x0002,

0xf87c,	// (0x0006c9d9) linegrid_cam4_burst_pane_g_ParamLimits

0xf87c,	// (0x0006c9d9) linegrid_cam4_burst_pane_g

0x6568,	// (0x000636c5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6568,	// (0x000636c5) linegrid_cam4_burst_pane_g3_copy1

0xd63e,	// (0x0006a79b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd63e,	// (0x0006a79b) linegrid_cam4_burst_pane_g4

0x6582,	// (0x000636df) linegrid_cam4_burst_pane_g5_ParamLimits

0x6582,	// (0x000636df) linegrid_cam4_burst_pane_g5

0x6593,	// (0x000636f0) linegrid_cam4_burst_pane_g6_ParamLimits

0x6593,	// (0x000636f0) linegrid_cam4_burst_pane_g6

0xd64b,	// (0x0006a7a8) linegrid_cam4_burst_pane_g7_ParamLimits

0xd64b,	// (0x0006a7a8) linegrid_cam4_burst_pane_g7

0x65aa,	// (0x00063707) cell_cam4_burst_pane_g1

0xd664,	// (0x0006a7c1) main_cam5_pane_t1_ParamLimits

0xd664,	// (0x0006a7c1) main_cam5_pane_t1

0xd676,	// (0x0006a7d3) main_cam5_pane_t2_ParamLimits

0xd676,	// (0x0006a7d3) main_cam5_pane_t2

0xd688,	// (0x0006a7e5) main_cam5_pane_t3_ParamLimits

0xd688,	// (0x0006a7e5) main_cam5_pane_t3

0xd69a,	// (0x0006a7f7) main_cam5_pane_t4_ParamLimits

0xd69a,	// (0x0006a7f7) main_cam5_pane_t4

0xd6b2,	// (0x0006a80f) main_cam5_pane_t5_ParamLimits

0xd6b2,	// (0x0006a80f) main_cam5_pane_t5

0xd6c6,	// (0x0006a823) main_cam5_pane_t6_ParamLimits

0xd6c6,	// (0x0006a823) main_cam5_pane_t6

0xd6da,	// (0x0006a837) main_cam5_pane_t7_ParamLimits

0xd6da,	// (0x0006a837) main_cam5_pane_t7

0xd6ec,	// (0x0006a849) main_cam5_pane_t8_ParamLimits

0xd6ec,	// (0x0006a849) main_cam5_pane_t8

0xd70a,	// (0x0006a867) main_cam5_pane_t9_ParamLimits

0xd70a,	// (0x0006a867) main_cam5_pane_t9

0xd71c,	// (0x0006a879) main_cam5_pane_t10_ParamLimits

0xd71c,	// (0x0006a879) main_cam5_pane_t10

0xd72e,	// (0x0006a88b) main_cam5_pane_t11_ParamLimits

0xd72e,	// (0x0006a88b) main_cam5_pane_t11

0xd742,	// (0x0006a89f) main_cam5_pane_t12_ParamLimits

0xd742,	// (0x0006a89f) main_cam5_pane_t12

0xd759,	// (0x0006a8b6) main_cam5_pane_t13_ParamLimits

0xd759,	// (0x0006a8b6) main_cam5_pane_t13

0x000c,

0xf888,	// (0x0006c9e5) main_cam5_pane_t_ParamLimits

0xf888,	// (0x0006c9e5) main_cam5_pane_t

0x0eac,	// (0x0005e009) popup_scut_keymap_window_ParamLimits

0x0eac,	// (0x0005e009) popup_scut_keymap_window

0x65bd,	// (0x0006371a) aid_size_cell_brow_shortcut

0xa94f,	// (0x00067aac) bg_popup_window_pane_cp010

0x65c9,	// (0x00063726) grid_scut_pane

0x65d5,	// (0x00063732) cell_scut_pane_ParamLimits

0x65d5,	// (0x00063732) cell_scut_pane

0x65f0,	// (0x0006374d) cell_scut_pane_g1

0xd77c,	// (0x0006a8d9) cell_scut_pane_t1

0xd78b,	// (0x0006a8e8) cell_scut_pane_t2

0x65f9,	// (0x00063756) cell_scut_pane_t3

0x0002,

0xf8a3,	// (0x0006ca00) cell_scut_pane_t

0x457b,	// (0x000616d8) main_mup3_pane_g8_ParamLimits

0x457b,	// (0x000616d8) main_mup3_pane_g8

0x5890,	// (0x000629ed) area_vitu2_query_pane_ParamLimits

0x5890,	// (0x000629ed) area_vitu2_query_pane

0x635b,	// (0x000634b8) input_focus_pane_cp08

0xd79a,	// (0x0006a8f7) area_vitu2_query_pane_g1

0x6607,	// (0x00063764) area_vitu2_query_pane_g2

0x0001,

0xf8aa,	// (0x0006ca07) area_vitu2_query_pane_g

0x6618,	// (0x00063775) area_vitu2_query_pane_t1_ParamLimits

0x6618,	// (0x00063775) area_vitu2_query_pane_t1

0x662c,	// (0x00063789) area_vitu2_query_pane_t2_ParamLimits

0x662c,	// (0x00063789) area_vitu2_query_pane_t2

0x6640,	// (0x0006379d) area_vitu2_query_pane_t3_ParamLimits

0x6640,	// (0x0006379d) area_vitu2_query_pane_t3

0xa28c,	// (0x000673e9) area_vitu2_query_pane_t4_ParamLimits

0xa28c,	// (0x000673e9) area_vitu2_query_pane_t4

0xa2b4,	// (0x00067411) area_vitu2_query_pane_t5_ParamLimits

0xa2b4,	// (0x00067411) area_vitu2_query_pane_t5

0xa2dc,	// (0x00067439) area_vitu2_query_pane_t6_ParamLimits

0xa2dc,	// (0x00067439) area_vitu2_query_pane_t6

0x0006,

0xf8af,	// (0x0006ca0c) area_vitu2_query_pane_t_ParamLimits

0xf8af,	// (0x0006ca0c) area_vitu2_query_pane_t

0x6343,	// (0x000634a0) bg_button_pane_cp018

0x6668,	// (0x000637c5) bg_button_pane_cp021

0x6674,	// (0x000637d1) bg_button_pane_cp022

0x6697,	// (0x000637f4) input_focus_pane_cp09

0x3051,	// (0x000601ae) aid_size_touch_mv_arrow_left

0x307c,	// (0x000601d9) aid_size_touch_mv_arrow_right

0x5e68,	// (0x00062fc5) main_cset_slider_pane_g16_ParamLimits

0x5e68,	// (0x00062fc5) main_cset_slider_pane_g16

0x5e74,	// (0x00062fd1) main_cset_slider_pane_g17_ParamLimits

0x5e74,	// (0x00062fd1) main_cset_slider_pane_g17

0x65aa,	// (0x00063707) cell_cam4_burst_pane_g1_ParamLimits

0x9b88,	// (0x00066ce5) compa_mode_pane

0x6095,	// (0x000631f2) popup_vtel_slider_window_g3_ParamLimits

0x6095,	// (0x000631f2) popup_vtel_slider_window_g3

0x60a9,	// (0x00063206) popup_vtel_slider_window_g4_ParamLimits

0x60a9,	// (0x00063206) popup_vtel_slider_window_g4

0x60bd,	// (0x0006321a) popup_vtel_slider_window_t1_ParamLimits

0x60bd,	// (0x0006321a) popup_vtel_slider_window_t1

0x0f07,	// (0x0005e064) main_cl_pane

0x3d31,	// (0x00060e8e) popup_imed_adjust2_window_ParamLimits

0xb584,	// (0x000686e1) bg_tb_trans_pane_cp05_ParamLimits

0xcf0b,	// (0x0006a068) popup_imed_adjust2_window_g1_ParamLimits

0xcf1a,	// (0x0006a077) popup_imed_adjust2_window_g2_ParamLimits

0xcf1a,	// (0x0006a077) popup_imed_adjust2_window_g2

0xcf26,	// (0x0006a083) popup_imed_adjust2_window_g3_ParamLimits

0xcf26,	// (0x0006a083) popup_imed_adjust2_window_g3

0x0002,

0x03c0,	// (0x0005d51d) popup_imed_adjust2_window_g_ParamLimits

0x03c0,	// (0x0005d51d) popup_imed_adjust2_window_g

0xcf32,	// (0x0006a08f) popup_imed_adjust2_window_t1_ParamLimits

0xcf4a,	// (0x0006a0a7) slider_imed_adjust_pane_ParamLimits

0xcf5e,	// (0x0006a0bb) slider_imed_adjust_pane_g1_ParamLimits

0xcf6e,	// (0x0006a0cb) slider_imed_adjust_pane_g2_ParamLimits

0xcf9b,	// (0x0006a0f8) slider_imed_adjust_pane_g3_ParamLimits

0xcfac,	// (0x0006a109) slider_imed_adjust_pane_g4_ParamLimits

0xf651,	// (0x0006c7ae) slider_imed_adjust_pane_g_ParamLimits

0x55d3,	// (0x00062730) aid_touch_area_cam4_ParamLimits

0x55d3,	// (0x00062730) aid_touch_area_cam4

0x55e3,	// (0x00062740) battery_pane_cp01

0x566a,	// (0x000627c7) main_camera4_pane_g6_ParamLimits

0x566a,	// (0x000627c7) main_camera4_pane_g6

0x5688,	// (0x000627e5) main_camera4_pane_t2_ParamLimits

0x5688,	// (0x000627e5) main_camera4_pane_t2

0x0001,

0xf72e,	// (0x0006c88b) main_camera4_pane_t_ParamLimits

0xf72e,	// (0x0006c88b) main_camera4_pane_t

0x570b,	// (0x00062868) aid_touch_area_vid4_ParamLimits

0x570b,	// (0x00062868) aid_touch_area_vid4

0x574b,	// (0x000628a8) main_video4_pane_g5_ParamLimits

0x574b,	// (0x000628a8) main_video4_pane_g5

0x5771,	// (0x000628ce) vid4_progress_pane_ParamLimits

0x5771,	// (0x000628ce) vid4_progress_pane

0xd449,	// (0x0006a5a6) main_cset_slider_pane_g18_ParamLimits

0xd449,	// (0x0006a5a6) main_cset_slider_pane_g18

0xd658,	// (0x0006a7b5) cell_cam4_burst_pane_g2_ParamLimits

0xd658,	// (0x0006a7b5) cell_cam4_burst_pane_g2

0x0001,

0xf883,	// (0x0006c9e0) cell_cam4_burst_pane_g_ParamLimits

0xf883,	// (0x0006c9e0) cell_cam4_burst_pane_g

0x66a8,	// (0x00063805) bg_cl_pane_ParamLimits

0x66a8,	// (0x00063805) bg_cl_pane

0x66b4,	// (0x00063811) cl_header_pane_ParamLimits

0x66b4,	// (0x00063811) cl_header_pane

0x66c0,	// (0x0006381d) cl_listscroll_pane_ParamLimits

0x66c0,	// (0x0006381d) cl_listscroll_pane

0xd7a6,	// (0x0006a903) bg_cl_pane_g1

0xd7ae,	// (0x0006a90b) bg_cl_pane_g2

0xd7b6,	// (0x0006a913) bg_cl_pane_g3

0xd7be,	// (0x0006a91b) bg_cl_pane_g4

0xd7c6,	// (0x0006a923) bg_cl_pane_g5

0xd7ce,	// (0x0006a92b) bg_cl_pane_g6

0xd7d6,	// (0x0006a933) bg_cl_pane_g7

0xd7de,	// (0x0006a93b) bg_cl_pane_g8

0xd7e6,	// (0x0006a943) bg_cl_pane_g9

0x0008,

0xf8be,	// (0x0006ca1b) bg_cl_pane_g

0x66cc,	// (0x00063829) aid_height_cl_leading_ParamLimits

0x66cc,	// (0x00063829) aid_height_cl_leading

0x66d8,	// (0x00063835) aid_height_cl_text_ParamLimits

0x66d8,	// (0x00063835) aid_height_cl_text

0xa69a,	// (0x000677f7) bg_cl_header_pane_ParamLimits

0xa69a,	// (0x000677f7) bg_cl_header_pane

0x66f0,	// (0x0006384d) cl_header_pane_g1_ParamLimits

0x66f0,	// (0x0006384d) cl_header_pane_g1

0x66fd,	// (0x0006385a) cl_header_pane_t1_ParamLimits

0x66fd,	// (0x0006385a) cl_header_pane_t1

0xd7ee,	// (0x0006a94b) cl_list_pane

0xd41c,	// (0x0006a579) hc_scroll_pane_cp01

0xab89,	// (0x00067ce6) bg_cl_header_pane_g1

0xd2ec,	// (0x0006a449) bg_cl_header_pane_g2

0xaba9,	// (0x00067d06) bg_cl_header_pane_g3

0xd2fc,	// (0x0006a459) bg_cl_header_pane_g4

0xd2f4,	// (0x0006a451) bg_cl_header_pane_g5

0xd532,	// (0x0006a68f) bg_cl_header_pane_g6

0xd314,	// (0x0006a471) bg_cl_header_pane_g7

0xd31c,	// (0x0006a479) bg_cl_header_pane_g8

0xd30c,	// (0x0006a469) bg_cl_header_pane_g9

0x0008,

0xf8d1,	// (0x0006ca2e) bg_cl_header_pane_g

0x670f,	// (0x0006386c) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x670f,	// (0x0006386c) hc_cl_list_double_graphic_heading_pane

0x671f,	// (0x0006387c) hc_cl_list_single_graphic_pane_ParamLimits

0x671f,	// (0x0006387c) hc_cl_list_single_graphic_pane

0x6731,	// (0x0006388e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x6731,	// (0x0006388e) hc_cl_list_single_graphic_pane_g1

0x673d,	// (0x0006389a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x673d,	// (0x0006389a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf8e4,	// (0x0006ca41) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf8e4,	// (0x0006ca41) hc_cl_list_single_graphic_pane_g

0x6751,	// (0x000638ae) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x6751,	// (0x000638ae) hc_cl_list_single_graphic_pane_t1

0x6731,	// (0x0006388e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x6731,	// (0x0006388e) hc_cl_list_double_graphic_heading_pane_g1

0x6766,	// (0x000638c3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x6766,	// (0x000638c3) hc_cl_list_double_graphic_heading_pane_g2

0x677a,	// (0x000638d7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x677a,	// (0x000638d7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf8e9,	// (0x0006ca46) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf8e9,	// (0x0006ca46) hc_cl_list_double_graphic_heading_pane_g

0x678e,	// (0x000638eb) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x678e,	// (0x000638eb) hc_cl_list_double_graphic_heading_pane_t1

0x67a3,	// (0x00063900) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x67a3,	// (0x00063900) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf8f0,	// (0x0006ca4d) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf8f0,	// (0x0006ca4d) hc_cl_list_double_graphic_heading_pane_t

0x67c0,	// (0x0006391d) vid4_progress_pane_g1

0x67d0,	// (0x0006392d) vid4_progress_pane_g2

0x67e0,	// (0x0006393d) vid4_progress_pane_g3

0x67f2,	// (0x0006394f) vid4_progress_pane_g4

0x0004,

0xf8f5,	// (0x0006ca52) vid4_progress_pane_g

0x6810,	// (0x0006396d) vid4_progress_pane_t1

0x682a,	// (0x00063987) vid4_progress_pane_t2

0x0002,

0xf900,	// (0x0006ca5d) vid4_progress_pane_t

0x6858,	// (0x000639b5) wait_bar_pane_cp07

0xc846,	// (0x000699a3) blid_firmament_pane_ParamLimits

0xc889,	// (0x000699e6) popup_blid_sat_info2_window_g1

0xc8ad,	// (0x00069a0a) popup_blid_sat_info2_window_t3

0xc8bb,	// (0x00069a18) popup_blid_sat_info2_window_t4

0xc8c9,	// (0x00069a26) popup_blid_sat_info2_window_t5

0xc8d7,	// (0x00069a34) popup_blid_sat_info2_window_t6

0xc8e7,	// (0x00069a44) popup_blid_sat_info2_window_t7

0xc8f5,	// (0x00069a52) popup_blid_sat_info2_window_t8

0xc903,	// (0x00069a60) popup_blid_sat_info2_window_t9

0xc911,	// (0x00069a6e) popup_blid_sat_info2_window_t10

0xc9d8,	// (0x00069b35) aid_firma_cardinal_ParamLimits

0xc9ec,	// (0x00069b49) blid_firmament_pane_t1_ParamLimits

0xca03,	// (0x00069b60) blid_firmament_pane_t2_ParamLimits

0xca1a,	// (0x00069b77) blid_firmament_pane_t3_ParamLimits

0xca31,	// (0x00069b8e) blid_firmament_pane_t4_ParamLimits

0x02b9,	// (0x0005d416) blid_firmament_pane_t_ParamLimits

0xca48,	// (0x00069ba5) blid_sat_info_pane_ParamLimits

0x3c87,	// (0x00060de4) main_cam_set_pane_ParamLimits

0x4c43,	// (0x00061da0) aid_size_cell_colour_35_ParamLimits

0x4c5d,	// (0x00061dba) aid_size_cell_colour_112_ParamLimits

0x4c74,	// (0x00061dd1) aid_size_cell_effect_ParamLimits

0xa1e1,	// (0x0006733e) bg_tb_trans_pane_cp02_ParamLimits

0xaf4c,	// (0x000680a9) heading_imed_pane_ParamLimits

0x4c8e,	// (0x00061deb) listscroll_imed_pane_ParamLimits

0xbd31,	// (0x00068e8e) popup_call2_audio_first_window_g5_ParamLimits

0xbd31,	// (0x00068e8e) popup_call2_audio_first_window_g5

0x52b3,	// (0x00062410) aid_size_touch_image3_arrow_left_ParamLimits

0x52b3,	// (0x00062410) aid_size_touch_image3_arrow_left

0x52c9,	// (0x00062426) aid_size_touch_image3_arrow_right_ParamLimits

0x52c9,	// (0x00062426) aid_size_touch_image3_arrow_right

0x6843,	// (0x000639a0) vid4_progress_pane_t3

0x4e09,	// (0x00061f66) main_hwr_training_symbol_option_pane_ParamLimits

0x4e09,	// (0x00061f66) main_hwr_training_symbol_option_pane

0xd150,	// (0x0006a2ad) popup_hwr_training_preview_window_ParamLimits

0xd150,	// (0x0006a2ad) popup_hwr_training_preview_window

0x4e6a,	// (0x00061fc7) hwr_training_navi_pane_g5_ParamLimits

0x4e6a,	// (0x00061fc7) hwr_training_navi_pane_g5

0xd2da,	// (0x0006a437) popup_char_count_window

0x0eed,	// (0x0005e04a) bg_popup_sub_pane_cp20_ParamLimits

0x61b0,	// (0x0006330d) list_vitu2_match_list_pane_ParamLimits

0x61bc,	// (0x00063319) vitu2_page_scroll_pane_ParamLimits

0x61bc,	// (0x00063319) vitu2_page_scroll_pane

0xd7f7,	// (0x0006a954) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7f7,	// (0x0006a954) list_single_hwr_training_symbol_option_pane

0xd80a,	// (0x0006a967) list_single_hwr_training_symbol_option_pane_g1

0xd812,	// (0x0006a96f) list_single_hwr_training_symbol_option_pane_t1

0xd820,	// (0x0006a97d) bg_button_pane_cp023

0xd829,	// (0x0006a986) bg_button_pane_cp024

0xd85c,	// (0x0006a9b9) vitu2_page_scroll_pane_g1

0xd864,	// (0x0006a9c1) vitu2_page_scroll_pane_g2

0x0001,

0xf907,	// (0x0006ca64) vitu2_page_scroll_pane_g

0xd86c,	// (0x0006a9c9) vitu2_page_scroll_pane_t1

0xd5d6,	// (0x0006a733) popup_char_count_window_g1

0xd87b,	// (0x0006a9d8) popup_char_count_window_g2

0xd5cd,	// (0x0006a72a) popup_char_count_window_g3

0x0002,

0xf90c,	// (0x0006ca69) popup_char_count_window_g

0xd884,	// (0x0006a9e1) popup_char_count_window_t1

0x0f07,	// (0x0005e064) main_vded2_pane

0xcef7,	// (0x0006a054) aid_size_cell_imed_line

0xcf01,	// (0x0006a05e) grid_imed_line_width_pane

0x57e5,	// (0x00062942) vid4_indicators_pane_g4

0xd892,	// (0x0006a9ef) cell_imed_line_width_pane_ParamLimits

0xd892,	// (0x0006a9ef) cell_imed_line_width_pane

0xd8a8,	// (0x0006aa05) cell_imed_line_width_pane_g1

0xd8b1,	// (0x0006aa0e) cell_imed_line_width_pane_g2

0x0001,

0xf913,	// (0x0006ca70) cell_imed_line_width_pane_g

0x687f,	// (0x000639dc) main_vded2_pane_g1_ParamLimits

0x687f,	// (0x000639dc) main_vded2_pane_g1

0x688e,	// (0x000639eb) main_vded2_pane_g2_ParamLimits

0x688e,	// (0x000639eb) main_vded2_pane_g2

0x0001,

0xf918,	// (0x0006ca75) main_vded2_pane_g_ParamLimits

0xf918,	// (0x0006ca75) main_vded2_pane_g

0x689c,	// (0x000639f9) vded2_slider_pane_ParamLimits

0x689c,	// (0x000639f9) vded2_slider_pane

0x68a9,	// (0x00063a06) aid_size_touch_vded2_end

0x68b3,	// (0x00063a10) aid_size_touch_vded2_playhead

0xd8b9,	// (0x0006aa16) aid_size_touch_vded2_start

0xd8c1,	// (0x0006aa1e) vded2_slider_bg_pane

0xd8ca,	// (0x0006aa27) vded2_slider_pane_g1

0xd8d3,	// (0x0006aa30) vded2_slider_pane_g2

0x68bb,	// (0x00063a18) vded2_slider_pane_g3

0x0002,

0xf91d,	// (0x0006ca7a) vded2_slider_pane_g

0xd5df,	// (0x0006a73c) vded2_slider_bg_pane_g1

0xd5e8,	// (0x0006a745) vded2_slider_bg_pane_g2

0xd5f1,	// (0x0006a74e) vded2_slider_bg_pane_g3

0x0002,

0xf626,	// (0x0006c783) vded2_slider_bg_pane_g

0x350c,	// (0x00060669) aid_postcard_touch_down_pane_ParamLimits

0x350c,	// (0x00060669) aid_postcard_touch_down_pane

0x351c,	// (0x00060679) aid_postcard_touch_up_pane_ParamLimits

0x351c,	// (0x00060679) aid_postcard_touch_up_pane

0x0f07,	// (0x0005e064) main_blid2_pane

0x3cb0,	// (0x00060e0d) popup_blid2_search_window

0x9b88,	// (0x00066ce5) blid2_gps_pane

0x9b88,	// (0x00066ce5) blid2_navig_pane

0x9b88,	// (0x00066ce5) blid2_search_pane

0x9b88,	// (0x00066ce5) blid2_tripm_pane

0x68c4,	// (0x00063a21) blid2_search_pane_g1_ParamLimits

0x68c4,	// (0x00063a21) blid2_search_pane_g1

0x68d0,	// (0x00063a2d) blid2_search_pane_t1_ParamLimits

0x68d0,	// (0x00063a2d) blid2_search_pane_t1

0x68e2,	// (0x00063a3f) aid_size_cell_blid2_gps_ParamLimits

0x68e2,	// (0x00063a3f) aid_size_cell_blid2_gps

0x68f2,	// (0x00063a4f) blid2_gps_pane_g1_ParamLimits

0x68f2,	// (0x00063a4f) blid2_gps_pane_g1

0x68fe,	// (0x00063a5b) grid_blid2_satellite_pane_ParamLimits

0x68fe,	// (0x00063a5b) grid_blid2_satellite_pane

0x690c,	// (0x00063a69) blid2_navig_pane_g1_ParamLimits

0x690c,	// (0x00063a69) blid2_navig_pane_g1

0x6918,	// (0x00063a75) blid2_navig_pane_t1_ParamLimits

0x6918,	// (0x00063a75) blid2_navig_pane_t1

0x692a,	// (0x00063a87) blid2_navig_pane_t2_ParamLimits

0x692a,	// (0x00063a87) blid2_navig_pane_t2

0x0001,

0xf924,	// (0x0006ca81) blid2_navig_pane_t_ParamLimits

0xf924,	// (0x0006ca81) blid2_navig_pane_t

0x693c,	// (0x00063a99) blid2_navig_ring_pane_ParamLimits

0x693c,	// (0x00063a99) blid2_navig_ring_pane

0x694c,	// (0x00063aa9) blid2_speed_pane_ParamLimits

0x694c,	// (0x00063aa9) blid2_speed_pane

0x6958,	// (0x00063ab5) blid2_tripm_pane_g1_ParamLimits

0x6958,	// (0x00063ab5) blid2_tripm_pane_g1

0x6968,	// (0x00063ac5) blid2_tripm_pane_g2_ParamLimits

0x6968,	// (0x00063ac5) blid2_tripm_pane_g2

0x6974,	// (0x00063ad1) blid2_tripm_pane_g3_ParamLimits

0x6974,	// (0x00063ad1) blid2_tripm_pane_g3

0x6980,	// (0x00063add) blid2_tripm_pane_g4_ParamLimits

0x6980,	// (0x00063add) blid2_tripm_pane_g4

0x698c,	// (0x00063ae9) blid2_tripm_pane_g5_ParamLimits

0x698c,	// (0x00063ae9) blid2_tripm_pane_g5

0x0005,

0xf929,	// (0x0006ca86) blid2_tripm_pane_g_ParamLimits

0xf929,	// (0x0006ca86) blid2_tripm_pane_g

0x69a8,	// (0x00063b05) blid2_tripm_pane_t1_ParamLimits

0x69a8,	// (0x00063b05) blid2_tripm_pane_t1

0x69ba,	// (0x00063b17) blid2_tripm_pane_t2_ParamLimits

0x69ba,	// (0x00063b17) blid2_tripm_pane_t2

0x69cc,	// (0x00063b29) blid2_tripm_pane_t3_ParamLimits

0x69cc,	// (0x00063b29) blid2_tripm_pane_t3

0x0003,

0xf936,	// (0x0006ca93) blid2_tripm_pane_t_ParamLimits

0xf936,	// (0x0006ca93) blid2_tripm_pane_t

0x69fe,	// (0x00063b5b) cell_blid2_satellite_pane_ParamLimits

0x69fe,	// (0x00063b5b) cell_blid2_satellite_pane

0x6a1c,	// (0x00063b79) cell_blid2_satellite_pane_g1

0xd8db,	// (0x0006aa38) cell_blid2_satellite_pane_t1

0xa971,	// (0x00067ace) blid2_speed_pane_g1

0xd8ff,	// (0x0006aa5c) blid2_speed_pane_t1

0xd90d,	// (0x0006aa6a) blid2_speed_pane_t2

0x0001,

0xf93f,	// (0x0006ca9c) blid2_speed_pane_t

0xa971,	// (0x00067ace) blid2_navig_ring_pane_g1

0x6a25,	// (0x00063b82) blid2_navig_ring_pane_g2

0x6a2d,	// (0x00063b8a) blid2_navig_ring_pane_g3

0x6a35,	// (0x00063b92) blid2_navig_ring_pane_g4

0x6a3d,	// (0x00063b9a) blid2_navig_ring_pane_g5

0x0004,

0xf944,	// (0x0006caa1) blid2_navig_ring_pane_g

0x9b88,	// (0x00066ce5) bg_popup_window_pane_cp011

0xd91b,	// (0x0006aa78) popup_blid2_search_window_g1

0xd923,	// (0x0006aa80) popup_blid2_search_window_t1

0xd931,	// (0x0006aa8e) popup_blid2_search_window_t2

0x0001,

0xf94f,	// (0x0006caac) popup_blid2_search_window_t

0xaa98,	// (0x00067bf5) main_browser_pane_g1

0xa71a,	// (0x00067877) main_browser_pane_ParamLimits

0x3c87,	// (0x00060de4) bg_button_pane_cp011_ParamLimits

0x5a89,	// (0x00062be6) cell_vitu2_function_pane_g1_ParamLimits

0xb584,	// (0x000686e1) bg_popup_sub_pane_cp22_ParamLimits

0x635b,	// (0x000634b8) input_focus_pane_cp08_ParamLimits

0x6377,	// (0x000634d4) popup_vitu2_query_button_pane_ParamLimits

0x6377,	// (0x000634d4) popup_vitu2_query_button_pane

0x6386,	// (0x000634e3) popup_vitu2_query_input_button_pane

0xd56d,	// (0x0006a6ca) popup_vitu2_query_window_g1_ParamLimits

0x6390,	// (0x000634ed) popup_vitu2_query_window_g2_ParamLimits

0xf857,	// (0x0006c9b4) popup_vitu2_query_window_g_ParamLimits

0x9b88,	// (0x00066ce5) bg_button_pane_cp026

0x6a45,	// (0x00063ba2) popup_vitu2_query_input_button_pane_g1

0x9b88,	// (0x00066ce5) bg_button_pane_cp025

0xd93f,	// (0x0006aa9c) popup_vitu2_query_button_pane_t1

0x41e1,	// (0x0006133e) main_mp3_pane_t6

0x41f1,	// (0x0006134e) popup_slider_window_cp01

0x56c0,	// (0x0006281d) cam4_battery_pane

0x579e,	// (0x000628fb) cam4_battery_pane_cp02

0x67b8,	// (0x00063915) cam4_battery_pane_cp01

0x67b8,	// (0x00063915) cam4_battery_pane_cp03

0xd8f5,	// (0x0006aa52) cam4_battery_pane_g1

0xa971,	// (0x00067ace) cam4_battery_pane_g2

0x0001,

0xf954,	// (0x0006cab1) cam4_battery_pane_g

0xc91f,	// (0x00069a7c) popup_blid_sat_info2_window_t11

0x3051,	// (0x000601ae) aid_size_touch_mv_arrow_left_ParamLimits

0x307c,	// (0x000601d9) aid_size_touch_mv_arrow_right_ParamLimits

0xb223,	// (0x00068380) navi_pane_g1_ParamLimits

0x30bb,	// (0x00060218) navi_pane_g2_ParamLimits

0x30e9,	// (0x00060246) navi_pane_g3_ParamLimits

0xf339,	// (0x0006c496) navi_pane_g_ParamLimits

0x3143,	// (0x000602a0) navi_pane_mv_t1_ParamLimits

0x4c9a,	// (0x00061df7) grid_imed_effect_pane_ParamLimits

0x1be5,	// (0x0005ed42) aid_placing_vt_slider_lsc

0xa9d4,	// (0x00067b31) aid_placing_vt_slider_prt

0xa1e1,	// (0x0006733e) bg_tb_trans_pane_cp01_ParamLimits

0xcb87,	// (0x00069ce4) popup_image_details_window_g1_ParamLimits

0xcb9a,	// (0x00069cf7) popup_image_details_window_g2_ParamLimits

0xcbaf,	// (0x00069d0c) popup_image_details_window_g3_ParamLimits

0xcbaf,	// (0x00069d0c) popup_image_details_window_g3

0xf59b,	// (0x0006c6f8) popup_image_details_window_g_ParamLimits

0xcbc3,	// (0x00069d20) popup_image_details_window_t1_ParamLimits

0xcbd5,	// (0x00069d32) popup_image_details_window_t2_ParamLimits

0xcbee,	// (0x00069d4b) popup_image_details_window_t3_ParamLimits

0xcc02,	// (0x00069d5f) popup_image_details_window_t4_ParamLimits

0xcc1d,	// (0x00069d7a) popup_image_details_window_t5_ParamLimits

0xf5a2,	// (0x0006c6ff) popup_image_details_window_t_ParamLimits

0x66e4,	// (0x00063841) cl_header_name_pane_ParamLimits

0x66e4,	// (0x00063841) cl_header_name_pane

0x6a4d,	// (0x00063baa) cl_header_name_pane_t1_ParamLimits

0x6a4d,	// (0x00063baa) cl_header_name_pane_t1

0x6a64,	// (0x00063bc1) cl_header_name_pane_t2_ParamLimits

0x6a64,	// (0x00063bc1) cl_header_name_pane_t2

0x6a8e,	// (0x00063beb) cl_header_name_pane_t3_ParamLimits

0x6a8e,	// (0x00063beb) cl_header_name_pane_t3

0x0002,

0xf959,	// (0x0006cab6) cl_header_name_pane_t_ParamLimits

0xf959,	// (0x0006cab6) cl_header_name_pane_t

0x3114,	// (0x00060271) navi_pane_mv_g2_ParamLimits

0xd2c2,	// (0x0006a41f) field_vitu2_entry_pane_g1_ParamLimits

0xd2ce,	// (0x0006a42b) field_vitu2_entry_pane_g2_ParamLimits

0xb5a6,	// (0x00068703) field_vitu2_entry_pane_g3_ParamLimits

0xb5a6,	// (0x00068703) field_vitu2_entry_pane_g3

0xf760,	// (0x0006c8bd) field_vitu2_entry_pane_g_ParamLimits

0x5a17,	// (0x00062b74) cell_vitu2_itu_pane_g1_ParamLimits

0x5a2f,	// (0x00062b8c) cell_vitu2_itu_pane_g2_ParamLimits

0x5a2f,	// (0x00062b8c) cell_vitu2_itu_pane_g2

0x0001,

0xf76c,	// (0x0006c8c9) cell_vitu2_itu_pane_g_ParamLimits

0xf76c,	// (0x0006c8c9) cell_vitu2_itu_pane_g

0x3c87,	// (0x00060de4) bg_vkb2_func_pane_cp05_ParamLimits

0x3c87,	// (0x00060de4) bg_vkb2_func_pane_cp05

0x3c87,	// (0x00060de4) bg_vkb2_func_pane_cp03

0x3c87,	// (0x00060de4) bg_vkb2_func_pane_cp04

0x3c87,	// (0x00060de4) bg_vkb2_func_pane_cp10_ParamLimits

0x3c87,	// (0x00060de4) bg_vkb2_func_pane_cp10

0x6685,	// (0x000637e2) bg_vkb2_func_pane_cp08

0x6343,	// (0x000634a0) bg_vkb2_func_pane_cp06

0x6668,	// (0x000637c5) bg_vkb2_func_pane_cp07

0xd832,	// (0x0006a98f) bg_vkb2_func_pane_cp11_ParamLimits

0xd832,	// (0x0006a98f) bg_vkb2_func_pane_cp11

0xd847,	// (0x0006a9a4) bg_vkb2_func_pane_cp12_ParamLimits

0xd847,	// (0x0006a9a4) bg_vkb2_func_pane_cp12

0x9b88,	// (0x00066ce5) bg_vkb2_func_pane_cp09

0xd2ec,	// (0x0006a449) bg_vkb2_func_pane_g1

0xaba9,	// (0x00067d06) bg_vkb2_func_pane_g2

0xd2f4,	// (0x0006a451) bg_vkb2_func_pane_g3

0xd2fc,	// (0x0006a459) bg_vkb2_func_pane_g4

0xd532,	// (0x0006a68f) bg_vkb2_func_pane_g5

0xd314,	// (0x0006a471) bg_vkb2_func_pane_g6

0xd31c,	// (0x0006a479) bg_vkb2_func_pane_g7

0xd30c,	// (0x0006a469) bg_vkb2_func_pane_g8

0xab89,	// (0x00067ce6) bg_vkb2_func_pane_g9

0x0008,

0xf960,	// (0x0006cabd) bg_vkb2_func_pane_g

0x699a,	// (0x00063af7) blid2_tripm_pane_g6_ParamLimits

0x699a,	// (0x00063af7) blid2_tripm_pane_g6

0xd20e,	// (0x0006a36b) mp4_progress_pane_g1

0x69f2,	// (0x00063b4f) blid2_tripm_values_pane_ParamLimits

0x69f2,	// (0x00063b4f) blid2_tripm_values_pane

0x6ab3,	// (0x00063c10) blid2_tripm_values_pane_t1

0x6ac1,	// (0x00063c1e) blid2_tripm_values_pane_t2

0xd94d,	// (0x0006aaaa) blid2_tripm_values_pane_t3

0x6acf,	// (0x00063c2c) blid2_tripm_values_pane_t4

0x6add,	// (0x00063c3a) blid2_tripm_values_pane_t5

0x6aeb,	// (0x00063c48) blid2_tripm_values_pane_t6

0xd95b,	// (0x0006aab8) blid2_tripm_values_pane_t7

0x6af9,	// (0x00063c56) blid2_tripm_values_pane_t8

0x6b07,	// (0x00063c64) blid2_tripm_values_pane_t9

0x0008,

0xf973,	// (0x0006cad0) blid2_tripm_values_pane_t

0x1c23,	// (0x0005ed80) call_video_pane_t1_ParamLimits

0x1c40,	// (0x0005ed9d) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0006c33f) call_video_pane_t_ParamLimits

0x3448,	// (0x000605a5) msg_header_pane_g1_ParamLimits

0xb437,	// (0x00068594) msg_header_pane_g2_ParamLimits

0xb437,	// (0x00068594) msg_header_pane_g2

0x0001,

0xf3dc,	// (0x0006c539) msg_header_pane_g_ParamLimits

0xf3dc,	// (0x0006c539) msg_header_pane_g

0xa71a,	// (0x00067877) main_clock2_pane_ParamLimits

0x4a13,	// (0x00061b70) grid_clock2_toolbar_pane_ParamLimits

0x4a13,	// (0x00061b70) grid_clock2_toolbar_pane

0x4a13,	// (0x00061b70) listscroll_clock2_pane_ParamLimits

0x4a13,	// (0x00061b70) listscroll_clock2_pane

0x4ac2,	// (0x00061c1f) main_clock2_pane_t3_ParamLimits

0x4ac2,	// (0x00061c1f) main_clock2_pane_t3

0x4ad4,	// (0x00061c31) main_clock2_pane_t4_ParamLimits

0x4ad4,	// (0x00061c31) main_clock2_pane_t4

0xd969,	// (0x0006aac6) cell_clock2_toolbar_pane

0xd971,	// (0x0006aace) cell_clock2_toolbar_pane_cp01

0xd971,	// (0x0006aace) cell_clock2_toolbar_pane_cp02

0xd979,	// (0x0006aad6) cell_clock2_toolbar_pane_cp03

0xd981,	// (0x0006aade) list_clock2_pane

0xb189,	// (0x000682e6) scroll_pane_cp10

0xd989,	// (0x0006aae6) list_single_clock2_pane_ParamLimits

0xd989,	// (0x0006aae6) list_single_clock2_pane

0xa94f,	// (0x00067aac) list_highlight_pane_cp08

0xd996,	// (0x0006aaf3) list_single_clock2_pane_t1

0xd9a4,	// (0x0006ab01) list_single_clock2_pane_t2

0x0001,

0x0728,	// (0x0005d885) list_single_clock2_pane_t

0x9b88,	// (0x00066ce5) bg_button_pane_cp10

0xd9b2,	// (0x0006ab0f) cell_clock2_toolbar_pane_g1

0x346e,	// (0x000605cb) aid_main_viewer_pane_g1_ParamLimits

0x346e,	// (0x000605cb) aid_main_viewer_pane_g1

0x347a,	// (0x000605d7) aid_main_viewer_pane_g2_ParamLimits

0x347a,	// (0x000605d7) aid_main_viewer_pane_g2

0x3486,	// (0x000605e3) aid_main_viewer_pane_g3_ParamLimits

0x3486,	// (0x000605e3) aid_main_viewer_pane_g3

0x3497,	// (0x000605f4) aid_main_viewer_pane_g4_ParamLimits

0x3497,	// (0x000605f4) aid_main_viewer_pane_g4

0x0003,

0xf3ed,	// (0x0006c54a) aid_main_viewer_pane_g_ParamLimits

0xf3ed,	// (0x0006c54a) aid_main_viewer_pane_g

0x3c68,	// (0x00060dc5) main_calc_pane_ParamLimits

0x3c95,	// (0x00060df2) main_dialer2_pane_ParamLimits

0x0f07,	// (0x0005e064) main_cam6_pane

0x0f07,	// (0x0005e064) main_vid6_pane

0x4a1f,	// (0x00061b7c) listscroll_gen_pane_cp06_ParamLimits

0x4a1f,	// (0x00061b7c) listscroll_gen_pane_cp06

0x4ae6,	// (0x00061c43) main_clock2_pane_t5_ParamLimits

0x4ae6,	// (0x00061c43) main_clock2_pane_t5

0x4b33,	// (0x00061c90) aid_call2_pane_cp10_ParamLimits

0x4b45,	// (0x00061ca2) aid_call_pane_cp10_ParamLimits

0xb1f8,	// (0x00068355) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1f8,	// (0x00068355) popup_clock_analogue_window_cp10_g2_ParamLimits

0x4b57,	// (0x00061cb4) popup_clock_analogue_window_cp10_g3_ParamLimits

0x4b57,	// (0x00061cb4) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1f8,	// (0x00068355) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf646,	// (0x0006c7a3) popup_clock_analogue_window_cp10_g_ParamLimits

0x4b6d,	// (0x00061cca) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5260,	// (0x000623bd) cell_dialer2_keypad_pane_g2_ParamLimits

0x5260,	// (0x000623bd) cell_dialer2_keypad_pane_g2

0x0001,

0xf6ff,	// (0x0006c85c) cell_dialer2_keypad_pane_g_ParamLimits

0xf6ff,	// (0x0006c85c) cell_dialer2_keypad_pane_g

0x527c,	// (0x000623d9) cell_dialer2_keypad_pane_t1

0x5d5d,	// (0x00062eba) main_cset_text2_pane_ParamLimits

0x5d5d,	// (0x00062eba) main_cset_text2_pane

0xd79a,	// (0x0006a8f7) area_vitu2_query_pane_g1_ParamLimits

0x6607,	// (0x00063764) area_vitu2_query_pane_g2_ParamLimits

0xf8aa,	// (0x0006ca07) area_vitu2_query_pane_g_ParamLimits

0xa304,	// (0x00067461) area_vitu2_query_pane_t7_ParamLimits

0xa304,	// (0x00067461) area_vitu2_query_pane_t7

0x6343,	// (0x000634a0) bg_button_pane_cp018_ParamLimits

0x6668,	// (0x000637c5) bg_button_pane_cp021_ParamLimits

0x6674,	// (0x000637d1) bg_button_pane_cp022_ParamLimits

0x6685,	// (0x000637e2) bg_vkb2_func_pane_cp08_ParamLimits

0x6343,	// (0x000634a0) bg_vkb2_func_pane_cp06_ParamLimits

0x6668,	// (0x000637c5) bg_vkb2_func_pane_cp07_ParamLimits

0x6697,	// (0x000637f4) input_focus_pane_cp09_ParamLimits

0x6b15,	// (0x00063c72) cam6_autofocus_pane_ParamLimits

0x6b15,	// (0x00063c72) cam6_autofocus_pane

0x6b37,	// (0x00063c94) cam6_image_uncrop_pane_ParamLimits

0x6b37,	// (0x00063c94) cam6_image_uncrop_pane

0x6b6d,	// (0x00063cca) cam6_indi_pane_ParamLimits

0x6b6d,	// (0x00063cca) cam6_indi_pane

0x6b87,	// (0x00063ce4) cam6_mode_pane_ParamLimits

0x6b87,	// (0x00063ce4) cam6_mode_pane

0x6b9b,	// (0x00063cf8) cam6_timer_pane_ParamLimits

0x6b9b,	// (0x00063cf8) cam6_timer_pane

0x6baf,	// (0x00063d0c) cam6_zoom_pane_ParamLimits

0x6baf,	// (0x00063d0c) cam6_zoom_pane

0x6bcb,	// (0x00063d28) cam6_mode_pane_g1_ParamLimits

0x6bcb,	// (0x00063d28) cam6_mode_pane_g1

0x6bd7,	// (0x00063d34) cam6_mode_pane_g2_ParamLimits

0x6bd7,	// (0x00063d34) cam6_mode_pane_g2

0x6be3,	// (0x00063d40) cam6_mode_pane_g3_ParamLimits

0x6be3,	// (0x00063d40) cam6_mode_pane_g3

0x6bef,	// (0x00063d4c) cam6_mode_pane_g4_ParamLimits

0x6bef,	// (0x00063d4c) cam6_mode_pane_g4

0x0003,

0xf986,	// (0x0006cae3) cam6_mode_pane_g_ParamLimits

0xf986,	// (0x0006cae3) cam6_mode_pane_g

0xcc37,	// (0x00069d94) bg_tb_trans_pane_cp08_ParamLimits

0xcc37,	// (0x00069d94) bg_tb_trans_pane_cp08

0xd9ba,	// (0x0006ab17) cam6_battery_pane_ParamLimits

0xd9ba,	// (0x0006ab17) cam6_battery_pane

0xd9d0,	// (0x0006ab2d) cam6_indi_pane_g1_ParamLimits

0xd9d0,	// (0x0006ab2d) cam6_indi_pane_g1

0xd9e2,	// (0x0006ab3f) cam6_indi_pane_g2_ParamLimits

0xd9e2,	// (0x0006ab3f) cam6_indi_pane_g2

0xd9f4,	// (0x0006ab51) cam6_indi_pane_g3_ParamLimits

0xd9f4,	// (0x0006ab51) cam6_indi_pane_g3

0x0002,

0x0736,	// (0x0005d893) cam6_indi_pane_g_ParamLimits

0x0736,	// (0x0005d893) cam6_indi_pane_g

0xda06,	// (0x0006ab63) cam6_indi_pane_t1_ParamLimits

0xda06,	// (0x0006ab63) cam6_indi_pane_t1

0x5822,	// (0x0006297f) cam6_autofocus_pane_g1

0x581a,	// (0x00062977) cam6_autofocus_pane_g2

0x5832,	// (0x0006298f) cam6_autofocus_pane_g3

0x582a,	// (0x00062987) cam6_autofocus_pane_g4

0x0003,

0xf98f,	// (0x0006caec) cam6_autofocus_pane_g

0xda2c,	// (0x0006ab89) cam6_timer_pane_g1

0xda34,	// (0x0006ab91) cam6_timer_pane_t1

0xda42,	// (0x0006ab9f) cam6_zoom_cont_pane

0xda4a,	// (0x0006aba7) cam6_zoom_pane_g1

0xda53,	// (0x0006abb0) cam6_zoom_pane_g2

0x6bfb,	// (0x00063d58) cam6_zoom_pane_g3

0x0002,

0xf998,	// (0x0006caf5) cam6_zoom_pane_g

0xa971,	// (0x00067ace) cam6_battery_pane_g1

0xa971,	// (0x00067ace) cam6_battery_pane_g2

0x0001,

0xf39d,	// (0x0006c4fa) cam6_battery_pane_g

0xda4a,	// (0x0006aba7) cam6_zoom_cont_pane_g1

0xda53,	// (0x0006abb0) cam6_zoom_cont_pane_g2

0xda5c,	// (0x0006abb9) cam6_zoom_cont_pane_g3

0x0002,

0x074d,	// (0x0005d8aa) cam6_zoom_cont_pane_g

0x6c19,	// (0x00063d76) cam6_mode_pane_cp_ParamLimits

0x6c19,	// (0x00063d76) cam6_mode_pane_cp

0x6c2d,	// (0x00063d8a) cam6_zoom_pane_cp_ParamLimits

0x6c2d,	// (0x00063d8a) cam6_zoom_pane_cp

0x6c49,	// (0x00063da6) vid6_image_uncrop_cif_pane_ParamLimits

0x6c49,	// (0x00063da6) vid6_image_uncrop_cif_pane

0x6c75,	// (0x00063dd2) vid6_image_uncrop_nhd_pane_ParamLimits

0x6c75,	// (0x00063dd2) vid6_image_uncrop_nhd_pane

0x6c94,	// (0x00063df1) vid6_image_uncrop_vga_pane_ParamLimits

0x6c94,	// (0x00063df1) vid6_image_uncrop_vga_pane

0x6cb3,	// (0x00063e10) vid6_image_uncrop_wvga_pane_ParamLimits

0x6cb3,	// (0x00063e10) vid6_image_uncrop_wvga_pane

0x6cd2,	// (0x00063e2f) vid6_indi_pane_ParamLimits

0x6cd2,	// (0x00063e2f) vid6_indi_pane

0xcc37,	// (0x00069d94) bg_tb_trans_pane_cp09_ParamLimits

0xcc37,	// (0x00069d94) bg_tb_trans_pane_cp09

0xda74,	// (0x0006abd1) cam6_battery_pane_cp_ParamLimits

0xda74,	// (0x0006abd1) cam6_battery_pane_cp

0xda80,	// (0x0006abdd) vid6_indi_pane_g1_ParamLimits

0xda80,	// (0x0006abdd) vid6_indi_pane_g1

0xda92,	// (0x0006abef) vid6_indi_pane_g2_ParamLimits

0xda92,	// (0x0006abef) vid6_indi_pane_g2

0xdaa4,	// (0x0006ac01) vid6_indi_pane_g3_ParamLimits

0xdaa4,	// (0x0006ac01) vid6_indi_pane_g3

0xdabb,	// (0x0006ac18) vid6_indi_pane_g4_ParamLimits

0xdabb,	// (0x0006ac18) vid6_indi_pane_g4

0xdad2,	// (0x0006ac2f) vid6_indi_pane_g5_ParamLimits

0xdad2,	// (0x0006ac2f) vid6_indi_pane_g5

0x0004,

0x0754,	// (0x0005d8b1) vid6_indi_pane_g_ParamLimits

0x0754,	// (0x0005d8b1) vid6_indi_pane_g

0xdaec,	// (0x0006ac49) vid6_indi_pane_t1_ParamLimits

0xdaec,	// (0x0006ac49) vid6_indi_pane_t1

0xdb02,	// (0x0006ac5f) vid6_indi_pane_t2_ParamLimits

0xdb02,	// (0x0006ac5f) vid6_indi_pane_t2

0xdb2a,	// (0x0006ac87) vid6_indi_pane_t3_ParamLimits

0xdb2a,	// (0x0006ac87) vid6_indi_pane_t3

0xdb52,	// (0x0006acaf) vid6_indi_pane_t4_ParamLimits

0xdb52,	// (0x0006acaf) vid6_indi_pane_t4

0x0003,

0x075f,	// (0x0005d8bc) vid6_indi_pane_t_ParamLimits

0x075f,	// (0x0005d8bc) vid6_indi_pane_t

0xdb76,	// (0x0006acd3) wait_bar_pane_cp08

0x6cf7,	// (0x00063e54) main_cset_text2_pane_t1_ParamLimits

0x6cf7,	// (0x00063e54) main_cset_text2_pane_t1

0x6c04,	// (0x00063d61) listscroll_gen_pane_cp06_t1_ParamLimits

0x6c04,	// (0x00063d61) listscroll_gen_pane_cp06_t1

0x0f07,	// (0x0005e064) main_cam6_set_pane

0xdc47,	// (0x0006ada4) bg_tb_trans_pane_cp06_ParamLimits

0x56c8,	// (0x00062825) cam4_indicators_pane_g1_ParamLimits

0x56d9,	// (0x00062836) cam4_indicators_pane_g2_ParamLimits

0xf73c,	// (0x0006c899) cam4_indicators_pane_g_ParamLimits

0x56f1,	// (0x0006284e) cam4_indicators_pane_t1_ParamLimits

0x3c87,	// (0x00060de4) bg_tb_trans_pane_cp07_ParamLimits

0x57a8,	// (0x00062905) vid4_indicators_pane_g1_ParamLimits

0x57be,	// (0x0006291b) vid4_indicators_pane_g2_ParamLimits

0x57d2,	// (0x0006292f) vid4_indicators_pane_g3_ParamLimits

0x57e5,	// (0x00062942) vid4_indicators_pane_g4_ParamLimits

0xf74e,	// (0x0006c8ab) vid4_indicators_pane_g_ParamLimits

0x5803,	// (0x00062960) vid4_indicators_pane_t1_ParamLimits

0x67c0,	// (0x0006391d) vid4_progress_pane_g1_ParamLimits

0x67d0,	// (0x0006392d) vid4_progress_pane_g2_ParamLimits

0x67e0,	// (0x0006393d) vid4_progress_pane_g3_ParamLimits

0x67f2,	// (0x0006394f) vid4_progress_pane_g4_ParamLimits

0xf8f5,	// (0x0006ca52) vid4_progress_pane_g_ParamLimits

0x6810,	// (0x0006396d) vid4_progress_pane_t1_ParamLimits

0x682a,	// (0x00063987) vid4_progress_pane_t2_ParamLimits

0x6843,	// (0x000639a0) vid4_progress_pane_t3_ParamLimits

0xf900,	// (0x0006ca5d) vid4_progress_pane_t_ParamLimits

0x6858,	// (0x000639b5) wait_bar_pane_cp07_ParamLimits

0x6d1e,	// (0x00063e7b) main_cam6_set_pane_g2_ParamLimits

0x6d1e,	// (0x00063e7b) main_cam6_set_pane_g2

0x6d2a,	// (0x00063e87) main_cset6_listscroll_pane_ParamLimits

0x6d2a,	// (0x00063e87) main_cset6_listscroll_pane

0x6d57,	// (0x00063eb4) main_cset6_slider_pane_ParamLimits

0x6d57,	// (0x00063eb4) main_cset6_slider_pane

0x6d63,	// (0x00063ec0) main_cset6_text2_pane_ParamLimits

0x6d63,	// (0x00063ec0) main_cset6_text2_pane

0xdb85,	// (0x0006ace2) main_cset6_text_pane

0xdb8d,	// (0x0006acea) main_cset_list_pane_copy1_ParamLimits

0xdb8d,	// (0x0006acea) main_cset_list_pane_copy1

0xdb9d,	// (0x0006acfa) scroll_pane_cp028_copy1

0x6d76,	// (0x00063ed3) cset_list_set_pane_copy1

0x6d86,	// (0x00063ee3) aid_position_infowindow_above_copy1

0x6d8e,	// (0x00063eeb) aid_position_infowindow_below_copy1

0x6d96,	// (0x00063ef3) cset_list_set_pane_g1_copy1

0x6d9e,	// (0x00063efb) cset_list_set_pane_g3_copy1_ParamLimits

0x6d9e,	// (0x00063efb) cset_list_set_pane_g3_copy1

0x6dad,	// (0x00063f0a) cset_list_set_pane_t1_copy1_ParamLimits

0x6dad,	// (0x00063f0a) cset_list_set_pane_t1_copy1

0xa1e1,	// (0x0006733e) list_highlight_pane_cp021_copy1_ParamLimits

0xa1e1,	// (0x0006733e) list_highlight_pane_cp021_copy1

0xdba6,	// (0x0006ad03) cset6_slider_pane_ParamLimits

0xdba6,	// (0x0006ad03) cset6_slider_pane

0xdbd2,	// (0x0006ad2f) main_cset6_slider_pane_g1_ParamLimits

0xdbd2,	// (0x0006ad2f) main_cset6_slider_pane_g1

0x6dc2,	// (0x00063f1f) main_cset6_slider_pane_g2_ParamLimits

0x6dc2,	// (0x00063f1f) main_cset6_slider_pane_g2

0xdbfa,	// (0x0006ad57) main_cset6_slider_pane_g3_ParamLimits

0xdbfa,	// (0x0006ad57) main_cset6_slider_pane_g3

0x6dea,	// (0x00063f47) main_cset6_slider_pane_g4_ParamLimits

0x6dea,	// (0x00063f47) main_cset6_slider_pane_g4

0x6df6,	// (0x00063f53) main_cset6_slider_pane_g5_ParamLimits

0x6df6,	// (0x00063f53) main_cset6_slider_pane_g5

0xd431,	// (0x0006a58e) main_cset6_slider_pane_g7_ParamLimits

0xd431,	// (0x0006a58e) main_cset6_slider_pane_g7

0xd43d,	// (0x0006a59a) main_cset6_slider_pane_g8_ParamLimits

0xd43d,	// (0x0006a59a) main_cset6_slider_pane_g8

0x6e02,	// (0x00063f5f) main_cset6_slider_pane_g9_ParamLimits

0x6e02,	// (0x00063f5f) main_cset6_slider_pane_g9

0x6e0e,	// (0x00063f6b) main_cset6_slider_pane_g10_ParamLimits

0x6e0e,	// (0x00063f6b) main_cset6_slider_pane_g10

0x6e1a,	// (0x00063f77) main_cset6_slider_pane_g11_ParamLimits

0x6e1a,	// (0x00063f77) main_cset6_slider_pane_g11

0x6e26,	// (0x00063f83) main_cset6_slider_pane_g12_ParamLimits

0x6e26,	// (0x00063f83) main_cset6_slider_pane_g12

0x6e32,	// (0x00063f8f) main_cset6_slider_pane_g13_ParamLimits

0x6e32,	// (0x00063f8f) main_cset6_slider_pane_g13

0x6e3e,	// (0x00063f9b) main_cset6_slider_pane_g14_ParamLimits

0x6e3e,	// (0x00063f9b) main_cset6_slider_pane_g14

0x6e4a,	// (0x00063fa7) main_cset6_slider_pane_g15_ParamLimits

0x6e4a,	// (0x00063fa7) main_cset6_slider_pane_g15

0x6e62,	// (0x00063fbf) main_cset6_slider_pane_g16_ParamLimits

0x6e62,	// (0x00063fbf) main_cset6_slider_pane_g16

0x6e6e,	// (0x00063fcb) main_cset6_slider_pane_g17_ParamLimits

0x6e6e,	// (0x00063fcb) main_cset6_slider_pane_g17

0x0011,

0xf99f,	// (0x0006cafc) main_cset6_slider_pane_g_ParamLimits

0xf99f,	// (0x0006cafc) main_cset6_slider_pane_g

0xdc06,	// (0x0006ad63) main_cset6_slider_pane_t1_ParamLimits

0xdc06,	// (0x0006ad63) main_cset6_slider_pane_t1

0x6e92,	// (0x00063fef) main_cset6_slider_pane_t2_ParamLimits

0x6e92,	// (0x00063fef) main_cset6_slider_pane_t2

0x6ebd,	// (0x0006401a) main_cset6_slider_pane_t3_ParamLimits

0x6ebd,	// (0x0006401a) main_cset6_slider_pane_t3

0x6ee8,	// (0x00064045) main_cset6_slider_pane_t4_ParamLimits

0x6ee8,	// (0x00064045) main_cset6_slider_pane_t4

0x6f13,	// (0x00064070) main_cset6_slider_pane_t5_ParamLimits

0x6f13,	// (0x00064070) main_cset6_slider_pane_t5

0xdc5e,	// (0x0006adbb) main_cset6_slider_pane_t7_ParamLimits

0xdc5e,	// (0x0006adbb) main_cset6_slider_pane_t7

0x6f3e,	// (0x0006409b) main_cset6_slider_pane_t8_ParamLimits

0x6f3e,	// (0x0006409b) main_cset6_slider_pane_t8

0x6f62,	// (0x000640bf) main_cset6_slider_pane_t9_ParamLimits

0x6f62,	// (0x000640bf) main_cset6_slider_pane_t9

0x6f86,	// (0x000640e3) main_cset6_slider_pane_t10_ParamLimits

0x6f86,	// (0x000640e3) main_cset6_slider_pane_t10

0x6faa,	// (0x00064107) main_cset6_slider_pane_t11_ParamLimits

0x6faa,	// (0x00064107) main_cset6_slider_pane_t11

0xdc94,	// (0x0006adf1) main_cset6_slider_pane_t14_ParamLimits

0xdc94,	// (0x0006adf1) main_cset6_slider_pane_t14

0xdccd,	// (0x0006ae2a) main_cset6_slider_pane_t15_ParamLimits

0xdccd,	// (0x0006ae2a) main_cset6_slider_pane_t15

0x000b,

0xf9c4,	// (0x0006cb21) main_cset6_slider_pane_t_ParamLimits

0xf9c4,	// (0x0006cb21) main_cset6_slider_pane_t

0xdd06,	// (0x0006ae63) cset_slider_pane_g1_copy1

0xdd0f,	// (0x0006ae6c) cset_slider_pane_g2_copy1

0xdd18,	// (0x0006ae75) cset_slider_pane_g3_copy1

0x9b88,	// (0x00066ce5) bg_popup_sub_pane_cp011_copy1

0xdd2a,	// (0x0006ae87) main_cset_text_pane_g1_copy1

0xd581,	// (0x0006a6de) main_cset_text_pane_t1_copy1

0xd58f,	// (0x0006a6ec) main_cset_text_pane_t2_copy1

0xd59d,	// (0x0006a6fa) main_cset_text_pane_t3_copy1

0xd5ab,	// (0x0006a708) main_cset_text_pane_t4_copy1

0xd5fa,	// (0x0006a757) main_cset_text_pane_t5_copy1

0xdd32,	// (0x0006ae8f) main_cset_text_pane_t6_copy1

0xdd40,	// (0x0006ae9d) main_cset_text_pane_t7_copy1

0x6feb,	// (0x00064148) main_cset_text2_pane_t1_copy1

0x3c87,	// (0x00060de4) main_ncimui_pane

0x3cee,	// (0x00060e4b) popup_query_ncimui_window_ParamLimits

0x3cee,	// (0x00060e4b) popup_query_ncimui_window

0xa263,	// (0x000673c0) field_cale_ev2_pane_g4_ParamLimits

0xa263,	// (0x000673c0) field_cale_ev2_pane_g4

0x4f36,	// (0x00062093) cell_video_dialer_keypad_pane_g2_ParamLimits

0x4f36,	// (0x00062093) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6db,	// (0x0006c838) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6db,	// (0x0006c838) cell_video_dialer_keypad_pane_g

0x4f4e,	// (0x000620ab) cell_video_dialer_keypad_pane_t1

0x9b88,	// (0x00066ce5) bg_popup_window_pane_cp012

0xc584,	// (0x000696e1) heading_pane_cp06

0xdd6c,	// (0x0006aec9) ncim_query_content_pane

0x9b88,	// (0x00066ce5) bg_popup_heading_pane_cp01

0xdd74,	// (0x0006aed1) ncim_heading_pane_t1

0xdd82,	// (0x0006aedf) ncim_indicator_popup_pane

0xdd94,	// (0x0006aef1) ncim_query_button_pane

0xddaa,	// (0x0006af07) ncim_query_content_pane_t1

0xddbc,	// (0x0006af19) ncim_query_content_pane_t2

0x0005,

0xfa08,	// (0x0006cb65) ncim_query_content_pane_t

0xddf6,	// (0x0006af53) ncim_query_list_pane

0xde08,	// (0x0006af65) ncim_query_popup_pane

0xdd82,	// (0x0006aedf) ncim_indicator_popup_pane_ParamLimits

0x7147,	// (0x000642a4) ncim_query_content_pane_g1_ParamLimits

0x7147,	// (0x000642a4) ncim_query_content_pane_g1

0xddaa,	// (0x0006af07) ncim_query_content_pane_t1_ParamLimits

0xddbc,	// (0x0006af19) ncim_query_content_pane_t2_ParamLimits

0x7153,	// (0x000642b0) ncim_query_content_pane_t3_ParamLimits

0x7153,	// (0x000642b0) ncim_query_content_pane_t3

0x7170,	// (0x000642cd) ncim_query_content_pane_t4_ParamLimits

0x7170,	// (0x000642cd) ncim_query_content_pane_t4

0x718d,	// (0x000642ea) ncim_query_content_pane_t5_ParamLimits

0x718d,	// (0x000642ea) ncim_query_content_pane_t5

0xddce,	// (0x0006af2b) ncim_query_content_pane_t6_ParamLimits

0xddce,	// (0x0006af2b) ncim_query_content_pane_t6

0xfa08,	// (0x0006cb65) ncim_query_content_pane_t_ParamLimits

0xddf6,	// (0x0006af53) ncim_query_list_pane_ParamLimits

0xde08,	// (0x0006af65) ncim_query_popup_pane_ParamLimits

0xde1c,	// (0x0006af79) wait_bar_pane_cp04

0x9b88,	// (0x00066ce5) input_focus_pane_cp011

0xde24,	// (0x0006af81) ncim_query_popup_pane_t1

0xde32,	// (0x0006af8f) ncim_list_query_list_pane_ParamLimits

0xde32,	// (0x0006af8f) ncim_list_query_list_pane

0x9b88,	// (0x00066ce5) bg_button_pane_cp027

0xde45,	// (0x0006afa2) ncim_query_button_pane_g1

0x9b88,	// (0x00066ce5) list_highlight_pane_cp012

0xde4f,	// (0x0006afac) ncim_list_query_list_pane_g1

0xde57,	// (0x0006afb4) ncim_list_query_list_pane_t1

0x56e5,	// (0x00062842) cam4_indicators_pane_g3_ParamLimits

0x56e5,	// (0x00062842) cam4_indicators_pane_g3

0x57f1,	// (0x0006294e) vid4_indicators_pane_g5_ParamLimits

0x57f1,	// (0x0006294e) vid4_indicators_pane_g5

0x6801,	// (0x0006395e) vid4_progress_pane_g5_ParamLimits

0x6801,	// (0x0006395e) vid4_progress_pane_g5

0x701d,	// (0x0006417a) main_ncimui_pane_g1

0x7089,	// (0x000641e6) ncimui_group_query_pane_ParamLimits

0x7089,	// (0x000641e6) ncimui_group_query_pane

0x70e3,	// (0x00064240) ncimui_list_pane_ParamLimits

0x70e3,	// (0x00064240) ncimui_list_pane

0x710a,	// (0x00064267) ncimui_text_pane_ParamLimits

0x710a,	// (0x00064267) ncimui_text_pane

0x71aa,	// (0x00064307) ncimui_text_pane_t1_ParamLimits

0x71aa,	// (0x00064307) ncimui_text_pane_t1

0xde65,	// (0x0006afc2) ncimui_list_single_graphic_pane_ParamLimits

0xde65,	// (0x0006afc2) ncimui_list_single_graphic_pane

0x71c9,	// (0x00064326) ncimui_query_pane_ParamLimits

0x71c9,	// (0x00064326) ncimui_query_pane

0x9b88,	// (0x00066ce5) list_highlight_pane_cp013

0xde75,	// (0x0006afd2) ncim_list_query_list_pane_t1_copy1

0xde4f,	// (0x0006afac) ncim_list_single_graphic_pane_g1

0x71dc,	// (0x00064339) ncim_query_button_pane_cp01

0x71e8,	// (0x00064345) ncim_query_entry_pane_ParamLimits

0x71e8,	// (0x00064345) ncim_query_entry_pane

0x71fb,	// (0x00064358) ncimui_query_pane_g1

0x7207,	// (0x00064364) ncimui_query_pane_t1_ParamLimits

0x7207,	// (0x00064364) ncimui_query_pane_t1

0xa1e1,	// (0x0006733e) input_focus_pane_cp012

0xde83,	// (0x0006afe0) ncim_query_entry_pane_t1

0xa71a,	// (0x00067877) main_im_pane_ParamLimits

0x3c87,	// (0x00060de4) main_mobtv_pane_ParamLimits

0x3c87,	// (0x00060de4) main_mobtv_pane

0x6e7a,	// (0x00063fd7) main_cset6_slider_pane_g18_ParamLimits

0x6e7a,	// (0x00063fd7) main_cset6_slider_pane_g18

0x6e86,	// (0x00063fe3) main_cset6_slider_pane_g19_ParamLimits

0x6e86,	// (0x00063fe3) main_cset6_slider_pane_g19

0xb5a6,	// (0x00068703) bg_main_mobtv_pane_ParamLimits

0xb5a6,	// (0x00068703) bg_main_mobtv_pane

0x7220,	// (0x0006437d) main_mobtv_info_pane

0x722b,	// (0x00064388) main_mobtv_loading_pane_ParamLimits

0x722b,	// (0x00064388) main_mobtv_loading_pane

0xde95,	// (0x0006aff2) main_mobtv_pg_channel_list_pane

0xde9f,	// (0x0006affc) main_mobtv_pg_hdr_pane

0x7238,	// (0x00064395) main_mobtv_programe_curr_pane_ParamLimits

0x7238,	// (0x00064395) main_mobtv_programe_curr_pane

0x7245,	// (0x000643a2) main_mobtv_programe_next_pane_ParamLimits

0x7245,	// (0x000643a2) main_mobtv_programe_next_pane

0xdea8,	// (0x0006b005) popup_mobtv_noti_window

0xa971,	// (0x00067ace) main_tv_pg_hdr_pane_g1

0xdeb2,	// (0x0006b00f) main_tv_pg_hdr_pane_g2

0xdeba,	// (0x0006b017) main_tv_pg_hdr_pane_g3

0xdec2,	// (0x0006b01f) main_tv_pg_hdr_pane_g4

0xdeca,	// (0x0006b027) main_tv_pg_hdr_pane_g5

0xded4,	// (0x0006b031) main_tv_pg_hdr_pane_g6

0xdede,	// (0x0006b03b) main_tv_pg_hdr_pane_g7

0xdee8,	// (0x0006b045) main_tv_pg_hdr_pane_g8

0xdef2,	// (0x0006b04f) main_tv_pg_hdr_pane_g9

0xdefc,	// (0x0006b059) main_tv_pg_hdr_pane_g10

0xdf06,	// (0x0006b063) main_tv_pg_hdr_pane_g11

0x000a,

0xfa15,	// (0x0006cb72) main_tv_pg_hdr_pane_g

0xdf10,	// (0x0006b06d) main_tv_pg_hdr_pane_t1

0xdf1e,	// (0x0006b07b) main_tv_pg_hdr_pane_t2

0xdf2c,	// (0x0006b089) main_tv_pg_hdr_pane_t3

0xdf3c,	// (0x0006b099) main_tv_pg_hdr_pane_t4

0xdf4c,	// (0x0006b0a9) main_tv_pg_hdr_pane_t5

0x0004,

0xfa2c,	// (0x0006cb89) main_tv_pg_hdr_pane_t

0xdf5c,	// (0x0006b0b9) single_mobtv_pg_channel_pane_ParamLimits

0xdf5c,	// (0x0006b0b9) single_mobtv_pg_channel_pane

0xdf77,	// (0x0006b0d4) single_mobtv_pg_channel_table_pane

0xdf80,	// (0x0006b0dd) single_mobtv_pg_channel_thumb_pane

0xdf89,	// (0x0006b0e6) single_tv_pg_channel_pane_g1

0xdf92,	// (0x0006b0ef) single_tv_pg_channel_pane_g2

0x0001,

0x0800,	// (0x0005d95d) single_tv_pg_channel_pane_g

0xa6a8,	// (0x00067805) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa6a8,	// (0x00067805) bg_single_mobtv_pg_channel_thumb_pane

0xdf9b,	// (0x0006b0f8) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf9b,	// (0x0006b0f8) single_mobtv_pg_channel_thumb_pane_g1

0xdfa9,	// (0x0006b106) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdfa9,	// (0x0006b106) single_mobtv_pg_channel_thumb_pane_g2

0xdfb5,	// (0x0006b112) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdfb5,	// (0x0006b112) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0805,	// (0x0005d962) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0805,	// (0x0005d962) single_mobtv_pg_channel_thumb_pane_g

0xdfc1,	// (0x0006b11e) single_mobtv_pg_channel_thumb_pane_t1

0xdfcf,	// (0x0006b12c) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x080c,	// (0x0005d969) single_mobtv_pg_channel_thumb_pane_t

0xa971,	// (0x00067ace) bg_single_mobtv_pg_channel_table_pane_g1

0xa971,	// (0x00067ace) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf39d,	// (0x0006c4fa) bg_single_mobtv_pg_channel_table_pane_g

0xdfdd,	// (0x0006b13a) single_mobtv_pg_channel_table_pane_t1

0xdfeb,	// (0x0006b148) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x0811,	// (0x0005d96e) single_mobtv_pg_channel_table_pane_t

0x725a,	// (0x000643b7) main_mobtv_info_pane_g1_ParamLimits

0x725a,	// (0x000643b7) main_mobtv_info_pane_g1

0x7276,	// (0x000643d3) main_mobtv_info_pane_t1_ParamLimits

0x7276,	// (0x000643d3) main_mobtv_info_pane_t1

0x72ee,	// (0x0006444b) main_mobtv_info_pane_t2_ParamLimits

0x72ee,	// (0x0006444b) main_mobtv_info_pane_t2

0x0002,

0xfa3c,	// (0x0006cb99) main_mobtv_info_pane_t_ParamLimits

0xfa3c,	// (0x0006cb99) main_mobtv_info_pane_t

0x737f,	// (0x000644dc) wait_bar_pane_cp05

0x7391,	// (0x000644ee) main_mobtv_loading_pane_g1_ParamLimits

0x7391,	// (0x000644ee) main_mobtv_loading_pane_g1

0x739d,	// (0x000644fa) main_mobtv_loading_pane_g2_ParamLimits

0x739d,	// (0x000644fa) main_mobtv_loading_pane_g2

0x73a9,	// (0x00064506) main_mobtv_loading_pane_g3_ParamLimits

0x73a9,	// (0x00064506) main_mobtv_loading_pane_g3

0x0002,

0xfa43,	// (0x0006cba0) main_mobtv_loading_pane_g_ParamLimits

0xfa43,	// (0x0006cba0) main_mobtv_loading_pane_g

0xdff9,	// (0x0006b156) main_mobtv_loading_pane_t1_ParamLimits

0xdff9,	// (0x0006b156) main_mobtv_loading_pane_t1

0xe011,	// (0x0006b16e) main_mobtv_loading_pane_t2_ParamLimits

0xe011,	// (0x0006b16e) main_mobtv_loading_pane_t2

0x0001,

0x0829,	// (0x0005d986) main_mobtv_loading_pane_t_ParamLimits

0x0829,	// (0x0005d986) main_mobtv_loading_pane_t

0x73b7,	// (0x00064514) wait_bar_pane_cp06_ParamLimits

0x73b7,	// (0x00064514) wait_bar_pane_cp06

0xe035,	// (0x0006b192) main_mobtv_programe_curr_pane_t1

0xe043,	// (0x0006b1a0) main_mobtv_programe_curr_pane_t2

0x0001,

0x082e,	// (0x0005d98b) main_mobtv_programe_curr_pane_t

0xe051,	// (0x0006b1ae) main_mobtv_programe_next_pane_t1

0xe05f,	// (0x0006b1bc) main_mobtv_programe_next_pane_t2

0xe06d,	// (0x0006b1ca) main_mobtv_programe_next_pane_t3

0x0002,

0x0833,	// (0x0005d990) main_mobtv_programe_next_pane_t

0x9b88,	// (0x00066ce5) bg_popup_mobtv_noti_window_pane

0xe07b,	// (0x0006b1d8) popup_mobtv_noti_window_g1

0xe083,	// (0x0006b1e0) popup_mobtv_noti_window_t1

0xe091,	// (0x0006b1ee) popup_mobtv_noti_window_t2

0x0001,

0x083a,	// (0x0005d997) popup_mobtv_noti_window_t

0xa971,	// (0x00067ace) bg_popup_mobtv_noti_window_pane_g1

0x0f07,	// (0x0005e064) sc_clock_pane

0x0f07,	// (0x0005e064) main_fs_bigclock_pane

0x69e0,	// (0x00063b3d) blid2_tripm_pane_t4_ParamLimits

0x69e0,	// (0x00063b3d) blid2_tripm_pane_t4

0x73c3,	// (0x00064520) sc_clock_pane_g1_ParamLimits

0x73c3,	// (0x00064520) sc_clock_pane_g1

0x73d1,	// (0x0006452e) sc_clock_pane_t1_ParamLimits

0x73d1,	// (0x0006452e) sc_clock_pane_t1

0x73e6,	// (0x00064543) sc_clock_pane_t2_ParamLimits

0x73e6,	// (0x00064543) sc_clock_pane_t2

0x73f8,	// (0x00064555) sc_clock_pane_t3_ParamLimits

0x73f8,	// (0x00064555) sc_clock_pane_t3

0x0004,

0xfa4a,	// (0x0006cba7) sc_clock_pane_t_ParamLimits

0xfa4a,	// (0x0006cba7) sc_clock_pane_t

0x822f,	// (0x0006538c) main_fs_bigclock_indicator_pane_ParamLimits

0x822f,	// (0x0006538c) main_fs_bigclock_indicator_pane

0x7487,	// (0x000645e4) main_fs_bigclock_pane_g1_ParamLimits

0x7487,	// (0x000645e4) main_fs_bigclock_pane_g1

0x823b,	// (0x00065398) main_fs_bigclock_pane_t1_ParamLimits

0x823b,	// (0x00065398) main_fs_bigclock_pane_t1

0x824d,	// (0x000653aa) main_fs_bigclock_pane_t2_ParamLimits

0x824d,	// (0x000653aa) main_fs_bigclock_pane_t2

0x8261,	// (0x000653be) main_fs_bigclock_pane_t3_ParamLimits

0x8261,	// (0x000653be) main_fs_bigclock_pane_t3

0x0002,

0xfb90,	// (0x0006cced) main_fs_bigclock_pane_t_ParamLimits

0xfb90,	// (0x0006cced) main_fs_bigclock_pane_t

0xe779,	// (0x0006b8d6) main_fs_bigclock_indicator_pane_g1

0xdd9c,	// (0x0006aef9) ncim_query_content_pane_g2_ParamLimits

0xdd9c,	// (0x0006aef9) ncim_query_content_pane_g2

0x0001,

0xfa03,	// (0x0006cb60) ncim_query_content_pane_g_ParamLimits

0xfa03,	// (0x0006cb60) ncim_query_content_pane_g

0x740a,	// (0x00064567) sc_clock_pane_t4_ParamLimits

0x740a,	// (0x00064567) sc_clock_pane_t4

0x3c87,	// (0x00060de4) main_radioblah_pane

0x5589,	// (0x000626e6) cell_call4_button_pane_t1_copy1_ParamLimits

0x5589,	// (0x000626e6) cell_call4_button_pane_t1_copy1

0x7039,	// (0x00064196) main_ncimui_pane_t1_ParamLimits

0x7039,	// (0x00064196) main_ncimui_pane_t1

0x7053,	// (0x000641b0) main_ncimui_pane_t2_ParamLimits

0x7053,	// (0x000641b0) main_ncimui_pane_t2

0x0002,

0xf9fc,	// (0x0006cb59) main_ncimui_pane_t_ParamLimits

0xf9fc,	// (0x0006cb59) main_ncimui_pane_t

0xe09f,	// (0x0006b1fc) main_radioblah_anim_pane_ParamLimits

0xe09f,	// (0x0006b1fc) main_radioblah_anim_pane

0xe0b0,	// (0x0006b20d) main_radioblah_info_pane_ParamLimits

0xe0b0,	// (0x0006b20d) main_radioblah_info_pane

0xe0c4,	// (0x0006b221) main_radioblah_pane_t1_ParamLimits

0xe0c4,	// (0x0006b221) main_radioblah_pane_t1

0xe0e0,	// (0x0006b23d) main_radioblah_pane_t2_ParamLimits

0xe0e0,	// (0x0006b23d) main_radioblah_pane_t2

0x0003,

0x0860,	// (0x0005d9bd) main_radioblah_pane_t_ParamLimits

0x0860,	// (0x0005d9bd) main_radioblah_pane_t

0x7626,	// (0x00064783) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7626,	// (0x00064783) main_radioblah_rocker_ctrl_pane

0xe128,	// (0x0006b285) main_radioblah_info_pane_t1_ParamLimits

0xe128,	// (0x0006b285) main_radioblah_info_pane_t1

0x766f,	// (0x000647cc) main_radioblah_info_pane_t2_ParamLimits

0x766f,	// (0x000647cc) main_radioblah_info_pane_t2

0x0003,

0xfa6b,	// (0x0006cbc8) main_radioblah_info_pane_t_ParamLimits

0xfa6b,	// (0x0006cbc8) main_radioblah_info_pane_t

0xa971,	// (0x00067ace) main_radioblah_rocker_ctrl_pane_g1

0x771f,	// (0x0006487c) main_radioblah_rocker_ctrl_pane_g2

0x7727,	// (0x00064884) main_radioblah_rocker_ctrl_pane_g3

0x772f,	// (0x0006488c) main_radioblah_rocker_ctrl_pane_g4

0x7737,	// (0x00064894) main_radioblah_rocker_ctrl_pane_g5

0x773f,	// (0x0006489c) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa74,	// (0x0006cbd1) main_radioblah_rocker_ctrl_pane_g

0x6feb,	// (0x00064148) main_cset_text2_pane_t1_copy1_ParamLimits

0x5612,	// (0x0006276f) cam4_image_uncrop_qvga_pane

0x5757,	// (0x000628b4) vid4_image_uncrop_qcif_pane

0x6b5f,	// (0x00063cbc) cam6_image_uncrop_qvga_pane_ParamLimits

0x6b5f,	// (0x00063cbc) cam6_image_uncrop_qvga_pane

0xda64,	// (0x0006abc1) vid6_image_uncrop_qcif_pane_ParamLimits

0xda64,	// (0x0006abc1) vid6_image_uncrop_qcif_pane

0x9b88,	// (0x00066ce5) bg_popup_preview_window_pane_cp03

0xdd4e,	// (0x0006aeab) list_cset_text2_pane

0xdd56,	// (0x0006aeb3) main_cset6_text2_pane_g1

0xdd5e,	// (0x0006aebb) main_cset6_text2_pane_t1

0x7747,	// (0x000648a4) list_cset_text2_pane_t1_ParamLimits

0x7747,	// (0x000648a4) list_cset_text2_pane_t1

0x3c87,	// (0x00060de4) main_radioblah_pane_ParamLimits

0x736b,	// (0x000644c8) main_mobtv_info_pane_t3_ParamLimits

0x736b,	// (0x000644c8) main_mobtv_info_pane_t3

0x7614,	// (0x00064771) main_radioblah_pane_g1

0x763f,	// (0x0006479c) main_radioblah_info_pane_g1

0x76c4,	// (0x00064821) main_radioblah_info_pane_t3_ParamLimits

0x76c4,	// (0x00064821) main_radioblah_info_pane_t3

0x2bdc,	// (0x0005fd39) highlight_cell_cale_month_pane_ParamLimits

0x2bdc,	// (0x0005fd39) highlight_cell_cale_month_pane

0x0f07,	// (0x0005e064) main_phob_fisheye_pane

0xcd41,	// (0x00069e9e) scroll_pane_cp0031_ParamLimits

0xcd41,	// (0x00069e9e) scroll_pane_cp0031

0xdb76,	// (0x0006acd3) wait_bar_pane_cp08_ParamLimits

0x6d76,	// (0x00063ed3) cset_list_set_pane_copy1_ParamLimits

0xe162,	// (0x0006b2bf) highlight_cell_cale_month_pane_g1

0x775e,	// (0x000648bb) highlight_cell_cale_month_pane_t1

0xd7ee,	// (0x0006a94b) list_gen_pane_cp01

0xd41c,	// (0x0006a579) scroll_pane_01

0x776c,	// (0x000648c9) list_single_double_fisheye_pane

0x7775,	// (0x000648d2) list_double_fisheye_pane_g1_ParamLimits

0x7775,	// (0x000648d2) list_double_fisheye_pane_g1

0x7781,	// (0x000648de) list_double_fisheye_pane_g2_ParamLimits

0x7781,	// (0x000648de) list_double_fisheye_pane_g2

0x7795,	// (0x000648f2) list_double_fisheye_pane_g3_ParamLimits

0x7795,	// (0x000648f2) list_double_fisheye_pane_g3

0x0004,

0xfa81,	// (0x0006cbde) list_double_fisheye_pane_g_ParamLimits

0xfa81,	// (0x0006cbde) list_double_fisheye_pane_g

0x77be,	// (0x0006491b) list_double_fisheye_pane_t1_ParamLimits

0x77be,	// (0x0006491b) list_double_fisheye_pane_t1

0x77d9,	// (0x00064936) list_double_fisheye_pane_t2_ParamLimits

0x77d9,	// (0x00064936) list_double_fisheye_pane_t2

0x0001,

0xfa8c,	// (0x0006cbe9) list_double_fisheye_pane_t_ParamLimits

0xfa8c,	// (0x0006cbe9) list_double_fisheye_pane_t

0x0f07,	// (0x0005e064) main_call5_pane

0x7430,	// (0x0006458d) sc_swipe_pane_ParamLimits

0x7430,	// (0x0006458d) sc_swipe_pane

0x7807,	// (0x00064964) call5_image_pane_ParamLimits

0x7807,	// (0x00064964) call5_image_pane

0x7819,	// (0x00064976) call5_swipe_1_pane_ParamLimits

0x7819,	// (0x00064976) call5_swipe_1_pane

0x7825,	// (0x00064982) call5_swipe_2_pane_ParamLimits

0x7825,	// (0x00064982) call5_swipe_2_pane

0x783f,	// (0x0006499c) popup_call5_audio_first_window_ParamLimits

0x783f,	// (0x0006499c) popup_call5_audio_first_window

0xa6a8,	// (0x00067805) call5_swipe_1_pane_g1_ParamLimits

0xa6a8,	// (0x00067805) call5_swipe_1_pane_g1

0xe16a,	// (0x0006b2c7) call5_swipe_1_pane_g2_ParamLimits

0xe16a,	// (0x0006b2c7) call5_swipe_1_pane_g2

0x0001,

0xfa91,	// (0x0006cbee) call5_swipe_1_pane_g_ParamLimits

0xfa91,	// (0x0006cbee) call5_swipe_1_pane_g

0xe176,	// (0x0006b2d3) call5_swipe_1_pane_t1_ParamLimits

0xe176,	// (0x0006b2d3) call5_swipe_1_pane_t1

0xa6a8,	// (0x00067805) call5_swipe_2_pane_g1_ParamLimits

0xa6a8,	// (0x00067805) call5_swipe_2_pane_g1

0xe18b,	// (0x0006b2e8) call5_swipe_2_pane_g2_ParamLimits

0xe18b,	// (0x0006b2e8) call5_swipe_2_pane_g2

0x0001,

0xfa96,	// (0x0006cbf3) call5_swipe_2_pane_g_ParamLimits

0xfa96,	// (0x0006cbf3) call5_swipe_2_pane_g

0xe197,	// (0x0006b2f4) call5_swipe_2_pane_t1_ParamLimits

0xe197,	// (0x0006b2f4) call5_swipe_2_pane_t1

0xe1ac,	// (0x0006b309) sc_swipe_pane_g1_ParamLimits

0xe1ac,	// (0x0006b309) sc_swipe_pane_g1

0xe1b9,	// (0x0006b316) sc_swipe_pane_g2_ParamLimits

0xe1b9,	// (0x0006b316) sc_swipe_pane_g2

0x0001,

0xfa9b,	// (0x0006cbf8) sc_swipe_pane_g_ParamLimits

0xfa9b,	// (0x0006cbf8) sc_swipe_pane_g

0xe1c5,	// (0x0006b322) sc_swipe_pane_t1_ParamLimits

0xe1c5,	// (0x0006b322) sc_swipe_pane_t1

0x0f07,	// (0x0005e064) main_cmail_launcher_pane

0x784f,	// (0x000649ac) aid_size_cell_cmail_l_ParamLimits

0x784f,	// (0x000649ac) aid_size_cell_cmail_l

0x785d,	// (0x000649ba) grid_cmail_l_pane_ParamLimits

0x785d,	// (0x000649ba) grid_cmail_l_pane

0x786b,	// (0x000649c8) cell_cmail_l_pane_ParamLimits

0x786b,	// (0x000649c8) cell_cmail_l_pane

0x7886,	// (0x000649e3) cell_cmail_l_pane_g1_ParamLimits

0x7886,	// (0x000649e3) cell_cmail_l_pane_g1

0x7892,	// (0x000649ef) cell_cmail_l_pane_t1_ParamLimits

0x7892,	// (0x000649ef) cell_cmail_l_pane_t1

0x78a8,	// (0x00064a05) cell_cmail_l_pane_t2_ParamLimits

0x78a8,	// (0x00064a05) cell_cmail_l_pane_t2

0x0001,

0xfaa0,	// (0x0006cbfd) cell_cmail_l_pane_t_ParamLimits

0xfaa0,	// (0x0006cbfd) cell_cmail_l_pane_t

0xa1e1,	// (0x0006733e) grid_highlight_pane_cp018_ParamLimits

0xa1e1,	// (0x0006733e) grid_highlight_pane_cp018

0x0dfa,	// (0x0005df57) main2_pane_ParamLimits

0x0dfa,	// (0x0005df57) main2_pane

0xa7a9,	// (0x00067906) popup_sp_fs_action_menu_bg_pane_g1

0xa7b1,	// (0x0006790e) popup_sp_fs_action_menu_bg_pane_g2

0xa7b9,	// (0x00067916) popup_sp_fs_action_menu_bg_pane_g3

0xa7c1,	// (0x0006791e) popup_sp_fs_action_menu_bg_pane_g4

0xa7c9,	// (0x00067926) popup_sp_fs_action_menu_bg_pane_g5

0xa7d1,	// (0x0006792e) popup_sp_fs_action_menu_bg_pane_g6

0xa7d9,	// (0x00067936) popup_sp_fs_action_menu_bg_pane_g7

0xa7e1,	// (0x0006793e) popup_sp_fs_action_menu_bg_pane_g8

0xa7e9,	// (0x00067946) popup_sp_fs_action_menu_bg_pane_g9

0xa7f1,	// (0x0006794e) popup_sp_fs_action_menu_bg_pane_g10

0xa7f1,	// (0x0006794e) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0006c262) popup_sp_fs_action_menu_bg_pane_g

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g3_g1

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g3_g2

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0006c310) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0006c310) list_medium_line_x2_t3_g3_g

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g3_t1

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g3_t2

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0006c317) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0006c317) list_medium_line_x2_t3_g3_t

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g2_g1

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0006c31e) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0006c31e) list_medium_line_x2_t3_g2_g

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g2_t1

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g2_t2

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0006c317) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0006c317) list_medium_line_x2_t3_g2_t

0xa6a8,	// (0x00067805) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t4_g4_g1

0xa6a8,	// (0x00067805) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t4_g4_g2

0xa6a8,	// (0x00067805) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t4_g4_g3

0xa6a8,	// (0x00067805) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0006c323) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0006c323) list_medium_line_x2_t4_g4_g

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g4_t1

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g4_t2

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g4_t3

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0006c32c) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0006c32c) list_medium_line_x2_t4_g4_t

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g4_g1

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g4_g2

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g4_g3

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0006c323) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0006c323) list_medium_line_x2_t2_g4_g

0xa98b,	// (0x00067ae8) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t2_g4_t1

0xa98b,	// (0x00067ae8) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf236,	// (0x0006c393) list_medium_line_x2_t2_g4_t_ParamLimits

0xf236,	// (0x0006c393) list_medium_line_x2_t2_g4_t

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g3_g1

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g3_g2

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0006c310) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0006c310) list_medium_line_x2_t2_g3_g

0xa98b,	// (0x00067ae8) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t2_g3_t1

0xa98b,	// (0x00067ae8) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf236,	// (0x0006c393) list_medium_line_x2_t2_g3_t_ParamLimits

0xf236,	// (0x0006c393) list_medium_line_x2_t2_g3_t

0x2d6e,	// (0x0005fecb) main_sp_fs_list_pane_ParamLimits

0x2d6e,	// (0x0005fecb) main_sp_fs_list_pane

0x2d7a,	// (0x0005fed7) sp_fs_scroll_pane_ParamLimits

0x2d7a,	// (0x0005fed7) sp_fs_scroll_pane

0xaeee,	// (0x0006804b) list_medium_line_x2_t3_t1

0xaeee,	// (0x0006804b) list_medium_line_x2_t3_t2

0xaeee,	// (0x0006804b) list_medium_line_x2_t3_t3

0x0002,

0xf281,	// (0x0006c3de) list_medium_line_x2_t3_t

0xaeee,	// (0x0006804b) list_medium_line_x3_t4_t1

0xaeee,	// (0x0006804b) list_medium_line_x3_t4_t2

0xaeee,	// (0x0006804b) list_medium_line_x3_t4_t3

0xaeee,	// (0x0006804b) list_medium_line_x3_t4_t4

0x0003,

0xf288,	// (0x0006c3e5) list_medium_line_x3_t4_t

0xaeee,	// (0x0006804b) list_medium_line_x4_t5_t1

0xaeee,	// (0x0006804b) list_medium_line_x4_t5_t2

0xaeee,	// (0x0006804b) list_medium_line_x4_t5_t3

0xaeee,	// (0x0006804b) list_medium_line_x4_t5_t4

0xaeee,	// (0x0006804b) list_medium_line_x4_t5_t5

0x0004,

0xf291,	// (0x0006c3ee) list_medium_line_x4_t5_t

0xa6a8,	// (0x00067805) list_medium_line_t4_g4_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t4_g4_g1

0xa6a8,	// (0x00067805) list_medium_line_t4_g4_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t4_g4_g2

0xa6a8,	// (0x00067805) list_medium_line_t4_g4_g3_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t4_g4_g3

0xa6a8,	// (0x00067805) list_medium_line_t4_g4_g4_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0006c323) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0006c323) list_medium_line_t4_g4_g

0xa98b,	// (0x00067ae8) list_medium_line_t4_g4_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t4_g4_t1

0xa98b,	// (0x00067ae8) list_medium_line_t4_g4_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t4_g4_t2

0xa98b,	// (0x00067ae8) list_medium_line_t4_g4_t3_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t4_g4_t3

0xa98b,	// (0x00067ae8) list_medium_line_t4_g4_t4_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0006c32c) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0006c32c) list_medium_line_t4_g4_t

0x2e73,	// (0x0005ffd0) chi_dic_find_pane_g1

0x3ca3,	// (0x00060e00) main_tport_pane

0xaeee,	// (0x0006804b) list_medium_line_plain_t1

0xa6a8,	// (0x00067805) list_medium_line_t2_g2_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t2_g2_g1

0xa6a8,	// (0x00067805) list_medium_line_t2_g2_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0006c31e) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0006c31e) list_medium_line_t2_g2_g

0xa98b,	// (0x00067ae8) list_medium_line_t2_g2_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t2_g2_t1

0xa98b,	// (0x00067ae8) list_medium_line_t2_g2_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t2_g2_t2

0x0001,

0xf236,	// (0x0006c393) list_medium_line_t2_g2_t_ParamLimits

0xf236,	// (0x0006c393) list_medium_line_t2_g2_t

0xa328,	// (0x00067485) aid_sp_fs_list_icon_a_sm

0xa330,	// (0x0006748d) aid_sp_fs_list_icon_d

0xa338,	// (0x00067495) aid_sp_fs_text_primary

0xdc55,	// (0x0006adb2) aid_sp_fs_text_secondary

0x9b88,	// (0x00066ce5) list_medium_line

0x9b88,	// (0x00066ce5) list_medium_line_g2

0x9b88,	// (0x00066ce5) list_medium_line_g3

0x9b88,	// (0x00066ce5) list_medium_line_plain

0x9b88,	// (0x00066ce5) list_medium_line_plain_t2

0x9b88,	// (0x00066ce5) list_medium_line_plain_t3

0x9b88,	// (0x00066ce5) list_medium_line_right_icon

0x9b88,	// (0x00066ce5) list_medium_line_right_iconx2

0x9b88,	// (0x00066ce5) list_medium_line_t2

0x9b88,	// (0x00066ce5) list_medium_line_t2_g2

0x9b88,	// (0x00066ce5) list_medium_line_t2_g3

0x9b88,	// (0x00066ce5) list_medium_line_t2_right_icon

0x9b88,	// (0x00066ce5) list_medium_line_t2_right_iconx2

0x9b88,	// (0x00066ce5) list_medium_line_t3

0x9b88,	// (0x00066ce5) list_medium_line_t3_g2

0x9b88,	// (0x00066ce5) list_medium_line_t3_g3

0x9b88,	// (0x00066ce5) list_medium_line_t3_right_iconx2

0x9b88,	// (0x00066ce5) list_medium_line_t4_g4

0x9b88,	// (0x00066ce5) list_medium_line_x2

0x9b88,	// (0x00066ce5) list_medium_line_x2_t2_g2

0x9b88,	// (0x00066ce5) list_medium_line_x2_t2_g3

0x9b88,	// (0x00066ce5) list_medium_line_x2_t2_g4

0x9b88,	// (0x00066ce5) list_medium_line_x2_t3

0x9b88,	// (0x00066ce5) list_medium_line_x2_t3_g2

0x9b88,	// (0x00066ce5) list_medium_line_x2_t3_g3

0x9b88,	// (0x00066ce5) list_medium_line_x2_t3_g4

0x9b88,	// (0x00066ce5) list_medium_line_x2_t4_g2

0x9b88,	// (0x00066ce5) list_medium_line_x2_t4_g4

0x9b88,	// (0x00066ce5) list_medium_line_x3

0x9b88,	// (0x00066ce5) list_medium_line_x3_t4

0x9b88,	// (0x00066ce5) list_medium_line_x3_t4_g4

0x9b88,	// (0x00066ce5) list_medium_line_x4_t4

0x9b88,	// (0x00066ce5) list_medium_line_x4_t4_g7

0x9b88,	// (0x00066ce5) list_medium_line_x4_t5

0x686b,	// (0x000639c8) list_single_fs_dyc_pane_ParamLimits

0x686b,	// (0x000639c8) list_single_fs_dyc_pane

0xa6a8,	// (0x00067805) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x4_t4_g7_g1

0xa6a8,	// (0x00067805) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x4_t4_g7_g2

0xa6a8,	// (0x00067805) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x4_t4_g7_g3

0xa6a8,	// (0x00067805) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x4_t4_g7_g4

0xa6a8,	// (0x00067805) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x4_t4_g7_g5

0xa6a8,	// (0x00067805) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x4_t4_g7_g6

0xa6b6,	// (0x00067813) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa6b6,	// (0x00067813) list_medium_line_x4_t4_g7_g7

0x0006,

0xf9dd,	// (0x0006cb3a) list_medium_line_x4_t4_g7_g_ParamLimits

0xf9dd,	// (0x0006cb3a) list_medium_line_x4_t4_g7_g

0xa98b,	// (0x00067ae8) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x4_t4_g7_t1

0xa98b,	// (0x00067ae8) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x4_t4_g7_t2

0xa98b,	// (0x00067ae8) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x4_t4_g7_t3

0xb285,	// (0x000683e2) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb285,	// (0x000683e2) list_medium_line_x4_t4_g7_t4

0xb285,	// (0x000683e2) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb285,	// (0x000683e2) list_medium_line_x4_t4_g7_t5

0x0004,

0xf9ec,	// (0x0006cb49) list_medium_line_x4_t4_g7_t_ParamLimits

0xf9ec,	// (0x0006cb49) list_medium_line_x4_t4_g7_t

0x6fce,	// (0x0006412b) list_single_dyc_row_pane_ParamLimits

0x6fce,	// (0x0006412b) list_single_dyc_row_pane

0x77fb,	// (0x00064958) call5_gesture_pane_ParamLimits

0x77fb,	// (0x00064958) call5_gesture_pane

0x7831,	// (0x0006498e) call5_windows_pane_ParamLimits

0x7831,	// (0x0006498e) call5_windows_pane

0x78c5,	// (0x00064a22) call5_swipe_1_pane_cp_ParamLimits

0x78c5,	// (0x00064a22) call5_swipe_1_pane_cp

0x78d1,	// (0x00064a2e) call5_swipe_2_pane_cp_ParamLimits

0x78d1,	// (0x00064a2e) call5_swipe_2_pane_cp

0xa94f,	// (0x00067aac) call5_image_pane_cp

0x78dd,	// (0x00064a3a) popup_call5_audio_first_window_cp_ParamLimits

0x78dd,	// (0x00064a3a) popup_call5_audio_first_window_cp

0xe1ac,	// (0x0006b309) call5_swipe_1_pane_g1_cp_ParamLimits

0xe1ac,	// (0x0006b309) call5_swipe_1_pane_g1_cp

0xe1da,	// (0x0006b337) call5_swipe_1_pane_g2_cp

0xe1c5,	// (0x0006b322) call5_swipe_1_pane_t1_cp_ParamLimits

0xe1c5,	// (0x0006b322) call5_swipe_1_pane_t1_cp

0xe1ac,	// (0x0006b309) call5_swipe_2_pane_g1_cp_ParamLimits

0xe1ac,	// (0x0006b309) call5_swipe_2_pane_g1_cp

0xe1e2,	// (0x0006b33f) call5_swipe_2_pane_g2_cp

0xe1ea,	// (0x0006b347) call5_swipe_2_pane_t1_cp_ParamLimits

0xe1ea,	// (0x0006b347) call5_swipe_2_pane_t1_cp

0xa1e1,	// (0x0006733e) main_sp_fs_email_pane

0xdf6e,	// (0x0006b0cb) main_sp_fs_listscroll_pane_te

0x78eb,	// (0x00064a48) popup_sp_fs_action_menu_pane_ParamLimits

0x78eb,	// (0x00064a48) popup_sp_fs_action_menu_pane

0xa971,	// (0x00067ace) bg_sp_fs_ctrlbar_pane_g1

0xe1ff,	// (0x0006b35c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe208,	// (0x0006b365) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe211,	// (0x0006b36e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa971,	// (0x00067ace) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfaa5,	// (0x0006cc02) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc5ff,	// (0x0006975c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc5ff,	// (0x0006975c) bg_sp_fs_ctrlbar_ddmenu_pane

0xe21a,	// (0x0006b377) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe21a,	// (0x0006b377) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe226,	// (0x0006b383) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe226,	// (0x0006b383) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfaae,	// (0x0006cc0b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfaae,	// (0x0006cc0b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe232,	// (0x0006b38f) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe232,	// (0x0006b38f) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa971,	// (0x00067ace) list_medium_line_t2_right_icon_g1

0xaeee,	// (0x0006804b) list_medium_line_t2_right_icon_t1

0xaeee,	// (0x0006804b) list_medium_line_t2_right_icon_t2

0x0001,

0xfab3,	// (0x0006cc10) list_medium_line_t2_right_icon_t

0xb584,	// (0x000686e1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb584,	// (0x000686e1) bg_sp_fs_ctrlbar_pane

0x798a,	// (0x00064ae7) main_sp_fs_ctrlbar_button_pane_cp01

0x7992,	// (0x00064aef) main_sp_fs_ctrlbar_ddmenu_pane

0xe2a0,	// (0x0006b3fd) main_sp_fs_ctrlbar_pane_g1

0xe2ac,	// (0x0006b409) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfab8,	// (0x0006cc15) main_sp_fs_ctrlbar_pane_g

0x79d0,	// (0x00064b2d) main_sp_fs_ctrlbar_pane_t1

0x7a0d,	// (0x00064b6a) main_sp_fs_ctrlbar_pane

0x7a27,	// (0x00064b84) main_sp_fs_listscroll_pane_te_cp01

0x7a38,	// (0x00064b95) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7a38,	// (0x00064b95) popup_sp_fs_action_menu_pane_cp01

0xa1e1,	// (0x0006733e) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa1e1,	// (0x0006733e) bg_sp_fs_highlight_list_pane_cp01

0xa341,	// (0x0006749e) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa341,	// (0x0006749e) sp_fs_action_menu_list_gene_pane_g1

0xe2d3,	// (0x0006b430) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe2d3,	// (0x0006b430) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfac1,	// (0x0006cc1e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfac1,	// (0x0006cc1e) sp_fs_action_menu_list_gene_pane_g

0xa350,	// (0x000674ad) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa350,	// (0x000674ad) sp_fs_action_menu_list_gene_pane_t1

0xa368,	// (0x000674c5) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa368,	// (0x000674c5) sp_fs_action_menu_list_gene_pane

0xe2e0,	// (0x0006b43d) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe2e0,	// (0x0006b43d) popup_sp_fs_action_menu_bg_pane

0xa38b,	// (0x000674e8) sp_fs_action_menu_list_pane_ParamLimits

0xa38b,	// (0x000674e8) sp_fs_action_menu_list_pane

0xa3af,	// (0x0006750c) sp_fs_scroll_pane_cp01_ParamLimits

0xa3af,	// (0x0006750c) sp_fs_scroll_pane_cp01

0xaeee,	// (0x0006804b) list_medium_line_plain_t2_t1

0xaeee,	// (0x0006804b) list_medium_line_plain_t2_t2

0x0001,

0xfab3,	// (0x0006cc10) list_medium_line_plain_t2_t

0xaeee,	// (0x0006804b) list_medium_line_plain_t3_t1

0xaeee,	// (0x0006804b) list_medium_line_plain_t3_t2

0xaeee,	// (0x0006804b) list_medium_line_plain_t3_t3

0x0002,

0xf281,	// (0x0006c3de) list_medium_line_plain_t3_t

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g2_g1

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0006c31e) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0006c31e) list_medium_line_x2_t2_g2_g

0xa98b,	// (0x00067ae8) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t2_g2_t1

0xa98b,	// (0x00067ae8) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t2_g2_t2

0x0001,

0xf236,	// (0x0006c393) list_medium_line_x2_t2_g2_t_ParamLimits

0xf236,	// (0x0006c393) list_medium_line_x2_t2_g2_t

0xa6a8,	// (0x00067805) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t4_g2_g1

0xa6a8,	// (0x00067805) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0006c31e) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0006c31e) list_medium_line_x2_t4_g2_g

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g2_t1

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g2_t2

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g2_t3

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0006c32c) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0006c32c) list_medium_line_x2_t4_g2_t

0xa971,	// (0x00067ace) list_medium_line_t3_right_iconx2_g1

0xa971,	// (0x00067ace) list_medium_line_t3_right_iconx2_g2

0xa971,	// (0x00067ace) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3a2,	// (0x0006c4ff) list_medium_line_t3_right_iconx2_g

0xaeee,	// (0x0006804b) list_medium_line_t3_right_iconx2_t1

0xaeee,	// (0x0006804b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfab3,	// (0x0006cc10) list_medium_line_t3_right_iconx2_t

0xa6a8,	// (0x00067805) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x3_t4_g4_g1

0xa6a8,	// (0x00067805) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x3_t4_g4_g2

0xa6a8,	// (0x00067805) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x3_t4_g4_g3

0xa6a8,	// (0x00067805) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0006c323) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0006c323) list_medium_line_x3_t4_g4_g

0xa98b,	// (0x00067ae8) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x3_t4_g4_t1

0xa98b,	// (0x00067ae8) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x3_t4_g4_t2

0xa98b,	// (0x00067ae8) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x3_t4_g4_t3

0xa98b,	// (0x00067ae8) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0006c32c) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0006c32c) list_medium_line_x3_t4_g4_t

0x7a58,	// (0x00064bb5) list_single_dyc_row_text_pane_t1_ParamLimits

0x7a58,	// (0x00064bb5) list_single_dyc_row_text_pane_t1

0x7a95,	// (0x00064bf2) list_single_dyc_row_text_pane_t2_ParamLimits

0x7a95,	// (0x00064bf2) list_single_dyc_row_text_pane_t2

0xa3d5,	// (0x00067532) list_single_dyc_row_text_pane_t3_ParamLimits

0xa3d5,	// (0x00067532) list_single_dyc_row_text_pane_t3

0x0005,

0xfac6,	// (0x0006cc23) list_single_dyc_row_text_pane_t_ParamLimits

0xfac6,	// (0x0006cc23) list_single_dyc_row_text_pane_t

0xa3f9,	// (0x00067556) list_single_dyc_row_pane_g1_ParamLimits

0xa3f9,	// (0x00067556) list_single_dyc_row_pane_g1

0xa405,	// (0x00067562) list_single_dyc_row_pane_g2_ParamLimits

0xa405,	// (0x00067562) list_single_dyc_row_pane_g2

0xa411,	// (0x0006756e) list_single_dyc_row_pane_g3_ParamLimits

0xa411,	// (0x0006756e) list_single_dyc_row_pane_g3

0xa41d,	// (0x0006757a) list_single_dyc_row_pane_g4_ParamLimits

0xa41d,	// (0x0006757a) list_single_dyc_row_pane_g4

0x0003,

0xfad3,	// (0x0006cc30) list_single_dyc_row_pane_g_ParamLimits

0xfad3,	// (0x0006cc30) list_single_dyc_row_pane_g

0xa429,	// (0x00067586) list_single_dyc_row_text_pane_ParamLimits

0xa429,	// (0x00067586) list_single_dyc_row_text_pane

0x9b88,	// (0x00066ce5) bg_sp_fs_scroll_pane

0xe2ee,	// (0x0006b44b) thumb_sp_fs_scroll_pane

0xa6a8,	// (0x00067805) list_medium_line_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_g1

0xa98b,	// (0x00067ae8) list_medium_line_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t1

0xa6a8,	// (0x00067805) list_medium_line_x2_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_g1

0xa6a8,	// (0x00067805) list_medium_line_x2_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0006c31e) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0006c31e) list_medium_line_x2_g

0xa98b,	// (0x00067ae8) list_medium_line_x2_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t1

0xa6a8,	// (0x00067805) list_medium_line_x3_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x3_g1

0xdc47,	// (0x0006ada4) list_medium_line_x3_g2_ParamLimits

0xdc47,	// (0x0006ada4) list_medium_line_x3_g2

0x0001,

0xfadc,	// (0x0006cc39) list_medium_line_x3_g_ParamLimits

0xfadc,	// (0x0006cc39) list_medium_line_x3_g

0xe2f7,	// (0x0006b454) list_medium_line_x3_t1_ParamLimits

0xe2f7,	// (0x0006b454) list_medium_line_x3_t1

0xe30b,	// (0x0006b468) thumb_sp_fs_scroll_pane_g1

0xe314,	// (0x0006b471) thumb_sp_fs_scroll_pane_g2

0xe31d,	// (0x0006b47a) thumb_sp_fs_scroll_pane_g3

0x0002,

0x08e4,	// (0x0005da41) thumb_sp_fs_scroll_pane_g

0xe30b,	// (0x0006b468) bg_sp_fs_scroll_pane_g1

0xe314,	// (0x0006b471) bg_sp_fs_scroll_pane_g2

0xe31d,	// (0x0006b47a) bg_sp_fs_scroll_pane_g3

0x0002,

0x08e4,	// (0x0005da41) bg_sp_fs_scroll_pane_g

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g4_g1

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g4_g2

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g4_g3

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0006c323) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0006c323) list_medium_line_x2_t3_g4_g

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g4_t1

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g4_t2

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0006c317) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0006c317) list_medium_line_x2_t3_g4_t

0xa6a8,	// (0x00067805) list_medium_line_g2_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_g2_g1

0xa6a8,	// (0x00067805) list_medium_line_g2_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0006c31e) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0006c31e) list_medium_line_g2_g

0xa98b,	// (0x00067ae8) list_medium_line_g2_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_g2_t1

0xa6a8,	// (0x00067805) list_medium_line_t3_g2_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t3_g2_g1

0xa6a8,	// (0x00067805) list_medium_line_t3_g2_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0006c31e) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0006c31e) list_medium_line_t3_g2_g

0xa98b,	// (0x00067ae8) list_medium_line_t3_g2_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t3_g2_t1

0xa98b,	// (0x00067ae8) list_medium_line_t3_g2_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t3_g2_t2

0xa98b,	// (0x00067ae8) list_medium_line_t3_g2_t3_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0006c317) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0006c317) list_medium_line_t3_g2_t

0xa971,	// (0x00067ace) list_medium_line_right_icon_g1

0xaeee,	// (0x0006804b) list_medium_line_right_icon_t1

0xa6a8,	// (0x00067805) list_medium_line_t2_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t2_g1

0xa98b,	// (0x00067ae8) list_medium_line_t2_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t2_t1

0xa98b,	// (0x00067ae8) list_medium_line_t2_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t2_t2

0x0001,

0xf236,	// (0x0006c393) list_medium_line_t2_t_ParamLimits

0xf236,	// (0x0006c393) list_medium_line_t2_t

0xa6a8,	// (0x00067805) list_medium_line_t3_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t3_g1

0xa98b,	// (0x00067ae8) list_medium_line_t3_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t3_t1

0xa98b,	// (0x00067ae8) list_medium_line_t3_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t3_t2

0xa98b,	// (0x00067ae8) list_medium_line_t3_t3_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0006c317) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0006c317) list_medium_line_t3_t

0xa6a8,	// (0x00067805) list_medium_line_g3_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_g3_g1

0xa6a8,	// (0x00067805) list_medium_line_g3_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_g3_g2

0xa6a8,	// (0x00067805) list_medium_line_g3_g3_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0006c310) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0006c310) list_medium_line_g3_g

0xa98b,	// (0x00067ae8) list_medium_line_g3_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_g3_t1

0xa6a8,	// (0x00067805) list_medium_line_t2_g3_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t2_g3_g1

0xa6a8,	// (0x00067805) list_medium_line_t2_g3_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t2_g3_g2

0xa6a8,	// (0x00067805) list_medium_line_t2_g3_g3_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0006c310) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0006c310) list_medium_line_t2_g3_g

0xa98b,	// (0x00067ae8) list_medium_line_t2_g3_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t2_g3_t1

0xa98b,	// (0x00067ae8) list_medium_line_t2_g3_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t2_g3_t2

0x0001,

0xf236,	// (0x0006c393) list_medium_line_t2_g3_t_ParamLimits

0xf236,	// (0x0006c393) list_medium_line_t2_g3_t

0xa6a8,	// (0x00067805) list_medium_line_t3_g3_g1_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t3_g3_g1

0xa6a8,	// (0x00067805) list_medium_line_t3_g3_g2_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t3_g3_g2

0xa6a8,	// (0x00067805) list_medium_line_t3_g3_g3_ParamLimits

0xa6a8,	// (0x00067805) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0006c310) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0006c310) list_medium_line_t3_g3_g

0xa98b,	// (0x00067ae8) list_medium_line_t3_g3_t1_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t3_g3_t1

0xa98b,	// (0x00067ae8) list_medium_line_t3_g3_t2_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t3_g3_t2

0xa98b,	// (0x00067ae8) list_medium_line_t3_g3_t3_ParamLimits

0xa98b,	// (0x00067ae8) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0006c317) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0006c317) list_medium_line_t3_g3_t

0xa971,	// (0x00067ace) list_medium_line_right_iconx2_g1

0xa971,	// (0x00067ace) list_medium_line_right_iconx2_g2

0x0001,

0xf39d,	// (0x0006c4fa) list_medium_line_right_iconx2_g

0xaeee,	// (0x0006804b) list_medium_line_right_iconx2_t1

0xa971,	// (0x00067ace) list_medium_line_t2_right_iconx2_g1

0xa971,	// (0x00067ace) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf39d,	// (0x0006c4fa) list_medium_line_t2_right_iconx2_g

0xaeee,	// (0x0006804b) list_medium_line_t2_right_iconx2_t1

0xaeee,	// (0x0006804b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfab3,	// (0x0006cc10) list_medium_line_t2_right_iconx2_t

0xaeee,	// (0x0006804b) list_medium_line_x4_t4_t1

0xaeee,	// (0x0006804b) list_medium_line_x4_t4_t2

0xaeee,	// (0x0006804b) list_medium_line_x4_t4_t3

0xaeee,	// (0x0006804b) list_medium_line_x4_t4_t4

0x0003,

0xf288,	// (0x0006c3e5) list_medium_line_x4_t4_t

0x7be8,	// (0x00064d45) tport_appsw_pane_ParamLimits

0x7be8,	// (0x00064d45) tport_appsw_pane

0x7bf6,	// (0x00064d53) tport_contact_pane_ParamLimits

0x7bf6,	// (0x00064d53) tport_contact_pane

0x7c06,	// (0x00064d63) tport_listscroll_pane_ParamLimits

0x7c06,	// (0x00064d63) tport_listscroll_pane

0x7c16,	// (0x00064d73) cell_tport_appsw_pane_ParamLimits

0x7c16,	// (0x00064d73) cell_tport_appsw_pane

0xa6b6,	// (0x00067813) tport_appsw_pane_g1_ParamLimits

0xa6b6,	// (0x00067813) tport_appsw_pane_g1

0x7c43,	// (0x00064da0) tport_contact_pane_g1

0x7c4c,	// (0x00064da9) tport_contact_pane_t1

0x7c5a,	// (0x00064db7) tport_contact_pane_t2

0x0001,

0xfae1,	// (0x0006cc3e) tport_contact_pane_t

0xe326,	// (0x0006b483) list_tport_pane

0xe32f,	// (0x0006b48c) scroll_pane_cp_030

0x7c70,	// (0x00064dcd) cell_tport_appsw_pane_g1

0x7c80,	// (0x00064ddd) cell_tport_appsw_pane_t1

0x7c8e,	// (0x00064deb) grid_highlight_pane_cp019

0x7c96,	// (0x00064df3) list_tport_double_graphic_pane_ParamLimits

0x7c96,	// (0x00064df3) list_tport_double_graphic_pane

0xa1e1,	// (0x0006733e) list_highlight_pane_cp023_ParamLimits

0xa1e1,	// (0x0006733e) list_highlight_pane_cp023

0x7ca3,	// (0x00064e00) list_tport_double_graphic_pane_g1_ParamLimits

0x7ca3,	// (0x00064e00) list_tport_double_graphic_pane_g1

0x7cb0,	// (0x00064e0d) list_tport_double_graphic_pane_t1_ParamLimits

0x7cb0,	// (0x00064e0d) list_tport_double_graphic_pane_t1

0x7cc5,	// (0x00064e22) list_tport_double_graphic_pane_t2_ParamLimits

0x7cc5,	// (0x00064e22) list_tport_double_graphic_pane_t2

0x0001,

0xfaed,	// (0x0006cc4a) list_tport_double_graphic_pane_t_ParamLimits

0xfaed,	// (0x0006cc4a) list_tport_double_graphic_pane_t

0x9b88,	// (0x00066ce5) main_cale_note_pane

0x59cc,	// (0x00062b29) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x59cc,	// (0x00062b29) cell_vitu2_function_top_wide_pane_cp01

0x737f,	// (0x000644dc) wait_bar_pane_cp05_ParamLimits

0xa1e1,	// (0x0006733e) listscroll_cmail_pane

0xe340,	// (0x0006b49d) list_cmail_pane

0x7cd7,	// (0x00064e34) list_cmail_body_pane

0x7cf1,	// (0x00064e4e) list_single_cmail_header_caption_pane

0x7d11,	// (0x00064e6e) list_single_cmail_header_detail_pane_ParamLimits

0x7d11,	// (0x00064e6e) list_single_cmail_header_detail_pane

0xe357,	// (0x0006b4b4) list_single_cmail_header_caption_pane_t1

0x7d47,	// (0x00064ea4) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7d47,	// (0x00064ea4) list_single_cmail_header_detail_pane_g1

0xa448,	// (0x000675a5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa448,	// (0x000675a5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfaf2,	// (0x0006cc4f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfaf2,	// (0x0006cc4f) list_single_cmail_header_detail_pane_g

0x7d5f,	// (0x00064ebc) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7d5f,	// (0x00064ebc) list_single_cmail_header_detail_pane_t1

0x7d9b,	// (0x00064ef8) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7d9b,	// (0x00064ef8) list_single_cmail_header_editor_pane_bg

0xdf92,	// (0x0006b0ef) list_cmail_body_pane_g1

0xe37b,	// (0x0006b4d8) list_cmail_body_pane_t1

0xd2ec,	// (0x0006a449) list_single_cmail_header_editor_pane_bg_g1

0xaba9,	// (0x00067d06) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2fc,	// (0x0006a459) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2f4,	// (0x0006a451) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd532,	// (0x0006a68f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd31c,	// (0x0006a479) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd30c,	// (0x0006a469) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd314,	// (0x0006a471) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab89,	// (0x00067ce6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7db2,	// (0x00064f0f) calenote_gesture_pane_ParamLimits

0x7db2,	// (0x00064f0f) calenote_gesture_pane

0x7dcc,	// (0x00064f29) calenote_window_pane_ParamLimits

0x7dcc,	// (0x00064f29) calenote_window_pane

0xe389,	// (0x0006b4e6) popup_note_window_cp01

0x7de4,	// (0x00064f41) calenote_swipe_1_pane_ParamLimits

0x7de4,	// (0x00064f41) calenote_swipe_1_pane

0x78d1,	// (0x00064a2e) calenote_swipe_2_pane_ParamLimits

0x78d1,	// (0x00064a2e) calenote_swipe_2_pane

0xe1ac,	// (0x0006b309) calenote_swipe_1_pane_g1_ParamLimits

0xe1ac,	// (0x0006b309) calenote_swipe_1_pane_g1

0xe1b9,	// (0x0006b316) calenote_swipe_1_pane_g2_ParamLimits

0xe1b9,	// (0x0006b316) calenote_swipe_1_pane_g2

0x0001,

0xfa9b,	// (0x0006cbf8) calenote_swipe_1_pane_g_ParamLimits

0xfa9b,	// (0x0006cbf8) calenote_swipe_1_pane_g

0xe39b,	// (0x0006b4f8) calenote_swipe_1_pane_t1_ParamLimits

0xe39b,	// (0x0006b4f8) calenote_swipe_1_pane_t1

0xe1ac,	// (0x0006b309) calenote_swipe_2_pane_g1_ParamLimits

0xe1ac,	// (0x0006b309) calenote_swipe_2_pane_g1

0xe3ba,	// (0x0006b517) calenote_swipe_2_pane_g2_ParamLimits

0xe3ba,	// (0x0006b517) calenote_swipe_2_pane_g2

0x0001,

0xfafe,	// (0x0006cc5b) calenote_swipe_2_pane_g_ParamLimits

0xfafe,	// (0x0006cc5b) calenote_swipe_2_pane_g

0xe3c6,	// (0x0006b523) calenote_swipe_2_pane_t1_ParamLimits

0xe3c6,	// (0x0006b523) calenote_swipe_2_pane_t1

0x9b88,	// (0x00066ce5) main_mup_navstr_pane

0x4837,	// (0x00061994) main_mup3_pane_t7_ParamLimits

0x4837,	// (0x00061994) main_mup3_pane_t7

0x5045,	// (0x000621a2) main_mp4_pane_g6_ParamLimits

0x5045,	// (0x000621a2) main_mp4_pane_g6

0x53e1,	// (0x0006253e) main_image3_pane_t4_ParamLimits

0x53e1,	// (0x0006253e) main_image3_pane_t4

0x7df7,	// (0x00064f54) popup_navstr_preview_pane_ParamLimits

0x7df7,	// (0x00064f54) popup_navstr_preview_pane

0x7e03,	// (0x00064f60) scroll_navstr_pane_ParamLimits

0x7e03,	// (0x00064f60) scroll_navstr_pane

0x9b88,	// (0x00066ce5) bg_popup_preview_window_pane_cp04

0xe3ed,	// (0x0006b54a) popup_navstr_preview_pane_t1

0x7e0f,	// (0x00064f6c) scroll_navstr_pane_g1_ParamLimits

0x7e0f,	// (0x00064f6c) scroll_navstr_pane_g1

0x7e1c,	// (0x00064f79) scroll_navstr_pane_t1_ParamLimits

0x7e1c,	// (0x00064f79) scroll_navstr_pane_t1

0xe392,	// (0x0006b4ef) bg_button_pane_cp014

0xe392,	// (0x0006b4ef) bg_button_pane_cp030

0x77a1,	// (0x000648fe) list_double_fisheye_pane_g4_ParamLimits

0x77a1,	// (0x000648fe) list_double_fisheye_pane_g4

0x77ad,	// (0x0006490a) list_double_fisheye_pane_g5_ParamLimits

0x77ad,	// (0x0006490a) list_double_fisheye_pane_g5

0xcc45,	// (0x00069da2) sp_fs_scroll_pane_cp03

0xe2a0,	// (0x0006b3fd) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe2ac,	// (0x0006b409) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfab8,	// (0x0006cc15) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x79d0,	// (0x00064b2d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe34f,	// (0x0006b4ac) sp_fs_scroll_pane_cp02

0xa814,	// (0x00067971) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa814,	// (0x00067971) popup_sp_fs_calendar_preview_list_single_pane

0x9b88,	// (0x00066ce5) main_cam6_pano_pane

0x3c87,	// (0x00060de4) main_mup3_pane_ParamLimits

0x9b88,	// (0x00066ce5) main_phacti_pane

0x7252,	// (0x000643af) bg_button_pane_cp11

0x726a,	// (0x000643c7) main_mobtv_info_pane_g2_ParamLimits

0x726a,	// (0x000643c7) main_mobtv_info_pane_g2

0x0001,

0xfa37,	// (0x0006cb94) main_mobtv_info_pane_g_ParamLimits

0xfa37,	// (0x0006cb94) main_mobtv_info_pane_g

0x741c,	// (0x00064579) sc_clock_pane_t5_ParamLimits

0x741c,	// (0x00064579) sc_clock_pane_t5

0x7614,	// (0x00064771) main_radioblah_pane_g1_ParamLimits

0xe0f8,	// (0x0006b255) main_radioblah_pane_t3_ParamLimits

0xe0f8,	// (0x0006b255) main_radioblah_pane_t3

0xe110,	// (0x0006b26d) main_radioblah_pane_t4_ParamLimits

0xe110,	// (0x0006b26d) main_radioblah_pane_t4

0x7632,	// (0x0006478f) main_radioblah_text_pane_ParamLimits

0x7632,	// (0x0006478f) main_radioblah_text_pane

0x763f,	// (0x0006479c) main_radioblah_info_pane_g1_ParamLimits

0x76d8,	// (0x00064835) main_radioblah_info_pane_t4_ParamLimits

0x76d8,	// (0x00064835) main_radioblah_info_pane_t4

0xa1e1,	// (0x0006733e) main_sp_fs_calendar_pane

0x7e2e,	// (0x00064f8b) main_phacti_pane_g1

0x7e36,	// (0x00064f93) phacti_note_pane_ParamLimits

0x7e36,	// (0x00064f93) phacti_note_pane

0xe404,	// (0x0006b561) phacti_term_pane_ParamLimits

0xe404,	// (0x0006b561) phacti_term_pane

0xe419,	// (0x0006b576) phacti_note_pane_t1_ParamLimits

0xe419,	// (0x0006b576) phacti_note_pane_t1

0xa478,	// (0x000675d5) phacti_term_pane_g1

0xa480,	// (0x000675dd) phacti_term_pane_t1_ParamLimits

0xa480,	// (0x000675dd) phacti_term_pane_t1

0xe430,	// (0x0006b58d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe438,	// (0x0006b595) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0912,	// (0x0005da6f) popup_sp_fs_calendar_preview_list_single_pane_g

0xe440,	// (0x0006b59d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe440,	// (0x0006b59d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe456,	// (0x0006b5b3) aid_popup_sp_fs_bg_corner_pane

0xa971,	// (0x00067ace) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b88,	// (0x00066ce5) popup_sp_fs_calendar_preview_bg_pane

0xe45e,	// (0x0006b5bb) popup_sp_fs_calendar_preview_list_pane

0xb584,	// (0x000686e1) bg_main_sp_fs_cale_pane_ParamLimits

0xb584,	// (0x000686e1) bg_main_sp_fs_cale_pane

0xa4b3,	// (0x00067610) listscroll_cale_mrui_pane_ParamLimits

0xa4b3,	// (0x00067610) listscroll_cale_mrui_pane

0xa4c8,	// (0x00067625) listscroll_sp_fs_schedule_track_pane

0xa4d1,	// (0x0006762e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa4d1,	// (0x0006762e) main_sp_fs_ctrlbar_pane_cp01

0xe466,	// (0x0006b5c3) main_sp_fs_ribbon_pane

0xa4e4,	// (0x00067641) popup_sp_fs_cale_preview_window

0x7e99,	// (0x00064ff6) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7e99,	// (0x00064ff6) list_single_sp_fs_schedule_track_pane

0xa69a,	// (0x000677f7) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa69a,	// (0x000677f7) bg_sp_fs_highlight_list_pane_cp03

0x7eb0,	// (0x0006500d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7eb0,	// (0x0006500d) list_single_sp_fs_schedule_track_pane_g1

0x7ebc,	// (0x00065019) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7ebc,	// (0x00065019) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb08,	// (0x0006cc65) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb08,	// (0x0006cc65) list_single_sp_fs_schedule_track_pane_g

0x7ec8,	// (0x00065025) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7ec8,	// (0x00065025) list_single_sp_fs_schedule_track_pane_t1

0x7ee6,	// (0x00065043) sp_fs_schedule_track_pane_ParamLimits

0x7ee6,	// (0x00065043) sp_fs_schedule_track_pane

0xe46e,	// (0x0006b5cb) sp_fs_schedule_track_pane_g1

0xe476,	// (0x0006b5d3) sp_fs_schedule_track_pane_g2

0xe47e,	// (0x0006b5db) sp_fs_schedule_track_pane_g3

0xe486,	// (0x0006b5e3) sp_fs_schedule_track_pane_g4

0xe48e,	// (0x0006b5eb) sp_fs_schedule_track_pane_g5

0x0004,

0x091c,	// (0x0005da79) sp_fs_schedule_track_pane_g

0xd2ec,	// (0x0006a449) bg_sp_fs_schedule_viewer_highlight_g1

0xaba9,	// (0x00067d06) bg_sp_fs_schedule_viewer_highlight_g2

0xd2f4,	// (0x0006a451) bg_sp_fs_schedule_viewer_highlight_g3

0xd2fc,	// (0x0006a459) bg_sp_fs_schedule_viewer_highlight_g4

0xd532,	// (0x0006a68f) bg_sp_fs_schedule_viewer_highlight_g5

0xd30c,	// (0x0006a469) bg_sp_fs_schedule_viewer_highlight_g6

0xd314,	// (0x0006a471) bg_sp_fs_schedule_viewer_highlight_g7

0xd31c,	// (0x0006a479) bg_sp_fs_schedule_viewer_highlight_g8

0xab89,	// (0x00067ce6) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb0d,	// (0x0006cc6a) bg_sp_fs_schedule_viewer_highlight_g

0x9b88,	// (0x00066ce5) bg_main_sp_fs_ribbon_pane

0x7ef8,	// (0x00065055) main_sp_fs_ribbon_pane_g1

0xe496,	// (0x0006b5f3) main_sp_fs_ribbon_pane_t1

0x7f01,	// (0x0006505e) main_sp_fs_ribbon_pane_t2

0xe4a5,	// (0x0006b602) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb20,	// (0x0006cc7d) main_sp_fs_ribbon_pane_t

0xe4b4,	// (0x0006b611) main_sp_fs_ribbon_scheduler_pane

0xe4bc,	// (0x0006b619) bg_main_sp_fs_ribbon_pane_g1

0xe4c5,	// (0x0006b622) bg_main_sp_fs_ribbon_pane_g2

0xe4ce,	// (0x0006b62b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0941,	// (0x0005da9e) bg_main_sp_fs_ribbon_pane_g

0xe4d6,	// (0x0006b633) main_sp_fs_ribbon_scheduler_pane_g1

0xe4df,	// (0x0006b63c) main_sp_fs_ribbon_scheduler_pane_g2

0xe4e8,	// (0x0006b645) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0948,	// (0x0005daa5) main_sp_fs_ribbon_scheduler_pane_g

0xe4f1,	// (0x0006b64e) list_cale_mrui_pane

0x7f10,	// (0x0006506d) sp_fs_scroll_pane_cp07_ParamLimits

0x7f10,	// (0x0006506d) sp_fs_scroll_pane_cp07

0x7f2c,	// (0x00065089) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x7f2c,	// (0x00065089) bg_sp_fs_schedule_viewer_highlight

0xe4fe,	// (0x0006b65b) list_single_sp_fs_schedule_track_pane_cp01

0xe506,	// (0x0006b663) list_sp_fs_schedule_track_pane

0xe50e,	// (0x0006b66b) sp_fs_scroll_pane_cp06_ParamLimits

0xe50e,	// (0x0006b66b) sp_fs_scroll_pane_cp06

0xa971,	// (0x00067ace) bgmain_sp_fs_calendar_pane_g1

0x7f39,	// (0x00065096) list_single_cale_mrui_pane_ParamLimits

0x7f39,	// (0x00065096) list_single_cale_mrui_pane

0xa4f6,	// (0x00067653) list_single_cale_mrui_row_pane_ParamLimits

0xa4f6,	// (0x00067653) list_single_cale_mrui_row_pane

0xa503,	// (0x00067660) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa503,	// (0x00067660) list_single_cale_mrui_row_pane_g1

0xa53b,	// (0x00067698) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa53b,	// (0x00067698) list_single_cale_mrui_row_pane_t1

0x7f5d,	// (0x000650ba) list_single_cale_mrui_row_pane_t2_ParamLimits

0x7f5d,	// (0x000650ba) list_single_cale_mrui_row_pane_t2

0xa54d,	// (0x000676aa) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa54d,	// (0x000676aa) list_single_cale_mrui_row_pane_t3

0xa57c,	// (0x000676d9) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa57c,	// (0x000676d9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb2e,	// (0x0006cc8b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb2e,	// (0x0006cc8b) list_single_cale_mrui_row_pane_t

0x7fc3,	// (0x00065120) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x7fc3,	// (0x00065120) list_single_cmail_header_editor_pane_bg_cp01

0x7fed,	// (0x0006514a) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x7fed,	// (0x0006514a) list_single_cmail_header_editor_pane_bg_cp02

0x8009,	// (0x00065166) main_radioblah_text_pane_t1_ParamLimits

0x8009,	// (0x00065166) main_radioblah_text_pane_t1

0xe52d,	// (0x0006b68a) cam6_indi_pane_cp01

0xe535,	// (0x0006b692) cam6_mode_pane_cp01

0xe53d,	// (0x0006b69a) cam6_pano_pane

0xe546,	// (0x0006b6a3) cam6_zoom_pane_cp01

0xe550,	// (0x0006b6ad) cam6_pano_image_pane

0xe559,	// (0x0006b6b6) cam6_pano_pane_g1

0xdf92,	// (0x0006b0ef) cam6_pano_pane_g2

0xe562,	// (0x0006b6bf) cam6_pano_pane_g3

0xe56b,	// (0x0006b6c8) cam6_pano_pane_g4

0xcfcf,	// (0x0006a12c) cam6_pano_pane_g5

0xe574,	// (0x0006b6d1) cam6_pano_pane_g6

0xe57c,	// (0x0006b6d9) cam6_pano_pane_g7

0xe584,	// (0x0006b6e1) cam6_pano_pane_g8

0xe58d,	// (0x0006b6ea) cam6_pano_pane_g9

0x0008,

0xfb37,	// (0x0006cc94) cam6_pano_pane_g

0x9b88,	// (0x00066ce5) main_browser_tag_pane

0xe3e5,	// (0x0006b542) grid_navstr_albumart_pane

0xe598,	// (0x0006b6f5) cell_navstr_albumart_pane_ParamLimits

0xe598,	// (0x0006b6f5) cell_navstr_albumart_pane

0xe5b4,	// (0x0006b711) cell_navstr_albumart_pane_g1

0xc4c4,	// (0x00069621) cell_navstr_albumart_pane_g2

0xc4d4,	// (0x00069631) cell_navstr_albumart_pane_g3

0xc4cc,	// (0x00069629) cell_navstr_albumart_pane_g4

0x0003,

0x0972,	// (0x0005dacf) cell_navstr_albumart_pane_g

0x8023,	// (0x00065180) bt_list_pane_ParamLimits

0x8023,	// (0x00065180) bt_list_pane

0x803c,	// (0x00065199) bt_list_pane_t1

0x804b,	// (0x000651a8) bt_list_pane_t2

0x0001,

0xfb4a,	// (0x0006cca7) bt_list_pane_t

0x9b88,	// (0x00066ce5) main_cale_prevew_pane

0x805a,	// (0x000651b7) popup_cale_preview_window_ParamLimits

0x805a,	// (0x000651b7) popup_cale_preview_window

0xa1e1,	// (0x0006733e) bg_popup_preview_window_pane_cp05_ParamLimits

0xa1e1,	// (0x0006733e) bg_popup_preview_window_pane_cp05

0xe5bc,	// (0x0006b719) list_cale_preview_pane_ParamLimits

0xe5bc,	// (0x0006b719) list_cale_preview_pane

0x8077,	// (0x000651d4) list_double_cale_preview_pane_ParamLimits

0x8077,	// (0x000651d4) list_double_cale_preview_pane

0x808b,	// (0x000651e8) list_single_cale_preview_pane_ParamLimits

0x808b,	// (0x000651e8) list_single_cale_preview_pane

0x80a3,	// (0x00065200) list_single_cale_preview_pane_g1

0x80ab,	// (0x00065208) list_single_cale_preview_pane_t1_ParamLimits

0x80ab,	// (0x00065208) list_single_cale_preview_pane_t1

0x80c0,	// (0x0006521d) list_double_cale_preview_pane_g1

0x80c8,	// (0x00065225) list_double_cale_preview_pane_t1_ParamLimits

0x80c8,	// (0x00065225) list_double_cale_preview_pane_t1

0x80dd,	// (0x0006523a) list_double_cale_preview_pane_t2_ParamLimits

0x80dd,	// (0x0006523a) list_double_cale_preview_pane_t2

0x0001,

0xfb4f,	// (0x0006ccac) list_double_cale_preview_pane_t_ParamLimits

0xfb4f,	// (0x0006ccac) list_double_cale_preview_pane_t

0x9b88,	// (0x00066ce5) main_ezdial_pane

0xa1e1,	// (0x0006733e) main_sp_fs_email_pane_ParamLimits

0x7931,	// (0x00064a8e) cmail_ddmenu_btn01_pane_ParamLimits

0x7931,	// (0x00064a8e) cmail_ddmenu_btn01_pane

0x794e,	// (0x00064aab) cmail_ddmenu_btn02_pane_ParamLimits

0x794e,	// (0x00064aab) cmail_ddmenu_btn02_pane

0x796c,	// (0x00064ac9) cmail_ddmenu_btn03_pane_ParamLimits

0x796c,	// (0x00064ac9) cmail_ddmenu_btn03_pane

0x7a0d,	// (0x00064b6a) main_sp_fs_ctrlbar_pane_ParamLimits

0x7a27,	// (0x00064b84) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7cd7,	// (0x00064e34) list_cmail_body_pane_ParamLimits

0xe365,	// (0x0006b4c2) bg_button_pane_cp12

0xe36e,	// (0x0006b4cb) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe36e,	// (0x0006b4cb) list_single_cmail_header_detail_pane_g3

0xa454,	// (0x000675b1) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa454,	// (0x000675b1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfaf9,	// (0x0006cc56) list_single_cmail_header_detail_pane_t_ParamLimits

0xfaf9,	// (0x0006cc56) list_single_cmail_header_detail_pane_t

0xa495,	// (0x000675f2) phacti_term_pane_t2_ParamLimits

0xa495,	// (0x000675f2) phacti_term_pane_t2

0x0001,

0xfb03,	// (0x0006cc60) phacti_term_pane_t_ParamLimits

0xfb03,	// (0x0006cc60) phacti_term_pane_t

0xe5c8,	// (0x0006b725) aid_size_list_single_double

0x80f5,	// (0x00065252) popup_ezdial_listscroll_window

0x8117,	// (0x00065274) popup_number_entry_window_cp01

0xa94f,	// (0x00067aac) bg_popup_call_pane_cp09

0xe5d4,	// (0x0006b731) ezdial_list_pane

0xe5dc,	// (0x0006b739) scroll_pane_cp23

0xc5ff,	// (0x0006975c) bg_button_pane_cp028_ParamLimits

0xc5ff,	// (0x0006975c) bg_button_pane_cp028

0x8125,	// (0x00065282) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8125,	// (0x00065282) cmail_ddmenu_btn01_pane_g1

0x8137,	// (0x00065294) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8137,	// (0x00065294) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb54,	// (0x0006ccb1) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb54,	// (0x0006ccb1) cmail_ddmenu_btn01_pane_g

0xe5e4,	// (0x0006b741) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5e4,	// (0x0006b741) cmail_ddmenu_btn01_pane_t1

0xb584,	// (0x000686e1) bg_button_pane_cp029_ParamLimits

0xb584,	// (0x000686e1) bg_button_pane_cp029

0x8143,	// (0x000652a0) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8143,	// (0x000652a0) cmail_ddmenu_btn02_pane_g1

0x815b,	// (0x000652b8) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x815b,	// (0x000652b8) cmail_ddmenu_btn02_pane_t1

0xa69a,	// (0x000677f7) bg_button_pane_cp031_ParamLimits

0xa69a,	// (0x000677f7) bg_button_pane_cp031

0x8143,	// (0x000652a0) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8143,	// (0x000652a0) cmail_ddmenu_btn03_pane_g1

0x815b,	// (0x000652b8) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x815b,	// (0x000652b8) cmail_ddmenu_btn03_pane_t1

0x527c,	// (0x000623d9) cell_dialer2_keypad_pane_t1_ParamLimits

0x5296,	// (0x000623f3) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5296,	// (0x000623f3) cell_dialer2_keypad_pane_t1_copy1

0x707f,	// (0x000641dc) ncimui_group_button_pane

0xa1e1,	// (0x0006733e) main_sp_fs_calendar_pane_ParamLimits

0x7cf1,	// (0x00064e4e) list_single_cmail_header_caption_pane_ParamLimits

0xa4aa,	// (0x00067607) aid_recal_txt_sm_pane

0x9b88,	// (0x00066ce5) mian_recal_day_pane

0xa4e4,	// (0x00067641) popup_sp_fs_cale_preview_window_ParamLimits

0xe5fa,	// (0x0006b757) list_recal_day_pane

0xa5c7,	// (0x00067724) list_single_recal_day_pane_ParamLimits

0xa5c7,	// (0x00067724) list_single_recal_day_pane

0xe621,	// (0x0006b77e) list_single_recal_day_pane_g1_ParamLimits

0xe621,	// (0x0006b77e) list_single_recal_day_pane_g1

0xa881,	// (0x000679de) list_single_recal_day_pane_g2_ParamLimits

0xa881,	// (0x000679de) list_single_recal_day_pane_g2

0xa88d,	// (0x000679ea) list_single_recal_day_pane_g3_ParamLimits

0xa88d,	// (0x000679ea) list_single_recal_day_pane_g3

0x817f,	// (0x000652dc) list_single_recal_day_pane_g4_ParamLimits

0x817f,	// (0x000652dc) list_single_recal_day_pane_g4

0xa899,	// (0x000679f6) list_single_recal_day_pane_g5_ParamLimits

0xa899,	// (0x000679f6) list_single_recal_day_pane_g5

0xa8a5,	// (0x00067a02) list_single_recal_day_pane_g6_ParamLimits

0xa8a5,	// (0x00067a02) list_single_recal_day_pane_g6

0x0004,

0xfb63,	// (0x0006ccc0) list_single_recal_day_pane_g_ParamLimits

0xfb63,	// (0x0006ccc0) list_single_recal_day_pane_g

0xa8b9,	// (0x00067a16) list_single_recal_day_pane_t1

0xa8cb,	// (0x00067a28) list_single_recal_day_pane_t2

0x0001,

0xfb6e,	// (0x0006cccb) list_single_recal_day_pane_t

0x8197,	// (0x000652f4) ncimui_query_button_pane_ParamLimits

0x8197,	// (0x000652f4) ncimui_query_button_pane

0x81a7,	// (0x00065304) ncimui_query_button_pane_t1_ParamLimits

0x81a7,	// (0x00065304) ncimui_query_button_pane_t1

0xe62d,	// (0x0006b78a) ncimui_query_button_pane_t2_ParamLimits

0xe62d,	// (0x0006b78a) ncimui_query_button_pane_t2

0x0001,

0xfb73,	// (0x0006ccd0) ncimui_query_button_pane_t_ParamLimits

0xfb73,	// (0x0006ccd0) ncimui_query_button_pane_t

0x81ba,	// (0x00065317) query_button_pane_ParamLimits

0x81ba,	// (0x00065317) query_button_pane

0x9b88,	// (0x00066ce5) bg_button_pane_cp0028

0xe640,	// (0x0006b79d) query_button_pane_t1

0x3ca3,	// (0x00060e00) main_tport_pane_ParamLimits

0x7bbe,	// (0x00064d1b) bg_popup_window_pane_cp01_ParamLimits

0x7bbe,	// (0x00064d1b) bg_popup_window_pane_cp01

0x7bcc,	// (0x00064d29) heading_pane_cp08_ParamLimits

0x7bcc,	// (0x00064d29) heading_pane_cp08

0x7bda,	// (0x00064d37) heading_pane_cp07_ParamLimits

0x7bda,	// (0x00064d37) heading_pane_cp07

0x7c70,	// (0x00064dcd) cell_tport_appsw_pane_g2

0x0002,

0xfae6,	// (0x0006cc43) cell_tport_appsw_pane_g

0xa1ef,	// (0x0006734c) input_candi_list_open_g1

0xad9a,	// (0x00067ef7) list_cale_time_pane_g6_ParamLimits

0xad9a,	// (0x00067ef7) list_cale_time_pane_g6

0x41fb,	// (0x00061358) aid_size_touch_calib_1_ParamLimits

0x41fb,	// (0x00061358) aid_size_touch_calib_1

0x4207,	// (0x00061364) aid_size_touch_calib_2_ParamLimits

0x4207,	// (0x00061364) aid_size_touch_calib_2

0x4215,	// (0x00061372) aid_size_touch_calib_3_ParamLimits

0x4215,	// (0x00061372) aid_size_touch_calib_3

0x4225,	// (0x00061382) aid_size_touch_calib_4_ParamLimits

0x4225,	// (0x00061382) aid_size_touch_calib_4

0x4233,	// (0x00061390) main_touch_calib_button_group_pane_ParamLimits

0x4233,	// (0x00061390) main_touch_calib_button_group_pane

0x4241,	// (0x0006139e) main_touch_calib_pane_g1_ParamLimits

0x424d,	// (0x000613aa) main_touch_calib_pane_g2_ParamLimits

0x4259,	// (0x000613b6) main_touch_calib_pane_g3_ParamLimits

0x4265,	// (0x000613c2) main_touch_calib_pane_g4_ParamLimits

0xf5d4,	// (0x0006c731) main_touch_calib_pane_g_ParamLimits

0x4271,	// (0x000613ce) main_touch_calib_pane_t1_ParamLimits

0x4288,	// (0x000613e5) main_touch_calib_pane_t2_ParamLimits

0x42a1,	// (0x000613fe) main_touch_calib_pane_t3_ParamLimits

0x42b7,	// (0x00061414) main_touch_calib_pane_t4_ParamLimits

0x42cd,	// (0x0006142a) main_touch_calib_pane_t5_ParamLimits

0xf5dd,	// (0x0006c73a) main_touch_calib_pane_t_ParamLimits

0xcd65,	// (0x00069ec2) list_single_fp_cale_pane_g3_ParamLimits

0xcd65,	// (0x00069ec2) list_single_fp_cale_pane_g3

0x3c87,	// (0x00060de4) bg_button_pane_cp012_ParamLimits

0x3c87,	// (0x00060de4) bg_vkb2_func_pane_cp03_ParamLimits

0x6168,	// (0x000632c5) cell_vitu2_function_top_pane_g1_ParamLimits

0x3c87,	// (0x00060de4) bg_vkb2_func_pane_cp04_ParamLimits

0x7005,	// (0x00064162) main_ncimui_button_group_pane_ParamLimits

0x7005,	// (0x00064162) main_ncimui_button_group_pane

0x706d,	// (0x000641ca) main_ncimui_pane_t3_ParamLimits

0x706d,	// (0x000641ca) main_ncimui_pane_t3

0xe3fb,	// (0x0006b558) phacti_button_group_pane

0xe5c8,	// (0x0006b725) aid_size_list_single_double_ParamLimits

0x80f5,	// (0x00065252) popup_ezdial_listscroll_window_ParamLimits

0x8117,	// (0x00065274) popup_number_entry_window_cp01_ParamLimits

0x81c7,	// (0x00065324) phacti_button_pane_ParamLimits

0x81c7,	// (0x00065324) phacti_button_pane

0x9b88,	// (0x00066ce5) bg_button_pane_cp14

0xe64e,	// (0x0006b7ab) phacti_button_pane_t1

0x81d8,	// (0x00065335) main_touch_calib_button_pane_ParamLimits

0x81d8,	// (0x00065335) main_touch_calib_button_pane

0xa71a,	// (0x00067877) bg_button_pane_cp18_ParamLimits

0xa71a,	// (0x00067877) bg_button_pane_cp18

0xe65c,	// (0x0006b7b9) main_touch_calib_button_pane_t1_ParamLimits

0xe65c,	// (0x0006b7b9) main_touch_calib_button_pane_t1

0xe672,	// (0x0006b7cf) main_touch_calib_button_pane_t2_ParamLimits

0xe672,	// (0x0006b7cf) main_touch_calib_button_pane_t2

0x0001,

0x09a9,	// (0x0005db06) main_touch_calib_button_pane_t_ParamLimits

0x09a9,	// (0x0005db06) main_touch_calib_button_pane_t

0x9b88,	// (0x00066ce5) cell_ncimui_button_pane

0x9b88,	// (0x00066ce5) bg_button_pane_cp032

0xe690,	// (0x0006b7ed) cell_ncimui_button_pane_t1

0x52f2,	// (0x0006244f) image3_infobar_pane_ParamLimits

0x52f2,	// (0x0006244f) image3_infobar_pane

0x743e,	// (0x0006459b) fs_bigclock_status_pane_ParamLimits

0x743e,	// (0x0006459b) fs_bigclock_status_pane

0x744b,	// (0x000645a8) main_fs_bigclock_clock_pane_ParamLimits

0x744b,	// (0x000645a8) main_fs_bigclock_clock_pane

0x7467,	// (0x000645c4) main_fs_bigclock_indi_pane_ParamLimits

0x7467,	// (0x000645c4) main_fs_bigclock_indi_pane

0x7495,	// (0x000645f2) main_fs_bigclock_swipe_pane_ParamLimits

0x7495,	// (0x000645f2) main_fs_bigclock_swipe_pane

0x9b88,	// (0x00066ce5) main_fs_clock_dumped_data

0x74cf,	// (0x0006462c) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x74cf,	// (0x0006462c) list_single_fs_bigclock_indicator_pane_g1

0x74ee,	// (0x0006464b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x74ee,	// (0x0006464b) list_single_fs_bigclock_indicator_pane_g2

0x7508,	// (0x00064665) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7508,	// (0x00064665) list_single_fs_bigclock_indicator_pane_g3

0x7524,	// (0x00064681) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7524,	// (0x00064681) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfa55,	// (0x0006cbb2) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfa55,	// (0x0006cbb2) list_single_fs_bigclock_indicator_pane_g

0x7553,	// (0x000646b0) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7553,	// (0x000646b0) list_single_fs_bigclock_indicator_pane_t1

0x757b,	// (0x000646d8) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x757b,	// (0x000646d8) list_single_fs_bigclock_indicator_pane_t2

0x75a3,	// (0x00064700) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x75a3,	// (0x00064700) list_single_fs_bigclock_indicator_pane_t3

0x75cb,	// (0x00064728) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x75cb,	// (0x00064728) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfa60,	// (0x0006cbbd) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfa60,	// (0x0006cbbd) list_single_fs_bigclock_indicator_pane_t

0xe69e,	// (0x0006b7fb) image3_infobar_fav_pane_ParamLimits

0xe69e,	// (0x0006b7fb) image3_infobar_fav_pane

0xe6ae,	// (0x0006b80b) image3_infobar_loc_pane_ParamLimits

0xe6ae,	// (0x0006b80b) image3_infobar_loc_pane

0xe6c4,	// (0x0006b821) image3_infobar_time_pane_ParamLimits

0xe6c4,	// (0x0006b821) image3_infobar_time_pane

0xa971,	// (0x00067ace) image3_infobar_time_pane_g1

0xe6d4,	// (0x0006b831) image3_infobar_time_pane_t1

0xa971,	// (0x00067ace) image3_infobar_loc_pane_g1

0xe6e2,	// (0x0006b83f) image3_infobar_loc_pane_g2

0x0001,

0xfb78,	// (0x0006ccd5) image3_infobar_loc_pane_g

0xe6ea,	// (0x0006b847) image3_infobar_loc_pane_t1

0xa971,	// (0x00067ace) image3_infobar_fav_pane_g1

0xe6f8,	// (0x0006b855) image3_infobar_fav_pane_g2

0x0001,

0xfb7d,	// (0x0006ccda) image3_infobar_fav_pane_g

0xe700,	// (0x0006b85d) fs_bigclock_status_battery_pane

0xe709,	// (0x0006b866) fs_bigclock_status_signal_pane

0xe712,	// (0x0006b86f) fs_bigclock_status_title_pane

0xe71b,	// (0x0006b878) fs_bigclock_status_signal_pane_g1

0xe724,	// (0x0006b881) fs_bigclock_status_signal_pane_g2

0x0001,

0x09b8,	// (0x0005db15) fs_bigclock_status_signal_pane_g

0xe72c,	// (0x0006b889) fs_bigclock_status_battery_pane_g1

0xe735,	// (0x0006b892) fs_bigclock_status_battery_pane_g2

0x0001,

0x09bd,	// (0x0005db1a) fs_bigclock_status_battery_pane_g

0xe73d,	// (0x0006b89a) fs_bigclock_status_title_pane_t1

0x81e8,	// (0x00065345) main_fs_bigclock_clock_pane_g1

0x81e8,	// (0x00065345) main_fs_bigclock_clock_pane_g2

0x81f7,	// (0x00065354) main_fs_bigclock_clock_pane_g3

0x81f7,	// (0x00065354) main_fs_bigclock_clock_pane_g4

0x0003,

0xfb82,	// (0x0006ccdf) main_fs_bigclock_clock_pane_g

0x8207,	// (0x00065364) main_fs_bigclock_clock_pane_t1

0x821c,	// (0x00065379) main_fs_bigclock_clock_pane_t2

0x0001,

0xfb8b,	// (0x0006cce8) main_fs_bigclock_clock_pane_t

0xe74b,	// (0x0006b8a8) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe74b,	// (0x0006b8a8) list_single_fs_bigclock_indicator_pane

0xe75c,	// (0x0006b8b9) list_single_fs_bigclock_pane_ParamLimits

0xe75c,	// (0x0006b8b9) list_single_fs_bigclock_pane

0xe782,	// (0x0006b8df) main_fs_bigclock_indicator_pane_t1

0xe791,	// (0x0006b8ee) list_single_fs_bigclock_pane_g1

0xe799,	// (0x0006b8f6) list_single_fs_bigclock_pane_t1

0xa971,	// (0x00067ace) main_fs_bigclock_swipe_pane_g1

0xe7dc,	// (0x0006b939) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfb97,	// (0x0006ccf4) main_fs_bigclock_swipe_pane_g

0xe7e4,	// (0x0006b941) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe7e4,	// (0x0006b941) main_fs_bigclock_swipe_pane_t1

0x2d86,	// (0x0005fee3) call_type_pane_ParamLimits

0x9b88,	// (0x00066ce5) main_btmg_pane

0xa52f,	// (0x0006768c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa52f,	// (0x0006768c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb27,	// (0x0006cc84) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb27,	// (0x0006cc84) list_single_cale_mrui_row_pane_g

0xa5b5,	// (0x00067712) list_recal_vselct_arw_lo_pane

0xe619,	// (0x0006b776) list_recal_vselct_arw_up_pane

0xa5bd,	// (0x0006771a) list_recal_vselct_pane

0x8273,	// (0x000653d0) btmg_button_pane

0x827f,	// (0x000653dc) main_btmg_pane_g1

0x9b88,	// (0x00066ce5) bg_button_pane_cp044

0xe801,	// (0x0006b95e) btmg_button_pane_t1

0xc624,	// (0x00069781) aid_listscroll_gen

0xa1e1,	// (0x0006733e) main_cntbar_detail_pane

0xe338,	// (0x0006b495) list_cmail_folder_pane

0xcc45,	// (0x00069da2) sp_fs_scroll_pane_cp03_ParamLimits

0x8287,	// (0x000653e4) list_single_fs_dyc_pane_cp01_ParamLimits

0x8287,	// (0x000653e4) list_single_fs_dyc_pane_cp01

0xe80f,	// (0x0006b96c) aid_size_cmail_indent

0xa8dd,	// (0x00067a3a) list_single_dyc_row_pane_cp01

0x82c5,	// (0x00065422) cntbar_detail_list_pane_ParamLimits

0x82c5,	// (0x00065422) cntbar_detail_list_pane

0x8305,	// (0x00065462) main_cntbar_detail_cont_pane_ParamLimits

0x8305,	// (0x00065462) main_cntbar_detail_cont_pane

0x2d7a,	// (0x0005fed7) scroll_pane_cp032_ParamLimits

0x2d7a,	// (0x0005fed7) scroll_pane_cp032

0x8311,	// (0x0006546e) cntbar_detail_list_event_pane_ParamLimits

0x8311,	// (0x0006546e) cntbar_detail_list_event_pane

0x82d3,	// (0x00065430) cntbar_detail_list_shct_pane

0xabf7,	// (0x00067d54) aid_list_gen

0xe818,	// (0x0006b975) aid_scroll

0xe821,	// (0x0006b97e) aid_size_touch_scroll_bar

0x776c,	// (0x000648c9) aid_list_double

0x8321,	// (0x0006547e) aid_list_single

0x832a,	// (0x00065487) aid_list_single_lg

0x8333,	// (0x00065490) aid_list_z_g_a_sm

0x833b,	// (0x00065498) aid_list_z_g_d

0x8343,	// (0x000654a0) aid_txt_z_prm

0x8351,	// (0x000654ae) aid_txt_z_prm_cp01

0x835f,	// (0x000654bc) aid_txt_z_sec

0x836d,	// (0x000654ca) main_cntbar_detail_cont_pane_g1_ParamLimits

0x836d,	// (0x000654ca) main_cntbar_detail_cont_pane_g1

0x837a,	// (0x000654d7) main_cntbar_detail_cont_pane_g2_ParamLimits

0x837a,	// (0x000654d7) main_cntbar_detail_cont_pane_g2

0x0001,

0xfb9c,	// (0x0006ccf9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfb9c,	// (0x0006ccf9) main_cntbar_detail_cont_pane_g

0xe82a,	// (0x0006b987) main_cntbar_detail_cont_pane_t1

0xe838,	// (0x0006b995) main_cntbar_detail_cont_pane_t2

0xe846,	// (0x0006b9a3) main_cntbar_detail_cont_pane_t3

0x0002,

0x09e6,	// (0x0005db43) main_cntbar_detail_cont_pane_t

0x8386,	// (0x000654e3) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8386,	// (0x000654e3) cell_cntbar_detail_list_shct_pane

0xe854,	// (0x0006b9b1) cntbar_detail_list_shct_pane_g1

0xe85d,	// (0x0006b9ba) cntbar_detail_list_shct_pane_g2

0x0001,

0x09ed,	// (0x0005db4a) cntbar_detail_list_shct_pane_g

0x839a,	// (0x000654f7) cntbar_detail_list_event_pane_g1_ParamLimits

0x839a,	// (0x000654f7) cntbar_detail_list_event_pane_g1

0x83a6,	// (0x00065503) cntbar_detail_list_event_pane_g2_ParamLimits

0x83a6,	// (0x00065503) cntbar_detail_list_event_pane_g2

0x0005,

0xfba1,	// (0x0006ccfe) cntbar_detail_list_event_pane_g_ParamLimits

0xfba1,	// (0x0006ccfe) cntbar_detail_list_event_pane_g

0x8414,	// (0x00065571) cntbar_detail_list_event_pane_t1_ParamLimits

0x8414,	// (0x00065571) cntbar_detail_list_event_pane_t1

0x8429,	// (0x00065586) cntbar_detail_list_event_pane_t2_ParamLimits

0x8429,	// (0x00065586) cntbar_detail_list_event_pane_t2

0x0002,

0xfbae,	// (0x0006cd0b) cntbar_detail_list_event_pane_t_ParamLimits

0xfbae,	// (0x0006cd0b) cntbar_detail_list_event_pane_t

0xa971,	// (0x00067ace) cell_cntbar_detail_list_shct_pane_g1

0x3133,	// (0x00060290) navi_pane_mv_g3

0xa1e1,	// (0x0006733e) main_cntbar_detail_pane_ParamLimits

0x9b88,	// (0x00066ce5) main_notif_wgt_pane

0x4f72,	// (0x000620cf) aid_tch_main_mp4_pane_g4

0x51db,	// (0x00062338) popup_slider_window_cp02

0xa5ab,	// (0x00067708) list_recal_day_event_pane

0x82a5,	// (0x00065402) cntbar_detail_btn_pane_ParamLimits

0x82a5,	// (0x00065402) cntbar_detail_btn_pane

0x82b5,	// (0x00065412) cntbar_detail_btn_pane_cp01_ParamLimits

0x82b5,	// (0x00065412) cntbar_detail_btn_pane_cp01

0x82d3,	// (0x00065430) cntbar_detail_list_shct_pane_ParamLimits

0x82df,	// (0x0006543c) cntbar_detail_pane_g1_ParamLimits

0x82df,	// (0x0006543c) cntbar_detail_pane_g1

0x82ef,	// (0x0006544c) cntbar_detail_pane_t1_ParamLimits

0x82ef,	// (0x0006544c) cntbar_detail_pane_t1

0x83b2,	// (0x0006550f) cntbar_detail_list_event_pane_g3_ParamLimits

0x83b2,	// (0x0006550f) cntbar_detail_list_event_pane_g3

0x83ca,	// (0x00065527) cntbar_detail_list_event_pane_g4_ParamLimits

0x83ca,	// (0x00065527) cntbar_detail_list_event_pane_g4

0x83e2,	// (0x0006553f) cntbar_detail_list_event_pane_g5_ParamLimits

0x83e2,	// (0x0006553f) cntbar_detail_list_event_pane_g5

0x83fa,	// (0x00065557) cntbar_detail_list_event_pane_g6_ParamLimits

0x83fa,	// (0x00065557) cntbar_detail_list_event_pane_g6

0x843e,	// (0x0006559b) cntbar_detail_list_event_pane_t3_ParamLimits

0x843e,	// (0x0006559b) cntbar_detail_list_event_pane_t3

0x8450,	// (0x000655ad) popup_notif_wgt_window_ParamLimits

0x8450,	// (0x000655ad) popup_notif_wgt_window

0x8460,	// (0x000655bd) popup_submenu_window_cp01_ParamLimits

0x8460,	// (0x000655bd) popup_submenu_window_cp01

0xa94f,	// (0x00067aac) bg_popup_window_pane_cp10

0xe866,	// (0x0006b9c3) listscroll_notif_wgt_pane

0xe878,	// (0x0006b9d5) list_notif_wgt_window

0xe881,	// (0x0006b9de) scroll_pane_cp033

0x8470,	// (0x000655cd) list_notif_wgt_row_pane_ParamLimits

0x8470,	// (0x000655cd) list_notif_wgt_row_pane

0xe88a,	// (0x0006b9e7) aid_size_list_notif_wgt_del

0xe897,	// (0x0006b9f4) list_notif_wgt_row_pane_g1

0xe8a3,	// (0x0006ba00) list_notif_wgt_row_pane_g2

0xe8b2,	// (0x0006ba0f) list_notif_wgt_row_pane_g3

0x0002,

0x0a06,	// (0x0005db63) list_notif_wgt_row_pane_g

0xe8bf,	// (0x0006ba1c) list_notif_wgt_row_pane_t1

0xe8d5,	// (0x0006ba32) list_notif_wgt_row_pane_t2

0xe8e7,	// (0x0006ba44) list_notif_wgt_row_pane_t3

0x0002,

0x0a0d,	// (0x0005db6a) list_notif_wgt_row_pane_t

0xd54c,	// (0x0006a6a9) list_recal_day_event_pane_g1

0xe8f9,	// (0x0006ba56) list_recal_day_event_pane_t1

0x9b88,	// (0x00066ce5) bg_button_pane_cp045

0x8484,	// (0x000655e1) cntbar_detail_btn_pane_t1

0xb584,	// (0x000686e1) main_callh_pane_ParamLimits

0xb584,	// (0x000686e1) main_callh_pane

0x9b88,	// (0x00066ce5) main_coverflow0_pane

0x9b88,	// (0x00066ce5) main_wgtman_pane

0x74ad,	// (0x0006460a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x74ad,	// (0x0006460a) main_fs_bigclock_unlock_btn_pane

0x7c68,	// (0x00064dc5) bg_button_pane_cp16

0x7c78,	// (0x00064dd5) cell_tport_appsw_pane_g3

0x8492,	// (0x000655ef) cf0_flow_pane_ParamLimits

0x8492,	// (0x000655ef) cf0_flow_pane

0xe908,	// (0x0006ba65) listscroll_cf0_pane

0xe913,	// (0x0006ba70) main_cf0_pane_g1

0x84a1,	// (0x000655fe) main_cf0_pane_t1_ParamLimits

0x84a1,	// (0x000655fe) main_cf0_pane_t1

0x84b5,	// (0x00065612) main_cf0_pane_t2_ParamLimits

0x84b5,	// (0x00065612) main_cf0_pane_t2

0x0001,

0xfbb5,	// (0x0006cd12) main_cf0_pane_t_ParamLimits

0xfbb5,	// (0x0006cd12) main_cf0_pane_t

0xe925,	// (0x0006ba82) scroll_pane_cp11

0x84c9,	// (0x00065626) cf0_flow_pane_g1

0x84d1,	// (0x0006562e) cf0_flow_pane_g2

0x0001,

0xfbba,	// (0x0006cd17) cf0_flow_pane_g

0x84d9,	// (0x00065636) cf0_flow_pane_t1

0x9b88,	// (0x00066ce5) main_call6_pane

0x9b88,	// (0x00066ce5) main_calllock_pane

0x84e7,	// (0x00065644) call6_btn_grp_pane_ParamLimits

0x84e7,	// (0x00065644) call6_btn_grp_pane

0x84f4,	// (0x00065651) call6_pane_g1_ParamLimits

0x84f4,	// (0x00065651) call6_pane_g1

0x8504,	// (0x00065661) popup_call6_1st_window_ParamLimits

0x8504,	// (0x00065661) popup_call6_1st_window

0x8514,	// (0x00065671) popup_call6_2nd_window_ParamLimits

0x8514,	// (0x00065671) popup_call6_2nd_window

0x8524,	// (0x00065681) cell_call6_btn_pane_ParamLimits

0x8524,	// (0x00065681) cell_call6_btn_pane

0xa94f,	// (0x00067aac) bg_popup_call2_in_pane_cp03

0xe930,	// (0x0006ba8d) popup_call6_1st_window_g1

0xe938,	// (0x0006ba95) popup_call6_1st_window_g2

0xe940,	// (0x0006ba9d) popup_call6_1st_window_g3

0x0002,

0x0a23,	// (0x0005db80) popup_call6_1st_window_g

0xe948,	// (0x0006baa5) popup_call6_1st_window_t1

0xe957,	// (0x0006bab4) popup_call6_1st_window_t2

0xe967,	// (0x0006bac4) popup_call6_1st_window_t3

0x0002,

0x0a2a,	// (0x0005db87) popup_call6_1st_window_t

0xa94f,	// (0x00067aac) bg_popup_call2_in_pane_cp04

0xe977,	// (0x0006bad4) popup_call6_2nd_window_g1

0xe97f,	// (0x0006badc) popup_call6_2nd_window_g2

0xe987,	// (0x0006bae4) popup_call6_2nd_window_g3

0x0002,

0x0a31,	// (0x0005db8e) popup_call6_2nd_window_g

0xe98f,	// (0x0006baec) popup_call6_2nd_window_t1

0x0f07,	// (0x0005e064) bg_button_pane_cp15

0x8535,	// (0x00065692) cell_call6_btn_pane_g1

0x853e,	// (0x0006569b) cell_call6_btn_pane_t1

0x854d,	// (0x000656aa) listscroll_wgtman_pane_ParamLimits

0x854d,	// (0x000656aa) listscroll_wgtman_pane

0x8569,	// (0x000656c6) wgtman_btn_pane_ParamLimits

0x8569,	// (0x000656c6) wgtman_btn_pane

0xb189,	// (0x000682e6) aid_scroll_copy1

0xe99e,	// (0x0006bafb) list_wgtman_pane

0x859e,	// (0x000656fb) wgtman_btn_pane_g1_ParamLimits

0x859e,	// (0x000656fb) wgtman_btn_pane_g1

0x85c6,	// (0x00065723) wgtman_btn_pane_t1_ParamLimits

0x85c6,	// (0x00065723) wgtman_btn_pane_t1

0xe9a8,	// (0x0006bb05) wgtman_btn_pane_t2_ParamLimits

0xe9a8,	// (0x0006bb05) wgtman_btn_pane_t2

0x0001,

0xfbbf,	// (0x0006cd1c) wgtman_btn_pane_t_ParamLimits

0xfbbf,	// (0x0006cd1c) wgtman_btn_pane_t

0x85fd,	// (0x0006575a) listrow_wgtman_pane_ParamLimits

0x85fd,	// (0x0006575a) listrow_wgtman_pane

0x8614,	// (0x00065771) listrow_wgtman_pane_g1

0x8621,	// (0x0006577e) listrow_wgtman_pane_g2

0x0001,

0xfbc4,	// (0x0006cd21) listrow_wgtman_pane_g

0x863f,	// (0x0006579c) listrow_wgtman_pane_t1

0x8657,	// (0x000657b4) listrow_wgtman_pane_t2

0x0001,

0xfbc9,	// (0x0006cd26) listrow_wgtman_pane_t

0x867d,	// (0x000657da) wait_bar_pane_cp09

0xe9bf,	// (0x0006bb1c) main_calllock_btn_pane

0xe9c9,	// (0x0006bb26) main_calllock_pane_g1

0x9b88,	// (0x00066ce5) bg_button_pane_cp17

0xe9d5,	// (0x0006bb32) main_calllock_btn_pane_g1

0xe9de,	// (0x0006bb3b) main_calllock_btn_pane_t1

0x9b88,	// (0x00066ce5) main_dialer3_pane

0x9b88,	// (0x00066ce5) main_fmrd2_pane

0xa971,	// (0x00067ace) main_fs_bigclock_unlock_btn_pane_g1

0x8697,	// (0x000657f4) main_fs_bigclock_unlock_btn_pane_t1

0x86a5,	// (0x00065802) area_fmrd2_info_pane_ParamLimits

0x86a5,	// (0x00065802) area_fmrd2_info_pane

0x86b1,	// (0x0006580e) area_fmrd2_visual_pane_ParamLimits

0x86b1,	// (0x0006580e) area_fmrd2_visual_pane

0x86bf,	// (0x0006581c) fmrd2_indi_pane_ParamLimits

0x86bf,	// (0x0006581c) fmrd2_indi_pane

0x86cc,	// (0x00065829) area_fmrd2_visual_pane_g1

0x86d4,	// (0x00065831) area_fmrd2_visual_pane_t1

0x86e4,	// (0x00065841) area_fmrd2_visual_pane_t2

0x86f4,	// (0x00065851) area_fmrd2_visual_pane_t3

0x0002,

0xfbd3,	// (0x0006cd30) area_fmrd2_visual_pane_t

0x8704,	// (0x00065861) area_fmrd2_info_pane_g1

0x870c,	// (0x00065869) area_fmrd2_info_pane_t1

0x871c,	// (0x00065879) area_fmrd2_info_pane_t2

0x872c,	// (0x00065889) area_fmrd2_info_pane_t3

0x873c,	// (0x00065899) area_fmrd2_info_pane_t4

0x0003,

0xfbda,	// (0x0006cd37) area_fmrd2_info_pane_t

0x874c,	// (0x000658a9) fmrd2_indi_pane_t1

0x875c,	// (0x000658b9) fmrd2_indi_pane_t2

0x876c,	// (0x000658c9) fmrd2_indi_pane_t3

0x0002,

0xfbe3,	// (0x0006cd40) fmrd2_indi_pane_t

0x7535,	// (0x00064692) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7535,	// (0x00064692) list_single_fs_bigclock_indicator_pane_g5

0x75ea,	// (0x00064747) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x75ea,	// (0x00064747) list_single_fs_bigclock_indicator_pane_t5

0x7e4c,	// (0x00064fa9) aid_cell_bcale_month_pane_ParamLimits

0x7e4c,	// (0x00064fa9) aid_cell_bcale_month_pane

0x7e6a,	// (0x00064fc7) bcale_month_pane_ParamLimits

0x7e6a,	// (0x00064fc7) bcale_month_pane

0x7e88,	// (0x00064fe5) bcale_preview_pane_ParamLimits

0x7e88,	// (0x00064fe5) bcale_preview_pane

0xe799,	// (0x0006b8f6) list_single_fs_bigclock_pane_t1_ParamLimits

0xe7b8,	// (0x0006b915) list_single_fs_bigclock_pane_t2_ParamLimits

0xe7b8,	// (0x0006b915) list_single_fs_bigclock_pane_t2

0x0001,

0x09d7,	// (0x0005db34) list_single_fs_bigclock_pane_t_ParamLimits

0x09d7,	// (0x0005db34) list_single_fs_bigclock_pane_t

0x868f,	// (0x000657ec) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfbce,	// (0x0006cd2b) main_fs_bigclock_unlock_btn_pane_g

0x877c,	// (0x000658d9) aid_dia3_key_size_ParamLimits

0x877c,	// (0x000658d9) aid_dia3_key_size

0x8788,	// (0x000658e5) aid_dia3_listrow_size_ParamLimits

0x8788,	// (0x000658e5) aid_dia3_listrow_size

0x8798,	// (0x000658f5) dia3_keypad_fun_pane_ParamLimits

0x8798,	// (0x000658f5) dia3_keypad_fun_pane

0x87a8,	// (0x00065905) dia3_keypad_num_pane_ParamLimits

0x87a8,	// (0x00065905) dia3_keypad_num_pane

0x87b8,	// (0x00065915) dia3_listscroll_pane_ParamLimits

0x87b8,	// (0x00065915) dia3_listscroll_pane

0x87c6,	// (0x00065923) dia3_numentry_pane_ParamLimits

0x87c6,	// (0x00065923) dia3_numentry_pane

0xe9ed,	// (0x0006bb4a) dia3_list_pane

0x87d4,	// (0x00065931) scroll_pane_cp12

0x9b88,	// (0x00066ce5) bg_dia3_numentry_pane

0x87df,	// (0x0006593c) dia3_numentry_pane_t1

0x87ee,	// (0x0006594b) cell_dia3_key_num_pane

0x87f6,	// (0x00065953) cell_dia3_key0_fun_pane_ParamLimits

0x87f6,	// (0x00065953) cell_dia3_key0_fun_pane

0x8803,	// (0x00065960) cell_dia3_key1_fun_pane_ParamLimits

0x8803,	// (0x00065960) cell_dia3_key1_fun_pane

0x8810,	// (0x0006596d) dia3_listrow_pane

0xde45,	// (0x0006afa2) bg_dia3_numentry_pane_g1

0x9b88,	// (0x00066ce5) bg_button_pane_cp21

0x881d,	// (0x0006597a) cell_dia3_key_num_pane_t1

0x882b,	// (0x00065988) cell_dia3_key_num_pane_t2

0x883a,	// (0x00065997) cell_dia3_key_num_pane_t3

0x8849,	// (0x000659a6) cell_dia3_key_num_pane_t4

0x0003,

0xfbea,	// (0x0006cd47) cell_dia3_key_num_pane_t

0x9b88,	// (0x00066ce5) bg_button_pane_cp19

0x8858,	// (0x000659b5) cell_dia3_key0_fun_pane_g1

0x9b88,	// (0x00066ce5) bg_button_pane_cp20

0x8860,	// (0x000659bd) cell_dia3_key1_fun_pane_g1

0x8868,	// (0x000659c5) area_left_week_number_pane

0x887b,	// (0x000659d8) area_top_day_name_pane

0x8889,	// (0x000659e6) frame_month_view_pane

0xe9f8,	// (0x0006bb55) grid_month_view_pane

0x889e,	// (0x000659fb) cell_top_day_name_pane_ParamLimits

0x889e,	// (0x000659fb) cell_top_day_name_pane

0x88ba,	// (0x00065a17) cell_area_left_week_number_pane_ParamLimits

0x88ba,	// (0x00065a17) cell_area_left_week_number_pane

0x88db,	// (0x00065a38) cell_month_view_pane_ParamLimits

0x88db,	// (0x00065a38) cell_month_view_pane

0xea06,	// (0x0006bb63) frm_month_g1

0x8907,	// (0x00065a64) frm_month_g2

0x8918,	// (0x00065a75) frm_month_g3

0x8929,	// (0x00065a86) frm_month_g4

0x893a,	// (0x00065a97) frm_month_g5

0x894b,	// (0x00065aa8) frm_month_g6

0x895e,	// (0x00065abb) frm_month_g7

0xea13,	// (0x0006bb70) frm_month_g8

0x8971,	// (0x00065ace) frm_month_g9

0x897e,	// (0x00065adb) frm_month_g10

0x898b,	// (0x00065ae8) frm_month_g11

0x8998,	// (0x00065af5) frm_month_g12

0x89a5,	// (0x00065b02) frm_month_g13

0x89b4,	// (0x00065b11) frm_month_g14

0x89c3,	// (0x00065b20) frm_month_g15

0x89d2,	// (0x00065b2f) frm_month_g16

0x000f,

0xfbf3,	// (0x0006cd50) frm_month_g

0xea20,	// (0x0006bb7d) cell_top_day_name_pane_t1

0x89e1,	// (0x00065b3e) cell_area_left_week_number_pane_g1

0x89f0,	// (0x00065b4d) cell_area_left_week_number_pane_t1

0xa6a8,	// (0x00067805) cell_month_view_pane_g1

0x8a06,	// (0x00065b63) cell_month_view_pane_t1

0x9b88,	// (0x00066ce5) main_fps_pane

0xe24c,	// (0x0006b3a9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe24c,	// (0x0006b3a9) cmail_ddmenu_btn02_pane_cp1

0xe268,	// (0x0006b3c5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe268,	// (0x0006b3c5) cmail_ddmenu_btn02_pane_cp2

0x814f,	// (0x000652ac) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x814f,	// (0x000652ac) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb59,	// (0x0006ccb6) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb59,	// (0x0006ccb6) cmail_ddmenu_btn02_pane_g

0x816d,	// (0x000652ca) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x816d,	// (0x000652ca) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb5e,	// (0x0006ccbb) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb5e,	// (0x0006ccbb) cmail_ddmenu_btn02_pane_t

0x8a1c,	// (0x00065b79) fps_text_pane_ParamLimits

0x8a1c,	// (0x00065b79) fps_text_pane

0x8a29,	// (0x00065b86) main_fps_pane_g1_ParamLimits

0x8a29,	// (0x00065b86) main_fps_pane_g1

0x8a35,	// (0x00065b92) wait_bar_pane_cp010_ParamLimits

0x8a35,	// (0x00065b92) wait_bar_pane_cp010

0x8a41,	// (0x00065b9e) fps_text_pane_t1_ParamLimits

0x8a41,	// (0x00065b9e) fps_text_pane_t1

0x569a,	// (0x000627f7) cam4_image_uncrop_pane_g1

0x56a3,	// (0x00062800) cam4_image_uncrop_pane_g2

0x56ac,	// (0x00062809) cam4_image_uncrop_pane_g3

0x56b5,	// (0x00062812) cam4_image_uncrop_pane_g4

0x0003,

0xf733,	// (0x0006c890) cam4_image_uncrop_pane_g

0x8810,	// (0x0006596d) dia3_listrow_pane_ParamLimits

0x9b88,	// (0x00066ce5) main_phob2_pane

0x7c25,	// (0x00064d82) cell_tport_appsw_pane_cp02_ParamLimits

0x7c25,	// (0x00064d82) cell_tport_appsw_pane_cp02

0x7c34,	// (0x00064d91) cell_tport_appsw_pane_cp03_ParamLimits

0x7c34,	// (0x00064d91) cell_tport_appsw_pane_cp03

0x9b88,	// (0x00066ce5) phob2_contact_card_pane

0x9b88,	// (0x00066ce5) phob2_listscroll_pane

0xea33,	// (0x0006bb90) phob2_list_pane

0xea3b,	// (0x0006bb98) scroll_pane_cp034

0x8a5a,	// (0x00065bb7) phob2_cc_data_pane_ParamLimits

0x8a5a,	// (0x00065bb7) phob2_cc_data_pane

0x8a71,	// (0x00065bce) phob2_cc_listscroll_pane_ParamLimits

0x8a71,	// (0x00065bce) phob2_cc_listscroll_pane

0x8a8d,	// (0x00065bea) list_double_large_graphic_phob2_pane_ParamLimits

0x8a8d,	// (0x00065bea) list_double_large_graphic_phob2_pane

0x8aa1,	// (0x00065bfe) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8aa1,	// (0x00065bfe) list_double_large_graphic_phob2_pane_g1

0x8aae,	// (0x00065c0b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8aae,	// (0x00065c0b) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfc14,	// (0x0006cd71) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc14,	// (0x0006cd71) list_double_large_graphic_phob2_pane_g

0x8ad4,	// (0x00065c31) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8ad4,	// (0x00065c31) list_double_large_graphic_phob2_pane_t1

0x8ae9,	// (0x00065c46) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8ae9,	// (0x00065c46) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc1d,	// (0x0006cd7a) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc1d,	// (0x0006cd7a) list_double_large_graphic_phob2_pane_t

0x9b88,	// (0x00066ce5) list_highlight_pane_cp024

0x8afe,	// (0x00065c5b) phob2_cc_button_pane

0x8b08,	// (0x00065c65) phob2_cc_data_pane_g1_ParamLimits

0x8b08,	// (0x00065c65) phob2_cc_data_pane_g1

0x8b1b,	// (0x00065c78) phob2_cc_data_pane_g2_ParamLimits

0x8b1b,	// (0x00065c78) phob2_cc_data_pane_g2

0x0001,

0xfc22,	// (0x0006cd7f) phob2_cc_data_pane_g_ParamLimits

0xfc22,	// (0x0006cd7f) phob2_cc_data_pane_g

0x8b2f,	// (0x00065c8c) phob2_cc_data_pane_t1_ParamLimits

0x8b2f,	// (0x00065c8c) phob2_cc_data_pane_t1

0x8b50,	// (0x00065cad) phob2_cc_data_pane_t2_ParamLimits

0x8b50,	// (0x00065cad) phob2_cc_data_pane_t2

0x8b71,	// (0x00065cce) phob2_cc_data_pane_t3_ParamLimits

0x8b71,	// (0x00065cce) phob2_cc_data_pane_t3

0x0002,

0xfc27,	// (0x0006cd84) phob2_cc_data_pane_t_ParamLimits

0xfc27,	// (0x0006cd84) phob2_cc_data_pane_t

0xea43,	// (0x0006bba0) phob2_cc_list_pane_ParamLimits

0xea43,	// (0x0006bba0) phob2_cc_list_pane

0xd8e9,	// (0x0006aa46) scroll_pane_cp035_ParamLimits

0xd8e9,	// (0x0006aa46) scroll_pane_cp035

0xa1e1,	// (0x0006733e) bg_button_pane_cp033

0x8b92,	// (0x00065cef) phob2_cc_button_pane_g1

0x8b9e,	// (0x00065cfb) phob2_cc_button_pane_t1

0x8bb3,	// (0x00065d10) phob2_cc_button_pane_t2

0x0001,

0xfc2e,	// (0x0006cd8b) phob2_cc_button_pane_t

0x8bc5,	// (0x00065d22) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8bc5,	// (0x00065d22) list_double_large_graphic_phob2_cc_pane

0x8c12,	// (0x00065d6f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8c12,	// (0x00065d6f) list_double_large_graphic_phob2_cc_pane_g1

0x8c23,	// (0x00065d80) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8c23,	// (0x00065d80) list_double_large_graphic_phob2_cc_pane_g2

0x8c32,	// (0x00065d8f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8c32,	// (0x00065d8f) list_double_large_graphic_phob2_cc_pane_g3

0x8c41,	// (0x00065d9e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8c41,	// (0x00065d9e) list_double_large_graphic_phob2_cc_pane_g4

0x8c52,	// (0x00065daf) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8c52,	// (0x00065daf) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc33,	// (0x0006cd90) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc33,	// (0x0006cd90) list_double_large_graphic_phob2_cc_pane_g

0x8c61,	// (0x00065dbe) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8c61,	// (0x00065dbe) list_double_large_graphic_phob2_cc_pane_t1

0x8c8a,	// (0x00065de7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8c8a,	// (0x00065de7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc3e,	// (0x0006cd9b) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc3e,	// (0x0006cd9b) list_double_large_graphic_phob2_cc_pane_t

0xea4f,	// (0x0006bbac) list_highlight_pane_cp025_ParamLimits

0xea4f,	// (0x0006bbac) list_highlight_pane_cp025

0xa1e1,	// (0x0006733e) bg_button_pane_cp033_ParamLimits

0x8b92,	// (0x00065cef) phob2_cc_button_pane_g1_ParamLimits

0x8b9e,	// (0x00065cfb) phob2_cc_button_pane_t1_ParamLimits

0x8bb3,	// (0x00065d10) phob2_cc_button_pane_t2_ParamLimits

0xfc2e,	// (0x0006cd8b) phob2_cc_button_pane_t_ParamLimits

0x0efb,	// (0x0005e058) popup_wgtman_window

0xd41c,	// (0x0006a579) scroll_pane_cp038

0x8586,	// (0x000656e3) wgtman_btn_pane_cp_01_ParamLimits

0x8586,	// (0x000656e3) wgtman_btn_pane_cp_01

0xea5d,	// (0x0006bbba) wgtman_content_pane

0xea66,	// (0x0006bbc3) wgtman_heading_pane

0x9b88,	// (0x00066ce5) bg_heading_pane_cp02

0xea6f,	// (0x0006bbcc) wgtman_heading_pane_g1

0xea77,	// (0x0006bbd4) wgtman_heading_pane_t1

0xea85,	// (0x0006bbe2) scroll_pane_cp036

0xea8d,	// (0x0006bbea) wgtman_list_pane

0xe286,	// (0x0006b3e3) wgtman_list_pane_t1_ParamLimits

0xe286,	// (0x0006b3e3) wgtman_list_pane_t1

0x55f7,	// (0x00062754) cam4_grid_pane

0x632e,	// (0x0006348b) bg_button_pane_cp015_ParamLimits

0x6343,	// (0x000634a0) bg_button_pane_cp016_ParamLimits

0x634f,	// (0x000634ac) bg_button_pane_cp017_ParamLimits

0x63a8,	// (0x00063505) popup_vitu2_query_window_g3_ParamLimits

0x63a8,	// (0x00063505) popup_vitu2_query_window_g3

0x6449,	// (0x000635a6) popup_vitu2_query_window_t6_ParamLimits

0x6449,	// (0x000635a6) popup_vitu2_query_window_t6

0x6474,	// (0x000635d1) popup_vitu2_query_window_t7_ParamLimits

0x6474,	// (0x000635d1) popup_vitu2_query_window_t7

0xd5b9,	// (0x0006a716) cam4_grid_pane_g1

0xd5c2,	// (0x0006a71f) cam4_grid_pane_g2

0xea95,	// (0x0006bbf2) cam4_grid_pane_g3

0xea9e,	// (0x0006bbfb) cam4_grid_pane_g4

0x0003,

0xfc43,	// (0x0006cda0) cam4_grid_pane_g

0x1be5,	// (0x0005ed42) aid_placing_vt_slider_lsc_ParamLimits

0x1f18,	// (0x0005f075) vidtel_button_pane_ParamLimits

0x1f18,	// (0x0005f075) vidtel_button_pane

0x9b88,	// (0x00066ce5) bg_button_pane_cp034

0xeaa9,	// (0x0006bc06) vidtel_button_pane_g1

0xeab1,	// (0x0006bc0e) vidtel_button_pane_t1

0xd52a,	// (0x0006a687) aid_size_vtel_slider_touch

0xd8e9,	// (0x0006aa46) scroll_pane_cp039

0x71dc,	// (0x00064339) ncim_query_button_pane_cp01_ParamLimits

0x71fb,	// (0x00064358) ncimui_query_pane_g1_ParamLimits

0xa1e1,	// (0x0006733e) input_focus_pane_cp012_ParamLimits

0xde83,	// (0x0006afe0) ncim_query_entry_pane_t1_ParamLimits

0xd8e9,	// (0x0006aa46) scroll_pane_cp039_ParamLimits

0x30a5,	// (0x00060202) navi_pane_bcale_mc_g1

0x30ad,	// (0x0006020a) navi_pane_bcale_mc_t1

0xe2b8,	// (0x0006b415) main_sp_fs_email_pane_g1

0xe2c4,	// (0x0006b421) main_sp_fs_email_pane_g2

0x0001,

0x08bf,	// (0x0005da1c) main_sp_fs_email_pane_g

0xe520,	// (0x0006b67d) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe520,	// (0x0006b67d) list_single_cale_mrui_row_pane_g3

0x818d,	// (0x000652ea) list_single_recal_day_pane_g5_event_pane

0xa8b1,	// (0x00067a0e) list_single_recal_day_pane_g7

0xeac7,	// (0x0006bc24) list_recal_day_event_pane_cp01

0xead0,	// (0x0006bc2d) list_recal_vselct_arw_lo_pane_cp01

0xead8,	// (0x0006bc35) list_recal_vselct_arw_up_pane_cp01

0xeae0,	// (0x0006bc3d) list_recal_vselct_pane_cp01

0xd54c,	// (0x0006a6a9) list_recal_day_event_pane_cp01_g1

0xa8e6,	// (0x00067a43) list_recal_day_event_pane_cp01_t1

0xa8b9,	// (0x00067a16) list_single_recal_day_pane_t1_ParamLimits

0xa8cb,	// (0x00067a28) list_single_recal_day_pane_t2_ParamLimits

0xfb6e,	// (0x0006cccb) list_single_recal_day_pane_t_ParamLimits

0xa62d,	// (0x0006778a) bg_notes_pane_ParamLimits

0xa6f8,	// (0x00067855) list_notes_pane_ParamLimits

0x10ce,	// (0x0005e22b) scroll_pane_cp06_ParamLimits

0xa71a,	// (0x00067877) main_notes_pane_ParamLimits

0xa1e1,	// (0x0006733e) main_welc_pane

0x8cd5,	// (0x00065e32) main_welc_body_pane_ParamLimits

0x8cd5,	// (0x00065e32) main_welc_body_pane

0x8cf0,	// (0x00065e4d) main_welc_opti_pane_ParamLimits

0x8cf0,	// (0x00065e4d) main_welc_opti_pane

0x8d51,	// (0x00065eae) main_welc_pane_t1_ParamLimits

0x8d51,	// (0x00065eae) main_welc_pane_t1

0x8ef7,	// (0x00066054) main_welc_body_row_pane_ParamLimits

0x8ef7,	// (0x00066054) main_welc_body_row_pane

0xa69a,	// (0x000677f7) main_welc_opti_row_pane_ParamLimits

0xa69a,	// (0x000677f7) main_welc_opti_row_pane

0xeafa,	// (0x0006bc57) main_welc_opti_row_pane_g1

0x8f11,	// (0x0006606e) main_welc_opti_row_pane_t1

0xeb02,	// (0x0006bc5f) main_welc_body_row_pane_t1

0xe870,	// (0x0006b9cd) popup_notif_wgt_heading_pane

0xe88a,	// (0x0006b9e7) aid_size_list_notif_wgt_del_ParamLimits

0xe897,	// (0x0006b9f4) list_notif_wgt_row_pane_g1_ParamLimits

0xe8a3,	// (0x0006ba00) list_notif_wgt_row_pane_g2_ParamLimits

0xe8b2,	// (0x0006ba0f) list_notif_wgt_row_pane_g3_ParamLimits

0x0a06,	// (0x0005db63) list_notif_wgt_row_pane_g_ParamLimits

0xe8bf,	// (0x0006ba1c) list_notif_wgt_row_pane_t1_ParamLimits

0xe8d5,	// (0x0006ba32) list_notif_wgt_row_pane_t2_ParamLimits

0xe8e7,	// (0x0006ba44) list_notif_wgt_row_pane_t3_ParamLimits

0x0a0d,	// (0x0005db6a) list_notif_wgt_row_pane_t_ParamLimits

0x8614,	// (0x00065771) listrow_wgtman_pane_g1_ParamLimits

0x8621,	// (0x0006577e) listrow_wgtman_pane_g2_ParamLimits

0xfbc4,	// (0x0006cd21) listrow_wgtman_pane_g_ParamLimits

0x863f,	// (0x0006579c) listrow_wgtman_pane_t1_ParamLimits

0x8657,	// (0x000657b4) listrow_wgtman_pane_t2_ParamLimits

0xfbc9,	// (0x0006cd26) listrow_wgtman_pane_t_ParamLimits

0x867d,	// (0x000657da) wait_bar_pane_cp09_ParamLimits

0x9b88,	// (0x00066ce5) bg_popup_heading_pane_cp02

0xeb11,	// (0x0006bc6e) popup_notif_wgt_heading_pane_g1

0xeb19,	// (0x0006bc76) popup_notif_wgt_heading_pane_t1

0x9b88,	// (0x00066ce5) main_vids_pane

0x9b88,	// (0x00066ce5) vids_listscroll_pane

0x8f20,	// (0x0006607d) scroll_pane_cp040

0x9b88,	// (0x00066ce5) vids_list_pane

0x8f2b,	// (0x00066088) vids_list_double_pane_ParamLimits

0x8f2b,	// (0x00066088) vids_list_double_pane

0x8f3f,	// (0x0006609c) vids_list_double_pane_g1

0x8f48,	// (0x000660a5) vids_list_double_pane_t1

0x8f58,	// (0x000660b5) vids_list_double_pane_t2

0x0001,

0xfc62,	// (0x0006cdbf) vids_list_double_pane_t

0x3c87,	// (0x00060de4) main_ncimui_pane_ParamLimits

0x701d,	// (0x0006417a) main_ncimui_pane_g1_ParamLimits

0x702b,	// (0x00064188) main_ncimui_pane_g2_ParamLimits

0x702b,	// (0x00064188) main_ncimui_pane_g2

0x0001,

0xf9f7,	// (0x0006cb54) main_ncimui_pane_g_ParamLimits

0xf9f7,	// (0x0006cb54) main_ncimui_pane_g

0x8d0b,	// (0x00065e68) main_welc_pane_g1_ParamLimits

0x8d0b,	// (0x00065e68) main_welc_pane_g1

0x8d17,	// (0x00065e74) main_welc_pane_g2_ParamLimits

0x8d17,	// (0x00065e74) main_welc_pane_g2

0x0003,

0xfc4c,	// (0x0006cda9) main_welc_pane_g_ParamLimits

0xfc4c,	// (0x0006cda9) main_welc_pane_g

0xa62d,	// (0x0006778a) listscroll_mce_pane_ParamLimits

0x316f,	// (0x000602cc) wait_bar_pane_cp10

0xc62c,	// (0x00069789) main_cale_day_pane_ParamLimits

0xc62c,	// (0x00069789) main_cale_week_pane_ParamLimits

0xa62d,	// (0x0006778a) main_messa_pane_ParamLimits

0x4a3c,	// (0x00061b99) main_clock2_btn_pane_ParamLimits

0x4a3c,	// (0x00061b99) main_clock2_btn_pane

0xcddf,	// (0x00069f3c) main_clock2_btn_pane_cp01_ParamLimits

0xcddf,	// (0x00069f3c) main_clock2_btn_pane_cp01

0xe4f1,	// (0x0006b64e) list_cale_mrui_pane_ParamLimits

0xe91d,	// (0x0006ba7a) main_cf0_pane_g2

0x0001,

0x0a14,	// (0x0005db71) main_cf0_pane_g

0x8868,	// (0x000659c5) area_left_week_number_pane_ParamLimits

0x887b,	// (0x000659d8) area_top_day_name_pane_ParamLimits

0x8889,	// (0x000659e6) frame_month_view_pane_ParamLimits

0xe9f8,	// (0x0006bb55) grid_month_view_pane_ParamLimits

0xea06,	// (0x0006bb63) frm_month_g1_ParamLimits

0x8907,	// (0x00065a64) frm_month_g2_ParamLimits

0x8918,	// (0x00065a75) frm_month_g3_ParamLimits

0x8929,	// (0x00065a86) frm_month_g4_ParamLimits

0x893a,	// (0x00065a97) frm_month_g5_ParamLimits

0x894b,	// (0x00065aa8) frm_month_g6_ParamLimits

0x895e,	// (0x00065abb) frm_month_g7_ParamLimits

0xea13,	// (0x0006bb70) frm_month_g8_ParamLimits

0x8971,	// (0x00065ace) frm_month_g9_ParamLimits

0x897e,	// (0x00065adb) frm_month_g10_ParamLimits

0x898b,	// (0x00065ae8) frm_month_g11_ParamLimits

0x8998,	// (0x00065af5) frm_month_g12_ParamLimits

0x89a5,	// (0x00065b02) frm_month_g13_ParamLimits

0x89b4,	// (0x00065b11) frm_month_g14_ParamLimits

0x89c3,	// (0x00065b20) frm_month_g15_ParamLimits

0x89d2,	// (0x00065b2f) frm_month_g16_ParamLimits

0xfbf3,	// (0x0006cd50) frm_month_g_ParamLimits

0xea20,	// (0x0006bb7d) cell_top_day_name_pane_t1_ParamLimits

0x89e1,	// (0x00065b3e) cell_area_left_week_number_pane_g1_ParamLimits

0x89f0,	// (0x00065b4d) cell_area_left_week_number_pane_t1_ParamLimits

0xa6a8,	// (0x00067805) cell_month_view_pane_g1_ParamLimits

0x8a06,	// (0x00065b63) cell_month_view_pane_t1_ParamLimits

0xa625,	// (0x00067782) main_clock2_btn_pane_g1

0xeb27,	// (0x0006bc84) main_clock2_btn_pane_t1

0xa1e1,	// (0x0006733e) listscroll_cmail_pane_ParamLimits

0xe2b8,	// (0x0006b415) main_sp_fs_email_pane_g1_ParamLimits

0xe2c4,	// (0x0006b421) main_sp_fs_email_pane_g2_ParamLimits

0x08bf,	// (0x0005da1c) main_sp_fs_email_pane_g_ParamLimits

0xe5fa,	// (0x0006b757) list_recal_day_pane_ParamLimits

0xe60b,	// (0x0006b768) mian_recal_day_pane_t1

0x7b0b,	// (0x00064c68) list_single_dyc_row_text_pane_t4_ParamLimits

0x7b0b,	// (0x00064c68) list_single_dyc_row_text_pane_t4

0x7b48,	// (0x00064ca5) list_single_dyc_row_text_pane_t5_ParamLimits

0x7b48,	// (0x00064ca5) list_single_dyc_row_text_pane_t5

0xa3e7,	// (0x00067544) list_single_dyc_row_text_pane_t6_ParamLimits

0xa3e7,	// (0x00067544) list_single_dyc_row_text_pane_t6

0x2cce,	// (0x0005fe2b) aid_mgn_list_cale_time_pane

0x3c87,	// (0x00060de4) main_gallery2_pane_ParamLimits

0xcdf3,	// (0x00069f50) main_clock2_pane_cp01_t1

0xce01,	// (0x00069f5e) main_clock2_pane_cp01_t3

0x0001,

0x03a5,	// (0x0005d502) main_clock2_pane_cp01_t

0x15d8,	// (0x0005e735) cale_week_scroll_pane_g16_ParamLimits

0x15d8,	// (0x0005e735) cale_week_scroll_pane_g16

0xa94f,	// (0x00067aac) vorec_slider_pane

0xeab1,	// (0x0006bc0e) vidtel_button_pane_t1_ParamLimits

0x81e8,	// (0x00065345) main_fs_bigclock_clock_pane_g1_ParamLimits

0x81e8,	// (0x00065345) main_fs_bigclock_clock_pane_g2_ParamLimits

0x81f7,	// (0x00065354) main_fs_bigclock_clock_pane_g3_ParamLimits

0x81f7,	// (0x00065354) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfb82,	// (0x0006ccdf) main_fs_bigclock_clock_pane_g_ParamLimits

0x8207,	// (0x00065364) main_fs_bigclock_clock_pane_t1_ParamLimits

0x821c,	// (0x00065379) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfb8b,	// (0x0006cce8) main_fs_bigclock_clock_pane_t_ParamLimits

0x4386,	// (0x000614e3) main_mup3_lyrics_pane_ParamLimits

0x4386,	// (0x000614e3) main_mup3_lyrics_pane

0x8f8d,	// (0x000660ea) main_mup3_lyrics_pane_t1_ParamLimits

0x8f8d,	// (0x000660ea) main_mup3_lyrics_pane_t1

0x4f5c,	// (0x000620b9) aid_main_mp4_pane_t1_area

0x4f66,	// (0x000620c3) aid_main_mp4_pane_t2_area

0x5073,	// (0x000621d0) main_mp4_pane_g7_ParamLimits

0x5073,	// (0x000621d0) main_mp4_pane_g7

0x507f,	// (0x000621dc) main_mp4_pane_g8_ParamLimits

0x507f,	// (0x000621dc) main_mp4_pane_g8

0x549f,	// (0x000625fc) aid_call6_pane_g1_size

0x8bf1,	// (0x00065d4e) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8bf1,	// (0x00065d4e) list_double_large_graphic_phob2_other_pane

0x8fb4,	// (0x00066111) list_double_large_graphic_phob2_other_pane_g1

0x9b88,	// (0x00066ce5) list_highlight_pane_cp026

0xa1e1,	// (0x0006733e) main_welc_pane_ParamLimits

0x799c,	// (0x00064af9) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x799c,	// (0x00064af9) main_sp_fs_ctrlbar_pane_g3

0x79b6,	// (0x00064b13) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x79b6,	// (0x00064b13) main_sp_fs_ctrlbar_pane_g4

0x79e8,	// (0x00064b45) toolbar2_fixed_button_pane_cp01

0x79f3,	// (0x00064b50) toolbar2_fixed_button_pane_cp02

0x7a00,	// (0x00064b5d) toolbar2_fixed_button_pane_cp03

0x8cc5,	// (0x00065e22) list_welc_entry_pane_ParamLimits

0x8cc5,	// (0x00065e22) list_welc_entry_pane

0x8d25,	// (0x00065e82) main_welc_pane_g3_ParamLimits

0x8d25,	// (0x00065e82) main_welc_pane_g3

0x8d6f,	// (0x00065ecc) main_welc_pane_t2_ParamLimits

0x8d6f,	// (0x00065ecc) main_welc_pane_t2

0x8d83,	// (0x00065ee0) main_welc_pane_t3_ParamLimits

0x8d83,	// (0x00065ee0) main_welc_pane_t3

0x0005,

0xfc55,	// (0x0006cdb2) main_welc_pane_t_ParamLimits

0xfc55,	// (0x0006cdb2) main_welc_pane_t

0x8e87,	// (0x00065fe4) welc_button_pane_ParamLimits

0x8e87,	// (0x00065fe4) welc_button_pane

0x8ee9,	// (0x00066046) welc_service_logo_pane_ParamLimits

0x8ee9,	// (0x00066046) welc_service_logo_pane

0x8fbc,	// (0x00066119) list_single_welc_entry_pane_ParamLimits

0x8fbc,	// (0x00066119) list_single_welc_entry_pane

0x8fcd,	// (0x0006612a) list_single_welc_entry_pane_g1

0x8fd7,	// (0x00066134) list_single_welc_entry_pane_t1

0x8fe5,	// (0x00066142) list_single_welc_entry_pane_t2

0x0001,

0xfc67,	// (0x0006cdc4) list_single_welc_entry_pane_t

0x9b88,	// (0x00066ce5) bg_button_pane_cp035

0x8ff3,	// (0x00066150) welc_button_pane_t1

0xeb35,	// (0x0006bc92) welc_service_logo_pane_g1

0xeb3e,	// (0x0006bc9b) welc_service_logo_pane_g2

0x0001,

0x0ae5,	// (0x0005dc42) welc_service_logo_pane_g

0x0f07,	// (0x0005e064) main_int_radio_pane

0xdd21,	// (0x0006ae7e) list_single_fs_dyc_pane_g1

0x8aba,	// (0x00065c17) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8aba,	// (0x00065c17) list_double_large_graphic_phob2_pane_g3

0x8ac6,	// (0x00065c23) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8ac6,	// (0x00065c23) list_double_large_graphic_phob2_pane_g4

0x9001,	// (0x0006615e) main_int_radio1_pane_ParamLimits

0x9001,	// (0x0006615e) main_int_radio1_pane

0xeb47,	// (0x0006bca4) find_pane_cp02

0x9017,	// (0x00066174) input_focus_pane_cp12_ParamLimits

0x9017,	// (0x00066174) input_focus_pane_cp12

0x9023,	// (0x00066180) input_focus_pane_cp13_ParamLimits

0x9023,	// (0x00066180) input_focus_pane_cp13

0x903b,	// (0x00066198) input_focus_pane_cp14_ParamLimits

0x903b,	// (0x00066198) input_focus_pane_cp14

0xeb50,	// (0x0006bcad) int_radio1_listscroll_pane

0x9053,	// (0x000661b0) main_int_radio1_pane_g1_ParamLimits

0x9053,	// (0x000661b0) main_int_radio1_pane_g1

0x905f,	// (0x000661bc) main_int_radio1_pane_t1_ParamLimits

0x905f,	// (0x000661bc) main_int_radio1_pane_t1

0x9071,	// (0x000661ce) main_int_radio1_pane_t2_ParamLimits

0x9071,	// (0x000661ce) main_int_radio1_pane_t2

0x9085,	// (0x000661e2) main_int_radio1_pane_t3_ParamLimits

0x9085,	// (0x000661e2) main_int_radio1_pane_t3

0x9099,	// (0x000661f6) main_int_radio1_pane_t4_ParamLimits

0x9099,	// (0x000661f6) main_int_radio1_pane_t4

0xeb5a,	// (0x0006bcb7) main_int_radio1_pane_t5_ParamLimits

0xeb5a,	// (0x0006bcb7) main_int_radio1_pane_t5

0x90b0,	// (0x0006620d) main_int_radio1_pane_t6_ParamLimits

0x90b0,	// (0x0006620d) main_int_radio1_pane_t6

0x90c2,	// (0x0006621f) main_int_radio1_pane_t7_ParamLimits

0x90c2,	// (0x0006621f) main_int_radio1_pane_t7

0x90d4,	// (0x00066231) main_int_radio1_pane_t8_ParamLimits

0x90d4,	// (0x00066231) main_int_radio1_pane_t8

0x90e6,	// (0x00066243) main_int_radio1_pane_t9_ParamLimits

0x90e6,	// (0x00066243) main_int_radio1_pane_t9

0x90f8,	// (0x00066255) main_int_radio1_pane_t10_ParamLimits

0x90f8,	// (0x00066255) main_int_radio1_pane_t10

0x9129,	// (0x00066286) main_int_radio1_pane_t11_ParamLimits

0x9129,	// (0x00066286) main_int_radio1_pane_t11

0x915a,	// (0x000662b7) main_int_radio1_pane_t12_ParamLimits

0x915a,	// (0x000662b7) main_int_radio1_pane_t12

0x000b,

0xfc6c,	// (0x0006cdc9) main_int_radio1_pane_t_ParamLimits

0xfc6c,	// (0x0006cdc9) main_int_radio1_pane_t

0xea33,	// (0x0006bb90) int_radio_list_pane

0xea3b,	// (0x0006bb98) scroll_pane_cp037

0xeb6c,	// (0x0006bcc9) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb6c,	// (0x0006bcc9) list_double_large_graphic_int_radio_pane

0xeb80,	// (0x0006bcdd) list_double_large_graphic_int_radio_pane_g1

0xa8f4,	// (0x00067a51) list_double_large_graphic_int_radio_pane_t1

0xac1c,	// (0x00067d79) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfc85,	// (0x0006cde2) list_double_large_graphic_int_radio_pane_t

0x9b88,	// (0x00066ce5) list_highlight_pane_cp027

0xeaea,	// (0x0006bc47) main_button_pane_4

0x8d31,	// (0x00065e8e) main_welc_pane_g4_ParamLimits

0x8d31,	// (0x00065e8e) main_welc_pane_g4

0x8d95,	// (0x00065ef2) main_welc_pane_t4_ParamLimits

0x8d95,	// (0x00065ef2) main_welc_pane_t4

0x8da7,	// (0x00065f04) main_welc_pane_t5_ParamLimits

0x8da7,	// (0x00065f04) main_welc_pane_t5

0x8ddb,	// (0x00065f38) main_welc_pane_t6_ParamLimits

0x8ddb,	// (0x00065f38) main_welc_pane_t6

0x8e95,	// (0x00065ff2) welc_button_pane_2_ParamLimits

0x8e95,	// (0x00065ff2) welc_button_pane_2

0x8eaf,	// (0x0006600c) welc_button_pane_3_ParamLimits

0x8eaf,	// (0x0006600c) welc_button_pane_3

0xeaf2,	// (0x0006bc4f) welc_button_pane_4

0x8ecb,	// (0x00066028) welc_button_pane_5_ParamLimits

0x8ecb,	// (0x00066028) welc_button_pane_5

0x0d10,	// (0x0005de6d) main_popup_welc_pane

0xeb98,	// (0x0006bcf5) main_welc_sk_g3

0xeba2,	// (0x0006bcff) main_welc_sk_g4

0xebac,	// (0x0006bd09) main_welc_sk_t3

0xebbc,	// (0x0006bd19) main_welc_sk_t4

0xebcc,	// (0x0006bd29) popup_welc_pane_t4

0xebda,	// (0x0006bd37) popup_welc_pane_t5

0xebe8,	// (0x0006bd45) popup_welc_pane_t6

0x0f07,	// (0x0005e064) main_acti_pane

0x9b88,	// (0x00066ce5) main_sso_pane

0x9171,	// (0x000662ce) sso_body_pane_ParamLimits

0x9171,	// (0x000662ce) sso_body_pane

0x9180,	// (0x000662dd) sso_logo_pane_ParamLimits

0x9180,	// (0x000662dd) sso_logo_pane

0x91a9,	// (0x00066306) sso_sk_pane_ParamLimits

0x91a9,	// (0x00066306) sso_sk_pane

0xa971,	// (0x00067ace) main_sso_logo_pane_g1

0x91b6,	// (0x00066313) sso_sk_pane_t1_ParamLimits

0x91b6,	// (0x00066313) sso_sk_pane_t1

0x91ca,	// (0x00066327) sso_sk_pane_t2_ParamLimits

0x91ca,	// (0x00066327) sso_sk_pane_t2

0x0001,

0xfc8a,	// (0x0006cde7) sso_sk_pane_t_ParamLimits

0xfc8a,	// (0x0006cde7) sso_sk_pane_t

0xec2a,	// (0x0006bd87) aid_sso_gap

0xec33,	// (0x0006bd90) aid_sso_txt1

0xec3d,	// (0x0006bd9a) aid_sso_txt2

0xec47,	// (0x0006bda4) aid_sso_txt3

0x0002,

0x0b0d,	// (0x0005dc6a) aid_sso_txt

0xec51,	// (0x0006bdae) aid_sso_widget

0x9227,	// (0x00066384) sso_btn_pane_ParamLimits

0x9227,	// (0x00066384) sso_btn_pane

0x92a0,	// (0x000663fd) sso_option_pane_ParamLimits

0x92a0,	// (0x000663fd) sso_option_pane

0x931c,	// (0x00066479) sso_query_pane_ParamLimits

0x931c,	// (0x00066479) sso_query_pane

0x936c,	// (0x000664c9) sso_query_pane_cp01_ParamLimits

0x936c,	// (0x000664c9) sso_query_pane_cp01

0x93c4,	// (0x00066521) sso_t_hdr_pane_ParamLimits

0x93c4,	// (0x00066521) sso_t_hdr_pane

0x93e8,	// (0x00066545) sso_t_nml_pane_ParamLimits

0x93e8,	// (0x00066545) sso_t_nml_pane

0xec5b,	// (0x0006bdb8) sso_t_sub_pane

0x918d,	// (0x000662ea) sso_popup_window_ParamLimits

0x918d,	// (0x000662ea) sso_popup_window

0x91dc,	// (0x00066339) sso_apps_pane_ParamLimits

0x91dc,	// (0x00066339) sso_apps_pane

0x91ff,	// (0x0006635c) sso_body_pane_g1

0x9207,	// (0x00066364) sso_body_pane_t1

0x9217,	// (0x00066374) sso_body_pane_t2

0x0001,

0xfc8f,	// (0x0006cdec) sso_body_pane_t

0x9272,	// (0x000663cf) sso_btn_pane_cp01_ParamLimits

0x9272,	// (0x000663cf) sso_btn_pane_cp01

0x92ee,	// (0x0006644b) sso_prog_pane_ParamLimits

0x92ee,	// (0x0006644b) sso_prog_pane

0x9438,	// (0x00066595) sso_t_hdr_pane_t1_ParamLimits

0x9438,	// (0x00066595) sso_t_hdr_pane_t1

0xec70,	// (0x0006bdcd) input_focus_pane_cp10_ParamLimits

0xec70,	// (0x0006bdcd) input_focus_pane_cp10

0xec8a,	// (0x0006bde7) sso_query_pane_t1_ParamLimits

0xec8a,	// (0x0006bde7) sso_query_pane_t1

0xec9d,	// (0x0006bdfa) sso_query_pane_t2_ParamLimits

0xec9d,	// (0x0006bdfa) sso_query_pane_t2

0xecb7,	// (0x0006be14) sso_query_pane_t3_ParamLimits

0xecb7,	// (0x0006be14) sso_query_pane_t3

0xece1,	// (0x0006be3e) sso_query_pane_t4_ParamLimits

0xece1,	// (0x0006be3e) sso_query_pane_t4

0x0003,

0x0b19,	// (0x0005dc76) sso_query_pane_t_ParamLimits

0x0b19,	// (0x0005dc76) sso_query_pane_t

0x9b88,	// (0x00066ce5) bg_button_pane_cp22

0xeb89,	// (0x0006bce6) sso_btn_pane_t1

0x9451,	// (0x000665ae) sso_t_nml_pane_t1_ParamLimits

0x9451,	// (0x000665ae) sso_t_nml_pane_t1

0x946e,	// (0x000665cb) sso_option_row_pane_ParamLimits

0x946e,	// (0x000665cb) sso_option_row_pane

0xed05,	// (0x0006be62) sso_t_sub_pane_t1_ParamLimits

0xed05,	// (0x0006be62) sso_t_sub_pane_t1

0xa1e1,	// (0x0006733e) bg_popup_window_pane_cp11_ParamLimits

0xa1e1,	// (0x0006733e) bg_popup_window_pane_cp11

0xed22,	// (0x0006be7f) popup_sk_window_cp01_ParamLimits

0xed22,	// (0x0006be7f) popup_sk_window_cp01

0xed2f,	// (0x0006be8c) sso_popup_body_pane_ParamLimits

0xed2f,	// (0x0006be8c) sso_popup_body_pane

0xed3c,	// (0x0006be99) scroll_pane_cp21_ParamLimits

0xed3c,	// (0x0006be99) scroll_pane_cp21

0xed49,	// (0x0006bea6) sso_popup_body_t_pane_ParamLimits

0xed49,	// (0x0006bea6) sso_popup_body_t_pane

0xed56,	// (0x0006beb3) sso_popup_body_t_hdr_pane_ParamLimits

0xed56,	// (0x0006beb3) sso_popup_body_t_hdr_pane

0xed69,	// (0x0006bec6) sso_popup_body_t_nml_pane_ParamLimits

0xed69,	// (0x0006bec6) sso_popup_body_t_nml_pane

0xed87,	// (0x0006bee4) sso_popup_body_t_sub_pane_ParamLimits

0xed87,	// (0x0006bee4) sso_popup_body_t_sub_pane

0xedaa,	// (0x0006bf07) sso_popup_body_t_hdr_pane_t1

0x947b,	// (0x000665d8) sso_popup_body_t_nml_pane_t1_ParamLimits

0x947b,	// (0x000665d8) sso_popup_body_t_nml_pane_t1

0xedba,	// (0x0006bf17) sso_popup_body_t_sub_pane_t1_ParamLimits

0xedba,	// (0x0006bf17) sso_popup_body_t_sub_pane_t1

0xa971,	// (0x00067ace) sso_prog_pane_g1

0x94c2,	// (0x0006661f) sso_apps_pane_comp1_ParamLimits

0x94c2,	// (0x0006661f) sso_apps_pane_comp1

0xeddf,	// (0x0006bf3c) sso_apps_pane_comp1_g1

0xede7,	// (0x0006bf44) sso_apps_pane_comp1_t1

0xee03,	// (0x0006bf60) sso_option_row_pane_g1

0xee0b,	// (0x0006bf68) sso_option_row_pane_t1

0x8cb3,	// (0x00065e10) bg_welc_area_ParamLimits

0x8cb3,	// (0x00065e10) bg_welc_area

0x8e11,	// (0x00065f6e) sso_t_hdr_pane_a_t1_ParamLimits

0x8e11,	// (0x00065f6e) sso_t_hdr_pane_a_t1

0x8e25,	// (0x00065f82) sso_t_nml_pane_a_t1_ParamLimits

0x8e25,	// (0x00065f82) sso_t_nml_pane_a_t1

0x8e53,	// (0x00065fb0) sso_t_sub_pane_a_t1_ParamLimits

0x8e53,	// (0x00065fb0) sso_t_sub_pane_a_t1

0xeb89,	// (0x0006bce6) sso_btn_pane_t1_copy1

0x9b88,	// (0x00066ce5) welc_button_pane_2_comp1

0xebf8,	// (0x0006bd55) sso_t_hdr_pane_p_t1

0xec08,	// (0x0006bd65) sso_t_nml_pane_p_t1

0xec18,	// (0x0006bd75) sso_t_sub_pane_p_t1

0xe340,	// (0x0006b49d) list_cmail_pane_ParamLimits

0x8edb,	// (0x00066038) welc_button_pane_cp01_ParamLimits

0x8edb,	// (0x00066038) welc_button_pane_cp01

0x9b88,	// (0x00066ce5) main_att_pane

0xedf5,	// (0x0006bf52) input_focus_pane_cp10_t1

0xee0b,	// (0x0006bf68) sso_option_row_pane_t1_ParamLimits

0x94d7,	// (0x00066634) main_att_body_pane_ParamLimits

0x94d7,	// (0x00066634) main_att_body_pane

0x9503,	// (0x00066660) att_btn_pane_ParamLimits

0x9503,	// (0x00066660) att_btn_pane

0x9525,	// (0x00066682) att_btn_pane_cp01_ParamLimits

0x9525,	// (0x00066682) att_btn_pane_cp01

0x953f,	// (0x0006669c) att_li_srv_pane_ParamLimits

0x953f,	// (0x0006669c) att_li_srv_pane

0x9551,	// (0x000666ae) att_opt_pane_ParamLimits

0x9551,	// (0x000666ae) att_opt_pane

0x9595,	// (0x000666f2) att_query_pane_ParamLimits

0x9595,	// (0x000666f2) att_query_pane

0x95d9,	// (0x00066736) att_query_pane_cp01_ParamLimits

0x95d9,	// (0x00066736) att_query_pane_cp01

0x961d,	// (0x0006677a) att_t_hdr_pane_ParamLimits

0x961d,	// (0x0006677a) att_t_hdr_pane

0x967b,	// (0x000667d8) att_t_nml_pane_ParamLimits

0x967b,	// (0x000667d8) att_t_nml_pane

0x96c3,	// (0x00066820) att_t_nml_pane_cp01_ParamLimits

0x96c3,	// (0x00066820) att_t_nml_pane_cp01

0x96e7,	// (0x00066844) att_t_nmlb_pane_ParamLimits

0x96e7,	// (0x00066844) att_t_nmlb_pane

0x9701,	// (0x0006685e) att_term_pane_ParamLimits

0x9701,	// (0x0006685e) att_term_pane

0x9747,	// (0x000668a4) main_att_body_pane_g1_ParamLimits

0x9747,	// (0x000668a4) main_att_body_pane_g1

0xee21,	// (0x0006bf7e) att_t_hdr_pane_t1_ParamLimits

0xee21,	// (0x0006bf7e) att_t_hdr_pane_t1

0xee3a,	// (0x0006bf97) att_t_nml_pane_t1_ParamLimits

0xee3a,	// (0x0006bf97) att_t_nml_pane_t1

0xee5f,	// (0x0006bfbc) att_btn_pane_t1

0x9b88,	// (0x00066ce5) bg_button_pane_cp23

0x977b,	// (0x000668d8) att_li_srv_row_pane_ParamLimits

0x977b,	// (0x000668d8) att_li_srv_row_pane

0xee6f,	// (0x0006bfcc) att_t_nmlb_pane_t1_ParamLimits

0xee6f,	// (0x0006bfcc) att_t_nmlb_pane_t1

0xee88,	// (0x0006bfe5) att_query_pane_t1

0xee97,	// (0x0006bff4) att_query_pane_t2

0xeea6,	// (0x0006c003) att_query_pane_t3

0x0002,

0xfc94,	// (0x0006cdf1) att_query_pane_t

0xeeb5,	// (0x0006c012) input_focus_pane_cp11

0xeebe,	// (0x0006c01b) att_term_pane_t1_ParamLimits

0xeebe,	// (0x0006c01b) att_term_pane_t1

0x9b88,	// (0x00066ce5) att_opt_row_pane

0xeedb,	// (0x0006c038) att_opt_row_pane_g1

0xeee3,	// (0x0006c040) att_opt_row_pane_t1_ParamLimits

0xeee3,	// (0x0006c040) att_opt_row_pane_t1

0x978b,	// (0x000668e8) att_li_srv_row_pane_g1

0x9793,	// (0x000668f0) att_li_srv_row_pane_t1

0x97a8,	// (0x00066905) att_li_srv_row_pane_t2

0x0001,

0xfc9b,	// (0x0006cdf8) att_li_srv_row_pane_t

0x9b88,	// (0x00066ce5) main_call7_pane

0x9b88,	// (0x00066ce5) main_vod_pane

0xec5b,	// (0x0006bdb8) sso_t_sub_pane_ParamLimits

0x94eb,	// (0x00066648) att_btn_emg_pane_ParamLimits

0x94eb,	// (0x00066648) att_btn_emg_pane

0x9793,	// (0x000668f0) att_li_srv_row_pane_t1_ParamLimits

0x97a8,	// (0x00066905) att_li_srv_row_pane_t2_ParamLimits

0xfc9b,	// (0x0006cdf8) att_li_srv_row_pane_t_ParamLimits

0xeefc,	// (0x0006c059) att_btn_close_pane_g1

0x9b88,	// (0x00066ce5) bg_button_pane_cp24

0x97bd,	// (0x0006691a) main_vod_body_pane_ParamLimits

0x97bd,	// (0x0006691a) main_vod_body_pane

0x97cb,	// (0x00066928) main_vod_body_pane_g1_ParamLimits

0x97cb,	// (0x00066928) main_vod_body_pane_g1

0x97fb,	// (0x00066958) scroll_pane_cp24_ParamLimits

0x97fb,	// (0x00066958) scroll_pane_cp24

0x9843,	// (0x000669a0) vod_btn_pane_ParamLimits

0x9843,	// (0x000669a0) vod_btn_pane

0x9883,	// (0x000669e0) vod_det_pane_ParamLimits

0x9883,	// (0x000669e0) vod_det_pane

0x98af,	// (0x00066a0c) vod_logo_g1_ParamLimits

0x98af,	// (0x00066a0c) vod_logo_g1

0x98e9,	// (0x00066a46) vod_opt_pane_ParamLimits

0x98e9,	// (0x00066a46) vod_opt_pane

0x9919,	// (0x00066a76) vod_opt_pane_cp01_ParamLimits

0x9919,	// (0x00066a76) vod_opt_pane_cp01

0x9941,	// (0x00066a9e) vod_query_pane_ParamLimits

0x9941,	// (0x00066a9e) vod_query_pane

0x996b,	// (0x00066ac8) vod_query_pane_cp01_ParamLimits

0x996b,	// (0x00066ac8) vod_query_pane_cp01

0x9977,	// (0x00066ad4) vod_t_nml_pane_ParamLimits

0x9977,	// (0x00066ad4) vod_t_nml_pane

0x9a25,	// (0x00066b82) vod_t_nml_pane_cp01_ParamLimits

0x9a25,	// (0x00066b82) vod_t_nml_pane_cp01

0x9a5d,	// (0x00066bba) vod_t_sub_pane_ParamLimits

0x9a5d,	// (0x00066bba) vod_t_sub_pane

0x9a8b,	// (0x00066be8) vod_t_sub_pane_cp01_ParamLimits

0x9a8b,	// (0x00066be8) vod_t_sub_pane_cp01

0xeeb5,	// (0x0006c012) vod_query_field_pane

0xee88,	// (0x0006bfe5) vod_query_pane_t1

0x9b88,	// (0x00066ce5) bg_button_pane_cp25

0xef04,	// (0x0006c061) sso_btn_pane_t1_copy2

0x9ab3,	// (0x00066c10) vod_t_nml_pane_t1_ParamLimits

0x9ab3,	// (0x00066c10) vod_t_nml_pane_t1

0xef14,	// (0x0006c071) vod_opt_row_pane_ParamLimits

0xef14,	// (0x0006c071) vod_opt_row_pane

0xef26,	// (0x0006c083) vod_t_sub_pane_t1_ParamLimits

0xef26,	// (0x0006c083) vod_t_sub_pane_t1

0x9af0,	// (0x00066c4d) vod_det_cell_pane_ParamLimits

0x9af0,	// (0x00066c4d) vod_det_cell_pane

0x9b88,	// (0x00066ce5) input_focus_pane_cp15

0xef4e,	// (0x0006c0ab) vod_query_field_pane_t1

0xef5c,	// (0x0006c0b9) vod_opt_row_pane_g1_ParamLimits

0xef5c,	// (0x0006c0b9) vod_opt_row_pane_g1

0xef68,	// (0x0006c0c5) vod_opt_row_pane_t1_ParamLimits

0xef68,	// (0x0006c0c5) vod_opt_row_pane_t1

0xef8d,	// (0x0006c0ea) vod_det_cell_field_pane

0xef96,	// (0x0006c0f3) vod_det_cell_pane_g1

0xee88,	// (0x0006bfe5) vod_det_cell_pane_t1

0x9b88,	// (0x00066ce5) input_focus_pane_cp16

0xef4e,	// (0x0006c0ab) vod_det_cell_field_pane_t1

0x9b02,	// (0x00066c5f) call7_btn_grp_pane_ParamLimits

0x9b02,	// (0x00066c5f) call7_btn_grp_pane

0x9b0f,	// (0x00066c6c) call7_bubble_pane_ParamLimits

0x9b0f,	// (0x00066c6c) call7_bubble_pane

0x9b1e,	// (0x00066c7b) cell_call7_btn_pane_ParamLimits

0x9b1e,	// (0x00066c7b) cell_call7_btn_pane

0x9b2f,	// (0x00066c8c) call7_pane_g1_ParamLimits

0x9b2f,	// (0x00066c8c) call7_pane_g1

0x9b3e,	// (0x00066c9b) call7_windows_conf_pane_ParamLimits

0x9b3e,	// (0x00066c9b) call7_windows_conf_pane

0x9b5e,	// (0x00066cbb) popup_call7_1st_window_ParamLimits

0x9b5e,	// (0x00066cbb) popup_call7_1st_window

0x9b6c,	// (0x00066cc9) popup_call7_2nd_window_ParamLimits

0x9b6c,	// (0x00066cc9) popup_call7_2nd_window

0x9b7a,	// (0x00066cd7) popup_call7_3rd_window_ParamLimits

0x9b7a,	// (0x00066cd7) popup_call7_3rd_window

0x9b88,	// (0x00066ce5) bg_button_pane_cp26

0xe9d5,	// (0x0006bb32) cell_call7_btn_pane_g1

0xef3f,	// (0x0006c09c) cell_call7_btn_pane_t1

0x9b88,	// (0x00066ce5) bg_popup_window_pane_cp12

0xef9e,	// (0x0006c0fb) popup_call7_1st_window_g1

0xefa6,	// (0x0006c103) popup_call7_1st_window_g2

0xefae,	// (0x0006c10b) popup_call7_1st_window_g3

0x0002,

0x0b2e,	// (0x0005dc8b) popup_call7_1st_window_g

0xefb6,	// (0x0006c113) popup_call7_1st_window_t1

0xefc5,	// (0x0006c122) popup_call7_1st_window_t2

0xefd5,	// (0x0006c132) popup_call7_1st_window_t3

0x0002,

0x0b35,	// (0x0005dc92) popup_call7_1st_window_t

0x9b88,	// (0x00066ce5) bg_popup_window_pane_cp13

0xefe5,	// (0x0006c142) popup_call7_2nd_window_g1

0xefed,	// (0x0006c14a) popup_call7_2nd_window_g2

0xeff5,	// (0x0006c152) popup_call7_2nd_window_g3

0x0002,

0x0b3c,	// (0x0005dc99) popup_call7_2nd_window_g

0xeffd,	// (0x0006c15a) popup_call7_2nd_window_t1

0x9b88,	// (0x00066ce5) bg_popup_window_pane_cp14

0xf00c,	// (0x0006c169) call7_list_conf_pane

0xf014,	// (0x0006c171) call7_list_conf_row_pane_ParamLimits

0xf014,	// (0x0006c171) call7_list_conf_row_pane

0xf027,	// (0x0006c184) call7_list_conf_row_pane_g1

0xf02f,	// (0x0006c18c) call7_list_conf_row_pane_g2

0x0001,

0x0b43,	// (0x0005dca0) call7_list_conf_row_pane_g

0xf037,	// (0x0006c194) call7_list_conf_row_pane_t1

0x9b88,	// (0x00066ce5) list_highlight_pane_cp22
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Small
